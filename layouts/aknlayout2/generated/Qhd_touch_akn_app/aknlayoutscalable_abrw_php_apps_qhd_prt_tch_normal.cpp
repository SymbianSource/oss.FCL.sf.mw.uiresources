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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00015fe6 };

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
0x853d,	// (0x0001e523) Screen

0x8549,	// (0x0001e52f) application_window

0x8589,	// (0x0001e56f) area_bottom_pane_ParamLimits

0x8589,	// (0x0001e56f) area_bottom_pane

0x85be,	// (0x0001e5a4) area_top_pane_ParamLimits

0x85be,	// (0x0001e5a4) area_top_pane

0x0702,	// (0x000166e8) call_video_uplink_pane_ParamLimits

0x0702,	// (0x000166e8) call_video_uplink_pane

0x864c,	// (0x0001e632) main_pane_ParamLimits

0x864c,	// (0x0001e632) main_pane

0x313a,	// (0x00019120) context_pane

0xb113,	// (0x000210f9) navi_pane

0xb133,	// (0x00021119) popup_cale_events_window_ParamLimits

0xb133,	// (0x00021119) popup_cale_events_window

0x314d,	// (0x00019133) popup_mup_playback_window

0xb14b,	// (0x00021131) signal_pane

0x0e95,	// (0x00016e7b) main_browser_pane

0x1c30,	// (0x00017c16) main_burst_pane

0xafdd,	// (0x00020fc3) main_calc_pane

0x1c30,	// (0x00017c16) main_cale_day_pane

0x0e95,	// (0x00016e7b) main_cale_month_pane

0x1c30,	// (0x00017c16) main_cale_week_pane

0x1c30,	// (0x00017c16) main_call_pane

0x0b41,	// (0x00016b27) main_call_poc_pane

0x1c30,	// (0x00017c16) main_camera_pane

0x1c30,	// (0x00017c16) main_chi_dic_pane

0x1ab5,	// (0x00017a9b) main_clock_pane

0x0b41,	// (0x00016b27) main_fmradio_pane

0x1c30,	// (0x00017c16) main_graph_messa_pane

0x0b41,	// (0x00016b27) main_help_pane

0x0e95,	// (0x00016e7b) main_im_pane

0x0d9c,	// (0x00016d82) main_image_pane_ParamLimits

0x0d9c,	// (0x00016d82) main_image_pane

0x0b41,	// (0x00016b27) main_location2_pane

0x1c30,	// (0x00017c16) main_location_pane

0x0b41,	// (0x00016b27) main_messa_pane

0x0b41,	// (0x00016b27) main_mp2_pane

0x1c30,	// (0x00017c16) main_mp_pane

0x0b41,	// (0x00016b27) main_msg_pane

0x0b41,	// (0x00016b27) main_mup_eq_pane

0x0b41,	// (0x00016b27) main_mup_pane

0x1c30,	// (0x00017c16) main_notes_pane

0x0b41,	// (0x00016b27) main_pec_pane

0x0b41,	// (0x00016b27) main_phob_pane

0x0b41,	// (0x00016b27) main_pinb_pane

0x0b41,	// (0x00016b27) main_postcard_pane

0x0b41,	// (0x00016b27) main_qdial_pane

0x1c30,	// (0x00017c16) main_skin_pane

0x0b41,	// (0x00016b27) main_smil2_pane

0x1c30,	// (0x00017c16) main_smil_pane

0x1c30,	// (0x00017c16) main_video_pane

0x1c30,	// (0x00017c16) main_video_tele_pane

0x0d9c,	// (0x00016d82) main_viewer_pane_ParamLimits

0x0d9c,	// (0x00016d82) main_viewer_pane

0x1c30,	// (0x00017c16) main_vorec_pane

0xb013,	// (0x00020ff9) popup_blid_sat_info_window_ParamLimits

0xb013,	// (0x00020ff9) popup_blid_sat_info_window

0xb029,	// (0x0002100f) popup_dyc_status_message_window_ParamLimits

0xb029,	// (0x0002100f) popup_dyc_status_message_window

0xb039,	// (0x0002101f) popup_grid_large_graphic_window_ParamLimits

0xb039,	// (0x0002101f) popup_grid_large_graphic_window

0xb0af,	// (0x00021095) popup_loc_request_window_ParamLimits

0xb0af,	// (0x00021095) popup_loc_request_window

0xb0eb,	// (0x000210d1) popup_wml_address_window_ParamLimits

0xb0eb,	// (0x000210d1) popup_wml_address_window

0xaeb5,	// (0x00020e9b) call_muted_g1

0xab77,	// (0x00020b5d) popup_call_audio_conf_window_ParamLimits

0xab77,	// (0x00020b5d) popup_call_audio_conf_window

0xaec5,	// (0x00020eab) popup_call_audio_first_window_ParamLimits

0xaec5,	// (0x00020eab) popup_call_audio_first_window

0xaf05,	// (0x00020eeb) popup_call_audio_in_window_ParamLimits

0xaf05,	// (0x00020eeb) popup_call_audio_in_window

0xaf29,	// (0x00020f0f) popup_call_audio_out_window_ParamLimits

0xaf29,	// (0x00020f0f) popup_call_audio_out_window

0xaf4b,	// (0x00020f31) popup_call_audio_second_window_ParamLimits

0xaf4b,	// (0x00020f31) popup_call_audio_second_window

0xaf7b,	// (0x00020f61) popup_call_audio_wait_window_ParamLimits

0xaf7b,	// (0x00020f61) popup_call_audio_wait_window

0xaf9c,	// (0x00020f82) popup_number_entry_window_ParamLimits

0xaf9c,	// (0x00020f82) popup_number_entry_window

0x072e,	// (0x00016714) bg_popup_call_pane_cp05_ParamLimits

0x072e,	// (0x00016714) bg_popup_call_pane_cp05

0x074e,	// (0x00016734) popup_number_entry_window_t1

0x0761,	// (0x00016747) popup_number_entry_window_t2

0x0773,	// (0x00016759) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x000250e1) popup_number_entry_window_t

0x0785,	// (0x0001676b) text_title_cp2

0x0798,	// (0x0001677e) bg_popup_call_pane_cp_ParamLimits

0x0798,	// (0x0001677e) bg_popup_call_pane_cp

0x07a6,	// (0x0001678c) call_thumbnail_pane

0x07ae,	// (0x00016794) popup_call_audio_in_window_g1_ParamLimits

0x07ae,	// (0x00016794) popup_call_audio_in_window_g1

0x07ba,	// (0x000167a0) popup_call_audio_in_window_g2_ParamLimits

0x07ba,	// (0x000167a0) popup_call_audio_in_window_g2

0x07c6,	// (0x000167ac) popup_call_audio_in_window_g3_ParamLimits

0x07c6,	// (0x000167ac) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000250ea) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000250ea) popup_call_audio_in_window_g

0x07d2,	// (0x000167b8) popup_call_audio_in_window_t1_ParamLimits

0x07d2,	// (0x000167b8) popup_call_audio_in_window_t1

0x07ee,	// (0x000167d4) popup_call_audio_in_window_t2_ParamLimits

0x07ee,	// (0x000167d4) popup_call_audio_in_window_t2

0x080a,	// (0x000167f0) popup_call_audio_in_window_t3_ParamLimits

0x080a,	// (0x000167f0) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000250f1) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000250f1) popup_call_audio_in_window_t

0x0798,	// (0x0001677e) bg_popup_call_pane_cp01_ParamLimits

0x0798,	// (0x0001677e) bg_popup_call_pane_cp01

0x07a6,	// (0x0001678c) call_thumbnail_pane_cp02

0x081d,	// (0x00016803) call_type_pane_cp022

0x0825,	// (0x0001680b) popup_call_audio_out_window_g1_ParamLimits

0x0825,	// (0x0001680b) popup_call_audio_out_window_g1

0x0837,	// (0x0001681d) popup_call_audio_out_window_g2_ParamLimits

0x0837,	// (0x0001681d) popup_call_audio_out_window_g2

0x0843,	// (0x00016829) popup_call_audio_out_window_g3_ParamLimits

0x0843,	// (0x00016829) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000250f8) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000250f8) popup_call_audio_out_window_g

0x0855,	// (0x0001683b) popup_call_audio_out_window_t1_ParamLimits

0x0855,	// (0x0001683b) popup_call_audio_out_window_t1

0x086d,	// (0x00016853) popup_call_audio_out_window_t2_ParamLimits

0x086d,	// (0x00016853) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000250ff) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000250ff) popup_call_audio_out_window_t

0x0882,	// (0x00016868) bg_popup_call_pane_ParamLimits

0x0882,	// (0x00016868) bg_popup_call_pane

0x883e,	// (0x0001e824) call_thumbnail_pane_cp_ParamLimits

0x883e,	// (0x0001e824) call_thumbnail_pane_cp

0x0906,	// (0x000168ec) call_type_pane_cp01_ParamLimits

0x0906,	// (0x000168ec) call_type_pane_cp01

0x094a,	// (0x00016930) popup_call_audio_first_window_g1_ParamLimits

0x094a,	// (0x00016930) popup_call_audio_first_window_g1

0x0996,	// (0x0001697c) popup_call_audio_first_window_g2_ParamLimits

0x0996,	// (0x0001697c) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00025104) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00025104) popup_call_audio_first_window_g

0x09da,	// (0x000169c0) popup_call_audio_first_window_t1_ParamLimits

0x09da,	// (0x000169c0) popup_call_audio_first_window_t1

0x0a86,	// (0x00016a6c) popup_call_audio_first_window_t4_ParamLimits

0x0a86,	// (0x00016a6c) popup_call_audio_first_window_t4

0x0b12,	// (0x00016af8) popup_call_audio_first_window_t5_ParamLimits

0x0b12,	// (0x00016af8) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00025109) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00025109) popup_call_audio_first_window_t

0x0b41,	// (0x00016b27) bg_popup_call_pane_cp02

0x0b4b,	// (0x00016b31) call_type_pane_cp023

0x0b53,	// (0x00016b39) popup_call_audio_wait_window_g1

0x0b5b,	// (0x00016b41) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00025110) popup_call_audio_wait_window_g

0x0b63,	// (0x00016b49) popup_call_audio_wait_window_t3

0x0b71,	// (0x00016b57) bg_popup_call_pane_cp03_ParamLimits

0x0b71,	// (0x00016b57) bg_popup_call_pane_cp03

0x0bd1,	// (0x00016bb7) call_thumbnail_pane_cp011_ParamLimits

0x0bd1,	// (0x00016bb7) call_thumbnail_pane_cp011

0x0bdd,	// (0x00016bc3) call_type_pane_cp034_ParamLimits

0x0bdd,	// (0x00016bc3) call_type_pane_cp034

0x0c19,	// (0x00016bff) popup_call_audio_second_window_g1_ParamLimits

0x0c19,	// (0x00016bff) popup_call_audio_second_window_g1

0x0c55,	// (0x00016c3b) popup_call_audio_second_window_g2_ParamLimits

0x0c55,	// (0x00016c3b) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00025115) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00025115) popup_call_audio_second_window_g

0x0c91,	// (0x00016c77) popup_call_audio_second_window_t1_ParamLimits

0x0c91,	// (0x00016c77) popup_call_audio_second_window_t1

0x0d12,	// (0x00016cf8) popup_call_audio_second_window_t2_ParamLimits

0x0d12,	// (0x00016cf8) popup_call_audio_second_window_t2

0x0d48,	// (0x00016d2e) popup_call_audio_second_window_t3_ParamLimits

0x0d48,	// (0x00016d2e) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0002511a) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0002511a) popup_call_audio_second_window_t

0x0b41,	// (0x00016b27) bg_popup_call_pane_cp04

0x0d7e,	// (0x00016d64) list_conf_pane

0x0d86,	// (0x00016d6c) popup_call_audio_conf_window_t1

0x0d94,	// (0x00016d7a) call_thumbnail_pane_g1

0x0d9c,	// (0x00016d82) bg_pinb_pane_ParamLimits

0x0d9c,	// (0x00016d82) bg_pinb_pane

0x0daa,	// (0x00016d90) find_pinb_pane

0x0db3,	// (0x00016d99) listscroll_pinb_pane_ParamLimits

0x0db3,	// (0x00016d99) listscroll_pinb_pane

0x0dc2,	// (0x00016da8) pinb_bg_pane_g1

0x8862,	// (0x0001e848) pinb_bg_pane_g2

0x886e,	// (0x0001e854) pinb_bg_pane_g3

0x887a,	// (0x0001e860) pinb_bg_pane_g4

0x8886,	// (0x0001e86c) pinb_bg_pane_g5

0x8892,	// (0x0001e878) pinb_bg_pane_g6

0x889d,	// (0x0001e883) pinb_bg_pane_g7

0x88a8,	// (0x0001e88e) pinb_bg_pane_g8

0x88b3,	// (0x0001e899) pinb_bg_pane_g9

0x88bd,	// (0x0001e8a3) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00025121) pinb_bg_pane_g

0x88da,	// (0x0001e8c0) grid_pinb_pane

0x88e5,	// (0x0001e8cb) list_pinb_pane

0x88f0,	// (0x0001e8d6) scroll_pane_cp01_ParamLimits

0x88f0,	// (0x0001e8d6) scroll_pane_cp01

0x0dcc,	// (0x00016db2) find_pinb_pane_g1_ParamLimits

0x0dcc,	// (0x00016db2) find_pinb_pane_g1

0x0de4,	// (0x00016dca) find_pinb_pane_t1

0x0df6,	// (0x00016ddc) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0002513b) find_pinb_pane_t

0x0e0b,	// (0x00016df1) input_focus_pane_cp01_ParamLimits

0x0e0b,	// (0x00016df1) input_focus_pane_cp01

0x8902,	// (0x0001e8e8) cell_pinb_pane_ParamLimits

0x8902,	// (0x0001e8e8) cell_pinb_pane

0x8927,	// (0x0001e90d) cell_pinb_pane_g1_ParamLimits

0x8927,	// (0x0001e90d) cell_pinb_pane_g1

0x893c,	// (0x0001e922) cell_pinb_pane_g2_ParamLimits

0x893c,	// (0x0001e922) cell_pinb_pane_g2

0x0e17,	// (0x00016dfd) cell_pinb_pane_g3_ParamLimits

0x0e17,	// (0x00016dfd) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00025140) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00025140) cell_pinb_pane_g

0x0b41,	// (0x00016b27) grid_highlight_pane_cp01

0x8948,	// (0x0001e92e) list_pinb_item_pane_ParamLimits

0x8948,	// (0x0001e92e) list_pinb_item_pane

0x0b41,	// (0x00016b27) list_highlight_pane_cp02

0x8968,	// (0x0001e94e) list_pinb_item_pane_g1_ParamLimits

0x8968,	// (0x0001e94e) list_pinb_item_pane_g1

0x0e23,	// (0x00016e09) list_pinb_item_pane_g2_ParamLimits

0x0e23,	// (0x00016e09) list_pinb_item_pane_g2

0x8975,	// (0x0001e95b) list_pinb_item_pane_g3_ParamLimits

0x8975,	// (0x0001e95b) list_pinb_item_pane_g3

0x8986,	// (0x0001e96c) list_pinb_item_pane_g4_ParamLimits

0x8986,	// (0x0001e96c) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00025147) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00025147) list_pinb_item_pane_g

0x8992,	// (0x0001e978) list_pinb_item_pane_t1_ParamLimits

0x8992,	// (0x0001e978) list_pinb_item_pane_t1

0x7135,	// (0x0001d11b) calc_display_pane

0x7153,	// (0x0001d139) calc_paper_pane

0x716f,	// (0x0001d155) grid_calc_pane

0x0b41,	// (0x00016b27) bg_list_pane_cp01

0x89a9,	// (0x0001e98f) clock_g1

0x89b1,	// (0x0001e997) clock_g2

0x0001,

0xf16a,	// (0x00025150) clock_g

0x89bb,	// (0x0001e9a1) clock_t1_ParamLimits

0x89bb,	// (0x0001e9a1) clock_t1

0x89d0,	// (0x0001e9b6) clock_t2_ParamLimits

0x89d0,	// (0x0001e9b6) clock_t2

0x89e2,	// (0x0001e9c8) clock_t3_ParamLimits

0x89e2,	// (0x0001e9c8) clock_t3

0x89f4,	// (0x0001e9da) clock_t4_ParamLimits

0x89f4,	// (0x0001e9da) clock_t4

0x8a06,	// (0x0001e9ec) clock_t5_ParamLimits

0x8a06,	// (0x0001e9ec) clock_t5

0x8a1b,	// (0x0001ea01) clock_t6_ParamLimits

0x8a1b,	// (0x0001ea01) clock_t6

0x8a2d,	// (0x0001ea13) clock_t7_ParamLimits

0x8a2d,	// (0x0001ea13) clock_t7

0x8a3f,	// (0x0001ea25) clock_t8_ParamLimits

0x8a3f,	// (0x0001ea25) clock_t8

0x8a55,	// (0x0001ea3b) clock_t9_ParamLimits

0x8a55,	// (0x0001ea3b) clock_t9

0x0008,

0xf16f,	// (0x00025155) clock_t_ParamLimits

0xf16f,	// (0x00025155) clock_t

0x0e37,	// (0x00016e1d) popup_clock_analogue_window_cp02

0x0e37,	// (0x00016e1d) popup_clock_digital_window_cp01

0x0e3f,	// (0x00016e25) listscroll_help_pane

0x0b41,	// (0x00016b27) phob_pre_status_pane

0x0e49,	// (0x00016e2f) grid_qdial_pane

0x0b41,	// (0x00016b27) listscroll_mce_pane

0x0e53,	// (0x00016e39) bg_notes_pane

0x0e5d,	// (0x00016e43) list_notes_pane

0x8a6b,	// (0x0001ea51) scroll_pane_cp06

0x0e67,	// (0x00016e4d) bg_calc_paper_pane

0x71a3,	// (0x0001d189) list_calc_pane

0x0e95,	// (0x00016e7b) bg_calc_display_pane

0x71bd,	// (0x0001d1a3) calc_display_pane_t1

0x71d2,	// (0x0001d1b8) calc_display_pane_t2

0x71e7,	// (0x0001d1cd) calc_display_pane_t3

0x0002,

0xf182,	// (0x00025168) calc_display_pane_t

0x71f9,	// (0x0001d1df) cell_calc_pane_ParamLimits

0x71f9,	// (0x0001d1df) cell_calc_pane

0x0eb3,	// (0x00016e99) bg_calc_paper_pane_g1

0x0ecb,	// (0x00016eb1) bg_calc_paper_pane_g2

0x0ebf,	// (0x00016ea5) bg_calc_paper_pane_g3

0x0ee3,	// (0x00016ec9) bg_calc_paper_pane_g4

0x0ed7,	// (0x00016ebd) bg_calc_paper_pane_g5

0x8a76,	// (0x0001ea5c) bg_calc_paper_pane_g6

0x8a87,	// (0x0001ea6d) bg_calc_paper_pane_g7

0x8a98,	// (0x0001ea7e) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0002516f) bg_calc_paper_pane_g

0x8aa9,	// (0x0001ea8f) calc_bg_paper_pane_g9

0x8aba,	// (0x0001eaa0) list_calc_item_pane_ParamLimits

0x8aba,	// (0x0001eaa0) list_calc_item_pane

0x0eef,	// (0x00016ed5) list_calc_item_pane_g1

0x7226,	// (0x0001d20c) list_calc_item_pane_t1_ParamLimits

0x7226,	// (0x0001d20c) list_calc_item_pane_t1

0x7238,	// (0x0001d21e) list_calc_item_pane_t2_ParamLimits

0x7238,	// (0x0001d21e) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00025180) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00025180) list_calc_item_pane_t

0x0f0e,	// (0x00016ef4) cell_calc_pane_g1

0x0f18,	// (0x00016efe) grid_highlight_pane_cp02

0x8ae9,	// (0x0001eacf) bg_calc_display_pane_g1

0x7268,	// (0x0001d24e) bg_calc_display_pane_g2

0x361c,	// (0x00019602) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0002518a) bg_calc_display_pane_g

0x7272,	// (0x0001d258) cell_qdial_pane_ParamLimits

0x7272,	// (0x0001d258) cell_qdial_pane

0x8af2,	// (0x0001ead8) cell_qdial_pane_g1_ParamLimits

0x8af2,	// (0x0001ead8) cell_qdial_pane_g1

0x8aff,	// (0x0001eae5) cell_qdial_pane_g2_ParamLimits

0x8aff,	// (0x0001eae5) cell_qdial_pane_g2

0x0f3a,	// (0x00016f20) cell_qdial_pane_g3_ParamLimits

0x0f3a,	// (0x00016f20) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00025191) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00025191) cell_qdial_pane_g

0x8b1d,	// (0x0001eb03) cell_qdial_pane_t1_ParamLimits

0x8b1d,	// (0x0001eb03) cell_qdial_pane_t1

0x8b35,	// (0x0001eb1b) cell_qdial_pane_t2_ParamLimits

0x8b35,	// (0x0001eb1b) cell_qdial_pane_t2

0x8b48,	// (0x0001eb2e) cell_qdial_pane_t3_ParamLimits

0x8b48,	// (0x0001eb2e) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0002519a) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0002519a) cell_qdial_pane_t

0x0b41,	// (0x00016b27) grid_highlight_pane_cp04

0x0f46,	// (0x00016f2c) thumbnail_qdial_pane_ParamLimits

0x0f46,	// (0x00016f2c) thumbnail_qdial_pane

0x0fa2,	// (0x00016f88) list_help_pane

0x0fab,	// (0x00016f91) scroll_pane_cp02

0x8b5b,	// (0x0001eb41) help_list_pane_t1_ParamLimits

0x8b5b,	// (0x0001eb41) help_list_pane_t1

0x7286,	// (0x0001d26c) bg_notes_pane_g2

0x728e,	// (0x0001d274) bg_notes_pane_g3

0x7296,	// (0x0001d27c) notes_bg_pane_g1

0x729e,	// (0x0001d284) notes_bg_pane_g4

0x72a6,	// (0x0001d28c) notes_bg_pane_g5

0x72ae,	// (0x0001d294) notes_bg_pane_g6

0x72b6,	// (0x0001d29c) notes_bg_pane_g7

0x72be,	// (0x0001d2a4) notes_bg_pane_g8

0x72c6,	// (0x0001d2ac) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x000251b8) notes_bg_pane_g

0x8b8e,	// (0x0001eb74) list_notes_text_pane_ParamLimits

0x8b8e,	// (0x0001eb74) list_notes_text_pane

0x0ffc,	// (0x00016fe2) list_notes_text_pane_g1

0x8bb3,	// (0x0001eb99) list_notes_text_pane_t1

0x0e95,	// (0x00016e7b) listscroll_cale_week_pane

0x8bde,	// (0x0001ebc4) bg_cale_heading_pane

0x1016,	// (0x00016ffc) bg_cale_pane_cp01

0x8bf2,	// (0x0001ebd8) cale_week_corner_pane

0x8c08,	// (0x0001ebee) cale_week_day_heading_pane

0x8c1c,	// (0x0001ec02) cale_week_scroll_pane_g1

0x8c2d,	// (0x0001ec13) cale_week_scroll_pane_g2

0x8c3e,	// (0x0001ec24) cale_week_scroll_pane_g3

0x8c4f,	// (0x0001ec35) cale_week_scroll_pane_g4

0x8c60,	// (0x0001ec46) cale_week_scroll_pane_g5

0x8c71,	// (0x0001ec57) cale_week_scroll_pane_g6

0x8c82,	// (0x0001ec68) cale_week_scroll_pane_g7

0x8c95,	// (0x0001ec7b) cale_week_scroll_pane_g8

0x8ca8,	// (0x0001ec8e) cale_week_scroll_pane_g9

0x8cb9,	// (0x0001ec9f) cale_week_scroll_pane_g10

0x8cca,	// (0x0001ecb0) cale_week_scroll_pane_g11

0x8cdb,	// (0x0001ecc1) cale_week_scroll_pane_g12

0x8cec,	// (0x0001ecd2) cale_week_scroll_pane_g13

0x8cfd,	// (0x0001ece3) cale_week_scroll_pane_g14

0x8d0e,	// (0x0001ecf4) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x000251c7) cale_week_scroll_pane_g

0x8d1f,	// (0x0001ed05) cale_week_time_pane

0x8d32,	// (0x0001ed18) grid_cale_week_pane

0x8d47,	// (0x0001ed2d) scroll_pane_cp08

0x8d61,	// (0x0001ed47) cell_cale_week_pane_ParamLimits

0x8d61,	// (0x0001ed47) cell_cale_week_pane

0x8d9d,	// (0x0001ed83) cale_week_day_heading_pane_t1

0x8dca,	// (0x0001edb0) cale_week_day_heading_pane_t2

0x8df7,	// (0x0001eddd) cale_week_day_heading_pane_t3

0x8e24,	// (0x0001ee0a) cale_week_day_heading_pane_t4

0x8e51,	// (0x0001ee37) cale_week_day_heading_pane_t5

0x8e7e,	// (0x0001ee64) cale_week_day_heading_pane_t6

0x8eab,	// (0x0001ee91) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x000251e6) cale_week_day_heading_pane_t

0x1041,	// (0x00017027) bg_cale_side_pane

0x72ce,	// (0x0001d2b4) cale_week_time_pane_t1

0x72e6,	// (0x0001d2cc) cale_week_time_pane_t2

0x72fe,	// (0x0001d2e4) cale_week_time_pane_t3

0x7316,	// (0x0001d2fc) cale_week_time_pane_t4

0x732e,	// (0x0001d314) cale_week_time_pane_t5

0x7346,	// (0x0001d32c) cale_week_time_pane_t6

0x735e,	// (0x0001d344) cale_week_time_pane_t7

0x7376,	// (0x0001d35c) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000251f5) cale_week_time_pane_t

0x8ed8,	// (0x0001eebe) cell_cale_week_pane_g2

0x8ef1,	// (0x0001eed7) cell_cale_week_pane_g3_ParamLimits

0x8ef1,	// (0x0001eed7) cell_cale_week_pane_g3

0x104f,	// (0x00017035) grid_highlight_pane_cp07

0x1057,	// (0x0001703d) listscroll_gms_pane

0x1061,	// (0x00017047) grid_gms_pane

0x106a,	// (0x00017050) listscroll_gms_pane_g1

0x1072,	// (0x00017058) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00025206) listscroll_gms_pane_g

0x8f09,	// (0x0001eeef) scroll_pane_cp010

0x8f14,	// (0x0001eefa) cell_gms_pane_ParamLimits

0x8f14,	// (0x0001eefa) cell_gms_pane

0x8f27,	// (0x0001ef0d) cell_gms_pane_g1

0x107a,	// (0x00017060) cell_gms_pane_g2

0x1082,	// (0x00017068) cell_gms_pane_g3

0x108b,	// (0x00017071) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0002520b) cell_gms_pane_g

0x1094,	// (0x0001707a) grid_highlight_pane_cp09

0xae5d,	// (0x00020e43) phob_pre_status_pane_g1

0xae65,	// (0x00020e4b) phob_pre_status_pane_g2

0xae6d,	// (0x00020e53) phob_pre_status_pane_g3

0xae75,	// (0x00020e5b) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x000255fa) phob_pre_status_pane_g

0xae85,	// (0x00020e6b) phob_pre_status_pane_t1

0xae95,	// (0x00020e7b) phob_pre_status_pane_t2

0xaea5,	// (0x00020e8b) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x00025605) phob_pre_status_pane_t

0x0b41,	// (0x00016b27) bg_list_pane_cp05

0x7396,	// (0x0001d37c) grid_vorec_pane

0x73a0,	// (0x0001d386) vorec_t1

0x73ae,	// (0x0001d394) vorec_t2

0x73bc,	// (0x0001d3a2) vorec_t3

0x73ca,	// (0x0001d3b0) vorec_t4

0x73d8,	// (0x0001d3be) vorec_t5

0x73e6,	// (0x0001d3cc) vorec_t6

0x0006,

0xf22e,	// (0x00025214) vorec_t

0x7402,	// (0x0001d3e8) wait_bar_pane_cp01

0x8f2f,	// (0x0001ef15) cell_vorec_pane_ParamLimits

0x8f2f,	// (0x0001ef15) cell_vorec_pane

0x1106,	// (0x000170ec) cell_vorec_pane_g1

0x0b41,	// (0x00016b27) grid_highlight_pane_cp05

0x8f52,	// (0x0001ef38) cams_zoom_pane

0x8f5e,	// (0x0001ef44) image_vga_pane

0x8f6d,	// (0x0001ef53) main_camera_pane_g1

0x8f7b,	// (0x0001ef61) main_camera_pane_g2

0x8f87,	// (0x0001ef6d) main_camera_pane_g3

0x8f93,	// (0x0001ef79) main_camera_pane_g4

0x8f9f,	// (0x0001ef85) main_camera_pane_g5

0x8fab,	// (0x0001ef91) main_camera_pane_g6

0x8fb7,	// (0x0001ef9d) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00025223) main_camera_pane_g

0x8fc3,	// (0x0001efa9) main_camera_pane_t1

0x8fd5,	// (0x0001efbb) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00025234) main_camera_pane_t

0x8ff6,	// (0x0001efdc) cams_zoom_pane_cp_ParamLimits

0x8ff6,	// (0x0001efdc) cams_zoom_pane_cp

0x901a,	// (0x0001f000) image_cif_pane_ParamLimits

0x901a,	// (0x0001f000) image_cif_pane

0x9038,	// (0x0001f01e) image_subqcif_pane

0x9040,	// (0x0001f026) main_video_pane_g1_ParamLimits

0x9040,	// (0x0001f026) main_video_pane_g1

0x9060,	// (0x0001f046) main_video_pane_g2_ParamLimits

0x9060,	// (0x0001f046) main_video_pane_g2

0x9090,	// (0x0001f076) main_video_pane_g3_ParamLimits

0x9090,	// (0x0001f076) main_video_pane_g3

0x90b9,	// (0x0001f09f) main_video_pane_g4_ParamLimits

0x90b9,	// (0x0001f09f) main_video_pane_g4

0x90e2,	// (0x0001f0c8) main_video_pane_g5_ParamLimits

0x90e2,	// (0x0001f0c8) main_video_pane_g5

0x111c,	// (0x00017102) main_video_pane_g6_ParamLimits

0x111c,	// (0x00017102) main_video_pane_g6

0x0006,

0xf253,	// (0x00025239) main_video_pane_g_ParamLimits

0xf253,	// (0x00025239) main_video_pane_g

0x9106,	// (0x0001f0ec) main_video_pane_t1_ParamLimits

0x9106,	// (0x0001f0ec) main_video_pane_t1

0x1136,	// (0x0001711c) cams_zoom_pane_g1

0x113f,	// (0x00017125) cams_zoom_pane_g2

0x1148,	// (0x0001712e) cams_zoom_pane_g3

0x1151,	// (0x00017137) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00025248) cams_zoom_pane_g

0x9150,	// (0x0001f136) grid_cams_pane

0x915e,	// (0x0001f144) linegrid_cams_pane

0x916c,	// (0x0001f152) cell_cams_pane_ParamLimits

0x916c,	// (0x0001f152) cell_cams_pane

0x115a,	// (0x00017140) cams_burst_image_pane

0x1162,	// (0x00017148) cell_cams_pane_g1

0x0b41,	// (0x00016b27) grid_highlight_pane_cp03

0x0f0e,	// (0x00016ef4) mp_bg_pane_g1

0x0b41,	// (0x00016b27) bg_list_pane_cp03

0x3012,	// (0x00018ff8) bg_mp_pane

0x301a,	// (0x00019000) grid_mp_pane

0x3022,	// (0x00019008) media_player_g1

0x302a,	// (0x00019010) media_player_t1

0x3038,	// (0x0001901e) media_player_t2

0x3046,	// (0x0001902c) media_player_t3

0x3054,	// (0x0001903a) media_player_t4

0x3062,	// (0x00019048) media_player_t5

0x3070,	// (0x00019056) media_player_t6

0x307e,	// (0x00019064) media_player_t7

0x0006,

0xf5fe,	// (0x000255e4) media_player_t

0x308c,	// (0x00019072) wait_bar_pane_cp02

0xf5e3,	// (0x000255c9) main_usb_pane_t

0xae54,	// (0x00020e3a) cell_mp_pane

0x0f0e,	// (0x00016ef4) cell_mp_pane_g1

0x0b41,	// (0x00016b27) grid_highlight_pane_cp06

0x120a,	// (0x000171f0) grid_skin_colour_pane

0x1212,	// (0x000171f8) list_highlight_pane_cp03

0x91d6,	// (0x0001f1bc) skin_g1

0x121a,	// (0x00017200) skin_t1

0x1229,	// (0x0001720f) skin_t2

0x0001,

0xf297,	// (0x0002527d) skin_t

0x91e0,	// (0x0001f1c6) cell_skin_colour_pane_ParamLimits

0x91e0,	// (0x0001f1c6) cell_skin_colour_pane

0x1237,	// (0x0001721d) cell_skin_colour_pane_g1

0x922d,	// (0x0001f213) call_video_g1_ParamLimits

0x922d,	// (0x0001f213) call_video_g1

0x923d,	// (0x0001f223) call_video_g2_ParamLimits

0x923d,	// (0x0001f223) call_video_g2

0x0001,

0xf29c,	// (0x00025282) call_video_g_ParamLimits

0xf29c,	// (0x00025282) call_video_g

0x927b,	// (0x0001f261) call_video_uplink_pane_cp1_ParamLimits

0x927b,	// (0x0001f261) call_video_uplink_pane_cp1

0x1251,	// (0x00017237) call_video_uplink_pane_cp2

0x9327,	// (0x0001f30d) video_down_crop_pane_ParamLimits

0x9327,	// (0x0001f30d) video_down_crop_pane

0x940b,	// (0x0001f3f1) video_down_pane_ParamLimits

0x940b,	// (0x0001f3f1) video_down_pane

0x1259,	// (0x0001723f) video_down_subqcif_pane_ParamLimits

0x1259,	// (0x0001723f) video_down_subqcif_pane

0x1271,	// (0x00017257) video_down_subqcif_pane_cp_ParamLimits

0x1271,	// (0x00017257) video_down_subqcif_pane_cp

0x1295,	// (0x0001727b) im_reading_pane_ParamLimits

0x1295,	// (0x0001727b) im_reading_pane

0x94ed,	// (0x0001f4d3) im_writing_pane_ParamLimits

0x94ed,	// (0x0001f4d3) im_writing_pane

0x950b,	// (0x0001f4f1) im_reading_pane_t1

0x12af,	// (0x00017295) list_im_pane

0x12c0,	// (0x000172a6) scroll_pane_cp07

0x955f,	// (0x0001f545) im_writing_pane_t1_ParamLimits

0x955f,	// (0x0001f545) im_writing_pane_t1

0x12d9,	// (0x000172bf) im_writing_pane_t2_ParamLimits

0x12d9,	// (0x000172bf) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0002528c) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0002528c) im_writing_pane_t

0x0b41,	// (0x00016b27) input_focus_pane_cp04

0x0b41,	// (0x00016b27) input_focus_pane_cp05

0x9574,	// (0x0001f55a) list_im_single_pane_ParamLimits

0x9574,	// (0x0001f55a) list_im_single_pane

0x9598,	// (0x0001f57e) list_single_im_pane_t1

0xae18,	// (0x00020dfe) blid_accuracy_pane

0xae20,	// (0x00020e06) blid_compass_pane

0xae2a,	// (0x00020e10) main_location_t1

0xae38,	// (0x00020e1e) main_location_t2

0xae46,	// (0x00020e2c) main_location_t3

0x0002,

0xf60d,	// (0x000255f3) main_location_t

0x0b41,	// (0x00016b27) aid_levels_location

0x0f0e,	// (0x00016ef4) blid_accuracy_pane_g1

0x0f0e,	// (0x00016ef4) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000252ee) blid_accuracy_pane_g

0x1321,	// (0x00017307) wml_content_pane

0x135f,	// (0x00017345) wml_button_pane_ParamLimits

0x135f,	// (0x00017345) wml_button_pane

0x95a7,	// (0x0001f58d) wml_list_single_large_pane_ParamLimits

0x95a7,	// (0x0001f58d) wml_list_single_large_pane

0x95d1,	// (0x0001f5b7) wml_list_single_medium_pane_ParamLimits

0x95d1,	// (0x0001f5b7) wml_list_single_medium_pane

0x9602,	// (0x0001f5e8) wml_list_single_small_pane_ParamLimits

0x9602,	// (0x0001f5e8) wml_list_single_small_pane

0x1373,	// (0x00017359) wml_selection_box_pane_ParamLimits

0x1373,	// (0x00017359) wml_selection_box_pane

0x1386,	// (0x0001736c) wml_list_single_pane_t1

0x1395,	// (0x0001737b) wml_list_single_medium_pane_t1

0x13a4,	// (0x0001738a) wml_list_single_large_pane_t1

0x13b3,	// (0x00017399) input_focus_pane_cp02_ParamLimits

0x13b3,	// (0x00017399) input_focus_pane_cp02

0x13c6,	// (0x000173ac) wml_selection_box_pane_g1

0x13cf,	// (0x000173b5) wml_selection_box_pane_t1_ParamLimits

0x13cf,	// (0x000173b5) wml_selection_box_pane_t1

0x0d9c,	// (0x00016d82) bg_wml_button_pane_ParamLimits

0x0d9c,	// (0x00016d82) bg_wml_button_pane

0x13e7,	// (0x000173cd) wml_button_pane_g1

0x13ef,	// (0x000173d5) wml_button_pane_t1

0x13e7,	// (0x000173cd) wml_button_bg_pane_g1

0x13ff,	// (0x000173e5) wml_button_bg_pane_g2

0x1407,	// (0x000173ed) wml_button_bg_pane_g3

0x140f,	// (0x000173f5) wml_button_bg_pane_g4

0x1417,	// (0x000173fd) wml_button_bg_pane_g5

0x141f,	// (0x00017405) wml_button_bg_pane_g6

0x1427,	// (0x0001740d) wml_button_bg_pane_g7

0x142f,	// (0x00017415) wml_button_bg_pane_g8

0x1437,	// (0x0001741d) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00025291) wml_button_bg_pane_g

0x963c,	// (0x0001f622) bg_list_pane_cp02

0x143f,	// (0x00017425) mce_header_pane_ParamLimits

0x143f,	// (0x00017425) mce_header_pane

0x1455,	// (0x0001743b) mce_icon_pane

0x1455,	// (0x0001743b) mce_image_pane

0x145e,	// (0x00017444) mce_text_pane_ParamLimits

0x145e,	// (0x00017444) mce_text_pane

0x9646,	// (0x0001f62c) scroll_pane_cp03

0x1357,	// (0x0001733d) scroll_pane_cp04

0x1471,	// (0x00017457) scroll_pane_cp05_ParamLimits

0x1471,	// (0x00017457) scroll_pane_cp05

0x9650,	// (0x0001f636) mce_header_field_pane_ParamLimits

0x9650,	// (0x0001f636) mce_header_field_pane

0x9670,	// (0x0001f656) mce_header_field_pane_2_ParamLimits

0x9670,	// (0x0001f656) mce_header_field_pane_2

0x9686,	// (0x0001f66c) mce_header_field_pane_3

0x968e,	// (0x0001f674) list_single_mce_message_pane_ParamLimits

0x968e,	// (0x0001f674) list_single_mce_message_pane

0x96b3,	// (0x0001f699) list_single_mce_smart_pane_ParamLimits

0x96b3,	// (0x0001f699) list_single_mce_smart_pane

0x147d,	// (0x00017463) input_focus_pane_cp03

0x1486,	// (0x0001746c) list_header_data_pane

0x96e3,	// (0x0001f6c9) mce_header_field_pane_t1

0x96f1,	// (0x0001f6d7) list_single_mce_header_pane_ParamLimits

0x96f1,	// (0x0001f6d7) list_single_mce_header_pane

0x148e,	// (0x00017474) list_single_mce_header_pane_t1

0x149d,	// (0x00017483) list_single_mce_message_pane_g1

0x14a5,	// (0x0001748b) list_single_mce_message_pane_t1

0x9735,	// (0x0001f71b) bg_cale_heading_pane_cp01_ParamLimits

0x9735,	// (0x0001f71b) bg_cale_heading_pane_cp01

0x14b3,	// (0x00017499) bg_cale_pane_cp02_ParamLimits

0x14b3,	// (0x00017499) bg_cale_pane_cp02

0x9758,	// (0x0001f73e) cale_month_corner_pane

0x976e,	// (0x0001f754) cale_month_day_heading_pane_ParamLimits

0x976e,	// (0x0001f754) cale_month_day_heading_pane

0x97a1,	// (0x0001f787) cale_month_pane_g1_ParamLimits

0x97a1,	// (0x0001f787) cale_month_pane_g1

0x97bd,	// (0x0001f7a3) cale_month_pane_g2_ParamLimits

0x97bd,	// (0x0001f7a3) cale_month_pane_g2

0x97d8,	// (0x0001f7be) cale_month_pane_g3_ParamLimits

0x97d8,	// (0x0001f7be) cale_month_pane_g3

0x9804,	// (0x0001f7ea) cale_month_pane_g4_ParamLimits

0x9804,	// (0x0001f7ea) cale_month_pane_g4

0x9830,	// (0x0001f816) cale_month_pane_g5_ParamLimits

0x9830,	// (0x0001f816) cale_month_pane_g5

0x985c,	// (0x0001f842) cale_month_pane_g6_ParamLimits

0x985c,	// (0x0001f842) cale_month_pane_g6

0x9888,	// (0x0001f86e) cale_month_pane_g7_ParamLimits

0x9888,	// (0x0001f86e) cale_month_pane_g7

0x98c4,	// (0x0001f8aa) cale_month_pane_g8_ParamLimits

0x98c4,	// (0x0001f8aa) cale_month_pane_g8

0x9900,	// (0x0001f8e6) cale_month_pane_g9_ParamLimits

0x9900,	// (0x0001f8e6) cale_month_pane_g9

0x993a,	// (0x0001f920) cale_month_pane_g10_ParamLimits

0x993a,	// (0x0001f920) cale_month_pane_g10

0x9974,	// (0x0001f95a) cale_month_pane_g11_ParamLimits

0x9974,	// (0x0001f95a) cale_month_pane_g11

0x99ae,	// (0x0001f994) cale_month_pane_g12_ParamLimits

0x99ae,	// (0x0001f994) cale_month_pane_g12

0x99e8,	// (0x0001f9ce) cale_month_pane_g13_ParamLimits

0x99e8,	// (0x0001f9ce) cale_month_pane_g13

0x000c,

0xf2be,	// (0x000252a4) cale_month_pane_g_ParamLimits

0xf2be,	// (0x000252a4) cale_month_pane_g

0x9a22,	// (0x0001fa08) cale_month_week_pane

0x9a35,	// (0x0001fa1b) grid_cale_month_pane_ParamLimits

0x9a35,	// (0x0001fa1b) grid_cale_month_pane

0x9a63,	// (0x0001fa49) cale_month_day_heading_pane_t1

0x9ac1,	// (0x0001faa7) cale_month_day_heading_pane_t2

0x9b26,	// (0x0001fb0c) cale_month_day_heading_pane_t3

0x9b8b,	// (0x0001fb71) cale_month_day_heading_pane_t4

0x9bf0,	// (0x0001fbd6) cale_month_day_heading_pane_t5

0x9c55,	// (0x0001fc3b) cale_month_day_heading_pane_t6

0x9cba,	// (0x0001fca0) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x000252bf) cale_month_day_heading_pane_t

0x1041,	// (0x00017027) bg_cale_side_pane_cp01

0x9d2f,	// (0x0001fd15) cale_month_week_pane_t1

0x9d46,	// (0x0001fd2c) cale_month_week_pane_t2

0x9d5d,	// (0x0001fd43) cale_month_week_pane_t3

0x9d74,	// (0x0001fd5a) cale_month_week_pane_t4

0x9d8b,	// (0x0001fd71) cale_month_week_pane_t5

0x9da2,	// (0x0001fd88) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x000252ce) cale_month_week_pane_t

0x9db9,	// (0x0001fd9f) cell_cale_month_pane_ParamLimits

0x9db9,	// (0x0001fd9f) cell_cale_month_pane

0x740a,	// (0x0001d3f0) cell_cale_month_pane_g1

0x7416,	// (0x0001d3fc) cell_cale_month_pane_t1_ParamLimits

0x7416,	// (0x0001d3fc) cell_cale_month_pane_t1

0x104f,	// (0x00017035) grid_highlight_pane_cp08

0x0f0e,	// (0x00016ef4) main_smil_g1

0x9e6f,	// (0x0001fe55) smil_status_pane

0x151e,	// (0x00017504) smil_text_pane

0x2f32,	// (0x00018f18) bg_popup_call3_rect_pane_g8

0x2f3a,	// (0x00018f20) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00025587) bg_popup_call3_rect_pane_g

0x31c7,	// (0x000191ad) smil_status_volume_pane_g1

0x1528,	// (0x0001750e) smil_status_pane_t1

0x754c,	// (0x0001d532) volume_smil_pane

0x153f,	// (0x00017525) list_smil_text_pane

0x9e82,	// (0x0001fe68) scroll_pane_cp011

0x9e8d,	// (0x0001fe73) smil_text_list_pane_t1_ParamLimits

0x9e8d,	// (0x0001fe73) smil_text_list_pane_t1

0x7432,	// (0x0001d418) aid_volume_smil_ParamLimits

0x7432,	// (0x0001d418) aid_volume_smil

0x0f0e,	// (0x00016ef4) smil_volume_pane_g1

0x0f0e,	// (0x00016ef4) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000252ee) smil_volume_pane_g

0x0e95,	// (0x00016e7b) listscroll_cale_day_pane

0x156b,	// (0x00017551) bg_cale_pane

0x1583,	// (0x00017569) list_cale_pane

0x1594,	// (0x0001757a) scroll_pane_cp09

0x15a5,	// (0x0001758b) cale_bg_pane_g1

0x15ad,	// (0x00017593) cale_bg_pane_g2

0x15b5,	// (0x0001759b) cale_bg_pane_g3

0x15bd,	// (0x000175a3) cale_bg_pane_g4

0x15c5,	// (0x000175ab) cale_bg_pane_g5

0x15cd,	// (0x000175b3) cale_bg_pane_g6

0x15d5,	// (0x000175bb) cale_bg_pane_g7

0x15dd,	// (0x000175c3) cale_bg_pane_g8

0x15e5,	// (0x000175cb) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000252f3) cale_bg_pane_g

0x9f05,	// (0x0001feeb) list_cale_time_pane_ParamLimits

0x9f05,	// (0x0001feeb) list_cale_time_pane

0x15ed,	// (0x000175d3) list_cale_time_pane_g1_ParamLimits

0x15ed,	// (0x000175d3) list_cale_time_pane_g1

0x15f9,	// (0x000175df) list_cale_time_pane_g2_ParamLimits

0x15f9,	// (0x000175df) list_cale_time_pane_g2

0x9f21,	// (0x0001ff07) list_cale_time_pane_g3_ParamLimits

0x9f21,	// (0x0001ff07) list_cale_time_pane_g3

0x9f2f,	// (0x0001ff15) list_cale_time_pane_g4_ParamLimits

0x9f2f,	// (0x0001ff15) list_cale_time_pane_g4

0x9f3d,	// (0x0001ff23) list_cale_time_pane_g5_ParamLimits

0x9f3d,	// (0x0001ff23) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00025306) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00025306) list_cale_time_pane_g

0x1613,	// (0x000175f9) list_cale_time_pane_t1_ParamLimits

0x1613,	// (0x000175f9) list_cale_time_pane_t1

0x163b,	// (0x00017621) list_cale_time_pane_t2_ParamLimits

0x163b,	// (0x00017621) list_cale_time_pane_t2

0xa1ef,	// (0x000201d5) aid_blid_cardinal_pane

0xa231,	// (0x00020217) compass_pane_t4

0x1663,	// (0x00017649) list_cale_time_pane_t4_ParamLimits

0x1663,	// (0x00017649) list_cale_time_pane_t4

0xa23f,	// (0x00020225) compass_pane_t5

0xa24f,	// (0x00020235) compass_pane_t6

0xa25d,	// (0x00020243) compass_pane_t7

0x1b82,	// (0x00017b68) navi_pane_cc_t1

0x1ce9,	// (0x00017ccf) aid_phob_thumbnail_center_pane

0xa91e,	// (0x00020904) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00025313) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00025313) list_cale_time_pane_t

0x0798,	// (0x0001677e) bg_popup_window_pane_cp02_ParamLimits

0x0798,	// (0x0001677e) bg_popup_window_pane_cp02

0x168b,	// (0x00017671) heading_pane_cp01_ParamLimits

0x168b,	// (0x00017671) heading_pane_cp01

0x1697,	// (0x0001767d) loc_req_pane_ParamLimits

0x1697,	// (0x0001767d) loc_req_pane

0x16a7,	// (0x0001768d) loc_type_pane_ParamLimits

0x16a7,	// (0x0001768d) loc_type_pane

0x16b9,	// (0x0001769f) loc_type_pane_t1_ParamLimits

0x16b9,	// (0x0001769f) loc_type_pane_t1

0x16cb,	// (0x000176b1) loc_type_pane_t2_ParamLimits

0x16cb,	// (0x000176b1) loc_type_pane_t2

0x16dd,	// (0x000176c3) loc_type_pane_t3_ParamLimits

0x16dd,	// (0x000176c3) loc_type_pane_t3

0x0002,

0xf334,	// (0x0002531a) loc_type_pane_t_ParamLimits

0xf334,	// (0x0002531a) loc_type_pane_t

0x16ef,	// (0x000176d5) list_loc_req_pane

0x16f9,	// (0x000176df) scroll_pane_cp012

0x9f4b,	// (0x0001ff31) list_single_loc_request_popup_menu_pane_ParamLimits

0x9f4b,	// (0x0001ff31) list_single_loc_request_popup_menu_pane

0x1704,	// (0x000176ea) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1704,	// (0x000176ea) list_single_loc_request_popup_menu_pane_g1

0x1710,	// (0x000176f6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1710,	// (0x000176f6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00025321) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00025321) list_single_loc_request_popup_menu_pane_g

0x171c,	// (0x00017702) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x171c,	// (0x00017702) list_single_loc_request_popup_menu_pane_t1

0x9f5d,	// (0x0001ff43) bg_popup_window_pane_cp03_ParamLimits

0x9f5d,	// (0x0001ff43) bg_popup_window_pane_cp03

0x9f6b,	// (0x0001ff51) heading_loc_req_pane_ParamLimits

0x9f6b,	// (0x0001ff51) heading_loc_req_pane

0x9f77,	// (0x0001ff5d) popup_dyc_status_message_window_g1_ParamLimits

0x9f77,	// (0x0001ff5d) popup_dyc_status_message_window_g1

0x9f83,	// (0x0001ff69) popup_dyc_status_message_window_t1_ParamLimits

0x9f83,	// (0x0001ff69) popup_dyc_status_message_window_t1

0x9f95,	// (0x0001ff7b) popup_dyc_status_message_window_t2_ParamLimits

0x9f95,	// (0x0001ff7b) popup_dyc_status_message_window_t2

0x9fa7,	// (0x0001ff8d) popup_dyc_status_message_window_t3_ParamLimits

0x9fa7,	// (0x0001ff8d) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00025326) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00025326) popup_dyc_status_message_window_t

0x0b41,	// (0x00016b27) bg_heading_pane_cp01

0x173e,	// (0x00017724) heading_loc_req_pane_g1

0x1746,	// (0x0001772c) heading_loc_req_pane_g2

0x174e,	// (0x00017734) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0002532d) heading_loc_req_pane_g

0x1756,	// (0x0001773c) heading_loc_req_pane_t1

0x17da,	// (0x000177c0) bg_popup_sub_pane_cp01_ParamLimits

0x17da,	// (0x000177c0) bg_popup_sub_pane_cp01

0x17e8,	// (0x000177ce) popup_cale_events_window_g1_ParamLimits

0x17e8,	// (0x000177ce) popup_cale_events_window_g1

0x1808,	// (0x000177ee) popup_cale_events_window_g2_ParamLimits

0x1808,	// (0x000177ee) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00025361) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00025361) popup_cale_events_window_g

0x1828,	// (0x0001780e) popup_cale_events_window_t1_ParamLimits

0x1828,	// (0x0001780e) popup_cale_events_window_t1

0x183a,	// (0x00017820) popup_cale_events_window_t2_ParamLimits

0x183a,	// (0x00017820) popup_cale_events_window_t2

0x1878,	// (0x0001785e) popup_cale_events_window_t3_ParamLimits

0x1878,	// (0x0001785e) popup_cale_events_window_t3

0x18b2,	// (0x00017898) popup_cale_events_window_t4_ParamLimits

0x18b2,	// (0x00017898) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00025366) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00025366) popup_cale_events_window_t

0xa02b,	// (0x00020011) call_type_pane

0x1d01,	// (0x00017ce7) popup_call_status_window_g1

0xa037,	// (0x0002001d) popup_call_status_window_g2

0xa043,	// (0x00020029) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0002536f) popup_call_status_window_g

0x18e8,	// (0x000178ce) call_type_pane_g1

0x18f1,	// (0x000178d7) call_type_pane_g2

0x0001,

0xf390,	// (0x00025376) call_type_pane_g

0x0b41,	// (0x00016b27) bg_popup_sub_pane_cp02

0x18fa,	// (0x000178e0) listscroll_popup_wml_pane

0x1902,	// (0x000178e8) list_wml_pane

0x190c,	// (0x000178f2) scroll_pane_cp013

0x1917,	// (0x000178fd) list_single_graphic_popup_wml_pane_ParamLimits

0x1917,	// (0x000178fd) list_single_graphic_popup_wml_pane

0x0f0e,	// (0x00016ef4) list_single_graphic_popup_wml_pane_g1

0x192b,	// (0x00017911) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0002537b) list_single_graphic_popup_wml_pane_g

0x1933,	// (0x00017919) list_single_graphic_popup_wml_pane_t1

0x1941,	// (0x00017927) aid_call_pane

0x0d94,	// (0x00016d7a) popup_clock_analogue_window_g1

0x0d94,	// (0x00016d7a) popup_clock_analogue_window_g2

0x7454,	// (0x0001d43a) popup_clock_analogue_window_g3

0x7454,	// (0x0001d43a) popup_clock_analogue_window_g4

0x0f0e,	// (0x00016ef4) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00025380) popup_clock_analogue_window_g

0x745c,	// (0x0001d442) popup_clock_analogue_window_t1

0x746a,	// (0x0001d450) clock_digital_number_pane_ParamLimits

0x746a,	// (0x0001d450) clock_digital_number_pane

0x7476,	// (0x0001d45c) clock_digital_number_pane_cp02_ParamLimits

0x7476,	// (0x0001d45c) clock_digital_number_pane_cp02

0x7482,	// (0x0001d468) clock_digital_number_pane_cp03_ParamLimits

0x7482,	// (0x0001d468) clock_digital_number_pane_cp03

0x748e,	// (0x0001d474) clock_digital_number_pane_cp04_ParamLimits

0x748e,	// (0x0001d474) clock_digital_number_pane_cp04

0x749e,	// (0x0001d484) clock_digital_separator_pane_ParamLimits

0x749e,	// (0x0001d484) clock_digital_separator_pane

0x74aa,	// (0x0001d490) popup_clock_digital_window_t1

0x0f0e,	// (0x00016ef4) clock_digital_number_pane_g1

0x0f0e,	// (0x00016ef4) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000252ee) clock_digital_number_pane_g

0x0f0e,	// (0x00016ef4) clock_digital_separator_pane_g1

0x0f0e,	// (0x00016ef4) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000252ee) clock_digital_separator_pane_g

0x0b41,	// (0x00016b27) bg_popup_window_pane_cp04

0x19c4,	// (0x000179aa) heading_pane_cp03

0x19cc,	// (0x000179b2) listscroll_popup_gms_pane

0x19d4,	// (0x000179ba) grid_large_graphic_popup_pane

0x19de,	// (0x000179c4) listscroll_popup_gms_pane_g1

0x19e6,	// (0x000179cc) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0002538b) listscroll_popup_gms_pane_g

0x1357,	// (0x0001733d) scroll_pane_cp014

0xa04f,	// (0x00020035) cell_large_graphic_popup_pane_ParamLimits

0xa04f,	// (0x00020035) cell_large_graphic_popup_pane

0xa067,	// (0x0002004d) cell_large_graphic_popup_pane_g1_ParamLimits

0xa067,	// (0x0002004d) cell_large_graphic_popup_pane_g1

0x19ee,	// (0x000179d4) cell_large_graphic_popup_pane_g2_ParamLimits

0x19ee,	// (0x000179d4) cell_large_graphic_popup_pane_g2

0x19fa,	// (0x000179e0) cell_large_graphic_popup_pane_g3_ParamLimits

0x19fa,	// (0x000179e0) cell_large_graphic_popup_pane_g3

0x1a07,	// (0x000179ed) cell_large_graphic_popup_pane_g4_ParamLimits

0x1a07,	// (0x000179ed) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00025390) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00025390) cell_large_graphic_popup_pane_g

0x1a17,	// (0x000179fd) grid_highlight_pane_cp010

0x0f0e,	// (0x00016ef4) bg_popup_call_pane_g1

0x1a21,	// (0x00017a07) list_single_graphic_popup_conf_pane_ParamLimits

0x1a21,	// (0x00017a07) list_single_graphic_popup_conf_pane

0x1a34,	// (0x00017a1a) list_highlight_pane_cp01

0x1a3d,	// (0x00017a23) list_single_graphic_popup_conf_pane_g1

0x1a45,	// (0x00017a2b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00025399) list_single_graphic_popup_conf_pane_g

0x1a4d,	// (0x00017a33) list_single_graphic_popup_conf_pane_t1

0x1a5b,	// (0x00017a41) linegrid_cams_pane_g1

0xa073,	// (0x00020059) linegrid_cams_pane_g2

0x1082,	// (0x00017068) linegrid_cams_pane_g3

0x1a64,	// (0x00017a4a) linegrid_cams_pane_g4

0xa07c,	// (0x00020062) linegrid_cams_pane_g5

0xa085,	// (0x0002006b) linegrid_cams_pane_g6

0x108b,	// (0x00017071) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0002539e) linegrid_cams_pane_g

0x1a6d,	// (0x00017a53) popup_clock_analogue_window

0x1a6d,	// (0x00017a53) popup_clock_digital_window

0x0b41,	// (0x00016b27) popup_phob_thumbnail_window

0x0f0e,	// (0x00016ef4) call_video_uplink_pane_g1

0x1a76,	// (0x00017a5c) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x000253ad) call_video_uplink_pane_g

0x1a7e,	// (0x00017a64) video_uplink_pane

0x1a86,	// (0x00017a6c) mce_image_pane_g1

0xa08e,	// (0x00020074) mce_image_pane_g2

0xa098,	// (0x0002007e) mce_image_pane_g3

0xa0a0,	// (0x00020086) mce_image_pane_g4

0xa0a8,	// (0x0002008e) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x000253b2) mce_image_pane_g

0x1a90,	// (0x00017a76) control_top_pane_stacon_cp01_ParamLimits

0x1a90,	// (0x00017a76) control_top_pane_stacon_cp01

0x1aa4,	// (0x00017a8a) uni_indicator_pane_stacon_cp01_ParamLimits

0x1aa4,	// (0x00017a8a) uni_indicator_pane_stacon_cp01

0x1ab5,	// (0x00017a9b) bg_popup_sub_pane_cp03

0xa0b0,	// (0x00020096) chi_dic_find_pane

0xa0b8,	// (0x0002009e) listscroll_chi_dic_pane

0xa0c1,	// (0x000200a7) main_pane_chidic_g1

0x1abf,	// (0x00017aa5) chi_dic_find_pane_t1

0x1acd,	// (0x00017ab3) find_chidic_pane

0x1ad6,	// (0x00017abc) chi_dic_list_pane_ParamLimits

0x1ad6,	// (0x00017abc) chi_dic_list_pane

0x1ae7,	// (0x00017acd) scroll_pane_cp020

0x1aef,	// (0x00017ad5) find_chidic_pane_t1

0x0b41,	// (0x00016b27) input_focus_pane_cp06

0xa0d4,	// (0x000200ba) list_chi_dic_pane_ParamLimits

0xa0d4,	// (0x000200ba) list_chi_dic_pane

0xa0ee,	// (0x000200d4) list_chi_dic_pane_t1_ParamLimits

0xa0ee,	// (0x000200d4) list_chi_dic_pane_t1

0x0b41,	// (0x00016b27) list_highlight_pane_cp020

0x1afe,	// (0x00017ae4) bg_cale_heading_pane_g1

0xa101,	// (0x000200e7) bg_cale_heading_pane_g2

0xa109,	// (0x000200ef) bg_cale_heading_pane_g3

0xa111,	// (0x000200f7) bg_cale_heading_pane_g4

0xa11b,	// (0x00020101) bg_cale_heading_pane_g5

0xa125,	// (0x0002010b) bg_cale_heading_pane_g6

0xa12d,	// (0x00020113) bg_cale_heading_pane_g7

0xa135,	// (0x0002011b) bg_cale_heading_pane_g8

0xa13f,	// (0x00020125) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x000253bd) bg_cale_heading_pane_g

0x1afe,	// (0x00017ae4) bg_cale_side_pane_g1

0xa149,	// (0x0002012f) bg_cale_side_pane_g2

0xa151,	// (0x00020137) bg_cale_side_pane_g3

0xa159,	// (0x0002013f) bg_cale_side_pane_g4

0xa161,	// (0x00020147) bg_cale_side_pane_g5

0xa169,	// (0x0002014f) bg_cale_side_pane_g6

0xa171,	// (0x00020157) bg_cale_side_pane_g7

0xa179,	// (0x0002015f) bg_cale_side_pane_g8

0xa181,	// (0x00020167) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000253d0) bg_cale_side_pane_g

0xa189,	// (0x0002016f) popup_call_status_window_ParamLimits

0xa189,	// (0x0002016f) popup_call_status_window

0x1b06,	// (0x00017aec) stacon_top_pane

0x1b0e,	// (0x00017af4) status_pane_ParamLimits

0x1b0e,	// (0x00017af4) status_pane

0x1b23,	// (0x00017b09) status_small_pane

0x1b2b,	// (0x00017b11) control_pane

0x0b41,	// (0x00016b27) stacon_bottom_pane

0x1b33,	// (0x00017b19) list_single_mce_smart_pane_t1_ParamLimits

0x1b33,	// (0x00017b19) list_single_mce_smart_pane_t1

0x1b46,	// (0x00017b2c) list_single_mce_smart_pane_t2_ParamLimits

0x1b46,	// (0x00017b2c) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x000253e3) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x000253e3) list_single_mce_smart_pane_t

0xa195,	// (0x0002017b) compass_pane

0xa1a1,	// (0x00020187) main_location2_pane_t1

0xa1b5,	// (0x0002019b) main_location2_pane_t2

0xa1c9,	// (0x000201af) main_location2_pane_t3

0x0003,

0xf402,	// (0x000253e8) main_location2_pane_t

0x1b65,	// (0x00017b4b) compass_pane_g1_ParamLimits

0x1b65,	// (0x00017b4b) compass_pane_g1

0xa213,	// (0x000201f9) compass_pane_t1

0xa222,	// (0x00020208) compass_pane_t2

0x0005,

0xf40b,	// (0x000253f1) compass_pane_t

0xa26d,	// (0x00020253) text_secondary_cp61

0x1b79,	// (0x00017b5f) navi_pane_cams_g5

0x1b9c,	// (0x00017b82) navi_pane_im_t1

0x1baa,	// (0x00017b90) navi_pane_mp_g1_ParamLimits

0x1baa,	// (0x00017b90) navi_pane_mp_g1

0x1bbe,	// (0x00017ba4) navi_pane_mp_g2_ParamLimits

0x1bbe,	// (0x00017ba4) navi_pane_mp_g2

0x1bca,	// (0x00017bb0) navi_pane_mp_g3_ParamLimits

0x1bca,	// (0x00017bb0) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00025405) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00025405) navi_pane_mp_g

0x1bd6,	// (0x00017bbc) navi_pane_mp_t1

0x1be4,	// (0x00017bca) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0002540c) navi_pane_mp_t

0x1c20,	// (0x00017c06) navi_pane_vt_g1

0x1bd6,	// (0x00017bbc) navi_pane_vt_t1

0x1c28,	// (0x00017c0e) navi_slider_pane

0x1c30,	// (0x00017c16) zooming_pane

0x1c38,	// (0x00017c1e) navi_slider_pane_g1

0x74c7,	// (0x0001d4ad) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00025413) navi_slider_pane_g

0x1c6e,	// (0x00017c54) aid_levels_zoom

0x1c76,	// (0x00017c5c) zooming_pane_g1

0x1c7e,	// (0x00017c64) zooming_pane_g2

0x1c7e,	// (0x00017c64) zooming_pane_g3

0x0002,

0xf43c,	// (0x00025422) zooming_pane_g

0x1c86,	// (0x00017c6c) level_10_zoom

0x1c8f,	// (0x00017c75) level_11_zoom

0x1c98,	// (0x00017c7e) level_1_zoom

0x1ca1,	// (0x00017c87) level_2_zoom

0x1caa,	// (0x00017c90) level_3_zoom

0x1cb3,	// (0x00017c99) level_4_zoom

0x1cbc,	// (0x00017ca2) level_5_zoom

0x1cc5,	// (0x00017cab) level_6_zoom

0x1cce,	// (0x00017cb4) level_7_zoom

0x1cd7,	// (0x00017cbd) level_8_zoom

0x1ce0,	// (0x00017cc6) level_9_zoom

0x1cf1,	// (0x00017cd7) popup_phob_thumbnail_window_g1

0x1cf9,	// (0x00017cdf) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00025429) popup_phob_thumbnail_window_g

0x3094,	// (0x0001907a) level_1_location

0x309c,	// (0x00019082) level_2_location

0x30a4,	// (0x0001908a) level_3_location

0x30ac,	// (0x00019092) level_4_location

0x1c30,	// (0x00017c16) level_5_location

0xa382,	// (0x00020368) mce_icon_pane_g1

0xa38a,	// (0x00020370) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0002542e) mce_icon_pane_g

0xa392,	// (0x00020378) main_mup_pane_g1_ParamLimits

0xa392,	// (0x00020378) main_mup_pane_g1

0xa3aa,	// (0x00020390) main_mup_pane_g2_ParamLimits

0xa3aa,	// (0x00020390) main_mup_pane_g2

0xa3c6,	// (0x000203ac) main_mup_pane_g3_ParamLimits

0xa3c6,	// (0x000203ac) main_mup_pane_g3

0xa3e2,	// (0x000203c8) main_mup_pane_g4_ParamLimits

0xa3e2,	// (0x000203c8) main_mup_pane_g4

0xa3fe,	// (0x000203e4) main_mup_pane_g5_ParamLimits

0xa3fe,	// (0x000203e4) main_mup_pane_g5

0xa41f,	// (0x00020405) main_mup_pane_g6_ParamLimits

0xa41f,	// (0x00020405) main_mup_pane_g6

0xa43b,	// (0x00020421) main_mup_pane_g7_ParamLimits

0xa43b,	// (0x00020421) main_mup_pane_g7

0xa457,	// (0x0002043d) main_mup_pane_g8_ParamLimits

0xa457,	// (0x0002043d) main_mup_pane_g8

0xa477,	// (0x0002045d) main_mup_pane_g9_ParamLimits

0xa477,	// (0x0002045d) main_mup_pane_g9

0xa496,	// (0x0002047c) main_mup_pane_g10_ParamLimits

0xa496,	// (0x0002047c) main_mup_pane_g10

0xa4b5,	// (0x0002049b) main_mup_pane_g11_ParamLimits

0xa4b5,	// (0x0002049b) main_mup_pane_g11

0xa4cd,	// (0x000204b3) main_mup_pane_g12_ParamLimits

0xa4cd,	// (0x000204b3) main_mup_pane_g12

0xa4db,	// (0x000204c1) main_mup_pane_g13_ParamLimits

0xa4db,	// (0x000204c1) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00025433) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00025433) main_mup_pane_g

0xa4f1,	// (0x000204d7) main_mup_pane_t1_ParamLimits

0xa4f1,	// (0x000204d7) main_mup_pane_t1

0xa50e,	// (0x000204f4) main_mup_pane_t2_ParamLimits

0xa50e,	// (0x000204f4) main_mup_pane_t2

0xa528,	// (0x0002050e) main_mup_pane_t3_ParamLimits

0xa528,	// (0x0002050e) main_mup_pane_t3

0xa542,	// (0x00020528) main_mup_pane_t4_ParamLimits

0xa542,	// (0x00020528) main_mup_pane_t4

0xa554,	// (0x0002053a) main_mup_pane_t5_ParamLimits

0xa554,	// (0x0002053a) main_mup_pane_t5

0xa566,	// (0x0002054c) main_mup_pane_t6_ParamLimits

0xa566,	// (0x0002054c) main_mup_pane_t6

0x0005,

0xf468,	// (0x0002544e) main_mup_pane_t_ParamLimits

0xf468,	// (0x0002544e) main_mup_pane_t

0xa57c,	// (0x00020562) mup_progress_pane_ParamLimits

0xa57c,	// (0x00020562) mup_progress_pane

0xa588,	// (0x0002056e) mup_visualizer_pane_ParamLimits

0xa588,	// (0x0002056e) mup_visualizer_pane

0xa5c2,	// (0x000205a8) mup_volume_pane_ParamLimits

0xa5c2,	// (0x000205a8) mup_volume_pane

0x1d01,	// (0x00017ce7) mup_visualizer_pane_g1_ParamLimits

0x1d01,	// (0x00017ce7) mup_visualizer_pane_g1

0x1d01,	// (0x00017ce7) mup_visualizer_pane_g2_ParamLimits

0x1d01,	// (0x00017ce7) mup_visualizer_pane_g2

0x1b65,	// (0x00017b4b) mup_visualizer_pane_g3_ParamLimits

0x1b65,	// (0x00017b4b) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0002545b) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0002545b) mup_visualizer_pane_g

0x0f0e,	// (0x00016ef4) mup_volume_pane_g1

0x1d17,	// (0x00017cfd) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00025462) mup_volume_pane_g

0x0f0e,	// (0x00016ef4) mup_progress_pane_g1

0x1d20,	// (0x00017d06) mup_progress_pane_g2

0x1d29,	// (0x00017d0f) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00025467) mup_progress_pane_g

0x0b41,	// (0x00016b27) bg_popup_window_pane_cp05

0x1d32,	// (0x00017d18) heading_pane_cp02_ParamLimits

0x1d32,	// (0x00017d18) heading_pane_cp02

0x1d4c,	// (0x00017d32) list_popup_blid_pane

0x1d54,	// (0x00017d3a) list_blid_sat_info_pane_ParamLimits

0x1d54,	// (0x00017d3a) list_blid_sat_info_pane

0x1d67,	// (0x00017d4d) list_blid_sat_info_pane_g1

0x1d6f,	// (0x00017d55) list_blid_sat_info_pane_t1

0xa6cf,	// (0x000206b5) mup_equalizer_pane_ParamLimits

0xa6cf,	// (0x000206b5) mup_equalizer_pane

0xa6f0,	// (0x000206d6) mup_equalizer_pane_cp1_ParamLimits

0xa6f0,	// (0x000206d6) mup_equalizer_pane_cp1

0xa711,	// (0x000206f7) mup_equalizer_pane_cp2_ParamLimits

0xa711,	// (0x000206f7) mup_equalizer_pane_cp2

0xa732,	// (0x00020718) mup_equalizer_pane_cp3_ParamLimits

0xa732,	// (0x00020718) mup_equalizer_pane_cp3

0xa753,	// (0x00020739) mup_equalizer_pane_cp4_ParamLimits

0xa753,	// (0x00020739) mup_equalizer_pane_cp4

0xa774,	// (0x0002075a) mup_equalizer_pane_cp5

0xa78a,	// (0x00020770) mup_equalizer_pane_cp6

0xa7a2,	// (0x00020788) mup_equalizer_pane_cp7

0x2fb2,	// (0x00018f98) bg_popup_call_poc_act_pane_g9

0x2fba,	// (0x00018fa0) bg_popup_call_poc_act_pane_g10

0x2fc2,	// (0x00018fa8) bg_popup_call_poc_act_pane_g11

0x000a,

0x0d9c,	// (0x00016d82) mup_scale_pane

0x0f0e,	// (0x00016ef4) mup_scale_pane_g1

0x1d7d,	// (0x00017d63) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00025483) mup_scale_pane_g

0x1da1,	// (0x00017d87) msg_data_pane

0x1da9,	// (0x00017d8f) scroll_pane_cp017

0xa7cc,	// (0x000207b2) bg_list_pane_cp04_ParamLimits

0xa7cc,	// (0x000207b2) bg_list_pane_cp04

0x1db9,	// (0x00017d9f) msg_data_pane_g1

0xa7e8,	// (0x000207ce) msg_data_pane_g2

0xa7f2,	// (0x000207d8) msg_data_pane_g3

0xa7fa,	// (0x000207e0) msg_data_pane_g4

0xa802,	// (0x000207e8) msg_data_pane_g5

0xa80a,	// (0x000207f0) msg_data_pane_g6

0xa812,	// (0x000207f8) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00025492) msg_data_pane_g

0xa81a,	// (0x00020800) msg_text_pane_ParamLimits

0xa81a,	// (0x00020800) msg_text_pane

0xa856,	// (0x0002083c) qrid_highlight_pane_cp011_ParamLimits

0xa856,	// (0x0002083c) qrid_highlight_pane_cp011

0x0b41,	// (0x00016b27) msg_body_pane

0x0b41,	// (0x00016b27) msg_header_pane

0x1dca,	// (0x00017db0) input_focus_pane_cp07

0xa87c,	// (0x00020862) msg_header_pane_t1_ParamLimits

0xa87c,	// (0x00020862) msg_header_pane_t1

0x1ddf,	// (0x00017dc5) msg_header_pane_t2_ParamLimits

0x1ddf,	// (0x00017dc5) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x000254a6) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x000254a6) msg_header_pane_t

0x1df1,	// (0x00017dd7) msg_body_pane_g1

0x1df9,	// (0x00017ddf) msg_body_pane_t1_ParamLimits

0x1df9,	// (0x00017ddf) msg_body_pane_t1

0x1e2a,	// (0x00017e10) msg_body_pane_t2_ParamLimits

0x1e2a,	// (0x00017e10) msg_body_pane_t2

0x1e3c,	// (0x00017e22) msg_body_pane_t3_ParamLimits

0x1e3c,	// (0x00017e22) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x000254ab) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x000254ab) msg_body_pane_t

0x7509,	// (0x0001d4ef) main_viewer_pane_g1_ParamLimits

0x7509,	// (0x0001d4ef) main_viewer_pane_g1

0x7515,	// (0x0001d4fb) main_viewer_pane_g2_ParamLimits

0x7515,	// (0x0001d4fb) main_viewer_pane_g2

0xa8b0,	// (0x00020896) main_viewer_pane_g3_ParamLimits

0xa8b0,	// (0x00020896) main_viewer_pane_g3

0xa8c1,	// (0x000208a7) main_viewer_pane_g4_ParamLimits

0xa8c1,	// (0x000208a7) main_viewer_pane_g4

0x7521,	// (0x0001d507) main_viewer_pane_g5_ParamLimits

0x7521,	// (0x0001d507) main_viewer_pane_g5

0x7521,	// (0x0001d507) main_viewer_pane_g7_ParamLimits

0x7521,	// (0x0001d507) main_viewer_pane_g7

0x1704,	// (0x000176ea) main_viewer_pane_g8_ParamLimits

0x1704,	// (0x000176ea) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x000254bb) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x000254bb) main_viewer_pane_g

0x1e90,	// (0x00017e76) viewer_content_pane_ParamLimits

0x1e90,	// (0x00017e76) viewer_content_pane

0xa8f2,	// (0x000208d8) main_postcard_pane_g1_ParamLimits

0xa8f2,	// (0x000208d8) main_postcard_pane_g1

0xa900,	// (0x000208e6) main_postcard_pane_g2_ParamLimits

0xa900,	// (0x000208e6) main_postcard_pane_g2

0xa90e,	// (0x000208f4) main_postcard_pane_g3_ParamLimits

0xa90e,	// (0x000208f4) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x000254cc) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x000254cc) main_postcard_pane_g

0xa91e,	// (0x00020904) main_postcard_pane_g4

0x31b4,	// (0x0001919a) smil_status_volume_pane_g2

0xa94a,	// (0x00020930) postcard_pane_ParamLimits

0xa94a,	// (0x00020930) postcard_pane

0x1d01,	// (0x00017ce7) postcard_pane_g1_ParamLimits

0x1d01,	// (0x00017ce7) postcard_pane_g1

0xa97c,	// (0x00020962) postcard_pane_g2_ParamLimits

0xa97c,	// (0x00020962) postcard_pane_g2

0xa988,	// (0x0002096e) postcard_pane_g3_ParamLimits

0xa988,	// (0x0002096e) postcard_pane_g3

0x1eac,	// (0x00017e92) postcard_pane_g4_ParamLimits

0x1eac,	// (0x00017e92) postcard_pane_g4

0xa994,	// (0x0002097a) postcard_pane_g5_ParamLimits

0xa994,	// (0x0002097a) postcard_pane_g5

0xa9a0,	// (0x00020986) postcard_pane_g6_ParamLimits

0xa9a0,	// (0x00020986) postcard_pane_g6

0x1e9e,	// (0x00017e84) postcard_pane_g7_ParamLimits

0x1e9e,	// (0x00017e84) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000254d9) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000254d9) postcard_pane_g

0xa9ac,	// (0x00020992) main_mp2_pane_g1_ParamLimits

0xa9ac,	// (0x00020992) main_mp2_pane_g1

0xa9b8,	// (0x0002099e) main_mp2_pane_g2_ParamLimits

0xa9b8,	// (0x0002099e) main_mp2_pane_g2

0xa9c4,	// (0x000209aa) main_mp2_pane_g3_ParamLimits

0xa9c4,	// (0x000209aa) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000254e8) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000254e8) main_mp2_pane_g

0xa9d0,	// (0x000209b6) main_mp2_pane_t1_ParamLimits

0xa9d0,	// (0x000209b6) main_mp2_pane_t1

0xa9e7,	// (0x000209cd) main_mp2_pane_t2_ParamLimits

0xa9e7,	// (0x000209cd) main_mp2_pane_t2

0xa9fb,	// (0x000209e1) main_mp2_pane_t3_ParamLimits

0xa9fb,	// (0x000209e1) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000254ef) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000254ef) main_mp2_pane_t

0x1eba,	// (0x00017ea0) pec_content_pane_ParamLimits

0x1eba,	// (0x00017ea0) pec_content_pane

0x1357,	// (0x0001733d) scroll_pane_cp015

0x1ecc,	// (0x00017eb2) pec_attribute_pane_ParamLimits

0x1ecc,	// (0x00017eb2) pec_attribute_pane

0xaa0d,	// (0x000209f3) pec_content_pane_g1_ParamLimits

0xaa0d,	// (0x000209f3) pec_content_pane_g1

0x1edc,	// (0x00017ec2) pec_content_pane_t1_ParamLimits

0x1edc,	// (0x00017ec2) pec_content_pane_t1

0x1eee,	// (0x00017ed4) pec_content_pane_t2_ParamLimits

0x1eee,	// (0x00017ed4) pec_content_pane_t2

0x0001,

0xf510,	// (0x000254f6) pec_content_pane_t_ParamLimits

0xf510,	// (0x000254f6) pec_content_pane_t

0xaa19,	// (0x000209ff) list_single_graphic_pane_cp01_ParamLimits

0xaa19,	// (0x000209ff) list_single_graphic_pane_cp01

0x0d9c,	// (0x00016d82) bg_popup_sub_pane_cp04

0x1f00,	// (0x00017ee6) popup_mup_playback_window_g1

0x1f0c,	// (0x00017ef2) popup_mup_playback_window_t1

0x1f21,	// (0x00017f07) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x000254fb) popup_mup_playback_window_t

0x1f58,	// (0x00017f3e) main_image_pane_g1_ParamLimits

0x1f58,	// (0x00017f3e) main_image_pane_g1

0x1f9b,	// (0x00017f81) scroll_pane_cp018_ParamLimits

0x1f9b,	// (0x00017f81) scroll_pane_cp018

0x1fb3,	// (0x00017f99) scroll_pane_cp016_ParamLimits

0x1fb3,	// (0x00017f99) scroll_pane_cp016

0xaab2,	// (0x00020a98) smil2_image_pane_ParamLimits

0xaab2,	// (0x00020a98) smil2_image_pane

0xaae2,	// (0x00020ac8) smil2_root_pane_ParamLimits

0xaae2,	// (0x00020ac8) smil2_root_pane

0xab0e,	// (0x00020af4) smil2_text_pane_ParamLimits

0xab0e,	// (0x00020af4) smil2_text_pane

0x0b41,	// (0x00016b27) bg_list_pane_cp06

0x1fef,	// (0x00017fd5) grid_radio_pane

0x0b41,	// (0x00016b27) bg_popup_window_pane_cp06

0x1ff7,	// (0x00017fdd) main_fmradio_pane_t1

0x19c4,	// (0x000179aa) heading_pane_cp04

0x2005,	// (0x00017feb) main_fmradio_pane_t2

0x2fca,	// (0x00018fb0) popup_cale_lunar_info_window_g1

0x2013,	// (0x00017ff9) main_fmradio_pane_t3

0x2fd2,	// (0x00018fb8) popup_cale_lunar_info_window_g2

0x2021,	// (0x00018007) main_fmradio_pane_t4

0x0001,

0x202f,	// (0x00018015) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x000255d6) popup_cale_lunar_info_window_g

0xf52a,	// (0x00025510) main_fmradio_pane_t

0x203d,	// (0x00018023) wait_bar_pane_cp03

0x2045,	// (0x0001802b) cell_fmradio_pane_ParamLimits

0x2045,	// (0x0001802b) cell_fmradio_pane

0x1e9e,	// (0x00017e84) cell_fmradio_pane_g1_ParamLimits

0x1e9e,	// (0x00017e84) cell_fmradio_pane_g1

0x0b41,	// (0x00016b27) grid_highlight_pane_cp011

0x2058,	// (0x0001803e) poc_content_pane_ParamLimits

0x2058,	// (0x0001803e) poc_content_pane

0x206a,	// (0x00018050) scroll_pane_cp019

0xab4e,	// (0x00020b34) popup_call_poc_act_window_ParamLimits

0xab4e,	// (0x00020b34) popup_call_poc_act_window

0xab5b,	// (0x00020b41) popup_call_poc_inact_window_ParamLimits

0xab5b,	// (0x00020b41) popup_call_poc_inact_window

0xf5c7,	// (0x000255ad) bg_popup_call_poc_act_pane_g

0x2f42,	// (0x00018f28) bg_popup_call_poc_inact_pane_g1

0x2f4a,	// (0x00018f30) bg_popup_call_poc_inact_pane_g2

0x2072,	// (0x00018058) popup_call_poc_act_window_g2

0x2f52,	// (0x00018f38) bg_popup_call_poc_inact_pane_g3

0x2f5a,	// (0x00018f40) bg_popup_call_poc_inact_pane_g4

0x2f62,	// (0x00018f48) bg_popup_call_poc_inact_pane_g5

0x207a,	// (0x00018060) popup_call_poc_act_window_t1_ParamLimits

0x207a,	// (0x00018060) popup_call_poc_act_window_t1

0x20a2,	// (0x00018088) popup_call_poc_act_window_t2_ParamLimits

0x20a2,	// (0x00018088) popup_call_poc_act_window_t2

0x20ca,	// (0x000180b0) popup_call_poc_act_window_t3_ParamLimits

0x20ca,	// (0x000180b0) popup_call_poc_act_window_t3

0x20f2,	// (0x000180d8) popup_call_poc_act_window_t4_ParamLimits

0x20f2,	// (0x000180d8) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0002551b) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0002551b) popup_call_poc_act_window_t

0x2f6a,	// (0x00018f50) bg_popup_call_poc_inact_pane_g6

0x2f72,	// (0x00018f58) bg_popup_call_poc_inact_pane_g7

0x2f7a,	// (0x00018f60) bg_popup_call_poc_inact_pane_g8

0x2104,	// (0x000180ea) popup_call_poc_inact_window_g2

0x2f82,	// (0x00018f68) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0002559a) bg_popup_call_poc_inact_pane_g

0x210c,	// (0x000180f2) popup_call_poc_inact_window_t1_ParamLimits

0x210c,	// (0x000180f2) popup_call_poc_inact_window_t1

0x2121,	// (0x00018107) popup_call_poc_inact_window_t2_ParamLimits

0x2121,	// (0x00018107) popup_call_poc_inact_window_t2

0x2136,	// (0x0001811c) popup_call_poc_inact_window_t3_ParamLimits

0x2136,	// (0x0001811c) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00025524) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00025524) popup_call_poc_inact_window_t

0x313a,	// (0x00019120) context_pane_ParamLimits

0xb14b,	// (0x00021131) signal_pane_ParamLimits

0x1c30,	// (0x00017c16) main_call2_pane

0x3128,	// (0x0001910e) popup_phob_thumbnail2_window_ParamLimits

0x3128,	// (0x0001910e) popup_phob_thumbnail2_window

0x74d9,	// (0x0001d4bf) aid_hotspot_pointer_arrow_pane

0x74e1,	// (0x0001d4c7) aid_hotspot_pointer_hand_pane

0xae7d,	// (0x00020e63) phob_pre_status_pane_g5

0x8f52,	// (0x0001ef38) cams_zoom_pane_ParamLimits

0x8f5e,	// (0x0001ef44) image_vga_pane_ParamLimits

0x8f6d,	// (0x0001ef53) main_camera_pane_g1_ParamLimits

0x8f7b,	// (0x0001ef61) main_camera_pane_g2_ParamLimits

0x8f87,	// (0x0001ef6d) main_camera_pane_g3_ParamLimits

0x8f93,	// (0x0001ef79) main_camera_pane_g4_ParamLimits

0x8f9f,	// (0x0001ef85) main_camera_pane_g5_ParamLimits

0x8fab,	// (0x0001ef91) main_camera_pane_g6_ParamLimits

0x8fb7,	// (0x0001ef9d) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00025223) main_camera_pane_g_ParamLimits

0x8fc3,	// (0x0001efa9) main_camera_pane_t1_ParamLimits

0x8fd5,	// (0x0001efbb) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00025234) main_camera_pane_t_ParamLimits

0x0d9c,	// (0x00016d82) bg_popup_preview_window_pane_cp01_ParamLimits

0x0d9c,	// (0x00016d82) bg_popup_preview_window_pane_cp01

0x214b,	// (0x00018131) popup_phob_thumbnail2_window_g1_ParamLimits

0x214b,	// (0x00018131) popup_phob_thumbnail2_window_g1

0x0b41,	// (0x00016b27) call2_cli_visual_pane

0xab77,	// (0x00020b5d) popup_call2_audio_conf_window_ParamLimits

0xab77,	// (0x00020b5d) popup_call2_audio_conf_window

0xab8c,	// (0x00020b72) popup_call2_audio_first_window_ParamLimits

0xab8c,	// (0x00020b72) popup_call2_audio_first_window

0xac2a,	// (0x00020c10) popup_call2_audio_in_window_ParamLimits

0xac2a,	// (0x00020c10) popup_call2_audio_in_window

0xac6c,	// (0x00020c52) popup_call2_audio_out_window_ParamLimits

0xac6c,	// (0x00020c52) popup_call2_audio_out_window

0xacce,	// (0x00020cb4) popup_call2_audio_second_window_ParamLimits

0xacce,	// (0x00020cb4) popup_call2_audio_second_window

0xad2c,	// (0x00020d12) popup_call2_audio_wait_window_ParamLimits

0xad2c,	// (0x00020d12) popup_call2_audio_wait_window

0x0b41,	// (0x00016b27) bg_popup_call2_act_pane_cp03

0x0d7e,	// (0x00016d64) list_conf_pane_cp

0x2157,	// (0x0001813d) popup_call2_audio_conf_window_t1

0x1a21,	// (0x00017a07) list_single_graphic_popup_conf2_pane_ParamLimits

0x1a21,	// (0x00017a07) list_single_graphic_popup_conf2_pane

0x1a34,	// (0x00017a1a) list_highlight_pane_cp04

0x2165,	// (0x0001814b) list_single_graphic_popup_conf2_pane_g1

0x1a45,	// (0x00017a2b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0002552b) list_single_graphic_popup_conf2_pane_g

0x216f,	// (0x00018155) list_single_graphic_popup_conf2_pane_t1

0x217d,	// (0x00018163) bg_popup_call2_act_pane_cp01_ParamLimits

0x217d,	// (0x00018163) bg_popup_call2_act_pane_cp01

0x2207,	// (0x000181ed) call_type_pane_cp05_ParamLimits

0x2207,	// (0x000181ed) call_type_pane_cp05

0x225b,	// (0x00018241) popup_call2_audio_second_window_g1_ParamLimits

0x225b,	// (0x00018241) popup_call2_audio_second_window_g1

0x22af,	// (0x00018295) popup_call2_audio_second_window_g2_ParamLimits

0x22af,	// (0x00018295) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00025530) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00025530) popup_call2_audio_second_window_g

0x2314,	// (0x000182fa) popup_call2_audio_second_window_t1_ParamLimits

0x2314,	// (0x000182fa) popup_call2_audio_second_window_t1

0x23cf,	// (0x000183b5) popup_call2_audio_second_window_t2_ParamLimits

0x23cf,	// (0x000183b5) popup_call2_audio_second_window_t2

0x2422,	// (0x00018408) popup_call2_audio_second_window_t3_ParamLimits

0x2422,	// (0x00018408) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00025537) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00025537) popup_call2_audio_second_window_t

0x0b41,	// (0x00016b27) bg_popup_call2_in_pane_cp02

0x0b4b,	// (0x00016b31) call_type_pane_cp04

0x0b53,	// (0x00016b39) popup_call2_audio_wait_window_g1

0x0b5b,	// (0x00016b41) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00025110) popup_call2_audio_wait_window_g

0x0b63,	// (0x00016b49) popup_call2_audio_wait_window_t3

0x2515,	// (0x000184fb) bg_popup_call2_act_pane_ParamLimits

0x2515,	// (0x000184fb) bg_popup_call2_act_pane

0x25d5,	// (0x000185bb) call_type_pane_cp03_ParamLimits

0x25d5,	// (0x000185bb) call_type_pane_cp03

0x2639,	// (0x0001861f) popup_call2_audio_first_window_g1_ParamLimits

0x2639,	// (0x0001861f) popup_call2_audio_first_window_g1

0x26a9,	// (0x0001868f) popup_call2_audio_first_window_g2_ParamLimits

0x26a9,	// (0x0001868f) popup_call2_audio_first_window_g2

0x1d01,	// (0x00017ce7) popup_call2_audio_first_window_g3_ParamLimits

0x1d01,	// (0x00017ce7) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00025540) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00025540) popup_call2_audio_first_window_g

0x2787,	// (0x0001876d) popup_call2_audio_first_window_t1_ParamLimits

0x2787,	// (0x0001876d) popup_call2_audio_first_window_t1

0x288a,	// (0x00018870) popup_call2_audio_first_window_t4_ParamLimits

0x288a,	// (0x00018870) popup_call2_audio_first_window_t4

0x296d,	// (0x00018953) popup_call2_audio_first_window_t5_ParamLimits

0x296d,	// (0x00018953) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0002554b) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0002554b) popup_call2_audio_first_window_t

0x0d94,	// (0x00016d7a) bg_popup_call2_act_pane_g1

0x2fda,	// (0x00018fc0) popup_cale_lunar_info_window_t1

0x2fe8,	// (0x00018fce) popup_cale_lunar_info_window_t2

0x2ff6,	// (0x00018fdc) popup_cale_lunar_info_window_t3

0x0b41,	// (0x00016b27) bg_popup_call2_bubble_pane

0x2a6e,	// (0x00018a54) bg_popup_call2_in_pane_cp01_ParamLimits

0x2a6e,	// (0x00018a54) bg_popup_call2_in_pane_cp01

0x081d,	// (0x00016803) call_type_pane_cp02

0x2ab6,	// (0x00018a9c) popup_call2_audio_out_window_g1_ParamLimits

0x2ab6,	// (0x00018a9c) popup_call2_audio_out_window_g1

0x2ae2,	// (0x00018ac8) popup_call2_audio_out_window_g2_ParamLimits

0x2ae2,	// (0x00018ac8) popup_call2_audio_out_window_g2

0x2b0a,	// (0x00018af0) popup_call2_audio_out_window_g3_ParamLimits

0x2b0a,	// (0x00018af0) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00025554) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00025554) popup_call2_audio_out_window_g

0x2b45,	// (0x00018b2b) popup_call2_audio_out_window_t1_ParamLimits

0x2b45,	// (0x00018b2b) popup_call2_audio_out_window_t1

0x2ba4,	// (0x00018b8a) popup_call2_audio_out_window_t2_ParamLimits

0x2ba4,	// (0x00018b8a) popup_call2_audio_out_window_t2

0x2bf8,	// (0x00018bde) popup_call2_audio_out_window_t3_ParamLimits

0x2bf8,	// (0x00018bde) popup_call2_audio_out_window_t3

0x2c0e,	// (0x00018bf4) popup_call2_audio_out_window_t4_ParamLimits

0x2c0e,	// (0x00018bf4) popup_call2_audio_out_window_t4

0x2c24,	// (0x00018c0a) popup_call2_audio_out_window_t5_ParamLimits

0x2c24,	// (0x00018c0a) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0002555d) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0002555d) popup_call2_audio_out_window_t

0x2c88,	// (0x00018c6e) bg_popup_call2_in_pane_ParamLimits

0x2c88,	// (0x00018c6e) bg_popup_call2_in_pane

0x2ce4,	// (0x00018cca) popup_call2_audio_in_window_g1_ParamLimits

0x2ce4,	// (0x00018cca) popup_call2_audio_in_window_g1

0x2d1c,	// (0x00018d02) popup_call2_audio_in_window_g2_ParamLimits

0x2d1c,	// (0x00018d02) popup_call2_audio_in_window_g2

0x2d54,	// (0x00018d3a) popup_call2_audio_in_window_g3_ParamLimits

0x2d54,	// (0x00018d3a) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0002556a) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0002556a) popup_call2_audio_in_window_g

0x2dac,	// (0x00018d92) popup_call2_audio_in_window_t1_ParamLimits

0x2dac,	// (0x00018d92) popup_call2_audio_in_window_t1

0x2e2c,	// (0x00018e12) popup_call2_audio_in_window_t2_ParamLimits

0x2e2c,	// (0x00018e12) popup_call2_audio_in_window_t2

0x2eac,	// (0x00018e92) popup_call2_audio_in_window_t3_ParamLimits

0x2eac,	// (0x00018e92) popup_call2_audio_in_window_t3

0x2ec6,	// (0x00018eac) popup_call2_audio_in_window_t4_ParamLimits

0x2ec6,	// (0x00018eac) popup_call2_audio_in_window_t4

0x2ed8,	// (0x00018ebe) popup_call2_audio_in_window_t5_ParamLimits

0x2ed8,	// (0x00018ebe) popup_call2_audio_in_window_t5

0x2eed,	// (0x00018ed3) popup_call2_audio_in_window_t6_ParamLimits

0x2eed,	// (0x00018ed3) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00025573) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00025573) popup_call2_audio_in_window_t

0x0d94,	// (0x00016d7a) bg_popup_call2_in_pane_g1

0x3004,	// (0x00018fea) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x000255db) popup_cale_lunar_info_window_t

0x0d9c,	// (0x00016d82) bg_popup_call2_rect_pane_ParamLimits

0x0d9c,	// (0x00016d82) bg_popup_call2_rect_pane

0x0b41,	// (0x00016b27) call2_cli_visual_graphic_pane

0x0b41,	// (0x00016b27) call2_cli_visual_text_pane

0x753f,	// (0x0001d525) smil_status_volume_pane_g3

0x0002,

0x0f0e,	// (0x00016ef4) call2_cli_visual_graphic_pane_g1

0x0f0e,	// (0x00016ef4) call2_cli_visual_graphic_pane_g2

0x0f0e,	// (0x00016ef4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00025580) call2_cli_visual_graphic_pane_g

0x2f02,	// (0x00018ee8) bg_popup_call2_rect_pane_g1

0x0f9a,	// (0x00016f80) bg_popup_call2_rect_pane_g2

0x2f0a,	// (0x00018ef0) bg_popup_call2_rect_pane_g3

0x2f12,	// (0x00018ef8) bg_popup_call2_rect_pane_g4

0x2f1a,	// (0x00018f00) bg_popup_call2_rect_pane_g5

0x2f22,	// (0x00018f08) bg_popup_call2_rect_pane_g6

0x2f2a,	// (0x00018f10) bg_popup_call2_rect_pane_g7

0x2f32,	// (0x00018f18) bg_popup_call2_rect_pane_g8

0x2f3a,	// (0x00018f20) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00025587) bg_popup_call2_rect_pane_g

0x2f42,	// (0x00018f28) bg_popup_call2_bubble_pane_g1

0x2f4a,	// (0x00018f30) bg_popup_call2_bubble_pane_g2

0x2f52,	// (0x00018f38) bg_popup_call2_bubble_pane_g3

0x2f5a,	// (0x00018f40) bg_popup_call2_bubble_pane_g4

0x2f62,	// (0x00018f48) bg_popup_call2_bubble_pane_g5

0x2f6a,	// (0x00018f50) bg_popup_call2_bubble_pane_g6

0x2f72,	// (0x00018f58) bg_popup_call2_bubble_pane_g7

0x2f7a,	// (0x00018f60) bg_popup_call2_bubble_pane_g8

0x2f82,	// (0x00018f68) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0002559a) bg_popup_call2_bubble_pane_g

0x8bcb,	// (0x0001ebb1) aid_cale_week_size_cell_pane

0x8fe7,	// (0x0001efcd) aid_cams_cif_uncrop_pane_ParamLimits

0x8fe7,	// (0x0001efcd) aid_cams_cif_uncrop_pane

0x9144,	// (0x0001f12a) aid_cams_size_cell_ParamLimits

0x9144,	// (0x0001f12a) aid_cams_size_cell

0x9150,	// (0x0001f136) grid_cams_pane_ParamLimits

0x915e,	// (0x0001f144) linegrid_cams_pane_ParamLimits

0x9249,	// (0x0001f22f) call_video_pane_t1

0x9262,	// (0x0001f248) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00025287) call_video_pane_t

0x9717,	// (0x0001f6fd) aid_cale_month_size_cell_pane_ParamLimits

0x9717,	// (0x0001f6fd) aid_cale_month_size_cell_pane

0xf63e,	// (0x00025624) smil_status_volume_pane_g

0x754c,	// (0x0001d532) volume_smil_pane_ParamLimits

0x06c2,	// (0x000166a8) aid_popup2_width_pane

0x8b10,	// (0x0001eaf6) cell_qdial_pane_g4_ParamLimits

0x8b10,	// (0x0001eaf6) cell_qdial_pane_g4

0xa1ef,	// (0x000201d5) aid_blid_cardinal_pane_ParamLimits

0xa1ff,	// (0x000201e5) aid_blid_destination_pane_ParamLimits

0xa1ff,	// (0x000201e5) aid_blid_destination_pane

0x0d9c,	// (0x00016d82) bg_popup_call_poc_act_pane_ParamLimits

0x0d9c,	// (0x00016d82) bg_popup_call_poc_act_pane

0x0d9c,	// (0x00016d82) bg_popup_call_poc_inact_pane_ParamLimits

0x0d9c,	// (0x00016d82) bg_popup_call_poc_inact_pane

0x2f8a,	// (0x00018f70) bg_popup_call_poc_act_pane_g1

0x2f92,	// (0x00018f78) bg_popup_call_poc_act_pane_g2

0x2f9a,	// (0x00018f80) bg_popup_call_poc_act_pane_g3

0x2f5a,	// (0x00018f40) bg_popup_call_poc_act_pane_g4

0x2f62,	// (0x00018f48) bg_popup_call_poc_act_pane_g5

0x2fa2,	// (0x00018f88) bg_popup_call_poc_act_pane_g6

0x2f72,	// (0x00018f58) bg_popup_call_poc_act_pane_g7

0x2faa,	// (0x00018f90) bg_popup_call_poc_act_pane_g8

0x0b41,	// (0x00016b27) main_usb_pane

0x3103,	// (0x000190e9) popup_cale_lunar_info_window

0x950b,	// (0x0001f4f1) im_reading_pane_t1_ParamLimits

0x12af,	// (0x00017295) list_im_pane_ParamLimits

0x12c0,	// (0x000172a6) scroll_pane_cp07_ParamLimits

0x0b41,	// (0x00016b27) grid_highlight_pane_cp012

0x0d9c,	// (0x00016d82) mup_scale_pane_ParamLimits

0x1d01,	// (0x00017ce7) main_usb_pane_g1_ParamLimits

0x1d01,	// (0x00017ce7) main_usb_pane_g1

0xada0,	// (0x00020d86) main_usb_pane_g2_ParamLimits

0xada0,	// (0x00020d86) main_usb_pane_g2

0x0001,

0xf5de,	// (0x000255c4) main_usb_pane_g_ParamLimits

0xf5de,	// (0x000255c4) main_usb_pane_g

0xadac,	// (0x00020d92) main_usb_pane_t1_ParamLimits

0xadac,	// (0x00020d92) main_usb_pane_t1

0xadbe,	// (0x00020da4) main_usb_pane_t2_ParamLimits

0xadbe,	// (0x00020da4) main_usb_pane_t2

0xadd0,	// (0x00020db6) main_usb_pane_t3_ParamLimits

0xadd0,	// (0x00020db6) main_usb_pane_t3

0xade2,	// (0x00020dc8) main_usb_pane_t4_ParamLimits

0xade2,	// (0x00020dc8) main_usb_pane_t4

0xadf4,	// (0x00020dda) main_usb_pane_t5_ParamLimits

0xadf4,	// (0x00020dda) main_usb_pane_t5

0xae06,	// (0x00020dec) main_usb_pane_t6_ParamLimits

0xae06,	// (0x00020dec) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x000255c9) main_usb_pane_t_ParamLimits

0xa195,	// (0x0002017b) aid_text_placing

0xa1a1,	// (0x00020187) main_location2_pane_t1_ParamLimits

0xa1b5,	// (0x0002019b) main_location2_pane_t2_ParamLimits

0xa1c9,	// (0x000201af) main_location2_pane_t3_ParamLimits

0xa1dd,	// (0x000201c3) main_location2_pane_t4_ParamLimits

0xa1dd,	// (0x000201c3) main_location2_pane_t4

0xf402,	// (0x000253e8) main_location2_pane_t_ParamLimits

0x0dd8,	// (0x00016dbe) find_pinb_pane_g2_ParamLimits

0x0dd8,	// (0x00016dbe) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00025136) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00025136) find_pinb_pane_g

0x0de4,	// (0x00016dca) find_pinb_pane_t1_ParamLimits

0x0df6,	// (0x00016ddc) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0002513b) find_pinb_pane_t_ParamLimits

0x0b41,	// (0x00016b27) main_call3_pane

0x9a63,	// (0x0001fa49) cale_month_day_heading_pane_t1_ParamLimits

0x9ac1,	// (0x0001faa7) cale_month_day_heading_pane_t2_ParamLimits

0x9b26,	// (0x0001fb0c) cale_month_day_heading_pane_t3_ParamLimits

0x9b8b,	// (0x0001fb71) cale_month_day_heading_pane_t4_ParamLimits

0x9bf0,	// (0x0001fbd6) cale_month_day_heading_pane_t5_ParamLimits

0x9c55,	// (0x0001fc3b) cale_month_day_heading_pane_t6_ParamLimits

0x9cba,	// (0x0001fca0) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x000252bf) cale_month_day_heading_pane_t_ParamLimits

0x1536,	// (0x0001751c) smil_status_volume_pane

0xa964,	// (0x0002094a) postcard_address_pane_ParamLimits

0xa964,	// (0x0002094a) postcard_address_pane

0xa970,	// (0x00020956) postcard_message_pane_ParamLimits

0xa970,	// (0x00020956) postcard_message_pane

0xad6b,	// (0x00020d51) call2_cli_visual_pane_t1_ParamLimits

0xad6b,	// (0x00020d51) call2_cli_visual_pane_t1

0xb333,	// (0x00021319) postcard_message_pane_t1_ParamLimits

0xb333,	// (0x00021319) postcard_message_pane_t1

0xb31c,	// (0x00021302) postcard_address_pane_t1_ParamLimits

0xb31c,	// (0x00021302) postcard_address_pane_t1

0xb30d,	// (0x000212f3) popup_call3_audio_in_window_ParamLimits

0xb30d,	// (0x000212f3) popup_call3_audio_in_window

0xb1f1,	// (0x000211d7) bg_popup_call3_in_pane_ParamLimits

0xb1f1,	// (0x000211d7) bg_popup_call3_in_pane

0xb253,	// (0x00021239) popup_call3_audio_in_window_g1_ParamLimits

0xb253,	// (0x00021239) popup_call3_audio_in_window_g1

0xb26b,	// (0x00021251) popup_call3_audio_in_window_g2_ParamLimits

0xb26b,	// (0x00021251) popup_call3_audio_in_window_g2

0xb283,	// (0x00021269) popup_call3_audio_in_window_g3_ParamLimits

0xb283,	// (0x00021269) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0002562b) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0002562b) popup_call3_audio_in_window_g

0xb2ab,	// (0x00021291) popup_call3_audio_in_window_t1_ParamLimits

0xb2ab,	// (0x00021291) popup_call3_audio_in_window_t1

0xb2d3,	// (0x000212b9) popup_call3_audio_in_window_t2_ParamLimits

0xb2d3,	// (0x000212b9) popup_call3_audio_in_window_t2

0xb2fb,	// (0x000212e1) popup_call3_audio_in_window_t3_ParamLimits

0xb2fb,	// (0x000212e1) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x00025634) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x00025634) popup_call3_audio_in_window_t

0x1c30,	// (0x00017c16) bg_popup_call3_rect_pane

0x2f02,	// (0x00018ee8) bg_popup_call3_rect_pane_g1

0x0f9a,	// (0x00016f80) bg_popup_call3_rect_pane_g2

0x2f0a,	// (0x00018ef0) bg_popup_call3_rect_pane_g3

0x2f12,	// (0x00018ef8) bg_popup_call3_rect_pane_g4

0x2f1a,	// (0x00018f00) bg_popup_call3_rect_pane_g5

0x2f22,	// (0x00018f08) bg_popup_call3_rect_pane_g6

0x2f2a,	// (0x00018f10) bg_popup_call3_rect_pane_g7

0xa5dd,	// (0x000205c3) mup_visualizer_osc_pane

0x1d0f,	// (0x00017cf5) mup_visualizer_spec_pane

0xb211,	// (0x000211f7) call3_video_qcif_pane_ParamLimits

0xb211,	// (0x000211f7) call3_video_qcif_pane

0xb223,	// (0x00021209) call3_video_qcif_uncrop_pane_ParamLimits

0xb223,	// (0x00021209) call3_video_qcif_uncrop_pane

0xb231,	// (0x00021217) call3_video_subqcif_pane_ParamLimits

0xb231,	// (0x00021217) call3_video_subqcif_pane

0xb243,	// (0x00021229) call3_video_subqcif_uncrop_pane_ParamLimits

0xb243,	// (0x00021229) call3_video_subqcif_uncrop_pane

0xb29b,	// (0x00021281) popup_call3_audio_in_window_g4_ParamLimits

0xb29b,	// (0x00021281) popup_call3_audio_in_window_g4

0xb1e0,	// (0x000211c6) mup_spec_half_pane

0xb1e9,	// (0x000211cf) mup_spec_half_pane_cp

0x319a,	// (0x00019180) mup_osc_middle_pane

0x31a3,	// (0x00019189) mup_visualizer_osc_pane_g1

0xb1c1,	// (0x000211a7) mup_spec_bar_pane_ParamLimits

0xb1c1,	// (0x000211a7) mup_spec_bar_pane

0x3187,	// (0x0001916d) mup_spec_bar_pane_g1

0x3191,	// (0x00019177) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0002561f) mup_spec_bar_pane_g

0x8bcb,	// (0x0001ebb1) aid_cale_week_size_cell_pane_ParamLimits

0x8bde,	// (0x0001ebc4) bg_cale_heading_pane_ParamLimits

0x1016,	// (0x00016ffc) bg_cale_pane_cp01_ParamLimits

0x8bf2,	// (0x0001ebd8) cale_week_corner_pane_ParamLimits

0x8c08,	// (0x0001ebee) cale_week_day_heading_pane_ParamLimits

0x8c1c,	// (0x0001ec02) cale_week_scroll_pane_g1_ParamLimits

0x8c2d,	// (0x0001ec13) cale_week_scroll_pane_g2_ParamLimits

0x8c3e,	// (0x0001ec24) cale_week_scroll_pane_g3_ParamLimits

0x8c4f,	// (0x0001ec35) cale_week_scroll_pane_g4_ParamLimits

0x8c60,	// (0x0001ec46) cale_week_scroll_pane_g5_ParamLimits

0x8c71,	// (0x0001ec57) cale_week_scroll_pane_g6_ParamLimits

0x8c82,	// (0x0001ec68) cale_week_scroll_pane_g7_ParamLimits

0x8c95,	// (0x0001ec7b) cale_week_scroll_pane_g8_ParamLimits

0x8ca8,	// (0x0001ec8e) cale_week_scroll_pane_g9_ParamLimits

0x8cb9,	// (0x0001ec9f) cale_week_scroll_pane_g10_ParamLimits

0x8cca,	// (0x0001ecb0) cale_week_scroll_pane_g11_ParamLimits

0x8cdb,	// (0x0001ecc1) cale_week_scroll_pane_g12_ParamLimits

0x8cec,	// (0x0001ecd2) cale_week_scroll_pane_g13_ParamLimits

0x8cfd,	// (0x0001ece3) cale_week_scroll_pane_g14_ParamLimits

0x8d0e,	// (0x0001ecf4) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x000251c7) cale_week_scroll_pane_g_ParamLimits

0x8d1f,	// (0x0001ed05) cale_week_time_pane_ParamLimits

0x8d32,	// (0x0001ed18) grid_cale_week_pane_ParamLimits

0x102f,	// (0x00017015) listscroll_cale_week_pane_t1

0x8d47,	// (0x0001ed2d) scroll_pane_cp08_ParamLimits

0x9758,	// (0x0001f73e) cale_month_corner_pane_ParamLimits

0x14d6,	// (0x000174bc) cale_month_pane_t1

0x9a22,	// (0x0001fa08) cale_month_week_pane_ParamLimits

0x1d01,	// (0x00017ce7) popup_call_status_window_g1_ParamLimits

0xa037,	// (0x0002001d) popup_call_status_window_g2_ParamLimits

0xa043,	// (0x00020029) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0002536f) popup_call_status_window_g_ParamLimits

0x1949,	// (0x0001792f) aid_call2_pane

0xa870,	// (0x00020856) msg_header_pane_g1

0xa964,	// (0x0002094a) postcard_address2_pane_ParamLimits

0xa964,	// (0x0002094a) postcard_address2_pane

0xa970,	// (0x00020956) postcard_message2_pane_ParamLimits

0xa970,	// (0x00020956) postcard_message2_pane

0xb159,	// (0x0002113f) message2_row_pane_ParamLimits

0xb159,	// (0x0002113f) message2_row_pane

0xb174,	// (0x0002115a) address2_row_pane_ParamLimits

0xb174,	// (0x0002115a) address2_row_pane

0x3155,	// (0x0001913b) postcard_message2_row_pane_g1

0x315d,	// (0x00019143) postcard_message2_row_pane_t1

0x3155,	// (0x0001913b) address2_row_pane_g1

0x315d,	// (0x00019143) address2_row_pane_t1

0x738e,	// (0x0001d374) aid_size_cell_vorec

0x0b41,	// (0x00016b27) main_rss_pane

0xb187,	// (0x0002116d) rss_list_single_pane_ParamLimits

0xb187,	// (0x0002116d) rss_list_single_pane

0x316b,	// (0x00019151) rss_list_single_pane_t1

0x3179,	// (0x0001915f) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0002561a) rss_list_single_pane_t

0x0b41,	// (0x00016b27) main_camera2_pane

0x0b41,	// (0x00016b27) main_video2_pane

0x75aa,	// (0x0001d590) cams_zoom_pane_cp2_ParamLimits

0x75aa,	// (0x0001d590) cams_zoom_pane_cp2

0x75b6,	// (0x0001d59c) image2_vga_pane_ParamLimits

0x75b6,	// (0x0001d59c) image2_vga_pane

0x75c5,	// (0x0001d5ab) main_camera2_pane_g1_ParamLimits

0x75c5,	// (0x0001d5ab) main_camera2_pane_g1

0x75d1,	// (0x0001d5b7) main_camera2_pane_g2_ParamLimits

0x75d1,	// (0x0001d5b7) main_camera2_pane_g2

0x75dd,	// (0x0001d5c3) main_camera2_pane_g3_ParamLimits

0x75dd,	// (0x0001d5c3) main_camera2_pane_g3

0x75e9,	// (0x0001d5cf) main_camera2_pane_g4_ParamLimits

0x75e9,	// (0x0001d5cf) main_camera2_pane_g4

0x75f5,	// (0x0001d5db) main_camera2_pane_g5_ParamLimits

0x75f5,	// (0x0001d5db) main_camera2_pane_g5

0x7601,	// (0x0001d5e7) main_camera2_pane_g6_ParamLimits

0x7601,	// (0x0001d5e7) main_camera2_pane_g6

0x760d,	// (0x0001d5f3) main_camera2_pane_g7_ParamLimits

0x760d,	// (0x0001d5f3) main_camera2_pane_g7

0x7619,	// (0x0001d5ff) main_camera2_pane_g8_ParamLimits

0x7619,	// (0x0001d5ff) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0002563b) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0002563b) main_camera2_pane_g

0x7631,	// (0x0001d617) main_camera2_pane_t1_ParamLimits

0x7631,	// (0x0001d617) main_camera2_pane_t1

0x7643,	// (0x0001d629) main_camera2_pane_t2_ParamLimits

0x7643,	// (0x0001d629) main_camera2_pane_t2

0x7655,	// (0x0001d63b) main_camera2_pane_t3_ParamLimits

0x7655,	// (0x0001d63b) main_camera2_pane_t3

0x7667,	// (0x0001d64d) main_camera2_pane_t4_ParamLimits

0x7667,	// (0x0001d64d) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0002564e) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0002564e) main_camera2_pane_t

0x76c9,	// (0x0001d6af) cams_zoom_pane_cp4_ParamLimits

0x76c9,	// (0x0001d6af) cams_zoom_pane_cp4

0x76d9,	// (0x0001d6bf) image2_cif_pane_ParamLimits

0x76d9,	// (0x0001d6bf) image2_cif_pane

0x76ee,	// (0x0001d6d4) image2_subqcif_pane_ParamLimits

0x76ee,	// (0x0001d6d4) image2_subqcif_pane

0x76fd,	// (0x0001d6e3) main_video2_pane_g1_ParamLimits

0x76fd,	// (0x0001d6e3) main_video2_pane_g1

0x770f,	// (0x0001d6f5) main_video2_pane_g2_ParamLimits

0x770f,	// (0x0001d6f5) main_video2_pane_g2

0x771f,	// (0x0001d705) main_video2_pane_g3_ParamLimits

0x771f,	// (0x0001d705) main_video2_pane_g3

0x772f,	// (0x0001d715) main_video2_pane_g4_ParamLimits

0x772f,	// (0x0001d715) main_video2_pane_g4

0x773f,	// (0x0001d725) main_video2_pane_g5_ParamLimits

0x773f,	// (0x0001d725) main_video2_pane_g5

0x774f,	// (0x0001d735) main_video2_pane_g6_ParamLimits

0x774f,	// (0x0001d735) main_video2_pane_g6

0x0005,

0xf677,	// (0x0002565d) main_video2_pane_g_ParamLimits

0xf677,	// (0x0002565d) main_video2_pane_g

0x7761,	// (0x0001d747) main_video2_pane_t1_ParamLimits

0x7761,	// (0x0001d747) main_video2_pane_t1

0x777b,	// (0x0001d761) main_video2_pane_t2_ParamLimits

0x777b,	// (0x0001d761) main_video2_pane_t2

0x77a1,	// (0x0001d787) main_video2_pane_t3_ParamLimits

0x77a1,	// (0x0001d787) main_video2_pane_t3

0x0002,

0xf684,	// (0x0002566a) main_video2_pane_t_ParamLimits

0xf684,	// (0x0002566a) main_video2_pane_t

0xaebd,	// (0x00020ea3) call_muted_g2

0x0001,

0xf626,	// (0x0002560c) call_muted_g

0x0b41,	// (0x00016b27) main_mup2_pane

0x325a,	// (0x00019240) main_mup2_pane_g1_ParamLimits

0x325a,	// (0x00019240) main_mup2_pane_g1

0xb34e,	// (0x00021334) main_mup2_pane_g2_ParamLimits

0xb34e,	// (0x00021334) main_mup2_pane_g2

0x77f0,	// (0x0001d7d6) main_mup_pane_g13_cp1

0x77f8,	// (0x0001d7de) mup_volume_pane_cp1

0xb36e,	// (0x00021354) main_mup2_pane_g4_ParamLimits

0xb36e,	// (0x00021354) main_mup2_pane_g4

0xb383,	// (0x00021369) main_mup2_pane_g5_ParamLimits

0xb383,	// (0x00021369) main_mup2_pane_g5

0xb398,	// (0x0002137e) main_mup2_pane_g6_ParamLimits

0xb398,	// (0x0002137e) main_mup2_pane_g6

0xb3ad,	// (0x00021393) main_mup2_pane_g7_ParamLimits

0xb3ad,	// (0x00021393) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x00025671) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x00025671) main_mup2_pane_g

0xb3c9,	// (0x000213af) main_mup2_pane_t1_ParamLimits

0xb3c9,	// (0x000213af) main_mup2_pane_t1

0xb3e0,	// (0x000213c6) main_mup2_pane_t2_ParamLimits

0xb3e0,	// (0x000213c6) main_mup2_pane_t2

0xb3f7,	// (0x000213dd) main_mup2_pane_t3_ParamLimits

0xb3f7,	// (0x000213dd) main_mup2_pane_t3

0xb40e,	// (0x000213f4) main_mup2_pane_t4_ParamLimits

0xb40e,	// (0x000213f4) main_mup2_pane_t4

0xb428,	// (0x0002140e) main_mup2_pane_t5_ParamLimits

0xb428,	// (0x0002140e) main_mup2_pane_t5

0xb442,	// (0x00021428) main_mup2_pane_t6_ParamLimits

0xb442,	// (0x00021428) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x00025680) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x00025680) main_mup2_pane_t

0xb47a,	// (0x00021460) mup2_visualizer_pane_ParamLimits

0xb47a,	// (0x00021460) mup2_visualizer_pane

0xb4b0,	// (0x00021496) mup_progress_pane_cp_ParamLimits

0xb4b0,	// (0x00021496) mup_progress_pane_cp

0x77db,	// (0x0001d7c1) mup_volume_pane_cp_ParamLimits

0x77db,	// (0x0001d7c1) mup_volume_pane_cp

0xb4c7,	// (0x000214ad) mup2_visualizer_pane_g1_ParamLimits

0xb4c7,	// (0x000214ad) mup2_visualizer_pane_g1

0x322c,	// (0x00019212) mup2_visualizer_pane_g2_ParamLimits

0x322c,	// (0x00019212) mup2_visualizer_pane_g2

0xb4dc,	// (0x000214c2) mup2_visualizer_pane_g3_ParamLimits

0xb4dc,	// (0x000214c2) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0002568d) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0002568d) mup2_visualizer_pane_g

0x1fe7,	// (0x00017fcd) aid_size_cell_fmradio

0xafd3,	// (0x00020fb9) aid_height_parent_landcape

0x133e,	// (0x00017324) wml_content_pane_cp

0x1346,	// (0x0001732c) wml_tabs_pane

0x134f,	// (0x00017335) popup_wml_miniature_window

0x1357,	// (0x0001733d) scroll_pane_cp021

0x136b,	// (0x00017351) wml_content_pane_comp8

0x0b41,	// (0x00016b27) bg_popup_sub_pane_cp05

0x324a,	// (0x00019230) popup_wml_miniature_window_g1

0x3252,	// (0x00019238) wml_miniature_view_pane

0xb4ea,	// (0x000214d0) aid_size_wml_view

0xb4f2,	// (0x000214d8) wml_miniature_view_pane_g1

0xb4fb,	// (0x000214e1) wml_miniature_view_pane_g2

0xb504,	// (0x000214ea) wml_miniature_view_pane_g3

0xb50c,	// (0x000214f2) wml_miniature_view_pane_g4

0xb514,	// (0x000214fa) wml_miniature_view_pane_g5

0xb51c,	// (0x00021502) wml_miniature_view_pane_g6

0xb524,	// (0x0002150a) wml_miniature_view_pane_g7

0xb52c,	// (0x00021512) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x00025694) wml_miniature_view_pane_g

0x325a,	// (0x00019240) background_graphic_ParamLimits

0x325a,	// (0x00019240) background_graphic

0x3266,	// (0x0001924c) wml_tabs_2_pane

0x326f,	// (0x00019255) wml_tabs_3_pane_ParamLimits

0x326f,	// (0x00019255) wml_tabs_3_pane

0x3281,	// (0x00019267) wml_tabs_4_pane_ParamLimits

0x3281,	// (0x00019267) wml_tabs_4_pane

0x3297,	// (0x0001927d) wml_tabs_5_pane_ParamLimits

0x3297,	// (0x0001927d) wml_tabs_5_pane

0x32b1,	// (0x00019297) wml_tabs_pane_g2_ParamLimits

0x32b1,	// (0x00019297) wml_tabs_pane_g2

0x32c5,	// (0x000192ab) wml_tabs_pane_g3_ParamLimits

0x32c5,	// (0x000192ab) wml_tabs_pane_g3

0xb534,	// (0x0002151a) wml_tabs_2_active_pane_ParamLimits

0xb534,	// (0x0002151a) wml_tabs_2_active_pane

0xb544,	// (0x0002152a) wml_tabs_2_passive_pane_ParamLimits

0xb544,	// (0x0002152a) wml_tabs_2_passive_pane

0xb554,	// (0x0002153a) wml_tabs_3_active_pane_cp_ParamLimits

0xb554,	// (0x0002153a) wml_tabs_3_active_pane_cp

0xb565,	// (0x0002154b) wml_tabs_3_passive_pane_ParamLimits

0xb565,	// (0x0002154b) wml_tabs_3_passive_pane

0xb576,	// (0x0002155c) wml_tabs_3_passive_pane_cp_ParamLimits

0xb576,	// (0x0002155c) wml_tabs_3_passive_pane_cp

0xb587,	// (0x0002156d) tabs_4_active_pane

0xb58f,	// (0x00021575) tabs_4_passive_pane

0xb597,	// (0x0002157d) tabs_4_passive_pane_cp

0xb59f,	// (0x00021585) tabs_4_passive_pane_cp2

0xad98,	// (0x00020d7e) aid_height_text

0xa5aa,	// (0x00020590) mup_volume_cont_pane_ParamLimits

0xa5aa,	// (0x00020590) mup_volume_cont_pane

0x88c8,	// (0x0001e8ae) aid_size_cell_pinb

0x88d2,	// (0x0001e8b8) aid_size_list_pinb

0xb499,	// (0x0002147f) mup2_volume_cont_pane_ParamLimits

0xb499,	// (0x0002147f) mup2_volume_cont_pane

0x77c7,	// (0x0001d7ad) mup2_volume_cont_pane_g1_ParamLimits

0x77c7,	// (0x0001d7ad) mup2_volume_cont_pane_g1

0x8555,	// (0x0001e53b) aid_size_cell_touch_ParamLimits

0x8555,	// (0x0001e53b) aid_size_cell_touch

0x87ae,	// (0x0001e794) touch_pane_ParamLimits

0x87ae,	// (0x0001e794) touch_pane

0x06b0,	// (0x00016696) main_rss2_pane

0x331b,	// (0x00019301) listscroll_rss2_pane

0x3324,	// (0x0001930a) rss2_navigation_pane

0x332c,	// (0x00019312) list_rss2_pane

0x1ae7,	// (0x00017acd) scroll_pane_cp22

0x3334,	// (0x0001931a) rss2_navigation_pane_g1

0x333d,	// (0x00019323) rss2_navigation_pane_g2

0x3345,	// (0x0001932b) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x000256a5) rss2_navigation_pane_g

0x334d,	// (0x00019333) rss2_navigation_pane_t1

0xb5a7,	// (0x0002158d) rss2_list_single_pane_ParamLimits

0xb5a7,	// (0x0002158d) rss2_list_single_pane

0x335b,	// (0x00019341) rss2_list_single_pane_t2

0x3369,	// (0x0001934f) rss2_list_single_pane_t3_ParamLimits

0x3369,	// (0x0001934f) rss2_list_single_pane_t3

0x3386,	// (0x0001936c) rss2_list_single_pane_t4

0x9e7a,	// (0x0001fe60) smil_status_pane_g1

0x0720,	// (0x00016706) main_image2_pane_ParamLimits

0x0720,	// (0x00016706) main_image2_pane

0x7625,	// (0x0001d60b) main_camera2_pane_g9_ParamLimits

0x7625,	// (0x0001d60b) main_camera2_pane_g9

0x7679,	// (0x0001d65f) main_camera2_pane_t5_ParamLimits

0x7679,	// (0x0001d65f) main_camera2_pane_t5

0x768b,	// (0x0001d671) main_camera2_pane_t6_ParamLimits

0x768b,	// (0x0001d671) main_camera2_pane_t6

0xb5d8,	// (0x000215be) main_image2_pane_g1_ParamLimits

0xb5d8,	// (0x000215be) main_image2_pane_g1

0xab38,	// (0x00020b1e) smil2_video_pane_ParamLimits

0xab38,	// (0x00020b1e) smil2_video_pane

0x06ce,	// (0x000166b4) aid_zoom_text_primary_cp

0x0716,	// (0x000166fc) popup_preview_fixed_window

0x12a7,	// (0x0001728d) im_reading_pane_g1

0x756f,	// (0x0001d555) cams2_bc_adjust_pane_cp_ParamLimits

0x756f,	// (0x0001d555) cams2_bc_adjust_pane_cp

0x76bb,	// (0x0001d6a1) cams2_bc_adjust_pane_ParamLimits

0x76bb,	// (0x0001d6a1) cams2_bc_adjust_pane

0x4b1b,	// (0x0001ab01) cams2_bc_adjust_pane_g1

0x7800,	// (0x0001d7e6) cams2_slider_pane

0x7809,	// (0x0001d7ef) cams2_slider_pane_g1

0x7812,	// (0x0001d7f8) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x000256ac) cams2_slider_pane_g

0x7135,	// (0x0001d11b) calc_display_pane_ParamLimits

0x7153,	// (0x0001d139) calc_paper_pane_ParamLimits

0x716f,	// (0x0001d155) grid_calc_pane_ParamLimits

0x74aa,	// (0x0001d490) popup_clock_digital_window_t1_ParamLimits

0x1f84,	// (0x00017f6a) main_image_pane_t1

0x711b,	// (0x0001d101) aid_size_cell_calc_ParamLimits

0x711b,	// (0x0001d101) aid_size_cell_calc

0xb005,	// (0x00020feb) popup_blid_sat_info2_window_ParamLimits

0xb005,	// (0x00020feb) popup_blid_sat_info2_window

0x33d0,	// (0x000193b6) aid_size_cell_blid

0x33d8,	// (0x000193be) bg_popup_window_pane_cp07

0x33fb,	// (0x000193e1) grid_popup_blid_pane

0x3405,	// (0x000193eb) heading_pane_cp05_ParamLimits

0x3405,	// (0x000193eb) heading_pane_cp05

0x34cf,	// (0x000194b5) cell_popup_blid_pane_ParamLimits

0x34cf,	// (0x000194b5) cell_popup_blid_pane

0x34f3,	// (0x000194d9) cell_popup_blid_pane_g1

0x34fb,	// (0x000194e1) cell_popup_blid_pane_t1

0xb45f,	// (0x00021445) mup2_indicator_pane_ParamLimits

0xb45f,	// (0x00021445) mup2_indicator_pane

0x1c30,	// (0x00017c16) mup2_visualizer_osc_pane

0x3238,	// (0x0001921e) mup2_visualizer_spec_pane_ParamLimits

0x3238,	// (0x0001921e) mup2_visualizer_spec_pane

0xb5e4,	// (0x000215ca) mup2_spec_half_pane

0xb5ed,	// (0x000215d3) mup2_spec_half_pane_cp

0xb5f7,	// (0x000215dd) mup2_spec_bar_pane_ParamLimits

0xb5f7,	// (0x000215dd) mup2_spec_bar_pane

0x3187,	// (0x0001916d) mup2_spec_bar_pane_g1

0x3191,	// (0x00019177) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0002561f) mup2_spec_bar_pane_g

0xb616,	// (0x000215fc) mup2_osc_middle_pane

0x31a3,	// (0x00019189) mup2_visualizer_osc_pane_g1

0x074e,	// (0x00016734) popup_number_entry_window_t1_ParamLimits

0x0761,	// (0x00016747) popup_number_entry_window_t2_ParamLimits

0x0773,	// (0x00016759) popup_number_entry_window_t3_ParamLimits

0x8805,	// (0x0001e7eb) popup_number_entry_window_t5_ParamLimits

0x8805,	// (0x0001e7eb) popup_number_entry_window_t5

0xf0fb,	// (0x000250e1) popup_number_entry_window_t_ParamLimits

0x0785,	// (0x0001676b) text_title_cp2_ParamLimits

0x74e9,	// (0x0001d4cf) aid_hotspot_pointer_text2_pane

0x7533,	// (0x0001d519) main_viewer_pane_g9_ParamLimits

0x7533,	// (0x0001d519) main_viewer_pane_g9

0x14d6,	// (0x000174bc) cale_month_pane_t1_ParamLimits

0x156b,	// (0x00017551) bg_cale_pane_ParamLimits

0x1583,	// (0x00017569) list_cale_pane_ParamLimits

0x102f,	// (0x00017015) listscroll_cale_day_pane_t1

0x1594,	// (0x0001757a) scroll_pane_cp09_ParamLimits

0xa5e5,	// (0x000205cb) main_mup_eq_pane_t1_ParamLimits

0xa5e5,	// (0x000205cb) main_mup_eq_pane_t1

0xa5ff,	// (0x000205e5) main_mup_eq_pane_t2_ParamLimits

0xa5ff,	// (0x000205e5) main_mup_eq_pane_t2

0xa619,	// (0x000205ff) main_mup_eq_pane_t3_ParamLimits

0xa619,	// (0x000205ff) main_mup_eq_pane_t3

0xa631,	// (0x00020617) main_mup_eq_pane_t4_ParamLimits

0xa631,	// (0x00020617) main_mup_eq_pane_t4

0xa649,	// (0x0002062f) main_mup_eq_pane_t5_ParamLimits

0xa649,	// (0x0002062f) main_mup_eq_pane_t5

0xa661,	// (0x00020647) main_mup_eq_pane_t6_ParamLimits

0xa661,	// (0x00020647) main_mup_eq_pane_t6

0xa675,	// (0x0002065b) main_mup_eq_pane_t7_ParamLimits

0xa675,	// (0x0002065b) main_mup_eq_pane_t7

0xa689,	// (0x0002066f) main_mup_eq_pane_t8_ParamLimits

0xa689,	// (0x0002066f) main_mup_eq_pane_t8

0xa69f,	// (0x00020685) main_mup_eq_pane_t9_ParamLimits

0xa69f,	// (0x00020685) main_mup_eq_pane_t9

0xa6b7,	// (0x0002069d) main_mup_eq_pane_t10_ParamLimits

0xa6b7,	// (0x0002069d) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0002546e) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0002546e) main_mup_eq_pane_t

0xa774,	// (0x0002075a) mup_equalizer_pane_cp5_ParamLimits

0xa78a,	// (0x00020770) mup_equalizer_pane_cp6_ParamLimits

0xa7a2,	// (0x00020788) mup_equalizer_pane_cp7_ParamLimits

0x06b0,	// (0x00016696) main_gallery_pane

0x31ac,	// (0x00019192) smil2_volume_pane

0x31c7,	// (0x000191ad) smil_status_volume_pane_g1_ParamLimits

0x31b4,	// (0x0001919a) smil_status_volume_pane_g2_ParamLimits

0x753f,	// (0x0001d525) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00025624) smil_status_volume_pane_g_ParamLimits

0x33d8,	// (0x000193be) bg_popup_window_pane_cp07_ParamLimits

0x33e6,	// (0x000193cc) blid_firmament_pane

0xb61f,	// (0x00021605) aid_size_cell_gallery_ParamLimits

0xb61f,	// (0x00021605) aid_size_cell_gallery

0xb62d,	// (0x00021613) grid_gallery_pane_ParamLimits

0xb62d,	// (0x00021613) grid_gallery_pane

0xb63d,	// (0x00021623) cell_gallery_pane_ParamLimits

0xb63d,	// (0x00021623) cell_gallery_pane

0x3509,	// (0x000194ef) bg_cell_gallery_focus_pane_ParamLimits

0x3509,	// (0x000194ef) bg_cell_gallery_focus_pane

0x351b,	// (0x00019501) cell_gallery_pane_g1_ParamLimits

0x351b,	// (0x00019501) cell_gallery_pane_g1

0xb68b,	// (0x00021671) cell_gallery_pane_g2_ParamLimits

0xb68b,	// (0x00021671) cell_gallery_pane_g2

0xb698,	// (0x0002167e) cell_gallery_pane_g3_ParamLimits

0xb698,	// (0x0002167e) cell_gallery_pane_g3

0x3527,	// (0x0001950d) cell_gallery_pane_g4_ParamLimits

0x3527,	// (0x0001950d) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x000256d2) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x000256d2) cell_gallery_pane_g

0x3533,	// (0x00019519) bg_cell_gallery_focus_pane_g1

0x353b,	// (0x00019521) bg_cell_gallery_focus_pane_g2

0x3543,	// (0x00019529) bg_cell_gallery_focus_pane_g3

0x354b,	// (0x00019531) bg_cell_gallery_focus_pane_g4

0x3553,	// (0x00019539) bg_cell_gallery_focus_pane_g5

0x355b,	// (0x00019541) bg_cell_gallery_focus_pane_g6

0x3563,	// (0x00019549) bg_cell_gallery_focus_pane_g7

0x356b,	// (0x00019551) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x000256db) bg_cell_gallery_focus_pane_g

0x3573,	// (0x00019559) aid_firma_cardinal

0x3587,	// (0x0001956d) blid_firmament_pane_t1

0x359e,	// (0x00019584) blid_firmament_pane_t2

0x35b5,	// (0x0001959b) blid_firmament_pane_t3

0x35cc,	// (0x000195b2) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x000256ec) blid_firmament_pane_t

0x35e3,	// (0x000195c9) blid_sat_info_pane

0x35f3,	// (0x000195d9) blid_sat_info_pane_g1

0x35f3,	// (0x000195d9) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x000256f5) blid_sat_info_pane_g

0x35fd,	// (0x000195e3) blid_sat_info_pane_t1

0x360b,	// (0x000195f1) smil2_volume_content_pane

0x3614,	// (0x000195fa) smil2_volume_pane_g1

0x361c,	// (0x00019602) smil2_volume_content_pane_g1

0x3625,	// (0x0001960b) smil2_volume_content_pane_g2

0x362e,	// (0x00019614) smil2_volume_content_pane_g3

0x3637,	// (0x0001961d) smil2_volume_content_pane_g4

0x3640,	// (0x00019626) smil2_volume_content_pane_g5

0x3649,	// (0x0001962f) smil2_volume_content_pane_g6

0x3652,	// (0x00019638) smil2_volume_content_pane_g7

0x365b,	// (0x00019641) smil2_volume_content_pane_g8

0x3664,	// (0x0001964a) smil2_volume_content_pane_g9

0x366d,	// (0x00019653) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x000256fa) smil2_volume_content_pane_g

0x8d9d,	// (0x0001ed83) cale_week_day_heading_pane_t1_ParamLimits

0x8dca,	// (0x0001edb0) cale_week_day_heading_pane_t2_ParamLimits

0x8df7,	// (0x0001eddd) cale_week_day_heading_pane_t3_ParamLimits

0x8e24,	// (0x0001ee0a) cale_week_day_heading_pane_t4_ParamLimits

0x8e51,	// (0x0001ee37) cale_week_day_heading_pane_t5_ParamLimits

0x8e7e,	// (0x0001ee64) cale_week_day_heading_pane_t6_ParamLimits

0x8eab,	// (0x0001ee91) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x000251e6) cale_week_day_heading_pane_t_ParamLimits

0x1041,	// (0x00017027) bg_cale_side_pane_ParamLimits

0x72ce,	// (0x0001d2b4) cale_week_time_pane_t1_ParamLimits

0x72e6,	// (0x0001d2cc) cale_week_time_pane_t2_ParamLimits

0x72fe,	// (0x0001d2e4) cale_week_time_pane_t3_ParamLimits

0x7316,	// (0x0001d2fc) cale_week_time_pane_t4_ParamLimits

0x732e,	// (0x0001d314) cale_week_time_pane_t5_ParamLimits

0x7346,	// (0x0001d32c) cale_week_time_pane_t6_ParamLimits

0x735e,	// (0x0001d344) cale_week_time_pane_t7_ParamLimits

0x7376,	// (0x0001d35c) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000251f5) cale_week_time_pane_t_ParamLimits

0x8ed8,	// (0x0001eebe) cell_cale_week_pane_g2_ParamLimits

0x1041,	// (0x00017027) bg_cale_side_pane_cp01_ParamLimits

0x9d2f,	// (0x0001fd15) cale_month_week_pane_t1_ParamLimits

0x9d46,	// (0x0001fd2c) cale_month_week_pane_t2_ParamLimits

0x9d5d,	// (0x0001fd43) cale_month_week_pane_t3_ParamLimits

0x9d74,	// (0x0001fd5a) cale_month_week_pane_t4_ParamLimits

0x9d8b,	// (0x0001fd71) cale_month_week_pane_t5_ParamLimits

0x9da2,	// (0x0001fd88) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x000252ce) cale_month_week_pane_t_ParamLimits

0x740a,	// (0x0001d3f0) cell_cale_month_pane_g1_ParamLimits

0x06b0,	// (0x00016696) main_cale_event_viewer_pane

0x06b0,	// (0x00016696) listscroll_cale_event_viewer_pane

0x3676,	// (0x0001965c) list_cale_ev_pane

0x367e,	// (0x00019664) scroll_pane_cp023

0x368a,	// (0x00019670) field_cale_ev_pane_ParamLimits

0x368a,	// (0x00019670) field_cale_ev_pane

0x36a8,	// (0x0001968e) field_cale_ev_content_pane_ParamLimits

0x36a8,	// (0x0001968e) field_cale_ev_content_pane

0x36b4,	// (0x0001969a) field_cale_ev_pane_g1_ParamLimits

0x36b4,	// (0x0001969a) field_cale_ev_pane_g1

0x36c0,	// (0x000196a6) field_cale_ev_pane_g2_ParamLimits

0x36c0,	// (0x000196a6) field_cale_ev_pane_g2

0x36d8,	// (0x000196be) field_cale_ev_pane_g3_ParamLimits

0x36d8,	// (0x000196be) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0002570f) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0002570f) field_cale_ev_pane_g

0x36f0,	// (0x000196d6) field_cale_ev_pane_t1_ParamLimits

0x36f0,	// (0x000196d6) field_cale_ev_pane_t1

0x3707,	// (0x000196ed) field_cale_ev_content_pane_t1_ParamLimits

0x3707,	// (0x000196ed) field_cale_ev_content_pane_t1

0x1dc1,	// (0x00017da7) bg_button_pane_cp01

0x0e95,	// (0x00016e7b) listscroll_cale_week_pane_ParamLimits

0x8bc1,	// (0x0001eba7) popup_toolbar_window_cp01

0x102f,	// (0x00017015) listscroll_cale_week_pane_t1_ParamLimits

0x0e95,	// (0x00016e7b) listscroll_cale_day_pane_ParamLimits

0x8bc1,	// (0x0001eba7) popup_toolbar_window_cp02

0x102f,	// (0x00017015) listscroll_cale_day_pane_t1_ParamLimits

0x0e95,	// (0x00016e7b) main_cale_month_pane_ParamLimits

0xb0d5,	// (0x000210bb) popup_toolbar_window_cp03_ParamLimits

0xb0d5,	// (0x000210bb) popup_toolbar_window_cp03

0xaa4e,	// (0x00020a34) main_image_pane_g2_ParamLimits

0xaa4e,	// (0x00020a34) main_image_pane_g2

0xaa5a,	// (0x00020a40) main_image_pane_g3_ParamLimits

0xaa5a,	// (0x00020a40) main_image_pane_g3

0x0002,

0xf51a,	// (0x00025500) main_image_pane_g_ParamLimits

0xf51a,	// (0x00025500) main_image_pane_g

0x1f84,	// (0x00017f6a) main_image_pane_t1_ParamLimits

0xaa66,	// (0x00020a4c) main_image_pane_t2_ParamLimits

0xaa66,	// (0x00020a4c) main_image_pane_t2

0xaa78,	// (0x00020a5e) main_image_pane_t3_ParamLimits

0xaa78,	// (0x00020a5e) main_image_pane_t3

0xaa8a,	// (0x00020a70) main_image_pane_t4_ParamLimits

0xaa8a,	// (0x00020a70) main_image_pane_t4

0x0003,

0xf521,	// (0x00025507) main_image_pane_t_ParamLimits

0xf521,	// (0x00025507) main_image_pane_t

0xaa9c,	// (0x00020a82) popup_image_details_window_cp01

0xaaa6,	// (0x00020a8c) popup_toobar_trans_pane_cp01_ParamLimits

0xaaa6,	// (0x00020a8c) popup_toobar_trans_pane_cp01

0xb052,	// (0x00021038) popup_image_details_window_ParamLimits

0xb052,	// (0x00021038) popup_image_details_window

0x310d,	// (0x000190f3) popup_image_focus_window

0x7561,	// (0x0001d547) camera2_autofocus_pane_ParamLimits

0x7561,	// (0x0001d547) camera2_autofocus_pane

0x06b0,	// (0x00016696) bg_popup_sub_pane_cp06

0x3725,	// (0x0001970b) popup_image_focus_window_g1

0x372d,	// (0x00019713) popup_image_focus_window_g2

0x3735,	// (0x0001971b) popup_image_focus_window_g3

0x373d,	// (0x00019723) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00025716) popup_image_focus_window_g

0x3745,	// (0x0001972b) popup_image_focus_window_t1

0x3753,	// (0x00019739) popup_image_focus_window_t2

0x3763,	// (0x00019749) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0002571f) popup_image_focus_window_t

0x3771,	// (0x00019757) camera2_autofocus_pane_g1

0x0720,	// (0x00016706) bg_tb_trans_pane_cp01

0x377f,	// (0x00019765) popup_image_details_window_g1

0x3792,	// (0x00019778) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x00025731) popup_image_details_window_g

0x37bb,	// (0x000197a1) popup_image_details_window_t1

0x37cd,	// (0x000197b3) popup_image_details_window_t2

0x37e6,	// (0x000197cc) popup_image_details_window_t3

0x37fa,	// (0x000197e0) popup_image_details_window_t4

0x3815,	// (0x000197fb) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00025738) popup_image_details_window_t

0x0e67,	// (0x00016e4d) bg_calc_paper_pane_ParamLimits

0x7199,	// (0x0001d17f) grid_highlight_pane_cp013

0x71a3,	// (0x0001d189) list_calc_pane_ParamLimits

0x71b5,	// (0x0001d19b) scroll_pane_cp024

0x0e95,	// (0x00016e7b) bg_calc_display_pane_ParamLimits

0x71bd,	// (0x0001d1a3) calc_display_pane_t1_ParamLimits

0x71d2,	// (0x0001d1b8) calc_display_pane_t2_ParamLimits

0x71e7,	// (0x0001d1cd) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00025168) calc_display_pane_t_ParamLimits

0x7250,	// (0x0001d236) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00025185) cell_calc_pane_g

0x7259,	// (0x0001d23f) cell_calc_pane_t1

0x0f18,	// (0x00016efe) grid_highlight_pane_cp02_ParamLimits

0x0f2e,	// (0x00016f14) toolbar_button_pane_cp01_ParamLimits

0x0f2e,	// (0x00016f14) toolbar_button_pane_cp01

0x1fc9,	// (0x00017faf) temp_image_control_pane_ParamLimits

0x1fc9,	// (0x00017faf) temp_image_control_pane

0x0720,	// (0x00016706) main_mp3_pane

0x382f,	// (0x00019815) temp_image_control_pane_g1_ParamLimits

0x382f,	// (0x00019815) temp_image_control_pane_g1

0x383d,	// (0x00019823) temp_image_control_pane_g2_ParamLimits

0x383d,	// (0x00019823) temp_image_control_pane_g2

0x384f,	// (0x00019835) temp_image_control_pane_g3_ParamLimits

0x384f,	// (0x00019835) temp_image_control_pane_g3

0xb6d5,	// (0x000216bb) temp_image_control_pane_g4_ParamLimits

0xb6d5,	// (0x000216bb) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x00025743) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x00025743) temp_image_control_pane_g

0x382f,	// (0x00019815) main_mp3_pane_g1

0xb6e6,	// (0x000216cc) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0002574c) main_mp3_pane_g

0x3892,	// (0x00019878) main_mp3_pane_t1

0x1110,	// (0x000170f6) main_camera_pane_g8_ParamLimits

0x1110,	// (0x000170f6) main_camera_pane_g8

0x90fa,	// (0x0001f0e0) main_video_pane_g7_ParamLimits

0x90fa,	// (0x0001f0e0) main_video_pane_g7

0x76a9,	// (0x0001d68f) main_camera2_pane_t7_ParamLimits

0x76a9,	// (0x0001d68f) main_camera2_pane_t7

0x12fe,	// (0x000172e4) scroll_pane_cp025_ParamLimits

0x12fe,	// (0x000172e4) scroll_pane_cp025

0x1312,	// (0x000172f8) scroll_pane_cp026_ParamLimits

0x1312,	// (0x000172f8) scroll_pane_cp026

0x1321,	// (0x00017307) wml_content_pane_ParamLimits

0x06b0,	// (0x00016696) main_touch_calib_pane

0xb78a,	// (0x00021770) main_touch_calib_pane_g1

0xb796,	// (0x0002177c) main_touch_calib_pane_g2

0xb7a2,	// (0x00021788) main_touch_calib_pane_g3

0xb7ae,	// (0x00021794) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0002576a) main_touch_calib_pane_g

0xb7ba,	// (0x000217a0) main_touch_calib_pane_t1

0xb7d1,	// (0x000217b7) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x00025773) main_touch_calib_pane_t

0x1b71,	// (0x00017b57) mup_progress_pane_cp02

0x1b90,	// (0x00017b76) navi_pane_g1

0x1bf2,	// (0x00017bd8) navi_pane_mp_t3

0x0720,	// (0x00016706) main_mp3_pane_ParamLimits

0xb113,	// (0x000210f9) navi_pane_ParamLimits

0x382f,	// (0x00019815) main_mp3_pane_g1_ParamLimits

0xb6e6,	// (0x000216cc) main_mp3_pane_g2_ParamLimits

0xb6f2,	// (0x000216d8) main_mp3_pane_g3_ParamLimits

0xb6f2,	// (0x000216d8) main_mp3_pane_g3

0xb6fe,	// (0x000216e4) main_mp3_pane_g4_ParamLimits

0xb6fe,	// (0x000216e4) main_mp3_pane_g4

0x385f,	// (0x00019845) main_mp3_pane_g5_ParamLimits

0x385f,	// (0x00019845) main_mp3_pane_g5

0x386d,	// (0x00019853) main_mp3_pane_g6_ParamLimits

0x386d,	// (0x00019853) main_mp3_pane_g6

0x387a,	// (0x00019860) main_mp3_pane_g7_ParamLimits

0x387a,	// (0x00019860) main_mp3_pane_g7

0x3886,	// (0x0001986c) main_mp3_pane_g8_ParamLimits

0x3886,	// (0x0001986c) main_mp3_pane_g8

0xf766,	// (0x0002574c) main_mp3_pane_g_ParamLimits

0xb70a,	// (0x000216f0) main_mp3_pane_t2

0xb71a,	// (0x00021700) main_mp3_pane_t3

0x38a0,	// (0x00019886) main_mp3_pane_t4

0x38ae,	// (0x00019894) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0002575d) main_mp3_pane_t

0x38bc,	// (0x000198a2) mup_progress_pane_cp01

0x06ce,	// (0x000166b4) aid_zoom_text_secondary2

0x3676,	// (0x0001965c) list_cale_ev2_pane

0x367e,	// (0x00019664) scroll_pane_cp023_ParamLimits

0xb826,	// (0x0002180c) field_cale_ev2_pane_ParamLimits

0xb826,	// (0x0002180c) field_cale_ev2_pane

0xb84f,	// (0x00021835) field_cale_ev2_pane_g1_ParamLimits

0xb84f,	// (0x00021835) field_cale_ev2_pane_g1

0xb85b,	// (0x00021841) field_cale_ev2_pane_g2_ParamLimits

0xb85b,	// (0x00021841) field_cale_ev2_pane_g2

0xb873,	// (0x00021859) field_cale_ev2_pane_g3_ParamLimits

0xb873,	// (0x00021859) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0002577e) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0002577e) field_cale_ev2_pane_g

0xb88b,	// (0x00021871) field_cale_ev2_pane_t1_ParamLimits

0xb88b,	// (0x00021871) field_cale_ev2_pane_t1

0xb8a2,	// (0x00021888) field_cale_ev2_pane_t2_ParamLimits

0xb8a2,	// (0x00021888) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x00025787) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x00025787) field_cale_ev2_pane_t

0xa92e,	// (0x00020914) main_postcard_pane_g5_ParamLimits

0xa92e,	// (0x00020914) main_postcard_pane_g5

0xa93c,	// (0x00020922) main_postcard_pane_g6_ParamLimits

0xa93c,	// (0x00020922) main_postcard_pane_g6

0x8f42,	// (0x0001ef28) camera2_autofocus_pane_cp_ParamLimits

0x8f42,	// (0x0001ef28) camera2_autofocus_pane_cp

0x0720,	// (0x00016706) main_mup3_pane

0xb8d7,	// (0x000218bd) main_mup3_pane_g1_ParamLimits

0xb8d7,	// (0x000218bd) main_mup3_pane_g1

0xb8f8,	// (0x000218de) main_mup3_pane_g2_ParamLimits

0xb8f8,	// (0x000218de) main_mup3_pane_g2

0xb970,	// (0x00021956) main_mup3_pane_g3_ParamLimits

0xb970,	// (0x00021956) main_mup3_pane_g3

0xb9af,	// (0x00021995) main_mup3_pane_g4_ParamLimits

0xb9af,	// (0x00021995) main_mup3_pane_g4

0xb9ee,	// (0x000219d4) main_mup3_pane_g5_ParamLimits

0xb9ee,	// (0x000219d4) main_mup3_pane_g5

0xba2d,	// (0x00021a13) main_mup3_pane_g6_ParamLimits

0xba2d,	// (0x00021a13) main_mup3_pane_g6

0x38d0,	// (0x000198b6) main_mup3_pane_g7_ParamLimits

0x38d0,	// (0x000198b6) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x00025797) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x00025797) main_mup3_pane_g

0xba9f,	// (0x00021a85) main_mup3_pane_t1_ParamLimits

0xba9f,	// (0x00021a85) main_mup3_pane_t1

0xbb0a,	// (0x00021af0) main_mup3_pane_t2_ParamLimits

0xbb0a,	// (0x00021af0) main_mup3_pane_t2

0xbbcf,	// (0x00021bb5) main_mup3_pane_t4_ParamLimits

0xbbcf,	// (0x00021bb5) main_mup3_pane_t4

0xbc1d,	// (0x00021c03) main_mup3_pane_t5_ParamLimits

0xbc1d,	// (0x00021c03) main_mup3_pane_t5

0xbcc5,	// (0x00021cab) main_mup3_pane_t6_ParamLimits

0xbcc5,	// (0x00021cab) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x000257a8) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x000257a8) main_mup3_pane_t

0xbd6d,	// (0x00021d53) mup3_progress_pane_ParamLimits

0xbd6d,	// (0x00021d53) mup3_progress_pane

0xbdd8,	// (0x00021dbe) popup_mup3_control_window_ParamLimits

0xbdd8,	// (0x00021dbe) popup_mup3_control_window

0x38de,	// (0x000198c4) popup_mup3_text_window

0xbdf1,	// (0x00021dd7) mup3_progress_pane_t1

0xbe08,	// (0x00021dee) mup3_progress_pane_t2

0x38e6,	// (0x000198cc) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x000257b5) mup3_progress_pane_t

0x38fd,	// (0x000198e3) mup_progress_pane_cp03

0x06b0,	// (0x00016696) bg_tb_trans_pane_cp04

0xbe1f,	// (0x00021e05) mup3_volume_pane

0xbe27,	// (0x00021e0d) popup_mup3_control_window_g1

0xbe30,	// (0x00021e16) mup3_volume_pane_g1

0xbe39,	// (0x00021e1f) mup3_volume_pane_g2

0xbe42,	// (0x00021e28) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x000257bc) mup3_volume_pane_g

0x06b0,	// (0x00016696) bg_tb_trans_pane_cp03

0x390d,	// (0x000198f3) popup_mup3_text_window_g1

0x3915,	// (0x000198fb) popup_mup3_text_window_t1

0x0eef,	// (0x00016ed5) list_calc_item_pane_g1_ParamLimits

0x3302,	// (0x000192e8) mup_volume_pane_cp_g1

0xb7e8,	// (0x000217ce) main_touch_calib_pane_t3

0xb7fc,	// (0x000217e2) main_touch_calib_pane_t4

0xb810,	// (0x000217f6) main_touch_calib_pane_t5

0x06ba,	// (0x000166a0) aid_cell_size_toolbar2

0x06c2,	// (0x000166a8) aid_popup3_width_pane

0x06ce,	// (0x000166b4) aid_zoom_text_msg_primary

0x73f4,	// (0x0001d3da) vorec_t7

0x0eb3,	// (0x00016e99) bg_calc_paper_pane_g1_ParamLimits

0x0ecb,	// (0x00016eb1) bg_calc_paper_pane_g2_ParamLimits

0x0ebf,	// (0x00016ea5) bg_calc_paper_pane_g3_ParamLimits

0x0ee3,	// (0x00016ec9) bg_calc_paper_pane_g4_ParamLimits

0x0ed7,	// (0x00016ebd) bg_calc_paper_pane_g5_ParamLimits

0x8a76,	// (0x0001ea5c) bg_calc_paper_pane_g6_ParamLimits

0x8a87,	// (0x0001ea6d) bg_calc_paper_pane_g7_ParamLimits

0x8a98,	// (0x0001ea7e) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0002516f) bg_calc_paper_pane_g_ParamLimits

0x8aa9,	// (0x0001ea8f) calc_bg_paper_pane_g9_ParamLimits

0x9029,	// (0x0001f00f) image_qvga_pane_ParamLimits

0x9029,	// (0x0001f00f) image_qvga_pane

0x0d9c,	// (0x00016d82) bg_popup_sub_pane_cp04_ParamLimits

0x1f00,	// (0x00017ee6) popup_mup_playback_window_g1_ParamLimits

0x1f0c,	// (0x00017ef2) popup_mup_playback_window_t1_ParamLimits

0x1f21,	// (0x00017f07) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x000254fb) popup_mup_playback_window_t_ParamLimits

0xb35f,	// (0x00021345) main_mup2_pane_g3_ParamLimits

0xb35f,	// (0x00021345) main_mup2_pane_g3

0x92c7,	// (0x0001f2ad) popup_toolbar_window_cp04

0x2303,	// (0x000182e9) popup_call2_audio_second_window_g3_ParamLimits

0x2303,	// (0x000182e9) popup_call2_audio_second_window_g3

0x270d,	// (0x000186f3) popup_call2_audio_first_window_g4_ParamLimits

0x270d,	// (0x000186f3) popup_call2_audio_first_window_g4

0x2d8c,	// (0x00018d72) popup_call2_audio_in_window_g4_ParamLimits

0x2d8c,	// (0x00018d72) popup_call2_audio_in_window_g4

0xaa41,	// (0x00020a27) aid_area_sk_bg_cut_ParamLimits

0xaa41,	// (0x00020a27) aid_area_sk_bg_cut

0x1f36,	// (0x00017f1c) aid_area_sk_bg_cut_2_ParamLimits

0x1f36,	// (0x00017f1c) aid_area_sk_bg_cut_2

0xb67b,	// (0x00021661) aid_placing_details_win

0xb683,	// (0x00021669) aid_placing_details_win_2

0x3771,	// (0x00019757) camera2_autofocus_pane_g1_ParamLimits

0x875c,	// (0x0001e742) popup_fixed_preview_cale_window_ParamLimits

0x875c,	// (0x0001e742) popup_fixed_preview_cale_window

0x1c5c,	// (0x00017c42) navi_slider_pane_g3

0x1c53,	// (0x00017c39) navi_slider_pane_g4

0x1c4a,	// (0x00017c30) navi_slider_pane_g5

0x1c5c,	// (0x00017c42) navi_slider_pane_g6

0x74d0,	// (0x0001d4b6) navi_slider_pane_g7

0x1d86,	// (0x00017d6c) mup_scale_pane_g3

0x1d8f,	// (0x00017d75) mup_scale_pane_g4

0x1d98,	// (0x00017d7e) mup_scale_pane_g5

0xa7ba,	// (0x000207a0) mup_scale_pane_g6

0xa7c3,	// (0x000207a9) mup_scale_pane_g7

0x1c5c,	// (0x00017c42) cams2_slider_pane_g3

0x33b7,	// (0x0001939d) cams2_slider_pane_g4

0x781b,	// (0x0001d801) cams2_slider_pane_g5

0x1c5c,	// (0x00017c42) cams2_slider_pane_g6

0x7823,	// (0x0001d809) cams2_slider_pane_g7

0x35f3,	// (0x000195d9) camera2_autofocus_pane_cp_g1

0x3923,	// (0x00019909) bg_popup_preview_window_pane_cp02_ParamLimits

0x3923,	// (0x00019909) bg_popup_preview_window_pane_cp02

0x392f,	// (0x00019915) list_fp_cale_pane_ParamLimits

0x392f,	// (0x00019915) list_fp_cale_pane

0x393b,	// (0x00019921) popup_fixed_preview_cale_window_t1_ParamLimits

0x393b,	// (0x00019921) popup_fixed_preview_cale_window_t1

0xbe4b,	// (0x00021e31) popup_fixed_preview_cale_window_t2_ParamLimits

0xbe4b,	// (0x00021e31) popup_fixed_preview_cale_window_t2

0xbe60,	// (0x00021e46) popup_fixed_preview_cale_window_t3_ParamLimits

0xbe60,	// (0x00021e46) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x000257c3) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x000257c3) popup_fixed_preview_cale_window_t

0xbe75,	// (0x00021e5b) list_single_fp_cale_pane_ParamLimits

0xbe75,	// (0x00021e5b) list_single_fp_cale_pane

0x3959,	// (0x0001993f) list_single_fp_cale_pane_g1_ParamLimits

0x3959,	// (0x0001993f) list_single_fp_cale_pane_g1

0x3965,	// (0x0001994b) list_single_fp_cale_pane_g2_ParamLimits

0x3965,	// (0x0001994b) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x000257ca) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x000257ca) list_single_fp_cale_pane_g

0x397e,	// (0x00019964) list_single_fp_cale_pane_t1_ParamLimits

0x397e,	// (0x00019964) list_single_fp_cale_pane_t1

0x3990,	// (0x00019976) list_single_fp_cale_pane_t2_ParamLimits

0x3990,	// (0x00019976) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x000257d1) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x000257d1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x06b0,	// (0x00016696) main_dialer_pane

0xbe87,	// (0x00021e6d) aid_cell_size_keypad

0xbe91,	// (0x00021e77) dialer_ne_pane

0xbe9b,	// (0x00021e81) grid_dialer_command_1_pane

0xbea3,	// (0x00021e89) grid_dialer_command_2_pane

0xbeab,	// (0x00021e91) grid_dialer_keypad_pane

0xbebd,	// (0x00021ea3) bg_popup_call_pane_cp06_ParamLimits

0xbebd,	// (0x00021ea3) bg_popup_call_pane_cp06

0xbec9,	// (0x00021eaf) dialer_ne_clear_pane_ParamLimits

0xbec9,	// (0x00021eaf) dialer_ne_clear_pane

0x39c3,	// (0x000199a9) dialer_ne_pane_g1

0x39cb,	// (0x000199b1) dialer_ne_pane_t1_ParamLimits

0x39cb,	// (0x000199b1) dialer_ne_pane_t1

0xbed5,	// (0x00021ebb) dialer_ne_pane_t2_ParamLimits

0xbed5,	// (0x00021ebb) dialer_ne_pane_t2

0xbef2,	// (0x00021ed8) dialer_ne_pane_t3_ParamLimits

0xbef2,	// (0x00021ed8) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x000257d6) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x000257d6) dialer_ne_pane_t

0xbf16,	// (0x00021efc) dialer_ne_pane_t3_copy1_ParamLimits

0xbf16,	// (0x00021efc) dialer_ne_pane_t3_copy1

0xbf3a,	// (0x00021f20) cell_dialer_keypad_pane_ParamLimits

0xbf3a,	// (0x00021f20) cell_dialer_keypad_pane

0xbf51,	// (0x00021f37) cell_dialer_command_1_pane_ParamLimits

0xbf51,	// (0x00021f37) cell_dialer_command_1_pane

0xbf67,	// (0x00021f4d) cell_dialer_command_2_pane_ParamLimits

0xbf67,	// (0x00021f4d) cell_dialer_command_2_pane

0x39dd,	// (0x000199c3) bg_button_pane_cp02_ParamLimits

0x39dd,	// (0x000199c3) bg_button_pane_cp02

0xbf76,	// (0x00021f5c) cell_dialer_keypad_pane_g1_ParamLimits

0xbf76,	// (0x00021f5c) cell_dialer_keypad_pane_g1

0x39dd,	// (0x000199c3) bg_button_pane_cp03_ParamLimits

0x39dd,	// (0x000199c3) bg_button_pane_cp03

0xbf8b,	// (0x00021f71) cell_dialer_command_1_pane_g1_ParamLimits

0xbf8b,	// (0x00021f71) cell_dialer_command_1_pane_g1

0x39e9,	// (0x000199cf) bg_button_pane_cp04

0xbf9f,	// (0x00021f85) cell_dialer_command_2_pane_g1

0x1c30,	// (0x00017c16) bg_button_pane_cp06

0x39f1,	// (0x000199d7) dialer_ne_clear_pane_g1

0xa2ce,	// (0x000202b4) navi_pane_g2

0xa2fc,	// (0x000202e2) navi_pane_g3

0x0002,

0xf418,	// (0x000253fe) navi_pane_g

0xa327,	// (0x0002030d) navi_pane_mv_g2

0xa34e,	// (0x00020334) navi_pane_mv_g5

0xa356,	// (0x0002033c) navi_pane_mv_t1

0x0e95,	// (0x00016e7b) main_clock2_pane

0xbfce,	// (0x00021fb4) main_clock2_list_pane_ParamLimits

0xbfce,	// (0x00021fb4) main_clock2_list_pane

0xbff6,	// (0x00021fdc) main_clock2_pane_t1_ParamLimits

0xbff6,	// (0x00021fdc) main_clock2_pane_t1

0xc024,	// (0x0002200a) main_clock2_pane_t2_ParamLimits

0xc024,	// (0x0002200a) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x000257dd) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x000257dd) main_clock2_pane_t

0xc08b,	// (0x00022071) popup_clock_analogue_window_cp03_ParamLimits

0xc08b,	// (0x00022071) popup_clock_analogue_window_cp03

0xc0a9,	// (0x0002208f) popup_clock_digital_window_cp02_ParamLimits

0xc0a9,	// (0x0002208f) popup_clock_digital_window_cp02

0xc116,	// (0x000220fc) main_clock2_list_single_pane_ParamLimits

0xc116,	// (0x000220fc) main_clock2_list_single_pane

0x1c30,	// (0x00017c16) list_highlight_pane_cp05

0x39f9,	// (0x000199df) main_clock2_list_single_pane_t1

0x92c7,	// (0x0001f2ad) popup_toolbar_window_cp04_ParamLimits

0xb6a5,	// (0x0002168b) camera2_autofocus_pane_g2_ParamLimits

0xb6a5,	// (0x0002168b) camera2_autofocus_pane_g2

0xb6b1,	// (0x00021697) camera2_autofocus_pane_g3_ParamLimits

0xb6b1,	// (0x00021697) camera2_autofocus_pane_g3

0xb6bd,	// (0x000216a3) camera2_autofocus_pane_g4_ParamLimits

0xb6bd,	// (0x000216a3) camera2_autofocus_pane_g4

0xb6c9,	// (0x000216af) camera2_autofocus_pane_g5_ParamLimits

0xb6c9,	// (0x000216af) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00025726) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00025726) camera2_autofocus_pane_g

0xb8b7,	// (0x0002189d) camera2_autofocus_pane_cp_g2

0xb8bf,	// (0x000218a5) camera2_autofocus_pane_cp_g3

0xb8c7,	// (0x000218ad) camera2_autofocus_pane_cp_g4

0xb8cf,	// (0x000218b5) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0002578c) camera2_autofocus_pane_cp_g

0xbeb5,	// (0x00021e9b) popup_dialer_spcha_window

0x06b0,	// (0x00016696) bg_popup_sub_pane_cp07

0x3a07,	// (0x000199ed) list_spcha_pane

0x3a0f,	// (0x000199f5) list_single_spcha_pane_ParamLimits

0x3a0f,	// (0x000199f5) list_single_spcha_pane

0x06b0,	// (0x00016696) list_highlight_pane_cp06

0x3a20,	// (0x00019a06) list_single_spcha_pane_t1

0x2b36,	// (0x00018b1c) popup_call2_audio_out_window_g4_ParamLimits

0x2b36,	// (0x00018b1c) popup_call2_audio_out_window_g4

0x06b0,	// (0x00016696) main_imed2_pane

0x3115,	// (0x000190fb) popup_imed_adjust2_window

0xb060,	// (0x00021046) popup_imed_trans_window_ParamLimits

0xb060,	// (0x00021046) popup_imed_trans_window

0x3431,	// (0x00019417) popup_blid_sat_info2_window_t1

0x343f,	// (0x00019425) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x000256bb) popup_blid_sat_info2_window_t

0xc148,	// (0x0002212e) aid_size_cell_colour_35

0xc162,	// (0x00022148) aid_size_cell_colour_112

0xc179,	// (0x0002215f) aid_size_cell_effect

0x0720,	// (0x00016706) bg_tb_trans_pane_cp02

0x1732,	// (0x00017718) heading_imed_pane

0xc193,	// (0x00022179) listscroll_imed_pane

0x3a2e,	// (0x00019a14) heading_imed_pane_g1

0x3a36,	// (0x00019a1c) heading_imed_pane_t1

0x3a44,	// (0x00019a2a) grid_imed_colour_35_pane_ParamLimits

0x3a44,	// (0x00019a2a) grid_imed_colour_35_pane

0xc19f,	// (0x00022185) grid_imed_effect_pane

0x3a5b,	// (0x00019a41) list_imed_aspect_pane

0xc1af,	// (0x00022195) scroll_pane_cp027_ParamLimits

0xc1af,	// (0x00022195) scroll_pane_cp027

0xc1bb,	// (0x000221a1) cell_imed_effect_pane_ParamLimits

0xc1bb,	// (0x000221a1) cell_imed_effect_pane

0x3a63,	// (0x00019a49) cell_imed_colour_pane_ParamLimits

0x3a63,	// (0x00019a49) cell_imed_colour_pane

0x3aa5,	// (0x00019a8b) cell_imed_colour_pane_g1_ParamLimits

0x3aa5,	// (0x00019a8b) cell_imed_colour_pane_g1

0x3ab6,	// (0x00019a9c) hgihlgiht_grid_pane_cp016_ParamLimits

0x3ab6,	// (0x00019a9c) hgihlgiht_grid_pane_cp016

0xc1d3,	// (0x000221b9) cell_imed_effect_pane_g1

0xc1db,	// (0x000221c1) grid_highlight_pane_cp017

0x3ad5,	// (0x00019abb) list_imed_single_pane_ParamLimits

0x3ad5,	// (0x00019abb) list_imed_single_pane

0x06b0,	// (0x00016696) list_highlight_pane_cp07

0x3aea,	// (0x00019ad0) list_imed_aspect_pane_comp1_t1

0x30ed,	// (0x000190d3) bg_tb_trans_pane_cp05

0x3b0c,	// (0x00019af2) popup_imed_adjust2_window_g1

0x3b33,	// (0x00019b19) popup_imed_adjust2_window_t1

0x3b4b,	// (0x00019b31) slider_imed_adjust_pane

0x3b5f,	// (0x00019b45) slider_imed_adjust_pane_g1

0x3b6f,	// (0x00019b55) slider_imed_adjust_pane_g2

0x3b7f,	// (0x00019b65) slider_imed_adjust_pane_g3

0x3b90,	// (0x00019b76) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x000257fa) slider_imed_adjust_pane_g

0xc1e4,	// (0x000221ca) aid_size_cell_clipart2

0xc1f0,	// (0x000221d6) grid_imed_clipart_pane

0x3ba1,	// (0x00019b87) scroll_pane_cp031

0xc1fa,	// (0x000221e0) cell_imed_clipart_pane_ParamLimits

0xc1fa,	// (0x000221e0) cell_imed_clipart_pane

0xc21c,	// (0x00022202) cell_imed_clipart_pane_g1

0x06b0,	// (0x00016696) grid_highlight_pane_cp014

0xbfda,	// (0x00021fc0) main_clock2_pane_g1_ParamLimits

0xbfda,	// (0x00021fc0) main_clock2_pane_g1

0xc0c1,	// (0x000220a7) aid_call2_pane_cp10

0xc0d3,	// (0x000220b9) aid_call_pane_cp10

0x1b65,	// (0x00017b4b) popup_clock_analogue_window_cp10_g1

0x1b65,	// (0x00017b4b) popup_clock_analogue_window_cp10_g2

0xc0e5,	// (0x000220cb) popup_clock_analogue_window_cp10_g3

0xc0e5,	// (0x000220cb) popup_clock_analogue_window_cp10_g4

0x1b65,	// (0x00017b4b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x000257e8) popup_clock_analogue_window_cp10_g

0xc0f7,	// (0x000220dd) popup_clock_analogue_window_cp10_t1

0x782c,	// (0x0001d812) clock_digital_number_pane_cp10_ParamLimits

0x782c,	// (0x0001d812) clock_digital_number_pane_cp10

0x7844,	// (0x0001d82a) clock_digital_number_pane_cp11_ParamLimits

0x7844,	// (0x0001d82a) clock_digital_number_pane_cp11

0x785c,	// (0x0001d842) clock_digital_number_pane_cp12_ParamLimits

0x785c,	// (0x0001d842) clock_digital_number_pane_cp12

0x7874,	// (0x0001d85a) clock_digital_number_pane_cp13_ParamLimits

0x7874,	// (0x0001d85a) clock_digital_number_pane_cp13

0x788c,	// (0x0001d872) clock_digital_separator_pane_cp10_ParamLimits

0x788c,	// (0x0001d872) clock_digital_separator_pane_cp10

0xc128,	// (0x0002210e) popup_clock_digital_window_cp02_t1_ParamLimits

0xc128,	// (0x0002210e) popup_clock_digital_window_cp02_t1

0x0d94,	// (0x00016d7a) clock_digital_number_pane_cp10_g1

0x0d94,	// (0x00016d7a) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00025803) clock_digital_number_pane_cp10_g

0x0d94,	// (0x00016d7a) clock_digital_separator_pane_cp10_g1

0x0d94,	// (0x00016d7a) clock_digital_separator_pane_g2_cp10

0x1c00,	// (0x00017be6) navi_pane_vded_g4

0x1c09,	// (0x00017bef) navi_pane_vded_g5

0x1c12,	// (0x00017bf8) navi_pane_vded_t1

0x06b0,	// (0x00016696) main_vded_pane

0xc225,	// (0x0002220b) main_vded_pane_g1

0xc231,	// (0x00022217) main_vded_pane_g2

0xc23b,	// (0x00022221) main_vded_pane_g3

0x0002,

0xf822,	// (0x00025808) main_vded_pane_g

0xc245,	// (0x0002222b) main_vded_pane_t1

0xc253,	// (0x00022239) main_vded_pane_t2

0x0001,

0xf829,	// (0x0002580f) main_vded_pane_t

0xc261,	// (0x00022247) vded_slider_pane

0xc26b,	// (0x00022251) vded_video_pane

0x3ba9,	// (0x00019b8f) vded_video_pane_g1

0xc275,	// (0x0002225b) vded_video_pane_g2

0x35f3,	// (0x000195d9) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00025814) vded_video_pane_g

0x3bb3,	// (0x00019b99) vded_slider_pane_g1

0x3302,	// (0x000192e8) vded_slider_pane_g2

0x3bbc,	// (0x00019ba2) vded_slider_pane_g3

0x3bc5,	// (0x00019bab) vded_slider_pane_g4

0x3bce,	// (0x00019bb4) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0002581b) vded_slider_pane_g

0xbdca,	// (0x00021db0) mup3_rocker_pane_ParamLimits

0xbdca,	// (0x00021db0) mup3_rocker_pane

0xc27e,	// (0x00022264) mup3_control_keys_pane_g1

0xc286,	// (0x0002226c) mup3_control_keys_pane_g2

0xc28e,	// (0x00022274) mup3_control_keys_pane_g3

0xc296,	// (0x0002227c) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00025826) mup3_control_keys_pane_g

0x877a,	// (0x0001e760) popup_toolbar2_fixed_window_cp01_ParamLimits

0x877a,	// (0x0001e760) popup_toolbar2_fixed_window_cp01

0xbde4,	// (0x00021dca) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbde4,	// (0x00021dca) popup_toolbar2_fixed_window_cp02

0x2475,	// (0x0001845b) popup_call2_audio_second_window_t4_ParamLimits

0x2475,	// (0x0001845b) popup_call2_audio_second_window_t4

0x29a3,	// (0x00018989) popup_call2_audio_first_window_t6_ParamLimits

0x29a3,	// (0x00018989) popup_call2_audio_first_window_t6

0x2c39,	// (0x00018c1f) popup_call2_audio_out_window_t6_ParamLimits

0x2c39,	// (0x00018c1f) popup_call2_audio_out_window_t6

0x06b0,	// (0x00016696) main_vitu_pane

0xc2a6,	// (0x0002228c) aid_size_cell_itu_ParamLimits

0xc2a6,	// (0x0002228c) aid_size_cell_itu

0x3ac7,	// (0x00019aad) bg_popup_window_pane_cp08_ParamLimits

0x3ac7,	// (0x00019aad) bg_popup_window_pane_cp08

0xc2b4,	// (0x0002229a) field_vitu_entry_pane_ParamLimits

0xc2b4,	// (0x0002229a) field_vitu_entry_pane

0xc2c3,	// (0x000222a9) grid_vitu_function_pane_ParamLimits

0xc2c3,	// (0x000222a9) grid_vitu_function_pane

0xc2d3,	// (0x000222b9) grid_vitu_itu_pane_ParamLimits

0xc2d3,	// (0x000222b9) grid_vitu_itu_pane

0xc2e3,	// (0x000222c9) cell_vitu_itu_pane_ParamLimits

0xc2e3,	// (0x000222c9) cell_vitu_itu_pane

0xc2f8,	// (0x000222de) cell_vitu_function_pane_ParamLimits

0xc2f8,	// (0x000222de) cell_vitu_function_pane

0x0720,	// (0x00016706) bg_popup_sub_pane_cp08_ParamLimits

0x0720,	// (0x00016706) bg_popup_sub_pane_cp08

0xc30a,	// (0x000222f0) field_vitu_entry_pane_t1_ParamLimits

0xc30a,	// (0x000222f0) field_vitu_entry_pane_t1

0x3bef,	// (0x00019bd5) field_vitu_entry_pane_t2_ParamLimits

0x3bef,	// (0x00019bd5) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00025834) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00025834) field_vitu_entry_pane_t

0x3c0c,	// (0x00019bf2) bg_button_pane_cp05_ParamLimits

0x3c0c,	// (0x00019bf2) bg_button_pane_cp05

0xc325,	// (0x0002230b) cell_vitu_itu_pane_g1

0xc33d,	// (0x00022323) cell_vitu_itu_pane_t1_ParamLimits

0xc33d,	// (0x00022323) cell_vitu_itu_pane_t1

0xc34f,	// (0x00022335) cell_vitu_itu_pane_t2_ParamLimits

0xc34f,	// (0x00022335) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00025839) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00025839) cell_vitu_itu_pane_t

0x3c1a,	// (0x00019c00) bg_button_pane_cp07

0xc384,	// (0x0002236a) cell_vitu_function_pane_g1

0x7191,	// (0x0001d177) main_calc_pane_g1

0x857d,	// (0x0001e563) aid_visual_content_pane

0x06b0,	// (0x00016696) main_vradio_pane

0xc38d,	// (0x00022373) main_vradio_pane_g1_ParamLimits

0xc38d,	// (0x00022373) main_vradio_pane_g1

0x3c24,	// (0x00019c0a) main_vradio_pane_g2_ParamLimits

0x3c24,	// (0x00019c0a) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00025840) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00025840) main_vradio_pane_g

0xc39d,	// (0x00022383) main_vradio_pane_t1_ParamLimits

0xc39d,	// (0x00022383) main_vradio_pane_t1

0xc3af,	// (0x00022395) main_vradio_pane_t2_ParamLimits

0xc3af,	// (0x00022395) main_vradio_pane_t2

0x3c31,	// (0x00019c17) main_vradio_pane_t3_ParamLimits

0x3c31,	// (0x00019c17) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x00025845) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x00025845) main_vradio_pane_t

0xc3c1,	// (0x000223a7) vradio_rocker_control_pane_ParamLimits

0xc3c1,	// (0x000223a7) vradio_rocker_control_pane

0xc3cd,	// (0x000223b3) vradio_station_info_pane_ParamLimits

0xc3cd,	// (0x000223b3) vradio_station_info_pane

0x3c45,	// (0x00019c2b) vradio_frequency_info_pane_ParamLimits

0x3c45,	// (0x00019c2b) vradio_frequency_info_pane

0x35f3,	// (0x000195d9) vradio_station_info_pane_g1

0x3c54,	// (0x00019c3a) vradio_station_info_pane_t1_ParamLimits

0x3c54,	// (0x00019c3a) vradio_station_info_pane_t1

0x3c76,	// (0x00019c5c) vradio_station_info_pane_t2_ParamLimits

0x3c76,	// (0x00019c5c) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0002584c) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0002584c) vradio_station_info_pane_t

0x3c88,	// (0x00019c6e) vradio_tuning_pane

0x3c90,	// (0x00019c76) vradio_rocker_control_pane_g1

0x3c98,	// (0x00019c7e) vradio_rocker_control_pane_g2

0x3ca0,	// (0x00019c86) vradio_rocker_control_pane_g3

0x3ca8,	// (0x00019c8e) vradio_rocker_control_pane_g4

0x3cb0,	// (0x00019c96) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x00025851) vradio_rocker_control_pane_g

0xc3dc,	// (0x000223c2) vradio_frequency_info_pane_g1

0x3cb8,	// (0x00019c9e) vradio_frequency_info_pane_t1_ParamLimits

0x3cb8,	// (0x00019c9e) vradio_frequency_info_pane_t1

0xc3e6,	// (0x000223cc) vradio_tuning_pane_g1

0xc3ef,	// (0x000223d5) vradio_tuning_pane_t1

0x06de,	// (0x000166c4) area_side_right_pane_ParamLimits

0x06de,	// (0x000166c4) area_side_right_pane

0x30b4,	// (0x0001909a) status_small_pane_g1

0x30bc,	// (0x000190a2) status_small_pane_g2

0x30c5,	// (0x000190ab) status_small_pane_g3

0x30ce,	// (0x000190b4) status_small_pane_g4

0x0003,

0xf62b,	// (0x00025611) status_small_pane_g

0x30d7,	// (0x000190bd) status_small_pane_t1

0x06b0,	// (0x00016696) main_video3_pane

0x3ccc,	// (0x00019cb2) cams_zoom_vslider_pane

0x3cd4,	// (0x00019cba) image3_wide_pane_ParamLimits

0x3cd4,	// (0x00019cba) image3_wide_pane

0x3cee,	// (0x00019cd4) image3_wide_small_pane

0x3cfa,	// (0x00019ce0) main_video3_pane_g1_ParamLimits

0x3cfa,	// (0x00019ce0) main_video3_pane_g1

0x3d16,	// (0x00019cfc) main_video3_pane_g2_ParamLimits

0x3d16,	// (0x00019cfc) main_video3_pane_g2

0x0001,

0xf876,	// (0x0002585c) main_video3_pane_g_ParamLimits

0xf876,	// (0x0002585c) main_video3_pane_g

0x3d32,	// (0x00019d18) main_video3_pane_t1_ParamLimits

0x3d32,	// (0x00019d18) main_video3_pane_t1

0x3d5d,	// (0x00019d43) main_video3_pane_t2_ParamLimits

0x3d5d,	// (0x00019d43) main_video3_pane_t2

0x3d88,	// (0x00019d6e) main_video3_pane_t3_ParamLimits

0x3d88,	// (0x00019d6e) main_video3_pane_t3

0x0002,

0xf87b,	// (0x00025861) main_video3_pane_t_ParamLimits

0xf87b,	// (0x00025861) main_video3_pane_t

0x3db5,	// (0x00019d9b) cams_zoom_vslider_pane_g1

0x3dbe,	// (0x00019da4) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00025868) cams_zoom_vslider_pane_g

0x3dc6,	// (0x00019dac) small_slider_vertical_pane

0x35f3,	// (0x000195d9) small_slider_vertical_pane_g1

0x35f3,	// (0x000195d9) small_slider_vertical_pane_g2

0x3dce,	// (0x00019db4) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0002586d) small_slider_vertical_pane_g

0x06b0,	// (0x00016696) main_hwr_training_pane

0x3dd7,	// (0x00019dbd) hwr_training_instruct_pane_ParamLimits

0x3dd7,	// (0x00019dbd) hwr_training_instruct_pane

0xc3fe,	// (0x000223e4) hwr_training_navi_pane_ParamLimits

0xc3fe,	// (0x000223e4) hwr_training_navi_pane

0xc418,	// (0x000223fe) hwr_training_write_pane_ParamLimits

0xc418,	// (0x000223fe) hwr_training_write_pane

0x06b0,	// (0x00016696) bg_frame_shadow_pane

0x3e0e,	// (0x00019df4) hwr_training_write_pane_g1

0x3e16,	// (0x00019dfc) hwr_training_write_pane_g2

0x3e1e,	// (0x00019e04) hwr_training_write_pane_g3

0x3e26,	// (0x00019e0c) hwr_training_write_pane_g4

0x3e2e,	// (0x00019e14) hwr_training_write_pane_g5

0x3e36,	// (0x00019e1c) hwr_training_write_pane_g6

0x3e3e,	// (0x00019e24) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x00025874) hwr_training_write_pane_g

0x78a4,	// (0x0001d88a) hwr_training_navi_pane_g1_ParamLimits

0x78a4,	// (0x0001d88a) hwr_training_navi_pane_g1

0x78b6,	// (0x0001d89c) hwr_training_navi_pane_g2_ParamLimits

0x78b6,	// (0x0001d89c) hwr_training_navi_pane_g2

0x78c8,	// (0x0001d8ae) hwr_training_navi_pane_g3_ParamLimits

0x78c8,	// (0x0001d8ae) hwr_training_navi_pane_g3

0x78d8,	// (0x0001d8be) hwr_training_navi_pane_g4_ParamLimits

0x78d8,	// (0x0001d8be) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x00025883) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x00025883) hwr_training_navi_pane_g

0x78f2,	// (0x0001d8d8) hwr_training_navi_pane_t1

0xc450,	// (0x00022436) list_single_hwr_training_instruct_pane_ParamLimits

0xc450,	// (0x00022436) list_single_hwr_training_instruct_pane

0x3e95,	// (0x00019e7b) list_single_hwr_training_instruct_pane_t1

0x3533,	// (0x00019519) bg_frame_shadow_pane_g1

0x3ea4,	// (0x00019e8a) bg_frame_shadow_pane_g2

0x3eac,	// (0x00019e92) bg_frame_shadow_pane_g3

0x3eb4,	// (0x00019e9a) bg_frame_shadow_pane_g4

0x3ebc,	// (0x00019ea2) bg_frame_shadow_pane_g5

0x3ec4,	// (0x00019eaa) bg_frame_shadow_pane_g6

0x3ecc,	// (0x00019eb2) bg_frame_shadow_pane_g7

0x0f72,	// (0x00016f58) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0002588e) bg_frame_shadow_pane_g

0x06b0,	// (0x00016696) main_video_tele_dialer_pane

0x7900,	// (0x0001d8e6) aid_size_cell_video_keypad_ParamLimits

0x7900,	// (0x0001d8e6) aid_size_cell_video_keypad

0x7910,	// (0x0001d8f6) grid_video_dialer_keypad_pane_ParamLimits

0x7910,	// (0x0001d8f6) grid_video_dialer_keypad_pane

0x7944,	// (0x0001d92a) video_down_pane_cp_ParamLimits

0x7944,	// (0x0001d92a) video_down_pane_cp

0x7952,	// (0x0001d938) cell_video_dialer_keypad_pane_ParamLimits

0x7952,	// (0x0001d938) cell_video_dialer_keypad_pane

0x3ed4,	// (0x00019eba) bg_button_pane_cp08_ParamLimits

0x3ed4,	// (0x00019eba) bg_button_pane_cp08

0xc491,	// (0x00022477) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc491,	// (0x00022477) cell_video_dialer_keypad_pane_g1

0xbdbe,	// (0x00021da4) mup3_rocker2_pane_ParamLimits

0xbdbe,	// (0x00021da4) mup3_rocker2_pane

0x35f3,	// (0x000195d9) mup3_rocker2_pane_g1

0xafea,	// (0x00020fd0) main_dialer2_pane

0x06b0,	// (0x00016696) main_mp4_pane

0x796f,	// (0x0001d955) main_mp4_pane_g1_ParamLimits

0x796f,	// (0x0001d955) main_mp4_pane_g1

0x797d,	// (0x0001d963) main_mp4_pane_g2_ParamLimits

0x797d,	// (0x0001d963) main_mp4_pane_g2

0x798b,	// (0x0001d971) main_mp4_pane_g3_ParamLimits

0x798b,	// (0x0001d971) main_mp4_pane_g3

0x79d0,	// (0x0001d9b6) main_mp4_pane_g4_ParamLimits

0x79d0,	// (0x0001d9b6) main_mp4_pane_g4

0x79f8,	// (0x0001d9de) main_mp4_pane_g5_ParamLimits

0x79f8,	// (0x0001d9de) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x000258ae) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x000258ae) main_mp4_pane_g

0x7a48,	// (0x0001da2e) main_mp4_pane_t1_ParamLimits

0x7a48,	// (0x0001da2e) main_mp4_pane_t1

0x7aa4,	// (0x0001da8a) main_mp4_pane_t2_ParamLimits

0x7aa4,	// (0x0001da8a) main_mp4_pane_t2

0x401c,	// (0x0001a002) main_mp4_pane_t3_ParamLimits

0x401c,	// (0x0001a002) main_mp4_pane_t3

0x7af6,	// (0x0001dadc) main_mp4_pane_t4_ParamLimits

0x7af6,	// (0x0001dadc) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x000258bb) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x000258bb) main_mp4_pane_t

0x7b3a,	// (0x0001db20) mp4_progress_pane_ParamLimits

0x7b3a,	// (0x0001db20) mp4_progress_pane

0x7b84,	// (0x0001db6a) mp4_rocker_pane_ParamLimits

0x7b84,	// (0x0001db6a) mp4_rocker_pane

0x40f2,	// (0x0001a0d8) mp4_progress_pane_t1

0x410b,	// (0x0001a0f1) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x000258c4) mp4_progress_pane_t

0x4124,	// (0x0001a10a) mup_progress_pane_cp04

0x4bbc,	// (0x0001aba2) mp4_rocker_pane_g1

0x7ba4,	// (0x0001db8a) aid_cell_size_keypad2_ParamLimits

0x7ba4,	// (0x0001db8a) aid_cell_size_keypad2

0x7bb4,	// (0x0001db9a) dialer2_ne_pane_ParamLimits

0x7bb4,	// (0x0001db9a) dialer2_ne_pane

0x7bc2,	// (0x0001dba8) grid_dialer2_keypad_pane_ParamLimits

0x7bc2,	// (0x0001dba8) grid_dialer2_keypad_pane

0x4c25,	// (0x0001ac0b) bg_popup_call_pane_cp07_ParamLimits

0x4c25,	// (0x0001ac0b) bg_popup_call_pane_cp07

0xc4c8,	// (0x000224ae) dialer2_ne_pane_t1_ParamLimits

0xc4c8,	// (0x000224ae) dialer2_ne_pane_t1

0x7bd2,	// (0x0001dbb8) cell_dialer2_keypad_pane_ParamLimits

0x7bd2,	// (0x0001dbb8) cell_dialer2_keypad_pane

0x4142,	// (0x0001a128) bg_button_pane_pane_cp04_ParamLimits

0x4142,	// (0x0001a128) bg_button_pane_pane_cp04

0xc4ed,	// (0x000224d3) cell_dialer2_keypad_pane_g1_ParamLimits

0xc4ed,	// (0x000224d3) cell_dialer2_keypad_pane_g1

0x91fc,	// (0x0001f1e2) aid_placing_vt_set_content_ParamLimits

0x91fc,	// (0x0001f1e2) aid_placing_vt_set_content

0x9216,	// (0x0001f1fc) aid_placing_vt_set_title_ParamLimits

0x9216,	// (0x0001f1fc) aid_placing_vt_set_title

0x06b0,	// (0x00016696) main_image3_pane

0x7c19,	// (0x0001dbff) area_side_right_pane_cp01_ParamLimits

0x7c19,	// (0x0001dbff) area_side_right_pane_cp01

0x7c46,	// (0x0001dc2c) main_image3_pane_g1_ParamLimits

0x7c46,	// (0x0001dc2c) main_image3_pane_g1

0x7c54,	// (0x0001dc3a) main_image3_pane_g2_ParamLimits

0x7c54,	// (0x0001dc3a) main_image3_pane_g2

0x7c6d,	// (0x0001dc53) main_image3_pane_g3_ParamLimits

0x7c6d,	// (0x0001dc53) main_image3_pane_g3

0x7c86,	// (0x0001dc6c) main_image3_pane_g4_ParamLimits

0x7c86,	// (0x0001dc6c) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x000258d3) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x000258d3) main_image3_pane_g

0x7c9f,	// (0x0001dc85) main_image3_pane_t1_ParamLimits

0x7c9f,	// (0x0001dc85) main_image3_pane_t1

0x7cc4,	// (0x0001dcaa) main_image3_pane_t2_ParamLimits

0x7cc4,	// (0x0001dcaa) main_image3_pane_t2

0x7ce3,	// (0x0001dcc9) main_image3_pane_t3_ParamLimits

0x7ce3,	// (0x0001dcc9) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x000258dc) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x000258dc) main_image3_pane_t

0x3ac7,	// (0x00019aad) grid_sctrl_middle_pane_cp01_ParamLimits

0x3ac7,	// (0x00019aad) grid_sctrl_middle_pane_cp01

0xc555,	// (0x0002253b) cell_sctrl_middle_pane_cp01_ParamLimits

0xc555,	// (0x0002253b) cell_sctrl_middle_pane_cp01

0xc566,	// (0x0002254c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc566,	// (0x0002254c) cell_sctrl_middle_pane_cp01_g1

0x06b0,	// (0x00016696) main_call4_pane

0xc573,	// (0x00022559) aid_size_button_call4_ParamLimits

0xc573,	// (0x00022559) aid_size_button_call4

0xc5a3,	// (0x00022589) call4_windows_pane_ParamLimits

0xc5a3,	// (0x00022589) call4_windows_pane

0xc5bd,	// (0x000225a3) grid_call4_button_pane_ParamLimits

0xc5bd,	// (0x000225a3) grid_call4_button_pane

0x4180,	// (0x0001a166) call4_windows_conf_pane

0x4197,	// (0x0001a17d) popup_call4_audio_first_window_ParamLimits

0x4197,	// (0x0001a17d) popup_call4_audio_first_window

0x41e3,	// (0x0001a1c9) popup_call4_audio_second_window_ParamLimits

0x41e3,	// (0x0001a1c9) popup_call4_audio_second_window

0x41f7,	// (0x0001a1dd) popup_call4_audio_wait_window_ParamLimits

0x41f7,	// (0x0001a1dd) popup_call4_audio_wait_window

0xc5e1,	// (0x000225c7) cell_call4_button_pane_ParamLimits

0xc5e1,	// (0x000225c7) cell_call4_button_pane

0xc606,	// (0x000225ec) bg_button_pane_cp09_ParamLimits

0xc606,	// (0x000225ec) bg_button_pane_cp09

0xc612,	// (0x000225f8) cell_call4_button_pane_g1_ParamLimits

0xc612,	// (0x000225f8) cell_call4_button_pane_g1

0xc61f,	// (0x00022605) cell_call4_button_pane_t1_ParamLimits

0xc61f,	// (0x00022605) cell_call4_button_pane_t1

0x423f,	// (0x0001a225) popup_call4_audio_conf_window_ParamLimits

0x423f,	// (0x0001a225) popup_call4_audio_conf_window

0xbdf1,	// (0x00021dd7) mup3_progress_pane_t1_ParamLimits

0xbe08,	// (0x00021dee) mup3_progress_pane_t2_ParamLimits

0x38e6,	// (0x000198cc) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x000257b5) mup3_progress_pane_t_ParamLimits

0x38fd,	// (0x000198e3) mup_progress_pane_cp03_ParamLimits

0xc29e,	// (0x00022284) mup3_control_keys_pane_g4_copy1

0x7b68,	// (0x0001db4e) mp4_rocker2_pane_ParamLimits

0x7b68,	// (0x0001db4e) mp4_rocker2_pane

0x425b,	// (0x0001a241) mp4_rocker2_pane_g1

0x4253,	// (0x0001a239) mp4_rocker2_pane_g2

0x7d44,	// (0x0001dd2a) mp4_rocker2_pane_g3

0x7d4c,	// (0x0001dd32) mp4_rocker2_pane_g4

0x7d54,	// (0x0001dd3a) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x000258e5) mp4_rocker2_pane_g

0x06b0,	// (0x00016696) main_camera4_pane

0x06b0,	// (0x00016696) main_video4_pane

0x7920,	// (0x0001d906) main_video_tele_dialer_pane_t1_ParamLimits

0x7920,	// (0x0001d906) main_video_tele_dialer_pane_t1

0x7932,	// (0x0001d918) main_video_tele_dialer_pane_t2_ParamLimits

0x7932,	// (0x0001d918) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0002589f) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0002589f) main_video_tele_dialer_pane_t

0x7d74,	// (0x0001dd5a) cam4_autofocus_pane_ParamLimits

0x7d74,	// (0x0001dd5a) cam4_autofocus_pane

0x7d82,	// (0x0001dd68) cam4_image_uncrop_pane_ParamLimits

0x7d82,	// (0x0001dd68) cam4_image_uncrop_pane

0x7d99,	// (0x0001dd7f) cam4_indicators_pane_ParamLimits

0x7d99,	// (0x0001dd7f) cam4_indicators_pane

0x7db5,	// (0x0001dd9b) main_camera4_pane_g1_ParamLimits

0x7db5,	// (0x0001dd9b) main_camera4_pane_g1

0x7dc1,	// (0x0001dda7) main_camera4_pane_g2_ParamLimits

0x7dc1,	// (0x0001dda7) main_camera4_pane_g2

0x7dc1,	// (0x0001dda7) main_camera4_pane_g3_ParamLimits

0x7dc1,	// (0x0001dda7) main_camera4_pane_g3

0x7dcd,	// (0x0001ddb3) main_camera4_pane_g4_ParamLimits

0x7dcd,	// (0x0001ddb3) main_camera4_pane_g4

0x7dd9,	// (0x0001ddbf) main_camera4_pane_g5_ParamLimits

0x7dd9,	// (0x0001ddbf) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x000258f0) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x000258f0) main_camera4_pane_g

0x7df3,	// (0x0001ddd9) main_camera4_pane_t1_ParamLimits

0x7df3,	// (0x0001ddd9) main_camera4_pane_t1

0x7e17,	// (0x0001ddfd) bg_tb_trans_pane_cp06

0x7e2d,	// (0x0001de13) cam4_indicators_pane_g1

0x7e3e,	// (0x0001de24) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0002590b) cam4_indicators_pane_g

0x7e5c,	// (0x0001de42) cam4_indicators_pane_t1

0x7e86,	// (0x0001de6c) main_video4_pane_g1_ParamLimits

0x7e86,	// (0x0001de6c) main_video4_pane_g1

0x7e92,	// (0x0001de78) main_video4_pane_g2_ParamLimits

0x7e92,	// (0x0001de78) main_video4_pane_g2

0x7e9e,	// (0x0001de84) main_video4_pane_g3_ParamLimits

0x7e9e,	// (0x0001de84) main_video4_pane_g3

0x7eaa,	// (0x0001de90) main_video4_pane_g4_ParamLimits

0x7eaa,	// (0x0001de90) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00025912) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00025912) main_video4_pane_g

0x7eca,	// (0x0001deb0) vid4_indicators_pane_ParamLimits

0x7eca,	// (0x0001deb0) vid4_indicators_pane

0x7ee8,	// (0x0001dece) video4_image_uncrop_cif_pane_ParamLimits

0x7ee8,	// (0x0001dece) video4_image_uncrop_cif_pane

0x7ef7,	// (0x0001dedd) video4_image_uncrop_nhd_pane_ParamLimits

0x7ef7,	// (0x0001dedd) video4_image_uncrop_nhd_pane

0x7d82,	// (0x0001dd68) video4_image_uncrop_vga_pane_ParamLimits

0x7d82,	// (0x0001dd68) video4_image_uncrop_vga_pane

0x7f04,	// (0x0001deea) bg_tb_trans_pane_cp07

0x7f1c,	// (0x0001df02) vid4_indicators_pane_g1

0x7f2d,	// (0x0001df13) vid4_indicators_pane_g2

0x7f3e,	// (0x0001df24) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0002591d) vid4_indicators_pane_g

0x7f6b,	// (0x0001df51) vid4_indicators_pane_t1

0xc655,	// (0x0002263b) cam4_autofocus_pane_g1

0xc65d,	// (0x00022643) cam4_autofocus_pane_g2

0xc665,	// (0x0002264b) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00025928) cam4_autofocus_pane_g

0xc66d,	// (0x00022653) cam4_autofocus_pane_g3_copy1

0xc475,	// (0x0002245b) video_down_pane_cp_t1

0xc483,	// (0x00022469) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x000258a4) video_down_pane_cp_t

0x3ac7,	// (0x00019aad) popup_vitu2_window_ParamLimits

0x3ac7,	// (0x00019aad) popup_vitu2_window

0x7f84,	// (0x0001df6a) aid_size_cell2_itu2_ParamLimits

0x7f84,	// (0x0001df6a) aid_size_cell2_itu2

0x7fa6,	// (0x0001df8c) aid_size_cell_itu2_ParamLimits

0x7fa6,	// (0x0001df8c) aid_size_cell_itu2

0x7fea,	// (0x0001dfd0) bg_popup_window_pane_cp09_ParamLimits

0x7fea,	// (0x0001dfd0) bg_popup_window_pane_cp09

0x7ff8,	// (0x0001dfde) field_vitu2_entry_pane_ParamLimits

0x7ff8,	// (0x0001dfde) field_vitu2_entry_pane

0x8018,	// (0x0001dffe) grid_vitu2_function_pane_ParamLimits

0x8018,	// (0x0001dffe) grid_vitu2_function_pane

0x805c,	// (0x0001e042) grid_vitu2_itu_pane_ParamLimits

0x805c,	// (0x0001e042) grid_vitu2_itu_pane

0x80d4,	// (0x0001e0ba) cell_vitu2_itu_pane_ParamLimits

0x80d4,	// (0x0001e0ba) cell_vitu2_itu_pane

0x80e9,	// (0x0001e0cf) cell_vitu2_function_pane_ParamLimits

0x80e9,	// (0x0001e0cf) cell_vitu2_function_pane

0x42ee,	// (0x0001a2d4) bg_popup_call_pane_cp08_ParamLimits

0x42ee,	// (0x0001a2d4) bg_popup_call_pane_cp08

0x4307,	// (0x0001a2ed) field_vitu2_entry_pane_g1

0x4313,	// (0x0001a2f9) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0002592f) field_vitu2_entry_pane_g

0x432d,	// (0x0001a313) field_vitu2_entry_pane_t1_ParamLimits

0x432d,	// (0x0001a313) field_vitu2_entry_pane_t1

0x435c,	// (0x0001a342) field_vitu2_entry_pane_t2_ParamLimits

0x435c,	// (0x0001a342) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00025936) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00025936) field_vitu2_entry_pane_t

0x8128,	// (0x0001e10e) bg_button_pane_cp010_ParamLimits

0x8128,	// (0x0001e10e) bg_button_pane_cp010

0x8136,	// (0x0001e11c) cell_vitu2_itu_pane_g1

0x8154,	// (0x0001e13a) cell_vitu2_itu_pane_t1_ParamLimits

0x8154,	// (0x0001e13a) cell_vitu2_itu_pane_t1

0x81a6,	// (0x0001e18c) cell_vitu2_itu_pane_t2_ParamLimits

0x81a6,	// (0x0001e18c) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x00025940) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x00025940) cell_vitu2_itu_pane_t

0x7f04,	// (0x0001deea) bg_button_pane_cp011

0x8261,	// (0x0001e247) cell_vitu2_function_pane_g1

0x06b0,	// (0x00016696) main_myfav_hc_pane

0x7d25,	// (0x0001dd0b) popup_image3_note_pane_ParamLimits

0x7d25,	// (0x0001dd0b) popup_image3_note_pane

0x7d33,	// (0x0001dd19) popup_image3_tool_bar_pane_ParamLimits

0x7d33,	// (0x0001dd19) popup_image3_tool_bar_pane

0x8214,	// (0x0001e1fa) cell_vitu2_itu_pane_t3_ParamLimits

0x8214,	// (0x0001e1fa) cell_vitu2_itu_pane_t3

0x06b0,	// (0x00016696) bg_popup_trans_pane

0x4381,	// (0x0001a367) grid_image3_tool_bar_pane

0x438b,	// (0x0001a371) bg_popup_trans_pane_g1

0x1407,	// (0x000173ed) bg_popup_trans_pane_g2

0x4393,	// (0x0001a379) bg_popup_trans_pane_g3

0x439b,	// (0x0001a381) bg_popup_trans_pane_g4

0x43a3,	// (0x0001a389) bg_popup_trans_pane_g5

0x43ab,	// (0x0001a391) bg_popup_trans_pane_g6

0x43b3,	// (0x0001a399) bg_popup_trans_pane_g7

0x43bb,	// (0x0001a3a1) bg_popup_trans_pane_g8

0x13e7,	// (0x000173cd) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00025947) bg_popup_trans_pane_g

0x43c3,	// (0x0001a3a9) cell_image3_tool_bar_pane_ParamLimits

0x43c3,	// (0x0001a3a9) cell_image3_tool_bar_pane

0x35f3,	// (0x000195d9) cell_image3_tool_bar_pane_g1

0x06b0,	// (0x00016696) bg_popup_trans_pane_cp1

0x43d7,	// (0x0001a3bd) popup_image3_note_pane_t1

0x43e5,	// (0x0001a3cb) popup_image3_note_pane_t2

0x43f3,	// (0x0001a3d9) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0002595a) popup_image3_note_pane_t

0x4401,	// (0x0001a3e7) popup_image3_note_pane_t3_copy1

0xc675,	// (0x0002265b) bg_myfav_hc_instruction_pane_ParamLimits

0xc675,	// (0x0002265b) bg_myfav_hc_instruction_pane

0xc68d,	// (0x00022673) cell_myfav_contact_pane_ParamLimits

0xc68d,	// (0x00022673) cell_myfav_contact_pane

0xc6a7,	// (0x0002268d) cell_myfav_contact_pane_cp1_ParamLimits

0xc6a7,	// (0x0002268d) cell_myfav_contact_pane_cp1

0xc6bf,	// (0x000226a5) cell_myfav_contact_pane_cp2_ParamLimits

0xc6bf,	// (0x000226a5) cell_myfav_contact_pane_cp2

0xc6d7,	// (0x000226bd) cell_myfav_contact_pane_cp3_ParamLimits

0xc6d7,	// (0x000226bd) cell_myfav_contact_pane_cp3

0xc6ee,	// (0x000226d4) cell_myfav_contact_pane_cp4_ParamLimits

0xc6ee,	// (0x000226d4) cell_myfav_contact_pane_cp4

0xc704,	// (0x000226ea) cell_myfav_contact_pane_cp5_ParamLimits

0xc704,	// (0x000226ea) cell_myfav_contact_pane_cp5

0xc718,	// (0x000226fe) cell_myfav_contact_pane_cp6_ParamLimits

0xc718,	// (0x000226fe) cell_myfav_contact_pane_cp6

0xc72c,	// (0x00022712) cell_myfav_contact_pane_cp7_ParamLimits

0xc72c,	// (0x00022712) cell_myfav_contact_pane_cp7

0x440f,	// (0x0001a3f5) listscroll_gen_pane_cp05

0xc744,	// (0x0002272a) main_myfav_hc_pane_g1_ParamLimits

0xc744,	// (0x0002272a) main_myfav_hc_pane_g1

0xc75a,	// (0x00022740) main_myfav_hc_pane_g2_ParamLimits

0xc75a,	// (0x00022740) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x00025961) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x00025961) main_myfav_hc_pane_g

0xc788,	// (0x0002276e) main_myfav_hc_pane_t1_ParamLimits

0xc788,	// (0x0002276e) main_myfav_hc_pane_t1

0x4418,	// (0x0001a3fe) main_myfav_hc_pane_t2_ParamLimits

0x4418,	// (0x0001a3fe) main_myfav_hc_pane_t2

0x442a,	// (0x0001a410) main_myfav_hc_pane_t3_ParamLimits

0x442a,	// (0x0001a410) main_myfav_hc_pane_t3

0xc79f,	// (0x00022785) main_myfav_hc_pane_t4_ParamLimits

0xc79f,	// (0x00022785) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00025968) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00025968) main_myfav_hc_pane_t

0x35f3,	// (0x000195d9) bg_myfav_hc_instruction_pane_g1

0x443c,	// (0x0001a422) cell_myfav_contact_pane_g1_ParamLimits

0x443c,	// (0x0001a422) cell_myfav_contact_pane_g1

0x443c,	// (0x0001a422) cell_myfav_contact_pane_g2_ParamLimits

0x443c,	// (0x0001a422) cell_myfav_contact_pane_g2

0x4448,	// (0x0001a42e) cell_myfav_contact_pane_g3_ParamLimits

0x4448,	// (0x0001a42e) cell_myfav_contact_pane_g3

0x38d0,	// (0x000198b6) cell_myfav_contact_pane_g4_ParamLimits

0x38d0,	// (0x000198b6) cell_myfav_contact_pane_g4

0x4455,	// (0x0001a43b) cell_myfav_contact_pane_g5_ParamLimits

0x4455,	// (0x0001a43b) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x00025973) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x00025973) cell_myfav_contact_pane_g

0xc770,	// (0x00022756) main_myfav_hc_pane_g3_ParamLimits

0xc770,	// (0x00022756) main_myfav_hc_pane_g3

0x86be,	// (0x0001e6a4) popup_adpt_find_window

0xc7c9,	// (0x000227af) afind_page_pane_ParamLimits

0xc7c9,	// (0x000227af) afind_page_pane

0xc7d6,	// (0x000227bc) aid_size_cell_afind_ParamLimits

0xc7d6,	// (0x000227bc) aid_size_cell_afind

0xc7f0,	// (0x000227d6) bg_popup_sub_pane_cp09_ParamLimits

0xc7f0,	// (0x000227d6) bg_popup_sub_pane_cp09

0xc7fd,	// (0x000227e3) find_pane_cp01_ParamLimits

0xc7fd,	// (0x000227e3) find_pane_cp01

0x4461,	// (0x0001a447) grid_afind_control_pane_ParamLimits

0x4461,	// (0x0001a447) grid_afind_control_pane

0xc80a,	// (0x000227f0) grid_afind_pane_ParamLimits

0xc80a,	// (0x000227f0) grid_afind_pane

0xc826,	// (0x0002280c) cell_afind_pane_ParamLimits

0xc826,	// (0x0002280c) cell_afind_pane

0x35f3,	// (0x000195d9) afind_page_pane_g1

0xc86c,	// (0x00022852) afind_page_pane_g2

0xc875,	// (0x0002285b) afind_page_pane_g3

0x0002,

0xf998,	// (0x0002597e) afind_page_pane_g

0xc87e,	// (0x00022864) afind_page_pane_t1

0x4475,	// (0x0001a45b) cell_afind_grid_control_pane_ParamLimits

0x4475,	// (0x0001a45b) cell_afind_grid_control_pane

0x4142,	// (0x0001a128) bg_button_pane_cp69_ParamLimits

0x4142,	// (0x0001a128) bg_button_pane_cp69

0xc89e,	// (0x00022884) cell_afind_pane_g1_ParamLimits

0xc89e,	// (0x00022884) cell_afind_pane_g1

0xc8ab,	// (0x00022891) cell_afind_pane_t1_ParamLimits

0xc8ab,	// (0x00022891) cell_afind_pane_t1

0x115a,	// (0x00017140) bg_button_pane_cp72

0x4484,	// (0x0001a46a) cell_afind_grid_control_pane_g1

0xab68,	// (0x00020b4e) aid_image_placing_area_ParamLimits

0xab68,	// (0x00020b4e) aid_image_placing_area

0x3bd7,	// (0x00019bbd) field_vitu_entry_pane_g1_ParamLimits

0x3bd7,	// (0x00019bbd) field_vitu_entry_pane_g1

0x3be3,	// (0x00019bc9) field_vitu_entry_pane_g2_ParamLimits

0x3be3,	// (0x00019bc9) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0002582f) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0002582f) field_vitu_entry_pane_g

0xc325,	// (0x0002230b) cell_vitu_itu_pane_g1_ParamLimits

0xc367,	// (0x0002234d) cell_vitu_itu_pane_t3_ParamLimits

0xc367,	// (0x0002234d) cell_vitu_itu_pane_t3

0x40f2,	// (0x0001a0d8) mp4_progress_pane_t1_ParamLimits

0x410b,	// (0x0001a0f1) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x000258c4) mp4_progress_pane_t_ParamLimits

0x4124,	// (0x0001a10a) mup_progress_pane_cp04_ParamLimits

0xc7b3,	// (0x00022799) main_myfav_hc_pane_t5_ParamLimits

0xc7b3,	// (0x00022799) main_myfav_hc_pane_t5

0x06d6,	// (0x000166bc) aid_zoom_text_primary

0x86be,	// (0x0001e6a4) popup_adpt_find_window_ParamLimits

0x0720,	// (0x00016706) main_cam_set_pane

0x7da7,	// (0x0001dd8d) cam4_zoom_pane_ParamLimits

0x7da7,	// (0x0001dd8d) cam4_zoom_pane

0xc8bd,	// (0x000228a3) main_cam_set_pane_g1_ParamLimits

0xc8bd,	// (0x000228a3) main_cam_set_pane_g1

0xc8cb,	// (0x000228b1) main_cam_set_pane_g2_ParamLimits

0xc8cb,	// (0x000228b1) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x00025985) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x00025985) main_cam_set_pane_g

0xc8d7,	// (0x000228bd) main_cam_set_pane_t1_ParamLimits

0xc8d7,	// (0x000228bd) main_cam_set_pane_t1

0xc8f3,	// (0x000228d9) main_cset_listscroll_pane_ParamLimits

0xc8f3,	// (0x000228d9) main_cset_listscroll_pane

0xc91e,	// (0x00022904) main_cset_slider_pane_ParamLimits

0xc91e,	// (0x00022904) main_cset_slider_pane

0x4495,	// (0x0001a47b) main_cset_list_pane_ParamLimits

0x4495,	// (0x0001a47b) main_cset_list_pane

0x44a5,	// (0x0001a48b) scroll_pane_cp028

0xc93d,	// (0x00022923) aid_area_touch_slider

0xc959,	// (0x0002293f) cset_slider_pane

0xc983,	// (0x00022969) main_cset_slider_pane_g1

0xc998,	// (0x0002297e) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0002598a) main_cset_slider_pane_g

0x44de,	// (0x0001a4c4) main_cset_slider_pane_t1

0xca5a,	// (0x00022a40) main_cset_slider_pane_t2

0xca74,	// (0x00022a5a) main_cset_slider_pane_t3

0xca8e,	// (0x00022a74) main_cset_slider_pane_t4

0xcaa8,	// (0x00022a8e) main_cset_slider_pane_t5

0xcac6,	// (0x00022aac) main_cset_slider_pane_t6

0xcadd,	// (0x00022ac3) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x000259af) main_cset_slider_pane_t

0xcbe9,	// (0x00022bcf) cset_list_set_pane_ParamLimits

0xcbe9,	// (0x00022bcf) cset_list_set_pane

0xcbff,	// (0x00022be5) aid_position_infowindow_above

0xcc07,	// (0x00022bed) aid_position_infowindow_below

0xcc0f,	// (0x00022bf5) cset_list_set_pane_g1_ParamLimits

0xcc0f,	// (0x00022bf5) cset_list_set_pane_g1

0x457e,	// (0x0001a564) cset_list_set_pane_g3_ParamLimits

0x457e,	// (0x0001a564) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x000259ce) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x000259ce) cset_list_set_pane_g

0x458d,	// (0x0001a573) cset_list_set_pane_t1_ParamLimits

0x458d,	// (0x0001a573) cset_list_set_pane_t1

0x0720,	// (0x00016706) list_highlight_pane_cp021_ParamLimits

0x0720,	// (0x00016706) list_highlight_pane_cp021

0x1d86,	// (0x00017d6c) cset_slider_pane_g1

0x1d98,	// (0x00017d7e) cset_slider_pane_g2

0x1d8f,	// (0x00017d75) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x000259d3) cset_slider_pane_g

0x8275,	// (0x0001e25b) aid_area_touch_cam4_zoom

0x827d,	// (0x0001e263) cam4_zoom_cont_pane

0x8285,	// (0x0001e26b) cam4_zoom_pane_g1

0x828d,	// (0x0001e273) cam4_zoom_pane_g2

0x8295,	// (0x0001e27b) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x000259da) cam4_zoom_pane_g

0x829d,	// (0x0001e283) cam4_zoom_cont_pane_g1

0x82a6,	// (0x0001e28c) cam4_zoom_cont_pane_g2

0x82af,	// (0x0001e295) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x000259e1) cam4_zoom_cont_pane_g

0xc58d,	// (0x00022573) call4_image_pane_ParamLimits

0xc58d,	// (0x00022573) call4_image_pane

0x4180,	// (0x0001a166) call4_windows_conf_pane_ParamLimits

0x41c1,	// (0x0001a1a7) popup_call4_audio_in_window_ParamLimits

0x41c1,	// (0x0001a1a7) popup_call4_audio_in_window

0x06b0,	// (0x00016696) bg_popup_call2_act_pane_cp02

0x4237,	// (0x0001a21d) call4_list_conf_pane

0x35f3,	// (0x000195d9) call4_image_pane_g1

0x35f3,	// (0x000195d9) call4_image_pane_g2

0x0001,

0xf70f,	// (0x000256f5) call4_image_pane_g

0x45dd,	// (0x0001a5c3) list_single_graphic_popup_conf4_pane_ParamLimits

0x45dd,	// (0x0001a5c3) list_single_graphic_popup_conf4_pane

0x06b0,	// (0x00016696) list_highlight_pane_cp022

0x45f0,	// (0x0001a5d6) list_single_graphic_popup_conf4_pane_g1

0x1a45,	// (0x00017a2b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x000259e8) list_single_graphic_popup_conf4_pane_g

0x45f8,	// (0x0001a5de) list_single_graphic_popup_conf4_pane_t1

0x9319,	// (0x0001f2ff) popup_vtel_slider_window_ParamLimits

0x9319,	// (0x0001f2ff) popup_vtel_slider_window

0x4130,	// (0x0001a116) dialer2_ne_pane_t2_ParamLimits

0x4130,	// (0x0001a116) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x000258c9) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x000258c9) dialer2_ne_pane_t

0x0720,	// (0x00016706) bg_popup_sub_pane_cp010_ParamLimits

0x0720,	// (0x00016706) bg_popup_sub_pane_cp010

0xcc1b,	// (0x00022c01) popup_vtel_slider_window_g1_ParamLimits

0xcc1b,	// (0x00022c01) popup_vtel_slider_window_g1

0xcc27,	// (0x00022c0d) popup_vtel_slider_window_g2_ParamLimits

0xcc27,	// (0x00022c0d) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x000259ed) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x000259ed) popup_vtel_slider_window_g

0xcc6f,	// (0x00022c55) vtel_slider_pane_ParamLimits

0xcc6f,	// (0x00022c55) vtel_slider_pane

0xcc7e,	// (0x00022c64) vtel_slider_pane_g1_ParamLimits

0xcc7e,	// (0x00022c64) vtel_slider_pane_g1

0xcc8b,	// (0x00022c71) vtel_slider_pane_g2_ParamLimits

0xcc8b,	// (0x00022c71) vtel_slider_pane_g2

0xcc98,	// (0x00022c7e) vtel_slider_pane_g3_ParamLimits

0xcc98,	// (0x00022c7e) vtel_slider_pane_g3

0xcc7e,	// (0x00022c64) vtel_slider_pane_g4_ParamLimits

0xcc7e,	// (0x00022c64) vtel_slider_pane_g4

0xcca5,	// (0x00022c8b) vtel_slider_pane_g5_ParamLimits

0xcca5,	// (0x00022c8b) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x000259f6) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x000259f6) vtel_slider_pane_g

0x06b0,	// (0x00016696) main_gallery2_pane

0x7fcc,	// (0x0001dfb2) aid_size_row_itut2_dropdow_list_ParamLimits

0x7fcc,	// (0x0001dfb2) aid_size_row_itut2_dropdow_list

0x803a,	// (0x0001e020) grid_vitu2_function_top_pane_ParamLimits

0x803a,	// (0x0001e020) grid_vitu2_function_top_pane

0x8090,	// (0x0001e076) popup_vitu2_dropdown_list_window_ParamLimits

0x8090,	// (0x0001e076) popup_vitu2_dropdown_list_window

0x80b0,	// (0x0001e096) popup_vitu2_match_list_window

0x82b8,	// (0x0001e29e) cell_vitu2_function_top_pane_ParamLimits

0x82b8,	// (0x0001e29e) cell_vitu2_function_top_pane

0x82d8,	// (0x0001e2be) cell_vitu2_function_top_pane_cp01_ParamLimits

0x82d8,	// (0x0001e2be) cell_vitu2_function_top_pane_cp01

0x82f6,	// (0x0001e2dc) cell_vitu2_function_top_wide_pane_ParamLimits

0x82f6,	// (0x0001e2dc) cell_vitu2_function_top_wide_pane

0x7f04,	// (0x0001deea) bg_button_pane_cp012

0x8314,	// (0x0001e2fa) cell_vitu2_function_top_pane_g1

0x8323,	// (0x0001e309) bg_button_pane_cp013_ParamLimits

0x8323,	// (0x0001e309) bg_button_pane_cp013

0xccb2,	// (0x00022c98) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xccb2,	// (0x00022c98) cell_vitu2_function_top_wide_pane_g1

0x833f,	// (0x0001e325) bg_popup_sub_pane_cp20

0x834d,	// (0x0001e333) list_vitu2_match_list_pane

0x438b,	// (0x0001a371) bg_popup_sub_pane_cp20_g1

0x4393,	// (0x0001a379) bg_popup_sub_pane_cp20_g2

0x1407,	// (0x000173ed) bg_popup_sub_pane_cp20_g3

0x439b,	// (0x0001a381) bg_popup_sub_pane_cp20_g4

0x13e7,	// (0x000173cd) bg_popup_sub_pane_cp20_g5

0x4630,	// (0x0001a616) bg_popup_sub_pane_cp20_g6

0x43ab,	// (0x0001a391) bg_popup_sub_pane_cp20_g7

0x43b3,	// (0x0001a399) bg_popup_sub_pane_cp20_g8

0x43bb,	// (0x0001a3a1) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00025a01) bg_popup_sub_pane_cp20_g

0x8365,	// (0x0001e34b) list_vitu2_match_list_item_pane_ParamLimits

0x8365,	// (0x0001e34b) list_vitu2_match_list_item_pane

0x8377,	// (0x0001e35d) list_vitu2_match_list_item_pane_t1

0x7199,	// (0x0001d17f) bg_popup_sub_pane_cp21

0x8385,	// (0x0001e36b) grid_vitu2_dropdown_list_pane

0x838d,	// (0x0001e373) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x838d,	// (0x0001e373) cell_vitu2_dropdown_list_char_pane

0x83ae,	// (0x0001e394) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x83ae,	// (0x0001e394) cell_vitu2_dropdown_list_ctrl_pane

0x4682,	// (0x0001a668) cell_vitu2_dropdown_list_char_pane_g1

0x4679,	// (0x0001a65f) cell_vitu2_dropdown_list_char_pane_g2

0x4670,	// (0x0001a656) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00025a1e) cell_vitu2_dropdown_list_char_pane_g

0x83da,	// (0x0001e3c0) cell_vitu2_dropdown_list_char_pane_t1

0xccf9,	// (0x00022cdf) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xccf9,	// (0x00022cdf) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcd09,	// (0x00022cef) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcd09,	// (0x00022cef) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcd1a,	// (0x00022d00) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcd1a,	// (0x00022d00) cell_vitu2_dropdown_list_ctrl_pane_g3

0x83e8,	// (0x0001e3ce) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x83e8,	// (0x0001e3ce) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7e17,	// (0x0001ddfd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7e17,	// (0x0001ddfd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00025a25) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00025a25) cell_vitu2_dropdown_list_ctrl_pane_g

0xcd2a,	// (0x00022d10) aid_size_cell_gallery2_ParamLimits

0xcd2a,	// (0x00022d10) aid_size_cell_gallery2

0xcd38,	// (0x00022d1e) grid_gallery2_pane_ParamLimits

0xcd38,	// (0x00022d1e) grid_gallery2_pane

0xcd47,	// (0x00022d2d) scroll_pane_cp029_ParamLimits

0xcd47,	// (0x00022d2d) scroll_pane_cp029

0xcd53,	// (0x00022d39) cell_gallery2_pane_ParamLimits

0xcd53,	// (0x00022d39) cell_gallery2_pane

0x468b,	// (0x0001a671) cell_gallery2_pane_g2

0x5071,	// (0x0001b057) cell_gallery2_pane_g3

0x4695,	// (0x0001a67b) cell_gallery2_pane_g4

0x469d,	// (0x0001a683) cell_gallery2_pane_g5

0x1c30,	// (0x00017c16) grid_highlight_pane_cp10

0x80b0,	// (0x0001e096) popup_vitu2_match_list_window_ParamLimits

0x80c4,	// (0x0001e0aa) popup_vitu2_query_window_ParamLimits

0x80c4,	// (0x0001e0aa) popup_vitu2_query_window

0x7199,	// (0x0001d17f) bg_vitu2_candi_button_pane

0x4682,	// (0x0001a668) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x4679,	// (0x0001a65f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4670,	// (0x0001a656) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcd81,	// (0x00022d67) bg_button_pane_cp015

0xcd8b,	// (0x00022d71) bg_button_pane_cp016

0xcd95,	// (0x00022d7b) bg_button_pane_cp017

0x0720,	// (0x00016706) bg_popup_sub_pane_cp22

0x46a5,	// (0x0001a68b) popup_vitu2_query_window_g1

0xcdbd,	// (0x00022da3) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00025a30) popup_vitu2_query_window_g

0xcdcb,	// (0x00022db1) popup_vitu2_query_window_t1_ParamLimits

0xcdcb,	// (0x00022db1) popup_vitu2_query_window_t1

0xcdf3,	// (0x00022dd9) popup_vitu2_query_window_t2_ParamLimits

0xcdf3,	// (0x00022dd9) popup_vitu2_query_window_t2

0xce05,	// (0x00022deb) popup_vitu2_query_window_t3_ParamLimits

0xce05,	// (0x00022deb) popup_vitu2_query_window_t3

0xce2d,	// (0x00022e13) popup_vitu2_query_window_t4_ParamLimits

0xce2d,	// (0x00022e13) popup_vitu2_query_window_t4

0xce41,	// (0x00022e27) popup_vitu2_query_window_t5_ParamLimits

0xce41,	// (0x00022e27) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00025a35) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00025a35) popup_vitu2_query_window_t

0x448d,	// (0x0001a473) main_cset_text_pane

0xc93d,	// (0x00022923) aid_area_touch_slider_ParamLimits

0xc959,	// (0x0002293f) cset_slider_pane_ParamLimits

0xc983,	// (0x00022969) main_cset_slider_pane_g1_ParamLimits

0xc998,	// (0x0002297e) main_cset_slider_pane_g2_ParamLimits

0x44ae,	// (0x0001a494) main_cset_slider_pane_g3_ParamLimits

0x44ae,	// (0x0001a494) main_cset_slider_pane_g3

0xc9ad,	// (0x00022993) main_cset_slider_pane_g4_ParamLimits

0xc9ad,	// (0x00022993) main_cset_slider_pane_g4

0xc9bc,	// (0x000229a2) main_cset_slider_pane_g5_ParamLimits

0xc9bc,	// (0x000229a2) main_cset_slider_pane_g5

0xc9ca,	// (0x000229b0) main_cset_slider_pane_g6_ParamLimits

0xc9ca,	// (0x000229b0) main_cset_slider_pane_g6

0xf9a4,	// (0x0002598a) main_cset_slider_pane_g_ParamLimits

0x44de,	// (0x0001a4c4) main_cset_slider_pane_t1_ParamLimits

0xca5a,	// (0x00022a40) main_cset_slider_pane_t2_ParamLimits

0xca74,	// (0x00022a5a) main_cset_slider_pane_t3_ParamLimits

0xca8e,	// (0x00022a74) main_cset_slider_pane_t4_ParamLimits

0xcaa8,	// (0x00022a8e) main_cset_slider_pane_t5_ParamLimits

0xcac6,	// (0x00022aac) main_cset_slider_pane_t6_ParamLimits

0xcadd,	// (0x00022ac3) main_cset_slider_pane_t7_ParamLimits

0xcb0b,	// (0x00022af1) main_cset_slider_pane_t8_ParamLimits

0xcb0b,	// (0x00022af1) main_cset_slider_pane_t8

0xcb33,	// (0x00022b19) main_cset_slider_pane_t9_ParamLimits

0xcb33,	// (0x00022b19) main_cset_slider_pane_t9

0xcb5b,	// (0x00022b41) main_cset_slider_pane_t10_ParamLimits

0xcb5b,	// (0x00022b41) main_cset_slider_pane_t10

0xcb83,	// (0x00022b69) main_cset_slider_pane_t11_ParamLimits

0xcb83,	// (0x00022b69) main_cset_slider_pane_t11

0xcbad,	// (0x00022b93) main_cset_slider_pane_t12_ParamLimits

0xcbad,	// (0x00022b93) main_cset_slider_pane_t12

0xcbca,	// (0x00022bb0) main_cset_slider_pane_t13_ParamLimits

0xcbca,	// (0x00022bb0) main_cset_slider_pane_t13

0xf9c9,	// (0x000259af) main_cset_slider_pane_t_ParamLimits

0x06b0,	// (0x00016696) bg_popup_sub_pane_cp011

0x46b1,	// (0x0001a697) main_cset_text_pane_g1

0x46b9,	// (0x0001a69f) main_cset_text_pane_t1

0x46c7,	// (0x0001a6ad) main_cset_text_pane_t2

0x46d5,	// (0x0001a6bb) main_cset_text_pane_t3

0x46e3,	// (0x0001a6c9) main_cset_text_pane_t4

0x46f1,	// (0x0001a6d7) main_cset_text_pane_t5

0x46ff,	// (0x0001a6e5) main_cset_text_pane_t6

0x470d,	// (0x0001a6f3) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x00025a40) main_cset_text_pane_t

0x06b0,	// (0x00016696) main_cam4_burst_pane

0x06b0,	// (0x00016696) main_cam5_pane

0xc88c,	// (0x00022872) bg_button_pane_cp019

0xc895,	// (0x0002287b) bg_button_pane_cp020

0x44ba,	// (0x0001a4a0) main_cset_slider_pane_g7_ParamLimits

0x44ba,	// (0x0001a4a0) main_cset_slider_pane_g7

0x44c6,	// (0x0001a4ac) main_cset_slider_pane_g8_ParamLimits

0x44c6,	// (0x0001a4ac) main_cset_slider_pane_g8

0xc9de,	// (0x000229c4) main_cset_slider_pane_g9_ParamLimits

0xc9de,	// (0x000229c4) main_cset_slider_pane_g9

0xc9ea,	// (0x000229d0) main_cset_slider_pane_g10_ParamLimits

0xc9ea,	// (0x000229d0) main_cset_slider_pane_g10

0xc9f6,	// (0x000229dc) main_cset_slider_pane_g11_ParamLimits

0xc9f6,	// (0x000229dc) main_cset_slider_pane_g11

0xca02,	// (0x000229e8) main_cset_slider_pane_g12_ParamLimits

0xca02,	// (0x000229e8) main_cset_slider_pane_g12

0xca0e,	// (0x000229f4) main_cset_slider_pane_g13_ParamLimits

0xca0e,	// (0x000229f4) main_cset_slider_pane_g13

0xca1a,	// (0x00022a00) main_cset_slider_pane_g14_ParamLimits

0xca1a,	// (0x00022a00) main_cset_slider_pane_g14

0xca26,	// (0x00022a0c) main_cset_slider_pane_g15_ParamLimits

0xca26,	// (0x00022a0c) main_cset_slider_pane_g15

0x450c,	// (0x0001a4f2) main_cset_slider_pane_t14_ParamLimits

0x450c,	// (0x0001a4f2) main_cset_slider_pane_t14

0x4545,	// (0x0001a52b) main_cset_slider_pane_t15_ParamLimits

0x4545,	// (0x0001a52b) main_cset_slider_pane_t15

0xce55,	// (0x00022e3b) aid_cam4_burst_size_cell_ParamLimits

0xce55,	// (0x00022e3b) aid_cam4_burst_size_cell

0xce71,	// (0x00022e57) grid_cam4_burst_pane_ParamLimits

0xce71,	// (0x00022e57) grid_cam4_burst_pane

0xcea1,	// (0x00022e87) linegrid_cam4_burst_pane_ParamLimits

0xcea1,	// (0x00022e87) linegrid_cam4_burst_pane

0xcec1,	// (0x00022ea7) scroll_pane_cp30_ParamLimits

0xcec1,	// (0x00022ea7) scroll_pane_cp30

0xcecd,	// (0x00022eb3) cell_cam4_burst_pane_ParamLimits

0xcecd,	// (0x00022eb3) cell_cam4_burst_pane

0x471b,	// (0x0001a701) linegrid_cam4_burst_pane_g1_ParamLimits

0x471b,	// (0x0001a701) linegrid_cam4_burst_pane_g1

0xcf09,	// (0x00022eef) linegrid_cam4_burst_pane_g2_ParamLimits

0xcf09,	// (0x00022eef) linegrid_cam4_burst_pane_g2

0x4728,	// (0x0001a70e) linegrid_cam4_burst_pane_g3_ParamLimits

0x4728,	// (0x0001a70e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00025a4f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00025a4f) linegrid_cam4_burst_pane_g

0xcf1a,	// (0x00022f00) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcf1a,	// (0x00022f00) linegrid_cam4_burst_pane_g3_copy1

0x4735,	// (0x0001a71b) linegrid_cam4_burst_pane_g4_ParamLimits

0x4735,	// (0x0001a71b) linegrid_cam4_burst_pane_g4

0xcf34,	// (0x00022f1a) linegrid_cam4_burst_pane_g5_ParamLimits

0xcf34,	// (0x00022f1a) linegrid_cam4_burst_pane_g5

0xcf45,	// (0x00022f2b) linegrid_cam4_burst_pane_g6_ParamLimits

0xcf45,	// (0x00022f2b) linegrid_cam4_burst_pane_g6

0x4742,	// (0x0001a728) linegrid_cam4_burst_pane_g7_ParamLimits

0x4742,	// (0x0001a728) linegrid_cam4_burst_pane_g7

0xcf56,	// (0x00022f3c) cell_cam4_burst_pane_g1

0x475b,	// (0x0001a741) main_cam5_pane_t1_ParamLimits

0x475b,	// (0x0001a741) main_cam5_pane_t1

0x476d,	// (0x0001a753) main_cam5_pane_t2_ParamLimits

0x476d,	// (0x0001a753) main_cam5_pane_t2

0x477f,	// (0x0001a765) main_cam5_pane_t3_ParamLimits

0x477f,	// (0x0001a765) main_cam5_pane_t3

0x4791,	// (0x0001a777) main_cam5_pane_t4_ParamLimits

0x4791,	// (0x0001a777) main_cam5_pane_t4

0x47a9,	// (0x0001a78f) main_cam5_pane_t5_ParamLimits

0x47a9,	// (0x0001a78f) main_cam5_pane_t5

0x47bd,	// (0x0001a7a3) main_cam5_pane_t6_ParamLimits

0x47bd,	// (0x0001a7a3) main_cam5_pane_t6

0x47d1,	// (0x0001a7b7) main_cam5_pane_t7_ParamLimits

0x47d1,	// (0x0001a7b7) main_cam5_pane_t7

0x47e3,	// (0x0001a7c9) main_cam5_pane_t8_ParamLimits

0x47e3,	// (0x0001a7c9) main_cam5_pane_t8

0x47ff,	// (0x0001a7e5) main_cam5_pane_t9_ParamLimits

0x47ff,	// (0x0001a7e5) main_cam5_pane_t9

0x4811,	// (0x0001a7f7) main_cam5_pane_t10_ParamLimits

0x4811,	// (0x0001a7f7) main_cam5_pane_t10

0x4823,	// (0x0001a809) main_cam5_pane_t11_ParamLimits

0x4823,	// (0x0001a809) main_cam5_pane_t11

0x4835,	// (0x0001a81b) main_cam5_pane_t12_ParamLimits

0x4835,	// (0x0001a81b) main_cam5_pane_t12

0x484a,	// (0x0001a830) main_cam5_pane_t13_ParamLimits

0x484a,	// (0x0001a830) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00025a5b) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00025a5b) main_cam5_pane_t

0x876b,	// (0x0001e751) popup_scut_keymap_window_ParamLimits

0x876b,	// (0x0001e751) popup_scut_keymap_window

0xcf69,	// (0x00022f4f) aid_size_cell_brow_shortcut

0x1c30,	// (0x00017c16) bg_popup_window_pane_cp010

0xcf75,	// (0x00022f5b) grid_scut_pane

0xcf81,	// (0x00022f67) cell_scut_pane_ParamLimits

0xcf81,	// (0x00022f67) cell_scut_pane

0xcf98,	// (0x00022f7e) cell_scut_pane_g1

0x4867,	// (0x0001a84d) cell_scut_pane_t1

0x4876,	// (0x0001a85c) cell_scut_pane_t2

0xcfa1,	// (0x00022f87) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x00025a76) cell_scut_pane_t

0xba3b,	// (0x00021a21) main_mup3_pane_g8_ParamLimits

0xba3b,	// (0x00021a21) main_mup3_pane_g8

0x7fda,	// (0x0001dfc0) area_vitu2_query_pane_ParamLimits

0x7fda,	// (0x0001dfc0) area_vitu2_query_pane

0xcd9f,	// (0x00022d85) input_focus_pane_cp08

0x4885,	// (0x0001a86b) area_vitu2_query_pane_g1

0xcfaf,	// (0x00022f95) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00025a7d) area_vitu2_query_pane_g

0xcfc0,	// (0x00022fa6) area_vitu2_query_pane_t1_ParamLimits

0xcfc0,	// (0x00022fa6) area_vitu2_query_pane_t1

0xcfd4,	// (0x00022fba) area_vitu2_query_pane_t2_ParamLimits

0xcfd4,	// (0x00022fba) area_vitu2_query_pane_t2

0xcfe8,	// (0x00022fce) area_vitu2_query_pane_t3_ParamLimits

0xcfe8,	// (0x00022fce) area_vitu2_query_pane_t3

0x4891,	// (0x0001a877) area_vitu2_query_pane_t4_ParamLimits

0x4891,	// (0x0001a877) area_vitu2_query_pane_t4

0x48b9,	// (0x0001a89f) area_vitu2_query_pane_t5_ParamLimits

0x48b9,	// (0x0001a89f) area_vitu2_query_pane_t5

0x48e1,	// (0x0001a8c7) area_vitu2_query_pane_t6_ParamLimits

0x48e1,	// (0x0001a8c7) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x00025a82) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x00025a82) area_vitu2_query_pane_t

0xd010,	// (0x00022ff6) bg_button_pane_cp018

0xd01e,	// (0x00023004) bg_button_pane_cp021

0xd02a,	// (0x00023010) bg_button_pane_cp022

0xd03b,	// (0x00023021) input_focus_pane_cp09

0xa27c,	// (0x00020262) aid_size_touch_mv_arrow_left

0xa2a5,	// (0x0002028b) aid_size_touch_mv_arrow_right

0xca3e,	// (0x00022a24) main_cset_slider_pane_g16_ParamLimits

0xca3e,	// (0x00022a24) main_cset_slider_pane_g16

0xca4c,	// (0x00022a32) main_cset_slider_pane_g17_ParamLimits

0xca4c,	// (0x00022a32) main_cset_slider_pane_g17

0xcf56,	// (0x00022f3c) cell_cam4_burst_pane_g1_ParamLimits

0x06b0,	// (0x00016696) compa_mode_pane

0xcc33,	// (0x00022c19) popup_vtel_slider_window_g3_ParamLimits

0xcc33,	// (0x00022c19) popup_vtel_slider_window_g3

0xcc47,	// (0x00022c2d) popup_vtel_slider_window_g4_ParamLimits

0xcc47,	// (0x00022c2d) popup_vtel_slider_window_g4

0xcc5b,	// (0x00022c41) popup_vtel_slider_window_t1_ParamLimits

0xcc5b,	// (0x00022c41) popup_vtel_slider_window_t1

0x06b0,	// (0x00016696) main_cl_pane

0x3115,	// (0x000190fb) popup_imed_adjust2_window_ParamLimits

0x30ed,	// (0x000190d3) bg_tb_trans_pane_cp05_ParamLimits

0x3b0c,	// (0x00019af2) popup_imed_adjust2_window_g1_ParamLimits

0x3b1b,	// (0x00019b01) popup_imed_adjust2_window_g2_ParamLimits

0x3b1b,	// (0x00019b01) popup_imed_adjust2_window_g2

0x3b27,	// (0x00019b0d) popup_imed_adjust2_window_g3_ParamLimits

0x3b27,	// (0x00019b0d) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x000257f3) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x000257f3) popup_imed_adjust2_window_g

0x3b33,	// (0x00019b19) popup_imed_adjust2_window_t1_ParamLimits

0x3b4b,	// (0x00019b31) slider_imed_adjust_pane_ParamLimits

0x3b5f,	// (0x00019b45) slider_imed_adjust_pane_g1_ParamLimits

0x3b6f,	// (0x00019b55) slider_imed_adjust_pane_g2_ParamLimits

0x3b7f,	// (0x00019b65) slider_imed_adjust_pane_g3_ParamLimits

0x3b90,	// (0x00019b76) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x000257fa) slider_imed_adjust_pane_g_ParamLimits

0x7d5c,	// (0x0001dd42) aid_touch_area_cam4_ParamLimits

0x7d5c,	// (0x0001dd42) aid_touch_area_cam4

0x7d6c,	// (0x0001dd52) battery_pane_cp01

0x7de7,	// (0x0001ddcd) main_camera4_pane_g6_ParamLimits

0x7de7,	// (0x0001ddcd) main_camera4_pane_g6

0x7e05,	// (0x0001ddeb) main_camera4_pane_t2_ParamLimits

0x7e05,	// (0x0001ddeb) main_camera4_pane_t2

0x0001,

0xf917,	// (0x000258fd) main_camera4_pane_t_ParamLimits

0xf917,	// (0x000258fd) main_camera4_pane_t

0x7e76,	// (0x0001de5c) aid_touch_area_vid4_ParamLimits

0x7e76,	// (0x0001de5c) aid_touch_area_vid4

0x7eb6,	// (0x0001de9c) main_video4_pane_g5_ParamLimits

0x7eb6,	// (0x0001de9c) main_video4_pane_g5

0x7ed8,	// (0x0001debe) vid4_progress_pane_ParamLimits

0x7ed8,	// (0x0001debe) vid4_progress_pane

0x44d2,	// (0x0001a4b8) main_cset_slider_pane_g18_ParamLimits

0x44d2,	// (0x0001a4b8) main_cset_slider_pane_g18

0x474f,	// (0x0001a735) cell_cam4_burst_pane_g2_ParamLimits

0x474f,	// (0x0001a735) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00025a56) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00025a56) cell_cam4_burst_pane_g

0xd04c,	// (0x00023032) bg_cl_pane_ParamLimits

0xd04c,	// (0x00023032) bg_cl_pane

0xd058,	// (0x0002303e) cl_header_pane_ParamLimits

0xd058,	// (0x0002303e) cl_header_pane

0xd064,	// (0x0002304a) cl_listscroll_pane_ParamLimits

0xd064,	// (0x0002304a) cl_listscroll_pane

0x492d,	// (0x0001a913) bg_cl_pane_g1

0x4935,	// (0x0001a91b) bg_cl_pane_g2

0x493d,	// (0x0001a923) bg_cl_pane_g3

0x4945,	// (0x0001a92b) bg_cl_pane_g4

0x494d,	// (0x0001a933) bg_cl_pane_g5

0x4955,	// (0x0001a93b) bg_cl_pane_g6

0x495d,	// (0x0001a943) bg_cl_pane_g7

0x4965,	// (0x0001a94b) bg_cl_pane_g8

0x496d,	// (0x0001a953) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00025a91) bg_cl_pane_g

0xd070,	// (0x00023056) aid_height_cl_leading_ParamLimits

0xd070,	// (0x00023056) aid_height_cl_leading

0xd07c,	// (0x00023062) aid_height_cl_text_ParamLimits

0xd07c,	// (0x00023062) aid_height_cl_text

0x3ac7,	// (0x00019aad) bg_cl_header_pane_ParamLimits

0x3ac7,	// (0x00019aad) bg_cl_header_pane

0xd094,	// (0x0002307a) cl_header_pane_g1_ParamLimits

0xd094,	// (0x0002307a) cl_header_pane_g1

0xd0a1,	// (0x00023087) cl_header_pane_t1_ParamLimits

0xd0a1,	// (0x00023087) cl_header_pane_t1

0x4975,	// (0x0001a95b) cl_list_pane

0x44a5,	// (0x0001a48b) hc_scroll_pane_cp01

0x13e7,	// (0x000173cd) bg_cl_header_pane_g1

0x438b,	// (0x0001a371) bg_cl_header_pane_g2

0x1407,	// (0x000173ed) bg_cl_header_pane_g3

0x439b,	// (0x0001a381) bg_cl_header_pane_g4

0x4393,	// (0x0001a379) bg_cl_header_pane_g5

0x4630,	// (0x0001a616) bg_cl_header_pane_g6

0x43b3,	// (0x0001a399) bg_cl_header_pane_g7

0x43bb,	// (0x0001a3a1) bg_cl_header_pane_g8

0x43ab,	// (0x0001a391) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x00025aa4) bg_cl_header_pane_g

0xd0b3,	// (0x00023099) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd0b3,	// (0x00023099) hc_cl_list_double_graphic_heading_pane

0xd0c4,	// (0x000230aa) hc_cl_list_single_graphic_pane_ParamLimits

0xd0c4,	// (0x000230aa) hc_cl_list_single_graphic_pane

0xd0dd,	// (0x000230c3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd0dd,	// (0x000230c3) hc_cl_list_single_graphic_pane_g1

0xd0e9,	// (0x000230cf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd0e9,	// (0x000230cf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x00025ab7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x00025ab7) hc_cl_list_single_graphic_pane_g

0xd0fd,	// (0x000230e3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd0fd,	// (0x000230e3) hc_cl_list_single_graphic_pane_t1

0xd0dd,	// (0x000230c3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd0dd,	// (0x000230c3) hc_cl_list_double_graphic_heading_pane_g1

0xd112,	// (0x000230f8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd112,	// (0x000230f8) hc_cl_list_double_graphic_heading_pane_g2

0xd126,	// (0x0002310c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd126,	// (0x0002310c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00025abc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00025abc) hc_cl_list_double_graphic_heading_pane_g

0xd13a,	// (0x00023120) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd13a,	// (0x00023120) hc_cl_list_double_graphic_heading_pane_t1

0xd14f,	// (0x00023135) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd14f,	// (0x00023135) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00025ac3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00025ac3) hc_cl_list_double_graphic_heading_pane_t

0x840c,	// (0x0001e3f2) vid4_progress_pane_g1

0x841c,	// (0x0001e402) vid4_progress_pane_g2

0x1704,	// (0x000176ea) vid4_progress_pane_g3

0x842c,	// (0x0001e412) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00025ac8) vid4_progress_pane_g

0x844a,	// (0x0001e430) vid4_progress_pane_t1

0x845f,	// (0x0001e445) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00025ad3) vid4_progress_pane_t

0x848a,	// (0x0001e470) wait_bar_pane_cp07

0x33e6,	// (0x000193cc) blid_firmament_pane_ParamLimits

0x3429,	// (0x0001940f) popup_blid_sat_info2_window_g1

0x344d,	// (0x00019433) popup_blid_sat_info2_window_t3

0x345b,	// (0x00019441) popup_blid_sat_info2_window_t4

0x3469,	// (0x0001944f) popup_blid_sat_info2_window_t5

0x3477,	// (0x0001945d) popup_blid_sat_info2_window_t6

0x3487,	// (0x0001946d) popup_blid_sat_info2_window_t7

0x3495,	// (0x0001947b) popup_blid_sat_info2_window_t8

0x34a3,	// (0x00019489) popup_blid_sat_info2_window_t9

0x34b1,	// (0x00019497) popup_blid_sat_info2_window_t10

0x3573,	// (0x00019559) aid_firma_cardinal_ParamLimits

0x3587,	// (0x0001956d) blid_firmament_pane_t1_ParamLimits

0x359e,	// (0x00019584) blid_firmament_pane_t2_ParamLimits

0x35b5,	// (0x0001959b) blid_firmament_pane_t3_ParamLimits

0x35cc,	// (0x000195b2) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x000256ec) blid_firmament_pane_t_ParamLimits

0x35e3,	// (0x000195c9) blid_sat_info_pane_ParamLimits

0x0720,	// (0x00016706) main_cam_set_pane_ParamLimits

0xc148,	// (0x0002212e) aid_size_cell_colour_35_ParamLimits

0xc162,	// (0x00022148) aid_size_cell_colour_112_ParamLimits

0xc179,	// (0x0002215f) aid_size_cell_effect_ParamLimits

0x0720,	// (0x00016706) bg_tb_trans_pane_cp02_ParamLimits

0x1732,	// (0x00017718) heading_imed_pane_ParamLimits

0xc193,	// (0x00022179) listscroll_imed_pane_ParamLimits

0x271f,	// (0x00018705) popup_call2_audio_first_window_g5_ParamLimits

0x271f,	// (0x00018705) popup_call2_audio_first_window_g5

0x7be7,	// (0x0001dbcd) aid_size_touch_image3_arrow_left_ParamLimits

0x7be7,	// (0x0001dbcd) aid_size_touch_image3_arrow_left

0x7bfd,	// (0x0001dbe3) aid_size_touch_image3_arrow_right_ParamLimits

0x7bfd,	// (0x0001dbe3) aid_size_touch_image3_arrow_right

0x8475,	// (0x0001e45b) vid4_progress_pane_t3

0xc430,	// (0x00022416) main_hwr_training_symbol_option_pane_ParamLimits

0xc430,	// (0x00022416) main_hwr_training_symbol_option_pane

0x3df9,	// (0x00019ddf) popup_hwr_training_preview_window_ParamLimits

0x3df9,	// (0x00019ddf) popup_hwr_training_preview_window

0x78e5,	// (0x0001d8cb) hwr_training_navi_pane_g5_ParamLimits

0x78e5,	// (0x0001d8cb) hwr_training_navi_pane_g5

0x4379,	// (0x0001a35f) popup_char_count_window

0x833f,	// (0x0001e325) bg_popup_sub_pane_cp20_ParamLimits

0x834d,	// (0x0001e333) list_vitu2_match_list_pane_ParamLimits

0x8359,	// (0x0001e33f) vitu2_page_scroll_pane_ParamLimits

0x8359,	// (0x0001e33f) vitu2_page_scroll_pane

0x4a70,	// (0x0001aa56) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4a70,	// (0x0001aa56) list_single_hwr_training_symbol_option_pane

0x4a83,	// (0x0001aa69) list_single_hwr_training_symbol_option_pane_g1

0x4a8b,	// (0x0001aa71) list_single_hwr_training_symbol_option_pane_t1

0x4a99,	// (0x0001aa7f) bg_button_pane_cp023

0x4aa2,	// (0x0001aa88) bg_button_pane_cp024

0xd164,	// (0x0002314a) vitu2_page_scroll_pane_g1

0xd16c,	// (0x00023152) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00025ada) vitu2_page_scroll_pane_g

0xd174,	// (0x0002315a) vitu2_page_scroll_pane_t1

0x4ad5,	// (0x0001aabb) popup_char_count_window_g1

0x4ade,	// (0x0001aac4) popup_char_count_window_g2

0x4ae7,	// (0x0001aacd) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00025adf) popup_char_count_window_g

0x4af0,	// (0x0001aad6) popup_char_count_window_t1

0x06b0,	// (0x00016696) main_vded2_pane

0x3af8,	// (0x00019ade) aid_size_cell_imed_line

0x3b02,	// (0x00019ae8) grid_imed_line_width_pane

0x7f4f,	// (0x0001df35) vid4_indicators_pane_g4

0x4afe,	// (0x0001aae4) cell_imed_line_width_pane_ParamLimits

0x4afe,	// (0x0001aae4) cell_imed_line_width_pane

0x4b12,	// (0x0001aaf8) cell_imed_line_width_pane_g1

0x4b1b,	// (0x0001ab01) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00025ae6) cell_imed_line_width_pane_g

0xd183,	// (0x00023169) main_vded2_pane_g1_ParamLimits

0xd183,	// (0x00023169) main_vded2_pane_g1

0xd190,	// (0x00023176) main_vded2_pane_g2_ParamLimits

0xd190,	// (0x00023176) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00025aeb) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00025aeb) main_vded2_pane_g

0xd19e,	// (0x00023184) vded2_slider_pane_ParamLimits

0xd19e,	// (0x00023184) vded2_slider_pane

0xd1ab,	// (0x00023191) aid_size_touch_vded2_end

0xd1b5,	// (0x0002319b) aid_size_touch_vded2_playhead

0x4b23,	// (0x0001ab09) aid_size_touch_vded2_start

0x4b2b,	// (0x0001ab11) vded2_slider_bg_pane

0x4b34,	// (0x0001ab1a) vded2_slider_pane_g1

0x4b3d,	// (0x0001ab23) vded2_slider_pane_g2

0xd1bd,	// (0x000231a3) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00025af0) vded2_slider_pane_g

0x4b45,	// (0x0001ab2b) vded2_slider_bg_pane_g1

0x4b4e,	// (0x0001ab34) vded2_slider_bg_pane_g2

0x4b57,	// (0x0001ab3d) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00025af7) vded2_slider_bg_pane_g

0xa8d2,	// (0x000208b8) aid_postcard_touch_down_pane_ParamLimits

0xa8d2,	// (0x000208b8) aid_postcard_touch_down_pane

0xa8e2,	// (0x000208c8) aid_postcard_touch_up_pane_ParamLimits

0xa8e2,	// (0x000208c8) aid_postcard_touch_up_pane

0x06b0,	// (0x00016696) main_blid2_pane

0x30fb,	// (0x000190e1) popup_blid2_search_window

0x06b0,	// (0x00016696) blid2_gps_pane

0x06b0,	// (0x00016696) blid2_navig_pane

0x06b0,	// (0x00016696) blid2_search_pane

0x06b0,	// (0x00016696) blid2_tripm_pane

0xd1c6,	// (0x000231ac) blid2_search_pane_g1_ParamLimits

0xd1c6,	// (0x000231ac) blid2_search_pane_g1

0xd1d6,	// (0x000231bc) blid2_search_pane_t1_ParamLimits

0xd1d6,	// (0x000231bc) blid2_search_pane_t1

0xd1e8,	// (0x000231ce) aid_size_cell_blid2_gps_ParamLimits

0xd1e8,	// (0x000231ce) aid_size_cell_blid2_gps

0xd1f8,	// (0x000231de) blid2_gps_pane_g1_ParamLimits

0xd1f8,	// (0x000231de) blid2_gps_pane_g1

0xd204,	// (0x000231ea) grid_blid2_satellite_pane_ParamLimits

0xd204,	// (0x000231ea) grid_blid2_satellite_pane

0xd214,	// (0x000231fa) blid2_navig_pane_g1_ParamLimits

0xd214,	// (0x000231fa) blid2_navig_pane_g1

0xd220,	// (0x00023206) blid2_navig_pane_t1_ParamLimits

0xd220,	// (0x00023206) blid2_navig_pane_t1

0xd232,	// (0x00023218) blid2_navig_pane_t2_ParamLimits

0xd232,	// (0x00023218) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00025afe) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00025afe) blid2_navig_pane_t

0xd244,	// (0x0002322a) blid2_navig_ring_pane_ParamLimits

0xd244,	// (0x0002322a) blid2_navig_ring_pane

0xd254,	// (0x0002323a) blid2_speed_pane_ParamLimits

0xd254,	// (0x0002323a) blid2_speed_pane

0xd260,	// (0x00023246) blid2_tripm_pane_g1_ParamLimits

0xd260,	// (0x00023246) blid2_tripm_pane_g1

0xd270,	// (0x00023256) blid2_tripm_pane_g2_ParamLimits

0xd270,	// (0x00023256) blid2_tripm_pane_g2

0xd27c,	// (0x00023262) blid2_tripm_pane_g3_ParamLimits

0xd27c,	// (0x00023262) blid2_tripm_pane_g3

0xd288,	// (0x0002326e) blid2_tripm_pane_g4_ParamLimits

0xd288,	// (0x0002326e) blid2_tripm_pane_g4

0xd294,	// (0x0002327a) blid2_tripm_pane_g5_ParamLimits

0xd294,	// (0x0002327a) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x00025b03) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x00025b03) blid2_tripm_pane_g

0xd2b0,	// (0x00023296) blid2_tripm_pane_t1_ParamLimits

0xd2b0,	// (0x00023296) blid2_tripm_pane_t1

0xd2c4,	// (0x000232aa) blid2_tripm_pane_t2_ParamLimits

0xd2c4,	// (0x000232aa) blid2_tripm_pane_t2

0xd2d6,	// (0x000232bc) blid2_tripm_pane_t3_ParamLimits

0xd2d6,	// (0x000232bc) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00025b10) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00025b10) blid2_tripm_pane_t

0xd308,	// (0x000232ee) cell_blid2_satellite_pane_ParamLimits

0xd308,	// (0x000232ee) cell_blid2_satellite_pane

0xd322,	// (0x00023308) cell_blid2_satellite_pane_g1

0x4b60,	// (0x0001ab46) cell_blid2_satellite_pane_t1

0x35f3,	// (0x000195d9) blid2_speed_pane_g1

0x4b6e,	// (0x0001ab54) blid2_speed_pane_t1

0x4b7c,	// (0x0001ab62) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00025b19) blid2_speed_pane_t

0x35f3,	// (0x000195d9) blid2_navig_ring_pane_g1

0xd32b,	// (0x00023311) blid2_navig_ring_pane_g2

0xd333,	// (0x00023319) blid2_navig_ring_pane_g3

0xd33b,	// (0x00023321) blid2_navig_ring_pane_g4

0xd343,	// (0x00023329) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00025b1e) blid2_navig_ring_pane_g

0x06b0,	// (0x00016696) bg_popup_window_pane_cp011

0x4b8a,	// (0x0001ab70) popup_blid2_search_window_g1

0x4b92,	// (0x0001ab78) popup_blid2_search_window_t1

0x4ba0,	// (0x0001ab86) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00025b29) popup_blid2_search_window_t

0x12f6,	// (0x000172dc) main_browser_pane_g1

0x0e95,	// (0x00016e7b) main_browser_pane_ParamLimits

0x7f04,	// (0x0001deea) bg_button_pane_cp011_ParamLimits

0x8261,	// (0x0001e247) cell_vitu2_function_pane_g1_ParamLimits

0x0720,	// (0x00016706) bg_popup_sub_pane_cp22_ParamLimits

0xcd9f,	// (0x00022d85) input_focus_pane_cp08_ParamLimits

0xcdac,	// (0x00022d92) popup_vitu2_query_button_pane_ParamLimits

0xcdac,	// (0x00022d92) popup_vitu2_query_button_pane

0xcd81,	// (0x00022d67) popup_vitu2_query_input_button_pane

0x46a5,	// (0x0001a68b) popup_vitu2_query_window_g1_ParamLimits

0xcdbd,	// (0x00022da3) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00025a30) popup_vitu2_query_window_g_ParamLimits

0x06b0,	// (0x00016696) bg_button_pane_cp026

0xd34b,	// (0x00023331) popup_vitu2_query_input_button_pane_g1

0x06b0,	// (0x00016696) bg_button_pane_cp025

0x4bae,	// (0x0001ab94) popup_vitu2_query_button_pane_t1

0xb72a,	// (0x00021710) main_mp3_pane_t6

0xb73a,	// (0x00021720) popup_slider_window_cp01

0x7e25,	// (0x0001de0b) cam4_battery_pane

0x7f12,	// (0x0001def8) cam4_battery_pane_cp02

0x8404,	// (0x0001e3ea) cam4_battery_pane_cp01

0x8404,	// (0x0001e3ea) cam4_battery_pane_cp03

0x4bbc,	// (0x0001aba2) cam4_battery_pane_g1

0x35f3,	// (0x000195d9) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x00025b2e) cam4_battery_pane_g

0x34bf,	// (0x000194a5) popup_blid_sat_info2_window_t11

0xa27c,	// (0x00020262) aid_size_touch_mv_arrow_left_ParamLimits

0xa2a5,	// (0x0002028b) aid_size_touch_mv_arrow_right_ParamLimits

0x1b90,	// (0x00017b76) navi_pane_g1_ParamLimits

0xa2ce,	// (0x000202b4) navi_pane_g2_ParamLimits

0xa2fc,	// (0x000202e2) navi_pane_g3_ParamLimits

0xf418,	// (0x000253fe) navi_pane_g_ParamLimits

0xa356,	// (0x0002033c) navi_pane_mv_t1_ParamLimits

0xc19f,	// (0x00022185) grid_imed_effect_pane_ParamLimits

0x123f,	// (0x00017225) aid_placing_vt_slider_lsc

0x1247,	// (0x0001722d) aid_placing_vt_slider_prt

0x0720,	// (0x00016706) bg_tb_trans_pane_cp01_ParamLimits

0x377f,	// (0x00019765) popup_image_details_window_g1_ParamLimits

0x3792,	// (0x00019778) popup_image_details_window_g2_ParamLimits

0x37a7,	// (0x0001978d) popup_image_details_window_g3_ParamLimits

0x37a7,	// (0x0001978d) popup_image_details_window_g3

0xf74b,	// (0x00025731) popup_image_details_window_g_ParamLimits

0x37bb,	// (0x000197a1) popup_image_details_window_t1_ParamLimits

0x37cd,	// (0x000197b3) popup_image_details_window_t2_ParamLimits

0x37e6,	// (0x000197cc) popup_image_details_window_t3_ParamLimits

0x37fa,	// (0x000197e0) popup_image_details_window_t4_ParamLimits

0x3815,	// (0x000197fb) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00025738) popup_image_details_window_t_ParamLimits

0xd088,	// (0x0002306e) cl_header_name_pane_ParamLimits

0xd088,	// (0x0002306e) cl_header_name_pane

0xd353,	// (0x00023339) cl_header_name_pane_t1_ParamLimits

0xd353,	// (0x00023339) cl_header_name_pane_t1

0xd36a,	// (0x00023350) cl_header_name_pane_t2_ParamLimits

0xd36a,	// (0x00023350) cl_header_name_pane_t2

0xd394,	// (0x0002337a) cl_header_name_pane_t3_ParamLimits

0xd394,	// (0x0002337a) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x00025b33) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x00025b33) cl_header_name_pane_t

0xa327,	// (0x0002030d) navi_pane_mv_g2_ParamLimits

0x4307,	// (0x0001a2ed) field_vitu2_entry_pane_g1_ParamLimits

0x4313,	// (0x0001a2f9) field_vitu2_entry_pane_g2_ParamLimits

0x431f,	// (0x0001a305) field_vitu2_entry_pane_g3_ParamLimits

0x431f,	// (0x0001a305) field_vitu2_entry_pane_g3

0xf949,	// (0x0002592f) field_vitu2_entry_pane_g_ParamLimits

0x8136,	// (0x0001e11c) cell_vitu2_itu_pane_g1_ParamLimits

0x8146,	// (0x0001e12c) cell_vitu2_itu_pane_g2_ParamLimits

0x8146,	// (0x0001e12c) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0002593b) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0002593b) cell_vitu2_itu_pane_g

0x7f04,	// (0x0001deea) bg_vkb2_func_pane_cp05_ParamLimits

0x7f04,	// (0x0001deea) bg_vkb2_func_pane_cp05

0x7f04,	// (0x0001deea) bg_vkb2_func_pane_cp03

0x7f04,	// (0x0001deea) bg_vkb2_func_pane_cp04

0x7f04,	// (0x0001deea) bg_vkb2_func_pane_cp10_ParamLimits

0x7f04,	// (0x0001deea) bg_vkb2_func_pane_cp10

0xd02a,	// (0x00023010) bg_vkb2_func_pane_cp08

0xd010,	// (0x00022ff6) bg_vkb2_func_pane_cp06

0xd01e,	// (0x00023004) bg_vkb2_func_pane_cp07

0x4aab,	// (0x0001aa91) bg_vkb2_func_pane_cp11_ParamLimits

0x4aab,	// (0x0001aa91) bg_vkb2_func_pane_cp11

0x4ac0,	// (0x0001aaa6) bg_vkb2_func_pane_cp12_ParamLimits

0x4ac0,	// (0x0001aaa6) bg_vkb2_func_pane_cp12

0x06b0,	// (0x00016696) bg_vkb2_func_pane_cp09

0x438b,	// (0x0001a371) bg_vkb2_func_pane_g1

0x1407,	// (0x000173ed) bg_vkb2_func_pane_g2

0x4393,	// (0x0001a379) bg_vkb2_func_pane_g3

0x439b,	// (0x0001a381) bg_vkb2_func_pane_g4

0x4630,	// (0x0001a616) bg_vkb2_func_pane_g5

0x43b3,	// (0x0001a399) bg_vkb2_func_pane_g6

0x43bb,	// (0x0001a3a1) bg_vkb2_func_pane_g7

0x43ab,	// (0x0001a391) bg_vkb2_func_pane_g8

0x13e7,	// (0x000173cd) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x00025b3a) bg_vkb2_func_pane_g

0xd2a2,	// (0x00023288) blid2_tripm_pane_g6_ParamLimits

0xd2a2,	// (0x00023288) blid2_tripm_pane_g6

0x40ea,	// (0x0001a0d0) mp4_progress_pane_g1

0xd2fc,	// (0x000232e2) blid2_tripm_values_pane_ParamLimits

0xd2fc,	// (0x000232e2) blid2_tripm_values_pane

0xd3b9,	// (0x0002339f) blid2_tripm_values_pane_t1

0xd3c7,	// (0x000233ad) blid2_tripm_values_pane_t2

0xd3d5,	// (0x000233bb) blid2_tripm_values_pane_t3

0xd3e3,	// (0x000233c9) blid2_tripm_values_pane_t4

0xd3f1,	// (0x000233d7) blid2_tripm_values_pane_t5

0xd3ff,	// (0x000233e5) blid2_tripm_values_pane_t6

0xd40d,	// (0x000233f3) blid2_tripm_values_pane_t7

0xd41b,	// (0x00023401) blid2_tripm_values_pane_t8

0xd429,	// (0x0002340f) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x00025b4d) blid2_tripm_values_pane_t

0x9249,	// (0x0001f22f) call_video_pane_t1_ParamLimits

0x9262,	// (0x0001f248) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00025287) call_video_pane_t_ParamLimits

0xa870,	// (0x00020856) msg_header_pane_g1_ParamLimits

0x1dd3,	// (0x00017db9) msg_header_pane_g2_ParamLimits

0x1dd3,	// (0x00017db9) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x000254a1) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x000254a1) msg_header_pane_g

0x0e95,	// (0x00016e7b) main_clock2_pane_ParamLimits

0xbfa7,	// (0x00021f8d) grid_clock2_toolbar_pane_ParamLimits

0xbfa7,	// (0x00021f8d) grid_clock2_toolbar_pane

0xbfa7,	// (0x00021f8d) listscroll_clock2_pane_ParamLimits

0xbfa7,	// (0x00021f8d) listscroll_clock2_pane

0xc054,	// (0x0002203a) main_clock2_pane_t3_ParamLimits

0xc054,	// (0x0002203a) main_clock2_pane_t3

0xc066,	// (0x0002204c) main_clock2_pane_t4_ParamLimits

0xc066,	// (0x0002204c) main_clock2_pane_t4

0x4bc6,	// (0x0001abac) cell_clock2_toolbar_pane

0x4bce,	// (0x0001abb4) cell_clock2_toolbar_pane_cp01

0x4bce,	// (0x0001abb4) cell_clock2_toolbar_pane_cp02

0x4bd6,	// (0x0001abbc) cell_clock2_toolbar_pane_cp03

0x4bde,	// (0x0001abc4) list_clock2_pane

0x1ae7,	// (0x00017acd) scroll_pane_cp10

0x4be6,	// (0x0001abcc) list_single_clock2_pane_ParamLimits

0x4be6,	// (0x0001abcc) list_single_clock2_pane

0x1c30,	// (0x00017c16) list_highlight_pane_cp08

0x4bf3,	// (0x0001abd9) list_single_clock2_pane_t1

0x4c01,	// (0x0001abe7) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x00025b60) list_single_clock2_pane_t

0x06b0,	// (0x00016696) bg_button_pane_cp10

0x4c0f,	// (0x0001abf5) cell_clock2_toolbar_pane_g1

0x74f1,	// (0x0001d4d7) aid_main_viewer_pane_g1_ParamLimits

0x74f1,	// (0x0001d4d7) aid_main_viewer_pane_g1

0x74fd,	// (0x0001d4e3) aid_main_viewer_pane_g2_ParamLimits

0x74fd,	// (0x0001d4e3) aid_main_viewer_pane_g2

0xa88e,	// (0x00020874) aid_main_viewer_pane_g3_ParamLimits

0xa88e,	// (0x00020874) aid_main_viewer_pane_g3

0xa89f,	// (0x00020885) aid_main_viewer_pane_g4_ParamLimits

0xa89f,	// (0x00020885) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x000254b2) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x000254b2) aid_main_viewer_pane_g

0xafdd,	// (0x00020fc3) main_calc_pane_ParamLimits

0xafea,	// (0x00020fd0) main_dialer2_pane_ParamLimits

0x06b0,	// (0x00016696) main_cam6_pane

0x06b0,	// (0x00016696) main_vid6_pane

0xbfb3,	// (0x00021f99) listscroll_gen_pane_cp06_ParamLimits

0xbfb3,	// (0x00021f99) listscroll_gen_pane_cp06

0xc078,	// (0x0002205e) main_clock2_pane_t5_ParamLimits

0xc078,	// (0x0002205e) main_clock2_pane_t5

0xc0c1,	// (0x000220a7) aid_call2_pane_cp10_ParamLimits

0xc0d3,	// (0x000220b9) aid_call_pane_cp10_ParamLimits

0x1b65,	// (0x00017b4b) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1b65,	// (0x00017b4b) popup_clock_analogue_window_cp10_g2_ParamLimits

0xc0e5,	// (0x000220cb) popup_clock_analogue_window_cp10_g3_ParamLimits

0xc0e5,	// (0x000220cb) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1b65,	// (0x00017b4b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x000257e8) popup_clock_analogue_window_cp10_g_ParamLimits

0xc0f7,	// (0x000220dd) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc502,	// (0x000224e8) cell_dialer2_keypad_pane_g2_ParamLimits

0xc502,	// (0x000224e8) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x000258ce) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x000258ce) cell_dialer2_keypad_pane_g

0xc51e,	// (0x00022504) cell_dialer2_keypad_pane_t1

0xc92a,	// (0x00022910) main_cset_text2_pane_ParamLimits

0xc92a,	// (0x00022910) main_cset_text2_pane

0x4885,	// (0x0001a86b) area_vitu2_query_pane_g1_ParamLimits

0xcfaf,	// (0x00022f95) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00025a7d) area_vitu2_query_pane_g_ParamLimits

0x4909,	// (0x0001a8ef) area_vitu2_query_pane_t7_ParamLimits

0x4909,	// (0x0001a8ef) area_vitu2_query_pane_t7

0xd010,	// (0x00022ff6) bg_button_pane_cp018_ParamLimits

0xd01e,	// (0x00023004) bg_button_pane_cp021_ParamLimits

0xd02a,	// (0x00023010) bg_button_pane_cp022_ParamLimits

0xd02a,	// (0x00023010) bg_vkb2_func_pane_cp08_ParamLimits

0xd010,	// (0x00022ff6) bg_vkb2_func_pane_cp06_ParamLimits

0xd01e,	// (0x00023004) bg_vkb2_func_pane_cp07_ParamLimits

0xd03b,	// (0x00023021) input_focus_pane_cp09_ParamLimits

0x849c,	// (0x0001e482) cam6_autofocus_pane_ParamLimits

0x849c,	// (0x0001e482) cam6_autofocus_pane

0x84be,	// (0x0001e4a4) cam6_image_uncrop_pane_ParamLimits

0x84be,	// (0x0001e4a4) cam6_image_uncrop_pane

0x84eb,	// (0x0001e4d1) cam6_indi_pane_ParamLimits

0x84eb,	// (0x0001e4d1) cam6_indi_pane

0x8505,	// (0x0001e4eb) cam6_mode_pane_ParamLimits

0x8505,	// (0x0001e4eb) cam6_mode_pane

0x8519,	// (0x0001e4ff) cam6_timer_pane_ParamLimits

0x8519,	// (0x0001e4ff) cam6_timer_pane

0x8525,	// (0x0001e50b) cam6_zoom_pane_ParamLimits

0x8525,	// (0x0001e50b) cam6_zoom_pane

0xd437,	// (0x0002341d) cam6_mode_pane_g1_ParamLimits

0xd437,	// (0x0002341d) cam6_mode_pane_g1

0xd443,	// (0x00023429) cam6_mode_pane_g2_ParamLimits

0xd443,	// (0x00023429) cam6_mode_pane_g2

0xd44f,	// (0x00023435) cam6_mode_pane_g3_ParamLimits

0xd44f,	// (0x00023435) cam6_mode_pane_g3

0xd45b,	// (0x00023441) cam6_mode_pane_g4_ParamLimits

0xd45b,	// (0x00023441) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x00025b65) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x00025b65) cam6_mode_pane_g

0x4c25,	// (0x0001ac0b) bg_tb_trans_pane_cp08_ParamLimits

0x4c25,	// (0x0001ac0b) bg_tb_trans_pane_cp08

0x4c33,	// (0x0001ac19) cam6_battery_pane_ParamLimits

0x4c33,	// (0x0001ac19) cam6_battery_pane

0x4c49,	// (0x0001ac2f) cam6_indi_pane_g1_ParamLimits

0x4c49,	// (0x0001ac2f) cam6_indi_pane_g1

0x4c5b,	// (0x0001ac41) cam6_indi_pane_g2_ParamLimits

0x4c5b,	// (0x0001ac41) cam6_indi_pane_g2

0x4c6d,	// (0x0001ac53) cam6_indi_pane_g3_ParamLimits

0x4c6d,	// (0x0001ac53) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x00025b6e) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x00025b6e) cam6_indi_pane_g

0x4c7f,	// (0x0001ac65) cam6_indi_pane_t1_ParamLimits

0x4c7f,	// (0x0001ac65) cam6_indi_pane_t1

0xc65d,	// (0x00022643) cam6_autofocus_pane_g1

0xc655,	// (0x0002263b) cam6_autofocus_pane_g2

0xc66d,	// (0x00022653) cam6_autofocus_pane_g3

0xc665,	// (0x0002264b) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x00025b75) cam6_autofocus_pane_g

0x4ca5,	// (0x0001ac8b) cam6_timer_pane_g1

0x4cad,	// (0x0001ac93) cam6_timer_pane_t1

0x4cbb,	// (0x0001aca1) cam6_zoom_cont_pane

0x4cc3,	// (0x0001aca9) cam6_zoom_pane_g1

0x4ccb,	// (0x0001acb1) cam6_zoom_pane_g2

0xd467,	// (0x0002344d) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x00025b7e) cam6_zoom_pane_g

0x35f3,	// (0x000195d9) cam6_battery_pane_g1

0x35f3,	// (0x000195d9) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x000256f5) cam6_battery_pane_g

0x4cd3,	// (0x0001acb9) cam6_zoom_cont_pane_g1

0x4cdc,	// (0x0001acc2) cam6_zoom_cont_pane_g2

0x4ce5,	// (0x0001accb) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x00025b85) cam6_zoom_cont_pane_g

0xd484,	// (0x0002346a) cam6_mode_pane_cp_ParamLimits

0xd484,	// (0x0002346a) cam6_mode_pane_cp

0xd498,	// (0x0002347e) cam6_zoom_pane_cp_ParamLimits

0xd498,	// (0x0002347e) cam6_zoom_pane_cp

0xd4b0,	// (0x00023496) vid6_image_uncrop_cif_pane_ParamLimits

0xd4b0,	// (0x00023496) vid6_image_uncrop_cif_pane

0xd4dc,	// (0x000234c2) vid6_image_uncrop_nhd_pane_ParamLimits

0xd4dc,	// (0x000234c2) vid6_image_uncrop_nhd_pane

0xd4f9,	// (0x000234df) vid6_image_uncrop_vga_pane_ParamLimits

0xd4f9,	// (0x000234df) vid6_image_uncrop_vga_pane

0xd518,	// (0x000234fe) vid6_image_uncrop_wvga_pane_ParamLimits

0xd518,	// (0x000234fe) vid6_image_uncrop_wvga_pane

0xd535,	// (0x0002351b) vid6_indi_pane_ParamLimits

0xd535,	// (0x0002351b) vid6_indi_pane

0x4c25,	// (0x0001ac0b) bg_tb_trans_pane_cp09_ParamLimits

0x4c25,	// (0x0001ac0b) bg_tb_trans_pane_cp09

0x4cfd,	// (0x0001ace3) cam6_battery_pane_cp_ParamLimits

0x4cfd,	// (0x0001ace3) cam6_battery_pane_cp

0x4d09,	// (0x0001acef) vid6_indi_pane_g1_ParamLimits

0x4d09,	// (0x0001acef) vid6_indi_pane_g1

0x4d1b,	// (0x0001ad01) vid6_indi_pane_g2_ParamLimits

0x4d1b,	// (0x0001ad01) vid6_indi_pane_g2

0x4d2d,	// (0x0001ad13) vid6_indi_pane_g3_ParamLimits

0x4d2d,	// (0x0001ad13) vid6_indi_pane_g3

0x4d42,	// (0x0001ad28) vid6_indi_pane_g4_ParamLimits

0x4d42,	// (0x0001ad28) vid6_indi_pane_g4

0x4d57,	// (0x0001ad3d) vid6_indi_pane_g5_ParamLimits

0x4d57,	// (0x0001ad3d) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x00025b8c) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x00025b8c) vid6_indi_pane_g

0x4d71,	// (0x0001ad57) vid6_indi_pane_t1_ParamLimits

0x4d71,	// (0x0001ad57) vid6_indi_pane_t1

0x4d87,	// (0x0001ad6d) vid6_indi_pane_t2_ParamLimits

0x4d87,	// (0x0001ad6d) vid6_indi_pane_t2

0x4daf,	// (0x0001ad95) vid6_indi_pane_t3_ParamLimits

0x4daf,	// (0x0001ad95) vid6_indi_pane_t3

0x4dd7,	// (0x0001adbd) vid6_indi_pane_t4_ParamLimits

0x4dd7,	// (0x0001adbd) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x00025b97) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x00025b97) vid6_indi_pane_t

0x4dfb,	// (0x0001ade1) wait_bar_pane_cp08

0xd55a,	// (0x00023540) main_cset_text2_pane_t1_ParamLimits

0xd55a,	// (0x00023540) main_cset_text2_pane_t1

0xd46f,	// (0x00023455) listscroll_gen_pane_cp06_t1_ParamLimits

0xd46f,	// (0x00023455) listscroll_gen_pane_cp06_t1

0x06b0,	// (0x00016696) main_cam6_set_pane

0x7e17,	// (0x0001ddfd) bg_tb_trans_pane_cp06_ParamLimits

0x7e2d,	// (0x0001de13) cam4_indicators_pane_g1_ParamLimits

0x7e3e,	// (0x0001de24) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0002590b) cam4_indicators_pane_g_ParamLimits

0x7e5c,	// (0x0001de42) cam4_indicators_pane_t1_ParamLimits

0x7f04,	// (0x0001deea) bg_tb_trans_pane_cp07_ParamLimits

0x7f1c,	// (0x0001df02) vid4_indicators_pane_g1_ParamLimits

0x7f2d,	// (0x0001df13) vid4_indicators_pane_g2_ParamLimits

0x7f3e,	// (0x0001df24) vid4_indicators_pane_g3_ParamLimits

0x7f4f,	// (0x0001df35) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0002591d) vid4_indicators_pane_g_ParamLimits

0x7f6b,	// (0x0001df51) vid4_indicators_pane_t1_ParamLimits

0x840c,	// (0x0001e3f2) vid4_progress_pane_g1_ParamLimits

0x841c,	// (0x0001e402) vid4_progress_pane_g2_ParamLimits

0x1704,	// (0x000176ea) vid4_progress_pane_g3_ParamLimits

0x842c,	// (0x0001e412) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00025ac8) vid4_progress_pane_g_ParamLimits

0x844a,	// (0x0001e430) vid4_progress_pane_t1_ParamLimits

0x845f,	// (0x0001e445) vid4_progress_pane_t2_ParamLimits

0x8475,	// (0x0001e45b) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00025ad3) vid4_progress_pane_t_ParamLimits

0x848a,	// (0x0001e470) wait_bar_pane_cp07_ParamLimits

0xd58d,	// (0x00023573) main_cam6_set_pane_g2_ParamLimits

0xd58d,	// (0x00023573) main_cam6_set_pane_g2

0xd599,	// (0x0002357f) main_cset6_listscroll_pane_ParamLimits

0xd599,	// (0x0002357f) main_cset6_listscroll_pane

0xd5c4,	// (0x000235aa) main_cset6_slider_pane_ParamLimits

0xd5c4,	// (0x000235aa) main_cset6_slider_pane

0xd5d0,	// (0x000235b6) main_cset6_text2_pane_ParamLimits

0xd5d0,	// (0x000235b6) main_cset6_text2_pane

0x4e0a,	// (0x0001adf0) main_cset6_text_pane

0x4e12,	// (0x0001adf8) main_cset_list_pane_copy1_ParamLimits

0x4e12,	// (0x0001adf8) main_cset_list_pane_copy1

0x4e22,	// (0x0001ae08) scroll_pane_cp028_copy1

0xd5e3,	// (0x000235c9) cset_list_set_pane_copy1

0xd5f6,	// (0x000235dc) aid_position_infowindow_above_copy1

0xd5fe,	// (0x000235e4) aid_position_infowindow_below_copy1

0xd606,	// (0x000235ec) cset_list_set_pane_g1_copy1

0x457e,	// (0x0001a564) cset_list_set_pane_g3_copy1_ParamLimits

0x457e,	// (0x0001a564) cset_list_set_pane_g3_copy1

0x458d,	// (0x0001a573) cset_list_set_pane_t1_copy1_ParamLimits

0x458d,	// (0x0001a573) cset_list_set_pane_t1_copy1

0x0720,	// (0x00016706) list_highlight_pane_cp021_copy1_ParamLimits

0x0720,	// (0x00016706) list_highlight_pane_cp021_copy1

0x4e2b,	// (0x0001ae11) cset6_slider_pane_ParamLimits

0x4e2b,	// (0x0001ae11) cset6_slider_pane

0x4e57,	// (0x0001ae3d) main_cset6_slider_pane_g1_ParamLimits

0x4e57,	// (0x0001ae3d) main_cset6_slider_pane_g1

0xd60e,	// (0x000235f4) main_cset6_slider_pane_g2_ParamLimits

0xd60e,	// (0x000235f4) main_cset6_slider_pane_g2

0x4e7f,	// (0x0001ae65) main_cset6_slider_pane_g3_ParamLimits

0x4e7f,	// (0x0001ae65) main_cset6_slider_pane_g3

0xd636,	// (0x0002361c) main_cset6_slider_pane_g4_ParamLimits

0xd636,	// (0x0002361c) main_cset6_slider_pane_g4

0xd642,	// (0x00023628) main_cset6_slider_pane_g5_ParamLimits

0xd642,	// (0x00023628) main_cset6_slider_pane_g5

0x44ba,	// (0x0001a4a0) main_cset6_slider_pane_g7_ParamLimits

0x44ba,	// (0x0001a4a0) main_cset6_slider_pane_g7

0x44c6,	// (0x0001a4ac) main_cset6_slider_pane_g8_ParamLimits

0x44c6,	// (0x0001a4ac) main_cset6_slider_pane_g8

0xd650,	// (0x00023636) main_cset6_slider_pane_g9_ParamLimits

0xd650,	// (0x00023636) main_cset6_slider_pane_g9

0xd65c,	// (0x00023642) main_cset6_slider_pane_g10_ParamLimits

0xd65c,	// (0x00023642) main_cset6_slider_pane_g10

0xd668,	// (0x0002364e) main_cset6_slider_pane_g11_ParamLimits

0xd668,	// (0x0002364e) main_cset6_slider_pane_g11

0xd674,	// (0x0002365a) main_cset6_slider_pane_g12_ParamLimits

0xd674,	// (0x0002365a) main_cset6_slider_pane_g12

0xd680,	// (0x00023666) main_cset6_slider_pane_g13_ParamLimits

0xd680,	// (0x00023666) main_cset6_slider_pane_g13

0xd68c,	// (0x00023672) main_cset6_slider_pane_g14_ParamLimits

0xd68c,	// (0x00023672) main_cset6_slider_pane_g14

0xd698,	// (0x0002367e) main_cset6_slider_pane_g15_ParamLimits

0xd698,	// (0x0002367e) main_cset6_slider_pane_g15

0xd6b0,	// (0x00023696) main_cset6_slider_pane_g16_ParamLimits

0xd6b0,	// (0x00023696) main_cset6_slider_pane_g16

0xd6be,	// (0x000236a4) main_cset6_slider_pane_g17_ParamLimits

0xd6be,	// (0x000236a4) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x00025ba0) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x00025ba0) main_cset6_slider_pane_g

0x4e8b,	// (0x0001ae71) main_cset6_slider_pane_t1_ParamLimits

0x4e8b,	// (0x0001ae71) main_cset6_slider_pane_t1

0xd6e4,	// (0x000236ca) main_cset6_slider_pane_t2_ParamLimits

0xd6e4,	// (0x000236ca) main_cset6_slider_pane_t2

0xd70f,	// (0x000236f5) main_cset6_slider_pane_t3_ParamLimits

0xd70f,	// (0x000236f5) main_cset6_slider_pane_t3

0xd73a,	// (0x00023720) main_cset6_slider_pane_t4_ParamLimits

0xd73a,	// (0x00023720) main_cset6_slider_pane_t4

0xd765,	// (0x0002374b) main_cset6_slider_pane_t5_ParamLimits

0xd765,	// (0x0002374b) main_cset6_slider_pane_t5

0x4ecc,	// (0x0001aeb2) main_cset6_slider_pane_t7_ParamLimits

0x4ecc,	// (0x0001aeb2) main_cset6_slider_pane_t7

0xd792,	// (0x00023778) main_cset6_slider_pane_t8_ParamLimits

0xd792,	// (0x00023778) main_cset6_slider_pane_t8

0xd7b6,	// (0x0002379c) main_cset6_slider_pane_t9_ParamLimits

0xd7b6,	// (0x0002379c) main_cset6_slider_pane_t9

0xd7da,	// (0x000237c0) main_cset6_slider_pane_t10_ParamLimits

0xd7da,	// (0x000237c0) main_cset6_slider_pane_t10

0xd7fe,	// (0x000237e4) main_cset6_slider_pane_t11_ParamLimits

0xd7fe,	// (0x000237e4) main_cset6_slider_pane_t11

0x4f02,	// (0x0001aee8) main_cset6_slider_pane_t14_ParamLimits

0x4f02,	// (0x0001aee8) main_cset6_slider_pane_t14

0x4f3b,	// (0x0001af21) main_cset6_slider_pane_t15_ParamLimits

0x4f3b,	// (0x0001af21) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x00025bc5) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x00025bc5) main_cset6_slider_pane_t

0x45c2,	// (0x0001a5a8) cset_slider_pane_g1_copy1

0x45cb,	// (0x0001a5b1) cset_slider_pane_g2_copy1

0x45d4,	// (0x0001a5ba) cset_slider_pane_g3_copy1

0x06b0,	// (0x00016696) bg_popup_sub_pane_cp011_copy1

0x46b1,	// (0x0001a697) main_cset_text_pane_g1_copy1

0x46b9,	// (0x0001a69f) main_cset_text_pane_t1_copy1

0x46c7,	// (0x0001a6ad) main_cset_text_pane_t2_copy1

0x46d5,	// (0x0001a6bb) main_cset_text_pane_t3_copy1

0x46e3,	// (0x0001a6c9) main_cset_text_pane_t4_copy1

0x46f1,	// (0x0001a6d7) main_cset_text_pane_t5_copy1

0x46ff,	// (0x0001a6e5) main_cset_text_pane_t6_copy1

0x470d,	// (0x0001a6f3) main_cset_text_pane_t7_copy1

0xd822,	// (0x00023808) main_cset_text2_pane_t1_copy1

0x06b0,	// (0x00016696) main_ncimui_pane

0xb029,	// (0x0002100f) popup_query_ncimui_window_ParamLimits

0xb029,	// (0x0002100f) popup_query_ncimui_window

0x38c4,	// (0x000198aa) field_cale_ev2_pane_g4_ParamLimits

0x38c4,	// (0x000198aa) field_cale_ev2_pane_g4

0xc4a2,	// (0x00022488) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc4a2,	// (0x00022488) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x000258a9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x000258a9) cell_video_dialer_keypad_pane_g

0xc4ba,	// (0x000224a0) cell_video_dialer_keypad_pane_t1

0x06b0,	// (0x00016696) bg_popup_window_pane_cp012

0x19c4,	// (0x000179aa) heading_pane_cp06

0x5079,	// (0x0001b05f) ncim_query_content_pane

0x06b0,	// (0x00016696) bg_popup_heading_pane_cp01

0x5081,	// (0x0001b067) ncim_heading_pane_t1

0x508f,	// (0x0001b075) ncim_indicator_popup_pane

0x50a1,	// (0x0001b087) ncim_query_button_pane

0x50b5,	// (0x0001b09b) ncim_query_content_pane_t1

0x50c7,	// (0x0001b0ad) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x00025c04) ncim_query_content_pane_t

0x5101,	// (0x0001b0e7) ncim_query_list_pane

0x5113,	// (0x0001b0f9) ncim_query_popup_pane

0x508f,	// (0x0001b075) ncim_indicator_popup_pane_ParamLimits

0xd912,	// (0x000238f8) ncim_query_content_pane_g1_ParamLimits

0xd912,	// (0x000238f8) ncim_query_content_pane_g1

0x50b5,	// (0x0001b09b) ncim_query_content_pane_t1_ParamLimits

0x50c7,	// (0x0001b0ad) ncim_query_content_pane_t2_ParamLimits

0xd91e,	// (0x00023904) ncim_query_content_pane_t3_ParamLimits

0xd91e,	// (0x00023904) ncim_query_content_pane_t3

0xd93b,	// (0x00023921) ncim_query_content_pane_t4_ParamLimits

0xd93b,	// (0x00023921) ncim_query_content_pane_t4

0xd958,	// (0x0002393e) ncim_query_content_pane_t5_ParamLimits

0xd958,	// (0x0002393e) ncim_query_content_pane_t5

0x50d9,	// (0x0001b0bf) ncim_query_content_pane_t6_ParamLimits

0x50d9,	// (0x0001b0bf) ncim_query_content_pane_t6

0xfc1e,	// (0x00025c04) ncim_query_content_pane_t_ParamLimits

0x5101,	// (0x0001b0e7) ncim_query_list_pane_ParamLimits

0x5113,	// (0x0001b0f9) ncim_query_popup_pane_ParamLimits

0x5127,	// (0x0001b10d) wait_bar_pane_cp04

0x06b0,	// (0x00016696) input_focus_pane_cp011

0x512f,	// (0x0001b115) ncim_query_popup_pane_t1

0x513d,	// (0x0001b123) ncim_list_query_list_pane_ParamLimits

0x513d,	// (0x0001b123) ncim_list_query_list_pane

0x06b0,	// (0x00016696) bg_button_pane_cp027

0x514a,	// (0x0001b130) ncim_query_button_pane_g1

0x06b0,	// (0x00016696) list_highlight_pane_cp012

0x5154,	// (0x0001b13a) ncim_list_query_list_pane_g1

0x515c,	// (0x0001b142) ncim_list_query_list_pane_t1

0x7e4d,	// (0x0001de33) cam4_indicators_pane_g3_ParamLimits

0x7e4d,	// (0x0001de33) cam4_indicators_pane_g3

0x7f5b,	// (0x0001df41) vid4_indicators_pane_g5_ParamLimits

0x7f5b,	// (0x0001df41) vid4_indicators_pane_g5

0x843b,	// (0x0001e421) vid4_progress_pane_g5_ParamLimits

0x843b,	// (0x0001e421) vid4_progress_pane_g5

0xd85a,	// (0x00023840) main_ncimui_pane_g1

0xd8a0,	// (0x00023886) ncimui_group_query_pane_ParamLimits

0xd8a0,	// (0x00023886) ncimui_group_query_pane

0xd8d4,	// (0x000238ba) ncimui_list_pane_ParamLimits

0xd8d4,	// (0x000238ba) ncimui_list_pane

0xd8ee,	// (0x000238d4) ncimui_text_pane_ParamLimits

0xd8ee,	// (0x000238d4) ncimui_text_pane

0xd975,	// (0x0002395b) ncimui_text_pane_t1_ParamLimits

0xd975,	// (0x0002395b) ncimui_text_pane_t1

0x516a,	// (0x0001b150) ncimui_list_single_graphic_pane_ParamLimits

0x516a,	// (0x0001b150) ncimui_list_single_graphic_pane

0xd994,	// (0x0002397a) ncimui_query_pane_ParamLimits

0xd994,	// (0x0002397a) ncimui_query_pane

0x06b0,	// (0x00016696) list_highlight_pane_cp013

0x517a,	// (0x0001b160) ncim_list_query_list_pane_t1_copy1

0x5154,	// (0x0001b13a) ncim_list_single_graphic_pane_g1

0x5188,	// (0x0001b16e) ncim_query_button_pane_cp01

0x5190,	// (0x0001b176) ncim_query_entry_pane_ParamLimits

0x5190,	// (0x0001b176) ncim_query_entry_pane

0x51a0,	// (0x0001b186) ncimui_query_pane_g1

0x51a8,	// (0x0001b18e) ncimui_query_pane_t1_ParamLimits

0x51a8,	// (0x0001b18e) ncimui_query_pane_t1

0x06b0,	// (0x00016696) input_focus_pane_cp012

0x512f,	// (0x0001b115) ncim_query_entry_pane_t1

0x0e95,	// (0x00016e7b) main_im_pane_ParamLimits

0x0720,	// (0x00016706) main_mobtv_pane_ParamLimits

0x0720,	// (0x00016706) main_mobtv_pane

0xd6cc,	// (0x000236b2) main_cset6_slider_pane_g18_ParamLimits

0xd6cc,	// (0x000236b2) main_cset6_slider_pane_g18

0xd6d8,	// (0x000236be) main_cset6_slider_pane_g19_ParamLimits

0xd6d8,	// (0x000236be) main_cset6_slider_pane_g19

0x431f,	// (0x0001a305) bg_main_mobtv_pane_ParamLimits

0x431f,	// (0x0001a305) bg_main_mobtv_pane

0xd9a4,	// (0x0002398a) main_mobtv_info_pane

0xd9af,	// (0x00023995) main_mobtv_loading_pane_ParamLimits

0xd9af,	// (0x00023995) main_mobtv_loading_pane

0x51be,	// (0x0001b1a4) main_mobtv_pg_channel_list_pane

0x51c8,	// (0x0001b1ae) main_mobtv_pg_hdr_pane

0xd9bc,	// (0x000239a2) main_mobtv_programe_curr_pane_ParamLimits

0xd9bc,	// (0x000239a2) main_mobtv_programe_curr_pane

0xd9c9,	// (0x000239af) main_mobtv_programe_next_pane_ParamLimits

0xd9c9,	// (0x000239af) main_mobtv_programe_next_pane

0x51d1,	// (0x0001b1b7) popup_mobtv_noti_window

0x35f3,	// (0x000195d9) main_tv_pg_hdr_pane_g1

0x51d9,	// (0x0001b1bf) main_tv_pg_hdr_pane_g2

0x51e1,	// (0x0001b1c7) main_tv_pg_hdr_pane_g3

0x51e9,	// (0x0001b1cf) main_tv_pg_hdr_pane_g4

0x51f1,	// (0x0001b1d7) main_tv_pg_hdr_pane_g5

0x51fb,	// (0x0001b1e1) main_tv_pg_hdr_pane_g6

0x5205,	// (0x0001b1eb) main_tv_pg_hdr_pane_g7

0x520f,	// (0x0001b1f5) main_tv_pg_hdr_pane_g8

0x5219,	// (0x0001b1ff) main_tv_pg_hdr_pane_g9

0x5223,	// (0x0001b209) main_tv_pg_hdr_pane_g10

0x522d,	// (0x0001b213) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x00025c11) main_tv_pg_hdr_pane_g

0x5237,	// (0x0001b21d) main_tv_pg_hdr_pane_t1

0x5245,	// (0x0001b22b) main_tv_pg_hdr_pane_t2

0x5253,	// (0x0001b239) main_tv_pg_hdr_pane_t3

0x5263,	// (0x0001b249) main_tv_pg_hdr_pane_t4

0x5273,	// (0x0001b259) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00025c28) main_tv_pg_hdr_pane_t

0x5283,	// (0x0001b269) single_mobtv_pg_channel_pane_ParamLimits

0x5283,	// (0x0001b269) single_mobtv_pg_channel_pane

0x5295,	// (0x0001b27b) single_mobtv_pg_channel_table_pane

0x529e,	// (0x0001b284) single_mobtv_pg_channel_thumb_pane

0x52a7,	// (0x0001b28d) single_tv_pg_channel_pane_g1

0x52b0,	// (0x0001b296) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x00025c33) single_tv_pg_channel_pane_g

0x385f,	// (0x00019845) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x385f,	// (0x00019845) bg_single_mobtv_pg_channel_thumb_pane

0x52b9,	// (0x0001b29f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x52b9,	// (0x0001b29f) single_mobtv_pg_channel_thumb_pane_g1

0x52c7,	// (0x0001b2ad) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x52c7,	// (0x0001b2ad) single_mobtv_pg_channel_thumb_pane_g2

0x52d3,	// (0x0001b2b9) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x52d3,	// (0x0001b2b9) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x00025c38) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x00025c38) single_mobtv_pg_channel_thumb_pane_g

0x52df,	// (0x0001b2c5) single_mobtv_pg_channel_thumb_pane_t1

0x52ed,	// (0x0001b2d3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x00025c3f) single_mobtv_pg_channel_thumb_pane_t

0x35f3,	// (0x000195d9) bg_single_mobtv_pg_channel_table_pane_g1

0x35f3,	// (0x000195d9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x000256f5) bg_single_mobtv_pg_channel_table_pane_g

0x52fb,	// (0x0001b2e1) single_mobtv_pg_channel_table_pane_t1

0x5309,	// (0x0001b2ef) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x00025c44) single_mobtv_pg_channel_table_pane_t

0xd9de,	// (0x000239c4) main_mobtv_info_pane_g1_ParamLimits

0xd9de,	// (0x000239c4) main_mobtv_info_pane_g1

0xd9fa,	// (0x000239e0) main_mobtv_info_pane_t1_ParamLimits

0xd9fa,	// (0x000239e0) main_mobtv_info_pane_t1

0xda72,	// (0x00023a58) main_mobtv_info_pane_t2_ParamLimits

0xda72,	// (0x00023a58) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x00025c4e) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x00025c4e) main_mobtv_info_pane_t

0xdb01,	// (0x00023ae7) wait_bar_pane_cp05

0xdb13,	// (0x00023af9) main_mobtv_loading_pane_g1_ParamLimits

0xdb13,	// (0x00023af9) main_mobtv_loading_pane_g1

0xdb21,	// (0x00023b07) main_mobtv_loading_pane_g2_ParamLimits

0xdb21,	// (0x00023b07) main_mobtv_loading_pane_g2

0xdb2d,	// (0x00023b13) main_mobtv_loading_pane_g3_ParamLimits

0xdb2d,	// (0x00023b13) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x00025c55) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x00025c55) main_mobtv_loading_pane_g

0x5317,	// (0x0001b2fd) main_mobtv_loading_pane_t1_ParamLimits

0x5317,	// (0x0001b2fd) main_mobtv_loading_pane_t1

0x532f,	// (0x0001b315) main_mobtv_loading_pane_t2_ParamLimits

0x532f,	// (0x0001b315) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x00025c5c) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x00025c5c) main_mobtv_loading_pane_t

0xdb3b,	// (0x00023b21) wait_bar_pane_cp06_ParamLimits

0xdb3b,	// (0x00023b21) wait_bar_pane_cp06

0x5353,	// (0x0001b339) main_mobtv_programe_curr_pane_t1

0x5361,	// (0x0001b347) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x00025c61) main_mobtv_programe_curr_pane_t

0x536f,	// (0x0001b355) main_mobtv_programe_next_pane_t1

0x537d,	// (0x0001b363) main_mobtv_programe_next_pane_t2

0x538b,	// (0x0001b371) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x00025c66) main_mobtv_programe_next_pane_t

0x06b0,	// (0x00016696) bg_popup_mobtv_noti_window_pane

0x5399,	// (0x0001b37f) popup_mobtv_noti_window_g1

0x53a1,	// (0x0001b387) popup_mobtv_noti_window_t1

0x53af,	// (0x0001b395) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x00025c6d) popup_mobtv_noti_window_t

0x35f3,	// (0x000195d9) bg_popup_mobtv_noti_window_pane_g1

0x06b0,	// (0x00016696) sc_clock_pane

0x06b0,	// (0x00016696) main_fs_bigclock_pane

0xd2ea,	// (0x000232d0) blid2_tripm_pane_t4_ParamLimits

0xd2ea,	// (0x000232d0) blid2_tripm_pane_t4

0xdb47,	// (0x00023b2d) sc_clock_pane_g1_ParamLimits

0xdb47,	// (0x00023b2d) sc_clock_pane_g1

0xdb55,	// (0x00023b3b) sc_clock_pane_t1_ParamLimits

0xdb55,	// (0x00023b3b) sc_clock_pane_t1

0xdb68,	// (0x00023b4e) sc_clock_pane_t2_ParamLimits

0xdb68,	// (0x00023b4e) sc_clock_pane_t2

0xdb7a,	// (0x00023b60) sc_clock_pane_t3_ParamLimits

0xdb7a,	// (0x00023b60) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x00025c72) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x00025c72) sc_clock_pane_t

0xe834,	// (0x0002481a) main_fs_bigclock_indicator_pane_ParamLimits

0xe834,	// (0x0002481a) main_fs_bigclock_indicator_pane

0xdbfe,	// (0x00023be4) main_fs_bigclock_pane_g1_ParamLimits

0xdbfe,	// (0x00023be4) main_fs_bigclock_pane_g1

0xe840,	// (0x00024826) main_fs_bigclock_pane_t1_ParamLimits

0xe840,	// (0x00024826) main_fs_bigclock_pane_t1

0xe852,	// (0x00024838) main_fs_bigclock_pane_t2_ParamLimits

0xe852,	// (0x00024838) main_fs_bigclock_pane_t2

0xe866,	// (0x0002484c) main_fs_bigclock_pane_t3_ParamLimits

0xe866,	// (0x0002484c) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x00025e6c) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x00025e6c) main_fs_bigclock_pane_t

0x5fad,	// (0x0001bf93) main_fs_bigclock_indicator_pane_g1

0x50a9,	// (0x0001b08f) ncim_query_content_pane_g2_ParamLimits

0x50a9,	// (0x0001b08f) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x00025bff) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x00025bff) ncim_query_content_pane_g

0xdb8e,	// (0x00023b74) sc_clock_pane_t4_ParamLimits

0xdb8e,	// (0x00023b74) sc_clock_pane_t4

0x0720,	// (0x00016706) main_radioblah_pane

0x4205,	// (0x0001a1eb) cell_call4_button_pane_t1_copy1_ParamLimits

0x4205,	// (0x0001a1eb) cell_call4_button_pane_t1_copy1

0xd862,	// (0x00023848) main_ncimui_pane_t1_ParamLimits

0xd862,	// (0x00023848) main_ncimui_pane_t1

0xd874,	// (0x0002385a) main_ncimui_pane_t2_ParamLimits

0xd874,	// (0x0002385a) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x00025bf8) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x00025bf8) main_ncimui_pane_t

0x54dd,	// (0x0001b4c3) main_radioblah_anim_pane_ParamLimits

0x54dd,	// (0x0001b4c3) main_radioblah_anim_pane

0x54ee,	// (0x0001b4d4) main_radioblah_info_pane_ParamLimits

0x54ee,	// (0x0001b4d4) main_radioblah_info_pane

0x5502,	// (0x0001b4e8) main_radioblah_pane_t1_ParamLimits

0x5502,	// (0x0001b4e8) main_radioblah_pane_t1

0x551e,	// (0x0001b504) main_radioblah_pane_t2_ParamLimits

0x551e,	// (0x0001b504) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x00025c93) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x00025c93) main_radioblah_pane_t

0xdc50,	// (0x00023c36) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdc50,	// (0x00023c36) main_radioblah_rocker_ctrl_pane

0x5566,	// (0x0001b54c) main_radioblah_info_pane_t1_ParamLimits

0x5566,	// (0x0001b54c) main_radioblah_info_pane_t1

0xdc95,	// (0x00023c7b) main_radioblah_info_pane_t2_ParamLimits

0xdc95,	// (0x00023c7b) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x00025c9c) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x00025c9c) main_radioblah_info_pane_t

0x35f3,	// (0x000195d9) main_radioblah_rocker_ctrl_pane_g1

0xdd45,	// (0x00023d2b) main_radioblah_rocker_ctrl_pane_g2

0xdd4d,	// (0x00023d33) main_radioblah_rocker_ctrl_pane_g3

0xdd55,	// (0x00023d3b) main_radioblah_rocker_ctrl_pane_g4

0xdd5d,	// (0x00023d43) main_radioblah_rocker_ctrl_pane_g5

0xdd65,	// (0x00023d4b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x00025ca5) main_radioblah_rocker_ctrl_pane_g

0xd822,	// (0x00023808) main_cset_text2_pane_t1_copy1_ParamLimits

0x7d91,	// (0x0001dd77) cam4_image_uncrop_qvga_pane

0x7ec2,	// (0x0001dea8) vid4_image_uncrop_qcif_pane

0x84dd,	// (0x0001e4c3) cam6_image_uncrop_qvga_pane_ParamLimits

0x84dd,	// (0x0001e4c3) cam6_image_uncrop_qvga_pane

0x4ced,	// (0x0001acd3) vid6_image_uncrop_qcif_pane_ParamLimits

0x4ced,	// (0x0001acd3) vid6_image_uncrop_qcif_pane

0x06b0,	// (0x00016696) bg_popup_preview_window_pane_cp03

0x5045,	// (0x0001b02b) list_cset_text2_pane

0x504d,	// (0x0001b033) main_cset6_text2_pane_g1

0x5055,	// (0x0001b03b) main_cset6_text2_pane_t1

0xdd6d,	// (0x00023d53) list_cset_text2_pane_t1_ParamLimits

0xdd6d,	// (0x00023d53) list_cset_text2_pane_t1

0x0720,	// (0x00016706) main_radioblah_pane_ParamLimits

0xdaed,	// (0x00023ad3) main_mobtv_info_pane_t3_ParamLimits

0xdaed,	// (0x00023ad3) main_mobtv_info_pane_t3

0xdc3e,	// (0x00023c24) main_radioblah_pane_g1

0xdc69,	// (0x00023c4f) main_radioblah_info_pane_g1

0xdcea,	// (0x00023cd0) main_radioblah_info_pane_t3_ParamLimits

0xdcea,	// (0x00023cd0) main_radioblah_info_pane_t3

0x9e51,	// (0x0001fe37) highlight_cell_cale_month_pane_ParamLimits

0x9e51,	// (0x0001fe37) highlight_cell_cale_month_pane

0x06b0,	// (0x00016696) main_phob_fisheye_pane

0x394d,	// (0x00019933) scroll_pane_cp0031_ParamLimits

0x394d,	// (0x00019933) scroll_pane_cp0031

0x4dfb,	// (0x0001ade1) wait_bar_pane_cp08_ParamLimits

0xd5e3,	// (0x000235c9) cset_list_set_pane_copy1_ParamLimits

0x55a0,	// (0x0001b586) highlight_cell_cale_month_pane_g1

0xdd8a,	// (0x00023d70) highlight_cell_cale_month_pane_t1

0x4975,	// (0x0001a95b) list_gen_pane_cp01

0x44a5,	// (0x0001a48b) scroll_pane_01

0xdd98,	// (0x00023d7e) list_single_double_fisheye_pane

0xdda1,	// (0x00023d87) list_double_fisheye_pane_g1_ParamLimits

0xdda1,	// (0x00023d87) list_double_fisheye_pane_g1

0xddad,	// (0x00023d93) list_double_fisheye_pane_g2_ParamLimits

0xddad,	// (0x00023d93) list_double_fisheye_pane_g2

0xddc1,	// (0x00023da7) list_double_fisheye_pane_g3_ParamLimits

0xddc1,	// (0x00023da7) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x00025cb2) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x00025cb2) list_double_fisheye_pane_g

0xddea,	// (0x00023dd0) list_double_fisheye_pane_t1_ParamLimits

0xddea,	// (0x00023dd0) list_double_fisheye_pane_t1

0xde05,	// (0x00023deb) list_double_fisheye_pane_t2_ParamLimits

0xde05,	// (0x00023deb) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x00025cbd) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x00025cbd) list_double_fisheye_pane_t

0x06b0,	// (0x00016696) main_call5_pane

0xdbb4,	// (0x00023b9a) sc_swipe_pane_ParamLimits

0xdbb4,	// (0x00023b9a) sc_swipe_pane

0xde33,	// (0x00023e19) call5_image_pane_ParamLimits

0xde33,	// (0x00023e19) call5_image_pane

0xde43,	// (0x00023e29) call5_swipe_1_pane_ParamLimits

0xde43,	// (0x00023e29) call5_swipe_1_pane

0xde4f,	// (0x00023e35) call5_swipe_2_pane_ParamLimits

0xde4f,	// (0x00023e35) call5_swipe_2_pane

0xde69,	// (0x00023e4f) popup_call5_audio_first_window_ParamLimits

0xde69,	// (0x00023e4f) popup_call5_audio_first_window

0x385f,	// (0x00019845) call5_swipe_1_pane_g1_ParamLimits

0x385f,	// (0x00019845) call5_swipe_1_pane_g1

0x55a8,	// (0x0001b58e) call5_swipe_1_pane_g2_ParamLimits

0x55a8,	// (0x0001b58e) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x00025cc2) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x00025cc2) call5_swipe_1_pane_g

0x55b4,	// (0x0001b59a) call5_swipe_1_pane_t1_ParamLimits

0x55b4,	// (0x0001b59a) call5_swipe_1_pane_t1

0x385f,	// (0x00019845) call5_swipe_2_pane_g1_ParamLimits

0x385f,	// (0x00019845) call5_swipe_2_pane_g1

0x55c9,	// (0x0001b5af) call5_swipe_2_pane_g2_ParamLimits

0x55c9,	// (0x0001b5af) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x00025cc7) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x00025cc7) call5_swipe_2_pane_g

0x55d5,	// (0x0001b5bb) call5_swipe_2_pane_t1_ParamLimits

0x55d5,	// (0x0001b5bb) call5_swipe_2_pane_t1

0x55ea,	// (0x0001b5d0) sc_swipe_pane_g1_ParamLimits

0x55ea,	// (0x0001b5d0) sc_swipe_pane_g1

0x55f7,	// (0x0001b5dd) sc_swipe_pane_g2_ParamLimits

0x55f7,	// (0x0001b5dd) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x00025ccc) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x00025ccc) sc_swipe_pane_g

0x5603,	// (0x0001b5e9) sc_swipe_pane_t1_ParamLimits

0x5603,	// (0x0001b5e9) sc_swipe_pane_t1

0x06b0,	// (0x00016696) main_cmail_launcher_pane

0xde77,	// (0x00023e5d) aid_size_cell_cmail_l_ParamLimits

0xde77,	// (0x00023e5d) aid_size_cell_cmail_l

0xde87,	// (0x00023e6d) grid_cmail_l_pane_ParamLimits

0xde87,	// (0x00023e6d) grid_cmail_l_pane

0xde97,	// (0x00023e7d) cell_cmail_l_pane_ParamLimits

0xde97,	// (0x00023e7d) cell_cmail_l_pane

0xdeab,	// (0x00023e91) cell_cmail_l_pane_g1_ParamLimits

0xdeab,	// (0x00023e91) cell_cmail_l_pane_g1

0xdeb7,	// (0x00023e9d) cell_cmail_l_pane_t1_ParamLimits

0xdeb7,	// (0x00023e9d) cell_cmail_l_pane_t1

0x5618,	// (0x0001b5fe) cell_cmail_l_pane_t2_ParamLimits

0x5618,	// (0x0001b5fe) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x00025cd1) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x00025cd1) cell_cmail_l_pane_t

0x0720,	// (0x00016706) grid_highlight_pane_cp018_ParamLimits

0x0720,	// (0x00016706) grid_highlight_pane_cp018

0x8622,	// (0x0001e608) main2_pane_ParamLimits

0x8622,	// (0x0001e608) main2_pane

0x0f52,	// (0x00016f38) popup_sp_fs_action_menu_bg_pane_g1

0x0f5a,	// (0x00016f40) popup_sp_fs_action_menu_bg_pane_g2

0x0f62,	// (0x00016f48) popup_sp_fs_action_menu_bg_pane_g3

0x0f6a,	// (0x00016f50) popup_sp_fs_action_menu_bg_pane_g4

0x0f72,	// (0x00016f58) popup_sp_fs_action_menu_bg_pane_g5

0x0f7a,	// (0x00016f60) popup_sp_fs_action_menu_bg_pane_g6

0x0f82,	// (0x00016f68) popup_sp_fs_action_menu_bg_pane_g7

0x0f8a,	// (0x00016f70) popup_sp_fs_action_menu_bg_pane_g8

0x0f92,	// (0x00016f78) popup_sp_fs_action_menu_bg_pane_g9

0x0f9a,	// (0x00016f80) popup_sp_fs_action_menu_bg_pane_g10

0x0f9a,	// (0x00016f80) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x000251a1) popup_sp_fs_action_menu_bg_pane_g

0x116a,	// (0x00017150) list_medium_line_x2_t3_g3_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x2_t3_g3_g1

0x1176,	// (0x0001715c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1176,	// (0x0001715c) list_medium_line_x2_t3_g3_g2

0x1182,	// (0x00017168) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1182,	// (0x00017168) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00025251) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00025251) list_medium_line_x2_t3_g3_g

0x118e,	// (0x00017174) list_medium_line_x2_t3_g3_t1_ParamLimits

0x118e,	// (0x00017174) list_medium_line_x2_t3_g3_t1

0x917f,	// (0x0001f165) list_medium_line_x2_t3_g3_t2_ParamLimits

0x917f,	// (0x0001f165) list_medium_line_x2_t3_g3_t2

0x11a3,	// (0x00017189) list_medium_line_x2_t3_g3_t3_ParamLimits

0x11a3,	// (0x00017189) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00025258) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00025258) list_medium_line_x2_t3_g3_t

0x116a,	// (0x00017150) list_medium_line_x2_t3_g2_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x2_t3_g2_g1

0x1182,	// (0x00017168) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1182,	// (0x00017168) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0002525f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0002525f) list_medium_line_x2_t3_g2_g

0x11b8,	// (0x0001719e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x11b8,	// (0x0001719e) list_medium_line_x2_t3_g2_t1

0x11ce,	// (0x000171b4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x11ce,	// (0x000171b4) list_medium_line_x2_t3_g2_t2

0x11a3,	// (0x00017189) list_medium_line_x2_t3_g2_t3_ParamLimits

0x11a3,	// (0x00017189) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00025264) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00025264) list_medium_line_x2_t3_g2_t

0x116a,	// (0x00017150) list_medium_line_x2_t4_g4_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x2_t4_g4_g1

0x11e0,	// (0x000171c6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x11e0,	// (0x000171c6) list_medium_line_x2_t4_g4_g2

0x1176,	// (0x0001715c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1176,	// (0x0001715c) list_medium_line_x2_t4_g4_g3

0x11ec,	// (0x000171d2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x11ec,	// (0x000171d2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0002526b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0002526b) list_medium_line_x2_t4_g4_g

0x9191,	// (0x0001f177) list_medium_line_x2_t4_g4_t1_ParamLimits

0x9191,	// (0x0001f177) list_medium_line_x2_t4_g4_t1

0x91ab,	// (0x0001f191) list_medium_line_x2_t4_g4_t2_ParamLimits

0x91ab,	// (0x0001f191) list_medium_line_x2_t4_g4_t2

0x91c1,	// (0x0001f1a7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x91c1,	// (0x0001f1a7) list_medium_line_x2_t4_g4_t3

0x11f8,	// (0x000171de) list_medium_line_x2_t4_g4_t4_ParamLimits

0x11f8,	// (0x000171de) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00025274) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00025274) list_medium_line_x2_t4_g4_t

0x116a,	// (0x00017150) list_medium_line_x2_t2_g4_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x2_t2_g4_g1

0x11e0,	// (0x000171c6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x11e0,	// (0x000171c6) list_medium_line_x2_t2_g4_g2

0x1176,	// (0x0001715c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1176,	// (0x0001715c) list_medium_line_x2_t2_g4_g3

0x1182,	// (0x00017168) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1182,	// (0x00017168) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x000252db) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x000252db) list_medium_line_x2_t2_g4_g

0x14e8,	// (0x000174ce) list_medium_line_x2_t2_g4_t1_ParamLimits

0x14e8,	// (0x000174ce) list_medium_line_x2_t2_g4_t1

0x11a3,	// (0x00017189) list_medium_line_x2_t2_g4_t2_ParamLimits

0x11a3,	// (0x00017189) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x000252e4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x000252e4) list_medium_line_x2_t2_g4_t

0x116a,	// (0x00017150) list_medium_line_x2_t2_g3_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x2_t2_g3_g1

0x1176,	// (0x0001715c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1176,	// (0x0001715c) list_medium_line_x2_t2_g3_g2

0x1182,	// (0x00017168) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1182,	// (0x00017168) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00025251) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00025251) list_medium_line_x2_t2_g3_g

0x14fd,	// (0x000174e3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x14fd,	// (0x000174e3) list_medium_line_x2_t2_g3_t1

0x11a3,	// (0x00017189) list_medium_line_x2_t2_g3_t2_ParamLimits

0x11a3,	// (0x00017189) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000252e9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000252e9) list_medium_line_x2_t2_g3_t

0x9fb9,	// (0x0001ff9f) main_sp_fs_list_pane_ParamLimits

0x9fb9,	// (0x0001ff9f) main_sp_fs_list_pane

0x9fc5,	// (0x0001ffab) sp_fs_scroll_pane_ParamLimits

0x9fc5,	// (0x0001ffab) sp_fs_scroll_pane

0x9fd1,	// (0x0001ffb7) list_medium_line_x2_t3_t1

0x9fe1,	// (0x0001ffc7) list_medium_line_x2_t3_t2

0x1765,	// (0x0001774b) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00025334) list_medium_line_x2_t3_t

0x9fef,	// (0x0001ffd5) list_medium_line_x3_t4_t1

0x9fff,	// (0x0001ffe5) list_medium_line_x3_t4_t2

0x1773,	// (0x00017759) list_medium_line_x3_t4_t3

0x1765,	// (0x0001774b) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0002533b) list_medium_line_x3_t4_t

0xa00d,	// (0x0001fff3) list_medium_line_x4_t5_t1

0xa01d,	// (0x00020003) list_medium_line_x4_t5_t2

0x1773,	// (0x00017759) list_medium_line_x4_t5_t3

0x1781,	// (0x00017767) list_medium_line_x4_t5_t4

0x1765,	// (0x0001774b) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00025344) list_medium_line_x4_t5_t

0x116a,	// (0x00017150) list_medium_line_t4_g4_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_t4_g4_g1

0x11ec,	// (0x000171d2) list_medium_line_t4_g4_g2_ParamLimits

0x11ec,	// (0x000171d2) list_medium_line_t4_g4_g2

0x178f,	// (0x00017775) list_medium_line_t4_g4_g3_ParamLimits

0x178f,	// (0x00017775) list_medium_line_t4_g4_g3

0x1182,	// (0x00017168) list_medium_line_t4_g4_g4_ParamLimits

0x1182,	// (0x00017168) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0002534f) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0002534f) list_medium_line_t4_g4_g

0x179b,	// (0x00017781) list_medium_line_t4_g4_t1_ParamLimits

0x179b,	// (0x00017781) list_medium_line_t4_g4_t1

0x17b0,	// (0x00017796) list_medium_line_t4_g4_t2_ParamLimits

0x17b0,	// (0x00017796) list_medium_line_t4_g4_t2

0x17c5,	// (0x000177ab) list_medium_line_t4_g4_t3_ParamLimits

0x17c5,	// (0x000177ab) list_medium_line_t4_g4_t3

0x11a3,	// (0x00017189) list_medium_line_t4_g4_t4_ParamLimits

0x11a3,	// (0x00017189) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00025358) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00025358) list_medium_line_t4_g4_t

0xa0c9,	// (0x000200af) chi_dic_find_pane_g1

0xaff8,	// (0x00020fde) main_tport_pane

0x4606,	// (0x0001a5ec) list_medium_line_plain_t1

0x4658,	// (0x0001a63e) list_medium_line_t2_g2_g1_ParamLimits

0x4658,	// (0x0001a63e) list_medium_line_t2_g2_g1

0x4664,	// (0x0001a64a) list_medium_line_t2_g2_g2_ParamLimits

0x4664,	// (0x0001a64a) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00025a14) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00025a14) list_medium_line_t2_g2_g

0xccca,	// (0x00022cb0) list_medium_line_t2_g2_t1_ParamLimits

0xccca,	// (0x00022cb0) list_medium_line_t2_g2_t1

0xcce4,	// (0x00022cca) list_medium_line_t2_g2_t2_ParamLimits

0xcce4,	// (0x00022cca) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00025a19) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00025a19) list_medium_line_t2_g2_t

0x4a16,	// (0x0001a9fc) aid_sp_fs_list_icon_a_sm

0x4a1e,	// (0x0001aa04) aid_sp_fs_list_icon_d

0x4a26,	// (0x0001aa0c) aid_sp_fs_text_primary

0x4a2f,	// (0x0001aa15) aid_sp_fs_text_secondary

0x4a38,	// (0x0001aa1e) list_medium_line

0x4a38,	// (0x0001aa1e) list_medium_line_g2

0x4a38,	// (0x0001aa1e) list_medium_line_g3

0x4a38,	// (0x0001aa1e) list_medium_line_plain

0x4a38,	// (0x0001aa1e) list_medium_line_plain_t2

0x4a38,	// (0x0001aa1e) list_medium_line_plain_t3

0x4a38,	// (0x0001aa1e) list_medium_line_right_icon

0x4a38,	// (0x0001aa1e) list_medium_line_right_iconx2

0x4a38,	// (0x0001aa1e) list_medium_line_t2

0x4a38,	// (0x0001aa1e) list_medium_line_t2_g2

0x4a38,	// (0x0001aa1e) list_medium_line_t2_g3

0x4a38,	// (0x0001aa1e) list_medium_line_t2_right_icon

0x4a38,	// (0x0001aa1e) list_medium_line_t2_right_iconx2

0x4a38,	// (0x0001aa1e) list_medium_line_t3

0x4a38,	// (0x0001aa1e) list_medium_line_t3_g2

0x4a38,	// (0x0001aa1e) list_medium_line_t3_g3

0x4a38,	// (0x0001aa1e) list_medium_line_t3_right_iconx2

0x4a41,	// (0x0001aa27) list_medium_line_t4_g4

0x4a4a,	// (0x0001aa30) list_medium_line_x2

0x4a4a,	// (0x0001aa30) list_medium_line_x2_t2_g2

0x4a4a,	// (0x0001aa30) list_medium_line_x2_t2_g3

0x4a4a,	// (0x0001aa30) list_medium_line_x2_t2_g4

0x4a4a,	// (0x0001aa30) list_medium_line_x2_t3

0x4a4a,	// (0x0001aa30) list_medium_line_x2_t3_g2

0x4a4a,	// (0x0001aa30) list_medium_line_x2_t3_g3

0x4a4a,	// (0x0001aa30) list_medium_line_x2_t3_g4

0x4a4a,	// (0x0001aa30) list_medium_line_x2_t4_g2

0x4a4a,	// (0x0001aa30) list_medium_line_x2_t4_g4

0x4a53,	// (0x0001aa39) list_medium_line_x3

0x4a53,	// (0x0001aa39) list_medium_line_x3_t4

0x4a53,	// (0x0001aa39) list_medium_line_x3_t4_g4

0x4a41,	// (0x0001aa27) list_medium_line_x4_t4

0x4a41,	// (0x0001aa27) list_medium_line_x4_t4_g7

0x4a41,	// (0x0001aa27) list_medium_line_x4_t5

0x4a5c,	// (0x0001aa42) list_single_fs_dyc_pane_ParamLimits

0x4a5c,	// (0x0001aa42) list_single_fs_dyc_pane

0x116a,	// (0x00017150) list_medium_line_x4_t4_g7_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x4_t4_g7_g1

0x4f74,	// (0x0001af5a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4f74,	// (0x0001af5a) list_medium_line_x4_t4_g7_g2

0x4f80,	// (0x0001af66) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4f80,	// (0x0001af66) list_medium_line_x4_t4_g7_g3

0x4f8f,	// (0x0001af75) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4f8f,	// (0x0001af75) list_medium_line_x4_t4_g7_g4

0x4f9b,	// (0x0001af81) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4f9b,	// (0x0001af81) list_medium_line_x4_t4_g7_g5

0x4faa,	// (0x0001af90) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4faa,	// (0x0001af90) list_medium_line_x4_t4_g7_g6

0x4fb9,	// (0x0001af9f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4fb9,	// (0x0001af9f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x00025bde) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x00025bde) list_medium_line_x4_t4_g7_g

0x4fc5,	// (0x0001afab) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4fc5,	// (0x0001afab) list_medium_line_x4_t4_g7_t1

0x4fda,	// (0x0001afc0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4fda,	// (0x0001afc0) list_medium_line_x4_t4_g7_t2

0x4fef,	// (0x0001afd5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4fef,	// (0x0001afd5) list_medium_line_x4_t4_g7_t3

0x5004,	// (0x0001afea) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5004,	// (0x0001afea) list_medium_line_x4_t4_g7_t4

0x5016,	// (0x0001affc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5016,	// (0x0001affc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x00025bed) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x00025bed) list_medium_line_x4_t4_g7_t

0x5028,	// (0x0001b00e) list_single_dyc_row_pane_ParamLimits

0x5028,	// (0x0001b00e) list_single_dyc_row_pane

0xde27,	// (0x00023e0d) call5_gesture_pane_ParamLimits

0xde27,	// (0x00023e0d) call5_gesture_pane

0xde5b,	// (0x00023e41) call5_windows_pane_ParamLimits

0xde5b,	// (0x00023e41) call5_windows_pane

0xdecd,	// (0x00023eb3) call5_swipe_1_pane_cp_ParamLimits

0xdecd,	// (0x00023eb3) call5_swipe_1_pane_cp

0xded9,	// (0x00023ebf) call5_swipe_2_pane_cp_ParamLimits

0xded9,	// (0x00023ebf) call5_swipe_2_pane_cp

0x1c30,	// (0x00017c16) call5_image_pane_cp

0xdee5,	// (0x00023ecb) popup_call5_audio_first_window_cp_ParamLimits

0xdee5,	// (0x00023ecb) popup_call5_audio_first_window_cp

0x55ea,	// (0x0001b5d0) call5_swipe_1_pane_g1_cp_ParamLimits

0x55ea,	// (0x0001b5d0) call5_swipe_1_pane_g1_cp

0x562a,	// (0x0001b610) call5_swipe_1_pane_g2_cp

0x5603,	// (0x0001b5e9) call5_swipe_1_pane_t1_cp_ParamLimits

0x5603,	// (0x0001b5e9) call5_swipe_1_pane_t1_cp

0x55ea,	// (0x0001b5d0) call5_swipe_2_pane_g1_cp_ParamLimits

0x55ea,	// (0x0001b5d0) call5_swipe_2_pane_g1_cp

0x5632,	// (0x0001b618) call5_swipe_2_pane_g2_cp

0x563a,	// (0x0001b620) call5_swipe_2_pane_t1_cp_ParamLimits

0x563a,	// (0x0001b620) call5_swipe_2_pane_t1_cp

0x0720,	// (0x00016706) main_sp_fs_email_pane

0x564f,	// (0x0001b635) main_sp_fs_listscroll_pane_te

0x5658,	// (0x0001b63e) popup_sp_fs_action_menu_pane_ParamLimits

0x5658,	// (0x0001b63e) popup_sp_fs_action_menu_pane

0x35f3,	// (0x000195d9) bg_sp_fs_ctrlbar_pane_g1

0x569c,	// (0x0001b682) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x56a5,	// (0x0001b68b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x56ae,	// (0x0001b694) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x35f3,	// (0x000195d9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x00025cd6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x33d8,	// (0x000193be) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x33d8,	// (0x000193be) bg_sp_fs_ctrlbar_ddmenu_pane

0x56b7,	// (0x0001b69d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x56b7,	// (0x0001b69d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x56c3,	// (0x0001b6a9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x56c3,	// (0x0001b6a9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x00025cdf) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x00025cdf) main_sp_fs_ctrlbar_ddmenu_pane_g

0x56cf,	// (0x0001b6b5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x56cf,	// (0x0001b6b5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x56e9,	// (0x0001b6cf) list_medium_line_t2_right_icon_g1

0xdef3,	// (0x00023ed9) list_medium_line_t2_right_icon_t1

0xdf03,	// (0x00023ee9) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x00025ce4) list_medium_line_t2_right_icon_t

0x30ed,	// (0x000190d3) bg_sp_fs_ctrlbar_pane_ParamLimits

0x30ed,	// (0x000190d3) bg_sp_fs_ctrlbar_pane

0xdf68,	// (0x00023f4e) main_sp_fs_ctrlbar_button_pane_cp01

0xdf70,	// (0x00023f56) main_sp_fs_ctrlbar_ddmenu_pane

0x5729,	// (0x0001b70f) main_sp_fs_ctrlbar_pane_g1

0x5735,	// (0x0001b71b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x00025ce9) main_sp_fs_ctrlbar_pane_g

0x5741,	// (0x0001b727) main_sp_fs_ctrlbar_pane_t1

0xdf7a,	// (0x00023f60) main_sp_fs_ctrlbar_pane

0xdf96,	// (0x00023f7c) main_sp_fs_listscroll_pane_te_cp01

0xdfa7,	// (0x00023f8d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdfa7,	// (0x00023f8d) popup_sp_fs_action_menu_pane_cp01

0x0720,	// (0x00016706) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0720,	// (0x00016706) bg_sp_fs_highlight_list_pane_cp01

0x5756,	// (0x0001b73c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5756,	// (0x0001b73c) sp_fs_action_menu_list_gene_pane_g1

0x5765,	// (0x0001b74b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5765,	// (0x0001b74b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00025cee) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00025cee) sp_fs_action_menu_list_gene_pane_g

0x5772,	// (0x0001b758) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5772,	// (0x0001b758) sp_fs_action_menu_list_gene_pane_t1

0x578a,	// (0x0001b770) sp_fs_action_menu_list_gene_pane_ParamLimits

0x578a,	// (0x0001b770) sp_fs_action_menu_list_gene_pane

0x57ab,	// (0x0001b791) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x57ab,	// (0x0001b791) popup_sp_fs_action_menu_bg_pane

0x57b9,	// (0x0001b79f) sp_fs_action_menu_list_pane_ParamLimits

0x57b9,	// (0x0001b79f) sp_fs_action_menu_list_pane

0x57db,	// (0x0001b7c1) sp_fs_scroll_pane_cp01_ParamLimits

0x57db,	// (0x0001b7c1) sp_fs_scroll_pane_cp01

0xdfbf,	// (0x00023fa5) list_medium_line_plain_t2_t1

0xdfcf,	// (0x00023fb5) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x00025cf3) list_medium_line_plain_t2_t

0xdfdd,	// (0x00023fc3) list_medium_line_plain_t3_t1

0xdfed,	// (0x00023fd3) list_medium_line_plain_t3_t2

0xdffb,	// (0x00023fe1) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x00025cf8) list_medium_line_plain_t3_t

0x116a,	// (0x00017150) list_medium_line_x2_t2_g2_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x2_t2_g2_g1

0x1182,	// (0x00017168) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1182,	// (0x00017168) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0002525f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0002525f) list_medium_line_x2_t2_g2_g

0x179b,	// (0x00017781) list_medium_line_x2_t2_g2_t1_ParamLimits

0x179b,	// (0x00017781) list_medium_line_x2_t2_g2_t1

0x11a3,	// (0x00017189) list_medium_line_x2_t2_g2_t2_ParamLimits

0x11a3,	// (0x00017189) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00025cff) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00025cff) list_medium_line_x2_t2_g2_t

0x116a,	// (0x00017150) list_medium_line_x2_t4_g2_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x2_t4_g2_g1

0x1182,	// (0x00017168) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1182,	// (0x00017168) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x0002525f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x0002525f) list_medium_line_x2_t4_g2_g

0xe009,	// (0x00023fef) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe009,	// (0x00023fef) list_medium_line_x2_t4_g2_t1

0xe023,	// (0x00024009) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe023,	// (0x00024009) list_medium_line_x2_t4_g2_t2

0xe038,	// (0x0002401e) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe038,	// (0x0002401e) list_medium_line_x2_t4_g2_t3

0x11a3,	// (0x00017189) list_medium_line_x2_t4_g2_t4_ParamLimits

0x11a3,	// (0x00017189) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1e,	// (0x00025d04) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1e,	// (0x00025d04) list_medium_line_x2_t4_g2_t

0x5801,	// (0x0001b7e7) list_medium_line_t3_right_iconx2_g1

0x56e9,	// (0x0001b6cf) list_medium_line_t3_right_iconx2_g2

0xe04d,	// (0x00024033) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd27,	// (0x00025d0d) list_medium_line_t3_right_iconx2_g

0xe055,	// (0x0002403b) list_medium_line_t3_right_iconx2_t1

0xe065,	// (0x0002404b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2e,	// (0x00025d14) list_medium_line_t3_right_iconx2_t

0x116a,	// (0x00017150) list_medium_line_x3_t4_g4_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x3_t4_g4_g1

0x1176,	// (0x0001715c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1176,	// (0x0001715c) list_medium_line_x3_t4_g4_g2

0x11ec,	// (0x000171d2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x11ec,	// (0x000171d2) list_medium_line_x3_t4_g4_g3

0x5809,	// (0x0001b7ef) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5809,	// (0x0001b7ef) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd33,	// (0x00025d19) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd33,	// (0x00025d19) list_medium_line_x3_t4_g4_g

0xe073,	// (0x00024059) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe073,	// (0x00024059) list_medium_line_x3_t4_g4_t1

0xe08a,	// (0x00024070) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe08a,	// (0x00024070) list_medium_line_x3_t4_g4_t2

0x17b0,	// (0x00017796) list_medium_line_x3_t4_g4_t3_ParamLimits

0x17b0,	// (0x00017796) list_medium_line_x3_t4_g4_t3

0x5815,	// (0x0001b7fb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5815,	// (0x0001b7fb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3c,	// (0x00025d22) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3c,	// (0x00025d22) list_medium_line_x3_t4_g4_t

0xe09f,	// (0x00024085) list_single_dyc_row_text_pane_t1_ParamLimits

0xe09f,	// (0x00024085) list_single_dyc_row_text_pane_t1

0xe0d6,	// (0x000240bc) list_single_dyc_row_text_pane_t2_ParamLimits

0xe0d6,	// (0x000240bc) list_single_dyc_row_text_pane_t2

0x5832,	// (0x0001b818) list_single_dyc_row_text_pane_t3_ParamLimits

0x5832,	// (0x0001b818) list_single_dyc_row_text_pane_t3

0x0002,

0xfd45,	// (0x00025d2b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd45,	// (0x00025d2b) list_single_dyc_row_text_pane_t

0x5844,	// (0x0001b82a) list_single_dyc_row_pane_g1_ParamLimits

0x5844,	// (0x0001b82a) list_single_dyc_row_pane_g1

0x5850,	// (0x0001b836) list_single_dyc_row_pane_g2_ParamLimits

0x5850,	// (0x0001b836) list_single_dyc_row_pane_g2

0x585c,	// (0x0001b842) list_single_dyc_row_pane_g3_ParamLimits

0x585c,	// (0x0001b842) list_single_dyc_row_pane_g3

0x5868,	// (0x0001b84e) list_single_dyc_row_pane_g4_ParamLimits

0x5868,	// (0x0001b84e) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x00025d32) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x00025d32) list_single_dyc_row_pane_g

0x5874,	// (0x0001b85a) list_single_dyc_row_text_pane_ParamLimits

0x5874,	// (0x0001b85a) list_single_dyc_row_text_pane

0x06b0,	// (0x00016696) bg_sp_fs_scroll_pane

0x5893,	// (0x0001b879) thumb_sp_fs_scroll_pane

0x4658,	// (0x0001a63e) list_medium_line_g1_ParamLimits

0x4658,	// (0x0001a63e) list_medium_line_g1

0x589c,	// (0x0001b882) list_medium_line_t1_ParamLimits

0x589c,	// (0x0001b882) list_medium_line_t1

0x116a,	// (0x00017150) list_medium_line_x2_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x2_g1

0x1176,	// (0x0001715c) list_medium_line_x2_g2_ParamLimits

0x1176,	// (0x0001715c) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x00025d3b) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x00025d3b) list_medium_line_x2_g

0x58b1,	// (0x0001b897) list_medium_line_x2_t1_ParamLimits

0x58b1,	// (0x0001b897) list_medium_line_x2_t1

0x116a,	// (0x00017150) list_medium_line_x3_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x3_g1

0x1176,	// (0x0001715c) list_medium_line_x3_g2_ParamLimits

0x1176,	// (0x0001715c) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x00025d3b) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x00025d3b) list_medium_line_x3_g

0x58b1,	// (0x0001b897) list_medium_line_x3_t1_ParamLimits

0x58b1,	// (0x0001b897) list_medium_line_x3_t1

0x58c7,	// (0x0001b8ad) thumb_sp_fs_scroll_pane_g1

0x58d0,	// (0x0001b8b6) thumb_sp_fs_scroll_pane_g2

0x58d9,	// (0x0001b8bf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00025d40) thumb_sp_fs_scroll_pane_g

0x58c7,	// (0x0001b8ad) bg_sp_fs_scroll_pane_g1

0x58d0,	// (0x0001b8b6) bg_sp_fs_scroll_pane_g2

0x58d9,	// (0x0001b8bf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00025d40) bg_sp_fs_scroll_pane_g

0x116a,	// (0x00017150) list_medium_line_x2_t3_g4_g1_ParamLimits

0x116a,	// (0x00017150) list_medium_line_x2_t3_g4_g1

0x11e0,	// (0x000171c6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x11e0,	// (0x000171c6) list_medium_line_x2_t3_g4_g2

0x1176,	// (0x0001715c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1176,	// (0x0001715c) list_medium_line_x2_t3_g4_g3

0x1182,	// (0x00017168) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1182,	// (0x00017168) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x000252db) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x000252db) list_medium_line_x2_t3_g4_g

0xe130,	// (0x00024116) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe130,	// (0x00024116) list_medium_line_x2_t3_g4_t1

0xe146,	// (0x0002412c) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe146,	// (0x0002412c) list_medium_line_x2_t3_g4_t2

0x11a3,	// (0x00017189) list_medium_line_x2_t3_g4_t3_ParamLimits

0x11a3,	// (0x00017189) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x00025d47) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x00025d47) list_medium_line_x2_t3_g4_t

0x4658,	// (0x0001a63e) list_medium_line_g2_g1_ParamLimits

0x4658,	// (0x0001a63e) list_medium_line_g2_g1

0x4664,	// (0x0001a64a) list_medium_line_g2_g2_ParamLimits

0x4664,	// (0x0001a64a) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00025a14) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00025a14) list_medium_line_g2_g

0x58e2,	// (0x0001b8c8) list_medium_line_g2_t1_ParamLimits

0x58e2,	// (0x0001b8c8) list_medium_line_g2_t1

0x4658,	// (0x0001a63e) list_medium_line_t3_g2_g1_ParamLimits

0x4658,	// (0x0001a63e) list_medium_line_t3_g2_g1

0x4664,	// (0x0001a64a) list_medium_line_t3_g2_g2_ParamLimits

0x4664,	// (0x0001a64a) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00025a14) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00025a14) list_medium_line_t3_g2_g

0xe160,	// (0x00024146) list_medium_line_t3_g2_t1_ParamLimits

0xe160,	// (0x00024146) list_medium_line_t3_g2_t1

0xe177,	// (0x0002415d) list_medium_line_t3_g2_t2_ParamLimits

0xe177,	// (0x0002415d) list_medium_line_t3_g2_t2

0xe18c,	// (0x00024172) list_medium_line_t3_g2_t3_ParamLimits

0xe18c,	// (0x00024172) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x00025d4e) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x00025d4e) list_medium_line_t3_g2_t

0x56e9,	// (0x0001b6cf) list_medium_line_right_icon_g1

0x58f7,	// (0x0001b8dd) list_medium_line_right_icon_t1

0x4658,	// (0x0001a63e) list_medium_line_t2_g1_ParamLimits

0x4658,	// (0x0001a63e) list_medium_line_t2_g1

0xe1a1,	// (0x00024187) list_medium_line_t2_t1_ParamLimits

0xe1a1,	// (0x00024187) list_medium_line_t2_t1

0xe1bb,	// (0x000241a1) list_medium_line_t2_t2_ParamLimits

0xe1bb,	// (0x000241a1) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x00025d55) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x00025d55) list_medium_line_t2_t

0x4658,	// (0x0001a63e) list_medium_line_t3_g1_ParamLimits

0x4658,	// (0x0001a63e) list_medium_line_t3_g1

0xe1d0,	// (0x000241b6) list_medium_line_t3_t1_ParamLimits

0xe1d0,	// (0x000241b6) list_medium_line_t3_t1

0xe1ea,	// (0x000241d0) list_medium_line_t3_t2_ParamLimits

0xe1ea,	// (0x000241d0) list_medium_line_t3_t2

0xe1ff,	// (0x000241e5) list_medium_line_t3_t3_ParamLimits

0xe1ff,	// (0x000241e5) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x00025d5a) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x00025d5a) list_medium_line_t3_t

0x4658,	// (0x0001a63e) list_medium_line_g3_g1_ParamLimits

0x4658,	// (0x0001a63e) list_medium_line_g3_g1

0x5905,	// (0x0001b8eb) list_medium_line_g3_g2_ParamLimits

0x5905,	// (0x0001b8eb) list_medium_line_g3_g2

0x4664,	// (0x0001a64a) list_medium_line_g3_g3_ParamLimits

0x4664,	// (0x0001a64a) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x00025d61) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x00025d61) list_medium_line_g3_g

0x5911,	// (0x0001b8f7) list_medium_line_g3_t1_ParamLimits

0x5911,	// (0x0001b8f7) list_medium_line_g3_t1

0x4658,	// (0x0001a63e) list_medium_line_t2_g3_g1_ParamLimits

0x4658,	// (0x0001a63e) list_medium_line_t2_g3_g1

0x5905,	// (0x0001b8eb) list_medium_line_t2_g3_g2_ParamLimits

0x5905,	// (0x0001b8eb) list_medium_line_t2_g3_g2

0x4664,	// (0x0001a64a) list_medium_line_t2_g3_g3_ParamLimits

0x4664,	// (0x0001a64a) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x00025d61) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x00025d61) list_medium_line_t2_g3_g

0xe214,	// (0x000241fa) list_medium_line_t2_g3_t1_ParamLimits

0xe214,	// (0x000241fa) list_medium_line_t2_g3_t1

0xe22e,	// (0x00024214) list_medium_line_t2_g3_t2_ParamLimits

0xe22e,	// (0x00024214) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x00025d68) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x00025d68) list_medium_line_t2_g3_t

0x4658,	// (0x0001a63e) list_medium_line_t3_g3_g1_ParamLimits

0x4658,	// (0x0001a63e) list_medium_line_t3_g3_g1

0x5905,	// (0x0001b8eb) list_medium_line_t3_g3_g2_ParamLimits

0x5905,	// (0x0001b8eb) list_medium_line_t3_g3_g2

0x4664,	// (0x0001a64a) list_medium_line_t3_g3_g3_ParamLimits

0x4664,	// (0x0001a64a) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x00025d61) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x00025d61) list_medium_line_t3_g3_g

0xe243,	// (0x00024229) list_medium_line_t3_g3_t1_ParamLimits

0xe243,	// (0x00024229) list_medium_line_t3_g3_t1

0xe257,	// (0x0002423d) list_medium_line_t3_g3_t2_ParamLimits

0xe257,	// (0x0002423d) list_medium_line_t3_g3_t2

0xe269,	// (0x0002424f) list_medium_line_t3_g3_t3_ParamLimits

0xe269,	// (0x0002424f) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x00025d6d) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x00025d6d) list_medium_line_t3_g3_t

0x5801,	// (0x0001b7e7) list_medium_line_right_iconx2_g1

0x56e9,	// (0x0001b6cf) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00025d74) list_medium_line_right_iconx2_g

0x5926,	// (0x0001b90c) list_medium_line_right_iconx2_t1

0x5801,	// (0x0001b7e7) list_medium_line_t2_right_iconx2_g1

0x56e9,	// (0x0001b6cf) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x00025d74) list_medium_line_t2_right_iconx2_g

0xe27b,	// (0x00024261) list_medium_line_t2_right_iconx2_t1

0xe28b,	// (0x00024271) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x00025d79) list_medium_line_t2_right_iconx2_t

0x5934,	// (0x0001b91a) list_medium_line_x4_t4_t1

0xe299,	// (0x0002427f) list_medium_line_x4_t4_t2

0xe2a9,	// (0x0002428f) list_medium_line_x4_t4_t3

0xe2b9,	// (0x0002429f) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x00025d7e) list_medium_line_x4_t4_t

0xe2f2,	// (0x000242d8) tport_appsw_pane_ParamLimits

0xe2f2,	// (0x000242d8) tport_appsw_pane

0xe2fe,	// (0x000242e4) tport_contact_pane_ParamLimits

0xe2fe,	// (0x000242e4) tport_contact_pane

0xe30e,	// (0x000242f4) tport_listscroll_pane_ParamLimits

0xe30e,	// (0x000242f4) tport_listscroll_pane

0xe31e,	// (0x00024304) cell_tport_appsw_pane_ParamLimits

0xe31e,	// (0x00024304) cell_tport_appsw_pane

0x38d0,	// (0x000198b6) tport_appsw_pane_g1_ParamLimits

0x38d0,	// (0x000198b6) tport_appsw_pane_g1

0x5942,	// (0x0001b928) tport_contact_pane_g1

0x512f,	// (0x0001b115) tport_contact_pane_t1

0x594b,	// (0x0001b931) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x00025d87) tport_contact_pane_t

0x5959,	// (0x0001b93f) list_tport_pane

0x5962,	// (0x0001b948) scroll_pane_cp_030

0x5973,	// (0x0001b959) cell_tport_appsw_pane_g1

0x5983,	// (0x0001b969) cell_tport_appsw_pane_t1

0x06b0,	// (0x00016696) grid_highlight_pane_cp019

0xe349,	// (0x0002432f) list_tport_double_graphic_pane_ParamLimits

0xe349,	// (0x0002432f) list_tport_double_graphic_pane

0x0720,	// (0x00016706) list_highlight_pane_cp023_ParamLimits

0x0720,	// (0x00016706) list_highlight_pane_cp023

0xe35b,	// (0x00024341) list_tport_double_graphic_pane_g1_ParamLimits

0xe35b,	// (0x00024341) list_tport_double_graphic_pane_g1

0xe368,	// (0x0002434e) list_tport_double_graphic_pane_t1_ParamLimits

0xe368,	// (0x0002434e) list_tport_double_graphic_pane_t1

0xe37d,	// (0x00024363) list_tport_double_graphic_pane_t2_ParamLimits

0xe37d,	// (0x00024363) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x00025d93) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x00025d93) list_tport_double_graphic_pane_t

0x06b0,	// (0x00016696) main_cale_note_pane

0x810e,	// (0x0001e0f4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x810e,	// (0x0001e0f4) cell_vitu2_function_top_wide_pane_cp01

0xdb01,	// (0x00023ae7) wait_bar_pane_cp05_ParamLimits

0x06b0,	// (0x00016696) listscroll_cmail_pane

0x5999,	// (0x0001b97f) list_cmail_pane

0xe399,	// (0x0002437f) list_cmail_body_pane

0xe3b6,	// (0x0002439c) list_single_cmail_header_caption_pane

0xe3db,	// (0x000243c1) list_single_cmail_header_detail_pane_ParamLimits

0xe3db,	// (0x000243c1) list_single_cmail_header_detail_pane

0xe40e,	// (0x000243f4) list_single_cmail_header_caption_pane_t1

0xe41c,	// (0x00024402) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe41c,	// (0x00024402) list_single_cmail_header_detail_pane_g1

0x59ba,	// (0x0001b9a0) list_single_cmail_header_detail_pane_g2_ParamLimits

0x59ba,	// (0x0001b9a0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x00025d98) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x00025d98) list_single_cmail_header_detail_pane_g

0x59d3,	// (0x0001b9b9) list_single_cmail_header_detail_pane_t1_ParamLimits

0x59d3,	// (0x0001b9b9) list_single_cmail_header_detail_pane_t1

0x5a09,	// (0x0001b9ef) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5a09,	// (0x0001b9ef) list_single_cmail_header_editor_pane_bg

0x52b0,	// (0x0001b296) list_cmail_body_pane_g1

0x5a1b,	// (0x0001ba01) list_cmail_body_pane_t1

0x438b,	// (0x0001a371) list_single_cmail_header_editor_pane_bg_g1

0x1407,	// (0x000173ed) list_single_cmail_header_editor_pane_bg_g1_copy1

0x439b,	// (0x0001a381) list_single_cmail_header_editor_pane_bg_g1_copy2

0x4393,	// (0x0001a379) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4630,	// (0x0001a616) list_single_cmail_header_editor_pane_bg_g1_copy4

0x43bb,	// (0x0001a3a1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x43ab,	// (0x0001a391) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x43b3,	// (0x0001a399) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x13e7,	// (0x000173cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe456,	// (0x0002443c) calenote_gesture_pane_ParamLimits

0xe456,	// (0x0002443c) calenote_gesture_pane

0xe470,	// (0x00024456) calenote_window_pane_ParamLimits

0xe470,	// (0x00024456) calenote_window_pane

0x5a42,	// (0x0001ba28) popup_note_window_cp01

0xe488,	// (0x0002446e) calenote_swipe_1_pane_ParamLimits

0xe488,	// (0x0002446e) calenote_swipe_1_pane

0xded9,	// (0x00023ebf) calenote_swipe_2_pane_ParamLimits

0xded9,	// (0x00023ebf) calenote_swipe_2_pane

0x55ea,	// (0x0001b5d0) calenote_swipe_1_pane_g1_ParamLimits

0x55ea,	// (0x0001b5d0) calenote_swipe_1_pane_g1

0x55f7,	// (0x0001b5dd) calenote_swipe_1_pane_g2_ParamLimits

0x55f7,	// (0x0001b5dd) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x00025ccc) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x00025ccc) calenote_swipe_1_pane_g

0x5a54,	// (0x0001ba3a) calenote_swipe_1_pane_t1_ParamLimits

0x5a54,	// (0x0001ba3a) calenote_swipe_1_pane_t1

0x55ea,	// (0x0001b5d0) calenote_swipe_2_pane_g1_ParamLimits

0x55ea,	// (0x0001b5d0) calenote_swipe_2_pane_g1

0x5a73,	// (0x0001ba59) calenote_swipe_2_pane_g2_ParamLimits

0x5a73,	// (0x0001ba59) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x00025da4) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x00025da4) calenote_swipe_2_pane_g

0x5a7f,	// (0x0001ba65) calenote_swipe_2_pane_t1_ParamLimits

0x5a7f,	// (0x0001ba65) calenote_swipe_2_pane_t1

0x06b0,	// (0x00016696) main_mup_navstr_pane

0xbcd7,	// (0x00021cbd) main_mup3_pane_t7_ParamLimits

0xbcd7,	// (0x00021cbd) main_mup3_pane_t7

0x7a20,	// (0x0001da06) main_mp4_pane_g6_ParamLimits

0x7a20,	// (0x0001da06) main_mp4_pane_g6

0x7d13,	// (0x0001dcf9) main_image3_pane_t4_ParamLimits

0x7d13,	// (0x0001dcf9) main_image3_pane_t4

0xe49b,	// (0x00024481) popup_navstr_preview_pane_ParamLimits

0xe49b,	// (0x00024481) popup_navstr_preview_pane

0xe4a7,	// (0x0002448d) scroll_navstr_pane_ParamLimits

0xe4a7,	// (0x0002448d) scroll_navstr_pane

0x06b0,	// (0x00016696) bg_popup_preview_window_pane_cp04

0x5aa6,	// (0x0001ba8c) popup_navstr_preview_pane_t1

0xe4b3,	// (0x00024499) scroll_navstr_pane_g1_ParamLimits

0xe4b3,	// (0x00024499) scroll_navstr_pane_g1

0xe4c0,	// (0x000244a6) scroll_navstr_pane_t1_ParamLimits

0xe4c0,	// (0x000244a6) scroll_navstr_pane_t1

0x5a4b,	// (0x0001ba31) bg_button_pane_cp014

0x5a4b,	// (0x0001ba31) bg_button_pane_cp030

0xddcd,	// (0x00023db3) list_double_fisheye_pane_g4_ParamLimits

0xddcd,	// (0x00023db3) list_double_fisheye_pane_g4

0xddd9,	// (0x00023dbf) list_double_fisheye_pane_g5_ParamLimits

0xddd9,	// (0x00023dbf) list_double_fisheye_pane_g5

0x59a1,	// (0x0001b987) sp_fs_scroll_pane_cp03

0x5729,	// (0x0001b70f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5735,	// (0x0001b71b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x00025ce9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5741,	// (0x0001b727) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe38f,	// (0x00024375) sp_fs_scroll_pane_cp02

0x1005,	// (0x00016feb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1005,	// (0x00016feb) popup_sp_fs_calendar_preview_list_single_pane

0x06b0,	// (0x00016696) main_cam6_pano_pane

0x0720,	// (0x00016706) main_mup3_pane_ParamLimits

0x06b0,	// (0x00016696) main_phacti_pane

0xd9d6,	// (0x000239bc) bg_button_pane_cp11

0xd9ee,	// (0x000239d4) main_mobtv_info_pane_g2_ParamLimits

0xd9ee,	// (0x000239d4) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x00025c49) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x00025c49) main_mobtv_info_pane_g

0xdba0,	// (0x00023b86) sc_clock_pane_t5_ParamLimits

0xdba0,	// (0x00023b86) sc_clock_pane_t5

0xdc3e,	// (0x00023c24) main_radioblah_pane_g1_ParamLimits

0x5536,	// (0x0001b51c) main_radioblah_pane_t3_ParamLimits

0x5536,	// (0x0001b51c) main_radioblah_pane_t3

0x554e,	// (0x0001b534) main_radioblah_pane_t4_ParamLimits

0x554e,	// (0x0001b534) main_radioblah_pane_t4

0xdc5c,	// (0x00023c42) main_radioblah_text_pane_ParamLimits

0xdc5c,	// (0x00023c42) main_radioblah_text_pane

0xdc69,	// (0x00023c4f) main_radioblah_info_pane_g1_ParamLimits

0xdcfe,	// (0x00023ce4) main_radioblah_info_pane_t4_ParamLimits

0xdcfe,	// (0x00023ce4) main_radioblah_info_pane_t4

0x0720,	// (0x00016706) main_sp_fs_calendar_pane

0xe4d2,	// (0x000244b8) main_phacti_pane_g1

0xe4da,	// (0x000244c0) phacti_note_pane_ParamLimits

0xe4da,	// (0x000244c0) phacti_note_pane

0x5abd,	// (0x0001baa3) phacti_term_pane_ParamLimits

0x5abd,	// (0x0001baa3) phacti_term_pane

0x5ad2,	// (0x0001bab8) phacti_note_pane_t1_ParamLimits

0x5ad2,	// (0x0001bab8) phacti_note_pane_t1

0x5ae9,	// (0x0001bacf) phacti_term_pane_g1

0x5af1,	// (0x0001bad7) phacti_term_pane_t1_ParamLimits

0x5af1,	// (0x0001bad7) phacti_term_pane_t1

0x5b1b,	// (0x0001bb01) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1162,	// (0x00017148) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x00025dae) popup_sp_fs_calendar_preview_list_single_pane_g

0x5b23,	// (0x0001bb09) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5b23,	// (0x0001bb09) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5b38,	// (0x0001bb1e) aid_popup_sp_fs_bg_corner_pane

0x35f3,	// (0x000195d9) popup_sp_fs_calendar_preview_bg_pane_g1

0x06b0,	// (0x00016696) popup_sp_fs_calendar_preview_bg_pane

0x5b40,	// (0x0001bb26) popup_sp_fs_calendar_preview_list_pane

0x0720,	// (0x00016706) bg_main_sp_fs_cale_pane_ParamLimits

0x0720,	// (0x00016706) bg_main_sp_fs_cale_pane

0x5b51,	// (0x0001bb37) listscroll_cale_mrui_pane_ParamLimits

0x5b51,	// (0x0001bb37) listscroll_cale_mrui_pane

0x5b65,	// (0x0001bb4b) listscroll_sp_fs_schedule_track_pane

0x5b6e,	// (0x0001bb54) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5b6e,	// (0x0001bb54) main_sp_fs_ctrlbar_pane_cp01

0x5b7f,	// (0x0001bb65) main_sp_fs_ribbon_pane

0x5b87,	// (0x0001bb6d) popup_sp_fs_cale_preview_window

0x5a29,	// (0x0001ba0f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x5a29,	// (0x0001ba0f) list_single_sp_fs_schedule_track_pane

0x3ac7,	// (0x00019aad) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3ac7,	// (0x00019aad) bg_sp_fs_highlight_list_pane_cp03

0xe519,	// (0x000244ff) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe519,	// (0x000244ff) list_single_sp_fs_schedule_track_pane_g1

0xe525,	// (0x0002450b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe525,	// (0x0002450b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x00025db3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x00025db3) list_single_sp_fs_schedule_track_pane_g

0xe531,	// (0x00024517) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe531,	// (0x00024517) list_single_sp_fs_schedule_track_pane_t1

0xe549,	// (0x0002452f) sp_fs_schedule_track_pane_ParamLimits

0xe549,	// (0x0002452f) sp_fs_schedule_track_pane

0x5b99,	// (0x0001bb7f) sp_fs_schedule_track_pane_g1

0x5ba1,	// (0x0001bb87) sp_fs_schedule_track_pane_g2

0x5ba9,	// (0x0001bb8f) sp_fs_schedule_track_pane_g3

0x5bb1,	// (0x0001bb97) sp_fs_schedule_track_pane_g4

0x5bb9,	// (0x0001bb9f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x00025db8) sp_fs_schedule_track_pane_g

0x438b,	// (0x0001a371) bg_sp_fs_schedule_viewer_highlight_g1

0x1407,	// (0x000173ed) bg_sp_fs_schedule_viewer_highlight_g2

0x4393,	// (0x0001a379) bg_sp_fs_schedule_viewer_highlight_g3

0x439b,	// (0x0001a381) bg_sp_fs_schedule_viewer_highlight_g4

0x4630,	// (0x0001a616) bg_sp_fs_schedule_viewer_highlight_g5

0x43ab,	// (0x0001a391) bg_sp_fs_schedule_viewer_highlight_g6

0x43b3,	// (0x0001a399) bg_sp_fs_schedule_viewer_highlight_g7

0x43bb,	// (0x0001a3a1) bg_sp_fs_schedule_viewer_highlight_g8

0x13e7,	// (0x000173cd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x00025dc3) bg_sp_fs_schedule_viewer_highlight_g

0x06b0,	// (0x00016696) bg_main_sp_fs_ribbon_pane

0xe559,	// (0x0002453f) main_sp_fs_ribbon_pane_g1

0x5bc1,	// (0x0001bba7) main_sp_fs_ribbon_pane_t1

0xe562,	// (0x00024548) main_sp_fs_ribbon_pane_t2

0x5bd0,	// (0x0001bbb6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x00025dd6) main_sp_fs_ribbon_pane_t

0x5bdf,	// (0x0001bbc5) main_sp_fs_ribbon_scheduler_pane

0x5be7,	// (0x0001bbcd) bg_main_sp_fs_ribbon_pane_g1

0x5bf0,	// (0x0001bbd6) bg_main_sp_fs_ribbon_pane_g2

0x5bf9,	// (0x0001bbdf) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x00025ddd) bg_main_sp_fs_ribbon_pane_g

0x5c01,	// (0x0001bbe7) main_sp_fs_ribbon_scheduler_pane_g1

0x5c0a,	// (0x0001bbf0) main_sp_fs_ribbon_scheduler_pane_g2

0x5c13,	// (0x0001bbf9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x00025de4) main_sp_fs_ribbon_scheduler_pane_g

0x5c1c,	// (0x0001bc02) list_cale_mrui_pane

0xe571,	// (0x00024557) sp_fs_scroll_pane_cp07_ParamLimits

0xe571,	// (0x00024557) sp_fs_scroll_pane_cp07

0xe587,	// (0x0002456d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe587,	// (0x0002456d) bg_sp_fs_schedule_viewer_highlight

0x5c25,	// (0x0001bc0b) list_single_sp_fs_schedule_track_pane_cp01

0x5c2d,	// (0x0001bc13) list_sp_fs_schedule_track_pane

0x5c35,	// (0x0001bc1b) sp_fs_scroll_pane_cp06_ParamLimits

0x5c35,	// (0x0001bc1b) sp_fs_scroll_pane_cp06

0x35f3,	// (0x000195d9) bgmain_sp_fs_calendar_pane_g1

0xe594,	// (0x0002457a) list_single_cale_mrui_pane_ParamLimits

0xe594,	// (0x0002457a) list_single_cale_mrui_pane

0x5c47,	// (0x0001bc2d) list_single_cale_mrui_row_pane_ParamLimits

0x5c47,	// (0x0001bc2d) list_single_cale_mrui_row_pane

0x5c54,	// (0x0001bc3a) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5c54,	// (0x0001bc3a) list_single_cale_mrui_row_pane_g1

0x5c8c,	// (0x0001bc72) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5c8c,	// (0x0001bc72) list_single_cale_mrui_row_pane_t1

0xe5b9,	// (0x0002459f) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe5b9,	// (0x0002459f) list_single_cale_mrui_row_pane_t2

0x5c9e,	// (0x0001bc84) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5c9e,	// (0x0001bc84) list_single_cale_mrui_row_pane_t3

0x5ccd,	// (0x0001bcb3) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5ccd,	// (0x0001bcb3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0a,	// (0x00025df0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0a,	// (0x00025df0) list_single_cale_mrui_row_pane_t

0xe61f,	// (0x00024605) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe61f,	// (0x00024605) list_single_cmail_header_editor_pane_bg_cp01

0xe63f,	// (0x00024625) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe63f,	// (0x00024625) list_single_cmail_header_editor_pane_bg_cp02

0xe65b,	// (0x00024641) main_radioblah_text_pane_t1_ParamLimits

0xe65b,	// (0x00024641) main_radioblah_text_pane_t1

0x5cfc,	// (0x0001bce2) cam6_indi_pane_cp01

0x5d04,	// (0x0001bcea) cam6_mode_pane_cp01

0x5d0c,	// (0x0001bcf2) cam6_pano_pane

0x5d15,	// (0x0001bcfb) cam6_zoom_pane_cp01

0x5d1d,	// (0x0001bd03) cam6_pano_image_pane

0x5d28,	// (0x0001bd0e) cam6_pano_pane_g1

0x52b0,	// (0x0001b296) cam6_pano_pane_g2

0x5d31,	// (0x0001bd17) cam6_pano_pane_g3

0x5d3a,	// (0x0001bd20) cam6_pano_pane_g4

0x3ba9,	// (0x00019b8f) cam6_pano_pane_g5

0x5d43,	// (0x0001bd29) cam6_pano_pane_g6

0x5071,	// (0x0001b057) cam6_pano_pane_g7

0x5d4d,	// (0x0001bd33) cam6_pano_pane_g8

0x5d56,	// (0x0001bd3c) cam6_pano_pane_g9

0x0008,

0xfe13,	// (0x00025df9) cam6_pano_pane_g

0x06b0,	// (0x00016696) main_browser_tag_pane

0x5a9e,	// (0x0001ba84) grid_navstr_albumart_pane

0x5d61,	// (0x0001bd47) cell_navstr_albumart_pane_ParamLimits

0x5d61,	// (0x0001bd47) cell_navstr_albumart_pane

0x5d84,	// (0x0001bd6a) cell_navstr_albumart_pane_g1

0x2f0a,	// (0x00018ef0) cell_navstr_albumart_pane_g2

0x2f1a,	// (0x00018f00) cell_navstr_albumart_pane_g3

0x2f12,	// (0x00018ef8) cell_navstr_albumart_pane_g4

0x0003,

0xfe26,	// (0x00025e0c) cell_navstr_albumart_pane_g

0xe676,	// (0x0002465c) bt_list_pane_ParamLimits

0xe676,	// (0x0002465c) bt_list_pane

0xe696,	// (0x0002467c) bt_list_pane_t1

0xe6a5,	// (0x0002468b) bt_list_pane_t2

0x0001,

0xfe2f,	// (0x00025e15) bt_list_pane_t

0x06b0,	// (0x00016696) main_cale_prevew_pane

0xe6b4,	// (0x0002469a) popup_cale_preview_window_ParamLimits

0xe6b4,	// (0x0002469a) popup_cale_preview_window

0x0720,	// (0x00016706) bg_popup_preview_window_pane_cp05_ParamLimits

0x0720,	// (0x00016706) bg_popup_preview_window_pane_cp05

0x5d8c,	// (0x0001bd72) list_cale_preview_pane_ParamLimits

0x5d8c,	// (0x0001bd72) list_cale_preview_pane

0x5fc5,	// (0x0001bfab) list_double_cale_preview_pane_ParamLimits

0x5fc5,	// (0x0001bfab) list_double_cale_preview_pane

0xe6cd,	// (0x000246b3) list_single_cale_preview_pane_ParamLimits

0xe6cd,	// (0x000246b3) list_single_cale_preview_pane

0xe6e3,	// (0x000246c9) list_single_cale_preview_pane_g1

0xe6eb,	// (0x000246d1) list_single_cale_preview_pane_t1_ParamLimits

0xe6eb,	// (0x000246d1) list_single_cale_preview_pane_t1

0xe700,	// (0x000246e6) list_double_cale_preview_pane_g1

0xe708,	// (0x000246ee) list_double_cale_preview_pane_t1_ParamLimits

0xe708,	// (0x000246ee) list_double_cale_preview_pane_t1

0xe71d,	// (0x00024703) list_double_cale_preview_pane_t2_ParamLimits

0xe71d,	// (0x00024703) list_double_cale_preview_pane_t2

0x0001,

0xfe34,	// (0x00025e1a) list_double_cale_preview_pane_t_ParamLimits

0xfe34,	// (0x00025e1a) list_double_cale_preview_pane_t

0x06b0,	// (0x00016696) main_ezdial_pane

0x0720,	// (0x00016706) main_sp_fs_email_pane_ParamLimits

0xdf11,	// (0x00023ef7) cmail_ddmenu_btn01_pane_ParamLimits

0xdf11,	// (0x00023ef7) cmail_ddmenu_btn01_pane

0xdf2e,	// (0x00023f14) cmail_ddmenu_btn02_pane_ParamLimits

0xdf2e,	// (0x00023f14) cmail_ddmenu_btn02_pane

0xdf4c,	// (0x00023f32) cmail_ddmenu_btn03_pane_ParamLimits

0xdf4c,	// (0x00023f32) cmail_ddmenu_btn03_pane

0xdf7a,	// (0x00023f60) main_sp_fs_ctrlbar_pane_ParamLimits

0xdf96,	// (0x00023f7c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe399,	// (0x0002437f) list_cmail_body_pane_ParamLimits

0x59b1,	// (0x0001b997) bg_button_pane_cp12

0x59c6,	// (0x0001b9ac) list_single_cmail_header_detail_pane_g3_ParamLimits

0x59c6,	// (0x0001b9ac) list_single_cmail_header_detail_pane_g3

0xe432,	// (0x00024418) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe432,	// (0x00024418) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x00025d9f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x00025d9f) list_single_cmail_header_detail_pane_t

0x5b06,	// (0x0001baec) phacti_term_pane_t2_ParamLimits

0x5b06,	// (0x0001baec) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x00025da9) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x00025da9) phacti_term_pane_t

0x5d98,	// (0x0001bd7e) aid_size_list_single_double

0xe735,	// (0x0002471b) popup_ezdial_listscroll_window

0xe755,	// (0x0002473b) popup_number_entry_window_cp01

0x1c30,	// (0x00017c16) bg_popup_call_pane_cp09

0x5da4,	// (0x0001bd8a) ezdial_list_pane

0x5dac,	// (0x0001bd92) scroll_pane_cp23

0x33d8,	// (0x000193be) bg_button_pane_cp028_ParamLimits

0x33d8,	// (0x000193be) bg_button_pane_cp028

0xe763,	// (0x00024749) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe763,	// (0x00024749) cmail_ddmenu_btn01_pane_g1

0xe773,	// (0x00024759) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe773,	// (0x00024759) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe39,	// (0x00025e1f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe39,	// (0x00025e1f) cmail_ddmenu_btn01_pane_g

0x5db4,	// (0x0001bd9a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5db4,	// (0x0001bd9a) cmail_ddmenu_btn01_pane_t1

0x30ed,	// (0x000190d3) bg_button_pane_cp029_ParamLimits

0x30ed,	// (0x000190d3) bg_button_pane_cp029

0xe773,	// (0x00024759) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe773,	// (0x00024759) cmail_ddmenu_btn02_pane_g1

0xe78b,	// (0x00024771) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe78b,	// (0x00024771) cmail_ddmenu_btn02_pane_t1

0x3ac7,	// (0x00019aad) bg_button_pane_cp031_ParamLimits

0x3ac7,	// (0x00019aad) bg_button_pane_cp031

0xe773,	// (0x00024759) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe773,	// (0x00024759) cmail_ddmenu_btn03_pane_g1

0xe78b,	// (0x00024771) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe78b,	// (0x00024771) cmail_ddmenu_btn03_pane_t1

0xc51e,	// (0x00022504) cell_dialer2_keypad_pane_t1_ParamLimits

0xc538,	// (0x0002251e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc538,	// (0x0002251e) cell_dialer2_keypad_pane_t1_copy1

0xd898,	// (0x0002387e) ncimui_group_button_pane

0x0720,	// (0x00016706) main_sp_fs_calendar_pane_ParamLimits

0xe3b6,	// (0x0002439c) list_single_cmail_header_caption_pane_ParamLimits

0x5b48,	// (0x0001bb2e) aid_recal_txt_sm_pane

0x06b0,	// (0x00016696) mian_recal_day_pane

0x5b87,	// (0x0001bb6d) popup_sp_fs_cale_preview_window_ParamLimits

0x06b0,	// (0x00016696) list_recal_day_pane

0x5deb,	// (0x0001bdd1) list_single_recal_day_pane_ParamLimits

0x5deb,	// (0x0001bdd1) list_single_recal_day_pane

0x5dfd,	// (0x0001bde3) list_single_recal_day_pane_g1_ParamLimits

0x5dfd,	// (0x0001bde3) list_single_recal_day_pane_g1

0x5e09,	// (0x0001bdef) list_single_recal_day_pane_g2_ParamLimits

0x5e09,	// (0x0001bdef) list_single_recal_day_pane_g2

0x5e18,	// (0x0001bdfe) list_single_recal_day_pane_g3_ParamLimits

0x5e18,	// (0x0001bdfe) list_single_recal_day_pane_g3

0xe7af,	// (0x00024795) list_single_recal_day_pane_g4_ParamLimits

0xe7af,	// (0x00024795) list_single_recal_day_pane_g4

0x5e24,	// (0x0001be0a) list_single_recal_day_pane_g5_ParamLimits

0x5e24,	// (0x0001be0a) list_single_recal_day_pane_g5

0x5e33,	// (0x0001be19) list_single_recal_day_pane_g6_ParamLimits

0x5e33,	// (0x0001be19) list_single_recal_day_pane_g6

0x0005,

0xfe48,	// (0x00025e2e) list_single_recal_day_pane_g_ParamLimits

0xfe48,	// (0x00025e2e) list_single_recal_day_pane_g

0x5e3f,	// (0x0001be25) list_single_recal_day_pane_t1

0x5e4d,	// (0x0001be33) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x00025e3b) list_single_recal_day_pane_t

0xe7c2,	// (0x000247a8) ncimui_query_button_pane_ParamLimits

0xe7c2,	// (0x000247a8) ncimui_query_button_pane

0xe7d2,	// (0x000247b8) ncimui_query_button_pane_t1_ParamLimits

0xe7d2,	// (0x000247b8) ncimui_query_button_pane_t1

0x5e5b,	// (0x0001be41) ncimui_query_button_pane_t2_ParamLimits

0x5e5b,	// (0x0001be41) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x00025e40) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x00025e40) ncimui_query_button_pane_t

0xe7e5,	// (0x000247cb) query_button_pane_ParamLimits

0xe7e5,	// (0x000247cb) query_button_pane

0x06b0,	// (0x00016696) bg_button_pane_cp0028

0x5e6e,	// (0x0001be54) query_button_pane_t1

0xaff8,	// (0x00020fde) main_tport_pane_ParamLimits

0xe2c9,	// (0x000242af) bg_popup_window_pane_cp01_ParamLimits

0xe2c9,	// (0x000242af) bg_popup_window_pane_cp01

0xe2d6,	// (0x000242bc) heading_pane_cp08_ParamLimits

0xe2d6,	// (0x000242bc) heading_pane_cp08

0xe2e4,	// (0x000242ca) heading_pane_cp07_ParamLimits

0xe2e4,	// (0x000242ca) heading_pane_cp07

0x5973,	// (0x0001b959) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x00025d8c) cell_tport_appsw_pane_g

0x1db1,	// (0x00017d97) input_candi_list_open_g1

0x1606,	// (0x000175ec) list_cale_time_pane_g6_ParamLimits

0x1606,	// (0x000175ec) list_cale_time_pane_g6

0xb744,	// (0x0002172a) aid_size_touch_calib_1_ParamLimits

0xb744,	// (0x0002172a) aid_size_touch_calib_1

0xb750,	// (0x00021736) aid_size_touch_calib_2_ParamLimits

0xb750,	// (0x00021736) aid_size_touch_calib_2

0xb75e,	// (0x00021744) aid_size_touch_calib_3_ParamLimits

0xb75e,	// (0x00021744) aid_size_touch_calib_3

0xb76e,	// (0x00021754) aid_size_touch_calib_4_ParamLimits

0xb76e,	// (0x00021754) aid_size_touch_calib_4

0xb77c,	// (0x00021762) main_touch_calib_button_group_pane_ParamLimits

0xb77c,	// (0x00021762) main_touch_calib_button_group_pane

0xb78a,	// (0x00021770) main_touch_calib_pane_g1_ParamLimits

0xb796,	// (0x0002177c) main_touch_calib_pane_g2_ParamLimits

0xb7a2,	// (0x00021788) main_touch_calib_pane_g3_ParamLimits

0xb7ae,	// (0x00021794) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0002576a) main_touch_calib_pane_g_ParamLimits

0xb7ba,	// (0x000217a0) main_touch_calib_pane_t1_ParamLimits

0xb7d1,	// (0x000217b7) main_touch_calib_pane_t2_ParamLimits

0xb7e8,	// (0x000217ce) main_touch_calib_pane_t3_ParamLimits

0xb7fc,	// (0x000217e2) main_touch_calib_pane_t4_ParamLimits

0xb810,	// (0x000217f6) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x00025773) main_touch_calib_pane_t_ParamLimits

0x3971,	// (0x00019957) list_single_fp_cale_pane_g3_ParamLimits

0x3971,	// (0x00019957) list_single_fp_cale_pane_g3

0x7f04,	// (0x0001deea) bg_button_pane_cp012_ParamLimits

0x7f04,	// (0x0001deea) bg_vkb2_func_pane_cp03_ParamLimits

0x8314,	// (0x0001e2fa) cell_vitu2_function_top_pane_g1_ParamLimits

0x7f04,	// (0x0001deea) bg_vkb2_func_pane_cp04_ParamLimits

0xd849,	// (0x0002382f) main_ncimui_button_group_pane_ParamLimits

0xd849,	// (0x0002382f) main_ncimui_button_group_pane

0xd886,	// (0x0002386c) main_ncimui_pane_t3_ParamLimits

0xd886,	// (0x0002386c) main_ncimui_pane_t3

0x5ab4,	// (0x0001ba9a) phacti_button_group_pane

0x5d98,	// (0x0001bd7e) aid_size_list_single_double_ParamLimits

0xe735,	// (0x0002471b) popup_ezdial_listscroll_window_ParamLimits

0xe755,	// (0x0002473b) popup_number_entry_window_cp01_ParamLimits

0xe7f2,	// (0x000247d8) phacti_button_pane_ParamLimits

0xe7f2,	// (0x000247d8) phacti_button_pane

0x06b0,	// (0x00016696) bg_button_pane_cp14

0x5e7c,	// (0x0001be62) phacti_button_pane_t1

0xe803,	// (0x000247e9) main_touch_calib_button_pane_ParamLimits

0xe803,	// (0x000247e9) main_touch_calib_button_pane

0x0e95,	// (0x00016e7b) bg_button_pane_cp18_ParamLimits

0x0e95,	// (0x00016e7b) bg_button_pane_cp18

0x5e8a,	// (0x0001be70) main_touch_calib_button_pane_t1_ParamLimits

0x5e8a,	// (0x0001be70) main_touch_calib_button_pane_t1

0x5ea0,	// (0x0001be86) main_touch_calib_button_pane_t2_ParamLimits

0x5ea0,	// (0x0001be86) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x00025e45) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x00025e45) main_touch_calib_button_pane_t

0x06b0,	// (0x00016696) cell_ncimui_button_pane

0x06b0,	// (0x00016696) bg_button_pane_cp032

0x5ebe,	// (0x0001bea4) cell_ncimui_button_pane_t1

0x7c26,	// (0x0001dc0c) image3_infobar_pane_ParamLimits

0x7c26,	// (0x0001dc0c) image3_infobar_pane

0xdbc2,	// (0x00023ba8) fs_bigclock_status_pane_ParamLimits

0xdbc2,	// (0x00023ba8) fs_bigclock_status_pane

0xdbcf,	// (0x00023bb5) main_fs_bigclock_clock_pane_ParamLimits

0xdbcf,	// (0x00023bb5) main_fs_bigclock_clock_pane

0xdbdf,	// (0x00023bc5) main_fs_bigclock_indi_pane_ParamLimits

0xdbdf,	// (0x00023bc5) main_fs_bigclock_indi_pane

0xdc0c,	// (0x00023bf2) main_fs_bigclock_swipe_pane_ParamLimits

0xdc0c,	// (0x00023bf2) main_fs_bigclock_swipe_pane

0x06b0,	// (0x00016696) main_fs_clock_dumped_data

0x53bd,	// (0x0001b3a3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x53bd,	// (0x0001b3a3) list_single_fs_bigclock_indicator_pane_g1

0x53d9,	// (0x0001b3bf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x53d9,	// (0x0001b3bf) list_single_fs_bigclock_indicator_pane_g2

0x53f3,	// (0x0001b3d9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x53f3,	// (0x0001b3d9) list_single_fs_bigclock_indicator_pane_g3

0x540d,	// (0x0001b3f3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x540d,	// (0x0001b3f3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x00025c7d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x00025c7d) list_single_fs_bigclock_indicator_pane_g

0x5433,	// (0x0001b419) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5433,	// (0x0001b419) list_single_fs_bigclock_indicator_pane_t1

0x545b,	// (0x0001b441) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x545b,	// (0x0001b441) list_single_fs_bigclock_indicator_pane_t2

0x5483,	// (0x0001b469) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5483,	// (0x0001b469) list_single_fs_bigclock_indicator_pane_t3

0x54ab,	// (0x0001b491) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x54ab,	// (0x0001b491) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x00025c88) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x00025c88) list_single_fs_bigclock_indicator_pane_t

0x5ecc,	// (0x0001beb2) image3_infobar_fav_pane_ParamLimits

0x5ecc,	// (0x0001beb2) image3_infobar_fav_pane

0x5edc,	// (0x0001bec2) image3_infobar_loc_pane_ParamLimits

0x5edc,	// (0x0001bec2) image3_infobar_loc_pane

0x5ef0,	// (0x0001bed6) image3_infobar_time_pane_ParamLimits

0x5ef0,	// (0x0001bed6) image3_infobar_time_pane

0x35f3,	// (0x000195d9) image3_infobar_time_pane_g1

0x5f00,	// (0x0001bee6) image3_infobar_time_pane_t1

0x35f3,	// (0x000195d9) image3_infobar_loc_pane_g1

0x5f0e,	// (0x0001bef4) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x00025e4a) image3_infobar_loc_pane_g

0x5f16,	// (0x0001befc) image3_infobar_loc_pane_t1

0x35f3,	// (0x000195d9) image3_infobar_fav_pane_g1

0x5f24,	// (0x0001bf0a) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x00025e4f) image3_infobar_fav_pane_g

0x5f2c,	// (0x0001bf12) fs_bigclock_status_battery_pane

0x5f35,	// (0x0001bf1b) fs_bigclock_status_signal_pane

0x5f3e,	// (0x0001bf24) fs_bigclock_status_title_pane

0x5f47,	// (0x0001bf2d) fs_bigclock_status_signal_pane_g1

0x5f50,	// (0x0001bf36) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x00025e54) fs_bigclock_status_signal_pane_g

0x5f58,	// (0x0001bf3e) fs_bigclock_status_battery_pane_g1

0x5f61,	// (0x0001bf47) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x00025e59) fs_bigclock_status_battery_pane_g

0x5f69,	// (0x0001bf4f) fs_bigclock_status_title_pane_t1

0x35f3,	// (0x000195d9) main_fs_bigclock_clock_pane_g1

0x5f77,	// (0x0001bf5d) main_fs_bigclock_clock_pane_g2

0x5f77,	// (0x0001bf5d) main_fs_bigclock_clock_pane_g3

0x5f77,	// (0x0001bf5d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x00025e5e) main_fs_bigclock_clock_pane_g

0x5f7f,	// (0x0001bf65) main_fs_bigclock_clock_pane_t1

0x5f8d,	// (0x0001bf73) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x00025e67) main_fs_bigclock_clock_pane_t

0x5f9c,	// (0x0001bf82) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5f9c,	// (0x0001bf82) list_single_fs_bigclock_indicator_pane

0xe815,	// (0x000247fb) list_single_fs_bigclock_pane_ParamLimits

0xe815,	// (0x000247fb) list_single_fs_bigclock_pane

0x5fb6,	// (0x0001bf9c) main_fs_bigclock_indicator_pane_t1

0x5fe0,	// (0x0001bfc6) list_single_fs_bigclock_pane_g1

0x5fe8,	// (0x0001bfce) list_single_fs_bigclock_pane_t1

0x35f3,	// (0x000195d9) main_fs_bigclock_swipe_pane_g1

0x6026,	// (0x0001c00c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x00025e78) main_fs_bigclock_swipe_pane_g

0x602e,	// (0x0001c014) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x602e,	// (0x0001c014) main_fs_bigclock_swipe_pane_t1

0xa02b,	// (0x00020011) call_type_pane_ParamLimits

0x06b0,	// (0x00016696) main_btmg_pane

0x5c80,	// (0x0001bc66) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5c80,	// (0x0001bc66) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe05,	// (0x00025deb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x00025deb) list_single_cale_mrui_row_pane_g

0x5dd2,	// (0x0001bdb8) list_recal_vselct_arw_lo_pane

0x5dda,	// (0x0001bdc0) list_recal_vselct_arw_up_pane

0x5de2,	// (0x0001bdc8) list_recal_vselct_pane

0x604b,	// (0x0001c031) btmg_button_pane

0xe878,	// (0x0002485e) main_btmg_pane_g1

0x06b0,	// (0x00016696) bg_button_pane_cp044

0x6055,	// (0x0001c03b) btmg_button_pane_t1

0x30e5,	// (0x000190cb) aid_listscroll_gen

0x0720,	// (0x00016706) main_cntbar_detail_pane

0x5991,	// (0x0001b977) list_cmail_folder_pane

0x59a1,	// (0x0001b987) sp_fs_scroll_pane_cp03_ParamLimits

0xe3b6,	// (0x0002439c) list_single_fs_dyc_pane_cp01_ParamLimits

0xe3b6,	// (0x0002439c) list_single_fs_dyc_pane_cp01

0x6063,	// (0x0001c049) aid_size_cmail_indent

0x606c,	// (0x0001c052) list_single_dyc_row_pane_cp01

0xe8a0,	// (0x00024886) cntbar_detail_list_pane_ParamLimits

0xe8a0,	// (0x00024886) cntbar_detail_list_pane

0xe8da,	// (0x000248c0) main_cntbar_detail_cont_pane_ParamLimits

0xe8da,	// (0x000248c0) main_cntbar_detail_cont_pane

0x9fc5,	// (0x0001ffab) scroll_pane_cp032_ParamLimits

0x9fc5,	// (0x0001ffab) scroll_pane_cp032

0xe8e6,	// (0x000248cc) cntbar_detail_list_event_pane_ParamLimits

0xe8e6,	// (0x000248cc) cntbar_detail_list_event_pane

0xe8ac,	// (0x00024892) cntbar_detail_list_shct_pane

0x1455,	// (0x0001743b) aid_list_gen

0x6075,	// (0x0001c05b) aid_scroll

0x607e,	// (0x0001c064) aid_size_touch_scroll_bar

0x5fd7,	// (0x0001bfbd) aid_list_double

0x6087,	// (0x0001c06d) aid_list_single

0xe8fa,	// (0x000248e0) aid_list_single_lg

0x6090,	// (0x0001c076) aid_list_z_g_a_sm

0x6098,	// (0x0001c07e) aid_list_z_g_d

0x60a0,	// (0x0001c086) aid_txt_z_prm

0xe903,	// (0x000248e9) aid_txt_z_prm_cp01

0xe911,	// (0x000248f7) aid_txt_z_sec

0xe91f,	// (0x00024905) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe91f,	// (0x00024905) main_cntbar_detail_cont_pane_g1

0xe92c,	// (0x00024912) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe92c,	// (0x00024912) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x00025e7d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x00025e7d) main_cntbar_detail_cont_pane_g

0x60ae,	// (0x0001c094) main_cntbar_detail_cont_pane_t1

0x60bc,	// (0x0001c0a2) main_cntbar_detail_cont_pane_t2

0x60ca,	// (0x0001c0b0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x00025e82) main_cntbar_detail_cont_pane_t

0xe938,	// (0x0002491e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe938,	// (0x0002491e) cell_cntbar_detail_list_shct_pane

0x60d8,	// (0x0001c0be) cntbar_detail_list_shct_pane_g1

0x60e1,	// (0x0001c0c7) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x00025e89) cntbar_detail_list_shct_pane_g

0xe94c,	// (0x00024932) cntbar_detail_list_event_pane_g1_ParamLimits

0xe94c,	// (0x00024932) cntbar_detail_list_event_pane_g1

0xe958,	// (0x0002493e) cntbar_detail_list_event_pane_g2_ParamLimits

0xe958,	// (0x0002493e) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x00025e8e) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x00025e8e) cntbar_detail_list_event_pane_g

0xe9c4,	// (0x000249aa) cntbar_detail_list_event_pane_t1_ParamLimits

0xe9c4,	// (0x000249aa) cntbar_detail_list_event_pane_t1

0xe9d9,	// (0x000249bf) cntbar_detail_list_event_pane_t2_ParamLimits

0xe9d9,	// (0x000249bf) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x00025e9b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x00025e9b) cntbar_detail_list_event_pane_t

0x35f3,	// (0x000195d9) cell_cntbar_detail_list_shct_pane_g1

0xa346,	// (0x0002032c) navi_pane_mv_g3

0x0720,	// (0x00016706) main_cntbar_detail_pane_ParamLimits

0x06b0,	// (0x00016696) main_notif_wgt_pane

0x7967,	// (0x0001d94d) aid_tch_main_mp4_pane_g4

0x7b9c,	// (0x0001db82) popup_slider_window_cp02

0x5dc9,	// (0x0001bdaf) list_recal_day_event_pane

0xe880,	// (0x00024866) cntbar_detail_btn_pane_ParamLimits

0xe880,	// (0x00024866) cntbar_detail_btn_pane

0xe890,	// (0x00024876) cntbar_detail_btn_pane_cp01_ParamLimits

0xe890,	// (0x00024876) cntbar_detail_btn_pane_cp01

0xe8ac,	// (0x00024892) cntbar_detail_list_shct_pane_ParamLimits

0xe8b8,	// (0x0002489e) cntbar_detail_pane_g1_ParamLimits

0xe8b8,	// (0x0002489e) cntbar_detail_pane_g1

0xe8c4,	// (0x000248aa) cntbar_detail_pane_t1_ParamLimits

0xe8c4,	// (0x000248aa) cntbar_detail_pane_t1

0xe964,	// (0x0002494a) cntbar_detail_list_event_pane_g3_ParamLimits

0xe964,	// (0x0002494a) cntbar_detail_list_event_pane_g3

0xe97c,	// (0x00024962) cntbar_detail_list_event_pane_g4_ParamLimits

0xe97c,	// (0x00024962) cntbar_detail_list_event_pane_g4

0xe994,	// (0x0002497a) cntbar_detail_list_event_pane_g5_ParamLimits

0xe994,	// (0x0002497a) cntbar_detail_list_event_pane_g5

0xe9ac,	// (0x00024992) cntbar_detail_list_event_pane_g6_ParamLimits

0xe9ac,	// (0x00024992) cntbar_detail_list_event_pane_g6

0xe9ee,	// (0x000249d4) cntbar_detail_list_event_pane_t3_ParamLimits

0xe9ee,	// (0x000249d4) cntbar_detail_list_event_pane_t3

0xea00,	// (0x000249e6) popup_notif_wgt_window_ParamLimits

0xea00,	// (0x000249e6) popup_notif_wgt_window

0xea10,	// (0x000249f6) popup_submenu_window_cp01_ParamLimits

0xea10,	// (0x000249f6) popup_submenu_window_cp01

0x1c30,	// (0x00017c16) bg_popup_window_pane_cp10

0x60ea,	// (0x0001c0d0) listscroll_notif_wgt_pane

0x60f4,	// (0x0001c0da) list_notif_wgt_window

0x60fd,	// (0x0001c0e3) scroll_pane_cp033

0x5fc5,	// (0x0001bfab) list_notif_wgt_row_pane_ParamLimits

0x5fc5,	// (0x0001bfab) list_notif_wgt_row_pane

0x6106,	// (0x0001c0ec) aid_size_list_notif_wgt_del

0x610f,	// (0x0001c0f5) list_notif_wgt_row_pane_g1

0x6117,	// (0x0001c0fd) list_notif_wgt_row_pane_g2

0x611f,	// (0x0001c105) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x00025ea2) list_notif_wgt_row_pane_g

0x6128,	// (0x0001c10e) list_notif_wgt_row_pane_t1

0x6136,	// (0x0001c11c) list_notif_wgt_row_pane_t2

0x6144,	// (0x0001c12a) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x00025ea9) list_notif_wgt_row_pane_t

0x4670,	// (0x0001a656) list_recal_day_event_pane_g1

0x6152,	// (0x0001c138) list_recal_day_event_pane_t1

0x06b0,	// (0x00016696) bg_button_pane_cp045

0x6161,	// (0x0001c147) cntbar_detail_btn_pane_t1

0x30ed,	// (0x000190d3) main_callh_pane_ParamLimits

0x30ed,	// (0x000190d3) main_callh_pane

0x06b0,	// (0x00016696) main_coverflow0_pane

0x06b0,	// (0x00016696) main_wgtman_pane

0xdc24,	// (0x00023c0a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdc24,	// (0x00023c0a) main_fs_bigclock_unlock_btn_pane

0x596b,	// (0x0001b951) bg_button_pane_cp16

0x597b,	// (0x0001b961) cell_tport_appsw_pane_g3

0xea1e,	// (0x00024a04) cf0_flow_pane_ParamLimits

0xea1e,	// (0x00024a04) cf0_flow_pane

0x616f,	// (0x0001c155) listscroll_cf0_pane

0x6178,	// (0x0001c15e) main_cf0_pane_g1

0xea2d,	// (0x00024a13) main_cf0_pane_t1_ParamLimits

0xea2d,	// (0x00024a13) main_cf0_pane_t1

0xea41,	// (0x00024a27) main_cf0_pane_t2_ParamLimits

0xea41,	// (0x00024a27) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x00025eb0) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x00025eb0) main_cf0_pane_t

0x6182,	// (0x0001c168) scroll_pane_cp11

0xea55,	// (0x00024a3b) cf0_flow_pane_g1

0xea5d,	// (0x00024a43) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x00025eb5) cf0_flow_pane_g

0xea65,	// (0x00024a4b) cf0_flow_pane_t1

0x06b0,	// (0x00016696) main_call6_pane

0x06b0,	// (0x00016696) main_calllock_pane

0xea73,	// (0x00024a59) call6_btn_grp_pane_ParamLimits

0xea73,	// (0x00024a59) call6_btn_grp_pane

0xea82,	// (0x00024a68) call6_pane_g1_ParamLimits

0xea82,	// (0x00024a68) call6_pane_g1

0xea91,	// (0x00024a77) popup_call6_1st_window_ParamLimits

0xea91,	// (0x00024a77) popup_call6_1st_window

0xea9f,	// (0x00024a85) popup_call6_2nd_window_ParamLimits

0xea9f,	// (0x00024a85) popup_call6_2nd_window

0xeaad,	// (0x00024a93) cell_call6_btn_pane_ParamLimits

0xeaad,	// (0x00024a93) cell_call6_btn_pane

0x1c30,	// (0x00017c16) bg_popup_call2_in_pane_cp03

0x618d,	// (0x0001c173) popup_call6_1st_window_g1

0x6195,	// (0x0001c17b) popup_call6_1st_window_g2

0x619d,	// (0x0001c183) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x00025eba) popup_call6_1st_window_g

0x61a5,	// (0x0001c18b) popup_call6_1st_window_t1

0x61b4,	// (0x0001c19a) popup_call6_1st_window_t2

0x61c4,	// (0x0001c1aa) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x00025ec1) popup_call6_1st_window_t

0x1c30,	// (0x00017c16) bg_popup_call2_in_pane_cp04

0x618d,	// (0x0001c173) popup_call6_2nd_window_g1

0x6195,	// (0x0001c17b) popup_call6_2nd_window_g2

0x619d,	// (0x0001c183) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x00025eba) popup_call6_2nd_window_g

0x61a5,	// (0x0001c18b) popup_call6_2nd_window_t1

0x06b0,	// (0x00016696) bg_button_pane_cp15

0x61d4,	// (0x0001c1ba) cell_call6_btn_pane_g1

0x61dd,	// (0x0001c1c3) cell_call6_btn_pane_t1

0xeabc,	// (0x00024aa2) listscroll_wgtman_pane_ParamLimits

0xeabc,	// (0x00024aa2) listscroll_wgtman_pane

0xeada,	// (0x00024ac0) wgtman_btn_pane_ParamLimits

0xeada,	// (0x00024ac0) wgtman_btn_pane

0x1ae7,	// (0x00017acd) aid_scroll_copy1

0x61ec,	// (0x0001c1d2) list_wgtman_pane

0xeb0f,	// (0x00024af5) wgtman_btn_pane_g1_ParamLimits

0xeb0f,	// (0x00024af5) wgtman_btn_pane_g1

0xeb37,	// (0x00024b1d) wgtman_btn_pane_t1_ParamLimits

0xeb37,	// (0x00024b1d) wgtman_btn_pane_t1

0x61f6,	// (0x0001c1dc) wgtman_btn_pane_t2_ParamLimits

0x61f6,	// (0x0001c1dc) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x00025ec8) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x00025ec8) wgtman_btn_pane_t

0xeb6e,	// (0x00024b54) listrow_wgtman_pane_ParamLimits

0xeb6e,	// (0x00024b54) listrow_wgtman_pane

0xeb89,	// (0x00024b6f) listrow_wgtman_pane_g1

0xeb92,	// (0x00024b78) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x00025ecd) listrow_wgtman_pane_g

0xeb9c,	// (0x00024b82) listrow_wgtman_pane_t1

0xebaa,	// (0x00024b90) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x00025ed2) listrow_wgtman_pane_t

0xebb8,	// (0x00024b9e) wait_bar_pane_cp09

0x620d,	// (0x0001c1f3) main_calllock_btn_pane

0x6217,	// (0x0001c1fd) main_calllock_pane_g1

0x06b0,	// (0x00016696) bg_button_pane_cp17

0x6223,	// (0x0001c209) main_calllock_btn_pane_g1

0x622c,	// (0x0001c212) main_calllock_btn_pane_t1

0x06b0,	// (0x00016696) main_dialer3_pane

0x06b0,	// (0x00016696) main_fmrd2_pane

0x35f3,	// (0x000195d9) main_fs_bigclock_unlock_btn_pane_g1

0x6243,	// (0x0001c229) main_fs_bigclock_unlock_btn_pane_t1

0xebc0,	// (0x00024ba6) area_fmrd2_info_pane_ParamLimits

0xebc0,	// (0x00024ba6) area_fmrd2_info_pane

0xebce,	// (0x00024bb4) area_fmrd2_visual_pane_ParamLimits

0xebce,	// (0x00024bb4) area_fmrd2_visual_pane

0xebdc,	// (0x00024bc2) fmrd2_indi_pane_ParamLimits

0xebdc,	// (0x00024bc2) fmrd2_indi_pane

0xebe9,	// (0x00024bcf) area_fmrd2_visual_pane_g1

0xebf1,	// (0x00024bd7) area_fmrd2_visual_pane_t1

0xec01,	// (0x00024be7) area_fmrd2_visual_pane_t2

0xec11,	// (0x00024bf7) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x00025edc) area_fmrd2_visual_pane_t

0xec21,	// (0x00024c07) area_fmrd2_info_pane_g1

0xec29,	// (0x00024c0f) area_fmrd2_info_pane_t1

0xec39,	// (0x00024c1f) area_fmrd2_info_pane_t2

0xec49,	// (0x00024c2f) area_fmrd2_info_pane_t3

0xec59,	// (0x00024c3f) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x00025ee3) area_fmrd2_info_pane_t

0xec67,	// (0x00024c4d) fmrd2_indi_pane_t1

0xec77,	// (0x00024c5d) fmrd2_indi_pane_t2

0xec87,	// (0x00024c6d) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x00025eec) fmrd2_indi_pane_t

0x541c,	// (0x0001b402) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x541c,	// (0x0001b402) list_single_fs_bigclock_indicator_pane_g5

0x54c0,	// (0x0001b4a6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x54c0,	// (0x0001b4a6) list_single_fs_bigclock_indicator_pane_t5

0xe4f0,	// (0x000244d6) aid_cell_bcale_month_pane_ParamLimits

0xe4f0,	// (0x000244d6) aid_cell_bcale_month_pane

0xe4fc,	// (0x000244e2) bcale_month_pane_ParamLimits

0xe4fc,	// (0x000244e2) bcale_month_pane

0xe50a,	// (0x000244f0) bcale_preview_pane_ParamLimits

0xe50a,	// (0x000244f0) bcale_preview_pane

0x5fe8,	// (0x0001bfce) list_single_fs_bigclock_pane_t1_ParamLimits

0x6002,	// (0x0001bfe8) list_single_fs_bigclock_pane_t2_ParamLimits

0x6002,	// (0x0001bfe8) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x00025e73) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x00025e73) list_single_fs_bigclock_pane_t

0x623b,	// (0x0001c221) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x00025ed7) main_fs_bigclock_unlock_btn_pane_g

0xec95,	// (0x00024c7b) aid_dia3_key_size_ParamLimits

0xec95,	// (0x00024c7b) aid_dia3_key_size

0xeca1,	// (0x00024c87) aid_dia3_listrow_size_ParamLimits

0xeca1,	// (0x00024c87) aid_dia3_listrow_size

0xecb1,	// (0x00024c97) dia3_keypad_fun_pane_ParamLimits

0xecb1,	// (0x00024c97) dia3_keypad_fun_pane

0xecc3,	// (0x00024ca9) dia3_keypad_num_pane_ParamLimits

0xecc3,	// (0x00024ca9) dia3_keypad_num_pane

0xecd5,	// (0x00024cbb) dia3_listscroll_pane_ParamLimits

0xecd5,	// (0x00024cbb) dia3_listscroll_pane

0xece3,	// (0x00024cc9) dia3_numentry_pane_ParamLimits

0xece3,	// (0x00024cc9) dia3_numentry_pane

0x6251,	// (0x0001c237) dia3_list_pane

0x625c,	// (0x0001c242) scroll_pane_cp12

0x06b0,	// (0x00016696) bg_dia3_numentry_pane

0xecf1,	// (0x00024cd7) dia3_numentry_pane_t1

0xed00,	// (0x00024ce6) cell_dia3_key_num_pane

0xed08,	// (0x00024cee) cell_dia3_key0_fun_pane_ParamLimits

0xed08,	// (0x00024cee) cell_dia3_key0_fun_pane

0xed15,	// (0x00024cfb) cell_dia3_key1_fun_pane_ParamLimits

0xed15,	// (0x00024cfb) cell_dia3_key1_fun_pane

0xed22,	// (0x00024d08) dia3_listrow_pane

0x514a,	// (0x0001b130) bg_dia3_numentry_pane_g1

0x06b0,	// (0x00016696) bg_button_pane_cp21

0x6267,	// (0x0001c24d) cell_dia3_key_num_pane_t1

0x6275,	// (0x0001c25b) cell_dia3_key_num_pane_t2

0x6284,	// (0x0001c26a) cell_dia3_key_num_pane_t3

0x6293,	// (0x0001c279) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x00025ef3) cell_dia3_key_num_pane_t

0x06b0,	// (0x00016696) bg_button_pane_cp19

0xed2f,	// (0x00024d15) cell_dia3_key0_fun_pane_g1

0x06b0,	// (0x00016696) bg_button_pane_cp20

0xed37,	// (0x00024d1d) cell_dia3_key1_fun_pane_g1

0xed3f,	// (0x00024d25) area_left_week_number_pane

0xed48,	// (0x00024d2e) area_top_day_name_pane

0xed51,	// (0x00024d37) frame_month_view_pane

0xed5b,	// (0x00024d41) grid_month_view_pane

0xed65,	// (0x00024d4b) cell_top_day_name_pane_ParamLimits

0xed65,	// (0x00024d4b) cell_top_day_name_pane

0xed7f,	// (0x00024d65) cell_area_left_week_number_pane_ParamLimits

0xed7f,	// (0x00024d65) cell_area_left_week_number_pane

0xed93,	// (0x00024d79) cell_month_view_pane_ParamLimits

0xed93,	// (0x00024d79) cell_month_view_pane

0x62a2,	// (0x0001c288) frm_month_g1

0xedb0,	// (0x00024d96) frm_month_g2

0xedba,	// (0x00024da0) frm_month_g3

0xedc4,	// (0x00024daa) frm_month_g4

0xedce,	// (0x00024db4) frm_month_g5

0xedd8,	// (0x00024dbe) frm_month_g6

0xede2,	// (0x00024dc8) frm_month_g7

0x62ab,	// (0x0001c291) frm_month_g8

0xedec,	// (0x00024dd2) frm_month_g9

0xedf5,	// (0x00024ddb) frm_month_g10

0xedfe,	// (0x00024de4) frm_month_g11

0xee07,	// (0x00024ded) frm_month_g12

0xee10,	// (0x00024df6) frm_month_g13

0xee19,	// (0x00024dff) frm_month_g14

0xee22,	// (0x00024e08) frm_month_g15

0xee2d,	// (0x00024e13) frm_month_g16

0x000f,

0xff16,	// (0x00025efc) frm_month_g

0xee38,	// (0x00024e1e) cell_top_day_name_pane_t1

0xee47,	// (0x00024e2d) cell_area_left_week_number_pane_g1

0xee38,	// (0x00024e1e) cell_area_left_week_number_pane_t1

0x35f3,	// (0x000195d9) cell_month_view_pane_g1

0xee4f,	// (0x00024e35) cell_month_view_pane_t1

0x06b0,	// (0x00016696) main_fps_pane

0x56f1,	// (0x0001b6d7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x56f1,	// (0x0001b6d7) cmail_ddmenu_btn02_pane_cp1

0x570d,	// (0x0001b6f3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x570d,	// (0x0001b6f3) cmail_ddmenu_btn02_pane_cp2

0xe77f,	// (0x00024765) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe77f,	// (0x00024765) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3e,	// (0x00025e24) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3e,	// (0x00025e24) cmail_ddmenu_btn02_pane_g

0xe79d,	// (0x00024783) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe79d,	// (0x00024783) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe43,	// (0x00025e29) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe43,	// (0x00025e29) cmail_ddmenu_btn02_pane_t

0xee5e,	// (0x00024e44) fps_text_pane_ParamLimits

0xee5e,	// (0x00024e44) fps_text_pane

0xee6b,	// (0x00024e51) main_fps_pane_g1_ParamLimits

0xee6b,	// (0x00024e51) main_fps_pane_g1

0xee79,	// (0x00024e5f) wait_bar_pane_cp010_ParamLimits

0xee79,	// (0x00024e5f) wait_bar_pane_cp010

0xee85,	// (0x00024e6b) fps_text_pane_t1_ParamLimits

0xee85,	// (0x00024e6b) fps_text_pane_t1

0xc631,	// (0x00022617) cam4_image_uncrop_pane_g1

0xc63a,	// (0x00022620) cam4_image_uncrop_pane_g2

0xc643,	// (0x00022629) cam4_image_uncrop_pane_g3

0xc64c,	// (0x00022632) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00025902) cam4_image_uncrop_pane_g

0xed22,	// (0x00024d08) dia3_listrow_pane_ParamLimits

0x06b0,	// (0x00016696) main_phob2_pane

0xe32b,	// (0x00024311) cell_tport_appsw_pane_cp02_ParamLimits

0xe32b,	// (0x00024311) cell_tport_appsw_pane_cp02

0xe33a,	// (0x00024320) cell_tport_appsw_pane_cp03_ParamLimits

0xe33a,	// (0x00024320) cell_tport_appsw_pane_cp03

0x06b0,	// (0x00016696) phob2_contact_card_pane

0x06b0,	// (0x00016696) phob2_listscroll_pane

0xee9e,	// (0x00024e84) phob2_list_pane

0xeea6,	// (0x00024e8c) scroll_pane_cp034

0xeeae,	// (0x00024e94) phob2_cc_data_pane_ParamLimits

0xeeae,	// (0x00024e94) phob2_cc_data_pane

0xeec8,	// (0x00024eae) phob2_cc_listscroll_pane_ParamLimits

0xeec8,	// (0x00024eae) phob2_cc_listscroll_pane

0xeee2,	// (0x00024ec8) list_double_large_graphic_phob2_pane_ParamLimits

0xeee2,	// (0x00024ec8) list_double_large_graphic_phob2_pane

0xef00,	// (0x00024ee6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xef00,	// (0x00024ee6) list_double_large_graphic_phob2_pane_g1

0xef0d,	// (0x00024ef3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef0d,	// (0x00024ef3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x00025f1d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x00025f1d) list_double_large_graphic_phob2_pane_g

0xef19,	// (0x00024eff) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xef19,	// (0x00024eff) list_double_large_graphic_phob2_pane_t1

0xef2e,	// (0x00024f14) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xef2e,	// (0x00024f14) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x00025f22) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x00025f22) list_double_large_graphic_phob2_pane_t

0x06b0,	// (0x00016696) list_highlight_pane_cp024

0xef40,	// (0x00024f26) phob2_cc_button_pane

0xef48,	// (0x00024f2e) phob2_cc_data_pane_g1_ParamLimits

0xef48,	// (0x00024f2e) phob2_cc_data_pane_g1

0xef54,	// (0x00024f3a) phob2_cc_data_pane_g2_ParamLimits

0xef54,	// (0x00024f3a) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x00025f27) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x00025f27) phob2_cc_data_pane_g

0xef60,	// (0x00024f46) phob2_cc_data_pane_t1_ParamLimits

0xef60,	// (0x00024f46) phob2_cc_data_pane_t1

0xef72,	// (0x00024f58) phob2_cc_data_pane_t2_ParamLimits

0xef72,	// (0x00024f58) phob2_cc_data_pane_t2

0xef84,	// (0x00024f6a) phob2_cc_data_pane_t3_ParamLimits

0xef84,	// (0x00024f6a) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x00025f2c) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x00025f2c) phob2_cc_data_pane_t

0xef96,	// (0x00024f7c) phob2_cc_list_pane_ParamLimits

0xef96,	// (0x00024f7c) phob2_cc_list_pane

0xefa2,	// (0x00024f88) scroll_pane_cp035_ParamLimits

0xefa2,	// (0x00024f88) scroll_pane_cp035

0x0720,	// (0x00016706) bg_button_pane_cp033

0xefae,	// (0x00024f94) phob2_cc_button_pane_g1

0xefba,	// (0x00024fa0) phob2_cc_button_pane_t1

0xefcf,	// (0x00024fb5) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x00025f33) phob2_cc_button_pane_t

0xefe1,	// (0x00024fc7) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xefe1,	// (0x00024fc7) list_double_large_graphic_phob2_cc_pane

0xf008,	// (0x00024fee) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf008,	// (0x00024fee) list_double_large_graphic_phob2_cc_pane_g1

0xf019,	// (0x00024fff) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf019,	// (0x00024fff) list_double_large_graphic_phob2_cc_pane_g2

0xf025,	// (0x0002500b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf025,	// (0x0002500b) list_double_large_graphic_phob2_cc_pane_g3

0xf031,	// (0x00025017) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf031,	// (0x00025017) list_double_large_graphic_phob2_cc_pane_g4

0xf03d,	// (0x00025023) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf03d,	// (0x00025023) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x00025f38) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x00025f38) list_double_large_graphic_phob2_cc_pane_g

0xf049,	// (0x0002502f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf049,	// (0x0002502f) list_double_large_graphic_phob2_cc_pane_t1

0xf072,	// (0x00025058) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf072,	// (0x00025058) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x00025f43) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x00025f43) list_double_large_graphic_phob2_cc_pane_t

0xf09b,	// (0x00025081) list_highlight_pane_cp025_ParamLimits

0xf09b,	// (0x00025081) list_highlight_pane_cp025

0x0720,	// (0x00016706) bg_button_pane_cp033_ParamLimits

0xefae,	// (0x00024f94) phob2_cc_button_pane_g1_ParamLimits

0xefba,	// (0x00024fa0) phob2_cc_button_pane_t1_ParamLimits

0xefcf,	// (0x00024fb5) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x00025f33) phob2_cc_button_pane_t_ParamLimits

0x87a2,	// (0x0001e788) popup_wgtman_window

0x44a5,	// (0x0001a48b) scroll_pane_cp038

0xeaf7,	// (0x00024add) wgtman_btn_pane_cp_01_ParamLimits

0xeaf7,	// (0x00024add) wgtman_btn_pane_cp_01

0xf0a9,	// (0x0002508f) wgtman_content_pane

0xf0b2,	// (0x00025098) wgtman_heading_pane

0x06b0,	// (0x00016696) bg_heading_pane_cp02

0xf0bb,	// (0x000250a1) wgtman_heading_pane_g1

0xf0c3,	// (0x000250a9) wgtman_heading_pane_t1

0xf0d1,	// (0x000250b7) scroll_pane_cp036

0xf0d9,	// (0x000250bf) wgtman_list_pane

0xf0e1,	// (0x000250c7) wgtman_list_pane_t1_ParamLimits

0xf0e1,	// (0x000250c7) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
