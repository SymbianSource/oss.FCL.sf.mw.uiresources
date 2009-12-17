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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002e617 };

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
0x68d2,	// (0x00034ee9) Screen

0x68de,	// (0x00034ef5) application_window

0x691e,	// (0x00034f35) area_bottom_pane_ParamLimits

0x691e,	// (0x00034f35) area_bottom_pane

0x6953,	// (0x00034f6a) area_top_pane_ParamLimits

0x6953,	// (0x00034f6a) area_top_pane

0xdeb1,	// (0x0003c4c8) call_video_uplink_pane_ParamLimits

0xdeb1,	// (0x0003c4c8) call_video_uplink_pane

0x69e1,	// (0x00034ff8) main_pane_ParamLimits

0x69e1,	// (0x00034ff8) main_pane

0x1bac,	// (0x000301c3) context_pane

0x97a7,	// (0x00037dbe) navi_pane

0x97c7,	// (0x00037dde) popup_cale_events_window_ParamLimits

0x97c7,	// (0x00037dde) popup_cale_events_window

0x1bbf,	// (0x000301d6) popup_mup_playback_window

0x97df,	// (0x00037df6) signal_pane

0xe614,	// (0x0003cc2b) main_browser_pane

0xf0ed,	// (0x0003d704) main_burst_pane

0x9671,	// (0x00037c88) main_calc_pane

0xf0ed,	// (0x0003d704) main_cale_day_pane

0xe614,	// (0x0003cc2b) main_cale_month_pane

0xf0ed,	// (0x0003d704) main_cale_week_pane

0xf0ed,	// (0x0003d704) main_call_pane

0xe2e2,	// (0x0003c8f9) main_call_poc_pane

0xf0ed,	// (0x0003d704) main_camera_pane

0xf0ed,	// (0x0003d704) main_chi_dic_pane

0xef72,	// (0x0003d589) main_clock_pane

0xe2e2,	// (0x0003c8f9) main_fmradio_pane

0xf0ed,	// (0x0003d704) main_graph_messa_pane

0xe2e2,	// (0x0003c8f9) main_help_pane

0xe614,	// (0x0003cc2b) main_im_pane

0xe53d,	// (0x0003cb54) main_image_pane_ParamLimits

0xe53d,	// (0x0003cb54) main_image_pane

0xe2e2,	// (0x0003c8f9) main_location2_pane

0xf0ed,	// (0x0003d704) main_location_pane

0xe2e2,	// (0x0003c8f9) main_messa_pane

0xe2e2,	// (0x0003c8f9) main_mp2_pane

0xf0ed,	// (0x0003d704) main_mp_pane

0xe2e2,	// (0x0003c8f9) main_msg_pane

0xe2e2,	// (0x0003c8f9) main_mup_eq_pane

0xe2e2,	// (0x0003c8f9) main_mup_pane

0xf0ed,	// (0x0003d704) main_notes_pane

0xe2e2,	// (0x0003c8f9) main_pec_pane

0xe2e2,	// (0x0003c8f9) main_phob_pane

0xe2e2,	// (0x0003c8f9) main_pinb_pane

0xe2e2,	// (0x0003c8f9) main_postcard_pane

0xe2e2,	// (0x0003c8f9) main_qdial_pane

0xf0ed,	// (0x0003d704) main_skin_pane

0xe2e2,	// (0x0003c8f9) main_smil2_pane

0xf0ed,	// (0x0003d704) main_smil_pane

0xf0ed,	// (0x0003d704) main_video_pane

0xf0ed,	// (0x0003d704) main_video_tele_pane

0xe53d,	// (0x0003cb54) main_viewer_pane_ParamLimits

0xe53d,	// (0x0003cb54) main_viewer_pane

0xf0ed,	// (0x0003d704) main_vorec_pane

0x96a7,	// (0x00037cbe) popup_blid_sat_info_window_ParamLimits

0x96a7,	// (0x00037cbe) popup_blid_sat_info_window

0x96bd,	// (0x00037cd4) popup_dyc_status_message_window_ParamLimits

0x96bd,	// (0x00037cd4) popup_dyc_status_message_window

0x96cd,	// (0x00037ce4) popup_grid_large_graphic_window_ParamLimits

0x96cd,	// (0x00037ce4) popup_grid_large_graphic_window

0x9743,	// (0x00037d5a) popup_loc_request_window_ParamLimits

0x9743,	// (0x00037d5a) popup_loc_request_window

0x977f,	// (0x00037d96) popup_wml_address_window_ParamLimits

0x977f,	// (0x00037d96) popup_wml_address_window

0x9549,	// (0x00037b60) call_muted_g1

0x920b,	// (0x00037822) popup_call_audio_conf_window_ParamLimits

0x920b,	// (0x00037822) popup_call_audio_conf_window

0x9559,	// (0x00037b70) popup_call_audio_first_window_ParamLimits

0x9559,	// (0x00037b70) popup_call_audio_first_window

0x9599,	// (0x00037bb0) popup_call_audio_in_window_ParamLimits

0x9599,	// (0x00037bb0) popup_call_audio_in_window

0x95bd,	// (0x00037bd4) popup_call_audio_out_window_ParamLimits

0x95bd,	// (0x00037bd4) popup_call_audio_out_window

0x95df,	// (0x00037bf6) popup_call_audio_second_window_ParamLimits

0x95df,	// (0x00037bf6) popup_call_audio_second_window

0x960f,	// (0x00037c26) popup_call_audio_wait_window_ParamLimits

0x960f,	// (0x00037c26) popup_call_audio_wait_window

0x9630,	// (0x00037c47) popup_number_entry_window_ParamLimits

0x9630,	// (0x00037c47) popup_number_entry_window

0xdecf,	// (0x0003c4e6) bg_popup_call_pane_cp05_ParamLimits

0xdecf,	// (0x0003c4e6) bg_popup_call_pane_cp05

0xdeef,	// (0x0003c506) popup_number_entry_window_t1

0xdf02,	// (0x0003c519) popup_number_entry_window_t2

0xdf14,	// (0x0003c52b) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0003d746) popup_number_entry_window_t

0xdf26,	// (0x0003c53d) text_title_cp2

0xdf39,	// (0x0003c550) bg_popup_call_pane_cp_ParamLimits

0xdf39,	// (0x0003c550) bg_popup_call_pane_cp

0xdf47,	// (0x0003c55e) call_thumbnail_pane

0xdf4f,	// (0x0003c566) popup_call_audio_in_window_g1_ParamLimits

0xdf4f,	// (0x0003c566) popup_call_audio_in_window_g1

0xdf5b,	// (0x0003c572) popup_call_audio_in_window_g2_ParamLimits

0xdf5b,	// (0x0003c572) popup_call_audio_in_window_g2

0xdf67,	// (0x0003c57e) popup_call_audio_in_window_g3_ParamLimits

0xdf67,	// (0x0003c57e) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0003d74f) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0003d74f) popup_call_audio_in_window_g

0xdf73,	// (0x0003c58a) popup_call_audio_in_window_t1_ParamLimits

0xdf73,	// (0x0003c58a) popup_call_audio_in_window_t1

0xdf8f,	// (0x0003c5a6) popup_call_audio_in_window_t2_ParamLimits

0xdf8f,	// (0x0003c5a6) popup_call_audio_in_window_t2

0xdfab,	// (0x0003c5c2) popup_call_audio_in_window_t3_ParamLimits

0xdfab,	// (0x0003c5c2) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0003d756) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0003d756) popup_call_audio_in_window_t

0xdf39,	// (0x0003c550) bg_popup_call_pane_cp01_ParamLimits

0xdf39,	// (0x0003c550) bg_popup_call_pane_cp01

0xdf47,	// (0x0003c55e) call_thumbnail_pane_cp02

0xdfbe,	// (0x0003c5d5) call_type_pane_cp022

0xdfc6,	// (0x0003c5dd) popup_call_audio_out_window_g1_ParamLimits

0xdfc6,	// (0x0003c5dd) popup_call_audio_out_window_g1

0xdfd8,	// (0x0003c5ef) popup_call_audio_out_window_g2_ParamLimits

0xdfd8,	// (0x0003c5ef) popup_call_audio_out_window_g2

0xdfe4,	// (0x0003c5fb) popup_call_audio_out_window_g3_ParamLimits

0xdfe4,	// (0x0003c5fb) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0003d75d) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0003d75d) popup_call_audio_out_window_g

0xdff6,	// (0x0003c60d) popup_call_audio_out_window_t1_ParamLimits

0xdff6,	// (0x0003c60d) popup_call_audio_out_window_t1

0xe00e,	// (0x0003c625) popup_call_audio_out_window_t2_ParamLimits

0xe00e,	// (0x0003c625) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0003d764) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0003d764) popup_call_audio_out_window_t

0xe023,	// (0x0003c63a) bg_popup_call_pane_ParamLimits

0xe023,	// (0x0003c63a) bg_popup_call_pane

0x6bd5,	// (0x000351ec) call_thumbnail_pane_cp_ParamLimits

0x6bd5,	// (0x000351ec) call_thumbnail_pane_cp

0xe0a7,	// (0x0003c6be) call_type_pane_cp01_ParamLimits

0xe0a7,	// (0x0003c6be) call_type_pane_cp01

0xe0eb,	// (0x0003c702) popup_call_audio_first_window_g1_ParamLimits

0xe0eb,	// (0x0003c702) popup_call_audio_first_window_g1

0xe137,	// (0x0003c74e) popup_call_audio_first_window_g2_ParamLimits

0xe137,	// (0x0003c74e) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0003d769) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0003d769) popup_call_audio_first_window_g

0xe17b,	// (0x0003c792) popup_call_audio_first_window_t1_ParamLimits

0xe17b,	// (0x0003c792) popup_call_audio_first_window_t1

0xe227,	// (0x0003c83e) popup_call_audio_first_window_t4_ParamLimits

0xe227,	// (0x0003c83e) popup_call_audio_first_window_t4

0xe2b3,	// (0x0003c8ca) popup_call_audio_first_window_t5_ParamLimits

0xe2b3,	// (0x0003c8ca) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0003d76e) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0003d76e) popup_call_audio_first_window_t

0xe2e2,	// (0x0003c8f9) bg_popup_call_pane_cp02

0xe2ec,	// (0x0003c903) call_type_pane_cp023

0xe2f4,	// (0x0003c90b) popup_call_audio_wait_window_g1

0xe2fc,	// (0x0003c913) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0003d775) popup_call_audio_wait_window_g

0xe304,	// (0x0003c91b) popup_call_audio_wait_window_t3

0xe312,	// (0x0003c929) bg_popup_call_pane_cp03_ParamLimits

0xe312,	// (0x0003c929) bg_popup_call_pane_cp03

0xe372,	// (0x0003c989) call_thumbnail_pane_cp011_ParamLimits

0xe372,	// (0x0003c989) call_thumbnail_pane_cp011

0xe37e,	// (0x0003c995) call_type_pane_cp034_ParamLimits

0xe37e,	// (0x0003c995) call_type_pane_cp034

0xe3ba,	// (0x0003c9d1) popup_call_audio_second_window_g1_ParamLimits

0xe3ba,	// (0x0003c9d1) popup_call_audio_second_window_g1

0xe3f6,	// (0x0003ca0d) popup_call_audio_second_window_g2_ParamLimits

0xe3f6,	// (0x0003ca0d) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0003d77a) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0003d77a) popup_call_audio_second_window_g

0xe432,	// (0x0003ca49) popup_call_audio_second_window_t1_ParamLimits

0xe432,	// (0x0003ca49) popup_call_audio_second_window_t1

0xe4b3,	// (0x0003caca) popup_call_audio_second_window_t2_ParamLimits

0xe4b3,	// (0x0003caca) popup_call_audio_second_window_t2

0xe4e9,	// (0x0003cb00) popup_call_audio_second_window_t3_ParamLimits

0xe4e9,	// (0x0003cb00) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0003d77f) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0003d77f) popup_call_audio_second_window_t

0xe2e2,	// (0x0003c8f9) bg_popup_call_pane_cp04

0xe51f,	// (0x0003cb36) list_conf_pane

0xe527,	// (0x0003cb3e) popup_call_audio_conf_window_t1

0xe535,	// (0x0003cb4c) call_thumbnail_pane_g1

0xe53d,	// (0x0003cb54) bg_pinb_pane_ParamLimits

0xe53d,	// (0x0003cb54) bg_pinb_pane

0xe54b,	// (0x0003cb62) find_pinb_pane

0xe554,	// (0x0003cb6b) listscroll_pinb_pane_ParamLimits

0xe554,	// (0x0003cb6b) listscroll_pinb_pane

0xe563,	// (0x0003cb7a) pinb_bg_pane_g1

0x6bf9,	// (0x00035210) pinb_bg_pane_g2

0x6c05,	// (0x0003521c) pinb_bg_pane_g3

0x6c11,	// (0x00035228) pinb_bg_pane_g4

0x6c1d,	// (0x00035234) pinb_bg_pane_g5

0x6c29,	// (0x00035240) pinb_bg_pane_g6

0x6c34,	// (0x0003524b) pinb_bg_pane_g7

0x6c3f,	// (0x00035256) pinb_bg_pane_g8

0x6c4a,	// (0x00035261) pinb_bg_pane_g9

0x6c54,	// (0x0003526b) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0003d786) pinb_bg_pane_g

0x6c71,	// (0x00035288) grid_pinb_pane

0x6c7c,	// (0x00035293) list_pinb_pane

0x6c87,	// (0x0003529e) scroll_pane_cp01_ParamLimits

0x6c87,	// (0x0003529e) scroll_pane_cp01

0xe56d,	// (0x0003cb84) find_pinb_pane_g1_ParamLimits

0xe56d,	// (0x0003cb84) find_pinb_pane_g1

0xe585,	// (0x0003cb9c) find_pinb_pane_t1

0xe597,	// (0x0003cbae) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0003d7a0) find_pinb_pane_t

0xe5ac,	// (0x0003cbc3) input_focus_pane_cp01_ParamLimits

0xe5ac,	// (0x0003cbc3) input_focus_pane_cp01

0x6c99,	// (0x000352b0) cell_pinb_pane_ParamLimits

0x6c99,	// (0x000352b0) cell_pinb_pane

0x6cbe,	// (0x000352d5) cell_pinb_pane_g1_ParamLimits

0x6cbe,	// (0x000352d5) cell_pinb_pane_g1

0x6cd3,	// (0x000352ea) cell_pinb_pane_g2_ParamLimits

0x6cd3,	// (0x000352ea) cell_pinb_pane_g2

0xe5b8,	// (0x0003cbcf) cell_pinb_pane_g3_ParamLimits

0xe5b8,	// (0x0003cbcf) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0003d7a5) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0003d7a5) cell_pinb_pane_g

0xe2e2,	// (0x0003c8f9) grid_highlight_pane_cp01

0x6cdf,	// (0x000352f6) list_pinb_item_pane_ParamLimits

0x6cdf,	// (0x000352f6) list_pinb_item_pane

0xe2e2,	// (0x0003c8f9) list_highlight_pane_cp02

0x6cff,	// (0x00035316) list_pinb_item_pane_g1_ParamLimits

0x6cff,	// (0x00035316) list_pinb_item_pane_g1

0xe5c4,	// (0x0003cbdb) list_pinb_item_pane_g2_ParamLimits

0xe5c4,	// (0x0003cbdb) list_pinb_item_pane_g2

0x6d0c,	// (0x00035323) list_pinb_item_pane_g3_ParamLimits

0x6d0c,	// (0x00035323) list_pinb_item_pane_g3

0x6d1d,	// (0x00035334) list_pinb_item_pane_g4_ParamLimits

0x6d1d,	// (0x00035334) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0003d7ac) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0003d7ac) list_pinb_item_pane_g

0x6d29,	// (0x00035340) list_pinb_item_pane_t1_ParamLimits

0x6d29,	// (0x00035340) list_pinb_item_pane_t1

0x6d5a,	// (0x00035371) calc_display_pane

0x6d78,	// (0x0003538f) calc_paper_pane

0x6d94,	// (0x000353ab) grid_calc_pane

0xe2e2,	// (0x0003c8f9) bg_list_pane_cp01

0x6dbe,	// (0x000353d5) clock_g1

0x6dc6,	// (0x000353dd) clock_g2

0x0001,

0xf19e,	// (0x0003d7b5) clock_g

0x6dd0,	// (0x000353e7) clock_t1_ParamLimits

0x6dd0,	// (0x000353e7) clock_t1

0x6de5,	// (0x000353fc) clock_t2_ParamLimits

0x6de5,	// (0x000353fc) clock_t2

0x6df7,	// (0x0003540e) clock_t3_ParamLimits

0x6df7,	// (0x0003540e) clock_t3

0x6e09,	// (0x00035420) clock_t4_ParamLimits

0x6e09,	// (0x00035420) clock_t4

0x6e1b,	// (0x00035432) clock_t5_ParamLimits

0x6e1b,	// (0x00035432) clock_t5

0x6e30,	// (0x00035447) clock_t6_ParamLimits

0x6e30,	// (0x00035447) clock_t6

0x6e42,	// (0x00035459) clock_t7_ParamLimits

0x6e42,	// (0x00035459) clock_t7

0x6e54,	// (0x0003546b) clock_t8_ParamLimits

0x6e54,	// (0x0003546b) clock_t8

0x6e6a,	// (0x00035481) clock_t9_ParamLimits

0x6e6a,	// (0x00035481) clock_t9

0x0008,

0xf1a3,	// (0x0003d7ba) clock_t_ParamLimits

0xf1a3,	// (0x0003d7ba) clock_t

0xe5d0,	// (0x0003cbe7) popup_clock_analogue_window_cp02

0xe5d0,	// (0x0003cbe7) popup_clock_digital_window_cp01

0xe5d8,	// (0x0003cbef) listscroll_help_pane

0xe2e2,	// (0x0003c8f9) phob_pre_status_pane

0xe5e2,	// (0x0003cbf9) grid_qdial_pane

0xe2e2,	// (0x0003c8f9) listscroll_mce_pane

0xe5ec,	// (0x0003cc03) bg_notes_pane

0xe5f6,	// (0x0003cc0d) list_notes_pane

0x6e80,	// (0x00035497) scroll_pane_cp06

0xe600,	// (0x0003cc17) bg_calc_paper_pane

0x6e8b,	// (0x000354a2) list_calc_pane

0xe614,	// (0x0003cc2b) bg_calc_display_pane

0x6ea5,	// (0x000354bc) calc_display_pane_t1

0x6eba,	// (0x000354d1) calc_display_pane_t2

0x6ecf,	// (0x000354e6) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0003d7cd) calc_display_pane_t

0x6ee1,	// (0x000354f8) cell_calc_pane_ParamLimits

0x6ee1,	// (0x000354f8) cell_calc_pane

0xe620,	// (0x0003cc37) bg_calc_paper_pane_g1

0xe62c,	// (0x0003cc43) bg_calc_paper_pane_g2

0xe638,	// (0x0003cc4f) bg_calc_paper_pane_g3

0xe644,	// (0x0003cc5b) bg_calc_paper_pane_g4

0xe650,	// (0x0003cc67) bg_calc_paper_pane_g5

0x6f0e,	// (0x00035525) bg_calc_paper_pane_g6

0x6f1f,	// (0x00035536) bg_calc_paper_pane_g7

0x6f30,	// (0x00035547) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0003d7d4) bg_calc_paper_pane_g

0x6f41,	// (0x00035558) calc_bg_paper_pane_g9

0x6f52,	// (0x00035569) list_calc_item_pane_ParamLimits

0x6f52,	// (0x00035569) list_calc_item_pane

0xe65c,	// (0x0003cc73) list_calc_item_pane_g1

0x6f81,	// (0x00035598) list_calc_item_pane_t1_ParamLimits

0x6f81,	// (0x00035598) list_calc_item_pane_t1

0x6f93,	// (0x000355aa) list_calc_item_pane_t2_ParamLimits

0x6f93,	// (0x000355aa) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0003d7e5) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0003d7e5) list_calc_item_pane_t

0xe669,	// (0x0003cc80) cell_calc_pane_g1

0xe673,	// (0x0003cc8a) grid_highlight_pane_cp02

0x208e,	// (0x000306a5) bg_calc_display_pane_g1

0x6fc3,	// (0x000355da) bg_calc_display_pane_g2

0x6fcd,	// (0x000355e4) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0003d7ef) bg_calc_display_pane_g

0x6fd6,	// (0x000355ed) cell_qdial_pane_ParamLimits

0x6fd6,	// (0x000355ed) cell_qdial_pane

0x6fea,	// (0x00035601) cell_qdial_pane_g1_ParamLimits

0x6fea,	// (0x00035601) cell_qdial_pane_g1

0x6ff7,	// (0x0003560e) cell_qdial_pane_g2_ParamLimits

0x6ff7,	// (0x0003560e) cell_qdial_pane_g2

0xe695,	// (0x0003ccac) cell_qdial_pane_g3_ParamLimits

0xe695,	// (0x0003ccac) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0003d7f6) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0003d7f6) cell_qdial_pane_g

0x7015,	// (0x0003562c) cell_qdial_pane_t1_ParamLimits

0x7015,	// (0x0003562c) cell_qdial_pane_t1

0x702d,	// (0x00035644) cell_qdial_pane_t2_ParamLimits

0x702d,	// (0x00035644) cell_qdial_pane_t2

0x7040,	// (0x00035657) cell_qdial_pane_t3_ParamLimits

0x7040,	// (0x00035657) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0003d7ff) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0003d7ff) cell_qdial_pane_t

0xe2e2,	// (0x0003c8f9) grid_highlight_pane_cp04

0xe6a1,	// (0x0003ccb8) thumbnail_qdial_pane_ParamLimits

0xe6a1,	// (0x0003ccb8) thumbnail_qdial_pane

0xe6fd,	// (0x0003cd14) list_help_pane

0xe706,	// (0x0003cd1d) scroll_pane_cp02

0x7053,	// (0x0003566a) help_list_pane_t1_ParamLimits

0x7053,	// (0x0003566a) help_list_pane_t1

0x7086,	// (0x0003569d) bg_notes_pane_g2

0x708e,	// (0x000356a5) bg_notes_pane_g3

0x7096,	// (0x000356ad) notes_bg_pane_g1

0x709e,	// (0x000356b5) notes_bg_pane_g4

0x70a6,	// (0x000356bd) notes_bg_pane_g5

0x70ae,	// (0x000356c5) notes_bg_pane_g6

0x70b6,	// (0x000356cd) notes_bg_pane_g7

0x70be,	// (0x000356d5) notes_bg_pane_g8

0x70c6,	// (0x000356dd) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0003d81d) notes_bg_pane_g

0x70ce,	// (0x000356e5) list_notes_text_pane_ParamLimits

0x70ce,	// (0x000356e5) list_notes_text_pane

0xe70f,	// (0x0003cd26) list_notes_text_pane_g1

0x58a1,	// (0x00033eb8) list_notes_text_pane_t1

0xe614,	// (0x0003cc2b) listscroll_cale_week_pane

0x7110,	// (0x00035727) bg_cale_heading_pane

0xe729,	// (0x0003cd40) bg_cale_pane_cp01

0x7124,	// (0x0003573b) cale_week_corner_pane

0x713a,	// (0x00035751) cale_week_day_heading_pane

0x714e,	// (0x00035765) cale_week_scroll_pane_g1

0x715f,	// (0x00035776) cale_week_scroll_pane_g2

0x7170,	// (0x00035787) cale_week_scroll_pane_g3

0x7181,	// (0x00035798) cale_week_scroll_pane_g4

0x7192,	// (0x000357a9) cale_week_scroll_pane_g5

0x71a3,	// (0x000357ba) cale_week_scroll_pane_g6

0x71b4,	// (0x000357cb) cale_week_scroll_pane_g7

0x71c7,	// (0x000357de) cale_week_scroll_pane_g8

0x71da,	// (0x000357f1) cale_week_scroll_pane_g9

0x71eb,	// (0x00035802) cale_week_scroll_pane_g10

0x71fc,	// (0x00035813) cale_week_scroll_pane_g11

0x720d,	// (0x00035824) cale_week_scroll_pane_g12

0x721e,	// (0x00035835) cale_week_scroll_pane_g13

0x722f,	// (0x00035846) cale_week_scroll_pane_g14

0x7240,	// (0x00035857) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0003d82c) cale_week_scroll_pane_g

0x7251,	// (0x00035868) cale_week_time_pane

0x7264,	// (0x0003587b) grid_cale_week_pane

0x7279,	// (0x00035890) scroll_pane_cp08

0x7293,	// (0x000358aa) cell_cale_week_pane_ParamLimits

0x7293,	// (0x000358aa) cell_cale_week_pane

0x72cf,	// (0x000358e6) cale_week_day_heading_pane_t1

0x72fc,	// (0x00035913) cale_week_day_heading_pane_t2

0x7329,	// (0x00035940) cale_week_day_heading_pane_t3

0x7356,	// (0x0003596d) cale_week_day_heading_pane_t4

0x7383,	// (0x0003599a) cale_week_day_heading_pane_t5

0x73b0,	// (0x000359c7) cale_week_day_heading_pane_t6

0x73dd,	// (0x000359f4) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0003d84b) cale_week_day_heading_pane_t

0xe754,	// (0x0003cd6b) bg_cale_side_pane

0x740a,	// (0x00035a21) cale_week_time_pane_t1

0x7422,	// (0x00035a39) cale_week_time_pane_t2

0x743a,	// (0x00035a51) cale_week_time_pane_t3

0x7452,	// (0x00035a69) cale_week_time_pane_t4

0x746a,	// (0x00035a81) cale_week_time_pane_t5

0x7482,	// (0x00035a99) cale_week_time_pane_t6

0x749a,	// (0x00035ab1) cale_week_time_pane_t7

0x74b2,	// (0x00035ac9) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0003d85a) cale_week_time_pane_t

0x74ca,	// (0x00035ae1) cell_cale_week_pane_g2

0x74e3,	// (0x00035afa) cell_cale_week_pane_g3_ParamLimits

0x74e3,	// (0x00035afa) cell_cale_week_pane_g3

0xe762,	// (0x0003cd79) grid_highlight_pane_cp07

0xe76a,	// (0x0003cd81) listscroll_gms_pane

0xe774,	// (0x0003cd8b) grid_gms_pane

0xe77d,	// (0x0003cd94) listscroll_gms_pane_g1

0xe785,	// (0x0003cd9c) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0003d86b) listscroll_gms_pane_g

0x74fb,	// (0x00035b12) scroll_pane_cp010

0x7506,	// (0x00035b1d) cell_gms_pane_ParamLimits

0x7506,	// (0x00035b1d) cell_gms_pane

0x7519,	// (0x00035b30) cell_gms_pane_g1

0xe78d,	// (0x0003cda4) cell_gms_pane_g2

0xe795,	// (0x0003cdac) cell_gms_pane_g3

0xe79e,	// (0x0003cdb5) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0003d870) cell_gms_pane_g

0xe7a7,	// (0x0003cdbe) grid_highlight_pane_cp09

0x94f1,	// (0x00037b08) phob_pre_status_pane_g1

0x94f9,	// (0x00037b10) phob_pre_status_pane_g2

0x9501,	// (0x00037b18) phob_pre_status_pane_g3

0x9509,	// (0x00037b20) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0003dc5f) phob_pre_status_pane_g

0x9519,	// (0x00037b30) phob_pre_status_pane_t1

0x9529,	// (0x00037b40) phob_pre_status_pane_t2

0x9539,	// (0x00037b50) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0003dc6a) phob_pre_status_pane_t

0xe2e2,	// (0x0003c8f9) bg_list_pane_cp05

0x7529,	// (0x00035b40) grid_vorec_pane

0x7533,	// (0x00035b4a) vorec_t1

0x7541,	// (0x00035b58) vorec_t2

0x754f,	// (0x00035b66) vorec_t3

0x755d,	// (0x00035b74) vorec_t4

0x756b,	// (0x00035b82) vorec_t5

0x7579,	// (0x00035b90) vorec_t6

0x0006,

0xf262,	// (0x0003d879) vorec_t

0x7595,	// (0x00035bac) wait_bar_pane_cp01

0x759d,	// (0x00035bb4) cell_vorec_pane_ParamLimits

0x759d,	// (0x00035bb4) cell_vorec_pane

0xe7af,	// (0x0003cdc6) cell_vorec_pane_g1

0xe2e2,	// (0x0003c8f9) grid_highlight_pane_cp05

0x75c0,	// (0x00035bd7) cams_zoom_pane

0x75cc,	// (0x00035be3) image_vga_pane

0x75db,	// (0x00035bf2) main_camera_pane_g1

0x75e9,	// (0x00035c00) main_camera_pane_g2

0x75f5,	// (0x00035c0c) main_camera_pane_g3

0x7601,	// (0x00035c18) main_camera_pane_g4

0x760d,	// (0x00035c24) main_camera_pane_g5

0x7619,	// (0x00035c30) main_camera_pane_g6

0x7625,	// (0x00035c3c) main_camera_pane_g7

0x0007,

0xf271,	// (0x0003d888) main_camera_pane_g

0x7631,	// (0x00035c48) main_camera_pane_t1

0x7643,	// (0x00035c5a) main_camera_pane_t2

0x0001,

0xf282,	// (0x0003d899) main_camera_pane_t

0x7664,	// (0x00035c7b) cams_zoom_pane_cp_ParamLimits

0x7664,	// (0x00035c7b) cams_zoom_pane_cp

0x7688,	// (0x00035c9f) image_cif_pane_ParamLimits

0x7688,	// (0x00035c9f) image_cif_pane

0x76a6,	// (0x00035cbd) image_subqcif_pane

0x76ae,	// (0x00035cc5) main_video_pane_g1_ParamLimits

0x76ae,	// (0x00035cc5) main_video_pane_g1

0x76ce,	// (0x00035ce5) main_video_pane_g2_ParamLimits

0x76ce,	// (0x00035ce5) main_video_pane_g2

0x76fe,	// (0x00035d15) main_video_pane_g3_ParamLimits

0x76fe,	// (0x00035d15) main_video_pane_g3

0x7727,	// (0x00035d3e) main_video_pane_g4_ParamLimits

0x7727,	// (0x00035d3e) main_video_pane_g4

0x7750,	// (0x00035d67) main_video_pane_g5_ParamLimits

0x7750,	// (0x00035d67) main_video_pane_g5

0xe7c5,	// (0x0003cddc) main_video_pane_g6_ParamLimits

0xe7c5,	// (0x0003cddc) main_video_pane_g6

0x0006,

0xf287,	// (0x0003d89e) main_video_pane_g_ParamLimits

0xf287,	// (0x0003d89e) main_video_pane_g

0x7774,	// (0x00035d8b) main_video_pane_t1_ParamLimits

0x7774,	// (0x00035d8b) main_video_pane_t1

0xe7df,	// (0x0003cdf6) cams_zoom_pane_g1

0xe7e8,	// (0x0003cdff) cams_zoom_pane_g2

0xe7f1,	// (0x0003ce08) cams_zoom_pane_g3

0xe7fa,	// (0x0003ce11) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0003d8ad) cams_zoom_pane_g

0x77be,	// (0x00035dd5) grid_cams_pane

0x77cc,	// (0x00035de3) linegrid_cams_pane

0x77da,	// (0x00035df1) cell_cams_pane_ParamLimits

0x77da,	// (0x00035df1) cell_cams_pane

0xe803,	// (0x0003ce1a) cams_burst_image_pane

0xe80b,	// (0x0003ce22) cell_cams_pane_g1

0xe2e2,	// (0x0003c8f9) grid_highlight_pane_cp03

0xe669,	// (0x0003cc80) mp_bg_pane_g1

0xe2e2,	// (0x0003c8f9) bg_list_pane_cp03

0x1a84,	// (0x0003009b) bg_mp_pane

0x1a8c,	// (0x000300a3) grid_mp_pane

0x1a94,	// (0x000300ab) media_player_g1

0x1a9c,	// (0x000300b3) media_player_t1

0x1aaa,	// (0x000300c1) media_player_t2

0x1ab8,	// (0x000300cf) media_player_t3

0x1ac6,	// (0x000300dd) media_player_t4

0x1ad4,	// (0x000300eb) media_player_t5

0x1ae2,	// (0x000300f9) media_player_t6

0x1af0,	// (0x00030107) media_player_t7

0x0006,

0xf632,	// (0x0003dc49) media_player_t

0x1afe,	// (0x00030115) wait_bar_pane_cp02

0xf617,	// (0x0003dc2e) main_usb_pane_t

0x94e8,	// (0x00037aff) cell_mp_pane

0xe669,	// (0x0003cc80) cell_mp_pane_g1

0xe2e2,	// (0x0003c8f9) grid_highlight_pane_cp06

0xe813,	// (0x0003ce2a) grid_skin_colour_pane

0xe81b,	// (0x0003ce32) list_highlight_pane_cp03

0x77ed,	// (0x00035e04) skin_g1

0xe823,	// (0x0003ce3a) skin_t1

0xe832,	// (0x0003ce49) skin_t2

0x0001,

0xf2cb,	// (0x0003d8e2) skin_t

0x77f7,	// (0x00035e0e) cell_skin_colour_pane_ParamLimits

0x77f7,	// (0x00035e0e) cell_skin_colour_pane

0xe840,	// (0x0003ce57) cell_skin_colour_pane_g1

0x784c,	// (0x00035e63) call_video_g1_ParamLimits

0x784c,	// (0x00035e63) call_video_g1

0x785c,	// (0x00035e73) call_video_g2_ParamLimits

0x785c,	// (0x00035e73) call_video_g2

0x0001,

0xf2d0,	// (0x0003d8e7) call_video_g_ParamLimits

0xf2d0,	// (0x0003d8e7) call_video_g

0x789c,	// (0x00035eb3) call_video_uplink_pane_cp1_ParamLimits

0x789c,	// (0x00035eb3) call_video_uplink_pane_cp1

0xe85a,	// (0x0003ce71) call_video_uplink_pane_cp2

0x7948,	// (0x00035f5f) video_down_crop_pane_ParamLimits

0x7948,	// (0x00035f5f) video_down_crop_pane

0x7a2e,	// (0x00036045) video_down_pane_ParamLimits

0x7a2e,	// (0x00036045) video_down_pane

0xe862,	// (0x0003ce79) video_down_subqcif_pane_ParamLimits

0xe862,	// (0x0003ce79) video_down_subqcif_pane

0xe87a,	// (0x0003ce91) video_down_subqcif_pane_cp_ParamLimits

0xe87a,	// (0x0003ce91) video_down_subqcif_pane_cp

0xe89e,	// (0x0003ceb5) im_reading_pane_ParamLimits

0xe89e,	// (0x0003ceb5) im_reading_pane

0x7b10,	// (0x00036127) im_writing_pane_ParamLimits

0x7b10,	// (0x00036127) im_writing_pane

0x7b2e,	// (0x00036145) im_reading_pane_t1

0xe8b8,	// (0x0003cecf) list_im_pane

0xe8c9,	// (0x0003cee0) scroll_pane_cp07

0x7b82,	// (0x00036199) im_writing_pane_t1_ParamLimits

0x7b82,	// (0x00036199) im_writing_pane_t1

0xe8e2,	// (0x0003cef9) im_writing_pane_t2_ParamLimits

0xe8e2,	// (0x0003cef9) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0003d8f1) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0003d8f1) im_writing_pane_t

0xe2e2,	// (0x0003c8f9) input_focus_pane_cp04

0xe2e2,	// (0x0003c8f9) input_focus_pane_cp05

0x7b97,	// (0x000361ae) list_im_single_pane_ParamLimits

0x7b97,	// (0x000361ae) list_im_single_pane

0x7bbb,	// (0x000361d2) list_single_im_pane_t1

0x94ac,	// (0x00037ac3) blid_accuracy_pane

0x94b4,	// (0x00037acb) blid_compass_pane

0x94be,	// (0x00037ad5) main_location_t1

0x94cc,	// (0x00037ae3) main_location_t2

0x94da,	// (0x00037af1) main_location_t3

0x0002,

0xf641,	// (0x0003dc58) main_location_t

0xe2e2,	// (0x0003c8f9) aid_levels_location

0xe669,	// (0x0003cc80) blid_accuracy_pane_g1

0xe669,	// (0x0003cc80) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0003d953) blid_accuracy_pane_g

0xe92a,	// (0x0003cf41) wml_content_pane

0xe968,	// (0x0003cf7f) wml_button_pane_ParamLimits

0xe968,	// (0x0003cf7f) wml_button_pane

0x7bca,	// (0x000361e1) wml_list_single_large_pane_ParamLimits

0x7bca,	// (0x000361e1) wml_list_single_large_pane

0x7bf4,	// (0x0003620b) wml_list_single_medium_pane_ParamLimits

0x7bf4,	// (0x0003620b) wml_list_single_medium_pane

0x7c25,	// (0x0003623c) wml_list_single_small_pane_ParamLimits

0x7c25,	// (0x0003623c) wml_list_single_small_pane

0xe97c,	// (0x0003cf93) wml_selection_box_pane_ParamLimits

0xe97c,	// (0x0003cf93) wml_selection_box_pane

0xe98f,	// (0x0003cfa6) wml_list_single_pane_t1

0xe99e,	// (0x0003cfb5) wml_list_single_medium_pane_t1

0xe9ad,	// (0x0003cfc4) wml_list_single_large_pane_t1

0xe9bc,	// (0x0003cfd3) input_focus_pane_cp02_ParamLimits

0xe9bc,	// (0x0003cfd3) input_focus_pane_cp02

0xe9cf,	// (0x0003cfe6) wml_selection_box_pane_g1

0xe9d8,	// (0x0003cfef) wml_selection_box_pane_t1_ParamLimits

0xe9d8,	// (0x0003cfef) wml_selection_box_pane_t1

0xe53d,	// (0x0003cb54) bg_wml_button_pane_ParamLimits

0xe53d,	// (0x0003cb54) bg_wml_button_pane

0xe9f0,	// (0x0003d007) wml_button_pane_g1

0xe9f8,	// (0x0003d00f) wml_button_pane_t1

0xe9f0,	// (0x0003d007) wml_button_bg_pane_g1

0xea08,	// (0x0003d01f) wml_button_bg_pane_g2

0xea10,	// (0x0003d027) wml_button_bg_pane_g3

0xea18,	// (0x0003d02f) wml_button_bg_pane_g4

0xea20,	// (0x0003d037) wml_button_bg_pane_g5

0xea28,	// (0x0003d03f) wml_button_bg_pane_g6

0xea30,	// (0x0003d047) wml_button_bg_pane_g7

0xea38,	// (0x0003d04f) wml_button_bg_pane_g8

0xea40,	// (0x0003d057) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0003d8f6) wml_button_bg_pane_g

0x7c5f,	// (0x00036276) bg_list_pane_cp02

0xea48,	// (0x0003d05f) mce_header_pane_ParamLimits

0xea48,	// (0x0003d05f) mce_header_pane

0xea5e,	// (0x0003d075) mce_icon_pane

0xea5e,	// (0x0003d075) mce_image_pane

0xea67,	// (0x0003d07e) mce_text_pane_ParamLimits

0xea67,	// (0x0003d07e) mce_text_pane

0x7c69,	// (0x00036280) scroll_pane_cp03

0xe960,	// (0x0003cf77) scroll_pane_cp04

0xea7a,	// (0x0003d091) scroll_pane_cp05_ParamLimits

0xea7a,	// (0x0003d091) scroll_pane_cp05

0x7c73,	// (0x0003628a) mce_header_field_pane_ParamLimits

0x7c73,	// (0x0003628a) mce_header_field_pane

0x7c93,	// (0x000362aa) mce_header_field_pane_2_ParamLimits

0x7c93,	// (0x000362aa) mce_header_field_pane_2

0x7ca9,	// (0x000362c0) mce_header_field_pane_3

0x7cb1,	// (0x000362c8) list_single_mce_message_pane_ParamLimits

0x7cb1,	// (0x000362c8) list_single_mce_message_pane

0x7cd6,	// (0x000362ed) list_single_mce_smart_pane_ParamLimits

0x7cd6,	// (0x000362ed) list_single_mce_smart_pane

0xea86,	// (0x0003d09d) input_focus_pane_cp03

0xea8f,	// (0x0003d0a6) list_header_data_pane

0x7d06,	// (0x0003631d) mce_header_field_pane_t1

0x7d14,	// (0x0003632b) list_single_mce_header_pane_ParamLimits

0x7d14,	// (0x0003632b) list_single_mce_header_pane

0xea97,	// (0x0003d0ae) list_single_mce_header_pane_t1

0xeaa6,	// (0x0003d0bd) list_single_mce_message_pane_g1

0xeaae,	// (0x0003d0c5) list_single_mce_message_pane_t1

0x7d58,	// (0x0003636f) bg_cale_heading_pane_cp01_ParamLimits

0x7d58,	// (0x0003636f) bg_cale_heading_pane_cp01

0xeabc,	// (0x0003d0d3) bg_cale_pane_cp02_ParamLimits

0xeabc,	// (0x0003d0d3) bg_cale_pane_cp02

0x7d7b,	// (0x00036392) cale_month_corner_pane

0x7d91,	// (0x000363a8) cale_month_day_heading_pane_ParamLimits

0x7d91,	// (0x000363a8) cale_month_day_heading_pane

0x7dc4,	// (0x000363db) cale_month_pane_g1_ParamLimits

0x7dc4,	// (0x000363db) cale_month_pane_g1

0x7de0,	// (0x000363f7) cale_month_pane_g2_ParamLimits

0x7de0,	// (0x000363f7) cale_month_pane_g2

0x7dfb,	// (0x00036412) cale_month_pane_g3_ParamLimits

0x7dfb,	// (0x00036412) cale_month_pane_g3

0x7e27,	// (0x0003643e) cale_month_pane_g4_ParamLimits

0x7e27,	// (0x0003643e) cale_month_pane_g4

0x7e53,	// (0x0003646a) cale_month_pane_g5_ParamLimits

0x7e53,	// (0x0003646a) cale_month_pane_g5

0x7e7f,	// (0x00036496) cale_month_pane_g6_ParamLimits

0x7e7f,	// (0x00036496) cale_month_pane_g6

0x7eab,	// (0x000364c2) cale_month_pane_g7_ParamLimits

0x7eab,	// (0x000364c2) cale_month_pane_g7

0x7ee7,	// (0x000364fe) cale_month_pane_g8_ParamLimits

0x7ee7,	// (0x000364fe) cale_month_pane_g8

0x7f23,	// (0x0003653a) cale_month_pane_g9_ParamLimits

0x7f23,	// (0x0003653a) cale_month_pane_g9

0x7f5d,	// (0x00036574) cale_month_pane_g10_ParamLimits

0x7f5d,	// (0x00036574) cale_month_pane_g10

0x7f97,	// (0x000365ae) cale_month_pane_g11_ParamLimits

0x7f97,	// (0x000365ae) cale_month_pane_g11

0x7fd1,	// (0x000365e8) cale_month_pane_g12_ParamLimits

0x7fd1,	// (0x000365e8) cale_month_pane_g12

0x800b,	// (0x00036622) cale_month_pane_g13_ParamLimits

0x800b,	// (0x00036622) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0003d909) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0003d909) cale_month_pane_g

0x8045,	// (0x0003665c) cale_month_week_pane

0x8058,	// (0x0003666f) grid_cale_month_pane_ParamLimits

0x8058,	// (0x0003666f) grid_cale_month_pane

0x8086,	// (0x0003669d) cale_month_day_heading_pane_t1

0x80e4,	// (0x000366fb) cale_month_day_heading_pane_t2

0x8149,	// (0x00036760) cale_month_day_heading_pane_t3

0x81ae,	// (0x000367c5) cale_month_day_heading_pane_t4

0x8213,	// (0x0003682a) cale_month_day_heading_pane_t5

0x8278,	// (0x0003688f) cale_month_day_heading_pane_t6

0x82dd,	// (0x000368f4) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0003d924) cale_month_day_heading_pane_t

0xe754,	// (0x0003cd6b) bg_cale_side_pane_cp01

0x8352,	// (0x00036969) cale_month_week_pane_t1

0x8369,	// (0x00036980) cale_month_week_pane_t2

0x8380,	// (0x00036997) cale_month_week_pane_t3

0x8397,	// (0x000369ae) cale_month_week_pane_t4

0x83ae,	// (0x000369c5) cale_month_week_pane_t5

0x83c5,	// (0x000369dc) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0003d933) cale_month_week_pane_t

0x83dc,	// (0x000369f3) cell_cale_month_pane_ParamLimits

0x83dc,	// (0x000369f3) cell_cale_month_pane

0x8492,	// (0x00036aa9) cell_cale_month_pane_g1

0x849e,	// (0x00036ab5) cell_cale_month_pane_t1_ParamLimits

0x849e,	// (0x00036ab5) cell_cale_month_pane_t1

0xe762,	// (0x0003cd79) grid_highlight_pane_cp08

0xe669,	// (0x0003cc80) main_smil_g1

0x84ba,	// (0x00036ad1) smil_status_pane

0xeaf1,	// (0x0003d108) smil_text_pane

0x19a4,	// (0x0002ffbb) bg_popup_call3_rect_pane_g8

0x19ac,	// (0x0002ffc3) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0003dbec) bg_popup_call3_rect_pane_g

0x1c39,	// (0x00030250) smil_status_volume_pane_g1

0xeafb,	// (0x0003d112) smil_status_pane_t1

0x9892,	// (0x00037ea9) volume_smil_pane

0xeb12,	// (0x0003d129) list_smil_text_pane

0x84cd,	// (0x00036ae4) scroll_pane_cp011

0x84d8,	// (0x00036aef) smil_text_list_pane_t1_ParamLimits

0x84d8,	// (0x00036aef) smil_text_list_pane_t1

0x8550,	// (0x00036b67) aid_volume_smil_ParamLimits

0x8550,	// (0x00036b67) aid_volume_smil

0xe669,	// (0x0003cc80) smil_volume_pane_g1

0xe669,	// (0x0003cc80) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0003d953) smil_volume_pane_g

0xe614,	// (0x0003cc2b) listscroll_cale_day_pane

0xeb1c,	// (0x0003d133) bg_cale_pane

0xeb34,	// (0x0003d14b) list_cale_pane

0xeb45,	// (0x0003d15c) scroll_pane_cp09

0xeb56,	// (0x0003d16d) cale_bg_pane_g1

0xeb5e,	// (0x0003d175) cale_bg_pane_g2

0xeb66,	// (0x0003d17d) cale_bg_pane_g3

0xeb6e,	// (0x0003d185) cale_bg_pane_g4

0xeb76,	// (0x0003d18d) cale_bg_pane_g5

0xeb7e,	// (0x0003d195) cale_bg_pane_g6

0xeb86,	// (0x0003d19d) cale_bg_pane_g7

0xeb8e,	// (0x0003d1a5) cale_bg_pane_g8

0xeb96,	// (0x0003d1ad) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0003d958) cale_bg_pane_g

0x8572,	// (0x00036b89) list_cale_time_pane_ParamLimits

0x8572,	// (0x00036b89) list_cale_time_pane

0xeb9e,	// (0x0003d1b5) list_cale_time_pane_g1_ParamLimits

0xeb9e,	// (0x0003d1b5) list_cale_time_pane_g1

0xebaa,	// (0x0003d1c1) list_cale_time_pane_g2_ParamLimits

0xebaa,	// (0x0003d1c1) list_cale_time_pane_g2

0x858e,	// (0x00036ba5) list_cale_time_pane_g3_ParamLimits

0x858e,	// (0x00036ba5) list_cale_time_pane_g3

0x859c,	// (0x00036bb3) list_cale_time_pane_g4_ParamLimits

0x859c,	// (0x00036bb3) list_cale_time_pane_g4

0x85aa,	// (0x00036bc1) list_cale_time_pane_g5_ParamLimits

0x85aa,	// (0x00036bc1) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0003d96b) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0003d96b) list_cale_time_pane_g

0xebc4,	// (0x0003d1db) list_cale_time_pane_t1_ParamLimits

0xebc4,	// (0x0003d1db) list_cale_time_pane_t1

0xebec,	// (0x0003d203) list_cale_time_pane_t2_ParamLimits

0xebec,	// (0x0003d203) list_cale_time_pane_t2

0x8875,	// (0x00036e8c) aid_blid_cardinal_pane

0x88b7,	// (0x00036ece) compass_pane_t4

0xec14,	// (0x0003d22b) list_cale_time_pane_t4_ParamLimits

0xec14,	// (0x0003d22b) list_cale_time_pane_t4

0x88c5,	// (0x00036edc) compass_pane_t5

0x88d5,	// (0x00036eec) compass_pane_t6

0x88e3,	// (0x00036efa) compass_pane_t7

0xf03f,	// (0x0003d656) navi_pane_cc_t1

0x0767,	// (0x0002ed7e) aid_phob_thumbnail_center_pane

0x8fb2,	// (0x000375c9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0003d978) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0003d978) list_cale_time_pane_t

0xdf39,	// (0x0003c550) bg_popup_window_pane_cp02_ParamLimits

0xdf39,	// (0x0003c550) bg_popup_window_pane_cp02

0xec3c,	// (0x0003d253) heading_pane_cp01_ParamLimits

0xec3c,	// (0x0003d253) heading_pane_cp01

0xec48,	// (0x0003d25f) loc_req_pane_ParamLimits

0xec48,	// (0x0003d25f) loc_req_pane

0xec58,	// (0x0003d26f) loc_type_pane_ParamLimits

0xec58,	// (0x0003d26f) loc_type_pane

0xec6a,	// (0x0003d281) loc_type_pane_t1_ParamLimits

0xec6a,	// (0x0003d281) loc_type_pane_t1

0xec7c,	// (0x0003d293) loc_type_pane_t2_ParamLimits

0xec7c,	// (0x0003d293) loc_type_pane_t2

0xec8e,	// (0x0003d2a5) loc_type_pane_t3_ParamLimits

0xec8e,	// (0x0003d2a5) loc_type_pane_t3

0x0002,

0xf368,	// (0x0003d97f) loc_type_pane_t_ParamLimits

0xf368,	// (0x0003d97f) loc_type_pane_t

0xeca0,	// (0x0003d2b7) list_loc_req_pane

0xecaa,	// (0x0003d2c1) scroll_pane_cp012

0x85b8,	// (0x00036bcf) list_single_loc_request_popup_menu_pane_ParamLimits

0x85b8,	// (0x00036bcf) list_single_loc_request_popup_menu_pane

0xecb5,	// (0x0003d2cc) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xecb5,	// (0x0003d2cc) list_single_loc_request_popup_menu_pane_g1

0xecc1,	// (0x0003d2d8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xecc1,	// (0x0003d2d8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0003d986) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0003d986) list_single_loc_request_popup_menu_pane_g

0xeccd,	// (0x0003d2e4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xeccd,	// (0x0003d2e4) list_single_loc_request_popup_menu_pane_t1

0x85ca,	// (0x00036be1) bg_popup_window_pane_cp03_ParamLimits

0x85ca,	// (0x00036be1) bg_popup_window_pane_cp03

0x85d8,	// (0x00036bef) heading_loc_req_pane_ParamLimits

0x85d8,	// (0x00036bef) heading_loc_req_pane

0x85e4,	// (0x00036bfb) popup_dyc_status_message_window_g1_ParamLimits

0x85e4,	// (0x00036bfb) popup_dyc_status_message_window_g1

0x85f0,	// (0x00036c07) popup_dyc_status_message_window_t1_ParamLimits

0x85f0,	// (0x00036c07) popup_dyc_status_message_window_t1

0x8602,	// (0x00036c19) popup_dyc_status_message_window_t2_ParamLimits

0x8602,	// (0x00036c19) popup_dyc_status_message_window_t2

0x8614,	// (0x00036c2b) popup_dyc_status_message_window_t3_ParamLimits

0x8614,	// (0x00036c2b) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0003d98b) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0003d98b) popup_dyc_status_message_window_t

0xe2e2,	// (0x0003c8f9) bg_heading_pane_cp01

0xece3,	// (0x0003d2fa) heading_loc_req_pane_g1

0xeceb,	// (0x0003d302) heading_loc_req_pane_g2

0xecf3,	// (0x0003d30a) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0003d992) heading_loc_req_pane_g

0xecfb,	// (0x0003d312) heading_loc_req_pane_t1

0xed0a,	// (0x0003d321) bg_popup_sub_pane_cp01_ParamLimits

0xed0a,	// (0x0003d321) bg_popup_sub_pane_cp01

0xed18,	// (0x0003d32f) popup_cale_events_window_g1_ParamLimits

0xed18,	// (0x0003d32f) popup_cale_events_window_g1

0xed38,	// (0x0003d34f) popup_cale_events_window_g2_ParamLimits

0xed38,	// (0x0003d34f) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0003d9c6) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0003d9c6) popup_cale_events_window_g

0xed58,	// (0x0003d36f) popup_cale_events_window_t1_ParamLimits

0xed58,	// (0x0003d36f) popup_cale_events_window_t1

0xed6a,	// (0x0003d381) popup_cale_events_window_t2_ParamLimits

0xed6a,	// (0x0003d381) popup_cale_events_window_t2

0xeda8,	// (0x0003d3bf) popup_cale_events_window_t3_ParamLimits

0xeda8,	// (0x0003d3bf) popup_cale_events_window_t3

0xede2,	// (0x0003d3f9) popup_cale_events_window_t4_ParamLimits

0xede2,	// (0x0003d3f9) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0003d9cb) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0003d9cb) popup_cale_events_window_t

0x863e,	// (0x00036c55) call_type_pane

0x077f,	// (0x0002ed96) popup_call_status_window_g1

0x864a,	// (0x00036c61) popup_call_status_window_g2

0x8656,	// (0x00036c6d) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0003d9d4) popup_call_status_window_g

0xee18,	// (0x0003d42f) call_type_pane_g1

0xee21,	// (0x0003d438) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0003d9db) call_type_pane_g

0xe2e2,	// (0x0003c8f9) bg_popup_sub_pane_cp02

0xee2a,	// (0x0003d441) listscroll_popup_wml_pane

0xee32,	// (0x0003d449) list_wml_pane

0xee3c,	// (0x0003d453) scroll_pane_cp013

0xee47,	// (0x0003d45e) list_single_graphic_popup_wml_pane_ParamLimits

0xee47,	// (0x0003d45e) list_single_graphic_popup_wml_pane

0xe669,	// (0x0003cc80) list_single_graphic_popup_wml_pane_g1

0xee5b,	// (0x0003d472) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0003d9e0) list_single_graphic_popup_wml_pane_g

0xee63,	// (0x0003d47a) list_single_graphic_popup_wml_pane_t1

0xee79,	// (0x0003d490) aid_call_pane

0xe535,	// (0x0003cb4c) popup_clock_analogue_window_g1

0xe535,	// (0x0003cb4c) popup_clock_analogue_window_g2

0x8662,	// (0x00036c79) popup_clock_analogue_window_g3

0x8662,	// (0x00036c79) popup_clock_analogue_window_g4

0xe669,	// (0x0003cc80) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0003d9e5) popup_clock_analogue_window_g

0x866a,	// (0x00036c81) popup_clock_analogue_window_t1

0x8678,	// (0x00036c8f) clock_digital_number_pane_ParamLimits

0x8678,	// (0x00036c8f) clock_digital_number_pane

0x8684,	// (0x00036c9b) clock_digital_number_pane_cp02_ParamLimits

0x8684,	// (0x00036c9b) clock_digital_number_pane_cp02

0x8690,	// (0x00036ca7) clock_digital_number_pane_cp03_ParamLimits

0x8690,	// (0x00036ca7) clock_digital_number_pane_cp03

0x869c,	// (0x00036cb3) clock_digital_number_pane_cp04_ParamLimits

0x869c,	// (0x00036cb3) clock_digital_number_pane_cp04

0x86ac,	// (0x00036cc3) clock_digital_separator_pane_ParamLimits

0x86ac,	// (0x00036cc3) clock_digital_separator_pane

0x86b8,	// (0x00036ccf) popup_clock_digital_window_t1

0xe669,	// (0x0003cc80) clock_digital_number_pane_g1

0xe669,	// (0x0003cc80) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0003d953) clock_digital_number_pane_g

0xe669,	// (0x0003cc80) clock_digital_separator_pane_g1

0xe669,	// (0x0003cc80) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0003d953) clock_digital_separator_pane_g

0xe2e2,	// (0x0003c8f9) bg_popup_window_pane_cp04

0xee81,	// (0x0003d498) heading_pane_cp03

0xee89,	// (0x0003d4a0) listscroll_popup_gms_pane

0xee91,	// (0x0003d4a8) grid_large_graphic_popup_pane

0xee9b,	// (0x0003d4b2) listscroll_popup_gms_pane_g1

0xeea3,	// (0x0003d4ba) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0003d9f0) listscroll_popup_gms_pane_g

0xe960,	// (0x0003cf77) scroll_pane_cp014

0x86d5,	// (0x00036cec) cell_large_graphic_popup_pane_ParamLimits

0x86d5,	// (0x00036cec) cell_large_graphic_popup_pane

0x86ed,	// (0x00036d04) cell_large_graphic_popup_pane_g1_ParamLimits

0x86ed,	// (0x00036d04) cell_large_graphic_popup_pane_g1

0xeeab,	// (0x0003d4c2) cell_large_graphic_popup_pane_g2_ParamLimits

0xeeab,	// (0x0003d4c2) cell_large_graphic_popup_pane_g2

0xeeb7,	// (0x0003d4ce) cell_large_graphic_popup_pane_g3_ParamLimits

0xeeb7,	// (0x0003d4ce) cell_large_graphic_popup_pane_g3

0xeec4,	// (0x0003d4db) cell_large_graphic_popup_pane_g4_ParamLimits

0xeec4,	// (0x0003d4db) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0003d9f5) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0003d9f5) cell_large_graphic_popup_pane_g

0xeed4,	// (0x0003d4eb) grid_highlight_pane_cp010

0xe669,	// (0x0003cc80) bg_popup_call_pane_g1

0xeede,	// (0x0003d4f5) list_single_graphic_popup_conf_pane_ParamLimits

0xeede,	// (0x0003d4f5) list_single_graphic_popup_conf_pane

0xeef1,	// (0x0003d508) list_highlight_pane_cp01

0xeefa,	// (0x0003d511) list_single_graphic_popup_conf_pane_g1

0xef02,	// (0x0003d519) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0003d9fe) list_single_graphic_popup_conf_pane_g

0xef0a,	// (0x0003d521) list_single_graphic_popup_conf_pane_t1

0xef18,	// (0x0003d52f) linegrid_cams_pane_g1

0x86f9,	// (0x00036d10) linegrid_cams_pane_g2

0xe795,	// (0x0003cdac) linegrid_cams_pane_g3

0xef21,	// (0x0003d538) linegrid_cams_pane_g4

0x8702,	// (0x00036d19) linegrid_cams_pane_g5

0x870b,	// (0x00036d22) linegrid_cams_pane_g6

0xe79e,	// (0x0003cdb5) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0003da03) linegrid_cams_pane_g

0xef2a,	// (0x0003d541) popup_clock_analogue_window

0xef2a,	// (0x0003d541) popup_clock_digital_window

0xe2e2,	// (0x0003c8f9) popup_phob_thumbnail_window

0xe669,	// (0x0003cc80) call_video_uplink_pane_g1

0xef33,	// (0x0003d54a) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0003da12) call_video_uplink_pane_g

0xef3b,	// (0x0003d552) video_uplink_pane

0xef43,	// (0x0003d55a) mce_image_pane_g1

0x8714,	// (0x00036d2b) mce_image_pane_g2

0x871e,	// (0x00036d35) mce_image_pane_g3

0x8726,	// (0x00036d3d) mce_image_pane_g4

0x872e,	// (0x00036d45) mce_image_pane_g5

0x0004,

0xf400,	// (0x0003da17) mce_image_pane_g

0xef4d,	// (0x0003d564) control_top_pane_stacon_cp01_ParamLimits

0xef4d,	// (0x0003d564) control_top_pane_stacon_cp01

0xef61,	// (0x0003d578) uni_indicator_pane_stacon_cp01_ParamLimits

0xef61,	// (0x0003d578) uni_indicator_pane_stacon_cp01

0xef72,	// (0x0003d589) bg_popup_sub_pane_cp03

0x8736,	// (0x00036d4d) chi_dic_find_pane

0x873e,	// (0x00036d55) listscroll_chi_dic_pane

0x8747,	// (0x00036d5e) main_pane_chidic_g1

0xef7c,	// (0x0003d593) chi_dic_find_pane_t1

0xef8a,	// (0x0003d5a1) find_chidic_pane

0xef93,	// (0x0003d5aa) chi_dic_list_pane_ParamLimits

0xef93,	// (0x0003d5aa) chi_dic_list_pane

0xefa4,	// (0x0003d5bb) scroll_pane_cp020

0xefac,	// (0x0003d5c3) find_chidic_pane_t1

0xe2e2,	// (0x0003c8f9) input_focus_pane_cp06

0x875a,	// (0x00036d71) list_chi_dic_pane_ParamLimits

0x875a,	// (0x00036d71) list_chi_dic_pane

0x8774,	// (0x00036d8b) list_chi_dic_pane_t1_ParamLimits

0x8774,	// (0x00036d8b) list_chi_dic_pane_t1

0xe2e2,	// (0x0003c8f9) list_highlight_pane_cp020

0xefbb,	// (0x0003d5d2) bg_cale_heading_pane_g1

0x8787,	// (0x00036d9e) bg_cale_heading_pane_g2

0x878f,	// (0x00036da6) bg_cale_heading_pane_g3

0x8797,	// (0x00036dae) bg_cale_heading_pane_g4

0x87a1,	// (0x00036db8) bg_cale_heading_pane_g5

0x87ab,	// (0x00036dc2) bg_cale_heading_pane_g6

0x87b3,	// (0x00036dca) bg_cale_heading_pane_g7

0x87bb,	// (0x00036dd2) bg_cale_heading_pane_g8

0x87c5,	// (0x00036ddc) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0003da22) bg_cale_heading_pane_g

0xefbb,	// (0x0003d5d2) bg_cale_side_pane_g1

0x87cf,	// (0x00036de6) bg_cale_side_pane_g2

0x87d7,	// (0x00036dee) bg_cale_side_pane_g3

0x87df,	// (0x00036df6) bg_cale_side_pane_g4

0x87e7,	// (0x00036dfe) bg_cale_side_pane_g5

0x87ef,	// (0x00036e06) bg_cale_side_pane_g6

0x87f7,	// (0x00036e0e) bg_cale_side_pane_g7

0x87ff,	// (0x00036e16) bg_cale_side_pane_g8

0x8807,	// (0x00036e1e) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0003da35) bg_cale_side_pane_g

0x880f,	// (0x00036e26) popup_call_status_window_ParamLimits

0x880f,	// (0x00036e26) popup_call_status_window

0xefc3,	// (0x0003d5da) stacon_top_pane

0xefcb,	// (0x0003d5e2) status_pane_ParamLimits

0xefcb,	// (0x0003d5e2) status_pane

0xefe0,	// (0x0003d5f7) status_small_pane

0xefe8,	// (0x0003d5ff) control_pane

0xe2e2,	// (0x0003c8f9) stacon_bottom_pane

0xeff0,	// (0x0003d607) list_single_mce_smart_pane_t1_ParamLimits

0xeff0,	// (0x0003d607) list_single_mce_smart_pane_t1

0xf003,	// (0x0003d61a) list_single_mce_smart_pane_t2_ParamLimits

0xf003,	// (0x0003d61a) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0003da48) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0003da48) list_single_mce_smart_pane_t

0x881b,	// (0x00036e32) compass_pane

0x8827,	// (0x00036e3e) main_location2_pane_t1

0x883b,	// (0x00036e52) main_location2_pane_t2

0x884f,	// (0x00036e66) main_location2_pane_t3

0x0003,

0xf436,	// (0x0003da4d) main_location2_pane_t

0xf022,	// (0x0003d639) compass_pane_g1_ParamLimits

0xf022,	// (0x0003d639) compass_pane_g1

0x8899,	// (0x00036eb0) compass_pane_t1

0x88a8,	// (0x00036ebf) compass_pane_t2

0x0005,

0xf43f,	// (0x0003da56) compass_pane_t

0x88f3,	// (0x00036f0a) text_secondary_cp61

0xf036,	// (0x0003d64d) navi_pane_cams_g5

0xf059,	// (0x0003d670) navi_pane_im_t1

0xf067,	// (0x0003d67e) navi_pane_mp_g1_ParamLimits

0xf067,	// (0x0003d67e) navi_pane_mp_g1

0xf07b,	// (0x0003d692) navi_pane_mp_g2_ParamLimits

0xf07b,	// (0x0003d692) navi_pane_mp_g2

0xf087,	// (0x0003d69e) navi_pane_mp_g3_ParamLimits

0xf087,	// (0x0003d69e) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0003da6a) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0003da6a) navi_pane_mp_g

0xf093,	// (0x0003d6aa) navi_pane_mp_t1

0xf0a1,	// (0x0003d6b8) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0003da71) navi_pane_mp_t

0xf0dd,	// (0x0003d6f4) navi_pane_vt_g1

0xf093,	// (0x0003d6aa) navi_pane_vt_t1

0xf0e5,	// (0x0003d6fc) navi_slider_pane

0xf0ed,	// (0x0003d704) zooming_pane

0xf0f5,	// (0x0003d70c) navi_slider_pane_g1

0x8a08,	// (0x0003701f) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0003da78) navi_slider_pane_g

0xf119,	// (0x0003d730) aid_levels_zoom

0x06f4,	// (0x0002ed0b) zooming_pane_g1

0x06fc,	// (0x0002ed13) zooming_pane_g2

0x06fc,	// (0x0002ed13) zooming_pane_g3

0x0002,

0xf470,	// (0x0003da87) zooming_pane_g

0x0704,	// (0x0002ed1b) level_10_zoom

0x070d,	// (0x0002ed24) level_11_zoom

0x0716,	// (0x0002ed2d) level_1_zoom

0x071f,	// (0x0002ed36) level_2_zoom

0x0728,	// (0x0002ed3f) level_3_zoom

0x0731,	// (0x0002ed48) level_4_zoom

0x073a,	// (0x0002ed51) level_5_zoom

0x0743,	// (0x0002ed5a) level_6_zoom

0x074c,	// (0x0002ed63) level_7_zoom

0x0755,	// (0x0002ed6c) level_8_zoom

0x075e,	// (0x0002ed75) level_9_zoom

0x076f,	// (0x0002ed86) popup_phob_thumbnail_window_g1

0x0777,	// (0x0002ed8e) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0003da8e) popup_phob_thumbnail_window_g

0x1b06,	// (0x0003011d) level_1_location

0x1b0e,	// (0x00030125) level_2_location

0x1b16,	// (0x0003012d) level_3_location

0x1b1e,	// (0x00030135) level_4_location

0xf0ed,	// (0x0003d704) level_5_location

0x8a1a,	// (0x00037031) mce_icon_pane_g1

0x8a22,	// (0x00037039) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0003da93) mce_icon_pane_g

0x8a2a,	// (0x00037041) main_mup_pane_g1_ParamLimits

0x8a2a,	// (0x00037041) main_mup_pane_g1

0x8a42,	// (0x00037059) main_mup_pane_g2_ParamLimits

0x8a42,	// (0x00037059) main_mup_pane_g2

0x8a5e,	// (0x00037075) main_mup_pane_g3_ParamLimits

0x8a5e,	// (0x00037075) main_mup_pane_g3

0x8a7a,	// (0x00037091) main_mup_pane_g4_ParamLimits

0x8a7a,	// (0x00037091) main_mup_pane_g4

0x8a96,	// (0x000370ad) main_mup_pane_g5_ParamLimits

0x8a96,	// (0x000370ad) main_mup_pane_g5

0x8ab7,	// (0x000370ce) main_mup_pane_g6_ParamLimits

0x8ab7,	// (0x000370ce) main_mup_pane_g6

0x8ad3,	// (0x000370ea) main_mup_pane_g7_ParamLimits

0x8ad3,	// (0x000370ea) main_mup_pane_g7

0x8aef,	// (0x00037106) main_mup_pane_g8_ParamLimits

0x8aef,	// (0x00037106) main_mup_pane_g8

0x8b0f,	// (0x00037126) main_mup_pane_g9_ParamLimits

0x8b0f,	// (0x00037126) main_mup_pane_g9

0x8b2e,	// (0x00037145) main_mup_pane_g10_ParamLimits

0x8b2e,	// (0x00037145) main_mup_pane_g10

0x8b4d,	// (0x00037164) main_mup_pane_g11_ParamLimits

0x8b4d,	// (0x00037164) main_mup_pane_g11

0x8b65,	// (0x0003717c) main_mup_pane_g12_ParamLimits

0x8b65,	// (0x0003717c) main_mup_pane_g12

0x8b73,	// (0x0003718a) main_mup_pane_g13_ParamLimits

0x8b73,	// (0x0003718a) main_mup_pane_g13

0x000c,

0xf481,	// (0x0003da98) main_mup_pane_g_ParamLimits

0xf481,	// (0x0003da98) main_mup_pane_g

0x8b89,	// (0x000371a0) main_mup_pane_t1_ParamLimits

0x8b89,	// (0x000371a0) main_mup_pane_t1

0x8ba6,	// (0x000371bd) main_mup_pane_t2_ParamLimits

0x8ba6,	// (0x000371bd) main_mup_pane_t2

0x8bc0,	// (0x000371d7) main_mup_pane_t3_ParamLimits

0x8bc0,	// (0x000371d7) main_mup_pane_t3

0x8bda,	// (0x000371f1) main_mup_pane_t4_ParamLimits

0x8bda,	// (0x000371f1) main_mup_pane_t4

0x8bec,	// (0x00037203) main_mup_pane_t5_ParamLimits

0x8bec,	// (0x00037203) main_mup_pane_t5

0x8bfe,	// (0x00037215) main_mup_pane_t6_ParamLimits

0x8bfe,	// (0x00037215) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0003dab3) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0003dab3) main_mup_pane_t

0x8c14,	// (0x0003722b) mup_progress_pane_ParamLimits

0x8c14,	// (0x0003722b) mup_progress_pane

0x8c20,	// (0x00037237) mup_visualizer_pane_ParamLimits

0x8c20,	// (0x00037237) mup_visualizer_pane

0x8c5a,	// (0x00037271) mup_volume_pane_ParamLimits

0x8c5a,	// (0x00037271) mup_volume_pane

0x077f,	// (0x0002ed96) mup_visualizer_pane_g1_ParamLimits

0x077f,	// (0x0002ed96) mup_visualizer_pane_g1

0x077f,	// (0x0002ed96) mup_visualizer_pane_g2_ParamLimits

0x077f,	// (0x0002ed96) mup_visualizer_pane_g2

0xf022,	// (0x0003d639) mup_visualizer_pane_g3_ParamLimits

0xf022,	// (0x0003d639) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0003dac0) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0003dac0) mup_visualizer_pane_g

0xe669,	// (0x0003cc80) mup_volume_pane_g1

0x0795,	// (0x0002edac) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0003dac7) mup_volume_pane_g

0xe669,	// (0x0003cc80) mup_progress_pane_g1

0x079e,	// (0x0002edb5) mup_progress_pane_g2

0x07a7,	// (0x0002edbe) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0003dacc) mup_progress_pane_g

0xe2e2,	// (0x0003c8f9) bg_popup_window_pane_cp05

0x07b0,	// (0x0002edc7) heading_pane_cp02_ParamLimits

0x07b0,	// (0x0002edc7) heading_pane_cp02

0x07ca,	// (0x0002ede1) list_popup_blid_pane

0x07d2,	// (0x0002ede9) list_blid_sat_info_pane_ParamLimits

0x07d2,	// (0x0002ede9) list_blid_sat_info_pane

0x07e5,	// (0x0002edfc) list_blid_sat_info_pane_g1

0x07ed,	// (0x0002ee04) list_blid_sat_info_pane_t1

0x8d67,	// (0x0003737e) mup_equalizer_pane_ParamLimits

0x8d67,	// (0x0003737e) mup_equalizer_pane

0x8d88,	// (0x0003739f) mup_equalizer_pane_cp1_ParamLimits

0x8d88,	// (0x0003739f) mup_equalizer_pane_cp1

0x8da9,	// (0x000373c0) mup_equalizer_pane_cp2_ParamLimits

0x8da9,	// (0x000373c0) mup_equalizer_pane_cp2

0x8dca,	// (0x000373e1) mup_equalizer_pane_cp3_ParamLimits

0x8dca,	// (0x000373e1) mup_equalizer_pane_cp3

0x8deb,	// (0x00037402) mup_equalizer_pane_cp4_ParamLimits

0x8deb,	// (0x00037402) mup_equalizer_pane_cp4

0x8e0c,	// (0x00037423) mup_equalizer_pane_cp5

0x8e22,	// (0x00037439) mup_equalizer_pane_cp6

0x8e3a,	// (0x00037451) mup_equalizer_pane_cp7

0x1a24,	// (0x0003003b) bg_popup_call_poc_act_pane_g9

0x1a2c,	// (0x00030043) bg_popup_call_poc_act_pane_g10

0x1a34,	// (0x0003004b) bg_popup_call_poc_act_pane_g11

0x000a,

0xe53d,	// (0x0003cb54) mup_scale_pane

0xe669,	// (0x0003cc80) mup_scale_pane_g1

0x07fb,	// (0x0002ee12) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0003dae8) mup_scale_pane_g

0x081f,	// (0x0002ee36) msg_data_pane

0x0827,	// (0x0002ee3e) scroll_pane_cp017

0x5a9f,	// (0x000340b6) bg_list_pane_cp04_ParamLimits

0x5a9f,	// (0x000340b6) bg_list_pane_cp04

0x0837,	// (0x0002ee4e) msg_data_pane_g1

0x8e64,	// (0x0003747b) msg_data_pane_g2

0x8e6e,	// (0x00037485) msg_data_pane_g3

0x8e76,	// (0x0003748d) msg_data_pane_g4

0x8e7e,	// (0x00037495) msg_data_pane_g5

0x8e86,	// (0x0003749d) msg_data_pane_g6

0x8e8e,	// (0x000374a5) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0003daf7) msg_data_pane_g

0x5ac3,	// (0x000340da) msg_text_pane_ParamLimits

0x5ac3,	// (0x000340da) msg_text_pane

0x8e96,	// (0x000374ad) qrid_highlight_pane_cp011_ParamLimits

0x8e96,	// (0x000374ad) qrid_highlight_pane_cp011

0xe2e2,	// (0x0003c8f9) msg_body_pane

0xe2e2,	// (0x0003c8f9) msg_header_pane

0x0848,	// (0x0002ee5f) input_focus_pane_cp07

0x5b0f,	// (0x00034126) msg_header_pane_t1_ParamLimits

0x5b0f,	// (0x00034126) msg_header_pane_t1

0x5b21,	// (0x00034138) msg_header_pane_t2_ParamLimits

0x5b21,	// (0x00034138) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0003db0b) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0003db0b) msg_header_pane_t

0x086f,	// (0x0002ee86) msg_body_pane_g1

0x5b33,	// (0x0003414a) msg_body_pane_t1_ParamLimits

0x5b33,	// (0x0003414a) msg_body_pane_t1

0x5b64,	// (0x0003417b) msg_body_pane_t2_ParamLimits

0x5b64,	// (0x0003417b) msg_body_pane_t2

0x5b76,	// (0x0003418d) msg_body_pane_t3_ParamLimits

0x5b76,	// (0x0003418d) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0003db10) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0003db10) msg_body_pane_t

0x8f02,	// (0x00037519) main_viewer_pane_g1_ParamLimits

0x8f02,	// (0x00037519) main_viewer_pane_g1

0x8f0e,	// (0x00037525) main_viewer_pane_g2_ParamLimits

0x8f0e,	// (0x00037525) main_viewer_pane_g2

0x8f1a,	// (0x00037531) main_viewer_pane_g3_ParamLimits

0x8f1a,	// (0x00037531) main_viewer_pane_g3

0x8f2b,	// (0x00037542) main_viewer_pane_g4_ParamLimits

0x8f2b,	// (0x00037542) main_viewer_pane_g4

0x8f3c,	// (0x00037553) main_viewer_pane_g5_ParamLimits

0x8f3c,	// (0x00037553) main_viewer_pane_g5

0x8f3c,	// (0x00037553) main_viewer_pane_g7_ParamLimits

0x8f3c,	// (0x00037553) main_viewer_pane_g7

0x8f4e,	// (0x00037565) main_viewer_pane_g8_ParamLimits

0x8f4e,	// (0x00037565) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0003db20) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0003db20) main_viewer_pane_g

0x0902,	// (0x0002ef19) viewer_content_pane_ParamLimits

0x0902,	// (0x0002ef19) viewer_content_pane

0x8f86,	// (0x0003759d) main_postcard_pane_g1_ParamLimits

0x8f86,	// (0x0003759d) main_postcard_pane_g1

0x8f94,	// (0x000375ab) main_postcard_pane_g2_ParamLimits

0x8f94,	// (0x000375ab) main_postcard_pane_g2

0x8fa2,	// (0x000375b9) main_postcard_pane_g3_ParamLimits

0x8fa2,	// (0x000375b9) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0003db31) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0003db31) main_postcard_pane_g

0x8fb2,	// (0x000375c9) main_postcard_pane_g4

0x1c26,	// (0x0003023d) smil_status_volume_pane_g2

0x8fde,	// (0x000375f5) postcard_pane_ParamLimits

0x8fde,	// (0x000375f5) postcard_pane

0x077f,	// (0x0002ed96) postcard_pane_g1_ParamLimits

0x077f,	// (0x0002ed96) postcard_pane_g1

0x9010,	// (0x00037627) postcard_pane_g2_ParamLimits

0x9010,	// (0x00037627) postcard_pane_g2

0x901c,	// (0x00037633) postcard_pane_g3_ParamLimits

0x901c,	// (0x00037633) postcard_pane_g3

0x091e,	// (0x0002ef35) postcard_pane_g4_ParamLimits

0x091e,	// (0x0002ef35) postcard_pane_g4

0x9028,	// (0x0003763f) postcard_pane_g5_ParamLimits

0x9028,	// (0x0003763f) postcard_pane_g5

0x9034,	// (0x0003764b) postcard_pane_g6_ParamLimits

0x9034,	// (0x0003764b) postcard_pane_g6

0x0910,	// (0x0002ef27) postcard_pane_g7_ParamLimits

0x0910,	// (0x0002ef27) postcard_pane_g7

0x0006,

0xf527,	// (0x0003db3e) postcard_pane_g_ParamLimits

0xf527,	// (0x0003db3e) postcard_pane_g

0x9040,	// (0x00037657) main_mp2_pane_g1_ParamLimits

0x9040,	// (0x00037657) main_mp2_pane_g1

0x904c,	// (0x00037663) main_mp2_pane_g2_ParamLimits

0x904c,	// (0x00037663) main_mp2_pane_g2

0x9058,	// (0x0003766f) main_mp2_pane_g3_ParamLimits

0x9058,	// (0x0003766f) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0003db4d) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0003db4d) main_mp2_pane_g

0x9064,	// (0x0003767b) main_mp2_pane_t1_ParamLimits

0x9064,	// (0x0003767b) main_mp2_pane_t1

0x907b,	// (0x00037692) main_mp2_pane_t2_ParamLimits

0x907b,	// (0x00037692) main_mp2_pane_t2

0x908f,	// (0x000376a6) main_mp2_pane_t3_ParamLimits

0x908f,	// (0x000376a6) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0003db54) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0003db54) main_mp2_pane_t

0x092c,	// (0x0002ef43) pec_content_pane_ParamLimits

0x092c,	// (0x0002ef43) pec_content_pane

0xe960,	// (0x0003cf77) scroll_pane_cp015

0x093e,	// (0x0002ef55) pec_attribute_pane_ParamLimits

0x093e,	// (0x0002ef55) pec_attribute_pane

0x90a1,	// (0x000376b8) pec_content_pane_g1_ParamLimits

0x90a1,	// (0x000376b8) pec_content_pane_g1

0x094e,	// (0x0002ef65) pec_content_pane_t1_ParamLimits

0x094e,	// (0x0002ef65) pec_content_pane_t1

0x0960,	// (0x0002ef77) pec_content_pane_t2_ParamLimits

0x0960,	// (0x0002ef77) pec_content_pane_t2

0x0001,

0xf544,	// (0x0003db5b) pec_content_pane_t_ParamLimits

0xf544,	// (0x0003db5b) pec_content_pane_t

0x90ad,	// (0x000376c4) list_single_graphic_pane_cp01_ParamLimits

0x90ad,	// (0x000376c4) list_single_graphic_pane_cp01

0xe53d,	// (0x0003cb54) bg_popup_sub_pane_cp04

0x0972,	// (0x0002ef89) popup_mup_playback_window_g1

0x097e,	// (0x0002ef95) popup_mup_playback_window_t1

0x0993,	// (0x0002efaa) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0003db60) popup_mup_playback_window_t

0x09ca,	// (0x0002efe1) main_image_pane_g1_ParamLimits

0x09ca,	// (0x0002efe1) main_image_pane_g1

0x0a0d,	// (0x0002f024) scroll_pane_cp018_ParamLimits

0x0a0d,	// (0x0002f024) scroll_pane_cp018

0x0a25,	// (0x0002f03c) scroll_pane_cp016_ParamLimits

0x0a25,	// (0x0002f03c) scroll_pane_cp016

0x9146,	// (0x0003775d) smil2_image_pane_ParamLimits

0x9146,	// (0x0003775d) smil2_image_pane

0x9176,	// (0x0003778d) smil2_root_pane_ParamLimits

0x9176,	// (0x0003778d) smil2_root_pane

0x91a2,	// (0x000377b9) smil2_text_pane_ParamLimits

0x91a2,	// (0x000377b9) smil2_text_pane

0xe2e2,	// (0x0003c8f9) bg_list_pane_cp06

0x0a61,	// (0x0002f078) grid_radio_pane

0xe2e2,	// (0x0003c8f9) bg_popup_window_pane_cp06

0x0a69,	// (0x0002f080) main_fmradio_pane_t1

0xee81,	// (0x0003d498) heading_pane_cp04

0x0a77,	// (0x0002f08e) main_fmradio_pane_t2

0x1a3c,	// (0x00030053) popup_cale_lunar_info_window_g1

0x0a85,	// (0x0002f09c) main_fmradio_pane_t3

0x1a44,	// (0x0003005b) popup_cale_lunar_info_window_g2

0x0a93,	// (0x0002f0aa) main_fmradio_pane_t4

0x0001,

0x0aa1,	// (0x0002f0b8) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0003dc3b) popup_cale_lunar_info_window_g

0xf55e,	// (0x0003db75) main_fmradio_pane_t

0x0aaf,	// (0x0002f0c6) wait_bar_pane_cp03

0x0ab7,	// (0x0002f0ce) cell_fmradio_pane_ParamLimits

0x0ab7,	// (0x0002f0ce) cell_fmradio_pane

0x0910,	// (0x0002ef27) cell_fmradio_pane_g1_ParamLimits

0x0910,	// (0x0002ef27) cell_fmradio_pane_g1

0xe2e2,	// (0x0003c8f9) grid_highlight_pane_cp011

0x0aca,	// (0x0002f0e1) poc_content_pane_ParamLimits

0x0aca,	// (0x0002f0e1) poc_content_pane

0x0adc,	// (0x0002f0f3) scroll_pane_cp019

0x91e2,	// (0x000377f9) popup_call_poc_act_window_ParamLimits

0x91e2,	// (0x000377f9) popup_call_poc_act_window

0x91ef,	// (0x00037806) popup_call_poc_inact_window_ParamLimits

0x91ef,	// (0x00037806) popup_call_poc_inact_window

0xf5fb,	// (0x0003dc12) bg_popup_call_poc_act_pane_g

0x19b4,	// (0x0002ffcb) bg_popup_call_poc_inact_pane_g1

0x19bc,	// (0x0002ffd3) bg_popup_call_poc_inact_pane_g2

0x0ae4,	// (0x0002f0fb) popup_call_poc_act_window_g2

0x19c4,	// (0x0002ffdb) bg_popup_call_poc_inact_pane_g3

0x19cc,	// (0x0002ffe3) bg_popup_call_poc_inact_pane_g4

0x19d4,	// (0x0002ffeb) bg_popup_call_poc_inact_pane_g5

0x0aec,	// (0x0002f103) popup_call_poc_act_window_t1_ParamLimits

0x0aec,	// (0x0002f103) popup_call_poc_act_window_t1

0x0b14,	// (0x0002f12b) popup_call_poc_act_window_t2_ParamLimits

0x0b14,	// (0x0002f12b) popup_call_poc_act_window_t2

0x0b3c,	// (0x0002f153) popup_call_poc_act_window_t3_ParamLimits

0x0b3c,	// (0x0002f153) popup_call_poc_act_window_t3

0x0b64,	// (0x0002f17b) popup_call_poc_act_window_t4_ParamLimits

0x0b64,	// (0x0002f17b) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0003db80) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0003db80) popup_call_poc_act_window_t

0x19dc,	// (0x0002fff3) bg_popup_call_poc_inact_pane_g6

0x19e4,	// (0x0002fffb) bg_popup_call_poc_inact_pane_g7

0x19ec,	// (0x00030003) bg_popup_call_poc_inact_pane_g8

0x0b76,	// (0x0002f18d) popup_call_poc_inact_window_g2

0x19f4,	// (0x0003000b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0003dbff) bg_popup_call_poc_inact_pane_g

0x0b7e,	// (0x0002f195) popup_call_poc_inact_window_t1_ParamLimits

0x0b7e,	// (0x0002f195) popup_call_poc_inact_window_t1

0x0b93,	// (0x0002f1aa) popup_call_poc_inact_window_t2_ParamLimits

0x0b93,	// (0x0002f1aa) popup_call_poc_inact_window_t2

0x0ba8,	// (0x0002f1bf) popup_call_poc_inact_window_t3_ParamLimits

0x0ba8,	// (0x0002f1bf) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0003db89) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0003db89) popup_call_poc_inact_window_t

0x1bac,	// (0x000301c3) context_pane_ParamLimits

0x97df,	// (0x00037df6) signal_pane_ParamLimits

0xf0ed,	// (0x0003d704) main_call2_pane

0x1b9a,	// (0x000301b1) popup_phob_thumbnail2_window_ParamLimits

0x1b9a,	// (0x000301b1) popup_phob_thumbnail2_window

0x8eb0,	// (0x000374c7) aid_hotspot_pointer_arrow_pane

0x8eb8,	// (0x000374cf) aid_hotspot_pointer_hand_pane

0x9511,	// (0x00037b28) phob_pre_status_pane_g5

0x75c0,	// (0x00035bd7) cams_zoom_pane_ParamLimits

0x75cc,	// (0x00035be3) image_vga_pane_ParamLimits

0x75db,	// (0x00035bf2) main_camera_pane_g1_ParamLimits

0x75e9,	// (0x00035c00) main_camera_pane_g2_ParamLimits

0x75f5,	// (0x00035c0c) main_camera_pane_g3_ParamLimits

0x7601,	// (0x00035c18) main_camera_pane_g4_ParamLimits

0x760d,	// (0x00035c24) main_camera_pane_g5_ParamLimits

0x7619,	// (0x00035c30) main_camera_pane_g6_ParamLimits

0x7625,	// (0x00035c3c) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0003d888) main_camera_pane_g_ParamLimits

0x7631,	// (0x00035c48) main_camera_pane_t1_ParamLimits

0x7643,	// (0x00035c5a) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0003d899) main_camera_pane_t_ParamLimits

0xe53d,	// (0x0003cb54) bg_popup_preview_window_pane_cp01_ParamLimits

0xe53d,	// (0x0003cb54) bg_popup_preview_window_pane_cp01

0x0bbd,	// (0x0002f1d4) popup_phob_thumbnail2_window_g1_ParamLimits

0x0bbd,	// (0x0002f1d4) popup_phob_thumbnail2_window_g1

0xe2e2,	// (0x0003c8f9) call2_cli_visual_pane

0x920b,	// (0x00037822) popup_call2_audio_conf_window_ParamLimits

0x920b,	// (0x00037822) popup_call2_audio_conf_window

0x9220,	// (0x00037837) popup_call2_audio_first_window_ParamLimits

0x9220,	// (0x00037837) popup_call2_audio_first_window

0x92be,	// (0x000378d5) popup_call2_audio_in_window_ParamLimits

0x92be,	// (0x000378d5) popup_call2_audio_in_window

0x9300,	// (0x00037917) popup_call2_audio_out_window_ParamLimits

0x9300,	// (0x00037917) popup_call2_audio_out_window

0x9362,	// (0x00037979) popup_call2_audio_second_window_ParamLimits

0x9362,	// (0x00037979) popup_call2_audio_second_window

0x93c0,	// (0x000379d7) popup_call2_audio_wait_window_ParamLimits

0x93c0,	// (0x000379d7) popup_call2_audio_wait_window

0xe2e2,	// (0x0003c8f9) bg_popup_call2_act_pane_cp03

0xe51f,	// (0x0003cb36) list_conf_pane_cp

0x0bc9,	// (0x0002f1e0) popup_call2_audio_conf_window_t1

0xeede,	// (0x0003d4f5) list_single_graphic_popup_conf2_pane_ParamLimits

0xeede,	// (0x0003d4f5) list_single_graphic_popup_conf2_pane

0xeef1,	// (0x0003d508) list_highlight_pane_cp04

0x0bd7,	// (0x0002f1ee) list_single_graphic_popup_conf2_pane_g1

0xef02,	// (0x0003d519) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0003db90) list_single_graphic_popup_conf2_pane_g

0x0be1,	// (0x0002f1f8) list_single_graphic_popup_conf2_pane_t1

0x0bef,	// (0x0002f206) bg_popup_call2_act_pane_cp01_ParamLimits

0x0bef,	// (0x0002f206) bg_popup_call2_act_pane_cp01

0x0c79,	// (0x0002f290) call_type_pane_cp05_ParamLimits

0x0c79,	// (0x0002f290) call_type_pane_cp05

0x0ccd,	// (0x0002f2e4) popup_call2_audio_second_window_g1_ParamLimits

0x0ccd,	// (0x0002f2e4) popup_call2_audio_second_window_g1

0x0d21,	// (0x0002f338) popup_call2_audio_second_window_g2_ParamLimits

0x0d21,	// (0x0002f338) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0003db95) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0003db95) popup_call2_audio_second_window_g

0x0d86,	// (0x0002f39d) popup_call2_audio_second_window_t1_ParamLimits

0x0d86,	// (0x0002f39d) popup_call2_audio_second_window_t1

0x0e41,	// (0x0002f458) popup_call2_audio_second_window_t2_ParamLimits

0x0e41,	// (0x0002f458) popup_call2_audio_second_window_t2

0x0e94,	// (0x0002f4ab) popup_call2_audio_second_window_t3_ParamLimits

0x0e94,	// (0x0002f4ab) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0003db9c) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0003db9c) popup_call2_audio_second_window_t

0xe2e2,	// (0x0003c8f9) bg_popup_call2_in_pane_cp02

0xe2ec,	// (0x0003c903) call_type_pane_cp04

0xe2f4,	// (0x0003c90b) popup_call2_audio_wait_window_g1

0xe2fc,	// (0x0003c913) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0003d775) popup_call2_audio_wait_window_g

0xe304,	// (0x0003c91b) popup_call2_audio_wait_window_t3

0x0f87,	// (0x0002f59e) bg_popup_call2_act_pane_ParamLimits

0x0f87,	// (0x0002f59e) bg_popup_call2_act_pane

0x1047,	// (0x0002f65e) call_type_pane_cp03_ParamLimits

0x1047,	// (0x0002f65e) call_type_pane_cp03

0x10ab,	// (0x0002f6c2) popup_call2_audio_first_window_g1_ParamLimits

0x10ab,	// (0x0002f6c2) popup_call2_audio_first_window_g1

0x111b,	// (0x0002f732) popup_call2_audio_first_window_g2_ParamLimits

0x111b,	// (0x0002f732) popup_call2_audio_first_window_g2

0x077f,	// (0x0002ed96) popup_call2_audio_first_window_g3_ParamLimits

0x077f,	// (0x0002ed96) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0003dba5) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0003dba5) popup_call2_audio_first_window_g

0x11f9,	// (0x0002f810) popup_call2_audio_first_window_t1_ParamLimits

0x11f9,	// (0x0002f810) popup_call2_audio_first_window_t1

0x12fc,	// (0x0002f913) popup_call2_audio_first_window_t4_ParamLimits

0x12fc,	// (0x0002f913) popup_call2_audio_first_window_t4

0x13df,	// (0x0002f9f6) popup_call2_audio_first_window_t5_ParamLimits

0x13df,	// (0x0002f9f6) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0003dbb0) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0003dbb0) popup_call2_audio_first_window_t

0xe535,	// (0x0003cb4c) bg_popup_call2_act_pane_g1

0x1a4c,	// (0x00030063) popup_cale_lunar_info_window_t1

0x1a5a,	// (0x00030071) popup_cale_lunar_info_window_t2

0x1a68,	// (0x0003007f) popup_cale_lunar_info_window_t3

0xe2e2,	// (0x0003c8f9) bg_popup_call2_bubble_pane

0x14e0,	// (0x0002faf7) bg_popup_call2_in_pane_cp01_ParamLimits

0x14e0,	// (0x0002faf7) bg_popup_call2_in_pane_cp01

0xdfbe,	// (0x0003c5d5) call_type_pane_cp02

0x1528,	// (0x0002fb3f) popup_call2_audio_out_window_g1_ParamLimits

0x1528,	// (0x0002fb3f) popup_call2_audio_out_window_g1

0x1554,	// (0x0002fb6b) popup_call2_audio_out_window_g2_ParamLimits

0x1554,	// (0x0002fb6b) popup_call2_audio_out_window_g2

0x157c,	// (0x0002fb93) popup_call2_audio_out_window_g3_ParamLimits

0x157c,	// (0x0002fb93) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0003dbb9) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0003dbb9) popup_call2_audio_out_window_g

0x15b7,	// (0x0002fbce) popup_call2_audio_out_window_t1_ParamLimits

0x15b7,	// (0x0002fbce) popup_call2_audio_out_window_t1

0x1616,	// (0x0002fc2d) popup_call2_audio_out_window_t2_ParamLimits

0x1616,	// (0x0002fc2d) popup_call2_audio_out_window_t2

0x166a,	// (0x0002fc81) popup_call2_audio_out_window_t3_ParamLimits

0x166a,	// (0x0002fc81) popup_call2_audio_out_window_t3

0x1680,	// (0x0002fc97) popup_call2_audio_out_window_t4_ParamLimits

0x1680,	// (0x0002fc97) popup_call2_audio_out_window_t4

0x1696,	// (0x0002fcad) popup_call2_audio_out_window_t5_ParamLimits

0x1696,	// (0x0002fcad) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0003dbc2) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0003dbc2) popup_call2_audio_out_window_t

0x16fa,	// (0x0002fd11) bg_popup_call2_in_pane_ParamLimits

0x16fa,	// (0x0002fd11) bg_popup_call2_in_pane

0x1756,	// (0x0002fd6d) popup_call2_audio_in_window_g1_ParamLimits

0x1756,	// (0x0002fd6d) popup_call2_audio_in_window_g1

0x178e,	// (0x0002fda5) popup_call2_audio_in_window_g2_ParamLimits

0x178e,	// (0x0002fda5) popup_call2_audio_in_window_g2

0x17c6,	// (0x0002fddd) popup_call2_audio_in_window_g3_ParamLimits

0x17c6,	// (0x0002fddd) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0003dbcf) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0003dbcf) popup_call2_audio_in_window_g

0x181e,	// (0x0002fe35) popup_call2_audio_in_window_t1_ParamLimits

0x181e,	// (0x0002fe35) popup_call2_audio_in_window_t1

0x189e,	// (0x0002feb5) popup_call2_audio_in_window_t2_ParamLimits

0x189e,	// (0x0002feb5) popup_call2_audio_in_window_t2

0x191e,	// (0x0002ff35) popup_call2_audio_in_window_t3_ParamLimits

0x191e,	// (0x0002ff35) popup_call2_audio_in_window_t3

0x1938,	// (0x0002ff4f) popup_call2_audio_in_window_t4_ParamLimits

0x1938,	// (0x0002ff4f) popup_call2_audio_in_window_t4

0x194a,	// (0x0002ff61) popup_call2_audio_in_window_t5_ParamLimits

0x194a,	// (0x0002ff61) popup_call2_audio_in_window_t5

0x195f,	// (0x0002ff76) popup_call2_audio_in_window_t6_ParamLimits

0x195f,	// (0x0002ff76) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0003dbd8) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0003dbd8) popup_call2_audio_in_window_t

0xe535,	// (0x0003cb4c) bg_popup_call2_in_pane_g1

0x1a76,	// (0x0003008d) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0003dc40) popup_cale_lunar_info_window_t

0xe53d,	// (0x0003cb54) bg_popup_call2_rect_pane_ParamLimits

0xe53d,	// (0x0003cb54) bg_popup_call2_rect_pane

0xe2e2,	// (0x0003c8f9) call2_cli_visual_graphic_pane

0xe2e2,	// (0x0003c8f9) call2_cli_visual_text_pane

0x9885,	// (0x00037e9c) smil_status_volume_pane_g3

0x0002,

0xe669,	// (0x0003cc80) call2_cli_visual_graphic_pane_g1

0xe669,	// (0x0003cc80) call2_cli_visual_graphic_pane_g2

0xe669,	// (0x0003cc80) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0003dbe5) call2_cli_visual_graphic_pane_g

0x1974,	// (0x0002ff8b) bg_popup_call2_rect_pane_g1

0xe6f5,	// (0x0003cd0c) bg_popup_call2_rect_pane_g2

0x197c,	// (0x0002ff93) bg_popup_call2_rect_pane_g3

0x1984,	// (0x0002ff9b) bg_popup_call2_rect_pane_g4

0x198c,	// (0x0002ffa3) bg_popup_call2_rect_pane_g5

0x1994,	// (0x0002ffab) bg_popup_call2_rect_pane_g6

0x199c,	// (0x0002ffb3) bg_popup_call2_rect_pane_g7

0x19a4,	// (0x0002ffbb) bg_popup_call2_rect_pane_g8

0x19ac,	// (0x0002ffc3) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0003dbec) bg_popup_call2_rect_pane_g

0x19b4,	// (0x0002ffcb) bg_popup_call2_bubble_pane_g1

0x19bc,	// (0x0002ffd3) bg_popup_call2_bubble_pane_g2

0x19c4,	// (0x0002ffdb) bg_popup_call2_bubble_pane_g3

0x19cc,	// (0x0002ffe3) bg_popup_call2_bubble_pane_g4

0x19d4,	// (0x0002ffeb) bg_popup_call2_bubble_pane_g5

0x19dc,	// (0x0002fff3) bg_popup_call2_bubble_pane_g6

0x19e4,	// (0x0002fffb) bg_popup_call2_bubble_pane_g7

0x19ec,	// (0x00030003) bg_popup_call2_bubble_pane_g8

0x19f4,	// (0x0003000b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0003dbff) bg_popup_call2_bubble_pane_g

0x70fd,	// (0x00035714) aid_cale_week_size_cell_pane

0x7655,	// (0x00035c6c) aid_cams_cif_uncrop_pane_ParamLimits

0x7655,	// (0x00035c6c) aid_cams_cif_uncrop_pane

0x77b2,	// (0x00035dc9) aid_cams_size_cell_ParamLimits

0x77b2,	// (0x00035dc9) aid_cams_size_cell

0x77be,	// (0x00035dd5) grid_cams_pane_ParamLimits

0x77cc,	// (0x00035de3) linegrid_cams_pane_ParamLimits

0x7868,	// (0x00035e7f) call_video_pane_t1

0x7882,	// (0x00035e99) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0003d8ec) call_video_pane_t

0x7d3a,	// (0x00036351) aid_cale_month_size_cell_pane_ParamLimits

0x7d3a,	// (0x00036351) aid_cale_month_size_cell_pane

0xf672,	// (0x0003dc89) smil_status_volume_pane_g

0x9892,	// (0x00037ea9) volume_smil_pane_ParamLimits

0xde79,	// (0x0003c490) aid_popup2_width_pane

0x7008,	// (0x0003561f) cell_qdial_pane_g4_ParamLimits

0x7008,	// (0x0003561f) cell_qdial_pane_g4

0x8875,	// (0x00036e8c) aid_blid_cardinal_pane_ParamLimits

0x8885,	// (0x00036e9c) aid_blid_destination_pane_ParamLimits

0x8885,	// (0x00036e9c) aid_blid_destination_pane

0xe53d,	// (0x0003cb54) bg_popup_call_poc_act_pane_ParamLimits

0xe53d,	// (0x0003cb54) bg_popup_call_poc_act_pane

0xe53d,	// (0x0003cb54) bg_popup_call_poc_inact_pane_ParamLimits

0xe53d,	// (0x0003cb54) bg_popup_call_poc_inact_pane

0x19fc,	// (0x00030013) bg_popup_call_poc_act_pane_g1

0x1a04,	// (0x0003001b) bg_popup_call_poc_act_pane_g2

0x1a0c,	// (0x00030023) bg_popup_call_poc_act_pane_g3

0x19cc,	// (0x0002ffe3) bg_popup_call_poc_act_pane_g4

0x19d4,	// (0x0002ffeb) bg_popup_call_poc_act_pane_g5

0x1a14,	// (0x0003002b) bg_popup_call_poc_act_pane_g6

0x19e4,	// (0x0002fffb) bg_popup_call_poc_act_pane_g7

0x1a1c,	// (0x00030033) bg_popup_call_poc_act_pane_g8

0xe2e2,	// (0x0003c8f9) main_usb_pane

0x1b75,	// (0x0003018c) popup_cale_lunar_info_window

0x7b2e,	// (0x00036145) im_reading_pane_t1_ParamLimits

0xe8b8,	// (0x0003cecf) list_im_pane_ParamLimits

0xe8c9,	// (0x0003cee0) scroll_pane_cp07_ParamLimits

0xe2e2,	// (0x0003c8f9) grid_highlight_pane_cp012

0xe53d,	// (0x0003cb54) mup_scale_pane_ParamLimits

0x077f,	// (0x0002ed96) main_usb_pane_g1_ParamLimits

0x077f,	// (0x0002ed96) main_usb_pane_g1

0x9434,	// (0x00037a4b) main_usb_pane_g2_ParamLimits

0x9434,	// (0x00037a4b) main_usb_pane_g2

0x0001,

0xf612,	// (0x0003dc29) main_usb_pane_g_ParamLimits

0xf612,	// (0x0003dc29) main_usb_pane_g

0x9440,	// (0x00037a57) main_usb_pane_t1_ParamLimits

0x9440,	// (0x00037a57) main_usb_pane_t1

0x9452,	// (0x00037a69) main_usb_pane_t2_ParamLimits

0x9452,	// (0x00037a69) main_usb_pane_t2

0x9464,	// (0x00037a7b) main_usb_pane_t3_ParamLimits

0x9464,	// (0x00037a7b) main_usb_pane_t3

0x9476,	// (0x00037a8d) main_usb_pane_t4_ParamLimits

0x9476,	// (0x00037a8d) main_usb_pane_t4

0x9488,	// (0x00037a9f) main_usb_pane_t5_ParamLimits

0x9488,	// (0x00037a9f) main_usb_pane_t5

0x949a,	// (0x00037ab1) main_usb_pane_t6_ParamLimits

0x949a,	// (0x00037ab1) main_usb_pane_t6

0x0005,

0xf617,	// (0x0003dc2e) main_usb_pane_t_ParamLimits

0x881b,	// (0x00036e32) aid_text_placing

0x8827,	// (0x00036e3e) main_location2_pane_t1_ParamLimits

0x883b,	// (0x00036e52) main_location2_pane_t2_ParamLimits

0x884f,	// (0x00036e66) main_location2_pane_t3_ParamLimits

0x8863,	// (0x00036e7a) main_location2_pane_t4_ParamLimits

0x8863,	// (0x00036e7a) main_location2_pane_t4

0xf436,	// (0x0003da4d) main_location2_pane_t_ParamLimits

0xe579,	// (0x0003cb90) find_pinb_pane_g2_ParamLimits

0xe579,	// (0x0003cb90) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0003d79b) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0003d79b) find_pinb_pane_g

0xe585,	// (0x0003cb9c) find_pinb_pane_t1_ParamLimits

0xe597,	// (0x0003cbae) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0003d7a0) find_pinb_pane_t_ParamLimits

0xe2e2,	// (0x0003c8f9) main_call3_pane

0x8086,	// (0x0003669d) cale_month_day_heading_pane_t1_ParamLimits

0x80e4,	// (0x000366fb) cale_month_day_heading_pane_t2_ParamLimits

0x8149,	// (0x00036760) cale_month_day_heading_pane_t3_ParamLimits

0x81ae,	// (0x000367c5) cale_month_day_heading_pane_t4_ParamLimits

0x8213,	// (0x0003682a) cale_month_day_heading_pane_t5_ParamLimits

0x8278,	// (0x0003688f) cale_month_day_heading_pane_t6_ParamLimits

0x82dd,	// (0x000368f4) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0003d924) cale_month_day_heading_pane_t_ParamLimits

0xeb09,	// (0x0003d120) smil_status_volume_pane

0x8ff8,	// (0x0003760f) postcard_address_pane_ParamLimits

0x8ff8,	// (0x0003760f) postcard_address_pane

0x9004,	// (0x0003761b) postcard_message_pane_ParamLimits

0x9004,	// (0x0003761b) postcard_message_pane

0x93ff,	// (0x00037a16) call2_cli_visual_pane_t1_ParamLimits

0x93ff,	// (0x00037a16) call2_cli_visual_pane_t1

0x99e9,	// (0x00038000) postcard_message_pane_t1_ParamLimits

0x99e9,	// (0x00038000) postcard_message_pane_t1

0x99d2,	// (0x00037fe9) postcard_address_pane_t1_ParamLimits

0x99d2,	// (0x00037fe9) postcard_address_pane_t1

0x99c3,	// (0x00037fda) popup_call3_audio_in_window_ParamLimits

0x99c3,	// (0x00037fda) popup_call3_audio_in_window

0x98a7,	// (0x00037ebe) bg_popup_call3_in_pane_ParamLimits

0x98a7,	// (0x00037ebe) bg_popup_call3_in_pane

0x9909,	// (0x00037f20) popup_call3_audio_in_window_g1_ParamLimits

0x9909,	// (0x00037f20) popup_call3_audio_in_window_g1

0x9921,	// (0x00037f38) popup_call3_audio_in_window_g2_ParamLimits

0x9921,	// (0x00037f38) popup_call3_audio_in_window_g2

0x9939,	// (0x00037f50) popup_call3_audio_in_window_g3_ParamLimits

0x9939,	// (0x00037f50) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0003dc90) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0003dc90) popup_call3_audio_in_window_g

0x9961,	// (0x00037f78) popup_call3_audio_in_window_t1_ParamLimits

0x9961,	// (0x00037f78) popup_call3_audio_in_window_t1

0x9989,	// (0x00037fa0) popup_call3_audio_in_window_t2_ParamLimits

0x9989,	// (0x00037fa0) popup_call3_audio_in_window_t2

0x99b1,	// (0x00037fc8) popup_call3_audio_in_window_t3_ParamLimits

0x99b1,	// (0x00037fc8) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0003dc99) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0003dc99) popup_call3_audio_in_window_t

0xf0ed,	// (0x0003d704) bg_popup_call3_rect_pane

0x1974,	// (0x0002ff8b) bg_popup_call3_rect_pane_g1

0xe6f5,	// (0x0003cd0c) bg_popup_call3_rect_pane_g2

0x197c,	// (0x0002ff93) bg_popup_call3_rect_pane_g3

0x1984,	// (0x0002ff9b) bg_popup_call3_rect_pane_g4

0x198c,	// (0x0002ffa3) bg_popup_call3_rect_pane_g5

0x1994,	// (0x0002ffab) bg_popup_call3_rect_pane_g6

0x199c,	// (0x0002ffb3) bg_popup_call3_rect_pane_g7

0x8c75,	// (0x0003728c) mup_visualizer_osc_pane

0x078d,	// (0x0002eda4) mup_visualizer_spec_pane

0x98c7,	// (0x00037ede) call3_video_qcif_pane_ParamLimits

0x98c7,	// (0x00037ede) call3_video_qcif_pane

0x98d9,	// (0x00037ef0) call3_video_qcif_uncrop_pane_ParamLimits

0x98d9,	// (0x00037ef0) call3_video_qcif_uncrop_pane

0x98e7,	// (0x00037efe) call3_video_subqcif_pane_ParamLimits

0x98e7,	// (0x00037efe) call3_video_subqcif_pane

0x98f9,	// (0x00037f10) call3_video_subqcif_uncrop_pane_ParamLimits

0x98f9,	// (0x00037f10) call3_video_subqcif_uncrop_pane

0x9951,	// (0x00037f68) popup_call3_audio_in_window_g4_ParamLimits

0x9951,	// (0x00037f68) popup_call3_audio_in_window_g4

0x9874,	// (0x00037e8b) mup_spec_half_pane

0x987d,	// (0x00037e94) mup_spec_half_pane_cp

0x1c0c,	// (0x00030223) mup_osc_middle_pane

0x1c15,	// (0x0003022c) mup_visualizer_osc_pane_g1

0x9855,	// (0x00037e6c) mup_spec_bar_pane_ParamLimits

0x9855,	// (0x00037e6c) mup_spec_bar_pane

0x1bf9,	// (0x00030210) mup_spec_bar_pane_g1

0x1c03,	// (0x0003021a) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0003dc84) mup_spec_bar_pane_g

0x70fd,	// (0x00035714) aid_cale_week_size_cell_pane_ParamLimits

0x7110,	// (0x00035727) bg_cale_heading_pane_ParamLimits

0xe729,	// (0x0003cd40) bg_cale_pane_cp01_ParamLimits

0x7124,	// (0x0003573b) cale_week_corner_pane_ParamLimits

0x713a,	// (0x00035751) cale_week_day_heading_pane_ParamLimits

0x714e,	// (0x00035765) cale_week_scroll_pane_g1_ParamLimits

0x715f,	// (0x00035776) cale_week_scroll_pane_g2_ParamLimits

0x7170,	// (0x00035787) cale_week_scroll_pane_g3_ParamLimits

0x7181,	// (0x00035798) cale_week_scroll_pane_g4_ParamLimits

0x7192,	// (0x000357a9) cale_week_scroll_pane_g5_ParamLimits

0x71a3,	// (0x000357ba) cale_week_scroll_pane_g6_ParamLimits

0x71b4,	// (0x000357cb) cale_week_scroll_pane_g7_ParamLimits

0x71c7,	// (0x000357de) cale_week_scroll_pane_g8_ParamLimits

0x71da,	// (0x000357f1) cale_week_scroll_pane_g9_ParamLimits

0x71eb,	// (0x00035802) cale_week_scroll_pane_g10_ParamLimits

0x71fc,	// (0x00035813) cale_week_scroll_pane_g11_ParamLimits

0x720d,	// (0x00035824) cale_week_scroll_pane_g12_ParamLimits

0x721e,	// (0x00035835) cale_week_scroll_pane_g13_ParamLimits

0x722f,	// (0x00035846) cale_week_scroll_pane_g14_ParamLimits

0x7240,	// (0x00035857) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0003d82c) cale_week_scroll_pane_g_ParamLimits

0x7251,	// (0x00035868) cale_week_time_pane_ParamLimits

0x7264,	// (0x0003587b) grid_cale_week_pane_ParamLimits

0xe742,	// (0x0003cd59) listscroll_cale_week_pane_t1

0x7279,	// (0x00035890) scroll_pane_cp08_ParamLimits

0x7d7b,	// (0x00036392) cale_month_corner_pane_ParamLimits

0xeadf,	// (0x0003d0f6) cale_month_pane_t1

0x8045,	// (0x0003665c) cale_month_week_pane_ParamLimits

0x077f,	// (0x0002ed96) popup_call_status_window_g1_ParamLimits

0x864a,	// (0x00036c61) popup_call_status_window_g2_ParamLimits

0x8656,	// (0x00036c6d) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0003d9d4) popup_call_status_window_g_ParamLimits

0xee71,	// (0x0003d488) aid_call2_pane

0x5b03,	// (0x0003411a) msg_header_pane_g1

0x8ff8,	// (0x0003760f) postcard_address2_pane_ParamLimits

0x8ff8,	// (0x0003760f) postcard_address2_pane

0x9004,	// (0x0003761b) postcard_message2_pane_ParamLimits

0x9004,	// (0x0003761b) postcard_message2_pane

0x97ed,	// (0x00037e04) message2_row_pane_ParamLimits

0x97ed,	// (0x00037e04) message2_row_pane

0x9808,	// (0x00037e1f) address2_row_pane_ParamLimits

0x9808,	// (0x00037e1f) address2_row_pane

0x1bc7,	// (0x000301de) postcard_message2_row_pane_g1

0x1bcf,	// (0x000301e6) postcard_message2_row_pane_t1

0x1bc7,	// (0x000301de) address2_row_pane_g1

0x1bcf,	// (0x000301e6) address2_row_pane_t1

0x7521,	// (0x00035b38) aid_size_cell_vorec

0xe2e2,	// (0x0003c8f9) main_rss_pane

0x981b,	// (0x00037e32) rss_list_single_pane_ParamLimits

0x981b,	// (0x00037e32) rss_list_single_pane

0x1bdd,	// (0x000301f4) rss_list_single_pane_t1

0x1beb,	// (0x00030202) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0003dc7f) rss_list_single_pane_t

0xe2e2,	// (0x0003c8f9) main_camera2_pane

0xe2e2,	// (0x0003c8f9) main_video2_pane

0x9a4d,	// (0x00038064) cams_zoom_pane_cp2_ParamLimits

0x9a4d,	// (0x00038064) cams_zoom_pane_cp2

0x9a59,	// (0x00038070) image2_vga_pane_ParamLimits

0x9a59,	// (0x00038070) image2_vga_pane

0x9a68,	// (0x0003807f) main_camera2_pane_g1_ParamLimits

0x9a68,	// (0x0003807f) main_camera2_pane_g1

0x9a74,	// (0x0003808b) main_camera2_pane_g2_ParamLimits

0x9a74,	// (0x0003808b) main_camera2_pane_g2

0x9a80,	// (0x00038097) main_camera2_pane_g3_ParamLimits

0x9a80,	// (0x00038097) main_camera2_pane_g3

0x9a8c,	// (0x000380a3) main_camera2_pane_g4_ParamLimits

0x9a8c,	// (0x000380a3) main_camera2_pane_g4

0x9a98,	// (0x000380af) main_camera2_pane_g5_ParamLimits

0x9a98,	// (0x000380af) main_camera2_pane_g5

0x9aa4,	// (0x000380bb) main_camera2_pane_g6_ParamLimits

0x9aa4,	// (0x000380bb) main_camera2_pane_g6

0x9ab0,	// (0x000380c7) main_camera2_pane_g7_ParamLimits

0x9ab0,	// (0x000380c7) main_camera2_pane_g7

0x9abc,	// (0x000380d3) main_camera2_pane_g8_ParamLimits

0x9abc,	// (0x000380d3) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0003dca0) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0003dca0) main_camera2_pane_g

0x9ad4,	// (0x000380eb) main_camera2_pane_t1_ParamLimits

0x9ad4,	// (0x000380eb) main_camera2_pane_t1

0x9ae6,	// (0x000380fd) main_camera2_pane_t2_ParamLimits

0x9ae6,	// (0x000380fd) main_camera2_pane_t2

0x9af8,	// (0x0003810f) main_camera2_pane_t3_ParamLimits

0x9af8,	// (0x0003810f) main_camera2_pane_t3

0x9b0a,	// (0x00038121) main_camera2_pane_t4_ParamLimits

0x9b0a,	// (0x00038121) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0003dcb3) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0003dcb3) main_camera2_pane_t

0x9b6c,	// (0x00038183) cams_zoom_pane_cp4_ParamLimits

0x9b6c,	// (0x00038183) cams_zoom_pane_cp4

0x9b7c,	// (0x00038193) image2_cif_pane_ParamLimits

0x9b7c,	// (0x00038193) image2_cif_pane

0x9b91,	// (0x000381a8) image2_subqcif_pane_ParamLimits

0x9b91,	// (0x000381a8) image2_subqcif_pane

0x9ba0,	// (0x000381b7) main_video2_pane_g1_ParamLimits

0x9ba0,	// (0x000381b7) main_video2_pane_g1

0x9bb2,	// (0x000381c9) main_video2_pane_g2_ParamLimits

0x9bb2,	// (0x000381c9) main_video2_pane_g2

0x9bc2,	// (0x000381d9) main_video2_pane_g3_ParamLimits

0x9bc2,	// (0x000381d9) main_video2_pane_g3

0x9bd2,	// (0x000381e9) main_video2_pane_g4_ParamLimits

0x9bd2,	// (0x000381e9) main_video2_pane_g4

0x9be2,	// (0x000381f9) main_video2_pane_g5_ParamLimits

0x9be2,	// (0x000381f9) main_video2_pane_g5

0x9bf2,	// (0x00038209) main_video2_pane_g6_ParamLimits

0x9bf2,	// (0x00038209) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0003dcc2) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0003dcc2) main_video2_pane_g

0x9c04,	// (0x0003821b) main_video2_pane_t1_ParamLimits

0x9c04,	// (0x0003821b) main_video2_pane_t1

0x9c1e,	// (0x00038235) main_video2_pane_t2_ParamLimits

0x9c1e,	// (0x00038235) main_video2_pane_t2

0x9c44,	// (0x0003825b) main_video2_pane_t3_ParamLimits

0x9c44,	// (0x0003825b) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0003dccf) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0003dccf) main_video2_pane_t

0x9551,	// (0x00037b68) call_muted_g2

0x0001,

0xf65a,	// (0x0003dc71) call_muted_g

0xe2e2,	// (0x0003c8f9) main_mup2_pane

0x1ccc,	// (0x000302e3) main_mup2_pane_g1_ParamLimits

0x1ccc,	// (0x000302e3) main_mup2_pane_g1

0x9c6a,	// (0x00038281) main_mup2_pane_g2_ParamLimits

0x9c6a,	// (0x00038281) main_mup2_pane_g2

0x9eec,	// (0x00038503) main_mup_pane_g13_cp1

0x9ef4,	// (0x0003850b) mup_volume_pane_cp1

0x9c8a,	// (0x000382a1) main_mup2_pane_g4_ParamLimits

0x9c8a,	// (0x000382a1) main_mup2_pane_g4

0x9c9f,	// (0x000382b6) main_mup2_pane_g5_ParamLimits

0x9c9f,	// (0x000382b6) main_mup2_pane_g5

0x9cb4,	// (0x000382cb) main_mup2_pane_g6_ParamLimits

0x9cb4,	// (0x000382cb) main_mup2_pane_g6

0x9cc9,	// (0x000382e0) main_mup2_pane_g7_ParamLimits

0x9cc9,	// (0x000382e0) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0003dcd6) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0003dcd6) main_mup2_pane_g

0x9ce5,	// (0x000382fc) main_mup2_pane_t1_ParamLimits

0x9ce5,	// (0x000382fc) main_mup2_pane_t1

0x9cfc,	// (0x00038313) main_mup2_pane_t2_ParamLimits

0x9cfc,	// (0x00038313) main_mup2_pane_t2

0x9d13,	// (0x0003832a) main_mup2_pane_t3_ParamLimits

0x9d13,	// (0x0003832a) main_mup2_pane_t3

0x9d2a,	// (0x00038341) main_mup2_pane_t4_ParamLimits

0x9d2a,	// (0x00038341) main_mup2_pane_t4

0x9d44,	// (0x0003835b) main_mup2_pane_t5_ParamLimits

0x9d44,	// (0x0003835b) main_mup2_pane_t5

0x9d5e,	// (0x00038375) main_mup2_pane_t6_ParamLimits

0x9d5e,	// (0x00038375) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0003dce5) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0003dce5) main_mup2_pane_t

0x9d96,	// (0x000383ad) mup2_visualizer_pane_ParamLimits

0x9d96,	// (0x000383ad) mup2_visualizer_pane

0x9dcc,	// (0x000383e3) mup_progress_pane_cp_ParamLimits

0x9dcc,	// (0x000383e3) mup_progress_pane_cp

0x9ed7,	// (0x000384ee) mup_volume_pane_cp_ParamLimits

0x9ed7,	// (0x000384ee) mup_volume_pane_cp

0x9de3,	// (0x000383fa) mup2_visualizer_pane_g1_ParamLimits

0x9de3,	// (0x000383fa) mup2_visualizer_pane_g1

0x1c9e,	// (0x000302b5) mup2_visualizer_pane_g2_ParamLimits

0x1c9e,	// (0x000302b5) mup2_visualizer_pane_g2

0x9df8,	// (0x0003840f) mup2_visualizer_pane_g3_ParamLimits

0x9df8,	// (0x0003840f) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0003dcf2) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0003dcf2) mup2_visualizer_pane_g

0x0a59,	// (0x0002f070) aid_size_cell_fmradio

0x9667,	// (0x00037c7e) aid_height_parent_landcape

0xe947,	// (0x0003cf5e) wml_content_pane_cp

0xe94f,	// (0x0003cf66) wml_tabs_pane

0xe958,	// (0x0003cf6f) popup_wml_miniature_window

0xe960,	// (0x0003cf77) scroll_pane_cp021

0xe974,	// (0x0003cf8b) wml_content_pane_comp8

0xe2e2,	// (0x0003c8f9) bg_popup_sub_pane_cp05

0x1cbc,	// (0x000302d3) popup_wml_miniature_window_g1

0x1cc4,	// (0x000302db) wml_miniature_view_pane

0x9e06,	// (0x0003841d) aid_size_wml_view

0x9e0e,	// (0x00038425) wml_miniature_view_pane_g1

0x9e17,	// (0x0003842e) wml_miniature_view_pane_g2

0x9e20,	// (0x00038437) wml_miniature_view_pane_g3

0x9e28,	// (0x0003843f) wml_miniature_view_pane_g4

0x9e30,	// (0x00038447) wml_miniature_view_pane_g5

0x9e38,	// (0x0003844f) wml_miniature_view_pane_g6

0x9e40,	// (0x00038457) wml_miniature_view_pane_g7

0x9e48,	// (0x0003845f) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0003dcf9) wml_miniature_view_pane_g

0x1ccc,	// (0x000302e3) background_graphic_ParamLimits

0x1ccc,	// (0x000302e3) background_graphic

0x1cd8,	// (0x000302ef) wml_tabs_2_pane

0x1ce1,	// (0x000302f8) wml_tabs_3_pane_ParamLimits

0x1ce1,	// (0x000302f8) wml_tabs_3_pane

0x1cf3,	// (0x0003030a) wml_tabs_4_pane_ParamLimits

0x1cf3,	// (0x0003030a) wml_tabs_4_pane

0x1d09,	// (0x00030320) wml_tabs_5_pane_ParamLimits

0x1d09,	// (0x00030320) wml_tabs_5_pane

0x1d23,	// (0x0003033a) wml_tabs_pane_g2_ParamLimits

0x1d23,	// (0x0003033a) wml_tabs_pane_g2

0x1d37,	// (0x0003034e) wml_tabs_pane_g3_ParamLimits

0x1d37,	// (0x0003034e) wml_tabs_pane_g3

0x9e50,	// (0x00038467) wml_tabs_2_active_pane_ParamLimits

0x9e50,	// (0x00038467) wml_tabs_2_active_pane

0x9e60,	// (0x00038477) wml_tabs_2_passive_pane_ParamLimits

0x9e60,	// (0x00038477) wml_tabs_2_passive_pane

0x9e70,	// (0x00038487) wml_tabs_3_active_pane_cp_ParamLimits

0x9e70,	// (0x00038487) wml_tabs_3_active_pane_cp

0x9e81,	// (0x00038498) wml_tabs_3_passive_pane_ParamLimits

0x9e81,	// (0x00038498) wml_tabs_3_passive_pane

0x9e92,	// (0x000384a9) wml_tabs_3_passive_pane_cp_ParamLimits

0x9e92,	// (0x000384a9) wml_tabs_3_passive_pane_cp

0x9ea3,	// (0x000384ba) tabs_4_active_pane

0x9eab,	// (0x000384c2) tabs_4_passive_pane

0x9eb3,	// (0x000384ca) tabs_4_passive_pane_cp

0x9ebb,	// (0x000384d2) tabs_4_passive_pane_cp2

0x942c,	// (0x00037a43) aid_height_text

0x8c42,	// (0x00037259) mup_volume_cont_pane_ParamLimits

0x8c42,	// (0x00037259) mup_volume_cont_pane

0x6c5f,	// (0x00035276) aid_size_cell_pinb

0x6c69,	// (0x00035280) aid_size_list_pinb

0x9db5,	// (0x000383cc) mup2_volume_cont_pane_ParamLimits

0x9db5,	// (0x000383cc) mup2_volume_cont_pane

0x9ec3,	// (0x000384da) mup2_volume_cont_pane_g1_ParamLimits

0x9ec3,	// (0x000384da) mup2_volume_cont_pane_g1

0x68ea,	// (0x00034f01) aid_size_cell_touch_ParamLimits

0x68ea,	// (0x00034f01) aid_size_cell_touch

0x6b45,	// (0x0003515c) touch_pane_ParamLimits

0x6b45,	// (0x0003515c) touch_pane

0xde67,	// (0x0003c47e) main_rss2_pane

0x1d8d,	// (0x000303a4) listscroll_rss2_pane

0x1d96,	// (0x000303ad) rss2_navigation_pane

0x1d9e,	// (0x000303b5) list_rss2_pane

0xefa4,	// (0x0003d5bb) scroll_pane_cp22

0x1da6,	// (0x000303bd) rss2_navigation_pane_g1

0x1daf,	// (0x000303c6) rss2_navigation_pane_g2

0x1db7,	// (0x000303ce) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0003dd0a) rss2_navigation_pane_g

0x1dbf,	// (0x000303d6) rss2_navigation_pane_t1

0x9efc,	// (0x00038513) rss2_list_single_pane_ParamLimits

0x9efc,	// (0x00038513) rss2_list_single_pane

0x1dcd,	// (0x000303e4) rss2_list_single_pane_t2

0x1ddb,	// (0x000303f2) rss2_list_single_pane_t3_ParamLimits

0x1ddb,	// (0x000303f2) rss2_list_single_pane_t3

0x1df8,	// (0x0003040f) rss2_list_single_pane_t4

0x84c5,	// (0x00036adc) smil_status_pane_g1

0xf121,	// (0x0003d738) main_image2_pane_ParamLimits

0xf121,	// (0x0003d738) main_image2_pane

0x9ac8,	// (0x000380df) main_camera2_pane_g9_ParamLimits

0x9ac8,	// (0x000380df) main_camera2_pane_g9

0x9b1c,	// (0x00038133) main_camera2_pane_t5_ParamLimits

0x9b1c,	// (0x00038133) main_camera2_pane_t5

0x9b2e,	// (0x00038145) main_camera2_pane_t6_ParamLimits

0x9b2e,	// (0x00038145) main_camera2_pane_t6

0x9f2d,	// (0x00038544) main_image2_pane_g1_ParamLimits

0x9f2d,	// (0x00038544) main_image2_pane_g1

0x91cc,	// (0x000377e3) smil2_video_pane_ParamLimits

0x91cc,	// (0x000377e3) smil2_video_pane

0x5899,	// (0x00033eb0) aid_zoom_text_primary_cp

0xdec5,	// (0x0003c4dc) popup_preview_fixed_window

0xe8b0,	// (0x0003cec7) im_reading_pane_g1

0x9a12,	// (0x00038029) cams2_bc_adjust_pane_cp_ParamLimits

0x9a12,	// (0x00038029) cams2_bc_adjust_pane_cp

0x9b5e,	// (0x00038175) cams2_bc_adjust_pane_ParamLimits

0x9b5e,	// (0x00038175) cams2_bc_adjust_pane

0x9f39,	// (0x00038550) cams2_bc_adjust_pane_g1

0x9f41,	// (0x00038558) cams2_slider_pane

0x9f4a,	// (0x00038561) cams2_slider_pane_g1

0x9f53,	// (0x0003856a) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0003dd11) cams2_slider_pane_g

0x6d5a,	// (0x00035371) calc_display_pane_ParamLimits

0x6d78,	// (0x0003538f) calc_paper_pane_ParamLimits

0x6d94,	// (0x000353ab) grid_calc_pane_ParamLimits

0x86b8,	// (0x00036ccf) popup_clock_digital_window_t1_ParamLimits

0x09f6,	// (0x0002f00d) main_image_pane_t1

0x6d40,	// (0x00035357) aid_size_cell_calc_ParamLimits

0x6d40,	// (0x00035357) aid_size_cell_calc

0x9699,	// (0x00037cb0) popup_blid_sat_info2_window_ParamLimits

0x9699,	// (0x00037cb0) popup_blid_sat_info2_window

0x1e42,	// (0x00030459) aid_size_cell_blid

0x1e4a,	// (0x00030461) bg_popup_window_pane_cp07

0x1e6d,	// (0x00030484) grid_popup_blid_pane

0x1e77,	// (0x0003048e) heading_pane_cp05_ParamLimits

0x1e77,	// (0x0003048e) heading_pane_cp05

0x1f41,	// (0x00030558) cell_popup_blid_pane_ParamLimits

0x1f41,	// (0x00030558) cell_popup_blid_pane

0x1f65,	// (0x0003057c) cell_popup_blid_pane_g1

0x1f6d,	// (0x00030584) cell_popup_blid_pane_t1

0x9d7b,	// (0x00038392) mup2_indicator_pane_ParamLimits

0x9d7b,	// (0x00038392) mup2_indicator_pane

0xf0ed,	// (0x0003d704) mup2_visualizer_osc_pane

0x1caa,	// (0x000302c1) mup2_visualizer_spec_pane_ParamLimits

0x1caa,	// (0x000302c1) mup2_visualizer_spec_pane

0x9f6d,	// (0x00038584) mup2_spec_half_pane

0x9f76,	// (0x0003858d) mup2_spec_half_pane_cp

0x9f80,	// (0x00038597) mup2_spec_bar_pane_ParamLimits

0x9f80,	// (0x00038597) mup2_spec_bar_pane

0x1bf9,	// (0x00030210) mup2_spec_bar_pane_g1

0x1c03,	// (0x0003021a) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0003dc84) mup2_spec_bar_pane_g

0x9f9f,	// (0x000385b6) mup2_osc_middle_pane

0x1c15,	// (0x0003022c) mup2_visualizer_osc_pane_g1

0xdeef,	// (0x0003c506) popup_number_entry_window_t1_ParamLimits

0xdf02,	// (0x0003c519) popup_number_entry_window_t2_ParamLimits

0xdf14,	// (0x0003c52b) popup_number_entry_window_t3_ParamLimits

0x6b9c,	// (0x000351b3) popup_number_entry_window_t5_ParamLimits

0x6b9c,	// (0x000351b3) popup_number_entry_window_t5

0xf12f,	// (0x0003d746) popup_number_entry_window_t_ParamLimits

0xdf26,	// (0x0003c53d) text_title_cp2_ParamLimits

0x8ec0,	// (0x000374d7) aid_hotspot_pointer_text2_pane

0x8f5a,	// (0x00037571) main_viewer_pane_g9_ParamLimits

0x8f5a,	// (0x00037571) main_viewer_pane_g9

0xeadf,	// (0x0003d0f6) cale_month_pane_t1_ParamLimits

0xeb1c,	// (0x0003d133) bg_cale_pane_ParamLimits

0xeb34,	// (0x0003d14b) list_cale_pane_ParamLimits

0xe742,	// (0x0003cd59) listscroll_cale_day_pane_t1

0xeb45,	// (0x0003d15c) scroll_pane_cp09_ParamLimits

0x8c7d,	// (0x00037294) main_mup_eq_pane_t1_ParamLimits

0x8c7d,	// (0x00037294) main_mup_eq_pane_t1

0x8c97,	// (0x000372ae) main_mup_eq_pane_t2_ParamLimits

0x8c97,	// (0x000372ae) main_mup_eq_pane_t2

0x8cb1,	// (0x000372c8) main_mup_eq_pane_t3_ParamLimits

0x8cb1,	// (0x000372c8) main_mup_eq_pane_t3

0x8cc9,	// (0x000372e0) main_mup_eq_pane_t4_ParamLimits

0x8cc9,	// (0x000372e0) main_mup_eq_pane_t4

0x8ce1,	// (0x000372f8) main_mup_eq_pane_t5_ParamLimits

0x8ce1,	// (0x000372f8) main_mup_eq_pane_t5

0x8cf9,	// (0x00037310) main_mup_eq_pane_t6_ParamLimits

0x8cf9,	// (0x00037310) main_mup_eq_pane_t6

0x8d0d,	// (0x00037324) main_mup_eq_pane_t7_ParamLimits

0x8d0d,	// (0x00037324) main_mup_eq_pane_t7

0x8d21,	// (0x00037338) main_mup_eq_pane_t8_ParamLimits

0x8d21,	// (0x00037338) main_mup_eq_pane_t8

0x8d37,	// (0x0003734e) main_mup_eq_pane_t9_ParamLimits

0x8d37,	// (0x0003734e) main_mup_eq_pane_t9

0x8d4f,	// (0x00037366) main_mup_eq_pane_t10_ParamLimits

0x8d4f,	// (0x00037366) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0003dad3) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0003dad3) main_mup_eq_pane_t

0x8e0c,	// (0x00037423) mup_equalizer_pane_cp5_ParamLimits

0x8e22,	// (0x00037439) mup_equalizer_pane_cp6_ParamLimits

0x8e3a,	// (0x00037451) mup_equalizer_pane_cp7_ParamLimits

0xde67,	// (0x0003c47e) main_gallery_pane

0x1c1e,	// (0x00030235) smil2_volume_pane

0x1c39,	// (0x00030250) smil_status_volume_pane_g1_ParamLimits

0x1c26,	// (0x0003023d) smil_status_volume_pane_g2_ParamLimits

0x9885,	// (0x00037e9c) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0003dc89) smil_status_volume_pane_g_ParamLimits

0x1e4a,	// (0x00030461) bg_popup_window_pane_cp07_ParamLimits

0x1e58,	// (0x0003046f) blid_firmament_pane

0x9fa8,	// (0x000385bf) aid_size_cell_gallery_ParamLimits

0x9fa8,	// (0x000385bf) aid_size_cell_gallery

0x9fb6,	// (0x000385cd) grid_gallery_pane_ParamLimits

0x9fb6,	// (0x000385cd) grid_gallery_pane

0x9fc6,	// (0x000385dd) cell_gallery_pane_ParamLimits

0x9fc6,	// (0x000385dd) cell_gallery_pane

0x1f7b,	// (0x00030592) bg_cell_gallery_focus_pane_ParamLimits

0x1f7b,	// (0x00030592) bg_cell_gallery_focus_pane

0x1f8d,	// (0x000305a4) cell_gallery_pane_g1_ParamLimits

0x1f8d,	// (0x000305a4) cell_gallery_pane_g1

0xa014,	// (0x0003862b) cell_gallery_pane_g2_ParamLimits

0xa014,	// (0x0003862b) cell_gallery_pane_g2

0xa021,	// (0x00038638) cell_gallery_pane_g3_ParamLimits

0xa021,	// (0x00038638) cell_gallery_pane_g3

0x1f99,	// (0x000305b0) cell_gallery_pane_g4_ParamLimits

0x1f99,	// (0x000305b0) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0003dd37) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0003dd37) cell_gallery_pane_g

0x1fa5,	// (0x000305bc) bg_cell_gallery_focus_pane_g1

0x1fad,	// (0x000305c4) bg_cell_gallery_focus_pane_g2

0x1fb5,	// (0x000305cc) bg_cell_gallery_focus_pane_g3

0x1fbd,	// (0x000305d4) bg_cell_gallery_focus_pane_g4

0x1fc5,	// (0x000305dc) bg_cell_gallery_focus_pane_g5

0x1fcd,	// (0x000305e4) bg_cell_gallery_focus_pane_g6

0x1fd5,	// (0x000305ec) bg_cell_gallery_focus_pane_g7

0x1fdd,	// (0x000305f4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0003dd40) bg_cell_gallery_focus_pane_g

0x1fe5,	// (0x000305fc) aid_firma_cardinal

0x1ff9,	// (0x00030610) blid_firmament_pane_t1

0x2010,	// (0x00030627) blid_firmament_pane_t2

0x2027,	// (0x0003063e) blid_firmament_pane_t3

0x203e,	// (0x00030655) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0003dd51) blid_firmament_pane_t

0x2055,	// (0x0003066c) blid_sat_info_pane

0x2065,	// (0x0003067c) blid_sat_info_pane_g1

0x2065,	// (0x0003067c) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0003dd5a) blid_sat_info_pane_g

0x206f,	// (0x00030686) blid_sat_info_pane_t1

0x207d,	// (0x00030694) smil2_volume_content_pane

0x2086,	// (0x0003069d) smil2_volume_pane_g1

0x208e,	// (0x000306a5) smil2_volume_content_pane_g1

0x2097,	// (0x000306ae) smil2_volume_content_pane_g2

0x20a0,	// (0x000306b7) smil2_volume_content_pane_g3

0x20a9,	// (0x000306c0) smil2_volume_content_pane_g4

0x20b2,	// (0x000306c9) smil2_volume_content_pane_g5

0x20bb,	// (0x000306d2) smil2_volume_content_pane_g6

0x20c4,	// (0x000306db) smil2_volume_content_pane_g7

0x20cd,	// (0x000306e4) smil2_volume_content_pane_g8

0x20d6,	// (0x000306ed) smil2_volume_content_pane_g9

0x20df,	// (0x000306f6) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0003dd5f) smil2_volume_content_pane_g

0x72cf,	// (0x000358e6) cale_week_day_heading_pane_t1_ParamLimits

0x72fc,	// (0x00035913) cale_week_day_heading_pane_t2_ParamLimits

0x7329,	// (0x00035940) cale_week_day_heading_pane_t3_ParamLimits

0x7356,	// (0x0003596d) cale_week_day_heading_pane_t4_ParamLimits

0x7383,	// (0x0003599a) cale_week_day_heading_pane_t5_ParamLimits

0x73b0,	// (0x000359c7) cale_week_day_heading_pane_t6_ParamLimits

0x73dd,	// (0x000359f4) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0003d84b) cale_week_day_heading_pane_t_ParamLimits

0xe754,	// (0x0003cd6b) bg_cale_side_pane_ParamLimits

0x740a,	// (0x00035a21) cale_week_time_pane_t1_ParamLimits

0x7422,	// (0x00035a39) cale_week_time_pane_t2_ParamLimits

0x743a,	// (0x00035a51) cale_week_time_pane_t3_ParamLimits

0x7452,	// (0x00035a69) cale_week_time_pane_t4_ParamLimits

0x746a,	// (0x00035a81) cale_week_time_pane_t5_ParamLimits

0x7482,	// (0x00035a99) cale_week_time_pane_t6_ParamLimits

0x749a,	// (0x00035ab1) cale_week_time_pane_t7_ParamLimits

0x74b2,	// (0x00035ac9) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0003d85a) cale_week_time_pane_t_ParamLimits

0x74ca,	// (0x00035ae1) cell_cale_week_pane_g2_ParamLimits

0xe754,	// (0x0003cd6b) bg_cale_side_pane_cp01_ParamLimits

0x8352,	// (0x00036969) cale_month_week_pane_t1_ParamLimits

0x8369,	// (0x00036980) cale_month_week_pane_t2_ParamLimits

0x8380,	// (0x00036997) cale_month_week_pane_t3_ParamLimits

0x8397,	// (0x000369ae) cale_month_week_pane_t4_ParamLimits

0x83ae,	// (0x000369c5) cale_month_week_pane_t5_ParamLimits

0x83c5,	// (0x000369dc) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0003d933) cale_month_week_pane_t_ParamLimits

0x8492,	// (0x00036aa9) cell_cale_month_pane_g1_ParamLimits

0xde67,	// (0x0003c47e) main_cale_event_viewer_pane

0xde67,	// (0x0003c47e) listscroll_cale_event_viewer_pane

0x20e8,	// (0x000306ff) list_cale_ev_pane

0x20f0,	// (0x00030707) scroll_pane_cp023

0x20fc,	// (0x00030713) field_cale_ev_pane_ParamLimits

0x20fc,	// (0x00030713) field_cale_ev_pane

0x211a,	// (0x00030731) field_cale_ev_content_pane_ParamLimits

0x211a,	// (0x00030731) field_cale_ev_content_pane

0x2126,	// (0x0003073d) field_cale_ev_pane_g1_ParamLimits

0x2126,	// (0x0003073d) field_cale_ev_pane_g1

0x2132,	// (0x00030749) field_cale_ev_pane_g2_ParamLimits

0x2132,	// (0x00030749) field_cale_ev_pane_g2

0x214a,	// (0x00030761) field_cale_ev_pane_g3_ParamLimits

0x214a,	// (0x00030761) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0003dd74) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0003dd74) field_cale_ev_pane_g

0x2162,	// (0x00030779) field_cale_ev_pane_t1_ParamLimits

0x2162,	// (0x00030779) field_cale_ev_pane_t1

0x2179,	// (0x00030790) field_cale_ev_content_pane_t1_ParamLimits

0x2179,	// (0x00030790) field_cale_ev_content_pane_t1

0x083f,	// (0x0002ee56) bg_button_pane_cp01

0xe614,	// (0x0003cc2b) listscroll_cale_week_pane_ParamLimits

0x70f3,	// (0x0003570a) popup_toolbar_window_cp01

0xe742,	// (0x0003cd59) listscroll_cale_week_pane_t1_ParamLimits

0xe614,	// (0x0003cc2b) listscroll_cale_day_pane_ParamLimits

0x70f3,	// (0x0003570a) popup_toolbar_window_cp02

0xe742,	// (0x0003cd59) listscroll_cale_day_pane_t1_ParamLimits

0xe614,	// (0x0003cc2b) main_cale_month_pane_ParamLimits

0x9769,	// (0x00037d80) popup_toolbar_window_cp03_ParamLimits

0x9769,	// (0x00037d80) popup_toolbar_window_cp03

0x90e2,	// (0x000376f9) main_image_pane_g2_ParamLimits

0x90e2,	// (0x000376f9) main_image_pane_g2

0x90ee,	// (0x00037705) main_image_pane_g3_ParamLimits

0x90ee,	// (0x00037705) main_image_pane_g3

0x0002,

0xf54e,	// (0x0003db65) main_image_pane_g_ParamLimits

0xf54e,	// (0x0003db65) main_image_pane_g

0x09f6,	// (0x0002f00d) main_image_pane_t1_ParamLimits

0x90fa,	// (0x00037711) main_image_pane_t2_ParamLimits

0x90fa,	// (0x00037711) main_image_pane_t2

0x910c,	// (0x00037723) main_image_pane_t3_ParamLimits

0x910c,	// (0x00037723) main_image_pane_t3

0x911e,	// (0x00037735) main_image_pane_t4_ParamLimits

0x911e,	// (0x00037735) main_image_pane_t4

0x0003,

0xf555,	// (0x0003db6c) main_image_pane_t_ParamLimits

0xf555,	// (0x0003db6c) main_image_pane_t

0x9130,	// (0x00037747) popup_image_details_window_cp01

0x913a,	// (0x00037751) popup_toobar_trans_pane_cp01_ParamLimits

0x913a,	// (0x00037751) popup_toobar_trans_pane_cp01

0x96e6,	// (0x00037cfd) popup_image_details_window_ParamLimits

0x96e6,	// (0x00037cfd) popup_image_details_window

0x1b7f,	// (0x00030196) popup_image_focus_window

0x9a04,	// (0x0003801b) camera2_autofocus_pane_ParamLimits

0x9a04,	// (0x0003801b) camera2_autofocus_pane

0xde67,	// (0x0003c47e) bg_popup_sub_pane_cp06

0x2197,	// (0x000307ae) popup_image_focus_window_g1

0x219f,	// (0x000307b6) popup_image_focus_window_g2

0x21a7,	// (0x000307be) popup_image_focus_window_g3

0x21af,	// (0x000307c6) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0003dd7b) popup_image_focus_window_g

0x21b7,	// (0x000307ce) popup_image_focus_window_t1

0x21c5,	// (0x000307dc) popup_image_focus_window_t2

0x21d5,	// (0x000307ec) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0003dd84) popup_image_focus_window_t

0x21e3,	// (0x000307fa) camera2_autofocus_pane_g1

0xf121,	// (0x0003d738) bg_tb_trans_pane_cp01

0x21f1,	// (0x00030808) popup_image_details_window_g1

0x2204,	// (0x0003081b) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0003dd96) popup_image_details_window_g

0x222d,	// (0x00030844) popup_image_details_window_t1

0x223f,	// (0x00030856) popup_image_details_window_t2

0x2258,	// (0x0003086f) popup_image_details_window_t3

0x226c,	// (0x00030883) popup_image_details_window_t4

0x2287,	// (0x0003089e) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0003dd9d) popup_image_details_window_t

0xe600,	// (0x0003cc17) bg_calc_paper_pane_ParamLimits

0xde67,	// (0x0003c47e) grid_highlight_pane_cp013

0x6e8b,	// (0x000354a2) list_calc_pane_ParamLimits

0x6e9d,	// (0x000354b4) scroll_pane_cp024

0xe614,	// (0x0003cc2b) bg_calc_display_pane_ParamLimits

0x6ea5,	// (0x000354bc) calc_display_pane_t1_ParamLimits

0x6eba,	// (0x000354d1) calc_display_pane_t2_ParamLimits

0x6ecf,	// (0x000354e6) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0003d7cd) calc_display_pane_t_ParamLimits

0x6fab,	// (0x000355c2) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0003d7ea) cell_calc_pane_g

0x6fb4,	// (0x000355cb) cell_calc_pane_t1

0xe673,	// (0x0003cc8a) grid_highlight_pane_cp02_ParamLimits

0xe689,	// (0x0003cca0) toolbar_button_pane_cp01_ParamLimits

0xe689,	// (0x0003cca0) toolbar_button_pane_cp01

0x0a3b,	// (0x0002f052) temp_image_control_pane_ParamLimits

0x0a3b,	// (0x0002f052) temp_image_control_pane

0xf121,	// (0x0003d738) main_mp3_pane

0x22a1,	// (0x000308b8) temp_image_control_pane_g1_ParamLimits

0x22a1,	// (0x000308b8) temp_image_control_pane_g1

0x22af,	// (0x000308c6) temp_image_control_pane_g2_ParamLimits

0x22af,	// (0x000308c6) temp_image_control_pane_g2

0x22c1,	// (0x000308d8) temp_image_control_pane_g3_ParamLimits

0x22c1,	// (0x000308d8) temp_image_control_pane_g3

0xa05e,	// (0x00038675) temp_image_control_pane_g4_ParamLimits

0xa05e,	// (0x00038675) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0003dda8) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0003dda8) temp_image_control_pane_g

0x22a1,	// (0x000308b8) main_mp3_pane_g1

0xa06f,	// (0x00038686) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0003ddb1) main_mp3_pane_g

0x2304,	// (0x0003091b) main_mp3_pane_t1

0xe7b9,	// (0x0003cdd0) main_camera_pane_g8_ParamLimits

0xe7b9,	// (0x0003cdd0) main_camera_pane_g8

0x7768,	// (0x00035d7f) main_video_pane_g7_ParamLimits

0x7768,	// (0x00035d7f) main_video_pane_g7

0x9b4c,	// (0x00038163) main_camera2_pane_t7_ParamLimits

0x9b4c,	// (0x00038163) main_camera2_pane_t7

0xe907,	// (0x0003cf1e) scroll_pane_cp025_ParamLimits

0xe907,	// (0x0003cf1e) scroll_pane_cp025

0xe91b,	// (0x0003cf32) scroll_pane_cp026_ParamLimits

0xe91b,	// (0x0003cf32) scroll_pane_cp026

0xe92a,	// (0x0003cf41) wml_content_pane_ParamLimits

0xde67,	// (0x0003c47e) main_touch_calib_pane

0xa113,	// (0x0003872a) main_touch_calib_pane_g1

0xa11f,	// (0x00038736) main_touch_calib_pane_g2

0xa12b,	// (0x00038742) main_touch_calib_pane_g3

0xa137,	// (0x0003874e) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0003ddcf) main_touch_calib_pane_g

0xa143,	// (0x0003875a) main_touch_calib_pane_t1

0xa15a,	// (0x00038771) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0003ddd8) main_touch_calib_pane_t

0xf02e,	// (0x0003d645) mup_progress_pane_cp02

0xf04d,	// (0x0003d664) navi_pane_g1

0xf0af,	// (0x0003d6c6) navi_pane_mp_t3

0xf121,	// (0x0003d738) main_mp3_pane_ParamLimits

0x97a7,	// (0x00037dbe) navi_pane_ParamLimits

0x22a1,	// (0x000308b8) main_mp3_pane_g1_ParamLimits

0xa06f,	// (0x00038686) main_mp3_pane_g2_ParamLimits

0xa07b,	// (0x00038692) main_mp3_pane_g3_ParamLimits

0xa07b,	// (0x00038692) main_mp3_pane_g3

0xa087,	// (0x0003869e) main_mp3_pane_g4_ParamLimits

0xa087,	// (0x0003869e) main_mp3_pane_g4

0x22d1,	// (0x000308e8) main_mp3_pane_g5_ParamLimits

0x22d1,	// (0x000308e8) main_mp3_pane_g5

0x22df,	// (0x000308f6) main_mp3_pane_g6_ParamLimits

0x22df,	// (0x000308f6) main_mp3_pane_g6

0x22ec,	// (0x00030903) main_mp3_pane_g7_ParamLimits

0x22ec,	// (0x00030903) main_mp3_pane_g7

0x22f8,	// (0x0003090f) main_mp3_pane_g8_ParamLimits

0x22f8,	// (0x0003090f) main_mp3_pane_g8

0xf79a,	// (0x0003ddb1) main_mp3_pane_g_ParamLimits

0xa093,	// (0x000386aa) main_mp3_pane_t2

0xa0a3,	// (0x000386ba) main_mp3_pane_t3

0x2312,	// (0x00030929) main_mp3_pane_t4

0x2320,	// (0x00030937) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0003ddc2) main_mp3_pane_t

0x232e,	// (0x00030945) mup_progress_pane_cp01

0x5899,	// (0x00033eb0) aid_zoom_text_secondary2

0x20e8,	// (0x000306ff) list_cale_ev2_pane

0x20f0,	// (0x00030707) scroll_pane_cp023_ParamLimits

0xa1af,	// (0x000387c6) field_cale_ev2_pane_ParamLimits

0xa1af,	// (0x000387c6) field_cale_ev2_pane

0x5b88,	// (0x0003419f) field_cale_ev2_pane_g1_ParamLimits

0x5b88,	// (0x0003419f) field_cale_ev2_pane_g1

0x5b94,	// (0x000341ab) field_cale_ev2_pane_g2_ParamLimits

0x5b94,	// (0x000341ab) field_cale_ev2_pane_g2

0x5bac,	// (0x000341c3) field_cale_ev2_pane_g3_ParamLimits

0x5bac,	// (0x000341c3) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0003dde3) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0003dde3) field_cale_ev2_pane_g

0x5bd0,	// (0x000341e7) field_cale_ev2_pane_t1_ParamLimits

0x5bd0,	// (0x000341e7) field_cale_ev2_pane_t1

0x5be7,	// (0x000341fe) field_cale_ev2_pane_t2_ParamLimits

0x5be7,	// (0x000341fe) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0003ddec) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0003ddec) field_cale_ev2_pane_t

0x8fc2,	// (0x000375d9) main_postcard_pane_g5_ParamLimits

0x8fc2,	// (0x000375d9) main_postcard_pane_g5

0x8fd0,	// (0x000375e7) main_postcard_pane_g6_ParamLimits

0x8fd0,	// (0x000375e7) main_postcard_pane_g6

0x75b0,	// (0x00035bc7) camera2_autofocus_pane_cp_ParamLimits

0x75b0,	// (0x00035bc7) camera2_autofocus_pane_cp

0xf121,	// (0x0003d738) main_mup3_pane

0xa1f8,	// (0x0003880f) main_mup3_pane_g1_ParamLimits

0xa1f8,	// (0x0003880f) main_mup3_pane_g1

0xa219,	// (0x00038830) main_mup3_pane_g2_ParamLimits

0xa219,	// (0x00038830) main_mup3_pane_g2

0xa291,	// (0x000388a8) main_mup3_pane_g3_ParamLimits

0xa291,	// (0x000388a8) main_mup3_pane_g3

0xa2d0,	// (0x000388e7) main_mup3_pane_g4_ParamLimits

0xa2d0,	// (0x000388e7) main_mup3_pane_g4

0xa30f,	// (0x00038926) main_mup3_pane_g5_ParamLimits

0xa30f,	// (0x00038926) main_mup3_pane_g5

0xa34e,	// (0x00038965) main_mup3_pane_g6_ParamLimits

0xa34e,	// (0x00038965) main_mup3_pane_g6

0x2342,	// (0x00030959) main_mup3_pane_g7_ParamLimits

0x2342,	// (0x00030959) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0003ddfc) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0003ddfc) main_mup3_pane_g

0xa3c0,	// (0x000389d7) main_mup3_pane_t1_ParamLimits

0xa3c0,	// (0x000389d7) main_mup3_pane_t1

0xa42b,	// (0x00038a42) main_mup3_pane_t2_ParamLimits

0xa42b,	// (0x00038a42) main_mup3_pane_t2

0xa4f0,	// (0x00038b07) main_mup3_pane_t4_ParamLimits

0xa4f0,	// (0x00038b07) main_mup3_pane_t4

0xa53e,	// (0x00038b55) main_mup3_pane_t5_ParamLimits

0xa53e,	// (0x00038b55) main_mup3_pane_t5

0xa5e6,	// (0x00038bfd) main_mup3_pane_t6_ParamLimits

0xa5e6,	// (0x00038bfd) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0003de0d) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0003de0d) main_mup3_pane_t

0xa68e,	// (0x00038ca5) mup3_progress_pane_ParamLimits

0xa68e,	// (0x00038ca5) mup3_progress_pane

0xa6f9,	// (0x00038d10) popup_mup3_control_window_ParamLimits

0xa6f9,	// (0x00038d10) popup_mup3_control_window

0x2350,	// (0x00030967) popup_mup3_text_window

0xa712,	// (0x00038d29) mup3_progress_pane_t1

0xa729,	// (0x00038d40) mup3_progress_pane_t2

0x2358,	// (0x0003096f) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0003de1a) mup3_progress_pane_t

0x236f,	// (0x00030986) mup_progress_pane_cp03

0xde67,	// (0x0003c47e) bg_tb_trans_pane_cp04

0xa740,	// (0x00038d57) mup3_volume_pane

0xa748,	// (0x00038d5f) popup_mup3_control_window_g1

0xa751,	// (0x00038d68) mup3_volume_pane_g1

0xa75a,	// (0x00038d71) mup3_volume_pane_g2

0xa763,	// (0x00038d7a) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0003de21) mup3_volume_pane_g

0xde67,	// (0x0003c47e) bg_tb_trans_pane_cp03

0x237f,	// (0x00030996) popup_mup3_text_window_g1

0x2387,	// (0x0003099e) popup_mup3_text_window_t1

0xe65c,	// (0x0003cc73) list_calc_item_pane_g1_ParamLimits

0x1d74,	// (0x0003038b) mup_volume_pane_cp_g1

0xa171,	// (0x00038788) main_touch_calib_pane_t3

0xa185,	// (0x0003879c) main_touch_calib_pane_t4

0xa199,	// (0x000387b0) main_touch_calib_pane_t5

0xde71,	// (0x0003c488) aid_cell_size_toolbar2

0xde79,	// (0x0003c490) aid_popup3_width_pane

0x5891,	// (0x00033ea8) aid_zoom_text_msg_primary

0x7587,	// (0x00035b9e) vorec_t7

0xe620,	// (0x0003cc37) bg_calc_paper_pane_g1_ParamLimits

0xe62c,	// (0x0003cc43) bg_calc_paper_pane_g2_ParamLimits

0xe638,	// (0x0003cc4f) bg_calc_paper_pane_g3_ParamLimits

0xe644,	// (0x0003cc5b) bg_calc_paper_pane_g4_ParamLimits

0xe650,	// (0x0003cc67) bg_calc_paper_pane_g5_ParamLimits

0x6f0e,	// (0x00035525) bg_calc_paper_pane_g6_ParamLimits

0x6f1f,	// (0x00035536) bg_calc_paper_pane_g7_ParamLimits

0x6f30,	// (0x00035547) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0003d7d4) bg_calc_paper_pane_g_ParamLimits

0x6f41,	// (0x00035558) calc_bg_paper_pane_g9_ParamLimits

0x7697,	// (0x00035cae) image_qvga_pane_ParamLimits

0x7697,	// (0x00035cae) image_qvga_pane

0xe53d,	// (0x0003cb54) bg_popup_sub_pane_cp04_ParamLimits

0x0972,	// (0x0002ef89) popup_mup_playback_window_g1_ParamLimits

0x097e,	// (0x0002ef95) popup_mup_playback_window_t1_ParamLimits

0x0993,	// (0x0002efaa) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0003db60) popup_mup_playback_window_t_ParamLimits

0x9c7b,	// (0x00038292) main_mup2_pane_g3_ParamLimits

0x9c7b,	// (0x00038292) main_mup2_pane_g3

0x78e8,	// (0x00035eff) popup_toolbar_window_cp04

0x0d75,	// (0x0002f38c) popup_call2_audio_second_window_g3_ParamLimits

0x0d75,	// (0x0002f38c) popup_call2_audio_second_window_g3

0x117f,	// (0x0002f796) popup_call2_audio_first_window_g4_ParamLimits

0x117f,	// (0x0002f796) popup_call2_audio_first_window_g4

0x17fe,	// (0x0002fe15) popup_call2_audio_in_window_g4_ParamLimits

0x17fe,	// (0x0002fe15) popup_call2_audio_in_window_g4

0x90d5,	// (0x000376ec) aid_area_sk_bg_cut_ParamLimits

0x90d5,	// (0x000376ec) aid_area_sk_bg_cut

0x09a8,	// (0x0002efbf) aid_area_sk_bg_cut_2_ParamLimits

0x09a8,	// (0x0002efbf) aid_area_sk_bg_cut_2

0xa004,	// (0x0003861b) aid_placing_details_win

0xa00c,	// (0x00038623) aid_placing_details_win_2

0x21e3,	// (0x000307fa) camera2_autofocus_pane_g1_ParamLimits

0x6af1,	// (0x00035108) popup_fixed_preview_cale_window_ParamLimits

0x6af1,	// (0x00035108) popup_fixed_preview_cale_window

0xf0fe,	// (0x0003d715) navi_slider_pane_g3

0xf107,	// (0x0003d71e) navi_slider_pane_g4

0xf110,	// (0x0003d727) navi_slider_pane_g5

0xf0fe,	// (0x0003d715) navi_slider_pane_g6

0x8a11,	// (0x00037028) navi_slider_pane_g7

0x0804,	// (0x0002ee1b) mup_scale_pane_g3

0x080d,	// (0x0002ee24) mup_scale_pane_g4

0x0816,	// (0x0002ee2d) mup_scale_pane_g5

0x8e52,	// (0x00037469) mup_scale_pane_g6

0x8e5b,	// (0x00037472) mup_scale_pane_g7

0xf0fe,	// (0x0003d715) cams2_slider_pane_g3

0x1e29,	// (0x00030440) cams2_slider_pane_g4

0x9f5c,	// (0x00038573) cams2_slider_pane_g5

0xf0fe,	// (0x0003d715) cams2_slider_pane_g6

0x9f64,	// (0x0003857b) cams2_slider_pane_g7

0x2065,	// (0x0003067c) camera2_autofocus_pane_cp_g1

0x2395,	// (0x000309ac) bg_popup_preview_window_pane_cp02_ParamLimits

0x2395,	// (0x000309ac) bg_popup_preview_window_pane_cp02

0x23a1,	// (0x000309b8) list_fp_cale_pane_ParamLimits

0x23a1,	// (0x000309b8) list_fp_cale_pane

0x23ad,	// (0x000309c4) popup_fixed_preview_cale_window_t1_ParamLimits

0x23ad,	// (0x000309c4) popup_fixed_preview_cale_window_t1

0xa76c,	// (0x00038d83) popup_fixed_preview_cale_window_t2_ParamLimits

0xa76c,	// (0x00038d83) popup_fixed_preview_cale_window_t2

0xa781,	// (0x00038d98) popup_fixed_preview_cale_window_t3_ParamLimits

0xa781,	// (0x00038d98) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0003de28) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0003de28) popup_fixed_preview_cale_window_t

0xa796,	// (0x00038dad) list_single_fp_cale_pane_ParamLimits

0xa796,	// (0x00038dad) list_single_fp_cale_pane

0x23cb,	// (0x000309e2) list_single_fp_cale_pane_g1_ParamLimits

0x23cb,	// (0x000309e2) list_single_fp_cale_pane_g1

0x23d7,	// (0x000309ee) list_single_fp_cale_pane_g2_ParamLimits

0x23d7,	// (0x000309ee) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0003de2f) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0003de2f) list_single_fp_cale_pane_g

0x23f0,	// (0x00030a07) list_single_fp_cale_pane_t1_ParamLimits

0x23f0,	// (0x00030a07) list_single_fp_cale_pane_t1

0x2402,	// (0x00030a19) list_single_fp_cale_pane_t2_ParamLimits

0x2402,	// (0x00030a19) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0003de36) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0003de36) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xde67,	// (0x0003c47e) main_dialer_pane

0xa7a8,	// (0x00038dbf) aid_cell_size_keypad

0xa7b2,	// (0x00038dc9) dialer_ne_pane

0xa7bc,	// (0x00038dd3) grid_dialer_command_1_pane

0xa7c4,	// (0x00038ddb) grid_dialer_command_2_pane

0xa7cc,	// (0x00038de3) grid_dialer_keypad_pane

0xa7de,	// (0x00038df5) bg_popup_call_pane_cp06_ParamLimits

0xa7de,	// (0x00038df5) bg_popup_call_pane_cp06

0xa7ea,	// (0x00038e01) dialer_ne_clear_pane_ParamLimits

0xa7ea,	// (0x00038e01) dialer_ne_clear_pane

0x2435,	// (0x00030a4c) dialer_ne_pane_g1

0x243d,	// (0x00030a54) dialer_ne_pane_t1_ParamLimits

0x243d,	// (0x00030a54) dialer_ne_pane_t1

0xa7f6,	// (0x00038e0d) dialer_ne_pane_t2_ParamLimits

0xa7f6,	// (0x00038e0d) dialer_ne_pane_t2

0xa813,	// (0x00038e2a) dialer_ne_pane_t3_ParamLimits

0xa813,	// (0x00038e2a) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0003de3b) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0003de3b) dialer_ne_pane_t

0xa837,	// (0x00038e4e) dialer_ne_pane_t3_copy1_ParamLimits

0xa837,	// (0x00038e4e) dialer_ne_pane_t3_copy1

0xa85b,	// (0x00038e72) cell_dialer_keypad_pane_ParamLimits

0xa85b,	// (0x00038e72) cell_dialer_keypad_pane

0xa872,	// (0x00038e89) cell_dialer_command_1_pane_ParamLimits

0xa872,	// (0x00038e89) cell_dialer_command_1_pane

0xa888,	// (0x00038e9f) cell_dialer_command_2_pane_ParamLimits

0xa888,	// (0x00038e9f) cell_dialer_command_2_pane

0x244f,	// (0x00030a66) bg_button_pane_cp02_ParamLimits

0x244f,	// (0x00030a66) bg_button_pane_cp02

0xa897,	// (0x00038eae) cell_dialer_keypad_pane_g1_ParamLimits

0xa897,	// (0x00038eae) cell_dialer_keypad_pane_g1

0x244f,	// (0x00030a66) bg_button_pane_cp03_ParamLimits

0x244f,	// (0x00030a66) bg_button_pane_cp03

0xa8ac,	// (0x00038ec3) cell_dialer_command_1_pane_g1_ParamLimits

0xa8ac,	// (0x00038ec3) cell_dialer_command_1_pane_g1

0x245b,	// (0x00030a72) bg_button_pane_cp04

0xa8c0,	// (0x00038ed7) cell_dialer_command_2_pane_g1

0xf0ed,	// (0x0003d704) bg_button_pane_cp06

0x2463,	// (0x00030a7a) dialer_ne_clear_pane_g1

0x8954,	// (0x00036f6b) navi_pane_g2

0x8982,	// (0x00036f99) navi_pane_g3

0x0002,

0xf44c,	// (0x0003da63) navi_pane_g

0x89ad,	// (0x00036fc4) navi_pane_mv_g2

0x89d4,	// (0x00036feb) navi_pane_mv_g5

0x89dc,	// (0x00036ff3) navi_pane_mv_t1

0xe614,	// (0x0003cc2b) main_clock2_pane

0xa8ef,	// (0x00038f06) main_clock2_list_pane_ParamLimits

0xa8ef,	// (0x00038f06) main_clock2_list_pane

0xa917,	// (0x00038f2e) main_clock2_pane_t1_ParamLimits

0xa917,	// (0x00038f2e) main_clock2_pane_t1

0xa945,	// (0x00038f5c) main_clock2_pane_t2_ParamLimits

0xa945,	// (0x00038f5c) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0003de42) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0003de42) main_clock2_pane_t

0xa9ac,	// (0x00038fc3) popup_clock_analogue_window_cp03_ParamLimits

0xa9ac,	// (0x00038fc3) popup_clock_analogue_window_cp03

0xa9ca,	// (0x00038fe1) popup_clock_digital_window_cp02_ParamLimits

0xa9ca,	// (0x00038fe1) popup_clock_digital_window_cp02

0xaa37,	// (0x0003904e) main_clock2_list_single_pane_ParamLimits

0xaa37,	// (0x0003904e) main_clock2_list_single_pane

0xf0ed,	// (0x0003d704) list_highlight_pane_cp05

0x246b,	// (0x00030a82) main_clock2_list_single_pane_t1

0x78e8,	// (0x00035eff) popup_toolbar_window_cp04_ParamLimits

0xa02e,	// (0x00038645) camera2_autofocus_pane_g2_ParamLimits

0xa02e,	// (0x00038645) camera2_autofocus_pane_g2

0xa03a,	// (0x00038651) camera2_autofocus_pane_g3_ParamLimits

0xa03a,	// (0x00038651) camera2_autofocus_pane_g3

0xa046,	// (0x0003865d) camera2_autofocus_pane_g4_ParamLimits

0xa046,	// (0x0003865d) camera2_autofocus_pane_g4

0xa052,	// (0x00038669) camera2_autofocus_pane_g5_ParamLimits

0xa052,	// (0x00038669) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0003dd8b) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0003dd8b) camera2_autofocus_pane_g

0xa1d8,	// (0x000387ef) camera2_autofocus_pane_cp_g2

0xa1e0,	// (0x000387f7) camera2_autofocus_pane_cp_g3

0xa1e8,	// (0x000387ff) camera2_autofocus_pane_cp_g4

0xa1f0,	// (0x00038807) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0003ddf1) camera2_autofocus_pane_cp_g

0xa7d6,	// (0x00038ded) popup_dialer_spcha_window

0xde67,	// (0x0003c47e) bg_popup_sub_pane_cp07

0x2479,	// (0x00030a90) list_spcha_pane

0x2481,	// (0x00030a98) list_single_spcha_pane_ParamLimits

0x2481,	// (0x00030a98) list_single_spcha_pane

0xde67,	// (0x0003c47e) list_highlight_pane_cp06

0x2492,	// (0x00030aa9) list_single_spcha_pane_t1

0x15a8,	// (0x0002fbbf) popup_call2_audio_out_window_g4_ParamLimits

0x15a8,	// (0x0002fbbf) popup_call2_audio_out_window_g4

0xde67,	// (0x0003c47e) main_imed2_pane

0x1b87,	// (0x0003019e) popup_imed_adjust2_window

0x96f4,	// (0x00037d0b) popup_imed_trans_window_ParamLimits

0x96f4,	// (0x00037d0b) popup_imed_trans_window

0x1ea3,	// (0x000304ba) popup_blid_sat_info2_window_t1

0x1eb1,	// (0x000304c8) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0003dd20) popup_blid_sat_info2_window_t

0xaae1,	// (0x000390f8) aid_size_cell_colour_35

0xaafb,	// (0x00039112) aid_size_cell_colour_112

0xab12,	// (0x00039129) aid_size_cell_effect

0xf121,	// (0x0003d738) bg_tb_trans_pane_cp02

0x0663,	// (0x0002ec7a) heading_imed_pane

0xab2c,	// (0x00039143) listscroll_imed_pane

0x24a0,	// (0x00030ab7) heading_imed_pane_g1

0x24a8,	// (0x00030abf) heading_imed_pane_t1

0x24b6,	// (0x00030acd) grid_imed_colour_35_pane_ParamLimits

0x24b6,	// (0x00030acd) grid_imed_colour_35_pane

0xab38,	// (0x0003914f) grid_imed_effect_pane

0x24cd,	// (0x00030ae4) list_imed_aspect_pane

0xab48,	// (0x0003915f) scroll_pane_cp027_ParamLimits

0xab48,	// (0x0003915f) scroll_pane_cp027

0xab54,	// (0x0003916b) cell_imed_effect_pane_ParamLimits

0xab54,	// (0x0003916b) cell_imed_effect_pane

0x24d5,	// (0x00030aec) cell_imed_colour_pane_ParamLimits

0x24d5,	// (0x00030aec) cell_imed_colour_pane

0x2517,	// (0x00030b2e) cell_imed_colour_pane_g1_ParamLimits

0x2517,	// (0x00030b2e) cell_imed_colour_pane_g1

0x2528,	// (0x00030b3f) hgihlgiht_grid_pane_cp016_ParamLimits

0x2528,	// (0x00030b3f) hgihlgiht_grid_pane_cp016

0xab6c,	// (0x00039183) cell_imed_effect_pane_g1

0xab74,	// (0x0003918b) grid_highlight_pane_cp017

0x2539,	// (0x00030b50) list_imed_single_pane_ParamLimits

0x2539,	// (0x00030b50) list_imed_single_pane

0xde67,	// (0x0003c47e) list_highlight_pane_cp07

0x254e,	// (0x00030b65) list_imed_aspect_pane_comp1_t1

0x1b5f,	// (0x00030176) bg_tb_trans_pane_cp05

0x2570,	// (0x00030b87) popup_imed_adjust2_window_g1

0x2597,	// (0x00030bae) popup_imed_adjust2_window_t1

0x25af,	// (0x00030bc6) slider_imed_adjust_pane

0x25c3,	// (0x00030bda) slider_imed_adjust_pane_g1

0x25d3,	// (0x00030bea) slider_imed_adjust_pane_g2

0x25e3,	// (0x00030bfa) slider_imed_adjust_pane_g3

0x25f4,	// (0x00030c0b) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0003de5f) slider_imed_adjust_pane_g

0xab7d,	// (0x00039194) aid_size_cell_clipart2

0xab89,	// (0x000391a0) grid_imed_clipart_pane

0x2605,	// (0x00030c1c) scroll_pane_cp031

0xab93,	// (0x000391aa) cell_imed_clipart_pane_ParamLimits

0xab93,	// (0x000391aa) cell_imed_clipart_pane

0xabb5,	// (0x000391cc) cell_imed_clipart_pane_g1

0xde67,	// (0x0003c47e) grid_highlight_pane_cp014

0xa8fb,	// (0x00038f12) main_clock2_pane_g1_ParamLimits

0xa8fb,	// (0x00038f12) main_clock2_pane_g1

0xa9e2,	// (0x00038ff9) aid_call2_pane_cp10

0xa9f4,	// (0x0003900b) aid_call_pane_cp10

0xf022,	// (0x0003d639) popup_clock_analogue_window_cp10_g1

0xf022,	// (0x0003d639) popup_clock_analogue_window_cp10_g2

0xaa06,	// (0x0003901d) popup_clock_analogue_window_cp10_g3

0xaa06,	// (0x0003901d) popup_clock_analogue_window_cp10_g4

0xf022,	// (0x0003d639) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0003de4d) popup_clock_analogue_window_cp10_g

0xaa18,	// (0x0003902f) popup_clock_analogue_window_cp10_t1

0xaa49,	// (0x00039060) clock_digital_number_pane_cp10_ParamLimits

0xaa49,	// (0x00039060) clock_digital_number_pane_cp10

0xaa61,	// (0x00039078) clock_digital_number_pane_cp11_ParamLimits

0xaa61,	// (0x00039078) clock_digital_number_pane_cp11

0xaa79,	// (0x00039090) clock_digital_number_pane_cp12_ParamLimits

0xaa79,	// (0x00039090) clock_digital_number_pane_cp12

0xaa91,	// (0x000390a8) clock_digital_number_pane_cp13_ParamLimits

0xaa91,	// (0x000390a8) clock_digital_number_pane_cp13

0xaaa9,	// (0x000390c0) clock_digital_separator_pane_cp10_ParamLimits

0xaaa9,	// (0x000390c0) clock_digital_separator_pane_cp10

0xaac1,	// (0x000390d8) popup_clock_digital_window_cp02_t1_ParamLimits

0xaac1,	// (0x000390d8) popup_clock_digital_window_cp02_t1

0xe535,	// (0x0003cb4c) clock_digital_number_pane_cp10_g1

0xe535,	// (0x0003cb4c) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0003de68) clock_digital_number_pane_cp10_g

0xe535,	// (0x0003cb4c) clock_digital_separator_pane_cp10_g1

0xe535,	// (0x0003cb4c) clock_digital_separator_pane_g2_cp10

0xf0bd,	// (0x0003d6d4) navi_pane_vded_g4

0xf0c6,	// (0x0003d6dd) navi_pane_vded_g5

0xf0cf,	// (0x0003d6e6) navi_pane_vded_t1

0xde67,	// (0x0003c47e) main_vded_pane

0xabbe,	// (0x000391d5) main_vded_pane_g1

0xabca,	// (0x000391e1) main_vded_pane_g2

0xabd4,	// (0x000391eb) main_vded_pane_g3

0x0002,

0xf856,	// (0x0003de6d) main_vded_pane_g

0xabde,	// (0x000391f5) main_vded_pane_t1

0xabec,	// (0x00039203) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0003de74) main_vded_pane_t

0xabfa,	// (0x00039211) vded_slider_pane

0xac04,	// (0x0003921b) vded_video_pane

0x260d,	// (0x00030c24) vded_video_pane_g1

0xac0e,	// (0x00039225) vded_video_pane_g2

0x2065,	// (0x0003067c) vded_video_pane_g3

0x0002,

0xf862,	// (0x0003de79) vded_video_pane_g

0x2617,	// (0x00030c2e) vded_slider_pane_g1

0x1d74,	// (0x0003038b) vded_slider_pane_g2

0x2620,	// (0x00030c37) vded_slider_pane_g3

0x2629,	// (0x00030c40) vded_slider_pane_g4

0x2632,	// (0x00030c49) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0003de80) vded_slider_pane_g

0xa6eb,	// (0x00038d02) mup3_rocker_pane_ParamLimits

0xa6eb,	// (0x00038d02) mup3_rocker_pane

0xac17,	// (0x0003922e) mup3_control_keys_pane_g1

0xac1f,	// (0x00039236) mup3_control_keys_pane_g2

0xac27,	// (0x0003923e) mup3_control_keys_pane_g3

0xac2f,	// (0x00039246) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0003de8b) mup3_control_keys_pane_g

0x6b0f,	// (0x00035126) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6b0f,	// (0x00035126) popup_toolbar2_fixed_window_cp01

0xa705,	// (0x00038d1c) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa705,	// (0x00038d1c) popup_toolbar2_fixed_window_cp02

0x0ee7,	// (0x0002f4fe) popup_call2_audio_second_window_t4_ParamLimits

0x0ee7,	// (0x0002f4fe) popup_call2_audio_second_window_t4

0x1415,	// (0x0002fa2c) popup_call2_audio_first_window_t6_ParamLimits

0x1415,	// (0x0002fa2c) popup_call2_audio_first_window_t6

0x16ab,	// (0x0002fcc2) popup_call2_audio_out_window_t6_ParamLimits

0x16ab,	// (0x0002fcc2) popup_call2_audio_out_window_t6

0xde67,	// (0x0003c47e) main_vitu_pane

0xac3f,	// (0x00039256) aid_size_cell_itu_ParamLimits

0xac3f,	// (0x00039256) aid_size_cell_itu

0x6b37,	// (0x0003514e) bg_popup_window_pane_cp08_ParamLimits

0x6b37,	// (0x0003514e) bg_popup_window_pane_cp08

0xac4d,	// (0x00039264) field_vitu_entry_pane_ParamLimits

0xac4d,	// (0x00039264) field_vitu_entry_pane

0xac5c,	// (0x00039273) grid_vitu_function_pane_ParamLimits

0xac5c,	// (0x00039273) grid_vitu_function_pane

0xac6c,	// (0x00039283) grid_vitu_itu_pane_ParamLimits

0xac6c,	// (0x00039283) grid_vitu_itu_pane

0xac7c,	// (0x00039293) cell_vitu_itu_pane_ParamLimits

0xac7c,	// (0x00039293) cell_vitu_itu_pane

0xac91,	// (0x000392a8) cell_vitu_function_pane_ParamLimits

0xac91,	// (0x000392a8) cell_vitu_function_pane

0xf121,	// (0x0003d738) bg_popup_sub_pane_cp08_ParamLimits

0xf121,	// (0x0003d738) bg_popup_sub_pane_cp08

0xaca3,	// (0x000392ba) field_vitu_entry_pane_t1_ParamLimits

0xaca3,	// (0x000392ba) field_vitu_entry_pane_t1

0x2653,	// (0x00030c6a) field_vitu_entry_pane_t2_ParamLimits

0x2653,	// (0x00030c6a) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0003de99) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0003de99) field_vitu_entry_pane_t

0x2670,	// (0x00030c87) bg_button_pane_cp05_ParamLimits

0x2670,	// (0x00030c87) bg_button_pane_cp05

0xacbe,	// (0x000392d5) cell_vitu_itu_pane_g1

0xacd6,	// (0x000392ed) cell_vitu_itu_pane_t1_ParamLimits

0xacd6,	// (0x000392ed) cell_vitu_itu_pane_t1

0xace8,	// (0x000392ff) cell_vitu_itu_pane_t2_ParamLimits

0xace8,	// (0x000392ff) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0003de9e) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0003de9e) cell_vitu_itu_pane_t

0x267e,	// (0x00030c95) bg_button_pane_cp07

0xad1d,	// (0x00039334) cell_vitu_function_pane_g1

0x6db6,	// (0x000353cd) main_calc_pane_g1

0x6912,	// (0x00034f29) aid_visual_content_pane

0xde67,	// (0x0003c47e) main_vradio_pane

0xad26,	// (0x0003933d) main_vradio_pane_g1_ParamLimits

0xad26,	// (0x0003933d) main_vradio_pane_g1

0x2688,	// (0x00030c9f) main_vradio_pane_g2_ParamLimits

0x2688,	// (0x00030c9f) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0003dea5) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0003dea5) main_vradio_pane_g

0xad36,	// (0x0003934d) main_vradio_pane_t1_ParamLimits

0xad36,	// (0x0003934d) main_vradio_pane_t1

0xad48,	// (0x0003935f) main_vradio_pane_t2_ParamLimits

0xad48,	// (0x0003935f) main_vradio_pane_t2

0x2695,	// (0x00030cac) main_vradio_pane_t3_ParamLimits

0x2695,	// (0x00030cac) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0003deaa) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0003deaa) main_vradio_pane_t

0xad5a,	// (0x00039371) vradio_rocker_control_pane_ParamLimits

0xad5a,	// (0x00039371) vradio_rocker_control_pane

0xad66,	// (0x0003937d) vradio_station_info_pane_ParamLimits

0xad66,	// (0x0003937d) vradio_station_info_pane

0x26a9,	// (0x00030cc0) vradio_frequency_info_pane_ParamLimits

0x26a9,	// (0x00030cc0) vradio_frequency_info_pane

0x2065,	// (0x0003067c) vradio_station_info_pane_g1

0x26b8,	// (0x00030ccf) vradio_station_info_pane_t1_ParamLimits

0x26b8,	// (0x00030ccf) vradio_station_info_pane_t1

0x26da,	// (0x00030cf1) vradio_station_info_pane_t2_ParamLimits

0x26da,	// (0x00030cf1) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0003deb1) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0003deb1) vradio_station_info_pane_t

0x26ec,	// (0x00030d03) vradio_tuning_pane

0x26f4,	// (0x00030d0b) vradio_rocker_control_pane_g1

0x26fc,	// (0x00030d13) vradio_rocker_control_pane_g2

0x2704,	// (0x00030d1b) vradio_rocker_control_pane_g3

0x270c,	// (0x00030d23) vradio_rocker_control_pane_g4

0x2714,	// (0x00030d2b) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0003deb6) vradio_rocker_control_pane_g

0xad75,	// (0x0003938c) vradio_frequency_info_pane_g1

0x271c,	// (0x00030d33) vradio_frequency_info_pane_t1_ParamLimits

0x271c,	// (0x00030d33) vradio_frequency_info_pane_t1

0xad7f,	// (0x00039396) vradio_tuning_pane_g1

0xad88,	// (0x0003939f) vradio_tuning_pane_t1

0xde8d,	// (0x0003c4a4) area_side_right_pane_ParamLimits

0xde8d,	// (0x0003c4a4) area_side_right_pane

0x1b26,	// (0x0003013d) status_small_pane_g1

0x1b2e,	// (0x00030145) status_small_pane_g2

0x1b37,	// (0x0003014e) status_small_pane_g3

0x1b40,	// (0x00030157) status_small_pane_g4

0x0003,

0xf65f,	// (0x0003dc76) status_small_pane_g

0x1b49,	// (0x00030160) status_small_pane_t1

0xde67,	// (0x0003c47e) main_video3_pane

0x2730,	// (0x00030d47) cams_zoom_vslider_pane

0x2738,	// (0x00030d4f) image3_wide_pane_ParamLimits

0x2738,	// (0x00030d4f) image3_wide_pane

0x2752,	// (0x00030d69) image3_wide_small_pane

0x275e,	// (0x00030d75) main_video3_pane_g1_ParamLimits

0x275e,	// (0x00030d75) main_video3_pane_g1

0x277a,	// (0x00030d91) main_video3_pane_g2_ParamLimits

0x277a,	// (0x00030d91) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0003dec1) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0003dec1) main_video3_pane_g

0x2796,	// (0x00030dad) main_video3_pane_t1_ParamLimits

0x2796,	// (0x00030dad) main_video3_pane_t1

0x27c1,	// (0x00030dd8) main_video3_pane_t2_ParamLimits

0x27c1,	// (0x00030dd8) main_video3_pane_t2

0x27ec,	// (0x00030e03) main_video3_pane_t3_ParamLimits

0x27ec,	// (0x00030e03) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0003dec6) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0003dec6) main_video3_pane_t

0x2819,	// (0x00030e30) cams_zoom_vslider_pane_g1

0x2822,	// (0x00030e39) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0003decd) cams_zoom_vslider_pane_g

0x282a,	// (0x00030e41) small_slider_vertical_pane

0x2065,	// (0x0003067c) small_slider_vertical_pane_g1

0x2065,	// (0x0003067c) small_slider_vertical_pane_g2

0x2832,	// (0x00030e49) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0003ded2) small_slider_vertical_pane_g

0xde67,	// (0x0003c47e) main_hwr_training_pane

0x283b,	// (0x00030e52) hwr_training_instruct_pane_ParamLimits

0x283b,	// (0x00030e52) hwr_training_instruct_pane

0xad97,	// (0x000393ae) hwr_training_navi_pane_ParamLimits

0xad97,	// (0x000393ae) hwr_training_navi_pane

0xadb1,	// (0x000393c8) hwr_training_write_pane_ParamLimits

0xadb1,	// (0x000393c8) hwr_training_write_pane

0xde67,	// (0x0003c47e) bg_frame_shadow_pane

0x2872,	// (0x00030e89) hwr_training_write_pane_g1

0x287a,	// (0x00030e91) hwr_training_write_pane_g2

0x2882,	// (0x00030e99) hwr_training_write_pane_g3

0x288a,	// (0x00030ea1) hwr_training_write_pane_g4

0x2892,	// (0x00030ea9) hwr_training_write_pane_g5

0x289a,	// (0x00030eb1) hwr_training_write_pane_g6

0x28a2,	// (0x00030eb9) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0003ded9) hwr_training_write_pane_g

0xade9,	// (0x00039400) hwr_training_navi_pane_g1_ParamLimits

0xade9,	// (0x00039400) hwr_training_navi_pane_g1

0xadfb,	// (0x00039412) hwr_training_navi_pane_g2_ParamLimits

0xadfb,	// (0x00039412) hwr_training_navi_pane_g2

0xae0d,	// (0x00039424) hwr_training_navi_pane_g3_ParamLimits

0xae0d,	// (0x00039424) hwr_training_navi_pane_g3

0xae1d,	// (0x00039434) hwr_training_navi_pane_g4_ParamLimits

0xae1d,	// (0x00039434) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0003dee8) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0003dee8) hwr_training_navi_pane_g

0xae37,	// (0x0003944e) hwr_training_navi_pane_t1

0xae45,	// (0x0003945c) list_single_hwr_training_instruct_pane_ParamLimits

0xae45,	// (0x0003945c) list_single_hwr_training_instruct_pane

0x28f9,	// (0x00030f10) list_single_hwr_training_instruct_pane_t1

0x1fa5,	// (0x000305bc) bg_frame_shadow_pane_g1

0x2908,	// (0x00030f1f) bg_frame_shadow_pane_g2

0x2910,	// (0x00030f27) bg_frame_shadow_pane_g3

0x2918,	// (0x00030f2f) bg_frame_shadow_pane_g4

0x2920,	// (0x00030f37) bg_frame_shadow_pane_g5

0x2928,	// (0x00030f3f) bg_frame_shadow_pane_g6

0x2930,	// (0x00030f47) bg_frame_shadow_pane_g7

0xe6cd,	// (0x0003cce4) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0003def3) bg_frame_shadow_pane_g

0xde67,	// (0x0003c47e) main_video_tele_dialer_pane

0xae6a,	// (0x00039481) aid_size_cell_video_keypad_ParamLimits

0xae6a,	// (0x00039481) aid_size_cell_video_keypad

0xae7a,	// (0x00039491) grid_video_dialer_keypad_pane_ParamLimits

0xae7a,	// (0x00039491) grid_video_dialer_keypad_pane

0xaeae,	// (0x000394c5) video_down_pane_cp_ParamLimits

0xaeae,	// (0x000394c5) video_down_pane_cp

0xaed8,	// (0x000394ef) cell_video_dialer_keypad_pane_ParamLimits

0xaed8,	// (0x000394ef) cell_video_dialer_keypad_pane

0x2938,	// (0x00030f4f) bg_button_pane_cp08_ParamLimits

0x2938,	// (0x00030f4f) bg_button_pane_cp08

0xaeed,	// (0x00039504) cell_video_dialer_keypad_pane_g1_ParamLimits

0xaeed,	// (0x00039504) cell_video_dialer_keypad_pane_g1

0xa6df,	// (0x00038cf6) mup3_rocker2_pane_ParamLimits

0xa6df,	// (0x00038cf6) mup3_rocker2_pane

0x2065,	// (0x0003067c) mup3_rocker2_pane_g1

0x967e,	// (0x00037c95) main_dialer2_pane

0xde67,	// (0x0003c47e) main_mp4_pane

0xaf2c,	// (0x00039543) main_mp4_pane_g1_ParamLimits

0xaf2c,	// (0x00039543) main_mp4_pane_g1

0xaf3a,	// (0x00039551) main_mp4_pane_g2_ParamLimits

0xaf3a,	// (0x00039551) main_mp4_pane_g2

0xaf48,	// (0x0003955f) main_mp4_pane_g3_ParamLimits

0xaf48,	// (0x0003955f) main_mp4_pane_g3

0xaf8d,	// (0x000395a4) main_mp4_pane_g4_ParamLimits

0xaf8d,	// (0x000395a4) main_mp4_pane_g4

0xafa7,	// (0x000395be) main_mp4_pane_g5_ParamLimits

0xafa7,	// (0x000395be) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0003df13) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0003df13) main_mp4_pane_g

0xafdb,	// (0x000395f2) main_mp4_pane_t1_ParamLimits

0xafdb,	// (0x000395f2) main_mp4_pane_t1

0xb037,	// (0x0003964e) main_mp4_pane_t2_ParamLimits

0xb037,	// (0x0003964e) main_mp4_pane_t2

0x2a56,	// (0x0003106d) main_mp4_pane_t3_ParamLimits

0x2a56,	// (0x0003106d) main_mp4_pane_t3

0xb089,	// (0x000396a0) main_mp4_pane_t4_ParamLimits

0xb089,	// (0x000396a0) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0003df20) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0003df20) main_mp4_pane_t

0xb0cd,	// (0x000396e4) mp4_progress_pane_ParamLimits

0xb0cd,	// (0x000396e4) mp4_progress_pane

0xb117,	// (0x0003972e) mp4_rocker_pane_ParamLimits

0xb117,	// (0x0003972e) mp4_rocker_pane

0x2b2c,	// (0x00031143) mp4_progress_pane_t1

0x2b45,	// (0x0003115c) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0003df29) mp4_progress_pane_t

0x2b5e,	// (0x00031175) mup_progress_pane_cp04

0x2065,	// (0x0003067c) mp4_rocker_pane_g1

0xb137,	// (0x0003974e) aid_cell_size_keypad2_ParamLimits

0xb137,	// (0x0003974e) aid_cell_size_keypad2

0xb147,	// (0x0003975e) dialer2_ne_pane_ParamLimits

0xb147,	// (0x0003975e) dialer2_ne_pane

0xb155,	// (0x0003976c) grid_dialer2_keypad_pane_ParamLimits

0xb155,	// (0x0003976c) grid_dialer2_keypad_pane

0x3634,	// (0x00031c4b) bg_popup_call_pane_cp07_ParamLimits

0x3634,	// (0x00031c4b) bg_popup_call_pane_cp07

0xb165,	// (0x0003977c) dialer2_ne_pane_t1_ParamLimits

0xb165,	// (0x0003977c) dialer2_ne_pane_t1

0xb18a,	// (0x000397a1) cell_dialer2_keypad_pane_ParamLimits

0xb18a,	// (0x000397a1) cell_dialer2_keypad_pane

0x2b86,	// (0x0003119d) bg_button_pane_pane_cp04_ParamLimits

0x2b86,	// (0x0003119d) bg_button_pane_pane_cp04

0xb19f,	// (0x000397b6) cell_dialer2_keypad_pane_g1_ParamLimits

0xb19f,	// (0x000397b6) cell_dialer2_keypad_pane_g1

0x7813,	// (0x00035e2a) aid_placing_vt_set_content_ParamLimits

0x7813,	// (0x00035e2a) aid_placing_vt_set_content

0x7831,	// (0x00035e48) aid_placing_vt_set_title_ParamLimits

0x7831,	// (0x00035e48) aid_placing_vt_set_title

0xde67,	// (0x0003c47e) main_image3_pane

0xb239,	// (0x00039850) area_side_right_pane_cp01_ParamLimits

0xb239,	// (0x00039850) area_side_right_pane_cp01

0x3bd2,	// (0x000321e9) main_image3_pane_g1_ParamLimits

0x3bd2,	// (0x000321e9) main_image3_pane_g1

0xb266,	// (0x0003987d) main_image3_pane_g2_ParamLimits

0xb266,	// (0x0003987d) main_image3_pane_g2

0xb27f,	// (0x00039896) main_image3_pane_g3_ParamLimits

0xb27f,	// (0x00039896) main_image3_pane_g3

0xb298,	// (0x000398af) main_image3_pane_g4_ParamLimits

0xb298,	// (0x000398af) main_image3_pane_g4

0x0003,

0xf921,	// (0x0003df38) main_image3_pane_g_ParamLimits

0xf921,	// (0x0003df38) main_image3_pane_g

0xb2b1,	// (0x000398c8) main_image3_pane_t1_ParamLimits

0xb2b1,	// (0x000398c8) main_image3_pane_t1

0xb2d6,	// (0x000398ed) main_image3_pane_t2_ParamLimits

0xb2d6,	// (0x000398ed) main_image3_pane_t2

0xb2f5,	// (0x0003990c) main_image3_pane_t3_ParamLimits

0xb2f5,	// (0x0003990c) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0003df41) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0003df41) main_image3_pane_t

0x6b37,	// (0x0003514e) grid_sctrl_middle_pane_cp01_ParamLimits

0x6b37,	// (0x0003514e) grid_sctrl_middle_pane_cp01

0xb356,	// (0x0003996d) cell_sctrl_middle_pane_cp01_ParamLimits

0xb356,	// (0x0003996d) cell_sctrl_middle_pane_cp01

0xb367,	// (0x0003997e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb367,	// (0x0003997e) cell_sctrl_middle_pane_cp01_g1

0xde67,	// (0x0003c47e) main_call4_pane

0xb374,	// (0x0003998b) aid_size_button_call4_ParamLimits

0xb374,	// (0x0003998b) aid_size_button_call4

0xb3a4,	// (0x000399bb) call4_windows_pane_ParamLimits

0xb3a4,	// (0x000399bb) call4_windows_pane

0xb3be,	// (0x000399d5) grid_call4_button_pane_ParamLimits

0xb3be,	// (0x000399d5) grid_call4_button_pane

0x2bc4,	// (0x000311db) call4_windows_conf_pane

0x2bdb,	// (0x000311f2) popup_call4_audio_first_window_ParamLimits

0x2bdb,	// (0x000311f2) popup_call4_audio_first_window

0x2c27,	// (0x0003123e) popup_call4_audio_second_window_ParamLimits

0x2c27,	// (0x0003123e) popup_call4_audio_second_window

0x2c3b,	// (0x00031252) popup_call4_audio_wait_window_ParamLimits

0x2c3b,	// (0x00031252) popup_call4_audio_wait_window

0xb3e2,	// (0x000399f9) cell_call4_button_pane_ParamLimits

0xb3e2,	// (0x000399f9) cell_call4_button_pane

0xb407,	// (0x00039a1e) bg_button_pane_cp09_ParamLimits

0xb407,	// (0x00039a1e) bg_button_pane_cp09

0xb413,	// (0x00039a2a) cell_call4_button_pane_g1_ParamLimits

0xb413,	// (0x00039a2a) cell_call4_button_pane_g1

0xb420,	// (0x00039a37) cell_call4_button_pane_t1_ParamLimits

0xb420,	// (0x00039a37) cell_call4_button_pane_t1

0x2c83,	// (0x0003129a) popup_call4_audio_conf_window_ParamLimits

0x2c83,	// (0x0003129a) popup_call4_audio_conf_window

0xa712,	// (0x00038d29) mup3_progress_pane_t1_ParamLimits

0xa729,	// (0x00038d40) mup3_progress_pane_t2_ParamLimits

0x2358,	// (0x0003096f) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0003de1a) mup3_progress_pane_t_ParamLimits

0x236f,	// (0x00030986) mup_progress_pane_cp03_ParamLimits

0xac37,	// (0x0003924e) mup3_control_keys_pane_g4_copy1

0xb0fb,	// (0x00039712) mp4_rocker2_pane_ParamLimits

0xb0fb,	// (0x00039712) mp4_rocker2_pane

0x2c9f,	// (0x000312b6) mp4_rocker2_pane_g1

0x2c97,	// (0x000312ae) mp4_rocker2_pane_g2

0xb432,	// (0x00039a49) mp4_rocker2_pane_g3

0xb43a,	// (0x00039a51) mp4_rocker2_pane_g4

0xb442,	// (0x00039a59) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0003df4a) mp4_rocker2_pane_g

0xde67,	// (0x0003c47e) main_camera4_pane

0xde67,	// (0x0003c47e) main_video4_pane

0xae8a,	// (0x000394a1) main_video_tele_dialer_pane_t1_ParamLimits

0xae8a,	// (0x000394a1) main_video_tele_dialer_pane_t1

0xae9c,	// (0x000394b3) main_video_tele_dialer_pane_t2_ParamLimits

0xae9c,	// (0x000394b3) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0003df04) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0003df04) main_video_tele_dialer_pane_t

0xb462,	// (0x00039a79) cam4_autofocus_pane_ParamLimits

0xb462,	// (0x00039a79) cam4_autofocus_pane

0xb470,	// (0x00039a87) cam4_image_uncrop_pane_ParamLimits

0xb470,	// (0x00039a87) cam4_image_uncrop_pane

0xb487,	// (0x00039a9e) cam4_indicators_pane_ParamLimits

0xb487,	// (0x00039a9e) cam4_indicators_pane

0xb4a3,	// (0x00039aba) main_camera4_pane_g1_ParamLimits

0xb4a3,	// (0x00039aba) main_camera4_pane_g1

0xb4af,	// (0x00039ac6) main_camera4_pane_g2_ParamLimits

0xb4af,	// (0x00039ac6) main_camera4_pane_g2

0xb4bb,	// (0x00039ad2) main_camera4_pane_g3_ParamLimits

0xb4bb,	// (0x00039ad2) main_camera4_pane_g3

0xb4c7,	// (0x00039ade) main_camera4_pane_g4_ParamLimits

0xb4c7,	// (0x00039ade) main_camera4_pane_g4

0xb4d3,	// (0x00039aea) main_camera4_pane_g5_ParamLimits

0xb4d3,	// (0x00039aea) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0003df55) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0003df55) main_camera4_pane_g

0xb4ed,	// (0x00039b04) main_camera4_pane_t1_ParamLimits

0xb4ed,	// (0x00039b04) main_camera4_pane_t1

0x22d1,	// (0x000308e8) bg_tb_trans_pane_cp06

0xb519,	// (0x00039b30) cam4_indicators_pane_g1

0xb526,	// (0x00039b3d) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0003df67) cam4_indicators_pane_g

0xb546,	// (0x00039b5d) cam4_indicators_pane_t1

0xb570,	// (0x00039b87) main_video4_pane_g1_ParamLimits

0xb570,	// (0x00039b87) main_video4_pane_g1

0xb57c,	// (0x00039b93) main_video4_pane_g2_ParamLimits

0xb57c,	// (0x00039b93) main_video4_pane_g2

0xb588,	// (0x00039b9f) main_video4_pane_g3_ParamLimits

0xb588,	// (0x00039b9f) main_video4_pane_g3

0xb594,	// (0x00039bab) main_video4_pane_g4_ParamLimits

0xb594,	// (0x00039bab) main_video4_pane_g4

0x0004,

0xf957,	// (0x0003df6e) main_video4_pane_g_ParamLimits

0xf957,	// (0x0003df6e) main_video4_pane_g

0xb5b4,	// (0x00039bcb) vid4_indicators_pane_ParamLimits

0xb5b4,	// (0x00039bcb) vid4_indicators_pane

0xb5d2,	// (0x00039be9) video4_image_uncrop_cif_pane_ParamLimits

0xb5d2,	// (0x00039be9) video4_image_uncrop_cif_pane

0xb5e1,	// (0x00039bf8) video4_image_uncrop_nhd_pane_ParamLimits

0xb5e1,	// (0x00039bf8) video4_image_uncrop_nhd_pane

0xb470,	// (0x00039a87) video4_image_uncrop_vga_pane_ParamLimits

0xb470,	// (0x00039a87) video4_image_uncrop_vga_pane

0xf121,	// (0x0003d738) bg_tb_trans_pane_cp07

0xb519,	// (0x00039b30) vid4_indicators_pane_g1

0xb5f8,	// (0x00039c0f) vid4_indicators_pane_g2

0xb605,	// (0x00039c1c) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0003df79) vid4_indicators_pane_g

0xb632,	// (0x00039c49) vid4_indicators_pane_t1

0xb64c,	// (0x00039c63) cam4_autofocus_pane_g1

0xb654,	// (0x00039c6b) cam4_autofocus_pane_g2

0xb65c,	// (0x00039c73) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0003df84) cam4_autofocus_pane_g

0xb664,	// (0x00039c7b) cam4_autofocus_pane_g3_copy1

0xaebc,	// (0x000394d3) video_down_pane_cp_t1

0xaeca,	// (0x000394e1) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0003df09) video_down_pane_cp_t

0x6b37,	// (0x0003514e) popup_vitu2_window_ParamLimits

0x6b37,	// (0x0003514e) popup_vitu2_window

0xb66c,	// (0x00039c83) aid_size_cell2_itu2_ParamLimits

0xb66c,	// (0x00039c83) aid_size_cell2_itu2

0xb68e,	// (0x00039ca5) aid_size_cell_itu2_ParamLimits

0xb68e,	// (0x00039ca5) aid_size_cell_itu2

0x3634,	// (0x00031c4b) bg_popup_window_pane_cp09_ParamLimits

0x3634,	// (0x00031c4b) bg_popup_window_pane_cp09

0xb6d2,	// (0x00039ce9) field_vitu2_entry_pane_ParamLimits

0xb6d2,	// (0x00039ce9) field_vitu2_entry_pane

0xb6f2,	// (0x00039d09) grid_vitu2_function_pane_ParamLimits

0xb6f2,	// (0x00039d09) grid_vitu2_function_pane

0xb736,	// (0x00039d4d) grid_vitu2_itu_pane_ParamLimits

0xb736,	// (0x00039d4d) grid_vitu2_itu_pane

0xb7ae,	// (0x00039dc5) cell_vitu2_itu_pane_ParamLimits

0xb7ae,	// (0x00039dc5) cell_vitu2_itu_pane

0xb7c3,	// (0x00039dda) cell_vitu2_function_pane_ParamLimits

0xb7c3,	// (0x00039dda) cell_vitu2_function_pane

0x2cf7,	// (0x0003130e) bg_popup_call_pane_cp08_ParamLimits

0x2cf7,	// (0x0003130e) bg_popup_call_pane_cp08

0x2d10,	// (0x00031327) field_vitu2_entry_pane_g1

0x2d1c,	// (0x00031333) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0003df8b) field_vitu2_entry_pane_g

0x5bfc,	// (0x00034213) field_vitu2_entry_pane_t1_ParamLimits

0x5bfc,	// (0x00034213) field_vitu2_entry_pane_t1

0x5c1a,	// (0x00034231) field_vitu2_entry_pane_t2_ParamLimits

0x5c1a,	// (0x00034231) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0003df92) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0003df92) field_vitu2_entry_pane_t

0xb802,	// (0x00039e19) bg_button_pane_cp010_ParamLimits

0xb802,	// (0x00039e19) bg_button_pane_cp010

0xb810,	// (0x00039e27) cell_vitu2_itu_pane_g1

0xb82e,	// (0x00039e45) cell_vitu2_itu_pane_t1_ParamLimits

0xb82e,	// (0x00039e45) cell_vitu2_itu_pane_t1

0x5c37,	// (0x0003424e) cell_vitu2_itu_pane_t2_ParamLimits

0x5c37,	// (0x0003424e) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0003df9c) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0003df9c) cell_vitu2_itu_pane_t

0xf121,	// (0x0003d738) bg_button_pane_cp011

0xb880,	// (0x00039e97) cell_vitu2_function_pane_g1

0xde67,	// (0x0003c47e) main_myfav_hc_pane

0xb337,	// (0x0003994e) popup_image3_note_pane_ParamLimits

0xb337,	// (0x0003994e) popup_image3_note_pane

0xb345,	// (0x0003995c) popup_image3_tool_bar_pane_ParamLimits

0xb345,	// (0x0003995c) popup_image3_tool_bar_pane

0x5ca5,	// (0x000342bc) cell_vitu2_itu_pane_t3_ParamLimits

0x5ca5,	// (0x000342bc) cell_vitu2_itu_pane_t3

0xde67,	// (0x0003c47e) bg_popup_trans_pane

0x2d86,	// (0x0003139d) grid_image3_tool_bar_pane

0x2d90,	// (0x000313a7) bg_popup_trans_pane_g1

0xea10,	// (0x0003d027) bg_popup_trans_pane_g2

0x2d98,	// (0x000313af) bg_popup_trans_pane_g3

0x2da0,	// (0x000313b7) bg_popup_trans_pane_g4

0x2da8,	// (0x000313bf) bg_popup_trans_pane_g5

0x2db0,	// (0x000313c7) bg_popup_trans_pane_g6

0x2db8,	// (0x000313cf) bg_popup_trans_pane_g7

0x2dc0,	// (0x000313d7) bg_popup_trans_pane_g8

0xe9f0,	// (0x0003d007) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0003dfa3) bg_popup_trans_pane_g

0x2dc8,	// (0x000313df) cell_image3_tool_bar_pane_ParamLimits

0x2dc8,	// (0x000313df) cell_image3_tool_bar_pane

0x2065,	// (0x0003067c) cell_image3_tool_bar_pane_g1

0xde67,	// (0x0003c47e) bg_popup_trans_pane_cp1

0x2ddc,	// (0x000313f3) popup_image3_note_pane_t1

0x2dea,	// (0x00031401) popup_image3_note_pane_t2

0x2df8,	// (0x0003140f) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0003dfb6) popup_image3_note_pane_t

0x2e06,	// (0x0003141d) popup_image3_note_pane_t3_copy1

0xb894,	// (0x00039eab) bg_myfav_hc_instruction_pane_ParamLimits

0xb894,	// (0x00039eab) bg_myfav_hc_instruction_pane

0xb8ac,	// (0x00039ec3) cell_myfav_contact_pane_ParamLimits

0xb8ac,	// (0x00039ec3) cell_myfav_contact_pane

0xb8c6,	// (0x00039edd) cell_myfav_contact_pane_cp1_ParamLimits

0xb8c6,	// (0x00039edd) cell_myfav_contact_pane_cp1

0xb8de,	// (0x00039ef5) cell_myfav_contact_pane_cp2_ParamLimits

0xb8de,	// (0x00039ef5) cell_myfav_contact_pane_cp2

0xb8f6,	// (0x00039f0d) cell_myfav_contact_pane_cp3_ParamLimits

0xb8f6,	// (0x00039f0d) cell_myfav_contact_pane_cp3

0xb90d,	// (0x00039f24) cell_myfav_contact_pane_cp4_ParamLimits

0xb90d,	// (0x00039f24) cell_myfav_contact_pane_cp4

0xb923,	// (0x00039f3a) cell_myfav_contact_pane_cp5_ParamLimits

0xb923,	// (0x00039f3a) cell_myfav_contact_pane_cp5

0xb937,	// (0x00039f4e) cell_myfav_contact_pane_cp6_ParamLimits

0xb937,	// (0x00039f4e) cell_myfav_contact_pane_cp6

0xb94b,	// (0x00039f62) cell_myfav_contact_pane_cp7_ParamLimits

0xb94b,	// (0x00039f62) cell_myfav_contact_pane_cp7

0x2e14,	// (0x0003142b) listscroll_gen_pane_cp05

0xb963,	// (0x00039f7a) main_myfav_hc_pane_g1_ParamLimits

0xb963,	// (0x00039f7a) main_myfav_hc_pane_g1

0xb979,	// (0x00039f90) main_myfav_hc_pane_g2_ParamLimits

0xb979,	// (0x00039f90) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0003dfbd) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0003dfbd) main_myfav_hc_pane_g

0xb9a7,	// (0x00039fbe) main_myfav_hc_pane_t1_ParamLimits

0xb9a7,	// (0x00039fbe) main_myfav_hc_pane_t1

0x2e1d,	// (0x00031434) main_myfav_hc_pane_t2_ParamLimits

0x2e1d,	// (0x00031434) main_myfav_hc_pane_t2

0x2e2f,	// (0x00031446) main_myfav_hc_pane_t3_ParamLimits

0x2e2f,	// (0x00031446) main_myfav_hc_pane_t3

0xb9be,	// (0x00039fd5) main_myfav_hc_pane_t4_ParamLimits

0xb9be,	// (0x00039fd5) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0003dfc4) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0003dfc4) main_myfav_hc_pane_t

0x2065,	// (0x0003067c) bg_myfav_hc_instruction_pane_g1

0x2e41,	// (0x00031458) cell_myfav_contact_pane_g1_ParamLimits

0x2e41,	// (0x00031458) cell_myfav_contact_pane_g1

0x2e41,	// (0x00031458) cell_myfav_contact_pane_g2_ParamLimits

0x2e41,	// (0x00031458) cell_myfav_contact_pane_g2

0x2e4d,	// (0x00031464) cell_myfav_contact_pane_g3_ParamLimits

0x2e4d,	// (0x00031464) cell_myfav_contact_pane_g3

0x2342,	// (0x00030959) cell_myfav_contact_pane_g4_ParamLimits

0x2342,	// (0x00030959) cell_myfav_contact_pane_g4

0x2e5a,	// (0x00031471) cell_myfav_contact_pane_g5_ParamLimits

0x2e5a,	// (0x00031471) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0003dfcf) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0003dfcf) cell_myfav_contact_pane_g

0xb98f,	// (0x00039fa6) main_myfav_hc_pane_g3_ParamLimits

0xb98f,	// (0x00039fa6) main_myfav_hc_pane_g3

0x6a53,	// (0x0003506a) popup_adpt_find_window

0xb9e8,	// (0x00039fff) afind_page_pane_ParamLimits

0xb9e8,	// (0x00039fff) afind_page_pane

0xb9f5,	// (0x0003a00c) aid_size_cell_afind_ParamLimits

0xb9f5,	// (0x0003a00c) aid_size_cell_afind

0xba0f,	// (0x0003a026) bg_popup_sub_pane_cp09_ParamLimits

0xba0f,	// (0x0003a026) bg_popup_sub_pane_cp09

0xba1c,	// (0x0003a033) find_pane_cp01_ParamLimits

0xba1c,	// (0x0003a033) find_pane_cp01

0x2e66,	// (0x0003147d) grid_afind_control_pane_ParamLimits

0x2e66,	// (0x0003147d) grid_afind_control_pane

0xba29,	// (0x0003a040) grid_afind_pane_ParamLimits

0xba29,	// (0x0003a040) grid_afind_pane

0xba45,	// (0x0003a05c) cell_afind_pane_ParamLimits

0xba45,	// (0x0003a05c) cell_afind_pane

0x2065,	// (0x0003067c) afind_page_pane_g1

0xba8b,	// (0x0003a0a2) afind_page_pane_g2

0xba94,	// (0x0003a0ab) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0003dfda) afind_page_pane_g

0xba9d,	// (0x0003a0b4) afind_page_pane_t1

0x2e7a,	// (0x00031491) cell_afind_grid_control_pane_ParamLimits

0x2e7a,	// (0x00031491) cell_afind_grid_control_pane

0x2b86,	// (0x0003119d) bg_button_pane_cp69_ParamLimits

0x2b86,	// (0x0003119d) bg_button_pane_cp69

0xbabd,	// (0x0003a0d4) cell_afind_pane_g1_ParamLimits

0xbabd,	// (0x0003a0d4) cell_afind_pane_g1

0xbaca,	// (0x0003a0e1) cell_afind_pane_t1_ParamLimits

0xbaca,	// (0x0003a0e1) cell_afind_pane_t1

0xe803,	// (0x0003ce1a) bg_button_pane_cp72

0x2e89,	// (0x000314a0) cell_afind_grid_control_pane_g1

0x91fc,	// (0x00037813) aid_image_placing_area_ParamLimits

0x91fc,	// (0x00037813) aid_image_placing_area

0x263b,	// (0x00030c52) field_vitu_entry_pane_g1_ParamLimits

0x263b,	// (0x00030c52) field_vitu_entry_pane_g1

0x2647,	// (0x00030c5e) field_vitu_entry_pane_g2_ParamLimits

0x2647,	// (0x00030c5e) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0003de94) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0003de94) field_vitu_entry_pane_g

0xacbe,	// (0x000392d5) cell_vitu_itu_pane_g1_ParamLimits

0xad00,	// (0x00039317) cell_vitu_itu_pane_t3_ParamLimits

0xad00,	// (0x00039317) cell_vitu_itu_pane_t3

0x2b2c,	// (0x00031143) mp4_progress_pane_t1_ParamLimits

0x2b45,	// (0x0003115c) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0003df29) mp4_progress_pane_t_ParamLimits

0x2b5e,	// (0x00031175) mup_progress_pane_cp04_ParamLimits

0xb9d2,	// (0x00039fe9) main_myfav_hc_pane_t5_ParamLimits

0xb9d2,	// (0x00039fe9) main_myfav_hc_pane_t5

0xde85,	// (0x0003c49c) aid_zoom_text_primary

0x6a53,	// (0x0003506a) popup_adpt_find_window_ParamLimits

0xf121,	// (0x0003d738) main_cam_set_pane

0xb495,	// (0x00039aac) cam4_zoom_pane_ParamLimits

0xb495,	// (0x00039aac) cam4_zoom_pane

0xbadc,	// (0x0003a0f3) main_cam_set_pane_g1_ParamLimits

0xbadc,	// (0x0003a0f3) main_cam_set_pane_g1

0xbaea,	// (0x0003a101) main_cam_set_pane_g2_ParamLimits

0xbaea,	// (0x0003a101) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0003dfe1) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0003dfe1) main_cam_set_pane_g

0xbaf6,	// (0x0003a10d) main_cam_set_pane_t1_ParamLimits

0xbaf6,	// (0x0003a10d) main_cam_set_pane_t1

0xbb12,	// (0x0003a129) main_cset_listscroll_pane_ParamLimits

0xbb12,	// (0x0003a129) main_cset_listscroll_pane

0xbb3f,	// (0x0003a156) main_cset_slider_pane_ParamLimits

0xbb3f,	// (0x0003a156) main_cset_slider_pane

0x2e9a,	// (0x000314b1) main_cset_list_pane_ParamLimits

0x2e9a,	// (0x000314b1) main_cset_list_pane

0x2eaa,	// (0x000314c1) scroll_pane_cp028

0xbb5e,	// (0x0003a175) aid_area_touch_slider

0xbb7a,	// (0x0003a191) cset_slider_pane

0xbba4,	// (0x0003a1bb) main_cset_slider_pane_g1

0xbbb9,	// (0x0003a1d0) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0003dfe6) main_cset_slider_pane_g

0x2ee3,	// (0x000314fa) main_cset_slider_pane_t1

0xbc7b,	// (0x0003a292) main_cset_slider_pane_t2

0xbc95,	// (0x0003a2ac) main_cset_slider_pane_t3

0xbcaf,	// (0x0003a2c6) main_cset_slider_pane_t4

0xbcc9,	// (0x0003a2e0) main_cset_slider_pane_t5

0xbce7,	// (0x0003a2fe) main_cset_slider_pane_t6

0xbcfe,	// (0x0003a315) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0003e00b) main_cset_slider_pane_t

0xbe0a,	// (0x0003a421) cset_list_set_pane_ParamLimits

0xbe0a,	// (0x0003a421) cset_list_set_pane

0xbe20,	// (0x0003a437) aid_position_infowindow_above

0xbe28,	// (0x0003a43f) aid_position_infowindow_below

0x5cf2,	// (0x00034309) cset_list_set_pane_g1_ParamLimits

0x5cf2,	// (0x00034309) cset_list_set_pane_g1

0x5cfe,	// (0x00034315) cset_list_set_pane_g3_ParamLimits

0x5cfe,	// (0x00034315) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0003e02a) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0003e02a) cset_list_set_pane_g

0x5d0d,	// (0x00034324) cset_list_set_pane_t1_ParamLimits

0x5d0d,	// (0x00034324) cset_list_set_pane_t1

0xf121,	// (0x0003d738) list_highlight_pane_cp021_ParamLimits

0xf121,	// (0x0003d738) list_highlight_pane_cp021

0x0804,	// (0x0002ee1b) cset_slider_pane_g1

0x0816,	// (0x0002ee2d) cset_slider_pane_g2

0x080d,	// (0x0002ee24) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0003e02f) cset_slider_pane_g

0xbe30,	// (0x0003a447) aid_area_touch_cam4_zoom

0xbe38,	// (0x0003a44f) cam4_zoom_cont_pane

0xbe40,	// (0x0003a457) cam4_zoom_pane_g1

0xbe48,	// (0x0003a45f) cam4_zoom_pane_g2

0xbe50,	// (0x0003a467) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0003e036) cam4_zoom_pane_g

0x3983,	// (0x00031f9a) cam4_zoom_cont_pane_g1

0x398c,	// (0x00031fa3) cam4_zoom_cont_pane_g2

0x3995,	// (0x00031fac) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0003e03d) cam4_zoom_cont_pane_g

0xb38e,	// (0x000399a5) call4_image_pane_ParamLimits

0xb38e,	// (0x000399a5) call4_image_pane

0x2bc4,	// (0x000311db) call4_windows_conf_pane_ParamLimits

0x2c05,	// (0x0003121c) popup_call4_audio_in_window_ParamLimits

0x2c05,	// (0x0003121c) popup_call4_audio_in_window

0xde67,	// (0x0003c47e) bg_popup_call2_act_pane_cp02

0x2c7b,	// (0x00031292) call4_list_conf_pane

0x2065,	// (0x0003067c) call4_image_pane_g1

0x2065,	// (0x0003067c) call4_image_pane_g2

0x0001,

0xf743,	// (0x0003dd5a) call4_image_pane_g

0x2fe2,	// (0x000315f9) list_single_graphic_popup_conf4_pane_ParamLimits

0x2fe2,	// (0x000315f9) list_single_graphic_popup_conf4_pane

0xde67,	// (0x0003c47e) list_highlight_pane_cp022

0x2ff5,	// (0x0003160c) list_single_graphic_popup_conf4_pane_g1

0xef02,	// (0x0003d519) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0003e044) list_single_graphic_popup_conf4_pane_g

0x2ffd,	// (0x00031614) list_single_graphic_popup_conf4_pane_t1

0x793a,	// (0x00035f51) popup_vtel_slider_window_ParamLimits

0x793a,	// (0x00035f51) popup_vtel_slider_window

0x2b74,	// (0x0003118b) dialer2_ne_pane_t2_ParamLimits

0x2b74,	// (0x0003118b) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0003df2e) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0003df2e) dialer2_ne_pane_t

0xf121,	// (0x0003d738) bg_popup_sub_pane_cp010_ParamLimits

0xf121,	// (0x0003d738) bg_popup_sub_pane_cp010

0xbe58,	// (0x0003a46f) popup_vtel_slider_window_g1_ParamLimits

0xbe58,	// (0x0003a46f) popup_vtel_slider_window_g1

0xbe64,	// (0x0003a47b) popup_vtel_slider_window_g2_ParamLimits

0xbe64,	// (0x0003a47b) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0003e049) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0003e049) popup_vtel_slider_window_g

0xbeac,	// (0x0003a4c3) vtel_slider_pane_ParamLimits

0xbeac,	// (0x0003a4c3) vtel_slider_pane

0xbebb,	// (0x0003a4d2) vtel_slider_pane_g1_ParamLimits

0xbebb,	// (0x0003a4d2) vtel_slider_pane_g1

0xbec8,	// (0x0003a4df) vtel_slider_pane_g2_ParamLimits

0xbec8,	// (0x0003a4df) vtel_slider_pane_g2

0xbed5,	// (0x0003a4ec) vtel_slider_pane_g3_ParamLimits

0xbed5,	// (0x0003a4ec) vtel_slider_pane_g3

0xbebb,	// (0x0003a4d2) vtel_slider_pane_g4_ParamLimits

0xbebb,	// (0x0003a4d2) vtel_slider_pane_g4

0xbee2,	// (0x0003a4f9) vtel_slider_pane_g5_ParamLimits

0xbee2,	// (0x0003a4f9) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0003e052) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0003e052) vtel_slider_pane_g

0xde67,	// (0x0003c47e) main_gallery2_pane

0xb6b4,	// (0x00039ccb) aid_size_row_itut2_dropdow_list_ParamLimits

0xb6b4,	// (0x00039ccb) aid_size_row_itut2_dropdow_list

0xb714,	// (0x00039d2b) grid_vitu2_function_top_pane_ParamLimits

0xb714,	// (0x00039d2b) grid_vitu2_function_top_pane

0xb76a,	// (0x00039d81) popup_vitu2_dropdown_list_window_ParamLimits

0xb76a,	// (0x00039d81) popup_vitu2_dropdown_list_window

0xb78a,	// (0x00039da1) popup_vitu2_match_list_window

0xbeef,	// (0x0003a506) cell_vitu2_function_top_pane_ParamLimits

0xbeef,	// (0x0003a506) cell_vitu2_function_top_pane

0xbf0f,	// (0x0003a526) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbf0f,	// (0x0003a526) cell_vitu2_function_top_pane_cp01

0xbf2d,	// (0x0003a544) cell_vitu2_function_top_wide_pane_ParamLimits

0xbf2d,	// (0x0003a544) cell_vitu2_function_top_wide_pane

0xf121,	// (0x0003d738) bg_button_pane_cp012

0xbf4b,	// (0x0003a562) cell_vitu2_function_top_pane_g1

0xbf5a,	// (0x0003a571) bg_button_pane_cp013_ParamLimits

0xbf5a,	// (0x0003a571) bg_button_pane_cp013

0xbf76,	// (0x0003a58d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbf76,	// (0x0003a58d) cell_vitu2_function_top_wide_pane_g1

0x6b37,	// (0x0003514e) bg_popup_sub_pane_cp20

0xbf8e,	// (0x0003a5a5) list_vitu2_match_list_pane

0x2d90,	// (0x000313a7) bg_popup_sub_pane_cp20_g1

0x2d98,	// (0x000313af) bg_popup_sub_pane_cp20_g2

0xea10,	// (0x0003d027) bg_popup_sub_pane_cp20_g3

0x2da0,	// (0x000313b7) bg_popup_sub_pane_cp20_g4

0xe9f0,	// (0x0003d007) bg_popup_sub_pane_cp20_g5

0x3035,	// (0x0003164c) bg_popup_sub_pane_cp20_g6

0x2db0,	// (0x000313c7) bg_popup_sub_pane_cp20_g7

0x2db8,	// (0x000313cf) bg_popup_sub_pane_cp20_g8

0x2dc0,	// (0x000313d7) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0003e05d) bg_popup_sub_pane_cp20_g

0xbfa6,	// (0x0003a5bd) list_vitu2_match_list_item_pane_ParamLimits

0xbfa6,	// (0x0003a5bd) list_vitu2_match_list_item_pane

0xbfb8,	// (0x0003a5cf) list_vitu2_match_list_item_pane_t1

0xde67,	// (0x0003c47e) bg_popup_sub_pane_cp21

0xee2a,	// (0x0003d441) grid_vitu2_dropdown_list_pane

0xbfc6,	// (0x0003a5dd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbfc6,	// (0x0003a5dd) cell_vitu2_dropdown_list_char_pane

0xbfe7,	// (0x0003a5fe) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbfe7,	// (0x0003a5fe) cell_vitu2_dropdown_list_ctrl_pane

0x308f,	// (0x000316a6) cell_vitu2_dropdown_list_char_pane_g1

0x3086,	// (0x0003169d) cell_vitu2_dropdown_list_char_pane_g2

0x307d,	// (0x00031694) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0003e07a) cell_vitu2_dropdown_list_char_pane_g

0xc013,	// (0x0003a62a) cell_vitu2_dropdown_list_char_pane_t1

0xc021,	// (0x0003a638) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc021,	// (0x0003a638) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc031,	// (0x0003a648) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc031,	// (0x0003a648) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc042,	// (0x0003a659) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc042,	// (0x0003a659) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc052,	// (0x0003a669) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc052,	// (0x0003a669) cell_vitu2_dropdown_list_ctrl_pane_g4

0x22d1,	// (0x000308e8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x22d1,	// (0x000308e8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0003e081) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0003e081) cell_vitu2_dropdown_list_ctrl_pane_g

0xc06e,	// (0x0003a685) aid_size_cell_gallery2_ParamLimits

0xc06e,	// (0x0003a685) aid_size_cell_gallery2

0xc07c,	// (0x0003a693) grid_gallery2_pane_ParamLimits

0xc07c,	// (0x0003a693) grid_gallery2_pane

0xc08b,	// (0x0003a6a2) scroll_pane_cp029_ParamLimits

0xc08b,	// (0x0003a6a2) scroll_pane_cp029

0xc097,	// (0x0003a6ae) cell_gallery2_pane_ParamLimits

0xc097,	// (0x0003a6ae) cell_gallery2_pane

0x30a6,	// (0x000316bd) cell_gallery2_pane_g2

0x4757,	// (0x00032d6e) cell_gallery2_pane_g3

0x30b0,	// (0x000316c7) cell_gallery2_pane_g4

0x30b8,	// (0x000316cf) cell_gallery2_pane_g5

0xf0ed,	// (0x0003d704) grid_highlight_pane_cp10

0xb78a,	// (0x00039da1) popup_vitu2_match_list_window_ParamLimits

0xb79e,	// (0x00039db5) popup_vitu2_query_window_ParamLimits

0xb79e,	// (0x00039db5) popup_vitu2_query_window

0xde67,	// (0x0003c47e) bg_vitu2_candi_button_pane

0x308f,	// (0x000316a6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3086,	// (0x0003169d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x307d,	// (0x00031694) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5d77,	// (0x0003438e) bg_button_pane_cp015

0xc0c5,	// (0x0003a6dc) bg_button_pane_cp016

0xc0cf,	// (0x0003a6e6) bg_button_pane_cp017

0xf121,	// (0x0003d738) bg_popup_sub_pane_cp22

0x30c0,	// (0x000316d7) popup_vitu2_query_window_g1

0x5d8e,	// (0x000343a5) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0003e08c) popup_vitu2_query_window_g

0x5d9c,	// (0x000343b3) popup_vitu2_query_window_t1_ParamLimits

0x5d9c,	// (0x000343b3) popup_vitu2_query_window_t1

0x5dc4,	// (0x000343db) popup_vitu2_query_window_t2_ParamLimits

0x5dc4,	// (0x000343db) popup_vitu2_query_window_t2

0x5dd6,	// (0x000343ed) popup_vitu2_query_window_t3_ParamLimits

0x5dd6,	// (0x000343ed) popup_vitu2_query_window_t3

0xc0ea,	// (0x0003a701) popup_vitu2_query_window_t4_ParamLimits

0xc0ea,	// (0x0003a701) popup_vitu2_query_window_t4

0xc0fe,	// (0x0003a715) popup_vitu2_query_window_t5_ParamLimits

0xc0fe,	// (0x0003a715) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0003e091) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0003e091) popup_vitu2_query_window_t

0x2e92,	// (0x000314a9) main_cset_text_pane

0xbb5e,	// (0x0003a175) aid_area_touch_slider_ParamLimits

0xbb7a,	// (0x0003a191) cset_slider_pane_ParamLimits

0xbba4,	// (0x0003a1bb) main_cset_slider_pane_g1_ParamLimits

0xbbb9,	// (0x0003a1d0) main_cset_slider_pane_g2_ParamLimits

0x2eb3,	// (0x000314ca) main_cset_slider_pane_g3_ParamLimits

0x2eb3,	// (0x000314ca) main_cset_slider_pane_g3

0xbbce,	// (0x0003a1e5) main_cset_slider_pane_g4_ParamLimits

0xbbce,	// (0x0003a1e5) main_cset_slider_pane_g4

0xbbdd,	// (0x0003a1f4) main_cset_slider_pane_g5_ParamLimits

0xbbdd,	// (0x0003a1f4) main_cset_slider_pane_g5

0xbbeb,	// (0x0003a202) main_cset_slider_pane_g6_ParamLimits

0xbbeb,	// (0x0003a202) main_cset_slider_pane_g6

0xf9cf,	// (0x0003dfe6) main_cset_slider_pane_g_ParamLimits

0x2ee3,	// (0x000314fa) main_cset_slider_pane_t1_ParamLimits

0xbc7b,	// (0x0003a292) main_cset_slider_pane_t2_ParamLimits

0xbc95,	// (0x0003a2ac) main_cset_slider_pane_t3_ParamLimits

0xbcaf,	// (0x0003a2c6) main_cset_slider_pane_t4_ParamLimits

0xbcc9,	// (0x0003a2e0) main_cset_slider_pane_t5_ParamLimits

0xbce7,	// (0x0003a2fe) main_cset_slider_pane_t6_ParamLimits

0xbcfe,	// (0x0003a315) main_cset_slider_pane_t7_ParamLimits

0xbd2c,	// (0x0003a343) main_cset_slider_pane_t8_ParamLimits

0xbd2c,	// (0x0003a343) main_cset_slider_pane_t8

0xbd54,	// (0x0003a36b) main_cset_slider_pane_t9_ParamLimits

0xbd54,	// (0x0003a36b) main_cset_slider_pane_t9

0xbd7c,	// (0x0003a393) main_cset_slider_pane_t10_ParamLimits

0xbd7c,	// (0x0003a393) main_cset_slider_pane_t10

0xbda4,	// (0x0003a3bb) main_cset_slider_pane_t11_ParamLimits

0xbda4,	// (0x0003a3bb) main_cset_slider_pane_t11

0xbdce,	// (0x0003a3e5) main_cset_slider_pane_t12_ParamLimits

0xbdce,	// (0x0003a3e5) main_cset_slider_pane_t12

0xbdeb,	// (0x0003a402) main_cset_slider_pane_t13_ParamLimits

0xbdeb,	// (0x0003a402) main_cset_slider_pane_t13

0xf9f4,	// (0x0003e00b) main_cset_slider_pane_t_ParamLimits

0xde67,	// (0x0003c47e) bg_popup_sub_pane_cp011

0x30cc,	// (0x000316e3) main_cset_text_pane_g1

0x30d4,	// (0x000316eb) main_cset_text_pane_t1

0x30e2,	// (0x000316f9) main_cset_text_pane_t2

0x30f0,	// (0x00031707) main_cset_text_pane_t3

0x30fe,	// (0x00031715) main_cset_text_pane_t4

0x310c,	// (0x00031723) main_cset_text_pane_t5

0x311a,	// (0x00031731) main_cset_text_pane_t6

0x3128,	// (0x0003173f) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0003e09c) main_cset_text_pane_t

0xde67,	// (0x0003c47e) main_cam4_burst_pane

0xde67,	// (0x0003c47e) main_cam5_pane

0xbaab,	// (0x0003a0c2) bg_button_pane_cp019

0xbab4,	// (0x0003a0cb) bg_button_pane_cp020

0x2ebf,	// (0x000314d6) main_cset_slider_pane_g7_ParamLimits

0x2ebf,	// (0x000314d6) main_cset_slider_pane_g7

0x2ecb,	// (0x000314e2) main_cset_slider_pane_g8_ParamLimits

0x2ecb,	// (0x000314e2) main_cset_slider_pane_g8

0xbbff,	// (0x0003a216) main_cset_slider_pane_g9_ParamLimits

0xbbff,	// (0x0003a216) main_cset_slider_pane_g9

0xbc0b,	// (0x0003a222) main_cset_slider_pane_g10_ParamLimits

0xbc0b,	// (0x0003a222) main_cset_slider_pane_g10

0xbc17,	// (0x0003a22e) main_cset_slider_pane_g11_ParamLimits

0xbc17,	// (0x0003a22e) main_cset_slider_pane_g11

0xbc23,	// (0x0003a23a) main_cset_slider_pane_g12_ParamLimits

0xbc23,	// (0x0003a23a) main_cset_slider_pane_g12

0xbc2f,	// (0x0003a246) main_cset_slider_pane_g13_ParamLimits

0xbc2f,	// (0x0003a246) main_cset_slider_pane_g13

0xbc3b,	// (0x0003a252) main_cset_slider_pane_g14_ParamLimits

0xbc3b,	// (0x0003a252) main_cset_slider_pane_g14

0xbc47,	// (0x0003a25e) main_cset_slider_pane_g15_ParamLimits

0xbc47,	// (0x0003a25e) main_cset_slider_pane_g15

0x2f11,	// (0x00031528) main_cset_slider_pane_t14_ParamLimits

0x2f11,	// (0x00031528) main_cset_slider_pane_t14

0x2f4a,	// (0x00031561) main_cset_slider_pane_t15_ParamLimits

0x2f4a,	// (0x00031561) main_cset_slider_pane_t15

0xc112,	// (0x0003a729) aid_cam4_burst_size_cell_ParamLimits

0xc112,	// (0x0003a729) aid_cam4_burst_size_cell

0xc12e,	// (0x0003a745) grid_cam4_burst_pane_ParamLimits

0xc12e,	// (0x0003a745) grid_cam4_burst_pane

0xc15e,	// (0x0003a775) linegrid_cam4_burst_pane_ParamLimits

0xc15e,	// (0x0003a775) linegrid_cam4_burst_pane

0xc17e,	// (0x0003a795) scroll_pane_cp30_ParamLimits

0xc17e,	// (0x0003a795) scroll_pane_cp30

0xc18a,	// (0x0003a7a1) cell_cam4_burst_pane_ParamLimits

0xc18a,	// (0x0003a7a1) cell_cam4_burst_pane

0x3136,	// (0x0003174d) linegrid_cam4_burst_pane_g1_ParamLimits

0x3136,	// (0x0003174d) linegrid_cam4_burst_pane_g1

0xc1c6,	// (0x0003a7dd) linegrid_cam4_burst_pane_g2_ParamLimits

0xc1c6,	// (0x0003a7dd) linegrid_cam4_burst_pane_g2

0x3143,	// (0x0003175a) linegrid_cam4_burst_pane_g3_ParamLimits

0x3143,	// (0x0003175a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0003e0ab) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0003e0ab) linegrid_cam4_burst_pane_g

0xc1d7,	// (0x0003a7ee) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc1d7,	// (0x0003a7ee) linegrid_cam4_burst_pane_g3_copy1

0x3150,	// (0x00031767) linegrid_cam4_burst_pane_g4_ParamLimits

0x3150,	// (0x00031767) linegrid_cam4_burst_pane_g4

0xc1f1,	// (0x0003a808) linegrid_cam4_burst_pane_g5_ParamLimits

0xc1f1,	// (0x0003a808) linegrid_cam4_burst_pane_g5

0xc202,	// (0x0003a819) linegrid_cam4_burst_pane_g6_ParamLimits

0xc202,	// (0x0003a819) linegrid_cam4_burst_pane_g6

0x315d,	// (0x00031774) linegrid_cam4_burst_pane_g7_ParamLimits

0x315d,	// (0x00031774) linegrid_cam4_burst_pane_g7

0xc213,	// (0x0003a82a) cell_cam4_burst_pane_g1

0x3176,	// (0x0003178d) main_cam5_pane_t1_ParamLimits

0x3176,	// (0x0003178d) main_cam5_pane_t1

0x3188,	// (0x0003179f) main_cam5_pane_t2_ParamLimits

0x3188,	// (0x0003179f) main_cam5_pane_t2

0x319a,	// (0x000317b1) main_cam5_pane_t3_ParamLimits

0x319a,	// (0x000317b1) main_cam5_pane_t3

0x31ac,	// (0x000317c3) main_cam5_pane_t4_ParamLimits

0x31ac,	// (0x000317c3) main_cam5_pane_t4

0x31c4,	// (0x000317db) main_cam5_pane_t5_ParamLimits

0x31c4,	// (0x000317db) main_cam5_pane_t5

0x31d8,	// (0x000317ef) main_cam5_pane_t6_ParamLimits

0x31d8,	// (0x000317ef) main_cam5_pane_t6

0x31ec,	// (0x00031803) main_cam5_pane_t7_ParamLimits

0x31ec,	// (0x00031803) main_cam5_pane_t7

0x31fe,	// (0x00031815) main_cam5_pane_t8_ParamLimits

0x31fe,	// (0x00031815) main_cam5_pane_t8

0x321a,	// (0x00031831) main_cam5_pane_t9_ParamLimits

0x321a,	// (0x00031831) main_cam5_pane_t9

0x322c,	// (0x00031843) main_cam5_pane_t10_ParamLimits

0x322c,	// (0x00031843) main_cam5_pane_t10

0x323e,	// (0x00031855) main_cam5_pane_t11_ParamLimits

0x323e,	// (0x00031855) main_cam5_pane_t11

0x3250,	// (0x00031867) main_cam5_pane_t12_ParamLimits

0x3250,	// (0x00031867) main_cam5_pane_t12

0x3265,	// (0x0003187c) main_cam5_pane_t13_ParamLimits

0x3265,	// (0x0003187c) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0003e0b7) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0003e0b7) main_cam5_pane_t

0x6b00,	// (0x00035117) popup_scut_keymap_window_ParamLimits

0x6b00,	// (0x00035117) popup_scut_keymap_window

0xc226,	// (0x0003a83d) aid_size_cell_brow_shortcut

0xf0ed,	// (0x0003d704) bg_popup_window_pane_cp010

0xc232,	// (0x0003a849) grid_scut_pane

0xc23e,	// (0x0003a855) cell_scut_pane_ParamLimits

0xc23e,	// (0x0003a855) cell_scut_pane

0xc255,	// (0x0003a86c) cell_scut_pane_g1

0x3282,	// (0x00031899) cell_scut_pane_t1

0x3291,	// (0x000318a8) cell_scut_pane_t2

0xc25e,	// (0x0003a875) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0003e0d2) cell_scut_pane_t

0xa35c,	// (0x00038973) main_mup3_pane_g8_ParamLimits

0xa35c,	// (0x00038973) main_mup3_pane_g8

0xb6c2,	// (0x00039cd9) area_vitu2_query_pane_ParamLimits

0xb6c2,	// (0x00039cd9) area_vitu2_query_pane

0x5d81,	// (0x00034398) input_focus_pane_cp08

0x32a0,	// (0x000318b7) area_vitu2_query_pane_g1

0x5dfe,	// (0x00034415) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0003e0d9) area_vitu2_query_pane_g

0xc26c,	// (0x0003a883) area_vitu2_query_pane_t1_ParamLimits

0xc26c,	// (0x0003a883) area_vitu2_query_pane_t1

0xc280,	// (0x0003a897) area_vitu2_query_pane_t2_ParamLimits

0xc280,	// (0x0003a897) area_vitu2_query_pane_t2

0x5e0f,	// (0x00034426) area_vitu2_query_pane_t3_ParamLimits

0x5e0f,	// (0x00034426) area_vitu2_query_pane_t3

0x5e37,	// (0x0003444e) area_vitu2_query_pane_t4_ParamLimits

0x5e37,	// (0x0003444e) area_vitu2_query_pane_t4

0x5e5f,	// (0x00034476) area_vitu2_query_pane_t5_ParamLimits

0x5e5f,	// (0x00034476) area_vitu2_query_pane_t5

0x5e87,	// (0x0003449e) area_vitu2_query_pane_t6_ParamLimits

0x5e87,	// (0x0003449e) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0003e0de) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0003e0de) area_vitu2_query_pane_t

0xc294,	// (0x0003a8ab) bg_button_pane_cp018

0xc2a2,	// (0x0003a8b9) bg_button_pane_cp021

0x5ed3,	// (0x000344ea) bg_button_pane_cp022

0x5ee4,	// (0x000344fb) input_focus_pane_cp09

0x8902,	// (0x00036f19) aid_size_touch_mv_arrow_left

0x892b,	// (0x00036f42) aid_size_touch_mv_arrow_right

0xbc5f,	// (0x0003a276) main_cset_slider_pane_g16_ParamLimits

0xbc5f,	// (0x0003a276) main_cset_slider_pane_g16

0xbc6d,	// (0x0003a284) main_cset_slider_pane_g17_ParamLimits

0xbc6d,	// (0x0003a284) main_cset_slider_pane_g17

0xc213,	// (0x0003a82a) cell_cam4_burst_pane_g1_ParamLimits

0xde67,	// (0x0003c47e) compa_mode_pane

0xbe70,	// (0x0003a487) popup_vtel_slider_window_g3_ParamLimits

0xbe70,	// (0x0003a487) popup_vtel_slider_window_g3

0xbe84,	// (0x0003a49b) popup_vtel_slider_window_g4_ParamLimits

0xbe84,	// (0x0003a49b) popup_vtel_slider_window_g4

0xbe98,	// (0x0003a4af) popup_vtel_slider_window_t1_ParamLimits

0xbe98,	// (0x0003a4af) popup_vtel_slider_window_t1

0xde67,	// (0x0003c47e) main_cl_pane

0x1b87,	// (0x0003019e) popup_imed_adjust2_window_ParamLimits

0x1b5f,	// (0x00030176) bg_tb_trans_pane_cp05_ParamLimits

0x2570,	// (0x00030b87) popup_imed_adjust2_window_g1_ParamLimits

0x257f,	// (0x00030b96) popup_imed_adjust2_window_g2_ParamLimits

0x257f,	// (0x00030b96) popup_imed_adjust2_window_g2

0x258b,	// (0x00030ba2) popup_imed_adjust2_window_g3_ParamLimits

0x258b,	// (0x00030ba2) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0003de58) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0003de58) popup_imed_adjust2_window_g

0x2597,	// (0x00030bae) popup_imed_adjust2_window_t1_ParamLimits

0x25af,	// (0x00030bc6) slider_imed_adjust_pane_ParamLimits

0x25c3,	// (0x00030bda) slider_imed_adjust_pane_g1_ParamLimits

0x25d3,	// (0x00030bea) slider_imed_adjust_pane_g2_ParamLimits

0x25e3,	// (0x00030bfa) slider_imed_adjust_pane_g3_ParamLimits

0x25f4,	// (0x00030c0b) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0003de5f) slider_imed_adjust_pane_g_ParamLimits

0xb44a,	// (0x00039a61) aid_touch_area_cam4_ParamLimits

0xb44a,	// (0x00039a61) aid_touch_area_cam4

0xb45a,	// (0x00039a71) battery_pane_cp01

0xb4e1,	// (0x00039af8) main_camera4_pane_g6_ParamLimits

0xb4e1,	// (0x00039af8) main_camera4_pane_g6

0xb4ff,	// (0x00039b16) main_camera4_pane_t2_ParamLimits

0xb4ff,	// (0x00039b16) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0003df62) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0003df62) main_camera4_pane_t

0xb560,	// (0x00039b77) aid_touch_area_vid4_ParamLimits

0xb560,	// (0x00039b77) aid_touch_area_vid4

0xb5a0,	// (0x00039bb7) main_video4_pane_g5_ParamLimits

0xb5a0,	// (0x00039bb7) main_video4_pane_g5

0xb5c2,	// (0x00039bd9) vid4_progress_pane_ParamLimits

0xb5c2,	// (0x00039bd9) vid4_progress_pane

0x2ed7,	// (0x000314ee) main_cset_slider_pane_g18_ParamLimits

0x2ed7,	// (0x000314ee) main_cset_slider_pane_g18

0x316a,	// (0x00031781) cell_cam4_burst_pane_g2_ParamLimits

0x316a,	// (0x00031781) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0003e0b2) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0003e0b2) cell_cam4_burst_pane_g

0xc2ae,	// (0x0003a8c5) bg_cl_pane_ParamLimits

0xc2ae,	// (0x0003a8c5) bg_cl_pane

0xc2ba,	// (0x0003a8d1) cl_header_pane_ParamLimits

0xc2ba,	// (0x0003a8d1) cl_header_pane

0xc2c6,	// (0x0003a8dd) cl_listscroll_pane_ParamLimits

0xc2c6,	// (0x0003a8dd) cl_listscroll_pane

0x3348,	// (0x0003195f) bg_cl_pane_g1

0x3350,	// (0x00031967) bg_cl_pane_g2

0x3358,	// (0x0003196f) bg_cl_pane_g3

0x3360,	// (0x00031977) bg_cl_pane_g4

0x3368,	// (0x0003197f) bg_cl_pane_g5

0x3370,	// (0x00031987) bg_cl_pane_g6

0x3378,	// (0x0003198f) bg_cl_pane_g7

0x3380,	// (0x00031997) bg_cl_pane_g8

0x3388,	// (0x0003199f) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0003e0ed) bg_cl_pane_g

0xc2d2,	// (0x0003a8e9) aid_height_cl_leading_ParamLimits

0xc2d2,	// (0x0003a8e9) aid_height_cl_leading

0xc2de,	// (0x0003a8f5) aid_height_cl_text_ParamLimits

0xc2de,	// (0x0003a8f5) aid_height_cl_text

0x6b37,	// (0x0003514e) bg_cl_header_pane_ParamLimits

0x6b37,	// (0x0003514e) bg_cl_header_pane

0xc2f6,	// (0x0003a90d) cl_header_pane_g1_ParamLimits

0xc2f6,	// (0x0003a90d) cl_header_pane_g1

0xc303,	// (0x0003a91a) cl_header_pane_t1_ParamLimits

0xc303,	// (0x0003a91a) cl_header_pane_t1

0x3390,	// (0x000319a7) cl_list_pane

0x2eaa,	// (0x000314c1) hc_scroll_pane_cp01

0xe9f0,	// (0x0003d007) bg_cl_header_pane_g1

0x2d90,	// (0x000313a7) bg_cl_header_pane_g2

0xea10,	// (0x0003d027) bg_cl_header_pane_g3

0x2da0,	// (0x000313b7) bg_cl_header_pane_g4

0x2d98,	// (0x000313af) bg_cl_header_pane_g5

0x3035,	// (0x0003164c) bg_cl_header_pane_g6

0x2db8,	// (0x000313cf) bg_cl_header_pane_g7

0x2dc0,	// (0x000313d7) bg_cl_header_pane_g8

0x2db0,	// (0x000313c7) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0003e100) bg_cl_header_pane_g

0xc315,	// (0x0003a92c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc315,	// (0x0003a92c) hc_cl_list_double_graphic_heading_pane

0xc326,	// (0x0003a93d) hc_cl_list_single_graphic_pane_ParamLimits

0xc326,	// (0x0003a93d) hc_cl_list_single_graphic_pane

0xc33f,	// (0x0003a956) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc33f,	// (0x0003a956) hc_cl_list_single_graphic_pane_g1

0xc34b,	// (0x0003a962) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc34b,	// (0x0003a962) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0003e113) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0003e113) hc_cl_list_single_graphic_pane_g

0xc35f,	// (0x0003a976) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc35f,	// (0x0003a976) hc_cl_list_single_graphic_pane_t1

0xc33f,	// (0x0003a956) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc33f,	// (0x0003a956) hc_cl_list_double_graphic_heading_pane_g1

0xc374,	// (0x0003a98b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc374,	// (0x0003a98b) hc_cl_list_double_graphic_heading_pane_g2

0xc388,	// (0x0003a99f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc388,	// (0x0003a99f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0003e118) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0003e118) hc_cl_list_double_graphic_heading_pane_g

0xc39c,	// (0x0003a9b3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc39c,	// (0x0003a9b3) hc_cl_list_double_graphic_heading_pane_t1

0xc3b1,	// (0x0003a9c8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc3b1,	// (0x0003a9c8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0003e11f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0003e11f) hc_cl_list_double_graphic_heading_pane_t

0xc3d8,	// (0x0003a9ef) vid4_progress_pane_g1

0xc3e4,	// (0x0003a9fb) vid4_progress_pane_g2

0xc3f0,	// (0x0003aa07) vid4_progress_pane_g3

0xc3ff,	// (0x0003aa16) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0003e124) vid4_progress_pane_g

0xc41d,	// (0x0003aa34) vid4_progress_pane_t1

0xc433,	// (0x0003aa4a) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0003e12f) vid4_progress_pane_t

0xc45e,	// (0x0003aa75) wait_bar_pane_cp07

0x1e58,	// (0x0003046f) blid_firmament_pane_ParamLimits

0x1e9b,	// (0x000304b2) popup_blid_sat_info2_window_g1

0x1ebf,	// (0x000304d6) popup_blid_sat_info2_window_t3

0x1ecd,	// (0x000304e4) popup_blid_sat_info2_window_t4

0x1edb,	// (0x000304f2) popup_blid_sat_info2_window_t5

0x1ee9,	// (0x00030500) popup_blid_sat_info2_window_t6

0x1ef9,	// (0x00030510) popup_blid_sat_info2_window_t7

0x1f07,	// (0x0003051e) popup_blid_sat_info2_window_t8

0x1f15,	// (0x0003052c) popup_blid_sat_info2_window_t9

0x1f23,	// (0x0003053a) popup_blid_sat_info2_window_t10

0x1fe5,	// (0x000305fc) aid_firma_cardinal_ParamLimits

0x1ff9,	// (0x00030610) blid_firmament_pane_t1_ParamLimits

0x2010,	// (0x00030627) blid_firmament_pane_t2_ParamLimits

0x2027,	// (0x0003063e) blid_firmament_pane_t3_ParamLimits

0x203e,	// (0x00030655) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0003dd51) blid_firmament_pane_t_ParamLimits

0x2055,	// (0x0003066c) blid_sat_info_pane_ParamLimits

0xf121,	// (0x0003d738) main_cam_set_pane_ParamLimits

0xaae1,	// (0x000390f8) aid_size_cell_colour_35_ParamLimits

0xaafb,	// (0x00039112) aid_size_cell_colour_112_ParamLimits

0xab12,	// (0x00039129) aid_size_cell_effect_ParamLimits

0xf121,	// (0x0003d738) bg_tb_trans_pane_cp02_ParamLimits

0x0663,	// (0x0002ec7a) heading_imed_pane_ParamLimits

0xab2c,	// (0x00039143) listscroll_imed_pane_ParamLimits

0x1191,	// (0x0002f7a8) popup_call2_audio_first_window_g5_ParamLimits

0x1191,	// (0x0002f7a8) popup_call2_audio_first_window_g5

0xb207,	// (0x0003981e) aid_size_touch_image3_arrow_left_ParamLimits

0xb207,	// (0x0003981e) aid_size_touch_image3_arrow_left

0xb21d,	// (0x00039834) aid_size_touch_image3_arrow_right_ParamLimits

0xb21d,	// (0x00039834) aid_size_touch_image3_arrow_right

0xc449,	// (0x0003aa60) vid4_progress_pane_t3

0xadc9,	// (0x000393e0) main_hwr_training_symbol_option_pane_ParamLimits

0xadc9,	// (0x000393e0) main_hwr_training_symbol_option_pane

0x285d,	// (0x00030e74) popup_hwr_training_preview_window_ParamLimits

0x285d,	// (0x00030e74) popup_hwr_training_preview_window

0xae2a,	// (0x00039441) hwr_training_navi_pane_g5_ParamLimits

0xae2a,	// (0x00039441) hwr_training_navi_pane_g5

0x2d70,	// (0x00031387) popup_char_count_window

0x6b37,	// (0x0003514e) bg_popup_sub_pane_cp20_ParamLimits

0xbf8e,	// (0x0003a5a5) list_vitu2_match_list_pane_ParamLimits

0xbf9a,	// (0x0003a5b1) vitu2_page_scroll_pane_ParamLimits

0xbf9a,	// (0x0003a5b1) vitu2_page_scroll_pane

0x3491,	// (0x00031aa8) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3491,	// (0x00031aa8) list_single_hwr_training_symbol_option_pane

0x34a4,	// (0x00031abb) list_single_hwr_training_symbol_option_pane_g1

0x34ac,	// (0x00031ac3) list_single_hwr_training_symbol_option_pane_t1

0x34ba,	// (0x00031ad1) bg_button_pane_cp023

0x34c3,	// (0x00031ada) bg_button_pane_cp024

0xc46e,	// (0x0003aa85) vitu2_page_scroll_pane_g1

0xc476,	// (0x0003aa8d) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0003e136) vitu2_page_scroll_pane_g

0xc47e,	// (0x0003aa95) vitu2_page_scroll_pane_t1

0x34f6,	// (0x00031b0d) popup_char_count_window_g1

0x34ff,	// (0x00031b16) popup_char_count_window_g2

0x3508,	// (0x00031b1f) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0003e13b) popup_char_count_window_g

0x3511,	// (0x00031b28) popup_char_count_window_t1

0xde67,	// (0x0003c47e) main_vded2_pane

0x255c,	// (0x00030b73) aid_size_cell_imed_line

0x2566,	// (0x00030b7d) grid_imed_line_width_pane

0xb616,	// (0x00039c2d) vid4_indicators_pane_g4

0x351f,	// (0x00031b36) cell_imed_line_width_pane_ParamLimits

0x351f,	// (0x00031b36) cell_imed_line_width_pane

0x3533,	// (0x00031b4a) cell_imed_line_width_pane_g1

0x1e06,	// (0x0003041d) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0003e142) cell_imed_line_width_pane_g

0xc48d,	// (0x0003aaa4) main_vded2_pane_g1_ParamLimits

0xc48d,	// (0x0003aaa4) main_vded2_pane_g1

0xc49a,	// (0x0003aab1) main_vded2_pane_g2_ParamLimits

0xc49a,	// (0x0003aab1) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0003e147) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0003e147) main_vded2_pane_g

0xc4a8,	// (0x0003aabf) vded2_slider_pane_ParamLimits

0xc4a8,	// (0x0003aabf) vded2_slider_pane

0xc4b5,	// (0x0003aacc) aid_size_touch_vded2_end

0xc4bf,	// (0x0003aad6) aid_size_touch_vded2_playhead

0x353c,	// (0x00031b53) aid_size_touch_vded2_start

0x3544,	// (0x00031b5b) vded2_slider_bg_pane

0x354d,	// (0x00031b64) vded2_slider_pane_g1

0x3556,	// (0x00031b6d) vded2_slider_pane_g2

0xc4c7,	// (0x0003aade) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0003e14c) vded2_slider_pane_g

0x355e,	// (0x00031b75) vded2_slider_bg_pane_g1

0x3567,	// (0x00031b7e) vded2_slider_bg_pane_g2

0x3570,	// (0x00031b87) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0003e153) vded2_slider_bg_pane_g

0x8f66,	// (0x0003757d) aid_postcard_touch_down_pane_ParamLimits

0x8f66,	// (0x0003757d) aid_postcard_touch_down_pane

0x8f76,	// (0x0003758d) aid_postcard_touch_up_pane_ParamLimits

0x8f76,	// (0x0003758d) aid_postcard_touch_up_pane

0xde67,	// (0x0003c47e) main_blid2_pane

0x1b6d,	// (0x00030184) popup_blid2_search_window

0xde67,	// (0x0003c47e) blid2_gps_pane

0xde67,	// (0x0003c47e) blid2_navig_pane

0xde67,	// (0x0003c47e) blid2_search_pane

0xde67,	// (0x0003c47e) blid2_tripm_pane

0xc4d0,	// (0x0003aae7) blid2_search_pane_g1_ParamLimits

0xc4d0,	// (0x0003aae7) blid2_search_pane_g1

0xc4e0,	// (0x0003aaf7) blid2_search_pane_t1_ParamLimits

0xc4e0,	// (0x0003aaf7) blid2_search_pane_t1

0xc4f2,	// (0x0003ab09) aid_size_cell_blid2_gps_ParamLimits

0xc4f2,	// (0x0003ab09) aid_size_cell_blid2_gps

0xc502,	// (0x0003ab19) blid2_gps_pane_g1_ParamLimits

0xc502,	// (0x0003ab19) blid2_gps_pane_g1

0xc50e,	// (0x0003ab25) grid_blid2_satellite_pane_ParamLimits

0xc50e,	// (0x0003ab25) grid_blid2_satellite_pane

0xc51e,	// (0x0003ab35) blid2_navig_pane_g1_ParamLimits

0xc51e,	// (0x0003ab35) blid2_navig_pane_g1

0xc52a,	// (0x0003ab41) blid2_navig_pane_t1_ParamLimits

0xc52a,	// (0x0003ab41) blid2_navig_pane_t1

0xc53c,	// (0x0003ab53) blid2_navig_pane_t2_ParamLimits

0xc53c,	// (0x0003ab53) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0003e15a) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0003e15a) blid2_navig_pane_t

0xc54e,	// (0x0003ab65) blid2_navig_ring_pane_ParamLimits

0xc54e,	// (0x0003ab65) blid2_navig_ring_pane

0xc55e,	// (0x0003ab75) blid2_speed_pane_ParamLimits

0xc55e,	// (0x0003ab75) blid2_speed_pane

0xc56a,	// (0x0003ab81) blid2_tripm_pane_g1_ParamLimits

0xc56a,	// (0x0003ab81) blid2_tripm_pane_g1

0xc57a,	// (0x0003ab91) blid2_tripm_pane_g2_ParamLimits

0xc57a,	// (0x0003ab91) blid2_tripm_pane_g2

0xc586,	// (0x0003ab9d) blid2_tripm_pane_g3_ParamLimits

0xc586,	// (0x0003ab9d) blid2_tripm_pane_g3

0xc592,	// (0x0003aba9) blid2_tripm_pane_g4_ParamLimits

0xc592,	// (0x0003aba9) blid2_tripm_pane_g4

0xc59e,	// (0x0003abb5) blid2_tripm_pane_g5_ParamLimits

0xc59e,	// (0x0003abb5) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0003e15f) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0003e15f) blid2_tripm_pane_g

0xc5ba,	// (0x0003abd1) blid2_tripm_pane_t1_ParamLimits

0xc5ba,	// (0x0003abd1) blid2_tripm_pane_t1

0xc5ce,	// (0x0003abe5) blid2_tripm_pane_t2_ParamLimits

0xc5ce,	// (0x0003abe5) blid2_tripm_pane_t2

0xc5e0,	// (0x0003abf7) blid2_tripm_pane_t3_ParamLimits

0xc5e0,	// (0x0003abf7) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0003e16c) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0003e16c) blid2_tripm_pane_t

0xc612,	// (0x0003ac29) cell_blid2_satellite_pane_ParamLimits

0xc612,	// (0x0003ac29) cell_blid2_satellite_pane

0xc62c,	// (0x0003ac43) cell_blid2_satellite_pane_g1

0x3579,	// (0x00031b90) cell_blid2_satellite_pane_t1

0x2065,	// (0x0003067c) blid2_speed_pane_g1

0x3587,	// (0x00031b9e) blid2_speed_pane_t1

0x3595,	// (0x00031bac) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0003e175) blid2_speed_pane_t

0x2065,	// (0x0003067c) blid2_navig_ring_pane_g1

0xc635,	// (0x0003ac4c) blid2_navig_ring_pane_g2

0xc63d,	// (0x0003ac54) blid2_navig_ring_pane_g3

0xc645,	// (0x0003ac5c) blid2_navig_ring_pane_g4

0xc64d,	// (0x0003ac64) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0003e17a) blid2_navig_ring_pane_g

0xde67,	// (0x0003c47e) bg_popup_window_pane_cp011

0x35a3,	// (0x00031bba) popup_blid2_search_window_g1

0x35ab,	// (0x00031bc2) popup_blid2_search_window_t1

0x35b9,	// (0x00031bd0) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0003e185) popup_blid2_search_window_t

0xe8ff,	// (0x0003cf16) main_browser_pane_g1

0xe614,	// (0x0003cc2b) main_browser_pane_ParamLimits

0xf121,	// (0x0003d738) bg_button_pane_cp011_ParamLimits

0xb880,	// (0x00039e97) cell_vitu2_function_pane_g1_ParamLimits

0xf121,	// (0x0003d738) bg_popup_sub_pane_cp22_ParamLimits

0x5d81,	// (0x00034398) input_focus_pane_cp08_ParamLimits

0xc0d9,	// (0x0003a6f0) popup_vitu2_query_button_pane_ParamLimits

0xc0d9,	// (0x0003a6f0) popup_vitu2_query_button_pane

0x5d77,	// (0x0003438e) popup_vitu2_query_input_button_pane

0x30c0,	// (0x000316d7) popup_vitu2_query_window_g1_ParamLimits

0x5d8e,	// (0x000343a5) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0003e08c) popup_vitu2_query_window_g_ParamLimits

0xde67,	// (0x0003c47e) bg_button_pane_cp026

0xc655,	// (0x0003ac6c) popup_vitu2_query_input_button_pane_g1

0xde67,	// (0x0003c47e) bg_button_pane_cp025

0x35c7,	// (0x00031bde) popup_vitu2_query_button_pane_t1

0xa0b3,	// (0x000386ca) main_mp3_pane_t6

0xa0c3,	// (0x000386da) popup_slider_window_cp01

0xb511,	// (0x00039b28) cam4_battery_pane

0xb5ee,	// (0x00039c05) cam4_battery_pane_cp02

0xc3c6,	// (0x0003a9dd) cam4_battery_pane_cp01

0xc3d0,	// (0x0003a9e7) cam4_battery_pane_cp03

0x2065,	// (0x0003067c) cam4_battery_pane_g1

0x2b6a,	// (0x00031181) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0003e18a) cam4_battery_pane_g

0x1f31,	// (0x00030548) popup_blid_sat_info2_window_t11

0x8902,	// (0x00036f19) aid_size_touch_mv_arrow_left_ParamLimits

0x892b,	// (0x00036f42) aid_size_touch_mv_arrow_right_ParamLimits

0xf04d,	// (0x0003d664) navi_pane_g1_ParamLimits

0x8954,	// (0x00036f6b) navi_pane_g2_ParamLimits

0x8982,	// (0x00036f99) navi_pane_g3_ParamLimits

0xf44c,	// (0x0003da63) navi_pane_g_ParamLimits

0x89dc,	// (0x00036ff3) navi_pane_mv_t1_ParamLimits

0xab38,	// (0x0003914f) grid_imed_effect_pane_ParamLimits

0xe848,	// (0x0003ce5f) aid_placing_vt_slider_lsc

0xe850,	// (0x0003ce67) aid_placing_vt_slider_prt

0xf121,	// (0x0003d738) bg_tb_trans_pane_cp01_ParamLimits

0x21f1,	// (0x00030808) popup_image_details_window_g1_ParamLimits

0x2204,	// (0x0003081b) popup_image_details_window_g2_ParamLimits

0x2219,	// (0x00030830) popup_image_details_window_g3_ParamLimits

0x2219,	// (0x00030830) popup_image_details_window_g3

0xf77f,	// (0x0003dd96) popup_image_details_window_g_ParamLimits

0x222d,	// (0x00030844) popup_image_details_window_t1_ParamLimits

0x223f,	// (0x00030856) popup_image_details_window_t2_ParamLimits

0x2258,	// (0x0003086f) popup_image_details_window_t3_ParamLimits

0x226c,	// (0x00030883) popup_image_details_window_t4_ParamLimits

0x2287,	// (0x0003089e) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0003dd9d) popup_image_details_window_t_ParamLimits

0xc2ea,	// (0x0003a901) cl_header_name_pane_ParamLimits

0xc2ea,	// (0x0003a901) cl_header_name_pane

0xc65d,	// (0x0003ac74) cl_header_name_pane_t1_ParamLimits

0xc65d,	// (0x0003ac74) cl_header_name_pane_t1

0xc674,	// (0x0003ac8b) cl_header_name_pane_t2_ParamLimits

0xc674,	// (0x0003ac8b) cl_header_name_pane_t2

0xc69e,	// (0x0003acb5) cl_header_name_pane_t3_ParamLimits

0xc69e,	// (0x0003acb5) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0003e18f) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0003e18f) cl_header_name_pane_t

0x89ad,	// (0x00036fc4) navi_pane_mv_g2_ParamLimits

0x2d10,	// (0x00031327) field_vitu2_entry_pane_g1_ParamLimits

0x2d1c,	// (0x00031333) field_vitu2_entry_pane_g2_ParamLimits

0x2d28,	// (0x0003133f) field_vitu2_entry_pane_g3_ParamLimits

0x2d28,	// (0x0003133f) field_vitu2_entry_pane_g3

0xf974,	// (0x0003df8b) field_vitu2_entry_pane_g_ParamLimits

0xb810,	// (0x00039e27) cell_vitu2_itu_pane_g1_ParamLimits

0xb820,	// (0x00039e37) cell_vitu2_itu_pane_g2_ParamLimits

0xb820,	// (0x00039e37) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0003df97) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0003df97) cell_vitu2_itu_pane_g

0xf121,	// (0x0003d738) bg_vkb2_func_pane_cp05_ParamLimits

0xf121,	// (0x0003d738) bg_vkb2_func_pane_cp05

0xf121,	// (0x0003d738) bg_vkb2_func_pane_cp03

0xf121,	// (0x0003d738) bg_vkb2_func_pane_cp04

0xf121,	// (0x0003d738) bg_vkb2_func_pane_cp10_ParamLimits

0xf121,	// (0x0003d738) bg_vkb2_func_pane_cp10

0x5ed3,	// (0x000344ea) bg_vkb2_func_pane_cp08

0xc294,	// (0x0003a8ab) bg_vkb2_func_pane_cp06

0xc2a2,	// (0x0003a8b9) bg_vkb2_func_pane_cp07

0x34cc,	// (0x00031ae3) bg_vkb2_func_pane_cp11_ParamLimits

0x34cc,	// (0x00031ae3) bg_vkb2_func_pane_cp11

0x34e1,	// (0x00031af8) bg_vkb2_func_pane_cp12_ParamLimits

0x34e1,	// (0x00031af8) bg_vkb2_func_pane_cp12

0xde67,	// (0x0003c47e) bg_vkb2_func_pane_cp09

0x2d90,	// (0x000313a7) bg_vkb2_func_pane_g1

0xea10,	// (0x0003d027) bg_vkb2_func_pane_g2

0x2d98,	// (0x000313af) bg_vkb2_func_pane_g3

0x2da0,	// (0x000313b7) bg_vkb2_func_pane_g4

0x3035,	// (0x0003164c) bg_vkb2_func_pane_g5

0x2db8,	// (0x000313cf) bg_vkb2_func_pane_g6

0x2dc0,	// (0x000313d7) bg_vkb2_func_pane_g7

0x2db0,	// (0x000313c7) bg_vkb2_func_pane_g8

0xe9f0,	// (0x0003d007) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0003e196) bg_vkb2_func_pane_g

0xc5ac,	// (0x0003abc3) blid2_tripm_pane_g6_ParamLimits

0xc5ac,	// (0x0003abc3) blid2_tripm_pane_g6

0x2b24,	// (0x0003113b) mp4_progress_pane_g1

0xc606,	// (0x0003ac1d) blid2_tripm_values_pane_ParamLimits

0xc606,	// (0x0003ac1d) blid2_tripm_values_pane

0xc6c3,	// (0x0003acda) blid2_tripm_values_pane_t1

0xc6d1,	// (0x0003ace8) blid2_tripm_values_pane_t2

0xc6df,	// (0x0003acf6) blid2_tripm_values_pane_t3

0xc6ed,	// (0x0003ad04) blid2_tripm_values_pane_t4

0xc6fb,	// (0x0003ad12) blid2_tripm_values_pane_t5

0xc709,	// (0x0003ad20) blid2_tripm_values_pane_t6

0xc717,	// (0x0003ad2e) blid2_tripm_values_pane_t7

0xc725,	// (0x0003ad3c) blid2_tripm_values_pane_t8

0xc733,	// (0x0003ad4a) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0003e1a9) blid2_tripm_values_pane_t

0x7868,	// (0x00035e7f) call_video_pane_t1_ParamLimits

0x7882,	// (0x00035e99) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0003d8ec) call_video_pane_t_ParamLimits

0x5b03,	// (0x0003411a) msg_header_pane_g1_ParamLimits

0x0851,	// (0x0002ee68) msg_header_pane_g2_ParamLimits

0x0851,	// (0x0002ee68) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0003db06) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0003db06) msg_header_pane_g

0xe614,	// (0x0003cc2b) main_clock2_pane_ParamLimits

0xa8c8,	// (0x00038edf) grid_clock2_toolbar_pane_ParamLimits

0xa8c8,	// (0x00038edf) grid_clock2_toolbar_pane

0xa8c8,	// (0x00038edf) listscroll_clock2_pane_ParamLimits

0xa8c8,	// (0x00038edf) listscroll_clock2_pane

0xa975,	// (0x00038f8c) main_clock2_pane_t3_ParamLimits

0xa975,	// (0x00038f8c) main_clock2_pane_t3

0xa987,	// (0x00038f9e) main_clock2_pane_t4_ParamLimits

0xa987,	// (0x00038f9e) main_clock2_pane_t4

0x35d5,	// (0x00031bec) cell_clock2_toolbar_pane

0x35dd,	// (0x00031bf4) cell_clock2_toolbar_pane_cp01

0x35dd,	// (0x00031bf4) cell_clock2_toolbar_pane_cp02

0x35e5,	// (0x00031bfc) cell_clock2_toolbar_pane_cp03

0x35ed,	// (0x00031c04) list_clock2_pane

0xefa4,	// (0x0003d5bb) scroll_pane_cp10

0x35f5,	// (0x00031c0c) list_single_clock2_pane_ParamLimits

0x35f5,	// (0x00031c0c) list_single_clock2_pane

0xf0ed,	// (0x0003d704) list_highlight_pane_cp08

0x3602,	// (0x00031c19) list_single_clock2_pane_t1

0x3610,	// (0x00031c27) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0003e1bc) list_single_clock2_pane_t

0xde67,	// (0x0003c47e) bg_button_pane_cp10

0x361e,	// (0x00031c35) cell_clock2_toolbar_pane_g1

0x8ec8,	// (0x000374df) aid_main_viewer_pane_g1_ParamLimits

0x8ec8,	// (0x000374df) aid_main_viewer_pane_g1

0x8ed4,	// (0x000374eb) aid_main_viewer_pane_g2_ParamLimits

0x8ed4,	// (0x000374eb) aid_main_viewer_pane_g2

0x8ee0,	// (0x000374f7) aid_main_viewer_pane_g3_ParamLimits

0x8ee0,	// (0x000374f7) aid_main_viewer_pane_g3

0x8ef1,	// (0x00037508) aid_main_viewer_pane_g4_ParamLimits

0x8ef1,	// (0x00037508) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0003db17) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0003db17) aid_main_viewer_pane_g

0x9671,	// (0x00037c88) main_calc_pane_ParamLimits

0x967e,	// (0x00037c95) main_dialer2_pane_ParamLimits

0xde67,	// (0x0003c47e) main_cam6_pane

0xde67,	// (0x0003c47e) main_vid6_pane

0xa8d4,	// (0x00038eeb) listscroll_gen_pane_cp06_ParamLimits

0xa8d4,	// (0x00038eeb) listscroll_gen_pane_cp06

0xa999,	// (0x00038fb0) main_clock2_pane_t5_ParamLimits

0xa999,	// (0x00038fb0) main_clock2_pane_t5

0xa9e2,	// (0x00038ff9) aid_call2_pane_cp10_ParamLimits

0xa9f4,	// (0x0003900b) aid_call_pane_cp10_ParamLimits

0xf022,	// (0x0003d639) popup_clock_analogue_window_cp10_g1_ParamLimits

0xf022,	// (0x0003d639) popup_clock_analogue_window_cp10_g2_ParamLimits

0xaa06,	// (0x0003901d) popup_clock_analogue_window_cp10_g3_ParamLimits

0xaa06,	// (0x0003901d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xf022,	// (0x0003d639) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0003de4d) popup_clock_analogue_window_cp10_g_ParamLimits

0xaa18,	// (0x0003902f) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb1b4,	// (0x000397cb) cell_dialer2_keypad_pane_g2_ParamLimits

0xb1b4,	// (0x000397cb) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0003df33) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0003df33) cell_dialer2_keypad_pane_g

0xb1d0,	// (0x000397e7) cell_dialer2_keypad_pane_t1

0xbb4b,	// (0x0003a162) main_cset_text2_pane_ParamLimits

0xbb4b,	// (0x0003a162) main_cset_text2_pane

0x32a0,	// (0x000318b7) area_vitu2_query_pane_g1_ParamLimits

0x5dfe,	// (0x00034415) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0003e0d9) area_vitu2_query_pane_g_ParamLimits

0x5eaf,	// (0x000344c6) area_vitu2_query_pane_t7_ParamLimits

0x5eaf,	// (0x000344c6) area_vitu2_query_pane_t7

0xc294,	// (0x0003a8ab) bg_button_pane_cp018_ParamLimits

0xc2a2,	// (0x0003a8b9) bg_button_pane_cp021_ParamLimits

0x5ed3,	// (0x000344ea) bg_button_pane_cp022_ParamLimits

0x5ed3,	// (0x000344ea) bg_vkb2_func_pane_cp08_ParamLimits

0xc294,	// (0x0003a8ab) bg_vkb2_func_pane_cp06_ParamLimits

0xc2a2,	// (0x0003a8b9) bg_vkb2_func_pane_cp07_ParamLimits

0x5ee4,	// (0x000344fb) input_focus_pane_cp09_ParamLimits

0xc741,	// (0x0003ad58) cam6_autofocus_pane_ParamLimits

0xc741,	// (0x0003ad58) cam6_autofocus_pane

0xc763,	// (0x0003ad7a) cam6_image_uncrop_pane_ParamLimits

0xc763,	// (0x0003ad7a) cam6_image_uncrop_pane

0xc790,	// (0x0003ada7) cam6_indi_pane_ParamLimits

0xc790,	// (0x0003ada7) cam6_indi_pane

0xc7aa,	// (0x0003adc1) cam6_mode_pane_ParamLimits

0xc7aa,	// (0x0003adc1) cam6_mode_pane

0xc7be,	// (0x0003add5) cam6_timer_pane_ParamLimits

0xc7be,	// (0x0003add5) cam6_timer_pane

0xc7ca,	// (0x0003ade1) cam6_zoom_pane_ParamLimits

0xc7ca,	// (0x0003ade1) cam6_zoom_pane

0xb570,	// (0x00039b87) cam6_mode_pane_g1_ParamLimits

0xb570,	// (0x00039b87) cam6_mode_pane_g1

0xb588,	// (0x00039b9f) cam6_mode_pane_g2_ParamLimits

0xb588,	// (0x00039b9f) cam6_mode_pane_g2

0xb594,	// (0x00039bab) cam6_mode_pane_g3_ParamLimits

0xb594,	// (0x00039bab) cam6_mode_pane_g3

0xb5a0,	// (0x00039bb7) cam6_mode_pane_g4_ParamLimits

0xb5a0,	// (0x00039bb7) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0003e1c1) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0003e1c1) cam6_mode_pane_g

0x3634,	// (0x00031c4b) bg_tb_trans_pane_cp08_ParamLimits

0x3634,	// (0x00031c4b) bg_tb_trans_pane_cp08

0x3642,	// (0x00031c59) cam6_battery_pane_ParamLimits

0x3642,	// (0x00031c59) cam6_battery_pane

0x3658,	// (0x00031c6f) cam6_indi_pane_g1_ParamLimits

0x3658,	// (0x00031c6f) cam6_indi_pane_g1

0x366a,	// (0x00031c81) cam6_indi_pane_g2_ParamLimits

0x366a,	// (0x00031c81) cam6_indi_pane_g2

0x367c,	// (0x00031c93) cam6_indi_pane_g3_ParamLimits

0x367c,	// (0x00031c93) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0003e1ca) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0003e1ca) cam6_indi_pane_g

0x368e,	// (0x00031ca5) cam6_indi_pane_t1_ParamLimits

0x368e,	// (0x00031ca5) cam6_indi_pane_t1

0xb64c,	// (0x00039c63) cam6_autofocus_pane_g1

0xb654,	// (0x00039c6b) cam6_autofocus_pane_g2

0xb65c,	// (0x00039c73) cam6_autofocus_pane_g3

0xb664,	// (0x00039c7b) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0003e1d1) cam6_autofocus_pane_g

0x36b4,	// (0x00031ccb) cam6_timer_pane_g1

0x36bc,	// (0x00031cd3) cam6_timer_pane_t1

0x36ca,	// (0x00031ce1) cam6_zoom_cont_pane

0x36d2,	// (0x00031ce9) cam6_zoom_pane_g1

0x36da,	// (0x00031cf1) cam6_zoom_pane_g2

0xc7e2,	// (0x0003adf9) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0003e1da) cam6_zoom_pane_g

0x2065,	// (0x0003067c) cam6_battery_pane_g1

0x2065,	// (0x0003067c) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0003dd5a) cam6_battery_pane_g

0x36e2,	// (0x00031cf9) cam6_zoom_cont_pane_g1

0x36eb,	// (0x00031d02) cam6_zoom_cont_pane_g2

0x36f4,	// (0x00031d0b) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0003e1e1) cam6_zoom_cont_pane_g

0xc7ff,	// (0x0003ae16) cam6_mode_pane_cp_ParamLimits

0xc7ff,	// (0x0003ae16) cam6_mode_pane_cp

0xc7ca,	// (0x0003ade1) cam6_zoom_pane_cp_ParamLimits

0xc7ca,	// (0x0003ade1) cam6_zoom_pane_cp

0xc813,	// (0x0003ae2a) vid6_image_uncrop_cif_pane_ParamLimits

0xc813,	// (0x0003ae2a) vid6_image_uncrop_cif_pane

0xc83f,	// (0x0003ae56) vid6_image_uncrop_nhd_pane_ParamLimits

0xc83f,	// (0x0003ae56) vid6_image_uncrop_nhd_pane

0xc763,	// (0x0003ad7a) vid6_image_uncrop_vga_pane_ParamLimits

0xc763,	// (0x0003ad7a) vid6_image_uncrop_vga_pane

0xc85c,	// (0x0003ae73) vid6_image_uncrop_wvga_pane_ParamLimits

0xc85c,	// (0x0003ae73) vid6_image_uncrop_wvga_pane

0xc879,	// (0x0003ae90) vid6_indi_pane_ParamLimits

0xc879,	// (0x0003ae90) vid6_indi_pane

0x3634,	// (0x00031c4b) bg_tb_trans_pane_cp09_ParamLimits

0x3634,	// (0x00031c4b) bg_tb_trans_pane_cp09

0x370c,	// (0x00031d23) cam6_battery_pane_cp_ParamLimits

0x370c,	// (0x00031d23) cam6_battery_pane_cp

0x3718,	// (0x00031d2f) vid6_indi_pane_g1_ParamLimits

0x3718,	// (0x00031d2f) vid6_indi_pane_g1

0x372a,	// (0x00031d41) vid6_indi_pane_g2_ParamLimits

0x372a,	// (0x00031d41) vid6_indi_pane_g2

0x373c,	// (0x00031d53) vid6_indi_pane_g3_ParamLimits

0x373c,	// (0x00031d53) vid6_indi_pane_g3

0x3751,	// (0x00031d68) vid6_indi_pane_g4_ParamLimits

0x3751,	// (0x00031d68) vid6_indi_pane_g4

0x3766,	// (0x00031d7d) vid6_indi_pane_g5_ParamLimits

0x3766,	// (0x00031d7d) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0003e1e8) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0003e1e8) vid6_indi_pane_g

0x3780,	// (0x00031d97) vid6_indi_pane_t1_ParamLimits

0x3780,	// (0x00031d97) vid6_indi_pane_t1

0x3796,	// (0x00031dad) vid6_indi_pane_t2_ParamLimits

0x3796,	// (0x00031dad) vid6_indi_pane_t2

0x37be,	// (0x00031dd5) vid6_indi_pane_t3_ParamLimits

0x37be,	// (0x00031dd5) vid6_indi_pane_t3

0x37e6,	// (0x00031dfd) vid6_indi_pane_t4_ParamLimits

0x37e6,	// (0x00031dfd) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0003e1f3) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0003e1f3) vid6_indi_pane_t

0x380a,	// (0x00031e21) wait_bar_pane_cp08

0xc89e,	// (0x0003aeb5) main_cset_text2_pane_t1_ParamLimits

0xc89e,	// (0x0003aeb5) main_cset_text2_pane_t1

0xc7ea,	// (0x0003ae01) listscroll_gen_pane_cp06_t1_ParamLimits

0xc7ea,	// (0x0003ae01) listscroll_gen_pane_cp06_t1

0xde67,	// (0x0003c47e) main_cam6_set_pane

0x22d1,	// (0x000308e8) bg_tb_trans_pane_cp06_ParamLimits

0xb519,	// (0x00039b30) cam4_indicators_pane_g1_ParamLimits

0xb526,	// (0x00039b3d) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0003df67) cam4_indicators_pane_g_ParamLimits

0xb546,	// (0x00039b5d) cam4_indicators_pane_t1_ParamLimits

0xf121,	// (0x0003d738) bg_tb_trans_pane_cp07_ParamLimits

0xb519,	// (0x00039b30) vid4_indicators_pane_g1_ParamLimits

0xb5f8,	// (0x00039c0f) vid4_indicators_pane_g2_ParamLimits

0xb605,	// (0x00039c1c) vid4_indicators_pane_g3_ParamLimits

0xb616,	// (0x00039c2d) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0003df79) vid4_indicators_pane_g_ParamLimits

0xb632,	// (0x00039c49) vid4_indicators_pane_t1_ParamLimits

0xc3d8,	// (0x0003a9ef) vid4_progress_pane_g1_ParamLimits

0xc3e4,	// (0x0003a9fb) vid4_progress_pane_g2_ParamLimits

0xc3f0,	// (0x0003aa07) vid4_progress_pane_g3_ParamLimits

0xc3ff,	// (0x0003aa16) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0003e124) vid4_progress_pane_g_ParamLimits

0xc41d,	// (0x0003aa34) vid4_progress_pane_t1_ParamLimits

0xc433,	// (0x0003aa4a) vid4_progress_pane_t2_ParamLimits

0xc449,	// (0x0003aa60) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0003e12f) vid4_progress_pane_t_ParamLimits

0xc45e,	// (0x0003aa75) wait_bar_pane_cp07_ParamLimits

0xc8d1,	// (0x0003aee8) main_cam6_set_pane_g2_ParamLimits

0xc8d1,	// (0x0003aee8) main_cam6_set_pane_g2

0xc8dd,	// (0x0003aef4) main_cset6_listscroll_pane_ParamLimits

0xc8dd,	// (0x0003aef4) main_cset6_listscroll_pane

0xc908,	// (0x0003af1f) main_cset6_slider_pane_ParamLimits

0xc908,	// (0x0003af1f) main_cset6_slider_pane

0xc914,	// (0x0003af2b) main_cset6_text2_pane_ParamLimits

0xc914,	// (0x0003af2b) main_cset6_text2_pane

0x3819,	// (0x00031e30) main_cset6_text_pane

0x3821,	// (0x00031e38) main_cset_list_pane_copy1_ParamLimits

0x3821,	// (0x00031e38) main_cset_list_pane_copy1

0x3831,	// (0x00031e48) scroll_pane_cp028_copy1

0xc927,	// (0x0003af3e) cset_list_set_pane_copy1

0xc93a,	// (0x0003af51) aid_position_infowindow_above_copy1

0xc942,	// (0x0003af59) aid_position_infowindow_below_copy1

0x5f3d,	// (0x00034554) cset_list_set_pane_g1_copy1

0x5cfe,	// (0x00034315) cset_list_set_pane_g3_copy1_ParamLimits

0x5cfe,	// (0x00034315) cset_list_set_pane_g3_copy1

0x5d0d,	// (0x00034324) cset_list_set_pane_t1_copy1_ParamLimits

0x5d0d,	// (0x00034324) cset_list_set_pane_t1_copy1

0xf121,	// (0x0003d738) list_highlight_pane_cp021_copy1_ParamLimits

0xf121,	// (0x0003d738) list_highlight_pane_cp021_copy1

0x383a,	// (0x00031e51) cset6_slider_pane_ParamLimits

0x383a,	// (0x00031e51) cset6_slider_pane

0x3866,	// (0x00031e7d) main_cset6_slider_pane_g1_ParamLimits

0x3866,	// (0x00031e7d) main_cset6_slider_pane_g1

0xc94a,	// (0x0003af61) main_cset6_slider_pane_g2_ParamLimits

0xc94a,	// (0x0003af61) main_cset6_slider_pane_g2

0x388e,	// (0x00031ea5) main_cset6_slider_pane_g3_ParamLimits

0x388e,	// (0x00031ea5) main_cset6_slider_pane_g3

0xc972,	// (0x0003af89) main_cset6_slider_pane_g4_ParamLimits

0xc972,	// (0x0003af89) main_cset6_slider_pane_g4

0xc97e,	// (0x0003af95) main_cset6_slider_pane_g5_ParamLimits

0xc97e,	// (0x0003af95) main_cset6_slider_pane_g5

0x2ebf,	// (0x000314d6) main_cset6_slider_pane_g7_ParamLimits

0x2ebf,	// (0x000314d6) main_cset6_slider_pane_g7

0x2ecb,	// (0x000314e2) main_cset6_slider_pane_g8_ParamLimits

0x2ecb,	// (0x000314e2) main_cset6_slider_pane_g8

0xc98c,	// (0x0003afa3) main_cset6_slider_pane_g9_ParamLimits

0xc98c,	// (0x0003afa3) main_cset6_slider_pane_g9

0xc998,	// (0x0003afaf) main_cset6_slider_pane_g10_ParamLimits

0xc998,	// (0x0003afaf) main_cset6_slider_pane_g10

0xc9a4,	// (0x0003afbb) main_cset6_slider_pane_g11_ParamLimits

0xc9a4,	// (0x0003afbb) main_cset6_slider_pane_g11

0xc9b0,	// (0x0003afc7) main_cset6_slider_pane_g12_ParamLimits

0xc9b0,	// (0x0003afc7) main_cset6_slider_pane_g12

0xc9bc,	// (0x0003afd3) main_cset6_slider_pane_g13_ParamLimits

0xc9bc,	// (0x0003afd3) main_cset6_slider_pane_g13

0xc9c8,	// (0x0003afdf) main_cset6_slider_pane_g14_ParamLimits

0xc9c8,	// (0x0003afdf) main_cset6_slider_pane_g14

0xc9d4,	// (0x0003afeb) main_cset6_slider_pane_g15_ParamLimits

0xc9d4,	// (0x0003afeb) main_cset6_slider_pane_g15

0xc9ec,	// (0x0003b003) main_cset6_slider_pane_g16_ParamLimits

0xc9ec,	// (0x0003b003) main_cset6_slider_pane_g16

0xc9fa,	// (0x0003b011) main_cset6_slider_pane_g17_ParamLimits

0xc9fa,	// (0x0003b011) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0003e1fc) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0003e1fc) main_cset6_slider_pane_g

0x389a,	// (0x00031eb1) main_cset6_slider_pane_t1_ParamLimits

0x389a,	// (0x00031eb1) main_cset6_slider_pane_t1

0xca20,	// (0x0003b037) main_cset6_slider_pane_t2_ParamLimits

0xca20,	// (0x0003b037) main_cset6_slider_pane_t2

0xca4b,	// (0x0003b062) main_cset6_slider_pane_t3_ParamLimits

0xca4b,	// (0x0003b062) main_cset6_slider_pane_t3

0xca76,	// (0x0003b08d) main_cset6_slider_pane_t4_ParamLimits

0xca76,	// (0x0003b08d) main_cset6_slider_pane_t4

0xcaa1,	// (0x0003b0b8) main_cset6_slider_pane_t5_ParamLimits

0xcaa1,	// (0x0003b0b8) main_cset6_slider_pane_t5

0x38db,	// (0x00031ef2) main_cset6_slider_pane_t7_ParamLimits

0x38db,	// (0x00031ef2) main_cset6_slider_pane_t7

0xcace,	// (0x0003b0e5) main_cset6_slider_pane_t8_ParamLimits

0xcace,	// (0x0003b0e5) main_cset6_slider_pane_t8

0xcaf2,	// (0x0003b109) main_cset6_slider_pane_t9_ParamLimits

0xcaf2,	// (0x0003b109) main_cset6_slider_pane_t9

0xcb16,	// (0x0003b12d) main_cset6_slider_pane_t10_ParamLimits

0xcb16,	// (0x0003b12d) main_cset6_slider_pane_t10

0xcb3a,	// (0x0003b151) main_cset6_slider_pane_t11_ParamLimits

0xcb3a,	// (0x0003b151) main_cset6_slider_pane_t11

0x3911,	// (0x00031f28) main_cset6_slider_pane_t14_ParamLimits

0x3911,	// (0x00031f28) main_cset6_slider_pane_t14

0x394a,	// (0x00031f61) main_cset6_slider_pane_t15_ParamLimits

0x394a,	// (0x00031f61) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0003e221) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0003e221) main_cset6_slider_pane_t

0x3983,	// (0x00031f9a) cset_slider_pane_g1_copy1

0x398c,	// (0x00031fa3) cset_slider_pane_g2_copy1

0x3995,	// (0x00031fac) cset_slider_pane_g3_copy1

0xde67,	// (0x0003c47e) bg_popup_sub_pane_cp011_copy1

0x30cc,	// (0x000316e3) main_cset_text_pane_g1_copy1

0x30d4,	// (0x000316eb) main_cset_text_pane_t1_copy1

0x30e2,	// (0x000316f9) main_cset_text_pane_t2_copy1

0x30f0,	// (0x00031707) main_cset_text_pane_t3_copy1

0x30fe,	// (0x00031715) main_cset_text_pane_t4_copy1

0x310c,	// (0x00031723) main_cset_text_pane_t5_copy1

0x311a,	// (0x00031731) main_cset_text_pane_t6_copy1

0x3128,	// (0x0003173f) main_cset_text_pane_t7_copy1

0xcb5e,	// (0x0003b175) main_cset_text2_pane_t1_copy1

0xde67,	// (0x0003c47e) main_ncimui_pane

0x96bd,	// (0x00037cd4) popup_query_ncimui_window_ParamLimits

0x96bd,	// (0x00037cd4) popup_query_ncimui_window

0x5bc4,	// (0x000341db) field_cale_ev2_pane_g4_ParamLimits

0x5bc4,	// (0x000341db) field_cale_ev2_pane_g4

0xaefe,	// (0x00039515) cell_video_dialer_keypad_pane_g2_ParamLimits

0xaefe,	// (0x00039515) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0003df0e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0003df0e) cell_video_dialer_keypad_pane_g

0xaf16,	// (0x0003952d) cell_video_dialer_keypad_pane_t1

0xde67,	// (0x0003c47e) bg_popup_window_pane_cp012

0xee81,	// (0x0003d498) heading_pane_cp06

0x3a8d,	// (0x000320a4) ncim_query_content_pane

0xde67,	// (0x0003c47e) bg_popup_heading_pane_cp01

0x3a95,	// (0x000320ac) ncim_heading_pane_t1

0x3aa3,	// (0x000320ba) ncim_indicator_popup_pane

0x3ab5,	// (0x000320cc) ncim_query_button_pane

0x3ac9,	// (0x000320e0) ncim_query_content_pane_t1

0x3adb,	// (0x000320f2) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0003e260) ncim_query_content_pane_t

0x3b15,	// (0x0003212c) ncim_query_list_pane

0x3b27,	// (0x0003213e) ncim_query_popup_pane

0x3aa3,	// (0x000320ba) ncim_indicator_popup_pane_ParamLimits

0xcc4e,	// (0x0003b265) ncim_query_content_pane_g1_ParamLimits

0xcc4e,	// (0x0003b265) ncim_query_content_pane_g1

0x3ac9,	// (0x000320e0) ncim_query_content_pane_t1_ParamLimits

0x3adb,	// (0x000320f2) ncim_query_content_pane_t2_ParamLimits

0xcc5a,	// (0x0003b271) ncim_query_content_pane_t3_ParamLimits

0xcc5a,	// (0x0003b271) ncim_query_content_pane_t3

0xcc77,	// (0x0003b28e) ncim_query_content_pane_t4_ParamLimits

0xcc77,	// (0x0003b28e) ncim_query_content_pane_t4

0xcc94,	// (0x0003b2ab) ncim_query_content_pane_t5_ParamLimits

0xcc94,	// (0x0003b2ab) ncim_query_content_pane_t5

0x3aed,	// (0x00032104) ncim_query_content_pane_t6_ParamLimits

0x3aed,	// (0x00032104) ncim_query_content_pane_t6

0xfc49,	// (0x0003e260) ncim_query_content_pane_t_ParamLimits

0x3b15,	// (0x0003212c) ncim_query_list_pane_ParamLimits

0x3b27,	// (0x0003213e) ncim_query_popup_pane_ParamLimits

0x3b3b,	// (0x00032152) wait_bar_pane_cp04

0xde67,	// (0x0003c47e) input_focus_pane_cp011

0x3b43,	// (0x0003215a) ncim_query_popup_pane_t1

0x3b51,	// (0x00032168) ncim_list_query_list_pane_ParamLimits

0x3b51,	// (0x00032168) ncim_list_query_list_pane

0xde67,	// (0x0003c47e) bg_button_pane_cp027

0x3b5e,	// (0x00032175) ncim_query_button_pane_g1

0xde67,	// (0x0003c47e) list_highlight_pane_cp012

0x3b68,	// (0x0003217f) ncim_list_query_list_pane_g1

0x3b70,	// (0x00032187) ncim_list_query_list_pane_t1

0xb536,	// (0x00039b4d) cam4_indicators_pane_g3_ParamLimits

0xb536,	// (0x00039b4d) cam4_indicators_pane_g3

0xb622,	// (0x00039c39) vid4_indicators_pane_g5_ParamLimits

0xb622,	// (0x00039c39) vid4_indicators_pane_g5

0xc40e,	// (0x0003aa25) vid4_progress_pane_g5_ParamLimits

0xc40e,	// (0x0003aa25) vid4_progress_pane_g5

0xcb96,	// (0x0003b1ad) main_ncimui_pane_g1

0xcbdc,	// (0x0003b1f3) ncimui_group_query_pane_ParamLimits

0xcbdc,	// (0x0003b1f3) ncimui_group_query_pane

0xcc10,	// (0x0003b227) ncimui_list_pane_ParamLimits

0xcc10,	// (0x0003b227) ncimui_list_pane

0xcc2a,	// (0x0003b241) ncimui_text_pane_ParamLimits

0xcc2a,	// (0x0003b241) ncimui_text_pane

0xccb1,	// (0x0003b2c8) ncimui_text_pane_t1_ParamLimits

0xccb1,	// (0x0003b2c8) ncimui_text_pane_t1

0x3b7e,	// (0x00032195) ncimui_list_single_graphic_pane_ParamLimits

0x3b7e,	// (0x00032195) ncimui_list_single_graphic_pane

0xccd0,	// (0x0003b2e7) ncimui_query_pane_ParamLimits

0xccd0,	// (0x0003b2e7) ncimui_query_pane

0xde67,	// (0x0003c47e) list_highlight_pane_cp013

0x3b8e,	// (0x000321a5) ncim_list_query_list_pane_t1_copy1

0x3b68,	// (0x0003217f) ncim_list_single_graphic_pane_g1

0x3b9c,	// (0x000321b3) ncim_query_button_pane_cp01

0x3ba4,	// (0x000321bb) ncim_query_entry_pane_ParamLimits

0x3ba4,	// (0x000321bb) ncim_query_entry_pane

0x3bb4,	// (0x000321cb) ncimui_query_pane_g1

0x3bbc,	// (0x000321d3) ncimui_query_pane_t1_ParamLimits

0x3bbc,	// (0x000321d3) ncimui_query_pane_t1

0xde67,	// (0x0003c47e) input_focus_pane_cp012

0x3b43,	// (0x0003215a) ncim_query_entry_pane_t1

0xe614,	// (0x0003cc2b) main_im_pane_ParamLimits

0xf121,	// (0x0003d738) main_mobtv_pane_ParamLimits

0xf121,	// (0x0003d738) main_mobtv_pane

0xca08,	// (0x0003b01f) main_cset6_slider_pane_g18_ParamLimits

0xca08,	// (0x0003b01f) main_cset6_slider_pane_g18

0xca14,	// (0x0003b02b) main_cset6_slider_pane_g19_ParamLimits

0xca14,	// (0x0003b02b) main_cset6_slider_pane_g19

0x2d28,	// (0x0003133f) bg_main_mobtv_pane_ParamLimits

0x2d28,	// (0x0003133f) bg_main_mobtv_pane

0xcce0,	// (0x0003b2f7) main_mobtv_info_pane

0xcceb,	// (0x0003b302) main_mobtv_loading_pane_ParamLimits

0xcceb,	// (0x0003b302) main_mobtv_loading_pane

0x3be0,	// (0x000321f7) main_mobtv_pg_channel_list_pane

0x3bea,	// (0x00032201) main_mobtv_pg_hdr_pane

0xccf8,	// (0x0003b30f) main_mobtv_programe_curr_pane_ParamLimits

0xccf8,	// (0x0003b30f) main_mobtv_programe_curr_pane

0xcd05,	// (0x0003b31c) main_mobtv_programe_next_pane_ParamLimits

0xcd05,	// (0x0003b31c) main_mobtv_programe_next_pane

0x3bf3,	// (0x0003220a) popup_mobtv_noti_window

0x2065,	// (0x0003067c) main_tv_pg_hdr_pane_g1

0x3bfb,	// (0x00032212) main_tv_pg_hdr_pane_g2

0x3c03,	// (0x0003221a) main_tv_pg_hdr_pane_g3

0x3c0b,	// (0x00032222) main_tv_pg_hdr_pane_g4

0x3c13,	// (0x0003222a) main_tv_pg_hdr_pane_g5

0x3c1d,	// (0x00032234) main_tv_pg_hdr_pane_g6

0x3c27,	// (0x0003223e) main_tv_pg_hdr_pane_g7

0x3c31,	// (0x00032248) main_tv_pg_hdr_pane_g8

0x3c3b,	// (0x00032252) main_tv_pg_hdr_pane_g9

0x3c45,	// (0x0003225c) main_tv_pg_hdr_pane_g10

0x3c4f,	// (0x00032266) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0003e26d) main_tv_pg_hdr_pane_g

0x3c59,	// (0x00032270) main_tv_pg_hdr_pane_t1

0x3c67,	// (0x0003227e) main_tv_pg_hdr_pane_t2

0x3c75,	// (0x0003228c) main_tv_pg_hdr_pane_t3

0x3c85,	// (0x0003229c) main_tv_pg_hdr_pane_t4

0x3c95,	// (0x000322ac) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0003e284) main_tv_pg_hdr_pane_t

0x3ca5,	// (0x000322bc) single_mobtv_pg_channel_pane_ParamLimits

0x3ca5,	// (0x000322bc) single_mobtv_pg_channel_pane

0x3cb7,	// (0x000322ce) single_mobtv_pg_channel_table_pane

0x3cc0,	// (0x000322d7) single_mobtv_pg_channel_thumb_pane

0x3cc9,	// (0x000322e0) single_tv_pg_channel_pane_g1

0x3cd2,	// (0x000322e9) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0003e28f) single_tv_pg_channel_pane_g

0x22d1,	// (0x000308e8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x22d1,	// (0x000308e8) bg_single_mobtv_pg_channel_thumb_pane

0x3cdb,	// (0x000322f2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3cdb,	// (0x000322f2) single_mobtv_pg_channel_thumb_pane_g1

0x3ce9,	// (0x00032300) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3ce9,	// (0x00032300) single_mobtv_pg_channel_thumb_pane_g2

0x3cf5,	// (0x0003230c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3cf5,	// (0x0003230c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0003e294) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0003e294) single_mobtv_pg_channel_thumb_pane_g

0x3d01,	// (0x00032318) single_mobtv_pg_channel_thumb_pane_t1

0x3d0f,	// (0x00032326) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0003e29b) single_mobtv_pg_channel_thumb_pane_t

0x2065,	// (0x0003067c) bg_single_mobtv_pg_channel_table_pane_g1

0x2065,	// (0x0003067c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0003dd5a) bg_single_mobtv_pg_channel_table_pane_g

0x3d1d,	// (0x00032334) single_mobtv_pg_channel_table_pane_t1

0x3d2b,	// (0x00032342) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0003e2a0) single_mobtv_pg_channel_table_pane_t

0xcd1a,	// (0x0003b331) main_mobtv_info_pane_g1_ParamLimits

0xcd1a,	// (0x0003b331) main_mobtv_info_pane_g1

0xcd36,	// (0x0003b34d) main_mobtv_info_pane_t1_ParamLimits

0xcd36,	// (0x0003b34d) main_mobtv_info_pane_t1

0xcdae,	// (0x0003b3c5) main_mobtv_info_pane_t2_ParamLimits

0xcdae,	// (0x0003b3c5) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0003e2aa) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0003e2aa) main_mobtv_info_pane_t

0xce3d,	// (0x0003b454) wait_bar_pane_cp05

0xce4f,	// (0x0003b466) main_mobtv_loading_pane_g1_ParamLimits

0xce4f,	// (0x0003b466) main_mobtv_loading_pane_g1

0xce5d,	// (0x0003b474) main_mobtv_loading_pane_g2_ParamLimits

0xce5d,	// (0x0003b474) main_mobtv_loading_pane_g2

0xce69,	// (0x0003b480) main_mobtv_loading_pane_g3_ParamLimits

0xce69,	// (0x0003b480) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0003e2b1) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0003e2b1) main_mobtv_loading_pane_g

0x3d39,	// (0x00032350) main_mobtv_loading_pane_t1_ParamLimits

0x3d39,	// (0x00032350) main_mobtv_loading_pane_t1

0x3d51,	// (0x00032368) main_mobtv_loading_pane_t2_ParamLimits

0x3d51,	// (0x00032368) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0003e2b8) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0003e2b8) main_mobtv_loading_pane_t

0xce77,	// (0x0003b48e) wait_bar_pane_cp06_ParamLimits

0xce77,	// (0x0003b48e) wait_bar_pane_cp06

0x3d75,	// (0x0003238c) main_mobtv_programe_curr_pane_t1

0x3d83,	// (0x0003239a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0003e2bd) main_mobtv_programe_curr_pane_t

0x3d91,	// (0x000323a8) main_mobtv_programe_next_pane_t1

0x3d9f,	// (0x000323b6) main_mobtv_programe_next_pane_t2

0x3dad,	// (0x000323c4) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0003e2c2) main_mobtv_programe_next_pane_t

0xde67,	// (0x0003c47e) bg_popup_mobtv_noti_window_pane

0x3dbb,	// (0x000323d2) popup_mobtv_noti_window_g1

0x3dc3,	// (0x000323da) popup_mobtv_noti_window_t1

0x3dd1,	// (0x000323e8) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0003e2c9) popup_mobtv_noti_window_t

0x2065,	// (0x0003067c) bg_popup_mobtv_noti_window_pane_g1

0xde67,	// (0x0003c47e) sc_clock_pane

0xde67,	// (0x0003c47e) main_fs_bigclock_pane

0xc5f4,	// (0x0003ac0b) blid2_tripm_pane_t4_ParamLimits

0xc5f4,	// (0x0003ac0b) blid2_tripm_pane_t4

0xce83,	// (0x0003b49a) sc_clock_pane_g1_ParamLimits

0xce83,	// (0x0003b49a) sc_clock_pane_g1

0xce91,	// (0x0003b4a8) sc_clock_pane_t1_ParamLimits

0xce91,	// (0x0003b4a8) sc_clock_pane_t1

0xcea4,	// (0x0003b4bb) sc_clock_pane_t2_ParamLimits

0xcea4,	// (0x0003b4bb) sc_clock_pane_t2

0xceb6,	// (0x0003b4cd) sc_clock_pane_t3_ParamLimits

0xceb6,	// (0x0003b4cd) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0003e2ce) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0003e2ce) sc_clock_pane_t

0xd68a,	// (0x0003bca1) main_fs_bigclock_indicator_pane_ParamLimits

0xd68a,	// (0x0003bca1) main_fs_bigclock_indicator_pane

0xcf3a,	// (0x0003b551) main_fs_bigclock_pane_g1_ParamLimits

0xcf3a,	// (0x0003b551) main_fs_bigclock_pane_g1

0xd696,	// (0x0003bcad) main_fs_bigclock_pane_t1_ParamLimits

0xd696,	// (0x0003bcad) main_fs_bigclock_pane_t1

0xd6a8,	// (0x0003bcbf) main_fs_bigclock_pane_t2_ParamLimits

0xd6a8,	// (0x0003bcbf) main_fs_bigclock_pane_t2

0xd6bc,	// (0x0003bcd3) main_fs_bigclock_pane_t3_ParamLimits

0xd6bc,	// (0x0003bcd3) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x0003e4cd) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0003e4cd) main_fs_bigclock_pane_t

0x49d1,	// (0x00032fe8) main_fs_bigclock_indicator_pane_g1

0x3abd,	// (0x000320d4) ncim_query_content_pane_g2_ParamLimits

0x3abd,	// (0x000320d4) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0003e25b) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0003e25b) ncim_query_content_pane_g

0xceca,	// (0x0003b4e1) sc_clock_pane_t4_ParamLimits

0xceca,	// (0x0003b4e1) sc_clock_pane_t4

0xf121,	// (0x0003d738) main_radioblah_pane

0x2c49,	// (0x00031260) cell_call4_button_pane_t1_copy1_ParamLimits

0x2c49,	// (0x00031260) cell_call4_button_pane_t1_copy1

0xcb9e,	// (0x0003b1b5) main_ncimui_pane_t1_ParamLimits

0xcb9e,	// (0x0003b1b5) main_ncimui_pane_t1

0xcbb0,	// (0x0003b1c7) main_ncimui_pane_t2_ParamLimits

0xcbb0,	// (0x0003b1c7) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0003e254) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0003e254) main_ncimui_pane_t

0x3eff,	// (0x00032516) main_radioblah_anim_pane_ParamLimits

0x3eff,	// (0x00032516) main_radioblah_anim_pane

0x3f10,	// (0x00032527) main_radioblah_info_pane_ParamLimits

0x3f10,	// (0x00032527) main_radioblah_info_pane

0x3f24,	// (0x0003253b) main_radioblah_pane_t1_ParamLimits

0x3f24,	// (0x0003253b) main_radioblah_pane_t1

0x3f40,	// (0x00032557) main_radioblah_pane_t2_ParamLimits

0x3f40,	// (0x00032557) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0003e2ef) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0003e2ef) main_radioblah_pane_t

0xcf8c,	// (0x0003b5a3) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcf8c,	// (0x0003b5a3) main_radioblah_rocker_ctrl_pane

0x3f88,	// (0x0003259f) main_radioblah_info_pane_t1_ParamLimits

0x3f88,	// (0x0003259f) main_radioblah_info_pane_t1

0xcfd1,	// (0x0003b5e8) main_radioblah_info_pane_t2_ParamLimits

0xcfd1,	// (0x0003b5e8) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0003e2f8) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0003e2f8) main_radioblah_info_pane_t

0x2065,	// (0x0003067c) main_radioblah_rocker_ctrl_pane_g1

0xd081,	// (0x0003b698) main_radioblah_rocker_ctrl_pane_g2

0xd089,	// (0x0003b6a0) main_radioblah_rocker_ctrl_pane_g3

0xd091,	// (0x0003b6a8) main_radioblah_rocker_ctrl_pane_g4

0xd099,	// (0x0003b6b0) main_radioblah_rocker_ctrl_pane_g5

0xd0a1,	// (0x0003b6b8) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0003e301) main_radioblah_rocker_ctrl_pane_g

0xcb5e,	// (0x0003b175) main_cset_text2_pane_t1_copy1_ParamLimits

0xb47f,	// (0x00039a96) cam4_image_uncrop_qvga_pane

0xb5ac,	// (0x00039bc3) vid4_image_uncrop_qcif_pane

0xc782,	// (0x0003ad99) cam6_image_uncrop_qvga_pane_ParamLimits

0xc782,	// (0x0003ad99) cam6_image_uncrop_qvga_pane

0x36fc,	// (0x00031d13) vid6_image_uncrop_qcif_pane_ParamLimits

0x36fc,	// (0x00031d13) vid6_image_uncrop_qcif_pane

0xde67,	// (0x0003c47e) bg_popup_preview_window_pane_cp03

0x3a6f,	// (0x00032086) list_cset_text2_pane

0x3a77,	// (0x0003208e) main_cset6_text2_pane_g1

0x3a7f,	// (0x00032096) main_cset6_text2_pane_t1

0xd0a9,	// (0x0003b6c0) list_cset_text2_pane_t1_ParamLimits

0xd0a9,	// (0x0003b6c0) list_cset_text2_pane_t1

0xf121,	// (0x0003d738) main_radioblah_pane_ParamLimits

0xce29,	// (0x0003b440) main_mobtv_info_pane_t3_ParamLimits

0xce29,	// (0x0003b440) main_mobtv_info_pane_t3

0xcf7a,	// (0x0003b591) main_radioblah_pane_g1

0xcfa5,	// (0x0003b5bc) main_radioblah_info_pane_g1

0xd026,	// (0x0003b63d) main_radioblah_info_pane_t3_ParamLimits

0xd026,	// (0x0003b63d) main_radioblah_info_pane_t3

0x8474,	// (0x00036a8b) highlight_cell_cale_month_pane_ParamLimits

0x8474,	// (0x00036a8b) highlight_cell_cale_month_pane

0xde67,	// (0x0003c47e) main_phob_fisheye_pane

0x23bf,	// (0x000309d6) scroll_pane_cp0031_ParamLimits

0x23bf,	// (0x000309d6) scroll_pane_cp0031

0x380a,	// (0x00031e21) wait_bar_pane_cp08_ParamLimits

0xc927,	// (0x0003af3e) cset_list_set_pane_copy1_ParamLimits

0x3fc2,	// (0x000325d9) highlight_cell_cale_month_pane_g1

0xd0c6,	// (0x0003b6dd) highlight_cell_cale_month_pane_t1

0x3390,	// (0x000319a7) list_gen_pane_cp01

0x2eaa,	// (0x000314c1) scroll_pane_01

0xd0d4,	// (0x0003b6eb) list_single_double_fisheye_pane

0x6016,	// (0x0003462d) list_double_fisheye_pane_g1_ParamLimits

0x6016,	// (0x0003462d) list_double_fisheye_pane_g1

0x6022,	// (0x00034639) list_double_fisheye_pane_g2_ParamLimits

0x6022,	// (0x00034639) list_double_fisheye_pane_g2

0xd0dd,	// (0x0003b6f4) list_double_fisheye_pane_g3_ParamLimits

0xd0dd,	// (0x0003b6f4) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0003e30e) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0003e30e) list_double_fisheye_pane_g

0x6053,	// (0x0003466a) list_double_fisheye_pane_t1_ParamLimits

0x6053,	// (0x0003466a) list_double_fisheye_pane_t1

0x606e,	// (0x00034685) list_double_fisheye_pane_t2_ParamLimits

0x606e,	// (0x00034685) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0003e319) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0003e319) list_double_fisheye_pane_t

0xde67,	// (0x0003c47e) main_call5_pane

0xcef0,	// (0x0003b507) sc_swipe_pane_ParamLimits

0xcef0,	// (0x0003b507) sc_swipe_pane

0xd0f5,	// (0x0003b70c) call5_image_pane_ParamLimits

0xd0f5,	// (0x0003b70c) call5_image_pane

0xd105,	// (0x0003b71c) call5_swipe_1_pane_ParamLimits

0xd105,	// (0x0003b71c) call5_swipe_1_pane

0xd111,	// (0x0003b728) call5_swipe_2_pane_ParamLimits

0xd111,	// (0x0003b728) call5_swipe_2_pane

0xd12b,	// (0x0003b742) popup_call5_audio_first_window_ParamLimits

0xd12b,	// (0x0003b742) popup_call5_audio_first_window

0x22d1,	// (0x000308e8) call5_swipe_1_pane_g1_ParamLimits

0x22d1,	// (0x000308e8) call5_swipe_1_pane_g1

0x3fca,	// (0x000325e1) call5_swipe_1_pane_g2_ParamLimits

0x3fca,	// (0x000325e1) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0003e31e) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0003e31e) call5_swipe_1_pane_g

0x3fd6,	// (0x000325ed) call5_swipe_1_pane_t1_ParamLimits

0x3fd6,	// (0x000325ed) call5_swipe_1_pane_t1

0x22d1,	// (0x000308e8) call5_swipe_2_pane_g1_ParamLimits

0x22d1,	// (0x000308e8) call5_swipe_2_pane_g1

0x3feb,	// (0x00032602) call5_swipe_2_pane_g2_ParamLimits

0x3feb,	// (0x00032602) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0003e323) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0003e323) call5_swipe_2_pane_g

0x3ff7,	// (0x0003260e) call5_swipe_2_pane_t1_ParamLimits

0x3ff7,	// (0x0003260e) call5_swipe_2_pane_t1

0x400c,	// (0x00032623) sc_swipe_pane_g1_ParamLimits

0x400c,	// (0x00032623) sc_swipe_pane_g1

0x4019,	// (0x00032630) sc_swipe_pane_g2_ParamLimits

0x4019,	// (0x00032630) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0003e328) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0003e328) sc_swipe_pane_g

0x4025,	// (0x0003263c) sc_swipe_pane_t1_ParamLimits

0x4025,	// (0x0003263c) sc_swipe_pane_t1

0xde67,	// (0x0003c47e) main_cmail_launcher_pane

0xd139,	// (0x0003b750) aid_size_cell_cmail_l_ParamLimits

0xd139,	// (0x0003b750) aid_size_cell_cmail_l

0xd149,	// (0x0003b760) grid_cmail_l_pane_ParamLimits

0xd149,	// (0x0003b760) grid_cmail_l_pane

0xd159,	// (0x0003b770) cell_cmail_l_pane_ParamLimits

0xd159,	// (0x0003b770) cell_cmail_l_pane

0xd16d,	// (0x0003b784) cell_cmail_l_pane_g1_ParamLimits

0xd16d,	// (0x0003b784) cell_cmail_l_pane_g1

0xd179,	// (0x0003b790) cell_cmail_l_pane_t1_ParamLimits

0xd179,	// (0x0003b790) cell_cmail_l_pane_t1

0x403a,	// (0x00032651) cell_cmail_l_pane_t2_ParamLimits

0x403a,	// (0x00032651) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0003e32d) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0003e32d) cell_cmail_l_pane_t

0xf121,	// (0x0003d738) grid_highlight_pane_cp018_ParamLimits

0xf121,	// (0x0003d738) grid_highlight_pane_cp018

0x69b7,	// (0x00034fce) main2_pane_ParamLimits

0x69b7,	// (0x00034fce) main2_pane

0xe6ad,	// (0x0003ccc4) popup_sp_fs_action_menu_bg_pane_g1

0xe6b5,	// (0x0003cccc) popup_sp_fs_action_menu_bg_pane_g2

0xe6bd,	// (0x0003ccd4) popup_sp_fs_action_menu_bg_pane_g3

0xe6c5,	// (0x0003ccdc) popup_sp_fs_action_menu_bg_pane_g4

0xe6cd,	// (0x0003cce4) popup_sp_fs_action_menu_bg_pane_g5

0xe6d5,	// (0x0003ccec) popup_sp_fs_action_menu_bg_pane_g6

0xe6dd,	// (0x0003ccf4) popup_sp_fs_action_menu_bg_pane_g7

0xe6e5,	// (0x0003ccfc) popup_sp_fs_action_menu_bg_pane_g8

0xe6ed,	// (0x0003cd04) popup_sp_fs_action_menu_bg_pane_g9

0xe6f5,	// (0x0003cd0c) popup_sp_fs_action_menu_bg_pane_g10

0xe6f5,	// (0x0003cd0c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0003d806) popup_sp_fs_action_menu_bg_pane_g

0x58af,	// (0x00033ec6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x2_t3_g3_g1

0x58bb,	// (0x00033ed2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x58bb,	// (0x00033ed2) list_medium_line_x2_t3_g3_g2

0x58c7,	// (0x00033ede) list_medium_line_x2_t3_g3_g3_ParamLimits

0x58c7,	// (0x00033ede) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0003d8b6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0003d8b6) list_medium_line_x2_t3_g3_g

0x58d3,	// (0x00033eea) list_medium_line_x2_t3_g3_t1_ParamLimits

0x58d3,	// (0x00033eea) list_medium_line_x2_t3_g3_t1

0x58e8,	// (0x00033eff) list_medium_line_x2_t3_g3_t2_ParamLimits

0x58e8,	// (0x00033eff) list_medium_line_x2_t3_g3_t2

0x58fa,	// (0x00033f11) list_medium_line_x2_t3_g3_t3_ParamLimits

0x58fa,	// (0x00033f11) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0003d8bd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0003d8bd) list_medium_line_x2_t3_g3_t

0x58af,	// (0x00033ec6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x2_t3_g2_g1

0x58c7,	// (0x00033ede) list_medium_line_x2_t3_g2_g2_ParamLimits

0x58c7,	// (0x00033ede) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0003d8c4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0003d8c4) list_medium_line_x2_t3_g2_g

0x590f,	// (0x00033f26) list_medium_line_x2_t3_g2_t1_ParamLimits

0x590f,	// (0x00033f26) list_medium_line_x2_t3_g2_t1

0x5925,	// (0x00033f3c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5925,	// (0x00033f3c) list_medium_line_x2_t3_g2_t2

0x58fa,	// (0x00033f11) list_medium_line_x2_t3_g2_t3_ParamLimits

0x58fa,	// (0x00033f11) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0003d8c9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0003d8c9) list_medium_line_x2_t3_g2_t

0x58af,	// (0x00033ec6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x2_t4_g4_g1

0x5937,	// (0x00033f4e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5937,	// (0x00033f4e) list_medium_line_x2_t4_g4_g2

0x58bb,	// (0x00033ed2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x58bb,	// (0x00033ed2) list_medium_line_x2_t4_g4_g3

0x5943,	// (0x00033f5a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5943,	// (0x00033f5a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0003d8d0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0003d8d0) list_medium_line_x2_t4_g4_g

0x594f,	// (0x00033f66) list_medium_line_x2_t4_g4_t1_ParamLimits

0x594f,	// (0x00033f66) list_medium_line_x2_t4_g4_t1

0x5969,	// (0x00033f80) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5969,	// (0x00033f80) list_medium_line_x2_t4_g4_t2

0x597f,	// (0x00033f96) list_medium_line_x2_t4_g4_t3_ParamLimits

0x597f,	// (0x00033f96) list_medium_line_x2_t4_g4_t3

0x5994,	// (0x00033fab) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5994,	// (0x00033fab) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0003d8d9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0003d8d9) list_medium_line_x2_t4_g4_t

0x58af,	// (0x00033ec6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x2_t2_g4_g1

0x5937,	// (0x00033f4e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5937,	// (0x00033f4e) list_medium_line_x2_t2_g4_g2

0x58bb,	// (0x00033ed2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x58bb,	// (0x00033ed2) list_medium_line_x2_t2_g4_g3

0x58c7,	// (0x00033ede) list_medium_line_x2_t2_g4_g4_ParamLimits

0x58c7,	// (0x00033ede) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0003d940) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0003d940) list_medium_line_x2_t2_g4_g

0x59a6,	// (0x00033fbd) list_medium_line_x2_t2_g4_t1_ParamLimits

0x59a6,	// (0x00033fbd) list_medium_line_x2_t2_g4_t1

0x58fa,	// (0x00033f11) list_medium_line_x2_t2_g4_t2_ParamLimits

0x58fa,	// (0x00033f11) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0003d949) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0003d949) list_medium_line_x2_t2_g4_t

0x58af,	// (0x00033ec6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x2_t2_g3_g1

0x58bb,	// (0x00033ed2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x58bb,	// (0x00033ed2) list_medium_line_x2_t2_g3_g2

0x58c7,	// (0x00033ede) list_medium_line_x2_t2_g3_g3_ParamLimits

0x58c7,	// (0x00033ede) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0003d8b6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0003d8b6) list_medium_line_x2_t2_g3_g

0x59bb,	// (0x00033fd2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x59bb,	// (0x00033fd2) list_medium_line_x2_t2_g3_t1

0x58fa,	// (0x00033f11) list_medium_line_x2_t2_g3_t2_ParamLimits

0x58fa,	// (0x00033f11) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0003d94e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0003d94e) list_medium_line_x2_t2_g3_t

0x8626,	// (0x00036c3d) main_sp_fs_list_pane_ParamLimits

0x8626,	// (0x00036c3d) main_sp_fs_list_pane

0x8632,	// (0x00036c49) sp_fs_scroll_pane_ParamLimits

0x8632,	// (0x00036c49) sp_fs_scroll_pane

0x59d0,	// (0x00033fe7) list_medium_line_x2_t3_t1

0x59e0,	// (0x00033ff7) list_medium_line_x2_t3_t2

0x59ee,	// (0x00034005) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0003d999) list_medium_line_x2_t3_t

0x59fc,	// (0x00034013) list_medium_line_x3_t4_t1

0x5a0c,	// (0x00034023) list_medium_line_x3_t4_t2

0x5a1a,	// (0x00034031) list_medium_line_x3_t4_t3

0x59ee,	// (0x00034005) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0003d9a0) list_medium_line_x3_t4_t

0x5a28,	// (0x0003403f) list_medium_line_x4_t5_t1

0x5a38,	// (0x0003404f) list_medium_line_x4_t5_t2

0x5a1a,	// (0x00034031) list_medium_line_x4_t5_t3

0x5a46,	// (0x0003405d) list_medium_line_x4_t5_t4

0x59ee,	// (0x00034005) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0003d9a9) list_medium_line_x4_t5_t

0x58af,	// (0x00033ec6) list_medium_line_t4_g4_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_t4_g4_g1

0x5943,	// (0x00033f5a) list_medium_line_t4_g4_g2_ParamLimits

0x5943,	// (0x00033f5a) list_medium_line_t4_g4_g2

0x5a54,	// (0x0003406b) list_medium_line_t4_g4_g3_ParamLimits

0x5a54,	// (0x0003406b) list_medium_line_t4_g4_g3

0x58c7,	// (0x00033ede) list_medium_line_t4_g4_g4_ParamLimits

0x58c7,	// (0x00033ede) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0003d9b4) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0003d9b4) list_medium_line_t4_g4_g

0x5a60,	// (0x00034077) list_medium_line_t4_g4_t1_ParamLimits

0x5a60,	// (0x00034077) list_medium_line_t4_g4_t1

0x5a75,	// (0x0003408c) list_medium_line_t4_g4_t2_ParamLimits

0x5a75,	// (0x0003408c) list_medium_line_t4_g4_t2

0x5a8a,	// (0x000340a1) list_medium_line_t4_g4_t3_ParamLimits

0x5a8a,	// (0x000340a1) list_medium_line_t4_g4_t3

0x58fa,	// (0x00033f11) list_medium_line_t4_g4_t4_ParamLimits

0x58fa,	// (0x00033f11) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0003d9bd) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0003d9bd) list_medium_line_t4_g4_t

0x874f,	// (0x00036d66) chi_dic_find_pane_g1

0x968c,	// (0x00037ca3) main_tport_pane

0x5d22,	// (0x00034339) list_medium_line_plain_t1

0x5d30,	// (0x00034347) list_medium_line_t2_g2_g1_ParamLimits

0x5d30,	// (0x00034347) list_medium_line_t2_g2_g1

0x5d3c,	// (0x00034353) list_medium_line_t2_g2_g2_ParamLimits

0x5d3c,	// (0x00034353) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0003e070) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0003e070) list_medium_line_t2_g2_g

0x5d48,	// (0x0003435f) list_medium_line_t2_g2_t1_ParamLimits

0x5d48,	// (0x0003435f) list_medium_line_t2_g2_t1

0x5d62,	// (0x00034379) list_medium_line_t2_g2_t2_ParamLimits

0x5d62,	// (0x00034379) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0003e075) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0003e075) list_medium_line_t2_g2_t

0x5ef5,	// (0x0003450c) aid_sp_fs_list_icon_a_sm

0x5efd,	// (0x00034514) aid_sp_fs_list_icon_d

0x47f4,	// (0x00032e0b) aid_sp_fs_text_primary

0x4552,	// (0x00032b69) aid_sp_fs_text_secondary

0x5f05,	// (0x0003451c) list_medium_line

0x5f05,	// (0x0003451c) list_medium_line_g2

0x5f05,	// (0x0003451c) list_medium_line_g3

0x5f05,	// (0x0003451c) list_medium_line_plain

0x5f05,	// (0x0003451c) list_medium_line_plain_t2

0x5f05,	// (0x0003451c) list_medium_line_plain_t3

0x5f05,	// (0x0003451c) list_medium_line_right_icon

0x5f05,	// (0x0003451c) list_medium_line_right_iconx2

0x5f05,	// (0x0003451c) list_medium_line_t2

0x5f05,	// (0x0003451c) list_medium_line_t2_g2

0x5f05,	// (0x0003451c) list_medium_line_t2_g3

0x5f05,	// (0x0003451c) list_medium_line_t2_right_icon

0x5f05,	// (0x0003451c) list_medium_line_t2_right_iconx2

0x5f05,	// (0x0003451c) list_medium_line_t3

0x5f05,	// (0x0003451c) list_medium_line_t3_g2

0x5f05,	// (0x0003451c) list_medium_line_t3_g3

0x5f05,	// (0x0003451c) list_medium_line_t3_right_iconx2

0x5f0e,	// (0x00034525) list_medium_line_t4_g4

0x5f17,	// (0x0003452e) list_medium_line_x2

0x5f17,	// (0x0003452e) list_medium_line_x2_t2_g2

0x5f17,	// (0x0003452e) list_medium_line_x2_t2_g3

0x5f17,	// (0x0003452e) list_medium_line_x2_t2_g4

0x5f17,	// (0x0003452e) list_medium_line_x2_t3

0x5f17,	// (0x0003452e) list_medium_line_x2_t3_g2

0x5f17,	// (0x0003452e) list_medium_line_x2_t3_g3

0x5f17,	// (0x0003452e) list_medium_line_x2_t3_g4

0x5f17,	// (0x0003452e) list_medium_line_x2_t4_g2

0x5f17,	// (0x0003452e) list_medium_line_x2_t4_g4

0x5f20,	// (0x00034537) list_medium_line_x3

0x5f20,	// (0x00034537) list_medium_line_x3_t4

0x5f20,	// (0x00034537) list_medium_line_x3_t4_g4

0x5f0e,	// (0x00034525) list_medium_line_x4_t4

0x5f0e,	// (0x00034525) list_medium_line_x4_t4_g7

0x5f0e,	// (0x00034525) list_medium_line_x4_t5

0x5f29,	// (0x00034540) list_single_fs_dyc_pane_ParamLimits

0x5f29,	// (0x00034540) list_single_fs_dyc_pane

0x58af,	// (0x00033ec6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x4_t4_g7_g1

0x5f45,	// (0x0003455c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5f45,	// (0x0003455c) list_medium_line_x4_t4_g7_g2

0x5f51,	// (0x00034568) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5f51,	// (0x00034568) list_medium_line_x4_t4_g7_g3

0x5f60,	// (0x00034577) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5f60,	// (0x00034577) list_medium_line_x4_t4_g7_g4

0x5f6c,	// (0x00034583) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5f6c,	// (0x00034583) list_medium_line_x4_t4_g7_g5

0x5f7b,	// (0x00034592) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5f7b,	// (0x00034592) list_medium_line_x4_t4_g7_g6

0x5f8a,	// (0x000345a1) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5f8a,	// (0x000345a1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0003e23a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0003e23a) list_medium_line_x4_t4_g7_g

0x5f96,	// (0x000345ad) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5f96,	// (0x000345ad) list_medium_line_x4_t4_g7_t1

0x5fab,	// (0x000345c2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5fab,	// (0x000345c2) list_medium_line_x4_t4_g7_t2

0x5fc0,	// (0x000345d7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5fc0,	// (0x000345d7) list_medium_line_x4_t4_g7_t3

0x5fd5,	// (0x000345ec) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5fd5,	// (0x000345ec) list_medium_line_x4_t4_g7_t4

0x5fe7,	// (0x000345fe) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5fe7,	// (0x000345fe) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0003e249) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0003e249) list_medium_line_x4_t4_g7_t

0x5ff9,	// (0x00034610) list_single_dyc_row_pane_ParamLimits

0x5ff9,	// (0x00034610) list_single_dyc_row_pane

0xd0e9,	// (0x0003b700) call5_gesture_pane_ParamLimits

0xd0e9,	// (0x0003b700) call5_gesture_pane

0xd11d,	// (0x0003b734) call5_windows_pane_ParamLimits

0xd11d,	// (0x0003b734) call5_windows_pane

0xd18f,	// (0x0003b7a6) call5_swipe_1_pane_cp_ParamLimits

0xd18f,	// (0x0003b7a6) call5_swipe_1_pane_cp

0xd19b,	// (0x0003b7b2) call5_swipe_2_pane_cp_ParamLimits

0xd19b,	// (0x0003b7b2) call5_swipe_2_pane_cp

0xf0ed,	// (0x0003d704) call5_image_pane_cp

0xd1a7,	// (0x0003b7be) popup_call5_audio_first_window_cp_ParamLimits

0xd1a7,	// (0x0003b7be) popup_call5_audio_first_window_cp

0x400c,	// (0x00032623) call5_swipe_1_pane_g1_cp_ParamLimits

0x400c,	// (0x00032623) call5_swipe_1_pane_g1_cp

0x404c,	// (0x00032663) call5_swipe_1_pane_g2_cp

0x4025,	// (0x0003263c) call5_swipe_1_pane_t1_cp_ParamLimits

0x4025,	// (0x0003263c) call5_swipe_1_pane_t1_cp

0x400c,	// (0x00032623) call5_swipe_2_pane_g1_cp_ParamLimits

0x400c,	// (0x00032623) call5_swipe_2_pane_g1_cp

0x4054,	// (0x0003266b) call5_swipe_2_pane_g2_cp

0x405c,	// (0x00032673) call5_swipe_2_pane_t1_cp_ParamLimits

0x405c,	// (0x00032673) call5_swipe_2_pane_t1_cp

0xf121,	// (0x0003d738) main_sp_fs_email_pane

0x4071,	// (0x00032688) main_sp_fs_listscroll_pane_te

0x6090,	// (0x000346a7) popup_sp_fs_action_menu_pane_ParamLimits

0x6090,	// (0x000346a7) popup_sp_fs_action_menu_pane

0x2065,	// (0x0003067c) bg_sp_fs_ctrlbar_pane_g1

0x40be,	// (0x000326d5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x40c7,	// (0x000326de) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x40d0,	// (0x000326e7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2065,	// (0x0003067c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0003e332) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1e4a,	// (0x00030461) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1e4a,	// (0x00030461) bg_sp_fs_ctrlbar_ddmenu_pane

0x40d9,	// (0x000326f0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x40d9,	// (0x000326f0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x40e5,	// (0x000326fc) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x40e5,	// (0x000326fc) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0003e33b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0003e33b) main_sp_fs_ctrlbar_ddmenu_pane_g

0x40f1,	// (0x00032708) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x40f1,	// (0x00032708) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x60d4,	// (0x000346eb) list_medium_line_t2_right_icon_g1

0x60dc,	// (0x000346f3) list_medium_line_t2_right_icon_t1

0x60ec,	// (0x00034703) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0003e340) list_medium_line_t2_right_icon_t

0x1b5f,	// (0x00030176) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1b5f,	// (0x00030176) bg_sp_fs_ctrlbar_pane

0xd20c,	// (0x0003b823) main_sp_fs_ctrlbar_button_pane_cp01

0xd214,	// (0x0003b82b) main_sp_fs_ctrlbar_ddmenu_pane

0x414b,	// (0x00032762) main_sp_fs_ctrlbar_pane_g1

0x4157,	// (0x0003276e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0003e345) main_sp_fs_ctrlbar_pane_g

0x4163,	// (0x0003277a) main_sp_fs_ctrlbar_pane_t1

0x60fa,	// (0x00034711) main_sp_fs_ctrlbar_pane

0x6116,	// (0x0003472d) main_sp_fs_listscroll_pane_te_cp01

0x6127,	// (0x0003473e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6127,	// (0x0003473e) popup_sp_fs_action_menu_pane_cp01

0xf121,	// (0x0003d738) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf121,	// (0x0003d738) bg_sp_fs_highlight_list_pane_cp01

0x613f,	// (0x00034756) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x613f,	// (0x00034756) sp_fs_action_menu_list_gene_pane_g1

0x4187,	// (0x0003279e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4187,	// (0x0003279e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0003e34a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0003e34a) sp_fs_action_menu_list_gene_pane_g

0x614e,	// (0x00034765) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x614e,	// (0x00034765) sp_fs_action_menu_list_gene_pane_t1

0x6166,	// (0x0003477d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6166,	// (0x0003477d) sp_fs_action_menu_list_gene_pane

0x41cd,	// (0x000327e4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x41cd,	// (0x000327e4) popup_sp_fs_action_menu_bg_pane

0x6185,	// (0x0003479c) sp_fs_action_menu_list_pane_ParamLimits

0x6185,	// (0x0003479c) sp_fs_action_menu_list_pane

0x41fd,	// (0x00032814) sp_fs_scroll_pane_cp01_ParamLimits

0x41fd,	// (0x00032814) sp_fs_scroll_pane_cp01

0x61a5,	// (0x000347bc) list_medium_line_plain_t2_t1

0x61b5,	// (0x000347cc) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0003e34f) list_medium_line_plain_t2_t

0x61c3,	// (0x000347da) list_medium_line_plain_t3_t1

0x61d3,	// (0x000347ea) list_medium_line_plain_t3_t2

0x61e1,	// (0x000347f8) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0003e354) list_medium_line_plain_t3_t

0x58af,	// (0x00033ec6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x2_t2_g2_g1

0x58c7,	// (0x00033ede) list_medium_line_x2_t2_g2_g2_ParamLimits

0x58c7,	// (0x00033ede) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0003d8c4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0003d8c4) list_medium_line_x2_t2_g2_g

0x5a60,	// (0x00034077) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5a60,	// (0x00034077) list_medium_line_x2_t2_g2_t1

0x58fa,	// (0x00033f11) list_medium_line_x2_t2_g2_t2_ParamLimits

0x58fa,	// (0x00033f11) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0003e35b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0003e35b) list_medium_line_x2_t2_g2_t

0x58af,	// (0x00033ec6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x2_t4_g2_g1

0x61ef,	// (0x00034806) list_medium_line_x2_t4_g2_g2_ParamLimits

0x61ef,	// (0x00034806) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0003e360) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0003e360) list_medium_line_x2_t4_g2_g

0x6201,	// (0x00034818) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6201,	// (0x00034818) list_medium_line_x2_t4_g2_t1

0x621b,	// (0x00034832) list_medium_line_x2_t4_g2_t2_ParamLimits

0x621b,	// (0x00034832) list_medium_line_x2_t4_g2_t2

0x6230,	// (0x00034847) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6230,	// (0x00034847) list_medium_line_x2_t4_g2_t3

0x58fa,	// (0x00033f11) list_medium_line_x2_t4_g2_t4_ParamLimits

0x58fa,	// (0x00033f11) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x0003e365) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x0003e365) list_medium_line_x2_t4_g2_t

0x6245,	// (0x0003485c) list_medium_line_t3_right_iconx2_g1

0x60d4,	// (0x000346eb) list_medium_line_t3_right_iconx2_g2

0x624d,	// (0x00034864) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0003e36e) list_medium_line_t3_right_iconx2_g

0x6255,	// (0x0003486c) list_medium_line_t3_right_iconx2_t1

0x6265,	// (0x0003487c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x0003e375) list_medium_line_t3_right_iconx2_t

0x58af,	// (0x00033ec6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x3_t4_g4_g1

0x58bb,	// (0x00033ed2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x58bb,	// (0x00033ed2) list_medium_line_x3_t4_g4_g2

0x5943,	// (0x00033f5a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5943,	// (0x00033f5a) list_medium_line_x3_t4_g4_g3

0x6273,	// (0x0003488a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6273,	// (0x0003488a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0003e37a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0003e37a) list_medium_line_x3_t4_g4_g

0x627f,	// (0x00034896) list_medium_line_x3_t4_g4_t1_ParamLimits

0x627f,	// (0x00034896) list_medium_line_x3_t4_g4_t1

0x6296,	// (0x000348ad) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6296,	// (0x000348ad) list_medium_line_x3_t4_g4_t2

0x5a75,	// (0x0003408c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5a75,	// (0x0003408c) list_medium_line_x3_t4_g4_t3

0x62ab,	// (0x000348c2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x62ab,	// (0x000348c2) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x0003e383) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x0003e383) list_medium_line_x3_t4_g4_t

0x62c8,	// (0x000348df) list_single_dyc_row_text_pane_t1_ParamLimits

0x62c8,	// (0x000348df) list_single_dyc_row_text_pane_t1

0x62ff,	// (0x00034916) list_single_dyc_row_text_pane_t2_ParamLimits

0x62ff,	// (0x00034916) list_single_dyc_row_text_pane_t2

0x6359,	// (0x00034970) list_single_dyc_row_text_pane_t3_ParamLimits

0x6359,	// (0x00034970) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x0003e38c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x0003e38c) list_single_dyc_row_text_pane_t

0x636b,	// (0x00034982) list_single_dyc_row_pane_g1_ParamLimits

0x636b,	// (0x00034982) list_single_dyc_row_pane_g1

0x6377,	// (0x0003498e) list_single_dyc_row_pane_g2_ParamLimits

0x6377,	// (0x0003498e) list_single_dyc_row_pane_g2

0x6383,	// (0x0003499a) list_single_dyc_row_pane_g3_ParamLimits

0x6383,	// (0x0003499a) list_single_dyc_row_pane_g3

0x638f,	// (0x000349a6) list_single_dyc_row_pane_g4_ParamLimits

0x638f,	// (0x000349a6) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x0003e393) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x0003e393) list_single_dyc_row_pane_g

0x639b,	// (0x000349b2) list_single_dyc_row_text_pane_ParamLimits

0x639b,	// (0x000349b2) list_single_dyc_row_text_pane

0xde67,	// (0x0003c47e) bg_sp_fs_scroll_pane

0x42b5,	// (0x000328cc) thumb_sp_fs_scroll_pane

0x5d30,	// (0x00034347) list_medium_line_g1_ParamLimits

0x5d30,	// (0x00034347) list_medium_line_g1

0x63ba,	// (0x000349d1) list_medium_line_t1_ParamLimits

0x63ba,	// (0x000349d1) list_medium_line_t1

0x58af,	// (0x00033ec6) list_medium_line_x2_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x2_g1

0x58bb,	// (0x00033ed2) list_medium_line_x2_g2_ParamLimits

0x58bb,	// (0x00033ed2) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x0003e39c) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x0003e39c) list_medium_line_x2_g

0x63cf,	// (0x000349e6) list_medium_line_x2_t1_ParamLimits

0x63cf,	// (0x000349e6) list_medium_line_x2_t1

0x58af,	// (0x00033ec6) list_medium_line_x3_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x3_g1

0x58bb,	// (0x00033ed2) list_medium_line_x3_g2_ParamLimits

0x58bb,	// (0x00033ed2) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x0003e39c) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x0003e39c) list_medium_line_x3_g

0x63cf,	// (0x000349e6) list_medium_line_x3_t1_ParamLimits

0x63cf,	// (0x000349e6) list_medium_line_x3_t1

0x42e9,	// (0x00032900) thumb_sp_fs_scroll_pane_g1

0x42f2,	// (0x00032909) thumb_sp_fs_scroll_pane_g2

0x42fb,	// (0x00032912) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0003e3a1) thumb_sp_fs_scroll_pane_g

0x42e9,	// (0x00032900) bg_sp_fs_scroll_pane_g1

0x42f2,	// (0x00032909) bg_sp_fs_scroll_pane_g2

0x42fb,	// (0x00032912) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0003e3a1) bg_sp_fs_scroll_pane_g

0x58af,	// (0x00033ec6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x58af,	// (0x00033ec6) list_medium_line_x2_t3_g4_g1

0x5937,	// (0x00033f4e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5937,	// (0x00033f4e) list_medium_line_x2_t3_g4_g2

0x58bb,	// (0x00033ed2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x58bb,	// (0x00033ed2) list_medium_line_x2_t3_g4_g3

0x58c7,	// (0x00033ede) list_medium_line_x2_t3_g4_g4_ParamLimits

0x58c7,	// (0x00033ede) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0003d940) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0003d940) list_medium_line_x2_t3_g4_g

0x63e5,	// (0x000349fc) list_medium_line_x2_t3_g4_t1_ParamLimits

0x63e5,	// (0x000349fc) list_medium_line_x2_t3_g4_t1

0x63fb,	// (0x00034a12) list_medium_line_x2_t3_g4_t2_ParamLimits

0x63fb,	// (0x00034a12) list_medium_line_x2_t3_g4_t2

0x58fa,	// (0x00033f11) list_medium_line_x2_t3_g4_t3_ParamLimits

0x58fa,	// (0x00033f11) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0003e3a8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0003e3a8) list_medium_line_x2_t3_g4_t

0x5d30,	// (0x00034347) list_medium_line_g2_g1_ParamLimits

0x5d30,	// (0x00034347) list_medium_line_g2_g1

0x5d3c,	// (0x00034353) list_medium_line_g2_g2_ParamLimits

0x5d3c,	// (0x00034353) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0003e070) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0003e070) list_medium_line_g2_g

0x6415,	// (0x00034a2c) list_medium_line_g2_t1_ParamLimits

0x6415,	// (0x00034a2c) list_medium_line_g2_t1

0x5d30,	// (0x00034347) list_medium_line_t3_g2_g1_ParamLimits

0x5d30,	// (0x00034347) list_medium_line_t3_g2_g1

0x5d3c,	// (0x00034353) list_medium_line_t3_g2_g2_ParamLimits

0x5d3c,	// (0x00034353) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0003e070) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0003e070) list_medium_line_t3_g2_g

0x642a,	// (0x00034a41) list_medium_line_t3_g2_t1_ParamLimits

0x642a,	// (0x00034a41) list_medium_line_t3_g2_t1

0x6441,	// (0x00034a58) list_medium_line_t3_g2_t2_ParamLimits

0x6441,	// (0x00034a58) list_medium_line_t3_g2_t2

0x6456,	// (0x00034a6d) list_medium_line_t3_g2_t3_ParamLimits

0x6456,	// (0x00034a6d) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0003e3af) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0003e3af) list_medium_line_t3_g2_t

0x60d4,	// (0x000346eb) list_medium_line_right_icon_g1

0x646b,	// (0x00034a82) list_medium_line_right_icon_t1

0x5d30,	// (0x00034347) list_medium_line_t2_g1_ParamLimits

0x5d30,	// (0x00034347) list_medium_line_t2_g1

0x6479,	// (0x00034a90) list_medium_line_t2_t1_ParamLimits

0x6479,	// (0x00034a90) list_medium_line_t2_t1

0x6493,	// (0x00034aaa) list_medium_line_t2_t2_ParamLimits

0x6493,	// (0x00034aaa) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0003e3b6) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0003e3b6) list_medium_line_t2_t

0x5d30,	// (0x00034347) list_medium_line_t3_g1_ParamLimits

0x5d30,	// (0x00034347) list_medium_line_t3_g1

0x64a8,	// (0x00034abf) list_medium_line_t3_t1_ParamLimits

0x64a8,	// (0x00034abf) list_medium_line_t3_t1

0x64bf,	// (0x00034ad6) list_medium_line_t3_t2_ParamLimits

0x64bf,	// (0x00034ad6) list_medium_line_t3_t2

0x64d4,	// (0x00034aeb) list_medium_line_t3_t3_ParamLimits

0x64d4,	// (0x00034aeb) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x0003e3bb) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x0003e3bb) list_medium_line_t3_t

0x5d30,	// (0x00034347) list_medium_line_g3_g1_ParamLimits

0x5d30,	// (0x00034347) list_medium_line_g3_g1

0x64e6,	// (0x00034afd) list_medium_line_g3_g2_ParamLimits

0x64e6,	// (0x00034afd) list_medium_line_g3_g2

0x5d3c,	// (0x00034353) list_medium_line_g3_g3_ParamLimits

0x5d3c,	// (0x00034353) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0003e3c2) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0003e3c2) list_medium_line_g3_g

0x64f2,	// (0x00034b09) list_medium_line_g3_t1_ParamLimits

0x64f2,	// (0x00034b09) list_medium_line_g3_t1

0x5d30,	// (0x00034347) list_medium_line_t2_g3_g1_ParamLimits

0x5d30,	// (0x00034347) list_medium_line_t2_g3_g1

0x64e6,	// (0x00034afd) list_medium_line_t2_g3_g2_ParamLimits

0x64e6,	// (0x00034afd) list_medium_line_t2_g3_g2

0x5d3c,	// (0x00034353) list_medium_line_t2_g3_g3_ParamLimits

0x5d3c,	// (0x00034353) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0003e3c2) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0003e3c2) list_medium_line_t2_g3_g

0x6507,	// (0x00034b1e) list_medium_line_t2_g3_t1_ParamLimits

0x6507,	// (0x00034b1e) list_medium_line_t2_g3_t1

0x6521,	// (0x00034b38) list_medium_line_t2_g3_t2_ParamLimits

0x6521,	// (0x00034b38) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0003e3c9) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0003e3c9) list_medium_line_t2_g3_t

0x5d30,	// (0x00034347) list_medium_line_t3_g3_g1_ParamLimits

0x5d30,	// (0x00034347) list_medium_line_t3_g3_g1

0x64e6,	// (0x00034afd) list_medium_line_t3_g3_g2_ParamLimits

0x64e6,	// (0x00034afd) list_medium_line_t3_g3_g2

0x5d3c,	// (0x00034353) list_medium_line_t3_g3_g3_ParamLimits

0x5d3c,	// (0x00034353) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0003e3c2) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0003e3c2) list_medium_line_t3_g3_g

0x6536,	// (0x00034b4d) list_medium_line_t3_g3_t1_ParamLimits

0x6536,	// (0x00034b4d) list_medium_line_t3_g3_t1

0x654a,	// (0x00034b61) list_medium_line_t3_g3_t2_ParamLimits

0x654a,	// (0x00034b61) list_medium_line_t3_g3_t2

0x655c,	// (0x00034b73) list_medium_line_t3_g3_t3_ParamLimits

0x655c,	// (0x00034b73) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x0003e3ce) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x0003e3ce) list_medium_line_t3_g3_t

0x6245,	// (0x0003485c) list_medium_line_right_iconx2_g1

0x60d4,	// (0x000346eb) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0003e3d5) list_medium_line_right_iconx2_g

0x656e,	// (0x00034b85) list_medium_line_right_iconx2_t1

0x6245,	// (0x0003485c) list_medium_line_t2_right_iconx2_g1

0x60d4,	// (0x000346eb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0003e3d5) list_medium_line_t2_right_iconx2_g

0x657c,	// (0x00034b93) list_medium_line_t2_right_iconx2_t1

0x658c,	// (0x00034ba3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0003e3da) list_medium_line_t2_right_iconx2_t

0x659a,	// (0x00034bb1) list_medium_line_x4_t4_t1

0x65a8,	// (0x00034bbf) list_medium_line_x4_t4_t2

0x65b8,	// (0x00034bcf) list_medium_line_x4_t4_t3

0x65c8,	// (0x00034bdf) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0003e3df) list_medium_line_x4_t4_t

0xd247,	// (0x0003b85e) tport_appsw_pane_ParamLimits

0xd247,	// (0x0003b85e) tport_appsw_pane

0xd253,	// (0x0003b86a) tport_contact_pane_ParamLimits

0xd253,	// (0x0003b86a) tport_contact_pane

0xd263,	// (0x0003b87a) tport_listscroll_pane_ParamLimits

0xd263,	// (0x0003b87a) tport_listscroll_pane

0xd273,	// (0x0003b88a) cell_tport_appsw_pane_ParamLimits

0xd273,	// (0x0003b88a) cell_tport_appsw_pane

0x2342,	// (0x00030959) tport_appsw_pane_g1_ParamLimits

0x2342,	// (0x00030959) tport_appsw_pane_g1

0x4364,	// (0x0003297b) tport_contact_pane_g1

0x3b43,	// (0x0003215a) tport_contact_pane_t1

0x436d,	// (0x00032984) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0003e3e8) tport_contact_pane_t

0x437b,	// (0x00032992) list_tport_pane

0x4384,	// (0x0003299b) scroll_pane_cp_030

0xd288,	// (0x0003b89f) cell_tport_appsw_pane_g1

0x438d,	// (0x000329a4) cell_tport_appsw_pane_t1

0xde67,	// (0x0003c47e) grid_highlight_pane_cp019

0xd2a0,	// (0x0003b8b7) list_tport_double_graphic_pane_ParamLimits

0xd2a0,	// (0x0003b8b7) list_tport_double_graphic_pane

0xf121,	// (0x0003d738) list_highlight_pane_cp023_ParamLimits

0xf121,	// (0x0003d738) list_highlight_pane_cp023

0xd2b2,	// (0x0003b8c9) list_tport_double_graphic_pane_g1_ParamLimits

0xd2b2,	// (0x0003b8c9) list_tport_double_graphic_pane_g1

0xd2bf,	// (0x0003b8d6) list_tport_double_graphic_pane_t1_ParamLimits

0xd2bf,	// (0x0003b8d6) list_tport_double_graphic_pane_t1

0xd2d4,	// (0x0003b8eb) list_tport_double_graphic_pane_t2_ParamLimits

0xd2d4,	// (0x0003b8eb) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0003e3f4) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0003e3f4) list_tport_double_graphic_pane_t

0xde67,	// (0x0003c47e) main_cale_note_pane

0xb7e8,	// (0x00039dff) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb7e8,	// (0x00039dff) cell_vitu2_function_top_wide_pane_cp01

0xce3d,	// (0x0003b454) wait_bar_pane_cp05_ParamLimits

0xde67,	// (0x0003c47e) listscroll_cmail_pane

0x43a3,	// (0x000329ba) list_cmail_pane

0xd2f0,	// (0x0003b907) list_cmail_body_pane

0xd30d,	// (0x0003b924) list_single_cmail_header_caption_pane

0xd332,	// (0x0003b949) list_single_cmail_header_detail_pane_ParamLimits

0xd332,	// (0x0003b949) list_single_cmail_header_detail_pane

0xd365,	// (0x0003b97c) list_single_cmail_header_caption_pane_t1

0x65d8,	// (0x00034bef) list_single_cmail_header_detail_pane_g1_ParamLimits

0x65d8,	// (0x00034bef) list_single_cmail_header_detail_pane_g1

0x65ee,	// (0x00034c05) list_single_cmail_header_detail_pane_g2_ParamLimits

0x65ee,	// (0x00034c05) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0003e3f9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0003e3f9) list_single_cmail_header_detail_pane_g

0x65fa,	// (0x00034c11) list_single_cmail_header_detail_pane_t1_ParamLimits

0x65fa,	// (0x00034c11) list_single_cmail_header_detail_pane_t1

0x6654,	// (0x00034c6b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6654,	// (0x00034c6b) list_single_cmail_header_editor_pane_bg

0x3cd2,	// (0x000322e9) list_cmail_body_pane_g1

0x443e,	// (0x00032a55) list_cmail_body_pane_t1

0x2d90,	// (0x000313a7) list_single_cmail_header_editor_pane_bg_g1

0xea10,	// (0x0003d027) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2da0,	// (0x000313b7) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2d98,	// (0x000313af) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3035,	// (0x0003164c) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2dc0,	// (0x000313d7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2db0,	// (0x000313c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2db8,	// (0x000313cf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe9f0,	// (0x0003d007) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd373,	// (0x0003b98a) calenote_gesture_pane_ParamLimits

0xd373,	// (0x0003b98a) calenote_gesture_pane

0xd38d,	// (0x0003b9a4) calenote_window_pane_ParamLimits

0xd38d,	// (0x0003b9a4) calenote_window_pane

0x444c,	// (0x00032a63) popup_note_window_cp01

0xd3a5,	// (0x0003b9bc) calenote_swipe_1_pane_ParamLimits

0xd3a5,	// (0x0003b9bc) calenote_swipe_1_pane

0xd19b,	// (0x0003b7b2) calenote_swipe_2_pane_ParamLimits

0xd19b,	// (0x0003b7b2) calenote_swipe_2_pane

0x400c,	// (0x00032623) calenote_swipe_1_pane_g1_ParamLimits

0x400c,	// (0x00032623) calenote_swipe_1_pane_g1

0x4019,	// (0x00032630) calenote_swipe_1_pane_g2_ParamLimits

0x4019,	// (0x00032630) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0003e328) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0003e328) calenote_swipe_1_pane_g

0x445e,	// (0x00032a75) calenote_swipe_1_pane_t1_ParamLimits

0x445e,	// (0x00032a75) calenote_swipe_1_pane_t1

0x400c,	// (0x00032623) calenote_swipe_2_pane_g1_ParamLimits

0x400c,	// (0x00032623) calenote_swipe_2_pane_g1

0x447d,	// (0x00032a94) calenote_swipe_2_pane_g2_ParamLimits

0x447d,	// (0x00032a94) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0003e405) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0003e405) calenote_swipe_2_pane_g

0x4489,	// (0x00032aa0) calenote_swipe_2_pane_t1_ParamLimits

0x4489,	// (0x00032aa0) calenote_swipe_2_pane_t1

0xde67,	// (0x0003c47e) main_mup_navstr_pane

0xa5f8,	// (0x00038c0f) main_mup3_pane_t7_ParamLimits

0xa5f8,	// (0x00038c0f) main_mup3_pane_t7

0xafc1,	// (0x000395d8) main_mp4_pane_g6_ParamLimits

0xafc1,	// (0x000395d8) main_mp4_pane_g6

0xb325,	// (0x0003993c) main_image3_pane_t4_ParamLimits

0xb325,	// (0x0003993c) main_image3_pane_t4

0xd3b8,	// (0x0003b9cf) popup_navstr_preview_pane_ParamLimits

0xd3b8,	// (0x0003b9cf) popup_navstr_preview_pane

0xd3c4,	// (0x0003b9db) scroll_navstr_pane_ParamLimits

0xd3c4,	// (0x0003b9db) scroll_navstr_pane

0xde67,	// (0x0003c47e) bg_popup_preview_window_pane_cp04

0x44b0,	// (0x00032ac7) popup_navstr_preview_pane_t1

0xd3d0,	// (0x0003b9e7) scroll_navstr_pane_g1_ParamLimits

0xd3d0,	// (0x0003b9e7) scroll_navstr_pane_g1

0xd3dd,	// (0x0003b9f4) scroll_navstr_pane_t1_ParamLimits

0xd3dd,	// (0x0003b9f4) scroll_navstr_pane_t1

0x4455,	// (0x00032a6c) bg_button_pane_cp014

0x4455,	// (0x00032a6c) bg_button_pane_cp030

0x6036,	// (0x0003464d) list_double_fisheye_pane_g4_ParamLimits

0x6036,	// (0x0003464d) list_double_fisheye_pane_g4

0x6042,	// (0x00034659) list_double_fisheye_pane_g5_ParamLimits

0x6042,	// (0x00034659) list_double_fisheye_pane_g5

0x43ab,	// (0x000329c2) sp_fs_scroll_pane_cp03

0x414b,	// (0x00032762) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4157,	// (0x0003276e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0003e345) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x4163,	// (0x0003277a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd2e6,	// (0x0003b8fd) sp_fs_scroll_pane_cp02

0xe718,	// (0x0003cd2f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe718,	// (0x0003cd2f) popup_sp_fs_calendar_preview_list_single_pane

0xde67,	// (0x0003c47e) main_cam6_pano_pane

0xf121,	// (0x0003d738) main_mup3_pane_ParamLimits

0xde67,	// (0x0003c47e) main_phacti_pane

0xcd12,	// (0x0003b329) bg_button_pane_cp11

0xcd2a,	// (0x0003b341) main_mobtv_info_pane_g2_ParamLimits

0xcd2a,	// (0x0003b341) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0003e2a5) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0003e2a5) main_mobtv_info_pane_g

0xcedc,	// (0x0003b4f3) sc_clock_pane_t5_ParamLimits

0xcedc,	// (0x0003b4f3) sc_clock_pane_t5

0xcf7a,	// (0x0003b591) main_radioblah_pane_g1_ParamLimits

0x3f58,	// (0x0003256f) main_radioblah_pane_t3_ParamLimits

0x3f58,	// (0x0003256f) main_radioblah_pane_t3

0x3f70,	// (0x00032587) main_radioblah_pane_t4_ParamLimits

0x3f70,	// (0x00032587) main_radioblah_pane_t4

0xcf98,	// (0x0003b5af) main_radioblah_text_pane_ParamLimits

0xcf98,	// (0x0003b5af) main_radioblah_text_pane

0xcfa5,	// (0x0003b5bc) main_radioblah_info_pane_g1_ParamLimits

0xd03a,	// (0x0003b651) main_radioblah_info_pane_t4_ParamLimits

0xd03a,	// (0x0003b651) main_radioblah_info_pane_t4

0xf121,	// (0x0003d738) main_sp_fs_calendar_pane

0xd3ef,	// (0x0003ba06) main_phacti_pane_g1

0xd3f7,	// (0x0003ba0e) phacti_note_pane_ParamLimits

0xd3f7,	// (0x0003ba0e) phacti_note_pane

0x44c7,	// (0x00032ade) phacti_term_pane_ParamLimits

0x44c7,	// (0x00032ade) phacti_term_pane

0x44dc,	// (0x00032af3) phacti_note_pane_t1_ParamLimits

0x44dc,	// (0x00032af3) phacti_note_pane_t1

0x6666,	// (0x00034c7d) phacti_term_pane_g1

0x666e,	// (0x00034c85) phacti_term_pane_t1_ParamLimits

0x666e,	// (0x00034c85) phacti_term_pane_t1

0x4525,	// (0x00032b3c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe80b,	// (0x0003ce22) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0003e40f) popup_sp_fs_calendar_preview_list_single_pane_g

0x452d,	// (0x00032b44) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x452d,	// (0x00032b44) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4542,	// (0x00032b59) aid_popup_sp_fs_bg_corner_pane

0x2065,	// (0x0003067c) popup_sp_fs_calendar_preview_bg_pane_g1

0xde67,	// (0x0003c47e) popup_sp_fs_calendar_preview_bg_pane

0x454a,	// (0x00032b61) popup_sp_fs_calendar_preview_list_pane

0xf121,	// (0x0003d738) bg_main_sp_fs_cale_pane_ParamLimits

0xf121,	// (0x0003d738) bg_main_sp_fs_cale_pane

0x6698,	// (0x00034caf) listscroll_cale_mrui_pane_ParamLimits

0x6698,	// (0x00034caf) listscroll_cale_mrui_pane

0x66ac,	// (0x00034cc3) listscroll_sp_fs_schedule_track_pane

0x66b5,	// (0x00034ccc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x66b5,	// (0x00034ccc) main_sp_fs_ctrlbar_pane_cp01

0x4589,	// (0x00032ba0) main_sp_fs_ribbon_pane

0x4591,	// (0x00032ba8) popup_sp_fs_cale_preview_window

0x43bb,	// (0x000329d2) list_single_sp_fs_schedule_track_pane_ParamLimits

0x43bb,	// (0x000329d2) list_single_sp_fs_schedule_track_pane

0x6b37,	// (0x0003514e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6b37,	// (0x0003514e) bg_sp_fs_highlight_list_pane_cp03

0xd436,	// (0x0003ba4d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd436,	// (0x0003ba4d) list_single_sp_fs_schedule_track_pane_g1

0xd442,	// (0x0003ba59) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd442,	// (0x0003ba59) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0003e414) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0003e414) list_single_sp_fs_schedule_track_pane_g

0xd44e,	// (0x0003ba65) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd44e,	// (0x0003ba65) list_single_sp_fs_schedule_track_pane_t1

0xd466,	// (0x0003ba7d) sp_fs_schedule_track_pane_ParamLimits

0xd466,	// (0x0003ba7d) sp_fs_schedule_track_pane

0x45a3,	// (0x00032bba) sp_fs_schedule_track_pane_g1

0x45ab,	// (0x00032bc2) sp_fs_schedule_track_pane_g2

0x45b3,	// (0x00032bca) sp_fs_schedule_track_pane_g3

0x45bb,	// (0x00032bd2) sp_fs_schedule_track_pane_g4

0x45c3,	// (0x00032bda) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0003e419) sp_fs_schedule_track_pane_g

0x2d90,	// (0x000313a7) bg_sp_fs_schedule_viewer_highlight_g1

0xea10,	// (0x0003d027) bg_sp_fs_schedule_viewer_highlight_g2

0x2d98,	// (0x000313af) bg_sp_fs_schedule_viewer_highlight_g3

0x2da0,	// (0x000313b7) bg_sp_fs_schedule_viewer_highlight_g4

0x3035,	// (0x0003164c) bg_sp_fs_schedule_viewer_highlight_g5

0x2db0,	// (0x000313c7) bg_sp_fs_schedule_viewer_highlight_g6

0x2db8,	// (0x000313cf) bg_sp_fs_schedule_viewer_highlight_g7

0x2dc0,	// (0x000313d7) bg_sp_fs_schedule_viewer_highlight_g8

0xe9f0,	// (0x0003d007) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0003e424) bg_sp_fs_schedule_viewer_highlight_g

0xde67,	// (0x0003c47e) bg_main_sp_fs_ribbon_pane

0xd476,	// (0x0003ba8d) main_sp_fs_ribbon_pane_g1

0x45cb,	// (0x00032be2) main_sp_fs_ribbon_pane_t1

0xd47f,	// (0x0003ba96) main_sp_fs_ribbon_pane_t2

0x45da,	// (0x00032bf1) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0003e437) main_sp_fs_ribbon_pane_t

0x45e9,	// (0x00032c00) main_sp_fs_ribbon_scheduler_pane

0x45f1,	// (0x00032c08) bg_main_sp_fs_ribbon_pane_g1

0x45fa,	// (0x00032c11) bg_main_sp_fs_ribbon_pane_g2

0x4603,	// (0x00032c1a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0003e43e) bg_main_sp_fs_ribbon_pane_g

0x460b,	// (0x00032c22) main_sp_fs_ribbon_scheduler_pane_g1

0x4614,	// (0x00032c2b) main_sp_fs_ribbon_scheduler_pane_g2

0x461d,	// (0x00032c34) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x0003e445) main_sp_fs_ribbon_scheduler_pane_g

0x4626,	// (0x00032c3d) list_cale_mrui_pane

0xd48e,	// (0x0003baa5) sp_fs_scroll_pane_cp07_ParamLimits

0xd48e,	// (0x0003baa5) sp_fs_scroll_pane_cp07

0xd4a4,	// (0x0003babb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd4a4,	// (0x0003babb) bg_sp_fs_schedule_viewer_highlight

0x462f,	// (0x00032c46) list_single_sp_fs_schedule_track_pane_cp01

0x4637,	// (0x00032c4e) list_sp_fs_schedule_track_pane

0x463f,	// (0x00032c56) sp_fs_scroll_pane_cp06_ParamLimits

0x463f,	// (0x00032c56) sp_fs_scroll_pane_cp06

0x2065,	// (0x0003067c) bgmain_sp_fs_calendar_pane_g1

0x66c6,	// (0x00034cdd) list_single_cale_mrui_pane_ParamLimits

0x66c6,	// (0x00034cdd) list_single_cale_mrui_pane

0x66ee,	// (0x00034d05) list_single_cale_mrui_row_pane_ParamLimits

0x66ee,	// (0x00034d05) list_single_cale_mrui_row_pane

0x66fb,	// (0x00034d12) list_single_cale_mrui_row_pane_g1_ParamLimits

0x66fb,	// (0x00034d12) list_single_cale_mrui_row_pane_g1

0x6733,	// (0x00034d4a) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6733,	// (0x00034d4a) list_single_cale_mrui_row_pane_t1

0x6745,	// (0x00034d5c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6745,	// (0x00034d5c) list_single_cale_mrui_row_pane_t2

0x67ab,	// (0x00034dc2) list_single_cale_mrui_row_pane_t3_ParamLimits

0x67ab,	// (0x00034dc2) list_single_cale_mrui_row_pane_t3

0x67da,	// (0x00034df1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x67da,	// (0x00034df1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0003e451) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0003e451) list_single_cale_mrui_row_pane_t

0x6809,	// (0x00034e20) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6809,	// (0x00034e20) list_single_cmail_header_editor_pane_bg_cp01

0x6829,	// (0x00034e40) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6829,	// (0x00034e40) list_single_cmail_header_editor_pane_bg_cp02

0xd4b1,	// (0x0003bac8) main_radioblah_text_pane_t1_ParamLimits

0xd4b1,	// (0x0003bac8) main_radioblah_text_pane_t1

0x4706,	// (0x00032d1d) cam6_indi_pane_cp01

0x470e,	// (0x00032d25) cam6_mode_pane_cp01

0x4716,	// (0x00032d2d) cam6_pano_pane

0x471f,	// (0x00032d36) cam6_zoom_pane_cp01

0x4727,	// (0x00032d3e) cam6_pano_image_pane

0x4732,	// (0x00032d49) cam6_pano_pane_g1

0x3cd2,	// (0x000322e9) cam6_pano_pane_g2

0x473b,	// (0x00032d52) cam6_pano_pane_g3

0x4744,	// (0x00032d5b) cam6_pano_pane_g4

0x260d,	// (0x00030c24) cam6_pano_pane_g5

0x474d,	// (0x00032d64) cam6_pano_pane_g6

0x4757,	// (0x00032d6e) cam6_pano_pane_g7

0x475f,	// (0x00032d76) cam6_pano_pane_g8

0x4768,	// (0x00032d7f) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0003e45a) cam6_pano_pane_g

0xde67,	// (0x0003c47e) main_browser_tag_pane

0x44a8,	// (0x00032abf) grid_navstr_albumart_pane

0x4773,	// (0x00032d8a) cell_navstr_albumart_pane_ParamLimits

0x4773,	// (0x00032d8a) cell_navstr_albumart_pane

0x4796,	// (0x00032dad) cell_navstr_albumart_pane_g1

0x197c,	// (0x0002ff93) cell_navstr_albumart_pane_g2

0x198c,	// (0x0002ffa3) cell_navstr_albumart_pane_g3

0x1984,	// (0x0002ff9b) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0003e46d) cell_navstr_albumart_pane_g

0xd4cc,	// (0x0003bae3) bt_list_pane_ParamLimits

0xd4cc,	// (0x0003bae3) bt_list_pane

0xd4ec,	// (0x0003bb03) bt_list_pane_t1

0xd4fb,	// (0x0003bb12) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x0003e476) bt_list_pane_t

0xde67,	// (0x0003c47e) main_cale_prevew_pane

0xd50a,	// (0x0003bb21) popup_cale_preview_window_ParamLimits

0xd50a,	// (0x0003bb21) popup_cale_preview_window

0xf121,	// (0x0003d738) bg_popup_preview_window_pane_cp05_ParamLimits

0xf121,	// (0x0003d738) bg_popup_preview_window_pane_cp05

0x479e,	// (0x00032db5) list_cale_preview_pane_ParamLimits

0x479e,	// (0x00032db5) list_cale_preview_pane

0x49bf,	// (0x00032fd6) list_double_cale_preview_pane_ParamLimits

0x49bf,	// (0x00032fd6) list_double_cale_preview_pane

0xd523,	// (0x0003bb3a) list_single_cale_preview_pane_ParamLimits

0xd523,	// (0x0003bb3a) list_single_cale_preview_pane

0xd539,	// (0x0003bb50) list_single_cale_preview_pane_g1

0xd541,	// (0x0003bb58) list_single_cale_preview_pane_t1_ParamLimits

0xd541,	// (0x0003bb58) list_single_cale_preview_pane_t1

0xd556,	// (0x0003bb6d) list_double_cale_preview_pane_g1

0xd55e,	// (0x0003bb75) list_double_cale_preview_pane_t1_ParamLimits

0xd55e,	// (0x0003bb75) list_double_cale_preview_pane_t1

0xd573,	// (0x0003bb8a) list_double_cale_preview_pane_t2_ParamLimits

0xd573,	// (0x0003bb8a) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0003e47b) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0003e47b) list_double_cale_preview_pane_t

0xde67,	// (0x0003c47e) main_ezdial_pane

0xf121,	// (0x0003d738) main_sp_fs_email_pane_ParamLimits

0xd1b5,	// (0x0003b7cc) cmail_ddmenu_btn01_pane_ParamLimits

0xd1b5,	// (0x0003b7cc) cmail_ddmenu_btn01_pane

0xd1d2,	// (0x0003b7e9) cmail_ddmenu_btn02_pane_ParamLimits

0xd1d2,	// (0x0003b7e9) cmail_ddmenu_btn02_pane

0xd1f0,	// (0x0003b807) cmail_ddmenu_btn03_pane_ParamLimits

0xd1f0,	// (0x0003b807) cmail_ddmenu_btn03_pane

0x60fa,	// (0x00034711) main_sp_fs_ctrlbar_pane_ParamLimits

0x6116,	// (0x0003472d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd2f0,	// (0x0003b907) list_cmail_body_pane_ParamLimits

0x43d4,	// (0x000329eb) bg_button_pane_cp12

0x43e9,	// (0x00032a00) list_single_cmail_header_detail_pane_g3_ParamLimits

0x43e9,	// (0x00032a00) list_single_cmail_header_detail_pane_g3

0x6630,	// (0x00034c47) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6630,	// (0x00034c47) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0003e400) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0003e400) list_single_cmail_header_detail_pane_t

0x6683,	// (0x00034c9a) phacti_term_pane_t2_ParamLimits

0x6683,	// (0x00034c9a) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0003e40a) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0003e40a) phacti_term_pane_t

0x47aa,	// (0x00032dc1) aid_size_list_single_double

0xd58b,	// (0x0003bba2) popup_ezdial_listscroll_window

0xd5ab,	// (0x0003bbc2) popup_number_entry_window_cp01

0xf0ed,	// (0x0003d704) bg_popup_call_pane_cp09

0x47b6,	// (0x00032dcd) ezdial_list_pane

0x47be,	// (0x00032dd5) scroll_pane_cp23

0x1e4a,	// (0x00030461) bg_button_pane_cp028_ParamLimits

0x1e4a,	// (0x00030461) bg_button_pane_cp028

0xd5b9,	// (0x0003bbd0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd5b9,	// (0x0003bbd0) cmail_ddmenu_btn01_pane_g1

0xd5c9,	// (0x0003bbe0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd5c9,	// (0x0003bbe0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0003e480) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0003e480) cmail_ddmenu_btn01_pane_g

0x47c6,	// (0x00032ddd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x47c6,	// (0x00032ddd) cmail_ddmenu_btn01_pane_t1

0x1b5f,	// (0x00030176) bg_button_pane_cp029_ParamLimits

0x1b5f,	// (0x00030176) bg_button_pane_cp029

0xd5c9,	// (0x0003bbe0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd5c9,	// (0x0003bbe0) cmail_ddmenu_btn02_pane_g1

0xd5e1,	// (0x0003bbf8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd5e1,	// (0x0003bbf8) cmail_ddmenu_btn02_pane_t1

0x6b37,	// (0x0003514e) bg_button_pane_cp031_ParamLimits

0x6b37,	// (0x0003514e) bg_button_pane_cp031

0xd5c9,	// (0x0003bbe0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd5c9,	// (0x0003bbe0) cmail_ddmenu_btn03_pane_g1

0xd5e1,	// (0x0003bbf8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd5e1,	// (0x0003bbf8) cmail_ddmenu_btn03_pane_t1

0xb1d0,	// (0x000397e7) cell_dialer2_keypad_pane_t1_ParamLimits

0xb1ea,	// (0x00039801) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb1ea,	// (0x00039801) cell_dialer2_keypad_pane_t1_copy1

0xcbd4,	// (0x0003b1eb) ncimui_group_button_pane

0xf121,	// (0x0003d738) main_sp_fs_calendar_pane_ParamLimits

0xd30d,	// (0x0003b924) list_single_cmail_header_caption_pane_ParamLimits

0x4552,	// (0x00032b69) aid_recal_txt_sm_pane

0xde67,	// (0x0003c47e) mian_recal_day_pane

0x4591,	// (0x00032ba8) popup_sp_fs_cale_preview_window_ParamLimits

0xde67,	// (0x0003c47e) list_recal_day_pane

0x47fd,	// (0x00032e14) list_single_recal_day_pane_ParamLimits

0x47fd,	// (0x00032e14) list_single_recal_day_pane

0x480f,	// (0x00032e26) list_single_recal_day_pane_g1_ParamLimits

0x480f,	// (0x00032e26) list_single_recal_day_pane_g1

0x481b,	// (0x00032e32) list_single_recal_day_pane_g2_ParamLimits

0x481b,	// (0x00032e32) list_single_recal_day_pane_g2

0x482a,	// (0x00032e41) list_single_recal_day_pane_g3_ParamLimits

0x482a,	// (0x00032e41) list_single_recal_day_pane_g3

0xd605,	// (0x0003bc1c) list_single_recal_day_pane_g4_ParamLimits

0xd605,	// (0x0003bc1c) list_single_recal_day_pane_g4

0x4836,	// (0x00032e4d) list_single_recal_day_pane_g5_ParamLimits

0x4836,	// (0x00032e4d) list_single_recal_day_pane_g5

0x4845,	// (0x00032e5c) list_single_recal_day_pane_g6_ParamLimits

0x4845,	// (0x00032e5c) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0003e48f) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0003e48f) list_single_recal_day_pane_g

0x4851,	// (0x00032e68) list_single_recal_day_pane_t1

0x485f,	// (0x00032e76) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x0003e49c) list_single_recal_day_pane_t

0xd618,	// (0x0003bc2f) ncimui_query_button_pane_ParamLimits

0xd618,	// (0x0003bc2f) ncimui_query_button_pane

0xd628,	// (0x0003bc3f) ncimui_query_button_pane_t1_ParamLimits

0xd628,	// (0x0003bc3f) ncimui_query_button_pane_t1

0x486d,	// (0x00032e84) ncimui_query_button_pane_t2_ParamLimits

0x486d,	// (0x00032e84) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x0003e4a1) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x0003e4a1) ncimui_query_button_pane_t

0xd63b,	// (0x0003bc52) query_button_pane_ParamLimits

0xd63b,	// (0x0003bc52) query_button_pane

0xde67,	// (0x0003c47e) bg_button_pane_cp0028

0x4880,	// (0x00032e97) query_button_pane_t1

0x968c,	// (0x00037ca3) main_tport_pane_ParamLimits

0xd21e,	// (0x0003b835) bg_popup_window_pane_cp01_ParamLimits

0xd21e,	// (0x0003b835) bg_popup_window_pane_cp01

0xd22b,	// (0x0003b842) heading_pane_cp08_ParamLimits

0xd22b,	// (0x0003b842) heading_pane_cp08

0xd239,	// (0x0003b850) heading_pane_cp07_ParamLimits

0xd239,	// (0x0003b850) heading_pane_cp07

0xd290,	// (0x0003b8a7) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0003e3ed) cell_tport_appsw_pane_g

0x5abb,	// (0x000340d2) input_candi_list_open_g1

0xebb7,	// (0x0003d1ce) list_cale_time_pane_g6_ParamLimits

0xebb7,	// (0x0003d1ce) list_cale_time_pane_g6

0xa0cd,	// (0x000386e4) aid_size_touch_calib_1_ParamLimits

0xa0cd,	// (0x000386e4) aid_size_touch_calib_1

0xa0d9,	// (0x000386f0) aid_size_touch_calib_2_ParamLimits

0xa0d9,	// (0x000386f0) aid_size_touch_calib_2

0xa0e7,	// (0x000386fe) aid_size_touch_calib_3_ParamLimits

0xa0e7,	// (0x000386fe) aid_size_touch_calib_3

0xa0f7,	// (0x0003870e) aid_size_touch_calib_4_ParamLimits

0xa0f7,	// (0x0003870e) aid_size_touch_calib_4

0xa105,	// (0x0003871c) main_touch_calib_button_group_pane_ParamLimits

0xa105,	// (0x0003871c) main_touch_calib_button_group_pane

0xa113,	// (0x0003872a) main_touch_calib_pane_g1_ParamLimits

0xa11f,	// (0x00038736) main_touch_calib_pane_g2_ParamLimits

0xa12b,	// (0x00038742) main_touch_calib_pane_g3_ParamLimits

0xa137,	// (0x0003874e) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0003ddcf) main_touch_calib_pane_g_ParamLimits

0xa143,	// (0x0003875a) main_touch_calib_pane_t1_ParamLimits

0xa15a,	// (0x00038771) main_touch_calib_pane_t2_ParamLimits

0xa171,	// (0x00038788) main_touch_calib_pane_t3_ParamLimits

0xa185,	// (0x0003879c) main_touch_calib_pane_t4_ParamLimits

0xa199,	// (0x000387b0) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0003ddd8) main_touch_calib_pane_t_ParamLimits

0x23e3,	// (0x000309fa) list_single_fp_cale_pane_g3_ParamLimits

0x23e3,	// (0x000309fa) list_single_fp_cale_pane_g3

0xf121,	// (0x0003d738) bg_button_pane_cp012_ParamLimits

0xf121,	// (0x0003d738) bg_vkb2_func_pane_cp03_ParamLimits

0xbf4b,	// (0x0003a562) cell_vitu2_function_top_pane_g1_ParamLimits

0xf121,	// (0x0003d738) bg_vkb2_func_pane_cp04_ParamLimits

0xcb85,	// (0x0003b19c) main_ncimui_button_group_pane_ParamLimits

0xcb85,	// (0x0003b19c) main_ncimui_button_group_pane

0xcbc2,	// (0x0003b1d9) main_ncimui_pane_t3_ParamLimits

0xcbc2,	// (0x0003b1d9) main_ncimui_pane_t3

0x44be,	// (0x00032ad5) phacti_button_group_pane

0x47aa,	// (0x00032dc1) aid_size_list_single_double_ParamLimits

0xd58b,	// (0x0003bba2) popup_ezdial_listscroll_window_ParamLimits

0xd5ab,	// (0x0003bbc2) popup_number_entry_window_cp01_ParamLimits

0xd648,	// (0x0003bc5f) phacti_button_pane_ParamLimits

0xd648,	// (0x0003bc5f) phacti_button_pane

0xde67,	// (0x0003c47e) bg_button_pane_cp14

0x488e,	// (0x00032ea5) phacti_button_pane_t1

0xd659,	// (0x0003bc70) main_touch_calib_button_pane_ParamLimits

0xd659,	// (0x0003bc70) main_touch_calib_button_pane

0xe614,	// (0x0003cc2b) bg_button_pane_cp18_ParamLimits

0xe614,	// (0x0003cc2b) bg_button_pane_cp18

0x489c,	// (0x00032eb3) main_touch_calib_button_pane_t1_ParamLimits

0x489c,	// (0x00032eb3) main_touch_calib_button_pane_t1

0x48b2,	// (0x00032ec9) main_touch_calib_button_pane_t2_ParamLimits

0x48b2,	// (0x00032ec9) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0003e4a6) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0003e4a6) main_touch_calib_button_pane_t

0xde67,	// (0x0003c47e) cell_ncimui_button_pane

0xde67,	// (0x0003c47e) bg_button_pane_cp032

0x48d0,	// (0x00032ee7) cell_ncimui_button_pane_t1

0xb246,	// (0x0003985d) image3_infobar_pane_ParamLimits

0xb246,	// (0x0003985d) image3_infobar_pane

0xcefe,	// (0x0003b515) fs_bigclock_status_pane_ParamLimits

0xcefe,	// (0x0003b515) fs_bigclock_status_pane

0xcf0b,	// (0x0003b522) main_fs_bigclock_clock_pane_ParamLimits

0xcf0b,	// (0x0003b522) main_fs_bigclock_clock_pane

0xcf1b,	// (0x0003b532) main_fs_bigclock_indi_pane_ParamLimits

0xcf1b,	// (0x0003b532) main_fs_bigclock_indi_pane

0xcf48,	// (0x0003b55f) main_fs_bigclock_swipe_pane_ParamLimits

0xcf48,	// (0x0003b55f) main_fs_bigclock_swipe_pane

0xde67,	// (0x0003c47e) main_fs_clock_dumped_data

0x3ddf,	// (0x000323f6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3ddf,	// (0x000323f6) list_single_fs_bigclock_indicator_pane_g1

0x3dfb,	// (0x00032412) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3dfb,	// (0x00032412) list_single_fs_bigclock_indicator_pane_g2

0x3e15,	// (0x0003242c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3e15,	// (0x0003242c) list_single_fs_bigclock_indicator_pane_g3

0x3e2f,	// (0x00032446) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3e2f,	// (0x00032446) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0003e2d9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0003e2d9) list_single_fs_bigclock_indicator_pane_g

0x3e55,	// (0x0003246c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3e55,	// (0x0003246c) list_single_fs_bigclock_indicator_pane_t1

0x3e7d,	// (0x00032494) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3e7d,	// (0x00032494) list_single_fs_bigclock_indicator_pane_t2

0x3ea5,	// (0x000324bc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3ea5,	// (0x000324bc) list_single_fs_bigclock_indicator_pane_t3

0x3ecd,	// (0x000324e4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3ecd,	// (0x000324e4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0003e2e4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0003e2e4) list_single_fs_bigclock_indicator_pane_t

0x48de,	// (0x00032ef5) image3_infobar_fav_pane_ParamLimits

0x48de,	// (0x00032ef5) image3_infobar_fav_pane

0x48ee,	// (0x00032f05) image3_infobar_loc_pane_ParamLimits

0x48ee,	// (0x00032f05) image3_infobar_loc_pane

0x4902,	// (0x00032f19) image3_infobar_time_pane_ParamLimits

0x4902,	// (0x00032f19) image3_infobar_time_pane

0x2065,	// (0x0003067c) image3_infobar_time_pane_g1

0x4912,	// (0x00032f29) image3_infobar_time_pane_t1

0x2065,	// (0x0003067c) image3_infobar_loc_pane_g1

0x4920,	// (0x00032f37) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x0003e4ab) image3_infobar_loc_pane_g

0x4928,	// (0x00032f3f) image3_infobar_loc_pane_t1

0x2065,	// (0x0003067c) image3_infobar_fav_pane_g1

0x4936,	// (0x00032f4d) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0003e4b0) image3_infobar_fav_pane_g

0x493e,	// (0x00032f55) fs_bigclock_status_battery_pane

0x4947,	// (0x00032f5e) fs_bigclock_status_signal_pane

0x4950,	// (0x00032f67) fs_bigclock_status_title_pane

0x4959,	// (0x00032f70) fs_bigclock_status_signal_pane_g1

0x4962,	// (0x00032f79) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0003e4b5) fs_bigclock_status_signal_pane_g

0x496a,	// (0x00032f81) fs_bigclock_status_battery_pane_g1

0x4973,	// (0x00032f8a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0003e4ba) fs_bigclock_status_battery_pane_g

0x497b,	// (0x00032f92) fs_bigclock_status_title_pane_t1

0x2065,	// (0x0003067c) main_fs_bigclock_clock_pane_g1

0x4989,	// (0x00032fa0) main_fs_bigclock_clock_pane_g2

0x4989,	// (0x00032fa0) main_fs_bigclock_clock_pane_g3

0x4989,	// (0x00032fa0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0003e4bf) main_fs_bigclock_clock_pane_g

0x4991,	// (0x00032fa8) main_fs_bigclock_clock_pane_t1

0x499f,	// (0x00032fb6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0003e4c8) main_fs_bigclock_clock_pane_t

0x49ae,	// (0x00032fc5) list_single_fs_bigclock_indicator_pane_ParamLimits

0x49ae,	// (0x00032fc5) list_single_fs_bigclock_indicator_pane

0xd66b,	// (0x0003bc82) list_single_fs_bigclock_pane_ParamLimits

0xd66b,	// (0x0003bc82) list_single_fs_bigclock_pane

0x49da,	// (0x00032ff1) main_fs_bigclock_indicator_pane_t1

0x49e9,	// (0x00033000) list_single_fs_bigclock_pane_g1

0x49f1,	// (0x00033008) list_single_fs_bigclock_pane_t1

0x2065,	// (0x0003067c) main_fs_bigclock_swipe_pane_g1

0x4a2f,	// (0x00033046) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0003e4d9) main_fs_bigclock_swipe_pane_g

0x4a37,	// (0x0003304e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4a37,	// (0x0003304e) main_fs_bigclock_swipe_pane_t1

0x863e,	// (0x00036c55) call_type_pane_ParamLimits

0xde67,	// (0x0003c47e) main_btmg_pane

0x6727,	// (0x00034d3e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6727,	// (0x00034d3e) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0003e44c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0003e44c) list_single_cale_mrui_row_pane_g

0x47e4,	// (0x00032dfb) list_recal_vselct_arw_lo_pane

0x47ec,	// (0x00032e03) list_recal_vselct_arw_up_pane

0x47f4,	// (0x00032e0b) list_recal_vselct_pane

0x4a54,	// (0x0003306b) btmg_button_pane

0xd6ce,	// (0x0003bce5) main_btmg_pane_g1

0xde67,	// (0x0003c47e) bg_button_pane_cp044

0xd6d6,	// (0x0003bced) btmg_button_pane_t1

0x1b57,	// (0x0003016e) aid_listscroll_gen

0xf121,	// (0x0003d738) main_cntbar_detail_pane

0x439b,	// (0x000329b2) list_cmail_folder_pane

0x43ab,	// (0x000329c2) sp_fs_scroll_pane_cp03_ParamLimits

0x6845,	// (0x00034e5c) list_single_fs_dyc_pane_cp01_ParamLimits

0x6845,	// (0x00034e5c) list_single_fs_dyc_pane_cp01

0xd6e4,	// (0x0003bcfb) aid_size_cmail_indent

0x686b,	// (0x00034e82) list_single_dyc_row_pane_cp01

0xd70d,	// (0x0003bd24) cntbar_detail_list_pane_ParamLimits

0xd70d,	// (0x0003bd24) cntbar_detail_list_pane

0xd747,	// (0x0003bd5e) main_cntbar_detail_cont_pane_ParamLimits

0xd747,	// (0x0003bd5e) main_cntbar_detail_cont_pane

0x8632,	// (0x00036c49) scroll_pane_cp032_ParamLimits

0x8632,	// (0x00036c49) scroll_pane_cp032

0xd753,	// (0x0003bd6a) cntbar_detail_list_event_pane_ParamLimits

0xd753,	// (0x0003bd6a) cntbar_detail_list_event_pane

0xd719,	// (0x0003bd30) cntbar_detail_list_shct_pane

0xea5e,	// (0x0003d075) aid_list_gen

0xd767,	// (0x0003bd7e) aid_scroll

0xd770,	// (0x0003bd87) aid_size_touch_scroll_bar

0xd779,	// (0x0003bd90) aid_list_double

0xd782,	// (0x0003bd99) aid_list_single

0x3459,	// (0x00031a70) aid_list_single_lg

0x6874,	// (0x00034e8b) aid_list_z_g_a_sm

0x687c,	// (0x00034e93) aid_list_z_g_d

0x6884,	// (0x00034e9b) aid_txt_z_prm

0x6892,	// (0x00034ea9) aid_txt_z_prm_cp01

0x68a0,	// (0x00034eb7) aid_txt_z_sec

0xd78b,	// (0x0003bda2) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd78b,	// (0x0003bda2) main_cntbar_detail_cont_pane_g1

0xd798,	// (0x0003bdaf) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd798,	// (0x0003bdaf) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0003e4de) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0003e4de) main_cntbar_detail_cont_pane_g

0xd7a4,	// (0x0003bdbb) main_cntbar_detail_cont_pane_t1

0xd7b2,	// (0x0003bdc9) main_cntbar_detail_cont_pane_t2

0xd7c0,	// (0x0003bdd7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0003e4e3) main_cntbar_detail_cont_pane_t

0xd7ce,	// (0x0003bde5) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd7ce,	// (0x0003bde5) cell_cntbar_detail_list_shct_pane

0xd7e2,	// (0x0003bdf9) cntbar_detail_list_shct_pane_g1

0xd7eb,	// (0x0003be02) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0003e4ea) cntbar_detail_list_shct_pane_g

0xd7f4,	// (0x0003be0b) cntbar_detail_list_event_pane_g1_ParamLimits

0xd7f4,	// (0x0003be0b) cntbar_detail_list_event_pane_g1

0xd800,	// (0x0003be17) cntbar_detail_list_event_pane_g2_ParamLimits

0xd800,	// (0x0003be17) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0003e4ef) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0003e4ef) cntbar_detail_list_event_pane_g

0xd86c,	// (0x0003be83) cntbar_detail_list_event_pane_t1_ParamLimits

0xd86c,	// (0x0003be83) cntbar_detail_list_event_pane_t1

0xd881,	// (0x0003be98) cntbar_detail_list_event_pane_t2_ParamLimits

0xd881,	// (0x0003be98) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0003e4fc) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0003e4fc) cntbar_detail_list_event_pane_t

0x2065,	// (0x0003067c) cell_cntbar_detail_list_shct_pane_g1

0x89cc,	// (0x00036fe3) navi_pane_mv_g3

0xf121,	// (0x0003d738) main_cntbar_detail_pane_ParamLimits

0xde67,	// (0x0003c47e) main_notif_wgt_pane

0xaf24,	// (0x0003953b) aid_tch_main_mp4_pane_g4

0xb12f,	// (0x00039746) popup_slider_window_cp02

0x47db,	// (0x00032df2) list_recal_day_event_pane

0xd6ed,	// (0x0003bd04) cntbar_detail_btn_pane_ParamLimits

0xd6ed,	// (0x0003bd04) cntbar_detail_btn_pane

0xd6fd,	// (0x0003bd14) cntbar_detail_btn_pane_cp01_ParamLimits

0xd6fd,	// (0x0003bd14) cntbar_detail_btn_pane_cp01

0xd719,	// (0x0003bd30) cntbar_detail_list_shct_pane_ParamLimits

0xd725,	// (0x0003bd3c) cntbar_detail_pane_g1_ParamLimits

0xd725,	// (0x0003bd3c) cntbar_detail_pane_g1

0xd731,	// (0x0003bd48) cntbar_detail_pane_t1_ParamLimits

0xd731,	// (0x0003bd48) cntbar_detail_pane_t1

0xd80c,	// (0x0003be23) cntbar_detail_list_event_pane_g3_ParamLimits

0xd80c,	// (0x0003be23) cntbar_detail_list_event_pane_g3

0xd824,	// (0x0003be3b) cntbar_detail_list_event_pane_g4_ParamLimits

0xd824,	// (0x0003be3b) cntbar_detail_list_event_pane_g4

0xd83c,	// (0x0003be53) cntbar_detail_list_event_pane_g5_ParamLimits

0xd83c,	// (0x0003be53) cntbar_detail_list_event_pane_g5

0xd854,	// (0x0003be6b) cntbar_detail_list_event_pane_g6_ParamLimits

0xd854,	// (0x0003be6b) cntbar_detail_list_event_pane_g6

0xd896,	// (0x0003bead) cntbar_detail_list_event_pane_t3_ParamLimits

0xd896,	// (0x0003bead) cntbar_detail_list_event_pane_t3

0xd8a8,	// (0x0003bebf) popup_notif_wgt_window_ParamLimits

0xd8a8,	// (0x0003bebf) popup_notif_wgt_window

0xd8b8,	// (0x0003becf) popup_submenu_window_cp01_ParamLimits

0xd8b8,	// (0x0003becf) popup_submenu_window_cp01

0xf0ed,	// (0x0003d704) bg_popup_window_pane_cp10

0xd8c6,	// (0x0003bedd) listscroll_notif_wgt_pane

0xd8d0,	// (0x0003bee7) list_notif_wgt_window

0xd8d9,	// (0x0003bef0) scroll_pane_cp033

0x49bf,	// (0x00032fd6) list_notif_wgt_row_pane_ParamLimits

0x49bf,	// (0x00032fd6) list_notif_wgt_row_pane

0xd8e2,	// (0x0003bef9) aid_size_list_notif_wgt_del

0xd8eb,	// (0x0003bf02) list_notif_wgt_row_pane_g1

0xd8f3,	// (0x0003bf0a) list_notif_wgt_row_pane_g2

0xd8fb,	// (0x0003bf12) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0003e503) list_notif_wgt_row_pane_g

0xd904,	// (0x0003bf1b) list_notif_wgt_row_pane_t1

0xd912,	// (0x0003bf29) list_notif_wgt_row_pane_t2

0xd920,	// (0x0003bf37) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0003e50a) list_notif_wgt_row_pane_t

0x308f,	// (0x000316a6) list_recal_day_event_pane_g1

0xd92e,	// (0x0003bf45) list_recal_day_event_pane_t1

0xde67,	// (0x0003c47e) bg_button_pane_cp045

0xd93d,	// (0x0003bf54) cntbar_detail_btn_pane_t1

0x1b5f,	// (0x00030176) main_callh_pane_ParamLimits

0x1b5f,	// (0x00030176) main_callh_pane

0xde67,	// (0x0003c47e) main_coverflow0_pane

0xde67,	// (0x0003c47e) main_wgtman_pane

0xcf60,	// (0x0003b577) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xcf60,	// (0x0003b577) main_fs_bigclock_unlock_btn_pane

0xd280,	// (0x0003b897) bg_button_pane_cp16

0xd298,	// (0x0003b8af) cell_tport_appsw_pane_g3

0xd94b,	// (0x0003bf62) cf0_flow_pane_ParamLimits

0xd94b,	// (0x0003bf62) cf0_flow_pane

0xd95a,	// (0x0003bf71) listscroll_cf0_pane

0xd963,	// (0x0003bf7a) main_cf0_pane_g1

0xd96d,	// (0x0003bf84) main_cf0_pane_t1_ParamLimits

0xd96d,	// (0x0003bf84) main_cf0_pane_t1

0xd981,	// (0x0003bf98) main_cf0_pane_t2_ParamLimits

0xd981,	// (0x0003bf98) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0003e511) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0003e511) main_cf0_pane_t

0xd995,	// (0x0003bfac) scroll_pane_cp11

0xd9a0,	// (0x0003bfb7) cf0_flow_pane_g1

0xd9a8,	// (0x0003bfbf) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0003e516) cf0_flow_pane_g

0xd9b0,	// (0x0003bfc7) cf0_flow_pane_t1

0xde67,	// (0x0003c47e) main_call6_pane

0xde67,	// (0x0003c47e) main_calllock_pane

0xd9be,	// (0x0003bfd5) call6_btn_grp_pane_ParamLimits

0xd9be,	// (0x0003bfd5) call6_btn_grp_pane

0xd9cd,	// (0x0003bfe4) call6_pane_g1_ParamLimits

0xd9cd,	// (0x0003bfe4) call6_pane_g1

0xd9dc,	// (0x0003bff3) popup_call6_1st_window_ParamLimits

0xd9dc,	// (0x0003bff3) popup_call6_1st_window

0xd9ea,	// (0x0003c001) popup_call6_2nd_window_ParamLimits

0xd9ea,	// (0x0003c001) popup_call6_2nd_window

0xd9f8,	// (0x0003c00f) cell_call6_btn_pane_ParamLimits

0xd9f8,	// (0x0003c00f) cell_call6_btn_pane

0xf0ed,	// (0x0003d704) bg_popup_call2_in_pane_cp03

0xda07,	// (0x0003c01e) popup_call6_1st_window_g1

0xda0f,	// (0x0003c026) popup_call6_1st_window_g2

0xda17,	// (0x0003c02e) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0003e51b) popup_call6_1st_window_g

0xda1f,	// (0x0003c036) popup_call6_1st_window_t1

0xda2e,	// (0x0003c045) popup_call6_1st_window_t2

0xda3e,	// (0x0003c055) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0003e522) popup_call6_1st_window_t

0xf0ed,	// (0x0003d704) bg_popup_call2_in_pane_cp04

0xda07,	// (0x0003c01e) popup_call6_2nd_window_g1

0xda0f,	// (0x0003c026) popup_call6_2nd_window_g2

0xda17,	// (0x0003c02e) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0003e51b) popup_call6_2nd_window_g

0xda1f,	// (0x0003c036) popup_call6_2nd_window_t1

0xde67,	// (0x0003c47e) bg_button_pane_cp15

0xda4e,	// (0x0003c065) cell_call6_btn_pane_g1

0xda57,	// (0x0003c06e) cell_call6_btn_pane_t1

0xda66,	// (0x0003c07d) listscroll_wgtman_pane_ParamLimits

0xda66,	// (0x0003c07d) listscroll_wgtman_pane

0xda75,	// (0x0003c08c) wgtman_btn_pane_ParamLimits

0xda75,	// (0x0003c08c) wgtman_btn_pane

0xefa4,	// (0x0003d5bb) aid_scroll_copy1

0xda83,	// (0x0003c09a) list_wgtman_pane

0xda8d,	// (0x0003c0a4) wgtman_btn_pane_g1_ParamLimits

0xda8d,	// (0x0003c0a4) wgtman_btn_pane_g1

0xda99,	// (0x0003c0b0) wgtman_btn_pane_t1_ParamLimits

0xda99,	// (0x0003c0b0) wgtman_btn_pane_t1

0xdaab,	// (0x0003c0c2) wgtman_btn_pane_t2_ParamLimits

0xdaab,	// (0x0003c0c2) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0003e529) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0003e529) wgtman_btn_pane_t

0xdabd,	// (0x0003c0d4) listrow_wgtman_pane_ParamLimits

0xdabd,	// (0x0003c0d4) listrow_wgtman_pane

0xdad8,	// (0x0003c0ef) listrow_wgtman_pane_g1

0xdae1,	// (0x0003c0f8) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0003e52e) listrow_wgtman_pane_g

0x68ae,	// (0x00034ec5) listrow_wgtman_pane_t1

0x68bc,	// (0x00034ed3) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0003e533) listrow_wgtman_pane_t

0x68ca,	// (0x00034ee1) wait_bar_pane_cp09

0xdaeb,	// (0x0003c102) main_calllock_btn_pane

0xdaf5,	// (0x0003c10c) main_calllock_pane_g1

0xde67,	// (0x0003c47e) bg_button_pane_cp17

0xdb01,	// (0x0003c118) main_calllock_btn_pane_g1

0xdb0a,	// (0x0003c121) main_calllock_btn_pane_t1

0xde67,	// (0x0003c47e) main_dialer3_pane

0xde67,	// (0x0003c47e) main_fmrd2_pane

0x2065,	// (0x0003067c) main_fs_bigclock_unlock_btn_pane_g1

0xdb21,	// (0x0003c138) main_fs_bigclock_unlock_btn_pane_t1

0xdb2f,	// (0x0003c146) area_fmrd2_info_pane_ParamLimits

0xdb2f,	// (0x0003c146) area_fmrd2_info_pane

0xdb3e,	// (0x0003c155) area_fmrd2_visual_pane_ParamLimits

0xdb3e,	// (0x0003c155) area_fmrd2_visual_pane

0xdb4c,	// (0x0003c163) fmrd2_indi_pane_ParamLimits

0xdb4c,	// (0x0003c163) fmrd2_indi_pane

0xdb59,	// (0x0003c170) area_fmrd2_visual_pane_g1

0xdb61,	// (0x0003c178) area_fmrd2_visual_pane_t1

0xdb71,	// (0x0003c188) area_fmrd2_visual_pane_t2

0xdb81,	// (0x0003c198) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0003e53d) area_fmrd2_visual_pane_t

0xdb91,	// (0x0003c1a8) area_fmrd2_info_pane_g1

0xdb99,	// (0x0003c1b0) area_fmrd2_info_pane_t1

0xdba9,	// (0x0003c1c0) area_fmrd2_info_pane_t2

0xdbb9,	// (0x0003c1d0) area_fmrd2_info_pane_t3

0xdbc9,	// (0x0003c1e0) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0003e544) area_fmrd2_info_pane_t

0xdbd7,	// (0x0003c1ee) fmrd2_indi_pane_t1

0xdbe7,	// (0x0003c1fe) fmrd2_indi_pane_t2

0xdbf7,	// (0x0003c20e) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0003e54d) fmrd2_indi_pane_t

0x3e3e,	// (0x00032455) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3e3e,	// (0x00032455) list_single_fs_bigclock_indicator_pane_g5

0x3ee2,	// (0x000324f9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3ee2,	// (0x000324f9) list_single_fs_bigclock_indicator_pane_t5

0xd40d,	// (0x0003ba24) aid_cell_bcale_month_pane_ParamLimits

0xd40d,	// (0x0003ba24) aid_cell_bcale_month_pane

0xd419,	// (0x0003ba30) bcale_month_pane_ParamLimits

0xd419,	// (0x0003ba30) bcale_month_pane

0xd427,	// (0x0003ba3e) bcale_preview_pane_ParamLimits

0xd427,	// (0x0003ba3e) bcale_preview_pane

0x49f1,	// (0x00033008) list_single_fs_bigclock_pane_t1_ParamLimits

0x4a0b,	// (0x00033022) list_single_fs_bigclock_pane_t2_ParamLimits

0x4a0b,	// (0x00033022) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0003e4d4) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0003e4d4) list_single_fs_bigclock_pane_t

0xdb19,	// (0x0003c130) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0003e538) main_fs_bigclock_unlock_btn_pane_g

0xdc05,	// (0x0003c21c) aid_dia3_key_size_ParamLimits

0xdc05,	// (0x0003c21c) aid_dia3_key_size

0xdc11,	// (0x0003c228) aid_dia3_listrow_size_ParamLimits

0xdc11,	// (0x0003c228) aid_dia3_listrow_size

0xdc1f,	// (0x0003c236) dia3_keypad_fun_pane_ParamLimits

0xdc1f,	// (0x0003c236) dia3_keypad_fun_pane

0xdc2f,	// (0x0003c246) dia3_keypad_num_pane_ParamLimits

0xdc2f,	// (0x0003c246) dia3_keypad_num_pane

0xdc3f,	// (0x0003c256) dia3_listscroll_pane_ParamLimits

0xdc3f,	// (0x0003c256) dia3_listscroll_pane

0xdc4d,	// (0x0003c264) dia3_numentry_pane_ParamLimits

0xdc4d,	// (0x0003c264) dia3_numentry_pane

0xdc5b,	// (0x0003c272) dia3_list_pane

0xdc66,	// (0x0003c27d) scroll_pane_cp12

0xde67,	// (0x0003c47e) bg_dia3_numentry_pane

0xdc71,	// (0x0003c288) dia3_numentry_pane_t1

0xdc80,	// (0x0003c297) cell_dia3_key_num_pane

0xdc88,	// (0x0003c29f) cell_dia3_key0_fun_pane_ParamLimits

0xdc88,	// (0x0003c29f) cell_dia3_key0_fun_pane

0xdc95,	// (0x0003c2ac) cell_dia3_key1_fun_pane_ParamLimits

0xdc95,	// (0x0003c2ac) cell_dia3_key1_fun_pane

0xdca2,	// (0x0003c2b9) dia3_listrow_pane

0x3b5e,	// (0x00032175) bg_dia3_numentry_pane_g1

0xde67,	// (0x0003c47e) bg_button_pane_cp21

0xdcab,	// (0x0003c2c2) cell_dia3_key_num_pane_t1

0xdcb9,	// (0x0003c2d0) cell_dia3_key_num_pane_t2

0xdcc8,	// (0x0003c2df) cell_dia3_key_num_pane_t3

0xdcd7,	// (0x0003c2ee) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x0003e554) cell_dia3_key_num_pane_t

0xde67,	// (0x0003c47e) bg_button_pane_cp19

0xdce6,	// (0x0003c2fd) cell_dia3_key0_fun_pane_g1

0xde67,	// (0x0003c47e) bg_button_pane_cp20

0xdcee,	// (0x0003c305) cell_dia3_key1_fun_pane_g1

0xdcf6,	// (0x0003c30d) area_left_week_number_pane

0xdcff,	// (0x0003c316) area_top_day_name_pane

0xdd08,	// (0x0003c31f) frame_month_view_pane

0xdd12,	// (0x0003c329) grid_month_view_pane

0xdd1c,	// (0x0003c333) cell_top_day_name_pane_ParamLimits

0xdd1c,	// (0x0003c333) cell_top_day_name_pane

0xdd36,	// (0x0003c34d) cell_area_left_week_number_pane_ParamLimits

0xdd36,	// (0x0003c34d) cell_area_left_week_number_pane

0xdd4a,	// (0x0003c361) cell_month_view_pane_ParamLimits

0xdd4a,	// (0x0003c361) cell_month_view_pane

0xdd67,	// (0x0003c37e) frm_month_g1

0xdd70,	// (0x0003c387) frm_month_g2

0xdd7a,	// (0x0003c391) frm_month_g3

0xdd84,	// (0x0003c39b) frm_month_g4

0xdd8e,	// (0x0003c3a5) frm_month_g5

0xdd98,	// (0x0003c3af) frm_month_g6

0xdda2,	// (0x0003c3b9) frm_month_g7

0xddac,	// (0x0003c3c3) frm_month_g8

0xddb5,	// (0x0003c3cc) frm_month_g9

0xddbe,	// (0x0003c3d5) frm_month_g10

0xddc7,	// (0x0003c3de) frm_month_g11

0xddd0,	// (0x0003c3e7) frm_month_g12

0xddd9,	// (0x0003c3f0) frm_month_g13

0xdde2,	// (0x0003c3f9) frm_month_g14

0xddeb,	// (0x0003c402) frm_month_g15

0xddf6,	// (0x0003c40d) frm_month_g16

0x000f,

0xff46,	// (0x0003e55d) frm_month_g

0xde01,	// (0x0003c418) cell_top_day_name_pane_t1

0xde10,	// (0x0003c427) cell_area_left_week_number_pane_g1

0xde01,	// (0x0003c418) cell_area_left_week_number_pane_t1

0x2065,	// (0x0003067c) cell_month_view_pane_g1

0xde18,	// (0x0003c42f) cell_month_view_pane_t1

0xde67,	// (0x0003c47e) main_fps_pane

0x4113,	// (0x0003272a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4113,	// (0x0003272a) cmail_ddmenu_btn02_pane_cp1

0x412f,	// (0x00032746) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x412f,	// (0x00032746) cmail_ddmenu_btn02_pane_cp2

0xd5d5,	// (0x0003bbec) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd5d5,	// (0x0003bbec) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x0003e485) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x0003e485) cmail_ddmenu_btn02_pane_g

0xd5f3,	// (0x0003bc0a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd5f3,	// (0x0003bc0a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x0003e48a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x0003e48a) cmail_ddmenu_btn02_pane_t

0xde27,	// (0x0003c43e) fps_text_pane_ParamLimits

0xde27,	// (0x0003c43e) fps_text_pane

0xde34,	// (0x0003c44b) main_fps_pane_g1_ParamLimits

0xde34,	// (0x0003c44b) main_fps_pane_g1

0xde42,	// (0x0003c459) wait_bar_pane_cp010_ParamLimits

0xde42,	// (0x0003c459) wait_bar_pane_cp010

0xde4e,	// (0x0003c465) fps_text_pane_t1_ParamLimits

0xde4e,	// (0x0003c465) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
