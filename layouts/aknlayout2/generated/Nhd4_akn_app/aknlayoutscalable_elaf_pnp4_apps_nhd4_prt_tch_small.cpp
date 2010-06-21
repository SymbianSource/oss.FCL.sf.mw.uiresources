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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003cfa1 };

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
0x2149,	// (0x0003f0ea) Screen

0x2155,	// (0x0003f0f6) application_window

0x21b1,	// (0x0003f152) area_bottom_pane_ParamLimits

0x21b1,	// (0x0003f152) area_bottom_pane

0x220a,	// (0x0003f1ab) area_top_pane_ParamLimits

0x220a,	// (0x0003f1ab) area_top_pane

0x226e,	// (0x0003f20f) call_video_uplink_pane_ParamLimits

0x226e,	// (0x0003f20f) call_video_uplink_pane

0x22ad,	// (0x0003f24e) main_pane_ParamLimits

0x22ad,	// (0x0003f24e) main_pane

0xc970,	// (0x00049911) context_pane

0x54fd,	// (0x0004249e) navi_pane

0x5523,	// (0x000424c4) popup_cale_events_window_ParamLimits

0x5523,	// (0x000424c4) popup_cale_events_window

0xc983,	// (0x00049924) popup_mup_playback_window

0x553b,	// (0x000424dc) signal_pane

0xa8e2,	// (0x00047883) main_browser_pane

0xaaa7,	// (0x00047a48) main_burst_pane

0x538d,	// (0x0004232e) main_calc_pane

0xc956,	// (0x000498f7) main_cale_day_pane

0x29f5,	// (0x0003f996) main_cale_month_pane

0xc956,	// (0x000498f7) main_cale_week_pane

0xaaa7,	// (0x00047a48) main_call_pane

0xa5a0,	// (0x00047541) main_call_poc_pane

0xaaa7,	// (0x00047a48) main_camera_pane

0xaaa7,	// (0x00047a48) main_chi_dic_pane

0xb2b3,	// (0x00048254) main_clock_pane

0xa5a0,	// (0x00047541) main_fmradio_pane

0xaaa7,	// (0x00047a48) main_graph_messa_pane

0xa5a0,	// (0x00047541) main_help_pane

0xa8e2,	// (0x00047883) main_im_pane

0xa811,	// (0x000477b2) main_image_pane_ParamLimits

0xa811,	// (0x000477b2) main_image_pane

0xa5a0,	// (0x00047541) main_location2_pane

0xaaa7,	// (0x00047a48) main_location_pane

0xa811,	// (0x000477b2) main_messa_pane

0xa5a0,	// (0x00047541) main_mp2_pane

0xaaa7,	// (0x00047a48) main_mp_pane

0xa5a0,	// (0x00047541) main_msg_pane

0xa5a0,	// (0x00047541) main_mup_eq_pane

0xa5a0,	// (0x00047541) main_mup_pane

0xa8e2,	// (0x00047883) main_notes_pane

0xa5a0,	// (0x00047541) main_pec_pane

0xa5a0,	// (0x00047541) main_phob_pane

0xa5a0,	// (0x00047541) main_pinb_pane

0xa5a0,	// (0x00047541) main_postcard_pane

0xa5a0,	// (0x00047541) main_qdial_pane

0xaaa7,	// (0x00047a48) main_skin_pane

0xa5a0,	// (0x00047541) main_smil2_pane

0xaaa7,	// (0x00047a48) main_smil_pane

0xaaa7,	// (0x00047a48) main_video_pane

0xaaa7,	// (0x00047a48) main_video_tele_pane

0xa811,	// (0x000477b2) main_viewer_pane_ParamLimits

0xa811,	// (0x000477b2) main_viewer_pane

0xaaa7,	// (0x00047a48) main_vorec_pane

0x53cb,	// (0x0004236c) popup_blid_sat_info_window_ParamLimits

0x53cb,	// (0x0004236c) popup_blid_sat_info_window

0x53eb,	// (0x0004238c) popup_dyc_status_message_window_ParamLimits

0x53eb,	// (0x0004238c) popup_dyc_status_message_window

0x53f9,	// (0x0004239a) popup_grid_large_graphic_window_ParamLimits

0x53f9,	// (0x0004239a) popup_grid_large_graphic_window

0x5488,	// (0x00042429) popup_loc_request_window_ParamLimits

0x5488,	// (0x00042429) popup_loc_request_window

0x54d5,	// (0x00042476) popup_wml_address_window_ParamLimits

0x54d5,	// (0x00042476) popup_wml_address_window

0x5265,	// (0x00042206) call_muted_g1

0x4f21,	// (0x00041ec2) popup_call_audio_conf_window_ParamLimits

0x4f21,	// (0x00041ec2) popup_call_audio_conf_window

0x5275,	// (0x00042216) popup_call_audio_first_window_ParamLimits

0x5275,	// (0x00042216) popup_call_audio_first_window

0x52b5,	// (0x00042256) popup_call_audio_in_window_ParamLimits

0x52b5,	// (0x00042256) popup_call_audio_in_window

0x52d9,	// (0x0004227a) popup_call_audio_out_window_ParamLimits

0x52d9,	// (0x0004227a) popup_call_audio_out_window

0x52fb,	// (0x0004229c) popup_call_audio_second_window_ParamLimits

0x52fb,	// (0x0004229c) popup_call_audio_second_window

0x532b,	// (0x000422cc) popup_call_audio_wait_window_ParamLimits

0x532b,	// (0x000422cc) popup_call_audio_wait_window

0x534c,	// (0x000422ed) popup_number_entry_window_ParamLimits

0x534c,	// (0x000422ed) popup_number_entry_window

0xa18d,	// (0x0004712e) bg_popup_call_pane_cp05_ParamLimits

0xa18d,	// (0x0004712e) bg_popup_call_pane_cp05

0xa1ad,	// (0x0004714e) popup_number_entry_window_t1

0xa1c0,	// (0x00047161) popup_number_entry_window_t2

0xa1d2,	// (0x00047173) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0004c067) popup_number_entry_window_t

0xa1e4,	// (0x00047185) text_title_cp2

0xa1f7,	// (0x00047198) bg_popup_call_pane_cp_ParamLimits

0xa1f7,	// (0x00047198) bg_popup_call_pane_cp

0xa205,	// (0x000471a6) call_thumbnail_pane

0xa20d,	// (0x000471ae) popup_call_audio_in_window_g1_ParamLimits

0xa20d,	// (0x000471ae) popup_call_audio_in_window_g1

0xa219,	// (0x000471ba) popup_call_audio_in_window_g2_ParamLimits

0xa219,	// (0x000471ba) popup_call_audio_in_window_g2

0xa225,	// (0x000471c6) popup_call_audio_in_window_g3_ParamLimits

0xa225,	// (0x000471c6) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0004c070) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0004c070) popup_call_audio_in_window_g

0xa231,	// (0x000471d2) popup_call_audio_in_window_t1_ParamLimits

0xa231,	// (0x000471d2) popup_call_audio_in_window_t1

0xa24d,	// (0x000471ee) popup_call_audio_in_window_t2_ParamLimits

0xa24d,	// (0x000471ee) popup_call_audio_in_window_t2

0xa269,	// (0x0004720a) popup_call_audio_in_window_t3_ParamLimits

0xa269,	// (0x0004720a) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0004c077) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0004c077) popup_call_audio_in_window_t

0xa1f7,	// (0x00047198) bg_popup_call_pane_cp01_ParamLimits

0xa1f7,	// (0x00047198) bg_popup_call_pane_cp01

0xa205,	// (0x000471a6) call_thumbnail_pane_cp02

0xa27c,	// (0x0004721d) call_type_pane_cp022

0xa284,	// (0x00047225) popup_call_audio_out_window_g1_ParamLimits

0xa284,	// (0x00047225) popup_call_audio_out_window_g1

0xa296,	// (0x00047237) popup_call_audio_out_window_g2_ParamLimits

0xa296,	// (0x00047237) popup_call_audio_out_window_g2

0xa2a2,	// (0x00047243) popup_call_audio_out_window_g3_ParamLimits

0xa2a2,	// (0x00047243) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0004c07e) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0004c07e) popup_call_audio_out_window_g

0xa2b4,	// (0x00047255) popup_call_audio_out_window_t1_ParamLimits

0xa2b4,	// (0x00047255) popup_call_audio_out_window_t1

0xa2cc,	// (0x0004726d) popup_call_audio_out_window_t2_ParamLimits

0xa2cc,	// (0x0004726d) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0004c085) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0004c085) popup_call_audio_out_window_t

0xa2e1,	// (0x00047282) bg_popup_call_pane_ParamLimits

0xa2e1,	// (0x00047282) bg_popup_call_pane

0x24b1,	// (0x0003f452) call_thumbnail_pane_cp_ParamLimits

0x24b1,	// (0x0003f452) call_thumbnail_pane_cp

0xa365,	// (0x00047306) call_type_pane_cp01_ParamLimits

0xa365,	// (0x00047306) call_type_pane_cp01

0xa3a9,	// (0x0004734a) popup_call_audio_first_window_g1_ParamLimits

0xa3a9,	// (0x0004734a) popup_call_audio_first_window_g1

0xa3f5,	// (0x00047396) popup_call_audio_first_window_g2_ParamLimits

0xa3f5,	// (0x00047396) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0004c08a) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0004c08a) popup_call_audio_first_window_g

0xa439,	// (0x000473da) popup_call_audio_first_window_t1_ParamLimits

0xa439,	// (0x000473da) popup_call_audio_first_window_t1

0xa4e5,	// (0x00047486) popup_call_audio_first_window_t4_ParamLimits

0xa4e5,	// (0x00047486) popup_call_audio_first_window_t4

0xa571,	// (0x00047512) popup_call_audio_first_window_t5_ParamLimits

0xa571,	// (0x00047512) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0004c08f) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0004c08f) popup_call_audio_first_window_t

0xa5a0,	// (0x00047541) bg_popup_call_pane_cp02

0xa5aa,	// (0x0004754b) call_type_pane_cp023

0xa5b2,	// (0x00047553) popup_call_audio_wait_window_g1

0xa5ba,	// (0x0004755b) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004c096) popup_call_audio_wait_window_g

0xa5c2,	// (0x00047563) popup_call_audio_wait_window_t3

0xa5d0,	// (0x00047571) bg_popup_call_pane_cp03_ParamLimits

0xa5d0,	// (0x00047571) bg_popup_call_pane_cp03

0xa630,	// (0x000475d1) call_thumbnail_pane_cp011_ParamLimits

0xa630,	// (0x000475d1) call_thumbnail_pane_cp011

0xa63c,	// (0x000475dd) call_type_pane_cp034_ParamLimits

0xa63c,	// (0x000475dd) call_type_pane_cp034

0xa678,	// (0x00047619) popup_call_audio_second_window_g1_ParamLimits

0xa678,	// (0x00047619) popup_call_audio_second_window_g1

0xa6b4,	// (0x00047655) popup_call_audio_second_window_g2_ParamLimits

0xa6b4,	// (0x00047655) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0004c09b) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0004c09b) popup_call_audio_second_window_g

0xa6f0,	// (0x00047691) popup_call_audio_second_window_t1_ParamLimits

0xa6f0,	// (0x00047691) popup_call_audio_second_window_t1

0xa771,	// (0x00047712) popup_call_audio_second_window_t2_ParamLimits

0xa771,	// (0x00047712) popup_call_audio_second_window_t2

0xa7bd,	// (0x0004775e) popup_call_audio_second_window_t3_ParamLimits

0xa7bd,	// (0x0004775e) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0004c0a0) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0004c0a0) popup_call_audio_second_window_t

0xa5a0,	// (0x00047541) bg_popup_call_pane_cp04

0xa7f3,	// (0x00047794) list_conf_pane

0xa7fb,	// (0x0004779c) popup_call_audio_conf_window_t1

0xa809,	// (0x000477aa) call_thumbnail_pane_g1

0xa811,	// (0x000477b2) bg_pinb_pane_ParamLimits

0xa811,	// (0x000477b2) bg_pinb_pane

0xa81f,	// (0x000477c0) find_pinb_pane

0xa828,	// (0x000477c9) listscroll_pinb_pane_ParamLimits

0xa828,	// (0x000477c9) listscroll_pinb_pane

0xa837,	// (0x000477d8) pinb_bg_pane_g1

0x24d5,	// (0x0003f476) pinb_bg_pane_g2

0x24e1,	// (0x0003f482) pinb_bg_pane_g3

0x24ed,	// (0x0003f48e) pinb_bg_pane_g4

0x24f9,	// (0x0003f49a) pinb_bg_pane_g5

0x2505,	// (0x0003f4a6) pinb_bg_pane_g6

0x2510,	// (0x0003f4b1) pinb_bg_pane_g7

0x251b,	// (0x0003f4bc) pinb_bg_pane_g8

0x2526,	// (0x0003f4c7) pinb_bg_pane_g9

0x2530,	// (0x0003f4d1) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0004c0a7) pinb_bg_pane_g

0x254d,	// (0x0003f4ee) grid_pinb_pane

0x2558,	// (0x0003f4f9) list_pinb_pane

0x2563,	// (0x0003f504) scroll_pane_cp01_ParamLimits

0x2563,	// (0x0003f504) scroll_pane_cp01

0xa841,	// (0x000477e2) find_pinb_pane_g1_ParamLimits

0xa841,	// (0x000477e2) find_pinb_pane_g1

0xa859,	// (0x000477fa) find_pinb_pane_t1

0xa86b,	// (0x0004780c) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0004c0c1) find_pinb_pane_t

0xa880,	// (0x00047821) input_focus_pane_cp01_ParamLimits

0xa880,	// (0x00047821) input_focus_pane_cp01

0x2575,	// (0x0003f516) cell_pinb_pane_ParamLimits

0x2575,	// (0x0003f516) cell_pinb_pane

0x25a0,	// (0x0003f541) cell_pinb_pane_g1_ParamLimits

0x25a0,	// (0x0003f541) cell_pinb_pane_g1

0xa88c,	// (0x0004782d) cell_pinb_pane_g2_ParamLimits

0xa88c,	// (0x0004782d) cell_pinb_pane_g2

0xa898,	// (0x00047839) cell_pinb_pane_g3_ParamLimits

0xa898,	// (0x00047839) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0004c0c6) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0004c0c6) cell_pinb_pane_g

0xa5a0,	// (0x00047541) grid_highlight_pane_cp01

0x25b5,	// (0x0003f556) list_pinb_item_pane_ParamLimits

0x25b5,	// (0x0003f556) list_pinb_item_pane

0xa5a0,	// (0x00047541) list_highlight_pane_cp02

0x25de,	// (0x0003f57f) list_pinb_item_pane_g1_ParamLimits

0x25de,	// (0x0003f57f) list_pinb_item_pane_g1

0x25eb,	// (0x0003f58c) list_pinb_item_pane_g2_ParamLimits

0x25eb,	// (0x0003f58c) list_pinb_item_pane_g2

0x25f7,	// (0x0003f598) list_pinb_item_pane_g3_ParamLimits

0x25f7,	// (0x0003f598) list_pinb_item_pane_g3

0x2608,	// (0x0003f5a9) list_pinb_item_pane_g4_ParamLimits

0x2608,	// (0x0003f5a9) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0004c0cd) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0004c0cd) list_pinb_item_pane_g

0x2614,	// (0x0003f5b5) list_pinb_item_pane_t1_ParamLimits

0x2614,	// (0x0003f5b5) list_pinb_item_pane_t1

0x2645,	// (0x0003f5e6) calc_display_pane

0x2663,	// (0x0003f604) calc_paper_pane

0x267f,	// (0x0003f620) grid_calc_pane

0xa5a0,	// (0x00047541) bg_list_pane_cp01

0x26ab,	// (0x0003f64c) clock_g1

0x26b3,	// (0x0003f654) clock_g2

0x0001,

0xf135,	// (0x0004c0d6) clock_g

0x26bd,	// (0x0003f65e) clock_t1_ParamLimits

0x26bd,	// (0x0003f65e) clock_t1

0x26d2,	// (0x0003f673) clock_t2_ParamLimits

0x26d2,	// (0x0003f673) clock_t2

0x26e4,	// (0x0003f685) clock_t3_ParamLimits

0x26e4,	// (0x0003f685) clock_t3

0x26f6,	// (0x0003f697) clock_t4_ParamLimits

0x26f6,	// (0x0003f697) clock_t4

0x2708,	// (0x0003f6a9) clock_t5_ParamLimits

0x2708,	// (0x0003f6a9) clock_t5

0x271d,	// (0x0003f6be) clock_t6_ParamLimits

0x271d,	// (0x0003f6be) clock_t6

0x272f,	// (0x0003f6d0) clock_t7_ParamLimits

0x272f,	// (0x0003f6d0) clock_t7

0x2741,	// (0x0003f6e2) clock_t8_ParamLimits

0x2741,	// (0x0003f6e2) clock_t8

0x2757,	// (0x0003f6f8) clock_t9_ParamLimits

0x2757,	// (0x0003f6f8) clock_t9

0x0008,

0xf13a,	// (0x0004c0db) clock_t_ParamLimits

0xf13a,	// (0x0004c0db) clock_t

0xa8a4,	// (0x00047845) popup_clock_analogue_window_cp02

0xa8a4,	// (0x00047845) popup_clock_digital_window_cp01

0xa8ac,	// (0x0004784d) listscroll_help_pane

0xa5a0,	// (0x00047541) phob_pre_status_pane

0xa8b6,	// (0x00047857) grid_qdial_pane

0xa811,	// (0x000477b2) listscroll_mce_pane

0xa811,	// (0x000477b2) bg_notes_pane

0xa8c0,	// (0x00047861) list_notes_pane

0x276d,	// (0x0003f70e) scroll_pane_cp06

0xa8ce,	// (0x0004786f) bg_calc_paper_pane

0x277c,	// (0x0003f71d) list_calc_pane

0xa8e2,	// (0x00047883) bg_calc_display_pane

0x2796,	// (0x0003f737) calc_display_pane_t1

0x27ab,	// (0x0003f74c) calc_display_pane_t2

0x27c0,	// (0x0003f761) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0004c0ee) calc_display_pane_t

0x27d2,	// (0x0003f773) cell_calc_pane_ParamLimits

0x27d2,	// (0x0003f773) cell_calc_pane

0xa8ee,	// (0x0004788f) bg_calc_paper_pane_g1

0xa8fa,	// (0x0004789b) bg_calc_paper_pane_g2

0xa906,	// (0x000478a7) bg_calc_paper_pane_g3

0xa912,	// (0x000478b3) bg_calc_paper_pane_g4

0xa91e,	// (0x000478bf) bg_calc_paper_pane_g5

0x27ff,	// (0x0003f7a0) bg_calc_paper_pane_g6

0x2810,	// (0x0003f7b1) bg_calc_paper_pane_g7

0x2821,	// (0x0003f7c2) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0004c0f5) bg_calc_paper_pane_g

0x2832,	// (0x0003f7d3) calc_bg_paper_pane_g9

0x2843,	// (0x0003f7e4) list_calc_item_pane_ParamLimits

0x2843,	// (0x0003f7e4) list_calc_item_pane

0xa92a,	// (0x000478cb) list_calc_item_pane_g1

0x2870,	// (0x0003f811) list_calc_item_pane_t1_ParamLimits

0x2870,	// (0x0003f811) list_calc_item_pane_t1

0x2882,	// (0x0003f823) list_calc_item_pane_t2_ParamLimits

0x2882,	// (0x0003f823) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0004c106) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0004c106) list_calc_item_pane_t

0xa937,	// (0x000478d8) cell_calc_pane_g1

0xa941,	// (0x000478e2) grid_highlight_pane_cp02

0x28b2,	// (0x0003f853) bg_calc_display_pane_g1

0x28bb,	// (0x0003f85c) bg_calc_display_pane_g2

0x28c5,	// (0x0003f866) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0004c110) bg_calc_display_pane_g

0x28ce,	// (0x0003f86f) cell_qdial_pane_ParamLimits

0x28ce,	// (0x0003f86f) cell_qdial_pane

0x28e2,	// (0x0003f883) cell_qdial_pane_g1_ParamLimits

0x28e2,	// (0x0003f883) cell_qdial_pane_g1

0x28ef,	// (0x0003f890) cell_qdial_pane_g2_ParamLimits

0x28ef,	// (0x0003f890) cell_qdial_pane_g2

0xa963,	// (0x00047904) cell_qdial_pane_g3_ParamLimits

0xa963,	// (0x00047904) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0004c117) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0004c117) cell_qdial_pane_g

0x290c,	// (0x0003f8ad) cell_qdial_pane_t1_ParamLimits

0x290c,	// (0x0003f8ad) cell_qdial_pane_t1

0x2924,	// (0x0003f8c5) cell_qdial_pane_t2_ParamLimits

0x2924,	// (0x0003f8c5) cell_qdial_pane_t2

0x2937,	// (0x0003f8d8) cell_qdial_pane_t3_ParamLimits

0x2937,	// (0x0003f8d8) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0004c120) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0004c120) cell_qdial_pane_t

0xa5a0,	// (0x00047541) grid_highlight_pane_cp04

0xa96f,	// (0x00047910) thumbnail_qdial_pane_ParamLimits

0xa96f,	// (0x00047910) thumbnail_qdial_pane

0xa9cb,	// (0x0004796c) list_help_pane

0xa9d4,	// (0x00047975) scroll_pane_cp02

0x294a,	// (0x0003f8eb) help_list_pane_t1_ParamLimits

0x294a,	// (0x0003f8eb) help_list_pane_t1

0x2981,	// (0x0003f922) bg_notes_pane_g2

0x2989,	// (0x0003f92a) bg_notes_pane_g3

0x2991,	// (0x0003f932) notes_bg_pane_g1

0x2999,	// (0x0003f93a) notes_bg_pane_g4

0x29a1,	// (0x0003f942) notes_bg_pane_g5

0x29a9,	// (0x0003f94a) notes_bg_pane_g6

0x29b1,	// (0x0003f952) notes_bg_pane_g7

0x29b9,	// (0x0003f95a) notes_bg_pane_g8

0x29c1,	// (0x0003f962) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0004c13e) notes_bg_pane_g

0x29c9,	// (0x0003f96a) list_notes_text_pane_ParamLimits

0x29c9,	// (0x0003f96a) list_notes_text_pane

0xa9dd,	// (0x0004797e) list_notes_text_pane_g1

0x0d46,	// (0x0003dce7) list_notes_text_pane_t1

0x29f5,	// (0x0003f996) listscroll_cale_week_pane

0x2a1a,	// (0x0003f9bb) bg_cale_heading_pane

0xaa00,	// (0x000479a1) bg_cale_pane_cp01

0x2a3c,	// (0x0003f9dd) cale_week_corner_pane

0x2a56,	// (0x0003f9f7) cale_week_day_heading_pane

0x2a78,	// (0x0003fa19) cale_week_scroll_pane_g1

0x2a95,	// (0x0003fa36) cale_week_scroll_pane_g2

0x2aa8,	// (0x0003fa49) cale_week_scroll_pane_g3

0x2abb,	// (0x0003fa5c) cale_week_scroll_pane_g4

0x2ace,	// (0x0003fa6f) cale_week_scroll_pane_g5

0x2ae1,	// (0x0003fa82) cale_week_scroll_pane_g6

0x2af4,	// (0x0003fa95) cale_week_scroll_pane_g7

0x2b09,	// (0x0003faaa) cale_week_scroll_pane_g8

0x2b1e,	// (0x0003fabf) cale_week_scroll_pane_g9

0x2b31,	// (0x0003fad2) cale_week_scroll_pane_g10

0x2b44,	// (0x0003fae5) cale_week_scroll_pane_g11

0x2b57,	// (0x0003faf8) cale_week_scroll_pane_g12

0x2b6e,	// (0x0003fb0f) cale_week_scroll_pane_g13

0x2b89,	// (0x0003fb2a) cale_week_scroll_pane_g14

0x2ba4,	// (0x0003fb45) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0004c14d) cale_week_scroll_pane_g

0x2bd4,	// (0x0003fb75) cale_week_time_pane

0x2be9,	// (0x0003fb8a) grid_cale_week_pane

0xaa2f,	// (0x000479d0) scroll_pane_cp08

0x2c08,	// (0x0003fba9) cell_cale_week_pane_ParamLimits

0x2c08,	// (0x0003fba9) cell_cale_week_pane

0x2c6a,	// (0x0003fc0b) cale_week_day_heading_pane_t1

0x2c85,	// (0x0003fc26) cale_week_day_heading_pane_t2

0x2ca0,	// (0x0003fc41) cale_week_day_heading_pane_t3

0x2cbb,	// (0x0003fc5c) cale_week_day_heading_pane_t4

0x2cd6,	// (0x0003fc77) cale_week_day_heading_pane_t5

0x2cf1,	// (0x0003fc92) cale_week_day_heading_pane_t6

0x2d0c,	// (0x0003fcad) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0004c16e) cale_week_day_heading_pane_t

0xaa4c,	// (0x000479ed) bg_cale_side_pane

0x2d27,	// (0x0003fcc8) cale_week_time_pane_t1

0x2d41,	// (0x0003fce2) cale_week_time_pane_t2

0x2d5b,	// (0x0003fcfc) cale_week_time_pane_t3

0x2d75,	// (0x0003fd16) cale_week_time_pane_t4

0x2d8f,	// (0x0003fd30) cale_week_time_pane_t5

0x2da9,	// (0x0003fd4a) cale_week_time_pane_t6

0x2dc9,	// (0x0003fd6a) cale_week_time_pane_t7

0x2deb,	// (0x0003fd8c) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0004c17d) cale_week_time_pane_t

0x2e0f,	// (0x0003fdb0) cell_cale_week_pane_g2

0x2e33,	// (0x0003fdd4) cell_cale_week_pane_g3_ParamLimits

0x2e33,	// (0x0003fdd4) cell_cale_week_pane_g3

0xaa5a,	// (0x000479fb) grid_highlight_pane_cp07

0xaa62,	// (0x00047a03) listscroll_gms_pane

0xaa6c,	// (0x00047a0d) grid_gms_pane

0xaa75,	// (0x00047a16) listscroll_gms_pane_g1

0xaa7d,	// (0x00047a1e) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0004c18e) listscroll_gms_pane_g

0x2e4b,	// (0x0003fdec) scroll_pane_cp010

0x2e56,	// (0x0003fdf7) cell_gms_pane_ParamLimits

0x2e56,	// (0x0003fdf7) cell_gms_pane

0x2e66,	// (0x0003fe07) cell_gms_pane_g1

0xaa85,	// (0x00047a26) cell_gms_pane_g2

0xaa8d,	// (0x00047a2e) cell_gms_pane_g3

0xaa96,	// (0x00047a37) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0004c193) cell_gms_pane_g

0xaa9f,	// (0x00047a40) grid_highlight_pane_cp09

0x520d,	// (0x000421ae) phob_pre_status_pane_g1

0x5215,	// (0x000421b6) phob_pre_status_pane_g2

0x521d,	// (0x000421be) phob_pre_status_pane_g3

0x5225,	// (0x000421c6) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x0004c591) phob_pre_status_pane_g

0x5235,	// (0x000421d6) phob_pre_status_pane_t1

0x5245,	// (0x000421e6) phob_pre_status_pane_t2

0x5255,	// (0x000421f6) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x0004c59c) phob_pre_status_pane_t

0xaaa7,	// (0x00047a48) bg_list_pane_cp05

0x2e76,	// (0x0003fe17) grid_vorec_pane

0x2e80,	// (0x0003fe21) vorec_t1

0x2e8e,	// (0x0003fe2f) vorec_t2

0x2e9c,	// (0x0003fe3d) vorec_t3

0x2eaa,	// (0x0003fe4b) vorec_t4

0xa127,	// (0x000470c8) vorec_t5

0xa135,	// (0x000470d6) vorec_t6

0x0004,

0xf1fb,	// (0x0004c19c) vorec_t

0xa143,	// (0x000470e4) wait_bar_pane_cp01

0x2ec6,	// (0x0003fe67) cell_vorec_pane_ParamLimits

0x2ec6,	// (0x0003fe67) cell_vorec_pane

0x2ed9,	// (0x0003fe7a) cell_vorec_pane_g1

0xa5a0,	// (0x00047541) grid_highlight_pane_cp05

0x2ef3,	// (0x0003fe94) cams_zoom_pane

0x2eff,	// (0x0003fea0) image_vga_pane

0x2f0e,	// (0x0003feaf) main_camera_pane_g1

0x2f1c,	// (0x0003febd) main_camera_pane_g2

0x2f28,	// (0x0003fec9) main_camera_pane_g3

0x2f34,	// (0x0003fed5) main_camera_pane_g4

0x2f40,	// (0x0003fee1) main_camera_pane_g5

0x2f4c,	// (0x0003feed) main_camera_pane_g6

0x2f58,	// (0x0003fef9) main_camera_pane_g7

0x0007,

0xf206,	// (0x0004c1a7) main_camera_pane_g

0x2f64,	// (0x0003ff05) main_camera_pane_t1

0x2f76,	// (0x0003ff17) main_camera_pane_t2

0x0001,

0xf217,	// (0x0004c1b8) main_camera_pane_t

0x2f97,	// (0x0003ff38) cams_zoom_pane_cp_ParamLimits

0x2f97,	// (0x0003ff38) cams_zoom_pane_cp

0x2fbb,	// (0x0003ff5c) image_cif_pane_ParamLimits

0x2fbb,	// (0x0003ff5c) image_cif_pane

0x2fd9,	// (0x0003ff7a) image_subqcif_pane

0x2fe1,	// (0x0003ff82) main_video_pane_g1_ParamLimits

0x2fe1,	// (0x0003ff82) main_video_pane_g1

0x3001,	// (0x0003ffa2) main_video_pane_g2_ParamLimits

0x3001,	// (0x0003ffa2) main_video_pane_g2

0x3031,	// (0x0003ffd2) main_video_pane_g3_ParamLimits

0x3031,	// (0x0003ffd2) main_video_pane_g3

0x305a,	// (0x0003fffb) main_video_pane_g4_ParamLimits

0x305a,	// (0x0003fffb) main_video_pane_g4

0x3083,	// (0x00040024) main_video_pane_g5_ParamLimits

0x3083,	// (0x00040024) main_video_pane_g5

0xaabb,	// (0x00047a5c) main_video_pane_g6_ParamLimits

0xaabb,	// (0x00047a5c) main_video_pane_g6

0x0006,

0xf21c,	// (0x0004c1bd) main_video_pane_g_ParamLimits

0xf21c,	// (0x0004c1bd) main_video_pane_g

0x30a5,	// (0x00040046) main_video_pane_t1_ParamLimits

0x30a5,	// (0x00040046) main_video_pane_t1

0xaad5,	// (0x00047a76) cams_zoom_pane_g1

0xaade,	// (0x00047a7f) cams_zoom_pane_g2

0xaae7,	// (0x00047a88) cams_zoom_pane_g3

0xaaf0,	// (0x00047a91) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0004c1cc) cams_zoom_pane_g

0x30ef,	// (0x00040090) grid_cams_pane

0x30fd,	// (0x0004009e) linegrid_cams_pane

0x310b,	// (0x000400ac) cell_cams_pane_ParamLimits

0x310b,	// (0x000400ac) cell_cams_pane

0xaaf9,	// (0x00047a9a) cams_burst_image_pane

0xab01,	// (0x00047aa2) cell_cams_pane_g1

0xa5a0,	// (0x00047541) grid_highlight_pane_cp03

0xa937,	// (0x000478d8) mp_bg_pane_g1

0xa5a0,	// (0x00047541) bg_list_pane_cp03

0xc87b,	// (0x0004981c) bg_mp_pane

0xc883,	// (0x00049824) grid_mp_pane

0xc88b,	// (0x0004982c) media_player_g1

0xc893,	// (0x00049834) media_player_t1

0xc8a1,	// (0x00049842) media_player_t2

0xc8af,	// (0x00049850) media_player_t3

0xc8bd,	// (0x0004985e) media_player_t4

0xc8cb,	// (0x0004986c) media_player_t5

0xc8d9,	// (0x0004987a) media_player_t6

0xc8e7,	// (0x00049888) media_player_t7

0x0006,

0xf5da,	// (0x0004c57b) media_player_t

0xc8f5,	// (0x00049896) wait_bar_pane_cp02

0xf5bf,	// (0x0004c560) main_usb_pane_t

0x5204,	// (0x000421a5) cell_mp_pane

0xa937,	// (0x000478d8) cell_mp_pane_g1

0xa5a0,	// (0x00047541) grid_highlight_pane_cp06

0xab09,	// (0x00047aaa) grid_skin_colour_pane

0xab11,	// (0x00047ab2) list_highlight_pane_cp03

0x311e,	// (0x000400bf) skin_g1

0xab19,	// (0x00047aba) skin_t1

0xab28,	// (0x00047ac9) skin_t2

0x0001,

0xf260,	// (0x0004c201) skin_t

0x3128,	// (0x000400c9) cell_skin_colour_pane_ParamLimits

0x3128,	// (0x000400c9) cell_skin_colour_pane

0xab36,	// (0x00047ad7) cell_skin_colour_pane_g1

0x31ac,	// (0x0004014d) call_video_g1_ParamLimits

0x31ac,	// (0x0004014d) call_video_g1

0x31bc,	// (0x0004015d) call_video_g2_ParamLimits

0x31bc,	// (0x0004015d) call_video_g2

0x0001,

0xf265,	// (0x0004c206) call_video_g_ParamLimits

0xf265,	// (0x0004c206) call_video_g

0x3216,	// (0x000401b7) call_video_uplink_pane_cp1_ParamLimits

0x3216,	// (0x000401b7) call_video_uplink_pane_cp1

0xab48,	// (0x00047ae9) call_video_uplink_pane_cp2

0x32e2,	// (0x00040283) video_down_crop_pane_ParamLimits

0x32e2,	// (0x00040283) video_down_crop_pane

0x33d4,	// (0x00040375) video_down_pane_ParamLimits

0x33d4,	// (0x00040375) video_down_pane

0xab50,	// (0x00047af1) video_down_subqcif_pane_ParamLimits

0xab50,	// (0x00047af1) video_down_subqcif_pane

0xab68,	// (0x00047b09) video_down_subqcif_pane_cp_ParamLimits

0xab68,	// (0x00047b09) video_down_subqcif_pane_cp

0xab8e,	// (0x00047b2f) im_reading_pane_ParamLimits

0xab8e,	// (0x00047b2f) im_reading_pane

0x34f4,	// (0x00040495) im_writing_pane_ParamLimits

0x34f4,	// (0x00040495) im_writing_pane

0x3512,	// (0x000404b3) im_reading_pane_t1

0xaba8,	// (0x00047b49) list_im_pane

0xabb9,	// (0x00047b5a) scroll_pane_cp07

0x356a,	// (0x0004050b) im_writing_pane_t1_ParamLimits

0x356a,	// (0x0004050b) im_writing_pane_t1

0xabd2,	// (0x00047b73) im_writing_pane_t2_ParamLimits

0xabd2,	// (0x00047b73) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0004c210) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0004c210) im_writing_pane_t

0xa5a0,	// (0x00047541) input_focus_pane_cp04

0xa5a0,	// (0x00047541) input_focus_pane_cp05

0x357c,	// (0x0004051d) list_im_single_pane_ParamLimits

0x357c,	// (0x0004051d) list_im_single_pane

0x35a3,	// (0x00040544) list_single_im_pane_t1

0x51c8,	// (0x00042169) blid_accuracy_pane

0x51d0,	// (0x00042171) blid_compass_pane

0x51da,	// (0x0004217b) main_location_t1

0x51e8,	// (0x00042189) main_location_t2

0x51f6,	// (0x00042197) main_location_t3

0x0002,

0xf5e9,	// (0x0004c58a) main_location_t

0xa5a0,	// (0x00047541) aid_levels_location

0xa937,	// (0x000478d8) blid_accuracy_pane_g1

0xa937,	// (0x000478d8) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0004c272) blid_accuracy_pane_g

0xac1a,	// (0x00047bbb) wml_content_pane

0xac58,	// (0x00047bf9) wml_button_pane_ParamLimits

0xac58,	// (0x00047bf9) wml_button_pane

0x35b2,	// (0x00040553) wml_list_single_large_pane_ParamLimits

0x35b2,	// (0x00040553) wml_list_single_large_pane

0x35dd,	// (0x0004057e) wml_list_single_medium_pane_ParamLimits

0x35dd,	// (0x0004057e) wml_list_single_medium_pane

0x360f,	// (0x000405b0) wml_list_single_small_pane_ParamLimits

0x360f,	// (0x000405b0) wml_list_single_small_pane

0xac6c,	// (0x00047c0d) wml_selection_box_pane_ParamLimits

0xac6c,	// (0x00047c0d) wml_selection_box_pane

0xac7f,	// (0x00047c20) wml_list_single_pane_t1

0xac8e,	// (0x00047c2f) wml_list_single_medium_pane_t1

0xac9d,	// (0x00047c3e) wml_list_single_large_pane_t1

0xacac,	// (0x00047c4d) input_focus_pane_cp02_ParamLimits

0xacac,	// (0x00047c4d) input_focus_pane_cp02

0xacbf,	// (0x00047c60) wml_selection_box_pane_g1

0xacc8,	// (0x00047c69) wml_selection_box_pane_t1_ParamLimits

0xacc8,	// (0x00047c69) wml_selection_box_pane_t1

0xa811,	// (0x000477b2) bg_wml_button_pane_ParamLimits

0xa811,	// (0x000477b2) bg_wml_button_pane

0xace0,	// (0x00047c81) wml_button_pane_g1

0xace8,	// (0x00047c89) wml_button_pane_t1

0xace0,	// (0x00047c81) wml_button_bg_pane_g1

0xacf8,	// (0x00047c99) wml_button_bg_pane_g2

0xad00,	// (0x00047ca1) wml_button_bg_pane_g3

0xad08,	// (0x00047ca9) wml_button_bg_pane_g4

0xad10,	// (0x00047cb1) wml_button_bg_pane_g5

0xad18,	// (0x00047cb9) wml_button_bg_pane_g6

0xad20,	// (0x00047cc1) wml_button_bg_pane_g7

0xad28,	// (0x00047cc9) wml_button_bg_pane_g8

0xad30,	// (0x00047cd1) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0004c215) wml_button_bg_pane_g

0x364c,	// (0x000405ed) bg_list_pane_cp02

0xad38,	// (0x00047cd9) mce_header_pane_ParamLimits

0xad38,	// (0x00047cd9) mce_header_pane

0xad4e,	// (0x00047cef) mce_icon_pane

0xad4e,	// (0x00047cef) mce_image_pane

0xad57,	// (0x00047cf8) mce_text_pane_ParamLimits

0xad57,	// (0x00047cf8) mce_text_pane

0x3656,	// (0x000405f7) scroll_pane_cp03

0xac50,	// (0x00047bf1) scroll_pane_cp04

0xad6a,	// (0x00047d0b) scroll_pane_cp05_ParamLimits

0xad6a,	// (0x00047d0b) scroll_pane_cp05

0x3660,	// (0x00040601) mce_header_field_pane_ParamLimits

0x3660,	// (0x00040601) mce_header_field_pane

0x3680,	// (0x00040621) mce_header_field_pane_2_ParamLimits

0x3680,	// (0x00040621) mce_header_field_pane_2

0x3696,	// (0x00040637) mce_header_field_pane_3

0x369e,	// (0x0004063f) list_single_mce_message_pane_ParamLimits

0x369e,	// (0x0004063f) list_single_mce_message_pane

0x36cc,	// (0x0004066d) list_single_mce_smart_pane_ParamLimits

0x36cc,	// (0x0004066d) list_single_mce_smart_pane

0xad76,	// (0x00047d17) input_focus_pane_cp03

0xad7f,	// (0x00047d20) list_header_data_pane

0x3705,	// (0x000406a6) mce_header_field_pane_t1

0x3713,	// (0x000406b4) list_single_mce_header_pane_ParamLimits

0x3713,	// (0x000406b4) list_single_mce_header_pane

0xad87,	// (0x00047d28) list_single_mce_header_pane_t1

0xad96,	// (0x00047d37) list_single_mce_message_pane_g1

0xad9e,	// (0x00047d3f) list_single_mce_message_pane_t1

0x3769,	// (0x0004070a) bg_cale_heading_pane_cp01_ParamLimits

0x3769,	// (0x0004070a) bg_cale_heading_pane_cp01

0xadac,	// (0x00047d4d) bg_cale_pane_cp02_ParamLimits

0xadac,	// (0x00047d4d) bg_cale_pane_cp02

0x37b7,	// (0x00040758) cale_month_corner_pane

0x37d6,	// (0x00040777) cale_month_day_heading_pane_ParamLimits

0x37d6,	// (0x00040777) cale_month_day_heading_pane

0x383c,	// (0x000407dd) cale_month_pane_g1_ParamLimits

0x383c,	// (0x000407dd) cale_month_pane_g1

0x387f,	// (0x00040820) cale_month_pane_g2_ParamLimits

0x387f,	// (0x00040820) cale_month_pane_g2

0x38b9,	// (0x0004085a) cale_month_pane_g3_ParamLimits

0x38b9,	// (0x0004085a) cale_month_pane_g3

0x3909,	// (0x000408aa) cale_month_pane_g4_ParamLimits

0x3909,	// (0x000408aa) cale_month_pane_g4

0x3959,	// (0x000408fa) cale_month_pane_g5_ParamLimits

0x3959,	// (0x000408fa) cale_month_pane_g5

0x39a9,	// (0x0004094a) cale_month_pane_g6_ParamLimits

0x39a9,	// (0x0004094a) cale_month_pane_g6

0x39f9,	// (0x0004099a) cale_month_pane_g7_ParamLimits

0x39f9,	// (0x0004099a) cale_month_pane_g7

0x3a61,	// (0x00040a02) cale_month_pane_g8_ParamLimits

0x3a61,	// (0x00040a02) cale_month_pane_g8

0x3ac9,	// (0x00040a6a) cale_month_pane_g9_ParamLimits

0x3ac9,	// (0x00040a6a) cale_month_pane_g9

0x3b27,	// (0x00040ac8) cale_month_pane_g10_ParamLimits

0x3b27,	// (0x00040ac8) cale_month_pane_g10

0x3b85,	// (0x00040b26) cale_month_pane_g11_ParamLimits

0x3b85,	// (0x00040b26) cale_month_pane_g11

0x3bd9,	// (0x00040b7a) cale_month_pane_g12_ParamLimits

0x3bd9,	// (0x00040b7a) cale_month_pane_g12

0x3c2f,	// (0x00040bd0) cale_month_pane_g13_ParamLimits

0x3c2f,	// (0x00040bd0) cale_month_pane_g13

0x000c,

0xf287,	// (0x0004c228) cale_month_pane_g_ParamLimits

0xf287,	// (0x0004c228) cale_month_pane_g

0x3c85,	// (0x00040c26) cale_month_week_pane

0x3ca9,	// (0x00040c4a) grid_cale_month_pane_ParamLimits

0x3ca9,	// (0x00040c4a) grid_cale_month_pane

0x3d06,	// (0x00040ca7) cale_month_day_heading_pane_t1

0x3d8c,	// (0x00040d2d) cale_month_day_heading_pane_t2

0x3e05,	// (0x00040da6) cale_month_day_heading_pane_t3

0x3e7e,	// (0x00040e1f) cale_month_day_heading_pane_t4

0x3ef7,	// (0x00040e98) cale_month_day_heading_pane_t5

0x3f70,	// (0x00040f11) cale_month_day_heading_pane_t6

0x3fe9,	// (0x00040f8a) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0004c243) cale_month_day_heading_pane_t

0xaa4c,	// (0x000479ed) bg_cale_side_pane_cp01

0x407a,	// (0x0004101b) cale_month_week_pane_t1

0x4093,	// (0x00041034) cale_month_week_pane_t2

0x40ac,	// (0x0004104d) cale_month_week_pane_t3

0x40c5,	// (0x00041066) cale_month_week_pane_t4

0x40e0,	// (0x00041081) cale_month_week_pane_t5

0x4101,	// (0x000410a2) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0004c252) cale_month_week_pane_t

0x4122,	// (0x000410c3) cell_cale_month_pane_ParamLimits

0x4122,	// (0x000410c3) cell_cale_month_pane

0x4248,	// (0x000411e9) cell_cale_month_pane_g1

0x4254,	// (0x000411f5) cell_cale_month_pane_t1_ParamLimits

0x4254,	// (0x000411f5) cell_cale_month_pane_t1

0xaa5a,	// (0x000479fb) grid_highlight_pane_cp08

0xa937,	// (0x000478d8) main_smil_g1

0x4280,	// (0x00041221) smil_status_pane

0xae20,	// (0x00047dc1) smil_text_pane

0xc75b,	// (0x000496fc) bg_popup_call3_rect_pane_g8

0xc763,	// (0x00049704) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0004c50b) bg_popup_call3_rect_pane_g

0xc9ea,	// (0x0004998b) smil_status_volume_pane_g1

0xae2a,	// (0x00047dcb) smil_status_pane_t1

0x55f1,	// (0x00042592) volume_smil_pane

0xae41,	// (0x00047de2) list_smil_text_pane

0x4293,	// (0x00041234) scroll_pane_cp011

0x429e,	// (0x0004123f) smil_text_list_pane_t1_ParamLimits

0x429e,	// (0x0004123f) smil_text_list_pane_t1

0x432b,	// (0x000412cc) aid_volume_smil_ParamLimits

0x432b,	// (0x000412cc) aid_volume_smil

0xa937,	// (0x000478d8) smil_volume_pane_g1

0xa937,	// (0x000478d8) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0004c272) smil_volume_pane_g

0x29f5,	// (0x0003f996) listscroll_cale_day_pane

0xae4b,	// (0x00047dec) bg_cale_pane

0xae63,	// (0x00047e04) list_cale_pane

0xae86,	// (0x00047e27) scroll_pane_cp09

0xae97,	// (0x00047e38) cale_bg_pane_g1

0xae9f,	// (0x00047e40) cale_bg_pane_g2

0xaea7,	// (0x00047e48) cale_bg_pane_g3

0xaeaf,	// (0x00047e50) cale_bg_pane_g4

0xaeb7,	// (0x00047e58) cale_bg_pane_g5

0xaebf,	// (0x00047e60) cale_bg_pane_g6

0xaec7,	// (0x00047e68) cale_bg_pane_g7

0xaecf,	// (0x00047e70) cale_bg_pane_g8

0xaed7,	// (0x00047e78) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0004c277) cale_bg_pane_g

0x4355,	// (0x000412f6) list_cale_time_pane_ParamLimits

0x4355,	// (0x000412f6) list_cale_time_pane

0xaedf,	// (0x00047e80) list_cale_time_pane_g1_ParamLimits

0xaedf,	// (0x00047e80) list_cale_time_pane_g1

0xaeeb,	// (0x00047e8c) list_cale_time_pane_g2_ParamLimits

0xaeeb,	// (0x00047e8c) list_cale_time_pane_g2

0x437d,	// (0x0004131e) list_cale_time_pane_g3_ParamLimits

0x437d,	// (0x0004131e) list_cale_time_pane_g3

0x438b,	// (0x0004132c) list_cale_time_pane_g4_ParamLimits

0x438b,	// (0x0004132c) list_cale_time_pane_g4

0x4399,	// (0x0004133a) list_cale_time_pane_g5_ParamLimits

0x4399,	// (0x0004133a) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0004c28a) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0004c28a) list_cale_time_pane_g

0xaf05,	// (0x00047ea6) list_cale_time_pane_t1_ParamLimits

0xaf05,	// (0x00047ea6) list_cale_time_pane_t1

0xaf2d,	// (0x00047ece) list_cale_time_pane_t2_ParamLimits

0xaf2d,	// (0x00047ece) list_cale_time_pane_t2

0x4678,	// (0x00041619) aid_blid_cardinal_pane

0x46ba,	// (0x0004165b) compass_pane_t4

0xaf55,	// (0x00047ef6) list_cale_time_pane_t4_ParamLimits

0xaf55,	// (0x00047ef6) list_cale_time_pane_t4

0x46c8,	// (0x00041669) compass_pane_t5

0x46d8,	// (0x00041679) compass_pane_t6

0x46e6,	// (0x00041687) compass_pane_t7

0xb3cd,	// (0x0004836e) navi_pane_cc_t1

0xb5c4,	// (0x00048565) aid_phob_thumbnail_center_pane

0x4cc9,	// (0x00041c6a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0004c297) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0004c297) list_cale_time_pane_t

0xa1f7,	// (0x00047198) bg_popup_window_pane_cp02_ParamLimits

0xa1f7,	// (0x00047198) bg_popup_window_pane_cp02

0xaf7d,	// (0x00047f1e) heading_pane_cp01_ParamLimits

0xaf7d,	// (0x00047f1e) heading_pane_cp01

0xaf89,	// (0x00047f2a) loc_req_pane_ParamLimits

0xaf89,	// (0x00047f2a) loc_req_pane

0xaf99,	// (0x00047f3a) loc_type_pane_ParamLimits

0xaf99,	// (0x00047f3a) loc_type_pane

0xafab,	// (0x00047f4c) loc_type_pane_t1_ParamLimits

0xafab,	// (0x00047f4c) loc_type_pane_t1

0xafbd,	// (0x00047f5e) loc_type_pane_t2_ParamLimits

0xafbd,	// (0x00047f5e) loc_type_pane_t2

0xafcf,	// (0x00047f70) loc_type_pane_t3_ParamLimits

0xafcf,	// (0x00047f70) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0004c29e) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0004c29e) loc_type_pane_t

0xafe1,	// (0x00047f82) list_loc_req_pane

0xafeb,	// (0x00047f8c) scroll_pane_cp012

0x0e92,	// (0x0003de33) list_single_loc_request_popup_menu_pane_ParamLimits

0x0e92,	// (0x0003de33) list_single_loc_request_popup_menu_pane

0xaff6,	// (0x00047f97) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaff6,	// (0x00047f97) list_single_loc_request_popup_menu_pane_g1

0xb002,	// (0x00047fa3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb002,	// (0x00047fa3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0004c2a5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0004c2a5) list_single_loc_request_popup_menu_pane_g

0xb00e,	// (0x00047faf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb00e,	// (0x00047faf) list_single_loc_request_popup_menu_pane_t1

0x43a7,	// (0x00041348) bg_popup_window_pane_cp03_ParamLimits

0x43a7,	// (0x00041348) bg_popup_window_pane_cp03

0x43b5,	// (0x00041356) heading_loc_req_pane_ParamLimits

0x43b5,	// (0x00041356) heading_loc_req_pane

0x43c1,	// (0x00041362) popup_dyc_status_message_window_g1_ParamLimits

0x43c1,	// (0x00041362) popup_dyc_status_message_window_g1

0x43cd,	// (0x0004136e) popup_dyc_status_message_window_t1_ParamLimits

0x43cd,	// (0x0004136e) popup_dyc_status_message_window_t1

0x43df,	// (0x00041380) popup_dyc_status_message_window_t2_ParamLimits

0x43df,	// (0x00041380) popup_dyc_status_message_window_t2

0x43f1,	// (0x00041392) popup_dyc_status_message_window_t3_ParamLimits

0x43f1,	// (0x00041392) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0004c2aa) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0004c2aa) popup_dyc_status_message_window_t

0xa5a0,	// (0x00047541) bg_heading_pane_cp01

0xb024,	// (0x00047fc5) heading_loc_req_pane_g1

0xb02c,	// (0x00047fcd) heading_loc_req_pane_g2

0xb034,	// (0x00047fd5) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0004c2b1) heading_loc_req_pane_g

0xb03c,	// (0x00047fdd) heading_loc_req_pane_t1

0xb04b,	// (0x00047fec) bg_popup_sub_pane_cp01_ParamLimits

0xb04b,	// (0x00047fec) bg_popup_sub_pane_cp01

0xb059,	// (0x00047ffa) popup_cale_events_window_g1_ParamLimits

0xb059,	// (0x00047ffa) popup_cale_events_window_g1

0xb079,	// (0x0004801a) popup_cale_events_window_g2_ParamLimits

0xb079,	// (0x0004801a) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0004c2e5) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0004c2e5) popup_cale_events_window_g

0xb099,	// (0x0004803a) popup_cale_events_window_t1_ParamLimits

0xb099,	// (0x0004803a) popup_cale_events_window_t1

0xb0ab,	// (0x0004804c) popup_cale_events_window_t2_ParamLimits

0xb0ab,	// (0x0004804c) popup_cale_events_window_t2

0xb0e9,	// (0x0004808a) popup_cale_events_window_t3_ParamLimits

0xb0e9,	// (0x0004808a) popup_cale_events_window_t3

0xb123,	// (0x000480c4) popup_cale_events_window_t4_ParamLimits

0xb123,	// (0x000480c4) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0004c2ea) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0004c2ea) popup_cale_events_window_t

0x441b,	// (0x000413bc) call_type_pane

0xb44c,	// (0x000483ed) popup_call_status_window_g1

0x4427,	// (0x000413c8) popup_call_status_window_g2

0x4433,	// (0x000413d4) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0004c2f3) popup_call_status_window_g

0xb159,	// (0x000480fa) call_type_pane_g1

0xb162,	// (0x00048103) call_type_pane_g2

0x0001,

0xf359,	// (0x0004c2fa) call_type_pane_g

0xa5a0,	// (0x00047541) bg_popup_sub_pane_cp02

0xb16b,	// (0x0004810c) listscroll_popup_wml_pane

0xb173,	// (0x00048114) list_wml_pane

0xb17d,	// (0x0004811e) scroll_pane_cp013

0xb188,	// (0x00048129) list_single_graphic_popup_wml_pane_ParamLimits

0xb188,	// (0x00048129) list_single_graphic_popup_wml_pane

0xa937,	// (0x000478d8) list_single_graphic_popup_wml_pane_g1

0xb19c,	// (0x0004813d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0004c2ff) list_single_graphic_popup_wml_pane_g

0xb1a4,	// (0x00048145) list_single_graphic_popup_wml_pane_t1

0xb1ba,	// (0x0004815b) aid_call_pane

0xa809,	// (0x000477aa) popup_clock_analogue_window_g1

0xa809,	// (0x000477aa) popup_clock_analogue_window_g2

0x443f,	// (0x000413e0) popup_clock_analogue_window_g3

0x443f,	// (0x000413e0) popup_clock_analogue_window_g4

0xa937,	// (0x000478d8) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0004c304) popup_clock_analogue_window_g

0x4447,	// (0x000413e8) popup_clock_analogue_window_t1

0x4455,	// (0x000413f6) clock_digital_number_pane_ParamLimits

0x4455,	// (0x000413f6) clock_digital_number_pane

0x4461,	// (0x00041402) clock_digital_number_pane_cp02_ParamLimits

0x4461,	// (0x00041402) clock_digital_number_pane_cp02

0x446d,	// (0x0004140e) clock_digital_number_pane_cp03_ParamLimits

0x446d,	// (0x0004140e) clock_digital_number_pane_cp03

0x4479,	// (0x0004141a) clock_digital_number_pane_cp04_ParamLimits

0x4479,	// (0x0004141a) clock_digital_number_pane_cp04

0x4485,	// (0x00041426) clock_digital_separator_pane_ParamLimits

0x4485,	// (0x00041426) clock_digital_separator_pane

0x4491,	// (0x00041432) popup_clock_digital_window_t1

0xa937,	// (0x000478d8) clock_digital_number_pane_g1

0xa937,	// (0x000478d8) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0004c272) clock_digital_number_pane_g

0xa937,	// (0x000478d8) clock_digital_separator_pane_g1

0xa937,	// (0x000478d8) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0004c272) clock_digital_separator_pane_g

0xa5a0,	// (0x00047541) bg_popup_window_pane_cp04

0xb1c2,	// (0x00048163) heading_pane_cp03

0xb1ca,	// (0x0004816b) listscroll_popup_gms_pane

0xb1d2,	// (0x00048173) grid_large_graphic_popup_pane

0xb1dc,	// (0x0004817d) listscroll_popup_gms_pane_g1

0xb1e4,	// (0x00048185) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0004c30f) listscroll_popup_gms_pane_g

0xac50,	// (0x00047bf1) scroll_pane_cp014

0x44ae,	// (0x0004144f) cell_large_graphic_popup_pane_ParamLimits

0x44ae,	// (0x0004144f) cell_large_graphic_popup_pane

0x44c6,	// (0x00041467) cell_large_graphic_popup_pane_g1_ParamLimits

0x44c6,	// (0x00041467) cell_large_graphic_popup_pane_g1

0xb1ec,	// (0x0004818d) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1ec,	// (0x0004818d) cell_large_graphic_popup_pane_g2

0xb1f8,	// (0x00048199) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1f8,	// (0x00048199) cell_large_graphic_popup_pane_g3

0xb205,	// (0x000481a6) cell_large_graphic_popup_pane_g4_ParamLimits

0xb205,	// (0x000481a6) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0004c314) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0004c314) cell_large_graphic_popup_pane_g

0xb215,	// (0x000481b6) grid_highlight_pane_cp010

0xa937,	// (0x000478d8) bg_popup_call_pane_g1

0xb21f,	// (0x000481c0) list_single_graphic_popup_conf_pane_ParamLimits

0xb21f,	// (0x000481c0) list_single_graphic_popup_conf_pane

0xb232,	// (0x000481d3) list_highlight_pane_cp01

0xb23b,	// (0x000481dc) list_single_graphic_popup_conf_pane_g1

0xb243,	// (0x000481e4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0004c31d) list_single_graphic_popup_conf_pane_g

0xb24b,	// (0x000481ec) list_single_graphic_popup_conf_pane_t1

0xb259,	// (0x000481fa) linegrid_cams_pane_g1

0x44d2,	// (0x00041473) linegrid_cams_pane_g2

0xaa8d,	// (0x00047a2e) linegrid_cams_pane_g3

0xb262,	// (0x00048203) linegrid_cams_pane_g4

0x44db,	// (0x0004147c) linegrid_cams_pane_g5

0x44e4,	// (0x00041485) linegrid_cams_pane_g6

0xaa96,	// (0x00047a37) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0004c322) linegrid_cams_pane_g

0xb26b,	// (0x0004820c) popup_clock_analogue_window

0xb26b,	// (0x0004820c) popup_clock_digital_window

0xa5a0,	// (0x00047541) popup_phob_thumbnail_window

0xa937,	// (0x000478d8) call_video_uplink_pane_g1

0xb274,	// (0x00048215) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0004c331) call_video_uplink_pane_g

0xb27c,	// (0x0004821d) video_uplink_pane

0xb284,	// (0x00048225) mce_image_pane_g1

0x44ed,	// (0x0004148e) mce_image_pane_g2

0x44f5,	// (0x00041496) mce_image_pane_g3

0x44fd,	// (0x0004149e) mce_image_pane_g4

0x4505,	// (0x000414a6) mce_image_pane_g5

0x0004,

0xf395,	// (0x0004c336) mce_image_pane_g

0xb28e,	// (0x0004822f) control_top_pane_stacon_cp01_ParamLimits

0xb28e,	// (0x0004822f) control_top_pane_stacon_cp01

0xb2a2,	// (0x00048243) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2a2,	// (0x00048243) uni_indicator_pane_stacon_cp01

0xb2b3,	// (0x00048254) bg_popup_sub_pane_cp03

0x450d,	// (0x000414ae) chi_dic_find_pane

0x4515,	// (0x000414b6) listscroll_chi_dic_pane

0x451e,	// (0x000414bf) main_pane_chidic_g1

0x4531,	// (0x000414d2) chi_dic_find_pane_t1

0xb2bd,	// (0x0004825e) find_chidic_pane

0xb2c6,	// (0x00048267) chi_dic_list_pane_ParamLimits

0xb2c6,	// (0x00048267) chi_dic_list_pane

0xb2d7,	// (0x00048278) scroll_pane_cp020

0x453f,	// (0x000414e0) find_chidic_pane_t1

0xa5a0,	// (0x00047541) input_focus_pane_cp06

0x454e,	// (0x000414ef) list_chi_dic_pane_ParamLimits

0x454e,	// (0x000414ef) list_chi_dic_pane

0x456b,	// (0x0004150c) list_chi_dic_pane_t1_ParamLimits

0x456b,	// (0x0004150c) list_chi_dic_pane_t1

0xa5a0,	// (0x00047541) list_highlight_pane_cp020

0xb2df,	// (0x00048280) bg_cale_heading_pane_g1

0x457e,	// (0x0004151f) bg_cale_heading_pane_g2

0x4586,	// (0x00041527) bg_cale_heading_pane_g3

0x458e,	// (0x0004152f) bg_cale_heading_pane_g4

0x4598,	// (0x00041539) bg_cale_heading_pane_g5

0x45a2,	// (0x00041543) bg_cale_heading_pane_g6

0x45aa,	// (0x0004154b) bg_cale_heading_pane_g7

0x45b2,	// (0x00041553) bg_cale_heading_pane_g8

0x45bc,	// (0x0004155d) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0004c341) bg_cale_heading_pane_g

0xb2df,	// (0x00048280) bg_cale_side_pane_g1

0x45c6,	// (0x00041567) bg_cale_side_pane_g2

0x45d0,	// (0x00041571) bg_cale_side_pane_g3

0x45da,	// (0x0004157b) bg_cale_side_pane_g4

0x45e4,	// (0x00041585) bg_cale_side_pane_g5

0x45ee,	// (0x0004158f) bg_cale_side_pane_g6

0x45f8,	// (0x00041599) bg_cale_side_pane_g7

0x4602,	// (0x000415a3) bg_cale_side_pane_g8

0x460a,	// (0x000415ab) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0004c354) bg_cale_side_pane_g

0x4612,	// (0x000415b3) popup_call_status_window_ParamLimits

0x4612,	// (0x000415b3) popup_call_status_window

0xb2e7,	// (0x00048288) stacon_top_pane

0xb2ef,	// (0x00048290) status_pane_ParamLimits

0xb2ef,	// (0x00048290) status_pane

0xb304,	// (0x000482a5) status_small_pane

0xb30c,	// (0x000482ad) control_pane

0xa5a0,	// (0x00047541) stacon_bottom_pane

0xb314,	// (0x000482b5) list_single_mce_smart_pane_t1_ParamLimits

0xb314,	// (0x000482b5) list_single_mce_smart_pane_t1

0xb327,	// (0x000482c8) list_single_mce_smart_pane_t2_ParamLimits

0xb327,	// (0x000482c8) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0004c367) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0004c367) list_single_mce_smart_pane_t

0x461e,	// (0x000415bf) compass_pane

0x462a,	// (0x000415cb) main_location2_pane_t1

0x463e,	// (0x000415df) main_location2_pane_t2

0x4652,	// (0x000415f3) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0004c36c) main_location2_pane_t

0xb346,	// (0x000482e7) compass_pane_g1_ParamLimits

0xb346,	// (0x000482e7) compass_pane_g1

0x469c,	// (0x0004163d) compass_pane_t1

0x46ab,	// (0x0004164c) compass_pane_t2

0x0005,

0xf3d4,	// (0x0004c375) compass_pane_t

0x46f6,	// (0x00041697) text_secondary_cp61

0xb3c4,	// (0x00048365) navi_pane_cams_g5

0xb45a,	// (0x000483fb) navi_pane_im_t1

0xb468,	// (0x00048409) navi_pane_mp_g1_ParamLimits

0xb468,	// (0x00048409) navi_pane_mp_g1

0xb47c,	// (0x0004841d) navi_pane_mp_g2_ParamLimits

0xb47c,	// (0x0004841d) navi_pane_mp_g2

0xb488,	// (0x00048429) navi_pane_mp_g3_ParamLimits

0xb488,	// (0x00048429) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0004c389) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0004c389) navi_pane_mp_g

0xb494,	// (0x00048435) navi_pane_mp_t1

0xb4a2,	// (0x00048443) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0004c390) navi_pane_mp_t

0xb50d,	// (0x000484ae) navi_pane_vt_g1

0xb494,	// (0x00048435) navi_pane_vt_t1

0xb515,	// (0x000484b6) navi_slider_pane

0xaaa7,	// (0x00047a48) zooming_pane

0xb525,	// (0x000484c6) navi_slider_pane_g1

0x4731,	// (0x000416d2) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0004c397) navi_slider_pane_g

0xb549,	// (0x000484ea) aid_levels_zoom

0xb551,	// (0x000484f2) zooming_pane_g1

0xb559,	// (0x000484fa) zooming_pane_g2

0xb559,	// (0x000484fa) zooming_pane_g3

0x0002,

0xf405,	// (0x0004c3a6) zooming_pane_g

0xb561,	// (0x00048502) level_10_zoom

0xb56a,	// (0x0004850b) level_11_zoom

0xb573,	// (0x00048514) level_1_zoom

0xb57c,	// (0x0004851d) level_2_zoom

0xb585,	// (0x00048526) level_3_zoom

0xb58e,	// (0x0004852f) level_4_zoom

0xb597,	// (0x00048538) level_5_zoom

0xb5a0,	// (0x00048541) level_6_zoom

0xb5a9,	// (0x0004854a) level_7_zoom

0xb5b2,	// (0x00048553) level_8_zoom

0xb5bb,	// (0x0004855c) level_9_zoom

0xb5cc,	// (0x0004856d) popup_phob_thumbnail_window_g1

0xb5d4,	// (0x00048575) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0004c3ad) popup_phob_thumbnail_window_g

0xc8fd,	// (0x0004989e) level_1_location

0xc905,	// (0x000498a6) level_2_location

0xc90d,	// (0x000498ae) level_3_location

0xc915,	// (0x000498b6) level_4_location

0xaaa7,	// (0x00047a48) level_5_location

0x4743,	// (0x000416e4) mce_icon_pane_g1

0x474b,	// (0x000416ec) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0004c3b2) mce_icon_pane_g

0x4753,	// (0x000416f4) main_mup_pane_g1_ParamLimits

0x4753,	// (0x000416f4) main_mup_pane_g1

0x476b,	// (0x0004170c) main_mup_pane_g2_ParamLimits

0x476b,	// (0x0004170c) main_mup_pane_g2

0x477f,	// (0x00041720) main_mup_pane_g3_ParamLimits

0x477f,	// (0x00041720) main_mup_pane_g3

0x4793,	// (0x00041734) main_mup_pane_g4_ParamLimits

0x4793,	// (0x00041734) main_mup_pane_g4

0x47af,	// (0x00041750) main_mup_pane_g5_ParamLimits

0x47af,	// (0x00041750) main_mup_pane_g5

0x47d0,	// (0x00041771) main_mup_pane_g6_ParamLimits

0x47d0,	// (0x00041771) main_mup_pane_g6

0x47ec,	// (0x0004178d) main_mup_pane_g7_ParamLimits

0x47ec,	// (0x0004178d) main_mup_pane_g7

0x4808,	// (0x000417a9) main_mup_pane_g8_ParamLimits

0x4808,	// (0x000417a9) main_mup_pane_g8

0x4824,	// (0x000417c5) main_mup_pane_g9_ParamLimits

0x4824,	// (0x000417c5) main_mup_pane_g9

0x4843,	// (0x000417e4) main_mup_pane_g10_ParamLimits

0x4843,	// (0x000417e4) main_mup_pane_g10

0x4862,	// (0x00041803) main_mup_pane_g11_ParamLimits

0x4862,	// (0x00041803) main_mup_pane_g11

0x487a,	// (0x0004181b) main_mup_pane_g12_ParamLimits

0x487a,	// (0x0004181b) main_mup_pane_g12

0x4888,	// (0x00041829) main_mup_pane_g13_ParamLimits

0x4888,	// (0x00041829) main_mup_pane_g13

0x000c,

0xf416,	// (0x0004c3b7) main_mup_pane_g_ParamLimits

0xf416,	// (0x0004c3b7) main_mup_pane_g

0x489e,	// (0x0004183f) main_mup_pane_t1_ParamLimits

0x489e,	// (0x0004183f) main_mup_pane_t1

0x48bb,	// (0x0004185c) main_mup_pane_t2_ParamLimits

0x48bb,	// (0x0004185c) main_mup_pane_t2

0x48d5,	// (0x00041876) main_mup_pane_t3_ParamLimits

0x48d5,	// (0x00041876) main_mup_pane_t3

0x48ef,	// (0x00041890) main_mup_pane_t4_ParamLimits

0x48ef,	// (0x00041890) main_mup_pane_t4

0x4901,	// (0x000418a2) main_mup_pane_t5_ParamLimits

0x4901,	// (0x000418a2) main_mup_pane_t5

0x4913,	// (0x000418b4) main_mup_pane_t6_ParamLimits

0x4913,	// (0x000418b4) main_mup_pane_t6

0x0005,

0xf431,	// (0x0004c3d2) main_mup_pane_t_ParamLimits

0xf431,	// (0x0004c3d2) main_mup_pane_t

0x4929,	// (0x000418ca) mup_progress_pane_ParamLimits

0x4929,	// (0x000418ca) mup_progress_pane

0x4935,	// (0x000418d6) mup_visualizer_pane_ParamLimits

0x4935,	// (0x000418d6) mup_visualizer_pane

0x4973,	// (0x00041914) mup_volume_pane_ParamLimits

0x4973,	// (0x00041914) mup_volume_pane

0xb44c,	// (0x000483ed) mup_visualizer_pane_g1_ParamLimits

0xb44c,	// (0x000483ed) mup_visualizer_pane_g1

0xb44c,	// (0x000483ed) mup_visualizer_pane_g2_ParamLimits

0xb44c,	// (0x000483ed) mup_visualizer_pane_g2

0xb346,	// (0x000482e7) mup_visualizer_pane_g3_ParamLimits

0xb346,	// (0x000482e7) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0004c3df) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0004c3df) mup_visualizer_pane_g

0xa937,	// (0x000478d8) mup_volume_pane_g1

0xb5e4,	// (0x00048585) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0004c3e6) mup_volume_pane_g

0xa937,	// (0x000478d8) mup_progress_pane_g1

0xb5ed,	// (0x0004858e) mup_progress_pane_g2

0xb5f6,	// (0x00048597) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0004c3eb) mup_progress_pane_g

0xa5a0,	// (0x00047541) bg_popup_window_pane_cp05

0xb5ff,	// (0x000485a0) heading_pane_cp02_ParamLimits

0xb5ff,	// (0x000485a0) heading_pane_cp02

0xb619,	// (0x000485ba) list_popup_blid_pane

0xb621,	// (0x000485c2) list_blid_sat_info_pane_ParamLimits

0xb621,	// (0x000485c2) list_blid_sat_info_pane

0xb634,	// (0x000485d5) list_blid_sat_info_pane_g1

0xb63c,	// (0x000485dd) list_blid_sat_info_pane_t1

0x4a7e,	// (0x00041a1f) mup_equalizer_pane_ParamLimits

0x4a7e,	// (0x00041a1f) mup_equalizer_pane

0x4a9f,	// (0x00041a40) mup_equalizer_pane_cp1_ParamLimits

0x4a9f,	// (0x00041a40) mup_equalizer_pane_cp1

0x4ac0,	// (0x00041a61) mup_equalizer_pane_cp2_ParamLimits

0x4ac0,	// (0x00041a61) mup_equalizer_pane_cp2

0x4ae1,	// (0x00041a82) mup_equalizer_pane_cp3_ParamLimits

0x4ae1,	// (0x00041a82) mup_equalizer_pane_cp3

0x4b02,	// (0x00041aa3) mup_equalizer_pane_cp4_ParamLimits

0x4b02,	// (0x00041aa3) mup_equalizer_pane_cp4

0x4b23,	// (0x00041ac4) mup_equalizer_pane_cp5

0x4b39,	// (0x00041ada) mup_equalizer_pane_cp6

0x4b51,	// (0x00041af2) mup_equalizer_pane_cp7

0xc7db,	// (0x0004977c) bg_popup_call_poc_act_pane_g9

0xc7e3,	// (0x00049784) bg_popup_call_poc_act_pane_g10

0xc7eb,	// (0x0004978c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa811,	// (0x000477b2) mup_scale_pane

0xa937,	// (0x000478d8) mup_scale_pane_g1

0xb64a,	// (0x000485eb) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0004c407) mup_scale_pane_g

0xb66e,	// (0x0004860f) msg_data_pane

0xb676,	// (0x00048617) scroll_pane_cp017

0x0f7c,	// (0x0003df1d) bg_list_pane_cp04_ParamLimits

0x0f7c,	// (0x0003df1d) bg_list_pane_cp04

0xb67e,	// (0x0004861f) msg_data_pane_g1

0x4b7b,	// (0x00041b1c) msg_data_pane_g2

0x4b83,	// (0x00041b24) msg_data_pane_g3

0x4b8b,	// (0x00041b2c) msg_data_pane_g4

0x4b93,	// (0x00041b34) msg_data_pane_g5

0x4b9b,	// (0x00041b3c) msg_data_pane_g6

0x4ba3,	// (0x00041b44) msg_data_pane_g7

0x0006,

0xf475,	// (0x0004c416) msg_data_pane_g

0x0f9c,	// (0x0003df3d) msg_text_pane_ParamLimits

0x0f9c,	// (0x0003df3d) msg_text_pane

0x4bab,	// (0x00041b4c) qrid_highlight_pane_cp011_ParamLimits

0x4bab,	// (0x00041b4c) qrid_highlight_pane_cp011

0xa5a0,	// (0x00047541) msg_body_pane

0xa5a0,	// (0x00047541) msg_header_pane

0xb68f,	// (0x00048630) input_focus_pane_cp07

0x1002,	// (0x0003dfa3) msg_header_pane_t1_ParamLimits

0x1002,	// (0x0003dfa3) msg_header_pane_t1

0x1014,	// (0x0003dfb5) msg_header_pane_t2_ParamLimits

0x1014,	// (0x0003dfb5) msg_header_pane_t2

0x0001,

0xf489,	// (0x0004c42a) msg_header_pane_t_ParamLimits

0xf489,	// (0x0004c42a) msg_header_pane_t

0xb6a4,	// (0x00048645) msg_body_pane_g1

0x1026,	// (0x0003dfc7) msg_body_pane_t1_ParamLimits

0x1026,	// (0x0003dfc7) msg_body_pane_t1

0x1057,	// (0x0003dff8) msg_body_pane_t2_ParamLimits

0x1057,	// (0x0003dff8) msg_body_pane_t2

0x1069,	// (0x0003e00a) msg_body_pane_t3_ParamLimits

0x1069,	// (0x0003e00a) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0004c42f) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0004c42f) msg_body_pane_t

0x4c19,	// (0x00041bba) main_viewer_pane_g1_ParamLimits

0x4c19,	// (0x00041bba) main_viewer_pane_g1

0x4c25,	// (0x00041bc6) main_viewer_pane_g2_ParamLimits

0x4c25,	// (0x00041bc6) main_viewer_pane_g2

0x4c31,	// (0x00041bd2) main_viewer_pane_g3_ParamLimits

0x4c31,	// (0x00041bd2) main_viewer_pane_g3

0x4c42,	// (0x00041be3) main_viewer_pane_g4_ParamLimits

0x4c42,	// (0x00041be3) main_viewer_pane_g4

0x4c53,	// (0x00041bf4) main_viewer_pane_g5_ParamLimits

0x4c53,	// (0x00041bf4) main_viewer_pane_g5

0x4c53,	// (0x00041bf4) main_viewer_pane_g7_ParamLimits

0x4c53,	// (0x00041bf4) main_viewer_pane_g7

0x4c65,	// (0x00041c06) main_viewer_pane_g8_ParamLimits

0x4c65,	// (0x00041c06) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0004c43f) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0004c43f) main_viewer_pane_g

0xb6ac,	// (0x0004864d) viewer_content_pane_ParamLimits

0xb6ac,	// (0x0004864d) viewer_content_pane

0x4c9d,	// (0x00041c3e) main_postcard_pane_g1_ParamLimits

0x4c9d,	// (0x00041c3e) main_postcard_pane_g1

0x4cab,	// (0x00041c4c) main_postcard_pane_g2_ParamLimits

0x4cab,	// (0x00041c4c) main_postcard_pane_g2

0x4cb9,	// (0x00041c5a) main_postcard_pane_g3_ParamLimits

0x4cb9,	// (0x00041c5a) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0004c450) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0004c450) main_postcard_pane_g

0x4cc9,	// (0x00041c6a) main_postcard_pane_g4

0xc9fd,	// (0x0004999e) smil_status_volume_pane_g2

0x4cf5,	// (0x00041c96) postcard_pane_ParamLimits

0x4cf5,	// (0x00041c96) postcard_pane

0xb44c,	// (0x000483ed) postcard_pane_g1_ParamLimits

0xb44c,	// (0x000483ed) postcard_pane_g1

0x4d27,	// (0x00041cc8) postcard_pane_g2_ParamLimits

0x4d27,	// (0x00041cc8) postcard_pane_g2

0x4d33,	// (0x00041cd4) postcard_pane_g3_ParamLimits

0x4d33,	// (0x00041cd4) postcard_pane_g3

0xb6ba,	// (0x0004865b) postcard_pane_g4_ParamLimits

0xb6ba,	// (0x0004865b) postcard_pane_g4

0x4d3f,	// (0x00041ce0) postcard_pane_g5_ParamLimits

0x4d3f,	// (0x00041ce0) postcard_pane_g5

0x4d4b,	// (0x00041cec) postcard_pane_g6_ParamLimits

0x4d4b,	// (0x00041cec) postcard_pane_g6

0xb6c8,	// (0x00048669) postcard_pane_g7_ParamLimits

0xb6c8,	// (0x00048669) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0004c45d) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0004c45d) postcard_pane_g

0x4d57,	// (0x00041cf8) main_mp2_pane_g1_ParamLimits

0x4d57,	// (0x00041cf8) main_mp2_pane_g1

0x4d63,	// (0x00041d04) main_mp2_pane_g2_ParamLimits

0x4d63,	// (0x00041d04) main_mp2_pane_g2

0x4d6f,	// (0x00041d10) main_mp2_pane_g3_ParamLimits

0x4d6f,	// (0x00041d10) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0004c46c) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0004c46c) main_mp2_pane_g

0x4d7b,	// (0x00041d1c) main_mp2_pane_t1_ParamLimits

0x4d7b,	// (0x00041d1c) main_mp2_pane_t1

0x4d92,	// (0x00041d33) main_mp2_pane_t2_ParamLimits

0x4d92,	// (0x00041d33) main_mp2_pane_t2

0x4da4,	// (0x00041d45) main_mp2_pane_t3_ParamLimits

0x4da4,	// (0x00041d45) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0004c473) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0004c473) main_mp2_pane_t

0xb6d6,	// (0x00048677) pec_content_pane_ParamLimits

0xb6d6,	// (0x00048677) pec_content_pane

0xac50,	// (0x00047bf1) scroll_pane_cp015

0xb6e8,	// (0x00048689) pec_attribute_pane_ParamLimits

0xb6e8,	// (0x00048689) pec_attribute_pane

0x4db6,	// (0x00041d57) pec_content_pane_g1_ParamLimits

0x4db6,	// (0x00041d57) pec_content_pane_g1

0xb6f8,	// (0x00048699) pec_content_pane_t1_ParamLimits

0xb6f8,	// (0x00048699) pec_content_pane_t1

0xb70a,	// (0x000486ab) pec_content_pane_t2_ParamLimits

0xb70a,	// (0x000486ab) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0004c47a) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0004c47a) pec_content_pane_t

0x4dc2,	// (0x00041d63) list_single_graphic_pane_cp01_ParamLimits

0x4dc2,	// (0x00041d63) list_single_graphic_pane_cp01

0xa811,	// (0x000477b2) bg_popup_sub_pane_cp04

0xb71c,	// (0x000486bd) popup_mup_playback_window_g1

0xb728,	// (0x000486c9) popup_mup_playback_window_t1

0xb73d,	// (0x000486de) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0004c47f) popup_mup_playback_window_t

0xb774,	// (0x00048715) main_image_pane_g1_ParamLimits

0xb774,	// (0x00048715) main_image_pane_g1

0xb7b7,	// (0x00048758) scroll_pane_cp018_ParamLimits

0xb7b7,	// (0x00048758) scroll_pane_cp018

0xb7cf,	// (0x00048770) scroll_pane_cp016_ParamLimits

0xb7cf,	// (0x00048770) scroll_pane_cp016

0x4e5c,	// (0x00041dfd) smil2_image_pane_ParamLimits

0x4e5c,	// (0x00041dfd) smil2_image_pane

0x4e8c,	// (0x00041e2d) smil2_root_pane_ParamLimits

0x4e8c,	// (0x00041e2d) smil2_root_pane

0x4eb8,	// (0x00041e59) smil2_text_pane_ParamLimits

0x4eb8,	// (0x00041e59) smil2_text_pane

0xa5a0,	// (0x00047541) bg_list_pane_cp06

0xb80b,	// (0x000487ac) grid_radio_pane

0xa5a0,	// (0x00047541) bg_popup_window_pane_cp06

0xb813,	// (0x000487b4) main_fmradio_pane_t1

0xb1c2,	// (0x00048163) heading_pane_cp04

0xb821,	// (0x000487c2) main_fmradio_pane_t2

0xc833,	// (0x000497d4) popup_cale_lunar_info_window_g1

0xb82f,	// (0x000487d0) main_fmradio_pane_t3

0xc83b,	// (0x000497dc) popup_cale_lunar_info_window_g2

0xb83d,	// (0x000487de) main_fmradio_pane_t4

0x0001,

0xb84b,	// (0x000487ec) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x0004c56d) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0004c494) main_fmradio_pane_t

0xb859,	// (0x000487fa) wait_bar_pane_cp03

0xb861,	// (0x00048802) cell_fmradio_pane_ParamLimits

0xb861,	// (0x00048802) cell_fmradio_pane

0xb6c8,	// (0x00048669) cell_fmradio_pane_g1_ParamLimits

0xb6c8,	// (0x00048669) cell_fmradio_pane_g1

0xa5a0,	// (0x00047541) grid_highlight_pane_cp011

0xb874,	// (0x00048815) poc_content_pane_ParamLimits

0xb874,	// (0x00048815) poc_content_pane

0xb886,	// (0x00048827) scroll_pane_cp019

0x4ef8,	// (0x00041e99) popup_call_poc_act_window_ParamLimits

0x4ef8,	// (0x00041e99) popup_call_poc_act_window

0x4f05,	// (0x00041ea6) popup_call_poc_inact_window_ParamLimits

0x4f05,	// (0x00041ea6) popup_call_poc_inact_window

0xf590,	// (0x0004c531) bg_popup_call_poc_act_pane_g

0xc7f3,	// (0x00049794) bg_popup_call_poc_inact_pane_g1

0xc7fb,	// (0x0004979c) bg_popup_call_poc_inact_pane_g2

0xb88e,	// (0x0004882f) popup_call_poc_act_window_g2

0xc803,	// (0x000497a4) bg_popup_call_poc_inact_pane_g3

0xc783,	// (0x00049724) bg_popup_call_poc_inact_pane_g4

0xc80b,	// (0x000497ac) bg_popup_call_poc_inact_pane_g5

0xb896,	// (0x00048837) popup_call_poc_act_window_t1_ParamLimits

0xb896,	// (0x00048837) popup_call_poc_act_window_t1

0xb8be,	// (0x0004885f) popup_call_poc_act_window_t2_ParamLimits

0xb8be,	// (0x0004885f) popup_call_poc_act_window_t2

0xb8e6,	// (0x00048887) popup_call_poc_act_window_t3_ParamLimits

0xb8e6,	// (0x00048887) popup_call_poc_act_window_t3

0xb90e,	// (0x000488af) popup_call_poc_act_window_t4_ParamLimits

0xb90e,	// (0x000488af) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0004c49f) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0004c49f) popup_call_poc_act_window_t

0xc813,	// (0x000497b4) bg_popup_call_poc_inact_pane_g6

0xc81b,	// (0x000497bc) bg_popup_call_poc_inact_pane_g7

0xc823,	// (0x000497c4) bg_popup_call_poc_inact_pane_g8

0xb920,	// (0x000488c1) popup_call_poc_inact_window_g2

0xc82b,	// (0x000497cc) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x0004c548) bg_popup_call_poc_inact_pane_g

0xb928,	// (0x000488c9) popup_call_poc_inact_window_t1_ParamLimits

0xb928,	// (0x000488c9) popup_call_poc_inact_window_t1

0xb93d,	// (0x000488de) popup_call_poc_inact_window_t2_ParamLimits

0xb93d,	// (0x000488de) popup_call_poc_inact_window_t2

0xb952,	// (0x000488f3) popup_call_poc_inact_window_t3_ParamLimits

0xb952,	// (0x000488f3) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0004c4a8) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0004c4a8) popup_call_poc_inact_window_t

0xc970,	// (0x00049911) context_pane_ParamLimits

0x553b,	// (0x000424dc) signal_pane_ParamLimits

0xaaa7,	// (0x00047a48) main_call2_pane

0x54ae,	// (0x0004244f) popup_phob_thumbnail2_window_ParamLimits

0x54ae,	// (0x0004244f) popup_phob_thumbnail2_window

0x4bc7,	// (0x00041b68) aid_hotspot_pointer_arrow_pane

0x4bcf,	// (0x00041b70) aid_hotspot_pointer_hand_pane

0x522d,	// (0x000421ce) phob_pre_status_pane_g5

0x2ef3,	// (0x0003fe94) cams_zoom_pane_ParamLimits

0x2eff,	// (0x0003fea0) image_vga_pane_ParamLimits

0x2f0e,	// (0x0003feaf) main_camera_pane_g1_ParamLimits

0x2f1c,	// (0x0003febd) main_camera_pane_g2_ParamLimits

0x2f28,	// (0x0003fec9) main_camera_pane_g3_ParamLimits

0x2f34,	// (0x0003fed5) main_camera_pane_g4_ParamLimits

0x2f40,	// (0x0003fee1) main_camera_pane_g5_ParamLimits

0x2f4c,	// (0x0003feed) main_camera_pane_g6_ParamLimits

0x2f58,	// (0x0003fef9) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0004c1a7) main_camera_pane_g_ParamLimits

0x2f64,	// (0x0003ff05) main_camera_pane_t1_ParamLimits

0x2f76,	// (0x0003ff17) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0004c1b8) main_camera_pane_t_ParamLimits

0xa811,	// (0x000477b2) bg_popup_preview_window_pane_cp01_ParamLimits

0xa811,	// (0x000477b2) bg_popup_preview_window_pane_cp01

0xb967,	// (0x00048908) popup_phob_thumbnail2_window_g1_ParamLimits

0xb967,	// (0x00048908) popup_phob_thumbnail2_window_g1

0xa5a0,	// (0x00047541) call2_cli_visual_pane

0x4f21,	// (0x00041ec2) popup_call2_audio_conf_window_ParamLimits

0x4f21,	// (0x00041ec2) popup_call2_audio_conf_window

0x4f36,	// (0x00041ed7) popup_call2_audio_first_window_ParamLimits

0x4f36,	// (0x00041ed7) popup_call2_audio_first_window

0x4fd4,	// (0x00041f75) popup_call2_audio_in_window_ParamLimits

0x4fd4,	// (0x00041f75) popup_call2_audio_in_window

0x5016,	// (0x00041fb7) popup_call2_audio_out_window_ParamLimits

0x5016,	// (0x00041fb7) popup_call2_audio_out_window

0x5078,	// (0x00042019) popup_call2_audio_second_window_ParamLimits

0x5078,	// (0x00042019) popup_call2_audio_second_window

0x50d6,	// (0x00042077) popup_call2_audio_wait_window_ParamLimits

0x50d6,	// (0x00042077) popup_call2_audio_wait_window

0xa5a0,	// (0x00047541) bg_popup_call2_act_pane_cp03

0xa7f3,	// (0x00047794) list_conf_pane_cp

0xb973,	// (0x00048914) popup_call2_audio_conf_window_t1

0xb981,	// (0x00048922) list_single_graphic_popup_conf2_pane_ParamLimits

0xb981,	// (0x00048922) list_single_graphic_popup_conf2_pane

0xb232,	// (0x000481d3) list_highlight_pane_cp04

0xb994,	// (0x00048935) list_single_graphic_popup_conf2_pane_g1

0xb243,	// (0x000481e4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0004c4af) list_single_graphic_popup_conf2_pane_g

0xb99e,	// (0x0004893f) list_single_graphic_popup_conf2_pane_t1

0xb9ac,	// (0x0004894d) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9ac,	// (0x0004894d) bg_popup_call2_act_pane_cp01

0xba36,	// (0x000489d7) call_type_pane_cp05_ParamLimits

0xba36,	// (0x000489d7) call_type_pane_cp05

0xba8a,	// (0x00048a2b) popup_call2_audio_second_window_g1_ParamLimits

0xba8a,	// (0x00048a2b) popup_call2_audio_second_window_g1

0xbade,	// (0x00048a7f) popup_call2_audio_second_window_g2_ParamLimits

0xbade,	// (0x00048a7f) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0004c4b4) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0004c4b4) popup_call2_audio_second_window_g

0xbb43,	// (0x00048ae4) popup_call2_audio_second_window_t1_ParamLimits

0xbb43,	// (0x00048ae4) popup_call2_audio_second_window_t1

0xbbfe,	// (0x00048b9f) popup_call2_audio_second_window_t2_ParamLimits

0xbbfe,	// (0x00048b9f) popup_call2_audio_second_window_t2

0xbc51,	// (0x00048bf2) popup_call2_audio_second_window_t3_ParamLimits

0xbc51,	// (0x00048bf2) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0004c4bb) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0004c4bb) popup_call2_audio_second_window_t

0xa5a0,	// (0x00047541) bg_popup_call2_in_pane_cp02

0xa5aa,	// (0x0004754b) call_type_pane_cp04

0xa5b2,	// (0x00047553) popup_call2_audio_wait_window_g1

0xa5ba,	// (0x0004755b) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004c096) popup_call2_audio_wait_window_g

0xa5c2,	// (0x00047563) popup_call2_audio_wait_window_t3

0xbd44,	// (0x00048ce5) bg_popup_call2_act_pane_ParamLimits

0xbd44,	// (0x00048ce5) bg_popup_call2_act_pane

0xbe04,	// (0x00048da5) call_type_pane_cp03_ParamLimits

0xbe04,	// (0x00048da5) call_type_pane_cp03

0xbe68,	// (0x00048e09) popup_call2_audio_first_window_g1_ParamLimits

0xbe68,	// (0x00048e09) popup_call2_audio_first_window_g1

0xbed8,	// (0x00048e79) popup_call2_audio_first_window_g2_ParamLimits

0xbed8,	// (0x00048e79) popup_call2_audio_first_window_g2

0xb44c,	// (0x000483ed) popup_call2_audio_first_window_g3_ParamLimits

0xb44c,	// (0x000483ed) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0004c4c4) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0004c4c4) popup_call2_audio_first_window_g

0xbfb6,	// (0x00048f57) popup_call2_audio_first_window_t1_ParamLimits

0xbfb6,	// (0x00048f57) popup_call2_audio_first_window_t1

0xc0b9,	// (0x0004905a) popup_call2_audio_first_window_t4_ParamLimits

0xc0b9,	// (0x0004905a) popup_call2_audio_first_window_t4

0xc19c,	// (0x0004913d) popup_call2_audio_first_window_t5_ParamLimits

0xc19c,	// (0x0004913d) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0004c4cf) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0004c4cf) popup_call2_audio_first_window_t

0xa809,	// (0x000477aa) bg_popup_call2_act_pane_g1

0xc843,	// (0x000497e4) popup_cale_lunar_info_window_t1

0xc851,	// (0x000497f2) popup_cale_lunar_info_window_t2

0xc85f,	// (0x00049800) popup_cale_lunar_info_window_t3

0xa5a0,	// (0x00047541) bg_popup_call2_bubble_pane

0xc29d,	// (0x0004923e) bg_popup_call2_in_pane_cp01_ParamLimits

0xc29d,	// (0x0004923e) bg_popup_call2_in_pane_cp01

0xa27c,	// (0x0004721d) call_type_pane_cp02

0xc2e5,	// (0x00049286) popup_call2_audio_out_window_g1_ParamLimits

0xc2e5,	// (0x00049286) popup_call2_audio_out_window_g1

0xc311,	// (0x000492b2) popup_call2_audio_out_window_g2_ParamLimits

0xc311,	// (0x000492b2) popup_call2_audio_out_window_g2

0xc339,	// (0x000492da) popup_call2_audio_out_window_g3_ParamLimits

0xc339,	// (0x000492da) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0004c4d8) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0004c4d8) popup_call2_audio_out_window_g

0xc374,	// (0x00049315) popup_call2_audio_out_window_t1_ParamLimits

0xc374,	// (0x00049315) popup_call2_audio_out_window_t1

0xc3d3,	// (0x00049374) popup_call2_audio_out_window_t2_ParamLimits

0xc3d3,	// (0x00049374) popup_call2_audio_out_window_t2

0xc427,	// (0x000493c8) popup_call2_audio_out_window_t3_ParamLimits

0xc427,	// (0x000493c8) popup_call2_audio_out_window_t3

0xc43d,	// (0x000493de) popup_call2_audio_out_window_t4_ParamLimits

0xc43d,	// (0x000493de) popup_call2_audio_out_window_t4

0xc453,	// (0x000493f4) popup_call2_audio_out_window_t5_ParamLimits

0xc453,	// (0x000493f4) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0004c4e1) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0004c4e1) popup_call2_audio_out_window_t

0xc4b7,	// (0x00049458) bg_popup_call2_in_pane_ParamLimits

0xc4b7,	// (0x00049458) bg_popup_call2_in_pane

0xc513,	// (0x000494b4) popup_call2_audio_in_window_g1_ParamLimits

0xc513,	// (0x000494b4) popup_call2_audio_in_window_g1

0xc54b,	// (0x000494ec) popup_call2_audio_in_window_g2_ParamLimits

0xc54b,	// (0x000494ec) popup_call2_audio_in_window_g2

0xc583,	// (0x00049524) popup_call2_audio_in_window_g3_ParamLimits

0xc583,	// (0x00049524) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0004c4ee) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0004c4ee) popup_call2_audio_in_window_g

0xc5db,	// (0x0004957c) popup_call2_audio_in_window_t1_ParamLimits

0xc5db,	// (0x0004957c) popup_call2_audio_in_window_t1

0xc65b,	// (0x000495fc) popup_call2_audio_in_window_t2_ParamLimits

0xc65b,	// (0x000495fc) popup_call2_audio_in_window_t2

0xc6db,	// (0x0004967c) popup_call2_audio_in_window_t3_ParamLimits

0xc6db,	// (0x0004967c) popup_call2_audio_in_window_t3

0xc6f5,	// (0x00049696) popup_call2_audio_in_window_t4_ParamLimits

0xc6f5,	// (0x00049696) popup_call2_audio_in_window_t4

0xc707,	// (0x000496a8) popup_call2_audio_in_window_t5_ParamLimits

0xc707,	// (0x000496a8) popup_call2_audio_in_window_t5

0xc719,	// (0x000496ba) popup_call2_audio_in_window_t6_ParamLimits

0xc719,	// (0x000496ba) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0004c4f7) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0004c4f7) popup_call2_audio_in_window_t

0xa809,	// (0x000477aa) bg_popup_call2_in_pane_g1

0xc86d,	// (0x0004980e) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x0004c572) popup_cale_lunar_info_window_t

0xa811,	// (0x000477b2) bg_popup_call2_rect_pane_ParamLimits

0xa811,	// (0x000477b2) bg_popup_call2_rect_pane

0xa5a0,	// (0x00047541) call2_cli_visual_graphic_pane

0xa5a0,	// (0x00047541) call2_cli_visual_text_pane

0x55e4,	// (0x00042585) smil_status_volume_pane_g3

0x0002,

0xa937,	// (0x000478d8) call2_cli_visual_graphic_pane_g1

0xa937,	// (0x000478d8) call2_cli_visual_graphic_pane_g2

0xa937,	// (0x000478d8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0004c504) call2_cli_visual_graphic_pane_g

0xc72b,	// (0x000496cc) bg_popup_call2_rect_pane_g1

0xa9c3,	// (0x00047964) bg_popup_call2_rect_pane_g2

0xc733,	// (0x000496d4) bg_popup_call2_rect_pane_g3

0xc73b,	// (0x000496dc) bg_popup_call2_rect_pane_g4

0xc743,	// (0x000496e4) bg_popup_call2_rect_pane_g5

0xc74b,	// (0x000496ec) bg_popup_call2_rect_pane_g6

0xc753,	// (0x000496f4) bg_popup_call2_rect_pane_g7

0xc75b,	// (0x000496fc) bg_popup_call2_rect_pane_g8

0xc763,	// (0x00049704) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0004c50b) bg_popup_call2_rect_pane_g

0xc76b,	// (0x0004970c) bg_popup_call2_bubble_pane_g1

0xc773,	// (0x00049714) bg_popup_call2_bubble_pane_g2

0xc77b,	// (0x0004971c) bg_popup_call2_bubble_pane_g3

0xc783,	// (0x00049724) bg_popup_call2_bubble_pane_g4

0xc78b,	// (0x0004972c) bg_popup_call2_bubble_pane_g5

0xc793,	// (0x00049734) bg_popup_call2_bubble_pane_g6

0xc79b,	// (0x0004973c) bg_popup_call2_bubble_pane_g7

0xc7a3,	// (0x00049744) bg_popup_call2_bubble_pane_g8

0xc7ab,	// (0x0004974c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0004c51e) bg_popup_call2_bubble_pane_g

0x2a05,	// (0x0003f9a6) aid_cale_week_size_cell_pane

0x2f88,	// (0x0003ff29) aid_cams_cif_uncrop_pane_ParamLimits

0x2f88,	// (0x0003ff29) aid_cams_cif_uncrop_pane

0x30e3,	// (0x00040084) aid_cams_size_cell_ParamLimits

0x30e3,	// (0x00040084) aid_cams_size_cell

0x30ef,	// (0x00040090) grid_cams_pane_ParamLimits

0x30fd,	// (0x0004009e) linegrid_cams_pane_ParamLimits

0x31d4,	// (0x00040175) call_video_pane_t1

0x31f5,	// (0x00040196) call_video_pane_t2

0x0001,

0xf26a,	// (0x0004c20b) call_video_pane_t

0x3743,	// (0x000406e4) aid_cale_month_size_cell_pane_ParamLimits

0x3743,	// (0x000406e4) aid_cale_month_size_cell_pane

0xf61a,	// (0x0004c5bb) smil_status_volume_pane_g

0x55f1,	// (0x00042592) volume_smil_pane_ParamLimits

0x2169,	// (0x0003f10a) aid_popup2_width_pane

0x28ff,	// (0x0003f8a0) cell_qdial_pane_g4_ParamLimits

0x28ff,	// (0x0003f8a0) cell_qdial_pane_g4

0x4678,	// (0x00041619) aid_blid_cardinal_pane_ParamLimits

0x4688,	// (0x00041629) aid_blid_destination_pane_ParamLimits

0x4688,	// (0x00041629) aid_blid_destination_pane

0xa811,	// (0x000477b2) bg_popup_call_poc_act_pane_ParamLimits

0xa811,	// (0x000477b2) bg_popup_call_poc_act_pane

0xa811,	// (0x000477b2) bg_popup_call_poc_inact_pane_ParamLimits

0xa811,	// (0x000477b2) bg_popup_call_poc_inact_pane

0xc7b3,	// (0x00049754) bg_popup_call_poc_act_pane_g1

0xc7bb,	// (0x0004975c) bg_popup_call_poc_act_pane_g2

0xc7c3,	// (0x00049764) bg_popup_call_poc_act_pane_g3

0xc783,	// (0x00049724) bg_popup_call_poc_act_pane_g4

0xc78b,	// (0x0004972c) bg_popup_call_poc_act_pane_g5

0xc7cb,	// (0x0004976c) bg_popup_call_poc_act_pane_g6

0xc79b,	// (0x0004973c) bg_popup_call_poc_act_pane_g7

0xc7d3,	// (0x00049774) bg_popup_call_poc_act_pane_g8

0xa5a0,	// (0x00047541) main_usb_pane

0x53e1,	// (0x00042382) popup_cale_lunar_info_window

0x3512,	// (0x000404b3) im_reading_pane_t1_ParamLimits

0xaba8,	// (0x00047b49) list_im_pane_ParamLimits

0xabb9,	// (0x00047b5a) scroll_pane_cp07_ParamLimits

0xa5a0,	// (0x00047541) grid_highlight_pane_cp012

0xa811,	// (0x000477b2) mup_scale_pane_ParamLimits

0xb44c,	// (0x000483ed) main_usb_pane_g1_ParamLimits

0xb44c,	// (0x000483ed) main_usb_pane_g1

0x5150,	// (0x000420f1) main_usb_pane_g2_ParamLimits

0x5150,	// (0x000420f1) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x0004c55b) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x0004c55b) main_usb_pane_g

0x515c,	// (0x000420fd) main_usb_pane_t1_ParamLimits

0x515c,	// (0x000420fd) main_usb_pane_t1

0x516e,	// (0x0004210f) main_usb_pane_t2_ParamLimits

0x516e,	// (0x0004210f) main_usb_pane_t2

0x5180,	// (0x00042121) main_usb_pane_t3_ParamLimits

0x5180,	// (0x00042121) main_usb_pane_t3

0x5192,	// (0x00042133) main_usb_pane_t4_ParamLimits

0x5192,	// (0x00042133) main_usb_pane_t4

0x51a4,	// (0x00042145) main_usb_pane_t5_ParamLimits

0x51a4,	// (0x00042145) main_usb_pane_t5

0x51b6,	// (0x00042157) main_usb_pane_t6_ParamLimits

0x51b6,	// (0x00042157) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x0004c560) main_usb_pane_t_ParamLimits

0x461e,	// (0x000415bf) aid_text_placing

0x462a,	// (0x000415cb) main_location2_pane_t1_ParamLimits

0x463e,	// (0x000415df) main_location2_pane_t2_ParamLimits

0x4652,	// (0x000415f3) main_location2_pane_t3_ParamLimits

0x4666,	// (0x00041607) main_location2_pane_t4_ParamLimits

0x4666,	// (0x00041607) main_location2_pane_t4

0xf3cb,	// (0x0004c36c) main_location2_pane_t_ParamLimits

0xa84d,	// (0x000477ee) find_pinb_pane_g2_ParamLimits

0xa84d,	// (0x000477ee) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0004c0bc) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0004c0bc) find_pinb_pane_g

0xa859,	// (0x000477fa) find_pinb_pane_t1_ParamLimits

0xa86b,	// (0x0004780c) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0004c0c1) find_pinb_pane_t_ParamLimits

0xa5a0,	// (0x00047541) main_call3_pane

0x3d06,	// (0x00040ca7) cale_month_day_heading_pane_t1_ParamLimits

0x3d8c,	// (0x00040d2d) cale_month_day_heading_pane_t2_ParamLimits

0x3e05,	// (0x00040da6) cale_month_day_heading_pane_t3_ParamLimits

0x3e7e,	// (0x00040e1f) cale_month_day_heading_pane_t4_ParamLimits

0x3ef7,	// (0x00040e98) cale_month_day_heading_pane_t5_ParamLimits

0x3f70,	// (0x00040f11) cale_month_day_heading_pane_t6_ParamLimits

0x3fe9,	// (0x00040f8a) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0004c243) cale_month_day_heading_pane_t_ParamLimits

0xae38,	// (0x00047dd9) smil_status_volume_pane

0x4d0f,	// (0x00041cb0) postcard_address_pane_ParamLimits

0x4d0f,	// (0x00041cb0) postcard_address_pane

0x4d1b,	// (0x00041cbc) postcard_message_pane_ParamLimits

0x4d1b,	// (0x00041cbc) postcard_message_pane

0x5115,	// (0x000420b6) call2_cli_visual_pane_t1_ParamLimits

0x5115,	// (0x000420b6) call2_cli_visual_pane_t1

0x5748,	// (0x000426e9) postcard_message_pane_t1_ParamLimits

0x5748,	// (0x000426e9) postcard_message_pane_t1

0x5731,	// (0x000426d2) postcard_address_pane_t1_ParamLimits

0x5731,	// (0x000426d2) postcard_address_pane_t1

0x5722,	// (0x000426c3) popup_call3_audio_in_window_ParamLimits

0x5722,	// (0x000426c3) popup_call3_audio_in_window

0x5606,	// (0x000425a7) bg_popup_call3_in_pane_ParamLimits

0x5606,	// (0x000425a7) bg_popup_call3_in_pane

0x5668,	// (0x00042609) popup_call3_audio_in_window_g1_ParamLimits

0x5668,	// (0x00042609) popup_call3_audio_in_window_g1

0x5680,	// (0x00042621) popup_call3_audio_in_window_g2_ParamLimits

0x5680,	// (0x00042621) popup_call3_audio_in_window_g2

0x5698,	// (0x00042639) popup_call3_audio_in_window_g3_ParamLimits

0x5698,	// (0x00042639) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x0004c5c2) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x0004c5c2) popup_call3_audio_in_window_g

0x56c0,	// (0x00042661) popup_call3_audio_in_window_t1_ParamLimits

0x56c0,	// (0x00042661) popup_call3_audio_in_window_t1

0x56e8,	// (0x00042689) popup_call3_audio_in_window_t2_ParamLimits

0x56e8,	// (0x00042689) popup_call3_audio_in_window_t2

0x5710,	// (0x000426b1) popup_call3_audio_in_window_t3_ParamLimits

0x5710,	// (0x000426b1) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x0004c5cb) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x0004c5cb) popup_call3_audio_in_window_t

0xaaa7,	// (0x00047a48) bg_popup_call3_rect_pane

0xc72b,	// (0x000496cc) bg_popup_call3_rect_pane_g1

0xa9c3,	// (0x00047964) bg_popup_call3_rect_pane_g2

0xc733,	// (0x000496d4) bg_popup_call3_rect_pane_g3

0xc73b,	// (0x000496dc) bg_popup_call3_rect_pane_g4

0xc743,	// (0x000496e4) bg_popup_call3_rect_pane_g5

0xc74b,	// (0x000496ec) bg_popup_call3_rect_pane_g6

0xc753,	// (0x000496f4) bg_popup_call3_rect_pane_g7

0x498e,	// (0x0004192f) mup_visualizer_osc_pane

0xb5dc,	// (0x0004857d) mup_visualizer_spec_pane

0x5626,	// (0x000425c7) call3_video_qcif_pane_ParamLimits

0x5626,	// (0x000425c7) call3_video_qcif_pane

0x5638,	// (0x000425d9) call3_video_qcif_uncrop_pane_ParamLimits

0x5638,	// (0x000425d9) call3_video_qcif_uncrop_pane

0x5646,	// (0x000425e7) call3_video_subqcif_pane_ParamLimits

0x5646,	// (0x000425e7) call3_video_subqcif_pane

0x5658,	// (0x000425f9) call3_video_subqcif_uncrop_pane_ParamLimits

0x5658,	// (0x000425f9) call3_video_subqcif_uncrop_pane

0x56b0,	// (0x00042651) popup_call3_audio_in_window_g4_ParamLimits

0x56b0,	// (0x00042651) popup_call3_audio_in_window_g4

0x55d1,	// (0x00042572) mup_spec_half_pane

0x55da,	// (0x0004257b) mup_spec_half_pane_cp

0xc9d0,	// (0x00049971) mup_osc_middle_pane

0xc9d9,	// (0x0004997a) mup_visualizer_osc_pane_g1

0x55b2,	// (0x00042553) mup_spec_bar_pane_ParamLimits

0x55b2,	// (0x00042553) mup_spec_bar_pane

0xc9bd,	// (0x0004995e) mup_spec_bar_pane_g1

0xc9c7,	// (0x00049968) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0004c5b6) mup_spec_bar_pane_g

0x2a05,	// (0x0003f9a6) aid_cale_week_size_cell_pane_ParamLimits

0x2a1a,	// (0x0003f9bb) bg_cale_heading_pane_ParamLimits

0xaa00,	// (0x000479a1) bg_cale_pane_cp01_ParamLimits

0x2a3c,	// (0x0003f9dd) cale_week_corner_pane_ParamLimits

0x2a56,	// (0x0003f9f7) cale_week_day_heading_pane_ParamLimits

0x2a78,	// (0x0003fa19) cale_week_scroll_pane_g1_ParamLimits

0x2a95,	// (0x0003fa36) cale_week_scroll_pane_g2_ParamLimits

0x2aa8,	// (0x0003fa49) cale_week_scroll_pane_g3_ParamLimits

0x2abb,	// (0x0003fa5c) cale_week_scroll_pane_g4_ParamLimits

0x2ace,	// (0x0003fa6f) cale_week_scroll_pane_g5_ParamLimits

0x2ae1,	// (0x0003fa82) cale_week_scroll_pane_g6_ParamLimits

0x2af4,	// (0x0003fa95) cale_week_scroll_pane_g7_ParamLimits

0x2b09,	// (0x0003faaa) cale_week_scroll_pane_g8_ParamLimits

0x2b1e,	// (0x0003fabf) cale_week_scroll_pane_g9_ParamLimits

0x2b31,	// (0x0003fad2) cale_week_scroll_pane_g10_ParamLimits

0x2b44,	// (0x0003fae5) cale_week_scroll_pane_g11_ParamLimits

0x2b57,	// (0x0003faf8) cale_week_scroll_pane_g12_ParamLimits

0x2b6e,	// (0x0003fb0f) cale_week_scroll_pane_g13_ParamLimits

0x2b89,	// (0x0003fb2a) cale_week_scroll_pane_g14_ParamLimits

0x2ba4,	// (0x0003fb45) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0004c14d) cale_week_scroll_pane_g_ParamLimits

0x2bd4,	// (0x0003fb75) cale_week_time_pane_ParamLimits

0x2be9,	// (0x0003fb8a) grid_cale_week_pane_ParamLimits

0xaa1d,	// (0x000479be) listscroll_cale_week_pane_t1

0xaa2f,	// (0x000479d0) scroll_pane_cp08_ParamLimits

0x37b7,	// (0x00040758) cale_month_corner_pane_ParamLimits

0xae0e,	// (0x00047daf) cale_month_pane_t1

0x3c85,	// (0x00040c26) cale_month_week_pane_ParamLimits

0xb44c,	// (0x000483ed) popup_call_status_window_g1_ParamLimits

0x4427,	// (0x000413c8) popup_call_status_window_g2_ParamLimits

0x4433,	// (0x000413d4) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0004c2f3) popup_call_status_window_g_ParamLimits

0xb1b2,	// (0x00048153) aid_call2_pane

0x0ff6,	// (0x0003df97) msg_header_pane_g1

0x4d0f,	// (0x00041cb0) postcard_address2_pane_ParamLimits

0x4d0f,	// (0x00041cb0) postcard_address2_pane

0x4d1b,	// (0x00041cbc) postcard_message2_pane_ParamLimits

0x4d1b,	// (0x00041cbc) postcard_message2_pane

0x5549,	// (0x000424ea) message2_row_pane_ParamLimits

0x5549,	// (0x000424ea) message2_row_pane

0x5564,	// (0x00042505) address2_row_pane_ParamLimits

0x5564,	// (0x00042505) address2_row_pane

0xc98b,	// (0x0004992c) postcard_message2_row_pane_g1

0xc993,	// (0x00049934) postcard_message2_row_pane_t1

0xc98b,	// (0x0004992c) address2_row_pane_g1

0xc993,	// (0x00049934) address2_row_pane_t1

0x2e6e,	// (0x0003fe0f) aid_size_cell_vorec

0xa5a0,	// (0x00047541) main_rss_pane

0x5577,	// (0x00042518) rss_list_single_pane_ParamLimits

0x5577,	// (0x00042518) rss_list_single_pane

0xc9a1,	// (0x00049942) rss_list_single_pane_t1

0xc9af,	// (0x00049950) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x0004c5b1) rss_list_single_pane_t

0xa5a0,	// (0x00047541) main_camera2_pane

0xa5a0,	// (0x00047541) main_video2_pane

0x57ac,	// (0x0004274d) cams_zoom_pane_cp2_ParamLimits

0x57ac,	// (0x0004274d) cams_zoom_pane_cp2

0x57b8,	// (0x00042759) image2_vga_pane_ParamLimits

0x57b8,	// (0x00042759) image2_vga_pane

0x57c7,	// (0x00042768) main_camera2_pane_g1_ParamLimits

0x57c7,	// (0x00042768) main_camera2_pane_g1

0x57d3,	// (0x00042774) main_camera2_pane_g2_ParamLimits

0x57d3,	// (0x00042774) main_camera2_pane_g2

0x57df,	// (0x00042780) main_camera2_pane_g3_ParamLimits

0x57df,	// (0x00042780) main_camera2_pane_g3

0x57eb,	// (0x0004278c) main_camera2_pane_g4_ParamLimits

0x57eb,	// (0x0004278c) main_camera2_pane_g4

0x57f7,	// (0x00042798) main_camera2_pane_g5_ParamLimits

0x57f7,	// (0x00042798) main_camera2_pane_g5

0x5803,	// (0x000427a4) main_camera2_pane_g6_ParamLimits

0x5803,	// (0x000427a4) main_camera2_pane_g6

0x580f,	// (0x000427b0) main_camera2_pane_g7_ParamLimits

0x580f,	// (0x000427b0) main_camera2_pane_g7

0x581b,	// (0x000427bc) main_camera2_pane_g8_ParamLimits

0x581b,	// (0x000427bc) main_camera2_pane_g8

0x0008,

0xf631,	// (0x0004c5d2) main_camera2_pane_g_ParamLimits

0xf631,	// (0x0004c5d2) main_camera2_pane_g

0x5833,	// (0x000427d4) main_camera2_pane_t1_ParamLimits

0x5833,	// (0x000427d4) main_camera2_pane_t1

0x5845,	// (0x000427e6) main_camera2_pane_t2_ParamLimits

0x5845,	// (0x000427e6) main_camera2_pane_t2

0x5857,	// (0x000427f8) main_camera2_pane_t3_ParamLimits

0x5857,	// (0x000427f8) main_camera2_pane_t3

0x5869,	// (0x0004280a) main_camera2_pane_t4_ParamLimits

0x5869,	// (0x0004280a) main_camera2_pane_t4

0x0006,

0xf644,	// (0x0004c5e5) main_camera2_pane_t_ParamLimits

0xf644,	// (0x0004c5e5) main_camera2_pane_t

0x58cb,	// (0x0004286c) cams_zoom_pane_cp4_ParamLimits

0x58cb,	// (0x0004286c) cams_zoom_pane_cp4

0x58db,	// (0x0004287c) image2_cif_pane_ParamLimits

0x58db,	// (0x0004287c) image2_cif_pane

0x58f0,	// (0x00042891) image2_subqcif_pane_ParamLimits

0x58f0,	// (0x00042891) image2_subqcif_pane

0x58ff,	// (0x000428a0) main_video2_pane_g1_ParamLimits

0x58ff,	// (0x000428a0) main_video2_pane_g1

0x5911,	// (0x000428b2) main_video2_pane_g2_ParamLimits

0x5911,	// (0x000428b2) main_video2_pane_g2

0x5921,	// (0x000428c2) main_video2_pane_g3_ParamLimits

0x5921,	// (0x000428c2) main_video2_pane_g3

0x5931,	// (0x000428d2) main_video2_pane_g4_ParamLimits

0x5931,	// (0x000428d2) main_video2_pane_g4

0x5941,	// (0x000428e2) main_video2_pane_g5_ParamLimits

0x5941,	// (0x000428e2) main_video2_pane_g5

0x5951,	// (0x000428f2) main_video2_pane_g6_ParamLimits

0x5951,	// (0x000428f2) main_video2_pane_g6

0x0005,

0xf653,	// (0x0004c5f4) main_video2_pane_g_ParamLimits

0xf653,	// (0x0004c5f4) main_video2_pane_g

0x5963,	// (0x00042904) main_video2_pane_t1_ParamLimits

0x5963,	// (0x00042904) main_video2_pane_t1

0x597d,	// (0x0004291e) main_video2_pane_t2_ParamLimits

0x597d,	// (0x0004291e) main_video2_pane_t2

0x59a3,	// (0x00042944) main_video2_pane_t3_ParamLimits

0x59a3,	// (0x00042944) main_video2_pane_t3

0x0002,

0xf660,	// (0x0004c601) main_video2_pane_t_ParamLimits

0xf660,	// (0x0004c601) main_video2_pane_t

0x526d,	// (0x0004220e) call_muted_g2

0x0001,

0xf602,	// (0x0004c5a3) call_muted_g

0xa5a0,	// (0x00047541) main_mup2_pane

0xca10,	// (0x000499b1) main_mup2_pane_g1_ParamLimits

0xca10,	// (0x000499b1) main_mup2_pane_g1

0x59c9,	// (0x0004296a) main_mup2_pane_g2_ParamLimits

0x59c9,	// (0x0004296a) main_mup2_pane_g2

0x5c4b,	// (0x00042bec) main_mup_pane_g13_cp1

0x5c53,	// (0x00042bf4) mup_volume_pane_cp1

0x59e9,	// (0x0004298a) main_mup2_pane_g4_ParamLimits

0x59e9,	// (0x0004298a) main_mup2_pane_g4

0x59fe,	// (0x0004299f) main_mup2_pane_g5_ParamLimits

0x59fe,	// (0x0004299f) main_mup2_pane_g5

0x5a13,	// (0x000429b4) main_mup2_pane_g6_ParamLimits

0x5a13,	// (0x000429b4) main_mup2_pane_g6

0x5a28,	// (0x000429c9) main_mup2_pane_g7_ParamLimits

0x5a28,	// (0x000429c9) main_mup2_pane_g7

0x0006,

0xf667,	// (0x0004c608) main_mup2_pane_g_ParamLimits

0xf667,	// (0x0004c608) main_mup2_pane_g

0x5a44,	// (0x000429e5) main_mup2_pane_t1_ParamLimits

0x5a44,	// (0x000429e5) main_mup2_pane_t1

0x5a5b,	// (0x000429fc) main_mup2_pane_t2_ParamLimits

0x5a5b,	// (0x000429fc) main_mup2_pane_t2

0x5a72,	// (0x00042a13) main_mup2_pane_t3_ParamLimits

0x5a72,	// (0x00042a13) main_mup2_pane_t3

0x5a89,	// (0x00042a2a) main_mup2_pane_t4_ParamLimits

0x5a89,	// (0x00042a2a) main_mup2_pane_t4

0x5aa3,	// (0x00042a44) main_mup2_pane_t5_ParamLimits

0x5aa3,	// (0x00042a44) main_mup2_pane_t5

0x5abd,	// (0x00042a5e) main_mup2_pane_t6_ParamLimits

0x5abd,	// (0x00042a5e) main_mup2_pane_t6

0x0005,

0xf676,	// (0x0004c617) main_mup2_pane_t_ParamLimits

0xf676,	// (0x0004c617) main_mup2_pane_t

0x5af5,	// (0x00042a96) mup2_visualizer_pane_ParamLimits

0x5af5,	// (0x00042a96) mup2_visualizer_pane

0x5b2b,	// (0x00042acc) mup_progress_pane_cp_ParamLimits

0x5b2b,	// (0x00042acc) mup_progress_pane_cp

0x5c36,	// (0x00042bd7) mup_volume_pane_cp_ParamLimits

0x5c36,	// (0x00042bd7) mup_volume_pane_cp

0x5b42,	// (0x00042ae3) mup2_visualizer_pane_g1_ParamLimits

0x5b42,	// (0x00042ae3) mup2_visualizer_pane_g1

0xca1c,	// (0x000499bd) mup2_visualizer_pane_g2_ParamLimits

0xca1c,	// (0x000499bd) mup2_visualizer_pane_g2

0x5b57,	// (0x00042af8) mup2_visualizer_pane_g3_ParamLimits

0x5b57,	// (0x00042af8) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x0004c624) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x0004c624) mup2_visualizer_pane_g

0xb803,	// (0x000487a4) aid_size_cell_fmradio

0x5383,	// (0x00042324) aid_height_parent_landcape

0xac37,	// (0x00047bd8) wml_content_pane_cp

0xac3f,	// (0x00047be0) wml_tabs_pane

0xac48,	// (0x00047be9) popup_wml_miniature_window

0xac50,	// (0x00047bf1) scroll_pane_cp021

0xac64,	// (0x00047c05) wml_content_pane_comp8

0xa5a0,	// (0x00047541) bg_popup_sub_pane_cp05

0xca3a,	// (0x000499db) popup_wml_miniature_window_g1

0xca42,	// (0x000499e3) wml_miniature_view_pane

0x5b65,	// (0x00042b06) aid_size_wml_view

0x5b6d,	// (0x00042b0e) wml_miniature_view_pane_g1

0x5b76,	// (0x00042b17) wml_miniature_view_pane_g2

0x5b7f,	// (0x00042b20) wml_miniature_view_pane_g3

0x5b87,	// (0x00042b28) wml_miniature_view_pane_g4

0x5b8f,	// (0x00042b30) wml_miniature_view_pane_g5

0x5b97,	// (0x00042b38) wml_miniature_view_pane_g6

0x5b9f,	// (0x00042b40) wml_miniature_view_pane_g7

0x5ba7,	// (0x00042b48) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x0004c62b) wml_miniature_view_pane_g

0xca10,	// (0x000499b1) background_graphic_ParamLimits

0xca10,	// (0x000499b1) background_graphic

0xca4a,	// (0x000499eb) wml_tabs_2_pane

0xca53,	// (0x000499f4) wml_tabs_3_pane_ParamLimits

0xca53,	// (0x000499f4) wml_tabs_3_pane

0xca65,	// (0x00049a06) wml_tabs_4_pane_ParamLimits

0xca65,	// (0x00049a06) wml_tabs_4_pane

0xca7b,	// (0x00049a1c) wml_tabs_5_pane_ParamLimits

0xca7b,	// (0x00049a1c) wml_tabs_5_pane

0xca95,	// (0x00049a36) wml_tabs_pane_g2_ParamLimits

0xca95,	// (0x00049a36) wml_tabs_pane_g2

0xcaa9,	// (0x00049a4a) wml_tabs_pane_g3_ParamLimits

0xcaa9,	// (0x00049a4a) wml_tabs_pane_g3

0x5baf,	// (0x00042b50) wml_tabs_2_active_pane_ParamLimits

0x5baf,	// (0x00042b50) wml_tabs_2_active_pane

0x5bbf,	// (0x00042b60) wml_tabs_2_passive_pane_ParamLimits

0x5bbf,	// (0x00042b60) wml_tabs_2_passive_pane

0x5bcf,	// (0x00042b70) wml_tabs_3_active_pane_cp_ParamLimits

0x5bcf,	// (0x00042b70) wml_tabs_3_active_pane_cp

0x5be0,	// (0x00042b81) wml_tabs_3_passive_pane_ParamLimits

0x5be0,	// (0x00042b81) wml_tabs_3_passive_pane

0x5bf1,	// (0x00042b92) wml_tabs_3_passive_pane_cp_ParamLimits

0x5bf1,	// (0x00042b92) wml_tabs_3_passive_pane_cp

0x5c02,	// (0x00042ba3) tabs_4_active_pane

0x5c0a,	// (0x00042bab) tabs_4_passive_pane

0x5c12,	// (0x00042bb3) tabs_4_passive_pane_cp

0x5c1a,	// (0x00042bbb) tabs_4_passive_pane_cp2

0x5148,	// (0x000420e9) aid_height_text

0x4957,	// (0x000418f8) mup_volume_cont_pane_ParamLimits

0x4957,	// (0x000418f8) mup_volume_cont_pane

0x253b,	// (0x0003f4dc) aid_size_cell_pinb

0x2545,	// (0x0003f4e6) aid_size_list_pinb

0x5b14,	// (0x00042ab5) mup2_volume_cont_pane_ParamLimits

0x5b14,	// (0x00042ab5) mup2_volume_cont_pane

0x5c22,	// (0x00042bc3) mup2_volume_cont_pane_g1_ParamLimits

0x5c22,	// (0x00042bc3) mup2_volume_cont_pane_g1

0x2175,	// (0x0003f116) aid_size_cell_touch_ParamLimits

0x2175,	// (0x0003f116) aid_size_cell_touch

0x241e,	// (0x0003f3bf) touch_pane_ParamLimits

0x241e,	// (0x0003f3bf) touch_pane

0xa183,	// (0x00047124) main_rss2_pane

0xcac6,	// (0x00049a67) listscroll_rss2_pane

0xcacf,	// (0x00049a70) rss2_navigation_pane

0xcad7,	// (0x00049a78) list_rss2_pane

0xb2d7,	// (0x00048278) scroll_pane_cp22

0xcadf,	// (0x00049a80) rss2_navigation_pane_g1

0xcae8,	// (0x00049a89) rss2_navigation_pane_g2

0xcaf0,	// (0x00049a91) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x0004c63c) rss2_navigation_pane_g

0xcaf8,	// (0x00049a99) rss2_navigation_pane_t1

0x5c5b,	// (0x00042bfc) rss2_list_single_pane_ParamLimits

0x5c5b,	// (0x00042bfc) rss2_list_single_pane

0xcb06,	// (0x00049aa7) rss2_list_single_pane_t2

0xcb14,	// (0x00049ab5) rss2_list_single_pane_t3_ParamLimits

0xcb14,	// (0x00049ab5) rss2_list_single_pane_t3

0xcb31,	// (0x00049ad2) rss2_list_single_pane_t4

0x428b,	// (0x0004122c) smil_status_pane_g1

0xadd9,	// (0x00047d7a) main_image2_pane_ParamLimits

0xadd9,	// (0x00047d7a) main_image2_pane

0x5827,	// (0x000427c8) main_camera2_pane_g9_ParamLimits

0x5827,	// (0x000427c8) main_camera2_pane_g9

0x587b,	// (0x0004281c) main_camera2_pane_t5_ParamLimits

0x587b,	// (0x0004281c) main_camera2_pane_t5

0x588d,	// (0x0004282e) main_camera2_pane_t6_ParamLimits

0x588d,	// (0x0004282e) main_camera2_pane_t6

0x5c8f,	// (0x00042c30) main_image2_pane_g1_ParamLimits

0x5c8f,	// (0x00042c30) main_image2_pane_g1

0x4ee2,	// (0x00041e83) smil2_video_pane_ParamLimits

0x4ee2,	// (0x00041e83) smil2_video_pane

0x0d3e,	// (0x0003dcdf) aid_zoom_text_primary_cp

0x23c7,	// (0x0003f368) popup_preview_fixed_window

0xaba0,	// (0x00047b41) im_reading_pane_g1

0x5771,	// (0x00042712) cams2_bc_adjust_pane_cp_ParamLimits

0x5771,	// (0x00042712) cams2_bc_adjust_pane_cp

0x58bd,	// (0x0004285e) cams2_bc_adjust_pane_ParamLimits

0x58bd,	// (0x0004285e) cams2_bc_adjust_pane

0x5c9b,	// (0x00042c3c) cams2_bc_adjust_pane_g1

0x5ca3,	// (0x00042c44) cams2_slider_pane

0x5cac,	// (0x00042c4d) cams2_slider_pane_g1

0x5cb5,	// (0x00042c56) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x0004c643) cams2_slider_pane_g

0x2645,	// (0x0003f5e6) calc_display_pane_ParamLimits

0x2663,	// (0x0003f604) calc_paper_pane_ParamLimits

0x267f,	// (0x0003f620) grid_calc_pane_ParamLimits

0x4491,	// (0x00041432) popup_clock_digital_window_t1_ParamLimits

0xb7a0,	// (0x00048741) main_image_pane_t1

0x262b,	// (0x0003f5cc) aid_size_cell_calc_ParamLimits

0x262b,	// (0x0003f5cc) aid_size_cell_calc

0x53bd,	// (0x0004235e) popup_blid_sat_info2_window_ParamLimits

0x53bd,	// (0x0004235e) popup_blid_sat_info2_window

0xcb47,	// (0x00049ae8) aid_size_cell_blid

0xcb4f,	// (0x00049af0) bg_popup_window_pane_cp07

0xcb72,	// (0x00049b13) grid_popup_blid_pane

0xcb7c,	// (0x00049b1d) heading_pane_cp05_ParamLimits

0xcb7c,	// (0x00049b1d) heading_pane_cp05

0xcc46,	// (0x00049be7) cell_popup_blid_pane_ParamLimits

0xcc46,	// (0x00049be7) cell_popup_blid_pane

0xcc6a,	// (0x00049c0b) cell_popup_blid_pane_g1

0xcc72,	// (0x00049c13) cell_popup_blid_pane_t1

0x5ada,	// (0x00042a7b) mup2_indicator_pane_ParamLimits

0x5ada,	// (0x00042a7b) mup2_indicator_pane

0xaaa7,	// (0x00047a48) mup2_visualizer_osc_pane

0xca28,	// (0x000499c9) mup2_visualizer_spec_pane_ParamLimits

0xca28,	// (0x000499c9) mup2_visualizer_spec_pane

0x5ccf,	// (0x00042c70) mup2_spec_half_pane

0x5cd8,	// (0x00042c79) mup2_spec_half_pane_cp

0x5ce2,	// (0x00042c83) mup2_spec_bar_pane_ParamLimits

0x5ce2,	// (0x00042c83) mup2_spec_bar_pane

0xc9bd,	// (0x0004995e) mup2_spec_bar_pane_g1

0xc9c7,	// (0x00049968) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0004c5b6) mup2_spec_bar_pane_g

0x5d01,	// (0x00042ca2) mup2_osc_middle_pane

0xc9d9,	// (0x0004997a) mup2_visualizer_osc_pane_g1

0xa1ad,	// (0x0004714e) popup_number_entry_window_t1_ParamLimits

0xa1c0,	// (0x00047161) popup_number_entry_window_t2_ParamLimits

0xa1d2,	// (0x00047173) popup_number_entry_window_t3_ParamLimits

0x2475,	// (0x0003f416) popup_number_entry_window_t5_ParamLimits

0x2475,	// (0x0003f416) popup_number_entry_window_t5

0xf0c6,	// (0x0004c067) popup_number_entry_window_t_ParamLimits

0xa1e4,	// (0x00047185) text_title_cp2_ParamLimits

0x4bd7,	// (0x00041b78) aid_hotspot_pointer_text2_pane

0x4c71,	// (0x00041c12) main_viewer_pane_g9_ParamLimits

0x4c71,	// (0x00041c12) main_viewer_pane_g9

0xae0e,	// (0x00047daf) cale_month_pane_t1_ParamLimits

0xae4b,	// (0x00047dec) bg_cale_pane_ParamLimits

0xae63,	// (0x00047e04) list_cale_pane_ParamLimits

0xae74,	// (0x00047e15) listscroll_cale_day_pane_t1

0xae86,	// (0x00047e27) scroll_pane_cp09_ParamLimits

0x4996,	// (0x00041937) main_mup_eq_pane_t1_ParamLimits

0x4996,	// (0x00041937) main_mup_eq_pane_t1

0x49b0,	// (0x00041951) main_mup_eq_pane_t2_ParamLimits

0x49b0,	// (0x00041951) main_mup_eq_pane_t2

0x49c8,	// (0x00041969) main_mup_eq_pane_t3_ParamLimits

0x49c8,	// (0x00041969) main_mup_eq_pane_t3

0x49e0,	// (0x00041981) main_mup_eq_pane_t4_ParamLimits

0x49e0,	// (0x00041981) main_mup_eq_pane_t4

0x49f8,	// (0x00041999) main_mup_eq_pane_t5_ParamLimits

0x49f8,	// (0x00041999) main_mup_eq_pane_t5

0x4a10,	// (0x000419b1) main_mup_eq_pane_t6_ParamLimits

0x4a10,	// (0x000419b1) main_mup_eq_pane_t6

0x4a24,	// (0x000419c5) main_mup_eq_pane_t7_ParamLimits

0x4a24,	// (0x000419c5) main_mup_eq_pane_t7

0x4a38,	// (0x000419d9) main_mup_eq_pane_t8_ParamLimits

0x4a38,	// (0x000419d9) main_mup_eq_pane_t8

0x4a4e,	// (0x000419ef) main_mup_eq_pane_t9_ParamLimits

0x4a4e,	// (0x000419ef) main_mup_eq_pane_t9

0x4a66,	// (0x00041a07) main_mup_eq_pane_t10_ParamLimits

0x4a66,	// (0x00041a07) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0004c3f2) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0004c3f2) main_mup_eq_pane_t

0x4b23,	// (0x00041ac4) mup_equalizer_pane_cp5_ParamLimits

0x4b39,	// (0x00041ada) mup_equalizer_pane_cp6_ParamLimits

0x4b51,	// (0x00041af2) mup_equalizer_pane_cp7_ParamLimits

0xa183,	// (0x00047124) main_gallery_pane

0xc9e2,	// (0x00049983) smil2_volume_pane

0xc9ea,	// (0x0004998b) smil_status_volume_pane_g1_ParamLimits

0xc9fd,	// (0x0004999e) smil_status_volume_pane_g2_ParamLimits

0x55e4,	// (0x00042585) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x0004c5bb) smil_status_volume_pane_g_ParamLimits

0xcb4f,	// (0x00049af0) bg_popup_window_pane_cp07_ParamLimits

0xcb5d,	// (0x00049afe) blid_firmament_pane

0x5d0a,	// (0x00042cab) aid_size_cell_gallery_ParamLimits

0x5d0a,	// (0x00042cab) aid_size_cell_gallery

0x5d18,	// (0x00042cb9) grid_gallery_pane_ParamLimits

0x5d18,	// (0x00042cb9) grid_gallery_pane

0x5d28,	// (0x00042cc9) cell_gallery_pane_ParamLimits

0x5d28,	// (0x00042cc9) cell_gallery_pane

0xcc80,	// (0x00049c21) bg_cell_gallery_focus_pane_ParamLimits

0xcc80,	// (0x00049c21) bg_cell_gallery_focus_pane

0xcc92,	// (0x00049c33) cell_gallery_pane_g1_ParamLimits

0xcc92,	// (0x00049c33) cell_gallery_pane_g1

0x5d76,	// (0x00042d17) cell_gallery_pane_g2_ParamLimits

0x5d76,	// (0x00042d17) cell_gallery_pane_g2

0x5d83,	// (0x00042d24) cell_gallery_pane_g3_ParamLimits

0x5d83,	// (0x00042d24) cell_gallery_pane_g3

0xcc9e,	// (0x00049c3f) cell_gallery_pane_g4_ParamLimits

0xcc9e,	// (0x00049c3f) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x0004c669) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x0004c669) cell_gallery_pane_g

0xccaa,	// (0x00049c4b) bg_cell_gallery_focus_pane_g1

0xccb2,	// (0x00049c53) bg_cell_gallery_focus_pane_g2

0xccba,	// (0x00049c5b) bg_cell_gallery_focus_pane_g3

0xccc2,	// (0x00049c63) bg_cell_gallery_focus_pane_g4

0xccca,	// (0x00049c6b) bg_cell_gallery_focus_pane_g5

0xccd2,	// (0x00049c73) bg_cell_gallery_focus_pane_g6

0xccda,	// (0x00049c7b) bg_cell_gallery_focus_pane_g7

0xcce2,	// (0x00049c83) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x0004c672) bg_cell_gallery_focus_pane_g

0xccea,	// (0x00049c8b) aid_firma_cardinal

0xccfe,	// (0x00049c9f) blid_firmament_pane_t1

0xcd15,	// (0x00049cb6) blid_firmament_pane_t2

0xcd2c,	// (0x00049ccd) blid_firmament_pane_t3

0xcd43,	// (0x00049ce4) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x0004c683) blid_firmament_pane_t

0xcd5a,	// (0x00049cfb) blid_sat_info_pane

0xcd6a,	// (0x00049d0b) blid_sat_info_pane_g1

0xcd6a,	// (0x00049d0b) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0004c68c) blid_sat_info_pane_g

0xcd74,	// (0x00049d15) blid_sat_info_pane_t1

0xcd82,	// (0x00049d23) smil2_volume_content_pane

0xcd8b,	// (0x00049d2c) smil2_volume_pane_g1

0xade7,	// (0x00047d88) smil2_volume_content_pane_g1

0xcd93,	// (0x00049d34) smil2_volume_content_pane_g2

0xcd9c,	// (0x00049d3d) smil2_volume_content_pane_g3

0xcda5,	// (0x00049d46) smil2_volume_content_pane_g4

0xcdae,	// (0x00049d4f) smil2_volume_content_pane_g5

0xcdb7,	// (0x00049d58) smil2_volume_content_pane_g6

0xcdc0,	// (0x00049d61) smil2_volume_content_pane_g7

0xcdc9,	// (0x00049d6a) smil2_volume_content_pane_g8

0xcdd2,	// (0x00049d73) smil2_volume_content_pane_g9

0xcddb,	// (0x00049d7c) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x0004c691) smil2_volume_content_pane_g

0x2c6a,	// (0x0003fc0b) cale_week_day_heading_pane_t1_ParamLimits

0x2c85,	// (0x0003fc26) cale_week_day_heading_pane_t2_ParamLimits

0x2ca0,	// (0x0003fc41) cale_week_day_heading_pane_t3_ParamLimits

0x2cbb,	// (0x0003fc5c) cale_week_day_heading_pane_t4_ParamLimits

0x2cd6,	// (0x0003fc77) cale_week_day_heading_pane_t5_ParamLimits

0x2cf1,	// (0x0003fc92) cale_week_day_heading_pane_t6_ParamLimits

0x2d0c,	// (0x0003fcad) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0004c16e) cale_week_day_heading_pane_t_ParamLimits

0xaa4c,	// (0x000479ed) bg_cale_side_pane_ParamLimits

0x2d27,	// (0x0003fcc8) cale_week_time_pane_t1_ParamLimits

0x2d41,	// (0x0003fce2) cale_week_time_pane_t2_ParamLimits

0x2d5b,	// (0x0003fcfc) cale_week_time_pane_t3_ParamLimits

0x2d75,	// (0x0003fd16) cale_week_time_pane_t4_ParamLimits

0x2d8f,	// (0x0003fd30) cale_week_time_pane_t5_ParamLimits

0x2da9,	// (0x0003fd4a) cale_week_time_pane_t6_ParamLimits

0x2dc9,	// (0x0003fd6a) cale_week_time_pane_t7_ParamLimits

0x2deb,	// (0x0003fd8c) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0004c17d) cale_week_time_pane_t_ParamLimits

0x2e0f,	// (0x0003fdb0) cell_cale_week_pane_g2_ParamLimits

0xaa4c,	// (0x000479ed) bg_cale_side_pane_cp01_ParamLimits

0x407a,	// (0x0004101b) cale_month_week_pane_t1_ParamLimits

0x4093,	// (0x00041034) cale_month_week_pane_t2_ParamLimits

0x40ac,	// (0x0004104d) cale_month_week_pane_t3_ParamLimits

0x40c5,	// (0x00041066) cale_month_week_pane_t4_ParamLimits

0x40e0,	// (0x00041081) cale_month_week_pane_t5_ParamLimits

0x4101,	// (0x000410a2) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0004c252) cale_month_week_pane_t_ParamLimits

0x4248,	// (0x000411e9) cell_cale_month_pane_g1_ParamLimits

0xa183,	// (0x00047124) main_cale_event_viewer_pane

0xa183,	// (0x00047124) listscroll_cale_event_viewer_pane

0xcde4,	// (0x00049d85) list_cale_ev_pane

0xcdec,	// (0x00049d8d) scroll_pane_cp023

0xcdf8,	// (0x00049d99) field_cale_ev_pane_ParamLimits

0xcdf8,	// (0x00049d99) field_cale_ev_pane

0xce16,	// (0x00049db7) field_cale_ev_content_pane_ParamLimits

0xce16,	// (0x00049db7) field_cale_ev_content_pane

0xce22,	// (0x00049dc3) field_cale_ev_pane_g1_ParamLimits

0xce22,	// (0x00049dc3) field_cale_ev_pane_g1

0xce2e,	// (0x00049dcf) field_cale_ev_pane_g2_ParamLimits

0xce2e,	// (0x00049dcf) field_cale_ev_pane_g2

0xce46,	// (0x00049de7) field_cale_ev_pane_g3_ParamLimits

0xce46,	// (0x00049de7) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x0004c6a6) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x0004c6a6) field_cale_ev_pane_g

0xce5e,	// (0x00049dff) field_cale_ev_pane_t1_ParamLimits

0xce5e,	// (0x00049dff) field_cale_ev_pane_t1

0xadf0,	// (0x00047d91) field_cale_ev_content_pane_t1_ParamLimits

0xadf0,	// (0x00047d91) field_cale_ev_content_pane_t1

0xb686,	// (0x00048627) bg_button_pane_cp01

0x29f5,	// (0x0003f996) listscroll_cale_week_pane_ParamLimits

0xa9f7,	// (0x00047998) popup_toolbar_window_cp01

0xaa1d,	// (0x000479be) listscroll_cale_week_pane_t1_ParamLimits

0x29f5,	// (0x0003f996) listscroll_cale_day_pane_ParamLimits

0xa9f7,	// (0x00047998) popup_toolbar_window_cp02

0xae74,	// (0x00047e15) listscroll_cale_day_pane_t1_ParamLimits

0x29f5,	// (0x0003f996) main_cale_month_pane_ParamLimits

0x54c0,	// (0x00042461) popup_toolbar_window_cp03_ParamLimits

0x54c0,	// (0x00042461) popup_toolbar_window_cp03

0x4df8,	// (0x00041d99) main_image_pane_g2_ParamLimits

0x4df8,	// (0x00041d99) main_image_pane_g2

0x4e04,	// (0x00041da5) main_image_pane_g3_ParamLimits

0x4e04,	// (0x00041da5) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0004c484) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0004c484) main_image_pane_g

0xb7a0,	// (0x00048741) main_image_pane_t1_ParamLimits

0x4e10,	// (0x00041db1) main_image_pane_t2_ParamLimits

0x4e10,	// (0x00041db1) main_image_pane_t2

0x4e22,	// (0x00041dc3) main_image_pane_t3_ParamLimits

0x4e22,	// (0x00041dc3) main_image_pane_t3

0x4e34,	// (0x00041dd5) main_image_pane_t4_ParamLimits

0x4e34,	// (0x00041dd5) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0004c48b) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0004c48b) main_image_pane_t

0x4e46,	// (0x00041de7) popup_image_details_window_cp01

0x4e50,	// (0x00041df1) popup_toobar_trans_pane_cp01_ParamLimits

0x4e50,	// (0x00041df1) popup_toobar_trans_pane_cp01

0x5410,	// (0x000423b1) popup_image_details_window_ParamLimits

0x5410,	// (0x000423b1) popup_image_details_window

0x541e,	// (0x000423bf) popup_image_focus_window

0x5763,	// (0x00042704) camera2_autofocus_pane_ParamLimits

0x5763,	// (0x00042704) camera2_autofocus_pane

0xa183,	// (0x00047124) bg_popup_sub_pane_cp06

0xce75,	// (0x00049e16) popup_image_focus_window_g1

0xce7d,	// (0x00049e1e) popup_image_focus_window_g2

0xce85,	// (0x00049e26) popup_image_focus_window_g3

0xce8d,	// (0x00049e2e) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0004c6ad) popup_image_focus_window_g

0xce95,	// (0x00049e36) popup_image_focus_window_t1

0xcea3,	// (0x00049e44) popup_image_focus_window_t2

0xceb3,	// (0x00049e54) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x0004c6b6) popup_image_focus_window_t

0xcec1,	// (0x00049e62) camera2_autofocus_pane_g1

0xadd9,	// (0x00047d7a) bg_tb_trans_pane_cp01

0xcecf,	// (0x00049e70) popup_image_details_window_g1

0xcee2,	// (0x00049e83) popup_image_details_window_g2

0x0002,

0xf727,	// (0x0004c6c8) popup_image_details_window_g

0xcf0b,	// (0x00049eac) popup_image_details_window_t1

0xcf1d,	// (0x00049ebe) popup_image_details_window_t2

0xcf36,	// (0x00049ed7) popup_image_details_window_t3

0xcf4a,	// (0x00049eeb) popup_image_details_window_t4

0xcf65,	// (0x00049f06) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x0004c6cf) popup_image_details_window_t

0xa8ce,	// (0x0004786f) bg_calc_paper_pane_ParamLimits

0xa183,	// (0x00047124) grid_highlight_pane_cp013

0x277c,	// (0x0003f71d) list_calc_pane_ParamLimits

0x278e,	// (0x0003f72f) scroll_pane_cp024

0xa8e2,	// (0x00047883) bg_calc_display_pane_ParamLimits

0x2796,	// (0x0003f737) calc_display_pane_t1_ParamLimits

0x27ab,	// (0x0003f74c) calc_display_pane_t2_ParamLimits

0x27c0,	// (0x0003f761) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0004c0ee) calc_display_pane_t_ParamLimits

0x289a,	// (0x0003f83b) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0004c10b) cell_calc_pane_g

0x28a3,	// (0x0003f844) cell_calc_pane_t1

0xa941,	// (0x000478e2) grid_highlight_pane_cp02_ParamLimits

0xa957,	// (0x000478f8) toolbar_button_pane_cp01_ParamLimits

0xa957,	// (0x000478f8) toolbar_button_pane_cp01

0xb7e5,	// (0x00048786) temp_image_control_pane_ParamLimits

0xb7e5,	// (0x00048786) temp_image_control_pane

0xadd9,	// (0x00047d7a) main_mp3_pane

0xcf7f,	// (0x00049f20) temp_image_control_pane_g1_ParamLimits

0xcf7f,	// (0x00049f20) temp_image_control_pane_g1

0xcf8d,	// (0x00049f2e) temp_image_control_pane_g2_ParamLimits

0xcf8d,	// (0x00049f2e) temp_image_control_pane_g2

0xcf9f,	// (0x00049f40) temp_image_control_pane_g3_ParamLimits

0xcf9f,	// (0x00049f40) temp_image_control_pane_g3

0x5dc0,	// (0x00042d61) temp_image_control_pane_g4_ParamLimits

0x5dc0,	// (0x00042d61) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0004c6da) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0004c6da) temp_image_control_pane_g

0xcf7f,	// (0x00049f20) main_mp3_pane_g1

0x5dd1,	// (0x00042d72) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0004c6e3) main_mp3_pane_g

0xcfe2,	// (0x00049f83) main_mp3_pane_t1

0xaaaf,	// (0x00047a50) main_camera_pane_g8_ParamLimits

0xaaaf,	// (0x00047a50) main_camera_pane_g8

0x3099,	// (0x0004003a) main_video_pane_g7_ParamLimits

0x3099,	// (0x0004003a) main_video_pane_g7

0x58ab,	// (0x0004284c) main_camera2_pane_t7_ParamLimits

0x58ab,	// (0x0004284c) main_camera2_pane_t7

0xabf7,	// (0x00047b98) scroll_pane_cp025_ParamLimits

0xabf7,	// (0x00047b98) scroll_pane_cp025

0xac0b,	// (0x00047bac) scroll_pane_cp026_ParamLimits

0xac0b,	// (0x00047bac) scroll_pane_cp026

0xac1a,	// (0x00047bbb) wml_content_pane_ParamLimits

0xa183,	// (0x00047124) main_touch_calib_pane

0x5e75,	// (0x00042e16) main_touch_calib_pane_g1

0x5e81,	// (0x00042e22) main_touch_calib_pane_g2

0x5e8d,	// (0x00042e2e) main_touch_calib_pane_g3

0x5e99,	// (0x00042e3a) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0004c701) main_touch_calib_pane_g

0x5ea5,	// (0x00042e46) main_touch_calib_pane_t1

0x5ebe,	// (0x00042e5f) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x0004c70a) main_touch_calib_pane_t

0xb3a6,	// (0x00048347) mup_progress_pane_cp02

0xb3db,	// (0x0004837c) navi_pane_g1

0xb4b0,	// (0x00048451) navi_pane_mp_t3

0xadd9,	// (0x00047d7a) main_mp3_pane_ParamLimits

0x54fd,	// (0x0004249e) navi_pane_ParamLimits

0xcf7f,	// (0x00049f20) main_mp3_pane_g1_ParamLimits

0x5dd1,	// (0x00042d72) main_mp3_pane_g2_ParamLimits

0x5ddd,	// (0x00042d7e) main_mp3_pane_g3_ParamLimits

0x5ddd,	// (0x00042d7e) main_mp3_pane_g3

0x5de9,	// (0x00042d8a) main_mp3_pane_g4_ParamLimits

0x5de9,	// (0x00042d8a) main_mp3_pane_g4

0xcfaf,	// (0x00049f50) main_mp3_pane_g5_ParamLimits

0xcfaf,	// (0x00049f50) main_mp3_pane_g5

0xcfbd,	// (0x00049f5e) main_mp3_pane_g6_ParamLimits

0xcfbd,	// (0x00049f5e) main_mp3_pane_g6

0xcfca,	// (0x00049f6b) main_mp3_pane_g7_ParamLimits

0xcfca,	// (0x00049f6b) main_mp3_pane_g7

0xcfd6,	// (0x00049f77) main_mp3_pane_g8_ParamLimits

0xcfd6,	// (0x00049f77) main_mp3_pane_g8

0xf742,	// (0x0004c6e3) main_mp3_pane_g_ParamLimits

0x5df5,	// (0x00042d96) main_mp3_pane_t2

0x5e05,	// (0x00042da6) main_mp3_pane_t3

0xcff0,	// (0x00049f91) main_mp3_pane_t4

0xcffe,	// (0x00049f9f) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0004c6f4) main_mp3_pane_t

0xd00c,	// (0x00049fad) mup_progress_pane_cp01

0x0d3e,	// (0x0003dcdf) aid_zoom_text_secondary2

0xcde4,	// (0x00049d85) list_cale_ev2_pane

0xcdec,	// (0x00049d8d) scroll_pane_cp023_ParamLimits

0x5f19,	// (0x00042eba) field_cale_ev2_pane_ParamLimits

0x5f19,	// (0x00042eba) field_cale_ev2_pane

0x107b,	// (0x0003e01c) field_cale_ev2_pane_g1_ParamLimits

0x107b,	// (0x0003e01c) field_cale_ev2_pane_g1

0x1087,	// (0x0003e028) field_cale_ev2_pane_g2_ParamLimits

0x1087,	// (0x0003e028) field_cale_ev2_pane_g2

0x109f,	// (0x0003e040) field_cale_ev2_pane_g3_ParamLimits

0x109f,	// (0x0003e040) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0004c715) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0004c715) field_cale_ev2_pane_g

0x10c3,	// (0x0003e064) field_cale_ev2_pane_t1_ParamLimits

0x10c3,	// (0x0003e064) field_cale_ev2_pane_t1

0x10da,	// (0x0003e07b) field_cale_ev2_pane_t2_ParamLimits

0x10da,	// (0x0003e07b) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x0004c71e) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x0004c71e) field_cale_ev2_pane_t

0x4cd9,	// (0x00041c7a) main_postcard_pane_g5_ParamLimits

0x4cd9,	// (0x00041c7a) main_postcard_pane_g5

0x4ce7,	// (0x00041c88) main_postcard_pane_g6_ParamLimits

0x4ce7,	// (0x00041c88) main_postcard_pane_g6

0x2ee3,	// (0x0003fe84) camera2_autofocus_pane_cp_ParamLimits

0x2ee3,	// (0x0003fe84) camera2_autofocus_pane_cp

0xadd9,	// (0x00047d7a) main_mup3_pane

0x5f82,	// (0x00042f23) main_mup3_pane_g1_ParamLimits

0x5f82,	// (0x00042f23) main_mup3_pane_g1

0x5fa3,	// (0x00042f44) main_mup3_pane_g2_ParamLimits

0x5fa3,	// (0x00042f44) main_mup3_pane_g2

0x601d,	// (0x00042fbe) main_mup3_pane_g3_ParamLimits

0x601d,	// (0x00042fbe) main_mup3_pane_g3

0x6060,	// (0x00043001) main_mup3_pane_g4_ParamLimits

0x6060,	// (0x00043001) main_mup3_pane_g4

0x60a3,	// (0x00043044) main_mup3_pane_g5_ParamLimits

0x60a3,	// (0x00043044) main_mup3_pane_g5

0x60e6,	// (0x00043087) main_mup3_pane_g6_ParamLimits

0x60e6,	// (0x00043087) main_mup3_pane_g6

0xd014,	// (0x00049fb5) main_mup3_pane_g7_ParamLimits

0xd014,	// (0x00049fb5) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0004c72e) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0004c72e) main_mup3_pane_g

0x615c,	// (0x000430fd) main_mup3_pane_t1_ParamLimits

0x615c,	// (0x000430fd) main_mup3_pane_t1

0x61cb,	// (0x0004316c) main_mup3_pane_t2_ParamLimits

0x61cb,	// (0x0004316c) main_mup3_pane_t2

0x6294,	// (0x00043235) main_mup3_pane_t4_ParamLimits

0x6294,	// (0x00043235) main_mup3_pane_t4

0x62e2,	// (0x00043283) main_mup3_pane_t5_ParamLimits

0x62e2,	// (0x00043283) main_mup3_pane_t5

0x6392,	// (0x00043333) main_mup3_pane_t6_ParamLimits

0x6392,	// (0x00043333) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0004c73f) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0004c73f) main_mup3_pane_t

0x643e,	// (0x000433df) mup3_progress_pane_ParamLimits

0x643e,	// (0x000433df) mup3_progress_pane

0x64b2,	// (0x00043453) popup_mup3_control_window_ParamLimits

0x64b2,	// (0x00043453) popup_mup3_control_window

0xd022,	// (0x00049fc3) popup_mup3_text_window

0x64cb,	// (0x0004346c) mup3_progress_pane_t1

0x64ea,	// (0x0004348b) mup3_progress_pane_t2

0xd02a,	// (0x00049fcb) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0004c74c) mup3_progress_pane_t

0xd047,	// (0x00049fe8) mup_progress_pane_cp03

0xa183,	// (0x00047124) bg_tb_trans_pane_cp04

0x6509,	// (0x000434aa) mup3_volume_pane

0x6511,	// (0x000434b2) popup_mup3_control_window_g1

0x651a,	// (0x000434bb) mup3_volume_pane_g1

0x6523,	// (0x000434c4) mup3_volume_pane_g2

0x652c,	// (0x000434cd) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0004c753) mup3_volume_pane_g

0xa183,	// (0x00047124) bg_tb_trans_pane_cp03

0xd057,	// (0x00049ff8) popup_mup3_text_window_g1

0xd05f,	// (0x0004a000) popup_mup3_text_window_t1

0xa92a,	// (0x000478cb) list_calc_item_pane_g1_ParamLimits

0xcabd,	// (0x00049a5e) mup_volume_pane_cp_g1

0x5ed7,	// (0x00042e78) main_touch_calib_pane_t3

0x5eed,	// (0x00042e8e) main_touch_calib_pane_t4

0x5f03,	// (0x00042ea4) main_touch_calib_pane_t5

0x2161,	// (0x0003f102) aid_cell_size_toolbar2

0x2169,	// (0x0003f10a) aid_popup3_width_pane

0x0d36,	// (0x0003dcd7) aid_zoom_text_msg_primary

0x2eb8,	// (0x0003fe59) vorec_t7

0xa8ee,	// (0x0004788f) bg_calc_paper_pane_g1_ParamLimits

0xa8fa,	// (0x0004789b) bg_calc_paper_pane_g2_ParamLimits

0xa906,	// (0x000478a7) bg_calc_paper_pane_g3_ParamLimits

0xa912,	// (0x000478b3) bg_calc_paper_pane_g4_ParamLimits

0xa91e,	// (0x000478bf) bg_calc_paper_pane_g5_ParamLimits

0x27ff,	// (0x0003f7a0) bg_calc_paper_pane_g6_ParamLimits

0x2810,	// (0x0003f7b1) bg_calc_paper_pane_g7_ParamLimits

0x2821,	// (0x0003f7c2) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0004c0f5) bg_calc_paper_pane_g_ParamLimits

0x2832,	// (0x0003f7d3) calc_bg_paper_pane_g9_ParamLimits

0x2fca,	// (0x0003ff6b) image_qvga_pane_ParamLimits

0x2fca,	// (0x0003ff6b) image_qvga_pane

0xa811,	// (0x000477b2) bg_popup_sub_pane_cp04_ParamLimits

0xb71c,	// (0x000486bd) popup_mup_playback_window_g1_ParamLimits

0xb728,	// (0x000486c9) popup_mup_playback_window_t1_ParamLimits

0xb73d,	// (0x000486de) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0004c47f) popup_mup_playback_window_t_ParamLimits

0x59da,	// (0x0004297b) main_mup2_pane_g3_ParamLimits

0x59da,	// (0x0004297b) main_mup2_pane_g3

0x3282,	// (0x00040223) popup_toolbar_window_cp04

0xbb32,	// (0x00048ad3) popup_call2_audio_second_window_g3_ParamLimits

0xbb32,	// (0x00048ad3) popup_call2_audio_second_window_g3

0xbf3c,	// (0x00048edd) popup_call2_audio_first_window_g4_ParamLimits

0xbf3c,	// (0x00048edd) popup_call2_audio_first_window_g4

0xc5bb,	// (0x0004955c) popup_call2_audio_in_window_g4_ParamLimits

0xc5bb,	// (0x0004955c) popup_call2_audio_in_window_g4

0x4deb,	// (0x00041d8c) aid_area_sk_bg_cut_ParamLimits

0x4deb,	// (0x00041d8c) aid_area_sk_bg_cut

0xb752,	// (0x000486f3) aid_area_sk_bg_cut_2_ParamLimits

0xb752,	// (0x000486f3) aid_area_sk_bg_cut_2

0x5d66,	// (0x00042d07) aid_placing_details_win

0x5d6e,	// (0x00042d0f) aid_placing_details_win_2

0xcec1,	// (0x00049e62) camera2_autofocus_pane_g1_ParamLimits

0x23b8,	// (0x0003f359) popup_fixed_preview_cale_window_ParamLimits

0x23b8,	// (0x0003f359) popup_fixed_preview_cale_window

0xb52e,	// (0x000484cf) navi_slider_pane_g3

0xb537,	// (0x000484d8) navi_slider_pane_g4

0xb540,	// (0x000484e1) navi_slider_pane_g5

0xb52e,	// (0x000484cf) navi_slider_pane_g6

0x473a,	// (0x000416db) navi_slider_pane_g7

0xb653,	// (0x000485f4) mup_scale_pane_g3

0xb65c,	// (0x000485fd) mup_scale_pane_g4

0xb665,	// (0x00048606) mup_scale_pane_g5

0x4b69,	// (0x00041b0a) mup_scale_pane_g6

0x4b72,	// (0x00041b13) mup_scale_pane_g7

0xb52e,	// (0x000484cf) cams2_slider_pane_g3

0xcb3f,	// (0x00049ae0) cams2_slider_pane_g4

0x5cbe,	// (0x00042c5f) cams2_slider_pane_g5

0xb52e,	// (0x000484cf) cams2_slider_pane_g6

0x5cc6,	// (0x00042c67) cams2_slider_pane_g7

0xcd6a,	// (0x00049d0b) camera2_autofocus_pane_cp_g1

0xc956,	// (0x000498f7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc956,	// (0x000498f7) bg_popup_preview_window_pane_cp02

0xd06d,	// (0x0004a00e) list_fp_cale_pane_ParamLimits

0xd06d,	// (0x0004a00e) list_fp_cale_pane

0xd079,	// (0x0004a01a) popup_fixed_preview_cale_window_t1_ParamLimits

0xd079,	// (0x0004a01a) popup_fixed_preview_cale_window_t1

0x6535,	// (0x000434d6) popup_fixed_preview_cale_window_t2_ParamLimits

0x6535,	// (0x000434d6) popup_fixed_preview_cale_window_t2

0x654a,	// (0x000434eb) popup_fixed_preview_cale_window_t3_ParamLimits

0x654a,	// (0x000434eb) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0004c75a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0004c75a) popup_fixed_preview_cale_window_t

0x655f,	// (0x00043500) list_single_fp_cale_pane_ParamLimits

0x655f,	// (0x00043500) list_single_fp_cale_pane

0xd097,	// (0x0004a038) list_single_fp_cale_pane_g1_ParamLimits

0xd097,	// (0x0004a038) list_single_fp_cale_pane_g1

0xd0a3,	// (0x0004a044) list_single_fp_cale_pane_g2_ParamLimits

0xd0a3,	// (0x0004a044) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x0004c761) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x0004c761) list_single_fp_cale_pane_g

0xd0bc,	// (0x0004a05d) list_single_fp_cale_pane_t1_ParamLimits

0xd0bc,	// (0x0004a05d) list_single_fp_cale_pane_t1

0xd0ce,	// (0x0004a06f) list_single_fp_cale_pane_t2_ParamLimits

0xd0ce,	// (0x0004a06f) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x0004c768) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x0004c768) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa183,	// (0x00047124) main_dialer_pane

0x6572,	// (0x00043513) aid_cell_size_keypad

0x657c,	// (0x0004351d) dialer_ne_pane

0x6586,	// (0x00043527) grid_dialer_command_1_pane

0x658e,	// (0x0004352f) grid_dialer_command_2_pane

0x6596,	// (0x00043537) grid_dialer_keypad_pane

0x65aa,	// (0x0004354b) bg_popup_call_pane_cp06_ParamLimits

0x65aa,	// (0x0004354b) bg_popup_call_pane_cp06

0x65b6,	// (0x00043557) dialer_ne_clear_pane_ParamLimits

0x65b6,	// (0x00043557) dialer_ne_clear_pane

0xd101,	// (0x0004a0a2) dialer_ne_pane_g1

0xd109,	// (0x0004a0aa) dialer_ne_pane_t1_ParamLimits

0xd109,	// (0x0004a0aa) dialer_ne_pane_t1

0x65c2,	// (0x00043563) dialer_ne_pane_t2_ParamLimits

0x65c2,	// (0x00043563) dialer_ne_pane_t2

0x65df,	// (0x00043580) dialer_ne_pane_t3_ParamLimits

0x65df,	// (0x00043580) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0004c76d) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0004c76d) dialer_ne_pane_t

0x6603,	// (0x000435a4) dialer_ne_pane_t3_copy1_ParamLimits

0x6603,	// (0x000435a4) dialer_ne_pane_t3_copy1

0x6627,	// (0x000435c8) cell_dialer_keypad_pane_ParamLimits

0x6627,	// (0x000435c8) cell_dialer_keypad_pane

0x663e,	// (0x000435df) cell_dialer_command_1_pane_ParamLimits

0x663e,	// (0x000435df) cell_dialer_command_1_pane

0x6654,	// (0x000435f5) cell_dialer_command_2_pane_ParamLimits

0x6654,	// (0x000435f5) cell_dialer_command_2_pane

0xd11b,	// (0x0004a0bc) bg_button_pane_cp02_ParamLimits

0xd11b,	// (0x0004a0bc) bg_button_pane_cp02

0x6663,	// (0x00043604) cell_dialer_keypad_pane_g1_ParamLimits

0x6663,	// (0x00043604) cell_dialer_keypad_pane_g1

0xd11b,	// (0x0004a0bc) bg_button_pane_cp03_ParamLimits

0xd11b,	// (0x0004a0bc) bg_button_pane_cp03

0x6678,	// (0x00043619) cell_dialer_command_1_pane_g1_ParamLimits

0x6678,	// (0x00043619) cell_dialer_command_1_pane_g1

0xd127,	// (0x0004a0c8) bg_button_pane_cp04

0x668c,	// (0x0004362d) cell_dialer_command_2_pane_g1

0xaaa7,	// (0x00047a48) bg_button_pane_cp06

0xd12f,	// (0x0004a0d0) dialer_ne_clear_pane_g1

0xb3e7,	// (0x00048388) navi_pane_g2

0xb415,	// (0x000483b6) navi_pane_g3

0x0002,

0xf3e1,	// (0x0004c382) navi_pane_g

0xb4be,	// (0x0004845f) navi_pane_mv_g2

0xb4e5,	// (0x00048486) navi_pane_mv_g5

0x4705,	// (0x000416a6) navi_pane_mv_t1

0xa8e2,	// (0x00047883) main_clock2_pane

0xd880,	// (0x0004a821) main_clock2_list_pane_ParamLimits

0xd880,	// (0x0004a821) main_clock2_list_pane

0x66e8,	// (0x00043689) main_clock2_pane_t1_ParamLimits

0x66e8,	// (0x00043689) main_clock2_pane_t1

0x6716,	// (0x000436b7) main_clock2_pane_t2_ParamLimits

0x6716,	// (0x000436b7) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0004c779) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0004c779) main_clock2_pane_t

0x677b,	// (0x0004371c) popup_clock_analogue_window_cp03_ParamLimits

0x677b,	// (0x0004371c) popup_clock_analogue_window_cp03

0x6799,	// (0x0004373a) popup_clock_digital_window_cp02_ParamLimits

0x6799,	// (0x0004373a) popup_clock_digital_window_cp02

0x680e,	// (0x000437af) main_clock2_list_single_pane_ParamLimits

0x680e,	// (0x000437af) main_clock2_list_single_pane

0xaaa7,	// (0x00047a48) list_highlight_pane_cp05

0xd169,	// (0x0004a10a) main_clock2_list_single_pane_t1

0x3282,	// (0x00040223) popup_toolbar_window_cp04_ParamLimits

0x5d90,	// (0x00042d31) camera2_autofocus_pane_g2_ParamLimits

0x5d90,	// (0x00042d31) camera2_autofocus_pane_g2

0x5d9c,	// (0x00042d3d) camera2_autofocus_pane_g3_ParamLimits

0x5d9c,	// (0x00042d3d) camera2_autofocus_pane_g3

0x5da8,	// (0x00042d49) camera2_autofocus_pane_g4_ParamLimits

0x5da8,	// (0x00042d49) camera2_autofocus_pane_g4

0x5db4,	// (0x00042d55) camera2_autofocus_pane_g5_ParamLimits

0x5db4,	// (0x00042d55) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0004c6bd) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0004c6bd) camera2_autofocus_pane_g

0x5f43,	// (0x00042ee4) camera2_autofocus_pane_cp_g2

0x5f4b,	// (0x00042eec) camera2_autofocus_pane_cp_g3

0x5f53,	// (0x00042ef4) camera2_autofocus_pane_cp_g4

0x5f5b,	// (0x00042efc) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0004c723) camera2_autofocus_pane_cp_g

0x65a2,	// (0x00043543) popup_dialer_spcha_window

0xa183,	// (0x00047124) bg_popup_sub_pane_cp07

0xd177,	// (0x0004a118) list_spcha_pane

0xd17f,	// (0x0004a120) list_single_spcha_pane_ParamLimits

0xd17f,	// (0x0004a120) list_single_spcha_pane

0xa183,	// (0x00047124) list_highlight_pane_cp06

0xd190,	// (0x0004a131) list_single_spcha_pane_t1

0xc365,	// (0x00049306) popup_call2_audio_out_window_g4_ParamLimits

0xc365,	// (0x00049306) popup_call2_audio_out_window_g4

0xa183,	// (0x00047124) main_imed2_pane

0x5426,	// (0x000423c7) popup_imed_adjust2_window

0x5439,	// (0x000423da) popup_imed_trans_window_ParamLimits

0x5439,	// (0x000423da) popup_imed_trans_window

0xcba8,	// (0x00049b49) popup_blid_sat_info2_window_t1

0xcbb6,	// (0x00049b57) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x0004c652) popup_blid_sat_info2_window_t

0x68c3,	// (0x00043864) aid_size_cell_colour_35

0x68dd,	// (0x0004387e) aid_size_cell_colour_112

0x68f4,	// (0x00043895) aid_size_cell_effect

0xadd9,	// (0x00047d7a) bg_tb_trans_pane_cp02

0xb440,	// (0x000483e1) heading_imed_pane

0x690e,	// (0x000438af) listscroll_imed_pane

0xd19e,	// (0x0004a13f) heading_imed_pane_g1

0xd1a6,	// (0x0004a147) heading_imed_pane_t1

0xd1b4,	// (0x0004a155) grid_imed_colour_35_pane_ParamLimits

0xd1b4,	// (0x0004a155) grid_imed_colour_35_pane

0x691a,	// (0x000438bb) grid_imed_effect_pane

0xd1cc,	// (0x0004a16d) list_imed_aspect_pane

0x692a,	// (0x000438cb) scroll_pane_cp027_ParamLimits

0x692a,	// (0x000438cb) scroll_pane_cp027

0x6936,	// (0x000438d7) cell_imed_effect_pane_ParamLimits

0x6936,	// (0x000438d7) cell_imed_effect_pane

0xd1d4,	// (0x0004a175) cell_imed_colour_pane_ParamLimits

0xd1d4,	// (0x0004a175) cell_imed_colour_pane

0xd216,	// (0x0004a1b7) cell_imed_colour_pane_g1_ParamLimits

0xd216,	// (0x0004a1b7) cell_imed_colour_pane_g1

0xd227,	// (0x0004a1c8) hgihlgiht_grid_pane_cp016_ParamLimits

0xd227,	// (0x0004a1c8) hgihlgiht_grid_pane_cp016

0x694e,	// (0x000438ef) cell_imed_effect_pane_g1

0x6956,	// (0x000438f7) grid_highlight_pane_cp017

0xd238,	// (0x0004a1d9) list_imed_single_pane_ParamLimits

0xd238,	// (0x0004a1d9) list_imed_single_pane

0xa183,	// (0x00047124) list_highlight_pane_cp07

0xd24d,	// (0x0004a1ee) list_imed_aspect_pane_comp1_t1

0xc962,	// (0x00049903) bg_tb_trans_pane_cp05

0xd26f,	// (0x0004a210) popup_imed_adjust2_window_g1

0xd296,	// (0x0004a237) popup_imed_adjust2_window_t1

0xd2ae,	// (0x0004a24f) slider_imed_adjust_pane

0xd2c2,	// (0x0004a263) slider_imed_adjust_pane_g1

0xd2e7,	// (0x0004a288) slider_imed_adjust_pane_g2

0xd2f7,	// (0x0004a298) slider_imed_adjust_pane_g3

0xd308,	// (0x0004a2a9) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x0004c796) slider_imed_adjust_pane_g

0x695f,	// (0x00043900) aid_size_cell_clipart2

0x696b,	// (0x0004390c) grid_imed_clipart_pane

0xd319,	// (0x0004a2ba) scroll_pane_cp031

0x6975,	// (0x00043916) cell_imed_clipart_pane_ParamLimits

0x6975,	// (0x00043916) cell_imed_clipart_pane

0x6998,	// (0x00043939) cell_imed_clipart_pane_g1

0xa183,	// (0x00047124) grid_highlight_pane_cp014

0x66ca,	// (0x0004366b) main_clock2_pane_g1_ParamLimits

0x66ca,	// (0x0004366b) main_clock2_pane_g1

0x67b5,	// (0x00043756) aid_call2_pane_cp10

0x67c7,	// (0x00043768) aid_call_pane_cp10

0xb346,	// (0x000482e7) popup_clock_analogue_window_cp10_g1

0xb346,	// (0x000482e7) popup_clock_analogue_window_cp10_g2

0x67d9,	// (0x0004377a) popup_clock_analogue_window_cp10_g3

0x67d9,	// (0x0004377a) popup_clock_analogue_window_cp10_g4

0xb346,	// (0x000482e7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x0004c784) popup_clock_analogue_window_cp10_g

0x67ef,	// (0x00043790) popup_clock_analogue_window_cp10_t1

0x6820,	// (0x000437c1) clock_digital_number_pane_cp10_ParamLimits

0x6820,	// (0x000437c1) clock_digital_number_pane_cp10

0x683a,	// (0x000437db) clock_digital_number_pane_cp11_ParamLimits

0x683a,	// (0x000437db) clock_digital_number_pane_cp11

0x6854,	// (0x000437f5) clock_digital_number_pane_cp12_ParamLimits

0x6854,	// (0x000437f5) clock_digital_number_pane_cp12

0x686e,	// (0x0004380f) clock_digital_number_pane_cp13_ParamLimits

0x686e,	// (0x0004380f) clock_digital_number_pane_cp13

0x6888,	// (0x00043829) clock_digital_separator_pane_cp10_ParamLimits

0x6888,	// (0x00043829) clock_digital_separator_pane_cp10

0x68a2,	// (0x00043843) popup_clock_digital_window_cp02_t1_ParamLimits

0x68a2,	// (0x00043843) popup_clock_digital_window_cp02_t1

0xa809,	// (0x000477aa) clock_digital_number_pane_cp10_g1

0xa809,	// (0x000477aa) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0004c79f) clock_digital_number_pane_cp10_g

0xa809,	// (0x000477aa) clock_digital_separator_pane_cp10_g1

0xa809,	// (0x000477aa) clock_digital_separator_pane_g2_cp10

0xb4ed,	// (0x0004848e) navi_pane_vded_g4

0xb4f6,	// (0x00048497) navi_pane_vded_g5

0xb4ff,	// (0x000484a0) navi_pane_vded_t1

0xa183,	// (0x00047124) main_vded_pane

0x69a1,	// (0x00043942) main_vded_pane_g1

0x69ad,	// (0x0004394e) main_vded_pane_g2

0x69b7,	// (0x00043958) main_vded_pane_g3

0x0002,

0xf803,	// (0x0004c7a4) main_vded_pane_g

0x69c1,	// (0x00043962) main_vded_pane_t1

0x69cf,	// (0x00043970) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0004c7ab) main_vded_pane_t

0x69dd,	// (0x0004397e) vded_slider_pane

0x69e7,	// (0x00043988) vded_video_pane

0xd321,	// (0x0004a2c2) vded_video_pane_g1

0x69f1,	// (0x00043992) vded_video_pane_g2

0xcd6a,	// (0x00049d0b) vded_video_pane_g3

0x0002,

0xf80f,	// (0x0004c7b0) vded_video_pane_g

0xd32b,	// (0x0004a2cc) vded_slider_pane_g1

0xcabd,	// (0x00049a5e) vded_slider_pane_g2

0xd334,	// (0x0004a2d5) vded_slider_pane_g3

0xd33d,	// (0x0004a2de) vded_slider_pane_g4

0xd346,	// (0x0004a2e7) vded_slider_pane_g5

0x0004,

0xf816,	// (0x0004c7b7) vded_slider_pane_g

0x64a4,	// (0x00043445) mup3_rocker_pane_ParamLimits

0x64a4,	// (0x00043445) mup3_rocker_pane

0x69fa,	// (0x0004399b) mup3_control_keys_pane_g1

0x6a02,	// (0x000439a3) mup3_control_keys_pane_g2

0x6a0a,	// (0x000439ab) mup3_control_keys_pane_g3

0x6a12,	// (0x000439b3) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0004c7c2) mup3_control_keys_pane_g

0x23e0,	// (0x0003f381) popup_toolbar2_fixed_window_cp01_ParamLimits

0x23e0,	// (0x0003f381) popup_toolbar2_fixed_window_cp01

0x64be,	// (0x0004345f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x64be,	// (0x0004345f) popup_toolbar2_fixed_window_cp02

0xbca4,	// (0x00048c45) popup_call2_audio_second_window_t4_ParamLimits

0xbca4,	// (0x00048c45) popup_call2_audio_second_window_t4

0xc1d2,	// (0x00049173) popup_call2_audio_first_window_t6_ParamLimits

0xc1d2,	// (0x00049173) popup_call2_audio_first_window_t6

0xc468,	// (0x00049409) popup_call2_audio_out_window_t6_ParamLimits

0xc468,	// (0x00049409) popup_call2_audio_out_window_t6

0xa183,	// (0x00047124) main_vitu_pane

0x6a22,	// (0x000439c3) aid_size_cell_itu_ParamLimits

0x6a22,	// (0x000439c3) aid_size_cell_itu

0xd880,	// (0x0004a821) bg_popup_window_pane_cp08_ParamLimits

0xd880,	// (0x0004a821) bg_popup_window_pane_cp08

0x6a30,	// (0x000439d1) field_vitu_entry_pane_ParamLimits

0x6a30,	// (0x000439d1) field_vitu_entry_pane

0x6a3f,	// (0x000439e0) grid_vitu_function_pane_ParamLimits

0x6a3f,	// (0x000439e0) grid_vitu_function_pane

0x6a4f,	// (0x000439f0) grid_vitu_itu_pane_ParamLimits

0x6a4f,	// (0x000439f0) grid_vitu_itu_pane

0x6a5f,	// (0x00043a00) cell_vitu_itu_pane_ParamLimits

0x6a5f,	// (0x00043a00) cell_vitu_itu_pane

0x6a74,	// (0x00043a15) cell_vitu_function_pane_ParamLimits

0x6a74,	// (0x00043a15) cell_vitu_function_pane

0xadd9,	// (0x00047d7a) bg_popup_sub_pane_cp08_ParamLimits

0xadd9,	// (0x00047d7a) bg_popup_sub_pane_cp08

0x6a86,	// (0x00043a27) field_vitu_entry_pane_t1_ParamLimits

0x6a86,	// (0x00043a27) field_vitu_entry_pane_t1

0xd367,	// (0x0004a308) field_vitu_entry_pane_t2_ParamLimits

0xd367,	// (0x0004a308) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0004c7d0) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0004c7d0) field_vitu_entry_pane_t

0xd384,	// (0x0004a325) bg_button_pane_cp05_ParamLimits

0xd384,	// (0x0004a325) bg_button_pane_cp05

0x6aa3,	// (0x00043a44) cell_vitu_itu_pane_g1

0x6abb,	// (0x00043a5c) cell_vitu_itu_pane_t1_ParamLimits

0x6abb,	// (0x00043a5c) cell_vitu_itu_pane_t1

0x6acd,	// (0x00043a6e) cell_vitu_itu_pane_t2_ParamLimits

0x6acd,	// (0x00043a6e) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0004c7d5) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0004c7d5) cell_vitu_itu_pane_t

0xd392,	// (0x0004a333) bg_button_pane_cp07

0x6b02,	// (0x00043aa3) cell_vitu_function_pane_g1

0x26a3,	// (0x0003f644) main_calc_pane_g1

0x219d,	// (0x0003f13e) aid_visual_content_pane

0xa183,	// (0x00047124) main_vradio_pane

0x6b0b,	// (0x00043aac) main_vradio_pane_g1_ParamLimits

0x6b0b,	// (0x00043aac) main_vradio_pane_g1

0xd39c,	// (0x0004a33d) main_vradio_pane_g2_ParamLimits

0xd39c,	// (0x0004a33d) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0004c7dc) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0004c7dc) main_vradio_pane_g

0x6b1b,	// (0x00043abc) main_vradio_pane_t1_ParamLimits

0x6b1b,	// (0x00043abc) main_vradio_pane_t1

0x6b2d,	// (0x00043ace) main_vradio_pane_t2_ParamLimits

0x6b2d,	// (0x00043ace) main_vradio_pane_t2

0xd3a9,	// (0x0004a34a) main_vradio_pane_t3_ParamLimits

0xd3a9,	// (0x0004a34a) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0004c7e1) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0004c7e1) main_vradio_pane_t

0x6b3f,	// (0x00043ae0) vradio_rocker_control_pane_ParamLimits

0x6b3f,	// (0x00043ae0) vradio_rocker_control_pane

0x6b4b,	// (0x00043aec) vradio_station_info_pane_ParamLimits

0x6b4b,	// (0x00043aec) vradio_station_info_pane

0xd3bd,	// (0x0004a35e) vradio_frequency_info_pane_ParamLimits

0xd3bd,	// (0x0004a35e) vradio_frequency_info_pane

0xcd6a,	// (0x00049d0b) vradio_station_info_pane_g1

0xd3cc,	// (0x0004a36d) vradio_station_info_pane_t1_ParamLimits

0xd3cc,	// (0x0004a36d) vradio_station_info_pane_t1

0xd3ee,	// (0x0004a38f) vradio_station_info_pane_t2_ParamLimits

0xd3ee,	// (0x0004a38f) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x0004c7e8) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x0004c7e8) vradio_station_info_pane_t

0xd400,	// (0x0004a3a1) vradio_tuning_pane

0xd408,	// (0x0004a3a9) vradio_rocker_control_pane_g1

0xd410,	// (0x0004a3b1) vradio_rocker_control_pane_g2

0xd418,	// (0x0004a3b9) vradio_rocker_control_pane_g3

0xd420,	// (0x0004a3c1) vradio_rocker_control_pane_g4

0xd428,	// (0x0004a3c9) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0004c7ed) vradio_rocker_control_pane_g

0x6b5a,	// (0x00043afb) vradio_frequency_info_pane_g1

0xd430,	// (0x0004a3d1) vradio_frequency_info_pane_t1_ParamLimits

0xd430,	// (0x0004a3d1) vradio_frequency_info_pane_t1

0x6b64,	// (0x00043b05) vradio_tuning_pane_g1

0x6b6d,	// (0x00043b0e) vradio_tuning_pane_t1

0x21e6,	// (0x0003f187) area_side_right_pane_ParamLimits

0x21e6,	// (0x0003f187) area_side_right_pane

0xc91d,	// (0x000498be) status_small_pane_g1

0xc925,	// (0x000498c6) status_small_pane_g2

0xc92e,	// (0x000498cf) status_small_pane_g3

0xc937,	// (0x000498d8) status_small_pane_g4

0x0003,

0xf607,	// (0x0004c5a8) status_small_pane_g

0xc940,	// (0x000498e1) status_small_pane_t1

0xa183,	// (0x00047124) main_video3_pane

0xd444,	// (0x0004a3e5) cams_zoom_vslider_pane

0xd44c,	// (0x0004a3ed) image3_wide_pane_ParamLimits

0xd44c,	// (0x0004a3ed) image3_wide_pane

0xd466,	// (0x0004a407) image3_wide_small_pane

0xd472,	// (0x0004a413) main_video3_pane_g1_ParamLimits

0xd472,	// (0x0004a413) main_video3_pane_g1

0xd48e,	// (0x0004a42f) main_video3_pane_g2_ParamLimits

0xd48e,	// (0x0004a42f) main_video3_pane_g2

0x0001,

0xf857,	// (0x0004c7f8) main_video3_pane_g_ParamLimits

0xf857,	// (0x0004c7f8) main_video3_pane_g

0xd4aa,	// (0x0004a44b) main_video3_pane_t1_ParamLimits

0xd4aa,	// (0x0004a44b) main_video3_pane_t1

0xd4d5,	// (0x0004a476) main_video3_pane_t2_ParamLimits

0xd4d5,	// (0x0004a476) main_video3_pane_t2

0xd500,	// (0x0004a4a1) main_video3_pane_t3_ParamLimits

0xd500,	// (0x0004a4a1) main_video3_pane_t3

0x0002,

0xf85c,	// (0x0004c7fd) main_video3_pane_t_ParamLimits

0xf85c,	// (0x0004c7fd) main_video3_pane_t

0xd52d,	// (0x0004a4ce) cams_zoom_vslider_pane_g1

0xd536,	// (0x0004a4d7) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0004c804) cams_zoom_vslider_pane_g

0xd53e,	// (0x0004a4df) small_slider_vertical_pane

0xcd6a,	// (0x00049d0b) small_slider_vertical_pane_g1

0xcd6a,	// (0x00049d0b) small_slider_vertical_pane_g2

0xd546,	// (0x0004a4e7) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x0004c809) small_slider_vertical_pane_g

0xa183,	// (0x00047124) main_hwr_training_pane

0xd54f,	// (0x0004a4f0) hwr_training_instruct_pane_ParamLimits

0xd54f,	// (0x0004a4f0) hwr_training_instruct_pane

0x6b7c,	// (0x00043b1d) hwr_training_navi_pane_ParamLimits

0x6b7c,	// (0x00043b1d) hwr_training_navi_pane

0x6b96,	// (0x00043b37) hwr_training_write_pane_ParamLimits

0x6b96,	// (0x00043b37) hwr_training_write_pane

0xa183,	// (0x00047124) bg_frame_shadow_pane

0xd586,	// (0x0004a527) hwr_training_write_pane_g1

0xd58e,	// (0x0004a52f) hwr_training_write_pane_g2

0xd596,	// (0x0004a537) hwr_training_write_pane_g3

0xd59e,	// (0x0004a53f) hwr_training_write_pane_g4

0xd5a6,	// (0x0004a547) hwr_training_write_pane_g5

0xd5ae,	// (0x0004a54f) hwr_training_write_pane_g6

0xd5b6,	// (0x0004a557) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0004c810) hwr_training_write_pane_g

0x6bce,	// (0x00043b6f) hwr_training_navi_pane_g1_ParamLimits

0x6bce,	// (0x00043b6f) hwr_training_navi_pane_g1

0x6be0,	// (0x00043b81) hwr_training_navi_pane_g2_ParamLimits

0x6be0,	// (0x00043b81) hwr_training_navi_pane_g2

0x6bf2,	// (0x00043b93) hwr_training_navi_pane_g3_ParamLimits

0x6bf2,	// (0x00043b93) hwr_training_navi_pane_g3

0x6c02,	// (0x00043ba3) hwr_training_navi_pane_g4_ParamLimits

0x6c02,	// (0x00043ba3) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x0004c81f) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x0004c81f) hwr_training_navi_pane_g

0x6c1c,	// (0x00043bbd) hwr_training_navi_pane_t1

0x6c2a,	// (0x00043bcb) list_single_hwr_training_instruct_pane_ParamLimits

0x6c2a,	// (0x00043bcb) list_single_hwr_training_instruct_pane

0xd5be,	// (0x0004a55f) list_single_hwr_training_instruct_pane_t1

0xccaa,	// (0x00049c4b) bg_frame_shadow_pane_g1

0xd5cd,	// (0x0004a56e) bg_frame_shadow_pane_g2

0xd5d5,	// (0x0004a576) bg_frame_shadow_pane_g3

0xd5dd,	// (0x0004a57e) bg_frame_shadow_pane_g4

0xd5e5,	// (0x0004a586) bg_frame_shadow_pane_g5

0xd5ed,	// (0x0004a58e) bg_frame_shadow_pane_g6

0xd5f5,	// (0x0004a596) bg_frame_shadow_pane_g7

0xa99b,	// (0x0004793c) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0004c82a) bg_frame_shadow_pane_g

0xa183,	// (0x00047124) main_video_tele_dialer_pane

0x6c53,	// (0x00043bf4) aid_size_cell_video_keypad_ParamLimits

0x6c53,	// (0x00043bf4) aid_size_cell_video_keypad

0x6c63,	// (0x00043c04) grid_video_dialer_keypad_pane_ParamLimits

0x6c63,	// (0x00043c04) grid_video_dialer_keypad_pane

0x6c97,	// (0x00043c38) video_down_pane_cp_ParamLimits

0x6c97,	// (0x00043c38) video_down_pane_cp

0x6cc1,	// (0x00043c62) cell_video_dialer_keypad_pane_ParamLimits

0x6cc1,	// (0x00043c62) cell_video_dialer_keypad_pane

0xd5fd,	// (0x0004a59e) bg_button_pane_cp08_ParamLimits

0xd5fd,	// (0x0004a59e) bg_button_pane_cp08

0x6cd6,	// (0x00043c77) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6cd6,	// (0x00043c77) cell_video_dialer_keypad_pane_g1

0x6498,	// (0x00043439) mup3_rocker2_pane_ParamLimits

0x6498,	// (0x00043439) mup3_rocker2_pane

0xcd6a,	// (0x00049d0b) mup3_rocker2_pane_g1

0x539a,	// (0x0004233b) main_dialer2_pane

0xa183,	// (0x00047124) main_mp4_pane

0x6d2e,	// (0x00043ccf) main_mp4_pane_g1_ParamLimits

0x6d2e,	// (0x00043ccf) main_mp4_pane_g1

0x6d3c,	// (0x00043cdd) main_mp4_pane_g2_ParamLimits

0x6d3c,	// (0x00043cdd) main_mp4_pane_g2

0x6d4a,	// (0x00043ceb) main_mp4_pane_g3_ParamLimits

0x6d4a,	// (0x00043ceb) main_mp4_pane_g3

0x6d8f,	// (0x00043d30) main_mp4_pane_g4_ParamLimits

0x6d8f,	// (0x00043d30) main_mp4_pane_g4

0x6dbd,	// (0x00043d5e) main_mp4_pane_g5_ParamLimits

0x6dbd,	// (0x00043d5e) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0004c84a) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0004c84a) main_mp4_pane_g

0x6e31,	// (0x00043dd2) main_mp4_pane_t1_ParamLimits

0x6e31,	// (0x00043dd2) main_mp4_pane_t1

0x6e8d,	// (0x00043e2e) main_mp4_pane_t2_ParamLimits

0x6e8d,	// (0x00043e2e) main_mp4_pane_t2

0xd609,	// (0x0004a5aa) main_mp4_pane_t3_ParamLimits

0xd609,	// (0x0004a5aa) main_mp4_pane_t3

0x6edf,	// (0x00043e80) main_mp4_pane_t4_ParamLimits

0x6edf,	// (0x00043e80) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0004c85b) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0004c85b) main_mp4_pane_t

0x6f23,	// (0x00043ec4) mp4_progress_pane_ParamLimits

0x6f23,	// (0x00043ec4) mp4_progress_pane

0x6f6d,	// (0x00043f0e) mp4_rocker_pane_ParamLimits

0x6f6d,	// (0x00043f0e) mp4_rocker_pane

0xd637,	// (0x0004a5d8) mp4_progress_pane_t1

0xd650,	// (0x0004a5f1) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0004c864) mp4_progress_pane_t

0xd669,	// (0x0004a60a) mup_progress_pane_cp04

0xcd6a,	// (0x00049d0b) mp4_rocker_pane_g1

0x6f8d,	// (0x00043f2e) aid_cell_size_keypad2_ParamLimits

0x6f8d,	// (0x00043f2e) aid_cell_size_keypad2

0x6f9d,	// (0x00043f3e) dialer2_ne_pane_ParamLimits

0x6f9d,	// (0x00043f3e) dialer2_ne_pane

0x6fab,	// (0x00043f4c) grid_dialer2_keypad_pane_ParamLimits

0x6fab,	// (0x00043f4c) grid_dialer2_keypad_pane

0xd88e,	// (0x0004a82f) bg_popup_call_pane_cp07_ParamLimits

0xd88e,	// (0x0004a82f) bg_popup_call_pane_cp07

0x6fbb,	// (0x00043f5c) dialer2_ne_pane_t1_ParamLimits

0x6fbb,	// (0x00043f5c) dialer2_ne_pane_t1

0x6fe0,	// (0x00043f81) cell_dialer2_keypad_pane_ParamLimits

0x6fe0,	// (0x00043f81) cell_dialer2_keypad_pane

0xd68e,	// (0x0004a62f) bg_button_pane_pane_cp04_ParamLimits

0xd68e,	// (0x0004a62f) bg_button_pane_pane_cp04

0x6ff5,	// (0x00043f96) cell_dialer2_keypad_pane_g1_ParamLimits

0x6ff5,	// (0x00043f96) cell_dialer2_keypad_pane_g1

0x3144,	// (0x000400e5) aid_placing_vt_set_content_ParamLimits

0x3144,	// (0x000400e5) aid_placing_vt_set_content

0x3170,	// (0x00040111) aid_placing_vt_set_title_ParamLimits

0x3170,	// (0x00040111) aid_placing_vt_set_title

0xa183,	// (0x00047124) main_image3_pane

0x708f,	// (0x00044030) area_side_right_pane_cp01_ParamLimits

0x708f,	// (0x00044030) area_side_right_pane_cp01

0xa7a7,	// (0x00047748) main_image3_pane_g1_ParamLimits

0xa7a7,	// (0x00047748) main_image3_pane_g1

0x70bc,	// (0x0004405d) main_image3_pane_g2_ParamLimits

0x70bc,	// (0x0004405d) main_image3_pane_g2

0x70d5,	// (0x00044076) main_image3_pane_g3_ParamLimits

0x70d5,	// (0x00044076) main_image3_pane_g3

0x70ee,	// (0x0004408f) main_image3_pane_g4_ParamLimits

0x70ee,	// (0x0004408f) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0004c873) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0004c873) main_image3_pane_g

0x7107,	// (0x000440a8) main_image3_pane_t1_ParamLimits

0x7107,	// (0x000440a8) main_image3_pane_t1

0x712c,	// (0x000440cd) main_image3_pane_t2_ParamLimits

0x712c,	// (0x000440cd) main_image3_pane_t2

0x714b,	// (0x000440ec) main_image3_pane_t3_ParamLimits

0x714b,	// (0x000440ec) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0004c87c) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0004c87c) main_image3_pane_t

0xd880,	// (0x0004a821) grid_sctrl_middle_pane_cp01_ParamLimits

0xd880,	// (0x0004a821) grid_sctrl_middle_pane_cp01

0x71ac,	// (0x0004414d) cell_sctrl_middle_pane_cp01_ParamLimits

0x71ac,	// (0x0004414d) cell_sctrl_middle_pane_cp01

0x71bd,	// (0x0004415e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x71bd,	// (0x0004415e) cell_sctrl_middle_pane_cp01_g1

0xa183,	// (0x00047124) main_call4_pane

0x71ca,	// (0x0004416b) aid_size_button_call4_ParamLimits

0x71ca,	// (0x0004416b) aid_size_button_call4

0x7200,	// (0x000441a1) call4_windows_pane_ParamLimits

0x7200,	// (0x000441a1) call4_windows_pane

0x7215,	// (0x000441b6) grid_call4_button_pane_ParamLimits

0x7215,	// (0x000441b6) grid_call4_button_pane

0x7243,	// (0x000441e4) call4_windows_conf_pane

0x725a,	// (0x000441fb) popup_call4_audio_first_window_ParamLimits

0x725a,	// (0x000441fb) popup_call4_audio_first_window

0x72aa,	// (0x0004424b) popup_call4_audio_second_window_ParamLimits

0x72aa,	// (0x0004424b) popup_call4_audio_second_window

0x72c3,	// (0x00044264) popup_call4_audio_wait_window_ParamLimits

0x72c3,	// (0x00044264) popup_call4_audio_wait_window

0x72d1,	// (0x00044272) cell_call4_button_pane_ParamLimits

0x72d1,	// (0x00044272) cell_call4_button_pane

0x72f4,	// (0x00044295) bg_button_pane_cp09_ParamLimits

0x72f4,	// (0x00044295) bg_button_pane_cp09

0x7300,	// (0x000442a1) cell_call4_button_pane_g1_ParamLimits

0x7300,	// (0x000442a1) cell_call4_button_pane_g1

0x730d,	// (0x000442ae) cell_call4_button_pane_t1_ParamLimits

0x730d,	// (0x000442ae) cell_call4_button_pane_t1

0xd6a2,	// (0x0004a643) popup_call4_audio_conf_window_ParamLimits

0xd6a2,	// (0x0004a643) popup_call4_audio_conf_window

0x64cb,	// (0x0004346c) mup3_progress_pane_t1_ParamLimits

0x64ea,	// (0x0004348b) mup3_progress_pane_t2_ParamLimits

0xd02a,	// (0x00049fcb) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0004c74c) mup3_progress_pane_t_ParamLimits

0xd047,	// (0x00049fe8) mup_progress_pane_cp03_ParamLimits

0x6a1a,	// (0x000439bb) mup3_control_keys_pane_g4_copy1

0x6f51,	// (0x00043ef2) mp4_rocker2_pane_ParamLimits

0x6f51,	// (0x00043ef2) mp4_rocker2_pane

0xd6b6,	// (0x0004a657) mp4_rocker2_pane_g1

0xd6be,	// (0x0004a65f) mp4_rocker2_pane_g2

0x7351,	// (0x000442f2) mp4_rocker2_pane_g3

0x7359,	// (0x000442fa) mp4_rocker2_pane_g4

0x7361,	// (0x00044302) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0004c885) mp4_rocker2_pane_g

0xa183,	// (0x00047124) main_camera4_pane

0xa183,	// (0x00047124) main_video4_pane

0x6c73,	// (0x00043c14) main_video_tele_dialer_pane_t1_ParamLimits

0x6c73,	// (0x00043c14) main_video_tele_dialer_pane_t1

0x6c85,	// (0x00043c26) main_video_tele_dialer_pane_t2_ParamLimits

0x6c85,	// (0x00043c26) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0004c83b) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0004c83b) main_video_tele_dialer_pane_t

0x7381,	// (0x00044322) cam4_autofocus_pane_ParamLimits

0x7381,	// (0x00044322) cam4_autofocus_pane

0x739b,	// (0x0004433c) cam4_image_uncrop_pane_ParamLimits

0x739b,	// (0x0004433c) cam4_image_uncrop_pane

0x73b2,	// (0x00044353) cam4_indicators_pane_ParamLimits

0x73b2,	// (0x00044353) cam4_indicators_pane

0x73ce,	// (0x0004436f) main_camera4_pane_g1_ParamLimits

0x73ce,	// (0x0004436f) main_camera4_pane_g1

0x73da,	// (0x0004437b) main_camera4_pane_g2_ParamLimits

0x73da,	// (0x0004437b) main_camera4_pane_g2

0x73da,	// (0x0004437b) main_camera4_pane_g3_ParamLimits

0x73da,	// (0x0004437b) main_camera4_pane_g3

0x73e6,	// (0x00044387) main_camera4_pane_g4_ParamLimits

0x73e6,	// (0x00044387) main_camera4_pane_g4

0x73f2,	// (0x00044393) main_camera4_pane_g5_ParamLimits

0x73f2,	// (0x00044393) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0004c890) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0004c890) main_camera4_pane_g

0x740c,	// (0x000443ad) main_camera4_pane_t1_ParamLimits

0x740c,	// (0x000443ad) main_camera4_pane_t1

0xcfaf,	// (0x00049f50) bg_tb_trans_pane_cp06

0x745c,	// (0x000443fd) cam4_indicators_pane_g1

0x746d,	// (0x0004440e) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0004c8ab) cam4_indicators_pane_g

0x7485,	// (0x00044426) cam4_indicators_pane_t1

0x74af,	// (0x00044450) main_video4_pane_g1_ParamLimits

0x74af,	// (0x00044450) main_video4_pane_g1

0x74bb,	// (0x0004445c) main_video4_pane_g2_ParamLimits

0x74bb,	// (0x0004445c) main_video4_pane_g2

0x74c7,	// (0x00044468) main_video4_pane_g3_ParamLimits

0x74c7,	// (0x00044468) main_video4_pane_g3

0x74d3,	// (0x00044474) main_video4_pane_g4_ParamLimits

0x74d3,	// (0x00044474) main_video4_pane_g4

0x0004,

0xf911,	// (0x0004c8b2) main_video4_pane_g_ParamLimits

0xf911,	// (0x0004c8b2) main_video4_pane_g

0x74f3,	// (0x00044494) vid4_indicators_pane_ParamLimits

0x74f3,	// (0x00044494) vid4_indicators_pane

0x7512,	// (0x000444b3) video4_image_uncrop_cif_pane_ParamLimits

0x7512,	// (0x000444b3) video4_image_uncrop_cif_pane

0x7521,	// (0x000444c2) video4_image_uncrop_nhd_pane_ParamLimits

0x7521,	// (0x000444c2) video4_image_uncrop_nhd_pane

0x739b,	// (0x0004433c) video4_image_uncrop_vga_pane_ParamLimits

0x739b,	// (0x0004433c) video4_image_uncrop_vga_pane

0xadd9,	// (0x00047d7a) bg_tb_trans_pane_cp07

0x7536,	// (0x000444d7) vid4_indicators_pane_g1

0x754a,	// (0x000444eb) vid4_indicators_pane_g2

0x755e,	// (0x000444ff) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0004c8bd) vid4_indicators_pane_g

0x758b,	// (0x0004452c) vid4_indicators_pane_t1

0x75a2,	// (0x00044543) cam4_autofocus_pane_g1

0x75aa,	// (0x0004454b) cam4_autofocus_pane_g2

0x75b2,	// (0x00044553) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0004c8c8) cam4_autofocus_pane_g

0x75ba,	// (0x0004455b) cam4_autofocus_pane_g3_copy1

0x6ca5,	// (0x00043c46) video_down_pane_cp_t1

0x6cb3,	// (0x00043c54) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0004c840) video_down_pane_cp_t

0xd880,	// (0x0004a821) popup_vitu2_window_ParamLimits

0xd880,	// (0x0004a821) popup_vitu2_window

0x75c2,	// (0x00044563) aid_size_cell2_itu2_ParamLimits

0x75c2,	// (0x00044563) aid_size_cell2_itu2

0x75e4,	// (0x00044585) aid_size_cell_itu2_ParamLimits

0x75e4,	// (0x00044585) aid_size_cell_itu2

0xd88e,	// (0x0004a82f) bg_popup_window_pane_cp09_ParamLimits

0xd88e,	// (0x0004a82f) bg_popup_window_pane_cp09

0x7628,	// (0x000445c9) field_vitu2_entry_pane_ParamLimits

0x7628,	// (0x000445c9) field_vitu2_entry_pane

0x7648,	// (0x000445e9) grid_vitu2_function_pane_ParamLimits

0x7648,	// (0x000445e9) grid_vitu2_function_pane

0x768c,	// (0x0004462d) grid_vitu2_itu_pane_ParamLimits

0x768c,	// (0x0004462d) grid_vitu2_itu_pane

0x7706,	// (0x000446a7) cell_vitu2_itu_pane_ParamLimits

0x7706,	// (0x000446a7) cell_vitu2_itu_pane

0x771f,	// (0x000446c0) cell_vitu2_function_pane_ParamLimits

0x771f,	// (0x000446c0) cell_vitu2_function_pane

0xd6c6,	// (0x0004a667) bg_popup_call_pane_cp08_ParamLimits

0xd6c6,	// (0x0004a667) bg_popup_call_pane_cp08

0xd6dd,	// (0x0004a67e) field_vitu2_entry_pane_g1

0xd6e9,	// (0x0004a68a) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0004c8cf) field_vitu2_entry_pane_g

0x10ef,	// (0x0003e090) field_vitu2_entry_pane_t1_ParamLimits

0x10ef,	// (0x0003e090) field_vitu2_entry_pane_t1

0x1121,	// (0x0003e0c2) field_vitu2_entry_pane_t2_ParamLimits

0x1121,	// (0x0003e0c2) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0004c8d6) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0004c8d6) field_vitu2_entry_pane_t

0x7760,	// (0x00044701) bg_button_pane_cp010_ParamLimits

0x7760,	// (0x00044701) bg_button_pane_cp010

0x776e,	// (0x0004470f) cell_vitu2_itu_pane_g1

0x778e,	// (0x0004472f) cell_vitu2_itu_pane_t1_ParamLimits

0x778e,	// (0x0004472f) cell_vitu2_itu_pane_t1

0x113e,	// (0x0003e0df) cell_vitu2_itu_pane_t2_ParamLimits

0x113e,	// (0x0003e0df) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0004c8e0) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0004c8e0) cell_vitu2_itu_pane_t

0xadd9,	// (0x00047d7a) bg_button_pane_cp011

0x77da,	// (0x0004477b) cell_vitu2_function_pane_g1

0xa183,	// (0x00047124) main_myfav_hc_pane

0x718d,	// (0x0004412e) popup_image3_note_pane_ParamLimits

0x718d,	// (0x0004412e) popup_image3_note_pane

0x719b,	// (0x0004413c) popup_image3_tool_bar_pane_ParamLimits

0x719b,	// (0x0004413c) popup_image3_tool_bar_pane

0x11b4,	// (0x0003e155) cell_vitu2_itu_pane_t3_ParamLimits

0x11b4,	// (0x0003e155) cell_vitu2_itu_pane_t3

0xa183,	// (0x00047124) bg_popup_trans_pane

0xd70b,	// (0x0004a6ac) grid_image3_tool_bar_pane

0xd715,	// (0x0004a6b6) bg_popup_trans_pane_g1

0xad00,	// (0x00047ca1) bg_popup_trans_pane_g2

0xd71d,	// (0x0004a6be) bg_popup_trans_pane_g3

0xd725,	// (0x0004a6c6) bg_popup_trans_pane_g4

0xd72d,	// (0x0004a6ce) bg_popup_trans_pane_g5

0xd735,	// (0x0004a6d6) bg_popup_trans_pane_g6

0xd73d,	// (0x0004a6de) bg_popup_trans_pane_g7

0xd745,	// (0x0004a6e6) bg_popup_trans_pane_g8

0xace0,	// (0x00047c81) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0004c8e7) bg_popup_trans_pane_g

0xd74d,	// (0x0004a6ee) cell_image3_tool_bar_pane_ParamLimits

0xd74d,	// (0x0004a6ee) cell_image3_tool_bar_pane

0xcd6a,	// (0x00049d0b) cell_image3_tool_bar_pane_g1

0xa183,	// (0x00047124) bg_popup_trans_pane_cp1

0xd761,	// (0x0004a702) popup_image3_note_pane_t1

0xd76f,	// (0x0004a710) popup_image3_note_pane_t2

0xd77d,	// (0x0004a71e) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0004c8fa) popup_image3_note_pane_t

0xd78b,	// (0x0004a72c) popup_image3_note_pane_t3_copy1

0x77ee,	// (0x0004478f) bg_myfav_hc_instruction_pane_ParamLimits

0x77ee,	// (0x0004478f) bg_myfav_hc_instruction_pane

0x7806,	// (0x000447a7) cell_myfav_contact_pane_ParamLimits

0x7806,	// (0x000447a7) cell_myfav_contact_pane

0x7820,	// (0x000447c1) cell_myfav_contact_pane_cp1_ParamLimits

0x7820,	// (0x000447c1) cell_myfav_contact_pane_cp1

0x7838,	// (0x000447d9) cell_myfav_contact_pane_cp2_ParamLimits

0x7838,	// (0x000447d9) cell_myfav_contact_pane_cp2

0x7850,	// (0x000447f1) cell_myfav_contact_pane_cp3_ParamLimits

0x7850,	// (0x000447f1) cell_myfav_contact_pane_cp3

0x7867,	// (0x00044808) cell_myfav_contact_pane_cp4_ParamLimits

0x7867,	// (0x00044808) cell_myfav_contact_pane_cp4

0x787d,	// (0x0004481e) cell_myfav_contact_pane_cp5_ParamLimits

0x787d,	// (0x0004481e) cell_myfav_contact_pane_cp5

0x7891,	// (0x00044832) cell_myfav_contact_pane_cp6_ParamLimits

0x7891,	// (0x00044832) cell_myfav_contact_pane_cp6

0x78a5,	// (0x00044846) cell_myfav_contact_pane_cp7_ParamLimits

0x78a5,	// (0x00044846) cell_myfav_contact_pane_cp7

0xd799,	// (0x0004a73a) listscroll_gen_pane_cp05

0x78bd,	// (0x0004485e) main_myfav_hc_pane_g1_ParamLimits

0x78bd,	// (0x0004485e) main_myfav_hc_pane_g1

0x78d3,	// (0x00044874) main_myfav_hc_pane_g2_ParamLimits

0x78d3,	// (0x00044874) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0004c901) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0004c901) main_myfav_hc_pane_g

0x7903,	// (0x000448a4) main_myfav_hc_pane_t1_ParamLimits

0x7903,	// (0x000448a4) main_myfav_hc_pane_t1

0xd7a2,	// (0x0004a743) main_myfav_hc_pane_t2_ParamLimits

0xd7a2,	// (0x0004a743) main_myfav_hc_pane_t2

0xd7b4,	// (0x0004a755) main_myfav_hc_pane_t3_ParamLimits

0xd7b4,	// (0x0004a755) main_myfav_hc_pane_t3

0x791a,	// (0x000448bb) main_myfav_hc_pane_t4_ParamLimits

0x791a,	// (0x000448bb) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0004c908) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0004c908) main_myfav_hc_pane_t

0xcd6a,	// (0x00049d0b) bg_myfav_hc_instruction_pane_g1

0xd7c6,	// (0x0004a767) cell_myfav_contact_pane_g1_ParamLimits

0xd7c6,	// (0x0004a767) cell_myfav_contact_pane_g1

0xd7c6,	// (0x0004a767) cell_myfav_contact_pane_g2_ParamLimits

0xd7c6,	// (0x0004a767) cell_myfav_contact_pane_g2

0xd7d2,	// (0x0004a773) cell_myfav_contact_pane_g3_ParamLimits

0xd7d2,	// (0x0004a773) cell_myfav_contact_pane_g3

0xd014,	// (0x00049fb5) cell_myfav_contact_pane_g4_ParamLimits

0xd014,	// (0x00049fb5) cell_myfav_contact_pane_g4

0xd7df,	// (0x0004a780) cell_myfav_contact_pane_g5_ParamLimits

0xd7df,	// (0x0004a780) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0004c913) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0004c913) cell_myfav_contact_pane_g

0x78eb,	// (0x0004488c) main_myfav_hc_pane_g3_ParamLimits

0x78eb,	// (0x0004488c) main_myfav_hc_pane_g3

0x231b,	// (0x0003f2bc) popup_adpt_find_window

0x7944,	// (0x000448e5) afind_page_pane_ParamLimits

0x7944,	// (0x000448e5) afind_page_pane

0x7951,	// (0x000448f2) aid_size_cell_afind_ParamLimits

0x7951,	// (0x000448f2) aid_size_cell_afind

0x796b,	// (0x0004490c) bg_popup_sub_pane_cp09_ParamLimits

0x796b,	// (0x0004490c) bg_popup_sub_pane_cp09

0x7978,	// (0x00044919) find_pane_cp01_ParamLimits

0x7978,	// (0x00044919) find_pane_cp01

0xd7eb,	// (0x0004a78c) grid_afind_control_pane_ParamLimits

0xd7eb,	// (0x0004a78c) grid_afind_control_pane

0x7985,	// (0x00044926) grid_afind_pane_ParamLimits

0x7985,	// (0x00044926) grid_afind_pane

0x799f,	// (0x00044940) cell_afind_pane_ParamLimits

0x799f,	// (0x00044940) cell_afind_pane

0xcd6a,	// (0x00049d0b) afind_page_pane_g1

0x79e7,	// (0x00044988) afind_page_pane_g2

0x79f0,	// (0x00044991) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0004c91e) afind_page_pane_g

0x79f9,	// (0x0004499a) afind_page_pane_t1

0xd7ff,	// (0x0004a7a0) cell_afind_grid_control_pane_ParamLimits

0xd7ff,	// (0x0004a7a0) cell_afind_grid_control_pane

0xd68e,	// (0x0004a62f) bg_button_pane_cp69_ParamLimits

0xd68e,	// (0x0004a62f) bg_button_pane_cp69

0x7a19,	// (0x000449ba) cell_afind_pane_g1_ParamLimits

0x7a19,	// (0x000449ba) cell_afind_pane_g1

0x7a26,	// (0x000449c7) cell_afind_pane_t1_ParamLimits

0x7a26,	// (0x000449c7) cell_afind_pane_t1

0xaaf9,	// (0x00047a9a) bg_button_pane_cp72

0xd80e,	// (0x0004a7af) cell_afind_grid_control_pane_g1

0x4f12,	// (0x00041eb3) aid_image_placing_area_ParamLimits

0x4f12,	// (0x00041eb3) aid_image_placing_area

0xd34f,	// (0x0004a2f0) field_vitu_entry_pane_g1_ParamLimits

0xd34f,	// (0x0004a2f0) field_vitu_entry_pane_g1

0xd35b,	// (0x0004a2fc) field_vitu_entry_pane_g2_ParamLimits

0xd35b,	// (0x0004a2fc) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0004c7cb) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0004c7cb) field_vitu_entry_pane_g

0x6aa3,	// (0x00043a44) cell_vitu_itu_pane_g1_ParamLimits

0x6ae5,	// (0x00043a86) cell_vitu_itu_pane_t3_ParamLimits

0x6ae5,	// (0x00043a86) cell_vitu_itu_pane_t3

0xd637,	// (0x0004a5d8) mp4_progress_pane_t1_ParamLimits

0xd650,	// (0x0004a5f1) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0004c864) mp4_progress_pane_t_ParamLimits

0xd669,	// (0x0004a60a) mup_progress_pane_cp04_ParamLimits

0x792e,	// (0x000448cf) main_myfav_hc_pane_t5_ParamLimits

0x792e,	// (0x000448cf) main_myfav_hc_pane_t5

0x21a9,	// (0x0003f14a) aid_zoom_text_primary

0x231b,	// (0x0003f2bc) popup_adpt_find_window_ParamLimits

0xadd9,	// (0x00047d7a) main_cam_set_pane

0x73c0,	// (0x00044361) cam4_zoom_pane_ParamLimits

0x73c0,	// (0x00044361) cam4_zoom_pane

0x7a38,	// (0x000449d9) main_cam_set_pane_g1_ParamLimits

0x7a38,	// (0x000449d9) main_cam_set_pane_g1

0x7a46,	// (0x000449e7) main_cam_set_pane_g2_ParamLimits

0x7a46,	// (0x000449e7) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0004c925) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0004c925) main_cam_set_pane_g

0x7a52,	// (0x000449f3) main_cam_set_pane_t1_ParamLimits

0x7a52,	// (0x000449f3) main_cam_set_pane_t1

0x7a6e,	// (0x00044a0f) main_cset_listscroll_pane_ParamLimits

0x7a6e,	// (0x00044a0f) main_cset_listscroll_pane

0x7a99,	// (0x00044a3a) main_cset_slider_pane_ParamLimits

0x7a99,	// (0x00044a3a) main_cset_slider_pane

0xd81f,	// (0x0004a7c0) main_cset_list_pane_ParamLimits

0xd81f,	// (0x0004a7c0) main_cset_list_pane

0xd82f,	// (0x0004a7d0) scroll_pane_cp028

0x7ab8,	// (0x00044a59) aid_area_touch_slider

0x7ad4,	// (0x00044a75) cset_slider_pane

0x7afe,	// (0x00044a9f) main_cset_slider_pane_g1

0x7b13,	// (0x00044ab4) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0004c92a) main_cset_slider_pane_g

0xd89c,	// (0x0004a83d) main_cset_slider_pane_t1

0x7bd9,	// (0x00044b7a) main_cset_slider_pane_t2

0x7bf3,	// (0x00044b94) main_cset_slider_pane_t3

0x7c0d,	// (0x00044bae) main_cset_slider_pane_t4

0x7c2b,	// (0x00044bcc) main_cset_slider_pane_t5

0x7c49,	// (0x00044bea) main_cset_slider_pane_t6

0x7c60,	// (0x00044c01) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0004c94f) main_cset_slider_pane_t

0x7d6e,	// (0x00044d0f) cset_list_set_pane_ParamLimits

0x7d6e,	// (0x00044d0f) cset_list_set_pane

0x7d87,	// (0x00044d28) aid_position_infowindow_above

0x7d8f,	// (0x00044d30) aid_position_infowindow_below

0x1206,	// (0x0003e1a7) cset_list_set_pane_g1_ParamLimits

0x1206,	// (0x0003e1a7) cset_list_set_pane_g1

0x1212,	// (0x0003e1b3) cset_list_set_pane_g3_ParamLimits

0x1212,	// (0x0003e1b3) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0004c96e) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0004c96e) cset_list_set_pane_g

0x1221,	// (0x0003e1c2) cset_list_set_pane_t1_ParamLimits

0x1221,	// (0x0003e1c2) cset_list_set_pane_t1

0xadd9,	// (0x00047d7a) list_highlight_pane_cp021_ParamLimits

0xadd9,	// (0x00047d7a) list_highlight_pane_cp021

0xb653,	// (0x000485f4) cset_slider_pane_g1

0xb665,	// (0x00048606) cset_slider_pane_g2

0xb65c,	// (0x000485fd) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0004c973) cset_slider_pane_g

0x7d97,	// (0x00044d38) aid_area_touch_cam4_zoom

0x7d9f,	// (0x00044d40) cam4_zoom_cont_pane

0x7da7,	// (0x00044d48) cam4_zoom_pane_g1

0x7daf,	// (0x00044d50) cam4_zoom_pane_g2

0x7db7,	// (0x00044d58) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0004c97a) cam4_zoom_pane_g

0xd546,	// (0x0004a4e7) cam4_zoom_cont_pane_g1

0xdd4d,	// (0x0004acee) cam4_zoom_cont_pane_g2

0xdd56,	// (0x0004acf7) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0004c981) cam4_zoom_cont_pane_g

0x71e4,	// (0x00044185) call4_image_pane_ParamLimits

0x71e4,	// (0x00044185) call4_image_pane

0x7243,	// (0x000441e4) call4_windows_conf_pane_ParamLimits

0x7288,	// (0x00044229) popup_call4_audio_in_window_ParamLimits

0x7288,	// (0x00044229) popup_call4_audio_in_window

0xa183,	// (0x00047124) bg_popup_call2_act_pane_cp02

0xd69a,	// (0x0004a63b) call4_list_conf_pane

0xcd6a,	// (0x00049d0b) call4_image_pane_g1

0xcd6a,	// (0x00049d0b) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0004c68c) call4_image_pane_g

0xd93c,	// (0x0004a8dd) list_single_graphic_popup_conf4_pane_ParamLimits

0xd93c,	// (0x0004a8dd) list_single_graphic_popup_conf4_pane

0xa183,	// (0x00047124) list_highlight_pane_cp022

0xd94f,	// (0x0004a8f0) list_single_graphic_popup_conf4_pane_g1

0xb243,	// (0x000481e4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0004c988) list_single_graphic_popup_conf4_pane_g

0xd957,	// (0x0004a8f8) list_single_graphic_popup_conf4_pane_t1

0x32d4,	// (0x00040275) popup_vtel_slider_window_ParamLimits

0x32d4,	// (0x00040275) popup_vtel_slider_window

0xd67c,	// (0x0004a61d) dialer2_ne_pane_t2_ParamLimits

0xd67c,	// (0x0004a61d) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0004c869) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0004c869) dialer2_ne_pane_t

0xadd9,	// (0x00047d7a) bg_popup_sub_pane_cp010_ParamLimits

0xadd9,	// (0x00047d7a) bg_popup_sub_pane_cp010

0x7dbf,	// (0x00044d60) popup_vtel_slider_window_g1_ParamLimits

0x7dbf,	// (0x00044d60) popup_vtel_slider_window_g1

0x7dcb,	// (0x00044d6c) popup_vtel_slider_window_g2_ParamLimits

0x7dcb,	// (0x00044d6c) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0004c98d) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0004c98d) popup_vtel_slider_window_g

0x7e13,	// (0x00044db4) vtel_slider_pane_ParamLimits

0x7e13,	// (0x00044db4) vtel_slider_pane

0x7e22,	// (0x00044dc3) vtel_slider_pane_g1_ParamLimits

0x7e22,	// (0x00044dc3) vtel_slider_pane_g1

0x7e2f,	// (0x00044dd0) vtel_slider_pane_g2_ParamLimits

0x7e2f,	// (0x00044dd0) vtel_slider_pane_g2

0x7e3c,	// (0x00044ddd) vtel_slider_pane_g3_ParamLimits

0x7e3c,	// (0x00044ddd) vtel_slider_pane_g3

0x7e22,	// (0x00044dc3) vtel_slider_pane_g4_ParamLimits

0x7e22,	// (0x00044dc3) vtel_slider_pane_g4

0x7e49,	// (0x00044dea) vtel_slider_pane_g5_ParamLimits

0x7e49,	// (0x00044dea) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0004c996) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0004c996) vtel_slider_pane_g

0xadd9,	// (0x00047d7a) main_gallery2_pane

0x760a,	// (0x000445ab) aid_size_row_itut2_dropdow_list_ParamLimits

0x760a,	// (0x000445ab) aid_size_row_itut2_dropdow_list

0x766a,	// (0x0004460b) grid_vitu2_function_top_pane_ParamLimits

0x766a,	// (0x0004460b) grid_vitu2_function_top_pane

0x76c4,	// (0x00044665) popup_vitu2_dropdown_list_window_ParamLimits

0x76c4,	// (0x00044665) popup_vitu2_dropdown_list_window

0x76e4,	// (0x00044685) popup_vitu2_match_list_window

0x7e56,	// (0x00044df7) cell_vitu2_function_top_pane_ParamLimits

0x7e56,	// (0x00044df7) cell_vitu2_function_top_pane

0x7e70,	// (0x00044e11) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7e70,	// (0x00044e11) cell_vitu2_function_top_pane_cp01

0x7e8c,	// (0x00044e2d) cell_vitu2_function_top_wide_pane_ParamLimits

0x7e8c,	// (0x00044e2d) cell_vitu2_function_top_wide_pane

0xadd9,	// (0x00047d7a) bg_button_pane_cp012

0x7ea8,	// (0x00044e49) cell_vitu2_function_top_pane_g1

0x7ebc,	// (0x00044e5d) bg_button_pane_cp013_ParamLimits

0x7ebc,	// (0x00044e5d) bg_button_pane_cp013

0x7ed8,	// (0x00044e79) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7ed8,	// (0x00044e79) cell_vitu2_function_top_wide_pane_g1

0xd880,	// (0x0004a821) bg_popup_sub_pane_cp20

0x7ef0,	// (0x00044e91) list_vitu2_match_list_pane

0xd715,	// (0x0004a6b6) bg_popup_sub_pane_cp20_g1

0xd71d,	// (0x0004a6be) bg_popup_sub_pane_cp20_g2

0xad00,	// (0x00047ca1) bg_popup_sub_pane_cp20_g3

0xd725,	// (0x0004a6c6) bg_popup_sub_pane_cp20_g4

0xace0,	// (0x00047c81) bg_popup_sub_pane_cp20_g5

0xd96d,	// (0x0004a90e) bg_popup_sub_pane_cp20_g6

0xd735,	// (0x0004a6d6) bg_popup_sub_pane_cp20_g7

0xd73d,	// (0x0004a6de) bg_popup_sub_pane_cp20_g8

0xd745,	// (0x0004a6e6) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0004c9a1) bg_popup_sub_pane_cp20_g

0x7f08,	// (0x00044ea9) list_vitu2_match_list_item_pane_ParamLimits

0x7f08,	// (0x00044ea9) list_vitu2_match_list_item_pane

0x7f1a,	// (0x00044ebb) list_vitu2_match_list_item_pane_t1

0xa183,	// (0x00047124) bg_popup_sub_pane_cp21

0xb16b,	// (0x0004810c) grid_vitu2_dropdown_list_pane

0x7f28,	// (0x00044ec9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f28,	// (0x00044ec9) cell_vitu2_dropdown_list_char_pane

0x7f49,	// (0x00044eea) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7f49,	// (0x00044eea) cell_vitu2_dropdown_list_ctrl_pane

0xd975,	// (0x0004a916) cell_vitu2_dropdown_list_char_pane_g1

0xd97e,	// (0x0004a91f) cell_vitu2_dropdown_list_char_pane_g2

0xd987,	// (0x0004a928) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0004c9be) cell_vitu2_dropdown_list_char_pane_g

0x7f75,	// (0x00044f16) cell_vitu2_dropdown_list_char_pane_t1

0x7f83,	// (0x00044f24) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7f83,	// (0x00044f24) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7f93,	// (0x00044f34) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7f93,	// (0x00044f34) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7fa4,	// (0x00044f45) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7fa4,	// (0x00044f45) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7fb4,	// (0x00044f55) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7fb4,	// (0x00044f55) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcfaf,	// (0x00049f50) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcfaf,	// (0x00049f50) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0004c9c5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0004c9c5) cell_vitu2_dropdown_list_ctrl_pane_g

0x7fd0,	// (0x00044f71) aid_size_cell_gallery2_ParamLimits

0x7fd0,	// (0x00044f71) aid_size_cell_gallery2

0x7fea,	// (0x00044f8b) grid_gallery2_pane_ParamLimits

0x7fea,	// (0x00044f8b) grid_gallery2_pane

0x8001,	// (0x00044fa2) scroll_pane_cp029_ParamLimits

0x8001,	// (0x00044fa2) scroll_pane_cp029

0x8011,	// (0x00044fb2) cell_gallery2_pane_ParamLimits

0x8011,	// (0x00044fb2) cell_gallery2_pane

0xd990,	// (0x0004a931) cell_gallery2_pane_g2

0x8066,	// (0x00045007) cell_gallery2_pane_g3

0xd998,	// (0x0004a939) cell_gallery2_pane_g4

0xd9a0,	// (0x0004a941) cell_gallery2_pane_g5

0xaaa7,	// (0x00047a48) grid_highlight_pane_cp10

0x76e4,	// (0x00044685) popup_vitu2_match_list_window_ParamLimits

0x76f6,	// (0x00044697) popup_vitu2_query_window_ParamLimits

0x76f6,	// (0x00044697) popup_vitu2_query_window

0xa183,	// (0x00047124) bg_vitu2_candi_button_pane

0xd975,	// (0x0004a916) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd97e,	// (0x0004a91f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd987,	// (0x0004a928) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x128c,	// (0x0003e22d) bg_button_pane_cp015

0x806e,	// (0x0004500f) bg_button_pane_cp016

0x8081,	// (0x00045022) bg_button_pane_cp017

0xc962,	// (0x00049903) bg_popup_sub_pane_cp22

0xd9a8,	// (0x0004a949) popup_vitu2_query_window_g1

0x12bf,	// (0x0003e260) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0004c9d0) popup_vitu2_query_window_g

0x12dc,	// (0x0003e27d) popup_vitu2_query_window_t1_ParamLimits

0x12dc,	// (0x0003e27d) popup_vitu2_query_window_t1

0x130f,	// (0x0003e2b0) popup_vitu2_query_window_t2_ParamLimits

0x130f,	// (0x0003e2b0) popup_vitu2_query_window_t2

0x1321,	// (0x0003e2c2) popup_vitu2_query_window_t3_ParamLimits

0x1321,	// (0x0003e2c2) popup_vitu2_query_window_t3

0x80a5,	// (0x00045046) popup_vitu2_query_window_t4_ParamLimits

0x80a5,	// (0x00045046) popup_vitu2_query_window_t4

0x80c6,	// (0x00045067) popup_vitu2_query_window_t5_ParamLimits

0x80c6,	// (0x00045067) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0004c9d7) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0004c9d7) popup_vitu2_query_window_t

0xd817,	// (0x0004a7b8) main_cset_text_pane

0x7ab8,	// (0x00044a59) aid_area_touch_slider_ParamLimits

0x7ad4,	// (0x00044a75) cset_slider_pane_ParamLimits

0x7afe,	// (0x00044a9f) main_cset_slider_pane_g1_ParamLimits

0x7b13,	// (0x00044ab4) main_cset_slider_pane_g2_ParamLimits

0xd838,	// (0x0004a7d9) main_cset_slider_pane_g3_ParamLimits

0xd838,	// (0x0004a7d9) main_cset_slider_pane_g3

0x7b28,	// (0x00044ac9) main_cset_slider_pane_g4_ParamLimits

0x7b28,	// (0x00044ac9) main_cset_slider_pane_g4

0x7b37,	// (0x00044ad8) main_cset_slider_pane_g5_ParamLimits

0x7b37,	// (0x00044ad8) main_cset_slider_pane_g5

0x7b45,	// (0x00044ae6) main_cset_slider_pane_g6_ParamLimits

0x7b45,	// (0x00044ae6) main_cset_slider_pane_g6

0xf989,	// (0x0004c92a) main_cset_slider_pane_g_ParamLimits

0xd89c,	// (0x0004a83d) main_cset_slider_pane_t1_ParamLimits

0x7bd9,	// (0x00044b7a) main_cset_slider_pane_t2_ParamLimits

0x7bf3,	// (0x00044b94) main_cset_slider_pane_t3_ParamLimits

0x7c0d,	// (0x00044bae) main_cset_slider_pane_t4_ParamLimits

0x7c2b,	// (0x00044bcc) main_cset_slider_pane_t5_ParamLimits

0x7c49,	// (0x00044bea) main_cset_slider_pane_t6_ParamLimits

0x7c60,	// (0x00044c01) main_cset_slider_pane_t7_ParamLimits

0x7c8e,	// (0x00044c2f) main_cset_slider_pane_t8_ParamLimits

0x7c8e,	// (0x00044c2f) main_cset_slider_pane_t8

0x7cb6,	// (0x00044c57) main_cset_slider_pane_t9_ParamLimits

0x7cb6,	// (0x00044c57) main_cset_slider_pane_t9

0x7cde,	// (0x00044c7f) main_cset_slider_pane_t10_ParamLimits

0x7cde,	// (0x00044c7f) main_cset_slider_pane_t10

0x7d06,	// (0x00044ca7) main_cset_slider_pane_t11_ParamLimits

0x7d06,	// (0x00044ca7) main_cset_slider_pane_t11

0x7d30,	// (0x00044cd1) main_cset_slider_pane_t12_ParamLimits

0x7d30,	// (0x00044cd1) main_cset_slider_pane_t12

0x7d4f,	// (0x00044cf0) main_cset_slider_pane_t13_ParamLimits

0x7d4f,	// (0x00044cf0) main_cset_slider_pane_t13

0xf9ae,	// (0x0004c94f) main_cset_slider_pane_t_ParamLimits

0xa183,	// (0x00047124) bg_popup_sub_pane_cp011

0xd9b4,	// (0x0004a955) main_cset_text_pane_g1

0xd9bc,	// (0x0004a95d) main_cset_text_pane_t1

0xd9ca,	// (0x0004a96b) main_cset_text_pane_t2

0xd9d8,	// (0x0004a979) main_cset_text_pane_t3

0xd9e6,	// (0x0004a987) main_cset_text_pane_t4

0xd9f4,	// (0x0004a995) main_cset_text_pane_t5

0xda02,	// (0x0004a9a3) main_cset_text_pane_t6

0xda10,	// (0x0004a9b1) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0004c9e6) main_cset_text_pane_t

0xa183,	// (0x00047124) main_cam4_burst_pane

0xa183,	// (0x00047124) main_cam5_pane

0x7a07,	// (0x000449a8) bg_button_pane_cp019

0x7a10,	// (0x000449b1) bg_button_pane_cp020

0xd844,	// (0x0004a7e5) main_cset_slider_pane_g7_ParamLimits

0xd844,	// (0x0004a7e5) main_cset_slider_pane_g7

0xd850,	// (0x0004a7f1) main_cset_slider_pane_g8_ParamLimits

0xd850,	// (0x0004a7f1) main_cset_slider_pane_g8

0x7b59,	// (0x00044afa) main_cset_slider_pane_g9_ParamLimits

0x7b59,	// (0x00044afa) main_cset_slider_pane_g9

0x7b65,	// (0x00044b06) main_cset_slider_pane_g10_ParamLimits

0x7b65,	// (0x00044b06) main_cset_slider_pane_g10

0x7b71,	// (0x00044b12) main_cset_slider_pane_g11_ParamLimits

0x7b71,	// (0x00044b12) main_cset_slider_pane_g11

0x7b7d,	// (0x00044b1e) main_cset_slider_pane_g12_ParamLimits

0x7b7d,	// (0x00044b1e) main_cset_slider_pane_g12

0x7b89,	// (0x00044b2a) main_cset_slider_pane_g13_ParamLimits

0x7b89,	// (0x00044b2a) main_cset_slider_pane_g13

0x7b97,	// (0x00044b38) main_cset_slider_pane_g14_ParamLimits

0x7b97,	// (0x00044b38) main_cset_slider_pane_g14

0x7ba5,	// (0x00044b46) main_cset_slider_pane_g15_ParamLimits

0x7ba5,	// (0x00044b46) main_cset_slider_pane_g15

0xd8ca,	// (0x0004a86b) main_cset_slider_pane_t14_ParamLimits

0xd8ca,	// (0x0004a86b) main_cset_slider_pane_t14

0xd903,	// (0x0004a8a4) main_cset_slider_pane_t15_ParamLimits

0xd903,	// (0x0004a8a4) main_cset_slider_pane_t15

0x80e7,	// (0x00045088) aid_cam4_burst_size_cell_ParamLimits

0x80e7,	// (0x00045088) aid_cam4_burst_size_cell

0x8103,	// (0x000450a4) grid_cam4_burst_pane_ParamLimits

0x8103,	// (0x000450a4) grid_cam4_burst_pane

0x8133,	// (0x000450d4) linegrid_cam4_burst_pane_ParamLimits

0x8133,	// (0x000450d4) linegrid_cam4_burst_pane

0x8153,	// (0x000450f4) scroll_pane_cp30_ParamLimits

0x8153,	// (0x000450f4) scroll_pane_cp30

0x815f,	// (0x00045100) cell_cam4_burst_pane_ParamLimits

0x815f,	// (0x00045100) cell_cam4_burst_pane

0xda1e,	// (0x0004a9bf) linegrid_cam4_burst_pane_g1_ParamLimits

0xda1e,	// (0x0004a9bf) linegrid_cam4_burst_pane_g1

0x819b,	// (0x0004513c) linegrid_cam4_burst_pane_g2_ParamLimits

0x819b,	// (0x0004513c) linegrid_cam4_burst_pane_g2

0xda2b,	// (0x0004a9cc) linegrid_cam4_burst_pane_g3_ParamLimits

0xda2b,	// (0x0004a9cc) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0004c9f5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0004c9f5) linegrid_cam4_burst_pane_g

0x81ac,	// (0x0004514d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x81ac,	// (0x0004514d) linegrid_cam4_burst_pane_g3_copy1

0xda38,	// (0x0004a9d9) linegrid_cam4_burst_pane_g4_ParamLimits

0xda38,	// (0x0004a9d9) linegrid_cam4_burst_pane_g4

0x81c6,	// (0x00045167) linegrid_cam4_burst_pane_g5_ParamLimits

0x81c6,	// (0x00045167) linegrid_cam4_burst_pane_g5

0x81d7,	// (0x00045178) linegrid_cam4_burst_pane_g6_ParamLimits

0x81d7,	// (0x00045178) linegrid_cam4_burst_pane_g6

0xda45,	// (0x0004a9e6) linegrid_cam4_burst_pane_g7_ParamLimits

0xda45,	// (0x0004a9e6) linegrid_cam4_burst_pane_g7

0x81e8,	// (0x00045189) cell_cam4_burst_pane_g1

0xda5e,	// (0x0004a9ff) main_cam5_pane_t1_ParamLimits

0xda5e,	// (0x0004a9ff) main_cam5_pane_t1

0xda70,	// (0x0004aa11) main_cam5_pane_t2_ParamLimits

0xda70,	// (0x0004aa11) main_cam5_pane_t2

0xda82,	// (0x0004aa23) main_cam5_pane_t3_ParamLimits

0xda82,	// (0x0004aa23) main_cam5_pane_t3

0xda94,	// (0x0004aa35) main_cam5_pane_t4_ParamLimits

0xda94,	// (0x0004aa35) main_cam5_pane_t4

0xdaac,	// (0x0004aa4d) main_cam5_pane_t5_ParamLimits

0xdaac,	// (0x0004aa4d) main_cam5_pane_t5

0xdac0,	// (0x0004aa61) main_cam5_pane_t6_ParamLimits

0xdac0,	// (0x0004aa61) main_cam5_pane_t6

0xdad4,	// (0x0004aa75) main_cam5_pane_t7_ParamLimits

0xdad4,	// (0x0004aa75) main_cam5_pane_t7

0xdae6,	// (0x0004aa87) main_cam5_pane_t8_ParamLimits

0xdae6,	// (0x0004aa87) main_cam5_pane_t8

0xdb02,	// (0x0004aaa3) main_cam5_pane_t9_ParamLimits

0xdb02,	// (0x0004aaa3) main_cam5_pane_t9

0xdb14,	// (0x0004aab5) main_cam5_pane_t10_ParamLimits

0xdb14,	// (0x0004aab5) main_cam5_pane_t10

0xdb26,	// (0x0004aac7) main_cam5_pane_t11_ParamLimits

0xdb26,	// (0x0004aac7) main_cam5_pane_t11

0xdb38,	// (0x0004aad9) main_cam5_pane_t12_ParamLimits

0xdb38,	// (0x0004aad9) main_cam5_pane_t12

0xdb4d,	// (0x0004aaee) main_cam5_pane_t13_ParamLimits

0xdb4d,	// (0x0004aaee) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0004ca01) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0004ca01) main_cam5_pane_t

0x23d1,	// (0x0003f372) popup_scut_keymap_window_ParamLimits

0x23d1,	// (0x0003f372) popup_scut_keymap_window

0x81fb,	// (0x0004519c) aid_size_cell_brow_shortcut

0xaaa7,	// (0x00047a48) bg_popup_window_pane_cp010

0x8207,	// (0x000451a8) grid_scut_pane

0x8213,	// (0x000451b4) cell_scut_pane_ParamLimits

0x8213,	// (0x000451b4) cell_scut_pane

0x822a,	// (0x000451cb) cell_scut_pane_g1

0xdb6a,	// (0x0004ab0b) cell_scut_pane_t1

0xdb79,	// (0x0004ab1a) cell_scut_pane_t2

0x8233,	// (0x000451d4) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0004ca1c) cell_scut_pane_t

0x60f4,	// (0x00043095) main_mup3_pane_g8_ParamLimits

0x60f4,	// (0x00043095) main_mup3_pane_g8

0x7618,	// (0x000445b9) area_vitu2_query_pane_ParamLimits

0x7618,	// (0x000445b9) area_vitu2_query_pane

0x129e,	// (0x0003e23f) input_focus_pane_cp08

0xdb88,	// (0x0004ab29) area_vitu2_query_pane_g1

0x139f,	// (0x0003e340) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0004ca23) area_vitu2_query_pane_g

0x8241,	// (0x000451e2) area_vitu2_query_pane_t1_ParamLimits

0x8241,	// (0x000451e2) area_vitu2_query_pane_t1

0x8255,	// (0x000451f6) area_vitu2_query_pane_t2_ParamLimits

0x8255,	// (0x000451f6) area_vitu2_query_pane_t2

0x13b0,	// (0x0003e351) area_vitu2_query_pane_t3_ParamLimits

0x13b0,	// (0x0003e351) area_vitu2_query_pane_t3

0x13d8,	// (0x0003e379) area_vitu2_query_pane_t4_ParamLimits

0x13d8,	// (0x0003e379) area_vitu2_query_pane_t4

0x1400,	// (0x0003e3a1) area_vitu2_query_pane_t5_ParamLimits

0x1400,	// (0x0003e3a1) area_vitu2_query_pane_t5

0x1428,	// (0x0003e3c9) area_vitu2_query_pane_t6_ParamLimits

0x1428,	// (0x0003e3c9) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0004ca28) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0004ca28) area_vitu2_query_pane_t

0x8269,	// (0x0004520a) bg_button_pane_cp018

0x8277,	// (0x00045218) bg_button_pane_cp021

0x1474,	// (0x0003e415) bg_button_pane_cp022

0x1485,	// (0x0003e426) input_focus_pane_cp09

0xb352,	// (0x000482f3) aid_size_touch_mv_arrow_left

0xb37d,	// (0x0004831e) aid_size_touch_mv_arrow_right

0x7bbd,	// (0x00044b5e) main_cset_slider_pane_g16_ParamLimits

0x7bbd,	// (0x00044b5e) main_cset_slider_pane_g16

0x7bcb,	// (0x00044b6c) main_cset_slider_pane_g17_ParamLimits

0x7bcb,	// (0x00044b6c) main_cset_slider_pane_g17

0x81e8,	// (0x00045189) cell_cam4_burst_pane_g1_ParamLimits

0xa183,	// (0x00047124) compa_mode_pane

0x7dd7,	// (0x00044d78) popup_vtel_slider_window_g3_ParamLimits

0x7dd7,	// (0x00044d78) popup_vtel_slider_window_g3

0x7deb,	// (0x00044d8c) popup_vtel_slider_window_g4_ParamLimits

0x7deb,	// (0x00044d8c) popup_vtel_slider_window_g4

0x7dff,	// (0x00044da0) popup_vtel_slider_window_t1_ParamLimits

0x7dff,	// (0x00044da0) popup_vtel_slider_window_t1

0xa183,	// (0x00047124) main_cl_pane

0x5426,	// (0x000423c7) popup_imed_adjust2_window_ParamLimits

0xc962,	// (0x00049903) bg_tb_trans_pane_cp05_ParamLimits

0xd26f,	// (0x0004a210) popup_imed_adjust2_window_g1_ParamLimits

0xd27e,	// (0x0004a21f) popup_imed_adjust2_window_g2_ParamLimits

0xd27e,	// (0x0004a21f) popup_imed_adjust2_window_g2

0xd28a,	// (0x0004a22b) popup_imed_adjust2_window_g3_ParamLimits

0xd28a,	// (0x0004a22b) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0004c78f) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0004c78f) popup_imed_adjust2_window_g

0xd296,	// (0x0004a237) popup_imed_adjust2_window_t1_ParamLimits

0xd2ae,	// (0x0004a24f) slider_imed_adjust_pane_ParamLimits

0xd2c2,	// (0x0004a263) slider_imed_adjust_pane_g1_ParamLimits

0xd2e7,	// (0x0004a288) slider_imed_adjust_pane_g2_ParamLimits

0xd2f7,	// (0x0004a298) slider_imed_adjust_pane_g3_ParamLimits

0xd308,	// (0x0004a2a9) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x0004c796) slider_imed_adjust_pane_g_ParamLimits

0x7369,	// (0x0004430a) aid_touch_area_cam4_ParamLimits

0x7369,	// (0x0004430a) aid_touch_area_cam4

0x7379,	// (0x0004431a) battery_pane_cp01

0x7400,	// (0x000443a1) main_camera4_pane_g6_ParamLimits

0x7400,	// (0x000443a1) main_camera4_pane_g6

0x741e,	// (0x000443bf) main_camera4_pane_t2_ParamLimits

0x741e,	// (0x000443bf) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0004c89d) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0004c89d) main_camera4_pane_t

0x749f,	// (0x00044440) aid_touch_area_vid4_ParamLimits

0x749f,	// (0x00044440) aid_touch_area_vid4

0x74df,	// (0x00044480) main_video4_pane_g5_ParamLimits

0x74df,	// (0x00044480) main_video4_pane_g5

0x7503,	// (0x000444a4) vid4_progress_pane_ParamLimits

0x7503,	// (0x000444a4) vid4_progress_pane

0xd85c,	// (0x0004a7fd) main_cset_slider_pane_g18_ParamLimits

0xd85c,	// (0x0004a7fd) main_cset_slider_pane_g18

0xda52,	// (0x0004a9f3) cell_cam4_burst_pane_g2_ParamLimits

0xda52,	// (0x0004a9f3) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0004c9fc) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0004c9fc) cell_cam4_burst_pane_g

0x8283,	// (0x00045224) bg_cl_pane_ParamLimits

0x8283,	// (0x00045224) bg_cl_pane

0x828f,	// (0x00045230) cl_header_pane_ParamLimits

0x828f,	// (0x00045230) cl_header_pane

0x829b,	// (0x0004523c) cl_listscroll_pane_ParamLimits

0x829b,	// (0x0004523c) cl_listscroll_pane

0xdb94,	// (0x0004ab35) bg_cl_pane_g1

0xdb9c,	// (0x0004ab3d) bg_cl_pane_g2

0xdba4,	// (0x0004ab45) bg_cl_pane_g3

0xdbac,	// (0x0004ab4d) bg_cl_pane_g4

0xdbb4,	// (0x0004ab55) bg_cl_pane_g5

0xdbbc,	// (0x0004ab5d) bg_cl_pane_g6

0xdbc4,	// (0x0004ab65) bg_cl_pane_g7

0xdbcc,	// (0x0004ab6d) bg_cl_pane_g8

0xdbd4,	// (0x0004ab75) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0004ca37) bg_cl_pane_g

0x82a7,	// (0x00045248) aid_height_cl_leading_ParamLimits

0x82a7,	// (0x00045248) aid_height_cl_leading

0x82b3,	// (0x00045254) aid_height_cl_text_ParamLimits

0x82b3,	// (0x00045254) aid_height_cl_text

0xd880,	// (0x0004a821) bg_cl_header_pane_ParamLimits

0xd880,	// (0x0004a821) bg_cl_header_pane

0x82cb,	// (0x0004526c) cl_header_pane_g1_ParamLimits

0x82cb,	// (0x0004526c) cl_header_pane_g1

0x82d8,	// (0x00045279) cl_header_pane_t1_ParamLimits

0x82d8,	// (0x00045279) cl_header_pane_t1

0xdbdc,	// (0x0004ab7d) cl_list_pane

0xd82f,	// (0x0004a7d0) hc_scroll_pane_cp01

0xace0,	// (0x00047c81) bg_cl_header_pane_g1

0xd715,	// (0x0004a6b6) bg_cl_header_pane_g2

0xad00,	// (0x00047ca1) bg_cl_header_pane_g3

0xd725,	// (0x0004a6c6) bg_cl_header_pane_g4

0xd71d,	// (0x0004a6be) bg_cl_header_pane_g5

0xd96d,	// (0x0004a90e) bg_cl_header_pane_g6

0xd73d,	// (0x0004a6de) bg_cl_header_pane_g7

0xd745,	// (0x0004a6e6) bg_cl_header_pane_g8

0xd735,	// (0x0004a6d6) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0004ca4a) bg_cl_header_pane_g

0x82ea,	// (0x0004528b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x82ea,	// (0x0004528b) hc_cl_list_double_graphic_heading_pane

0x82fe,	// (0x0004529f) hc_cl_list_single_graphic_pane_ParamLimits

0x82fe,	// (0x0004529f) hc_cl_list_single_graphic_pane

0x8318,	// (0x000452b9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8318,	// (0x000452b9) hc_cl_list_single_graphic_pane_g1

0x8324,	// (0x000452c5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8324,	// (0x000452c5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0004ca5d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0004ca5d) hc_cl_list_single_graphic_pane_g

0x8338,	// (0x000452d9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8338,	// (0x000452d9) hc_cl_list_single_graphic_pane_t1

0x8318,	// (0x000452b9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8318,	// (0x000452b9) hc_cl_list_double_graphic_heading_pane_g1

0x834d,	// (0x000452ee) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x834d,	// (0x000452ee) hc_cl_list_double_graphic_heading_pane_g2

0x8361,	// (0x00045302) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8361,	// (0x00045302) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0004ca62) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0004ca62) hc_cl_list_double_graphic_heading_pane_g

0x8375,	// (0x00045316) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8375,	// (0x00045316) hc_cl_list_double_graphic_heading_pane_t1

0x838a,	// (0x0004532b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x838a,	// (0x0004532b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0004ca69) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0004ca69) hc_cl_list_double_graphic_heading_pane_t

0x83a7,	// (0x00045348) vid4_progress_pane_g1

0x83b7,	// (0x00045358) vid4_progress_pane_g2

0x83c7,	// (0x00045368) vid4_progress_pane_g3

0x83d9,	// (0x0004537a) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0004ca6e) vid4_progress_pane_g

0x83f1,	// (0x00045392) vid4_progress_pane_t1

0x8407,	// (0x000453a8) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0004ca79) vid4_progress_pane_t

0x8432,	// (0x000453d3) wait_bar_pane_cp07

0xcb5d,	// (0x00049afe) blid_firmament_pane_ParamLimits

0xcba0,	// (0x00049b41) popup_blid_sat_info2_window_g1

0xcbc4,	// (0x00049b65) popup_blid_sat_info2_window_t3

0xcbd2,	// (0x00049b73) popup_blid_sat_info2_window_t4

0xcbe0,	// (0x00049b81) popup_blid_sat_info2_window_t5

0xcbee,	// (0x00049b8f) popup_blid_sat_info2_window_t6

0xcbfe,	// (0x00049b9f) popup_blid_sat_info2_window_t7

0xcc0c,	// (0x00049bad) popup_blid_sat_info2_window_t8

0xcc1a,	// (0x00049bbb) popup_blid_sat_info2_window_t9

0xcc28,	// (0x00049bc9) popup_blid_sat_info2_window_t10

0xccea,	// (0x00049c8b) aid_firma_cardinal_ParamLimits

0xccfe,	// (0x00049c9f) blid_firmament_pane_t1_ParamLimits

0xcd15,	// (0x00049cb6) blid_firmament_pane_t2_ParamLimits

0xcd2c,	// (0x00049ccd) blid_firmament_pane_t3_ParamLimits

0xcd43,	// (0x00049ce4) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x0004c683) blid_firmament_pane_t_ParamLimits

0xcd5a,	// (0x00049cfb) blid_sat_info_pane_ParamLimits

0xadd9,	// (0x00047d7a) main_cam_set_pane_ParamLimits

0x68c3,	// (0x00043864) aid_size_cell_colour_35_ParamLimits

0x68dd,	// (0x0004387e) aid_size_cell_colour_112_ParamLimits

0x68f4,	// (0x00043895) aid_size_cell_effect_ParamLimits

0xadd9,	// (0x00047d7a) bg_tb_trans_pane_cp02_ParamLimits

0xb440,	// (0x000483e1) heading_imed_pane_ParamLimits

0x690e,	// (0x000438af) listscroll_imed_pane_ParamLimits

0xbf4e,	// (0x00048eef) popup_call2_audio_first_window_g5_ParamLimits

0xbf4e,	// (0x00048eef) popup_call2_audio_first_window_g5

0x705d,	// (0x00043ffe) aid_size_touch_image3_arrow_left_ParamLimits

0x705d,	// (0x00043ffe) aid_size_touch_image3_arrow_left

0x7073,	// (0x00044014) aid_size_touch_image3_arrow_right_ParamLimits

0x7073,	// (0x00044014) aid_size_touch_image3_arrow_right

0x841c,	// (0x000453bd) vid4_progress_pane_t3

0x6bae,	// (0x00043b4f) main_hwr_training_symbol_option_pane_ParamLimits

0x6bae,	// (0x00043b4f) main_hwr_training_symbol_option_pane

0xd571,	// (0x0004a512) popup_hwr_training_preview_window_ParamLimits

0xd571,	// (0x0004a512) popup_hwr_training_preview_window

0x6c0f,	// (0x00043bb0) hwr_training_navi_pane_g5_ParamLimits

0x6c0f,	// (0x00043bb0) hwr_training_navi_pane_g5

0xd703,	// (0x0004a6a4) popup_char_count_window

0xd880,	// (0x0004a821) bg_popup_sub_pane_cp20_ParamLimits

0x7ef0,	// (0x00044e91) list_vitu2_match_list_pane_ParamLimits

0x7efc,	// (0x00044e9d) vitu2_page_scroll_pane_ParamLimits

0x7efc,	// (0x00044e9d) vitu2_page_scroll_pane

0xdbe5,	// (0x0004ab86) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbe5,	// (0x0004ab86) list_single_hwr_training_symbol_option_pane

0xdbf8,	// (0x0004ab99) list_single_hwr_training_symbol_option_pane_g1

0xdc00,	// (0x0004aba1) list_single_hwr_training_symbol_option_pane_t1

0xdc0e,	// (0x0004abaf) bg_button_pane_cp023

0xdc17,	// (0x0004abb8) bg_button_pane_cp024

0x8467,	// (0x00045408) vitu2_page_scroll_pane_g1

0x846f,	// (0x00045410) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0004ca80) vitu2_page_scroll_pane_g

0x8477,	// (0x00045418) vitu2_page_scroll_pane_t1

0xade7,	// (0x00047d88) popup_char_count_window_g1

0xdc4a,	// (0x0004abeb) popup_char_count_window_g2

0xd2d2,	// (0x0004a273) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0004ca85) popup_char_count_window_g

0xdc53,	// (0x0004abf4) popup_char_count_window_t1

0xa183,	// (0x00047124) main_vded2_pane

0xd25b,	// (0x0004a1fc) aid_size_cell_imed_line

0xd265,	// (0x0004a206) grid_imed_line_width_pane

0x756f,	// (0x00044510) vid4_indicators_pane_g4

0xdc61,	// (0x0004ac02) cell_imed_line_width_pane_ParamLimits

0xdc61,	// (0x0004ac02) cell_imed_line_width_pane

0xdc75,	// (0x0004ac16) cell_imed_line_width_pane_g1

0xdc7e,	// (0x0004ac1f) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0004ca8c) cell_imed_line_width_pane_g

0x8486,	// (0x00045427) main_vded2_pane_g1_ParamLimits

0x8486,	// (0x00045427) main_vded2_pane_g1

0x8493,	// (0x00045434) main_vded2_pane_g2_ParamLimits

0x8493,	// (0x00045434) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0004ca91) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0004ca91) main_vded2_pane_g

0x84a1,	// (0x00045442) vded2_slider_pane_ParamLimits

0x84a1,	// (0x00045442) vded2_slider_pane

0x84ae,	// (0x0004544f) aid_size_touch_vded2_end

0x84b8,	// (0x00045459) aid_size_touch_vded2_playhead

0xdc86,	// (0x0004ac27) aid_size_touch_vded2_start

0xdc8e,	// (0x0004ac2f) vded2_slider_bg_pane

0xdc97,	// (0x0004ac38) vded2_slider_pane_g1

0xdca0,	// (0x0004ac41) vded2_slider_pane_g2

0x84c0,	// (0x00045461) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0004ca96) vded2_slider_pane_g

0xdca8,	// (0x0004ac49) vded2_slider_bg_pane_g1

0xdcb1,	// (0x0004ac52) vded2_slider_bg_pane_g2

0xdcba,	// (0x0004ac5b) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0004ca9d) vded2_slider_bg_pane_g

0x4c7d,	// (0x00041c1e) aid_postcard_touch_down_pane_ParamLimits

0x4c7d,	// (0x00041c1e) aid_postcard_touch_down_pane

0x4c8d,	// (0x00041c2e) aid_postcard_touch_up_pane_ParamLimits

0x4c8d,	// (0x00041c2e) aid_postcard_touch_up_pane

0xa183,	// (0x00047124) main_blid2_pane

0x53b5,	// (0x00042356) popup_blid2_search_window

0xa183,	// (0x00047124) blid2_gps_pane

0xa183,	// (0x00047124) blid2_navig_pane

0xa183,	// (0x00047124) blid2_search_pane

0xa183,	// (0x00047124) blid2_tripm_pane

0x84c9,	// (0x0004546a) blid2_search_pane_g1_ParamLimits

0x84c9,	// (0x0004546a) blid2_search_pane_g1

0x84d9,	// (0x0004547a) blid2_search_pane_t1_ParamLimits

0x84d9,	// (0x0004547a) blid2_search_pane_t1

0x84eb,	// (0x0004548c) aid_size_cell_blid2_gps_ParamLimits

0x84eb,	// (0x0004548c) aid_size_cell_blid2_gps

0x84fb,	// (0x0004549c) blid2_gps_pane_g1_ParamLimits

0x84fb,	// (0x0004549c) blid2_gps_pane_g1

0x8507,	// (0x000454a8) grid_blid2_satellite_pane_ParamLimits

0x8507,	// (0x000454a8) grid_blid2_satellite_pane

0x8517,	// (0x000454b8) blid2_navig_pane_g1_ParamLimits

0x8517,	// (0x000454b8) blid2_navig_pane_g1

0x8523,	// (0x000454c4) blid2_navig_pane_t1_ParamLimits

0x8523,	// (0x000454c4) blid2_navig_pane_t1

0x8535,	// (0x000454d6) blid2_navig_pane_t2_ParamLimits

0x8535,	// (0x000454d6) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0004caa4) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0004caa4) blid2_navig_pane_t

0x8547,	// (0x000454e8) blid2_navig_ring_pane_ParamLimits

0x8547,	// (0x000454e8) blid2_navig_ring_pane

0x8557,	// (0x000454f8) blid2_speed_pane_ParamLimits

0x8557,	// (0x000454f8) blid2_speed_pane

0x8563,	// (0x00045504) blid2_tripm_pane_g1_ParamLimits

0x8563,	// (0x00045504) blid2_tripm_pane_g1

0x8573,	// (0x00045514) blid2_tripm_pane_g2_ParamLimits

0x8573,	// (0x00045514) blid2_tripm_pane_g2

0x857f,	// (0x00045520) blid2_tripm_pane_g3_ParamLimits

0x857f,	// (0x00045520) blid2_tripm_pane_g3

0x858b,	// (0x0004552c) blid2_tripm_pane_g4_ParamLimits

0x858b,	// (0x0004552c) blid2_tripm_pane_g4

0x8597,	// (0x00045538) blid2_tripm_pane_g5_ParamLimits

0x8597,	// (0x00045538) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0004caa9) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0004caa9) blid2_tripm_pane_g

0x85b3,	// (0x00045554) blid2_tripm_pane_t1_ParamLimits

0x85b3,	// (0x00045554) blid2_tripm_pane_t1

0x85c7,	// (0x00045568) blid2_tripm_pane_t2_ParamLimits

0x85c7,	// (0x00045568) blid2_tripm_pane_t2

0x85d9,	// (0x0004557a) blid2_tripm_pane_t3_ParamLimits

0x85d9,	// (0x0004557a) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0004cab6) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0004cab6) blid2_tripm_pane_t

0x860b,	// (0x000455ac) cell_blid2_satellite_pane_ParamLimits

0x860b,	// (0x000455ac) cell_blid2_satellite_pane

0x8625,	// (0x000455c6) cell_blid2_satellite_pane_g1

0xdcc3,	// (0x0004ac64) cell_blid2_satellite_pane_t1

0xcd6a,	// (0x00049d0b) blid2_speed_pane_g1

0xdcd1,	// (0x0004ac72) blid2_speed_pane_t1

0xdcdf,	// (0x0004ac80) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0004cabf) blid2_speed_pane_t

0xcd6a,	// (0x00049d0b) blid2_navig_ring_pane_g1

0x862e,	// (0x000455cf) blid2_navig_ring_pane_g2

0x8636,	// (0x000455d7) blid2_navig_ring_pane_g3

0x863e,	// (0x000455df) blid2_navig_ring_pane_g4

0x8646,	// (0x000455e7) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0004cac4) blid2_navig_ring_pane_g

0xa183,	// (0x00047124) bg_popup_window_pane_cp011

0xdced,	// (0x0004ac8e) popup_blid2_search_window_g1

0xdcf5,	// (0x0004ac96) popup_blid2_search_window_t1

0xdd03,	// (0x0004aca4) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0004cacf) popup_blid2_search_window_t

0xabef,	// (0x00047b90) main_browser_pane_g1

0xa8e2,	// (0x00047883) main_browser_pane_ParamLimits

0xadd9,	// (0x00047d7a) bg_button_pane_cp011_ParamLimits

0x77da,	// (0x0004477b) cell_vitu2_function_pane_g1_ParamLimits

0xc962,	// (0x00049903) bg_popup_sub_pane_cp22_ParamLimits

0x129e,	// (0x0003e23f) input_focus_pane_cp08_ParamLimits

0x8094,	// (0x00045035) popup_vitu2_query_button_pane_ParamLimits

0x8094,	// (0x00045035) popup_vitu2_query_button_pane

0x12b5,	// (0x0003e256) popup_vitu2_query_input_button_pane

0xd9a8,	// (0x0004a949) popup_vitu2_query_window_g1_ParamLimits

0x12bf,	// (0x0003e260) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0004c9d0) popup_vitu2_query_window_g_ParamLimits

0xa183,	// (0x00047124) bg_button_pane_cp026

0x864e,	// (0x000455ef) popup_vitu2_query_input_button_pane_g1

0xa183,	// (0x00047124) bg_button_pane_cp025

0xdd11,	// (0x0004acb2) popup_vitu2_query_button_pane_t1

0x5e15,	// (0x00042db6) main_mp3_pane_t6

0x5e25,	// (0x00042dc6) popup_slider_window_cp01

0x7454,	// (0x000443f5) cam4_battery_pane

0x752e,	// (0x000444cf) cam4_battery_pane_cp02

0x839f,	// (0x00045340) cam4_battery_pane_cp01

0x839f,	// (0x00045340) cam4_battery_pane_cp03

0xcd6a,	// (0x00049d0b) cam4_battery_pane_g1

0xdd1f,	// (0x0004acc0) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0004cad4) cam4_battery_pane_g

0xcc36,	// (0x00049bd7) popup_blid_sat_info2_window_t11

0xb352,	// (0x000482f3) aid_size_touch_mv_arrow_left_ParamLimits

0xb37d,	// (0x0004831e) aid_size_touch_mv_arrow_right_ParamLimits

0xb3db,	// (0x0004837c) navi_pane_g1_ParamLimits

0xb3e7,	// (0x00048388) navi_pane_g2_ParamLimits

0xb415,	// (0x000483b6) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0004c382) navi_pane_g_ParamLimits

0x4705,	// (0x000416a6) navi_pane_mv_t1_ParamLimits

0x691a,	// (0x000438bb) grid_imed_effect_pane_ParamLimits

0x3194,	// (0x00040135) aid_placing_vt_slider_lsc

0xab3e,	// (0x00047adf) aid_placing_vt_slider_prt

0xadd9,	// (0x00047d7a) bg_tb_trans_pane_cp01_ParamLimits

0xcecf,	// (0x00049e70) popup_image_details_window_g1_ParamLimits

0xcee2,	// (0x00049e83) popup_image_details_window_g2_ParamLimits

0xcef7,	// (0x00049e98) popup_image_details_window_g3_ParamLimits

0xcef7,	// (0x00049e98) popup_image_details_window_g3

0xf727,	// (0x0004c6c8) popup_image_details_window_g_ParamLimits

0xcf0b,	// (0x00049eac) popup_image_details_window_t1_ParamLimits

0xcf1d,	// (0x00049ebe) popup_image_details_window_t2_ParamLimits

0xcf36,	// (0x00049ed7) popup_image_details_window_t3_ParamLimits

0xcf4a,	// (0x00049eeb) popup_image_details_window_t4_ParamLimits

0xcf65,	// (0x00049f06) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x0004c6cf) popup_image_details_window_t_ParamLimits

0x82bf,	// (0x00045260) cl_header_name_pane_ParamLimits

0x82bf,	// (0x00045260) cl_header_name_pane

0x8656,	// (0x000455f7) cl_header_name_pane_t1_ParamLimits

0x8656,	// (0x000455f7) cl_header_name_pane_t1

0x866d,	// (0x0004560e) cl_header_name_pane_t2_ParamLimits

0x866d,	// (0x0004560e) cl_header_name_pane_t2

0x8697,	// (0x00045638) cl_header_name_pane_t3_ParamLimits

0x8697,	// (0x00045638) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0004cad9) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0004cad9) cl_header_name_pane_t

0xb4be,	// (0x0004845f) navi_pane_mv_g2_ParamLimits

0xd6dd,	// (0x0004a67e) field_vitu2_entry_pane_g1_ParamLimits

0xd6e9,	// (0x0004a68a) field_vitu2_entry_pane_g2_ParamLimits

0xd6f5,	// (0x0004a696) field_vitu2_entry_pane_g3_ParamLimits

0xd6f5,	// (0x0004a696) field_vitu2_entry_pane_g3

0xf92e,	// (0x0004c8cf) field_vitu2_entry_pane_g_ParamLimits

0x776e,	// (0x0004470f) cell_vitu2_itu_pane_g1_ParamLimits

0x7780,	// (0x00044721) cell_vitu2_itu_pane_g2_ParamLimits

0x7780,	// (0x00044721) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0004c8db) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0004c8db) cell_vitu2_itu_pane_g

0xadd9,	// (0x00047d7a) bg_vkb2_func_pane_cp05_ParamLimits

0xadd9,	// (0x00047d7a) bg_vkb2_func_pane_cp05

0xadd9,	// (0x00047d7a) bg_vkb2_func_pane_cp03

0xadd9,	// (0x00047d7a) bg_vkb2_func_pane_cp04

0xadd9,	// (0x00047d7a) bg_vkb2_func_pane_cp10_ParamLimits

0xadd9,	// (0x00047d7a) bg_vkb2_func_pane_cp10

0x1474,	// (0x0003e415) bg_vkb2_func_pane_cp08

0x8269,	// (0x0004520a) bg_vkb2_func_pane_cp06

0x8277,	// (0x00045218) bg_vkb2_func_pane_cp07

0xdc20,	// (0x0004abc1) bg_vkb2_func_pane_cp11_ParamLimits

0xdc20,	// (0x0004abc1) bg_vkb2_func_pane_cp11

0xdc35,	// (0x0004abd6) bg_vkb2_func_pane_cp12_ParamLimits

0xdc35,	// (0x0004abd6) bg_vkb2_func_pane_cp12

0xa183,	// (0x00047124) bg_vkb2_func_pane_cp09

0xd715,	// (0x0004a6b6) bg_vkb2_func_pane_g1

0xad00,	// (0x00047ca1) bg_vkb2_func_pane_g2

0xd71d,	// (0x0004a6be) bg_vkb2_func_pane_g3

0xd725,	// (0x0004a6c6) bg_vkb2_func_pane_g4

0xd96d,	// (0x0004a90e) bg_vkb2_func_pane_g5

0xd73d,	// (0x0004a6de) bg_vkb2_func_pane_g6

0xd745,	// (0x0004a6e6) bg_vkb2_func_pane_g7

0xd735,	// (0x0004a6d6) bg_vkb2_func_pane_g8

0xace0,	// (0x00047c81) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0004cae0) bg_vkb2_func_pane_g

0x85a5,	// (0x00045546) blid2_tripm_pane_g6_ParamLimits

0x85a5,	// (0x00045546) blid2_tripm_pane_g6

0xd62f,	// (0x0004a5d0) mp4_progress_pane_g1

0x85ff,	// (0x000455a0) blid2_tripm_values_pane_ParamLimits

0x85ff,	// (0x000455a0) blid2_tripm_values_pane

0x86bc,	// (0x0004565d) blid2_tripm_values_pane_t1

0x86ca,	// (0x0004566b) blid2_tripm_values_pane_t2

0x86d8,	// (0x00045679) blid2_tripm_values_pane_t3

0x86e6,	// (0x00045687) blid2_tripm_values_pane_t4

0x86f4,	// (0x00045695) blid2_tripm_values_pane_t5

0x8702,	// (0x000456a3) blid2_tripm_values_pane_t6

0x8710,	// (0x000456b1) blid2_tripm_values_pane_t7

0x871e,	// (0x000456bf) blid2_tripm_values_pane_t8

0x872c,	// (0x000456cd) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0004caf3) blid2_tripm_values_pane_t

0x31d4,	// (0x00040175) call_video_pane_t1_ParamLimits

0x31f5,	// (0x00040196) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0004c20b) call_video_pane_t_ParamLimits

0x0ff6,	// (0x0003df97) msg_header_pane_g1_ParamLimits

0xb698,	// (0x00048639) msg_header_pane_g2_ParamLimits

0xb698,	// (0x00048639) msg_header_pane_g2

0x0001,

0xf484,	// (0x0004c425) msg_header_pane_g_ParamLimits

0xf484,	// (0x0004c425) msg_header_pane_g

0xa8e2,	// (0x00047883) main_clock2_pane_ParamLimits

0x6694,	// (0x00043635) grid_clock2_toolbar_pane_ParamLimits

0x6694,	// (0x00043635) grid_clock2_toolbar_pane

0x6694,	// (0x00043635) listscroll_clock2_pane_ParamLimits

0x6694,	// (0x00043635) listscroll_clock2_pane

0x6744,	// (0x000436e5) main_clock2_pane_t3_ParamLimits

0x6744,	// (0x000436e5) main_clock2_pane_t3

0x6756,	// (0x000436f7) main_clock2_pane_t4_ParamLimits

0x6756,	// (0x000436f7) main_clock2_pane_t4

0xdd29,	// (0x0004acca) cell_clock2_toolbar_pane

0xdd31,	// (0x0004acd2) cell_clock2_toolbar_pane_cp01

0xdd31,	// (0x0004acd2) cell_clock2_toolbar_pane_cp02

0xdd39,	// (0x0004acda) cell_clock2_toolbar_pane_cp03

0xdd5f,	// (0x0004ad00) list_clock2_pane

0xb2d7,	// (0x00048278) scroll_pane_cp10

0xdd67,	// (0x0004ad08) list_single_clock2_pane_ParamLimits

0xdd67,	// (0x0004ad08) list_single_clock2_pane

0xaaa7,	// (0x00047a48) list_highlight_pane_cp08

0xdd74,	// (0x0004ad15) list_single_clock2_pane_t1

0xdd82,	// (0x0004ad23) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0004cb06) list_single_clock2_pane_t

0xa183,	// (0x00047124) bg_button_pane_cp10

0xdd90,	// (0x0004ad31) cell_clock2_toolbar_pane_g1

0x4bdf,	// (0x00041b80) aid_main_viewer_pane_g1_ParamLimits

0x4bdf,	// (0x00041b80) aid_main_viewer_pane_g1

0x4beb,	// (0x00041b8c) aid_main_viewer_pane_g2_ParamLimits

0x4beb,	// (0x00041b8c) aid_main_viewer_pane_g2

0x4bf7,	// (0x00041b98) aid_main_viewer_pane_g3_ParamLimits

0x4bf7,	// (0x00041b98) aid_main_viewer_pane_g3

0x4c08,	// (0x00041ba9) aid_main_viewer_pane_g4_ParamLimits

0x4c08,	// (0x00041ba9) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0004c436) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0004c436) aid_main_viewer_pane_g

0x538d,	// (0x0004232e) main_calc_pane_ParamLimits

0x539a,	// (0x0004233b) main_dialer2_pane_ParamLimits

0xa183,	// (0x00047124) main_cam6_pane

0xa183,	// (0x00047124) main_vid6_pane

0x66a0,	// (0x00043641) listscroll_gen_pane_cp06_ParamLimits

0x66a0,	// (0x00043641) listscroll_gen_pane_cp06

0x6768,	// (0x00043709) main_clock2_pane_t5_ParamLimits

0x6768,	// (0x00043709) main_clock2_pane_t5

0x67b5,	// (0x00043756) aid_call2_pane_cp10_ParamLimits

0x67c7,	// (0x00043768) aid_call_pane_cp10_ParamLimits

0xb346,	// (0x000482e7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb346,	// (0x000482e7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x67d9,	// (0x0004377a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x67d9,	// (0x0004377a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb346,	// (0x000482e7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x0004c784) popup_clock_analogue_window_cp10_g_ParamLimits

0x67ef,	// (0x00043790) popup_clock_analogue_window_cp10_t1_ParamLimits

0x700a,	// (0x00043fab) cell_dialer2_keypad_pane_g2_ParamLimits

0x700a,	// (0x00043fab) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0004c86e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0004c86e) cell_dialer2_keypad_pane_g

0x7026,	// (0x00043fc7) cell_dialer2_keypad_pane_t1

0x7aa5,	// (0x00044a46) main_cset_text2_pane_ParamLimits

0x7aa5,	// (0x00044a46) main_cset_text2_pane

0xdb88,	// (0x0004ab29) area_vitu2_query_pane_g1_ParamLimits

0x139f,	// (0x0003e340) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0004ca23) area_vitu2_query_pane_g_ParamLimits

0x1450,	// (0x0003e3f1) area_vitu2_query_pane_t7_ParamLimits

0x1450,	// (0x0003e3f1) area_vitu2_query_pane_t7

0x8269,	// (0x0004520a) bg_button_pane_cp018_ParamLimits

0x8277,	// (0x00045218) bg_button_pane_cp021_ParamLimits

0x1474,	// (0x0003e415) bg_button_pane_cp022_ParamLimits

0x1474,	// (0x0003e415) bg_vkb2_func_pane_cp08_ParamLimits

0x8269,	// (0x0004520a) bg_vkb2_func_pane_cp06_ParamLimits

0x8277,	// (0x00045218) bg_vkb2_func_pane_cp07_ParamLimits

0x1485,	// (0x0003e426) input_focus_pane_cp09_ParamLimits

0x873a,	// (0x000456db) cam6_autofocus_pane_ParamLimits

0x873a,	// (0x000456db) cam6_autofocus_pane

0x875c,	// (0x000456fd) cam6_image_uncrop_pane_ParamLimits

0x875c,	// (0x000456fd) cam6_image_uncrop_pane

0x8789,	// (0x0004572a) cam6_indi_pane_ParamLimits

0x8789,	// (0x0004572a) cam6_indi_pane

0x87a3,	// (0x00045744) cam6_mode_pane_ParamLimits

0x87a3,	// (0x00045744) cam6_mode_pane

0x87b7,	// (0x00045758) cam6_timer_pane_ParamLimits

0x87b7,	// (0x00045758) cam6_timer_pane

0x87c8,	// (0x00045769) cam6_zoom_pane_ParamLimits

0x87c8,	// (0x00045769) cam6_zoom_pane

0x87e0,	// (0x00045781) cam6_mode_pane_g1_ParamLimits

0x87e0,	// (0x00045781) cam6_mode_pane_g1

0x87ec,	// (0x0004578d) cam6_mode_pane_g2_ParamLimits

0x87ec,	// (0x0004578d) cam6_mode_pane_g2

0x87f8,	// (0x00045799) cam6_mode_pane_g3_ParamLimits

0x87f8,	// (0x00045799) cam6_mode_pane_g3

0x8804,	// (0x000457a5) cam6_mode_pane_g4_ParamLimits

0x8804,	// (0x000457a5) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0004cb0b) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0004cb0b) cam6_mode_pane_g

0xd88e,	// (0x0004a82f) bg_tb_trans_pane_cp08_ParamLimits

0xd88e,	// (0x0004a82f) bg_tb_trans_pane_cp08

0xdd98,	// (0x0004ad39) cam6_battery_pane_ParamLimits

0xdd98,	// (0x0004ad39) cam6_battery_pane

0xddae,	// (0x0004ad4f) cam6_indi_pane_g1_ParamLimits

0xddae,	// (0x0004ad4f) cam6_indi_pane_g1

0xddc0,	// (0x0004ad61) cam6_indi_pane_g2_ParamLimits

0xddc0,	// (0x0004ad61) cam6_indi_pane_g2

0xddd2,	// (0x0004ad73) cam6_indi_pane_g3_ParamLimits

0xddd2,	// (0x0004ad73) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0004cb14) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0004cb14) cam6_indi_pane_g

0xdde4,	// (0x0004ad85) cam6_indi_pane_t1_ParamLimits

0xdde4,	// (0x0004ad85) cam6_indi_pane_t1

0x75a2,	// (0x00044543) cam6_autofocus_pane_g1

0x75aa,	// (0x0004454b) cam6_autofocus_pane_g2

0x75b2,	// (0x00044553) cam6_autofocus_pane_g3

0x75ba,	// (0x0004455b) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0004cb1b) cam6_autofocus_pane_g

0xde0a,	// (0x0004adab) cam6_timer_pane_g1

0xde12,	// (0x0004adb3) cam6_timer_pane_t1

0xde20,	// (0x0004adc1) cam6_zoom_cont_pane

0xde28,	// (0x0004adc9) cam6_zoom_pane_g1

0xde30,	// (0x0004add1) cam6_zoom_pane_g2

0x8810,	// (0x000457b1) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0004cb24) cam6_zoom_pane_g

0xcd6a,	// (0x00049d0b) cam6_battery_pane_g1

0xcd6a,	// (0x00049d0b) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0004c68c) cam6_battery_pane_g

0xde38,	// (0x0004add9) cam6_zoom_cont_pane_g1

0xde41,	// (0x0004ade2) cam6_zoom_cont_pane_g2

0xde4a,	// (0x0004adeb) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0004cb2b) cam6_zoom_cont_pane_g

0x882d,	// (0x000457ce) cam6_mode_pane_cp_ParamLimits

0x882d,	// (0x000457ce) cam6_mode_pane_cp

0x87c8,	// (0x00045769) cam6_zoom_pane_cp_ParamLimits

0x87c8,	// (0x00045769) cam6_zoom_pane_cp

0x8841,	// (0x000457e2) vid6_image_uncrop_cif_pane_ParamLimits

0x8841,	// (0x000457e2) vid6_image_uncrop_cif_pane

0x886d,	// (0x0004580e) vid6_image_uncrop_nhd_pane_ParamLimits

0x886d,	// (0x0004580e) vid6_image_uncrop_nhd_pane

0x875c,	// (0x000456fd) vid6_image_uncrop_vga_pane_ParamLimits

0x875c,	// (0x000456fd) vid6_image_uncrop_vga_pane

0x888a,	// (0x0004582b) vid6_image_uncrop_wvga_pane_ParamLimits

0x888a,	// (0x0004582b) vid6_image_uncrop_wvga_pane

0x88a7,	// (0x00045848) vid6_indi_pane_ParamLimits

0x88a7,	// (0x00045848) vid6_indi_pane

0xd88e,	// (0x0004a82f) bg_tb_trans_pane_cp09_ParamLimits

0xd88e,	// (0x0004a82f) bg_tb_trans_pane_cp09

0xde62,	// (0x0004ae03) cam6_battery_pane_cp_ParamLimits

0xde62,	// (0x0004ae03) cam6_battery_pane_cp

0xde6e,	// (0x0004ae0f) vid6_indi_pane_g1_ParamLimits

0xde6e,	// (0x0004ae0f) vid6_indi_pane_g1

0xde80,	// (0x0004ae21) vid6_indi_pane_g2_ParamLimits

0xde80,	// (0x0004ae21) vid6_indi_pane_g2

0xde92,	// (0x0004ae33) vid6_indi_pane_g3_ParamLimits

0xde92,	// (0x0004ae33) vid6_indi_pane_g3

0xdea7,	// (0x0004ae48) vid6_indi_pane_g4_ParamLimits

0xdea7,	// (0x0004ae48) vid6_indi_pane_g4

0xdebc,	// (0x0004ae5d) vid6_indi_pane_g5_ParamLimits

0xdebc,	// (0x0004ae5d) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0004cb32) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0004cb32) vid6_indi_pane_g

0xded6,	// (0x0004ae77) vid6_indi_pane_t1_ParamLimits

0xded6,	// (0x0004ae77) vid6_indi_pane_t1

0xdeec,	// (0x0004ae8d) vid6_indi_pane_t2_ParamLimits

0xdeec,	// (0x0004ae8d) vid6_indi_pane_t2

0xdf14,	// (0x0004aeb5) vid6_indi_pane_t3_ParamLimits

0xdf14,	// (0x0004aeb5) vid6_indi_pane_t3

0xdf3c,	// (0x0004aedd) vid6_indi_pane_t4_ParamLimits

0xdf3c,	// (0x0004aedd) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0004cb3d) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0004cb3d) vid6_indi_pane_t

0xdf60,	// (0x0004af01) wait_bar_pane_cp08

0x88ca,	// (0x0004586b) main_cset_text2_pane_t1_ParamLimits

0x88ca,	// (0x0004586b) main_cset_text2_pane_t1

0x8818,	// (0x000457b9) listscroll_gen_pane_cp06_t1_ParamLimits

0x8818,	// (0x000457b9) listscroll_gen_pane_cp06_t1

0xa183,	// (0x00047124) main_cam6_set_pane

0xcfaf,	// (0x00049f50) bg_tb_trans_pane_cp06_ParamLimits

0x745c,	// (0x000443fd) cam4_indicators_pane_g1_ParamLimits

0x746d,	// (0x0004440e) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0004c8ab) cam4_indicators_pane_g_ParamLimits

0x7485,	// (0x00044426) cam4_indicators_pane_t1_ParamLimits

0xadd9,	// (0x00047d7a) bg_tb_trans_pane_cp07_ParamLimits

0x7536,	// (0x000444d7) vid4_indicators_pane_g1_ParamLimits

0x754a,	// (0x000444eb) vid4_indicators_pane_g2_ParamLimits

0x755e,	// (0x000444ff) vid4_indicators_pane_g3_ParamLimits

0x756f,	// (0x00044510) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0004c8bd) vid4_indicators_pane_g_ParamLimits

0x758b,	// (0x0004452c) vid4_indicators_pane_t1_ParamLimits

0x83a7,	// (0x00045348) vid4_progress_pane_g1_ParamLimits

0x83b7,	// (0x00045358) vid4_progress_pane_g2_ParamLimits

0x83c7,	// (0x00045368) vid4_progress_pane_g3_ParamLimits

0x83d9,	// (0x0004537a) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0004ca6e) vid4_progress_pane_g_ParamLimits

0x83f1,	// (0x00045392) vid4_progress_pane_t1_ParamLimits

0x8407,	// (0x000453a8) vid4_progress_pane_t2_ParamLimits

0x841c,	// (0x000453bd) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0004ca79) vid4_progress_pane_t_ParamLimits

0x8432,	// (0x000453d3) wait_bar_pane_cp07_ParamLimits

0x8901,	// (0x000458a2) main_cam6_set_pane_g2_ParamLimits

0x8901,	// (0x000458a2) main_cam6_set_pane_g2

0x890d,	// (0x000458ae) main_cset6_listscroll_pane_ParamLimits

0x890d,	// (0x000458ae) main_cset6_listscroll_pane

0x8938,	// (0x000458d9) main_cset6_slider_pane_ParamLimits

0x8938,	// (0x000458d9) main_cset6_slider_pane

0x8944,	// (0x000458e5) main_cset6_text2_pane_ParamLimits

0x8944,	// (0x000458e5) main_cset6_text2_pane

0xdf6f,	// (0x0004af10) main_cset6_text_pane

0xdf77,	// (0x0004af18) main_cset_list_pane_copy1_ParamLimits

0xdf77,	// (0x0004af18) main_cset_list_pane_copy1

0xdf87,	// (0x0004af28) scroll_pane_cp028_copy1

0x8957,	// (0x000458f8) cset_list_set_pane_copy1

0x896d,	// (0x0004590e) aid_position_infowindow_above_copy1

0x8975,	// (0x00045916) aid_position_infowindow_below_copy1

0x14c3,	// (0x0003e464) cset_list_set_pane_g1_copy1

0x1212,	// (0x0003e1b3) cset_list_set_pane_g3_copy1_ParamLimits

0x1212,	// (0x0003e1b3) cset_list_set_pane_g3_copy1

0x1221,	// (0x0003e1c2) cset_list_set_pane_t1_copy1_ParamLimits

0x1221,	// (0x0003e1c2) cset_list_set_pane_t1_copy1

0xadd9,	// (0x00047d7a) list_highlight_pane_cp021_copy1_ParamLimits

0xadd9,	// (0x00047d7a) list_highlight_pane_cp021_copy1

0xdf90,	// (0x0004af31) cset6_slider_pane_ParamLimits

0xdf90,	// (0x0004af31) cset6_slider_pane

0xdfbc,	// (0x0004af5d) main_cset6_slider_pane_g1_ParamLimits

0xdfbc,	// (0x0004af5d) main_cset6_slider_pane_g1

0x897d,	// (0x0004591e) main_cset6_slider_pane_g2_ParamLimits

0x897d,	// (0x0004591e) main_cset6_slider_pane_g2

0xdfe4,	// (0x0004af85) main_cset6_slider_pane_g3_ParamLimits

0xdfe4,	// (0x0004af85) main_cset6_slider_pane_g3

0x89a5,	// (0x00045946) main_cset6_slider_pane_g4_ParamLimits

0x89a5,	// (0x00045946) main_cset6_slider_pane_g4

0x89b1,	// (0x00045952) main_cset6_slider_pane_g5_ParamLimits

0x89b1,	// (0x00045952) main_cset6_slider_pane_g5

0xd844,	// (0x0004a7e5) main_cset6_slider_pane_g7_ParamLimits

0xd844,	// (0x0004a7e5) main_cset6_slider_pane_g7

0xd850,	// (0x0004a7f1) main_cset6_slider_pane_g8_ParamLimits

0xd850,	// (0x0004a7f1) main_cset6_slider_pane_g8

0x89bf,	// (0x00045960) main_cset6_slider_pane_g9_ParamLimits

0x89bf,	// (0x00045960) main_cset6_slider_pane_g9

0x89cb,	// (0x0004596c) main_cset6_slider_pane_g10_ParamLimits

0x89cb,	// (0x0004596c) main_cset6_slider_pane_g10

0x89d7,	// (0x00045978) main_cset6_slider_pane_g11_ParamLimits

0x89d7,	// (0x00045978) main_cset6_slider_pane_g11

0x89e3,	// (0x00045984) main_cset6_slider_pane_g12_ParamLimits

0x89e3,	// (0x00045984) main_cset6_slider_pane_g12

0xd868,	// (0x0004a809) main_cset6_slider_pane_g13_ParamLimits

0xd868,	// (0x0004a809) main_cset6_slider_pane_g13

0xd874,	// (0x0004a815) main_cset6_slider_pane_g14_ParamLimits

0xd874,	// (0x0004a815) main_cset6_slider_pane_g14

0x89ef,	// (0x00045990) main_cset6_slider_pane_g15_ParamLimits

0x89ef,	// (0x00045990) main_cset6_slider_pane_g15

0x8a07,	// (0x000459a8) main_cset6_slider_pane_g16_ParamLimits

0x8a07,	// (0x000459a8) main_cset6_slider_pane_g16

0x8a15,	// (0x000459b6) main_cset6_slider_pane_g17_ParamLimits

0x8a15,	// (0x000459b6) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0004cb46) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0004cb46) main_cset6_slider_pane_g

0xdffc,	// (0x0004af9d) main_cset6_slider_pane_t1_ParamLimits

0xdffc,	// (0x0004af9d) main_cset6_slider_pane_t1

0x8a2f,	// (0x000459d0) main_cset6_slider_pane_t2_ParamLimits

0x8a2f,	// (0x000459d0) main_cset6_slider_pane_t2

0x8a5a,	// (0x000459fb) main_cset6_slider_pane_t3_ParamLimits

0x8a5a,	// (0x000459fb) main_cset6_slider_pane_t3

0x8a85,	// (0x00045a26) main_cset6_slider_pane_t4_ParamLimits

0x8a85,	// (0x00045a26) main_cset6_slider_pane_t4

0x8ab0,	// (0x00045a51) main_cset6_slider_pane_t5_ParamLimits

0x8ab0,	// (0x00045a51) main_cset6_slider_pane_t5

0xe03d,	// (0x0004afde) main_cset6_slider_pane_t7_ParamLimits

0xe03d,	// (0x0004afde) main_cset6_slider_pane_t7

0x8add,	// (0x00045a7e) main_cset6_slider_pane_t8_ParamLimits

0x8add,	// (0x00045a7e) main_cset6_slider_pane_t8

0x8b01,	// (0x00045aa2) main_cset6_slider_pane_t9_ParamLimits

0x8b01,	// (0x00045aa2) main_cset6_slider_pane_t9

0x8b25,	// (0x00045ac6) main_cset6_slider_pane_t10_ParamLimits

0x8b25,	// (0x00045ac6) main_cset6_slider_pane_t10

0x8b49,	// (0x00045aea) main_cset6_slider_pane_t11_ParamLimits

0x8b49,	// (0x00045aea) main_cset6_slider_pane_t11

0xe073,	// (0x0004b014) main_cset6_slider_pane_t14_ParamLimits

0xe073,	// (0x0004b014) main_cset6_slider_pane_t14

0xe0ac,	// (0x0004b04d) main_cset6_slider_pane_t15_ParamLimits

0xe0ac,	// (0x0004b04d) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0004cb6b) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0004cb6b) main_cset6_slider_pane_t

0xd546,	// (0x0004a4e7) cset_slider_pane_g1_copy1

0xdd4d,	// (0x0004acee) cset_slider_pane_g2_copy1

0xdd56,	// (0x0004acf7) cset_slider_pane_g3_copy1

0xa183,	// (0x00047124) bg_popup_sub_pane_cp011_copy1

0xe0e5,	// (0x0004b086) main_cset_text_pane_g1_copy1

0xd9bc,	// (0x0004a95d) main_cset_text_pane_t1_copy1

0xd9ca,	// (0x0004a96b) main_cset_text_pane_t2_copy1

0xd9d8,	// (0x0004a979) main_cset_text_pane_t3_copy1

0xd9e6,	// (0x0004a987) main_cset_text_pane_t4_copy1

0xd9f4,	// (0x0004a995) main_cset_text_pane_t5_copy1

0xe0ed,	// (0x0004b08e) main_cset_text_pane_t6_copy1

0xe0fb,	// (0x0004b09c) main_cset_text_pane_t7_copy1

0x8b6f,	// (0x00045b10) main_cset_text2_pane_t1_copy1

0xadd9,	// (0x00047d7a) main_ncimui_pane

0x53eb,	// (0x0004238c) popup_query_ncimui_window_ParamLimits

0x53eb,	// (0x0004238c) popup_query_ncimui_window

0x10b7,	// (0x0003e058) field_cale_ev2_pane_g4_ParamLimits

0x10b7,	// (0x0003e058) field_cale_ev2_pane_g4

0x6cea,	// (0x00043c8b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6cea,	// (0x00043c8b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0004c845) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0004c845) cell_video_dialer_keypad_pane_g

0x6d02,	// (0x00043ca3) cell_video_dialer_keypad_pane_t1

0xa183,	// (0x00047124) bg_popup_window_pane_cp012

0xb1c2,	// (0x00048163) heading_pane_cp06

0xe127,	// (0x0004b0c8) ncim_query_content_pane

0xa183,	// (0x00047124) bg_popup_heading_pane_cp01

0xe12f,	// (0x0004b0d0) ncim_heading_pane_t1

0xe13d,	// (0x0004b0de) ncim_indicator_popup_pane

0xe14f,	// (0x0004b0f0) ncim_query_button_pane

0xe163,	// (0x0004b104) ncim_query_content_pane_t1

0xe175,	// (0x0004b116) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0004cbaf) ncim_query_content_pane_t

0xe1af,	// (0x0004b150) ncim_query_list_pane

0xe1c1,	// (0x0004b162) ncim_query_popup_pane

0xe13d,	// (0x0004b0de) ncim_indicator_popup_pane_ParamLimits

0x8cc3,	// (0x00045c64) ncim_query_content_pane_g1_ParamLimits

0x8cc3,	// (0x00045c64) ncim_query_content_pane_g1

0xe163,	// (0x0004b104) ncim_query_content_pane_t1_ParamLimits

0xe175,	// (0x0004b116) ncim_query_content_pane_t2_ParamLimits

0x8ccf,	// (0x00045c70) ncim_query_content_pane_t3_ParamLimits

0x8ccf,	// (0x00045c70) ncim_query_content_pane_t3

0x8cec,	// (0x00045c8d) ncim_query_content_pane_t4_ParamLimits

0x8cec,	// (0x00045c8d) ncim_query_content_pane_t4

0x8d09,	// (0x00045caa) ncim_query_content_pane_t5_ParamLimits

0x8d09,	// (0x00045caa) ncim_query_content_pane_t5

0xe187,	// (0x0004b128) ncim_query_content_pane_t6_ParamLimits

0xe187,	// (0x0004b128) ncim_query_content_pane_t6

0xfc0e,	// (0x0004cbaf) ncim_query_content_pane_t_ParamLimits

0xe1af,	// (0x0004b150) ncim_query_list_pane_ParamLimits

0xe1c1,	// (0x0004b162) ncim_query_popup_pane_ParamLimits

0xe1d5,	// (0x0004b176) wait_bar_pane_cp04

0xa183,	// (0x00047124) input_focus_pane_cp011

0xe1dd,	// (0x0004b17e) ncim_query_popup_pane_t1

0xe1eb,	// (0x0004b18c) ncim_list_query_list_pane_ParamLimits

0xe1eb,	// (0x0004b18c) ncim_list_query_list_pane

0xa183,	// (0x00047124) bg_button_pane_cp027

0xe1f8,	// (0x0004b199) ncim_query_button_pane_g1

0xa183,	// (0x00047124) list_highlight_pane_cp012

0xe202,	// (0x0004b1a3) ncim_list_query_list_pane_g1

0xe20a,	// (0x0004b1ab) ncim_list_query_list_pane_t1

0x7479,	// (0x0004441a) cam4_indicators_pane_g3_ParamLimits

0x7479,	// (0x0004441a) cam4_indicators_pane_g3

0x757b,	// (0x0004451c) vid4_indicators_pane_g5_ParamLimits

0x757b,	// (0x0004451c) vid4_indicators_pane_g5

0x83e5,	// (0x00045386) vid4_progress_pane_g5_ParamLimits

0x83e5,	// (0x00045386) vid4_progress_pane_g5

0x8baf,	// (0x00045b50) main_ncimui_pane_g1

0x8c17,	// (0x00045bb8) ncimui_group_query_pane_ParamLimits

0x8c17,	// (0x00045bb8) ncimui_group_query_pane

0x8c5f,	// (0x00045c00) ncimui_list_pane_ParamLimits

0x8c5f,	// (0x00045c00) ncimui_list_pane

0x8c86,	// (0x00045c27) ncimui_text_pane_ParamLimits

0x8c86,	// (0x00045c27) ncimui_text_pane

0x8d26,	// (0x00045cc7) ncimui_text_pane_t1_ParamLimits

0x8d26,	// (0x00045cc7) ncimui_text_pane_t1

0xe218,	// (0x0004b1b9) ncimui_list_single_graphic_pane_ParamLimits

0xe218,	// (0x0004b1b9) ncimui_list_single_graphic_pane

0x8d45,	// (0x00045ce6) ncimui_query_pane_ParamLimits

0x8d45,	// (0x00045ce6) ncimui_query_pane

0xa183,	// (0x00047124) list_highlight_pane_cp013

0xe228,	// (0x0004b1c9) ncim_list_query_list_pane_t1_copy1

0xe236,	// (0x0004b1d7) ncim_list_single_graphic_pane_g1

0x8d58,	// (0x00045cf9) ncim_query_button_pane_cp01

0x8d64,	// (0x00045d05) ncim_query_entry_pane_ParamLimits

0x8d64,	// (0x00045d05) ncim_query_entry_pane

0x8d77,	// (0x00045d18) ncimui_query_pane_g1

0x8d83,	// (0x00045d24) ncimui_query_pane_t1_ParamLimits

0x8d83,	// (0x00045d24) ncimui_query_pane_t1

0xadd9,	// (0x00047d7a) input_focus_pane_cp012

0xe23e,	// (0x0004b1df) ncim_query_entry_pane_t1

0xa8e2,	// (0x00047883) main_im_pane_ParamLimits

0xadd9,	// (0x00047d7a) main_mobtv_pane_ParamLimits

0xadd9,	// (0x00047d7a) main_mobtv_pane

0x8a23,	// (0x000459c4) main_cset6_slider_pane_g18_ParamLimits

0x8a23,	// (0x000459c4) main_cset6_slider_pane_g18

0xdff0,	// (0x0004af91) main_cset6_slider_pane_g19_ParamLimits

0xdff0,	// (0x0004af91) main_cset6_slider_pane_g19

0xd6f5,	// (0x0004a696) bg_main_mobtv_pane_ParamLimits

0xd6f5,	// (0x0004a696) bg_main_mobtv_pane

0x8d9c,	// (0x00045d3d) main_mobtv_info_pane

0x8da7,	// (0x00045d48) main_mobtv_loading_pane_ParamLimits

0x8da7,	// (0x00045d48) main_mobtv_loading_pane

0xe250,	// (0x0004b1f1) main_mobtv_pg_channel_list_pane

0xe25a,	// (0x0004b1fb) main_mobtv_pg_hdr_pane

0x8db4,	// (0x00045d55) main_mobtv_programe_curr_pane_ParamLimits

0x8db4,	// (0x00045d55) main_mobtv_programe_curr_pane

0x8dc1,	// (0x00045d62) main_mobtv_programe_next_pane_ParamLimits

0x8dc1,	// (0x00045d62) main_mobtv_programe_next_pane

0xe263,	// (0x0004b204) popup_mobtv_noti_window

0xcd6a,	// (0x00049d0b) main_tv_pg_hdr_pane_g1

0xe26b,	// (0x0004b20c) main_tv_pg_hdr_pane_g2

0xe273,	// (0x0004b214) main_tv_pg_hdr_pane_g3

0xe27b,	// (0x0004b21c) main_tv_pg_hdr_pane_g4

0xe283,	// (0x0004b224) main_tv_pg_hdr_pane_g5

0xe28d,	// (0x0004b22e) main_tv_pg_hdr_pane_g6

0xe297,	// (0x0004b238) main_tv_pg_hdr_pane_g7

0xe2a1,	// (0x0004b242) main_tv_pg_hdr_pane_g8

0xe2ab,	// (0x0004b24c) main_tv_pg_hdr_pane_g9

0xe2b5,	// (0x0004b256) main_tv_pg_hdr_pane_g10

0xe2bf,	// (0x0004b260) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0004cbbc) main_tv_pg_hdr_pane_g

0xe2c9,	// (0x0004b26a) main_tv_pg_hdr_pane_t1

0xe2d7,	// (0x0004b278) main_tv_pg_hdr_pane_t2

0xe2e5,	// (0x0004b286) main_tv_pg_hdr_pane_t3

0xe2f5,	// (0x0004b296) main_tv_pg_hdr_pane_t4

0xe305,	// (0x0004b2a6) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0004cbd3) main_tv_pg_hdr_pane_t

0xe315,	// (0x0004b2b6) single_mobtv_pg_channel_pane_ParamLimits

0xe315,	// (0x0004b2b6) single_mobtv_pg_channel_pane

0xe327,	// (0x0004b2c8) single_mobtv_pg_channel_table_pane

0xae38,	// (0x00047dd9) single_mobtv_pg_channel_thumb_pane

0xe330,	// (0x0004b2d1) single_tv_pg_channel_pane_g1

0xe339,	// (0x0004b2da) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0004cbde) single_tv_pg_channel_pane_g

0xcfaf,	// (0x00049f50) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfaf,	// (0x00049f50) bg_single_mobtv_pg_channel_thumb_pane

0xe342,	// (0x0004b2e3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe342,	// (0x0004b2e3) single_mobtv_pg_channel_thumb_pane_g1

0xe350,	// (0x0004b2f1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe350,	// (0x0004b2f1) single_mobtv_pg_channel_thumb_pane_g2

0xe35c,	// (0x0004b2fd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe35c,	// (0x0004b2fd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0004cbe3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0004cbe3) single_mobtv_pg_channel_thumb_pane_g

0xe368,	// (0x0004b309) single_mobtv_pg_channel_thumb_pane_t1

0xe376,	// (0x0004b317) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0004cbea) single_mobtv_pg_channel_thumb_pane_t

0xcd6a,	// (0x00049d0b) bg_single_mobtv_pg_channel_table_pane_g1

0xcd6a,	// (0x00049d0b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0004c68c) bg_single_mobtv_pg_channel_table_pane_g

0xe384,	// (0x0004b325) single_mobtv_pg_channel_table_pane_t1

0xe392,	// (0x0004b333) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0004cbef) single_mobtv_pg_channel_table_pane_t

0x8dd6,	// (0x00045d77) main_mobtv_info_pane_g1_ParamLimits

0x8dd6,	// (0x00045d77) main_mobtv_info_pane_g1

0x8df2,	// (0x00045d93) main_mobtv_info_pane_t1_ParamLimits

0x8df2,	// (0x00045d93) main_mobtv_info_pane_t1

0x8e6a,	// (0x00045e0b) main_mobtv_info_pane_t2_ParamLimits

0x8e6a,	// (0x00045e0b) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0004cbf9) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0004cbf9) main_mobtv_info_pane_t

0x8ef9,	// (0x00045e9a) wait_bar_pane_cp05

0x8f0b,	// (0x00045eac) main_mobtv_loading_pane_g1_ParamLimits

0x8f0b,	// (0x00045eac) main_mobtv_loading_pane_g1

0x8f19,	// (0x00045eba) main_mobtv_loading_pane_g2_ParamLimits

0x8f19,	// (0x00045eba) main_mobtv_loading_pane_g2

0x8f25,	// (0x00045ec6) main_mobtv_loading_pane_g3_ParamLimits

0x8f25,	// (0x00045ec6) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0004cc00) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0004cc00) main_mobtv_loading_pane_g

0xe3a0,	// (0x0004b341) main_mobtv_loading_pane_t1_ParamLimits

0xe3a0,	// (0x0004b341) main_mobtv_loading_pane_t1

0xe3b8,	// (0x0004b359) main_mobtv_loading_pane_t2_ParamLimits

0xe3b8,	// (0x0004b359) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0004cc07) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0004cc07) main_mobtv_loading_pane_t

0x8f33,	// (0x00045ed4) wait_bar_pane_cp06_ParamLimits

0x8f33,	// (0x00045ed4) wait_bar_pane_cp06

0xe3dc,	// (0x0004b37d) main_mobtv_programe_curr_pane_t1

0xe3ea,	// (0x0004b38b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0004cc0c) main_mobtv_programe_curr_pane_t

0xe3f8,	// (0x0004b399) main_mobtv_programe_next_pane_t1

0xe406,	// (0x0004b3a7) main_mobtv_programe_next_pane_t2

0xe414,	// (0x0004b3b5) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0004cc11) main_mobtv_programe_next_pane_t

0xa183,	// (0x00047124) bg_popup_mobtv_noti_window_pane

0xe422,	// (0x0004b3c3) popup_mobtv_noti_window_g1

0xe42a,	// (0x0004b3cb) popup_mobtv_noti_window_t1

0xe438,	// (0x0004b3d9) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0004cc18) popup_mobtv_noti_window_t

0xcd6a,	// (0x00049d0b) bg_popup_mobtv_noti_window_pane_g1

0xa183,	// (0x00047124) sc_clock_pane

0xa183,	// (0x00047124) main_fs_bigclock_pane

0x85ed,	// (0x0004558e) blid2_tripm_pane_t4_ParamLimits

0x85ed,	// (0x0004558e) blid2_tripm_pane_t4

0x8f3f,	// (0x00045ee0) sc_clock_pane_g1_ParamLimits

0x8f3f,	// (0x00045ee0) sc_clock_pane_g1

0x8f4d,	// (0x00045eee) sc_clock_pane_t1_ParamLimits

0x8f4d,	// (0x00045eee) sc_clock_pane_t1

0x8f60,	// (0x00045f01) sc_clock_pane_t2_ParamLimits

0x8f60,	// (0x00045f01) sc_clock_pane_t2

0x8f72,	// (0x00045f13) sc_clock_pane_t3_ParamLimits

0x8f72,	// (0x00045f13) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0004cc1d) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0004cc1d) sc_clock_pane_t

0x97dc,	// (0x0004677d) main_fs_bigclock_indicator_pane_ParamLimits

0x97dc,	// (0x0004677d) main_fs_bigclock_indicator_pane

0x8ff5,	// (0x00045f96) main_fs_bigclock_pane_g1_ParamLimits

0x8ff5,	// (0x00045f96) main_fs_bigclock_pane_g1

0x97e8,	// (0x00046789) main_fs_bigclock_pane_t1_ParamLimits

0x97e8,	// (0x00046789) main_fs_bigclock_pane_t1

0x97fa,	// (0x0004679b) main_fs_bigclock_pane_t2_ParamLimits

0x97fa,	// (0x0004679b) main_fs_bigclock_pane_t2

0x980e,	// (0x000467af) main_fs_bigclock_pane_t3_ParamLimits

0x980e,	// (0x000467af) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0004ce27) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0004ce27) main_fs_bigclock_pane_t

0xeccc,	// (0x0004bc6d) main_fs_bigclock_indicator_pane_g1

0xe157,	// (0x0004b0f8) ncim_query_content_pane_g2_ParamLimits

0xe157,	// (0x0004b0f8) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0004cbaa) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0004cbaa) ncim_query_content_pane_g

0x8f86,	// (0x00045f27) sc_clock_pane_t4_ParamLimits

0x8f86,	// (0x00045f27) sc_clock_pane_t4

0xadd9,	// (0x00047d7a) main_radioblah_pane

0x731f,	// (0x000442c0) cell_call4_button_pane_t1_copy1_ParamLimits

0x731f,	// (0x000442c0) cell_call4_button_pane_t1_copy1

0x8bc9,	// (0x00045b6a) main_ncimui_pane_t1_ParamLimits

0x8bc9,	// (0x00045b6a) main_ncimui_pane_t1

0x8be3,	// (0x00045b84) main_ncimui_pane_t2_ParamLimits

0x8be3,	// (0x00045b84) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0004cba3) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0004cba3) main_ncimui_pane_t

0xe57e,	// (0x0004b51f) main_radioblah_anim_pane_ParamLimits

0xe57e,	// (0x0004b51f) main_radioblah_anim_pane

0xe58f,	// (0x0004b530) main_radioblah_info_pane_ParamLimits

0xe58f,	// (0x0004b530) main_radioblah_info_pane

0xe5a3,	// (0x0004b544) main_radioblah_pane_t1_ParamLimits

0xe5a3,	// (0x0004b544) main_radioblah_pane_t1

0xe5bf,	// (0x0004b560) main_radioblah_pane_t2_ParamLimits

0xe5bf,	// (0x0004b560) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0004cc3e) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0004cc3e) main_radioblah_pane_t

0x904b,	// (0x00045fec) main_radioblah_rocker_ctrl_pane_ParamLimits

0x904b,	// (0x00045fec) main_radioblah_rocker_ctrl_pane

0xe607,	// (0x0004b5a8) main_radioblah_info_pane_t1_ParamLimits

0xe607,	// (0x0004b5a8) main_radioblah_info_pane_t1

0x9090,	// (0x00046031) main_radioblah_info_pane_t2_ParamLimits

0x9090,	// (0x00046031) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0004cc47) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0004cc47) main_radioblah_info_pane_t

0xcd6a,	// (0x00049d0b) main_radioblah_rocker_ctrl_pane_g1

0x9140,	// (0x000460e1) main_radioblah_rocker_ctrl_pane_g2

0x9148,	// (0x000460e9) main_radioblah_rocker_ctrl_pane_g3

0x9150,	// (0x000460f1) main_radioblah_rocker_ctrl_pane_g4

0x9158,	// (0x000460f9) main_radioblah_rocker_ctrl_pane_g5

0x9160,	// (0x00046101) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0004cc50) main_radioblah_rocker_ctrl_pane_g

0x8b6f,	// (0x00045b10) main_cset_text2_pane_t1_copy1_ParamLimits

0x73aa,	// (0x0004434b) cam4_image_uncrop_qvga_pane

0x74eb,	// (0x0004448c) vid4_image_uncrop_qcif_pane

0x877b,	// (0x0004571c) cam6_image_uncrop_qvga_pane_ParamLimits

0x877b,	// (0x0004571c) cam6_image_uncrop_qvga_pane

0xde52,	// (0x0004adf3) vid6_image_uncrop_qcif_pane_ParamLimits

0xde52,	// (0x0004adf3) vid6_image_uncrop_qcif_pane

0xa183,	// (0x00047124) bg_popup_preview_window_pane_cp03

0xe109,	// (0x0004b0aa) list_cset_text2_pane

0xe111,	// (0x0004b0b2) main_cset6_text2_pane_g1

0xe119,	// (0x0004b0ba) main_cset6_text2_pane_t1

0x9168,	// (0x00046109) list_cset_text2_pane_t1_ParamLimits

0x9168,	// (0x00046109) list_cset_text2_pane_t1

0xadd9,	// (0x00047d7a) main_radioblah_pane_ParamLimits

0x8ee5,	// (0x00045e86) main_mobtv_info_pane_t3_ParamLimits

0x8ee5,	// (0x00045e86) main_mobtv_info_pane_t3

0x9039,	// (0x00045fda) main_radioblah_pane_g1

0x9064,	// (0x00046005) main_radioblah_info_pane_g1

0x90e5,	// (0x00046086) main_radioblah_info_pane_t3_ParamLimits

0x90e5,	// (0x00046086) main_radioblah_info_pane_t3

0x4222,	// (0x000411c3) highlight_cell_cale_month_pane_ParamLimits

0x4222,	// (0x000411c3) highlight_cell_cale_month_pane

0xa183,	// (0x00047124) main_phob_fisheye_pane

0xd08b,	// (0x0004a02c) scroll_pane_cp0031_ParamLimits

0xd08b,	// (0x0004a02c) scroll_pane_cp0031

0xdf60,	// (0x0004af01) wait_bar_pane_cp08_ParamLimits

0x8957,	// (0x000458f8) cset_list_set_pane_copy1_ParamLimits

0xe641,	// (0x0004b5e2) highlight_cell_cale_month_pane_g1

0x9189,	// (0x0004612a) highlight_cell_cale_month_pane_t1

0xdbdc,	// (0x0004ab7d) list_gen_pane_cp01

0xd82f,	// (0x0004a7d0) scroll_pane_01

0x9197,	// (0x00046138) list_single_double_fisheye_pane

0x15a1,	// (0x0003e542) list_double_fisheye_pane_g1_ParamLimits

0x15a1,	// (0x0003e542) list_double_fisheye_pane_g1

0x15ad,	// (0x0003e54e) list_double_fisheye_pane_g2_ParamLimits

0x15ad,	// (0x0003e54e) list_double_fisheye_pane_g2

0x91a0,	// (0x00046141) list_double_fisheye_pane_g3_ParamLimits

0x91a0,	// (0x00046141) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0004cc5d) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0004cc5d) list_double_fisheye_pane_g

0x15de,	// (0x0003e57f) list_double_fisheye_pane_t1_ParamLimits

0x15de,	// (0x0003e57f) list_double_fisheye_pane_t1

0x15f9,	// (0x0003e59a) list_double_fisheye_pane_t2_ParamLimits

0x15f9,	// (0x0003e59a) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0004cc68) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0004cc68) list_double_fisheye_pane_t

0xa183,	// (0x00047124) main_call5_pane

0x8fac,	// (0x00045f4d) sc_swipe_pane_ParamLimits

0x8fac,	// (0x00045f4d) sc_swipe_pane

0x91b8,	// (0x00046159) call5_image_pane_ParamLimits

0x91b8,	// (0x00046159) call5_image_pane

0x91c8,	// (0x00046169) call5_swipe_1_pane_ParamLimits

0x91c8,	// (0x00046169) call5_swipe_1_pane

0x91d4,	// (0x00046175) call5_swipe_2_pane_ParamLimits

0x91d4,	// (0x00046175) call5_swipe_2_pane

0x91ee,	// (0x0004618f) popup_call5_audio_first_window_ParamLimits

0x91ee,	// (0x0004618f) popup_call5_audio_first_window

0xcfaf,	// (0x00049f50) call5_swipe_1_pane_g1_ParamLimits

0xcfaf,	// (0x00049f50) call5_swipe_1_pane_g1

0xe649,	// (0x0004b5ea) call5_swipe_1_pane_g2_ParamLimits

0xe649,	// (0x0004b5ea) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0004cc6d) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0004cc6d) call5_swipe_1_pane_g

0xe655,	// (0x0004b5f6) call5_swipe_1_pane_t1_ParamLimits

0xe655,	// (0x0004b5f6) call5_swipe_1_pane_t1

0xcfaf,	// (0x00049f50) call5_swipe_2_pane_g1_ParamLimits

0xcfaf,	// (0x00049f50) call5_swipe_2_pane_g1

0xe697,	// (0x0004b638) call5_swipe_2_pane_g2_ParamLimits

0xe697,	// (0x0004b638) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0004cc72) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0004cc72) call5_swipe_2_pane_g

0xe6a3,	// (0x0004b644) call5_swipe_2_pane_t1_ParamLimits

0xe6a3,	// (0x0004b644) call5_swipe_2_pane_t1

0xe6b8,	// (0x0004b659) sc_swipe_pane_g1_ParamLimits

0xe6b8,	// (0x0004b659) sc_swipe_pane_g1

0xe6c5,	// (0x0004b666) sc_swipe_pane_g2_ParamLimits

0xe6c5,	// (0x0004b666) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0004cc77) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0004cc77) sc_swipe_pane_g

0xe6d1,	// (0x0004b672) sc_swipe_pane_t1_ParamLimits

0xe6d1,	// (0x0004b672) sc_swipe_pane_t1

0xa183,	// (0x00047124) main_cmail_launcher_pane

0x91fc,	// (0x0004619d) aid_size_cell_cmail_l_ParamLimits

0x91fc,	// (0x0004619d) aid_size_cell_cmail_l

0x920a,	// (0x000461ab) grid_cmail_l_pane_ParamLimits

0x920a,	// (0x000461ab) grid_cmail_l_pane

0x921a,	// (0x000461bb) cell_cmail_l_pane_ParamLimits

0x921a,	// (0x000461bb) cell_cmail_l_pane

0xe6e6,	// (0x0004b687) cell_cmail_l_pane_g1_ParamLimits

0xe6e6,	// (0x0004b687) cell_cmail_l_pane_g1

0xe6f2,	// (0x0004b693) cell_cmail_l_pane_t1_ParamLimits

0xe6f2,	// (0x0004b693) cell_cmail_l_pane_t1

0xe708,	// (0x0004b6a9) cell_cmail_l_pane_t2_ParamLimits

0xe708,	// (0x0004b6a9) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0004cc7c) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0004cc7c) cell_cmail_l_pane_t

0xadd9,	// (0x00047d7a) grid_highlight_pane_cp018_ParamLimits

0xadd9,	// (0x00047d7a) grid_highlight_pane_cp018

0x2282,	// (0x0003f223) main2_pane_ParamLimits

0x2282,	// (0x0003f223) main2_pane

0xa97b,	// (0x0004791c) popup_sp_fs_action_menu_bg_pane_g1

0xa983,	// (0x00047924) popup_sp_fs_action_menu_bg_pane_g2

0xa98b,	// (0x0004792c) popup_sp_fs_action_menu_bg_pane_g3

0xa993,	// (0x00047934) popup_sp_fs_action_menu_bg_pane_g4

0xa99b,	// (0x0004793c) popup_sp_fs_action_menu_bg_pane_g5

0xa9a3,	// (0x00047944) popup_sp_fs_action_menu_bg_pane_g6

0xa9ab,	// (0x0004794c) popup_sp_fs_action_menu_bg_pane_g7

0xa9b3,	// (0x00047954) popup_sp_fs_action_menu_bg_pane_g8

0xa9bb,	// (0x0004795c) popup_sp_fs_action_menu_bg_pane_g9

0xa9c3,	// (0x00047964) popup_sp_fs_action_menu_bg_pane_g10

0xa9c3,	// (0x00047964) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0004c127) popup_sp_fs_action_menu_bg_pane_g

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t3_g3_g1

0x0d60,	// (0x0003dd01) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d60,	// (0x0003dd01) list_medium_line_x2_t3_g3_g2

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0004c1d5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0004c1d5) list_medium_line_x2_t3_g3_g

0x0d78,	// (0x0003dd19) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d78,	// (0x0003dd19) list_medium_line_x2_t3_g3_t1

0x0d8d,	// (0x0003dd2e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d8d,	// (0x0003dd2e) list_medium_line_x2_t3_g3_t2

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0004c1dc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0004c1dc) list_medium_line_x2_t3_g3_t

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t3_g2_g1

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0004c1e3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0004c1e3) list_medium_line_x2_t3_g2_g

0x0db4,	// (0x0003dd55) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0db4,	// (0x0003dd55) list_medium_line_x2_t3_g2_t1

0x0dc9,	// (0x0003dd6a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0dc9,	// (0x0003dd6a) list_medium_line_x2_t3_g2_t2

0x0ddb,	// (0x0003dd7c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0ddb,	// (0x0003dd7c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0004c1e8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0004c1e8) list_medium_line_x2_t3_g2_t

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t4_g4_g1

0x0df9,	// (0x0003dd9a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0df9,	// (0x0003dd9a) list_medium_line_x2_t4_g4_g2

0x0d60,	// (0x0003dd01) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d60,	// (0x0003dd01) list_medium_line_x2_t4_g4_g3

0x0e05,	// (0x0003dda6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0e05,	// (0x0003dda6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0004c1ef) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0004c1ef) list_medium_line_x2_t4_g4_g

0x0e11,	// (0x0003ddb2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0e11,	// (0x0003ddb2) list_medium_line_x2_t4_g4_t1

0x0e2b,	// (0x0003ddcc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e2b,	// (0x0003ddcc) list_medium_line_x2_t4_g4_t2

0x0e41,	// (0x0003dde2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e41,	// (0x0003dde2) list_medium_line_x2_t4_g4_t3

0x0e56,	// (0x0003ddf7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e56,	// (0x0003ddf7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0004c1f8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0004c1f8) list_medium_line_x2_t4_g4_t

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t2_g4_g1

0x0df9,	// (0x0003dd9a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0df9,	// (0x0003dd9a) list_medium_line_x2_t2_g4_g2

0x0d60,	// (0x0003dd01) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d60,	// (0x0003dd01) list_medium_line_x2_t2_g4_g3

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0004c25f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0004c25f) list_medium_line_x2_t2_g4_g

0x0e68,	// (0x0003de09) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0e68,	// (0x0003de09) list_medium_line_x2_t2_g4_t1

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0004c268) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0004c268) list_medium_line_x2_t2_g4_t

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t2_g3_g1

0x0d60,	// (0x0003dd01) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d60,	// (0x0003dd01) list_medium_line_x2_t2_g3_g2

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0004c1d5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0004c1d5) list_medium_line_x2_t2_g3_g

0x0e7d,	// (0x0003de1e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0e7d,	// (0x0003de1e) list_medium_line_x2_t2_g3_t1

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0004c26d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0004c26d) list_medium_line_x2_t2_g3_t

0x4403,	// (0x000413a4) main_sp_fs_list_pane_ParamLimits

0x4403,	// (0x000413a4) main_sp_fs_list_pane

0x440f,	// (0x000413b0) sp_fs_scroll_pane_ParamLimits

0x440f,	// (0x000413b0) sp_fs_scroll_pane

0x0eab,	// (0x0003de4c) list_medium_line_x2_t3_t1

0x0ebb,	// (0x0003de5c) list_medium_line_x2_t3_t2

0x0ec9,	// (0x0003de6a) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0004c2b8) list_medium_line_x2_t3_t

0x0ed7,	// (0x0003de78) list_medium_line_x3_t4_t1

0x0ee7,	// (0x0003de88) list_medium_line_x3_t4_t2

0x0ef5,	// (0x0003de96) list_medium_line_x3_t4_t3

0x0ec9,	// (0x0003de6a) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0004c2bf) list_medium_line_x3_t4_t

0x0f03,	// (0x0003dea4) list_medium_line_x4_t5_t1

0x0f13,	// (0x0003deb4) list_medium_line_x4_t5_t2

0x0ef5,	// (0x0003de96) list_medium_line_x4_t5_t3

0x0f21,	// (0x0003dec2) list_medium_line_x4_t5_t4

0x0ec9,	// (0x0003de6a) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0004c2c8) list_medium_line_x4_t5_t

0x0d54,	// (0x0003dcf5) list_medium_line_t4_g4_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_t4_g4_g1

0x0e05,	// (0x0003dda6) list_medium_line_t4_g4_g2_ParamLimits

0x0e05,	// (0x0003dda6) list_medium_line_t4_g4_g2

0x0f2f,	// (0x0003ded0) list_medium_line_t4_g4_g3_ParamLimits

0x0f2f,	// (0x0003ded0) list_medium_line_t4_g4_g3

0x0d6c,	// (0x0003dd0d) list_medium_line_t4_g4_g4_ParamLimits

0x0d6c,	// (0x0003dd0d) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0004c2d3) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0004c2d3) list_medium_line_t4_g4_g

0x0f3b,	// (0x0003dedc) list_medium_line_t4_g4_t1_ParamLimits

0x0f3b,	// (0x0003dedc) list_medium_line_t4_g4_t1

0x0f50,	// (0x0003def1) list_medium_line_t4_g4_t2_ParamLimits

0x0f50,	// (0x0003def1) list_medium_line_t4_g4_t2

0x0f66,	// (0x0003df07) list_medium_line_t4_g4_t3_ParamLimits

0x0f66,	// (0x0003df07) list_medium_line_t4_g4_t3

0x0d9f,	// (0x0003dd40) list_medium_line_t4_g4_t4_ParamLimits

0x0d9f,	// (0x0003dd40) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0004c2dc) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0004c2dc) list_medium_line_t4_g4_t

0x4526,	// (0x000414c7) chi_dic_find_pane_g1

0x53a8,	// (0x00042349) main_tport_pane

0x1236,	// (0x0003e1d7) list_medium_line_plain_t1

0x1244,	// (0x0003e1e5) list_medium_line_t2_g2_g1_ParamLimits

0x1244,	// (0x0003e1e5) list_medium_line_t2_g2_g1

0x1250,	// (0x0003e1f1) list_medium_line_t2_g2_g2_ParamLimits

0x1250,	// (0x0003e1f1) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0004c9b4) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0004c9b4) list_medium_line_t2_g2_g

0x125c,	// (0x0003e1fd) list_medium_line_t2_g2_t1_ParamLimits

0x125c,	// (0x0003e1fd) list_medium_line_t2_g2_t1

0x1276,	// (0x0003e217) list_medium_line_t2_g2_t2_ParamLimits

0x1276,	// (0x0003e217) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0004c9b9) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0004c9b9) list_medium_line_t2_g2_t

0x1496,	// (0x0003e437) aid_sp_fs_list_icon_a_sm

0x149e,	// (0x0003e43f) aid_sp_fs_list_icon_d

0x14a6,	// (0x0003e447) aid_sp_fs_text_primary

0xe968,	// (0x0004b909) aid_sp_fs_text_secondary

0x8443,	// (0x000453e4) list_medium_line

0x8443,	// (0x000453e4) list_medium_line_g2

0x8443,	// (0x000453e4) list_medium_line_g3

0x8443,	// (0x000453e4) list_medium_line_plain

0x8443,	// (0x000453e4) list_medium_line_plain_t2

0x8443,	// (0x000453e4) list_medium_line_plain_t3

0x8443,	// (0x000453e4) list_medium_line_right_icon

0x8443,	// (0x000453e4) list_medium_line_right_iconx2

0x8443,	// (0x000453e4) list_medium_line_t2

0x8443,	// (0x000453e4) list_medium_line_t2_g2

0x8443,	// (0x000453e4) list_medium_line_t2_g3

0x8443,	// (0x000453e4) list_medium_line_t2_right_icon

0x8443,	// (0x000453e4) list_medium_line_t2_right_iconx2

0x8443,	// (0x000453e4) list_medium_line_t3

0x8443,	// (0x000453e4) list_medium_line_t3_g2

0x8443,	// (0x000453e4) list_medium_line_t3_g3

0x8443,	// (0x000453e4) list_medium_line_t3_right_iconx2

0x844c,	// (0x000453ed) list_medium_line_t4_g4

0x8455,	// (0x000453f6) list_medium_line_x2

0x8455,	// (0x000453f6) list_medium_line_x2_t2_g2

0x8455,	// (0x000453f6) list_medium_line_x2_t2_g3

0x8455,	// (0x000453f6) list_medium_line_x2_t2_g4

0x8455,	// (0x000453f6) list_medium_line_x2_t3

0x8455,	// (0x000453f6) list_medium_line_x2_t3_g2

0x8455,	// (0x000453f6) list_medium_line_x2_t3_g3

0x8455,	// (0x000453f6) list_medium_line_x2_t3_g4

0x8455,	// (0x000453f6) list_medium_line_x2_t4_g2

0x8455,	// (0x000453f6) list_medium_line_x2_t4_g4

0x845e,	// (0x000453ff) list_medium_line_x3

0x845e,	// (0x000453ff) list_medium_line_x3_t4

0x845e,	// (0x000453ff) list_medium_line_x3_t4_g4

0x844c,	// (0x000453ed) list_medium_line_x4_t4

0x844c,	// (0x000453ed) list_medium_line_x4_t4_g7

0x844c,	// (0x000453ed) list_medium_line_x4_t5

0x14af,	// (0x0003e450) list_single_fs_dyc_pane_ParamLimits

0x14af,	// (0x0003e450) list_single_fs_dyc_pane

0x0d54,	// (0x0003dcf5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x4_t4_g7_g1

0x14cb,	// (0x0003e46c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x14cb,	// (0x0003e46c) list_medium_line_x4_t4_g7_g2

0x14d7,	// (0x0003e478) list_medium_line_x4_t4_g7_g3_ParamLimits

0x14d7,	// (0x0003e478) list_medium_line_x4_t4_g7_g3

0x14e6,	// (0x0003e487) list_medium_line_x4_t4_g7_g4_ParamLimits

0x14e6,	// (0x0003e487) list_medium_line_x4_t4_g7_g4

0x14f2,	// (0x0003e493) list_medium_line_x4_t4_g7_g5_ParamLimits

0x14f2,	// (0x0003e493) list_medium_line_x4_t4_g7_g5

0x1501,	// (0x0003e4a2) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1501,	// (0x0003e4a2) list_medium_line_x4_t4_g7_g6

0x1510,	// (0x0003e4b1) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1510,	// (0x0003e4b1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0004cb84) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0004cb84) list_medium_line_x4_t4_g7_g

0x151c,	// (0x0003e4bd) list_medium_line_x4_t4_g7_t1_ParamLimits

0x151c,	// (0x0003e4bd) list_medium_line_x4_t4_g7_t1

0x1531,	// (0x0003e4d2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1531,	// (0x0003e4d2) list_medium_line_x4_t4_g7_t2

0x1546,	// (0x0003e4e7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1546,	// (0x0003e4e7) list_medium_line_x4_t4_g7_t3

0x155b,	// (0x0003e4fc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x155b,	// (0x0003e4fc) list_medium_line_x4_t4_g7_t4

0x156d,	// (0x0003e50e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x156d,	// (0x0003e50e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0004cb93) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0004cb93) list_medium_line_x4_t4_g7_t

0x157f,	// (0x0003e520) list_single_dyc_row_pane_ParamLimits

0x157f,	// (0x0003e520) list_single_dyc_row_pane

0x91ac,	// (0x0004614d) call5_gesture_pane_ParamLimits

0x91ac,	// (0x0004614d) call5_gesture_pane

0x91e0,	// (0x00046181) call5_windows_pane_ParamLimits

0x91e0,	// (0x00046181) call5_windows_pane

0x9233,	// (0x000461d4) call5_swipe_1_pane_cp_ParamLimits

0x9233,	// (0x000461d4) call5_swipe_1_pane_cp

0x923f,	// (0x000461e0) call5_swipe_2_pane_cp_ParamLimits

0x923f,	// (0x000461e0) call5_swipe_2_pane_cp

0xaaa7,	// (0x00047a48) call5_image_pane_cp

0x924b,	// (0x000461ec) popup_call5_audio_first_window_cp_ParamLimits

0x924b,	// (0x000461ec) popup_call5_audio_first_window_cp

0xe6b8,	// (0x0004b659) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6b8,	// (0x0004b659) call5_swipe_1_pane_g1_cp

0xe725,	// (0x0004b6c6) call5_swipe_1_pane_g2_cp

0xe6d1,	// (0x0004b672) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6d1,	// (0x0004b672) call5_swipe_1_pane_t1_cp

0xe6b8,	// (0x0004b659) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6b8,	// (0x0004b659) call5_swipe_2_pane_g1_cp

0xe72d,	// (0x0004b6ce) call5_swipe_2_pane_g2_cp

0xe735,	// (0x0004b6d6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe735,	// (0x0004b6d6) call5_swipe_2_pane_t1_cp

0xadd9,	// (0x00047d7a) main_sp_fs_email_pane

0xe74a,	// (0x0004b6eb) main_sp_fs_listscroll_pane_te

0x161b,	// (0x0003e5bc) popup_sp_fs_action_menu_pane_ParamLimits

0x161b,	// (0x0003e5bc) popup_sp_fs_action_menu_pane

0xcd6a,	// (0x00049d0b) bg_sp_fs_ctrlbar_pane_g1

0xe753,	// (0x0004b6f4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe75c,	// (0x0004b6fd) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe765,	// (0x0004b706) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd6a,	// (0x00049d0b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0004cc81) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb4f,	// (0x00049af0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb4f,	// (0x00049af0) bg_sp_fs_ctrlbar_ddmenu_pane

0xe76e,	// (0x0004b70f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe76e,	// (0x0004b70f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe77a,	// (0x0004b71b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe77a,	// (0x0004b71b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0004cc8a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0004cc8a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe786,	// (0x0004b727) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe786,	// (0x0004b727) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x165d,	// (0x0003e5fe) list_medium_line_t2_right_icon_g1

0x1665,	// (0x0003e606) list_medium_line_t2_right_icon_t1

0x1675,	// (0x0003e616) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0004cc8f) list_medium_line_t2_right_icon_t

0xc962,	// (0x00049903) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc962,	// (0x00049903) bg_sp_fs_ctrlbar_pane

0x929c,	// (0x0004623d) main_sp_fs_ctrlbar_button_pane_cp01

0x92a4,	// (0x00046245) main_sp_fs_ctrlbar_ddmenu_pane

0xe7d8,	// (0x0004b779) main_sp_fs_ctrlbar_pane_g1

0xe7e4,	// (0x0004b785) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0004cc94) main_sp_fs_ctrlbar_pane_g

0xe7f0,	// (0x0004b791) main_sp_fs_ctrlbar_pane_t1

0x92ae,	// (0x0004624f) main_sp_fs_ctrlbar_pane

0x92c4,	// (0x00046265) main_sp_fs_listscroll_pane_te_cp01

0x1683,	// (0x0003e624) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1683,	// (0x0003e624) popup_sp_fs_action_menu_pane_cp01

0xadd9,	// (0x00047d7a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xadd9,	// (0x00047d7a) bg_sp_fs_highlight_list_pane_cp01

0x16ad,	// (0x0003e64e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x16ad,	// (0x0003e64e) sp_fs_action_menu_list_gene_pane_g1

0xe820,	// (0x0004b7c1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe820,	// (0x0004b7c1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0004cc9e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0004cc9e) sp_fs_action_menu_list_gene_pane_g

0x16bc,	// (0x0003e65d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x16bc,	// (0x0003e65d) sp_fs_action_menu_list_gene_pane_t1

0x16d4,	// (0x0003e675) sp_fs_action_menu_list_gene_pane_ParamLimits

0x16d4,	// (0x0003e675) sp_fs_action_menu_list_gene_pane

0xe82d,	// (0x0004b7ce) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe82d,	// (0x0004b7ce) popup_sp_fs_action_menu_bg_pane

0x16f3,	// (0x0003e694) sp_fs_action_menu_list_pane_ParamLimits

0x16f3,	// (0x0003e694) sp_fs_action_menu_list_pane

0x1713,	// (0x0003e6b4) sp_fs_scroll_pane_cp01_ParamLimits

0x1713,	// (0x0003e6b4) sp_fs_scroll_pane_cp01

0x1739,	// (0x0003e6da) list_medium_line_plain_t2_t1

0x1749,	// (0x0003e6ea) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0004cca3) list_medium_line_plain_t2_t

0x1757,	// (0x0003e6f8) list_medium_line_plain_t3_t1

0x1767,	// (0x0003e708) list_medium_line_plain_t3_t2

0x1775,	// (0x0003e716) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0004cca8) list_medium_line_plain_t3_t

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t2_g2_g1

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0004c1e3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0004c1e3) list_medium_line_x2_t2_g2_g

0x0f3b,	// (0x0003dedc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f3b,	// (0x0003dedc) list_medium_line_x2_t2_g2_t1

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0004ccaf) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0004ccaf) list_medium_line_x2_t2_g2_t

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t4_g2_g1

0x1783,	// (0x0003e724) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1783,	// (0x0003e724) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0004ccb4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0004ccb4) list_medium_line_x2_t4_g2_g

0x1795,	// (0x0003e736) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1795,	// (0x0003e736) list_medium_line_x2_t4_g2_t1

0x17af,	// (0x0003e750) list_medium_line_x2_t4_g2_t2_ParamLimits

0x17af,	// (0x0003e750) list_medium_line_x2_t4_g2_t2

0x17c5,	// (0x0003e766) list_medium_line_x2_t4_g2_t3_ParamLimits

0x17c5,	// (0x0003e766) list_medium_line_x2_t4_g2_t3

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0004ccb9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0004ccb9) list_medium_line_x2_t4_g2_t

0x17da,	// (0x0003e77b) list_medium_line_t3_right_iconx2_g1

0x165d,	// (0x0003e5fe) list_medium_line_t3_right_iconx2_g2

0x17e2,	// (0x0003e783) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0004ccc2) list_medium_line_t3_right_iconx2_g

0x17ea,	// (0x0003e78b) list_medium_line_t3_right_iconx2_t1

0x17fa,	// (0x0003e79b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0004ccc9) list_medium_line_t3_right_iconx2_t

0x0d54,	// (0x0003dcf5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x3_t4_g4_g1

0x0d60,	// (0x0003dd01) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d60,	// (0x0003dd01) list_medium_line_x3_t4_g4_g2

0x0e05,	// (0x0003dda6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0e05,	// (0x0003dda6) list_medium_line_x3_t4_g4_g3

0x1808,	// (0x0003e7a9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1808,	// (0x0003e7a9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0004ccce) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0004ccce) list_medium_line_x3_t4_g4_g

0x1814,	// (0x0003e7b5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1814,	// (0x0003e7b5) list_medium_line_x3_t4_g4_t1

0x182b,	// (0x0003e7cc) list_medium_line_x3_t4_g4_t2_ParamLimits

0x182b,	// (0x0003e7cc) list_medium_line_x3_t4_g4_t2

0x1840,	// (0x0003e7e1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1840,	// (0x0003e7e1) list_medium_line_x3_t4_g4_t3

0x1855,	// (0x0003e7f6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1855,	// (0x0003e7f6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0004ccd7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0004ccd7) list_medium_line_x3_t4_g4_t

0x1872,	// (0x0003e813) list_single_dyc_row_text_pane_t1_ParamLimits

0x1872,	// (0x0003e813) list_single_dyc_row_text_pane_t1

0x18a9,	// (0x0003e84a) list_single_dyc_row_text_pane_t2_ParamLimits

0x18a9,	// (0x0003e84a) list_single_dyc_row_text_pane_t2

0x191f,	// (0x0003e8c0) list_single_dyc_row_text_pane_t3_ParamLimits

0x191f,	// (0x0003e8c0) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0004cce0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0004cce0) list_single_dyc_row_text_pane_t

0x19f0,	// (0x0003e991) list_single_dyc_row_pane_g1_ParamLimits

0x19f0,	// (0x0003e991) list_single_dyc_row_pane_g1

0x19fc,	// (0x0003e99d) list_single_dyc_row_pane_g2_ParamLimits

0x19fc,	// (0x0003e99d) list_single_dyc_row_pane_g2

0x1a08,	// (0x0003e9a9) list_single_dyc_row_pane_g3_ParamLimits

0x1a08,	// (0x0003e9a9) list_single_dyc_row_pane_g3

0x1a14,	// (0x0003e9b5) list_single_dyc_row_pane_g4_ParamLimits

0x1a14,	// (0x0003e9b5) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0004cced) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0004cced) list_single_dyc_row_pane_g

0x1a20,	// (0x0003e9c1) list_single_dyc_row_text_pane_ParamLimits

0x1a20,	// (0x0003e9c1) list_single_dyc_row_text_pane

0xa183,	// (0x00047124) bg_sp_fs_scroll_pane

0xe83b,	// (0x0004b7dc) thumb_sp_fs_scroll_pane

0x1244,	// (0x0003e1e5) list_medium_line_g1_ParamLimits

0x1244,	// (0x0003e1e5) list_medium_line_g1

0x1a3f,	// (0x0003e9e0) list_medium_line_t1_ParamLimits

0x1a3f,	// (0x0003e9e0) list_medium_line_t1

0x0d54,	// (0x0003dcf5) list_medium_line_x2_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x2_g1

0x0d60,	// (0x0003dd01) list_medium_line_x2_g2_ParamLimits

0x0d60,	// (0x0003dd01) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0004ccf6) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0004ccf6) list_medium_line_x2_g

0x1a54,	// (0x0003e9f5) list_medium_line_x2_t1_ParamLimits

0x1a54,	// (0x0003e9f5) list_medium_line_x2_t1

0x0d54,	// (0x0003dcf5) list_medium_line_x3_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x3_g1

0x0d60,	// (0x0003dd01) list_medium_line_x3_g2_ParamLimits

0x0d60,	// (0x0003dd01) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0004ccf6) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0004ccf6) list_medium_line_x3_g

0x1a54,	// (0x0003e9f5) list_medium_line_x3_t1_ParamLimits

0x1a54,	// (0x0003e9f5) list_medium_line_x3_t1

0xe844,	// (0x0004b7e5) thumb_sp_fs_scroll_pane_g1

0xe84d,	// (0x0004b7ee) thumb_sp_fs_scroll_pane_g2

0xe856,	// (0x0004b7f7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0004ccfb) thumb_sp_fs_scroll_pane_g

0xe844,	// (0x0004b7e5) bg_sp_fs_scroll_pane_g1

0xe84d,	// (0x0004b7ee) bg_sp_fs_scroll_pane_g2

0xe856,	// (0x0004b7f7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0004ccfb) bg_sp_fs_scroll_pane_g

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d54,	// (0x0003dcf5) list_medium_line_x2_t3_g4_g1

0x0df9,	// (0x0003dd9a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0df9,	// (0x0003dd9a) list_medium_line_x2_t3_g4_g2

0x0d60,	// (0x0003dd01) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d60,	// (0x0003dd01) list_medium_line_x2_t3_g4_g3

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d6c,	// (0x0003dd0d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0004c25f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0004c25f) list_medium_line_x2_t3_g4_g

0x1a6a,	// (0x0003ea0b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1a6a,	// (0x0003ea0b) list_medium_line_x2_t3_g4_t1

0x1a80,	// (0x0003ea21) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1a80,	// (0x0003ea21) list_medium_line_x2_t3_g4_t2

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d9f,	// (0x0003dd40) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0004cd02) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0004cd02) list_medium_line_x2_t3_g4_t

0x1244,	// (0x0003e1e5) list_medium_line_g2_g1_ParamLimits

0x1244,	// (0x0003e1e5) list_medium_line_g2_g1

0x1250,	// (0x0003e1f1) list_medium_line_g2_g2_ParamLimits

0x1250,	// (0x0003e1f1) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0004c9b4) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0004c9b4) list_medium_line_g2_g

0x1a9a,	// (0x0003ea3b) list_medium_line_g2_t1_ParamLimits

0x1a9a,	// (0x0003ea3b) list_medium_line_g2_t1

0x1244,	// (0x0003e1e5) list_medium_line_t3_g2_g1_ParamLimits

0x1244,	// (0x0003e1e5) list_medium_line_t3_g2_g1

0x1250,	// (0x0003e1f1) list_medium_line_t3_g2_g2_ParamLimits

0x1250,	// (0x0003e1f1) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0004c9b4) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0004c9b4) list_medium_line_t3_g2_g

0x1aaf,	// (0x0003ea50) list_medium_line_t3_g2_t1_ParamLimits

0x1aaf,	// (0x0003ea50) list_medium_line_t3_g2_t1

0x1ac9,	// (0x0003ea6a) list_medium_line_t3_g2_t2_ParamLimits

0x1ac9,	// (0x0003ea6a) list_medium_line_t3_g2_t2

0x1adf,	// (0x0003ea80) list_medium_line_t3_g2_t3_ParamLimits

0x1adf,	// (0x0003ea80) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0004cd09) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0004cd09) list_medium_line_t3_g2_t

0x165d,	// (0x0003e5fe) list_medium_line_right_icon_g1

0x1af5,	// (0x0003ea96) list_medium_line_right_icon_t1

0x1244,	// (0x0003e1e5) list_medium_line_t2_g1_ParamLimits

0x1244,	// (0x0003e1e5) list_medium_line_t2_g1

0x1b03,	// (0x0003eaa4) list_medium_line_t2_t1_ParamLimits

0x1b03,	// (0x0003eaa4) list_medium_line_t2_t1

0x1b1d,	// (0x0003eabe) list_medium_line_t2_t2_ParamLimits

0x1b1d,	// (0x0003eabe) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0004cd10) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0004cd10) list_medium_line_t2_t

0x1244,	// (0x0003e1e5) list_medium_line_t3_g1_ParamLimits

0x1244,	// (0x0003e1e5) list_medium_line_t3_g1

0x1b32,	// (0x0003ead3) list_medium_line_t3_t1_ParamLimits

0x1b32,	// (0x0003ead3) list_medium_line_t3_t1

0x1b4c,	// (0x0003eaed) list_medium_line_t3_t2_ParamLimits

0x1b4c,	// (0x0003eaed) list_medium_line_t3_t2

0x1b62,	// (0x0003eb03) list_medium_line_t3_t3_ParamLimits

0x1b62,	// (0x0003eb03) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0004cd15) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0004cd15) list_medium_line_t3_t

0x1244,	// (0x0003e1e5) list_medium_line_g3_g1_ParamLimits

0x1244,	// (0x0003e1e5) list_medium_line_g3_g1

0x1b77,	// (0x0003eb18) list_medium_line_g3_g2_ParamLimits

0x1b77,	// (0x0003eb18) list_medium_line_g3_g2

0x1250,	// (0x0003e1f1) list_medium_line_g3_g3_ParamLimits

0x1250,	// (0x0003e1f1) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0004cd1c) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0004cd1c) list_medium_line_g3_g

0x1b83,	// (0x0003eb24) list_medium_line_g3_t1_ParamLimits

0x1b83,	// (0x0003eb24) list_medium_line_g3_t1

0x1244,	// (0x0003e1e5) list_medium_line_t2_g3_g1_ParamLimits

0x1244,	// (0x0003e1e5) list_medium_line_t2_g3_g1

0x1b77,	// (0x0003eb18) list_medium_line_t2_g3_g2_ParamLimits

0x1b77,	// (0x0003eb18) list_medium_line_t2_g3_g2

0x1250,	// (0x0003e1f1) list_medium_line_t2_g3_g3_ParamLimits

0x1250,	// (0x0003e1f1) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0004cd1c) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0004cd1c) list_medium_line_t2_g3_g

0x1b98,	// (0x0003eb39) list_medium_line_t2_g3_t1_ParamLimits

0x1b98,	// (0x0003eb39) list_medium_line_t2_g3_t1

0x1bb2,	// (0x0003eb53) list_medium_line_t2_g3_t2_ParamLimits

0x1bb2,	// (0x0003eb53) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0004cd23) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0004cd23) list_medium_line_t2_g3_t

0x1244,	// (0x0003e1e5) list_medium_line_t3_g3_g1_ParamLimits

0x1244,	// (0x0003e1e5) list_medium_line_t3_g3_g1

0x1b77,	// (0x0003eb18) list_medium_line_t3_g3_g2_ParamLimits

0x1b77,	// (0x0003eb18) list_medium_line_t3_g3_g2

0x1250,	// (0x0003e1f1) list_medium_line_t3_g3_g3_ParamLimits

0x1250,	// (0x0003e1f1) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0004cd1c) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0004cd1c) list_medium_line_t3_g3_g

0x1bc8,	// (0x0003eb69) list_medium_line_t3_g3_t1_ParamLimits

0x1bc8,	// (0x0003eb69) list_medium_line_t3_g3_t1

0x1be1,	// (0x0003eb82) list_medium_line_t3_g3_t2_ParamLimits

0x1be1,	// (0x0003eb82) list_medium_line_t3_g3_t2

0x1bf7,	// (0x0003eb98) list_medium_line_t3_g3_t3_ParamLimits

0x1bf7,	// (0x0003eb98) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0004cd28) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0004cd28) list_medium_line_t3_g3_t

0x17da,	// (0x0003e77b) list_medium_line_right_iconx2_g1

0x165d,	// (0x0003e5fe) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0004cd2f) list_medium_line_right_iconx2_g

0x1c0d,	// (0x0003ebae) list_medium_line_right_iconx2_t1

0x17da,	// (0x0003e77b) list_medium_line_t2_right_iconx2_g1

0x165d,	// (0x0003e5fe) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0004cd2f) list_medium_line_t2_right_iconx2_g

0x1c1b,	// (0x0003ebbc) list_medium_line_t2_right_iconx2_t1

0x1c2b,	// (0x0003ebcc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0004cd34) list_medium_line_t2_right_iconx2_t

0x1c39,	// (0x0003ebda) list_medium_line_x4_t4_t1

0x1c47,	// (0x0003ebe8) list_medium_line_x4_t4_t2

0x1c57,	// (0x0003ebf8) list_medium_line_x4_t4_t3

0x1c67,	// (0x0003ec08) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0004cd39) list_medium_line_x4_t4_t

0x92ff,	// (0x000462a0) tport_appsw_pane_ParamLimits

0x92ff,	// (0x000462a0) tport_appsw_pane

0x930d,	// (0x000462ae) tport_contact_pane_ParamLimits

0x930d,	// (0x000462ae) tport_contact_pane

0x931d,	// (0x000462be) tport_listscroll_pane_ParamLimits

0x931d,	// (0x000462be) tport_listscroll_pane

0x932d,	// (0x000462ce) cell_tport_appsw_pane_ParamLimits

0x932d,	// (0x000462ce) cell_tport_appsw_pane

0xd014,	// (0x00049fb5) tport_appsw_pane_g1_ParamLimits

0xd014,	// (0x00049fb5) tport_appsw_pane_g1

0xe85f,	// (0x0004b800) tport_contact_pane_g1

0xe868,	// (0x0004b809) tport_contact_pane_t1

0xe876,	// (0x0004b817) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0004cd42) tport_contact_pane_t

0xe884,	// (0x0004b825) list_tport_pane

0xe88d,	// (0x0004b82e) scroll_pane_cp_030

0x9360,	// (0x00046301) cell_tport_appsw_pane_g1

0x9370,	// (0x00046311) cell_tport_appsw_pane_t1

0x937e,	// (0x0004631f) grid_highlight_pane_cp019

0x9386,	// (0x00046327) list_tport_double_graphic_pane_ParamLimits

0x9386,	// (0x00046327) list_tport_double_graphic_pane

0xadd9,	// (0x00047d7a) list_highlight_pane_cp023_ParamLimits

0xadd9,	// (0x00047d7a) list_highlight_pane_cp023

0x9397,	// (0x00046338) list_tport_double_graphic_pane_g1_ParamLimits

0x9397,	// (0x00046338) list_tport_double_graphic_pane_g1

0x93a4,	// (0x00046345) list_tport_double_graphic_pane_t1_ParamLimits

0x93a4,	// (0x00046345) list_tport_double_graphic_pane_t1

0x93b9,	// (0x0004635a) list_tport_double_graphic_pane_t2_ParamLimits

0x93b9,	// (0x0004635a) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0004cd4e) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0004cd4e) list_tport_double_graphic_pane_t

0xa183,	// (0x00047124) main_cale_note_pane

0x7746,	// (0x000446e7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7746,	// (0x000446e7) cell_vitu2_function_top_wide_pane_cp01

0x8ef9,	// (0x00045e9a) wait_bar_pane_cp05_ParamLimits

0xadd9,	// (0x00047d7a) listscroll_cmail_pane

0xe896,	// (0x0004b837) list_cmail_pane

0x93cb,	// (0x0004636c) list_cmail_body_pane

0x93f3,	// (0x00046394) list_single_cmail_header_caption_pane

0x941f,	// (0x000463c0) list_single_cmail_header_detail_pane_ParamLimits

0x941f,	// (0x000463c0) list_single_cmail_header_detail_pane

0xe8a6,	// (0x0004b847) list_single_cmail_header_caption_pane_t1

0x1c77,	// (0x0003ec18) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1c77,	// (0x0003ec18) list_single_cmail_header_detail_pane_g1

0x1c8d,	// (0x0003ec2e) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1c8d,	// (0x0003ec2e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0004cd53) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0004cd53) list_single_cmail_header_detail_pane_g

0x1c99,	// (0x0003ec3a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1c99,	// (0x0003ec3a) list_single_cmail_header_detail_pane_t1

0x1cf9,	// (0x0003ec9a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1cf9,	// (0x0003ec9a) list_single_cmail_header_editor_pane_bg

0xe339,	// (0x0004b2da) list_cmail_body_pane_g1

0xe8ca,	// (0x0004b86b) list_cmail_body_pane_t1

0xd715,	// (0x0004a6b6) list_single_cmail_header_editor_pane_bg_g1

0xad00,	// (0x00047ca1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd725,	// (0x0004a6c6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd71d,	// (0x0004a6be) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd96d,	// (0x0004a90e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd745,	// (0x0004a6e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd735,	// (0x0004a6d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd73d,	// (0x0004a6de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xace0,	// (0x00047c81) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9458,	// (0x000463f9) calenote_gesture_pane_ParamLimits

0x9458,	// (0x000463f9) calenote_gesture_pane

0x9472,	// (0x00046413) calenote_window_pane_ParamLimits

0x9472,	// (0x00046413) calenote_window_pane

0xe8d8,	// (0x0004b879) popup_note_window_cp01

0x948a,	// (0x0004642b) calenote_swipe_1_pane_ParamLimits

0x948a,	// (0x0004642b) calenote_swipe_1_pane

0x923f,	// (0x000461e0) calenote_swipe_2_pane_ParamLimits

0x923f,	// (0x000461e0) calenote_swipe_2_pane

0xe6b8,	// (0x0004b659) calenote_swipe_1_pane_g1_ParamLimits

0xe6b8,	// (0x0004b659) calenote_swipe_1_pane_g1

0xe6c5,	// (0x0004b666) calenote_swipe_1_pane_g2_ParamLimits

0xe6c5,	// (0x0004b666) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0004cc77) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0004cc77) calenote_swipe_1_pane_g

0xe8ea,	// (0x0004b88b) calenote_swipe_1_pane_t1_ParamLimits

0xe8ea,	// (0x0004b88b) calenote_swipe_1_pane_t1

0xe6b8,	// (0x0004b659) calenote_swipe_2_pane_g1_ParamLimits

0xe6b8,	// (0x0004b659) calenote_swipe_2_pane_g1

0xe909,	// (0x0004b8aa) calenote_swipe_2_pane_g2_ParamLimits

0xe909,	// (0x0004b8aa) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0004cd5f) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0004cd5f) calenote_swipe_2_pane_g

0xe915,	// (0x0004b8b6) calenote_swipe_2_pane_t1_ParamLimits

0xe915,	// (0x0004b8b6) calenote_swipe_2_pane_t1

0xa183,	// (0x00047124) main_mup_navstr_pane

0x63a4,	// (0x00043345) main_mup3_pane_t7_ParamLimits

0x63a4,	// (0x00043345) main_mup3_pane_t7

0x6deb,	// (0x00043d8c) main_mp4_pane_g6_ParamLimits

0x6deb,	// (0x00043d8c) main_mp4_pane_g6

0x717b,	// (0x0004411c) main_image3_pane_t4_ParamLimits

0x717b,	// (0x0004411c) main_image3_pane_t4

0x949d,	// (0x0004643e) popup_navstr_preview_pane_ParamLimits

0x949d,	// (0x0004643e) popup_navstr_preview_pane

0x94a9,	// (0x0004644a) scroll_navstr_pane_ParamLimits

0x94a9,	// (0x0004644a) scroll_navstr_pane

0xa183,	// (0x00047124) bg_popup_preview_window_pane_cp04

0xe93c,	// (0x0004b8dd) popup_navstr_preview_pane_t1

0x94b5,	// (0x00046456) scroll_navstr_pane_g1_ParamLimits

0x94b5,	// (0x00046456) scroll_navstr_pane_g1

0x94c2,	// (0x00046463) scroll_navstr_pane_t1_ParamLimits

0x94c2,	// (0x00046463) scroll_navstr_pane_t1

0xe8e1,	// (0x0004b882) bg_button_pane_cp014

0xe8e1,	// (0x0004b882) bg_button_pane_cp030

0x15c1,	// (0x0003e562) list_double_fisheye_pane_g4_ParamLimits

0x15c1,	// (0x0003e562) list_double_fisheye_pane_g4

0x15cd,	// (0x0003e56e) list_double_fisheye_pane_g5_ParamLimits

0x15cd,	// (0x0003e56e) list_double_fisheye_pane_g5

0xd2db,	// (0x0004a27c) sp_fs_scroll_pane_cp03

0xe7d8,	// (0x0004b779) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7e4,	// (0x0004b785) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0004cc94) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7f0,	// (0x0004b791) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe89e,	// (0x0004b83f) sp_fs_scroll_pane_cp02

0xa9e6,	// (0x00047987) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9e6,	// (0x00047987) popup_sp_fs_calendar_preview_list_single_pane

0xa183,	// (0x00047124) main_cam6_pano_pane

0xadd9,	// (0x00047d7a) main_mup3_pane_ParamLimits

0xa183,	// (0x00047124) main_phacti_pane

0x8dce,	// (0x00045d6f) bg_button_pane_cp11

0x8de6,	// (0x00045d87) main_mobtv_info_pane_g2_ParamLimits

0x8de6,	// (0x00045d87) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0004cbf4) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0004cbf4) main_mobtv_info_pane_g

0x8f98,	// (0x00045f39) sc_clock_pane_t5_ParamLimits

0x8f98,	// (0x00045f39) sc_clock_pane_t5

0x9039,	// (0x00045fda) main_radioblah_pane_g1_ParamLimits

0xe5d7,	// (0x0004b578) main_radioblah_pane_t3_ParamLimits

0xe5d7,	// (0x0004b578) main_radioblah_pane_t3

0xe5ef,	// (0x0004b590) main_radioblah_pane_t4_ParamLimits

0xe5ef,	// (0x0004b590) main_radioblah_pane_t4

0x9057,	// (0x00045ff8) main_radioblah_text_pane_ParamLimits

0x9057,	// (0x00045ff8) main_radioblah_text_pane

0x9064,	// (0x00046005) main_radioblah_info_pane_g1_ParamLimits

0x90f9,	// (0x0004609a) main_radioblah_info_pane_t4_ParamLimits

0x90f9,	// (0x0004609a) main_radioblah_info_pane_t4

0xadd9,	// (0x00047d7a) main_sp_fs_calendar_pane

0x94d4,	// (0x00046475) main_phacti_pane_g1

0x94dc,	// (0x0004647d) phacti_note_pane_ParamLimits

0x94dc,	// (0x0004647d) phacti_note_pane

0xe953,	// (0x0004b8f4) phacti_term_pane_ParamLimits

0xe953,	// (0x0004b8f4) phacti_term_pane

0xe971,	// (0x0004b912) phacti_note_pane_t1_ParamLimits

0xe971,	// (0x0004b912) phacti_note_pane_t1

0x1d10,	// (0x0003ecb1) phacti_term_pane_g1

0x1d18,	// (0x0003ecb9) phacti_term_pane_t1_ParamLimits

0x1d18,	// (0x0003ecb9) phacti_term_pane_t1

0xe988,	// (0x0004b929) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe990,	// (0x0004b931) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0004cd69) popup_sp_fs_calendar_preview_list_single_pane_g

0xe998,	// (0x0004b939) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe998,	// (0x0004b939) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9ae,	// (0x0004b94f) aid_popup_sp_fs_bg_corner_pane

0xcd6a,	// (0x00049d0b) popup_sp_fs_calendar_preview_bg_pane_g1

0xa183,	// (0x00047124) popup_sp_fs_calendar_preview_bg_pane

0xa7b5,	// (0x00047756) popup_sp_fs_calendar_preview_list_pane

0xc962,	// (0x00049903) bg_main_sp_fs_cale_pane_ParamLimits

0xc962,	// (0x00049903) bg_main_sp_fs_cale_pane

0x1d4b,	// (0x0003ecec) listscroll_cale_mrui_pane_ParamLimits

0x1d4b,	// (0x0003ecec) listscroll_cale_mrui_pane

0x1d60,	// (0x0003ed01) listscroll_sp_fs_schedule_track_pane

0x1d69,	// (0x0003ed0a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1d69,	// (0x0003ed0a) main_sp_fs_ctrlbar_pane_cp01

0xe9b6,	// (0x0004b957) main_sp_fs_ribbon_pane

0x1d7c,	// (0x0003ed1d) popup_sp_fs_cale_preview_window

0x953f,	// (0x000464e0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x953f,	// (0x000464e0) list_single_sp_fs_schedule_track_pane

0xd880,	// (0x0004a821) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd880,	// (0x0004a821) bg_sp_fs_highlight_list_pane_cp03

0x9562,	// (0x00046503) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9562,	// (0x00046503) list_single_sp_fs_schedule_track_pane_g1

0x956e,	// (0x0004650f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x956e,	// (0x0004650f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0004cd6e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0004cd6e) list_single_sp_fs_schedule_track_pane_g

0x957a,	// (0x0004651b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x957a,	// (0x0004651b) list_single_sp_fs_schedule_track_pane_t1

0x9592,	// (0x00046533) sp_fs_schedule_track_pane_ParamLimits

0x9592,	// (0x00046533) sp_fs_schedule_track_pane

0xe9be,	// (0x0004b95f) sp_fs_schedule_track_pane_g1

0xe9c6,	// (0x0004b967) sp_fs_schedule_track_pane_g2

0xe9ce,	// (0x0004b96f) sp_fs_schedule_track_pane_g3

0xe9d6,	// (0x0004b977) sp_fs_schedule_track_pane_g4

0xe9de,	// (0x0004b97f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0004cd73) sp_fs_schedule_track_pane_g

0xd715,	// (0x0004a6b6) bg_sp_fs_schedule_viewer_highlight_g1

0xad00,	// (0x00047ca1) bg_sp_fs_schedule_viewer_highlight_g2

0xd71d,	// (0x0004a6be) bg_sp_fs_schedule_viewer_highlight_g3

0xd725,	// (0x0004a6c6) bg_sp_fs_schedule_viewer_highlight_g4

0xd96d,	// (0x0004a90e) bg_sp_fs_schedule_viewer_highlight_g5

0xd735,	// (0x0004a6d6) bg_sp_fs_schedule_viewer_highlight_g6

0xd73d,	// (0x0004a6de) bg_sp_fs_schedule_viewer_highlight_g7

0xd745,	// (0x0004a6e6) bg_sp_fs_schedule_viewer_highlight_g8

0xace0,	// (0x00047c81) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0004cd7e) bg_sp_fs_schedule_viewer_highlight_g

0xa183,	// (0x00047124) bg_main_sp_fs_ribbon_pane

0x95a2,	// (0x00046543) main_sp_fs_ribbon_pane_g1

0xe9e6,	// (0x0004b987) main_sp_fs_ribbon_pane_t1

0x95ab,	// (0x0004654c) main_sp_fs_ribbon_pane_t2

0xe9f5,	// (0x0004b996) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0004cd91) main_sp_fs_ribbon_pane_t

0xea04,	// (0x0004b9a5) main_sp_fs_ribbon_scheduler_pane

0xea0c,	// (0x0004b9ad) bg_main_sp_fs_ribbon_pane_g1

0xea15,	// (0x0004b9b6) bg_main_sp_fs_ribbon_pane_g2

0xea1e,	// (0x0004b9bf) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0004cd98) bg_main_sp_fs_ribbon_pane_g

0xea26,	// (0x0004b9c7) main_sp_fs_ribbon_scheduler_pane_g1

0xea2f,	// (0x0004b9d0) main_sp_fs_ribbon_scheduler_pane_g2

0xea38,	// (0x0004b9d9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0004cd9f) main_sp_fs_ribbon_scheduler_pane_g

0xea41,	// (0x0004b9e2) list_cale_mrui_pane

0x95ba,	// (0x0004655b) sp_fs_scroll_pane_cp07_ParamLimits

0x95ba,	// (0x0004655b) sp_fs_scroll_pane_cp07

0x95d6,	// (0x00046577) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x95d6,	// (0x00046577) bg_sp_fs_schedule_viewer_highlight

0xea4e,	// (0x0004b9ef) list_single_sp_fs_schedule_track_pane_cp01

0xea56,	// (0x0004b9f7) list_sp_fs_schedule_track_pane

0xea5e,	// (0x0004b9ff) sp_fs_scroll_pane_cp06_ParamLimits

0xea5e,	// (0x0004b9ff) sp_fs_scroll_pane_cp06

0xcd6a,	// (0x00049d0b) bgmain_sp_fs_calendar_pane_g1

0x1d8e,	// (0x0003ed2f) list_single_cale_mrui_pane_ParamLimits

0x1d8e,	// (0x0003ed2f) list_single_cale_mrui_pane

0x1dbf,	// (0x0003ed60) list_single_cale_mrui_row_pane_ParamLimits

0x1dbf,	// (0x0003ed60) list_single_cale_mrui_row_pane

0x1dcc,	// (0x0003ed6d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1dcc,	// (0x0003ed6d) list_single_cale_mrui_row_pane_g1

0x1e04,	// (0x0003eda5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1e04,	// (0x0003eda5) list_single_cale_mrui_row_pane_t1

0x1e16,	// (0x0003edb7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1e16,	// (0x0003edb7) list_single_cale_mrui_row_pane_t2

0x1e7c,	// (0x0003ee1d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1e7c,	// (0x0003ee1d) list_single_cale_mrui_row_pane_t3

0x1eab,	// (0x0003ee4c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1eab,	// (0x0003ee4c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x0004cdad) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x0004cdad) list_single_cale_mrui_row_pane_t

0x1eda,	// (0x0003ee7b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1eda,	// (0x0003ee7b) list_single_cmail_header_editor_pane_bg_cp01

0x1efa,	// (0x0003ee9b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1efa,	// (0x0003ee9b) list_single_cmail_header_editor_pane_bg_cp02

0x95e3,	// (0x00046584) main_radioblah_text_pane_t1_ParamLimits

0x95e3,	// (0x00046584) main_radioblah_text_pane_t1

0xea7d,	// (0x0004ba1e) cam6_indi_pane_cp01

0xea85,	// (0x0004ba26) cam6_mode_pane_cp01

0xea8d,	// (0x0004ba2e) cam6_pano_pane

0xea96,	// (0x0004ba37) cam6_zoom_pane_cp01

0xea9e,	// (0x0004ba3f) cam6_pano_image_pane

0xeaa9,	// (0x0004ba4a) cam6_pano_pane_g1

0xe339,	// (0x0004b2da) cam6_pano_pane_g2

0xeab2,	// (0x0004ba53) cam6_pano_pane_g3

0xeabb,	// (0x0004ba5c) cam6_pano_pane_g4

0xd321,	// (0x0004a2c2) cam6_pano_pane_g5

0xeac4,	// (0x0004ba65) cam6_pano_pane_g6

0xeace,	// (0x0004ba6f) cam6_pano_pane_g7

0xead6,	// (0x0004ba77) cam6_pano_pane_g8

0xeadf,	// (0x0004ba80) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0004cdb6) cam6_pano_pane_g

0xa183,	// (0x00047124) main_browser_tag_pane

0xe934,	// (0x0004b8d5) grid_navstr_albumart_pane

0xeaea,	// (0x0004ba8b) cell_navstr_albumart_pane_ParamLimits

0xeaea,	// (0x0004ba8b) cell_navstr_albumart_pane

0xeb0a,	// (0x0004baab) cell_navstr_albumart_pane_g1

0xc733,	// (0x000496d4) cell_navstr_albumart_pane_g2

0xc743,	// (0x000496e4) cell_navstr_albumart_pane_g3

0xc73b,	// (0x000496dc) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0004cdc9) cell_navstr_albumart_pane_g

0x95fe,	// (0x0004659f) bt_list_pane_ParamLimits

0x95fe,	// (0x0004659f) bt_list_pane

0x961f,	// (0x000465c0) bt_list_pane_t1

0x962e,	// (0x000465cf) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0004cdd2) bt_list_pane_t

0xa183,	// (0x00047124) main_cale_prevew_pane

0x963d,	// (0x000465de) popup_cale_preview_window_ParamLimits

0x963d,	// (0x000465de) popup_cale_preview_window

0xadd9,	// (0x00047d7a) bg_popup_preview_window_pane_cp05_ParamLimits

0xadd9,	// (0x00047d7a) bg_popup_preview_window_pane_cp05

0xeb12,	// (0x0004bab3) list_cale_preview_pane_ParamLimits

0xeb12,	// (0x0004bab3) list_cale_preview_pane

0x9656,	// (0x000465f7) list_double_cale_preview_pane_ParamLimits

0x9656,	// (0x000465f7) list_double_cale_preview_pane

0x9668,	// (0x00046609) list_single_cale_preview_pane_ParamLimits

0x9668,	// (0x00046609) list_single_cale_preview_pane

0x967c,	// (0x0004661d) list_single_cale_preview_pane_g1

0x9684,	// (0x00046625) list_single_cale_preview_pane_t1_ParamLimits

0x9684,	// (0x00046625) list_single_cale_preview_pane_t1

0x9699,	// (0x0004663a) list_double_cale_preview_pane_g1

0x96a1,	// (0x00046642) list_double_cale_preview_pane_t1_ParamLimits

0x96a1,	// (0x00046642) list_double_cale_preview_pane_t1

0x96b6,	// (0x00046657) list_double_cale_preview_pane_t2_ParamLimits

0x96b6,	// (0x00046657) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0004cdd7) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0004cdd7) list_double_cale_preview_pane_t

0xa183,	// (0x00047124) main_ezdial_pane

0xadd9,	// (0x00047d7a) main_sp_fs_email_pane_ParamLimits

0x9259,	// (0x000461fa) cmail_ddmenu_btn01_pane_ParamLimits

0x9259,	// (0x000461fa) cmail_ddmenu_btn01_pane

0x926e,	// (0x0004620f) cmail_ddmenu_btn02_pane_ParamLimits

0x926e,	// (0x0004620f) cmail_ddmenu_btn02_pane

0x9286,	// (0x00046227) cmail_ddmenu_btn03_pane_ParamLimits

0x9286,	// (0x00046227) cmail_ddmenu_btn03_pane

0x92ae,	// (0x0004624f) main_sp_fs_ctrlbar_pane_ParamLimits

0x92c4,	// (0x00046265) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x93cb,	// (0x0004636c) list_cmail_body_pane_ParamLimits

0xe8b4,	// (0x0004b855) bg_button_pane_cp12

0xe8bd,	// (0x0004b85e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8bd,	// (0x0004b85e) list_single_cmail_header_detail_pane_g3

0x1cd5,	// (0x0003ec76) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1cd5,	// (0x0003ec76) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0004cd5a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0004cd5a) list_single_cmail_header_detail_pane_t

0x1d2d,	// (0x0003ecce) phacti_term_pane_t2_ParamLimits

0x1d2d,	// (0x0003ecce) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0004cd64) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0004cd64) phacti_term_pane_t

0xeb1e,	// (0x0004babf) aid_size_list_single_double

0x96ce,	// (0x0004666f) popup_ezdial_listscroll_window

0x96f2,	// (0x00046693) popup_number_entry_window_cp01

0xaaa7,	// (0x00047a48) bg_popup_call_pane_cp09

0xeb2a,	// (0x0004bacb) ezdial_list_pane

0xeb32,	// (0x0004bad3) scroll_pane_cp23

0xcb4f,	// (0x00049af0) bg_button_pane_cp028_ParamLimits

0xcb4f,	// (0x00049af0) bg_button_pane_cp028

0x9700,	// (0x000466a1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9700,	// (0x000466a1) cmail_ddmenu_btn01_pane_g1

0x9710,	// (0x000466b1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9710,	// (0x000466b1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0004cddc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0004cddc) cmail_ddmenu_btn01_pane_g

0xeb3a,	// (0x0004badb) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3a,	// (0x0004badb) cmail_ddmenu_btn01_pane_t1

0xc962,	// (0x00049903) bg_button_pane_cp029_ParamLimits

0xc962,	// (0x00049903) bg_button_pane_cp029

0x9710,	// (0x000466b1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9710,	// (0x000466b1) cmail_ddmenu_btn02_pane_g1

0x9728,	// (0x000466c9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9728,	// (0x000466c9) cmail_ddmenu_btn02_pane_t1

0xd880,	// (0x0004a821) bg_button_pane_cp031_ParamLimits

0xd880,	// (0x0004a821) bg_button_pane_cp031

0x9710,	// (0x000466b1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9710,	// (0x000466b1) cmail_ddmenu_btn03_pane_g1

0x9728,	// (0x000466c9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9728,	// (0x000466c9) cmail_ddmenu_btn03_pane_t1

0x7026,	// (0x00043fc7) cell_dialer2_keypad_pane_t1_ParamLimits

0x7040,	// (0x00043fe1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7040,	// (0x00043fe1) cell_dialer2_keypad_pane_t1_copy1

0x8c0f,	// (0x00045bb0) ncimui_group_button_pane

0xadd9,	// (0x00047d7a) main_sp_fs_calendar_pane_ParamLimits

0x93f3,	// (0x00046394) list_single_cmail_header_caption_pane_ParamLimits

0x1d42,	// (0x0003ece3) aid_recal_txt_sm_pane

0xa183,	// (0x00047124) mian_recal_day_pane

0x1d7c,	// (0x0003ed1d) popup_sp_fs_cale_preview_window_ParamLimits

0xeb4f,	// (0x0004baf0) list_recal_day_pane

0x1f31,	// (0x0003eed2) list_single_recal_day_pane_ParamLimits

0x1f31,	// (0x0003eed2) list_single_recal_day_pane

0xeb76,	// (0x0004bb17) list_single_recal_day_pane_g1_ParamLimits

0xeb76,	// (0x0004bb17) list_single_recal_day_pane_g1

0x1f43,	// (0x0003eee4) list_single_recal_day_pane_g2_ParamLimits

0x1f43,	// (0x0003eee4) list_single_recal_day_pane_g2

0x1f4f,	// (0x0003eef0) list_single_recal_day_pane_g3_ParamLimits

0x1f4f,	// (0x0003eef0) list_single_recal_day_pane_g3

0x1f5b,	// (0x0003eefc) list_single_recal_day_pane_g4_ParamLimits

0x1f5b,	// (0x0003eefc) list_single_recal_day_pane_g4

0x1f69,	// (0x0003ef0a) list_single_recal_day_pane_g5_ParamLimits

0x1f69,	// (0x0003ef0a) list_single_recal_day_pane_g5

0x1f7f,	// (0x0003ef20) list_single_recal_day_pane_g6_ParamLimits

0x1f7f,	// (0x0003ef20) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0004cdeb) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0004cdeb) list_single_recal_day_pane_g

0x1f93,	// (0x0003ef34) list_single_recal_day_pane_t1

0x1fa5,	// (0x0003ef46) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0004cdf6) list_single_recal_day_pane_t

0x974c,	// (0x000466ed) ncimui_query_button_pane_ParamLimits

0x974c,	// (0x000466ed) ncimui_query_button_pane

0x975c,	// (0x000466fd) ncimui_query_button_pane_t1_ParamLimits

0x975c,	// (0x000466fd) ncimui_query_button_pane_t1

0xeb82,	// (0x0004bb23) ncimui_query_button_pane_t2_ParamLimits

0xeb82,	// (0x0004bb23) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0004cdfb) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0004cdfb) ncimui_query_button_pane_t

0x976f,	// (0x00046710) query_button_pane_ParamLimits

0x976f,	// (0x00046710) query_button_pane

0xa183,	// (0x00047124) bg_button_pane_cp0028

0xeb95,	// (0x0004bb36) query_button_pane_t1

0x53a8,	// (0x00042349) main_tport_pane_ParamLimits

0x92d5,	// (0x00046276) bg_popup_window_pane_cp01_ParamLimits

0x92d5,	// (0x00046276) bg_popup_window_pane_cp01

0x92e3,	// (0x00046284) heading_pane_cp08_ParamLimits

0x92e3,	// (0x00046284) heading_pane_cp08

0x92f1,	// (0x00046292) heading_pane_cp07_ParamLimits

0x92f1,	// (0x00046292) heading_pane_cp07

0x9360,	// (0x00046301) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0004cd47) cell_tport_appsw_pane_g

0x0f94,	// (0x0003df35) input_candi_list_open_g1

0xaef8,	// (0x00047e99) list_cale_time_pane_g6_ParamLimits

0xaef8,	// (0x00047e99) list_cale_time_pane_g6

0x5e2f,	// (0x00042dd0) aid_size_touch_calib_1_ParamLimits

0x5e2f,	// (0x00042dd0) aid_size_touch_calib_1

0x5e3b,	// (0x00042ddc) aid_size_touch_calib_2_ParamLimits

0x5e3b,	// (0x00042ddc) aid_size_touch_calib_2

0x5e49,	// (0x00042dea) aid_size_touch_calib_3_ParamLimits

0x5e49,	// (0x00042dea) aid_size_touch_calib_3

0x5e59,	// (0x00042dfa) aid_size_touch_calib_4_ParamLimits

0x5e59,	// (0x00042dfa) aid_size_touch_calib_4

0x5e67,	// (0x00042e08) main_touch_calib_button_group_pane_ParamLimits

0x5e67,	// (0x00042e08) main_touch_calib_button_group_pane

0x5e75,	// (0x00042e16) main_touch_calib_pane_g1_ParamLimits

0x5e81,	// (0x00042e22) main_touch_calib_pane_g2_ParamLimits

0x5e8d,	// (0x00042e2e) main_touch_calib_pane_g3_ParamLimits

0x5e99,	// (0x00042e3a) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0004c701) main_touch_calib_pane_g_ParamLimits

0x5ea5,	// (0x00042e46) main_touch_calib_pane_t1_ParamLimits

0x5ebe,	// (0x00042e5f) main_touch_calib_pane_t2_ParamLimits

0x5ed7,	// (0x00042e78) main_touch_calib_pane_t3_ParamLimits

0x5eed,	// (0x00042e8e) main_touch_calib_pane_t4_ParamLimits

0x5f03,	// (0x00042ea4) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x0004c70a) main_touch_calib_pane_t_ParamLimits

0xd0af,	// (0x0004a050) list_single_fp_cale_pane_g3_ParamLimits

0xd0af,	// (0x0004a050) list_single_fp_cale_pane_g3

0xadd9,	// (0x00047d7a) bg_button_pane_cp012_ParamLimits

0xadd9,	// (0x00047d7a) bg_vkb2_func_pane_cp03_ParamLimits

0x7ea8,	// (0x00044e49) cell_vitu2_function_top_pane_g1_ParamLimits

0xadd9,	// (0x00047d7a) bg_vkb2_func_pane_cp04_ParamLimits

0x8b97,	// (0x00045b38) main_ncimui_button_group_pane_ParamLimits

0x8b97,	// (0x00045b38) main_ncimui_button_group_pane

0x8bfd,	// (0x00045b9e) main_ncimui_pane_t3_ParamLimits

0x8bfd,	// (0x00045b9e) main_ncimui_pane_t3

0xe94a,	// (0x0004b8eb) phacti_button_group_pane

0xeb1e,	// (0x0004babf) aid_size_list_single_double_ParamLimits

0x96ce,	// (0x0004666f) popup_ezdial_listscroll_window_ParamLimits

0x96f2,	// (0x00046693) popup_number_entry_window_cp01_ParamLimits

0x977c,	// (0x0004671d) phacti_button_pane_ParamLimits

0x977c,	// (0x0004671d) phacti_button_pane

0xa183,	// (0x00047124) bg_button_pane_cp14

0xeba3,	// (0x0004bb44) phacti_button_pane_t1

0x978d,	// (0x0004672e) main_touch_calib_button_pane_ParamLimits

0x978d,	// (0x0004672e) main_touch_calib_button_pane

0xa8e2,	// (0x00047883) bg_button_pane_cp18_ParamLimits

0xa8e2,	// (0x00047883) bg_button_pane_cp18

0xebb1,	// (0x0004bb52) main_touch_calib_button_pane_t1_ParamLimits

0xebb1,	// (0x0004bb52) main_touch_calib_button_pane_t1

0xebc7,	// (0x0004bb68) main_touch_calib_button_pane_t2_ParamLimits

0xebc7,	// (0x0004bb68) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0004ce00) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0004ce00) main_touch_calib_button_pane_t

0xa183,	// (0x00047124) cell_ncimui_button_pane

0xa183,	// (0x00047124) bg_button_pane_cp032

0xebe5,	// (0x0004bb86) cell_ncimui_button_pane_t1

0x709c,	// (0x0004403d) image3_infobar_pane_ParamLimits

0x709c,	// (0x0004403d) image3_infobar_pane

0x8fba,	// (0x00045f5b) fs_bigclock_status_pane_ParamLimits

0x8fba,	// (0x00045f5b) fs_bigclock_status_pane

0x8fc7,	// (0x00045f68) main_fs_bigclock_clock_pane_ParamLimits

0x8fc7,	// (0x00045f68) main_fs_bigclock_clock_pane

0x8fdb,	// (0x00045f7c) main_fs_bigclock_indi_pane_ParamLimits

0x8fdb,	// (0x00045f7c) main_fs_bigclock_indi_pane

0x9003,	// (0x00045fa4) main_fs_bigclock_swipe_pane_ParamLimits

0x9003,	// (0x00045fa4) main_fs_bigclock_swipe_pane

0xa183,	// (0x00047124) main_fs_clock_dumped_data

0xe446,	// (0x0004b3e7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe446,	// (0x0004b3e7) list_single_fs_bigclock_indicator_pane_g1

0xe462,	// (0x0004b403) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe462,	// (0x0004b403) list_single_fs_bigclock_indicator_pane_g2

0xe47c,	// (0x0004b41d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe47c,	// (0x0004b41d) list_single_fs_bigclock_indicator_pane_g3

0xe496,	// (0x0004b437) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe496,	// (0x0004b437) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0004cc28) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0004cc28) list_single_fs_bigclock_indicator_pane_g

0xe4c1,	// (0x0004b462) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4c1,	// (0x0004b462) list_single_fs_bigclock_indicator_pane_t1

0xe4e9,	// (0x0004b48a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4e9,	// (0x0004b48a) list_single_fs_bigclock_indicator_pane_t2

0xe511,	// (0x0004b4b2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe511,	// (0x0004b4b2) list_single_fs_bigclock_indicator_pane_t3

0xe539,	// (0x0004b4da) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe539,	// (0x0004b4da) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0004cc33) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0004cc33) list_single_fs_bigclock_indicator_pane_t

0xebf3,	// (0x0004bb94) image3_infobar_fav_pane_ParamLimits

0xebf3,	// (0x0004bb94) image3_infobar_fav_pane

0xec03,	// (0x0004bba4) image3_infobar_loc_pane_ParamLimits

0xec03,	// (0x0004bba4) image3_infobar_loc_pane

0xec17,	// (0x0004bbb8) image3_infobar_time_pane_ParamLimits

0xec17,	// (0x0004bbb8) image3_infobar_time_pane

0xcd6a,	// (0x00049d0b) image3_infobar_time_pane_g1

0xec27,	// (0x0004bbc8) image3_infobar_time_pane_t1

0xcd6a,	// (0x00049d0b) image3_infobar_loc_pane_g1

0xec35,	// (0x0004bbd6) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0004ce05) image3_infobar_loc_pane_g

0xec3d,	// (0x0004bbde) image3_infobar_loc_pane_t1

0xcd6a,	// (0x00049d0b) image3_infobar_fav_pane_g1

0xec4b,	// (0x0004bbec) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0004ce0a) image3_infobar_fav_pane_g

0xec53,	// (0x0004bbf4) fs_bigclock_status_battery_pane

0xec5c,	// (0x0004bbfd) fs_bigclock_status_signal_pane

0xec65,	// (0x0004bc06) fs_bigclock_status_title_pane

0xec6e,	// (0x0004bc0f) fs_bigclock_status_signal_pane_g1

0xec77,	// (0x0004bc18) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0004ce0f) fs_bigclock_status_signal_pane_g

0xec7f,	// (0x0004bc20) fs_bigclock_status_battery_pane_g1

0xec88,	// (0x0004bc29) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0004ce14) fs_bigclock_status_battery_pane_g

0xec90,	// (0x0004bc31) fs_bigclock_status_title_pane_t1

0x979d,	// (0x0004673e) main_fs_bigclock_clock_pane_g1

0x979d,	// (0x0004673e) main_fs_bigclock_clock_pane_g2

0x97aa,	// (0x0004674b) main_fs_bigclock_clock_pane_g3

0x97aa,	// (0x0004674b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0004ce19) main_fs_bigclock_clock_pane_g

0x97b6,	// (0x00046757) main_fs_bigclock_clock_pane_t1

0x97c9,	// (0x0004676a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0004ce22) main_fs_bigclock_clock_pane_t

0xec9e,	// (0x0004bc3f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec9e,	// (0x0004bc3f) list_single_fs_bigclock_indicator_pane

0xecaf,	// (0x0004bc50) list_single_fs_bigclock_pane_ParamLimits

0xecaf,	// (0x0004bc50) list_single_fs_bigclock_pane

0xecd5,	// (0x0004bc76) main_fs_bigclock_indicator_pane_t1

0xece4,	// (0x0004bc85) list_single_fs_bigclock_pane_g1

0xecec,	// (0x0004bc8d) list_single_fs_bigclock_pane_t1

0xcd6a,	// (0x00049d0b) main_fs_bigclock_swipe_pane_g1

0xed2f,	// (0x0004bcd0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0004ce33) main_fs_bigclock_swipe_pane_g

0xed37,	// (0x0004bcd8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed37,	// (0x0004bcd8) main_fs_bigclock_swipe_pane_t1

0x441b,	// (0x000413bc) call_type_pane_ParamLimits

0xa183,	// (0x00047124) main_btmg_pane

0x1df8,	// (0x0003ed99) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1df8,	// (0x0003ed99) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0004cda6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0004cda6) list_single_cale_mrui_row_pane_g

0x1f20,	// (0x0003eec1) list_recal_vselct_arw_lo_pane

0xeb6e,	// (0x0004bb0f) list_recal_vselct_arw_up_pane

0x1f28,	// (0x0003eec9) list_recal_vselct_pane

0x9820,	// (0x000467c1) btmg_button_pane

0x982c,	// (0x000467cd) main_btmg_pane_g1

0xa183,	// (0x00047124) bg_button_pane_cp044

0xed54,	// (0x0004bcf5) btmg_button_pane_t1

0xc94e,	// (0x000498ef) aid_listscroll_gen

0xadd9,	// (0x00047d7a) main_cntbar_detail_pane

0xe896,	// (0x0004b837) list_cmail_folder_pane

0xd2db,	// (0x0004a27c) sp_fs_scroll_pane_cp03_ParamLimits

0x1fb7,	// (0x0003ef58) list_single_fs_dyc_pane_cp01_ParamLimits

0x1fb7,	// (0x0003ef58) list_single_fs_dyc_pane_cp01

0xed62,	// (0x0004bd03) aid_size_cmail_indent

0x1fe6,	// (0x0003ef87) list_single_dyc_row_pane_cp01

0x9854,	// (0x000467f5) cntbar_detail_list_pane_ParamLimits

0x9854,	// (0x000467f5) cntbar_detail_list_pane

0x988e,	// (0x0004682f) main_cntbar_detail_cont_pane_ParamLimits

0x988e,	// (0x0004682f) main_cntbar_detail_cont_pane

0x440f,	// (0x000413b0) scroll_pane_cp032_ParamLimits

0x440f,	// (0x000413b0) scroll_pane_cp032

0x989a,	// (0x0004683b) cntbar_detail_list_event_pane_ParamLimits

0x989a,	// (0x0004683b) cntbar_detail_list_event_pane

0x9860,	// (0x00046801) cntbar_detail_list_shct_pane

0xad4e,	// (0x00047cef) aid_list_gen

0xed6b,	// (0x0004bd0c) aid_scroll

0xed74,	// (0x0004bd15) aid_size_touch_scroll_bar

0x8455,	// (0x000453f6) aid_list_double

0x1fef,	// (0x0003ef90) aid_list_single

0x8443,	// (0x000453e4) aid_list_single_lg

0x1ff8,	// (0x0003ef99) aid_list_z_g_a_sm

0x2000,	// (0x0003efa1) aid_list_z_g_d

0x2008,	// (0x0003efa9) aid_txt_z_prm

0x2016,	// (0x0003efb7) aid_txt_z_prm_cp01

0x2024,	// (0x0003efc5) aid_txt_z_sec

0x98ae,	// (0x0004684f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x98ae,	// (0x0004684f) main_cntbar_detail_cont_pane_g1

0x98bb,	// (0x0004685c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x98bb,	// (0x0004685c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x0004ce38) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x0004ce38) main_cntbar_detail_cont_pane_g

0xed7d,	// (0x0004bd1e) main_cntbar_detail_cont_pane_t1

0xed8b,	// (0x0004bd2c) main_cntbar_detail_cont_pane_t2

0xed99,	// (0x0004bd3a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0004ce3d) main_cntbar_detail_cont_pane_t

0x98c7,	// (0x00046868) cell_cntbar_detail_list_shct_pane_ParamLimits

0x98c7,	// (0x00046868) cell_cntbar_detail_list_shct_pane

0xeda7,	// (0x0004bd48) cntbar_detail_list_shct_pane_g1

0xedb0,	// (0x0004bd51) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0004ce44) cntbar_detail_list_shct_pane_g

0x98db,	// (0x0004687c) cntbar_detail_list_event_pane_g1_ParamLimits

0x98db,	// (0x0004687c) cntbar_detail_list_event_pane_g1

0x98e7,	// (0x00046888) cntbar_detail_list_event_pane_g2_ParamLimits

0x98e7,	// (0x00046888) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0004ce49) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0004ce49) cntbar_detail_list_event_pane_g

0x9953,	// (0x000468f4) cntbar_detail_list_event_pane_t1_ParamLimits

0x9953,	// (0x000468f4) cntbar_detail_list_event_pane_t1

0x9968,	// (0x00046909) cntbar_detail_list_event_pane_t2_ParamLimits

0x9968,	// (0x00046909) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0004ce56) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0004ce56) cntbar_detail_list_event_pane_t

0xcd6a,	// (0x00049d0b) cell_cntbar_detail_list_shct_pane_g1

0xb4dd,	// (0x0004847e) navi_pane_mv_g3

0xadd9,	// (0x00047d7a) main_cntbar_detail_pane_ParamLimits

0xa183,	// (0x00047124) main_notif_wgt_pane

0x6d26,	// (0x00043cc7) aid_tch_main_mp4_pane_g4

0x6f85,	// (0x00043f26) popup_slider_window_cp02

0x1f16,	// (0x0003eeb7) list_recal_day_event_pane

0x9834,	// (0x000467d5) cntbar_detail_btn_pane_ParamLimits

0x9834,	// (0x000467d5) cntbar_detail_btn_pane

0x9844,	// (0x000467e5) cntbar_detail_btn_pane_cp01_ParamLimits

0x9844,	// (0x000467e5) cntbar_detail_btn_pane_cp01

0x9860,	// (0x00046801) cntbar_detail_list_shct_pane_ParamLimits

0x986c,	// (0x0004680d) cntbar_detail_pane_g1_ParamLimits

0x986c,	// (0x0004680d) cntbar_detail_pane_g1

0x9878,	// (0x00046819) cntbar_detail_pane_t1_ParamLimits

0x9878,	// (0x00046819) cntbar_detail_pane_t1

0x98f3,	// (0x00046894) cntbar_detail_list_event_pane_g3_ParamLimits

0x98f3,	// (0x00046894) cntbar_detail_list_event_pane_g3

0x990b,	// (0x000468ac) cntbar_detail_list_event_pane_g4_ParamLimits

0x990b,	// (0x000468ac) cntbar_detail_list_event_pane_g4

0x9923,	// (0x000468c4) cntbar_detail_list_event_pane_g5_ParamLimits

0x9923,	// (0x000468c4) cntbar_detail_list_event_pane_g5

0x993b,	// (0x000468dc) cntbar_detail_list_event_pane_g6_ParamLimits

0x993b,	// (0x000468dc) cntbar_detail_list_event_pane_g6

0x997d,	// (0x0004691e) cntbar_detail_list_event_pane_t3_ParamLimits

0x997d,	// (0x0004691e) cntbar_detail_list_event_pane_t3

0x998f,	// (0x00046930) popup_notif_wgt_window_ParamLimits

0x998f,	// (0x00046930) popup_notif_wgt_window

0x999f,	// (0x00046940) popup_submenu_window_cp01_ParamLimits

0x999f,	// (0x00046940) popup_submenu_window_cp01

0xaaa7,	// (0x00047a48) bg_popup_window_pane_cp10

0xedb9,	// (0x0004bd5a) listscroll_notif_wgt_pane

0xedcb,	// (0x0004bd6c) list_notif_wgt_window

0xedd4,	// (0x0004bd75) scroll_pane_cp033

0x99ad,	// (0x0004694e) list_notif_wgt_row_pane_ParamLimits

0x99ad,	// (0x0004694e) list_notif_wgt_row_pane

0xeddd,	// (0x0004bd7e) aid_size_list_notif_wgt_del

0xedea,	// (0x0004bd8b) list_notif_wgt_row_pane_g1

0xedf6,	// (0x0004bd97) list_notif_wgt_row_pane_g2

0xee05,	// (0x0004bda6) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0004ce5d) list_notif_wgt_row_pane_g

0xee12,	// (0x0004bdb3) list_notif_wgt_row_pane_t1

0xee28,	// (0x0004bdc9) list_notif_wgt_row_pane_t2

0xee3a,	// (0x0004bddb) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0004ce64) list_notif_wgt_row_pane_t

0xd975,	// (0x0004a916) list_recal_day_event_pane_g1

0xee4c,	// (0x0004bded) list_recal_day_event_pane_t1

0xa183,	// (0x00047124) bg_button_pane_cp045

0x99bf,	// (0x00046960) cntbar_detail_btn_pane_t1

0xc962,	// (0x00049903) main_callh_pane_ParamLimits

0xc962,	// (0x00049903) main_callh_pane

0xa183,	// (0x00047124) main_coverflow0_pane

0xa183,	// (0x00047124) main_wgtman_pane

0x901b,	// (0x00045fbc) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x901b,	// (0x00045fbc) main_fs_bigclock_unlock_btn_pane

0x9358,	// (0x000462f9) bg_button_pane_cp16

0x9368,	// (0x00046309) cell_tport_appsw_pane_g3

0x99cd,	// (0x0004696e) cf0_flow_pane_ParamLimits

0x99cd,	// (0x0004696e) cf0_flow_pane

0xee5b,	// (0x0004bdfc) listscroll_cf0_pane

0xee66,	// (0x0004be07) main_cf0_pane_g1

0x99dc,	// (0x0004697d) main_cf0_pane_t1_ParamLimits

0x99dc,	// (0x0004697d) main_cf0_pane_t1

0x99f0,	// (0x00046991) main_cf0_pane_t2_ParamLimits

0x99f0,	// (0x00046991) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0004ce70) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0004ce70) main_cf0_pane_t

0xee78,	// (0x0004be19) scroll_pane_cp11

0x9a04,	// (0x000469a5) cf0_flow_pane_g1

0x9a0c,	// (0x000469ad) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0004ce75) cf0_flow_pane_g

0x9a14,	// (0x000469b5) cf0_flow_pane_t1

0xa183,	// (0x00047124) main_call6_pane

0xa183,	// (0x00047124) main_calllock_pane

0x9a22,	// (0x000469c3) call6_btn_grp_pane_ParamLimits

0x9a22,	// (0x000469c3) call6_btn_grp_pane

0x9a31,	// (0x000469d2) call6_pane_g1_ParamLimits

0x9a31,	// (0x000469d2) call6_pane_g1

0x9a41,	// (0x000469e2) popup_call6_1st_window_ParamLimits

0x9a41,	// (0x000469e2) popup_call6_1st_window

0x9a4f,	// (0x000469f0) popup_call6_2nd_window_ParamLimits

0x9a4f,	// (0x000469f0) popup_call6_2nd_window

0x9a5d,	// (0x000469fe) cell_call6_btn_pane_ParamLimits

0x9a5d,	// (0x000469fe) cell_call6_btn_pane

0xaaa7,	// (0x00047a48) bg_popup_call2_in_pane_cp03

0xee83,	// (0x0004be24) popup_call6_1st_window_g1

0xee8b,	// (0x0004be2c) popup_call6_1st_window_g2

0xee93,	// (0x0004be34) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0004ce7a) popup_call6_1st_window_g

0xee9b,	// (0x0004be3c) popup_call6_1st_window_t1

0xeeaa,	// (0x0004be4b) popup_call6_1st_window_t2

0xeeb8,	// (0x0004be59) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0004ce81) popup_call6_1st_window_t

0xaaa7,	// (0x00047a48) bg_popup_call2_in_pane_cp04

0xee83,	// (0x0004be24) popup_call6_2nd_window_g1

0xee8b,	// (0x0004be2c) popup_call6_2nd_window_g2

0xee93,	// (0x0004be34) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0004ce7a) popup_call6_2nd_window_g

0xee9b,	// (0x0004be3c) popup_call6_2nd_window_t1

0xa183,	// (0x00047124) bg_button_pane_cp15

0xeec6,	// (0x0004be67) cell_call6_btn_pane_g1

0x9a6c,	// (0x00046a0d) cell_call6_btn_pane_t1

0x9a7b,	// (0x00046a1c) listscroll_wgtman_pane_ParamLimits

0x9a7b,	// (0x00046a1c) listscroll_wgtman_pane

0x9a97,	// (0x00046a38) wgtman_btn_pane_ParamLimits

0x9a97,	// (0x00046a38) wgtman_btn_pane

0xb2d7,	// (0x00048278) aid_scroll_copy1

0xeecf,	// (0x0004be70) list_wgtman_pane

0x9acc,	// (0x00046a6d) wgtman_btn_pane_g1_ParamLimits

0x9acc,	// (0x00046a6d) wgtman_btn_pane_g1

0x9af4,	// (0x00046a95) wgtman_btn_pane_t1_ParamLimits

0x9af4,	// (0x00046a95) wgtman_btn_pane_t1

0xeed9,	// (0x0004be7a) wgtman_btn_pane_t2_ParamLimits

0xeed9,	// (0x0004be7a) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0004ce88) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0004ce88) wgtman_btn_pane_t

0x9b2b,	// (0x00046acc) listrow_wgtman_pane_ParamLimits

0x9b2b,	// (0x00046acc) listrow_wgtman_pane

0x9b47,	// (0x00046ae8) listrow_wgtman_pane_g1

0x9b54,	// (0x00046af5) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0004ce8d) listrow_wgtman_pane_g

0x2032,	// (0x0003efd3) listrow_wgtman_pane_t1

0x204a,	// (0x0003efeb) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0004ce92) listrow_wgtman_pane_t

0x2070,	// (0x0003f011) wait_bar_pane_cp09

0xeef0,	// (0x0004be91) main_calllock_btn_pane

0xeefa,	// (0x0004be9b) main_calllock_pane_g1

0xa183,	// (0x00047124) bg_button_pane_cp17

0xeec6,	// (0x0004be67) main_calllock_btn_pane_g1

0xef06,	// (0x0004bea7) main_calllock_btn_pane_t1

0xa183,	// (0x00047124) main_dialer3_pane

0xa183,	// (0x00047124) main_fmrd2_pane

0xcd6a,	// (0x00049d0b) main_fs_bigclock_unlock_btn_pane_g1

0x9b7a,	// (0x00046b1b) main_fs_bigclock_unlock_btn_pane_t1

0x9b88,	// (0x00046b29) area_fmrd2_info_pane_ParamLimits

0x9b88,	// (0x00046b29) area_fmrd2_info_pane

0x9b96,	// (0x00046b37) area_fmrd2_visual_pane_ParamLimits

0x9b96,	// (0x00046b37) area_fmrd2_visual_pane

0x9ba4,	// (0x00046b45) fmrd2_indi_pane_ParamLimits

0x9ba4,	// (0x00046b45) fmrd2_indi_pane

0x9bb1,	// (0x00046b52) area_fmrd2_visual_pane_g1

0x9bb9,	// (0x00046b5a) area_fmrd2_visual_pane_t1

0x9bc9,	// (0x00046b6a) area_fmrd2_visual_pane_t2

0x9bd9,	// (0x00046b7a) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0004ce9c) area_fmrd2_visual_pane_t

0x9be9,	// (0x00046b8a) area_fmrd2_info_pane_g1

0x9bf1,	// (0x00046b92) area_fmrd2_info_pane_t1

0x9c01,	// (0x00046ba2) area_fmrd2_info_pane_t2

0x9c11,	// (0x00046bb2) area_fmrd2_info_pane_t3

0x9c21,	// (0x00046bc2) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0004cea3) area_fmrd2_info_pane_t

0x9c2f,	// (0x00046bd0) fmrd2_indi_pane_t1

0x9c3f,	// (0x00046be0) fmrd2_indi_pane_t2

0x9c4f,	// (0x00046bf0) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0004ceac) fmrd2_indi_pane_t

0xe4a5,	// (0x0004b446) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4a5,	// (0x0004b446) list_single_fs_bigclock_indicator_pane_g5

0xe556,	// (0x0004b4f7) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe556,	// (0x0004b4f7) list_single_fs_bigclock_indicator_pane_t5

0x94f2,	// (0x00046493) aid_cell_bcale_month_pane_ParamLimits

0x94f2,	// (0x00046493) aid_cell_bcale_month_pane

0x9510,	// (0x000464b1) bcale_month_pane_ParamLimits

0x9510,	// (0x000464b1) bcale_month_pane

0x952e,	// (0x000464cf) bcale_preview_pane_ParamLimits

0x952e,	// (0x000464cf) bcale_preview_pane

0xecec,	// (0x0004bc8d) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0b,	// (0x0004bcac) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0b,	// (0x0004bcac) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0004ce2e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0004ce2e) list_single_fs_bigclock_pane_t

0x9b72,	// (0x00046b13) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0004ce97) main_fs_bigclock_unlock_btn_pane_g

0x9c5d,	// (0x00046bfe) aid_dia3_key_size_ParamLimits

0x9c5d,	// (0x00046bfe) aid_dia3_key_size

0x9c69,	// (0x00046c0a) aid_dia3_listrow_size_ParamLimits

0x9c69,	// (0x00046c0a) aid_dia3_listrow_size

0x9c79,	// (0x00046c1a) dia3_keypad_fun_pane_ParamLimits

0x9c79,	// (0x00046c1a) dia3_keypad_fun_pane

0x9c8b,	// (0x00046c2c) dia3_keypad_num_pane_ParamLimits

0x9c8b,	// (0x00046c2c) dia3_keypad_num_pane

0x9c9d,	// (0x00046c3e) dia3_listscroll_pane_ParamLimits

0x9c9d,	// (0x00046c3e) dia3_listscroll_pane

0x9cab,	// (0x00046c4c) dia3_numentry_pane_ParamLimits

0x9cab,	// (0x00046c4c) dia3_numentry_pane

0xef15,	// (0x0004beb6) dia3_list_pane

0xef20,	// (0x0004bec1) scroll_pane_cp12

0xa183,	// (0x00047124) bg_dia3_numentry_pane

0x9cb9,	// (0x00046c5a) dia3_numentry_pane_t1

0x9cc8,	// (0x00046c69) cell_dia3_key_num_pane

0x9cd0,	// (0x00046c71) cell_dia3_key0_fun_pane_ParamLimits

0x9cd0,	// (0x00046c71) cell_dia3_key0_fun_pane

0x9cdd,	// (0x00046c7e) cell_dia3_key1_fun_pane_ParamLimits

0x9cdd,	// (0x00046c7e) cell_dia3_key1_fun_pane

0x9cea,	// (0x00046c8b) dia3_listrow_pane

0xe1f8,	// (0x0004b199) bg_dia3_numentry_pane_g1

0xa183,	// (0x00047124) bg_button_pane_cp21

0xef2b,	// (0x0004becc) cell_dia3_key_num_pane_t1

0xef39,	// (0x0004beda) cell_dia3_key_num_pane_t2

0xef48,	// (0x0004bee9) cell_dia3_key_num_pane_t3

0xef57,	// (0x0004bef8) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0004ceb3) cell_dia3_key_num_pane_t

0xa183,	// (0x00047124) bg_button_pane_cp19

0x9cf7,	// (0x00046c98) cell_dia3_key0_fun_pane_g1

0xa183,	// (0x00047124) bg_button_pane_cp20

0x9cff,	// (0x00046ca0) cell_dia3_key1_fun_pane_g1

0x9d07,	// (0x00046ca8) area_left_week_number_pane

0x9d1a,	// (0x00046cbb) area_top_day_name_pane

0x9d28,	// (0x00046cc9) frame_month_view_pane

0xef66,	// (0x0004bf07) grid_month_view_pane

0x9d3d,	// (0x00046cde) cell_top_day_name_pane_ParamLimits

0x9d3d,	// (0x00046cde) cell_top_day_name_pane

0x9d57,	// (0x00046cf8) cell_area_left_week_number_pane_ParamLimits

0x9d57,	// (0x00046cf8) cell_area_left_week_number_pane

0x9d7a,	// (0x00046d1b) cell_month_view_pane_ParamLimits

0x9d7a,	// (0x00046d1b) cell_month_view_pane

0xef74,	// (0x0004bf15) frm_month_g1

0x9da6,	// (0x00046d47) frm_month_g2

0x9db7,	// (0x00046d58) frm_month_g3

0x9dc8,	// (0x00046d69) frm_month_g4

0x9dd9,	// (0x00046d7a) frm_month_g5

0x9dec,	// (0x00046d8d) frm_month_g6

0x9dff,	// (0x00046da0) frm_month_g7

0xef81,	// (0x0004bf22) frm_month_g8

0x9e12,	// (0x00046db3) frm_month_g9

0x9e1f,	// (0x00046dc0) frm_month_g10

0x9e2c,	// (0x00046dcd) frm_month_g11

0x9e39,	// (0x00046dda) frm_month_g12

0x9e46,	// (0x00046de7) frm_month_g13

0x9e53,	// (0x00046df4) frm_month_g14

0x9e62,	// (0x00046e03) frm_month_g15

0x9e71,	// (0x00046e12) frm_month_g16

0x000f,

0xff1b,	// (0x0004cebc) frm_month_g

0xef8e,	// (0x0004bf2f) cell_top_day_name_pane_t1

0x9e80,	// (0x00046e21) cell_area_left_week_number_pane_g1

0x9e8f,	// (0x00046e30) cell_area_left_week_number_pane_t1

0xcfaf,	// (0x00049f50) cell_month_view_pane_g1

0x9ea5,	// (0x00046e46) cell_month_view_pane_t1

0xa183,	// (0x00047124) main_fps_pane

0xe7a0,	// (0x0004b741) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7a0,	// (0x0004b741) cmail_ddmenu_btn02_pane_cp1

0xe7bc,	// (0x0004b75d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7bc,	// (0x0004b75d) cmail_ddmenu_btn02_pane_cp2

0x971c,	// (0x000466bd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x971c,	// (0x000466bd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0004cde1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0004cde1) cmail_ddmenu_btn02_pane_g

0x973a,	// (0x000466db) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x973a,	// (0x000466db) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x0004cde6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x0004cde6) cmail_ddmenu_btn02_pane_t

0x9ebb,	// (0x00046e5c) fps_text_pane_ParamLimits

0x9ebb,	// (0x00046e5c) fps_text_pane

0x9ec8,	// (0x00046e69) main_fps_pane_g1_ParamLimits

0x9ec8,	// (0x00046e69) main_fps_pane_g1

0x9ed6,	// (0x00046e77) wait_bar_pane_cp010_ParamLimits

0x9ed6,	// (0x00046e77) wait_bar_pane_cp010

0x9ee2,	// (0x00046e83) fps_text_pane_t1_ParamLimits

0x9ee2,	// (0x00046e83) fps_text_pane_t1

0x7430,	// (0x000443d1) cam4_image_uncrop_pane_g1

0x7439,	// (0x000443da) cam4_image_uncrop_pane_g2

0x7442,	// (0x000443e3) cam4_image_uncrop_pane_g3

0x744b,	// (0x000443ec) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0004c8a2) cam4_image_uncrop_pane_g

0x9cea,	// (0x00046c8b) dia3_listrow_pane_ParamLimits

0xa183,	// (0x00047124) main_phob2_pane

0x933a,	// (0x000462db) cell_tport_appsw_pane_cp02_ParamLimits

0x933a,	// (0x000462db) cell_tport_appsw_pane_cp02

0x9349,	// (0x000462ea) cell_tport_appsw_pane_cp03_ParamLimits

0x9349,	// (0x000462ea) cell_tport_appsw_pane_cp03

0xa183,	// (0x00047124) phob2_contact_card_pane

0xa183,	// (0x00047124) phob2_listscroll_pane

0xefa1,	// (0x0004bf42) phob2_list_pane

0xefa9,	// (0x0004bf4a) scroll_pane_cp034

0x9efb,	// (0x00046e9c) phob2_cc_data_pane_ParamLimits

0x9efb,	// (0x00046e9c) phob2_cc_data_pane

0x9f15,	// (0x00046eb6) phob2_cc_listscroll_pane_ParamLimits

0x9f15,	// (0x00046eb6) phob2_cc_listscroll_pane

0x9f2f,	// (0x00046ed0) list_double_large_graphic_phob2_pane_ParamLimits

0x9f2f,	// (0x00046ed0) list_double_large_graphic_phob2_pane

0x9f4e,	// (0x00046eef) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9f4e,	// (0x00046eef) list_double_large_graphic_phob2_pane_g1

0x2082,	// (0x0003f023) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2082,	// (0x0003f023) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0004cedd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0004cedd) list_double_large_graphic_phob2_pane_g

0x208e,	// (0x0003f02f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x208e,	// (0x0003f02f) list_double_large_graphic_phob2_pane_t1

0x20a4,	// (0x0003f045) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x20a4,	// (0x0003f045) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0004cee2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0004cee2) list_double_large_graphic_phob2_pane_t

0xa183,	// (0x00047124) list_highlight_pane_cp024

0x9f64,	// (0x00046f05) phob2_cc_button_pane

0x9f6c,	// (0x00046f0d) phob2_cc_data_pane_g1_ParamLimits

0x9f6c,	// (0x00046f0d) phob2_cc_data_pane_g1

0x9f78,	// (0x00046f19) phob2_cc_data_pane_g2_ParamLimits

0x9f78,	// (0x00046f19) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0004cee7) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0004cee7) phob2_cc_data_pane_g

0x9f84,	// (0x00046f25) phob2_cc_data_pane_t1_ParamLimits

0x9f84,	// (0x00046f25) phob2_cc_data_pane_t1

0x9f96,	// (0x00046f37) phob2_cc_data_pane_t2_ParamLimits

0x9f96,	// (0x00046f37) phob2_cc_data_pane_t2

0x9fa8,	// (0x00046f49) phob2_cc_data_pane_t3_ParamLimits

0x9fa8,	// (0x00046f49) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0004ceec) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0004ceec) phob2_cc_data_pane_t

0xefb1,	// (0x0004bf52) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x0004bf52) phob2_cc_list_pane

0xdd41,	// (0x0004ace2) scroll_pane_cp035_ParamLimits

0xdd41,	// (0x0004ace2) scroll_pane_cp035

0xadd9,	// (0x00047d7a) bg_button_pane_cp033

0xefbd,	// (0x0004bf5e) phob2_cc_button_pane_g1

0xefc9,	// (0x0004bf6a) phob2_cc_button_pane_t1

0xefde,	// (0x0004bf7f) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0004cef3) phob2_cc_button_pane_t

0x9fba,	// (0x00046f5b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9fba,	// (0x00046f5b) list_double_large_graphic_phob2_cc_pane

0xa02e,	// (0x00046fcf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa02e,	// (0x00046fcf) list_double_large_graphic_phob2_cc_pane_g1

0x20b9,	// (0x0003f05a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x20b9,	// (0x0003f05a) list_double_large_graphic_phob2_cc_pane_g2

0x20c5,	// (0x0003f066) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x20c5,	// (0x0003f066) list_double_large_graphic_phob2_cc_pane_g3

0x20d1,	// (0x0003f072) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x20d1,	// (0x0003f072) list_double_large_graphic_phob2_cc_pane_g4

0x20dd,	// (0x0003f07e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x20dd,	// (0x0003f07e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0004cef8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0004cef8) list_double_large_graphic_phob2_cc_pane_g

0x20e9,	// (0x0003f08a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x20e9,	// (0x0003f08a) list_double_large_graphic_phob2_cc_pane_t1

0x2112,	// (0x0003f0b3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x2112,	// (0x0003f0b3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0004cf03) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0004cf03) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x0004bf91) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x0004bf91) list_highlight_pane_cp025

0xadd9,	// (0x00047d7a) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x0004bf5e) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x0004bf6a) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x0004bf7f) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0004cef3) phob2_cc_button_pane_t_ParamLimits

0x2412,	// (0x0003f3b3) popup_wgtman_window

0xd82f,	// (0x0004a7d0) scroll_pane_cp038

0x9ab4,	// (0x00046a55) wgtman_btn_pane_cp_01_ParamLimits

0x9ab4,	// (0x00046a55) wgtman_btn_pane_cp_01

0xeffe,	// (0x0004bf9f) wgtman_content_pane

0xf007,	// (0x0004bfa8) wgtman_heading_pane

0xa183,	// (0x00047124) bg_heading_pane_cp02

0xf010,	// (0x0004bfb1) wgtman_heading_pane_g1

0xf018,	// (0x0004bfb9) wgtman_heading_pane_t1

0xf026,	// (0x0004bfc7) scroll_pane_cp036

0xf02e,	// (0x0004bfcf) wgtman_list_pane

0xe66a,	// (0x0004b60b) wgtman_list_pane_t1_ParamLimits

0xe66a,	// (0x0004b60b) wgtman_list_pane_t1

0x738f,	// (0x00044330) cam4_grid_pane

0x128c,	// (0x0003e22d) bg_button_pane_cp015_ParamLimits

0x806e,	// (0x0004500f) bg_button_pane_cp016_ParamLimits

0x8081,	// (0x00045022) bg_button_pane_cp017_ParamLimits

0x12d0,	// (0x0003e271) popup_vitu2_query_window_g3_ParamLimits

0x12d0,	// (0x0003e271) popup_vitu2_query_window_g3

0x1349,	// (0x0003e2ea) popup_vitu2_query_window_t6_ParamLimits

0x1349,	// (0x0003e2ea) popup_vitu2_query_window_t6

0x1374,	// (0x0003e315) popup_vitu2_query_window_t7_ParamLimits

0x1374,	// (0x0003e315) popup_vitu2_query_window_t7

0xe685,	// (0x0004b626) cam4_grid_pane_g1

0xe68e,	// (0x0004b62f) cam4_grid_pane_g2

0xf036,	// (0x0004bfd7) cam4_grid_pane_g3

0xf03f,	// (0x0004bfe0) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x0004cf08) cam4_grid_pane_g

0x3194,	// (0x00040135) aid_placing_vt_slider_lsc_ParamLimits

0x34d4,	// (0x00040475) vidtel_button_pane_ParamLimits

0x34d4,	// (0x00040475) vidtel_button_pane

0xa183,	// (0x00047124) bg_button_pane_cp034

0xf04a,	// (0x0004bfeb) vidtel_button_pane_g1

0xf052,	// (0x0004bff3) vidtel_button_pane_t1

0xd965,	// (0x0004a906) aid_size_vtel_slider_touch

0xdd41,	// (0x0004ace2) scroll_pane_cp039

0x8d58,	// (0x00045cf9) ncim_query_button_pane_cp01_ParamLimits

0x8d77,	// (0x00045d18) ncimui_query_pane_g1_ParamLimits

0xadd9,	// (0x00047d7a) input_focus_pane_cp012_ParamLimits

0xe23e,	// (0x0004b1df) ncim_query_entry_pane_t1_ParamLimits

0xdd41,	// (0x0004ace2) scroll_pane_cp039_ParamLimits

0xb3ae,	// (0x0004834f) navi_pane_bcale_mc_g1

0xb3b6,	// (0x00048357) navi_pane_bcale_mc_t1

0xe805,	// (0x0004b7a6) main_sp_fs_email_pane_g1

0xe811,	// (0x0004b7b2) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0004cc99) main_sp_fs_email_pane_g

0xea70,	// (0x0004ba11) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea70,	// (0x0004ba11) list_single_cale_mrui_row_pane_g3

0x1f75,	// (0x0003ef16) list_single_recal_day_pane_g5_event_pane

0x1f8b,	// (0x0003ef2c) list_single_recal_day_pane_g7

0xf068,	// (0x0004c009) list_recal_day_event_pane_cp01

0xf071,	// (0x0004c012) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0004c01a) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0004c022) list_recal_vselct_pane_cp01

0xd975,	// (0x0004a916) list_recal_day_event_pane_cp01_g1

0x213b,	// (0x0003f0dc) list_recal_day_event_pane_cp01_t1

0x1f93,	// (0x0003ef34) list_single_recal_day_pane_t1_ParamLimits

0x1fa5,	// (0x0003ef46) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x0004cdf6) list_single_recal_day_pane_t_ParamLimits

0xa811,	// (0x000477b2) bg_notes_pane_ParamLimits

0xa8c0,	// (0x00047861) list_notes_pane_ParamLimits

0x276d,	// (0x0003f70e) scroll_pane_cp06_ParamLimits

0xa8e2,	// (0x00047883) main_notes_pane_ParamLimits

0xa183,	// (0x00047124) main_welc_pane

0xa03f,	// (0x00046fe0) main_welc_body_pane_ParamLimits

0xa03f,	// (0x00046fe0) main_welc_body_pane

0xa058,	// (0x00046ff9) main_welc_opti_pane_ParamLimits

0xa058,	// (0x00046ff9) main_welc_opti_pane

0xa08b,	// (0x0004702c) main_welc_pane_t1_ParamLimits

0xa08b,	// (0x0004702c) main_welc_pane_t1

0xa0a5,	// (0x00047046) main_welc_body_row_pane_ParamLimits

0xa0a5,	// (0x00047046) main_welc_body_row_pane

0xd880,	// (0x0004a821) main_welc_opti_row_pane_ParamLimits

0xd880,	// (0x0004a821) main_welc_opti_row_pane

0xf08b,	// (0x0004c02c) main_welc_opti_row_pane_g1

0xa0ce,	// (0x0004706f) main_welc_opti_row_pane_t1

0xf093,	// (0x0004c034) main_welc_body_row_pane_t1

0xedc3,	// (0x0004bd64) popup_notif_wgt_heading_pane

0xeddd,	// (0x0004bd7e) aid_size_list_notif_wgt_del_ParamLimits

0xedea,	// (0x0004bd8b) list_notif_wgt_row_pane_g1_ParamLimits

0xedf6,	// (0x0004bd97) list_notif_wgt_row_pane_g2_ParamLimits

0xee05,	// (0x0004bda6) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x0004ce5d) list_notif_wgt_row_pane_g_ParamLimits

0xee12,	// (0x0004bdb3) list_notif_wgt_row_pane_t1_ParamLimits

0xee28,	// (0x0004bdc9) list_notif_wgt_row_pane_t2_ParamLimits

0xee3a,	// (0x0004bddb) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x0004ce64) list_notif_wgt_row_pane_t_ParamLimits

0x9b47,	// (0x00046ae8) listrow_wgtman_pane_g1_ParamLimits

0x9b54,	// (0x00046af5) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x0004ce8d) listrow_wgtman_pane_g_ParamLimits

0x2032,	// (0x0003efd3) listrow_wgtman_pane_t1_ParamLimits

0x204a,	// (0x0003efeb) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x0004ce92) listrow_wgtman_pane_t_ParamLimits

0x2070,	// (0x0003f011) wait_bar_pane_cp09_ParamLimits

0xa183,	// (0x00047124) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0004c043) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0004c04b) popup_notif_wgt_heading_pane_t1

0xa183,	// (0x00047124) main_vids_pane

0xa183,	// (0x00047124) vids_listscroll_pane

0xa0dd,	// (0x0004707e) scroll_pane_cp040

0xa183,	// (0x00047124) vids_list_pane

0xa0e8,	// (0x00047089) vids_list_double_pane_ParamLimits

0xa0e8,	// (0x00047089) vids_list_double_pane

0xa100,	// (0x000470a1) vids_list_double_pane_g1

0xa109,	// (0x000470aa) vids_list_double_pane_t1

0xa119,	// (0x000470ba) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x0004cf16) vids_list_double_pane_t

0xadd9,	// (0x00047d7a) main_ncimui_pane_ParamLimits

0x8baf,	// (0x00045b50) main_ncimui_pane_g1_ParamLimits

0x8bbb,	// (0x00045b5c) main_ncimui_pane_g2_ParamLimits

0x8bbb,	// (0x00045b5c) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0004cb9e) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0004cb9e) main_ncimui_pane_g

0xa071,	// (0x00047012) main_welc_pane_g1_ParamLimits

0xa071,	// (0x00047012) main_welc_pane_g1

0xa07d,	// (0x0004701e) main_welc_pane_g2_ParamLimits

0xa07d,	// (0x0004701e) main_welc_pane_g2

0x0001,

0xff70,	// (0x0004cf11) main_welc_pane_g_ParamLimits

0xff70,	// (0x0004cf11) main_welc_pane_g

0xa811,	// (0x000477b2) listscroll_mce_pane_ParamLimits

0xb51d,	// (0x000484be) wait_bar_pane_cp10

0xc956,	// (0x000498f7) main_cale_day_pane_ParamLimits

0xc956,	// (0x000498f7) main_cale_week_pane_ParamLimits

0xa811,	// (0x000477b2) main_messa_pane_ParamLimits

0x66be,	// (0x0004365f) main_clock2_btn_pane_ParamLimits

0x66be,	// (0x0004365f) main_clock2_btn_pane

0xd137,	// (0x0004a0d8) main_clock2_btn_pane_cp01_ParamLimits

0xd137,	// (0x0004a0d8) main_clock2_btn_pane_cp01

0xea41,	// (0x0004b9e2) list_cale_mrui_pane_ParamLimits

0xee70,	// (0x0004be11) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x0004ce6b) main_cf0_pane_g

0x9d07,	// (0x00046ca8) area_left_week_number_pane_ParamLimits

0x9d1a,	// (0x00046cbb) area_top_day_name_pane_ParamLimits

0x9d28,	// (0x00046cc9) frame_month_view_pane_ParamLimits

0xef66,	// (0x0004bf07) grid_month_view_pane_ParamLimits

0xef74,	// (0x0004bf15) frm_month_g1_ParamLimits

0x9da6,	// (0x00046d47) frm_month_g2_ParamLimits

0x9db7,	// (0x00046d58) frm_month_g3_ParamLimits

0x9dc8,	// (0x00046d69) frm_month_g4_ParamLimits

0x9dd9,	// (0x00046d7a) frm_month_g5_ParamLimits

0x9dec,	// (0x00046d8d) frm_month_g6_ParamLimits

0x9dff,	// (0x00046da0) frm_month_g7_ParamLimits

0xef81,	// (0x0004bf22) frm_month_g8_ParamLimits

0x9e12,	// (0x00046db3) frm_month_g9_ParamLimits

0x9e1f,	// (0x00046dc0) frm_month_g10_ParamLimits

0x9e2c,	// (0x00046dcd) frm_month_g11_ParamLimits

0x9e39,	// (0x00046dda) frm_month_g12_ParamLimits

0x9e46,	// (0x00046de7) frm_month_g13_ParamLimits

0x9e53,	// (0x00046df4) frm_month_g14_ParamLimits

0x9e62,	// (0x00046e03) frm_month_g15_ParamLimits

0x9e71,	// (0x00046e12) frm_month_g16_ParamLimits

0xff1b,	// (0x0004cebc) frm_month_g_ParamLimits

0xef8e,	// (0x0004bf2f) cell_top_day_name_pane_t1_ParamLimits

0x9e80,	// (0x00046e21) cell_area_left_week_number_pane_g1_ParamLimits

0x9e8f,	// (0x00046e30) cell_area_left_week_number_pane_t1_ParamLimits

0xcfaf,	// (0x00049f50) cell_month_view_pane_g1_ParamLimits

0x9ea5,	// (0x00046e46) cell_month_view_pane_t1_ParamLimits

0xa809,	// (0x000477aa) main_clock2_btn_pane_g1

0xf0b8,	// (0x0004c059) main_clock2_btn_pane_t1

0xadd9,	// (0x00047d7a) listscroll_cmail_pane_ParamLimits

0xe805,	// (0x0004b7a6) main_sp_fs_email_pane_g1_ParamLimits

0xe811,	// (0x0004b7b2) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0004cc99) main_sp_fs_email_pane_g_ParamLimits

0xeb4f,	// (0x0004baf0) list_recal_day_pane_ParamLimits

0xeb60,	// (0x0004bb01) mian_recal_day_pane_t1

0x1931,	// (0x0003e8d2) list_single_dyc_row_text_pane_t4_ParamLimits

0x1931,	// (0x0003e8d2) list_single_dyc_row_text_pane_t4

0x1968,	// (0x0003e909) list_single_dyc_row_text_pane_t5_ParamLimits

0x1968,	// (0x0003e909) list_single_dyc_row_text_pane_t5

0x19de,	// (0x0003e97f) list_single_dyc_row_text_pane_t6_ParamLimits

0x19de,	// (0x0003e97f) list_single_dyc_row_text_pane_t6

0x434d,	// (0x000412ee) aid_mgn_list_cale_time_pane

0xadd9,	// (0x00047d7a) main_gallery2_pane_ParamLimits

0xd14d,	// (0x0004a0ee) main_clock2_pane_cp01_t1

0xd15b,	// (0x0004a0fc) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x0004c774) main_clock2_pane_cp01_t

0x2bbf,	// (0x0003fb60) cale_week_scroll_pane_g16_ParamLimits

0x2bbf,	// (0x0003fb60) cale_week_scroll_pane_g16

0xaaa7,	// (0x00047a48) vorec_slider_pane

0xf052,	// (0x0004bff3) vidtel_button_pane_t1_ParamLimits

0x979d,	// (0x0004673e) main_fs_bigclock_clock_pane_g1_ParamLimits

0x979d,	// (0x0004673e) main_fs_bigclock_clock_pane_g2_ParamLimits

0x97aa,	// (0x0004674b) main_fs_bigclock_clock_pane_g3_ParamLimits

0x97aa,	// (0x0004674b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x0004ce19) main_fs_bigclock_clock_pane_g_ParamLimits

0x97b6,	// (0x00046757) main_fs_bigclock_clock_pane_t1_ParamLimits

0x97c9,	// (0x0004676a) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x0004ce22) main_fs_bigclock_clock_pane_t_ParamLimits

0x5f63,	// (0x00042f04) main_mup3_lyrics_pane_ParamLimits

0x5f63,	// (0x00042f04) main_mup3_lyrics_pane

0xa14d,	// (0x000470ee) main_mup3_lyrics_pane_t1_ParamLimits

0xa14d,	// (0x000470ee) main_mup3_lyrics_pane_t1

0x6d10,	// (0x00043cb1) aid_main_mp4_pane_t1_area

0x6d1a,	// (0x00043cbb) aid_main_mp4_pane_t2_area

0x6e19,	// (0x00043dba) main_mp4_pane_g7_ParamLimits

0x6e19,	// (0x00043dba) main_mp4_pane_g7

0x6e25,	// (0x00043dc6) main_mp4_pane_g8_ParamLimits

0x6e25,	// (0x00043dc6) main_mp4_pane_g8

0x7237,	// (0x000441d8) aid_call6_pane_g1_size

0xa000,	// (0x00046fa1) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa000,	// (0x00046fa1) list_double_large_graphic_phob2_other_pane

0xae97,	// (0x00047e38) list_double_large_graphic_phob2_other_pane_g1

0xa183,	// (0x00047124) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
