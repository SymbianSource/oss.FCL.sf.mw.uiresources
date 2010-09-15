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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0009b894 };

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
0x0c1e,	// (0x0009c4b2) Screen

0x0c2a,	// (0x0009c4be) application_window

0x0c7e,	// (0x0009c512) area_bottom_pane_ParamLimits

0x0c7e,	// (0x0009c512) area_bottom_pane

0x0cdc,	// (0x0009c570) area_top_pane_ParamLimits

0x0cdc,	// (0x0009c570) area_top_pane

0x0d40,	// (0x0009c5d4) call_video_uplink_pane_ParamLimits

0x0d40,	// (0x0009c5d4) call_video_uplink_pane

0x0d7f,	// (0x0009c613) main_pane_ParamLimits

0x0d7f,	// (0x0009c613) main_pane

0xc64d,	// (0x000a7ee1) context_pane

0x3e93,	// (0x0009f727) navi_pane

0x3ebc,	// (0x0009f750) popup_cale_events_window_ParamLimits

0x3ebc,	// (0x0009f750) popup_cale_events_window

0xc660,	// (0x000a7ef4) popup_mup_playback_window

0x3ed4,	// (0x0009f768) signal_pane

0xa76c,	// (0x000a6000) main_browser_pane

0xa90a,	// (0x000a619e) main_burst_pane

0x3ce3,	// (0x0009f577) main_calc_pane

0xc641,	// (0x000a7ed5) main_cale_day_pane

0x3cf0,	// (0x0009f584) main_cale_month_pane

0xc641,	// (0x000a7ed5) main_cale_week_pane

0xa90a,	// (0x000a619e) main_call_pane

0xa059,	// (0x000a58ed) main_call_poc_pane

0xa90a,	// (0x000a619e) main_camera_pane

0xa90a,	// (0x000a619e) main_chi_dic_pane

0xb165,	// (0x000a69f9) main_clock_pane

0xa059,	// (0x000a58ed) main_fmradio_pane

0xa90a,	// (0x000a619e) main_graph_messa_pane

0xa059,	// (0x000a58ed) main_help_pane

0xa76c,	// (0x000a6000) main_im_pane

0xa67f,	// (0x000a5f13) main_image_pane_ParamLimits

0xa67f,	// (0x000a5f13) main_image_pane

0xa059,	// (0x000a58ed) main_location2_pane

0xa90a,	// (0x000a619e) main_location_pane

0xa67f,	// (0x000a5f13) main_messa_pane

0xa059,	// (0x000a58ed) main_mp2_pane

0xa90a,	// (0x000a619e) main_mp_pane

0xa059,	// (0x000a58ed) main_msg_pane

0xa059,	// (0x000a58ed) main_mup_eq_pane

0xa059,	// (0x000a58ed) main_mup_pane

0xa76c,	// (0x000a6000) main_notes_pane

0xa059,	// (0x000a58ed) main_pec_pane

0xa059,	// (0x000a58ed) main_phob_pane

0xa059,	// (0x000a58ed) main_pinb_pane

0xa059,	// (0x000a58ed) main_postcard_pane

0xa059,	// (0x000a58ed) main_qdial_pane

0xa90a,	// (0x000a619e) main_skin_pane

0xa059,	// (0x000a58ed) main_smil2_pane

0xa90a,	// (0x000a619e) main_smil_pane

0xa90a,	// (0x000a619e) main_video_pane

0xa90a,	// (0x000a619e) main_video_tele_pane

0xa67f,	// (0x000a5f13) main_viewer_pane_ParamLimits

0xa67f,	// (0x000a5f13) main_viewer_pane

0xa90a,	// (0x000a619e) main_vorec_pane

0x3d43,	// (0x0009f5d7) popup_blid_sat_info_window_ParamLimits

0x3d43,	// (0x0009f5d7) popup_blid_sat_info_window

0x3d69,	// (0x0009f5fd) popup_dyc_status_message_window_ParamLimits

0x3d69,	// (0x0009f5fd) popup_dyc_status_message_window

0x3d79,	// (0x0009f60d) popup_grid_large_graphic_window_ParamLimits

0x3d79,	// (0x0009f60d) popup_grid_large_graphic_window

0x3e0e,	// (0x0009f6a2) popup_loc_request_window_ParamLimits

0x3e0e,	// (0x0009f6a2) popup_loc_request_window

0x3e67,	// (0x0009f6fb) popup_wml_address_window_ParamLimits

0x3e67,	// (0x0009f6fb) popup_wml_address_window

0x3bbb,	// (0x0009f44f) call_muted_g1

0x3833,	// (0x0009f0c7) popup_call_audio_conf_window_ParamLimits

0x3833,	// (0x0009f0c7) popup_call_audio_conf_window

0x3bcb,	// (0x0009f45f) popup_call_audio_first_window_ParamLimits

0x3bcb,	// (0x0009f45f) popup_call_audio_first_window

0x3c0b,	// (0x0009f49f) popup_call_audio_in_window_ParamLimits

0x3c0b,	// (0x0009f49f) popup_call_audio_in_window

0x3c2f,	// (0x0009f4c3) popup_call_audio_out_window_ParamLimits

0x3c2f,	// (0x0009f4c3) popup_call_audio_out_window

0x3c51,	// (0x0009f4e5) popup_call_audio_second_window_ParamLimits

0x3c51,	// (0x0009f4e5) popup_call_audio_second_window

0x3c81,	// (0x0009f515) popup_call_audio_wait_window_ParamLimits

0x3c81,	// (0x0009f515) popup_call_audio_wait_window

0x3ca2,	// (0x0009f536) popup_number_entry_window_ParamLimits

0x3ca2,	// (0x0009f536) popup_number_entry_window

0x9c11,	// (0x000a54a5) bg_popup_call_pane_cp05_ParamLimits

0x9c11,	// (0x000a54a5) bg_popup_call_pane_cp05

0x9c31,	// (0x000a54c5) popup_number_entry_window_t1

0x9c44,	// (0x000a54d8) popup_number_entry_window_t2

0x9c56,	// (0x000a54ea) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x000aa8d9) popup_number_entry_window_t

0x9c9d,	// (0x000a5531) text_title_cp2

0x9cb0,	// (0x000a5544) bg_popup_call_pane_cp_ParamLimits

0x9cb0,	// (0x000a5544) bg_popup_call_pane_cp

0x9cbe,	// (0x000a5552) call_thumbnail_pane

0x9cc6,	// (0x000a555a) popup_call_audio_in_window_g1_ParamLimits

0x9cc6,	// (0x000a555a) popup_call_audio_in_window_g1

0x9cd2,	// (0x000a5566) popup_call_audio_in_window_g2_ParamLimits

0x9cd2,	// (0x000a5566) popup_call_audio_in_window_g2

0x9cde,	// (0x000a5572) popup_call_audio_in_window_g3_ParamLimits

0x9cde,	// (0x000a5572) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x000aa8e2) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x000aa8e2) popup_call_audio_in_window_g

0x9cea,	// (0x000a557e) popup_call_audio_in_window_t1_ParamLimits

0x9cea,	// (0x000a557e) popup_call_audio_in_window_t1

0x9d06,	// (0x000a559a) popup_call_audio_in_window_t2_ParamLimits

0x9d06,	// (0x000a559a) popup_call_audio_in_window_t2

0x9d22,	// (0x000a55b6) popup_call_audio_in_window_t3_ParamLimits

0x9d22,	// (0x000a55b6) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x000aa8e9) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x000aa8e9) popup_call_audio_in_window_t

0x9cb0,	// (0x000a5544) bg_popup_call_pane_cp01_ParamLimits

0x9cb0,	// (0x000a5544) bg_popup_call_pane_cp01

0x9cbe,	// (0x000a5552) call_thumbnail_pane_cp02

0x9d35,	// (0x000a55c9) call_type_pane_cp022

0x9d3d,	// (0x000a55d1) popup_call_audio_out_window_g1_ParamLimits

0x9d3d,	// (0x000a55d1) popup_call_audio_out_window_g1

0x9d4f,	// (0x000a55e3) popup_call_audio_out_window_g2_ParamLimits

0x9d4f,	// (0x000a55e3) popup_call_audio_out_window_g2

0x9d5b,	// (0x000a55ef) popup_call_audio_out_window_g3_ParamLimits

0x9d5b,	// (0x000a55ef) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x000aa8f0) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x000aa8f0) popup_call_audio_out_window_g

0x9d6d,	// (0x000a5601) popup_call_audio_out_window_t1_ParamLimits

0x9d6d,	// (0x000a5601) popup_call_audio_out_window_t1

0x9d85,	// (0x000a5619) popup_call_audio_out_window_t2_ParamLimits

0x9d85,	// (0x000a5619) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x000aa8f7) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x000aa8f7) popup_call_audio_out_window_t

0x9d9a,	// (0x000a562e) bg_popup_call_pane_ParamLimits

0x9d9a,	// (0x000a562e) bg_popup_call_pane

0x0f5e,	// (0x0009c7f2) call_thumbnail_pane_cp_ParamLimits

0x0f5e,	// (0x0009c7f2) call_thumbnail_pane_cp

0x9e1e,	// (0x000a56b2) call_type_pane_cp01_ParamLimits

0x9e1e,	// (0x000a56b2) call_type_pane_cp01

0x9e62,	// (0x000a56f6) popup_call_audio_first_window_g1_ParamLimits

0x9e62,	// (0x000a56f6) popup_call_audio_first_window_g1

0x9eae,	// (0x000a5742) popup_call_audio_first_window_g2_ParamLimits

0x9eae,	// (0x000a5742) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x000aa8fc) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x000aa8fc) popup_call_audio_first_window_g

0x9ef2,	// (0x000a5786) popup_call_audio_first_window_t1_ParamLimits

0x9ef2,	// (0x000a5786) popup_call_audio_first_window_t1

0x9f9e,	// (0x000a5832) popup_call_audio_first_window_t4_ParamLimits

0x9f9e,	// (0x000a5832) popup_call_audio_first_window_t4

0xa02a,	// (0x000a58be) popup_call_audio_first_window_t5_ParamLimits

0xa02a,	// (0x000a58be) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x000aa901) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x000aa901) popup_call_audio_first_window_t

0xa059,	// (0x000a58ed) bg_popup_call_pane_cp02

0xa063,	// (0x000a58f7) call_type_pane_cp023

0xa06b,	// (0x000a58ff) popup_call_audio_wait_window_g1

0xa073,	// (0x000a5907) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x000aa908) popup_call_audio_wait_window_g

0xa07b,	// (0x000a590f) popup_call_audio_wait_window_t3

0xa089,	// (0x000a591d) bg_popup_call_pane_cp03_ParamLimits

0xa089,	// (0x000a591d) bg_popup_call_pane_cp03

0xa0e9,	// (0x000a597d) call_thumbnail_pane_cp011_ParamLimits

0xa0e9,	// (0x000a597d) call_thumbnail_pane_cp011

0xa0f5,	// (0x000a5989) call_type_pane_cp034_ParamLimits

0xa0f5,	// (0x000a5989) call_type_pane_cp034

0xa131,	// (0x000a59c5) popup_call_audio_second_window_g1_ParamLimits

0xa131,	// (0x000a59c5) popup_call_audio_second_window_g1

0xa16d,	// (0x000a5a01) popup_call_audio_second_window_g2_ParamLimits

0xa16d,	// (0x000a5a01) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x000aa90d) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x000aa90d) popup_call_audio_second_window_g

0xa1a9,	// (0x000a5a3d) popup_call_audio_second_window_t1_ParamLimits

0xa1a9,	// (0x000a5a3d) popup_call_audio_second_window_t1

0xa22a,	// (0x000a5abe) popup_call_audio_second_window_t2_ParamLimits

0xa22a,	// (0x000a5abe) popup_call_audio_second_window_t2

0xa260,	// (0x000a5af4) popup_call_audio_second_window_t3_ParamLimits

0xa260,	// (0x000a5af4) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x000aa912) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x000aa912) popup_call_audio_second_window_t

0xa059,	// (0x000a58ed) bg_popup_call_pane_cp04

0xa661,	// (0x000a5ef5) list_conf_pane

0xa669,	// (0x000a5efd) popup_call_audio_conf_window_t1

0xa677,	// (0x000a5f0b) call_thumbnail_pane_g1

0xa67f,	// (0x000a5f13) bg_pinb_pane_ParamLimits

0xa67f,	// (0x000a5f13) bg_pinb_pane

0xa68d,	// (0x000a5f21) find_pinb_pane

0xa67f,	// (0x000a5f13) listscroll_pinb_pane_ParamLimits

0xa67f,	// (0x000a5f13) listscroll_pinb_pane

0xa697,	// (0x000a5f2b) pinb_bg_pane_g1

0xa697,	// (0x000a5f2b) pinb_bg_pane_g2

0xa697,	// (0x000a5f2b) pinb_bg_pane_g3

0xa697,	// (0x000a5f2b) pinb_bg_pane_g4

0xa697,	// (0x000a5f2b) pinb_bg_pane_g5

0xa697,	// (0x000a5f2b) pinb_bg_pane_g6

0xa697,	// (0x000a5f2b) pinb_bg_pane_g7

0xa697,	// (0x000a5f2b) pinb_bg_pane_g8

0xa697,	// (0x000a5f2b) pinb_bg_pane_g9

0xa697,	// (0x000a5f2b) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x000aa919) pinb_bg_pane_g

0x9c07,	// (0x000a549b) grid_pinb_pane

0x9c07,	// (0x000a549b) list_pinb_pane

0xa296,	// (0x000a5b2a) scroll_pane_cp01_ParamLimits

0xa296,	// (0x000a5b2a) scroll_pane_cp01

0xa6a1,	// (0x000a5f35) find_pinb_pane_g1_ParamLimits

0xa6a1,	// (0x000a5f35) find_pinb_pane_g1

0xa6b9,	// (0x000a5f4d) find_pinb_pane_t1

0xa6cb,	// (0x000a5f5f) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x000aa933) find_pinb_pane_t

0xa6e0,	// (0x000a5f74) input_focus_pane_cp01_ParamLimits

0xa6e0,	// (0x000a5f74) input_focus_pane_cp01

0xa6ec,	// (0x000a5f80) cell_pinb_pane_ParamLimits

0xa6ec,	// (0x000a5f80) cell_pinb_pane

0xa6fa,	// (0x000a5f8e) cell_pinb_pane_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) cell_pinb_pane_g1

0xa708,	// (0x000a5f9c) cell_pinb_pane_g2_ParamLimits

0xa708,	// (0x000a5f9c) cell_pinb_pane_g2

0xa708,	// (0x000a5f9c) cell_pinb_pane_g3_ParamLimits

0xa708,	// (0x000a5f9c) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x000aa938) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x000aa938) cell_pinb_pane_g

0xa059,	// (0x000a58ed) grid_highlight_pane_cp01

0xa6ec,	// (0x000a5f80) list_pinb_item_pane_ParamLimits

0xa6ec,	// (0x000a5f80) list_pinb_item_pane

0x9c07,	// (0x000a549b) list_highlight_pane_cp02

0xa716,	// (0x000a5faa) list_pinb_item_pane_g1_ParamLimits

0xa716,	// (0x000a5faa) list_pinb_item_pane_g1

0xa708,	// (0x000a5f9c) list_pinb_item_pane_g2_ParamLimits

0xa708,	// (0x000a5f9c) list_pinb_item_pane_g2

0xa6fa,	// (0x000a5f8e) list_pinb_item_pane_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_pinb_item_pane_g3

0xa708,	// (0x000a5f9c) list_pinb_item_pane_g4_ParamLimits

0xa708,	// (0x000a5f9c) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x000aa93f) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x000aa93f) list_pinb_item_pane_g

0xa724,	// (0x000a5fb8) list_pinb_item_pane_t1_ParamLimits

0xa724,	// (0x000a5fb8) list_pinb_item_pane_t1

0x0f9c,	// (0x0009c830) calc_display_pane

0x0fba,	// (0x0009c84e) calc_paper_pane

0x0fd6,	// (0x0009c86a) grid_calc_pane

0xa059,	// (0x000a58ed) bg_list_pane_cp01

0x1002,	// (0x0009c896) clock_g1

0x100a,	// (0x0009c89e) clock_g2

0x0001,

0xf0b4,	// (0x000aa948) clock_g

0x1014,	// (0x0009c8a8) clock_t1_ParamLimits

0x1014,	// (0x0009c8a8) clock_t1

0x1029,	// (0x0009c8bd) clock_t2_ParamLimits

0x1029,	// (0x0009c8bd) clock_t2

0x103b,	// (0x0009c8cf) clock_t3_ParamLimits

0x103b,	// (0x0009c8cf) clock_t3

0x104d,	// (0x0009c8e1) clock_t4_ParamLimits

0x104d,	// (0x0009c8e1) clock_t4

0x105f,	// (0x0009c8f3) clock_t5_ParamLimits

0x105f,	// (0x0009c8f3) clock_t5

0x1074,	// (0x0009c908) clock_t6_ParamLimits

0x1074,	// (0x0009c908) clock_t6

0x1086,	// (0x0009c91a) clock_t7_ParamLimits

0x1086,	// (0x0009c91a) clock_t7

0x1098,	// (0x0009c92c) clock_t8_ParamLimits

0x1098,	// (0x0009c92c) clock_t8

0x10ae,	// (0x0009c942) clock_t9_ParamLimits

0x10ae,	// (0x0009c942) clock_t9

0x0008,

0xf0b9,	// (0x000aa94d) clock_t_ParamLimits

0xf0b9,	// (0x000aa94d) clock_t

0xa738,	// (0x000a5fcc) popup_clock_analogue_window_cp02

0xa738,	// (0x000a5fcc) popup_clock_digital_window_cp01

0xa059,	// (0x000a58ed) listscroll_help_pane

0xa059,	// (0x000a58ed) phob_pre_status_pane

0xa740,	// (0x000a5fd4) grid_qdial_pane

0xa67f,	// (0x000a5f13) listscroll_mce_pane

0xa67f,	// (0x000a5f13) bg_notes_pane

0xa74a,	// (0x000a5fde) list_notes_pane

0x10c4,	// (0x0009c958) scroll_pane_cp06

0xa758,	// (0x000a5fec) bg_calc_paper_pane

0x10d3,	// (0x0009c967) list_calc_pane

0xa76c,	// (0x000a6000) bg_calc_display_pane

0x10ed,	// (0x0009c981) calc_display_pane_t1

0x1102,	// (0x0009c996) calc_display_pane_t2

0x1117,	// (0x0009c9ab) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x000aa960) calc_display_pane_t

0x1129,	// (0x0009c9bd) cell_calc_pane_ParamLimits

0x1129,	// (0x0009c9bd) cell_calc_pane

0xa778,	// (0x000a600c) bg_calc_paper_pane_g1

0xa784,	// (0x000a6018) bg_calc_paper_pane_g2

0xa790,	// (0x000a6024) bg_calc_paper_pane_g3

0xa79c,	// (0x000a6030) bg_calc_paper_pane_g4

0xa7a8,	// (0x000a603c) bg_calc_paper_pane_g5

0x1158,	// (0x0009c9ec) bg_calc_paper_pane_g6

0x1169,	// (0x0009c9fd) bg_calc_paper_pane_g7

0x117a,	// (0x0009ca0e) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x000aa967) bg_calc_paper_pane_g

0x118b,	// (0x0009ca1f) calc_bg_paper_pane_g9

0x119c,	// (0x0009ca30) list_calc_item_pane_ParamLimits

0x119c,	// (0x0009ca30) list_calc_item_pane

0xa7b4,	// (0x000a6048) list_calc_item_pane_g1

0x11bd,	// (0x0009ca51) list_calc_item_pane_t1_ParamLimits

0x11bd,	// (0x0009ca51) list_calc_item_pane_t1

0x11cf,	// (0x0009ca63) list_calc_item_pane_t2_ParamLimits

0x11cf,	// (0x0009ca63) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x000aa978) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x000aa978) list_calc_item_pane_t

0xa697,	// (0x000a5f2b) cell_calc_pane_g1

0xa7c1,	// (0x000a6055) grid_highlight_pane_cp02

0xd773,	// (0x000a9007) bg_calc_display_pane_g1

0x11ff,	// (0x0009ca93) bg_calc_display_pane_g2

0xd77c,	// (0x000a9010) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x000aa982) bg_calc_display_pane_g

0x1209,	// (0x0009ca9d) cell_qdial_pane_ParamLimits

0x1209,	// (0x0009ca9d) cell_qdial_pane

0x121f,	// (0x0009cab3) cell_qdial_pane_g1_ParamLimits

0x121f,	// (0x0009cab3) cell_qdial_pane_g1

0x122c,	// (0x0009cac0) cell_qdial_pane_g2_ParamLimits

0x122c,	// (0x0009cac0) cell_qdial_pane_g2

0xa7e3,	// (0x000a6077) cell_qdial_pane_g3_ParamLimits

0xa7e3,	// (0x000a6077) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x000aa989) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x000aa989) cell_qdial_pane_g

0x124a,	// (0x0009cade) cell_qdial_pane_t1_ParamLimits

0x124a,	// (0x0009cade) cell_qdial_pane_t1

0x1262,	// (0x0009caf6) cell_qdial_pane_t2_ParamLimits

0x1262,	// (0x0009caf6) cell_qdial_pane_t2

0x1275,	// (0x0009cb09) cell_qdial_pane_t3_ParamLimits

0x1275,	// (0x0009cb09) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x000aa992) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x000aa992) cell_qdial_pane_t

0xa059,	// (0x000a58ed) grid_highlight_pane_cp04

0xa7ef,	// (0x000a6083) thumbnail_qdial_pane_ParamLimits

0xa7ef,	// (0x000a6083) thumbnail_qdial_pane

0xa84b,	// (0x000a60df) list_help_pane

0xa854,	// (0x000a60e8) scroll_pane_cp02

0x1288,	// (0x0009cb1c) help_list_pane_t1_ParamLimits

0x1288,	// (0x0009cb1c) help_list_pane_t1

0x12af,	// (0x0009cb43) bg_notes_pane_g2

0x12b7,	// (0x0009cb4b) bg_notes_pane_g3

0x12bf,	// (0x0009cb53) notes_bg_pane_g1

0x12c7,	// (0x0009cb5b) notes_bg_pane_g4

0x12cf,	// (0x0009cb63) notes_bg_pane_g5

0x12d7,	// (0x0009cb6b) notes_bg_pane_g6

0x12df,	// (0x0009cb73) notes_bg_pane_g7

0x12e7,	// (0x0009cb7b) notes_bg_pane_g8

0x12ef,	// (0x0009cb83) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x000aa9b0) notes_bg_pane_g

0x12f7,	// (0x0009cb8b) list_notes_text_pane_ParamLimits

0x12f7,	// (0x0009cb8b) list_notes_text_pane

0xa85d,	// (0x000a60f1) list_notes_text_pane_g1

0x131f,	// (0x0009cbb3) list_notes_text_pane_t1

0x132d,	// (0x0009cbc1) listscroll_cale_week_pane

0x1359,	// (0x0009cbed) bg_cale_heading_pane

0x1382,	// (0x0009cc16) bg_cale_pane_cp01

0x13a4,	// (0x0009cc38) cale_week_corner_pane

0x13c3,	// (0x0009cc57) cale_week_day_heading_pane

0x13f1,	// (0x0009cc85) cale_week_scroll_pane_g1

0x1415,	// (0x0009cca9) cale_week_scroll_pane_g2

0x142d,	// (0x0009ccc1) cale_week_scroll_pane_g3

0x1445,	// (0x0009ccd9) cale_week_scroll_pane_g4

0x145d,	// (0x0009ccf1) cale_week_scroll_pane_g5

0x1475,	// (0x0009cd09) cale_week_scroll_pane_g6

0x1495,	// (0x0009cd29) cale_week_scroll_pane_g7

0x14b5,	// (0x0009cd49) cale_week_scroll_pane_g8

0x14d5,	// (0x0009cd69) cale_week_scroll_pane_g9

0x14f2,	// (0x0009cd86) cale_week_scroll_pane_g10

0x150f,	// (0x0009cda3) cale_week_scroll_pane_g11

0x152e,	// (0x0009cdc2) cale_week_scroll_pane_g12

0x1553,	// (0x0009cde7) cale_week_scroll_pane_g13

0x157c,	// (0x0009ce10) cale_week_scroll_pane_g14

0x15a5,	// (0x0009ce39) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x000aa9bf) cale_week_scroll_pane_g

0x15ee,	// (0x0009ce82) cale_week_time_pane

0x160e,	// (0x0009cea2) grid_cale_week_pane

0xa892,	// (0x000a6126) scroll_pane_cp08

0x163f,	// (0x0009ced3) cell_cale_week_pane_ParamLimits

0x163f,	// (0x0009ced3) cell_cale_week_pane

0x16cf,	// (0x0009cf63) cale_week_day_heading_pane_t1

0x16f7,	// (0x0009cf8b) cale_week_day_heading_pane_t2

0x1724,	// (0x0009cfb8) cale_week_day_heading_pane_t3

0x1751,	// (0x0009cfe5) cale_week_day_heading_pane_t4

0x177e,	// (0x0009d012) cale_week_day_heading_pane_t5

0x17ab,	// (0x0009d03f) cale_week_day_heading_pane_t6

0x17d8,	// (0x0009d06c) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x000aa9e0) cale_week_day_heading_pane_t

0xa8af,	// (0x000a6143) bg_cale_side_pane

0x1800,	// (0x0009d094) cale_week_time_pane_t1

0x1824,	// (0x0009d0b8) cale_week_time_pane_t2

0x1848,	// (0x0009d0dc) cale_week_time_pane_t3

0x186c,	// (0x0009d100) cale_week_time_pane_t4

0x1890,	// (0x0009d124) cale_week_time_pane_t5

0x18b6,	// (0x0009d14a) cale_week_time_pane_t6

0x18de,	// (0x0009d172) cale_week_time_pane_t7

0x190a,	// (0x0009d19e) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x000aa9ef) cale_week_time_pane_t

0x193a,	// (0x0009d1ce) cell_cale_week_pane_g2

0x195e,	// (0x0009d1f2) cell_cale_week_pane_g3_ParamLimits

0x195e,	// (0x0009d1f2) cell_cale_week_pane_g3

0xa8bd,	// (0x000a6151) grid_highlight_pane_cp07

0xa8c5,	// (0x000a6159) listscroll_gms_pane

0xa8cf,	// (0x000a6163) grid_gms_pane

0xa8d8,	// (0x000a616c) listscroll_gms_pane_g1

0xa8e0,	// (0x000a6174) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x000aaa00) listscroll_gms_pane_g

0x1976,	// (0x0009d20a) scroll_pane_cp010

0x1981,	// (0x0009d215) cell_gms_pane_ParamLimits

0x1981,	// (0x0009d215) cell_gms_pane

0x1994,	// (0x0009d228) cell_gms_pane_g1

0xa8e8,	// (0x000a617c) cell_gms_pane_g2

0xa8f0,	// (0x000a6184) cell_gms_pane_g3

0xa8f9,	// (0x000a618d) cell_gms_pane_g4

0x0003,

0xf171,	// (0x000aaa05) cell_gms_pane_g

0xa902,	// (0x000a6196) grid_highlight_pane_cp09

0x3b3f,	// (0x0009f3d3) phob_pre_status_pane_g1

0x3b47,	// (0x0009f3db) phob_pre_status_pane_g2

0x3b4f,	// (0x0009f3e3) phob_pre_status_pane_g3

0x3b57,	// (0x0009f3eb) phob_pre_status_pane_g4

0x0004,

0xf4fc,	// (0x000aad90) phob_pre_status_pane_g

0x3b67,	// (0x0009f3fb) phob_pre_status_pane_t1

0x3b77,	// (0x0009f40b) phob_pre_status_pane_t2

0x3b87,	// (0x0009f41b) phob_pre_status_pane_t3

0x0002,

0xf507,	// (0x000aad9b) phob_pre_status_pane_t

0xa90a,	// (0x000a619e) bg_list_pane_cp05

0x19a4,	// (0x0009d238) grid_vorec_pane

0x19ae,	// (0x0009d242) vorec_t1

0x19bc,	// (0x0009d250) vorec_t2

0x19ca,	// (0x0009d25e) vorec_t3

0x19d8,	// (0x0009d26c) vorec_t4

0x8fe7,	// (0x000a487b) vorec_t5

0x8ff5,	// (0x000a4889) vorec_t6

0x0004,

0xf17a,	// (0x000aaa0e) vorec_t

0x9003,	// (0x000a4897) wait_bar_pane_cp01

0x19f4,	// (0x0009d288) cell_vorec_pane_ParamLimits

0x19f4,	// (0x0009d288) cell_vorec_pane

0x1a09,	// (0x0009d29d) cell_vorec_pane_g1

0xa059,	// (0x000a58ed) grid_highlight_pane_cp05

0xa6ec,	// (0x000a5f80) cams_zoom_pane

0xa6ec,	// (0x000a5f80) image_vga_pane

0xa708,	// (0x000a5f9c) main_camera_pane_g1

0xa708,	// (0x000a5f9c) main_camera_pane_g2

0xa708,	// (0x000a5f9c) main_camera_pane_g3

0xa708,	// (0x000a5f9c) main_camera_pane_g4

0xa708,	// (0x000a5f9c) main_camera_pane_g5

0xa708,	// (0x000a5f9c) main_camera_pane_g6

0xa708,	// (0x000a5f9c) main_camera_pane_g7

0x0007,

0xf185,	// (0x000aaa19) main_camera_pane_g

0xb347,	// (0x000a6bdb) main_camera_pane_t1

0xb347,	// (0x000a6bdb) main_camera_pane_t2

0x0001,

0xf196,	// (0x000aaa2a) main_camera_pane_t

0x1a13,	// (0x0009d2a7) cams_zoom_pane_cp_ParamLimits

0x1a13,	// (0x0009d2a7) cams_zoom_pane_cp

0x1a41,	// (0x0009d2d5) image_cif_pane_ParamLimits

0x1a41,	// (0x0009d2d5) image_cif_pane

0x9c07,	// (0x000a549b) image_subqcif_pane

0x1a4f,	// (0x0009d2e3) main_video_pane_g1_ParamLimits

0x1a4f,	// (0x0009d2e3) main_video_pane_g1

0x1a77,	// (0x0009d30b) main_video_pane_g2_ParamLimits

0x1a77,	// (0x0009d30b) main_video_pane_g2

0x1aaa,	// (0x0009d33e) main_video_pane_g3_ParamLimits

0x1aaa,	// (0x0009d33e) main_video_pane_g3

0x1aaa,	// (0x0009d33e) main_video_pane_g4_ParamLimits

0x1aaa,	// (0x0009d33e) main_video_pane_g4

0x1ad8,	// (0x0009d36c) main_video_pane_g5_ParamLimits

0x1ad8,	// (0x0009d36c) main_video_pane_g5

0xa912,	// (0x000a61a6) main_video_pane_g6_ParamLimits

0xa912,	// (0x000a61a6) main_video_pane_g6

0x0006,

0xf19b,	// (0x000aaa2f) main_video_pane_g_ParamLimits

0xf19b,	// (0x000aaa2f) main_video_pane_g

0x1af4,	// (0x0009d388) main_video_pane_t1_ParamLimits

0x1af4,	// (0x0009d388) main_video_pane_t1

0xa99c,	// (0x000a6230) cams_zoom_pane_g1

0xa99c,	// (0x000a6230) cams_zoom_pane_g2

0xa99c,	// (0x000a6230) cams_zoom_pane_g3

0xa99c,	// (0x000a6230) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x000aaa3e) cams_zoom_pane_g

0x1b3a,	// (0x0009d3ce) grid_cams_pane

0x1b48,	// (0x0009d3dc) linegrid_cams_pane

0x1b54,	// (0x0009d3e8) cell_cams_pane_ParamLimits

0x1b54,	// (0x0009d3e8) cell_cams_pane

0xa9a6,	// (0x000a623a) cams_burst_image_pane

0xa9ae,	// (0x000a6242) cell_cams_pane_g1

0xa059,	// (0x000a58ed) grid_highlight_pane_cp03

0xa697,	// (0x000a5f2b) mp_bg_pane_g1

0x9c07,	// (0x000a549b) bg_list_pane_cp03

0x9c07,	// (0x000a549b) bg_mp_pane

0x9c07,	// (0x000a549b) grid_mp_pane

0xa99c,	// (0x000a6230) media_player_g1

0xaeee,	// (0x000a6782) media_player_t1

0xaeee,	// (0x000a6782) media_player_t2

0xaeee,	// (0x000a6782) media_player_t3

0xaeee,	// (0x000a6782) media_player_t4

0xaeee,	// (0x000a6782) media_player_t5

0xaeee,	// (0x000a6782) media_player_t6

0xaeee,	// (0x000a6782) media_player_t7

0x0006,

0xf4e6,	// (0x000aad7a) media_player_t

0x9c07,	// (0x000a549b) wait_bar_pane_cp02

0xf4cb,	// (0x000aad5f) main_usb_pane_t

0xb165,	// (0x000a69f9) cell_mp_pane

0xa697,	// (0x000a5f2b) cell_mp_pane_g1

0xa059,	// (0x000a58ed) grid_highlight_pane_cp06

0xa9b6,	// (0x000a624a) grid_skin_colour_pane

0xa9be,	// (0x000a6252) list_highlight_pane_cp03

0x1b69,	// (0x0009d3fd) skin_g1

0xa9c6,	// (0x000a625a) skin_t1

0xa9d5,	// (0x000a6269) skin_t2

0x0001,

0xf1d8,	// (0x000aaa6c) skin_t

0x1b73,	// (0x0009d407) cell_skin_colour_pane_ParamLimits

0x1b73,	// (0x0009d407) cell_skin_colour_pane

0xa9e3,	// (0x000a6277) cell_skin_colour_pane_g1

0x1bf3,	// (0x0009d487) call_video_g1_ParamLimits

0x1bf3,	// (0x0009d487) call_video_g1

0x1c03,	// (0x0009d497) call_video_g2_ParamLimits

0x1c03,	// (0x0009d497) call_video_g2

0x0001,

0xf1dd,	// (0x000aaa71) call_video_g_ParamLimits

0xf1dd,	// (0x000aaa71) call_video_g

0x1c53,	// (0x0009d4e7) call_video_uplink_pane_cp1_ParamLimits

0x1c53,	// (0x0009d4e7) call_video_uplink_pane_cp1

0xa9f5,	// (0x000a6289) call_video_uplink_pane_cp2

0x1d21,	// (0x0009d5b5) video_down_crop_pane_ParamLimits

0x1d21,	// (0x0009d5b5) video_down_crop_pane

0x1e13,	// (0x0009d6a7) video_down_pane_ParamLimits

0x1e13,	// (0x0009d6a7) video_down_pane

0xa9fd,	// (0x000a6291) video_down_subqcif_pane_ParamLimits

0xa9fd,	// (0x000a6291) video_down_subqcif_pane

0xaa17,	// (0x000a62ab) video_down_subqcif_pane_cp_ParamLimits

0xaa17,	// (0x000a62ab) video_down_subqcif_pane_cp

0xaa3f,	// (0x000a62d3) im_reading_pane_ParamLimits

0xaa3f,	// (0x000a62d3) im_reading_pane

0x1f30,	// (0x0009d7c4) im_writing_pane_ParamLimits

0x1f30,	// (0x0009d7c4) im_writing_pane

0x1f4e,	// (0x0009d7e2) im_reading_pane_t1

0xaa59,	// (0x000a62ed) list_im_pane

0xaa6a,	// (0x000a62fe) scroll_pane_cp07

0x1f90,	// (0x0009d824) im_writing_pane_t1_ParamLimits

0x1f90,	// (0x0009d824) im_writing_pane_t1

0xaa83,	// (0x000a6317) im_writing_pane_t2_ParamLimits

0xaa83,	// (0x000a6317) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x000aaa7b) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x000aaa7b) im_writing_pane_t

0xa059,	// (0x000a58ed) input_focus_pane_cp04

0xa059,	// (0x000a58ed) input_focus_pane_cp05

0x1fa2,	// (0x0009d836) list_im_single_pane_ParamLimits

0x1fa2,	// (0x0009d836) list_im_single_pane

0xaaa0,	// (0x000a6334) list_single_im_pane_t1

0xa90a,	// (0x000a619e) blid_accuracy_pane

0xa90a,	// (0x000a619e) blid_compass_pane

0xc5f9,	// (0x000a7e8d) main_location_t1

0xc5f9,	// (0x000a7e8d) main_location_t2

0xc5f9,	// (0x000a7e8d) main_location_t3

0x0002,

0xf4f5,	// (0x000aad89) main_location_t

0xa059,	// (0x000a58ed) aid_levels_location

0xa697,	// (0x000a5f2b) blid_accuracy_pane_g1

0xa697,	// (0x000a5f2b) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x000aaacf) blid_accuracy_pane_g

0xaada,	// (0x000a636e) wml_content_pane

0xab18,	// (0x000a63ac) wml_button_pane_ParamLimits

0xab18,	// (0x000a63ac) wml_button_pane

0x1fbb,	// (0x0009d84f) wml_list_single_large_pane_ParamLimits

0x1fbb,	// (0x0009d84f) wml_list_single_large_pane

0x1fdd,	// (0x0009d871) wml_list_single_medium_pane_ParamLimits

0x1fdd,	// (0x0009d871) wml_list_single_medium_pane

0x2000,	// (0x0009d894) wml_list_single_small_pane_ParamLimits

0x2000,	// (0x0009d894) wml_list_single_small_pane

0xab2c,	// (0x000a63c0) wml_selection_box_pane_ParamLimits

0xab2c,	// (0x000a63c0) wml_selection_box_pane

0xab3f,	// (0x000a63d3) wml_list_single_pane_t1

0xab4e,	// (0x000a63e2) wml_list_single_medium_pane_t1

0xab5d,	// (0x000a63f1) wml_list_single_large_pane_t1

0xab6c,	// (0x000a6400) input_focus_pane_cp02_ParamLimits

0xab6c,	// (0x000a6400) input_focus_pane_cp02

0xab7f,	// (0x000a6413) wml_selection_box_pane_g1

0xab88,	// (0x000a641c) wml_selection_box_pane_t1_ParamLimits

0xab88,	// (0x000a641c) wml_selection_box_pane_t1

0xa67f,	// (0x000a5f13) bg_wml_button_pane_ParamLimits

0xa67f,	// (0x000a5f13) bg_wml_button_pane

0xaba0,	// (0x000a6434) wml_button_pane_g1

0xaba8,	// (0x000a643c) wml_button_pane_t1

0xaba0,	// (0x000a6434) wml_button_bg_pane_g1

0xabb8,	// (0x000a644c) wml_button_bg_pane_g2

0xabc0,	// (0x000a6454) wml_button_bg_pane_g3

0xabc8,	// (0x000a645c) wml_button_bg_pane_g4

0xabd0,	// (0x000a6464) wml_button_bg_pane_g5

0xabd8,	// (0x000a646c) wml_button_bg_pane_g6

0xabe0,	// (0x000a6474) wml_button_bg_pane_g7

0xabe8,	// (0x000a647c) wml_button_bg_pane_g8

0xabf0,	// (0x000a6484) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x000aaa80) wml_button_bg_pane_g

0x2028,	// (0x0009d8bc) bg_list_pane_cp02

0xabf8,	// (0x000a648c) mce_header_pane_ParamLimits

0xabf8,	// (0x000a648c) mce_header_pane

0xac0e,	// (0x000a64a2) mce_icon_pane

0xac0e,	// (0x000a64a2) mce_image_pane

0xac17,	// (0x000a64ab) mce_text_pane_ParamLimits

0xac17,	// (0x000a64ab) mce_text_pane

0x2032,	// (0x0009d8c6) scroll_pane_cp03

0xab10,	// (0x000a63a4) scroll_pane_cp04

0xac2a,	// (0x000a64be) scroll_pane_cp05_ParamLimits

0xac2a,	// (0x000a64be) scroll_pane_cp05

0x203c,	// (0x0009d8d0) mce_header_field_pane_ParamLimits

0x203c,	// (0x0009d8d0) mce_header_field_pane

0x205e,	// (0x0009d8f2) mce_header_field_pane_2_ParamLimits

0x205e,	// (0x0009d8f2) mce_header_field_pane_2

0x2074,	// (0x0009d908) mce_header_field_pane_3

0x207c,	// (0x0009d910) list_single_mce_message_pane_ParamLimits

0x207c,	// (0x0009d910) list_single_mce_message_pane

0x209b,	// (0x0009d92f) list_single_mce_smart_pane_ParamLimits

0x209b,	// (0x0009d92f) list_single_mce_smart_pane

0xac36,	// (0x000a64ca) input_focus_pane_cp03

0xac3f,	// (0x000a64d3) list_header_data_pane

0x20c5,	// (0x0009d959) mce_header_field_pane_t1

0x20d5,	// (0x0009d969) list_single_mce_header_pane_ParamLimits

0x20d5,	// (0x0009d969) list_single_mce_header_pane

0xac47,	// (0x000a64db) list_single_mce_header_pane_t1

0xac56,	// (0x000a64ea) list_single_mce_message_pane_g1

0xac5e,	// (0x000a64f2) list_single_mce_message_pane_t1

0x2119,	// (0x0009d9ad) bg_cale_heading_pane_cp01_ParamLimits

0x2119,	// (0x0009d9ad) bg_cale_heading_pane_cp01

0xac6c,	// (0x000a6500) bg_cale_pane_cp02_ParamLimits

0xac6c,	// (0x000a6500) bg_cale_pane_cp02

0x216b,	// (0x0009d9ff) cale_month_corner_pane

0x218a,	// (0x0009da1e) cale_month_day_heading_pane_ParamLimits

0x218a,	// (0x0009da1e) cale_month_day_heading_pane

0x21ec,	// (0x0009da80) cale_month_pane_g1_ParamLimits

0x21ec,	// (0x0009da80) cale_month_pane_g1

0x2233,	// (0x0009dac7) cale_month_pane_g2_ParamLimits

0x2233,	// (0x0009dac7) cale_month_pane_g2

0x226b,	// (0x0009daff) cale_month_pane_g3_ParamLimits

0x226b,	// (0x0009daff) cale_month_pane_g3

0x22bf,	// (0x0009db53) cale_month_pane_g4_ParamLimits

0x22bf,	// (0x0009db53) cale_month_pane_g4

0x2313,	// (0x0009dba7) cale_month_pane_g5_ParamLimits

0x2313,	// (0x0009dba7) cale_month_pane_g5

0x2367,	// (0x0009dbfb) cale_month_pane_g6_ParamLimits

0x2367,	// (0x0009dbfb) cale_month_pane_g6

0x23cb,	// (0x0009dc5f) cale_month_pane_g7_ParamLimits

0x23cb,	// (0x0009dc5f) cale_month_pane_g7

0x242f,	// (0x0009dcc3) cale_month_pane_g8_ParamLimits

0x242f,	// (0x0009dcc3) cale_month_pane_g8

0x2493,	// (0x0009dd27) cale_month_pane_g9_ParamLimits

0x2493,	// (0x0009dd27) cale_month_pane_g9

0x24ed,	// (0x0009dd81) cale_month_pane_g10_ParamLimits

0x24ed,	// (0x0009dd81) cale_month_pane_g10

0x253f,	// (0x0009ddd3) cale_month_pane_g11_ParamLimits

0x253f,	// (0x0009ddd3) cale_month_pane_g11

0x258d,	// (0x0009de21) cale_month_pane_g12_ParamLimits

0x258d,	// (0x0009de21) cale_month_pane_g12

0x25dd,	// (0x0009de71) cale_month_pane_g13_ParamLimits

0x25dd,	// (0x0009de71) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x000aaa93) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x000aaa93) cale_month_pane_g

0x262d,	// (0x0009dec1) cale_month_week_pane

0x264d,	// (0x0009dee1) grid_cale_month_pane_ParamLimits

0x264d,	// (0x0009dee1) grid_cale_month_pane

0x26a6,	// (0x0009df3a) cale_month_day_heading_pane_t1

0x2728,	// (0x0009dfbc) cale_month_day_heading_pane_t2

0x27a1,	// (0x0009e035) cale_month_day_heading_pane_t3

0x281a,	// (0x0009e0ae) cale_month_day_heading_pane_t4

0x2893,	// (0x0009e127) cale_month_day_heading_pane_t5

0x2914,	// (0x0009e1a8) cale_month_day_heading_pane_t6

0x299d,	// (0x0009e231) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x000aaaae) cale_month_day_heading_pane_t

0xa8af,	// (0x000a6143) bg_cale_side_pane_cp01

0x2a26,	// (0x0009e2ba) cale_month_week_pane_t1

0x2a3f,	// (0x0009e2d3) cale_month_week_pane_t2

0x2a58,	// (0x0009e2ec) cale_month_week_pane_t3

0x2a71,	// (0x0009e305) cale_month_week_pane_t4

0x2a8a,	// (0x0009e31e) cale_month_week_pane_t5

0x2aa7,	// (0x0009e33b) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x000aaabd) cale_month_week_pane_t

0x2aca,	// (0x0009e35e) cell_cale_month_pane_ParamLimits

0x2aca,	// (0x0009e35e) cell_cale_month_pane

0x2bf8,	// (0x0009e48c) cell_cale_month_pane_g1

0x2c04,	// (0x0009e498) cell_cale_month_pane_t1_ParamLimits

0x2c04,	// (0x0009e498) cell_cale_month_pane_t1

0xa8bd,	// (0x000a6151) grid_highlight_pane_cp08

0xa697,	// (0x000a5f2b) main_smil_g1

0x2c30,	// (0x0009e4c4) smil_status_pane

0xacab,	// (0x000a653f) smil_text_pane

0xc50f,	// (0x000a7da3) bg_popup_call3_rect_pane_g8

0xc517,	// (0x000a7dab) bg_popup_call3_rect_pane_g9

0x0008,

0xf489,	// (0x000aad1d) bg_popup_call3_rect_pane_g

0xc6c2,	// (0x000a7f56) smil_status_volume_pane_g1

0xacb5,	// (0x000a6549) smil_status_pane_t1

0x3f1c,	// (0x0009f7b0) volume_smil_pane

0xaccc,	// (0x000a6560) list_smil_text_pane

0x2c43,	// (0x0009e4d7) scroll_pane_cp011

0x2c4e,	// (0x0009e4e2) smil_text_list_pane_t1_ParamLimits

0x2c4e,	// (0x0009e4e2) smil_text_list_pane_t1

0x2ca2,	// (0x0009e536) aid_volume_smil_ParamLimits

0x2ca2,	// (0x0009e536) aid_volume_smil

0xa697,	// (0x000a5f2b) smil_volume_pane_g1

0xa697,	// (0x000a5f2b) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x000aaacf) smil_volume_pane_g

0x132d,	// (0x0009cbc1) listscroll_cale_day_pane

0xacd6,	// (0x000a656a) bg_cale_pane

0xacee,	// (0x000a6582) list_cale_pane

0xad11,	// (0x000a65a5) scroll_pane_cp09

0xad22,	// (0x000a65b6) cale_bg_pane_g1

0xad2a,	// (0x000a65be) cale_bg_pane_g2

0xad32,	// (0x000a65c6) cale_bg_pane_g3

0xad3a,	// (0x000a65ce) cale_bg_pane_g4

0xad42,	// (0x000a65d6) cale_bg_pane_g5

0xad4a,	// (0x000a65de) cale_bg_pane_g6

0xad52,	// (0x000a65e6) cale_bg_pane_g7

0xad5a,	// (0x000a65ee) cale_bg_pane_g8

0xad62,	// (0x000a65f6) cale_bg_pane_g9

0x0008,

0xf240,	// (0x000aaad4) cale_bg_pane_g

0xad6a,	// (0x000a65fe) list_cale_time_pane_ParamLimits

0xad6a,	// (0x000a65fe) list_cale_time_pane

0xad81,	// (0x000a6615) list_cale_time_pane_g1_ParamLimits

0xad81,	// (0x000a6615) list_cale_time_pane_g1

0xad8d,	// (0x000a6621) list_cale_time_pane_g2_ParamLimits

0xad8d,	// (0x000a6621) list_cale_time_pane_g2

0x2ccc,	// (0x0009e560) list_cale_time_pane_g3_ParamLimits

0x2ccc,	// (0x0009e560) list_cale_time_pane_g3

0x2cda,	// (0x0009e56e) list_cale_time_pane_g4_ParamLimits

0x2cda,	// (0x0009e56e) list_cale_time_pane_g4

0x2ce8,	// (0x0009e57c) list_cale_time_pane_g5_ParamLimits

0x2ce8,	// (0x0009e57c) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x000aaae7) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x000aaae7) list_cale_time_pane_g

0xada7,	// (0x000a663b) list_cale_time_pane_t1_ParamLimits

0xada7,	// (0x000a663b) list_cale_time_pane_t1

0xadcf,	// (0x000a6663) list_cale_time_pane_t2_ParamLimits

0xadcf,	// (0x000a6663) list_cale_time_pane_t2

0x2fba,	// (0x0009e84e) aid_blid_cardinal_pane

0x2ffc,	// (0x0009e890) compass_pane_t4

0xadf7,	// (0x000a668b) list_cale_time_pane_t4_ParamLimits

0xadf7,	// (0x000a668b) list_cale_time_pane_t4

0x300a,	// (0x0009e89e) compass_pane_t5

0x301a,	// (0x0009e8ae) compass_pane_t6

0x3028,	// (0x0009e8bc) compass_pane_t7

0xb215,	// (0x000a6aa9) navi_pane_cc_t1

0xb376,	// (0x000a6c0a) aid_phob_thumbnail_center_pane

0x35d3,	// (0x0009ee67) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x000aaaf4) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x000aaaf4) list_cale_time_pane_t

0x9cb0,	// (0x000a5544) bg_popup_window_pane_cp02_ParamLimits

0x9cb0,	// (0x000a5544) bg_popup_window_pane_cp02

0xae1f,	// (0x000a66b3) heading_pane_cp01_ParamLimits

0xae1f,	// (0x000a66b3) heading_pane_cp01

0xae2b,	// (0x000a66bf) loc_req_pane_ParamLimits

0xae2b,	// (0x000a66bf) loc_req_pane

0xae3b,	// (0x000a66cf) loc_type_pane_ParamLimits

0xae3b,	// (0x000a66cf) loc_type_pane

0xae4d,	// (0x000a66e1) loc_type_pane_t1_ParamLimits

0xae4d,	// (0x000a66e1) loc_type_pane_t1

0xae5f,	// (0x000a66f3) loc_type_pane_t2_ParamLimits

0xae5f,	// (0x000a66f3) loc_type_pane_t2

0xae71,	// (0x000a6705) loc_type_pane_t3_ParamLimits

0xae71,	// (0x000a6705) loc_type_pane_t3

0x0002,

0xf267,	// (0x000aaafb) loc_type_pane_t_ParamLimits

0xf267,	// (0x000aaafb) loc_type_pane_t

0xae83,	// (0x000a6717) list_loc_req_pane

0xae8d,	// (0x000a6721) scroll_pane_cp012

0x2cf6,	// (0x0009e58a) list_single_loc_request_popup_menu_pane_ParamLimits

0x2cf6,	// (0x0009e58a) list_single_loc_request_popup_menu_pane

0xae98,	// (0x000a672c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae98,	// (0x000a672c) list_single_loc_request_popup_menu_pane_g1

0xaea4,	// (0x000a6738) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaea4,	// (0x000a6738) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x000aab02) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x000aab02) list_single_loc_request_popup_menu_pane_g

0xaeb0,	// (0x000a6744) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaeb0,	// (0x000a6744) list_single_loc_request_popup_menu_pane_t1

0x2d08,	// (0x0009e59c) bg_popup_window_pane_cp03_ParamLimits

0x2d08,	// (0x0009e59c) bg_popup_window_pane_cp03

0x2d16,	// (0x0009e5aa) heading_loc_req_pane_ParamLimits

0x2d16,	// (0x0009e5aa) heading_loc_req_pane

0x2d22,	// (0x0009e5b6) popup_dyc_status_message_window_g1_ParamLimits

0x2d22,	// (0x0009e5b6) popup_dyc_status_message_window_g1

0x2d2e,	// (0x0009e5c2) popup_dyc_status_message_window_t1_ParamLimits

0x2d2e,	// (0x0009e5c2) popup_dyc_status_message_window_t1

0x2d40,	// (0x0009e5d4) popup_dyc_status_message_window_t2_ParamLimits

0x2d40,	// (0x0009e5d4) popup_dyc_status_message_window_t2

0x2d52,	// (0x0009e5e6) popup_dyc_status_message_window_t3_ParamLimits

0x2d52,	// (0x0009e5e6) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x000aab07) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x000aab07) popup_dyc_status_message_window_t

0xa059,	// (0x000a58ed) bg_heading_pane_cp01

0xaec6,	// (0x000a675a) heading_loc_req_pane_g1

0xaece,	// (0x000a6762) heading_loc_req_pane_g2

0xaed6,	// (0x000a676a) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x000aab0e) heading_loc_req_pane_g

0xaede,	// (0x000a6772) heading_loc_req_pane_t1

0xaefe,	// (0x000a6792) bg_popup_sub_pane_cp01_ParamLimits

0xaefe,	// (0x000a6792) bg_popup_sub_pane_cp01

0xaf0c,	// (0x000a67a0) popup_cale_events_window_g1_ParamLimits

0xaf0c,	// (0x000a67a0) popup_cale_events_window_g1

0xaf2c,	// (0x000a67c0) popup_cale_events_window_g2_ParamLimits

0xaf2c,	// (0x000a67c0) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x000aab30) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x000aab30) popup_cale_events_window_g

0xaf4c,	// (0x000a67e0) popup_cale_events_window_t1_ParamLimits

0xaf4c,	// (0x000a67e0) popup_cale_events_window_t1

0xaf5e,	// (0x000a67f2) popup_cale_events_window_t2_ParamLimits

0xaf5e,	// (0x000a67f2) popup_cale_events_window_t2

0xaf9c,	// (0x000a6830) popup_cale_events_window_t3_ParamLimits

0xaf9c,	// (0x000a6830) popup_cale_events_window_t3

0xafd6,	// (0x000a686a) popup_cale_events_window_t4_ParamLimits

0xafd6,	// (0x000a686a) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x000aab35) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x000aab35) popup_cale_events_window_t

0x2d7c,	// (0x0009e610) call_type_pane

0xbd26,	// (0x000a75ba) popup_call_status_window_g1

0x2d88,	// (0x0009e61c) popup_call_status_window_g2

0x2d94,	// (0x0009e628) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x000aab3e) popup_call_status_window_g

0xb018,	// (0x000a68ac) call_type_pane_g1

0xb021,	// (0x000a68b5) call_type_pane_g2

0x0001,

0xf2b1,	// (0x000aab45) call_type_pane_g

0xa059,	// (0x000a58ed) bg_popup_sub_pane_cp02

0xb02a,	// (0x000a68be) listscroll_popup_wml_pane

0xb032,	// (0x000a68c6) list_wml_pane

0xb03c,	// (0x000a68d0) scroll_pane_cp013

0xb047,	// (0x000a68db) list_single_graphic_popup_wml_pane_ParamLimits

0xb047,	// (0x000a68db) list_single_graphic_popup_wml_pane

0xa697,	// (0x000a5f2b) list_single_graphic_popup_wml_pane_g1

0xb05b,	// (0x000a68ef) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x000aab4a) list_single_graphic_popup_wml_pane_g

0xb063,	// (0x000a68f7) list_single_graphic_popup_wml_pane_t1

0xb079,	// (0x000a690d) aid_call_pane

0xa677,	// (0x000a5f0b) popup_clock_analogue_window_g1

0xa677,	// (0x000a5f0b) popup_clock_analogue_window_g2

0x2da0,	// (0x0009e634) popup_clock_analogue_window_g3

0x2da0,	// (0x0009e634) popup_clock_analogue_window_g4

0xa697,	// (0x000a5f2b) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x000aab4f) popup_clock_analogue_window_g

0x2da8,	// (0x0009e63c) popup_clock_analogue_window_t1

0x2db6,	// (0x0009e64a) clock_digital_number_pane_ParamLimits

0x2db6,	// (0x0009e64a) clock_digital_number_pane

0x2dc2,	// (0x0009e656) clock_digital_number_pane_cp02_ParamLimits

0x2dc2,	// (0x0009e656) clock_digital_number_pane_cp02

0x2dce,	// (0x0009e662) clock_digital_number_pane_cp03_ParamLimits

0x2dce,	// (0x0009e662) clock_digital_number_pane_cp03

0x2dda,	// (0x0009e66e) clock_digital_number_pane_cp04_ParamLimits

0x2dda,	// (0x0009e66e) clock_digital_number_pane_cp04

0x2de6,	// (0x0009e67a) clock_digital_separator_pane_ParamLimits

0x2de6,	// (0x0009e67a) clock_digital_separator_pane

0x2df2,	// (0x0009e686) popup_clock_digital_window_t1

0xa697,	// (0x000a5f2b) clock_digital_number_pane_g1

0xa697,	// (0x000a5f2b) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x000aaacf) clock_digital_number_pane_g

0xa697,	// (0x000a5f2b) clock_digital_separator_pane_g1

0xa697,	// (0x000a5f2b) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x000aaacf) clock_digital_separator_pane_g

0xa059,	// (0x000a58ed) bg_popup_window_pane_cp04

0xb081,	// (0x000a6915) heading_pane_cp03

0xa90a,	// (0x000a619e) listscroll_popup_gms_pane

0xa059,	// (0x000a58ed) grid_large_graphic_popup_pane

0xb08a,	// (0x000a691e) listscroll_popup_gms_pane_g1

0xb093,	// (0x000a6927) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x000aab5a) listscroll_popup_gms_pane_g

0xb09c,	// (0x000a6930) scroll_pane_cp014

0xa6ec,	// (0x000a5f80) cell_large_graphic_popup_pane_ParamLimits

0xa6ec,	// (0x000a5f80) cell_large_graphic_popup_pane

0xa6fa,	// (0x000a5f8e) cell_large_graphic_popup_pane_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) cell_large_graphic_popup_pane_g1

0xb0a5,	// (0x000a6939) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0a5,	// (0x000a6939) cell_large_graphic_popup_pane_g2

0xb0b3,	// (0x000a6947) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0b3,	// (0x000a6947) cell_large_graphic_popup_pane_g3

0xb0c1,	// (0x000a6955) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0c1,	// (0x000a6955) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x000aab5f) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x000aab5f) cell_large_graphic_popup_pane_g

0xa059,	// (0x000a58ed) grid_highlight_pane_cp010

0xa697,	// (0x000a5f2b) bg_popup_call_pane_g1

0xb0d2,	// (0x000a6966) list_single_graphic_popup_conf_pane_ParamLimits

0xb0d2,	// (0x000a6966) list_single_graphic_popup_conf_pane

0xb0e4,	// (0x000a6978) list_highlight_pane_cp01

0xb0ed,	// (0x000a6981) list_single_graphic_popup_conf_pane_g1

0xb0f5,	// (0x000a6989) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x000aab68) list_single_graphic_popup_conf_pane_g

0xb0fd,	// (0x000a6991) list_single_graphic_popup_conf_pane_t1

0xb10b,	// (0x000a699f) linegrid_cams_pane_g1

0x2e0f,	// (0x0009e6a3) linegrid_cams_pane_g2

0xa8f0,	// (0x000a6184) linegrid_cams_pane_g3

0xb114,	// (0x000a69a8) linegrid_cams_pane_g4

0x2e18,	// (0x0009e6ac) linegrid_cams_pane_g5

0x2e21,	// (0x0009e6b5) linegrid_cams_pane_g6

0xa8f9,	// (0x000a618d) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x000aab6d) linegrid_cams_pane_g

0xb11d,	// (0x000a69b1) popup_clock_analogue_window

0xb11d,	// (0x000a69b1) popup_clock_digital_window

0xa059,	// (0x000a58ed) popup_phob_thumbnail_window

0xa697,	// (0x000a5f2b) call_video_uplink_pane_g1

0xb126,	// (0x000a69ba) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x000aab7c) call_video_uplink_pane_g

0xb12e,	// (0x000a69c2) video_uplink_pane

0xb136,	// (0x000a69ca) mce_image_pane_g1

0x2e2c,	// (0x0009e6c0) mce_image_pane_g2

0x2e36,	// (0x0009e6ca) mce_image_pane_g3

0x2e40,	// (0x0009e6d4) mce_image_pane_g4

0x2e48,	// (0x0009e6dc) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x000aab81) mce_image_pane_g

0xb140,	// (0x000a69d4) control_top_pane_stacon_cp01_ParamLimits

0xb140,	// (0x000a69d4) control_top_pane_stacon_cp01

0xb154,	// (0x000a69e8) uni_indicator_pane_stacon_cp01_ParamLimits

0xb154,	// (0x000a69e8) uni_indicator_pane_stacon_cp01

0xb165,	// (0x000a69f9) bg_popup_sub_pane_cp03

0x2e50,	// (0x0009e6e4) chi_dic_find_pane

0x2e58,	// (0x0009e6ec) listscroll_chi_dic_pane

0x2e61,	// (0x0009e6f5) main_pane_chidic_g1

0x2e74,	// (0x0009e708) chi_dic_find_pane_t1

0xb16f,	// (0x000a6a03) find_chidic_pane

0xb178,	// (0x000a6a0c) chi_dic_list_pane_ParamLimits

0xb178,	// (0x000a6a0c) chi_dic_list_pane

0xb189,	// (0x000a6a1d) scroll_pane_cp020

0x2e82,	// (0x0009e716) find_chidic_pane_t1

0xa059,	// (0x000a58ed) input_focus_pane_cp06

0x2e91,	// (0x0009e725) list_chi_dic_pane_ParamLimits

0x2e91,	// (0x0009e725) list_chi_dic_pane

0x2ea6,	// (0x0009e73a) list_chi_dic_pane_t1_ParamLimits

0x2ea6,	// (0x0009e73a) list_chi_dic_pane_t1

0xa059,	// (0x000a58ed) list_highlight_pane_cp020

0xb191,	// (0x000a6a25) bg_cale_heading_pane_g1

0x2eb9,	// (0x0009e74d) bg_cale_heading_pane_g2

0x2ec1,	// (0x0009e755) bg_cale_heading_pane_g3

0x2ec9,	// (0x0009e75d) bg_cale_heading_pane_g4

0x2ed3,	// (0x0009e767) bg_cale_heading_pane_g5

0x2edd,	// (0x0009e771) bg_cale_heading_pane_g6

0x2ee5,	// (0x0009e779) bg_cale_heading_pane_g7

0x2eed,	// (0x0009e781) bg_cale_heading_pane_g8

0x2ef7,	// (0x0009e78b) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x000aab8c) bg_cale_heading_pane_g

0xb191,	// (0x000a6a25) bg_cale_side_pane_g1

0x2f01,	// (0x0009e795) bg_cale_side_pane_g2

0x2f0b,	// (0x0009e79f) bg_cale_side_pane_g3

0x2f15,	// (0x0009e7a9) bg_cale_side_pane_g4

0x2f1f,	// (0x0009e7b3) bg_cale_side_pane_g5

0x2f29,	// (0x0009e7bd) bg_cale_side_pane_g6

0x2f33,	// (0x0009e7c7) bg_cale_side_pane_g7

0x2f3d,	// (0x0009e7d1) bg_cale_side_pane_g8

0x2f45,	// (0x0009e7d9) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x000aab9f) bg_cale_side_pane_g

0x2f4d,	// (0x0009e7e1) popup_call_status_window_ParamLimits

0x2f4d,	// (0x0009e7e1) popup_call_status_window

0xb199,	// (0x000a6a2d) stacon_top_pane

0xb1a1,	// (0x000a6a35) status_pane_ParamLimits

0xb1a1,	// (0x000a6a35) status_pane

0xb1b6,	// (0x000a6a4a) status_small_pane

0xb1be,	// (0x000a6a52) control_pane

0xa059,	// (0x000a58ed) stacon_bottom_pane

0xb1c6,	// (0x000a6a5a) list_single_mce_smart_pane_t1_ParamLimits

0xb1c6,	// (0x000a6a5a) list_single_mce_smart_pane_t1

0xb1d9,	// (0x000a6a6d) list_single_mce_smart_pane_t2_ParamLimits

0xb1d9,	// (0x000a6a6d) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x000aabb2) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x000aabb2) list_single_mce_smart_pane_t

0x2f59,	// (0x0009e7ed) compass_pane

0x2f64,	// (0x0009e7f8) main_location2_pane_t1

0x2f7a,	// (0x0009e80e) main_location2_pane_t2

0x2f90,	// (0x0009e824) main_location2_pane_t3

0x0003,

0xf323,	// (0x000aabb7) main_location2_pane_t

0xb1f8,	// (0x000a6a8c) compass_pane_g1_ParamLimits

0xb1f8,	// (0x000a6a8c) compass_pane_g1

0x2fde,	// (0x0009e872) compass_pane_t1

0x2fed,	// (0x0009e881) compass_pane_t2

0x0005,

0xf32c,	// (0x000aabc0) compass_pane_t

0x3038,	// (0x0009e8cc) text_secondary_cp61

0xb20c,	// (0x000a6aa0) navi_pane_cams_g5

0xb22f,	// (0x000a6ac3) navi_pane_im_t1

0xb23d,	// (0x000a6ad1) navi_pane_mp_g1_ParamLimits

0xb23d,	// (0x000a6ad1) navi_pane_mp_g1

0xb251,	// (0x000a6ae5) navi_pane_mp_g2_ParamLimits

0xb251,	// (0x000a6ae5) navi_pane_mp_g2

0xb25d,	// (0x000a6af1) navi_pane_mp_g3_ParamLimits

0xb25d,	// (0x000a6af1) navi_pane_mp_g3

0x0002,

0xf340,	// (0x000aabd4) navi_pane_mp_g_ParamLimits

0xf340,	// (0x000aabd4) navi_pane_mp_g

0xb269,	// (0x000a6afd) navi_pane_mp_t1

0xb277,	// (0x000a6b0b) navi_pane_mp_t2

0x0002,

0xf347,	// (0x000aabdb) navi_pane_mp_t

0xb2b3,	// (0x000a6b47) navi_pane_vt_g1

0xb269,	// (0x000a6afd) navi_pane_vt_t1

0xb2bb,	// (0x000a6b4f) navi_slider_pane

0xa90a,	// (0x000a619e) zooming_pane

0xb2c3,	// (0x000a6b57) navi_slider_pane_g1

0x316d,	// (0x0009ea01) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x000aabe2) navi_slider_pane_g

0xb2e7,	// (0x000a6b7b) aid_levels_zoom

0xb2ef,	// (0x000a6b83) zooming_pane_g1

0xb2f7,	// (0x000a6b8b) zooming_pane_g2

0xb2f7,	// (0x000a6b8b) zooming_pane_g3

0x0002,

0xf35d,	// (0x000aabf1) zooming_pane_g

0xb2ff,	// (0x000a6b93) level_10_zoom

0xb308,	// (0x000a6b9c) level_11_zoom

0xb311,	// (0x000a6ba5) level_1_zoom

0xb31a,	// (0x000a6bae) level_2_zoom

0xb323,	// (0x000a6bb7) level_3_zoom

0xb32c,	// (0x000a6bc0) level_4_zoom

0xb335,	// (0x000a6bc9) level_5_zoom

0xb33e,	// (0x000a6bd2) level_6_zoom

0xb35b,	// (0x000a6bef) level_7_zoom

0xb364,	// (0x000a6bf8) level_8_zoom

0xb36d,	// (0x000a6c01) level_9_zoom

0xb37e,	// (0x000a6c12) popup_phob_thumbnail_window_g1

0xb386,	// (0x000a6c1a) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x000aabf8) popup_phob_thumbnail_window_g

0x3b97,	// (0x0009f42b) level_1_location

0x3b9f,	// (0x0009f433) level_2_location

0x3ba7,	// (0x0009f43b) level_3_location

0x3bb1,	// (0x0009f445) level_4_location

0xa90a,	// (0x000a619e) level_5_location

0x317f,	// (0x0009ea13) mce_icon_pane_g1

0x3187,	// (0x0009ea1b) mce_icon_pane_g2

0x0001,

0xf369,	// (0x000aabfd) mce_icon_pane_g

0x318f,	// (0x0009ea23) main_mup_pane_g1_ParamLimits

0x318f,	// (0x0009ea23) main_mup_pane_g1

0xa716,	// (0x000a5faa) main_mup_pane_g2_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g2

0xa716,	// (0x000a5faa) main_mup_pane_g3_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g3

0xa716,	// (0x000a5faa) main_mup_pane_g4_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g4

0xa716,	// (0x000a5faa) main_mup_pane_g5_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g5

0xa716,	// (0x000a5faa) main_mup_pane_g6_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g6

0xa716,	// (0x000a5faa) main_mup_pane_g7_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g7

0xa716,	// (0x000a5faa) main_mup_pane_g8_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g8

0xa716,	// (0x000a5faa) main_mup_pane_g9_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g9

0xa716,	// (0x000a5faa) main_mup_pane_g10_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g10

0xa716,	// (0x000a5faa) main_mup_pane_g11_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g11

0xa708,	// (0x000a5f9c) main_mup_pane_g12_ParamLimits

0xa708,	// (0x000a5f9c) main_mup_pane_g12

0xa716,	// (0x000a5faa) main_mup_pane_g13_ParamLimits

0xa716,	// (0x000a5faa) main_mup_pane_g13

0x000c,

0xf36e,	// (0x000aac02) main_mup_pane_g_ParamLimits

0xf36e,	// (0x000aac02) main_mup_pane_g

0xa724,	// (0x000a5fb8) main_mup_pane_t1_ParamLimits

0xa724,	// (0x000a5fb8) main_mup_pane_t1

0xa724,	// (0x000a5fb8) main_mup_pane_t2_ParamLimits

0xa724,	// (0x000a5fb8) main_mup_pane_t2

0xa724,	// (0x000a5fb8) main_mup_pane_t3_ParamLimits

0xa724,	// (0x000a5fb8) main_mup_pane_t3

0xb347,	// (0x000a6bdb) main_mup_pane_t4_ParamLimits

0xb347,	// (0x000a6bdb) main_mup_pane_t4

0xb347,	// (0x000a6bdb) main_mup_pane_t5_ParamLimits

0xb347,	// (0x000a6bdb) main_mup_pane_t5

0xa92c,	// (0x000a61c0) main_mup_pane_t6_ParamLimits

0xa92c,	// (0x000a61c0) main_mup_pane_t6

0x0005,

0xf389,	// (0x000aac1d) main_mup_pane_t_ParamLimits

0xf389,	// (0x000aac1d) main_mup_pane_t

0xa296,	// (0x000a5b2a) mup_progress_pane_ParamLimits

0xa296,	// (0x000a5b2a) mup_progress_pane

0xc3fb,	// (0x000a7c8f) mup_visualizer_pane_ParamLimits

0xc3fb,	// (0x000a7c8f) mup_visualizer_pane

0xc3fb,	// (0x000a7c8f) mup_volume_pane_ParamLimits

0xc3fb,	// (0x000a7c8f) mup_volume_pane

0xa708,	// (0x000a5f9c) mup_visualizer_pane_g1_ParamLimits

0xa708,	// (0x000a5f9c) mup_visualizer_pane_g1

0xb38e,	// (0x000a6c22) mup_visualizer_pane_g2_ParamLimits

0xb38e,	// (0x000a6c22) mup_visualizer_pane_g2

0xa6fa,	// (0x000a5f8e) mup_visualizer_pane_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x000aac2a) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x000aac2a) mup_visualizer_pane_g

0xa99c,	// (0x000a6230) mup_volume_pane_g1

0xa99c,	// (0x000a6230) mup_volume_pane_g2

0x0001,

0x0027,	// (0x0009b8bb) mup_volume_pane_g

0xa99c,	// (0x000a6230) mup_progress_pane_g1

0xa99c,	// (0x000a6230) mup_progress_pane_g2

0xa99c,	// (0x000a6230) mup_progress_pane_g3

0x0002,

0x002c,	// (0x0009b8c0) mup_progress_pane_g

0xa059,	// (0x000a58ed) bg_popup_window_pane_cp05

0xb39c,	// (0x000a6c30) heading_pane_cp02_ParamLimits

0xb39c,	// (0x000a6c30) heading_pane_cp02

0xb3b8,	// (0x000a6c4c) list_popup_blid_pane

0xb3c0,	// (0x000a6c54) list_blid_sat_info_pane_ParamLimits

0xb3c0,	// (0x000a6c54) list_blid_sat_info_pane

0xb3d3,	// (0x000a6c67) list_blid_sat_info_pane_g1

0xb3db,	// (0x000a6c6f) list_blid_sat_info_pane_t1

0x329e,	// (0x0009eb32) mup_equalizer_pane_ParamLimits

0x329e,	// (0x0009eb32) mup_equalizer_pane

0x32bf,	// (0x0009eb53) mup_equalizer_pane_cp1_ParamLimits

0x32bf,	// (0x0009eb53) mup_equalizer_pane_cp1

0x32e0,	// (0x0009eb74) mup_equalizer_pane_cp2_ParamLimits

0x32e0,	// (0x0009eb74) mup_equalizer_pane_cp2

0x3301,	// (0x0009eb95) mup_equalizer_pane_cp3_ParamLimits

0x3301,	// (0x0009eb95) mup_equalizer_pane_cp3

0x3326,	// (0x0009ebba) mup_equalizer_pane_cp4_ParamLimits

0x3326,	// (0x0009ebba) mup_equalizer_pane_cp4

0x334b,	// (0x0009ebdf) mup_equalizer_pane_cp5

0x3363,	// (0x0009ebf7) mup_equalizer_pane_cp6

0x337b,	// (0x0009ec0f) mup_equalizer_pane_cp7

0xc58f,	// (0x000a7e23) bg_popup_call_poc_act_pane_g9

0xc597,	// (0x000a7e2b) bg_popup_call_poc_act_pane_g10

0xc59f,	// (0x000a7e33) bg_popup_call_poc_act_pane_g11

0x000a,

0xa67f,	// (0x000a5f13) mup_scale_pane

0xa697,	// (0x000a5f2b) mup_scale_pane_g1

0xb3e9,	// (0x000a6c7d) mup_scale_pane_g2

0x0006,

0xf3b2,	// (0x000aac46) mup_scale_pane_g

0xb40d,	// (0x000a6ca1) msg_data_pane

0xb415,	// (0x000a6ca9) scroll_pane_cp017

0x33a5,	// (0x0009ec39) bg_list_pane_cp04_ParamLimits

0x33a5,	// (0x0009ec39) bg_list_pane_cp04

0xb41d,	// (0x000a6cb1) msg_data_pane_g1

0x33cd,	// (0x0009ec61) msg_data_pane_g2

0x33d7,	// (0x0009ec6b) msg_data_pane_g3

0x33e1,	// (0x0009ec75) msg_data_pane_g4

0x33e9,	// (0x0009ec7d) msg_data_pane_g5

0x33f1,	// (0x0009ec85) msg_data_pane_g6

0x33f9,	// (0x0009ec8d) msg_data_pane_g7

0x0006,

0xf3c1,	// (0x000aac55) msg_data_pane_g

0x3401,	// (0x0009ec95) msg_text_pane_ParamLimits

0x3401,	// (0x0009ec95) msg_text_pane

0x342b,	// (0x0009ecbf) qrid_highlight_pane_cp011_ParamLimits

0x342b,	// (0x0009ecbf) qrid_highlight_pane_cp011

0xa059,	// (0x000a58ed) msg_body_pane

0xa059,	// (0x000a58ed) msg_header_pane

0xb42e,	// (0x000a6cc2) input_focus_pane_cp07

0x344f,	// (0x0009ece3) msg_header_pane_t1_ParamLimits

0x344f,	// (0x0009ece3) msg_header_pane_t1

0x3465,	// (0x0009ecf9) msg_header_pane_t2_ParamLimits

0x3465,	// (0x0009ecf9) msg_header_pane_t2

0x0001,

0xf3d5,	// (0x000aac69) msg_header_pane_t_ParamLimits

0xf3d5,	// (0x000aac69) msg_header_pane_t

0xb443,	// (0x000a6cd7) msg_body_pane_g1

0x347c,	// (0x0009ed10) msg_body_pane_t1_ParamLimits

0x347c,	// (0x0009ed10) msg_body_pane_t1

0x34ad,	// (0x0009ed41) msg_body_pane_t2_ParamLimits

0x34ad,	// (0x0009ed41) msg_body_pane_t2

0x34bf,	// (0x0009ed53) msg_body_pane_t3_ParamLimits

0x34bf,	// (0x0009ed53) msg_body_pane_t3

0x0002,

0xf3da,	// (0x000aac6e) msg_body_pane_t_ParamLimits

0xf3da,	// (0x000aac6e) msg_body_pane_t

0x3523,	// (0x0009edb7) main_viewer_pane_g1_ParamLimits

0x3523,	// (0x0009edb7) main_viewer_pane_g1

0x352f,	// (0x0009edc3) main_viewer_pane_g2_ParamLimits

0x352f,	// (0x0009edc3) main_viewer_pane_g2

0x353b,	// (0x0009edcf) main_viewer_pane_g3_ParamLimits

0x353b,	// (0x0009edcf) main_viewer_pane_g3

0x354c,	// (0x0009ede0) main_viewer_pane_g4_ParamLimits

0x354c,	// (0x0009ede0) main_viewer_pane_g4

0x355d,	// (0x0009edf1) main_viewer_pane_g5_ParamLimits

0x355d,	// (0x0009edf1) main_viewer_pane_g5

0x355d,	// (0x0009edf1) main_viewer_pane_g7_ParamLimits

0x355d,	// (0x0009edf1) main_viewer_pane_g7

0x356f,	// (0x0009ee03) main_viewer_pane_g8_ParamLimits

0x356f,	// (0x0009ee03) main_viewer_pane_g8

0x0007,

0xf3ea,	// (0x000aac7e) main_viewer_pane_g_ParamLimits

0xf3ea,	// (0x000aac7e) main_viewer_pane_g

0xb44b,	// (0x000a6cdf) viewer_content_pane_ParamLimits

0xb44b,	// (0x000a6cdf) viewer_content_pane

0x35a7,	// (0x0009ee3b) main_postcard_pane_g1_ParamLimits

0x35a7,	// (0x0009ee3b) main_postcard_pane_g1

0x35b5,	// (0x0009ee49) main_postcard_pane_g2_ParamLimits

0x35b5,	// (0x0009ee49) main_postcard_pane_g2

0x35c3,	// (0x0009ee57) main_postcard_pane_g3_ParamLimits

0x35c3,	// (0x0009ee57) main_postcard_pane_g3

0x0005,

0xf3fb,	// (0x000aac8f) main_postcard_pane_g_ParamLimits

0xf3fb,	// (0x000aac8f) main_postcard_pane_g

0x35d3,	// (0x0009ee67) main_postcard_pane_g4

0xc6d5,	// (0x000a7f69) smil_status_volume_pane_g2

0x35ff,	// (0x0009ee93) postcard_pane_ParamLimits

0x35ff,	// (0x0009ee93) postcard_pane

0xbd26,	// (0x000a75ba) postcard_pane_g1_ParamLimits

0xbd26,	// (0x000a75ba) postcard_pane_g1

0x3639,	// (0x0009eecd) postcard_pane_g2_ParamLimits

0x3639,	// (0x0009eecd) postcard_pane_g2

0x3645,	// (0x0009eed9) postcard_pane_g3_ParamLimits

0x3645,	// (0x0009eed9) postcard_pane_g3

0xb459,	// (0x000a6ced) postcard_pane_g4_ParamLimits

0xb459,	// (0x000a6ced) postcard_pane_g4

0x3651,	// (0x0009eee5) postcard_pane_g5_ParamLimits

0x3651,	// (0x0009eee5) postcard_pane_g5

0x365d,	// (0x0009eef1) postcard_pane_g6_ParamLimits

0x365d,	// (0x0009eef1) postcard_pane_g6

0xb467,	// (0x000a6cfb) postcard_pane_g7_ParamLimits

0xb467,	// (0x000a6cfb) postcard_pane_g7

0x0006,

0xf408,	// (0x000aac9c) postcard_pane_g_ParamLimits

0xf408,	// (0x000aac9c) postcard_pane_g

0x366b,	// (0x0009eeff) main_mp2_pane_g1_ParamLimits

0x366b,	// (0x0009eeff) main_mp2_pane_g1

0x3679,	// (0x0009ef0d) main_mp2_pane_g2_ParamLimits

0x3679,	// (0x0009ef0d) main_mp2_pane_g2

0x3685,	// (0x0009ef19) main_mp2_pane_g3_ParamLimits

0x3685,	// (0x0009ef19) main_mp2_pane_g3

0x0002,

0xf417,	// (0x000aacab) main_mp2_pane_g_ParamLimits

0xf417,	// (0x000aacab) main_mp2_pane_g

0x3691,	// (0x0009ef25) main_mp2_pane_t1_ParamLimits

0x3691,	// (0x0009ef25) main_mp2_pane_t1

0x36a8,	// (0x0009ef3c) main_mp2_pane_t2_ParamLimits

0x36a8,	// (0x0009ef3c) main_mp2_pane_t2

0x36bc,	// (0x0009ef50) main_mp2_pane_t3_ParamLimits

0x36bc,	// (0x0009ef50) main_mp2_pane_t3

0x0002,

0xf41e,	// (0x000aacb2) main_mp2_pane_t_ParamLimits

0xf41e,	// (0x000aacb2) main_mp2_pane_t

0xb475,	// (0x000a6d09) pec_content_pane_ParamLimits

0xb475,	// (0x000a6d09) pec_content_pane

0xab10,	// (0x000a63a4) scroll_pane_cp015

0xb487,	// (0x000a6d1b) pec_attribute_pane_ParamLimits

0xb487,	// (0x000a6d1b) pec_attribute_pane

0x36ce,	// (0x0009ef62) pec_content_pane_g1_ParamLimits

0x36ce,	// (0x0009ef62) pec_content_pane_g1

0xb497,	// (0x000a6d2b) pec_content_pane_t1_ParamLimits

0xb497,	// (0x000a6d2b) pec_content_pane_t1

0xb4a9,	// (0x000a6d3d) pec_content_pane_t2_ParamLimits

0xb4a9,	// (0x000a6d3d) pec_content_pane_t2

0x0001,

0xf425,	// (0x000aacb9) pec_content_pane_t_ParamLimits

0xf425,	// (0x000aacb9) pec_content_pane_t

0x36da,	// (0x0009ef6e) list_single_graphic_pane_cp01_ParamLimits

0x36da,	// (0x0009ef6e) list_single_graphic_pane_cp01

0xa67f,	// (0x000a5f13) bg_popup_sub_pane_cp04

0xb4bb,	// (0x000a6d4f) popup_mup_playback_window_g1

0xb4c7,	// (0x000a6d5b) popup_mup_playback_window_t1

0xb4dc,	// (0x000a6d70) popup_mup_playback_window_t2

0x0001,

0xf42a,	// (0x000aacbe) popup_mup_playback_window_t

0xb513,	// (0x000a6da7) main_image_pane_g1_ParamLimits

0xb513,	// (0x000a6da7) main_image_pane_g1

0xb556,	// (0x000a6dea) scroll_pane_cp018_ParamLimits

0xb556,	// (0x000a6dea) scroll_pane_cp018

0xb56e,	// (0x000a6e02) scroll_pane_cp016_ParamLimits

0xb56e,	// (0x000a6e02) scroll_pane_cp016

0x3768,	// (0x0009effc) smil2_image_pane_ParamLimits

0x3768,	// (0x0009effc) smil2_image_pane

0x379e,	// (0x0009f032) smil2_root_pane_ParamLimits

0x379e,	// (0x0009f032) smil2_root_pane

0x37ca,	// (0x0009f05e) smil2_text_pane_ParamLimits

0x37ca,	// (0x0009f05e) smil2_text_pane

0xa059,	// (0x000a58ed) bg_list_pane_cp06

0xb5aa,	// (0x000a6e3e) grid_radio_pane

0xa059,	// (0x000a58ed) bg_popup_window_pane_cp06

0xb5b4,	// (0x000a6e48) main_fmradio_pane_t1

0xc5a7,	// (0x000a7e3b) heading_pane_cp04

0xb5c2,	// (0x000a6e56) main_fmradio_pane_t2

0xc5af,	// (0x000a7e43) popup_cale_lunar_info_window_g1

0xb5d0,	// (0x000a6e64) main_fmradio_pane_t3

0xc5b7,	// (0x000a7e4b) popup_cale_lunar_info_window_g2

0xb5e0,	// (0x000a6e74) main_fmradio_pane_t4

0x0001,

0xb5ee,	// (0x000a6e82) main_fmradio_pane_t5

0x0004,

0xf4d8,	// (0x000aad6c) popup_cale_lunar_info_window_g

0xf43f,	// (0x000aacd3) main_fmradio_pane_t

0xb5fc,	// (0x000a6e90) wait_bar_pane_cp03

0xb604,	// (0x000a6e98) cell_fmradio_pane_ParamLimits

0xb604,	// (0x000a6e98) cell_fmradio_pane

0xb467,	// (0x000a6cfb) cell_fmradio_pane_g1_ParamLimits

0xb467,	// (0x000a6cfb) cell_fmradio_pane_g1

0xa059,	// (0x000a58ed) grid_highlight_pane_cp011

0xb619,	// (0x000a6ead) poc_content_pane_ParamLimits

0xb619,	// (0x000a6ead) poc_content_pane

0xb62b,	// (0x000a6ebf) scroll_pane_cp019

0x380a,	// (0x0009f09e) popup_call_poc_act_window_ParamLimits

0x380a,	// (0x0009f09e) popup_call_poc_act_window

0x3817,	// (0x0009f0ab) popup_call_poc_inact_window_ParamLimits

0x3817,	// (0x0009f0ab) popup_call_poc_inact_window

0xf4af,	// (0x000aad43) bg_popup_call_poc_act_pane_g

0xc51f,	// (0x000a7db3) bg_popup_call_poc_inact_pane_g1

0xc527,	// (0x000a7dbb) bg_popup_call_poc_inact_pane_g2

0xb633,	// (0x000a6ec7) popup_call_poc_act_window_g2

0xc52f,	// (0x000a7dc3) bg_popup_call_poc_inact_pane_g3

0xc537,	// (0x000a7dcb) bg_popup_call_poc_inact_pane_g4

0xc53f,	// (0x000a7dd3) bg_popup_call_poc_inact_pane_g5

0xb63b,	// (0x000a6ecf) popup_call_poc_act_window_t1_ParamLimits

0xb63b,	// (0x000a6ecf) popup_call_poc_act_window_t1

0xb693,	// (0x000a6f27) popup_call_poc_act_window_t2_ParamLimits

0xb693,	// (0x000a6f27) popup_call_poc_act_window_t2

0xb6bb,	// (0x000a6f4f) popup_call_poc_act_window_t3_ParamLimits

0xb6bb,	// (0x000a6f4f) popup_call_poc_act_window_t3

0xb6e3,	// (0x000a6f77) popup_call_poc_act_window_t4_ParamLimits

0xb6e3,	// (0x000a6f77) popup_call_poc_act_window_t4

0x0003,

0xf44a,	// (0x000aacde) popup_call_poc_act_window_t_ParamLimits

0xf44a,	// (0x000aacde) popup_call_poc_act_window_t

0xc547,	// (0x000a7ddb) bg_popup_call_poc_inact_pane_g6

0xc54f,	// (0x000a7de3) bg_popup_call_poc_inact_pane_g7

0xc557,	// (0x000a7deb) bg_popup_call_poc_inact_pane_g8

0xb6f5,	// (0x000a6f89) popup_call_poc_inact_window_g2

0xc55f,	// (0x000a7df3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf49c,	// (0x000aad30) bg_popup_call_poc_inact_pane_g

0xb6fd,	// (0x000a6f91) popup_call_poc_inact_window_t1_ParamLimits

0xb6fd,	// (0x000a6f91) popup_call_poc_inact_window_t1

0xb712,	// (0x000a6fa6) popup_call_poc_inact_window_t2_ParamLimits

0xb712,	// (0x000a6fa6) popup_call_poc_inact_window_t2

0xb727,	// (0x000a6fbb) popup_call_poc_inact_window_t3_ParamLimits

0xb727,	// (0x000a6fbb) popup_call_poc_inact_window_t3

0x0002,

0x00e9,	// (0x0009b97d) popup_call_poc_inact_window_t_ParamLimits

0x00e9,	// (0x0009b97d) popup_call_poc_inact_window_t

0xc64d,	// (0x000a7ee1) context_pane_ParamLimits

0x3ed4,	// (0x0009f768) signal_pane_ParamLimits

0xa90a,	// (0x000a619e) main_call2_pane

0x3e40,	// (0x0009f6d4) popup_phob_thumbnail2_window_ParamLimits

0x3e40,	// (0x0009f6d4) popup_phob_thumbnail2_window

0x34d1,	// (0x0009ed65) aid_hotspot_pointer_arrow_pane

0x34d9,	// (0x0009ed6d) aid_hotspot_pointer_hand_pane

0x3b5f,	// (0x0009f3f3) phob_pre_status_pane_g5

0xa6ec,	// (0x000a5f80) cams_zoom_pane_ParamLimits

0xa6ec,	// (0x000a5f80) image_vga_pane_ParamLimits

0xa708,	// (0x000a5f9c) main_camera_pane_g1_ParamLimits

0xa708,	// (0x000a5f9c) main_camera_pane_g2_ParamLimits

0xa708,	// (0x000a5f9c) main_camera_pane_g3_ParamLimits

0xa708,	// (0x000a5f9c) main_camera_pane_g4_ParamLimits

0xa708,	// (0x000a5f9c) main_camera_pane_g5_ParamLimits

0xa708,	// (0x000a5f9c) main_camera_pane_g6_ParamLimits

0xa708,	// (0x000a5f9c) main_camera_pane_g7_ParamLimits

0xf185,	// (0x000aaa19) main_camera_pane_g_ParamLimits

0xb347,	// (0x000a6bdb) main_camera_pane_t1_ParamLimits

0xb347,	// (0x000a6bdb) main_camera_pane_t2_ParamLimits

0xf196,	// (0x000aaa2a) main_camera_pane_t_ParamLimits

0xa67f,	// (0x000a5f13) bg_popup_preview_window_pane_cp01_ParamLimits

0xa67f,	// (0x000a5f13) bg_popup_preview_window_pane_cp01

0xb73c,	// (0x000a6fd0) popup_phob_thumbnail2_window_g1_ParamLimits

0xb73c,	// (0x000a6fd0) popup_phob_thumbnail2_window_g1

0xa059,	// (0x000a58ed) call2_cli_visual_pane

0x3833,	// (0x0009f0c7) popup_call2_audio_conf_window_ParamLimits

0x3833,	// (0x0009f0c7) popup_call2_audio_conf_window

0x384c,	// (0x0009f0e0) popup_call2_audio_first_window_ParamLimits

0x384c,	// (0x0009f0e0) popup_call2_audio_first_window

0x38ea,	// (0x0009f17e) popup_call2_audio_in_window_ParamLimits

0x38ea,	// (0x0009f17e) popup_call2_audio_in_window

0x392e,	// (0x0009f1c2) popup_call2_audio_out_window_ParamLimits

0x392e,	// (0x0009f1c2) popup_call2_audio_out_window

0x3998,	// (0x0009f22c) popup_call2_audio_second_window_ParamLimits

0x3998,	// (0x0009f22c) popup_call2_audio_second_window

0x39f6,	// (0x0009f28a) popup_call2_audio_wait_window_ParamLimits

0x39f6,	// (0x0009f28a) popup_call2_audio_wait_window

0xa059,	// (0x000a58ed) bg_popup_call2_act_pane_cp03

0xa661,	// (0x000a5ef5) list_conf_pane_cp

0xb748,	// (0x000a6fdc) popup_call2_audio_conf_window_t1

0xb756,	// (0x000a6fea) list_single_graphic_popup_conf2_pane_ParamLimits

0xb756,	// (0x000a6fea) list_single_graphic_popup_conf2_pane

0xb0e4,	// (0x000a6978) list_highlight_pane_cp04

0xb769,	// (0x000a6ffd) list_single_graphic_popup_conf2_pane_g1

0xb0f5,	// (0x000a6989) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x00f0,	// (0x0009b984) list_single_graphic_popup_conf2_pane_g

0xb773,	// (0x000a7007) list_single_graphic_popup_conf2_pane_t1

0xb781,	// (0x000a7015) bg_popup_call2_act_pane_cp01_ParamLimits

0xb781,	// (0x000a7015) bg_popup_call2_act_pane_cp01

0xb80b,	// (0x000a709f) call_type_pane_cp05_ParamLimits

0xb80b,	// (0x000a709f) call_type_pane_cp05

0xb85f,	// (0x000a70f3) popup_call2_audio_second_window_g1_ParamLimits

0xb85f,	// (0x000a70f3) popup_call2_audio_second_window_g1

0xb8b3,	// (0x000a7147) popup_call2_audio_second_window_g2_ParamLimits

0xb8b3,	// (0x000a7147) popup_call2_audio_second_window_g2

0x0002,

0x00f5,	// (0x0009b989) popup_call2_audio_second_window_g_ParamLimits

0x00f5,	// (0x0009b989) popup_call2_audio_second_window_g

0xb918,	// (0x000a71ac) popup_call2_audio_second_window_t1_ParamLimits

0xb918,	// (0x000a71ac) popup_call2_audio_second_window_t1

0xb9d3,	// (0x000a7267) popup_call2_audio_second_window_t2_ParamLimits

0xb9d3,	// (0x000a7267) popup_call2_audio_second_window_t2

0xba26,	// (0x000a72ba) popup_call2_audio_second_window_t3_ParamLimits

0xba26,	// (0x000a72ba) popup_call2_audio_second_window_t3

0x0003,

0xf453,	// (0x000aace7) popup_call2_audio_second_window_t_ParamLimits

0xf453,	// (0x000aace7) popup_call2_audio_second_window_t

0xa059,	// (0x000a58ed) bg_popup_call2_in_pane_cp02

0xa063,	// (0x000a58f7) call_type_pane_cp04

0x3a35,	// (0x0009f2c9) popup_call2_audio_wait_window_g1

0x3a3d,	// (0x0009f2d1) popup_call2_audio_wait_window_g2

0x0001,

0xf45c,	// (0x000aacf0) popup_call2_audio_wait_window_g

0xa07b,	// (0x000a590f) popup_call2_audio_wait_window_t3

0xbb19,	// (0x000a73ad) bg_popup_call2_act_pane_ParamLimits

0xbb19,	// (0x000a73ad) bg_popup_call2_act_pane

0xbbd9,	// (0x000a746d) call_type_pane_cp03_ParamLimits

0xbbd9,	// (0x000a746d) call_type_pane_cp03

0xbc3d,	// (0x000a74d1) popup_call2_audio_first_window_g1_ParamLimits

0xbc3d,	// (0x000a74d1) popup_call2_audio_first_window_g1

0xbcad,	// (0x000a7541) popup_call2_audio_first_window_g2_ParamLimits

0xbcad,	// (0x000a7541) popup_call2_audio_first_window_g2

0xbd26,	// (0x000a75ba) popup_call2_audio_first_window_g3_ParamLimits

0xbd26,	// (0x000a75ba) popup_call2_audio_first_window_g3

0x0004,

0xf461,	// (0x000aacf5) popup_call2_audio_first_window_g_ParamLimits

0xf461,	// (0x000aacf5) popup_call2_audio_first_window_g

0xbdae,	// (0x000a7642) popup_call2_audio_first_window_t1_ParamLimits

0xbdae,	// (0x000a7642) popup_call2_audio_first_window_t1

0xbeb1,	// (0x000a7745) popup_call2_audio_first_window_t4_ParamLimits

0xbeb1,	// (0x000a7745) popup_call2_audio_first_window_t4

0xbf94,	// (0x000a7828) popup_call2_audio_first_window_t5_ParamLimits

0xbf94,	// (0x000a7828) popup_call2_audio_first_window_t5

0x0003,

0x0115,	// (0x0009b9a9) popup_call2_audio_first_window_t_ParamLimits

0x0115,	// (0x0009b9a9) popup_call2_audio_first_window_t

0xa677,	// (0x000a5f0b) bg_popup_call2_act_pane_g1

0xc5c1,	// (0x000a7e55) popup_cale_lunar_info_window_t1

0xc5cf,	// (0x000a7e63) popup_cale_lunar_info_window_t2

0xc5dd,	// (0x000a7e71) popup_cale_lunar_info_window_t3

0xa059,	// (0x000a58ed) bg_popup_call2_bubble_pane

0xc095,	// (0x000a7929) bg_popup_call2_in_pane_cp01_ParamLimits

0xc095,	// (0x000a7929) bg_popup_call2_in_pane_cp01

0x9d35,	// (0x000a55c9) call_type_pane_cp02

0x3a45,	// (0x0009f2d9) popup_call2_audio_out_window_g1_ParamLimits

0x3a45,	// (0x0009f2d9) popup_call2_audio_out_window_g1

0xc0dd,	// (0x000a7971) popup_call2_audio_out_window_g2_ParamLimits

0xc0dd,	// (0x000a7971) popup_call2_audio_out_window_g2

0x3a71,	// (0x0009f305) popup_call2_audio_out_window_g3_ParamLimits

0x3a71,	// (0x0009f305) popup_call2_audio_out_window_g3

0x0003,

0xf46c,	// (0x000aad00) popup_call2_audio_out_window_g_ParamLimits

0xf46c,	// (0x000aad00) popup_call2_audio_out_window_g

0xc114,	// (0x000a79a8) popup_call2_audio_out_window_t1_ParamLimits

0xc114,	// (0x000a79a8) popup_call2_audio_out_window_t1

0xc173,	// (0x000a7a07) popup_call2_audio_out_window_t2_ParamLimits

0xc173,	// (0x000a7a07) popup_call2_audio_out_window_t2

0xc1c7,	// (0x000a7a5b) popup_call2_audio_out_window_t3_ParamLimits

0xc1c7,	// (0x000a7a5b) popup_call2_audio_out_window_t3

0xc1dd,	// (0x000a7a71) popup_call2_audio_out_window_t4_ParamLimits

0xc1dd,	// (0x000a7a71) popup_call2_audio_out_window_t4

0xc1f3,	// (0x000a7a87) popup_call2_audio_out_window_t5_ParamLimits

0xc1f3,	// (0x000a7a87) popup_call2_audio_out_window_t5

0x0005,

0x0127,	// (0x0009b9bb) popup_call2_audio_out_window_t_ParamLimits

0x0127,	// (0x0009b9bb) popup_call2_audio_out_window_t

0xc257,	// (0x000a7aeb) bg_popup_call2_in_pane_ParamLimits

0xc257,	// (0x000a7aeb) bg_popup_call2_in_pane

0xc2b3,	// (0x000a7b47) popup_call2_audio_in_window_g1_ParamLimits

0xc2b3,	// (0x000a7b47) popup_call2_audio_in_window_g1

0xc2eb,	// (0x000a7b7f) popup_call2_audio_in_window_g2_ParamLimits

0xc2eb,	// (0x000a7b7f) popup_call2_audio_in_window_g2

0xc323,	// (0x000a7bb7) popup_call2_audio_in_window_g3_ParamLimits

0xc323,	// (0x000a7bb7) popup_call2_audio_in_window_g3

0x0003,

0x0134,	// (0x0009b9c8) popup_call2_audio_in_window_g_ParamLimits

0x0134,	// (0x0009b9c8) popup_call2_audio_in_window_g

0xc37b,	// (0x000a7c0f) popup_call2_audio_in_window_t1_ParamLimits

0xc37b,	// (0x000a7c0f) popup_call2_audio_in_window_t1

0xc409,	// (0x000a7c9d) popup_call2_audio_in_window_t2_ParamLimits

0xc409,	// (0x000a7c9d) popup_call2_audio_in_window_t2

0xc489,	// (0x000a7d1d) popup_call2_audio_in_window_t3_ParamLimits

0xc489,	// (0x000a7d1d) popup_call2_audio_in_window_t3

0xc4a3,	// (0x000a7d37) popup_call2_audio_in_window_t4_ParamLimits

0xc4a3,	// (0x000a7d37) popup_call2_audio_in_window_t4

0xc4b5,	// (0x000a7d49) popup_call2_audio_in_window_t5_ParamLimits

0xc4b5,	// (0x000a7d49) popup_call2_audio_in_window_t5

0xc4ca,	// (0x000a7d5e) popup_call2_audio_in_window_t6_ParamLimits

0xc4ca,	// (0x000a7d5e) popup_call2_audio_in_window_t6

0x0005,

0xf475,	// (0x000aad09) popup_call2_audio_in_window_t_ParamLimits

0xf475,	// (0x000aad09) popup_call2_audio_in_window_t

0xa677,	// (0x000a5f0b) bg_popup_call2_in_pane_g1

0xc5eb,	// (0x000a7e7f) popup_cale_lunar_info_window_t4

0x0003,

0xf4dd,	// (0x000aad71) popup_cale_lunar_info_window_t

0xa67f,	// (0x000a5f13) bg_popup_call2_rect_pane_ParamLimits

0xa67f,	// (0x000a5f13) bg_popup_call2_rect_pane

0xa059,	// (0x000a58ed) call2_cli_visual_graphic_pane

0xa059,	// (0x000a58ed) call2_cli_visual_text_pane

0x3f0f,	// (0x0009f7a3) smil_status_volume_pane_g3

0x0002,

0xa697,	// (0x000a5f2b) call2_cli_visual_graphic_pane_g1

0xa697,	// (0x000a5f2b) call2_cli_visual_graphic_pane_g2

0xa697,	// (0x000a5f2b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf482,	// (0x000aad16) call2_cli_visual_graphic_pane_g

0xc4df,	// (0x000a7d73) bg_popup_call2_rect_pane_g1

0xa843,	// (0x000a60d7) bg_popup_call2_rect_pane_g2

0xc4e7,	// (0x000a7d7b) bg_popup_call2_rect_pane_g3

0xc4ef,	// (0x000a7d83) bg_popup_call2_rect_pane_g4

0xc4f7,	// (0x000a7d8b) bg_popup_call2_rect_pane_g5

0xc4ff,	// (0x000a7d93) bg_popup_call2_rect_pane_g6

0xc507,	// (0x000a7d9b) bg_popup_call2_rect_pane_g7

0xc50f,	// (0x000a7da3) bg_popup_call2_rect_pane_g8

0xc517,	// (0x000a7dab) bg_popup_call2_rect_pane_g9

0x0008,

0xf489,	// (0x000aad1d) bg_popup_call2_rect_pane_g

0xc51f,	// (0x000a7db3) bg_popup_call2_bubble_pane_g1

0xc527,	// (0x000a7dbb) bg_popup_call2_bubble_pane_g2

0xc52f,	// (0x000a7dc3) bg_popup_call2_bubble_pane_g3

0xc537,	// (0x000a7dcb) bg_popup_call2_bubble_pane_g4

0xc53f,	// (0x000a7dd3) bg_popup_call2_bubble_pane_g5

0xc547,	// (0x000a7ddb) bg_popup_call2_bubble_pane_g6

0xc54f,	// (0x000a7de3) bg_popup_call2_bubble_pane_g7

0xc557,	// (0x000a7deb) bg_popup_call2_bubble_pane_g8

0xc55f,	// (0x000a7df3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf49c,	// (0x000aad30) bg_popup_call2_bubble_pane_g

0x133f,	// (0x0009cbd3) aid_cale_week_size_cell_pane

0xa67f,	// (0x000a5f13) aid_cams_cif_uncrop_pane_ParamLimits

0xa67f,	// (0x000a5f13) aid_cams_cif_uncrop_pane

0x1b2e,	// (0x0009d3c2) aid_cams_size_cell_ParamLimits

0x1b2e,	// (0x0009d3c2) aid_cams_size_cell

0x1b3a,	// (0x0009d3ce) grid_cams_pane_ParamLimits

0x1b48,	// (0x0009d3dc) linegrid_cams_pane_ParamLimits

0x1c19,	// (0x0009d4ad) call_video_pane_t1

0x1c36,	// (0x0009d4ca) call_video_pane_t2

0x0001,

0xf1e2,	// (0x000aaa76) call_video_pane_t

0x20f3,	// (0x0009d987) aid_cale_month_size_cell_pane_ParamLimits

0x20f3,	// (0x0009d987) aid_cale_month_size_cell_pane

0xf521,	// (0x000aadb5) smil_status_volume_pane_g

0x3f1c,	// (0x0009f7b0) volume_smil_pane_ParamLimits

0x0c3e,	// (0x0009c4d2) aid_popup2_width_pane

0x123d,	// (0x0009cad1) cell_qdial_pane_g4_ParamLimits

0x123d,	// (0x0009cad1) cell_qdial_pane_g4

0x2fba,	// (0x0009e84e) aid_blid_cardinal_pane_ParamLimits

0x2fca,	// (0x0009e85e) aid_blid_destination_pane_ParamLimits

0x2fca,	// (0x0009e85e) aid_blid_destination_pane

0xa67f,	// (0x000a5f13) bg_popup_call_poc_act_pane_ParamLimits

0xa67f,	// (0x000a5f13) bg_popup_call_poc_act_pane

0xa67f,	// (0x000a5f13) bg_popup_call_poc_inact_pane_ParamLimits

0xa67f,	// (0x000a5f13) bg_popup_call_poc_inact_pane

0xc567,	// (0x000a7dfb) bg_popup_call_poc_act_pane_g1

0xc56f,	// (0x000a7e03) bg_popup_call_poc_act_pane_g2

0xc577,	// (0x000a7e0b) bg_popup_call_poc_act_pane_g3

0xc537,	// (0x000a7dcb) bg_popup_call_poc_act_pane_g4

0xc53f,	// (0x000a7dd3) bg_popup_call_poc_act_pane_g5

0xc57f,	// (0x000a7e13) bg_popup_call_poc_act_pane_g6

0xc54f,	// (0x000a7de3) bg_popup_call_poc_act_pane_g7

0xc587,	// (0x000a7e1b) bg_popup_call_poc_act_pane_g8

0xa059,	// (0x000a58ed) main_usb_pane

0x3d5d,	// (0x0009f5f1) popup_cale_lunar_info_window

0x1f4e,	// (0x0009d7e2) im_reading_pane_t1_ParamLimits

0xaa59,	// (0x000a62ed) list_im_pane_ParamLimits

0xaa6a,	// (0x000a62fe) scroll_pane_cp07_ParamLimits

0xa059,	// (0x000a58ed) grid_highlight_pane_cp012

0xa67f,	// (0x000a5f13) mup_scale_pane_ParamLimits

0xbd26,	// (0x000a75ba) main_usb_pane_g1_ParamLimits

0xbd26,	// (0x000a75ba) main_usb_pane_g1

0x3ac7,	// (0x0009f35b) main_usb_pane_g2_ParamLimits

0x3ac7,	// (0x0009f35b) main_usb_pane_g2

0x0001,

0xf4c6,	// (0x000aad5a) main_usb_pane_g_ParamLimits

0xf4c6,	// (0x000aad5a) main_usb_pane_g

0x3ad3,	// (0x0009f367) main_usb_pane_t1_ParamLimits

0x3ad3,	// (0x0009f367) main_usb_pane_t1

0x3ae5,	// (0x0009f379) main_usb_pane_t2_ParamLimits

0x3ae5,	// (0x0009f379) main_usb_pane_t2

0x3af7,	// (0x0009f38b) main_usb_pane_t3_ParamLimits

0x3af7,	// (0x0009f38b) main_usb_pane_t3

0x3b09,	// (0x0009f39d) main_usb_pane_t4_ParamLimits

0x3b09,	// (0x0009f39d) main_usb_pane_t4

0x3b1b,	// (0x0009f3af) main_usb_pane_t5_ParamLimits

0x3b1b,	// (0x0009f3af) main_usb_pane_t5

0x3b2d,	// (0x0009f3c1) main_usb_pane_t6_ParamLimits

0x3b2d,	// (0x0009f3c1) main_usb_pane_t6

0x0005,

0xf4cb,	// (0x000aad5f) main_usb_pane_t_ParamLimits

0x2f59,	// (0x0009e7ed) aid_text_placing

0x2f64,	// (0x0009e7f8) main_location2_pane_t1_ParamLimits

0x2f7a,	// (0x0009e80e) main_location2_pane_t2_ParamLimits

0x2f90,	// (0x0009e824) main_location2_pane_t3_ParamLimits

0x2fa6,	// (0x0009e83a) main_location2_pane_t4_ParamLimits

0x2fa6,	// (0x0009e83a) main_location2_pane_t4

0xf323,	// (0x000aabb7) main_location2_pane_t_ParamLimits

0xa6ad,	// (0x000a5f41) find_pinb_pane_g2_ParamLimits

0xa6ad,	// (0x000a5f41) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x000aa92e) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x000aa92e) find_pinb_pane_g

0xa6b9,	// (0x000a5f4d) find_pinb_pane_t1_ParamLimits

0xa6cb,	// (0x000a5f5f) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x000aa933) find_pinb_pane_t_ParamLimits

0xa059,	// (0x000a58ed) main_call3_pane

0x26a6,	// (0x0009df3a) cale_month_day_heading_pane_t1_ParamLimits

0x2728,	// (0x0009dfbc) cale_month_day_heading_pane_t2_ParamLimits

0x27a1,	// (0x0009e035) cale_month_day_heading_pane_t3_ParamLimits

0x281a,	// (0x0009e0ae) cale_month_day_heading_pane_t4_ParamLimits

0x2893,	// (0x0009e127) cale_month_day_heading_pane_t5_ParamLimits

0x2914,	// (0x0009e1a8) cale_month_day_heading_pane_t6_ParamLimits

0x299d,	// (0x0009e231) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x000aaaae) cale_month_day_heading_pane_t_ParamLimits

0xacc3,	// (0x000a6557) smil_status_volume_pane

0x361d,	// (0x0009eeb1) postcard_address_pane_ParamLimits

0x361d,	// (0x0009eeb1) postcard_address_pane

0x362b,	// (0x0009eebf) postcard_message_pane_ParamLimits

0x362b,	// (0x0009eebf) postcard_message_pane

0x3a9d,	// (0x0009f331) call2_cli_visual_pane_t1_ParamLimits

0x3a9d,	// (0x0009f331) call2_cli_visual_pane_t1

0xc700,	// (0x000a7f94) postcard_message_pane_t1_ParamLimits

0xc700,	// (0x000a7f94) postcard_message_pane_t1

0xc6e8,	// (0x000a7f7c) postcard_address_pane_t1_ParamLimits

0xc6e8,	// (0x000a7f7c) postcard_address_pane_t1

0x4053,	// (0x0009f8e7) popup_call3_audio_in_window_ParamLimits

0x4053,	// (0x0009f8e7) popup_call3_audio_in_window

0x3f31,	// (0x0009f7c5) bg_popup_call3_in_pane_ParamLimits

0x3f31,	// (0x0009f7c5) bg_popup_call3_in_pane

0x3f99,	// (0x0009f82d) popup_call3_audio_in_window_g1_ParamLimits

0x3f99,	// (0x0009f82d) popup_call3_audio_in_window_g1

0x3fb1,	// (0x0009f845) popup_call3_audio_in_window_g2_ParamLimits

0x3fb1,	// (0x0009f845) popup_call3_audio_in_window_g2

0x3fc9,	// (0x0009f85d) popup_call3_audio_in_window_g3_ParamLimits

0x3fc9,	// (0x0009f85d) popup_call3_audio_in_window_g3

0x0003,

0xf528,	// (0x000aadbc) popup_call3_audio_in_window_g_ParamLimits

0xf528,	// (0x000aadbc) popup_call3_audio_in_window_g

0x3ff1,	// (0x0009f885) popup_call3_audio_in_window_t1_ParamLimits

0x3ff1,	// (0x0009f885) popup_call3_audio_in_window_t1

0x4019,	// (0x0009f8ad) popup_call3_audio_in_window_t2_ParamLimits

0x4019,	// (0x0009f8ad) popup_call3_audio_in_window_t2

0x4041,	// (0x0009f8d5) popup_call3_audio_in_window_t3_ParamLimits

0x4041,	// (0x0009f8d5) popup_call3_audio_in_window_t3

0x0002,

0xf531,	// (0x000aadc5) popup_call3_audio_in_window_t_ParamLimits

0xf531,	// (0x000aadc5) popup_call3_audio_in_window_t

0xa90a,	// (0x000a619e) bg_popup_call3_rect_pane

0xc4df,	// (0x000a7d73) bg_popup_call3_rect_pane_g1

0xa843,	// (0x000a60d7) bg_popup_call3_rect_pane_g2

0xc4e7,	// (0x000a7d7b) bg_popup_call3_rect_pane_g3

0xc4ef,	// (0x000a7d83) bg_popup_call3_rect_pane_g4

0xc4f7,	// (0x000a7d8b) bg_popup_call3_rect_pane_g5

0xc4ff,	// (0x000a7d93) bg_popup_call3_rect_pane_g6

0xc507,	// (0x000a7d9b) bg_popup_call3_rect_pane_g7

0x9c07,	// (0x000a549b) mup_visualizer_osc_pane

0x9c07,	// (0x000a549b) mup_visualizer_spec_pane

0x3f51,	// (0x0009f7e5) call3_video_qcif_pane_ParamLimits

0x3f51,	// (0x0009f7e5) call3_video_qcif_pane

0x3f63,	// (0x0009f7f7) call3_video_qcif_uncrop_pane_ParamLimits

0x3f63,	// (0x0009f7f7) call3_video_qcif_uncrop_pane

0x3f73,	// (0x0009f807) call3_video_subqcif_pane_ParamLimits

0x3f73,	// (0x0009f807) call3_video_subqcif_pane

0x3f87,	// (0x0009f81b) call3_video_subqcif_uncrop_pane_ParamLimits

0x3f87,	// (0x0009f81b) call3_video_subqcif_uncrop_pane

0x3fe1,	// (0x0009f875) popup_call3_audio_in_window_g4_ParamLimits

0x3fe1,	// (0x0009f875) popup_call3_audio_in_window_g4

0x9c07,	// (0x000a549b) mup_spec_half_pane

0x9c07,	// (0x000a549b) mup_spec_half_pane_cp

0x9c07,	// (0x000a549b) mup_osc_middle_pane

0xa99c,	// (0x000a6230) mup_visualizer_osc_pane_g1

0xc69b,	// (0x000a7f2f) mup_spec_bar_pane_ParamLimits

0xc69b,	// (0x000a7f2f) mup_spec_bar_pane

0xa99c,	// (0x000a6230) mup_spec_bar_pane_g1

0xa99c,	// (0x000a6230) mup_spec_bar_pane_g2

0x0001,

0x0027,	// (0x0009b8bb) mup_spec_bar_pane_g

0x133f,	// (0x0009cbd3) aid_cale_week_size_cell_pane_ParamLimits

0x1359,	// (0x0009cbed) bg_cale_heading_pane_ParamLimits

0x1382,	// (0x0009cc16) bg_cale_pane_cp01_ParamLimits

0x13a4,	// (0x0009cc38) cale_week_corner_pane_ParamLimits

0x13c3,	// (0x0009cc57) cale_week_day_heading_pane_ParamLimits

0x13f1,	// (0x0009cc85) cale_week_scroll_pane_g1_ParamLimits

0x1415,	// (0x0009cca9) cale_week_scroll_pane_g2_ParamLimits

0x142d,	// (0x0009ccc1) cale_week_scroll_pane_g3_ParamLimits

0x1445,	// (0x0009ccd9) cale_week_scroll_pane_g4_ParamLimits

0x145d,	// (0x0009ccf1) cale_week_scroll_pane_g5_ParamLimits

0x1475,	// (0x0009cd09) cale_week_scroll_pane_g6_ParamLimits

0x1495,	// (0x0009cd29) cale_week_scroll_pane_g7_ParamLimits

0x14b5,	// (0x0009cd49) cale_week_scroll_pane_g8_ParamLimits

0x14d5,	// (0x0009cd69) cale_week_scroll_pane_g9_ParamLimits

0x14f2,	// (0x0009cd86) cale_week_scroll_pane_g10_ParamLimits

0x150f,	// (0x0009cda3) cale_week_scroll_pane_g11_ParamLimits

0x152e,	// (0x0009cdc2) cale_week_scroll_pane_g12_ParamLimits

0x1553,	// (0x0009cde7) cale_week_scroll_pane_g13_ParamLimits

0x157c,	// (0x0009ce10) cale_week_scroll_pane_g14_ParamLimits

0x15a5,	// (0x0009ce39) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x000aa9bf) cale_week_scroll_pane_g_ParamLimits

0x15ee,	// (0x0009ce82) cale_week_time_pane_ParamLimits

0x160e,	// (0x0009cea2) grid_cale_week_pane_ParamLimits

0xa880,	// (0x000a6114) listscroll_cale_week_pane_t1

0xa892,	// (0x000a6126) scroll_pane_cp08_ParamLimits

0x216b,	// (0x0009d9ff) cale_month_corner_pane_ParamLimits

0xac99,	// (0x000a652d) cale_month_pane_t1

0x262d,	// (0x0009dec1) cale_month_week_pane_ParamLimits

0xbd26,	// (0x000a75ba) popup_call_status_window_g1_ParamLimits

0x2d88,	// (0x0009e61c) popup_call_status_window_g2_ParamLimits

0x2d94,	// (0x0009e628) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x000aab3e) popup_call_status_window_g_ParamLimits

0xb071,	// (0x000a6905) aid_call2_pane

0x3441,	// (0x0009ecd5) msg_header_pane_g1

0x361d,	// (0x0009eeb1) postcard_address2_pane_ParamLimits

0x361d,	// (0x0009eeb1) postcard_address2_pane

0x362b,	// (0x0009eebf) postcard_message2_pane_ParamLimits

0x362b,	// (0x0009eebf) postcard_message2_pane

0x3ee2,	// (0x0009f776) message2_row_pane_ParamLimits

0x3ee2,	// (0x0009f776) message2_row_pane

0x3efc,	// (0x0009f790) address2_row_pane_ParamLimits

0x3efc,	// (0x0009f790) address2_row_pane

0xc668,	// (0x000a7efc) postcard_message2_row_pane_g1

0xc670,	// (0x000a7f04) postcard_message2_row_pane_t1

0xc668,	// (0x000a7efc) address2_row_pane_g1

0xc670,	// (0x000a7f04) address2_row_pane_t1

0x199c,	// (0x0009d230) aid_size_cell_vorec

0xa059,	// (0x000a58ed) main_rss_pane

0xc67e,	// (0x000a7f12) rss_list_single_pane_ParamLimits

0xc67e,	// (0x000a7f12) rss_list_single_pane

0xc68c,	// (0x000a7f20) rss_list_single_pane_t1

0xc68c,	// (0x000a7f20) rss_list_single_pane_t2

0x0001,

0xf51c,	// (0x000aadb0) rss_list_single_pane_t

0xa059,	// (0x000a58ed) main_camera2_pane

0xa059,	// (0x000a58ed) main_video2_pane

0x0ee3,	// (0x0009c777) cams_zoom_pane_cp2_ParamLimits

0x0ee3,	// (0x0009c777) cams_zoom_pane_cp2

0x0ee3,	// (0x0009c777) image2_vga_pane_ParamLimits

0x0ee3,	// (0x0009c777) image2_vga_pane

0xb0a5,	// (0x000a6939) main_camera2_pane_g1_ParamLimits

0xb0a5,	// (0x000a6939) main_camera2_pane_g1

0xb0a5,	// (0x000a6939) main_camera2_pane_g2_ParamLimits

0xb0a5,	// (0x000a6939) main_camera2_pane_g2

0xb0a5,	// (0x000a6939) main_camera2_pane_g3_ParamLimits

0xb0a5,	// (0x000a6939) main_camera2_pane_g3

0xb0a5,	// (0x000a6939) main_camera2_pane_g4_ParamLimits

0xb0a5,	// (0x000a6939) main_camera2_pane_g4

0xb0a5,	// (0x000a6939) main_camera2_pane_g5_ParamLimits

0xb0a5,	// (0x000a6939) main_camera2_pane_g5

0xb0a5,	// (0x000a6939) main_camera2_pane_g6_ParamLimits

0xb0a5,	// (0x000a6939) main_camera2_pane_g6

0xb0a5,	// (0x000a6939) main_camera2_pane_g7_ParamLimits

0xb0a5,	// (0x000a6939) main_camera2_pane_g7

0xb0a5,	// (0x000a6939) main_camera2_pane_g8_ParamLimits

0xb0a5,	// (0x000a6939) main_camera2_pane_g8

0x0008,

0xf538,	// (0x000aadcc) main_camera2_pane_g_ParamLimits

0xf538,	// (0x000aadcc) main_camera2_pane_g

0x4070,	// (0x0009f904) main_camera2_pane_t1_ParamLimits

0x4070,	// (0x0009f904) main_camera2_pane_t1

0x4070,	// (0x0009f904) main_camera2_pane_t2_ParamLimits

0x4070,	// (0x0009f904) main_camera2_pane_t2

0x4070,	// (0x0009f904) main_camera2_pane_t3_ParamLimits

0x4070,	// (0x0009f904) main_camera2_pane_t3

0x4070,	// (0x0009f904) main_camera2_pane_t4_ParamLimits

0x4070,	// (0x0009f904) main_camera2_pane_t4

0x0006,

0xf54b,	// (0x000aaddf) main_camera2_pane_t_ParamLimits

0xf54b,	// (0x000aaddf) main_camera2_pane_t

0x4098,	// (0x0009f92c) cams_zoom_pane_cp4_ParamLimits

0x4098,	// (0x0009f92c) cams_zoom_pane_cp4

0x3d02,	// (0x0009f596) image2_cif_pane_ParamLimits

0x3d02,	// (0x0009f596) image2_cif_pane

0x0ee3,	// (0x0009c777) image2_subqcif_pane_ParamLimits

0x0ee3,	// (0x0009c777) image2_subqcif_pane

0x40a6,	// (0x0009f93a) main_video2_pane_g1_ParamLimits

0x40a6,	// (0x0009f93a) main_video2_pane_g1

0x40a6,	// (0x0009f93a) main_video2_pane_g2_ParamLimits

0x40a6,	// (0x0009f93a) main_video2_pane_g2

0x40a6,	// (0x0009f93a) main_video2_pane_g3_ParamLimits

0x40a6,	// (0x0009f93a) main_video2_pane_g3

0x40a6,	// (0x0009f93a) main_video2_pane_g4_ParamLimits

0x40a6,	// (0x0009f93a) main_video2_pane_g4

0x40a6,	// (0x0009f93a) main_video2_pane_g5_ParamLimits

0x40a6,	// (0x0009f93a) main_video2_pane_g5

0x40a6,	// (0x0009f93a) main_video2_pane_g6_ParamLimits

0x40a6,	// (0x0009f93a) main_video2_pane_g6

0x0005,

0xf55a,	// (0x000aadee) main_video2_pane_g_ParamLimits

0xf55a,	// (0x000aadee) main_video2_pane_g

0x40b4,	// (0x0009f948) main_video2_pane_t1_ParamLimits

0x40b4,	// (0x0009f948) main_video2_pane_t1

0x40b4,	// (0x0009f948) main_video2_pane_t2_ParamLimits

0x40b4,	// (0x0009f948) main_video2_pane_t2

0x40b4,	// (0x0009f948) main_video2_pane_t3_ParamLimits

0x40b4,	// (0x0009f948) main_video2_pane_t3

0x0002,

0xf567,	// (0x000aadfb) main_video2_pane_t_ParamLimits

0xf567,	// (0x000aadfb) main_video2_pane_t

0x3bc3,	// (0x0009f457) call_muted_g2

0x0001,

0xf50e,	// (0x000aada2) call_muted_g

0xa059,	// (0x000a58ed) main_mup2_pane

0xa716,	// (0x000a5faa) main_mup2_pane_g1_ParamLimits

0xa716,	// (0x000a5faa) main_mup2_pane_g1

0xa716,	// (0x000a5faa) main_mup2_pane_g2_ParamLimits

0xa716,	// (0x000a5faa) main_mup2_pane_g2

0xd785,	// (0x000a9019) main_mup_pane_g13_cp1

0x0efd,	// (0x0009c791) mup_volume_pane_cp1

0xa716,	// (0x000a5faa) main_mup2_pane_g4_ParamLimits

0xa716,	// (0x000a5faa) main_mup2_pane_g4

0xa716,	// (0x000a5faa) main_mup2_pane_g5_ParamLimits

0xa716,	// (0x000a5faa) main_mup2_pane_g5

0xa716,	// (0x000a5faa) main_mup2_pane_g6_ParamLimits

0xa716,	// (0x000a5faa) main_mup2_pane_g6

0xa716,	// (0x000a5faa) main_mup2_pane_g7_ParamLimits

0xa716,	// (0x000a5faa) main_mup2_pane_g7

0x0006,

0xf56e,	// (0x000aae02) main_mup2_pane_g_ParamLimits

0xf56e,	// (0x000aae02) main_mup2_pane_g

0xa724,	// (0x000a5fb8) main_mup2_pane_t1_ParamLimits

0xa724,	// (0x000a5fb8) main_mup2_pane_t1

0xa724,	// (0x000a5fb8) main_mup2_pane_t2_ParamLimits

0xa724,	// (0x000a5fb8) main_mup2_pane_t2

0xa724,	// (0x000a5fb8) main_mup2_pane_t3_ParamLimits

0xa724,	// (0x000a5fb8) main_mup2_pane_t3

0xa724,	// (0x000a5fb8) main_mup2_pane_t4_ParamLimits

0xa724,	// (0x000a5fb8) main_mup2_pane_t4

0xa724,	// (0x000a5fb8) main_mup2_pane_t5_ParamLimits

0xa724,	// (0x000a5fb8) main_mup2_pane_t5

0xa724,	// (0x000a5fb8) main_mup2_pane_t6_ParamLimits

0xa724,	// (0x000a5fb8) main_mup2_pane_t6

0x0005,

0xf57d,	// (0x000aae11) main_mup2_pane_t_ParamLimits

0xf57d,	// (0x000aae11) main_mup2_pane_t

0xc3fb,	// (0x000a7c8f) mup2_visualizer_pane_ParamLimits

0xc3fb,	// (0x000a7c8f) mup2_visualizer_pane

0xc3fb,	// (0x000a7c8f) mup_progress_pane_cp_ParamLimits

0xc3fb,	// (0x000a7c8f) mup_progress_pane_cp

0x4183,	// (0x0009fa17) mup_volume_pane_cp_ParamLimits

0x4183,	// (0x0009fa17) mup_volume_pane_cp

0xa6fa,	// (0x000a5f8e) mup2_visualizer_pane_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) mup2_visualizer_pane_g1

0xa708,	// (0x000a5f9c) mup2_visualizer_pane_g2_ParamLimits

0xa708,	// (0x000a5f9c) mup2_visualizer_pane_g2

0xa708,	// (0x000a5f9c) mup2_visualizer_pane_g3_ParamLimits

0xa708,	// (0x000a5f9c) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x000aa938) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x000aa938) mup2_visualizer_pane_g

0xb5a2,	// (0x000a6e36) aid_size_cell_fmradio

0x3cd9,	// (0x0009f56d) aid_height_parent_landcape

0xaaf7,	// (0x000a638b) wml_content_pane_cp

0xaaff,	// (0x000a6393) wml_tabs_pane

0xab08,	// (0x000a639c) popup_wml_miniature_window

0xab10,	// (0x000a63a4) scroll_pane_cp021

0xab24,	// (0x000a63b8) wml_content_pane_comp8

0xa059,	// (0x000a58ed) bg_popup_sub_pane_cp05

0xc732,	// (0x000a7fc6) popup_wml_miniature_window_g1

0xc73a,	// (0x000a7fce) wml_miniature_view_pane

0x40c8,	// (0x0009f95c) aid_size_wml_view

0x40d0,	// (0x0009f964) wml_miniature_view_pane_g1

0x40d9,	// (0x0009f96d) wml_miniature_view_pane_g2

0x40e2,	// (0x0009f976) wml_miniature_view_pane_g3

0x40ea,	// (0x0009f97e) wml_miniature_view_pane_g4

0x40f2,	// (0x0009f986) wml_miniature_view_pane_g5

0x40fa,	// (0x0009f98e) wml_miniature_view_pane_g6

0x4102,	// (0x0009f996) wml_miniature_view_pane_g7

0x410a,	// (0x0009f99e) wml_miniature_view_pane_g8

0x0007,

0xf58a,	// (0x000aae1e) wml_miniature_view_pane_g

0xc742,	// (0x000a7fd6) background_graphic_ParamLimits

0xc742,	// (0x000a7fd6) background_graphic

0xc74e,	// (0x000a7fe2) wml_tabs_2_pane

0xc757,	// (0x000a7feb) wml_tabs_3_pane_ParamLimits

0xc757,	// (0x000a7feb) wml_tabs_3_pane

0xc769,	// (0x000a7ffd) wml_tabs_4_pane_ParamLimits

0xc769,	// (0x000a7ffd) wml_tabs_4_pane

0xc77f,	// (0x000a8013) wml_tabs_5_pane_ParamLimits

0xc77f,	// (0x000a8013) wml_tabs_5_pane

0xc799,	// (0x000a802d) wml_tabs_pane_g2_ParamLimits

0xc799,	// (0x000a802d) wml_tabs_pane_g2

0xc7ae,	// (0x000a8042) wml_tabs_pane_g3_ParamLimits

0xc7ae,	// (0x000a8042) wml_tabs_pane_g3

0xc7c3,	// (0x000a8057) wml_tabs_2_active_pane_ParamLimits

0xc7c3,	// (0x000a8057) wml_tabs_2_active_pane

0xc7c3,	// (0x000a8057) wml_tabs_2_passive_pane_ParamLimits

0xc7c3,	// (0x000a8057) wml_tabs_2_passive_pane

0x4112,	// (0x0009f9a6) wml_tabs_3_active_pane_cp_ParamLimits

0x4112,	// (0x0009f9a6) wml_tabs_3_active_pane_cp

0x4125,	// (0x0009f9b9) wml_tabs_3_passive_pane_ParamLimits

0x4125,	// (0x0009f9b9) wml_tabs_3_passive_pane

0x4136,	// (0x0009f9ca) wml_tabs_3_passive_pane_cp_ParamLimits

0x4136,	// (0x0009f9ca) wml_tabs_3_passive_pane_cp

0x414b,	// (0x0009f9df) tabs_4_active_pane

0x4153,	// (0x0009f9e7) tabs_4_passive_pane

0x415b,	// (0x0009f9ef) tabs_4_passive_pane_cp

0x4163,	// (0x0009f9f7) tabs_4_passive_pane_cp2

0x3abf,	// (0x0009f353) aid_height_text

0xc3fb,	// (0x000a7c8f) mup_volume_cont_pane_ParamLimits

0xc3fb,	// (0x000a7c8f) mup_volume_cont_pane

0x9c07,	// (0x000a549b) aid_size_cell_pinb

0x9c07,	// (0x000a549b) aid_size_list_pinb

0xc3fb,	// (0x000a7c8f) mup2_volume_cont_pane_ParamLimits

0xc3fb,	// (0x000a7c8f) mup2_volume_cont_pane

0x416d,	// (0x0009fa01) mup2_volume_cont_pane_g1_ParamLimits

0x416d,	// (0x0009fa01) mup2_volume_cont_pane_g1

0x0c4a,	// (0x0009c4de) aid_size_cell_touch_ParamLimits

0x0c4a,	// (0x0009c4de) aid_size_cell_touch

0x0f07,	// (0x0009c79b) touch_pane_ParamLimits

0x0f07,	// (0x0009c79b) touch_pane

0x0efd,	// (0x0009c791) main_rss2_pane

0xc7da,	// (0x000a806e) listscroll_rss2_pane

0xc7e3,	// (0x000a8077) rss2_navigation_pane

0xc7eb,	// (0x000a807f) list_rss2_pane

0xb189,	// (0x000a6a1d) scroll_pane_cp22

0xc7f3,	// (0x000a8087) rss2_navigation_pane_g1

0xc7fc,	// (0x000a8090) rss2_navigation_pane_g2

0xc804,	// (0x000a8098) rss2_navigation_pane_g3

0x0002,

0x0263,	// (0x0009baf7) rss2_navigation_pane_g

0xc80c,	// (0x000a80a0) rss2_navigation_pane_t1

0x4199,	// (0x0009fa2d) rss2_list_single_pane_ParamLimits

0x4199,	// (0x0009fa2d) rss2_list_single_pane

0xc81a,	// (0x000a80ae) rss2_list_single_pane_t2

0xc828,	// (0x000a80bc) rss2_list_single_pane_t3_ParamLimits

0xc828,	// (0x000a80bc) rss2_list_single_pane_t3

0xc845,	// (0x000a80d9) rss2_list_single_pane_t4

0x2c3b,	// (0x0009e4cf) smil_status_pane_g1

0x3d02,	// (0x0009f596) main_image2_pane_ParamLimits

0x3d02,	// (0x0009f596) main_image2_pane

0xb0a5,	// (0x000a6939) main_camera2_pane_g9_ParamLimits

0xb0a5,	// (0x000a6939) main_camera2_pane_g9

0x4070,	// (0x0009f904) main_camera2_pane_t5_ParamLimits

0x4070,	// (0x0009f904) main_camera2_pane_t5

0x4084,	// (0x0009f918) main_camera2_pane_t6_ParamLimits

0x4084,	// (0x0009f918) main_camera2_pane_t6

0x41bc,	// (0x0009fa50) main_image2_pane_g1_ParamLimits

0x41bc,	// (0x0009fa50) main_image2_pane_g1

0x37f4,	// (0x0009f088) smil2_video_pane_ParamLimits

0x37f4,	// (0x0009f088) smil2_video_pane

0x0b4e,	// (0x0009c3e2) aid_zoom_text_primary_cp

0x0e98,	// (0x0009c72c) popup_preview_fixed_window

0xaa51,	// (0x000a62e5) im_reading_pane_g1

0x4062,	// (0x0009f8f6) cams2_bc_adjust_pane_cp_ParamLimits

0x4062,	// (0x0009f8f6) cams2_bc_adjust_pane_cp

0x0ee3,	// (0x0009c777) cams2_bc_adjust_pane_ParamLimits

0x0ee3,	// (0x0009c777) cams2_bc_adjust_pane

0xd785,	// (0x000a9019) cams2_bc_adjust_pane_g1

0x0efd,	// (0x0009c791) cams2_slider_pane

0xd785,	// (0x000a9019) cams2_slider_pane_g1

0xd785,	// (0x000a9019) cams2_slider_pane_g2

0x0006,

0xf59b,	// (0x000aae2f) cams2_slider_pane_g

0x0f9c,	// (0x0009c830) calc_display_pane_ParamLimits

0x0fba,	// (0x0009c84e) calc_paper_pane_ParamLimits

0x0fd6,	// (0x0009c86a) grid_calc_pane_ParamLimits

0x2df2,	// (0x0009e686) popup_clock_digital_window_t1_ParamLimits

0xb53f,	// (0x000a6dd3) main_image_pane_t1

0x0f82,	// (0x0009c816) aid_size_cell_calc_ParamLimits

0x0f82,	// (0x0009c816) aid_size_cell_calc

0x3d33,	// (0x0009f5c7) popup_blid_sat_info2_window_ParamLimits

0x3d33,	// (0x0009f5c7) popup_blid_sat_info2_window

0xc853,	// (0x000a80e7) aid_size_cell_blid

0xc3fb,	// (0x000a7c8f) bg_popup_window_pane_cp07

0xc870,	// (0x000a8104) grid_popup_blid_pane

0xc87a,	// (0x000a810e) heading_pane_cp05_ParamLimits

0xc87a,	// (0x000a810e) heading_pane_cp05

0xc944,	// (0x000a81d8) cell_popup_blid_pane_ParamLimits

0xc944,	// (0x000a81d8) cell_popup_blid_pane

0xc96e,	// (0x000a8202) cell_popup_blid_pane_g1

0xc976,	// (0x000a820a) cell_popup_blid_pane_t1

0xc3fb,	// (0x000a7c8f) mup2_indicator_pane_ParamLimits

0xc3fb,	// (0x000a7c8f) mup2_indicator_pane

0x9c07,	// (0x000a549b) mup2_visualizer_osc_pane

0xc71c,	// (0x000a7fb0) mup2_visualizer_spec_pane_ParamLimits

0xc71c,	// (0x000a7fb0) mup2_visualizer_spec_pane

0x9c07,	// (0x000a549b) mup2_spec_half_pane

0x9c07,	// (0x000a549b) mup2_spec_half_pane_cp

0xc984,	// (0x000a8218) mup2_spec_bar_pane_ParamLimits

0xc984,	// (0x000a8218) mup2_spec_bar_pane

0xa99c,	// (0x000a6230) mup2_spec_bar_pane_g1

0xc9a3,	// (0x000a8237) mup2_spec_bar_pane_g2

0x0001,

0x0290,	// (0x0009bb24) mup2_spec_bar_pane_g

0x9c07,	// (0x000a549b) mup2_osc_middle_pane

0xa99c,	// (0x000a6230) mup2_visualizer_osc_pane_g1

0x9c31,	// (0x000a54c5) popup_number_entry_window_t1_ParamLimits

0x9c44,	// (0x000a54d8) popup_number_entry_window_t2_ParamLimits

0x9c56,	// (0x000a54ea) popup_number_entry_window_t3_ParamLimits

0x9c68,	// (0x000a54fc) popup_number_entry_window_t5_ParamLimits

0x9c68,	// (0x000a54fc) popup_number_entry_window_t5

0xf045,	// (0x000aa8d9) popup_number_entry_window_t_ParamLimits

0x9c9d,	// (0x000a5531) text_title_cp2_ParamLimits

0x34e1,	// (0x0009ed75) aid_hotspot_pointer_text2_pane

0x357b,	// (0x0009ee0f) main_viewer_pane_g9_ParamLimits

0x357b,	// (0x0009ee0f) main_viewer_pane_g9

0xac99,	// (0x000a652d) cale_month_pane_t1_ParamLimits

0xacd6,	// (0x000a656a) bg_cale_pane_ParamLimits

0xacee,	// (0x000a6582) list_cale_pane_ParamLimits

0xacff,	// (0x000a6593) listscroll_cale_day_pane_t1

0xad11,	// (0x000a65a5) scroll_pane_cp09_ParamLimits

0x31a2,	// (0x0009ea36) main_mup_eq_pane_t1_ParamLimits

0x31a2,	// (0x0009ea36) main_mup_eq_pane_t1

0x31be,	// (0x0009ea52) main_mup_eq_pane_t2_ParamLimits

0x31be,	// (0x0009ea52) main_mup_eq_pane_t2

0x31da,	// (0x0009ea6e) main_mup_eq_pane_t3_ParamLimits

0x31da,	// (0x0009ea6e) main_mup_eq_pane_t3

0x31f4,	// (0x0009ea88) main_mup_eq_pane_t4_ParamLimits

0x31f4,	// (0x0009ea88) main_mup_eq_pane_t4

0x320e,	// (0x0009eaa2) main_mup_eq_pane_t5_ParamLimits

0x320e,	// (0x0009eaa2) main_mup_eq_pane_t5

0x3228,	// (0x0009eabc) main_mup_eq_pane_t6_ParamLimits

0x3228,	// (0x0009eabc) main_mup_eq_pane_t6

0x323e,	// (0x0009ead2) main_mup_eq_pane_t7_ParamLimits

0x323e,	// (0x0009ead2) main_mup_eq_pane_t7

0x3254,	// (0x0009eae8) main_mup_eq_pane_t8_ParamLimits

0x3254,	// (0x0009eae8) main_mup_eq_pane_t8

0x326a,	// (0x0009eafe) main_mup_eq_pane_t9_ParamLimits

0x326a,	// (0x0009eafe) main_mup_eq_pane_t9

0x3286,	// (0x0009eb1a) main_mup_eq_pane_t10_ParamLimits

0x3286,	// (0x0009eb1a) main_mup_eq_pane_t10

0x0009,

0xf39d,	// (0x000aac31) main_mup_eq_pane_t_ParamLimits

0xf39d,	// (0x000aac31) main_mup_eq_pane_t

0x334b,	// (0x0009ebdf) mup_equalizer_pane_cp5_ParamLimits

0x3363,	// (0x0009ebf7) mup_equalizer_pane_cp6_ParamLimits

0x337b,	// (0x0009ec0f) mup_equalizer_pane_cp7_ParamLimits

0x0efd,	// (0x0009c791) main_gallery_pane

0xc6ba,	// (0x000a7f4e) smil2_volume_pane

0xc6c2,	// (0x000a7f56) smil_status_volume_pane_g1_ParamLimits

0xc6d5,	// (0x000a7f69) smil_status_volume_pane_g2_ParamLimits

0x3f0f,	// (0x0009f7a3) smil_status_volume_pane_g3_ParamLimits

0xf521,	// (0x000aadb5) smil_status_volume_pane_g_ParamLimits

0xc3fb,	// (0x000a7c8f) bg_popup_window_pane_cp07_ParamLimits

0xc85b,	// (0x000a80ef) blid_firmament_pane

0xa6ec,	// (0x000a5f80) aid_size_cell_gallery_ParamLimits

0xa6ec,	// (0x000a5f80) aid_size_cell_gallery

0xa6ec,	// (0x000a5f80) grid_gallery_pane_ParamLimits

0xa6ec,	// (0x000a5f80) grid_gallery_pane

0xb663,	// (0x000a6ef7) cell_gallery_pane_ParamLimits

0xb663,	// (0x000a6ef7) cell_gallery_pane

0xa296,	// (0x000a5b2a) bg_cell_gallery_focus_pane_ParamLimits

0xa296,	// (0x000a5b2a) bg_cell_gallery_focus_pane

0xa6fa,	// (0x000a5f8e) cell_gallery_pane_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) cell_gallery_pane_g1

0xa6fa,	// (0x000a5f8e) cell_gallery_pane_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) cell_gallery_pane_g2

0xa6fa,	// (0x000a5f8e) cell_gallery_pane_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) cell_gallery_pane_g3

0xa708,	// (0x000a5f9c) cell_gallery_pane_g4_ParamLimits

0xa708,	// (0x000a5f9c) cell_gallery_pane_g4

0x0003,

0xf5aa,	// (0x000aae3e) cell_gallery_pane_g_ParamLimits

0xf5aa,	// (0x000aae3e) cell_gallery_pane_g

0xc9ad,	// (0x000a8241) bg_cell_gallery_focus_pane_g1

0xc9b5,	// (0x000a8249) bg_cell_gallery_focus_pane_g2

0xc9bd,	// (0x000a8251) bg_cell_gallery_focus_pane_g3

0xc9c5,	// (0x000a8259) bg_cell_gallery_focus_pane_g4

0xc9cd,	// (0x000a8261) bg_cell_gallery_focus_pane_g5

0xc9d5,	// (0x000a8269) bg_cell_gallery_focus_pane_g6

0xc9dd,	// (0x000a8271) bg_cell_gallery_focus_pane_g7

0xc9e5,	// (0x000a8279) bg_cell_gallery_focus_pane_g8

0x0007,

0x029e,	// (0x0009bb32) bg_cell_gallery_focus_pane_g

0xc9ed,	// (0x000a8281) aid_firma_cardinal

0xca01,	// (0x000a8295) blid_firmament_pane_t1

0xca18,	// (0x000a82ac) blid_firmament_pane_t2

0xca2f,	// (0x000a82c3) blid_firmament_pane_t3

0xca46,	// (0x000a82da) blid_firmament_pane_t4

0x0003,

0x02af,	// (0x0009bb43) blid_firmament_pane_t

0xca5d,	// (0x000a82f1) blid_sat_info_pane

0xa99c,	// (0x000a6230) blid_sat_info_pane_g1

0xa99c,	// (0x000a6230) blid_sat_info_pane_g2

0x0001,

0x0027,	// (0x0009b8bb) blid_sat_info_pane_g

0xca6d,	// (0x000a8301) blid_sat_info_pane_t1

0xca7b,	// (0x000a830f) smil2_volume_content_pane

0xca84,	// (0x000a8318) smil2_volume_pane_g1

0xa940,	// (0x000a61d4) smil2_volume_content_pane_g1

0xca8c,	// (0x000a8320) smil2_volume_content_pane_g2

0xca95,	// (0x000a8329) smil2_volume_content_pane_g3

0xca9e,	// (0x000a8332) smil2_volume_content_pane_g4

0xcaa7,	// (0x000a833b) smil2_volume_content_pane_g5

0xcab0,	// (0x000a8344) smil2_volume_content_pane_g6

0xcab9,	// (0x000a834d) smil2_volume_content_pane_g7

0xcac2,	// (0x000a8356) smil2_volume_content_pane_g8

0xcacb,	// (0x000a835f) smil2_volume_content_pane_g9

0xcad4,	// (0x000a8368) smil2_volume_content_pane_g10

0x0009,

0xf5b3,	// (0x000aae47) smil2_volume_content_pane_g

0x16cf,	// (0x0009cf63) cale_week_day_heading_pane_t1_ParamLimits

0x16f7,	// (0x0009cf8b) cale_week_day_heading_pane_t2_ParamLimits

0x1724,	// (0x0009cfb8) cale_week_day_heading_pane_t3_ParamLimits

0x1751,	// (0x0009cfe5) cale_week_day_heading_pane_t4_ParamLimits

0x177e,	// (0x0009d012) cale_week_day_heading_pane_t5_ParamLimits

0x17ab,	// (0x0009d03f) cale_week_day_heading_pane_t6_ParamLimits

0x17d8,	// (0x0009d06c) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x000aa9e0) cale_week_day_heading_pane_t_ParamLimits

0xa8af,	// (0x000a6143) bg_cale_side_pane_ParamLimits

0x1800,	// (0x0009d094) cale_week_time_pane_t1_ParamLimits

0x1824,	// (0x0009d0b8) cale_week_time_pane_t2_ParamLimits

0x1848,	// (0x0009d0dc) cale_week_time_pane_t3_ParamLimits

0x186c,	// (0x0009d100) cale_week_time_pane_t4_ParamLimits

0x1890,	// (0x0009d124) cale_week_time_pane_t5_ParamLimits

0x18b6,	// (0x0009d14a) cale_week_time_pane_t6_ParamLimits

0x18de,	// (0x0009d172) cale_week_time_pane_t7_ParamLimits

0x190a,	// (0x0009d19e) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x000aa9ef) cale_week_time_pane_t_ParamLimits

0x193a,	// (0x0009d1ce) cell_cale_week_pane_g2_ParamLimits

0xa8af,	// (0x000a6143) bg_cale_side_pane_cp01_ParamLimits

0x2a26,	// (0x0009e2ba) cale_month_week_pane_t1_ParamLimits

0x2a3f,	// (0x0009e2d3) cale_month_week_pane_t2_ParamLimits

0x2a58,	// (0x0009e2ec) cale_month_week_pane_t3_ParamLimits

0x2a71,	// (0x0009e305) cale_month_week_pane_t4_ParamLimits

0x2a8a,	// (0x0009e31e) cale_month_week_pane_t5_ParamLimits

0x2aa7,	// (0x0009e33b) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x000aaabd) cale_month_week_pane_t_ParamLimits

0x2bf8,	// (0x0009e48c) cell_cale_month_pane_g1_ParamLimits

0x0efd,	// (0x0009c791) main_cale_event_viewer_pane

0x9c07,	// (0x000a549b) listscroll_cale_event_viewer_pane

0xcadd,	// (0x000a8371) list_cale_ev_pane

0xcae5,	// (0x000a8379) scroll_pane_cp023

0x41c8,	// (0x0009fa5c) field_cale_ev_pane_ParamLimits

0x41c8,	// (0x0009fa5c) field_cale_ev_pane

0xcaf1,	// (0x000a8385) field_cale_ev_content_pane_ParamLimits

0xcaf1,	// (0x000a8385) field_cale_ev_content_pane

0xcafd,	// (0x000a8391) field_cale_ev_pane_g1_ParamLimits

0xcafd,	// (0x000a8391) field_cale_ev_pane_g1

0xcb09,	// (0x000a839d) field_cale_ev_pane_g2_ParamLimits

0xcb09,	// (0x000a839d) field_cale_ev_pane_g2

0xcb21,	// (0x000a83b5) field_cale_ev_pane_g3_ParamLimits

0xcb21,	// (0x000a83b5) field_cale_ev_pane_g3

0x0002,

0x02cd,	// (0x0009bb61) field_cale_ev_pane_g_ParamLimits

0x02cd,	// (0x0009bb61) field_cale_ev_pane_g

0xcb39,	// (0x000a83cd) field_cale_ev_pane_t1_ParamLimits

0xcb39,	// (0x000a83cd) field_cale_ev_pane_t1

0x41ec,	// (0x0009fa80) field_cale_ev_content_pane_t1_ParamLimits

0x41ec,	// (0x0009fa80) field_cale_ev_content_pane_t1

0xb425,	// (0x000a6cb9) bg_button_pane_cp01

0x132d,	// (0x0009cbc1) listscroll_cale_week_pane_ParamLimits

0xa877,	// (0x000a610b) popup_toolbar_window_cp01

0xa880,	// (0x000a6114) listscroll_cale_week_pane_t1_ParamLimits

0x132d,	// (0x0009cbc1) listscroll_cale_day_pane_ParamLimits

0xa877,	// (0x000a610b) popup_toolbar_window_cp02

0xacff,	// (0x000a6593) listscroll_cale_day_pane_t1_ParamLimits

0x3cf0,	// (0x0009f584) main_cale_month_pane_ParamLimits

0x3e52,	// (0x0009f6e6) popup_toolbar_window_cp03_ParamLimits

0x3e52,	// (0x0009f6e6) popup_toolbar_window_cp03

0x3704,	// (0x0009ef98) main_image_pane_g2_ParamLimits

0x3704,	// (0x0009ef98) main_image_pane_g2

0x3710,	// (0x0009efa4) main_image_pane_g3_ParamLimits

0x3710,	// (0x0009efa4) main_image_pane_g3

0x0002,

0xf42f,	// (0x000aacc3) main_image_pane_g_ParamLimits

0xf42f,	// (0x000aacc3) main_image_pane_g

0xb53f,	// (0x000a6dd3) main_image_pane_t1_ParamLimits

0x371c,	// (0x0009efb0) main_image_pane_t2_ParamLimits

0x371c,	// (0x0009efb0) main_image_pane_t2

0x372e,	// (0x0009efc2) main_image_pane_t3_ParamLimits

0x372e,	// (0x0009efc2) main_image_pane_t3

0x3740,	// (0x0009efd4) main_image_pane_t4_ParamLimits

0x3740,	// (0x0009efd4) main_image_pane_t4

0x0003,

0xf436,	// (0x000aacca) main_image_pane_t_ParamLimits

0xf436,	// (0x000aacca) main_image_pane_t

0x3752,	// (0x0009efe6) popup_image_details_window_cp01

0x375c,	// (0x0009eff0) popup_toobar_trans_pane_cp01_ParamLimits

0x375c,	// (0x0009eff0) popup_toobar_trans_pane_cp01

0x3d94,	// (0x0009f628) popup_image_details_window_ParamLimits

0x3d94,	// (0x0009f628) popup_image_details_window

0x3da2,	// (0x0009f636) popup_image_focus_window

0x0ee3,	// (0x0009c777) camera2_autofocus_pane_ParamLimits

0x0ee3,	// (0x0009c777) camera2_autofocus_pane

0x9c07,	// (0x000a549b) bg_popup_sub_pane_cp06

0xcb50,	// (0x000a83e4) popup_image_focus_window_g1

0xcb58,	// (0x000a83ec) popup_image_focus_window_g2

0xcb60,	// (0x000a83f4) popup_image_focus_window_g3

0xcb68,	// (0x000a83fc) popup_image_focus_window_g4

0x0003,

0x02d4,	// (0x0009bb68) popup_image_focus_window_g

0xcb70,	// (0x000a8404) popup_image_focus_window_t1

0xcb7e,	// (0x000a8412) popup_image_focus_window_t2

0xcb8e,	// (0x000a8422) popup_image_focus_window_t3

0x0002,

0xf5c8,	// (0x000aae5c) popup_image_focus_window_t

0xa6fa,	// (0x000a5f8e) camera2_autofocus_pane_g1

0xa296,	// (0x000a5b2a) bg_tb_trans_pane_cp01

0xcb9c,	// (0x000a8430) popup_image_details_window_g1

0xcbaf,	// (0x000a8443) popup_image_details_window_g2

0x0002,

0xf5da,	// (0x000aae6e) popup_image_details_window_g

0xcbd8,	// (0x000a846c) popup_image_details_window_t1

0xcbea,	// (0x000a847e) popup_image_details_window_t2

0xcc03,	// (0x000a8497) popup_image_details_window_t3

0xcc17,	// (0x000a84ab) popup_image_details_window_t4

0xcc32,	// (0x000a84c6) popup_image_details_window_t5

0x0004,

0xf5e1,	// (0x000aae75) popup_image_details_window_t

0xa758,	// (0x000a5fec) bg_calc_paper_pane_ParamLimits

0x0efd,	// (0x0009c791) grid_highlight_pane_cp013

0x10d3,	// (0x0009c967) list_calc_pane_ParamLimits

0x10e5,	// (0x0009c979) scroll_pane_cp024

0xa76c,	// (0x000a6000) bg_calc_display_pane_ParamLimits

0x10ed,	// (0x0009c981) calc_display_pane_t1_ParamLimits

0x1102,	// (0x0009c996) calc_display_pane_t2_ParamLimits

0x1117,	// (0x0009c9ab) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x000aa960) calc_display_pane_t_ParamLimits

0x11e7,	// (0x0009ca7b) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x000aa97d) cell_calc_pane_g

0x11f0,	// (0x0009ca84) cell_calc_pane_t1

0xa7c1,	// (0x000a6055) grid_highlight_pane_cp02_ParamLimits

0xa7d7,	// (0x000a606b) toolbar_button_pane_cp01_ParamLimits

0xa7d7,	// (0x000a606b) toolbar_button_pane_cp01

0xb584,	// (0x000a6e18) temp_image_control_pane_ParamLimits

0xb584,	// (0x000a6e18) temp_image_control_pane

0x3d02,	// (0x0009f596) main_mp3_pane

0xcc4c,	// (0x000a84e0) temp_image_control_pane_g1_ParamLimits

0xcc4c,	// (0x000a84e0) temp_image_control_pane_g1

0xcc5a,	// (0x000a84ee) temp_image_control_pane_g2_ParamLimits

0xcc5a,	// (0x000a84ee) temp_image_control_pane_g2

0xcc6c,	// (0x000a8500) temp_image_control_pane_g3_ParamLimits

0xcc6c,	// (0x000a8500) temp_image_control_pane_g3

0x4207,	// (0x0009fa9b) temp_image_control_pane_g4_ParamLimits

0x4207,	// (0x0009fa9b) temp_image_control_pane_g4

0x0003,

0xf5ec,	// (0x000aae80) temp_image_control_pane_g_ParamLimits

0xf5ec,	// (0x000aae80) temp_image_control_pane_g

0xcc4c,	// (0x000a84e0) main_mp3_pane_g1

0x4218,	// (0x0009faac) main_mp3_pane_g2

0x0007,

0xf5f5,	// (0x000aae89) main_mp3_pane_g

0xcca1,	// (0x000a8535) main_mp3_pane_t1

0xa708,	// (0x000a5f9c) main_camera_pane_g8_ParamLimits

0xa708,	// (0x000a5f9c) main_camera_pane_g8

0x1ae6,	// (0x0009d37a) main_video_pane_g7_ParamLimits

0x1ae6,	// (0x0009d37a) main_video_pane_g7

0x4070,	// (0x0009f904) main_camera2_pane_t7_ParamLimits

0x4070,	// (0x0009f904) main_camera2_pane_t7

0xaab7,	// (0x000a634b) scroll_pane_cp025_ParamLimits

0xaab7,	// (0x000a634b) scroll_pane_cp025

0xaacb,	// (0x000a635f) scroll_pane_cp026_ParamLimits

0xaacb,	// (0x000a635f) scroll_pane_cp026

0xaada,	// (0x000a636e) wml_content_pane_ParamLimits

0x0efd,	// (0x0009c791) main_touch_calib_pane

0x42bc,	// (0x0009fb50) main_touch_calib_pane_g1

0x42c8,	// (0x0009fb5c) main_touch_calib_pane_g2

0x42d4,	// (0x0009fb68) main_touch_calib_pane_g3

0x42e0,	// (0x0009fb74) main_touch_calib_pane_g4

0x0003,

0xf613,	// (0x000aaea7) main_touch_calib_pane_g

0x42ec,	// (0x0009fb80) main_touch_calib_pane_t1

0x4303,	// (0x0009fb97) main_touch_calib_pane_t2

0x0004,

0xf61c,	// (0x000aaeb0) main_touch_calib_pane_t

0xb204,	// (0x000a6a98) mup_progress_pane_cp02

0xb223,	// (0x000a6ab7) navi_pane_g1

0xb285,	// (0x000a6b19) navi_pane_mp_t3

0x3d02,	// (0x0009f596) main_mp3_pane_ParamLimits

0x3e93,	// (0x0009f727) navi_pane_ParamLimits

0xcc4c,	// (0x000a84e0) main_mp3_pane_g1_ParamLimits

0x4218,	// (0x0009faac) main_mp3_pane_g2_ParamLimits

0x4224,	// (0x0009fab8) main_mp3_pane_g3_ParamLimits

0x4224,	// (0x0009fab8) main_mp3_pane_g3

0x4230,	// (0x0009fac4) main_mp3_pane_g4_ParamLimits

0x4230,	// (0x0009fac4) main_mp3_pane_g4

0xa6fa,	// (0x000a5f8e) main_mp3_pane_g5_ParamLimits

0xa6fa,	// (0x000a5f8e) main_mp3_pane_g5

0xcc7c,	// (0x000a8510) main_mp3_pane_g6_ParamLimits

0xcc7c,	// (0x000a8510) main_mp3_pane_g6

0xcc89,	// (0x000a851d) main_mp3_pane_g7_ParamLimits

0xcc89,	// (0x000a851d) main_mp3_pane_g7

0xcc95,	// (0x000a8529) main_mp3_pane_g8_ParamLimits

0xcc95,	// (0x000a8529) main_mp3_pane_g8

0xf5f5,	// (0x000aae89) main_mp3_pane_g_ParamLimits

0x423c,	// (0x0009fad0) main_mp3_pane_t2

0x424c,	// (0x0009fae0) main_mp3_pane_t3

0xccaf,	// (0x000a8543) main_mp3_pane_t4

0xccbd,	// (0x000a8551) main_mp3_pane_t5

0x0005,

0xf606,	// (0x000aae9a) main_mp3_pane_t

0xcccb,	// (0x000a855f) mup_progress_pane_cp01

0x0b4e,	// (0x0009c3e2) aid_zoom_text_secondary2

0xcadd,	// (0x000a8371) list_cale_ev2_pane

0xcae5,	// (0x000a8379) scroll_pane_cp023_ParamLimits

0x435e,	// (0x0009fbf2) field_cale_ev2_pane_ParamLimits

0x435e,	// (0x0009fbf2) field_cale_ev2_pane

0x4379,	// (0x0009fc0d) field_cale_ev2_pane_g1_ParamLimits

0x4379,	// (0x0009fc0d) field_cale_ev2_pane_g1

0x4385,	// (0x0009fc19) field_cale_ev2_pane_g2_ParamLimits

0x4385,	// (0x0009fc19) field_cale_ev2_pane_g2

0x439d,	// (0x0009fc31) field_cale_ev2_pane_g3_ParamLimits

0x439d,	// (0x0009fc31) field_cale_ev2_pane_g3

0x0003,

0xf627,	// (0x000aaebb) field_cale_ev2_pane_g_ParamLimits

0xf627,	// (0x000aaebb) field_cale_ev2_pane_g

0x43b5,	// (0x0009fc49) field_cale_ev2_pane_t1_ParamLimits

0x43b5,	// (0x0009fc49) field_cale_ev2_pane_t1

0x43cc,	// (0x0009fc60) field_cale_ev2_pane_t2_ParamLimits

0x43cc,	// (0x0009fc60) field_cale_ev2_pane_t2

0x0001,

0xf630,	// (0x000aaec4) field_cale_ev2_pane_t_ParamLimits

0xf630,	// (0x000aaec4) field_cale_ev2_pane_t

0x35e3,	// (0x0009ee77) main_postcard_pane_g5_ParamLimits

0x35e3,	// (0x0009ee77) main_postcard_pane_g5

0x35f1,	// (0x0009ee85) main_postcard_pane_g6_ParamLimits

0x35f1,	// (0x0009ee85) main_postcard_pane_g6

0xa6ec,	// (0x000a5f80) camera2_autofocus_pane_cp_ParamLimits

0xa6ec,	// (0x000a5f80) camera2_autofocus_pane_cp

0x3d02,	// (0x0009f596) main_mup3_pane

0x4424,	// (0x0009fcb8) main_mup3_pane_g1_ParamLimits

0x4424,	// (0x0009fcb8) main_mup3_pane_g1

0x4445,	// (0x0009fcd9) main_mup3_pane_g2_ParamLimits

0x4445,	// (0x0009fcd9) main_mup3_pane_g2

0x44b9,	// (0x0009fd4d) main_mup3_pane_g3_ParamLimits

0x44b9,	// (0x0009fd4d) main_mup3_pane_g3

0x451e,	// (0x0009fdb2) main_mup3_pane_g4_ParamLimits

0x451e,	// (0x0009fdb2) main_mup3_pane_g4

0x4583,	// (0x0009fe17) main_mup3_pane_g5_ParamLimits

0x4583,	// (0x0009fe17) main_mup3_pane_g5

0x45e8,	// (0x0009fe7c) main_mup3_pane_g6_ParamLimits

0x45e8,	// (0x0009fe7c) main_mup3_pane_g6

0xa708,	// (0x000a5f9c) main_mup3_pane_g7_ParamLimits

0xa708,	// (0x000a5f9c) main_mup3_pane_g7

0x0007,

0xf640,	// (0x000aaed4) main_mup3_pane_g_ParamLimits

0xf640,	// (0x000aaed4) main_mup3_pane_g

0x4662,	// (0x0009fef6) main_mup3_pane_t1_ParamLimits

0x4662,	// (0x0009fef6) main_mup3_pane_t1

0x46c7,	// (0x0009ff5b) main_mup3_pane_t2_ParamLimits

0x46c7,	// (0x0009ff5b) main_mup3_pane_t2

0x4790,	// (0x000a0024) main_mup3_pane_t4_ParamLimits

0x4790,	// (0x000a0024) main_mup3_pane_t4

0x47e4,	// (0x000a0078) main_mup3_pane_t5_ParamLimits

0x47e4,	// (0x000a0078) main_mup3_pane_t5

0x48a0,	// (0x000a0134) main_mup3_pane_t6_ParamLimits

0x48a0,	// (0x000a0134) main_mup3_pane_t6

0x0005,

0xf651,	// (0x000aaee5) main_mup3_pane_t_ParamLimits

0xf651,	// (0x000aaee5) main_mup3_pane_t

0x494a,	// (0x000a01de) mup3_progress_pane_ParamLimits

0x494a,	// (0x000a01de) mup3_progress_pane

0x49c8,	// (0x000a025c) popup_mup3_control_window_ParamLimits

0x49c8,	// (0x000a025c) popup_mup3_control_window

0xccd3,	// (0x000a8567) popup_mup3_text_window

0x49e5,	// (0x000a0279) mup3_progress_pane_t1

0x4a03,	// (0x000a0297) mup3_progress_pane_t2

0xccdb,	// (0x000a856f) mup3_progress_pane_t3

0x0002,

0xf65e,	// (0x000aaef2) mup3_progress_pane_t

0xccf8,	// (0x000a858c) mup_progress_pane_cp03

0x9c07,	// (0x000a549b) bg_tb_trans_pane_cp04

0x4a21,	// (0x000a02b5) mup3_volume_pane

0x4a29,	// (0x000a02bd) popup_mup3_control_window_g1

0xd78f,	// (0x000a9023) mup3_volume_pane_g1

0xd798,	// (0x000a902c) mup3_volume_pane_g2

0xd7a1,	// (0x000a9035) mup3_volume_pane_g3

0x0002,

0xf665,	// (0x000aaef9) mup3_volume_pane_g

0x9c07,	// (0x000a549b) bg_tb_trans_pane_cp03

0xcd08,	// (0x000a859c) popup_mup3_text_window_g1

0xcd10,	// (0x000a85a4) popup_mup3_text_window_t1

0xa7b4,	// (0x000a6048) list_calc_item_pane_g1_ParamLimits

0xc7d1,	// (0x000a8065) mup_volume_pane_cp_g1

0x431c,	// (0x0009fbb0) main_touch_calib_pane_t3

0x4332,	// (0x0009fbc6) main_touch_calib_pane_t4

0x4348,	// (0x0009fbdc) main_touch_calib_pane_t5

0x0c36,	// (0x0009c4ca) aid_cell_size_toolbar2

0x0c3e,	// (0x0009c4d2) aid_popup3_width_pane

0x0b3e,	// (0x0009c3d2) aid_zoom_text_msg_primary

0x19e6,	// (0x0009d27a) vorec_t7

0xa778,	// (0x000a600c) bg_calc_paper_pane_g1_ParamLimits

0xa784,	// (0x000a6018) bg_calc_paper_pane_g2_ParamLimits

0xa790,	// (0x000a6024) bg_calc_paper_pane_g3_ParamLimits

0xa79c,	// (0x000a6030) bg_calc_paper_pane_g4_ParamLimits

0xa7a8,	// (0x000a603c) bg_calc_paper_pane_g5_ParamLimits

0x1158,	// (0x0009c9ec) bg_calc_paper_pane_g6_ParamLimits

0x1169,	// (0x0009c9fd) bg_calc_paper_pane_g7_ParamLimits

0x117a,	// (0x0009ca0e) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x000aa967) bg_calc_paper_pane_g_ParamLimits

0x118b,	// (0x0009ca1f) calc_bg_paper_pane_g9_ParamLimits

0xa6ec,	// (0x000a5f80) image_qvga_pane_ParamLimits

0xa6ec,	// (0x000a5f80) image_qvga_pane

0xa67f,	// (0x000a5f13) bg_popup_sub_pane_cp04_ParamLimits

0xb4bb,	// (0x000a6d4f) popup_mup_playback_window_g1_ParamLimits

0xb4c7,	// (0x000a6d5b) popup_mup_playback_window_t1_ParamLimits

0xb4dc,	// (0x000a6d70) popup_mup_playback_window_t2_ParamLimits

0xf42a,	// (0x000aacbe) popup_mup_playback_window_t_ParamLimits

0xa6fa,	// (0x000a5f8e) main_mup2_pane_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) main_mup2_pane_g3

0x1cbf,	// (0x0009d553) popup_toolbar_window_cp04

0xb907,	// (0x000a719b) popup_call2_audio_second_window_g3_ParamLimits

0xb907,	// (0x000a719b) popup_call2_audio_second_window_g3

0xbd34,	// (0x000a75c8) popup_call2_audio_first_window_g4_ParamLimits

0xbd34,	// (0x000a75c8) popup_call2_audio_first_window_g4

0xc35b,	// (0x000a7bef) popup_call2_audio_in_window_g4_ParamLimits

0xc35b,	// (0x000a7bef) popup_call2_audio_in_window_g4

0x36f7,	// (0x0009ef8b) aid_area_sk_bg_cut_ParamLimits

0x36f7,	// (0x0009ef8b) aid_area_sk_bg_cut

0xb4f1,	// (0x000a6d85) aid_area_sk_bg_cut_2_ParamLimits

0xb4f1,	// (0x000a6d85) aid_area_sk_bg_cut_2

0x9c07,	// (0x000a549b) aid_placing_details_win

0x9c07,	// (0x000a549b) aid_placing_details_win_2

0xa6fa,	// (0x000a5f8e) camera2_autofocus_pane_g1_ParamLimits

0x0e89,	// (0x0009c71d) popup_fixed_preview_cale_window_ParamLimits

0x0e89,	// (0x0009c71d) popup_fixed_preview_cale_window

0xb2cc,	// (0x000a6b60) navi_slider_pane_g3

0xb2d5,	// (0x000a6b69) navi_slider_pane_g4

0xb2de,	// (0x000a6b72) navi_slider_pane_g5

0xb2cc,	// (0x000a6b60) navi_slider_pane_g6

0x3176,	// (0x0009ea0a) navi_slider_pane_g7

0xb3f2,	// (0x000a6c86) mup_scale_pane_g3

0xb3fb,	// (0x000a6c8f) mup_scale_pane_g4

0xb404,	// (0x000a6c98) mup_scale_pane_g5

0x3393,	// (0x0009ec27) mup_scale_pane_g6

0x339c,	// (0x0009ec30) mup_scale_pane_g7

0xd785,	// (0x000a9019) cams2_slider_pane_g3

0xd785,	// (0x000a9019) cams2_slider_pane_g4

0xd785,	// (0x000a9019) cams2_slider_pane_g5

0xd785,	// (0x000a9019) cams2_slider_pane_g6

0xd785,	// (0x000a9019) cams2_slider_pane_g7

0xa99c,	// (0x000a6230) camera2_autofocus_pane_cp_g1

0xc641,	// (0x000a7ed5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc641,	// (0x000a7ed5) bg_popup_preview_window_pane_cp02

0xcd1e,	// (0x000a85b2) list_fp_cale_pane_ParamLimits

0xcd1e,	// (0x000a85b2) list_fp_cale_pane

0xcd2a,	// (0x000a85be) popup_fixed_preview_cale_window_t1_ParamLimits

0xcd2a,	// (0x000a85be) popup_fixed_preview_cale_window_t1

0x4a32,	// (0x000a02c6) popup_fixed_preview_cale_window_t2_ParamLimits

0x4a32,	// (0x000a02c6) popup_fixed_preview_cale_window_t2

0x4a47,	// (0x000a02db) popup_fixed_preview_cale_window_t3_ParamLimits

0x4a47,	// (0x000a02db) popup_fixed_preview_cale_window_t3

0x0002,

0xf66c,	// (0x000aaf00) popup_fixed_preview_cale_window_t_ParamLimits

0xf66c,	// (0x000aaf00) popup_fixed_preview_cale_window_t

0x4a5c,	// (0x000a02f0) list_single_fp_cale_pane_ParamLimits

0x4a5c,	// (0x000a02f0) list_single_fp_cale_pane

0xcd48,	// (0x000a85dc) list_single_fp_cale_pane_g1_ParamLimits

0xcd48,	// (0x000a85dc) list_single_fp_cale_pane_g1

0xcd54,	// (0x000a85e8) list_single_fp_cale_pane_g2_ParamLimits

0xcd54,	// (0x000a85e8) list_single_fp_cale_pane_g2

0x0002,

0xf673,	// (0x000aaf07) list_single_fp_cale_pane_g_ParamLimits

0xf673,	// (0x000aaf07) list_single_fp_cale_pane_g

0xcd6d,	// (0x000a8601) list_single_fp_cale_pane_t1_ParamLimits

0xcd6d,	// (0x000a8601) list_single_fp_cale_pane_t1

0xcd7f,	// (0x000a8613) list_single_fp_cale_pane_t2_ParamLimits

0xcd7f,	// (0x000a8613) list_single_fp_cale_pane_t2

0x0001,

0xf67a,	// (0x000aaf0e) list_single_fp_cale_pane_t_ParamLimits

0xf67a,	// (0x000aaf0e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0efd,	// (0x0009c791) main_dialer_pane

0x9c07,	// (0x000a549b) aid_cell_size_keypad

0x9c07,	// (0x000a549b) dialer_ne_pane

0x9c07,	// (0x000a549b) grid_dialer_command_1_pane

0x9c07,	// (0x000a549b) grid_dialer_command_2_pane

0x9c07,	// (0x000a549b) grid_dialer_keypad_pane

0xc3fb,	// (0x000a7c8f) bg_popup_call_pane_cp06_ParamLimits

0xc3fb,	// (0x000a7c8f) bg_popup_call_pane_cp06

0xc3fb,	// (0x000a7c8f) dialer_ne_clear_pane_ParamLimits

0xc3fb,	// (0x000a7c8f) dialer_ne_clear_pane

0xa99c,	// (0x000a6230) dialer_ne_pane_g1

0xb347,	// (0x000a6bdb) dialer_ne_pane_t1_ParamLimits

0xb347,	// (0x000a6bdb) dialer_ne_pane_t1

0xcdc0,	// (0x000a8654) dialer_ne_pane_t2_ParamLimits

0xcdc0,	// (0x000a8654) dialer_ne_pane_t2

0x4a6c,	// (0x000a0300) dialer_ne_pane_t3_ParamLimits

0x4a6c,	// (0x000a0300) dialer_ne_pane_t3

0x0002,

0xf67f,	// (0x000aaf13) dialer_ne_pane_t_ParamLimits

0xf67f,	// (0x000aaf13) dialer_ne_pane_t

0x4a6c,	// (0x000a0300) dialer_ne_pane_t3_copy1_ParamLimits

0x4a6c,	// (0x000a0300) dialer_ne_pane_t3_copy1

0xcddd,	// (0x000a8671) cell_dialer_keypad_pane_ParamLimits

0xcddd,	// (0x000a8671) cell_dialer_keypad_pane

0xa296,	// (0x000a5b2a) cell_dialer_command_1_pane_ParamLimits

0xa296,	// (0x000a5b2a) cell_dialer_command_1_pane

0xcdf4,	// (0x000a8688) cell_dialer_command_2_pane_ParamLimits

0xcdf4,	// (0x000a8688) cell_dialer_command_2_pane

0xa296,	// (0x000a5b2a) bg_button_pane_cp02_ParamLimits

0xa296,	// (0x000a5b2a) bg_button_pane_cp02

0xa6fa,	// (0x000a5f8e) cell_dialer_keypad_pane_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) cell_dialer_keypad_pane_g1

0xa296,	// (0x000a5b2a) bg_button_pane_cp03_ParamLimits

0xa296,	// (0x000a5b2a) bg_button_pane_cp03

0xa6fa,	// (0x000a5f8e) cell_dialer_command_1_pane_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) cell_dialer_command_1_pane_g1

0x9c07,	// (0x000a549b) bg_button_pane_cp04

0xa99c,	// (0x000a6230) cell_dialer_command_2_pane_g1

0x9c07,	// (0x000a549b) bg_button_pane_cp06

0xa99c,	// (0x000a6230) dialer_ne_clear_pane_g1

0x30b1,	// (0x0009e945) navi_pane_g2

0x30df,	// (0x0009e973) navi_pane_g3

0x0002,

0xf339,	// (0x000aabcd) navi_pane_g

0x310a,	// (0x0009e99e) navi_pane_mv_g2

0x3131,	// (0x0009e9c5) navi_pane_mv_g5

0x3139,	// (0x0009e9cd) navi_pane_mv_t1

0xa76c,	// (0x000a6000) main_clock2_pane

0xa6ec,	// (0x000a5f80) main_clock2_list_pane_ParamLimits

0xa6ec,	// (0x000a5f80) main_clock2_list_pane

0x4ae1,	// (0x000a0375) main_clock2_pane_t1_ParamLimits

0x4ae1,	// (0x000a0375) main_clock2_pane_t1

0x4b0f,	// (0x000a03a3) main_clock2_pane_t2_ParamLimits

0x4b0f,	// (0x000a03a3) main_clock2_pane_t2

0x0004,

0xf68b,	// (0x000aaf1f) main_clock2_pane_t_ParamLimits

0xf68b,	// (0x000aaf1f) main_clock2_pane_t

0x4b74,	// (0x000a0408) popup_clock_analogue_window_cp03_ParamLimits

0x4b74,	// (0x000a0408) popup_clock_analogue_window_cp03

0x4b92,	// (0x000a0426) popup_clock_digital_window_cp02_ParamLimits

0x4b92,	// (0x000a0426) popup_clock_digital_window_cp02

0x4c07,	// (0x000a049b) main_clock2_list_single_pane_ParamLimits

0x4c07,	// (0x000a049b) main_clock2_list_single_pane

0xa90a,	// (0x000a619e) list_highlight_pane_cp05

0xce35,	// (0x000a86c9) main_clock2_list_single_pane_t1

0x1cbf,	// (0x0009d553) popup_toolbar_window_cp04_ParamLimits

0xa708,	// (0x000a5f9c) camera2_autofocus_pane_g2_ParamLimits

0xa708,	// (0x000a5f9c) camera2_autofocus_pane_g2

0xa708,	// (0x000a5f9c) camera2_autofocus_pane_g3_ParamLimits

0xa708,	// (0x000a5f9c) camera2_autofocus_pane_g3

0xa708,	// (0x000a5f9c) camera2_autofocus_pane_g4_ParamLimits

0xa708,	// (0x000a5f9c) camera2_autofocus_pane_g4

0xa708,	// (0x000a5f9c) camera2_autofocus_pane_g5_ParamLimits

0xa708,	// (0x000a5f9c) camera2_autofocus_pane_g5

0x0004,

0xf5cf,	// (0x000aae63) camera2_autofocus_pane_g_ParamLimits

0xf5cf,	// (0x000aae63) camera2_autofocus_pane_g

0x43e1,	// (0x0009fc75) camera2_autofocus_pane_cp_g2

0x43e9,	// (0x0009fc7d) camera2_autofocus_pane_cp_g3

0x43f1,	// (0x0009fc85) camera2_autofocus_pane_cp_g4

0x43f9,	// (0x0009fc8d) camera2_autofocus_pane_cp_g5

0x0004,

0xf635,	// (0x000aaec9) camera2_autofocus_pane_cp_g

0x9c07,	// (0x000a549b) popup_dialer_spcha_window

0x9c07,	// (0x000a549b) bg_popup_sub_pane_cp07

0x9c07,	// (0x000a549b) list_spcha_pane

0xce43,	// (0x000a86d7) list_single_spcha_pane_ParamLimits

0xce43,	// (0x000a86d7) list_single_spcha_pane

0x9c07,	// (0x000a549b) list_highlight_pane_cp06

0xaeee,	// (0x000a6782) list_single_spcha_pane_t1

0xc105,	// (0x000a7999) popup_call2_audio_out_window_g4_ParamLimits

0xc105,	// (0x000a7999) popup_call2_audio_out_window_g4

0x0efd,	// (0x0009c791) main_imed2_pane

0x3dac,	// (0x0009f640) popup_imed_adjust2_window

0x3dbf,	// (0x0009f653) popup_imed_trans_window_ParamLimits

0x3dbf,	// (0x0009f653) popup_imed_trans_window

0xc8a6,	// (0x000a813a) popup_blid_sat_info2_window_t1

0xc8b4,	// (0x000a8148) popup_blid_sat_info2_window_t2

0x000a,

0x0279,	// (0x0009bb0d) popup_blid_sat_info2_window_t

0x4cbe,	// (0x000a0552) aid_size_cell_colour_35

0x4cd8,	// (0x000a056c) aid_size_cell_colour_112

0x4cef,	// (0x000a0583) aid_size_cell_effect

0xa296,	// (0x000a5b2a) bg_tb_trans_pane_cp02

0xb00c,	// (0x000a68a0) heading_imed_pane

0x4d09,	// (0x000a059d) listscroll_imed_pane

0xce55,	// (0x000a86e9) heading_imed_pane_g1

0xce5d,	// (0x000a86f1) heading_imed_pane_t1

0xce6b,	// (0x000a86ff) grid_imed_colour_35_pane_ParamLimits

0xce6b,	// (0x000a86ff) grid_imed_colour_35_pane

0x4d15,	// (0x000a05a9) grid_imed_effect_pane

0xce87,	// (0x000a871b) list_imed_aspect_pane

0x4d25,	// (0x000a05b9) scroll_pane_cp027_ParamLimits

0x4d25,	// (0x000a05b9) scroll_pane_cp027

0x4d31,	// (0x000a05c5) cell_imed_effect_pane_ParamLimits

0x4d31,	// (0x000a05c5) cell_imed_effect_pane

0xce8f,	// (0x000a8723) cell_imed_colour_pane_ParamLimits

0xce8f,	// (0x000a8723) cell_imed_colour_pane

0xced9,	// (0x000a876d) cell_imed_colour_pane_g1_ParamLimits

0xced9,	// (0x000a876d) cell_imed_colour_pane_g1

0xceea,	// (0x000a877e) hgihlgiht_grid_pane_cp016_ParamLimits

0xceea,	// (0x000a877e) hgihlgiht_grid_pane_cp016

0x4d4d,	// (0x000a05e1) cell_imed_effect_pane_g1

0x4d55,	// (0x000a05e9) grid_highlight_pane_cp017

0xcefb,	// (0x000a878f) list_imed_single_pane_ParamLimits

0xcefb,	// (0x000a878f) list_imed_single_pane

0x9c07,	// (0x000a549b) list_highlight_pane_cp07

0xcf0f,	// (0x000a87a3) list_imed_aspect_pane_comp1_t1

0xb663,	// (0x000a6ef7) bg_tb_trans_pane_cp05

0xcf31,	// (0x000a87c5) popup_imed_adjust2_window_g1

0xcf58,	// (0x000a87ec) popup_imed_adjust2_window_t1

0xcf70,	// (0x000a8804) slider_imed_adjust_pane

0xcf84,	// (0x000a8818) slider_imed_adjust_pane_g1

0xcf94,	// (0x000a8828) slider_imed_adjust_pane_g2

0xcfa4,	// (0x000a8838) slider_imed_adjust_pane_g3

0xcfb5,	// (0x000a8849) slider_imed_adjust_pane_g4

0x0003,

0xf6a8,	// (0x000aaf3c) slider_imed_adjust_pane_g

0x4d5e,	// (0x000a05f2) aid_size_cell_clipart2

0xcfc6,	// (0x000a885a) grid_imed_clipart_pane

0xcfd0,	// (0x000a8864) scroll_pane_cp031

0x4d6a,	// (0x000a05fe) cell_imed_clipart_pane_ParamLimits

0x4d6a,	// (0x000a05fe) cell_imed_clipart_pane

0x4d88,	// (0x000a061c) cell_imed_clipart_pane_g1

0x9c07,	// (0x000a549b) grid_highlight_pane_cp014

0x4ac3,	// (0x000a0357) main_clock2_pane_g1_ParamLimits

0x4ac3,	// (0x000a0357) main_clock2_pane_g1

0x4bae,	// (0x000a0442) aid_call2_pane_cp10

0x4bc0,	// (0x000a0454) aid_call_pane_cp10

0xb1f8,	// (0x000a6a8c) popup_clock_analogue_window_cp10_g1

0xb1f8,	// (0x000a6a8c) popup_clock_analogue_window_cp10_g2

0x4bd2,	// (0x000a0466) popup_clock_analogue_window_cp10_g3

0x4bd2,	// (0x000a0466) popup_clock_analogue_window_cp10_g4

0xb1f8,	// (0x000a6a8c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf696,	// (0x000aaf2a) popup_clock_analogue_window_cp10_g

0x4be8,	// (0x000a047c) popup_clock_analogue_window_cp10_t1

0x4c19,	// (0x000a04ad) clock_digital_number_pane_cp10_ParamLimits

0x4c19,	// (0x000a04ad) clock_digital_number_pane_cp10

0x4c33,	// (0x000a04c7) clock_digital_number_pane_cp11_ParamLimits

0x4c33,	// (0x000a04c7) clock_digital_number_pane_cp11

0x4c4d,	// (0x000a04e1) clock_digital_number_pane_cp12_ParamLimits

0x4c4d,	// (0x000a04e1) clock_digital_number_pane_cp12

0x4c67,	// (0x000a04fb) clock_digital_number_pane_cp13_ParamLimits

0x4c67,	// (0x000a04fb) clock_digital_number_pane_cp13

0x4c83,	// (0x000a0517) clock_digital_separator_pane_cp10_ParamLimits

0x4c83,	// (0x000a0517) clock_digital_separator_pane_cp10

0x4c9d,	// (0x000a0531) popup_clock_digital_window_cp02_t1_ParamLimits

0x4c9d,	// (0x000a0531) popup_clock_digital_window_cp02_t1

0xa677,	// (0x000a5f0b) clock_digital_number_pane_cp10_g1

0xa677,	// (0x000a5f0b) clock_digital_number_pane_cp10_g2

0x0001,

0xf6b1,	// (0x000aaf45) clock_digital_number_pane_cp10_g

0xa677,	// (0x000a5f0b) clock_digital_separator_pane_cp10_g1

0xa677,	// (0x000a5f0b) clock_digital_separator_pane_g2_cp10

0xb293,	// (0x000a6b27) navi_pane_vded_g4

0xb29c,	// (0x000a6b30) navi_pane_vded_g5

0xb2a5,	// (0x000a6b39) navi_pane_vded_t1

0x0efd,	// (0x0009c791) main_vded_pane

0x4d91,	// (0x000a0625) main_vded_pane_g1

0x4d9d,	// (0x000a0631) main_vded_pane_g2

0x4da7,	// (0x000a063b) main_vded_pane_g3

0x0002,

0xf6b6,	// (0x000aaf4a) main_vded_pane_g

0x4db1,	// (0x000a0645) main_vded_pane_t1

0x4dbf,	// (0x000a0653) main_vded_pane_t2

0x0001,

0xf6bd,	// (0x000aaf51) main_vded_pane_t

0x4dcd,	// (0x000a0661) vded_slider_pane

0x4dd7,	// (0x000a066b) vded_video_pane

0xcfd8,	// (0x000a886c) vded_video_pane_g1

0x4de3,	// (0x000a0677) vded_video_pane_g2

0xa99c,	// (0x000a6230) vded_video_pane_g3

0x0002,

0xf6c2,	// (0x000aaf56) vded_video_pane_g

0xcfe2,	// (0x000a8876) vded_slider_pane_g1

0xc7d1,	// (0x000a8065) vded_slider_pane_g2

0xcfeb,	// (0x000a887f) vded_slider_pane_g3

0xcff4,	// (0x000a8888) vded_slider_pane_g4

0xcffd,	// (0x000a8891) vded_slider_pane_g5

0x0004,

0xf6c9,	// (0x000aaf5d) vded_slider_pane_g

0x49bc,	// (0x000a0250) mup3_rocker_pane_ParamLimits

0x49bc,	// (0x000a0250) mup3_rocker_pane

0x4dec,	// (0x000a0680) mup3_control_keys_pane_g1

0x4df4,	// (0x000a0688) mup3_control_keys_pane_g2

0x4dfc,	// (0x000a0690) mup3_control_keys_pane_g3

0x4e04,	// (0x000a0698) mup3_control_keys_pane_g4

0x0003,

0xf6d4,	// (0x000aaf68) mup3_control_keys_pane_g

0x0eb1,	// (0x0009c745) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0eb1,	// (0x0009c745) popup_toolbar2_fixed_window_cp01

0x49d8,	// (0x000a026c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x49d8,	// (0x000a026c) popup_toolbar2_fixed_window_cp02

0xba79,	// (0x000a730d) popup_call2_audio_second_window_t4_ParamLimits

0xba79,	// (0x000a730d) popup_call2_audio_second_window_t4

0xbfca,	// (0x000a785e) popup_call2_audio_first_window_t6_ParamLimits

0xbfca,	// (0x000a785e) popup_call2_audio_first_window_t6

0xc208,	// (0x000a7a9c) popup_call2_audio_out_window_t6_ParamLimits

0xc208,	// (0x000a7a9c) popup_call2_audio_out_window_t6

0x0efd,	// (0x0009c791) main_vitu_pane

0xa6ec,	// (0x000a5f80) aid_size_cell_itu_ParamLimits

0xa6ec,	// (0x000a5f80) aid_size_cell_itu

0xa6ec,	// (0x000a5f80) bg_popup_window_pane_cp08_ParamLimits

0xa6ec,	// (0x000a5f80) bg_popup_window_pane_cp08

0xa6ec,	// (0x000a5f80) field_vitu_entry_pane_ParamLimits

0xa6ec,	// (0x000a5f80) field_vitu_entry_pane

0xa6ec,	// (0x000a5f80) grid_vitu_function_pane_ParamLimits

0xa6ec,	// (0x000a5f80) grid_vitu_function_pane

0xa6ec,	// (0x000a5f80) grid_vitu_itu_pane_ParamLimits

0xa6ec,	// (0x000a5f80) grid_vitu_itu_pane

0xa6ec,	// (0x000a5f80) cell_vitu_itu_pane_ParamLimits

0xa6ec,	// (0x000a5f80) cell_vitu_itu_pane

0xa6ec,	// (0x000a5f80) cell_vitu_function_pane_ParamLimits

0xa6ec,	// (0x000a5f80) cell_vitu_function_pane

0xa296,	// (0x000a5b2a) bg_popup_sub_pane_cp08_ParamLimits

0xa296,	// (0x000a5b2a) bg_popup_sub_pane_cp08

0xa92c,	// (0x000a61c0) field_vitu_entry_pane_t1_ParamLimits

0xa92c,	// (0x000a61c0) field_vitu_entry_pane_t1

0xcdc0,	// (0x000a8654) field_vitu_entry_pane_t2_ParamLimits

0xcdc0,	// (0x000a8654) field_vitu_entry_pane_t2

0x0001,

0xf6dd,	// (0x000aaf71) field_vitu_entry_pane_t_ParamLimits

0xf6dd,	// (0x000aaf71) field_vitu_entry_pane_t

0xc3fb,	// (0x000a7c8f) bg_button_pane_cp05_ParamLimits

0xc3fb,	// (0x000a7c8f) bg_button_pane_cp05

0xd006,	// (0x000a889a) cell_vitu_itu_pane_g1

0xb671,	// (0x000a6f05) cell_vitu_itu_pane_t1_ParamLimits

0xb671,	// (0x000a6f05) cell_vitu_itu_pane_t1

0xb671,	// (0x000a6f05) cell_vitu_itu_pane_t2_ParamLimits

0xb671,	// (0x000a6f05) cell_vitu_itu_pane_t2

0x0002,

0xf6e2,	// (0x000aaf76) cell_vitu_itu_pane_t_ParamLimits

0xf6e2,	// (0x000aaf76) cell_vitu_itu_pane_t

0x9c07,	// (0x000a549b) bg_button_pane_cp07

0xa99c,	// (0x000a6230) cell_vitu_function_pane_g1

0x0ffa,	// (0x0009c88e) main_calc_pane_g1

0x0c72,	// (0x0009c506) aid_visual_content_pane

0x0efd,	// (0x0009c791) main_vradio_pane

0xa708,	// (0x000a5f9c) main_vradio_pane_g1_ParamLimits

0xa708,	// (0x000a5f9c) main_vradio_pane_g1

0xa708,	// (0x000a5f9c) main_vradio_pane_g2_ParamLimits

0xa708,	// (0x000a5f9c) main_vradio_pane_g2

0x0001,

0xf6e9,	// (0x000aaf7d) main_vradio_pane_g_ParamLimits

0xf6e9,	// (0x000aaf7d) main_vradio_pane_g

0xb347,	// (0x000a6bdb) main_vradio_pane_t1_ParamLimits

0xb347,	// (0x000a6bdb) main_vradio_pane_t1

0xb347,	// (0x000a6bdb) main_vradio_pane_t2_ParamLimits

0xb347,	// (0x000a6bdb) main_vradio_pane_t2

0xb347,	// (0x000a6bdb) main_vradio_pane_t3_ParamLimits

0xb347,	// (0x000a6bdb) main_vradio_pane_t3

0x0002,

0xf6ee,	// (0x000aaf82) main_vradio_pane_t_ParamLimits

0xf6ee,	// (0x000aaf82) main_vradio_pane_t

0xa6ec,	// (0x000a5f80) vradio_rocker_control_pane_ParamLimits

0xa6ec,	// (0x000a5f80) vradio_rocker_control_pane

0xa6ec,	// (0x000a5f80) vradio_station_info_pane_ParamLimits

0xa6ec,	// (0x000a5f80) vradio_station_info_pane

0xa296,	// (0x000a5b2a) vradio_frequency_info_pane_ParamLimits

0xa296,	// (0x000a5b2a) vradio_frequency_info_pane

0xa99c,	// (0x000a6230) vradio_station_info_pane_g1

0xb671,	// (0x000a6f05) vradio_station_info_pane_t1_ParamLimits

0xb671,	// (0x000a6f05) vradio_station_info_pane_t1

0xb347,	// (0x000a6bdb) vradio_station_info_pane_t2_ParamLimits

0xb347,	// (0x000a6bdb) vradio_station_info_pane_t2

0x0001,

0xf6f5,	// (0x000aaf89) vradio_station_info_pane_t_ParamLimits

0xf6f5,	// (0x000aaf89) vradio_station_info_pane_t

0x9c07,	// (0x000a549b) vradio_tuning_pane

0x4e14,	// (0x000a06a8) vradio_rocker_control_pane_g1

0xd022,	// (0x000a88b6) vradio_rocker_control_pane_g2

0x4e1c,	// (0x000a06b0) vradio_rocker_control_pane_g3

0x4e24,	// (0x000a06b8) vradio_rocker_control_pane_g4

0x4e2e,	// (0x000a06c2) vradio_rocker_control_pane_g5

0x0004,

0xf6fa,	// (0x000aaf8e) vradio_rocker_control_pane_g

0xa99c,	// (0x000a6230) vradio_frequency_info_pane_g1

0xa92c,	// (0x000a61c0) vradio_frequency_info_pane_t1_ParamLimits

0xa92c,	// (0x000a61c0) vradio_frequency_info_pane_t1

0x4e36,	// (0x000a06ca) vradio_tuning_pane_g1

0x4e43,	// (0x000a06d7) vradio_tuning_pane_t1

0x0cb3,	// (0x0009c547) area_side_right_pane_ParamLimits

0x0cb3,	// (0x0009c547) area_side_right_pane

0xc608,	// (0x000a7e9c) status_small_pane_g1

0xc610,	// (0x000a7ea4) status_small_pane_g2

0xc619,	// (0x000a7ead) status_small_pane_g3

0xc622,	// (0x000a7eb6) status_small_pane_g4

0x0003,

0xf513,	// (0x000aada7) status_small_pane_g

0xc62b,	// (0x000a7ebf) status_small_pane_t1

0x0efd,	// (0x0009c791) main_video3_pane

0xd02a,	// (0x000a88be) cams_zoom_vslider_pane

0xd032,	// (0x000a88c6) image3_wide_pane_ParamLimits

0xd032,	// (0x000a88c6) image3_wide_pane

0xd04c,	// (0x000a88e0) image3_wide_small_pane

0xd058,	// (0x000a88ec) main_video3_pane_g1_ParamLimits

0xd058,	// (0x000a88ec) main_video3_pane_g1

0xd074,	// (0x000a8908) main_video3_pane_g2_ParamLimits

0xd074,	// (0x000a8908) main_video3_pane_g2

0x0001,

0x041a,	// (0x0009bcae) main_video3_pane_g_ParamLimits

0x041a,	// (0x0009bcae) main_video3_pane_g

0xd090,	// (0x000a8924) main_video3_pane_t1_ParamLimits

0xd090,	// (0x000a8924) main_video3_pane_t1

0xd0bb,	// (0x000a894f) main_video3_pane_t2_ParamLimits

0xd0bb,	// (0x000a894f) main_video3_pane_t2

0xd0e8,	// (0x000a897c) main_video3_pane_t3_ParamLimits

0xd0e8,	// (0x000a897c) main_video3_pane_t3

0x0002,

0x041f,	// (0x0009bcb3) main_video3_pane_t_ParamLimits

0x041f,	// (0x0009bcb3) main_video3_pane_t

0xd115,	// (0x000a89a9) cams_zoom_vslider_pane_g1

0xd11e,	// (0x000a89b2) cams_zoom_vslider_pane_g2

0x0001,

0x0426,	// (0x0009bcba) cams_zoom_vslider_pane_g

0xd126,	// (0x000a89ba) small_slider_vertical_pane

0xa99c,	// (0x000a6230) small_slider_vertical_pane_g1

0xa99c,	// (0x000a6230) small_slider_vertical_pane_g2

0xd12e,	// (0x000a89c2) small_slider_vertical_pane_g3

0x0002,

0x042b,	// (0x0009bcbf) small_slider_vertical_pane_g

0x0efd,	// (0x0009c791) main_hwr_training_pane

0xd137,	// (0x000a89cb) hwr_training_instruct_pane_ParamLimits

0xd137,	// (0x000a89cb) hwr_training_instruct_pane

0x4e52,	// (0x000a06e6) hwr_training_navi_pane_ParamLimits

0x4e52,	// (0x000a06e6) hwr_training_navi_pane

0x4e6c,	// (0x000a0700) hwr_training_write_pane_ParamLimits

0x4e6c,	// (0x000a0700) hwr_training_write_pane

0x9c07,	// (0x000a549b) bg_frame_shadow_pane

0xd16e,	// (0x000a8a02) hwr_training_write_pane_g1

0xd176,	// (0x000a8a0a) hwr_training_write_pane_g2

0xd17e,	// (0x000a8a12) hwr_training_write_pane_g3

0xd186,	// (0x000a8a1a) hwr_training_write_pane_g4

0xd18e,	// (0x000a8a22) hwr_training_write_pane_g5

0xd196,	// (0x000a8a2a) hwr_training_write_pane_g6

0xd19e,	// (0x000a8a32) hwr_training_write_pane_g7

0x0006,

0x0432,	// (0x0009bcc6) hwr_training_write_pane_g

0x4ea4,	// (0x000a0738) hwr_training_navi_pane_g1_ParamLimits

0x4ea4,	// (0x000a0738) hwr_training_navi_pane_g1

0x4eb6,	// (0x000a074a) hwr_training_navi_pane_g2_ParamLimits

0x4eb6,	// (0x000a074a) hwr_training_navi_pane_g2

0x4ec8,	// (0x000a075c) hwr_training_navi_pane_g3_ParamLimits

0x4ec8,	// (0x000a075c) hwr_training_navi_pane_g3

0x4ed8,	// (0x000a076c) hwr_training_navi_pane_g4_ParamLimits

0x4ed8,	// (0x000a076c) hwr_training_navi_pane_g4

0x0004,

0xf705,	// (0x000aaf99) hwr_training_navi_pane_g_ParamLimits

0xf705,	// (0x000aaf99) hwr_training_navi_pane_g

0x4ef2,	// (0x000a0786) hwr_training_navi_pane_t1

0x4f00,	// (0x000a0794) list_single_hwr_training_instruct_pane_ParamLimits

0x4f00,	// (0x000a0794) list_single_hwr_training_instruct_pane

0xd1a6,	// (0x000a8a3a) list_single_hwr_training_instruct_pane_t1

0xc9ad,	// (0x000a8241) bg_frame_shadow_pane_g1

0xd1b5,	// (0x000a8a49) bg_frame_shadow_pane_g2

0xd1bd,	// (0x000a8a51) bg_frame_shadow_pane_g3

0xd1c5,	// (0x000a8a59) bg_frame_shadow_pane_g4

0xd1cd,	// (0x000a8a61) bg_frame_shadow_pane_g5

0xd1d5,	// (0x000a8a69) bg_frame_shadow_pane_g6

0xd1dd,	// (0x000a8a71) bg_frame_shadow_pane_g7

0xa81b,	// (0x000a60af) bg_frame_shadow_pane_g8

0x0007,

0xf710,	// (0x000aafa4) bg_frame_shadow_pane_g

0x0efd,	// (0x0009c791) main_video_tele_dialer_pane

0x4f19,	// (0x000a07ad) aid_size_cell_video_keypad_ParamLimits

0x4f19,	// (0x000a07ad) aid_size_cell_video_keypad

0x4f29,	// (0x000a07bd) grid_video_dialer_keypad_pane_ParamLimits

0x4f29,	// (0x000a07bd) grid_video_dialer_keypad_pane

0x4f5b,	// (0x000a07ef) video_down_pane_cp_ParamLimits

0x4f5b,	// (0x000a07ef) video_down_pane_cp

0x4f85,	// (0x000a0819) cell_video_dialer_keypad_pane_ParamLimits

0x4f85,	// (0x000a0819) cell_video_dialer_keypad_pane

0xd1e5,	// (0x000a8a79) bg_button_pane_cp08_ParamLimits

0xd1e5,	// (0x000a8a79) bg_button_pane_cp08

0x4f9c,	// (0x000a0830) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4f9c,	// (0x000a0830) cell_video_dialer_keypad_pane_g1

0x49b0,	// (0x000a0244) mup3_rocker2_pane_ParamLimits

0x49b0,	// (0x000a0244) mup3_rocker2_pane

0xa99c,	// (0x000a6230) mup3_rocker2_pane_g1

0x3d10,	// (0x0009f5a4) main_dialer2_pane

0x0efd,	// (0x0009c791) main_mp4_pane

0x4ff5,	// (0x000a0889) main_mp4_pane_g1_ParamLimits

0x4ff5,	// (0x000a0889) main_mp4_pane_g1

0x5003,	// (0x000a0897) main_mp4_pane_g2_ParamLimits

0x5003,	// (0x000a0897) main_mp4_pane_g2

0x5011,	// (0x000a08a5) main_mp4_pane_g3_ParamLimits

0x5011,	// (0x000a08a5) main_mp4_pane_g3

0x5064,	// (0x000a08f8) main_mp4_pane_g4_ParamLimits

0x5064,	// (0x000a08f8) main_mp4_pane_g4

0x5092,	// (0x000a0926) main_mp4_pane_g5_ParamLimits

0x5092,	// (0x000a0926) main_mp4_pane_g5

0x0007,

0xf730,	// (0x000aafc4) main_mp4_pane_g_ParamLimits

0xf730,	// (0x000aafc4) main_mp4_pane_g

0x5106,	// (0x000a099a) main_mp4_pane_t1_ParamLimits

0x5106,	// (0x000a099a) main_mp4_pane_t1

0x5162,	// (0x000a09f6) main_mp4_pane_t2_ParamLimits

0x5162,	// (0x000a09f6) main_mp4_pane_t2

0xd1f1,	// (0x000a8a85) main_mp4_pane_t3_ParamLimits

0xd1f1,	// (0x000a8a85) main_mp4_pane_t3

0x51b4,	// (0x000a0a48) main_mp4_pane_t4_ParamLimits

0x51b4,	// (0x000a0a48) main_mp4_pane_t4

0x0003,

0xf741,	// (0x000aafd5) main_mp4_pane_t_ParamLimits

0xf741,	// (0x000aafd5) main_mp4_pane_t

0x51f4,	// (0x000a0a88) mp4_progress_pane_ParamLimits

0x51f4,	// (0x000a0a88) mp4_progress_pane

0x523e,	// (0x000a0ad2) mp4_rocker_pane_ParamLimits

0x523e,	// (0x000a0ad2) mp4_rocker_pane

0xd21f,	// (0x000a8ab3) mp4_progress_pane_t1

0xd238,	// (0x000a8acc) mp4_progress_pane_t2

0x0001,

0x0486,	// (0x0009bd1a) mp4_progress_pane_t

0xd251,	// (0x000a8ae5) mup_progress_pane_cp04

0xd785,	// (0x000a9019) mp4_rocker_pane_g1

0x5260,	// (0x000a0af4) aid_cell_size_keypad2_ParamLimits

0x5260,	// (0x000a0af4) aid_cell_size_keypad2

0x5270,	// (0x000a0b04) dialer2_ne_pane_ParamLimits

0x5270,	// (0x000a0b04) dialer2_ne_pane

0x527c,	// (0x000a0b10) grid_dialer2_keypad_pane_ParamLimits

0x527c,	// (0x000a0b10) grid_dialer2_keypad_pane

0xcdb2,	// (0x000a8646) bg_popup_call_pane_cp07_ParamLimits

0xcdb2,	// (0x000a8646) bg_popup_call_pane_cp07

0x528a,	// (0x000a0b1e) dialer2_ne_pane_t1_ParamLimits

0x528a,	// (0x000a0b1e) dialer2_ne_pane_t1

0x52af,	// (0x000a0b43) cell_dialer2_keypad_pane_ParamLimits

0x52af,	// (0x000a0b43) cell_dialer2_keypad_pane

0xd276,	// (0x000a8b0a) bg_button_pane_pane_cp04_ParamLimits

0xd276,	// (0x000a8b0a) bg_button_pane_pane_cp04

0x52c6,	// (0x000a0b5a) cell_dialer2_keypad_pane_g1_ParamLimits

0x52c6,	// (0x000a0b5a) cell_dialer2_keypad_pane_g1

0x1b91,	// (0x0009d425) aid_placing_vt_set_content_ParamLimits

0x1b91,	// (0x0009d425) aid_placing_vt_set_content

0x1bb9,	// (0x0009d44d) aid_placing_vt_set_title_ParamLimits

0x1bb9,	// (0x0009d44d) aid_placing_vt_set_title

0x0efd,	// (0x0009c791) main_image3_pane

0x5360,	// (0x000a0bf4) area_side_right_pane_cp01_ParamLimits

0x5360,	// (0x000a0bf4) area_side_right_pane_cp01

0x538f,	// (0x000a0c23) main_image3_pane_g1_ParamLimits

0x538f,	// (0x000a0c23) main_image3_pane_g1

0x539d,	// (0x000a0c31) main_image3_pane_g2_ParamLimits

0x539d,	// (0x000a0c31) main_image3_pane_g2

0x53b6,	// (0x000a0c4a) main_image3_pane_g3_ParamLimits

0x53b6,	// (0x000a0c4a) main_image3_pane_g3

0x53cf,	// (0x000a0c63) main_image3_pane_g4_ParamLimits

0x53cf,	// (0x000a0c63) main_image3_pane_g4

0x0003,

0xf754,	// (0x000aafe8) main_image3_pane_g_ParamLimits

0xf754,	// (0x000aafe8) main_image3_pane_g

0x53e8,	// (0x000a0c7c) main_image3_pane_t1_ParamLimits

0x53e8,	// (0x000a0c7c) main_image3_pane_t1

0x540d,	// (0x000a0ca1) main_image3_pane_t2_ParamLimits

0x540d,	// (0x000a0ca1) main_image3_pane_t2

0x542c,	// (0x000a0cc0) main_image3_pane_t3_ParamLimits

0x542c,	// (0x000a0cc0) main_image3_pane_t3

0x0003,

0xf75d,	// (0x000aaff1) main_image3_pane_t_ParamLimits

0xf75d,	// (0x000aaff1) main_image3_pane_t

0xa6ec,	// (0x000a5f80) grid_sctrl_middle_pane_cp01_ParamLimits

0xa6ec,	// (0x000a5f80) grid_sctrl_middle_pane_cp01

0x548d,	// (0x000a0d21) cell_sctrl_middle_pane_cp01_ParamLimits

0x548d,	// (0x000a0d21) cell_sctrl_middle_pane_cp01

0x549e,	// (0x000a0d32) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x549e,	// (0x000a0d32) cell_sctrl_middle_pane_cp01_g1

0x0efd,	// (0x0009c791) main_call4_pane

0x54ab,	// (0x000a0d3f) aid_size_button_call4_ParamLimits

0x54ab,	// (0x000a0d3f) aid_size_button_call4

0x54e1,	// (0x000a0d75) call4_windows_pane_ParamLimits

0x54e1,	// (0x000a0d75) call4_windows_pane

0x54f6,	// (0x000a0d8a) grid_call4_button_pane_ParamLimits

0x54f6,	// (0x000a0d8a) grid_call4_button_pane

0x5526,	// (0x000a0dba) call4_windows_conf_pane

0x553f,	// (0x000a0dd3) popup_call4_audio_first_window_ParamLimits

0x553f,	// (0x000a0dd3) popup_call4_audio_first_window

0x558f,	// (0x000a0e23) popup_call4_audio_second_window_ParamLimits

0x558f,	// (0x000a0e23) popup_call4_audio_second_window

0x55a8,	// (0x000a0e3c) popup_call4_audio_wait_window_ParamLimits

0x55a8,	// (0x000a0e3c) popup_call4_audio_wait_window

0x55b6,	// (0x000a0e4a) cell_call4_button_pane_ParamLimits

0x55b6,	// (0x000a0e4a) cell_call4_button_pane

0x55d9,	// (0x000a0e6d) bg_button_pane_cp09_ParamLimits

0x55d9,	// (0x000a0e6d) bg_button_pane_cp09

0x55e5,	// (0x000a0e79) cell_call4_button_pane_g1_ParamLimits

0x55e5,	// (0x000a0e79) cell_call4_button_pane_g1

0x55f2,	// (0x000a0e86) cell_call4_button_pane_t1_ParamLimits

0x55f2,	// (0x000a0e86) cell_call4_button_pane_t1

0xd28a,	// (0x000a8b1e) popup_call4_audio_conf_window_ParamLimits

0xd28a,	// (0x000a8b1e) popup_call4_audio_conf_window

0x49e5,	// (0x000a0279) mup3_progress_pane_t1_ParamLimits

0x4a03,	// (0x000a0297) mup3_progress_pane_t2_ParamLimits

0xccdb,	// (0x000a856f) mup3_progress_pane_t3_ParamLimits

0xf65e,	// (0x000aaef2) mup3_progress_pane_t_ParamLimits

0xccf8,	// (0x000a858c) mup_progress_pane_cp03_ParamLimits

0x4e0c,	// (0x000a06a0) mup3_control_keys_pane_g4_copy1

0x5222,	// (0x000a0ab6) mp4_rocker2_pane_ParamLimits

0x5222,	// (0x000a0ab6) mp4_rocker2_pane

0xd2a4,	// (0x000a8b38) mp4_rocker2_pane_g1

0xd2ac,	// (0x000a8b40) mp4_rocker2_pane_g2

0x5636,	// (0x000a0eca) mp4_rocker2_pane_g3

0x563e,	// (0x000a0ed2) mp4_rocker2_pane_g4

0x5646,	// (0x000a0eda) mp4_rocker2_pane_g5

0x0004,

0xf766,	// (0x000aaffa) mp4_rocker2_pane_g

0x0efd,	// (0x0009c791) main_camera4_pane

0x0efd,	// (0x0009c791) main_video4_pane

0x4f37,	// (0x000a07cb) main_video_tele_dialer_pane_t1_ParamLimits

0x4f37,	// (0x000a07cb) main_video_tele_dialer_pane_t1

0x4f49,	// (0x000a07dd) main_video_tele_dialer_pane_t2_ParamLimits

0x4f49,	// (0x000a07dd) main_video_tele_dialer_pane_t2

0x0001,

0xf721,	// (0x000aafb5) main_video_tele_dialer_pane_t_ParamLimits

0xf721,	// (0x000aafb5) main_video_tele_dialer_pane_t

0x5666,	// (0x000a0efa) cam4_autofocus_pane_ParamLimits

0x5666,	// (0x000a0efa) cam4_autofocus_pane

0x567e,	// (0x000a0f12) cam4_image_uncrop_pane_ParamLimits

0x567e,	// (0x000a0f12) cam4_image_uncrop_pane

0x5697,	// (0x000a0f2b) cam4_indicators_pane_ParamLimits

0x5697,	// (0x000a0f2b) cam4_indicators_pane

0x56b3,	// (0x000a0f47) main_camera4_pane_g1_ParamLimits

0x56b3,	// (0x000a0f47) main_camera4_pane_g1

0x56bf,	// (0x000a0f53) main_camera4_pane_g2_ParamLimits

0x56bf,	// (0x000a0f53) main_camera4_pane_g2

0x56bf,	// (0x000a0f53) main_camera4_pane_g3_ParamLimits

0x56bf,	// (0x000a0f53) main_camera4_pane_g3

0x56cb,	// (0x000a0f5f) main_camera4_pane_g4_ParamLimits

0x56cb,	// (0x000a0f5f) main_camera4_pane_g4

0x56d7,	// (0x000a0f6b) main_camera4_pane_g5_ParamLimits

0x56d7,	// (0x000a0f6b) main_camera4_pane_g5

0x0005,

0xf771,	// (0x000ab005) main_camera4_pane_g_ParamLimits

0xf771,	// (0x000ab005) main_camera4_pane_g

0x56f1,	// (0x000a0f85) main_camera4_pane_t1_ParamLimits

0x56f1,	// (0x000a0f85) main_camera4_pane_t1

0xdaad,	// (0x000a9341) bg_tb_trans_pane_cp06

0x5743,	// (0x000a0fd7) cam4_indicators_pane_g1

0x5754,	// (0x000a0fe8) cam4_indicators_pane_g2

0x0002,

0xf78c,	// (0x000ab020) cam4_indicators_pane_g

0x576c,	// (0x000a1000) cam4_indicators_pane_t1

0x5796,	// (0x000a102a) main_video4_pane_g1_ParamLimits

0x5796,	// (0x000a102a) main_video4_pane_g1

0x57a2,	// (0x000a1036) main_video4_pane_g2_ParamLimits

0x57a2,	// (0x000a1036) main_video4_pane_g2

0x57ae,	// (0x000a1042) main_video4_pane_g3_ParamLimits

0x57ae,	// (0x000a1042) main_video4_pane_g3

0x57ba,	// (0x000a104e) main_video4_pane_g4_ParamLimits

0x57ba,	// (0x000a104e) main_video4_pane_g4

0x0004,

0xf793,	// (0x000ab027) main_video4_pane_g_ParamLimits

0xf793,	// (0x000ab027) main_video4_pane_g

0x57dc,	// (0x000a1070) vid4_indicators_pane_ParamLimits

0x57dc,	// (0x000a1070) vid4_indicators_pane

0x57fb,	// (0x000a108f) video4_image_uncrop_cif_pane_ParamLimits

0x57fb,	// (0x000a108f) video4_image_uncrop_cif_pane

0x580a,	// (0x000a109e) video4_image_uncrop_nhd_pane_ParamLimits

0x580a,	// (0x000a109e) video4_image_uncrop_nhd_pane

0x567e,	// (0x000a0f12) video4_image_uncrop_vga_pane_ParamLimits

0x567e,	// (0x000a0f12) video4_image_uncrop_vga_pane

0x3d02,	// (0x0009f596) bg_tb_trans_pane_cp07

0x5823,	// (0x000a10b7) vid4_indicators_pane_g1

0x5839,	// (0x000a10cd) vid4_indicators_pane_g2

0x584d,	// (0x000a10e1) vid4_indicators_pane_g3

0x0004,

0xf79e,	// (0x000ab032) vid4_indicators_pane_g

0x587e,	// (0x000a1112) vid4_indicators_pane_t1

0x5895,	// (0x000a1129) cam4_autofocus_pane_g1

0x589d,	// (0x000a1131) cam4_autofocus_pane_g2

0x58a5,	// (0x000a1139) cam4_autofocus_pane_g3

0x0002,

0xf7a9,	// (0x000ab03d) cam4_autofocus_pane_g

0x58ad,	// (0x000a1141) cam4_autofocus_pane_g3_copy1

0x4f69,	// (0x000a07fd) video_down_pane_cp_t1

0x4f77,	// (0x000a080b) video_down_pane_cp_t2

0x0001,

0xf726,	// (0x000aafba) video_down_pane_cp_t

0x0ee3,	// (0x0009c777) popup_vitu2_window_ParamLimits

0x0ee3,	// (0x0009c777) popup_vitu2_window

0x58b5,	// (0x000a1149) aid_size_cell2_itu2_ParamLimits

0x58b5,	// (0x000a1149) aid_size_cell2_itu2

0x58d7,	// (0x000a116b) aid_size_cell_itu2_ParamLimits

0x58d7,	// (0x000a116b) aid_size_cell_itu2

0x591b,	// (0x000a11af) bg_popup_window_pane_cp09_ParamLimits

0x591b,	// (0x000a11af) bg_popup_window_pane_cp09

0x5929,	// (0x000a11bd) field_vitu2_entry_pane_ParamLimits

0x5929,	// (0x000a11bd) field_vitu2_entry_pane

0x5949,	// (0x000a11dd) grid_vitu2_function_pane_ParamLimits

0x5949,	// (0x000a11dd) grid_vitu2_function_pane

0x598d,	// (0x000a1221) grid_vitu2_itu_pane_ParamLimits

0x598d,	// (0x000a1221) grid_vitu2_itu_pane

0x5a03,	// (0x000a1297) cell_vitu2_itu_pane_ParamLimits

0x5a03,	// (0x000a1297) cell_vitu2_itu_pane

0x5a1e,	// (0x000a12b2) cell_vitu2_function_pane_ParamLimits

0x5a1e,	// (0x000a12b2) cell_vitu2_function_pane

0xd2b4,	// (0x000a8b48) bg_popup_call_pane_cp08_ParamLimits

0xd2b4,	// (0x000a8b48) bg_popup_call_pane_cp08

0xd2cb,	// (0x000a8b5f) field_vitu2_entry_pane_g1

0xd2d7,	// (0x000a8b6b) field_vitu2_entry_pane_g2

0x0002,

0xf7b0,	// (0x000ab044) field_vitu2_entry_pane_g

0xa2a4,	// (0x000a5b38) field_vitu2_entry_pane_t1_ParamLimits

0xa2a4,	// (0x000a5b38) field_vitu2_entry_pane_t1

0xa2d3,	// (0x000a5b67) field_vitu2_entry_pane_t2_ParamLimits

0xa2d3,	// (0x000a5b67) field_vitu2_entry_pane_t2

0x0001,

0xf7b7,	// (0x000ab04b) field_vitu2_entry_pane_t_ParamLimits

0xf7b7,	// (0x000ab04b) field_vitu2_entry_pane_t

0x4062,	// (0x0009f8f6) bg_button_pane_cp010_ParamLimits

0x4062,	// (0x0009f8f6) bg_button_pane_cp010

0x5a62,	// (0x000a12f6) cell_vitu2_itu_pane_g1

0x5a88,	// (0x000a131c) cell_vitu2_itu_pane_t1_ParamLimits

0x5a88,	// (0x000a131c) cell_vitu2_itu_pane_t1

0x0b56,	// (0x0009c3ea) cell_vitu2_itu_pane_t2_ParamLimits

0x0b56,	// (0x0009c3ea) cell_vitu2_itu_pane_t2

0x0002,

0xf7c1,	// (0x000ab055) cell_vitu2_itu_pane_t_ParamLimits

0xf7c1,	// (0x000ab055) cell_vitu2_itu_pane_t

0x3d02,	// (0x0009f596) bg_button_pane_cp011

0x5ad4,	// (0x000a1368) cell_vitu2_function_pane_g1

0x0efd,	// (0x0009c791) main_myfav_hc_pane

0x546e,	// (0x000a0d02) popup_image3_note_pane_ParamLimits

0x546e,	// (0x000a0d02) popup_image3_note_pane

0x547c,	// (0x000a0d10) popup_image3_tool_bar_pane_ParamLimits

0x547c,	// (0x000a0d10) popup_image3_tool_bar_pane

0x0bcc,	// (0x0009c460) cell_vitu2_itu_pane_t3_ParamLimits

0x0bcc,	// (0x0009c460) cell_vitu2_itu_pane_t3

0x9c07,	// (0x000a549b) bg_popup_trans_pane

0xd2eb,	// (0x000a8b7f) grid_image3_tool_bar_pane

0xd2f5,	// (0x000a8b89) bg_popup_trans_pane_g1

0xabc0,	// (0x000a6454) bg_popup_trans_pane_g2

0xd2fd,	// (0x000a8b91) bg_popup_trans_pane_g3

0xd305,	// (0x000a8b99) bg_popup_trans_pane_g4

0xd30d,	// (0x000a8ba1) bg_popup_trans_pane_g5

0xd315,	// (0x000a8ba9) bg_popup_trans_pane_g6

0xd31d,	// (0x000a8bb1) bg_popup_trans_pane_g7

0xd325,	// (0x000a8bb9) bg_popup_trans_pane_g8

0xaba0,	// (0x000a6434) bg_popup_trans_pane_g9

0x0008,

0xf7c8,	// (0x000ab05c) bg_popup_trans_pane_g

0xd32d,	// (0x000a8bc1) cell_image3_tool_bar_pane_ParamLimits

0xd32d,	// (0x000a8bc1) cell_image3_tool_bar_pane

0xa99c,	// (0x000a6230) cell_image3_tool_bar_pane_g1

0x9c07,	// (0x000a549b) bg_popup_trans_pane_cp1

0xd343,	// (0x000a8bd7) popup_image3_note_pane_t1

0xd351,	// (0x000a8be5) popup_image3_note_pane_t2

0xd35f,	// (0x000a8bf3) popup_image3_note_pane_t3

0x0002,

0xf7db,	// (0x000ab06f) popup_image3_note_pane_t

0xd36f,	// (0x000a8c03) popup_image3_note_pane_t3_copy1

0x5ae8,	// (0x000a137c) bg_myfav_hc_instruction_pane_ParamLimits

0x5ae8,	// (0x000a137c) bg_myfav_hc_instruction_pane

0x5b00,	// (0x000a1394) cell_myfav_contact_pane_ParamLimits

0x5b00,	// (0x000a1394) cell_myfav_contact_pane

0x5b1a,	// (0x000a13ae) cell_myfav_contact_pane_cp1_ParamLimits

0x5b1a,	// (0x000a13ae) cell_myfav_contact_pane_cp1

0x5b32,	// (0x000a13c6) cell_myfav_contact_pane_cp2_ParamLimits

0x5b32,	// (0x000a13c6) cell_myfav_contact_pane_cp2

0x5b4a,	// (0x000a13de) cell_myfav_contact_pane_cp3_ParamLimits

0x5b4a,	// (0x000a13de) cell_myfav_contact_pane_cp3

0x5b61,	// (0x000a13f5) cell_myfav_contact_pane_cp4_ParamLimits

0x5b61,	// (0x000a13f5) cell_myfav_contact_pane_cp4

0x5b77,	// (0x000a140b) cell_myfav_contact_pane_cp5_ParamLimits

0x5b77,	// (0x000a140b) cell_myfav_contact_pane_cp5

0x5b8b,	// (0x000a141f) cell_myfav_contact_pane_cp6_ParamLimits

0x5b8b,	// (0x000a141f) cell_myfav_contact_pane_cp6

0x5b9f,	// (0x000a1433) cell_myfav_contact_pane_cp7_ParamLimits

0x5b9f,	// (0x000a1433) cell_myfav_contact_pane_cp7

0xd37d,	// (0x000a8c11) listscroll_gen_pane_cp05

0x5bb7,	// (0x000a144b) main_myfav_hc_pane_g1_ParamLimits

0x5bb7,	// (0x000a144b) main_myfav_hc_pane_g1

0x5bd1,	// (0x000a1465) main_myfav_hc_pane_g2_ParamLimits

0x5bd1,	// (0x000a1465) main_myfav_hc_pane_g2

0x0002,

0xf7e2,	// (0x000ab076) main_myfav_hc_pane_g_ParamLimits

0xf7e2,	// (0x000ab076) main_myfav_hc_pane_g

0x5c03,	// (0x000a1497) main_myfav_hc_pane_t1_ParamLimits

0x5c03,	// (0x000a1497) main_myfav_hc_pane_t1

0xd386,	// (0x000a8c1a) main_myfav_hc_pane_t2_ParamLimits

0xd386,	// (0x000a8c1a) main_myfav_hc_pane_t2

0xd398,	// (0x000a8c2c) main_myfav_hc_pane_t3_ParamLimits

0xd398,	// (0x000a8c2c) main_myfav_hc_pane_t3

0x5c1a,	// (0x000a14ae) main_myfav_hc_pane_t4_ParamLimits

0x5c1a,	// (0x000a14ae) main_myfav_hc_pane_t4

0x0004,

0xf7e9,	// (0x000ab07d) main_myfav_hc_pane_t_ParamLimits

0xf7e9,	// (0x000ab07d) main_myfav_hc_pane_t

0xa99c,	// (0x000a6230) bg_myfav_hc_instruction_pane_g1

0xd3aa,	// (0x000a8c3e) cell_myfav_contact_pane_g1_ParamLimits

0xd3aa,	// (0x000a8c3e) cell_myfav_contact_pane_g1

0xd3aa,	// (0x000a8c3e) cell_myfav_contact_pane_g2_ParamLimits

0xd3aa,	// (0x000a8c3e) cell_myfav_contact_pane_g2

0xd3b6,	// (0x000a8c4a) cell_myfav_contact_pane_g3_ParamLimits

0xd3b6,	// (0x000a8c4a) cell_myfav_contact_pane_g3

0xa708,	// (0x000a5f9c) cell_myfav_contact_pane_g4_ParamLimits

0xa708,	// (0x000a5f9c) cell_myfav_contact_pane_g4

0xd3c3,	// (0x000a8c57) cell_myfav_contact_pane_g5_ParamLimits

0xd3c3,	// (0x000a8c57) cell_myfav_contact_pane_g5

0x0004,

0xf7f4,	// (0x000ab088) cell_myfav_contact_pane_g_ParamLimits

0xf7f4,	// (0x000ab088) cell_myfav_contact_pane_g

0x5beb,	// (0x000a147f) main_myfav_hc_pane_g3_ParamLimits

0x5beb,	// (0x000a147f) main_myfav_hc_pane_g3

0x0ded,	// (0x0009c681) popup_adpt_find_window

0x5c44,	// (0x000a14d8) afind_page_pane_ParamLimits

0x5c44,	// (0x000a14d8) afind_page_pane

0x5c51,	// (0x000a14e5) aid_size_cell_afind_ParamLimits

0x5c51,	// (0x000a14e5) aid_size_cell_afind

0x5c6b,	// (0x000a14ff) bg_popup_sub_pane_cp09_ParamLimits

0x5c6b,	// (0x000a14ff) bg_popup_sub_pane_cp09

0x5c7c,	// (0x000a1510) find_pane_cp01_ParamLimits

0x5c7c,	// (0x000a1510) find_pane_cp01

0xd3cf,	// (0x000a8c63) grid_afind_control_pane_ParamLimits

0xd3cf,	// (0x000a8c63) grid_afind_control_pane

0x5c8f,	// (0x000a1523) grid_afind_pane_ParamLimits

0x5c8f,	// (0x000a1523) grid_afind_pane

0x5cab,	// (0x000a153f) cell_afind_pane_ParamLimits

0x5cab,	// (0x000a153f) cell_afind_pane

0xa99c,	// (0x000a6230) afind_page_pane_g1

0x5cf3,	// (0x000a1587) afind_page_pane_g2

0x5cfb,	// (0x000a158f) afind_page_pane_g3

0x0002,

0xf7ff,	// (0x000ab093) afind_page_pane_g

0x5d03,	// (0x000a1597) afind_page_pane_t1

0xd3f5,	// (0x000a8c89) cell_afind_grid_control_pane_ParamLimits

0xd3f5,	// (0x000a8c89) cell_afind_grid_control_pane

0xd276,	// (0x000a8b0a) bg_button_pane_cp69_ParamLimits

0xd276,	// (0x000a8b0a) bg_button_pane_cp69

0x5d11,	// (0x000a15a5) cell_afind_pane_g1_ParamLimits

0x5d11,	// (0x000a15a5) cell_afind_pane_g1

0x5d1e,	// (0x000a15b2) cell_afind_pane_t1_ParamLimits

0x5d1e,	// (0x000a15b2) cell_afind_pane_t1

0xa9a6,	// (0x000a623a) bg_button_pane_cp72

0xd404,	// (0x000a8c98) cell_afind_grid_control_pane_g1

0x3824,	// (0x0009f0b8) aid_image_placing_area_ParamLimits

0x3824,	// (0x0009f0b8) aid_image_placing_area

0xa6fa,	// (0x000a5f8e) field_vitu_entry_pane_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) field_vitu_entry_pane_g1

0xa6fa,	// (0x000a5f8e) field_vitu_entry_pane_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x000aaa55) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x000aaa55) field_vitu_entry_pane_g

0xd006,	// (0x000a889a) cell_vitu_itu_pane_g1_ParamLimits

0xcdc0,	// (0x000a8654) cell_vitu_itu_pane_t3_ParamLimits

0xcdc0,	// (0x000a8654) cell_vitu_itu_pane_t3

0xd21f,	// (0x000a8ab3) mp4_progress_pane_t1_ParamLimits

0xd238,	// (0x000a8acc) mp4_progress_pane_t2_ParamLimits

0x0486,	// (0x0009bd1a) mp4_progress_pane_t_ParamLimits

0xd251,	// (0x000a8ae5) mup_progress_pane_cp04_ParamLimits

0x5c2e,	// (0x000a14c2) main_myfav_hc_pane_t5_ParamLimits

0x5c2e,	// (0x000a14c2) main_myfav_hc_pane_t5

0x0b46,	// (0x0009c3da) aid_zoom_text_primary

0x0ded,	// (0x0009c681) popup_adpt_find_window_ParamLimits

0x3d02,	// (0x0009f596) main_cam_set_pane

0x56a5,	// (0x000a0f39) cam4_zoom_pane_ParamLimits

0x56a5,	// (0x000a0f39) cam4_zoom_pane

0x5d30,	// (0x000a15c4) main_cam_set_pane_g1_ParamLimits

0x5d30,	// (0x000a15c4) main_cam_set_pane_g1

0x5d3e,	// (0x000a15d2) main_cam_set_pane_g2_ParamLimits

0x5d3e,	// (0x000a15d2) main_cam_set_pane_g2

0x0001,

0xf806,	// (0x000ab09a) main_cam_set_pane_g_ParamLimits

0xf806,	// (0x000ab09a) main_cam_set_pane_g

0x5d4a,	// (0x000a15de) main_cam_set_pane_t1_ParamLimits

0x5d4a,	// (0x000a15de) main_cam_set_pane_t1

0x5d66,	// (0x000a15fa) main_cset_listscroll_pane_ParamLimits

0x5d66,	// (0x000a15fa) main_cset_listscroll_pane

0x5d9a,	// (0x000a162e) main_cset_slider_pane_ParamLimits

0x5d9a,	// (0x000a162e) main_cset_slider_pane

0xd415,	// (0x000a8ca9) main_cset_list_pane_ParamLimits

0xd415,	// (0x000a8ca9) main_cset_list_pane

0xd425,	// (0x000a8cb9) scroll_pane_cp028

0x5dbb,	// (0x000a164f) aid_area_touch_slider

0x5dd7,	// (0x000a166b) cset_slider_pane

0x5dfa,	// (0x000a168e) main_cset_slider_pane_g1

0x5e0f,	// (0x000a16a3) main_cset_slider_pane_g2

0x0011,

0xf80b,	// (0x000ab09f) main_cset_slider_pane_g

0xd472,	// (0x000a8d06) main_cset_slider_pane_t1

0x5ecb,	// (0x000a175f) main_cset_slider_pane_t2

0x5ee5,	// (0x000a1779) main_cset_slider_pane_t3

0x5eff,	// (0x000a1793) main_cset_slider_pane_t4

0x5f19,	// (0x000a17ad) main_cset_slider_pane_t5

0x5f33,	// (0x000a17c7) main_cset_slider_pane_t6

0x5f48,	// (0x000a17dc) main_cset_slider_pane_t7

0x000e,

0xf830,	// (0x000ab0c4) main_cset_slider_pane_t

0x604c,	// (0x000a18e0) cset_list_set_pane_ParamLimits

0x604c,	// (0x000a18e0) cset_list_set_pane

0xd50c,	// (0x000a8da0) aid_position_infowindow_above

0xd514,	// (0x000a8da8) aid_position_infowindow_below

0x605d,	// (0x000a18f1) cset_list_set_pane_g1_ParamLimits

0x605d,	// (0x000a18f1) cset_list_set_pane_g1

0x6069,	// (0x000a18fd) cset_list_set_pane_g3_ParamLimits

0x6069,	// (0x000a18fd) cset_list_set_pane_g3

0x0001,

0xf84f,	// (0x000ab0e3) cset_list_set_pane_g_ParamLimits

0xf84f,	// (0x000ab0e3) cset_list_set_pane_g

0x6078,	// (0x000a190c) cset_list_set_pane_t1_ParamLimits

0x6078,	// (0x000a190c) cset_list_set_pane_t1

0xa296,	// (0x000a5b2a) list_highlight_pane_cp021_ParamLimits

0xa296,	// (0x000a5b2a) list_highlight_pane_cp021

0xb3f2,	// (0x000a6c86) cset_slider_pane_g1

0xb404,	// (0x000a6c98) cset_slider_pane_g2

0xb3fb,	// (0x000a6c8f) cset_slider_pane_g3

0x0002,

0xf854,	// (0x000ab0e8) cset_slider_pane_g

0xb09c,	// (0x000a6930) aid_area_touch_cam4_zoom

0x608d,	// (0x000a1921) cam4_zoom_cont_pane

0x6095,	// (0x000a1929) cam4_zoom_pane_g1

0x609d,	// (0x000a1931) cam4_zoom_pane_g2

0x60a5,	// (0x000a1939) cam4_zoom_pane_g3

0x0002,

0xf85b,	// (0x000ab0ef) cam4_zoom_pane_g

0x60ad,	// (0x000a1941) cam4_zoom_cont_pane_g1

0x60b6,	// (0x000a194a) cam4_zoom_cont_pane_g2

0x60bf,	// (0x000a1953) cam4_zoom_cont_pane_g3

0x0002,

0xf862,	// (0x000ab0f6) cam4_zoom_cont_pane_g

0x54c5,	// (0x000a0d59) call4_image_pane_ParamLimits

0x54c5,	// (0x000a0d59) call4_image_pane

0x5526,	// (0x000a0dba) call4_windows_conf_pane_ParamLimits

0x556d,	// (0x000a0e01) popup_call4_audio_in_window_ParamLimits

0x556d,	// (0x000a0e01) popup_call4_audio_in_window

0x9c07,	// (0x000a549b) bg_popup_call2_act_pane_cp02

0xd282,	// (0x000a8b16) call4_list_conf_pane

0xa99c,	// (0x000a6230) call4_image_pane_g1

0xa99c,	// (0x000a6230) call4_image_pane_g2

0x0001,

0x0027,	// (0x0009b8bb) call4_image_pane_g

0xd51c,	// (0x000a8db0) list_single_graphic_popup_conf4_pane_ParamLimits

0xd51c,	// (0x000a8db0) list_single_graphic_popup_conf4_pane

0x9c07,	// (0x000a549b) list_highlight_pane_cp022

0xd531,	// (0x000a8dc5) list_single_graphic_popup_conf4_pane_g1

0xb0f5,	// (0x000a6989) list_single_graphic_popup_conf4_pane_g2

0x0001,

0x05aa,	// (0x0009be3e) list_single_graphic_popup_conf4_pane_g

0xd539,	// (0x000a8dcd) list_single_graphic_popup_conf4_pane_t1

0x1d13,	// (0x0009d5a7) popup_vtel_slider_window_ParamLimits

0x1d13,	// (0x0009d5a7) popup_vtel_slider_window

0xd264,	// (0x000a8af8) dialer2_ne_pane_t2_ParamLimits

0xd264,	// (0x000a8af8) dialer2_ne_pane_t2

0x0001,

0xf74a,	// (0x000aafde) dialer2_ne_pane_t_ParamLimits

0xf74a,	// (0x000aafde) dialer2_ne_pane_t

0xa296,	// (0x000a5b2a) bg_popup_sub_pane_cp010_ParamLimits

0xa296,	// (0x000a5b2a) bg_popup_sub_pane_cp010

0x60c8,	// (0x000a195c) popup_vtel_slider_window_g1_ParamLimits

0x60c8,	// (0x000a195c) popup_vtel_slider_window_g1

0x60d4,	// (0x000a1968) popup_vtel_slider_window_g2_ParamLimits

0x60d4,	// (0x000a1968) popup_vtel_slider_window_g2

0x0003,

0xf869,	// (0x000ab0fd) popup_vtel_slider_window_g_ParamLimits

0xf869,	// (0x000ab0fd) popup_vtel_slider_window_g

0x611c,	// (0x000a19b0) vtel_slider_pane_ParamLimits

0x611c,	// (0x000a19b0) vtel_slider_pane

0x612b,	// (0x000a19bf) vtel_slider_pane_g1_ParamLimits

0x612b,	// (0x000a19bf) vtel_slider_pane_g1

0x6138,	// (0x000a19cc) vtel_slider_pane_g2_ParamLimits

0x6138,	// (0x000a19cc) vtel_slider_pane_g2

0x6145,	// (0x000a19d9) vtel_slider_pane_g3_ParamLimits

0x6145,	// (0x000a19d9) vtel_slider_pane_g3

0x612b,	// (0x000a19bf) vtel_slider_pane_g4_ParamLimits

0x612b,	// (0x000a19bf) vtel_slider_pane_g4

0x6152,	// (0x000a19e6) vtel_slider_pane_g5_ParamLimits

0x6152,	// (0x000a19e6) vtel_slider_pane_g5

0x0004,

0xf872,	// (0x000ab106) vtel_slider_pane_g_ParamLimits

0xf872,	// (0x000ab106) vtel_slider_pane_g

0x3d02,	// (0x0009f596) main_gallery2_pane

0x58fd,	// (0x000a1191) aid_size_row_itut2_dropdow_list_ParamLimits

0x58fd,	// (0x000a1191) aid_size_row_itut2_dropdow_list

0x596b,	// (0x000a11ff) grid_vitu2_function_top_pane_ParamLimits

0x596b,	// (0x000a11ff) grid_vitu2_function_top_pane

0x59c1,	// (0x000a1255) popup_vitu2_dropdown_list_window_ParamLimits

0x59c1,	// (0x000a1255) popup_vitu2_dropdown_list_window

0x59df,	// (0x000a1273) popup_vitu2_match_list_window

0x615f,	// (0x000a19f3) cell_vitu2_function_top_pane_ParamLimits

0x615f,	// (0x000a19f3) cell_vitu2_function_top_pane

0x6179,	// (0x000a1a0d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6179,	// (0x000a1a0d) cell_vitu2_function_top_pane_cp01

0x6195,	// (0x000a1a29) cell_vitu2_function_top_wide_pane_ParamLimits

0x6195,	// (0x000a1a29) cell_vitu2_function_top_wide_pane

0x3d02,	// (0x0009f596) bg_button_pane_cp012

0x61b3,	// (0x000a1a47) cell_vitu2_function_top_pane_g1

0x61c7,	// (0x000a1a5b) bg_button_pane_cp013_ParamLimits

0x61c7,	// (0x000a1a5b) bg_button_pane_cp013

0x61e3,	// (0x000a1a77) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x61e3,	// (0x000a1a77) cell_vitu2_function_top_wide_pane_g1

0x0ee3,	// (0x0009c777) bg_popup_sub_pane_cp20

0x61fb,	// (0x000a1a8f) list_vitu2_match_list_pane

0xd2f5,	// (0x000a8b89) bg_popup_sub_pane_cp20_g1

0xd2fd,	// (0x000a8b91) bg_popup_sub_pane_cp20_g2

0xabc0,	// (0x000a6454) bg_popup_sub_pane_cp20_g3

0xd305,	// (0x000a8b99) bg_popup_sub_pane_cp20_g4

0xaba0,	// (0x000a6434) bg_popup_sub_pane_cp20_g5

0xd54f,	// (0x000a8de3) bg_popup_sub_pane_cp20_g6

0xd315,	// (0x000a8ba9) bg_popup_sub_pane_cp20_g7

0xd31d,	// (0x000a8bb1) bg_popup_sub_pane_cp20_g8

0xd325,	// (0x000a8bb9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf87d,	// (0x000ab111) bg_popup_sub_pane_cp20_g

0x6213,	// (0x000a1aa7) list_vitu2_match_list_item_pane_ParamLimits

0x6213,	// (0x000a1aa7) list_vitu2_match_list_item_pane

0x6225,	// (0x000a1ab9) list_vitu2_match_list_item_pane_t1

0x0efd,	// (0x0009c791) bg_popup_sub_pane_cp21

0xa90a,	// (0x000a619e) grid_vitu2_dropdown_list_pane

0x6233,	// (0x000a1ac7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6233,	// (0x000a1ac7) cell_vitu2_dropdown_list_char_pane

0x6257,	// (0x000a1aeb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6257,	// (0x000a1aeb) cell_vitu2_dropdown_list_ctrl_pane

0xd557,	// (0x000a8deb) cell_vitu2_dropdown_list_char_pane_g1

0xd560,	// (0x000a8df4) cell_vitu2_dropdown_list_char_pane_g2

0xd569,	// (0x000a8dfd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x05d6,	// (0x0009be6a) cell_vitu2_dropdown_list_char_pane_g

0x6281,	// (0x000a1b15) cell_vitu2_dropdown_list_char_pane_t1

0x628f,	// (0x000a1b23) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x628f,	// (0x000a1b23) cell_vitu2_dropdown_list_ctrl_pane_g1

0x629f,	// (0x000a1b33) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x629f,	// (0x000a1b33) cell_vitu2_dropdown_list_ctrl_pane_g2

0x62b0,	// (0x000a1b44) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x62b0,	// (0x000a1b44) cell_vitu2_dropdown_list_ctrl_pane_g3

0x62c0,	// (0x000a1b54) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x62c0,	// (0x000a1b54) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdaad,	// (0x000a9341) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdaad,	// (0x000a9341) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf890,	// (0x000ab124) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf890,	// (0x000ab124) cell_vitu2_dropdown_list_ctrl_pane_g

0x62d9,	// (0x000a1b6d) aid_size_cell_gallery2_ParamLimits

0x62d9,	// (0x000a1b6d) aid_size_cell_gallery2

0x62f3,	// (0x000a1b87) grid_gallery2_pane_ParamLimits

0x62f3,	// (0x000a1b87) grid_gallery2_pane

0x630a,	// (0x000a1b9e) scroll_pane_cp029_ParamLimits

0x630a,	// (0x000a1b9e) scroll_pane_cp029

0x631a,	// (0x000a1bae) cell_gallery2_pane_ParamLimits

0x631a,	// (0x000a1bae) cell_gallery2_pane

0xd572,	// (0x000a8e06) cell_gallery2_pane_g2

0x6371,	// (0x000a1c05) cell_gallery2_pane_g3

0xd57a,	// (0x000a8e0e) cell_gallery2_pane_g4

0xd582,	// (0x000a8e16) cell_gallery2_pane_g5

0xa90a,	// (0x000a619e) grid_highlight_pane_cp10

0x59df,	// (0x000a1273) popup_vitu2_match_list_window_ParamLimits

0x59f3,	// (0x000a1287) popup_vitu2_query_window_ParamLimits

0x59f3,	// (0x000a1287) popup_vitu2_query_window

0x0efd,	// (0x0009c791) bg_vitu2_candi_button_pane

0xd557,	// (0x000a8deb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd560,	// (0x000a8df4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd569,	// (0x000a8dfd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6379,	// (0x000a1c0d) bg_button_pane_cp015

0x638e,	// (0x000a1c22) bg_button_pane_cp016

0x639a,	// (0x000a1c2e) bg_button_pane_cp017

0xb663,	// (0x000a6ef7) bg_popup_sub_pane_cp22

0xd58a,	// (0x000a8e1e) popup_vitu2_query_window_g1

0x63db,	// (0x000a1c6f) popup_vitu2_query_window_g2

0x0002,

0xf89b,	// (0x000ab12f) popup_vitu2_query_window_g

0x63ff,	// (0x000a1c93) popup_vitu2_query_window_t1_ParamLimits

0x63ff,	// (0x000a1c93) popup_vitu2_query_window_t1

0x6432,	// (0x000a1cc6) popup_vitu2_query_window_t2_ParamLimits

0x6432,	// (0x000a1cc6) popup_vitu2_query_window_t2

0x6444,	// (0x000a1cd8) popup_vitu2_query_window_t3_ParamLimits

0x6444,	// (0x000a1cd8) popup_vitu2_query_window_t3

0x646c,	// (0x000a1d00) popup_vitu2_query_window_t4_ParamLimits

0x646c,	// (0x000a1d00) popup_vitu2_query_window_t4

0x6480,	// (0x000a1d14) popup_vitu2_query_window_t5_ParamLimits

0x6480,	// (0x000a1d14) popup_vitu2_query_window_t5

0x0006,

0xf8a2,	// (0x000ab136) popup_vitu2_query_window_t_ParamLimits

0xf8a2,	// (0x000ab136) popup_vitu2_query_window_t

0xd40d,	// (0x000a8ca1) main_cset_text_pane

0x5dbb,	// (0x000a164f) aid_area_touch_slider_ParamLimits

0x5dd7,	// (0x000a166b) cset_slider_pane_ParamLimits

0x5dfa,	// (0x000a168e) main_cset_slider_pane_g1_ParamLimits

0x5e0f,	// (0x000a16a3) main_cset_slider_pane_g2_ParamLimits

0xd442,	// (0x000a8cd6) main_cset_slider_pane_g3_ParamLimits

0xd442,	// (0x000a8cd6) main_cset_slider_pane_g3

0x5e24,	// (0x000a16b8) main_cset_slider_pane_g4_ParamLimits

0x5e24,	// (0x000a16b8) main_cset_slider_pane_g4

0x5e33,	// (0x000a16c7) main_cset_slider_pane_g5_ParamLimits

0x5e33,	// (0x000a16c7) main_cset_slider_pane_g5

0x5e3f,	// (0x000a16d3) main_cset_slider_pane_g6_ParamLimits

0x5e3f,	// (0x000a16d3) main_cset_slider_pane_g6

0xf80b,	// (0x000ab09f) main_cset_slider_pane_g_ParamLimits

0xd472,	// (0x000a8d06) main_cset_slider_pane_t1_ParamLimits

0x5ecb,	// (0x000a175f) main_cset_slider_pane_t2_ParamLimits

0x5ee5,	// (0x000a1779) main_cset_slider_pane_t3_ParamLimits

0x5eff,	// (0x000a1793) main_cset_slider_pane_t4_ParamLimits

0x5f19,	// (0x000a17ad) main_cset_slider_pane_t5_ParamLimits

0x5f33,	// (0x000a17c7) main_cset_slider_pane_t6_ParamLimits

0x5f48,	// (0x000a17dc) main_cset_slider_pane_t7_ParamLimits

0x5f72,	// (0x000a1806) main_cset_slider_pane_t8_ParamLimits

0x5f72,	// (0x000a1806) main_cset_slider_pane_t8

0x5f9a,	// (0x000a182e) main_cset_slider_pane_t9_ParamLimits

0x5f9a,	// (0x000a182e) main_cset_slider_pane_t9

0x5fc2,	// (0x000a1856) main_cset_slider_pane_t10_ParamLimits

0x5fc2,	// (0x000a1856) main_cset_slider_pane_t10

0x5fea,	// (0x000a187e) main_cset_slider_pane_t11_ParamLimits

0x5fea,	// (0x000a187e) main_cset_slider_pane_t11

0x6012,	// (0x000a18a6) main_cset_slider_pane_t12_ParamLimits

0x6012,	// (0x000a18a6) main_cset_slider_pane_t12

0x602f,	// (0x000a18c3) main_cset_slider_pane_t13_ParamLimits

0x602f,	// (0x000a18c3) main_cset_slider_pane_t13

0xf830,	// (0x000ab0c4) main_cset_slider_pane_t_ParamLimits

0x9c07,	// (0x000a549b) bg_popup_sub_pane_cp011

0xd596,	// (0x000a8e2a) main_cset_text_pane_g1

0xd59e,	// (0x000a8e32) main_cset_text_pane_t1

0xd5ac,	// (0x000a8e40) main_cset_text_pane_t2

0xd5ba,	// (0x000a8e4e) main_cset_text_pane_t3

0xd5c8,	// (0x000a8e5c) main_cset_text_pane_t4

0xd5d6,	// (0x000a8e6a) main_cset_text_pane_t5

0xd5e4,	// (0x000a8e78) main_cset_text_pane_t6

0xd5f2,	// (0x000a8e86) main_cset_text_pane_t7

0x0006,

0x05fe,	// (0x0009be92) main_cset_text_pane_t

0x0efd,	// (0x0009c791) main_cam4_burst_pane

0x0efd,	// (0x0009c791) main_cam5_pane

0xd3e3,	// (0x000a8c77) bg_button_pane_cp019

0xd3ec,	// (0x000a8c80) bg_button_pane_cp020

0xd44e,	// (0x000a8ce2) main_cset_slider_pane_g7_ParamLimits

0xd44e,	// (0x000a8ce2) main_cset_slider_pane_g7

0xd45a,	// (0x000a8cee) main_cset_slider_pane_g8_ParamLimits

0xd45a,	// (0x000a8cee) main_cset_slider_pane_g8

0x5e53,	// (0x000a16e7) main_cset_slider_pane_g9_ParamLimits

0x5e53,	// (0x000a16e7) main_cset_slider_pane_g9

0x5e5f,	// (0x000a16f3) main_cset_slider_pane_g10_ParamLimits

0x5e5f,	// (0x000a16f3) main_cset_slider_pane_g10

0x5e6b,	// (0x000a16ff) main_cset_slider_pane_g11_ParamLimits

0x5e6b,	// (0x000a16ff) main_cset_slider_pane_g11

0x5e77,	// (0x000a170b) main_cset_slider_pane_g12_ParamLimits

0x5e77,	// (0x000a170b) main_cset_slider_pane_g12

0x5e83,	// (0x000a1717) main_cset_slider_pane_g13_ParamLimits

0x5e83,	// (0x000a1717) main_cset_slider_pane_g13

0x5e8f,	// (0x000a1723) main_cset_slider_pane_g14_ParamLimits

0x5e8f,	// (0x000a1723) main_cset_slider_pane_g14

0x5e9b,	// (0x000a172f) main_cset_slider_pane_g15_ParamLimits

0x5e9b,	// (0x000a172f) main_cset_slider_pane_g15

0xd49a,	// (0x000a8d2e) main_cset_slider_pane_t14_ParamLimits

0xd49a,	// (0x000a8d2e) main_cset_slider_pane_t14

0xd4d3,	// (0x000a8d67) main_cset_slider_pane_t15_ParamLimits

0xd4d3,	// (0x000a8d67) main_cset_slider_pane_t15

0x64ea,	// (0x000a1d7e) aid_cam4_burst_size_cell_ParamLimits

0x64ea,	// (0x000a1d7e) aid_cam4_burst_size_cell

0x6506,	// (0x000a1d9a) grid_cam4_burst_pane_ParamLimits

0x6506,	// (0x000a1d9a) grid_cam4_burst_pane

0x6538,	// (0x000a1dcc) linegrid_cam4_burst_pane_ParamLimits

0x6538,	// (0x000a1dcc) linegrid_cam4_burst_pane

0x6556,	// (0x000a1dea) scroll_pane_cp30_ParamLimits

0x6556,	// (0x000a1dea) scroll_pane_cp30

0x6562,	// (0x000a1df6) cell_cam4_burst_pane_ParamLimits

0x6562,	// (0x000a1df6) cell_cam4_burst_pane

0xd600,	// (0x000a8e94) linegrid_cam4_burst_pane_g1_ParamLimits

0xd600,	// (0x000a8e94) linegrid_cam4_burst_pane_g1

0x65a2,	// (0x000a1e36) linegrid_cam4_burst_pane_g2_ParamLimits

0x65a2,	// (0x000a1e36) linegrid_cam4_burst_pane_g2

0xd60d,	// (0x000a8ea1) linegrid_cam4_burst_pane_g3_ParamLimits

0xd60d,	// (0x000a8ea1) linegrid_cam4_burst_pane_g3

0x0002,

0xf8b1,	// (0x000ab145) linegrid_cam4_burst_pane_g_ParamLimits

0xf8b1,	// (0x000ab145) linegrid_cam4_burst_pane_g

0x65b3,	// (0x000a1e47) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x65b3,	// (0x000a1e47) linegrid_cam4_burst_pane_g3_copy1

0xd61a,	// (0x000a8eae) linegrid_cam4_burst_pane_g4_ParamLimits

0xd61a,	// (0x000a8eae) linegrid_cam4_burst_pane_g4

0x65cd,	// (0x000a1e61) linegrid_cam4_burst_pane_g5_ParamLimits

0x65cd,	// (0x000a1e61) linegrid_cam4_burst_pane_g5

0x65de,	// (0x000a1e72) linegrid_cam4_burst_pane_g6_ParamLimits

0x65de,	// (0x000a1e72) linegrid_cam4_burst_pane_g6

0xd627,	// (0x000a8ebb) linegrid_cam4_burst_pane_g7_ParamLimits

0xd627,	// (0x000a8ebb) linegrid_cam4_burst_pane_g7

0x65f5,	// (0x000a1e89) cell_cam4_burst_pane_g1

0xd640,	// (0x000a8ed4) main_cam5_pane_t1_ParamLimits

0xd640,	// (0x000a8ed4) main_cam5_pane_t1

0xd652,	// (0x000a8ee6) main_cam5_pane_t2_ParamLimits

0xd652,	// (0x000a8ee6) main_cam5_pane_t2

0xd664,	// (0x000a8ef8) main_cam5_pane_t3_ParamLimits

0xd664,	// (0x000a8ef8) main_cam5_pane_t3

0xd676,	// (0x000a8f0a) main_cam5_pane_t4_ParamLimits

0xd676,	// (0x000a8f0a) main_cam5_pane_t4

0xd68e,	// (0x000a8f22) main_cam5_pane_t5_ParamLimits

0xd68e,	// (0x000a8f22) main_cam5_pane_t5

0xd6a2,	// (0x000a8f36) main_cam5_pane_t6_ParamLimits

0xd6a2,	// (0x000a8f36) main_cam5_pane_t6

0xd6b6,	// (0x000a8f4a) main_cam5_pane_t7_ParamLimits

0xd6b6,	// (0x000a8f4a) main_cam5_pane_t7

0xd6c8,	// (0x000a8f5c) main_cam5_pane_t8_ParamLimits

0xd6c8,	// (0x000a8f5c) main_cam5_pane_t8

0xd6e6,	// (0x000a8f7a) main_cam5_pane_t9_ParamLimits

0xd6e6,	// (0x000a8f7a) main_cam5_pane_t9

0xd6f8,	// (0x000a8f8c) main_cam5_pane_t10_ParamLimits

0xd6f8,	// (0x000a8f8c) main_cam5_pane_t10

0xd70a,	// (0x000a8f9e) main_cam5_pane_t11_ParamLimits

0xd70a,	// (0x000a8f9e) main_cam5_pane_t11

0xd71e,	// (0x000a8fb2) main_cam5_pane_t12_ParamLimits

0xd71e,	// (0x000a8fb2) main_cam5_pane_t12

0xd735,	// (0x000a8fc9) main_cam5_pane_t13_ParamLimits

0xd735,	// (0x000a8fc9) main_cam5_pane_t13

0x000c,

0xf8bd,	// (0x000ab151) main_cam5_pane_t_ParamLimits

0xf8bd,	// (0x000ab151) main_cam5_pane_t

0x0ea2,	// (0x0009c736) popup_scut_keymap_window_ParamLimits

0x0ea2,	// (0x0009c736) popup_scut_keymap_window

0x6608,	// (0x000a1e9c) aid_size_cell_brow_shortcut

0xa90a,	// (0x000a619e) bg_popup_window_pane_cp010

0x6614,	// (0x000a1ea8) grid_scut_pane

0x6620,	// (0x000a1eb4) cell_scut_pane_ParamLimits

0x6620,	// (0x000a1eb4) cell_scut_pane

0x663b,	// (0x000a1ecf) cell_scut_pane_g1

0xd758,	// (0x000a8fec) cell_scut_pane_t1

0xd7aa,	// (0x000a903e) cell_scut_pane_t2

0x6644,	// (0x000a1ed8) cell_scut_pane_t3

0x0002,

0xf8d8,	// (0x000ab16c) cell_scut_pane_t

0x45f6,	// (0x0009fe8a) main_mup3_pane_g8_ParamLimits

0x45f6,	// (0x0009fe8a) main_mup3_pane_g8

0x590b,	// (0x000a119f) area_vitu2_query_pane_ParamLimits

0x590b,	// (0x000a119f) area_vitu2_query_pane

0x63a6,	// (0x000a1c3a) input_focus_pane_cp08

0xd7b9,	// (0x000a904d) area_vitu2_query_pane_g1

0x6652,	// (0x000a1ee6) area_vitu2_query_pane_g2

0x0001,

0xf8df,	// (0x000ab173) area_vitu2_query_pane_g

0x6663,	// (0x000a1ef7) area_vitu2_query_pane_t1_ParamLimits

0x6663,	// (0x000a1ef7) area_vitu2_query_pane_t1

0x6677,	// (0x000a1f0b) area_vitu2_query_pane_t2_ParamLimits

0x6677,	// (0x000a1f0b) area_vitu2_query_pane_t2

0x668b,	// (0x000a1f1f) area_vitu2_query_pane_t3_ParamLimits

0x668b,	// (0x000a1f1f) area_vitu2_query_pane_t3

0xa2f0,	// (0x000a5b84) area_vitu2_query_pane_t4_ParamLimits

0xa2f0,	// (0x000a5b84) area_vitu2_query_pane_t4

0xa318,	// (0x000a5bac) area_vitu2_query_pane_t5_ParamLimits

0xa318,	// (0x000a5bac) area_vitu2_query_pane_t5

0xa340,	// (0x000a5bd4) area_vitu2_query_pane_t6_ParamLimits

0xa340,	// (0x000a5bd4) area_vitu2_query_pane_t6

0x0006,

0xf8e4,	// (0x000ab178) area_vitu2_query_pane_t_ParamLimits

0xf8e4,	// (0x000ab178) area_vitu2_query_pane_t

0x638e,	// (0x000a1c22) bg_button_pane_cp018

0x66b3,	// (0x000a1f47) bg_button_pane_cp021

0x66bf,	// (0x000a1f53) bg_button_pane_cp022

0x66e2,	// (0x000a1f76) input_focus_pane_cp09

0x3047,	// (0x0009e8db) aid_size_touch_mv_arrow_left

0x3072,	// (0x0009e906) aid_size_touch_mv_arrow_right

0x5eb3,	// (0x000a1747) main_cset_slider_pane_g16_ParamLimits

0x5eb3,	// (0x000a1747) main_cset_slider_pane_g16

0x5ebf,	// (0x000a1753) main_cset_slider_pane_g17_ParamLimits

0x5ebf,	// (0x000a1753) main_cset_slider_pane_g17

0x65f5,	// (0x000a1e89) cell_cam4_burst_pane_g1_ParamLimits

0x9c07,	// (0x000a549b) compa_mode_pane

0x60e0,	// (0x000a1974) popup_vtel_slider_window_g3_ParamLimits

0x60e0,	// (0x000a1974) popup_vtel_slider_window_g3

0x60f4,	// (0x000a1988) popup_vtel_slider_window_g4_ParamLimits

0x60f4,	// (0x000a1988) popup_vtel_slider_window_g4

0x6108,	// (0x000a199c) popup_vtel_slider_window_t1_ParamLimits

0x6108,	// (0x000a199c) popup_vtel_slider_window_t1

0x0efd,	// (0x0009c791) main_cl_pane

0x3dac,	// (0x0009f640) popup_imed_adjust2_window_ParamLimits

0xb663,	// (0x000a6ef7) bg_tb_trans_pane_cp05_ParamLimits

0xcf31,	// (0x000a87c5) popup_imed_adjust2_window_g1_ParamLimits

0xcf40,	// (0x000a87d4) popup_imed_adjust2_window_g2_ParamLimits

0xcf40,	// (0x000a87d4) popup_imed_adjust2_window_g2

0xcf4c,	// (0x000a87e0) popup_imed_adjust2_window_g3_ParamLimits

0xcf4c,	// (0x000a87e0) popup_imed_adjust2_window_g3

0x0002,

0xf6a1,	// (0x000aaf35) popup_imed_adjust2_window_g_ParamLimits

0xf6a1,	// (0x000aaf35) popup_imed_adjust2_window_g

0xcf58,	// (0x000a87ec) popup_imed_adjust2_window_t1_ParamLimits

0xcf70,	// (0x000a8804) slider_imed_adjust_pane_ParamLimits

0xcf84,	// (0x000a8818) slider_imed_adjust_pane_g1_ParamLimits

0xcf94,	// (0x000a8828) slider_imed_adjust_pane_g2_ParamLimits

0xcfa4,	// (0x000a8838) slider_imed_adjust_pane_g3_ParamLimits

0xcfb5,	// (0x000a8849) slider_imed_adjust_pane_g4_ParamLimits

0xf6a8,	// (0x000aaf3c) slider_imed_adjust_pane_g_ParamLimits

0x564e,	// (0x000a0ee2) aid_touch_area_cam4_ParamLimits

0x564e,	// (0x000a0ee2) aid_touch_area_cam4

0x565e,	// (0x000a0ef2) battery_pane_cp01

0x56e5,	// (0x000a0f79) main_camera4_pane_g6_ParamLimits

0x56e5,	// (0x000a0f79) main_camera4_pane_g6

0x5703,	// (0x000a0f97) main_camera4_pane_t2_ParamLimits

0x5703,	// (0x000a0f97) main_camera4_pane_t2

0x0001,

0xf77e,	// (0x000ab012) main_camera4_pane_t_ParamLimits

0xf77e,	// (0x000ab012) main_camera4_pane_t

0x5786,	// (0x000a101a) aid_touch_area_vid4_ParamLimits

0x5786,	// (0x000a101a) aid_touch_area_vid4

0x57c6,	// (0x000a105a) main_video4_pane_g5_ParamLimits

0x57c6,	// (0x000a105a) main_video4_pane_g5

0x57ec,	// (0x000a1080) vid4_progress_pane_ParamLimits

0x57ec,	// (0x000a1080) vid4_progress_pane

0xd466,	// (0x000a8cfa) main_cset_slider_pane_g18_ParamLimits

0xd466,	// (0x000a8cfa) main_cset_slider_pane_g18

0xd634,	// (0x000a8ec8) cell_cam4_burst_pane_g2_ParamLimits

0xd634,	// (0x000a8ec8) cell_cam4_burst_pane_g2

0x0001,

0xf8b8,	// (0x000ab14c) cell_cam4_burst_pane_g_ParamLimits

0xf8b8,	// (0x000ab14c) cell_cam4_burst_pane_g

0x66f3,	// (0x000a1f87) bg_cl_pane_ParamLimits

0x66f3,	// (0x000a1f87) bg_cl_pane

0x66ff,	// (0x000a1f93) cl_header_pane_ParamLimits

0x66ff,	// (0x000a1f93) cl_header_pane

0x670b,	// (0x000a1f9f) cl_listscroll_pane_ParamLimits

0x670b,	// (0x000a1f9f) cl_listscroll_pane

0xd7c5,	// (0x000a9059) bg_cl_pane_g1

0xd7cd,	// (0x000a9061) bg_cl_pane_g2

0xd7d5,	// (0x000a9069) bg_cl_pane_g3

0xd7dd,	// (0x000a9071) bg_cl_pane_g4

0xd7e5,	// (0x000a9079) bg_cl_pane_g5

0xd7ed,	// (0x000a9081) bg_cl_pane_g6

0xd7f5,	// (0x000a9089) bg_cl_pane_g7

0xd7fd,	// (0x000a9091) bg_cl_pane_g8

0xd805,	// (0x000a9099) bg_cl_pane_g9

0x0008,

0xf8f3,	// (0x000ab187) bg_cl_pane_g

0x6717,	// (0x000a1fab) aid_height_cl_leading_ParamLimits

0x6717,	// (0x000a1fab) aid_height_cl_leading

0x6723,	// (0x000a1fb7) aid_height_cl_text_ParamLimits

0x6723,	// (0x000a1fb7) aid_height_cl_text

0xa6ec,	// (0x000a5f80) bg_cl_header_pane_ParamLimits

0xa6ec,	// (0x000a5f80) bg_cl_header_pane

0x673b,	// (0x000a1fcf) cl_header_pane_g1_ParamLimits

0x673b,	// (0x000a1fcf) cl_header_pane_g1

0x6748,	// (0x000a1fdc) cl_header_pane_t1_ParamLimits

0x6748,	// (0x000a1fdc) cl_header_pane_t1

0xd80d,	// (0x000a90a1) cl_list_pane

0xd425,	// (0x000a8cb9) hc_scroll_pane_cp01

0xaba0,	// (0x000a6434) bg_cl_header_pane_g1

0xd2f5,	// (0x000a8b89) bg_cl_header_pane_g2

0xabc0,	// (0x000a6454) bg_cl_header_pane_g3

0xd305,	// (0x000a8b99) bg_cl_header_pane_g4

0xd2fd,	// (0x000a8b91) bg_cl_header_pane_g5

0xd54f,	// (0x000a8de3) bg_cl_header_pane_g6

0xd31d,	// (0x000a8bb1) bg_cl_header_pane_g7

0xd325,	// (0x000a8bb9) bg_cl_header_pane_g8

0xd315,	// (0x000a8ba9) bg_cl_header_pane_g9

0x0008,

0xf906,	// (0x000ab19a) bg_cl_header_pane_g

0x675a,	// (0x000a1fee) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x675a,	// (0x000a1fee) hc_cl_list_double_graphic_heading_pane

0x676a,	// (0x000a1ffe) hc_cl_list_single_graphic_pane_ParamLimits

0x676a,	// (0x000a1ffe) hc_cl_list_single_graphic_pane

0x677c,	// (0x000a2010) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x677c,	// (0x000a2010) hc_cl_list_single_graphic_pane_g1

0x6788,	// (0x000a201c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6788,	// (0x000a201c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf919,	// (0x000ab1ad) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf919,	// (0x000ab1ad) hc_cl_list_single_graphic_pane_g

0x679c,	// (0x000a2030) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x679c,	// (0x000a2030) hc_cl_list_single_graphic_pane_t1

0x677c,	// (0x000a2010) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x677c,	// (0x000a2010) hc_cl_list_double_graphic_heading_pane_g1

0x67b1,	// (0x000a2045) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x67b1,	// (0x000a2045) hc_cl_list_double_graphic_heading_pane_g2

0x67c5,	// (0x000a2059) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x67c5,	// (0x000a2059) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf91e,	// (0x000ab1b2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf91e,	// (0x000ab1b2) hc_cl_list_double_graphic_heading_pane_g

0x67d9,	// (0x000a206d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x67d9,	// (0x000a206d) hc_cl_list_double_graphic_heading_pane_t1

0x67ee,	// (0x000a2082) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x67ee,	// (0x000a2082) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf925,	// (0x000ab1b9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf925,	// (0x000ab1b9) hc_cl_list_double_graphic_heading_pane_t

0x680b,	// (0x000a209f) vid4_progress_pane_g1

0x681b,	// (0x000a20af) vid4_progress_pane_g2

0x682b,	// (0x000a20bf) vid4_progress_pane_g3

0x683d,	// (0x000a20d1) vid4_progress_pane_g4

0x0004,

0xf92a,	// (0x000ab1be) vid4_progress_pane_g

0x685b,	// (0x000a20ef) vid4_progress_pane_t1

0x6875,	// (0x000a2109) vid4_progress_pane_t2

0x0002,

0xf935,	// (0x000ab1c9) vid4_progress_pane_t

0x68a3,	// (0x000a2137) wait_bar_pane_cp07

0xc85b,	// (0x000a80ef) blid_firmament_pane_ParamLimits

0xc89e,	// (0x000a8132) popup_blid_sat_info2_window_g1

0xc8c2,	// (0x000a8156) popup_blid_sat_info2_window_t3

0xc8d0,	// (0x000a8164) popup_blid_sat_info2_window_t4

0xc8de,	// (0x000a8172) popup_blid_sat_info2_window_t5

0xc8ec,	// (0x000a8180) popup_blid_sat_info2_window_t6

0xc8fc,	// (0x000a8190) popup_blid_sat_info2_window_t7

0xc90a,	// (0x000a819e) popup_blid_sat_info2_window_t8

0xc918,	// (0x000a81ac) popup_blid_sat_info2_window_t9

0xc926,	// (0x000a81ba) popup_blid_sat_info2_window_t10

0xc9ed,	// (0x000a8281) aid_firma_cardinal_ParamLimits

0xca01,	// (0x000a8295) blid_firmament_pane_t1_ParamLimits

0xca18,	// (0x000a82ac) blid_firmament_pane_t2_ParamLimits

0xca2f,	// (0x000a82c3) blid_firmament_pane_t3_ParamLimits

0xca46,	// (0x000a82da) blid_firmament_pane_t4_ParamLimits

0x02af,	// (0x0009bb43) blid_firmament_pane_t_ParamLimits

0xca5d,	// (0x000a82f1) blid_sat_info_pane_ParamLimits

0x3d02,	// (0x0009f596) main_cam_set_pane_ParamLimits

0x4cbe,	// (0x000a0552) aid_size_cell_colour_35_ParamLimits

0x4cd8,	// (0x000a056c) aid_size_cell_colour_112_ParamLimits

0x4cef,	// (0x000a0583) aid_size_cell_effect_ParamLimits

0xa296,	// (0x000a5b2a) bg_tb_trans_pane_cp02_ParamLimits

0xb00c,	// (0x000a68a0) heading_imed_pane_ParamLimits

0x4d09,	// (0x000a059d) listscroll_imed_pane_ParamLimits

0xbd46,	// (0x000a75da) popup_call2_audio_first_window_g5_ParamLimits

0xbd46,	// (0x000a75da) popup_call2_audio_first_window_g5

0x532e,	// (0x000a0bc2) aid_size_touch_image3_arrow_left_ParamLimits

0x532e,	// (0x000a0bc2) aid_size_touch_image3_arrow_left

0x5344,	// (0x000a0bd8) aid_size_touch_image3_arrow_right_ParamLimits

0x5344,	// (0x000a0bd8) aid_size_touch_image3_arrow_right

0x688e,	// (0x000a2122) vid4_progress_pane_t3

0x4e84,	// (0x000a0718) main_hwr_training_symbol_option_pane_ParamLimits

0x4e84,	// (0x000a0718) main_hwr_training_symbol_option_pane

0xd159,	// (0x000a89ed) popup_hwr_training_preview_window_ParamLimits

0xd159,	// (0x000a89ed) popup_hwr_training_preview_window

0x4ee5,	// (0x000a0779) hwr_training_navi_pane_g5_ParamLimits

0x4ee5,	// (0x000a0779) hwr_training_navi_pane_g5

0xd2e3,	// (0x000a8b77) popup_char_count_window

0x0ee3,	// (0x0009c777) bg_popup_sub_pane_cp20_ParamLimits

0x61fb,	// (0x000a1a8f) list_vitu2_match_list_pane_ParamLimits

0x6207,	// (0x000a1a9b) vitu2_page_scroll_pane_ParamLimits

0x6207,	// (0x000a1a9b) vitu2_page_scroll_pane

0xd816,	// (0x000a90aa) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd816,	// (0x000a90aa) list_single_hwr_training_symbol_option_pane

0xd829,	// (0x000a90bd) list_single_hwr_training_symbol_option_pane_g1

0xd831,	// (0x000a90c5) list_single_hwr_training_symbol_option_pane_t1

0xd83f,	// (0x000a90d3) bg_button_pane_cp023

0xd848,	// (0x000a90dc) bg_button_pane_cp024

0xd87b,	// (0x000a910f) vitu2_page_scroll_pane_g1

0xd883,	// (0x000a9117) vitu2_page_scroll_pane_g2

0x0001,

0xf93c,	// (0x000ab1d0) vitu2_page_scroll_pane_g

0xd88b,	// (0x000a911f) vitu2_page_scroll_pane_t1

0xd77c,	// (0x000a9010) popup_char_count_window_g1

0xd89a,	// (0x000a912e) popup_char_count_window_g2

0xd773,	// (0x000a9007) popup_char_count_window_g3

0x0002,

0xf941,	// (0x000ab1d5) popup_char_count_window_g

0xd8a3,	// (0x000a9137) popup_char_count_window_t1

0x0efd,	// (0x0009c791) main_vded2_pane

0xcf1d,	// (0x000a87b1) aid_size_cell_imed_line

0xcf27,	// (0x000a87bb) grid_imed_line_width_pane

0x5860,	// (0x000a10f4) vid4_indicators_pane_g4

0xd8b1,	// (0x000a9145) cell_imed_line_width_pane_ParamLimits

0xd8b1,	// (0x000a9145) cell_imed_line_width_pane

0xd8c7,	// (0x000a915b) cell_imed_line_width_pane_g1

0xd8d0,	// (0x000a9164) cell_imed_line_width_pane_g2

0x0001,

0xf948,	// (0x000ab1dc) cell_imed_line_width_pane_g

0x68ca,	// (0x000a215e) main_vded2_pane_g1_ParamLimits

0x68ca,	// (0x000a215e) main_vded2_pane_g1

0x68d9,	// (0x000a216d) main_vded2_pane_g2_ParamLimits

0x68d9,	// (0x000a216d) main_vded2_pane_g2

0x0001,

0xf94d,	// (0x000ab1e1) main_vded2_pane_g_ParamLimits

0xf94d,	// (0x000ab1e1) main_vded2_pane_g

0x68e7,	// (0x000a217b) vded2_slider_pane_ParamLimits

0x68e7,	// (0x000a217b) vded2_slider_pane

0x68f4,	// (0x000a2188) aid_size_touch_vded2_end

0x68fe,	// (0x000a2192) aid_size_touch_vded2_playhead

0xd8d8,	// (0x000a916c) aid_size_touch_vded2_start

0xd8e0,	// (0x000a9174) vded2_slider_bg_pane

0xd8e9,	// (0x000a917d) vded2_slider_pane_g1

0xd8f2,	// (0x000a9186) vded2_slider_pane_g2

0x6906,	// (0x000a219a) vded2_slider_pane_g3

0x0002,

0xf952,	// (0x000ab1e6) vded2_slider_pane_g

0xd78f,	// (0x000a9023) vded2_slider_bg_pane_g1

0xd798,	// (0x000a902c) vded2_slider_bg_pane_g2

0xd7a1,	// (0x000a9035) vded2_slider_bg_pane_g3

0x0002,

0xf665,	// (0x000aaef9) vded2_slider_bg_pane_g

0x3587,	// (0x0009ee1b) aid_postcard_touch_down_pane_ParamLimits

0x3587,	// (0x0009ee1b) aid_postcard_touch_down_pane

0x3597,	// (0x0009ee2b) aid_postcard_touch_up_pane_ParamLimits

0x3597,	// (0x0009ee2b) aid_postcard_touch_up_pane

0x0efd,	// (0x0009c791) main_blid2_pane

0x3d2b,	// (0x0009f5bf) popup_blid2_search_window

0x9c07,	// (0x000a549b) blid2_gps_pane

0x9c07,	// (0x000a549b) blid2_navig_pane

0x9c07,	// (0x000a549b) blid2_search_pane

0x9c07,	// (0x000a549b) blid2_tripm_pane

0x690f,	// (0x000a21a3) blid2_search_pane_g1_ParamLimits

0x690f,	// (0x000a21a3) blid2_search_pane_g1

0x691b,	// (0x000a21af) blid2_search_pane_t1_ParamLimits

0x691b,	// (0x000a21af) blid2_search_pane_t1

0x692d,	// (0x000a21c1) aid_size_cell_blid2_gps_ParamLimits

0x692d,	// (0x000a21c1) aid_size_cell_blid2_gps

0x693d,	// (0x000a21d1) blid2_gps_pane_g1_ParamLimits

0x693d,	// (0x000a21d1) blid2_gps_pane_g1

0x6949,	// (0x000a21dd) grid_blid2_satellite_pane_ParamLimits

0x6949,	// (0x000a21dd) grid_blid2_satellite_pane

0x6957,	// (0x000a21eb) blid2_navig_pane_g1_ParamLimits

0x6957,	// (0x000a21eb) blid2_navig_pane_g1

0x6963,	// (0x000a21f7) blid2_navig_pane_t1_ParamLimits

0x6963,	// (0x000a21f7) blid2_navig_pane_t1

0x6975,	// (0x000a2209) blid2_navig_pane_t2_ParamLimits

0x6975,	// (0x000a2209) blid2_navig_pane_t2

0x0001,

0xf959,	// (0x000ab1ed) blid2_navig_pane_t_ParamLimits

0xf959,	// (0x000ab1ed) blid2_navig_pane_t

0x6987,	// (0x000a221b) blid2_navig_ring_pane_ParamLimits

0x6987,	// (0x000a221b) blid2_navig_ring_pane

0x6997,	// (0x000a222b) blid2_speed_pane_ParamLimits

0x6997,	// (0x000a222b) blid2_speed_pane

0x69a3,	// (0x000a2237) blid2_tripm_pane_g1_ParamLimits

0x69a3,	// (0x000a2237) blid2_tripm_pane_g1

0x69b3,	// (0x000a2247) blid2_tripm_pane_g2_ParamLimits

0x69b3,	// (0x000a2247) blid2_tripm_pane_g2

0x69bf,	// (0x000a2253) blid2_tripm_pane_g3_ParamLimits

0x69bf,	// (0x000a2253) blid2_tripm_pane_g3

0x69cb,	// (0x000a225f) blid2_tripm_pane_g4_ParamLimits

0x69cb,	// (0x000a225f) blid2_tripm_pane_g4

0x69d7,	// (0x000a226b) blid2_tripm_pane_g5_ParamLimits

0x69d7,	// (0x000a226b) blid2_tripm_pane_g5

0x0005,

0xf95e,	// (0x000ab1f2) blid2_tripm_pane_g_ParamLimits

0xf95e,	// (0x000ab1f2) blid2_tripm_pane_g

0x69f3,	// (0x000a2287) blid2_tripm_pane_t1_ParamLimits

0x69f3,	// (0x000a2287) blid2_tripm_pane_t1

0x6a05,	// (0x000a2299) blid2_tripm_pane_t2_ParamLimits

0x6a05,	// (0x000a2299) blid2_tripm_pane_t2

0x6a17,	// (0x000a22ab) blid2_tripm_pane_t3_ParamLimits

0x6a17,	// (0x000a22ab) blid2_tripm_pane_t3

0x0003,

0xf96b,	// (0x000ab1ff) blid2_tripm_pane_t_ParamLimits

0xf96b,	// (0x000ab1ff) blid2_tripm_pane_t

0x6a49,	// (0x000a22dd) cell_blid2_satellite_pane_ParamLimits

0x6a49,	// (0x000a22dd) cell_blid2_satellite_pane

0x6a67,	// (0x000a22fb) cell_blid2_satellite_pane_g1

0xd8fa,	// (0x000a918e) cell_blid2_satellite_pane_t1

0xa99c,	// (0x000a6230) blid2_speed_pane_g1

0xd908,	// (0x000a919c) blid2_speed_pane_t1

0xd916,	// (0x000a91aa) blid2_speed_pane_t2

0x0001,

0xf974,	// (0x000ab208) blid2_speed_pane_t

0xa99c,	// (0x000a6230) blid2_navig_ring_pane_g1

0x6a70,	// (0x000a2304) blid2_navig_ring_pane_g2

0x6a78,	// (0x000a230c) blid2_navig_ring_pane_g3

0x6a80,	// (0x000a2314) blid2_navig_ring_pane_g4

0x6a88,	// (0x000a231c) blid2_navig_ring_pane_g5

0x0004,

0xf979,	// (0x000ab20d) blid2_navig_ring_pane_g

0x9c07,	// (0x000a549b) bg_popup_window_pane_cp011

0xd924,	// (0x000a91b8) popup_blid2_search_window_g1

0xd92c,	// (0x000a91c0) popup_blid2_search_window_t1

0xd93a,	// (0x000a91ce) popup_blid2_search_window_t2

0x0001,

0xf984,	// (0x000ab218) popup_blid2_search_window_t

0xaaaf,	// (0x000a6343) main_browser_pane_g1

0xa76c,	// (0x000a6000) main_browser_pane_ParamLimits

0x3d02,	// (0x0009f596) bg_button_pane_cp011_ParamLimits

0x5ad4,	// (0x000a1368) cell_vitu2_function_pane_g1_ParamLimits

0xb663,	// (0x000a6ef7) bg_popup_sub_pane_cp22_ParamLimits

0x63a6,	// (0x000a1c3a) input_focus_pane_cp08_ParamLimits

0x63c2,	// (0x000a1c56) popup_vitu2_query_button_pane_ParamLimits

0x63c2,	// (0x000a1c56) popup_vitu2_query_button_pane

0x63d1,	// (0x000a1c65) popup_vitu2_query_input_button_pane

0xd58a,	// (0x000a8e1e) popup_vitu2_query_window_g1_ParamLimits

0x63db,	// (0x000a1c6f) popup_vitu2_query_window_g2_ParamLimits

0xf89b,	// (0x000ab12f) popup_vitu2_query_window_g_ParamLimits

0x9c07,	// (0x000a549b) bg_button_pane_cp026

0x6a90,	// (0x000a2324) popup_vitu2_query_input_button_pane_g1

0x9c07,	// (0x000a549b) bg_button_pane_cp025

0xd948,	// (0x000a91dc) popup_vitu2_query_button_pane_t1

0x425c,	// (0x0009faf0) main_mp3_pane_t6

0x426c,	// (0x0009fb00) popup_slider_window_cp01

0x573b,	// (0x000a0fcf) cam4_battery_pane

0x5819,	// (0x000a10ad) cam4_battery_pane_cp02

0x6803,	// (0x000a2097) cam4_battery_pane_cp01

0x6803,	// (0x000a2097) cam4_battery_pane_cp03

0xd785,	// (0x000a9019) cam4_battery_pane_g1

0xa99c,	// (0x000a6230) cam4_battery_pane_g2

0x0001,

0xf989,	// (0x000ab21d) cam4_battery_pane_g

0xc934,	// (0x000a81c8) popup_blid_sat_info2_window_t11

0x3047,	// (0x0009e8db) aid_size_touch_mv_arrow_left_ParamLimits

0x3072,	// (0x0009e906) aid_size_touch_mv_arrow_right_ParamLimits

0xb223,	// (0x000a6ab7) navi_pane_g1_ParamLimits

0x30b1,	// (0x0009e945) navi_pane_g2_ParamLimits

0x30df,	// (0x0009e973) navi_pane_g3_ParamLimits

0xf339,	// (0x000aabcd) navi_pane_g_ParamLimits

0x3139,	// (0x0009e9cd) navi_pane_mv_t1_ParamLimits

0x4d15,	// (0x000a05a9) grid_imed_effect_pane_ParamLimits

0x1bdb,	// (0x0009d46f) aid_placing_vt_slider_lsc

0xa9eb,	// (0x000a627f) aid_placing_vt_slider_prt

0xa296,	// (0x000a5b2a) bg_tb_trans_pane_cp01_ParamLimits

0xcb9c,	// (0x000a8430) popup_image_details_window_g1_ParamLimits

0xcbaf,	// (0x000a8443) popup_image_details_window_g2_ParamLimits

0xcbc4,	// (0x000a8458) popup_image_details_window_g3_ParamLimits

0xcbc4,	// (0x000a8458) popup_image_details_window_g3

0xf5da,	// (0x000aae6e) popup_image_details_window_g_ParamLimits

0xcbd8,	// (0x000a846c) popup_image_details_window_t1_ParamLimits

0xcbea,	// (0x000a847e) popup_image_details_window_t2_ParamLimits

0xcc03,	// (0x000a8497) popup_image_details_window_t3_ParamLimits

0xcc17,	// (0x000a84ab) popup_image_details_window_t4_ParamLimits

0xcc32,	// (0x000a84c6) popup_image_details_window_t5_ParamLimits

0xf5e1,	// (0x000aae75) popup_image_details_window_t_ParamLimits

0x672f,	// (0x000a1fc3) cl_header_name_pane_ParamLimits

0x672f,	// (0x000a1fc3) cl_header_name_pane

0x6a98,	// (0x000a232c) cl_header_name_pane_t1_ParamLimits

0x6a98,	// (0x000a232c) cl_header_name_pane_t1

0x6aaf,	// (0x000a2343) cl_header_name_pane_t2_ParamLimits

0x6aaf,	// (0x000a2343) cl_header_name_pane_t2

0x6ad9,	// (0x000a236d) cl_header_name_pane_t3_ParamLimits

0x6ad9,	// (0x000a236d) cl_header_name_pane_t3

0x0002,

0xf98e,	// (0x000ab222) cl_header_name_pane_t_ParamLimits

0xf98e,	// (0x000ab222) cl_header_name_pane_t

0x310a,	// (0x0009e99e) navi_pane_mv_g2_ParamLimits

0xd2cb,	// (0x000a8b5f) field_vitu2_entry_pane_g1_ParamLimits

0xd2d7,	// (0x000a8b6b) field_vitu2_entry_pane_g2_ParamLimits

0xb685,	// (0x000a6f19) field_vitu2_entry_pane_g3_ParamLimits

0xb685,	// (0x000a6f19) field_vitu2_entry_pane_g3

0xf7b0,	// (0x000ab044) field_vitu2_entry_pane_g_ParamLimits

0x5a62,	// (0x000a12f6) cell_vitu2_itu_pane_g1_ParamLimits

0x5a7a,	// (0x000a130e) cell_vitu2_itu_pane_g2_ParamLimits

0x5a7a,	// (0x000a130e) cell_vitu2_itu_pane_g2

0x0001,

0xf7bc,	// (0x000ab050) cell_vitu2_itu_pane_g_ParamLimits

0xf7bc,	// (0x000ab050) cell_vitu2_itu_pane_g

0x3d02,	// (0x0009f596) bg_vkb2_func_pane_cp05_ParamLimits

0x3d02,	// (0x0009f596) bg_vkb2_func_pane_cp05

0x3d02,	// (0x0009f596) bg_vkb2_func_pane_cp03

0x3d02,	// (0x0009f596) bg_vkb2_func_pane_cp04

0x3d02,	// (0x0009f596) bg_vkb2_func_pane_cp10_ParamLimits

0x3d02,	// (0x0009f596) bg_vkb2_func_pane_cp10

0x66d0,	// (0x000a1f64) bg_vkb2_func_pane_cp08

0x638e,	// (0x000a1c22) bg_vkb2_func_pane_cp06

0x66b3,	// (0x000a1f47) bg_vkb2_func_pane_cp07

0xd851,	// (0x000a90e5) bg_vkb2_func_pane_cp11_ParamLimits

0xd851,	// (0x000a90e5) bg_vkb2_func_pane_cp11

0xd866,	// (0x000a90fa) bg_vkb2_func_pane_cp12_ParamLimits

0xd866,	// (0x000a90fa) bg_vkb2_func_pane_cp12

0x9c07,	// (0x000a549b) bg_vkb2_func_pane_cp09

0xd2f5,	// (0x000a8b89) bg_vkb2_func_pane_g1

0xabc0,	// (0x000a6454) bg_vkb2_func_pane_g2

0xd2fd,	// (0x000a8b91) bg_vkb2_func_pane_g3

0xd305,	// (0x000a8b99) bg_vkb2_func_pane_g4

0xd54f,	// (0x000a8de3) bg_vkb2_func_pane_g5

0xd31d,	// (0x000a8bb1) bg_vkb2_func_pane_g6

0xd325,	// (0x000a8bb9) bg_vkb2_func_pane_g7

0xd315,	// (0x000a8ba9) bg_vkb2_func_pane_g8

0xaba0,	// (0x000a6434) bg_vkb2_func_pane_g9

0x0008,

0xf995,	// (0x000ab229) bg_vkb2_func_pane_g

0x69e5,	// (0x000a2279) blid2_tripm_pane_g6_ParamLimits

0x69e5,	// (0x000a2279) blid2_tripm_pane_g6

0xd217,	// (0x000a8aab) mp4_progress_pane_g1

0x6a3d,	// (0x000a22d1) blid2_tripm_values_pane_ParamLimits

0x6a3d,	// (0x000a22d1) blid2_tripm_values_pane

0x6afe,	// (0x000a2392) blid2_tripm_values_pane_t1

0x6b0c,	// (0x000a23a0) blid2_tripm_values_pane_t2

0xd956,	// (0x000a91ea) blid2_tripm_values_pane_t3

0x6b1a,	// (0x000a23ae) blid2_tripm_values_pane_t4

0x6b28,	// (0x000a23bc) blid2_tripm_values_pane_t5

0x6b36,	// (0x000a23ca) blid2_tripm_values_pane_t6

0xd964,	// (0x000a91f8) blid2_tripm_values_pane_t7

0x6b44,	// (0x000a23d8) blid2_tripm_values_pane_t8

0x6b52,	// (0x000a23e6) blid2_tripm_values_pane_t9

0x0008,

0xf9a8,	// (0x000ab23c) blid2_tripm_values_pane_t

0x1c19,	// (0x0009d4ad) call_video_pane_t1_ParamLimits

0x1c36,	// (0x0009d4ca) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x000aaa76) call_video_pane_t_ParamLimits

0x3441,	// (0x0009ecd5) msg_header_pane_g1_ParamLimits

0xb437,	// (0x000a6ccb) msg_header_pane_g2_ParamLimits

0xb437,	// (0x000a6ccb) msg_header_pane_g2

0x0001,

0xf3d0,	// (0x000aac64) msg_header_pane_g_ParamLimits

0xf3d0,	// (0x000aac64) msg_header_pane_g

0xa76c,	// (0x000a6000) main_clock2_pane_ParamLimits

0x4a8e,	// (0x000a0322) grid_clock2_toolbar_pane_ParamLimits

0x4a8e,	// (0x000a0322) grid_clock2_toolbar_pane

0x4a8e,	// (0x000a0322) listscroll_clock2_pane_ParamLimits

0x4a8e,	// (0x000a0322) listscroll_clock2_pane

0x4b3d,	// (0x000a03d1) main_clock2_pane_t3_ParamLimits

0x4b3d,	// (0x000a03d1) main_clock2_pane_t3

0x4b4f,	// (0x000a03e3) main_clock2_pane_t4_ParamLimits

0x4b4f,	// (0x000a03e3) main_clock2_pane_t4

0xd972,	// (0x000a9206) cell_clock2_toolbar_pane

0xd97a,	// (0x000a920e) cell_clock2_toolbar_pane_cp01

0xd97a,	// (0x000a920e) cell_clock2_toolbar_pane_cp02

0xd982,	// (0x000a9216) cell_clock2_toolbar_pane_cp03

0xd98a,	// (0x000a921e) list_clock2_pane

0xb189,	// (0x000a6a1d) scroll_pane_cp10

0xd992,	// (0x000a9226) list_single_clock2_pane_ParamLimits

0xd992,	// (0x000a9226) list_single_clock2_pane

0xa90a,	// (0x000a619e) list_highlight_pane_cp08

0xd99f,	// (0x000a9233) list_single_clock2_pane_t1

0xd9ad,	// (0x000a9241) list_single_clock2_pane_t2

0x0001,

0x071e,	// (0x0009bfb2) list_single_clock2_pane_t

0x9c07,	// (0x000a549b) bg_button_pane_cp10

0xd9bb,	// (0x000a924f) cell_clock2_toolbar_pane_g1

0x34e9,	// (0x0009ed7d) aid_main_viewer_pane_g1_ParamLimits

0x34e9,	// (0x0009ed7d) aid_main_viewer_pane_g1

0x34f5,	// (0x0009ed89) aid_main_viewer_pane_g2_ParamLimits

0x34f5,	// (0x0009ed89) aid_main_viewer_pane_g2

0x3501,	// (0x0009ed95) aid_main_viewer_pane_g3_ParamLimits

0x3501,	// (0x0009ed95) aid_main_viewer_pane_g3

0x3512,	// (0x0009eda6) aid_main_viewer_pane_g4_ParamLimits

0x3512,	// (0x0009eda6) aid_main_viewer_pane_g4

0x0003,

0xf3e1,	// (0x000aac75) aid_main_viewer_pane_g_ParamLimits

0xf3e1,	// (0x000aac75) aid_main_viewer_pane_g

0x3ce3,	// (0x0009f577) main_calc_pane_ParamLimits

0x3d10,	// (0x0009f5a4) main_dialer2_pane_ParamLimits

0x0efd,	// (0x0009c791) main_cam6_pane

0x0efd,	// (0x0009c791) main_vid6_pane

0x4a9a,	// (0x000a032e) listscroll_gen_pane_cp06_ParamLimits

0x4a9a,	// (0x000a032e) listscroll_gen_pane_cp06

0x4b61,	// (0x000a03f5) main_clock2_pane_t5_ParamLimits

0x4b61,	// (0x000a03f5) main_clock2_pane_t5

0x4bae,	// (0x000a0442) aid_call2_pane_cp10_ParamLimits

0x4bc0,	// (0x000a0454) aid_call_pane_cp10_ParamLimits

0xb1f8,	// (0x000a6a8c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1f8,	// (0x000a6a8c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4bd2,	// (0x000a0466) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4bd2,	// (0x000a0466) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1f8,	// (0x000a6a8c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf696,	// (0x000aaf2a) popup_clock_analogue_window_cp10_g_ParamLimits

0x4be8,	// (0x000a047c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x52db,	// (0x000a0b6f) cell_dialer2_keypad_pane_g2_ParamLimits

0x52db,	// (0x000a0b6f) cell_dialer2_keypad_pane_g2

0x0001,

0xf74f,	// (0x000aafe3) cell_dialer2_keypad_pane_g_ParamLimits

0xf74f,	// (0x000aafe3) cell_dialer2_keypad_pane_g

0x52f7,	// (0x000a0b8b) cell_dialer2_keypad_pane_t1

0x5da8,	// (0x000a163c) main_cset_text2_pane_ParamLimits

0x5da8,	// (0x000a163c) main_cset_text2_pane

0xd7b9,	// (0x000a904d) area_vitu2_query_pane_g1_ParamLimits

0x6652,	// (0x000a1ee6) area_vitu2_query_pane_g2_ParamLimits

0xf8df,	// (0x000ab173) area_vitu2_query_pane_g_ParamLimits

0xa368,	// (0x000a5bfc) area_vitu2_query_pane_t7_ParamLimits

0xa368,	// (0x000a5bfc) area_vitu2_query_pane_t7

0x638e,	// (0x000a1c22) bg_button_pane_cp018_ParamLimits

0x66b3,	// (0x000a1f47) bg_button_pane_cp021_ParamLimits

0x66bf,	// (0x000a1f53) bg_button_pane_cp022_ParamLimits

0x66d0,	// (0x000a1f64) bg_vkb2_func_pane_cp08_ParamLimits

0x638e,	// (0x000a1c22) bg_vkb2_func_pane_cp06_ParamLimits

0x66b3,	// (0x000a1f47) bg_vkb2_func_pane_cp07_ParamLimits

0x66e2,	// (0x000a1f76) input_focus_pane_cp09_ParamLimits

0x6b60,	// (0x000a23f4) cam6_autofocus_pane_ParamLimits

0x6b60,	// (0x000a23f4) cam6_autofocus_pane

0x6b82,	// (0x000a2416) cam6_image_uncrop_pane_ParamLimits

0x6b82,	// (0x000a2416) cam6_image_uncrop_pane

0x6bb8,	// (0x000a244c) cam6_indi_pane_ParamLimits

0x6bb8,	// (0x000a244c) cam6_indi_pane

0x6bd2,	// (0x000a2466) cam6_mode_pane_ParamLimits

0x6bd2,	// (0x000a2466) cam6_mode_pane

0x6be6,	// (0x000a247a) cam6_timer_pane_ParamLimits

0x6be6,	// (0x000a247a) cam6_timer_pane

0x6bfa,	// (0x000a248e) cam6_zoom_pane_ParamLimits

0x6bfa,	// (0x000a248e) cam6_zoom_pane

0x6c16,	// (0x000a24aa) cam6_mode_pane_g1_ParamLimits

0x6c16,	// (0x000a24aa) cam6_mode_pane_g1

0x6c22,	// (0x000a24b6) cam6_mode_pane_g2_ParamLimits

0x6c22,	// (0x000a24b6) cam6_mode_pane_g2

0x6c2e,	// (0x000a24c2) cam6_mode_pane_g3_ParamLimits

0x6c2e,	// (0x000a24c2) cam6_mode_pane_g3

0x6c3a,	// (0x000a24ce) cam6_mode_pane_g4_ParamLimits

0x6c3a,	// (0x000a24ce) cam6_mode_pane_g4

0x0003,

0xf9bb,	// (0x000ab24f) cam6_mode_pane_g_ParamLimits

0xf9bb,	// (0x000ab24f) cam6_mode_pane_g

0xcdb2,	// (0x000a8646) bg_tb_trans_pane_cp08_ParamLimits

0xcdb2,	// (0x000a8646) bg_tb_trans_pane_cp08

0xd9c3,	// (0x000a9257) cam6_battery_pane_ParamLimits

0xd9c3,	// (0x000a9257) cam6_battery_pane

0xd9d9,	// (0x000a926d) cam6_indi_pane_g1_ParamLimits

0xd9d9,	// (0x000a926d) cam6_indi_pane_g1

0xd9eb,	// (0x000a927f) cam6_indi_pane_g2_ParamLimits

0xd9eb,	// (0x000a927f) cam6_indi_pane_g2

0xd9fd,	// (0x000a9291) cam6_indi_pane_g3_ParamLimits

0xd9fd,	// (0x000a9291) cam6_indi_pane_g3

0x0002,

0x072c,	// (0x0009bfc0) cam6_indi_pane_g_ParamLimits

0x072c,	// (0x0009bfc0) cam6_indi_pane_g

0xda0f,	// (0x000a92a3) cam6_indi_pane_t1_ParamLimits

0xda0f,	// (0x000a92a3) cam6_indi_pane_t1

0x589d,	// (0x000a1131) cam6_autofocus_pane_g1

0x5895,	// (0x000a1129) cam6_autofocus_pane_g2

0x58ad,	// (0x000a1141) cam6_autofocus_pane_g3

0x58a5,	// (0x000a1139) cam6_autofocus_pane_g4

0x0003,

0xf9c4,	// (0x000ab258) cam6_autofocus_pane_g

0xda35,	// (0x000a92c9) cam6_timer_pane_g1

0xda3d,	// (0x000a92d1) cam6_timer_pane_t1

0xda4b,	// (0x000a92df) cam6_zoom_cont_pane

0xda53,	// (0x000a92e7) cam6_zoom_pane_g1

0xda5c,	// (0x000a92f0) cam6_zoom_pane_g2

0x6c46,	// (0x000a24da) cam6_zoom_pane_g3

0x0002,

0xf9cd,	// (0x000ab261) cam6_zoom_pane_g

0xa99c,	// (0x000a6230) cam6_battery_pane_g1

0xa99c,	// (0x000a6230) cam6_battery_pane_g2

0x0001,

0x0027,	// (0x0009b8bb) cam6_battery_pane_g

0xda53,	// (0x000a92e7) cam6_zoom_cont_pane_g1

0xda5c,	// (0x000a92f0) cam6_zoom_cont_pane_g2

0xda65,	// (0x000a92f9) cam6_zoom_cont_pane_g3

0x0002,

0x0743,	// (0x0009bfd7) cam6_zoom_cont_pane_g

0x6c64,	// (0x000a24f8) cam6_mode_pane_cp_ParamLimits

0x6c64,	// (0x000a24f8) cam6_mode_pane_cp

0x6c78,	// (0x000a250c) cam6_zoom_pane_cp_ParamLimits

0x6c78,	// (0x000a250c) cam6_zoom_pane_cp

0x6c94,	// (0x000a2528) vid6_image_uncrop_cif_pane_ParamLimits

0x6c94,	// (0x000a2528) vid6_image_uncrop_cif_pane

0x6cc0,	// (0x000a2554) vid6_image_uncrop_nhd_pane_ParamLimits

0x6cc0,	// (0x000a2554) vid6_image_uncrop_nhd_pane

0x6cdf,	// (0x000a2573) vid6_image_uncrop_vga_pane_ParamLimits

0x6cdf,	// (0x000a2573) vid6_image_uncrop_vga_pane

0x6cfe,	// (0x000a2592) vid6_image_uncrop_wvga_pane_ParamLimits

0x6cfe,	// (0x000a2592) vid6_image_uncrop_wvga_pane

0x6d1d,	// (0x000a25b1) vid6_indi_pane_ParamLimits

0x6d1d,	// (0x000a25b1) vid6_indi_pane

0xcdb2,	// (0x000a8646) bg_tb_trans_pane_cp09_ParamLimits

0xcdb2,	// (0x000a8646) bg_tb_trans_pane_cp09

0xda7d,	// (0x000a9311) cam6_battery_pane_cp_ParamLimits

0xda7d,	// (0x000a9311) cam6_battery_pane_cp

0xda89,	// (0x000a931d) vid6_indi_pane_g1_ParamLimits

0xda89,	// (0x000a931d) vid6_indi_pane_g1

0xda9b,	// (0x000a932f) vid6_indi_pane_g2_ParamLimits

0xda9b,	// (0x000a932f) vid6_indi_pane_g2

0xdabb,	// (0x000a934f) vid6_indi_pane_g3_ParamLimits

0xdabb,	// (0x000a934f) vid6_indi_pane_g3

0xdad2,	// (0x000a9366) vid6_indi_pane_g4_ParamLimits

0xdad2,	// (0x000a9366) vid6_indi_pane_g4

0xdae9,	// (0x000a937d) vid6_indi_pane_g5_ParamLimits

0xdae9,	// (0x000a937d) vid6_indi_pane_g5

0x0004,

0xf9d4,	// (0x000ab268) vid6_indi_pane_g_ParamLimits

0xf9d4,	// (0x000ab268) vid6_indi_pane_g

0xdb03,	// (0x000a9397) vid6_indi_pane_t1_ParamLimits

0xdb03,	// (0x000a9397) vid6_indi_pane_t1

0xdb19,	// (0x000a93ad) vid6_indi_pane_t2_ParamLimits

0xdb19,	// (0x000a93ad) vid6_indi_pane_t2

0xdb41,	// (0x000a93d5) vid6_indi_pane_t3_ParamLimits

0xdb41,	// (0x000a93d5) vid6_indi_pane_t3

0xdb69,	// (0x000a93fd) vid6_indi_pane_t4_ParamLimits

0xdb69,	// (0x000a93fd) vid6_indi_pane_t4

0x0003,

0xf9df,	// (0x000ab273) vid6_indi_pane_t_ParamLimits

0xf9df,	// (0x000ab273) vid6_indi_pane_t

0xdb8d,	// (0x000a9421) wait_bar_pane_cp08

0x6d42,	// (0x000a25d6) main_cset_text2_pane_t1_ParamLimits

0x6d42,	// (0x000a25d6) main_cset_text2_pane_t1

0x6c4f,	// (0x000a24e3) listscroll_gen_pane_cp06_t1_ParamLimits

0x6c4f,	// (0x000a24e3) listscroll_gen_pane_cp06_t1

0x0efd,	// (0x0009c791) main_cam6_set_pane

0xdaad,	// (0x000a9341) bg_tb_trans_pane_cp06_ParamLimits

0x5743,	// (0x000a0fd7) cam4_indicators_pane_g1_ParamLimits

0x5754,	// (0x000a0fe8) cam4_indicators_pane_g2_ParamLimits

0xf78c,	// (0x000ab020) cam4_indicators_pane_g_ParamLimits

0x576c,	// (0x000a1000) cam4_indicators_pane_t1_ParamLimits

0x3d02,	// (0x0009f596) bg_tb_trans_pane_cp07_ParamLimits

0x5823,	// (0x000a10b7) vid4_indicators_pane_g1_ParamLimits

0x5839,	// (0x000a10cd) vid4_indicators_pane_g2_ParamLimits

0x584d,	// (0x000a10e1) vid4_indicators_pane_g3_ParamLimits

0x5860,	// (0x000a10f4) vid4_indicators_pane_g4_ParamLimits

0xf79e,	// (0x000ab032) vid4_indicators_pane_g_ParamLimits

0x587e,	// (0x000a1112) vid4_indicators_pane_t1_ParamLimits

0x680b,	// (0x000a209f) vid4_progress_pane_g1_ParamLimits

0x681b,	// (0x000a20af) vid4_progress_pane_g2_ParamLimits

0x682b,	// (0x000a20bf) vid4_progress_pane_g3_ParamLimits

0x683d,	// (0x000a20d1) vid4_progress_pane_g4_ParamLimits

0xf92a,	// (0x000ab1be) vid4_progress_pane_g_ParamLimits

0x685b,	// (0x000a20ef) vid4_progress_pane_t1_ParamLimits

0x6875,	// (0x000a2109) vid4_progress_pane_t2_ParamLimits

0x688e,	// (0x000a2122) vid4_progress_pane_t3_ParamLimits

0xf935,	// (0x000ab1c9) vid4_progress_pane_t_ParamLimits

0x68a3,	// (0x000a2137) wait_bar_pane_cp07_ParamLimits

0x6d69,	// (0x000a25fd) main_cam6_set_pane_g2_ParamLimits

0x6d69,	// (0x000a25fd) main_cam6_set_pane_g2

0x6d75,	// (0x000a2609) main_cset6_listscroll_pane_ParamLimits

0x6d75,	// (0x000a2609) main_cset6_listscroll_pane

0x6da2,	// (0x000a2636) main_cset6_slider_pane_ParamLimits

0x6da2,	// (0x000a2636) main_cset6_slider_pane

0x6dae,	// (0x000a2642) main_cset6_text2_pane_ParamLimits

0x6dae,	// (0x000a2642) main_cset6_text2_pane

0xdb9c,	// (0x000a9430) main_cset6_text_pane

0xdba4,	// (0x000a9438) main_cset_list_pane_copy1_ParamLimits

0xdba4,	// (0x000a9438) main_cset_list_pane_copy1

0xdbb4,	// (0x000a9448) scroll_pane_cp028_copy1

0x6dc1,	// (0x000a2655) cset_list_set_pane_copy1

0x6dd1,	// (0x000a2665) aid_position_infowindow_above_copy1

0x6dd9,	// (0x000a266d) aid_position_infowindow_below_copy1

0x6de1,	// (0x000a2675) cset_list_set_pane_g1_copy1

0x6de9,	// (0x000a267d) cset_list_set_pane_g3_copy1_ParamLimits

0x6de9,	// (0x000a267d) cset_list_set_pane_g3_copy1

0x6df8,	// (0x000a268c) cset_list_set_pane_t1_copy1_ParamLimits

0x6df8,	// (0x000a268c) cset_list_set_pane_t1_copy1

0xa296,	// (0x000a5b2a) list_highlight_pane_cp021_copy1_ParamLimits

0xa296,	// (0x000a5b2a) list_highlight_pane_cp021_copy1

0xdbbd,	// (0x000a9451) cset6_slider_pane_ParamLimits

0xdbbd,	// (0x000a9451) cset6_slider_pane

0xdbe9,	// (0x000a947d) main_cset6_slider_pane_g1_ParamLimits

0xdbe9,	// (0x000a947d) main_cset6_slider_pane_g1

0x6e0d,	// (0x000a26a1) main_cset6_slider_pane_g2_ParamLimits

0x6e0d,	// (0x000a26a1) main_cset6_slider_pane_g2

0xdc11,	// (0x000a94a5) main_cset6_slider_pane_g3_ParamLimits

0xdc11,	// (0x000a94a5) main_cset6_slider_pane_g3

0x6e35,	// (0x000a26c9) main_cset6_slider_pane_g4_ParamLimits

0x6e35,	// (0x000a26c9) main_cset6_slider_pane_g4

0x6e41,	// (0x000a26d5) main_cset6_slider_pane_g5_ParamLimits

0x6e41,	// (0x000a26d5) main_cset6_slider_pane_g5

0xd44e,	// (0x000a8ce2) main_cset6_slider_pane_g7_ParamLimits

0xd44e,	// (0x000a8ce2) main_cset6_slider_pane_g7

0xd45a,	// (0x000a8cee) main_cset6_slider_pane_g8_ParamLimits

0xd45a,	// (0x000a8cee) main_cset6_slider_pane_g8

0x6e4d,	// (0x000a26e1) main_cset6_slider_pane_g9_ParamLimits

0x6e4d,	// (0x000a26e1) main_cset6_slider_pane_g9

0x6e59,	// (0x000a26ed) main_cset6_slider_pane_g10_ParamLimits

0x6e59,	// (0x000a26ed) main_cset6_slider_pane_g10

0x6e65,	// (0x000a26f9) main_cset6_slider_pane_g11_ParamLimits

0x6e65,	// (0x000a26f9) main_cset6_slider_pane_g11

0x6e71,	// (0x000a2705) main_cset6_slider_pane_g12_ParamLimits

0x6e71,	// (0x000a2705) main_cset6_slider_pane_g12

0x6e7d,	// (0x000a2711) main_cset6_slider_pane_g13_ParamLimits

0x6e7d,	// (0x000a2711) main_cset6_slider_pane_g13

0x6e89,	// (0x000a271d) main_cset6_slider_pane_g14_ParamLimits

0x6e89,	// (0x000a271d) main_cset6_slider_pane_g14

0x6e95,	// (0x000a2729) main_cset6_slider_pane_g15_ParamLimits

0x6e95,	// (0x000a2729) main_cset6_slider_pane_g15

0x6ead,	// (0x000a2741) main_cset6_slider_pane_g16_ParamLimits

0x6ead,	// (0x000a2741) main_cset6_slider_pane_g16

0x6eb9,	// (0x000a274d) main_cset6_slider_pane_g17_ParamLimits

0x6eb9,	// (0x000a274d) main_cset6_slider_pane_g17

0x0011,

0xf9e8,	// (0x000ab27c) main_cset6_slider_pane_g_ParamLimits

0xf9e8,	// (0x000ab27c) main_cset6_slider_pane_g

0xdc1d,	// (0x000a94b1) main_cset6_slider_pane_t1_ParamLimits

0xdc1d,	// (0x000a94b1) main_cset6_slider_pane_t1

0x6edd,	// (0x000a2771) main_cset6_slider_pane_t2_ParamLimits

0x6edd,	// (0x000a2771) main_cset6_slider_pane_t2

0x6f08,	// (0x000a279c) main_cset6_slider_pane_t3_ParamLimits

0x6f08,	// (0x000a279c) main_cset6_slider_pane_t3

0x6f33,	// (0x000a27c7) main_cset6_slider_pane_t4_ParamLimits

0x6f33,	// (0x000a27c7) main_cset6_slider_pane_t4

0x6f5e,	// (0x000a27f2) main_cset6_slider_pane_t5_ParamLimits

0x6f5e,	// (0x000a27f2) main_cset6_slider_pane_t5

0xdc5e,	// (0x000a94f2) main_cset6_slider_pane_t7_ParamLimits

0xdc5e,	// (0x000a94f2) main_cset6_slider_pane_t7

0x6f89,	// (0x000a281d) main_cset6_slider_pane_t8_ParamLimits

0x6f89,	// (0x000a281d) main_cset6_slider_pane_t8

0x6fad,	// (0x000a2841) main_cset6_slider_pane_t9_ParamLimits

0x6fad,	// (0x000a2841) main_cset6_slider_pane_t9

0x6fd1,	// (0x000a2865) main_cset6_slider_pane_t10_ParamLimits

0x6fd1,	// (0x000a2865) main_cset6_slider_pane_t10

0x6ff5,	// (0x000a2889) main_cset6_slider_pane_t11_ParamLimits

0x6ff5,	// (0x000a2889) main_cset6_slider_pane_t11

0xdc94,	// (0x000a9528) main_cset6_slider_pane_t14_ParamLimits

0xdc94,	// (0x000a9528) main_cset6_slider_pane_t14

0xdccd,	// (0x000a9561) main_cset6_slider_pane_t15_ParamLimits

0xdccd,	// (0x000a9561) main_cset6_slider_pane_t15

0x000b,

0xfa0d,	// (0x000ab2a1) main_cset6_slider_pane_t_ParamLimits

0xfa0d,	// (0x000ab2a1) main_cset6_slider_pane_t

0xdd06,	// (0x000a959a) cset_slider_pane_g1_copy1

0xdd0f,	// (0x000a95a3) cset_slider_pane_g2_copy1

0xdd18,	// (0x000a95ac) cset_slider_pane_g3_copy1

0x9c07,	// (0x000a549b) bg_popup_sub_pane_cp011_copy1

0xdd2a,	// (0x000a95be) main_cset_text_pane_g1_copy1

0xd59e,	// (0x000a8e32) main_cset_text_pane_t1_copy1

0xd5ac,	// (0x000a8e40) main_cset_text_pane_t2_copy1

0xd5ba,	// (0x000a8e4e) main_cset_text_pane_t3_copy1

0xd5c8,	// (0x000a8e5c) main_cset_text_pane_t4_copy1

0xd5d6,	// (0x000a8e6a) main_cset_text_pane_t5_copy1

0xdd32,	// (0x000a95c6) main_cset_text_pane_t6_copy1

0xdd40,	// (0x000a95d4) main_cset_text_pane_t7_copy1

0x7036,	// (0x000a28ca) main_cset_text2_pane_t1_copy1

0x3d02,	// (0x0009f596) main_ncimui_pane

0x3d69,	// (0x0009f5fd) popup_query_ncimui_window_ParamLimits

0x3d69,	// (0x0009f5fd) popup_query_ncimui_window

0xa949,	// (0x000a61dd) field_cale_ev2_pane_g4_ParamLimits

0xa949,	// (0x000a61dd) field_cale_ev2_pane_g4

0x4fb1,	// (0x000a0845) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4fb1,	// (0x000a0845) cell_video_dialer_keypad_pane_g2

0x0001,

0xf72b,	// (0x000aafbf) cell_video_dialer_keypad_pane_g_ParamLimits

0xf72b,	// (0x000aafbf) cell_video_dialer_keypad_pane_g

0x4fc9,	// (0x000a085d) cell_video_dialer_keypad_pane_t1

0x9c07,	// (0x000a549b) bg_popup_window_pane_cp012

0xc5a7,	// (0x000a7e3b) heading_pane_cp06

0xdd6c,	// (0x000a9600) ncim_query_content_pane

0x9c07,	// (0x000a549b) bg_popup_heading_pane_cp01

0xdd74,	// (0x000a9608) ncim_heading_pane_t1

0xdd82,	// (0x000a9616) ncim_indicator_popup_pane

0xdd94,	// (0x000a9628) ncim_query_button_pane

0xddaa,	// (0x000a963e) ncim_query_content_pane_t1

0xddbc,	// (0x000a9650) ncim_query_content_pane_t2

0x0005,

0xfa51,	// (0x000ab2e5) ncim_query_content_pane_t

0xddff,	// (0x000a9693) ncim_query_list_pane

0xde11,	// (0x000a96a5) ncim_query_popup_pane

0xdd82,	// (0x000a9616) ncim_indicator_popup_pane_ParamLimits

0x7192,	// (0x000a2a26) ncim_query_content_pane_g1_ParamLimits

0x7192,	// (0x000a2a26) ncim_query_content_pane_g1

0xddaa,	// (0x000a963e) ncim_query_content_pane_t1_ParamLimits

0xddbc,	// (0x000a9650) ncim_query_content_pane_t2_ParamLimits

0x719e,	// (0x000a2a32) ncim_query_content_pane_t3_ParamLimits

0x719e,	// (0x000a2a32) ncim_query_content_pane_t3

0x71bb,	// (0x000a2a4f) ncim_query_content_pane_t4_ParamLimits

0x71bb,	// (0x000a2a4f) ncim_query_content_pane_t4

0x71d8,	// (0x000a2a6c) ncim_query_content_pane_t5_ParamLimits

0x71d8,	// (0x000a2a6c) ncim_query_content_pane_t5

0xddce,	// (0x000a9662) ncim_query_content_pane_t6_ParamLimits

0xddce,	// (0x000a9662) ncim_query_content_pane_t6

0xfa51,	// (0x000ab2e5) ncim_query_content_pane_t_ParamLimits

0xddff,	// (0x000a9693) ncim_query_list_pane_ParamLimits

0xde11,	// (0x000a96a5) ncim_query_popup_pane_ParamLimits

0xde25,	// (0x000a96b9) wait_bar_pane_cp04

0x9c07,	// (0x000a549b) input_focus_pane_cp011

0xde2d,	// (0x000a96c1) ncim_query_popup_pane_t1

0xde3b,	// (0x000a96cf) ncim_list_query_list_pane_ParamLimits

0xde3b,	// (0x000a96cf) ncim_list_query_list_pane

0x9c07,	// (0x000a549b) bg_button_pane_cp027

0xde4e,	// (0x000a96e2) ncim_query_button_pane_g1

0x9c07,	// (0x000a549b) list_highlight_pane_cp012

0xde58,	// (0x000a96ec) ncim_list_query_list_pane_g1

0xde60,	// (0x000a96f4) ncim_list_query_list_pane_t1

0x5760,	// (0x000a0ff4) cam4_indicators_pane_g3_ParamLimits

0x5760,	// (0x000a0ff4) cam4_indicators_pane_g3

0x586c,	// (0x000a1100) vid4_indicators_pane_g5_ParamLimits

0x586c,	// (0x000a1100) vid4_indicators_pane_g5

0x684c,	// (0x000a20e0) vid4_progress_pane_g5_ParamLimits

0x684c,	// (0x000a20e0) vid4_progress_pane_g5

0x7068,	// (0x000a28fc) main_ncimui_pane_g1

0x70d4,	// (0x000a2968) ncimui_group_query_pane_ParamLimits

0x70d4,	// (0x000a2968) ncimui_group_query_pane

0x712e,	// (0x000a29c2) ncimui_list_pane_ParamLimits

0x712e,	// (0x000a29c2) ncimui_list_pane

0x7155,	// (0x000a29e9) ncimui_text_pane_ParamLimits

0x7155,	// (0x000a29e9) ncimui_text_pane

0x71f5,	// (0x000a2a89) ncimui_text_pane_t1_ParamLimits

0x71f5,	// (0x000a2a89) ncimui_text_pane_t1

0xde6e,	// (0x000a9702) ncimui_list_single_graphic_pane_ParamLimits

0xde6e,	// (0x000a9702) ncimui_list_single_graphic_pane

0x7214,	// (0x000a2aa8) ncimui_query_pane_ParamLimits

0x7214,	// (0x000a2aa8) ncimui_query_pane

0x9c07,	// (0x000a549b) list_highlight_pane_cp013

0xde7e,	// (0x000a9712) ncim_list_query_list_pane_t1_copy1

0xde58,	// (0x000a96ec) ncim_list_single_graphic_pane_g1

0x7227,	// (0x000a2abb) ncim_query_button_pane_cp01

0x7233,	// (0x000a2ac7) ncim_query_entry_pane_ParamLimits

0x7233,	// (0x000a2ac7) ncim_query_entry_pane

0x7246,	// (0x000a2ada) ncimui_query_pane_g1

0x7252,	// (0x000a2ae6) ncimui_query_pane_t1_ParamLimits

0x7252,	// (0x000a2ae6) ncimui_query_pane_t1

0xa296,	// (0x000a5b2a) input_focus_pane_cp012

0xde8c,	// (0x000a9720) ncim_query_entry_pane_t1

0xa76c,	// (0x000a6000) main_im_pane_ParamLimits

0x3d02,	// (0x0009f596) main_mobtv_pane_ParamLimits

0x3d02,	// (0x0009f596) main_mobtv_pane

0x6ec5,	// (0x000a2759) main_cset6_slider_pane_g18_ParamLimits

0x6ec5,	// (0x000a2759) main_cset6_slider_pane_g18

0x6ed1,	// (0x000a2765) main_cset6_slider_pane_g19_ParamLimits

0x6ed1,	// (0x000a2765) main_cset6_slider_pane_g19

0xb685,	// (0x000a6f19) bg_main_mobtv_pane_ParamLimits

0xb685,	// (0x000a6f19) bg_main_mobtv_pane

0x726b,	// (0x000a2aff) main_mobtv_info_pane

0x7276,	// (0x000a2b0a) main_mobtv_loading_pane_ParamLimits

0x7276,	// (0x000a2b0a) main_mobtv_loading_pane

0xde9e,	// (0x000a9732) main_mobtv_pg_channel_list_pane

0xdea8,	// (0x000a973c) main_mobtv_pg_hdr_pane

0x7283,	// (0x000a2b17) main_mobtv_programe_curr_pane_ParamLimits

0x7283,	// (0x000a2b17) main_mobtv_programe_curr_pane

0x7290,	// (0x000a2b24) main_mobtv_programe_next_pane_ParamLimits

0x7290,	// (0x000a2b24) main_mobtv_programe_next_pane

0xdeb1,	// (0x000a9745) popup_mobtv_noti_window

0xa99c,	// (0x000a6230) main_tv_pg_hdr_pane_g1

0xdebb,	// (0x000a974f) main_tv_pg_hdr_pane_g2

0xdec3,	// (0x000a9757) main_tv_pg_hdr_pane_g3

0xdecb,	// (0x000a975f) main_tv_pg_hdr_pane_g4

0xded3,	// (0x000a9767) main_tv_pg_hdr_pane_g5

0xdedd,	// (0x000a9771) main_tv_pg_hdr_pane_g6

0xdee7,	// (0x000a977b) main_tv_pg_hdr_pane_g7

0xdef1,	// (0x000a9785) main_tv_pg_hdr_pane_g8

0xdefb,	// (0x000a978f) main_tv_pg_hdr_pane_g9

0xdf05,	// (0x000a9799) main_tv_pg_hdr_pane_g10

0xdf0f,	// (0x000a97a3) main_tv_pg_hdr_pane_g11

0x000a,

0x07d4,	// (0x0009c068) main_tv_pg_hdr_pane_g

0xdf19,	// (0x000a97ad) main_tv_pg_hdr_pane_t1

0xdf27,	// (0x000a97bb) main_tv_pg_hdr_pane_t2

0xdf35,	// (0x000a97c9) main_tv_pg_hdr_pane_t3

0xdf45,	// (0x000a97d9) main_tv_pg_hdr_pane_t4

0xdf55,	// (0x000a97e9) main_tv_pg_hdr_pane_t5

0x0004,

0x07eb,	// (0x0009c07f) main_tv_pg_hdr_pane_t

0xdf65,	// (0x000a97f9) single_mobtv_pg_channel_pane_ParamLimits

0xdf65,	// (0x000a97f9) single_mobtv_pg_channel_pane

0xdf77,	// (0x000a980b) single_mobtv_pg_channel_table_pane

0xdf80,	// (0x000a9814) single_mobtv_pg_channel_thumb_pane

0xdf89,	// (0x000a981d) single_tv_pg_channel_pane_g1

0xdf92,	// (0x000a9826) single_tv_pg_channel_pane_g2

0x0001,

0x07f6,	// (0x0009c08a) single_tv_pg_channel_pane_g

0xa6fa,	// (0x000a5f8e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa6fa,	// (0x000a5f8e) bg_single_mobtv_pg_channel_thumb_pane

0xdf9b,	// (0x000a982f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf9b,	// (0x000a982f) single_mobtv_pg_channel_thumb_pane_g1

0xdfa9,	// (0x000a983d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfa9,	// (0x000a983d) single_mobtv_pg_channel_thumb_pane_g2

0xdfb5,	// (0x000a9849) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfb5,	// (0x000a9849) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x07fb,	// (0x0009c08f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x07fb,	// (0x0009c08f) single_mobtv_pg_channel_thumb_pane_g

0xdfc1,	// (0x000a9855) single_mobtv_pg_channel_thumb_pane_t1

0xdfcf,	// (0x000a9863) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0802,	// (0x0009c096) single_mobtv_pg_channel_thumb_pane_t

0xa99c,	// (0x000a6230) bg_single_mobtv_pg_channel_table_pane_g1

0xa99c,	// (0x000a6230) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0027,	// (0x0009b8bb) bg_single_mobtv_pg_channel_table_pane_g

0xdfdd,	// (0x000a9871) single_mobtv_pg_channel_table_pane_t1

0xdfeb,	// (0x000a987f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0807,	// (0x0009c09b) single_mobtv_pg_channel_table_pane_t

0x72a5,	// (0x000a2b39) main_mobtv_info_pane_g1_ParamLimits

0x72a5,	// (0x000a2b39) main_mobtv_info_pane_g1

0x72c1,	// (0x000a2b55) main_mobtv_info_pane_t1_ParamLimits

0x72c1,	// (0x000a2b55) main_mobtv_info_pane_t1

0x7339,	// (0x000a2bcd) main_mobtv_info_pane_t2_ParamLimits

0x7339,	// (0x000a2bcd) main_mobtv_info_pane_t2

0x0002,

0xfa63,	// (0x000ab2f7) main_mobtv_info_pane_t_ParamLimits

0xfa63,	// (0x000ab2f7) main_mobtv_info_pane_t

0x73ca,	// (0x000a2c5e) wait_bar_pane_cp05

0x73dc,	// (0x000a2c70) main_mobtv_loading_pane_g1_ParamLimits

0x73dc,	// (0x000a2c70) main_mobtv_loading_pane_g1

0x73e8,	// (0x000a2c7c) main_mobtv_loading_pane_g2_ParamLimits

0x73e8,	// (0x000a2c7c) main_mobtv_loading_pane_g2

0x73f4,	// (0x000a2c88) main_mobtv_loading_pane_g3_ParamLimits

0x73f4,	// (0x000a2c88) main_mobtv_loading_pane_g3

0x0002,

0xfa6a,	// (0x000ab2fe) main_mobtv_loading_pane_g_ParamLimits

0xfa6a,	// (0x000ab2fe) main_mobtv_loading_pane_g

0xdff9,	// (0x000a988d) main_mobtv_loading_pane_t1_ParamLimits

0xdff9,	// (0x000a988d) main_mobtv_loading_pane_t1

0xe011,	// (0x000a98a5) main_mobtv_loading_pane_t2_ParamLimits

0xe011,	// (0x000a98a5) main_mobtv_loading_pane_t2

0x0001,

0x081f,	// (0x0009c0b3) main_mobtv_loading_pane_t_ParamLimits

0x081f,	// (0x0009c0b3) main_mobtv_loading_pane_t

0x7402,	// (0x000a2c96) wait_bar_pane_cp06_ParamLimits

0x7402,	// (0x000a2c96) wait_bar_pane_cp06

0xe035,	// (0x000a98c9) main_mobtv_programe_curr_pane_t1

0xe043,	// (0x000a98d7) main_mobtv_programe_curr_pane_t2

0x0001,

0x0824,	// (0x0009c0b8) main_mobtv_programe_curr_pane_t

0xe051,	// (0x000a98e5) main_mobtv_programe_next_pane_t1

0xe05f,	// (0x000a98f3) main_mobtv_programe_next_pane_t2

0xe06d,	// (0x000a9901) main_mobtv_programe_next_pane_t3

0x0002,

0x0829,	// (0x0009c0bd) main_mobtv_programe_next_pane_t

0x9c07,	// (0x000a549b) bg_popup_mobtv_noti_window_pane

0xe07b,	// (0x000a990f) popup_mobtv_noti_window_g1

0xe083,	// (0x000a9917) popup_mobtv_noti_window_t1

0xe091,	// (0x000a9925) popup_mobtv_noti_window_t2

0x0001,

0x0830,	// (0x0009c0c4) popup_mobtv_noti_window_t

0xa99c,	// (0x000a6230) bg_popup_mobtv_noti_window_pane_g1

0x0efd,	// (0x0009c791) sc_clock_pane

0x0efd,	// (0x0009c791) main_fs_bigclock_pane

0x6a2b,	// (0x000a22bf) blid2_tripm_pane_t4_ParamLimits

0x6a2b,	// (0x000a22bf) blid2_tripm_pane_t4

0x740e,	// (0x000a2ca2) sc_clock_pane_g1_ParamLimits

0x740e,	// (0x000a2ca2) sc_clock_pane_g1

0x741c,	// (0x000a2cb0) sc_clock_pane_t1_ParamLimits

0x741c,	// (0x000a2cb0) sc_clock_pane_t1

0x7431,	// (0x000a2cc5) sc_clock_pane_t2_ParamLimits

0x7431,	// (0x000a2cc5) sc_clock_pane_t2

0x7443,	// (0x000a2cd7) sc_clock_pane_t3_ParamLimits

0x7443,	// (0x000a2cd7) sc_clock_pane_t3

0x0004,

0xfa71,	// (0x000ab305) sc_clock_pane_t_ParamLimits

0xfa71,	// (0x000ab305) sc_clock_pane_t

0x82af,	// (0x000a3b43) main_fs_bigclock_indicator_pane_ParamLimits

0x82af,	// (0x000a3b43) main_fs_bigclock_indicator_pane

0x74d2,	// (0x000a2d66) main_fs_bigclock_pane_g1_ParamLimits

0x74d2,	// (0x000a2d66) main_fs_bigclock_pane_g1

0x82bb,	// (0x000a3b4f) main_fs_bigclock_pane_t1_ParamLimits

0x82bb,	// (0x000a3b4f) main_fs_bigclock_pane_t1

0x82cd,	// (0x000a3b61) main_fs_bigclock_pane_t2_ParamLimits

0x82cd,	// (0x000a3b61) main_fs_bigclock_pane_t2

0x82e1,	// (0x000a3b75) main_fs_bigclock_pane_t3_ParamLimits

0x82e1,	// (0x000a3b75) main_fs_bigclock_pane_t3

0x0002,

0xfbd2,	// (0x000ab466) main_fs_bigclock_pane_t_ParamLimits

0xfbd2,	// (0x000ab466) main_fs_bigclock_pane_t

0xe779,	// (0x000aa00d) main_fs_bigclock_indicator_pane_g1

0xdd9c,	// (0x000a9630) ncim_query_content_pane_g2_ParamLimits

0xdd9c,	// (0x000a9630) ncim_query_content_pane_g2

0x0001,

0xfa4c,	// (0x000ab2e0) ncim_query_content_pane_g_ParamLimits

0xfa4c,	// (0x000ab2e0) ncim_query_content_pane_g

0x7455,	// (0x000a2ce9) sc_clock_pane_t4_ParamLimits

0x7455,	// (0x000a2ce9) sc_clock_pane_t4

0x3d02,	// (0x0009f596) main_radioblah_pane

0x5604,	// (0x000a0e98) cell_call4_button_pane_t1_copy1_ParamLimits

0x5604,	// (0x000a0e98) cell_call4_button_pane_t1_copy1

0x7084,	// (0x000a2918) main_ncimui_pane_t1_ParamLimits

0x7084,	// (0x000a2918) main_ncimui_pane_t1

0x709e,	// (0x000a2932) main_ncimui_pane_t2_ParamLimits

0x709e,	// (0x000a2932) main_ncimui_pane_t2

0x0002,

0xfa45,	// (0x000ab2d9) main_ncimui_pane_t_ParamLimits

0xfa45,	// (0x000ab2d9) main_ncimui_pane_t

0xe09f,	// (0x000a9933) main_radioblah_anim_pane_ParamLimits

0xe09f,	// (0x000a9933) main_radioblah_anim_pane

0xe0b0,	// (0x000a9944) main_radioblah_info_pane_ParamLimits

0xe0b0,	// (0x000a9944) main_radioblah_info_pane

0xe0c4,	// (0x000a9958) main_radioblah_pane_t1_ParamLimits

0xe0c4,	// (0x000a9958) main_radioblah_pane_t1

0xe0e0,	// (0x000a9974) main_radioblah_pane_t2_ParamLimits

0xe0e0,	// (0x000a9974) main_radioblah_pane_t2

0x0003,

0x0856,	// (0x0009c0ea) main_radioblah_pane_t_ParamLimits

0x0856,	// (0x0009c0ea) main_radioblah_pane_t

0x7671,	// (0x000a2f05) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7671,	// (0x000a2f05) main_radioblah_rocker_ctrl_pane

0xe128,	// (0x000a99bc) main_radioblah_info_pane_t1_ParamLimits

0xe128,	// (0x000a99bc) main_radioblah_info_pane_t1

0x76ba,	// (0x000a2f4e) main_radioblah_info_pane_t2_ParamLimits

0x76ba,	// (0x000a2f4e) main_radioblah_info_pane_t2

0x0003,

0xfa92,	// (0x000ab326) main_radioblah_info_pane_t_ParamLimits

0xfa92,	// (0x000ab326) main_radioblah_info_pane_t

0xa99c,	// (0x000a6230) main_radioblah_rocker_ctrl_pane_g1

0x776a,	// (0x000a2ffe) main_radioblah_rocker_ctrl_pane_g2

0x7772,	// (0x000a3006) main_radioblah_rocker_ctrl_pane_g3

0x777a,	// (0x000a300e) main_radioblah_rocker_ctrl_pane_g4

0x7782,	// (0x000a3016) main_radioblah_rocker_ctrl_pane_g5

0x778a,	// (0x000a301e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa9b,	// (0x000ab32f) main_radioblah_rocker_ctrl_pane_g

0x7036,	// (0x000a28ca) main_cset_text2_pane_t1_copy1_ParamLimits

0x568d,	// (0x000a0f21) cam4_image_uncrop_qvga_pane

0x57d2,	// (0x000a1066) vid4_image_uncrop_qcif_pane

0x6baa,	// (0x000a243e) cam6_image_uncrop_qvga_pane_ParamLimits

0x6baa,	// (0x000a243e) cam6_image_uncrop_qvga_pane

0xda6d,	// (0x000a9301) vid6_image_uncrop_qcif_pane_ParamLimits

0xda6d,	// (0x000a9301) vid6_image_uncrop_qcif_pane

0x9c07,	// (0x000a549b) bg_popup_preview_window_pane_cp03

0xdd4e,	// (0x000a95e2) list_cset_text2_pane

0xdd56,	// (0x000a95ea) main_cset6_text2_pane_g1

0xdd5e,	// (0x000a95f2) main_cset6_text2_pane_t1

0x7792,	// (0x000a3026) list_cset_text2_pane_t1_ParamLimits

0x7792,	// (0x000a3026) list_cset_text2_pane_t1

0x3d02,	// (0x0009f596) main_radioblah_pane_ParamLimits

0x73b6,	// (0x000a2c4a) main_mobtv_info_pane_t3_ParamLimits

0x73b6,	// (0x000a2c4a) main_mobtv_info_pane_t3

0x765f,	// (0x000a2ef3) main_radioblah_pane_g1

0x768a,	// (0x000a2f1e) main_radioblah_info_pane_g1

0x770f,	// (0x000a2fa3) main_radioblah_info_pane_t3_ParamLimits

0x770f,	// (0x000a2fa3) main_radioblah_info_pane_t3

0x2bd2,	// (0x0009e466) highlight_cell_cale_month_pane_ParamLimits

0x2bd2,	// (0x0009e466) highlight_cell_cale_month_pane

0x0efd,	// (0x0009c791) main_phob_fisheye_pane

0xcd3c,	// (0x000a85d0) scroll_pane_cp0031_ParamLimits

0xcd3c,	// (0x000a85d0) scroll_pane_cp0031

0xdb8d,	// (0x000a9421) wait_bar_pane_cp08_ParamLimits

0x6dc1,	// (0x000a2655) cset_list_set_pane_copy1_ParamLimits

0xe162,	// (0x000a99f6) highlight_cell_cale_month_pane_g1

0x77a9,	// (0x000a303d) highlight_cell_cale_month_pane_t1

0xd80d,	// (0x000a90a1) list_gen_pane_cp01

0xd425,	// (0x000a8cb9) scroll_pane_01

0x77b7,	// (0x000a304b) list_single_double_fisheye_pane

0x77c0,	// (0x000a3054) list_double_fisheye_pane_g1_ParamLimits

0x77c0,	// (0x000a3054) list_double_fisheye_pane_g1

0x77cc,	// (0x000a3060) list_double_fisheye_pane_g2_ParamLimits

0x77cc,	// (0x000a3060) list_double_fisheye_pane_g2

0x77e0,	// (0x000a3074) list_double_fisheye_pane_g3_ParamLimits

0x77e0,	// (0x000a3074) list_double_fisheye_pane_g3

0x0004,

0xfaa8,	// (0x000ab33c) list_double_fisheye_pane_g_ParamLimits

0xfaa8,	// (0x000ab33c) list_double_fisheye_pane_g

0x7809,	// (0x000a309d) list_double_fisheye_pane_t1_ParamLimits

0x7809,	// (0x000a309d) list_double_fisheye_pane_t1

0x7824,	// (0x000a30b8) list_double_fisheye_pane_t2_ParamLimits

0x7824,	// (0x000a30b8) list_double_fisheye_pane_t2

0x0001,

0xfab3,	// (0x000ab347) list_double_fisheye_pane_t_ParamLimits

0xfab3,	// (0x000ab347) list_double_fisheye_pane_t

0x0efd,	// (0x0009c791) main_call5_pane

0x747b,	// (0x000a2d0f) sc_swipe_pane_ParamLimits

0x747b,	// (0x000a2d0f) sc_swipe_pane

0x7852,	// (0x000a30e6) call5_image_pane_ParamLimits

0x7852,	// (0x000a30e6) call5_image_pane

0x7864,	// (0x000a30f8) call5_swipe_1_pane_ParamLimits

0x7864,	// (0x000a30f8) call5_swipe_1_pane

0x7870,	// (0x000a3104) call5_swipe_2_pane_ParamLimits

0x7870,	// (0x000a3104) call5_swipe_2_pane

0x788a,	// (0x000a311e) popup_call5_audio_first_window_ParamLimits

0x788a,	// (0x000a311e) popup_call5_audio_first_window

0xa6fa,	// (0x000a5f8e) call5_swipe_1_pane_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) call5_swipe_1_pane_g1

0xe16a,	// (0x000a99fe) call5_swipe_1_pane_g2_ParamLimits

0xe16a,	// (0x000a99fe) call5_swipe_1_pane_g2

0x0001,

0xfab8,	// (0x000ab34c) call5_swipe_1_pane_g_ParamLimits

0xfab8,	// (0x000ab34c) call5_swipe_1_pane_g

0xe176,	// (0x000a9a0a) call5_swipe_1_pane_t1_ParamLimits

0xe176,	// (0x000a9a0a) call5_swipe_1_pane_t1

0xa6fa,	// (0x000a5f8e) call5_swipe_2_pane_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) call5_swipe_2_pane_g1

0xe18b,	// (0x000a9a1f) call5_swipe_2_pane_g2_ParamLimits

0xe18b,	// (0x000a9a1f) call5_swipe_2_pane_g2

0x0001,

0xfabd,	// (0x000ab351) call5_swipe_2_pane_g_ParamLimits

0xfabd,	// (0x000ab351) call5_swipe_2_pane_g

0xe197,	// (0x000a9a2b) call5_swipe_2_pane_t1_ParamLimits

0xe197,	// (0x000a9a2b) call5_swipe_2_pane_t1

0xe1ac,	// (0x000a9a40) sc_swipe_pane_g1_ParamLimits

0xe1ac,	// (0x000a9a40) sc_swipe_pane_g1

0xe1b9,	// (0x000a9a4d) sc_swipe_pane_g2_ParamLimits

0xe1b9,	// (0x000a9a4d) sc_swipe_pane_g2

0x0001,

0xfac2,	// (0x000ab356) sc_swipe_pane_g_ParamLimits

0xfac2,	// (0x000ab356) sc_swipe_pane_g

0xe1c5,	// (0x000a9a59) sc_swipe_pane_t1_ParamLimits

0xe1c5,	// (0x000a9a59) sc_swipe_pane_t1

0x0efd,	// (0x0009c791) main_cmail_launcher_pane

0x789a,	// (0x000a312e) aid_size_cell_cmail_l_ParamLimits

0x789a,	// (0x000a312e) aid_size_cell_cmail_l

0x78a8,	// (0x000a313c) grid_cmail_l_pane_ParamLimits

0x78a8,	// (0x000a313c) grid_cmail_l_pane

0x78b6,	// (0x000a314a) cell_cmail_l_pane_ParamLimits

0x78b6,	// (0x000a314a) cell_cmail_l_pane

0x78d1,	// (0x000a3165) cell_cmail_l_pane_g1_ParamLimits

0x78d1,	// (0x000a3165) cell_cmail_l_pane_g1

0x78dd,	// (0x000a3171) cell_cmail_l_pane_t1_ParamLimits

0x78dd,	// (0x000a3171) cell_cmail_l_pane_t1

0x78f3,	// (0x000a3187) cell_cmail_l_pane_t2_ParamLimits

0x78f3,	// (0x000a3187) cell_cmail_l_pane_t2

0x0001,

0xfac7,	// (0x000ab35b) cell_cmail_l_pane_t_ParamLimits

0xfac7,	// (0x000ab35b) cell_cmail_l_pane_t

0xa296,	// (0x000a5b2a) grid_highlight_pane_cp018_ParamLimits

0xa296,	// (0x000a5b2a) grid_highlight_pane_cp018

0x0d54,	// (0x0009c5e8) main2_pane_ParamLimits

0x0d54,	// (0x0009c5e8) main2_pane

0xa7fb,	// (0x000a608f) popup_sp_fs_action_menu_bg_pane_g1

0xa803,	// (0x000a6097) popup_sp_fs_action_menu_bg_pane_g2

0xa80b,	// (0x000a609f) popup_sp_fs_action_menu_bg_pane_g3

0xa813,	// (0x000a60a7) popup_sp_fs_action_menu_bg_pane_g4

0xa81b,	// (0x000a60af) popup_sp_fs_action_menu_bg_pane_g5

0xa823,	// (0x000a60b7) popup_sp_fs_action_menu_bg_pane_g6

0xa82b,	// (0x000a60bf) popup_sp_fs_action_menu_bg_pane_g7

0xa833,	// (0x000a60c7) popup_sp_fs_action_menu_bg_pane_g8

0xa83b,	// (0x000a60cf) popup_sp_fs_action_menu_bg_pane_g9

0xa843,	// (0x000a60d7) popup_sp_fs_action_menu_bg_pane_g10

0xa843,	// (0x000a60d7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x000aa999) popup_sp_fs_action_menu_bg_pane_g

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g3_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g3_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x000aaa47) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x000aaa47) list_medium_line_x2_t3_g3_g

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g3_t1

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g3_t2

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x000aaa4e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x000aaa4e) list_medium_line_x2_t3_g3_t

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g2_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x000aaa55) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x000aaa55) list_medium_line_x2_t3_g2_g

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g2_t1

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g2_t2

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x000aaa4e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x000aaa4e) list_medium_line_x2_t3_g2_t

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g4_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g4_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g4_g3

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x000aaa5a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x000aaa5a) list_medium_line_x2_t4_g4_g

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g4_t1

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g4_t2

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g4_t3

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x000aaa63) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x000aaa63) list_medium_line_x2_t4_g4_t

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g4_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g4_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g4_g3

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x000aaa5a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x000aaa5a) list_medium_line_x2_t2_g4_g

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g4_t1

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x000aaaca) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x000aaaca) list_medium_line_x2_t2_g4_t

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g3_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g3_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x000aaa47) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x000aaa47) list_medium_line_x2_t2_g3_g

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g3_t1

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x000aaaca) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x000aaaca) list_medium_line_x2_t2_g3_t

0x2d64,	// (0x0009e5f8) main_sp_fs_list_pane_ParamLimits

0x2d64,	// (0x0009e5f8) main_sp_fs_list_pane

0x2d70,	// (0x0009e604) sp_fs_scroll_pane_ParamLimits

0x2d70,	// (0x0009e604) sp_fs_scroll_pane

0xaeee,	// (0x000a6782) list_medium_line_x2_t3_t1

0xaeee,	// (0x000a6782) list_medium_line_x2_t3_t2

0xaeee,	// (0x000a6782) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x000aab15) list_medium_line_x2_t3_t

0xaeee,	// (0x000a6782) list_medium_line_x3_t4_t1

0xaeee,	// (0x000a6782) list_medium_line_x3_t4_t2

0xaeee,	// (0x000a6782) list_medium_line_x3_t4_t3

0xaeee,	// (0x000a6782) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x000aab1c) list_medium_line_x3_t4_t

0xaeee,	// (0x000a6782) list_medium_line_x4_t5_t1

0xaeee,	// (0x000a6782) list_medium_line_x4_t5_t2

0xaeee,	// (0x000a6782) list_medium_line_x4_t5_t3

0xaeee,	// (0x000a6782) list_medium_line_x4_t5_t4

0xaeee,	// (0x000a6782) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x000aab25) list_medium_line_x4_t5_t

0xa6fa,	// (0x000a5f8e) list_medium_line_t4_g4_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t4_g4_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_t4_g4_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t4_g4_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_t4_g4_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t4_g4_g3

0xa6fa,	// (0x000a5f8e) list_medium_line_t4_g4_g4_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x000aaa5a) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x000aaa5a) list_medium_line_t4_g4_g

0xa92c,	// (0x000a61c0) list_medium_line_t4_g4_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t4_g4_t1

0xa92c,	// (0x000a61c0) list_medium_line_t4_g4_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t4_g4_t2

0xa92c,	// (0x000a61c0) list_medium_line_t4_g4_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t4_g4_t3

0xa92c,	// (0x000a61c0) list_medium_line_t4_g4_t4_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x000aaa63) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x000aaa63) list_medium_line_t4_g4_t

0x2e69,	// (0x0009e6fd) chi_dic_find_pane_g1

0x3d1e,	// (0x0009f5b2) main_tport_pane

0xaeee,	// (0x000a6782) list_medium_line_plain_t1

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g2_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g2_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g2_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x000aaa55) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x000aaa55) list_medium_line_t2_g2_g

0xa92c,	// (0x000a61c0) list_medium_line_t2_g2_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t2_g2_t1

0xa92c,	// (0x000a61c0) list_medium_line_t2_g2_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x000aaaca) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x000aaaca) list_medium_line_t2_g2_t

0xa38c,	// (0x000a5c20) aid_sp_fs_list_icon_a_sm

0xa955,	// (0x000a61e9) aid_sp_fs_list_icon_d

0xbd11,	// (0x000a75a5) aid_sp_fs_text_primary

0xa394,	// (0x000a5c28) aid_sp_fs_text_secondary

0x9c07,	// (0x000a549b) list_medium_line

0x9c07,	// (0x000a549b) list_medium_line_g2

0x9c07,	// (0x000a549b) list_medium_line_g3

0x9c07,	// (0x000a549b) list_medium_line_plain

0x9c07,	// (0x000a549b) list_medium_line_plain_t2

0x9c07,	// (0x000a549b) list_medium_line_plain_t3

0x9c07,	// (0x000a549b) list_medium_line_right_icon

0x9c07,	// (0x000a549b) list_medium_line_right_iconx2

0x9c07,	// (0x000a549b) list_medium_line_t2

0x9c07,	// (0x000a549b) list_medium_line_t2_g2

0x9c07,	// (0x000a549b) list_medium_line_t2_g3

0x9c07,	// (0x000a549b) list_medium_line_t2_right_icon

0x9c07,	// (0x000a549b) list_medium_line_t2_right_iconx2

0x9c07,	// (0x000a549b) list_medium_line_t3

0x9c07,	// (0x000a549b) list_medium_line_t3_g2

0x9c07,	// (0x000a549b) list_medium_line_t3_g3

0x9c07,	// (0x000a549b) list_medium_line_t3_right_iconx2

0x9c07,	// (0x000a549b) list_medium_line_t4_g4

0x9c07,	// (0x000a549b) list_medium_line_x2

0x9c07,	// (0x000a549b) list_medium_line_x2_t2_g2

0x9c07,	// (0x000a549b) list_medium_line_x2_t2_g3

0x9c07,	// (0x000a549b) list_medium_line_x2_t2_g4

0x9c07,	// (0x000a549b) list_medium_line_x2_t3

0x9c07,	// (0x000a549b) list_medium_line_x2_t3_g2

0x9c07,	// (0x000a549b) list_medium_line_x2_t3_g3

0x9c07,	// (0x000a549b) list_medium_line_x2_t3_g4

0x9c07,	// (0x000a549b) list_medium_line_x2_t4_g2

0x9c07,	// (0x000a549b) list_medium_line_x2_t4_g4

0x9c07,	// (0x000a549b) list_medium_line_x3

0x9c07,	// (0x000a549b) list_medium_line_x3_t4

0x9c07,	// (0x000a549b) list_medium_line_x3_t4_g4

0x9c07,	// (0x000a549b) list_medium_line_x4_t4

0x9c07,	// (0x000a549b) list_medium_line_x4_t4_g7

0x9c07,	// (0x000a549b) list_medium_line_x4_t5

0x68b6,	// (0x000a214a) list_single_fs_dyc_pane_ParamLimits

0x68b6,	// (0x000a214a) list_single_fs_dyc_pane

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g3

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g4

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g5

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x4_t4_g7_g6

0xa708,	// (0x000a5f9c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa708,	// (0x000a5f9c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa26,	// (0x000ab2ba) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa26,	// (0x000ab2ba) list_medium_line_x4_t4_g7_g

0xa92c,	// (0x000a61c0) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x4_t4_g7_t1

0xa92c,	// (0x000a61c0) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x4_t4_g7_t2

0xa92c,	// (0x000a61c0) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x4_t4_g7_t3

0xb347,	// (0x000a6bdb) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb347,	// (0x000a6bdb) list_medium_line_x4_t4_g7_t4

0xb347,	// (0x000a6bdb) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb347,	// (0x000a6bdb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa35,	// (0x000ab2c9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa35,	// (0x000ab2c9) list_medium_line_x4_t4_g7_t

0x7019,	// (0x000a28ad) list_single_dyc_row_pane_ParamLimits

0x7019,	// (0x000a28ad) list_single_dyc_row_pane

0x7846,	// (0x000a30da) call5_gesture_pane_ParamLimits

0x7846,	// (0x000a30da) call5_gesture_pane

0x787c,	// (0x000a3110) call5_windows_pane_ParamLimits

0x787c,	// (0x000a3110) call5_windows_pane

0x7910,	// (0x000a31a4) call5_swipe_1_pane_cp_ParamLimits

0x7910,	// (0x000a31a4) call5_swipe_1_pane_cp

0x791c,	// (0x000a31b0) call5_swipe_2_pane_cp_ParamLimits

0x791c,	// (0x000a31b0) call5_swipe_2_pane_cp

0xa90a,	// (0x000a619e) call5_image_pane_cp

0x7928,	// (0x000a31bc) popup_call5_audio_first_window_cp_ParamLimits

0x7928,	// (0x000a31bc) popup_call5_audio_first_window_cp

0xe1ac,	// (0x000a9a40) call5_swipe_1_pane_g1_cp_ParamLimits

0xe1ac,	// (0x000a9a40) call5_swipe_1_pane_g1_cp

0xe1da,	// (0x000a9a6e) call5_swipe_1_pane_g2_cp

0xe1c5,	// (0x000a9a59) call5_swipe_1_pane_t1_cp_ParamLimits

0xe1c5,	// (0x000a9a59) call5_swipe_1_pane_t1_cp

0xe1ac,	// (0x000a9a40) call5_swipe_2_pane_g1_cp_ParamLimits

0xe1ac,	// (0x000a9a40) call5_swipe_2_pane_g1_cp

0xe1e2,	// (0x000a9a76) call5_swipe_2_pane_g2_cp

0xe1ea,	// (0x000a9a7e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe1ea,	// (0x000a9a7e) call5_swipe_2_pane_t1_cp

0xa296,	// (0x000a5b2a) main_sp_fs_email_pane

0xddf6,	// (0x000a968a) main_sp_fs_listscroll_pane_te

0x7936,	// (0x000a31ca) popup_sp_fs_action_menu_pane_ParamLimits

0x7936,	// (0x000a31ca) popup_sp_fs_action_menu_pane

0xa99c,	// (0x000a6230) bg_sp_fs_ctrlbar_pane_g1

0xe1ff,	// (0x000a9a93) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe208,	// (0x000a9a9c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe211,	// (0x000a9aa5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa99c,	// (0x000a6230) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfacc,	// (0x000ab360) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc3fb,	// (0x000a7c8f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc3fb,	// (0x000a7c8f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe21a,	// (0x000a9aae) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe21a,	// (0x000a9aae) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe226,	// (0x000a9aba) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe226,	// (0x000a9aba) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfad5,	// (0x000ab369) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfad5,	// (0x000ab369) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe232,	// (0x000a9ac6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe232,	// (0x000a9ac6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa99c,	// (0x000a6230) list_medium_line_t2_right_icon_g1

0xaeee,	// (0x000a6782) list_medium_line_t2_right_icon_t1

0xaeee,	// (0x000a6782) list_medium_line_t2_right_icon_t2

0x0001,

0xfada,	// (0x000ab36e) list_medium_line_t2_right_icon_t

0xb663,	// (0x000a6ef7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb663,	// (0x000a6ef7) bg_sp_fs_ctrlbar_pane

0x79d5,	// (0x000a3269) main_sp_fs_ctrlbar_button_pane_cp01

0x79dd,	// (0x000a3271) main_sp_fs_ctrlbar_ddmenu_pane

0xe286,	// (0x000a9b1a) main_sp_fs_ctrlbar_pane_g1

0xe292,	// (0x000a9b26) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfadf,	// (0x000ab373) main_sp_fs_ctrlbar_pane_g

0x7a1b,	// (0x000a32af) main_sp_fs_ctrlbar_pane_t1

0x7a58,	// (0x000a32ec) main_sp_fs_ctrlbar_pane

0x7a72,	// (0x000a3306) main_sp_fs_listscroll_pane_te_cp01

0x7a83,	// (0x000a3317) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7a83,	// (0x000a3317) popup_sp_fs_action_menu_pane_cp01

0xa296,	// (0x000a5b2a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa296,	// (0x000a5b2a) bg_sp_fs_highlight_list_pane_cp01

0xa39d,	// (0x000a5c31) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa39d,	// (0x000a5c31) sp_fs_action_menu_list_gene_pane_g1

0xe2b9,	// (0x000a9b4d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe2b9,	// (0x000a9b4d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfaed,	// (0x000ab381) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfaed,	// (0x000ab381) sp_fs_action_menu_list_gene_pane_g

0xa3ac,	// (0x000a5c40) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa3ac,	// (0x000a5c40) sp_fs_action_menu_list_gene_pane_t1

0xa3c4,	// (0x000a5c58) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa3c4,	// (0x000a5c58) sp_fs_action_menu_list_gene_pane

0xe2c6,	// (0x000a9b5a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2c6,	// (0x000a9b5a) popup_sp_fs_action_menu_bg_pane

0xa3e7,	// (0x000a5c7b) sp_fs_action_menu_list_pane_ParamLimits

0xa3e7,	// (0x000a5c7b) sp_fs_action_menu_list_pane

0x7aa3,	// (0x000a3337) sp_fs_scroll_pane_cp01_ParamLimits

0x7aa3,	// (0x000a3337) sp_fs_scroll_pane_cp01

0xaeee,	// (0x000a6782) list_medium_line_plain_t2_t1

0xaeee,	// (0x000a6782) list_medium_line_plain_t2_t2

0x0001,

0xfada,	// (0x000ab36e) list_medium_line_plain_t2_t

0xaeee,	// (0x000a6782) list_medium_line_plain_t3_t1

0xaeee,	// (0x000a6782) list_medium_line_plain_t3_t2

0xaeee,	// (0x000a6782) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x000aab15) list_medium_line_plain_t3_t

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g2_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x000aaa55) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x000aaa55) list_medium_line_x2_t2_g2_g

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g2_t1

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x000aaaca) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x000aaaca) list_medium_line_x2_t2_g2_t

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g2_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x000aaa55) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x000aaa55) list_medium_line_x2_t4_g2_g

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g2_t1

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g2_t2

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g2_t3

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x000aaa63) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x000aaa63) list_medium_line_x2_t4_g2_t

0xa99c,	// (0x000a6230) list_medium_line_t3_right_iconx2_g1

0xa99c,	// (0x000a6230) list_medium_line_t3_right_iconx2_g2

0xa99c,	// (0x000a6230) list_medium_line_t3_right_iconx2_g3

0x0002,

0x002c,	// (0x0009b8c0) list_medium_line_t3_right_iconx2_g

0xaeee,	// (0x000a6782) list_medium_line_t3_right_iconx2_t1

0xaeee,	// (0x000a6782) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfada,	// (0x000ab36e) list_medium_line_t3_right_iconx2_t

0xa6fa,	// (0x000a5f8e) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x3_t4_g4_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x3_t4_g4_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x3_t4_g4_g3

0xa6fa,	// (0x000a5f8e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x000aaa5a) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x000aaa5a) list_medium_line_x3_t4_g4_g

0xa92c,	// (0x000a61c0) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x3_t4_g4_t1

0xa92c,	// (0x000a61c0) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x3_t4_g4_t2

0xa92c,	// (0x000a61c0) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x3_t4_g4_t3

0xa92c,	// (0x000a61c0) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x000aaa63) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x000aaa63) list_medium_line_x3_t4_g4_t

0x7ac9,	// (0x000a335d) list_single_dyc_row_text_pane_t1_ParamLimits

0x7ac9,	// (0x000a335d) list_single_dyc_row_text_pane_t1

0x7b0c,	// (0x000a33a0) list_single_dyc_row_text_pane_t2_ParamLimits

0x7b0c,	// (0x000a33a0) list_single_dyc_row_text_pane_t2

0xa40b,	// (0x000a5c9f) list_single_dyc_row_text_pane_t3_ParamLimits

0xa40b,	// (0x000a5c9f) list_single_dyc_row_text_pane_t3

0x0005,

0xfaf2,	// (0x000ab386) list_single_dyc_row_text_pane_t_ParamLimits

0xfaf2,	// (0x000ab386) list_single_dyc_row_text_pane_t

0xa42f,	// (0x000a5cc3) list_single_dyc_row_pane_g1_ParamLimits

0xa42f,	// (0x000a5cc3) list_single_dyc_row_pane_g1

0xa43b,	// (0x000a5ccf) list_single_dyc_row_pane_g2_ParamLimits

0xa43b,	// (0x000a5ccf) list_single_dyc_row_pane_g2

0xa447,	// (0x000a5cdb) list_single_dyc_row_pane_g3_ParamLimits

0xa447,	// (0x000a5cdb) list_single_dyc_row_pane_g3

0xa453,	// (0x000a5ce7) list_single_dyc_row_pane_g4_ParamLimits

0xa453,	// (0x000a5ce7) list_single_dyc_row_pane_g4

0x0003,

0xfaff,	// (0x000ab393) list_single_dyc_row_pane_g_ParamLimits

0xfaff,	// (0x000ab393) list_single_dyc_row_pane_g

0xa45f,	// (0x000a5cf3) list_single_dyc_row_text_pane_ParamLimits

0xa45f,	// (0x000a5cf3) list_single_dyc_row_text_pane

0x9c07,	// (0x000a549b) bg_sp_fs_scroll_pane

0xe2d4,	// (0x000a9b68) thumb_sp_fs_scroll_pane

0xa6fa,	// (0x000a5f8e) list_medium_line_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_g1

0xa92c,	// (0x000a61c0) list_medium_line_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t1

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x000aaa55) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x000aaa55) list_medium_line_x2_g

0xa92c,	// (0x000a61c0) list_medium_line_x2_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t1

0xa6fa,	// (0x000a5f8e) list_medium_line_x3_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x3_g1

0xdaad,	// (0x000a9341) list_medium_line_x3_g2_ParamLimits

0xdaad,	// (0x000a9341) list_medium_line_x3_g2

0x0001,

0xfb08,	// (0x000ab39c) list_medium_line_x3_g_ParamLimits

0xfb08,	// (0x000ab39c) list_medium_line_x3_g

0xe2dd,	// (0x000a9b71) list_medium_line_x3_t1_ParamLimits

0xe2dd,	// (0x000a9b71) list_medium_line_x3_t1

0xe2f1,	// (0x000a9b85) thumb_sp_fs_scroll_pane_g1

0xe2fa,	// (0x000a9b8e) thumb_sp_fs_scroll_pane_g2

0xe303,	// (0x000a9b97) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfb0d,	// (0x000ab3a1) thumb_sp_fs_scroll_pane_g

0xe2f1,	// (0x000a9b85) bg_sp_fs_scroll_pane_g1

0xe2fa,	// (0x000a9b8e) bg_sp_fs_scroll_pane_g2

0xe303,	// (0x000a9b97) bg_sp_fs_scroll_pane_g3

0x0002,

0xfb0d,	// (0x000ab3a1) bg_sp_fs_scroll_pane_g

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g4_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g4_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g4_g3

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x000aaa5a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x000aaa5a) list_medium_line_x2_t3_g4_g

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g4_t1

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g4_t2

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x000aaa4e) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x000aaa4e) list_medium_line_x2_t3_g4_t

0xa6fa,	// (0x000a5f8e) list_medium_line_g2_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_g2_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_g2_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x000aaa55) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x000aaa55) list_medium_line_g2_g

0xa92c,	// (0x000a61c0) list_medium_line_g2_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_g2_t1

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g2_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g2_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g2_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x000aaa55) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x000aaa55) list_medium_line_t3_g2_g

0xa92c,	// (0x000a61c0) list_medium_line_t3_g2_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t3_g2_t1

0xa92c,	// (0x000a61c0) list_medium_line_t3_g2_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t3_g2_t2

0xa92c,	// (0x000a61c0) list_medium_line_t3_g2_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x000aaa4e) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x000aaa4e) list_medium_line_t3_g2_t

0xa99c,	// (0x000a6230) list_medium_line_right_icon_g1

0xaeee,	// (0x000a6782) list_medium_line_right_icon_t1

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g1

0xa92c,	// (0x000a61c0) list_medium_line_t2_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t2_t1

0xa92c,	// (0x000a61c0) list_medium_line_t2_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x000aaaca) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x000aaaca) list_medium_line_t2_t

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g1

0xa92c,	// (0x000a61c0) list_medium_line_t3_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t3_t1

0xa92c,	// (0x000a61c0) list_medium_line_t3_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t3_t2

0xa92c,	// (0x000a61c0) list_medium_line_t3_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x000aaa4e) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x000aaa4e) list_medium_line_t3_t

0xa6fa,	// (0x000a5f8e) list_medium_line_g3_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_g3_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_g3_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_g3_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_g3_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x000aaa47) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x000aaa47) list_medium_line_g3_g

0xa92c,	// (0x000a61c0) list_medium_line_g3_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_g3_t1

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g3_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g3_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g3_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g3_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g3_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x000aaa47) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x000aaa47) list_medium_line_t2_g3_g

0xa92c,	// (0x000a61c0) list_medium_line_t2_g3_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t2_g3_t1

0xa92c,	// (0x000a61c0) list_medium_line_t2_g3_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x000aaaca) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x000aaaca) list_medium_line_t2_g3_t

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g3_g1_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g3_g1

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g3_g2_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g3_g2

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g3_g3_ParamLimits

0xa6fa,	// (0x000a5f8e) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x000aaa47) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x000aaa47) list_medium_line_t3_g3_g

0xa92c,	// (0x000a61c0) list_medium_line_t3_g3_t1_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t3_g3_t1

0xa92c,	// (0x000a61c0) list_medium_line_t3_g3_t2_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t3_g3_t2

0xa92c,	// (0x000a61c0) list_medium_line_t3_g3_t3_ParamLimits

0xa92c,	// (0x000a61c0) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x000aaa4e) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x000aaa4e) list_medium_line_t3_g3_t

0xa99c,	// (0x000a6230) list_medium_line_right_iconx2_g1

0xa99c,	// (0x000a6230) list_medium_line_right_iconx2_g2

0x0001,

0x0027,	// (0x0009b8bb) list_medium_line_right_iconx2_g

0xaeee,	// (0x000a6782) list_medium_line_right_iconx2_t1

0xa99c,	// (0x000a6230) list_medium_line_t2_right_iconx2_g1

0xa99c,	// (0x000a6230) list_medium_line_t2_right_iconx2_g2

0x0001,

0x0027,	// (0x0009b8bb) list_medium_line_t2_right_iconx2_g

0xaeee,	// (0x000a6782) list_medium_line_t2_right_iconx2_t1

0xaeee,	// (0x000a6782) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfada,	// (0x000ab36e) list_medium_line_t2_right_iconx2_t

0xaeee,	// (0x000a6782) list_medium_line_x4_t4_t1

0xaeee,	// (0x000a6782) list_medium_line_x4_t4_t2

0xaeee,	// (0x000a6782) list_medium_line_x4_t4_t3

0xaeee,	// (0x000a6782) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x000aab1c) list_medium_line_x4_t4_t

0x7c67,	// (0x000a34fb) tport_appsw_pane_ParamLimits

0x7c67,	// (0x000a34fb) tport_appsw_pane

0x7c75,	// (0x000a3509) tport_contact_pane_ParamLimits

0x7c75,	// (0x000a3509) tport_contact_pane

0x7c85,	// (0x000a3519) tport_listscroll_pane_ParamLimits

0x7c85,	// (0x000a3519) tport_listscroll_pane

0x7c95,	// (0x000a3529) cell_tport_appsw_pane_ParamLimits

0x7c95,	// (0x000a3529) cell_tport_appsw_pane

0xa708,	// (0x000a5f9c) tport_appsw_pane_g1_ParamLimits

0xa708,	// (0x000a5f9c) tport_appsw_pane_g1

0x7cc2,	// (0x000a3556) tport_contact_pane_g1

0x7ccb,	// (0x000a355f) tport_contact_pane_t1

0x7cd9,	// (0x000a356d) tport_contact_pane_t2

0x0001,

0xfb14,	// (0x000ab3a8) tport_contact_pane_t

0xe30c,	// (0x000a9ba0) list_tport_pane

0xe315,	// (0x000a9ba9) scroll_pane_cp_030

0x7cef,	// (0x000a3583) cell_tport_appsw_pane_g1

0x7cff,	// (0x000a3593) cell_tport_appsw_pane_t1

0x7d0d,	// (0x000a35a1) grid_highlight_pane_cp019

0x7d15,	// (0x000a35a9) list_tport_double_graphic_pane_ParamLimits

0x7d15,	// (0x000a35a9) list_tport_double_graphic_pane

0xa296,	// (0x000a5b2a) list_highlight_pane_cp023_ParamLimits

0xa296,	// (0x000a5b2a) list_highlight_pane_cp023

0x7d22,	// (0x000a35b6) list_tport_double_graphic_pane_g1_ParamLimits

0x7d22,	// (0x000a35b6) list_tport_double_graphic_pane_g1

0x7d2f,	// (0x000a35c3) list_tport_double_graphic_pane_t1_ParamLimits

0x7d2f,	// (0x000a35c3) list_tport_double_graphic_pane_t1

0x7d44,	// (0x000a35d8) list_tport_double_graphic_pane_t2_ParamLimits

0x7d44,	// (0x000a35d8) list_tport_double_graphic_pane_t2

0x0001,

0xfb20,	// (0x000ab3b4) list_tport_double_graphic_pane_t_ParamLimits

0xfb20,	// (0x000ab3b4) list_tport_double_graphic_pane_t

0x9c07,	// (0x000a549b) main_cale_note_pane

0x5a47,	// (0x000a12db) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5a47,	// (0x000a12db) cell_vitu2_function_top_wide_pane_cp01

0x73ca,	// (0x000a2c5e) wait_bar_pane_cp05_ParamLimits

0xa296,	// (0x000a5b2a) listscroll_cmail_pane

0xe326,	// (0x000a9bba) list_cmail_pane

0x7d56,	// (0x000a35ea) list_cmail_body_pane

0x7d70,	// (0x000a3604) list_single_cmail_header_caption_pane

0x7d90,	// (0x000a3624) list_single_cmail_header_detail_pane_ParamLimits

0x7d90,	// (0x000a3624) list_single_cmail_header_detail_pane

0xe33d,	// (0x000a9bd1) list_single_cmail_header_caption_pane_t1

0x7dc6,	// (0x000a365a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7dc6,	// (0x000a365a) list_single_cmail_header_detail_pane_g1

0xa95d,	// (0x000a61f1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa95d,	// (0x000a61f1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb25,	// (0x000ab3b9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb25,	// (0x000ab3b9) list_single_cmail_header_detail_pane_g

0x7dde,	// (0x000a3672) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7dde,	// (0x000a3672) list_single_cmail_header_detail_pane_t1

0x7e1a,	// (0x000a36ae) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7e1a,	// (0x000a36ae) list_single_cmail_header_editor_pane_bg

0xdf92,	// (0x000a9826) list_cmail_body_pane_g1

0xe361,	// (0x000a9bf5) list_cmail_body_pane_t1

0xd2f5,	// (0x000a8b89) list_single_cmail_header_editor_pane_bg_g1

0xabc0,	// (0x000a6454) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd305,	// (0x000a8b99) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2fd,	// (0x000a8b91) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd54f,	// (0x000a8de3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd325,	// (0x000a8bb9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd315,	// (0x000a8ba9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd31d,	// (0x000a8bb1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaba0,	// (0x000a6434) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7e31,	// (0x000a36c5) calenote_gesture_pane_ParamLimits

0x7e31,	// (0x000a36c5) calenote_gesture_pane

0x7e4b,	// (0x000a36df) calenote_window_pane_ParamLimits

0x7e4b,	// (0x000a36df) calenote_window_pane

0xe36f,	// (0x000a9c03) popup_note_window_cp01

0x7e63,	// (0x000a36f7) calenote_swipe_1_pane_ParamLimits

0x7e63,	// (0x000a36f7) calenote_swipe_1_pane

0x791c,	// (0x000a31b0) calenote_swipe_2_pane_ParamLimits

0x791c,	// (0x000a31b0) calenote_swipe_2_pane

0xe1ac,	// (0x000a9a40) calenote_swipe_1_pane_g1_ParamLimits

0xe1ac,	// (0x000a9a40) calenote_swipe_1_pane_g1

0xe1b9,	// (0x000a9a4d) calenote_swipe_1_pane_g2_ParamLimits

0xe1b9,	// (0x000a9a4d) calenote_swipe_1_pane_g2

0x0001,

0xfac2,	// (0x000ab356) calenote_swipe_1_pane_g_ParamLimits

0xfac2,	// (0x000ab356) calenote_swipe_1_pane_g

0xe381,	// (0x000a9c15) calenote_swipe_1_pane_t1_ParamLimits

0xe381,	// (0x000a9c15) calenote_swipe_1_pane_t1

0xe1ac,	// (0x000a9a40) calenote_swipe_2_pane_g1_ParamLimits

0xe1ac,	// (0x000a9a40) calenote_swipe_2_pane_g1

0xe3a0,	// (0x000a9c34) calenote_swipe_2_pane_g2_ParamLimits

0xe3a0,	// (0x000a9c34) calenote_swipe_2_pane_g2

0x0001,

0xfb31,	// (0x000ab3c5) calenote_swipe_2_pane_g_ParamLimits

0xfb31,	// (0x000ab3c5) calenote_swipe_2_pane_g

0xe3ac,	// (0x000a9c40) calenote_swipe_2_pane_t1_ParamLimits

0xe3ac,	// (0x000a9c40) calenote_swipe_2_pane_t1

0x9c07,	// (0x000a549b) main_mup_navstr_pane

0x48b2,	// (0x000a0146) main_mup3_pane_t7_ParamLimits

0x48b2,	// (0x000a0146) main_mup3_pane_t7

0x50c0,	// (0x000a0954) main_mp4_pane_g6_ParamLimits

0x50c0,	// (0x000a0954) main_mp4_pane_g6

0x545c,	// (0x000a0cf0) main_image3_pane_t4_ParamLimits

0x545c,	// (0x000a0cf0) main_image3_pane_t4

0x7e76,	// (0x000a370a) popup_navstr_preview_pane_ParamLimits

0x7e76,	// (0x000a370a) popup_navstr_preview_pane

0x7e82,	// (0x000a3716) scroll_navstr_pane_ParamLimits

0x7e82,	// (0x000a3716) scroll_navstr_pane

0x9c07,	// (0x000a549b) bg_popup_preview_window_pane_cp04

0xe3d3,	// (0x000a9c67) popup_navstr_preview_pane_t1

0x7e8e,	// (0x000a3722) scroll_navstr_pane_g1_ParamLimits

0x7e8e,	// (0x000a3722) scroll_navstr_pane_g1

0x7e9b,	// (0x000a372f) scroll_navstr_pane_t1_ParamLimits

0x7e9b,	// (0x000a372f) scroll_navstr_pane_t1

0xe378,	// (0x000a9c0c) bg_button_pane_cp014

0xe378,	// (0x000a9c0c) bg_button_pane_cp030

0x77ec,	// (0x000a3080) list_double_fisheye_pane_g4_ParamLimits

0x77ec,	// (0x000a3080) list_double_fisheye_pane_g4

0x77f8,	// (0x000a308c) list_double_fisheye_pane_g5_ParamLimits

0x77f8,	// (0x000a308c) list_double_fisheye_pane_g5

0xbd1a,	// (0x000a75ae) sp_fs_scroll_pane_cp03

0xe286,	// (0x000a9b1a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe292,	// (0x000a9b26) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfadf,	// (0x000ab373) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7a1b,	// (0x000a32af) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe335,	// (0x000a9bc9) sp_fs_scroll_pane_cp02

0xa866,	// (0x000a60fa) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa866,	// (0x000a60fa) popup_sp_fs_calendar_preview_list_single_pane

0x9c07,	// (0x000a549b) main_cam6_pano_pane

0x3d02,	// (0x0009f596) main_mup3_pane_ParamLimits

0x9c07,	// (0x000a549b) main_phacti_pane

0x729d,	// (0x000a2b31) bg_button_pane_cp11

0x72b5,	// (0x000a2b49) main_mobtv_info_pane_g2_ParamLimits

0x72b5,	// (0x000a2b49) main_mobtv_info_pane_g2

0x0001,

0xfa5e,	// (0x000ab2f2) main_mobtv_info_pane_g_ParamLimits

0xfa5e,	// (0x000ab2f2) main_mobtv_info_pane_g

0x7467,	// (0x000a2cfb) sc_clock_pane_t5_ParamLimits

0x7467,	// (0x000a2cfb) sc_clock_pane_t5

0x765f,	// (0x000a2ef3) main_radioblah_pane_g1_ParamLimits

0xe0f8,	// (0x000a998c) main_radioblah_pane_t3_ParamLimits

0xe0f8,	// (0x000a998c) main_radioblah_pane_t3

0xe110,	// (0x000a99a4) main_radioblah_pane_t4_ParamLimits

0xe110,	// (0x000a99a4) main_radioblah_pane_t4

0x767d,	// (0x000a2f11) main_radioblah_text_pane_ParamLimits

0x767d,	// (0x000a2f11) main_radioblah_text_pane

0x768a,	// (0x000a2f1e) main_radioblah_info_pane_g1_ParamLimits

0x7723,	// (0x000a2fb7) main_radioblah_info_pane_t4_ParamLimits

0x7723,	// (0x000a2fb7) main_radioblah_info_pane_t4

0xa296,	// (0x000a5b2a) main_sp_fs_calendar_pane

0x7ead,	// (0x000a3741) main_phacti_pane_g1

0x7eb5,	// (0x000a3749) phacti_note_pane_ParamLimits

0x7eb5,	// (0x000a3749) phacti_note_pane

0xe3ea,	// (0x000a9c7e) phacti_term_pane_ParamLimits

0xe3ea,	// (0x000a9c7e) phacti_term_pane

0xe3ff,	// (0x000a9c93) phacti_note_pane_t1_ParamLimits

0xe3ff,	// (0x000a9c93) phacti_note_pane_t1

0xa4a2,	// (0x000a5d36) phacti_term_pane_g1

0xa4aa,	// (0x000a5d3e) phacti_term_pane_t1_ParamLimits

0xa4aa,	// (0x000a5d3e) phacti_term_pane_t1

0xe416,	// (0x000a9caa) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe41e,	// (0x000a9cb2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb3b,	// (0x000ab3cf) popup_sp_fs_calendar_preview_list_single_pane_g

0xe426,	// (0x000a9cba) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe426,	// (0x000a9cba) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe43c,	// (0x000a9cd0) aid_popup_sp_fs_bg_corner_pane

0xa99c,	// (0x000a6230) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c07,	// (0x000a549b) popup_sp_fs_calendar_preview_bg_pane

0xe444,	// (0x000a9cd8) popup_sp_fs_calendar_preview_list_pane

0xb663,	// (0x000a6ef7) bg_main_sp_fs_cale_pane_ParamLimits

0xb663,	// (0x000a6ef7) bg_main_sp_fs_cale_pane

0xa4dd,	// (0x000a5d71) listscroll_cale_mrui_pane_ParamLimits

0xa4dd,	// (0x000a5d71) listscroll_cale_mrui_pane

0xa4f2,	// (0x000a5d86) listscroll_sp_fs_schedule_track_pane

0xa4fb,	// (0x000a5d8f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa4fb,	// (0x000a5d8f) main_sp_fs_ctrlbar_pane_cp01

0xe44c,	// (0x000a9ce0) main_sp_fs_ribbon_pane

0xa50e,	// (0x000a5da2) popup_sp_fs_cale_preview_window

0x7f18,	// (0x000a37ac) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7f18,	// (0x000a37ac) list_single_sp_fs_schedule_track_pane

0xa6ec,	// (0x000a5f80) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa6ec,	// (0x000a5f80) bg_sp_fs_highlight_list_pane_cp03

0x7f2f,	// (0x000a37c3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7f2f,	// (0x000a37c3) list_single_sp_fs_schedule_track_pane_g1

0x7f3b,	// (0x000a37cf) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7f3b,	// (0x000a37cf) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb40,	// (0x000ab3d4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb40,	// (0x000ab3d4) list_single_sp_fs_schedule_track_pane_g

0x7f47,	// (0x000a37db) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7f47,	// (0x000a37db) list_single_sp_fs_schedule_track_pane_t1

0x7f65,	// (0x000a37f9) sp_fs_schedule_track_pane_ParamLimits

0x7f65,	// (0x000a37f9) sp_fs_schedule_track_pane

0xe454,	// (0x000a9ce8) sp_fs_schedule_track_pane_g1

0xe45c,	// (0x000a9cf0) sp_fs_schedule_track_pane_g2

0xe464,	// (0x000a9cf8) sp_fs_schedule_track_pane_g3

0xe46c,	// (0x000a9d00) sp_fs_schedule_track_pane_g4

0xe48e,	// (0x000a9d22) sp_fs_schedule_track_pane_g5

0x0004,

0xfb45,	// (0x000ab3d9) sp_fs_schedule_track_pane_g

0xd2f5,	// (0x000a8b89) bg_sp_fs_schedule_viewer_highlight_g1

0xabc0,	// (0x000a6454) bg_sp_fs_schedule_viewer_highlight_g2

0xd2fd,	// (0x000a8b91) bg_sp_fs_schedule_viewer_highlight_g3

0xd305,	// (0x000a8b99) bg_sp_fs_schedule_viewer_highlight_g4

0xd54f,	// (0x000a8de3) bg_sp_fs_schedule_viewer_highlight_g5

0xd315,	// (0x000a8ba9) bg_sp_fs_schedule_viewer_highlight_g6

0xd31d,	// (0x000a8bb1) bg_sp_fs_schedule_viewer_highlight_g7

0xd325,	// (0x000a8bb9) bg_sp_fs_schedule_viewer_highlight_g8

0xaba0,	// (0x000a6434) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb50,	// (0x000ab3e4) bg_sp_fs_schedule_viewer_highlight_g

0x9c07,	// (0x000a549b) bg_main_sp_fs_ribbon_pane

0x7f77,	// (0x000a380b) main_sp_fs_ribbon_pane_g1

0xe496,	// (0x000a9d2a) main_sp_fs_ribbon_pane_t1

0x7f80,	// (0x000a3814) main_sp_fs_ribbon_pane_t2

0xe4a5,	// (0x000a9d39) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb63,	// (0x000ab3f7) main_sp_fs_ribbon_pane_t

0xe4b4,	// (0x000a9d48) main_sp_fs_ribbon_scheduler_pane

0xe4bc,	// (0x000a9d50) bg_main_sp_fs_ribbon_pane_g1

0xe4c5,	// (0x000a9d59) bg_main_sp_fs_ribbon_pane_g2

0xe4ce,	// (0x000a9d62) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0937,	// (0x0009c1cb) bg_main_sp_fs_ribbon_pane_g

0xe4d6,	// (0x000a9d6a) main_sp_fs_ribbon_scheduler_pane_g1

0xe4df,	// (0x000a9d73) main_sp_fs_ribbon_scheduler_pane_g2

0xe4e8,	// (0x000a9d7c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x093e,	// (0x0009c1d2) main_sp_fs_ribbon_scheduler_pane_g

0xe4f1,	// (0x000a9d85) list_cale_mrui_pane

0x7f8f,	// (0x000a3823) sp_fs_scroll_pane_cp07_ParamLimits

0x7f8f,	// (0x000a3823) sp_fs_scroll_pane_cp07

0x7fab,	// (0x000a383f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7fab,	// (0x000a383f) bg_sp_fs_schedule_viewer_highlight

0xe4fe,	// (0x000a9d92) list_single_sp_fs_schedule_track_pane_cp01

0xe506,	// (0x000a9d9a) list_sp_fs_schedule_track_pane

0xe50e,	// (0x000a9da2) sp_fs_scroll_pane_cp06_ParamLimits

0xe50e,	// (0x000a9da2) sp_fs_scroll_pane_cp06

0xa99c,	// (0x000a6230) bgmain_sp_fs_calendar_pane_g1

0x7fb8,	// (0x000a384c) list_single_cale_mrui_pane_ParamLimits

0x7fb8,	// (0x000a384c) list_single_cale_mrui_pane

0xa520,	// (0x000a5db4) list_single_cale_mrui_row_pane_ParamLimits

0xa520,	// (0x000a5db4) list_single_cale_mrui_row_pane

0xa52d,	// (0x000a5dc1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa52d,	// (0x000a5dc1) list_single_cale_mrui_row_pane_g1

0xa565,	// (0x000a5df9) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa565,	// (0x000a5df9) list_single_cale_mrui_row_pane_t1

0x7fdb,	// (0x000a386f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7fdb,	// (0x000a386f) list_single_cale_mrui_row_pane_t2

0xa577,	// (0x000a5e0b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa577,	// (0x000a5e0b) list_single_cale_mrui_row_pane_t3

0xa5a6,	// (0x000a5e3a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa5a6,	// (0x000a5e3a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb71,	// (0x000ab405) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb71,	// (0x000ab405) list_single_cale_mrui_row_pane_t

0x8041,	// (0x000a38d5) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8041,	// (0x000a38d5) list_single_cmail_header_editor_pane_bg_cp01

0x806b,	// (0x000a38ff) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x806b,	// (0x000a38ff) list_single_cmail_header_editor_pane_bg_cp02

0x8089,	// (0x000a391d) main_radioblah_text_pane_t1_ParamLimits

0x8089,	// (0x000a391d) main_radioblah_text_pane_t1

0xe52d,	// (0x000a9dc1) cam6_indi_pane_cp01

0xe535,	// (0x000a9dc9) cam6_mode_pane_cp01

0xe53d,	// (0x000a9dd1) cam6_pano_pane

0xe546,	// (0x000a9dda) cam6_zoom_pane_cp01

0xe550,	// (0x000a9de4) cam6_pano_image_pane

0xe559,	// (0x000a9ded) cam6_pano_pane_g1

0xdf92,	// (0x000a9826) cam6_pano_pane_g2

0xe562,	// (0x000a9df6) cam6_pano_pane_g3

0xe56b,	// (0x000a9dff) cam6_pano_pane_g4

0xcfd8,	// (0x000a886c) cam6_pano_pane_g5

0xe574,	// (0x000a9e08) cam6_pano_pane_g6

0xe57c,	// (0x000a9e10) cam6_pano_pane_g7

0xe584,	// (0x000a9e18) cam6_pano_pane_g8

0xe58d,	// (0x000a9e21) cam6_pano_pane_g9

0x0008,

0xfb7a,	// (0x000ab40e) cam6_pano_pane_g

0x9c07,	// (0x000a549b) main_browser_tag_pane

0xe3cb,	// (0x000a9c5f) grid_navstr_albumart_pane

0xe598,	// (0x000a9e2c) cell_navstr_albumart_pane_ParamLimits

0xe598,	// (0x000a9e2c) cell_navstr_albumart_pane

0xe5b4,	// (0x000a9e48) cell_navstr_albumart_pane_g1

0xc4e7,	// (0x000a7d7b) cell_navstr_albumart_pane_g2

0xc4f7,	// (0x000a7d8b) cell_navstr_albumart_pane_g3

0xc4ef,	// (0x000a7d83) cell_navstr_albumart_pane_g4

0x0003,

0xfb8d,	// (0x000ab421) cell_navstr_albumart_pane_g

0x80a3,	// (0x000a3937) bt_list_pane_ParamLimits

0x80a3,	// (0x000a3937) bt_list_pane

0x80bc,	// (0x000a3950) bt_list_pane_t1

0x80cb,	// (0x000a395f) bt_list_pane_t2

0x0001,

0xfb96,	// (0x000ab42a) bt_list_pane_t

0x9c07,	// (0x000a549b) main_cale_prevew_pane

0x80da,	// (0x000a396e) popup_cale_preview_window_ParamLimits

0x80da,	// (0x000a396e) popup_cale_preview_window

0xa296,	// (0x000a5b2a) bg_popup_preview_window_pane_cp05_ParamLimits

0xa296,	// (0x000a5b2a) bg_popup_preview_window_pane_cp05

0xe5bc,	// (0x000a9e50) list_cale_preview_pane_ParamLimits

0xe5bc,	// (0x000a9e50) list_cale_preview_pane

0x80f7,	// (0x000a398b) list_double_cale_preview_pane_ParamLimits

0x80f7,	// (0x000a398b) list_double_cale_preview_pane

0x810b,	// (0x000a399f) list_single_cale_preview_pane_ParamLimits

0x810b,	// (0x000a399f) list_single_cale_preview_pane

0x8123,	// (0x000a39b7) list_single_cale_preview_pane_g1

0x812b,	// (0x000a39bf) list_single_cale_preview_pane_t1_ParamLimits

0x812b,	// (0x000a39bf) list_single_cale_preview_pane_t1

0x8140,	// (0x000a39d4) list_double_cale_preview_pane_g1

0x8148,	// (0x000a39dc) list_double_cale_preview_pane_t1_ParamLimits

0x8148,	// (0x000a39dc) list_double_cale_preview_pane_t1

0x815d,	// (0x000a39f1) list_double_cale_preview_pane_t2_ParamLimits

0x815d,	// (0x000a39f1) list_double_cale_preview_pane_t2

0x0001,

0xfb9b,	// (0x000ab42f) list_double_cale_preview_pane_t_ParamLimits

0xfb9b,	// (0x000ab42f) list_double_cale_preview_pane_t

0x9c07,	// (0x000a549b) main_ezdial_pane

0xa296,	// (0x000a5b2a) main_sp_fs_email_pane_ParamLimits

0x797c,	// (0x000a3210) cmail_ddmenu_btn01_pane_ParamLimits

0x797c,	// (0x000a3210) cmail_ddmenu_btn01_pane

0x7999,	// (0x000a322d) cmail_ddmenu_btn02_pane_ParamLimits

0x7999,	// (0x000a322d) cmail_ddmenu_btn02_pane

0x79b7,	// (0x000a324b) cmail_ddmenu_btn03_pane_ParamLimits

0x79b7,	// (0x000a324b) cmail_ddmenu_btn03_pane

0x7a58,	// (0x000a32ec) main_sp_fs_ctrlbar_pane_ParamLimits

0x7a72,	// (0x000a3306) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7d56,	// (0x000a35ea) list_cmail_body_pane_ParamLimits

0xe34b,	// (0x000a9bdf) bg_button_pane_cp12

0xe354,	// (0x000a9be8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe354,	// (0x000a9be8) list_single_cmail_header_detail_pane_g3

0xa47e,	// (0x000a5d12) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa47e,	// (0x000a5d12) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb2c,	// (0x000ab3c0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb2c,	// (0x000ab3c0) list_single_cmail_header_detail_pane_t

0xa4bf,	// (0x000a5d53) phacti_term_pane_t2_ParamLimits

0xa4bf,	// (0x000a5d53) phacti_term_pane_t2

0x0001,

0xfb36,	// (0x000ab3ca) phacti_term_pane_t_ParamLimits

0xfb36,	// (0x000ab3ca) phacti_term_pane_t

0xe5c8,	// (0x000a9e5c) aid_size_list_single_double

0x8175,	// (0x000a3a09) popup_ezdial_listscroll_window

0x8197,	// (0x000a3a2b) popup_number_entry_window_cp01

0xa90a,	// (0x000a619e) bg_popup_call_pane_cp09

0xe5d4,	// (0x000a9e68) ezdial_list_pane

0xe5dc,	// (0x000a9e70) scroll_pane_cp23

0xc3fb,	// (0x000a7c8f) bg_button_pane_cp028_ParamLimits

0xc3fb,	// (0x000a7c8f) bg_button_pane_cp028

0x81a5,	// (0x000a3a39) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x81a5,	// (0x000a3a39) cmail_ddmenu_btn01_pane_g1

0x81b7,	// (0x000a3a4b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x81b7,	// (0x000a3a4b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfba0,	// (0x000ab434) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfba0,	// (0x000ab434) cmail_ddmenu_btn01_pane_g

0xe5e4,	// (0x000a9e78) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5e4,	// (0x000a9e78) cmail_ddmenu_btn01_pane_t1

0xb663,	// (0x000a6ef7) bg_button_pane_cp029_ParamLimits

0xb663,	// (0x000a6ef7) bg_button_pane_cp029

0x81c3,	// (0x000a3a57) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x81c3,	// (0x000a3a57) cmail_ddmenu_btn02_pane_g1

0x81db,	// (0x000a3a6f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x81db,	// (0x000a3a6f) cmail_ddmenu_btn02_pane_t1

0xa6ec,	// (0x000a5f80) bg_button_pane_cp031_ParamLimits

0xa6ec,	// (0x000a5f80) bg_button_pane_cp031

0x81c3,	// (0x000a3a57) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x81c3,	// (0x000a3a57) cmail_ddmenu_btn03_pane_g1

0x81db,	// (0x000a3a6f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x81db,	// (0x000a3a6f) cmail_ddmenu_btn03_pane_t1

0x52f7,	// (0x000a0b8b) cell_dialer2_keypad_pane_t1_ParamLimits

0x5311,	// (0x000a0ba5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5311,	// (0x000a0ba5) cell_dialer2_keypad_pane_t1_copy1

0x70ca,	// (0x000a295e) ncimui_group_button_pane

0xa296,	// (0x000a5b2a) main_sp_fs_calendar_pane_ParamLimits

0x7d70,	// (0x000a3604) list_single_cmail_header_caption_pane_ParamLimits

0xa4d4,	// (0x000a5d68) aid_recal_txt_sm_pane

0x9c07,	// (0x000a549b) mian_recal_day_pane

0xa50e,	// (0x000a5da2) popup_sp_fs_cale_preview_window_ParamLimits

0xe5fa,	// (0x000a9e8e) list_recal_day_pane

0xa5f3,	// (0x000a5e87) list_single_recal_day_pane_ParamLimits

0xa5f3,	// (0x000a5e87) list_single_recal_day_pane

0xe621,	// (0x000a9eb5) list_single_recal_day_pane_g1_ParamLimits

0xe621,	// (0x000a9eb5) list_single_recal_day_pane_g1

0xa605,	// (0x000a5e99) list_single_recal_day_pane_g2_ParamLimits

0xa605,	// (0x000a5e99) list_single_recal_day_pane_g2

0xa611,	// (0x000a5ea5) list_single_recal_day_pane_g3_ParamLimits

0xa611,	// (0x000a5ea5) list_single_recal_day_pane_g3

0x81ff,	// (0x000a3a93) list_single_recal_day_pane_g4_ParamLimits

0x81ff,	// (0x000a3a93) list_single_recal_day_pane_g4

0xa61d,	// (0x000a5eb1) list_single_recal_day_pane_g5_ParamLimits

0xa61d,	// (0x000a5eb1) list_single_recal_day_pane_g5

0xa629,	// (0x000a5ebd) list_single_recal_day_pane_g6_ParamLimits

0xa629,	// (0x000a5ebd) list_single_recal_day_pane_g6

0x0004,

0xfbaf,	// (0x000ab443) list_single_recal_day_pane_g_ParamLimits

0xfbaf,	// (0x000ab443) list_single_recal_day_pane_g

0xa63d,	// (0x000a5ed1) list_single_recal_day_pane_t1

0xa64f,	// (0x000a5ee3) list_single_recal_day_pane_t2

0x0001,

0xfbba,	// (0x000ab44e) list_single_recal_day_pane_t

0x8217,	// (0x000a3aab) ncimui_query_button_pane_ParamLimits

0x8217,	// (0x000a3aab) ncimui_query_button_pane

0x8227,	// (0x000a3abb) ncimui_query_button_pane_t1_ParamLimits

0x8227,	// (0x000a3abb) ncimui_query_button_pane_t1

0xe62d,	// (0x000a9ec1) ncimui_query_button_pane_t2_ParamLimits

0xe62d,	// (0x000a9ec1) ncimui_query_button_pane_t2

0x0001,

0xfbbf,	// (0x000ab453) ncimui_query_button_pane_t_ParamLimits

0xfbbf,	// (0x000ab453) ncimui_query_button_pane_t

0x823a,	// (0x000a3ace) query_button_pane_ParamLimits

0x823a,	// (0x000a3ace) query_button_pane

0x9c07,	// (0x000a549b) bg_button_pane_cp0028

0xe640,	// (0x000a9ed4) query_button_pane_t1

0x3d1e,	// (0x0009f5b2) main_tport_pane_ParamLimits

0x7c3d,	// (0x000a34d1) bg_popup_window_pane_cp01_ParamLimits

0x7c3d,	// (0x000a34d1) bg_popup_window_pane_cp01

0x7c4b,	// (0x000a34df) heading_pane_cp08_ParamLimits

0x7c4b,	// (0x000a34df) heading_pane_cp08

0x7c59,	// (0x000a34ed) heading_pane_cp07_ParamLimits

0x7c59,	// (0x000a34ed) heading_pane_cp07

0x7cef,	// (0x000a3583) cell_tport_appsw_pane_g2

0x0002,

0xfb19,	// (0x000ab3ad) cell_tport_appsw_pane_g

0x33c5,	// (0x0009ec59) input_candi_list_open_g1

0xad9a,	// (0x000a662e) list_cale_time_pane_g6_ParamLimits

0xad9a,	// (0x000a662e) list_cale_time_pane_g6

0x4276,	// (0x0009fb0a) aid_size_touch_calib_1_ParamLimits

0x4276,	// (0x0009fb0a) aid_size_touch_calib_1

0x4282,	// (0x0009fb16) aid_size_touch_calib_2_ParamLimits

0x4282,	// (0x0009fb16) aid_size_touch_calib_2

0x4290,	// (0x0009fb24) aid_size_touch_calib_3_ParamLimits

0x4290,	// (0x0009fb24) aid_size_touch_calib_3

0x42a0,	// (0x0009fb34) aid_size_touch_calib_4_ParamLimits

0x42a0,	// (0x0009fb34) aid_size_touch_calib_4

0x42ae,	// (0x0009fb42) main_touch_calib_button_group_pane_ParamLimits

0x42ae,	// (0x0009fb42) main_touch_calib_button_group_pane

0x42bc,	// (0x0009fb50) main_touch_calib_pane_g1_ParamLimits

0x42c8,	// (0x0009fb5c) main_touch_calib_pane_g2_ParamLimits

0x42d4,	// (0x0009fb68) main_touch_calib_pane_g3_ParamLimits

0x42e0,	// (0x0009fb74) main_touch_calib_pane_g4_ParamLimits

0xf613,	// (0x000aaea7) main_touch_calib_pane_g_ParamLimits

0x42ec,	// (0x0009fb80) main_touch_calib_pane_t1_ParamLimits

0x4303,	// (0x0009fb97) main_touch_calib_pane_t2_ParamLimits

0x431c,	// (0x0009fbb0) main_touch_calib_pane_t3_ParamLimits

0x4332,	// (0x0009fbc6) main_touch_calib_pane_t4_ParamLimits

0x4348,	// (0x0009fbdc) main_touch_calib_pane_t5_ParamLimits

0xf61c,	// (0x000aaeb0) main_touch_calib_pane_t_ParamLimits

0xcd60,	// (0x000a85f4) list_single_fp_cale_pane_g3_ParamLimits

0xcd60,	// (0x000a85f4) list_single_fp_cale_pane_g3

0x3d02,	// (0x0009f596) bg_button_pane_cp012_ParamLimits

0x3d02,	// (0x0009f596) bg_vkb2_func_pane_cp03_ParamLimits

0x61b3,	// (0x000a1a47) cell_vitu2_function_top_pane_g1_ParamLimits

0x3d02,	// (0x0009f596) bg_vkb2_func_pane_cp04_ParamLimits

0x7050,	// (0x000a28e4) main_ncimui_button_group_pane_ParamLimits

0x7050,	// (0x000a28e4) main_ncimui_button_group_pane

0x70b8,	// (0x000a294c) main_ncimui_pane_t3_ParamLimits

0x70b8,	// (0x000a294c) main_ncimui_pane_t3

0xe3e1,	// (0x000a9c75) phacti_button_group_pane

0xe5c8,	// (0x000a9e5c) aid_size_list_single_double_ParamLimits

0x8175,	// (0x000a3a09) popup_ezdial_listscroll_window_ParamLimits

0x8197,	// (0x000a3a2b) popup_number_entry_window_cp01_ParamLimits

0x8247,	// (0x000a3adb) phacti_button_pane_ParamLimits

0x8247,	// (0x000a3adb) phacti_button_pane

0x9c07,	// (0x000a549b) bg_button_pane_cp14

0xe64e,	// (0x000a9ee2) phacti_button_pane_t1

0x8258,	// (0x000a3aec) main_touch_calib_button_pane_ParamLimits

0x8258,	// (0x000a3aec) main_touch_calib_button_pane

0xa76c,	// (0x000a6000) bg_button_pane_cp18_ParamLimits

0xa76c,	// (0x000a6000) bg_button_pane_cp18

0xe65c,	// (0x000a9ef0) main_touch_calib_button_pane_t1_ParamLimits

0xe65c,	// (0x000a9ef0) main_touch_calib_button_pane_t1

0xe672,	// (0x000a9f06) main_touch_calib_button_pane_t2_ParamLimits

0xe672,	// (0x000a9f06) main_touch_calib_button_pane_t2

0x0001,

0x099f,	// (0x0009c233) main_touch_calib_button_pane_t_ParamLimits

0x099f,	// (0x0009c233) main_touch_calib_button_pane_t

0x9c07,	// (0x000a549b) cell_ncimui_button_pane

0x9c07,	// (0x000a549b) bg_button_pane_cp032

0xe690,	// (0x000a9f24) cell_ncimui_button_pane_t1

0x536d,	// (0x000a0c01) image3_infobar_pane_ParamLimits

0x536d,	// (0x000a0c01) image3_infobar_pane

0x7489,	// (0x000a2d1d) fs_bigclock_status_pane_ParamLimits

0x7489,	// (0x000a2d1d) fs_bigclock_status_pane

0x7496,	// (0x000a2d2a) main_fs_bigclock_clock_pane_ParamLimits

0x7496,	// (0x000a2d2a) main_fs_bigclock_clock_pane

0x74b2,	// (0x000a2d46) main_fs_bigclock_indi_pane_ParamLimits

0x74b2,	// (0x000a2d46) main_fs_bigclock_indi_pane

0x74e0,	// (0x000a2d74) main_fs_bigclock_swipe_pane_ParamLimits

0x74e0,	// (0x000a2d74) main_fs_bigclock_swipe_pane

0x9c07,	// (0x000a549b) main_fs_clock_dumped_data

0x751a,	// (0x000a2dae) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x751a,	// (0x000a2dae) list_single_fs_bigclock_indicator_pane_g1

0x7539,	// (0x000a2dcd) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7539,	// (0x000a2dcd) list_single_fs_bigclock_indicator_pane_g2

0x7553,	// (0x000a2de7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7553,	// (0x000a2de7) list_single_fs_bigclock_indicator_pane_g3

0x756f,	// (0x000a2e03) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x756f,	// (0x000a2e03) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfa7c,	// (0x000ab310) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfa7c,	// (0x000ab310) list_single_fs_bigclock_indicator_pane_g

0x759e,	// (0x000a2e32) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x759e,	// (0x000a2e32) list_single_fs_bigclock_indicator_pane_t1

0x75c6,	// (0x000a2e5a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x75c6,	// (0x000a2e5a) list_single_fs_bigclock_indicator_pane_t2

0x75ee,	// (0x000a2e82) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x75ee,	// (0x000a2e82) list_single_fs_bigclock_indicator_pane_t3

0x7616,	// (0x000a2eaa) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7616,	// (0x000a2eaa) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfa87,	// (0x000ab31b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfa87,	// (0x000ab31b) list_single_fs_bigclock_indicator_pane_t

0xe69e,	// (0x000a9f32) image3_infobar_fav_pane_ParamLimits

0xe69e,	// (0x000a9f32) image3_infobar_fav_pane

0xe6ae,	// (0x000a9f42) image3_infobar_loc_pane_ParamLimits

0xe6ae,	// (0x000a9f42) image3_infobar_loc_pane

0xe6c4,	// (0x000a9f58) image3_infobar_time_pane_ParamLimits

0xe6c4,	// (0x000a9f58) image3_infobar_time_pane

0xa99c,	// (0x000a6230) image3_infobar_time_pane_g1

0xe6d4,	// (0x000a9f68) image3_infobar_time_pane_t1

0xa99c,	// (0x000a6230) image3_infobar_loc_pane_g1

0xe6e2,	// (0x000a9f76) image3_infobar_loc_pane_g2

0x0001,

0x09a4,	// (0x0009c238) image3_infobar_loc_pane_g

0xe6ea,	// (0x000a9f7e) image3_infobar_loc_pane_t1

0xa99c,	// (0x000a6230) image3_infobar_fav_pane_g1

0xe6f8,	// (0x000a9f8c) image3_infobar_fav_pane_g2

0x0001,

0x09a9,	// (0x0009c23d) image3_infobar_fav_pane_g

0xe700,	// (0x000a9f94) fs_bigclock_status_battery_pane

0xe709,	// (0x000a9f9d) fs_bigclock_status_signal_pane

0xe712,	// (0x000a9fa6) fs_bigclock_status_title_pane

0xe71b,	// (0x000a9faf) fs_bigclock_status_signal_pane_g1

0xe724,	// (0x000a9fb8) fs_bigclock_status_signal_pane_g2

0x0001,

0x09ae,	// (0x0009c242) fs_bigclock_status_signal_pane_g

0xe72c,	// (0x000a9fc0) fs_bigclock_status_battery_pane_g1

0xe735,	// (0x000a9fc9) fs_bigclock_status_battery_pane_g2

0x0001,

0x09b3,	// (0x0009c247) fs_bigclock_status_battery_pane_g

0xe73d,	// (0x000a9fd1) fs_bigclock_status_title_pane_t1

0x8268,	// (0x000a3afc) main_fs_bigclock_clock_pane_g1

0x8268,	// (0x000a3afc) main_fs_bigclock_clock_pane_g2

0x8277,	// (0x000a3b0b) main_fs_bigclock_clock_pane_g3

0x8277,	// (0x000a3b0b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfbc4,	// (0x000ab458) main_fs_bigclock_clock_pane_g

0x8287,	// (0x000a3b1b) main_fs_bigclock_clock_pane_t1

0x829c,	// (0x000a3b30) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbcd,	// (0x000ab461) main_fs_bigclock_clock_pane_t

0xe74b,	// (0x000a9fdf) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe74b,	// (0x000a9fdf) list_single_fs_bigclock_indicator_pane

0xe75c,	// (0x000a9ff0) list_single_fs_bigclock_pane_ParamLimits

0xe75c,	// (0x000a9ff0) list_single_fs_bigclock_pane

0xe782,	// (0x000aa016) main_fs_bigclock_indicator_pane_t1

0xe791,	// (0x000aa025) list_single_fs_bigclock_pane_g1

0xe799,	// (0x000aa02d) list_single_fs_bigclock_pane_t1

0xa99c,	// (0x000a6230) main_fs_bigclock_swipe_pane_g1

0xe7dc,	// (0x000aa070) main_fs_bigclock_swipe_pane_g2

0x0001,

0x09d2,	// (0x0009c266) main_fs_bigclock_swipe_pane_g

0xe7e4,	// (0x000aa078) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7e4,	// (0x000aa078) main_fs_bigclock_swipe_pane_t1

0x2d7c,	// (0x0009e610) call_type_pane_ParamLimits

0x9c07,	// (0x000a549b) main_btmg_pane

0xa559,	// (0x000a5ded) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa559,	// (0x000a5ded) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb6a,	// (0x000ab3fe) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb6a,	// (0x000ab3fe) list_single_cale_mrui_row_pane_g

0xa5e1,	// (0x000a5e75) list_recal_vselct_arw_lo_pane

0xe619,	// (0x000a9ead) list_recal_vselct_arw_up_pane

0xa5e9,	// (0x000a5e7d) list_recal_vselct_pane

0x82f3,	// (0x000a3b87) btmg_button_pane

0x82ff,	// (0x000a3b93) main_btmg_pane_g1

0x9c07,	// (0x000a549b) bg_button_pane_cp044

0xe801,	// (0x000aa095) btmg_button_pane_t1

0xc639,	// (0x000a7ecd) aid_listscroll_gen

0xa296,	// (0x000a5b2a) main_cntbar_detail_pane

0xe31e,	// (0x000a9bb2) list_cmail_folder_pane

0xbd1a,	// (0x000a75ae) sp_fs_scroll_pane_cp03_ParamLimits

0x8307,	// (0x000a3b9b) list_single_fs_dyc_pane_cp01_ParamLimits

0x8307,	// (0x000a3b9b) list_single_fs_dyc_pane_cp01

0xe80f,	// (0x000aa0a3) aid_size_cmail_indent

0xa969,	// (0x000a61fd) list_single_dyc_row_pane_cp01

0x8344,	// (0x000a3bd8) cntbar_detail_list_pane_ParamLimits

0x8344,	// (0x000a3bd8) cntbar_detail_list_pane

0x8384,	// (0x000a3c18) main_cntbar_detail_cont_pane_ParamLimits

0x8384,	// (0x000a3c18) main_cntbar_detail_cont_pane

0x2d70,	// (0x0009e604) scroll_pane_cp032_ParamLimits

0x2d70,	// (0x0009e604) scroll_pane_cp032

0x8390,	// (0x000a3c24) cntbar_detail_list_event_pane_ParamLimits

0x8390,	// (0x000a3c24) cntbar_detail_list_event_pane

0x8352,	// (0x000a3be6) cntbar_detail_list_shct_pane

0xac0e,	// (0x000a64a2) aid_list_gen

0xe818,	// (0x000aa0ac) aid_scroll

0xe821,	// (0x000aa0b5) aid_size_touch_scroll_bar

0x83a0,	// (0x000a3c34) aid_list_double

0x83a9,	// (0x000a3c3d) aid_list_single

0x83a9,	// (0x000a3c3d) aid_list_single_lg

0x83b2,	// (0x000a3c46) aid_list_z_g_a_sm

0x83ba,	// (0x000a3c4e) aid_list_z_g_d

0x83c2,	// (0x000a3c56) aid_txt_z_prm

0x83d0,	// (0x000a3c64) aid_txt_z_prm_cp01

0x83de,	// (0x000a3c72) aid_txt_z_sec

0x83ec,	// (0x000a3c80) main_cntbar_detail_cont_pane_g1_ParamLimits

0x83ec,	// (0x000a3c80) main_cntbar_detail_cont_pane_g1

0x83f9,	// (0x000a3c8d) main_cntbar_detail_cont_pane_g2_ParamLimits

0x83f9,	// (0x000a3c8d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbd9,	// (0x000ab46d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbd9,	// (0x000ab46d) main_cntbar_detail_cont_pane_g

0xe82a,	// (0x000aa0be) main_cntbar_detail_cont_pane_t1

0xe838,	// (0x000aa0cc) main_cntbar_detail_cont_pane_t2

0xe846,	// (0x000aa0da) main_cntbar_detail_cont_pane_t3

0x0002,

0x09dc,	// (0x0009c270) main_cntbar_detail_cont_pane_t

0x8405,	// (0x000a3c99) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8405,	// (0x000a3c99) cell_cntbar_detail_list_shct_pane

0xe854,	// (0x000aa0e8) cntbar_detail_list_shct_pane_g1

0xe85d,	// (0x000aa0f1) cntbar_detail_list_shct_pane_g2

0x0001,

0x09e3,	// (0x0009c277) cntbar_detail_list_shct_pane_g

0x8419,	// (0x000a3cad) cntbar_detail_list_event_pane_g1_ParamLimits

0x8419,	// (0x000a3cad) cntbar_detail_list_event_pane_g1

0x8425,	// (0x000a3cb9) cntbar_detail_list_event_pane_g2_ParamLimits

0x8425,	// (0x000a3cb9) cntbar_detail_list_event_pane_g2

0x0005,

0xfbde,	// (0x000ab472) cntbar_detail_list_event_pane_g_ParamLimits

0xfbde,	// (0x000ab472) cntbar_detail_list_event_pane_g

0x8493,	// (0x000a3d27) cntbar_detail_list_event_pane_t1_ParamLimits

0x8493,	// (0x000a3d27) cntbar_detail_list_event_pane_t1

0x84a8,	// (0x000a3d3c) cntbar_detail_list_event_pane_t2_ParamLimits

0x84a8,	// (0x000a3d3c) cntbar_detail_list_event_pane_t2

0x0002,

0xfbeb,	// (0x000ab47f) cntbar_detail_list_event_pane_t_ParamLimits

0xfbeb,	// (0x000ab47f) cntbar_detail_list_event_pane_t

0xa99c,	// (0x000a6230) cell_cntbar_detail_list_shct_pane_g1

0x3129,	// (0x0009e9bd) navi_pane_mv_g3

0xa296,	// (0x000a5b2a) main_cntbar_detail_pane_ParamLimits

0x9c07,	// (0x000a549b) main_notif_wgt_pane

0x4fed,	// (0x000a0881) aid_tch_main_mp4_pane_g4

0x5256,	// (0x000a0aea) popup_slider_window_cp02

0xa5d7,	// (0x000a5e6b) list_recal_day_event_pane

0x8324,	// (0x000a3bb8) cntbar_detail_btn_pane_ParamLimits

0x8324,	// (0x000a3bb8) cntbar_detail_btn_pane

0x8334,	// (0x000a3bc8) cntbar_detail_btn_pane_cp01_ParamLimits

0x8334,	// (0x000a3bc8) cntbar_detail_btn_pane_cp01

0x8352,	// (0x000a3be6) cntbar_detail_list_shct_pane_ParamLimits

0x835e,	// (0x000a3bf2) cntbar_detail_pane_g1_ParamLimits

0x835e,	// (0x000a3bf2) cntbar_detail_pane_g1

0x836e,	// (0x000a3c02) cntbar_detail_pane_t1_ParamLimits

0x836e,	// (0x000a3c02) cntbar_detail_pane_t1

0x8431,	// (0x000a3cc5) cntbar_detail_list_event_pane_g3_ParamLimits

0x8431,	// (0x000a3cc5) cntbar_detail_list_event_pane_g3

0x8449,	// (0x000a3cdd) cntbar_detail_list_event_pane_g4_ParamLimits

0x8449,	// (0x000a3cdd) cntbar_detail_list_event_pane_g4

0x8461,	// (0x000a3cf5) cntbar_detail_list_event_pane_g5_ParamLimits

0x8461,	// (0x000a3cf5) cntbar_detail_list_event_pane_g5

0x8479,	// (0x000a3d0d) cntbar_detail_list_event_pane_g6_ParamLimits

0x8479,	// (0x000a3d0d) cntbar_detail_list_event_pane_g6

0x84bd,	// (0x000a3d51) cntbar_detail_list_event_pane_t3_ParamLimits

0x84bd,	// (0x000a3d51) cntbar_detail_list_event_pane_t3

0x84cf,	// (0x000a3d63) popup_notif_wgt_window_ParamLimits

0x84cf,	// (0x000a3d63) popup_notif_wgt_window

0x84df,	// (0x000a3d73) popup_submenu_window_cp01_ParamLimits

0x84df,	// (0x000a3d73) popup_submenu_window_cp01

0xa90a,	// (0x000a619e) bg_popup_window_pane_cp10

0xe866,	// (0x000aa0fa) listscroll_notif_wgt_pane

0xe878,	// (0x000aa10c) list_notif_wgt_window

0xe881,	// (0x000aa115) scroll_pane_cp033

0x84ef,	// (0x000a3d83) list_notif_wgt_row_pane_ParamLimits

0x84ef,	// (0x000a3d83) list_notif_wgt_row_pane

0xe88a,	// (0x000aa11e) aid_size_list_notif_wgt_del

0xe897,	// (0x000aa12b) list_notif_wgt_row_pane_g1

0xe8a3,	// (0x000aa137) list_notif_wgt_row_pane_g2

0xe8b2,	// (0x000aa146) list_notif_wgt_row_pane_g3

0x0002,

0x09fc,	// (0x0009c290) list_notif_wgt_row_pane_g

0xe8bf,	// (0x000aa153) list_notif_wgt_row_pane_t1

0xe8d5,	// (0x000aa169) list_notif_wgt_row_pane_t2

0xe8e7,	// (0x000aa17b) list_notif_wgt_row_pane_t3

0x0002,

0x0a03,	// (0x0009c297) list_notif_wgt_row_pane_t

0xd569,	// (0x000a8dfd) list_recal_day_event_pane_g1

0xe8f9,	// (0x000aa18d) list_recal_day_event_pane_t1

0x9c07,	// (0x000a549b) bg_button_pane_cp045

0x8503,	// (0x000a3d97) cntbar_detail_btn_pane_t1

0xb663,	// (0x000a6ef7) main_callh_pane_ParamLimits

0xb663,	// (0x000a6ef7) main_callh_pane

0x9c07,	// (0x000a549b) main_coverflow0_pane

0x9c07,	// (0x000a549b) main_wgtman_pane

0x74f8,	// (0x000a2d8c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x74f8,	// (0x000a2d8c) main_fs_bigclock_unlock_btn_pane

0x7ce7,	// (0x000a357b) bg_button_pane_cp16

0x7cf7,	// (0x000a358b) cell_tport_appsw_pane_g3

0x8511,	// (0x000a3da5) cf0_flow_pane_ParamLimits

0x8511,	// (0x000a3da5) cf0_flow_pane

0xe908,	// (0x000aa19c) listscroll_cf0_pane

0xe913,	// (0x000aa1a7) main_cf0_pane_g1

0x8520,	// (0x000a3db4) main_cf0_pane_t1_ParamLimits

0x8520,	// (0x000a3db4) main_cf0_pane_t1

0x8534,	// (0x000a3dc8) main_cf0_pane_t2_ParamLimits

0x8534,	// (0x000a3dc8) main_cf0_pane_t2

0x0001,

0xfbf2,	// (0x000ab486) main_cf0_pane_t_ParamLimits

0xfbf2,	// (0x000ab486) main_cf0_pane_t

0xe925,	// (0x000aa1b9) scroll_pane_cp11

0x8548,	// (0x000a3ddc) cf0_flow_pane_g1

0x8550,	// (0x000a3de4) cf0_flow_pane_g2

0x0001,

0xfbf7,	// (0x000ab48b) cf0_flow_pane_g

0x8558,	// (0x000a3dec) cf0_flow_pane_t1

0x9c07,	// (0x000a549b) main_call6_pane

0x9c07,	// (0x000a549b) main_calllock_pane

0x8566,	// (0x000a3dfa) call6_btn_grp_pane_ParamLimits

0x8566,	// (0x000a3dfa) call6_btn_grp_pane

0x8573,	// (0x000a3e07) call6_pane_g1_ParamLimits

0x8573,	// (0x000a3e07) call6_pane_g1

0x8583,	// (0x000a3e17) popup_call6_1st_window_ParamLimits

0x8583,	// (0x000a3e17) popup_call6_1st_window

0x8593,	// (0x000a3e27) popup_call6_2nd_window_ParamLimits

0x8593,	// (0x000a3e27) popup_call6_2nd_window

0x85a3,	// (0x000a3e37) cell_call6_btn_pane_ParamLimits

0x85a3,	// (0x000a3e37) cell_call6_btn_pane

0xa90a,	// (0x000a619e) bg_popup_call2_in_pane_cp03

0xe930,	// (0x000aa1c4) popup_call6_1st_window_g1

0xe938,	// (0x000aa1cc) popup_call6_1st_window_g2

0xe940,	// (0x000aa1d4) popup_call6_1st_window_g3

0x0002,

0x0a19,	// (0x0009c2ad) popup_call6_1st_window_g

0xe948,	// (0x000aa1dc) popup_call6_1st_window_t1

0xe957,	// (0x000aa1eb) popup_call6_1st_window_t2

0xe967,	// (0x000aa1fb) popup_call6_1st_window_t3

0x0002,

0x0a20,	// (0x0009c2b4) popup_call6_1st_window_t

0xa90a,	// (0x000a619e) bg_popup_call2_in_pane_cp04

0xe977,	// (0x000aa20b) popup_call6_2nd_window_g1

0xe97f,	// (0x000aa213) popup_call6_2nd_window_g2

0xe987,	// (0x000aa21b) popup_call6_2nd_window_g3

0x0002,

0x0a27,	// (0x0009c2bb) popup_call6_2nd_window_g

0xe98f,	// (0x000aa223) popup_call6_2nd_window_t1

0x0efd,	// (0x0009c791) bg_button_pane_cp15

0x85b4,	// (0x000a3e48) cell_call6_btn_pane_g1

0x85bd,	// (0x000a3e51) cell_call6_btn_pane_t1

0x85cc,	// (0x000a3e60) listscroll_wgtman_pane_ParamLimits

0x85cc,	// (0x000a3e60) listscroll_wgtman_pane

0x85e8,	// (0x000a3e7c) wgtman_btn_pane_ParamLimits

0x85e8,	// (0x000a3e7c) wgtman_btn_pane

0xb189,	// (0x000a6a1d) aid_scroll_copy1

0xe99e,	// (0x000aa232) list_wgtman_pane

0x861d,	// (0x000a3eb1) wgtman_btn_pane_g1_ParamLimits

0x861d,	// (0x000a3eb1) wgtman_btn_pane_g1

0x8645,	// (0x000a3ed9) wgtman_btn_pane_t1_ParamLimits

0x8645,	// (0x000a3ed9) wgtman_btn_pane_t1

0xe9a8,	// (0x000aa23c) wgtman_btn_pane_t2_ParamLimits

0xe9a8,	// (0x000aa23c) wgtman_btn_pane_t2

0x0001,

0xfbfc,	// (0x000ab490) wgtman_btn_pane_t_ParamLimits

0xfbfc,	// (0x000ab490) wgtman_btn_pane_t

0x867c,	// (0x000a3f10) listrow_wgtman_pane_ParamLimits

0x867c,	// (0x000a3f10) listrow_wgtman_pane

0x8693,	// (0x000a3f27) listrow_wgtman_pane_g1

0x86a0,	// (0x000a3f34) listrow_wgtman_pane_g2

0x0001,

0xfc01,	// (0x000ab495) listrow_wgtman_pane_g

0x86be,	// (0x000a3f52) listrow_wgtman_pane_t1

0x86d6,	// (0x000a3f6a) listrow_wgtman_pane_t2

0x0001,

0xfc06,	// (0x000ab49a) listrow_wgtman_pane_t

0x86fc,	// (0x000a3f90) wait_bar_pane_cp09

0xe9bf,	// (0x000aa253) main_calllock_btn_pane

0xe9c9,	// (0x000aa25d) main_calllock_pane_g1

0x9c07,	// (0x000a549b) bg_button_pane_cp17

0xe9d5,	// (0x000aa269) main_calllock_btn_pane_g1

0xe9de,	// (0x000aa272) main_calllock_btn_pane_t1

0x9c07,	// (0x000a549b) main_dialer3_pane

0x9c07,	// (0x000a549b) main_fmrd2_pane

0xa99c,	// (0x000a6230) main_fs_bigclock_unlock_btn_pane_g1

0x8716,	// (0x000a3faa) main_fs_bigclock_unlock_btn_pane_t1

0x8724,	// (0x000a3fb8) area_fmrd2_info_pane_ParamLimits

0x8724,	// (0x000a3fb8) area_fmrd2_info_pane

0x8730,	// (0x000a3fc4) area_fmrd2_visual_pane_ParamLimits

0x8730,	// (0x000a3fc4) area_fmrd2_visual_pane

0x873e,	// (0x000a3fd2) fmrd2_indi_pane_ParamLimits

0x873e,	// (0x000a3fd2) fmrd2_indi_pane

0x874b,	// (0x000a3fdf) area_fmrd2_visual_pane_g1

0x8753,	// (0x000a3fe7) area_fmrd2_visual_pane_t1

0x8763,	// (0x000a3ff7) area_fmrd2_visual_pane_t2

0x8773,	// (0x000a4007) area_fmrd2_visual_pane_t3

0x0002,

0xfc10,	// (0x000ab4a4) area_fmrd2_visual_pane_t

0x8783,	// (0x000a4017) area_fmrd2_info_pane_g1

0x878b,	// (0x000a401f) area_fmrd2_info_pane_t1

0x879b,	// (0x000a402f) area_fmrd2_info_pane_t2

0x87ab,	// (0x000a403f) area_fmrd2_info_pane_t3

0x87bb,	// (0x000a404f) area_fmrd2_info_pane_t4

0x0003,

0xfc17,	// (0x000ab4ab) area_fmrd2_info_pane_t

0x87cb,	// (0x000a405f) fmrd2_indi_pane_t1

0x87db,	// (0x000a406f) fmrd2_indi_pane_t2

0x87eb,	// (0x000a407f) fmrd2_indi_pane_t3

0x0002,

0xfc20,	// (0x000ab4b4) fmrd2_indi_pane_t

0x7580,	// (0x000a2e14) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7580,	// (0x000a2e14) list_single_fs_bigclock_indicator_pane_g5

0x7635,	// (0x000a2ec9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7635,	// (0x000a2ec9) list_single_fs_bigclock_indicator_pane_t5

0x7ecb,	// (0x000a375f) aid_cell_bcale_month_pane_ParamLimits

0x7ecb,	// (0x000a375f) aid_cell_bcale_month_pane

0x7ee9,	// (0x000a377d) bcale_month_pane_ParamLimits

0x7ee9,	// (0x000a377d) bcale_month_pane

0x7f07,	// (0x000a379b) bcale_preview_pane_ParamLimits

0x7f07,	// (0x000a379b) bcale_preview_pane

0xe799,	// (0x000aa02d) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7b8,	// (0x000aa04c) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7b8,	// (0x000aa04c) list_single_fs_bigclock_pane_t2

0x0001,

0x09cd,	// (0x0009c261) list_single_fs_bigclock_pane_t_ParamLimits

0x09cd,	// (0x0009c261) list_single_fs_bigclock_pane_t

0x870e,	// (0x000a3fa2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc0b,	// (0x000ab49f) main_fs_bigclock_unlock_btn_pane_g

0x87fb,	// (0x000a408f) aid_dia3_key_size_ParamLimits

0x87fb,	// (0x000a408f) aid_dia3_key_size

0x8807,	// (0x000a409b) aid_dia3_listrow_size_ParamLimits

0x8807,	// (0x000a409b) aid_dia3_listrow_size

0x8817,	// (0x000a40ab) dia3_keypad_fun_pane_ParamLimits

0x8817,	// (0x000a40ab) dia3_keypad_fun_pane

0x8827,	// (0x000a40bb) dia3_keypad_num_pane_ParamLimits

0x8827,	// (0x000a40bb) dia3_keypad_num_pane

0x8837,	// (0x000a40cb) dia3_listscroll_pane_ParamLimits

0x8837,	// (0x000a40cb) dia3_listscroll_pane

0x8845,	// (0x000a40d9) dia3_numentry_pane_ParamLimits

0x8845,	// (0x000a40d9) dia3_numentry_pane

0xe9ed,	// (0x000aa281) dia3_list_pane

0x8853,	// (0x000a40e7) scroll_pane_cp12

0x9c07,	// (0x000a549b) bg_dia3_numentry_pane

0x885e,	// (0x000a40f2) dia3_numentry_pane_t1

0x886d,	// (0x000a4101) cell_dia3_key_num_pane

0x8875,	// (0x000a4109) cell_dia3_key0_fun_pane_ParamLimits

0x8875,	// (0x000a4109) cell_dia3_key0_fun_pane

0x8882,	// (0x000a4116) cell_dia3_key1_fun_pane_ParamLimits

0x8882,	// (0x000a4116) cell_dia3_key1_fun_pane

0x888f,	// (0x000a4123) dia3_listrow_pane

0xde4e,	// (0x000a96e2) bg_dia3_numentry_pane_g1

0x9c07,	// (0x000a549b) bg_button_pane_cp21

0x889c,	// (0x000a4130) cell_dia3_key_num_pane_t1

0x88aa,	// (0x000a413e) cell_dia3_key_num_pane_t2

0x88b9,	// (0x000a414d) cell_dia3_key_num_pane_t3

0x88c8,	// (0x000a415c) cell_dia3_key_num_pane_t4

0x0003,

0xfc27,	// (0x000ab4bb) cell_dia3_key_num_pane_t

0x9c07,	// (0x000a549b) bg_button_pane_cp19

0x88d7,	// (0x000a416b) cell_dia3_key0_fun_pane_g1

0x9c07,	// (0x000a549b) bg_button_pane_cp20

0x88df,	// (0x000a4173) cell_dia3_key1_fun_pane_g1

0x88e7,	// (0x000a417b) area_left_week_number_pane

0x88fa,	// (0x000a418e) area_top_day_name_pane

0x8908,	// (0x000a419c) frame_month_view_pane

0xe9f8,	// (0x000aa28c) grid_month_view_pane

0x891d,	// (0x000a41b1) cell_top_day_name_pane_ParamLimits

0x891d,	// (0x000a41b1) cell_top_day_name_pane

0x8939,	// (0x000a41cd) cell_area_left_week_number_pane_ParamLimits

0x8939,	// (0x000a41cd) cell_area_left_week_number_pane

0x895a,	// (0x000a41ee) cell_month_view_pane_ParamLimits

0x895a,	// (0x000a41ee) cell_month_view_pane

0xea06,	// (0x000aa29a) frm_month_g1

0x8986,	// (0x000a421a) frm_month_g2

0x8997,	// (0x000a422b) frm_month_g3

0x89a8,	// (0x000a423c) frm_month_g4

0x89b9,	// (0x000a424d) frm_month_g5

0x89ca,	// (0x000a425e) frm_month_g6

0x89dd,	// (0x000a4271) frm_month_g7

0xea13,	// (0x000aa2a7) frm_month_g8

0x89f0,	// (0x000a4284) frm_month_g9

0x89fd,	// (0x000a4291) frm_month_g10

0x8a0a,	// (0x000a429e) frm_month_g11

0x8a17,	// (0x000a42ab) frm_month_g12

0x8a24,	// (0x000a42b8) frm_month_g13

0x8a33,	// (0x000a42c7) frm_month_g14

0x8a42,	// (0x000a42d6) frm_month_g15

0x8a51,	// (0x000a42e5) frm_month_g16

0x000f,

0xfc30,	// (0x000ab4c4) frm_month_g

0xea20,	// (0x000aa2b4) cell_top_day_name_pane_t1

0x8a60,	// (0x000a42f4) cell_area_left_week_number_pane_g1

0x8a6f,	// (0x000a4303) cell_area_left_week_number_pane_t1

0xa6fa,	// (0x000a5f8e) cell_month_view_pane_g1

0x8a85,	// (0x000a4319) cell_month_view_pane_t1

0x9c07,	// (0x000a549b) main_fps_pane

0xe24c,	// (0x000a9ae0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe24c,	// (0x000a9ae0) cmail_ddmenu_btn02_pane_cp1

0xe268,	// (0x000a9afc) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe268,	// (0x000a9afc) cmail_ddmenu_btn02_pane_cp2

0x81cf,	// (0x000a3a63) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x81cf,	// (0x000a3a63) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfba5,	// (0x000ab439) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfba5,	// (0x000ab439) cmail_ddmenu_btn02_pane_g

0x81ed,	// (0x000a3a81) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x81ed,	// (0x000a3a81) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfbaa,	// (0x000ab43e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfbaa,	// (0x000ab43e) cmail_ddmenu_btn02_pane_t

0x8a9b,	// (0x000a432f) fps_text_pane_ParamLimits

0x8a9b,	// (0x000a432f) fps_text_pane

0x8aa8,	// (0x000a433c) main_fps_pane_g1_ParamLimits

0x8aa8,	// (0x000a433c) main_fps_pane_g1

0x8ab4,	// (0x000a4348) wait_bar_pane_cp010_ParamLimits

0x8ab4,	// (0x000a4348) wait_bar_pane_cp010

0x8ac0,	// (0x000a4354) fps_text_pane_t1_ParamLimits

0x8ac0,	// (0x000a4354) fps_text_pane_t1

0x5715,	// (0x000a0fa9) cam4_image_uncrop_pane_g1

0x571e,	// (0x000a0fb2) cam4_image_uncrop_pane_g2

0x5727,	// (0x000a0fbb) cam4_image_uncrop_pane_g3

0x5730,	// (0x000a0fc4) cam4_image_uncrop_pane_g4

0x0003,

0xf783,	// (0x000ab017) cam4_image_uncrop_pane_g

0x888f,	// (0x000a4123) dia3_listrow_pane_ParamLimits

0x9c07,	// (0x000a549b) main_phob2_pane

0x7ca4,	// (0x000a3538) cell_tport_appsw_pane_cp02_ParamLimits

0x7ca4,	// (0x000a3538) cell_tport_appsw_pane_cp02

0x7cb3,	// (0x000a3547) cell_tport_appsw_pane_cp03_ParamLimits

0x7cb3,	// (0x000a3547) cell_tport_appsw_pane_cp03

0x9c07,	// (0x000a549b) phob2_contact_card_pane

0x9c07,	// (0x000a549b) phob2_listscroll_pane

0xea33,	// (0x000aa2c7) phob2_list_pane

0xea3b,	// (0x000aa2cf) scroll_pane_cp034

0x8ad9,	// (0x000a436d) phob2_cc_data_pane_ParamLimits

0x8ad9,	// (0x000a436d) phob2_cc_data_pane

0x8af0,	// (0x000a4384) phob2_cc_listscroll_pane_ParamLimits

0x8af0,	// (0x000a4384) phob2_cc_listscroll_pane

0x8b0c,	// (0x000a43a0) list_double_large_graphic_phob2_pane_ParamLimits

0x8b0c,	// (0x000a43a0) list_double_large_graphic_phob2_pane

0x8b20,	// (0x000a43b4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8b20,	// (0x000a43b4) list_double_large_graphic_phob2_pane_g1

0x8b2d,	// (0x000a43c1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8b2d,	// (0x000a43c1) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfc51,	// (0x000ab4e5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc51,	// (0x000ab4e5) list_double_large_graphic_phob2_pane_g

0x8b53,	// (0x000a43e7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8b53,	// (0x000a43e7) list_double_large_graphic_phob2_pane_t1

0x8b68,	// (0x000a43fc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8b68,	// (0x000a43fc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc5a,	// (0x000ab4ee) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc5a,	// (0x000ab4ee) list_double_large_graphic_phob2_pane_t

0x9c07,	// (0x000a549b) list_highlight_pane_cp024

0x8b7d,	// (0x000a4411) phob2_cc_button_pane

0x8b87,	// (0x000a441b) phob2_cc_data_pane_g1_ParamLimits

0x8b87,	// (0x000a441b) phob2_cc_data_pane_g1

0x8b9a,	// (0x000a442e) phob2_cc_data_pane_g2_ParamLimits

0x8b9a,	// (0x000a442e) phob2_cc_data_pane_g2

0x0001,

0xfc5f,	// (0x000ab4f3) phob2_cc_data_pane_g_ParamLimits

0xfc5f,	// (0x000ab4f3) phob2_cc_data_pane_g

0x8bae,	// (0x000a4442) phob2_cc_data_pane_t1_ParamLimits

0x8bae,	// (0x000a4442) phob2_cc_data_pane_t1

0x8bcf,	// (0x000a4463) phob2_cc_data_pane_t2_ParamLimits

0x8bcf,	// (0x000a4463) phob2_cc_data_pane_t2

0x8bf0,	// (0x000a4484) phob2_cc_data_pane_t3_ParamLimits

0x8bf0,	// (0x000a4484) phob2_cc_data_pane_t3

0x0002,

0xfc64,	// (0x000ab4f8) phob2_cc_data_pane_t_ParamLimits

0xfc64,	// (0x000ab4f8) phob2_cc_data_pane_t

0xea43,	// (0x000aa2d7) phob2_cc_list_pane_ParamLimits

0xea43,	// (0x000aa2d7) phob2_cc_list_pane

0xd767,	// (0x000a8ffb) scroll_pane_cp035_ParamLimits

0xd767,	// (0x000a8ffb) scroll_pane_cp035

0xa296,	// (0x000a5b2a) bg_button_pane_cp033

0x8c11,	// (0x000a44a5) phob2_cc_button_pane_g1

0x8c1d,	// (0x000a44b1) phob2_cc_button_pane_t1

0x8c32,	// (0x000a44c6) phob2_cc_button_pane_t2

0x0001,

0xfc6b,	// (0x000ab4ff) phob2_cc_button_pane_t

0x8c44,	// (0x000a44d8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8c44,	// (0x000a44d8) list_double_large_graphic_phob2_cc_pane

0x8c91,	// (0x000a4525) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8c91,	// (0x000a4525) list_double_large_graphic_phob2_cc_pane_g1

0x8ca2,	// (0x000a4536) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8ca2,	// (0x000a4536) list_double_large_graphic_phob2_cc_pane_g2

0x8cb1,	// (0x000a4545) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8cb1,	// (0x000a4545) list_double_large_graphic_phob2_cc_pane_g3

0x8cc0,	// (0x000a4554) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8cc0,	// (0x000a4554) list_double_large_graphic_phob2_cc_pane_g4

0x8cd1,	// (0x000a4565) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8cd1,	// (0x000a4565) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc70,	// (0x000ab504) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc70,	// (0x000ab504) list_double_large_graphic_phob2_cc_pane_g

0x8ce0,	// (0x000a4574) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8ce0,	// (0x000a4574) list_double_large_graphic_phob2_cc_pane_t1

0x8d09,	// (0x000a459d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8d09,	// (0x000a459d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc7b,	// (0x000ab50f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc7b,	// (0x000ab50f) list_double_large_graphic_phob2_cc_pane_t

0xea4f,	// (0x000aa2e3) list_highlight_pane_cp025_ParamLimits

0xea4f,	// (0x000aa2e3) list_highlight_pane_cp025

0xa296,	// (0x000a5b2a) bg_button_pane_cp033_ParamLimits

0x8c11,	// (0x000a44a5) phob2_cc_button_pane_g1_ParamLimits

0x8c1d,	// (0x000a44b1) phob2_cc_button_pane_t1_ParamLimits

0x8c32,	// (0x000a44c6) phob2_cc_button_pane_t2_ParamLimits

0xfc6b,	// (0x000ab4ff) phob2_cc_button_pane_t_ParamLimits

0x0ef1,	// (0x0009c785) popup_wgtman_window

0xd425,	// (0x000a8cb9) scroll_pane_cp038

0x8605,	// (0x000a3e99) wgtman_btn_pane_cp_01_ParamLimits

0x8605,	// (0x000a3e99) wgtman_btn_pane_cp_01

0xea5d,	// (0x000aa2f1) wgtman_content_pane

0xea66,	// (0x000aa2fa) wgtman_heading_pane

0x9c07,	// (0x000a549b) bg_heading_pane_cp02

0xea6f,	// (0x000aa303) wgtman_heading_pane_g1

0xea77,	// (0x000aa30b) wgtman_heading_pane_t1

0xea85,	// (0x000aa319) scroll_pane_cp036

0xea8d,	// (0x000aa321) wgtman_list_pane

0xe474,	// (0x000a9d08) wgtman_list_pane_t1_ParamLimits

0xe474,	// (0x000a9d08) wgtman_list_pane_t1

0x5672,	// (0x000a0f06) cam4_grid_pane

0x6379,	// (0x000a1c0d) bg_button_pane_cp015_ParamLimits

0x638e,	// (0x000a1c22) bg_button_pane_cp016_ParamLimits

0x639a,	// (0x000a1c2e) bg_button_pane_cp017_ParamLimits

0x63f3,	// (0x000a1c87) popup_vitu2_query_window_g3_ParamLimits

0x63f3,	// (0x000a1c87) popup_vitu2_query_window_g3

0x6494,	// (0x000a1d28) popup_vitu2_query_window_t6_ParamLimits

0x6494,	// (0x000a1d28) popup_vitu2_query_window_t6

0x64bf,	// (0x000a1d53) popup_vitu2_query_window_t7_ParamLimits

0x64bf,	// (0x000a1d53) popup_vitu2_query_window_t7

0xd42e,	// (0x000a8cc2) cam4_grid_pane_g1

0xd437,	// (0x000a8ccb) cam4_grid_pane_g2

0xea95,	// (0x000aa329) cam4_grid_pane_g3

0xea9e,	// (0x000aa332) cam4_grid_pane_g4

0x0003,

0xfc80,	// (0x000ab514) cam4_grid_pane_g

0x1bdb,	// (0x0009d46f) aid_placing_vt_slider_lsc_ParamLimits

0x1f0e,	// (0x0009d7a2) vidtel_button_pane_ParamLimits

0x1f0e,	// (0x0009d7a2) vidtel_button_pane

0x9c07,	// (0x000a549b) bg_button_pane_cp034

0xeaa9,	// (0x000aa33d) vidtel_button_pane_g1

0xeab1,	// (0x000aa345) vidtel_button_pane_t1

0xd547,	// (0x000a8ddb) aid_size_vtel_slider_touch

0xd767,	// (0x000a8ffb) scroll_pane_cp039

0x7227,	// (0x000a2abb) ncim_query_button_pane_cp01_ParamLimits

0x7246,	// (0x000a2ada) ncimui_query_pane_g1_ParamLimits

0xa296,	// (0x000a5b2a) input_focus_pane_cp012_ParamLimits

0xde8c,	// (0x000a9720) ncim_query_entry_pane_t1_ParamLimits

0xd767,	// (0x000a8ffb) scroll_pane_cp039_ParamLimits

0x309b,	// (0x0009e92f) navi_pane_bcale_mc_g1

0x30a3,	// (0x0009e937) navi_pane_bcale_mc_t1

0xe29e,	// (0x000a9b32) main_sp_fs_email_pane_g1

0xe2aa,	// (0x000a9b3e) main_sp_fs_email_pane_g2

0x0001,

0xfae8,	// (0x000ab37c) main_sp_fs_email_pane_g

0xe520,	// (0x000a9db4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe520,	// (0x000a9db4) list_single_cale_mrui_row_pane_g3

0x820d,	// (0x000a3aa1) list_single_recal_day_pane_g5_event_pane

0xa635,	// (0x000a5ec9) list_single_recal_day_pane_g7

0xeac7,	// (0x000aa35b) list_recal_day_event_pane_cp01

0xead0,	// (0x000aa364) list_recal_vselct_arw_lo_pane_cp01

0xead8,	// (0x000aa36c) list_recal_vselct_arw_up_pane_cp01

0xeae0,	// (0x000aa374) list_recal_vselct_pane_cp01

0xd569,	// (0x000a8dfd) list_recal_day_event_pane_cp01_g1

0xa972,	// (0x000a6206) list_recal_day_event_pane_cp01_t1

0xa63d,	// (0x000a5ed1) list_single_recal_day_pane_t1_ParamLimits

0xa64f,	// (0x000a5ee3) list_single_recal_day_pane_t2_ParamLimits

0xfbba,	// (0x000ab44e) list_single_recal_day_pane_t_ParamLimits

0xa67f,	// (0x000a5f13) bg_notes_pane_ParamLimits

0xa74a,	// (0x000a5fde) list_notes_pane_ParamLimits

0x10c4,	// (0x0009c958) scroll_pane_cp06_ParamLimits

0xa76c,	// (0x000a6000) main_notes_pane_ParamLimits

0xa296,	// (0x000a5b2a) main_welc_pane

0x8d54,	// (0x000a45e8) main_welc_body_pane_ParamLimits

0x8d54,	// (0x000a45e8) main_welc_body_pane

0x8d6f,	// (0x000a4603) main_welc_opti_pane_ParamLimits

0x8d6f,	// (0x000a4603) main_welc_opti_pane

0x8dd0,	// (0x000a4664) main_welc_pane_t1_ParamLimits

0x8dd0,	// (0x000a4664) main_welc_pane_t1

0x8f76,	// (0x000a480a) main_welc_body_row_pane_ParamLimits

0x8f76,	// (0x000a480a) main_welc_body_row_pane

0xa6ec,	// (0x000a5f80) main_welc_opti_row_pane_ParamLimits

0xa6ec,	// (0x000a5f80) main_welc_opti_row_pane

0xeafa,	// (0x000aa38e) main_welc_opti_row_pane_g1

0x8f90,	// (0x000a4824) main_welc_opti_row_pane_t1

0xeb02,	// (0x000aa396) main_welc_body_row_pane_t1

0xe870,	// (0x000aa104) popup_notif_wgt_heading_pane

0xe88a,	// (0x000aa11e) aid_size_list_notif_wgt_del_ParamLimits

0xe897,	// (0x000aa12b) list_notif_wgt_row_pane_g1_ParamLimits

0xe8a3,	// (0x000aa137) list_notif_wgt_row_pane_g2_ParamLimits

0xe8b2,	// (0x000aa146) list_notif_wgt_row_pane_g3_ParamLimits

0x09fc,	// (0x0009c290) list_notif_wgt_row_pane_g_ParamLimits

0xe8bf,	// (0x000aa153) list_notif_wgt_row_pane_t1_ParamLimits

0xe8d5,	// (0x000aa169) list_notif_wgt_row_pane_t2_ParamLimits

0xe8e7,	// (0x000aa17b) list_notif_wgt_row_pane_t3_ParamLimits

0x0a03,	// (0x0009c297) list_notif_wgt_row_pane_t_ParamLimits

0x8693,	// (0x000a3f27) listrow_wgtman_pane_g1_ParamLimits

0x86a0,	// (0x000a3f34) listrow_wgtman_pane_g2_ParamLimits

0xfc01,	// (0x000ab495) listrow_wgtman_pane_g_ParamLimits

0x86be,	// (0x000a3f52) listrow_wgtman_pane_t1_ParamLimits

0x86d6,	// (0x000a3f6a) listrow_wgtman_pane_t2_ParamLimits

0xfc06,	// (0x000ab49a) listrow_wgtman_pane_t_ParamLimits

0x86fc,	// (0x000a3f90) wait_bar_pane_cp09_ParamLimits

0x9c07,	// (0x000a549b) bg_popup_heading_pane_cp02

0xeb11,	// (0x000aa3a5) popup_notif_wgt_heading_pane_g1

0xeb19,	// (0x000aa3ad) popup_notif_wgt_heading_pane_t1

0x9c07,	// (0x000a549b) main_vids_pane

0x9c07,	// (0x000a549b) vids_listscroll_pane

0x8f9f,	// (0x000a4833) scroll_pane_cp040

0x9c07,	// (0x000a549b) vids_list_pane

0x8faa,	// (0x000a483e) vids_list_double_pane_ParamLimits

0x8faa,	// (0x000a483e) vids_list_double_pane

0x8fbe,	// (0x000a4852) vids_list_double_pane_g1

0x8fc7,	// (0x000a485b) vids_list_double_pane_t1

0x8fd7,	// (0x000a486b) vids_list_double_pane_t2

0x0001,

0xfc9f,	// (0x000ab533) vids_list_double_pane_t

0x3d02,	// (0x0009f596) main_ncimui_pane_ParamLimits

0x7068,	// (0x000a28fc) main_ncimui_pane_g1_ParamLimits

0x7076,	// (0x000a290a) main_ncimui_pane_g2_ParamLimits

0x7076,	// (0x000a290a) main_ncimui_pane_g2

0x0001,

0xfa40,	// (0x000ab2d4) main_ncimui_pane_g_ParamLimits

0xfa40,	// (0x000ab2d4) main_ncimui_pane_g

0x8d8a,	// (0x000a461e) main_welc_pane_g1_ParamLimits

0x8d8a,	// (0x000a461e) main_welc_pane_g1

0x8d96,	// (0x000a462a) main_welc_pane_g2_ParamLimits

0x8d96,	// (0x000a462a) main_welc_pane_g2

0x0003,

0xfc89,	// (0x000ab51d) main_welc_pane_g_ParamLimits

0xfc89,	// (0x000ab51d) main_welc_pane_g

0xa67f,	// (0x000a5f13) listscroll_mce_pane_ParamLimits

0x3165,	// (0x0009e9f9) wait_bar_pane_cp10

0xc641,	// (0x000a7ed5) main_cale_day_pane_ParamLimits

0xc641,	// (0x000a7ed5) main_cale_week_pane_ParamLimits

0xa67f,	// (0x000a5f13) main_messa_pane_ParamLimits

0x4ab7,	// (0x000a034b) main_clock2_btn_pane_ParamLimits

0x4ab7,	// (0x000a034b) main_clock2_btn_pane

0xce05,	// (0x000a8699) main_clock2_btn_pane_cp01_ParamLimits

0xce05,	// (0x000a8699) main_clock2_btn_pane_cp01

0xe4f1,	// (0x000a9d85) list_cale_mrui_pane_ParamLimits

0xe91d,	// (0x000aa1b1) main_cf0_pane_g2

0x0001,

0x0a0a,	// (0x0009c29e) main_cf0_pane_g

0x88e7,	// (0x000a417b) area_left_week_number_pane_ParamLimits

0x88fa,	// (0x000a418e) area_top_day_name_pane_ParamLimits

0x8908,	// (0x000a419c) frame_month_view_pane_ParamLimits

0xe9f8,	// (0x000aa28c) grid_month_view_pane_ParamLimits

0xea06,	// (0x000aa29a) frm_month_g1_ParamLimits

0x8986,	// (0x000a421a) frm_month_g2_ParamLimits

0x8997,	// (0x000a422b) frm_month_g3_ParamLimits

0x89a8,	// (0x000a423c) frm_month_g4_ParamLimits

0x89b9,	// (0x000a424d) frm_month_g5_ParamLimits

0x89ca,	// (0x000a425e) frm_month_g6_ParamLimits

0x89dd,	// (0x000a4271) frm_month_g7_ParamLimits

0xea13,	// (0x000aa2a7) frm_month_g8_ParamLimits

0x89f0,	// (0x000a4284) frm_month_g9_ParamLimits

0x89fd,	// (0x000a4291) frm_month_g10_ParamLimits

0x8a0a,	// (0x000a429e) frm_month_g11_ParamLimits

0x8a17,	// (0x000a42ab) frm_month_g12_ParamLimits

0x8a24,	// (0x000a42b8) frm_month_g13_ParamLimits

0x8a33,	// (0x000a42c7) frm_month_g14_ParamLimits

0x8a42,	// (0x000a42d6) frm_month_g15_ParamLimits

0x8a51,	// (0x000a42e5) frm_month_g16_ParamLimits

0xfc30,	// (0x000ab4c4) frm_month_g_ParamLimits

0xea20,	// (0x000aa2b4) cell_top_day_name_pane_t1_ParamLimits

0x8a60,	// (0x000a42f4) cell_area_left_week_number_pane_g1_ParamLimits

0x8a6f,	// (0x000a4303) cell_area_left_week_number_pane_t1_ParamLimits

0xa6fa,	// (0x000a5f8e) cell_month_view_pane_g1_ParamLimits

0x8a85,	// (0x000a4319) cell_month_view_pane_t1_ParamLimits

0xa677,	// (0x000a5f0b) main_clock2_btn_pane_g1

0xeb27,	// (0x000aa3bb) main_clock2_btn_pane_t1

0xa296,	// (0x000a5b2a) listscroll_cmail_pane_ParamLimits

0xe29e,	// (0x000a9b32) main_sp_fs_email_pane_g1_ParamLimits

0xe2aa,	// (0x000a9b3e) main_sp_fs_email_pane_g2_ParamLimits

0xfae8,	// (0x000ab37c) main_sp_fs_email_pane_g_ParamLimits

0xe5fa,	// (0x000a9e8e) list_recal_day_pane_ParamLimits

0xe60b,	// (0x000a9e9f) mian_recal_day_pane_t1

0x7b82,	// (0x000a3416) list_single_dyc_row_text_pane_t4_ParamLimits

0x7b82,	// (0x000a3416) list_single_dyc_row_text_pane_t4

0x7bc7,	// (0x000a345b) list_single_dyc_row_text_pane_t5_ParamLimits

0x7bc7,	// (0x000a345b) list_single_dyc_row_text_pane_t5

0xa41d,	// (0x000a5cb1) list_single_dyc_row_text_pane_t6_ParamLimits

0xa41d,	// (0x000a5cb1) list_single_dyc_row_text_pane_t6

0x2cc4,	// (0x0009e558) aid_mgn_list_cale_time_pane

0x3d02,	// (0x0009f596) main_gallery2_pane_ParamLimits

0xce19,	// (0x000a86ad) main_clock2_pane_cp01_t1

0xce27,	// (0x000a86bb) main_clock2_pane_cp01_t3

0x0001,

0xf686,	// (0x000aaf1a) main_clock2_pane_cp01_t

0x15ce,	// (0x0009ce62) cale_week_scroll_pane_g16_ParamLimits

0x15ce,	// (0x0009ce62) cale_week_scroll_pane_g16

0xa90a,	// (0x000a619e) vorec_slider_pane

0xeab1,	// (0x000aa345) vidtel_button_pane_t1_ParamLimits

0x8268,	// (0x000a3afc) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8268,	// (0x000a3afc) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8277,	// (0x000a3b0b) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8277,	// (0x000a3b0b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfbc4,	// (0x000ab458) main_fs_bigclock_clock_pane_g_ParamLimits

0x8287,	// (0x000a3b1b) main_fs_bigclock_clock_pane_t1_ParamLimits

0x829c,	// (0x000a3b30) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfbcd,	// (0x000ab461) main_fs_bigclock_clock_pane_t_ParamLimits

0x4401,	// (0x0009fc95) main_mup3_lyrics_pane_ParamLimits

0x4401,	// (0x0009fc95) main_mup3_lyrics_pane

0x900c,	// (0x000a48a0) main_mup3_lyrics_pane_t1_ParamLimits

0x900c,	// (0x000a48a0) main_mup3_lyrics_pane_t1

0x4fd7,	// (0x000a086b) aid_main_mp4_pane_t1_area

0x4fe1,	// (0x000a0875) aid_main_mp4_pane_t2_area

0x50ee,	// (0x000a0982) main_mp4_pane_g7_ParamLimits

0x50ee,	// (0x000a0982) main_mp4_pane_g7

0x50fa,	// (0x000a098e) main_mp4_pane_g8_ParamLimits

0x50fa,	// (0x000a098e) main_mp4_pane_g8

0x551a,	// (0x000a0dae) aid_call6_pane_g1_size

0x8c70,	// (0x000a4504) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8c70,	// (0x000a4504) list_double_large_graphic_phob2_other_pane

0x9033,	// (0x000a48c7) list_double_large_graphic_phob2_other_pane_g1

0x9c07,	// (0x000a549b) list_highlight_pane_cp026

0xa296,	// (0x000a5b2a) main_welc_pane_ParamLimits

0x79e7,	// (0x000a327b) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x79e7,	// (0x000a327b) main_sp_fs_ctrlbar_pane_g3

0x7a01,	// (0x000a3295) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7a01,	// (0x000a3295) main_sp_fs_ctrlbar_pane_g4

0x7a33,	// (0x000a32c7) toolbar2_fixed_button_pane_cp01

0x7a3e,	// (0x000a32d2) toolbar2_fixed_button_pane_cp02

0x7a4b,	// (0x000a32df) toolbar2_fixed_button_pane_cp03

0x8d44,	// (0x000a45d8) list_welc_entry_pane_ParamLimits

0x8d44,	// (0x000a45d8) list_welc_entry_pane

0x8da4,	// (0x000a4638) main_welc_pane_g3_ParamLimits

0x8da4,	// (0x000a4638) main_welc_pane_g3

0x8dee,	// (0x000a4682) main_welc_pane_t2_ParamLimits

0x8dee,	// (0x000a4682) main_welc_pane_t2

0x8e02,	// (0x000a4696) main_welc_pane_t3_ParamLimits

0x8e02,	// (0x000a4696) main_welc_pane_t3

0x0005,

0xfc92,	// (0x000ab526) main_welc_pane_t_ParamLimits

0xfc92,	// (0x000ab526) main_welc_pane_t

0x8f06,	// (0x000a479a) welc_button_pane_ParamLimits

0x8f06,	// (0x000a479a) welc_button_pane

0x8f68,	// (0x000a47fc) welc_service_logo_pane_ParamLimits

0x8f68,	// (0x000a47fc) welc_service_logo_pane

0x903b,	// (0x000a48cf) list_single_welc_entry_pane_ParamLimits

0x903b,	// (0x000a48cf) list_single_welc_entry_pane

0x904c,	// (0x000a48e0) list_single_welc_entry_pane_g1

0x9056,	// (0x000a48ea) list_single_welc_entry_pane_t1

0x9064,	// (0x000a48f8) list_single_welc_entry_pane_t2

0x0001,

0xfca4,	// (0x000ab538) list_single_welc_entry_pane_t

0x9c07,	// (0x000a549b) bg_button_pane_cp035

0x9072,	// (0x000a4906) welc_button_pane_t1

0xeb35,	// (0x000aa3c9) welc_service_logo_pane_g1

0xeb3e,	// (0x000aa3d2) welc_service_logo_pane_g2

0x0001,

0x0adb,	// (0x0009c36f) welc_service_logo_pane_g

0x0efd,	// (0x0009c791) main_int_radio_pane

0xdd21,	// (0x000a95b5) list_single_fs_dyc_pane_g1

0x8b39,	// (0x000a43cd) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8b39,	// (0x000a43cd) list_double_large_graphic_phob2_pane_g3

0x8b45,	// (0x000a43d9) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8b45,	// (0x000a43d9) list_double_large_graphic_phob2_pane_g4

0x9080,	// (0x000a4914) main_int_radio1_pane_ParamLimits

0x9080,	// (0x000a4914) main_int_radio1_pane

0xeb47,	// (0x000aa3db) find_pane_cp02

0x9096,	// (0x000a492a) input_focus_pane_cp12_ParamLimits

0x9096,	// (0x000a492a) input_focus_pane_cp12

0x90a2,	// (0x000a4936) input_focus_pane_cp13_ParamLimits

0x90a2,	// (0x000a4936) input_focus_pane_cp13

0x90ba,	// (0x000a494e) input_focus_pane_cp14_ParamLimits

0x90ba,	// (0x000a494e) input_focus_pane_cp14

0xeb50,	// (0x000aa3e4) int_radio1_listscroll_pane

0x90d2,	// (0x000a4966) main_int_radio1_pane_g1_ParamLimits

0x90d2,	// (0x000a4966) main_int_radio1_pane_g1

0x90de,	// (0x000a4972) main_int_radio1_pane_t1_ParamLimits

0x90de,	// (0x000a4972) main_int_radio1_pane_t1

0x90f0,	// (0x000a4984) main_int_radio1_pane_t2_ParamLimits

0x90f0,	// (0x000a4984) main_int_radio1_pane_t2

0x9104,	// (0x000a4998) main_int_radio1_pane_t3_ParamLimits

0x9104,	// (0x000a4998) main_int_radio1_pane_t3

0x9118,	// (0x000a49ac) main_int_radio1_pane_t4_ParamLimits

0x9118,	// (0x000a49ac) main_int_radio1_pane_t4

0xeb5a,	// (0x000aa3ee) main_int_radio1_pane_t5_ParamLimits

0xeb5a,	// (0x000aa3ee) main_int_radio1_pane_t5

0x912f,	// (0x000a49c3) main_int_radio1_pane_t6_ParamLimits

0x912f,	// (0x000a49c3) main_int_radio1_pane_t6

0x9141,	// (0x000a49d5) main_int_radio1_pane_t7_ParamLimits

0x9141,	// (0x000a49d5) main_int_radio1_pane_t7

0x9153,	// (0x000a49e7) main_int_radio1_pane_t8_ParamLimits

0x9153,	// (0x000a49e7) main_int_radio1_pane_t8

0x9165,	// (0x000a49f9) main_int_radio1_pane_t9_ParamLimits

0x9165,	// (0x000a49f9) main_int_radio1_pane_t9

0x9177,	// (0x000a4a0b) main_int_radio1_pane_t10_ParamLimits

0x9177,	// (0x000a4a0b) main_int_radio1_pane_t10

0x91a8,	// (0x000a4a3c) main_int_radio1_pane_t11_ParamLimits

0x91a8,	// (0x000a4a3c) main_int_radio1_pane_t11

0x91d9,	// (0x000a4a6d) main_int_radio1_pane_t12_ParamLimits

0x91d9,	// (0x000a4a6d) main_int_radio1_pane_t12

0x000b,

0xfca9,	// (0x000ab53d) main_int_radio1_pane_t_ParamLimits

0xfca9,	// (0x000ab53d) main_int_radio1_pane_t

0xea33,	// (0x000aa2c7) int_radio_list_pane

0xea3b,	// (0x000aa2cf) scroll_pane_cp037

0xeb6c,	// (0x000aa400) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb6c,	// (0x000aa400) list_double_large_graphic_int_radio_pane

0xeb80,	// (0x000aa414) list_double_large_graphic_int_radio_pane_g1

0xa980,	// (0x000a6214) list_double_large_graphic_int_radio_pane_t1

0xa98e,	// (0x000a6222) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfcc2,	// (0x000ab556) list_double_large_graphic_int_radio_pane_t

0x9c07,	// (0x000a549b) list_highlight_pane_cp027

0xeaea,	// (0x000aa37e) main_button_pane_4

0x8db0,	// (0x000a4644) main_welc_pane_g4_ParamLimits

0x8db0,	// (0x000a4644) main_welc_pane_g4

0x8e14,	// (0x000a46a8) main_welc_pane_t4_ParamLimits

0x8e14,	// (0x000a46a8) main_welc_pane_t4

0x8e26,	// (0x000a46ba) main_welc_pane_t5_ParamLimits

0x8e26,	// (0x000a46ba) main_welc_pane_t5

0x8e5a,	// (0x000a46ee) main_welc_pane_t6_ParamLimits

0x8e5a,	// (0x000a46ee) main_welc_pane_t6

0x8f14,	// (0x000a47a8) welc_button_pane_2_ParamLimits

0x8f14,	// (0x000a47a8) welc_button_pane_2

0x8f2e,	// (0x000a47c2) welc_button_pane_3_ParamLimits

0x8f2e,	// (0x000a47c2) welc_button_pane_3

0xeaf2,	// (0x000aa386) welc_button_pane_4

0x8f4a,	// (0x000a47de) welc_button_pane_5_ParamLimits

0x8f4a,	// (0x000a47de) welc_button_pane_5

0x0c72,	// (0x0009c506) main_popup_welc_pane

0xeb98,	// (0x000aa42c) main_welc_sk_g3

0xeba2,	// (0x000aa436) main_welc_sk_g4

0xebac,	// (0x000aa440) main_welc_sk_t3

0xebbc,	// (0x000aa450) main_welc_sk_t4

0xebcc,	// (0x000aa460) popup_welc_pane_t4

0xebda,	// (0x000aa46e) popup_welc_pane_t5

0xebe8,	// (0x000aa47c) popup_welc_pane_t6

0x0efd,	// (0x0009c791) main_acti_pane

0x9c07,	// (0x000a549b) main_sso_pane

0x91f0,	// (0x000a4a84) sso_body_pane_ParamLimits

0x91f0,	// (0x000a4a84) sso_body_pane

0x91ff,	// (0x000a4a93) sso_logo_pane_ParamLimits

0x91ff,	// (0x000a4a93) sso_logo_pane

0x9228,	// (0x000a4abc) sso_sk_pane_ParamLimits

0x9228,	// (0x000a4abc) sso_sk_pane

0xa99c,	// (0x000a6230) main_sso_logo_pane_g1

0x9235,	// (0x000a4ac9) sso_sk_pane_t1_ParamLimits

0x9235,	// (0x000a4ac9) sso_sk_pane_t1

0x9249,	// (0x000a4add) sso_sk_pane_t2_ParamLimits

0x9249,	// (0x000a4add) sso_sk_pane_t2

0x0001,

0xfcc7,	// (0x000ab55b) sso_sk_pane_t_ParamLimits

0xfcc7,	// (0x000ab55b) sso_sk_pane_t

0xec2a,	// (0x000aa4be) aid_sso_gap

0xec33,	// (0x000aa4c7) aid_sso_txt1

0xec3d,	// (0x000aa4d1) aid_sso_txt2

0xec47,	// (0x000aa4db) aid_sso_txt3

0x0002,

0x0b03,	// (0x0009c397) aid_sso_txt

0xec51,	// (0x000aa4e5) aid_sso_widget

0x92a6,	// (0x000a4b3a) sso_btn_pane_ParamLimits

0x92a6,	// (0x000a4b3a) sso_btn_pane

0x931f,	// (0x000a4bb3) sso_option_pane_ParamLimits

0x931f,	// (0x000a4bb3) sso_option_pane

0x939b,	// (0x000a4c2f) sso_query_pane_ParamLimits

0x939b,	// (0x000a4c2f) sso_query_pane

0x93eb,	// (0x000a4c7f) sso_query_pane_cp01_ParamLimits

0x93eb,	// (0x000a4c7f) sso_query_pane_cp01

0x9443,	// (0x000a4cd7) sso_t_hdr_pane_ParamLimits

0x9443,	// (0x000a4cd7) sso_t_hdr_pane

0x9467,	// (0x000a4cfb) sso_t_nml_pane_ParamLimits

0x9467,	// (0x000a4cfb) sso_t_nml_pane

0xec5b,	// (0x000aa4ef) sso_t_sub_pane

0x920c,	// (0x000a4aa0) sso_popup_window_ParamLimits

0x920c,	// (0x000a4aa0) sso_popup_window

0x925b,	// (0x000a4aef) sso_apps_pane_ParamLimits

0x925b,	// (0x000a4aef) sso_apps_pane

0x927e,	// (0x000a4b12) sso_body_pane_g1

0x9286,	// (0x000a4b1a) sso_body_pane_t1

0x9296,	// (0x000a4b2a) sso_body_pane_t2

0x0001,

0xfccc,	// (0x000ab560) sso_body_pane_t

0x92f1,	// (0x000a4b85) sso_btn_pane_cp01_ParamLimits

0x92f1,	// (0x000a4b85) sso_btn_pane_cp01

0x936d,	// (0x000a4c01) sso_prog_pane_ParamLimits

0x936d,	// (0x000a4c01) sso_prog_pane

0x94b7,	// (0x000a4d4b) sso_t_hdr_pane_t1_ParamLimits

0x94b7,	// (0x000a4d4b) sso_t_hdr_pane_t1

0xec70,	// (0x000aa504) input_focus_pane_cp10_ParamLimits

0xec70,	// (0x000aa504) input_focus_pane_cp10

0xec8a,	// (0x000aa51e) sso_query_pane_t1_ParamLimits

0xec8a,	// (0x000aa51e) sso_query_pane_t1

0xec9d,	// (0x000aa531) sso_query_pane_t2_ParamLimits

0xec9d,	// (0x000aa531) sso_query_pane_t2

0xecb7,	// (0x000aa54b) sso_query_pane_t3_ParamLimits

0xecb7,	// (0x000aa54b) sso_query_pane_t3

0xece1,	// (0x000aa575) sso_query_pane_t4_ParamLimits

0xece1,	// (0x000aa575) sso_query_pane_t4

0x0003,

0x0b0f,	// (0x0009c3a3) sso_query_pane_t_ParamLimits

0x0b0f,	// (0x0009c3a3) sso_query_pane_t

0x9c07,	// (0x000a549b) bg_button_pane_cp22

0xeb89,	// (0x000aa41d) sso_btn_pane_t1

0x94d0,	// (0x000a4d64) sso_t_nml_pane_t1_ParamLimits

0x94d0,	// (0x000a4d64) sso_t_nml_pane_t1

0x94ed,	// (0x000a4d81) sso_option_row_pane_ParamLimits

0x94ed,	// (0x000a4d81) sso_option_row_pane

0xed05,	// (0x000aa599) sso_t_sub_pane_t1_ParamLimits

0xed05,	// (0x000aa599) sso_t_sub_pane_t1

0xa296,	// (0x000a5b2a) bg_popup_window_pane_cp11_ParamLimits

0xa296,	// (0x000a5b2a) bg_popup_window_pane_cp11

0xed22,	// (0x000aa5b6) popup_sk_window_cp01_ParamLimits

0xed22,	// (0x000aa5b6) popup_sk_window_cp01

0xed2f,	// (0x000aa5c3) sso_popup_body_pane_ParamLimits

0xed2f,	// (0x000aa5c3) sso_popup_body_pane

0xed3c,	// (0x000aa5d0) scroll_pane_cp21_ParamLimits

0xed3c,	// (0x000aa5d0) scroll_pane_cp21

0xed49,	// (0x000aa5dd) sso_popup_body_t_pane_ParamLimits

0xed49,	// (0x000aa5dd) sso_popup_body_t_pane

0xed56,	// (0x000aa5ea) sso_popup_body_t_hdr_pane_ParamLimits

0xed56,	// (0x000aa5ea) sso_popup_body_t_hdr_pane

0xed69,	// (0x000aa5fd) sso_popup_body_t_nml_pane_ParamLimits

0xed69,	// (0x000aa5fd) sso_popup_body_t_nml_pane

0xed87,	// (0x000aa61b) sso_popup_body_t_sub_pane_ParamLimits

0xed87,	// (0x000aa61b) sso_popup_body_t_sub_pane

0xedaa,	// (0x000aa63e) sso_popup_body_t_hdr_pane_t1

0x94fa,	// (0x000a4d8e) sso_popup_body_t_nml_pane_t1_ParamLimits

0x94fa,	// (0x000a4d8e) sso_popup_body_t_nml_pane_t1

0xedba,	// (0x000aa64e) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedba,	// (0x000aa64e) sso_popup_body_t_sub_pane_t1

0xa99c,	// (0x000a6230) sso_prog_pane_g1

0x9541,	// (0x000a4dd5) sso_apps_pane_comp1_ParamLimits

0x9541,	// (0x000a4dd5) sso_apps_pane_comp1

0xeddf,	// (0x000aa673) sso_apps_pane_comp1_g1

0xede7,	// (0x000aa67b) sso_apps_pane_comp1_t1

0xee03,	// (0x000aa697) sso_option_row_pane_g1

0xee0b,	// (0x000aa69f) sso_option_row_pane_t1

0x8d32,	// (0x000a45c6) bg_welc_area_ParamLimits

0x8d32,	// (0x000a45c6) bg_welc_area

0x8e90,	// (0x000a4724) sso_t_hdr_pane_a_t1_ParamLimits

0x8e90,	// (0x000a4724) sso_t_hdr_pane_a_t1

0x8ea4,	// (0x000a4738) sso_t_nml_pane_a_t1_ParamLimits

0x8ea4,	// (0x000a4738) sso_t_nml_pane_a_t1

0x8ed2,	// (0x000a4766) sso_t_sub_pane_a_t1_ParamLimits

0x8ed2,	// (0x000a4766) sso_t_sub_pane_a_t1

0xeb89,	// (0x000aa41d) sso_btn_pane_t1_copy1

0x9c07,	// (0x000a549b) welc_button_pane_2_comp1

0xebf8,	// (0x000aa48c) sso_t_hdr_pane_p_t1

0xec08,	// (0x000aa49c) sso_t_nml_pane_p_t1

0xec18,	// (0x000aa4ac) sso_t_sub_pane_p_t1

0xe326,	// (0x000a9bba) list_cmail_pane_ParamLimits

0x8f5a,	// (0x000a47ee) welc_button_pane_cp01_ParamLimits

0x8f5a,	// (0x000a47ee) welc_button_pane_cp01

0x9c07,	// (0x000a549b) main_att_pane

0xedf5,	// (0x000aa689) input_focus_pane_cp10_t1

0xee0b,	// (0x000aa69f) sso_option_row_pane_t1_ParamLimits

0x9556,	// (0x000a4dea) main_att_body_pane_ParamLimits

0x9556,	// (0x000a4dea) main_att_body_pane

0x9582,	// (0x000a4e16) att_btn_pane_ParamLimits

0x9582,	// (0x000a4e16) att_btn_pane

0x95a4,	// (0x000a4e38) att_btn_pane_cp01_ParamLimits

0x95a4,	// (0x000a4e38) att_btn_pane_cp01

0x95be,	// (0x000a4e52) att_li_srv_pane_ParamLimits

0x95be,	// (0x000a4e52) att_li_srv_pane

0x95d0,	// (0x000a4e64) att_opt_pane_ParamLimits

0x95d0,	// (0x000a4e64) att_opt_pane

0x9614,	// (0x000a4ea8) att_query_pane_ParamLimits

0x9614,	// (0x000a4ea8) att_query_pane

0x9658,	// (0x000a4eec) att_query_pane_cp01_ParamLimits

0x9658,	// (0x000a4eec) att_query_pane_cp01

0x969c,	// (0x000a4f30) att_t_hdr_pane_ParamLimits

0x969c,	// (0x000a4f30) att_t_hdr_pane

0x96fa,	// (0x000a4f8e) att_t_nml_pane_ParamLimits

0x96fa,	// (0x000a4f8e) att_t_nml_pane

0x9742,	// (0x000a4fd6) att_t_nml_pane_cp01_ParamLimits

0x9742,	// (0x000a4fd6) att_t_nml_pane_cp01

0x9766,	// (0x000a4ffa) att_t_nmlb_pane_ParamLimits

0x9766,	// (0x000a4ffa) att_t_nmlb_pane

0x9780,	// (0x000a5014) att_term_pane_ParamLimits

0x9780,	// (0x000a5014) att_term_pane

0x97c6,	// (0x000a505a) main_att_body_pane_g1_ParamLimits

0x97c6,	// (0x000a505a) main_att_body_pane_g1

0xee21,	// (0x000aa6b5) att_t_hdr_pane_t1_ParamLimits

0xee21,	// (0x000aa6b5) att_t_hdr_pane_t1

0xee49,	// (0x000aa6dd) att_t_nml_pane_t1_ParamLimits

0xee49,	// (0x000aa6dd) att_t_nml_pane_t1

0xee6e,	// (0x000aa702) att_btn_pane_t1

0x9c07,	// (0x000a549b) bg_button_pane_cp23

0x97fa,	// (0x000a508e) att_li_srv_row_pane_ParamLimits

0x97fa,	// (0x000a508e) att_li_srv_row_pane

0xee7e,	// (0x000aa712) att_t_nmlb_pane_t1_ParamLimits

0xee7e,	// (0x000aa712) att_t_nmlb_pane_t1

0xee97,	// (0x000aa72b) att_query_pane_t1

0xeea6,	// (0x000aa73a) att_query_pane_t2

0xeeb5,	// (0x000aa749) att_query_pane_t3

0x0002,

0x0b18,	// (0x0009c3ac) att_query_pane_t

0xeec4,	// (0x000aa758) input_focus_pane_cp11

0xeecd,	// (0x000aa761) att_term_pane_t1_ParamLimits

0xeecd,	// (0x000aa761) att_term_pane_t1

0x9c07,	// (0x000a549b) att_opt_row_pane

0xeeea,	// (0x000aa77e) att_opt_row_pane_g1

0xeef2,	// (0x000aa786) att_opt_row_pane_t1_ParamLimits

0xeef2,	// (0x000aa786) att_opt_row_pane_t1

0x980a,	// (0x000a509e) att_li_srv_row_pane_g1

0x9812,	// (0x000a50a6) att_li_srv_row_pane_t1

0x9827,	// (0x000a50bb) att_li_srv_row_pane_t2

0x0001,

0xfcd1,	// (0x000ab565) att_li_srv_row_pane_t

0x9c07,	// (0x000a549b) main_call7_pane

0x9c07,	// (0x000a549b) main_vod_pane

0xec5b,	// (0x000aa4ef) sso_t_sub_pane_ParamLimits

0x956a,	// (0x000a4dfe) att_btn_emg_pane_ParamLimits

0x956a,	// (0x000a4dfe) att_btn_emg_pane

0x9812,	// (0x000a50a6) att_li_srv_row_pane_t1_ParamLimits

0x9827,	// (0x000a50bb) att_li_srv_row_pane_t2_ParamLimits

0xfcd1,	// (0x000ab565) att_li_srv_row_pane_t_ParamLimits

0xef0b,	// (0x000aa79f) att_btn_close_pane_g1

0x9c07,	// (0x000a549b) bg_button_pane_cp24

0x983c,	// (0x000a50d0) main_vod_body_pane_ParamLimits

0x983c,	// (0x000a50d0) main_vod_body_pane

0x984a,	// (0x000a50de) main_vod_body_pane_g1_ParamLimits

0x984a,	// (0x000a50de) main_vod_body_pane_g1

0x987a,	// (0x000a510e) scroll_pane_cp24_ParamLimits

0x987a,	// (0x000a510e) scroll_pane_cp24

0x98c2,	// (0x000a5156) vod_btn_pane_ParamLimits

0x98c2,	// (0x000a5156) vod_btn_pane

0x9902,	// (0x000a5196) vod_det_pane_ParamLimits

0x9902,	// (0x000a5196) vod_det_pane

0x992e,	// (0x000a51c2) vod_logo_g1_ParamLimits

0x992e,	// (0x000a51c2) vod_logo_g1

0x9968,	// (0x000a51fc) vod_opt_pane_ParamLimits

0x9968,	// (0x000a51fc) vod_opt_pane

0x9998,	// (0x000a522c) vod_opt_pane_cp01_ParamLimits

0x9998,	// (0x000a522c) vod_opt_pane_cp01

0x99c0,	// (0x000a5254) vod_query_pane_ParamLimits

0x99c0,	// (0x000a5254) vod_query_pane

0x99ea,	// (0x000a527e) vod_query_pane_cp01_ParamLimits

0x99ea,	// (0x000a527e) vod_query_pane_cp01

0x99f6,	// (0x000a528a) vod_t_nml_pane_ParamLimits

0x99f6,	// (0x000a528a) vod_t_nml_pane

0x9aa4,	// (0x000a5338) vod_t_nml_pane_cp01_ParamLimits

0x9aa4,	// (0x000a5338) vod_t_nml_pane_cp01

0x9adc,	// (0x000a5370) vod_t_sub_pane_ParamLimits

0x9adc,	// (0x000a5370) vod_t_sub_pane

0x9b0a,	// (0x000a539e) vod_t_sub_pane_cp01_ParamLimits

0x9b0a,	// (0x000a539e) vod_t_sub_pane_cp01

0xeec4,	// (0x000aa758) vod_query_field_pane

0xee97,	// (0x000aa72b) vod_query_pane_t1

0x9c07,	// (0x000a549b) bg_button_pane_cp25

0xef13,	// (0x000aa7a7) sso_btn_pane_t1_copy2

0x9b32,	// (0x000a53c6) vod_t_nml_pane_t1_ParamLimits

0x9b32,	// (0x000a53c6) vod_t_nml_pane_t1

0xef23,	// (0x000aa7b7) vod_opt_row_pane_ParamLimits

0xef23,	// (0x000aa7b7) vod_opt_row_pane

0xef35,	// (0x000aa7c9) vod_t_sub_pane_t1_ParamLimits

0xef35,	// (0x000aa7c9) vod_t_sub_pane_t1

0x9b6f,	// (0x000a5403) vod_det_cell_pane_ParamLimits

0x9b6f,	// (0x000a5403) vod_det_cell_pane

0x9c07,	// (0x000a549b) input_focus_pane_cp15

0xef4e,	// (0x000aa7e2) vod_query_field_pane_t1

0xef5c,	// (0x000aa7f0) vod_opt_row_pane_g1_ParamLimits

0xef5c,	// (0x000aa7f0) vod_opt_row_pane_g1

0xef68,	// (0x000aa7fc) vod_opt_row_pane_t1_ParamLimits

0xef68,	// (0x000aa7fc) vod_opt_row_pane_t1

0xef8d,	// (0x000aa821) vod_det_cell_field_pane

0xef96,	// (0x000aa82a) vod_det_cell_pane_g1

0xee97,	// (0x000aa72b) vod_det_cell_pane_t1

0x9c07,	// (0x000a549b) input_focus_pane_cp16

0xef4e,	// (0x000aa7e2) vod_det_cell_field_pane_t1

0x9b81,	// (0x000a5415) call7_btn_grp_pane_ParamLimits

0x9b81,	// (0x000a5415) call7_btn_grp_pane

0x9b8e,	// (0x000a5422) call7_bubble_pane_ParamLimits

0x9b8e,	// (0x000a5422) call7_bubble_pane

0x9b9d,	// (0x000a5431) cell_call7_btn_pane_ParamLimits

0x9b9d,	// (0x000a5431) cell_call7_btn_pane

0x9bae,	// (0x000a5442) call7_pane_g1_ParamLimits

0x9bae,	// (0x000a5442) call7_pane_g1

0x9bbd,	// (0x000a5451) call7_windows_conf_pane_ParamLimits

0x9bbd,	// (0x000a5451) call7_windows_conf_pane

0x9bdd,	// (0x000a5471) popup_call7_1st_window_ParamLimits

0x9bdd,	// (0x000a5471) popup_call7_1st_window

0x9beb,	// (0x000a547f) popup_call7_2nd_window_ParamLimits

0x9beb,	// (0x000a547f) popup_call7_2nd_window

0x9bf9,	// (0x000a548d) popup_call7_3rd_window_ParamLimits

0x9bf9,	// (0x000a548d) popup_call7_3rd_window

0x9c07,	// (0x000a549b) bg_button_pane_cp26

0xe9d5,	// (0x000aa269) cell_call7_btn_pane_g1

0xee3a,	// (0x000aa6ce) cell_call7_btn_pane_t1

0x9c07,	// (0x000a549b) bg_popup_window_pane_cp12

0xef9e,	// (0x000aa832) popup_call7_1st_window_g1

0xefa6,	// (0x000aa83a) popup_call7_1st_window_g2

0xefae,	// (0x000aa842) popup_call7_1st_window_g3

0x0002,

0x0b24,	// (0x0009c3b8) popup_call7_1st_window_g

0xefb6,	// (0x000aa84a) popup_call7_1st_window_t1

0xefc5,	// (0x000aa859) popup_call7_1st_window_t2

0xefd5,	// (0x000aa869) popup_call7_1st_window_t3

0x0002,

0x0b2b,	// (0x0009c3bf) popup_call7_1st_window_t

0x9c07,	// (0x000a549b) bg_popup_window_pane_cp13

0xefe5,	// (0x000aa879) popup_call7_2nd_window_g1

0xefed,	// (0x000aa881) popup_call7_2nd_window_g2

0xeff5,	// (0x000aa889) popup_call7_2nd_window_g3

0x0002,

0x0b32,	// (0x0009c3c6) popup_call7_2nd_window_g

0xeffd,	// (0x000aa891) popup_call7_2nd_window_t1

0x9c07,	// (0x000a549b) bg_popup_window_pane_cp14

0xf00c,	// (0x000aa8a0) call7_list_conf_pane

0xf014,	// (0x000aa8a8) call7_list_conf_row_pane_ParamLimits

0xf014,	// (0x000aa8a8) call7_list_conf_row_pane

0xf027,	// (0x000aa8bb) call7_list_conf_row_pane_g1

0xf02f,	// (0x000aa8c3) call7_list_conf_row_pane_g2

0x0001,

0x0b39,	// (0x0009c3cd) call7_list_conf_row_pane_g

0xf037,	// (0x000aa8cb) call7_list_conf_row_pane_t1

0x9c07,	// (0x000a549b) list_highlight_pane_cp22
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
