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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0007e4b4 };

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
0x52be,	// (0x00083772) Screen

0x52c8,	// (0x0008377c) application_window

0x531a,	// (0x000837ce) area_bottom_pane_ParamLimits

0x531a,	// (0x000837ce) area_bottom_pane

0x5356,	// (0x0008380a) area_top_pane_ParamLimits

0x5356,	// (0x0008380a) area_top_pane

0x53b2,	// (0x00083866) call_video_uplink_pane_ParamLimits

0x53b2,	// (0x00083866) call_video_uplink_pane

0x53ed,	// (0x000838a1) main_pane_ParamLimits

0x53ed,	// (0x000838a1) main_pane

0x10f1,	// (0x0007f5a5) context_pane

0x8478,	// (0x0008692c) navi_pane

0x8492,	// (0x00086946) popup_cale_events_window_ParamLimits

0x8492,	// (0x00086946) popup_cale_events_window

0x1104,	// (0x0007f5b8) popup_mup_playback_window

0x84a9,	// (0x0008695d) signal_pane

0xdcae,	// (0x0008c162) main_browser_pane

0xde85,	// (0x0008c339) main_burst_pane

0x5516,	// (0x000839ca) main_calc_pane

0x107d,	// (0x0007f531) main_cale_day_pane

0x5a67,	// (0x00083f1b) main_cale_month_pane

0x107d,	// (0x0007f531) main_cale_week_pane

0xde85,	// (0x0008c339) main_call_pane

0xd98a,	// (0x0008be3e) main_call_poc_pane

0xde85,	// (0x0008c339) main_camera_pane

0xde85,	// (0x0008c339) main_chi_dic_pane

0xe688,	// (0x0008cb3c) main_clock_pane

0xd98a,	// (0x0008be3e) main_fmradio_pane

0xde85,	// (0x0008c339) main_graph_messa_pane

0xd98a,	// (0x0008be3e) main_help_pane

0xdcae,	// (0x0008c162) main_im_pane

0xdbe5,	// (0x0008c099) main_image_pane_ParamLimits

0xdbe5,	// (0x0008c099) main_image_pane

0xd98a,	// (0x0008be3e) main_location2_pane

0xde85,	// (0x0008c339) main_location_pane

0xdbe5,	// (0x0008c099) main_messa_pane

0xd98a,	// (0x0008be3e) main_mp2_pane

0xde85,	// (0x0008c339) main_mp_pane

0xd98a,	// (0x0008be3e) main_msg_pane

0xd98a,	// (0x0008be3e) main_mup_eq_pane

0xd98a,	// (0x0008be3e) main_mup_pane

0xdcae,	// (0x0008c162) main_notes_pane

0xd98a,	// (0x0008be3e) main_pec_pane

0xd98a,	// (0x0008be3e) main_phob_pane

0xd98a,	// (0x0008be3e) main_pinb_pane

0xd98a,	// (0x0008be3e) main_postcard_pane

0xd98a,	// (0x0008be3e) main_qdial_pane

0xde85,	// (0x0008c339) main_skin_pane

0xd98a,	// (0x0008be3e) main_smil2_pane

0xde85,	// (0x0008c339) main_smil_pane

0xde85,	// (0x0008c339) main_video_pane

0xde85,	// (0x0008c339) main_video_tele_pane

0xdbe5,	// (0x0008c099) main_viewer_pane_ParamLimits

0xdbe5,	// (0x0008c099) main_viewer_pane

0xde85,	// (0x0008c339) main_vorec_pane

0x8376,	// (0x0008682a) popup_blid_sat_info_window_ParamLimits

0x8376,	// (0x0008682a) popup_blid_sat_info_window

0x8392,	// (0x00086846) popup_dyc_status_message_window_ParamLimits

0x8392,	// (0x00086846) popup_dyc_status_message_window

0x839e,	// (0x00086852) popup_grid_large_graphic_window_ParamLimits

0x839e,	// (0x00086852) popup_grid_large_graphic_window

0x840f,	// (0x000868c3) popup_loc_request_window_ParamLimits

0x840f,	// (0x000868c3) popup_loc_request_window

0x8452,	// (0x00086906) popup_wml_address_window_ParamLimits

0x8452,	// (0x00086906) popup_wml_address_window

0x8245,	// (0x000866f9) call_muted_g1

0x7f80,	// (0x00086434) popup_call_audio_conf_window_ParamLimits

0x7f80,	// (0x00086434) popup_call_audio_conf_window

0x8255,	// (0x00086709) popup_call_audio_first_window_ParamLimits

0x8255,	// (0x00086709) popup_call_audio_first_window

0x8289,	// (0x0008673d) popup_call_audio_in_window_ParamLimits

0x8289,	// (0x0008673d) popup_call_audio_in_window

0x82a5,	// (0x00086759) popup_call_audio_out_window_ParamLimits

0x82a5,	// (0x00086759) popup_call_audio_out_window

0x82c1,	// (0x00086775) popup_call_audio_second_window_ParamLimits

0x82c1,	// (0x00086775) popup_call_audio_second_window

0x82e9,	// (0x0008679d) popup_call_audio_wait_window_ParamLimits

0x82e9,	// (0x0008679d) popup_call_audio_wait_window

0x8308,	// (0x000867bc) popup_number_entry_window_ParamLimits

0x8308,	// (0x000867bc) popup_number_entry_window

0x026e,	// (0x0007e722) bg_popup_call_pane_cp05_ParamLimits

0x026e,	// (0x0007e722) bg_popup_call_pane_cp05

0xd599,	// (0x0008ba4d) popup_number_entry_window_t1

0xd5ac,	// (0x0008ba60) popup_number_entry_window_t2

0xd5be,	// (0x0008ba72) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0008d563) popup_number_entry_window_t

0xd5d0,	// (0x0008ba84) text_title_cp2

0xd5e3,	// (0x0008ba97) bg_popup_call_pane_cp_ParamLimits

0xd5e3,	// (0x0008ba97) bg_popup_call_pane_cp

0xd5f1,	// (0x0008baa5) call_thumbnail_pane

0xd5f9,	// (0x0008baad) popup_call_audio_in_window_g1_ParamLimits

0xd5f9,	// (0x0008baad) popup_call_audio_in_window_g1

0xd605,	// (0x0008bab9) popup_call_audio_in_window_g2_ParamLimits

0xd605,	// (0x0008bab9) popup_call_audio_in_window_g2

0xd611,	// (0x0008bac5) popup_call_audio_in_window_g3_ParamLimits

0xd611,	// (0x0008bac5) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0008d56c) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0008d56c) popup_call_audio_in_window_g

0xd61d,	// (0x0008bad1) popup_call_audio_in_window_t1_ParamLimits

0xd61d,	// (0x0008bad1) popup_call_audio_in_window_t1

0xd638,	// (0x0008baec) popup_call_audio_in_window_t2_ParamLimits

0xd638,	// (0x0008baec) popup_call_audio_in_window_t2

0xd653,	// (0x0008bb07) popup_call_audio_in_window_t3_ParamLimits

0xd653,	// (0x0008bb07) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0008d573) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0008d573) popup_call_audio_in_window_t

0xd5e3,	// (0x0008ba97) bg_popup_call_pane_cp01_ParamLimits

0xd5e3,	// (0x0008ba97) bg_popup_call_pane_cp01

0xd5f1,	// (0x0008baa5) call_thumbnail_pane_cp02

0xd666,	// (0x0008bb1a) call_type_pane_cp022

0xd66e,	// (0x0008bb22) popup_call_audio_out_window_g1_ParamLimits

0xd66e,	// (0x0008bb22) popup_call_audio_out_window_g1

0xd680,	// (0x0008bb34) popup_call_audio_out_window_g2_ParamLimits

0xd680,	// (0x0008bb34) popup_call_audio_out_window_g2

0xd68c,	// (0x0008bb40) popup_call_audio_out_window_g3_ParamLimits

0xd68c,	// (0x0008bb40) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0008d57a) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0008d57a) popup_call_audio_out_window_g

0xd69e,	// (0x0008bb52) popup_call_audio_out_window_t1_ParamLimits

0xd69e,	// (0x0008bb52) popup_call_audio_out_window_t1

0xd6b6,	// (0x0008bb6a) popup_call_audio_out_window_t2_ParamLimits

0xd6b6,	// (0x0008bb6a) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0008d581) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0008d581) popup_call_audio_out_window_t

0xd6cb,	// (0x0008bb7f) bg_popup_call_pane_ParamLimits

0xd6cb,	// (0x0008bb7f) bg_popup_call_pane

0x55b8,	// (0x00083a6c) call_thumbnail_pane_cp_ParamLimits

0x55b8,	// (0x00083a6c) call_thumbnail_pane_cp

0xd74f,	// (0x0008bc03) call_type_pane_cp01_ParamLimits

0xd74f,	// (0x0008bc03) call_type_pane_cp01

0xd793,	// (0x0008bc47) popup_call_audio_first_window_g1_ParamLimits

0xd793,	// (0x0008bc47) popup_call_audio_first_window_g1

0xd7df,	// (0x0008bc93) popup_call_audio_first_window_g2_ParamLimits

0xd7df,	// (0x0008bc93) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0008d586) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0008d586) popup_call_audio_first_window_g

0xd823,	// (0x0008bcd7) popup_call_audio_first_window_t1_ParamLimits

0xd823,	// (0x0008bcd7) popup_call_audio_first_window_t1

0xd8cf,	// (0x0008bd83) popup_call_audio_first_window_t4_ParamLimits

0xd8cf,	// (0x0008bd83) popup_call_audio_first_window_t4

0xd95b,	// (0x0008be0f) popup_call_audio_first_window_t5_ParamLimits

0xd95b,	// (0x0008be0f) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0008d58b) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0008d58b) popup_call_audio_first_window_t

0xd98a,	// (0x0008be3e) bg_popup_call_pane_cp02

0xd994,	// (0x0008be48) call_type_pane_cp023

0xd99c,	// (0x0008be50) popup_call_audio_wait_window_g1

0xd9a4,	// (0x0008be58) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0008d592) popup_call_audio_wait_window_g

0xd9ac,	// (0x0008be60) popup_call_audio_wait_window_t3

0xd9ba,	// (0x0008be6e) bg_popup_call_pane_cp03_ParamLimits

0xd9ba,	// (0x0008be6e) bg_popup_call_pane_cp03

0xda1a,	// (0x0008bece) call_thumbnail_pane_cp011_ParamLimits

0xda1a,	// (0x0008bece) call_thumbnail_pane_cp011

0xda26,	// (0x0008beda) call_type_pane_cp034_ParamLimits

0xda26,	// (0x0008beda) call_type_pane_cp034

0xda62,	// (0x0008bf16) popup_call_audio_second_window_g1_ParamLimits

0xda62,	// (0x0008bf16) popup_call_audio_second_window_g1

0xda9e,	// (0x0008bf52) popup_call_audio_second_window_g2_ParamLimits

0xda9e,	// (0x0008bf52) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0008d597) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0008d597) popup_call_audio_second_window_g

0xdada,	// (0x0008bf8e) popup_call_audio_second_window_t1_ParamLimits

0xdada,	// (0x0008bf8e) popup_call_audio_second_window_t1

0xdb5b,	// (0x0008c00f) popup_call_audio_second_window_t2_ParamLimits

0xdb5b,	// (0x0008c00f) popup_call_audio_second_window_t2

0xdb91,	// (0x0008c045) popup_call_audio_second_window_t3_ParamLimits

0xdb91,	// (0x0008c045) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0008d59c) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0008d59c) popup_call_audio_second_window_t

0xd98a,	// (0x0008be3e) bg_popup_call_pane_cp04

0xdbc7,	// (0x0008c07b) list_conf_pane

0xdbcf,	// (0x0008c083) popup_call_audio_conf_window_t1

0xdbdd,	// (0x0008c091) call_thumbnail_pane_g1

0xdbe5,	// (0x0008c099) bg_pinb_pane_ParamLimits

0xdbe5,	// (0x0008c099) bg_pinb_pane

0xdbf3,	// (0x0008c0a7) find_pinb_pane

0xdbfc,	// (0x0008c0b0) listscroll_pinb_pane_ParamLimits

0xdbfc,	// (0x0008c0b0) listscroll_pinb_pane

0xdc0b,	// (0x0008c0bf) pinb_bg_pane_g1

0x55dc,	// (0x00083a90) pinb_bg_pane_g2

0x55e6,	// (0x00083a9a) pinb_bg_pane_g3

0x55f0,	// (0x00083aa4) pinb_bg_pane_g4

0x55fa,	// (0x00083aae) pinb_bg_pane_g5

0x5604,	// (0x00083ab8) pinb_bg_pane_g6

0x560f,	// (0x00083ac3) pinb_bg_pane_g7

0x561a,	// (0x00083ace) pinb_bg_pane_g8

0x5623,	// (0x00083ad7) pinb_bg_pane_g9

0x562b,	// (0x00083adf) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0008d5a3) pinb_bg_pane_g

0x5648,	// (0x00083afc) grid_pinb_pane

0x5651,	// (0x00083b05) list_pinb_pane

0x565c,	// (0x00083b10) scroll_pane_cp01_ParamLimits

0x565c,	// (0x00083b10) scroll_pane_cp01

0xdc15,	// (0x0008c0c9) find_pinb_pane_g1_ParamLimits

0xdc15,	// (0x0008c0c9) find_pinb_pane_g1

0xdc2d,	// (0x0008c0e1) find_pinb_pane_t1

0xdc3f,	// (0x0008c0f3) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0008d5bd) find_pinb_pane_t

0xdc54,	// (0x0008c108) input_focus_pane_cp01_ParamLimits

0xdc54,	// (0x0008c108) input_focus_pane_cp01

0x566c,	// (0x00083b20) cell_pinb_pane_ParamLimits

0x566c,	// (0x00083b20) cell_pinb_pane

0x5685,	// (0x00083b39) cell_pinb_pane_g1_ParamLimits

0x5685,	// (0x00083b39) cell_pinb_pane_g1

0x5699,	// (0x00083b4d) cell_pinb_pane_g2_ParamLimits

0x5699,	// (0x00083b4d) cell_pinb_pane_g2

0xdc60,	// (0x0008c114) cell_pinb_pane_g3_ParamLimits

0xdc60,	// (0x0008c114) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0008d5c2) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0008d5c2) cell_pinb_pane_g

0xd98a,	// (0x0008be3e) grid_highlight_pane_cp01

0x56a5,	// (0x00083b59) list_pinb_item_pane_ParamLimits

0x56a5,	// (0x00083b59) list_pinb_item_pane

0xd98a,	// (0x0008be3e) list_highlight_pane_cp02

0x56ba,	// (0x00083b6e) list_pinb_item_pane_g1_ParamLimits

0x56ba,	// (0x00083b6e) list_pinb_item_pane_g1

0x56c7,	// (0x00083b7b) list_pinb_item_pane_g2_ParamLimits

0x56c7,	// (0x00083b7b) list_pinb_item_pane_g2

0x56d3,	// (0x00083b87) list_pinb_item_pane_g3_ParamLimits

0x56d3,	// (0x00083b87) list_pinb_item_pane_g3

0x56e2,	// (0x00083b96) list_pinb_item_pane_g4_ParamLimits

0x56e2,	// (0x00083b96) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0008d5c9) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0008d5c9) list_pinb_item_pane_g

0x56ee,	// (0x00083ba2) list_pinb_item_pane_t1_ParamLimits

0x56ee,	// (0x00083ba2) list_pinb_item_pane_t1

0x571f,	// (0x00083bd3) calc_display_pane

0x5737,	// (0x00083beb) calc_paper_pane

0x5753,	// (0x00083c07) grid_calc_pane

0xd98a,	// (0x0008be3e) bg_list_pane_cp01

0x5773,	// (0x00083c27) clock_g1

0x577b,	// (0x00083c2f) clock_g2

0x0001,

0xf11e,	// (0x0008d5d2) clock_g

0x5783,	// (0x00083c37) clock_t1_ParamLimits

0x5783,	// (0x00083c37) clock_t1

0x5798,	// (0x00083c4c) clock_t2_ParamLimits

0x5798,	// (0x00083c4c) clock_t2

0x57aa,	// (0x00083c5e) clock_t3_ParamLimits

0x57aa,	// (0x00083c5e) clock_t3

0x57bc,	// (0x00083c70) clock_t4_ParamLimits

0x57bc,	// (0x00083c70) clock_t4

0x57ce,	// (0x00083c82) clock_t5_ParamLimits

0x57ce,	// (0x00083c82) clock_t5

0x57e3,	// (0x00083c97) clock_t6_ParamLimits

0x57e3,	// (0x00083c97) clock_t6

0x57f5,	// (0x00083ca9) clock_t7_ParamLimits

0x57f5,	// (0x00083ca9) clock_t7

0x5807,	// (0x00083cbb) clock_t8_ParamLimits

0x5807,	// (0x00083cbb) clock_t8

0x5819,	// (0x00083ccd) clock_t9_ParamLimits

0x5819,	// (0x00083ccd) clock_t9

0x0008,

0xf123,	// (0x0008d5d7) clock_t_ParamLimits

0xf123,	// (0x0008d5d7) clock_t

0xdc6c,	// (0x0008c120) popup_clock_analogue_window_cp02

0xdc6c,	// (0x0008c120) popup_clock_digital_window_cp01

0xdc74,	// (0x0008c128) listscroll_help_pane

0xd98a,	// (0x0008be3e) phob_pre_status_pane

0xdc7e,	// (0x0008c132) grid_qdial_pane

0xdbe5,	// (0x0008c099) listscroll_mce_pane

0xdbe5,	// (0x0008c099) bg_notes_pane

0xdc88,	// (0x0008c13c) list_notes_pane

0x582b,	// (0x00083cdf) scroll_pane_cp06

0xdc96,	// (0x0008c14a) bg_calc_paper_pane

0x5838,	// (0x00083cec) list_calc_pane

0xdcae,	// (0x0008c162) bg_calc_display_pane

0x5852,	// (0x00083d06) calc_display_pane_t1

0x5867,	// (0x00083d1b) calc_display_pane_t2

0x587c,	// (0x00083d30) calc_display_pane_t3

0x0002,

0xf136,	// (0x0008d5ea) calc_display_pane_t

0x588e,	// (0x00083d42) cell_calc_pane_ParamLimits

0x588e,	// (0x00083d42) cell_calc_pane

0xdcba,	// (0x0008c16e) bg_calc_paper_pane_g1

0xdcc6,	// (0x0008c17a) bg_calc_paper_pane_g2

0xdcd2,	// (0x0008c186) bg_calc_paper_pane_g3

0xdcde,	// (0x0008c192) bg_calc_paper_pane_g4

0xdcea,	// (0x0008c19e) bg_calc_paper_pane_g5

0x58b5,	// (0x00083d69) bg_calc_paper_pane_g6

0x58c4,	// (0x00083d78) bg_calc_paper_pane_g7

0x58d3,	// (0x00083d87) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0008d5f1) bg_calc_paper_pane_g

0x58e2,	// (0x00083d96) calc_bg_paper_pane_g9

0x58f1,	// (0x00083da5) list_calc_item_pane_ParamLimits

0x58f1,	// (0x00083da5) list_calc_item_pane

0xdcf6,	// (0x0008c1aa) list_calc_item_pane_g1

0x590a,	// (0x00083dbe) list_calc_item_pane_t1_ParamLimits

0x590a,	// (0x00083dbe) list_calc_item_pane_t1

0x591c,	// (0x00083dd0) list_calc_item_pane_t2_ParamLimits

0x591c,	// (0x00083dd0) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0008d602) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0008d602) list_calc_item_pane_t

0xdd03,	// (0x0008c1b7) cell_calc_pane_g1

0xdd0d,	// (0x0008c1c1) grid_highlight_pane_cp02

0xdd2f,	// (0x0008c1e3) bg_calc_display_pane_g1

0x594a,	// (0x00083dfe) bg_calc_display_pane_g2

0xdd38,	// (0x0008c1ec) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0008d60c) bg_calc_display_pane_g

0x5954,	// (0x00083e08) cell_qdial_pane_ParamLimits

0x5954,	// (0x00083e08) cell_qdial_pane

0x5966,	// (0x00083e1a) cell_qdial_pane_g1_ParamLimits

0x5966,	// (0x00083e1a) cell_qdial_pane_g1

0x5973,	// (0x00083e27) cell_qdial_pane_g2_ParamLimits

0x5973,	// (0x00083e27) cell_qdial_pane_g2

0xdd41,	// (0x0008c1f5) cell_qdial_pane_g3_ParamLimits

0xdd41,	// (0x0008c1f5) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0008d613) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0008d613) cell_qdial_pane_g

0x5991,	// (0x00083e45) cell_qdial_pane_t1_ParamLimits

0x5991,	// (0x00083e45) cell_qdial_pane_t1

0x59a9,	// (0x00083e5d) cell_qdial_pane_t2_ParamLimits

0x59a9,	// (0x00083e5d) cell_qdial_pane_t2

0x59bc,	// (0x00083e70) cell_qdial_pane_t3_ParamLimits

0x59bc,	// (0x00083e70) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0008d61c) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0008d61c) cell_qdial_pane_t

0xd98a,	// (0x0008be3e) grid_highlight_pane_cp04

0xdd4d,	// (0x0008c201) thumbnail_qdial_pane_ParamLimits

0xdd4d,	// (0x0008c201) thumbnail_qdial_pane

0xdda9,	// (0x0008c25d) list_help_pane

0xddb3,	// (0x0008c267) scroll_pane_cp02

0x59cf,	// (0x00083e83) help_list_pane_t1_ParamLimits

0x59cf,	// (0x00083e83) help_list_pane_t1

0x59ed,	// (0x00083ea1) bg_notes_pane_g2

0x59f5,	// (0x00083ea9) bg_notes_pane_g3

0x59fd,	// (0x00083eb1) notes_bg_pane_g1

0x5a05,	// (0x00083eb9) notes_bg_pane_g4

0x5a0d,	// (0x00083ec1) notes_bg_pane_g5

0x5a15,	// (0x00083ec9) notes_bg_pane_g6

0x5a1d,	// (0x00083ed1) notes_bg_pane_g7

0x5a25,	// (0x00083ed9) notes_bg_pane_g8

0x5a2d,	// (0x00083ee1) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0008d63a) notes_bg_pane_g

0x5a35,	// (0x00083ee9) list_notes_text_pane_ParamLimits

0x5a35,	// (0x00083ee9) list_notes_text_pane

0xddbc,	// (0x0008c270) list_notes_text_pane_g1

0x5a59,	// (0x00083f0d) list_notes_text_pane_t1

0x5a67,	// (0x00083f1b) listscroll_cale_week_pane

0x5a8c,	// (0x00083f40) bg_cale_heading_pane

0xdddf,	// (0x0008c293) bg_cale_pane_cp01

0x5aa4,	// (0x00083f58) cale_week_corner_pane

0x5abe,	// (0x00083f72) cale_week_day_heading_pane

0x5ad6,	// (0x00083f8a) cale_week_scroll_pane_g1

0x5ae9,	// (0x00083f9d) cale_week_scroll_pane_g2

0x5afc,	// (0x00083fb0) cale_week_scroll_pane_g3

0x5b0f,	// (0x00083fc3) cale_week_scroll_pane_g4

0x5b22,	// (0x00083fd6) cale_week_scroll_pane_g5

0x5b35,	// (0x00083fe9) cale_week_scroll_pane_g6

0x5b48,	// (0x00083ffc) cale_week_scroll_pane_g7

0x5b5b,	// (0x0008400f) cale_week_scroll_pane_g8

0x5b6e,	// (0x00084022) cale_week_scroll_pane_g9

0x5b81,	// (0x00084035) cale_week_scroll_pane_g10

0x5b94,	// (0x00084048) cale_week_scroll_pane_g11

0x5ba7,	// (0x0008405b) cale_week_scroll_pane_g12

0x5bba,	// (0x0008406e) cale_week_scroll_pane_g13

0x5bcd,	// (0x00084081) cale_week_scroll_pane_g14

0x5be0,	// (0x00084094) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0008d649) cale_week_scroll_pane_g

0x5c06,	// (0x000840ba) cale_week_time_pane

0x5c19,	// (0x000840cd) grid_cale_week_pane

0xde0e,	// (0x0008c2c2) scroll_pane_cp08

0x5c2e,	// (0x000840e2) cell_cale_week_pane_ParamLimits

0x5c2e,	// (0x000840e2) cell_cale_week_pane

0x5c7c,	// (0x00084130) cale_week_day_heading_pane_t1

0x5cb7,	// (0x0008416b) cale_week_day_heading_pane_t2

0x5cf2,	// (0x000841a6) cale_week_day_heading_pane_t3

0x5d2d,	// (0x000841e1) cale_week_day_heading_pane_t4

0x5d68,	// (0x0008421c) cale_week_day_heading_pane_t5

0x5da3,	// (0x00084257) cale_week_day_heading_pane_t6

0x5dde,	// (0x00084292) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0008d66a) cale_week_day_heading_pane_t

0xde2b,	// (0x0008c2df) bg_cale_side_pane

0x5e19,	// (0x000842cd) cale_week_time_pane_t1

0x5e53,	// (0x00084307) cale_week_time_pane_t2

0x5e8d,	// (0x00084341) cale_week_time_pane_t3

0x5ec7,	// (0x0008437b) cale_week_time_pane_t4

0x5f01,	// (0x000843b5) cale_week_time_pane_t5

0x5f3b,	// (0x000843ef) cale_week_time_pane_t6

0x5f75,	// (0x00084429) cale_week_time_pane_t7

0x5faf,	// (0x00084463) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0008d679) cale_week_time_pane_t

0x5fe9,	// (0x0008449d) cell_cale_week_pane_g2

0x600d,	// (0x000844c1) cell_cale_week_pane_g3_ParamLimits

0x600d,	// (0x000844c1) cell_cale_week_pane_g3

0xde39,	// (0x0008c2ed) grid_highlight_pane_cp07

0xde41,	// (0x0008c2f5) listscroll_gms_pane

0xde4b,	// (0x0008c2ff) grid_gms_pane

0xde54,	// (0x0008c308) listscroll_gms_pane_g1

0xde5c,	// (0x0008c310) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0008d68a) listscroll_gms_pane_g

0x6025,	// (0x000844d9) scroll_pane_cp010

0x602e,	// (0x000844e2) cell_gms_pane_ParamLimits

0x602e,	// (0x000844e2) cell_gms_pane

0x603f,	// (0x000844f3) cell_gms_pane_g1

0xde64,	// (0x0008c318) cell_gms_pane_g2

0xddbc,	// (0x0008c270) cell_gms_pane_g3

0xde6c,	// (0x0008c320) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0008d68f) cell_gms_pane_g

0xde75,	// (0x0008c329) grid_highlight_pane_cp09

0x81f3,	// (0x000866a7) phob_pre_status_pane_g1

0x81fb,	// (0x000866af) phob_pre_status_pane_g2

0x8203,	// (0x000866b7) phob_pre_status_pane_g3

0x820b,	// (0x000866bf) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0008da8d) phob_pre_status_pane_g

0x821b,	// (0x000866cf) phob_pre_status_pane_t1

0x8229,	// (0x000866dd) phob_pre_status_pane_t2

0x8237,	// (0x000866eb) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0008da98) phob_pre_status_pane_t

0xde85,	// (0x0008c339) bg_list_pane_cp05

0x6047,	// (0x000844fb) grid_vorec_pane

0xde8d,	// (0x0008c341) vorec_t1

0xde9b,	// (0x0008c34f) vorec_t2

0xdea9,	// (0x0008c35d) vorec_t3

0x604f,	// (0x00084503) vorec_t4

0xd557,	// (0x0008ba0b) vorec_t5

0xd565,	// (0x0008ba19) vorec_t6

0x0004,

0xf1e4,	// (0x0008d698) vorec_t

0xd573,	// (0x0008ba27) wait_bar_pane_cp01

0xdec5,	// (0x0008c379) cell_vorec_pane_ParamLimits

0xdec5,	// (0x0008c379) cell_vorec_pane

0x605d,	// (0x00084511) cell_vorec_pane_g1

0xd98a,	// (0x0008be3e) grid_highlight_pane_cp05

0x6073,	// (0x00084527) cams_zoom_pane

0x607f,	// (0x00084533) image_vga_pane

0x608c,	// (0x00084540) main_camera_pane_g1

0x6098,	// (0x0008454c) main_camera_pane_g2

0x60a4,	// (0x00084558) main_camera_pane_g3

0x60b0,	// (0x00084564) main_camera_pane_g4

0x60bc,	// (0x00084570) main_camera_pane_g5

0x60c8,	// (0x0008457c) main_camera_pane_g6

0x60d4,	// (0x00084588) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0008d6a3) main_camera_pane_g

0x60e0,	// (0x00084594) main_camera_pane_t1

0x60f2,	// (0x000845a6) main_camera_pane_t2

0x0001,

0xf200,	// (0x0008d6b4) main_camera_pane_t

0x6116,	// (0x000845ca) cams_zoom_pane_cp_ParamLimits

0x6116,	// (0x000845ca) cams_zoom_pane_cp

0x613a,	// (0x000845ee) image_cif_pane_ParamLimits

0x613a,	// (0x000845ee) image_cif_pane

0x6154,	// (0x00084608) image_subqcif_pane

0x615c,	// (0x00084610) main_video_pane_g1_ParamLimits

0x615c,	// (0x00084610) main_video_pane_g1

0x617c,	// (0x00084630) main_video_pane_g2_ParamLimits

0x617c,	// (0x00084630) main_video_pane_g2

0x61aa,	// (0x0008465e) main_video_pane_g3_ParamLimits

0x61aa,	// (0x0008465e) main_video_pane_g3

0x61d3,	// (0x00084687) main_video_pane_g4_ParamLimits

0x61d3,	// (0x00084687) main_video_pane_g4

0x61fc,	// (0x000846b0) main_video_pane_g5_ParamLimits

0x61fc,	// (0x000846b0) main_video_pane_g5

0xdee4,	// (0x0008c398) main_video_pane_g6_ParamLimits

0xdee4,	// (0x0008c398) main_video_pane_g6

0x0006,

0xf205,	// (0x0008d6b9) main_video_pane_g_ParamLimits

0xf205,	// (0x0008d6b9) main_video_pane_g

0x621e,	// (0x000846d2) main_video_pane_t1_ParamLimits

0x621e,	// (0x000846d2) main_video_pane_t1

0xdefe,	// (0x0008c3b2) cams_zoom_pane_g1

0xdf07,	// (0x0008c3bb) cams_zoom_pane_g2

0xdf10,	// (0x0008c3c4) cams_zoom_pane_g3

0xdf19,	// (0x0008c3cd) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0008d6c8) cams_zoom_pane_g

0x6268,	// (0x0008471c) grid_cams_pane

0x6274,	// (0x00084728) linegrid_cams_pane

0x6280,	// (0x00084734) cell_cams_pane_ParamLimits

0x6280,	// (0x00084734) cell_cams_pane

0xdf22,	// (0x0008c3d6) cams_burst_image_pane

0xdf2a,	// (0x0008c3de) cell_cams_pane_g1

0xd98a,	// (0x0008be3e) grid_highlight_pane_cp03

0xdd03,	// (0x0008c1b7) mp_bg_pane_g1

0xd98a,	// (0x0008be3e) bg_list_pane_cp03

0x0fa2,	// (0x0007f456) bg_mp_pane

0x0faa,	// (0x0007f45e) grid_mp_pane

0x0fb2,	// (0x0007f466) media_player_g1

0x0fba,	// (0x0007f46e) media_player_t1

0x0fc8,	// (0x0007f47c) media_player_t2

0x0fd6,	// (0x0007f48a) media_player_t3

0x0fe4,	// (0x0007f498) media_player_t4

0x0ff2,	// (0x0007f4a6) media_player_t5

0x1000,	// (0x0007f4b4) media_player_t6

0x100e,	// (0x0007f4c2) media_player_t7

0x0006,

0xf5c3,	// (0x0008da77) media_player_t

0x101c,	// (0x0007f4d0) wait_bar_pane_cp02

0xf5a8,	// (0x0008da5c) main_usb_pane_t

0x81ea,	// (0x0008669e) cell_mp_pane

0xdd03,	// (0x0008c1b7) cell_mp_pane_g1

0xd98a,	// (0x0008be3e) grid_highlight_pane_cp06

0xdf32,	// (0x0008c3e6) grid_skin_colour_pane

0xdf3a,	// (0x0008c3ee) list_highlight_pane_cp03

0x6389,	// (0x0008483d) skin_g1

0xdf42,	// (0x0008c3f6) skin_t1

0xdf51,	// (0x0008c405) skin_t2

0x0001,

0xf249,	// (0x0008d6fd) skin_t

0x6391,	// (0x00084845) cell_skin_colour_pane_ParamLimits

0x6391,	// (0x00084845) cell_skin_colour_pane

0xdf5f,	// (0x0008c413) cell_skin_colour_pane_g1

0x6407,	// (0x000848bb) call_video_g1_ParamLimits

0x6407,	// (0x000848bb) call_video_g1

0x6413,	// (0x000848c7) call_video_g2_ParamLimits

0x6413,	// (0x000848c7) call_video_g2

0x0001,

0xf24e,	// (0x0008d702) call_video_g_ParamLimits

0xf24e,	// (0x0008d702) call_video_g

0x6463,	// (0x00084917) call_video_uplink_pane_cp1_ParamLimits

0x6463,	// (0x00084917) call_video_uplink_pane_cp1

0xdf71,	// (0x0008c425) call_video_uplink_pane_cp2

0x651f,	// (0x000849d3) video_down_crop_pane_ParamLimits

0x651f,	// (0x000849d3) video_down_crop_pane

0x65e9,	// (0x00084a9d) video_down_pane_ParamLimits

0x65e9,	// (0x00084a9d) video_down_pane

0xdf79,	// (0x0008c42d) video_down_subqcif_pane_ParamLimits

0xdf79,	// (0x0008c42d) video_down_subqcif_pane

0xdf91,	// (0x0008c445) video_down_subqcif_pane_cp_ParamLimits

0xdf91,	// (0x0008c445) video_down_subqcif_pane_cp

0xdfb5,	// (0x0008c469) im_reading_pane_ParamLimits

0xdfb5,	// (0x0008c469) im_reading_pane

0x66b5,	// (0x00084b69) im_writing_pane_ParamLimits

0x66b5,	// (0x00084b69) im_writing_pane

0x66cb,	// (0x00084b7f) im_reading_pane_t1

0xdfcf,	// (0x0008c483) list_im_pane

0xdfe0,	// (0x0008c494) scroll_pane_cp07

0x6703,	// (0x00084bb7) im_writing_pane_t1_ParamLimits

0x6703,	// (0x00084bb7) im_writing_pane_t1

0xdff9,	// (0x0008c4ad) im_writing_pane_t2_ParamLimits

0xdff9,	// (0x0008c4ad) im_writing_pane_t2

0x0001,

0xf258,	// (0x0008d70c) im_writing_pane_t_ParamLimits

0xf258,	// (0x0008d70c) im_writing_pane_t

0xd98a,	// (0x0008be3e) input_focus_pane_cp04

0xd98a,	// (0x0008be3e) input_focus_pane_cp05

0x6718,	// (0x00084bcc) list_im_single_pane_ParamLimits

0x6718,	// (0x00084bcc) list_im_single_pane

0xe016,	// (0x0008c4ca) list_single_im_pane_t1

0x81b0,	// (0x00086664) blid_accuracy_pane

0x81b8,	// (0x0008666c) blid_compass_pane

0x81c0,	// (0x00086674) main_location_t1

0x81ce,	// (0x00086682) main_location_t2

0x81dc,	// (0x00086690) main_location_t3

0x0002,

0xf5d2,	// (0x0008da86) main_location_t

0xd98a,	// (0x0008be3e) aid_levels_location

0xdd03,	// (0x0008c1b7) blid_accuracy_pane_g1

0xdd03,	// (0x0008c1b7) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0008d76e) blid_accuracy_pane_g

0xe050,	// (0x0008c504) wml_content_pane

0xe08e,	// (0x0008c542) wml_button_pane_ParamLimits

0xe08e,	// (0x0008c542) wml_button_pane

0x6730,	// (0x00084be4) wml_list_single_large_pane_ParamLimits

0x6730,	// (0x00084be4) wml_list_single_large_pane

0x6747,	// (0x00084bfb) wml_list_single_medium_pane_ParamLimits

0x6747,	// (0x00084bfb) wml_list_single_medium_pane

0x675f,	// (0x00084c13) wml_list_single_small_pane_ParamLimits

0x675f,	// (0x00084c13) wml_list_single_small_pane

0xe0a2,	// (0x0008c556) wml_selection_box_pane_ParamLimits

0xe0a2,	// (0x0008c556) wml_selection_box_pane

0xe0b5,	// (0x0008c569) wml_list_single_pane_t1

0xe0c4,	// (0x0008c578) wml_list_single_medium_pane_t1

0xe0d3,	// (0x0008c587) wml_list_single_large_pane_t1

0xe0e2,	// (0x0008c596) input_focus_pane_cp02_ParamLimits

0xe0e2,	// (0x0008c596) input_focus_pane_cp02

0xe0f5,	// (0x0008c5a9) wml_selection_box_pane_g1

0xe0fe,	// (0x0008c5b2) wml_selection_box_pane_t1_ParamLimits

0xe0fe,	// (0x0008c5b2) wml_selection_box_pane_t1

0xdbe5,	// (0x0008c099) bg_wml_button_pane_ParamLimits

0xdbe5,	// (0x0008c099) bg_wml_button_pane

0xe116,	// (0x0008c5ca) wml_button_pane_g1

0xe11e,	// (0x0008c5d2) wml_button_pane_t1

0xe116,	// (0x0008c5ca) wml_button_bg_pane_g1

0xe12e,	// (0x0008c5e2) wml_button_bg_pane_g2

0xe136,	// (0x0008c5ea) wml_button_bg_pane_g3

0xe13e,	// (0x0008c5f2) wml_button_bg_pane_g4

0xe146,	// (0x0008c5fa) wml_button_bg_pane_g5

0xe14e,	// (0x0008c602) wml_button_bg_pane_g6

0xe156,	// (0x0008c60a) wml_button_bg_pane_g7

0xe15e,	// (0x0008c612) wml_button_bg_pane_g8

0xe166,	// (0x0008c61a) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0008d711) wml_button_bg_pane_g

0x677a,	// (0x00084c2e) bg_list_pane_cp02

0xe16e,	// (0x0008c622) mce_header_pane_ParamLimits

0xe16e,	// (0x0008c622) mce_header_pane

0xe182,	// (0x0008c636) mce_icon_pane

0xe182,	// (0x0008c636) mce_image_pane

0xe18b,	// (0x0008c63f) mce_text_pane_ParamLimits

0xe18b,	// (0x0008c63f) mce_text_pane

0x6783,	// (0x00084c37) scroll_pane_cp03

0x6783,	// (0x00084c37) scroll_pane_cp04

0xe19f,	// (0x0008c653) scroll_pane_cp05_ParamLimits

0xe19f,	// (0x0008c653) scroll_pane_cp05

0x678b,	// (0x00084c3f) mce_header_field_pane_ParamLimits

0x678b,	// (0x00084c3f) mce_header_field_pane

0x67ab,	// (0x00084c5f) mce_header_field_pane_2_ParamLimits

0x67ab,	// (0x00084c5f) mce_header_field_pane_2

0x67c1,	// (0x00084c75) mce_header_field_pane_3

0x67c9,	// (0x00084c7d) list_single_mce_message_pane_ParamLimits

0x67c9,	// (0x00084c7d) list_single_mce_message_pane

0x67e0,	// (0x00084c94) list_single_mce_smart_pane_ParamLimits

0x67e0,	// (0x00084c94) list_single_mce_smart_pane

0xe1ab,	// (0x0008c65f) input_focus_pane_cp03

0xe1b4,	// (0x0008c668) list_header_data_pane

0x6802,	// (0x00084cb6) mce_header_field_pane_t1

0x6810,	// (0x00084cc4) list_single_mce_header_pane_ParamLimits

0x6810,	// (0x00084cc4) list_single_mce_header_pane

0xe1bc,	// (0x0008c670) list_single_mce_header_pane_t1

0xe1cb,	// (0x0008c67f) list_single_mce_message_pane_g1

0xe1d4,	// (0x0008c688) list_single_mce_message_pane_t1

0x684e,	// (0x00084d02) bg_cale_heading_pane_cp01_ParamLimits

0x684e,	// (0x00084d02) bg_cale_heading_pane_cp01

0xe1e3,	// (0x0008c697) bg_cale_pane_cp02_ParamLimits

0xe1e3,	// (0x0008c697) bg_cale_pane_cp02

0x687d,	// (0x00084d31) cale_month_corner_pane

0x6897,	// (0x00084d4b) cale_month_day_heading_pane_ParamLimits

0x6897,	// (0x00084d4b) cale_month_day_heading_pane

0x68c6,	// (0x00084d7a) cale_month_pane_g1_ParamLimits

0x68c6,	// (0x00084d7a) cale_month_pane_g1

0x68ea,	// (0x00084d9e) cale_month_pane_g2_ParamLimits

0x68ea,	// (0x00084d9e) cale_month_pane_g2

0x6909,	// (0x00084dbd) cale_month_pane_g3_ParamLimits

0x6909,	// (0x00084dbd) cale_month_pane_g3

0x6945,	// (0x00084df9) cale_month_pane_g4_ParamLimits

0x6945,	// (0x00084df9) cale_month_pane_g4

0x6981,	// (0x00084e35) cale_month_pane_g5_ParamLimits

0x6981,	// (0x00084e35) cale_month_pane_g5

0x69bd,	// (0x00084e71) cale_month_pane_g6_ParamLimits

0x69bd,	// (0x00084e71) cale_month_pane_g6

0x69f9,	// (0x00084ead) cale_month_pane_g7_ParamLimits

0x69f9,	// (0x00084ead) cale_month_pane_g7

0x6a35,	// (0x00084ee9) cale_month_pane_g8_ParamLimits

0x6a35,	// (0x00084ee9) cale_month_pane_g8

0x6a71,	// (0x00084f25) cale_month_pane_g9_ParamLimits

0x6a71,	// (0x00084f25) cale_month_pane_g9

0x6aab,	// (0x00084f5f) cale_month_pane_g10_ParamLimits

0x6aab,	// (0x00084f5f) cale_month_pane_g10

0x6ae5,	// (0x00084f99) cale_month_pane_g11_ParamLimits

0x6ae5,	// (0x00084f99) cale_month_pane_g11

0x6b1f,	// (0x00084fd3) cale_month_pane_g12_ParamLimits

0x6b1f,	// (0x00084fd3) cale_month_pane_g12

0x6b59,	// (0x0008500d) cale_month_pane_g13_ParamLimits

0x6b59,	// (0x0008500d) cale_month_pane_g13

0x000c,

0xf270,	// (0x0008d724) cale_month_pane_g_ParamLimits

0xf270,	// (0x0008d724) cale_month_pane_g

0x6b93,	// (0x00085047) cale_month_week_pane

0x6ba6,	// (0x0008505a) grid_cale_month_pane_ParamLimits

0x6ba6,	// (0x0008505a) grid_cale_month_pane

0x6bcc,	// (0x00085080) cale_month_day_heading_pane_t1

0x6c52,	// (0x00085106) cale_month_day_heading_pane_t2

0x6ce3,	// (0x00085197) cale_month_day_heading_pane_t3

0x6d74,	// (0x00085228) cale_month_day_heading_pane_t4

0x6e05,	// (0x000852b9) cale_month_day_heading_pane_t5

0x6e96,	// (0x0008534a) cale_month_day_heading_pane_t6

0x6f27,	// (0x000853db) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0008d73f) cale_month_day_heading_pane_t

0xde2b,	// (0x0008c2df) bg_cale_side_pane_cp01

0x6fb8,	// (0x0008546c) cale_month_week_pane_t1

0x6ff1,	// (0x000854a5) cale_month_week_pane_t2

0x702a,	// (0x000854de) cale_month_week_pane_t3

0x7063,	// (0x00085517) cale_month_week_pane_t4

0x709c,	// (0x00085550) cale_month_week_pane_t5

0x70d5,	// (0x00085589) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0008d74e) cale_month_week_pane_t

0x710e,	// (0x000855c2) cell_cale_month_pane_ParamLimits

0x710e,	// (0x000855c2) cell_cale_month_pane

0x7226,	// (0x000856da) cell_cale_month_pane_g1

0x7232,	// (0x000856e6) cell_cale_month_pane_t1_ParamLimits

0x7232,	// (0x000856e6) cell_cale_month_pane_t1

0xde39,	// (0x0008c2ed) grid_highlight_pane_cp08

0xdd03,	// (0x0008c1b7) main_smil_g1

0x7252,	// (0x00085706) smil_status_pane

0xe222,	// (0x0008c6d6) smil_text_pane

0x0e82,	// (0x0007f336) bg_popup_call3_rect_pane_g8

0x0e8a,	// (0x0007f33e) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0008da07) bg_popup_call3_rect_pane_g

0x117e,	// (0x0007f632) smil_status_volume_pane_g1

0x7263,	// (0x00085717) smil_status_pane_t1

0x853b,	// (0x000869ef) volume_smil_pane

0xe22c,	// (0x0008c6e0) list_smil_text_pane

0x727a,	// (0x0008572e) scroll_pane_cp011

0x7283,	// (0x00085737) smil_text_list_pane_t1_ParamLimits

0x7283,	// (0x00085737) smil_text_list_pane_t1

0x72c2,	// (0x00085776) aid_volume_smil_ParamLimits

0x72c2,	// (0x00085776) aid_volume_smil

0xdd03,	// (0x0008c1b7) smil_volume_pane_g1

0xdd03,	// (0x0008c1b7) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0008d76e) smil_volume_pane_g

0x5a67,	// (0x00083f1b) listscroll_cale_day_pane

0xe236,	// (0x0008c6ea) bg_cale_pane

0xe24e,	// (0x0008c702) list_cale_pane

0xe271,	// (0x0008c725) scroll_pane_cp09

0xe282,	// (0x0008c736) cale_bg_pane_g1

0xe28a,	// (0x0008c73e) cale_bg_pane_g2

0xe292,	// (0x0008c746) cale_bg_pane_g3

0xe29a,	// (0x0008c74e) cale_bg_pane_g4

0xe2a2,	// (0x0008c756) cale_bg_pane_g5

0xe2aa,	// (0x0008c75e) cale_bg_pane_g6

0xe2b2,	// (0x0008c766) cale_bg_pane_g7

0xe2ba,	// (0x0008c76e) cale_bg_pane_g8

0xe2c2,	// (0x0008c776) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0008d773) cale_bg_pane_g

0x72ec,	// (0x000857a0) list_cale_time_pane_ParamLimits

0x72ec,	// (0x000857a0) list_cale_time_pane

0xe2ca,	// (0x0008c77e) list_cale_time_pane_g1_ParamLimits

0xe2ca,	// (0x0008c77e) list_cale_time_pane_g1

0xe2d6,	// (0x0008c78a) list_cale_time_pane_g2_ParamLimits

0xe2d6,	// (0x0008c78a) list_cale_time_pane_g2

0x7300,	// (0x000857b4) list_cale_time_pane_g3_ParamLimits

0x7300,	// (0x000857b4) list_cale_time_pane_g3

0x730c,	// (0x000857c0) list_cale_time_pane_g4_ParamLimits

0x730c,	// (0x000857c0) list_cale_time_pane_g4

0x7318,	// (0x000857cc) list_cale_time_pane_g5_ParamLimits

0x7318,	// (0x000857cc) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0008d786) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0008d786) list_cale_time_pane_g

0xe2f0,	// (0x0008c7a4) list_cale_time_pane_t1_ParamLimits

0xe2f0,	// (0x0008c7a4) list_cale_time_pane_t1

0xe318,	// (0x0008c7cc) list_cale_time_pane_t2_ParamLimits

0xe318,	// (0x0008c7cc) list_cale_time_pane_t2

0x76c9,	// (0x00085b7d) aid_blid_cardinal_pane

0x7707,	// (0x00085bbb) compass_pane_t4

0xe340,	// (0x0008c7f4) list_cale_time_pane_t4_ParamLimits

0xe340,	// (0x0008c7f4) list_cale_time_pane_t4

0x7715,	// (0x00085bc9) compass_pane_t5

0x7723,	// (0x00085bd7) compass_pane_t6

0x7731,	// (0x00085be5) compass_pane_t7

0xe7ad,	// (0x0008cc61) navi_pane_cc_t1

0xe952,	// (0x0008ce06) aid_phob_thumbnail_center_pane

0x7d5d,	// (0x00086211) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0008d793) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0008d793) list_cale_time_pane_t

0xd5e3,	// (0x0008ba97) bg_popup_window_pane_cp02_ParamLimits

0xd5e3,	// (0x0008ba97) bg_popup_window_pane_cp02

0xe368,	// (0x0008c81c) heading_pane_cp01_ParamLimits

0xe368,	// (0x0008c81c) heading_pane_cp01

0xe374,	// (0x0008c828) loc_req_pane_ParamLimits

0xe374,	// (0x0008c828) loc_req_pane

0xe384,	// (0x0008c838) loc_type_pane_ParamLimits

0xe384,	// (0x0008c838) loc_type_pane

0xe396,	// (0x0008c84a) loc_type_pane_t1_ParamLimits

0xe396,	// (0x0008c84a) loc_type_pane_t1

0xe3a8,	// (0x0008c85c) loc_type_pane_t2_ParamLimits

0xe3a8,	// (0x0008c85c) loc_type_pane_t2

0xe3ba,	// (0x0008c86e) loc_type_pane_t3_ParamLimits

0xe3ba,	// (0x0008c86e) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0008d79a) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0008d79a) loc_type_pane_t

0xe3cc,	// (0x0008c880) list_loc_req_pane

0xe3d6,	// (0x0008c88a) scroll_pane_cp012

0x7324,	// (0x000857d8) list_single_loc_request_popup_menu_pane_ParamLimits

0x7324,	// (0x000857d8) list_single_loc_request_popup_menu_pane

0xe3df,	// (0x0008c893) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe3df,	// (0x0008c893) list_single_loc_request_popup_menu_pane_g1

0xe3eb,	// (0x0008c89f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe3eb,	// (0x0008c89f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0008d7a1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0008d7a1) list_single_loc_request_popup_menu_pane_g

0xe3f7,	// (0x0008c8ab) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe3f7,	// (0x0008c8ab) list_single_loc_request_popup_menu_pane_t1

0x7336,	// (0x000857ea) bg_popup_window_pane_cp03_ParamLimits

0x7336,	// (0x000857ea) bg_popup_window_pane_cp03

0x7344,	// (0x000857f8) heading_loc_req_pane_ParamLimits

0x7344,	// (0x000857f8) heading_loc_req_pane

0x7350,	// (0x00085804) popup_dyc_status_message_window_g1_ParamLimits

0x7350,	// (0x00085804) popup_dyc_status_message_window_g1

0x735c,	// (0x00085810) popup_dyc_status_message_window_t1_ParamLimits

0x735c,	// (0x00085810) popup_dyc_status_message_window_t1

0x736e,	// (0x00085822) popup_dyc_status_message_window_t2_ParamLimits

0x736e,	// (0x00085822) popup_dyc_status_message_window_t2

0x7380,	// (0x00085834) popup_dyc_status_message_window_t3_ParamLimits

0x7380,	// (0x00085834) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0008d7a6) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0008d7a6) popup_dyc_status_message_window_t

0xd98a,	// (0x0008be3e) bg_heading_pane_cp01

0xe40d,	// (0x0008c8c1) heading_loc_req_pane_g1

0xe415,	// (0x0008c8c9) heading_loc_req_pane_g2

0xe41d,	// (0x0008c8d1) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0008d7ad) heading_loc_req_pane_g

0xe425,	// (0x0008c8d9) heading_loc_req_pane_t1

0xe434,	// (0x0008c8e8) bg_popup_sub_pane_cp01_ParamLimits

0xe434,	// (0x0008c8e8) bg_popup_sub_pane_cp01

0xe442,	// (0x0008c8f6) popup_cale_events_window_g1_ParamLimits

0xe442,	// (0x0008c8f6) popup_cale_events_window_g1

0xe462,	// (0x0008c916) popup_cale_events_window_g2_ParamLimits

0xe462,	// (0x0008c916) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0008d7e1) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0008d7e1) popup_cale_events_window_g

0xe482,	// (0x0008c936) popup_cale_events_window_t1_ParamLimits

0xe482,	// (0x0008c936) popup_cale_events_window_t1

0xe494,	// (0x0008c948) popup_cale_events_window_t2_ParamLimits

0xe494,	// (0x0008c948) popup_cale_events_window_t2

0xe4d2,	// (0x0008c986) popup_cale_events_window_t3_ParamLimits

0xe4d2,	// (0x0008c986) popup_cale_events_window_t3

0xe50c,	// (0x0008c9c0) popup_cale_events_window_t4_ParamLimits

0xe50c,	// (0x0008c9c0) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0008d7e6) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0008d7e6) popup_cale_events_window_t

0x74a0,	// (0x00085954) call_type_pane

0xe542,	// (0x0008c9f6) popup_call_status_window_g1

0x74ac,	// (0x00085960) popup_call_status_window_g2

0x74b8,	// (0x0008596c) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0008d7ef) popup_call_status_window_g

0xe550,	// (0x0008ca04) call_type_pane_g1

0xe559,	// (0x0008ca0d) call_type_pane_g2

0x0001,

0xf342,	// (0x0008d7f6) call_type_pane_g

0xd98a,	// (0x0008be3e) bg_popup_sub_pane_cp02

0xe562,	// (0x0008ca16) listscroll_popup_wml_pane

0xe56a,	// (0x0008ca1e) list_wml_pane

0xe574,	// (0x0008ca28) scroll_pane_cp013

0x74c4,	// (0x00085978) list_single_graphic_popup_wml_pane_ParamLimits

0x74c4,	// (0x00085978) list_single_graphic_popup_wml_pane

0xdd03,	// (0x0008c1b7) list_single_graphic_popup_wml_pane_g1

0xe57d,	// (0x0008ca31) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0008d7fb) list_single_graphic_popup_wml_pane_g

0xe585,	// (0x0008ca39) list_single_graphic_popup_wml_pane_t1

0xe59b,	// (0x0008ca4f) aid_call_pane

0xdbdd,	// (0x0008c091) popup_clock_analogue_window_g1

0xdbdd,	// (0x0008c091) popup_clock_analogue_window_g2

0x74d8,	// (0x0008598c) popup_clock_analogue_window_g3

0x74d8,	// (0x0008598c) popup_clock_analogue_window_g4

0xdd03,	// (0x0008c1b7) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0008d800) popup_clock_analogue_window_g

0x74e0,	// (0x00085994) popup_clock_analogue_window_t1

0x74ee,	// (0x000859a2) clock_digital_number_pane_ParamLimits

0x74ee,	// (0x000859a2) clock_digital_number_pane

0x74fa,	// (0x000859ae) clock_digital_number_pane_cp02_ParamLimits

0x74fa,	// (0x000859ae) clock_digital_number_pane_cp02

0x7506,	// (0x000859ba) clock_digital_number_pane_cp03_ParamLimits

0x7506,	// (0x000859ba) clock_digital_number_pane_cp03

0x7512,	// (0x000859c6) clock_digital_number_pane_cp04_ParamLimits

0x7512,	// (0x000859c6) clock_digital_number_pane_cp04

0x751e,	// (0x000859d2) clock_digital_separator_pane_ParamLimits

0x751e,	// (0x000859d2) clock_digital_separator_pane

0x752a,	// (0x000859de) popup_clock_digital_window_t1

0xdd03,	// (0x0008c1b7) clock_digital_number_pane_g1

0xdd03,	// (0x0008c1b7) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0008d76e) clock_digital_number_pane_g

0xdd03,	// (0x0008c1b7) clock_digital_separator_pane_g1

0xdd03,	// (0x0008c1b7) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0008d76e) clock_digital_separator_pane_g

0xd98a,	// (0x0008be3e) bg_popup_window_pane_cp04

0xe5a3,	// (0x0008ca57) heading_pane_cp03

0xe5ab,	// (0x0008ca5f) listscroll_popup_gms_pane

0xe5b3,	// (0x0008ca67) grid_large_graphic_popup_pane

0xe5bd,	// (0x0008ca71) listscroll_popup_gms_pane_g1

0xe5c5,	// (0x0008ca79) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0008d80b) listscroll_popup_gms_pane_g

0xe086,	// (0x0008c53a) scroll_pane_cp014

0x7547,	// (0x000859fb) cell_large_graphic_popup_pane_ParamLimits

0x7547,	// (0x000859fb) cell_large_graphic_popup_pane

0x755e,	// (0x00085a12) cell_large_graphic_popup_pane_g1_ParamLimits

0x755e,	// (0x00085a12) cell_large_graphic_popup_pane_g1

0xe5cd,	// (0x0008ca81) cell_large_graphic_popup_pane_g2_ParamLimits

0xe5cd,	// (0x0008ca81) cell_large_graphic_popup_pane_g2

0xe5d9,	// (0x0008ca8d) cell_large_graphic_popup_pane_g3_ParamLimits

0xe5d9,	// (0x0008ca8d) cell_large_graphic_popup_pane_g3

0xe5e6,	// (0x0008ca9a) cell_large_graphic_popup_pane_g4_ParamLimits

0xe5e6,	// (0x0008ca9a) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0008d810) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0008d810) cell_large_graphic_popup_pane_g

0xe5f6,	// (0x0008caaa) grid_highlight_pane_cp010

0xdd03,	// (0x0008c1b7) bg_popup_call_pane_g1

0xe600,	// (0x0008cab4) list_single_graphic_popup_conf_pane_ParamLimits

0xe600,	// (0x0008cab4) list_single_graphic_popup_conf_pane

0xe613,	// (0x0008cac7) list_highlight_pane_cp01

0xe61c,	// (0x0008cad0) list_single_graphic_popup_conf_pane_g1

0xe624,	// (0x0008cad8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0008d819) list_single_graphic_popup_conf_pane_g

0xe62c,	// (0x0008cae0) list_single_graphic_popup_conf_pane_t1

0xe63a,	// (0x0008caee) linegrid_cams_pane_g1

0x756a,	// (0x00085a1e) linegrid_cams_pane_g2

0xddbc,	// (0x0008c270) linegrid_cams_pane_g3

0xe643,	// (0x0008caf7) linegrid_cams_pane_g4

0x7573,	// (0x00085a27) linegrid_cams_pane_g5

0x757c,	// (0x00085a30) linegrid_cams_pane_g6

0xde6c,	// (0x0008c320) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0008d81e) linegrid_cams_pane_g

0xe64c,	// (0x0008cb00) popup_clock_analogue_window

0xe64c,	// (0x0008cb00) popup_clock_digital_window

0xd98a,	// (0x0008be3e) popup_phob_thumbnail_window

0xdd03,	// (0x0008c1b7) call_video_uplink_pane_g1

0xe655,	// (0x0008cb09) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0008d82d) call_video_uplink_pane_g

0xde39,	// (0x0008c2ed) video_uplink_pane

0xe65d,	// (0x0008cb11) mce_image_pane_g1

0x7585,	// (0x00085a39) mce_image_pane_g2

0x758d,	// (0x00085a41) mce_image_pane_g3

0x7595,	// (0x00085a49) mce_image_pane_g4

0x759d,	// (0x00085a51) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0008d832) mce_image_pane_g

0xe667,	// (0x0008cb1b) control_top_pane_stacon_cp01_ParamLimits

0xe667,	// (0x0008cb1b) control_top_pane_stacon_cp01

0xe677,	// (0x0008cb2b) uni_indicator_pane_stacon_cp01_ParamLimits

0xe677,	// (0x0008cb2b) uni_indicator_pane_stacon_cp01

0xe688,	// (0x0008cb3c) bg_popup_sub_pane_cp03

0xe692,	// (0x0008cb46) chi_dic_find_pane

0x75a5,	// (0x00085a59) listscroll_chi_dic_pane

0xe69a,	// (0x0008cb4e) main_pane_chidic_g1

0xe6a2,	// (0x0008cb56) chi_dic_find_pane_t1

0xe6b0,	// (0x0008cb64) find_chidic_pane

0xe6b9,	// (0x0008cb6d) chi_dic_list_pane_ParamLimits

0xe6b9,	// (0x0008cb6d) chi_dic_list_pane

0xe6ca,	// (0x0008cb7e) scroll_pane_cp020

0xe6d2,	// (0x0008cb86) find_chidic_pane_t1

0xd98a,	// (0x0008be3e) input_focus_pane_cp06

0x75b7,	// (0x00085a6b) list_chi_dic_pane_ParamLimits

0x75b7,	// (0x00085a6b) list_chi_dic_pane

0x75ca,	// (0x00085a7e) list_chi_dic_pane_t1_ParamLimits

0x75ca,	// (0x00085a7e) list_chi_dic_pane_t1

0xd98a,	// (0x0008be3e) list_highlight_pane_cp020

0xe6e1,	// (0x0008cb95) bg_cale_heading_pane_g1

0x75dd,	// (0x00085a91) bg_cale_heading_pane_g2

0x75e5,	// (0x00085a99) bg_cale_heading_pane_g3

0x75ed,	// (0x00085aa1) bg_cale_heading_pane_g4

0x75f5,	// (0x00085aa9) bg_cale_heading_pane_g5

0x75fd,	// (0x00085ab1) bg_cale_heading_pane_g6

0x7605,	// (0x00085ab9) bg_cale_heading_pane_g7

0x760d,	// (0x00085ac1) bg_cale_heading_pane_g8

0x7615,	// (0x00085ac9) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0008d83d) bg_cale_heading_pane_g

0xe6e1,	// (0x0008cb95) bg_cale_side_pane_g1

0x761d,	// (0x00085ad1) bg_cale_side_pane_g2

0x7625,	// (0x00085ad9) bg_cale_side_pane_g3

0x762d,	// (0x00085ae1) bg_cale_side_pane_g4

0x7635,	// (0x00085ae9) bg_cale_side_pane_g5

0x763d,	// (0x00085af1) bg_cale_side_pane_g6

0x7645,	// (0x00085af9) bg_cale_side_pane_g7

0x764d,	// (0x00085b01) bg_cale_side_pane_g8

0x7655,	// (0x00085b09) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0008d850) bg_cale_side_pane_g

0x765d,	// (0x00085b11) popup_call_status_window_ParamLimits

0x765d,	// (0x00085b11) popup_call_status_window

0xe6e9,	// (0x0008cb9d) stacon_top_pane

0xe6f1,	// (0x0008cba5) status_pane_ParamLimits

0xe6f1,	// (0x0008cba5) status_pane

0xe70b,	// (0x0008cbbf) status_small_pane

0xe713,	// (0x0008cbc7) control_pane

0xd98a,	// (0x0008be3e) stacon_bottom_pane

0xe71b,	// (0x0008cbcf) list_single_mce_smart_pane_t1_ParamLimits

0xe71b,	// (0x0008cbcf) list_single_mce_smart_pane_t1

0xe72e,	// (0x0008cbe2) list_single_mce_smart_pane_t2_ParamLimits

0xe72e,	// (0x0008cbe2) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0008d863) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0008d863) list_single_mce_smart_pane_t

0x766c,	// (0x00085b20) compass_pane

0x7675,	// (0x00085b29) main_location2_pane_t1

0x768b,	// (0x00085b3f) main_location2_pane_t2

0x76a1,	// (0x00085b55) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0008d868) main_location2_pane_t

0xe756,	// (0x0008cc0a) compass_pane_g1_ParamLimits

0xe756,	// (0x0008cc0a) compass_pane_g1

0x76e9,	// (0x00085b9d) compass_pane_t1

0x76f8,	// (0x00085bac) compass_pane_t2

0x0005,

0xf3bd,	// (0x0008d871) compass_pane_t

0x773f,	// (0x00085bf3) text_secondary_cp61

0xe7a4,	// (0x0008cc58) navi_pane_cams_g5

0xe7f0,	// (0x0008cca4) navi_pane_im_t1

0xe7fe,	// (0x0008ccb2) navi_pane_mp_g1_ParamLimits

0xe7fe,	// (0x0008ccb2) navi_pane_mp_g1

0xe812,	// (0x0008ccc6) navi_pane_mp_g2_ParamLimits

0xe812,	// (0x0008ccc6) navi_pane_mp_g2

0xe81e,	// (0x0008ccd2) navi_pane_mp_g3_ParamLimits

0xe81e,	// (0x0008ccd2) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0008d885) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0008d885) navi_pane_mp_g

0xe82a,	// (0x0008ccde) navi_pane_mp_t1

0xe838,	// (0x0008ccec) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0008d88c) navi_pane_mp_t

0xe8a3,	// (0x0008cd57) navi_pane_vt_g1

0xe82a,	// (0x0008ccde) navi_pane_vt_t1

0xe8ab,	// (0x0008cd5f) navi_slider_pane

0xde85,	// (0x0008c339) zooming_pane

0xe8b3,	// (0x0008cd67) navi_slider_pane_g1

0x77c1,	// (0x00085c75) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0008d893) navi_slider_pane_g

0xe8d7,	// (0x0008cd8b) aid_levels_zoom

0xe8df,	// (0x0008cd93) zooming_pane_g1

0xe8e7,	// (0x0008cd9b) zooming_pane_g2

0xe8e7,	// (0x0008cd9b) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0008d8a2) zooming_pane_g

0xe8ef,	// (0x0008cda3) level_10_zoom

0xe8f8,	// (0x0008cdac) level_11_zoom

0xe901,	// (0x0008cdb5) level_1_zoom

0xe90a,	// (0x0008cdbe) level_2_zoom

0xe913,	// (0x0008cdc7) level_3_zoom

0xe91c,	// (0x0008cdd0) level_4_zoom

0xe925,	// (0x0008cdd9) level_5_zoom

0xe92e,	// (0x0008cde2) level_6_zoom

0xe937,	// (0x0008cdeb) level_7_zoom

0xe940,	// (0x0008cdf4) level_8_zoom

0xe949,	// (0x0008cdfd) level_9_zoom

0xe95a,	// (0x0008ce0e) popup_phob_thumbnail_window_g1

0xe962,	// (0x0008ce16) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0008d8a9) popup_phob_thumbnail_window_g

0x1024,	// (0x0007f4d8) level_1_location

0x102c,	// (0x0007f4e0) level_2_location

0x1034,	// (0x0007f4e8) level_3_location

0x103c,	// (0x0007f4f0) level_4_location

0xde85,	// (0x0008c339) level_5_location

0x77d3,	// (0x00085c87) mce_icon_pane_g1

0x77db,	// (0x00085c8f) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0008d8ae) mce_icon_pane_g

0x77e3,	// (0x00085c97) main_mup_pane_g1_ParamLimits

0x77e3,	// (0x00085c97) main_mup_pane_g1

0x77fb,	// (0x00085caf) main_mup_pane_g2_ParamLimits

0x77fb,	// (0x00085caf) main_mup_pane_g2

0x7817,	// (0x00085ccb) main_mup_pane_g3_ParamLimits

0x7817,	// (0x00085ccb) main_mup_pane_g3

0x7833,	// (0x00085ce7) main_mup_pane_g4_ParamLimits

0x7833,	// (0x00085ce7) main_mup_pane_g4

0x784f,	// (0x00085d03) main_mup_pane_g5_ParamLimits

0x784f,	// (0x00085d03) main_mup_pane_g5

0x786c,	// (0x00085d20) main_mup_pane_g6_ParamLimits

0x786c,	// (0x00085d20) main_mup_pane_g6

0x7888,	// (0x00085d3c) main_mup_pane_g7_ParamLimits

0x7888,	// (0x00085d3c) main_mup_pane_g7

0x78a4,	// (0x00085d58) main_mup_pane_g8_ParamLimits

0x78a4,	// (0x00085d58) main_mup_pane_g8

0x78c0,	// (0x00085d74) main_mup_pane_g9_ParamLimits

0x78c0,	// (0x00085d74) main_mup_pane_g9

0x78d7,	// (0x00085d8b) main_mup_pane_g10_ParamLimits

0x78d7,	// (0x00085d8b) main_mup_pane_g10

0x78ee,	// (0x00085da2) main_mup_pane_g11_ParamLimits

0x78ee,	// (0x00085da2) main_mup_pane_g11

0x7902,	// (0x00085db6) main_mup_pane_g12_ParamLimits

0x7902,	// (0x00085db6) main_mup_pane_g12

0x790e,	// (0x00085dc2) main_mup_pane_g13_ParamLimits

0x790e,	// (0x00085dc2) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0008d8b3) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0008d8b3) main_mup_pane_g

0x7922,	// (0x00085dd6) main_mup_pane_t1_ParamLimits

0x7922,	// (0x00085dd6) main_mup_pane_t1

0x793f,	// (0x00085df3) main_mup_pane_t2_ParamLimits

0x793f,	// (0x00085df3) main_mup_pane_t2

0x7959,	// (0x00085e0d) main_mup_pane_t3_ParamLimits

0x7959,	// (0x00085e0d) main_mup_pane_t3

0x7973,	// (0x00085e27) main_mup_pane_t4_ParamLimits

0x7973,	// (0x00085e27) main_mup_pane_t4

0x7985,	// (0x00085e39) main_mup_pane_t5_ParamLimits

0x7985,	// (0x00085e39) main_mup_pane_t5

0x7997,	// (0x00085e4b) main_mup_pane_t6_ParamLimits

0x7997,	// (0x00085e4b) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0008d8ce) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0008d8ce) main_mup_pane_t

0x79ad,	// (0x00085e61) mup_progress_pane_ParamLimits

0x79ad,	// (0x00085e61) mup_progress_pane

0x79b9,	// (0x00085e6d) mup_visualizer_pane_ParamLimits

0x79b9,	// (0x00085e6d) mup_visualizer_pane

0x79e7,	// (0x00085e9b) mup_volume_pane_ParamLimits

0x79e7,	// (0x00085e9b) mup_volume_pane

0xe542,	// (0x0008c9f6) mup_visualizer_pane_g1_ParamLimits

0xe542,	// (0x0008c9f6) mup_visualizer_pane_g1

0xe542,	// (0x0008c9f6) mup_visualizer_pane_g2_ParamLimits

0xe542,	// (0x0008c9f6) mup_visualizer_pane_g2

0xe756,	// (0x0008cc0a) mup_visualizer_pane_g3_ParamLimits

0xe756,	// (0x0008cc0a) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0008d8db) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0008d8db) mup_visualizer_pane_g

0xdd03,	// (0x0008c1b7) mup_volume_pane_g1

0xe972,	// (0x0008ce26) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0008d8e2) mup_volume_pane_g

0xdd03,	// (0x0008c1b7) mup_progress_pane_g1

0xe97b,	// (0x0008ce2f) mup_progress_pane_g2

0xe984,	// (0x0008ce38) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0008d8e7) mup_progress_pane_g

0xd98a,	// (0x0008be3e) bg_popup_window_pane_cp05

0xe98d,	// (0x0008ce41) heading_pane_cp02_ParamLimits

0xe98d,	// (0x0008ce41) heading_pane_cp02

0xe9a7,	// (0x0008ce5b) list_popup_blid_pane

0xe9af,	// (0x0008ce63) list_blid_sat_info_pane_ParamLimits

0xe9af,	// (0x0008ce63) list_blid_sat_info_pane

0xe9c2,	// (0x0008ce76) list_blid_sat_info_pane_g1

0xe9ca,	// (0x0008ce7e) list_blid_sat_info_pane_t1

0x7ada,	// (0x00085f8e) mup_equalizer_pane_ParamLimits

0x7ada,	// (0x00085f8e) mup_equalizer_pane

0x7af3,	// (0x00085fa7) mup_equalizer_pane_cp1_ParamLimits

0x7af3,	// (0x00085fa7) mup_equalizer_pane_cp1

0x7b0c,	// (0x00085fc0) mup_equalizer_pane_cp2_ParamLimits

0x7b0c,	// (0x00085fc0) mup_equalizer_pane_cp2

0x7b25,	// (0x00085fd9) mup_equalizer_pane_cp3_ParamLimits

0x7b25,	// (0x00085fd9) mup_equalizer_pane_cp3

0x7b3e,	// (0x00085ff2) mup_equalizer_pane_cp4_ParamLimits

0x7b3e,	// (0x00085ff2) mup_equalizer_pane_cp4

0x7b57,	// (0x0008600b) mup_equalizer_pane_cp5

0x7b69,	// (0x0008601d) mup_equalizer_pane_cp6

0x7b7b,	// (0x0008602f) mup_equalizer_pane_cp7

0x0f02,	// (0x0007f3b6) bg_popup_call_poc_act_pane_g9

0x0f0a,	// (0x0007f3be) bg_popup_call_poc_act_pane_g10

0x0f12,	// (0x0007f3c6) bg_popup_call_poc_act_pane_g11

0x000a,

0xdbe5,	// (0x0008c099) mup_scale_pane

0xdd03,	// (0x0008c1b7) mup_scale_pane_g1

0xe9d8,	// (0x0008ce8c) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0008d903) mup_scale_pane_g

0xe9fc,	// (0x0008ceb0) msg_data_pane

0xea04,	// (0x0008ceb8) scroll_pane_cp017

0x7b9f,	// (0x00086053) bg_list_pane_cp04_ParamLimits

0x7b9f,	// (0x00086053) bg_list_pane_cp04

0xea0c,	// (0x0008cec0) msg_data_pane_g1

0x7585,	// (0x00085a39) msg_data_pane_g2

0x758d,	// (0x00085a41) msg_data_pane_g3

0x7bb7,	// (0x0008606b) msg_data_pane_g4

0x759d,	// (0x00085a51) msg_data_pane_g5

0x77d3,	// (0x00085c87) msg_data_pane_g6

0x7bbf,	// (0x00086073) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0008d912) msg_data_pane_g

0x7bc7,	// (0x0008607b) msg_text_pane_ParamLimits

0x7bc7,	// (0x0008607b) msg_text_pane

0x7bf0,	// (0x000860a4) qrid_highlight_pane_cp011_ParamLimits

0x7bf0,	// (0x000860a4) qrid_highlight_pane_cp011

0xd98a,	// (0x0008be3e) msg_body_pane

0xd98a,	// (0x0008be3e) msg_header_pane

0xea1d,	// (0x0008ced1) input_focus_pane_cp07

0x0411,	// (0x0007e8c5) msg_header_pane_t1_ParamLimits

0x0411,	// (0x0007e8c5) msg_header_pane_t1

0x7c12,	// (0x000860c6) msg_header_pane_t2_ParamLimits

0x7c12,	// (0x000860c6) msg_header_pane_t2

0x0001,

0xf472,	// (0x0008d926) msg_header_pane_t_ParamLimits

0xf472,	// (0x0008d926) msg_header_pane_t

0xea32,	// (0x0008cee6) msg_body_pane_g1

0x7c24,	// (0x000860d8) msg_body_pane_t1_ParamLimits

0x7c24,	// (0x000860d8) msg_body_pane_t1

0x7c4f,	// (0x00086103) msg_body_pane_t2_ParamLimits

0x7c4f,	// (0x00086103) msg_body_pane_t2

0x7c61,	// (0x00086115) msg_body_pane_t3_ParamLimits

0x7c61,	// (0x00086115) msg_body_pane_t3

0x0002,

0xf477,	// (0x0008d92b) msg_body_pane_t_ParamLimits

0xf477,	// (0x0008d92b) msg_body_pane_t

0x7cc1,	// (0x00086175) main_viewer_pane_g1_ParamLimits

0x7cc1,	// (0x00086175) main_viewer_pane_g1

0x7ccd,	// (0x00086181) main_viewer_pane_g2_ParamLimits

0x7ccd,	// (0x00086181) main_viewer_pane_g2

0x7cd9,	// (0x0008618d) main_viewer_pane_g3_ParamLimits

0x7cd9,	// (0x0008618d) main_viewer_pane_g3

0x7ce8,	// (0x0008619c) main_viewer_pane_g4_ParamLimits

0x7ce8,	// (0x0008619c) main_viewer_pane_g4

0x7cf7,	// (0x000861ab) main_viewer_pane_g5_ParamLimits

0x7cf7,	// (0x000861ab) main_viewer_pane_g5

0x7cf7,	// (0x000861ab) main_viewer_pane_g7_ParamLimits

0x7cf7,	// (0x000861ab) main_viewer_pane_g7

0x7d09,	// (0x000861bd) main_viewer_pane_g8_ParamLimits

0x7d09,	// (0x000861bd) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0008d93b) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0008d93b) main_viewer_pane_g

0xea3a,	// (0x0008ceee) viewer_content_pane_ParamLimits

0xea3a,	// (0x0008ceee) viewer_content_pane

0x7d39,	// (0x000861ed) main_postcard_pane_g1_ParamLimits

0x7d39,	// (0x000861ed) main_postcard_pane_g1

0x7d45,	// (0x000861f9) main_postcard_pane_g2_ParamLimits

0x7d45,	// (0x000861f9) main_postcard_pane_g2

0x7d51,	// (0x00086205) main_postcard_pane_g3_ParamLimits

0x7d51,	// (0x00086205) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0008d94c) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0008d94c) main_postcard_pane_g

0x7d5d,	// (0x00086211) main_postcard_pane_g4

0x116b,	// (0x0007f61f) smil_status_volume_pane_g2

0x7d81,	// (0x00086235) postcard_pane_ParamLimits

0x7d81,	// (0x00086235) postcard_pane

0xe542,	// (0x0008c9f6) postcard_pane_g1_ParamLimits

0xe542,	// (0x0008c9f6) postcard_pane_g1

0x7db1,	// (0x00086265) postcard_pane_g2_ParamLimits

0x7db1,	// (0x00086265) postcard_pane_g2

0x7dbd,	// (0x00086271) postcard_pane_g3_ParamLimits

0x7dbd,	// (0x00086271) postcard_pane_g3

0xea48,	// (0x0008cefc) postcard_pane_g4_ParamLimits

0xea48,	// (0x0008cefc) postcard_pane_g4

0x7dc9,	// (0x0008627d) postcard_pane_g5_ParamLimits

0x7dc9,	// (0x0008627d) postcard_pane_g5

0x7dd5,	// (0x00086289) postcard_pane_g6_ParamLimits

0x7dd5,	// (0x00086289) postcard_pane_g6

0xea56,	// (0x0008cf0a) postcard_pane_g7_ParamLimits

0xea56,	// (0x0008cf0a) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0008d959) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0008d959) postcard_pane_g

0x7de1,	// (0x00086295) main_mp2_pane_g1_ParamLimits

0x7de1,	// (0x00086295) main_mp2_pane_g1

0x7ded,	// (0x000862a1) main_mp2_pane_g2_ParamLimits

0x7ded,	// (0x000862a1) main_mp2_pane_g2

0x7df9,	// (0x000862ad) main_mp2_pane_g3_ParamLimits

0x7df9,	// (0x000862ad) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0008d968) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0008d968) main_mp2_pane_g

0x7e05,	// (0x000862b9) main_mp2_pane_t1_ParamLimits

0x7e05,	// (0x000862b9) main_mp2_pane_t1

0x7e1a,	// (0x000862ce) main_mp2_pane_t2_ParamLimits

0x7e1a,	// (0x000862ce) main_mp2_pane_t2

0x7e2c,	// (0x000862e0) main_mp2_pane_t3_ParamLimits

0x7e2c,	// (0x000862e0) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0008d96f) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0008d96f) main_mp2_pane_t

0xea64,	// (0x0008cf18) pec_content_pane_ParamLimits

0xea64,	// (0x0008cf18) pec_content_pane

0xe086,	// (0x0008c53a) scroll_pane_cp015

0xea76,	// (0x0008cf2a) pec_attribute_pane_ParamLimits

0xea76,	// (0x0008cf2a) pec_attribute_pane

0x7e3e,	// (0x000862f2) pec_content_pane_g1_ParamLimits

0x7e3e,	// (0x000862f2) pec_content_pane_g1

0xea86,	// (0x0008cf3a) pec_content_pane_t1_ParamLimits

0xea86,	// (0x0008cf3a) pec_content_pane_t1

0xea98,	// (0x0008cf4c) pec_content_pane_t2_ParamLimits

0xea98,	// (0x0008cf4c) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0008d976) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0008d976) pec_content_pane_t

0x7e4a,	// (0x000862fe) list_single_graphic_pane_cp01_ParamLimits

0x7e4a,	// (0x000862fe) list_single_graphic_pane_cp01

0xdbe5,	// (0x0008c099) bg_popup_sub_pane_cp04

0xeaaa,	// (0x0008cf5e) popup_mup_playback_window_g1

0xeab6,	// (0x0008cf6a) popup_mup_playback_window_t1

0xeacb,	// (0x0008cf7f) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0008d97b) popup_mup_playback_window_t

0xeb02,	// (0x0008cfb6) main_image_pane_g1_ParamLimits

0xeb02,	// (0x0008cfb6) main_image_pane_g1

0xeb45,	// (0x0008cff9) scroll_pane_cp018_ParamLimits

0xeb45,	// (0x0008cff9) scroll_pane_cp018

0xeb5d,	// (0x0008d011) scroll_pane_cp016_ParamLimits

0xeb5d,	// (0x0008d011) scroll_pane_cp016

0x7ecf,	// (0x00086383) smil2_image_pane_ParamLimits

0x7ecf,	// (0x00086383) smil2_image_pane

0x7ef7,	// (0x000863ab) smil2_root_pane_ParamLimits

0x7ef7,	// (0x000863ab) smil2_root_pane

0x7f23,	// (0x000863d7) smil2_text_pane_ParamLimits

0x7f23,	// (0x000863d7) smil2_text_pane

0xd98a,	// (0x0008be3e) bg_list_pane_cp06

0xeb91,	// (0x0008d045) grid_radio_pane

0xd98a,	// (0x0008be3e) bg_popup_window_pane_cp06

0xeb99,	// (0x0008d04d) main_fmradio_pane_t1

0xe5a3,	// (0x0008ca57) heading_pane_cp04

0xeba7,	// (0x0008d05b) main_fmradio_pane_t2

0x0f5a,	// (0x0007f40e) popup_cale_lunar_info_window_g1

0xebb5,	// (0x0008d069) main_fmradio_pane_t3

0x0f62,	// (0x0007f416) popup_cale_lunar_info_window_g2

0xebc3,	// (0x0008d077) main_fmradio_pane_t4

0x0001,

0xebd1,	// (0x0008d085) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0008da69) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0008d990) main_fmradio_pane_t

0xebdf,	// (0x0008d093) wait_bar_pane_cp03

0xdec5,	// (0x0008c379) cell_fmradio_pane_ParamLimits

0xdec5,	// (0x0008c379) cell_fmradio_pane

0xea56,	// (0x0008cf0a) cell_fmradio_pane_g1_ParamLimits

0xea56,	// (0x0008cf0a) cell_fmradio_pane_g1

0xd98a,	// (0x0008be3e) grid_highlight_pane_cp011

0xebe7,	// (0x0008d09b) poc_content_pane_ParamLimits

0xebe7,	// (0x0008d09b) poc_content_pane

0xebfa,	// (0x0008d0ae) scroll_pane_cp019

0x7f57,	// (0x0008640b) popup_call_poc_act_window_ParamLimits

0x7f57,	// (0x0008640b) popup_call_poc_act_window

0x7f64,	// (0x00086418) popup_call_poc_inact_window_ParamLimits

0x7f64,	// (0x00086418) popup_call_poc_inact_window

0xf579,	// (0x0008da2d) bg_popup_call_poc_act_pane_g

0x0f1a,	// (0x0007f3ce) bg_popup_call_poc_inact_pane_g1

0x0f22,	// (0x0007f3d6) bg_popup_call_poc_inact_pane_g2

0xec02,	// (0x0008d0b6) popup_call_poc_act_window_g2

0x0f2a,	// (0x0007f3de) bg_popup_call_poc_inact_pane_g3

0x0eaa,	// (0x0007f35e) bg_popup_call_poc_inact_pane_g4

0x0f32,	// (0x0007f3e6) bg_popup_call_poc_inact_pane_g5

0xec0a,	// (0x0008d0be) popup_call_poc_act_window_t1_ParamLimits

0xec0a,	// (0x0008d0be) popup_call_poc_act_window_t1

0xec32,	// (0x0008d0e6) popup_call_poc_act_window_t2_ParamLimits

0xec32,	// (0x0008d0e6) popup_call_poc_act_window_t2

0xec5a,	// (0x0008d10e) popup_call_poc_act_window_t3_ParamLimits

0xec5a,	// (0x0008d10e) popup_call_poc_act_window_t3

0xec82,	// (0x0008d136) popup_call_poc_act_window_t4_ParamLimits

0xec82,	// (0x0008d136) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0008d99b) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0008d99b) popup_call_poc_act_window_t

0x0f3a,	// (0x0007f3ee) bg_popup_call_poc_inact_pane_g6

0x0f42,	// (0x0007f3f6) bg_popup_call_poc_inact_pane_g7

0x0f4a,	// (0x0007f3fe) bg_popup_call_poc_inact_pane_g8

0xec94,	// (0x0008d148) popup_call_poc_inact_window_g2

0x0f52,	// (0x0007f406) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0008da44) bg_popup_call_poc_inact_pane_g

0xec9c,	// (0x0008d150) popup_call_poc_inact_window_t1_ParamLimits

0xec9c,	// (0x0008d150) popup_call_poc_inact_window_t1

0xecb1,	// (0x0008d165) popup_call_poc_inact_window_t2_ParamLimits

0xecb1,	// (0x0008d165) popup_call_poc_inact_window_t2

0xecc6,	// (0x0008d17a) popup_call_poc_inact_window_t3_ParamLimits

0xecc6,	// (0x0008d17a) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0008d9a4) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0008d9a4) popup_call_poc_inact_window_t

0x10f1,	// (0x0007f5a5) context_pane_ParamLimits

0x84a9,	// (0x0008695d) signal_pane_ParamLimits

0xde85,	// (0x0008c339) main_call2_pane

0x842b,	// (0x000868df) popup_phob_thumbnail2_window_ParamLimits

0x842b,	// (0x000868df) popup_phob_thumbnail2_window

0x7c73,	// (0x00086127) aid_hotspot_pointer_arrow_pane

0x7c7b,	// (0x0008612f) aid_hotspot_pointer_hand_pane

0x8213,	// (0x000866c7) phob_pre_status_pane_g5

0x6073,	// (0x00084527) cams_zoom_pane_ParamLimits

0x607f,	// (0x00084533) image_vga_pane_ParamLimits

0x608c,	// (0x00084540) main_camera_pane_g1_ParamLimits

0x6098,	// (0x0008454c) main_camera_pane_g2_ParamLimits

0x60a4,	// (0x00084558) main_camera_pane_g3_ParamLimits

0x60b0,	// (0x00084564) main_camera_pane_g4_ParamLimits

0x60bc,	// (0x00084570) main_camera_pane_g5_ParamLimits

0x60c8,	// (0x0008457c) main_camera_pane_g6_ParamLimits

0x60d4,	// (0x00084588) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0008d6a3) main_camera_pane_g_ParamLimits

0x60e0,	// (0x00084594) main_camera_pane_t1_ParamLimits

0x60f2,	// (0x000845a6) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0008d6b4) main_camera_pane_t_ParamLimits

0xdbe5,	// (0x0008c099) bg_popup_preview_window_pane_cp01_ParamLimits

0xdbe5,	// (0x0008c099) bg_popup_preview_window_pane_cp01

0xecdb,	// (0x0008d18f) popup_phob_thumbnail2_window_g1_ParamLimits

0xecdb,	// (0x0008d18f) popup_phob_thumbnail2_window_g1

0xd98a,	// (0x0008be3e) call2_cli_visual_pane

0x7f80,	// (0x00086434) popup_call2_audio_conf_window_ParamLimits

0x7f80,	// (0x00086434) popup_call2_audio_conf_window

0x7f93,	// (0x00086447) popup_call2_audio_first_window_ParamLimits

0x7f93,	// (0x00086447) popup_call2_audio_first_window

0x800f,	// (0x000864c3) popup_call2_audio_in_window_ParamLimits

0x800f,	// (0x000864c3) popup_call2_audio_in_window

0x803f,	// (0x000864f3) popup_call2_audio_out_window_ParamLimits

0x803f,	// (0x000864f3) popup_call2_audio_out_window

0x808b,	// (0x0008653f) popup_call2_audio_second_window_ParamLimits

0x808b,	// (0x0008653f) popup_call2_audio_second_window

0x80d7,	// (0x0008658b) popup_call2_audio_wait_window_ParamLimits

0x80d7,	// (0x0008658b) popup_call2_audio_wait_window

0xd98a,	// (0x0008be3e) bg_popup_call2_act_pane_cp03

0xdbc7,	// (0x0008c07b) list_conf_pane_cp

0xece7,	// (0x0008d19b) popup_call2_audio_conf_window_t1

0xe600,	// (0x0008cab4) list_single_graphic_popup_conf2_pane_ParamLimits

0xe600,	// (0x0008cab4) list_single_graphic_popup_conf2_pane

0xe613,	// (0x0008cac7) list_highlight_pane_cp04

0xecf5,	// (0x0008d1a9) list_single_graphic_popup_conf2_pane_g1

0xe624,	// (0x0008cad8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0008d9ab) list_single_graphic_popup_conf2_pane_g

0xecfd,	// (0x0008d1b1) list_single_graphic_popup_conf2_pane_t1

0xed0b,	// (0x0008d1bf) bg_popup_call2_act_pane_cp01_ParamLimits

0xed0b,	// (0x0008d1bf) bg_popup_call2_act_pane_cp01

0xed95,	// (0x0008d249) call_type_pane_cp05_ParamLimits

0xed95,	// (0x0008d249) call_type_pane_cp05

0xede9,	// (0x0008d29d) popup_call2_audio_second_window_g1_ParamLimits

0xede9,	// (0x0008d29d) popup_call2_audio_second_window_g1

0xee3d,	// (0x0008d2f1) popup_call2_audio_second_window_g2_ParamLimits

0xee3d,	// (0x0008d2f1) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0008d9b0) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0008d9b0) popup_call2_audio_second_window_g

0xeea2,	// (0x0008d356) popup_call2_audio_second_window_t1_ParamLimits

0xeea2,	// (0x0008d356) popup_call2_audio_second_window_t1

0xef5d,	// (0x0008d411) popup_call2_audio_second_window_t2_ParamLimits

0xef5d,	// (0x0008d411) popup_call2_audio_second_window_t2

0xefb0,	// (0x0008d464) popup_call2_audio_second_window_t3_ParamLimits

0xefb0,	// (0x0008d464) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0008d9b7) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0008d9b7) popup_call2_audio_second_window_t

0xd98a,	// (0x0008be3e) bg_popup_call2_in_pane_cp02

0xd994,	// (0x0008be48) call_type_pane_cp04

0xd99c,	// (0x0008be50) popup_call2_audio_wait_window_g1

0xd9a4,	// (0x0008be58) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0008d592) popup_call2_audio_wait_window_g

0xd9ac,	// (0x0008be60) popup_call2_audio_wait_window_t3

0x0465,	// (0x0007e919) bg_popup_call2_act_pane_ParamLimits

0x0465,	// (0x0007e919) bg_popup_call2_act_pane

0x0525,	// (0x0007e9d9) call_type_pane_cp03_ParamLimits

0x0525,	// (0x0007e9d9) call_type_pane_cp03

0x0589,	// (0x0007ea3d) popup_call2_audio_first_window_g1_ParamLimits

0x0589,	// (0x0007ea3d) popup_call2_audio_first_window_g1

0x05f9,	// (0x0007eaad) popup_call2_audio_first_window_g2_ParamLimits

0x05f9,	// (0x0007eaad) popup_call2_audio_first_window_g2

0xe542,	// (0x0008c9f6) popup_call2_audio_first_window_g3_ParamLimits

0xe542,	// (0x0008c9f6) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0008d9c0) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0008d9c0) popup_call2_audio_first_window_g

0x06d7,	// (0x0007eb8b) popup_call2_audio_first_window_t1_ParamLimits

0x06d7,	// (0x0007eb8b) popup_call2_audio_first_window_t1

0x07da,	// (0x0007ec8e) popup_call2_audio_first_window_t4_ParamLimits

0x07da,	// (0x0007ec8e) popup_call2_audio_first_window_t4

0x08bd,	// (0x0007ed71) popup_call2_audio_first_window_t5_ParamLimits

0x08bd,	// (0x0007ed71) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0008d9cb) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0008d9cb) popup_call2_audio_first_window_t

0xdbdd,	// (0x0008c091) bg_popup_call2_act_pane_g1

0x0f6a,	// (0x0007f41e) popup_cale_lunar_info_window_t1

0x0f78,	// (0x0007f42c) popup_cale_lunar_info_window_t2

0x0f86,	// (0x0007f43a) popup_cale_lunar_info_window_t3

0xd98a,	// (0x0008be3e) bg_popup_call2_bubble_pane

0x09be,	// (0x0007ee72) bg_popup_call2_in_pane_cp01_ParamLimits

0x09be,	// (0x0007ee72) bg_popup_call2_in_pane_cp01

0xd666,	// (0x0008bb1a) call_type_pane_cp02

0x0a06,	// (0x0007eeba) popup_call2_audio_out_window_g1_ParamLimits

0x0a06,	// (0x0007eeba) popup_call2_audio_out_window_g1

0x0a32,	// (0x0007eee6) popup_call2_audio_out_window_g2_ParamLimits

0x0a32,	// (0x0007eee6) popup_call2_audio_out_window_g2

0x0a5a,	// (0x0007ef0e) popup_call2_audio_out_window_g3_ParamLimits

0x0a5a,	// (0x0007ef0e) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0008d9d4) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0008d9d4) popup_call2_audio_out_window_g

0x0a95,	// (0x0007ef49) popup_call2_audio_out_window_t1_ParamLimits

0x0a95,	// (0x0007ef49) popup_call2_audio_out_window_t1

0x0af4,	// (0x0007efa8) popup_call2_audio_out_window_t2_ParamLimits

0x0af4,	// (0x0007efa8) popup_call2_audio_out_window_t2

0x0b48,	// (0x0007effc) popup_call2_audio_out_window_t3_ParamLimits

0x0b48,	// (0x0007effc) popup_call2_audio_out_window_t3

0x0b5e,	// (0x0007f012) popup_call2_audio_out_window_t4_ParamLimits

0x0b5e,	// (0x0007f012) popup_call2_audio_out_window_t4

0x0b74,	// (0x0007f028) popup_call2_audio_out_window_t5_ParamLimits

0x0b74,	// (0x0007f028) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0008d9dd) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0008d9dd) popup_call2_audio_out_window_t

0x0bd8,	// (0x0007f08c) bg_popup_call2_in_pane_ParamLimits

0x0bd8,	// (0x0007f08c) bg_popup_call2_in_pane

0x0c34,	// (0x0007f0e8) popup_call2_audio_in_window_g1_ParamLimits

0x0c34,	// (0x0007f0e8) popup_call2_audio_in_window_g1

0x0c6c,	// (0x0007f120) popup_call2_audio_in_window_g2_ParamLimits

0x0c6c,	// (0x0007f120) popup_call2_audio_in_window_g2

0x0ca4,	// (0x0007f158) popup_call2_audio_in_window_g3_ParamLimits

0x0ca4,	// (0x0007f158) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0008d9ea) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0008d9ea) popup_call2_audio_in_window_g

0x0cfc,	// (0x0007f1b0) popup_call2_audio_in_window_t1_ParamLimits

0x0cfc,	// (0x0007f1b0) popup_call2_audio_in_window_t1

0x0d7c,	// (0x0007f230) popup_call2_audio_in_window_t2_ParamLimits

0x0d7c,	// (0x0007f230) popup_call2_audio_in_window_t2

0x0dfc,	// (0x0007f2b0) popup_call2_audio_in_window_t3_ParamLimits

0x0dfc,	// (0x0007f2b0) popup_call2_audio_in_window_t3

0x0e16,	// (0x0007f2ca) popup_call2_audio_in_window_t4_ParamLimits

0x0e16,	// (0x0007f2ca) popup_call2_audio_in_window_t4

0x0e28,	// (0x0007f2dc) popup_call2_audio_in_window_t5_ParamLimits

0x0e28,	// (0x0007f2dc) popup_call2_audio_in_window_t5

0x0e3d,	// (0x0007f2f1) popup_call2_audio_in_window_t6_ParamLimits

0x0e3d,	// (0x0007f2f1) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0008d9f3) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0008d9f3) popup_call2_audio_in_window_t

0xdbdd,	// (0x0008c091) bg_popup_call2_in_pane_g1

0x0f94,	// (0x0007f448) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0008da6e) popup_cale_lunar_info_window_t

0xdbe5,	// (0x0008c099) bg_popup_call2_rect_pane_ParamLimits

0xdbe5,	// (0x0008c099) bg_popup_call2_rect_pane

0xd98a,	// (0x0008be3e) call2_cli_visual_graphic_pane

0xd98a,	// (0x0008be3e) call2_cli_visual_text_pane

0x852e,	// (0x000869e2) smil_status_volume_pane_g3

0x0002,

0xdd03,	// (0x0008c1b7) call2_cli_visual_graphic_pane_g1

0xdd03,	// (0x0008c1b7) call2_cli_visual_graphic_pane_g2

0xdd03,	// (0x0008c1b7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0008da00) call2_cli_visual_graphic_pane_g

0x0e52,	// (0x0007f306) bg_popup_call2_rect_pane_g1

0xdda1,	// (0x0008c255) bg_popup_call2_rect_pane_g2

0x0e5a,	// (0x0007f30e) bg_popup_call2_rect_pane_g3

0x0e62,	// (0x0007f316) bg_popup_call2_rect_pane_g4

0x0e6a,	// (0x0007f31e) bg_popup_call2_rect_pane_g5

0x0e72,	// (0x0007f326) bg_popup_call2_rect_pane_g6

0x0e7a,	// (0x0007f32e) bg_popup_call2_rect_pane_g7

0x0e82,	// (0x0007f336) bg_popup_call2_rect_pane_g8

0x0e8a,	// (0x0007f33e) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0008da07) bg_popup_call2_rect_pane_g

0x0e92,	// (0x0007f346) bg_popup_call2_bubble_pane_g1

0x0e9a,	// (0x0007f34e) bg_popup_call2_bubble_pane_g2

0x0ea2,	// (0x0007f356) bg_popup_call2_bubble_pane_g3

0x0eaa,	// (0x0007f35e) bg_popup_call2_bubble_pane_g4

0x0eb2,	// (0x0007f366) bg_popup_call2_bubble_pane_g5

0x0eba,	// (0x0007f36e) bg_popup_call2_bubble_pane_g6

0x0ec2,	// (0x0007f376) bg_popup_call2_bubble_pane_g7

0x0eca,	// (0x0007f37e) bg_popup_call2_bubble_pane_g8

0x0ed2,	// (0x0007f386) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0008da1a) bg_popup_call2_bubble_pane_g

0x5a77,	// (0x00083f2b) aid_cale_week_size_cell_pane

0x6104,	// (0x000845b8) aid_cams_cif_uncrop_pane_ParamLimits

0x6104,	// (0x000845b8) aid_cams_cif_uncrop_pane

0x625c,	// (0x00084710) aid_cams_size_cell_ParamLimits

0x625c,	// (0x00084710) aid_cams_size_cell

0x6268,	// (0x0008471c) grid_cams_pane_ParamLimits

0x6274,	// (0x00084728) linegrid_cams_pane_ParamLimits

0x6429,	// (0x000848dd) call_video_pane_t1

0x6446,	// (0x000848fa) call_video_pane_t2

0x0001,

0xf253,	// (0x0008d707) call_video_pane_t

0x6828,	// (0x00084cdc) aid_cale_month_size_cell_pane_ParamLimits

0x6828,	// (0x00084cdc) aid_cale_month_size_cell_pane

0xf603,	// (0x0008dab7) smil_status_volume_pane_g

0x853b,	// (0x000869ef) volume_smil_pane_ParamLimits

0x52da,	// (0x0008378e) aid_popup2_width_pane

0x5984,	// (0x00083e38) cell_qdial_pane_g4_ParamLimits

0x5984,	// (0x00083e38) cell_qdial_pane_g4

0x76c9,	// (0x00085b7d) aid_blid_cardinal_pane_ParamLimits

0x76d5,	// (0x00085b89) aid_blid_destination_pane_ParamLimits

0x76d5,	// (0x00085b89) aid_blid_destination_pane

0xdbe5,	// (0x0008c099) bg_popup_call_poc_act_pane_ParamLimits

0xdbe5,	// (0x0008c099) bg_popup_call_poc_act_pane

0xdbe5,	// (0x0008c099) bg_popup_call_poc_inact_pane_ParamLimits

0xdbe5,	// (0x0008c099) bg_popup_call_poc_inact_pane

0x0eda,	// (0x0007f38e) bg_popup_call_poc_act_pane_g1

0x0ee2,	// (0x0007f396) bg_popup_call_poc_act_pane_g2

0x0eea,	// (0x0007f39e) bg_popup_call_poc_act_pane_g3

0x0eaa,	// (0x0007f35e) bg_popup_call_poc_act_pane_g4

0x0eb2,	// (0x0007f366) bg_popup_call_poc_act_pane_g5

0x0ef2,	// (0x0007f3a6) bg_popup_call_poc_act_pane_g6

0x0ec2,	// (0x0007f376) bg_popup_call_poc_act_pane_g7

0x0efa,	// (0x0007f3ae) bg_popup_call_poc_act_pane_g8

0xd98a,	// (0x0008be3e) main_usb_pane

0x838a,	// (0x0008683e) popup_cale_lunar_info_window

0x66cb,	// (0x00084b7f) im_reading_pane_t1_ParamLimits

0xdfcf,	// (0x0008c483) list_im_pane_ParamLimits

0xdfe0,	// (0x0008c494) scroll_pane_cp07_ParamLimits

0xd98a,	// (0x0008be3e) grid_highlight_pane_cp012

0xdbe5,	// (0x0008c099) mup_scale_pane_ParamLimits

0xe542,	// (0x0008c9f6) main_usb_pane_g1_ParamLimits

0xe542,	// (0x0008c9f6) main_usb_pane_g1

0x8138,	// (0x000865ec) main_usb_pane_g2_ParamLimits

0x8138,	// (0x000865ec) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0008da57) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0008da57) main_usb_pane_g

0x8144,	// (0x000865f8) main_usb_pane_t1_ParamLimits

0x8144,	// (0x000865f8) main_usb_pane_t1

0x8156,	// (0x0008660a) main_usb_pane_t2_ParamLimits

0x8156,	// (0x0008660a) main_usb_pane_t2

0x8168,	// (0x0008661c) main_usb_pane_t3_ParamLimits

0x8168,	// (0x0008661c) main_usb_pane_t3

0x817a,	// (0x0008662e) main_usb_pane_t4_ParamLimits

0x817a,	// (0x0008662e) main_usb_pane_t4

0x818c,	// (0x00086640) main_usb_pane_t5_ParamLimits

0x818c,	// (0x00086640) main_usb_pane_t5

0x819e,	// (0x00086652) main_usb_pane_t6_ParamLimits

0x819e,	// (0x00086652) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0008da5c) main_usb_pane_t_ParamLimits

0xe74d,	// (0x0008cc01) aid_text_placing

0x7675,	// (0x00085b29) main_location2_pane_t1_ParamLimits

0x768b,	// (0x00085b3f) main_location2_pane_t2_ParamLimits

0x76a1,	// (0x00085b55) main_location2_pane_t3_ParamLimits

0x76b7,	// (0x00085b6b) main_location2_pane_t4_ParamLimits

0x76b7,	// (0x00085b6b) main_location2_pane_t4

0xf3b4,	// (0x0008d868) main_location2_pane_t_ParamLimits

0xdc21,	// (0x0008c0d5) find_pinb_pane_g2_ParamLimits

0xdc21,	// (0x0008c0d5) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0008d5b8) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0008d5b8) find_pinb_pane_g

0xdc2d,	// (0x0008c0e1) find_pinb_pane_t1_ParamLimits

0xdc3f,	// (0x0008c0f3) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0008d5bd) find_pinb_pane_t_ParamLimits

0xd98a,	// (0x0008be3e) main_call3_pane

0x6bcc,	// (0x00085080) cale_month_day_heading_pane_t1_ParamLimits

0x6c52,	// (0x00085106) cale_month_day_heading_pane_t2_ParamLimits

0x6ce3,	// (0x00085197) cale_month_day_heading_pane_t3_ParamLimits

0x6d74,	// (0x00085228) cale_month_day_heading_pane_t4_ParamLimits

0x6e05,	// (0x000852b9) cale_month_day_heading_pane_t5_ParamLimits

0x6e96,	// (0x0008534a) cale_month_day_heading_pane_t6_ParamLimits

0x6f27,	// (0x000853db) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0008d73f) cale_month_day_heading_pane_t_ParamLimits

0x7271,	// (0x00085725) smil_status_volume_pane

0x7d99,	// (0x0008624d) postcard_address_pane_ParamLimits

0x7d99,	// (0x0008624d) postcard_address_pane

0x7da5,	// (0x00086259) postcard_message_pane_ParamLimits

0x7da5,	// (0x00086259) postcard_message_pane

0x8114,	// (0x000865c8) call2_cli_visual_pane_t1_ParamLimits

0x8114,	// (0x000865c8) call2_cli_visual_pane_t1

0x868c,	// (0x00086b40) postcard_message_pane_t1_ParamLimits

0x868c,	// (0x00086b40) postcard_message_pane_t1

0x8675,	// (0x00086b29) postcard_address_pane_t1_ParamLimits

0x8675,	// (0x00086b29) postcard_address_pane_t1

0x8668,	// (0x00086b1c) popup_call3_audio_in_window_ParamLimits

0x8668,	// (0x00086b1c) popup_call3_audio_in_window

0x8550,	// (0x00086a04) bg_popup_call3_in_pane_ParamLimits

0x8550,	// (0x00086a04) bg_popup_call3_in_pane

0x85ae,	// (0x00086a62) popup_call3_audio_in_window_g1_ParamLimits

0x85ae,	// (0x00086a62) popup_call3_audio_in_window_g1

0x85c6,	// (0x00086a7a) popup_call3_audio_in_window_g2_ParamLimits

0x85c6,	// (0x00086a7a) popup_call3_audio_in_window_g2

0x85de,	// (0x00086a92) popup_call3_audio_in_window_g3_ParamLimits

0x85de,	// (0x00086a92) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0008dabe) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0008dabe) popup_call3_audio_in_window_g

0x8606,	// (0x00086aba) popup_call3_audio_in_window_t1_ParamLimits

0x8606,	// (0x00086aba) popup_call3_audio_in_window_t1

0x862e,	// (0x00086ae2) popup_call3_audio_in_window_t2_ParamLimits

0x862e,	// (0x00086ae2) popup_call3_audio_in_window_t2

0x8656,	// (0x00086b0a) popup_call3_audio_in_window_t3_ParamLimits

0x8656,	// (0x00086b0a) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0008dac7) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0008dac7) popup_call3_audio_in_window_t

0xde85,	// (0x0008c339) bg_popup_call3_rect_pane

0x0e52,	// (0x0007f306) bg_popup_call3_rect_pane_g1

0xdda1,	// (0x0008c255) bg_popup_call3_rect_pane_g2

0x0e5a,	// (0x0007f30e) bg_popup_call3_rect_pane_g3

0x0e62,	// (0x0007f316) bg_popup_call3_rect_pane_g4

0x0e6a,	// (0x0007f31e) bg_popup_call3_rect_pane_g5

0x0e72,	// (0x0007f326) bg_popup_call3_rect_pane_g6

0x0e7a,	// (0x0007f32e) bg_popup_call3_rect_pane_g7

0x7a02,	// (0x00085eb6) mup_visualizer_osc_pane

0xe96a,	// (0x0008ce1e) mup_visualizer_spec_pane

0x8570,	// (0x00086a24) call3_video_qcif_pane_ParamLimits

0x8570,	// (0x00086a24) call3_video_qcif_pane

0x8580,	// (0x00086a34) call3_video_qcif_uncrop_pane_ParamLimits

0x8580,	// (0x00086a34) call3_video_qcif_uncrop_pane

0x858c,	// (0x00086a40) call3_video_subqcif_pane_ParamLimits

0x858c,	// (0x00086a40) call3_video_subqcif_pane

0x859e,	// (0x00086a52) call3_video_subqcif_uncrop_pane_ParamLimits

0x859e,	// (0x00086a52) call3_video_subqcif_uncrop_pane

0x85f6,	// (0x00086aaa) popup_call3_audio_in_window_g4_ParamLimits

0x85f6,	// (0x00086aaa) popup_call3_audio_in_window_g4

0x851d,	// (0x000869d1) mup_spec_half_pane

0x8526,	// (0x000869da) mup_spec_half_pane_cp

0x1151,	// (0x0007f605) mup_osc_middle_pane

0x115a,	// (0x0007f60e) mup_visualizer_osc_pane_g1

0x84fe,	// (0x000869b2) mup_spec_bar_pane_ParamLimits

0x84fe,	// (0x000869b2) mup_spec_bar_pane

0x113e,	// (0x0007f5f2) mup_spec_bar_pane_g1

0x1148,	// (0x0007f5fc) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0008dab2) mup_spec_bar_pane_g

0x5a77,	// (0x00083f2b) aid_cale_week_size_cell_pane_ParamLimits

0x5a8c,	// (0x00083f40) bg_cale_heading_pane_ParamLimits

0xdddf,	// (0x0008c293) bg_cale_pane_cp01_ParamLimits

0x5aa4,	// (0x00083f58) cale_week_corner_pane_ParamLimits

0x5abe,	// (0x00083f72) cale_week_day_heading_pane_ParamLimits

0x5ad6,	// (0x00083f8a) cale_week_scroll_pane_g1_ParamLimits

0x5ae9,	// (0x00083f9d) cale_week_scroll_pane_g2_ParamLimits

0x5afc,	// (0x00083fb0) cale_week_scroll_pane_g3_ParamLimits

0x5b0f,	// (0x00083fc3) cale_week_scroll_pane_g4_ParamLimits

0x5b22,	// (0x00083fd6) cale_week_scroll_pane_g5_ParamLimits

0x5b35,	// (0x00083fe9) cale_week_scroll_pane_g6_ParamLimits

0x5b48,	// (0x00083ffc) cale_week_scroll_pane_g7_ParamLimits

0x5b5b,	// (0x0008400f) cale_week_scroll_pane_g8_ParamLimits

0x5b6e,	// (0x00084022) cale_week_scroll_pane_g9_ParamLimits

0x5b81,	// (0x00084035) cale_week_scroll_pane_g10_ParamLimits

0x5b94,	// (0x00084048) cale_week_scroll_pane_g11_ParamLimits

0x5ba7,	// (0x0008405b) cale_week_scroll_pane_g12_ParamLimits

0x5bba,	// (0x0008406e) cale_week_scroll_pane_g13_ParamLimits

0x5bcd,	// (0x00084081) cale_week_scroll_pane_g14_ParamLimits

0x5be0,	// (0x00084094) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0008d649) cale_week_scroll_pane_g_ParamLimits

0x5c06,	// (0x000840ba) cale_week_time_pane_ParamLimits

0x5c19,	// (0x000840cd) grid_cale_week_pane_ParamLimits

0xddfc,	// (0x0008c2b0) listscroll_cale_week_pane_t1

0xde0e,	// (0x0008c2c2) scroll_pane_cp08_ParamLimits

0x687d,	// (0x00084d31) cale_month_corner_pane_ParamLimits

0xe210,	// (0x0008c6c4) cale_month_pane_t1

0x6b93,	// (0x00085047) cale_month_week_pane_ParamLimits

0xe542,	// (0x0008c9f6) popup_call_status_window_g1_ParamLimits

0x74ac,	// (0x00085960) popup_call_status_window_g2_ParamLimits

0x74b8,	// (0x0008596c) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0008d7ef) popup_call_status_window_g_ParamLimits

0xe593,	// (0x0008ca47) aid_call2_pane

0x7c06,	// (0x000860ba) msg_header_pane_g1

0x7d99,	// (0x0008624d) postcard_address2_pane_ParamLimits

0x7d99,	// (0x0008624d) postcard_address2_pane

0x7da5,	// (0x00086259) postcard_message2_pane_ParamLimits

0x7da5,	// (0x00086259) postcard_message2_pane

0x84b5,	// (0x00086969) message2_row_pane_ParamLimits

0x84b5,	// (0x00086969) message2_row_pane

0x84cd,	// (0x00086981) address2_row_pane_ParamLimits

0x84cd,	// (0x00086981) address2_row_pane

0x110c,	// (0x0007f5c0) postcard_message2_row_pane_g1

0x1114,	// (0x0007f5c8) postcard_message2_row_pane_t1

0x110c,	// (0x0007f5c0) address2_row_pane_g1

0x1114,	// (0x0007f5c8) address2_row_pane_t1

0xde7d,	// (0x0008c331) aid_size_cell_vorec

0xd98a,	// (0x0008be3e) main_rss_pane

0x84e0,	// (0x00086994) rss_list_single_pane_ParamLimits

0x84e0,	// (0x00086994) rss_list_single_pane

0x1122,	// (0x0007f5d6) rss_list_single_pane_t1

0x1130,	// (0x0007f5e4) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0008daad) rss_list_single_pane_t

0xd98a,	// (0x0008be3e) main_camera2_pane

0xd98a,	// (0x0008be3e) main_video2_pane

0x86dc,	// (0x00086b90) cams_zoom_pane_cp2_ParamLimits

0x86dc,	// (0x00086b90) cams_zoom_pane_cp2

0x86e8,	// (0x00086b9c) image2_vga_pane_ParamLimits

0x86e8,	// (0x00086b9c) image2_vga_pane

0x86f7,	// (0x00086bab) main_camera2_pane_g1_ParamLimits

0x86f7,	// (0x00086bab) main_camera2_pane_g1

0x8703,	// (0x00086bb7) main_camera2_pane_g2_ParamLimits

0x8703,	// (0x00086bb7) main_camera2_pane_g2

0x870f,	// (0x00086bc3) main_camera2_pane_g3_ParamLimits

0x870f,	// (0x00086bc3) main_camera2_pane_g3

0x871b,	// (0x00086bcf) main_camera2_pane_g4_ParamLimits

0x871b,	// (0x00086bcf) main_camera2_pane_g4

0x8727,	// (0x00086bdb) main_camera2_pane_g5_ParamLimits

0x8727,	// (0x00086bdb) main_camera2_pane_g5

0x8733,	// (0x00086be7) main_camera2_pane_g6_ParamLimits

0x8733,	// (0x00086be7) main_camera2_pane_g6

0x873f,	// (0x00086bf3) main_camera2_pane_g7_ParamLimits

0x873f,	// (0x00086bf3) main_camera2_pane_g7

0x874b,	// (0x00086bff) main_camera2_pane_g8_ParamLimits

0x874b,	// (0x00086bff) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0008dace) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0008dace) main_camera2_pane_g

0x8763,	// (0x00086c17) main_camera2_pane_t1_ParamLimits

0x8763,	// (0x00086c17) main_camera2_pane_t1

0x8775,	// (0x00086c29) main_camera2_pane_t2_ParamLimits

0x8775,	// (0x00086c29) main_camera2_pane_t2

0x8787,	// (0x00086c3b) main_camera2_pane_t3_ParamLimits

0x8787,	// (0x00086c3b) main_camera2_pane_t3

0x8799,	// (0x00086c4d) main_camera2_pane_t4_ParamLimits

0x8799,	// (0x00086c4d) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0008dae1) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0008dae1) main_camera2_pane_t

0x87f4,	// (0x00086ca8) cams_zoom_pane_cp4_ParamLimits

0x87f4,	// (0x00086ca8) cams_zoom_pane_cp4

0x8804,	// (0x00086cb8) image2_cif_pane_ParamLimits

0x8804,	// (0x00086cb8) image2_cif_pane

0x8815,	// (0x00086cc9) image2_subqcif_pane_ParamLimits

0x8815,	// (0x00086cc9) image2_subqcif_pane

0x8822,	// (0x00086cd6) main_video2_pane_g1_ParamLimits

0x8822,	// (0x00086cd6) main_video2_pane_g1

0x8834,	// (0x00086ce8) main_video2_pane_g2_ParamLimits

0x8834,	// (0x00086ce8) main_video2_pane_g2

0x8844,	// (0x00086cf8) main_video2_pane_g3_ParamLimits

0x8844,	// (0x00086cf8) main_video2_pane_g3

0x8854,	// (0x00086d08) main_video2_pane_g4_ParamLimits

0x8854,	// (0x00086d08) main_video2_pane_g4

0x8864,	// (0x00086d18) main_video2_pane_g5_ParamLimits

0x8864,	// (0x00086d18) main_video2_pane_g5

0x8874,	// (0x00086d28) main_video2_pane_g6_ParamLimits

0x8874,	// (0x00086d28) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0008daf0) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0008daf0) main_video2_pane_g

0x8886,	// (0x00086d3a) main_video2_pane_t1_ParamLimits

0x8886,	// (0x00086d3a) main_video2_pane_t1

0x88a0,	// (0x00086d54) main_video2_pane_t2_ParamLimits

0x88a0,	// (0x00086d54) main_video2_pane_t2

0x88c6,	// (0x00086d7a) main_video2_pane_t3_ParamLimits

0x88c6,	// (0x00086d7a) main_video2_pane_t3

0x0002,

0xf649,	// (0x0008dafd) main_video2_pane_t_ParamLimits

0xf649,	// (0x0008dafd) main_video2_pane_t

0x824d,	// (0x00086701) call_muted_g2

0x0001,

0xf5eb,	// (0x0008da9f) call_muted_g

0xd98a,	// (0x0008be3e) main_mup2_pane

0x120c,	// (0x0007f6c0) main_mup2_pane_g1_ParamLimits

0x120c,	// (0x0007f6c0) main_mup2_pane_g1

0x88ec,	// (0x00086da0) main_mup2_pane_g2_ParamLimits

0x88ec,	// (0x00086da0) main_mup2_pane_g2

0x8b5c,	// (0x00087010) main_mup_pane_g13_cp1

0x8b64,	// (0x00087018) mup_volume_pane_cp1

0x890c,	// (0x00086dc0) main_mup2_pane_g4_ParamLimits

0x890c,	// (0x00086dc0) main_mup2_pane_g4

0x891d,	// (0x00086dd1) main_mup2_pane_g5_ParamLimits

0x891d,	// (0x00086dd1) main_mup2_pane_g5

0x892e,	// (0x00086de2) main_mup2_pane_g6_ParamLimits

0x892e,	// (0x00086de2) main_mup2_pane_g6

0x893f,	// (0x00086df3) main_mup2_pane_g7_ParamLimits

0x893f,	// (0x00086df3) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0008db04) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0008db04) main_mup2_pane_g

0x895b,	// (0x00086e0f) main_mup2_pane_t1_ParamLimits

0x895b,	// (0x00086e0f) main_mup2_pane_t1

0x8972,	// (0x00086e26) main_mup2_pane_t2_ParamLimits

0x8972,	// (0x00086e26) main_mup2_pane_t2

0x8989,	// (0x00086e3d) main_mup2_pane_t3_ParamLimits

0x8989,	// (0x00086e3d) main_mup2_pane_t3

0x89a0,	// (0x00086e54) main_mup2_pane_t4_ParamLimits

0x89a0,	// (0x00086e54) main_mup2_pane_t4

0x89ba,	// (0x00086e6e) main_mup2_pane_t5_ParamLimits

0x89ba,	// (0x00086e6e) main_mup2_pane_t5

0x89d4,	// (0x00086e88) main_mup2_pane_t6_ParamLimits

0x89d4,	// (0x00086e88) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0008db13) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0008db13) main_mup2_pane_t

0x8a0c,	// (0x00086ec0) mup2_visualizer_pane_ParamLimits

0x8a0c,	// (0x00086ec0) mup2_visualizer_pane

0x8a3e,	// (0x00086ef2) mup_progress_pane_cp_ParamLimits

0x8a3e,	// (0x00086ef2) mup_progress_pane_cp

0x8b47,	// (0x00086ffb) mup_volume_pane_cp_ParamLimits

0x8b47,	// (0x00086ffb) mup_volume_pane_cp

0x8a55,	// (0x00086f09) mup2_visualizer_pane_g1_ParamLimits

0x8a55,	// (0x00086f09) mup2_visualizer_pane_g1

0x11de,	// (0x0007f692) mup2_visualizer_pane_g2_ParamLimits

0x11de,	// (0x0007f692) mup2_visualizer_pane_g2

0x8a6a,	// (0x00086f1e) mup2_visualizer_pane_g3_ParamLimits

0x8a6a,	// (0x00086f1e) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0008db20) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0008db20) mup2_visualizer_pane_g

0xde7d,	// (0x0008c331) aid_size_cell_fmradio

0x832f,	// (0x000867e3) aid_height_parent_landcape

0xe06d,	// (0x0008c521) wml_content_pane_cp

0xe075,	// (0x0008c529) wml_tabs_pane

0xe07e,	// (0x0008c532) popup_wml_miniature_window

0xe086,	// (0x0008c53a) scroll_pane_cp021

0xe09a,	// (0x0008c54e) wml_content_pane_comp8

0xd98a,	// (0x0008be3e) bg_popup_sub_pane_cp05

0x11fc,	// (0x0007f6b0) popup_wml_miniature_window_g1

0x1204,	// (0x0007f6b8) wml_miniature_view_pane

0x8a76,	// (0x00086f2a) aid_size_wml_view

0x8a7e,	// (0x00086f32) wml_miniature_view_pane_g1

0x8a87,	// (0x00086f3b) wml_miniature_view_pane_g2

0x8a90,	// (0x00086f44) wml_miniature_view_pane_g3

0x8a98,	// (0x00086f4c) wml_miniature_view_pane_g4

0x8aa0,	// (0x00086f54) wml_miniature_view_pane_g5

0x8aa8,	// (0x00086f5c) wml_miniature_view_pane_g6

0x8ab0,	// (0x00086f64) wml_miniature_view_pane_g7

0x8ab8,	// (0x00086f6c) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0008db27) wml_miniature_view_pane_g

0x120c,	// (0x0007f6c0) background_graphic_ParamLimits

0x120c,	// (0x0007f6c0) background_graphic

0x1218,	// (0x0007f6cc) wml_tabs_2_pane

0x1221,	// (0x0007f6d5) wml_tabs_3_pane_ParamLimits

0x1221,	// (0x0007f6d5) wml_tabs_3_pane

0x1233,	// (0x0007f6e7) wml_tabs_4_pane_ParamLimits

0x1233,	// (0x0007f6e7) wml_tabs_4_pane

0x1249,	// (0x0007f6fd) wml_tabs_5_pane_ParamLimits

0x1249,	// (0x0007f6fd) wml_tabs_5_pane

0x1263,	// (0x0007f717) wml_tabs_pane_g2_ParamLimits

0x1263,	// (0x0007f717) wml_tabs_pane_g2

0x1277,	// (0x0007f72b) wml_tabs_pane_g3_ParamLimits

0x1277,	// (0x0007f72b) wml_tabs_pane_g3

0x8ac0,	// (0x00086f74) wml_tabs_2_active_pane_ParamLimits

0x8ac0,	// (0x00086f74) wml_tabs_2_active_pane

0x8ad0,	// (0x00086f84) wml_tabs_2_passive_pane_ParamLimits

0x8ad0,	// (0x00086f84) wml_tabs_2_passive_pane

0x8ae0,	// (0x00086f94) wml_tabs_3_active_pane_cp_ParamLimits

0x8ae0,	// (0x00086f94) wml_tabs_3_active_pane_cp

0x8af1,	// (0x00086fa5) wml_tabs_3_passive_pane_ParamLimits

0x8af1,	// (0x00086fa5) wml_tabs_3_passive_pane

0x8b02,	// (0x00086fb6) wml_tabs_3_passive_pane_cp_ParamLimits

0x8b02,	// (0x00086fb6) wml_tabs_3_passive_pane_cp

0x8b13,	// (0x00086fc7) tabs_4_active_pane

0x8b1b,	// (0x00086fcf) tabs_4_passive_pane

0x8b23,	// (0x00086fd7) tabs_4_passive_pane_cp

0x8b2b,	// (0x00086fdf) tabs_4_passive_pane_cp2

0x8130,	// (0x000865e4) aid_height_text

0x79cf,	// (0x00085e83) mup_volume_cont_pane_ParamLimits

0x79cf,	// (0x00085e83) mup_volume_cont_pane

0x5636,	// (0x00083aea) aid_size_cell_pinb

0x5640,	// (0x00083af4) aid_size_list_pinb

0x8a27,	// (0x00086edb) mup2_volume_cont_pane_ParamLimits

0x8a27,	// (0x00086edb) mup2_volume_cont_pane

0x8b33,	// (0x00086fe7) mup2_volume_cont_pane_g1_ParamLimits

0x8b33,	// (0x00086fe7) mup2_volume_cont_pane_g1

0x52e2,	// (0x00083796) aid_size_cell_touch_ParamLimits

0x52e2,	// (0x00083796) aid_size_cell_touch

0x5536,	// (0x000839ea) touch_pane_ParamLimits

0x5536,	// (0x000839ea) touch_pane

0x552c,	// (0x000839e0) main_rss2_pane

0x12cd,	// (0x0007f781) listscroll_rss2_pane

0x12d6,	// (0x0007f78a) rss2_navigation_pane

0x12de,	// (0x0007f792) list_rss2_pane

0xe6ca,	// (0x0008cb7e) scroll_pane_cp22

0x12e6,	// (0x0007f79a) rss2_navigation_pane_g1

0x12ef,	// (0x0007f7a3) rss2_navigation_pane_g2

0x12f7,	// (0x0007f7ab) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0008db38) rss2_navigation_pane_g

0x12ff,	// (0x0007f7b3) rss2_navigation_pane_t1

0x8b6c,	// (0x00087020) rss2_list_single_pane_ParamLimits

0x8b6c,	// (0x00087020) rss2_list_single_pane

0x130d,	// (0x0007f7c1) rss2_list_single_pane_t2

0x131b,	// (0x0007f7cf) rss2_list_single_pane_t3_ParamLimits

0x131b,	// (0x0007f7cf) rss2_list_single_pane_t3

0x1338,	// (0x0007f7ec) rss2_list_single_pane_t4

0x725b,	// (0x0008570f) smil_status_pane_g1

0x8339,	// (0x000867ed) main_image2_pane_ParamLimits

0x8339,	// (0x000867ed) main_image2_pane

0x8757,	// (0x00086c0b) main_camera2_pane_g9_ParamLimits

0x8757,	// (0x00086c0b) main_camera2_pane_g9

0x87ab,	// (0x00086c5f) main_camera2_pane_t5_ParamLimits

0x87ab,	// (0x00086c5f) main_camera2_pane_t5

0x87bd,	// (0x00086c71) main_camera2_pane_t6_ParamLimits

0x87bd,	// (0x00086c71) main_camera2_pane_t6

0x8b83,	// (0x00087037) main_image2_pane_g1_ParamLimits

0x8b83,	// (0x00087037) main_image2_pane_g1

0x7f45,	// (0x000863f9) smil2_video_pane_ParamLimits

0x7f45,	// (0x000863f9) smil2_video_pane

0x5312,	// (0x000837c6) aid_zoom_text_primary_cp

0x54cd,	// (0x00083981) popup_preview_fixed_window

0xdfc7,	// (0x0008c47b) im_reading_pane_g1

0x86b3,	// (0x00086b67) cams2_bc_adjust_pane_cp_ParamLimits

0x86b3,	// (0x00086b67) cams2_bc_adjust_pane_cp

0x87e8,	// (0x00086c9c) cams2_bc_adjust_pane_ParamLimits

0x87e8,	// (0x00086c9c) cams2_bc_adjust_pane

0x2234,	// (0x000806e8) cams2_bc_adjust_pane_g1

0x8b8f,	// (0x00087043) cams2_slider_pane

0x8b98,	// (0x0008704c) cams2_slider_pane_g1

0x8ba1,	// (0x00087055) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0008db3f) cams2_slider_pane_g

0x571f,	// (0x00083bd3) calc_display_pane_ParamLimits

0x5737,	// (0x00083beb) calc_paper_pane_ParamLimits

0x5753,	// (0x00083c07) grid_calc_pane_ParamLimits

0x752a,	// (0x000859de) popup_clock_digital_window_t1_ParamLimits

0xeb2e,	// (0x0008cfe2) main_image_pane_t1

0x5705,	// (0x00083bb9) aid_size_cell_calc_ParamLimits

0x5705,	// (0x00083bb9) aid_size_cell_calc

0x836a,	// (0x0008681e) popup_blid_sat_info2_window_ParamLimits

0x836a,	// (0x0008681e) popup_blid_sat_info2_window

0x1382,	// (0x0007f836) aid_size_cell_blid

0x138a,	// (0x0007f83e) bg_popup_window_pane_cp07

0x13ad,	// (0x0007f861) grid_popup_blid_pane

0x13b5,	// (0x0007f869) heading_pane_cp05_ParamLimits

0x13b5,	// (0x0007f869) heading_pane_cp05

0x147d,	// (0x0007f931) cell_popup_blid_pane_ParamLimits

0x147d,	// (0x0007f931) cell_popup_blid_pane

0x149d,	// (0x0007f951) cell_popup_blid_pane_g1

0x14a5,	// (0x0007f959) cell_popup_blid_pane_t1

0x89f1,	// (0x00086ea5) mup2_indicator_pane_ParamLimits

0x89f1,	// (0x00086ea5) mup2_indicator_pane

0xde85,	// (0x0008c339) mup2_visualizer_osc_pane

0x11ea,	// (0x0007f69e) mup2_visualizer_spec_pane_ParamLimits

0x11ea,	// (0x0007f69e) mup2_visualizer_spec_pane

0x8bbb,	// (0x0008706f) mup2_spec_half_pane

0x8bc4,	// (0x00087078) mup2_spec_half_pane_cp

0x8bcc,	// (0x00087080) mup2_spec_bar_pane_ParamLimits

0x8bcc,	// (0x00087080) mup2_spec_bar_pane

0x113e,	// (0x0007f5f2) mup2_spec_bar_pane_g1

0x1148,	// (0x0007f5fc) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0008dab2) mup2_spec_bar_pane_g

0x8beb,	// (0x0008709f) mup2_osc_middle_pane

0x115a,	// (0x0007f60e) mup2_visualizer_osc_pane_g1

0xd599,	// (0x0008ba4d) popup_number_entry_window_t1_ParamLimits

0xd5ac,	// (0x0008ba60) popup_number_entry_window_t2_ParamLimits

0xd5be,	// (0x0008ba72) popup_number_entry_window_t3_ParamLimits

0x5583,	// (0x00083a37) popup_number_entry_window_t5_ParamLimits

0x5583,	// (0x00083a37) popup_number_entry_window_t5

0xf0af,	// (0x0008d563) popup_number_entry_window_t_ParamLimits

0xd5d0,	// (0x0008ba84) text_title_cp2_ParamLimits

0x7c83,	// (0x00086137) aid_hotspot_pointer_text2_pane

0x7d15,	// (0x000861c9) main_viewer_pane_g9_ParamLimits

0x7d15,	// (0x000861c9) main_viewer_pane_g9

0xe210,	// (0x0008c6c4) cale_month_pane_t1_ParamLimits

0xe236,	// (0x0008c6ea) bg_cale_pane_ParamLimits

0xe24e,	// (0x0008c702) list_cale_pane_ParamLimits

0xe25f,	// (0x0008c713) listscroll_cale_day_pane_t1

0xe271,	// (0x0008c725) scroll_pane_cp09_ParamLimits

0x7a0a,	// (0x00085ebe) main_mup_eq_pane_t1_ParamLimits

0x7a0a,	// (0x00085ebe) main_mup_eq_pane_t1

0x7a20,	// (0x00085ed4) main_mup_eq_pane_t2_ParamLimits

0x7a20,	// (0x00085ed4) main_mup_eq_pane_t2

0x7a36,	// (0x00085eea) main_mup_eq_pane_t3_ParamLimits

0x7a36,	// (0x00085eea) main_mup_eq_pane_t3

0x7a4c,	// (0x00085f00) main_mup_eq_pane_t4_ParamLimits

0x7a4c,	// (0x00085f00) main_mup_eq_pane_t4

0x7a62,	// (0x00085f16) main_mup_eq_pane_t5_ParamLimits

0x7a62,	// (0x00085f16) main_mup_eq_pane_t5

0x7a78,	// (0x00085f2c) main_mup_eq_pane_t6_ParamLimits

0x7a78,	// (0x00085f2c) main_mup_eq_pane_t6

0x7a8a,	// (0x00085f3e) main_mup_eq_pane_t7_ParamLimits

0x7a8a,	// (0x00085f3e) main_mup_eq_pane_t7

0x7a9c,	// (0x00085f50) main_mup_eq_pane_t8_ParamLimits

0x7a9c,	// (0x00085f50) main_mup_eq_pane_t8

0x7aae,	// (0x00085f62) main_mup_eq_pane_t9_ParamLimits

0x7aae,	// (0x00085f62) main_mup_eq_pane_t9

0x7ac4,	// (0x00085f78) main_mup_eq_pane_t10_ParamLimits

0x7ac4,	// (0x00085f78) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0008d8ee) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0008d8ee) main_mup_eq_pane_t

0x7b57,	// (0x0008600b) mup_equalizer_pane_cp5_ParamLimits

0x7b69,	// (0x0008601d) mup_equalizer_pane_cp6_ParamLimits

0x7b7b,	// (0x0008602f) mup_equalizer_pane_cp7_ParamLimits

0x552c,	// (0x000839e0) main_gallery_pane

0x1163,	// (0x0007f617) smil2_volume_pane

0x117e,	// (0x0007f632) smil_status_volume_pane_g1_ParamLimits

0x116b,	// (0x0007f61f) smil_status_volume_pane_g2_ParamLimits

0x852e,	// (0x000869e2) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0008dab7) smil_status_volume_pane_g_ParamLimits

0x138a,	// (0x0007f83e) bg_popup_window_pane_cp07_ParamLimits

0x1398,	// (0x0007f84c) blid_firmament_pane

0x8bf4,	// (0x000870a8) aid_size_cell_gallery_ParamLimits

0x8bf4,	// (0x000870a8) aid_size_cell_gallery

0x8c02,	// (0x000870b6) grid_gallery_pane_ParamLimits

0x8c02,	// (0x000870b6) grid_gallery_pane

0x8c0e,	// (0x000870c2) cell_gallery_pane_ParamLimits

0x8c0e,	// (0x000870c2) cell_gallery_pane

0x14b3,	// (0x0007f967) bg_cell_gallery_focus_pane_ParamLimits

0x14b3,	// (0x0007f967) bg_cell_gallery_focus_pane

0x14c5,	// (0x0007f979) cell_gallery_pane_g1_ParamLimits

0x14c5,	// (0x0007f979) cell_gallery_pane_g1

0x8c4d,	// (0x00087101) cell_gallery_pane_g2_ParamLimits

0x8c4d,	// (0x00087101) cell_gallery_pane_g2

0x8c5a,	// (0x0008710e) cell_gallery_pane_g3_ParamLimits

0x8c5a,	// (0x0008710e) cell_gallery_pane_g3

0x14d1,	// (0x0007f985) cell_gallery_pane_g4_ParamLimits

0x14d1,	// (0x0007f985) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0008db65) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0008db65) cell_gallery_pane_g

0x14dd,	// (0x0007f991) bg_cell_gallery_focus_pane_g1

0x14e5,	// (0x0007f999) bg_cell_gallery_focus_pane_g2

0x14ed,	// (0x0007f9a1) bg_cell_gallery_focus_pane_g3

0x14f5,	// (0x0007f9a9) bg_cell_gallery_focus_pane_g4

0x14fd,	// (0x0007f9b1) bg_cell_gallery_focus_pane_g5

0x1505,	// (0x0007f9b9) bg_cell_gallery_focus_pane_g6

0x150d,	// (0x0007f9c1) bg_cell_gallery_focus_pane_g7

0x1515,	// (0x0007f9c9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0008db6e) bg_cell_gallery_focus_pane_g

0x151d,	// (0x0007f9d1) aid_firma_cardinal

0x1531,	// (0x0007f9e5) blid_firmament_pane_t1

0x1548,	// (0x0007f9fc) blid_firmament_pane_t2

0x155f,	// (0x0007fa13) blid_firmament_pane_t3

0x1576,	// (0x0007fa2a) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0008db7f) blid_firmament_pane_t

0x158d,	// (0x0007fa41) blid_sat_info_pane

0x159d,	// (0x0007fa51) blid_sat_info_pane_g1

0x159d,	// (0x0007fa51) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0008db88) blid_sat_info_pane_g

0x15a7,	// (0x0007fa5b) blid_sat_info_pane_t1

0x15b5,	// (0x0007fa69) smil2_volume_content_pane

0x15be,	// (0x0007fa72) smil2_volume_pane_g1

0x15c6,	// (0x0007fa7a) smil2_volume_content_pane_g1

0x15cf,	// (0x0007fa83) smil2_volume_content_pane_g2

0x15d8,	// (0x0007fa8c) smil2_volume_content_pane_g3

0x15e1,	// (0x0007fa95) smil2_volume_content_pane_g4

0x15ea,	// (0x0007fa9e) smil2_volume_content_pane_g5

0x15f3,	// (0x0007faa7) smil2_volume_content_pane_g6

0x15fc,	// (0x0007fab0) smil2_volume_content_pane_g7

0x1605,	// (0x0007fab9) smil2_volume_content_pane_g8

0x160e,	// (0x0007fac2) smil2_volume_content_pane_g9

0x1617,	// (0x0007facb) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0008db8d) smil2_volume_content_pane_g

0x5c7c,	// (0x00084130) cale_week_day_heading_pane_t1_ParamLimits

0x5cb7,	// (0x0008416b) cale_week_day_heading_pane_t2_ParamLimits

0x5cf2,	// (0x000841a6) cale_week_day_heading_pane_t3_ParamLimits

0x5d2d,	// (0x000841e1) cale_week_day_heading_pane_t4_ParamLimits

0x5d68,	// (0x0008421c) cale_week_day_heading_pane_t5_ParamLimits

0x5da3,	// (0x00084257) cale_week_day_heading_pane_t6_ParamLimits

0x5dde,	// (0x00084292) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0008d66a) cale_week_day_heading_pane_t_ParamLimits

0xde2b,	// (0x0008c2df) bg_cale_side_pane_ParamLimits

0x5e19,	// (0x000842cd) cale_week_time_pane_t1_ParamLimits

0x5e53,	// (0x00084307) cale_week_time_pane_t2_ParamLimits

0x5e8d,	// (0x00084341) cale_week_time_pane_t3_ParamLimits

0x5ec7,	// (0x0008437b) cale_week_time_pane_t4_ParamLimits

0x5f01,	// (0x000843b5) cale_week_time_pane_t5_ParamLimits

0x5f3b,	// (0x000843ef) cale_week_time_pane_t6_ParamLimits

0x5f75,	// (0x00084429) cale_week_time_pane_t7_ParamLimits

0x5faf,	// (0x00084463) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0008d679) cale_week_time_pane_t_ParamLimits

0x5fe9,	// (0x0008449d) cell_cale_week_pane_g2_ParamLimits

0xde2b,	// (0x0008c2df) bg_cale_side_pane_cp01_ParamLimits

0x6fb8,	// (0x0008546c) cale_month_week_pane_t1_ParamLimits

0x6ff1,	// (0x000854a5) cale_month_week_pane_t2_ParamLimits

0x702a,	// (0x000854de) cale_month_week_pane_t3_ParamLimits

0x7063,	// (0x00085517) cale_month_week_pane_t4_ParamLimits

0x709c,	// (0x00085550) cale_month_week_pane_t5_ParamLimits

0x70d5,	// (0x00085589) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0008d74e) cale_month_week_pane_t_ParamLimits

0x7226,	// (0x000856da) cell_cale_month_pane_g1_ParamLimits

0x552c,	// (0x000839e0) main_cale_event_viewer_pane

0x0205,	// (0x0007e6b9) listscroll_cale_event_viewer_pane

0x1620,	// (0x0007fad4) list_cale_ev_pane

0x1628,	// (0x0007fadc) scroll_pane_cp023

0x8c67,	// (0x0008711b) field_cale_ev_pane_ParamLimits

0x8c67,	// (0x0008711b) field_cale_ev_pane

0x1634,	// (0x0007fae8) field_cale_ev_content_pane_ParamLimits

0x1634,	// (0x0007fae8) field_cale_ev_content_pane

0x1640,	// (0x0007faf4) field_cale_ev_pane_g1_ParamLimits

0x1640,	// (0x0007faf4) field_cale_ev_pane_g1

0x164c,	// (0x0007fb00) field_cale_ev_pane_g2_ParamLimits

0x164c,	// (0x0007fb00) field_cale_ev_pane_g2

0x1664,	// (0x0007fb18) field_cale_ev_pane_g3_ParamLimits

0x1664,	// (0x0007fb18) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0008dba2) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0008dba2) field_cale_ev_pane_g

0x167c,	// (0x0007fb30) field_cale_ev_pane_t1_ParamLimits

0x167c,	// (0x0007fb30) field_cale_ev_pane_t1

0x8c81,	// (0x00087135) field_cale_ev_content_pane_t1_ParamLimits

0x8c81,	// (0x00087135) field_cale_ev_content_pane_t1

0xea14,	// (0x0008cec8) bg_button_pane_cp01

0x5a67,	// (0x00083f1b) listscroll_cale_week_pane_ParamLimits

0xddd6,	// (0x0008c28a) popup_toolbar_window_cp01

0xddfc,	// (0x0008c2b0) listscroll_cale_week_pane_t1_ParamLimits

0x5a67,	// (0x00083f1b) listscroll_cale_day_pane_ParamLimits

0xddd6,	// (0x0008c28a) popup_toolbar_window_cp02

0xe25f,	// (0x0008c713) listscroll_cale_day_pane_t1_ParamLimits

0x5a67,	// (0x00083f1b) main_cale_month_pane_ParamLimits

0x843d,	// (0x000868f1) popup_toolbar_window_cp03_ParamLimits

0x843d,	// (0x000868f1) popup_toolbar_window_cp03

0x7e6d,	// (0x00086321) main_image_pane_g2_ParamLimits

0x7e6d,	// (0x00086321) main_image_pane_g2

0x7e79,	// (0x0008632d) main_image_pane_g3_ParamLimits

0x7e79,	// (0x0008632d) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0008d980) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0008d980) main_image_pane_g

0xeb2e,	// (0x0008cfe2) main_image_pane_t1_ParamLimits

0x7e85,	// (0x00086339) main_image_pane_t2_ParamLimits

0x7e85,	// (0x00086339) main_image_pane_t2

0x7e97,	// (0x0008634b) main_image_pane_t3_ParamLimits

0x7e97,	// (0x0008634b) main_image_pane_t3

0x7ea9,	// (0x0008635d) main_image_pane_t4_ParamLimits

0x7ea9,	// (0x0008635d) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0008d987) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0008d987) main_image_pane_t

0x7ebb,	// (0x0008636f) popup_image_details_window_cp01

0x7ec3,	// (0x00086377) popup_toobar_trans_pane_cp01_ParamLimits

0x7ec3,	// (0x00086377) popup_toobar_trans_pane_cp01

0x83b1,	// (0x00086865) popup_image_details_window_ParamLimits

0x83b1,	// (0x00086865) popup_image_details_window

0x83bd,	// (0x00086871) popup_image_focus_window

0x86a7,	// (0x00086b5b) camera2_autofocus_pane_ParamLimits

0x86a7,	// (0x00086b5b) camera2_autofocus_pane

0x0205,	// (0x0007e6b9) bg_popup_sub_pane_cp06

0x1693,	// (0x0007fb47) popup_image_focus_window_g1

0x169b,	// (0x0007fb4f) popup_image_focus_window_g2

0x16a3,	// (0x0007fb57) popup_image_focus_window_g3

0x16ab,	// (0x0007fb5f) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0008dba9) popup_image_focus_window_g

0x16b3,	// (0x0007fb67) popup_image_focus_window_t1

0x16c1,	// (0x0007fb75) popup_image_focus_window_t2

0x16d0,	// (0x0007fb84) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0008dbb2) popup_image_focus_window_t

0x16de,	// (0x0007fb92) camera2_autofocus_pane_g1

0x0260,	// (0x0007e714) bg_tb_trans_pane_cp01

0x16ec,	// (0x0007fba0) popup_image_details_window_g1

0x16ff,	// (0x0007fbb3) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0008dbc4) popup_image_details_window_g

0x1728,	// (0x0007fbdc) popup_image_details_window_t1

0x173a,	// (0x0007fbee) popup_image_details_window_t2

0x1753,	// (0x0007fc07) popup_image_details_window_t3

0x1767,	// (0x0007fc1b) popup_image_details_window_t4

0x1782,	// (0x0007fc36) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0008dbcb) popup_image_details_window_t

0xdc96,	// (0x0008c14a) bg_calc_paper_pane_ParamLimits

0x552c,	// (0x000839e0) grid_highlight_pane_cp013

0x5838,	// (0x00083cec) list_calc_pane_ParamLimits

0x584a,	// (0x00083cfe) scroll_pane_cp024

0xdcae,	// (0x0008c162) bg_calc_display_pane_ParamLimits

0x5852,	// (0x00083d06) calc_display_pane_t1_ParamLimits

0x5867,	// (0x00083d1b) calc_display_pane_t2_ParamLimits

0x587c,	// (0x00083d30) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0008d5ea) calc_display_pane_t_ParamLimits

0x5932,	// (0x00083de6) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0008d607) cell_calc_pane_g

0x593b,	// (0x00083def) cell_calc_pane_t1

0xdd0d,	// (0x0008c1c1) grid_highlight_pane_cp02_ParamLimits

0xdd23,	// (0x0008c1d7) toolbar_button_pane_cp01_ParamLimits

0xdd23,	// (0x0008c1d7) toolbar_button_pane_cp01

0xeb73,	// (0x0008d027) temp_image_control_pane_ParamLimits

0xeb73,	// (0x0008d027) temp_image_control_pane

0x8339,	// (0x000867ed) main_mp3_pane

0x179c,	// (0x0007fc50) temp_image_control_pane_g1_ParamLimits

0x179c,	// (0x0007fc50) temp_image_control_pane_g1

0x17aa,	// (0x0007fc5e) temp_image_control_pane_g2_ParamLimits

0x17aa,	// (0x0007fc5e) temp_image_control_pane_g2

0x17bc,	// (0x0007fc70) temp_image_control_pane_g3_ParamLimits

0x17bc,	// (0x0007fc70) temp_image_control_pane_g3

0x8ccb,	// (0x0008717f) temp_image_control_pane_g4_ParamLimits

0x8ccb,	// (0x0008717f) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0008dbd6) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0008dbd6) temp_image_control_pane_g

0x179c,	// (0x0007fc50) main_mp3_pane_g1

0x8cdc,	// (0x00087190) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0008dbdf) main_mp3_pane_g

0x17ff,	// (0x0007fcb3) main_mp3_pane_t1

0xded8,	// (0x0008c38c) main_camera_pane_g8_ParamLimits

0xded8,	// (0x0008c38c) main_camera_pane_g8

0x6212,	// (0x000846c6) main_video_pane_g7_ParamLimits

0x6212,	// (0x000846c6) main_video_pane_g7

0x87d6,	// (0x00086c8a) main_camera2_pane_t7_ParamLimits

0x87d6,	// (0x00086c8a) main_camera2_pane_t7

0xe02d,	// (0x0008c4e1) scroll_pane_cp025_ParamLimits

0xe02d,	// (0x0008c4e1) scroll_pane_cp025

0xe041,	// (0x0008c4f5) scroll_pane_cp026_ParamLimits

0xe041,	// (0x0008c4f5) scroll_pane_cp026

0xe050,	// (0x0008c504) wml_content_pane_ParamLimits

0x552c,	// (0x000839e0) main_touch_calib_pane

0x8d74,	// (0x00087228) main_touch_calib_pane_g1

0x8d80,	// (0x00087234) main_touch_calib_pane_g2

0x8d8c,	// (0x00087240) main_touch_calib_pane_g3

0x8d98,	// (0x0008724c) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0008dbfd) main_touch_calib_pane_g

0x8da4,	// (0x00087258) main_touch_calib_pane_t1

0x8db9,	// (0x0008726d) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0008dc06) main_touch_calib_pane_t

0xe786,	// (0x0008cc3a) mup_progress_pane_cp02

0xe7bb,	// (0x0008cc6f) navi_pane_g1

0xe846,	// (0x0008ccfa) navi_pane_mp_t3

0x8339,	// (0x000867ed) main_mp3_pane_ParamLimits

0x8478,	// (0x0008692c) navi_pane_ParamLimits

0x179c,	// (0x0007fc50) main_mp3_pane_g1_ParamLimits

0x8cdc,	// (0x00087190) main_mp3_pane_g2_ParamLimits

0x8ce8,	// (0x0008719c) main_mp3_pane_g3_ParamLimits

0x8ce8,	// (0x0008719c) main_mp3_pane_g3

0x8cf4,	// (0x000871a8) main_mp3_pane_g4_ParamLimits

0x8cf4,	// (0x000871a8) main_mp3_pane_g4

0x17cc,	// (0x0007fc80) main_mp3_pane_g5_ParamLimits

0x17cc,	// (0x0007fc80) main_mp3_pane_g5

0x17da,	// (0x0007fc8e) main_mp3_pane_g6_ParamLimits

0x17da,	// (0x0007fc8e) main_mp3_pane_g6

0x17e7,	// (0x0007fc9b) main_mp3_pane_g7_ParamLimits

0x17e7,	// (0x0007fc9b) main_mp3_pane_g7

0x17f3,	// (0x0007fca7) main_mp3_pane_g8_ParamLimits

0x17f3,	// (0x0007fca7) main_mp3_pane_g8

0xf72b,	// (0x0008dbdf) main_mp3_pane_g_ParamLimits

0x8d00,	// (0x000871b4) main_mp3_pane_t2

0x8d0e,	// (0x000871c2) main_mp3_pane_t3

0x180d,	// (0x0007fcc1) main_mp3_pane_t4

0x181b,	// (0x0007fccf) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0008dbf0) main_mp3_pane_t

0x1829,	// (0x0007fcdd) mup_progress_pane_cp01

0x5312,	// (0x000837c6) aid_zoom_text_secondary2

0x1620,	// (0x0007fad4) list_cale_ev2_pane

0x1628,	// (0x0007fadc) scroll_pane_cp023_ParamLimits

0x8e04,	// (0x000872b8) field_cale_ev2_pane_ParamLimits

0x8e04,	// (0x000872b8) field_cale_ev2_pane

0x1831,	// (0x0007fce5) field_cale_ev2_pane_g1_ParamLimits

0x1831,	// (0x0007fce5) field_cale_ev2_pane_g1

0x183d,	// (0x0007fcf1) field_cale_ev2_pane_g2_ParamLimits

0x183d,	// (0x0007fcf1) field_cale_ev2_pane_g2

0x1855,	// (0x0007fd09) field_cale_ev2_pane_g3_ParamLimits

0x1855,	// (0x0007fd09) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0008dc11) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0008dc11) field_cale_ev2_pane_g

0x1879,	// (0x0007fd2d) field_cale_ev2_pane_t1_ParamLimits

0x1879,	// (0x0007fd2d) field_cale_ev2_pane_t1

0x1890,	// (0x0007fd44) field_cale_ev2_pane_t2_ParamLimits

0x1890,	// (0x0007fd44) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0008dc1a) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0008dc1a) field_cale_ev2_pane_t

0x7d69,	// (0x0008621d) main_postcard_pane_g5_ParamLimits

0x7d69,	// (0x0008621d) main_postcard_pane_g5

0x7d75,	// (0x00086229) main_postcard_pane_g6_ParamLimits

0x7d75,	// (0x00086229) main_postcard_pane_g6

0x6067,	// (0x0008451b) camera2_autofocus_pane_cp_ParamLimits

0x6067,	// (0x0008451b) camera2_autofocus_pane_cp

0x8339,	// (0x000867ed) main_mup3_pane

0x8e53,	// (0x00087307) main_mup3_pane_g1_ParamLimits

0x8e53,	// (0x00087307) main_mup3_pane_g1

0x8e74,	// (0x00087328) main_mup3_pane_g2_ParamLimits

0x8e74,	// (0x00087328) main_mup3_pane_g2

0x8ee1,	// (0x00087395) main_mup3_pane_g3_ParamLimits

0x8ee1,	// (0x00087395) main_mup3_pane_g3

0x8f1c,	// (0x000873d0) main_mup3_pane_g4_ParamLimits

0x8f1c,	// (0x000873d0) main_mup3_pane_g4

0x8f57,	// (0x0008740b) main_mup3_pane_g5_ParamLimits

0x8f57,	// (0x0008740b) main_mup3_pane_g5

0x8f92,	// (0x00087446) main_mup3_pane_g6_ParamLimits

0x8f92,	// (0x00087446) main_mup3_pane_g6

0x18a5,	// (0x0007fd59) main_mup3_pane_g7_ParamLimits

0x18a5,	// (0x0007fd59) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0008dc2a) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0008dc2a) main_mup3_pane_g

0x9000,	// (0x000874b4) main_mup3_pane_t1_ParamLimits

0x9000,	// (0x000874b4) main_mup3_pane_t1

0x9061,	// (0x00087515) main_mup3_pane_t2_ParamLimits

0x9061,	// (0x00087515) main_mup3_pane_t2

0x911c,	// (0x000875d0) main_mup3_pane_t4_ParamLimits

0x911c,	// (0x000875d0) main_mup3_pane_t4

0x9162,	// (0x00087616) main_mup3_pane_t5_ParamLimits

0x9162,	// (0x00087616) main_mup3_pane_t5

0x9206,	// (0x000876ba) main_mup3_pane_t6_ParamLimits

0x9206,	// (0x000876ba) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0008dc3b) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0008dc3b) main_mup3_pane_t

0x92ae,	// (0x00087762) mup3_progress_pane_ParamLimits

0x92ae,	// (0x00087762) mup3_progress_pane

0x9312,	// (0x000877c6) popup_mup3_control_window_ParamLimits

0x9312,	// (0x000877c6) popup_mup3_control_window

0x18b3,	// (0x0007fd67) popup_mup3_text_window

0x932b,	// (0x000877df) mup3_progress_pane_t1

0x9349,	// (0x000877fd) mup3_progress_pane_t2

0x18bb,	// (0x0007fd6f) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0008dc48) mup3_progress_pane_t

0x18d8,	// (0x0007fd8c) mup_progress_pane_cp03

0x0205,	// (0x0007e6b9) bg_tb_trans_pane_cp04

0x9367,	// (0x0008781b) mup3_volume_pane

0x936f,	// (0x00087823) popup_mup3_control_window_g1

0x9378,	// (0x0008782c) mup3_volume_pane_g1

0x9381,	// (0x00087835) mup3_volume_pane_g2

0x938a,	// (0x0008783e) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0008dc4f) mup3_volume_pane_g

0x0205,	// (0x0007e6b9) bg_tb_trans_pane_cp03

0x18e8,	// (0x0007fd9c) popup_mup3_text_window_g1

0x18f0,	// (0x0007fda4) popup_mup3_text_window_t1

0xdcf6,	// (0x0008c1aa) list_calc_item_pane_g1_ParamLimits

0x12b4,	// (0x0007f768) mup_volume_pane_cp_g1

0x8dce,	// (0x00087282) main_touch_calib_pane_t3

0x8de0,	// (0x00087294) main_touch_calib_pane_t4

0x8df2,	// (0x000872a6) main_touch_calib_pane_t5

0x52d2,	// (0x00083786) aid_cell_size_toolbar2

0x52da,	// (0x0008378e) aid_popup3_width_pane

0x51e6,	// (0x0008369a) aid_zoom_text_msg_primary

0xdeb7,	// (0x0008c36b) vorec_t7

0xdcba,	// (0x0008c16e) bg_calc_paper_pane_g1_ParamLimits

0xdcc6,	// (0x0008c17a) bg_calc_paper_pane_g2_ParamLimits

0xdcd2,	// (0x0008c186) bg_calc_paper_pane_g3_ParamLimits

0xdcde,	// (0x0008c192) bg_calc_paper_pane_g4_ParamLimits

0xdcea,	// (0x0008c19e) bg_calc_paper_pane_g5_ParamLimits

0x58b5,	// (0x00083d69) bg_calc_paper_pane_g6_ParamLimits

0x58c4,	// (0x00083d78) bg_calc_paper_pane_g7_ParamLimits

0x58d3,	// (0x00083d87) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0008d5f1) bg_calc_paper_pane_g_ParamLimits

0x58e2,	// (0x00083d96) calc_bg_paper_pane_g9_ParamLimits

0x6147,	// (0x000845fb) image_qvga_pane_ParamLimits

0x6147,	// (0x000845fb) image_qvga_pane

0xdbe5,	// (0x0008c099) bg_popup_sub_pane_cp04_ParamLimits

0xeaaa,	// (0x0008cf5e) popup_mup_playback_window_g1_ParamLimits

0xeab6,	// (0x0008cf6a) popup_mup_playback_window_t1_ParamLimits

0xeacb,	// (0x0008cf7f) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0008d97b) popup_mup_playback_window_t_ParamLimits

0x88fd,	// (0x00086db1) main_mup2_pane_g3_ParamLimits

0x88fd,	// (0x00086db1) main_mup2_pane_g3

0x64cd,	// (0x00084981) popup_toolbar_window_cp04

0xee91,	// (0x0008d345) popup_call2_audio_second_window_g3_ParamLimits

0xee91,	// (0x0008d345) popup_call2_audio_second_window_g3

0x065d,	// (0x0007eb11) popup_call2_audio_first_window_g4_ParamLimits

0x065d,	// (0x0007eb11) popup_call2_audio_first_window_g4

0x0cdc,	// (0x0007f190) popup_call2_audio_in_window_g4_ParamLimits

0x0cdc,	// (0x0007f190) popup_call2_audio_in_window_g4

0x7e60,	// (0x00086314) aid_area_sk_bg_cut_ParamLimits

0x7e60,	// (0x00086314) aid_area_sk_bg_cut

0xeae0,	// (0x0008cf94) aid_area_sk_bg_cut_2_ParamLimits

0xeae0,	// (0x0008cf94) aid_area_sk_bg_cut_2

0x8c3d,	// (0x000870f1) aid_placing_details_win

0x8c45,	// (0x000870f9) aid_placing_details_win_2

0x16de,	// (0x0007fb92) camera2_autofocus_pane_g1_ParamLimits

0x54c0,	// (0x00083974) popup_fixed_preview_cale_window_ParamLimits

0x54c0,	// (0x00083974) popup_fixed_preview_cale_window

0xe8bc,	// (0x0008cd70) navi_slider_pane_g3

0xe8c5,	// (0x0008cd79) navi_slider_pane_g4

0xe8ce,	// (0x0008cd82) navi_slider_pane_g5

0xe8bc,	// (0x0008cd70) navi_slider_pane_g6

0x77ca,	// (0x00085c7e) navi_slider_pane_g7

0xe9e1,	// (0x0008ce95) mup_scale_pane_g3

0xe9ea,	// (0x0008ce9e) mup_scale_pane_g4

0xe9f3,	// (0x0008cea7) mup_scale_pane_g5

0x7b8d,	// (0x00086041) mup_scale_pane_g6

0x7b96,	// (0x0008604a) mup_scale_pane_g7

0xe8bc,	// (0x0008cd70) cams2_slider_pane_g3

0x1369,	// (0x0007f81d) cams2_slider_pane_g4

0x8baa,	// (0x0008705e) cams2_slider_pane_g5

0xe8bc,	// (0x0008cd70) cams2_slider_pane_g6

0x8bb2,	// (0x00087066) cams2_slider_pane_g7

0x159d,	// (0x0007fa51) camera2_autofocus_pane_cp_g1

0x107d,	// (0x0007f531) bg_popup_preview_window_pane_cp02_ParamLimits

0x107d,	// (0x0007f531) bg_popup_preview_window_pane_cp02

0x18fe,	// (0x0007fdb2) list_fp_cale_pane_ParamLimits

0x18fe,	// (0x0007fdb2) list_fp_cale_pane

0x190a,	// (0x0007fdbe) popup_fixed_preview_cale_window_t1_ParamLimits

0x190a,	// (0x0007fdbe) popup_fixed_preview_cale_window_t1

0x9393,	// (0x00087847) popup_fixed_preview_cale_window_t2_ParamLimits

0x9393,	// (0x00087847) popup_fixed_preview_cale_window_t2

0x93a8,	// (0x0008785c) popup_fixed_preview_cale_window_t3_ParamLimits

0x93a8,	// (0x0008785c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0008dc56) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0008dc56) popup_fixed_preview_cale_window_t

0x93bd,	// (0x00087871) list_single_fp_cale_pane_ParamLimits

0x93bd,	// (0x00087871) list_single_fp_cale_pane

0x1928,	// (0x0007fddc) list_single_fp_cale_pane_g1_ParamLimits

0x1928,	// (0x0007fddc) list_single_fp_cale_pane_g1

0x1934,	// (0x0007fde8) list_single_fp_cale_pane_g2_ParamLimits

0x1934,	// (0x0007fde8) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0008dc5d) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0008dc5d) list_single_fp_cale_pane_g

0x194d,	// (0x0007fe01) list_single_fp_cale_pane_t1_ParamLimits

0x194d,	// (0x0007fe01) list_single_fp_cale_pane_t1

0x195f,	// (0x0007fe13) list_single_fp_cale_pane_t2_ParamLimits

0x195f,	// (0x0007fe13) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0008dc64) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0008dc64) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x552c,	// (0x000839e0) main_dialer_pane

0x93cd,	// (0x00087881) aid_cell_size_keypad

0x93d7,	// (0x0008788b) dialer_ne_pane

0x93df,	// (0x00087893) grid_dialer_command_1_pane

0x93e7,	// (0x0008789b) grid_dialer_command_2_pane

0x93ef,	// (0x000878a3) grid_dialer_keypad_pane

0x93ff,	// (0x000878b3) bg_popup_call_pane_cp06_ParamLimits

0x93ff,	// (0x000878b3) bg_popup_call_pane_cp06

0x940b,	// (0x000878bf) dialer_ne_clear_pane_ParamLimits

0x940b,	// (0x000878bf) dialer_ne_clear_pane

0x1992,	// (0x0007fe46) dialer_ne_pane_g1

0x199a,	// (0x0007fe4e) dialer_ne_pane_t1_ParamLimits

0x199a,	// (0x0007fe4e) dialer_ne_pane_t1

0x9417,	// (0x000878cb) dialer_ne_pane_t2_ParamLimits

0x9417,	// (0x000878cb) dialer_ne_pane_t2

0x9434,	// (0x000878e8) dialer_ne_pane_t3_ParamLimits

0x9434,	// (0x000878e8) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0008dc69) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0008dc69) dialer_ne_pane_t

0x9458,	// (0x0008790c) dialer_ne_pane_t3_copy1_ParamLimits

0x9458,	// (0x0008790c) dialer_ne_pane_t3_copy1

0x947c,	// (0x00087930) cell_dialer_keypad_pane_ParamLimits

0x947c,	// (0x00087930) cell_dialer_keypad_pane

0x9491,	// (0x00087945) cell_dialer_command_1_pane_ParamLimits

0x9491,	// (0x00087945) cell_dialer_command_1_pane

0x94a7,	// (0x0008795b) cell_dialer_command_2_pane_ParamLimits

0x94a7,	// (0x0008795b) cell_dialer_command_2_pane

0x19ac,	// (0x0007fe60) bg_button_pane_cp02_ParamLimits

0x19ac,	// (0x0007fe60) bg_button_pane_cp02

0x94b6,	// (0x0008796a) cell_dialer_keypad_pane_g1_ParamLimits

0x94b6,	// (0x0008796a) cell_dialer_keypad_pane_g1

0x19ac,	// (0x0007fe60) bg_button_pane_cp03_ParamLimits

0x19ac,	// (0x0007fe60) bg_button_pane_cp03

0x94cb,	// (0x0008797f) cell_dialer_command_1_pane_g1_ParamLimits

0x94cb,	// (0x0008797f) cell_dialer_command_1_pane_g1

0x19b8,	// (0x0007fe6c) bg_button_pane_cp04

0x94de,	// (0x00087992) cell_dialer_command_2_pane_g1

0xde85,	// (0x0008c339) bg_button_pane_cp06

0x19c0,	// (0x0007fe74) dialer_ne_clear_pane_g1

0xe7c7,	// (0x0008cc7b) navi_pane_g2

0x7772,	// (0x00085c26) navi_pane_g3

0x0002,

0xf3ca,	// (0x0008d87e) navi_pane_g

0xe854,	// (0x0008cd08) navi_pane_mv_g2

0xe87b,	// (0x0008cd2f) navi_pane_mv_g5

0x778f,	// (0x00085c43) navi_pane_mv_t1

0xdcae,	// (0x0008c162) main_clock2_pane

0x951a,	// (0x000879ce) main_clock2_list_pane_ParamLimits

0x951a,	// (0x000879ce) main_clock2_list_pane

0x9540,	// (0x000879f4) main_clock2_pane_t1_ParamLimits

0x9540,	// (0x000879f4) main_clock2_pane_t1

0x9560,	// (0x00087a14) main_clock2_pane_t2_ParamLimits

0x9560,	// (0x00087a14) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0008dc75) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0008dc75) main_clock2_pane_t

0x95b9,	// (0x00087a6d) popup_clock_analogue_window_cp03_ParamLimits

0x95b9,	// (0x00087a6d) popup_clock_analogue_window_cp03

0x95d7,	// (0x00087a8b) popup_clock_digital_window_cp02_ParamLimits

0x95d7,	// (0x00087a8b) popup_clock_digital_window_cp02

0x9644,	// (0x00087af8) main_clock2_list_single_pane_ParamLimits

0x9644,	// (0x00087af8) main_clock2_list_single_pane

0xde85,	// (0x0008c339) list_highlight_pane_cp05

0x19f8,	// (0x0007feac) main_clock2_list_single_pane_t1

0x64cd,	// (0x00084981) popup_toolbar_window_cp04_ParamLimits

0x8c9b,	// (0x0008714f) camera2_autofocus_pane_g2_ParamLimits

0x8c9b,	// (0x0008714f) camera2_autofocus_pane_g2

0x8ca7,	// (0x0008715b) camera2_autofocus_pane_g3_ParamLimits

0x8ca7,	// (0x0008715b) camera2_autofocus_pane_g3

0x8cb3,	// (0x00087167) camera2_autofocus_pane_g4_ParamLimits

0x8cb3,	// (0x00087167) camera2_autofocus_pane_g4

0x8cbf,	// (0x00087173) camera2_autofocus_pane_g5_ParamLimits

0x8cbf,	// (0x00087173) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0008dbb9) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0008dbb9) camera2_autofocus_pane_g

0x8e1a,	// (0x000872ce) camera2_autofocus_pane_cp_g2

0x8e22,	// (0x000872d6) camera2_autofocus_pane_cp_g3

0x8e2a,	// (0x000872de) camera2_autofocus_pane_cp_g4

0x8e32,	// (0x000872e6) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0008dc1f) camera2_autofocus_pane_cp_g

0x93f7,	// (0x000878ab) popup_dialer_spcha_window

0x0205,	// (0x0007e6b9) bg_popup_sub_pane_cp07

0x1a06,	// (0x0007feba) list_spcha_pane

0x1a0e,	// (0x0007fec2) list_single_spcha_pane_ParamLimits

0x1a0e,	// (0x0007fec2) list_single_spcha_pane

0x0205,	// (0x0007e6b9) list_highlight_pane_cp06

0x1a1f,	// (0x0007fed3) list_single_spcha_pane_t1

0x0a86,	// (0x0007ef3a) popup_call2_audio_out_window_g4_ParamLimits

0x0a86,	// (0x0007ef3a) popup_call2_audio_out_window_g4

0x552c,	// (0x000839e0) main_imed2_pane

0x83c5,	// (0x00086879) popup_imed_adjust2_window

0x83d6,	// (0x0008688a) popup_imed_trans_window_ParamLimits

0x83d6,	// (0x0008688a) popup_imed_trans_window

0x13e1,	// (0x0007f895) popup_blid_sat_info2_window_t1

0x13ef,	// (0x0007f8a3) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0008db4e) popup_blid_sat_info2_window_t

0x96ee,	// (0x00087ba2) aid_size_cell_colour_35

0x9705,	// (0x00087bb9) aid_size_cell_colour_112

0x971c,	// (0x00087bd0) aid_size_cell_effect

0x0260,	// (0x0007e714) bg_tb_trans_pane_cp02

0xf0a3,	// (0x0008d557) heading_imed_pane

0x9736,	// (0x00087bea) listscroll_imed_pane

0x1a2d,	// (0x0007fee1) heading_imed_pane_g1

0x1a35,	// (0x0007fee9) heading_imed_pane_t1

0x1a43,	// (0x0007fef7) grid_imed_colour_35_pane_ParamLimits

0x1a43,	// (0x0007fef7) grid_imed_colour_35_pane

0x9742,	// (0x00087bf6) grid_imed_effect_pane

0x1a56,	// (0x0007ff0a) list_imed_aspect_pane

0x974e,	// (0x00087c02) scroll_pane_cp027_ParamLimits

0x974e,	// (0x00087c02) scroll_pane_cp027

0x975a,	// (0x00087c0e) cell_imed_effect_pane_ParamLimits

0x975a,	// (0x00087c0e) cell_imed_effect_pane

0x1a5e,	// (0x0007ff12) cell_imed_colour_pane_ParamLimits

0x1a5e,	// (0x0007ff12) cell_imed_colour_pane

0x1a98,	// (0x0007ff4c) cell_imed_colour_pane_g1_ParamLimits

0x1a98,	// (0x0007ff4c) cell_imed_colour_pane_g1

0x1aa9,	// (0x0007ff5d) hgihlgiht_grid_pane_cp016_ParamLimits

0x1aa9,	// (0x0007ff5d) hgihlgiht_grid_pane_cp016

0x9770,	// (0x00087c24) cell_imed_effect_pane_g1

0x9778,	// (0x00087c2c) grid_highlight_pane_cp017

0x1aba,	// (0x0007ff6e) list_imed_single_pane_ParamLimits

0x1aba,	// (0x0007ff6e) list_imed_single_pane

0x0205,	// (0x0007e6b9) list_highlight_pane_cp07

0x1acd,	// (0x0007ff81) list_imed_aspect_pane_comp1_t1

0x1089,	// (0x0007f53d) bg_tb_trans_pane_cp05

0x1aed,	// (0x0007ffa1) popup_imed_adjust2_window_g1

0x1b14,	// (0x0007ffc8) popup_imed_adjust2_window_t1

0x1b2c,	// (0x0007ffe0) slider_imed_adjust_pane

0x1b40,	// (0x0007fff4) slider_imed_adjust_pane_g1

0x1b50,	// (0x00080004) slider_imed_adjust_pane_g2

0x1b60,	// (0x00080014) slider_imed_adjust_pane_g3

0x1b71,	// (0x00080025) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0008dc92) slider_imed_adjust_pane_g

0x9781,	// (0x00087c35) aid_size_cell_clipart2

0x978d,	// (0x00087c41) grid_imed_clipart_pane

0x1b82,	// (0x00080036) scroll_pane_cp031

0x9797,	// (0x00087c4b) cell_imed_clipart_pane_ParamLimits

0x9797,	// (0x00087c4b) cell_imed_clipart_pane

0x97ae,	// (0x00087c62) cell_imed_clipart_pane_g1

0x0205,	// (0x0007e6b9) grid_highlight_pane_cp014

0x9526,	// (0x000879da) main_clock2_pane_g1_ParamLimits

0x9526,	// (0x000879da) main_clock2_pane_g1

0x95ef,	// (0x00087aa3) aid_call2_pane_cp10

0x9601,	// (0x00087ab5) aid_call_pane_cp10

0xe756,	// (0x0008cc0a) popup_clock_analogue_window_cp10_g1

0xe756,	// (0x0008cc0a) popup_clock_analogue_window_cp10_g2

0x9613,	// (0x00087ac7) popup_clock_analogue_window_cp10_g3

0x9613,	// (0x00087ac7) popup_clock_analogue_window_cp10_g4

0xe756,	// (0x0008cc0a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0008dc80) popup_clock_analogue_window_cp10_g

0x9625,	// (0x00087ad9) popup_clock_analogue_window_cp10_t1

0x9656,	// (0x00087b0a) clock_digital_number_pane_cp10_ParamLimits

0x9656,	// (0x00087b0a) clock_digital_number_pane_cp10

0x966e,	// (0x00087b22) clock_digital_number_pane_cp11_ParamLimits

0x966e,	// (0x00087b22) clock_digital_number_pane_cp11

0x9686,	// (0x00087b3a) clock_digital_number_pane_cp12_ParamLimits

0x9686,	// (0x00087b3a) clock_digital_number_pane_cp12

0x969e,	// (0x00087b52) clock_digital_number_pane_cp13_ParamLimits

0x969e,	// (0x00087b52) clock_digital_number_pane_cp13

0x96b6,	// (0x00087b6a) clock_digital_separator_pane_cp10_ParamLimits

0x96b6,	// (0x00087b6a) clock_digital_separator_pane_cp10

0x96ce,	// (0x00087b82) popup_clock_digital_window_cp02_t1_ParamLimits

0x96ce,	// (0x00087b82) popup_clock_digital_window_cp02_t1

0xdbdd,	// (0x0008c091) clock_digital_number_pane_cp10_g1

0xdbdd,	// (0x0008c091) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0008dc9b) clock_digital_number_pane_cp10_g

0xdbdd,	// (0x0008c091) clock_digital_separator_pane_cp10_g1

0xdbdd,	// (0x0008c091) clock_digital_separator_pane_g2_cp10

0xe883,	// (0x0008cd37) navi_pane_vded_g4

0xe88c,	// (0x0008cd40) navi_pane_vded_g5

0xe895,	// (0x0008cd49) navi_pane_vded_t1

0x552c,	// (0x000839e0) main_vded_pane

0x97b7,	// (0x00087c6b) main_vded_pane_g1

0x97bf,	// (0x00087c73) main_vded_pane_g2

0x97c7,	// (0x00087c7b) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0008dca0) main_vded_pane_g

0x97cf,	// (0x00087c83) main_vded_pane_t1

0x97dd,	// (0x00087c91) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0008dca7) main_vded_pane_t

0x97eb,	// (0x00087c9f) vded_slider_pane

0x97f3,	// (0x00087ca7) vded_video_pane

0x1b8a,	// (0x0008003e) vded_video_pane_g1

0x97fb,	// (0x00087caf) vded_video_pane_g2

0x159d,	// (0x0007fa51) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0008dcac) vded_video_pane_g

0x1b94,	// (0x00080048) vded_slider_pane_g1

0x12b4,	// (0x0007f768) vded_slider_pane_g2

0x1b9d,	// (0x00080051) vded_slider_pane_g3

0x1ba6,	// (0x0008005a) vded_slider_pane_g4

0x1baf,	// (0x00080063) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0008dcb3) vded_slider_pane_g

0x9306,	// (0x000877ba) mup3_rocker_pane_ParamLimits

0x9306,	// (0x000877ba) mup3_rocker_pane

0x9804,	// (0x00087cb8) mup3_control_keys_pane_g1

0x980c,	// (0x00087cc0) mup3_control_keys_pane_g2

0x9814,	// (0x00087cc8) mup3_control_keys_pane_g3

0x981c,	// (0x00087cd0) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0008dcbe) mup3_control_keys_pane_g

0x54e4,	// (0x00083998) popup_toolbar2_fixed_window_cp01_ParamLimits

0x54e4,	// (0x00083998) popup_toolbar2_fixed_window_cp01

0x931e,	// (0x000877d2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x931e,	// (0x000877d2) popup_toolbar2_fixed_window_cp02

0xf003,	// (0x0008d4b7) popup_call2_audio_second_window_t4_ParamLimits

0xf003,	// (0x0008d4b7) popup_call2_audio_second_window_t4

0x08f3,	// (0x0007eda7) popup_call2_audio_first_window_t6_ParamLimits

0x08f3,	// (0x0007eda7) popup_call2_audio_first_window_t6

0x0b89,	// (0x0007f03d) popup_call2_audio_out_window_t6_ParamLimits

0x0b89,	// (0x0007f03d) popup_call2_audio_out_window_t6

0x552c,	// (0x000839e0) main_vitu_pane

0x982c,	// (0x00087ce0) aid_size_cell_itu_ParamLimits

0x982c,	// (0x00087ce0) aid_size_cell_itu

0x39a1,	// (0x00081e55) bg_popup_window_pane_cp08_ParamLimits

0x39a1,	// (0x00081e55) bg_popup_window_pane_cp08

0x983a,	// (0x00087cee) field_vitu_entry_pane_ParamLimits

0x983a,	// (0x00087cee) field_vitu_entry_pane

0x9847,	// (0x00087cfb) grid_vitu_function_pane_ParamLimits

0x9847,	// (0x00087cfb) grid_vitu_function_pane

0x9853,	// (0x00087d07) grid_vitu_itu_pane_ParamLimits

0x9853,	// (0x00087d07) grid_vitu_itu_pane

0x985f,	// (0x00087d13) cell_vitu_itu_pane_ParamLimits

0x985f,	// (0x00087d13) cell_vitu_itu_pane

0x9874,	// (0x00087d28) cell_vitu_function_pane_ParamLimits

0x9874,	// (0x00087d28) cell_vitu_function_pane

0x0260,	// (0x0007e714) bg_popup_sub_pane_cp08_ParamLimits

0x0260,	// (0x0007e714) bg_popup_sub_pane_cp08

0x9886,	// (0x00087d3a) field_vitu_entry_pane_t1_ParamLimits

0x9886,	// (0x00087d3a) field_vitu_entry_pane_t1

0x1bd0,	// (0x00080084) field_vitu_entry_pane_t2_ParamLimits

0x1bd0,	// (0x00080084) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0008dccc) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0008dccc) field_vitu_entry_pane_t

0x1bed,	// (0x000800a1) bg_button_pane_cp05_ParamLimits

0x1bed,	// (0x000800a1) bg_button_pane_cp05

0x989f,	// (0x00087d53) cell_vitu_itu_pane_g1

0x98b7,	// (0x00087d6b) cell_vitu_itu_pane_t1_ParamLimits

0x98b7,	// (0x00087d6b) cell_vitu_itu_pane_t1

0x98c9,	// (0x00087d7d) cell_vitu_itu_pane_t2_ParamLimits

0x98c9,	// (0x00087d7d) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0008dcd1) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0008dcd1) cell_vitu_itu_pane_t

0x1bfb,	// (0x000800af) bg_button_pane_cp07

0x98fe,	// (0x00087db2) cell_vitu_function_pane_g1

0x576b,	// (0x00083c1f) main_calc_pane_g1

0x530a,	// (0x000837be) aid_visual_content_pane

0x552c,	// (0x000839e0) main_vradio_pane

0x9907,	// (0x00087dbb) main_vradio_pane_g1_ParamLimits

0x9907,	// (0x00087dbb) main_vradio_pane_g1

0x1c05,	// (0x000800b9) main_vradio_pane_g2_ParamLimits

0x1c05,	// (0x000800b9) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0008dcd8) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0008dcd8) main_vradio_pane_g

0x9915,	// (0x00087dc9) main_vradio_pane_t1_ParamLimits

0x9915,	// (0x00087dc9) main_vradio_pane_t1

0x9927,	// (0x00087ddb) main_vradio_pane_t2_ParamLimits

0x9927,	// (0x00087ddb) main_vradio_pane_t2

0x1c12,	// (0x000800c6) main_vradio_pane_t3_ParamLimits

0x1c12,	// (0x000800c6) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0008dcdd) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0008dcdd) main_vradio_pane_t

0x9939,	// (0x00087ded) vradio_rocker_control_pane_ParamLimits

0x9939,	// (0x00087ded) vradio_rocker_control_pane

0x9945,	// (0x00087df9) vradio_station_info_pane_ParamLimits

0x9945,	// (0x00087df9) vradio_station_info_pane

0x1c24,	// (0x000800d8) vradio_frequency_info_pane_ParamLimits

0x1c24,	// (0x000800d8) vradio_frequency_info_pane

0x159d,	// (0x0007fa51) vradio_station_info_pane_g1

0x1c33,	// (0x000800e7) vradio_station_info_pane_t1_ParamLimits

0x1c33,	// (0x000800e7) vradio_station_info_pane_t1

0x1c55,	// (0x00080109) vradio_station_info_pane_t2_ParamLimits

0x1c55,	// (0x00080109) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0008dce4) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0008dce4) vradio_station_info_pane_t

0x1c67,	// (0x0008011b) vradio_tuning_pane

0x1c6f,	// (0x00080123) vradio_rocker_control_pane_g1

0x1c77,	// (0x0008012b) vradio_rocker_control_pane_g2

0x1c7f,	// (0x00080133) vradio_rocker_control_pane_g3

0x1c87,	// (0x0008013b) vradio_rocker_control_pane_g4

0x1c8f,	// (0x00080143) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0008dce9) vradio_rocker_control_pane_g

0x9952,	// (0x00087e06) vradio_frequency_info_pane_g1

0x1c97,	// (0x0008014b) vradio_frequency_info_pane_t1_ParamLimits

0x1c97,	// (0x0008014b) vradio_frequency_info_pane_t1

0x995a,	// (0x00087e0e) vradio_tuning_pane_g1

0x9963,	// (0x00087e17) vradio_tuning_pane_t1

0x5349,	// (0x000837fd) area_side_right_pane_ParamLimits

0x5349,	// (0x000837fd) area_side_right_pane

0x1044,	// (0x0007f4f8) status_small_pane_g1

0x104c,	// (0x0007f500) status_small_pane_g2

0x1055,	// (0x0007f509) status_small_pane_g3

0x105e,	// (0x0007f512) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0008daa4) status_small_pane_g

0x1067,	// (0x0007f51b) status_small_pane_t1

0x552c,	// (0x000839e0) main_video3_pane

0x1cab,	// (0x0008015f) cams_zoom_vslider_pane

0x1cb3,	// (0x00080167) image3_wide_pane_ParamLimits

0x1cb3,	// (0x00080167) image3_wide_pane

0x1ccd,	// (0x00080181) image3_wide_small_pane

0x1cd7,	// (0x0008018b) main_video3_pane_g1_ParamLimits

0x1cd7,	// (0x0008018b) main_video3_pane_g1

0x1cf3,	// (0x000801a7) main_video3_pane_g2_ParamLimits

0x1cf3,	// (0x000801a7) main_video3_pane_g2

0x0001,

0xf840,	// (0x0008dcf4) main_video3_pane_g_ParamLimits

0xf840,	// (0x0008dcf4) main_video3_pane_g

0x1d0f,	// (0x000801c3) main_video3_pane_t1_ParamLimits

0x1d0f,	// (0x000801c3) main_video3_pane_t1

0x1d3a,	// (0x000801ee) main_video3_pane_t2_ParamLimits

0x1d3a,	// (0x000801ee) main_video3_pane_t2

0x1d65,	// (0x00080219) main_video3_pane_t3_ParamLimits

0x1d65,	// (0x00080219) main_video3_pane_t3

0x0002,

0xf845,	// (0x0008dcf9) main_video3_pane_t_ParamLimits

0xf845,	// (0x0008dcf9) main_video3_pane_t

0x1d90,	// (0x00080244) cams_zoom_vslider_pane_g1

0x1d99,	// (0x0008024d) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0008dd00) cams_zoom_vslider_pane_g

0x1da1,	// (0x00080255) small_slider_vertical_pane

0x159d,	// (0x0007fa51) small_slider_vertical_pane_g1

0x159d,	// (0x0007fa51) small_slider_vertical_pane_g2

0x1da9,	// (0x0008025d) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0008dd05) small_slider_vertical_pane_g

0x552c,	// (0x000839e0) main_hwr_training_pane

0x1db2,	// (0x00080266) hwr_training_instruct_pane_ParamLimits

0x1db2,	// (0x00080266) hwr_training_instruct_pane

0x9972,	// (0x00087e26) hwr_training_navi_pane_ParamLimits

0x9972,	// (0x00087e26) hwr_training_navi_pane

0x9986,	// (0x00087e3a) hwr_training_write_pane_ParamLimits

0x9986,	// (0x00087e3a) hwr_training_write_pane

0x0205,	// (0x0007e6b9) bg_frame_shadow_pane

0x1de1,	// (0x00080295) hwr_training_write_pane_g1

0x1de9,	// (0x0008029d) hwr_training_write_pane_g2

0x1df1,	// (0x000802a5) hwr_training_write_pane_g3

0x1df9,	// (0x000802ad) hwr_training_write_pane_g4

0x1e01,	// (0x000802b5) hwr_training_write_pane_g5

0x1e09,	// (0x000802bd) hwr_training_write_pane_g6

0x1e11,	// (0x000802c5) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0008dd0c) hwr_training_write_pane_g

0x99b4,	// (0x00087e68) hwr_training_navi_pane_g1_ParamLimits

0x99b4,	// (0x00087e68) hwr_training_navi_pane_g1

0x99c6,	// (0x00087e7a) hwr_training_navi_pane_g2_ParamLimits

0x99c6,	// (0x00087e7a) hwr_training_navi_pane_g2

0x99d8,	// (0x00087e8c) hwr_training_navi_pane_g3_ParamLimits

0x99d8,	// (0x00087e8c) hwr_training_navi_pane_g3

0x99e8,	// (0x00087e9c) hwr_training_navi_pane_g4_ParamLimits

0x99e8,	// (0x00087e9c) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0008dd1b) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0008dd1b) hwr_training_navi_pane_g

0x9a02,	// (0x00087eb6) hwr_training_navi_pane_t1

0x9a10,	// (0x00087ec4) list_single_hwr_training_instruct_pane_ParamLimits

0x9a10,	// (0x00087ec4) list_single_hwr_training_instruct_pane

0x1e19,	// (0x000802cd) list_single_hwr_training_instruct_pane_t1

0x14dd,	// (0x0007f991) bg_frame_shadow_pane_g1

0x1e28,	// (0x000802dc) bg_frame_shadow_pane_g2

0x1e30,	// (0x000802e4) bg_frame_shadow_pane_g3

0x1e38,	// (0x000802ec) bg_frame_shadow_pane_g4

0x1e40,	// (0x000802f4) bg_frame_shadow_pane_g5

0x1e48,	// (0x000802fc) bg_frame_shadow_pane_g6

0x1e50,	// (0x00080304) bg_frame_shadow_pane_g7

0xdd79,	// (0x0008c22d) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0008dd26) bg_frame_shadow_pane_g

0x552c,	// (0x000839e0) main_video_tele_dialer_pane

0x9a28,	// (0x00087edc) aid_size_cell_video_keypad_ParamLimits

0x9a28,	// (0x00087edc) aid_size_cell_video_keypad

0x9a38,	// (0x00087eec) grid_video_dialer_keypad_pane_ParamLimits

0x9a38,	// (0x00087eec) grid_video_dialer_keypad_pane

0x9a68,	// (0x00087f1c) video_down_pane_cp_ParamLimits

0x9a68,	// (0x00087f1c) video_down_pane_cp

0x9a90,	// (0x00087f44) cell_video_dialer_keypad_pane_ParamLimits

0x9a90,	// (0x00087f44) cell_video_dialer_keypad_pane

0x1e58,	// (0x0008030c) bg_button_pane_cp08_ParamLimits

0x1e58,	// (0x0008030c) bg_button_pane_cp08

0x9aa5,	// (0x00087f59) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9aa5,	// (0x00087f59) cell_video_dialer_keypad_pane_g1

0x92fa,	// (0x000877ae) mup3_rocker2_pane_ParamLimits

0x92fa,	// (0x000877ae) mup3_rocker2_pane

0x159d,	// (0x0007fa51) mup3_rocker2_pane_g1

0x8347,	// (0x000867fb) main_dialer2_pane

0x552c,	// (0x000839e0) main_mp4_pane

0x9aec,	// (0x00087fa0) main_mp4_pane_g1_ParamLimits

0x9aec,	// (0x00087fa0) main_mp4_pane_g1

0x9afa,	// (0x00087fae) main_mp4_pane_g2_ParamLimits

0x9afa,	// (0x00087fae) main_mp4_pane_g2

0x9b08,	// (0x00087fbc) main_mp4_pane_g3_ParamLimits

0x9b08,	// (0x00087fbc) main_mp4_pane_g3

0x9b3d,	// (0x00087ff1) main_mp4_pane_g4_ParamLimits

0x9b3d,	// (0x00087ff1) main_mp4_pane_g4

0x9b6b,	// (0x0008801f) main_mp4_pane_g5_ParamLimits

0x9b6b,	// (0x0008801f) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0008dd46) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0008dd46) main_mp4_pane_g

0x9bdf,	// (0x00088093) main_mp4_pane_t1_ParamLimits

0x9bdf,	// (0x00088093) main_mp4_pane_t1

0x9c37,	// (0x000880eb) main_mp4_pane_t2_ParamLimits

0x9c37,	// (0x000880eb) main_mp4_pane_t2

0x1e64,	// (0x00080318) main_mp4_pane_t3_ParamLimits

0x1e64,	// (0x00080318) main_mp4_pane_t3

0x9c89,	// (0x0008813d) main_mp4_pane_t4_ParamLimits

0x9c89,	// (0x0008813d) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0008dd57) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0008dd57) main_mp4_pane_t

0x9cc9,	// (0x0008817d) mp4_progress_pane_ParamLimits

0x9cc9,	// (0x0008817d) mp4_progress_pane

0x9d0d,	// (0x000881c1) mp4_rocker_pane_ParamLimits

0x9d0d,	// (0x000881c1) mp4_rocker_pane

0x1e92,	// (0x00080346) mp4_progress_pane_t1

0x1ea9,	// (0x0008035d) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0008dd60) mp4_progress_pane_t

0x1ec0,	// (0x00080374) mup_progress_pane_cp04

0x2298,	// (0x0008074c) mp4_rocker_pane_g1

0x9d2b,	// (0x000881df) aid_cell_size_keypad2_ParamLimits

0x9d2b,	// (0x000881df) aid_cell_size_keypad2

0x9d3b,	// (0x000881ef) dialer2_ne_pane_ParamLimits

0x9d3b,	// (0x000881ef) dialer2_ne_pane

0x9d47,	// (0x000881fb) grid_dialer2_keypad_pane_ParamLimits

0x9d47,	// (0x000881fb) grid_dialer2_keypad_pane

0x22fb,	// (0x000807af) bg_popup_call_pane_cp07_ParamLimits

0x22fb,	// (0x000807af) bg_popup_call_pane_cp07

0x9d53,	// (0x00088207) dialer2_ne_pane_t1_ParamLimits

0x9d53,	// (0x00088207) dialer2_ne_pane_t1

0x9d78,	// (0x0008822c) cell_dialer2_keypad_pane_ParamLimits

0x9d78,	// (0x0008822c) cell_dialer2_keypad_pane

0x1ede,	// (0x00080392) bg_button_pane_pane_cp04_ParamLimits

0x1ede,	// (0x00080392) bg_button_pane_pane_cp04

0x9d8d,	// (0x00088241) cell_dialer2_keypad_pane_g1_ParamLimits

0x9d8d,	// (0x00088241) cell_dialer2_keypad_pane_g1

0x63a9,	// (0x0008485d) aid_placing_vt_set_content_ParamLimits

0x63a9,	// (0x0008485d) aid_placing_vt_set_content

0x63cf,	// (0x00084883) aid_placing_vt_set_title_ParamLimits

0x63cf,	// (0x00084883) aid_placing_vt_set_title

0x552c,	// (0x000839e0) main_image3_pane

0x9e01,	// (0x000882b5) area_side_right_pane_cp01_ParamLimits

0x9e01,	// (0x000882b5) area_side_right_pane_cp01

0x9e2e,	// (0x000882e2) main_image3_pane_g1_ParamLimits

0x9e2e,	// (0x000882e2) main_image3_pane_g1

0x9e3c,	// (0x000882f0) main_image3_pane_g2_ParamLimits

0x9e3c,	// (0x000882f0) main_image3_pane_g2

0x9e53,	// (0x00088307) main_image3_pane_g3_ParamLimits

0x9e53,	// (0x00088307) main_image3_pane_g3

0x9e6a,	// (0x0008831e) main_image3_pane_g4_ParamLimits

0x9e6a,	// (0x0008831e) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0008dd6f) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0008dd6f) main_image3_pane_g

0x9e81,	// (0x00088335) main_image3_pane_t1_ParamLimits

0x9e81,	// (0x00088335) main_image3_pane_t1

0x9ea6,	// (0x0008835a) main_image3_pane_t2_ParamLimits

0x9ea6,	// (0x0008835a) main_image3_pane_t2

0x9ec5,	// (0x00088379) main_image3_pane_t3_ParamLimits

0x9ec5,	// (0x00088379) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0008dd78) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0008dd78) main_image3_pane_t

0x39a1,	// (0x00081e55) grid_sctrl_middle_pane_cp01_ParamLimits

0x39a1,	// (0x00081e55) grid_sctrl_middle_pane_cp01

0x9f20,	// (0x000883d4) cell_sctrl_middle_pane_cp01_ParamLimits

0x9f20,	// (0x000883d4) cell_sctrl_middle_pane_cp01

0x9f31,	// (0x000883e5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9f31,	// (0x000883e5) cell_sctrl_middle_pane_cp01_g1

0x552c,	// (0x000839e0) main_call4_pane

0x9f3e,	// (0x000883f2) aid_size_button_call4_ParamLimits

0x9f3e,	// (0x000883f2) aid_size_button_call4

0x9f68,	// (0x0008841c) call4_windows_pane_ParamLimits

0x9f68,	// (0x0008841c) call4_windows_pane

0x9f7c,	// (0x00088430) grid_call4_button_pane_ParamLimits

0x9f7c,	// (0x00088430) grid_call4_button_pane

0x1f02,	// (0x000803b6) call4_windows_conf_pane

0x9f9e,	// (0x00088452) popup_call4_audio_first_window_ParamLimits

0x9f9e,	// (0x00088452) popup_call4_audio_first_window

0x9fbe,	// (0x00088472) popup_call4_audio_second_window_ParamLimits

0x9fbe,	// (0x00088472) popup_call4_audio_second_window

0x1f35,	// (0x000803e9) popup_call4_audio_wait_window_ParamLimits

0x1f35,	// (0x000803e9) popup_call4_audio_wait_window

0x9fd0,	// (0x00088484) cell_call4_button_pane_ParamLimits

0x9fd0,	// (0x00088484) cell_call4_button_pane

0xdd23,	// (0x0008c1d7) bg_button_pane_cp09_ParamLimits

0xdd23,	// (0x0008c1d7) bg_button_pane_cp09

0x9ff3,	// (0x000884a7) cell_call4_button_pane_g1_ParamLimits

0x9ff3,	// (0x000884a7) cell_call4_button_pane_g1

0xa000,	// (0x000884b4) cell_call4_button_pane_t1_ParamLimits

0xa000,	// (0x000884b4) cell_call4_button_pane_t1

0x1f49,	// (0x000803fd) popup_call4_audio_conf_window_ParamLimits

0x1f49,	// (0x000803fd) popup_call4_audio_conf_window

0x932b,	// (0x000877df) mup3_progress_pane_t1_ParamLimits

0x9349,	// (0x000877fd) mup3_progress_pane_t2_ParamLimits

0x18bb,	// (0x0007fd6f) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0008dc48) mup3_progress_pane_t_ParamLimits

0x18d8,	// (0x0007fd8c) mup_progress_pane_cp03_ParamLimits

0x9824,	// (0x00087cd8) mup3_control_keys_pane_g4_copy1

0x9cf7,	// (0x000881ab) mp4_rocker2_pane_ParamLimits

0x9cf7,	// (0x000881ab) mp4_rocker2_pane

0x1f65,	// (0x00080419) mp4_rocker2_pane_g1

0x1f5d,	// (0x00080411) mp4_rocker2_pane_g2

0xa044,	// (0x000884f8) mp4_rocker2_pane_g3

0xa04c,	// (0x00088500) mp4_rocker2_pane_g4

0xa054,	// (0x00088508) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0008dd81) mp4_rocker2_pane_g

0x552c,	// (0x000839e0) main_camera4_pane

0x552c,	// (0x000839e0) main_video4_pane

0x9a44,	// (0x00087ef8) main_video_tele_dialer_pane_t1_ParamLimits

0x9a44,	// (0x00087ef8) main_video_tele_dialer_pane_t1

0x9a56,	// (0x00087f0a) main_video_tele_dialer_pane_t2_ParamLimits

0x9a56,	// (0x00087f0a) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0008dd37) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0008dd37) main_video_tele_dialer_pane_t

0xa072,	// (0x00088526) cam4_autofocus_pane_ParamLimits

0xa072,	// (0x00088526) cam4_autofocus_pane

0xa088,	// (0x0008853c) cam4_image_uncrop_pane_ParamLimits

0xa088,	// (0x0008853c) cam4_image_uncrop_pane

0xa09d,	// (0x00088551) cam4_indicators_pane_ParamLimits

0xa09d,	// (0x00088551) cam4_indicators_pane

0xa0b7,	// (0x0008856b) main_camera4_pane_g1_ParamLimits

0xa0b7,	// (0x0008856b) main_camera4_pane_g1

0xa0c3,	// (0x00088577) main_camera4_pane_g2_ParamLimits

0xa0c3,	// (0x00088577) main_camera4_pane_g2

0xa0c3,	// (0x00088577) main_camera4_pane_g3_ParamLimits

0xa0c3,	// (0x00088577) main_camera4_pane_g3

0xa0cf,	// (0x00088583) main_camera4_pane_g4_ParamLimits

0xa0cf,	// (0x00088583) main_camera4_pane_g4

0xa0db,	// (0x0008858f) main_camera4_pane_g5_ParamLimits

0xa0db,	// (0x0008858f) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0008dd8c) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0008dd8c) main_camera4_pane_g

0xa0f5,	// (0x000885a9) main_camera4_pane_t1_ParamLimits

0xa0f5,	// (0x000885a9) main_camera4_pane_t1

0xa13d,	// (0x000885f1) bg_tb_trans_pane_cp06

0xa153,	// (0x00088607) cam4_indicators_pane_g1

0xa163,	// (0x00088617) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0008dda7) cam4_indicators_pane_g

0xa183,	// (0x00088637) cam4_indicators_pane_t1

0xa1ab,	// (0x0008865f) main_video4_pane_g1_ParamLimits

0xa1ab,	// (0x0008865f) main_video4_pane_g1

0xa0c3,	// (0x00088577) main_video4_pane_g2_ParamLimits

0xa0c3,	// (0x00088577) main_video4_pane_g2

0xa0c3,	// (0x00088577) main_video4_pane_g3_ParamLimits

0xa0c3,	// (0x00088577) main_video4_pane_g3

0xa0cf,	// (0x00088583) main_video4_pane_g4_ParamLimits

0xa0cf,	// (0x00088583) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0008ddae) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0008ddae) main_video4_pane_g

0xa1bf,	// (0x00088673) vid4_indicators_pane_ParamLimits

0xa1bf,	// (0x00088673) vid4_indicators_pane

0xa1dd,	// (0x00088691) video4_image_uncrop_cif_pane_ParamLimits

0xa1dd,	// (0x00088691) video4_image_uncrop_cif_pane

0xa1ea,	// (0x0008869e) video4_image_uncrop_nhd_pane_ParamLimits

0xa1ea,	// (0x0008869e) video4_image_uncrop_nhd_pane

0xa088,	// (0x0008853c) video4_image_uncrop_vga_pane_ParamLimits

0xa088,	// (0x0008853c) video4_image_uncrop_vga_pane

0x8339,	// (0x000867ed) bg_tb_trans_pane_cp07

0xa153,	// (0x00088607) vid4_indicators_pane_g1

0xa1f7,	// (0x000886ab) vid4_indicators_pane_g2

0xa207,	// (0x000886bb) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0008ddb9) vid4_indicators_pane_g

0xa234,	// (0x000886e8) vid4_indicators_pane_t1

0xa24e,	// (0x00088702) cam4_autofocus_pane_g1

0xa256,	// (0x0008870a) cam4_autofocus_pane_g2

0xa25e,	// (0x00088712) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0008ddc4) cam4_autofocus_pane_g

0xa266,	// (0x0008871a) cam4_autofocus_pane_g3_copy1

0x9a74,	// (0x00087f28) video_down_pane_cp_t1

0x9a82,	// (0x00087f36) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0008dd3c) video_down_pane_cp_t

0x5516,	// (0x000839ca) popup_vitu2_window_ParamLimits

0x5516,	// (0x000839ca) popup_vitu2_window

0xa26e,	// (0x00088722) aid_size_cell2_itu2_ParamLimits

0xa26e,	// (0x00088722) aid_size_cell2_itu2

0xa290,	// (0x00088744) aid_size_cell_itu2_ParamLimits

0xa290,	// (0x00088744) aid_size_cell_itu2

0xa2ce,	// (0x00088782) bg_popup_window_pane_cp09_ParamLimits

0xa2ce,	// (0x00088782) bg_popup_window_pane_cp09

0xa2dc,	// (0x00088790) field_vitu2_entry_pane_ParamLimits

0xa2dc,	// (0x00088790) field_vitu2_entry_pane

0xa2f0,	// (0x000887a4) grid_vitu2_function_pane_ParamLimits

0xa2f0,	// (0x000887a4) grid_vitu2_function_pane

0xa31e,	// (0x000887d2) grid_vitu2_itu_pane_ParamLimits

0xa31e,	// (0x000887d2) grid_vitu2_itu_pane

0xa376,	// (0x0008882a) cell_vitu2_itu_pane_ParamLimits

0xa376,	// (0x0008882a) cell_vitu2_itu_pane

0xa38e,	// (0x00088842) cell_vitu2_function_pane_ParamLimits

0xa38e,	// (0x00088842) cell_vitu2_function_pane

0x1f7f,	// (0x00080433) bg_popup_call_pane_cp08_ParamLimits

0x1f7f,	// (0x00080433) bg_popup_call_pane_cp08

0x1f96,	// (0x0008044a) field_vitu2_entry_pane_g1

0x1fa2,	// (0x00080456) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0008ddcb) field_vitu2_entry_pane_g

0xa3cd,	// (0x00088881) field_vitu2_entry_pane_t1_ParamLimits

0xa3cd,	// (0x00088881) field_vitu2_entry_pane_t1

0x1fbc,	// (0x00080470) field_vitu2_entry_pane_t2_ParamLimits

0x1fbc,	// (0x00080470) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0008ddd2) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0008ddd2) field_vitu2_entry_pane_t

0xa3fb,	// (0x000888af) bg_button_pane_cp010_ParamLimits

0xa3fb,	// (0x000888af) bg_button_pane_cp010

0xa409,	// (0x000888bd) cell_vitu2_itu_pane_g1

0xa429,	// (0x000888dd) cell_vitu2_itu_pane_t1_ParamLimits

0xa429,	// (0x000888dd) cell_vitu2_itu_pane_t1

0x51f6,	// (0x000836aa) cell_vitu2_itu_pane_t2_ParamLimits

0x51f6,	// (0x000836aa) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0008dddc) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0008dddc) cell_vitu2_itu_pane_t

0x8339,	// (0x000867ed) bg_button_pane_cp011

0xa475,	// (0x00088929) cell_vitu2_function_pane_g1

0x552c,	// (0x000839e0) main_myfav_hc_pane

0x9f05,	// (0x000883b9) popup_image3_note_pane_ParamLimits

0x9f05,	// (0x000883b9) popup_image3_note_pane

0x9f11,	// (0x000883c5) popup_image3_tool_bar_pane_ParamLimits

0x9f11,	// (0x000883c5) popup_image3_tool_bar_pane

0x526c,	// (0x00083720) cell_vitu2_itu_pane_t3_ParamLimits

0x526c,	// (0x00083720) cell_vitu2_itu_pane_t3

0x0205,	// (0x0007e6b9) bg_popup_trans_pane

0x1fe1,	// (0x00080495) grid_image3_tool_bar_pane

0x1feb,	// (0x0008049f) bg_popup_trans_pane_g1

0xe136,	// (0x0008c5ea) bg_popup_trans_pane_g2

0x1ff3,	// (0x000804a7) bg_popup_trans_pane_g3

0x1ffb,	// (0x000804af) bg_popup_trans_pane_g4

0x2003,	// (0x000804b7) bg_popup_trans_pane_g5

0x200b,	// (0x000804bf) bg_popup_trans_pane_g6

0x2013,	// (0x000804c7) bg_popup_trans_pane_g7

0x201b,	// (0x000804cf) bg_popup_trans_pane_g8

0xe116,	// (0x0008c5ca) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0008dde3) bg_popup_trans_pane_g

0x2023,	// (0x000804d7) cell_image3_tool_bar_pane_ParamLimits

0x2023,	// (0x000804d7) cell_image3_tool_bar_pane

0x159d,	// (0x0007fa51) cell_image3_tool_bar_pane_g1

0x0205,	// (0x0007e6b9) bg_popup_trans_pane_cp1

0x2037,	// (0x000804eb) popup_image3_note_pane_t1

0x2045,	// (0x000804f9) popup_image3_note_pane_t2

0x2053,	// (0x00080507) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0008ddf6) popup_image3_note_pane_t

0x3f69,	// (0x0008241d) popup_image3_note_pane_t3_copy1

0xa489,	// (0x0008893d) bg_myfav_hc_instruction_pane_ParamLimits

0xa489,	// (0x0008893d) bg_myfav_hc_instruction_pane

0xa49b,	// (0x0008894f) cell_myfav_contact_pane_ParamLimits

0xa49b,	// (0x0008894f) cell_myfav_contact_pane

0xa4b5,	// (0x00088969) cell_myfav_contact_pane_cp1_ParamLimits

0xa4b5,	// (0x00088969) cell_myfav_contact_pane_cp1

0xa4cb,	// (0x0008897f) cell_myfav_contact_pane_cp2_ParamLimits

0xa4cb,	// (0x0008897f) cell_myfav_contact_pane_cp2

0xa4e1,	// (0x00088995) cell_myfav_contact_pane_cp3_ParamLimits

0xa4e1,	// (0x00088995) cell_myfav_contact_pane_cp3

0xa4f6,	// (0x000889aa) cell_myfav_contact_pane_cp4_ParamLimits

0xa4f6,	// (0x000889aa) cell_myfav_contact_pane_cp4

0xa50a,	// (0x000889be) cell_myfav_contact_pane_cp5_ParamLimits

0xa50a,	// (0x000889be) cell_myfav_contact_pane_cp5

0xa51e,	// (0x000889d2) cell_myfav_contact_pane_cp6_ParamLimits

0xa51e,	// (0x000889d2) cell_myfav_contact_pane_cp6

0xa532,	// (0x000889e6) cell_myfav_contact_pane_cp7_ParamLimits

0xa532,	// (0x000889e6) cell_myfav_contact_pane_cp7

0x3f77,	// (0x0008242b) listscroll_gen_pane_cp05

0xa54a,	// (0x000889fe) main_myfav_hc_pane_g1_ParamLimits

0xa54a,	// (0x000889fe) main_myfav_hc_pane_g1

0xa560,	// (0x00088a14) main_myfav_hc_pane_g2_ParamLimits

0xa560,	// (0x00088a14) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0008ddfd) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0008ddfd) main_myfav_hc_pane_g

0xa58a,	// (0x00088a3e) main_myfav_hc_pane_t1_ParamLimits

0xa58a,	// (0x00088a3e) main_myfav_hc_pane_t1

0x3f80,	// (0x00082434) main_myfav_hc_pane_t2_ParamLimits

0x3f80,	// (0x00082434) main_myfav_hc_pane_t2

0x3f92,	// (0x00082446) main_myfav_hc_pane_t3_ParamLimits

0x3f92,	// (0x00082446) main_myfav_hc_pane_t3

0xa59f,	// (0x00088a53) main_myfav_hc_pane_t4_ParamLimits

0xa59f,	// (0x00088a53) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0008de04) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0008de04) main_myfav_hc_pane_t

0x159d,	// (0x0007fa51) bg_myfav_hc_instruction_pane_g1

0x3fa4,	// (0x00082458) cell_myfav_contact_pane_g1_ParamLimits

0x3fa4,	// (0x00082458) cell_myfav_contact_pane_g1

0x3fa4,	// (0x00082458) cell_myfav_contact_pane_g2_ParamLimits

0x3fa4,	// (0x00082458) cell_myfav_contact_pane_g2

0x3fb0,	// (0x00082464) cell_myfav_contact_pane_g3_ParamLimits

0x3fb0,	// (0x00082464) cell_myfav_contact_pane_g3

0x18a5,	// (0x0007fd59) cell_myfav_contact_pane_g4_ParamLimits

0x18a5,	// (0x0007fd59) cell_myfav_contact_pane_g4

0x3fbd,	// (0x00082471) cell_myfav_contact_pane_g5_ParamLimits

0x3fbd,	// (0x00082471) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0008de0f) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0008de0f) cell_myfav_contact_pane_g

0xa576,	// (0x00088a2a) main_myfav_hc_pane_g3_ParamLimits

0xa576,	// (0x00088a2a) main_myfav_hc_pane_g3

0x545a,	// (0x0008390e) popup_adpt_find_window

0xa5c3,	// (0x00088a77) afind_page_pane_ParamLimits

0xa5c3,	// (0x00088a77) afind_page_pane

0xa5d0,	// (0x00088a84) aid_size_cell_afind_ParamLimits

0xa5d0,	// (0x00088a84) aid_size_cell_afind

0xa5ea,	// (0x00088a9e) bg_popup_sub_pane_cp09_ParamLimits

0xa5ea,	// (0x00088a9e) bg_popup_sub_pane_cp09

0xa5f7,	// (0x00088aab) find_pane_cp01_ParamLimits

0xa5f7,	// (0x00088aab) find_pane_cp01

0x3fc9,	// (0x0008247d) grid_afind_control_pane_ParamLimits

0x3fc9,	// (0x0008247d) grid_afind_control_pane

0xa604,	// (0x00088ab8) grid_afind_pane_ParamLimits

0xa604,	// (0x00088ab8) grid_afind_pane

0xa61a,	// (0x00088ace) cell_afind_pane_ParamLimits

0xa61a,	// (0x00088ace) cell_afind_pane

0x159d,	// (0x0007fa51) afind_page_pane_g1

0xa650,	// (0x00088b04) afind_page_pane_g2

0xa659,	// (0x00088b0d) afind_page_pane_g3

0x0002,

0xf966,	// (0x0008de1a) afind_page_pane_g

0xa662,	// (0x00088b16) afind_page_pane_t1

0x3fdd,	// (0x00082491) cell_afind_grid_control_pane_ParamLimits

0x3fdd,	// (0x00082491) cell_afind_grid_control_pane

0x1ede,	// (0x00080392) bg_button_pane_cp69_ParamLimits

0x1ede,	// (0x00080392) bg_button_pane_cp69

0xa682,	// (0x00088b36) cell_afind_pane_g1_ParamLimits

0xa682,	// (0x00088b36) cell_afind_pane_g1

0xa68f,	// (0x00088b43) cell_afind_pane_t1_ParamLimits

0xa68f,	// (0x00088b43) cell_afind_pane_t1

0xdf22,	// (0x0008c3d6) bg_button_pane_cp72

0x3fec,	// (0x000824a0) cell_afind_grid_control_pane_g1

0x7f71,	// (0x00086425) aid_image_placing_area_ParamLimits

0x7f71,	// (0x00086425) aid_image_placing_area

0x1bb8,	// (0x0008006c) field_vitu_entry_pane_g1_ParamLimits

0x1bb8,	// (0x0008006c) field_vitu_entry_pane_g1

0x1bc4,	// (0x00080078) field_vitu_entry_pane_g2_ParamLimits

0x1bc4,	// (0x00080078) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0008dcc7) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0008dcc7) field_vitu_entry_pane_g

0x989f,	// (0x00087d53) cell_vitu_itu_pane_g1_ParamLimits

0x98e1,	// (0x00087d95) cell_vitu_itu_pane_t3_ParamLimits

0x98e1,	// (0x00087d95) cell_vitu_itu_pane_t3

0x1e92,	// (0x00080346) mp4_progress_pane_t1_ParamLimits

0x1ea9,	// (0x0008035d) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0008dd60) mp4_progress_pane_t_ParamLimits

0x1ec0,	// (0x00080374) mup_progress_pane_cp04_ParamLimits

0xa5b1,	// (0x00088a65) main_myfav_hc_pane_t5_ParamLimits

0xa5b1,	// (0x00088a65) main_myfav_hc_pane_t5

0x51ee,	// (0x000836a2) aid_zoom_text_primary

0x545a,	// (0x0008390e) popup_adpt_find_window_ParamLimits

0x8339,	// (0x000867ed) main_cam_set_pane

0xa0ab,	// (0x0008855f) cam4_zoom_pane_ParamLimits

0xa0ab,	// (0x0008855f) cam4_zoom_pane

0xa6a1,	// (0x00088b55) main_cam_set_pane_g1_ParamLimits

0xa6a1,	// (0x00088b55) main_cam_set_pane_g1

0xa6af,	// (0x00088b63) main_cam_set_pane_g2_ParamLimits

0xa6af,	// (0x00088b63) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0008de21) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0008de21) main_cam_set_pane_g

0xa6bb,	// (0x00088b6f) main_cam_set_pane_t1_ParamLimits

0xa6bb,	// (0x00088b6f) main_cam_set_pane_t1

0xa6cd,	// (0x00088b81) main_cset_listscroll_pane_ParamLimits

0xa6cd,	// (0x00088b81) main_cset_listscroll_pane

0xa6f6,	// (0x00088baa) main_cset_slider_pane_ParamLimits

0xa6f6,	// (0x00088baa) main_cset_slider_pane

0x3ffd,	// (0x000824b1) main_cset_list_pane_ParamLimits

0x3ffd,	// (0x000824b1) main_cset_list_pane

0x400d,	// (0x000824c1) scroll_pane_cp028

0xa715,	// (0x00088bc9) aid_area_touch_slider

0xa731,	// (0x00088be5) cset_slider_pane

0xa75b,	// (0x00088c0f) main_cset_slider_pane_g1

0xa770,	// (0x00088c24) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0008de26) main_cset_slider_pane_g

0x4046,	// (0x000824fa) main_cset_slider_pane_t1

0xa82c,	// (0x00088ce0) main_cset_slider_pane_t2

0xa846,	// (0x00088cfa) main_cset_slider_pane_t3

0xa860,	// (0x00088d14) main_cset_slider_pane_t4

0xa87a,	// (0x00088d2e) main_cset_slider_pane_t5

0xa894,	// (0x00088d48) main_cset_slider_pane_t6

0xa8a9,	// (0x00088d5d) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0008de4b) main_cset_slider_pane_t

0xa9ad,	// (0x00088e61) cset_list_set_pane_ParamLimits

0xa9ad,	// (0x00088e61) cset_list_set_pane

0xa9bd,	// (0x00088e71) aid_position_infowindow_above

0xa9c5,	// (0x00088e79) aid_position_infowindow_below

0xa9cd,	// (0x00088e81) cset_list_set_pane_g1_ParamLimits

0xa9cd,	// (0x00088e81) cset_list_set_pane_g1

0xa9d9,	// (0x00088e8d) cset_list_set_pane_g3_ParamLimits

0xa9d9,	// (0x00088e8d) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0008de6a) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0008de6a) cset_list_set_pane_g

0xa9e8,	// (0x00088e9c) cset_list_set_pane_t1_ParamLimits

0xa9e8,	// (0x00088e9c) cset_list_set_pane_t1

0x0260,	// (0x0007e714) list_highlight_pane_cp021_ParamLimits

0x0260,	// (0x0007e714) list_highlight_pane_cp021

0xe9e1,	// (0x0008ce95) cset_slider_pane_g1

0xe9f3,	// (0x0008cea7) cset_slider_pane_g2

0xe9ea,	// (0x0008ce9e) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0008de6f) cset_slider_pane_g

0xa9fd,	// (0x00088eb1) aid_area_touch_cam4_zoom

0xaa05,	// (0x00088eb9) cam4_zoom_cont_pane

0xaa0d,	// (0x00088ec1) cam4_zoom_pane_g1

0xaa15,	// (0x00088ec9) cam4_zoom_pane_g2

0xaa1d,	// (0x00088ed1) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0008de76) cam4_zoom_pane_g

0xaa25,	// (0x00088ed9) cam4_zoom_cont_pane_g1

0xaa2e,	// (0x00088ee2) cam4_zoom_cont_pane_g2

0xaa37,	// (0x00088eeb) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0008de7d) cam4_zoom_cont_pane_g

0x9f58,	// (0x0008840c) call4_image_pane_ParamLimits

0x9f58,	// (0x0008840c) call4_image_pane

0x1f02,	// (0x000803b6) call4_windows_conf_pane_ParamLimits

0x1f15,	// (0x000803c9) popup_call4_audio_in_window_ParamLimits

0x1f15,	// (0x000803c9) popup_call4_audio_in_window

0x0205,	// (0x0007e6b9) bg_popup_call2_act_pane_cp02

0x1f41,	// (0x000803f5) call4_list_conf_pane

0x159d,	// (0x0007fa51) call4_image_pane_g1

0x159d,	// (0x0007fa51) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0008db88) call4_image_pane_g

0x4101,	// (0x000825b5) list_single_graphic_popup_conf4_pane_ParamLimits

0x4101,	// (0x000825b5) list_single_graphic_popup_conf4_pane

0x0205,	// (0x0007e6b9) list_highlight_pane_cp022

0x4114,	// (0x000825c8) list_single_graphic_popup_conf4_pane_g1

0xe624,	// (0x0008cad8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0008de84) list_single_graphic_popup_conf4_pane_g

0x411c,	// (0x000825d0) list_single_graphic_popup_conf4_pane_t1

0x6513,	// (0x000849c7) popup_vtel_slider_window_ParamLimits

0x6513,	// (0x000849c7) popup_vtel_slider_window

0x1ecc,	// (0x00080380) dialer2_ne_pane_t2_ParamLimits

0x1ecc,	// (0x00080380) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0008dd65) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0008dd65) dialer2_ne_pane_t

0x0260,	// (0x0007e714) bg_popup_sub_pane_cp010_ParamLimits

0x0260,	// (0x0007e714) bg_popup_sub_pane_cp010

0xaa40,	// (0x00088ef4) popup_vtel_slider_window_g1_ParamLimits

0xaa40,	// (0x00088ef4) popup_vtel_slider_window_g1

0xaa4c,	// (0x00088f00) popup_vtel_slider_window_g2_ParamLimits

0xaa4c,	// (0x00088f00) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0008de89) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0008de89) popup_vtel_slider_window_g

0xaa92,	// (0x00088f46) vtel_slider_pane_ParamLimits

0xaa92,	// (0x00088f46) vtel_slider_pane

0xaaa1,	// (0x00088f55) vtel_slider_pane_g1_ParamLimits

0xaaa1,	// (0x00088f55) vtel_slider_pane_g1

0xaaae,	// (0x00088f62) vtel_slider_pane_g2_ParamLimits

0xaaae,	// (0x00088f62) vtel_slider_pane_g2

0xaabb,	// (0x00088f6f) vtel_slider_pane_g3_ParamLimits

0xaabb,	// (0x00088f6f) vtel_slider_pane_g3

0xaaa1,	// (0x00088f55) vtel_slider_pane_g4_ParamLimits

0xaaa1,	// (0x00088f55) vtel_slider_pane_g4

0xaac8,	// (0x00088f7c) vtel_slider_pane_g5_ParamLimits

0xaac8,	// (0x00088f7c) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0008de92) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0008de92) vtel_slider_pane_g

0x8339,	// (0x000867ed) main_gallery2_pane

0xa2b6,	// (0x0008876a) aid_size_row_itut2_dropdow_list_ParamLimits

0xa2b6,	// (0x0008876a) aid_size_row_itut2_dropdow_list

0xa306,	// (0x000887ba) grid_vitu2_function_top_pane_ParamLimits

0xa306,	// (0x000887ba) grid_vitu2_function_top_pane

0xa342,	// (0x000887f6) popup_vitu2_dropdown_list_window_ParamLimits

0xa342,	// (0x000887f6) popup_vitu2_dropdown_list_window

0xa35a,	// (0x0008880e) popup_vitu2_match_list_window

0xaad5,	// (0x00088f89) cell_vitu2_function_top_pane_ParamLimits

0xaad5,	// (0x00088f89) cell_vitu2_function_top_pane

0xaaed,	// (0x00088fa1) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaaed,	// (0x00088fa1) cell_vitu2_function_top_pane_cp01

0xab09,	// (0x00088fbd) cell_vitu2_function_top_wide_pane_ParamLimits

0xab09,	// (0x00088fbd) cell_vitu2_function_top_wide_pane

0x8339,	// (0x000867ed) bg_button_pane_cp012

0xab25,	// (0x00088fd9) cell_vitu2_function_top_pane_g1

0xab39,	// (0x00088fed) bg_button_pane_cp013_ParamLimits

0xab39,	// (0x00088fed) bg_button_pane_cp013

0xab55,	// (0x00089009) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xab55,	// (0x00089009) cell_vitu2_function_top_wide_pane_g1

0x5516,	// (0x000839ca) bg_popup_sub_pane_cp20

0xab6d,	// (0x00089021) list_vitu2_match_list_pane

0x1feb,	// (0x0008049f) bg_popup_sub_pane_cp20_g1

0x1ff3,	// (0x000804a7) bg_popup_sub_pane_cp20_g2

0xe136,	// (0x0008c5ea) bg_popup_sub_pane_cp20_g3

0x1ffb,	// (0x000804af) bg_popup_sub_pane_cp20_g4

0xe116,	// (0x0008c5ca) bg_popup_sub_pane_cp20_g5

0x4132,	// (0x000825e6) bg_popup_sub_pane_cp20_g6

0x200b,	// (0x000804bf) bg_popup_sub_pane_cp20_g7

0x2013,	// (0x000804c7) bg_popup_sub_pane_cp20_g8

0x201b,	// (0x000804cf) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0008de9d) bg_popup_sub_pane_cp20_g

0xab85,	// (0x00089039) list_vitu2_match_list_item_pane_ParamLimits

0xab85,	// (0x00089039) list_vitu2_match_list_item_pane

0xab97,	// (0x0008904b) list_vitu2_match_list_item_pane_t1

0x552c,	// (0x000839e0) bg_popup_sub_pane_cp21

0xabd4,	// (0x00089088) grid_vitu2_dropdown_list_pane

0xabdc,	// (0x00089090) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xabdc,	// (0x00089090) cell_vitu2_dropdown_list_char_pane

0xabfd,	// (0x000890b1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xabfd,	// (0x000890b1) cell_vitu2_dropdown_list_ctrl_pane

0x414c,	// (0x00082600) cell_vitu2_dropdown_list_char_pane_g1

0x4143,	// (0x000825f7) cell_vitu2_dropdown_list_char_pane_g2

0x413a,	// (0x000825ee) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0008deba) cell_vitu2_dropdown_list_char_pane_g

0xac29,	// (0x000890dd) cell_vitu2_dropdown_list_char_pane_t1

0xac37,	// (0x000890eb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xac37,	// (0x000890eb) cell_vitu2_dropdown_list_ctrl_pane_g1

0xac47,	// (0x000890fb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xac47,	// (0x000890fb) cell_vitu2_dropdown_list_ctrl_pane_g2

0xac58,	// (0x0008910c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xac58,	// (0x0008910c) cell_vitu2_dropdown_list_ctrl_pane_g3

0xac68,	// (0x0008911c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xac68,	// (0x0008911c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa13d,	// (0x000885f1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa13d,	// (0x000885f1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0008dec1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0008dec1) cell_vitu2_dropdown_list_ctrl_pane_g

0xac81,	// (0x00089135) aid_size_cell_gallery2_ParamLimits

0xac81,	// (0x00089135) aid_size_cell_gallery2

0xac9b,	// (0x0008914f) grid_gallery2_pane_ParamLimits

0xac9b,	// (0x0008914f) grid_gallery2_pane

0x974e,	// (0x00087c02) scroll_pane_cp029_ParamLimits

0x974e,	// (0x00087c02) scroll_pane_cp029

0xacac,	// (0x00089160) cell_gallery2_pane_ParamLimits

0xacac,	// (0x00089160) cell_gallery2_pane

0x4155,	// (0x00082609) cell_gallery2_pane_g2

0xacf9,	// (0x000891ad) cell_gallery2_pane_g3

0x415d,	// (0x00082611) cell_gallery2_pane_g4

0x4165,	// (0x00082619) cell_gallery2_pane_g5

0xde85,	// (0x0008c339) grid_highlight_pane_cp10

0xa35a,	// (0x0008880e) popup_vitu2_match_list_window_ParamLimits

0xa36a,	// (0x0008881e) popup_vitu2_query_window_ParamLimits

0xa36a,	// (0x0008881e) popup_vitu2_query_window

0x552c,	// (0x000839e0) bg_vitu2_candi_button_pane

0x414c,	// (0x00082600) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x4143,	// (0x000825f7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x413a,	// (0x000825ee) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xad01,	// (0x000891b5) bg_button_pane_cp015

0xad11,	// (0x000891c5) bg_button_pane_cp016

0xad24,	// (0x000891d8) bg_button_pane_cp017

0x1089,	// (0x0007f53d) bg_popup_sub_pane_cp22

0x416d,	// (0x00082621) popup_vitu2_query_window_g1

0xad67,	// (0x0008921b) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0008decc) popup_vitu2_query_window_g

0xad82,	// (0x00089236) popup_vitu2_query_window_t1_ParamLimits

0xad82,	// (0x00089236) popup_vitu2_query_window_t1

0xadb5,	// (0x00089269) popup_vitu2_query_window_t2_ParamLimits

0xadb5,	// (0x00089269) popup_vitu2_query_window_t2

0xadc7,	// (0x0008927b) popup_vitu2_query_window_t3_ParamLimits

0xadc7,	// (0x0008927b) popup_vitu2_query_window_t3

0xadef,	// (0x000892a3) popup_vitu2_query_window_t4_ParamLimits

0xadef,	// (0x000892a3) popup_vitu2_query_window_t4

0xae0c,	// (0x000892c0) popup_vitu2_query_window_t5_ParamLimits

0xae0c,	// (0x000892c0) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0008ded3) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0008ded3) popup_vitu2_query_window_t

0x3ff5,	// (0x000824a9) main_cset_text_pane

0xa715,	// (0x00088bc9) aid_area_touch_slider_ParamLimits

0xa731,	// (0x00088be5) cset_slider_pane_ParamLimits

0xa75b,	// (0x00088c0f) main_cset_slider_pane_g1_ParamLimits

0xa770,	// (0x00088c24) main_cset_slider_pane_g2_ParamLimits

0x4016,	// (0x000824ca) main_cset_slider_pane_g3_ParamLimits

0x4016,	// (0x000824ca) main_cset_slider_pane_g3

0xa785,	// (0x00088c39) main_cset_slider_pane_g4_ParamLimits

0xa785,	// (0x00088c39) main_cset_slider_pane_g4

0xa794,	// (0x00088c48) main_cset_slider_pane_g5_ParamLimits

0xa794,	// (0x00088c48) main_cset_slider_pane_g5

0xa7a0,	// (0x00088c54) main_cset_slider_pane_g6_ParamLimits

0xa7a0,	// (0x00088c54) main_cset_slider_pane_g6

0xf972,	// (0x0008de26) main_cset_slider_pane_g_ParamLimits

0x4046,	// (0x000824fa) main_cset_slider_pane_t1_ParamLimits

0xa82c,	// (0x00088ce0) main_cset_slider_pane_t2_ParamLimits

0xa846,	// (0x00088cfa) main_cset_slider_pane_t3_ParamLimits

0xa860,	// (0x00088d14) main_cset_slider_pane_t4_ParamLimits

0xa87a,	// (0x00088d2e) main_cset_slider_pane_t5_ParamLimits

0xa894,	// (0x00088d48) main_cset_slider_pane_t6_ParamLimits

0xa8a9,	// (0x00088d5d) main_cset_slider_pane_t7_ParamLimits

0xa8d3,	// (0x00088d87) main_cset_slider_pane_t8_ParamLimits

0xa8d3,	// (0x00088d87) main_cset_slider_pane_t8

0xa8fb,	// (0x00088daf) main_cset_slider_pane_t9_ParamLimits

0xa8fb,	// (0x00088daf) main_cset_slider_pane_t9

0xa923,	// (0x00088dd7) main_cset_slider_pane_t10_ParamLimits

0xa923,	// (0x00088dd7) main_cset_slider_pane_t10

0xa94b,	// (0x00088dff) main_cset_slider_pane_t11_ParamLimits

0xa94b,	// (0x00088dff) main_cset_slider_pane_t11

0xa973,	// (0x00088e27) main_cset_slider_pane_t12_ParamLimits

0xa973,	// (0x00088e27) main_cset_slider_pane_t12

0xa990,	// (0x00088e44) main_cset_slider_pane_t13_ParamLimits

0xa990,	// (0x00088e44) main_cset_slider_pane_t13

0xf997,	// (0x0008de4b) main_cset_slider_pane_t_ParamLimits

0x0205,	// (0x0007e6b9) bg_popup_sub_pane_cp011

0x4179,	// (0x0008262d) main_cset_text_pane_g1

0x4181,	// (0x00082635) main_cset_text_pane_t1

0x418f,	// (0x00082643) main_cset_text_pane_t2

0x419d,	// (0x00082651) main_cset_text_pane_t3

0x41ab,	// (0x0008265f) main_cset_text_pane_t4

0x41b9,	// (0x0008266d) main_cset_text_pane_t5

0x41c7,	// (0x0008267b) main_cset_text_pane_t6

0x41d5,	// (0x00082689) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0008dee2) main_cset_text_pane_t

0x552c,	// (0x000839e0) main_cam4_burst_pane

0x552c,	// (0x000839e0) main_cam5_pane

0xa670,	// (0x00088b24) bg_button_pane_cp019

0xa679,	// (0x00088b2d) bg_button_pane_cp020

0x4022,	// (0x000824d6) main_cset_slider_pane_g7_ParamLimits

0x4022,	// (0x000824d6) main_cset_slider_pane_g7

0x402e,	// (0x000824e2) main_cset_slider_pane_g8_ParamLimits

0x402e,	// (0x000824e2) main_cset_slider_pane_g8

0xa7b4,	// (0x00088c68) main_cset_slider_pane_g9_ParamLimits

0xa7b4,	// (0x00088c68) main_cset_slider_pane_g9

0xa7c0,	// (0x00088c74) main_cset_slider_pane_g10_ParamLimits

0xa7c0,	// (0x00088c74) main_cset_slider_pane_g10

0xa7cc,	// (0x00088c80) main_cset_slider_pane_g11_ParamLimits

0xa7cc,	// (0x00088c80) main_cset_slider_pane_g11

0xa7d8,	// (0x00088c8c) main_cset_slider_pane_g12_ParamLimits

0xa7d8,	// (0x00088c8c) main_cset_slider_pane_g12

0xa7e4,	// (0x00088c98) main_cset_slider_pane_g13_ParamLimits

0xa7e4,	// (0x00088c98) main_cset_slider_pane_g13

0xa7f0,	// (0x00088ca4) main_cset_slider_pane_g14_ParamLimits

0xa7f0,	// (0x00088ca4) main_cset_slider_pane_g14

0xa7fc,	// (0x00088cb0) main_cset_slider_pane_g15_ParamLimits

0xa7fc,	// (0x00088cb0) main_cset_slider_pane_g15

0x4074,	// (0x00082528) main_cset_slider_pane_t14_ParamLimits

0x4074,	// (0x00082528) main_cset_slider_pane_t14

0x40ad,	// (0x00082561) main_cset_slider_pane_t15_ParamLimits

0x40ad,	// (0x00082561) main_cset_slider_pane_t15

0xae7f,	// (0x00089333) aid_cam4_burst_size_cell_ParamLimits

0xae7f,	// (0x00089333) aid_cam4_burst_size_cell

0xae9b,	// (0x0008934f) grid_cam4_burst_pane_ParamLimits

0xae9b,	// (0x0008934f) grid_cam4_burst_pane

0xaebd,	// (0x00089371) linegrid_cam4_burst_pane_ParamLimits

0xaebd,	// (0x00089371) linegrid_cam4_burst_pane

0xaedb,	// (0x0008938f) scroll_pane_cp30_ParamLimits

0xaedb,	// (0x0008938f) scroll_pane_cp30

0xaee7,	// (0x0008939b) cell_cam4_burst_pane_ParamLimits

0xaee7,	// (0x0008939b) cell_cam4_burst_pane

0x41e3,	// (0x00082697) linegrid_cam4_burst_pane_g1_ParamLimits

0x41e3,	// (0x00082697) linegrid_cam4_burst_pane_g1

0xaf1f,	// (0x000893d3) linegrid_cam4_burst_pane_g2_ParamLimits

0xaf1f,	// (0x000893d3) linegrid_cam4_burst_pane_g2

0x41f0,	// (0x000826a4) linegrid_cam4_burst_pane_g3_ParamLimits

0x41f0,	// (0x000826a4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0008def1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0008def1) linegrid_cam4_burst_pane_g

0xaf30,	// (0x000893e4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xaf30,	// (0x000893e4) linegrid_cam4_burst_pane_g3_copy1

0x41fd,	// (0x000826b1) linegrid_cam4_burst_pane_g4_ParamLimits

0x41fd,	// (0x000826b1) linegrid_cam4_burst_pane_g4

0xaf4a,	// (0x000893fe) linegrid_cam4_burst_pane_g5_ParamLimits

0xaf4a,	// (0x000893fe) linegrid_cam4_burst_pane_g5

0xaf5b,	// (0x0008940f) linegrid_cam4_burst_pane_g6_ParamLimits

0xaf5b,	// (0x0008940f) linegrid_cam4_burst_pane_g6

0x420a,	// (0x000826be) linegrid_cam4_burst_pane_g7_ParamLimits

0x420a,	// (0x000826be) linegrid_cam4_burst_pane_g7

0xaf6c,	// (0x00089420) cell_cam4_burst_pane_g1

0x4223,	// (0x000826d7) main_cam5_pane_t1_ParamLimits

0x4223,	// (0x000826d7) main_cam5_pane_t1

0x4235,	// (0x000826e9) main_cam5_pane_t2_ParamLimits

0x4235,	// (0x000826e9) main_cam5_pane_t2

0x4247,	// (0x000826fb) main_cam5_pane_t3_ParamLimits

0x4247,	// (0x000826fb) main_cam5_pane_t3

0x4259,	// (0x0008270d) main_cam5_pane_t4_ParamLimits

0x4259,	// (0x0008270d) main_cam5_pane_t4

0x426f,	// (0x00082723) main_cam5_pane_t5_ParamLimits

0x426f,	// (0x00082723) main_cam5_pane_t5

0x4281,	// (0x00082735) main_cam5_pane_t6_ParamLimits

0x4281,	// (0x00082735) main_cam5_pane_t6

0x4293,	// (0x00082747) main_cam5_pane_t7_ParamLimits

0x4293,	// (0x00082747) main_cam5_pane_t7

0x42a5,	// (0x00082759) main_cam5_pane_t8_ParamLimits

0x42a5,	// (0x00082759) main_cam5_pane_t8

0x42c1,	// (0x00082775) main_cam5_pane_t9_ParamLimits

0x42c1,	// (0x00082775) main_cam5_pane_t9

0x42d3,	// (0x00082787) main_cam5_pane_t10_ParamLimits

0x42d3,	// (0x00082787) main_cam5_pane_t10

0x42e5,	// (0x00082799) main_cam5_pane_t11_ParamLimits

0x42e5,	// (0x00082799) main_cam5_pane_t11

0x42f7,	// (0x000827ab) main_cam5_pane_t12_ParamLimits

0x42f7,	// (0x000827ab) main_cam5_pane_t12

0x430c,	// (0x000827c0) main_cam5_pane_t13_ParamLimits

0x430c,	// (0x000827c0) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0008defd) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0008defd) main_cam5_pane_t

0x54d5,	// (0x00083989) popup_scut_keymap_window_ParamLimits

0x54d5,	// (0x00083989) popup_scut_keymap_window

0xaf7f,	// (0x00089433) aid_size_cell_brow_shortcut

0xde85,	// (0x0008c339) bg_popup_window_pane_cp010

0xaf8b,	// (0x0008943f) grid_scut_pane

0xaf95,	// (0x00089449) cell_scut_pane_ParamLimits

0xaf95,	// (0x00089449) cell_scut_pane

0xafaa,	// (0x0008945e) cell_scut_pane_g1

0x4329,	// (0x000827dd) cell_scut_pane_t1

0x4338,	// (0x000827ec) cell_scut_pane_t2

0xafb3,	// (0x00089467) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0008df18) cell_scut_pane_t

0x8f9e,	// (0x00087452) main_mup3_pane_g8_ParamLimits

0x8f9e,	// (0x00087452) main_mup3_pane_g8

0xa2c2,	// (0x00088776) area_vitu2_query_pane_ParamLimits

0xa2c2,	// (0x00088776) area_vitu2_query_pane

0xad37,	// (0x000891eb) input_focus_pane_cp08

0x4347,	// (0x000827fb) area_vitu2_query_pane_g1

0xafc1,	// (0x00089475) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0008df1f) area_vitu2_query_pane_g

0xafd0,	// (0x00089484) area_vitu2_query_pane_t1_ParamLimits

0xafd0,	// (0x00089484) area_vitu2_query_pane_t1

0xafe2,	// (0x00089496) area_vitu2_query_pane_t2_ParamLimits

0xafe2,	// (0x00089496) area_vitu2_query_pane_t2

0xaff4,	// (0x000894a8) area_vitu2_query_pane_t3_ParamLimits

0xaff4,	// (0x000894a8) area_vitu2_query_pane_t3

0x207b,	// (0x0008052f) area_vitu2_query_pane_t4_ParamLimits

0x207b,	// (0x0008052f) area_vitu2_query_pane_t4

0x20a3,	// (0x00080557) area_vitu2_query_pane_t5_ParamLimits

0x20a3,	// (0x00080557) area_vitu2_query_pane_t5

0x20cb,	// (0x0008057f) area_vitu2_query_pane_t6_ParamLimits

0x20cb,	// (0x0008057f) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0008df24) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0008df24) area_vitu2_query_pane_t

0xb01c,	// (0x000894d0) bg_button_pane_cp018

0xb029,	// (0x000894dd) bg_button_pane_cp021

0xb035,	// (0x000894e9) bg_button_pane_cp022

0xb044,	// (0x000894f8) input_focus_pane_cp09

0x774e,	// (0x00085c02) aid_size_touch_mv_arrow_left

0xe762,	// (0x0008cc16) aid_size_touch_mv_arrow_right

0xa814,	// (0x00088cc8) main_cset_slider_pane_g16_ParamLimits

0xa814,	// (0x00088cc8) main_cset_slider_pane_g16

0xa820,	// (0x00088cd4) main_cset_slider_pane_g17_ParamLimits

0xa820,	// (0x00088cd4) main_cset_slider_pane_g17

0xaf6c,	// (0x00089420) cell_cam4_burst_pane_g1_ParamLimits

0x0205,	// (0x0007e6b9) compa_mode_pane

0xaa58,	// (0x00088f0c) popup_vtel_slider_window_g3_ParamLimits

0xaa58,	// (0x00088f0c) popup_vtel_slider_window_g3

0xaa6c,	// (0x00088f20) popup_vtel_slider_window_g4_ParamLimits

0xaa6c,	// (0x00088f20) popup_vtel_slider_window_g4

0xaa80,	// (0x00088f34) popup_vtel_slider_window_t1_ParamLimits

0xaa80,	// (0x00088f34) popup_vtel_slider_window_t1

0x552c,	// (0x000839e0) main_cl_pane

0x83c5,	// (0x00086879) popup_imed_adjust2_window_ParamLimits

0x1089,	// (0x0007f53d) bg_tb_trans_pane_cp05_ParamLimits

0x1aed,	// (0x0007ffa1) popup_imed_adjust2_window_g1_ParamLimits

0x1afc,	// (0x0007ffb0) popup_imed_adjust2_window_g2_ParamLimits

0x1afc,	// (0x0007ffb0) popup_imed_adjust2_window_g2

0x1b08,	// (0x0007ffbc) popup_imed_adjust2_window_g3_ParamLimits

0x1b08,	// (0x0007ffbc) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0008dc8b) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0008dc8b) popup_imed_adjust2_window_g

0x1b14,	// (0x0007ffc8) popup_imed_adjust2_window_t1_ParamLimits

0x1b2c,	// (0x0007ffe0) slider_imed_adjust_pane_ParamLimits

0x1b40,	// (0x0007fff4) slider_imed_adjust_pane_g1_ParamLimits

0x1b50,	// (0x00080004) slider_imed_adjust_pane_g2_ParamLimits

0x1b60,	// (0x00080014) slider_imed_adjust_pane_g3_ParamLimits

0x1b71,	// (0x00080025) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0008dc92) slider_imed_adjust_pane_g_ParamLimits

0xa05c,	// (0x00088510) aid_touch_area_cam4_ParamLimits

0xa05c,	// (0x00088510) aid_touch_area_cam4

0xa06a,	// (0x0008851e) battery_pane_cp01

0xa0e9,	// (0x0008859d) main_camera4_pane_g6_ParamLimits

0xa0e9,	// (0x0008859d) main_camera4_pane_g6

0xa107,	// (0x000885bb) main_camera4_pane_t2_ParamLimits

0xa107,	// (0x000885bb) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0008dd99) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0008dd99) main_camera4_pane_t

0xa19d,	// (0x00088651) aid_touch_area_vid4_ParamLimits

0xa19d,	// (0x00088651) aid_touch_area_vid4

0xa0e9,	// (0x0008859d) main_video4_pane_g5_ParamLimits

0xa0e9,	// (0x0008859d) main_video4_pane_g5

0xa1cd,	// (0x00088681) vid4_progress_pane_ParamLimits

0xa1cd,	// (0x00088681) vid4_progress_pane

0x403a,	// (0x000824ee) main_cset_slider_pane_g18_ParamLimits

0x403a,	// (0x000824ee) main_cset_slider_pane_g18

0x4217,	// (0x000826cb) cell_cam4_burst_pane_g2_ParamLimits

0x4217,	// (0x000826cb) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0008def8) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0008def8) cell_cam4_burst_pane_g

0xb053,	// (0x00089507) bg_cl_pane_ParamLimits

0xb053,	// (0x00089507) bg_cl_pane

0xb05f,	// (0x00089513) cl_header_pane_ParamLimits

0xb05f,	// (0x00089513) cl_header_pane

0xb06b,	// (0x0008951f) cl_listscroll_pane_ParamLimits

0xb06b,	// (0x0008951f) cl_listscroll_pane

0x2117,	// (0x000805cb) bg_cl_pane_g1

0x211f,	// (0x000805d3) bg_cl_pane_g2

0x2127,	// (0x000805db) bg_cl_pane_g3

0x212f,	// (0x000805e3) bg_cl_pane_g4

0x2137,	// (0x000805eb) bg_cl_pane_g5

0x213f,	// (0x000805f3) bg_cl_pane_g6

0x2147,	// (0x000805fb) bg_cl_pane_g7

0x214f,	// (0x00080603) bg_cl_pane_g8

0x2157,	// (0x0008060b) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0008df33) bg_cl_pane_g

0xb077,	// (0x0008952b) aid_height_cl_leading_ParamLimits

0xb077,	// (0x0008952b) aid_height_cl_leading

0xb083,	// (0x00089537) aid_height_cl_text_ParamLimits

0xb083,	// (0x00089537) aid_height_cl_text

0x39a1,	// (0x00081e55) bg_cl_header_pane_ParamLimits

0x39a1,	// (0x00081e55) bg_cl_header_pane

0xb09b,	// (0x0008954f) cl_header_pane_g1_ParamLimits

0xb09b,	// (0x0008954f) cl_header_pane_g1

0xb0a8,	// (0x0008955c) cl_header_pane_t1_ParamLimits

0xb0a8,	// (0x0008955c) cl_header_pane_t1

0x215f,	// (0x00080613) cl_list_pane

0x2168,	// (0x0008061c) hc_scroll_pane_cp01

0xe116,	// (0x0008c5ca) bg_cl_header_pane_g1

0x1feb,	// (0x0008049f) bg_cl_header_pane_g2

0xe136,	// (0x0008c5ea) bg_cl_header_pane_g3

0x1ffb,	// (0x000804af) bg_cl_header_pane_g4

0x1ff3,	// (0x000804a7) bg_cl_header_pane_g5

0x4132,	// (0x000825e6) bg_cl_header_pane_g6

0x2013,	// (0x000804c7) bg_cl_header_pane_g7

0x201b,	// (0x000804cf) bg_cl_header_pane_g8

0x200b,	// (0x000804bf) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0008df46) bg_cl_header_pane_g

0xb0ba,	// (0x0008956e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb0ba,	// (0x0008956e) hc_cl_list_double_graphic_heading_pane

0xb0ca,	// (0x0008957e) hc_cl_list_single_graphic_pane_ParamLimits

0xb0ca,	// (0x0008957e) hc_cl_list_single_graphic_pane

0xb0dc,	// (0x00089590) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb0dc,	// (0x00089590) hc_cl_list_single_graphic_pane_g1

0xb0e8,	// (0x0008959c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb0e8,	// (0x0008959c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0008df59) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0008df59) hc_cl_list_single_graphic_pane_g

0xb0fc,	// (0x000895b0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb0fc,	// (0x000895b0) hc_cl_list_single_graphic_pane_t1

0xb0dc,	// (0x00089590) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb0dc,	// (0x00089590) hc_cl_list_double_graphic_heading_pane_g1

0xb111,	// (0x000895c5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb111,	// (0x000895c5) hc_cl_list_double_graphic_heading_pane_g2

0xb125,	// (0x000895d9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb125,	// (0x000895d9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0008df5e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0008df5e) hc_cl_list_double_graphic_heading_pane_g

0xb139,	// (0x000895ed) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb139,	// (0x000895ed) hc_cl_list_double_graphic_heading_pane_t1

0xb14e,	// (0x00089602) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb14e,	// (0x00089602) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0008df65) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0008df65) hc_cl_list_double_graphic_heading_pane_t

0xb163,	// (0x00089617) vid4_progress_pane_g1

0xb172,	// (0x00089626) vid4_progress_pane_g2

0xb181,	// (0x00089635) vid4_progress_pane_g3

0xb190,	// (0x00089644) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0008df6a) vid4_progress_pane_g

0xb1a8,	// (0x0008965c) vid4_progress_pane_t1

0xb1be,	// (0x00089672) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0008df75) vid4_progress_pane_t

0xb1e8,	// (0x0008969c) wait_bar_pane_cp07

0x1398,	// (0x0007f84c) blid_firmament_pane_ParamLimits

0x13d9,	// (0x0007f88d) popup_blid_sat_info2_window_g1

0x13fd,	// (0x0007f8b1) popup_blid_sat_info2_window_t3

0x140b,	// (0x0007f8bf) popup_blid_sat_info2_window_t4

0x1419,	// (0x0007f8cd) popup_blid_sat_info2_window_t5

0x1427,	// (0x0007f8db) popup_blid_sat_info2_window_t6

0x1437,	// (0x0007f8eb) popup_blid_sat_info2_window_t7

0x1445,	// (0x0007f8f9) popup_blid_sat_info2_window_t8

0x1453,	// (0x0007f907) popup_blid_sat_info2_window_t9

0x1461,	// (0x0007f915) popup_blid_sat_info2_window_t10

0x151d,	// (0x0007f9d1) aid_firma_cardinal_ParamLimits

0x1531,	// (0x0007f9e5) blid_firmament_pane_t1_ParamLimits

0x1548,	// (0x0007f9fc) blid_firmament_pane_t2_ParamLimits

0x155f,	// (0x0007fa13) blid_firmament_pane_t3_ParamLimits

0x1576,	// (0x0007fa2a) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0008db7f) blid_firmament_pane_t_ParamLimits

0x158d,	// (0x0007fa41) blid_sat_info_pane_ParamLimits

0x8339,	// (0x000867ed) main_cam_set_pane_ParamLimits

0x96ee,	// (0x00087ba2) aid_size_cell_colour_35_ParamLimits

0x9705,	// (0x00087bb9) aid_size_cell_colour_112_ParamLimits

0x971c,	// (0x00087bd0) aid_size_cell_effect_ParamLimits

0x0260,	// (0x0007e714) bg_tb_trans_pane_cp02_ParamLimits

0xf0a3,	// (0x0008d557) heading_imed_pane_ParamLimits

0x9736,	// (0x00087bea) listscroll_imed_pane_ParamLimits

0x066f,	// (0x0007eb23) popup_call2_audio_first_window_g5_ParamLimits

0x066f,	// (0x0007eb23) popup_call2_audio_first_window_g5

0x9dd9,	// (0x0008828d) aid_size_touch_image3_arrow_left_ParamLimits

0x9dd9,	// (0x0008828d) aid_size_touch_image3_arrow_left

0x9ded,	// (0x000882a1) aid_size_touch_image3_arrow_right_ParamLimits

0x9ded,	// (0x000882a1) aid_size_touch_image3_arrow_right

0xb1d3,	// (0x00089687) vid4_progress_pane_t3

0x999a,	// (0x00087e4e) main_hwr_training_symbol_option_pane_ParamLimits

0x999a,	// (0x00087e4e) main_hwr_training_symbol_option_pane

0x1dcc,	// (0x00080280) popup_hwr_training_preview_window_ParamLimits

0x1dcc,	// (0x00080280) popup_hwr_training_preview_window

0x99f5,	// (0x00087ea9) hwr_training_navi_pane_g5_ParamLimits

0x99f5,	// (0x00087ea9) hwr_training_navi_pane_g5

0x1fd9,	// (0x0008048d) popup_char_count_window

0x5516,	// (0x000839ca) bg_popup_sub_pane_cp20_ParamLimits

0xab6d,	// (0x00089021) list_vitu2_match_list_pane_ParamLimits

0xab79,	// (0x0008902d) vitu2_page_scroll_pane_ParamLimits

0xab79,	// (0x0008902d) vitu2_page_scroll_pane

0x2194,	// (0x00080648) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2194,	// (0x00080648) list_single_hwr_training_symbol_option_pane

0x21a7,	// (0x0008065b) list_single_hwr_training_symbol_option_pane_g1

0x21af,	// (0x00080663) list_single_hwr_training_symbol_option_pane_t1

0x21bd,	// (0x00080671) bg_button_pane_cp023

0x21c6,	// (0x0008067a) bg_button_pane_cp024

0xb227,	// (0x000896db) vitu2_page_scroll_pane_g1

0xb22f,	// (0x000896e3) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0008df7c) vitu2_page_scroll_pane_g

0xb237,	// (0x000896eb) vitu2_page_scroll_pane_t1

0x15c6,	// (0x0007fa7a) popup_char_count_window_g1

0x21f9,	// (0x000806ad) popup_char_count_window_g2

0x2202,	// (0x000806b6) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0008df81) popup_char_count_window_g

0x220b,	// (0x000806bf) popup_char_count_window_t1

0x552c,	// (0x000839e0) main_vded2_pane

0x1adb,	// (0x0007ff8f) aid_size_cell_imed_line

0x1ae5,	// (0x0007ff99) grid_imed_line_width_pane

0xa218,	// (0x000886cc) vid4_indicators_pane_g4

0x2219,	// (0x000806cd) cell_imed_line_width_pane_ParamLimits

0x2219,	// (0x000806cd) cell_imed_line_width_pane

0x222b,	// (0x000806df) cell_imed_line_width_pane_g1

0x2234,	// (0x000806e8) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0008df88) cell_imed_line_width_pane_g

0xb246,	// (0x000896fa) main_vded2_pane_g1_ParamLimits

0xb246,	// (0x000896fa) main_vded2_pane_g1

0xb253,	// (0x00089707) main_vded2_pane_g2_ParamLimits

0xb253,	// (0x00089707) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0008df8d) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0008df8d) main_vded2_pane_g

0xb25f,	// (0x00089713) vded2_slider_pane_ParamLimits

0xb25f,	// (0x00089713) vded2_slider_pane

0xb26c,	// (0x00089720) aid_size_touch_vded2_end

0xb274,	// (0x00089728) aid_size_touch_vded2_playhead

0xb27c,	// (0x00089730) aid_size_touch_vded2_start

0xb284,	// (0x00089738) vded2_slider_bg_pane

0xb28d,	// (0x00089741) vded2_slider_pane_g1

0xb296,	// (0x0008974a) vded2_slider_pane_g2

0xb29e,	// (0x00089752) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0008df92) vded2_slider_pane_g

0xb2a7,	// (0x0008975b) vded2_slider_bg_pane_g1

0xb2b0,	// (0x00089764) vded2_slider_bg_pane_g2

0xb2b9,	// (0x0008976d) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0008df99) vded2_slider_bg_pane_g

0x7d21,	// (0x000861d5) aid_postcard_touch_down_pane_ParamLimits

0x7d21,	// (0x000861d5) aid_postcard_touch_down_pane

0x7d2d,	// (0x000861e1) aid_postcard_touch_up_pane_ParamLimits

0x7d2d,	// (0x000861e1) aid_postcard_touch_up_pane

0x552c,	// (0x000839e0) main_blid2_pane

0x8362,	// (0x00086816) popup_blid2_search_window

0x0205,	// (0x0007e6b9) blid2_gps_pane

0x0205,	// (0x0007e6b9) blid2_navig_pane

0x0205,	// (0x0007e6b9) blid2_search_pane

0x0205,	// (0x0007e6b9) blid2_tripm_pane

0xb2c2,	// (0x00089776) blid2_search_pane_g1_ParamLimits

0xb2c2,	// (0x00089776) blid2_search_pane_g1

0xb2ce,	// (0x00089782) blid2_search_pane_t1_ParamLimits

0xb2ce,	// (0x00089782) blid2_search_pane_t1

0xb2e0,	// (0x00089794) aid_size_cell_blid2_gps_ParamLimits

0xb2e0,	// (0x00089794) aid_size_cell_blid2_gps

0xb2f0,	// (0x000897a4) blid2_gps_pane_g1_ParamLimits

0xb2f0,	// (0x000897a4) blid2_gps_pane_g1

0xb2fc,	// (0x000897b0) grid_blid2_satellite_pane_ParamLimits

0xb2fc,	// (0x000897b0) grid_blid2_satellite_pane

0xb308,	// (0x000897bc) blid2_navig_pane_g1_ParamLimits

0xb308,	// (0x000897bc) blid2_navig_pane_g1

0xb314,	// (0x000897c8) blid2_navig_pane_t1_ParamLimits

0xb314,	// (0x000897c8) blid2_navig_pane_t1

0xb326,	// (0x000897da) blid2_navig_pane_t2_ParamLimits

0xb326,	// (0x000897da) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0008dfa0) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0008dfa0) blid2_navig_pane_t

0xb338,	// (0x000897ec) blid2_navig_ring_pane_ParamLimits

0xb338,	// (0x000897ec) blid2_navig_ring_pane

0xb344,	// (0x000897f8) blid2_speed_pane_ParamLimits

0xb344,	// (0x000897f8) blid2_speed_pane

0xb350,	// (0x00089804) blid2_tripm_pane_g1_ParamLimits

0xb350,	// (0x00089804) blid2_tripm_pane_g1

0xb35c,	// (0x00089810) blid2_tripm_pane_g2_ParamLimits

0xb35c,	// (0x00089810) blid2_tripm_pane_g2

0xb368,	// (0x0008981c) blid2_tripm_pane_g3_ParamLimits

0xb368,	// (0x0008981c) blid2_tripm_pane_g3

0xb374,	// (0x00089828) blid2_tripm_pane_g4_ParamLimits

0xb374,	// (0x00089828) blid2_tripm_pane_g4

0xb380,	// (0x00089834) blid2_tripm_pane_g5_ParamLimits

0xb380,	// (0x00089834) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0008dfa5) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0008dfa5) blid2_tripm_pane_g

0xb398,	// (0x0008984c) blid2_tripm_pane_t1_ParamLimits

0xb398,	// (0x0008984c) blid2_tripm_pane_t1

0xb3aa,	// (0x0008985e) blid2_tripm_pane_t2_ParamLimits

0xb3aa,	// (0x0008985e) blid2_tripm_pane_t2

0xb3bc,	// (0x00089870) blid2_tripm_pane_t3_ParamLimits

0xb3bc,	// (0x00089870) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0008dfb2) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0008dfb2) blid2_tripm_pane_t

0xb3ec,	// (0x000898a0) cell_blid2_satellite_pane_ParamLimits

0xb3ec,	// (0x000898a0) cell_blid2_satellite_pane

0xb404,	// (0x000898b8) cell_blid2_satellite_pane_g1

0x223c,	// (0x000806f0) cell_blid2_satellite_pane_t1

0x159d,	// (0x0007fa51) blid2_speed_pane_g1

0x224a,	// (0x000806fe) blid2_speed_pane_t1

0x2258,	// (0x0008070c) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0008dfbb) blid2_speed_pane_t

0x159d,	// (0x0007fa51) blid2_navig_ring_pane_g1

0xb40d,	// (0x000898c1) blid2_navig_ring_pane_g2

0xb415,	// (0x000898c9) blid2_navig_ring_pane_g3

0xb41d,	// (0x000898d1) blid2_navig_ring_pane_g4

0xb425,	// (0x000898d9) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0008dfc0) blid2_navig_ring_pane_g

0x0205,	// (0x0007e6b9) bg_popup_window_pane_cp011

0x2266,	// (0x0008071a) popup_blid2_search_window_g1

0x226e,	// (0x00080722) popup_blid2_search_window_t1

0x227c,	// (0x00080730) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0008dfcb) popup_blid2_search_window_t

0xe025,	// (0x0008c4d9) main_browser_pane_g1

0xdcae,	// (0x0008c162) main_browser_pane_ParamLimits

0x8339,	// (0x000867ed) bg_button_pane_cp011_ParamLimits

0xa475,	// (0x00088929) cell_vitu2_function_pane_g1_ParamLimits

0x1089,	// (0x0007f53d) bg_popup_sub_pane_cp22_ParamLimits

0xad37,	// (0x000891eb) input_focus_pane_cp08_ParamLimits

0xad4e,	// (0x00089202) popup_vitu2_query_button_pane_ParamLimits

0xad4e,	// (0x00089202) popup_vitu2_query_button_pane

0xad5f,	// (0x00089213) popup_vitu2_query_input_button_pane

0x416d,	// (0x00082621) popup_vitu2_query_window_g1_ParamLimits

0xad67,	// (0x0008921b) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0008decc) popup_vitu2_query_window_g_ParamLimits

0x0205,	// (0x0007e6b9) bg_button_pane_cp026

0xb42d,	// (0x000898e1) popup_vitu2_query_input_button_pane_g1

0x0205,	// (0x0007e6b9) bg_button_pane_cp025

0x228a,	// (0x0008073e) popup_vitu2_query_button_pane_t1

0x8d1c,	// (0x000871d0) main_mp3_pane_t6

0x8d2a,	// (0x000871de) popup_slider_window_cp01

0xa14b,	// (0x000885ff) cam4_battery_pane

0xa14b,	// (0x000885ff) cam4_battery_pane_cp02

0xa14b,	// (0x000885ff) cam4_battery_pane_cp01

0xa14b,	// (0x000885ff) cam4_battery_pane_cp03

0x2298,	// (0x0008074c) cam4_battery_pane_g1

0x159d,	// (0x0007fa51) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0008dfd0) cam4_battery_pane_g

0x146f,	// (0x0007f923) popup_blid_sat_info2_window_t11

0x774e,	// (0x00085c02) aid_size_touch_mv_arrow_left_ParamLimits

0xe762,	// (0x0008cc16) aid_size_touch_mv_arrow_right_ParamLimits

0xe7bb,	// (0x0008cc6f) navi_pane_g1_ParamLimits

0xe7c7,	// (0x0008cc7b) navi_pane_g2_ParamLimits

0x7772,	// (0x00085c26) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0008d87e) navi_pane_g_ParamLimits

0x778f,	// (0x00085c43) navi_pane_mv_t1_ParamLimits

0x9742,	// (0x00087bf6) grid_imed_effect_pane_ParamLimits

0x63ef,	// (0x000848a3) aid_placing_vt_slider_lsc

0xdf67,	// (0x0008c41b) aid_placing_vt_slider_prt

0x0260,	// (0x0007e714) bg_tb_trans_pane_cp01_ParamLimits

0x16ec,	// (0x0007fba0) popup_image_details_window_g1_ParamLimits

0x16ff,	// (0x0007fbb3) popup_image_details_window_g2_ParamLimits

0x1714,	// (0x0007fbc8) popup_image_details_window_g3_ParamLimits

0x1714,	// (0x0007fbc8) popup_image_details_window_g3

0xf710,	// (0x0008dbc4) popup_image_details_window_g_ParamLimits

0x1728,	// (0x0007fbdc) popup_image_details_window_t1_ParamLimits

0x173a,	// (0x0007fbee) popup_image_details_window_t2_ParamLimits

0x1753,	// (0x0007fc07) popup_image_details_window_t3_ParamLimits

0x1767,	// (0x0007fc1b) popup_image_details_window_t4_ParamLimits

0x1782,	// (0x0007fc36) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0008dbcb) popup_image_details_window_t_ParamLimits

0xb08f,	// (0x00089543) cl_header_name_pane_ParamLimits

0xb08f,	// (0x00089543) cl_header_name_pane

0xb435,	// (0x000898e9) cl_header_name_pane_t1_ParamLimits

0xb435,	// (0x000898e9) cl_header_name_pane_t1

0xb44c,	// (0x00089900) cl_header_name_pane_t2_ParamLimits

0xb44c,	// (0x00089900) cl_header_name_pane_t2

0xb476,	// (0x0008992a) cl_header_name_pane_t3_ParamLimits

0xb476,	// (0x0008992a) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0008dfd5) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0008dfd5) cl_header_name_pane_t

0xe854,	// (0x0008cd08) navi_pane_mv_g2_ParamLimits

0x1f96,	// (0x0008044a) field_vitu2_entry_pane_g1_ParamLimits

0x1fa2,	// (0x00080456) field_vitu2_entry_pane_g2_ParamLimits

0x1fae,	// (0x00080462) field_vitu2_entry_pane_g3_ParamLimits

0x1fae,	// (0x00080462) field_vitu2_entry_pane_g3

0xf917,	// (0x0008ddcb) field_vitu2_entry_pane_g_ParamLimits

0xa409,	// (0x000888bd) cell_vitu2_itu_pane_g1_ParamLimits

0xa41b,	// (0x000888cf) cell_vitu2_itu_pane_g2_ParamLimits

0xa41b,	// (0x000888cf) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0008ddd7) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0008ddd7) cell_vitu2_itu_pane_g

0x8339,	// (0x000867ed) bg_vkb2_func_pane_cp05_ParamLimits

0x8339,	// (0x000867ed) bg_vkb2_func_pane_cp05

0x8339,	// (0x000867ed) bg_vkb2_func_pane_cp03

0x8339,	// (0x000867ed) bg_vkb2_func_pane_cp04

0x8339,	// (0x000867ed) bg_vkb2_func_pane_cp10_ParamLimits

0x8339,	// (0x000867ed) bg_vkb2_func_pane_cp10

0xb035,	// (0x000894e9) bg_vkb2_func_pane_cp08

0xb01c,	// (0x000894d0) bg_vkb2_func_pane_cp06

0xb029,	// (0x000894dd) bg_vkb2_func_pane_cp07

0x21cf,	// (0x00080683) bg_vkb2_func_pane_cp11_ParamLimits

0x21cf,	// (0x00080683) bg_vkb2_func_pane_cp11

0x21e4,	// (0x00080698) bg_vkb2_func_pane_cp12_ParamLimits

0x21e4,	// (0x00080698) bg_vkb2_func_pane_cp12

0x0205,	// (0x0007e6b9) bg_vkb2_func_pane_cp09

0x1feb,	// (0x0008049f) bg_vkb2_func_pane_g1

0xe136,	// (0x0008c5ea) bg_vkb2_func_pane_g2

0x1ff3,	// (0x000804a7) bg_vkb2_func_pane_g3

0x1ffb,	// (0x000804af) bg_vkb2_func_pane_g4

0x4132,	// (0x000825e6) bg_vkb2_func_pane_g5

0x2013,	// (0x000804c7) bg_vkb2_func_pane_g6

0x201b,	// (0x000804cf) bg_vkb2_func_pane_g7

0x200b,	// (0x000804bf) bg_vkb2_func_pane_g8

0xe116,	// (0x0008c5ca) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0008dfdc) bg_vkb2_func_pane_g

0xb38c,	// (0x00089840) blid2_tripm_pane_g6_ParamLimits

0xb38c,	// (0x00089840) blid2_tripm_pane_g6

0x1e8a,	// (0x0008033e) mp4_progress_pane_g1

0xb3e0,	// (0x00089894) blid2_tripm_values_pane_ParamLimits

0xb3e0,	// (0x00089894) blid2_tripm_values_pane

0xb49b,	// (0x0008994f) blid2_tripm_values_pane_t1

0xb4a9,	// (0x0008995d) blid2_tripm_values_pane_t2

0xb4b7,	// (0x0008996b) blid2_tripm_values_pane_t3

0xb4c5,	// (0x00089979) blid2_tripm_values_pane_t4

0xb4d3,	// (0x00089987) blid2_tripm_values_pane_t5

0xb4e1,	// (0x00089995) blid2_tripm_values_pane_t6

0xb4ef,	// (0x000899a3) blid2_tripm_values_pane_t7

0xb4fd,	// (0x000899b1) blid2_tripm_values_pane_t8

0xb50b,	// (0x000899bf) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0008dfef) blid2_tripm_values_pane_t

0x6429,	// (0x000848dd) call_video_pane_t1_ParamLimits

0x6446,	// (0x000848fa) call_video_pane_t2_ParamLimits

0xf253,	// (0x0008d707) call_video_pane_t_ParamLimits

0x7c06,	// (0x000860ba) msg_header_pane_g1_ParamLimits

0xea26,	// (0x0008ceda) msg_header_pane_g2_ParamLimits

0xea26,	// (0x0008ceda) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0008d921) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0008d921) msg_header_pane_g

0xdcae,	// (0x0008c162) main_clock2_pane_ParamLimits

0x94e6,	// (0x0008799a) grid_clock2_toolbar_pane_ParamLimits

0x94e6,	// (0x0008799a) grid_clock2_toolbar_pane

0x94e6,	// (0x0008799a) listscroll_clock2_pane_ParamLimits

0x94e6,	// (0x0008799a) listscroll_clock2_pane

0x9582,	// (0x00087a36) main_clock2_pane_t3_ParamLimits

0x9582,	// (0x00087a36) main_clock2_pane_t3

0x9594,	// (0x00087a48) main_clock2_pane_t4_ParamLimits

0x9594,	// (0x00087a48) main_clock2_pane_t4

0x22a2,	// (0x00080756) cell_clock2_toolbar_pane

0x22aa,	// (0x0008075e) cell_clock2_toolbar_pane_cp01

0x22aa,	// (0x0008075e) cell_clock2_toolbar_pane_cp02

0x22b2,	// (0x00080766) cell_clock2_toolbar_pane_cp03

0x22ba,	// (0x0008076e) list_clock2_pane

0x22c2,	// (0x00080776) scroll_pane_cp10

0x22ca,	// (0x0008077e) list_single_clock2_pane_ParamLimits

0x22ca,	// (0x0008077e) list_single_clock2_pane

0xde85,	// (0x0008c339) list_highlight_pane_cp08

0x22d7,	// (0x0008078b) list_single_clock2_pane_t1

0x22e5,	// (0x00080799) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0008e002) list_single_clock2_pane_t

0x0205,	// (0x0007e6b9) bg_button_pane_cp10

0x22f3,	// (0x000807a7) cell_clock2_toolbar_pane_g1

0x7c8b,	// (0x0008613f) aid_main_viewer_pane_g1_ParamLimits

0x7c8b,	// (0x0008613f) aid_main_viewer_pane_g1

0x7c97,	// (0x0008614b) aid_main_viewer_pane_g2_ParamLimits

0x7c97,	// (0x0008614b) aid_main_viewer_pane_g2

0x7ca3,	// (0x00086157) aid_main_viewer_pane_g3_ParamLimits

0x7ca3,	// (0x00086157) aid_main_viewer_pane_g3

0x7cb2,	// (0x00086166) aid_main_viewer_pane_g4_ParamLimits

0x7cb2,	// (0x00086166) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0008d932) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0008d932) aid_main_viewer_pane_g

0x5516,	// (0x000839ca) main_calc_pane_ParamLimits

0x8347,	// (0x000867fb) main_dialer2_pane_ParamLimits

0x552c,	// (0x000839e0) main_cam6_pane

0x552c,	// (0x000839e0) main_vid6_pane

0x94f2,	// (0x000879a6) listscroll_gen_pane_cp06_ParamLimits

0x94f2,	// (0x000879a6) listscroll_gen_pane_cp06

0x95a6,	// (0x00087a5a) main_clock2_pane_t5_ParamLimits

0x95a6,	// (0x00087a5a) main_clock2_pane_t5

0x95ef,	// (0x00087aa3) aid_call2_pane_cp10_ParamLimits

0x9601,	// (0x00087ab5) aid_call_pane_cp10_ParamLimits

0xe756,	// (0x0008cc0a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe756,	// (0x0008cc0a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9613,	// (0x00087ac7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9613,	// (0x00087ac7) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe756,	// (0x0008cc0a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0008dc80) popup_clock_analogue_window_cp10_g_ParamLimits

0x9625,	// (0x00087ad9) popup_clock_analogue_window_cp10_t1_ParamLimits

0x1eea,	// (0x0008039e) cell_dialer2_keypad_pane_g2_ParamLimits

0x1eea,	// (0x0008039e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0008dd6a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0008dd6a) cell_dialer2_keypad_pane_g

0x9da2,	// (0x00088256) cell_dialer2_keypad_pane_t1

0xa702,	// (0x00088bb6) main_cset_text2_pane_ParamLimits

0xa702,	// (0x00088bb6) main_cset_text2_pane

0x4347,	// (0x000827fb) area_vitu2_query_pane_g1_ParamLimits

0xafc1,	// (0x00089475) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0008df1f) area_vitu2_query_pane_g_ParamLimits

0x20f3,	// (0x000805a7) area_vitu2_query_pane_t7_ParamLimits

0x20f3,	// (0x000805a7) area_vitu2_query_pane_t7

0xb01c,	// (0x000894d0) bg_button_pane_cp018_ParamLimits

0xb029,	// (0x000894dd) bg_button_pane_cp021_ParamLimits

0xb035,	// (0x000894e9) bg_button_pane_cp022_ParamLimits

0xb035,	// (0x000894e9) bg_vkb2_func_pane_cp08_ParamLimits

0xb01c,	// (0x000894d0) bg_vkb2_func_pane_cp06_ParamLimits

0xb029,	// (0x000894dd) bg_vkb2_func_pane_cp07_ParamLimits

0xb044,	// (0x000894f8) input_focus_pane_cp09_ParamLimits

0xb519,	// (0x000899cd) cam6_autofocus_pane_ParamLimits

0xb519,	// (0x000899cd) cam6_autofocus_pane

0xb535,	// (0x000899e9) cam6_image_uncrop_pane_ParamLimits

0xb535,	// (0x000899e9) cam6_image_uncrop_pane

0xb558,	// (0x00089a0c) cam6_indi_pane_ParamLimits

0xb558,	// (0x00089a0c) cam6_indi_pane

0xb572,	// (0x00089a26) cam6_mode_pane_ParamLimits

0xb572,	// (0x00089a26) cam6_mode_pane

0xb586,	// (0x00089a3a) cam6_timer_pane_ParamLimits

0xb586,	// (0x00089a3a) cam6_timer_pane

0xb592,	// (0x00089a46) cam6_zoom_pane_ParamLimits

0xb592,	// (0x00089a46) cam6_zoom_pane

0xb5a8,	// (0x00089a5c) cam6_mode_pane_g1_ParamLimits

0xb5a8,	// (0x00089a5c) cam6_mode_pane_g1

0xb5b4,	// (0x00089a68) cam6_mode_pane_g2_ParamLimits

0xb5b4,	// (0x00089a68) cam6_mode_pane_g2

0xb5c0,	// (0x00089a74) cam6_mode_pane_g3_ParamLimits

0xb5c0,	// (0x00089a74) cam6_mode_pane_g3

0xb5cc,	// (0x00089a80) cam6_mode_pane_g4_ParamLimits

0xb5cc,	// (0x00089a80) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0008e007) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0008e007) cam6_mode_pane_g

0x22fb,	// (0x000807af) bg_tb_trans_pane_cp08_ParamLimits

0x22fb,	// (0x000807af) bg_tb_trans_pane_cp08

0x2309,	// (0x000807bd) cam6_battery_pane_ParamLimits

0x2309,	// (0x000807bd) cam6_battery_pane

0x231f,	// (0x000807d3) cam6_indi_pane_g1_ParamLimits

0x231f,	// (0x000807d3) cam6_indi_pane_g1

0x2331,	// (0x000807e5) cam6_indi_pane_g2_ParamLimits

0x2331,	// (0x000807e5) cam6_indi_pane_g2

0x2343,	// (0x000807f7) cam6_indi_pane_g3_ParamLimits

0x2343,	// (0x000807f7) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0008e010) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0008e010) cam6_indi_pane_g

0x2355,	// (0x00080809) cam6_indi_pane_t1_ParamLimits

0x2355,	// (0x00080809) cam6_indi_pane_t1

0xa256,	// (0x0008870a) cam6_autofocus_pane_g1

0xa24e,	// (0x00088702) cam6_autofocus_pane_g2

0xa266,	// (0x0008871a) cam6_autofocus_pane_g3

0xa25e,	// (0x00088712) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0008e017) cam6_autofocus_pane_g

0x237b,	// (0x0008082f) cam6_timer_pane_g1

0x2383,	// (0x00080837) cam6_timer_pane_t1

0x2391,	// (0x00080845) cam6_zoom_cont_pane

0x2399,	// (0x0008084d) cam6_zoom_pane_g1

0x23a1,	// (0x00080855) cam6_zoom_pane_g2

0xb5d8,	// (0x00089a8c) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0008e020) cam6_zoom_pane_g

0x159d,	// (0x0007fa51) cam6_battery_pane_g1

0x159d,	// (0x0007fa51) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0008db88) cam6_battery_pane_g

0x23a9,	// (0x0008085d) cam6_zoom_cont_pane_g1

0x23b2,	// (0x00080866) cam6_zoom_cont_pane_g2

0x23bb,	// (0x0008086f) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0008e027) cam6_zoom_cont_pane_g

0xb5f5,	// (0x00089aa9) cam6_mode_pane_cp_ParamLimits

0xb5f5,	// (0x00089aa9) cam6_mode_pane_cp

0xb609,	// (0x00089abd) cam6_zoom_pane_cp_ParamLimits

0xb609,	// (0x00089abd) cam6_zoom_pane_cp

0xb61f,	// (0x00089ad3) vid6_image_uncrop_cif_pane_ParamLimits

0xb61f,	// (0x00089ad3) vid6_image_uncrop_cif_pane

0xb641,	// (0x00089af5) vid6_image_uncrop_nhd_pane_ParamLimits

0xb641,	// (0x00089af5) vid6_image_uncrop_nhd_pane

0xb658,	// (0x00089b0c) vid6_image_uncrop_vga_pane_ParamLimits

0xb658,	// (0x00089b0c) vid6_image_uncrop_vga_pane

0xb66f,	// (0x00089b23) vid6_image_uncrop_wvga_pane_ParamLimits

0xb66f,	// (0x00089b23) vid6_image_uncrop_wvga_pane

0xb686,	// (0x00089b3a) vid6_indi_pane_ParamLimits

0xb686,	// (0x00089b3a) vid6_indi_pane

0x22fb,	// (0x000807af) bg_tb_trans_pane_cp09_ParamLimits

0x22fb,	// (0x000807af) bg_tb_trans_pane_cp09

0x23cf,	// (0x00080883) cam6_battery_pane_cp_ParamLimits

0x23cf,	// (0x00080883) cam6_battery_pane_cp

0x23db,	// (0x0008088f) vid6_indi_pane_g1_ParamLimits

0x23db,	// (0x0008088f) vid6_indi_pane_g1

0x23ed,	// (0x000808a1) vid6_indi_pane_g2_ParamLimits

0x23ed,	// (0x000808a1) vid6_indi_pane_g2

0x23ff,	// (0x000808b3) vid6_indi_pane_g3_ParamLimits

0x23ff,	// (0x000808b3) vid6_indi_pane_g3

0x2414,	// (0x000808c8) vid6_indi_pane_g4_ParamLimits

0x2414,	// (0x000808c8) vid6_indi_pane_g4

0x2429,	// (0x000808dd) vid6_indi_pane_g5_ParamLimits

0x2429,	// (0x000808dd) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0008e02e) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0008e02e) vid6_indi_pane_g

0x2443,	// (0x000808f7) vid6_indi_pane_t1_ParamLimits

0x2443,	// (0x000808f7) vid6_indi_pane_t1

0x2459,	// (0x0008090d) vid6_indi_pane_t2_ParamLimits

0x2459,	// (0x0008090d) vid6_indi_pane_t2

0x2481,	// (0x00080935) vid6_indi_pane_t3_ParamLimits

0x2481,	// (0x00080935) vid6_indi_pane_t3

0x24a9,	// (0x0008095d) vid6_indi_pane_t4_ParamLimits

0x24a9,	// (0x0008095d) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0008e039) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0008e039) vid6_indi_pane_t

0x24cd,	// (0x00080981) wait_bar_pane_cp08

0xb6a6,	// (0x00089b5a) main_cset_text2_pane_t1_ParamLimits

0xb6a6,	// (0x00089b5a) main_cset_text2_pane_t1

0xb5e0,	// (0x00089a94) listscroll_gen_pane_cp06_t1_ParamLimits

0xb5e0,	// (0x00089a94) listscroll_gen_pane_cp06_t1

0x552c,	// (0x000839e0) main_cam6_set_pane

0xa13d,	// (0x000885f1) bg_tb_trans_pane_cp06_ParamLimits

0xa153,	// (0x00088607) cam4_indicators_pane_g1_ParamLimits

0xa163,	// (0x00088617) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0008dda7) cam4_indicators_pane_g_ParamLimits

0xa183,	// (0x00088637) cam4_indicators_pane_t1_ParamLimits

0x8339,	// (0x000867ed) bg_tb_trans_pane_cp07_ParamLimits

0xa153,	// (0x00088607) vid4_indicators_pane_g1_ParamLimits

0xa1f7,	// (0x000886ab) vid4_indicators_pane_g2_ParamLimits

0xa207,	// (0x000886bb) vid4_indicators_pane_g3_ParamLimits

0xa218,	// (0x000886cc) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0008ddb9) vid4_indicators_pane_g_ParamLimits

0xa234,	// (0x000886e8) vid4_indicators_pane_t1_ParamLimits

0xb163,	// (0x00089617) vid4_progress_pane_g1_ParamLimits

0xb172,	// (0x00089626) vid4_progress_pane_g2_ParamLimits

0xb181,	// (0x00089635) vid4_progress_pane_g3_ParamLimits

0xb190,	// (0x00089644) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0008df6a) vid4_progress_pane_g_ParamLimits

0xb1a8,	// (0x0008965c) vid4_progress_pane_t1_ParamLimits

0xb1be,	// (0x00089672) vid4_progress_pane_t2_ParamLimits

0xb1d3,	// (0x00089687) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0008df75) vid4_progress_pane_t_ParamLimits

0xb1e8,	// (0x0008969c) wait_bar_pane_cp07_ParamLimits

0xb6c2,	// (0x00089b76) main_cam6_set_pane_g2_ParamLimits

0xb6c2,	// (0x00089b76) main_cam6_set_pane_g2

0xb6ce,	// (0x00089b82) main_cset6_listscroll_pane_ParamLimits

0xb6ce,	// (0x00089b82) main_cset6_listscroll_pane

0xb6f7,	// (0x00089bab) main_cset6_slider_pane_ParamLimits

0xb6f7,	// (0x00089bab) main_cset6_slider_pane

0xb703,	// (0x00089bb7) main_cset6_text2_pane_ParamLimits

0xb703,	// (0x00089bb7) main_cset6_text2_pane

0x24dd,	// (0x00080991) main_cset6_text_pane

0x3ffd,	// (0x000824b1) main_cset_list_pane_copy1_ParamLimits

0x3ffd,	// (0x000824b1) main_cset_list_pane_copy1

0x400d,	// (0x000824c1) scroll_pane_cp028_copy1

0xb716,	// (0x00089bca) cset_list_set_pane_copy1

0xa9bd,	// (0x00088e71) aid_position_infowindow_above_copy1

0xa9c5,	// (0x00088e79) aid_position_infowindow_below_copy1

0xb725,	// (0x00089bd9) cset_list_set_pane_g1_copy1

0xb72d,	// (0x00089be1) cset_list_set_pane_g3_copy1_ParamLimits

0xb72d,	// (0x00089be1) cset_list_set_pane_g3_copy1

0xb73c,	// (0x00089bf0) cset_list_set_pane_t1_copy1_ParamLimits

0xb73c,	// (0x00089bf0) cset_list_set_pane_t1_copy1

0x0260,	// (0x0007e714) list_highlight_pane_cp021_copy1_ParamLimits

0x0260,	// (0x0007e714) list_highlight_pane_cp021_copy1

0x24e5,	// (0x00080999) cset6_slider_pane_ParamLimits

0x24e5,	// (0x00080999) cset6_slider_pane

0x2511,	// (0x000809c5) main_cset6_slider_pane_g1_ParamLimits

0x2511,	// (0x000809c5) main_cset6_slider_pane_g1

0xb751,	// (0x00089c05) main_cset6_slider_pane_g2_ParamLimits

0xb751,	// (0x00089c05) main_cset6_slider_pane_g2

0x4022,	// (0x000824d6) main_cset6_slider_pane_g3_ParamLimits

0x4022,	// (0x000824d6) main_cset6_slider_pane_g3

0xb779,	// (0x00089c2d) main_cset6_slider_pane_g4_ParamLimits

0xb779,	// (0x00089c2d) main_cset6_slider_pane_g4

0xb785,	// (0x00089c39) main_cset6_slider_pane_g5_ParamLimits

0xb785,	// (0x00089c39) main_cset6_slider_pane_g5

0x4022,	// (0x000824d6) main_cset6_slider_pane_g7_ParamLimits

0x4022,	// (0x000824d6) main_cset6_slider_pane_g7

0x402e,	// (0x000824e2) main_cset6_slider_pane_g8_ParamLimits

0x402e,	// (0x000824e2) main_cset6_slider_pane_g8

0xb791,	// (0x00089c45) main_cset6_slider_pane_g9_ParamLimits

0xb791,	// (0x00089c45) main_cset6_slider_pane_g9

0xb79d,	// (0x00089c51) main_cset6_slider_pane_g10_ParamLimits

0xb79d,	// (0x00089c51) main_cset6_slider_pane_g10

0xb779,	// (0x00089c2d) main_cset6_slider_pane_g11_ParamLimits

0xb779,	// (0x00089c2d) main_cset6_slider_pane_g11

0xb7a9,	// (0x00089c5d) main_cset6_slider_pane_g12_ParamLimits

0xb7a9,	// (0x00089c5d) main_cset6_slider_pane_g12

0xb7b5,	// (0x00089c69) main_cset6_slider_pane_g13_ParamLimits

0xb7b5,	// (0x00089c69) main_cset6_slider_pane_g13

0xb7c1,	// (0x00089c75) main_cset6_slider_pane_g14_ParamLimits

0xb7c1,	// (0x00089c75) main_cset6_slider_pane_g14

0xb7cd,	// (0x00089c81) main_cset6_slider_pane_g15_ParamLimits

0xb7cd,	// (0x00089c81) main_cset6_slider_pane_g15

0xb785,	// (0x00089c39) main_cset6_slider_pane_g16_ParamLimits

0xb785,	// (0x00089c39) main_cset6_slider_pane_g16

0xb7e5,	// (0x00089c99) main_cset6_slider_pane_g17_ParamLimits

0xb7e5,	// (0x00089c99) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0008e042) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0008e042) main_cset6_slider_pane_g

0x2539,	// (0x000809ed) main_cset6_slider_pane_t1_ParamLimits

0x2539,	// (0x000809ed) main_cset6_slider_pane_t1

0xb7f1,	// (0x00089ca5) main_cset6_slider_pane_t2_ParamLimits

0xb7f1,	// (0x00089ca5) main_cset6_slider_pane_t2

0x257a,	// (0x00080a2e) main_cset6_slider_pane_t3_ParamLimits

0x257a,	// (0x00080a2e) main_cset6_slider_pane_t3

0xb81c,	// (0x00089cd0) main_cset6_slider_pane_t4_ParamLimits

0xb81c,	// (0x00089cd0) main_cset6_slider_pane_t4

0x25a5,	// (0x00080a59) main_cset6_slider_pane_t5_ParamLimits

0x25a5,	// (0x00080a59) main_cset6_slider_pane_t5

0x25d0,	// (0x00080a84) main_cset6_slider_pane_t7_ParamLimits

0x25d0,	// (0x00080a84) main_cset6_slider_pane_t7

0xb847,	// (0x00089cfb) main_cset6_slider_pane_t8_ParamLimits

0xb847,	// (0x00089cfb) main_cset6_slider_pane_t8

0xb86b,	// (0x00089d1f) main_cset6_slider_pane_t9_ParamLimits

0xb86b,	// (0x00089d1f) main_cset6_slider_pane_t9

0xb88f,	// (0x00089d43) main_cset6_slider_pane_t10_ParamLimits

0xb88f,	// (0x00089d43) main_cset6_slider_pane_t10

0xb8b3,	// (0x00089d67) main_cset6_slider_pane_t11_ParamLimits

0xb8b3,	// (0x00089d67) main_cset6_slider_pane_t11

0x2606,	// (0x00080aba) main_cset6_slider_pane_t14_ParamLimits

0x2606,	// (0x00080aba) main_cset6_slider_pane_t14

0x263f,	// (0x00080af3) main_cset6_slider_pane_t15_ParamLimits

0x263f,	// (0x00080af3) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0008e067) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0008e067) main_cset6_slider_pane_t

0x40e6,	// (0x0008259a) cset_slider_pane_g1_copy1

0x40ef,	// (0x000825a3) cset_slider_pane_g2_copy1

0x40f8,	// (0x000825ac) cset_slider_pane_g3_copy1

0x0205,	// (0x0007e6b9) bg_popup_sub_pane_cp011_copy1

0x4179,	// (0x0008262d) main_cset_text_pane_g1_copy1

0x4181,	// (0x00082635) main_cset_text_pane_t1_copy1

0x418f,	// (0x00082643) main_cset_text_pane_t2_copy1

0x419d,	// (0x00082651) main_cset_text_pane_t3_copy1

0x41ab,	// (0x0008265f) main_cset_text_pane_t4_copy1

0x41b9,	// (0x0008266d) main_cset_text_pane_t5_copy1

0x41c7,	// (0x0008267b) main_cset_text_pane_t6_copy1

0x41d5,	// (0x00082689) main_cset_text_pane_t7_copy1

0xb9a8,	// (0x00089e5c) main_cset_text2_pane_t1_copy1

0x8339,	// (0x000867ed) main_ncimui_pane

0x8392,	// (0x00086846) popup_query_ncimui_window_ParamLimits

0x8392,	// (0x00086846) popup_query_ncimui_window

0x186d,	// (0x0007fd21) field_cale_ev2_pane_g4_ParamLimits

0x186d,	// (0x0007fd21) field_cale_ev2_pane_g4

0x9ab6,	// (0x00087f6a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9ab6,	// (0x00087f6a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0008dd41) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0008dd41) cell_video_dialer_keypad_pane_g

0x9ace,	// (0x00087f82) cell_video_dialer_keypad_pane_t1

0x0205,	// (0x0007e6b9) bg_popup_window_pane_cp012

0xe5a3,	// (0x0008ca57) heading_pane_cp06

0x26a2,	// (0x00080b56) ncim_query_content_pane

0x0205,	// (0x0007e6b9) bg_popup_heading_pane_cp01

0x26aa,	// (0x00080b5e) ncim_heading_pane_t1

0x26b8,	// (0x00080b6c) ncim_indicator_popup_pane

0x26ca,	// (0x00080b7e) ncim_query_button_pane

0x26de,	// (0x00080b92) ncim_query_content_pane_t1

0x26f0,	// (0x00080ba4) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0008e0ab) ncim_query_content_pane_t

0x272a,	// (0x00080bde) ncim_query_list_pane

0x273c,	// (0x00080bf0) ncim_query_popup_pane

0x26b8,	// (0x00080b6c) ncim_indicator_popup_pane_ParamLimits

0xbae9,	// (0x00089f9d) ncim_query_content_pane_g1_ParamLimits

0xbae9,	// (0x00089f9d) ncim_query_content_pane_g1

0x26de,	// (0x00080b92) ncim_query_content_pane_t1_ParamLimits

0x26f0,	// (0x00080ba4) ncim_query_content_pane_t2_ParamLimits

0xbaf5,	// (0x00089fa9) ncim_query_content_pane_t3_ParamLimits

0xbaf5,	// (0x00089fa9) ncim_query_content_pane_t3

0xbb12,	// (0x00089fc6) ncim_query_content_pane_t4_ParamLimits

0xbb12,	// (0x00089fc6) ncim_query_content_pane_t4

0xbb2f,	// (0x00089fe3) ncim_query_content_pane_t5_ParamLimits

0xbb2f,	// (0x00089fe3) ncim_query_content_pane_t5

0x2702,	// (0x00080bb6) ncim_query_content_pane_t6_ParamLimits

0x2702,	// (0x00080bb6) ncim_query_content_pane_t6

0xfbf7,	// (0x0008e0ab) ncim_query_content_pane_t_ParamLimits

0x272a,	// (0x00080bde) ncim_query_list_pane_ParamLimits

0x273c,	// (0x00080bf0) ncim_query_popup_pane_ParamLimits

0x2750,	// (0x00080c04) wait_bar_pane_cp04

0x0205,	// (0x0007e6b9) input_focus_pane_cp011

0x2758,	// (0x00080c0c) ncim_query_popup_pane_t1

0x2766,	// (0x00080c1a) ncim_list_query_list_pane_ParamLimits

0x2766,	// (0x00080c1a) ncim_list_query_list_pane

0x0205,	// (0x0007e6b9) bg_button_pane_cp027

0x2779,	// (0x00080c2d) ncim_query_button_pane_g1

0x0205,	// (0x0007e6b9) list_highlight_pane_cp012

0x2783,	// (0x00080c37) ncim_list_query_list_pane_g1

0x278b,	// (0x00080c3f) ncim_list_query_list_pane_t1

0xa173,	// (0x00088627) cam4_indicators_pane_g3_ParamLimits

0xa173,	// (0x00088627) cam4_indicators_pane_g3

0xa224,	// (0x000886d8) vid4_indicators_pane_g5_ParamLimits

0xa224,	// (0x000886d8) vid4_indicators_pane_g5

0xb19c,	// (0x00089650) vid4_progress_pane_g5_ParamLimits

0xb19c,	// (0x00089650) vid4_progress_pane_g5

0xb9d9,	// (0x00089e8d) main_ncimui_pane_g1

0xba3f,	// (0x00089ef3) ncimui_group_query_pane_ParamLimits

0xba3f,	// (0x00089ef3) ncimui_group_query_pane

0xba87,	// (0x00089f3b) ncimui_list_pane_ParamLimits

0xba87,	// (0x00089f3b) ncimui_list_pane

0xbaac,	// (0x00089f60) ncimui_text_pane_ParamLimits

0xbaac,	// (0x00089f60) ncimui_text_pane

0xbb4c,	// (0x0008a000) ncimui_text_pane_t1_ParamLimits

0xbb4c,	// (0x0008a000) ncimui_text_pane_t1

0x27a2,	// (0x00080c56) ncimui_list_single_graphic_pane_ParamLimits

0x27a2,	// (0x00080c56) ncimui_list_single_graphic_pane

0xbb6a,	// (0x0008a01e) ncimui_query_pane_ParamLimits

0xbb6a,	// (0x0008a01e) ncimui_query_pane

0x0205,	// (0x0007e6b9) list_highlight_pane_cp013

0x27b2,	// (0x00080c66) ncim_list_query_list_pane_t1_copy1

0x27c0,	// (0x00080c74) ncim_list_single_graphic_pane_g1

0x27c8,	// (0x00080c7c) ncim_query_button_pane_cp01

0x27d4,	// (0x00080c88) ncim_query_entry_pane_ParamLimits

0x27d4,	// (0x00080c88) ncim_query_entry_pane

0x27e7,	// (0x00080c9b) ncimui_query_pane_g1

0x27f3,	// (0x00080ca7) ncimui_query_pane_t1_ParamLimits

0x27f3,	// (0x00080ca7) ncimui_query_pane_t1

0x0260,	// (0x0007e714) input_focus_pane_cp012

0x280c,	// (0x00080cc0) ncim_query_entry_pane_t1

0xdcae,	// (0x0008c162) main_im_pane_ParamLimits

0x8339,	// (0x000867ed) main_mobtv_pane_ParamLimits

0x8339,	// (0x000867ed) main_mobtv_pane

0xb791,	// (0x00089c45) main_cset6_slider_pane_g18_ParamLimits

0xb791,	// (0x00089c45) main_cset6_slider_pane_g18

0xb7b5,	// (0x00089c69) main_cset6_slider_pane_g19_ParamLimits

0xb7b5,	// (0x00089c69) main_cset6_slider_pane_g19

0x1fae,	// (0x00080462) bg_main_mobtv_pane_ParamLimits

0x1fae,	// (0x00080462) bg_main_mobtv_pane

0xbb7a,	// (0x0008a02e) main_mobtv_info_pane

0xbb83,	// (0x0008a037) main_mobtv_loading_pane_ParamLimits

0xbb83,	// (0x0008a037) main_mobtv_loading_pane

0x282c,	// (0x00080ce0) main_mobtv_pg_channel_list_pane

0x2836,	// (0x00080cea) main_mobtv_pg_hdr_pane

0xbb90,	// (0x0008a044) main_mobtv_programe_curr_pane_ParamLimits

0xbb90,	// (0x0008a044) main_mobtv_programe_curr_pane

0xbb9d,	// (0x0008a051) main_mobtv_programe_next_pane_ParamLimits

0xbb9d,	// (0x0008a051) main_mobtv_programe_next_pane

0x283f,	// (0x00080cf3) popup_mobtv_noti_window

0x159d,	// (0x0007fa51) main_tv_pg_hdr_pane_g1

0x2847,	// (0x00080cfb) main_tv_pg_hdr_pane_g2

0x284f,	// (0x00080d03) main_tv_pg_hdr_pane_g3

0x2857,	// (0x00080d0b) main_tv_pg_hdr_pane_g4

0x285f,	// (0x00080d13) main_tv_pg_hdr_pane_g5

0x2867,	// (0x00080d1b) main_tv_pg_hdr_pane_g6

0x286f,	// (0x00080d23) main_tv_pg_hdr_pane_g7

0x2877,	// (0x00080d2b) main_tv_pg_hdr_pane_g8

0x287f,	// (0x00080d33) main_tv_pg_hdr_pane_g9

0x2887,	// (0x00080d3b) main_tv_pg_hdr_pane_g10

0x2891,	// (0x00080d45) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0008e0b8) main_tv_pg_hdr_pane_g

0x289b,	// (0x00080d4f) main_tv_pg_hdr_pane_t1

0x28a9,	// (0x00080d5d) main_tv_pg_hdr_pane_t2

0x28b7,	// (0x00080d6b) main_tv_pg_hdr_pane_t3

0x28c5,	// (0x00080d79) main_tv_pg_hdr_pane_t4

0x28d3,	// (0x00080d87) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x0008e0cf) main_tv_pg_hdr_pane_t

0x28e1,	// (0x00080d95) single_mobtv_pg_channel_pane_ParamLimits

0x28e1,	// (0x00080d95) single_mobtv_pg_channel_pane

0x28f3,	// (0x00080da7) single_mobtv_pg_channel_table_pane

0x28fc,	// (0x00080db0) single_mobtv_pg_channel_thumb_pane

0x2905,	// (0x00080db9) single_tv_pg_channel_pane_g1

0x290e,	// (0x00080dc2) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x0008e0da) single_tv_pg_channel_pane_g

0x17cc,	// (0x0007fc80) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x17cc,	// (0x0007fc80) bg_single_mobtv_pg_channel_thumb_pane

0x2917,	// (0x00080dcb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2917,	// (0x00080dcb) single_mobtv_pg_channel_thumb_pane_g1

0x2925,	// (0x00080dd9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2925,	// (0x00080dd9) single_mobtv_pg_channel_thumb_pane_g2

0x2931,	// (0x00080de5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2931,	// (0x00080de5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x0008e0df) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x0008e0df) single_mobtv_pg_channel_thumb_pane_g

0x293d,	// (0x00080df1) single_mobtv_pg_channel_thumb_pane_t1

0x294b,	// (0x00080dff) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0008e0e6) single_mobtv_pg_channel_thumb_pane_t

0x159d,	// (0x0007fa51) bg_single_mobtv_pg_channel_table_pane_g1

0x159d,	// (0x0007fa51) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0008db88) bg_single_mobtv_pg_channel_table_pane_g

0x2959,	// (0x00080e0d) single_mobtv_pg_channel_table_pane_t1

0x2967,	// (0x00080e1b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x0008e0eb) single_mobtv_pg_channel_table_pane_t

0xbbb2,	// (0x0008a066) main_mobtv_info_pane_g1_ParamLimits

0xbbb2,	// (0x0008a066) main_mobtv_info_pane_g1

0xbbce,	// (0x0008a082) main_mobtv_info_pane_t1_ParamLimits

0xbbce,	// (0x0008a082) main_mobtv_info_pane_t1

0xbc34,	// (0x0008a0e8) main_mobtv_info_pane_t2_ParamLimits

0xbc34,	// (0x0008a0e8) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0008e0f5) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0008e0f5) main_mobtv_info_pane_t

0xbcb7,	// (0x0008a16b) wait_bar_pane_cp05

0xbcc7,	// (0x0008a17b) main_mobtv_loading_pane_g1_ParamLimits

0xbcc7,	// (0x0008a17b) main_mobtv_loading_pane_g1

0xbcd3,	// (0x0008a187) main_mobtv_loading_pane_g2_ParamLimits

0xbcd3,	// (0x0008a187) main_mobtv_loading_pane_g2

0xbcdf,	// (0x0008a193) main_mobtv_loading_pane_g3_ParamLimits

0xbcdf,	// (0x0008a193) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x0008e0fc) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x0008e0fc) main_mobtv_loading_pane_g

0x2975,	// (0x00080e29) main_mobtv_loading_pane_t1_ParamLimits

0x2975,	// (0x00080e29) main_mobtv_loading_pane_t1

0x298d,	// (0x00080e41) main_mobtv_loading_pane_t2_ParamLimits

0x298d,	// (0x00080e41) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x0008e103) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x0008e103) main_mobtv_loading_pane_t

0xbceb,	// (0x0008a19f) wait_bar_pane_cp06_ParamLimits

0xbceb,	// (0x0008a19f) wait_bar_pane_cp06

0x29b1,	// (0x00080e65) main_mobtv_programe_curr_pane_t1

0x29bf,	// (0x00080e73) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x0008e108) main_mobtv_programe_curr_pane_t

0x29cd,	// (0x00080e81) main_mobtv_programe_next_pane_t1

0x29db,	// (0x00080e8f) main_mobtv_programe_next_pane_t2

0x29e9,	// (0x00080e9d) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x0008e10d) main_mobtv_programe_next_pane_t

0x0205,	// (0x0007e6b9) bg_popup_mobtv_noti_window_pane

0x29f7,	// (0x00080eab) popup_mobtv_noti_window_g1

0x29ff,	// (0x00080eb3) popup_mobtv_noti_window_t1

0x2a0d,	// (0x00080ec1) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x0008e114) popup_mobtv_noti_window_t

0x159d,	// (0x0007fa51) bg_popup_mobtv_noti_window_pane_g1

0x552c,	// (0x000839e0) sc_clock_pane

0x552c,	// (0x000839e0) main_fs_bigclock_pane

0xb3ce,	// (0x00089882) blid2_tripm_pane_t4_ParamLimits

0xb3ce,	// (0x00089882) blid2_tripm_pane_t4

0xbcf7,	// (0x0008a1ab) sc_clock_pane_g1_ParamLimits

0xbcf7,	// (0x0008a1ab) sc_clock_pane_g1

0xbd05,	// (0x0008a1b9) sc_clock_pane_t1_ParamLimits

0xbd05,	// (0x0008a1b9) sc_clock_pane_t1

0xbd18,	// (0x0008a1cc) sc_clock_pane_t2_ParamLimits

0xbd18,	// (0x0008a1cc) sc_clock_pane_t2

0xbd2a,	// (0x0008a1de) sc_clock_pane_t3_ParamLimits

0xbd2a,	// (0x0008a1de) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x0008e119) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x0008e119) sc_clock_pane_t

0xcb51,	// (0x0008b005) main_fs_bigclock_indicator_pane_ParamLimits

0xcb51,	// (0x0008b005) main_fs_bigclock_indicator_pane

0xbda5,	// (0x0008a259) main_fs_bigclock_pane_g1_ParamLimits

0xbda5,	// (0x0008a259) main_fs_bigclock_pane_g1

0xcb5d,	// (0x0008b011) main_fs_bigclock_pane_t1_ParamLimits

0xcb5d,	// (0x0008b011) main_fs_bigclock_pane_t1

0xcb6f,	// (0x0008b023) main_fs_bigclock_pane_t2_ParamLimits

0xcb6f,	// (0x0008b023) main_fs_bigclock_pane_t2

0xcb81,	// (0x0008b035) main_fs_bigclock_pane_t3_ParamLimits

0xcb81,	// (0x0008b035) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0008e327) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0008e327) main_fs_bigclock_pane_t

0x35ad,	// (0x00081a61) main_fs_bigclock_indicator_pane_g1

0x26d2,	// (0x00080b86) ncim_query_content_pane_g2_ParamLimits

0x26d2,	// (0x00080b86) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0008e0a6) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0008e0a6) ncim_query_content_pane_g

0xbd3c,	// (0x0008a1f0) sc_clock_pane_t4_ParamLimits

0xbd3c,	// (0x0008a1f0) sc_clock_pane_t4

0x8339,	// (0x000867ed) main_radioblah_pane

0xa012,	// (0x000884c6) cell_call4_button_pane_t1_copy1_ParamLimits

0xa012,	// (0x000884c6) cell_call4_button_pane_t1_copy1

0xb9f1,	// (0x00089ea5) main_ncimui_pane_t1_ParamLimits

0xb9f1,	// (0x00089ea5) main_ncimui_pane_t1

0xba0b,	// (0x00089ebf) main_ncimui_pane_t2_ParamLimits

0xba0b,	// (0x00089ebf) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0008e09f) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0008e09f) main_ncimui_pane_t

0x2b4e,	// (0x00081002) main_radioblah_anim_pane_ParamLimits

0x2b4e,	// (0x00081002) main_radioblah_anim_pane

0x2b5f,	// (0x00081013) main_radioblah_info_pane_ParamLimits

0x2b5f,	// (0x00081013) main_radioblah_info_pane

0x2b73,	// (0x00081027) main_radioblah_pane_t1_ParamLimits

0x2b73,	// (0x00081027) main_radioblah_pane_t1

0x2b8f,	// (0x00081043) main_radioblah_pane_t2_ParamLimits

0x2b8f,	// (0x00081043) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x0008e13a) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x0008e13a) main_radioblah_pane_t

0xbded,	// (0x0008a2a1) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbded,	// (0x0008a2a1) main_radioblah_rocker_ctrl_pane

0x2bd7,	// (0x0008108b) main_radioblah_info_pane_t1_ParamLimits

0x2bd7,	// (0x0008108b) main_radioblah_info_pane_t1

0xbe32,	// (0x0008a2e6) main_radioblah_info_pane_t2_ParamLimits

0xbe32,	// (0x0008a2e6) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x0008e143) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x0008e143) main_radioblah_info_pane_t

0x159d,	// (0x0007fa51) main_radioblah_rocker_ctrl_pane_g1

0xbeda,	// (0x0008a38e) main_radioblah_rocker_ctrl_pane_g2

0xbee2,	// (0x0008a396) main_radioblah_rocker_ctrl_pane_g3

0xbeea,	// (0x0008a39e) main_radioblah_rocker_ctrl_pane_g4

0xbef2,	// (0x0008a3a6) main_radioblah_rocker_ctrl_pane_g5

0xbefa,	// (0x0008a3ae) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x0008e14c) main_radioblah_rocker_ctrl_pane_g

0xb9a8,	// (0x00089e5c) main_cset_text2_pane_t1_copy1_ParamLimits

0xa095,	// (0x00088549) cam4_image_uncrop_qvga_pane

0xa1b7,	// (0x0008866b) vid4_image_uncrop_qcif_pane

0xb54c,	// (0x00089a00) cam6_image_uncrop_qvga_pane_ParamLimits

0xb54c,	// (0x00089a00) cam6_image_uncrop_qvga_pane

0x23c3,	// (0x00080877) vid6_image_uncrop_qcif_pane_ParamLimits

0x23c3,	// (0x00080877) vid6_image_uncrop_qcif_pane

0x0205,	// (0x0007e6b9) bg_popup_preview_window_pane_cp03

0x2678,	// (0x00080b2c) list_cset_text2_pane

0x2680,	// (0x00080b34) main_cset6_text2_pane_g1

0x2688,	// (0x00080b3c) main_cset6_text2_pane_t1

0x3947,	// (0x00081dfb) list_cset_text2_pane_t1_ParamLimits

0x3947,	// (0x00081dfb) list_cset_text2_pane_t1

0x8339,	// (0x000867ed) main_radioblah_pane_ParamLimits

0xbca5,	// (0x0008a159) main_mobtv_info_pane_t3_ParamLimits

0xbca5,	// (0x0008a159) main_mobtv_info_pane_t3

0xbddb,	// (0x0008a28f) main_radioblah_pane_g1

0xbe06,	// (0x0008a2ba) main_radioblah_info_pane_g1

0xbe81,	// (0x0008a335) main_radioblah_info_pane_t3_ParamLimits

0xbe81,	// (0x0008a335) main_radioblah_info_pane_t3

0x71d6,	// (0x0008568a) highlight_cell_cale_month_pane_ParamLimits

0x71d6,	// (0x0008568a) highlight_cell_cale_month_pane

0x552c,	// (0x000839e0) main_phob_fisheye_pane

0x191c,	// (0x0007fdd0) scroll_pane_cp0031_ParamLimits

0x191c,	// (0x0007fdd0) scroll_pane_cp0031

0x24cd,	// (0x00080981) wait_bar_pane_cp08_ParamLimits

0xb716,	// (0x00089bca) cset_list_set_pane_copy1_ParamLimits

0x2c11,	// (0x000810c5) highlight_cell_cale_month_pane_g1

0xbf02,	// (0x0008a3b6) highlight_cell_cale_month_pane_t1

0x2c19,	// (0x000810cd) list_gen_pane_cp01

0x400d,	// (0x000824c1) scroll_pane_01

0x3efd,	// (0x000823b1) list_single_double_fisheye_pane

0xbf10,	// (0x0008a3c4) list_double_fisheye_pane_g1_ParamLimits

0xbf10,	// (0x0008a3c4) list_double_fisheye_pane_g1

0xbf1c,	// (0x0008a3d0) list_double_fisheye_pane_g2_ParamLimits

0xbf1c,	// (0x0008a3d0) list_double_fisheye_pane_g2

0xbf30,	// (0x0008a3e4) list_double_fisheye_pane_g3_ParamLimits

0xbf30,	// (0x0008a3e4) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x0008e159) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x0008e159) list_double_fisheye_pane_g

0xbf59,	// (0x0008a40d) list_double_fisheye_pane_t1_ParamLimits

0xbf59,	// (0x0008a40d) list_double_fisheye_pane_t1

0xbf74,	// (0x0008a428) list_double_fisheye_pane_t2_ParamLimits

0xbf74,	// (0x0008a428) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0008e164) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0008e164) list_double_fisheye_pane_t

0x552c,	// (0x000839e0) main_call5_pane

0xbd62,	// (0x0008a216) sc_swipe_pane_ParamLimits

0xbd62,	// (0x0008a216) sc_swipe_pane

0xbfa2,	// (0x0008a456) call5_image_pane_ParamLimits

0xbfa2,	// (0x0008a456) call5_image_pane

0xbfae,	// (0x0008a462) call5_swipe_1_pane_ParamLimits

0xbfae,	// (0x0008a462) call5_swipe_1_pane

0xbfba,	// (0x0008a46e) call5_swipe_2_pane_ParamLimits

0xbfba,	// (0x0008a46e) call5_swipe_2_pane

0xbfd2,	// (0x0008a486) popup_call5_audio_first_window_ParamLimits

0xbfd2,	// (0x0008a486) popup_call5_audio_first_window

0x17cc,	// (0x0007fc80) call5_swipe_1_pane_g1_ParamLimits

0x17cc,	// (0x0007fc80) call5_swipe_1_pane_g1

0x2c22,	// (0x000810d6) call5_swipe_1_pane_g2_ParamLimits

0x2c22,	// (0x000810d6) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x0008e169) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x0008e169) call5_swipe_1_pane_g

0x2c2e,	// (0x000810e2) call5_swipe_1_pane_t1_ParamLimits

0x2c2e,	// (0x000810e2) call5_swipe_1_pane_t1

0x17cc,	// (0x0007fc80) call5_swipe_2_pane_g1_ParamLimits

0x17cc,	// (0x0007fc80) call5_swipe_2_pane_g1

0x2c43,	// (0x000810f7) call5_swipe_2_pane_g2_ParamLimits

0x2c43,	// (0x000810f7) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x0008e16e) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x0008e16e) call5_swipe_2_pane_g

0x2c4f,	// (0x00081103) call5_swipe_2_pane_t1_ParamLimits

0x2c4f,	// (0x00081103) call5_swipe_2_pane_t1

0x2c64,	// (0x00081118) sc_swipe_pane_g1_ParamLimits

0x2c64,	// (0x00081118) sc_swipe_pane_g1

0x2c71,	// (0x00081125) sc_swipe_pane_g2_ParamLimits

0x2c71,	// (0x00081125) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0008e173) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0008e173) sc_swipe_pane_g

0x2c7d,	// (0x00081131) sc_swipe_pane_t1_ParamLimits

0x2c7d,	// (0x00081131) sc_swipe_pane_t1

0x552c,	// (0x000839e0) main_cmail_launcher_pane

0xbfde,	// (0x0008a492) aid_size_cell_cmail_l_ParamLimits

0xbfde,	// (0x0008a492) aid_size_cell_cmail_l

0xbfee,	// (0x0008a4a2) grid_cmail_l_pane_ParamLimits

0xbfee,	// (0x0008a4a2) grid_cmail_l_pane

0xbffa,	// (0x0008a4ae) cell_cmail_l_pane_ParamLimits

0xbffa,	// (0x0008a4ae) cell_cmail_l_pane

0xc00c,	// (0x0008a4c0) cell_cmail_l_pane_g1_ParamLimits

0xc00c,	// (0x0008a4c0) cell_cmail_l_pane_g1

0xc01c,	// (0x0008a4d0) cell_cmail_l_pane_t1_ParamLimits

0xc01c,	// (0x0008a4d0) cell_cmail_l_pane_t1

0xc032,	// (0x0008a4e6) cell_cmail_l_pane_t2_ParamLimits

0xc032,	// (0x0008a4e6) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x0008e178) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x0008e178) cell_cmail_l_pane_t

0x0260,	// (0x0007e714) grid_highlight_pane_cp018_ParamLimits

0x0260,	// (0x0007e714) grid_highlight_pane_cp018

0x53c6,	// (0x0008387a) main2_pane_ParamLimits

0x53c6,	// (0x0008387a) main2_pane

0xdd59,	// (0x0008c20d) popup_sp_fs_action_menu_bg_pane_g1

0xdd61,	// (0x0008c215) popup_sp_fs_action_menu_bg_pane_g2

0xdd69,	// (0x0008c21d) popup_sp_fs_action_menu_bg_pane_g3

0xdd71,	// (0x0008c225) popup_sp_fs_action_menu_bg_pane_g4

0xdd79,	// (0x0008c22d) popup_sp_fs_action_menu_bg_pane_g5

0xdd81,	// (0x0008c235) popup_sp_fs_action_menu_bg_pane_g6

0xdd89,	// (0x0008c23d) popup_sp_fs_action_menu_bg_pane_g7

0xdd91,	// (0x0008c245) popup_sp_fs_action_menu_bg_pane_g8

0xdd99,	// (0x0008c24d) popup_sp_fs_action_menu_bg_pane_g9

0xdda1,	// (0x0008c255) popup_sp_fs_action_menu_bg_pane_g10

0xdda1,	// (0x0008c255) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0008d623) popup_sp_fs_action_menu_bg_pane_g

0x6293,	// (0x00084747) list_medium_line_x2_t3_g3_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x2_t3_g3_g1

0x629f,	// (0x00084753) list_medium_line_x2_t3_g3_g2_ParamLimits

0x629f,	// (0x00084753) list_medium_line_x2_t3_g3_g2

0x62ab,	// (0x0008475f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x62ab,	// (0x0008475f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0008d6d1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0008d6d1) list_medium_line_x2_t3_g3_g

0x62b7,	// (0x0008476b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x62b7,	// (0x0008476b) list_medium_line_x2_t3_g3_t1

0x62cc,	// (0x00084780) list_medium_line_x2_t3_g3_t2_ParamLimits

0x62cc,	// (0x00084780) list_medium_line_x2_t3_g3_t2

0x62de,	// (0x00084792) list_medium_line_x2_t3_g3_t3_ParamLimits

0x62de,	// (0x00084792) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0008d6d8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0008d6d8) list_medium_line_x2_t3_g3_t

0x6293,	// (0x00084747) list_medium_line_x2_t3_g2_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x2_t3_g2_g1

0x62ab,	// (0x0008475f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x62ab,	// (0x0008475f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0008d6df) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0008d6df) list_medium_line_x2_t3_g2_g

0x62f3,	// (0x000847a7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x62f3,	// (0x000847a7) list_medium_line_x2_t3_g2_t1

0x6309,	// (0x000847bd) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6309,	// (0x000847bd) list_medium_line_x2_t3_g2_t2

0x62de,	// (0x00084792) list_medium_line_x2_t3_g2_t3_ParamLimits

0x62de,	// (0x00084792) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0008d6e4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0008d6e4) list_medium_line_x2_t3_g2_t

0x6293,	// (0x00084747) list_medium_line_x2_t4_g4_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x2_t4_g4_g1

0x631b,	// (0x000847cf) list_medium_line_x2_t4_g4_g2_ParamLimits

0x631b,	// (0x000847cf) list_medium_line_x2_t4_g4_g2

0x629f,	// (0x00084753) list_medium_line_x2_t4_g4_g3_ParamLimits

0x629f,	// (0x00084753) list_medium_line_x2_t4_g4_g3

0x6327,	// (0x000847db) list_medium_line_x2_t4_g4_g4_ParamLimits

0x6327,	// (0x000847db) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0008d6eb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0008d6eb) list_medium_line_x2_t4_g4_g

0x6333,	// (0x000847e7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6333,	// (0x000847e7) list_medium_line_x2_t4_g4_t1

0x634d,	// (0x00084801) list_medium_line_x2_t4_g4_t2_ParamLimits

0x634d,	// (0x00084801) list_medium_line_x2_t4_g4_t2

0x6362,	// (0x00084816) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6362,	// (0x00084816) list_medium_line_x2_t4_g4_t3

0x6377,	// (0x0008482b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6377,	// (0x0008482b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0008d6f4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0008d6f4) list_medium_line_x2_t4_g4_t

0x6293,	// (0x00084747) list_medium_line_x2_t2_g4_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x2_t2_g4_g1

0x631b,	// (0x000847cf) list_medium_line_x2_t2_g4_g2_ParamLimits

0x631b,	// (0x000847cf) list_medium_line_x2_t2_g4_g2

0x629f,	// (0x00084753) list_medium_line_x2_t2_g4_g3_ParamLimits

0x629f,	// (0x00084753) list_medium_line_x2_t2_g4_g3

0x62ab,	// (0x0008475f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x62ab,	// (0x0008475f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0008d75b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0008d75b) list_medium_line_x2_t2_g4_g

0x71fc,	// (0x000856b0) list_medium_line_x2_t2_g4_t1_ParamLimits

0x71fc,	// (0x000856b0) list_medium_line_x2_t2_g4_t1

0x62de,	// (0x00084792) list_medium_line_x2_t2_g4_t2_ParamLimits

0x62de,	// (0x00084792) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0008d764) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0008d764) list_medium_line_x2_t2_g4_t

0x6293,	// (0x00084747) list_medium_line_x2_t2_g3_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x2_t2_g3_g1

0x629f,	// (0x00084753) list_medium_line_x2_t2_g3_g2_ParamLimits

0x629f,	// (0x00084753) list_medium_line_x2_t2_g3_g2

0x62ab,	// (0x0008475f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x62ab,	// (0x0008475f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0008d6d1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0008d6d1) list_medium_line_x2_t2_g3_g

0x7211,	// (0x000856c5) list_medium_line_x2_t2_g3_t1_ParamLimits

0x7211,	// (0x000856c5) list_medium_line_x2_t2_g3_t1

0x62de,	// (0x00084792) list_medium_line_x2_t2_g3_t2_ParamLimits

0x62de,	// (0x00084792) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0008d769) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0008d769) list_medium_line_x2_t2_g3_t

0x7392,	// (0x00085846) main_sp_fs_list_pane_ParamLimits

0x7392,	// (0x00085846) main_sp_fs_list_pane

0x739f,	// (0x00085853) sp_fs_scroll_pane_ParamLimits

0x739f,	// (0x00085853) sp_fs_scroll_pane

0x73ac,	// (0x00085860) list_medium_line_x2_t3_t1

0x73bc,	// (0x00085870) list_medium_line_x2_t3_t2

0x73ca,	// (0x0008587e) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0008d7b4) list_medium_line_x2_t3_t

0x73d8,	// (0x0008588c) list_medium_line_x3_t4_t1

0x73e8,	// (0x0008589c) list_medium_line_x3_t4_t2

0x73f6,	// (0x000858aa) list_medium_line_x3_t4_t3

0x7404,	// (0x000858b8) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0008d7bb) list_medium_line_x3_t4_t

0x7412,	// (0x000858c6) list_medium_line_x4_t5_t1

0x7422,	// (0x000858d6) list_medium_line_x4_t5_t2

0x73f6,	// (0x000858aa) list_medium_line_x4_t5_t3

0x7430,	// (0x000858e4) list_medium_line_x4_t5_t4

0x7404,	// (0x000858b8) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0008d7c4) list_medium_line_x4_t5_t

0x6293,	// (0x00084747) list_medium_line_t4_g4_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_t4_g4_g1

0x6327,	// (0x000847db) list_medium_line_t4_g4_g2_ParamLimits

0x6327,	// (0x000847db) list_medium_line_t4_g4_g2

0x743e,	// (0x000858f2) list_medium_line_t4_g4_g3_ParamLimits

0x743e,	// (0x000858f2) list_medium_line_t4_g4_g3

0x62ab,	// (0x0008475f) list_medium_line_t4_g4_g4_ParamLimits

0x62ab,	// (0x0008475f) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0008d7cf) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0008d7cf) list_medium_line_t4_g4_g

0x744a,	// (0x000858fe) list_medium_line_t4_g4_t1_ParamLimits

0x744a,	// (0x000858fe) list_medium_line_t4_g4_t1

0x745f,	// (0x00085913) list_medium_line_t4_g4_t2_ParamLimits

0x745f,	// (0x00085913) list_medium_line_t4_g4_t2

0x7475,	// (0x00085929) list_medium_line_t4_g4_t3_ParamLimits

0x7475,	// (0x00085929) list_medium_line_t4_g4_t3

0x748b,	// (0x0008593f) list_medium_line_t4_g4_t4_ParamLimits

0x748b,	// (0x0008593f) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0008d7d8) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0008d7d8) list_medium_line_t4_g4_t

0x75ae,	// (0x00085a62) chi_dic_find_pane_g1

0x8355,	// (0x00086809) main_tport_pane

0x2061,	// (0x00080515) list_medium_line_plain_t1

0x206f,	// (0x00080523) list_medium_line_t2_g2_g1_ParamLimits

0x206f,	// (0x00080523) list_medium_line_t2_g2_g1

0x3e57,	// (0x0008230b) list_medium_line_t2_g2_g2_ParamLimits

0x3e57,	// (0x0008230b) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0008deb0) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0008deb0) list_medium_line_t2_g2_g

0xaba5,	// (0x00089059) list_medium_line_t2_g2_t1_ParamLimits

0xaba5,	// (0x00089059) list_medium_line_t2_g2_t1

0xabbf,	// (0x00089073) list_medium_line_t2_g2_t2_ParamLimits

0xabbf,	// (0x00089073) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0008deb5) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0008deb5) list_medium_line_t2_g2_t

0x2171,	// (0x00080625) aid_sp_fs_list_icon_a_sm

0x3eec,	// (0x000823a0) aid_sp_fs_list_icon_d

0x2179,	// (0x0008062d) aid_sp_fs_text_primary

0x3ef4,	// (0x000823a8) aid_sp_fs_text_secondary

0x2182,	// (0x00080636) list_medium_line

0x2182,	// (0x00080636) list_medium_line_g2

0x2182,	// (0x00080636) list_medium_line_g3

0x2182,	// (0x00080636) list_medium_line_plain

0x2182,	// (0x00080636) list_medium_line_plain_t2

0x2182,	// (0x00080636) list_medium_line_plain_t3

0x2182,	// (0x00080636) list_medium_line_right_icon

0x2182,	// (0x00080636) list_medium_line_right_iconx2

0x2182,	// (0x00080636) list_medium_line_t2

0x2182,	// (0x00080636) list_medium_line_t2_g2

0x2182,	// (0x00080636) list_medium_line_t2_g3

0x2182,	// (0x00080636) list_medium_line_t2_right_icon

0x2182,	// (0x00080636) list_medium_line_t2_right_iconx2

0x2182,	// (0x00080636) list_medium_line_t3

0x2182,	// (0x00080636) list_medium_line_t3_g2

0x2182,	// (0x00080636) list_medium_line_t3_g3

0x2182,	// (0x00080636) list_medium_line_t3_right_iconx2

0xb1f8,	// (0x000896ac) list_medium_line_t4_g4

0xb201,	// (0x000896b5) list_medium_line_x2

0xb201,	// (0x000896b5) list_medium_line_x2_t2_g2

0xb201,	// (0x000896b5) list_medium_line_x2_t2_g3

0xb201,	// (0x000896b5) list_medium_line_x2_t2_g4

0xb201,	// (0x000896b5) list_medium_line_x2_t3

0xb201,	// (0x000896b5) list_medium_line_x2_t3_g2

0xb201,	// (0x000896b5) list_medium_line_x2_t3_g3

0xb201,	// (0x000896b5) list_medium_line_x2_t3_g4

0xb201,	// (0x000896b5) list_medium_line_x2_t4_g2

0xb201,	// (0x000896b5) list_medium_line_x2_t4_g4

0xb20a,	// (0x000896be) list_medium_line_x3

0xb20a,	// (0x000896be) list_medium_line_x3_t4

0xb20a,	// (0x000896be) list_medium_line_x3_t4_g4

0xb1f8,	// (0x000896ac) list_medium_line_x4_t4

0xb1f8,	// (0x000896ac) list_medium_line_x4_t4_g7

0xb1f8,	// (0x000896ac) list_medium_line_x4_t5

0xb213,	// (0x000896c7) list_single_fs_dyc_pane_ParamLimits

0xb213,	// (0x000896c7) list_single_fs_dyc_pane

0x6293,	// (0x00084747) list_medium_line_x4_t4_g7_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x4_t4_g7_g1

0xb8d7,	// (0x00089d8b) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb8d7,	// (0x00089d8b) list_medium_line_x4_t4_g7_g2

0xb8e3,	// (0x00089d97) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb8e3,	// (0x00089d97) list_medium_line_x4_t4_g7_g3

0xb8f2,	// (0x00089da6) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb8f2,	// (0x00089da6) list_medium_line_x4_t4_g7_g4

0xb8fe,	// (0x00089db2) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb8fe,	// (0x00089db2) list_medium_line_x4_t4_g7_g5

0xb90d,	// (0x00089dc1) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb90d,	// (0x00089dc1) list_medium_line_x4_t4_g7_g6

0xb91c,	// (0x00089dd0) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb91c,	// (0x00089dd0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0008e080) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0008e080) list_medium_line_x4_t4_g7_g

0xb928,	// (0x00089ddc) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb928,	// (0x00089ddc) list_medium_line_x4_t4_g7_t1

0xb93d,	// (0x00089df1) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb93d,	// (0x00089df1) list_medium_line_x4_t4_g7_t2

0xb952,	// (0x00089e06) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb952,	// (0x00089e06) list_medium_line_x4_t4_g7_t3

0xb967,	// (0x00089e1b) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb967,	// (0x00089e1b) list_medium_line_x4_t4_g7_t4

0xb979,	// (0x00089e2d) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb979,	// (0x00089e2d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0008e08f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0008e08f) list_medium_line_x4_t4_g7_t

0xb98b,	// (0x00089e3f) list_single_dyc_row_pane_ParamLimits

0xb98b,	// (0x00089e3f) list_single_dyc_row_pane

0xbf96,	// (0x0008a44a) call5_gesture_pane_ParamLimits

0xbf96,	// (0x0008a44a) call5_gesture_pane

0xbfc6,	// (0x0008a47a) call5_windows_pane_ParamLimits

0xbfc6,	// (0x0008a47a) call5_windows_pane

0xc04a,	// (0x0008a4fe) call5_swipe_1_pane_cp_ParamLimits

0xc04a,	// (0x0008a4fe) call5_swipe_1_pane_cp

0xc056,	// (0x0008a50a) call5_swipe_2_pane_cp_ParamLimits

0xc056,	// (0x0008a50a) call5_swipe_2_pane_cp

0xde85,	// (0x0008c339) call5_image_pane_cp

0xc062,	// (0x0008a516) popup_call5_audio_first_window_cp_ParamLimits

0xc062,	// (0x0008a516) popup_call5_audio_first_window_cp

0x2c64,	// (0x00081118) call5_swipe_1_pane_g1_cp_ParamLimits

0x2c64,	// (0x00081118) call5_swipe_1_pane_g1_cp

0x2c92,	// (0x00081146) call5_swipe_1_pane_g2_cp

0x2c7d,	// (0x00081131) call5_swipe_1_pane_t1_cp_ParamLimits

0x2c7d,	// (0x00081131) call5_swipe_1_pane_t1_cp

0x2c64,	// (0x00081118) call5_swipe_2_pane_g1_cp_ParamLimits

0x2c64,	// (0x00081118) call5_swipe_2_pane_g1_cp

0x2c9a,	// (0x0008114e) call5_swipe_2_pane_g2_cp

0x2ca2,	// (0x00081156) call5_swipe_2_pane_t1_cp_ParamLimits

0x2ca2,	// (0x00081156) call5_swipe_2_pane_t1_cp

0x0260,	// (0x0007e714) main_sp_fs_email_pane

0x2cb7,	// (0x0008116b) main_sp_fs_listscroll_pane_te

0x2cc0,	// (0x00081174) popup_sp_fs_action_menu_pane_ParamLimits

0x2cc0,	// (0x00081174) popup_sp_fs_action_menu_pane

0x159d,	// (0x0007fa51) bg_sp_fs_ctrlbar_pane_g1

0x1b9d,	// (0x00080051) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1baf,	// (0x00080063) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1ba6,	// (0x0008005a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x159d,	// (0x0007fa51) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x0008e17d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x138a,	// (0x0007f83e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x138a,	// (0x0007f83e) bg_sp_fs_ctrlbar_ddmenu_pane

0x2cf4,	// (0x000811a8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2cf4,	// (0x000811a8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2d00,	// (0x000811b4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2d00,	// (0x000811b4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0008e186) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0008e186) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2d0c,	// (0x000811c0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2d0c,	// (0x000811c0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3f12,	// (0x000823c6) list_medium_line_t2_right_icon_g1

0xc06e,	// (0x0008a522) list_medium_line_t2_right_icon_t1

0xc07d,	// (0x0008a531) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x0008e18b) list_medium_line_t2_right_icon_t

0x1089,	// (0x0007f53d) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1089,	// (0x0007f53d) bg_sp_fs_ctrlbar_pane

0xc0e0,	// (0x0008a594) main_sp_fs_ctrlbar_button_pane_cp01

0xc0e8,	// (0x0008a59c) main_sp_fs_ctrlbar_ddmenu_pane

0x2d6e,	// (0x00081222) main_sp_fs_ctrlbar_pane_g1

0x2d7a,	// (0x0008122e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x0008e190) main_sp_fs_ctrlbar_pane_g

0xc122,	// (0x0008a5d6) main_sp_fs_ctrlbar_pane_t1

0xc16a,	// (0x0008a61e) main_sp_fs_ctrlbar_pane

0xc17e,	// (0x0008a632) main_sp_fs_listscroll_pane_te_cp01

0xc18f,	// (0x0008a643) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc18f,	// (0x0008a643) popup_sp_fs_action_menu_pane_cp01

0x0260,	// (0x0007e714) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0260,	// (0x0007e714) bg_sp_fs_highlight_list_pane_cp01

0x2da1,	// (0x00081255) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2da1,	// (0x00081255) sp_fs_action_menu_list_gene_pane_g1

0x2db0,	// (0x00081264) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2db0,	// (0x00081264) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0008e19e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0008e19e) sp_fs_action_menu_list_gene_pane_g

0x2dbd,	// (0x00081271) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2dbd,	// (0x00081271) sp_fs_action_menu_list_gene_pane_t1

0x2dd5,	// (0x00081289) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2dd5,	// (0x00081289) sp_fs_action_menu_list_gene_pane

0x2df4,	// (0x000812a8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2df4,	// (0x000812a8) popup_sp_fs_action_menu_bg_pane

0x2e02,	// (0x000812b6) sp_fs_action_menu_list_pane_ParamLimits

0x2e02,	// (0x000812b6) sp_fs_action_menu_list_pane

0x2e22,	// (0x000812d6) sp_fs_scroll_pane_cp01_ParamLimits

0x2e22,	// (0x000812d6) sp_fs_scroll_pane_cp01

0xc1b9,	// (0x0008a66d) list_medium_line_plain_t2_t1

0xc1c8,	// (0x0008a67c) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0008e1a3) list_medium_line_plain_t2_t

0xc1d6,	// (0x0008a68a) list_medium_line_plain_t3_t1

0xc1e6,	// (0x0008a69a) list_medium_line_plain_t3_t2

0xc1f4,	// (0x0008a6a8) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0008e1a8) list_medium_line_plain_t3_t

0x6293,	// (0x00084747) list_medium_line_x2_t2_g2_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x2_t2_g2_g1

0x62ab,	// (0x0008475f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x62ab,	// (0x0008475f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0008d6df) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0008d6df) list_medium_line_x2_t2_g2_g

0x744a,	// (0x000858fe) list_medium_line_x2_t2_g2_t1_ParamLimits

0x744a,	// (0x000858fe) list_medium_line_x2_t2_g2_t1

0x62de,	// (0x00084792) list_medium_line_x2_t2_g2_t2_ParamLimits

0x62de,	// (0x00084792) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0008e1af) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0008e1af) list_medium_line_x2_t2_g2_t

0x6293,	// (0x00084747) list_medium_line_x2_t4_g2_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x2_t4_g2_g1

0xc202,	// (0x0008a6b6) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc202,	// (0x0008a6b6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0008e1b4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0008e1b4) list_medium_line_x2_t4_g2_g

0xc213,	// (0x0008a6c7) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc213,	// (0x0008a6c7) list_medium_line_x2_t4_g2_t1

0xc22d,	// (0x0008a6e1) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc22d,	// (0x0008a6e1) list_medium_line_x2_t4_g2_t2

0xc242,	// (0x0008a6f6) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc242,	// (0x0008a6f6) list_medium_line_x2_t4_g2_t3

0x62de,	// (0x00084792) list_medium_line_x2_t4_g2_t4_ParamLimits

0x62de,	// (0x00084792) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0008e1b9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0008e1b9) list_medium_line_x2_t4_g2_t

0x3f1a,	// (0x000823ce) list_medium_line_t3_right_iconx2_g1

0x3f12,	// (0x000823c6) list_medium_line_t3_right_iconx2_g2

0xc257,	// (0x0008a70b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0008e1c2) list_medium_line_t3_right_iconx2_g

0x2d26,	// (0x000811da) list_medium_line_t3_right_iconx2_t1

0xc25f,	// (0x0008a713) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0008e1c9) list_medium_line_t3_right_iconx2_t

0x6293,	// (0x00084747) list_medium_line_x3_t4_g4_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x3_t4_g4_g1

0x629f,	// (0x00084753) list_medium_line_x3_t4_g4_g2_ParamLimits

0x629f,	// (0x00084753) list_medium_line_x3_t4_g4_g2

0x6327,	// (0x000847db) list_medium_line_x3_t4_g4_g3_ParamLimits

0x6327,	// (0x000847db) list_medium_line_x3_t4_g4_g3

0xc26d,	// (0x0008a721) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc26d,	// (0x0008a721) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0008e1ce) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0008e1ce) list_medium_line_x3_t4_g4_g

0xc279,	// (0x0008a72d) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc279,	// (0x0008a72d) list_medium_line_x3_t4_g4_t1

0xc290,	// (0x0008a744) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc290,	// (0x0008a744) list_medium_line_x3_t4_g4_t2

0xc2a5,	// (0x0008a759) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc2a5,	// (0x0008a759) list_medium_line_x3_t4_g4_t3

0xc2ba,	// (0x0008a76e) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc2ba,	// (0x0008a76e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0008e1d7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0008e1d7) list_medium_line_x3_t4_g4_t

0xc2d7,	// (0x0008a78b) list_single_dyc_row_text_pane_t1_ParamLimits

0xc2d7,	// (0x0008a78b) list_single_dyc_row_text_pane_t1

0xc30e,	// (0x0008a7c2) list_single_dyc_row_text_pane_t2_ParamLimits

0xc30e,	// (0x0008a7c2) list_single_dyc_row_text_pane_t2

0x2e48,	// (0x000812fc) list_single_dyc_row_text_pane_t3_ParamLimits

0x2e48,	// (0x000812fc) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0008e1e0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0008e1e0) list_single_dyc_row_text_pane_t

0x2e6c,	// (0x00081320) list_single_dyc_row_pane_g1_ParamLimits

0x2e6c,	// (0x00081320) list_single_dyc_row_pane_g1

0x2e78,	// (0x0008132c) list_single_dyc_row_pane_g2_ParamLimits

0x2e78,	// (0x0008132c) list_single_dyc_row_pane_g2

0x2e84,	// (0x00081338) list_single_dyc_row_pane_g3_ParamLimits

0x2e84,	// (0x00081338) list_single_dyc_row_pane_g3

0x2e90,	// (0x00081344) list_single_dyc_row_pane_g4_ParamLimits

0x2e90,	// (0x00081344) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0008e1ed) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0008e1ed) list_single_dyc_row_pane_g

0x2e9c,	// (0x00081350) list_single_dyc_row_text_pane_ParamLimits

0x2e9c,	// (0x00081350) list_single_dyc_row_text_pane

0x0205,	// (0x0007e6b9) bg_sp_fs_scroll_pane

0x2ebb,	// (0x0008136f) thumb_sp_fs_scroll_pane

0x206f,	// (0x00080523) list_medium_line_g1_ParamLimits

0x206f,	// (0x00080523) list_medium_line_g1

0x2ec4,	// (0x00081378) list_medium_line_t1_ParamLimits

0x2ec4,	// (0x00081378) list_medium_line_t1

0x6293,	// (0x00084747) list_medium_line_x2_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x2_g1

0x629f,	// (0x00084753) list_medium_line_x2_g2_ParamLimits

0x629f,	// (0x00084753) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0008e1f6) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0008e1f6) list_medium_line_x2_g

0x2ed9,	// (0x0008138d) list_medium_line_x2_t1_ParamLimits

0x2ed9,	// (0x0008138d) list_medium_line_x2_t1

0x6293,	// (0x00084747) list_medium_line_x3_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x3_g1

0x629f,	// (0x00084753) list_medium_line_x3_g2_ParamLimits

0x629f,	// (0x00084753) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0008e1f6) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0008e1f6) list_medium_line_x3_g

0x2ed9,	// (0x0008138d) list_medium_line_x3_t1_ParamLimits

0x2ed9,	// (0x0008138d) list_medium_line_x3_t1

0x2eef,	// (0x000813a3) thumb_sp_fs_scroll_pane_g1

0x2ef8,	// (0x000813ac) thumb_sp_fs_scroll_pane_g2

0x2f01,	// (0x000813b5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0008e1fb) thumb_sp_fs_scroll_pane_g

0x2eef,	// (0x000813a3) bg_sp_fs_scroll_pane_g1

0x2ef8,	// (0x000813ac) bg_sp_fs_scroll_pane_g2

0x2f01,	// (0x000813b5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0008e1fb) bg_sp_fs_scroll_pane_g

0x6293,	// (0x00084747) list_medium_line_x2_t3_g4_g1_ParamLimits

0x6293,	// (0x00084747) list_medium_line_x2_t3_g4_g1

0x631b,	// (0x000847cf) list_medium_line_x2_t3_g4_g2_ParamLimits

0x631b,	// (0x000847cf) list_medium_line_x2_t3_g4_g2

0x629f,	// (0x00084753) list_medium_line_x2_t3_g4_g3_ParamLimits

0x629f,	// (0x00084753) list_medium_line_x2_t3_g4_g3

0x62ab,	// (0x0008475f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x62ab,	// (0x0008475f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0008d75b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0008d75b) list_medium_line_x2_t3_g4_g

0xc42e,	// (0x0008a8e2) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc42e,	// (0x0008a8e2) list_medium_line_x2_t3_g4_t1

0xc444,	// (0x0008a8f8) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc444,	// (0x0008a8f8) list_medium_line_x2_t3_g4_t2

0x62de,	// (0x00084792) list_medium_line_x2_t3_g4_t3_ParamLimits

0x62de,	// (0x00084792) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0008e202) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0008e202) list_medium_line_x2_t3_g4_t

0x206f,	// (0x00080523) list_medium_line_g2_g1_ParamLimits

0x206f,	// (0x00080523) list_medium_line_g2_g1

0x3e57,	// (0x0008230b) list_medium_line_g2_g2_ParamLimits

0x3e57,	// (0x0008230b) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0008deb0) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0008deb0) list_medium_line_g2_g

0x2f0a,	// (0x000813be) list_medium_line_g2_t1_ParamLimits

0x2f0a,	// (0x000813be) list_medium_line_g2_t1

0x206f,	// (0x00080523) list_medium_line_t3_g2_g1_ParamLimits

0x206f,	// (0x00080523) list_medium_line_t3_g2_g1

0x3e57,	// (0x0008230b) list_medium_line_t3_g2_g2_ParamLimits

0x3e57,	// (0x0008230b) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0008deb0) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0008deb0) list_medium_line_t3_g2_g

0x2f2d,	// (0x000813e1) list_medium_line_t3_g2_t1_ParamLimits

0x2f2d,	// (0x000813e1) list_medium_line_t3_g2_t1

0xc45d,	// (0x0008a911) list_medium_line_t3_g2_t2_ParamLimits

0xc45d,	// (0x0008a911) list_medium_line_t3_g2_t2

0xc472,	// (0x0008a926) list_medium_line_t3_g2_t3_ParamLimits

0xc472,	// (0x0008a926) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0008e209) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0008e209) list_medium_line_t3_g2_t

0x3f12,	// (0x000823c6) list_medium_line_right_icon_g1

0x2f1f,	// (0x000813d3) list_medium_line_right_icon_t1

0x206f,	// (0x00080523) list_medium_line_t2_g1_ParamLimits

0x206f,	// (0x00080523) list_medium_line_t2_g1

0xc488,	// (0x0008a93c) list_medium_line_t2_t1_ParamLimits

0xc488,	// (0x0008a93c) list_medium_line_t2_t1

0xc4a2,	// (0x0008a956) list_medium_line_t2_t2_ParamLimits

0xc4a2,	// (0x0008a956) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0008e210) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0008e210) list_medium_line_t2_t

0x206f,	// (0x00080523) list_medium_line_t3_g1_ParamLimits

0x206f,	// (0x00080523) list_medium_line_t3_g1

0xc4b7,	// (0x0008a96b) list_medium_line_t3_t1_ParamLimits

0xc4b7,	// (0x0008a96b) list_medium_line_t3_t1

0xc4d1,	// (0x0008a985) list_medium_line_t3_t2_ParamLimits

0xc4d1,	// (0x0008a985) list_medium_line_t3_t2

0xc4e6,	// (0x0008a99a) list_medium_line_t3_t3_ParamLimits

0xc4e6,	// (0x0008a99a) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0008e215) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0008e215) list_medium_line_t3_t

0x206f,	// (0x00080523) list_medium_line_g3_g1_ParamLimits

0x206f,	// (0x00080523) list_medium_line_g3_g1

0x3f22,	// (0x000823d6) list_medium_line_g3_g2_ParamLimits

0x3f22,	// (0x000823d6) list_medium_line_g3_g2

0x3e57,	// (0x0008230b) list_medium_line_g3_g3_ParamLimits

0x3e57,	// (0x0008230b) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0008e21c) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0008e21c) list_medium_line_g3_g

0x2f47,	// (0x000813fb) list_medium_line_g3_t1_ParamLimits

0x2f47,	// (0x000813fb) list_medium_line_g3_t1

0x206f,	// (0x00080523) list_medium_line_t2_g3_g1_ParamLimits

0x206f,	// (0x00080523) list_medium_line_t2_g3_g1

0x3f22,	// (0x000823d6) list_medium_line_t2_g3_g2_ParamLimits

0x3f22,	// (0x000823d6) list_medium_line_t2_g3_g2

0x3e57,	// (0x0008230b) list_medium_line_t2_g3_g3_ParamLimits

0x3e57,	// (0x0008230b) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0008e21c) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0008e21c) list_medium_line_t2_g3_g

0xc4fb,	// (0x0008a9af) list_medium_line_t2_g3_t1_ParamLimits

0xc4fb,	// (0x0008a9af) list_medium_line_t2_g3_t1

0xc512,	// (0x0008a9c6) list_medium_line_t2_g3_t2_ParamLimits

0xc512,	// (0x0008a9c6) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0008e223) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0008e223) list_medium_line_t2_g3_t

0x206f,	// (0x00080523) list_medium_line_t3_g3_g1_ParamLimits

0x206f,	// (0x00080523) list_medium_line_t3_g3_g1

0x3f22,	// (0x000823d6) list_medium_line_t3_g3_g2_ParamLimits

0x3f22,	// (0x000823d6) list_medium_line_t3_g3_g2

0x3e57,	// (0x0008230b) list_medium_line_t3_g3_g3_ParamLimits

0x3e57,	// (0x0008230b) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0008e21c) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0008e21c) list_medium_line_t3_g3_g

0xc527,	// (0x0008a9db) list_medium_line_t3_g3_t1_ParamLimits

0xc527,	// (0x0008a9db) list_medium_line_t3_g3_t1

0xc53b,	// (0x0008a9ef) list_medium_line_t3_g3_t2_ParamLimits

0xc53b,	// (0x0008a9ef) list_medium_line_t3_g3_t2

0xc54d,	// (0x0008aa01) list_medium_line_t3_g3_t3_ParamLimits

0xc54d,	// (0x0008aa01) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0008e228) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0008e228) list_medium_line_t3_g3_t

0x3f1a,	// (0x000823ce) list_medium_line_right_iconx2_g1

0x3f12,	// (0x000823c6) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0008e22f) list_medium_line_right_iconx2_g

0x3f2e,	// (0x000823e2) list_medium_line_right_iconx2_t1

0x3f1a,	// (0x000823ce) list_medium_line_t2_right_iconx2_g1

0x3f12,	// (0x000823c6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0008e22f) list_medium_line_t2_right_iconx2_g

0xc55f,	// (0x0008aa13) list_medium_line_t2_right_iconx2_t1

0xc56f,	// (0x0008aa23) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0008e234) list_medium_line_t2_right_iconx2_t

0xc57d,	// (0x0008aa31) list_medium_line_x4_t4_t1

0xc58b,	// (0x0008aa3f) list_medium_line_x4_t4_t2

0xc599,	// (0x0008aa4d) list_medium_line_x4_t4_t3

0xc5a7,	// (0x0008aa5b) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0008e239) list_medium_line_x4_t4_t

0xc5d9,	// (0x0008aa8d) tport_appsw_pane_ParamLimits

0xc5d9,	// (0x0008aa8d) tport_appsw_pane

0xc5e5,	// (0x0008aa99) tport_contact_pane_ParamLimits

0xc5e5,	// (0x0008aa99) tport_contact_pane

0xc5f3,	// (0x0008aaa7) tport_listscroll_pane_ParamLimits

0xc5f3,	// (0x0008aaa7) tport_listscroll_pane

0xc601,	// (0x0008aab5) cell_tport_appsw_pane_ParamLimits

0xc601,	// (0x0008aab5) cell_tport_appsw_pane

0x18a5,	// (0x0007fd59) tport_appsw_pane_g1_ParamLimits

0x18a5,	// (0x0007fd59) tport_appsw_pane_g1

0x2f5c,	// (0x00081410) tport_contact_pane_g1

0x2f65,	// (0x00081419) tport_contact_pane_t1

0x2f73,	// (0x00081427) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0008e242) tport_contact_pane_t

0x2f81,	// (0x00081435) list_tport_pane

0xddb3,	// (0x0008c267) scroll_pane_cp_030

0x2f92,	// (0x00081446) cell_tport_appsw_pane_g1

0x2fa2,	// (0x00081456) cell_tport_appsw_pane_t1

0x2fb0,	// (0x00081464) grid_highlight_pane_cp019

0xc628,	// (0x0008aadc) list_tport_double_graphic_pane_ParamLimits

0xc628,	// (0x0008aadc) list_tport_double_graphic_pane

0x0260,	// (0x0007e714) list_highlight_pane_cp023_ParamLimits

0x0260,	// (0x0007e714) list_highlight_pane_cp023

0xc635,	// (0x0008aae9) list_tport_double_graphic_pane_g1_ParamLimits

0xc635,	// (0x0008aae9) list_tport_double_graphic_pane_g1

0xc642,	// (0x0008aaf6) list_tport_double_graphic_pane_t1_ParamLimits

0xc642,	// (0x0008aaf6) list_tport_double_graphic_pane_t1

0xc657,	// (0x0008ab0b) list_tport_double_graphic_pane_t2_ParamLimits

0xc657,	// (0x0008ab0b) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0008e24e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0008e24e) list_tport_double_graphic_pane_t

0x0205,	// (0x0007e6b9) main_cale_note_pane

0xa3b3,	// (0x00088867) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa3b3,	// (0x00088867) cell_vitu2_function_top_wide_pane_cp01

0xbcb7,	// (0x0008a16b) wait_bar_pane_cp05_ParamLimits

0x0260,	// (0x0007e714) listscroll_cmail_pane

0x2fb8,	// (0x0008146c) list_cmail_pane

0xc669,	// (0x0008ab1d) list_cmail_body_pane

0xc669,	// (0x0008ab1d) list_single_cmail_header_caption_pane

0xc682,	// (0x0008ab36) list_single_cmail_header_detail_pane_ParamLimits

0xc682,	// (0x0008ab36) list_single_cmail_header_detail_pane

0x2fd4,	// (0x00081488) list_single_cmail_header_caption_pane_t1

0xc6ad,	// (0x0008ab61) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc6ad,	// (0x0008ab61) list_single_cmail_header_detail_pane_g1

0x3f3c,	// (0x000823f0) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3f3c,	// (0x000823f0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0008e253) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0008e253) list_single_cmail_header_detail_pane_g

0xc6c3,	// (0x0008ab77) list_single_cmail_header_detail_pane_t1_ParamLimits

0xc6c3,	// (0x0008ab77) list_single_cmail_header_detail_pane_t1

0x301c,	// (0x000814d0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x301c,	// (0x000814d0) list_single_cmail_header_editor_pane_bg

0x3033,	// (0x000814e7) list_cmail_body_pane_g1

0x303c,	// (0x000814f0) list_cmail_body_pane_t1

0x1feb,	// (0x0008049f) list_single_cmail_header_editor_pane_bg_g1

0xe136,	// (0x0008c5ea) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1ffb,	// (0x000804af) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1ff3,	// (0x000804a7) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4132,	// (0x000825e6) list_single_cmail_header_editor_pane_bg_g1_copy4

0x201b,	// (0x000804cf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x200b,	// (0x000804bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2013,	// (0x000804c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe116,	// (0x0008c5ca) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc6ff,	// (0x0008abb3) calenote_gesture_pane_ParamLimits

0xc6ff,	// (0x0008abb3) calenote_gesture_pane

0xc717,	// (0x0008abcb) calenote_window_pane_ParamLimits

0xc717,	// (0x0008abcb) calenote_window_pane

0x304a,	// (0x000814fe) popup_note_window_cp01

0xc72f,	// (0x0008abe3) calenote_swipe_1_pane_ParamLimits

0xc72f,	// (0x0008abe3) calenote_swipe_1_pane

0xc056,	// (0x0008a50a) calenote_swipe_2_pane_ParamLimits

0xc056,	// (0x0008a50a) calenote_swipe_2_pane

0x2c64,	// (0x00081118) calenote_swipe_1_pane_g1_ParamLimits

0x2c64,	// (0x00081118) calenote_swipe_1_pane_g1

0x2c71,	// (0x00081125) calenote_swipe_1_pane_g2_ParamLimits

0x2c71,	// (0x00081125) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0008e173) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0008e173) calenote_swipe_1_pane_g

0x305c,	// (0x00081510) calenote_swipe_1_pane_t1_ParamLimits

0x305c,	// (0x00081510) calenote_swipe_1_pane_t1

0x2c64,	// (0x00081118) calenote_swipe_2_pane_g1_ParamLimits

0x2c64,	// (0x00081118) calenote_swipe_2_pane_g1

0x307b,	// (0x0008152f) calenote_swipe_2_pane_g2_ParamLimits

0x307b,	// (0x0008152f) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0008e25f) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0008e25f) calenote_swipe_2_pane_g

0x3087,	// (0x0008153b) calenote_swipe_2_pane_t1_ParamLimits

0x3087,	// (0x0008153b) calenote_swipe_2_pane_t1

0x0205,	// (0x0007e6b9) main_mup_navstr_pane

0x9218,	// (0x000876cc) main_mup3_pane_t7_ParamLimits

0x9218,	// (0x000876cc) main_mup3_pane_t7

0x9b99,	// (0x0008804d) main_mp4_pane_g6_ParamLimits

0x9b99,	// (0x0008804d) main_mp4_pane_g6

0x9ef3,	// (0x000883a7) main_image3_pane_t4_ParamLimits

0x9ef3,	// (0x000883a7) main_image3_pane_t4

0xc742,	// (0x0008abf6) popup_navstr_preview_pane_ParamLimits

0xc742,	// (0x0008abf6) popup_navstr_preview_pane

0xc74e,	// (0x0008ac02) scroll_navstr_pane_ParamLimits

0xc74e,	// (0x0008ac02) scroll_navstr_pane

0x0205,	// (0x0007e6b9) bg_popup_preview_window_pane_cp04

0x30ae,	// (0x00081562) popup_navstr_preview_pane_t1

0xc75a,	// (0x0008ac0e) scroll_navstr_pane_g1_ParamLimits

0xc75a,	// (0x0008ac0e) scroll_navstr_pane_g1

0xc767,	// (0x0008ac1b) scroll_navstr_pane_t1_ParamLimits

0xc767,	// (0x0008ac1b) scroll_navstr_pane_t1

0x3053,	// (0x00081507) bg_button_pane_cp014

0x3053,	// (0x00081507) bg_button_pane_cp030

0xbf3c,	// (0x0008a3f0) list_double_fisheye_pane_g4_ParamLimits

0xbf3c,	// (0x0008a3f0) list_double_fisheye_pane_g4

0xbf48,	// (0x0008a3fc) list_double_fisheye_pane_g5_ParamLimits

0xbf48,	// (0x0008a3fc) list_double_fisheye_pane_g5

0x2fc8,	// (0x0008147c) sp_fs_scroll_pane_cp03

0x2d6e,	// (0x00081222) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2d7a,	// (0x0008122e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x0008e190) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc122,	// (0x0008a5d6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2fc0,	// (0x00081474) sp_fs_scroll_pane_cp02

0xddc5,	// (0x0008c279) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xddc5,	// (0x0008c279) popup_sp_fs_calendar_preview_list_single_pane

0x0205,	// (0x0007e6b9) main_cam6_pano_pane

0x8339,	// (0x000867ed) main_mup3_pane_ParamLimits

0x0205,	// (0x0007e6b9) main_phacti_pane

0xbbaa,	// (0x0008a05e) bg_button_pane_cp11

0xbbc2,	// (0x0008a076) main_mobtv_info_pane_g2_ParamLimits

0xbbc2,	// (0x0008a076) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x0008e0f0) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x0008e0f0) main_mobtv_info_pane_g

0xbd4e,	// (0x0008a202) sc_clock_pane_t5_ParamLimits

0xbd4e,	// (0x0008a202) sc_clock_pane_t5

0xbddb,	// (0x0008a28f) main_radioblah_pane_g1_ParamLimits

0x2ba7,	// (0x0008105b) main_radioblah_pane_t3_ParamLimits

0x2ba7,	// (0x0008105b) main_radioblah_pane_t3

0x2bbf,	// (0x00081073) main_radioblah_pane_t4_ParamLimits

0x2bbf,	// (0x00081073) main_radioblah_pane_t4

0xbdf9,	// (0x0008a2ad) main_radioblah_text_pane_ParamLimits

0xbdf9,	// (0x0008a2ad) main_radioblah_text_pane

0xbe06,	// (0x0008a2ba) main_radioblah_info_pane_g1_ParamLimits

0xbe93,	// (0x0008a347) main_radioblah_info_pane_t4_ParamLimits

0xbe93,	// (0x0008a347) main_radioblah_info_pane_t4

0x0260,	// (0x0007e714) main_sp_fs_calendar_pane

0xc779,	// (0x0008ac2d) main_phacti_pane_g1

0xc781,	// (0x0008ac35) phacti_note_pane_ParamLimits

0xc781,	// (0x0008ac35) phacti_note_pane

0x30c5,	// (0x00081579) phacti_term_pane_ParamLimits

0x30c5,	// (0x00081579) phacti_term_pane

0x30da,	// (0x0008158e) phacti_note_pane_t1_ParamLimits

0x30da,	// (0x0008158e) phacti_note_pane_t1

0x30f1,	// (0x000815a5) phacti_term_pane_g1

0x30f9,	// (0x000815ad) phacti_term_pane_t1_ParamLimits

0x30f9,	// (0x000815ad) phacti_term_pane_t1

0x3123,	// (0x000815d7) popup_sp_fs_calendar_preview_list_single_pane_g1

0x312b,	// (0x000815df) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0008e269) popup_sp_fs_calendar_preview_list_single_pane_g

0x3133,	// (0x000815e7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3133,	// (0x000815e7) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3149,	// (0x000815fd) aid_popup_sp_fs_bg_corner_pane

0x159d,	// (0x0007fa51) popup_sp_fs_calendar_preview_bg_pane_g1

0x0205,	// (0x0007e6b9) popup_sp_fs_calendar_preview_bg_pane

0x3151,	// (0x00081605) popup_sp_fs_calendar_preview_list_pane

0x1089,	// (0x0007f53d) bg_main_sp_fs_cale_pane_ParamLimits

0x1089,	// (0x0007f53d) bg_main_sp_fs_cale_pane

0x3159,	// (0x0008160d) listscroll_cale_mrui_pane_ParamLimits

0x3159,	// (0x0008160d) listscroll_cale_mrui_pane

0x316e,	// (0x00081622) listscroll_sp_fs_schedule_track_pane

0x3177,	// (0x0008162b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3177,	// (0x0008162b) main_sp_fs_ctrlbar_pane_cp01

0x318a,	// (0x0008163e) main_sp_fs_ribbon_pane

0x3192,	// (0x00081646) popup_sp_fs_cale_preview_window

0xc7d8,	// (0x0008ac8c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc7d8,	// (0x0008ac8c) list_single_sp_fs_schedule_track_pane

0x39a1,	// (0x00081e55) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x39a1,	// (0x00081e55) bg_sp_fs_highlight_list_pane_cp03

0xc7ee,	// (0x0008aca2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc7ee,	// (0x0008aca2) list_single_sp_fs_schedule_track_pane_g1

0xc7fa,	// (0x0008acae) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc7fa,	// (0x0008acae) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0008e26e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0008e26e) list_single_sp_fs_schedule_track_pane_g

0xc806,	// (0x0008acba) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc806,	// (0x0008acba) list_single_sp_fs_schedule_track_pane_t1

0xc81e,	// (0x0008acd2) sp_fs_schedule_track_pane_ParamLimits

0xc81e,	// (0x0008acd2) sp_fs_schedule_track_pane

0x31a4,	// (0x00081658) sp_fs_schedule_track_pane_g1

0x31ac,	// (0x00081660) sp_fs_schedule_track_pane_g2

0x31b4,	// (0x00081668) sp_fs_schedule_track_pane_g3

0x31bc,	// (0x00081670) sp_fs_schedule_track_pane_g4

0x31c4,	// (0x00081678) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0008e273) sp_fs_schedule_track_pane_g

0x1feb,	// (0x0008049f) bg_sp_fs_schedule_viewer_highlight_g1

0xe136,	// (0x0008c5ea) bg_sp_fs_schedule_viewer_highlight_g2

0x1ff3,	// (0x000804a7) bg_sp_fs_schedule_viewer_highlight_g3

0x1ffb,	// (0x000804af) bg_sp_fs_schedule_viewer_highlight_g4

0x4132,	// (0x000825e6) bg_sp_fs_schedule_viewer_highlight_g5

0x200b,	// (0x000804bf) bg_sp_fs_schedule_viewer_highlight_g6

0x2013,	// (0x000804c7) bg_sp_fs_schedule_viewer_highlight_g7

0x201b,	// (0x000804cf) bg_sp_fs_schedule_viewer_highlight_g8

0xe116,	// (0x0008c5ca) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0008e27e) bg_sp_fs_schedule_viewer_highlight_g

0x0205,	// (0x0007e6b9) bg_main_sp_fs_ribbon_pane

0xa122,	// (0x000885d6) main_sp_fs_ribbon_pane_g1

0x31cc,	// (0x00081680) main_sp_fs_ribbon_pane_t1

0xc82e,	// (0x0008ace2) main_sp_fs_ribbon_pane_t2

0x31db,	// (0x0008168f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0008e291) main_sp_fs_ribbon_pane_t

0x31ea,	// (0x0008169e) main_sp_fs_ribbon_scheduler_pane

0x31f2,	// (0x000816a6) bg_main_sp_fs_ribbon_pane_g1

0x31fb,	// (0x000816af) bg_main_sp_fs_ribbon_pane_g2

0x3204,	// (0x000816b8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0008e298) bg_main_sp_fs_ribbon_pane_g

0x320c,	// (0x000816c0) main_sp_fs_ribbon_scheduler_pane_g1

0x3215,	// (0x000816c9) main_sp_fs_ribbon_scheduler_pane_g2

0x321e,	// (0x000816d2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0008e29f) main_sp_fs_ribbon_scheduler_pane_g

0x3227,	// (0x000816db) list_cale_mrui_pane

0xc83d,	// (0x0008acf1) sp_fs_scroll_pane_cp07_ParamLimits

0xc83d,	// (0x0008acf1) sp_fs_scroll_pane_cp07

0xc855,	// (0x0008ad09) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc855,	// (0x0008ad09) bg_sp_fs_schedule_viewer_highlight

0x3234,	// (0x000816e8) list_single_sp_fs_schedule_track_pane_cp01

0x323c,	// (0x000816f0) list_sp_fs_schedule_track_pane

0x3244,	// (0x000816f8) sp_fs_scroll_pane_cp06_ParamLimits

0x3244,	// (0x000816f8) sp_fs_scroll_pane_cp06

0x159d,	// (0x0007fa51) bgmain_sp_fs_calendar_pane_g1

0xc862,	// (0x0008ad16) list_single_cale_mrui_pane_ParamLimits

0xc862,	// (0x0008ad16) list_single_cale_mrui_pane

0x3256,	// (0x0008170a) list_single_cale_mrui_row_pane_ParamLimits

0x3256,	// (0x0008170a) list_single_cale_mrui_row_pane

0x326c,	// (0x00081720) list_single_cale_mrui_row_pane_g1_ParamLimits

0x326c,	// (0x00081720) list_single_cale_mrui_row_pane_g1

0x32b1,	// (0x00081765) list_single_cale_mrui_row_pane_t1_ParamLimits

0x32b1,	// (0x00081765) list_single_cale_mrui_row_pane_t1

0xc883,	// (0x0008ad37) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc883,	// (0x0008ad37) list_single_cale_mrui_row_pane_t2

0x32c3,	// (0x00081777) list_single_cale_mrui_row_pane_t3_ParamLimits

0x32c3,	// (0x00081777) list_single_cale_mrui_row_pane_t3

0x32f2,	// (0x000817a6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x32f2,	// (0x000817a6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0008e2ad) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0008e2ad) list_single_cale_mrui_row_pane_t

0xc8e9,	// (0x0008ad9d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc8e9,	// (0x0008ad9d) list_single_cmail_header_editor_pane_bg_cp01

0xc90d,	// (0x0008adc1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc90d,	// (0x0008adc1) list_single_cmail_header_editor_pane_bg_cp02

0xc92b,	// (0x0008addf) main_radioblah_text_pane_t1_ParamLimits

0xc92b,	// (0x0008addf) main_radioblah_text_pane_t1

0x3321,	// (0x000817d5) cam6_indi_pane_cp01

0x3329,	// (0x000817dd) cam6_mode_pane_cp01

0x3331,	// (0x000817e5) cam6_pano_pane

0x333a,	// (0x000817ee) cam6_zoom_pane_cp01

0x3342,	// (0x000817f6) cam6_pano_image_pane

0x334b,	// (0x000817ff) cam6_pano_pane_g1

0x290e,	// (0x00080dc2) cam6_pano_pane_g2

0x3354,	// (0x00081808) cam6_pano_pane_g3

0x335d,	// (0x00081811) cam6_pano_pane_g4

0x1b8a,	// (0x0008003e) cam6_pano_pane_g5

0x3366,	// (0x0008181a) cam6_pano_pane_g6

0x336e,	// (0x00081822) cam6_pano_pane_g7

0x3376,	// (0x0008182a) cam6_pano_pane_g8

0x337f,	// (0x00081833) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0008e2b6) cam6_pano_pane_g

0x0205,	// (0x0007e6b9) main_browser_tag_pane

0x30a6,	// (0x0008155a) grid_navstr_albumart_pane

0x3388,	// (0x0008183c) cell_navstr_albumart_pane_ParamLimits

0x3388,	// (0x0008183c) cell_navstr_albumart_pane

0xea0c,	// (0x0008cec0) cell_navstr_albumart_pane_g1

0x0e5a,	// (0x0007f30e) cell_navstr_albumart_pane_g2

0x0e6a,	// (0x0007f31e) cell_navstr_albumart_pane_g3

0x0e62,	// (0x0007f316) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0008e2c9) cell_navstr_albumart_pane_g

0xc944,	// (0x0008adf8) bt_list_pane_ParamLimits

0xc944,	// (0x0008adf8) bt_list_pane

0xc959,	// (0x0008ae0d) bt_list_pane_t1

0xc968,	// (0x0008ae1c) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0008e2d2) bt_list_pane_t

0x0205,	// (0x0007e6b9) main_cale_prevew_pane

0xc977,	// (0x0008ae2b) popup_cale_preview_window_ParamLimits

0xc977,	// (0x0008ae2b) popup_cale_preview_window

0x0260,	// (0x0007e714) bg_popup_preview_window_pane_cp05_ParamLimits

0x0260,	// (0x0007e714) bg_popup_preview_window_pane_cp05

0x339f,	// (0x00081853) list_cale_preview_pane_ParamLimits

0x339f,	// (0x00081853) list_cale_preview_pane

0xc98c,	// (0x0008ae40) list_double_cale_preview_pane_ParamLimits

0xc98c,	// (0x0008ae40) list_double_cale_preview_pane

0xc99d,	// (0x0008ae51) list_single_cale_preview_pane_ParamLimits

0xc99d,	// (0x0008ae51) list_single_cale_preview_pane

0xc9b1,	// (0x0008ae65) list_single_cale_preview_pane_g1

0xc9b9,	// (0x0008ae6d) list_single_cale_preview_pane_t1_ParamLimits

0xc9b9,	// (0x0008ae6d) list_single_cale_preview_pane_t1

0x33ab,	// (0x0008185f) list_double_cale_preview_pane_g1

0x33b3,	// (0x00081867) list_double_cale_preview_pane_t1_ParamLimits

0x33b3,	// (0x00081867) list_double_cale_preview_pane_t1

0xc9ce,	// (0x0008ae82) list_double_cale_preview_pane_t2_ParamLimits

0xc9ce,	// (0x0008ae82) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0008e2d7) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0008e2d7) list_double_cale_preview_pane_t

0x0205,	// (0x0007e6b9) main_ezdial_pane

0x0260,	// (0x0007e714) main_sp_fs_email_pane_ParamLimits

0xc08b,	// (0x0008a53f) cmail_ddmenu_btn01_pane_ParamLimits

0xc08b,	// (0x0008a53f) cmail_ddmenu_btn01_pane

0xc0a8,	// (0x0008a55c) cmail_ddmenu_btn02_pane_ParamLimits

0xc0a8,	// (0x0008a55c) cmail_ddmenu_btn02_pane

0xc0c6,	// (0x0008a57a) cmail_ddmenu_btn03_pane_ParamLimits

0xc0c6,	// (0x0008a57a) cmail_ddmenu_btn03_pane

0xc16a,	// (0x0008a61e) main_sp_fs_ctrlbar_pane_ParamLimits

0xc17e,	// (0x0008a632) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc669,	// (0x0008ab1d) list_cmail_body_pane_ParamLimits

0x2fe2,	// (0x00081496) bg_button_pane_cp12

0x2feb,	// (0x0008149f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2feb,	// (0x0008149f) list_single_cmail_header_detail_pane_g3

0x2ff8,	// (0x000814ac) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2ff8,	// (0x000814ac) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0008e25a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0008e25a) list_single_cmail_header_detail_pane_t

0x310e,	// (0x000815c2) phacti_term_pane_t2_ParamLimits

0x310e,	// (0x000815c2) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0008e264) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0008e264) phacti_term_pane_t

0x33c8,	// (0x0008187c) aid_size_list_single_double

0xc9e6,	// (0x0008ae9a) popup_ezdial_listscroll_window

0xc9ff,	// (0x0008aeb3) popup_number_entry_window_cp01

0xde85,	// (0x0008c339) bg_popup_call_pane_cp09

0x33d4,	// (0x00081888) ezdial_list_pane

0x33dc,	// (0x00081890) scroll_pane_cp23

0x138a,	// (0x0007f83e) bg_button_pane_cp028_ParamLimits

0x138a,	// (0x0007f83e) bg_button_pane_cp028

0xca0b,	// (0x0008aebf) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xca0b,	// (0x0008aebf) cmail_ddmenu_btn01_pane_g1

0xca1b,	// (0x0008aecf) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xca1b,	// (0x0008aecf) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0008e2dc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0008e2dc) cmail_ddmenu_btn01_pane_g

0x33e4,	// (0x00081898) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x33e4,	// (0x00081898) cmail_ddmenu_btn01_pane_t1

0x1089,	// (0x0007f53d) bg_button_pane_cp029_ParamLimits

0x1089,	// (0x0007f53d) bg_button_pane_cp029

0xca1b,	// (0x0008aecf) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xca1b,	// (0x0008aecf) cmail_ddmenu_btn02_pane_g1

0xca33,	// (0x0008aee7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xca33,	// (0x0008aee7) cmail_ddmenu_btn02_pane_t1

0x39a1,	// (0x00081e55) bg_button_pane_cp031_ParamLimits

0x39a1,	// (0x00081e55) bg_button_pane_cp031

0xca1b,	// (0x0008aecf) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xca1b,	// (0x0008aecf) cmail_ddmenu_btn03_pane_g1

0xca33,	// (0x0008aee7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xca33,	// (0x0008aee7) cmail_ddmenu_btn03_pane_t1

0x9da2,	// (0x00088256) cell_dialer2_keypad_pane_t1_ParamLimits

0x9dbc,	// (0x00088270) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9dbc,	// (0x00088270) cell_dialer2_keypad_pane_t1_copy1

0xba37,	// (0x00089eeb) ncimui_group_button_pane

0x0260,	// (0x0007e714) main_sp_fs_calendar_pane_ParamLimits

0xc669,	// (0x0008ab1d) list_single_cmail_header_caption_pane_ParamLimits

0x3f48,	// (0x000823fc) aid_recal_txt_sm_pane

0x0205,	// (0x0007e6b9) mian_recal_day_pane

0x3192,	// (0x00081646) popup_sp_fs_cale_preview_window_ParamLimits

0x33f9,	// (0x000818ad) list_recal_day_pane

0x343b,	// (0x000818ef) list_single_recal_day_pane_ParamLimits

0x343b,	// (0x000818ef) list_single_recal_day_pane

0x344d,	// (0x00081901) list_single_recal_day_pane_g1_ParamLimits

0x344d,	// (0x00081901) list_single_recal_day_pane_g1

0x3459,	// (0x0008190d) list_single_recal_day_pane_g2_ParamLimits

0x3459,	// (0x0008190d) list_single_recal_day_pane_g2

0x3465,	// (0x00081919) list_single_recal_day_pane_g3_ParamLimits

0x3465,	// (0x00081919) list_single_recal_day_pane_g3

0xca57,	// (0x0008af0b) list_single_recal_day_pane_g4_ParamLimits

0xca57,	// (0x0008af0b) list_single_recal_day_pane_g4

0x3471,	// (0x00081925) list_single_recal_day_pane_g5_ParamLimits

0x3471,	// (0x00081925) list_single_recal_day_pane_g5

0xca6b,	// (0x0008af1f) list_single_recal_day_pane_g6_ParamLimits

0xca6b,	// (0x0008af1f) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0008e2eb) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0008e2eb) list_single_recal_day_pane_g

0x3485,	// (0x00081939) list_single_recal_day_pane_t1

0xca7a,	// (0x0008af2e) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0008e2f6) list_single_recal_day_pane_t

0xca8f,	// (0x0008af43) ncimui_query_button_pane_ParamLimits

0xca8f,	// (0x0008af43) ncimui_query_button_pane

0xca9f,	// (0x0008af53) ncimui_query_button_pane_t1_ParamLimits

0xca9f,	// (0x0008af53) ncimui_query_button_pane_t1

0x3497,	// (0x0008194b) ncimui_query_button_pane_t2_ParamLimits

0x3497,	// (0x0008194b) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0008e2fb) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0008e2fb) ncimui_query_button_pane_t

0xcab2,	// (0x0008af66) query_button_pane_ParamLimits

0xcab2,	// (0x0008af66) query_button_pane

0x0205,	// (0x0007e6b9) bg_button_pane_cp0028

0x34aa,	// (0x0008195e) query_button_pane_t1

0x8355,	// (0x00086809) main_tport_pane_ParamLimits

0xc5b5,	// (0x0008aa69) bg_popup_window_pane_cp01_ParamLimits

0xc5b5,	// (0x0008aa69) bg_popup_window_pane_cp01

0xc5c1,	// (0x0008aa75) heading_pane_cp08_ParamLimits

0xc5c1,	// (0x0008aa75) heading_pane_cp08

0xc5cd,	// (0x0008aa81) heading_pane_cp07_ParamLimits

0xc5cd,	// (0x0008aa81) heading_pane_cp07

0x2f92,	// (0x00081446) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0008e247) cell_tport_appsw_pane_g

0x0409,	// (0x0007e8bd) input_candi_list_open_g1

0xe2e3,	// (0x0008c797) list_cale_time_pane_g6_ParamLimits

0xe2e3,	// (0x0008c797) list_cale_time_pane_g6

0x8d32,	// (0x000871e6) aid_size_touch_calib_1_ParamLimits

0x8d32,	// (0x000871e6) aid_size_touch_calib_1

0x8d3e,	// (0x000871f2) aid_size_touch_calib_2_ParamLimits

0x8d3e,	// (0x000871f2) aid_size_touch_calib_2

0x8d4a,	// (0x000871fe) aid_size_touch_calib_3_ParamLimits

0x8d4a,	// (0x000871fe) aid_size_touch_calib_3

0x8d58,	// (0x0008720c) aid_size_touch_calib_4_ParamLimits

0x8d58,	// (0x0008720c) aid_size_touch_calib_4

0x8d66,	// (0x0008721a) main_touch_calib_button_group_pane_ParamLimits

0x8d66,	// (0x0008721a) main_touch_calib_button_group_pane

0x8d74,	// (0x00087228) main_touch_calib_pane_g1_ParamLimits

0x8d80,	// (0x00087234) main_touch_calib_pane_g2_ParamLimits

0x8d8c,	// (0x00087240) main_touch_calib_pane_g3_ParamLimits

0x8d98,	// (0x0008724c) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0008dbfd) main_touch_calib_pane_g_ParamLimits

0x8da4,	// (0x00087258) main_touch_calib_pane_t1_ParamLimits

0x8db9,	// (0x0008726d) main_touch_calib_pane_t2_ParamLimits

0x8dce,	// (0x00087282) main_touch_calib_pane_t3_ParamLimits

0x8de0,	// (0x00087294) main_touch_calib_pane_t4_ParamLimits

0x8df2,	// (0x000872a6) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0008dc06) main_touch_calib_pane_t_ParamLimits

0x1940,	// (0x0007fdf4) list_single_fp_cale_pane_g3_ParamLimits

0x1940,	// (0x0007fdf4) list_single_fp_cale_pane_g3

0x8339,	// (0x000867ed) bg_button_pane_cp012_ParamLimits

0x8339,	// (0x000867ed) bg_vkb2_func_pane_cp03_ParamLimits

0xab25,	// (0x00088fd9) cell_vitu2_function_top_pane_g1_ParamLimits

0x8339,	// (0x000867ed) bg_vkb2_func_pane_cp04_ParamLimits

0xb9c3,	// (0x00089e77) main_ncimui_button_group_pane_ParamLimits

0xb9c3,	// (0x00089e77) main_ncimui_button_group_pane

0xba25,	// (0x00089ed9) main_ncimui_pane_t3_ParamLimits

0xba25,	// (0x00089ed9) main_ncimui_pane_t3

0x30bc,	// (0x00081570) phacti_button_group_pane

0x33c8,	// (0x0008187c) aid_size_list_single_double_ParamLimits

0xc9e6,	// (0x0008ae9a) popup_ezdial_listscroll_window_ParamLimits

0xc9ff,	// (0x0008aeb3) popup_number_entry_window_cp01_ParamLimits

0xcabf,	// (0x0008af73) phacti_button_pane_ParamLimits

0xcabf,	// (0x0008af73) phacti_button_pane

0x0205,	// (0x0007e6b9) bg_button_pane_cp14

0x34b8,	// (0x0008196c) phacti_button_pane_t1

0xcace,	// (0x0008af82) main_touch_calib_button_pane_ParamLimits

0xcace,	// (0x0008af82) main_touch_calib_button_pane

0xdcae,	// (0x0008c162) bg_button_pane_cp18_ParamLimits

0xdcae,	// (0x0008c162) bg_button_pane_cp18

0xcadf,	// (0x0008af93) main_touch_calib_button_pane_t1_ParamLimits

0xcadf,	// (0x0008af93) main_touch_calib_button_pane_t1

0xcaf5,	// (0x0008afa9) main_touch_calib_button_pane_t2_ParamLimits

0xcaf5,	// (0x0008afa9) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0008e300) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0008e300) main_touch_calib_button_pane_t

0x0205,	// (0x0007e6b9) cell_ncimui_button_pane

0x0205,	// (0x0007e6b9) bg_button_pane_cp032

0x34c6,	// (0x0008197a) cell_ncimui_button_pane_t1

0x9e0e,	// (0x000882c2) image3_infobar_pane_ParamLimits

0x9e0e,	// (0x000882c2) image3_infobar_pane

0xbd6e,	// (0x0008a222) fs_bigclock_status_pane_ParamLimits

0xbd6e,	// (0x0008a222) fs_bigclock_status_pane

0xbd7b,	// (0x0008a22f) main_fs_bigclock_clock_pane_ParamLimits

0xbd7b,	// (0x0008a22f) main_fs_bigclock_clock_pane

0xbd93,	// (0x0008a247) main_fs_bigclock_indi_pane_ParamLimits

0xbd93,	// (0x0008a247) main_fs_bigclock_indi_pane

0xbdb3,	// (0x0008a267) main_fs_bigclock_swipe_pane_ParamLimits

0xbdb3,	// (0x0008a267) main_fs_bigclock_swipe_pane

0x0205,	// (0x0007e6b9) main_fs_clock_dumped_data

0x2a1b,	// (0x00080ecf) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2a1b,	// (0x00080ecf) list_single_fs_bigclock_indicator_pane_g1

0x2a35,	// (0x00080ee9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2a35,	// (0x00080ee9) list_single_fs_bigclock_indicator_pane_g2

0x2a4f,	// (0x00080f03) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2a4f,	// (0x00080f03) list_single_fs_bigclock_indicator_pane_g3

0x2a69,	// (0x00080f1d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2a69,	// (0x00080f1d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x0008e124) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x0008e124) list_single_fs_bigclock_indicator_pane_g

0x2a92,	// (0x00080f46) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2a92,	// (0x00080f46) list_single_fs_bigclock_indicator_pane_t1

0x2aba,	// (0x00080f6e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2aba,	// (0x00080f6e) list_single_fs_bigclock_indicator_pane_t2

0x2ae2,	// (0x00080f96) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2ae2,	// (0x00080f96) list_single_fs_bigclock_indicator_pane_t3

0x2b0a,	// (0x00080fbe) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2b0a,	// (0x00080fbe) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x0008e12f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x0008e12f) list_single_fs_bigclock_indicator_pane_t

0x34d4,	// (0x00081988) image3_infobar_fav_pane_ParamLimits

0x34d4,	// (0x00081988) image3_infobar_fav_pane

0x34e4,	// (0x00081998) image3_infobar_loc_pane_ParamLimits

0x34e4,	// (0x00081998) image3_infobar_loc_pane

0x34f8,	// (0x000819ac) image3_infobar_time_pane_ParamLimits

0x34f8,	// (0x000819ac) image3_infobar_time_pane

0x159d,	// (0x0007fa51) image3_infobar_time_pane_g1

0x3508,	// (0x000819bc) image3_infobar_time_pane_t1

0x159d,	// (0x0007fa51) image3_infobar_loc_pane_g1

0x3516,	// (0x000819ca) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0008e305) image3_infobar_loc_pane_g

0x351e,	// (0x000819d2) image3_infobar_loc_pane_t1

0x159d,	// (0x0007fa51) image3_infobar_fav_pane_g1

0x352c,	// (0x000819e0) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0008e30a) image3_infobar_fav_pane_g

0x3534,	// (0x000819e8) fs_bigclock_status_battery_pane

0x353d,	// (0x000819f1) fs_bigclock_status_signal_pane

0x3546,	// (0x000819fa) fs_bigclock_status_title_pane

0x354f,	// (0x00081a03) fs_bigclock_status_signal_pane_g1

0x3558,	// (0x00081a0c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0008e30f) fs_bigclock_status_signal_pane_g

0x3560,	// (0x00081a14) fs_bigclock_status_battery_pane_g1

0x3569,	// (0x00081a1d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0008e314) fs_bigclock_status_battery_pane_g

0x3571,	// (0x00081a25) fs_bigclock_status_title_pane_t1

0x18a5,	// (0x0007fd59) main_fs_bigclock_clock_pane_g1

0xcb13,	// (0x0008afc7) main_fs_bigclock_clock_pane_g2

0xcb20,	// (0x0008afd4) main_fs_bigclock_clock_pane_g3

0xcb20,	// (0x0008afd4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0008e319) main_fs_bigclock_clock_pane_g

0xcb2c,	// (0x0008afe0) main_fs_bigclock_clock_pane_t1

0xcb3e,	// (0x0008aff2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0008e322) main_fs_bigclock_clock_pane_t

0x357f,	// (0x00081a33) list_single_fs_bigclock_indicator_pane_ParamLimits

0x357f,	// (0x00081a33) list_single_fs_bigclock_indicator_pane

0x3590,	// (0x00081a44) list_single_fs_bigclock_pane_ParamLimits

0x3590,	// (0x00081a44) list_single_fs_bigclock_pane

0x35b6,	// (0x00081a6a) main_fs_bigclock_indicator_pane_t1

0x35c5,	// (0x00081a79) list_single_fs_bigclock_pane_g1

0x35cd,	// (0x00081a81) list_single_fs_bigclock_pane_t1

0x159d,	// (0x0007fa51) main_fs_bigclock_swipe_pane_g1

0x360d,	// (0x00081ac1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0008e333) main_fs_bigclock_swipe_pane_g

0x3615,	// (0x00081ac9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3615,	// (0x00081ac9) main_fs_bigclock_swipe_pane_t1

0x74a0,	// (0x00085954) call_type_pane_ParamLimits

0x0205,	// (0x0007e6b9) main_btmg_pane

0x3298,	// (0x0008174c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3298,	// (0x0008174c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0008e2a6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0008e2a6) list_single_cale_mrui_row_pane_g

0x3422,	// (0x000818d6) list_recal_vselct_arw_lo_pane

0x342a,	// (0x000818de) list_recal_vselct_arw_up_pane

0x3432,	// (0x000818e6) list_recal_vselct_pane

0x3632,	// (0x00081ae6) btmg_button_pane

0xcb93,	// (0x0008b047) main_btmg_pane_g1

0x0205,	// (0x0007e6b9) bg_button_pane_cp044

0x363a,	// (0x00081aee) btmg_button_pane_t1

0x1075,	// (0x0007f529) aid_listscroll_gen

0x0260,	// (0x0007e714) main_cntbar_detail_pane

0x2fb8,	// (0x0008146c) list_cmail_folder_pane

0x2fc8,	// (0x0008147c) sp_fs_scroll_pane_cp03_ParamLimits

0xcb9b,	// (0x0008b04f) list_single_fs_dyc_pane_cp01_ParamLimits

0xcb9b,	// (0x0008b04f) list_single_fs_dyc_pane_cp01

0x3648,	// (0x00081afc) aid_size_cmail_indent

0x3651,	// (0x00081b05) list_single_dyc_row_pane_cp01

0xcbcd,	// (0x0008b081) cntbar_detail_list_pane_ParamLimits

0xcbcd,	// (0x0008b081) cntbar_detail_list_pane

0xcc03,	// (0x0008b0b7) main_cntbar_detail_cont_pane_ParamLimits

0xcc03,	// (0x0008b0b7) main_cntbar_detail_cont_pane

0xcc0f,	// (0x0008b0c3) scroll_pane_cp032_ParamLimits

0xcc0f,	// (0x0008b0c3) scroll_pane_cp032

0xcc1b,	// (0x0008b0cf) cntbar_detail_list_event_pane_ParamLimits

0xcc1b,	// (0x0008b0cf) cntbar_detail_list_event_pane

0xcbd9,	// (0x0008b08d) cntbar_detail_list_shct_pane

0x365a,	// (0x00081b0e) aid_list_gen

0xddb3,	// (0x0008c267) aid_scroll

0x2168,	// (0x0008061c) aid_size_touch_scroll_bar

0xb201,	// (0x000896b5) aid_list_double

0x2182,	// (0x00080636) aid_list_single

0x2182,	// (0x00080636) aid_list_single_lg

0x3663,	// (0x00081b17) aid_list_z_g_a_sm

0x3a3f,	// (0x00081ef3) aid_list_z_g_d

0x366b,	// (0x00081b1f) aid_txt_z_prm

0xcc2b,	// (0x0008b0df) aid_txt_z_prm_cp01

0xcc39,	// (0x0008b0ed) aid_txt_z_sec

0xcc47,	// (0x0008b0fb) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcc47,	// (0x0008b0fb) main_cntbar_detail_cont_pane_g1

0xcc54,	// (0x0008b108) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcc54,	// (0x0008b108) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0008e338) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0008e338) main_cntbar_detail_cont_pane_g

0x3679,	// (0x00081b2d) main_cntbar_detail_cont_pane_t1

0x3687,	// (0x00081b3b) main_cntbar_detail_cont_pane_t2

0x3695,	// (0x00081b49) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0008e33d) main_cntbar_detail_cont_pane_t

0xcc60,	// (0x0008b114) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcc60,	// (0x0008b114) cell_cntbar_detail_list_shct_pane

0x36a3,	// (0x00081b57) cntbar_detail_list_shct_pane_g1

0x36ac,	// (0x00081b60) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0008e344) cntbar_detail_list_shct_pane_g

0xcc72,	// (0x0008b126) cntbar_detail_list_event_pane_g1_ParamLimits

0xcc72,	// (0x0008b126) cntbar_detail_list_event_pane_g1

0xcc7e,	// (0x0008b132) cntbar_detail_list_event_pane_g2_ParamLimits

0xcc7e,	// (0x0008b132) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0008e349) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0008e349) cntbar_detail_list_event_pane_g

0xccea,	// (0x0008b19e) cntbar_detail_list_event_pane_t1_ParamLimits

0xccea,	// (0x0008b19e) cntbar_detail_list_event_pane_t1

0xccff,	// (0x0008b1b3) cntbar_detail_list_event_pane_t2_ParamLimits

0xccff,	// (0x0008b1b3) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0008e356) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0008e356) cntbar_detail_list_event_pane_t

0x159d,	// (0x0007fa51) cell_cntbar_detail_list_shct_pane_g1

0xe873,	// (0x0008cd27) navi_pane_mv_g3

0x0260,	// (0x0007e714) main_cntbar_detail_pane_ParamLimits

0x0205,	// (0x0007e6b9) main_notif_wgt_pane

0x9ae4,	// (0x00087f98) aid_tch_main_mp4_pane_g4

0x9d23,	// (0x000881d7) popup_slider_window_cp02

0x3418,	// (0x000818cc) list_recal_day_event_pane

0xcbb3,	// (0x0008b067) cntbar_detail_btn_pane_ParamLimits

0xcbb3,	// (0x0008b067) cntbar_detail_btn_pane

0xcbbf,	// (0x0008b073) cntbar_detail_btn_pane_cp01_ParamLimits

0xcbbf,	// (0x0008b073) cntbar_detail_btn_pane_cp01

0xcbd9,	// (0x0008b08d) cntbar_detail_list_shct_pane_ParamLimits

0xcbe5,	// (0x0008b099) cntbar_detail_pane_g1_ParamLimits

0xcbe5,	// (0x0008b099) cntbar_detail_pane_g1

0xcbf1,	// (0x0008b0a5) cntbar_detail_pane_t1_ParamLimits

0xcbf1,	// (0x0008b0a5) cntbar_detail_pane_t1

0xcc8a,	// (0x0008b13e) cntbar_detail_list_event_pane_g3_ParamLimits

0xcc8a,	// (0x0008b13e) cntbar_detail_list_event_pane_g3

0xcca2,	// (0x0008b156) cntbar_detail_list_event_pane_g4_ParamLimits

0xcca2,	// (0x0008b156) cntbar_detail_list_event_pane_g4

0xccba,	// (0x0008b16e) cntbar_detail_list_event_pane_g5_ParamLimits

0xccba,	// (0x0008b16e) cntbar_detail_list_event_pane_g5

0xccd2,	// (0x0008b186) cntbar_detail_list_event_pane_g6_ParamLimits

0xccd2,	// (0x0008b186) cntbar_detail_list_event_pane_g6

0xcd14,	// (0x0008b1c8) cntbar_detail_list_event_pane_t3_ParamLimits

0xcd14,	// (0x0008b1c8) cntbar_detail_list_event_pane_t3

0xcd26,	// (0x0008b1da) popup_notif_wgt_window_ParamLimits

0xcd26,	// (0x0008b1da) popup_notif_wgt_window

0xcd34,	// (0x0008b1e8) popup_submenu_window_cp01_ParamLimits

0xcd34,	// (0x0008b1e8) popup_submenu_window_cp01

0xde85,	// (0x0008c339) bg_popup_window_pane_cp10

0x36b5,	// (0x00081b69) listscroll_notif_wgt_pane

0x36c6,	// (0x00081b7a) list_notif_wgt_window

0x36cf,	// (0x00081b83) scroll_pane_cp033

0xcd40,	// (0x0008b1f4) list_notif_wgt_row_pane_ParamLimits

0xcd40,	// (0x0008b1f4) list_notif_wgt_row_pane

0x36d8,	// (0x00081b8c) aid_size_list_notif_wgt_del

0x36e5,	// (0x00081b99) list_notif_wgt_row_pane_g1

0x36f1,	// (0x00081ba5) list_notif_wgt_row_pane_g2

0x3705,	// (0x00081bb9) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0008e35d) list_notif_wgt_row_pane_g

0x3712,	// (0x00081bc6) list_notif_wgt_row_pane_t1

0x3728,	// (0x00081bdc) list_notif_wgt_row_pane_t2

0x373a,	// (0x00081bee) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0008e364) list_notif_wgt_row_pane_t

0x413a,	// (0x000825ee) list_recal_day_event_pane_g1

0x374c,	// (0x00081c00) list_recal_day_event_pane_t1

0x0205,	// (0x0007e6b9) bg_button_pane_cp045

0xcd52,	// (0x0008b206) cntbar_detail_btn_pane_t1

0x1089,	// (0x0007f53d) main_callh_pane_ParamLimits

0x1089,	// (0x0007f53d) main_callh_pane

0x0205,	// (0x0007e6b9) main_coverflow0_pane

0x0205,	// (0x0007e6b9) main_wgtman_pane

0xbdc5,	// (0x0008a279) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbdc5,	// (0x0008a279) main_fs_bigclock_unlock_btn_pane

0x2f8a,	// (0x0008143e) bg_button_pane_cp16

0x2f9a,	// (0x0008144e) cell_tport_appsw_pane_g3

0xcd60,	// (0x0008b214) cf0_flow_pane_ParamLimits

0xcd60,	// (0x0008b214) cf0_flow_pane

0x375b,	// (0x00081c0f) listscroll_cf0_pane

0x3764,	// (0x00081c18) main_cf0_pane_g1

0xcd6f,	// (0x0008b223) main_cf0_pane_t1_ParamLimits

0xcd6f,	// (0x0008b223) main_cf0_pane_t1

0xcd81,	// (0x0008b235) main_cf0_pane_t2_ParamLimits

0xcd81,	// (0x0008b235) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0008e370) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0008e370) main_cf0_pane_t

0x3776,	// (0x00081c2a) scroll_pane_cp11

0xcd93,	// (0x0008b247) cf0_flow_pane_g1

0xcd9b,	// (0x0008b24f) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0008e375) cf0_flow_pane_g

0xcda3,	// (0x0008b257) cf0_flow_pane_t1

0x0205,	// (0x0007e6b9) main_call6_pane

0x0205,	// (0x0007e6b9) main_calllock_pane

0xcdb1,	// (0x0008b265) call6_btn_grp_pane_ParamLimits

0xcdb1,	// (0x0008b265) call6_btn_grp_pane

0xcdbe,	// (0x0008b272) call6_pane_g1_ParamLimits

0xcdbe,	// (0x0008b272) call6_pane_g1

0xcdcb,	// (0x0008b27f) popup_call6_1st_window_ParamLimits

0xcdcb,	// (0x0008b27f) popup_call6_1st_window

0xcdd7,	// (0x0008b28b) popup_call6_2nd_window_ParamLimits

0xcdd7,	// (0x0008b28b) popup_call6_2nd_window

0xcde3,	// (0x0008b297) cell_call6_btn_pane_ParamLimits

0xcde3,	// (0x0008b297) cell_call6_btn_pane

0xde85,	// (0x0008c339) bg_popup_call2_in_pane_cp03

0x377f,	// (0x00081c33) popup_call6_1st_window_g1

0x3787,	// (0x00081c3b) popup_call6_1st_window_g2

0x378f,	// (0x00081c43) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0008e37a) popup_call6_1st_window_g

0x3797,	// (0x00081c4b) popup_call6_1st_window_t1

0x37a6,	// (0x00081c5a) popup_call6_1st_window_t2

0x37b4,	// (0x00081c68) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0008e381) popup_call6_1st_window_t

0xde85,	// (0x0008c339) bg_popup_call2_in_pane_cp04

0x377f,	// (0x00081c33) popup_call6_2nd_window_g1

0x3787,	// (0x00081c3b) popup_call6_2nd_window_g2

0x378f,	// (0x00081c43) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0008e37a) popup_call6_2nd_window_g

0x3797,	// (0x00081c4b) popup_call6_2nd_window_t1

0x552c,	// (0x000839e0) bg_button_pane_cp15

0xcdf2,	// (0x0008b2a6) cell_call6_btn_pane_g1

0xcdfb,	// (0x0008b2af) cell_call6_btn_pane_t1

0xce0a,	// (0x0008b2be) listscroll_wgtman_pane_ParamLimits

0xce0a,	// (0x0008b2be) listscroll_wgtman_pane

0xce26,	// (0x0008b2da) wgtman_btn_pane_ParamLimits

0xce26,	// (0x0008b2da) wgtman_btn_pane

0xe6ca,	// (0x0008cb7e) aid_scroll_copy1

0x37c2,	// (0x00081c76) list_wgtman_pane

0xce59,	// (0x0008b30d) wgtman_btn_pane_g1_ParamLimits

0xce59,	// (0x0008b30d) wgtman_btn_pane_g1

0xce81,	// (0x0008b335) wgtman_btn_pane_t1_ParamLimits

0xce81,	// (0x0008b335) wgtman_btn_pane_t1

0x37cc,	// (0x00081c80) wgtman_btn_pane_t2_ParamLimits

0x37cc,	// (0x00081c80) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0008e388) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0008e388) wgtman_btn_pane_t

0xceb8,	// (0x0008b36c) listrow_wgtman_pane_ParamLimits

0xceb8,	// (0x0008b36c) listrow_wgtman_pane

0xcec9,	// (0x0008b37d) listrow_wgtman_pane_g1

0xced6,	// (0x0008b38a) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0008e38d) listrow_wgtman_pane_g

0xceee,	// (0x0008b3a2) listrow_wgtman_pane_t1

0xcf06,	// (0x0008b3ba) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0008e392) listrow_wgtman_pane_t

0xcf2c,	// (0x0008b3e0) wait_bar_pane_cp09

0x37e3,	// (0x00081c97) main_calllock_btn_pane

0x37eb,	// (0x00081c9f) main_calllock_pane_g1

0x0205,	// (0x0007e6b9) bg_button_pane_cp17

0x37f4,	// (0x00081ca8) main_calllock_btn_pane_g1

0x37fd,	// (0x00081cb1) main_calllock_btn_pane_t1

0x0205,	// (0x0007e6b9) main_dialer3_pane

0x0205,	// (0x0007e6b9) main_fmrd2_pane

0x159d,	// (0x0007fa51) main_fs_bigclock_unlock_btn_pane_g1

0x3814,	// (0x00081cc8) main_fs_bigclock_unlock_btn_pane_t1

0xcf3e,	// (0x0008b3f2) area_fmrd2_info_pane_ParamLimits

0xcf3e,	// (0x0008b3f2) area_fmrd2_info_pane

0xcf4a,	// (0x0008b3fe) area_fmrd2_visual_pane_ParamLimits

0xcf4a,	// (0x0008b3fe) area_fmrd2_visual_pane

0xcf58,	// (0x0008b40c) fmrd2_indi_pane_ParamLimits

0xcf58,	// (0x0008b40c) fmrd2_indi_pane

0xcf65,	// (0x0008b419) area_fmrd2_visual_pane_g1

0xcf6d,	// (0x0008b421) area_fmrd2_visual_pane_t1

0xcf7b,	// (0x0008b42f) area_fmrd2_visual_pane_t2

0xcf89,	// (0x0008b43d) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0008e39c) area_fmrd2_visual_pane_t

0xcf97,	// (0x0008b44b) area_fmrd2_info_pane_g1

0xcf9f,	// (0x0008b453) area_fmrd2_info_pane_t1

0xcfad,	// (0x0008b461) area_fmrd2_info_pane_t2

0xcfbb,	// (0x0008b46f) area_fmrd2_info_pane_t3

0xcfc9,	// (0x0008b47d) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0008e3a3) area_fmrd2_info_pane_t

0xcfd7,	// (0x0008b48b) fmrd2_indi_pane_t1

0xcfe5,	// (0x0008b499) fmrd2_indi_pane_t2

0xcff3,	// (0x0008b4a7) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0008e3ac) fmrd2_indi_pane_t

0x2a78,	// (0x00080f2c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2a78,	// (0x00080f2c) list_single_fs_bigclock_indicator_pane_g5

0x2b26,	// (0x00080fda) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2b26,	// (0x00080fda) list_single_fs_bigclock_indicator_pane_t5

0xc795,	// (0x0008ac49) aid_cell_bcale_month_pane_ParamLimits

0xc795,	// (0x0008ac49) aid_cell_bcale_month_pane

0xc7b3,	// (0x0008ac67) bcale_month_pane_ParamLimits

0xc7b3,	// (0x0008ac67) bcale_month_pane

0xc7c9,	// (0x0008ac7d) bcale_preview_pane_ParamLimits

0xc7c9,	// (0x0008ac7d) bcale_preview_pane

0x35cd,	// (0x00081a81) list_single_fs_bigclock_pane_t1_ParamLimits

0x35e9,	// (0x00081a9d) list_single_fs_bigclock_pane_t2_ParamLimits

0x35e9,	// (0x00081a9d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0008e32e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0008e32e) list_single_fs_bigclock_pane_t

0x380c,	// (0x00081cc0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0008e397) main_fs_bigclock_unlock_btn_pane_g

0xd001,	// (0x0008b4b5) aid_dia3_key_size_ParamLimits

0xd001,	// (0x0008b4b5) aid_dia3_key_size

0xd00d,	// (0x0008b4c1) aid_dia3_listrow_size_ParamLimits

0xd00d,	// (0x0008b4c1) aid_dia3_listrow_size

0xd01b,	// (0x0008b4cf) dia3_keypad_fun_pane_ParamLimits

0xd01b,	// (0x0008b4cf) dia3_keypad_fun_pane

0xd027,	// (0x0008b4db) dia3_keypad_num_pane_ParamLimits

0xd027,	// (0x0008b4db) dia3_keypad_num_pane

0xd033,	// (0x0008b4e7) dia3_listscroll_pane_ParamLimits

0xd033,	// (0x0008b4e7) dia3_listscroll_pane

0xd03f,	// (0x0008b4f3) dia3_numentry_pane_ParamLimits

0xd03f,	// (0x0008b4f3) dia3_numentry_pane

0x3822,	// (0x00081cd6) dia3_list_pane

0x382b,	// (0x00081cdf) scroll_pane_cp12

0x0205,	// (0x0007e6b9) bg_dia3_numentry_pane

0xd04b,	// (0x0008b4ff) dia3_numentry_pane_t1

0xd05a,	// (0x0008b50e) cell_dia3_key_num_pane

0xd062,	// (0x0008b516) cell_dia3_key0_fun_pane_ParamLimits

0xd062,	// (0x0008b516) cell_dia3_key0_fun_pane

0xd06f,	// (0x0008b523) cell_dia3_key1_fun_pane_ParamLimits

0xd06f,	// (0x0008b523) cell_dia3_key1_fun_pane

0xd07c,	// (0x0008b530) dia3_listrow_pane

0x2779,	// (0x00080c2d) bg_dia3_numentry_pane_g1

0x0205,	// (0x0007e6b9) bg_button_pane_cp21

0x3834,	// (0x00081ce8) cell_dia3_key_num_pane_t1

0x3842,	// (0x00081cf6) cell_dia3_key_num_pane_t2

0x3851,	// (0x00081d05) cell_dia3_key_num_pane_t3

0x3860,	// (0x00081d14) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0008e3b3) cell_dia3_key_num_pane_t

0x0205,	// (0x0007e6b9) bg_button_pane_cp19

0x386f,	// (0x00081d23) cell_dia3_key0_fun_pane_g1

0x0205,	// (0x0007e6b9) bg_button_pane_cp20

0xd089,	// (0x0008b53d) cell_dia3_key1_fun_pane_g1

0xd091,	// (0x0008b545) area_left_week_number_pane

0xd0a2,	// (0x0008b556) area_top_day_name_pane

0xd0ae,	// (0x0008b562) frame_month_view_pane

0x3877,	// (0x00081d2b) grid_month_view_pane

0xd0bf,	// (0x0008b573) cell_top_day_name_pane_ParamLimits

0xd0bf,	// (0x0008b573) cell_top_day_name_pane

0xd0d5,	// (0x0008b589) cell_area_left_week_number_pane_ParamLimits

0xd0d5,	// (0x0008b589) cell_area_left_week_number_pane

0xd0f4,	// (0x0008b5a8) cell_month_view_pane_ParamLimits

0xd0f4,	// (0x0008b5a8) cell_month_view_pane

0x3885,	// (0x00081d39) frm_month_g1

0xd11a,	// (0x0008b5ce) frm_month_g2

0xd129,	// (0x0008b5dd) frm_month_g3

0xd138,	// (0x0008b5ec) frm_month_g4

0xd147,	// (0x0008b5fb) frm_month_g5

0xd156,	// (0x0008b60a) frm_month_g6

0xd165,	// (0x0008b619) frm_month_g7

0x3892,	// (0x00081d46) frm_month_g8

0xd174,	// (0x0008b628) frm_month_g9

0xd181,	// (0x0008b635) frm_month_g10

0xd18e,	// (0x0008b642) frm_month_g11

0xd19b,	// (0x0008b64f) frm_month_g12

0xd1a8,	// (0x0008b65c) frm_month_g13

0xd1b5,	// (0x0008b669) frm_month_g14

0xd1c2,	// (0x0008b676) frm_month_g15

0xd1cf,	// (0x0008b683) frm_month_g16

0x000f,

0xff08,	// (0x0008e3bc) frm_month_g

0x389f,	// (0x00081d53) cell_top_day_name_pane_t1

0xd1dc,	// (0x0008b690) cell_area_left_week_number_pane_g1

0xd1eb,	// (0x0008b69f) cell_area_left_week_number_pane_t1

0x17cc,	// (0x0007fc80) cell_month_view_pane_g1

0xd201,	// (0x0008b6b5) cell_month_view_pane_t1

0x0205,	// (0x0007e6b9) main_fps_pane

0x2d36,	// (0x000811ea) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2d36,	// (0x000811ea) cmail_ddmenu_btn02_pane_cp1

0x2d52,	// (0x00081206) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2d52,	// (0x00081206) cmail_ddmenu_btn02_pane_cp2

0xca27,	// (0x0008aedb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xca27,	// (0x0008aedb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0008e2e1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0008e2e1) cmail_ddmenu_btn02_pane_g

0xca45,	// (0x0008aef9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xca45,	// (0x0008aef9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0008e2e6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0008e2e6) cmail_ddmenu_btn02_pane_t

0xd217,	// (0x0008b6cb) fps_text_pane_ParamLimits

0xd217,	// (0x0008b6cb) fps_text_pane

0xd224,	// (0x0008b6d8) main_fps_pane_g1_ParamLimits

0xd224,	// (0x0008b6d8) main_fps_pane_g1

0xd230,	// (0x0008b6e4) wait_bar_pane_cp010_ParamLimits

0xd230,	// (0x0008b6e4) wait_bar_pane_cp010

0xd23c,	// (0x0008b6f0) fps_text_pane_t1_ParamLimits

0xd23c,	// (0x0008b6f0) fps_text_pane_t1

0xa119,	// (0x000885cd) cam4_image_uncrop_pane_g1

0xa122,	// (0x000885d6) cam4_image_uncrop_pane_g2

0xa12b,	// (0x000885df) cam4_image_uncrop_pane_g3

0xa134,	// (0x000885e8) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0008dd9e) cam4_image_uncrop_pane_g

0xd07c,	// (0x0008b530) dia3_listrow_pane_ParamLimits

0x0205,	// (0x0007e6b9) main_phob2_pane

0xc60e,	// (0x0008aac2) cell_tport_appsw_pane_cp02_ParamLimits

0xc60e,	// (0x0008aac2) cell_tport_appsw_pane_cp02

0xc61b,	// (0x0008aacf) cell_tport_appsw_pane_cp03_ParamLimits

0xc61b,	// (0x0008aacf) cell_tport_appsw_pane_cp03

0x0205,	// (0x0007e6b9) phob2_contact_card_pane

0x0205,	// (0x0007e6b9) phob2_listscroll_pane

0x38b2,	// (0x00081d66) phob2_list_pane

0x38ba,	// (0x00081d6e) scroll_pane_cp034

0xd255,	// (0x0008b709) phob2_cc_data_pane_ParamLimits

0xd255,	// (0x0008b709) phob2_cc_data_pane

0xd26d,	// (0x0008b721) phob2_cc_listscroll_pane_ParamLimits

0xd26d,	// (0x0008b721) phob2_cc_listscroll_pane

0xd285,	// (0x0008b739) list_double_large_graphic_phob2_pane_ParamLimits

0xd285,	// (0x0008b739) list_double_large_graphic_phob2_pane

0xd297,	// (0x0008b74b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd297,	// (0x0008b74b) list_double_large_graphic_phob2_pane_g1

0xd2ad,	// (0x0008b761) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd2ad,	// (0x0008b761) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0008e3dd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0008e3dd) list_double_large_graphic_phob2_pane_g

0xd2b9,	// (0x0008b76d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd2b9,	// (0x0008b76d) list_double_large_graphic_phob2_pane_t1

0xd2cf,	// (0x0008b783) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd2cf,	// (0x0008b783) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0008e3e2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0008e3e2) list_double_large_graphic_phob2_pane_t

0x0205,	// (0x0007e6b9) list_highlight_pane_cp024

0xd2e4,	// (0x0008b798) phob2_cc_button_pane

0xd2ec,	// (0x0008b7a0) phob2_cc_data_pane_g1_ParamLimits

0xd2ec,	// (0x0008b7a0) phob2_cc_data_pane_g1

0xd2f8,	// (0x0008b7ac) phob2_cc_data_pane_g2_ParamLimits

0xd2f8,	// (0x0008b7ac) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0008e3e7) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0008e3e7) phob2_cc_data_pane_g

0xd304,	// (0x0008b7b8) phob2_cc_data_pane_t1_ParamLimits

0xd304,	// (0x0008b7b8) phob2_cc_data_pane_t1

0xd316,	// (0x0008b7ca) phob2_cc_data_pane_t2_ParamLimits

0xd316,	// (0x0008b7ca) phob2_cc_data_pane_t2

0xd328,	// (0x0008b7dc) phob2_cc_data_pane_t3_ParamLimits

0xd328,	// (0x0008b7dc) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0008e3ec) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0008e3ec) phob2_cc_data_pane_t

0x38c2,	// (0x00081d76) phob2_cc_list_pane_ParamLimits

0x38c2,	// (0x00081d76) phob2_cc_list_pane

0x2696,	// (0x00080b4a) scroll_pane_cp035_ParamLimits

0x2696,	// (0x00080b4a) scroll_pane_cp035

0x0260,	// (0x0007e714) bg_button_pane_cp033

0x38ce,	// (0x00081d82) phob2_cc_button_pane_g1

0x38da,	// (0x00081d8e) phob2_cc_button_pane_t1

0x38ef,	// (0x00081da3) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0008e3f3) phob2_cc_button_pane_t

0xd33a,	// (0x0008b7ee) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd33a,	// (0x0008b7ee) list_double_large_graphic_phob2_cc_pane

0xd380,	// (0x0008b834) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd380,	// (0x0008b834) list_double_large_graphic_phob2_cc_pane_g1

0xd391,	// (0x0008b845) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd391,	// (0x0008b845) list_double_large_graphic_phob2_cc_pane_g2

0xd3a0,	// (0x0008b854) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd3a0,	// (0x0008b854) list_double_large_graphic_phob2_cc_pane_g3

0xd3af,	// (0x0008b863) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd3af,	// (0x0008b863) list_double_large_graphic_phob2_cc_pane_g4

0xd3c0,	// (0x0008b874) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd3c0,	// (0x0008b874) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0008e3f8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0008e3f8) list_double_large_graphic_phob2_cc_pane_g

0xd3cf,	// (0x0008b883) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd3cf,	// (0x0008b883) list_double_large_graphic_phob2_cc_pane_t1

0xd3f8,	// (0x0008b8ac) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd3f8,	// (0x0008b8ac) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0008e403) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0008e403) list_double_large_graphic_phob2_cc_pane_t

0x3901,	// (0x00081db5) list_highlight_pane_cp025_ParamLimits

0x3901,	// (0x00081db5) list_highlight_pane_cp025

0x0260,	// (0x0007e714) bg_button_pane_cp033_ParamLimits

0x38ce,	// (0x00081d82) phob2_cc_button_pane_g1_ParamLimits

0x38da,	// (0x00081d8e) phob2_cc_button_pane_t1_ParamLimits

0x38ef,	// (0x00081da3) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0008e3f3) phob2_cc_button_pane_t_ParamLimits

0x5524,	// (0x000839d8) popup_wgtman_window

0x2799,	// (0x00080c4d) scroll_pane_cp038

0xce41,	// (0x0008b2f5) wgtman_btn_pane_cp_01_ParamLimits

0xce41,	// (0x0008b2f5) wgtman_btn_pane_cp_01

0x390f,	// (0x00081dc3) wgtman_content_pane

0x3918,	// (0x00081dcc) wgtman_heading_pane

0x0205,	// (0x0007e6b9) bg_heading_pane_cp02

0x3921,	// (0x00081dd5) wgtman_heading_pane_g1

0x3929,	// (0x00081ddd) wgtman_heading_pane_t1

0x3937,	// (0x00081deb) scroll_pane_cp036

0x393f,	// (0x00081df3) wgtman_list_pane

0x3947,	// (0x00081dfb) wgtman_list_pane_t1_ParamLimits

0x3947,	// (0x00081dfb) wgtman_list_pane_t1

0xa07e,	// (0x00088532) cam4_grid_pane

0xad01,	// (0x000891b5) bg_button_pane_cp015_ParamLimits

0xad11,	// (0x000891c5) bg_button_pane_cp016_ParamLimits

0xad24,	// (0x000891d8) bg_button_pane_cp017_ParamLimits

0xad76,	// (0x0008922a) popup_vitu2_query_window_g3_ParamLimits

0xad76,	// (0x0008922a) popup_vitu2_query_window_g3

0xae29,	// (0x000892dd) popup_vitu2_query_window_t6_ParamLimits

0xae29,	// (0x000892dd) popup_vitu2_query_window_t6

0xae54,	// (0x00089308) popup_vitu2_query_window_t7_ParamLimits

0xae54,	// (0x00089308) popup_vitu2_query_window_t7

0x1f6d,	// (0x00080421) cam4_grid_pane_g1

0x1f76,	// (0x0008042a) cam4_grid_pane_g2

0x395e,	// (0x00081e12) cam4_grid_pane_g3

0x3967,	// (0x00081e1b) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0008e408) cam4_grid_pane_g

0x63ef,	// (0x000848a3) aid_placing_vt_slider_lsc_ParamLimits

0x6699,	// (0x00084b4d) vidtel_button_pane_ParamLimits

0x6699,	// (0x00084b4d) vidtel_button_pane

0x0205,	// (0x0007e6b9) bg_button_pane_cp034

0xd421,	// (0x0008b8d5) vidtel_button_pane_g1

0xd429,	// (0x0008b8dd) vidtel_button_pane_t1

0x412a,	// (0x000825de) aid_size_vtel_slider_touch

0x2696,	// (0x00080b4a) scroll_pane_cp039

0x27c8,	// (0x00080c7c) ncim_query_button_pane_cp01_ParamLimits

0x27e7,	// (0x00080c9b) ncimui_query_pane_g1_ParamLimits

0x0260,	// (0x0007e714) input_focus_pane_cp012_ParamLimits

0x280c,	// (0x00080cc0) ncim_query_entry_pane_t1_ParamLimits

0x2696,	// (0x00080b4a) scroll_pane_cp039_ParamLimits

0xe78e,	// (0x0008cc42) navi_pane_bcale_mc_g1

0xe796,	// (0x0008cc4a) navi_pane_bcale_mc_t1

0x2d86,	// (0x0008123a) main_sp_fs_email_pane_g1

0x2d92,	// (0x00081246) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0008e199) main_sp_fs_email_pane_g

0x32a4,	// (0x00081758) list_single_cale_mrui_row_pane_g3_ParamLimits

0x32a4,	// (0x00081758) list_single_cale_mrui_row_pane_g3

0xca63,	// (0x0008af17) list_single_recal_day_pane_g5_event_pane

0x347d,	// (0x00081931) list_single_recal_day_pane_g7

0x3970,	// (0x00081e24) list_recal_day_event_pane_cp01

0x3979,	// (0x00081e2d) list_recal_vselct_arw_lo_pane_cp01

0x3981,	// (0x00081e35) list_recal_vselct_arw_up_pane_cp01

0x3989,	// (0x00081e3d) list_recal_vselct_pane_cp01

0x413a,	// (0x000825ee) list_recal_day_event_pane_cp01_g1

0x3993,	// (0x00081e47) list_recal_day_event_pane_cp01_t1

0x3485,	// (0x00081939) list_single_recal_day_pane_t1_ParamLimits

0xca7a,	// (0x0008af2e) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0008e2f6) list_single_recal_day_pane_t_ParamLimits

0xdbe5,	// (0x0008c099) bg_notes_pane_ParamLimits

0xdc88,	// (0x0008c13c) list_notes_pane_ParamLimits

0x582b,	// (0x00083cdf) scroll_pane_cp06_ParamLimits

0xdcae,	// (0x0008c162) main_notes_pane_ParamLimits

0x0260,	// (0x0007e714) main_welc_pane

0xd44c,	// (0x0008b900) main_welc_body_pane_ParamLimits

0xd44c,	// (0x0008b900) main_welc_body_pane

0xd465,	// (0x0008b919) main_welc_opti_pane_ParamLimits

0xd465,	// (0x0008b919) main_welc_opti_pane

0xd49e,	// (0x0008b952) main_welc_pane_t1_ParamLimits

0xd49e,	// (0x0008b952) main_welc_pane_t1

0xd4f2,	// (0x0008b9a6) main_welc_body_row_pane_ParamLimits

0xd4f2,	// (0x0008b9a6) main_welc_body_row_pane

0x39a1,	// (0x00081e55) main_welc_opti_row_pane_ParamLimits

0x39a1,	// (0x00081e55) main_welc_opti_row_pane

0x39af,	// (0x00081e63) main_welc_opti_row_pane_g1

0xd507,	// (0x0008b9bb) main_welc_opti_row_pane_t1

0x39b7,	// (0x00081e6b) main_welc_body_row_pane_t1

0x36be,	// (0x00081b72) popup_notif_wgt_heading_pane

0x36d8,	// (0x00081b8c) aid_size_list_notif_wgt_del_ParamLimits

0x36e5,	// (0x00081b99) list_notif_wgt_row_pane_g1_ParamLimits

0x36f1,	// (0x00081ba5) list_notif_wgt_row_pane_g2_ParamLimits

0x3705,	// (0x00081bb9) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0008e35d) list_notif_wgt_row_pane_g_ParamLimits

0x3712,	// (0x00081bc6) list_notif_wgt_row_pane_t1_ParamLimits

0x3728,	// (0x00081bdc) list_notif_wgt_row_pane_t2_ParamLimits

0x373a,	// (0x00081bee) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0008e364) list_notif_wgt_row_pane_t_ParamLimits

0xcec9,	// (0x0008b37d) listrow_wgtman_pane_g1_ParamLimits

0xced6,	// (0x0008b38a) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0008e38d) listrow_wgtman_pane_g_ParamLimits

0xceee,	// (0x0008b3a2) listrow_wgtman_pane_t1_ParamLimits

0xcf06,	// (0x0008b3ba) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0008e392) listrow_wgtman_pane_t_ParamLimits

0xcf2c,	// (0x0008b3e0) wait_bar_pane_cp09_ParamLimits

0x0205,	// (0x0007e6b9) bg_popup_heading_pane_cp02

0x39c6,	// (0x00081e7a) popup_notif_wgt_heading_pane_g1

0x39ce,	// (0x00081e82) popup_notif_wgt_heading_pane_t1

0x1097,	// (0x0007f54b) main_vids_pane

0x0205,	// (0x0007e6b9) vids_listscroll_pane

0xd516,	// (0x0008b9ca) scroll_pane_cp040

0x0205,	// (0x0007e6b9) vids_list_pane

0xd51f,	// (0x0008b9d3) vids_list_double_pane_ParamLimits

0xd51f,	// (0x0008b9d3) vids_list_double_pane

0xd530,	// (0x0008b9e4) vids_list_double_pane_g1

0xd539,	// (0x0008b9ed) vids_list_double_pane_t1

0xd549,	// (0x0008b9fd) vids_list_double_pane_t2

0x0001,

0xff6b,	// (0x0008e41f) vids_list_double_pane_t

0x8339,	// (0x000867ed) main_ncimui_pane_ParamLimits

0xb9d9,	// (0x00089e8d) main_ncimui_pane_g1_ParamLimits

0xb9e5,	// (0x00089e99) main_ncimui_pane_g2_ParamLimits

0xb9e5,	// (0x00089e99) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0008e09a) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0008e09a) main_ncimui_pane_g

0xd47a,	// (0x0008b92e) main_welc_pane_g1_ParamLimits

0xd47a,	// (0x0008b92e) main_welc_pane_g1

0xd486,	// (0x0008b93a) main_welc_pane_g2_ParamLimits

0xd486,	// (0x0008b93a) main_welc_pane_g2

0x0002,

0xff5d,	// (0x0008e411) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0008e411) main_welc_pane_g

0xdbe5,	// (0x0008c099) listscroll_mce_pane_ParamLimits

0x77b9,	// (0x00085c6d) wait_bar_pane_cp10

0x107d,	// (0x0007f531) main_cale_day_pane_ParamLimits

0x107d,	// (0x0007f531) main_cale_week_pane_ParamLimits

0xdbe5,	// (0x0008c099) main_messa_pane_ParamLimits

0x950e,	// (0x000879c2) main_clock2_btn_pane_ParamLimits

0x950e,	// (0x000879c2) main_clock2_btn_pane

0x19c8,	// (0x0007fe7c) main_clock2_btn_pane_cp01_ParamLimits

0x19c8,	// (0x0007fe7c) main_clock2_btn_pane_cp01

0x3227,	// (0x000816db) list_cale_mrui_pane_ParamLimits

0x376e,	// (0x00081c22) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0008e36b) main_cf0_pane_g

0xd091,	// (0x0008b545) area_left_week_number_pane_ParamLimits

0xd0a2,	// (0x0008b556) area_top_day_name_pane_ParamLimits

0xd0ae,	// (0x0008b562) frame_month_view_pane_ParamLimits

0x3877,	// (0x00081d2b) grid_month_view_pane_ParamLimits

0x3885,	// (0x00081d39) frm_month_g1_ParamLimits

0xd11a,	// (0x0008b5ce) frm_month_g2_ParamLimits

0xd129,	// (0x0008b5dd) frm_month_g3_ParamLimits

0xd138,	// (0x0008b5ec) frm_month_g4_ParamLimits

0xd147,	// (0x0008b5fb) frm_month_g5_ParamLimits

0xd156,	// (0x0008b60a) frm_month_g6_ParamLimits

0xd165,	// (0x0008b619) frm_month_g7_ParamLimits

0x3892,	// (0x00081d46) frm_month_g8_ParamLimits

0xd174,	// (0x0008b628) frm_month_g9_ParamLimits

0xd181,	// (0x0008b635) frm_month_g10_ParamLimits

0xd18e,	// (0x0008b642) frm_month_g11_ParamLimits

0xd19b,	// (0x0008b64f) frm_month_g12_ParamLimits

0xd1a8,	// (0x0008b65c) frm_month_g13_ParamLimits

0xd1b5,	// (0x0008b669) frm_month_g14_ParamLimits

0xd1c2,	// (0x0008b676) frm_month_g15_ParamLimits

0xd1cf,	// (0x0008b683) frm_month_g16_ParamLimits

0xff08,	// (0x0008e3bc) frm_month_g_ParamLimits

0x389f,	// (0x00081d53) cell_top_day_name_pane_t1_ParamLimits

0xd1dc,	// (0x0008b690) cell_area_left_week_number_pane_g1_ParamLimits

0xd1eb,	// (0x0008b69f) cell_area_left_week_number_pane_t1_ParamLimits

0x17cc,	// (0x0007fc80) cell_month_view_pane_g1_ParamLimits

0xd201,	// (0x0008b6b5) cell_month_view_pane_t1_ParamLimits

0xdbdd,	// (0x0008c091) main_clock2_btn_pane_g1

0x39dc,	// (0x00081e90) main_clock2_btn_pane_t1

0x0260,	// (0x0007e714) listscroll_cmail_pane_ParamLimits

0x2d86,	// (0x0008123a) main_sp_fs_email_pane_g1_ParamLimits

0x2d92,	// (0x00081246) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0008e199) main_sp_fs_email_pane_g_ParamLimits

0x33f9,	// (0x000818ad) list_recal_day_pane_ParamLimits

0x340a,	// (0x000818be) mian_recal_day_pane_t1

0xc382,	// (0x0008a836) list_single_dyc_row_text_pane_t4_ParamLimits

0xc382,	// (0x0008a836) list_single_dyc_row_text_pane_t4

0xc3b9,	// (0x0008a86d) list_single_dyc_row_text_pane_t5_ParamLimits

0xc3b9,	// (0x0008a86d) list_single_dyc_row_text_pane_t5

0x2e5a,	// (0x0008130e) list_single_dyc_row_text_pane_t6_ParamLimits

0x2e5a,	// (0x0008130e) list_single_dyc_row_text_pane_t6

0x72e4,	// (0x00085798) aid_mgn_list_cale_time_pane

0x8339,	// (0x000867ed) main_gallery2_pane_ParamLimits

0x19dc,	// (0x0007fe90) main_clock2_pane_cp01_t1

0x19ea,	// (0x0007fe9e) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0008dc70) main_clock2_pane_cp01_t

0x5bf3,	// (0x000840a7) cale_week_scroll_pane_g16_ParamLimits

0x5bf3,	// (0x000840a7) cale_week_scroll_pane_g16

0xde85,	// (0x0008c339) vorec_slider_pane

0xd429,	// (0x0008b8dd) vidtel_button_pane_t1_ParamLimits

0x18a5,	// (0x0007fd59) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcb13,	// (0x0008afc7) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcb20,	// (0x0008afd4) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcb20,	// (0x0008afd4) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0008e319) main_fs_bigclock_clock_pane_g_ParamLimits

0xcb2c,	// (0x0008afe0) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcb3e,	// (0x0008aff2) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0008e322) main_fs_bigclock_clock_pane_t_ParamLimits

0x8e3a,	// (0x000872ee) main_mup3_lyrics_pane_ParamLimits

0x8e3a,	// (0x000872ee) main_mup3_lyrics_pane

0xd57b,	// (0x0008ba2f) main_mup3_lyrics_pane_t1_ParamLimits

0xd57b,	// (0x0008ba2f) main_mup3_lyrics_pane_t1

0x9adc,	// (0x00087f90) aid_main_mp4_pane_t1_area

0x9adc,	// (0x00087f90) aid_main_mp4_pane_t2_area

0x9bc7,	// (0x0008807b) main_mp4_pane_g7_ParamLimits

0x9bc7,	// (0x0008807b) main_mp4_pane_g7

0x9bd3,	// (0x00088087) main_mp4_pane_g8_ParamLimits

0x9bd3,	// (0x00088087) main_mp4_pane_g8

0x9f96,	// (0x0008844a) aid_call6_pane_g1_size

0xd364,	// (0x0008b818) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd364,	// (0x0008b818) list_double_large_graphic_phob2_other_pane

0xe6e1,	// (0x0008cb95) list_double_large_graphic_phob2_other_pane_g1

0x0205,	// (0x0007e6b9) list_highlight_pane_cp026

0x0260,	// (0x0007e714) main_welc_pane_ParamLimits

0xc0f2,	// (0x0008a5a6) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc0f2,	// (0x0008a5a6) main_sp_fs_ctrlbar_pane_g3

0xc10a,	// (0x0008a5be) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc10a,	// (0x0008a5be) main_sp_fs_ctrlbar_pane_g4

0xc14a,	// (0x0008a5fe) toolbar2_fixed_button_pane_cp01

0xc154,	// (0x0008a608) toolbar2_fixed_button_pane_cp02

0xc15f,	// (0x0008a613) toolbar2_fixed_button_pane_cp03

0xd43f,	// (0x0008b8f3) list_welc_entry_pane_ParamLimits

0xd43f,	// (0x0008b8f3) list_welc_entry_pane

0xd492,	// (0x0008b946) main_welc_pane_g3_ParamLimits

0xd492,	// (0x0008b946) main_welc_pane_g3

0xd4b6,	// (0x0008b96a) main_welc_pane_t2_ParamLimits

0xd4b6,	// (0x0008b96a) main_welc_pane_t2

0xd4c8,	// (0x0008b97c) main_welc_pane_t3_ParamLimits

0xd4c8,	// (0x0008b97c) main_welc_pane_t3

0x0002,

0xff64,	// (0x0008e418) main_welc_pane_t_ParamLimits

0xff64,	// (0x0008e418) main_welc_pane_t

0xd4da,	// (0x0008b98e) welc_button_pane_ParamLimits

0xd4da,	// (0x0008b98e) welc_button_pane

0xd4e6,	// (0x0008b99a) welc_service_logo_pane_ParamLimits

0xd4e6,	// (0x0008b99a) welc_service_logo_pane

0x39ea,	// (0x00081e9e) list_single_welc_entry_pane_ParamLimits

0x39ea,	// (0x00081e9e) list_single_welc_entry_pane

0x39fb,	// (0x00081eaf) list_single_welc_entry_pane_g1

0x3a03,	// (0x00081eb7) list_single_welc_entry_pane_t1

0x3a11,	// (0x00081ec5) list_single_welc_entry_pane_t2

0x0001,

0xff70,	// (0x0008e424) list_single_welc_entry_pane_t

0x0205,	// (0x0007e6b9) bg_button_pane_cp035

0x3a1f,	// (0x00081ed3) welc_button_pane_t1

0x3a2d,	// (0x00081ee1) welc_service_logo_pane_g1

0x3a36,	// (0x00081eea) welc_service_logo_pane_g2

0x0001,

0xff75,	// (0x0008e429) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
