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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00085f66 };

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
0x0fc2,	// (0x00086f28) Screen

0x0fce,	// (0x00086f34) application_window

0x100a,	// (0x00086f70) area_bottom_pane_ParamLimits

0x100a,	// (0x00086f70) area_bottom_pane

0x1043,	// (0x00086fa9) area_top_pane_ParamLimits

0x1043,	// (0x00086fa9) area_top_pane

0xb1e3,	// (0x00091149) call_video_uplink_pane_ParamLimits

0xb1e3,	// (0x00091149) call_video_uplink_pane

0x10d1,	// (0x00087037) main_pane_ParamLimits

0x10d1,	// (0x00087037) main_pane

0x6108,	// (0x0008c06e) context_pane

0x611b,	// (0x0008c081) navi_pane

0x6143,	// (0x0008c0a9) popup_cale_events_window_ParamLimits

0x6143,	// (0x0008c0a9) popup_cale_events_window

0x615b,	// (0x0008c0c1) popup_mup_playback_window

0x6163,	// (0x0008c0c9) signal_pane

0xece1,	// (0x00094c47) main_browser_pane

0x3cc0,	// (0x00089c26) main_burst_pane

0x5e5e,	// (0x0008bdc4) main_calc_pane

0x5e72,	// (0x0008bdd8) main_cale_day_pane

0x16f5,	// (0x0008765b) main_cale_month_pane

0x5e72,	// (0x0008bdd8) main_cale_week_pane

0x3cc0,	// (0x00089c26) main_call_pane

0xe46c,	// (0x000943d2) main_call_poc_pane

0x3cc0,	// (0x00089c26) main_camera_pane

0x3cc0,	// (0x00089c26) main_chi_dic_pane

0x381c,	// (0x00089782) main_clock_pane

0xe46c,	// (0x000943d2) main_fmradio_pane

0x3cc0,	// (0x00089c26) main_graph_messa_pane

0xe46c,	// (0x000943d2) main_help_pane

0xece1,	// (0x00094c47) main_im_pane

0xe6c7,	// (0x0009462d) main_image_pane_ParamLimits

0xe6c7,	// (0x0009462d) main_image_pane

0xe46c,	// (0x000943d2) main_location2_pane

0x3cc0,	// (0x00089c26) main_location_pane

0xe6c7,	// (0x0009462d) main_messa_pane

0xe46c,	// (0x000943d2) main_mp2_pane

0x3cc0,	// (0x00089c26) main_mp_pane

0xe46c,	// (0x000943d2) main_msg_pane

0xe46c,	// (0x000943d2) main_mup_eq_pane

0xe46c,	// (0x000943d2) main_mup_pane

0xece1,	// (0x00094c47) main_notes_pane

0xe46c,	// (0x000943d2) main_pec_pane

0xe46c,	// (0x000943d2) main_phob_pane

0xe46c,	// (0x000943d2) main_pinb_pane

0xe46c,	// (0x000943d2) main_postcard_pane

0xe46c,	// (0x000943d2) main_qdial_pane

0x3cc0,	// (0x00089c26) main_skin_pane

0xe46c,	// (0x000943d2) main_smil2_pane

0x3cc0,	// (0x00089c26) main_smil_pane

0x3cc0,	// (0x00089c26) main_video_pane

0x3cc0,	// (0x00089c26) main_video_tele_pane

0xe6c7,	// (0x0009462d) main_viewer_pane_ParamLimits

0xe6c7,	// (0x0009462d) main_viewer_pane

0x3cc0,	// (0x00089c26) main_vorec_pane

0x5ecc,	// (0x0008be32) popup_blid_sat_info_window_ParamLimits

0x5ecc,	// (0x0008be32) popup_blid_sat_info_window

0x5f24,	// (0x0008be8a) popup_dyc_status_message_window_ParamLimits

0x5f24,	// (0x0008be8a) popup_dyc_status_message_window

0x5f3c,	// (0x0008bea2) popup_grid_large_graphic_window_ParamLimits

0x5f3c,	// (0x0008bea2) popup_grid_large_graphic_window

0x5ff2,	// (0x0008bf58) popup_loc_request_window_ParamLimits

0x5ff2,	// (0x0008bf58) popup_loc_request_window

0x60e0,	// (0x0008c046) popup_wml_address_window_ParamLimits

0x60e0,	// (0x0008c046) popup_wml_address_window

0x5c5f,	// (0x0008bbc5) call_muted_g1

0x49a2,	// (0x0008a908) popup_call_audio_conf_window_ParamLimits

0x49a2,	// (0x0008a908) popup_call_audio_conf_window

0x5c73,	// (0x0008bbd9) popup_call_audio_first_window_ParamLimits

0x5c73,	// (0x0008bbd9) popup_call_audio_first_window

0x5ce9,	// (0x0008bc4f) popup_call_audio_in_window_ParamLimits

0x5ce9,	// (0x0008bc4f) popup_call_audio_in_window

0x5d25,	// (0x0008bc8b) popup_call_audio_out_window_ParamLimits

0x5d25,	// (0x0008bc8b) popup_call_audio_out_window

0x5d5f,	// (0x0008bcc5) popup_call_audio_second_window_ParamLimits

0x5d5f,	// (0x0008bcc5) popup_call_audio_second_window

0x5db5,	// (0x0008bd1b) popup_call_audio_wait_window_ParamLimits

0x5db5,	// (0x0008bd1b) popup_call_audio_wait_window

0x5dea,	// (0x0008bd50) popup_number_entry_window_ParamLimits

0x5dea,	// (0x0008bd50) popup_number_entry_window

0xe059,	// (0x00093fbf) bg_popup_call_pane_cp05_ParamLimits

0xe059,	// (0x00093fbf) bg_popup_call_pane_cp05

0xe079,	// (0x00093fdf) popup_number_entry_window_t1

0xe08c,	// (0x00093ff2) popup_number_entry_window_t2

0xe09e,	// (0x00094004) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x00095039) popup_number_entry_window_t

0xe0b0,	// (0x00094016) text_title_cp2

0xe0c3,	// (0x00094029) bg_popup_call_pane_cp_ParamLimits

0xe0c3,	// (0x00094029) bg_popup_call_pane_cp

0xe0d1,	// (0x00094037) call_thumbnail_pane

0xe0d9,	// (0x0009403f) popup_call_audio_in_window_g1_ParamLimits

0xe0d9,	// (0x0009403f) popup_call_audio_in_window_g1

0xe0e5,	// (0x0009404b) popup_call_audio_in_window_g2_ParamLimits

0xe0e5,	// (0x0009404b) popup_call_audio_in_window_g2

0xe0f1,	// (0x00094057) popup_call_audio_in_window_g3_ParamLimits

0xe0f1,	// (0x00094057) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x00095042) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x00095042) popup_call_audio_in_window_g

0xe0fd,	// (0x00094063) popup_call_audio_in_window_t1_ParamLimits

0xe0fd,	// (0x00094063) popup_call_audio_in_window_t1

0xe119,	// (0x0009407f) popup_call_audio_in_window_t2_ParamLimits

0xe119,	// (0x0009407f) popup_call_audio_in_window_t2

0xe135,	// (0x0009409b) popup_call_audio_in_window_t3_ParamLimits

0xe135,	// (0x0009409b) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x00095049) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x00095049) popup_call_audio_in_window_t

0xe0c3,	// (0x00094029) bg_popup_call_pane_cp01_ParamLimits

0xe0c3,	// (0x00094029) bg_popup_call_pane_cp01

0xe0d1,	// (0x00094037) call_thumbnail_pane_cp02

0xe148,	// (0x000940ae) call_type_pane_cp022

0xe150,	// (0x000940b6) popup_call_audio_out_window_g1_ParamLimits

0xe150,	// (0x000940b6) popup_call_audio_out_window_g1

0xe162,	// (0x000940c8) popup_call_audio_out_window_g2_ParamLimits

0xe162,	// (0x000940c8) popup_call_audio_out_window_g2

0xe16e,	// (0x000940d4) popup_call_audio_out_window_g3_ParamLimits

0xe16e,	// (0x000940d4) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x00095050) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x00095050) popup_call_audio_out_window_g

0xe180,	// (0x000940e6) popup_call_audio_out_window_t1_ParamLimits

0xe180,	// (0x000940e6) popup_call_audio_out_window_t1

0xe198,	// (0x000940fe) popup_call_audio_out_window_t2_ParamLimits

0xe198,	// (0x000940fe) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x00095057) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x00095057) popup_call_audio_out_window_t

0xe1ad,	// (0x00094113) bg_popup_call_pane_ParamLimits

0xe1ad,	// (0x00094113) bg_popup_call_pane

0x128e,	// (0x000871f4) call_thumbnail_pane_cp_ParamLimits

0x128e,	// (0x000871f4) call_thumbnail_pane_cp

0xe231,	// (0x00094197) call_type_pane_cp01_ParamLimits

0xe231,	// (0x00094197) call_type_pane_cp01

0xe275,	// (0x000941db) popup_call_audio_first_window_g1_ParamLimits

0xe275,	// (0x000941db) popup_call_audio_first_window_g1

0xe2c1,	// (0x00094227) popup_call_audio_first_window_g2_ParamLimits

0xe2c1,	// (0x00094227) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0009505c) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0009505c) popup_call_audio_first_window_g

0xe305,	// (0x0009426b) popup_call_audio_first_window_t1_ParamLimits

0xe305,	// (0x0009426b) popup_call_audio_first_window_t1

0xe3b1,	// (0x00094317) popup_call_audio_first_window_t4_ParamLimits

0xe3b1,	// (0x00094317) popup_call_audio_first_window_t4

0xe43d,	// (0x000943a3) popup_call_audio_first_window_t5_ParamLimits

0xe43d,	// (0x000943a3) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x00095061) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x00095061) popup_call_audio_first_window_t

0xe46c,	// (0x000943d2) bg_popup_call_pane_cp02

0xe476,	// (0x000943dc) call_type_pane_cp023

0xe47e,	// (0x000943e4) popup_call_audio_wait_window_g1

0xe486,	// (0x000943ec) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x00095068) popup_call_audio_wait_window_g

0xe48e,	// (0x000943f4) popup_call_audio_wait_window_t3

0xe49c,	// (0x00094402) bg_popup_call_pane_cp03_ParamLimits

0xe49c,	// (0x00094402) bg_popup_call_pane_cp03

0xe4fc,	// (0x00094462) call_thumbnail_pane_cp011_ParamLimits

0xe4fc,	// (0x00094462) call_thumbnail_pane_cp011

0xe508,	// (0x0009446e) call_type_pane_cp034_ParamLimits

0xe508,	// (0x0009446e) call_type_pane_cp034

0xe544,	// (0x000944aa) popup_call_audio_second_window_g1_ParamLimits

0xe544,	// (0x000944aa) popup_call_audio_second_window_g1

0xe580,	// (0x000944e6) popup_call_audio_second_window_g2_ParamLimits

0xe580,	// (0x000944e6) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0009506d) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0009506d) popup_call_audio_second_window_g

0xe5bc,	// (0x00094522) popup_call_audio_second_window_t1_ParamLimits

0xe5bc,	// (0x00094522) popup_call_audio_second_window_t1

0xe63d,	// (0x000945a3) popup_call_audio_second_window_t2_ParamLimits

0xe63d,	// (0x000945a3) popup_call_audio_second_window_t2

0xe673,	// (0x000945d9) popup_call_audio_second_window_t3_ParamLimits

0xe673,	// (0x000945d9) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x00095072) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x00095072) popup_call_audio_second_window_t

0xe46c,	// (0x000943d2) bg_popup_call_pane_cp04

0xe6a9,	// (0x0009460f) list_conf_pane

0xe6b1,	// (0x00094617) popup_call_audio_conf_window_t1

0xe6bf,	// (0x00094625) call_thumbnail_pane_g1

0xe6c7,	// (0x0009462d) bg_pinb_pane_ParamLimits

0xe6c7,	// (0x0009462d) bg_pinb_pane

0xe6d5,	// (0x0009463b) find_pinb_pane

0xe6de,	// (0x00094644) listscroll_pinb_pane_ParamLimits

0xe6de,	// (0x00094644) listscroll_pinb_pane

0xe6ed,	// (0x00094653) pinb_bg_pane_g1

0x12b2,	// (0x00087218) pinb_bg_pane_g2

0x12be,	// (0x00087224) pinb_bg_pane_g3

0x12ca,	// (0x00087230) pinb_bg_pane_g4

0x12d6,	// (0x0008723c) pinb_bg_pane_g5

0x12e2,	// (0x00087248) pinb_bg_pane_g6

0x12ed,	// (0x00087253) pinb_bg_pane_g7

0x12f8,	// (0x0008725e) pinb_bg_pane_g8

0x1303,	// (0x00087269) pinb_bg_pane_g9

0x130d,	// (0x00087273) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x00095079) pinb_bg_pane_g

0x132a,	// (0x00087290) grid_pinb_pane

0x1333,	// (0x00087299) list_pinb_pane

0x133c,	// (0x000872a2) scroll_pane_cp01_ParamLimits

0x133c,	// (0x000872a2) scroll_pane_cp01

0xe6f7,	// (0x0009465d) find_pinb_pane_g1_ParamLimits

0xe6f7,	// (0x0009465d) find_pinb_pane_g1

0xe70f,	// (0x00094675) find_pinb_pane_t1

0xe721,	// (0x00094687) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x00095093) find_pinb_pane_t

0xe736,	// (0x0009469c) input_focus_pane_cp01_ParamLimits

0xe736,	// (0x0009469c) input_focus_pane_cp01

0x134e,	// (0x000872b4) cell_pinb_pane_ParamLimits

0x134e,	// (0x000872b4) cell_pinb_pane

0xe742,	// (0x000946a8) cell_pinb_pane_g1_ParamLimits

0xe742,	// (0x000946a8) cell_pinb_pane_g1

0xe755,	// (0x000946bb) cell_pinb_pane_g2_ParamLimits

0xe755,	// (0x000946bb) cell_pinb_pane_g2

0xe761,	// (0x000946c7) cell_pinb_pane_g3_ParamLimits

0xe761,	// (0x000946c7) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x00095098) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x00095098) cell_pinb_pane_g

0xe46c,	// (0x000943d2) grid_highlight_pane_cp01

0x137c,	// (0x000872e2) list_pinb_item_pane_ParamLimits

0x137c,	// (0x000872e2) list_pinb_item_pane

0xe46c,	// (0x000943d2) list_highlight_pane_cp02

0x138f,	// (0x000872f5) list_pinb_item_pane_g1_ParamLimits

0x138f,	// (0x000872f5) list_pinb_item_pane_g1

0x139c,	// (0x00087302) list_pinb_item_pane_g2_ParamLimits

0x139c,	// (0x00087302) list_pinb_item_pane_g2

0x13a8,	// (0x0008730e) list_pinb_item_pane_g3_ParamLimits

0x13a8,	// (0x0008730e) list_pinb_item_pane_g3

0x13b9,	// (0x0008731f) list_pinb_item_pane_g4_ParamLimits

0x13b9,	// (0x0008731f) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0009509f) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0009509f) list_pinb_item_pane_g

0x13c5,	// (0x0008732b) list_pinb_item_pane_t1_ParamLimits

0x13c5,	// (0x0008732b) list_pinb_item_pane_t1

0x13fa,	// (0x00087360) calc_display_pane

0x1422,	// (0x00087388) calc_paper_pane

0x1445,	// (0x000873ab) grid_calc_pane

0xe46c,	// (0x000943d2) bg_list_pane_cp01

0x1473,	// (0x000873d9) clock_g1

0x147b,	// (0x000873e1) clock_g2

0x0001,

0xf142,	// (0x000950a8) clock_g

0x1483,	// (0x000873e9) clock_t1_ParamLimits

0x1483,	// (0x000873e9) clock_t1

0x1498,	// (0x000873fe) clock_t2_ParamLimits

0x1498,	// (0x000873fe) clock_t2

0x14aa,	// (0x00087410) clock_t3_ParamLimits

0x14aa,	// (0x00087410) clock_t3

0x14bc,	// (0x00087422) clock_t4_ParamLimits

0x14bc,	// (0x00087422) clock_t4

0x14ce,	// (0x00087434) clock_t5_ParamLimits

0x14ce,	// (0x00087434) clock_t5

0x14e3,	// (0x00087449) clock_t6_ParamLimits

0x14e3,	// (0x00087449) clock_t6

0x14f5,	// (0x0008745b) clock_t7_ParamLimits

0x14f5,	// (0x0008745b) clock_t7

0x1507,	// (0x0008746d) clock_t8_ParamLimits

0x1507,	// (0x0008746d) clock_t8

0x151b,	// (0x00087481) clock_t9_ParamLimits

0x151b,	// (0x00087481) clock_t9

0x0008,

0xf147,	// (0x000950ad) clock_t_ParamLimits

0xf147,	// (0x000950ad) clock_t

0xe76d,	// (0x000946d3) popup_clock_analogue_window_cp02

0xe76d,	// (0x000946d3) popup_clock_digital_window_cp01

0xe775,	// (0x000946db) listscroll_help_pane

0xe46c,	// (0x000943d2) phob_pre_status_pane

0xe77f,	// (0x000946e5) grid_qdial_pane

0xe6c7,	// (0x0009462d) listscroll_mce_pane

0xe6c7,	// (0x0009462d) bg_notes_pane

0xe789,	// (0x000946ef) list_notes_pane

0x152f,	// (0x00087495) scroll_pane_cp06

0xe797,	// (0x000946fd) bg_calc_paper_pane

0xb209,	// (0x0009116f) list_calc_pane

0xece1,	// (0x00094c47) bg_calc_display_pane

0x1543,	// (0x000874a9) calc_display_pane_t1

0x1555,	// (0x000874bb) calc_display_pane_t2

0xb223,	// (0x00091189) calc_display_pane_t3

0x0002,

0xf15a,	// (0x000950c0) calc_display_pane_t

0x1567,	// (0x000874cd) cell_calc_pane_ParamLimits

0x1567,	// (0x000874cd) cell_calc_pane

0xeced,	// (0x00094c53) bg_calc_paper_pane_g1

0xecf9,	// (0x00094c5f) bg_calc_paper_pane_g2

0xed05,	// (0x00094c6b) bg_calc_paper_pane_g3

0xed11,	// (0x00094c77) bg_calc_paper_pane_g4

0xed1d,	// (0x00094c83) bg_calc_paper_pane_g5

0x159e,	// (0x00087504) bg_calc_paper_pane_g6

0x15af,	// (0x00087515) bg_calc_paper_pane_g7

0x15c0,	// (0x00087526) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x000950c7) bg_calc_paper_pane_g

0x15d3,	// (0x00087539) calc_bg_paper_pane_g9

0x15e6,	// (0x0008754c) list_calc_item_pane_ParamLimits

0x15e6,	// (0x0008754c) list_calc_item_pane

0xed29,	// (0x00094c8f) list_calc_item_pane_g1

0xb235,	// (0x0009119b) list_calc_item_pane_t1_ParamLimits

0xb235,	// (0x0009119b) list_calc_item_pane_t1

0x1600,	// (0x00087566) list_calc_item_pane_t2_ParamLimits

0x1600,	// (0x00087566) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x000950d8) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x000950d8) list_calc_item_pane_t

0xed36,	// (0x00094c9c) cell_calc_pane_g1

0xed40,	// (0x00094ca6) grid_highlight_pane_cp02

0xed62,	// (0x00094cc8) bg_calc_display_pane_g1

0xb247,	// (0x000911ad) bg_calc_display_pane_g2

0xed6b,	// (0x00094cd1) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x000950e2) bg_calc_display_pane_g

0x1632,	// (0x00087598) cell_qdial_pane_ParamLimits

0x1632,	// (0x00087598) cell_qdial_pane

0x1646,	// (0x000875ac) cell_qdial_pane_g1_ParamLimits

0x1646,	// (0x000875ac) cell_qdial_pane_g1

0x165c,	// (0x000875c2) cell_qdial_pane_g2_ParamLimits

0x165c,	// (0x000875c2) cell_qdial_pane_g2

0xed74,	// (0x00094cda) cell_qdial_pane_g3_ParamLimits

0xed74,	// (0x00094cda) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x000950e9) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x000950e9) cell_qdial_pane_g

0x1682,	// (0x000875e8) cell_qdial_pane_t1_ParamLimits

0x1682,	// (0x000875e8) cell_qdial_pane_t1

0x169a,	// (0x00087600) cell_qdial_pane_t2_ParamLimits

0x169a,	// (0x00087600) cell_qdial_pane_t2

0x16ad,	// (0x00087613) cell_qdial_pane_t3_ParamLimits

0x16ad,	// (0x00087613) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x000950f2) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x000950f2) cell_qdial_pane_t

0xe46c,	// (0x000943d2) grid_highlight_pane_cp04

0xed80,	// (0x00094ce6) thumbnail_qdial_pane_ParamLimits

0xed80,	// (0x00094ce6) thumbnail_qdial_pane

0xeddc,	// (0x00094d42) list_help_pane

0xede5,	// (0x00094d4b) scroll_pane_cp02

0x16c0,	// (0x00087626) help_list_pane_t1_ParamLimits

0x16c0,	// (0x00087626) help_list_pane_t1

0xb251,	// (0x000911b7) bg_notes_pane_g2

0xb259,	// (0x000911bf) bg_notes_pane_g3

0xb261,	// (0x000911c7) notes_bg_pane_g1

0xb269,	// (0x000911cf) notes_bg_pane_g4

0xb271,	// (0x000911d7) notes_bg_pane_g5

0xb279,	// (0x000911df) notes_bg_pane_g6

0xb281,	// (0x000911e7) notes_bg_pane_g7

0xb289,	// (0x000911ef) notes_bg_pane_g8

0xb291,	// (0x000911f7) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x00095110) notes_bg_pane_g

0x16df,	// (0x00087645) list_notes_text_pane_ParamLimits

0x16df,	// (0x00087645) list_notes_text_pane

0xedee,	// (0x00094d54) list_notes_text_pane_g1

0xb299,	// (0x000911ff) list_notes_text_pane_t1

0x16f5,	// (0x0008765b) listscroll_cale_week_pane

0x1721,	// (0x00087687) bg_cale_heading_pane

0xee11,	// (0x00094d77) bg_cale_pane_cp01

0x173f,	// (0x000876a5) cale_week_corner_pane

0x175e,	// (0x000876c4) cale_week_day_heading_pane

0x1781,	// (0x000876e7) cale_week_scroll_pane_g1

0x179a,	// (0x00087700) cale_week_scroll_pane_g2

0x17b2,	// (0x00087718) cale_week_scroll_pane_g3

0x17ca,	// (0x00087730) cale_week_scroll_pane_g4

0x17e2,	// (0x00087748) cale_week_scroll_pane_g5

0x17fe,	// (0x00087764) cale_week_scroll_pane_g6

0x181e,	// (0x00087784) cale_week_scroll_pane_g7

0x183e,	// (0x000877a4) cale_week_scroll_pane_g8

0x1862,	// (0x000877c8) cale_week_scroll_pane_g9

0x187a,	// (0x000877e0) cale_week_scroll_pane_g10

0x1892,	// (0x000877f8) cale_week_scroll_pane_g11

0x18aa,	// (0x00087810) cale_week_scroll_pane_g12

0x18c2,	// (0x00087828) cale_week_scroll_pane_g13

0x18c2,	// (0x00087828) cale_week_scroll_pane_g14

0x18c2,	// (0x00087828) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0009511f) cale_week_scroll_pane_g

0x18da,	// (0x00087840) cale_week_time_pane

0x18fe,	// (0x00087864) grid_cale_week_pane

0xee41,	// (0x00094da7) scroll_pane_cp08

0x1924,	// (0x0008788a) cell_cale_week_pane_ParamLimits

0x1924,	// (0x0008788a) cell_cale_week_pane

0x19b2,	// (0x00087918) cale_week_day_heading_pane_t1

0x19fc,	// (0x00087962) cale_week_day_heading_pane_t2

0x1a4b,	// (0x000879b1) cale_week_day_heading_pane_t3

0x1a9a,	// (0x00087a00) cale_week_day_heading_pane_t4

0x1ae9,	// (0x00087a4f) cale_week_day_heading_pane_t5

0x1b40,	// (0x00087aa6) cale_week_day_heading_pane_t6

0x1b97,	// (0x00087afd) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0009513e) cale_week_day_heading_pane_t

0xee5e,	// (0x00094dc4) bg_cale_side_pane

0x1be1,	// (0x00087b47) cale_week_time_pane_t1

0x1bfb,	// (0x00087b61) cale_week_time_pane_t2

0x1c15,	// (0x00087b7b) cale_week_time_pane_t3

0x1c2f,	// (0x00087b95) cale_week_time_pane_t4

0x1c49,	// (0x00087baf) cale_week_time_pane_t5

0x1c63,	// (0x00087bc9) cale_week_time_pane_t6

0x1c7d,	// (0x00087be3) cale_week_time_pane_t7

0x1c9d,	// (0x00087c03) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0009514d) cale_week_time_pane_t

0x1cbd,	// (0x00087c23) cell_cale_week_pane_g2

0x1cdc,	// (0x00087c42) cell_cale_week_pane_g3_ParamLimits

0x1cdc,	// (0x00087c42) cell_cale_week_pane_g3

0xee6c,	// (0x00094dd2) grid_highlight_pane_cp07

0xee74,	// (0x00094dda) listscroll_gms_pane

0xee7e,	// (0x00094de4) grid_gms_pane

0xee87,	// (0x00094ded) listscroll_gms_pane_g1

0xee8f,	// (0x00094df5) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0009515e) listscroll_gms_pane_g

0x1cf4,	// (0x00087c5a) scroll_pane_cp010

0x1cff,	// (0x00087c65) cell_gms_pane_ParamLimits

0x1cff,	// (0x00087c65) cell_gms_pane

0x1d11,	// (0x00087c77) cell_gms_pane_g1

0xee97,	// (0x00094dfd) cell_gms_pane_g2

0xedee,	// (0x00094d54) cell_gms_pane_g3

0xee9f,	// (0x00094e05) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x00095163) cell_gms_pane_g

0xeea8,	// (0x00094e0e) grid_highlight_pane_cp09

0x5be9,	// (0x0008bb4f) phob_pre_status_pane_g1

0x5bf1,	// (0x0008bb57) phob_pre_status_pane_g2

0x5bf9,	// (0x0008bb5f) phob_pre_status_pane_g3

0x5c01,	// (0x0008bb67) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x00095552) phob_pre_status_pane_g

0x5c11,	// (0x0008bb77) phob_pre_status_pane_t1

0x5c1f,	// (0x0008bb85) phob_pre_status_pane_t2

0x5c2f,	// (0x0008bb95) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0009555d) phob_pre_status_pane_t

0xe46c,	// (0x000943d2) bg_list_pane_cp05

0x1d21,	// (0x00087c87) grid_vorec_pane

0x1d2d,	// (0x00087c93) vorec_t1

0x1d3b,	// (0x00087ca1) vorec_t2

0x1d49,	// (0x00087caf) vorec_t3

0x1d57,	// (0x00087cbd) vorec_t4

0x1d65,	// (0x00087ccb) vorec_t5

0xb2a7,	// (0x0009120d) vorec_t6

0x0006,

0xf206,	// (0x0009516c) vorec_t

0x1d81,	// (0x00087ce7) wait_bar_pane_cp01

0x1d89,	// (0x00087cef) cell_vorec_pane_ParamLimits

0x1d89,	// (0x00087cef) cell_vorec_pane

0xeeb0,	// (0x00094e16) cell_vorec_pane_g1

0xe46c,	// (0x000943d2) grid_highlight_pane_cp05

0x1db4,	// (0x00087d1a) cams_zoom_pane

0x1dc3,	// (0x00087d29) image_vga_pane

0x1ddd,	// (0x00087d43) main_camera_pane_g1

0x1def,	// (0x00087d55) main_camera_pane_g2

0x1dff,	// (0x00087d65) main_camera_pane_g3

0x1e11,	// (0x00087d77) main_camera_pane_g4

0x1e23,	// (0x00087d89) main_camera_pane_g5

0x1e35,	// (0x00087d9b) main_camera_pane_g6

0x1e47,	// (0x00087dad) main_camera_pane_g7

0x0007,

0xf215,	// (0x0009517b) main_camera_pane_g

0x1e59,	// (0x00087dbf) main_camera_pane_t1

0x1e6f,	// (0x00087dd5) main_camera_pane_t2

0x0001,

0xf226,	// (0x0009518c) main_camera_pane_t

0x1eab,	// (0x00087e11) cams_zoom_pane_cp_ParamLimits

0x1eab,	// (0x00087e11) cams_zoom_pane_cp

0x1ed3,	// (0x00087e39) image_cif_pane_ParamLimits

0x1ed3,	// (0x00087e39) image_cif_pane

0x1f0e,	// (0x00087e74) image_subqcif_pane

0x1f16,	// (0x00087e7c) main_video_pane_g1_ParamLimits

0x1f16,	// (0x00087e7c) main_video_pane_g1

0x1f3a,	// (0x00087ea0) main_video_pane_g2_ParamLimits

0x1f3a,	// (0x00087ea0) main_video_pane_g2

0x1f6e,	// (0x00087ed4) main_video_pane_g3_ParamLimits

0x1f6e,	// (0x00087ed4) main_video_pane_g3

0x1f9c,	// (0x00087f02) main_video_pane_g4_ParamLimits

0x1f9c,	// (0x00087f02) main_video_pane_g4

0x1fca,	// (0x00087f30) main_video_pane_g5_ParamLimits

0x1fca,	// (0x00087f30) main_video_pane_g5

0xeec6,	// (0x00094e2c) main_video_pane_g6_ParamLimits

0xeec6,	// (0x00094e2c) main_video_pane_g6

0x0006,

0xf22b,	// (0x00095191) main_video_pane_g_ParamLimits

0xf22b,	// (0x00095191) main_video_pane_g

0x1ff3,	// (0x00087f59) main_video_pane_t1_ParamLimits

0x1ff3,	// (0x00087f59) main_video_pane_t1

0xeee0,	// (0x00094e46) cams_zoom_pane_g1

0xeee9,	// (0x00094e4f) cams_zoom_pane_g2

0xeef2,	// (0x00094e58) cams_zoom_pane_g3

0xeefb,	// (0x00094e61) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x000951a0) cams_zoom_pane_g

0x2050,	// (0x00087fb6) grid_cams_pane

0x206a,	// (0x00087fd0) linegrid_cams_pane

0x207d,	// (0x00087fe3) cell_cams_pane_ParamLimits

0x207d,	// (0x00087fe3) cell_cams_pane

0xef04,	// (0x00094e6a) cams_burst_image_pane

0xef0c,	// (0x00094e72) cell_cams_pane_g1

0xe46c,	// (0x000943d2) grid_highlight_pane_cp03

0xed36,	// (0x00094c9c) mp_bg_pane_g1

0xe46c,	// (0x000943d2) bg_list_pane_cp03

0x5b1e,	// (0x0008ba84) bg_mp_pane

0x5b26,	// (0x0008ba8c) grid_mp_pane

0x5b2e,	// (0x0008ba94) media_player_g1

0x5b36,	// (0x0008ba9c) media_player_t1

0x5b44,	// (0x0008baaa) media_player_t2

0x5b52,	// (0x0008bab8) media_player_t3

0x5b60,	// (0x0008bac6) media_player_t4

0x5b6e,	// (0x0008bad4) media_player_t5

0x5b7c,	// (0x0008bae2) media_player_t6

0x5b8a,	// (0x0008baf0) media_player_t7

0x0006,

0xf5d6,	// (0x0009553c) media_player_t

0x5b98,	// (0x0008bafe) wait_bar_pane_cp02

0xf5bb,	// (0x00095521) main_usb_pane_t

0x5be0,	// (0x0008bb46) cell_mp_pane

0xed36,	// (0x00094c9c) cell_mp_pane_g1

0xe46c,	// (0x000943d2) grid_highlight_pane_cp06

0xef14,	// (0x00094e7a) grid_skin_colour_pane

0xef1c,	// (0x00094e82) list_highlight_pane_cp03

0x209d,	// (0x00088003) skin_g1

0xef24,	// (0x00094e8a) skin_t1

0xef33,	// (0x00094e99) skin_t2

0x0001,

0xf26f,	// (0x000951d5) skin_t

0x20a5,	// (0x0008800b) cell_skin_colour_pane_ParamLimits

0x20a5,	// (0x0008800b) cell_skin_colour_pane

0xef41,	// (0x00094ea7) cell_skin_colour_pane_g1

0x211e,	// (0x00088084) call_video_g1_ParamLimits

0x211e,	// (0x00088084) call_video_g1

0x213a,	// (0x000880a0) call_video_g2_ParamLimits

0x213a,	// (0x000880a0) call_video_g2

0x0001,

0xf274,	// (0x000951da) call_video_g_ParamLimits

0xf274,	// (0x000951da) call_video_g

0x218c,	// (0x000880f2) call_video_uplink_pane_cp1_ParamLimits

0x218c,	// (0x000880f2) call_video_uplink_pane_cp1

0xef53,	// (0x00094eb9) call_video_uplink_pane_cp2

0x222b,	// (0x00088191) video_down_crop_pane_ParamLimits

0x222b,	// (0x00088191) video_down_crop_pane

0x2314,	// (0x0008827a) video_down_pane_ParamLimits

0x2314,	// (0x0008827a) video_down_pane

0xef5b,	// (0x00094ec1) video_down_subqcif_pane_ParamLimits

0xef5b,	// (0x00094ec1) video_down_subqcif_pane

0xef73,	// (0x00094ed9) video_down_subqcif_pane_cp_ParamLimits

0xef73,	// (0x00094ed9) video_down_subqcif_pane_cp

0xef99,	// (0x00094eff) im_reading_pane_ParamLimits

0xef99,	// (0x00094eff) im_reading_pane

0x2422,	// (0x00088388) im_writing_pane_ParamLimits

0x2422,	// (0x00088388) im_writing_pane

0x2438,	// (0x0008839e) im_reading_pane_t1

0xefb3,	// (0x00094f19) list_im_pane

0xefc4,	// (0x00094f2a) scroll_pane_cp07

0x2475,	// (0x000883db) im_writing_pane_t1_ParamLimits

0x2475,	// (0x000883db) im_writing_pane_t1

0xefdd,	// (0x00094f43) im_writing_pane_t2_ParamLimits

0xefdd,	// (0x00094f43) im_writing_pane_t2

0x0001,

0xf27e,	// (0x000951e4) im_writing_pane_t_ParamLimits

0xf27e,	// (0x000951e4) im_writing_pane_t

0xe46c,	// (0x000943d2) input_focus_pane_cp04

0xe46c,	// (0x000943d2) input_focus_pane_cp05

0x248a,	// (0x000883f0) list_im_single_pane_ParamLimits

0x248a,	// (0x000883f0) list_im_single_pane

0x24a0,	// (0x00088406) list_single_im_pane_t1

0x5ba0,	// (0x0008bb06) blid_accuracy_pane

0x5ba8,	// (0x0008bb0e) blid_compass_pane

0x5bb2,	// (0x0008bb18) main_location_t1

0x5bc2,	// (0x0008bb28) main_location_t2

0x5bd2,	// (0x0008bb38) main_location_t3

0x0002,

0xf5e5,	// (0x0009554b) main_location_t

0xe46c,	// (0x000943d2) aid_levels_location

0xed36,	// (0x00094c9c) blid_accuracy_pane_g1

0xed36,	// (0x00094c9c) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x00095246) blid_accuracy_pane_g

0xf025,	// (0x00094f8b) wml_content_pane

0xf063,	// (0x00094fc9) wml_button_pane_ParamLimits

0xf063,	// (0x00094fc9) wml_button_pane

0x24af,	// (0x00088415) wml_list_single_large_pane_ParamLimits

0x24af,	// (0x00088415) wml_list_single_large_pane

0x24c5,	// (0x0008842b) wml_list_single_medium_pane_ParamLimits

0x24c5,	// (0x0008842b) wml_list_single_medium_pane

0x24df,	// (0x00088445) wml_list_single_small_pane_ParamLimits

0x24df,	// (0x00088445) wml_list_single_small_pane

0xf077,	// (0x00094fdd) wml_selection_box_pane_ParamLimits

0xf077,	// (0x00094fdd) wml_selection_box_pane

0xf08a,	// (0x00094ff0) wml_list_single_pane_t1

0xf099,	// (0x00094fff) wml_list_single_medium_pane_t1

0xf0a8,	// (0x0009500e) wml_list_single_large_pane_t1

0xf0b7,	// (0x0009501d) input_focus_pane_cp02_ParamLimits

0xf0b7,	// (0x0009501d) input_focus_pane_cp02

0x24f9,	// (0x0008845f) wml_selection_box_pane_g1

0x2502,	// (0x00088468) wml_selection_box_pane_t1_ParamLimits

0x2502,	// (0x00088468) wml_selection_box_pane_t1

0xe6c7,	// (0x0009462d) bg_wml_button_pane_ParamLimits

0xe6c7,	// (0x0009462d) bg_wml_button_pane

0x251a,	// (0x00088480) wml_button_pane_g1

0x2522,	// (0x00088488) wml_button_pane_t1

0x251a,	// (0x00088480) wml_button_bg_pane_g1

0x2532,	// (0x00088498) wml_button_bg_pane_g2

0x253a,	// (0x000884a0) wml_button_bg_pane_g3

0x2542,	// (0x000884a8) wml_button_bg_pane_g4

0x254a,	// (0x000884b0) wml_button_bg_pane_g5

0x2552,	// (0x000884b8) wml_button_bg_pane_g6

0x255a,	// (0x000884c0) wml_button_bg_pane_g7

0x2562,	// (0x000884c8) wml_button_bg_pane_g8

0x256a,	// (0x000884d0) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x000951e9) wml_button_bg_pane_g

0x2572,	// (0x000884d8) bg_list_pane_cp02

0x257a,	// (0x000884e0) mce_header_pane_ParamLimits

0x257a,	// (0x000884e0) mce_header_pane

0x2590,	// (0x000884f6) mce_icon_pane

0x2590,	// (0x000884f6) mce_image_pane

0x2599,	// (0x000884ff) mce_text_pane_ParamLimits

0x2599,	// (0x000884ff) mce_text_pane

0x25ac,	// (0x00088512) scroll_pane_cp03

0xf05b,	// (0x00094fc1) scroll_pane_cp04

0x25b6,	// (0x0008851c) scroll_pane_cp05_ParamLimits

0x25b6,	// (0x0008851c) scroll_pane_cp05

0x25c2,	// (0x00088528) mce_header_field_pane_ParamLimits

0x25c2,	// (0x00088528) mce_header_field_pane

0x25d9,	// (0x0008853f) mce_header_field_pane_2_ParamLimits

0x25d9,	// (0x0008853f) mce_header_field_pane_2

0x25ef,	// (0x00088555) mce_header_field_pane_3

0x25f7,	// (0x0008855d) list_single_mce_message_pane_ParamLimits

0x25f7,	// (0x0008855d) list_single_mce_message_pane

0x260e,	// (0x00088574) list_single_mce_smart_pane_ParamLimits

0x260e,	// (0x00088574) list_single_mce_smart_pane

0x2630,	// (0x00088596) input_focus_pane_cp03

0x2639,	// (0x0008859f) list_header_data_pane

0x2641,	// (0x000885a7) mce_header_field_pane_t1

0x2651,	// (0x000885b7) list_single_mce_header_pane_ParamLimits

0x2651,	// (0x000885b7) list_single_mce_header_pane

0x2665,	// (0x000885cb) list_single_mce_header_pane_t1

0x2674,	// (0x000885da) list_single_mce_message_pane_g1

0x267c,	// (0x000885e2) list_single_mce_message_pane_t1

0x26b0,	// (0x00088616) bg_cale_heading_pane_cp01_ParamLimits

0x26b0,	// (0x00088616) bg_cale_heading_pane_cp01

0x26eb,	// (0x00088651) bg_cale_pane_cp02_ParamLimits

0x26eb,	// (0x00088651) bg_cale_pane_cp02

0x2718,	// (0x0008867e) cale_month_corner_pane

0x2737,	// (0x0008869d) cale_month_day_heading_pane_ParamLimits

0x2737,	// (0x0008869d) cale_month_day_heading_pane

0x278a,	// (0x000886f0) cale_month_pane_g1_ParamLimits

0x278a,	// (0x000886f0) cale_month_pane_g1

0x27ba,	// (0x00088720) cale_month_pane_g2_ParamLimits

0x27ba,	// (0x00088720) cale_month_pane_g2

0x27ea,	// (0x00088750) cale_month_pane_g3_ParamLimits

0x27ea,	// (0x00088750) cale_month_pane_g3

0x2826,	// (0x0008878c) cale_month_pane_g4_ParamLimits

0x2826,	// (0x0008878c) cale_month_pane_g4

0x2862,	// (0x000887c8) cale_month_pane_g5_ParamLimits

0x2862,	// (0x000887c8) cale_month_pane_g5

0x28aa,	// (0x00088810) cale_month_pane_g6_ParamLimits

0x28aa,	// (0x00088810) cale_month_pane_g6

0x28f6,	// (0x0008885c) cale_month_pane_g7_ParamLimits

0x28f6,	// (0x0008885c) cale_month_pane_g7

0x294a,	// (0x000888b0) cale_month_pane_g8_ParamLimits

0x294a,	// (0x000888b0) cale_month_pane_g8

0x299e,	// (0x00088904) cale_month_pane_g9_ParamLimits

0x299e,	// (0x00088904) cale_month_pane_g9

0x29f0,	// (0x00088956) cale_month_pane_g10_ParamLimits

0x29f0,	// (0x00088956) cale_month_pane_g10

0x2a42,	// (0x000889a8) cale_month_pane_g11_ParamLimits

0x2a42,	// (0x000889a8) cale_month_pane_g11

0x2a94,	// (0x000889fa) cale_month_pane_g12_ParamLimits

0x2a94,	// (0x000889fa) cale_month_pane_g12

0x2ae6,	// (0x00088a4c) cale_month_pane_g13_ParamLimits

0x2ae6,	// (0x00088a4c) cale_month_pane_g13

0x000c,

0xf296,	// (0x000951fc) cale_month_pane_g_ParamLimits

0xf296,	// (0x000951fc) cale_month_pane_g

0x2b4a,	// (0x00088ab0) cale_month_week_pane

0x2b6e,	// (0x00088ad4) grid_cale_month_pane_ParamLimits

0x2b6e,	// (0x00088ad4) grid_cale_month_pane

0x2bac,	// (0x00088b12) cale_month_day_heading_pane_t1

0x2c32,	// (0x00088b98) cale_month_day_heading_pane_t2

0x2cc3,	// (0x00088c29) cale_month_day_heading_pane_t3

0x2d54,	// (0x00088cba) cale_month_day_heading_pane_t4

0x2ded,	// (0x00088d53) cale_month_day_heading_pane_t5

0x2e8e,	// (0x00088df4) cale_month_day_heading_pane_t6

0x2f2f,	// (0x00088e95) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x00095217) cale_month_day_heading_pane_t

0xee5e,	// (0x00094dc4) bg_cale_side_pane_cp01

0x2fd8,	// (0x00088f3e) cale_month_week_pane_t1

0x2ff1,	// (0x00088f57) cale_month_week_pane_t2

0x300a,	// (0x00088f70) cale_month_week_pane_t3

0x3023,	// (0x00088f89) cale_month_week_pane_t4

0x303c,	// (0x00088fa2) cale_month_week_pane_t5

0x3055,	// (0x00088fbb) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x00095226) cale_month_week_pane_t

0x306e,	// (0x00088fd4) cell_cale_month_pane_ParamLimits

0x306e,	// (0x00088fd4) cell_cale_month_pane

0xb2b5,	// (0x0009121b) cell_cale_month_pane_g1

0x319c,	// (0x00089102) cell_cale_month_pane_t1_ParamLimits

0x319c,	// (0x00089102) cell_cale_month_pane_t1

0xee6c,	// (0x00094dd2) grid_highlight_pane_cp08

0xed36,	// (0x00094c9c) main_smil_g1

0x31bc,	// (0x00089122) smil_status_pane

0x31c7,	// (0x0008912d) smil_text_pane

0x59b4,	// (0x0008b91a) bg_popup_call3_rect_pane_g8

0x59bc,	// (0x0008b922) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x000954df) bg_popup_call3_rect_pane_g

0x6253,	// (0x0008c1b9) smil_status_volume_pane_g1

0x31db,	// (0x00089141) smil_status_pane_t1

0xb40b,	// (0x00091371) volume_smil_pane

0x31f2,	// (0x00089158) list_smil_text_pane

0x31fc,	// (0x00089162) scroll_pane_cp011

0x3207,	// (0x0008916d) smil_text_list_pane_t1_ParamLimits

0x3207,	// (0x0008916d) smil_text_list_pane_t1

0xb2c1,	// (0x00091227) aid_volume_smil_ParamLimits

0xb2c1,	// (0x00091227) aid_volume_smil

0xed36,	// (0x00094c9c) smil_volume_pane_g1

0xed36,	// (0x00094c9c) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x00095246) smil_volume_pane_g

0x16f5,	// (0x0008765b) listscroll_cale_day_pane

0x3249,	// (0x000891af) bg_cale_pane

0x3261,	// (0x000891c7) list_cale_pane

0x3284,	// (0x000891ea) scroll_pane_cp09

0x3295,	// (0x000891fb) cale_bg_pane_g1

0x329d,	// (0x00089203) cale_bg_pane_g2

0x32a5,	// (0x0008920b) cale_bg_pane_g3

0x32ad,	// (0x00089213) cale_bg_pane_g4

0x32b5,	// (0x0008921b) cale_bg_pane_g5

0x32bd,	// (0x00089223) cale_bg_pane_g6

0x32c5,	// (0x0008922b) cale_bg_pane_g7

0x32cd,	// (0x00089233) cale_bg_pane_g8

0x32d5,	// (0x0008923b) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0009524b) cale_bg_pane_g

0x32dd,	// (0x00089243) list_cale_time_pane_ParamLimits

0x32dd,	// (0x00089243) list_cale_time_pane

0x32f1,	// (0x00089257) list_cale_time_pane_g1_ParamLimits

0x32f1,	// (0x00089257) list_cale_time_pane_g1

0x32fd,	// (0x00089263) list_cale_time_pane_g2_ParamLimits

0x32fd,	// (0x00089263) list_cale_time_pane_g2

0x330a,	// (0x00089270) list_cale_time_pane_g3_ParamLimits

0x330a,	// (0x00089270) list_cale_time_pane_g3

0x3318,	// (0x0008927e) list_cale_time_pane_g4_ParamLimits

0x3318,	// (0x0008927e) list_cale_time_pane_g4

0x3326,	// (0x0008928c) list_cale_time_pane_g5_ParamLimits

0x3326,	// (0x0008928c) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0009525e) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0009525e) list_cale_time_pane_g

0x3341,	// (0x000892a7) list_cale_time_pane_t1_ParamLimits

0x3341,	// (0x000892a7) list_cale_time_pane_t1

0x3369,	// (0x000892cf) list_cale_time_pane_t2_ParamLimits

0x3369,	// (0x000892cf) list_cale_time_pane_t2

0x3a38,	// (0x0008999e) aid_blid_cardinal_pane

0x3a82,	// (0x000899e8) compass_pane_t4

0x3391,	// (0x000892f7) list_cale_time_pane_t4_ParamLimits

0x3391,	// (0x000892f7) list_cale_time_pane_t4

0x3a90,	// (0x000899f6) compass_pane_t5

0x3a9e,	// (0x00089a04) compass_pane_t6

0x3aac,	// (0x00089a12) compass_pane_t7

0x3b42,	// (0x00089aa8) navi_pane_cc_t1

0x3d67,	// (0x00089ccd) aid_phob_thumbnail_center_pane

0x43a7,	// (0x0008a30d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0009526b) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0009526b) list_cale_time_pane_t

0xe0c3,	// (0x00094029) bg_popup_window_pane_cp02_ParamLimits

0xe0c3,	// (0x00094029) bg_popup_window_pane_cp02

0x33b9,	// (0x0008931f) heading_pane_cp01_ParamLimits

0x33b9,	// (0x0008931f) heading_pane_cp01

0x33c5,	// (0x0008932b) loc_req_pane_ParamLimits

0x33c5,	// (0x0008932b) loc_req_pane

0x33d5,	// (0x0008933b) loc_type_pane_ParamLimits

0x33d5,	// (0x0008933b) loc_type_pane

0x33e7,	// (0x0008934d) loc_type_pane_t1_ParamLimits

0x33e7,	// (0x0008934d) loc_type_pane_t1

0x33f9,	// (0x0008935f) loc_type_pane_t2_ParamLimits

0x33f9,	// (0x0008935f) loc_type_pane_t2

0x340b,	// (0x00089371) loc_type_pane_t3_ParamLimits

0x340b,	// (0x00089371) loc_type_pane_t3

0x0002,

0xf30c,	// (0x00095272) loc_type_pane_t_ParamLimits

0xf30c,	// (0x00095272) loc_type_pane_t

0x341d,	// (0x00089383) list_loc_req_pane

0x3427,	// (0x0008938d) scroll_pane_cp012

0x3432,	// (0x00089398) list_single_loc_request_popup_menu_pane_ParamLimits

0x3432,	// (0x00089398) list_single_loc_request_popup_menu_pane

0x343f,	// (0x000893a5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x343f,	// (0x000893a5) list_single_loc_request_popup_menu_pane_g1

0x344b,	// (0x000893b1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x344b,	// (0x000893b1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x00095279) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x00095279) list_single_loc_request_popup_menu_pane_g

0x3457,	// (0x000893bd) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3457,	// (0x000893bd) list_single_loc_request_popup_menu_pane_t1

0xe6c7,	// (0x0009462d) bg_popup_window_pane_cp03_ParamLimits

0xe6c7,	// (0x0009462d) bg_popup_window_pane_cp03

0x346d,	// (0x000893d3) heading_loc_req_pane_ParamLimits

0x346d,	// (0x000893d3) heading_loc_req_pane

0x3479,	// (0x000893df) popup_dyc_status_message_window_g1_ParamLimits

0x3479,	// (0x000893df) popup_dyc_status_message_window_g1

0x348d,	// (0x000893f3) popup_dyc_status_message_window_t1_ParamLimits

0x348d,	// (0x000893f3) popup_dyc_status_message_window_t1

0x34a2,	// (0x00089408) popup_dyc_status_message_window_t2_ParamLimits

0x34a2,	// (0x00089408) popup_dyc_status_message_window_t2

0x34b7,	// (0x0008941d) popup_dyc_status_message_window_t3_ParamLimits

0x34b7,	// (0x0008941d) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0009527e) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0009527e) popup_dyc_status_message_window_t

0xe46c,	// (0x000943d2) bg_heading_pane_cp01

0x34d3,	// (0x00089439) heading_loc_req_pane_g1

0x34db,	// (0x00089441) heading_loc_req_pane_g2

0x34e3,	// (0x00089449) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x00095285) heading_loc_req_pane_g

0x34eb,	// (0x00089451) heading_loc_req_pane_t1

0x3512,	// (0x00089478) bg_popup_sub_pane_cp01_ParamLimits

0x3512,	// (0x00089478) bg_popup_sub_pane_cp01

0x3520,	// (0x00089486) popup_cale_events_window_g1_ParamLimits

0x3520,	// (0x00089486) popup_cale_events_window_g1

0x3540,	// (0x000894a6) popup_cale_events_window_g2_ParamLimits

0x3540,	// (0x000894a6) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x000952b9) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x000952b9) popup_cale_events_window_g

0x3560,	// (0x000894c6) popup_cale_events_window_t1_ParamLimits

0x3560,	// (0x000894c6) popup_cale_events_window_t1

0x3572,	// (0x000894d8) popup_cale_events_window_t2_ParamLimits

0x3572,	// (0x000894d8) popup_cale_events_window_t2

0x35b0,	// (0x00089516) popup_cale_events_window_t3_ParamLimits

0x35b0,	// (0x00089516) popup_cale_events_window_t3

0x35ea,	// (0x00089550) popup_cale_events_window_t4_ParamLimits

0x35ea,	// (0x00089550) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x000952be) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x000952be) popup_cale_events_window_t

0x3620,	// (0x00089586) call_type_pane

0x3630,	// (0x00089596) popup_call_status_window_g1

0x3644,	// (0x000895aa) popup_call_status_window_g2

0x3658,	// (0x000895be) popup_call_status_window_g3

0x0002,

0xf361,	// (0x000952c7) popup_call_status_window_g

0x3667,	// (0x000895cd) call_type_pane_g1

0x3670,	// (0x000895d6) call_type_pane_g2

0x0001,

0xf368,	// (0x000952ce) call_type_pane_g

0xe46c,	// (0x000943d2) bg_popup_sub_pane_cp02

0x3679,	// (0x000895df) listscroll_popup_wml_pane

0x3681,	// (0x000895e7) list_wml_pane

0x368b,	// (0x000895f1) scroll_pane_cp013

0x3696,	// (0x000895fc) list_single_graphic_popup_wml_pane_ParamLimits

0x3696,	// (0x000895fc) list_single_graphic_popup_wml_pane

0xed36,	// (0x00094c9c) list_single_graphic_popup_wml_pane_g1

0x36aa,	// (0x00089610) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x000952d3) list_single_graphic_popup_wml_pane_g

0x36b2,	// (0x00089618) list_single_graphic_popup_wml_pane_t1

0x36c8,	// (0x0008962e) aid_call_pane

0xe6bf,	// (0x00094625) popup_clock_analogue_window_g1

0xe6bf,	// (0x00094625) popup_clock_analogue_window_g2

0xb2e3,	// (0x00091249) popup_clock_analogue_window_g3

0xb2e3,	// (0x00091249) popup_clock_analogue_window_g4

0xed36,	// (0x00094c9c) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x000952d8) popup_clock_analogue_window_g

0xb2eb,	// (0x00091251) popup_clock_analogue_window_t1

0xb2f9,	// (0x0009125f) clock_digital_number_pane_ParamLimits

0xb2f9,	// (0x0009125f) clock_digital_number_pane

0xb305,	// (0x0009126b) clock_digital_number_pane_cp02_ParamLimits

0xb305,	// (0x0009126b) clock_digital_number_pane_cp02

0xb311,	// (0x00091277) clock_digital_number_pane_cp03_ParamLimits

0xb311,	// (0x00091277) clock_digital_number_pane_cp03

0xb31d,	// (0x00091283) clock_digital_number_pane_cp04_ParamLimits

0xb31d,	// (0x00091283) clock_digital_number_pane_cp04

0xb32d,	// (0x00091293) clock_digital_separator_pane_ParamLimits

0xb32d,	// (0x00091293) clock_digital_separator_pane

0xb339,	// (0x0009129f) popup_clock_digital_window_t1

0xed36,	// (0x00094c9c) clock_digital_number_pane_g1

0xed36,	// (0x00094c9c) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x00095246) clock_digital_number_pane_g

0xed36,	// (0x00094c9c) clock_digital_separator_pane_g1

0xed36,	// (0x00094c9c) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x00095246) clock_digital_separator_pane_g

0xe46c,	// (0x000943d2) bg_popup_window_pane_cp04

0x36d0,	// (0x00089636) heading_pane_cp03

0x36d8,	// (0x0008963e) listscroll_popup_gms_pane

0x36e0,	// (0x00089646) grid_large_graphic_popup_pane

0x36ea,	// (0x00089650) listscroll_popup_gms_pane_g1

0x36f2,	// (0x00089658) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x000952e3) listscroll_popup_gms_pane_g

0xf05b,	// (0x00094fc1) scroll_pane_cp014

0x36fa,	// (0x00089660) cell_large_graphic_popup_pane_ParamLimits

0x36fa,	// (0x00089660) cell_large_graphic_popup_pane

0x3712,	// (0x00089678) cell_large_graphic_popup_pane_g1_ParamLimits

0x3712,	// (0x00089678) cell_large_graphic_popup_pane_g1

0x371e,	// (0x00089684) cell_large_graphic_popup_pane_g2_ParamLimits

0x371e,	// (0x00089684) cell_large_graphic_popup_pane_g2

0x372a,	// (0x00089690) cell_large_graphic_popup_pane_g3_ParamLimits

0x372a,	// (0x00089690) cell_large_graphic_popup_pane_g3

0x3737,	// (0x0008969d) cell_large_graphic_popup_pane_g4_ParamLimits

0x3737,	// (0x0008969d) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x000952e8) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x000952e8) cell_large_graphic_popup_pane_g

0x3747,	// (0x000896ad) grid_highlight_pane_cp010

0xed36,	// (0x00094c9c) bg_popup_call_pane_g1

0x3751,	// (0x000896b7) list_single_graphic_popup_conf_pane_ParamLimits

0x3751,	// (0x000896b7) list_single_graphic_popup_conf_pane

0x3764,	// (0x000896ca) list_highlight_pane_cp01

0x376d,	// (0x000896d3) list_single_graphic_popup_conf_pane_g1

0x3775,	// (0x000896db) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x000952f1) list_single_graphic_popup_conf_pane_g

0x377d,	// (0x000896e3) list_single_graphic_popup_conf_pane_t1

0x378b,	// (0x000896f1) linegrid_cams_pane_g1

0x3794,	// (0x000896fa) linegrid_cams_pane_g2

0xedee,	// (0x00094d54) linegrid_cams_pane_g3

0x379d,	// (0x00089703) linegrid_cams_pane_g4

0x37a6,	// (0x0008970c) linegrid_cams_pane_g5

0x37af,	// (0x00089715) linegrid_cams_pane_g6

0xee9f,	// (0x00094e05) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x000952f6) linegrid_cams_pane_g

0x37ba,	// (0x00089720) popup_clock_analogue_window

0x37ba,	// (0x00089720) popup_clock_digital_window

0xe46c,	// (0x000943d2) popup_phob_thumbnail_window

0xed36,	// (0x00094c9c) call_video_uplink_pane_g1

0x37c3,	// (0x00089729) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x00095305) call_video_uplink_pane_g

0xee6c,	// (0x00094dd2) video_uplink_pane

0x37cb,	// (0x00089731) mce_image_pane_g1

0x37d5,	// (0x0008973b) mce_image_pane_g2

0x37dd,	// (0x00089743) mce_image_pane_g3

0x37e5,	// (0x0008974b) mce_image_pane_g4

0x37ef,	// (0x00089755) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0009530a) mce_image_pane_g

0x37f7,	// (0x0008975d) control_top_pane_stacon_cp01_ParamLimits

0x37f7,	// (0x0008975d) control_top_pane_stacon_cp01

0x380b,	// (0x00089771) uni_indicator_pane_stacon_cp01_ParamLimits

0x380b,	// (0x00089771) uni_indicator_pane_stacon_cp01

0x381c,	// (0x00089782) bg_popup_sub_pane_cp03

0x3826,	// (0x0008978c) chi_dic_find_pane

0x382e,	// (0x00089794) listscroll_chi_dic_pane

0x3837,	// (0x0008979d) main_pane_chidic_g1

0x384a,	// (0x000897b0) chi_dic_find_pane_t1

0x3858,	// (0x000897be) find_chidic_pane

0x3861,	// (0x000897c7) chi_dic_list_pane_ParamLimits

0x3861,	// (0x000897c7) chi_dic_list_pane

0x3872,	// (0x000897d8) scroll_pane_cp020

0x387a,	// (0x000897e0) find_chidic_pane_t1

0xe46c,	// (0x000943d2) input_focus_pane_cp06

0x3889,	// (0x000897ef) list_chi_dic_pane_ParamLimits

0x3889,	// (0x000897ef) list_chi_dic_pane

0x389c,	// (0x00089802) list_chi_dic_pane_t1_ParamLimits

0x389c,	// (0x00089802) list_chi_dic_pane_t1

0xe46c,	// (0x000943d2) list_highlight_pane_cp020

0x38af,	// (0x00089815) bg_cale_heading_pane_g1

0x38b7,	// (0x0008981d) bg_cale_heading_pane_g2

0x38bf,	// (0x00089825) bg_cale_heading_pane_g3

0x38c7,	// (0x0008982d) bg_cale_heading_pane_g4

0x38d1,	// (0x00089837) bg_cale_heading_pane_g5

0x38db,	// (0x00089841) bg_cale_heading_pane_g6

0x38e3,	// (0x00089849) bg_cale_heading_pane_g7

0x38eb,	// (0x00089851) bg_cale_heading_pane_g8

0x38f5,	// (0x0008985b) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x00095315) bg_cale_heading_pane_g

0x38af,	// (0x00089815) bg_cale_side_pane_g1

0x38ff,	// (0x00089865) bg_cale_side_pane_g2

0x3907,	// (0x0008986d) bg_cale_side_pane_g3

0x390f,	// (0x00089875) bg_cale_side_pane_g4

0x3917,	// (0x0008987d) bg_cale_side_pane_g5

0x391f,	// (0x00089885) bg_cale_side_pane_g6

0x3927,	// (0x0008988d) bg_cale_side_pane_g7

0x392f,	// (0x00089895) bg_cale_side_pane_g8

0x3937,	// (0x0008989d) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x00095328) bg_cale_side_pane_g

0x393f,	// (0x000898a5) popup_call_status_window_ParamLimits

0x393f,	// (0x000898a5) popup_call_status_window

0x3986,	// (0x000898ec) stacon_top_pane

0x398e,	// (0x000898f4) status_pane_ParamLimits

0x398e,	// (0x000898f4) status_pane

0x39a3,	// (0x00089909) status_small_pane

0x39ab,	// (0x00089911) control_pane

0xe46c,	// (0x000943d2) stacon_bottom_pane

0x39b3,	// (0x00089919) list_single_mce_smart_pane_t1_ParamLimits

0x39b3,	// (0x00089919) list_single_mce_smart_pane_t1

0x39c6,	// (0x0008992c) list_single_mce_smart_pane_t2_ParamLimits

0x39c6,	// (0x0008992c) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0009533b) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0009533b) list_single_mce_smart_pane_t

0x39e5,	// (0x0008994b) compass_pane

0x39ee,	// (0x00089954) main_location2_pane_t1

0x3a00,	// (0x00089966) main_location2_pane_t2

0x3a12,	// (0x00089978) main_location2_pane_t3

0x0003,

0xf3da,	// (0x00095340) main_location2_pane_t

0x3a58,	// (0x000899be) compass_pane_g1_ParamLimits

0x3a58,	// (0x000899be) compass_pane_g1

0x3a64,	// (0x000899ca) compass_pane_t1

0x3a73,	// (0x000899d9) compass_pane_t2

0x0005,

0xf3e3,	// (0x00095349) compass_pane_t

0x3aba,	// (0x00089a20) text_secondary_cp61

0x3b39,	// (0x00089a9f) navi_pane_cams_g5

0x3bb3,	// (0x00089b19) navi_pane_im_t1

0x3bc1,	// (0x00089b27) navi_pane_mp_g1_ParamLimits

0x3bc1,	// (0x00089b27) navi_pane_mp_g1

0x3bd5,	// (0x00089b3b) navi_pane_mp_g2_ParamLimits

0x3bd5,	// (0x00089b3b) navi_pane_mp_g2

0x3be1,	// (0x00089b47) navi_pane_mp_g3_ParamLimits

0x3be1,	// (0x00089b47) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0009535d) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0009535d) navi_pane_mp_g

0x3bed,	// (0x00089b53) navi_pane_mp_t1

0x3bfb,	// (0x00089b61) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x00095364) navi_pane_mp_t

0x3ca8,	// (0x00089c0e) navi_pane_vt_g1

0x3bed,	// (0x00089b53) navi_pane_vt_t1

0x3cb0,	// (0x00089c16) navi_slider_pane

0x3cc0,	// (0x00089c26) zooming_pane

0x3cc8,	// (0x00089c2e) navi_slider_pane_g1

0xb356,	// (0x000912bc) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0009536b) navi_slider_pane_g

0x3cec,	// (0x00089c52) aid_levels_zoom

0x3cf4,	// (0x00089c5a) zooming_pane_g1

0x3cfc,	// (0x00089c62) zooming_pane_g2

0x3cfc,	// (0x00089c62) zooming_pane_g3

0x0002,

0xf414,	// (0x0009537a) zooming_pane_g

0x3d04,	// (0x00089c6a) level_10_zoom

0x3d0d,	// (0x00089c73) level_11_zoom

0x3d16,	// (0x00089c7c) level_1_zoom

0x3d1f,	// (0x00089c85) level_2_zoom

0x3d28,	// (0x00089c8e) level_3_zoom

0x3d31,	// (0x00089c97) level_4_zoom

0x3d3a,	// (0x00089ca0) level_5_zoom

0x3d43,	// (0x00089ca9) level_6_zoom

0x3d4c,	// (0x00089cb2) level_7_zoom

0x3d55,	// (0x00089cbb) level_8_zoom

0x3d5e,	// (0x00089cc4) level_9_zoom

0x3d6f,	// (0x00089cd5) popup_phob_thumbnail_window_g1

0x3d77,	// (0x00089cdd) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x00095381) popup_phob_thumbnail_window_g

0x5c3f,	// (0x0008bba5) level_1_location

0x5c47,	// (0x0008bbad) level_2_location

0x5c4f,	// (0x0008bbb5) level_3_location

0x5c57,	// (0x0008bbbd) level_4_location

0x3cc0,	// (0x00089c26) level_5_location

0x3d7f,	// (0x00089ce5) mce_icon_pane_g1

0x3d89,	// (0x00089cef) mce_icon_pane_g2

0x0001,

0xf420,	// (0x00095386) mce_icon_pane_g

0x3d93,	// (0x00089cf9) main_mup_pane_g1_ParamLimits

0x3d93,	// (0x00089cf9) main_mup_pane_g1

0x3da9,	// (0x00089d0f) main_mup_pane_g2_ParamLimits

0x3da9,	// (0x00089d0f) main_mup_pane_g2

0x3dc1,	// (0x00089d27) main_mup_pane_g3_ParamLimits

0x3dc1,	// (0x00089d27) main_mup_pane_g3

0x3dd9,	// (0x00089d3f) main_mup_pane_g4_ParamLimits

0x3dd9,	// (0x00089d3f) main_mup_pane_g4

0x3df1,	// (0x00089d57) main_mup_pane_g5_ParamLimits

0x3df1,	// (0x00089d57) main_mup_pane_g5

0x3e0d,	// (0x00089d73) main_mup_pane_g6_ParamLimits

0x3e0d,	// (0x00089d73) main_mup_pane_g6

0x3e25,	// (0x00089d8b) main_mup_pane_g7_ParamLimits

0x3e25,	// (0x00089d8b) main_mup_pane_g7

0x3e3d,	// (0x00089da3) main_mup_pane_g8_ParamLimits

0x3e3d,	// (0x00089da3) main_mup_pane_g8

0x3e55,	// (0x00089dbb) main_mup_pane_g9_ParamLimits

0x3e55,	// (0x00089dbb) main_mup_pane_g9

0x3e6f,	// (0x00089dd5) main_mup_pane_g10_ParamLimits

0x3e6f,	// (0x00089dd5) main_mup_pane_g10

0x3e89,	// (0x00089def) main_mup_pane_g11_ParamLimits

0x3e89,	// (0x00089def) main_mup_pane_g11

0x3e9d,	// (0x00089e03) main_mup_pane_g12_ParamLimits

0x3e9d,	// (0x00089e03) main_mup_pane_g12

0x3eb3,	// (0x00089e19) main_mup_pane_g13_ParamLimits

0x3eb3,	// (0x00089e19) main_mup_pane_g13

0x000c,

0xf425,	// (0x0009538b) main_mup_pane_g_ParamLimits

0xf425,	// (0x0009538b) main_mup_pane_g

0x3ec7,	// (0x00089e2d) main_mup_pane_t1_ParamLimits

0x3ec7,	// (0x00089e2d) main_mup_pane_t1

0x3ee1,	// (0x00089e47) main_mup_pane_t2_ParamLimits

0x3ee1,	// (0x00089e47) main_mup_pane_t2

0x3ef9,	// (0x00089e5f) main_mup_pane_t3_ParamLimits

0x3ef9,	// (0x00089e5f) main_mup_pane_t3

0x3f11,	// (0x00089e77) main_mup_pane_t4_ParamLimits

0x3f11,	// (0x00089e77) main_mup_pane_t4

0x3f2f,	// (0x00089e95) main_mup_pane_t5_ParamLimits

0x3f2f,	// (0x00089e95) main_mup_pane_t5

0x3f44,	// (0x00089eaa) main_mup_pane_t6_ParamLimits

0x3f44,	// (0x00089eaa) main_mup_pane_t6

0x0005,

0xf440,	// (0x000953a6) main_mup_pane_t_ParamLimits

0xf440,	// (0x000953a6) main_mup_pane_t

0x3f56,	// (0x00089ebc) mup_progress_pane_ParamLimits

0x3f56,	// (0x00089ebc) mup_progress_pane

0x3f62,	// (0x00089ec8) mup_visualizer_pane_ParamLimits

0x3f62,	// (0x00089ec8) mup_visualizer_pane

0x3f96,	// (0x00089efc) mup_volume_pane_ParamLimits

0x3f96,	// (0x00089efc) mup_volume_pane

0x3fb4,	// (0x00089f1a) mup_visualizer_pane_g1_ParamLimits

0x3fb4,	// (0x00089f1a) mup_visualizer_pane_g1

0x3fb4,	// (0x00089f1a) mup_visualizer_pane_g2_ParamLimits

0x3fb4,	// (0x00089f1a) mup_visualizer_pane_g2

0x3a58,	// (0x000899be) mup_visualizer_pane_g3_ParamLimits

0x3a58,	// (0x000899be) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x000953b3) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x000953b3) mup_visualizer_pane_g

0xed36,	// (0x00094c9c) mup_volume_pane_g1

0x3fca,	// (0x00089f30) mup_volume_pane_g2

0x0001,

0xf454,	// (0x000953ba) mup_volume_pane_g

0xed36,	// (0x00094c9c) mup_progress_pane_g1

0x3fd3,	// (0x00089f39) mup_progress_pane_g2

0x3fdc,	// (0x00089f42) mup_progress_pane_g3

0x0002,

0xf459,	// (0x000953bf) mup_progress_pane_g

0xe46c,	// (0x000943d2) bg_popup_window_pane_cp05

0x3fe5,	// (0x00089f4b) heading_pane_cp02_ParamLimits

0x3fe5,	// (0x00089f4b) heading_pane_cp02

0x3fff,	// (0x00089f65) list_popup_blid_pane

0x4007,	// (0x00089f6d) list_blid_sat_info_pane_ParamLimits

0x4007,	// (0x00089f6d) list_blid_sat_info_pane

0x401a,	// (0x00089f80) list_blid_sat_info_pane_g1

0x4022,	// (0x00089f88) list_blid_sat_info_pane_t1

0x4128,	// (0x0008a08e) mup_equalizer_pane_ParamLimits

0x4128,	// (0x0008a08e) mup_equalizer_pane

0x4141,	// (0x0008a0a7) mup_equalizer_pane_cp1_ParamLimits

0x4141,	// (0x0008a0a7) mup_equalizer_pane_cp1

0x415e,	// (0x0008a0c4) mup_equalizer_pane_cp2_ParamLimits

0x415e,	// (0x0008a0c4) mup_equalizer_pane_cp2

0x417b,	// (0x0008a0e1) mup_equalizer_pane_cp3_ParamLimits

0x417b,	// (0x0008a0e1) mup_equalizer_pane_cp3

0x419c,	// (0x0008a102) mup_equalizer_pane_cp4_ParamLimits

0x419c,	// (0x0008a102) mup_equalizer_pane_cp4

0x41bd,	// (0x0008a123) mup_equalizer_pane_cp5

0x41d1,	// (0x0008a137) mup_equalizer_pane_cp6

0x41e5,	// (0x0008a14b) mup_equalizer_pane_cp7

0x5a3c,	// (0x0008b9a2) bg_popup_call_poc_act_pane_g9

0x5a44,	// (0x0008b9aa) bg_popup_call_poc_act_pane_g10

0x5a4c,	// (0x0008b9b2) bg_popup_call_poc_act_pane_g11

0x000a,

0xe6c7,	// (0x0009462d) mup_scale_pane

0xed36,	// (0x00094c9c) mup_scale_pane_g1

0x41f9,	// (0x0008a15f) mup_scale_pane_g2

0x0006,

0xf475,	// (0x000953db) mup_scale_pane_g

0x422f,	// (0x0008a195) msg_data_pane

0x4237,	// (0x0008a19d) scroll_pane_cp017

0x0421,	// (0x00086387) bg_list_pane_cp04_ParamLimits

0x0421,	// (0x00086387) bg_list_pane_cp04

0x423f,	// (0x0008a1a5) msg_data_pane_g1

0x4247,	// (0x0008a1ad) msg_data_pane_g2

0x424f,	// (0x0008a1b5) msg_data_pane_g3

0x4257,	// (0x0008a1bd) msg_data_pane_g4

0x425f,	// (0x0008a1c5) msg_data_pane_g5

0x4267,	// (0x0008a1cd) msg_data_pane_g6

0x426f,	// (0x0008a1d5) msg_data_pane_g7

0x0006,

0xf484,	// (0x000953ea) msg_data_pane_g

0x0445,	// (0x000863ab) msg_text_pane_ParamLimits

0x0445,	// (0x000863ab) msg_text_pane

0x4277,	// (0x0008a1dd) qrid_highlight_pane_cp011_ParamLimits

0x4277,	// (0x0008a1dd) qrid_highlight_pane_cp011

0xe46c,	// (0x000943d2) msg_body_pane

0xe46c,	// (0x000943d2) msg_header_pane

0x4298,	// (0x0008a1fe) input_focus_pane_cp07

0x0479,	// (0x000863df) msg_header_pane_t1_ParamLimits

0x0479,	// (0x000863df) msg_header_pane_t1

0x048b,	// (0x000863f1) msg_header_pane_t2_ParamLimits

0x048b,	// (0x000863f1) msg_header_pane_t2

0x0001,

0xf498,	// (0x000953fe) msg_header_pane_t_ParamLimits

0xf498,	// (0x000953fe) msg_header_pane_t

0x42ad,	// (0x0008a213) msg_body_pane_g1

0x049d,	// (0x00086403) msg_body_pane_t1_ParamLimits

0x049d,	// (0x00086403) msg_body_pane_t1

0x04ce,	// (0x00086434) msg_body_pane_t2_ParamLimits

0x04ce,	// (0x00086434) msg_body_pane_t2

0x04e0,	// (0x00086446) msg_body_pane_t3_ParamLimits

0x04e0,	// (0x00086446) msg_body_pane_t3

0x0002,

0xf49d,	// (0x00095403) msg_body_pane_t_ParamLimits

0xf49d,	// (0x00095403) msg_body_pane_t

0x42ef,	// (0x0008a255) main_viewer_pane_g1_ParamLimits

0x42ef,	// (0x0008a255) main_viewer_pane_g1

0x42fd,	// (0x0008a263) main_viewer_pane_g2_ParamLimits

0x42fd,	// (0x0008a263) main_viewer_pane_g2

0x430b,	// (0x0008a271) main_viewer_pane_g3_ParamLimits

0x430b,	// (0x0008a271) main_viewer_pane_g3

0x431a,	// (0x0008a280) main_viewer_pane_g4_ParamLimits

0x431a,	// (0x0008a280) main_viewer_pane_g4

0xb380,	// (0x000912e6) main_viewer_pane_g5_ParamLimits

0xb380,	// (0x000912e6) main_viewer_pane_g5

0xb380,	// (0x000912e6) main_viewer_pane_g7_ParamLimits

0xb380,	// (0x000912e6) main_viewer_pane_g7

0xb392,	// (0x000912f8) main_viewer_pane_g8_ParamLimits

0xb392,	// (0x000912f8) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x00095413) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x00095413) main_viewer_pane_g

0x4329,	// (0x0008a28f) viewer_content_pane_ParamLimits

0x4329,	// (0x0008a28f) viewer_content_pane

0x4364,	// (0x0008a2ca) main_postcard_pane_g1_ParamLimits

0x4364,	// (0x0008a2ca) main_postcard_pane_g1

0x437a,	// (0x0008a2e0) main_postcard_pane_g2_ParamLimits

0x437a,	// (0x0008a2e0) main_postcard_pane_g2

0x4390,	// (0x0008a2f6) main_postcard_pane_g3_ParamLimits

0x4390,	// (0x0008a2f6) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x00095424) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x00095424) main_postcard_pane_g

0x43a7,	// (0x0008a30d) main_postcard_pane_g4

0x6266,	// (0x0008c1cc) smil_status_volume_pane_g2

0x43ea,	// (0x0008a350) postcard_pane_ParamLimits

0x43ea,	// (0x0008a350) postcard_pane

0x442c,	// (0x0008a392) postcard_pane_g1_ParamLimits

0x442c,	// (0x0008a392) postcard_pane_g1

0x443a,	// (0x0008a3a0) postcard_pane_g2_ParamLimits

0x443a,	// (0x0008a3a0) postcard_pane_g2

0x4446,	// (0x0008a3ac) postcard_pane_g3_ParamLimits

0x4446,	// (0x0008a3ac) postcard_pane_g3

0x4452,	// (0x0008a3b8) postcard_pane_g4_ParamLimits

0x4452,	// (0x0008a3b8) postcard_pane_g4

0x4460,	// (0x0008a3c6) postcard_pane_g5_ParamLimits

0x4460,	// (0x0008a3c6) postcard_pane_g5

0x4475,	// (0x0008a3db) postcard_pane_g6_ParamLimits

0x4475,	// (0x0008a3db) postcard_pane_g6

0x442c,	// (0x0008a392) postcard_pane_g7_ParamLimits

0x442c,	// (0x0008a392) postcard_pane_g7

0x0006,

0xf4cb,	// (0x00095431) postcard_pane_g_ParamLimits

0xf4cb,	// (0x00095431) postcard_pane_g

0x4489,	// (0x0008a3ef) main_mp2_pane_g1_ParamLimits

0x4489,	// (0x0008a3ef) main_mp2_pane_g1

0x4495,	// (0x0008a3fb) main_mp2_pane_g2_ParamLimits

0x4495,	// (0x0008a3fb) main_mp2_pane_g2

0x44a1,	// (0x0008a407) main_mp2_pane_g3_ParamLimits

0x44a1,	// (0x0008a407) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x00095440) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x00095440) main_mp2_pane_g

0x44ad,	// (0x0008a413) main_mp2_pane_t1_ParamLimits

0x44ad,	// (0x0008a413) main_mp2_pane_t1

0x44c2,	// (0x0008a428) main_mp2_pane_t2_ParamLimits

0x44c2,	// (0x0008a428) main_mp2_pane_t2

0x44d4,	// (0x0008a43a) main_mp2_pane_t3_ParamLimits

0x44d4,	// (0x0008a43a) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x00095447) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x00095447) main_mp2_pane_t

0x44e6,	// (0x0008a44c) pec_content_pane_ParamLimits

0x44e6,	// (0x0008a44c) pec_content_pane

0xf05b,	// (0x00094fc1) scroll_pane_cp015

0x44f8,	// (0x0008a45e) pec_attribute_pane_ParamLimits

0x44f8,	// (0x0008a45e) pec_attribute_pane

0x4508,	// (0x0008a46e) pec_content_pane_g1_ParamLimits

0x4508,	// (0x0008a46e) pec_content_pane_g1

0x4514,	// (0x0008a47a) pec_content_pane_t1_ParamLimits

0x4514,	// (0x0008a47a) pec_content_pane_t1

0x4526,	// (0x0008a48c) pec_content_pane_t2_ParamLimits

0x4526,	// (0x0008a48c) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0009544e) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0009544e) pec_content_pane_t

0x4538,	// (0x0008a49e) list_single_graphic_pane_cp01_ParamLimits

0x4538,	// (0x0008a49e) list_single_graphic_pane_cp01

0xe6c7,	// (0x0009462d) bg_popup_sub_pane_cp04

0x454f,	// (0x0008a4b5) popup_mup_playback_window_g1

0x455b,	// (0x0008a4c1) popup_mup_playback_window_t1

0x4570,	// (0x0008a4d6) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x00095453) popup_mup_playback_window_t

0x45c5,	// (0x0008a52b) main_image_pane_g1_ParamLimits

0x45c5,	// (0x0008a52b) main_image_pane_g1

0x46a2,	// (0x0008a608) scroll_pane_cp018_ParamLimits

0x46a2,	// (0x0008a608) scroll_pane_cp018

0x46ba,	// (0x0008a620) scroll_pane_cp016_ParamLimits

0x46ba,	// (0x0008a620) scroll_pane_cp016

0x46ee,	// (0x0008a654) smil2_image_pane_ParamLimits

0x46ee,	// (0x0008a654) smil2_image_pane

0x4722,	// (0x0008a688) smil2_root_pane_ParamLimits

0x4722,	// (0x0008a688) smil2_root_pane

0x475a,	// (0x0008a6c0) smil2_text_pane_ParamLimits

0x475a,	// (0x0008a6c0) smil2_text_pane

0xe46c,	// (0x000943d2) bg_list_pane_cp06

0x47e2,	// (0x0008a748) grid_radio_pane

0xe46c,	// (0x000943d2) bg_popup_window_pane_cp06

0x47ea,	// (0x0008a750) main_fmradio_pane_t1

0x36d0,	// (0x00089636) heading_pane_cp04

0x47f8,	// (0x0008a75e) main_fmradio_pane_t2

0x5ad6,	// (0x0008ba3c) popup_cale_lunar_info_window_g1

0x4806,	// (0x0008a76c) main_fmradio_pane_t3

0x5ade,	// (0x0008ba44) popup_cale_lunar_info_window_g2

0x4814,	// (0x0008a77a) main_fmradio_pane_t4

0x0001,

0x4822,	// (0x0008a788) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0009552e) popup_cale_lunar_info_window_g

0xf502,	// (0x00095468) main_fmradio_pane_t

0x4830,	// (0x0008a796) wait_bar_pane_cp03

0x4838,	// (0x0008a79e) cell_fmradio_pane_ParamLimits

0x4838,	// (0x0008a79e) cell_fmradio_pane

0x442c,	// (0x0008a392) cell_fmradio_pane_g1_ParamLimits

0x442c,	// (0x0008a392) cell_fmradio_pane_g1

0xe46c,	// (0x000943d2) grid_highlight_pane_cp011

0x484b,	// (0x0008a7b1) poc_content_pane_ParamLimits

0x484b,	// (0x0008a7b1) poc_content_pane

0x485d,	// (0x0008a7c3) scroll_pane_cp019

0x4865,	// (0x0008a7cb) popup_call_poc_act_window_ParamLimits

0x4865,	// (0x0008a7cb) popup_call_poc_act_window

0x4889,	// (0x0008a7ef) popup_call_poc_inact_window_ParamLimits

0x4889,	// (0x0008a7ef) popup_call_poc_inact_window

0xf59f,	// (0x00095505) bg_popup_call_poc_act_pane_g

0x59c4,	// (0x0008b92a) bg_popup_call_poc_inact_pane_g1

0x59cc,	// (0x0008b932) bg_popup_call_poc_inact_pane_g2

0x48a2,	// (0x0008a808) popup_call_poc_act_window_g2

0x59d4,	// (0x0008b93a) bg_popup_call_poc_inact_pane_g3

0x59dc,	// (0x0008b942) bg_popup_call_poc_inact_pane_g4

0x59e4,	// (0x0008b94a) bg_popup_call_poc_inact_pane_g5

0x48aa,	// (0x0008a810) popup_call_poc_act_window_t1_ParamLimits

0x48aa,	// (0x0008a810) popup_call_poc_act_window_t1

0x48d2,	// (0x0008a838) popup_call_poc_act_window_t2_ParamLimits

0x48d2,	// (0x0008a838) popup_call_poc_act_window_t2

0x48fa,	// (0x0008a860) popup_call_poc_act_window_t3_ParamLimits

0x48fa,	// (0x0008a860) popup_call_poc_act_window_t3

0x4922,	// (0x0008a888) popup_call_poc_act_window_t4_ParamLimits

0x4922,	// (0x0008a888) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x00095473) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x00095473) popup_call_poc_act_window_t

0x59ec,	// (0x0008b952) bg_popup_call_poc_inact_pane_g6

0x59f4,	// (0x0008b95a) bg_popup_call_poc_inact_pane_g7

0x59fc,	// (0x0008b962) bg_popup_call_poc_inact_pane_g8

0x4934,	// (0x0008a89a) popup_call_poc_inact_window_g2

0x5a04,	// (0x0008b96a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x000954f2) bg_popup_call_poc_inact_pane_g

0x493c,	// (0x0008a8a2) popup_call_poc_inact_window_t1_ParamLimits

0x493c,	// (0x0008a8a2) popup_call_poc_inact_window_t1

0x4951,	// (0x0008a8b7) popup_call_poc_inact_window_t2_ParamLimits

0x4951,	// (0x0008a8b7) popup_call_poc_inact_window_t2

0x4966,	// (0x0008a8cc) popup_call_poc_inact_window_t3_ParamLimits

0x4966,	// (0x0008a8cc) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0009547c) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0009547c) popup_call_poc_inact_window_t

0x6108,	// (0x0008c06e) context_pane_ParamLimits

0x6163,	// (0x0008c0c9) signal_pane_ParamLimits

0x3cc0,	// (0x00089c26) main_call2_pane

0xb3d7,	// (0x0009133d) popup_phob_thumbnail2_window_ParamLimits

0xb3d7,	// (0x0009133d) popup_phob_thumbnail2_window

0xb368,	// (0x000912ce) aid_hotspot_pointer_arrow_pane

0xb370,	// (0x000912d6) aid_hotspot_pointer_hand_pane

0x5c09,	// (0x0008bb6f) phob_pre_status_pane_g5

0x1db4,	// (0x00087d1a) cams_zoom_pane_ParamLimits

0x1dc3,	// (0x00087d29) image_vga_pane_ParamLimits

0x1ddd,	// (0x00087d43) main_camera_pane_g1_ParamLimits

0x1def,	// (0x00087d55) main_camera_pane_g2_ParamLimits

0x1dff,	// (0x00087d65) main_camera_pane_g3_ParamLimits

0x1e11,	// (0x00087d77) main_camera_pane_g4_ParamLimits

0x1e23,	// (0x00087d89) main_camera_pane_g5_ParamLimits

0x1e35,	// (0x00087d9b) main_camera_pane_g6_ParamLimits

0x1e47,	// (0x00087dad) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0009517b) main_camera_pane_g_ParamLimits

0x1e59,	// (0x00087dbf) main_camera_pane_t1_ParamLimits

0x1e6f,	// (0x00087dd5) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0009518c) main_camera_pane_t_ParamLimits

0xe6c7,	// (0x0009462d) bg_popup_preview_window_pane_cp01_ParamLimits

0xe6c7,	// (0x0009462d) bg_popup_preview_window_pane_cp01

0x497b,	// (0x0008a8e1) popup_phob_thumbnail2_window_g1_ParamLimits

0x497b,	// (0x0008a8e1) popup_phob_thumbnail2_window_g1

0xe46c,	// (0x000943d2) call2_cli_visual_pane

0x49a2,	// (0x0008a908) popup_call2_audio_conf_window_ParamLimits

0x49a2,	// (0x0008a908) popup_call2_audio_conf_window

0x49c2,	// (0x0008a928) popup_call2_audio_first_window_ParamLimits

0x49c2,	// (0x0008a928) popup_call2_audio_first_window

0x4a58,	// (0x0008a9be) popup_call2_audio_in_window_ParamLimits

0x4a58,	// (0x0008a9be) popup_call2_audio_in_window

0x4aa0,	// (0x0008aa06) popup_call2_audio_out_window_ParamLimits

0x4aa0,	// (0x0008aa06) popup_call2_audio_out_window

0x4b0a,	// (0x0008aa70) popup_call2_audio_second_window_ParamLimits

0x4b0a,	// (0x0008aa70) popup_call2_audio_second_window

0x4b70,	// (0x0008aad6) popup_call2_audio_wait_window_ParamLimits

0x4b70,	// (0x0008aad6) popup_call2_audio_wait_window

0xe46c,	// (0x000943d2) bg_popup_call2_act_pane_cp03

0xe6a9,	// (0x0009460f) list_conf_pane_cp

0x4baa,	// (0x0008ab10) popup_call2_audio_conf_window_t1

0x4bb8,	// (0x0008ab1e) list_single_graphic_popup_conf2_pane_ParamLimits

0x4bb8,	// (0x0008ab1e) list_single_graphic_popup_conf2_pane

0x3764,	// (0x000896ca) list_highlight_pane_cp04

0x4bcb,	// (0x0008ab31) list_single_graphic_popup_conf2_pane_g1

0x3775,	// (0x000896db) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x00095483) list_single_graphic_popup_conf2_pane_g

0x4bd5,	// (0x0008ab3b) list_single_graphic_popup_conf2_pane_t1

0x4be3,	// (0x0008ab49) bg_popup_call2_act_pane_cp01_ParamLimits

0x4be3,	// (0x0008ab49) bg_popup_call2_act_pane_cp01

0x4c6d,	// (0x0008abd3) call_type_pane_cp05_ParamLimits

0x4c6d,	// (0x0008abd3) call_type_pane_cp05

0x4cc1,	// (0x0008ac27) popup_call2_audio_second_window_g1_ParamLimits

0x4cc1,	// (0x0008ac27) popup_call2_audio_second_window_g1

0x4d15,	// (0x0008ac7b) popup_call2_audio_second_window_g2_ParamLimits

0x4d15,	// (0x0008ac7b) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x00095488) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x00095488) popup_call2_audio_second_window_g

0x4d7a,	// (0x0008ace0) popup_call2_audio_second_window_t1_ParamLimits

0x4d7a,	// (0x0008ace0) popup_call2_audio_second_window_t1

0x4e35,	// (0x0008ad9b) popup_call2_audio_second_window_t2_ParamLimits

0x4e35,	// (0x0008ad9b) popup_call2_audio_second_window_t2

0x4e88,	// (0x0008adee) popup_call2_audio_second_window_t3_ParamLimits

0x4e88,	// (0x0008adee) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0009548f) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0009548f) popup_call2_audio_second_window_t

0xe46c,	// (0x000943d2) bg_popup_call2_in_pane_cp02

0xe476,	// (0x000943dc) call_type_pane_cp04

0xe47e,	// (0x000943e4) popup_call2_audio_wait_window_g1

0xe486,	// (0x000943ec) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x00095068) popup_call2_audio_wait_window_g

0xe48e,	// (0x000943f4) popup_call2_audio_wait_window_t3

0x4f7b,	// (0x0008aee1) bg_popup_call2_act_pane_ParamLimits

0x4f7b,	// (0x0008aee1) bg_popup_call2_act_pane

0x503b,	// (0x0008afa1) call_type_pane_cp03_ParamLimits

0x503b,	// (0x0008afa1) call_type_pane_cp03

0x509f,	// (0x0008b005) popup_call2_audio_first_window_g1_ParamLimits

0x509f,	// (0x0008b005) popup_call2_audio_first_window_g1

0x510f,	// (0x0008b075) popup_call2_audio_first_window_g2_ParamLimits

0x510f,	// (0x0008b075) popup_call2_audio_first_window_g2

0x3fb4,	// (0x00089f1a) popup_call2_audio_first_window_g3_ParamLimits

0x3fb4,	// (0x00089f1a) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x00095498) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x00095498) popup_call2_audio_first_window_g

0x51ed,	// (0x0008b153) popup_call2_audio_first_window_t1_ParamLimits

0x51ed,	// (0x0008b153) popup_call2_audio_first_window_t1

0x52f0,	// (0x0008b256) popup_call2_audio_first_window_t4_ParamLimits

0x52f0,	// (0x0008b256) popup_call2_audio_first_window_t4

0x53d3,	// (0x0008b339) popup_call2_audio_first_window_t5_ParamLimits

0x53d3,	// (0x0008b339) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x000954a3) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x000954a3) popup_call2_audio_first_window_t

0xe6bf,	// (0x00094625) bg_popup_call2_act_pane_g1

0x5ae6,	// (0x0008ba4c) popup_cale_lunar_info_window_t1

0x5af4,	// (0x0008ba5a) popup_cale_lunar_info_window_t2

0x5b02,	// (0x0008ba68) popup_cale_lunar_info_window_t3

0xe46c,	// (0x000943d2) bg_popup_call2_bubble_pane

0x54d4,	// (0x0008b43a) bg_popup_call2_in_pane_cp01_ParamLimits

0x54d4,	// (0x0008b43a) bg_popup_call2_in_pane_cp01

0xe148,	// (0x000940ae) call_type_pane_cp02

0x551c,	// (0x0008b482) popup_call2_audio_out_window_g1_ParamLimits

0x551c,	// (0x0008b482) popup_call2_audio_out_window_g1

0x5548,	// (0x0008b4ae) popup_call2_audio_out_window_g2_ParamLimits

0x5548,	// (0x0008b4ae) popup_call2_audio_out_window_g2

0x5570,	// (0x0008b4d6) popup_call2_audio_out_window_g3_ParamLimits

0x5570,	// (0x0008b4d6) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x000954ac) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x000954ac) popup_call2_audio_out_window_g

0x55ab,	// (0x0008b511) popup_call2_audio_out_window_t1_ParamLimits

0x55ab,	// (0x0008b511) popup_call2_audio_out_window_t1

0x560a,	// (0x0008b570) popup_call2_audio_out_window_t2_ParamLimits

0x560a,	// (0x0008b570) popup_call2_audio_out_window_t2

0x565e,	// (0x0008b5c4) popup_call2_audio_out_window_t3_ParamLimits

0x565e,	// (0x0008b5c4) popup_call2_audio_out_window_t3

0x5674,	// (0x0008b5da) popup_call2_audio_out_window_t4_ParamLimits

0x5674,	// (0x0008b5da) popup_call2_audio_out_window_t4

0x568a,	// (0x0008b5f0) popup_call2_audio_out_window_t5_ParamLimits

0x568a,	// (0x0008b5f0) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x000954b5) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x000954b5) popup_call2_audio_out_window_t

0x56ee,	// (0x0008b654) bg_popup_call2_in_pane_ParamLimits

0x56ee,	// (0x0008b654) bg_popup_call2_in_pane

0x574a,	// (0x0008b6b0) popup_call2_audio_in_window_g1_ParamLimits

0x574a,	// (0x0008b6b0) popup_call2_audio_in_window_g1

0x5782,	// (0x0008b6e8) popup_call2_audio_in_window_g2_ParamLimits

0x5782,	// (0x0008b6e8) popup_call2_audio_in_window_g2

0x57ba,	// (0x0008b720) popup_call2_audio_in_window_g3_ParamLimits

0x57ba,	// (0x0008b720) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x000954c2) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x000954c2) popup_call2_audio_in_window_g

0x5812,	// (0x0008b778) popup_call2_audio_in_window_t1_ParamLimits

0x5812,	// (0x0008b778) popup_call2_audio_in_window_t1

0x5892,	// (0x0008b7f8) popup_call2_audio_in_window_t2_ParamLimits

0x5892,	// (0x0008b7f8) popup_call2_audio_in_window_t2

0x5912,	// (0x0008b878) popup_call2_audio_in_window_t3_ParamLimits

0x5912,	// (0x0008b878) popup_call2_audio_in_window_t3

0x592c,	// (0x0008b892) popup_call2_audio_in_window_t4_ParamLimits

0x592c,	// (0x0008b892) popup_call2_audio_in_window_t4

0x593e,	// (0x0008b8a4) popup_call2_audio_in_window_t5_ParamLimits

0x593e,	// (0x0008b8a4) popup_call2_audio_in_window_t5

0x5953,	// (0x0008b8b9) popup_call2_audio_in_window_t6_ParamLimits

0x5953,	// (0x0008b8b9) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x000954cb) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x000954cb) popup_call2_audio_in_window_t

0xe6bf,	// (0x00094625) bg_popup_call2_in_pane_g1

0x5b10,	// (0x0008ba76) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x00095533) popup_cale_lunar_info_window_t

0xe6c7,	// (0x0009462d) bg_popup_call2_rect_pane_ParamLimits

0xe6c7,	// (0x0009462d) bg_popup_call2_rect_pane

0xe46c,	// (0x000943d2) call2_cli_visual_graphic_pane

0xe46c,	// (0x000943d2) call2_cli_visual_text_pane

0xb3fe,	// (0x00091364) smil_status_volume_pane_g3

0x0002,

0xed36,	// (0x00094c9c) call2_cli_visual_graphic_pane_g1

0xed36,	// (0x00094c9c) call2_cli_visual_graphic_pane_g2

0xed36,	// (0x00094c9c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x000954d8) call2_cli_visual_graphic_pane_g

0x5984,	// (0x0008b8ea) bg_popup_call2_rect_pane_g1

0xedd4,	// (0x00094d3a) bg_popup_call2_rect_pane_g2

0x598c,	// (0x0008b8f2) bg_popup_call2_rect_pane_g3

0x5994,	// (0x0008b8fa) bg_popup_call2_rect_pane_g4

0x599c,	// (0x0008b902) bg_popup_call2_rect_pane_g5

0x59a4,	// (0x0008b90a) bg_popup_call2_rect_pane_g6

0x59ac,	// (0x0008b912) bg_popup_call2_rect_pane_g7

0x59b4,	// (0x0008b91a) bg_popup_call2_rect_pane_g8

0x59bc,	// (0x0008b922) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x000954df) bg_popup_call2_rect_pane_g

0x59c4,	// (0x0008b92a) bg_popup_call2_bubble_pane_g1

0x59cc,	// (0x0008b932) bg_popup_call2_bubble_pane_g2

0x59d4,	// (0x0008b93a) bg_popup_call2_bubble_pane_g3

0x59dc,	// (0x0008b942) bg_popup_call2_bubble_pane_g4

0x59e4,	// (0x0008b94a) bg_popup_call2_bubble_pane_g5

0x59ec,	// (0x0008b952) bg_popup_call2_bubble_pane_g6

0x59f4,	// (0x0008b95a) bg_popup_call2_bubble_pane_g7

0x59fc,	// (0x0008b962) bg_popup_call2_bubble_pane_g8

0x5a04,	// (0x0008b96a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x000954f2) bg_popup_call2_bubble_pane_g

0x1707,	// (0x0008766d) aid_cale_week_size_cell_pane

0x1e87,	// (0x00087ded) aid_cams_cif_uncrop_pane_ParamLimits

0x1e87,	// (0x00087ded) aid_cams_cif_uncrop_pane

0x203c,	// (0x00087fa2) aid_cams_size_cell_ParamLimits

0x203c,	// (0x00087fa2) aid_cams_size_cell

0x2050,	// (0x00087fb6) grid_cams_pane_ParamLimits

0x206a,	// (0x00087fd0) linegrid_cams_pane_ParamLimits

0x2150,	// (0x000880b6) call_video_pane_t1

0x216e,	// (0x000880d4) call_video_pane_t2

0x0001,

0xf279,	// (0x000951df) call_video_pane_t

0x268a,	// (0x000885f0) aid_cale_month_size_cell_pane_ParamLimits

0x268a,	// (0x000885f0) aid_cale_month_size_cell_pane

0xf616,	// (0x0009557c) smil_status_volume_pane_g

0xb40b,	// (0x00091371) volume_smil_pane_ParamLimits

0xb19b,	// (0x00091101) aid_popup2_width_pane

0x166c,	// (0x000875d2) cell_qdial_pane_g4_ParamLimits

0x166c,	// (0x000875d2) cell_qdial_pane_g4

0x3a38,	// (0x0008999e) aid_blid_cardinal_pane_ParamLimits

0x3a44,	// (0x000899aa) aid_blid_destination_pane_ParamLimits

0x3a44,	// (0x000899aa) aid_blid_destination_pane

0xe6c7,	// (0x0009462d) bg_popup_call_poc_act_pane_ParamLimits

0xe6c7,	// (0x0009462d) bg_popup_call_poc_act_pane

0xe6c7,	// (0x0009462d) bg_popup_call_poc_inact_pane_ParamLimits

0xe6c7,	// (0x0009462d) bg_popup_call_poc_inact_pane

0x5a14,	// (0x0008b97a) bg_popup_call_poc_act_pane_g1

0x5a1c,	// (0x0008b982) bg_popup_call_poc_act_pane_g2

0x5a24,	// (0x0008b98a) bg_popup_call_poc_act_pane_g3

0x59dc,	// (0x0008b942) bg_popup_call_poc_act_pane_g4

0x59e4,	// (0x0008b94a) bg_popup_call_poc_act_pane_g5

0x5a2c,	// (0x0008b992) bg_popup_call_poc_act_pane_g6

0x59f4,	// (0x0008b95a) bg_popup_call_poc_act_pane_g7

0x5a34,	// (0x0008b99a) bg_popup_call_poc_act_pane_g8

0xe46c,	// (0x000943d2) main_usb_pane

0xb3b2,	// (0x00091318) popup_cale_lunar_info_window

0x2438,	// (0x0008839e) im_reading_pane_t1_ParamLimits

0xefb3,	// (0x00094f19) list_im_pane_ParamLimits

0xefc4,	// (0x00094f2a) scroll_pane_cp07_ParamLimits

0xe46c,	// (0x000943d2) grid_highlight_pane_cp012

0xe6c7,	// (0x0009462d) mup_scale_pane_ParamLimits

0x442c,	// (0x0008a392) main_usb_pane_g1_ParamLimits

0x442c,	// (0x0008a392) main_usb_pane_g1

0x5a54,	// (0x0008b9ba) main_usb_pane_g2_ParamLimits

0x5a54,	// (0x0008b9ba) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0009551c) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0009551c) main_usb_pane_g

0x5a6a,	// (0x0008b9d0) main_usb_pane_t1_ParamLimits

0x5a6a,	// (0x0008b9d0) main_usb_pane_t1

0x5a7c,	// (0x0008b9e2) main_usb_pane_t2_ParamLimits

0x5a7c,	// (0x0008b9e2) main_usb_pane_t2

0x5a8e,	// (0x0008b9f4) main_usb_pane_t3_ParamLimits

0x5a8e,	// (0x0008b9f4) main_usb_pane_t3

0x5aa0,	// (0x0008ba06) main_usb_pane_t4_ParamLimits

0x5aa0,	// (0x0008ba06) main_usb_pane_t4

0x5ab2,	// (0x0008ba18) main_usb_pane_t5_ParamLimits

0x5ab2,	// (0x0008ba18) main_usb_pane_t5

0x5ac4,	// (0x0008ba2a) main_usb_pane_t6_ParamLimits

0x5ac4,	// (0x0008ba2a) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x00095521) main_usb_pane_t_ParamLimits

0x39e5,	// (0x0008994b) aid_text_placing

0x39ee,	// (0x00089954) main_location2_pane_t1_ParamLimits

0x3a00,	// (0x00089966) main_location2_pane_t2_ParamLimits

0x3a12,	// (0x00089978) main_location2_pane_t3_ParamLimits

0x3a26,	// (0x0008998c) main_location2_pane_t4_ParamLimits

0x3a26,	// (0x0008998c) main_location2_pane_t4

0xf3da,	// (0x00095340) main_location2_pane_t_ParamLimits

0xe703,	// (0x00094669) find_pinb_pane_g2_ParamLimits

0xe703,	// (0x00094669) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0009508e) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0009508e) find_pinb_pane_g

0xe70f,	// (0x00094675) find_pinb_pane_t1_ParamLimits

0xe721,	// (0x00094687) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x00095093) find_pinb_pane_t_ParamLimits

0xe46c,	// (0x000943d2) main_call3_pane

0x2bac,	// (0x00088b12) cale_month_day_heading_pane_t1_ParamLimits

0x2c32,	// (0x00088b98) cale_month_day_heading_pane_t2_ParamLimits

0x2cc3,	// (0x00088c29) cale_month_day_heading_pane_t3_ParamLimits

0x2d54,	// (0x00088cba) cale_month_day_heading_pane_t4_ParamLimits

0x2ded,	// (0x00088d53) cale_month_day_heading_pane_t5_ParamLimits

0x2e8e,	// (0x00088df4) cale_month_day_heading_pane_t6_ParamLimits

0x2f2f,	// (0x00088e95) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x00095217) cale_month_day_heading_pane_t_ParamLimits

0x31e9,	// (0x0008914f) smil_status_volume_pane

0x4408,	// (0x0008a36e) postcard_address_pane_ParamLimits

0x4408,	// (0x0008a36e) postcard_address_pane

0x441a,	// (0x0008a380) postcard_message_pane_ParamLimits

0x441a,	// (0x0008a380) postcard_message_pane

0x5968,	// (0x0008b8ce) call2_cli_visual_pane_t1_ParamLimits

0x5968,	// (0x0008b8ce) call2_cli_visual_pane_t1

0x6417,	// (0x0008c37d) postcard_message_pane_t1_ParamLimits

0x6417,	// (0x0008c37d) postcard_message_pane_t1

0x6400,	// (0x0008c366) postcard_address_pane_t1_ParamLimits

0x6400,	// (0x0008c366) postcard_address_pane_t1

0x63ec,	// (0x0008c352) popup_call3_audio_in_window_ParamLimits

0x63ec,	// (0x0008c352) popup_call3_audio_in_window

0x6279,	// (0x0008c1df) bg_popup_call3_in_pane_ParamLimits

0x6279,	// (0x0008c1df) bg_popup_call3_in_pane

0x62ed,	// (0x0008c253) popup_call3_audio_in_window_g1_ParamLimits

0x62ed,	// (0x0008c253) popup_call3_audio_in_window_g1

0x630d,	// (0x0008c273) popup_call3_audio_in_window_g2_ParamLimits

0x630d,	// (0x0008c273) popup_call3_audio_in_window_g2

0x632d,	// (0x0008c293) popup_call3_audio_in_window_g3_ParamLimits

0x632d,	// (0x0008c293) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x00095583) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x00095583) popup_call3_audio_in_window_g

0x635e,	// (0x0008c2c4) popup_call3_audio_in_window_t1_ParamLimits

0x635e,	// (0x0008c2c4) popup_call3_audio_in_window_t1

0x639c,	// (0x0008c302) popup_call3_audio_in_window_t2_ParamLimits

0x639c,	// (0x0008c302) popup_call3_audio_in_window_t2

0x63da,	// (0x0008c340) popup_call3_audio_in_window_t3_ParamLimits

0x63da,	// (0x0008c340) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0009558c) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0009558c) popup_call3_audio_in_window_t

0x3cc0,	// (0x00089c26) bg_popup_call3_rect_pane

0x5984,	// (0x0008b8ea) bg_popup_call3_rect_pane_g1

0xedd4,	// (0x00094d3a) bg_popup_call3_rect_pane_g2

0x598c,	// (0x0008b8f2) bg_popup_call3_rect_pane_g3

0x5994,	// (0x0008b8fa) bg_popup_call3_rect_pane_g4

0x599c,	// (0x0008b902) bg_popup_call3_rect_pane_g5

0x59a4,	// (0x0008b90a) bg_popup_call3_rect_pane_g6

0x59ac,	// (0x0008b912) bg_popup_call3_rect_pane_g7

0x3fac,	// (0x00089f12) mup_visualizer_osc_pane

0x3fc2,	// (0x00089f28) mup_visualizer_spec_pane

0x62a9,	// (0x0008c20f) call3_video_qcif_pane_ParamLimits

0x62a9,	// (0x0008c20f) call3_video_qcif_pane

0x62ba,	// (0x0008c220) call3_video_qcif_uncrop_pane_ParamLimits

0x62ba,	// (0x0008c220) call3_video_qcif_uncrop_pane

0x62c8,	// (0x0008c22e) call3_video_subqcif_pane_ParamLimits

0x62c8,	// (0x0008c22e) call3_video_subqcif_pane

0x62dc,	// (0x0008c242) call3_video_subqcif_uncrop_pane_ParamLimits

0x62dc,	// (0x0008c242) call3_video_subqcif_uncrop_pane

0x634d,	// (0x0008c2b3) popup_call3_audio_in_window_g4_ParamLimits

0x634d,	// (0x0008c2b3) popup_call3_audio_in_window_g4

0x623a,	// (0x0008c1a0) mup_spec_half_pane

0x6243,	// (0x0008c1a9) mup_spec_half_pane_cp

0x6228,	// (0x0008c18e) mup_osc_middle_pane

0x6231,	// (0x0008c197) mup_visualizer_osc_pane_g1

0x6208,	// (0x0008c16e) mup_spec_bar_pane_ParamLimits

0x6208,	// (0x0008c16e) mup_spec_bar_pane

0x61f5,	// (0x0008c15b) mup_spec_bar_pane_g1

0x61ff,	// (0x0008c165) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x00095577) mup_spec_bar_pane_g

0x1707,	// (0x0008766d) aid_cale_week_size_cell_pane_ParamLimits

0x1721,	// (0x00087687) bg_cale_heading_pane_ParamLimits

0xee11,	// (0x00094d77) bg_cale_pane_cp01_ParamLimits

0x173f,	// (0x000876a5) cale_week_corner_pane_ParamLimits

0x175e,	// (0x000876c4) cale_week_day_heading_pane_ParamLimits

0x1781,	// (0x000876e7) cale_week_scroll_pane_g1_ParamLimits

0x179a,	// (0x00087700) cale_week_scroll_pane_g2_ParamLimits

0x17b2,	// (0x00087718) cale_week_scroll_pane_g3_ParamLimits

0x17ca,	// (0x00087730) cale_week_scroll_pane_g4_ParamLimits

0x17e2,	// (0x00087748) cale_week_scroll_pane_g5_ParamLimits

0x17fe,	// (0x00087764) cale_week_scroll_pane_g6_ParamLimits

0x181e,	// (0x00087784) cale_week_scroll_pane_g7_ParamLimits

0x183e,	// (0x000877a4) cale_week_scroll_pane_g8_ParamLimits

0x1862,	// (0x000877c8) cale_week_scroll_pane_g9_ParamLimits

0x187a,	// (0x000877e0) cale_week_scroll_pane_g10_ParamLimits

0x1892,	// (0x000877f8) cale_week_scroll_pane_g11_ParamLimits

0x18aa,	// (0x00087810) cale_week_scroll_pane_g12_ParamLimits

0x18c2,	// (0x00087828) cale_week_scroll_pane_g13_ParamLimits

0x18c2,	// (0x00087828) cale_week_scroll_pane_g14_ParamLimits

0x18c2,	// (0x00087828) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0009511f) cale_week_scroll_pane_g_ParamLimits

0x18da,	// (0x00087840) cale_week_time_pane_ParamLimits

0x18fe,	// (0x00087864) grid_cale_week_pane_ParamLimits

0xee2f,	// (0x00094d95) listscroll_cale_week_pane_t1

0xee41,	// (0x00094da7) scroll_pane_cp08_ParamLimits

0x2718,	// (0x0008867e) cale_month_corner_pane_ParamLimits

0x2b38,	// (0x00088a9e) cale_month_pane_t1

0x2b4a,	// (0x00088ab0) cale_month_week_pane_ParamLimits

0x3630,	// (0x00089596) popup_call_status_window_g1_ParamLimits

0x3644,	// (0x000895aa) popup_call_status_window_g2_ParamLimits

0x3658,	// (0x000895be) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x000952c7) popup_call_status_window_g_ParamLimits

0x36c0,	// (0x00089626) aid_call2_pane

0x046b,	// (0x000863d1) msg_header_pane_g1

0x4408,	// (0x0008a36e) postcard_address2_pane_ParamLimits

0x4408,	// (0x0008a36e) postcard_address2_pane

0x441a,	// (0x0008a380) postcard_message2_pane_ParamLimits

0x441a,	// (0x0008a380) postcard_message2_pane

0x6171,	// (0x0008c0d7) message2_row_pane_ParamLimits

0x6171,	// (0x0008c0d7) message2_row_pane

0x6190,	// (0x0008c0f6) address2_row_pane_ParamLimits

0x6190,	// (0x0008c0f6) address2_row_pane

0x61a3,	// (0x0008c109) postcard_message2_row_pane_g1

0x61ab,	// (0x0008c111) postcard_message2_row_pane_t1

0x61a3,	// (0x0008c109) address2_row_pane_g1

0x61ab,	// (0x0008c111) address2_row_pane_t1

0x1d19,	// (0x00087c7f) aid_size_cell_vorec

0xe46c,	// (0x000943d2) main_rss_pane

0x61b9,	// (0x0008c11f) rss_list_single_pane_ParamLimits

0x61b9,	// (0x0008c11f) rss_list_single_pane

0x61d9,	// (0x0008c13f) rss_list_single_pane_t1

0x61e7,	// (0x0008c14d) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x00095572) rss_list_single_pane_t

0xe46c,	// (0x000943d2) main_camera2_pane

0xe46c,	// (0x000943d2) main_video2_pane

0x6490,	// (0x0008c3f6) cams_zoom_pane_cp2_ParamLimits

0x6490,	// (0x0008c3f6) cams_zoom_pane_cp2

0x64b0,	// (0x0008c416) image2_vga_pane_ParamLimits

0x64b0,	// (0x0008c416) image2_vga_pane

0x6501,	// (0x0008c467) main_camera2_pane_g1_ParamLimits

0x6501,	// (0x0008c467) main_camera2_pane_g1

0x6521,	// (0x0008c487) main_camera2_pane_g2_ParamLimits

0x6521,	// (0x0008c487) main_camera2_pane_g2

0x6541,	// (0x0008c4a7) main_camera2_pane_g3_ParamLimits

0x6541,	// (0x0008c4a7) main_camera2_pane_g3

0x6561,	// (0x0008c4c7) main_camera2_pane_g4_ParamLimits

0x6561,	// (0x0008c4c7) main_camera2_pane_g4

0x6581,	// (0x0008c4e7) main_camera2_pane_g5_ParamLimits

0x6581,	// (0x0008c4e7) main_camera2_pane_g5

0x65a1,	// (0x0008c507) main_camera2_pane_g6_ParamLimits

0x65a1,	// (0x0008c507) main_camera2_pane_g6

0x65c1,	// (0x0008c527) main_camera2_pane_g7_ParamLimits

0x65c1,	// (0x0008c527) main_camera2_pane_g7

0x65e1,	// (0x0008c547) main_camera2_pane_g8_ParamLimits

0x65e1,	// (0x0008c547) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x00095593) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x00095593) main_camera2_pane_g

0x6621,	// (0x0008c587) main_camera2_pane_t1_ParamLimits

0x6621,	// (0x0008c587) main_camera2_pane_t1

0x6656,	// (0x0008c5bc) main_camera2_pane_t2_ParamLimits

0x6656,	// (0x0008c5bc) main_camera2_pane_t2

0x667c,	// (0x0008c5e2) main_camera2_pane_t3_ParamLimits

0x667c,	// (0x0008c5e2) main_camera2_pane_t3

0x66da,	// (0x0008c640) main_camera2_pane_t4_ParamLimits

0x66da,	// (0x0008c640) main_camera2_pane_t4

0x0006,

0xf640,	// (0x000955a6) main_camera2_pane_t_ParamLimits

0xf640,	// (0x000955a6) main_camera2_pane_t

0x676c,	// (0x0008c6d2) cams_zoom_pane_cp4_ParamLimits

0x676c,	// (0x0008c6d2) cams_zoom_pane_cp4

0x6782,	// (0x0008c6e8) image2_cif_pane_ParamLimits

0x6782,	// (0x0008c6e8) image2_cif_pane

0x67ad,	// (0x0008c713) image2_subqcif_pane_ParamLimits

0x67ad,	// (0x0008c713) image2_subqcif_pane

0x67c7,	// (0x0008c72d) main_video2_pane_g1_ParamLimits

0x67c7,	// (0x0008c72d) main_video2_pane_g1

0x67e1,	// (0x0008c747) main_video2_pane_g2_ParamLimits

0x67e1,	// (0x0008c747) main_video2_pane_g2

0x67f7,	// (0x0008c75d) main_video2_pane_g3_ParamLimits

0x67f7,	// (0x0008c75d) main_video2_pane_g3

0x680d,	// (0x0008c773) main_video2_pane_g4_ParamLimits

0x680d,	// (0x0008c773) main_video2_pane_g4

0x6823,	// (0x0008c789) main_video2_pane_g5_ParamLimits

0x6823,	// (0x0008c789) main_video2_pane_g5

0x6839,	// (0x0008c79f) main_video2_pane_g6_ParamLimits

0x6839,	// (0x0008c79f) main_video2_pane_g6

0x0005,

0xf64f,	// (0x000955b5) main_video2_pane_g_ParamLimits

0xf64f,	// (0x000955b5) main_video2_pane_g

0x6853,	// (0x0008c7b9) main_video2_pane_t1_ParamLimits

0x6853,	// (0x0008c7b9) main_video2_pane_t1

0x6877,	// (0x0008c7dd) main_video2_pane_t2_ParamLimits

0x6877,	// (0x0008c7dd) main_video2_pane_t2

0x68c5,	// (0x0008c82b) main_video2_pane_t3_ParamLimits

0x68c5,	// (0x0008c82b) main_video2_pane_t3

0x0002,

0xf65c,	// (0x000955c2) main_video2_pane_t_ParamLimits

0xf65c,	// (0x000955c2) main_video2_pane_t

0x5c69,	// (0x0008bbcf) call_muted_g2

0x0001,

0xf5fe,	// (0x00095564) call_muted_g

0xe46c,	// (0x000943d2) main_mup2_pane

0x690d,	// (0x0008c873) main_mup2_pane_g1_ParamLimits

0x690d,	// (0x0008c873) main_mup2_pane_g1

0x6919,	// (0x0008c87f) main_mup2_pane_g2_ParamLimits

0x6919,	// (0x0008c87f) main_mup2_pane_g2

0xb4aa,	// (0x00091410) main_mup_pane_g13_cp1

0xb4b2,	// (0x00091418) mup_volume_pane_cp1

0x6935,	// (0x0008c89b) main_mup2_pane_g4_ParamLimits

0x6935,	// (0x0008c89b) main_mup2_pane_g4

0x6947,	// (0x0008c8ad) main_mup2_pane_g5_ParamLimits

0x6947,	// (0x0008c8ad) main_mup2_pane_g5

0x6959,	// (0x0008c8bf) main_mup2_pane_g6_ParamLimits

0x6959,	// (0x0008c8bf) main_mup2_pane_g6

0x696b,	// (0x0008c8d1) main_mup2_pane_g7_ParamLimits

0x696b,	// (0x0008c8d1) main_mup2_pane_g7

0x0006,

0xf663,	// (0x000955c9) main_mup2_pane_g_ParamLimits

0xf663,	// (0x000955c9) main_mup2_pane_g

0x6983,	// (0x0008c8e9) main_mup2_pane_t1_ParamLimits

0x6983,	// (0x0008c8e9) main_mup2_pane_t1

0x6999,	// (0x0008c8ff) main_mup2_pane_t2_ParamLimits

0x6999,	// (0x0008c8ff) main_mup2_pane_t2

0x69af,	// (0x0008c915) main_mup2_pane_t3_ParamLimits

0x69af,	// (0x0008c915) main_mup2_pane_t3

0x69c5,	// (0x0008c92b) main_mup2_pane_t4_ParamLimits

0x69c5,	// (0x0008c92b) main_mup2_pane_t4

0x69dd,	// (0x0008c943) main_mup2_pane_t5_ParamLimits

0x69dd,	// (0x0008c943) main_mup2_pane_t5

0x69f5,	// (0x0008c95b) main_mup2_pane_t6_ParamLimits

0x69f5,	// (0x0008c95b) main_mup2_pane_t6

0x0005,

0xf672,	// (0x000955d8) main_mup2_pane_t_ParamLimits

0xf672,	// (0x000955d8) main_mup2_pane_t

0x6a25,	// (0x0008c98b) mup2_visualizer_pane_ParamLimits

0x6a25,	// (0x0008c98b) mup2_visualizer_pane

0x6a53,	// (0x0008c9b9) mup_progress_pane_cp_ParamLimits

0x6a53,	// (0x0008c9b9) mup_progress_pane_cp

0xb48c,	// (0x000913f2) mup_volume_pane_cp_ParamLimits

0xb48c,	// (0x000913f2) mup_volume_pane_cp

0x6a67,	// (0x0008c9cd) mup2_visualizer_pane_g1_ParamLimits

0x6a67,	// (0x0008c9cd) mup2_visualizer_pane_g1

0x6a7e,	// (0x0008c9e4) mup2_visualizer_pane_g2_ParamLimits

0x6a7e,	// (0x0008c9e4) mup2_visualizer_pane_g2

0x6a8a,	// (0x0008c9f0) mup2_visualizer_pane_g3_ParamLimits

0x6a8a,	// (0x0008c9f0) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x000955e5) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x000955e5) mup2_visualizer_pane_g

0x47da,	// (0x0008a740) aid_size_cell_fmradio

0x5e4c,	// (0x0008bdb2) aid_height_parent_landcape

0xf042,	// (0x00094fa8) wml_content_pane_cp

0xf04a,	// (0x00094fb0) wml_tabs_pane

0xf053,	// (0x00094fb9) popup_wml_miniature_window

0xf05b,	// (0x00094fc1) scroll_pane_cp021

0xf06f,	// (0x00094fd5) wml_content_pane_comp8

0xe46c,	// (0x000943d2) bg_popup_sub_pane_cp05

0x6aa8,	// (0x0008ca0e) popup_wml_miniature_window_g1

0x6ab0,	// (0x0008ca16) wml_miniature_view_pane

0x6ab8,	// (0x0008ca1e) aid_size_wml_view

0x6ac0,	// (0x0008ca26) wml_miniature_view_pane_g1

0x6ac9,	// (0x0008ca2f) wml_miniature_view_pane_g2

0x6ad2,	// (0x0008ca38) wml_miniature_view_pane_g3

0x6ada,	// (0x0008ca40) wml_miniature_view_pane_g4

0x6ae2,	// (0x0008ca48) wml_miniature_view_pane_g5

0x6aea,	// (0x0008ca50) wml_miniature_view_pane_g6

0x6af2,	// (0x0008ca58) wml_miniature_view_pane_g7

0x6afa,	// (0x0008ca60) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x000955ec) wml_miniature_view_pane_g

0x6b02,	// (0x0008ca68) background_graphic_ParamLimits

0x6b02,	// (0x0008ca68) background_graphic

0x6b0e,	// (0x0008ca74) wml_tabs_2_pane

0x6b17,	// (0x0008ca7d) wml_tabs_3_pane_ParamLimits

0x6b17,	// (0x0008ca7d) wml_tabs_3_pane

0x6b29,	// (0x0008ca8f) wml_tabs_4_pane_ParamLimits

0x6b29,	// (0x0008ca8f) wml_tabs_4_pane

0x6b3f,	// (0x0008caa5) wml_tabs_5_pane_ParamLimits

0x6b3f,	// (0x0008caa5) wml_tabs_5_pane

0xb450,	// (0x000913b6) wml_tabs_pane_g2_ParamLimits

0xb450,	// (0x000913b6) wml_tabs_pane_g2

0xb464,	// (0x000913ca) wml_tabs_pane_g3_ParamLimits

0xb464,	// (0x000913ca) wml_tabs_pane_g3

0x6b59,	// (0x0008cabf) wml_tabs_2_active_pane_ParamLimits

0x6b59,	// (0x0008cabf) wml_tabs_2_active_pane

0x6b6d,	// (0x0008cad3) wml_tabs_2_passive_pane_ParamLimits

0x6b6d,	// (0x0008cad3) wml_tabs_2_passive_pane

0x6b81,	// (0x0008cae7) wml_tabs_3_active_pane_cp_ParamLimits

0x6b81,	// (0x0008cae7) wml_tabs_3_active_pane_cp

0x6b96,	// (0x0008cafc) wml_tabs_3_passive_pane_ParamLimits

0x6b96,	// (0x0008cafc) wml_tabs_3_passive_pane

0x6ba9,	// (0x0008cb0f) wml_tabs_3_passive_pane_cp_ParamLimits

0x6ba9,	// (0x0008cb0f) wml_tabs_3_passive_pane_cp

0x6bc0,	// (0x0008cb26) tabs_4_active_pane

0x6bc8,	// (0x0008cb2e) tabs_4_passive_pane

0x6bd2,	// (0x0008cb38) tabs_4_passive_pane_cp

0x6bda,	// (0x0008cb40) tabs_4_passive_pane_cp2

0x5a0c,	// (0x0008b972) aid_height_text

0x3f7e,	// (0x00089ee4) mup_volume_cont_pane_ParamLimits

0x3f7e,	// (0x00089ee4) mup_volume_cont_pane

0x1318,	// (0x0008727e) aid_size_cell_pinb

0x1322,	// (0x00087288) aid_size_list_pinb

0x6a3f,	// (0x0008c9a5) mup2_volume_cont_pane_ParamLimits

0x6a3f,	// (0x0008c9a5) mup2_volume_cont_pane

0xb478,	// (0x000913de) mup2_volume_cont_pane_g1_ParamLimits

0xb478,	// (0x000913de) mup2_volume_cont_pane_g1

0x0fda,	// (0x00086f40) aid_size_cell_touch_ParamLimits

0x0fda,	// (0x00086f40) aid_size_cell_touch

0x1207,	// (0x0008716d) touch_pane_ParamLimits

0x1207,	// (0x0008716d) touch_pane

0xe04f,	// (0x00093fb5) main_rss2_pane

0xb4ba,	// (0x00091420) listscroll_rss2_pane

0xb4c3,	// (0x00091429) rss2_navigation_pane

0xb4cb,	// (0x00091431) list_rss2_pane

0x3872,	// (0x000897d8) scroll_pane_cp22

0xb4d3,	// (0x00091439) rss2_navigation_pane_g1

0xb4dc,	// (0x00091442) rss2_navigation_pane_g2

0xb4e4,	// (0x0009144a) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x000955fd) rss2_navigation_pane_g

0xb4ec,	// (0x00091452) rss2_navigation_pane_t1

0x6be4,	// (0x0008cb4a) rss2_list_single_pane_ParamLimits

0x6be4,	// (0x0008cb4a) rss2_list_single_pane

0xb4fa,	// (0x00091460) rss2_list_single_pane_t2

0xb508,	// (0x0009146e) rss2_list_single_pane_t3_ParamLimits

0xb508,	// (0x0009146e) rss2_list_single_pane_t3

0xb525,	// (0x0009148b) rss2_list_single_pane_t4

0x31d1,	// (0x00089137) smil_status_pane_g1

0xecd3,	// (0x00094c39) main_image2_pane_ParamLimits

0xecd3,	// (0x00094c39) main_image2_pane

0x6601,	// (0x0008c567) main_camera2_pane_g9_ParamLimits

0x6601,	// (0x0008c567) main_camera2_pane_g9

0x672f,	// (0x0008c695) main_camera2_pane_t5_ParamLimits

0x672f,	// (0x0008c695) main_camera2_pane_t5

0xb420,	// (0x00091386) main_camera2_pane_t6_ParamLimits

0xb420,	// (0x00091386) main_camera2_pane_t6

0x6bfb,	// (0x0008cb61) main_image2_pane_g1_ParamLimits

0x6bfb,	// (0x0008cb61) main_image2_pane_g1

0x4790,	// (0x0008a6f6) smil2_video_pane_ParamLimits

0x4790,	// (0x0008a6f6) smil2_video_pane

0xb1b7,	// (0x0009111d) aid_zoom_text_primary_cp

0xb1f7,	// (0x0009115d) popup_preview_fixed_window

0xefab,	// (0x00094f11) im_reading_pane_g1

0x6478,	// (0x0008c3de) cams2_bc_adjust_pane_cp_ParamLimits

0x6478,	// (0x0008c3de) cams2_bc_adjust_pane_cp

0x675e,	// (0x0008c6c4) cams2_bc_adjust_pane_ParamLimits

0x675e,	// (0x0008c6c4) cams2_bc_adjust_pane

0xb533,	// (0x00091499) cams2_bc_adjust_pane_g1

0xb53b,	// (0x000914a1) cams2_slider_pane

0xb544,	// (0x000914aa) cams2_slider_pane_g1

0xb54d,	// (0x000914b3) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x00095604) cams2_slider_pane_g

0x13fa,	// (0x00087360) calc_display_pane_ParamLimits

0x1422,	// (0x00087388) calc_paper_pane_ParamLimits

0x1445,	// (0x000873ab) grid_calc_pane_ParamLimits

0xb339,	// (0x0009129f) popup_clock_digital_window_t1_ParamLimits

0x4613,	// (0x0008a579) main_image_pane_t1

0x13dc,	// (0x00087342) aid_size_cell_calc_ParamLimits

0x13dc,	// (0x00087342) aid_size_cell_calc

0x5eb4,	// (0x0008be1a) popup_blid_sat_info2_window_ParamLimits

0x5eb4,	// (0x0008be1a) popup_blid_sat_info2_window

0xb56f,	// (0x000914d5) aid_size_cell_blid

0xb577,	// (0x000914dd) bg_popup_window_pane_cp07

0xb59a,	// (0x00091500) grid_popup_blid_pane

0xb5a4,	// (0x0009150a) heading_pane_cp05_ParamLimits

0xb5a4,	// (0x0009150a) heading_pane_cp05

0xb66e,	// (0x000915d4) cell_popup_blid_pane_ParamLimits

0xb66e,	// (0x000915d4) cell_popup_blid_pane

0xb694,	// (0x000915fa) cell_popup_blid_pane_g1

0xb69c,	// (0x00091602) cell_popup_blid_pane_t1

0x6a0f,	// (0x0008c975) mup2_indicator_pane_ParamLimits

0x6a0f,	// (0x0008c975) mup2_indicator_pane

0x3cc0,	// (0x00089c26) mup2_visualizer_osc_pane

0x6a96,	// (0x0008c9fc) mup2_visualizer_spec_pane_ParamLimits

0x6a96,	// (0x0008c9fc) mup2_visualizer_spec_pane

0x6c11,	// (0x0008cb77) mup2_spec_half_pane

0x6c1a,	// (0x0008cb80) mup2_spec_half_pane_cp

0x6c22,	// (0x0008cb88) mup2_spec_bar_pane_ParamLimits

0x6c22,	// (0x0008cb88) mup2_spec_bar_pane

0x61f5,	// (0x0008c15b) mup2_spec_bar_pane_g1

0x61ff,	// (0x0008c165) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x00095577) mup2_spec_bar_pane_g

0x6c42,	// (0x0008cba8) mup2_osc_middle_pane

0x6231,	// (0x0008c197) mup2_visualizer_osc_pane_g1

0xe079,	// (0x00093fdf) popup_number_entry_window_t1_ParamLimits

0xe08c,	// (0x00093ff2) popup_number_entry_window_t2_ParamLimits

0xe09e,	// (0x00094004) popup_number_entry_window_t3_ParamLimits

0x1259,	// (0x000871bf) popup_number_entry_window_t5_ParamLimits

0x1259,	// (0x000871bf) popup_number_entry_window_t5

0xf0d3,	// (0x00095039) popup_number_entry_window_t_ParamLimits

0xe0b0,	// (0x00094016) text_title_cp2_ParamLimits

0xb378,	// (0x000912de) aid_hotspot_pointer_text2_pane

0xb39e,	// (0x00091304) main_viewer_pane_g9_ParamLimits

0xb39e,	// (0x00091304) main_viewer_pane_g9

0x2b38,	// (0x00088a9e) cale_month_pane_t1_ParamLimits

0x3249,	// (0x000891af) bg_cale_pane_ParamLimits

0x3261,	// (0x000891c7) list_cale_pane_ParamLimits

0x3272,	// (0x000891d8) listscroll_cale_day_pane_t1

0x3284,	// (0x000891ea) scroll_pane_cp09_ParamLimits

0x4030,	// (0x00089f96) main_mup_eq_pane_t1_ParamLimits

0x4030,	// (0x00089f96) main_mup_eq_pane_t1

0x404a,	// (0x00089fb0) main_mup_eq_pane_t2_ParamLimits

0x404a,	// (0x00089fb0) main_mup_eq_pane_t2

0x4064,	// (0x00089fca) main_mup_eq_pane_t3_ParamLimits

0x4064,	// (0x00089fca) main_mup_eq_pane_t3

0x4080,	// (0x00089fe6) main_mup_eq_pane_t4_ParamLimits

0x4080,	// (0x00089fe6) main_mup_eq_pane_t4

0x409c,	// (0x0008a002) main_mup_eq_pane_t5_ParamLimits

0x409c,	// (0x0008a002) main_mup_eq_pane_t5

0x40b8,	// (0x0008a01e) main_mup_eq_pane_t6_ParamLimits

0x40b8,	// (0x0008a01e) main_mup_eq_pane_t6

0x40cc,	// (0x0008a032) main_mup_eq_pane_t7_ParamLimits

0x40cc,	// (0x0008a032) main_mup_eq_pane_t7

0x40e0,	// (0x0008a046) main_mup_eq_pane_t8_ParamLimits

0x40e0,	// (0x0008a046) main_mup_eq_pane_t8

0x40f4,	// (0x0008a05a) main_mup_eq_pane_t9_ParamLimits

0x40f4,	// (0x0008a05a) main_mup_eq_pane_t9

0x410e,	// (0x0008a074) main_mup_eq_pane_t10_ParamLimits

0x410e,	// (0x0008a074) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x000953c6) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x000953c6) main_mup_eq_pane_t

0x41bd,	// (0x0008a123) mup_equalizer_pane_cp5_ParamLimits

0x41d1,	// (0x0008a137) mup_equalizer_pane_cp6_ParamLimits

0x41e5,	// (0x0008a14b) mup_equalizer_pane_cp7_ParamLimits

0xe04f,	// (0x00093fb5) main_gallery_pane

0x624b,	// (0x0008c1b1) smil2_volume_pane

0x6253,	// (0x0008c1b9) smil_status_volume_pane_g1_ParamLimits

0x6266,	// (0x0008c1cc) smil_status_volume_pane_g2_ParamLimits

0xb3fe,	// (0x00091364) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0009557c) smil_status_volume_pane_g_ParamLimits

0xb577,	// (0x000914dd) bg_popup_window_pane_cp07_ParamLimits

0xb585,	// (0x000914eb) blid_firmament_pane

0x6c4b,	// (0x0008cbb1) aid_size_cell_gallery_ParamLimits

0x6c4b,	// (0x0008cbb1) aid_size_cell_gallery

0x6c61,	// (0x0008cbc7) grid_gallery_pane_ParamLimits

0x6c61,	// (0x0008cbc7) grid_gallery_pane

0x6c7a,	// (0x0008cbe0) cell_gallery_pane_ParamLimits

0x6c7a,	// (0x0008cbe0) cell_gallery_pane

0xb6aa,	// (0x00091610) bg_cell_gallery_focus_pane_ParamLimits

0xb6aa,	// (0x00091610) bg_cell_gallery_focus_pane

0xb6bc,	// (0x00091622) cell_gallery_pane_g1_ParamLimits

0xb6bc,	// (0x00091622) cell_gallery_pane_g1

0x6cc3,	// (0x0008cc29) cell_gallery_pane_g2_ParamLimits

0x6cc3,	// (0x0008cc29) cell_gallery_pane_g2

0x6cd0,	// (0x0008cc36) cell_gallery_pane_g3_ParamLimits

0x6cd0,	// (0x0008cc36) cell_gallery_pane_g3

0xb6c8,	// (0x0009162e) cell_gallery_pane_g4_ParamLimits

0xb6c8,	// (0x0009162e) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0009562a) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0009562a) cell_gallery_pane_g

0xb6d4,	// (0x0009163a) bg_cell_gallery_focus_pane_g1

0xb6dc,	// (0x00091642) bg_cell_gallery_focus_pane_g2

0xb6e4,	// (0x0009164a) bg_cell_gallery_focus_pane_g3

0xb6ec,	// (0x00091652) bg_cell_gallery_focus_pane_g4

0xb6f4,	// (0x0009165a) bg_cell_gallery_focus_pane_g5

0xb6fc,	// (0x00091662) bg_cell_gallery_focus_pane_g6

0xb704,	// (0x0009166a) bg_cell_gallery_focus_pane_g7

0xb70c,	// (0x00091672) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x00095633) bg_cell_gallery_focus_pane_g

0xb714,	// (0x0009167a) aid_firma_cardinal

0xb728,	// (0x0009168e) blid_firmament_pane_t1

0xb73f,	// (0x000916a5) blid_firmament_pane_t2

0xb756,	// (0x000916bc) blid_firmament_pane_t3

0xb76d,	// (0x000916d3) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x00095644) blid_firmament_pane_t

0xb784,	// (0x000916ea) blid_sat_info_pane

0xb794,	// (0x000916fa) blid_sat_info_pane_g1

0xb794,	// (0x000916fa) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0009564d) blid_sat_info_pane_g

0xb79e,	// (0x00091704) blid_sat_info_pane_t1

0xb7ac,	// (0x00091712) smil2_volume_content_pane

0xb7b5,	// (0x0009171b) smil2_volume_pane_g1

0xed62,	// (0x00094cc8) smil2_volume_content_pane_g1

0xb7bd,	// (0x00091723) smil2_volume_content_pane_g2

0xb7c6,	// (0x0009172c) smil2_volume_content_pane_g3

0xb7cf,	// (0x00091735) smil2_volume_content_pane_g4

0xb7d8,	// (0x0009173e) smil2_volume_content_pane_g5

0xb7e1,	// (0x00091747) smil2_volume_content_pane_g6

0xb7ea,	// (0x00091750) smil2_volume_content_pane_g7

0xb7f3,	// (0x00091759) smil2_volume_content_pane_g8

0xb7fc,	// (0x00091762) smil2_volume_content_pane_g9

0xb805,	// (0x0009176b) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x00095652) smil2_volume_content_pane_g

0x19b2,	// (0x00087918) cale_week_day_heading_pane_t1_ParamLimits

0x19fc,	// (0x00087962) cale_week_day_heading_pane_t2_ParamLimits

0x1a4b,	// (0x000879b1) cale_week_day_heading_pane_t3_ParamLimits

0x1a9a,	// (0x00087a00) cale_week_day_heading_pane_t4_ParamLimits

0x1ae9,	// (0x00087a4f) cale_week_day_heading_pane_t5_ParamLimits

0x1b40,	// (0x00087aa6) cale_week_day_heading_pane_t6_ParamLimits

0x1b97,	// (0x00087afd) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0009513e) cale_week_day_heading_pane_t_ParamLimits

0xee5e,	// (0x00094dc4) bg_cale_side_pane_ParamLimits

0x1be1,	// (0x00087b47) cale_week_time_pane_t1_ParamLimits

0x1bfb,	// (0x00087b61) cale_week_time_pane_t2_ParamLimits

0x1c15,	// (0x00087b7b) cale_week_time_pane_t3_ParamLimits

0x1c2f,	// (0x00087b95) cale_week_time_pane_t4_ParamLimits

0x1c49,	// (0x00087baf) cale_week_time_pane_t5_ParamLimits

0x1c63,	// (0x00087bc9) cale_week_time_pane_t6_ParamLimits

0x1c7d,	// (0x00087be3) cale_week_time_pane_t7_ParamLimits

0x1c9d,	// (0x00087c03) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0009514d) cale_week_time_pane_t_ParamLimits

0x1cbd,	// (0x00087c23) cell_cale_week_pane_g2_ParamLimits

0xee5e,	// (0x00094dc4) bg_cale_side_pane_cp01_ParamLimits

0x2fd8,	// (0x00088f3e) cale_month_week_pane_t1_ParamLimits

0x2ff1,	// (0x00088f57) cale_month_week_pane_t2_ParamLimits

0x300a,	// (0x00088f70) cale_month_week_pane_t3_ParamLimits

0x3023,	// (0x00088f89) cale_month_week_pane_t4_ParamLimits

0x303c,	// (0x00088fa2) cale_month_week_pane_t5_ParamLimits

0x3055,	// (0x00088fbb) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x00095226) cale_month_week_pane_t_ParamLimits

0xb2b5,	// (0x0009121b) cell_cale_month_pane_g1_ParamLimits

0xe04f,	// (0x00093fb5) main_cale_event_viewer_pane

0xe04f,	// (0x00093fb5) listscroll_cale_event_viewer_pane

0xb80e,	// (0x00091774) list_cale_ev_pane

0xb816,	// (0x0009177c) scroll_pane_cp023

0xb822,	// (0x00091788) field_cale_ev_pane_ParamLimits

0xb822,	// (0x00091788) field_cale_ev_pane

0xb83e,	// (0x000917a4) field_cale_ev_content_pane_ParamLimits

0xb83e,	// (0x000917a4) field_cale_ev_content_pane

0xb84a,	// (0x000917b0) field_cale_ev_pane_g1_ParamLimits

0xb84a,	// (0x000917b0) field_cale_ev_pane_g1

0xb856,	// (0x000917bc) field_cale_ev_pane_g2_ParamLimits

0xb856,	// (0x000917bc) field_cale_ev_pane_g2

0xb86e,	// (0x000917d4) field_cale_ev_pane_g3_ParamLimits

0xb86e,	// (0x000917d4) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x00095667) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x00095667) field_cale_ev_pane_g

0xb886,	// (0x000917ec) field_cale_ev_pane_t1_ParamLimits

0xb886,	// (0x000917ec) field_cale_ev_pane_t1

0xb89d,	// (0x00091803) field_cale_ev_content_pane_t1_ParamLimits

0xb89d,	// (0x00091803) field_cale_ev_content_pane_t1

0x428d,	// (0x0008a1f3) bg_button_pane_cp01

0x16f5,	// (0x0008765b) listscroll_cale_week_pane_ParamLimits

0xee08,	// (0x00094d6e) popup_toolbar_window_cp01

0xee2f,	// (0x00094d95) listscroll_cale_week_pane_t1_ParamLimits

0x16f5,	// (0x0008765b) listscroll_cale_day_pane_ParamLimits

0xee08,	// (0x00094d6e) popup_toolbar_window_cp02

0x3272,	// (0x000891d8) listscroll_cale_day_pane_t1_ParamLimits

0x16f5,	// (0x0008765b) main_cale_month_pane_ParamLimits

0xb3e9,	// (0x0009134f) popup_toolbar_window_cp03_ParamLimits

0xb3e9,	// (0x0009134f) popup_toolbar_window_cp03

0x45f1,	// (0x0008a557) main_image_pane_g2_ParamLimits

0x45f1,	// (0x0008a557) main_image_pane_g2

0x4602,	// (0x0008a568) main_image_pane_g3_ParamLimits

0x4602,	// (0x0008a568) main_image_pane_g3

0x0002,

0xf4f2,	// (0x00095458) main_image_pane_g_ParamLimits

0xf4f2,	// (0x00095458) main_image_pane_g

0x4613,	// (0x0008a579) main_image_pane_t1_ParamLimits

0x462a,	// (0x0008a590) main_image_pane_t2_ParamLimits

0x462a,	// (0x0008a590) main_image_pane_t2

0x463c,	// (0x0008a5a2) main_image_pane_t3_ParamLimits

0x463c,	// (0x0008a5a2) main_image_pane_t3

0x4664,	// (0x0008a5ca) main_image_pane_t4_ParamLimits

0x4664,	// (0x0008a5ca) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0009545f) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0009545f) main_image_pane_t

0x4684,	// (0x0008a5ea) popup_image_details_window_cp01

0x468e,	// (0x0008a5f4) popup_toobar_trans_pane_cp01_ParamLimits

0x468e,	// (0x0008a5f4) popup_toobar_trans_pane_cp01

0x5f8b,	// (0x0008bef1) popup_image_details_window_ParamLimits

0x5f8b,	// (0x0008bef1) popup_image_details_window

0xb3bc,	// (0x00091322) popup_image_focus_window

0x6432,	// (0x0008c398) camera2_autofocus_pane_ParamLimits

0x6432,	// (0x0008c398) camera2_autofocus_pane

0xe04f,	// (0x00093fb5) bg_popup_sub_pane_cp06

0xb8ba,	// (0x00091820) popup_image_focus_window_g1

0xb8c2,	// (0x00091828) popup_image_focus_window_g2

0xb8ca,	// (0x00091830) popup_image_focus_window_g3

0xb8d2,	// (0x00091838) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0009566e) popup_image_focus_window_g

0xb8da,	// (0x00091840) popup_image_focus_window_t1

0xb8e8,	// (0x0009184e) popup_image_focus_window_t2

0xb8f8,	// (0x0009185e) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x00095677) popup_image_focus_window_t

0xb906,	// (0x0009186c) camera2_autofocus_pane_g1

0xecd3,	// (0x00094c39) bg_tb_trans_pane_cp01

0xb914,	// (0x0009187a) popup_image_details_window_g1

0xb927,	// (0x0009188d) popup_image_details_window_g2

0x0002,

0xf723,	// (0x00095689) popup_image_details_window_g

0xb950,	// (0x000918b6) popup_image_details_window_t1

0xb962,	// (0x000918c8) popup_image_details_window_t2

0xb97b,	// (0x000918e1) popup_image_details_window_t3

0xb98f,	// (0x000918f5) popup_image_details_window_t4

0xb9aa,	// (0x00091910) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x00095690) popup_image_details_window_t

0xe797,	// (0x000946fd) bg_calc_paper_pane_ParamLimits

0xe04f,	// (0x00093fb5) grid_highlight_pane_cp013

0xb209,	// (0x0009116f) list_calc_pane_ParamLimits

0xb21b,	// (0x00091181) scroll_pane_cp024

0xece1,	// (0x00094c47) bg_calc_display_pane_ParamLimits

0x1543,	// (0x000874a9) calc_display_pane_t1_ParamLimits

0x1555,	// (0x000874bb) calc_display_pane_t2_ParamLimits

0xb223,	// (0x00091189) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x000950c0) calc_display_pane_t_ParamLimits

0x161a,	// (0x00087580) cell_calc_pane_g2

0x0001,

0xf177,	// (0x000950dd) cell_calc_pane_g

0x1623,	// (0x00087589) cell_calc_pane_t1

0xed40,	// (0x00094ca6) grid_highlight_pane_cp02_ParamLimits

0xed56,	// (0x00094cbc) toolbar_button_pane_cp01_ParamLimits

0xed56,	// (0x00094cbc) toolbar_button_pane_cp01

0x46d0,	// (0x0008a636) temp_image_control_pane_ParamLimits

0x46d0,	// (0x0008a636) temp_image_control_pane

0xecd3,	// (0x00094c39) main_mp3_pane

0xb9c4,	// (0x0009192a) temp_image_control_pane_g1_ParamLimits

0xb9c4,	// (0x0009192a) temp_image_control_pane_g1

0xb9d2,	// (0x00091938) temp_image_control_pane_g2_ParamLimits

0xb9d2,	// (0x00091938) temp_image_control_pane_g2

0xb9e4,	// (0x0009194a) temp_image_control_pane_g3_ParamLimits

0xb9e4,	// (0x0009194a) temp_image_control_pane_g3

0x6d0d,	// (0x0008cc73) temp_image_control_pane_g4_ParamLimits

0x6d0d,	// (0x0008cc73) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0009569b) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0009569b) temp_image_control_pane_g

0xb9c4,	// (0x0009192a) main_mp3_pane_g1

0x6d20,	// (0x0008cc86) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x000956a4) main_mp3_pane_g

0xba27,	// (0x0009198d) main_mp3_pane_t1

0xeeba,	// (0x00094e20) main_camera_pane_g8_ParamLimits

0xeeba,	// (0x00094e20) main_camera_pane_g8

0x1fe2,	// (0x00087f48) main_video_pane_g7_ParamLimits

0x1fe2,	// (0x00087f48) main_video_pane_g7

0xb43e,	// (0x000913a4) main_camera2_pane_t7_ParamLimits

0xb43e,	// (0x000913a4) main_camera2_pane_t7

0xf002,	// (0x00094f68) scroll_pane_cp025_ParamLimits

0xf002,	// (0x00094f68) scroll_pane_cp025

0xf016,	// (0x00094f7c) scroll_pane_cp026_ParamLimits

0xf016,	// (0x00094f7c) scroll_pane_cp026

0xf025,	// (0x00094f8b) wml_content_pane_ParamLimits

0xe04f,	// (0x00093fb5) main_touch_calib_pane

0x6df6,	// (0x0008cd5c) main_touch_calib_pane_g1

0x6e08,	// (0x0008cd6e) main_touch_calib_pane_g2

0x6e1a,	// (0x0008cd80) main_touch_calib_pane_g3

0x6e2c,	// (0x0008cd92) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x000956c2) main_touch_calib_pane_g

0x6e3e,	// (0x0008cda4) main_touch_calib_pane_t1

0x6e58,	// (0x0008cdbe) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x000956cb) main_touch_calib_pane_t

0x3b1b,	// (0x00089a81) mup_progress_pane_cp02

0x3b50,	// (0x00089ab6) navi_pane_g1

0x3c09,	// (0x00089b6f) navi_pane_mp_t3

0xecd3,	// (0x00094c39) main_mp3_pane_ParamLimits

0x611b,	// (0x0008c081) navi_pane_ParamLimits

0xb9c4,	// (0x0009192a) main_mp3_pane_g1_ParamLimits

0x6d20,	// (0x0008cc86) main_mp3_pane_g2_ParamLimits

0x6d2e,	// (0x0008cc94) main_mp3_pane_g3_ParamLimits

0x6d2e,	// (0x0008cc94) main_mp3_pane_g3

0x6d3c,	// (0x0008cca2) main_mp3_pane_g4_ParamLimits

0x6d3c,	// (0x0008cca2) main_mp3_pane_g4

0xb9f4,	// (0x0009195a) main_mp3_pane_g5_ParamLimits

0xb9f4,	// (0x0009195a) main_mp3_pane_g5

0xba02,	// (0x00091968) main_mp3_pane_g6_ParamLimits

0xba02,	// (0x00091968) main_mp3_pane_g6

0xba0f,	// (0x00091975) main_mp3_pane_g7_ParamLimits

0xba0f,	// (0x00091975) main_mp3_pane_g7

0xba1b,	// (0x00091981) main_mp3_pane_g8_ParamLimits

0xba1b,	// (0x00091981) main_mp3_pane_g8

0xf73e,	// (0x000956a4) main_mp3_pane_g_ParamLimits

0x6d4a,	// (0x0008ccb0) main_mp3_pane_t2

0x6d58,	// (0x0008ccbe) main_mp3_pane_t3

0xba35,	// (0x0009199b) main_mp3_pane_t4

0xba43,	// (0x000919a9) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x000956b5) main_mp3_pane_t

0xba51,	// (0x000919b7) mup_progress_pane_cp01

0xb1b7,	// (0x0009111d) aid_zoom_text_secondary2

0xb80e,	// (0x00091774) list_cale_ev2_pane

0xb816,	// (0x0009177c) scroll_pane_cp023_ParamLimits

0x6eae,	// (0x0008ce14) field_cale_ev2_pane_ParamLimits

0x6eae,	// (0x0008ce14) field_cale_ev2_pane

0xba59,	// (0x000919bf) field_cale_ev2_pane_g1_ParamLimits

0xba59,	// (0x000919bf) field_cale_ev2_pane_g1

0xba65,	// (0x000919cb) field_cale_ev2_pane_g2_ParamLimits

0xba65,	// (0x000919cb) field_cale_ev2_pane_g2

0xba7d,	// (0x000919e3) field_cale_ev2_pane_g3_ParamLimits

0xba7d,	// (0x000919e3) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x000956d6) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x000956d6) field_cale_ev2_pane_g

0xbaa1,	// (0x00091a07) field_cale_ev2_pane_t1_ParamLimits

0xbaa1,	// (0x00091a07) field_cale_ev2_pane_t1

0xbab8,	// (0x00091a1e) field_cale_ev2_pane_t2_ParamLimits

0xbab8,	// (0x00091a1e) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x000956df) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x000956df) field_cale_ev2_pane_t

0x43be,	// (0x0008a324) main_postcard_pane_g5_ParamLimits

0x43be,	// (0x0008a324) main_postcard_pane_g5

0x43d4,	// (0x0008a33a) main_postcard_pane_g6_ParamLimits

0x43d4,	// (0x0008a33a) main_postcard_pane_g6

0x1d9c,	// (0x00087d02) camera2_autofocus_pane_cp_ParamLimits

0x1d9c,	// (0x00087d02) camera2_autofocus_pane_cp

0xecd3,	// (0x00094c39) main_mup3_pane

0x6ef0,	// (0x0008ce56) main_mup3_pane_g1_ParamLimits

0x6ef0,	// (0x0008ce56) main_mup3_pane_g1

0x6f12,	// (0x0008ce78) main_mup3_pane_g2_ParamLimits

0x6f12,	// (0x0008ce78) main_mup3_pane_g2

0x6f94,	// (0x0008cefa) main_mup3_pane_g3_ParamLimits

0x6f94,	// (0x0008cefa) main_mup3_pane_g3

0x6fda,	// (0x0008cf40) main_mup3_pane_g4_ParamLimits

0x6fda,	// (0x0008cf40) main_mup3_pane_g4

0x7020,	// (0x0008cf86) main_mup3_pane_g5_ParamLimits

0x7020,	// (0x0008cf86) main_mup3_pane_g5

0x7068,	// (0x0008cfce) main_mup3_pane_g6_ParamLimits

0x7068,	// (0x0008cfce) main_mup3_pane_g6

0xbacd,	// (0x00091a33) main_mup3_pane_g7_ParamLimits

0xbacd,	// (0x00091a33) main_mup3_pane_g7

0x0007,

0xf789,	// (0x000956ef) main_mup3_pane_g_ParamLimits

0xf789,	// (0x000956ef) main_mup3_pane_g

0x70e6,	// (0x0008d04c) main_mup3_pane_t1_ParamLimits

0x70e6,	// (0x0008d04c) main_mup3_pane_t1

0x715a,	// (0x0008d0c0) main_mup3_pane_t2_ParamLimits

0x715a,	// (0x0008d0c0) main_mup3_pane_t2

0x722e,	// (0x0008d194) main_mup3_pane_t4_ParamLimits

0x722e,	// (0x0008d194) main_mup3_pane_t4

0x7284,	// (0x0008d1ea) main_mup3_pane_t5_ParamLimits

0x7284,	// (0x0008d1ea) main_mup3_pane_t5

0x7340,	// (0x0008d2a6) main_mup3_pane_t6_ParamLimits

0x7340,	// (0x0008d2a6) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x00095700) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x00095700) main_mup3_pane_t

0x73f8,	// (0x0008d35e) mup3_progress_pane_ParamLimits

0x73f8,	// (0x0008d35e) mup3_progress_pane

0x7484,	// (0x0008d3ea) popup_mup3_control_window_ParamLimits

0x7484,	// (0x0008d3ea) popup_mup3_control_window

0xbadb,	// (0x00091a41) popup_mup3_text_window

0x74b6,	// (0x0008d41c) mup3_progress_pane_t1

0x74d5,	// (0x0008d43b) mup3_progress_pane_t2

0xbae3,	// (0x00091a49) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0009570d) mup3_progress_pane_t

0xbb00,	// (0x00091a66) mup_progress_pane_cp03

0xe04f,	// (0x00093fb5) bg_tb_trans_pane_cp04

0x74f4,	// (0x0008d45a) mup3_volume_pane

0x74fc,	// (0x0008d462) popup_mup3_control_window_g1

0x7505,	// (0x0008d46b) mup3_volume_pane_g1

0x750e,	// (0x0008d474) mup3_volume_pane_g2

0x7517,	// (0x0008d47d) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x00095714) mup3_volume_pane_g

0xe04f,	// (0x00093fb5) bg_tb_trans_pane_cp03

0xbb10,	// (0x00091a76) popup_mup3_text_window_g1

0xbb18,	// (0x00091a7e) popup_mup3_text_window_t1

0xed29,	// (0x00094c8f) list_calc_item_pane_g1_ParamLimits

0xb4a1,	// (0x00091407) mup_volume_pane_cp_g1

0x6e72,	// (0x0008cdd8) main_touch_calib_pane_t3

0x6e86,	// (0x0008cdec) main_touch_calib_pane_t4

0x6e9a,	// (0x0008ce00) main_touch_calib_pane_t5

0xb193,	// (0x000910f9) aid_cell_size_toolbar2

0xb19b,	// (0x00091101) aid_popup3_width_pane

0xb1a7,	// (0x0009110d) aid_zoom_text_msg_primary

0x1d73,	// (0x00087cd9) vorec_t7

0xeced,	// (0x00094c53) bg_calc_paper_pane_g1_ParamLimits

0xecf9,	// (0x00094c5f) bg_calc_paper_pane_g2_ParamLimits

0xed05,	// (0x00094c6b) bg_calc_paper_pane_g3_ParamLimits

0xed11,	// (0x00094c77) bg_calc_paper_pane_g4_ParamLimits

0xed1d,	// (0x00094c83) bg_calc_paper_pane_g5_ParamLimits

0x159e,	// (0x00087504) bg_calc_paper_pane_g6_ParamLimits

0x15af,	// (0x00087515) bg_calc_paper_pane_g7_ParamLimits

0x15c0,	// (0x00087526) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x000950c7) bg_calc_paper_pane_g_ParamLimits

0x15d3,	// (0x00087539) calc_bg_paper_pane_g9_ParamLimits

0x1ef4,	// (0x00087e5a) image_qvga_pane_ParamLimits

0x1ef4,	// (0x00087e5a) image_qvga_pane

0xe6c7,	// (0x0009462d) bg_popup_sub_pane_cp04_ParamLimits

0x454f,	// (0x0008a4b5) popup_mup_playback_window_g1_ParamLimits

0x455b,	// (0x0008a4c1) popup_mup_playback_window_t1_ParamLimits

0x4570,	// (0x0008a4d6) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x00095453) popup_mup_playback_window_t_ParamLimits

0x6929,	// (0x0008c88f) main_mup2_pane_g3_ParamLimits

0x6929,	// (0x0008c88f) main_mup2_pane_g3

0x21f1,	// (0x00088157) popup_toolbar_window_cp04

0x4d69,	// (0x0008accf) popup_call2_audio_second_window_g3_ParamLimits

0x4d69,	// (0x0008accf) popup_call2_audio_second_window_g3

0x5173,	// (0x0008b0d9) popup_call2_audio_first_window_g4_ParamLimits

0x5173,	// (0x0008b0d9) popup_call2_audio_first_window_g4

0x57f2,	// (0x0008b758) popup_call2_audio_in_window_g4_ParamLimits

0x57f2,	// (0x0008b758) popup_call2_audio_in_window_g4

0x4585,	// (0x0008a4eb) aid_area_sk_bg_cut_ParamLimits

0x4585,	// (0x0008a4eb) aid_area_sk_bg_cut

0x45a3,	// (0x0008a509) aid_area_sk_bg_cut_2_ParamLimits

0x45a3,	// (0x0008a509) aid_area_sk_bg_cut_2

0x6cb3,	// (0x0008cc19) aid_placing_details_win

0x6cbb,	// (0x0008cc21) aid_placing_details_win_2

0xb906,	// (0x0009186c) camera2_autofocus_pane_g1_ParamLimits

0x11a0,	// (0x00087106) popup_fixed_preview_cale_window_ParamLimits

0x11a0,	// (0x00087106) popup_fixed_preview_cale_window

0x3cd1,	// (0x00089c37) navi_slider_pane_g3

0x3cda,	// (0x00089c40) navi_slider_pane_g4

0x3ce3,	// (0x00089c49) navi_slider_pane_g5

0x3cd1,	// (0x00089c37) navi_slider_pane_g6

0xb35f,	// (0x000912c5) navi_slider_pane_g7

0x4202,	// (0x0008a168) mup_scale_pane_g3

0x420b,	// (0x0008a171) mup_scale_pane_g4

0x4214,	// (0x0008a17a) mup_scale_pane_g5

0x421d,	// (0x0008a183) mup_scale_pane_g6

0x4226,	// (0x0008a18c) mup_scale_pane_g7

0x3cd1,	// (0x00089c37) cams2_slider_pane_g3

0xb556,	// (0x000914bc) cams2_slider_pane_g4

0xb55e,	// (0x000914c4) cams2_slider_pane_g5

0x3cd1,	// (0x00089c37) cams2_slider_pane_g6

0xb566,	// (0x000914cc) cams2_slider_pane_g7

0xb794,	// (0x000916fa) camera2_autofocus_pane_cp_g1

0x5e72,	// (0x0008bdd8) bg_popup_preview_window_pane_cp02_ParamLimits

0x5e72,	// (0x0008bdd8) bg_popup_preview_window_pane_cp02

0xbb26,	// (0x00091a8c) list_fp_cale_pane_ParamLimits

0xbb26,	// (0x00091a8c) list_fp_cale_pane

0xbb32,	// (0x00091a98) popup_fixed_preview_cale_window_t1_ParamLimits

0xbb32,	// (0x00091a98) popup_fixed_preview_cale_window_t1

0x7520,	// (0x0008d486) popup_fixed_preview_cale_window_t2_ParamLimits

0x7520,	// (0x0008d486) popup_fixed_preview_cale_window_t2

0x7535,	// (0x0008d49b) popup_fixed_preview_cale_window_t3_ParamLimits

0x7535,	// (0x0008d49b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0009571b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0009571b) popup_fixed_preview_cale_window_t

0x754a,	// (0x0008d4b0) list_single_fp_cale_pane_ParamLimits

0x754a,	// (0x0008d4b0) list_single_fp_cale_pane

0xbb50,	// (0x00091ab6) list_single_fp_cale_pane_g1_ParamLimits

0xbb50,	// (0x00091ab6) list_single_fp_cale_pane_g1

0xbb5c,	// (0x00091ac2) list_single_fp_cale_pane_g2_ParamLimits

0xbb5c,	// (0x00091ac2) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x00095722) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x00095722) list_single_fp_cale_pane_g

0xbb75,	// (0x00091adb) list_single_fp_cale_pane_t1_ParamLimits

0xbb75,	// (0x00091adb) list_single_fp_cale_pane_t1

0xbb87,	// (0x00091aed) list_single_fp_cale_pane_t2_ParamLimits

0xbb87,	// (0x00091aed) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x00095729) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x00095729) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe04f,	// (0x00093fb5) main_dialer_pane

0x7561,	// (0x0008d4c7) aid_cell_size_keypad

0x756b,	// (0x0008d4d1) dialer_ne_pane

0x7573,	// (0x0008d4d9) grid_dialer_command_1_pane

0x757b,	// (0x0008d4e1) grid_dialer_command_2_pane

0x7583,	// (0x0008d4e9) grid_dialer_keypad_pane

0x7595,	// (0x0008d4fb) bg_popup_call_pane_cp06_ParamLimits

0x7595,	// (0x0008d4fb) bg_popup_call_pane_cp06

0x75a1,	// (0x0008d507) dialer_ne_clear_pane_ParamLimits

0x75a1,	// (0x0008d507) dialer_ne_clear_pane

0xbbba,	// (0x00091b20) dialer_ne_pane_g1

0xbbc2,	// (0x00091b28) dialer_ne_pane_t1_ParamLimits

0xbbc2,	// (0x00091b28) dialer_ne_pane_t1

0x75ad,	// (0x0008d513) dialer_ne_pane_t2_ParamLimits

0x75ad,	// (0x0008d513) dialer_ne_pane_t2

0x75d7,	// (0x0008d53d) dialer_ne_pane_t3_ParamLimits

0x75d7,	// (0x0008d53d) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0009572e) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0009572e) dialer_ne_pane_t

0x7607,	// (0x0008d56d) dialer_ne_pane_t3_copy1_ParamLimits

0x7607,	// (0x0008d56d) dialer_ne_pane_t3_copy1

0x7636,	// (0x0008d59c) cell_dialer_keypad_pane_ParamLimits

0x7636,	// (0x0008d59c) cell_dialer_keypad_pane

0x764d,	// (0x0008d5b3) cell_dialer_command_1_pane_ParamLimits

0x764d,	// (0x0008d5b3) cell_dialer_command_1_pane

0x7663,	// (0x0008d5c9) cell_dialer_command_2_pane_ParamLimits

0x7663,	// (0x0008d5c9) cell_dialer_command_2_pane

0xbbd4,	// (0x00091b3a) bg_button_pane_cp02_ParamLimits

0xbbd4,	// (0x00091b3a) bg_button_pane_cp02

0x7672,	// (0x0008d5d8) cell_dialer_keypad_pane_g1_ParamLimits

0x7672,	// (0x0008d5d8) cell_dialer_keypad_pane_g1

0xbbd4,	// (0x00091b3a) bg_button_pane_cp03_ParamLimits

0xbbd4,	// (0x00091b3a) bg_button_pane_cp03

0x7687,	// (0x0008d5ed) cell_dialer_command_1_pane_g1_ParamLimits

0x7687,	// (0x0008d5ed) cell_dialer_command_1_pane_g1

0xbbe0,	// (0x00091b46) bg_button_pane_cp04

0x769a,	// (0x0008d600) cell_dialer_command_2_pane_g1

0x3cc0,	// (0x00089c26) bg_button_pane_cp06

0xbbe8,	// (0x00091b4e) dialer_ne_clear_pane_g1

0x3b5c,	// (0x00089ac2) navi_pane_g2

0x3b8a,	// (0x00089af0) navi_pane_g3

0x0002,

0xf3f0,	// (0x00095356) navi_pane_g

0x3c17,	// (0x00089b7d) navi_pane_mv_g2

0x3c3e,	// (0x00089ba4) navi_pane_mv_g5

0x3c46,	// (0x00089bac) navi_pane_mv_t1

0xece1,	// (0x00094c47) main_clock2_pane

0x76e7,	// (0x0008d64d) main_clock2_list_pane_ParamLimits

0x76e7,	// (0x0008d64d) main_clock2_list_pane

0x7721,	// (0x0008d687) main_clock2_pane_t1_ParamLimits

0x7721,	// (0x0008d687) main_clock2_pane_t1

0x775f,	// (0x0008d6c5) main_clock2_pane_t2_ParamLimits

0x775f,	// (0x0008d6c5) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x00095735) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x00095735) main_clock2_pane_t

0x77fd,	// (0x0008d763) popup_clock_analogue_window_cp03_ParamLimits

0x77fd,	// (0x0008d763) popup_clock_analogue_window_cp03

0x7822,	// (0x0008d788) popup_clock_digital_window_cp02_ParamLimits

0x7822,	// (0x0008d788) popup_clock_digital_window_cp02

0x7895,	// (0x0008d7fb) main_clock2_list_single_pane_ParamLimits

0x7895,	// (0x0008d7fb) main_clock2_list_single_pane

0x3cc0,	// (0x00089c26) list_highlight_pane_cp05

0xbc06,	// (0x00091b6c) main_clock2_list_single_pane_t1

0x21f1,	// (0x00088157) popup_toolbar_window_cp04_ParamLimits

0x6cdd,	// (0x0008cc43) camera2_autofocus_pane_g2_ParamLimits

0x6cdd,	// (0x0008cc43) camera2_autofocus_pane_g2

0x6ce9,	// (0x0008cc4f) camera2_autofocus_pane_g3_ParamLimits

0x6ce9,	// (0x0008cc4f) camera2_autofocus_pane_g3

0x6cf5,	// (0x0008cc5b) camera2_autofocus_pane_g4_ParamLimits

0x6cf5,	// (0x0008cc5b) camera2_autofocus_pane_g4

0x6d01,	// (0x0008cc67) camera2_autofocus_pane_g5_ParamLimits

0x6d01,	// (0x0008cc67) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0009567e) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0009567e) camera2_autofocus_pane_g

0x6ed0,	// (0x0008ce36) camera2_autofocus_pane_cp_g2

0x6ed8,	// (0x0008ce3e) camera2_autofocus_pane_cp_g3

0x6ee0,	// (0x0008ce46) camera2_autofocus_pane_cp_g4

0x6ee8,	// (0x0008ce4e) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x000956e4) camera2_autofocus_pane_cp_g

0x758d,	// (0x0008d4f3) popup_dialer_spcha_window

0xe04f,	// (0x00093fb5) bg_popup_sub_pane_cp07

0xbc14,	// (0x00091b7a) list_spcha_pane

0xbc1c,	// (0x00091b82) list_single_spcha_pane_ParamLimits

0xbc1c,	// (0x00091b82) list_single_spcha_pane

0xe04f,	// (0x00093fb5) list_highlight_pane_cp06

0xbc2d,	// (0x00091b93) list_single_spcha_pane_t1

0x559c,	// (0x0008b502) popup_call2_audio_out_window_g4_ParamLimits

0x559c,	// (0x0008b502) popup_call2_audio_out_window_g4

0xe04f,	// (0x00093fb5) main_imed2_pane

0xb3c4,	// (0x0009132a) popup_imed_adjust2_window

0x5fa3,	// (0x0008bf09) popup_imed_trans_window_ParamLimits

0x5fa3,	// (0x0008bf09) popup_imed_trans_window

0xb5d0,	// (0x00091536) popup_blid_sat_info2_window_t1

0xb5de,	// (0x00091544) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x00095613) popup_blid_sat_info2_window_t

0x793f,	// (0x0008d8a5) aid_size_cell_colour_35

0x795f,	// (0x0008d8c5) aid_size_cell_colour_112

0x797f,	// (0x0008d8e5) aid_size_cell_effect

0x5e7e,	// (0x0008bde4) bg_tb_trans_pane_cp02

0x33b9,	// (0x0008931f) heading_imed_pane

0x799f,	// (0x0008d905) listscroll_imed_pane

0xbc3b,	// (0x00091ba1) heading_imed_pane_g1

0xbc43,	// (0x00091ba9) heading_imed_pane_t1

0xbc51,	// (0x00091bb7) grid_imed_colour_35_pane_ParamLimits

0xbc51,	// (0x00091bb7) grid_imed_colour_35_pane

0x79ab,	// (0x0008d911) grid_imed_effect_pane

0xbc69,	// (0x00091bcf) list_imed_aspect_pane

0x79c1,	// (0x0008d927) scroll_pane_cp027_ParamLimits

0x79c1,	// (0x0008d927) scroll_pane_cp027

0x79d2,	// (0x0008d938) cell_imed_effect_pane_ParamLimits

0x79d2,	// (0x0008d938) cell_imed_effect_pane

0xbc71,	// (0x00091bd7) cell_imed_colour_pane_ParamLimits

0xbc71,	// (0x00091bd7) cell_imed_colour_pane

0xbcb3,	// (0x00091c19) cell_imed_colour_pane_g1_ParamLimits

0xbcb3,	// (0x00091c19) cell_imed_colour_pane_g1

0xbcc4,	// (0x00091c2a) hgihlgiht_grid_pane_cp016_ParamLimits

0xbcc4,	// (0x00091c2a) hgihlgiht_grid_pane_cp016

0x79f9,	// (0x0008d95f) cell_imed_effect_pane_g1

0x7a01,	// (0x0008d967) grid_highlight_pane_cp017

0xbcd5,	// (0x00091c3b) list_imed_single_pane_ParamLimits

0xbcd5,	// (0x00091c3b) list_imed_single_pane

0xe04f,	// (0x00093fb5) list_highlight_pane_cp07

0xbceb,	// (0x00091c51) list_imed_aspect_pane_comp1_t1

0x5e7e,	// (0x0008bde4) bg_tb_trans_pane_cp05

0xbd0d,	// (0x00091c73) popup_imed_adjust2_window_g1

0xbd34,	// (0x00091c9a) popup_imed_adjust2_window_t1

0xbd4c,	// (0x00091cb2) slider_imed_adjust_pane

0xbd60,	// (0x00091cc6) slider_imed_adjust_pane_g1

0xbd70,	// (0x00091cd6) slider_imed_adjust_pane_g2

0xbd80,	// (0x00091ce6) slider_imed_adjust_pane_g3

0xbd91,	// (0x00091cf7) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x00095752) slider_imed_adjust_pane_g

0x7a0a,	// (0x0008d970) aid_size_cell_clipart2

0x7a16,	// (0x0008d97c) grid_imed_clipart_pane

0xbda2,	// (0x00091d08) scroll_pane_cp031

0x7a20,	// (0x0008d986) cell_imed_clipart_pane_ParamLimits

0x7a20,	// (0x0008d986) cell_imed_clipart_pane

0x7a44,	// (0x0008d9aa) cell_imed_clipart_pane_g1

0xe04f,	// (0x00093fb5) grid_highlight_pane_cp014

0x76fc,	// (0x0008d662) main_clock2_pane_g1_ParamLimits

0x76fc,	// (0x0008d662) main_clock2_pane_g1

0x7840,	// (0x0008d7a6) aid_call2_pane_cp10

0x7852,	// (0x0008d7b8) aid_call_pane_cp10

0x3a58,	// (0x000899be) popup_clock_analogue_window_cp10_g1

0x3a58,	// (0x000899be) popup_clock_analogue_window_cp10_g2

0x7864,	// (0x0008d7ca) popup_clock_analogue_window_cp10_g3

0x7864,	// (0x0008d7ca) popup_clock_analogue_window_cp10_g4

0x3a58,	// (0x000899be) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x00095740) popup_clock_analogue_window_cp10_g

0x7876,	// (0x0008d7dc) popup_clock_analogue_window_cp10_t1

0x78a7,	// (0x0008d80d) clock_digital_number_pane_cp10_ParamLimits

0x78a7,	// (0x0008d80d) clock_digital_number_pane_cp10

0x78bf,	// (0x0008d825) clock_digital_number_pane_cp11_ParamLimits

0x78bf,	// (0x0008d825) clock_digital_number_pane_cp11

0x78d7,	// (0x0008d83d) clock_digital_number_pane_cp12_ParamLimits

0x78d7,	// (0x0008d83d) clock_digital_number_pane_cp12

0x78ef,	// (0x0008d855) clock_digital_number_pane_cp13_ParamLimits

0x78ef,	// (0x0008d855) clock_digital_number_pane_cp13

0x7907,	// (0x0008d86d) clock_digital_separator_pane_cp10_ParamLimits

0x7907,	// (0x0008d86d) clock_digital_separator_pane_cp10

0x791f,	// (0x0008d885) popup_clock_digital_window_cp02_t1_ParamLimits

0x791f,	// (0x0008d885) popup_clock_digital_window_cp02_t1

0xe6bf,	// (0x00094625) clock_digital_number_pane_cp10_g1

0xe6bf,	// (0x00094625) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0009575b) clock_digital_number_pane_cp10_g

0xe6bf,	// (0x00094625) clock_digital_separator_pane_cp10_g1

0xe6bf,	// (0x00094625) clock_digital_separator_pane_g2_cp10

0x3c88,	// (0x00089bee) navi_pane_vded_g4

0x3c91,	// (0x00089bf7) navi_pane_vded_g5

0x3c9a,	// (0x00089c00) navi_pane_vded_t1

0xe04f,	// (0x00093fb5) main_vded_pane

0x7a4d,	// (0x0008d9b3) main_vded_pane_g1

0x7a57,	// (0x0008d9bd) main_vded_pane_g2

0x7a61,	// (0x0008d9c7) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x00095760) main_vded_pane_g

0x7a6b,	// (0x0008d9d1) main_vded_pane_t1

0x7a79,	// (0x0008d9df) main_vded_pane_t2

0x0001,

0xf801,	// (0x00095767) main_vded_pane_t

0x7a87,	// (0x0008d9ed) vded_slider_pane

0x7a91,	// (0x0008d9f7) vded_video_pane

0xbdaa,	// (0x00091d10) vded_video_pane_g1

0x7a9b,	// (0x0008da01) vded_video_pane_g2

0xb794,	// (0x000916fa) vded_video_pane_g3

0x0002,

0xf806,	// (0x0009576c) vded_video_pane_g

0xbdb4,	// (0x00091d1a) vded_slider_pane_g1

0xbdbd,	// (0x00091d23) vded_slider_pane_g2

0xbdc6,	// (0x00091d2c) vded_slider_pane_g3

0xbdcf,	// (0x00091d35) vded_slider_pane_g4

0xbdd8,	// (0x00091d3e) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x00095773) vded_slider_pane_g

0x746c,	// (0x0008d3d2) mup3_rocker_pane_ParamLimits

0x746c,	// (0x0008d3d2) mup3_rocker_pane

0x7aa4,	// (0x0008da0a) mup3_control_keys_pane_g1

0x7aac,	// (0x0008da12) mup3_control_keys_pane_g2

0x7ab4,	// (0x0008da1a) mup3_control_keys_pane_g3

0x7abc,	// (0x0008da22) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0009577e) mup3_control_keys_pane_g

0x11d7,	// (0x0008713d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x11d7,	// (0x0008713d) popup_toolbar2_fixed_window_cp01

0x74a0,	// (0x0008d406) popup_toolbar2_fixed_window_cp02_ParamLimits

0x74a0,	// (0x0008d406) popup_toolbar2_fixed_window_cp02

0x4edb,	// (0x0008ae41) popup_call2_audio_second_window_t4_ParamLimits

0x4edb,	// (0x0008ae41) popup_call2_audio_second_window_t4

0x5409,	// (0x0008b36f) popup_call2_audio_first_window_t6_ParamLimits

0x5409,	// (0x0008b36f) popup_call2_audio_first_window_t6

0x569f,	// (0x0008b605) popup_call2_audio_out_window_t6_ParamLimits

0x569f,	// (0x0008b605) popup_call2_audio_out_window_t6

0xe04f,	// (0x00093fb5) main_vitu_pane

0x7acc,	// (0x0008da32) aid_size_cell_itu_ParamLimits

0x7acc,	// (0x0008da32) aid_size_cell_itu

0xecd3,	// (0x00094c39) bg_popup_window_pane_cp08_ParamLimits

0xecd3,	// (0x00094c39) bg_popup_window_pane_cp08

0x7ae2,	// (0x0008da48) field_vitu_entry_pane_ParamLimits

0x7ae2,	// (0x0008da48) field_vitu_entry_pane

0x7af9,	// (0x0008da5f) grid_vitu_function_pane_ParamLimits

0x7af9,	// (0x0008da5f) grid_vitu_function_pane

0x7b14,	// (0x0008da7a) grid_vitu_itu_pane_ParamLimits

0x7b14,	// (0x0008da7a) grid_vitu_itu_pane

0x7b32,	// (0x0008da98) cell_vitu_itu_pane_ParamLimits

0x7b32,	// (0x0008da98) cell_vitu_itu_pane

0x7b56,	// (0x0008dabc) cell_vitu_function_pane_ParamLimits

0x7b56,	// (0x0008dabc) cell_vitu_function_pane

0xecd3,	// (0x00094c39) bg_popup_sub_pane_cp08_ParamLimits

0xecd3,	// (0x00094c39) bg_popup_sub_pane_cp08

0x7b71,	// (0x0008dad7) field_vitu_entry_pane_t1_ParamLimits

0x7b71,	// (0x0008dad7) field_vitu_entry_pane_t1

0xbdf9,	// (0x00091d5f) field_vitu_entry_pane_t2_ParamLimits

0xbdf9,	// (0x00091d5f) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0009578c) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0009578c) field_vitu_entry_pane_t

0xbe16,	// (0x00091d7c) bg_button_pane_cp05_ParamLimits

0xbe16,	// (0x00091d7c) bg_button_pane_cp05

0x7b90,	// (0x0008daf6) cell_vitu_itu_pane_g1

0x7ba8,	// (0x0008db0e) cell_vitu_itu_pane_t1_ParamLimits

0x7ba8,	// (0x0008db0e) cell_vitu_itu_pane_t1

0x7bba,	// (0x0008db20) cell_vitu_itu_pane_t2_ParamLimits

0x7bba,	// (0x0008db20) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x00095791) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x00095791) cell_vitu_itu_pane_t

0xbe24,	// (0x00091d8a) bg_button_pane_cp07

0x7bfd,	// (0x0008db63) cell_vitu_function_pane_g1

0xb201,	// (0x00091167) main_calc_pane_g1

0x0ffe,	// (0x00086f64) aid_visual_content_pane

0xe04f,	// (0x00093fb5) main_vradio_pane

0x7c06,	// (0x0008db6c) main_vradio_pane_g1_ParamLimits

0x7c06,	// (0x0008db6c) main_vradio_pane_g1

0xbe2e,	// (0x00091d94) main_vradio_pane_g2_ParamLimits

0xbe2e,	// (0x00091d94) main_vradio_pane_g2

0x0001,

0xf832,	// (0x00095798) main_vradio_pane_g_ParamLimits

0xf832,	// (0x00095798) main_vradio_pane_g

0x7c1f,	// (0x0008db85) main_vradio_pane_t1_ParamLimits

0x7c1f,	// (0x0008db85) main_vradio_pane_t1

0x7c34,	// (0x0008db9a) main_vradio_pane_t2_ParamLimits

0x7c34,	// (0x0008db9a) main_vradio_pane_t2

0xbe3b,	// (0x00091da1) main_vradio_pane_t3_ParamLimits

0xbe3b,	// (0x00091da1) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0009579d) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0009579d) main_vradio_pane_t

0x7c49,	// (0x0008dbaf) vradio_rocker_control_pane_ParamLimits

0x7c49,	// (0x0008dbaf) vradio_rocker_control_pane

0x7c5b,	// (0x0008dbc1) vradio_station_info_pane_ParamLimits

0x7c5b,	// (0x0008dbc1) vradio_station_info_pane

0xbe4f,	// (0x00091db5) vradio_frequency_info_pane_ParamLimits

0xbe4f,	// (0x00091db5) vradio_frequency_info_pane

0xb794,	// (0x000916fa) vradio_station_info_pane_g1

0xbe5e,	// (0x00091dc4) vradio_station_info_pane_t1_ParamLimits

0xbe5e,	// (0x00091dc4) vradio_station_info_pane_t1

0xbe80,	// (0x00091de6) vradio_station_info_pane_t2_ParamLimits

0xbe80,	// (0x00091de6) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x000957a4) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x000957a4) vradio_station_info_pane_t

0xbe92,	// (0x00091df8) vradio_tuning_pane

0xbe9a,	// (0x00091e00) vradio_rocker_control_pane_g1

0xbea2,	// (0x00091e08) vradio_rocker_control_pane_g2

0xbeaa,	// (0x00091e10) vradio_rocker_control_pane_g3

0xbeb2,	// (0x00091e18) vradio_rocker_control_pane_g4

0xbeba,	// (0x00091e20) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x000957a9) vradio_rocker_control_pane_g

0x7c6d,	// (0x0008dbd3) vradio_frequency_info_pane_g1

0xbec2,	// (0x00091e28) vradio_frequency_info_pane_t1_ParamLimits

0xbec2,	// (0x00091e28) vradio_frequency_info_pane_t1

0x7c77,	// (0x0008dbdd) vradio_tuning_pane_g1

0x7c82,	// (0x0008dbe8) vradio_tuning_pane_t1

0xb1bf,	// (0x00091125) area_side_right_pane_ParamLimits

0xb1bf,	// (0x00091125) area_side_right_pane

0x5e1b,	// (0x0008bd81) status_small_pane_g1

0x5e23,	// (0x0008bd89) status_small_pane_g2

0x5e2c,	// (0x0008bd92) status_small_pane_g3

0x5e35,	// (0x0008bd9b) status_small_pane_g4

0x0003,

0xf603,	// (0x00095569) status_small_pane_g

0x5e3e,	// (0x0008bda4) status_small_pane_t1

0xe04f,	// (0x00093fb5) main_video3_pane

0xbed6,	// (0x00091e3c) cams_zoom_vslider_pane

0xbede,	// (0x00091e44) image3_wide_pane_ParamLimits

0xbede,	// (0x00091e44) image3_wide_pane

0xbef8,	// (0x00091e5e) image3_wide_small_pane

0xbf04,	// (0x00091e6a) main_video3_pane_g1_ParamLimits

0xbf04,	// (0x00091e6a) main_video3_pane_g1

0xbf20,	// (0x00091e86) main_video3_pane_g2_ParamLimits

0xbf20,	// (0x00091e86) main_video3_pane_g2

0x0001,

0xf84e,	// (0x000957b4) main_video3_pane_g_ParamLimits

0xf84e,	// (0x000957b4) main_video3_pane_g

0xbf3c,	// (0x00091ea2) main_video3_pane_t1_ParamLimits

0xbf3c,	// (0x00091ea2) main_video3_pane_t1

0xbf67,	// (0x00091ecd) main_video3_pane_t2_ParamLimits

0xbf67,	// (0x00091ecd) main_video3_pane_t2

0xbf92,	// (0x00091ef8) main_video3_pane_t3_ParamLimits

0xbf92,	// (0x00091ef8) main_video3_pane_t3

0x0002,

0xf853,	// (0x000957b9) main_video3_pane_t_ParamLimits

0xf853,	// (0x000957b9) main_video3_pane_t

0xbfbf,	// (0x00091f25) cams_zoom_vslider_pane_g1

0xbfc8,	// (0x00091f2e) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x000957c0) cams_zoom_vslider_pane_g

0xbfd0,	// (0x00091f36) small_slider_vertical_pane

0xb794,	// (0x000916fa) small_slider_vertical_pane_g1

0xb794,	// (0x000916fa) small_slider_vertical_pane_g2

0xbfd8,	// (0x00091f3e) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x000957c5) small_slider_vertical_pane_g

0xe04f,	// (0x00093fb5) main_hwr_training_pane

0xbfe1,	// (0x00091f47) hwr_training_instruct_pane_ParamLimits

0xbfe1,	// (0x00091f47) hwr_training_instruct_pane

0x7c91,	// (0x0008dbf7) hwr_training_navi_pane_ParamLimits

0x7c91,	// (0x0008dbf7) hwr_training_navi_pane

0x7cb0,	// (0x0008dc16) hwr_training_write_pane_ParamLimits

0x7cb0,	// (0x0008dc16) hwr_training_write_pane

0xe04f,	// (0x00093fb5) bg_frame_shadow_pane

0xc018,	// (0x00091f7e) hwr_training_write_pane_g1

0xc020,	// (0x00091f86) hwr_training_write_pane_g2

0xc028,	// (0x00091f8e) hwr_training_write_pane_g3

0xc030,	// (0x00091f96) hwr_training_write_pane_g4

0xc038,	// (0x00091f9e) hwr_training_write_pane_g5

0xc040,	// (0x00091fa6) hwr_training_write_pane_g6

0xc048,	// (0x00091fae) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x000957cc) hwr_training_write_pane_g

0xc050,	// (0x00091fb6) hwr_training_navi_pane_g1_ParamLimits

0xc050,	// (0x00091fb6) hwr_training_navi_pane_g1

0xc062,	// (0x00091fc8) hwr_training_navi_pane_g2_ParamLimits

0xc062,	// (0x00091fc8) hwr_training_navi_pane_g2

0xc074,	// (0x00091fda) hwr_training_navi_pane_g3_ParamLimits

0xc074,	// (0x00091fda) hwr_training_navi_pane_g3

0xc084,	// (0x00091fea) hwr_training_navi_pane_g4_ParamLimits

0xc084,	// (0x00091fea) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x000957db) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x000957db) hwr_training_navi_pane_g

0xc091,	// (0x00091ff7) hwr_training_navi_pane_t1

0x7cfa,	// (0x0008dc60) list_single_hwr_training_instruct_pane_ParamLimits

0x7cfa,	// (0x0008dc60) list_single_hwr_training_instruct_pane

0xc09f,	// (0x00092005) list_single_hwr_training_instruct_pane_t1

0xb6d4,	// (0x0009163a) bg_frame_shadow_pane_g1

0xc0ae,	// (0x00092014) bg_frame_shadow_pane_g2

0xc0b6,	// (0x0009201c) bg_frame_shadow_pane_g3

0xc0be,	// (0x00092024) bg_frame_shadow_pane_g4

0xc0c6,	// (0x0009202c) bg_frame_shadow_pane_g5

0xc0ce,	// (0x00092034) bg_frame_shadow_pane_g6

0xc0d6,	// (0x0009203c) bg_frame_shadow_pane_g7

0xedac,	// (0x00094d12) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x000957e6) bg_frame_shadow_pane_g

0xe04f,	// (0x00093fb5) main_video_tele_dialer_pane

0x7d11,	// (0x0008dc77) aid_size_cell_video_keypad_ParamLimits

0x7d11,	// (0x0008dc77) aid_size_cell_video_keypad

0x7d2b,	// (0x0008dc91) grid_video_dialer_keypad_pane_ParamLimits

0x7d2b,	// (0x0008dc91) grid_video_dialer_keypad_pane

0x7d79,	// (0x0008dcdf) video_down_pane_cp_ParamLimits

0x7d79,	// (0x0008dcdf) video_down_pane_cp

0x7dab,	// (0x0008dd11) cell_video_dialer_keypad_pane_ParamLimits

0x7dab,	// (0x0008dd11) cell_video_dialer_keypad_pane

0xc0de,	// (0x00092044) bg_button_pane_cp08_ParamLimits

0xc0de,	// (0x00092044) bg_button_pane_cp08

0x7dcd,	// (0x0008dd33) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7dcd,	// (0x0008dd33) cell_video_dialer_keypad_pane_g1

0x7456,	// (0x0008d3bc) mup3_rocker2_pane_ParamLimits

0x7456,	// (0x0008d3bc) mup3_rocker2_pane

0xb794,	// (0x000916fa) mup3_rocker2_pane_g1

0x5e8c,	// (0x0008bdf2) main_dialer2_pane

0xe04f,	// (0x00093fb5) main_mp4_pane

0xc0f2,	// (0x00092058) main_mp4_pane_g1_ParamLimits

0xc0f2,	// (0x00092058) main_mp4_pane_g1

0xc0f2,	// (0x00092058) main_mp4_pane_g2_ParamLimits

0xc0f2,	// (0x00092058) main_mp4_pane_g2

0x7e08,	// (0x0008dd6e) main_mp4_pane_g3_ParamLimits

0x7e08,	// (0x0008dd6e) main_mp4_pane_g3

0xc100,	// (0x00092066) main_mp4_pane_g4_ParamLimits

0xc100,	// (0x00092066) main_mp4_pane_g4

0xc128,	// (0x0009208e) main_mp4_pane_g5_ParamLimits

0xc128,	// (0x0009208e) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x00095806) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x00095806) main_mp4_pane_g

0xc178,	// (0x000920de) main_mp4_pane_t1_ParamLimits

0xc178,	// (0x000920de) main_mp4_pane_t1

0xc1d4,	// (0x0009213a) main_mp4_pane_t2_ParamLimits

0xc1d4,	// (0x0009213a) main_mp4_pane_t2

0xc226,	// (0x0009218c) main_mp4_pane_t3_ParamLimits

0xc226,	// (0x0009218c) main_mp4_pane_t3

0xc246,	// (0x000921ac) main_mp4_pane_t4_ParamLimits

0xc246,	// (0x000921ac) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x00095813) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x00095813) main_mp4_pane_t

0xc28a,	// (0x000921f0) mp4_progress_pane_ParamLimits

0xc28a,	// (0x000921f0) mp4_progress_pane

0xc2d4,	// (0x0009223a) mp4_rocker_pane_ParamLimits

0xc2d4,	// (0x0009223a) mp4_rocker_pane

0xc2fc,	// (0x00092262) mp4_progress_pane_t1

0xc315,	// (0x0009227b) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0009581c) mp4_progress_pane_t

0xc32e,	// (0x00092294) mup_progress_pane_cp04

0xb794,	// (0x000916fa) mp4_rocker_pane_g1

0x7e44,	// (0x0008ddaa) aid_cell_size_keypad2_ParamLimits

0x7e44,	// (0x0008ddaa) aid_cell_size_keypad2

0x7e5a,	// (0x0008ddc0) dialer2_ne_pane_ParamLimits

0x7e5a,	// (0x0008ddc0) dialer2_ne_pane

0x7e74,	// (0x0008ddda) grid_dialer2_keypad_pane_ParamLimits

0x7e74,	// (0x0008ddda) grid_dialer2_keypad_pane

0xb577,	// (0x000914dd) bg_popup_call_pane_cp07_ParamLimits

0xb577,	// (0x000914dd) bg_popup_call_pane_cp07

0x7e92,	// (0x0008ddf8) dialer2_ne_pane_t1_ParamLimits

0x7e92,	// (0x0008ddf8) dialer2_ne_pane_t1

0x7ecf,	// (0x0008de35) cell_dialer2_keypad_pane_ParamLimits

0x7ecf,	// (0x0008de35) cell_dialer2_keypad_pane

0xc34c,	// (0x000922b2) bg_button_pane_pane_cp04_ParamLimits

0xc34c,	// (0x000922b2) bg_button_pane_pane_cp04

0x7ef1,	// (0x0008de57) cell_dialer2_keypad_pane_g1_ParamLimits

0x7ef1,	// (0x0008de57) cell_dialer2_keypad_pane_g1

0x20c5,	// (0x0008802b) aid_placing_vt_set_content_ParamLimits

0x20c5,	// (0x0008802b) aid_placing_vt_set_content

0x20ed,	// (0x00088053) aid_placing_vt_set_title_ParamLimits

0x20ed,	// (0x00088053) aid_placing_vt_set_title

0xe04f,	// (0x00093fb5) main_image3_pane

0x7fb7,	// (0x0008df1d) area_side_right_pane_cp01_ParamLimits

0x7fb7,	// (0x0008df1d) area_side_right_pane_cp01

0xc0f2,	// (0x00092058) main_image3_pane_g1_ParamLimits

0xc0f2,	// (0x00092058) main_image3_pane_g1

0x7fce,	// (0x0008df34) main_image3_pane_g2_ParamLimits

0x7fce,	// (0x0008df34) main_image3_pane_g2

0x7ff6,	// (0x0008df5c) main_image3_pane_g3_ParamLimits

0x7ff6,	// (0x0008df5c) main_image3_pane_g3

0x8020,	// (0x0008df86) main_image3_pane_g4_ParamLimits

0x8020,	// (0x0008df86) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0009582b) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0009582b) main_image3_pane_g

0x804a,	// (0x0008dfb0) main_image3_pane_t1_ParamLimits

0x804a,	// (0x0008dfb0) main_image3_pane_t1

0x80a2,	// (0x0008e008) main_image3_pane_t2_ParamLimits

0x80a2,	// (0x0008e008) main_image3_pane_t2

0x80f4,	// (0x0008e05a) main_image3_pane_t3_ParamLimits

0x80f4,	// (0x0008e05a) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x00095834) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x00095834) main_image3_pane_t

0xecd3,	// (0x00094c39) grid_sctrl_middle_pane_cp01_ParamLimits

0xecd3,	// (0x00094c39) grid_sctrl_middle_pane_cp01

0x817c,	// (0x0008e0e2) cell_sctrl_middle_pane_cp01_ParamLimits

0x817c,	// (0x0008e0e2) cell_sctrl_middle_pane_cp01

0x8199,	// (0x0008e0ff) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8199,	// (0x0008e0ff) cell_sctrl_middle_pane_cp01_g1

0xe04f,	// (0x00093fb5) main_call4_pane

0x81af,	// (0x0008e115) aid_size_button_call4_ParamLimits

0x81af,	// (0x0008e115) aid_size_button_call4

0x81e0,	// (0x0008e146) call4_windows_pane_ParamLimits

0x81e0,	// (0x0008e146) call4_windows_pane

0x8200,	// (0x0008e166) grid_call4_button_pane_ParamLimits

0x8200,	// (0x0008e166) grid_call4_button_pane

0xc38a,	// (0x000922f0) call4_windows_conf_pane

0xc39f,	// (0x00092305) popup_call4_audio_first_window_ParamLimits

0xc39f,	// (0x00092305) popup_call4_audio_first_window

0xc3eb,	// (0x00092351) popup_call4_audio_second_window_ParamLimits

0xc3eb,	// (0x00092351) popup_call4_audio_second_window

0xc3ff,	// (0x00092365) popup_call4_audio_wait_window_ParamLimits

0xc3ff,	// (0x00092365) popup_call4_audio_wait_window

0x822d,	// (0x0008e193) cell_call4_button_pane_ParamLimits

0x822d,	// (0x0008e193) cell_call4_button_pane

0x8256,	// (0x0008e1bc) bg_button_pane_cp09_ParamLimits

0x8256,	// (0x0008e1bc) bg_button_pane_cp09

0x8262,	// (0x0008e1c8) cell_call4_button_pane_g1_ParamLimits

0x8262,	// (0x0008e1c8) cell_call4_button_pane_g1

0x8288,	// (0x0008e1ee) cell_call4_button_pane_t1_ParamLimits

0x8288,	// (0x0008e1ee) cell_call4_button_pane_t1

0xc447,	// (0x000923ad) popup_call4_audio_conf_window_ParamLimits

0xc447,	// (0x000923ad) popup_call4_audio_conf_window

0x74b6,	// (0x0008d41c) mup3_progress_pane_t1_ParamLimits

0x74d5,	// (0x0008d43b) mup3_progress_pane_t2_ParamLimits

0xbae3,	// (0x00091a49) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0009570d) mup3_progress_pane_t_ParamLimits

0xbb00,	// (0x00091a66) mup_progress_pane_cp03_ParamLimits

0x7ac4,	// (0x0008da2a) mup3_control_keys_pane_g4_copy1

0xc2b8,	// (0x0009221e) mp4_rocker2_pane_ParamLimits

0xc2b8,	// (0x0009221e) mp4_rocker2_pane

0xc45b,	// (0x000923c1) mp4_rocker2_pane_g1

0xc463,	// (0x000923c9) mp4_rocker2_pane_g2

0xc46b,	// (0x000923d1) mp4_rocker2_pane_g3

0xc473,	// (0x000923d9) mp4_rocker2_pane_g4

0xc47b,	// (0x000923e1) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0009583d) mp4_rocker2_pane_g

0xe04f,	// (0x00093fb5) main_camera4_pane

0xe04f,	// (0x00093fb5) main_video4_pane

0x7d47,	// (0x0008dcad) main_video_tele_dialer_pane_t1_ParamLimits

0x7d47,	// (0x0008dcad) main_video_tele_dialer_pane_t1

0x7d60,	// (0x0008dcc6) main_video_tele_dialer_pane_t2_ParamLimits

0x7d60,	// (0x0008dcc6) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x000957f7) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x000957f7) main_video_tele_dialer_pane_t

0x82c6,	// (0x0008e22c) cam4_autofocus_pane_ParamLimits

0x82c6,	// (0x0008e22c) cam4_autofocus_pane

0x82dc,	// (0x0008e242) cam4_image_uncrop_pane_ParamLimits

0x82dc,	// (0x0008e242) cam4_image_uncrop_pane

0x82f6,	// (0x0008e25c) cam4_indicators_pane_ParamLimits

0x82f6,	// (0x0008e25c) cam4_indicators_pane

0x8321,	// (0x0008e287) main_camera4_pane_g1_ParamLimits

0x8321,	// (0x0008e287) main_camera4_pane_g1

0x8333,	// (0x0008e299) main_camera4_pane_g2_ParamLimits

0x8333,	// (0x0008e299) main_camera4_pane_g2

0x8346,	// (0x0008e2ac) main_camera4_pane_g3_ParamLimits

0x8346,	// (0x0008e2ac) main_camera4_pane_g3

0x8359,	// (0x0008e2bf) main_camera4_pane_g4_ParamLimits

0x8359,	// (0x0008e2bf) main_camera4_pane_g4

0x836c,	// (0x0008e2d2) main_camera4_pane_g5_ParamLimits

0x836c,	// (0x0008e2d2) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x00095848) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x00095848) main_camera4_pane_g

0x8390,	// (0x0008e2f6) main_camera4_pane_t1_ParamLimits

0x8390,	// (0x0008e2f6) main_camera4_pane_t1

0xb9f4,	// (0x0009195a) bg_tb_trans_pane_cp06

0xc4b9,	// (0x0009241f) cam4_indicators_pane_g1

0xc4ca,	// (0x00092430) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x00095863) cam4_indicators_pane_g

0xc4e8,	// (0x0009244e) cam4_indicators_pane_t1

0x83f4,	// (0x0008e35a) main_video4_pane_g1_ParamLimits

0x83f4,	// (0x0008e35a) main_video4_pane_g1

0x8403,	// (0x0008e369) main_video4_pane_g2_ParamLimits

0x8403,	// (0x0008e369) main_video4_pane_g2

0x8412,	// (0x0008e378) main_video4_pane_g3_ParamLimits

0x8412,	// (0x0008e378) main_video4_pane_g3

0x8421,	// (0x0008e387) main_video4_pane_g4_ParamLimits

0x8421,	// (0x0008e387) main_video4_pane_g4

0x0004,

0xf904,	// (0x0009586a) main_video4_pane_g_ParamLimits

0xf904,	// (0x0009586a) main_video4_pane_g

0x843f,	// (0x0008e3a5) vid4_indicators_pane_ParamLimits

0x843f,	// (0x0008e3a5) vid4_indicators_pane

0x846d,	// (0x0008e3d3) video4_image_uncrop_cif_pane_ParamLimits

0x846d,	// (0x0008e3d3) video4_image_uncrop_cif_pane

0x8487,	// (0x0008e3ed) video4_image_uncrop_nhd_pane_ParamLimits

0x8487,	// (0x0008e3ed) video4_image_uncrop_nhd_pane

0x82dc,	// (0x0008e242) video4_image_uncrop_vga_pane_ParamLimits

0x82dc,	// (0x0008e242) video4_image_uncrop_vga_pane

0xecd3,	// (0x00094c39) bg_tb_trans_pane_cp07

0xc512,	// (0x00092478) vid4_indicators_pane_g1

0xc526,	// (0x0009248c) vid4_indicators_pane_g2

0xc53a,	// (0x000924a0) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x00095875) vid4_indicators_pane_g

0xc567,	// (0x000924cd) vid4_indicators_pane_t1

0x849b,	// (0x0008e401) cam4_autofocus_pane_g1

0x84a3,	// (0x0008e409) cam4_autofocus_pane_g2

0x84ab,	// (0x0008e411) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x00095880) cam4_autofocus_pane_g

0x84b3,	// (0x0008e419) cam4_autofocus_pane_g3_copy1

0x7d8f,	// (0x0008dcf5) video_down_pane_cp_t1

0x7d9d,	// (0x0008dd03) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x000957fc) video_down_pane_cp_t

0xecd3,	// (0x00094c39) popup_vitu2_window_ParamLimits

0xecd3,	// (0x00094c39) popup_vitu2_window

0x84bb,	// (0x0008e421) aid_size_cell2_itu2_ParamLimits

0x84bb,	// (0x0008e421) aid_size_cell2_itu2

0x84e1,	// (0x0008e447) aid_size_cell_itu2_ParamLimits

0x84e1,	// (0x0008e447) aid_size_cell_itu2

0x853d,	// (0x0008e4a3) bg_popup_window_pane_cp09_ParamLimits

0x853d,	// (0x0008e4a3) bg_popup_window_pane_cp09

0x854b,	// (0x0008e4b1) field_vitu2_entry_pane_ParamLimits

0x854b,	// (0x0008e4b1) field_vitu2_entry_pane

0x8571,	// (0x0008e4d7) grid_vitu2_function_pane_ParamLimits

0x8571,	// (0x0008e4d7) grid_vitu2_function_pane

0x85c2,	// (0x0008e528) grid_vitu2_itu_pane_ParamLimits

0x85c2,	// (0x0008e528) grid_vitu2_itu_pane

0x8653,	// (0x0008e5b9) cell_vitu2_itu_pane_ParamLimits

0x8653,	// (0x0008e5b9) cell_vitu2_itu_pane

0x8677,	// (0x0008e5dd) cell_vitu2_function_pane_ParamLimits

0x8677,	// (0x0008e5dd) cell_vitu2_function_pane

0xc57e,	// (0x000924e4) bg_popup_call_pane_cp08_ParamLimits

0xc57e,	// (0x000924e4) bg_popup_call_pane_cp08

0xc597,	// (0x000924fd) field_vitu2_entry_pane_g1

0xc5a3,	// (0x00092509) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x00095887) field_vitu2_entry_pane_g

0x04f2,	// (0x00086458) field_vitu2_entry_pane_t1_ParamLimits

0x04f2,	// (0x00086458) field_vitu2_entry_pane_t1

0xc5bd,	// (0x00092523) field_vitu2_entry_pane_t2_ParamLimits

0xc5bd,	// (0x00092523) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0009588e) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0009588e) field_vitu2_entry_pane_t

0x86b6,	// (0x0008e61c) bg_button_pane_cp010_ParamLimits

0x86b6,	// (0x0008e61c) bg_button_pane_cp010

0x86c4,	// (0x0008e62a) cell_vitu2_itu_pane_g1

0x86e2,	// (0x0008e648) cell_vitu2_itu_pane_t1_ParamLimits

0x86e2,	// (0x0008e648) cell_vitu2_itu_pane_t1

0x0521,	// (0x00086487) cell_vitu2_itu_pane_t2_ParamLimits

0x0521,	// (0x00086487) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x00095898) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x00095898) cell_vitu2_itu_pane_t

0xecd3,	// (0x00094c39) bg_button_pane_cp011

0x8748,	// (0x0008e6ae) cell_vitu2_function_pane_g1

0xe04f,	// (0x00093fb5) main_myfav_hc_pane

0x8144,	// (0x0008e0aa) popup_image3_note_pane_ParamLimits

0x8144,	// (0x0008e0aa) popup_image3_note_pane

0x8160,	// (0x0008e0c6) popup_image3_tool_bar_pane_ParamLimits

0x8160,	// (0x0008e0c6) popup_image3_tool_bar_pane

0x05a5,	// (0x0008650b) cell_vitu2_itu_pane_t3_ParamLimits

0x05a5,	// (0x0008650b) cell_vitu2_itu_pane_t3

0xe04f,	// (0x00093fb5) bg_popup_trans_pane

0xc5e2,	// (0x00092548) grid_image3_tool_bar_pane

0xc5ec,	// (0x00092552) bg_popup_trans_pane_g1

0x253a,	// (0x000884a0) bg_popup_trans_pane_g2

0xc5f4,	// (0x0009255a) bg_popup_trans_pane_g3

0xc5fc,	// (0x00092562) bg_popup_trans_pane_g4

0xc604,	// (0x0009256a) bg_popup_trans_pane_g5

0xc60c,	// (0x00092572) bg_popup_trans_pane_g6

0xc614,	// (0x0009257a) bg_popup_trans_pane_g7

0xc61c,	// (0x00092582) bg_popup_trans_pane_g8

0x251a,	// (0x00088480) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0009589f) bg_popup_trans_pane_g

0xc624,	// (0x0009258a) cell_image3_tool_bar_pane_ParamLimits

0xc624,	// (0x0009258a) cell_image3_tool_bar_pane

0xb794,	// (0x000916fa) cell_image3_tool_bar_pane_g1

0xe04f,	// (0x00093fb5) bg_popup_trans_pane_cp1

0xc638,	// (0x0009259e) popup_image3_note_pane_t1

0xc646,	// (0x000925ac) popup_image3_note_pane_t2

0xc654,	// (0x000925ba) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x000958b2) popup_image3_note_pane_t

0xc662,	// (0x000925c8) popup_image3_note_pane_t3_copy1

0x875c,	// (0x0008e6c2) bg_myfav_hc_instruction_pane_ParamLimits

0x875c,	// (0x0008e6c2) bg_myfav_hc_instruction_pane

0x8772,	// (0x0008e6d8) cell_myfav_contact_pane_ParamLimits

0x8772,	// (0x0008e6d8) cell_myfav_contact_pane

0x8790,	// (0x0008e6f6) cell_myfav_contact_pane_cp1_ParamLimits

0x8790,	// (0x0008e6f6) cell_myfav_contact_pane_cp1

0x87a8,	// (0x0008e70e) cell_myfav_contact_pane_cp2_ParamLimits

0x87a8,	// (0x0008e70e) cell_myfav_contact_pane_cp2

0x87c0,	// (0x0008e726) cell_myfav_contact_pane_cp3_ParamLimits

0x87c0,	// (0x0008e726) cell_myfav_contact_pane_cp3

0x87d7,	// (0x0008e73d) cell_myfav_contact_pane_cp4_ParamLimits

0x87d7,	// (0x0008e73d) cell_myfav_contact_pane_cp4

0x87ef,	// (0x0008e755) cell_myfav_contact_pane_cp5_ParamLimits

0x87ef,	// (0x0008e755) cell_myfav_contact_pane_cp5

0x8803,	// (0x0008e769) cell_myfav_contact_pane_cp6_ParamLimits

0x8803,	// (0x0008e769) cell_myfav_contact_pane_cp6

0x8819,	// (0x0008e77f) cell_myfav_contact_pane_cp7_ParamLimits

0x8819,	// (0x0008e77f) cell_myfav_contact_pane_cp7

0xc670,	// (0x000925d6) listscroll_gen_pane_cp05

0x8833,	// (0x0008e799) main_myfav_hc_pane_g1_ParamLimits

0x8833,	// (0x0008e799) main_myfav_hc_pane_g1

0x884d,	// (0x0008e7b3) main_myfav_hc_pane_g2_ParamLimits

0x884d,	// (0x0008e7b3) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x000958b9) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x000958b9) main_myfav_hc_pane_g

0x887f,	// (0x0008e7e5) main_myfav_hc_pane_t1_ParamLimits

0x887f,	// (0x0008e7e5) main_myfav_hc_pane_t1

0xc679,	// (0x000925df) main_myfav_hc_pane_t2_ParamLimits

0xc679,	// (0x000925df) main_myfav_hc_pane_t2

0xc68b,	// (0x000925f1) main_myfav_hc_pane_t3_ParamLimits

0xc68b,	// (0x000925f1) main_myfav_hc_pane_t3

0x8896,	// (0x0008e7fc) main_myfav_hc_pane_t4_ParamLimits

0x8896,	// (0x0008e7fc) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x000958c0) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x000958c0) main_myfav_hc_pane_t

0xb794,	// (0x000916fa) bg_myfav_hc_instruction_pane_g1

0xc69d,	// (0x00092603) cell_myfav_contact_pane_g1_ParamLimits

0xc69d,	// (0x00092603) cell_myfav_contact_pane_g1

0xc69d,	// (0x00092603) cell_myfav_contact_pane_g2_ParamLimits

0xc69d,	// (0x00092603) cell_myfav_contact_pane_g2

0xc6a9,	// (0x0009260f) cell_myfav_contact_pane_g3_ParamLimits

0xc6a9,	// (0x0009260f) cell_myfav_contact_pane_g3

0xbacd,	// (0x00091a33) cell_myfav_contact_pane_g4_ParamLimits

0xbacd,	// (0x00091a33) cell_myfav_contact_pane_g4

0xc6b6,	// (0x0009261c) cell_myfav_contact_pane_g5_ParamLimits

0xc6b6,	// (0x0009261c) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x000958cb) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x000958cb) cell_myfav_contact_pane_g

0x8867,	// (0x0008e7cd) main_myfav_hc_pane_g3_ParamLimits

0x8867,	// (0x0008e7cd) main_myfav_hc_pane_g3

0x1139,	// (0x0008709f) popup_adpt_find_window

0x88be,	// (0x0008e824) afind_page_pane_ParamLimits

0x88be,	// (0x0008e824) afind_page_pane

0x88d3,	// (0x0008e839) aid_size_cell_afind_ParamLimits

0x88d3,	// (0x0008e839) aid_size_cell_afind

0x88f1,	// (0x0008e857) bg_popup_sub_pane_cp09_ParamLimits

0x88f1,	// (0x0008e857) bg_popup_sub_pane_cp09

0x88fe,	// (0x0008e864) find_pane_cp01_ParamLimits

0x88fe,	// (0x0008e864) find_pane_cp01

0xc6c2,	// (0x00092628) grid_afind_control_pane_ParamLimits

0xc6c2,	// (0x00092628) grid_afind_control_pane

0x890b,	// (0x0008e871) grid_afind_pane_ParamLimits

0x890b,	// (0x0008e871) grid_afind_pane

0x892a,	// (0x0008e890) cell_afind_pane_ParamLimits

0x892a,	// (0x0008e890) cell_afind_pane

0xb794,	// (0x000916fa) afind_page_pane_g1

0x898b,	// (0x0008e8f1) afind_page_pane_g2

0x8994,	// (0x0008e8fa) afind_page_pane_g3

0x0002,

0xf970,	// (0x000958d6) afind_page_pane_g

0x899d,	// (0x0008e903) afind_page_pane_t1

0xc6d6,	// (0x0009263c) cell_afind_grid_control_pane_ParamLimits

0xc6d6,	// (0x0009263c) cell_afind_grid_control_pane

0xc34c,	// (0x000922b2) bg_button_pane_cp69_ParamLimits

0xc34c,	// (0x000922b2) bg_button_pane_cp69

0x89bd,	// (0x0008e923) cell_afind_pane_g1_ParamLimits

0x89bd,	// (0x0008e923) cell_afind_pane_g1

0x89ca,	// (0x0008e930) cell_afind_pane_t1_ParamLimits

0x89ca,	// (0x0008e930) cell_afind_pane_t1

0xef04,	// (0x00094e6a) bg_button_pane_cp72

0xc6e5,	// (0x0009264b) cell_afind_grid_control_pane_g1

0x4987,	// (0x0008a8ed) aid_image_placing_area_ParamLimits

0x4987,	// (0x0008a8ed) aid_image_placing_area

0xbde1,	// (0x00091d47) field_vitu_entry_pane_g1_ParamLimits

0xbde1,	// (0x00091d47) field_vitu_entry_pane_g1

0xbded,	// (0x00091d53) field_vitu_entry_pane_g2_ParamLimits

0xbded,	// (0x00091d53) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x00095787) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x00095787) field_vitu_entry_pane_g

0x7b90,	// (0x0008daf6) cell_vitu_itu_pane_g1_ParamLimits

0x7be0,	// (0x0008db46) cell_vitu_itu_pane_t3_ParamLimits

0x7be0,	// (0x0008db46) cell_vitu_itu_pane_t3

0xc2fc,	// (0x00092262) mp4_progress_pane_t1_ParamLimits

0xc315,	// (0x0009227b) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0009581c) mp4_progress_pane_t_ParamLimits

0xc32e,	// (0x00092294) mup_progress_pane_cp04_ParamLimits

0x88aa,	// (0x0008e810) main_myfav_hc_pane_t5_ParamLimits

0x88aa,	// (0x0008e810) main_myfav_hc_pane_t5

0xb1af,	// (0x00091115) aid_zoom_text_primary

0x1139,	// (0x0008709f) popup_adpt_find_window_ParamLimits

0xecd3,	// (0x00094c39) main_cam_set_pane

0x830d,	// (0x0008e273) cam4_zoom_pane_ParamLimits

0x830d,	// (0x0008e273) cam4_zoom_pane

0x89dc,	// (0x0008e942) main_cam_set_pane_g1_ParamLimits

0x89dc,	// (0x0008e942) main_cam_set_pane_g1

0x89ea,	// (0x0008e950) main_cam_set_pane_g2_ParamLimits

0x89ea,	// (0x0008e950) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x000958dd) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x000958dd) main_cam_set_pane_g

0x8a0b,	// (0x0008e971) main_cam_set_pane_t1_ParamLimits

0x8a0b,	// (0x0008e971) main_cam_set_pane_t1

0x8a26,	// (0x0008e98c) main_cset_listscroll_pane_ParamLimits

0x8a26,	// (0x0008e98c) main_cset_listscroll_pane

0x8a46,	// (0x0008e9ac) main_cset_slider_pane_ParamLimits

0x8a46,	// (0x0008e9ac) main_cset_slider_pane

0xc6f6,	// (0x0009265c) main_cset_list_pane_ParamLimits

0xc6f6,	// (0x0009265c) main_cset_list_pane

0xc706,	// (0x0009266c) scroll_pane_cp028

0x8a6c,	// (0x0008e9d2) aid_area_touch_slider

0x8a88,	// (0x0008e9ee) cset_slider_pane

0x8ab2,	// (0x0008ea18) main_cset_slider_pane_g1

0x8ac7,	// (0x0008ea2d) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x000958e2) main_cset_slider_pane_g

0xc73f,	// (0x000926a5) main_cset_slider_pane_t1

0x8b83,	// (0x0008eae9) main_cset_slider_pane_t2

0x8b9d,	// (0x0008eb03) main_cset_slider_pane_t3

0x8bb7,	// (0x0008eb1d) main_cset_slider_pane_t4

0x8bd1,	// (0x0008eb37) main_cset_slider_pane_t5

0x8beb,	// (0x0008eb51) main_cset_slider_pane_t6

0x8c00,	// (0x0008eb66) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x00095907) main_cset_slider_pane_t

0x8d04,	// (0x0008ec6a) cset_list_set_pane_ParamLimits

0x8d04,	// (0x0008ec6a) cset_list_set_pane

0x8d17,	// (0x0008ec7d) aid_position_infowindow_above

0x8d1f,	// (0x0008ec85) aid_position_infowindow_below

0x8d27,	// (0x0008ec8d) cset_list_set_pane_g1_ParamLimits

0x8d27,	// (0x0008ec8d) cset_list_set_pane_g1

0xc7df,	// (0x00092745) cset_list_set_pane_g3_ParamLimits

0xc7df,	// (0x00092745) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x00095926) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x00095926) cset_list_set_pane_g

0xc7ee,	// (0x00092754) cset_list_set_pane_t1_ParamLimits

0xc7ee,	// (0x00092754) cset_list_set_pane_t1

0xecd3,	// (0x00094c39) list_highlight_pane_cp021_ParamLimits

0xecd3,	// (0x00094c39) list_highlight_pane_cp021

0x4202,	// (0x0008a168) cset_slider_pane_g1

0x4214,	// (0x0008a17a) cset_slider_pane_g2

0x420b,	// (0x0008a171) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0009592b) cset_slider_pane_g

0xc803,	// (0x00092769) aid_area_touch_cam4_zoom

0xc80b,	// (0x00092771) cam4_zoom_cont_pane

0xc813,	// (0x00092779) cam4_zoom_pane_g1

0xc81b,	// (0x00092781) cam4_zoom_pane_g2

0x8d33,	// (0x0008ec99) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x00095932) cam4_zoom_pane_g

0xc823,	// (0x00092789) cam4_zoom_cont_pane_g1

0xc82c,	// (0x00092792) cam4_zoom_cont_pane_g2

0xc835,	// (0x0009279b) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x00095939) cam4_zoom_cont_pane_g

0x81cd,	// (0x0008e133) call4_image_pane_ParamLimits

0x81cd,	// (0x0008e133) call4_image_pane

0xc38a,	// (0x000922f0) call4_windows_conf_pane_ParamLimits

0xc3c9,	// (0x0009232f) popup_call4_audio_in_window_ParamLimits

0xc3c9,	// (0x0009232f) popup_call4_audio_in_window

0xe04f,	// (0x00093fb5) bg_popup_call2_act_pane_cp02

0xc43f,	// (0x000923a5) call4_list_conf_pane

0xb794,	// (0x000916fa) call4_image_pane_g1

0xb794,	// (0x000916fa) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0009564d) call4_image_pane_g

0xc83e,	// (0x000927a4) list_single_graphic_popup_conf4_pane_ParamLimits

0xc83e,	// (0x000927a4) list_single_graphic_popup_conf4_pane

0xe04f,	// (0x00093fb5) list_highlight_pane_cp022

0xc851,	// (0x000927b7) list_single_graphic_popup_conf4_pane_g1

0x3775,	// (0x000896db) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x00095940) list_single_graphic_popup_conf4_pane_g

0xc859,	// (0x000927bf) list_single_graphic_popup_conf4_pane_t1

0x2211,	// (0x00088177) popup_vtel_slider_window_ParamLimits

0x2211,	// (0x00088177) popup_vtel_slider_window

0xc33a,	// (0x000922a0) dialer2_ne_pane_t2_ParamLimits

0xc33a,	// (0x000922a0) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x00095821) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x00095821) dialer2_ne_pane_t

0xb577,	// (0x000914dd) bg_popup_sub_pane_cp010_ParamLimits

0xb577,	// (0x000914dd) bg_popup_sub_pane_cp010

0x8d3b,	// (0x0008eca1) popup_vtel_slider_window_g1_ParamLimits

0x8d3b,	// (0x0008eca1) popup_vtel_slider_window_g1

0x8d4e,	// (0x0008ecb4) popup_vtel_slider_window_g2_ParamLimits

0x8d4e,	// (0x0008ecb4) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x00095945) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x00095945) popup_vtel_slider_window_g

0x8da4,	// (0x0008ed0a) vtel_slider_pane_ParamLimits

0x8da4,	// (0x0008ed0a) vtel_slider_pane

0x8dc6,	// (0x0008ed2c) vtel_slider_pane_g1_ParamLimits

0x8dc6,	// (0x0008ed2c) vtel_slider_pane_g1

0x8dda,	// (0x0008ed40) vtel_slider_pane_g2_ParamLimits

0x8dda,	// (0x0008ed40) vtel_slider_pane_g2

0x8df2,	// (0x0008ed58) vtel_slider_pane_g3_ParamLimits

0x8df2,	// (0x0008ed58) vtel_slider_pane_g3

0x8dc6,	// (0x0008ed2c) vtel_slider_pane_g4_ParamLimits

0x8dc6,	// (0x0008ed2c) vtel_slider_pane_g4

0x8e08,	// (0x0008ed6e) vtel_slider_pane_g5_ParamLimits

0x8e08,	// (0x0008ed6e) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0009594e) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0009594e) vtel_slider_pane_g

0xe04f,	// (0x00093fb5) main_gallery2_pane

0x850d,	// (0x0008e473) aid_size_row_itut2_dropdow_list_ParamLimits

0x850d,	// (0x0008e473) aid_size_row_itut2_dropdow_list

0x8599,	// (0x0008e4ff) grid_vitu2_function_top_pane_ParamLimits

0x8599,	// (0x0008e4ff) grid_vitu2_function_top_pane

0x85fe,	// (0x0008e564) popup_vitu2_dropdown_list_window_ParamLimits

0x85fe,	// (0x0008e564) popup_vitu2_dropdown_list_window

0x8627,	// (0x0008e58d) popup_vitu2_match_list_window

0x8e1e,	// (0x0008ed84) cell_vitu2_function_top_pane_ParamLimits

0x8e1e,	// (0x0008ed84) cell_vitu2_function_top_pane

0x8e3c,	// (0x0008eda2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8e3c,	// (0x0008eda2) cell_vitu2_function_top_pane_cp01

0x8e5a,	// (0x0008edc0) cell_vitu2_function_top_wide_pane_ParamLimits

0x8e5a,	// (0x0008edc0) cell_vitu2_function_top_wide_pane

0xecd3,	// (0x00094c39) bg_button_pane_cp012

0x8e78,	// (0x0008edde) cell_vitu2_function_top_pane_g1

0xe7ab,	// (0x00094711) bg_button_pane_cp013_ParamLimits

0xe7ab,	// (0x00094711) bg_button_pane_cp013

0x8e8c,	// (0x0008edf2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8e8c,	// (0x0008edf2) cell_vitu2_function_top_wide_pane_g1

0xecd3,	// (0x00094c39) bg_popup_sub_pane_cp20

0x8ea4,	// (0x0008ee0a) list_vitu2_match_list_pane

0xc5ec,	// (0x00092552) bg_popup_sub_pane_cp20_g1

0xc5f4,	// (0x0009255a) bg_popup_sub_pane_cp20_g2

0x253a,	// (0x000884a0) bg_popup_sub_pane_cp20_g3

0xc5fc,	// (0x00092562) bg_popup_sub_pane_cp20_g4

0x251a,	// (0x00088480) bg_popup_sub_pane_cp20_g5

0xc86f,	// (0x000927d5) bg_popup_sub_pane_cp20_g6

0xc60c,	// (0x00092572) bg_popup_sub_pane_cp20_g7

0xc614,	// (0x0009257a) bg_popup_sub_pane_cp20_g8

0xc61c,	// (0x00092582) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x00095959) bg_popup_sub_pane_cp20_g

0xe7c7,	// (0x0009472d) list_vitu2_match_list_item_pane_ParamLimits

0xe7c7,	// (0x0009472d) list_vitu2_match_list_item_pane

0xe7d9,	// (0x0009473f) list_vitu2_match_list_item_pane_t1

0xe04f,	// (0x00093fb5) bg_popup_sub_pane_cp21

0x3679,	// (0x000895df) grid_vitu2_dropdown_list_pane

0x8ece,	// (0x0008ee34) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8ece,	// (0x0008ee34) cell_vitu2_dropdown_list_char_pane

0x8eef,	// (0x0008ee55) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8eef,	// (0x0008ee55) cell_vitu2_dropdown_list_ctrl_pane

0xc877,	// (0x000927dd) cell_vitu2_dropdown_list_char_pane_g1

0xc880,	// (0x000927e6) cell_vitu2_dropdown_list_char_pane_g2

0xc889,	// (0x000927ef) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x00095976) cell_vitu2_dropdown_list_char_pane_g

0x8f1b,	// (0x0008ee81) cell_vitu2_dropdown_list_char_pane_t1

0x8f29,	// (0x0008ee8f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8f29,	// (0x0008ee8f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8f39,	// (0x0008ee9f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8f39,	// (0x0008ee9f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8f4a,	// (0x0008eeb0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8f4a,	// (0x0008eeb0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8f5a,	// (0x0008eec0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8f5a,	// (0x0008eec0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb9f4,	// (0x0009195a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb9f4,	// (0x0009195a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0009597d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0009597d) cell_vitu2_dropdown_list_ctrl_pane_g

0x8f76,	// (0x0008eedc) aid_size_cell_gallery2_ParamLimits

0x8f76,	// (0x0008eedc) aid_size_cell_gallery2

0x8f8c,	// (0x0008eef2) grid_gallery2_pane_ParamLimits

0x8f8c,	// (0x0008eef2) grid_gallery2_pane

0x8fa0,	// (0x0008ef06) scroll_pane_cp029_ParamLimits

0x8fa0,	// (0x0008ef06) scroll_pane_cp029

0x8fac,	// (0x0008ef12) cell_gallery2_pane_ParamLimits

0x8fac,	// (0x0008ef12) cell_gallery2_pane

0xc892,	// (0x000927f8) cell_gallery2_pane_g2

0x8fe2,	// (0x0008ef48) cell_gallery2_pane_g3

0xc89c,	// (0x00092802) cell_gallery2_pane_g4

0xc8a4,	// (0x0009280a) cell_gallery2_pane_g5

0x3cc0,	// (0x00089c26) grid_highlight_pane_cp10

0x8627,	// (0x0008e58d) popup_vitu2_match_list_window_ParamLimits

0x863c,	// (0x0008e5a2) popup_vitu2_query_window_ParamLimits

0x863c,	// (0x0008e5a2) popup_vitu2_query_window

0xe04f,	// (0x00093fb5) bg_vitu2_candi_button_pane

0xc877,	// (0x000927dd) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc880,	// (0x000927e6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc889,	// (0x000927ef) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x064c,	// (0x000865b2) bg_button_pane_cp015

0x8fea,	// (0x0008ef50) bg_button_pane_cp016

0x8ffd,	// (0x0008ef63) bg_button_pane_cp017

0x5e7e,	// (0x0008bde4) bg_popup_sub_pane_cp22

0xc8ac,	// (0x00092812) popup_vitu2_query_window_g1

0x0681,	// (0x000865e7) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x00095988) popup_vitu2_query_window_g

0x0694,	// (0x000865fa) popup_vitu2_query_window_t1_ParamLimits

0x0694,	// (0x000865fa) popup_vitu2_query_window_t1

0x06c9,	// (0x0008662f) popup_vitu2_query_window_t2_ParamLimits

0x06c9,	// (0x0008662f) popup_vitu2_query_window_t2

0x06db,	// (0x00086641) popup_vitu2_query_window_t3_ParamLimits

0x06db,	// (0x00086641) popup_vitu2_query_window_t3

0x902d,	// (0x0008ef93) popup_vitu2_query_window_t4_ParamLimits

0x902d,	// (0x0008ef93) popup_vitu2_query_window_t4

0x904e,	// (0x0008efb4) popup_vitu2_query_window_t5_ParamLimits

0x904e,	// (0x0008efb4) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0009598f) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0009598f) popup_vitu2_query_window_t

0xc6ee,	// (0x00092654) main_cset_text_pane

0x8a6c,	// (0x0008e9d2) aid_area_touch_slider_ParamLimits

0x8a88,	// (0x0008e9ee) cset_slider_pane_ParamLimits

0x8ab2,	// (0x0008ea18) main_cset_slider_pane_g1_ParamLimits

0x8ac7,	// (0x0008ea2d) main_cset_slider_pane_g2_ParamLimits

0xc70f,	// (0x00092675) main_cset_slider_pane_g3_ParamLimits

0xc70f,	// (0x00092675) main_cset_slider_pane_g3

0x8adc,	// (0x0008ea42) main_cset_slider_pane_g4_ParamLimits

0x8adc,	// (0x0008ea42) main_cset_slider_pane_g4

0x8aeb,	// (0x0008ea51) main_cset_slider_pane_g5_ParamLimits

0x8aeb,	// (0x0008ea51) main_cset_slider_pane_g5

0x8af7,	// (0x0008ea5d) main_cset_slider_pane_g6_ParamLimits

0x8af7,	// (0x0008ea5d) main_cset_slider_pane_g6

0xf97c,	// (0x000958e2) main_cset_slider_pane_g_ParamLimits

0xc73f,	// (0x000926a5) main_cset_slider_pane_t1_ParamLimits

0x8b83,	// (0x0008eae9) main_cset_slider_pane_t2_ParamLimits

0x8b9d,	// (0x0008eb03) main_cset_slider_pane_t3_ParamLimits

0x8bb7,	// (0x0008eb1d) main_cset_slider_pane_t4_ParamLimits

0x8bd1,	// (0x0008eb37) main_cset_slider_pane_t5_ParamLimits

0x8beb,	// (0x0008eb51) main_cset_slider_pane_t6_ParamLimits

0x8c00,	// (0x0008eb66) main_cset_slider_pane_t7_ParamLimits

0x8c2a,	// (0x0008eb90) main_cset_slider_pane_t8_ParamLimits

0x8c2a,	// (0x0008eb90) main_cset_slider_pane_t8

0x8c52,	// (0x0008ebb8) main_cset_slider_pane_t9_ParamLimits

0x8c52,	// (0x0008ebb8) main_cset_slider_pane_t9

0x8c7a,	// (0x0008ebe0) main_cset_slider_pane_t10_ParamLimits

0x8c7a,	// (0x0008ebe0) main_cset_slider_pane_t10

0x8ca2,	// (0x0008ec08) main_cset_slider_pane_t11_ParamLimits

0x8ca2,	// (0x0008ec08) main_cset_slider_pane_t11

0x8cca,	// (0x0008ec30) main_cset_slider_pane_t12_ParamLimits

0x8cca,	// (0x0008ec30) main_cset_slider_pane_t12

0x8ce7,	// (0x0008ec4d) main_cset_slider_pane_t13_ParamLimits

0x8ce7,	// (0x0008ec4d) main_cset_slider_pane_t13

0xf9a1,	// (0x00095907) main_cset_slider_pane_t_ParamLimits

0xe04f,	// (0x00093fb5) bg_popup_sub_pane_cp011

0xc8b8,	// (0x0009281e) main_cset_text_pane_g1

0xc8c0,	// (0x00092826) main_cset_text_pane_t1

0xc8ce,	// (0x00092834) main_cset_text_pane_t2

0xc8dc,	// (0x00092842) main_cset_text_pane_t3

0xc8ea,	// (0x00092850) main_cset_text_pane_t4

0xc8f8,	// (0x0009285e) main_cset_text_pane_t5

0xc906,	// (0x0009286c) main_cset_text_pane_t6

0xc914,	// (0x0009287a) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0009599e) main_cset_text_pane_t

0xe04f,	// (0x00093fb5) main_cam4_burst_pane

0xe04f,	// (0x00093fb5) main_cam5_pane

0x89ab,	// (0x0008e911) bg_button_pane_cp019

0x89b4,	// (0x0008e91a) bg_button_pane_cp020

0xc71b,	// (0x00092681) main_cset_slider_pane_g7_ParamLimits

0xc71b,	// (0x00092681) main_cset_slider_pane_g7

0xc727,	// (0x0009268d) main_cset_slider_pane_g8_ParamLimits

0xc727,	// (0x0009268d) main_cset_slider_pane_g8

0x8b0b,	// (0x0008ea71) main_cset_slider_pane_g9_ParamLimits

0x8b0b,	// (0x0008ea71) main_cset_slider_pane_g9

0x8b17,	// (0x0008ea7d) main_cset_slider_pane_g10_ParamLimits

0x8b17,	// (0x0008ea7d) main_cset_slider_pane_g10

0x8b23,	// (0x0008ea89) main_cset_slider_pane_g11_ParamLimits

0x8b23,	// (0x0008ea89) main_cset_slider_pane_g11

0x8b2f,	// (0x0008ea95) main_cset_slider_pane_g12_ParamLimits

0x8b2f,	// (0x0008ea95) main_cset_slider_pane_g12

0x8b3b,	// (0x0008eaa1) main_cset_slider_pane_g13_ParamLimits

0x8b3b,	// (0x0008eaa1) main_cset_slider_pane_g13

0x8b47,	// (0x0008eaad) main_cset_slider_pane_g14_ParamLimits

0x8b47,	// (0x0008eaad) main_cset_slider_pane_g14

0x8b53,	// (0x0008eab9) main_cset_slider_pane_g15_ParamLimits

0x8b53,	// (0x0008eab9) main_cset_slider_pane_g15

0xc76d,	// (0x000926d3) main_cset_slider_pane_t14_ParamLimits

0xc76d,	// (0x000926d3) main_cset_slider_pane_t14

0xc7a6,	// (0x0009270c) main_cset_slider_pane_t15_ParamLimits

0xc7a6,	// (0x0009270c) main_cset_slider_pane_t15

0x90c5,	// (0x0008f02b) aid_cam4_burst_size_cell_ParamLimits

0x90c5,	// (0x0008f02b) aid_cam4_burst_size_cell

0x90e5,	// (0x0008f04b) grid_cam4_burst_pane_ParamLimits

0x90e5,	// (0x0008f04b) grid_cam4_burst_pane

0x911d,	// (0x0008f083) linegrid_cam4_burst_pane_ParamLimits

0x911d,	// (0x0008f083) linegrid_cam4_burst_pane

0xc922,	// (0x00092888) scroll_pane_cp30_ParamLimits

0xc922,	// (0x00092888) scroll_pane_cp30

0x9143,	// (0x0008f0a9) cell_cam4_burst_pane_ParamLimits

0x9143,	// (0x0008f0a9) cell_cam4_burst_pane

0xc92e,	// (0x00092894) linegrid_cam4_burst_pane_g1_ParamLimits

0xc92e,	// (0x00092894) linegrid_cam4_burst_pane_g1

0x9190,	// (0x0008f0f6) linegrid_cam4_burst_pane_g2_ParamLimits

0x9190,	// (0x0008f0f6) linegrid_cam4_burst_pane_g2

0xc93b,	// (0x000928a1) linegrid_cam4_burst_pane_g3_ParamLimits

0xc93b,	// (0x000928a1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x000959ad) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x000959ad) linegrid_cam4_burst_pane_g

0x91a1,	// (0x0008f107) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x91a1,	// (0x0008f107) linegrid_cam4_burst_pane_g3_copy1

0xc948,	// (0x000928ae) linegrid_cam4_burst_pane_g4_ParamLimits

0xc948,	// (0x000928ae) linegrid_cam4_burst_pane_g4

0x91bb,	// (0x0008f121) linegrid_cam4_burst_pane_g5_ParamLimits

0x91bb,	// (0x0008f121) linegrid_cam4_burst_pane_g5

0x91cc,	// (0x0008f132) linegrid_cam4_burst_pane_g6_ParamLimits

0x91cc,	// (0x0008f132) linegrid_cam4_burst_pane_g6

0xc955,	// (0x000928bb) linegrid_cam4_burst_pane_g7_ParamLimits

0xc955,	// (0x000928bb) linegrid_cam4_burst_pane_g7

0x91e3,	// (0x0008f149) cell_cam4_burst_pane_g1

0xc96e,	// (0x000928d4) main_cam5_pane_t1_ParamLimits

0xc96e,	// (0x000928d4) main_cam5_pane_t1

0xc980,	// (0x000928e6) main_cam5_pane_t2_ParamLimits

0xc980,	// (0x000928e6) main_cam5_pane_t2

0xc992,	// (0x000928f8) main_cam5_pane_t3_ParamLimits

0xc992,	// (0x000928f8) main_cam5_pane_t3

0xc9a4,	// (0x0009290a) main_cam5_pane_t4_ParamLimits

0xc9a4,	// (0x0009290a) main_cam5_pane_t4

0xc9bc,	// (0x00092922) main_cam5_pane_t5_ParamLimits

0xc9bc,	// (0x00092922) main_cam5_pane_t5

0xc9d0,	// (0x00092936) main_cam5_pane_t6_ParamLimits

0xc9d0,	// (0x00092936) main_cam5_pane_t6

0xc9e4,	// (0x0009294a) main_cam5_pane_t7_ParamLimits

0xc9e4,	// (0x0009294a) main_cam5_pane_t7

0xc9f6,	// (0x0009295c) main_cam5_pane_t8_ParamLimits

0xc9f6,	// (0x0009295c) main_cam5_pane_t8

0xca12,	// (0x00092978) main_cam5_pane_t9_ParamLimits

0xca12,	// (0x00092978) main_cam5_pane_t9

0xca24,	// (0x0009298a) main_cam5_pane_t10_ParamLimits

0xca24,	// (0x0009298a) main_cam5_pane_t10

0xca36,	// (0x0009299c) main_cam5_pane_t11_ParamLimits

0xca36,	// (0x0009299c) main_cam5_pane_t11

0xca48,	// (0x000929ae) main_cam5_pane_t12_ParamLimits

0xca48,	// (0x000929ae) main_cam5_pane_t12

0xca5d,	// (0x000929c3) main_cam5_pane_t13_ParamLimits

0xca5d,	// (0x000929c3) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x000959b9) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x000959b9) main_cam5_pane_t

0x11bb,	// (0x00087121) popup_scut_keymap_window_ParamLimits

0x11bb,	// (0x00087121) popup_scut_keymap_window

0x91f8,	// (0x0008f15e) aid_size_cell_brow_shortcut

0x3cc0,	// (0x00089c26) bg_popup_window_pane_cp010

0x9204,	// (0x0008f16a) grid_scut_pane

0x9210,	// (0x0008f176) cell_scut_pane_ParamLimits

0x9210,	// (0x0008f176) cell_scut_pane

0x9227,	// (0x0008f18d) cell_scut_pane_g1

0xca7a,	// (0x000929e0) cell_scut_pane_t1

0xca89,	// (0x000929ef) cell_scut_pane_t2

0x9230,	// (0x0008f196) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x000959d4) cell_scut_pane_t

0x7079,	// (0x0008cfdf) main_mup3_pane_g8_ParamLimits

0x7079,	// (0x0008cfdf) main_mup3_pane_g8

0x8525,	// (0x0008e48b) area_vitu2_query_pane_ParamLimits

0x8525,	// (0x0008e48b) area_vitu2_query_pane

0x0660,	// (0x000865c6) input_focus_pane_cp08

0xca98,	// (0x000929fe) area_vitu2_query_pane_g1

0x0703,	// (0x00086669) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x000959db) area_vitu2_query_pane_g

0x923e,	// (0x0008f1a4) area_vitu2_query_pane_t1_ParamLimits

0x923e,	// (0x0008f1a4) area_vitu2_query_pane_t1

0x9252,	// (0x0008f1b8) area_vitu2_query_pane_t2_ParamLimits

0x9252,	// (0x0008f1b8) area_vitu2_query_pane_t2

0x0714,	// (0x0008667a) area_vitu2_query_pane_t3_ParamLimits

0x0714,	// (0x0008667a) area_vitu2_query_pane_t3

0xcaa4,	// (0x00092a0a) area_vitu2_query_pane_t4_ParamLimits

0xcaa4,	// (0x00092a0a) area_vitu2_query_pane_t4

0xcacc,	// (0x00092a32) area_vitu2_query_pane_t5_ParamLimits

0xcacc,	// (0x00092a32) area_vitu2_query_pane_t5

0xcaf4,	// (0x00092a5a) area_vitu2_query_pane_t6_ParamLimits

0xcaf4,	// (0x00092a5a) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x000959e0) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x000959e0) area_vitu2_query_pane_t

0x9266,	// (0x0008f1cc) bg_button_pane_cp018

0x9274,	// (0x0008f1da) bg_button_pane_cp021

0x073c,	// (0x000866a2) bg_button_pane_cp022

0x074d,	// (0x000866b3) input_focus_pane_cp09

0x3ac9,	// (0x00089a2f) aid_size_touch_mv_arrow_left

0x3af2,	// (0x00089a58) aid_size_touch_mv_arrow_right

0x8b6b,	// (0x0008ead1) main_cset_slider_pane_g16_ParamLimits

0x8b6b,	// (0x0008ead1) main_cset_slider_pane_g16

0x8b77,	// (0x0008eadd) main_cset_slider_pane_g17_ParamLimits

0x8b77,	// (0x0008eadd) main_cset_slider_pane_g17

0x91e3,	// (0x0008f149) cell_cam4_burst_pane_g1_ParamLimits

0xe04f,	// (0x00093fb5) compa_mode_pane

0x8d5e,	// (0x0008ecc4) popup_vtel_slider_window_g3_ParamLimits

0x8d5e,	// (0x0008ecc4) popup_vtel_slider_window_g3

0x8d75,	// (0x0008ecdb) popup_vtel_slider_window_g4_ParamLimits

0x8d75,	// (0x0008ecdb) popup_vtel_slider_window_g4

0x8d8c,	// (0x0008ecf2) popup_vtel_slider_window_t1_ParamLimits

0x8d8c,	// (0x0008ecf2) popup_vtel_slider_window_t1

0xe04f,	// (0x00093fb5) main_cl_pane

0xb3c4,	// (0x0009132a) popup_imed_adjust2_window_ParamLimits

0x5e7e,	// (0x0008bde4) bg_tb_trans_pane_cp05_ParamLimits

0xbd0d,	// (0x00091c73) popup_imed_adjust2_window_g1_ParamLimits

0xbd1c,	// (0x00091c82) popup_imed_adjust2_window_g2_ParamLimits

0xbd1c,	// (0x00091c82) popup_imed_adjust2_window_g2

0xbd28,	// (0x00091c8e) popup_imed_adjust2_window_g3_ParamLimits

0xbd28,	// (0x00091c8e) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0009574b) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0009574b) popup_imed_adjust2_window_g

0xbd34,	// (0x00091c9a) popup_imed_adjust2_window_t1_ParamLimits

0xbd4c,	// (0x00091cb2) slider_imed_adjust_pane_ParamLimits

0xbd60,	// (0x00091cc6) slider_imed_adjust_pane_g1_ParamLimits

0xbd70,	// (0x00091cd6) slider_imed_adjust_pane_g2_ParamLimits

0xbd80,	// (0x00091ce6) slider_imed_adjust_pane_g3_ParamLimits

0xbd91,	// (0x00091cf7) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x00095752) slider_imed_adjust_pane_g_ParamLimits

0x82ae,	// (0x0008e214) aid_touch_area_cam4_ParamLimits

0x82ae,	// (0x0008e214) aid_touch_area_cam4

0xc483,	// (0x000923e9) battery_pane_cp01

0x837d,	// (0x0008e2e3) main_camera4_pane_g6_ParamLimits

0x837d,	// (0x0008e2e3) main_camera4_pane_g6

0x83a7,	// (0x0008e30d) main_camera4_pane_t2_ParamLimits

0x83a7,	// (0x0008e30d) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x00095855) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x00095855) main_camera4_pane_t

0x83dc,	// (0x0008e342) aid_touch_area_vid4_ParamLimits

0x83dc,	// (0x0008e342) aid_touch_area_vid4

0x8430,	// (0x0008e396) main_video4_pane_g5_ParamLimits

0x8430,	// (0x0008e396) main_video4_pane_g5

0x8455,	// (0x0008e3bb) vid4_progress_pane_ParamLimits

0x8455,	// (0x0008e3bb) vid4_progress_pane

0xc733,	// (0x00092699) main_cset_slider_pane_g18_ParamLimits

0xc733,	// (0x00092699) main_cset_slider_pane_g18

0xc962,	// (0x000928c8) cell_cam4_burst_pane_g2_ParamLimits

0xc962,	// (0x000928c8) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x000959b4) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x000959b4) cell_cam4_burst_pane_g

0xece1,	// (0x00094c47) bg_cl_pane_ParamLimits

0xece1,	// (0x00094c47) bg_cl_pane

0x9280,	// (0x0008f1e6) cl_header_pane_ParamLimits

0x9280,	// (0x0008f1e6) cl_header_pane

0x9294,	// (0x0008f1fa) cl_listscroll_pane_ParamLimits

0x9294,	// (0x0008f1fa) cl_listscroll_pane

0xcb40,	// (0x00092aa6) bg_cl_pane_g1

0xcb48,	// (0x00092aae) bg_cl_pane_g2

0xcb50,	// (0x00092ab6) bg_cl_pane_g3

0xcb58,	// (0x00092abe) bg_cl_pane_g4

0xcb60,	// (0x00092ac6) bg_cl_pane_g5

0xcb68,	// (0x00092ace) bg_cl_pane_g6

0xcb70,	// (0x00092ad6) bg_cl_pane_g7

0xcb78,	// (0x00092ade) bg_cl_pane_g8

0xcb80,	// (0x00092ae6) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x000959ef) bg_cl_pane_g

0x92a4,	// (0x0008f20a) aid_height_cl_leading_ParamLimits

0x92a4,	// (0x0008f20a) aid_height_cl_leading

0x92b0,	// (0x0008f216) aid_height_cl_text_ParamLimits

0x92b0,	// (0x0008f216) aid_height_cl_text

0xecd3,	// (0x00094c39) bg_cl_header_pane_ParamLimits

0xecd3,	// (0x00094c39) bg_cl_header_pane

0x92cf,	// (0x0008f235) cl_header_pane_g1_ParamLimits

0x92cf,	// (0x0008f235) cl_header_pane_g1

0x92e5,	// (0x0008f24b) cl_header_pane_t1_ParamLimits

0x92e5,	// (0x0008f24b) cl_header_pane_t1

0xcb88,	// (0x00092aee) cl_list_pane

0xc706,	// (0x0009266c) hc_scroll_pane_cp01

0x251a,	// (0x00088480) bg_cl_header_pane_g1

0xc5ec,	// (0x00092552) bg_cl_header_pane_g2

0x253a,	// (0x000884a0) bg_cl_header_pane_g3

0xc5fc,	// (0x00092562) bg_cl_header_pane_g4

0xc5f4,	// (0x0009255a) bg_cl_header_pane_g5

0xc86f,	// (0x000927d5) bg_cl_header_pane_g6

0xc614,	// (0x0009257a) bg_cl_header_pane_g7

0xc61c,	// (0x00092582) bg_cl_header_pane_g8

0xc60c,	// (0x00092572) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x00095a02) bg_cl_header_pane_g

0x92fe,	// (0x0008f264) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x92fe,	// (0x0008f264) hc_cl_list_double_graphic_heading_pane

0x930f,	// (0x0008f275) hc_cl_list_single_graphic_pane_ParamLimits

0x930f,	// (0x0008f275) hc_cl_list_single_graphic_pane

0x9328,	// (0x0008f28e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9328,	// (0x0008f28e) hc_cl_list_single_graphic_pane_g1

0x9334,	// (0x0008f29a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9334,	// (0x0008f29a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x00095a15) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x00095a15) hc_cl_list_single_graphic_pane_g

0x9348,	// (0x0008f2ae) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9348,	// (0x0008f2ae) hc_cl_list_single_graphic_pane_t1

0x9328,	// (0x0008f28e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9328,	// (0x0008f28e) hc_cl_list_double_graphic_heading_pane_g1

0x935d,	// (0x0008f2c3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x935d,	// (0x0008f2c3) hc_cl_list_double_graphic_heading_pane_g2

0x9371,	// (0x0008f2d7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9371,	// (0x0008f2d7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x00095a1a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x00095a1a) hc_cl_list_double_graphic_heading_pane_g

0x9385,	// (0x0008f2eb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9385,	// (0x0008f2eb) hc_cl_list_double_graphic_heading_pane_t1

0x939a,	// (0x0008f300) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x939a,	// (0x0008f300) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x00095a21) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x00095a21) hc_cl_list_double_graphic_heading_pane_t

0x93af,	// (0x0008f315) vid4_progress_pane_g1

0x93c1,	// (0x0008f327) vid4_progress_pane_g2

0xb392,	// (0x000912f8) vid4_progress_pane_g3

0xe7ef,	// (0x00094755) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x00095a26) vid4_progress_pane_g

0xe80d,	// (0x00094773) vid4_progress_pane_t1

0xe822,	// (0x00094788) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x00095a31) vid4_progress_pane_t

0xe84e,	// (0x000947b4) wait_bar_pane_cp07

0xb585,	// (0x000914eb) blid_firmament_pane_ParamLimits

0xb5c8,	// (0x0009152e) popup_blid_sat_info2_window_g1

0xb5ec,	// (0x00091552) popup_blid_sat_info2_window_t3

0xb5fa,	// (0x00091560) popup_blid_sat_info2_window_t4

0xb608,	// (0x0009156e) popup_blid_sat_info2_window_t5

0xb616,	// (0x0009157c) popup_blid_sat_info2_window_t6

0xb626,	// (0x0009158c) popup_blid_sat_info2_window_t7

0xb634,	// (0x0009159a) popup_blid_sat_info2_window_t8

0xb642,	// (0x000915a8) popup_blid_sat_info2_window_t9

0xb650,	// (0x000915b6) popup_blid_sat_info2_window_t10

0xb714,	// (0x0009167a) aid_firma_cardinal_ParamLimits

0xb728,	// (0x0009168e) blid_firmament_pane_t1_ParamLimits

0xb73f,	// (0x000916a5) blid_firmament_pane_t2_ParamLimits

0xb756,	// (0x000916bc) blid_firmament_pane_t3_ParamLimits

0xb76d,	// (0x000916d3) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x00095644) blid_firmament_pane_t_ParamLimits

0xb784,	// (0x000916ea) blid_sat_info_pane_ParamLimits

0xecd3,	// (0x00094c39) main_cam_set_pane_ParamLimits

0x793f,	// (0x0008d8a5) aid_size_cell_colour_35_ParamLimits

0x795f,	// (0x0008d8c5) aid_size_cell_colour_112_ParamLimits

0x797f,	// (0x0008d8e5) aid_size_cell_effect_ParamLimits

0x5e7e,	// (0x0008bde4) bg_tb_trans_pane_cp02_ParamLimits

0x33b9,	// (0x0008931f) heading_imed_pane_ParamLimits

0x799f,	// (0x0008d905) listscroll_imed_pane_ParamLimits

0x5185,	// (0x0008b0eb) popup_call2_audio_first_window_g5_ParamLimits

0x5185,	// (0x0008b0eb) popup_call2_audio_first_window_g5

0x7f59,	// (0x0008debf) aid_size_touch_image3_arrow_left_ParamLimits

0x7f59,	// (0x0008debf) aid_size_touch_image3_arrow_left

0x7f85,	// (0x0008deeb) aid_size_touch_image3_arrow_right_ParamLimits

0x7f85,	// (0x0008deeb) aid_size_touch_image3_arrow_right

0xe838,	// (0x0009479e) vid4_progress_pane_t3

0x7ccb,	// (0x0008dc31) main_hwr_training_symbol_option_pane_ParamLimits

0x7ccb,	// (0x0008dc31) main_hwr_training_symbol_option_pane

0xc003,	// (0x00091f69) popup_hwr_training_preview_window_ParamLimits

0xc003,	// (0x00091f69) popup_hwr_training_preview_window

0x7ceb,	// (0x0008dc51) hwr_training_navi_pane_g5_ParamLimits

0x7ceb,	// (0x0008dc51) hwr_training_navi_pane_g5

0xc5da,	// (0x00092540) popup_char_count_window

0xecd3,	// (0x00094c39) bg_popup_sub_pane_cp20_ParamLimits

0x8ea4,	// (0x0008ee0a) list_vitu2_match_list_pane_ParamLimits

0x8eb3,	// (0x0008ee19) vitu2_page_scroll_pane_ParamLimits

0x8eb3,	// (0x0008ee19) vitu2_page_scroll_pane

0xcba2,	// (0x00092b08) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcba2,	// (0x00092b08) list_single_hwr_training_symbol_option_pane

0xcbb5,	// (0x00092b1b) list_single_hwr_training_symbol_option_pane_g1

0xcbbd,	// (0x00092b23) list_single_hwr_training_symbol_option_pane_t1

0xcbcb,	// (0x00092b31) bg_button_pane_cp023

0xcbd4,	// (0x00092b3a) bg_button_pane_cp024

0x93dc,	// (0x0008f342) vitu2_page_scroll_pane_g1

0x93e4,	// (0x0008f34a) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x00095a38) vitu2_page_scroll_pane_g

0x93ec,	// (0x0008f352) vitu2_page_scroll_pane_t1

0xbdbd,	// (0x00091d23) popup_char_count_window_g1

0xcc07,	// (0x00092b6d) popup_char_count_window_g2

0xcc10,	// (0x00092b76) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x00095a3d) popup_char_count_window_g

0xcc19,	// (0x00092b7f) popup_char_count_window_t1

0xe04f,	// (0x00093fb5) main_vded2_pane

0xbcf9,	// (0x00091c5f) aid_size_cell_imed_line

0xbd03,	// (0x00091c69) grid_imed_line_width_pane

0xc54b,	// (0x000924b1) vid4_indicators_pane_g4

0xcc27,	// (0x00092b8d) cell_imed_line_width_pane_ParamLimits

0xcc27,	// (0x00092b8d) cell_imed_line_width_pane

0xcc3b,	// (0x00092ba1) cell_imed_line_width_pane_g1

0xcc44,	// (0x00092baa) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x00095a44) cell_imed_line_width_pane_g

0x93fb,	// (0x0008f361) main_vded2_pane_g1_ParamLimits

0x93fb,	// (0x0008f361) main_vded2_pane_g1

0x9411,	// (0x0008f377) main_vded2_pane_g2_ParamLimits

0x9411,	// (0x0008f377) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x00095a49) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x00095a49) main_vded2_pane_g

0x9423,	// (0x0008f389) vded2_slider_pane_ParamLimits

0x9423,	// (0x0008f389) vded2_slider_pane

0x9433,	// (0x0008f399) aid_size_touch_vded2_end

0x943d,	// (0x0008f3a3) aid_size_touch_vded2_playhead

0xcc4c,	// (0x00092bb2) aid_size_touch_vded2_start

0xcc54,	// (0x00092bba) vded2_slider_bg_pane

0xcc5d,	// (0x00092bc3) vded2_slider_pane_g1

0xcc66,	// (0x00092bcc) vded2_slider_pane_g2

0x9447,	// (0x0008f3ad) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x00095a4e) vded2_slider_pane_g

0xcc6e,	// (0x00092bd4) vded2_slider_bg_pane_g1

0xcc77,	// (0x00092bdd) vded2_slider_bg_pane_g2

0xcc80,	// (0x00092be6) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x00095a55) vded2_slider_bg_pane_g

0x4337,	// (0x0008a29d) aid_postcard_touch_down_pane_ParamLimits

0x4337,	// (0x0008a29d) aid_postcard_touch_down_pane

0x434d,	// (0x0008a2b3) aid_postcard_touch_up_pane_ParamLimits

0x434d,	// (0x0008a2b3) aid_postcard_touch_up_pane

0xe04f,	// (0x00093fb5) main_blid2_pane

0xb3aa,	// (0x00091310) popup_blid2_search_window

0xe04f,	// (0x00093fb5) blid2_gps_pane

0xe04f,	// (0x00093fb5) blid2_navig_pane

0xe04f,	// (0x00093fb5) blid2_search_pane

0xe04f,	// (0x00093fb5) blid2_tripm_pane

0x9452,	// (0x0008f3b8) blid2_search_pane_g1_ParamLimits

0x9452,	// (0x0008f3b8) blid2_search_pane_g1

0x946a,	// (0x0008f3d0) blid2_search_pane_t1_ParamLimits

0x946a,	// (0x0008f3d0) blid2_search_pane_t1

0x947c,	// (0x0008f3e2) aid_size_cell_blid2_gps_ParamLimits

0x947c,	// (0x0008f3e2) aid_size_cell_blid2_gps

0x9494,	// (0x0008f3fa) blid2_gps_pane_g1_ParamLimits

0x9494,	// (0x0008f3fa) blid2_gps_pane_g1

0x94a8,	// (0x0008f40e) grid_blid2_satellite_pane_ParamLimits

0x94a8,	// (0x0008f40e) grid_blid2_satellite_pane

0x94c2,	// (0x0008f428) blid2_navig_pane_g1_ParamLimits

0x94c2,	// (0x0008f428) blid2_navig_pane_g1

0x94ce,	// (0x0008f434) blid2_navig_pane_t1_ParamLimits

0x94ce,	// (0x0008f434) blid2_navig_pane_t1

0x94e9,	// (0x0008f44f) blid2_navig_pane_t2_ParamLimits

0x94e9,	// (0x0008f44f) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x00095a5c) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x00095a5c) blid2_navig_pane_t

0x9504,	// (0x0008f46a) blid2_navig_ring_pane_ParamLimits

0x9504,	// (0x0008f46a) blid2_navig_ring_pane

0x951d,	// (0x0008f483) blid2_speed_pane_ParamLimits

0x951d,	// (0x0008f483) blid2_speed_pane

0x9529,	// (0x0008f48f) blid2_tripm_pane_g1_ParamLimits

0x9529,	// (0x0008f48f) blid2_tripm_pane_g1

0x9544,	// (0x0008f4aa) blid2_tripm_pane_g2_ParamLimits

0x9544,	// (0x0008f4aa) blid2_tripm_pane_g2

0x9558,	// (0x0008f4be) blid2_tripm_pane_g3_ParamLimits

0x9558,	// (0x0008f4be) blid2_tripm_pane_g3

0x956c,	// (0x0008f4d2) blid2_tripm_pane_g4_ParamLimits

0x956c,	// (0x0008f4d2) blid2_tripm_pane_g4

0x9580,	// (0x0008f4e6) blid2_tripm_pane_g5_ParamLimits

0x9580,	// (0x0008f4e6) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x00095a61) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x00095a61) blid2_tripm_pane_g

0x95a6,	// (0x0008f50c) blid2_tripm_pane_t1_ParamLimits

0x95a6,	// (0x0008f50c) blid2_tripm_pane_t1

0x95c1,	// (0x0008f527) blid2_tripm_pane_t2_ParamLimits

0x95c1,	// (0x0008f527) blid2_tripm_pane_t2

0x95da,	// (0x0008f540) blid2_tripm_pane_t3_ParamLimits

0x95da,	// (0x0008f540) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x00095a6e) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x00095a6e) blid2_tripm_pane_t

0x9621,	// (0x0008f587) cell_blid2_satellite_pane_ParamLimits

0x9621,	// (0x0008f587) cell_blid2_satellite_pane

0x963f,	// (0x0008f5a5) cell_blid2_satellite_pane_g1

0xcc89,	// (0x00092bef) cell_blid2_satellite_pane_t1

0xb794,	// (0x000916fa) blid2_speed_pane_g1

0xcc97,	// (0x00092bfd) blid2_speed_pane_t1

0xcca5,	// (0x00092c0b) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x00095a77) blid2_speed_pane_t

0xb794,	// (0x000916fa) blid2_navig_ring_pane_g1

0x9648,	// (0x0008f5ae) blid2_navig_ring_pane_g2

0x9650,	// (0x0008f5b6) blid2_navig_ring_pane_g3

0x9658,	// (0x0008f5be) blid2_navig_ring_pane_g4

0x9660,	// (0x0008f5c6) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x00095a7c) blid2_navig_ring_pane_g

0xe04f,	// (0x00093fb5) bg_popup_window_pane_cp011

0xccb3,	// (0x00092c19) popup_blid2_search_window_g1

0xccbb,	// (0x00092c21) popup_blid2_search_window_t1

0xccc9,	// (0x00092c2f) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x00095a87) popup_blid2_search_window_t

0xeffa,	// (0x00094f60) main_browser_pane_g1

0xece1,	// (0x00094c47) main_browser_pane_ParamLimits

0xecd3,	// (0x00094c39) bg_button_pane_cp011_ParamLimits

0x8748,	// (0x0008e6ae) cell_vitu2_function_pane_g1_ParamLimits

0x5e7e,	// (0x0008bde4) bg_popup_sub_pane_cp22_ParamLimits

0x0660,	// (0x000865c6) input_focus_pane_cp08_ParamLimits

0x9010,	// (0x0008ef76) popup_vitu2_query_button_pane_ParamLimits

0x9010,	// (0x0008ef76) popup_vitu2_query_button_pane

0x0677,	// (0x000865dd) popup_vitu2_query_input_button_pane

0xc8ac,	// (0x00092812) popup_vitu2_query_window_g1_ParamLimits

0x0681,	// (0x000865e7) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x00095988) popup_vitu2_query_window_g_ParamLimits

0xe04f,	// (0x00093fb5) bg_button_pane_cp026

0x9668,	// (0x0008f5ce) popup_vitu2_query_input_button_pane_g1

0xe04f,	// (0x00093fb5) bg_button_pane_cp025

0xccd7,	// (0x00092c3d) popup_vitu2_query_button_pane_t1

0x6d66,	// (0x0008cccc) main_mp3_pane_t6

0x6d74,	// (0x0008ccda) popup_slider_window_cp01

0xc4b1,	// (0x00092417) cam4_battery_pane

0xc50a,	// (0x00092470) cam4_battery_pane_cp02

0xe7e7,	// (0x0009474d) cam4_battery_pane_cp01

0xe7e7,	// (0x0009474d) cam4_battery_pane_cp03

0xb794,	// (0x000916fa) cam4_battery_pane_g1

0xcce5,	// (0x00092c4b) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x00095a8c) cam4_battery_pane_g

0xb65e,	// (0x000915c4) popup_blid_sat_info2_window_t11

0x3ac9,	// (0x00089a2f) aid_size_touch_mv_arrow_left_ParamLimits

0x3af2,	// (0x00089a58) aid_size_touch_mv_arrow_right_ParamLimits

0x3b50,	// (0x00089ab6) navi_pane_g1_ParamLimits

0x3b5c,	// (0x00089ac2) navi_pane_g2_ParamLimits

0x3b8a,	// (0x00089af0) navi_pane_g3_ParamLimits

0xf3f0,	// (0x00095356) navi_pane_g_ParamLimits

0x3c46,	// (0x00089bac) navi_pane_mv_t1_ParamLimits

0x79ab,	// (0x0008d911) grid_imed_effect_pane_ParamLimits

0x210e,	// (0x00088074) aid_placing_vt_slider_lsc

0xef49,	// (0x00094eaf) aid_placing_vt_slider_prt

0xecd3,	// (0x00094c39) bg_tb_trans_pane_cp01_ParamLimits

0xb914,	// (0x0009187a) popup_image_details_window_g1_ParamLimits

0xb927,	// (0x0009188d) popup_image_details_window_g2_ParamLimits

0xb93c,	// (0x000918a2) popup_image_details_window_g3_ParamLimits

0xb93c,	// (0x000918a2) popup_image_details_window_g3

0xf723,	// (0x00095689) popup_image_details_window_g_ParamLimits

0xb950,	// (0x000918b6) popup_image_details_window_t1_ParamLimits

0xb962,	// (0x000918c8) popup_image_details_window_t2_ParamLimits

0xb97b,	// (0x000918e1) popup_image_details_window_t3_ParamLimits

0xb98f,	// (0x000918f5) popup_image_details_window_t4_ParamLimits

0xb9aa,	// (0x00091910) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x00095690) popup_image_details_window_t_ParamLimits

0x92bc,	// (0x0008f222) cl_header_name_pane_ParamLimits

0x92bc,	// (0x0008f222) cl_header_name_pane

0x9670,	// (0x0008f5d6) cl_header_name_pane_t1_ParamLimits

0x9670,	// (0x0008f5d6) cl_header_name_pane_t1

0x9691,	// (0x0008f5f7) cl_header_name_pane_t2_ParamLimits

0x9691,	// (0x0008f5f7) cl_header_name_pane_t2

0x96d3,	// (0x0008f639) cl_header_name_pane_t3_ParamLimits

0x96d3,	// (0x0008f639) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x00095a91) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x00095a91) cl_header_name_pane_t

0x3c17,	// (0x00089b7d) navi_pane_mv_g2_ParamLimits

0xc597,	// (0x000924fd) field_vitu2_entry_pane_g1_ParamLimits

0xc5a3,	// (0x00092509) field_vitu2_entry_pane_g2_ParamLimits

0xc5af,	// (0x00092515) field_vitu2_entry_pane_g3_ParamLimits

0xc5af,	// (0x00092515) field_vitu2_entry_pane_g3

0xf921,	// (0x00095887) field_vitu2_entry_pane_g_ParamLimits

0x86c4,	// (0x0008e62a) cell_vitu2_itu_pane_g1_ParamLimits

0x86d4,	// (0x0008e63a) cell_vitu2_itu_pane_g2_ParamLimits

0x86d4,	// (0x0008e63a) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x00095893) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x00095893) cell_vitu2_itu_pane_g

0xecd3,	// (0x00094c39) bg_vkb2_func_pane_cp05_ParamLimits

0xecd3,	// (0x00094c39) bg_vkb2_func_pane_cp05

0xecd3,	// (0x00094c39) bg_vkb2_func_pane_cp03

0xecd3,	// (0x00094c39) bg_vkb2_func_pane_cp04

0xecd3,	// (0x00094c39) bg_vkb2_func_pane_cp10_ParamLimits

0xecd3,	// (0x00094c39) bg_vkb2_func_pane_cp10

0x073c,	// (0x000866a2) bg_vkb2_func_pane_cp08

0x9266,	// (0x0008f1cc) bg_vkb2_func_pane_cp06

0x9274,	// (0x0008f1da) bg_vkb2_func_pane_cp07

0xcbdd,	// (0x00092b43) bg_vkb2_func_pane_cp11_ParamLimits

0xcbdd,	// (0x00092b43) bg_vkb2_func_pane_cp11

0xcbf2,	// (0x00092b58) bg_vkb2_func_pane_cp12_ParamLimits

0xcbf2,	// (0x00092b58) bg_vkb2_func_pane_cp12

0xe04f,	// (0x00093fb5) bg_vkb2_func_pane_cp09

0xc5ec,	// (0x00092552) bg_vkb2_func_pane_g1

0x253a,	// (0x000884a0) bg_vkb2_func_pane_g2

0xc5f4,	// (0x0009255a) bg_vkb2_func_pane_g3

0xc5fc,	// (0x00092562) bg_vkb2_func_pane_g4

0xc86f,	// (0x000927d5) bg_vkb2_func_pane_g5

0xc614,	// (0x0009257a) bg_vkb2_func_pane_g6

0xc61c,	// (0x00092582) bg_vkb2_func_pane_g7

0xc60c,	// (0x00092572) bg_vkb2_func_pane_g8

0x251a,	// (0x00088480) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x00095a98) bg_vkb2_func_pane_g

0x9594,	// (0x0008f4fa) blid2_tripm_pane_g6_ParamLimits

0x9594,	// (0x0008f4fa) blid2_tripm_pane_g6

0xc2f4,	// (0x0009225a) mp4_progress_pane_g1

0x960d,	// (0x0008f573) blid2_tripm_values_pane_ParamLimits

0x960d,	// (0x0008f573) blid2_tripm_values_pane

0x9704,	// (0x0008f66a) blid2_tripm_values_pane_t1

0x9712,	// (0x0008f678) blid2_tripm_values_pane_t2

0x9720,	// (0x0008f686) blid2_tripm_values_pane_t3

0x972e,	// (0x0008f694) blid2_tripm_values_pane_t4

0x973c,	// (0x0008f6a2) blid2_tripm_values_pane_t5

0x974a,	// (0x0008f6b0) blid2_tripm_values_pane_t6

0x9758,	// (0x0008f6be) blid2_tripm_values_pane_t7

0x9766,	// (0x0008f6cc) blid2_tripm_values_pane_t8

0x9774,	// (0x0008f6da) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x00095aab) blid2_tripm_values_pane_t

0x2150,	// (0x000880b6) call_video_pane_t1_ParamLimits

0x216e,	// (0x000880d4) call_video_pane_t2_ParamLimits

0xf279,	// (0x000951df) call_video_pane_t_ParamLimits

0x046b,	// (0x000863d1) msg_header_pane_g1_ParamLimits

0x42a1,	// (0x0008a207) msg_header_pane_g2_ParamLimits

0x42a1,	// (0x0008a207) msg_header_pane_g2

0x0001,

0xf493,	// (0x000953f9) msg_header_pane_g_ParamLimits

0xf493,	// (0x000953f9) msg_header_pane_g

0xece1,	// (0x00094c47) main_clock2_pane_ParamLimits

0x76a2,	// (0x0008d608) grid_clock2_toolbar_pane_ParamLimits

0x76a2,	// (0x0008d608) grid_clock2_toolbar_pane

0x76a2,	// (0x0008d608) listscroll_clock2_pane_ParamLimits

0x76a2,	// (0x0008d608) listscroll_clock2_pane

0x779d,	// (0x0008d703) main_clock2_pane_t3_ParamLimits

0x779d,	// (0x0008d703) main_clock2_pane_t3

0x77c1,	// (0x0008d727) main_clock2_pane_t4_ParamLimits

0x77c1,	// (0x0008d727) main_clock2_pane_t4

0xccef,	// (0x00092c55) cell_clock2_toolbar_pane

0xccf7,	// (0x00092c5d) cell_clock2_toolbar_pane_cp01

0xccf7,	// (0x00092c5d) cell_clock2_toolbar_pane_cp02

0xccff,	// (0x00092c65) cell_clock2_toolbar_pane_cp03

0xcd07,	// (0x00092c6d) list_clock2_pane

0x3872,	// (0x000897d8) scroll_pane_cp10

0xcd0f,	// (0x00092c75) list_single_clock2_pane_ParamLimits

0xcd0f,	// (0x00092c75) list_single_clock2_pane

0x3cc0,	// (0x00089c26) list_highlight_pane_cp08

0xcd1c,	// (0x00092c82) list_single_clock2_pane_t1

0xcd2a,	// (0x00092c90) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x00095abe) list_single_clock2_pane_t

0xe04f,	// (0x00093fb5) bg_button_pane_cp10

0xcd38,	// (0x00092c9e) cell_clock2_toolbar_pane_g1

0x42b5,	// (0x0008a21b) aid_main_viewer_pane_g1_ParamLimits

0x42b5,	// (0x0008a21b) aid_main_viewer_pane_g1

0x42c3,	// (0x0008a229) aid_main_viewer_pane_g2_ParamLimits

0x42c3,	// (0x0008a229) aid_main_viewer_pane_g2

0x42d1,	// (0x0008a237) aid_main_viewer_pane_g3_ParamLimits

0x42d1,	// (0x0008a237) aid_main_viewer_pane_g3

0x42e0,	// (0x0008a246) aid_main_viewer_pane_g4_ParamLimits

0x42e0,	// (0x0008a246) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0009540a) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0009540a) aid_main_viewer_pane_g

0x5e5e,	// (0x0008bdc4) main_calc_pane_ParamLimits

0x5e8c,	// (0x0008bdf2) main_dialer2_pane_ParamLimits

0xe04f,	// (0x00093fb5) main_cam6_pane

0xe04f,	// (0x00093fb5) main_vid6_pane

0x76ae,	// (0x0008d614) listscroll_gen_pane_cp06_ParamLimits

0x76ae,	// (0x0008d614) listscroll_gen_pane_cp06

0x77e4,	// (0x0008d74a) main_clock2_pane_t5_ParamLimits

0x77e4,	// (0x0008d74a) main_clock2_pane_t5

0x7840,	// (0x0008d7a6) aid_call2_pane_cp10_ParamLimits

0x7852,	// (0x0008d7b8) aid_call_pane_cp10_ParamLimits

0x3a58,	// (0x000899be) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3a58,	// (0x000899be) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7864,	// (0x0008d7ca) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7864,	// (0x0008d7ca) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3a58,	// (0x000899be) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x00095740) popup_clock_analogue_window_cp10_g_ParamLimits

0x7876,	// (0x0008d7dc) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7f06,	// (0x0008de6c) cell_dialer2_keypad_pane_g2_ParamLimits

0x7f06,	// (0x0008de6c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x00095826) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x00095826) cell_dialer2_keypad_pane_g

0x7f22,	// (0x0008de88) cell_dialer2_keypad_pane_t1

0x8a5e,	// (0x0008e9c4) main_cset_text2_pane_ParamLimits

0x8a5e,	// (0x0008e9c4) main_cset_text2_pane

0xca98,	// (0x000929fe) area_vitu2_query_pane_g1_ParamLimits

0x0703,	// (0x00086669) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x000959db) area_vitu2_query_pane_g_ParamLimits

0xcb1c,	// (0x00092a82) area_vitu2_query_pane_t7_ParamLimits

0xcb1c,	// (0x00092a82) area_vitu2_query_pane_t7

0x9266,	// (0x0008f1cc) bg_button_pane_cp018_ParamLimits

0x9274,	// (0x0008f1da) bg_button_pane_cp021_ParamLimits

0x073c,	// (0x000866a2) bg_button_pane_cp022_ParamLimits

0x073c,	// (0x000866a2) bg_vkb2_func_pane_cp08_ParamLimits

0x9266,	// (0x0008f1cc) bg_vkb2_func_pane_cp06_ParamLimits

0x9274,	// (0x0008f1da) bg_vkb2_func_pane_cp07_ParamLimits

0x074d,	// (0x000866b3) input_focus_pane_cp09_ParamLimits

0xe866,	// (0x000947cc) cam6_autofocus_pane_ParamLimits

0xe866,	// (0x000947cc) cam6_autofocus_pane

0x9782,	// (0x0008f6e8) cam6_image_uncrop_pane_ParamLimits

0x9782,	// (0x0008f6e8) cam6_image_uncrop_pane

0x9791,	// (0x0008f6f7) cam6_indi_pane_ParamLimits

0x9791,	// (0x0008f6f7) cam6_indi_pane

0x97a7,	// (0x0008f70d) cam6_mode_pane_ParamLimits

0x97a7,	// (0x0008f70d) cam6_mode_pane

0x97b9,	// (0x0008f71f) cam6_timer_pane_ParamLimits

0x97b9,	// (0x0008f71f) cam6_timer_pane

0x97c5,	// (0x0008f72b) cam6_zoom_pane_ParamLimits

0x97c5,	// (0x0008f72b) cam6_zoom_pane

0x97d1,	// (0x0008f737) cam6_mode_pane_g1_ParamLimits

0x97d1,	// (0x0008f737) cam6_mode_pane_g1

0x97e1,	// (0x0008f747) cam6_mode_pane_g2_ParamLimits

0x97e1,	// (0x0008f747) cam6_mode_pane_g2

0x97f1,	// (0x0008f757) cam6_mode_pane_g3_ParamLimits

0x97f1,	// (0x0008f757) cam6_mode_pane_g3

0x9801,	// (0x0008f767) cam6_mode_pane_g4_ParamLimits

0x9801,	// (0x0008f767) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x00095ac3) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x00095ac3) cam6_mode_pane_g

0xcd40,	// (0x00092ca6) bg_tb_trans_pane_cp08_ParamLimits

0xcd40,	// (0x00092ca6) bg_tb_trans_pane_cp08

0xcd4e,	// (0x00092cb4) cam6_battery_pane_ParamLimits

0xcd4e,	// (0x00092cb4) cam6_battery_pane

0xcd64,	// (0x00092cca) cam6_indi_pane_g1_ParamLimits

0xcd64,	// (0x00092cca) cam6_indi_pane_g1

0xcd76,	// (0x00092cdc) cam6_indi_pane_g2_ParamLimits

0xcd76,	// (0x00092cdc) cam6_indi_pane_g2

0xcd88,	// (0x00092cee) cam6_indi_pane_g3_ParamLimits

0xcd88,	// (0x00092cee) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x00095acc) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x00095acc) cam6_indi_pane_g

0xcd9a,	// (0x00092d00) cam6_indi_pane_t1_ParamLimits

0xcd9a,	// (0x00092d00) cam6_indi_pane_t1

0x9811,	// (0x0008f777) cam6_autofocus_pane_g1

0x9819,	// (0x0008f77f) cam6_autofocus_pane_g2

0x9821,	// (0x0008f787) cam6_autofocus_pane_g3

0x9829,	// (0x0008f78f) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x00095ad3) cam6_autofocus_pane_g

0xcdc0,	// (0x00092d26) cam6_timer_pane_g1

0xcdc8,	// (0x00092d2e) cam6_timer_pane_t1

0xcdd6,	// (0x00092d3c) cam6_zoom_cont_pane

0xcdde,	// (0x00092d44) cam6_zoom_pane_g1

0xcde6,	// (0x00092d4c) cam6_zoom_pane_g2

0x9831,	// (0x0008f797) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x00095adc) cam6_zoom_pane_g

0xb794,	// (0x000916fa) cam6_battery_pane_g1

0xb794,	// (0x000916fa) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0009564d) cam6_battery_pane_g

0xcdee,	// (0x00092d54) cam6_zoom_cont_pane_g1

0xcdf7,	// (0x00092d5d) cam6_zoom_cont_pane_g2

0xce00,	// (0x00092d66) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x00095ae3) cam6_zoom_cont_pane_g

0x984e,	// (0x0008f7b4) cam6_mode_pane_cp_ParamLimits

0x984e,	// (0x0008f7b4) cam6_mode_pane_cp

0x97c5,	// (0x0008f72b) cam6_zoom_pane_cp_ParamLimits

0x97c5,	// (0x0008f72b) cam6_zoom_pane_cp

0x9860,	// (0x0008f7c6) vid6_image_uncrop_cif_pane_ParamLimits

0x9860,	// (0x0008f7c6) vid6_image_uncrop_cif_pane

0x9870,	// (0x0008f7d6) vid6_image_uncrop_nhd_pane_ParamLimits

0x9870,	// (0x0008f7d6) vid6_image_uncrop_nhd_pane

0x9782,	// (0x0008f6e8) vid6_image_uncrop_vga_pane_ParamLimits

0x9782,	// (0x0008f6e8) vid6_image_uncrop_vga_pane

0x987f,	// (0x0008f7e5) vid6_image_uncrop_wvga_pane_ParamLimits

0x987f,	// (0x0008f7e5) vid6_image_uncrop_wvga_pane

0x988e,	// (0x0008f7f4) vid6_indi_pane_ParamLimits

0x988e,	// (0x0008f7f4) vid6_indi_pane

0xcd40,	// (0x00092ca6) bg_tb_trans_pane_cp09_ParamLimits

0xcd40,	// (0x00092ca6) bg_tb_trans_pane_cp09

0xce18,	// (0x00092d7e) cam6_battery_pane_cp_ParamLimits

0xce18,	// (0x00092d7e) cam6_battery_pane_cp

0xce24,	// (0x00092d8a) vid6_indi_pane_g1_ParamLimits

0xce24,	// (0x00092d8a) vid6_indi_pane_g1

0xce36,	// (0x00092d9c) vid6_indi_pane_g2_ParamLimits

0xce36,	// (0x00092d9c) vid6_indi_pane_g2

0xce48,	// (0x00092dae) vid6_indi_pane_g3_ParamLimits

0xce48,	// (0x00092dae) vid6_indi_pane_g3

0xce5d,	// (0x00092dc3) vid6_indi_pane_g4_ParamLimits

0xce5d,	// (0x00092dc3) vid6_indi_pane_g4

0xce72,	// (0x00092dd8) vid6_indi_pane_g5_ParamLimits

0xce72,	// (0x00092dd8) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x00095aea) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x00095aea) vid6_indi_pane_g

0xce8c,	// (0x00092df2) vid6_indi_pane_t1_ParamLimits

0xce8c,	// (0x00092df2) vid6_indi_pane_t1

0xcea2,	// (0x00092e08) vid6_indi_pane_t2_ParamLimits

0xcea2,	// (0x00092e08) vid6_indi_pane_t2

0xceca,	// (0x00092e30) vid6_indi_pane_t3_ParamLimits

0xceca,	// (0x00092e30) vid6_indi_pane_t3

0xcef2,	// (0x00092e58) vid6_indi_pane_t4_ParamLimits

0xcef2,	// (0x00092e58) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x00095af5) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x00095af5) vid6_indi_pane_t

0xcf16,	// (0x00092e7c) wait_bar_pane_cp08

0x98a6,	// (0x0008f80c) main_cset_text2_pane_t1_ParamLimits

0x98a6,	// (0x0008f80c) main_cset_text2_pane_t1

0x9839,	// (0x0008f79f) listscroll_gen_pane_cp06_t1_ParamLimits

0x9839,	// (0x0008f79f) listscroll_gen_pane_cp06_t1

0xe04f,	// (0x00093fb5) main_cam6_set_pane

0xb9f4,	// (0x0009195a) bg_tb_trans_pane_cp06_ParamLimits

0xc4b9,	// (0x0009241f) cam4_indicators_pane_g1_ParamLimits

0xc4ca,	// (0x00092430) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x00095863) cam4_indicators_pane_g_ParamLimits

0xc4e8,	// (0x0009244e) cam4_indicators_pane_t1_ParamLimits

0xecd3,	// (0x00094c39) bg_tb_trans_pane_cp07_ParamLimits

0xc512,	// (0x00092478) vid4_indicators_pane_g1_ParamLimits

0xc526,	// (0x0009248c) vid4_indicators_pane_g2_ParamLimits

0xc53a,	// (0x000924a0) vid4_indicators_pane_g3_ParamLimits

0xc54b,	// (0x000924b1) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x00095875) vid4_indicators_pane_g_ParamLimits

0xc567,	// (0x000924cd) vid4_indicators_pane_t1_ParamLimits

0x93af,	// (0x0008f315) vid4_progress_pane_g1_ParamLimits

0x93c1,	// (0x0008f327) vid4_progress_pane_g2_ParamLimits

0xb392,	// (0x000912f8) vid4_progress_pane_g3_ParamLimits

0xe7ef,	// (0x00094755) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x00095a26) vid4_progress_pane_g_ParamLimits

0xe80d,	// (0x00094773) vid4_progress_pane_t1_ParamLimits

0xe822,	// (0x00094788) vid4_progress_pane_t2_ParamLimits

0xe838,	// (0x0009479e) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x00095a31) vid4_progress_pane_t_ParamLimits

0xe84e,	// (0x000947b4) wait_bar_pane_cp07_ParamLimits

0x98c5,	// (0x0008f82b) main_cam6_set_pane_g2_ParamLimits

0x98c5,	// (0x0008f82b) main_cam6_set_pane_g2

0x98e9,	// (0x0008f84f) main_cset6_listscroll_pane_ParamLimits

0x98e9,	// (0x0008f84f) main_cset6_listscroll_pane

0x9905,	// (0x0008f86b) main_cset6_slider_pane_ParamLimits

0x9905,	// (0x0008f86b) main_cset6_slider_pane

0x991b,	// (0x0008f881) main_cset6_text2_pane_ParamLimits

0x991b,	// (0x0008f881) main_cset6_text2_pane

0xcf25,	// (0x00092e8b) main_cset6_text_pane

0xcf2d,	// (0x00092e93) main_cset_list_pane_copy1_ParamLimits

0xcf2d,	// (0x00092e93) main_cset_list_pane_copy1

0xcf3d,	// (0x00092ea3) scroll_pane_cp028_copy1

0x9929,	// (0x0008f88f) cset_list_set_pane_copy1

0x993b,	// (0x0008f8a1) aid_position_infowindow_above_copy1

0x9943,	// (0x0008f8a9) aid_position_infowindow_below_copy1

0x994b,	// (0x0008f8b1) cset_list_set_pane_g1_copy1

0x078d,	// (0x000866f3) cset_list_set_pane_g3_copy1_ParamLimits

0x078d,	// (0x000866f3) cset_list_set_pane_g3_copy1

0x079c,	// (0x00086702) cset_list_set_pane_t1_copy1_ParamLimits

0x079c,	// (0x00086702) cset_list_set_pane_t1_copy1

0xecd3,	// (0x00094c39) list_highlight_pane_cp021_copy1_ParamLimits

0xecd3,	// (0x00094c39) list_highlight_pane_cp021_copy1

0xcf46,	// (0x00092eac) cset6_slider_pane_ParamLimits

0xcf46,	// (0x00092eac) cset6_slider_pane

0xcf72,	// (0x00092ed8) main_cset6_slider_pane_g1_ParamLimits

0xcf72,	// (0x00092ed8) main_cset6_slider_pane_g1

0x9953,	// (0x0008f8b9) main_cset6_slider_pane_g2_ParamLimits

0x9953,	// (0x0008f8b9) main_cset6_slider_pane_g2

0xcf9a,	// (0x00092f00) main_cset6_slider_pane_g3_ParamLimits

0xcf9a,	// (0x00092f00) main_cset6_slider_pane_g3

0x997b,	// (0x0008f8e1) main_cset6_slider_pane_g4_ParamLimits

0x997b,	// (0x0008f8e1) main_cset6_slider_pane_g4

0x9987,	// (0x0008f8ed) main_cset6_slider_pane_g5_ParamLimits

0x9987,	// (0x0008f8ed) main_cset6_slider_pane_g5

0xc71b,	// (0x00092681) main_cset6_slider_pane_g7_ParamLimits

0xc71b,	// (0x00092681) main_cset6_slider_pane_g7

0xc727,	// (0x0009268d) main_cset6_slider_pane_g8_ParamLimits

0xc727,	// (0x0009268d) main_cset6_slider_pane_g8

0x8b0b,	// (0x0008ea71) main_cset6_slider_pane_g9_ParamLimits

0x8b0b,	// (0x0008ea71) main_cset6_slider_pane_g9

0x8b17,	// (0x0008ea7d) main_cset6_slider_pane_g10_ParamLimits

0x8b17,	// (0x0008ea7d) main_cset6_slider_pane_g10

0x8b23,	// (0x0008ea89) main_cset6_slider_pane_g11_ParamLimits

0x8b23,	// (0x0008ea89) main_cset6_slider_pane_g11

0x8b2f,	// (0x0008ea95) main_cset6_slider_pane_g12_ParamLimits

0x8b2f,	// (0x0008ea95) main_cset6_slider_pane_g12

0x8b3b,	// (0x0008eaa1) main_cset6_slider_pane_g13_ParamLimits

0x8b3b,	// (0x0008eaa1) main_cset6_slider_pane_g13

0x8b47,	// (0x0008eaad) main_cset6_slider_pane_g14_ParamLimits

0x8b47,	// (0x0008eaad) main_cset6_slider_pane_g14

0x9993,	// (0x0008f8f9) main_cset6_slider_pane_g15_ParamLimits

0x9993,	// (0x0008f8f9) main_cset6_slider_pane_g15

0x8b6b,	// (0x0008ead1) main_cset6_slider_pane_g16_ParamLimits

0x8b6b,	// (0x0008ead1) main_cset6_slider_pane_g16

0x8b77,	// (0x0008eadd) main_cset6_slider_pane_g17_ParamLimits

0x8b77,	// (0x0008eadd) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x00095afe) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x00095afe) main_cset6_slider_pane_g

0xcfa6,	// (0x00092f0c) main_cset6_slider_pane_t1_ParamLimits

0xcfa6,	// (0x00092f0c) main_cset6_slider_pane_t1

0x99c3,	// (0x0008f929) main_cset6_slider_pane_t2_ParamLimits

0x99c3,	// (0x0008f929) main_cset6_slider_pane_t2

0x99ee,	// (0x0008f954) main_cset6_slider_pane_t3_ParamLimits

0x99ee,	// (0x0008f954) main_cset6_slider_pane_t3

0x9a19,	// (0x0008f97f) main_cset6_slider_pane_t4_ParamLimits

0x9a19,	// (0x0008f97f) main_cset6_slider_pane_t4

0x9a44,	// (0x0008f9aa) main_cset6_slider_pane_t5_ParamLimits

0x9a44,	// (0x0008f9aa) main_cset6_slider_pane_t5

0xcfe7,	// (0x00092f4d) main_cset6_slider_pane_t7_ParamLimits

0xcfe7,	// (0x00092f4d) main_cset6_slider_pane_t7

0x9a6f,	// (0x0008f9d5) main_cset6_slider_pane_t8_ParamLimits

0x9a6f,	// (0x0008f9d5) main_cset6_slider_pane_t8

0x9a93,	// (0x0008f9f9) main_cset6_slider_pane_t9_ParamLimits

0x9a93,	// (0x0008f9f9) main_cset6_slider_pane_t9

0x9ab7,	// (0x0008fa1d) main_cset6_slider_pane_t10_ParamLimits

0x9ab7,	// (0x0008fa1d) main_cset6_slider_pane_t10

0x9adb,	// (0x0008fa41) main_cset6_slider_pane_t11_ParamLimits

0x9adb,	// (0x0008fa41) main_cset6_slider_pane_t11

0xd01d,	// (0x00092f83) main_cset6_slider_pane_t14_ParamLimits

0xd01d,	// (0x00092f83) main_cset6_slider_pane_t14

0xd056,	// (0x00092fbc) main_cset6_slider_pane_t15_ParamLimits

0xd056,	// (0x00092fbc) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x00095b23) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x00095b23) main_cset6_slider_pane_t

0xc823,	// (0x00092789) cset_slider_pane_g1_copy1

0xc82c,	// (0x00092792) cset_slider_pane_g2_copy1

0xc835,	// (0x0009279b) cset_slider_pane_g3_copy1

0xe04f,	// (0x00093fb5) bg_popup_sub_pane_cp011_copy1

0xd08f,	// (0x00092ff5) main_cset_text_pane_g1_copy1

0xc8c0,	// (0x00092826) main_cset_text_pane_t1_copy1

0xc8ce,	// (0x00092834) main_cset_text_pane_t2_copy1

0xc8dc,	// (0x00092842) main_cset_text_pane_t3_copy1

0xc8ea,	// (0x00092850) main_cset_text_pane_t4_copy1

0xc8f8,	// (0x0009285e) main_cset_text_pane_t5_copy1

0xd097,	// (0x00092ffd) main_cset_text_pane_t6_copy1

0xd0a5,	// (0x0009300b) main_cset_text_pane_t7_copy1

0x9aff,	// (0x0008fa65) main_cset_text2_pane_t1_copy1

0xecd3,	// (0x00094c39) main_ncimui_pane

0x60c8,	// (0x0008c02e) popup_query_ncimui_window_ParamLimits

0x60c8,	// (0x0008c02e) popup_query_ncimui_window

0xba95,	// (0x000919fb) field_cale_ev2_pane_g4_ParamLimits

0xba95,	// (0x000919fb) field_cale_ev2_pane_g4

0x7de2,	// (0x0008dd48) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7de2,	// (0x0008dd48) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x00095801) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x00095801) cell_video_dialer_keypad_pane_g

0x7dfa,	// (0x0008dd60) cell_video_dialer_keypad_pane_t1

0xe04f,	// (0x00093fb5) bg_popup_window_pane_cp012

0x36d0,	// (0x00089636) heading_pane_cp06

0xd0d1,	// (0x00093037) ncim_query_content_pane

0xe04f,	// (0x00093fb5) bg_popup_heading_pane_cp01

0xd0d9,	// (0x0009303f) ncim_heading_pane_t1

0xd0e7,	// (0x0009304d) ncim_indicator_popup_pane

0xd0f9,	// (0x0009305f) ncim_query_button_pane

0xd10d,	// (0x00093073) ncim_query_content_pane_t1

0xd11f,	// (0x00093085) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x00095b67) ncim_query_content_pane_t

0xd159,	// (0x000930bf) ncim_query_list_pane

0xd16b,	// (0x000930d1) ncim_query_popup_pane

0xd0e7,	// (0x0009304d) ncim_indicator_popup_pane_ParamLimits

0x9c43,	// (0x0008fba9) ncim_query_content_pane_g1_ParamLimits

0x9c43,	// (0x0008fba9) ncim_query_content_pane_g1

0xd10d,	// (0x00093073) ncim_query_content_pane_t1_ParamLimits

0xd11f,	// (0x00093085) ncim_query_content_pane_t2_ParamLimits

0x9c4f,	// (0x0008fbb5) ncim_query_content_pane_t3_ParamLimits

0x9c4f,	// (0x0008fbb5) ncim_query_content_pane_t3

0x9c77,	// (0x0008fbdd) ncim_query_content_pane_t4_ParamLimits

0x9c77,	// (0x0008fbdd) ncim_query_content_pane_t4

0x9c9f,	// (0x0008fc05) ncim_query_content_pane_t5_ParamLimits

0x9c9f,	// (0x0008fc05) ncim_query_content_pane_t5

0xd131,	// (0x00093097) ncim_query_content_pane_t6_ParamLimits

0xd131,	// (0x00093097) ncim_query_content_pane_t6

0xfc01,	// (0x00095b67) ncim_query_content_pane_t_ParamLimits

0xd159,	// (0x000930bf) ncim_query_list_pane_ParamLimits

0xd16b,	// (0x000930d1) ncim_query_popup_pane_ParamLimits

0xd17f,	// (0x000930e5) wait_bar_pane_cp04

0xe04f,	// (0x00093fb5) input_focus_pane_cp011

0xd187,	// (0x000930ed) ncim_query_popup_pane_t1

0xd195,	// (0x000930fb) ncim_list_query_list_pane_ParamLimits

0xd195,	// (0x000930fb) ncim_list_query_list_pane

0xe04f,	// (0x00093fb5) bg_button_pane_cp027

0xd1a8,	// (0x0009310e) ncim_query_button_pane_g1

0xe04f,	// (0x00093fb5) list_highlight_pane_cp012

0xd1b2,	// (0x00093118) ncim_list_query_list_pane_g1

0xd1ba,	// (0x00093120) ncim_list_query_list_pane_t1

0xc4d9,	// (0x0009243f) cam4_indicators_pane_g3_ParamLimits

0xc4d9,	// (0x0009243f) cam4_indicators_pane_g3

0xc557,	// (0x000924bd) vid4_indicators_pane_g5_ParamLimits

0xc557,	// (0x000924bd) vid4_indicators_pane_g5

0xe7fe,	// (0x00094764) vid4_progress_pane_g5_ParamLimits

0xe7fe,	// (0x00094764) vid4_progress_pane_g5

0x9b31,	// (0x0008fa97) main_ncimui_pane_g1

0x9b97,	// (0x0008fafd) ncimui_group_query_pane_ParamLimits

0x9b97,	// (0x0008fafd) ncimui_group_query_pane

0x9bdf,	// (0x0008fb45) ncimui_list_pane_ParamLimits

0x9bdf,	// (0x0008fb45) ncimui_list_pane

0x9c06,	// (0x0008fb6c) ncimui_text_pane_ParamLimits

0x9c06,	// (0x0008fb6c) ncimui_text_pane

0x9cc7,	// (0x0008fc2d) ncimui_text_pane_t1_ParamLimits

0x9cc7,	// (0x0008fc2d) ncimui_text_pane_t1

0xd1c8,	// (0x0009312e) ncimui_list_single_graphic_pane_ParamLimits

0xd1c8,	// (0x0009312e) ncimui_list_single_graphic_pane

0x9ce5,	// (0x0008fc4b) ncimui_query_pane_ParamLimits

0x9ce5,	// (0x0008fc4b) ncimui_query_pane

0xe04f,	// (0x00093fb5) list_highlight_pane_cp013

0xd1d8,	// (0x0009313e) ncim_list_query_list_pane_t1_copy1

0xd1b2,	// (0x00093118) ncim_list_single_graphic_pane_g1

0xd1e6,	// (0x0009314c) ncim_query_button_pane_cp01

0xd1f2,	// (0x00093158) ncim_query_entry_pane_ParamLimits

0xd1f2,	// (0x00093158) ncim_query_entry_pane

0xd205,	// (0x0009316b) ncimui_query_pane_g1

0xd211,	// (0x00093177) ncimui_query_pane_t1_ParamLimits

0xd211,	// (0x00093177) ncimui_query_pane_t1

0xecd3,	// (0x00094c39) input_focus_pane_cp012

0xd22a,	// (0x00093190) ncim_query_entry_pane_t1

0xece1,	// (0x00094c47) main_im_pane_ParamLimits

0xecd3,	// (0x00094c39) main_mobtv_pane_ParamLimits

0xecd3,	// (0x00094c39) main_mobtv_pane

0x99ab,	// (0x0008f911) main_cset6_slider_pane_g18_ParamLimits

0x99ab,	// (0x0008f911) main_cset6_slider_pane_g18

0x99b7,	// (0x0008f91d) main_cset6_slider_pane_g19_ParamLimits

0x99b7,	// (0x0008f91d) main_cset6_slider_pane_g19

0xe874,	// (0x000947da) bg_main_mobtv_pane_ParamLimits

0xe874,	// (0x000947da) bg_main_mobtv_pane

0x9cf8,	// (0x0008fc5e) main_mobtv_info_pane

0x9d01,	// (0x0008fc67) main_mobtv_loading_pane_ParamLimits

0x9d01,	// (0x0008fc67) main_mobtv_loading_pane

0xd23c,	// (0x000931a2) main_mobtv_pg_channel_list_pane

0xd246,	// (0x000931ac) main_mobtv_pg_hdr_pane

0x9d0e,	// (0x0008fc74) main_mobtv_programe_curr_pane_ParamLimits

0x9d0e,	// (0x0008fc74) main_mobtv_programe_curr_pane

0x9d1b,	// (0x0008fc81) main_mobtv_programe_next_pane_ParamLimits

0x9d1b,	// (0x0008fc81) main_mobtv_programe_next_pane

0xd24f,	// (0x000931b5) popup_mobtv_noti_window

0xb794,	// (0x000916fa) main_tv_pg_hdr_pane_g1

0xd257,	// (0x000931bd) main_tv_pg_hdr_pane_g2

0xd25f,	// (0x000931c5) main_tv_pg_hdr_pane_g3

0xd267,	// (0x000931cd) main_tv_pg_hdr_pane_g4

0xd26f,	// (0x000931d5) main_tv_pg_hdr_pane_g5

0xd279,	// (0x000931df) main_tv_pg_hdr_pane_g6

0xd283,	// (0x000931e9) main_tv_pg_hdr_pane_g7

0xd28d,	// (0x000931f3) main_tv_pg_hdr_pane_g8

0xd297,	// (0x000931fd) main_tv_pg_hdr_pane_g9

0xd2a1,	// (0x00093207) main_tv_pg_hdr_pane_g10

0xd2ab,	// (0x00093211) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x00095b74) main_tv_pg_hdr_pane_g

0xd2b5,	// (0x0009321b) main_tv_pg_hdr_pane_t1

0xd2c3,	// (0x00093229) main_tv_pg_hdr_pane_t2

0xd2d1,	// (0x00093237) main_tv_pg_hdr_pane_t3

0xd2e1,	// (0x00093247) main_tv_pg_hdr_pane_t4

0xd2f1,	// (0x00093257) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x00095b8b) main_tv_pg_hdr_pane_t

0xd301,	// (0x00093267) single_mobtv_pg_channel_pane_ParamLimits

0xd301,	// (0x00093267) single_mobtv_pg_channel_pane

0xd313,	// (0x00093279) single_mobtv_pg_channel_table_pane

0xd31c,	// (0x00093282) single_mobtv_pg_channel_thumb_pane

0xd325,	// (0x0009328b) single_tv_pg_channel_pane_g1

0xd32e,	// (0x00093294) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x00095b96) single_tv_pg_channel_pane_g

0xb9f4,	// (0x0009195a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb9f4,	// (0x0009195a) bg_single_mobtv_pg_channel_thumb_pane

0xd337,	// (0x0009329d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd337,	// (0x0009329d) single_mobtv_pg_channel_thumb_pane_g1

0xd345,	// (0x000932ab) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd345,	// (0x000932ab) single_mobtv_pg_channel_thumb_pane_g2

0xd351,	// (0x000932b7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd351,	// (0x000932b7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x00095b9b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x00095b9b) single_mobtv_pg_channel_thumb_pane_g

0xd35d,	// (0x000932c3) single_mobtv_pg_channel_thumb_pane_t1

0xd36b,	// (0x000932d1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x00095ba2) single_mobtv_pg_channel_thumb_pane_t

0xb794,	// (0x000916fa) bg_single_mobtv_pg_channel_table_pane_g1

0xb794,	// (0x000916fa) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0009564d) bg_single_mobtv_pg_channel_table_pane_g

0xd379,	// (0x000932df) single_mobtv_pg_channel_table_pane_t1

0xd387,	// (0x000932ed) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x00095ba7) single_mobtv_pg_channel_table_pane_t

0x9d30,	// (0x0008fc96) main_mobtv_info_pane_g1_ParamLimits

0x9d30,	// (0x0008fc96) main_mobtv_info_pane_g1

0x9d4e,	// (0x0008fcb4) main_mobtv_info_pane_t1_ParamLimits

0x9d4e,	// (0x0008fcb4) main_mobtv_info_pane_t1

0x9dc6,	// (0x0008fd2c) main_mobtv_info_pane_t2_ParamLimits

0x9dc6,	// (0x0008fd2c) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x00095bb1) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x00095bb1) main_mobtv_info_pane_t

0x9e55,	// (0x0008fdbb) wait_bar_pane_cp05

0x9e67,	// (0x0008fdcd) main_mobtv_loading_pane_g1_ParamLimits

0x9e67,	// (0x0008fdcd) main_mobtv_loading_pane_g1

0x9e7a,	// (0x0008fde0) main_mobtv_loading_pane_g2_ParamLimits

0x9e7a,	// (0x0008fde0) main_mobtv_loading_pane_g2

0x9e86,	// (0x0008fdec) main_mobtv_loading_pane_g3_ParamLimits

0x9e86,	// (0x0008fdec) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x00095bb8) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x00095bb8) main_mobtv_loading_pane_g

0xd395,	// (0x000932fb) main_mobtv_loading_pane_t1_ParamLimits

0xd395,	// (0x000932fb) main_mobtv_loading_pane_t1

0xd3ad,	// (0x00093313) main_mobtv_loading_pane_t2_ParamLimits

0xd3ad,	// (0x00093313) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x00095bbf) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x00095bbf) main_mobtv_loading_pane_t

0x9e99,	// (0x0008fdff) wait_bar_pane_cp06_ParamLimits

0x9e99,	// (0x0008fdff) wait_bar_pane_cp06

0xd3d1,	// (0x00093337) main_mobtv_programe_curr_pane_t1

0xd3df,	// (0x00093345) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x00095bc4) main_mobtv_programe_curr_pane_t

0xd3ed,	// (0x00093353) main_mobtv_programe_next_pane_t1

0xd3fb,	// (0x00093361) main_mobtv_programe_next_pane_t2

0xd409,	// (0x0009336f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x00095bc9) main_mobtv_programe_next_pane_t

0xe04f,	// (0x00093fb5) bg_popup_mobtv_noti_window_pane

0xd417,	// (0x0009337d) popup_mobtv_noti_window_g1

0xd41f,	// (0x00093385) popup_mobtv_noti_window_t1

0xd42d,	// (0x00093393) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x00095bd0) popup_mobtv_noti_window_t

0xb794,	// (0x000916fa) bg_popup_mobtv_noti_window_pane_g1

0xe04f,	// (0x00093fb5) sc_clock_pane

0xe04f,	// (0x00093fb5) main_fs_bigclock_pane

0x95f7,	// (0x0008f55d) blid2_tripm_pane_t4_ParamLimits

0x95f7,	// (0x0008f55d) blid2_tripm_pane_t4

0x9ea8,	// (0x0008fe0e) sc_clock_pane_g1_ParamLimits

0x9ea8,	// (0x0008fe0e) sc_clock_pane_g1

0x9eba,	// (0x0008fe20) sc_clock_pane_t1_ParamLimits

0x9eba,	// (0x0008fe20) sc_clock_pane_t1

0x9edc,	// (0x0008fe42) sc_clock_pane_t2_ParamLimits

0x9edc,	// (0x0008fe42) sc_clock_pane_t2

0x9ef4,	// (0x0008fe5a) sc_clock_pane_t3_ParamLimits

0x9ef4,	// (0x0008fe5a) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x00095bd5) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x00095bd5) sc_clock_pane_t

0xa7ce,	// (0x00090734) main_fs_bigclock_indicator_pane_ParamLimits

0xa7ce,	// (0x00090734) main_fs_bigclock_indicator_pane

0xb9c4,	// (0x0009192a) main_fs_bigclock_pane_g1_ParamLimits

0xb9c4,	// (0x0009192a) main_fs_bigclock_pane_g1

0xa7da,	// (0x00090740) main_fs_bigclock_pane_t1_ParamLimits

0xa7da,	// (0x00090740) main_fs_bigclock_pane_t1

0xa7ec,	// (0x00090752) main_fs_bigclock_pane_t2_ParamLimits

0xa7ec,	// (0x00090752) main_fs_bigclock_pane_t2

0xa7fe,	// (0x00090764) main_fs_bigclock_pane_t3_ParamLimits

0xa7fe,	// (0x00090764) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00095dd9) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00095dd9) main_fs_bigclock_pane_t

0xdf75,	// (0x00093edb) main_fs_bigclock_indicator_pane_g1

0xd101,	// (0x00093067) ncim_query_content_pane_g2_ParamLimits

0xd101,	// (0x00093067) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x00095b62) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x00095b62) ncim_query_content_pane_g

0x9f0d,	// (0x0008fe73) sc_clock_pane_t4_ParamLimits

0x9f0d,	// (0x0008fe73) sc_clock_pane_t4

0xecd3,	// (0x00094c39) main_radioblah_pane

0xc40d,	// (0x00092373) cell_call4_button_pane_t1_copy1_ParamLimits

0xc40d,	// (0x00092373) cell_call4_button_pane_t1_copy1

0x9b49,	// (0x0008faaf) main_ncimui_pane_t1_ParamLimits

0x9b49,	// (0x0008faaf) main_ncimui_pane_t1

0x9b63,	// (0x0008fac9) main_ncimui_pane_t2_ParamLimits

0x9b63,	// (0x0008fac9) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x00095b5b) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x00095b5b) main_ncimui_pane_t

0xd568,	// (0x000934ce) main_radioblah_anim_pane_ParamLimits

0xd568,	// (0x000934ce) main_radioblah_anim_pane

0xd579,	// (0x000934df) main_radioblah_info_pane_ParamLimits

0xd579,	// (0x000934df) main_radioblah_info_pane

0xd58d,	// (0x000934f3) main_radioblah_pane_t1_ParamLimits

0xd58d,	// (0x000934f3) main_radioblah_pane_t1

0xd5a9,	// (0x0009350f) main_radioblah_pane_t2_ParamLimits

0xd5a9,	// (0x0009350f) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x00095bf6) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x00095bf6) main_radioblah_pane_t

0x9fc3,	// (0x0008ff29) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9fc3,	// (0x0008ff29) main_radioblah_rocker_ctrl_pane

0xd5f1,	// (0x00093557) main_radioblah_info_pane_t1_ParamLimits

0xd5f1,	// (0x00093557) main_radioblah_info_pane_t1

0xa01b,	// (0x0008ff81) main_radioblah_info_pane_t2_ParamLimits

0xa01b,	// (0x0008ff81) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x00095bff) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x00095bff) main_radioblah_info_pane_t

0xb794,	// (0x000916fa) main_radioblah_rocker_ctrl_pane_g1

0xa0cb,	// (0x00090031) main_radioblah_rocker_ctrl_pane_g2

0xa0d3,	// (0x00090039) main_radioblah_rocker_ctrl_pane_g3

0xa0db,	// (0x00090041) main_radioblah_rocker_ctrl_pane_g4

0xa0e3,	// (0x00090049) main_radioblah_rocker_ctrl_pane_g5

0xa0eb,	// (0x00090051) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x00095c08) main_radioblah_rocker_ctrl_pane_g

0x9aff,	// (0x0008fa65) main_cset_text2_pane_t1_copy1_ParamLimits

0xc497,	// (0x000923fd) cam4_image_uncrop_qvga_pane

0xc502,	// (0x00092468) vid4_image_uncrop_qcif_pane

0xe866,	// (0x000947cc) cam6_image_uncrop_qvga_pane_ParamLimits

0xe866,	// (0x000947cc) cam6_image_uncrop_qvga_pane

0xce08,	// (0x00092d6e) vid6_image_uncrop_qcif_pane_ParamLimits

0xce08,	// (0x00092d6e) vid6_image_uncrop_qcif_pane

0xe04f,	// (0x00093fb5) bg_popup_preview_window_pane_cp03

0xd0b3,	// (0x00093019) list_cset_text2_pane

0xd0bb,	// (0x00093021) main_cset6_text2_pane_g1

0xd0c3,	// (0x00093029) main_cset6_text2_pane_t1

0xa0f3,	// (0x00090059) list_cset_text2_pane_t1_ParamLimits

0xa0f3,	// (0x00090059) list_cset_text2_pane_t1

0xecd3,	// (0x00094c39) main_radioblah_pane_ParamLimits

0x9e41,	// (0x0008fda7) main_mobtv_info_pane_t3_ParamLimits

0x9e41,	// (0x0008fda7) main_mobtv_info_pane_t3

0x9fb1,	// (0x0008ff17) main_radioblah_pane_g1

0x9feb,	// (0x0008ff51) main_radioblah_info_pane_g1

0xa070,	// (0x0008ffd6) main_radioblah_info_pane_t3_ParamLimits

0xa070,	// (0x0008ffd6) main_radioblah_info_pane_t3

0x3176,	// (0x000890dc) highlight_cell_cale_month_pane_ParamLimits

0x3176,	// (0x000890dc) highlight_cell_cale_month_pane

0xe04f,	// (0x00093fb5) main_phob_fisheye_pane

0xbb44,	// (0x00091aaa) scroll_pane_cp0031_ParamLimits

0xbb44,	// (0x00091aaa) scroll_pane_cp0031

0xcf16,	// (0x00092e7c) wait_bar_pane_cp08_ParamLimits

0x9929,	// (0x0008f88f) cset_list_set_pane_copy1_ParamLimits

0xd62b,	// (0x00093591) highlight_cell_cale_month_pane_g1

0xa10e,	// (0x00090074) highlight_cell_cale_month_pane_t1

0xcb88,	// (0x00092aee) list_gen_pane_cp01

0xc706,	// (0x0009266c) scroll_pane_01

0x0882,	// (0x000867e8) list_single_double_fisheye_pane

0x088b,	// (0x000867f1) list_double_fisheye_pane_g1_ParamLimits

0x088b,	// (0x000867f1) list_double_fisheye_pane_g1

0x0897,	// (0x000867fd) list_double_fisheye_pane_g2_ParamLimits

0x0897,	// (0x000867fd) list_double_fisheye_pane_g2

0x08ab,	// (0x00086811) list_double_fisheye_pane_g3_ParamLimits

0x08ab,	// (0x00086811) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x00095c15) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x00095c15) list_double_fisheye_pane_g

0x08d4,	// (0x0008683a) list_double_fisheye_pane_t1_ParamLimits

0x08d4,	// (0x0008683a) list_double_fisheye_pane_t1

0x08ef,	// (0x00086855) list_double_fisheye_pane_t2_ParamLimits

0x08ef,	// (0x00086855) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x00095c20) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x00095c20) list_double_fisheye_pane_t

0xe04f,	// (0x00093fb5) main_call5_pane

0x9f38,	// (0x0008fe9e) sc_swipe_pane_ParamLimits

0x9f38,	// (0x0008fe9e) sc_swipe_pane

0xa12f,	// (0x00090095) call5_image_pane_ParamLimits

0xa12f,	// (0x00090095) call5_image_pane

0xa14c,	// (0x000900b2) call5_swipe_1_pane_ParamLimits

0xa14c,	// (0x000900b2) call5_swipe_1_pane

0xa15f,	// (0x000900c5) call5_swipe_2_pane_ParamLimits

0xa15f,	// (0x000900c5) call5_swipe_2_pane

0xa18a,	// (0x000900f0) popup_call5_audio_first_window_ParamLimits

0xa18a,	// (0x000900f0) popup_call5_audio_first_window

0xb9f4,	// (0x0009195a) call5_swipe_1_pane_g1_ParamLimits

0xb9f4,	// (0x0009195a) call5_swipe_1_pane_g1

0xd633,	// (0x00093599) call5_swipe_1_pane_g2_ParamLimits

0xd633,	// (0x00093599) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x00095c25) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x00095c25) call5_swipe_1_pane_g

0xd63f,	// (0x000935a5) call5_swipe_1_pane_t1_ParamLimits

0xd63f,	// (0x000935a5) call5_swipe_1_pane_t1

0xb9f4,	// (0x0009195a) call5_swipe_2_pane_g1_ParamLimits

0xb9f4,	// (0x0009195a) call5_swipe_2_pane_g1

0xd654,	// (0x000935ba) call5_swipe_2_pane_g2_ParamLimits

0xd654,	// (0x000935ba) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x00095c2a) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x00095c2a) call5_swipe_2_pane_g

0xd660,	// (0x000935c6) call5_swipe_2_pane_t1_ParamLimits

0xd660,	// (0x000935c6) call5_swipe_2_pane_t1

0xd675,	// (0x000935db) sc_swipe_pane_g1_ParamLimits

0xd675,	// (0x000935db) sc_swipe_pane_g1

0xd682,	// (0x000935e8) sc_swipe_pane_g2_ParamLimits

0xd682,	// (0x000935e8) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x00095c2f) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x00095c2f) sc_swipe_pane_g

0xd68e,	// (0x000935f4) sc_swipe_pane_t1_ParamLimits

0xd68e,	// (0x000935f4) sc_swipe_pane_t1

0xe04f,	// (0x00093fb5) main_cmail_launcher_pane

0xa19b,	// (0x00090101) aid_size_cell_cmail_l_ParamLimits

0xa19b,	// (0x00090101) aid_size_cell_cmail_l

0xa1b5,	// (0x0009011b) grid_cmail_l_pane_ParamLimits

0xa1b5,	// (0x0009011b) grid_cmail_l_pane

0xa1d0,	// (0x00090136) cell_cmail_l_pane_ParamLimits

0xa1d0,	// (0x00090136) cell_cmail_l_pane

0xa1f6,	// (0x0009015c) cell_cmail_l_pane_g1_ParamLimits

0xa1f6,	// (0x0009015c) cell_cmail_l_pane_g1

0xa207,	// (0x0009016d) cell_cmail_l_pane_t1_ParamLimits

0xa207,	// (0x0009016d) cell_cmail_l_pane_t1

0xd6a3,	// (0x00093609) cell_cmail_l_pane_t2_ParamLimits

0xd6a3,	// (0x00093609) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x00095c34) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x00095c34) cell_cmail_l_pane_t

0xecd3,	// (0x00094c39) grid_highlight_pane_cp018_ParamLimits

0xecd3,	// (0x00094c39) grid_highlight_pane_cp018

0x10a0,	// (0x00087006) main2_pane_ParamLimits

0x10a0,	// (0x00087006) main2_pane

0xed8c,	// (0x00094cf2) popup_sp_fs_action_menu_bg_pane_g1

0xed94,	// (0x00094cfa) popup_sp_fs_action_menu_bg_pane_g2

0xed9c,	// (0x00094d02) popup_sp_fs_action_menu_bg_pane_g3

0xeda4,	// (0x00094d0a) popup_sp_fs_action_menu_bg_pane_g4

0xedac,	// (0x00094d12) popup_sp_fs_action_menu_bg_pane_g5

0xedb4,	// (0x00094d1a) popup_sp_fs_action_menu_bg_pane_g6

0xedbc,	// (0x00094d22) popup_sp_fs_action_menu_bg_pane_g7

0xedc4,	// (0x00094d2a) popup_sp_fs_action_menu_bg_pane_g8

0xedcc,	// (0x00094d32) popup_sp_fs_action_menu_bg_pane_g9

0xedd4,	// (0x00094d3a) popup_sp_fs_action_menu_bg_pane_g10

0xedd4,	// (0x00094d3a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x000950f9) popup_sp_fs_action_menu_bg_pane_g

0x0219,	// (0x0008617f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x2_t3_g3_g1

0x0225,	// (0x0008618b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0225,	// (0x0008618b) list_medium_line_x2_t3_g3_g2

0x0231,	// (0x00086197) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0231,	// (0x00086197) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x000951a9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x000951a9) list_medium_line_x2_t3_g3_g

0x023d,	// (0x000861a3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x023d,	// (0x000861a3) list_medium_line_x2_t3_g3_t1

0x0252,	// (0x000861b8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0252,	// (0x000861b8) list_medium_line_x2_t3_g3_t2

0x0266,	// (0x000861cc) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0266,	// (0x000861cc) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x000951b0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x000951b0) list_medium_line_x2_t3_g3_t

0x0219,	// (0x0008617f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x2_t3_g2_g1

0x0231,	// (0x00086197) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0231,	// (0x00086197) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x000951b7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x000951b7) list_medium_line_x2_t3_g2_g

0x027b,	// (0x000861e1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x027b,	// (0x000861e1) list_medium_line_x2_t3_g2_t1

0x0291,	// (0x000861f7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0291,	// (0x000861f7) list_medium_line_x2_t3_g2_t2

0x02a3,	// (0x00086209) list_medium_line_x2_t3_g2_t3_ParamLimits

0x02a3,	// (0x00086209) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x000951bc) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x000951bc) list_medium_line_x2_t3_g2_t

0x0219,	// (0x0008617f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x2_t4_g4_g1

0x02c0,	// (0x00086226) list_medium_line_x2_t4_g4_g2_ParamLimits

0x02c0,	// (0x00086226) list_medium_line_x2_t4_g4_g2

0x0225,	// (0x0008618b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0225,	// (0x0008618b) list_medium_line_x2_t4_g4_g3

0x02cc,	// (0x00086232) list_medium_line_x2_t4_g4_g4_ParamLimits

0x02cc,	// (0x00086232) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x000951c3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x000951c3) list_medium_line_x2_t4_g4_g

0x02d8,	// (0x0008623e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x02d8,	// (0x0008623e) list_medium_line_x2_t4_g4_t1

0x02ef,	// (0x00086255) list_medium_line_x2_t4_g4_t2_ParamLimits

0x02ef,	// (0x00086255) list_medium_line_x2_t4_g4_t2

0x0304,	// (0x0008626a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0304,	// (0x0008626a) list_medium_line_x2_t4_g4_t3

0x0316,	// (0x0008627c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0316,	// (0x0008627c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x000951cc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x000951cc) list_medium_line_x2_t4_g4_t

0x0219,	// (0x0008617f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x2_t2_g4_g1

0x02c0,	// (0x00086226) list_medium_line_x2_t2_g4_g2_ParamLimits

0x02c0,	// (0x00086226) list_medium_line_x2_t2_g4_g2

0x0225,	// (0x0008618b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0225,	// (0x0008618b) list_medium_line_x2_t2_g4_g3

0x0231,	// (0x00086197) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0231,	// (0x00086197) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x00095233) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x00095233) list_medium_line_x2_t2_g4_g

0x0328,	// (0x0008628e) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0328,	// (0x0008628e) list_medium_line_x2_t2_g4_t1

0x0266,	// (0x000861cc) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0266,	// (0x000861cc) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0009523c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0009523c) list_medium_line_x2_t2_g4_t

0x0219,	// (0x0008617f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x2_t2_g3_g1

0x0225,	// (0x0008618b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0225,	// (0x0008618b) list_medium_line_x2_t2_g3_g2

0x0231,	// (0x00086197) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0231,	// (0x00086197) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x000951a9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x000951a9) list_medium_line_x2_t2_g3_g

0x033d,	// (0x000862a3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x033d,	// (0x000862a3) list_medium_line_x2_t2_g3_t1

0x0266,	// (0x000861cc) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0266,	// (0x000861cc) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x00095241) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x00095241) list_medium_line_x2_t2_g3_t

0x34fa,	// (0x00089460) main_sp_fs_list_pane_ParamLimits

0x34fa,	// (0x00089460) main_sp_fs_list_pane

0x3506,	// (0x0008946c) sp_fs_scroll_pane_ParamLimits

0x3506,	// (0x0008946c) sp_fs_scroll_pane

0x0352,	// (0x000862b8) list_medium_line_x2_t3_t1

0x0362,	// (0x000862c8) list_medium_line_x2_t3_t2

0x0370,	// (0x000862d6) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0009528c) list_medium_line_x2_t3_t

0x037e,	// (0x000862e4) list_medium_line_x3_t4_t1

0x038e,	// (0x000862f4) list_medium_line_x3_t4_t2

0x039c,	// (0x00086302) list_medium_line_x3_t4_t3

0x0370,	// (0x000862d6) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x00095293) list_medium_line_x3_t4_t

0x03aa,	// (0x00086310) list_medium_line_x4_t5_t1

0x03ba,	// (0x00086320) list_medium_line_x4_t5_t2

0x039c,	// (0x00086302) list_medium_line_x4_t5_t3

0x03c8,	// (0x0008632e) list_medium_line_x4_t5_t4

0x0370,	// (0x000862d6) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0009529c) list_medium_line_x4_t5_t

0x0219,	// (0x0008617f) list_medium_line_t4_g4_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_t4_g4_g1

0x02cc,	// (0x00086232) list_medium_line_t4_g4_g2_ParamLimits

0x02cc,	// (0x00086232) list_medium_line_t4_g4_g2

0x03d6,	// (0x0008633c) list_medium_line_t4_g4_g3_ParamLimits

0x03d6,	// (0x0008633c) list_medium_line_t4_g4_g3

0x0231,	// (0x00086197) list_medium_line_t4_g4_g4_ParamLimits

0x0231,	// (0x00086197) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x000952a7) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x000952a7) list_medium_line_t4_g4_g

0x03e2,	// (0x00086348) list_medium_line_t4_g4_t1_ParamLimits

0x03e2,	// (0x00086348) list_medium_line_t4_g4_t1

0x03f7,	// (0x0008635d) list_medium_line_t4_g4_t2_ParamLimits

0x03f7,	// (0x0008635d) list_medium_line_t4_g4_t2

0x040c,	// (0x00086372) list_medium_line_t4_g4_t3_ParamLimits

0x040c,	// (0x00086372) list_medium_line_t4_g4_t3

0x0266,	// (0x000861cc) list_medium_line_t4_g4_t4_ParamLimits

0x0266,	// (0x000861cc) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x000952b0) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x000952b0) list_medium_line_t4_g4_t

0x383f,	// (0x000897a5) chi_dic_find_pane_g1

0x5ea0,	// (0x0008be06) main_tport_pane

0x05fd,	// (0x00086563) list_medium_line_plain_t1

0x060b,	// (0x00086571) list_medium_line_t2_g2_g1_ParamLimits

0x060b,	// (0x00086571) list_medium_line_t2_g2_g1

0x8ec2,	// (0x0008ee28) list_medium_line_t2_g2_g2_ParamLimits

0x8ec2,	// (0x0008ee28) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0009596c) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0009596c) list_medium_line_t2_g2_g

0x0617,	// (0x0008657d) list_medium_line_t2_g2_t1_ParamLimits

0x0617,	// (0x0008657d) list_medium_line_t2_g2_t1

0x0631,	// (0x00086597) list_medium_line_t2_g2_t2_ParamLimits

0x0631,	// (0x00086597) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x00095971) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x00095971) list_medium_line_t2_g2_t

0xcb91,	// (0x00092af7) aid_sp_fs_list_icon_a_sm

0xe85e,	// (0x000947c4) aid_sp_fs_list_icon_d

0xf0ca,	// (0x00095030) aid_sp_fs_text_primary

0xcb99,	// (0x00092aff) aid_sp_fs_text_secondary

0x93d3,	// (0x0008f339) list_medium_line

0x93d3,	// (0x0008f339) list_medium_line_g2

0x93d3,	// (0x0008f339) list_medium_line_g3

0x93d3,	// (0x0008f339) list_medium_line_plain

0x93d3,	// (0x0008f339) list_medium_line_plain_t2

0x93d3,	// (0x0008f339) list_medium_line_plain_t3

0x93d3,	// (0x0008f339) list_medium_line_right_icon

0x93d3,	// (0x0008f339) list_medium_line_right_iconx2

0x93d3,	// (0x0008f339) list_medium_line_t2

0x93d3,	// (0x0008f339) list_medium_line_t2_g2

0x93d3,	// (0x0008f339) list_medium_line_t2_g3

0x93d3,	// (0x0008f339) list_medium_line_t2_right_icon

0x93d3,	// (0x0008f339) list_medium_line_t2_right_iconx2

0x93d3,	// (0x0008f339) list_medium_line_t3

0x93d3,	// (0x0008f339) list_medium_line_t3_g2

0x93d3,	// (0x0008f339) list_medium_line_t3_g3

0x93d3,	// (0x0008f339) list_medium_line_t3_right_iconx2

0x075e,	// (0x000866c4) list_medium_line_t4_g4

0x0767,	// (0x000866cd) list_medium_line_x2

0x0767,	// (0x000866cd) list_medium_line_x2_t2_g2

0x0767,	// (0x000866cd) list_medium_line_x2_t2_g3

0x0767,	// (0x000866cd) list_medium_line_x2_t2_g4

0x0767,	// (0x000866cd) list_medium_line_x2_t3

0x0767,	// (0x000866cd) list_medium_line_x2_t3_g2

0x0767,	// (0x000866cd) list_medium_line_x2_t3_g3

0x0767,	// (0x000866cd) list_medium_line_x2_t3_g4

0x0767,	// (0x000866cd) list_medium_line_x2_t4_g2

0x0767,	// (0x000866cd) list_medium_line_x2_t4_g4

0x0770,	// (0x000866d6) list_medium_line_x3

0x0770,	// (0x000866d6) list_medium_line_x3_t4

0x0770,	// (0x000866d6) list_medium_line_x3_t4_g4

0x075e,	// (0x000866c4) list_medium_line_x4_t4

0x075e,	// (0x000866c4) list_medium_line_x4_t4_g7

0x075e,	// (0x000866c4) list_medium_line_x4_t5

0x0779,	// (0x000866df) list_single_fs_dyc_pane_ParamLimits

0x0779,	// (0x000866df) list_single_fs_dyc_pane

0x0219,	// (0x0008617f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x4_t4_g7_g1

0x07b1,	// (0x00086717) list_medium_line_x4_t4_g7_g2_ParamLimits

0x07b1,	// (0x00086717) list_medium_line_x4_t4_g7_g2

0x07bd,	// (0x00086723) list_medium_line_x4_t4_g7_g3_ParamLimits

0x07bd,	// (0x00086723) list_medium_line_x4_t4_g7_g3

0x07cc,	// (0x00086732) list_medium_line_x4_t4_g7_g4_ParamLimits

0x07cc,	// (0x00086732) list_medium_line_x4_t4_g7_g4

0x07d8,	// (0x0008673e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x07d8,	// (0x0008673e) list_medium_line_x4_t4_g7_g5

0x07e7,	// (0x0008674d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07e7,	// (0x0008674d) list_medium_line_x4_t4_g7_g6

0x07f6,	// (0x0008675c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07f6,	// (0x0008675c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x00095b3c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x00095b3c) list_medium_line_x4_t4_g7_g

0x0802,	// (0x00086768) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0802,	// (0x00086768) list_medium_line_x4_t4_g7_t1

0x0817,	// (0x0008677d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0817,	// (0x0008677d) list_medium_line_x4_t4_g7_t2

0x082c,	// (0x00086792) list_medium_line_x4_t4_g7_t3_ParamLimits

0x082c,	// (0x00086792) list_medium_line_x4_t4_g7_t3

0x0841,	// (0x000867a7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0841,	// (0x000867a7) list_medium_line_x4_t4_g7_t4

0x0853,	// (0x000867b9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0853,	// (0x000867b9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x00095b4b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x00095b4b) list_medium_line_x4_t4_g7_t

0x0865,	// (0x000867cb) list_single_dyc_row_pane_ParamLimits

0x0865,	// (0x000867cb) list_single_dyc_row_pane

0xa11c,	// (0x00090082) call5_gesture_pane_ParamLimits

0xa11c,	// (0x00090082) call5_gesture_pane

0xa172,	// (0x000900d8) call5_windows_pane_ParamLimits

0xa172,	// (0x000900d8) call5_windows_pane

0xa21d,	// (0x00090183) call5_swipe_1_pane_cp_ParamLimits

0xa21d,	// (0x00090183) call5_swipe_1_pane_cp

0xa229,	// (0x0009018f) call5_swipe_2_pane_cp_ParamLimits

0xa229,	// (0x0009018f) call5_swipe_2_pane_cp

0x3cc0,	// (0x00089c26) call5_image_pane_cp

0xa235,	// (0x0009019b) popup_call5_audio_first_window_cp_ParamLimits

0xa235,	// (0x0009019b) popup_call5_audio_first_window_cp

0xd675,	// (0x000935db) call5_swipe_1_pane_g1_cp_ParamLimits

0xd675,	// (0x000935db) call5_swipe_1_pane_g1_cp

0xd6b5,	// (0x0009361b) call5_swipe_1_pane_g2_cp

0xd68e,	// (0x000935f4) call5_swipe_1_pane_t1_cp_ParamLimits

0xd68e,	// (0x000935f4) call5_swipe_1_pane_t1_cp

0xd675,	// (0x000935db) call5_swipe_2_pane_g1_cp_ParamLimits

0xd675,	// (0x000935db) call5_swipe_2_pane_g1_cp

0xd6bd,	// (0x00093623) call5_swipe_2_pane_g2_cp

0xd6c5,	// (0x0009362b) call5_swipe_2_pane_t1_cp_ParamLimits

0xd6c5,	// (0x0009362b) call5_swipe_2_pane_t1_cp

0xecd3,	// (0x00094c39) main_sp_fs_email_pane

0xd6da,	// (0x00093640) main_sp_fs_listscroll_pane_te

0xe882,	// (0x000947e8) popup_sp_fs_action_menu_pane_ParamLimits

0xe882,	// (0x000947e8) popup_sp_fs_action_menu_pane

0xb794,	// (0x000916fa) bg_sp_fs_ctrlbar_pane_g1

0xd6e3,	// (0x00093649) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd6ec,	// (0x00093652) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd6f5,	// (0x0009365b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb794,	// (0x000916fa) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x00095c39) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb577,	// (0x000914dd) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb577,	// (0x000914dd) bg_sp_fs_ctrlbar_ddmenu_pane

0xd6fe,	// (0x00093664) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd6fe,	// (0x00093664) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd70a,	// (0x00093670) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd70a,	// (0x00093670) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x00095c42) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x00095c42) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd716,	// (0x0009367c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd716,	// (0x0009367c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa243,	// (0x000901a9) list_medium_line_t2_right_icon_g1

0x0911,	// (0x00086877) list_medium_line_t2_right_icon_t1

0x0921,	// (0x00086887) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x00095c47) list_medium_line_t2_right_icon_t

0x5e7e,	// (0x0008bde4) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5e7e,	// (0x0008bde4) bg_sp_fs_ctrlbar_pane

0xa293,	// (0x000901f9) main_sp_fs_ctrlbar_button_pane_cp01

0xa29d,	// (0x00090203) main_sp_fs_ctrlbar_ddmenu_pane

0xd768,	// (0x000936ce) main_sp_fs_ctrlbar_pane_g1

0xd774,	// (0x000936da) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x00095c4c) main_sp_fs_ctrlbar_pane_g

0xd780,	// (0x000936e6) main_sp_fs_ctrlbar_pane_t1

0xa2a7,	// (0x0009020d) main_sp_fs_ctrlbar_pane

0xa2cb,	// (0x00090231) main_sp_fs_listscroll_pane_te_cp01

0x0933,	// (0x00086899) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0933,	// (0x00086899) popup_sp_fs_action_menu_pane_cp01

0xecd3,	// (0x00094c39) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xecd3,	// (0x00094c39) bg_sp_fs_highlight_list_pane_cp01

0xd7b0,	// (0x00093716) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd7b0,	// (0x00093716) sp_fs_action_menu_list_gene_pane_g1

0xd7bf,	// (0x00093725) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd7bf,	// (0x00093725) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x00095c56) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x00095c56) sp_fs_action_menu_list_gene_pane_g

0xd7cc,	// (0x00093732) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd7cc,	// (0x00093732) sp_fs_action_menu_list_gene_pane_t1

0xd7e4,	// (0x0009374a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd7e4,	// (0x0009374a) sp_fs_action_menu_list_gene_pane

0xd803,	// (0x00093769) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd803,	// (0x00093769) popup_sp_fs_action_menu_bg_pane

0xd811,	// (0x00093777) sp_fs_action_menu_list_pane_ParamLimits

0xd811,	// (0x00093777) sp_fs_action_menu_list_pane

0xe8c4,	// (0x0009482a) sp_fs_scroll_pane_cp01_ParamLimits

0xe8c4,	// (0x0009482a) sp_fs_scroll_pane_cp01

0x0963,	// (0x000868c9) list_medium_line_plain_t2_t1

0x0973,	// (0x000868d9) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x00095c5b) list_medium_line_plain_t2_t

0x0983,	// (0x000868e9) list_medium_line_plain_t3_t1

0x0993,	// (0x000868f9) list_medium_line_plain_t3_t2

0x09a1,	// (0x00086907) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x00095c60) list_medium_line_plain_t3_t

0x0219,	// (0x0008617f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x2_t2_g2_g1

0x0231,	// (0x00086197) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0231,	// (0x00086197) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x000951b7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x000951b7) list_medium_line_x2_t2_g2_g

0x03e2,	// (0x00086348) list_medium_line_x2_t2_g2_t1_ParamLimits

0x03e2,	// (0x00086348) list_medium_line_x2_t2_g2_t1

0x0266,	// (0x000861cc) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0266,	// (0x000861cc) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x00095c67) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x00095c67) list_medium_line_x2_t2_g2_t

0x0219,	// (0x0008617f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x2_t4_g2_g1

0x09af,	// (0x00086915) list_medium_line_x2_t4_g2_g2_ParamLimits

0x09af,	// (0x00086915) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x00095c6c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x00095c6c) list_medium_line_x2_t4_g2_g

0x09c1,	// (0x00086927) list_medium_line_x2_t4_g2_t1_ParamLimits

0x09c1,	// (0x00086927) list_medium_line_x2_t4_g2_t1

0x09db,	// (0x00086941) list_medium_line_x2_t4_g2_t2_ParamLimits

0x09db,	// (0x00086941) list_medium_line_x2_t4_g2_t2

0x09f0,	// (0x00086956) list_medium_line_x2_t4_g2_t3_ParamLimits

0x09f0,	// (0x00086956) list_medium_line_x2_t4_g2_t3

0x0266,	// (0x000861cc) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0266,	// (0x000861cc) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x00095c71) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x00095c71) list_medium_line_x2_t4_g2_t

0xa2eb,	// (0x00090251) list_medium_line_t3_right_iconx2_g1

0xa243,	// (0x000901a9) list_medium_line_t3_right_iconx2_g2

0x0a05,	// (0x0008696b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x00095c7a) list_medium_line_t3_right_iconx2_g

0x0a0f,	// (0x00086975) list_medium_line_t3_right_iconx2_t1

0x0a1f,	// (0x00086985) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x00095c81) list_medium_line_t3_right_iconx2_t

0x0219,	// (0x0008617f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x3_t4_g4_g1

0x0225,	// (0x0008618b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0225,	// (0x0008618b) list_medium_line_x3_t4_g4_g2

0x02cc,	// (0x00086232) list_medium_line_x3_t4_g4_g3_ParamLimits

0x02cc,	// (0x00086232) list_medium_line_x3_t4_g4_g3

0x0a2d,	// (0x00086993) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0a2d,	// (0x00086993) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x00095c86) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x00095c86) list_medium_line_x3_t4_g4_g

0x0a39,	// (0x0008699f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a39,	// (0x0008699f) list_medium_line_x3_t4_g4_t1

0x0a50,	// (0x000869b6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a50,	// (0x000869b6) list_medium_line_x3_t4_g4_t2

0x03f7,	// (0x0008635d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x03f7,	// (0x0008635d) list_medium_line_x3_t4_g4_t3

0x0a6b,	// (0x000869d1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a6b,	// (0x000869d1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x00095c8f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x00095c8f) list_medium_line_x3_t4_g4_t

0x0a88,	// (0x000869ee) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a88,	// (0x000869ee) list_single_dyc_row_text_pane_t1

0x0ad1,	// (0x00086a37) list_single_dyc_row_text_pane_t2_ParamLimits

0x0ad1,	// (0x00086a37) list_single_dyc_row_text_pane_t2

0xd831,	// (0x00093797) list_single_dyc_row_text_pane_t3_ParamLimits

0xd831,	// (0x00093797) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x00095c98) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x00095c98) list_single_dyc_row_text_pane_t

0xd843,	// (0x000937a9) list_single_dyc_row_pane_g1_ParamLimits

0xd843,	// (0x000937a9) list_single_dyc_row_pane_g1

0xd84f,	// (0x000937b5) list_single_dyc_row_pane_g2_ParamLimits

0xd84f,	// (0x000937b5) list_single_dyc_row_pane_g2

0xd85b,	// (0x000937c1) list_single_dyc_row_pane_g3_ParamLimits

0xd85b,	// (0x000937c1) list_single_dyc_row_pane_g3

0xd867,	// (0x000937cd) list_single_dyc_row_pane_g4_ParamLimits

0xd867,	// (0x000937cd) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00095c9f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00095c9f) list_single_dyc_row_pane_g

0xd873,	// (0x000937d9) list_single_dyc_row_text_pane_ParamLimits

0xd873,	// (0x000937d9) list_single_dyc_row_text_pane

0xe04f,	// (0x00093fb5) bg_sp_fs_scroll_pane

0xd892,	// (0x000937f8) thumb_sp_fs_scroll_pane

0x060b,	// (0x00086571) list_medium_line_g1_ParamLimits

0x060b,	// (0x00086571) list_medium_line_g1

0x0b2b,	// (0x00086a91) list_medium_line_t1_ParamLimits

0x0b2b,	// (0x00086a91) list_medium_line_t1

0x0219,	// (0x0008617f) list_medium_line_x2_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x2_g1

0x0225,	// (0x0008618b) list_medium_line_x2_g2_ParamLimits

0x0225,	// (0x0008618b) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00095ca8) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00095ca8) list_medium_line_x2_g

0xd89b,	// (0x00093801) list_medium_line_x2_t1_ParamLimits

0xd89b,	// (0x00093801) list_medium_line_x2_t1

0x0219,	// (0x0008617f) list_medium_line_x3_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x3_g1

0x0225,	// (0x0008618b) list_medium_line_x3_g2_ParamLimits

0x0225,	// (0x0008618b) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00095ca8) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00095ca8) list_medium_line_x3_g

0xd89b,	// (0x00093801) list_medium_line_x3_t1_ParamLimits

0xd89b,	// (0x00093801) list_medium_line_x3_t1

0xd8b1,	// (0x00093817) thumb_sp_fs_scroll_pane_g1

0xd8ba,	// (0x00093820) thumb_sp_fs_scroll_pane_g2

0xd8c3,	// (0x00093829) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00095cad) thumb_sp_fs_scroll_pane_g

0xd8b1,	// (0x00093817) bg_sp_fs_scroll_pane_g1

0xd8ba,	// (0x00093820) bg_sp_fs_scroll_pane_g2

0xd8c3,	// (0x00093829) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00095cad) bg_sp_fs_scroll_pane_g

0x0219,	// (0x0008617f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0219,	// (0x0008617f) list_medium_line_x2_t3_g4_g1

0x02c0,	// (0x00086226) list_medium_line_x2_t3_g4_g2_ParamLimits

0x02c0,	// (0x00086226) list_medium_line_x2_t3_g4_g2

0x0225,	// (0x0008618b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0225,	// (0x0008618b) list_medium_line_x2_t3_g4_g3

0x0231,	// (0x00086197) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0231,	// (0x00086197) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x00095233) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x00095233) list_medium_line_x2_t3_g4_g

0x0b40,	// (0x00086aa6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0b40,	// (0x00086aa6) list_medium_line_x2_t3_g4_t1

0x0b5a,	// (0x00086ac0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0b5a,	// (0x00086ac0) list_medium_line_x2_t3_g4_t2

0x0266,	// (0x000861cc) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0266,	// (0x000861cc) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00095cb4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00095cb4) list_medium_line_x2_t3_g4_t

0x060b,	// (0x00086571) list_medium_line_g2_g1_ParamLimits

0x060b,	// (0x00086571) list_medium_line_g2_g1

0x8ec2,	// (0x0008ee28) list_medium_line_g2_g2_ParamLimits

0x8ec2,	// (0x0008ee28) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0009596c) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0009596c) list_medium_line_g2_g

0x0b73,	// (0x00086ad9) list_medium_line_g2_t1_ParamLimits

0x0b73,	// (0x00086ad9) list_medium_line_g2_t1

0x060b,	// (0x00086571) list_medium_line_t3_g2_g1_ParamLimits

0x060b,	// (0x00086571) list_medium_line_t3_g2_g1

0x8ec2,	// (0x0008ee28) list_medium_line_t3_g2_g2_ParamLimits

0x8ec2,	// (0x0008ee28) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0009596c) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0009596c) list_medium_line_t3_g2_g

0x0b88,	// (0x00086aee) list_medium_line_t3_g2_t1_ParamLimits

0x0b88,	// (0x00086aee) list_medium_line_t3_g2_t1

0x0b9f,	// (0x00086b05) list_medium_line_t3_g2_t2_ParamLimits

0x0b9f,	// (0x00086b05) list_medium_line_t3_g2_t2

0x0bb4,	// (0x00086b1a) list_medium_line_t3_g2_t3_ParamLimits

0x0bb4,	// (0x00086b1a) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00095cbb) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00095cbb) list_medium_line_t3_g2_t

0xa243,	// (0x000901a9) list_medium_line_right_icon_g1

0x0bcd,	// (0x00086b33) list_medium_line_right_icon_t1

0x060b,	// (0x00086571) list_medium_line_t2_g1_ParamLimits

0x060b,	// (0x00086571) list_medium_line_t2_g1

0x0bdb,	// (0x00086b41) list_medium_line_t2_t1_ParamLimits

0x0bdb,	// (0x00086b41) list_medium_line_t2_t1

0x0bf5,	// (0x00086b5b) list_medium_line_t2_t2_ParamLimits

0x0bf5,	// (0x00086b5b) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00095cc2) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00095cc2) list_medium_line_t2_t

0x060b,	// (0x00086571) list_medium_line_t3_g1_ParamLimits

0x060b,	// (0x00086571) list_medium_line_t3_g1

0x0c0e,	// (0x00086b74) list_medium_line_t3_t1_ParamLimits

0x0c0e,	// (0x00086b74) list_medium_line_t3_t1

0x0c28,	// (0x00086b8e) list_medium_line_t3_t2_ParamLimits

0x0c28,	// (0x00086b8e) list_medium_line_t3_t2

0x0c3d,	// (0x00086ba3) list_medium_line_t3_t3_ParamLimits

0x0c3d,	// (0x00086ba3) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00095cc7) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00095cc7) list_medium_line_t3_t

0x060b,	// (0x00086571) list_medium_line_g3_g1_ParamLimits

0x060b,	// (0x00086571) list_medium_line_g3_g1

0xa2f3,	// (0x00090259) list_medium_line_g3_g2_ParamLimits

0xa2f3,	// (0x00090259) list_medium_line_g3_g2

0x8ec2,	// (0x0008ee28) list_medium_line_g3_g3_ParamLimits

0x8ec2,	// (0x0008ee28) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00095cce) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00095cce) list_medium_line_g3_g

0x0c52,	// (0x00086bb8) list_medium_line_g3_t1_ParamLimits

0x0c52,	// (0x00086bb8) list_medium_line_g3_t1

0x060b,	// (0x00086571) list_medium_line_t2_g3_g1_ParamLimits

0x060b,	// (0x00086571) list_medium_line_t2_g3_g1

0xa2f3,	// (0x00090259) list_medium_line_t2_g3_g2_ParamLimits

0xa2f3,	// (0x00090259) list_medium_line_t2_g3_g2

0x8ec2,	// (0x0008ee28) list_medium_line_t2_g3_g3_ParamLimits

0x8ec2,	// (0x0008ee28) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00095cce) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00095cce) list_medium_line_t2_g3_g

0x0c67,	// (0x00086bcd) list_medium_line_t2_g3_t1_ParamLimits

0x0c67,	// (0x00086bcd) list_medium_line_t2_g3_t1

0x0c7e,	// (0x00086be4) list_medium_line_t2_g3_t2_ParamLimits

0x0c7e,	// (0x00086be4) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00095cd5) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00095cd5) list_medium_line_t2_g3_t

0x060b,	// (0x00086571) list_medium_line_t3_g3_g1_ParamLimits

0x060b,	// (0x00086571) list_medium_line_t3_g3_g1

0xa2f3,	// (0x00090259) list_medium_line_t3_g3_g2_ParamLimits

0xa2f3,	// (0x00090259) list_medium_line_t3_g3_g2

0x8ec2,	// (0x0008ee28) list_medium_line_t3_g3_g3_ParamLimits

0x8ec2,	// (0x0008ee28) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00095cce) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00095cce) list_medium_line_t3_g3_g

0x0c99,	// (0x00086bff) list_medium_line_t3_g3_t1_ParamLimits

0x0c99,	// (0x00086bff) list_medium_line_t3_g3_t1

0x0cad,	// (0x00086c13) list_medium_line_t3_g3_t2_ParamLimits

0x0cad,	// (0x00086c13) list_medium_line_t3_g3_t2

0x0cbf,	// (0x00086c25) list_medium_line_t3_g3_t3_ParamLimits

0x0cbf,	// (0x00086c25) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00095cda) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00095cda) list_medium_line_t3_g3_t

0xa2eb,	// (0x00090251) list_medium_line_right_iconx2_g1

0xa243,	// (0x000901a9) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00095ce1) list_medium_line_right_iconx2_g

0xa2ff,	// (0x00090265) list_medium_line_right_iconx2_t1

0xa2eb,	// (0x00090251) list_medium_line_t2_right_iconx2_g1

0xa243,	// (0x000901a9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00095ce1) list_medium_line_t2_right_iconx2_g

0x0cd3,	// (0x00086c39) list_medium_line_t2_right_iconx2_t1

0x0ce3,	// (0x00086c49) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00095ce6) list_medium_line_t2_right_iconx2_t

0x0cf5,	// (0x00086c5b) list_medium_line_x4_t4_t1

0x0d03,	// (0x00086c69) list_medium_line_x4_t4_t2

0x0d13,	// (0x00086c79) list_medium_line_x4_t4_t3

0x0d23,	// (0x00086c89) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00095ceb) list_medium_line_x4_t4_t

0xa350,	// (0x000902b6) tport_appsw_pane_ParamLimits

0xa350,	// (0x000902b6) tport_appsw_pane

0xa368,	// (0x000902ce) tport_contact_pane_ParamLimits

0xa368,	// (0x000902ce) tport_contact_pane

0xa380,	// (0x000902e6) tport_listscroll_pane_ParamLimits

0xa380,	// (0x000902e6) tport_listscroll_pane

0xa39a,	// (0x00090300) cell_tport_appsw_pane_ParamLimits

0xa39a,	// (0x00090300) cell_tport_appsw_pane

0xc5af,	// (0x00092515) tport_appsw_pane_g1_ParamLimits

0xc5af,	// (0x00092515) tport_appsw_pane_g1

0xd8cc,	// (0x00093832) tport_contact_pane_g1

0xd187,	// (0x000930ed) tport_contact_pane_t1

0xd8d5,	// (0x0009383b) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00095cf4) tport_contact_pane_t

0xd8e3,	// (0x00093849) list_tport_pane

0xd8ec,	// (0x00093852) scroll_pane_cp_030

0xa3e2,	// (0x00090348) cell_tport_appsw_pane_g1

0xa3f2,	// (0x00090358) cell_tport_appsw_pane_t1

0xe04f,	// (0x00093fb5) grid_highlight_pane_cp019

0xa400,	// (0x00090366) list_tport_double_graphic_pane_ParamLimits

0xa400,	// (0x00090366) list_tport_double_graphic_pane

0xecd3,	// (0x00094c39) list_highlight_pane_cp023_ParamLimits

0xecd3,	// (0x00094c39) list_highlight_pane_cp023

0xa40d,	// (0x00090373) list_tport_double_graphic_pane_g1_ParamLimits

0xa40d,	// (0x00090373) list_tport_double_graphic_pane_g1

0xa41a,	// (0x00090380) list_tport_double_graphic_pane_t1_ParamLimits

0xa41a,	// (0x00090380) list_tport_double_graphic_pane_t1

0xa42f,	// (0x00090395) list_tport_double_graphic_pane_t2_ParamLimits

0xa42f,	// (0x00090395) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00095d00) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00095d00) list_tport_double_graphic_pane_t

0xe04f,	// (0x00093fb5) main_cale_note_pane

0x869c,	// (0x0008e602) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x869c,	// (0x0008e602) cell_vitu2_function_top_wide_pane_cp01

0x9e55,	// (0x0008fdbb) wait_bar_pane_cp05_ParamLimits

0xecd3,	// (0x00094c39) listscroll_cmail_pane

0xd8f5,	// (0x0009385b) list_cmail_pane

0xa441,	// (0x000903a7) list_cmail_body_pane

0xa455,	// (0x000903bb) list_single_cmail_header_caption_pane

0xa46d,	// (0x000903d3) list_single_cmail_header_detail_pane_ParamLimits

0xa46d,	// (0x000903d3) list_single_cmail_header_detail_pane

0xd905,	// (0x0009386b) list_single_cmail_header_caption_pane_t1

0x0d33,	// (0x00086c99) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0d33,	// (0x00086c99) list_single_cmail_header_detail_pane_g1

0xe8ea,	// (0x00094850) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe8ea,	// (0x00094850) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00095d05) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00095d05) list_single_cmail_header_detail_pane_g

0x0d4b,	// (0x00086cb1) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0d4b,	// (0x00086cb1) list_single_cmail_header_detail_pane_t1

0x0d89,	// (0x00086cef) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0d89,	// (0x00086cef) list_single_cmail_header_editor_pane_bg

0xd944,	// (0x000938aa) list_cmail_body_pane_g1

0xd94d,	// (0x000938b3) list_cmail_body_pane_t1

0xc5ec,	// (0x00092552) list_single_cmail_header_editor_pane_bg_g1

0x253a,	// (0x000884a0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc5fc,	// (0x00092562) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc5f4,	// (0x0009255a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc86f,	// (0x000927d5) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc61c,	// (0x00092582) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc60c,	// (0x00092572) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc614,	// (0x0009257a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x251a,	// (0x00088480) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa4a0,	// (0x00090406) calenote_gesture_pane_ParamLimits

0xa4a0,	// (0x00090406) calenote_gesture_pane

0xa4c0,	// (0x00090426) calenote_window_pane_ParamLimits

0xa4c0,	// (0x00090426) calenote_window_pane

0xd95b,	// (0x000938c1) popup_note_window_cp01

0xa4dc,	// (0x00090442) calenote_swipe_1_pane_ParamLimits

0xa4dc,	// (0x00090442) calenote_swipe_1_pane

0xa229,	// (0x0009018f) calenote_swipe_2_pane_ParamLimits

0xa229,	// (0x0009018f) calenote_swipe_2_pane

0xd675,	// (0x000935db) calenote_swipe_1_pane_g1_ParamLimits

0xd675,	// (0x000935db) calenote_swipe_1_pane_g1

0xd682,	// (0x000935e8) calenote_swipe_1_pane_g2_ParamLimits

0xd682,	// (0x000935e8) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x00095c2f) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x00095c2f) calenote_swipe_1_pane_g

0xd96d,	// (0x000938d3) calenote_swipe_1_pane_t1_ParamLimits

0xd96d,	// (0x000938d3) calenote_swipe_1_pane_t1

0xd675,	// (0x000935db) calenote_swipe_2_pane_g1_ParamLimits

0xd675,	// (0x000935db) calenote_swipe_2_pane_g1

0xd98c,	// (0x000938f2) calenote_swipe_2_pane_g2_ParamLimits

0xd98c,	// (0x000938f2) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00095d11) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00095d11) calenote_swipe_2_pane_g

0xd998,	// (0x000938fe) calenote_swipe_2_pane_t1_ParamLimits

0xd998,	// (0x000938fe) calenote_swipe_2_pane_t1

0xe04f,	// (0x00093fb5) main_mup_navstr_pane

0x7352,	// (0x0008d2b8) main_mup3_pane_t7_ParamLimits

0x7352,	// (0x0008d2b8) main_mup3_pane_t7

0xc150,	// (0x000920b6) main_mp4_pane_g6_ParamLimits

0xc150,	// (0x000920b6) main_mp4_pane_g6

0xc378,	// (0x000922de) main_image3_pane_t4_ParamLimits

0xc378,	// (0x000922de) main_image3_pane_t4

0xa4f1,	// (0x00090457) popup_navstr_preview_pane_ParamLimits

0xa4f1,	// (0x00090457) popup_navstr_preview_pane

0xa505,	// (0x0009046b) scroll_navstr_pane_ParamLimits

0xa505,	// (0x0009046b) scroll_navstr_pane

0xe04f,	// (0x00093fb5) bg_popup_preview_window_pane_cp04

0xd9bf,	// (0x00093925) popup_navstr_preview_pane_t1

0xa519,	// (0x0009047f) scroll_navstr_pane_g1_ParamLimits

0xa519,	// (0x0009047f) scroll_navstr_pane_g1

0xa52d,	// (0x00090493) scroll_navstr_pane_t1_ParamLimits

0xa52d,	// (0x00090493) scroll_navstr_pane_t1

0xd964,	// (0x000938ca) bg_button_pane_cp014

0xd964,	// (0x000938ca) bg_button_pane_cp030

0x08b7,	// (0x0008681d) list_double_fisheye_pane_g4_ParamLimits

0x08b7,	// (0x0008681d) list_double_fisheye_pane_g4

0x08c3,	// (0x00086829) list_double_fisheye_pane_g5_ParamLimits

0x08c3,	// (0x00086829) list_double_fisheye_pane_g5

0x3506,	// (0x0008946c) sp_fs_scroll_pane_cp03

0xd768,	// (0x000936ce) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd774,	// (0x000936da) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x00095c4c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd780,	// (0x000936e6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd8fd,	// (0x00093863) sp_fs_scroll_pane_cp02

0xedf7,	// (0x00094d5d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xedf7,	// (0x00094d5d) popup_sp_fs_calendar_preview_list_single_pane

0xe04f,	// (0x00093fb5) main_cam6_pano_pane

0xecd3,	// (0x00094c39) main_mup3_pane_ParamLimits

0xe04f,	// (0x00093fb5) main_phacti_pane

0x9d28,	// (0x0008fc8e) bg_button_pane_cp11

0x9d42,	// (0x0008fca8) main_mobtv_info_pane_g2_ParamLimits

0x9d42,	// (0x0008fca8) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x00095bac) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x00095bac) main_mobtv_info_pane_g

0x9f1f,	// (0x0008fe85) sc_clock_pane_t5_ParamLimits

0x9f1f,	// (0x0008fe85) sc_clock_pane_t5

0x9fb1,	// (0x0008ff17) main_radioblah_pane_g1_ParamLimits

0xd5c1,	// (0x00093527) main_radioblah_pane_t3_ParamLimits

0xd5c1,	// (0x00093527) main_radioblah_pane_t3

0xd5d9,	// (0x0009353f) main_radioblah_pane_t4_ParamLimits

0xd5d9,	// (0x0009353f) main_radioblah_pane_t4

0x9fd9,	// (0x0008ff3f) main_radioblah_text_pane_ParamLimits

0x9fd9,	// (0x0008ff3f) main_radioblah_text_pane

0x9feb,	// (0x0008ff51) main_radioblah_info_pane_g1_ParamLimits

0xa084,	// (0x0008ffea) main_radioblah_info_pane_t4_ParamLimits

0xa084,	// (0x0008ffea) main_radioblah_info_pane_t4

0xecd3,	// (0x00094c39) main_sp_fs_calendar_pane

0xa543,	// (0x000904a9) main_phacti_pane_g1

0xa54b,	// (0x000904b1) phacti_note_pane_ParamLimits

0xa54b,	// (0x000904b1) phacti_note_pane

0xd9d6,	// (0x0009393c) phacti_term_pane_ParamLimits

0xd9d6,	// (0x0009393c) phacti_term_pane

0xd9eb,	// (0x00093951) phacti_note_pane_t1_ParamLimits

0xd9eb,	// (0x00093951) phacti_note_pane_t1

0xda02,	// (0x00093968) phacti_term_pane_g1

0xda0a,	// (0x00093970) phacti_term_pane_t1_ParamLimits

0xda0a,	// (0x00093970) phacti_term_pane_t1

0xda34,	// (0x0009399a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xda3c,	// (0x000939a2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00095d1b) popup_sp_fs_calendar_preview_list_single_pane_g

0xda44,	// (0x000939aa) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xda44,	// (0x000939aa) popup_sp_fs_calendar_preview_list_single_pane_t1

0xda5a,	// (0x000939c0) aid_popup_sp_fs_bg_corner_pane

0xb794,	// (0x000916fa) popup_sp_fs_calendar_preview_bg_pane_g1

0xe04f,	// (0x00093fb5) popup_sp_fs_calendar_preview_bg_pane

0x1f26,	// (0x00087e8c) popup_sp_fs_calendar_preview_list_pane

0x5e7e,	// (0x0008bde4) bg_main_sp_fs_cale_pane_ParamLimits

0x5e7e,	// (0x0008bde4) bg_main_sp_fs_cale_pane

0xda62,	// (0x000939c8) listscroll_cale_mrui_pane_ParamLimits

0xda62,	// (0x000939c8) listscroll_cale_mrui_pane

0xda77,	// (0x000939dd) listscroll_sp_fs_schedule_track_pane

0xda80,	// (0x000939e6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xda80,	// (0x000939e6) main_sp_fs_ctrlbar_pane_cp01

0xda93,	// (0x000939f9) main_sp_fs_ribbon_pane

0xda9b,	// (0x00093a01) popup_sp_fs_cale_preview_window

0xa5c0,	// (0x00090526) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa5c0,	// (0x00090526) list_single_sp_fs_schedule_track_pane

0xecd3,	// (0x00094c39) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xecd3,	// (0x00094c39) bg_sp_fs_highlight_list_pane_cp03

0xa5d5,	// (0x0009053b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa5d5,	// (0x0009053b) list_single_sp_fs_schedule_track_pane_g1

0xa5e1,	// (0x00090547) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa5e1,	// (0x00090547) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00095d20) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00095d20) list_single_sp_fs_schedule_track_pane_g

0xa5ed,	// (0x00090553) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa5ed,	// (0x00090553) list_single_sp_fs_schedule_track_pane_t1

0xa607,	// (0x0009056d) sp_fs_schedule_track_pane_ParamLimits

0xa607,	// (0x0009056d) sp_fs_schedule_track_pane

0xdaad,	// (0x00093a13) sp_fs_schedule_track_pane_g1

0xdab5,	// (0x00093a1b) sp_fs_schedule_track_pane_g2

0xdabd,	// (0x00093a23) sp_fs_schedule_track_pane_g3

0xdac5,	// (0x00093a2b) sp_fs_schedule_track_pane_g4

0xdacd,	// (0x00093a33) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00095d25) sp_fs_schedule_track_pane_g

0xc5ec,	// (0x00092552) bg_sp_fs_schedule_viewer_highlight_g1

0x253a,	// (0x000884a0) bg_sp_fs_schedule_viewer_highlight_g2

0xc5f4,	// (0x0009255a) bg_sp_fs_schedule_viewer_highlight_g3

0xc5fc,	// (0x00092562) bg_sp_fs_schedule_viewer_highlight_g4

0xc86f,	// (0x000927d5) bg_sp_fs_schedule_viewer_highlight_g5

0xc60c,	// (0x00092572) bg_sp_fs_schedule_viewer_highlight_g6

0xc614,	// (0x0009257a) bg_sp_fs_schedule_viewer_highlight_g7

0xc61c,	// (0x00092582) bg_sp_fs_schedule_viewer_highlight_g8

0x251a,	// (0x00088480) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00095d30) bg_sp_fs_schedule_viewer_highlight_g

0xe04f,	// (0x00093fb5) bg_main_sp_fs_ribbon_pane

0xa618,	// (0x0009057e) main_sp_fs_ribbon_pane_g1

0xdad5,	// (0x00093a3b) main_sp_fs_ribbon_pane_t1

0xa621,	// (0x00090587) main_sp_fs_ribbon_pane_t2

0xdae4,	// (0x00093a4a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00095d43) main_sp_fs_ribbon_pane_t

0xdaf3,	// (0x00093a59) main_sp_fs_ribbon_scheduler_pane

0xdafb,	// (0x00093a61) bg_main_sp_fs_ribbon_pane_g1

0xdb04,	// (0x00093a6a) bg_main_sp_fs_ribbon_pane_g2

0xdb0d,	// (0x00093a73) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00095d4a) bg_main_sp_fs_ribbon_pane_g

0xdb15,	// (0x00093a7b) main_sp_fs_ribbon_scheduler_pane_g1

0xdb1e,	// (0x00093a84) main_sp_fs_ribbon_scheduler_pane_g2

0xdb27,	// (0x00093a8d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00095d51) main_sp_fs_ribbon_scheduler_pane_g

0xdb30,	// (0x00093a96) list_cale_mrui_pane

0xa630,	// (0x00090596) sp_fs_scroll_pane_cp07_ParamLimits

0xa630,	// (0x00090596) sp_fs_scroll_pane_cp07

0xa64c,	// (0x000905b2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa64c,	// (0x000905b2) bg_sp_fs_schedule_viewer_highlight

0xdb3d,	// (0x00093aa3) list_single_sp_fs_schedule_track_pane_cp01

0xdb45,	// (0x00093aab) list_sp_fs_schedule_track_pane

0xdb4d,	// (0x00093ab3) sp_fs_scroll_pane_cp06_ParamLimits

0xdb4d,	// (0x00093ab3) sp_fs_scroll_pane_cp06

0xb794,	// (0x000916fa) bgmain_sp_fs_calendar_pane_g1

0x0da2,	// (0x00086d08) list_single_cale_mrui_pane_ParamLimits

0x0da2,	// (0x00086d08) list_single_cale_mrui_pane

0xdb5f,	// (0x00093ac5) list_single_cale_mrui_row_pane_ParamLimits

0xdb5f,	// (0x00093ac5) list_single_cale_mrui_row_pane

0xdb6c,	// (0x00093ad2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdb6c,	// (0x00093ad2) list_single_cale_mrui_row_pane_g1

0xdbb1,	// (0x00093b17) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdbb1,	// (0x00093b17) list_single_cale_mrui_row_pane_t1

0x0dc4,	// (0x00086d2a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0dc4,	// (0x00086d2a) list_single_cale_mrui_row_pane_t2

0xdbc3,	// (0x00093b29) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdbc3,	// (0x00093b29) list_single_cale_mrui_row_pane_t3

0xdbf2,	// (0x00093b58) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdbf2,	// (0x00093b58) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00095d5f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00095d5f) list_single_cale_mrui_row_pane_t

0x0e2c,	// (0x00086d92) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0e2c,	// (0x00086d92) list_single_cmail_header_editor_pane_bg_cp01

0x0e52,	// (0x00086db8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0e52,	// (0x00086db8) list_single_cmail_header_editor_pane_bg_cp02

0xa65c,	// (0x000905c2) main_radioblah_text_pane_t1_ParamLimits

0xa65c,	// (0x000905c2) main_radioblah_text_pane_t1

0xdc21,	// (0x00093b87) cam6_indi_pane_cp01

0xdc29,	// (0x00093b8f) cam6_mode_pane_cp01

0xdc31,	// (0x00093b97) cam6_pano_pane

0xdc3a,	// (0x00093ba0) cam6_zoom_pane_cp01

0xdc42,	// (0x00093ba8) cam6_pano_image_pane

0xdc4d,	// (0x00093bb3) cam6_pano_pane_g1

0xd32e,	// (0x00093294) cam6_pano_pane_g2

0xdc56,	// (0x00093bbc) cam6_pano_pane_g3

0xdc5f,	// (0x00093bc5) cam6_pano_pane_g4

0xbdaa,	// (0x00091d10) cam6_pano_pane_g5

0xdc68,	// (0x00093bce) cam6_pano_pane_g6

0xdc72,	// (0x00093bd8) cam6_pano_pane_g7

0xdc7a,	// (0x00093be0) cam6_pano_pane_g8

0xdc83,	// (0x00093be9) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00095d68) cam6_pano_pane_g

0xe04f,	// (0x00093fb5) main_browser_tag_pane

0xd9b7,	// (0x0009391d) grid_navstr_albumart_pane

0xdc8e,	// (0x00093bf4) cell_navstr_albumart_pane_ParamLimits

0xdc8e,	// (0x00093bf4) cell_navstr_albumart_pane

0x423f,	// (0x0008a1a5) cell_navstr_albumart_pane_g1

0x598c,	// (0x0008b8f2) cell_navstr_albumart_pane_g2

0x599c,	// (0x0008b902) cell_navstr_albumart_pane_g3

0x5994,	// (0x0008b8fa) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00095d7b) cell_navstr_albumart_pane_g

0xa677,	// (0x000905dd) bt_list_pane_ParamLimits

0xa677,	// (0x000905dd) bt_list_pane

0xdcb0,	// (0x00093c16) bt_list_pane_t1

0xdcbf,	// (0x00093c25) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00095d84) bt_list_pane_t

0xe04f,	// (0x00093fb5) main_cale_prevew_pane

0xa68c,	// (0x000905f2) popup_cale_preview_window_ParamLimits

0xa68c,	// (0x000905f2) popup_cale_preview_window

0xecd3,	// (0x00094c39) bg_popup_preview_window_pane_cp05_ParamLimits

0xecd3,	// (0x00094c39) bg_popup_preview_window_pane_cp05

0xdcce,	// (0x00093c34) list_cale_preview_pane_ParamLimits

0xdcce,	// (0x00093c34) list_cale_preview_pane

0xdcda,	// (0x00093c40) list_double_cale_preview_pane_ParamLimits

0xdcda,	// (0x00093c40) list_double_cale_preview_pane

0xdcec,	// (0x00093c52) list_single_cale_preview_pane_ParamLimits

0xdcec,	// (0x00093c52) list_single_cale_preview_pane

0xdd00,	// (0x00093c66) list_single_cale_preview_pane_g1

0xdd08,	// (0x00093c6e) list_single_cale_preview_pane_t1_ParamLimits

0xdd08,	// (0x00093c6e) list_single_cale_preview_pane_t1

0xdd1d,	// (0x00093c83) list_double_cale_preview_pane_g1

0xdd25,	// (0x00093c8b) list_double_cale_preview_pane_t1_ParamLimits

0xdd25,	// (0x00093c8b) list_double_cale_preview_pane_t1

0xdd3a,	// (0x00093ca0) list_double_cale_preview_pane_t2_ParamLimits

0xdd3a,	// (0x00093ca0) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00095d89) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00095d89) list_double_cale_preview_pane_t

0xe04f,	// (0x00093fb5) main_ezdial_pane

0xecd3,	// (0x00094c39) main_sp_fs_email_pane_ParamLimits

0xa24b,	// (0x000901b1) cmail_ddmenu_btn01_pane_ParamLimits

0xa24b,	// (0x000901b1) cmail_ddmenu_btn01_pane

0xa25e,	// (0x000901c4) cmail_ddmenu_btn02_pane_ParamLimits

0xa25e,	// (0x000901c4) cmail_ddmenu_btn02_pane

0xa281,	// (0x000901e7) cmail_ddmenu_btn03_pane_ParamLimits

0xa281,	// (0x000901e7) cmail_ddmenu_btn03_pane

0xa2a7,	// (0x0009020d) main_sp_fs_ctrlbar_pane_ParamLimits

0xa2cb,	// (0x00090231) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa441,	// (0x000903a7) list_cmail_body_pane_ParamLimits

0xa495,	// (0x000903fb) bg_button_pane_cp12

0xd913,	// (0x00093879) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd913,	// (0x00093879) list_single_cmail_header_detail_pane_g3

0xd920,	// (0x00093886) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd920,	// (0x00093886) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00095d0c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00095d0c) list_single_cmail_header_detail_pane_t

0xda1f,	// (0x00093985) phacti_term_pane_t2_ParamLimits

0xda1f,	// (0x00093985) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00095d16) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00095d16) phacti_term_pane_t

0xdd52,	// (0x00093cb8) aid_size_list_single_double

0xa6a5,	// (0x0009060b) popup_ezdial_listscroll_window

0xa6c0,	// (0x00090626) popup_number_entry_window_cp01

0x3cc0,	// (0x00089c26) bg_popup_call_pane_cp09

0xdd5e,	// (0x00093cc4) ezdial_list_pane

0xdd66,	// (0x00093ccc) scroll_pane_cp23

0x5e7e,	// (0x0008bde4) bg_button_pane_cp028_ParamLimits

0x5e7e,	// (0x0008bde4) bg_button_pane_cp028

0xa6ce,	// (0x00090634) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa6ce,	// (0x00090634) cmail_ddmenu_btn01_pane_g1

0xa6da,	// (0x00090640) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa6da,	// (0x00090640) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00095d8e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00095d8e) cmail_ddmenu_btn01_pane_g

0xdd6e,	// (0x00093cd4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xdd6e,	// (0x00093cd4) cmail_ddmenu_btn01_pane_t1

0x5e7e,	// (0x0008bde4) bg_button_pane_cp029_ParamLimits

0x5e7e,	// (0x0008bde4) bg_button_pane_cp029

0xa6f0,	// (0x00090656) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa6f0,	// (0x00090656) cmail_ddmenu_btn02_pane_g1

0xa708,	// (0x0009066e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa708,	// (0x0009066e) cmail_ddmenu_btn02_pane_t1

0xecd3,	// (0x00094c39) bg_button_pane_cp031_ParamLimits

0xecd3,	// (0x00094c39) bg_button_pane_cp031

0xa6f0,	// (0x00090656) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa6f0,	// (0x00090656) cmail_ddmenu_btn03_pane_g1

0xa708,	// (0x0009066e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa708,	// (0x0009066e) cmail_ddmenu_btn03_pane_t1

0x7f22,	// (0x0008de88) cell_dialer2_keypad_pane_t1_ParamLimits

0x7f3c,	// (0x0008dea2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7f3c,	// (0x0008dea2) cell_dialer2_keypad_pane_t1_copy1

0x9b8f,	// (0x0008faf5) ncimui_group_button_pane

0xecd3,	// (0x00094c39) main_sp_fs_calendar_pane_ParamLimits

0xa455,	// (0x000903bb) list_single_cmail_header_caption_pane_ParamLimits

0xe8f6,	// (0x0009485c) aid_recal_txt_sm_pane

0xe04f,	// (0x00093fb5) mian_recal_day_pane

0xda9b,	// (0x00093a01) popup_sp_fs_cale_preview_window_ParamLimits

0xdd84,	// (0x00093cea) list_recal_day_pane

0xddc6,	// (0x00093d2c) list_single_recal_day_pane_ParamLimits

0xddc6,	// (0x00093d2c) list_single_recal_day_pane

0xddd8,	// (0x00093d3e) list_single_recal_day_pane_g1_ParamLimits

0xddd8,	// (0x00093d3e) list_single_recal_day_pane_g1

0xdde4,	// (0x00093d4a) list_single_recal_day_pane_g2_ParamLimits

0xdde4,	// (0x00093d4a) list_single_recal_day_pane_g2

0xddf4,	// (0x00093d5a) list_single_recal_day_pane_g3_ParamLimits

0xddf4,	// (0x00093d5a) list_single_recal_day_pane_g3

0x0e72,	// (0x00086dd8) list_single_recal_day_pane_g4_ParamLimits

0x0e72,	// (0x00086dd8) list_single_recal_day_pane_g4

0xde00,	// (0x00093d66) list_single_recal_day_pane_g5_ParamLimits

0xde00,	// (0x00093d66) list_single_recal_day_pane_g5

0xde10,	// (0x00093d76) list_single_recal_day_pane_g6_ParamLimits

0xde10,	// (0x00093d76) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00095d9d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00095d9d) list_single_recal_day_pane_g

0xde24,	// (0x00093d8a) list_single_recal_day_pane_t1

0xde36,	// (0x00093d9c) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00095da8) list_single_recal_day_pane_t

0xa72c,	// (0x00090692) ncimui_query_button_pane_ParamLimits

0xa72c,	// (0x00090692) ncimui_query_button_pane

0xa73c,	// (0x000906a2) ncimui_query_button_pane_t1_ParamLimits

0xa73c,	// (0x000906a2) ncimui_query_button_pane_t1

0xde48,	// (0x00093dae) ncimui_query_button_pane_t2_ParamLimits

0xde48,	// (0x00093dae) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00095dad) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00095dad) ncimui_query_button_pane_t

0xa74f,	// (0x000906b5) query_button_pane_ParamLimits

0xa74f,	// (0x000906b5) query_button_pane

0xe04f,	// (0x00093fb5) bg_button_pane_cp0028

0xde5b,	// (0x00093dc1) query_button_pane_t1

0x5ea0,	// (0x0008be06) main_tport_pane_ParamLimits

0xa30d,	// (0x00090273) bg_popup_window_pane_cp01_ParamLimits

0xa30d,	// (0x00090273) bg_popup_window_pane_cp01

0xa328,	// (0x0009028e) heading_pane_cp08_ParamLimits

0xa328,	// (0x0009028e) heading_pane_cp08

0xa33b,	// (0x000902a1) heading_pane_cp07_ParamLimits

0xa33b,	// (0x000902a1) heading_pane_cp07

0xa3e2,	// (0x00090348) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00095cf9) cell_tport_appsw_pane_g

0x043d,	// (0x000863a3) input_candi_list_open_g1

0x3334,	// (0x0008929a) list_cale_time_pane_g6_ParamLimits

0x3334,	// (0x0008929a) list_cale_time_pane_g6

0x6d7e,	// (0x0008cce4) aid_size_touch_calib_1_ParamLimits

0x6d7e,	// (0x0008cce4) aid_size_touch_calib_1

0x6d90,	// (0x0008ccf6) aid_size_touch_calib_2_ParamLimits

0x6d90,	// (0x0008ccf6) aid_size_touch_calib_2

0x6da8,	// (0x0008cd0e) aid_size_touch_calib_3_ParamLimits

0x6da8,	// (0x0008cd0e) aid_size_touch_calib_3

0x6dc6,	// (0x0008cd2c) aid_size_touch_calib_4_ParamLimits

0x6dc6,	// (0x0008cd2c) aid_size_touch_calib_4

0x6dde,	// (0x0008cd44) main_touch_calib_button_group_pane_ParamLimits

0x6dde,	// (0x0008cd44) main_touch_calib_button_group_pane

0x6df6,	// (0x0008cd5c) main_touch_calib_pane_g1_ParamLimits

0x6e08,	// (0x0008cd6e) main_touch_calib_pane_g2_ParamLimits

0x6e1a,	// (0x0008cd80) main_touch_calib_pane_g3_ParamLimits

0x6e2c,	// (0x0008cd92) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x000956c2) main_touch_calib_pane_g_ParamLimits

0x6e3e,	// (0x0008cda4) main_touch_calib_pane_t1_ParamLimits

0x6e58,	// (0x0008cdbe) main_touch_calib_pane_t2_ParamLimits

0x6e72,	// (0x0008cdd8) main_touch_calib_pane_t3_ParamLimits

0x6e86,	// (0x0008cdec) main_touch_calib_pane_t4_ParamLimits

0x6e9a,	// (0x0008ce00) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x000956cb) main_touch_calib_pane_t_ParamLimits

0xbb68,	// (0x00091ace) list_single_fp_cale_pane_g3_ParamLimits

0xbb68,	// (0x00091ace) list_single_fp_cale_pane_g3

0xecd3,	// (0x00094c39) bg_button_pane_cp012_ParamLimits

0xecd3,	// (0x00094c39) bg_vkb2_func_pane_cp03_ParamLimits

0x8e78,	// (0x0008edde) cell_vitu2_function_top_pane_g1_ParamLimits

0xecd3,	// (0x00094c39) bg_vkb2_func_pane_cp04_ParamLimits

0x9b1d,	// (0x0008fa83) main_ncimui_button_group_pane_ParamLimits

0x9b1d,	// (0x0008fa83) main_ncimui_button_group_pane

0x9b7d,	// (0x0008fae3) main_ncimui_pane_t3_ParamLimits

0x9b7d,	// (0x0008fae3) main_ncimui_pane_t3

0xd9cd,	// (0x00093933) phacti_button_group_pane

0xdd52,	// (0x00093cb8) aid_size_list_single_double_ParamLimits

0xa6a5,	// (0x0009060b) popup_ezdial_listscroll_window_ParamLimits

0xa6c0,	// (0x00090626) popup_number_entry_window_cp01_ParamLimits

0xa762,	// (0x000906c8) phacti_button_pane_ParamLimits

0xa762,	// (0x000906c8) phacti_button_pane

0xe04f,	// (0x00093fb5) bg_button_pane_cp14

0xde69,	// (0x00093dcf) phacti_button_pane_t1

0xa773,	// (0x000906d9) main_touch_calib_button_pane_ParamLimits

0xa773,	// (0x000906d9) main_touch_calib_button_pane

0xece1,	// (0x00094c47) bg_button_pane_cp18_ParamLimits

0xece1,	// (0x00094c47) bg_button_pane_cp18

0xde77,	// (0x00093ddd) main_touch_calib_button_pane_t1_ParamLimits

0xde77,	// (0x00093ddd) main_touch_calib_button_pane_t1

0xde8d,	// (0x00093df3) main_touch_calib_button_pane_t2_ParamLimits

0xde8d,	// (0x00093df3) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00095db2) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00095db2) main_touch_calib_button_pane_t

0xe04f,	// (0x00093fb5) cell_ncimui_button_pane

0xe04f,	// (0x00093fb5) bg_button_pane_cp032

0xdeab,	// (0x00093e11) cell_ncimui_button_pane_t1

0xc358,	// (0x000922be) image3_infobar_pane_ParamLimits

0xc358,	// (0x000922be) image3_infobar_pane

0x9f4b,	// (0x0008feb1) fs_bigclock_status_pane_ParamLimits

0x9f4b,	// (0x0008feb1) fs_bigclock_status_pane

0x9f58,	// (0x0008febe) main_fs_bigclock_clock_pane_ParamLimits

0x9f58,	// (0x0008febe) main_fs_bigclock_clock_pane

0x9f74,	// (0x0008feda) main_fs_bigclock_indi_pane_ParamLimits

0x9f74,	// (0x0008feda) main_fs_bigclock_indi_pane

0x9f8d,	// (0x0008fef3) main_fs_bigclock_swipe_pane_ParamLimits

0x9f8d,	// (0x0008fef3) main_fs_bigclock_swipe_pane

0xe04f,	// (0x00093fb5) main_fs_clock_dumped_data

0xd43b,	// (0x000933a1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd43b,	// (0x000933a1) list_single_fs_bigclock_indicator_pane_g1

0xd456,	// (0x000933bc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd456,	// (0x000933bc) list_single_fs_bigclock_indicator_pane_g2

0xd470,	// (0x000933d6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd470,	// (0x000933d6) list_single_fs_bigclock_indicator_pane_g3

0xd48a,	// (0x000933f0) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd48a,	// (0x000933f0) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x00095be0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x00095be0) list_single_fs_bigclock_indicator_pane_g

0xd4b3,	// (0x00093419) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd4b3,	// (0x00093419) list_single_fs_bigclock_indicator_pane_t1

0xd4db,	// (0x00093441) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd4db,	// (0x00093441) list_single_fs_bigclock_indicator_pane_t2

0xd503,	// (0x00093469) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd503,	// (0x00093469) list_single_fs_bigclock_indicator_pane_t3

0xd52b,	// (0x00093491) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd52b,	// (0x00093491) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x00095beb) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x00095beb) list_single_fs_bigclock_indicator_pane_t

0xdeb9,	// (0x00093e1f) image3_infobar_fav_pane_ParamLimits

0xdeb9,	// (0x00093e1f) image3_infobar_fav_pane

0xdec9,	// (0x00093e2f) image3_infobar_loc_pane_ParamLimits

0xdec9,	// (0x00093e2f) image3_infobar_loc_pane

0xdedd,	// (0x00093e43) image3_infobar_time_pane_ParamLimits

0xdedd,	// (0x00093e43) image3_infobar_time_pane

0xb794,	// (0x000916fa) image3_infobar_time_pane_g1

0xdeed,	// (0x00093e53) image3_infobar_time_pane_t1

0xb794,	// (0x000916fa) image3_infobar_loc_pane_g1

0xdefb,	// (0x00093e61) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00095db7) image3_infobar_loc_pane_g

0xdf03,	// (0x00093e69) image3_infobar_loc_pane_t1

0xb794,	// (0x000916fa) image3_infobar_fav_pane_g1

0xdf11,	// (0x00093e77) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00095dbc) image3_infobar_fav_pane_g

0xdf19,	// (0x00093e7f) fs_bigclock_status_battery_pane

0xdf22,	// (0x00093e88) fs_bigclock_status_signal_pane

0xdf2b,	// (0x00093e91) fs_bigclock_status_title_pane

0xdf34,	// (0x00093e9a) fs_bigclock_status_signal_pane_g1

0xdf3d,	// (0x00093ea3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00095dc1) fs_bigclock_status_signal_pane_g

0xdf45,	// (0x00093eab) fs_bigclock_status_battery_pane_g1

0xdf4e,	// (0x00093eb4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00095dc6) fs_bigclock_status_battery_pane_g

0xdf56,	// (0x00093ebc) fs_bigclock_status_title_pane_t1

0xb794,	// (0x000916fa) main_fs_bigclock_clock_pane_g1

0xa788,	// (0x000906ee) main_fs_bigclock_clock_pane_g2

0xa788,	// (0x000906ee) main_fs_bigclock_clock_pane_g3

0xa788,	// (0x000906ee) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00095dcb) main_fs_bigclock_clock_pane_g

0xa790,	// (0x000906f6) main_fs_bigclock_clock_pane_t1

0xa79e,	// (0x00090704) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00095dd4) main_fs_bigclock_clock_pane_t

0xdf64,	// (0x00093eca) list_single_fs_bigclock_indicator_pane_ParamLimits

0xdf64,	// (0x00093eca) list_single_fs_bigclock_indicator_pane

0xa7ad,	// (0x00090713) list_single_fs_bigclock_pane_ParamLimits

0xa7ad,	// (0x00090713) list_single_fs_bigclock_pane

0xdf7e,	// (0x00093ee4) main_fs_bigclock_indicator_pane_t1

0xdf8d,	// (0x00093ef3) list_single_fs_bigclock_pane_g1

0xdf95,	// (0x00093efb) list_single_fs_bigclock_pane_t1

0xb794,	// (0x000916fa) main_fs_bigclock_swipe_pane_g1

0xdfd8,	// (0x00093f3e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00095de5) main_fs_bigclock_swipe_pane_g

0xdfe0,	// (0x00093f46) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xdfe0,	// (0x00093f46) main_fs_bigclock_swipe_pane_t1

0x3620,	// (0x00089586) call_type_pane_ParamLimits

0xe04f,	// (0x00093fb5) main_btmg_pane

0xdb98,	// (0x00093afe) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdb98,	// (0x00093afe) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00095d58) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00095d58) list_single_cale_mrui_row_pane_g

0xddad,	// (0x00093d13) list_recal_vselct_arw_lo_pane

0xddb5,	// (0x00093d1b) list_recal_vselct_arw_up_pane

0xddbd,	// (0x00093d23) list_recal_vselct_pane

0xa810,	// (0x00090776) btmg_button_pane

0xa81a,	// (0x00090780) main_btmg_pane_g1

0xe04f,	// (0x00093fb5) bg_button_pane_cp044

0xdffd,	// (0x00093f63) btmg_button_pane_t1

0x5e56,	// (0x0008bdbc) aid_listscroll_gen

0xecd3,	// (0x00094c39) main_cntbar_detail_pane

0xd8f5,	// (0x0009385b) list_cmail_folder_pane

0x3506,	// (0x0008946c) sp_fs_scroll_pane_cp03_ParamLimits

0x0e92,	// (0x00086df8) list_single_fs_dyc_pane_cp01_ParamLimits

0x0e92,	// (0x00086df8) list_single_fs_dyc_pane_cp01

0xe00b,	// (0x00093f71) aid_size_cmail_indent

0xe014,	// (0x00093f7a) list_single_dyc_row_pane_cp01

0xa850,	// (0x000907b6) cntbar_detail_list_pane_ParamLimits

0xa850,	// (0x000907b6) cntbar_detail_list_pane

0xa89c,	// (0x00090802) main_cntbar_detail_cont_pane_ParamLimits

0xa89c,	// (0x00090802) main_cntbar_detail_cont_pane

0x3506,	// (0x0008946c) scroll_pane_cp032_ParamLimits

0x3506,	// (0x0008946c) scroll_pane_cp032

0xa8b0,	// (0x00090816) cntbar_detail_list_event_pane_ParamLimits

0xa8b0,	// (0x00090816) cntbar_detail_list_event_pane

0xa860,	// (0x000907c6) cntbar_detail_list_shct_pane

0x2590,	// (0x000884f6) aid_list_gen

0xe8ff,	// (0x00094865) aid_scroll

0xe908,	// (0x0009486e) aid_size_touch_scroll_bar

0x0767,	// (0x000866cd) aid_list_double

0xe911,	// (0x00094877) aid_list_single

0x93d3,	// (0x0008f339) aid_list_single_lg

0xe01d,	// (0x00093f83) aid_list_z_g_a_sm

0xe91a,	// (0x00094880) aid_list_z_g_d

0xe025,	// (0x00093f8b) aid_txt_z_prm

0x0ea9,	// (0x00086e0f) aid_txt_z_prm_cp01

0x0eb7,	// (0x00086e1d) aid_txt_z_sec

0xa8c0,	// (0x00090826) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa8c0,	// (0x00090826) main_cntbar_detail_cont_pane_g1

0xa8d4,	// (0x0009083a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa8d4,	// (0x0009083a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00095dea) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00095dea) main_cntbar_detail_cont_pane_g

0xe922,	// (0x00094888) main_cntbar_detail_cont_pane_t1

0xe930,	// (0x00094896) main_cntbar_detail_cont_pane_t2

0xe93e,	// (0x000948a4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00095def) main_cntbar_detail_cont_pane_t

0xa8e4,	// (0x0009084a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa8e4,	// (0x0009084a) cell_cntbar_detail_list_shct_pane

0xe94c,	// (0x000948b2) cntbar_detail_list_shct_pane_g1

0xe955,	// (0x000948bb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00095df6) cntbar_detail_list_shct_pane_g

0xa8f8,	// (0x0009085e) cntbar_detail_list_event_pane_g1_ParamLimits

0xa8f8,	// (0x0009085e) cntbar_detail_list_event_pane_g1

0xa904,	// (0x0009086a) cntbar_detail_list_event_pane_g2_ParamLimits

0xa904,	// (0x0009086a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00095dfb) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00095dfb) cntbar_detail_list_event_pane_g

0xa970,	// (0x000908d6) cntbar_detail_list_event_pane_t1_ParamLimits

0xa970,	// (0x000908d6) cntbar_detail_list_event_pane_t1

0xa985,	// (0x000908eb) cntbar_detail_list_event_pane_t2_ParamLimits

0xa985,	// (0x000908eb) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00095e08) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00095e08) cntbar_detail_list_event_pane_t

0xb794,	// (0x000916fa) cell_cntbar_detail_list_shct_pane_g1

0x3c36,	// (0x00089b9c) navi_pane_mv_g3

0xecd3,	// (0x00094c39) main_cntbar_detail_pane_ParamLimits

0xe04f,	// (0x00093fb5) main_notif_wgt_pane

0xc0ea,	// (0x00092050) aid_tch_main_mp4_pane_g4

0xc2ec,	// (0x00092252) popup_slider_window_cp02

0xdda3,	// (0x00093d09) list_recal_day_event_pane

0xa824,	// (0x0009078a) cntbar_detail_btn_pane_ParamLimits

0xa824,	// (0x0009078a) cntbar_detail_btn_pane

0xa83a,	// (0x000907a0) cntbar_detail_btn_pane_cp01_ParamLimits

0xa83a,	// (0x000907a0) cntbar_detail_btn_pane_cp01

0xa860,	// (0x000907c6) cntbar_detail_list_shct_pane_ParamLimits

0xa870,	// (0x000907d6) cntbar_detail_pane_g1_ParamLimits

0xa870,	// (0x000907d6) cntbar_detail_pane_g1

0xa880,	// (0x000907e6) cntbar_detail_pane_t1_ParamLimits

0xa880,	// (0x000907e6) cntbar_detail_pane_t1

0xa910,	// (0x00090876) cntbar_detail_list_event_pane_g3_ParamLimits

0xa910,	// (0x00090876) cntbar_detail_list_event_pane_g3

0xa928,	// (0x0009088e) cntbar_detail_list_event_pane_g4_ParamLimits

0xa928,	// (0x0009088e) cntbar_detail_list_event_pane_g4

0xa940,	// (0x000908a6) cntbar_detail_list_event_pane_g5_ParamLimits

0xa940,	// (0x000908a6) cntbar_detail_list_event_pane_g5

0xa958,	// (0x000908be) cntbar_detail_list_event_pane_g6_ParamLimits

0xa958,	// (0x000908be) cntbar_detail_list_event_pane_g6

0xa99a,	// (0x00090900) cntbar_detail_list_event_pane_t3_ParamLimits

0xa99a,	// (0x00090900) cntbar_detail_list_event_pane_t3

0xa9ac,	// (0x00090912) popup_notif_wgt_window_ParamLimits

0xa9ac,	// (0x00090912) popup_notif_wgt_window

0xa9c5,	// (0x0009092b) popup_submenu_window_cp01_ParamLimits

0xa9c5,	// (0x0009092b) popup_submenu_window_cp01

0x3cc0,	// (0x00089c26) bg_popup_window_pane_cp10

0xe95e,	// (0x000948c4) listscroll_notif_wgt_pane

0xe96f,	// (0x000948d5) list_notif_wgt_window

0xe978,	// (0x000948de) scroll_pane_cp033

0xa9d7,	// (0x0009093d) list_notif_wgt_row_pane_ParamLimits

0xa9d7,	// (0x0009093d) list_notif_wgt_row_pane

0xe981,	// (0x000948e7) aid_size_list_notif_wgt_del

0xe98e,	// (0x000948f4) list_notif_wgt_row_pane_g1

0xe99a,	// (0x00094900) list_notif_wgt_row_pane_g2

0xe9a6,	// (0x0009490c) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00095e0f) list_notif_wgt_row_pane_g

0xe9b3,	// (0x00094919) list_notif_wgt_row_pane_t1

0xe9c8,	// (0x0009492e) list_notif_wgt_row_pane_t2

0xe9da,	// (0x00094940) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00095e16) list_notif_wgt_row_pane_t

0xc877,	// (0x000927dd) list_recal_day_event_pane_g1

0xe9ec,	// (0x00094952) list_recal_day_event_pane_t1

0xe04f,	// (0x00093fb5) bg_button_pane_cp045

0xe9fb,	// (0x00094961) cntbar_detail_btn_pane_t1

0x5e7e,	// (0x0008bde4) main_callh_pane_ParamLimits

0x5e7e,	// (0x0008bde4) main_callh_pane

0xe04f,	// (0x00093fb5) main_coverflow0_pane

0xe04f,	// (0x00093fb5) main_wgtman_pane

0x9f9b,	// (0x0008ff01) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9f9b,	// (0x0008ff01) main_fs_bigclock_unlock_btn_pane

0xa3da,	// (0x00090340) bg_button_pane_cp16

0xa3ea,	// (0x00090350) cell_tport_appsw_pane_g3

0xa9e7,	// (0x0009094d) cf0_flow_pane_ParamLimits

0xa9e7,	// (0x0009094d) cf0_flow_pane

0xea09,	// (0x0009496f) listscroll_cf0_pane

0xea14,	// (0x0009497a) main_cf0_pane_g1

0xa9fc,	// (0x00090962) main_cf0_pane_t1_ParamLimits

0xa9fc,	// (0x00090962) main_cf0_pane_t1

0xaa13,	// (0x00090979) main_cf0_pane_t2_ParamLimits

0xaa13,	// (0x00090979) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00095e22) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00095e22) main_cf0_pane_t

0xea26,	// (0x0009498c) scroll_pane_cp11

0xaa2a,	// (0x00090990) cf0_flow_pane_g1

0xaa32,	// (0x00090998) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00095e27) cf0_flow_pane_g

0xaa3a,	// (0x000909a0) cf0_flow_pane_t1

0xe04f,	// (0x00093fb5) main_call6_pane

0xe04f,	// (0x00093fb5) main_calllock_pane

0xaa48,	// (0x000909ae) call6_btn_grp_pane_ParamLimits

0xaa48,	// (0x000909ae) call6_btn_grp_pane

0xaa62,	// (0x000909c8) call6_pane_g1_ParamLimits

0xaa62,	// (0x000909c8) call6_pane_g1

0xaa77,	// (0x000909dd) popup_call6_1st_window_ParamLimits

0xaa77,	// (0x000909dd) popup_call6_1st_window

0xaa88,	// (0x000909ee) popup_call6_2nd_window_ParamLimits

0xaa88,	// (0x000909ee) popup_call6_2nd_window

0xaa99,	// (0x000909ff) cell_call6_btn_pane_ParamLimits

0xaa99,	// (0x000909ff) cell_call6_btn_pane

0x3cc0,	// (0x00089c26) bg_popup_call2_in_pane_cp03

0xea31,	// (0x00094997) popup_call6_1st_window_g1

0xea39,	// (0x0009499f) popup_call6_1st_window_g2

0xea41,	// (0x000949a7) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00095e2c) popup_call6_1st_window_g

0xea49,	// (0x000949af) popup_call6_1st_window_t1

0xea58,	// (0x000949be) popup_call6_1st_window_t2

0xea68,	// (0x000949ce) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00095e33) popup_call6_1st_window_t

0x3cc0,	// (0x00089c26) bg_popup_call2_in_pane_cp04

0xea31,	// (0x00094997) popup_call6_2nd_window_g1

0xea39,	// (0x0009499f) popup_call6_2nd_window_g2

0xea41,	// (0x000949a7) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00095e2c) popup_call6_2nd_window_g

0xea49,	// (0x000949af) popup_call6_2nd_window_t1

0xe04f,	// (0x00093fb5) bg_button_pane_cp15

0xea78,	// (0x000949de) cell_call6_btn_pane_g1

0xea81,	// (0x000949e7) cell_call6_btn_pane_t1

0xaaad,	// (0x00090a13) listscroll_wgtman_pane_ParamLimits

0xaaad,	// (0x00090a13) listscroll_wgtman_pane

0xaad0,	// (0x00090a36) wgtman_btn_pane_ParamLimits

0xaad0,	// (0x00090a36) wgtman_btn_pane

0x3872,	// (0x000897d8) aid_scroll_copy1

0xea90,	// (0x000949f6) list_wgtman_pane

0xab13,	// (0x00090a79) wgtman_btn_pane_g1_ParamLimits

0xab13,	// (0x00090a79) wgtman_btn_pane_g1

0xab3f,	// (0x00090aa5) wgtman_btn_pane_t1_ParamLimits

0xab3f,	// (0x00090aa5) wgtman_btn_pane_t1

0xea9a,	// (0x00094a00) wgtman_btn_pane_t2_ParamLimits

0xea9a,	// (0x00094a00) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00095e3a) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00095e3a) wgtman_btn_pane_t

0xab7c,	// (0x00090ae2) listrow_wgtman_pane_ParamLimits

0xab7c,	// (0x00090ae2) listrow_wgtman_pane

0xab8f,	// (0x00090af5) listrow_wgtman_pane_g1

0xab9c,	// (0x00090b02) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00095e3f) listrow_wgtman_pane_g

0x0ec5,	// (0x00086e2b) listrow_wgtman_pane_t1

0x0edd,	// (0x00086e43) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00095e44) listrow_wgtman_pane_t

0x0f03,	// (0x00086e69) wait_bar_pane_cp09

0xeab1,	// (0x00094a17) main_calllock_btn_pane

0xeabb,	// (0x00094a21) main_calllock_pane_g1

0xe04f,	// (0x00093fb5) bg_button_pane_cp17

0xeac6,	// (0x00094a2c) main_calllock_btn_pane_g1

0xeacf,	// (0x00094a35) main_calllock_btn_pane_t1

0xe04f,	// (0x00093fb5) main_dialer3_pane

0xe04f,	// (0x00093fb5) main_fmrd2_pane

0xb794,	// (0x000916fa) main_fs_bigclock_unlock_btn_pane_g1

0xeae6,	// (0x00094a4c) main_fs_bigclock_unlock_btn_pane_t1

0xabba,	// (0x00090b20) area_fmrd2_info_pane_ParamLimits

0xabba,	// (0x00090b20) area_fmrd2_info_pane

0xabcb,	// (0x00090b31) area_fmrd2_visual_pane_ParamLimits

0xabcb,	// (0x00090b31) area_fmrd2_visual_pane

0xabd9,	// (0x00090b3f) fmrd2_indi_pane_ParamLimits

0xabd9,	// (0x00090b3f) fmrd2_indi_pane

0xabe6,	// (0x00090b4c) area_fmrd2_visual_pane_g1

0xabee,	// (0x00090b54) area_fmrd2_visual_pane_t1

0xabfe,	// (0x00090b64) area_fmrd2_visual_pane_t2

0xac0e,	// (0x00090b74) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00095e4e) area_fmrd2_visual_pane_t

0xac1e,	// (0x00090b84) area_fmrd2_info_pane_g1

0xac26,	// (0x00090b8c) area_fmrd2_info_pane_t1

0xac36,	// (0x00090b9c) area_fmrd2_info_pane_t2

0xac46,	// (0x00090bac) area_fmrd2_info_pane_t3

0xac56,	// (0x00090bbc) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00095e55) area_fmrd2_info_pane_t

0xac64,	// (0x00090bca) fmrd2_indi_pane_t1

0xac74,	// (0x00090bda) fmrd2_indi_pane_t2

0xac84,	// (0x00090bea) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00095e5e) fmrd2_indi_pane_t

0xd499,	// (0x000933ff) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd499,	// (0x000933ff) list_single_fs_bigclock_indicator_pane_g5

0xd540,	// (0x000934a6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd540,	// (0x000934a6) list_single_fs_bigclock_indicator_pane_t5

0xa55f,	// (0x000904c5) aid_cell_bcale_month_pane_ParamLimits

0xa55f,	// (0x000904c5) aid_cell_bcale_month_pane

0xa57d,	// (0x000904e3) bcale_month_pane_ParamLimits

0xa57d,	// (0x000904e3) bcale_month_pane

0xa5a1,	// (0x00090507) bcale_preview_pane_ParamLimits

0xa5a1,	// (0x00090507) bcale_preview_pane

0xdf95,	// (0x00093efb) list_single_fs_bigclock_pane_t1_ParamLimits

0xdfb4,	// (0x00093f1a) list_single_fs_bigclock_pane_t2_ParamLimits

0xdfb4,	// (0x00093f1a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00095de0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00095de0) list_single_fs_bigclock_pane_t

0xeade,	// (0x00094a44) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00095e49) main_fs_bigclock_unlock_btn_pane_g

0xac94,	// (0x00090bfa) aid_dia3_key_size_ParamLimits

0xac94,	// (0x00090bfa) aid_dia3_key_size

0xaca3,	// (0x00090c09) aid_dia3_listrow_size_ParamLimits

0xaca3,	// (0x00090c09) aid_dia3_listrow_size

0xacb8,	// (0x00090c1e) dia3_keypad_fun_pane_ParamLimits

0xacb8,	// (0x00090c1e) dia3_keypad_fun_pane

0xacd4,	// (0x00090c3a) dia3_keypad_num_pane_ParamLimits

0xacd4,	// (0x00090c3a) dia3_keypad_num_pane

0xacef,	// (0x00090c55) dia3_listscroll_pane_ParamLimits

0xacef,	// (0x00090c55) dia3_listscroll_pane

0xad02,	// (0x00090c68) dia3_numentry_pane_ParamLimits

0xad02,	// (0x00090c68) dia3_numentry_pane

0xeaf4,	// (0x00094a5a) dia3_list_pane

0xeaff,	// (0x00094a65) scroll_pane_cp12

0xe04f,	// (0x00093fb5) bg_dia3_numentry_pane

0xad16,	// (0x00090c7c) dia3_numentry_pane_t1

0xad25,	// (0x00090c8b) cell_dia3_key_num_pane

0xad2d,	// (0x00090c93) cell_dia3_key0_fun_pane_ParamLimits

0xad2d,	// (0x00090c93) cell_dia3_key0_fun_pane

0xad41,	// (0x00090ca7) cell_dia3_key1_fun_pane_ParamLimits

0xad41,	// (0x00090ca7) cell_dia3_key1_fun_pane

0xad59,	// (0x00090cbf) dia3_listrow_pane

0xd1a8,	// (0x0009310e) bg_dia3_numentry_pane_g1

0xe04f,	// (0x00093fb5) bg_button_pane_cp21

0xeb0a,	// (0x00094a70) cell_dia3_key_num_pane_t1

0xeb18,	// (0x00094a7e) cell_dia3_key_num_pane_t2

0xeb27,	// (0x00094a8d) cell_dia3_key_num_pane_t3

0xeb36,	// (0x00094a9c) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00095e65) cell_dia3_key_num_pane_t

0xe04f,	// (0x00093fb5) bg_button_pane_cp19

0xad6b,	// (0x00090cd1) cell_dia3_key0_fun_pane_g1

0xe04f,	// (0x00093fb5) bg_button_pane_cp20

0xad73,	// (0x00090cd9) cell_dia3_key1_fun_pane_g1

0xad7b,	// (0x00090ce1) area_left_week_number_pane

0xad87,	// (0x00090ced) area_top_day_name_pane

0xad9a,	// (0x00090d00) frame_month_view_pane

0xeb45,	// (0x00094aab) grid_month_view_pane

0xadad,	// (0x00090d13) cell_top_day_name_pane_ParamLimits

0xadad,	// (0x00090d13) cell_top_day_name_pane

0xadda,	// (0x00090d40) cell_area_left_week_number_pane_ParamLimits

0xadda,	// (0x00090d40) cell_area_left_week_number_pane

0xadee,	// (0x00090d54) cell_month_view_pane_ParamLimits

0xadee,	// (0x00090d54) cell_month_view_pane

0xeb53,	// (0x00094ab9) frm_month_g1

0xae1b,	// (0x00090d81) frm_month_g2

0xae2e,	// (0x00090d94) frm_month_g3

0xae41,	// (0x00090da7) frm_month_g4

0xae54,	// (0x00090dba) frm_month_g5

0xae67,	// (0x00090dcd) frm_month_g6

0xae7a,	// (0x00090de0) frm_month_g7

0xeb60,	// (0x00094ac6) frm_month_g8

0xae8d,	// (0x00090df3) frm_month_g9

0xae9d,	// (0x00090e03) frm_month_g10

0xaead,	// (0x00090e13) frm_month_g11

0xaebd,	// (0x00090e23) frm_month_g12

0xaecf,	// (0x00090e35) frm_month_g13

0xaee1,	// (0x00090e47) frm_month_g14

0xaef5,	// (0x00090e5b) frm_month_g15

0xaf09,	// (0x00090e6f) frm_month_g16

0x000f,

0xff08,	// (0x00095e6e) frm_month_g

0xeb6d,	// (0x00094ad3) cell_top_day_name_pane_t1

0xaf1d,	// (0x00090e83) cell_area_left_week_number_pane_g1

0xaf29,	// (0x00090e8f) cell_area_left_week_number_pane_t1

0xb9f4,	// (0x0009195a) cell_month_view_pane_g1

0xaf3c,	// (0x00090ea2) cell_month_view_pane_t1

0xe04f,	// (0x00093fb5) main_fps_pane

0xd730,	// (0x00093696) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd730,	// (0x00093696) cmail_ddmenu_btn02_pane_cp1

0xd74c,	// (0x000936b2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd74c,	// (0x000936b2) cmail_ddmenu_btn02_pane_cp2

0xa6fc,	// (0x00090662) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa6fc,	// (0x00090662) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00095d93) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00095d93) cmail_ddmenu_btn02_pane_g

0xa71a,	// (0x00090680) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa71a,	// (0x00090680) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00095d98) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00095d98) cmail_ddmenu_btn02_pane_t

0xaf4f,	// (0x00090eb5) fps_text_pane_ParamLimits

0xaf4f,	// (0x00090eb5) fps_text_pane

0xaf66,	// (0x00090ecc) main_fps_pane_g1_ParamLimits

0xaf66,	// (0x00090ecc) main_fps_pane_g1

0xaf80,	// (0x00090ee6) wait_bar_pane_cp010_ParamLimits

0xaf80,	// (0x00090ee6) wait_bar_pane_cp010

0xaf91,	// (0x00090ef7) fps_text_pane_t1_ParamLimits

0xaf91,	// (0x00090ef7) fps_text_pane_t1

0xc49f,	// (0x00092405) cam4_image_uncrop_pane_g1

0xc4a8,	// (0x0009240e) cam4_image_uncrop_pane_g2

0x83c8,	// (0x0008e32e) cam4_image_uncrop_pane_g3

0x83d1,	// (0x0008e337) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0009585a) cam4_image_uncrop_pane_g

0xad59,	// (0x00090cbf) dia3_listrow_pane_ParamLimits

0xe04f,	// (0x00093fb5) main_phob2_pane

0xa3ab,	// (0x00090311) cell_tport_appsw_pane_cp02_ParamLimits

0xa3ab,	// (0x00090311) cell_tport_appsw_pane_cp02

0xa3bf,	// (0x00090325) cell_tport_appsw_pane_cp03_ParamLimits

0xa3bf,	// (0x00090325) cell_tport_appsw_pane_cp03

0xe04f,	// (0x00093fb5) phob2_contact_card_pane

0xe04f,	// (0x00093fb5) phob2_listscroll_pane

0xeb80,	// (0x00094ae6) phob2_list_pane

0xeb88,	// (0x00094aee) scroll_pane_cp034

0xafa9,	// (0x00090f0f) phob2_cc_data_pane_ParamLimits

0xafa9,	// (0x00090f0f) phob2_cc_data_pane

0xafc8,	// (0x00090f2e) phob2_cc_listscroll_pane_ParamLimits

0xafc8,	// (0x00090f2e) phob2_cc_listscroll_pane

0xafe6,	// (0x00090f4c) list_double_large_graphic_phob2_pane_ParamLimits

0xafe6,	// (0x00090f4c) list_double_large_graphic_phob2_pane

0xaff9,	// (0x00090f5f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaff9,	// (0x00090f5f) list_double_large_graphic_phob2_pane_g1

0xb00f,	// (0x00090f75) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb00f,	// (0x00090f75) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00095e8f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00095e8f) list_double_large_graphic_phob2_pane_g

0x0f15,	// (0x00086e7b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0f15,	// (0x00086e7b) list_double_large_graphic_phob2_pane_t1

0x0f2b,	// (0x00086e91) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0f2b,	// (0x00086e91) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00095e94) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00095e94) list_double_large_graphic_phob2_pane_t

0xe04f,	// (0x00093fb5) list_highlight_pane_cp024

0xeb90,	// (0x00094af6) phob2_cc_button_pane

0xb01b,	// (0x00090f81) phob2_cc_data_pane_g1_ParamLimits

0xb01b,	// (0x00090f81) phob2_cc_data_pane_g1

0xb030,	// (0x00090f96) phob2_cc_data_pane_g2_ParamLimits

0xb030,	// (0x00090f96) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00095e99) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00095e99) phob2_cc_data_pane_g

0xb042,	// (0x00090fa8) phob2_cc_data_pane_t1_ParamLimits

0xb042,	// (0x00090fa8) phob2_cc_data_pane_t1

0xb05a,	// (0x00090fc0) phob2_cc_data_pane_t2_ParamLimits

0xb05a,	// (0x00090fc0) phob2_cc_data_pane_t2

0xb072,	// (0x00090fd8) phob2_cc_data_pane_t3_ParamLimits

0xb072,	// (0x00090fd8) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00095e9e) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00095e9e) phob2_cc_data_pane_t

0xeb98,	// (0x00094afe) phob2_cc_list_pane_ParamLimits

0xeb98,	// (0x00094afe) phob2_cc_list_pane

0xc922,	// (0x00092888) scroll_pane_cp035_ParamLimits

0xc922,	// (0x00092888) scroll_pane_cp035

0xecd3,	// (0x00094c39) bg_button_pane_cp033

0xeba4,	// (0x00094b0a) phob2_cc_button_pane_g1

0xebb0,	// (0x00094b16) phob2_cc_button_pane_t1

0xebc5,	// (0x00094b2b) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00095ea5) phob2_cc_button_pane_t

0xb08a,	// (0x00090ff0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb08a,	// (0x00090ff0) list_double_large_graphic_phob2_cc_pane

0xb09d,	// (0x00091003) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb09d,	// (0x00091003) list_double_large_graphic_phob2_cc_pane_g1

0x0f40,	// (0x00086ea6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0f40,	// (0x00086ea6) list_double_large_graphic_phob2_cc_pane_g2

0x0f4c,	// (0x00086eb2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0f4c,	// (0x00086eb2) list_double_large_graphic_phob2_cc_pane_g3

0x0f58,	// (0x00086ebe) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0f58,	// (0x00086ebe) list_double_large_graphic_phob2_cc_pane_g4

0x0f64,	// (0x00086eca) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0f64,	// (0x00086eca) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00095eaa) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00095eaa) list_double_large_graphic_phob2_cc_pane_g

0x0f70,	// (0x00086ed6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0f70,	// (0x00086ed6) list_double_large_graphic_phob2_cc_pane_t1

0x0f99,	// (0x00086eff) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0f99,	// (0x00086eff) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00095eb5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00095eb5) list_double_large_graphic_phob2_cc_pane_t

0xebd7,	// (0x00094b3d) list_highlight_pane_cp025_ParamLimits

0xebd7,	// (0x00094b3d) list_highlight_pane_cp025

0xecd3,	// (0x00094c39) bg_button_pane_cp033_ParamLimits

0xeba4,	// (0x00094b0a) phob2_cc_button_pane_g1_ParamLimits

0xebb0,	// (0x00094b16) phob2_cc_button_pane_t1_ParamLimits

0xebc5,	// (0x00094b2b) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00095ea5) phob2_cc_button_pane_t_ParamLimits

0x11fb,	// (0x00087161) popup_wgtman_window

0xc706,	// (0x0009266c) scroll_pane_cp038

0xaaf5,	// (0x00090a5b) wgtman_btn_pane_cp_01_ParamLimits

0xaaf5,	// (0x00090a5b) wgtman_btn_pane_cp_01

0xebe5,	// (0x00094b4b) wgtman_content_pane

0xebee,	// (0x00094b54) wgtman_heading_pane

0xe04f,	// (0x00093fb5) bg_heading_pane_cp02

0xebf7,	// (0x00094b5d) wgtman_heading_pane_g1

0xebff,	// (0x00094b65) wgtman_heading_pane_t1

0xec0d,	// (0x00094b73) scroll_pane_cp036

0xec15,	// (0x00094b7b) wgtman_list_pane

0xec1d,	// (0x00094b83) wgtman_list_pane_t1_ParamLimits

0xec1d,	// (0x00094b83) wgtman_list_pane_t1

0xc48b,	// (0x000923f1) cam4_grid_pane

0x064c,	// (0x000865b2) bg_button_pane_cp015_ParamLimits

0x8fea,	// (0x0008ef50) bg_button_pane_cp016_ParamLimits

0x8ffd,	// (0x0008ef63) bg_button_pane_cp017_ParamLimits

0x9021,	// (0x0008ef87) popup_vitu2_query_window_g3_ParamLimits

0x9021,	// (0x0008ef87) popup_vitu2_query_window_g3

0x906f,	// (0x0008efd5) popup_vitu2_query_window_t6_ParamLimits

0x906f,	// (0x0008efd5) popup_vitu2_query_window_t6

0x909a,	// (0x0008f000) popup_vitu2_query_window_t7_ParamLimits

0x909a,	// (0x0008f000) popup_vitu2_query_window_t7

0xc49f,	// (0x00092405) cam4_grid_pane_g1

0xc4a8,	// (0x0009240e) cam4_grid_pane_g2

0xec39,	// (0x00094b9f) cam4_grid_pane_g3

0xec42,	// (0x00094ba8) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00095eba) cam4_grid_pane_g

0x210e,	// (0x00088074) aid_placing_vt_slider_lsc_ParamLimits

0x240b,	// (0x00088371) vidtel_button_pane_ParamLimits

0x240b,	// (0x00088371) vidtel_button_pane

0xec4d,	// (0x00094bb3) bg_button_pane_cp034

0xb0a9,	// (0x0009100f) vidtel_button_pane_g1

0xec57,	// (0x00094bbd) vidtel_button_pane_t1

0xc867,	// (0x000927cd) aid_size_vtel_slider_touch

0xc922,	// (0x00092888) scroll_pane_cp039

0xd1e6,	// (0x0009314c) ncim_query_button_pane_cp01_ParamLimits

0xd205,	// (0x0009316b) ncimui_query_pane_g1_ParamLimits

0xecd3,	// (0x00094c39) input_focus_pane_cp012_ParamLimits

0xd22a,	// (0x00093190) ncim_query_entry_pane_t1_ParamLimits

0xc922,	// (0x00092888) scroll_pane_cp039_ParamLimits

0x3b23,	// (0x00089a89) navi_pane_bcale_mc_g1

0x3b2b,	// (0x00089a91) navi_pane_bcale_mc_t1

0xd795,	// (0x000936fb) main_sp_fs_email_pane_g1

0xd7a1,	// (0x00093707) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x00095c51) main_sp_fs_email_pane_g

0xdba4,	// (0x00093b0a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdba4,	// (0x00093b0a) list_single_cale_mrui_row_pane_g3

0x0e88,	// (0x00086dee) list_single_recal_day_pane_g5_event_pane

0xde1c,	// (0x00093d82) list_single_recal_day_pane_g7

0xec65,	// (0x00094bcb) list_recal_day_event_pane_cp01

0xec6e,	// (0x00094bd4) list_recal_vselct_arw_lo_pane_cp01

0xec76,	// (0x00094bdc) list_recal_vselct_arw_up_pane_cp01

0xec7e,	// (0x00094be4) list_recal_vselct_pane_cp01

0xc877,	// (0x000927dd) list_recal_day_event_pane_cp01_g1

0xe033,	// (0x00093f99) list_recal_day_event_pane_cp01_t1

0xde24,	// (0x00093d8a) list_single_recal_day_pane_t1_ParamLimits

0xde36,	// (0x00093d9c) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00095da8) list_single_recal_day_pane_t_ParamLimits

0xe6c7,	// (0x0009462d) bg_notes_pane_ParamLimits

0xe789,	// (0x000946ef) list_notes_pane_ParamLimits

0x152f,	// (0x00087495) scroll_pane_cp06_ParamLimits

0xece1,	// (0x00094c47) main_notes_pane_ParamLimits

0xe04f,	// (0x00093fb5) main_welc_pane

0xb0b1,	// (0x00091017) main_welc_body_pane_ParamLimits

0xb0b1,	// (0x00091017) main_welc_body_pane

0xb0ce,	// (0x00091034) main_welc_opti_pane_ParamLimits

0xb0ce,	// (0x00091034) main_welc_opti_pane

0xb117,	// (0x0009107d) main_welc_pane_t1_ParamLimits

0xb117,	// (0x0009107d) main_welc_pane_t1

0xb139,	// (0x0009109f) main_welc_body_row_pane_ParamLimits

0xb139,	// (0x0009109f) main_welc_body_row_pane

0xe041,	// (0x00093fa7) main_welc_opti_row_pane_ParamLimits

0xe041,	// (0x00093fa7) main_welc_opti_row_pane

0xec88,	// (0x00094bee) main_welc_opti_row_pane_g1

0xec90,	// (0x00094bf6) main_welc_opti_row_pane_t1

0xeca0,	// (0x00094c06) main_welc_body_row_pane_t1

0xe967,	// (0x000948cd) popup_notif_wgt_heading_pane

0xe981,	// (0x000948e7) aid_size_list_notif_wgt_del_ParamLimits

0xe98e,	// (0x000948f4) list_notif_wgt_row_pane_g1_ParamLimits

0xe99a,	// (0x00094900) list_notif_wgt_row_pane_g2_ParamLimits

0xe9a6,	// (0x0009490c) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00095e0f) list_notif_wgt_row_pane_g_ParamLimits

0xe9b3,	// (0x00094919) list_notif_wgt_row_pane_t1_ParamLimits

0xe9c8,	// (0x0009492e) list_notif_wgt_row_pane_t2_ParamLimits

0xe9da,	// (0x00094940) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00095e16) list_notif_wgt_row_pane_t_ParamLimits

0xab8f,	// (0x00090af5) listrow_wgtman_pane_g1_ParamLimits

0xab9c,	// (0x00090b02) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00095e3f) listrow_wgtman_pane_g_ParamLimits

0x0ec5,	// (0x00086e2b) listrow_wgtman_pane_t1_ParamLimits

0x0edd,	// (0x00086e43) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00095e44) listrow_wgtman_pane_t_ParamLimits

0x0f03,	// (0x00086e69) wait_bar_pane_cp09_ParamLimits

0xe04f,	// (0x00093fb5) bg_popup_heading_pane_cp02

0xecaf,	// (0x00094c15) popup_notif_wgt_heading_pane_g1

0xecb7,	// (0x00094c1d) popup_notif_wgt_heading_pane_t1

0xe04f,	// (0x00093fb5) main_vids_pane

0xe04f,	// (0x00093fb5) vids_listscroll_pane

0xb14f,	// (0x000910b5) scroll_pane_cp040

0xe04f,	// (0x00093fb5) vids_list_pane

0xb15a,	// (0x000910c0) vids_list_double_pane_ParamLimits

0xb15a,	// (0x000910c0) vids_list_double_pane

0xb16b,	// (0x000910d1) vids_list_double_pane_g1

0xb174,	// (0x000910da) vids_list_double_pane_t1

0xb183,	// (0x000910e9) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00095ec8) vids_list_double_pane_t

0xecd3,	// (0x00094c39) main_ncimui_pane_ParamLimits

0x9b31,	// (0x0008fa97) main_ncimui_pane_g1_ParamLimits

0x9b3d,	// (0x0008faa3) main_ncimui_pane_g2_ParamLimits

0x9b3d,	// (0x0008faa3) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x00095b56) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x00095b56) main_ncimui_pane_g

0xb0ed,	// (0x00091053) main_welc_pane_g1_ParamLimits

0xb0ed,	// (0x00091053) main_welc_pane_g1

0xb102,	// (0x00091068) main_welc_pane_g2_ParamLimits

0xb102,	// (0x00091068) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00095ec3) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00095ec3) main_welc_pane_g

0xe6c7,	// (0x0009462d) listscroll_mce_pane_ParamLimits

0x3cb8,	// (0x00089c1e) wait_bar_pane_cp10

0x5e72,	// (0x0008bdd8) main_cale_day_pane_ParamLimits

0x5e72,	// (0x0008bdd8) main_cale_week_pane_ParamLimits

0xe6c7,	// (0x0009462d) main_messa_pane_ParamLimits

0x76d3,	// (0x0008d639) main_clock2_btn_pane_ParamLimits

0x76d3,	// (0x0008d639) main_clock2_btn_pane

0xbbf0,	// (0x00091b56) main_clock2_btn_pane_cp01_ParamLimits

0xbbf0,	// (0x00091b56) main_clock2_btn_pane_cp01

0xdb30,	// (0x00093a96) list_cale_mrui_pane_ParamLimits

0xea1e,	// (0x00094984) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00095e1d) main_cf0_pane_g

0xad7b,	// (0x00090ce1) area_left_week_number_pane_ParamLimits

0xad87,	// (0x00090ced) area_top_day_name_pane_ParamLimits

0xad9a,	// (0x00090d00) frame_month_view_pane_ParamLimits

0xeb45,	// (0x00094aab) grid_month_view_pane_ParamLimits

0xeb53,	// (0x00094ab9) frm_month_g1_ParamLimits

0xae1b,	// (0x00090d81) frm_month_g2_ParamLimits

0xae2e,	// (0x00090d94) frm_month_g3_ParamLimits

0xae41,	// (0x00090da7) frm_month_g4_ParamLimits

0xae54,	// (0x00090dba) frm_month_g5_ParamLimits

0xae67,	// (0x00090dcd) frm_month_g6_ParamLimits

0xae7a,	// (0x00090de0) frm_month_g7_ParamLimits

0xeb60,	// (0x00094ac6) frm_month_g8_ParamLimits

0xae8d,	// (0x00090df3) frm_month_g9_ParamLimits

0xae9d,	// (0x00090e03) frm_month_g10_ParamLimits

0xaead,	// (0x00090e13) frm_month_g11_ParamLimits

0xaebd,	// (0x00090e23) frm_month_g12_ParamLimits

0xaecf,	// (0x00090e35) frm_month_g13_ParamLimits

0xaee1,	// (0x00090e47) frm_month_g14_ParamLimits

0xaef5,	// (0x00090e5b) frm_month_g15_ParamLimits

0xaf09,	// (0x00090e6f) frm_month_g16_ParamLimits

0xff08,	// (0x00095e6e) frm_month_g_ParamLimits

0xeb6d,	// (0x00094ad3) cell_top_day_name_pane_t1_ParamLimits

0xaf1d,	// (0x00090e83) cell_area_left_week_number_pane_g1_ParamLimits

0xaf29,	// (0x00090e8f) cell_area_left_week_number_pane_t1_ParamLimits

0xb9f4,	// (0x0009195a) cell_month_view_pane_g1_ParamLimits

0xaf3c,	// (0x00090ea2) cell_month_view_pane_t1_ParamLimits

0xe6bf,	// (0x00094625) main_clock2_btn_pane_g1

0xecc5,	// (0x00094c2b) main_clock2_btn_pane_t1

0xecd3,	// (0x00094c39) listscroll_cmail_pane_ParamLimits

0xd795,	// (0x000936fb) main_sp_fs_email_pane_g1_ParamLimits

0xd7a1,	// (0x00093707) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x00095c51) main_sp_fs_email_pane_g_ParamLimits

0xdd84,	// (0x00093cea) list_recal_day_pane_ParamLimits

0xdd95,	// (0x00093cfb) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
