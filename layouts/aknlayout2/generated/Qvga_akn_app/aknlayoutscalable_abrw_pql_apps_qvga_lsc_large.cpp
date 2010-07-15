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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0008d984 };

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
0x0b96,	// (0x0008e51a) Screen

0x0ba0,	// (0x0008e524) application_window

0x0be0,	// (0x0008e564) area_bottom_pane_ParamLimits

0x0be0,	// (0x0008e564) area_bottom_pane

0x0c13,	// (0x0008e597) area_top_pane_ParamLimits

0x0c13,	// (0x0008e597) area_top_pane

0x9fda,	// (0x0009795e) call_video_uplink_pane_ParamLimits

0x9fda,	// (0x0009795e) call_video_uplink_pane

0x0c93,	// (0x0008e617) main_pane_ParamLimits

0x0c93,	// (0x0008e617) main_pane

0xa30a,	// (0x00097c8e) context_pane

0x49fa,	// (0x0009237e) navi_pane

0x4a23,	// (0x000923a7) popup_cale_events_window_ParamLimits

0x4a23,	// (0x000923a7) popup_cale_events_window

0xa31d,	// (0x00097ca1) popup_mup_playback_window

0x4a3b,	// (0x000923bf) signal_pane

0xdcae,	// (0x0009b632) main_browser_pane

0xde7d,	// (0x0009b801) main_burst_pane

0x9ff6,	// (0x0009797a) main_calc_pane

0xa296,	// (0x00097c1a) main_cale_day_pane

0x4792,	// (0x00092116) main_cale_month_pane

0xa296,	// (0x00097c1a) main_cale_week_pane

0xde7d,	// (0x0009b801) main_call_pane

0xd98a,	// (0x0009b30e) main_call_poc_pane

0xde7d,	// (0x0009b801) main_camera_pane

0xde7d,	// (0x0009b801) main_chi_dic_pane

0xe67a,	// (0x0009bffe) main_clock_pane

0xd98a,	// (0x0009b30e) main_fmradio_pane

0xde7d,	// (0x0009b801) main_graph_messa_pane

0xd98a,	// (0x0009b30e) main_help_pane

0xdcae,	// (0x0009b632) main_im_pane

0xdbe5,	// (0x0009b569) main_image_pane_ParamLimits

0xdbe5,	// (0x0009b569) main_image_pane

0xd98a,	// (0x0009b30e) main_location2_pane

0xde7d,	// (0x0009b801) main_location_pane

0xdbe5,	// (0x0009b569) main_messa_pane

0xd98a,	// (0x0009b30e) main_mp2_pane

0xde7d,	// (0x0009b801) main_mp_pane

0xd98a,	// (0x0009b30e) main_msg_pane

0xd98a,	// (0x0009b30e) main_mup_eq_pane

0xd98a,	// (0x0009b30e) main_mup_pane

0xdcae,	// (0x0009b632) main_notes_pane

0xd98a,	// (0x0009b30e) main_pec_pane

0xd98a,	// (0x0009b30e) main_phob_pane

0xd98a,	// (0x0009b30e) main_pinb_pane

0xd98a,	// (0x0009b30e) main_postcard_pane

0xd98a,	// (0x0009b30e) main_qdial_pane

0xde7d,	// (0x0009b801) main_skin_pane

0xd98a,	// (0x0009b30e) main_smil2_pane

0xde7d,	// (0x0009b801) main_smil_pane

0xde7d,	// (0x0009b801) main_video_pane

0xde7d,	// (0x0009b801) main_video_tele_pane

0xdbe5,	// (0x0009b569) main_viewer_pane_ParamLimits

0xdbe5,	// (0x0009b569) main_viewer_pane

0xde7d,	// (0x0009b801) main_vorec_pane

0x47ee,	// (0x00092172) popup_blid_sat_info_window_ParamLimits

0x47ee,	// (0x00092172) popup_blid_sat_info_window

0x4844,	// (0x000921c8) popup_dyc_status_message_window_ParamLimits

0x4844,	// (0x000921c8) popup_dyc_status_message_window

0x485a,	// (0x000921de) popup_grid_large_graphic_window_ParamLimits

0x485a,	// (0x000921de) popup_grid_large_graphic_window

0x48f0,	// (0x00092274) popup_loc_request_window_ParamLimits

0x48f0,	// (0x00092274) popup_loc_request_window

0x49d4,	// (0x00092358) popup_wml_address_window_ParamLimits

0x49d4,	// (0x00092358) popup_wml_address_window

0x4626,	// (0x00091faa) call_muted_g1

0x37f6,	// (0x0009117a) popup_call_audio_conf_window_ParamLimits

0x37f6,	// (0x0009117a) popup_call_audio_conf_window

0x4636,	// (0x00091fba) popup_call_audio_first_window_ParamLimits

0x4636,	// (0x00091fba) popup_call_audio_first_window

0x4694,	// (0x00092018) popup_call_audio_in_window_ParamLimits

0x4694,	// (0x00092018) popup_call_audio_in_window

0x46c0,	// (0x00092044) popup_call_audio_out_window_ParamLimits

0x46c0,	// (0x00092044) popup_call_audio_out_window

0x46ee,	// (0x00092072) popup_call_audio_second_window_ParamLimits

0x46ee,	// (0x00092072) popup_call_audio_second_window

0x4734,	// (0x000920b8) popup_call_audio_wait_window_ParamLimits

0x4734,	// (0x000920b8) popup_call_audio_wait_window

0x4767,	// (0x000920eb) popup_number_entry_window_ParamLimits

0x4767,	// (0x000920eb) popup_number_entry_window

0x0de8,	// (0x0008e76c) bg_popup_call_pane_cp05_ParamLimits

0x0de8,	// (0x0008e76c) bg_popup_call_pane_cp05

0xd44f,	// (0x0009add3) popup_number_entry_window_t1

0xd462,	// (0x0009ade6) popup_number_entry_window_t2

0xd474,	// (0x0009adf8) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0009ca33) popup_number_entry_window_t

0xd486,	// (0x0009ae0a) text_title_cp2

0xd499,	// (0x0009ae1d) bg_popup_call_pane_cp_ParamLimits

0xd499,	// (0x0009ae1d) bg_popup_call_pane_cp

0xd4a7,	// (0x0009ae2b) call_thumbnail_pane

0xd4af,	// (0x0009ae33) popup_call_audio_in_window_g1_ParamLimits

0xd4af,	// (0x0009ae33) popup_call_audio_in_window_g1

0xd4bb,	// (0x0009ae3f) popup_call_audio_in_window_g2_ParamLimits

0xd4bb,	// (0x0009ae3f) popup_call_audio_in_window_g2

0xd4c7,	// (0x0009ae4b) popup_call_audio_in_window_g3_ParamLimits

0xd4c7,	// (0x0009ae4b) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0009ca3c) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0009ca3c) popup_call_audio_in_window_g

0xd4d3,	// (0x0009ae57) popup_call_audio_in_window_t1_ParamLimits

0xd4d3,	// (0x0009ae57) popup_call_audio_in_window_t1

0xd4ee,	// (0x0009ae72) popup_call_audio_in_window_t2_ParamLimits

0xd4ee,	// (0x0009ae72) popup_call_audio_in_window_t2

0xd509,	// (0x0009ae8d) popup_call_audio_in_window_t3_ParamLimits

0xd509,	// (0x0009ae8d) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0009ca43) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0009ca43) popup_call_audio_in_window_t

0xd499,	// (0x0009ae1d) bg_popup_call_pane_cp01_ParamLimits

0xd499,	// (0x0009ae1d) bg_popup_call_pane_cp01

0xd4a7,	// (0x0009ae2b) call_thumbnail_pane_cp02

0xd51c,	// (0x0009aea0) call_type_pane_cp022

0xd524,	// (0x0009aea8) popup_call_audio_out_window_g1_ParamLimits

0xd524,	// (0x0009aea8) popup_call_audio_out_window_g1

0xd536,	// (0x0009aeba) popup_call_audio_out_window_g2_ParamLimits

0xd536,	// (0x0009aeba) popup_call_audio_out_window_g2

0xd542,	// (0x0009aec6) popup_call_audio_out_window_g3_ParamLimits

0xd542,	// (0x0009aec6) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0009ca4a) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0009ca4a) popup_call_audio_out_window_g

0xd554,	// (0x0009aed8) popup_call_audio_out_window_t1_ParamLimits

0xd554,	// (0x0009aed8) popup_call_audio_out_window_t1

0xd56c,	// (0x0009aef0) popup_call_audio_out_window_t2_ParamLimits

0xd56c,	// (0x0009aef0) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0009ca51) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0009ca51) popup_call_audio_out_window_t

0xd581,	// (0x0009af05) bg_popup_call_pane_ParamLimits

0xd581,	// (0x0009af05) bg_popup_call_pane

0x0e3c,	// (0x0008e7c0) call_thumbnail_pane_cp_ParamLimits

0x0e3c,	// (0x0008e7c0) call_thumbnail_pane_cp

0xd605,	// (0x0009af89) call_type_pane_cp01_ParamLimits

0xd605,	// (0x0009af89) call_type_pane_cp01

0xd649,	// (0x0009afcd) popup_call_audio_first_window_g1_ParamLimits

0xd649,	// (0x0009afcd) popup_call_audio_first_window_g1

0xd695,	// (0x0009b019) popup_call_audio_first_window_g2_ParamLimits

0xd695,	// (0x0009b019) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0009ca56) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0009ca56) popup_call_audio_first_window_g

0xd6d9,	// (0x0009b05d) popup_call_audio_first_window_t1_ParamLimits

0xd6d9,	// (0x0009b05d) popup_call_audio_first_window_t1

0xd8cf,	// (0x0009b253) popup_call_audio_first_window_t4_ParamLimits

0xd8cf,	// (0x0009b253) popup_call_audio_first_window_t4

0xd95b,	// (0x0009b2df) popup_call_audio_first_window_t5_ParamLimits

0xd95b,	// (0x0009b2df) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0009ca5b) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0009ca5b) popup_call_audio_first_window_t

0xd98a,	// (0x0009b30e) bg_popup_call_pane_cp02

0xd994,	// (0x0009b318) call_type_pane_cp023

0xd99c,	// (0x0009b320) popup_call_audio_wait_window_g1

0xd9a4,	// (0x0009b328) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0009ca62) popup_call_audio_wait_window_g

0xd9ac,	// (0x0009b330) popup_call_audio_wait_window_t3

0xd9ba,	// (0x0009b33e) bg_popup_call_pane_cp03_ParamLimits

0xd9ba,	// (0x0009b33e) bg_popup_call_pane_cp03

0xda1a,	// (0x0009b39e) call_thumbnail_pane_cp011_ParamLimits

0xda1a,	// (0x0009b39e) call_thumbnail_pane_cp011

0xda26,	// (0x0009b3aa) call_type_pane_cp034_ParamLimits

0xda26,	// (0x0009b3aa) call_type_pane_cp034

0xda62,	// (0x0009b3e6) popup_call_audio_second_window_g1_ParamLimits

0xda62,	// (0x0009b3e6) popup_call_audio_second_window_g1

0xda9e,	// (0x0009b422) popup_call_audio_second_window_g2_ParamLimits

0xda9e,	// (0x0009b422) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0009ca67) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0009ca67) popup_call_audio_second_window_g

0xdada,	// (0x0009b45e) popup_call_audio_second_window_t1_ParamLimits

0xdada,	// (0x0009b45e) popup_call_audio_second_window_t1

0xdb5b,	// (0x0009b4df) popup_call_audio_second_window_t2_ParamLimits

0xdb5b,	// (0x0009b4df) popup_call_audio_second_window_t2

0xdb91,	// (0x0009b515) popup_call_audio_second_window_t3_ParamLimits

0xdb91,	// (0x0009b515) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0009ca6c) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0009ca6c) popup_call_audio_second_window_t

0xd98a,	// (0x0009b30e) bg_popup_call_pane_cp04

0xdbc7,	// (0x0009b54b) list_conf_pane

0xdbcf,	// (0x0009b553) popup_call_audio_conf_window_t1

0xdbdd,	// (0x0009b561) call_thumbnail_pane_g1

0xdbe5,	// (0x0009b569) bg_pinb_pane_ParamLimits

0xdbe5,	// (0x0009b569) bg_pinb_pane

0xdbf3,	// (0x0009b577) find_pinb_pane

0xdbfc,	// (0x0009b580) listscroll_pinb_pane_ParamLimits

0xdbfc,	// (0x0009b580) listscroll_pinb_pane

0xdc0b,	// (0x0009b58f) pinb_bg_pane_g1

0x0e60,	// (0x0008e7e4) pinb_bg_pane_g2

0x0e6a,	// (0x0008e7ee) pinb_bg_pane_g3

0x0e74,	// (0x0008e7f8) pinb_bg_pane_g4

0x0e7e,	// (0x0008e802) pinb_bg_pane_g5

0x0e88,	// (0x0008e80c) pinb_bg_pane_g6

0x0e91,	// (0x0008e815) pinb_bg_pane_g7

0x0e9a,	// (0x0008e81e) pinb_bg_pane_g8

0x0ea5,	// (0x0008e829) pinb_bg_pane_g9

0x0eaf,	// (0x0008e833) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0009ca73) pinb_bg_pane_g

0x0eca,	// (0x0008e84e) grid_pinb_pane

0x0ed3,	// (0x0008e857) list_pinb_pane

0x0edc,	// (0x0008e860) scroll_pane_cp01_ParamLimits

0x0edc,	// (0x0008e860) scroll_pane_cp01

0xdc15,	// (0x0009b599) find_pinb_pane_g1_ParamLimits

0xdc15,	// (0x0009b599) find_pinb_pane_g1

0xdc2d,	// (0x0009b5b1) find_pinb_pane_t1

0xdc3f,	// (0x0009b5c3) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0009ca8d) find_pinb_pane_t

0xdc54,	// (0x0009b5d8) input_focus_pane_cp01_ParamLimits

0xdc54,	// (0x0009b5d8) input_focus_pane_cp01

0x0eee,	// (0x0008e872) cell_pinb_pane_ParamLimits

0x0eee,	// (0x0008e872) cell_pinb_pane

0x0f09,	// (0x0008e88d) cell_pinb_pane_g1_ParamLimits

0x0f09,	// (0x0008e88d) cell_pinb_pane_g1

0x0f19,	// (0x0008e89d) cell_pinb_pane_g2_ParamLimits

0x0f19,	// (0x0008e89d) cell_pinb_pane_g2

0xdc60,	// (0x0009b5e4) cell_pinb_pane_g3_ParamLimits

0xdc60,	// (0x0009b5e4) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0009ca92) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0009ca92) cell_pinb_pane_g

0xd98a,	// (0x0009b30e) grid_highlight_pane_cp01

0x0f25,	// (0x0008e8a9) list_pinb_item_pane_ParamLimits

0x0f25,	// (0x0008e8a9) list_pinb_item_pane

0xd98a,	// (0x0009b30e) list_highlight_pane_cp02

0x0f37,	// (0x0008e8bb) list_pinb_item_pane_g1_ParamLimits

0x0f37,	// (0x0008e8bb) list_pinb_item_pane_g1

0x0f44,	// (0x0008e8c8) list_pinb_item_pane_g2_ParamLimits

0x0f44,	// (0x0008e8c8) list_pinb_item_pane_g2

0x0f50,	// (0x0008e8d4) list_pinb_item_pane_g3_ParamLimits

0x0f50,	// (0x0008e8d4) list_pinb_item_pane_g3

0x0f61,	// (0x0008e8e5) list_pinb_item_pane_g4_ParamLimits

0x0f61,	// (0x0008e8e5) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0009ca99) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0009ca99) list_pinb_item_pane_g

0x0f6d,	// (0x0008e8f1) list_pinb_item_pane_t1_ParamLimits

0x0f6d,	// (0x0008e8f1) list_pinb_item_pane_t1

0x0fa2,	// (0x0008e926) calc_display_pane

0x0fbe,	// (0x0008e942) calc_paper_pane

0x0fdf,	// (0x0008e963) grid_calc_pane

0xd98a,	// (0x0009b30e) bg_list_pane_cp01

0xa016,	// (0x0009799a) clock_g1

0x0ffb,	// (0x0008e97f) clock_g2

0x0001,

0xf11e,	// (0x0009caa2) clock_g

0x1003,	// (0x0008e987) clock_t1_ParamLimits

0x1003,	// (0x0008e987) clock_t1

0x1018,	// (0x0008e99c) clock_t2_ParamLimits

0x1018,	// (0x0008e99c) clock_t2

0x102a,	// (0x0008e9ae) clock_t3_ParamLimits

0x102a,	// (0x0008e9ae) clock_t3

0x103c,	// (0x0008e9c0) clock_t4_ParamLimits

0x103c,	// (0x0008e9c0) clock_t4

0x104e,	// (0x0008e9d2) clock_t5_ParamLimits

0x104e,	// (0x0008e9d2) clock_t5

0x1063,	// (0x0008e9e7) clock_t6_ParamLimits

0x1063,	// (0x0008e9e7) clock_t6

0x1075,	// (0x0008e9f9) clock_t7_ParamLimits

0x1075,	// (0x0008e9f9) clock_t7

0x1087,	// (0x0008ea0b) clock_t8_ParamLimits

0x1087,	// (0x0008ea0b) clock_t8

0x1099,	// (0x0008ea1d) clock_t9_ParamLimits

0x1099,	// (0x0008ea1d) clock_t9

0x0008,

0xf123,	// (0x0009caa7) clock_t_ParamLimits

0xf123,	// (0x0009caa7) clock_t

0xdc6c,	// (0x0009b5f0) popup_clock_analogue_window_cp02

0xdc6c,	// (0x0009b5f0) popup_clock_digital_window_cp01

0xdc74,	// (0x0009b5f8) listscroll_help_pane

0xd98a,	// (0x0009b30e) phob_pre_status_pane

0xdc7e,	// (0x0009b602) grid_qdial_pane

0xdbe5,	// (0x0009b569) listscroll_mce_pane

0xdbe5,	// (0x0009b569) bg_notes_pane

0xdc88,	// (0x0009b60c) list_notes_pane

0x10ab,	// (0x0008ea2f) scroll_pane_cp06

0xdc96,	// (0x0009b61a) bg_calc_paper_pane

0xa01e,	// (0x000979a2) list_calc_pane

0xdcae,	// (0x0009b632) bg_calc_display_pane

0xa038,	// (0x000979bc) calc_display_pane_t1

0xa04d,	// (0x000979d1) calc_display_pane_t2

0xa062,	// (0x000979e6) calc_display_pane_t3

0x0002,

0xf136,	// (0x0009caba) calc_display_pane_t

0x10bd,	// (0x0008ea41) cell_calc_pane_ParamLimits

0x10bd,	// (0x0008ea41) cell_calc_pane

0xdcba,	// (0x0009b63e) bg_calc_paper_pane_g1

0xdcc6,	// (0x0009b64a) bg_calc_paper_pane_g2

0xdcd2,	// (0x0009b656) bg_calc_paper_pane_g3

0xdcde,	// (0x0009b662) bg_calc_paper_pane_g4

0xdcea,	// (0x0009b66e) bg_calc_paper_pane_g5

0x10f0,	// (0x0008ea74) bg_calc_paper_pane_g6

0x10ff,	// (0x0008ea83) bg_calc_paper_pane_g7

0x110e,	// (0x0008ea92) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0009cac1) bg_calc_paper_pane_g

0x111d,	// (0x0008eaa1) calc_bg_paper_pane_g9

0x112c,	// (0x0008eab0) list_calc_item_pane_ParamLimits

0x112c,	// (0x0008eab0) list_calc_item_pane

0xdcf6,	// (0x0009b67a) list_calc_item_pane_g1

0xa074,	// (0x000979f8) list_calc_item_pane_t1_ParamLimits

0xa074,	// (0x000979f8) list_calc_item_pane_t1

0x1140,	// (0x0008eac4) list_calc_item_pane_t2_ParamLimits

0x1140,	// (0x0008eac4) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0009cad2) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0009cad2) list_calc_item_pane_t

0xdd03,	// (0x0009b687) cell_calc_pane_g1

0xdd0d,	// (0x0009b691) grid_highlight_pane_cp02

0xdd2f,	// (0x0009b6b3) bg_calc_display_pane_g1

0xa086,	// (0x00097a0a) bg_calc_display_pane_g2

0xdd38,	// (0x0009b6bc) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0009cadc) bg_calc_display_pane_g

0x116e,	// (0x0008eaf2) cell_qdial_pane_ParamLimits

0x116e,	// (0x0008eaf2) cell_qdial_pane

0x1180,	// (0x0008eb04) cell_qdial_pane_g1_ParamLimits

0x1180,	// (0x0008eb04) cell_qdial_pane_g1

0x1196,	// (0x0008eb1a) cell_qdial_pane_g2_ParamLimits

0x1196,	// (0x0008eb1a) cell_qdial_pane_g2

0xdd41,	// (0x0009b6c5) cell_qdial_pane_g3_ParamLimits

0xdd41,	// (0x0009b6c5) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0009cae3) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0009cae3) cell_qdial_pane_g

0x11bd,	// (0x0008eb41) cell_qdial_pane_t1_ParamLimits

0x11bd,	// (0x0008eb41) cell_qdial_pane_t1

0x11d5,	// (0x0008eb59) cell_qdial_pane_t2_ParamLimits

0x11d5,	// (0x0008eb59) cell_qdial_pane_t2

0x11e8,	// (0x0008eb6c) cell_qdial_pane_t3_ParamLimits

0x11e8,	// (0x0008eb6c) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0009caec) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0009caec) cell_qdial_pane_t

0xd98a,	// (0x0009b30e) grid_highlight_pane_cp04

0xdd4d,	// (0x0009b6d1) thumbnail_qdial_pane_ParamLimits

0xdd4d,	// (0x0009b6d1) thumbnail_qdial_pane

0xdda9,	// (0x0009b72d) list_help_pane

0xddb3,	// (0x0009b737) scroll_pane_cp02

0x11fb,	// (0x0008eb7f) help_list_pane_t1_ParamLimits

0x11fb,	// (0x0008eb7f) help_list_pane_t1

0xa090,	// (0x00097a14) bg_notes_pane_g2

0xa098,	// (0x00097a1c) bg_notes_pane_g3

0xa0a0,	// (0x00097a24) notes_bg_pane_g1

0xa0a8,	// (0x00097a2c) notes_bg_pane_g4

0xa0b0,	// (0x00097a34) notes_bg_pane_g5

0xa0b8,	// (0x00097a3c) notes_bg_pane_g6

0xa0c0,	// (0x00097a44) notes_bg_pane_g7

0xa0c8,	// (0x00097a4c) notes_bg_pane_g8

0xa0d0,	// (0x00097a54) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0009cb0a) notes_bg_pane_g

0x1217,	// (0x0008eb9b) list_notes_text_pane_ParamLimits

0x1217,	// (0x0008eb9b) list_notes_text_pane

0xddbc,	// (0x0009b740) list_notes_text_pane_g1

0x123a,	// (0x0008ebbe) list_notes_text_pane_t1

0x1248,	// (0x0008ebcc) listscroll_cale_week_pane

0x1272,	// (0x0008ebf6) bg_cale_heading_pane

0xdddf,	// (0x0009b763) bg_cale_pane_cp01

0x128a,	// (0x0008ec0e) cale_week_corner_pane

0x12a9,	// (0x0008ec2d) cale_week_day_heading_pane

0x12c6,	// (0x0008ec4a) cale_week_scroll_pane_g1

0x12d9,	// (0x0008ec5d) cale_week_scroll_pane_g2

0x12f1,	// (0x0008ec75) cale_week_scroll_pane_g3

0x1309,	// (0x0008ec8d) cale_week_scroll_pane_g4

0x1321,	// (0x0008eca5) cale_week_scroll_pane_g5

0x1339,	// (0x0008ecbd) cale_week_scroll_pane_g6

0x1351,	// (0x0008ecd5) cale_week_scroll_pane_g7

0x1369,	// (0x0008eced) cale_week_scroll_pane_g8

0x1385,	// (0x0008ed09) cale_week_scroll_pane_g9

0x139d,	// (0x0008ed21) cale_week_scroll_pane_g10

0x13b5,	// (0x0008ed39) cale_week_scroll_pane_g11

0x13cd,	// (0x0008ed51) cale_week_scroll_pane_g12

0x13e5,	// (0x0008ed69) cale_week_scroll_pane_g13

0x13fd,	// (0x0008ed81) cale_week_scroll_pane_g14

0x1415,	// (0x0008ed99) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0009cb19) cale_week_scroll_pane_g

0x1449,	// (0x0008edcd) cale_week_time_pane

0x1465,	// (0x0008ede9) grid_cale_week_pane

0xde0e,	// (0x0009b792) scroll_pane_cp08

0x1483,	// (0x0008ee07) cell_cale_week_pane_ParamLimits

0x1483,	// (0x0008ee07) cell_cale_week_pane

0x14f9,	// (0x0008ee7d) cale_week_day_heading_pane_t1

0x1523,	// (0x0008eea7) cale_week_day_heading_pane_t2

0x1552,	// (0x0008eed6) cale_week_day_heading_pane_t3

0x1581,	// (0x0008ef05) cale_week_day_heading_pane_t4

0x15b0,	// (0x0008ef34) cale_week_day_heading_pane_t5

0x15df,	// (0x0008ef63) cale_week_day_heading_pane_t6

0x160e,	// (0x0008ef92) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0009cb3a) cale_week_day_heading_pane_t

0xde2b,	// (0x0009b7af) bg_cale_side_pane

0x1638,	// (0x0008efbc) cale_week_time_pane_t1

0x1672,	// (0x0008eff6) cale_week_time_pane_t2

0x16ac,	// (0x0008f030) cale_week_time_pane_t3

0x16e6,	// (0x0008f06a) cale_week_time_pane_t4

0x1720,	// (0x0008f0a4) cale_week_time_pane_t5

0x175a,	// (0x0008f0de) cale_week_time_pane_t6

0x1794,	// (0x0008f118) cale_week_time_pane_t7

0x17ce,	// (0x0008f152) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0009cb49) cale_week_time_pane_t

0x1808,	// (0x0008f18c) cell_cale_week_pane_g2

0x1827,	// (0x0008f1ab) cell_cale_week_pane_g3_ParamLimits

0x1827,	// (0x0008f1ab) cell_cale_week_pane_g3

0xde39,	// (0x0009b7bd) grid_highlight_pane_cp07

0xde41,	// (0x0009b7c5) listscroll_gms_pane

0xde4b,	// (0x0009b7cf) grid_gms_pane

0xde54,	// (0x0009b7d8) listscroll_gms_pane_g1

0xde5c,	// (0x0009b7e0) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0009cb5a) listscroll_gms_pane_g

0x183f,	// (0x0008f1c3) scroll_pane_cp010

0x184a,	// (0x0008f1ce) cell_gms_pane_ParamLimits

0x184a,	// (0x0008f1ce) cell_gms_pane

0x185a,	// (0x0008f1de) cell_gms_pane_g1

0xde64,	// (0x0009b7e8) cell_gms_pane_g2

0xddbc,	// (0x0009b740) cell_gms_pane_g3

0xde6c,	// (0x0009b7f0) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0009cb5f) cell_gms_pane_g

0xde75,	// (0x0009b7f9) grid_highlight_pane_cp09

0x45d4,	// (0x00091f58) phob_pre_status_pane_g1

0x45dc,	// (0x00091f60) phob_pre_status_pane_g2

0x45e4,	// (0x00091f68) phob_pre_status_pane_g3

0x45ec,	// (0x00091f70) phob_pre_status_pane_g4

0x0004,

0xf5b7,	// (0x0009cf3b) phob_pre_status_pane_g

0x45fc,	// (0x00091f80) phob_pre_status_pane_t1

0x460a,	// (0x00091f8e) phob_pre_status_pane_t2

0x4618,	// (0x00091f9c) phob_pre_status_pane_t3

0x0002,

0xf5c2,	// (0x0009cf46) phob_pre_status_pane_t

0xde7d,	// (0x0009b801) bg_list_pane_cp05

0x186a,	// (0x0008f1ee) grid_vorec_pane

0xde85,	// (0x0009b809) vorec_t1

0xde93,	// (0x0009b817) vorec_t2

0xdea1,	// (0x0009b825) vorec_t3

0x1872,	// (0x0008f1f6) vorec_t4

0x9f62,	// (0x000978e6) vorec_t5

0x9f70,	// (0x000978f4) vorec_t6

0x0004,

0xf1e4,	// (0x0009cb68) vorec_t

0x9f7e,	// (0x00097902) wait_bar_pane_cp01

0x1880,	// (0x0008f204) cell_vorec_pane_ParamLimits

0x1880,	// (0x0008f204) cell_vorec_pane

0xa0d8,	// (0x00097a5c) cell_vorec_pane_g1

0xd98a,	// (0x0009b30e) grid_highlight_pane_cp05

0x18a5,	// (0x0008f229) cams_zoom_pane

0x18b4,	// (0x0008f238) image_vga_pane

0x18cc,	// (0x0008f250) main_camera_pane_g1

0x18dc,	// (0x0008f260) main_camera_pane_g2

0x18ec,	// (0x0008f270) main_camera_pane_g3

0x18fc,	// (0x0008f280) main_camera_pane_g4

0x190c,	// (0x0008f290) main_camera_pane_g5

0x191c,	// (0x0008f2a0) main_camera_pane_g6

0x192c,	// (0x0008f2b0) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0009cb73) main_camera_pane_g

0x193c,	// (0x0008f2c0) main_camera_pane_t1

0x1952,	// (0x0008f2d6) main_camera_pane_t2

0x0001,

0xf200,	// (0x0009cb84) main_camera_pane_t

0x1984,	// (0x0008f308) cams_zoom_pane_cp_ParamLimits

0x1984,	// (0x0008f308) cams_zoom_pane_cp

0x19ac,	// (0x0008f330) image_cif_pane_ParamLimits

0x19ac,	// (0x0008f330) image_cif_pane

0x19dd,	// (0x0008f361) image_subqcif_pane

0x19e5,	// (0x0008f369) main_video_pane_g1_ParamLimits

0x19e5,	// (0x0008f369) main_video_pane_g1

0x1a09,	// (0x0008f38d) main_video_pane_g2_ParamLimits

0x1a09,	// (0x0008f38d) main_video_pane_g2

0x1a3d,	// (0x0008f3c1) main_video_pane_g3_ParamLimits

0x1a3d,	// (0x0008f3c1) main_video_pane_g3

0x1a6b,	// (0x0008f3ef) main_video_pane_g4_ParamLimits

0x1a6b,	// (0x0008f3ef) main_video_pane_g4

0x1a99,	// (0x0008f41d) main_video_pane_g5_ParamLimits

0x1a99,	// (0x0008f41d) main_video_pane_g5

0xdec9,	// (0x0009b84d) main_video_pane_g6_ParamLimits

0xdec9,	// (0x0009b84d) main_video_pane_g6

0x0006,

0xf205,	// (0x0009cb89) main_video_pane_g_ParamLimits

0xf205,	// (0x0009cb89) main_video_pane_g

0x1ac0,	// (0x0008f444) main_video_pane_t1_ParamLimits

0x1ac0,	// (0x0008f444) main_video_pane_t1

0xdee3,	// (0x0009b867) cams_zoom_pane_g1

0xdeec,	// (0x0009b870) cams_zoom_pane_g2

0xdef5,	// (0x0009b879) cams_zoom_pane_g3

0xdefe,	// (0x0009b882) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0009cb98) cams_zoom_pane_g

0x1b1d,	// (0x0008f4a1) grid_cams_pane

0x1b32,	// (0x0008f4b6) linegrid_cams_pane

0x1b43,	// (0x0008f4c7) cell_cams_pane_ParamLimits

0x1b43,	// (0x0008f4c7) cell_cams_pane

0xdf07,	// (0x0009b88b) cams_burst_image_pane

0xdf0f,	// (0x0009b893) cell_cams_pane_g1

0xd98a,	// (0x0009b30e) grid_highlight_pane_cp03

0xdd03,	// (0x0009b687) mp_bg_pane_g1

0xd98a,	// (0x0009b30e) bg_list_pane_cp03

0x4579,	// (0x00091efd) bg_mp_pane

0x4581,	// (0x00091f05) grid_mp_pane

0x4589,	// (0x00091f0d) media_player_g1

0xa1d3,	// (0x00097b57) media_player_t1

0xa1e1,	// (0x00097b65) media_player_t2

0xa1ef,	// (0x00097b73) media_player_t3

0xa1fd,	// (0x00097b81) media_player_t4

0xa20b,	// (0x00097b8f) media_player_t5

0xa219,	// (0x00097b9d) media_player_t6

0xa227,	// (0x00097bab) media_player_t7

0x0006,

0xf5a1,	// (0x0009cf25) media_player_t

0xa235,	// (0x00097bb9) wait_bar_pane_cp02

0xf586,	// (0x0009cf0a) main_usb_pane_t

0x45cb,	// (0x00091f4f) cell_mp_pane

0xdd03,	// (0x0009b687) cell_mp_pane_g1

0xd98a,	// (0x0009b30e) grid_highlight_pane_cp06

0xdf17,	// (0x0009b89b) grid_skin_colour_pane

0xdf1f,	// (0x0009b8a3) list_highlight_pane_cp03

0x1c51,	// (0x0008f5d5) skin_g1

0xdf27,	// (0x0009b8ab) skin_t1

0xdf36,	// (0x0009b8ba) skin_t2

0x0001,

0xf249,	// (0x0009cbcd) skin_t

0x1c59,	// (0x0008f5dd) cell_skin_colour_pane_ParamLimits

0x1c59,	// (0x0008f5dd) cell_skin_colour_pane

0xdf44,	// (0x0009b8c8) cell_skin_colour_pane_g1

0x1cc2,	// (0x0008f646) call_video_g1_ParamLimits

0x1cc2,	// (0x0008f646) call_video_g1

0x1cd8,	// (0x0008f65c) call_video_g2_ParamLimits

0x1cd8,	// (0x0008f65c) call_video_g2

0x0001,

0xf24e,	// (0x0009cbd2) call_video_g_ParamLimits

0xf24e,	// (0x0009cbd2) call_video_g

0x1d20,	// (0x0008f6a4) call_video_uplink_pane_cp1_ParamLimits

0x1d20,	// (0x0008f6a4) call_video_uplink_pane_cp1

0xdf56,	// (0x0009b8da) call_video_uplink_pane_cp2

0x1db5,	// (0x0008f739) video_down_crop_pane_ParamLimits

0x1db5,	// (0x0008f739) video_down_crop_pane

0x1e78,	// (0x0008f7fc) video_down_pane_ParamLimits

0x1e78,	// (0x0008f7fc) video_down_pane

0xdf5e,	// (0x0009b8e2) video_down_subqcif_pane_ParamLimits

0xdf5e,	// (0x0009b8e2) video_down_subqcif_pane

0xdf76,	// (0x0009b8fa) video_down_subqcif_pane_cp_ParamLimits

0xdf76,	// (0x0009b8fa) video_down_subqcif_pane_cp

0xdf9a,	// (0x0009b91e) im_reading_pane_ParamLimits

0xdf9a,	// (0x0009b91e) im_reading_pane

0x1f35,	// (0x0008f8b9) im_writing_pane_ParamLimits

0x1f35,	// (0x0008f8b9) im_writing_pane

0x1f4b,	// (0x0008f8cf) im_reading_pane_t1

0xdfb4,	// (0x0009b938) list_im_pane

0xdfc5,	// (0x0009b949) scroll_pane_cp07

0x1f81,	// (0x0008f905) im_writing_pane_t1_ParamLimits

0x1f81,	// (0x0008f905) im_writing_pane_t1

0xdfde,	// (0x0009b962) im_writing_pane_t2_ParamLimits

0xdfde,	// (0x0009b962) im_writing_pane_t2

0x0001,

0xf258,	// (0x0009cbdc) im_writing_pane_t_ParamLimits

0xf258,	// (0x0009cbdc) im_writing_pane_t

0xd98a,	// (0x0009b30e) input_focus_pane_cp04

0xd98a,	// (0x0009b30e) input_focus_pane_cp05

0x1f96,	// (0x0008f91a) list_im_single_pane_ParamLimits

0x1f96,	// (0x0008f91a) list_im_single_pane

0xdffb,	// (0x0009b97f) list_single_im_pane_t1

0x4591,	// (0x00091f15) blid_accuracy_pane

0x4599,	// (0x00091f1d) blid_compass_pane

0x45a1,	// (0x00091f25) main_location_t1

0x45af,	// (0x00091f33) main_location_t2

0x45bd,	// (0x00091f41) main_location_t3

0x0002,

0xf5b0,	// (0x0009cf34) main_location_t

0xd98a,	// (0x0009b30e) aid_levels_location

0xdd03,	// (0x0009b687) blid_accuracy_pane_g1

0xdd03,	// (0x0009b687) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0009cc3e) blid_accuracy_pane_g

0xe035,	// (0x0009b9b9) wml_content_pane

0xe073,	// (0x0009b9f7) wml_button_pane_ParamLimits

0xe073,	// (0x0009b9f7) wml_button_pane

0x1fac,	// (0x0008f930) wml_list_single_large_pane_ParamLimits

0x1fac,	// (0x0008f930) wml_list_single_large_pane

0x1fc0,	// (0x0008f944) wml_list_single_medium_pane_ParamLimits

0x1fc0,	// (0x0008f944) wml_list_single_medium_pane

0x1fd5,	// (0x0008f959) wml_list_single_small_pane_ParamLimits

0x1fd5,	// (0x0008f959) wml_list_single_small_pane

0xe087,	// (0x0009ba0b) wml_selection_box_pane_ParamLimits

0xe087,	// (0x0009ba0b) wml_selection_box_pane

0xe09a,	// (0x0009ba1e) wml_list_single_pane_t1

0xe0a9,	// (0x0009ba2d) wml_list_single_medium_pane_t1

0xe0b8,	// (0x0009ba3c) wml_list_single_large_pane_t1

0xe0c7,	// (0x0009ba4b) input_focus_pane_cp02_ParamLimits

0xe0c7,	// (0x0009ba4b) input_focus_pane_cp02

0xe0da,	// (0x0009ba5e) wml_selection_box_pane_g1

0xe0e3,	// (0x0009ba67) wml_selection_box_pane_t1_ParamLimits

0xe0e3,	// (0x0009ba67) wml_selection_box_pane_t1

0xdbe5,	// (0x0009b569) bg_wml_button_pane_ParamLimits

0xdbe5,	// (0x0009b569) bg_wml_button_pane

0xe0fb,	// (0x0009ba7f) wml_button_pane_g1

0xe11e,	// (0x0009baa2) wml_button_pane_t1

0xe0fb,	// (0x0009ba7f) wml_button_bg_pane_g1

0xe12e,	// (0x0009bab2) wml_button_bg_pane_g2

0xe136,	// (0x0009baba) wml_button_bg_pane_g3

0xe13e,	// (0x0009bac2) wml_button_bg_pane_g4

0xe146,	// (0x0009baca) wml_button_bg_pane_g5

0xe14e,	// (0x0009bad2) wml_button_bg_pane_g6

0xe156,	// (0x0009bada) wml_button_bg_pane_g7

0xe15e,	// (0x0009bae2) wml_button_bg_pane_g8

0xe166,	// (0x0009baea) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0009cbe1) wml_button_bg_pane_g

0x1fec,	// (0x0008f970) bg_list_pane_cp02

0xe16e,	// (0x0009baf2) mce_header_pane_ParamLimits

0xe16e,	// (0x0009baf2) mce_header_pane

0xe182,	// (0x0009bb06) mce_icon_pane

0xe182,	// (0x0009bb06) mce_image_pane

0xe18b,	// (0x0009bb0f) mce_text_pane_ParamLimits

0xe18b,	// (0x0009bb0f) mce_text_pane

0x1ff5,	// (0x0008f979) scroll_pane_cp03

0x1ff5,	// (0x0008f979) scroll_pane_cp04

0xe19f,	// (0x0009bb23) scroll_pane_cp05_ParamLimits

0xe19f,	// (0x0009bb23) scroll_pane_cp05

0x1fff,	// (0x0008f983) mce_header_field_pane_ParamLimits

0x1fff,	// (0x0008f983) mce_header_field_pane

0x2016,	// (0x0008f99a) mce_header_field_pane_2_ParamLimits

0x2016,	// (0x0008f99a) mce_header_field_pane_2

0x202c,	// (0x0008f9b0) mce_header_field_pane_3

0x2034,	// (0x0008f9b8) list_single_mce_message_pane_ParamLimits

0x2034,	// (0x0008f9b8) list_single_mce_message_pane

0x2049,	// (0x0008f9cd) list_single_mce_smart_pane_ParamLimits

0x2049,	// (0x0008f9cd) list_single_mce_smart_pane

0xe1ab,	// (0x0009bb2f) input_focus_pane_cp03

0xe1b4,	// (0x0009bb38) list_header_data_pane

0x2069,	// (0x0008f9ed) mce_header_field_pane_t1

0x2077,	// (0x0008f9fb) list_single_mce_header_pane_ParamLimits

0x2077,	// (0x0008f9fb) list_single_mce_header_pane

0xe1bc,	// (0x0009bb40) list_single_mce_header_pane_t1

0xe1cb,	// (0x0009bb4f) list_single_mce_message_pane_g1

0xe1d4,	// (0x0009bb58) list_single_mce_message_pane_t1

0x20b1,	// (0x0008fa35) bg_cale_heading_pane_cp01_ParamLimits

0x20b1,	// (0x0008fa35) bg_cale_heading_pane_cp01

0xe1e3,	// (0x0009bb67) bg_cale_pane_cp02_ParamLimits

0xe1e3,	// (0x0009bb67) bg_cale_pane_cp02

0x20e0,	// (0x0008fa64) cale_month_corner_pane

0x20ff,	// (0x0008fa83) cale_month_day_heading_pane_ParamLimits

0x20ff,	// (0x0008fa83) cale_month_day_heading_pane

0x2136,	// (0x0008faba) cale_month_pane_g1_ParamLimits

0x2136,	// (0x0008faba) cale_month_pane_g1

0x215a,	// (0x0008fade) cale_month_pane_g2_ParamLimits

0x215a,	// (0x0008fade) cale_month_pane_g2

0x2182,	// (0x0008fb06) cale_month_pane_g3_ParamLimits

0x2182,	// (0x0008fb06) cale_month_pane_g3

0x21be,	// (0x0008fb42) cale_month_pane_g4_ParamLimits

0x21be,	// (0x0008fb42) cale_month_pane_g4

0x21fa,	// (0x0008fb7e) cale_month_pane_g5_ParamLimits

0x21fa,	// (0x0008fb7e) cale_month_pane_g5

0x2236,	// (0x0008fbba) cale_month_pane_g6_ParamLimits

0x2236,	// (0x0008fbba) cale_month_pane_g6

0x2272,	// (0x0008fbf6) cale_month_pane_g7_ParamLimits

0x2272,	// (0x0008fbf6) cale_month_pane_g7

0x22ae,	// (0x0008fc32) cale_month_pane_g8_ParamLimits

0x22ae,	// (0x0008fc32) cale_month_pane_g8

0x22f2,	// (0x0008fc76) cale_month_pane_g9_ParamLimits

0x22f2,	// (0x0008fc76) cale_month_pane_g9

0x2334,	// (0x0008fcb8) cale_month_pane_g10_ParamLimits

0x2334,	// (0x0008fcb8) cale_month_pane_g10

0x2376,	// (0x0008fcfa) cale_month_pane_g11_ParamLimits

0x2376,	// (0x0008fcfa) cale_month_pane_g11

0x23b8,	// (0x0008fd3c) cale_month_pane_g12_ParamLimits

0x23b8,	// (0x0008fd3c) cale_month_pane_g12

0x23fa,	// (0x0008fd7e) cale_month_pane_g13_ParamLimits

0x23fa,	// (0x0008fd7e) cale_month_pane_g13

0x000c,

0xf270,	// (0x0009cbf4) cale_month_pane_g_ParamLimits

0xf270,	// (0x0009cbf4) cale_month_pane_g

0x243c,	// (0x0008fdc0) cale_month_week_pane

0x2458,	// (0x0008fddc) grid_cale_month_pane_ParamLimits

0x2458,	// (0x0008fddc) grid_cale_month_pane

0x2486,	// (0x0008fe0a) cale_month_day_heading_pane_t1

0x250c,	// (0x0008fe90) cale_month_day_heading_pane_t2

0x259d,	// (0x0008ff21) cale_month_day_heading_pane_t3

0x262e,	// (0x0008ffb2) cale_month_day_heading_pane_t4

0x26bf,	// (0x00090043) cale_month_day_heading_pane_t5

0x2750,	// (0x000900d4) cale_month_day_heading_pane_t6

0x27e1,	// (0x00090165) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0009cc0f) cale_month_day_heading_pane_t

0xde2b,	// (0x0009b7af) bg_cale_side_pane_cp01

0x2876,	// (0x000901fa) cale_month_week_pane_t1

0x288f,	// (0x00090213) cale_month_week_pane_t2

0x28a8,	// (0x0009022c) cale_month_week_pane_t3

0x28c1,	// (0x00090245) cale_month_week_pane_t4

0x28da,	// (0x0009025e) cale_month_week_pane_t5

0x28f3,	// (0x00090277) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0009cc1e) cale_month_week_pane_t

0x290c,	// (0x00090290) cell_cale_month_pane_ParamLimits

0x290c,	// (0x00090290) cell_cale_month_pane

0xa0e2,	// (0x00097a66) cell_cale_month_pane_g1

0x2a28,	// (0x000903ac) cell_cale_month_pane_t1_ParamLimits

0x2a28,	// (0x000903ac) cell_cale_month_pane_t1

0xde39,	// (0x0009b7bd) grid_highlight_pane_cp08

0xdd03,	// (0x0009b687) main_smil_g1

0x2a48,	// (0x000903cc) smil_status_pane

0xe222,	// (0x0009bba6) smil_text_pane

0x43d1,	// (0x00091d55) bg_popup_call3_rect_pane_g8

0x43d9,	// (0x00091d5d) bg_popup_call3_rect_pane_g9

0x0008,

0xf531,	// (0x0009ceb5) bg_popup_call3_rect_pane_g

0xa384,	// (0x00097d08) smil_status_volume_pane_g1

0x2a59,	// (0x000903dd) smil_status_pane_t1

0xa3b7,	// (0x00097d3b) volume_smil_pane

0xe22c,	// (0x0009bbb0) list_smil_text_pane

0x2a70,	// (0x000903f4) scroll_pane_cp011

0x2a7b,	// (0x000903ff) smil_text_list_pane_t1_ParamLimits

0x2a7b,	// (0x000903ff) smil_text_list_pane_t1

0xa0ee,	// (0x00097a72) aid_volume_smil_ParamLimits

0xa0ee,	// (0x00097a72) aid_volume_smil

0xdd03,	// (0x0009b687) smil_volume_pane_g1

0xdd03,	// (0x0009b687) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0009cc3e) smil_volume_pane_g

0x1248,	// (0x0008ebcc) listscroll_cale_day_pane

0xe236,	// (0x0009bbba) bg_cale_pane

0xe24e,	// (0x0009bbd2) list_cale_pane

0xe271,	// (0x0009bbf5) scroll_pane_cp09

0xe282,	// (0x0009bc06) cale_bg_pane_g1

0xe28a,	// (0x0009bc0e) cale_bg_pane_g2

0xe292,	// (0x0009bc16) cale_bg_pane_g3

0xe29a,	// (0x0009bc1e) cale_bg_pane_g4

0xe2a2,	// (0x0009bc26) cale_bg_pane_g5

0xe2aa,	// (0x0009bc2e) cale_bg_pane_g6

0xe2b2,	// (0x0009bc36) cale_bg_pane_g7

0xe2ba,	// (0x0009bc3e) cale_bg_pane_g8

0xe2c2,	// (0x0009bc46) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0009cc43) cale_bg_pane_g

0x2abf,	// (0x00090443) list_cale_time_pane_ParamLimits

0x2abf,	// (0x00090443) list_cale_time_pane

0xe2ca,	// (0x0009bc4e) list_cale_time_pane_g1_ParamLimits

0xe2ca,	// (0x0009bc4e) list_cale_time_pane_g1

0xe2d6,	// (0x0009bc5a) list_cale_time_pane_g2_ParamLimits

0xe2d6,	// (0x0009bc5a) list_cale_time_pane_g2

0x2ad4,	// (0x00090458) list_cale_time_pane_g3_ParamLimits

0x2ad4,	// (0x00090458) list_cale_time_pane_g3

0x2ae0,	// (0x00090464) list_cale_time_pane_g4_ParamLimits

0x2ae0,	// (0x00090464) list_cale_time_pane_g4

0x2aec,	// (0x00090470) list_cale_time_pane_g5_ParamLimits

0x2aec,	// (0x00090470) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0009cc56) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0009cc56) list_cale_time_pane_g

0xe2f0,	// (0x0009bc74) list_cale_time_pane_t1_ParamLimits

0xe2f0,	// (0x0009bc74) list_cale_time_pane_t1

0xe318,	// (0x0009bc9c) list_cale_time_pane_t2_ParamLimits

0xe318,	// (0x0009bc9c) list_cale_time_pane_t2

0x2e82,	// (0x00090806) aid_blid_cardinal_pane

0x2ec0,	// (0x00090844) compass_pane_t4

0xe340,	// (0x0009bcc4) list_cale_time_pane_t4_ParamLimits

0xe340,	// (0x0009bcc4) list_cale_time_pane_t4

0x2ece,	// (0x00090852) compass_pane_t5

0x2edc,	// (0x00090860) compass_pane_t6

0x2eea,	// (0x0009086e) compass_pane_t7

0xe79f,	// (0x0009c123) navi_pane_cc_t1

0xe944,	// (0x0009c2c8) aid_phob_thumbnail_center_pane

0x34ee,	// (0x00090e72) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0009cc63) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0009cc63) list_cale_time_pane_t

0xd499,	// (0x0009ae1d) bg_popup_window_pane_cp02_ParamLimits

0xd499,	// (0x0009ae1d) bg_popup_window_pane_cp02

0xe368,	// (0x0009bcec) heading_pane_cp01_ParamLimits

0xe368,	// (0x0009bcec) heading_pane_cp01

0xe374,	// (0x0009bcf8) loc_req_pane_ParamLimits

0xe374,	// (0x0009bcf8) loc_req_pane

0xe384,	// (0x0009bd08) loc_type_pane_ParamLimits

0xe384,	// (0x0009bd08) loc_type_pane

0xe396,	// (0x0009bd1a) loc_type_pane_t1_ParamLimits

0xe396,	// (0x0009bd1a) loc_type_pane_t1

0xe3a8,	// (0x0009bd2c) loc_type_pane_t2_ParamLimits

0xe3a8,	// (0x0009bd2c) loc_type_pane_t2

0xe3ba,	// (0x0009bd3e) loc_type_pane_t3_ParamLimits

0xe3ba,	// (0x0009bd3e) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0009cc6a) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0009cc6a) loc_type_pane_t

0xe3cc,	// (0x0009bd50) list_loc_req_pane

0xe3d6,	// (0x0009bd5a) scroll_pane_cp012

0x2af8,	// (0x0009047c) list_single_loc_request_popup_menu_pane_ParamLimits

0x2af8,	// (0x0009047c) list_single_loc_request_popup_menu_pane

0xe3df,	// (0x0009bd63) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe3df,	// (0x0009bd63) list_single_loc_request_popup_menu_pane_g1

0xe3eb,	// (0x0009bd6f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe3eb,	// (0x0009bd6f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0009cc71) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0009cc71) list_single_loc_request_popup_menu_pane_g

0xe3f7,	// (0x0009bd7b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe3f7,	// (0x0009bd7b) list_single_loc_request_popup_menu_pane_t1

0xdbe5,	// (0x0009b569) bg_popup_window_pane_cp03_ParamLimits

0xdbe5,	// (0x0009b569) bg_popup_window_pane_cp03

0xed95,	// (0x0009c719) heading_loc_req_pane_ParamLimits

0xed95,	// (0x0009c719) heading_loc_req_pane

0x2b05,	// (0x00090489) popup_dyc_status_message_window_g1_ParamLimits

0x2b05,	// (0x00090489) popup_dyc_status_message_window_g1

0x2b19,	// (0x0009049d) popup_dyc_status_message_window_t1_ParamLimits

0x2b19,	// (0x0009049d) popup_dyc_status_message_window_t1

0x2b2e,	// (0x000904b2) popup_dyc_status_message_window_t2_ParamLimits

0x2b2e,	// (0x000904b2) popup_dyc_status_message_window_t2

0x2b43,	// (0x000904c7) popup_dyc_status_message_window_t3_ParamLimits

0x2b43,	// (0x000904c7) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0009cc76) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0009cc76) popup_dyc_status_message_window_t

0xd98a,	// (0x0009b30e) bg_heading_pane_cp01

0xe40d,	// (0x0009bd91) heading_loc_req_pane_g1

0xe415,	// (0x0009bd99) heading_loc_req_pane_g2

0xe41d,	// (0x0009bda1) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0009cc7d) heading_loc_req_pane_g

0xe425,	// (0x0009bda9) heading_loc_req_pane_t1

0xe434,	// (0x0009bdb8) bg_popup_sub_pane_cp01_ParamLimits

0xe434,	// (0x0009bdb8) bg_popup_sub_pane_cp01

0xe442,	// (0x0009bdc6) popup_cale_events_window_g1_ParamLimits

0xe442,	// (0x0009bdc6) popup_cale_events_window_g1

0xe462,	// (0x0009bde6) popup_cale_events_window_g2_ParamLimits

0xe462,	// (0x0009bde6) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0009ccb1) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0009ccb1) popup_cale_events_window_g

0xe482,	// (0x0009be06) popup_cale_events_window_t1_ParamLimits

0xe482,	// (0x0009be06) popup_cale_events_window_t1

0xe494,	// (0x0009be18) popup_cale_events_window_t2_ParamLimits

0xe494,	// (0x0009be18) popup_cale_events_window_t2

0xe4d2,	// (0x0009be56) popup_cale_events_window_t3_ParamLimits

0xe4d2,	// (0x0009be56) popup_cale_events_window_t3

0xe50c,	// (0x0009be90) popup_cale_events_window_t4_ParamLimits

0xe50c,	// (0x0009be90) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0009ccb6) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0009ccb6) popup_cale_events_window_t

0x2c6d,	// (0x000905f1) call_type_pane

0x2c7d,	// (0x00090601) popup_call_status_window_g1

0x2c91,	// (0x00090615) popup_call_status_window_g2

0x2ca5,	// (0x00090629) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0009ccbf) popup_call_status_window_g

0xe542,	// (0x0009bec6) call_type_pane_g1

0xe54b,	// (0x0009becf) call_type_pane_g2

0x0001,

0xf342,	// (0x0009ccc6) call_type_pane_g

0xd98a,	// (0x0009b30e) bg_popup_sub_pane_cp02

0xe554,	// (0x0009bed8) listscroll_popup_wml_pane

0xe55c,	// (0x0009bee0) list_wml_pane

0xe566,	// (0x0009beea) scroll_pane_cp013

0x2cb5,	// (0x00090639) list_single_graphic_popup_wml_pane_ParamLimits

0x2cb5,	// (0x00090639) list_single_graphic_popup_wml_pane

0xdd03,	// (0x0009b687) list_single_graphic_popup_wml_pane_g1

0xe56f,	// (0x0009bef3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0009cccb) list_single_graphic_popup_wml_pane_g

0xe577,	// (0x0009befb) list_single_graphic_popup_wml_pane_t1

0xe58d,	// (0x0009bf11) aid_call_pane

0xdbdd,	// (0x0009b561) popup_clock_analogue_window_g1

0xdbdd,	// (0x0009b561) popup_clock_analogue_window_g2

0xa110,	// (0x00097a94) popup_clock_analogue_window_g3

0xa110,	// (0x00097a94) popup_clock_analogue_window_g4

0xdd03,	// (0x0009b687) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0009ccd0) popup_clock_analogue_window_g

0xa118,	// (0x00097a9c) popup_clock_analogue_window_t1

0xa126,	// (0x00097aaa) clock_digital_number_pane_ParamLimits

0xa126,	// (0x00097aaa) clock_digital_number_pane

0xa132,	// (0x00097ab6) clock_digital_number_pane_cp02_ParamLimits

0xa132,	// (0x00097ab6) clock_digital_number_pane_cp02

0xa13e,	// (0x00097ac2) clock_digital_number_pane_cp03_ParamLimits

0xa13e,	// (0x00097ac2) clock_digital_number_pane_cp03

0xa14a,	// (0x00097ace) clock_digital_number_pane_cp04_ParamLimits

0xa14a,	// (0x00097ace) clock_digital_number_pane_cp04

0xa156,	// (0x00097ada) clock_digital_separator_pane_ParamLimits

0xa156,	// (0x00097ada) clock_digital_separator_pane

0xa162,	// (0x00097ae6) popup_clock_digital_window_t1

0xdd03,	// (0x0009b687) clock_digital_number_pane_g1

0xdd03,	// (0x0009b687) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0009cc3e) clock_digital_number_pane_g

0xdd03,	// (0x0009b687) clock_digital_separator_pane_g1

0xdd03,	// (0x0009b687) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0009cc3e) clock_digital_separator_pane_g

0xd98a,	// (0x0009b30e) bg_popup_window_pane_cp04

0xe595,	// (0x0009bf19) heading_pane_cp03

0xe59d,	// (0x0009bf21) listscroll_popup_gms_pane

0xe5a5,	// (0x0009bf29) grid_large_graphic_popup_pane

0xe5af,	// (0x0009bf33) listscroll_popup_gms_pane_g1

0xe5b7,	// (0x0009bf3b) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0009ccdb) listscroll_popup_gms_pane_g

0xe06b,	// (0x0009b9ef) scroll_pane_cp014

0x2cc8,	// (0x0009064c) cell_large_graphic_popup_pane_ParamLimits

0x2cc8,	// (0x0009064c) cell_large_graphic_popup_pane

0x2cde,	// (0x00090662) cell_large_graphic_popup_pane_g1_ParamLimits

0x2cde,	// (0x00090662) cell_large_graphic_popup_pane_g1

0xe5bf,	// (0x0009bf43) cell_large_graphic_popup_pane_g2_ParamLimits

0xe5bf,	// (0x0009bf43) cell_large_graphic_popup_pane_g2

0xe5cb,	// (0x0009bf4f) cell_large_graphic_popup_pane_g3_ParamLimits

0xe5cb,	// (0x0009bf4f) cell_large_graphic_popup_pane_g3

0xe5d8,	// (0x0009bf5c) cell_large_graphic_popup_pane_g4_ParamLimits

0xe5d8,	// (0x0009bf5c) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0009cce0) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0009cce0) cell_large_graphic_popup_pane_g

0xe5e8,	// (0x0009bf6c) grid_highlight_pane_cp010

0xdd03,	// (0x0009b687) bg_popup_call_pane_g1

0xe5f2,	// (0x0009bf76) list_single_graphic_popup_conf_pane_ParamLimits

0xe5f2,	// (0x0009bf76) list_single_graphic_popup_conf_pane

0xe605,	// (0x0009bf89) list_highlight_pane_cp01

0xe60e,	// (0x0009bf92) list_single_graphic_popup_conf_pane_g1

0xe616,	// (0x0009bf9a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0009cce9) list_single_graphic_popup_conf_pane_g

0xe61e,	// (0x0009bfa2) list_single_graphic_popup_conf_pane_t1

0xe62c,	// (0x0009bfb0) linegrid_cams_pane_g1

0x2cea,	// (0x0009066e) linegrid_cams_pane_g2

0xddbc,	// (0x0009b740) linegrid_cams_pane_g3

0xe635,	// (0x0009bfb9) linegrid_cams_pane_g4

0x2cf3,	// (0x00090677) linegrid_cams_pane_g5

0x2cfc,	// (0x00090680) linegrid_cams_pane_g6

0xde6c,	// (0x0009b7f0) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0009ccee) linegrid_cams_pane_g

0xe63e,	// (0x0009bfc2) popup_clock_analogue_window

0xe63e,	// (0x0009bfc2) popup_clock_digital_window

0xd98a,	// (0x0009b30e) popup_phob_thumbnail_window

0xdd03,	// (0x0009b687) call_video_uplink_pane_g1

0xe647,	// (0x0009bfcb) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0009ccfd) call_video_uplink_pane_g

0xde39,	// (0x0009b7bd) video_uplink_pane

0xe64f,	// (0x0009bfd3) mce_image_pane_g1

0x2d05,	// (0x00090689) mce_image_pane_g2

0x2d0d,	// (0x00090691) mce_image_pane_g3

0x2d15,	// (0x00090699) mce_image_pane_g4

0x2d1d,	// (0x000906a1) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0009cd02) mce_image_pane_g

0xe659,	// (0x0009bfdd) control_top_pane_stacon_cp01_ParamLimits

0xe659,	// (0x0009bfdd) control_top_pane_stacon_cp01

0xe669,	// (0x0009bfed) uni_indicator_pane_stacon_cp01_ParamLimits

0xe669,	// (0x0009bfed) uni_indicator_pane_stacon_cp01

0xe67a,	// (0x0009bffe) bg_popup_sub_pane_cp03

0xe684,	// (0x0009c008) chi_dic_find_pane

0x2d25,	// (0x000906a9) listscroll_chi_dic_pane

0xe68c,	// (0x0009c010) main_pane_chidic_g1

0xe694,	// (0x0009c018) chi_dic_find_pane_t1

0xe6a2,	// (0x0009c026) find_chidic_pane

0xe6ab,	// (0x0009c02f) chi_dic_list_pane_ParamLimits

0xe6ab,	// (0x0009c02f) chi_dic_list_pane

0xe6bc,	// (0x0009c040) scroll_pane_cp020

0xe6c4,	// (0x0009c048) find_chidic_pane_t1

0xd98a,	// (0x0009b30e) input_focus_pane_cp06

0x2d39,	// (0x000906bd) list_chi_dic_pane_ParamLimits

0x2d39,	// (0x000906bd) list_chi_dic_pane

0x2d4b,	// (0x000906cf) list_chi_dic_pane_t1_ParamLimits

0x2d4b,	// (0x000906cf) list_chi_dic_pane_t1

0xd98a,	// (0x0009b30e) list_highlight_pane_cp020

0xe6d3,	// (0x0009c057) bg_cale_heading_pane_g1

0x2d5e,	// (0x000906e2) bg_cale_heading_pane_g2

0x2d66,	// (0x000906ea) bg_cale_heading_pane_g3

0x2d6e,	// (0x000906f2) bg_cale_heading_pane_g4

0x2d76,	// (0x000906fa) bg_cale_heading_pane_g5

0x2d7e,	// (0x00090702) bg_cale_heading_pane_g6

0x2d86,	// (0x0009070a) bg_cale_heading_pane_g7

0x2d8e,	// (0x00090712) bg_cale_heading_pane_g8

0x2d96,	// (0x0009071a) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0009cd0d) bg_cale_heading_pane_g

0xe6d3,	// (0x0009c057) bg_cale_side_pane_g1

0x2d9e,	// (0x00090722) bg_cale_side_pane_g2

0x2da6,	// (0x0009072a) bg_cale_side_pane_g3

0x2dae,	// (0x00090732) bg_cale_side_pane_g4

0x2db6,	// (0x0009073a) bg_cale_side_pane_g5

0x2dbe,	// (0x00090742) bg_cale_side_pane_g6

0x2dc6,	// (0x0009074a) bg_cale_side_pane_g7

0x2dce,	// (0x00090752) bg_cale_side_pane_g8

0x2dd6,	// (0x0009075a) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0009cd20) bg_cale_side_pane_g

0x2dde,	// (0x00090762) popup_call_status_window_ParamLimits

0x2dde,	// (0x00090762) popup_call_status_window

0xe6db,	// (0x0009c05f) stacon_top_pane

0xe6e3,	// (0x0009c067) status_pane_ParamLimits

0xe6e3,	// (0x0009c067) status_pane

0xe6fd,	// (0x0009c081) status_small_pane

0xe705,	// (0x0009c089) control_pane

0xd98a,	// (0x0009b30e) stacon_bottom_pane

0xe70d,	// (0x0009c091) list_single_mce_smart_pane_t1_ParamLimits

0xe70d,	// (0x0009c091) list_single_mce_smart_pane_t1

0xe720,	// (0x0009c0a4) list_single_mce_smart_pane_t2_ParamLimits

0xe720,	// (0x0009c0a4) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0009cd33) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0009cd33) list_single_mce_smart_pane_t

0x2e25,	// (0x000907a9) compass_pane

0x2e2e,	// (0x000907b2) main_location2_pane_t1

0x2e44,	// (0x000907c8) main_location2_pane_t2

0x2e5a,	// (0x000907de) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0009cd38) main_location2_pane_t

0xe748,	// (0x0009c0cc) compass_pane_g1_ParamLimits

0xe748,	// (0x0009c0cc) compass_pane_g1

0x2ea2,	// (0x00090826) compass_pane_t1

0x2eb1,	// (0x00090835) compass_pane_t2

0x0005,

0xf3bd,	// (0x0009cd41) compass_pane_t

0x2ef8,	// (0x0009087c) text_secondary_cp61

0xe796,	// (0x0009c11a) navi_pane_cams_g5

0xe7e2,	// (0x0009c166) navi_pane_im_t1

0xe7f0,	// (0x0009c174) navi_pane_mp_g1_ParamLimits

0xe7f0,	// (0x0009c174) navi_pane_mp_g1

0xe804,	// (0x0009c188) navi_pane_mp_g2_ParamLimits

0xe804,	// (0x0009c188) navi_pane_mp_g2

0xe810,	// (0x0009c194) navi_pane_mp_g3_ParamLimits

0xe810,	// (0x0009c194) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0009cd55) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0009cd55) navi_pane_mp_g

0xe81c,	// (0x0009c1a0) navi_pane_mp_t1

0xe82a,	// (0x0009c1ae) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0009cd5c) navi_pane_mp_t

0xe895,	// (0x0009c219) navi_pane_vt_g1

0xe81c,	// (0x0009c1a0) navi_pane_vt_t1

0xe89d,	// (0x0009c221) navi_slider_pane

0xde7d,	// (0x0009b801) zooming_pane

0xe8a5,	// (0x0009c229) navi_slider_pane_g1

0xa17f,	// (0x00097b03) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0009cd63) navi_slider_pane_g

0xe8c9,	// (0x0009c24d) aid_levels_zoom

0xe8d1,	// (0x0009c255) zooming_pane_g1

0xe8d9,	// (0x0009c25d) zooming_pane_g2

0xe8d9,	// (0x0009c25d) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0009cd72) zooming_pane_g

0xe8e1,	// (0x0009c265) level_10_zoom

0xe8ea,	// (0x0009c26e) level_11_zoom

0xe8f3,	// (0x0009c277) level_1_zoom

0xe8fc,	// (0x0009c280) level_2_zoom

0xe905,	// (0x0009c289) level_3_zoom

0xe90e,	// (0x0009c292) level_4_zoom

0xe917,	// (0x0009c29b) level_5_zoom

0xe920,	// (0x0009c2a4) level_6_zoom

0xe929,	// (0x0009c2ad) level_7_zoom

0xe932,	// (0x0009c2b6) level_8_zoom

0xe93b,	// (0x0009c2bf) level_9_zoom

0xe94c,	// (0x0009c2d0) popup_phob_thumbnail_window_g1

0xe954,	// (0x0009c2d8) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0009cd79) popup_phob_thumbnail_window_g

0xa23d,	// (0x00097bc1) level_1_location

0xa245,	// (0x00097bc9) level_2_location

0xa24d,	// (0x00097bd1) level_3_location

0xa255,	// (0x00097bd9) level_4_location

0xde7d,	// (0x0009b801) level_5_location

0x2f8e,	// (0x00090912) mce_icon_pane_g1

0x2f96,	// (0x0009091a) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0009cd7e) mce_icon_pane_g

0x2f9e,	// (0x00090922) main_mup_pane_g1_ParamLimits

0x2f9e,	// (0x00090922) main_mup_pane_g1

0x2fb4,	// (0x00090938) main_mup_pane_g2_ParamLimits

0x2fb4,	// (0x00090938) main_mup_pane_g2

0x2fcc,	// (0x00090950) main_mup_pane_g3_ParamLimits

0x2fcc,	// (0x00090950) main_mup_pane_g3

0x2fe4,	// (0x00090968) main_mup_pane_g4_ParamLimits

0x2fe4,	// (0x00090968) main_mup_pane_g4

0x2ffc,	// (0x00090980) main_mup_pane_g5_ParamLimits

0x2ffc,	// (0x00090980) main_mup_pane_g5

0x3016,	// (0x0009099a) main_mup_pane_g6_ParamLimits

0x3016,	// (0x0009099a) main_mup_pane_g6

0x302e,	// (0x000909b2) main_mup_pane_g7_ParamLimits

0x302e,	// (0x000909b2) main_mup_pane_g7

0x3046,	// (0x000909ca) main_mup_pane_g8_ParamLimits

0x3046,	// (0x000909ca) main_mup_pane_g8

0x305e,	// (0x000909e2) main_mup_pane_g9_ParamLimits

0x305e,	// (0x000909e2) main_mup_pane_g9

0x3072,	// (0x000909f6) main_mup_pane_g10_ParamLimits

0x3072,	// (0x000909f6) main_mup_pane_g10

0x3086,	// (0x00090a0a) main_mup_pane_g11_ParamLimits

0x3086,	// (0x00090a0a) main_mup_pane_g11

0x3098,	// (0x00090a1c) main_mup_pane_g12_ParamLimits

0x3098,	// (0x00090a1c) main_mup_pane_g12

0x30ac,	// (0x00090a30) main_mup_pane_g13_ParamLimits

0x30ac,	// (0x00090a30) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0009cd83) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0009cd83) main_mup_pane_g

0x30be,	// (0x00090a42) main_mup_pane_t1_ParamLimits

0x30be,	// (0x00090a42) main_mup_pane_t1

0x30d8,	// (0x00090a5c) main_mup_pane_t2_ParamLimits

0x30d8,	// (0x00090a5c) main_mup_pane_t2

0x30f0,	// (0x00090a74) main_mup_pane_t3_ParamLimits

0x30f0,	// (0x00090a74) main_mup_pane_t3

0x3108,	// (0x00090a8c) main_mup_pane_t4_ParamLimits

0x3108,	// (0x00090a8c) main_mup_pane_t4

0x3126,	// (0x00090aaa) main_mup_pane_t5_ParamLimits

0x3126,	// (0x00090aaa) main_mup_pane_t5

0x313b,	// (0x00090abf) main_mup_pane_t6_ParamLimits

0x313b,	// (0x00090abf) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0009cd9e) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0009cd9e) main_mup_pane_t

0x314d,	// (0x00090ad1) mup_progress_pane_ParamLimits

0x314d,	// (0x00090ad1) mup_progress_pane

0x3159,	// (0x00090add) mup_visualizer_pane_ParamLimits

0x3159,	// (0x00090add) mup_visualizer_pane

0x3181,	// (0x00090b05) mup_volume_pane_ParamLimits

0x3181,	// (0x00090b05) mup_volume_pane

0xe95c,	// (0x0009c2e0) mup_visualizer_pane_g1_ParamLimits

0xe95c,	// (0x0009c2e0) mup_visualizer_pane_g1

0xe95c,	// (0x0009c2e0) mup_visualizer_pane_g2_ParamLimits

0xe95c,	// (0x0009c2e0) mup_visualizer_pane_g2

0xe748,	// (0x0009c0cc) mup_visualizer_pane_g3_ParamLimits

0xe748,	// (0x0009c0cc) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0009cdab) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0009cdab) mup_visualizer_pane_g

0xdd03,	// (0x0009b687) mup_volume_pane_g1

0xe972,	// (0x0009c2f6) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0009cdb2) mup_volume_pane_g

0xdd03,	// (0x0009b687) mup_progress_pane_g1

0xe97b,	// (0x0009c2ff) mup_progress_pane_g2

0xe984,	// (0x0009c308) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0009cdb7) mup_progress_pane_g

0xd98a,	// (0x0009b30e) bg_popup_window_pane_cp05

0xe98d,	// (0x0009c311) heading_pane_cp02_ParamLimits

0xe98d,	// (0x0009c311) heading_pane_cp02

0xe9a7,	// (0x0009c32b) list_popup_blid_pane

0xe9af,	// (0x0009c333) list_blid_sat_info_pane_ParamLimits

0xe9af,	// (0x0009c333) list_blid_sat_info_pane

0xe9c2,	// (0x0009c346) list_blid_sat_info_pane_g1

0xe9ca,	// (0x0009c34e) list_blid_sat_info_pane_t1

0x3271,	// (0x00090bf5) mup_equalizer_pane_ParamLimits

0x3271,	// (0x00090bf5) mup_equalizer_pane

0x328a,	// (0x00090c0e) mup_equalizer_pane_cp1_ParamLimits

0x328a,	// (0x00090c0e) mup_equalizer_pane_cp1

0x32a3,	// (0x00090c27) mup_equalizer_pane_cp2_ParamLimits

0x32a3,	// (0x00090c27) mup_equalizer_pane_cp2

0x32bc,	// (0x00090c40) mup_equalizer_pane_cp3_ParamLimits

0x32bc,	// (0x00090c40) mup_equalizer_pane_cp3

0x32d5,	// (0x00090c59) mup_equalizer_pane_cp4_ParamLimits

0x32d5,	// (0x00090c59) mup_equalizer_pane_cp4

0x32ee,	// (0x00090c72) mup_equalizer_pane_cp5

0x3300,	// (0x00090c84) mup_equalizer_pane_cp6

0x3312,	// (0x00090c96) mup_equalizer_pane_cp7

0x4459,	// (0x00091ddd) bg_popup_call_poc_act_pane_g9

0x4461,	// (0x00091de5) bg_popup_call_poc_act_pane_g10

0x4469,	// (0x00091ded) bg_popup_call_poc_act_pane_g11

0x000a,

0xdbe5,	// (0x0009b569) mup_scale_pane

0xdd03,	// (0x0009b687) mup_scale_pane_g1

0xe9d8,	// (0x0009c35c) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0009cdd3) mup_scale_pane_g

0xe9fc,	// (0x0009c380) msg_data_pane

0xea04,	// (0x0009c388) scroll_pane_cp017

0x3338,	// (0x00090cbc) bg_list_pane_cp04_ParamLimits

0x3338,	// (0x00090cbc) bg_list_pane_cp04

0xea0c,	// (0x0009c390) msg_data_pane_g1

0x2d05,	// (0x00090689) msg_data_pane_g2

0x2d0d,	// (0x00090691) msg_data_pane_g3

0x3358,	// (0x00090cdc) msg_data_pane_g4

0x2d1d,	// (0x000906a1) msg_data_pane_g5

0x2f8e,	// (0x00090912) msg_data_pane_g6

0x3360,	// (0x00090ce4) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0009cde2) msg_data_pane_g

0x3368,	// (0x00090cec) msg_text_pane_ParamLimits

0x3368,	// (0x00090cec) msg_text_pane

0x338d,	// (0x00090d11) qrid_highlight_pane_cp011_ParamLimits

0x338d,	// (0x00090d11) qrid_highlight_pane_cp011

0xd98a,	// (0x0009b30e) msg_body_pane

0xd98a,	// (0x0009b30e) msg_header_pane

0xea1d,	// (0x0009c3a1) input_focus_pane_cp07

0x33af,	// (0x00090d33) msg_header_pane_t1_ParamLimits

0x33af,	// (0x00090d33) msg_header_pane_t1

0x33c1,	// (0x00090d45) msg_header_pane_t2_ParamLimits

0x33c1,	// (0x00090d45) msg_header_pane_t2

0x0001,

0xf472,	// (0x0009cdf6) msg_header_pane_t_ParamLimits

0xf472,	// (0x0009cdf6) msg_header_pane_t

0xea32,	// (0x0009c3b6) msg_body_pane_g1

0x33d3,	// (0x00090d57) msg_body_pane_t1_ParamLimits

0x33d3,	// (0x00090d57) msg_body_pane_t1

0x33fe,	// (0x00090d82) msg_body_pane_t2_ParamLimits

0x33fe,	// (0x00090d82) msg_body_pane_t2

0x3410,	// (0x00090d94) msg_body_pane_t3_ParamLimits

0x3410,	// (0x00090d94) msg_body_pane_t3

0x0002,

0xf477,	// (0x0009cdfb) msg_body_pane_t_ParamLimits

0xf477,	// (0x0009cdfb) msg_body_pane_t

0x3458,	// (0x00090ddc) main_viewer_pane_g1_ParamLimits

0x3458,	// (0x00090ddc) main_viewer_pane_g1

0x3464,	// (0x00090de8) main_viewer_pane_g2_ParamLimits

0x3464,	// (0x00090de8) main_viewer_pane_g2

0x3470,	// (0x00090df4) main_viewer_pane_g3_ParamLimits

0x3470,	// (0x00090df4) main_viewer_pane_g3

0x347f,	// (0x00090e03) main_viewer_pane_g4_ParamLimits

0x347f,	// (0x00090e03) main_viewer_pane_g4

0xa1a9,	// (0x00097b2d) main_viewer_pane_g5_ParamLimits

0xa1a9,	// (0x00097b2d) main_viewer_pane_g5

0xa1a9,	// (0x00097b2d) main_viewer_pane_g7_ParamLimits

0xa1a9,	// (0x00097b2d) main_viewer_pane_g7

0xa1bb,	// (0x00097b3f) main_viewer_pane_g8_ParamLimits

0xa1bb,	// (0x00097b3f) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0009ce0b) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0009ce0b) main_viewer_pane_g

0xea3a,	// (0x0009c3be) viewer_content_pane_ParamLimits

0xea3a,	// (0x0009c3be) viewer_content_pane

0x34b3,	// (0x00090e37) main_postcard_pane_g1_ParamLimits

0x34b3,	// (0x00090e37) main_postcard_pane_g1

0x34c7,	// (0x00090e4b) main_postcard_pane_g2_ParamLimits

0x34c7,	// (0x00090e4b) main_postcard_pane_g2

0x34db,	// (0x00090e5f) main_postcard_pane_g3_ParamLimits

0x34db,	// (0x00090e5f) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0009ce1c) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0009ce1c) main_postcard_pane_g

0x34ee,	// (0x00090e72) main_postcard_pane_g4

0xa397,	// (0x00097d1b) smil_status_volume_pane_g2

0x3529,	// (0x00090ead) postcard_pane_ParamLimits

0x3529,	// (0x00090ead) postcard_pane

0xea48,	// (0x0009c3cc) postcard_pane_g1_ParamLimits

0xea48,	// (0x0009c3cc) postcard_pane_g1

0x3569,	// (0x00090eed) postcard_pane_g2_ParamLimits

0x3569,	// (0x00090eed) postcard_pane_g2

0x3575,	// (0x00090ef9) postcard_pane_g3_ParamLimits

0x3575,	// (0x00090ef9) postcard_pane_g3

0xea56,	// (0x0009c3da) postcard_pane_g4_ParamLimits

0xea56,	// (0x0009c3da) postcard_pane_g4

0x3581,	// (0x00090f05) postcard_pane_g5_ParamLimits

0x3581,	// (0x00090f05) postcard_pane_g5

0x3596,	// (0x00090f1a) postcard_pane_g6_ParamLimits

0x3596,	// (0x00090f1a) postcard_pane_g6

0xea48,	// (0x0009c3cc) postcard_pane_g7_ParamLimits

0xea48,	// (0x0009c3cc) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0009ce29) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0009ce29) postcard_pane_g

0x35aa,	// (0x00090f2e) main_mp2_pane_g1_ParamLimits

0x35aa,	// (0x00090f2e) main_mp2_pane_g1

0x35b6,	// (0x00090f3a) main_mp2_pane_g2_ParamLimits

0x35b6,	// (0x00090f3a) main_mp2_pane_g2

0x35c2,	// (0x00090f46) main_mp2_pane_g3_ParamLimits

0x35c2,	// (0x00090f46) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0009ce38) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0009ce38) main_mp2_pane_g

0x35ce,	// (0x00090f52) main_mp2_pane_t1_ParamLimits

0x35ce,	// (0x00090f52) main_mp2_pane_t1

0x35e3,	// (0x00090f67) main_mp2_pane_t2_ParamLimits

0x35e3,	// (0x00090f67) main_mp2_pane_t2

0x35f5,	// (0x00090f79) main_mp2_pane_t3_ParamLimits

0x35f5,	// (0x00090f79) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0009ce3f) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0009ce3f) main_mp2_pane_t

0xea64,	// (0x0009c3e8) pec_content_pane_ParamLimits

0xea64,	// (0x0009c3e8) pec_content_pane

0xe06b,	// (0x0009b9ef) scroll_pane_cp015

0xea76,	// (0x0009c3fa) pec_attribute_pane_ParamLimits

0xea76,	// (0x0009c3fa) pec_attribute_pane

0x3607,	// (0x00090f8b) pec_content_pane_g1_ParamLimits

0x3607,	// (0x00090f8b) pec_content_pane_g1

0xea86,	// (0x0009c40a) pec_content_pane_t1_ParamLimits

0xea86,	// (0x0009c40a) pec_content_pane_t1

0xea98,	// (0x0009c41c) pec_content_pane_t2_ParamLimits

0xea98,	// (0x0009c41c) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0009ce46) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0009ce46) pec_content_pane_t

0x3613,	// (0x00090f97) list_single_graphic_pane_cp01_ParamLimits

0x3613,	// (0x00090f97) list_single_graphic_pane_cp01

0xdbe5,	// (0x0009b569) bg_popup_sub_pane_cp04

0xeaaa,	// (0x0009c42e) popup_mup_playback_window_g1

0xeab6,	// (0x0009c43a) popup_mup_playback_window_t1

0xeacb,	// (0x0009c44f) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0009ce4b) popup_mup_playback_window_t

0xeb02,	// (0x0009c486) main_image_pane_g1_ParamLimits

0xeb02,	// (0x0009c486) main_image_pane_g1

0xeb45,	// (0x0009c4c9) scroll_pane_cp018_ParamLimits

0xeb45,	// (0x0009c4c9) scroll_pane_cp018

0xeb5d,	// (0x0009c4e1) scroll_pane_cp016_ParamLimits

0xeb5d,	// (0x0009c4e1) scroll_pane_cp016

0x36de,	// (0x00091062) smil2_image_pane_ParamLimits

0x36de,	// (0x00091062) smil2_image_pane

0x3706,	// (0x0009108a) smil2_root_pane_ParamLimits

0x3706,	// (0x0009108a) smil2_root_pane

0x373e,	// (0x000910c2) smil2_text_pane_ParamLimits

0x373e,	// (0x000910c2) smil2_text_pane

0xd98a,	// (0x0009b30e) bg_list_pane_cp06

0xeb91,	// (0x0009c515) grid_radio_pane

0xd98a,	// (0x0009b30e) bg_popup_window_pane_cp06

0xeb99,	// (0x0009c51d) main_fmradio_pane_t1

0xe595,	// (0x0009bf19) heading_pane_cp04

0xeba7,	// (0x0009c52b) main_fmradio_pane_t2

0x4531,	// (0x00091eb5) popup_cale_lunar_info_window_g1

0xebb5,	// (0x0009c539) main_fmradio_pane_t3

0x4539,	// (0x00091ebd) popup_cale_lunar_info_window_g2

0xebc3,	// (0x0009c547) main_fmradio_pane_t4

0x0001,

0xebd1,	// (0x0009c555) main_fmradio_pane_t5

0x0004,

0xf593,	// (0x0009cf17) popup_cale_lunar_info_window_g

0x000c,	// (0x0008d990) main_fmradio_pane_t

0xebdf,	// (0x0009c563) wait_bar_pane_cp03

0xe10b,	// (0x0009ba8f) cell_fmradio_pane_ParamLimits

0xe10b,	// (0x0009ba8f) cell_fmradio_pane

0xea48,	// (0x0009c3cc) cell_fmradio_pane_g1_ParamLimits

0xea48,	// (0x0009c3cc) cell_fmradio_pane_g1

0xd98a,	// (0x0009b30e) grid_highlight_pane_cp011

0xebe7,	// (0x0009c56b) poc_content_pane_ParamLimits

0xebe7,	// (0x0009c56b) poc_content_pane

0xebfa,	// (0x0009c57e) scroll_pane_cp019

0x37aa,	// (0x0009112e) popup_call_poc_act_window_ParamLimits

0x37aa,	// (0x0009112e) popup_call_poc_act_window

0x37ca,	// (0x0009114e) popup_call_poc_inact_window_ParamLimits

0x37ca,	// (0x0009114e) popup_call_poc_inact_window

0xf557,	// (0x0009cedb) bg_popup_call_poc_act_pane_g

0x4471,	// (0x00091df5) bg_popup_call_poc_inact_pane_g1

0x4479,	// (0x00091dfd) bg_popup_call_poc_inact_pane_g2

0xec02,	// (0x0009c586) popup_call_poc_act_window_g2

0x4481,	// (0x00091e05) bg_popup_call_poc_inact_pane_g3

0x43f9,	// (0x00091d7d) bg_popup_call_poc_inact_pane_g4

0x4489,	// (0x00091e0d) bg_popup_call_poc_inact_pane_g5

0xec0a,	// (0x0009c58e) popup_call_poc_act_window_t1_ParamLimits

0xec0a,	// (0x0009c58e) popup_call_poc_act_window_t1

0xec32,	// (0x0009c5b6) popup_call_poc_act_window_t2_ParamLimits

0xec32,	// (0x0009c5b6) popup_call_poc_act_window_t2

0xec5a,	// (0x0009c5de) popup_call_poc_act_window_t3_ParamLimits

0xec5a,	// (0x0009c5de) popup_call_poc_act_window_t3

0xec82,	// (0x0009c606) popup_call_poc_act_window_t4_ParamLimits

0xec82,	// (0x0009c606) popup_call_poc_act_window_t4

0x0003,

0x0017,	// (0x0008d99b) popup_call_poc_act_window_t_ParamLimits

0x0017,	// (0x0008d99b) popup_call_poc_act_window_t

0x4491,	// (0x00091e15) bg_popup_call_poc_inact_pane_g6

0x4499,	// (0x00091e1d) bg_popup_call_poc_inact_pane_g7

0x44a1,	// (0x00091e25) bg_popup_call_poc_inact_pane_g8

0xec94,	// (0x0009c618) popup_call_poc_inact_window_g2

0x44a9,	// (0x00091e2d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf56e,	// (0x0009cef2) bg_popup_call_poc_inact_pane_g

0xec9c,	// (0x0009c620) popup_call_poc_inact_window_t1_ParamLimits

0xec9c,	// (0x0009c620) popup_call_poc_inact_window_t1

0xecb1,	// (0x0009c635) popup_call_poc_inact_window_t2_ParamLimits

0xecb1,	// (0x0009c635) popup_call_poc_inact_window_t2

0xecc6,	// (0x0009c64a) popup_call_poc_inact_window_t3_ParamLimits

0xecc6,	// (0x0009c64a) popup_call_poc_inact_window_t3

0x0002,

0x0020,	// (0x0008d9a4) popup_call_poc_inact_window_t_ParamLimits

0x0020,	// (0x0008d9a4) popup_call_poc_inact_window_t

0xa30a,	// (0x00097c8e) context_pane_ParamLimits

0x4a3b,	// (0x000923bf) signal_pane_ParamLimits

0xde7d,	// (0x0009b801) main_call2_pane

0xa2e3,	// (0x00097c67) popup_phob_thumbnail2_window_ParamLimits

0xa2e3,	// (0x00097c67) popup_phob_thumbnail2_window

0xa191,	// (0x00097b15) aid_hotspot_pointer_arrow_pane

0xa199,	// (0x00097b1d) aid_hotspot_pointer_hand_pane

0x45f4,	// (0x00091f78) phob_pre_status_pane_g5

0x18a5,	// (0x0008f229) cams_zoom_pane_ParamLimits

0x18b4,	// (0x0008f238) image_vga_pane_ParamLimits

0x18cc,	// (0x0008f250) main_camera_pane_g1_ParamLimits

0x18dc,	// (0x0008f260) main_camera_pane_g2_ParamLimits

0x18ec,	// (0x0008f270) main_camera_pane_g3_ParamLimits

0x18fc,	// (0x0008f280) main_camera_pane_g4_ParamLimits

0x190c,	// (0x0008f290) main_camera_pane_g5_ParamLimits

0x191c,	// (0x0008f2a0) main_camera_pane_g6_ParamLimits

0x192c,	// (0x0008f2b0) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0009cb73) main_camera_pane_g_ParamLimits

0x193c,	// (0x0008f2c0) main_camera_pane_t1_ParamLimits

0x1952,	// (0x0008f2d6) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0009cb84) main_camera_pane_t_ParamLimits

0xdbe5,	// (0x0009b569) bg_popup_preview_window_pane_cp01_ParamLimits

0xdbe5,	// (0x0009b569) bg_popup_preview_window_pane_cp01

0xecdb,	// (0x0009c65f) popup_phob_thumbnail2_window_g1_ParamLimits

0xecdb,	// (0x0009c65f) popup_phob_thumbnail2_window_g1

0xd98a,	// (0x0009b30e) call2_cli_visual_pane

0x37f6,	// (0x0009117a) popup_call2_audio_conf_window_ParamLimits

0x37f6,	// (0x0009117a) popup_call2_audio_conf_window

0x3814,	// (0x00091198) popup_call2_audio_first_window_ParamLimits

0x3814,	// (0x00091198) popup_call2_audio_first_window

0x388a,	// (0x0009120e) popup_call2_audio_in_window_ParamLimits

0x388a,	// (0x0009120e) popup_call2_audio_in_window

0x38be,	// (0x00091242) popup_call2_audio_out_window_ParamLimits

0x38be,	// (0x00091242) popup_call2_audio_out_window

0x3910,	// (0x00091294) popup_call2_audio_second_window_ParamLimits

0x3910,	// (0x00091294) popup_call2_audio_second_window

0x3962,	// (0x000912e6) popup_call2_audio_wait_window_ParamLimits

0x3962,	// (0x000912e6) popup_call2_audio_wait_window

0xd98a,	// (0x0009b30e) bg_popup_call2_act_pane_cp03

0xdbc7,	// (0x0009b54b) list_conf_pane_cp

0xece7,	// (0x0009c66b) popup_call2_audio_conf_window_t1

0xe5f2,	// (0x0009bf76) list_single_graphic_popup_conf2_pane_ParamLimits

0xe5f2,	// (0x0009bf76) list_single_graphic_popup_conf2_pane

0xe605,	// (0x0009bf89) list_highlight_pane_cp04

0xecf5,	// (0x0009c679) list_single_graphic_popup_conf2_pane_g1

0xe616,	// (0x0009bf9a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4dc,	// (0x0009ce60) list_single_graphic_popup_conf2_pane_g

0xecfd,	// (0x0009c681) list_single_graphic_popup_conf2_pane_t1

0xed0b,	// (0x0009c68f) bg_popup_call2_act_pane_cp01_ParamLimits

0xed0b,	// (0x0009c68f) bg_popup_call2_act_pane_cp01

0xeda1,	// (0x0009c725) call_type_pane_cp05_ParamLimits

0xeda1,	// (0x0009c725) call_type_pane_cp05

0xedf5,	// (0x0009c779) popup_call2_audio_second_window_g1_ParamLimits

0xedf5,	// (0x0009c779) popup_call2_audio_second_window_g1

0xee49,	// (0x0009c7cd) popup_call2_audio_second_window_g2_ParamLimits

0xee49,	// (0x0009c7cd) popup_call2_audio_second_window_g2

0x0002,

0xf4e1,	// (0x0009ce65) popup_call2_audio_second_window_g_ParamLimits

0xf4e1,	// (0x0009ce65) popup_call2_audio_second_window_g

0xeeae,	// (0x0009c832) popup_call2_audio_second_window_t1_ParamLimits

0xeeae,	// (0x0009c832) popup_call2_audio_second_window_t1

0xef69,	// (0x0009c8ed) popup_call2_audio_second_window_t2_ParamLimits

0xef69,	// (0x0009c8ed) popup_call2_audio_second_window_t2

0xefbc,	// (0x0009c940) popup_call2_audio_second_window_t3_ParamLimits

0xefbc,	// (0x0009c940) popup_call2_audio_second_window_t3

0x0003,

0xf4e8,	// (0x0009ce6c) popup_call2_audio_second_window_t_ParamLimits

0xf4e8,	// (0x0009ce6c) popup_call2_audio_second_window_t

0xd98a,	// (0x0009b30e) bg_popup_call2_in_pane_cp02

0xd994,	// (0x0009b318) call_type_pane_cp04

0xd99c,	// (0x0009b320) popup_call2_audio_wait_window_g1

0xd9a4,	// (0x0009b328) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0009ca62) popup_call2_audio_wait_window_g

0xd9ac,	// (0x0009b330) popup_call2_audio_wait_window_t3

0x399a,	// (0x0009131e) bg_popup_call2_act_pane_ParamLimits

0x399a,	// (0x0009131e) bg_popup_call2_act_pane

0x3a5a,	// (0x000913de) call_type_pane_cp03_ParamLimits

0x3a5a,	// (0x000913de) call_type_pane_cp03

0x3abe,	// (0x00091442) popup_call2_audio_first_window_g1_ParamLimits

0x3abe,	// (0x00091442) popup_call2_audio_first_window_g1

0x3b2e,	// (0x000914b2) popup_call2_audio_first_window_g2_ParamLimits

0x3b2e,	// (0x000914b2) popup_call2_audio_first_window_g2

0xe95c,	// (0x0009c2e0) popup_call2_audio_first_window_g3_ParamLimits

0xe95c,	// (0x0009c2e0) popup_call2_audio_first_window_g3

0x0004,

0xf4f1,	// (0x0009ce75) popup_call2_audio_first_window_g_ParamLimits

0xf4f1,	// (0x0009ce75) popup_call2_audio_first_window_g

0x3c0c,	// (0x00091590) popup_call2_audio_first_window_t1_ParamLimits

0x3c0c,	// (0x00091590) popup_call2_audio_first_window_t1

0x3d0f,	// (0x00091693) popup_call2_audio_first_window_t4_ParamLimits

0x3d0f,	// (0x00091693) popup_call2_audio_first_window_t4

0x3df2,	// (0x00091776) popup_call2_audio_first_window_t5_ParamLimits

0x3df2,	// (0x00091776) popup_call2_audio_first_window_t5

0x0003,

0xf4fc,	// (0x0009ce80) popup_call2_audio_first_window_t_ParamLimits

0xf4fc,	// (0x0009ce80) popup_call2_audio_first_window_t

0xdbdd,	// (0x0009b561) bg_popup_call2_act_pane_g1

0x4541,	// (0x00091ec5) popup_cale_lunar_info_window_t1

0x454f,	// (0x00091ed3) popup_cale_lunar_info_window_t2

0x455d,	// (0x00091ee1) popup_cale_lunar_info_window_t3

0xd98a,	// (0x0009b30e) bg_popup_call2_bubble_pane

0x3ef3,	// (0x00091877) bg_popup_call2_in_pane_cp01_ParamLimits

0x3ef3,	// (0x00091877) bg_popup_call2_in_pane_cp01

0xd51c,	// (0x0009aea0) call_type_pane_cp02

0x3f3b,	// (0x000918bf) popup_call2_audio_out_window_g1_ParamLimits

0x3f3b,	// (0x000918bf) popup_call2_audio_out_window_g1

0x3f67,	// (0x000918eb) popup_call2_audio_out_window_g2_ParamLimits

0x3f67,	// (0x000918eb) popup_call2_audio_out_window_g2

0x3f8f,	// (0x00091913) popup_call2_audio_out_window_g3_ParamLimits

0x3f8f,	// (0x00091913) popup_call2_audio_out_window_g3

0x0003,

0xf505,	// (0x0009ce89) popup_call2_audio_out_window_g_ParamLimits

0xf505,	// (0x0009ce89) popup_call2_audio_out_window_g

0x3fca,	// (0x0009194e) popup_call2_audio_out_window_t1_ParamLimits

0x3fca,	// (0x0009194e) popup_call2_audio_out_window_t1

0x4029,	// (0x000919ad) popup_call2_audio_out_window_t2_ParamLimits

0x4029,	// (0x000919ad) popup_call2_audio_out_window_t2

0x407d,	// (0x00091a01) popup_call2_audio_out_window_t3_ParamLimits

0x407d,	// (0x00091a01) popup_call2_audio_out_window_t3

0x4093,	// (0x00091a17) popup_call2_audio_out_window_t4_ParamLimits

0x4093,	// (0x00091a17) popup_call2_audio_out_window_t4

0x40a9,	// (0x00091a2d) popup_call2_audio_out_window_t5_ParamLimits

0x40a9,	// (0x00091a2d) popup_call2_audio_out_window_t5

0x0005,

0xf50e,	// (0x0009ce92) popup_call2_audio_out_window_t_ParamLimits

0xf50e,	// (0x0009ce92) popup_call2_audio_out_window_t

0x410d,	// (0x00091a91) bg_popup_call2_in_pane_ParamLimits

0x410d,	// (0x00091a91) bg_popup_call2_in_pane

0x4169,	// (0x00091aed) popup_call2_audio_in_window_g1_ParamLimits

0x4169,	// (0x00091aed) popup_call2_audio_in_window_g1

0x41a1,	// (0x00091b25) popup_call2_audio_in_window_g2_ParamLimits

0x41a1,	// (0x00091b25) popup_call2_audio_in_window_g2

0x41d9,	// (0x00091b5d) popup_call2_audio_in_window_g3_ParamLimits

0x41d9,	// (0x00091b5d) popup_call2_audio_in_window_g3

0x0003,

0xf51b,	// (0x0009ce9f) popup_call2_audio_in_window_g_ParamLimits

0xf51b,	// (0x0009ce9f) popup_call2_audio_in_window_g

0x4231,	// (0x00091bb5) popup_call2_audio_in_window_t1_ParamLimits

0x4231,	// (0x00091bb5) popup_call2_audio_in_window_t1

0x42b1,	// (0x00091c35) popup_call2_audio_in_window_t2_ParamLimits

0x42b1,	// (0x00091c35) popup_call2_audio_in_window_t2

0x4331,	// (0x00091cb5) popup_call2_audio_in_window_t3_ParamLimits

0x4331,	// (0x00091cb5) popup_call2_audio_in_window_t3

0x434b,	// (0x00091ccf) popup_call2_audio_in_window_t4_ParamLimits

0x434b,	// (0x00091ccf) popup_call2_audio_in_window_t4

0x435d,	// (0x00091ce1) popup_call2_audio_in_window_t5_ParamLimits

0x435d,	// (0x00091ce1) popup_call2_audio_in_window_t5

0x4372,	// (0x00091cf6) popup_call2_audio_in_window_t6_ParamLimits

0x4372,	// (0x00091cf6) popup_call2_audio_in_window_t6

0x0005,

0xf524,	// (0x0009cea8) popup_call2_audio_in_window_t_ParamLimits

0xf524,	// (0x0009cea8) popup_call2_audio_in_window_t

0xdbdd,	// (0x0009b561) bg_popup_call2_in_pane_g1

0x456b,	// (0x00091eef) popup_cale_lunar_info_window_t4

0x0003,

0xf598,	// (0x0009cf1c) popup_cale_lunar_info_window_t

0xdbe5,	// (0x0009b569) bg_popup_call2_rect_pane_ParamLimits

0xdbe5,	// (0x0009b569) bg_popup_call2_rect_pane

0xd98a,	// (0x0009b30e) call2_cli_visual_graphic_pane

0xd98a,	// (0x0009b30e) call2_cli_visual_text_pane

0xa3aa,	// (0x00097d2e) smil_status_volume_pane_g3

0x0002,

0xdd03,	// (0x0009b687) call2_cli_visual_graphic_pane_g1

0xdd03,	// (0x0009b687) call2_cli_visual_graphic_pane_g2

0xdd03,	// (0x0009b687) call2_cli_visual_graphic_pane_g3

0x0002,

0x007c,	// (0x0008da00) call2_cli_visual_graphic_pane_g

0x43a1,	// (0x00091d25) bg_popup_call2_rect_pane_g1

0xdda1,	// (0x0009b725) bg_popup_call2_rect_pane_g2

0x43a9,	// (0x00091d2d) bg_popup_call2_rect_pane_g3

0x43b1,	// (0x00091d35) bg_popup_call2_rect_pane_g4

0x43b9,	// (0x00091d3d) bg_popup_call2_rect_pane_g5

0x43c1,	// (0x00091d45) bg_popup_call2_rect_pane_g6

0x43c9,	// (0x00091d4d) bg_popup_call2_rect_pane_g7

0x43d1,	// (0x00091d55) bg_popup_call2_rect_pane_g8

0x43d9,	// (0x00091d5d) bg_popup_call2_rect_pane_g9

0x0008,

0xf531,	// (0x0009ceb5) bg_popup_call2_rect_pane_g

0x43e1,	// (0x00091d65) bg_popup_call2_bubble_pane_g1

0x43e9,	// (0x00091d6d) bg_popup_call2_bubble_pane_g2

0x43f1,	// (0x00091d75) bg_popup_call2_bubble_pane_g3

0x43f9,	// (0x00091d7d) bg_popup_call2_bubble_pane_g4

0x4401,	// (0x00091d85) bg_popup_call2_bubble_pane_g5

0x4409,	// (0x00091d8d) bg_popup_call2_bubble_pane_g6

0x4411,	// (0x00091d95) bg_popup_call2_bubble_pane_g7

0x4419,	// (0x00091d9d) bg_popup_call2_bubble_pane_g8

0x4421,	// (0x00091da5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf544,	// (0x0009cec8) bg_popup_call2_bubble_pane_g

0x1258,	// (0x0008ebdc) aid_cale_week_size_cell_pane

0x1968,	// (0x0008f2ec) aid_cams_cif_uncrop_pane_ParamLimits

0x1968,	// (0x0008f2ec) aid_cams_cif_uncrop_pane

0x1b09,	// (0x0008f48d) aid_cams_size_cell_ParamLimits

0x1b09,	// (0x0008f48d) aid_cams_size_cell

0x1b1d,	// (0x0008f4a1) grid_cams_pane_ParamLimits

0x1b32,	// (0x0008f4b6) linegrid_cams_pane_ParamLimits

0x1cec,	// (0x0008f670) call_video_pane_t1

0x1d06,	// (0x0008f68a) call_video_pane_t2

0x0001,

0xf253,	// (0x0009cbd7) call_video_pane_t

0x208b,	// (0x0008fa0f) aid_cale_month_size_cell_pane_ParamLimits

0x208b,	// (0x0008fa0f) aid_cale_month_size_cell_pane

0xf5e1,	// (0x0009cf65) smil_status_volume_pane_g

0xa3b7,	// (0x00097d3b) volume_smil_pane_ParamLimits

0x9fad,	// (0x00097931) aid_popup2_width_pane

0x11a7,	// (0x0008eb2b) cell_qdial_pane_g4_ParamLimits

0x11a7,	// (0x0008eb2b) cell_qdial_pane_g4

0x2e82,	// (0x00090806) aid_blid_cardinal_pane_ParamLimits

0x2e8e,	// (0x00090812) aid_blid_destination_pane_ParamLimits

0x2e8e,	// (0x00090812) aid_blid_destination_pane

0xdbe5,	// (0x0009b569) bg_popup_call_poc_act_pane_ParamLimits

0xdbe5,	// (0x0009b569) bg_popup_call_poc_act_pane

0xdbe5,	// (0x0009b569) bg_popup_call_poc_inact_pane_ParamLimits

0xdbe5,	// (0x0009b569) bg_popup_call_poc_inact_pane

0x4431,	// (0x00091db5) bg_popup_call_poc_act_pane_g1

0x4439,	// (0x00091dbd) bg_popup_call_poc_act_pane_g2

0x4441,	// (0x00091dc5) bg_popup_call_poc_act_pane_g3

0x43f9,	// (0x00091d7d) bg_popup_call_poc_act_pane_g4

0x4401,	// (0x00091d85) bg_popup_call_poc_act_pane_g5

0x4449,	// (0x00091dcd) bg_popup_call_poc_act_pane_g6

0x4411,	// (0x00091d95) bg_popup_call_poc_act_pane_g7

0x4451,	// (0x00091dd5) bg_popup_call_poc_act_pane_g8

0xd98a,	// (0x0009b30e) main_usb_pane

0xa2c2,	// (0x00097c46) popup_cale_lunar_info_window

0x1f4b,	// (0x0008f8cf) im_reading_pane_t1_ParamLimits

0xdfb4,	// (0x0009b938) list_im_pane_ParamLimits

0xdfc5,	// (0x0009b949) scroll_pane_cp07_ParamLimits

0xd98a,	// (0x0009b30e) grid_highlight_pane_cp012

0xdbe5,	// (0x0009b569) mup_scale_pane_ParamLimits

0xea48,	// (0x0009c3cc) main_usb_pane_g1_ParamLimits

0xea48,	// (0x0009c3cc) main_usb_pane_g1

0x44b1,	// (0x00091e35) main_usb_pane_g2_ParamLimits

0x44b1,	// (0x00091e35) main_usb_pane_g2

0x0001,

0xf581,	// (0x0009cf05) main_usb_pane_g_ParamLimits

0xf581,	// (0x0009cf05) main_usb_pane_g

0x44c5,	// (0x00091e49) main_usb_pane_t1_ParamLimits

0x44c5,	// (0x00091e49) main_usb_pane_t1

0x44d7,	// (0x00091e5b) main_usb_pane_t2_ParamLimits

0x44d7,	// (0x00091e5b) main_usb_pane_t2

0x44e9,	// (0x00091e6d) main_usb_pane_t3_ParamLimits

0x44e9,	// (0x00091e6d) main_usb_pane_t3

0x44fb,	// (0x00091e7f) main_usb_pane_t4_ParamLimits

0x44fb,	// (0x00091e7f) main_usb_pane_t4

0x450d,	// (0x00091e91) main_usb_pane_t5_ParamLimits

0x450d,	// (0x00091e91) main_usb_pane_t5

0x451f,	// (0x00091ea3) main_usb_pane_t6_ParamLimits

0x451f,	// (0x00091ea3) main_usb_pane_t6

0x0005,

0xf586,	// (0x0009cf0a) main_usb_pane_t_ParamLimits

0xe73f,	// (0x0009c0c3) aid_text_placing

0x2e2e,	// (0x000907b2) main_location2_pane_t1_ParamLimits

0x2e44,	// (0x000907c8) main_location2_pane_t2_ParamLimits

0x2e5a,	// (0x000907de) main_location2_pane_t3_ParamLimits

0x2e70,	// (0x000907f4) main_location2_pane_t4_ParamLimits

0x2e70,	// (0x000907f4) main_location2_pane_t4

0xf3b4,	// (0x0009cd38) main_location2_pane_t_ParamLimits

0xdc21,	// (0x0009b5a5) find_pinb_pane_g2_ParamLimits

0xdc21,	// (0x0009b5a5) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0009ca88) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0009ca88) find_pinb_pane_g

0xdc2d,	// (0x0009b5b1) find_pinb_pane_t1_ParamLimits

0xdc3f,	// (0x0009b5c3) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0009ca8d) find_pinb_pane_t_ParamLimits

0xd98a,	// (0x0009b30e) main_call3_pane

0x2486,	// (0x0008fe0a) cale_month_day_heading_pane_t1_ParamLimits

0x250c,	// (0x0008fe90) cale_month_day_heading_pane_t2_ParamLimits

0x259d,	// (0x0008ff21) cale_month_day_heading_pane_t3_ParamLimits

0x262e,	// (0x0008ffb2) cale_month_day_heading_pane_t4_ParamLimits

0x26bf,	// (0x00090043) cale_month_day_heading_pane_t5_ParamLimits

0x2750,	// (0x000900d4) cale_month_day_heading_pane_t6_ParamLimits

0x27e1,	// (0x00090165) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0009cc0f) cale_month_day_heading_pane_t_ParamLimits

0x2a67,	// (0x000903eb) smil_status_volume_pane

0x3545,	// (0x00090ec9) postcard_address_pane_ParamLimits

0x3545,	// (0x00090ec9) postcard_address_pane

0x3557,	// (0x00090edb) postcard_message_pane_ParamLimits

0x3557,	// (0x00090edb) postcard_message_pane

0x4387,	// (0x00091d0b) call2_cli_visual_pane_t1_ParamLimits

0x4387,	// (0x00091d0b) call2_cli_visual_pane_t1

0x4c57,	// (0x000925db) postcard_message_pane_t1_ParamLimits

0x4c57,	// (0x000925db) postcard_message_pane_t1

0x4c40,	// (0x000925c4) postcard_address_pane_t1_ParamLimits

0x4c40,	// (0x000925c4) postcard_address_pane_t1

0x4c2e,	// (0x000925b2) popup_call3_audio_in_window_ParamLimits

0x4c2e,	// (0x000925b2) popup_call3_audio_in_window

0x4abd,	// (0x00092441) bg_popup_call3_in_pane_ParamLimits

0x4abd,	// (0x00092441) bg_popup_call3_in_pane

0x4b2f,	// (0x000924b3) popup_call3_audio_in_window_g1_ParamLimits

0x4b2f,	// (0x000924b3) popup_call3_audio_in_window_g1

0x4b4f,	// (0x000924d3) popup_call3_audio_in_window_g2_ParamLimits

0x4b4f,	// (0x000924d3) popup_call3_audio_in_window_g2

0x4b6f,	// (0x000924f3) popup_call3_audio_in_window_g3_ParamLimits

0x4b6f,	// (0x000924f3) popup_call3_audio_in_window_g3

0x0003,

0xf5e8,	// (0x0009cf6c) popup_call3_audio_in_window_g_ParamLimits

0xf5e8,	// (0x0009cf6c) popup_call3_audio_in_window_g

0x4ba0,	// (0x00092524) popup_call3_audio_in_window_t1_ParamLimits

0x4ba0,	// (0x00092524) popup_call3_audio_in_window_t1

0x4bde,	// (0x00092562) popup_call3_audio_in_window_t2_ParamLimits

0x4bde,	// (0x00092562) popup_call3_audio_in_window_t2

0x4c1c,	// (0x000925a0) popup_call3_audio_in_window_t3_ParamLimits

0x4c1c,	// (0x000925a0) popup_call3_audio_in_window_t3

0x0002,

0xf5f1,	// (0x0009cf75) popup_call3_audio_in_window_t_ParamLimits

0xf5f1,	// (0x0009cf75) popup_call3_audio_in_window_t

0xde7d,	// (0x0009b801) bg_popup_call3_rect_pane

0x43a1,	// (0x00091d25) bg_popup_call3_rect_pane_g1

0xdda1,	// (0x0009b725) bg_popup_call3_rect_pane_g2

0x43a9,	// (0x00091d2d) bg_popup_call3_rect_pane_g3

0x43b1,	// (0x00091d35) bg_popup_call3_rect_pane_g4

0x43b9,	// (0x00091d3d) bg_popup_call3_rect_pane_g5

0x43c1,	// (0x00091d45) bg_popup_call3_rect_pane_g6

0x43c9,	// (0x00091d4d) bg_popup_call3_rect_pane_g7

0x3197,	// (0x00090b1b) mup_visualizer_osc_pane

0xe96a,	// (0x0009c2ee) mup_visualizer_spec_pane

0x4aed,	// (0x00092471) call3_video_qcif_pane_ParamLimits

0x4aed,	// (0x00092471) call3_video_qcif_pane

0x4afe,	// (0x00092482) call3_video_qcif_uncrop_pane_ParamLimits

0x4afe,	// (0x00092482) call3_video_qcif_uncrop_pane

0x4b0a,	// (0x0009248e) call3_video_subqcif_pane_ParamLimits

0x4b0a,	// (0x0009248e) call3_video_subqcif_pane

0x4b1e,	// (0x000924a2) call3_video_subqcif_uncrop_pane_ParamLimits

0x4b1e,	// (0x000924a2) call3_video_subqcif_uncrop_pane

0x4b8f,	// (0x00092513) popup_call3_audio_in_window_g4_ParamLimits

0x4b8f,	// (0x00092513) popup_call3_audio_in_window_g4

0x4aac,	// (0x00092430) mup_spec_half_pane

0x4ab5,	// (0x00092439) mup_spec_half_pane_cp

0xa36a,	// (0x00097cee) mup_osc_middle_pane

0xa373,	// (0x00097cf7) mup_visualizer_osc_pane_g1

0x4a8d,	// (0x00092411) mup_spec_bar_pane_ParamLimits

0x4a8d,	// (0x00092411) mup_spec_bar_pane

0xa357,	// (0x00097cdb) mup_spec_bar_pane_g1

0xa361,	// (0x00097ce5) mup_spec_bar_pane_g2

0x0001,

0xf5dc,	// (0x0009cf60) mup_spec_bar_pane_g

0x1258,	// (0x0008ebdc) aid_cale_week_size_cell_pane_ParamLimits

0x1272,	// (0x0008ebf6) bg_cale_heading_pane_ParamLimits

0xdddf,	// (0x0009b763) bg_cale_pane_cp01_ParamLimits

0x128a,	// (0x0008ec0e) cale_week_corner_pane_ParamLimits

0x12a9,	// (0x0008ec2d) cale_week_day_heading_pane_ParamLimits

0x12c6,	// (0x0008ec4a) cale_week_scroll_pane_g1_ParamLimits

0x12d9,	// (0x0008ec5d) cale_week_scroll_pane_g2_ParamLimits

0x12f1,	// (0x0008ec75) cale_week_scroll_pane_g3_ParamLimits

0x1309,	// (0x0008ec8d) cale_week_scroll_pane_g4_ParamLimits

0x1321,	// (0x0008eca5) cale_week_scroll_pane_g5_ParamLimits

0x1339,	// (0x0008ecbd) cale_week_scroll_pane_g6_ParamLimits

0x1351,	// (0x0008ecd5) cale_week_scroll_pane_g7_ParamLimits

0x1369,	// (0x0008eced) cale_week_scroll_pane_g8_ParamLimits

0x1385,	// (0x0008ed09) cale_week_scroll_pane_g9_ParamLimits

0x139d,	// (0x0008ed21) cale_week_scroll_pane_g10_ParamLimits

0x13b5,	// (0x0008ed39) cale_week_scroll_pane_g11_ParamLimits

0x13cd,	// (0x0008ed51) cale_week_scroll_pane_g12_ParamLimits

0x13e5,	// (0x0008ed69) cale_week_scroll_pane_g13_ParamLimits

0x13fd,	// (0x0008ed81) cale_week_scroll_pane_g14_ParamLimits

0x1415,	// (0x0008ed99) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0009cb19) cale_week_scroll_pane_g_ParamLimits

0x1449,	// (0x0008edcd) cale_week_time_pane_ParamLimits

0x1465,	// (0x0008ede9) grid_cale_week_pane_ParamLimits

0xddfc,	// (0x0009b780) listscroll_cale_week_pane_t1

0xde0e,	// (0x0009b792) scroll_pane_cp08_ParamLimits

0x20e0,	// (0x0008fa64) cale_month_corner_pane_ParamLimits

0xe210,	// (0x0009bb94) cale_month_pane_t1

0x243c,	// (0x0008fdc0) cale_month_week_pane_ParamLimits

0x2c7d,	// (0x00090601) popup_call_status_window_g1_ParamLimits

0x2c91,	// (0x00090615) popup_call_status_window_g2_ParamLimits

0x2ca5,	// (0x00090629) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0009ccbf) popup_call_status_window_g_ParamLimits

0xe585,	// (0x0009bf09) aid_call2_pane

0x33a3,	// (0x00090d27) msg_header_pane_g1

0x3545,	// (0x00090ec9) postcard_address2_pane_ParamLimits

0x3545,	// (0x00090ec9) postcard_address2_pane

0x3557,	// (0x00090edb) postcard_message2_pane_ParamLimits

0x3557,	// (0x00090edb) postcard_message2_pane

0x4a49,	// (0x000923cd) message2_row_pane_ParamLimits

0x4a49,	// (0x000923cd) message2_row_pane

0x4a63,	// (0x000923e7) address2_row_pane_ParamLimits

0x4a63,	// (0x000923e7) address2_row_pane

0xa325,	// (0x00097ca9) postcard_message2_row_pane_g1

0xa32d,	// (0x00097cb1) postcard_message2_row_pane_t1

0xa325,	// (0x00097ca9) address2_row_pane_g1

0xa32d,	// (0x00097cb1) address2_row_pane_t1

0x1862,	// (0x0008f1e6) aid_size_cell_vorec

0xd98a,	// (0x0009b30e) main_rss_pane

0x4a76,	// (0x000923fa) rss_list_single_pane_ParamLimits

0x4a76,	// (0x000923fa) rss_list_single_pane

0xa33b,	// (0x00097cbf) rss_list_single_pane_t1

0xa349,	// (0x00097ccd) rss_list_single_pane_t2

0x0001,

0xf5d7,	// (0x0009cf5b) rss_list_single_pane_t

0xd98a,	// (0x0009b30e) main_camera2_pane

0xd98a,	// (0x0009b30e) main_video2_pane

0x4cb0,	// (0x00092634) cams_zoom_pane_cp2_ParamLimits

0x4cb0,	// (0x00092634) cams_zoom_pane_cp2

0x4cc7,	// (0x0009264b) image2_vga_pane_ParamLimits

0x4cc7,	// (0x0009264b) image2_vga_pane

0x4cfd,	// (0x00092681) main_camera2_pane_g1_ParamLimits

0x4cfd,	// (0x00092681) main_camera2_pane_g1

0x4d1d,	// (0x000926a1) main_camera2_pane_g2_ParamLimits

0x4d1d,	// (0x000926a1) main_camera2_pane_g2

0x4d34,	// (0x000926b8) main_camera2_pane_g3_ParamLimits

0x4d34,	// (0x000926b8) main_camera2_pane_g3

0x4d4b,	// (0x000926cf) main_camera2_pane_g4_ParamLimits

0x4d4b,	// (0x000926cf) main_camera2_pane_g4

0x4d62,	// (0x000926e6) main_camera2_pane_g5_ParamLimits

0x4d62,	// (0x000926e6) main_camera2_pane_g5

0x4d79,	// (0x000926fd) main_camera2_pane_g6_ParamLimits

0x4d79,	// (0x000926fd) main_camera2_pane_g6

0x4d90,	// (0x00092714) main_camera2_pane_g7_ParamLimits

0x4d90,	// (0x00092714) main_camera2_pane_g7

0x4da7,	// (0x0009272b) main_camera2_pane_g8_ParamLimits

0x4da7,	// (0x0009272b) main_camera2_pane_g8

0x0008,

0xf5f8,	// (0x0009cf7c) main_camera2_pane_g_ParamLimits

0xf5f8,	// (0x0009cf7c) main_camera2_pane_g

0x4dd5,	// (0x00092759) main_camera2_pane_t1_ParamLimits

0x4dd5,	// (0x00092759) main_camera2_pane_t1

0x4e04,	// (0x00092788) main_camera2_pane_t2_ParamLimits

0x4e04,	// (0x00092788) main_camera2_pane_t2

0x4e21,	// (0x000927a5) main_camera2_pane_t3_ParamLimits

0x4e21,	// (0x000927a5) main_camera2_pane_t3

0x4e6d,	// (0x000927f1) main_camera2_pane_t4_ParamLimits

0x4e6d,	// (0x000927f1) main_camera2_pane_t4

0x0006,

0xf60b,	// (0x0009cf8f) main_camera2_pane_t_ParamLimits

0xf60b,	// (0x0009cf8f) main_camera2_pane_t

0x4ee2,	// (0x00092866) cams_zoom_pane_cp4_ParamLimits

0x4ee2,	// (0x00092866) cams_zoom_pane_cp4

0x4ef8,	// (0x0009287c) image2_cif_pane_ParamLimits

0x4ef8,	// (0x0009287c) image2_cif_pane

0x4f1b,	// (0x0009289f) image2_subqcif_pane_ParamLimits

0x4f1b,	// (0x0009289f) image2_subqcif_pane

0x4f31,	// (0x000928b5) main_video2_pane_g1_ParamLimits

0x4f31,	// (0x000928b5) main_video2_pane_g1

0x4f4b,	// (0x000928cf) main_video2_pane_g2_ParamLimits

0x4f4b,	// (0x000928cf) main_video2_pane_g2

0x4f61,	// (0x000928e5) main_video2_pane_g3_ParamLimits

0x4f61,	// (0x000928e5) main_video2_pane_g3

0x4f77,	// (0x000928fb) main_video2_pane_g4_ParamLimits

0x4f77,	// (0x000928fb) main_video2_pane_g4

0x4f8d,	// (0x00092911) main_video2_pane_g5_ParamLimits

0x4f8d,	// (0x00092911) main_video2_pane_g5

0x4fa3,	// (0x00092927) main_video2_pane_g6_ParamLimits

0x4fa3,	// (0x00092927) main_video2_pane_g6

0x0005,

0xf61a,	// (0x0009cf9e) main_video2_pane_g_ParamLimits

0xf61a,	// (0x0009cf9e) main_video2_pane_g

0x4fbd,	// (0x00092941) main_video2_pane_t1_ParamLimits

0x4fbd,	// (0x00092941) main_video2_pane_t1

0x4fe1,	// (0x00092965) main_video2_pane_t2_ParamLimits

0x4fe1,	// (0x00092965) main_video2_pane_t2

0x502b,	// (0x000929af) main_video2_pane_t3_ParamLimits

0x502b,	// (0x000929af) main_video2_pane_t3

0x0002,

0xf627,	// (0x0009cfab) main_video2_pane_t_ParamLimits

0xf627,	// (0x0009cfab) main_video2_pane_t

0x462e,	// (0x00091fb2) call_muted_g2

0x0001,

0xf5c9,	// (0x0009cf4d) call_muted_g

0xd98a,	// (0x0009b30e) main_mup2_pane

0x506d,	// (0x000929f1) main_mup2_pane_g1_ParamLimits

0x506d,	// (0x000929f1) main_mup2_pane_g1

0x5079,	// (0x000929fd) main_mup2_pane_g2_ParamLimits

0x5079,	// (0x000929fd) main_mup2_pane_g2

0xa4d6,	// (0x00097e5a) main_mup_pane_g13_cp1

0xa4de,	// (0x00097e62) mup_volume_pane_cp1

0x5095,	// (0x00092a19) main_mup2_pane_g4_ParamLimits

0x5095,	// (0x00092a19) main_mup2_pane_g4

0x50a5,	// (0x00092a29) main_mup2_pane_g5_ParamLimits

0x50a5,	// (0x00092a29) main_mup2_pane_g5

0x50b5,	// (0x00092a39) main_mup2_pane_g6_ParamLimits

0x50b5,	// (0x00092a39) main_mup2_pane_g6

0x50c5,	// (0x00092a49) main_mup2_pane_g7_ParamLimits

0x50c5,	// (0x00092a49) main_mup2_pane_g7

0x0006,

0xf62e,	// (0x0009cfb2) main_mup2_pane_g_ParamLimits

0xf62e,	// (0x0009cfb2) main_mup2_pane_g

0x50dd,	// (0x00092a61) main_mup2_pane_t1_ParamLimits

0x50dd,	// (0x00092a61) main_mup2_pane_t1

0x50f3,	// (0x00092a77) main_mup2_pane_t2_ParamLimits

0x50f3,	// (0x00092a77) main_mup2_pane_t2

0x5109,	// (0x00092a8d) main_mup2_pane_t3_ParamLimits

0x5109,	// (0x00092a8d) main_mup2_pane_t3

0x511f,	// (0x00092aa3) main_mup2_pane_t4_ParamLimits

0x511f,	// (0x00092aa3) main_mup2_pane_t4

0x5137,	// (0x00092abb) main_mup2_pane_t5_ParamLimits

0x5137,	// (0x00092abb) main_mup2_pane_t5

0x514f,	// (0x00092ad3) main_mup2_pane_t6_ParamLimits

0x514f,	// (0x00092ad3) main_mup2_pane_t6

0x0005,

0xf63d,	// (0x0009cfc1) main_mup2_pane_t_ParamLimits

0xf63d,	// (0x0009cfc1) main_mup2_pane_t

0x517f,	// (0x00092b03) mup2_visualizer_pane_ParamLimits

0x517f,	// (0x00092b03) mup2_visualizer_pane

0x51aa,	// (0x00092b2e) mup_progress_pane_cp_ParamLimits

0x51aa,	// (0x00092b2e) mup_progress_pane_cp

0xa4b8,	// (0x00097e3c) mup_volume_pane_cp_ParamLimits

0xa4b8,	// (0x00097e3c) mup_volume_pane_cp

0x51be,	// (0x00092b42) mup2_visualizer_pane_g1_ParamLimits

0x51be,	// (0x00092b42) mup2_visualizer_pane_g1

0xa3f7,	// (0x00097d7b) mup2_visualizer_pane_g2_ParamLimits

0xa3f7,	// (0x00097d7b) mup2_visualizer_pane_g2

0x51d3,	// (0x00092b57) mup2_visualizer_pane_g3_ParamLimits

0x51d3,	// (0x00092b57) mup2_visualizer_pane_g3

0x0002,

0xf64a,	// (0x0009cfce) mup2_visualizer_pane_g_ParamLimits

0xf64a,	// (0x0009cfce) mup2_visualizer_pane_g

0xe103,	// (0x0009ba87) aid_size_cell_fmradio

0x478a,	// (0x0009210e) aid_height_parent_landcape

0xe052,	// (0x0009b9d6) wml_content_pane_cp

0xe05a,	// (0x0009b9de) wml_tabs_pane

0xe063,	// (0x0009b9e7) popup_wml_miniature_window

0xe06b,	// (0x0009b9ef) scroll_pane_cp021

0xe07f,	// (0x0009ba03) wml_content_pane_comp8

0xd98a,	// (0x0009b30e) bg_popup_sub_pane_cp05

0xa415,	// (0x00097d99) popup_wml_miniature_window_g1

0xa41d,	// (0x00097da1) wml_miniature_view_pane

0x51df,	// (0x00092b63) aid_size_wml_view

0x51e7,	// (0x00092b6b) wml_miniature_view_pane_g1

0x51f0,	// (0x00092b74) wml_miniature_view_pane_g2

0x51f9,	// (0x00092b7d) wml_miniature_view_pane_g3

0x5201,	// (0x00092b85) wml_miniature_view_pane_g4

0x5209,	// (0x00092b8d) wml_miniature_view_pane_g5

0x5211,	// (0x00092b95) wml_miniature_view_pane_g6

0x5219,	// (0x00092b9d) wml_miniature_view_pane_g7

0x5221,	// (0x00092ba5) wml_miniature_view_pane_g8

0x0007,

0xf651,	// (0x0009cfd5) wml_miniature_view_pane_g

0xa425,	// (0x00097da9) background_graphic_ParamLimits

0xa425,	// (0x00097da9) background_graphic

0xa431,	// (0x00097db5) wml_tabs_2_pane

0xa43a,	// (0x00097dbe) wml_tabs_3_pane_ParamLimits

0xa43a,	// (0x00097dbe) wml_tabs_3_pane

0xa44c,	// (0x00097dd0) wml_tabs_4_pane_ParamLimits

0xa44c,	// (0x00097dd0) wml_tabs_4_pane

0xa462,	// (0x00097de6) wml_tabs_5_pane_ParamLimits

0xa462,	// (0x00097de6) wml_tabs_5_pane

0xa47c,	// (0x00097e00) wml_tabs_pane_g2_ParamLimits

0xa47c,	// (0x00097e00) wml_tabs_pane_g2

0xa490,	// (0x00097e14) wml_tabs_pane_g3_ParamLimits

0xa490,	// (0x00097e14) wml_tabs_pane_g3

0x5229,	// (0x00092bad) wml_tabs_2_active_pane_ParamLimits

0x5229,	// (0x00092bad) wml_tabs_2_active_pane

0x5239,	// (0x00092bbd) wml_tabs_2_passive_pane_ParamLimits

0x5239,	// (0x00092bbd) wml_tabs_2_passive_pane

0x5249,	// (0x00092bcd) wml_tabs_3_active_pane_cp_ParamLimits

0x5249,	// (0x00092bcd) wml_tabs_3_active_pane_cp

0x525a,	// (0x00092bde) wml_tabs_3_passive_pane_ParamLimits

0x525a,	// (0x00092bde) wml_tabs_3_passive_pane

0x526b,	// (0x00092bef) wml_tabs_3_passive_pane_cp_ParamLimits

0x526b,	// (0x00092bef) wml_tabs_3_passive_pane_cp

0x527c,	// (0x00092c00) tabs_4_active_pane

0x5284,	// (0x00092c08) tabs_4_passive_pane

0x528c,	// (0x00092c10) tabs_4_passive_pane_cp

0x5294,	// (0x00092c18) tabs_4_passive_pane_cp2

0x4429,	// (0x00091dad) aid_height_text

0x316d,	// (0x00090af1) mup_volume_cont_pane_ParamLimits

0x316d,	// (0x00090af1) mup_volume_cont_pane

0x0eb8,	// (0x0008e83c) aid_size_cell_pinb

0x0ec2,	// (0x0008e846) aid_size_list_pinb

0x5196,	// (0x00092b1a) mup2_volume_cont_pane_ParamLimits

0x5196,	// (0x00092b1a) mup2_volume_cont_pane

0xa4a4,	// (0x00097e28) mup2_volume_cont_pane_g1_ParamLimits

0xa4a4,	// (0x00097e28) mup2_volume_cont_pane_g1

0x0bb4,	// (0x0008e538) aid_size_cell_touch_ParamLimits

0x0bb4,	// (0x0008e538) aid_size_cell_touch

0x0da0,	// (0x0008e724) touch_pane_ParamLimits

0x0da0,	// (0x0008e724) touch_pane

0xa004,	// (0x00097988) main_rss2_pane

0xa4e6,	// (0x00097e6a) listscroll_rss2_pane

0xa4ef,	// (0x00097e73) rss2_navigation_pane

0xa4f7,	// (0x00097e7b) list_rss2_pane

0xe6bc,	// (0x0009c040) scroll_pane_cp22

0xa4ff,	// (0x00097e83) rss2_navigation_pane_g1

0xa508,	// (0x00097e8c) rss2_navigation_pane_g2

0xa510,	// (0x00097e94) rss2_navigation_pane_g3

0x0002,

0xf662,	// (0x0009cfe6) rss2_navigation_pane_g

0xa518,	// (0x00097e9c) rss2_navigation_pane_t1

0x529c,	// (0x00092c20) rss2_list_single_pane_ParamLimits

0x529c,	// (0x00092c20) rss2_list_single_pane

0xa526,	// (0x00097eaa) rss2_list_single_pane_t2

0xa534,	// (0x00097eb8) rss2_list_single_pane_t3_ParamLimits

0xa534,	// (0x00097eb8) rss2_list_single_pane_t3

0xa551,	// (0x00097ed5) rss2_list_single_pane_t4

0x2a51,	// (0x000903d5) smil_status_pane_g1

0x9ff6,	// (0x0009797a) main_image2_pane_ParamLimits

0x9ff6,	// (0x0009797a) main_image2_pane

0x4dbe,	// (0x00092742) main_camera2_pane_g9_ParamLimits

0x4dbe,	// (0x00092742) main_camera2_pane_g9

0x4eb0,	// (0x00092834) main_camera2_pane_t5_ParamLimits

0x4eb0,	// (0x00092834) main_camera2_pane_t5

0xa3cc,	// (0x00097d50) main_camera2_pane_t6_ParamLimits

0xa3cc,	// (0x00097d50) main_camera2_pane_t6

0x52b0,	// (0x00092c34) main_image2_pane_g1_ParamLimits

0x52b0,	// (0x00092c34) main_image2_pane_g1

0x376c,	// (0x000910f0) smil2_video_pane_ParamLimits

0x376c,	// (0x000910f0) smil2_video_pane

0x9fc5,	// (0x00097949) aid_zoom_text_primary_cp

0x9fee,	// (0x00097972) popup_preview_fixed_window

0xdfac,	// (0x0009b930) im_reading_pane_g1

0x4ca4,	// (0x00092628) cams2_bc_adjust_pane_cp_ParamLimits

0x4ca4,	// (0x00092628) cams2_bc_adjust_pane_cp

0x4ed6,	// (0x0009285a) cams2_bc_adjust_pane_ParamLimits

0x4ed6,	// (0x0009285a) cams2_bc_adjust_pane

0xa55f,	// (0x00097ee3) cams2_bc_adjust_pane_g1

0xa567,	// (0x00097eeb) cams2_slider_pane

0xa570,	// (0x00097ef4) cams2_slider_pane_g1

0xa579,	// (0x00097efd) cams2_slider_pane_g2

0x0006,

0xf669,	// (0x0009cfed) cams2_slider_pane_g

0x0fa2,	// (0x0008e926) calc_display_pane_ParamLimits

0x0fbe,	// (0x0008e942) calc_paper_pane_ParamLimits

0x0fdf,	// (0x0008e963) grid_calc_pane_ParamLimits

0xa162,	// (0x00097ae6) popup_clock_digital_window_t1_ParamLimits

0xeb2e,	// (0x0009c4b2) main_image_pane_t1

0x0f84,	// (0x0008e908) aid_size_cell_calc_ParamLimits

0x0f84,	// (0x0008e908) aid_size_cell_calc

0x47d8,	// (0x0009215c) popup_blid_sat_info2_window_ParamLimits

0x47d8,	// (0x0009215c) popup_blid_sat_info2_window

0xa59b,	// (0x00097f1f) aid_size_cell_blid

0xa5a3,	// (0x00097f27) bg_popup_window_pane_cp07

0xa5c6,	// (0x00097f4a) grid_popup_blid_pane

0xa5ce,	// (0x00097f52) heading_pane_cp05_ParamLimits

0xa5ce,	// (0x00097f52) heading_pane_cp05

0xa696,	// (0x0009801a) cell_popup_blid_pane_ParamLimits

0xa696,	// (0x0009801a) cell_popup_blid_pane

0xa6b6,	// (0x0009803a) cell_popup_blid_pane_g1

0xa6be,	// (0x00098042) cell_popup_blid_pane_t1

0x5169,	// (0x00092aed) mup2_indicator_pane_ParamLimits

0x5169,	// (0x00092aed) mup2_indicator_pane

0xde7d,	// (0x0009b801) mup2_visualizer_osc_pane

0xa403,	// (0x00097d87) mup2_visualizer_spec_pane_ParamLimits

0xa403,	// (0x00097d87) mup2_visualizer_spec_pane

0x52c4,	// (0x00092c48) mup2_spec_half_pane

0x52cd,	// (0x00092c51) mup2_spec_half_pane_cp

0x52d5,	// (0x00092c59) mup2_spec_bar_pane_ParamLimits

0x52d5,	// (0x00092c59) mup2_spec_bar_pane

0xa357,	// (0x00097cdb) mup2_spec_bar_pane_g1

0xa361,	// (0x00097ce5) mup2_spec_bar_pane_g2

0x0001,

0xf5dc,	// (0x0009cf60) mup2_spec_bar_pane_g

0x52f4,	// (0x00092c78) mup2_osc_middle_pane

0xa373,	// (0x00097cf7) mup2_visualizer_osc_pane_g1

0xd44f,	// (0x0009add3) popup_number_entry_window_t1_ParamLimits

0xd462,	// (0x0009ade6) popup_number_entry_window_t2_ParamLimits

0xd474,	// (0x0009adf8) popup_number_entry_window_t3_ParamLimits

0x0e08,	// (0x0008e78c) popup_number_entry_window_t5_ParamLimits

0x0e08,	// (0x0008e78c) popup_number_entry_window_t5

0xf0af,	// (0x0009ca33) popup_number_entry_window_t_ParamLimits

0xd486,	// (0x0009ae0a) text_title_cp2_ParamLimits

0xa1a1,	// (0x00097b25) aid_hotspot_pointer_text2_pane

0xa1c7,	// (0x00097b4b) main_viewer_pane_g9_ParamLimits

0xa1c7,	// (0x00097b4b) main_viewer_pane_g9

0xe210,	// (0x0009bb94) cale_month_pane_t1_ParamLimits

0xe236,	// (0x0009bbba) bg_cale_pane_ParamLimits

0xe24e,	// (0x0009bbd2) list_cale_pane_ParamLimits

0xe25f,	// (0x0009bbe3) listscroll_cale_day_pane_t1

0xe271,	// (0x0009bbf5) scroll_pane_cp09_ParamLimits

0x319f,	// (0x00090b23) main_mup_eq_pane_t1_ParamLimits

0x319f,	// (0x00090b23) main_mup_eq_pane_t1

0x31b7,	// (0x00090b3b) main_mup_eq_pane_t2_ParamLimits

0x31b7,	// (0x00090b3b) main_mup_eq_pane_t2

0x31cd,	// (0x00090b51) main_mup_eq_pane_t3_ParamLimits

0x31cd,	// (0x00090b51) main_mup_eq_pane_t3

0x31e3,	// (0x00090b67) main_mup_eq_pane_t4_ParamLimits

0x31e3,	// (0x00090b67) main_mup_eq_pane_t4

0x31f9,	// (0x00090b7d) main_mup_eq_pane_t5_ParamLimits

0x31f9,	// (0x00090b7d) main_mup_eq_pane_t5

0x320f,	// (0x00090b93) main_mup_eq_pane_t6_ParamLimits

0x320f,	// (0x00090b93) main_mup_eq_pane_t6

0x3221,	// (0x00090ba5) main_mup_eq_pane_t7_ParamLimits

0x3221,	// (0x00090ba5) main_mup_eq_pane_t7

0x3233,	// (0x00090bb7) main_mup_eq_pane_t8_ParamLimits

0x3233,	// (0x00090bb7) main_mup_eq_pane_t8

0x3245,	// (0x00090bc9) main_mup_eq_pane_t9_ParamLimits

0x3245,	// (0x00090bc9) main_mup_eq_pane_t9

0x325b,	// (0x00090bdf) main_mup_eq_pane_t10_ParamLimits

0x325b,	// (0x00090bdf) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0009cdbe) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0009cdbe) main_mup_eq_pane_t

0x32ee,	// (0x00090c72) mup_equalizer_pane_cp5_ParamLimits

0x3300,	// (0x00090c84) mup_equalizer_pane_cp6_ParamLimits

0x3312,	// (0x00090c96) mup_equalizer_pane_cp7_ParamLimits

0xa004,	// (0x00097988) main_gallery_pane

0xa37c,	// (0x00097d00) smil2_volume_pane

0xa384,	// (0x00097d08) smil_status_volume_pane_g1_ParamLimits

0xa397,	// (0x00097d1b) smil_status_volume_pane_g2_ParamLimits

0xa3aa,	// (0x00097d2e) smil_status_volume_pane_g3_ParamLimits

0xf5e1,	// (0x0009cf65) smil_status_volume_pane_g_ParamLimits

0xa5a3,	// (0x00097f27) bg_popup_window_pane_cp07_ParamLimits

0xa5b1,	// (0x00097f35) blid_firmament_pane

0x52fd,	// (0x00092c81) aid_size_cell_gallery_ParamLimits

0x52fd,	// (0x00092c81) aid_size_cell_gallery

0x5313,	// (0x00092c97) grid_gallery_pane_ParamLimits

0x5313,	// (0x00092c97) grid_gallery_pane

0x5327,	// (0x00092cab) cell_gallery_pane_ParamLimits

0x5327,	// (0x00092cab) cell_gallery_pane

0xa6cc,	// (0x00098050) bg_cell_gallery_focus_pane_ParamLimits

0xa6cc,	// (0x00098050) bg_cell_gallery_focus_pane

0xa6de,	// (0x00098062) cell_gallery_pane_g1_ParamLimits

0xa6de,	// (0x00098062) cell_gallery_pane_g1

0x536e,	// (0x00092cf2) cell_gallery_pane_g2_ParamLimits

0x536e,	// (0x00092cf2) cell_gallery_pane_g2

0x537b,	// (0x00092cff) cell_gallery_pane_g3_ParamLimits

0x537b,	// (0x00092cff) cell_gallery_pane_g3

0xa6ea,	// (0x0009806e) cell_gallery_pane_g4_ParamLimits

0xa6ea,	// (0x0009806e) cell_gallery_pane_g4

0x0003,

0xf68f,	// (0x0009d013) cell_gallery_pane_g_ParamLimits

0xf68f,	// (0x0009d013) cell_gallery_pane_g

0xa6f6,	// (0x0009807a) bg_cell_gallery_focus_pane_g1

0xa6fe,	// (0x00098082) bg_cell_gallery_focus_pane_g2

0xa706,	// (0x0009808a) bg_cell_gallery_focus_pane_g3

0xa70e,	// (0x00098092) bg_cell_gallery_focus_pane_g4

0xa716,	// (0x0009809a) bg_cell_gallery_focus_pane_g5

0xa71e,	// (0x000980a2) bg_cell_gallery_focus_pane_g6

0xa726,	// (0x000980aa) bg_cell_gallery_focus_pane_g7

0xa72e,	// (0x000980b2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf698,	// (0x0009d01c) bg_cell_gallery_focus_pane_g

0xa736,	// (0x000980ba) aid_firma_cardinal

0xa74a,	// (0x000980ce) blid_firmament_pane_t1

0xa761,	// (0x000980e5) blid_firmament_pane_t2

0xa778,	// (0x000980fc) blid_firmament_pane_t3

0xa78f,	// (0x00098113) blid_firmament_pane_t4

0x0003,

0xf6a9,	// (0x0009d02d) blid_firmament_pane_t

0xa7a6,	// (0x0009812a) blid_sat_info_pane

0xa7b6,	// (0x0009813a) blid_sat_info_pane_g1

0xa7b6,	// (0x0009813a) blid_sat_info_pane_g2

0x0001,

0xf6b2,	// (0x0009d036) blid_sat_info_pane_g

0xa7c0,	// (0x00098144) blid_sat_info_pane_t1

0xa7ce,	// (0x00098152) smil2_volume_content_pane

0xa7d7,	// (0x0009815b) smil2_volume_pane_g1

0xa7df,	// (0x00098163) smil2_volume_content_pane_g1

0xa7e8,	// (0x0009816c) smil2_volume_content_pane_g2

0xa7f1,	// (0x00098175) smil2_volume_content_pane_g3

0xa7fa,	// (0x0009817e) smil2_volume_content_pane_g4

0xa803,	// (0x00098187) smil2_volume_content_pane_g5

0xa80c,	// (0x00098190) smil2_volume_content_pane_g6

0xa815,	// (0x00098199) smil2_volume_content_pane_g7

0xa81e,	// (0x000981a2) smil2_volume_content_pane_g8

0xa827,	// (0x000981ab) smil2_volume_content_pane_g9

0xa830,	// (0x000981b4) smil2_volume_content_pane_g10

0x0009,

0xf6b7,	// (0x0009d03b) smil2_volume_content_pane_g

0x14f9,	// (0x0008ee7d) cale_week_day_heading_pane_t1_ParamLimits

0x1523,	// (0x0008eea7) cale_week_day_heading_pane_t2_ParamLimits

0x1552,	// (0x0008eed6) cale_week_day_heading_pane_t3_ParamLimits

0x1581,	// (0x0008ef05) cale_week_day_heading_pane_t4_ParamLimits

0x15b0,	// (0x0008ef34) cale_week_day_heading_pane_t5_ParamLimits

0x15df,	// (0x0008ef63) cale_week_day_heading_pane_t6_ParamLimits

0x160e,	// (0x0008ef92) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0009cb3a) cale_week_day_heading_pane_t_ParamLimits

0xde2b,	// (0x0009b7af) bg_cale_side_pane_ParamLimits

0x1638,	// (0x0008efbc) cale_week_time_pane_t1_ParamLimits

0x1672,	// (0x0008eff6) cale_week_time_pane_t2_ParamLimits

0x16ac,	// (0x0008f030) cale_week_time_pane_t3_ParamLimits

0x16e6,	// (0x0008f06a) cale_week_time_pane_t4_ParamLimits

0x1720,	// (0x0008f0a4) cale_week_time_pane_t5_ParamLimits

0x175a,	// (0x0008f0de) cale_week_time_pane_t6_ParamLimits

0x1794,	// (0x0008f118) cale_week_time_pane_t7_ParamLimits

0x17ce,	// (0x0008f152) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0009cb49) cale_week_time_pane_t_ParamLimits

0x1808,	// (0x0008f18c) cell_cale_week_pane_g2_ParamLimits

0xde2b,	// (0x0009b7af) bg_cale_side_pane_cp01_ParamLimits

0x2876,	// (0x000901fa) cale_month_week_pane_t1_ParamLimits

0x288f,	// (0x00090213) cale_month_week_pane_t2_ParamLimits

0x28a8,	// (0x0009022c) cale_month_week_pane_t3_ParamLimits

0x28c1,	// (0x00090245) cale_month_week_pane_t4_ParamLimits

0x28da,	// (0x0009025e) cale_month_week_pane_t5_ParamLimits

0x28f3,	// (0x00090277) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0009cc1e) cale_month_week_pane_t_ParamLimits

0xa0e2,	// (0x00097a66) cell_cale_month_pane_g1_ParamLimits

0xa004,	// (0x00097988) main_cale_event_viewer_pane

0x0baa,	// (0x0008e52e) listscroll_cale_event_viewer_pane

0xa839,	// (0x000981bd) list_cale_ev_pane

0xa841,	// (0x000981c5) scroll_pane_cp023

0x5388,	// (0x00092d0c) field_cale_ev_pane_ParamLimits

0x5388,	// (0x00092d0c) field_cale_ev_pane

0xa84d,	// (0x000981d1) field_cale_ev_content_pane_ParamLimits

0xa84d,	// (0x000981d1) field_cale_ev_content_pane

0xa859,	// (0x000981dd) field_cale_ev_pane_g1_ParamLimits

0xa859,	// (0x000981dd) field_cale_ev_pane_g1

0xa865,	// (0x000981e9) field_cale_ev_pane_g2_ParamLimits

0xa865,	// (0x000981e9) field_cale_ev_pane_g2

0xa87d,	// (0x00098201) field_cale_ev_pane_g3_ParamLimits

0xa87d,	// (0x00098201) field_cale_ev_pane_g3

0x0002,

0xf6cc,	// (0x0009d050) field_cale_ev_pane_g_ParamLimits

0xf6cc,	// (0x0009d050) field_cale_ev_pane_g

0xa895,	// (0x00098219) field_cale_ev_pane_t1_ParamLimits

0xa895,	// (0x00098219) field_cale_ev_pane_t1

0x53a2,	// (0x00092d26) field_cale_ev_content_pane_t1_ParamLimits

0x53a2,	// (0x00092d26) field_cale_ev_content_pane_t1

0xea14,	// (0x0009c398) bg_button_pane_cp01

0x1248,	// (0x0008ebcc) listscroll_cale_week_pane_ParamLimits

0xddd6,	// (0x0009b75a) popup_toolbar_window_cp01

0xddfc,	// (0x0009b780) listscroll_cale_week_pane_t1_ParamLimits

0x1248,	// (0x0008ebcc) listscroll_cale_day_pane_ParamLimits

0xddd6,	// (0x0009b75a) popup_toolbar_window_cp02

0xe25f,	// (0x0009bbe3) listscroll_cale_day_pane_t1_ParamLimits

0x4792,	// (0x00092116) main_cale_month_pane_ParamLimits

0xa2f5,	// (0x00097c79) popup_toolbar_window_cp03_ParamLimits

0xa2f5,	// (0x00097c79) popup_toolbar_window_cp03

0x3646,	// (0x00090fca) main_image_pane_g2_ParamLimits

0x3646,	// (0x00090fca) main_image_pane_g2

0x3657,	// (0x00090fdb) main_image_pane_g3_ParamLimits

0x3657,	// (0x00090fdb) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0009ce50) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0009ce50) main_image_pane_g

0xeb2e,	// (0x0009c4b2) main_image_pane_t1_ParamLimits

0x3668,	// (0x00090fec) main_image_pane_t2_ParamLimits

0x3668,	// (0x00090fec) main_image_pane_t2

0x367a,	// (0x00090ffe) main_image_pane_t3_ParamLimits

0x367a,	// (0x00090ffe) main_image_pane_t3

0x36a2,	// (0x00091026) main_image_pane_t4_ParamLimits

0x36a2,	// (0x00091026) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0009ce57) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0009ce57) main_image_pane_t

0x36c2,	// (0x00091046) popup_image_details_window_cp01

0x36ca,	// (0x0009104e) popup_toobar_trans_pane_cp01_ParamLimits

0x36ca,	// (0x0009104e) popup_toobar_trans_pane_cp01

0x48a1,	// (0x00092225) popup_image_details_window_ParamLimits

0x48a1,	// (0x00092225) popup_image_details_window

0xa2ca,	// (0x00097c4e) popup_image_focus_window

0x4c72,	// (0x000925f6) camera2_autofocus_pane_ParamLimits

0x4c72,	// (0x000925f6) camera2_autofocus_pane

0x0baa,	// (0x0008e52e) bg_popup_sub_pane_cp06

0xa8ac,	// (0x00098230) popup_image_focus_window_g1

0xa8b4,	// (0x00098238) popup_image_focus_window_g2

0xa8bc,	// (0x00098240) popup_image_focus_window_g3

0xa8c4,	// (0x00098248) popup_image_focus_window_g4

0x0003,

0xf6d3,	// (0x0009d057) popup_image_focus_window_g

0xa8cc,	// (0x00098250) popup_image_focus_window_t1

0xa8da,	// (0x0009825e) popup_image_focus_window_t2

0xa8e9,	// (0x0009826d) popup_image_focus_window_t3

0x0002,

0xf6dc,	// (0x0009d060) popup_image_focus_window_t

0xa8f7,	// (0x0009827b) camera2_autofocus_pane_g1

0x47a2,	// (0x00092126) bg_tb_trans_pane_cp01

0xa905,	// (0x00098289) popup_image_details_window_g1

0xa918,	// (0x0009829c) popup_image_details_window_g2

0x0002,

0xf6ee,	// (0x0009d072) popup_image_details_window_g

0xa941,	// (0x000982c5) popup_image_details_window_t1

0xa953,	// (0x000982d7) popup_image_details_window_t2

0xa96c,	// (0x000982f0) popup_image_details_window_t3

0xa980,	// (0x00098304) popup_image_details_window_t4

0xa99b,	// (0x0009831f) popup_image_details_window_t5

0x0004,

0xf6f5,	// (0x0009d079) popup_image_details_window_t

0xdc96,	// (0x0009b61a) bg_calc_paper_pane_ParamLimits

0xa004,	// (0x00097988) grid_highlight_pane_cp013

0xa01e,	// (0x000979a2) list_calc_pane_ParamLimits

0xa030,	// (0x000979b4) scroll_pane_cp024

0xdcae,	// (0x0009b632) bg_calc_display_pane_ParamLimits

0xa038,	// (0x000979bc) calc_display_pane_t1_ParamLimits

0xa04d,	// (0x000979d1) calc_display_pane_t2_ParamLimits

0xa062,	// (0x000979e6) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0009caba) calc_display_pane_t_ParamLimits

0x1156,	// (0x0008eada) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0009cad7) cell_calc_pane_g

0x115f,	// (0x0008eae3) cell_calc_pane_t1

0xdd0d,	// (0x0009b691) grid_highlight_pane_cp02_ParamLimits

0xdd23,	// (0x0009b6a7) toolbar_button_pane_cp01_ParamLimits

0xdd23,	// (0x0009b6a7) toolbar_button_pane_cp01

0xeb73,	// (0x0009c4f7) temp_image_control_pane_ParamLimits

0xeb73,	// (0x0009c4f7) temp_image_control_pane

0x9ff6,	// (0x0009797a) main_mp3_pane

0xa9b5,	// (0x00098339) temp_image_control_pane_g1_ParamLimits

0xa9b5,	// (0x00098339) temp_image_control_pane_g1

0xa9c3,	// (0x00098347) temp_image_control_pane_g2_ParamLimits

0xa9c3,	// (0x00098347) temp_image_control_pane_g2

0xa9d5,	// (0x00098359) temp_image_control_pane_g3_ParamLimits

0xa9d5,	// (0x00098359) temp_image_control_pane_g3

0x53ef,	// (0x00092d73) temp_image_control_pane_g4_ParamLimits

0x53ef,	// (0x00092d73) temp_image_control_pane_g4

0x0003,

0xf700,	// (0x0009d084) temp_image_control_pane_g_ParamLimits

0xf700,	// (0x0009d084) temp_image_control_pane_g

0xa9b5,	// (0x00098339) main_mp3_pane_g1

0x5400,	// (0x00092d84) main_mp3_pane_g2

0x0007,

0xf709,	// (0x0009d08d) main_mp3_pane_g

0xaa18,	// (0x0009839c) main_mp3_pane_t1

0xdebd,	// (0x0009b841) main_camera_pane_g8_ParamLimits

0xdebd,	// (0x0009b841) main_camera_pane_g8

0x1ab1,	// (0x0008f435) main_video_pane_g7_ParamLimits

0x1ab1,	// (0x0008f435) main_video_pane_g7

0xa3e5,	// (0x00097d69) main_camera2_pane_t7_ParamLimits

0xa3e5,	// (0x00097d69) main_camera2_pane_t7

0xe012,	// (0x0009b996) scroll_pane_cp025_ParamLimits

0xe012,	// (0x0009b996) scroll_pane_cp025

0xe026,	// (0x0009b9aa) scroll_pane_cp026_ParamLimits

0xe026,	// (0x0009b9aa) scroll_pane_cp026

0xe035,	// (0x0009b9b9) wml_content_pane_ParamLimits

0xa004,	// (0x00097988) main_touch_calib_pane

0x54c2,	// (0x00092e46) main_touch_calib_pane_g1

0x54d4,	// (0x00092e58) main_touch_calib_pane_g2

0x54e6,	// (0x00092e6a) main_touch_calib_pane_g3

0x54f8,	// (0x00092e7c) main_touch_calib_pane_g4

0x0003,

0xf727,	// (0x0009d0ab) main_touch_calib_pane_g

0x550a,	// (0x00092e8e) main_touch_calib_pane_t1

0x5522,	// (0x00092ea6) main_touch_calib_pane_t2

0x0004,

0xf730,	// (0x0009d0b4) main_touch_calib_pane_t

0xe778,	// (0x0009c0fc) mup_progress_pane_cp02

0xe7ad,	// (0x0009c131) navi_pane_g1

0xe838,	// (0x0009c1bc) navi_pane_mp_t3

0x9ff6,	// (0x0009797a) main_mp3_pane_ParamLimits

0x49fa,	// (0x0009237e) navi_pane_ParamLimits

0xa9b5,	// (0x00098339) main_mp3_pane_g1_ParamLimits

0x5400,	// (0x00092d84) main_mp3_pane_g2_ParamLimits

0x540c,	// (0x00092d90) main_mp3_pane_g3_ParamLimits

0x540c,	// (0x00092d90) main_mp3_pane_g3

0x5418,	// (0x00092d9c) main_mp3_pane_g4_ParamLimits

0x5418,	// (0x00092d9c) main_mp3_pane_g4

0xa9e5,	// (0x00098369) main_mp3_pane_g5_ParamLimits

0xa9e5,	// (0x00098369) main_mp3_pane_g5

0xa9f3,	// (0x00098377) main_mp3_pane_g6_ParamLimits

0xa9f3,	// (0x00098377) main_mp3_pane_g6

0xaa00,	// (0x00098384) main_mp3_pane_g7_ParamLimits

0xaa00,	// (0x00098384) main_mp3_pane_g7

0xaa0c,	// (0x00098390) main_mp3_pane_g8_ParamLimits

0xaa0c,	// (0x00098390) main_mp3_pane_g8

0xf709,	// (0x0009d08d) main_mp3_pane_g_ParamLimits

0x5424,	// (0x00092da8) main_mp3_pane_t2

0x5432,	// (0x00092db6) main_mp3_pane_t3

0xaa26,	// (0x000983aa) main_mp3_pane_t4

0xaa34,	// (0x000983b8) main_mp3_pane_t5

0x0005,

0xf71a,	// (0x0009d09e) main_mp3_pane_t

0xaa42,	// (0x000983c6) mup_progress_pane_cp01

0x9fc5,	// (0x00097949) aid_zoom_text_secondary2

0xa839,	// (0x000981bd) list_cale_ev2_pane

0xa841,	// (0x000981c5) scroll_pane_cp023_ParamLimits

0x5570,	// (0x00092ef4) field_cale_ev2_pane_ParamLimits

0x5570,	// (0x00092ef4) field_cale_ev2_pane

0xaa4a,	// (0x000983ce) field_cale_ev2_pane_g1_ParamLimits

0xaa4a,	// (0x000983ce) field_cale_ev2_pane_g1

0xaa56,	// (0x000983da) field_cale_ev2_pane_g2_ParamLimits

0xaa56,	// (0x000983da) field_cale_ev2_pane_g2

0xaa6e,	// (0x000983f2) field_cale_ev2_pane_g3_ParamLimits

0xaa6e,	// (0x000983f2) field_cale_ev2_pane_g3

0x0003,

0xf73b,	// (0x0009d0bf) field_cale_ev2_pane_g_ParamLimits

0xf73b,	// (0x0009d0bf) field_cale_ev2_pane_g

0xaa92,	// (0x00098416) field_cale_ev2_pane_t1_ParamLimits

0xaa92,	// (0x00098416) field_cale_ev2_pane_t1

0xaaa9,	// (0x0009842d) field_cale_ev2_pane_t2_ParamLimits

0xaaa9,	// (0x0009842d) field_cale_ev2_pane_t2

0x0001,

0xf744,	// (0x0009d0c8) field_cale_ev2_pane_t_ParamLimits

0xf744,	// (0x0009d0c8) field_cale_ev2_pane_t

0x3501,	// (0x00090e85) main_postcard_pane_g5_ParamLimits

0x3501,	// (0x00090e85) main_postcard_pane_g5

0x3515,	// (0x00090e99) main_postcard_pane_g6_ParamLimits

0x3515,	// (0x00090e99) main_postcard_pane_g6

0x1893,	// (0x0008f217) camera2_autofocus_pane_cp_ParamLimits

0x1893,	// (0x0008f217) camera2_autofocus_pane_cp

0x9ff6,	// (0x0009797a) main_mup3_pane

0x55c6,	// (0x00092f4a) main_mup3_pane_g1_ParamLimits

0x55c6,	// (0x00092f4a) main_mup3_pane_g1

0x55e8,	// (0x00092f6c) main_mup3_pane_g2_ParamLimits

0x55e8,	// (0x00092f6c) main_mup3_pane_g2

0x565b,	// (0x00092fdf) main_mup3_pane_g3_ParamLimits

0x565b,	// (0x00092fdf) main_mup3_pane_g3

0x5699,	// (0x0009301d) main_mup3_pane_g4_ParamLimits

0x5699,	// (0x0009301d) main_mup3_pane_g4

0x56d7,	// (0x0009305b) main_mup3_pane_g5_ParamLimits

0x56d7,	// (0x0009305b) main_mup3_pane_g5

0x5715,	// (0x00093099) main_mup3_pane_g6_ParamLimits

0x5715,	// (0x00093099) main_mup3_pane_g6

0xaabe,	// (0x00098442) main_mup3_pane_g7_ParamLimits

0xaabe,	// (0x00098442) main_mup3_pane_g7

0x0007,

0xf754,	// (0x0009d0d8) main_mup3_pane_g_ParamLimits

0xf754,	// (0x0009d0d8) main_mup3_pane_g

0x578b,	// (0x0009310f) main_mup3_pane_t1_ParamLimits

0x578b,	// (0x0009310f) main_mup3_pane_t1

0x57f1,	// (0x00093175) main_mup3_pane_t2_ParamLimits

0x57f1,	// (0x00093175) main_mup3_pane_t2

0x58b7,	// (0x0009323b) main_mup3_pane_t4_ParamLimits

0x58b7,	// (0x0009323b) main_mup3_pane_t4

0x5905,	// (0x00093289) main_mup3_pane_t5_ParamLimits

0x5905,	// (0x00093289) main_mup3_pane_t5

0x59b3,	// (0x00093337) main_mup3_pane_t6_ParamLimits

0x59b3,	// (0x00093337) main_mup3_pane_t6

0x0005,

0xf765,	// (0x0009d0e9) main_mup3_pane_t_ParamLimits

0xf765,	// (0x0009d0e9) main_mup3_pane_t

0x5a67,	// (0x000933eb) mup3_progress_pane_ParamLimits

0x5a67,	// (0x000933eb) mup3_progress_pane

0x5ae3,	// (0x00093467) popup_mup3_control_window_ParamLimits

0x5ae3,	// (0x00093467) popup_mup3_control_window

0xaacc,	// (0x00098450) popup_mup3_text_window

0x5b11,	// (0x00093495) mup3_progress_pane_t1

0x5b2f,	// (0x000934b3) mup3_progress_pane_t2

0xaad4,	// (0x00098458) mup3_progress_pane_t3

0x0002,

0xf772,	// (0x0009d0f6) mup3_progress_pane_t

0xaaf1,	// (0x00098475) mup_progress_pane_cp03

0x0baa,	// (0x0008e52e) bg_tb_trans_pane_cp04

0x5b4d,	// (0x000934d1) mup3_volume_pane

0x5b55,	// (0x000934d9) popup_mup3_control_window_g1

0x5b5e,	// (0x000934e2) mup3_volume_pane_g1

0x5b67,	// (0x000934eb) mup3_volume_pane_g2

0x5b70,	// (0x000934f4) mup3_volume_pane_g3

0x0002,

0xf779,	// (0x0009d0fd) mup3_volume_pane_g

0x0baa,	// (0x0008e52e) bg_tb_trans_pane_cp03

0xab01,	// (0x00098485) popup_mup3_text_window_g1

0xab09,	// (0x0009848d) popup_mup3_text_window_t1

0xdcf6,	// (0x0009b67a) list_calc_item_pane_g1_ParamLimits

0xa4cd,	// (0x00097e51) mup_volume_pane_cp_g1

0x553a,	// (0x00092ebe) main_touch_calib_pane_t3

0x554c,	// (0x00092ed0) main_touch_calib_pane_t4

0x555e,	// (0x00092ee2) main_touch_calib_pane_t5

0x9fa5,	// (0x00097929) aid_cell_size_toolbar2

0x9fad,	// (0x00097931) aid_popup3_width_pane

0x9fb5,	// (0x00097939) aid_zoom_text_msg_primary

0xdeaf,	// (0x0009b833) vorec_t7

0xdcba,	// (0x0009b63e) bg_calc_paper_pane_g1_ParamLimits

0xdcc6,	// (0x0009b64a) bg_calc_paper_pane_g2_ParamLimits

0xdcd2,	// (0x0009b656) bg_calc_paper_pane_g3_ParamLimits

0xdcde,	// (0x0009b662) bg_calc_paper_pane_g4_ParamLimits

0xdcea,	// (0x0009b66e) bg_calc_paper_pane_g5_ParamLimits

0x10f0,	// (0x0008ea74) bg_calc_paper_pane_g6_ParamLimits

0x10ff,	// (0x0008ea83) bg_calc_paper_pane_g7_ParamLimits

0x110e,	// (0x0008ea92) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0009cac1) bg_calc_paper_pane_g_ParamLimits

0x111d,	// (0x0008eaa1) calc_bg_paper_pane_g9_ParamLimits

0x19c7,	// (0x0008f34b) image_qvga_pane_ParamLimits

0x19c7,	// (0x0008f34b) image_qvga_pane

0xdbe5,	// (0x0009b569) bg_popup_sub_pane_cp04_ParamLimits

0xeaaa,	// (0x0009c42e) popup_mup_playback_window_g1_ParamLimits

0xeab6,	// (0x0009c43a) popup_mup_playback_window_t1_ParamLimits

0xeacb,	// (0x0009c44f) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0009ce4b) popup_mup_playback_window_t_ParamLimits

0x5089,	// (0x00092a0d) main_mup2_pane_g3_ParamLimits

0x5089,	// (0x00092a0d) main_mup2_pane_g3

0x1d85,	// (0x0008f709) popup_toolbar_window_cp04

0xee9d,	// (0x0009c821) popup_call2_audio_second_window_g3_ParamLimits

0xee9d,	// (0x0009c821) popup_call2_audio_second_window_g3

0x3b92,	// (0x00091516) popup_call2_audio_first_window_g4_ParamLimits

0x3b92,	// (0x00091516) popup_call2_audio_first_window_g4

0x4211,	// (0x00091b95) popup_call2_audio_in_window_g4_ParamLimits

0x4211,	// (0x00091b95) popup_call2_audio_in_window_g4

0x3628,	// (0x00090fac) aid_area_sk_bg_cut_ParamLimits

0x3628,	// (0x00090fac) aid_area_sk_bg_cut

0xeae0,	// (0x0009c464) aid_area_sk_bg_cut_2_ParamLimits

0xeae0,	// (0x0009c464) aid_area_sk_bg_cut_2

0x535e,	// (0x00092ce2) aid_placing_details_win

0x5366,	// (0x00092cea) aid_placing_details_win_2

0xa8f7,	// (0x0009827b) camera2_autofocus_pane_g1_ParamLimits

0x0d41,	// (0x0008e6c5) popup_fixed_preview_cale_window_ParamLimits

0x0d41,	// (0x0008e6c5) popup_fixed_preview_cale_window

0xe8ae,	// (0x0009c232) navi_slider_pane_g3

0xe8b7,	// (0x0009c23b) navi_slider_pane_g4

0xe8c0,	// (0x0009c244) navi_slider_pane_g5

0xe8ae,	// (0x0009c232) navi_slider_pane_g6

0xa188,	// (0x00097b0c) navi_slider_pane_g7

0xe9e1,	// (0x0009c365) mup_scale_pane_g3

0xe9ea,	// (0x0009c36e) mup_scale_pane_g4

0xe9f3,	// (0x0009c377) mup_scale_pane_g5

0x3326,	// (0x00090caa) mup_scale_pane_g6

0x332f,	// (0x00090cb3) mup_scale_pane_g7

0xe8ae,	// (0x0009c232) cams2_slider_pane_g3

0xa582,	// (0x00097f06) cams2_slider_pane_g4

0xa58a,	// (0x00097f0e) cams2_slider_pane_g5

0xe8ae,	// (0x0009c232) cams2_slider_pane_g6

0xa592,	// (0x00097f16) cams2_slider_pane_g7

0xa7b6,	// (0x0009813a) camera2_autofocus_pane_cp_g1

0xa296,	// (0x00097c1a) bg_popup_preview_window_pane_cp02_ParamLimits

0xa296,	// (0x00097c1a) bg_popup_preview_window_pane_cp02

0xab17,	// (0x0009849b) list_fp_cale_pane_ParamLimits

0xab17,	// (0x0009849b) list_fp_cale_pane

0xab23,	// (0x000984a7) popup_fixed_preview_cale_window_t1_ParamLimits

0xab23,	// (0x000984a7) popup_fixed_preview_cale_window_t1

0x5b79,	// (0x000934fd) popup_fixed_preview_cale_window_t2_ParamLimits

0x5b79,	// (0x000934fd) popup_fixed_preview_cale_window_t2

0x5b8e,	// (0x00093512) popup_fixed_preview_cale_window_t3_ParamLimits

0x5b8e,	// (0x00093512) popup_fixed_preview_cale_window_t3

0x0002,

0xf780,	// (0x0009d104) popup_fixed_preview_cale_window_t_ParamLimits

0xf780,	// (0x0009d104) popup_fixed_preview_cale_window_t

0x5ba3,	// (0x00093527) list_single_fp_cale_pane_ParamLimits

0x5ba3,	// (0x00093527) list_single_fp_cale_pane

0xab41,	// (0x000984c5) list_single_fp_cale_pane_g1_ParamLimits

0xab41,	// (0x000984c5) list_single_fp_cale_pane_g1

0xab4d,	// (0x000984d1) list_single_fp_cale_pane_g2_ParamLimits

0xab4d,	// (0x000984d1) list_single_fp_cale_pane_g2

0x0002,

0xf787,	// (0x0009d10b) list_single_fp_cale_pane_g_ParamLimits

0xf787,	// (0x0009d10b) list_single_fp_cale_pane_g

0xab66,	// (0x000984ea) list_single_fp_cale_pane_t1_ParamLimits

0xab66,	// (0x000984ea) list_single_fp_cale_pane_t1

0xab78,	// (0x000984fc) list_single_fp_cale_pane_t2_ParamLimits

0xab78,	// (0x000984fc) list_single_fp_cale_pane_t2

0x0001,

0xf78e,	// (0x0009d112) list_single_fp_cale_pane_t_ParamLimits

0xf78e,	// (0x0009d112) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa004,	// (0x00097988) main_dialer_pane

0x5bb7,	// (0x0009353b) aid_cell_size_keypad

0x5bc1,	// (0x00093545) dialer_ne_pane

0x5bc9,	// (0x0009354d) grid_dialer_command_1_pane

0x5bd1,	// (0x00093555) grid_dialer_command_2_pane

0x5bd9,	// (0x0009355d) grid_dialer_keypad_pane

0x5be9,	// (0x0009356d) bg_popup_call_pane_cp06_ParamLimits

0x5be9,	// (0x0009356d) bg_popup_call_pane_cp06

0x5bf5,	// (0x00093579) dialer_ne_clear_pane_ParamLimits

0x5bf5,	// (0x00093579) dialer_ne_clear_pane

0xabab,	// (0x0009852f) dialer_ne_pane_g1

0xabb3,	// (0x00098537) dialer_ne_pane_t1_ParamLimits

0xabb3,	// (0x00098537) dialer_ne_pane_t1

0x5c01,	// (0x00093585) dialer_ne_pane_t2_ParamLimits

0x5c01,	// (0x00093585) dialer_ne_pane_t2

0x5c2b,	// (0x000935af) dialer_ne_pane_t3_ParamLimits

0x5c2b,	// (0x000935af) dialer_ne_pane_t3

0x0002,

0xf793,	// (0x0009d117) dialer_ne_pane_t_ParamLimits

0xf793,	// (0x0009d117) dialer_ne_pane_t

0x5c5b,	// (0x000935df) dialer_ne_pane_t3_copy1_ParamLimits

0x5c5b,	// (0x000935df) dialer_ne_pane_t3_copy1

0x5c8a,	// (0x0009360e) cell_dialer_keypad_pane_ParamLimits

0x5c8a,	// (0x0009360e) cell_dialer_keypad_pane

0x5c9f,	// (0x00093623) cell_dialer_command_1_pane_ParamLimits

0x5c9f,	// (0x00093623) cell_dialer_command_1_pane

0x5cb5,	// (0x00093639) cell_dialer_command_2_pane_ParamLimits

0x5cb5,	// (0x00093639) cell_dialer_command_2_pane

0xabc5,	// (0x00098549) bg_button_pane_cp02_ParamLimits

0xabc5,	// (0x00098549) bg_button_pane_cp02

0x5cc4,	// (0x00093648) cell_dialer_keypad_pane_g1_ParamLimits

0x5cc4,	// (0x00093648) cell_dialer_keypad_pane_g1

0xabc5,	// (0x00098549) bg_button_pane_cp03_ParamLimits

0xabc5,	// (0x00098549) bg_button_pane_cp03

0x5cd9,	// (0x0009365d) cell_dialer_command_1_pane_g1_ParamLimits

0x5cd9,	// (0x0009365d) cell_dialer_command_1_pane_g1

0xabd1,	// (0x00098555) bg_button_pane_cp04

0x5ced,	// (0x00093671) cell_dialer_command_2_pane_g1

0xde7d,	// (0x0009b801) bg_button_pane_cp06

0xabd9,	// (0x0009855d) dialer_ne_clear_pane_g1

0xe7b9,	// (0x0009c13d) navi_pane_g2

0x2f2b,	// (0x000908af) navi_pane_g3

0x0002,

0xf3ca,	// (0x0009cd4e) navi_pane_g

0xe846,	// (0x0009c1ca) navi_pane_mv_g2

0xe86d,	// (0x0009c1f1) navi_pane_mv_g5

0x2f48,	// (0x000908cc) navi_pane_mv_t1

0xdcae,	// (0x0009b632) main_clock2_pane

0x5d32,	// (0x000936b6) main_clock2_list_pane_ParamLimits

0x5d32,	// (0x000936b6) main_clock2_list_pane

0x5d64,	// (0x000936e8) main_clock2_pane_t1_ParamLimits

0x5d64,	// (0x000936e8) main_clock2_pane_t1

0x5d9e,	// (0x00093722) main_clock2_pane_t2_ParamLimits

0x5d9e,	// (0x00093722) main_clock2_pane_t2

0x0004,

0xf79f,	// (0x0009d123) main_clock2_pane_t_ParamLimits

0xf79f,	// (0x0009d123) main_clock2_pane_t

0x5e32,	// (0x000937b6) popup_clock_analogue_window_cp03_ParamLimits

0x5e32,	// (0x000937b6) popup_clock_analogue_window_cp03

0x5e57,	// (0x000937db) popup_clock_digital_window_cp02_ParamLimits

0x5e57,	// (0x000937db) popup_clock_digital_window_cp02

0x5ec8,	// (0x0009384c) main_clock2_list_single_pane_ParamLimits

0x5ec8,	// (0x0009384c) main_clock2_list_single_pane

0xde7d,	// (0x0009b801) list_highlight_pane_cp05

0xac11,	// (0x00098595) main_clock2_list_single_pane_t1

0x1d85,	// (0x0008f709) popup_toolbar_window_cp04_ParamLimits

0x53bf,	// (0x00092d43) camera2_autofocus_pane_g2_ParamLimits

0x53bf,	// (0x00092d43) camera2_autofocus_pane_g2

0x53cb,	// (0x00092d4f) camera2_autofocus_pane_g3_ParamLimits

0x53cb,	// (0x00092d4f) camera2_autofocus_pane_g3

0x53d7,	// (0x00092d5b) camera2_autofocus_pane_g4_ParamLimits

0x53d7,	// (0x00092d5b) camera2_autofocus_pane_g4

0x53e3,	// (0x00092d67) camera2_autofocus_pane_g5_ParamLimits

0x53e3,	// (0x00092d67) camera2_autofocus_pane_g5

0x0004,

0xf6e3,	// (0x0009d067) camera2_autofocus_pane_g_ParamLimits

0xf6e3,	// (0x0009d067) camera2_autofocus_pane_g

0x5588,	// (0x00092f0c) camera2_autofocus_pane_cp_g2

0x5590,	// (0x00092f14) camera2_autofocus_pane_cp_g3

0x5598,	// (0x00092f1c) camera2_autofocus_pane_cp_g4

0x55a0,	// (0x00092f24) camera2_autofocus_pane_cp_g5

0x0004,

0xf749,	// (0x0009d0cd) camera2_autofocus_pane_cp_g

0x5be1,	// (0x00093565) popup_dialer_spcha_window

0x0baa,	// (0x0008e52e) bg_popup_sub_pane_cp07

0xac1f,	// (0x000985a3) list_spcha_pane

0xac27,	// (0x000985ab) list_single_spcha_pane_ParamLimits

0xac27,	// (0x000985ab) list_single_spcha_pane

0x0baa,	// (0x0008e52e) list_highlight_pane_cp06

0xac38,	// (0x000985bc) list_single_spcha_pane_t1

0x3fbb,	// (0x0009193f) popup_call2_audio_out_window_g4_ParamLimits

0x3fbb,	// (0x0009193f) popup_call2_audio_out_window_g4

0xa004,	// (0x00097988) main_imed2_pane

0xa2d2,	// (0x00097c56) popup_imed_adjust2_window

0x48b7,	// (0x0009223b) popup_imed_trans_window_ParamLimits

0x48b7,	// (0x0009223b) popup_imed_trans_window

0xa5fa,	// (0x00097f7e) popup_blid_sat_info2_window_t1

0xa608,	// (0x00097f8c) popup_blid_sat_info2_window_t2

0x000a,

0xf678,	// (0x0009cffc) popup_blid_sat_info2_window_t

0x5f72,	// (0x000938f6) aid_size_cell_colour_35

0x5f92,	// (0x00093916) aid_size_cell_colour_112

0x5fb2,	// (0x00093936) aid_size_cell_effect

0xa2a2,	// (0x00097c26) bg_tb_trans_pane_cp02

0xe368,	// (0x0009bcec) heading_imed_pane

0x5fd2,	// (0x00093956) listscroll_imed_pane

0xac46,	// (0x000985ca) heading_imed_pane_g1

0xac4e,	// (0x000985d2) heading_imed_pane_t1

0xac5c,	// (0x000985e0) grid_imed_colour_35_pane_ParamLimits

0xac5c,	// (0x000985e0) grid_imed_colour_35_pane

0x5fde,	// (0x00093962) grid_imed_effect_pane

0xac6f,	// (0x000985f3) list_imed_aspect_pane

0x5ff1,	// (0x00093975) scroll_pane_cp027_ParamLimits

0x5ff1,	// (0x00093975) scroll_pane_cp027

0x5ffd,	// (0x00093981) cell_imed_effect_pane_ParamLimits

0x5ffd,	// (0x00093981) cell_imed_effect_pane

0xac77,	// (0x000985fb) cell_imed_colour_pane_ParamLimits

0xac77,	// (0x000985fb) cell_imed_colour_pane

0xacb1,	// (0x00098635) cell_imed_colour_pane_g1_ParamLimits

0xacb1,	// (0x00098635) cell_imed_colour_pane_g1

0xacc2,	// (0x00098646) hgihlgiht_grid_pane_cp016_ParamLimits

0xacc2,	// (0x00098646) hgihlgiht_grid_pane_cp016

0x6022,	// (0x000939a6) cell_imed_effect_pane_g1

0x602a,	// (0x000939ae) grid_highlight_pane_cp017

0xacd3,	// (0x00098657) list_imed_single_pane_ParamLimits

0xacd3,	// (0x00098657) list_imed_single_pane

0x0baa,	// (0x0008e52e) list_highlight_pane_cp07

0xace6,	// (0x0009866a) list_imed_aspect_pane_comp1_t1

0xa2a2,	// (0x00097c26) bg_tb_trans_pane_cp05

0xad06,	// (0x0009868a) popup_imed_adjust2_window_g1

0xad2d,	// (0x000986b1) popup_imed_adjust2_window_t1

0xad45,	// (0x000986c9) slider_imed_adjust_pane

0xad59,	// (0x000986dd) slider_imed_adjust_pane_g1

0xad69,	// (0x000986ed) slider_imed_adjust_pane_g2

0xad79,	// (0x000986fd) slider_imed_adjust_pane_g3

0xad8a,	// (0x0009870e) slider_imed_adjust_pane_g4

0x0003,

0xf7bc,	// (0x0009d140) slider_imed_adjust_pane_g

0x6033,	// (0x000939b7) aid_size_cell_clipart2

0x603f,	// (0x000939c3) grid_imed_clipart_pane

0xad9b,	// (0x0009871f) scroll_pane_cp031

0x6049,	// (0x000939cd) cell_imed_clipart_pane_ParamLimits

0x6049,	// (0x000939cd) cell_imed_clipart_pane

0x6061,	// (0x000939e5) cell_imed_clipart_pane_g1

0x0baa,	// (0x0008e52e) grid_highlight_pane_cp014

0x5d45,	// (0x000936c9) main_clock2_pane_g1_ParamLimits

0x5d45,	// (0x000936c9) main_clock2_pane_g1

0x5e73,	// (0x000937f7) aid_call2_pane_cp10

0x5e85,	// (0x00093809) aid_call_pane_cp10

0xe748,	// (0x0009c0cc) popup_clock_analogue_window_cp10_g1

0xe748,	// (0x0009c0cc) popup_clock_analogue_window_cp10_g2

0x5e97,	// (0x0009381b) popup_clock_analogue_window_cp10_g3

0x5e97,	// (0x0009381b) popup_clock_analogue_window_cp10_g4

0xe748,	// (0x0009c0cc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7aa,	// (0x0009d12e) popup_clock_analogue_window_cp10_g

0x5ea9,	// (0x0009382d) popup_clock_analogue_window_cp10_t1

0x5eda,	// (0x0009385e) clock_digital_number_pane_cp10_ParamLimits

0x5eda,	// (0x0009385e) clock_digital_number_pane_cp10

0x5ef2,	// (0x00093876) clock_digital_number_pane_cp11_ParamLimits

0x5ef2,	// (0x00093876) clock_digital_number_pane_cp11

0x5f0a,	// (0x0009388e) clock_digital_number_pane_cp12_ParamLimits

0x5f0a,	// (0x0009388e) clock_digital_number_pane_cp12

0x5f22,	// (0x000938a6) clock_digital_number_pane_cp13_ParamLimits

0x5f22,	// (0x000938a6) clock_digital_number_pane_cp13

0x5f3a,	// (0x000938be) clock_digital_separator_pane_cp10_ParamLimits

0x5f3a,	// (0x000938be) clock_digital_separator_pane_cp10

0x5f52,	// (0x000938d6) popup_clock_digital_window_cp02_t1_ParamLimits

0x5f52,	// (0x000938d6) popup_clock_digital_window_cp02_t1

0xdbdd,	// (0x0009b561) clock_digital_number_pane_cp10_g1

0xdbdd,	// (0x0009b561) clock_digital_number_pane_cp10_g2

0x0001,

0x0317,	// (0x0008dc9b) clock_digital_number_pane_cp10_g

0xdbdd,	// (0x0009b561) clock_digital_separator_pane_cp10_g1

0xdbdd,	// (0x0009b561) clock_digital_separator_pane_g2_cp10

0xe875,	// (0x0009c1f9) navi_pane_vded_g4

0xe87e,	// (0x0009c202) navi_pane_vded_g5

0xe887,	// (0x0009c20b) navi_pane_vded_t1

0xa004,	// (0x00097988) main_vded_pane

0x606a,	// (0x000939ee) main_vded_pane_g1

0x6074,	// (0x000939f8) main_vded_pane_g2

0x607c,	// (0x00093a00) main_vded_pane_g3

0x0002,

0xf7c5,	// (0x0009d149) main_vded_pane_g

0x6084,	// (0x00093a08) main_vded_pane_t1

0x6092,	// (0x00093a16) main_vded_pane_t2

0x0001,

0xf7cc,	// (0x0009d150) main_vded_pane_t

0x60a0,	// (0x00093a24) vded_slider_pane

0x60a8,	// (0x00093a2c) vded_video_pane

0xada3,	// (0x00098727) vded_video_pane_g1

0x60b0,	// (0x00093a34) vded_video_pane_g2

0xa7b6,	// (0x0009813a) vded_video_pane_g3

0x0002,

0xf7d1,	// (0x0009d155) vded_video_pane_g

0xadad,	// (0x00098731) vded_slider_pane_g1

0xa4cd,	// (0x00097e51) vded_slider_pane_g2

0xadb6,	// (0x0009873a) vded_slider_pane_g3

0xadbf,	// (0x00098743) vded_slider_pane_g4

0xadc8,	// (0x0009874c) vded_slider_pane_g5

0x0004,

0xf7d8,	// (0x0009d15c) vded_slider_pane_g

0x5acd,	// (0x00093451) mup3_rocker_pane_ParamLimits

0x5acd,	// (0x00093451) mup3_rocker_pane

0x60b9,	// (0x00093a3d) mup3_control_keys_pane_g1

0x60c1,	// (0x00093a45) mup3_control_keys_pane_g2

0x60c9,	// (0x00093a4d) mup3_control_keys_pane_g3

0x60d1,	// (0x00093a55) mup3_control_keys_pane_g4

0x0003,

0xf7e3,	// (0x0009d167) mup3_control_keys_pane_g

0x0d74,	// (0x0008e6f8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d74,	// (0x0008e6f8) popup_toolbar2_fixed_window_cp01

0x5afb,	// (0x0009347f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5afb,	// (0x0009347f) popup_toolbar2_fixed_window_cp02

0xf00f,	// (0x0009c993) popup_call2_audio_second_window_t4_ParamLimits

0xf00f,	// (0x0009c993) popup_call2_audio_second_window_t4

0x3e28,	// (0x000917ac) popup_call2_audio_first_window_t6_ParamLimits

0x3e28,	// (0x000917ac) popup_call2_audio_first_window_t6

0x40be,	// (0x00091a42) popup_call2_audio_out_window_t6_ParamLimits

0x40be,	// (0x00091a42) popup_call2_audio_out_window_t6

0xa004,	// (0x00097988) main_vitu_pane

0x60e1,	// (0x00093a65) aid_size_cell_itu_ParamLimits

0x60e1,	// (0x00093a65) aid_size_cell_itu

0x47a2,	// (0x00092126) bg_popup_window_pane_cp08_ParamLimits

0x47a2,	// (0x00092126) bg_popup_window_pane_cp08

0x60f7,	// (0x00093a7b) field_vitu_entry_pane_ParamLimits

0x60f7,	// (0x00093a7b) field_vitu_entry_pane

0x610a,	// (0x00093a8e) grid_vitu_function_pane_ParamLimits

0x610a,	// (0x00093a8e) grid_vitu_function_pane

0x611f,	// (0x00093aa3) grid_vitu_itu_pane_ParamLimits

0x611f,	// (0x00093aa3) grid_vitu_itu_pane

0x6135,	// (0x00093ab9) cell_vitu_itu_pane_ParamLimits

0x6135,	// (0x00093ab9) cell_vitu_itu_pane

0x6157,	// (0x00093adb) cell_vitu_function_pane_ParamLimits

0x6157,	// (0x00093adb) cell_vitu_function_pane

0x47a2,	// (0x00092126) bg_popup_sub_pane_cp08_ParamLimits

0x47a2,	// (0x00092126) bg_popup_sub_pane_cp08

0x6170,	// (0x00093af4) field_vitu_entry_pane_t1_ParamLimits

0x6170,	// (0x00093af4) field_vitu_entry_pane_t1

0xade9,	// (0x0009876d) field_vitu_entry_pane_t2_ParamLimits

0xade9,	// (0x0009876d) field_vitu_entry_pane_t2

0x0001,

0xf7f1,	// (0x0009d175) field_vitu_entry_pane_t_ParamLimits

0xf7f1,	// (0x0009d175) field_vitu_entry_pane_t

0xae06,	// (0x0009878a) bg_button_pane_cp05_ParamLimits

0xae06,	// (0x0009878a) bg_button_pane_cp05

0x618c,	// (0x00093b10) cell_vitu_itu_pane_g1

0x61a4,	// (0x00093b28) cell_vitu_itu_pane_t1_ParamLimits

0x61a4,	// (0x00093b28) cell_vitu_itu_pane_t1

0x61b6,	// (0x00093b3a) cell_vitu_itu_pane_t2_ParamLimits

0x61b6,	// (0x00093b3a) cell_vitu_itu_pane_t2

0x0002,

0xf7f6,	// (0x0009d17a) cell_vitu_itu_pane_t_ParamLimits

0xf7f6,	// (0x0009d17a) cell_vitu_itu_pane_t

0xae14,	// (0x00098798) bg_button_pane_cp07

0x61eb,	// (0x00093b6f) cell_vitu_function_pane_g1

0xa00e,	// (0x00097992) main_calc_pane_g1

0x0bd8,	// (0x0008e55c) aid_visual_content_pane

0xa004,	// (0x00097988) main_vradio_pane

0x61f4,	// (0x00093b78) main_vradio_pane_g1_ParamLimits

0x61f4,	// (0x00093b78) main_vradio_pane_g1

0xae1e,	// (0x000987a2) main_vradio_pane_g2_ParamLimits

0xae1e,	// (0x000987a2) main_vradio_pane_g2

0x0001,

0xf7fd,	// (0x0009d181) main_vradio_pane_g_ParamLimits

0xf7fd,	// (0x0009d181) main_vradio_pane_g

0x620a,	// (0x00093b8e) main_vradio_pane_t1_ParamLimits

0x620a,	// (0x00093b8e) main_vradio_pane_t1

0x621f,	// (0x00093ba3) main_vradio_pane_t2_ParamLimits

0x621f,	// (0x00093ba3) main_vradio_pane_t2

0xae2b,	// (0x000987af) main_vradio_pane_t3_ParamLimits

0xae2b,	// (0x000987af) main_vradio_pane_t3

0x0002,

0xf802,	// (0x0009d186) main_vradio_pane_t_ParamLimits

0xf802,	// (0x0009d186) main_vradio_pane_t

0x6234,	// (0x00093bb8) vradio_rocker_control_pane_ParamLimits

0x6234,	// (0x00093bb8) vradio_rocker_control_pane

0x6246,	// (0x00093bca) vradio_station_info_pane_ParamLimits

0x6246,	// (0x00093bca) vradio_station_info_pane

0xae3d,	// (0x000987c1) vradio_frequency_info_pane_ParamLimits

0xae3d,	// (0x000987c1) vradio_frequency_info_pane

0xa7b6,	// (0x0009813a) vradio_station_info_pane_g1

0xae4c,	// (0x000987d0) vradio_station_info_pane_t1_ParamLimits

0xae4c,	// (0x000987d0) vradio_station_info_pane_t1

0xae6e,	// (0x000987f2) vradio_station_info_pane_t2_ParamLimits

0xae6e,	// (0x000987f2) vradio_station_info_pane_t2

0x0001,

0xf809,	// (0x0009d18d) vradio_station_info_pane_t_ParamLimits

0xf809,	// (0x0009d18d) vradio_station_info_pane_t

0xae80,	// (0x00098804) vradio_tuning_pane

0xae88,	// (0x0009880c) vradio_rocker_control_pane_g1

0xae90,	// (0x00098814) vradio_rocker_control_pane_g2

0xae98,	// (0x0009881c) vradio_rocker_control_pane_g3

0xaea0,	// (0x00098824) vradio_rocker_control_pane_g4

0xaea8,	// (0x0009882c) vradio_rocker_control_pane_g5

0x0004,

0xf80e,	// (0x0009d192) vradio_rocker_control_pane_g

0x6256,	// (0x00093bda) vradio_frequency_info_pane_g1

0xaeb0,	// (0x00098834) vradio_frequency_info_pane_t1_ParamLimits

0xaeb0,	// (0x00098834) vradio_frequency_info_pane_t1

0x6260,	// (0x00093be4) vradio_tuning_pane_g1

0x6269,	// (0x00093bed) vradio_tuning_pane_t1

0x9fcd,	// (0x00097951) area_side_right_pane_ParamLimits

0x9fcd,	// (0x00097951) area_side_right_pane

0xa25d,	// (0x00097be1) status_small_pane_g1

0xa265,	// (0x00097be9) status_small_pane_g2

0xa26e,	// (0x00097bf2) status_small_pane_g3

0xa277,	// (0x00097bfb) status_small_pane_g4

0x0003,

0xf5ce,	// (0x0009cf52) status_small_pane_g

0xa280,	// (0x00097c04) status_small_pane_t1

0xa004,	// (0x00097988) main_video3_pane

0xaec4,	// (0x00098848) cams_zoom_vslider_pane

0xaecc,	// (0x00098850) image3_wide_pane_ParamLimits

0xaecc,	// (0x00098850) image3_wide_pane

0xaee6,	// (0x0009886a) image3_wide_small_pane

0xaef0,	// (0x00098874) main_video3_pane_g1_ParamLimits

0xaef0,	// (0x00098874) main_video3_pane_g1

0xaf0c,	// (0x00098890) main_video3_pane_g2_ParamLimits

0xaf0c,	// (0x00098890) main_video3_pane_g2

0x0001,

0xf819,	// (0x0009d19d) main_video3_pane_g_ParamLimits

0xf819,	// (0x0009d19d) main_video3_pane_g

0xaf28,	// (0x000988ac) main_video3_pane_t1_ParamLimits

0xaf28,	// (0x000988ac) main_video3_pane_t1

0xaf53,	// (0x000988d7) main_video3_pane_t2_ParamLimits

0xaf53,	// (0x000988d7) main_video3_pane_t2

0xaf7e,	// (0x00098902) main_video3_pane_t3_ParamLimits

0xaf7e,	// (0x00098902) main_video3_pane_t3

0x0002,

0xf81e,	// (0x0009d1a2) main_video3_pane_t_ParamLimits

0xf81e,	// (0x0009d1a2) main_video3_pane_t

0xafa9,	// (0x0009892d) cams_zoom_vslider_pane_g1

0xafb2,	// (0x00098936) cams_zoom_vslider_pane_g2

0x0001,

0xf825,	// (0x0009d1a9) cams_zoom_vslider_pane_g

0xafba,	// (0x0009893e) small_slider_vertical_pane

0xa7b6,	// (0x0009813a) small_slider_vertical_pane_g1

0xa7b6,	// (0x0009813a) small_slider_vertical_pane_g2

0xafc2,	// (0x00098946) small_slider_vertical_pane_g3

0x0002,

0xf82a,	// (0x0009d1ae) small_slider_vertical_pane_g

0xa004,	// (0x00097988) main_hwr_training_pane

0xafcb,	// (0x0009894f) hwr_training_instruct_pane_ParamLimits

0xafcb,	// (0x0009894f) hwr_training_instruct_pane

0x6278,	// (0x00093bfc) hwr_training_navi_pane_ParamLimits

0x6278,	// (0x00093bfc) hwr_training_navi_pane

0x628f,	// (0x00093c13) hwr_training_write_pane_ParamLimits

0x628f,	// (0x00093c13) hwr_training_write_pane

0x0baa,	// (0x0008e52e) bg_frame_shadow_pane

0xaffa,	// (0x0009897e) hwr_training_write_pane_g1

0xb002,	// (0x00098986) hwr_training_write_pane_g2

0xb00a,	// (0x0009898e) hwr_training_write_pane_g3

0xb012,	// (0x00098996) hwr_training_write_pane_g4

0xb01a,	// (0x0009899e) hwr_training_write_pane_g5

0xb022,	// (0x000989a6) hwr_training_write_pane_g6

0xb02a,	// (0x000989ae) hwr_training_write_pane_g7

0x0006,

0xf831,	// (0x0009d1b5) hwr_training_write_pane_g

0xb032,	// (0x000989b6) hwr_training_navi_pane_g1_ParamLimits

0xb032,	// (0x000989b6) hwr_training_navi_pane_g1

0xb044,	// (0x000989c8) hwr_training_navi_pane_g2_ParamLimits

0xb044,	// (0x000989c8) hwr_training_navi_pane_g2

0xb056,	// (0x000989da) hwr_training_navi_pane_g3_ParamLimits

0xb056,	// (0x000989da) hwr_training_navi_pane_g3

0xb066,	// (0x000989ea) hwr_training_navi_pane_g4_ParamLimits

0xb066,	// (0x000989ea) hwr_training_navi_pane_g4

0x0004,

0xf840,	// (0x0009d1c4) hwr_training_navi_pane_g_ParamLimits

0xf840,	// (0x0009d1c4) hwr_training_navi_pane_g

0xb073,	// (0x000989f7) hwr_training_navi_pane_t1

0x62cf,	// (0x00093c53) list_single_hwr_training_instruct_pane_ParamLimits

0x62cf,	// (0x00093c53) list_single_hwr_training_instruct_pane

0xb081,	// (0x00098a05) list_single_hwr_training_instruct_pane_t1

0xa6f6,	// (0x0009807a) bg_frame_shadow_pane_g1

0xb090,	// (0x00098a14) bg_frame_shadow_pane_g2

0xb098,	// (0x00098a1c) bg_frame_shadow_pane_g3

0xb0a0,	// (0x00098a24) bg_frame_shadow_pane_g4

0xb0a8,	// (0x00098a2c) bg_frame_shadow_pane_g5

0xb0b0,	// (0x00098a34) bg_frame_shadow_pane_g6

0xb0b8,	// (0x00098a3c) bg_frame_shadow_pane_g7

0xdd79,	// (0x0009b6fd) bg_frame_shadow_pane_g8

0x0007,

0xf84b,	// (0x0009d1cf) bg_frame_shadow_pane_g

0xa004,	// (0x00097988) main_video_tele_dialer_pane

0x62e7,	// (0x00093c6b) aid_size_cell_video_keypad_ParamLimits

0x62e7,	// (0x00093c6b) aid_size_cell_video_keypad

0x6301,	// (0x00093c85) grid_video_dialer_keypad_pane_ParamLimits

0x6301,	// (0x00093c85) grid_video_dialer_keypad_pane

0x6343,	// (0x00093cc7) video_down_pane_cp_ParamLimits

0x6343,	// (0x00093cc7) video_down_pane_cp

0x6373,	// (0x00093cf7) cell_video_dialer_keypad_pane_ParamLimits

0x6373,	// (0x00093cf7) cell_video_dialer_keypad_pane

0xb0c0,	// (0x00098a44) bg_button_pane_cp08_ParamLimits

0xb0c0,	// (0x00098a44) bg_button_pane_cp08

0x6395,	// (0x00093d19) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6395,	// (0x00093d19) cell_video_dialer_keypad_pane_g1

0x5ab7,	// (0x0009343b) mup3_rocker2_pane_ParamLimits

0x5ab7,	// (0x0009343b) mup3_rocker2_pane

0xa7b6,	// (0x0009813a) mup3_rocker2_pane_g1

0x47b0,	// (0x00092134) main_dialer2_pane

0xa004,	// (0x00097988) main_mp4_pane

0xb0dc,	// (0x00098a60) main_mp4_pane_g1_ParamLimits

0xb0dc,	// (0x00098a60) main_mp4_pane_g1

0xb0dc,	// (0x00098a60) main_mp4_pane_g2_ParamLimits

0xb0dc,	// (0x00098a60) main_mp4_pane_g2

0x63d0,	// (0x00093d54) main_mp4_pane_g3_ParamLimits

0x63d0,	// (0x00093d54) main_mp4_pane_g3

0xb0ea,	// (0x00098a6e) main_mp4_pane_g4_ParamLimits

0xb0ea,	// (0x00098a6e) main_mp4_pane_g4

0xb118,	// (0x00098a9c) main_mp4_pane_g5_ParamLimits

0xb118,	// (0x00098a9c) main_mp4_pane_g5

0x0007,

0xf86b,	// (0x0009d1ef) main_mp4_pane_g_ParamLimits

0xf86b,	// (0x0009d1ef) main_mp4_pane_g

0xb18c,	// (0x00098b10) main_mp4_pane_t1_ParamLimits

0xb18c,	// (0x00098b10) main_mp4_pane_t1

0xb1e4,	// (0x00098b68) main_mp4_pane_t2_ParamLimits

0xb1e4,	// (0x00098b68) main_mp4_pane_t2

0xb236,	// (0x00098bba) main_mp4_pane_t3_ParamLimits

0xb236,	// (0x00098bba) main_mp4_pane_t3

0xb25c,	// (0x00098be0) main_mp4_pane_t4_ParamLimits

0xb25c,	// (0x00098be0) main_mp4_pane_t4

0x0003,

0xf87c,	// (0x0009d200) main_mp4_pane_t_ParamLimits

0xf87c,	// (0x0009d200) main_mp4_pane_t

0xb29c,	// (0x00098c20) mp4_progress_pane_ParamLimits

0xb29c,	// (0x00098c20) mp4_progress_pane

0xb2e0,	// (0x00098c64) mp4_rocker_pane_ParamLimits

0xb2e0,	// (0x00098c64) mp4_rocker_pane

0xb306,	// (0x00098c8a) mp4_progress_pane_t1

0xb31d,	// (0x00098ca1) mp4_progress_pane_t2

0x0001,

0xf885,	// (0x0009d209) mp4_progress_pane_t

0xb334,	// (0x00098cb8) mup_progress_pane_cp04

0xb340,	// (0x00098cc4) mp4_rocker_pane_g1

0x6400,	// (0x00093d84) aid_cell_size_keypad2_ParamLimits

0x6400,	// (0x00093d84) aid_cell_size_keypad2

0x641a,	// (0x00093d9e) dialer2_ne_pane_ParamLimits

0x641a,	// (0x00093d9e) dialer2_ne_pane

0x642f,	// (0x00093db3) grid_dialer2_keypad_pane_ParamLimits

0x642f,	// (0x00093db3) grid_dialer2_keypad_pane

0xa5a3,	// (0x00097f27) bg_popup_call_pane_cp07_ParamLimits

0xa5a3,	// (0x00097f27) bg_popup_call_pane_cp07

0x6445,	// (0x00093dc9) dialer2_ne_pane_t1_ParamLimits

0x6445,	// (0x00093dc9) dialer2_ne_pane_t1

0x6482,	// (0x00093e06) cell_dialer2_keypad_pane_ParamLimits

0x6482,	// (0x00093e06) cell_dialer2_keypad_pane

0xb35c,	// (0x00098ce0) bg_button_pane_pane_cp04_ParamLimits

0xb35c,	// (0x00098ce0) bg_button_pane_pane_cp04

0x64a4,	// (0x00093e28) cell_dialer2_keypad_pane_g1_ParamLimits

0x64a4,	// (0x00093e28) cell_dialer2_keypad_pane_g1

0x1c73,	// (0x0008f5f7) aid_placing_vt_set_content_ParamLimits

0x1c73,	// (0x0008f5f7) aid_placing_vt_set_content

0x1c95,	// (0x0008f619) aid_placing_vt_set_title_ParamLimits

0x1c95,	// (0x0008f619) aid_placing_vt_set_title

0xa004,	// (0x00097988) main_image3_pane

0x6533,	// (0x00093eb7) area_side_right_pane_cp01_ParamLimits

0x6533,	// (0x00093eb7) area_side_right_pane_cp01

0xb0dc,	// (0x00098a60) main_image3_pane_g1_ParamLimits

0xb0dc,	// (0x00098a60) main_image3_pane_g1

0x654a,	// (0x00093ece) main_image3_pane_g2_ParamLimits

0x654a,	// (0x00093ece) main_image3_pane_g2

0x6570,	// (0x00093ef4) main_image3_pane_g3_ParamLimits

0x6570,	// (0x00093ef4) main_image3_pane_g3

0x6596,	// (0x00093f1a) main_image3_pane_g4_ParamLimits

0x6596,	// (0x00093f1a) main_image3_pane_g4

0x0003,

0xf894,	// (0x0009d218) main_image3_pane_g_ParamLimits

0xf894,	// (0x0009d218) main_image3_pane_g

0x65bc,	// (0x00093f40) main_image3_pane_t1_ParamLimits

0x65bc,	// (0x00093f40) main_image3_pane_t1

0x6614,	// (0x00093f98) main_image3_pane_t2_ParamLimits

0x6614,	// (0x00093f98) main_image3_pane_t2

0x6666,	// (0x00093fea) main_image3_pane_t3_ParamLimits

0x6666,	// (0x00093fea) main_image3_pane_t3

0x0003,

0xf89d,	// (0x0009d221) main_image3_pane_t_ParamLimits

0xf89d,	// (0x0009d221) main_image3_pane_t

0x47a2,	// (0x00092126) grid_sctrl_middle_pane_cp01_ParamLimits

0x47a2,	// (0x00092126) grid_sctrl_middle_pane_cp01

0x66e6,	// (0x0009406a) cell_sctrl_middle_pane_cp01_ParamLimits

0x66e6,	// (0x0009406a) cell_sctrl_middle_pane_cp01

0x6703,	// (0x00094087) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6703,	// (0x00094087) cell_sctrl_middle_pane_cp01_g1

0xa004,	// (0x00097988) main_call4_pane

0x6719,	// (0x0009409d) aid_size_button_call4_ParamLimits

0x6719,	// (0x0009409d) aid_size_button_call4

0x6746,	// (0x000940ca) call4_windows_pane_ParamLimits

0x6746,	// (0x000940ca) call4_windows_pane

0x675c,	// (0x000940e0) grid_call4_button_pane_ParamLimits

0x675c,	// (0x000940e0) grid_call4_button_pane

0xb3b2,	// (0x00098d36) call4_windows_conf_pane

0x6783,	// (0x00094107) popup_call4_audio_first_window_ParamLimits

0x6783,	// (0x00094107) popup_call4_audio_first_window

0x67a3,	// (0x00094127) popup_call4_audio_second_window_ParamLimits

0x67a3,	// (0x00094127) popup_call4_audio_second_window

0xb3e5,	// (0x00098d69) popup_call4_audio_wait_window_ParamLimits

0xb3e5,	// (0x00098d69) popup_call4_audio_wait_window

0x67b5,	// (0x00094139) cell_call4_button_pane_ParamLimits

0x67b5,	// (0x00094139) cell_call4_button_pane

0x67da,	// (0x0009415e) bg_button_pane_cp09_ParamLimits

0x67da,	// (0x0009415e) bg_button_pane_cp09

0x67e6,	// (0x0009416a) cell_call4_button_pane_g1_ParamLimits

0x67e6,	// (0x0009416a) cell_call4_button_pane_g1

0x680c,	// (0x00094190) cell_call4_button_pane_t1_ParamLimits

0x680c,	// (0x00094190) cell_call4_button_pane_t1

0xb42b,	// (0x00098daf) popup_call4_audio_conf_window_ParamLimits

0xb42b,	// (0x00098daf) popup_call4_audio_conf_window

0x5b11,	// (0x00093495) mup3_progress_pane_t1_ParamLimits

0x5b2f,	// (0x000934b3) mup3_progress_pane_t2_ParamLimits

0xaad4,	// (0x00098458) mup3_progress_pane_t3_ParamLimits

0xf772,	// (0x0009d0f6) mup3_progress_pane_t_ParamLimits

0xaaf1,	// (0x00098475) mup_progress_pane_cp03_ParamLimits

0x60d9,	// (0x00093a5d) mup3_control_keys_pane_g4_copy1

0xb2ca,	// (0x00098c4e) mp4_rocker2_pane_ParamLimits

0xb2ca,	// (0x00098c4e) mp4_rocker2_pane

0xb43f,	// (0x00098dc3) mp4_rocker2_pane_g1

0xb447,	// (0x00098dcb) mp4_rocker2_pane_g2

0xb44f,	// (0x00098dd3) mp4_rocker2_pane_g3

0xb457,	// (0x00098ddb) mp4_rocker2_pane_g4

0xb45f,	// (0x00098de3) mp4_rocker2_pane_g5

0x0004,

0xf8a6,	// (0x0009d22a) mp4_rocker2_pane_g

0xa004,	// (0x00097988) main_camera4_pane

0xa004,	// (0x00097988) main_video4_pane

0x6315,	// (0x00093c99) main_video_tele_dialer_pane_t1_ParamLimits

0x6315,	// (0x00093c99) main_video_tele_dialer_pane_t1

0x632c,	// (0x00093cb0) main_video_tele_dialer_pane_t2_ParamLimits

0x632c,	// (0x00093cb0) main_video_tele_dialer_pane_t2

0x0001,

0xf85c,	// (0x0009d1e0) main_video_tele_dialer_pane_t_ParamLimits

0xf85c,	// (0x0009d1e0) main_video_tele_dialer_pane_t

0x684a,	// (0x000941ce) cam4_autofocus_pane_ParamLimits

0x684a,	// (0x000941ce) cam4_autofocus_pane

0x685e,	// (0x000941e2) cam4_image_uncrop_pane_ParamLimits

0x685e,	// (0x000941e2) cam4_image_uncrop_pane

0x6875,	// (0x000941f9) cam4_indicators_pane_ParamLimits

0x6875,	// (0x000941f9) cam4_indicators_pane

0x6899,	// (0x0009421d) main_camera4_pane_g1_ParamLimits

0x6899,	// (0x0009421d) main_camera4_pane_g1

0x68a5,	// (0x00094229) main_camera4_pane_g2_ParamLimits

0x68a5,	// (0x00094229) main_camera4_pane_g2

0x68a5,	// (0x00094229) main_camera4_pane_g3_ParamLimits

0x68a5,	// (0x00094229) main_camera4_pane_g3

0x68b1,	// (0x00094235) main_camera4_pane_g4_ParamLimits

0x68b1,	// (0x00094235) main_camera4_pane_g4

0x68bd,	// (0x00094241) main_camera4_pane_g5_ParamLimits

0x68bd,	// (0x00094241) main_camera4_pane_g5

0x0005,

0xf8b1,	// (0x0009d235) main_camera4_pane_g_ParamLimits

0xf8b1,	// (0x0009d235) main_camera4_pane_g

0x68da,	// (0x0009425e) main_camera4_pane_t1_ParamLimits

0x68da,	// (0x0009425e) main_camera4_pane_t1

0xb493,	// (0x00098e17) bg_tb_trans_pane_cp06

0xb4a9,	// (0x00098e2d) cam4_indicators_pane_g1

0xb4b9,	// (0x00098e3d) cam4_indicators_pane_g2

0x0002,

0xf8cc,	// (0x0009d250) cam4_indicators_pane_g

0xb4d9,	// (0x00098e5d) cam4_indicators_pane_t1

0x692f,	// (0x000942b3) main_video4_pane_g1_ParamLimits

0x692f,	// (0x000942b3) main_video4_pane_g1

0x6941,	// (0x000942c5) main_video4_pane_g2_ParamLimits

0x6941,	// (0x000942c5) main_video4_pane_g2

0x6941,	// (0x000942c5) main_video4_pane_g3_ParamLimits

0x6941,	// (0x000942c5) main_video4_pane_g3

0x6950,	// (0x000942d4) main_video4_pane_g4_ParamLimits

0x6950,	// (0x000942d4) main_video4_pane_g4

0x0004,

0xf8d3,	// (0x0009d257) main_video4_pane_g_ParamLimits

0xf8d3,	// (0x0009d257) main_video4_pane_g

0x696e,	// (0x000942f2) vid4_indicators_pane_ParamLimits

0x696e,	// (0x000942f2) vid4_indicators_pane

0x6996,	// (0x0009431a) video4_image_uncrop_cif_pane_ParamLimits

0x6996,	// (0x0009431a) video4_image_uncrop_cif_pane

0x69ae,	// (0x00094332) video4_image_uncrop_nhd_pane_ParamLimits

0x69ae,	// (0x00094332) video4_image_uncrop_nhd_pane

0x69c2,	// (0x00094346) video4_image_uncrop_vga_pane_ParamLimits

0x69c2,	// (0x00094346) video4_image_uncrop_vga_pane

0x9ff6,	// (0x0009797a) bg_tb_trans_pane_cp07

0xb4a9,	// (0x00098e2d) vid4_indicators_pane_g1

0xb4fb,	// (0x00098e7f) vid4_indicators_pane_g2

0xb50b,	// (0x00098e8f) vid4_indicators_pane_g3

0x0004,

0xf8de,	// (0x0009d262) vid4_indicators_pane_g

0xb538,	// (0x00098ebc) vid4_indicators_pane_t1

0x69da,	// (0x0009435e) cam4_autofocus_pane_g1

0x69e2,	// (0x00094366) cam4_autofocus_pane_g2

0x69ea,	// (0x0009436e) cam4_autofocus_pane_g3

0x0002,

0xf8e9,	// (0x0009d26d) cam4_autofocus_pane_g

0x69f2,	// (0x00094376) cam4_autofocus_pane_g3_copy1

0x6357,	// (0x00093cdb) video_down_pane_cp_t1

0x6365,	// (0x00093ce9) video_down_pane_cp_t2

0x0001,

0xf861,	// (0x0009d1e5) video_down_pane_cp_t

0x9ff6,	// (0x0009797a) popup_vitu2_window_ParamLimits

0x9ff6,	// (0x0009797a) popup_vitu2_window

0x69fa,	// (0x0009437e) aid_size_cell2_itu2_ParamLimits

0x69fa,	// (0x0009437e) aid_size_cell2_itu2

0x6a20,	// (0x000943a4) aid_size_cell_itu2_ParamLimits

0x6a20,	// (0x000943a4) aid_size_cell_itu2

0x6a71,	// (0x000943f5) bg_popup_window_pane_cp09_ParamLimits

0x6a71,	// (0x000943f5) bg_popup_window_pane_cp09

0x6a7f,	// (0x00094403) field_vitu2_entry_pane_ParamLimits

0x6a7f,	// (0x00094403) field_vitu2_entry_pane

0x6a96,	// (0x0009441a) grid_vitu2_function_pane_ParamLimits

0x6a96,	// (0x0009441a) grid_vitu2_function_pane

0x6acb,	// (0x0009444f) grid_vitu2_itu_pane_ParamLimits

0x6acb,	// (0x0009444f) grid_vitu2_itu_pane

0x6b32,	// (0x000944b6) cell_vitu2_itu_pane_ParamLimits

0x6b32,	// (0x000944b6) cell_vitu2_itu_pane

0x6b5a,	// (0x000944de) cell_vitu2_function_pane_ParamLimits

0x6b5a,	// (0x000944de) cell_vitu2_function_pane

0xb552,	// (0x00098ed6) bg_popup_call_pane_cp08_ParamLimits

0xb552,	// (0x00098ed6) bg_popup_call_pane_cp08

0xb569,	// (0x00098eed) field_vitu2_entry_pane_g1

0xb575,	// (0x00098ef9) field_vitu2_entry_pane_g2

0x0002,

0xf8f0,	// (0x0009d274) field_vitu2_entry_pane_g

0x6b99,	// (0x0009451d) field_vitu2_entry_pane_t1_ParamLimits

0x6b99,	// (0x0009451d) field_vitu2_entry_pane_t1

0xb58f,	// (0x00098f13) field_vitu2_entry_pane_t2_ParamLimits

0xb58f,	// (0x00098f13) field_vitu2_entry_pane_t2

0x0001,

0xf8f7,	// (0x0009d27b) field_vitu2_entry_pane_t_ParamLimits

0xf8f7,	// (0x0009d27b) field_vitu2_entry_pane_t

0x6bc6,	// (0x0009454a) bg_button_pane_cp010_ParamLimits

0x6bc6,	// (0x0009454a) bg_button_pane_cp010

0xd785,	// (0x0009b109) cell_vitu2_itu_pane_g1

0x6be2,	// (0x00094566) cell_vitu2_itu_pane_t1_ParamLimits

0x6be2,	// (0x00094566) cell_vitu2_itu_pane_t1

0x0aaa,	// (0x0008e42e) cell_vitu2_itu_pane_t2_ParamLimits

0x0aaa,	// (0x0008e42e) cell_vitu2_itu_pane_t2

0x0002,

0xf901,	// (0x0009d285) cell_vitu2_itu_pane_t_ParamLimits

0xf901,	// (0x0009d285) cell_vitu2_itu_pane_t

0x9ff6,	// (0x0009797a) bg_button_pane_cp011

0x6c40,	// (0x000945c4) cell_vitu2_function_pane_g1

0xa004,	// (0x00097988) main_myfav_hc_pane

0x66b2,	// (0x00094036) popup_image3_note_pane_ParamLimits

0x66b2,	// (0x00094036) popup_image3_note_pane

0x66cc,	// (0x00094050) popup_image3_tool_bar_pane_ParamLimits

0x66cc,	// (0x00094050) popup_image3_tool_bar_pane

0x0b38,	// (0x0008e4bc) cell_vitu2_itu_pane_t3_ParamLimits

0x0b38,	// (0x0008e4bc) cell_vitu2_itu_pane_t3

0x0baa,	// (0x0008e52e) bg_popup_trans_pane

0xb5b4,	// (0x00098f38) grid_image3_tool_bar_pane

0xb5be,	// (0x00098f42) bg_popup_trans_pane_g1

0xe136,	// (0x0009baba) bg_popup_trans_pane_g2

0xb5c6,	// (0x00098f4a) bg_popup_trans_pane_g3

0xb5ce,	// (0x00098f52) bg_popup_trans_pane_g4

0xb5d6,	// (0x00098f5a) bg_popup_trans_pane_g5

0xb5de,	// (0x00098f62) bg_popup_trans_pane_g6

0xb5e6,	// (0x00098f6a) bg_popup_trans_pane_g7

0xb5ee,	// (0x00098f72) bg_popup_trans_pane_g8

0xe0fb,	// (0x0009ba7f) bg_popup_trans_pane_g9

0x0008,

0xf908,	// (0x0009d28c) bg_popup_trans_pane_g

0xb5f6,	// (0x00098f7a) cell_image3_tool_bar_pane_ParamLimits

0xb5f6,	// (0x00098f7a) cell_image3_tool_bar_pane

0xa7b6,	// (0x0009813a) cell_image3_tool_bar_pane_g1

0x0baa,	// (0x0008e52e) bg_popup_trans_pane_cp1

0xb60a,	// (0x00098f8e) popup_image3_note_pane_t1

0xb618,	// (0x00098f9c) popup_image3_note_pane_t2

0xb626,	// (0x00098faa) popup_image3_note_pane_t3

0x0002,

0xf91b,	// (0x0009d29f) popup_image3_note_pane_t

0xb634,	// (0x00098fb8) popup_image3_note_pane_t3_copy1

0x6c53,	// (0x000945d7) bg_myfav_hc_instruction_pane_ParamLimits

0x6c53,	// (0x000945d7) bg_myfav_hc_instruction_pane

0x6c65,	// (0x000945e9) cell_myfav_contact_pane_ParamLimits

0x6c65,	// (0x000945e9) cell_myfav_contact_pane

0x6c7f,	// (0x00094603) cell_myfav_contact_pane_cp1_ParamLimits

0x6c7f,	// (0x00094603) cell_myfav_contact_pane_cp1

0x6c95,	// (0x00094619) cell_myfav_contact_pane_cp2_ParamLimits

0x6c95,	// (0x00094619) cell_myfav_contact_pane_cp2

0x6cab,	// (0x0009462f) cell_myfav_contact_pane_cp3_ParamLimits

0x6cab,	// (0x0009462f) cell_myfav_contact_pane_cp3

0x6cc0,	// (0x00094644) cell_myfav_contact_pane_cp4_ParamLimits

0x6cc0,	// (0x00094644) cell_myfav_contact_pane_cp4

0x6cd4,	// (0x00094658) cell_myfav_contact_pane_cp5_ParamLimits

0x6cd4,	// (0x00094658) cell_myfav_contact_pane_cp5

0x6ce8,	// (0x0009466c) cell_myfav_contact_pane_cp6_ParamLimits

0x6ce8,	// (0x0009466c) cell_myfav_contact_pane_cp6

0x6cfc,	// (0x00094680) cell_myfav_contact_pane_cp7_ParamLimits

0x6cfc,	// (0x00094680) cell_myfav_contact_pane_cp7

0xb642,	// (0x00098fc6) listscroll_gen_pane_cp05

0x6d14,	// (0x00094698) main_myfav_hc_pane_g1_ParamLimits

0x6d14,	// (0x00094698) main_myfav_hc_pane_g1

0x6d2a,	// (0x000946ae) main_myfav_hc_pane_g2_ParamLimits

0x6d2a,	// (0x000946ae) main_myfav_hc_pane_g2

0x0002,

0xf922,	// (0x0009d2a6) main_myfav_hc_pane_g_ParamLimits

0xf922,	// (0x0009d2a6) main_myfav_hc_pane_g

0x6d54,	// (0x000946d8) main_myfav_hc_pane_t1_ParamLimits

0x6d54,	// (0x000946d8) main_myfav_hc_pane_t1

0xb64b,	// (0x00098fcf) main_myfav_hc_pane_t2_ParamLimits

0xb64b,	// (0x00098fcf) main_myfav_hc_pane_t2

0xb65d,	// (0x00098fe1) main_myfav_hc_pane_t3_ParamLimits

0xb65d,	// (0x00098fe1) main_myfav_hc_pane_t3

0x6d69,	// (0x000946ed) main_myfav_hc_pane_t4_ParamLimits

0x6d69,	// (0x000946ed) main_myfav_hc_pane_t4

0x0004,

0xf929,	// (0x0009d2ad) main_myfav_hc_pane_t_ParamLimits

0xf929,	// (0x0009d2ad) main_myfav_hc_pane_t

0xa7b6,	// (0x0009813a) bg_myfav_hc_instruction_pane_g1

0xb66f,	// (0x00098ff3) cell_myfav_contact_pane_g1_ParamLimits

0xb66f,	// (0x00098ff3) cell_myfav_contact_pane_g1

0xb66f,	// (0x00098ff3) cell_myfav_contact_pane_g2_ParamLimits

0xb66f,	// (0x00098ff3) cell_myfav_contact_pane_g2

0xb67b,	// (0x00098fff) cell_myfav_contact_pane_g3_ParamLimits

0xb67b,	// (0x00098fff) cell_myfav_contact_pane_g3

0xaabe,	// (0x00098442) cell_myfav_contact_pane_g4_ParamLimits

0xaabe,	// (0x00098442) cell_myfav_contact_pane_g4

0xb688,	// (0x0009900c) cell_myfav_contact_pane_g5_ParamLimits

0xb688,	// (0x0009900c) cell_myfav_contact_pane_g5

0x0004,

0xf934,	// (0x0009d2b8) cell_myfav_contact_pane_g_ParamLimits

0xf934,	// (0x0009d2b8) cell_myfav_contact_pane_g

0x6d40,	// (0x000946c4) main_myfav_hc_pane_g3_ParamLimits

0x6d40,	// (0x000946c4) main_myfav_hc_pane_g3

0x0cfa,	// (0x0008e67e) popup_adpt_find_window

0x6d8d,	// (0x00094711) afind_page_pane_ParamLimits

0x6d8d,	// (0x00094711) afind_page_pane

0x6da2,	// (0x00094726) aid_size_cell_afind_ParamLimits

0x6da2,	// (0x00094726) aid_size_cell_afind

0x6dc0,	// (0x00094744) bg_popup_sub_pane_cp09_ParamLimits

0x6dc0,	// (0x00094744) bg_popup_sub_pane_cp09

0x6dcd,	// (0x00094751) find_pane_cp01_ParamLimits

0x6dcd,	// (0x00094751) find_pane_cp01

0xb694,	// (0x00099018) grid_afind_control_pane_ParamLimits

0xb694,	// (0x00099018) grid_afind_control_pane

0x6dda,	// (0x0009475e) grid_afind_pane_ParamLimits

0x6dda,	// (0x0009475e) grid_afind_pane

0x6df8,	// (0x0009477c) cell_afind_pane_ParamLimits

0x6df8,	// (0x0009477c) cell_afind_pane

0xa7b6,	// (0x0009813a) afind_page_pane_g1

0x6e47,	// (0x000947cb) afind_page_pane_g2

0x6e50,	// (0x000947d4) afind_page_pane_g3

0x0002,

0xf93f,	// (0x0009d2c3) afind_page_pane_g

0x6e59,	// (0x000947dd) afind_page_pane_t1

0xb6a8,	// (0x0009902c) cell_afind_grid_control_pane_ParamLimits

0xb6a8,	// (0x0009902c) cell_afind_grid_control_pane

0xb35c,	// (0x00098ce0) bg_button_pane_cp69_ParamLimits

0xb35c,	// (0x00098ce0) bg_button_pane_cp69

0x6e79,	// (0x000947fd) cell_afind_pane_g1_ParamLimits

0x6e79,	// (0x000947fd) cell_afind_pane_g1

0x6e86,	// (0x0009480a) cell_afind_pane_t1_ParamLimits

0x6e86,	// (0x0009480a) cell_afind_pane_t1

0xdf07,	// (0x0009b88b) bg_button_pane_cp72

0xb6b7,	// (0x0009903b) cell_afind_grid_control_pane_g1

0x37df,	// (0x00091163) aid_image_placing_area_ParamLimits

0x37df,	// (0x00091163) aid_image_placing_area

0xadd1,	// (0x00098755) field_vitu_entry_pane_g1_ParamLimits

0xadd1,	// (0x00098755) field_vitu_entry_pane_g1

0xaddd,	// (0x00098761) field_vitu_entry_pane_g2_ParamLimits

0xaddd,	// (0x00098761) field_vitu_entry_pane_g2

0x0001,

0xf7ec,	// (0x0009d170) field_vitu_entry_pane_g_ParamLimits

0xf7ec,	// (0x0009d170) field_vitu_entry_pane_g

0x618c,	// (0x00093b10) cell_vitu_itu_pane_g1_ParamLimits

0x61ce,	// (0x00093b52) cell_vitu_itu_pane_t3_ParamLimits

0x61ce,	// (0x00093b52) cell_vitu_itu_pane_t3

0xb306,	// (0x00098c8a) mp4_progress_pane_t1_ParamLimits

0xb31d,	// (0x00098ca1) mp4_progress_pane_t2_ParamLimits

0xf885,	// (0x0009d209) mp4_progress_pane_t_ParamLimits

0xb334,	// (0x00098cb8) mup_progress_pane_cp04_ParamLimits

0x6d7b,	// (0x000946ff) main_myfav_hc_pane_t5_ParamLimits

0x6d7b,	// (0x000946ff) main_myfav_hc_pane_t5

0x9fbd,	// (0x00097941) aid_zoom_text_primary

0x0cfa,	// (0x0008e67e) popup_adpt_find_window_ParamLimits

0x9ff6,	// (0x0009797a) main_cam_set_pane

0x6887,	// (0x0009420b) cam4_zoom_pane_ParamLimits

0x6887,	// (0x0009420b) cam4_zoom_pane

0x6e98,	// (0x0009481c) main_cam_set_pane_g1_ParamLimits

0x6e98,	// (0x0009481c) main_cam_set_pane_g1

0x6ea6,	// (0x0009482a) main_cam_set_pane_g2_ParamLimits

0x6ea6,	// (0x0009482a) main_cam_set_pane_g2

0x0001,

0xf946,	// (0x0009d2ca) main_cam_set_pane_g_ParamLimits

0xf946,	// (0x0009d2ca) main_cam_set_pane_g

0x6ec5,	// (0x00094849) main_cam_set_pane_t1_ParamLimits

0x6ec5,	// (0x00094849) main_cam_set_pane_t1

0x6ed7,	// (0x0009485b) main_cset_listscroll_pane_ParamLimits

0x6ed7,	// (0x0009485b) main_cset_listscroll_pane

0x6ef5,	// (0x00094879) main_cset_slider_pane_ParamLimits

0x6ef5,	// (0x00094879) main_cset_slider_pane

0xb6c8,	// (0x0009904c) main_cset_list_pane_ParamLimits

0xb6c8,	// (0x0009904c) main_cset_list_pane

0xb6d8,	// (0x0009905c) scroll_pane_cp028

0x6f19,	// (0x0009489d) aid_area_touch_slider

0x6f35,	// (0x000948b9) cset_slider_pane

0x6f5f,	// (0x000948e3) main_cset_slider_pane_g1

0x6f74,	// (0x000948f8) main_cset_slider_pane_g2

0x0011,

0xf94b,	// (0x0009d2cf) main_cset_slider_pane_g

0xb711,	// (0x00099095) main_cset_slider_pane_t1

0x7030,	// (0x000949b4) main_cset_slider_pane_t2

0x704a,	// (0x000949ce) main_cset_slider_pane_t3

0x7064,	// (0x000949e8) main_cset_slider_pane_t4

0x707e,	// (0x00094a02) main_cset_slider_pane_t5

0x7098,	// (0x00094a1c) main_cset_slider_pane_t6

0x70ad,	// (0x00094a31) main_cset_slider_pane_t7

0x000e,

0xf970,	// (0x0009d2f4) main_cset_slider_pane_t

0x71b1,	// (0x00094b35) cset_list_set_pane_ParamLimits

0x71b1,	// (0x00094b35) cset_list_set_pane

0x71c2,	// (0x00094b46) aid_position_infowindow_above

0x71ca,	// (0x00094b4e) aid_position_infowindow_below

0x71d2,	// (0x00094b56) cset_list_set_pane_g1_ParamLimits

0x71d2,	// (0x00094b56) cset_list_set_pane_g1

0x71de,	// (0x00094b62) cset_list_set_pane_g3_ParamLimits

0x71de,	// (0x00094b62) cset_list_set_pane_g3

0x0001,

0xf98f,	// (0x0009d313) cset_list_set_pane_g_ParamLimits

0xf98f,	// (0x0009d313) cset_list_set_pane_g

0x71ed,	// (0x00094b71) cset_list_set_pane_t1_ParamLimits

0x71ed,	// (0x00094b71) cset_list_set_pane_t1

0x47a2,	// (0x00092126) list_highlight_pane_cp021_ParamLimits

0x47a2,	// (0x00092126) list_highlight_pane_cp021

0xe9e1,	// (0x0009c365) cset_slider_pane_g1

0xe9f3,	// (0x0009c377) cset_slider_pane_g2

0xe9ea,	// (0x0009c36e) cset_slider_pane_g3

0x0002,

0x04eb,	// (0x0008de6f) cset_slider_pane_g

0xd797,	// (0x0009b11b) aid_area_touch_cam4_zoom

0xd79f,	// (0x0009b123) cam4_zoom_cont_pane

0xd7a7,	// (0x0009b12b) cam4_zoom_pane_g1

0xd7af,	// (0x0009b133) cam4_zoom_pane_g2

0x7202,	// (0x00094b86) cam4_zoom_pane_g3

0x0002,

0xf994,	// (0x0009d318) cam4_zoom_pane_g

0xd7b7,	// (0x0009b13b) cam4_zoom_cont_pane_g1

0xd7c0,	// (0x0009b144) cam4_zoom_cont_pane_g2

0xd7c9,	// (0x0009b14d) cam4_zoom_cont_pane_g3

0x0002,

0xf99b,	// (0x0009d31f) cam4_zoom_cont_pane_g

0x6737,	// (0x000940bb) call4_image_pane_ParamLimits

0x6737,	// (0x000940bb) call4_image_pane

0xb3b2,	// (0x00098d36) call4_windows_conf_pane_ParamLimits

0xb3c5,	// (0x00098d49) popup_call4_audio_in_window_ParamLimits

0xb3c5,	// (0x00098d49) popup_call4_audio_in_window

0x0baa,	// (0x0008e52e) bg_popup_call2_act_pane_cp02

0xb423,	// (0x00098da7) call4_list_conf_pane

0xa7b6,	// (0x0009813a) call4_image_pane_g1

0xa7b6,	// (0x0009813a) call4_image_pane_g2

0x0001,

0xf6b2,	// (0x0009d036) call4_image_pane_g

0xb7b1,	// (0x00099135) list_single_graphic_popup_conf4_pane_ParamLimits

0xb7b1,	// (0x00099135) list_single_graphic_popup_conf4_pane

0x0baa,	// (0x0008e52e) list_highlight_pane_cp022

0xb7c4,	// (0x00099148) list_single_graphic_popup_conf4_pane_g1

0xe616,	// (0x0009bf9a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9a2,	// (0x0009d326) list_single_graphic_popup_conf4_pane_g

0xb7cc,	// (0x00099150) list_single_graphic_popup_conf4_pane_t1

0x1d9f,	// (0x0008f723) popup_vtel_slider_window_ParamLimits

0x1d9f,	// (0x0008f723) popup_vtel_slider_window

0xb34a,	// (0x00098cce) dialer2_ne_pane_t2_ParamLimits

0xb34a,	// (0x00098cce) dialer2_ne_pane_t2

0x0001,

0xf88a,	// (0x0009d20e) dialer2_ne_pane_t_ParamLimits

0xf88a,	// (0x0009d20e) dialer2_ne_pane_t

0xa5a3,	// (0x00097f27) bg_popup_sub_pane_cp010_ParamLimits

0xa5a3,	// (0x00097f27) bg_popup_sub_pane_cp010

0x720a,	// (0x00094b8e) popup_vtel_slider_window_g1_ParamLimits

0x720a,	// (0x00094b8e) popup_vtel_slider_window_g1

0x721d,	// (0x00094ba1) popup_vtel_slider_window_g2_ParamLimits

0x721d,	// (0x00094ba1) popup_vtel_slider_window_g2

0x0003,

0xf9a7,	// (0x0009d32b) popup_vtel_slider_window_g_ParamLimits

0xf9a7,	// (0x0009d32b) popup_vtel_slider_window_g

0x7271,	// (0x00094bf5) vtel_slider_pane_ParamLimits

0x7271,	// (0x00094bf5) vtel_slider_pane

0x7293,	// (0x00094c17) vtel_slider_pane_g1_ParamLimits

0x7293,	// (0x00094c17) vtel_slider_pane_g1

0x72a7,	// (0x00094c2b) vtel_slider_pane_g2_ParamLimits

0x72a7,	// (0x00094c2b) vtel_slider_pane_g2

0x72bf,	// (0x00094c43) vtel_slider_pane_g3_ParamLimits

0x72bf,	// (0x00094c43) vtel_slider_pane_g3

0x7293,	// (0x00094c17) vtel_slider_pane_g4_ParamLimits

0x7293,	// (0x00094c17) vtel_slider_pane_g4

0x72d5,	// (0x00094c59) vtel_slider_pane_g5_ParamLimits

0x72d5,	// (0x00094c59) vtel_slider_pane_g5

0x0004,

0xf9b0,	// (0x0009d334) vtel_slider_pane_g_ParamLimits

0xf9b0,	// (0x0009d334) vtel_slider_pane_g

0x9ff6,	// (0x0009797a) main_gallery2_pane

0x6a4c,	// (0x000943d0) aid_size_row_itut2_dropdow_list_ParamLimits

0x6a4c,	// (0x000943d0) aid_size_row_itut2_dropdow_list

0x6aaf,	// (0x00094433) grid_vitu2_function_top_pane_ParamLimits

0x6aaf,	// (0x00094433) grid_vitu2_function_top_pane

0x6af4,	// (0x00094478) popup_vitu2_dropdown_list_window_ParamLimits

0x6af4,	// (0x00094478) popup_vitu2_dropdown_list_window

0x6b10,	// (0x00094494) popup_vitu2_match_list_window

0x72eb,	// (0x00094c6f) cell_vitu2_function_top_pane_ParamLimits

0x72eb,	// (0x00094c6f) cell_vitu2_function_top_pane

0x7303,	// (0x00094c87) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7303,	// (0x00094c87) cell_vitu2_function_top_pane_cp01

0x731f,	// (0x00094ca3) cell_vitu2_function_top_wide_pane_ParamLimits

0x731f,	// (0x00094ca3) cell_vitu2_function_top_wide_pane

0x9ff6,	// (0x0009797a) bg_button_pane_cp012

0x733b,	// (0x00094cbf) cell_vitu2_function_top_pane_g1

0xd7d2,	// (0x0009b156) bg_button_pane_cp013_ParamLimits

0xd7d2,	// (0x0009b156) bg_button_pane_cp013

0x734f,	// (0x00094cd3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x734f,	// (0x00094cd3) cell_vitu2_function_top_wide_pane_g1

0x9ff6,	// (0x0009797a) bg_popup_sub_pane_cp20

0x7367,	// (0x00094ceb) list_vitu2_match_list_pane

0xb5be,	// (0x00098f42) bg_popup_sub_pane_cp20_g1

0xb5c6,	// (0x00098f4a) bg_popup_sub_pane_cp20_g2

0xe136,	// (0x0009baba) bg_popup_sub_pane_cp20_g3

0xb5ce,	// (0x00098f52) bg_popup_sub_pane_cp20_g4

0xe0fb,	// (0x0009ba7f) bg_popup_sub_pane_cp20_g5

0xb7f0,	// (0x00099174) bg_popup_sub_pane_cp20_g6

0xb5de,	// (0x00098f62) bg_popup_sub_pane_cp20_g7

0xb5e6,	// (0x00098f6a) bg_popup_sub_pane_cp20_g8

0xb5ee,	// (0x00098f72) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9bb,	// (0x0009d33f) bg_popup_sub_pane_cp20_g

0xd7ee,	// (0x0009b172) list_vitu2_match_list_item_pane_ParamLimits

0xd7ee,	// (0x0009b172) list_vitu2_match_list_item_pane

0xd800,	// (0x0009b184) list_vitu2_match_list_item_pane_t1

0xa004,	// (0x00097988) bg_popup_sub_pane_cp21

0xd80e,	// (0x0009b192) grid_vitu2_dropdown_list_pane

0x73b4,	// (0x00094d38) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x73b4,	// (0x00094d38) cell_vitu2_dropdown_list_char_pane

0x73d5,	// (0x00094d59) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x73d5,	// (0x00094d59) cell_vitu2_dropdown_list_ctrl_pane

0xb810,	// (0x00099194) cell_vitu2_dropdown_list_char_pane_g1

0xb819,	// (0x0009919d) cell_vitu2_dropdown_list_char_pane_g2

0xb822,	// (0x000991a6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9d8,	// (0x0009d35c) cell_vitu2_dropdown_list_char_pane_g

0x7401,	// (0x00094d85) cell_vitu2_dropdown_list_char_pane_t1

0x740f,	// (0x00094d93) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x740f,	// (0x00094d93) cell_vitu2_dropdown_list_ctrl_pane_g1

0x741c,	// (0x00094da0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x741c,	// (0x00094da0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7429,	// (0x00094dad) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7429,	// (0x00094dad) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7436,	// (0x00094dba) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7436,	// (0x00094dba) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb493,	// (0x00098e17) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb493,	// (0x00098e17) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9df,	// (0x0009d363) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9df,	// (0x0009d363) cell_vitu2_dropdown_list_ctrl_pane_g

0x7452,	// (0x00094dd6) aid_size_cell_gallery2_ParamLimits

0x7452,	// (0x00094dd6) aid_size_cell_gallery2

0x7470,	// (0x00094df4) grid_gallery2_pane_ParamLimits

0x7470,	// (0x00094df4) grid_gallery2_pane

0x5ff1,	// (0x00093975) scroll_pane_cp029_ParamLimits

0x5ff1,	// (0x00093975) scroll_pane_cp029

0x7484,	// (0x00094e08) cell_gallery2_pane_ParamLimits

0x7484,	// (0x00094e08) cell_gallery2_pane

0xb82b,	// (0x000991af) cell_gallery2_pane_g2

0x74dd,	// (0x00094e61) cell_gallery2_pane_g3

0xb833,	// (0x000991b7) cell_gallery2_pane_g4

0xb83b,	// (0x000991bf) cell_gallery2_pane_g5

0xde7d,	// (0x0009b801) grid_highlight_pane_cp10

0x6b10,	// (0x00094494) popup_vitu2_match_list_window_ParamLimits

0x6b21,	// (0x000944a5) popup_vitu2_query_window_ParamLimits

0x6b21,	// (0x000944a5) popup_vitu2_query_window

0xa004,	// (0x00097988) bg_vitu2_candi_button_pane

0xb810,	// (0x00099194) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb819,	// (0x0009919d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb822,	// (0x000991a6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x74e5,	// (0x00094e69) bg_button_pane_cp015

0x74f5,	// (0x00094e79) bg_button_pane_cp016

0x7507,	// (0x00094e8b) bg_button_pane_cp017

0xa2a2,	// (0x00097c26) bg_popup_sub_pane_cp22

0xb843,	// (0x000991c7) popup_vitu2_query_window_g1

0x7548,	// (0x00094ecc) popup_vitu2_query_window_g2

0x0002,

0xf9ea,	// (0x0009d36e) popup_vitu2_query_window_g

0x7563,	// (0x00094ee7) popup_vitu2_query_window_t1_ParamLimits

0x7563,	// (0x00094ee7) popup_vitu2_query_window_t1

0x7596,	// (0x00094f1a) popup_vitu2_query_window_t2_ParamLimits

0x7596,	// (0x00094f1a) popup_vitu2_query_window_t2

0x75a8,	// (0x00094f2c) popup_vitu2_query_window_t3_ParamLimits

0x75a8,	// (0x00094f2c) popup_vitu2_query_window_t3

0x75d0,	// (0x00094f54) popup_vitu2_query_window_t4_ParamLimits

0x75d0,	// (0x00094f54) popup_vitu2_query_window_t4

0x75ed,	// (0x00094f71) popup_vitu2_query_window_t5_ParamLimits

0x75ed,	// (0x00094f71) popup_vitu2_query_window_t5

0x0006,

0xf9f1,	// (0x0009d375) popup_vitu2_query_window_t_ParamLimits

0xf9f1,	// (0x0009d375) popup_vitu2_query_window_t

0xb6c0,	// (0x00099044) main_cset_text_pane

0x6f19,	// (0x0009489d) aid_area_touch_slider_ParamLimits

0x6f35,	// (0x000948b9) cset_slider_pane_ParamLimits

0x6f5f,	// (0x000948e3) main_cset_slider_pane_g1_ParamLimits

0x6f74,	// (0x000948f8) main_cset_slider_pane_g2_ParamLimits

0xb6e1,	// (0x00099065) main_cset_slider_pane_g3_ParamLimits

0xb6e1,	// (0x00099065) main_cset_slider_pane_g3

0x6f89,	// (0x0009490d) main_cset_slider_pane_g4_ParamLimits

0x6f89,	// (0x0009490d) main_cset_slider_pane_g4

0x6f98,	// (0x0009491c) main_cset_slider_pane_g5_ParamLimits

0x6f98,	// (0x0009491c) main_cset_slider_pane_g5

0x6fa4,	// (0x00094928) main_cset_slider_pane_g6_ParamLimits

0x6fa4,	// (0x00094928) main_cset_slider_pane_g6

0xf94b,	// (0x0009d2cf) main_cset_slider_pane_g_ParamLimits

0xb711,	// (0x00099095) main_cset_slider_pane_t1_ParamLimits

0x7030,	// (0x000949b4) main_cset_slider_pane_t2_ParamLimits

0x704a,	// (0x000949ce) main_cset_slider_pane_t3_ParamLimits

0x7064,	// (0x000949e8) main_cset_slider_pane_t4_ParamLimits

0x707e,	// (0x00094a02) main_cset_slider_pane_t5_ParamLimits

0x7098,	// (0x00094a1c) main_cset_slider_pane_t6_ParamLimits

0x70ad,	// (0x00094a31) main_cset_slider_pane_t7_ParamLimits

0x70d7,	// (0x00094a5b) main_cset_slider_pane_t8_ParamLimits

0x70d7,	// (0x00094a5b) main_cset_slider_pane_t8

0x70ff,	// (0x00094a83) main_cset_slider_pane_t9_ParamLimits

0x70ff,	// (0x00094a83) main_cset_slider_pane_t9

0x7127,	// (0x00094aab) main_cset_slider_pane_t10_ParamLimits

0x7127,	// (0x00094aab) main_cset_slider_pane_t10

0x714f,	// (0x00094ad3) main_cset_slider_pane_t11_ParamLimits

0x714f,	// (0x00094ad3) main_cset_slider_pane_t11

0x7177,	// (0x00094afb) main_cset_slider_pane_t12_ParamLimits

0x7177,	// (0x00094afb) main_cset_slider_pane_t12

0x7194,	// (0x00094b18) main_cset_slider_pane_t13_ParamLimits

0x7194,	// (0x00094b18) main_cset_slider_pane_t13

0xf970,	// (0x0009d2f4) main_cset_slider_pane_t_ParamLimits

0x0baa,	// (0x0008e52e) bg_popup_sub_pane_cp011

0xb84f,	// (0x000991d3) main_cset_text_pane_g1

0xb857,	// (0x000991db) main_cset_text_pane_t1

0xb865,	// (0x000991e9) main_cset_text_pane_t2

0xb873,	// (0x000991f7) main_cset_text_pane_t3

0xb881,	// (0x00099205) main_cset_text_pane_t4

0xb88f,	// (0x00099213) main_cset_text_pane_t5

0xb89d,	// (0x00099221) main_cset_text_pane_t6

0xb8ab,	// (0x0009922f) main_cset_text_pane_t7

0x0006,

0xfa00,	// (0x0009d384) main_cset_text_pane_t

0xa004,	// (0x00097988) main_cam4_burst_pane

0xa004,	// (0x00097988) main_cam5_pane

0x6e67,	// (0x000947eb) bg_button_pane_cp019

0x6e70,	// (0x000947f4) bg_button_pane_cp020

0xb6ed,	// (0x00099071) main_cset_slider_pane_g7_ParamLimits

0xb6ed,	// (0x00099071) main_cset_slider_pane_g7

0xb6f9,	// (0x0009907d) main_cset_slider_pane_g8_ParamLimits

0xb6f9,	// (0x0009907d) main_cset_slider_pane_g8

0x6fb8,	// (0x0009493c) main_cset_slider_pane_g9_ParamLimits

0x6fb8,	// (0x0009493c) main_cset_slider_pane_g9

0x6fc4,	// (0x00094948) main_cset_slider_pane_g10_ParamLimits

0x6fc4,	// (0x00094948) main_cset_slider_pane_g10

0x6fd0,	// (0x00094954) main_cset_slider_pane_g11_ParamLimits

0x6fd0,	// (0x00094954) main_cset_slider_pane_g11

0x6fdc,	// (0x00094960) main_cset_slider_pane_g12_ParamLimits

0x6fdc,	// (0x00094960) main_cset_slider_pane_g12

0x6fe8,	// (0x0009496c) main_cset_slider_pane_g13_ParamLimits

0x6fe8,	// (0x0009496c) main_cset_slider_pane_g13

0x6ff4,	// (0x00094978) main_cset_slider_pane_g14_ParamLimits

0x6ff4,	// (0x00094978) main_cset_slider_pane_g14

0x7000,	// (0x00094984) main_cset_slider_pane_g15_ParamLimits

0x7000,	// (0x00094984) main_cset_slider_pane_g15

0xb73f,	// (0x000990c3) main_cset_slider_pane_t14_ParamLimits

0xb73f,	// (0x000990c3) main_cset_slider_pane_t14

0xb778,	// (0x000990fc) main_cset_slider_pane_t15_ParamLimits

0xb778,	// (0x000990fc) main_cset_slider_pane_t15

0x7660,	// (0x00094fe4) aid_cam4_burst_size_cell_ParamLimits

0x7660,	// (0x00094fe4) aid_cam4_burst_size_cell

0x7680,	// (0x00095004) grid_cam4_burst_pane_ParamLimits

0x7680,	// (0x00095004) grid_cam4_burst_pane

0x76a6,	// (0x0009502a) linegrid_cam4_burst_pane_ParamLimits

0x76a6,	// (0x0009502a) linegrid_cam4_burst_pane

0x76c8,	// (0x0009504c) scroll_pane_cp30_ParamLimits

0x76c8,	// (0x0009504c) scroll_pane_cp30

0x76d4,	// (0x00095058) cell_cam4_burst_pane_ParamLimits

0x76d4,	// (0x00095058) cell_cam4_burst_pane

0xb8b9,	// (0x0009923d) linegrid_cam4_burst_pane_g1_ParamLimits

0xb8b9,	// (0x0009923d) linegrid_cam4_burst_pane_g1

0x771b,	// (0x0009509f) linegrid_cam4_burst_pane_g2_ParamLimits

0x771b,	// (0x0009509f) linegrid_cam4_burst_pane_g2

0xb8c6,	// (0x0009924a) linegrid_cam4_burst_pane_g3_ParamLimits

0xb8c6,	// (0x0009924a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa0f,	// (0x0009d393) linegrid_cam4_burst_pane_g_ParamLimits

0xfa0f,	// (0x0009d393) linegrid_cam4_burst_pane_g

0x772c,	// (0x000950b0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x772c,	// (0x000950b0) linegrid_cam4_burst_pane_g3_copy1

0xb8d3,	// (0x00099257) linegrid_cam4_burst_pane_g4_ParamLimits

0xb8d3,	// (0x00099257) linegrid_cam4_burst_pane_g4

0x7746,	// (0x000950ca) linegrid_cam4_burst_pane_g5_ParamLimits

0x7746,	// (0x000950ca) linegrid_cam4_burst_pane_g5

0x7757,	// (0x000950db) linegrid_cam4_burst_pane_g6_ParamLimits

0x7757,	// (0x000950db) linegrid_cam4_burst_pane_g6

0xb8e0,	// (0x00099264) linegrid_cam4_burst_pane_g7_ParamLimits

0xb8e0,	// (0x00099264) linegrid_cam4_burst_pane_g7

0x7768,	// (0x000950ec) cell_cam4_burst_pane_g1

0xb8f9,	// (0x0009927d) main_cam5_pane_t1_ParamLimits

0xb8f9,	// (0x0009927d) main_cam5_pane_t1

0xb90b,	// (0x0009928f) main_cam5_pane_t2_ParamLimits

0xb90b,	// (0x0009928f) main_cam5_pane_t2

0xb91d,	// (0x000992a1) main_cam5_pane_t3_ParamLimits

0xb91d,	// (0x000992a1) main_cam5_pane_t3

0xb92f,	// (0x000992b3) main_cam5_pane_t4_ParamLimits

0xb92f,	// (0x000992b3) main_cam5_pane_t4

0xb945,	// (0x000992c9) main_cam5_pane_t5_ParamLimits

0xb945,	// (0x000992c9) main_cam5_pane_t5

0xb957,	// (0x000992db) main_cam5_pane_t6_ParamLimits

0xb957,	// (0x000992db) main_cam5_pane_t6

0xb969,	// (0x000992ed) main_cam5_pane_t7_ParamLimits

0xb969,	// (0x000992ed) main_cam5_pane_t7

0xb97b,	// (0x000992ff) main_cam5_pane_t8_ParamLimits

0xb97b,	// (0x000992ff) main_cam5_pane_t8

0xb997,	// (0x0009931b) main_cam5_pane_t9_ParamLimits

0xb997,	// (0x0009931b) main_cam5_pane_t9

0xb9a9,	// (0x0009932d) main_cam5_pane_t10_ParamLimits

0xb9a9,	// (0x0009932d) main_cam5_pane_t10

0xb9bb,	// (0x0009933f) main_cam5_pane_t11_ParamLimits

0xb9bb,	// (0x0009933f) main_cam5_pane_t11

0xb9cd,	// (0x00099351) main_cam5_pane_t12_ParamLimits

0xb9cd,	// (0x00099351) main_cam5_pane_t12

0xb9e2,	// (0x00099366) main_cam5_pane_t13_ParamLimits

0xb9e2,	// (0x00099366) main_cam5_pane_t13

0x000c,

0xfa1b,	// (0x0009d39f) main_cam5_pane_t_ParamLimits

0xfa1b,	// (0x0009d39f) main_cam5_pane_t

0x0d58,	// (0x0008e6dc) popup_scut_keymap_window_ParamLimits

0x0d58,	// (0x0008e6dc) popup_scut_keymap_window

0x777d,	// (0x00095101) aid_size_cell_brow_shortcut

0xde7d,	// (0x0009b801) bg_popup_window_pane_cp010

0x7789,	// (0x0009510d) grid_scut_pane

0x7793,	// (0x00095117) cell_scut_pane_ParamLimits

0x7793,	// (0x00095117) cell_scut_pane

0x77a8,	// (0x0009512c) cell_scut_pane_g1

0xb9ff,	// (0x00099383) cell_scut_pane_t1

0xba0e,	// (0x00099392) cell_scut_pane_t2

0x77b1,	// (0x00095135) cell_scut_pane_t3

0x0002,

0xfa36,	// (0x0009d3ba) cell_scut_pane_t

0x5724,	// (0x000930a8) main_mup3_pane_g8_ParamLimits

0x5724,	// (0x000930a8) main_mup3_pane_g8

0x6a5f,	// (0x000943e3) area_vitu2_query_pane_ParamLimits

0x6a5f,	// (0x000943e3) area_vitu2_query_pane

0x7519,	// (0x00094e9d) input_focus_pane_cp08

0xba1d,	// (0x000993a1) area_vitu2_query_pane_g1

0x77bf,	// (0x00095143) area_vitu2_query_pane_g2

0x0001,

0xfa3d,	// (0x0009d3c1) area_vitu2_query_pane_g

0x77ce,	// (0x00095152) area_vitu2_query_pane_t1_ParamLimits

0x77ce,	// (0x00095152) area_vitu2_query_pane_t1

0x77e0,	// (0x00095164) area_vitu2_query_pane_t2_ParamLimits

0x77e0,	// (0x00095164) area_vitu2_query_pane_t2

0x77f2,	// (0x00095176) area_vitu2_query_pane_t3_ParamLimits

0x77f2,	// (0x00095176) area_vitu2_query_pane_t3

0xba29,	// (0x000993ad) area_vitu2_query_pane_t4_ParamLimits

0xba29,	// (0x000993ad) area_vitu2_query_pane_t4

0xba51,	// (0x000993d5) area_vitu2_query_pane_t5_ParamLimits

0xba51,	// (0x000993d5) area_vitu2_query_pane_t5

0xba79,	// (0x000993fd) area_vitu2_query_pane_t6_ParamLimits

0xba79,	// (0x000993fd) area_vitu2_query_pane_t6

0x0006,

0xfa42,	// (0x0009d3c6) area_vitu2_query_pane_t_ParamLimits

0xfa42,	// (0x0009d3c6) area_vitu2_query_pane_t

0x781a,	// (0x0009519e) bg_button_pane_cp018

0x7827,	// (0x000951ab) bg_button_pane_cp021

0x7833,	// (0x000951b7) bg_button_pane_cp022

0x7842,	// (0x000951c6) input_focus_pane_cp09

0x2f07,	// (0x0009088b) aid_size_touch_mv_arrow_left

0xe754,	// (0x0009c0d8) aid_size_touch_mv_arrow_right

0x7018,	// (0x0009499c) main_cset_slider_pane_g16_ParamLimits

0x7018,	// (0x0009499c) main_cset_slider_pane_g16

0x7024,	// (0x000949a8) main_cset_slider_pane_g17_ParamLimits

0x7024,	// (0x000949a8) main_cset_slider_pane_g17

0x7768,	// (0x000950ec) cell_cam4_burst_pane_g1_ParamLimits

0x0baa,	// (0x0008e52e) compa_mode_pane

0x722d,	// (0x00094bb1) popup_vtel_slider_window_g3_ParamLimits

0x722d,	// (0x00094bb1) popup_vtel_slider_window_g3

0x7244,	// (0x00094bc8) popup_vtel_slider_window_g4_ParamLimits

0x7244,	// (0x00094bc8) popup_vtel_slider_window_g4

0x725b,	// (0x00094bdf) popup_vtel_slider_window_t1_ParamLimits

0x725b,	// (0x00094bdf) popup_vtel_slider_window_t1

0xa004,	// (0x00097988) main_cl_pane

0xa2d2,	// (0x00097c56) popup_imed_adjust2_window_ParamLimits

0xa2a2,	// (0x00097c26) bg_tb_trans_pane_cp05_ParamLimits

0xad06,	// (0x0009868a) popup_imed_adjust2_window_g1_ParamLimits

0xad15,	// (0x00098699) popup_imed_adjust2_window_g2_ParamLimits

0xad15,	// (0x00098699) popup_imed_adjust2_window_g2

0xad21,	// (0x000986a5) popup_imed_adjust2_window_g3_ParamLimits

0xad21,	// (0x000986a5) popup_imed_adjust2_window_g3

0x0002,

0xf7b5,	// (0x0009d139) popup_imed_adjust2_window_g_ParamLimits

0xf7b5,	// (0x0009d139) popup_imed_adjust2_window_g

0xad2d,	// (0x000986b1) popup_imed_adjust2_window_t1_ParamLimits

0xad45,	// (0x000986c9) slider_imed_adjust_pane_ParamLimits

0xad59,	// (0x000986dd) slider_imed_adjust_pane_g1_ParamLimits

0xad69,	// (0x000986ed) slider_imed_adjust_pane_g2_ParamLimits

0xad79,	// (0x000986fd) slider_imed_adjust_pane_g3_ParamLimits

0xad8a,	// (0x0009870e) slider_imed_adjust_pane_g4_ParamLimits

0xf7bc,	// (0x0009d140) slider_imed_adjust_pane_g_ParamLimits

0x6836,	// (0x000941ba) aid_touch_area_cam4_ParamLimits

0x6836,	// (0x000941ba) aid_touch_area_cam4

0xb467,	// (0x00098deb) battery_pane_cp01

0x68ce,	// (0x00094252) main_camera4_pane_g6_ParamLimits

0x68ce,	// (0x00094252) main_camera4_pane_g6

0x68ef,	// (0x00094273) main_camera4_pane_t2_ParamLimits

0x68ef,	// (0x00094273) main_camera4_pane_t2

0x0001,

0xf8be,	// (0x0009d242) main_camera4_pane_t_ParamLimits

0xf8be,	// (0x0009d242) main_camera4_pane_t

0x691d,	// (0x000942a1) aid_touch_area_vid4_ParamLimits

0x691d,	// (0x000942a1) aid_touch_area_vid4

0x695f,	// (0x000942e3) main_video4_pane_g5_ParamLimits

0x695f,	// (0x000942e3) main_video4_pane_g5

0x6980,	// (0x00094304) vid4_progress_pane_ParamLimits

0x6980,	// (0x00094304) vid4_progress_pane

0xb705,	// (0x00099089) main_cset_slider_pane_g18_ParamLimits

0xb705,	// (0x00099089) main_cset_slider_pane_g18

0xb8ed,	// (0x00099271) cell_cam4_burst_pane_g2_ParamLimits

0xb8ed,	// (0x00099271) cell_cam4_burst_pane_g2

0x0001,

0xfa16,	// (0x0009d39a) cell_cam4_burst_pane_g_ParamLimits

0xfa16,	// (0x0009d39a) cell_cam4_burst_pane_g

0xdcae,	// (0x0009b632) bg_cl_pane_ParamLimits

0xdcae,	// (0x0009b632) bg_cl_pane

0x7851,	// (0x000951d5) cl_header_pane_ParamLimits

0x7851,	// (0x000951d5) cl_header_pane

0x7865,	// (0x000951e9) cl_listscroll_pane_ParamLimits

0x7865,	// (0x000951e9) cl_listscroll_pane

0xbac5,	// (0x00099449) bg_cl_pane_g1

0xbacd,	// (0x00099451) bg_cl_pane_g2

0xbad5,	// (0x00099459) bg_cl_pane_g3

0xbadd,	// (0x00099461) bg_cl_pane_g4

0xbae5,	// (0x00099469) bg_cl_pane_g5

0xbaed,	// (0x00099471) bg_cl_pane_g6

0xbaf5,	// (0x00099479) bg_cl_pane_g7

0xbafd,	// (0x00099481) bg_cl_pane_g8

0xbb05,	// (0x00099489) bg_cl_pane_g9

0x0008,

0xfa51,	// (0x0009d3d5) bg_cl_pane_g

0x7875,	// (0x000951f9) aid_height_cl_leading_ParamLimits

0x7875,	// (0x000951f9) aid_height_cl_leading

0x7881,	// (0x00095205) aid_height_cl_text_ParamLimits

0x7881,	// (0x00095205) aid_height_cl_text

0x47a2,	// (0x00092126) bg_cl_header_pane_ParamLimits

0x47a2,	// (0x00092126) bg_cl_header_pane

0x78a0,	// (0x00095224) cl_header_pane_g1_ParamLimits

0x78a0,	// (0x00095224) cl_header_pane_g1

0x78b6,	// (0x0009523a) cl_header_pane_t1_ParamLimits

0x78b6,	// (0x0009523a) cl_header_pane_t1

0xbb0d,	// (0x00099491) cl_list_pane

0xbb16,	// (0x0009949a) hc_scroll_pane_cp01

0xe0fb,	// (0x0009ba7f) bg_cl_header_pane_g1

0xb5be,	// (0x00098f42) bg_cl_header_pane_g2

0xe136,	// (0x0009baba) bg_cl_header_pane_g3

0xb5ce,	// (0x00098f52) bg_cl_header_pane_g4

0xb5c6,	// (0x00098f4a) bg_cl_header_pane_g5

0xb7f0,	// (0x00099174) bg_cl_header_pane_g6

0xb5e6,	// (0x00098f6a) bg_cl_header_pane_g7

0xb5ee,	// (0x00098f72) bg_cl_header_pane_g8

0xb5de,	// (0x00098f62) bg_cl_header_pane_g9

0x0008,

0xfa64,	// (0x0009d3e8) bg_cl_header_pane_g

0x78cf,	// (0x00095253) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x78cf,	// (0x00095253) hc_cl_list_double_graphic_heading_pane

0x78df,	// (0x00095263) hc_cl_list_single_graphic_pane_ParamLimits

0x78df,	// (0x00095263) hc_cl_list_single_graphic_pane

0x78f2,	// (0x00095276) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x78f2,	// (0x00095276) hc_cl_list_single_graphic_pane_g1

0x78fe,	// (0x00095282) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x78fe,	// (0x00095282) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa77,	// (0x0009d3fb) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa77,	// (0x0009d3fb) hc_cl_list_single_graphic_pane_g

0x7912,	// (0x00095296) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7912,	// (0x00095296) hc_cl_list_single_graphic_pane_t1

0x78f2,	// (0x00095276) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x78f2,	// (0x00095276) hc_cl_list_double_graphic_heading_pane_g1

0x7927,	// (0x000952ab) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7927,	// (0x000952ab) hc_cl_list_double_graphic_heading_pane_g2

0x793b,	// (0x000952bf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x793b,	// (0x000952bf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa7c,	// (0x0009d400) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa7c,	// (0x0009d400) hc_cl_list_double_graphic_heading_pane_g

0x794f,	// (0x000952d3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x794f,	// (0x000952d3) hc_cl_list_double_graphic_heading_pane_t1

0x7964,	// (0x000952e8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7964,	// (0x000952e8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa83,	// (0x0009d407) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa83,	// (0x0009d407) hc_cl_list_double_graphic_heading_pane_t

0xd816,	// (0x0009b19a) vid4_progress_pane_g1

0xd825,	// (0x0009b1a9) vid4_progress_pane_g2

0xd834,	// (0x0009b1b8) vid4_progress_pane_g3

0xd843,	// (0x0009b1c7) vid4_progress_pane_g4

0x0004,

0xfa88,	// (0x0009d40c) vid4_progress_pane_g

0xd85b,	// (0x0009b1df) vid4_progress_pane_t1

0xd871,	// (0x0009b1f5) vid4_progress_pane_t2

0x0002,

0xfa93,	// (0x0009d417) vid4_progress_pane_t

0xd89b,	// (0x0009b21f) wait_bar_pane_cp07

0xa5b1,	// (0x00097f35) blid_firmament_pane_ParamLimits

0xa5f2,	// (0x00097f76) popup_blid_sat_info2_window_g1

0xa616,	// (0x00097f9a) popup_blid_sat_info2_window_t3

0xa624,	// (0x00097fa8) popup_blid_sat_info2_window_t4

0xa632,	// (0x00097fb6) popup_blid_sat_info2_window_t5

0xa640,	// (0x00097fc4) popup_blid_sat_info2_window_t6

0xa650,	// (0x00097fd4) popup_blid_sat_info2_window_t7

0xa65e,	// (0x00097fe2) popup_blid_sat_info2_window_t8

0xa66c,	// (0x00097ff0) popup_blid_sat_info2_window_t9

0xa67a,	// (0x00097ffe) popup_blid_sat_info2_window_t10

0xa736,	// (0x000980ba) aid_firma_cardinal_ParamLimits

0xa74a,	// (0x000980ce) blid_firmament_pane_t1_ParamLimits

0xa761,	// (0x000980e5) blid_firmament_pane_t2_ParamLimits

0xa778,	// (0x000980fc) blid_firmament_pane_t3_ParamLimits

0xa78f,	// (0x00098113) blid_firmament_pane_t4_ParamLimits

0xf6a9,	// (0x0009d02d) blid_firmament_pane_t_ParamLimits

0xa7a6,	// (0x0009812a) blid_sat_info_pane_ParamLimits

0x9ff6,	// (0x0009797a) main_cam_set_pane_ParamLimits

0x5f72,	// (0x000938f6) aid_size_cell_colour_35_ParamLimits

0x5f92,	// (0x00093916) aid_size_cell_colour_112_ParamLimits

0x5fb2,	// (0x00093936) aid_size_cell_effect_ParamLimits

0xa2a2,	// (0x00097c26) bg_tb_trans_pane_cp02_ParamLimits

0xe368,	// (0x0009bcec) heading_imed_pane_ParamLimits

0x5fd2,	// (0x00093956) listscroll_imed_pane_ParamLimits

0x3ba4,	// (0x00091528) popup_call2_audio_first_window_g5_ParamLimits

0x3ba4,	// (0x00091528) popup_call2_audio_first_window_g5

0x64ef,	// (0x00093e73) aid_size_touch_image3_arrow_left_ParamLimits

0x64ef,	// (0x00093e73) aid_size_touch_image3_arrow_left

0x650f,	// (0x00093e93) aid_size_touch_image3_arrow_right_ParamLimits

0x650f,	// (0x00093e93) aid_size_touch_image3_arrow_right

0xd886,	// (0x0009b20a) vid4_progress_pane_t3

0x62a6,	// (0x00093c2a) main_hwr_training_symbol_option_pane_ParamLimits

0x62a6,	// (0x00093c2a) main_hwr_training_symbol_option_pane

0xafe5,	// (0x00098969) popup_hwr_training_preview_window_ParamLimits

0xafe5,	// (0x00098969) popup_hwr_training_preview_window

0x62c2,	// (0x00093c46) hwr_training_navi_pane_g5_ParamLimits

0x62c2,	// (0x00093c46) hwr_training_navi_pane_g5

0xb5ac,	// (0x00098f30) popup_char_count_window

0x9ff6,	// (0x0009797a) bg_popup_sub_pane_cp20_ParamLimits

0x7367,	// (0x00094ceb) list_vitu2_match_list_pane_ParamLimits

0x7376,	// (0x00094cfa) vitu2_page_scroll_pane_ParamLimits

0x7376,	// (0x00094cfa) vitu2_page_scroll_pane

0xbb5c,	// (0x000994e0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbb5c,	// (0x000994e0) list_single_hwr_training_symbol_option_pane

0xbb6f,	// (0x000994f3) list_single_hwr_training_symbol_option_pane_g1

0xbb77,	// (0x000994fb) list_single_hwr_training_symbol_option_pane_t1

0xbb85,	// (0x00099509) bg_button_pane_cp023

0xbb8e,	// (0x00099512) bg_button_pane_cp024

0x7996,	// (0x0009531a) vitu2_page_scroll_pane_g1

0x799e,	// (0x00095322) vitu2_page_scroll_pane_g2

0x0001,

0xfa9a,	// (0x0009d41e) vitu2_page_scroll_pane_g

0x79a6,	// (0x0009532a) vitu2_page_scroll_pane_t1

0xa7df,	// (0x00098163) popup_char_count_window_g1

0xbbc1,	// (0x00099545) popup_char_count_window_g2

0xbbca,	// (0x0009954e) popup_char_count_window_g3

0x0002,

0xfa9f,	// (0x0009d423) popup_char_count_window_g

0xbbd3,	// (0x00099557) popup_char_count_window_t1

0xa004,	// (0x00097988) main_vded2_pane

0xacf4,	// (0x00098678) aid_size_cell_imed_line

0xacfe,	// (0x00098682) grid_imed_line_width_pane

0xb51c,	// (0x00098ea0) vid4_indicators_pane_g4

0xbbe1,	// (0x00099565) cell_imed_line_width_pane_ParamLimits

0xbbe1,	// (0x00099565) cell_imed_line_width_pane

0xbbf3,	// (0x00099577) cell_imed_line_width_pane_g1

0xa55f,	// (0x00097ee3) cell_imed_line_width_pane_g2

0x0001,

0xfaa6,	// (0x0009d42a) cell_imed_line_width_pane_g

0x79b5,	// (0x00095339) main_vded2_pane_g1_ParamLimits

0x79b5,	// (0x00095339) main_vded2_pane_g1

0x79cb,	// (0x0009534f) main_vded2_pane_g2_ParamLimits

0x79cb,	// (0x0009534f) main_vded2_pane_g2

0x0001,

0xfaab,	// (0x0009d42f) main_vded2_pane_g_ParamLimits

0xfaab,	// (0x0009d42f) main_vded2_pane_g

0x79db,	// (0x0009535f) vded2_slider_pane_ParamLimits

0x79db,	// (0x0009535f) vded2_slider_pane

0x79ee,	// (0x00095372) aid_size_touch_vded2_end

0x79f6,	// (0x0009537a) aid_size_touch_vded2_playhead

0x79fe,	// (0x00095382) aid_size_touch_vded2_start

0x7a06,	// (0x0009538a) vded2_slider_bg_pane

0x7a0f,	// (0x00095393) vded2_slider_pane_g1

0x7a18,	// (0x0009539c) vded2_slider_pane_g2

0x7a20,	// (0x000953a4) vded2_slider_pane_g3

0x0002,

0xfab0,	// (0x0009d434) vded2_slider_pane_g

0x7a29,	// (0x000953ad) vded2_slider_bg_pane_g1

0x7a32,	// (0x000953b6) vded2_slider_bg_pane_g2

0x7a3b,	// (0x000953bf) vded2_slider_bg_pane_g3

0x0002,

0xfab7,	// (0x0009d43b) vded2_slider_bg_pane_g

0x348e,	// (0x00090e12) aid_postcard_touch_down_pane_ParamLimits

0x348e,	// (0x00090e12) aid_postcard_touch_down_pane

0x34a0,	// (0x00090e24) aid_postcard_touch_up_pane_ParamLimits

0x34a0,	// (0x00090e24) aid_postcard_touch_up_pane

0xa004,	// (0x00097988) main_blid2_pane

0xa2ba,	// (0x00097c3e) popup_blid2_search_window

0x0baa,	// (0x0008e52e) blid2_gps_pane

0x0baa,	// (0x0008e52e) blid2_navig_pane

0x0baa,	// (0x0008e52e) blid2_search_pane

0x0baa,	// (0x0008e52e) blid2_tripm_pane

0x7a44,	// (0x000953c8) blid2_search_pane_g1_ParamLimits

0x7a44,	// (0x000953c8) blid2_search_pane_g1

0x7a58,	// (0x000953dc) blid2_search_pane_t1_ParamLimits

0x7a58,	// (0x000953dc) blid2_search_pane_t1

0x7a6a,	// (0x000953ee) aid_size_cell_blid2_gps_ParamLimits

0x7a6a,	// (0x000953ee) aid_size_cell_blid2_gps

0x7a82,	// (0x00095406) blid2_gps_pane_g1_ParamLimits

0x7a82,	// (0x00095406) blid2_gps_pane_g1

0x7a96,	// (0x0009541a) grid_blid2_satellite_pane_ParamLimits

0x7a96,	// (0x0009541a) grid_blid2_satellite_pane

0x7aaa,	// (0x0009542e) blid2_navig_pane_g1_ParamLimits

0x7aaa,	// (0x0009542e) blid2_navig_pane_g1

0x7ab6,	// (0x0009543a) blid2_navig_pane_t1_ParamLimits

0x7ab6,	// (0x0009543a) blid2_navig_pane_t1

0x7acf,	// (0x00095453) blid2_navig_pane_t2_ParamLimits

0x7acf,	// (0x00095453) blid2_navig_pane_t2

0x0001,

0xfabe,	// (0x0009d442) blid2_navig_pane_t_ParamLimits

0xfabe,	// (0x0009d442) blid2_navig_pane_t

0x7ae8,	// (0x0009546c) blid2_navig_ring_pane_ParamLimits

0x7ae8,	// (0x0009546c) blid2_navig_ring_pane

0x7afd,	// (0x00095481) blid2_speed_pane_ParamLimits

0x7afd,	// (0x00095481) blid2_speed_pane

0x7b09,	// (0x0009548d) blid2_tripm_pane_g1_ParamLimits

0x7b09,	// (0x0009548d) blid2_tripm_pane_g1

0x7b1e,	// (0x000954a2) blid2_tripm_pane_g2_ParamLimits

0x7b1e,	// (0x000954a2) blid2_tripm_pane_g2

0x7b32,	// (0x000954b6) blid2_tripm_pane_g3_ParamLimits

0x7b32,	// (0x000954b6) blid2_tripm_pane_g3

0x7b46,	// (0x000954ca) blid2_tripm_pane_g4_ParamLimits

0x7b46,	// (0x000954ca) blid2_tripm_pane_g4

0x7b5a,	// (0x000954de) blid2_tripm_pane_g5_ParamLimits

0x7b5a,	// (0x000954de) blid2_tripm_pane_g5

0x0005,

0xfac3,	// (0x0009d447) blid2_tripm_pane_g_ParamLimits

0xfac3,	// (0x0009d447) blid2_tripm_pane_g

0x7b7c,	// (0x00095500) blid2_tripm_pane_t1_ParamLimits

0x7b7c,	// (0x00095500) blid2_tripm_pane_t1

0x7b93,	// (0x00095517) blid2_tripm_pane_t2_ParamLimits

0x7b93,	// (0x00095517) blid2_tripm_pane_t2

0x7baa,	// (0x0009552e) blid2_tripm_pane_t3_ParamLimits

0x7baa,	// (0x0009552e) blid2_tripm_pane_t3

0x0003,

0xfad0,	// (0x0009d454) blid2_tripm_pane_t_ParamLimits

0xfad0,	// (0x0009d454) blid2_tripm_pane_t

0x7bed,	// (0x00095571) cell_blid2_satellite_pane_ParamLimits

0x7bed,	// (0x00095571) cell_blid2_satellite_pane

0x7c05,	// (0x00095589) cell_blid2_satellite_pane_g1

0xbbfc,	// (0x00099580) cell_blid2_satellite_pane_t1

0xa7b6,	// (0x0009813a) blid2_speed_pane_g1

0xbc0a,	// (0x0009958e) blid2_speed_pane_t1

0xbc18,	// (0x0009959c) blid2_speed_pane_t2

0x0001,

0xfad9,	// (0x0009d45d) blid2_speed_pane_t

0xa7b6,	// (0x0009813a) blid2_navig_ring_pane_g1

0x7c0e,	// (0x00095592) blid2_navig_ring_pane_g2

0x7c16,	// (0x0009559a) blid2_navig_ring_pane_g3

0x7c1e,	// (0x000955a2) blid2_navig_ring_pane_g4

0x7c26,	// (0x000955aa) blid2_navig_ring_pane_g5

0x0004,

0xfade,	// (0x0009d462) blid2_navig_ring_pane_g

0x0baa,	// (0x0008e52e) bg_popup_window_pane_cp011

0xbc26,	// (0x000995aa) popup_blid2_search_window_g1

0xbc2e,	// (0x000995b2) popup_blid2_search_window_t1

0xbc3c,	// (0x000995c0) popup_blid2_search_window_t2

0x0001,

0xfae9,	// (0x0009d46d) popup_blid2_search_window_t

0xe00a,	// (0x0009b98e) main_browser_pane_g1

0xdcae,	// (0x0009b632) main_browser_pane_ParamLimits

0x9ff6,	// (0x0009797a) bg_button_pane_cp011_ParamLimits

0x6c40,	// (0x000945c4) cell_vitu2_function_pane_g1_ParamLimits

0xa2a2,	// (0x00097c26) bg_popup_sub_pane_cp22_ParamLimits

0x7519,	// (0x00094e9d) input_focus_pane_cp08_ParamLimits

0x7530,	// (0x00094eb4) popup_vitu2_query_button_pane_ParamLimits

0x7530,	// (0x00094eb4) popup_vitu2_query_button_pane

0x7540,	// (0x00094ec4) popup_vitu2_query_input_button_pane

0xb843,	// (0x000991c7) popup_vitu2_query_window_g1_ParamLimits

0x7548,	// (0x00094ecc) popup_vitu2_query_window_g2_ParamLimits

0xf9ea,	// (0x0009d36e) popup_vitu2_query_window_g_ParamLimits

0x0baa,	// (0x0008e52e) bg_button_pane_cp026

0x7c2e,	// (0x000955b2) popup_vitu2_query_input_button_pane_g1

0x0baa,	// (0x0008e52e) bg_button_pane_cp025

0xbc4a,	// (0x000995ce) popup_vitu2_query_button_pane_t1

0x5440,	// (0x00092dc4) main_mp3_pane_t6

0x544e,	// (0x00092dd2) popup_slider_window_cp01

0xb4a1,	// (0x00098e25) cam4_battery_pane

0xb4a1,	// (0x00098e25) cam4_battery_pane_cp02

0xb4a1,	// (0x00098e25) cam4_battery_pane_cp01

0xb4a1,	// (0x00098e25) cam4_battery_pane_cp03

0xb340,	// (0x00098cc4) cam4_battery_pane_g1

0xa7b6,	// (0x0009813a) cam4_battery_pane_g2

0x0001,

0xfaee,	// (0x0009d472) cam4_battery_pane_g

0xa688,	// (0x0009800c) popup_blid_sat_info2_window_t11

0x2f07,	// (0x0009088b) aid_size_touch_mv_arrow_left_ParamLimits

0xe754,	// (0x0009c0d8) aid_size_touch_mv_arrow_right_ParamLimits

0xe7ad,	// (0x0009c131) navi_pane_g1_ParamLimits

0xe7b9,	// (0x0009c13d) navi_pane_g2_ParamLimits

0x2f2b,	// (0x000908af) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0009cd4e) navi_pane_g_ParamLimits

0x2f48,	// (0x000908cc) navi_pane_mv_t1_ParamLimits

0x5fde,	// (0x00093962) grid_imed_effect_pane_ParamLimits

0x1cb2,	// (0x0008f636) aid_placing_vt_slider_lsc

0xdf4c,	// (0x0009b8d0) aid_placing_vt_slider_prt

0x47a2,	// (0x00092126) bg_tb_trans_pane_cp01_ParamLimits

0xa905,	// (0x00098289) popup_image_details_window_g1_ParamLimits

0xa918,	// (0x0009829c) popup_image_details_window_g2_ParamLimits

0xa92d,	// (0x000982b1) popup_image_details_window_g3_ParamLimits

0xa92d,	// (0x000982b1) popup_image_details_window_g3

0xf6ee,	// (0x0009d072) popup_image_details_window_g_ParamLimits

0xa941,	// (0x000982c5) popup_image_details_window_t1_ParamLimits

0xa953,	// (0x000982d7) popup_image_details_window_t2_ParamLimits

0xa96c,	// (0x000982f0) popup_image_details_window_t3_ParamLimits

0xa980,	// (0x00098304) popup_image_details_window_t4_ParamLimits

0xa99b,	// (0x0009831f) popup_image_details_window_t5_ParamLimits

0xf6f5,	// (0x0009d079) popup_image_details_window_t_ParamLimits

0x788d,	// (0x00095211) cl_header_name_pane_ParamLimits

0x788d,	// (0x00095211) cl_header_name_pane

0x7c36,	// (0x000955ba) cl_header_name_pane_t1_ParamLimits

0x7c36,	// (0x000955ba) cl_header_name_pane_t1

0x7c57,	// (0x000955db) cl_header_name_pane_t2_ParamLimits

0x7c57,	// (0x000955db) cl_header_name_pane_t2

0x7c99,	// (0x0009561d) cl_header_name_pane_t3_ParamLimits

0x7c99,	// (0x0009561d) cl_header_name_pane_t3

0x0002,

0xfaf3,	// (0x0009d477) cl_header_name_pane_t_ParamLimits

0xfaf3,	// (0x0009d477) cl_header_name_pane_t

0xe846,	// (0x0009c1ca) navi_pane_mv_g2_ParamLimits

0xb569,	// (0x00098eed) field_vitu2_entry_pane_g1_ParamLimits

0xb575,	// (0x00098ef9) field_vitu2_entry_pane_g2_ParamLimits

0xb581,	// (0x00098f05) field_vitu2_entry_pane_g3_ParamLimits

0xb581,	// (0x00098f05) field_vitu2_entry_pane_g3

0xf8f0,	// (0x0009d274) field_vitu2_entry_pane_g_ParamLimits

0xd785,	// (0x0009b109) cell_vitu2_itu_pane_g1_ParamLimits

0x6bd4,	// (0x00094558) cell_vitu2_itu_pane_g2_ParamLimits

0x6bd4,	// (0x00094558) cell_vitu2_itu_pane_g2

0x0001,

0xf8fc,	// (0x0009d280) cell_vitu2_itu_pane_g_ParamLimits

0xf8fc,	// (0x0009d280) cell_vitu2_itu_pane_g

0x9ff6,	// (0x0009797a) bg_vkb2_func_pane_cp05_ParamLimits

0x9ff6,	// (0x0009797a) bg_vkb2_func_pane_cp05

0x9ff6,	// (0x0009797a) bg_vkb2_func_pane_cp03

0x9ff6,	// (0x0009797a) bg_vkb2_func_pane_cp04

0x9ff6,	// (0x0009797a) bg_vkb2_func_pane_cp10_ParamLimits

0x9ff6,	// (0x0009797a) bg_vkb2_func_pane_cp10

0x7833,	// (0x000951b7) bg_vkb2_func_pane_cp08

0x781a,	// (0x0009519e) bg_vkb2_func_pane_cp06

0x7827,	// (0x000951ab) bg_vkb2_func_pane_cp07

0xbb97,	// (0x0009951b) bg_vkb2_func_pane_cp11_ParamLimits

0xbb97,	// (0x0009951b) bg_vkb2_func_pane_cp11

0xbbac,	// (0x00099530) bg_vkb2_func_pane_cp12_ParamLimits

0xbbac,	// (0x00099530) bg_vkb2_func_pane_cp12

0x0baa,	// (0x0008e52e) bg_vkb2_func_pane_cp09

0xb5be,	// (0x00098f42) bg_vkb2_func_pane_g1

0xe136,	// (0x0009baba) bg_vkb2_func_pane_g2

0xb5c6,	// (0x00098f4a) bg_vkb2_func_pane_g3

0xb5ce,	// (0x00098f52) bg_vkb2_func_pane_g4

0xb7f0,	// (0x00099174) bg_vkb2_func_pane_g5

0xb5e6,	// (0x00098f6a) bg_vkb2_func_pane_g6

0xb5ee,	// (0x00098f72) bg_vkb2_func_pane_g7

0xb5de,	// (0x00098f62) bg_vkb2_func_pane_g8

0xe0fb,	// (0x0009ba7f) bg_vkb2_func_pane_g9

0x0008,

0xfafa,	// (0x0009d47e) bg_vkb2_func_pane_g

0x7b6c,	// (0x000954f0) blid2_tripm_pane_g6_ParamLimits

0x7b6c,	// (0x000954f0) blid2_tripm_pane_g6

0xb2fe,	// (0x00098c82) mp4_progress_pane_g1

0x7bdb,	// (0x0009555f) blid2_tripm_values_pane_ParamLimits

0x7bdb,	// (0x0009555f) blid2_tripm_values_pane

0x7cca,	// (0x0009564e) blid2_tripm_values_pane_t1

0x7cd8,	// (0x0009565c) blid2_tripm_values_pane_t2

0x7ce6,	// (0x0009566a) blid2_tripm_values_pane_t3

0x7cf4,	// (0x00095678) blid2_tripm_values_pane_t4

0x7d02,	// (0x00095686) blid2_tripm_values_pane_t5

0x7d10,	// (0x00095694) blid2_tripm_values_pane_t6

0x7d1e,	// (0x000956a2) blid2_tripm_values_pane_t7

0x7d2c,	// (0x000956b0) blid2_tripm_values_pane_t8

0x7d3a,	// (0x000956be) blid2_tripm_values_pane_t9

0x0008,

0xfb0d,	// (0x0009d491) blid2_tripm_values_pane_t

0x1cec,	// (0x0008f670) call_video_pane_t1_ParamLimits

0x1d06,	// (0x0008f68a) call_video_pane_t2_ParamLimits

0xf253,	// (0x0009cbd7) call_video_pane_t_ParamLimits

0x33a3,	// (0x00090d27) msg_header_pane_g1_ParamLimits

0xea26,	// (0x0009c3aa) msg_header_pane_g2_ParamLimits

0xea26,	// (0x0009c3aa) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0009cdf1) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0009cdf1) msg_header_pane_g

0xdcae,	// (0x0009b632) main_clock2_pane_ParamLimits

0x5cf5,	// (0x00093679) grid_clock2_toolbar_pane_ParamLimits

0x5cf5,	// (0x00093679) grid_clock2_toolbar_pane

0x5cf5,	// (0x00093679) listscroll_clock2_pane_ParamLimits

0x5cf5,	// (0x00093679) listscroll_clock2_pane

0x5dd8,	// (0x0009375c) main_clock2_pane_t3_ParamLimits

0x5dd8,	// (0x0009375c) main_clock2_pane_t3

0x5dfa,	// (0x0009377e) main_clock2_pane_t4_ParamLimits

0x5dfa,	// (0x0009377e) main_clock2_pane_t4

0xbc58,	// (0x000995dc) cell_clock2_toolbar_pane

0xbc60,	// (0x000995e4) cell_clock2_toolbar_pane_cp01

0xbc60,	// (0x000995e4) cell_clock2_toolbar_pane_cp02

0xbc68,	// (0x000995ec) cell_clock2_toolbar_pane_cp03

0xbc70,	// (0x000995f4) list_clock2_pane

0xbc78,	// (0x000995fc) scroll_pane_cp10

0xbc80,	// (0x00099604) list_single_clock2_pane_ParamLimits

0xbc80,	// (0x00099604) list_single_clock2_pane

0xde7d,	// (0x0009b801) list_highlight_pane_cp08

0xbc8d,	// (0x00099611) list_single_clock2_pane_t1

0xbc9b,	// (0x0009961f) list_single_clock2_pane_t2

0x0001,

0xfb20,	// (0x0009d4a4) list_single_clock2_pane_t

0x0baa,	// (0x0008e52e) bg_button_pane_cp10

0xbca9,	// (0x0009962d) cell_clock2_toolbar_pane_g1

0x3422,	// (0x00090da6) aid_main_viewer_pane_g1_ParamLimits

0x3422,	// (0x00090da6) aid_main_viewer_pane_g1

0x342e,	// (0x00090db2) aid_main_viewer_pane_g2_ParamLimits

0x342e,	// (0x00090db2) aid_main_viewer_pane_g2

0x343a,	// (0x00090dbe) aid_main_viewer_pane_g3_ParamLimits

0x343a,	// (0x00090dbe) aid_main_viewer_pane_g3

0x3449,	// (0x00090dcd) aid_main_viewer_pane_g4_ParamLimits

0x3449,	// (0x00090dcd) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0009ce02) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0009ce02) aid_main_viewer_pane_g

0x9ff6,	// (0x0009797a) main_calc_pane_ParamLimits

0x47b0,	// (0x00092134) main_dialer2_pane_ParamLimits

0xa004,	// (0x00097988) main_cam6_pane

0xa004,	// (0x00097988) main_vid6_pane

0x5d01,	// (0x00093685) listscroll_gen_pane_cp06_ParamLimits

0x5d01,	// (0x00093685) listscroll_gen_pane_cp06

0x5e1b,	// (0x0009379f) main_clock2_pane_t5_ParamLimits

0x5e1b,	// (0x0009379f) main_clock2_pane_t5

0x5e73,	// (0x000937f7) aid_call2_pane_cp10_ParamLimits

0x5e85,	// (0x00093809) aid_call_pane_cp10_ParamLimits

0xe748,	// (0x0009c0cc) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe748,	// (0x0009c0cc) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5e97,	// (0x0009381b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5e97,	// (0x0009381b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe748,	// (0x0009c0cc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7aa,	// (0x0009d12e) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ea9,	// (0x0009382d) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb368,	// (0x00098cec) cell_dialer2_keypad_pane_g2_ParamLimits

0xb368,	// (0x00098cec) cell_dialer2_keypad_pane_g2

0x0001,

0xf88f,	// (0x0009d213) cell_dialer2_keypad_pane_g_ParamLimits

0xf88f,	// (0x0009d213) cell_dialer2_keypad_pane_g

0x64b8,	// (0x00093e3c) cell_dialer2_keypad_pane_t1

0x6f0b,	// (0x0009488f) main_cset_text2_pane_ParamLimits

0x6f0b,	// (0x0009488f) main_cset_text2_pane

0xba1d,	// (0x000993a1) area_vitu2_query_pane_g1_ParamLimits

0x77bf,	// (0x00095143) area_vitu2_query_pane_g2_ParamLimits

0xfa3d,	// (0x0009d3c1) area_vitu2_query_pane_g_ParamLimits

0xbaa1,	// (0x00099425) area_vitu2_query_pane_t7_ParamLimits

0xbaa1,	// (0x00099425) area_vitu2_query_pane_t7

0x781a,	// (0x0009519e) bg_button_pane_cp018_ParamLimits

0x7827,	// (0x000951ab) bg_button_pane_cp021_ParamLimits

0x7833,	// (0x000951b7) bg_button_pane_cp022_ParamLimits

0x7833,	// (0x000951b7) bg_vkb2_func_pane_cp08_ParamLimits

0x781a,	// (0x0009519e) bg_vkb2_func_pane_cp06_ParamLimits

0x7827,	// (0x000951ab) bg_vkb2_func_pane_cp07_ParamLimits

0x7842,	// (0x000951c6) input_focus_pane_cp09_ParamLimits

0xd8ab,	// (0x0009b22f) cam6_autofocus_pane_ParamLimits

0xd8ab,	// (0x0009b22f) cam6_autofocus_pane

0x7d48,	// (0x000956cc) cam6_image_uncrop_pane_ParamLimits

0x7d48,	// (0x000956cc) cam6_image_uncrop_pane

0x7d55,	// (0x000956d9) cam6_indi_pane_ParamLimits

0x7d55,	// (0x000956d9) cam6_indi_pane

0x7d6b,	// (0x000956ef) cam6_mode_pane_ParamLimits

0x7d6b,	// (0x000956ef) cam6_mode_pane

0x7d7d,	// (0x00095701) cam6_timer_pane_ParamLimits

0x7d7d,	// (0x00095701) cam6_timer_pane

0x7d89,	// (0x0009570d) cam6_zoom_pane_ParamLimits

0x7d89,	// (0x0009570d) cam6_zoom_pane

0x7d95,	// (0x00095719) cam6_mode_pane_g1_ParamLimits

0x7d95,	// (0x00095719) cam6_mode_pane_g1

0x7da5,	// (0x00095729) cam6_mode_pane_g2_ParamLimits

0x7da5,	// (0x00095729) cam6_mode_pane_g2

0x7db5,	// (0x00095739) cam6_mode_pane_g3_ParamLimits

0x7db5,	// (0x00095739) cam6_mode_pane_g3

0x7dc5,	// (0x00095749) cam6_mode_pane_g4_ParamLimits

0x7dc5,	// (0x00095749) cam6_mode_pane_g4

0x0003,

0xfb25,	// (0x0009d4a9) cam6_mode_pane_g_ParamLimits

0xfb25,	// (0x0009d4a9) cam6_mode_pane_g

0xbcb1,	// (0x00099635) bg_tb_trans_pane_cp08_ParamLimits

0xbcb1,	// (0x00099635) bg_tb_trans_pane_cp08

0xbcbf,	// (0x00099643) cam6_battery_pane_ParamLimits

0xbcbf,	// (0x00099643) cam6_battery_pane

0xbcd5,	// (0x00099659) cam6_indi_pane_g1_ParamLimits

0xbcd5,	// (0x00099659) cam6_indi_pane_g1

0xbce7,	// (0x0009966b) cam6_indi_pane_g2_ParamLimits

0xbce7,	// (0x0009966b) cam6_indi_pane_g2

0xbcf9,	// (0x0009967d) cam6_indi_pane_g3_ParamLimits

0xbcf9,	// (0x0009967d) cam6_indi_pane_g3

0x0002,

0xfb2e,	// (0x0009d4b2) cam6_indi_pane_g_ParamLimits

0xfb2e,	// (0x0009d4b2) cam6_indi_pane_g

0xbd0b,	// (0x0009968f) cam6_indi_pane_t1_ParamLimits

0xbd0b,	// (0x0009968f) cam6_indi_pane_t1

0x69e2,	// (0x00094366) cam6_autofocus_pane_g1

0x69da,	// (0x0009435e) cam6_autofocus_pane_g2

0x69f2,	// (0x00094376) cam6_autofocus_pane_g3

0x69ea,	// (0x0009436e) cam6_autofocus_pane_g4

0x0003,

0xfb35,	// (0x0009d4b9) cam6_autofocus_pane_g

0xbd31,	// (0x000996b5) cam6_timer_pane_g1

0xbd39,	// (0x000996bd) cam6_timer_pane_t1

0xbd47,	// (0x000996cb) cam6_zoom_cont_pane

0xbd4f,	// (0x000996d3) cam6_zoom_pane_g1

0xbd57,	// (0x000996db) cam6_zoom_pane_g2

0x7dd5,	// (0x00095759) cam6_zoom_pane_g3

0x0002,

0xfb3e,	// (0x0009d4c2) cam6_zoom_pane_g

0xa7b6,	// (0x0009813a) cam6_battery_pane_g1

0xa7b6,	// (0x0009813a) cam6_battery_pane_g2

0x0001,

0xf6b2,	// (0x0009d036) cam6_battery_pane_g

0xbd5f,	// (0x000996e3) cam6_zoom_cont_pane_g1

0xbd68,	// (0x000996ec) cam6_zoom_cont_pane_g2

0xbd71,	// (0x000996f5) cam6_zoom_cont_pane_g3

0x0002,

0xfb45,	// (0x0009d4c9) cam6_zoom_cont_pane_g

0x7df2,	// (0x00095776) cam6_mode_pane_cp_ParamLimits

0x7df2,	// (0x00095776) cam6_mode_pane_cp

0x7e04,	// (0x00095788) cam6_zoom_pane_cp_ParamLimits

0x7e04,	// (0x00095788) cam6_zoom_pane_cp

0x7e10,	// (0x00095794) vid6_image_uncrop_cif_pane_ParamLimits

0x7e10,	// (0x00095794) vid6_image_uncrop_cif_pane

0x7e1e,	// (0x000957a2) vid6_image_uncrop_nhd_pane_ParamLimits

0x7e1e,	// (0x000957a2) vid6_image_uncrop_nhd_pane

0x7e2b,	// (0x000957af) vid6_image_uncrop_vga_pane_ParamLimits

0x7e2b,	// (0x000957af) vid6_image_uncrop_vga_pane

0x7e38,	// (0x000957bc) vid6_image_uncrop_wvga_pane_ParamLimits

0x7e38,	// (0x000957bc) vid6_image_uncrop_wvga_pane

0x7e45,	// (0x000957c9) vid6_indi_pane_ParamLimits

0x7e45,	// (0x000957c9) vid6_indi_pane

0xbcb1,	// (0x00099635) bg_tb_trans_pane_cp09_ParamLimits

0xbcb1,	// (0x00099635) bg_tb_trans_pane_cp09

0xbd85,	// (0x00099709) cam6_battery_pane_cp_ParamLimits

0xbd85,	// (0x00099709) cam6_battery_pane_cp

0xbd91,	// (0x00099715) vid6_indi_pane_g1_ParamLimits

0xbd91,	// (0x00099715) vid6_indi_pane_g1

0xbda3,	// (0x00099727) vid6_indi_pane_g2_ParamLimits

0xbda3,	// (0x00099727) vid6_indi_pane_g2

0xbdb5,	// (0x00099739) vid6_indi_pane_g3_ParamLimits

0xbdb5,	// (0x00099739) vid6_indi_pane_g3

0xbdca,	// (0x0009974e) vid6_indi_pane_g4_ParamLimits

0xbdca,	// (0x0009974e) vid6_indi_pane_g4

0xbddf,	// (0x00099763) vid6_indi_pane_g5_ParamLimits

0xbddf,	// (0x00099763) vid6_indi_pane_g5

0x0004,

0xfb4c,	// (0x0009d4d0) vid6_indi_pane_g_ParamLimits

0xfb4c,	// (0x0009d4d0) vid6_indi_pane_g

0xbdf9,	// (0x0009977d) vid6_indi_pane_t1_ParamLimits

0xbdf9,	// (0x0009977d) vid6_indi_pane_t1

0xbe0f,	// (0x00099793) vid6_indi_pane_t2_ParamLimits

0xbe0f,	// (0x00099793) vid6_indi_pane_t2

0xbe37,	// (0x000997bb) vid6_indi_pane_t3_ParamLimits

0xbe37,	// (0x000997bb) vid6_indi_pane_t3

0xbe5f,	// (0x000997e3) vid6_indi_pane_t4_ParamLimits

0xbe5f,	// (0x000997e3) vid6_indi_pane_t4

0x0003,

0xfb57,	// (0x0009d4db) vid6_indi_pane_t_ParamLimits

0xfb57,	// (0x0009d4db) vid6_indi_pane_t

0xbe83,	// (0x00099807) wait_bar_pane_cp08

0x7e5c,	// (0x000957e0) main_cset_text2_pane_t1_ParamLimits

0x7e5c,	// (0x000957e0) main_cset_text2_pane_t1

0x7ddd,	// (0x00095761) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ddd,	// (0x00095761) listscroll_gen_pane_cp06_t1

0xa004,	// (0x00097988) main_cam6_set_pane

0xb493,	// (0x00098e17) bg_tb_trans_pane_cp06_ParamLimits

0xb4a9,	// (0x00098e2d) cam4_indicators_pane_g1_ParamLimits

0xb4b9,	// (0x00098e3d) cam4_indicators_pane_g2_ParamLimits

0xf8cc,	// (0x0009d250) cam4_indicators_pane_g_ParamLimits

0xb4d9,	// (0x00098e5d) cam4_indicators_pane_t1_ParamLimits

0x9ff6,	// (0x0009797a) bg_tb_trans_pane_cp07_ParamLimits

0xb4a9,	// (0x00098e2d) vid4_indicators_pane_g1_ParamLimits

0xb4fb,	// (0x00098e7f) vid4_indicators_pane_g2_ParamLimits

0xb50b,	// (0x00098e8f) vid4_indicators_pane_g3_ParamLimits

0xb51c,	// (0x00098ea0) vid4_indicators_pane_g4_ParamLimits

0xf8de,	// (0x0009d262) vid4_indicators_pane_g_ParamLimits

0xb538,	// (0x00098ebc) vid4_indicators_pane_t1_ParamLimits

0xd816,	// (0x0009b19a) vid4_progress_pane_g1_ParamLimits

0xd825,	// (0x0009b1a9) vid4_progress_pane_g2_ParamLimits

0xd834,	// (0x0009b1b8) vid4_progress_pane_g3_ParamLimits

0xd843,	// (0x0009b1c7) vid4_progress_pane_g4_ParamLimits

0xfa88,	// (0x0009d40c) vid4_progress_pane_g_ParamLimits

0xd85b,	// (0x0009b1df) vid4_progress_pane_t1_ParamLimits

0xd871,	// (0x0009b1f5) vid4_progress_pane_t2_ParamLimits

0xd886,	// (0x0009b20a) vid4_progress_pane_t3_ParamLimits

0xfa93,	// (0x0009d417) vid4_progress_pane_t_ParamLimits

0xd89b,	// (0x0009b21f) wait_bar_pane_cp07_ParamLimits

0x7e77,	// (0x000957fb) main_cam6_set_pane_g2_ParamLimits

0x7e77,	// (0x000957fb) main_cam6_set_pane_g2

0x7e99,	// (0x0009581d) main_cset6_listscroll_pane_ParamLimits

0x7e99,	// (0x0009581d) main_cset6_listscroll_pane

0x7eb3,	// (0x00095837) main_cset6_slider_pane_ParamLimits

0x7eb3,	// (0x00095837) main_cset6_slider_pane

0x7ec9,	// (0x0009584d) main_cset6_text2_pane_ParamLimits

0x7ec9,	// (0x0009584d) main_cset6_text2_pane

0xbe93,	// (0x00099817) main_cset6_text_pane

0xb6c8,	// (0x0009904c) main_cset_list_pane_copy1_ParamLimits

0xb6c8,	// (0x0009904c) main_cset_list_pane_copy1

0xb6d8,	// (0x0009905c) scroll_pane_cp028_copy1

0x7ed7,	// (0x0009585b) cset_list_set_pane_copy1

0x7ee9,	// (0x0009586d) aid_position_infowindow_above_copy1

0x7ef1,	// (0x00095875) aid_position_infowindow_below_copy1

0x7ef9,	// (0x0009587d) cset_list_set_pane_g1_copy1

0x7f01,	// (0x00095885) cset_list_set_pane_g3_copy1_ParamLimits

0x7f01,	// (0x00095885) cset_list_set_pane_g3_copy1

0x7f10,	// (0x00095894) cset_list_set_pane_t1_copy1_ParamLimits

0x7f10,	// (0x00095894) cset_list_set_pane_t1_copy1

0x47a2,	// (0x00092126) list_highlight_pane_cp021_copy1_ParamLimits

0x47a2,	// (0x00092126) list_highlight_pane_cp021_copy1

0xbe9b,	// (0x0009981f) cset6_slider_pane_ParamLimits

0xbe9b,	// (0x0009981f) cset6_slider_pane

0xbec7,	// (0x0009984b) main_cset6_slider_pane_g1_ParamLimits

0xbec7,	// (0x0009984b) main_cset6_slider_pane_g1

0x7f25,	// (0x000958a9) main_cset6_slider_pane_g2_ParamLimits

0x7f25,	// (0x000958a9) main_cset6_slider_pane_g2

0xb6ed,	// (0x00099071) main_cset6_slider_pane_g3_ParamLimits

0xb6ed,	// (0x00099071) main_cset6_slider_pane_g3

0x6fd0,	// (0x00094954) main_cset6_slider_pane_g4_ParamLimits

0x6fd0,	// (0x00094954) main_cset6_slider_pane_g4

0x7018,	// (0x0009499c) main_cset6_slider_pane_g5_ParamLimits

0x7018,	// (0x0009499c) main_cset6_slider_pane_g5

0xb6ed,	// (0x00099071) main_cset6_slider_pane_g7_ParamLimits

0xb6ed,	// (0x00099071) main_cset6_slider_pane_g7

0xb6f9,	// (0x0009907d) main_cset6_slider_pane_g8_ParamLimits

0xb6f9,	// (0x0009907d) main_cset6_slider_pane_g8

0x6fb8,	// (0x0009493c) main_cset6_slider_pane_g9_ParamLimits

0x6fb8,	// (0x0009493c) main_cset6_slider_pane_g9

0x6fc4,	// (0x00094948) main_cset6_slider_pane_g10_ParamLimits

0x6fc4,	// (0x00094948) main_cset6_slider_pane_g10

0x6fd0,	// (0x00094954) main_cset6_slider_pane_g11_ParamLimits

0x6fd0,	// (0x00094954) main_cset6_slider_pane_g11

0x6fdc,	// (0x00094960) main_cset6_slider_pane_g12_ParamLimits

0x6fdc,	// (0x00094960) main_cset6_slider_pane_g12

0x6fe8,	// (0x0009496c) main_cset6_slider_pane_g13_ParamLimits

0x6fe8,	// (0x0009496c) main_cset6_slider_pane_g13

0x6ff4,	// (0x00094978) main_cset6_slider_pane_g14_ParamLimits

0x6ff4,	// (0x00094978) main_cset6_slider_pane_g14

0x7f4d,	// (0x000958d1) main_cset6_slider_pane_g15_ParamLimits

0x7f4d,	// (0x000958d1) main_cset6_slider_pane_g15

0x7018,	// (0x0009499c) main_cset6_slider_pane_g16_ParamLimits

0x7018,	// (0x0009499c) main_cset6_slider_pane_g16

0x7024,	// (0x000949a8) main_cset6_slider_pane_g17_ParamLimits

0x7024,	// (0x000949a8) main_cset6_slider_pane_g17

0x0011,

0xfb60,	// (0x0009d4e4) main_cset6_slider_pane_g_ParamLimits

0xfb60,	// (0x0009d4e4) main_cset6_slider_pane_g

0xbeef,	// (0x00099873) main_cset6_slider_pane_t1_ParamLimits

0xbeef,	// (0x00099873) main_cset6_slider_pane_t1

0xbf30,	// (0x000998b4) main_cset6_slider_pane_t2_ParamLimits

0xbf30,	// (0x000998b4) main_cset6_slider_pane_t2

0xbf5b,	// (0x000998df) main_cset6_slider_pane_t3_ParamLimits

0xbf5b,	// (0x000998df) main_cset6_slider_pane_t3

0x7f65,	// (0x000958e9) main_cset6_slider_pane_t4_ParamLimits

0x7f65,	// (0x000958e9) main_cset6_slider_pane_t4

0x7f90,	// (0x00095914) main_cset6_slider_pane_t5_ParamLimits

0x7f90,	// (0x00095914) main_cset6_slider_pane_t5

0xbf86,	// (0x0009990a) main_cset6_slider_pane_t7_ParamLimits

0xbf86,	// (0x0009990a) main_cset6_slider_pane_t7

0x7fbb,	// (0x0009593f) main_cset6_slider_pane_t8_ParamLimits

0x7fbb,	// (0x0009593f) main_cset6_slider_pane_t8

0x7fdf,	// (0x00095963) main_cset6_slider_pane_t9_ParamLimits

0x7fdf,	// (0x00095963) main_cset6_slider_pane_t9

0x8003,	// (0x00095987) main_cset6_slider_pane_t10_ParamLimits

0x8003,	// (0x00095987) main_cset6_slider_pane_t10

0x8027,	// (0x000959ab) main_cset6_slider_pane_t11_ParamLimits

0x8027,	// (0x000959ab) main_cset6_slider_pane_t11

0xbfbc,	// (0x00099940) main_cset6_slider_pane_t14_ParamLimits

0xbfbc,	// (0x00099940) main_cset6_slider_pane_t14

0xbff5,	// (0x00099979) main_cset6_slider_pane_t15_ParamLimits

0xbff5,	// (0x00099979) main_cset6_slider_pane_t15

0x000b,

0xfb85,	// (0x0009d509) main_cset6_slider_pane_t_ParamLimits

0xfb85,	// (0x0009d509) main_cset6_slider_pane_t

0xc02e,	// (0x000999b2) cset_slider_pane_g1_copy1

0xc037,	// (0x000999bb) cset_slider_pane_g2_copy1

0xc040,	// (0x000999c4) cset_slider_pane_g3_copy1

0x0baa,	// (0x0008e52e) bg_popup_sub_pane_cp011_copy1

0xb84f,	// (0x000991d3) main_cset_text_pane_g1_copy1

0xb857,	// (0x000991db) main_cset_text_pane_t1_copy1

0xb865,	// (0x000991e9) main_cset_text_pane_t2_copy1

0xb873,	// (0x000991f7) main_cset_text_pane_t3_copy1

0xb881,	// (0x00099205) main_cset_text_pane_t4_copy1

0xb88f,	// (0x00099213) main_cset_text_pane_t5_copy1

0xb89d,	// (0x00099221) main_cset_text_pane_t6_copy1

0xb8ab,	// (0x0009922f) main_cset_text_pane_t7_copy1

0x811c,	// (0x00095aa0) main_cset_text2_pane_t1_copy1

0x9ff6,	// (0x0009797a) main_ncimui_pane

0x49be,	// (0x00092342) popup_query_ncimui_window_ParamLimits

0x49be,	// (0x00092342) popup_query_ncimui_window

0xaa86,	// (0x0009840a) field_cale_ev2_pane_g4_ParamLimits

0xaa86,	// (0x0009840a) field_cale_ev2_pane_g4

0x63aa,	// (0x00093d2e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x63aa,	// (0x00093d2e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf866,	// (0x0009d1ea) cell_video_dialer_keypad_pane_g_ParamLimits

0xf866,	// (0x0009d1ea) cell_video_dialer_keypad_pane_g

0x63c2,	// (0x00093d46) cell_video_dialer_keypad_pane_t1

0x0baa,	// (0x0008e52e) bg_popup_window_pane_cp012

0xe595,	// (0x0009bf19) heading_pane_cp06

0xc073,	// (0x000999f7) ncim_query_content_pane

0x0baa,	// (0x0008e52e) bg_popup_heading_pane_cp01

0xc07b,	// (0x000999ff) ncim_heading_pane_t1

0xc089,	// (0x00099a0d) ncim_indicator_popup_pane

0xc09b,	// (0x00099a1f) ncim_query_button_pane

0xc0af,	// (0x00099a33) ncim_query_content_pane_t1

0xc0c1,	// (0x00099a45) ncim_query_content_pane_t2

0x0005,

0xfbc9,	// (0x0009d54d) ncim_query_content_pane_t

0xc0fb,	// (0x00099a7f) ncim_query_list_pane

0xc10d,	// (0x00099a91) ncim_query_popup_pane

0xc089,	// (0x00099a0d) ncim_indicator_popup_pane_ParamLimits

0x825b,	// (0x00095bdf) ncim_query_content_pane_g1_ParamLimits

0x825b,	// (0x00095bdf) ncim_query_content_pane_g1

0xc0af,	// (0x00099a33) ncim_query_content_pane_t1_ParamLimits

0xc0c1,	// (0x00099a45) ncim_query_content_pane_t2_ParamLimits

0x8267,	// (0x00095beb) ncim_query_content_pane_t3_ParamLimits

0x8267,	// (0x00095beb) ncim_query_content_pane_t3

0x828f,	// (0x00095c13) ncim_query_content_pane_t4_ParamLimits

0x828f,	// (0x00095c13) ncim_query_content_pane_t4

0x82b7,	// (0x00095c3b) ncim_query_content_pane_t5_ParamLimits

0x82b7,	// (0x00095c3b) ncim_query_content_pane_t5

0xc0d3,	// (0x00099a57) ncim_query_content_pane_t6_ParamLimits

0xc0d3,	// (0x00099a57) ncim_query_content_pane_t6

0xfbc9,	// (0x0009d54d) ncim_query_content_pane_t_ParamLimits

0xc0fb,	// (0x00099a7f) ncim_query_list_pane_ParamLimits

0xc10d,	// (0x00099a91) ncim_query_popup_pane_ParamLimits

0xc121,	// (0x00099aa5) wait_bar_pane_cp04

0x0baa,	// (0x0008e52e) input_focus_pane_cp011

0xc129,	// (0x00099aad) ncim_query_popup_pane_t1

0xc137,	// (0x00099abb) ncim_list_query_list_pane_ParamLimits

0xc137,	// (0x00099abb) ncim_list_query_list_pane

0x0baa,	// (0x0008e52e) bg_button_pane_cp027

0xc14a,	// (0x00099ace) ncim_query_button_pane_g1

0x0baa,	// (0x0008e52e) list_highlight_pane_cp012

0xc154,	// (0x00099ad8) ncim_list_query_list_pane_g1

0xc15c,	// (0x00099ae0) ncim_list_query_list_pane_t1

0xb4c9,	// (0x00098e4d) cam4_indicators_pane_g3_ParamLimits

0xb4c9,	// (0x00098e4d) cam4_indicators_pane_g3

0xb528,	// (0x00098eac) vid4_indicators_pane_g5_ParamLimits

0xb528,	// (0x00098eac) vid4_indicators_pane_g5

0xd84f,	// (0x0009b1d3) vid4_progress_pane_g5_ParamLimits

0xd84f,	// (0x0009b1d3) vid4_progress_pane_g5

0x814b,	// (0x00095acf) main_ncimui_pane_g1

0x81b1,	// (0x00095b35) ncimui_group_query_pane_ParamLimits

0x81b1,	// (0x00095b35) ncimui_group_query_pane

0x81f9,	// (0x00095b7d) ncimui_list_pane_ParamLimits

0x81f9,	// (0x00095b7d) ncimui_list_pane

0x821e,	// (0x00095ba2) ncimui_text_pane_ParamLimits

0x821e,	// (0x00095ba2) ncimui_text_pane

0x82df,	// (0x00095c63) ncimui_text_pane_t1_ParamLimits

0x82df,	// (0x00095c63) ncimui_text_pane_t1

0xc173,	// (0x00099af7) ncimui_list_single_graphic_pane_ParamLimits

0xc173,	// (0x00099af7) ncimui_list_single_graphic_pane

0x82fd,	// (0x00095c81) ncimui_query_pane_ParamLimits

0x82fd,	// (0x00095c81) ncimui_query_pane

0x0baa,	// (0x0008e52e) list_highlight_pane_cp013

0xc183,	// (0x00099b07) ncim_list_query_list_pane_t1_copy1

0xc191,	// (0x00099b15) ncim_list_single_graphic_pane_g1

0xc199,	// (0x00099b1d) ncim_query_button_pane_cp01

0xc1a5,	// (0x00099b29) ncim_query_entry_pane_ParamLimits

0xc1a5,	// (0x00099b29) ncim_query_entry_pane

0xc1b8,	// (0x00099b3c) ncimui_query_pane_g1

0xc1c4,	// (0x00099b48) ncimui_query_pane_t1_ParamLimits

0xc1c4,	// (0x00099b48) ncimui_query_pane_t1

0x47a2,	// (0x00092126) input_focus_pane_cp012

0xc1dd,	// (0x00099b61) ncim_query_entry_pane_t1

0xdcae,	// (0x0009b632) main_im_pane_ParamLimits

0x9ff6,	// (0x0009797a) main_mobtv_pane_ParamLimits

0x9ff6,	// (0x0009797a) main_mobtv_pane

0x6fb8,	// (0x0009493c) main_cset6_slider_pane_g18_ParamLimits

0x6fb8,	// (0x0009493c) main_cset6_slider_pane_g18

0x6fe8,	// (0x0009496c) main_cset6_slider_pane_g19_ParamLimits

0x6fe8,	// (0x0009496c) main_cset6_slider_pane_g19

0xc1ef,	// (0x00099b73) bg_main_mobtv_pane_ParamLimits

0xc1ef,	// (0x00099b73) bg_main_mobtv_pane

0x830d,	// (0x00095c91) main_mobtv_info_pane

0x8316,	// (0x00095c9a) main_mobtv_loading_pane_ParamLimits

0x8316,	// (0x00095c9a) main_mobtv_loading_pane

0xc1fd,	// (0x00099b81) main_mobtv_pg_channel_list_pane

0xc207,	// (0x00099b8b) main_mobtv_pg_hdr_pane

0x8323,	// (0x00095ca7) main_mobtv_programe_curr_pane_ParamLimits

0x8323,	// (0x00095ca7) main_mobtv_programe_curr_pane

0x8330,	// (0x00095cb4) main_mobtv_programe_next_pane_ParamLimits

0x8330,	// (0x00095cb4) main_mobtv_programe_next_pane

0xc210,	// (0x00099b94) popup_mobtv_noti_window

0xa7b6,	// (0x0009813a) main_tv_pg_hdr_pane_g1

0xc218,	// (0x00099b9c) main_tv_pg_hdr_pane_g2

0xc220,	// (0x00099ba4) main_tv_pg_hdr_pane_g3

0xc228,	// (0x00099bac) main_tv_pg_hdr_pane_g4

0xc230,	// (0x00099bb4) main_tv_pg_hdr_pane_g5

0xc238,	// (0x00099bbc) main_tv_pg_hdr_pane_g6

0xc240,	// (0x00099bc4) main_tv_pg_hdr_pane_g7

0xc248,	// (0x00099bcc) main_tv_pg_hdr_pane_g8

0xc250,	// (0x00099bd4) main_tv_pg_hdr_pane_g9

0xc258,	// (0x00099bdc) main_tv_pg_hdr_pane_g10

0xc262,	// (0x00099be6) main_tv_pg_hdr_pane_g11

0x000a,

0xfbd6,	// (0x0009d55a) main_tv_pg_hdr_pane_g

0xc26c,	// (0x00099bf0) main_tv_pg_hdr_pane_t1

0xc27a,	// (0x00099bfe) main_tv_pg_hdr_pane_t2

0xc288,	// (0x00099c0c) main_tv_pg_hdr_pane_t3

0xc296,	// (0x00099c1a) main_tv_pg_hdr_pane_t4

0xc2a4,	// (0x00099c28) main_tv_pg_hdr_pane_t5

0x0004,

0xfbed,	// (0x0009d571) main_tv_pg_hdr_pane_t

0xc2b2,	// (0x00099c36) single_mobtv_pg_channel_pane_ParamLimits

0xc2b2,	// (0x00099c36) single_mobtv_pg_channel_pane

0xc2c4,	// (0x00099c48) single_mobtv_pg_channel_table_pane

0xc2cd,	// (0x00099c51) single_mobtv_pg_channel_thumb_pane

0xc2d6,	// (0x00099c5a) single_tv_pg_channel_pane_g1

0xc2df,	// (0x00099c63) single_tv_pg_channel_pane_g2

0x0001,

0xfbf8,	// (0x0009d57c) single_tv_pg_channel_pane_g

0xa9e5,	// (0x00098369) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa9e5,	// (0x00098369) bg_single_mobtv_pg_channel_thumb_pane

0xc2e8,	// (0x00099c6c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc2e8,	// (0x00099c6c) single_mobtv_pg_channel_thumb_pane_g1

0xc2f6,	// (0x00099c7a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc2f6,	// (0x00099c7a) single_mobtv_pg_channel_thumb_pane_g2

0xc302,	// (0x00099c86) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc302,	// (0x00099c86) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbfd,	// (0x0009d581) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbfd,	// (0x0009d581) single_mobtv_pg_channel_thumb_pane_g

0xc30e,	// (0x00099c92) single_mobtv_pg_channel_thumb_pane_t1

0xc31c,	// (0x00099ca0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc04,	// (0x0009d588) single_mobtv_pg_channel_thumb_pane_t

0xa7b6,	// (0x0009813a) bg_single_mobtv_pg_channel_table_pane_g1

0xa7b6,	// (0x0009813a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6b2,	// (0x0009d036) bg_single_mobtv_pg_channel_table_pane_g

0xc32a,	// (0x00099cae) single_mobtv_pg_channel_table_pane_t1

0xc338,	// (0x00099cbc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc09,	// (0x0009d58d) single_mobtv_pg_channel_table_pane_t

0x8345,	// (0x00095cc9) main_mobtv_info_pane_g1_ParamLimits

0x8345,	// (0x00095cc9) main_mobtv_info_pane_g1

0x8361,	// (0x00095ce5) main_mobtv_info_pane_t1_ParamLimits

0x8361,	// (0x00095ce5) main_mobtv_info_pane_t1

0x83c7,	// (0x00095d4b) main_mobtv_info_pane_t2_ParamLimits

0x83c7,	// (0x00095d4b) main_mobtv_info_pane_t2

0x0002,

0xfc13,	// (0x0009d597) main_mobtv_info_pane_t_ParamLimits

0xfc13,	// (0x0009d597) main_mobtv_info_pane_t

0x844a,	// (0x00095dce) wait_bar_pane_cp05

0x845a,	// (0x00095dde) main_mobtv_loading_pane_g1_ParamLimits

0x845a,	// (0x00095dde) main_mobtv_loading_pane_g1

0x846b,	// (0x00095def) main_mobtv_loading_pane_g2_ParamLimits

0x846b,	// (0x00095def) main_mobtv_loading_pane_g2

0x8477,	// (0x00095dfb) main_mobtv_loading_pane_g3_ParamLimits

0x8477,	// (0x00095dfb) main_mobtv_loading_pane_g3

0x0002,

0xfc1a,	// (0x0009d59e) main_mobtv_loading_pane_g_ParamLimits

0xfc1a,	// (0x0009d59e) main_mobtv_loading_pane_g

0xc346,	// (0x00099cca) main_mobtv_loading_pane_t1_ParamLimits

0xc346,	// (0x00099cca) main_mobtv_loading_pane_t1

0xc35e,	// (0x00099ce2) main_mobtv_loading_pane_t2_ParamLimits

0xc35e,	// (0x00099ce2) main_mobtv_loading_pane_t2

0x0001,

0xfc21,	// (0x0009d5a5) main_mobtv_loading_pane_t_ParamLimits

0xfc21,	// (0x0009d5a5) main_mobtv_loading_pane_t

0x8488,	// (0x00095e0c) wait_bar_pane_cp06_ParamLimits

0x8488,	// (0x00095e0c) wait_bar_pane_cp06

0xc382,	// (0x00099d06) main_mobtv_programe_curr_pane_t1

0xc390,	// (0x00099d14) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc26,	// (0x0009d5aa) main_mobtv_programe_curr_pane_t

0xc39e,	// (0x00099d22) main_mobtv_programe_next_pane_t1

0xc3ac,	// (0x00099d30) main_mobtv_programe_next_pane_t2

0xc3ba,	// (0x00099d3e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc2b,	// (0x0009d5af) main_mobtv_programe_next_pane_t

0x0baa,	// (0x0008e52e) bg_popup_mobtv_noti_window_pane

0xc3c8,	// (0x00099d4c) popup_mobtv_noti_window_g1

0xc3d0,	// (0x00099d54) popup_mobtv_noti_window_t1

0xc3de,	// (0x00099d62) popup_mobtv_noti_window_t2

0x0001,

0xfc32,	// (0x0009d5b6) popup_mobtv_noti_window_t

0xa7b6,	// (0x0009813a) bg_popup_mobtv_noti_window_pane_g1

0xa004,	// (0x00097988) sc_clock_pane

0xa004,	// (0x00097988) main_fs_bigclock_pane

0x7bc5,	// (0x00095549) blid2_tripm_pane_t4_ParamLimits

0x7bc5,	// (0x00095549) blid2_tripm_pane_t4

0x8497,	// (0x00095e1b) sc_clock_pane_g1_ParamLimits

0x8497,	// (0x00095e1b) sc_clock_pane_g1

0x84a9,	// (0x00095e2d) sc_clock_pane_t1_ParamLimits

0x84a9,	// (0x00095e2d) sc_clock_pane_t1

0x84cb,	// (0x00095e4f) sc_clock_pane_t2_ParamLimits

0x84cb,	// (0x00095e4f) sc_clock_pane_t2

0x84e1,	// (0x00095e65) sc_clock_pane_t3_ParamLimits

0x84e1,	// (0x00095e65) sc_clock_pane_t3

0x0004,

0xfc37,	// (0x0009d5bb) sc_clock_pane_t_ParamLimits

0xfc37,	// (0x0009d5bb) sc_clock_pane_t

0x9474,	// (0x00096df8) main_fs_bigclock_indicator_pane_ParamLimits

0x9474,	// (0x00096df8) main_fs_bigclock_indicator_pane

0x857d,	// (0x00095f01) main_fs_bigclock_pane_g1_ParamLimits

0x857d,	// (0x00095f01) main_fs_bigclock_pane_g1

0x9480,	// (0x00096e04) main_fs_bigclock_pane_t1_ParamLimits

0x9480,	// (0x00096e04) main_fs_bigclock_pane_t1

0x9492,	// (0x00096e16) main_fs_bigclock_pane_t2_ParamLimits

0x9492,	// (0x00096e16) main_fs_bigclock_pane_t2

0x94a4,	// (0x00096e28) main_fs_bigclock_pane_t3_ParamLimits

0x94a4,	// (0x00096e28) main_fs_bigclock_pane_t3

0x0002,

0xfe45,	// (0x0009d7c9) main_fs_bigclock_pane_t_ParamLimits

0xfe45,	// (0x0009d7c9) main_fs_bigclock_pane_t

0xcfbd,	// (0x0009a941) main_fs_bigclock_indicator_pane_g1

0xc0a3,	// (0x00099a27) ncim_query_content_pane_g2_ParamLimits

0xc0a3,	// (0x00099a27) ncim_query_content_pane_g2

0x0001,

0xfbc4,	// (0x0009d548) ncim_query_content_pane_g_ParamLimits

0xfbc4,	// (0x0009d548) ncim_query_content_pane_g

0x84f8,	// (0x00095e7c) sc_clock_pane_t4_ParamLimits

0x84f8,	// (0x00095e7c) sc_clock_pane_t4

0x9ff6,	// (0x0009797a) main_radioblah_pane

0xb3f1,	// (0x00098d75) cell_call4_button_pane_t1_copy1_ParamLimits

0xb3f1,	// (0x00098d75) cell_call4_button_pane_t1_copy1

0x8163,	// (0x00095ae7) main_ncimui_pane_t1_ParamLimits

0x8163,	// (0x00095ae7) main_ncimui_pane_t1

0x817d,	// (0x00095b01) main_ncimui_pane_t2_ParamLimits

0x817d,	// (0x00095b01) main_ncimui_pane_t2

0x0002,

0xfbbd,	// (0x0009d541) main_ncimui_pane_t_ParamLimits

0xfbbd,	// (0x0009d541) main_ncimui_pane_t

0xc51f,	// (0x00099ea3) main_radioblah_anim_pane_ParamLimits

0xc51f,	// (0x00099ea3) main_radioblah_anim_pane

0xc530,	// (0x00099eb4) main_radioblah_info_pane_ParamLimits

0xc530,	// (0x00099eb4) main_radioblah_info_pane

0xc544,	// (0x00099ec8) main_radioblah_pane_t1_ParamLimits

0xc544,	// (0x00099ec8) main_radioblah_pane_t1

0xc560,	// (0x00099ee4) main_radioblah_pane_t2_ParamLimits

0xc560,	// (0x00099ee4) main_radioblah_pane_t2

0x0003,

0xfc58,	// (0x0009d5dc) main_radioblah_pane_t_ParamLimits

0xfc58,	// (0x0009d5dc) main_radioblah_pane_t

0x85c7,	// (0x00095f4b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x85c7,	// (0x00095f4b) main_radioblah_rocker_ctrl_pane

0xc5a8,	// (0x00099f2c) main_radioblah_info_pane_t1_ParamLimits

0xc5a8,	// (0x00099f2c) main_radioblah_info_pane_t1

0x861b,	// (0x00095f9f) main_radioblah_info_pane_t2_ParamLimits

0x861b,	// (0x00095f9f) main_radioblah_info_pane_t2

0x0003,

0xfc61,	// (0x0009d5e5) main_radioblah_info_pane_t_ParamLimits

0xfc61,	// (0x0009d5e5) main_radioblah_info_pane_t

0xa7b6,	// (0x0009813a) main_radioblah_rocker_ctrl_pane_g1

0x86c9,	// (0x0009604d) main_radioblah_rocker_ctrl_pane_g2

0x86d1,	// (0x00096055) main_radioblah_rocker_ctrl_pane_g3

0x86d9,	// (0x0009605d) main_radioblah_rocker_ctrl_pane_g4

0x86e1,	// (0x00096065) main_radioblah_rocker_ctrl_pane_g5

0x86e9,	// (0x0009606d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc6a,	// (0x0009d5ee) main_radioblah_rocker_ctrl_pane_g

0x811c,	// (0x00095aa0) main_cset_text2_pane_t1_copy1_ParamLimits

0xb479,	// (0x00098dfd) cam4_image_uncrop_qvga_pane

0xb4f3,	// (0x00098e77) vid4_image_uncrop_qcif_pane

0xd8ab,	// (0x0009b22f) cam6_image_uncrop_qvga_pane_ParamLimits

0xd8ab,	// (0x0009b22f) cam6_image_uncrop_qvga_pane

0xbd79,	// (0x000996fd) vid6_image_uncrop_qcif_pane_ParamLimits

0xbd79,	// (0x000996fd) vid6_image_uncrop_qcif_pane

0x0baa,	// (0x0008e52e) bg_popup_preview_window_pane_cp03

0xc049,	// (0x000999cd) list_cset_text2_pane

0xc051,	// (0x000999d5) main_cset6_text2_pane_g1

0xc059,	// (0x000999dd) main_cset6_text2_pane_t1

0x86f1,	// (0x00096075) list_cset_text2_pane_t1_ParamLimits

0x86f1,	// (0x00096075) list_cset_text2_pane_t1

0x9ff6,	// (0x0009797a) main_radioblah_pane_ParamLimits

0x8438,	// (0x00095dbc) main_mobtv_info_pane_t3_ParamLimits

0x8438,	// (0x00095dbc) main_mobtv_info_pane_t3

0x85b5,	// (0x00095f39) main_radioblah_pane_g1

0x85ef,	// (0x00095f73) main_radioblah_info_pane_g1

0x866e,	// (0x00095ff2) main_radioblah_info_pane_t3_ParamLimits

0x866e,	// (0x00095ff2) main_radioblah_info_pane_t3

0x29d8,	// (0x0009035c) highlight_cell_cale_month_pane_ParamLimits

0x29d8,	// (0x0009035c) highlight_cell_cale_month_pane

0xa004,	// (0x00097988) main_phob_fisheye_pane

0xab35,	// (0x000984b9) scroll_pane_cp0031_ParamLimits

0xab35,	// (0x000984b9) scroll_pane_cp0031

0xbe83,	// (0x00099807) wait_bar_pane_cp08_ParamLimits

0x7ed7,	// (0x0009585b) cset_list_set_pane_copy1_ParamLimits

0xc5e2,	// (0x00099f66) highlight_cell_cale_month_pane_g1

0x870a,	// (0x0009608e) highlight_cell_cale_month_pane_t1

0xc5ea,	// (0x00099f6e) list_gen_pane_cp01

0xb6d8,	// (0x0009905c) scroll_pane_01

0x8718,	// (0x0009609c) list_single_double_fisheye_pane

0x8721,	// (0x000960a5) list_double_fisheye_pane_g1_ParamLimits

0x8721,	// (0x000960a5) list_double_fisheye_pane_g1

0x872d,	// (0x000960b1) list_double_fisheye_pane_g2_ParamLimits

0x872d,	// (0x000960b1) list_double_fisheye_pane_g2

0x8741,	// (0x000960c5) list_double_fisheye_pane_g3_ParamLimits

0x8741,	// (0x000960c5) list_double_fisheye_pane_g3

0x0004,

0xfc77,	// (0x0009d5fb) list_double_fisheye_pane_g_ParamLimits

0xfc77,	// (0x0009d5fb) list_double_fisheye_pane_g

0x876a,	// (0x000960ee) list_double_fisheye_pane_t1_ParamLimits

0x876a,	// (0x000960ee) list_double_fisheye_pane_t1

0x8785,	// (0x00096109) list_double_fisheye_pane_t2_ParamLimits

0x8785,	// (0x00096109) list_double_fisheye_pane_t2

0x0001,

0xfc82,	// (0x0009d606) list_double_fisheye_pane_t_ParamLimits

0xfc82,	// (0x0009d606) list_double_fisheye_pane_t

0xa004,	// (0x00097988) main_call5_pane

0x8521,	// (0x00095ea5) sc_swipe_pane_ParamLimits

0x8521,	// (0x00095ea5) sc_swipe_pane

0x87b8,	// (0x0009613c) call5_image_pane_ParamLimits

0x87b8,	// (0x0009613c) call5_image_pane

0x87cd,	// (0x00096151) call5_swipe_1_pane_ParamLimits

0x87cd,	// (0x00096151) call5_swipe_1_pane

0x87de,	// (0x00096162) call5_swipe_2_pane_ParamLimits

0x87de,	// (0x00096162) call5_swipe_2_pane

0x8803,	// (0x00096187) popup_call5_audio_first_window_ParamLimits

0x8803,	// (0x00096187) popup_call5_audio_first_window

0xa9e5,	// (0x00098369) call5_swipe_1_pane_g1_ParamLimits

0xa9e5,	// (0x00098369) call5_swipe_1_pane_g1

0xc5f3,	// (0x00099f77) call5_swipe_1_pane_g2_ParamLimits

0xc5f3,	// (0x00099f77) call5_swipe_1_pane_g2

0x0001,

0xfc87,	// (0x0009d60b) call5_swipe_1_pane_g_ParamLimits

0xfc87,	// (0x0009d60b) call5_swipe_1_pane_g

0xc5ff,	// (0x00099f83) call5_swipe_1_pane_t1_ParamLimits

0xc5ff,	// (0x00099f83) call5_swipe_1_pane_t1

0xa9e5,	// (0x00098369) call5_swipe_2_pane_g1_ParamLimits

0xa9e5,	// (0x00098369) call5_swipe_2_pane_g1

0xc614,	// (0x00099f98) call5_swipe_2_pane_g2_ParamLimits

0xc614,	// (0x00099f98) call5_swipe_2_pane_g2

0x0001,

0xfc8c,	// (0x0009d610) call5_swipe_2_pane_g_ParamLimits

0xfc8c,	// (0x0009d610) call5_swipe_2_pane_g

0xc620,	// (0x00099fa4) call5_swipe_2_pane_t1_ParamLimits

0xc620,	// (0x00099fa4) call5_swipe_2_pane_t1

0xc635,	// (0x00099fb9) sc_swipe_pane_g1_ParamLimits

0xc635,	// (0x00099fb9) sc_swipe_pane_g1

0xc642,	// (0x00099fc6) sc_swipe_pane_g2_ParamLimits

0xc642,	// (0x00099fc6) sc_swipe_pane_g2

0x0001,

0xfc91,	// (0x0009d615) sc_swipe_pane_g_ParamLimits

0xfc91,	// (0x0009d615) sc_swipe_pane_g

0xc64e,	// (0x00099fd2) sc_swipe_pane_t1_ParamLimits

0xc64e,	// (0x00099fd2) sc_swipe_pane_t1

0xa004,	// (0x00097988) main_cmail_launcher_pane

0x8812,	// (0x00096196) aid_size_cell_cmail_l_ParamLimits

0x8812,	// (0x00096196) aid_size_cell_cmail_l

0x882b,	// (0x000961af) grid_cmail_l_pane_ParamLimits

0x882b,	// (0x000961af) grid_cmail_l_pane

0x8840,	// (0x000961c4) cell_cmail_l_pane_ParamLimits

0x8840,	// (0x000961c4) cell_cmail_l_pane

0x8862,	// (0x000961e6) cell_cmail_l_pane_g1_ParamLimits

0x8862,	// (0x000961e6) cell_cmail_l_pane_g1

0x8872,	// (0x000961f6) cell_cmail_l_pane_t1_ParamLimits

0x8872,	// (0x000961f6) cell_cmail_l_pane_t1

0x8888,	// (0x0009620c) cell_cmail_l_pane_t2_ParamLimits

0x8888,	// (0x0009620c) cell_cmail_l_pane_t2

0x0001,

0xfc96,	// (0x0009d61a) cell_cmail_l_pane_t_ParamLimits

0xfc96,	// (0x0009d61a) cell_cmail_l_pane_t

0x47a2,	// (0x00092126) grid_highlight_pane_cp018_ParamLimits

0x47a2,	// (0x00092126) grid_highlight_pane_cp018

0x0c68,	// (0x0008e5ec) main2_pane_ParamLimits

0x0c68,	// (0x0008e5ec) main2_pane

0xdd59,	// (0x0009b6dd) popup_sp_fs_action_menu_bg_pane_g1

0xdd61,	// (0x0009b6e5) popup_sp_fs_action_menu_bg_pane_g2

0xdd69,	// (0x0009b6ed) popup_sp_fs_action_menu_bg_pane_g3

0xdd71,	// (0x0009b6f5) popup_sp_fs_action_menu_bg_pane_g4

0xdd79,	// (0x0009b6fd) popup_sp_fs_action_menu_bg_pane_g5

0xdd81,	// (0x0009b705) popup_sp_fs_action_menu_bg_pane_g6

0xdd89,	// (0x0009b70d) popup_sp_fs_action_menu_bg_pane_g7

0xdd91,	// (0x0009b715) popup_sp_fs_action_menu_bg_pane_g8

0xdd99,	// (0x0009b71d) popup_sp_fs_action_menu_bg_pane_g9

0xdda1,	// (0x0009b725) popup_sp_fs_action_menu_bg_pane_g10

0xdda1,	// (0x0009b725) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0009caf3) popup_sp_fs_action_menu_bg_pane_g

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t3_g3_g1

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_t3_g3_g2

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0009cba1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0009cba1) list_medium_line_x2_t3_g3_g

0x1b85,	// (0x0008f509) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1b85,	// (0x0008f509) list_medium_line_x2_t3_g3_t1

0x1b9a,	// (0x0008f51e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b9a,	// (0x0008f51e) list_medium_line_x2_t3_g3_t2

0x1bac,	// (0x0008f530) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1bac,	// (0x0008f530) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0009cba8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0009cba8) list_medium_line_x2_t3_g3_t

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t3_g2_g1

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0009cbaf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0009cbaf) list_medium_line_x2_t3_g2_g

0x1bc1,	// (0x0008f545) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1bc1,	// (0x0008f545) list_medium_line_x2_t3_g2_t1

0x1bd7,	// (0x0008f55b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1bd7,	// (0x0008f55b) list_medium_line_x2_t3_g2_t2

0x1bac,	// (0x0008f530) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1bac,	// (0x0008f530) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0009cbb4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0009cbb4) list_medium_line_x2_t3_g2_t

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t4_g4_g1

0x1be9,	// (0x0008f56d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1be9,	// (0x0008f56d) list_medium_line_x2_t4_g4_g2

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_t4_g4_g3

0x1bf5,	// (0x0008f579) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1bf5,	// (0x0008f579) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0009cbbb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0009cbbb) list_medium_line_x2_t4_g4_g

0x1c01,	// (0x0008f585) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1c01,	// (0x0008f585) list_medium_line_x2_t4_g4_t1

0x1c18,	// (0x0008f59c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1c18,	// (0x0008f59c) list_medium_line_x2_t4_g4_t2

0x1c2d,	// (0x0008f5b1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1c2d,	// (0x0008f5b1) list_medium_line_x2_t4_g4_t3

0x1c3f,	// (0x0008f5c3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1c3f,	// (0x0008f5c3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0009cbc4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0009cbc4) list_medium_line_x2_t4_g4_t

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t2_g4_g1

0x1be9,	// (0x0008f56d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1be9,	// (0x0008f56d) list_medium_line_x2_t2_g4_g2

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_t2_g4_g3

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0009cc2b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0009cc2b) list_medium_line_x2_t2_g4_g

0x29fe,	// (0x00090382) list_medium_line_x2_t2_g4_t1_ParamLimits

0x29fe,	// (0x00090382) list_medium_line_x2_t2_g4_t1

0x1bac,	// (0x0008f530) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1bac,	// (0x0008f530) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0009cc34) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0009cc34) list_medium_line_x2_t2_g4_t

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t2_g3_g1

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_t2_g3_g2

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0009cba1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0009cba1) list_medium_line_x2_t2_g3_g

0x2a13,	// (0x00090397) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2a13,	// (0x00090397) list_medium_line_x2_t2_g3_t1

0x1bac,	// (0x0008f530) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1bac,	// (0x0008f530) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0009cc39) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0009cc39) list_medium_line_x2_t2_g3_t

0x2b5f,	// (0x000904e3) main_sp_fs_list_pane_ParamLimits

0x2b5f,	// (0x000904e3) main_sp_fs_list_pane

0x2b6c,	// (0x000904f0) sp_fs_scroll_pane_ParamLimits

0x2b6c,	// (0x000904f0) sp_fs_scroll_pane

0x2b79,	// (0x000904fd) list_medium_line_x2_t3_t1

0x2b89,	// (0x0009050d) list_medium_line_x2_t3_t2

0x2b97,	// (0x0009051b) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0009cc84) list_medium_line_x2_t3_t

0x2ba5,	// (0x00090529) list_medium_line_x3_t4_t1

0x2bb5,	// (0x00090539) list_medium_line_x3_t4_t2

0x2bc3,	// (0x00090547) list_medium_line_x3_t4_t3

0x2bd1,	// (0x00090555) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0009cc8b) list_medium_line_x3_t4_t

0x2bdf,	// (0x00090563) list_medium_line_x4_t5_t1

0x2bef,	// (0x00090573) list_medium_line_x4_t5_t2

0x2bc3,	// (0x00090547) list_medium_line_x4_t5_t3

0x2bfd,	// (0x00090581) list_medium_line_x4_t5_t4

0x2bd1,	// (0x00090555) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0009cc94) list_medium_line_x4_t5_t

0x1b61,	// (0x0008f4e5) list_medium_line_t4_g4_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_t4_g4_g1

0x1bf5,	// (0x0008f579) list_medium_line_t4_g4_g2_ParamLimits

0x1bf5,	// (0x0008f579) list_medium_line_t4_g4_g2

0x2c0b,	// (0x0009058f) list_medium_line_t4_g4_g3_ParamLimits

0x2c0b,	// (0x0009058f) list_medium_line_t4_g4_g3

0x1b79,	// (0x0008f4fd) list_medium_line_t4_g4_g4_ParamLimits

0x1b79,	// (0x0008f4fd) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0009cc9f) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0009cc9f) list_medium_line_t4_g4_g

0x2c17,	// (0x0009059b) list_medium_line_t4_g4_t1_ParamLimits

0x2c17,	// (0x0009059b) list_medium_line_t4_g4_t1

0x2c2c,	// (0x000905b0) list_medium_line_t4_g4_t2_ParamLimits

0x2c2c,	// (0x000905b0) list_medium_line_t4_g4_t2

0x2c42,	// (0x000905c6) list_medium_line_t4_g4_t3_ParamLimits

0x2c42,	// (0x000905c6) list_medium_line_t4_g4_t3

0x2c58,	// (0x000905dc) list_medium_line_t4_g4_t4_ParamLimits

0x2c58,	// (0x000905dc) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0009cca8) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0009cca8) list_medium_line_t4_g4_t

0x2d2e,	// (0x000906b2) chi_dic_find_pane_g1

0x47c4,	// (0x00092148) main_tport_pane

0xb7e2,	// (0x00099166) list_medium_line_plain_t1

0xb7f8,	// (0x0009917c) list_medium_line_t2_g2_g1_ParamLimits

0xb7f8,	// (0x0009917c) list_medium_line_t2_g2_g1

0xb804,	// (0x00099188) list_medium_line_t2_g2_g2_ParamLimits

0xb804,	// (0x00099188) list_medium_line_t2_g2_g2

0x0001,

0xf9ce,	// (0x0009d352) list_medium_line_t2_g2_g_ParamLimits

0xf9ce,	// (0x0009d352) list_medium_line_t2_g2_g

0x7385,	// (0x00094d09) list_medium_line_t2_g2_t1_ParamLimits

0x7385,	// (0x00094d09) list_medium_line_t2_g2_t1

0x739f,	// (0x00094d23) list_medium_line_t2_g2_t2_ParamLimits

0x739f,	// (0x00094d23) list_medium_line_t2_g2_t2

0x0001,

0xf9d3,	// (0x0009d357) list_medium_line_t2_g2_t_ParamLimits

0xf9d3,	// (0x0009d357) list_medium_line_t2_g2_t

0xbb1f,	// (0x000994a3) aid_sp_fs_list_icon_a_sm

0xbb27,	// (0x000994ab) aid_sp_fs_list_icon_d

0xbb2f,	// (0x000994b3) aid_sp_fs_text_primary

0xbb38,	// (0x000994bc) aid_sp_fs_text_secondary

0xbb41,	// (0x000994c5) list_medium_line

0xbb41,	// (0x000994c5) list_medium_line_g2

0xbb41,	// (0x000994c5) list_medium_line_g3

0xbb41,	// (0x000994c5) list_medium_line_plain

0xbb41,	// (0x000994c5) list_medium_line_plain_t2

0xbb41,	// (0x000994c5) list_medium_line_plain_t3

0xbb41,	// (0x000994c5) list_medium_line_right_icon

0xbb41,	// (0x000994c5) list_medium_line_right_iconx2

0xbb41,	// (0x000994c5) list_medium_line_t2

0xbb41,	// (0x000994c5) list_medium_line_t2_g2

0xbb41,	// (0x000994c5) list_medium_line_t2_g3

0xbb41,	// (0x000994c5) list_medium_line_t2_right_icon

0xbb41,	// (0x000994c5) list_medium_line_t2_right_iconx2

0xbb41,	// (0x000994c5) list_medium_line_t3

0xbb41,	// (0x000994c5) list_medium_line_t3_g2

0xbb41,	// (0x000994c5) list_medium_line_t3_g3

0xbb41,	// (0x000994c5) list_medium_line_t3_right_iconx2

0x7979,	// (0x000952fd) list_medium_line_t4_g4

0xbb4a,	// (0x000994ce) list_medium_line_x2

0xbb4a,	// (0x000994ce) list_medium_line_x2_t2_g2

0xbb4a,	// (0x000994ce) list_medium_line_x2_t2_g3

0xbb4a,	// (0x000994ce) list_medium_line_x2_t2_g4

0xbb4a,	// (0x000994ce) list_medium_line_x2_t3

0xbb4a,	// (0x000994ce) list_medium_line_x2_t3_g2

0xbb4a,	// (0x000994ce) list_medium_line_x2_t3_g3

0xbb4a,	// (0x000994ce) list_medium_line_x2_t3_g4

0xbb4a,	// (0x000994ce) list_medium_line_x2_t4_g2

0xbb4a,	// (0x000994ce) list_medium_line_x2_t4_g4

0xbb53,	// (0x000994d7) list_medium_line_x3

0xbb53,	// (0x000994d7) list_medium_line_x3_t4

0xbb53,	// (0x000994d7) list_medium_line_x3_t4_g4

0x7979,	// (0x000952fd) list_medium_line_x4_t4

0x7979,	// (0x000952fd) list_medium_line_x4_t4_g7

0x7979,	// (0x000952fd) list_medium_line_x4_t5

0x7982,	// (0x00095306) list_single_fs_dyc_pane_ParamLimits

0x7982,	// (0x00095306) list_single_fs_dyc_pane

0x1b61,	// (0x0008f4e5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x4_t4_g7_g1

0x804b,	// (0x000959cf) list_medium_line_x4_t4_g7_g2_ParamLimits

0x804b,	// (0x000959cf) list_medium_line_x4_t4_g7_g2

0x8057,	// (0x000959db) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8057,	// (0x000959db) list_medium_line_x4_t4_g7_g3

0x8066,	// (0x000959ea) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8066,	// (0x000959ea) list_medium_line_x4_t4_g7_g4

0x8072,	// (0x000959f6) list_medium_line_x4_t4_g7_g5_ParamLimits

0x8072,	// (0x000959f6) list_medium_line_x4_t4_g7_g5

0x8081,	// (0x00095a05) list_medium_line_x4_t4_g7_g6_ParamLimits

0x8081,	// (0x00095a05) list_medium_line_x4_t4_g7_g6

0x8090,	// (0x00095a14) list_medium_line_x4_t4_g7_g7_ParamLimits

0x8090,	// (0x00095a14) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb9e,	// (0x0009d522) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb9e,	// (0x0009d522) list_medium_line_x4_t4_g7_g

0x809c,	// (0x00095a20) list_medium_line_x4_t4_g7_t1_ParamLimits

0x809c,	// (0x00095a20) list_medium_line_x4_t4_g7_t1

0x80b1,	// (0x00095a35) list_medium_line_x4_t4_g7_t2_ParamLimits

0x80b1,	// (0x00095a35) list_medium_line_x4_t4_g7_t2

0x80c6,	// (0x00095a4a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x80c6,	// (0x00095a4a) list_medium_line_x4_t4_g7_t3

0x80db,	// (0x00095a5f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x80db,	// (0x00095a5f) list_medium_line_x4_t4_g7_t4

0x80ed,	// (0x00095a71) list_medium_line_x4_t4_g7_t5_ParamLimits

0x80ed,	// (0x00095a71) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbad,	// (0x0009d531) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbad,	// (0x0009d531) list_medium_line_x4_t4_g7_t

0x80ff,	// (0x00095a83) list_single_dyc_row_pane_ParamLimits

0x80ff,	// (0x00095a83) list_single_dyc_row_pane

0x87a7,	// (0x0009612b) call5_gesture_pane_ParamLimits

0x87a7,	// (0x0009612b) call5_gesture_pane

0x87ef,	// (0x00096173) call5_windows_pane_ParamLimits

0x87ef,	// (0x00096173) call5_windows_pane

0x88a0,	// (0x00096224) call5_swipe_1_pane_cp_ParamLimits

0x88a0,	// (0x00096224) call5_swipe_1_pane_cp

0x88ac,	// (0x00096230) call5_swipe_2_pane_cp_ParamLimits

0x88ac,	// (0x00096230) call5_swipe_2_pane_cp

0xde7d,	// (0x0009b801) call5_image_pane_cp

0x88b8,	// (0x0009623c) popup_call5_audio_first_window_cp_ParamLimits

0x88b8,	// (0x0009623c) popup_call5_audio_first_window_cp

0xc635,	// (0x00099fb9) call5_swipe_1_pane_g1_cp_ParamLimits

0xc635,	// (0x00099fb9) call5_swipe_1_pane_g1_cp

0xc663,	// (0x00099fe7) call5_swipe_1_pane_g2_cp

0xc64e,	// (0x00099fd2) call5_swipe_1_pane_t1_cp_ParamLimits

0xc64e,	// (0x00099fd2) call5_swipe_1_pane_t1_cp

0xc635,	// (0x00099fb9) call5_swipe_2_pane_g1_cp_ParamLimits

0xc635,	// (0x00099fb9) call5_swipe_2_pane_g1_cp

0xc66b,	// (0x00099fef) call5_swipe_2_pane_g2_cp

0xc673,	// (0x00099ff7) call5_swipe_2_pane_t1_cp_ParamLimits

0xc673,	// (0x00099ff7) call5_swipe_2_pane_t1_cp

0x47a2,	// (0x00092126) main_sp_fs_email_pane

0xc688,	// (0x0009a00c) main_sp_fs_listscroll_pane_te

0xc691,	// (0x0009a015) popup_sp_fs_action_menu_pane_ParamLimits

0xc691,	// (0x0009a015) popup_sp_fs_action_menu_pane

0xa7b6,	// (0x0009813a) bg_sp_fs_ctrlbar_pane_g1

0xadb6,	// (0x0009873a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xadc8,	// (0x0009874c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xadbf,	// (0x00098743) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa7b6,	// (0x0009813a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc9b,	// (0x0009d61f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa5a3,	// (0x00097f27) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa5a3,	// (0x00097f27) bg_sp_fs_ctrlbar_ddmenu_pane

0xc6c5,	// (0x0009a049) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc6c5,	// (0x0009a049) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc6d1,	// (0x0009a055) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc6d1,	// (0x0009a055) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfca4,	// (0x0009d628) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfca4,	// (0x0009d628) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc6dd,	// (0x0009a061) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc6dd,	// (0x0009a061) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc6f7,	// (0x0009a07b) list_medium_line_t2_right_icon_g1

0xc6ff,	// (0x0009a083) list_medium_line_t2_right_icon_t1

0x88c4,	// (0x00096248) list_medium_line_t2_right_icon_t2

0x0001,

0xfca9,	// (0x0009d62d) list_medium_line_t2_right_icon_t

0xa2a2,	// (0x00097c26) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa2a2,	// (0x00097c26) bg_sp_fs_ctrlbar_pane

0x8918,	// (0x0009629c) main_sp_fs_ctrlbar_button_pane_cp01

0x8920,	// (0x000962a4) main_sp_fs_ctrlbar_ddmenu_pane

0xc747,	// (0x0009a0cb) main_sp_fs_ctrlbar_pane_g1

0xc753,	// (0x0009a0d7) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcae,	// (0x0009d632) main_sp_fs_ctrlbar_pane_g

0x895c,	// (0x000962e0) main_sp_fs_ctrlbar_pane_t1

0x89a5,	// (0x00096329) main_sp_fs_ctrlbar_pane

0x89c6,	// (0x0009634a) main_sp_fs_listscroll_pane_te_cp01

0x89e6,	// (0x0009636a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x89e6,	// (0x0009636a) popup_sp_fs_action_menu_pane_cp01

0x47a2,	// (0x00092126) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x47a2,	// (0x00092126) bg_sp_fs_highlight_list_pane_cp01

0xc77a,	// (0x0009a0fe) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc77a,	// (0x0009a0fe) sp_fs_action_menu_list_gene_pane_g1

0xc789,	// (0x0009a10d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc789,	// (0x0009a10d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcbc,	// (0x0009d640) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcbc,	// (0x0009d640) sp_fs_action_menu_list_gene_pane_g

0xc796,	// (0x0009a11a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc796,	// (0x0009a11a) sp_fs_action_menu_list_gene_pane_t1

0xc7ae,	// (0x0009a132) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc7ae,	// (0x0009a132) sp_fs_action_menu_list_gene_pane

0xc7cd,	// (0x0009a151) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc7cd,	// (0x0009a151) popup_sp_fs_action_menu_bg_pane

0xc7db,	// (0x0009a15f) sp_fs_action_menu_list_pane_ParamLimits

0xc7db,	// (0x0009a15f) sp_fs_action_menu_list_pane

0xc7fb,	// (0x0009a17f) sp_fs_scroll_pane_cp01_ParamLimits

0xc7fb,	// (0x0009a17f) sp_fs_scroll_pane_cp01

0x8a16,	// (0x0009639a) list_medium_line_plain_t2_t1

0x8a26,	// (0x000963aa) list_medium_line_plain_t2_t2

0x0001,

0xfcc1,	// (0x0009d645) list_medium_line_plain_t2_t

0x8a34,	// (0x000963b8) list_medium_line_plain_t3_t1

0x8a44,	// (0x000963c8) list_medium_line_plain_t3_t2

0x8a52,	// (0x000963d6) list_medium_line_plain_t3_t3

0x0002,

0xfcc6,	// (0x0009d64a) list_medium_line_plain_t3_t

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t2_g2_g1

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0009cbaf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0009cbaf) list_medium_line_x2_t2_g2_g

0x2c17,	// (0x0009059b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c17,	// (0x0009059b) list_medium_line_x2_t2_g2_t1

0x1bac,	// (0x0008f530) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1bac,	// (0x0008f530) list_medium_line_x2_t2_g2_t2

0x0001,

0xfccd,	// (0x0009d651) list_medium_line_x2_t2_g2_t_ParamLimits

0xfccd,	// (0x0009d651) list_medium_line_x2_t2_g2_t

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t4_g2_g1

0x8a60,	// (0x000963e4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8a60,	// (0x000963e4) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcd2,	// (0x0009d656) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcd2,	// (0x0009d656) list_medium_line_x2_t4_g2_g

0x8a71,	// (0x000963f5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8a71,	// (0x000963f5) list_medium_line_x2_t4_g2_t1

0x8a88,	// (0x0009640c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8a88,	// (0x0009640c) list_medium_line_x2_t4_g2_t2

0x8a9d,	// (0x00096421) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8a9d,	// (0x00096421) list_medium_line_x2_t4_g2_t3

0x1bac,	// (0x0008f530) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1bac,	// (0x0008f530) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcd7,	// (0x0009d65b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcd7,	// (0x0009d65b) list_medium_line_x2_t4_g2_t

0xc821,	// (0x0009a1a5) list_medium_line_t3_right_iconx2_g1

0xc6f7,	// (0x0009a07b) list_medium_line_t3_right_iconx2_g2

0x8aaf,	// (0x00096433) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfce0,	// (0x0009d664) list_medium_line_t3_right_iconx2_g

0x8ab7,	// (0x0009643b) list_medium_line_t3_right_iconx2_t1

0x8ac7,	// (0x0009644b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfce7,	// (0x0009d66b) list_medium_line_t3_right_iconx2_t

0x1b61,	// (0x0008f4e5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x3_t4_g4_g1

0x1b6d,	// (0x0008f4f1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1b6d,	// (0x0008f4f1) list_medium_line_x3_t4_g4_g2

0x1bf5,	// (0x0008f579) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1bf5,	// (0x0008f579) list_medium_line_x3_t4_g4_g3

0x8ad5,	// (0x00096459) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8ad5,	// (0x00096459) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcec,	// (0x0009d670) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcec,	// (0x0009d670) list_medium_line_x3_t4_g4_g

0x8ae1,	// (0x00096465) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8ae1,	// (0x00096465) list_medium_line_x3_t4_g4_t1

0x8af8,	// (0x0009647c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8af8,	// (0x0009647c) list_medium_line_x3_t4_g4_t2

0x8b0d,	// (0x00096491) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8b0d,	// (0x00096491) list_medium_line_x3_t4_g4_t3

0x8b22,	// (0x000964a6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8b22,	// (0x000964a6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcf5,	// (0x0009d679) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcf5,	// (0x0009d679) list_medium_line_x3_t4_g4_t

0x8b3f,	// (0x000964c3) list_single_dyc_row_text_pane_t1_ParamLimits

0x8b3f,	// (0x000964c3) list_single_dyc_row_text_pane_t1

0x8b76,	// (0x000964fa) list_single_dyc_row_text_pane_t2_ParamLimits

0x8b76,	// (0x000964fa) list_single_dyc_row_text_pane_t2

0xc829,	// (0x0009a1ad) list_single_dyc_row_text_pane_t3_ParamLimits

0xc829,	// (0x0009a1ad) list_single_dyc_row_text_pane_t3

0x0005,

0xfcfe,	// (0x0009d682) list_single_dyc_row_text_pane_t_ParamLimits

0xfcfe,	// (0x0009d682) list_single_dyc_row_text_pane_t

0xc84d,	// (0x0009a1d1) list_single_dyc_row_pane_g1_ParamLimits

0xc84d,	// (0x0009a1d1) list_single_dyc_row_pane_g1

0xc859,	// (0x0009a1dd) list_single_dyc_row_pane_g2_ParamLimits

0xc859,	// (0x0009a1dd) list_single_dyc_row_pane_g2

0xc865,	// (0x0009a1e9) list_single_dyc_row_pane_g3_ParamLimits

0xc865,	// (0x0009a1e9) list_single_dyc_row_pane_g3

0xc871,	// (0x0009a1f5) list_single_dyc_row_pane_g4_ParamLimits

0xc871,	// (0x0009a1f5) list_single_dyc_row_pane_g4

0x0003,

0xfd0b,	// (0x0009d68f) list_single_dyc_row_pane_g_ParamLimits

0xfd0b,	// (0x0009d68f) list_single_dyc_row_pane_g

0xc87d,	// (0x0009a201) list_single_dyc_row_text_pane_ParamLimits

0xc87d,	// (0x0009a201) list_single_dyc_row_text_pane

0x0baa,	// (0x0008e52e) bg_sp_fs_scroll_pane

0xc89c,	// (0x0009a220) thumb_sp_fs_scroll_pane

0xb7f8,	// (0x0009917c) list_medium_line_g1_ParamLimits

0xb7f8,	// (0x0009917c) list_medium_line_g1

0xc8a5,	// (0x0009a229) list_medium_line_t1_ParamLimits

0xc8a5,	// (0x0009a229) list_medium_line_t1

0x1b61,	// (0x0008f4e5) list_medium_line_x2_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x2_g1

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_g2_ParamLimits

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_g2

0x0001,

0xfd14,	// (0x0009d698) list_medium_line_x2_g_ParamLimits

0xfd14,	// (0x0009d698) list_medium_line_x2_g

0xc8ba,	// (0x0009a23e) list_medium_line_x2_t1_ParamLimits

0xc8ba,	// (0x0009a23e) list_medium_line_x2_t1

0x1b61,	// (0x0008f4e5) list_medium_line_x3_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x3_g1

0x1b6d,	// (0x0008f4f1) list_medium_line_x3_g2_ParamLimits

0x1b6d,	// (0x0008f4f1) list_medium_line_x3_g2

0x0001,

0xfd14,	// (0x0009d698) list_medium_line_x3_g_ParamLimits

0xfd14,	// (0x0009d698) list_medium_line_x3_g

0xc8ba,	// (0x0009a23e) list_medium_line_x3_t1_ParamLimits

0xc8ba,	// (0x0009a23e) list_medium_line_x3_t1

0xc8d0,	// (0x0009a254) thumb_sp_fs_scroll_pane_g1

0xc8d9,	// (0x0009a25d) thumb_sp_fs_scroll_pane_g2

0xc8e2,	// (0x0009a266) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd19,	// (0x0009d69d) thumb_sp_fs_scroll_pane_g

0xc8d0,	// (0x0009a254) bg_sp_fs_scroll_pane_g1

0xc8d9,	// (0x0009a25d) bg_sp_fs_scroll_pane_g2

0xc8e2,	// (0x0009a266) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd19,	// (0x0009d69d) bg_sp_fs_scroll_pane_g

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1b61,	// (0x0008f4e5) list_medium_line_x2_t3_g4_g1

0x1be9,	// (0x0008f56d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1be9,	// (0x0008f56d) list_medium_line_x2_t3_g4_g2

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1b6d,	// (0x0008f4f1) list_medium_line_x2_t3_g4_g3

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1b79,	// (0x0008f4fd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0009cc2b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0009cc2b) list_medium_line_x2_t3_g4_g

0x8c99,	// (0x0009661d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8c99,	// (0x0009661d) list_medium_line_x2_t3_g4_t1

0x8caf,	// (0x00096633) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8caf,	// (0x00096633) list_medium_line_x2_t3_g4_t2

0x1bac,	// (0x0008f530) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1bac,	// (0x0008f530) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd20,	// (0x0009d6a4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd20,	// (0x0009d6a4) list_medium_line_x2_t3_g4_t

0xb7f8,	// (0x0009917c) list_medium_line_g2_g1_ParamLimits

0xb7f8,	// (0x0009917c) list_medium_line_g2_g1

0xb804,	// (0x00099188) list_medium_line_g2_g2_ParamLimits

0xb804,	// (0x00099188) list_medium_line_g2_g2

0x0001,

0xf9ce,	// (0x0009d352) list_medium_line_g2_g_ParamLimits

0xf9ce,	// (0x0009d352) list_medium_line_g2_g

0xc8eb,	// (0x0009a26f) list_medium_line_g2_t1_ParamLimits

0xc8eb,	// (0x0009a26f) list_medium_line_g2_t1

0xb7f8,	// (0x0009917c) list_medium_line_t3_g2_g1_ParamLimits

0xb7f8,	// (0x0009917c) list_medium_line_t3_g2_g1

0xb804,	// (0x00099188) list_medium_line_t3_g2_g2_ParamLimits

0xb804,	// (0x00099188) list_medium_line_t3_g2_g2

0x0001,

0xf9ce,	// (0x0009d352) list_medium_line_t3_g2_g_ParamLimits

0xf9ce,	// (0x0009d352) list_medium_line_t3_g2_g

0x8cc8,	// (0x0009664c) list_medium_line_t3_g2_t1_ParamLimits

0x8cc8,	// (0x0009664c) list_medium_line_t3_g2_t1

0x8cdf,	// (0x00096663) list_medium_line_t3_g2_t2_ParamLimits

0x8cdf,	// (0x00096663) list_medium_line_t3_g2_t2

0x8cf4,	// (0x00096678) list_medium_line_t3_g2_t3_ParamLimits

0x8cf4,	// (0x00096678) list_medium_line_t3_g2_t3

0x0002,

0xfd27,	// (0x0009d6ab) list_medium_line_t3_g2_t_ParamLimits

0xfd27,	// (0x0009d6ab) list_medium_line_t3_g2_t

0xc6f7,	// (0x0009a07b) list_medium_line_right_icon_g1

0xc900,	// (0x0009a284) list_medium_line_right_icon_t1

0xb7f8,	// (0x0009917c) list_medium_line_t2_g1_ParamLimits

0xb7f8,	// (0x0009917c) list_medium_line_t2_g1

0xc90e,	// (0x0009a292) list_medium_line_t2_t1_ParamLimits

0xc90e,	// (0x0009a292) list_medium_line_t2_t1

0x8d09,	// (0x0009668d) list_medium_line_t2_t2_ParamLimits

0x8d09,	// (0x0009668d) list_medium_line_t2_t2

0x0001,

0xfd2e,	// (0x0009d6b2) list_medium_line_t2_t_ParamLimits

0xfd2e,	// (0x0009d6b2) list_medium_line_t2_t

0xb7f8,	// (0x0009917c) list_medium_line_t3_g1_ParamLimits

0xb7f8,	// (0x0009917c) list_medium_line_t3_g1

0x8d1e,	// (0x000966a2) list_medium_line_t3_t1_ParamLimits

0x8d1e,	// (0x000966a2) list_medium_line_t3_t1

0x8d35,	// (0x000966b9) list_medium_line_t3_t2_ParamLimits

0x8d35,	// (0x000966b9) list_medium_line_t3_t2

0x8d4a,	// (0x000966ce) list_medium_line_t3_t3_ParamLimits

0x8d4a,	// (0x000966ce) list_medium_line_t3_t3

0x0002,

0xfd33,	// (0x0009d6b7) list_medium_line_t3_t_ParamLimits

0xfd33,	// (0x0009d6b7) list_medium_line_t3_t

0xb7f8,	// (0x0009917c) list_medium_line_g3_g1_ParamLimits

0xb7f8,	// (0x0009917c) list_medium_line_g3_g1

0xc928,	// (0x0009a2ac) list_medium_line_g3_g2_ParamLimits

0xc928,	// (0x0009a2ac) list_medium_line_g3_g2

0xb804,	// (0x00099188) list_medium_line_g3_g3_ParamLimits

0xb804,	// (0x00099188) list_medium_line_g3_g3

0x0002,

0xfd3a,	// (0x0009d6be) list_medium_line_g3_g_ParamLimits

0xfd3a,	// (0x0009d6be) list_medium_line_g3_g

0xc934,	// (0x0009a2b8) list_medium_line_g3_t1_ParamLimits

0xc934,	// (0x0009a2b8) list_medium_line_g3_t1

0xb7f8,	// (0x0009917c) list_medium_line_t2_g3_g1_ParamLimits

0xb7f8,	// (0x0009917c) list_medium_line_t2_g3_g1

0xc928,	// (0x0009a2ac) list_medium_line_t2_g3_g2_ParamLimits

0xc928,	// (0x0009a2ac) list_medium_line_t2_g3_g2

0xb804,	// (0x00099188) list_medium_line_t2_g3_g3_ParamLimits

0xb804,	// (0x00099188) list_medium_line_t2_g3_g3

0x0002,

0xfd3a,	// (0x0009d6be) list_medium_line_t2_g3_g_ParamLimits

0xfd3a,	// (0x0009d6be) list_medium_line_t2_g3_g

0x8d5c,	// (0x000966e0) list_medium_line_t2_g3_t1_ParamLimits

0x8d5c,	// (0x000966e0) list_medium_line_t2_g3_t1

0x8d73,	// (0x000966f7) list_medium_line_t2_g3_t2_ParamLimits

0x8d73,	// (0x000966f7) list_medium_line_t2_g3_t2

0x0001,

0xfd41,	// (0x0009d6c5) list_medium_line_t2_g3_t_ParamLimits

0xfd41,	// (0x0009d6c5) list_medium_line_t2_g3_t

0xb7f8,	// (0x0009917c) list_medium_line_t3_g3_g1_ParamLimits

0xb7f8,	// (0x0009917c) list_medium_line_t3_g3_g1

0xc928,	// (0x0009a2ac) list_medium_line_t3_g3_g2_ParamLimits

0xc928,	// (0x0009a2ac) list_medium_line_t3_g3_g2

0xb804,	// (0x00099188) list_medium_line_t3_g3_g3_ParamLimits

0xb804,	// (0x00099188) list_medium_line_t3_g3_g3

0x0002,

0xfd3a,	// (0x0009d6be) list_medium_line_t3_g3_g_ParamLimits

0xfd3a,	// (0x0009d6be) list_medium_line_t3_g3_g

0x8d88,	// (0x0009670c) list_medium_line_t3_g3_t1_ParamLimits

0x8d88,	// (0x0009670c) list_medium_line_t3_g3_t1

0x8da1,	// (0x00096725) list_medium_line_t3_g3_t2_ParamLimits

0x8da1,	// (0x00096725) list_medium_line_t3_g3_t2

0x8db7,	// (0x0009673b) list_medium_line_t3_g3_t3_ParamLimits

0x8db7,	// (0x0009673b) list_medium_line_t3_g3_t3

0x0002,

0xfd46,	// (0x0009d6ca) list_medium_line_t3_g3_t_ParamLimits

0xfd46,	// (0x0009d6ca) list_medium_line_t3_g3_t

0xc821,	// (0x0009a1a5) list_medium_line_right_iconx2_g1

0xc6f7,	// (0x0009a07b) list_medium_line_right_iconx2_g2

0x0001,

0xfd4d,	// (0x0009d6d1) list_medium_line_right_iconx2_g

0xc949,	// (0x0009a2cd) list_medium_line_right_iconx2_t1

0xc821,	// (0x0009a1a5) list_medium_line_t2_right_iconx2_g1

0xc6f7,	// (0x0009a07b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd4d,	// (0x0009d6d1) list_medium_line_t2_right_iconx2_g

0x8dcd,	// (0x00096751) list_medium_line_t2_right_iconx2_t1

0x8ddd,	// (0x00096761) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd52,	// (0x0009d6d6) list_medium_line_t2_right_iconx2_t

0x8deb,	// (0x0009676f) list_medium_line_x4_t4_t1

0x8df9,	// (0x0009677d) list_medium_line_x4_t4_t2

0x8e09,	// (0x0009678d) list_medium_line_x4_t4_t3

0x8e19,	// (0x0009679d) list_medium_line_x4_t4_t4

0x0003,

0xfd57,	// (0x0009d6db) list_medium_line_x4_t4_t

0x8e62,	// (0x000967e6) tport_appsw_pane_ParamLimits

0x8e62,	// (0x000967e6) tport_appsw_pane

0x8e73,	// (0x000967f7) tport_contact_pane_ParamLimits

0x8e73,	// (0x000967f7) tport_contact_pane

0x8e87,	// (0x0009680b) tport_listscroll_pane_ParamLimits

0x8e87,	// (0x0009680b) tport_listscroll_pane

0x8e9f,	// (0x00096823) cell_tport_appsw_pane_ParamLimits

0x8e9f,	// (0x00096823) cell_tport_appsw_pane

0xb581,	// (0x00098f05) tport_appsw_pane_g1_ParamLimits

0xb581,	// (0x00098f05) tport_appsw_pane_g1

0xc957,	// (0x0009a2db) tport_contact_pane_g1

0xc960,	// (0x0009a2e4) tport_contact_pane_t1

0xc96e,	// (0x0009a2f2) tport_contact_pane_t2

0x0001,

0xfd60,	// (0x0009d6e4) tport_contact_pane_t

0xc97c,	// (0x0009a300) list_tport_pane

0xddb3,	// (0x0009b737) scroll_pane_cp_030

0xc98d,	// (0x0009a311) cell_tport_appsw_pane_g1

0xc99d,	// (0x0009a321) cell_tport_appsw_pane_t1

0xc9ab,	// (0x0009a32f) grid_highlight_pane_cp019

0x8ed5,	// (0x00096859) list_tport_double_graphic_pane_ParamLimits

0x8ed5,	// (0x00096859) list_tport_double_graphic_pane

0x47a2,	// (0x00092126) list_highlight_pane_cp023_ParamLimits

0x47a2,	// (0x00092126) list_highlight_pane_cp023

0x8ee2,	// (0x00096866) list_tport_double_graphic_pane_g1_ParamLimits

0x8ee2,	// (0x00096866) list_tport_double_graphic_pane_g1

0x8eef,	// (0x00096873) list_tport_double_graphic_pane_t1_ParamLimits

0x8eef,	// (0x00096873) list_tport_double_graphic_pane_t1

0x8f04,	// (0x00096888) list_tport_double_graphic_pane_t2_ParamLimits

0x8f04,	// (0x00096888) list_tport_double_graphic_pane_t2

0x0001,

0xfd6c,	// (0x0009d6f0) list_tport_double_graphic_pane_t_ParamLimits

0xfd6c,	// (0x0009d6f0) list_tport_double_graphic_pane_t

0x0baa,	// (0x0008e52e) main_cale_note_pane

0x6b7f,	// (0x00094503) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6b7f,	// (0x00094503) cell_vitu2_function_top_wide_pane_cp01

0x844a,	// (0x00095dce) wait_bar_pane_cp05_ParamLimits

0x47a2,	// (0x00092126) listscroll_cmail_pane

0xc9b3,	// (0x0009a337) list_cmail_pane

0x8f16,	// (0x0009689a) list_cmail_body_pane

0x8f16,	// (0x0009689a) list_single_cmail_header_caption_pane

0x8f2d,	// (0x000968b1) list_single_cmail_header_detail_pane_ParamLimits

0x8f2d,	// (0x000968b1) list_single_cmail_header_detail_pane

0xc9cf,	// (0x0009a353) list_single_cmail_header_caption_pane_t1

0x8f56,	// (0x000968da) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8f56,	// (0x000968da) list_single_cmail_header_detail_pane_g1

0xc9e6,	// (0x0009a36a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc9e6,	// (0x0009a36a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd71,	// (0x0009d6f5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd71,	// (0x0009d6f5) list_single_cmail_header_detail_pane_g

0x8f6c,	// (0x000968f0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8f6c,	// (0x000968f0) list_single_cmail_header_detail_pane_t1

0xca23,	// (0x0009a3a7) list_single_cmail_header_editor_pane_bg_ParamLimits

0xca23,	// (0x0009a3a7) list_single_cmail_header_editor_pane_bg

0xca3a,	// (0x0009a3be) list_cmail_body_pane_g1

0xca43,	// (0x0009a3c7) list_cmail_body_pane_t1

0xb5be,	// (0x00098f42) list_single_cmail_header_editor_pane_bg_g1

0xe136,	// (0x0009baba) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb5ce,	// (0x00098f52) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb5c6,	// (0x00098f4a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb7f0,	// (0x00099174) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb5ee,	// (0x00098f72) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb5de,	// (0x00098f62) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb5e6,	// (0x00098f6a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe0fb,	// (0x0009ba7f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8fa8,	// (0x0009692c) calenote_gesture_pane_ParamLimits

0x8fa8,	// (0x0009692c) calenote_gesture_pane

0x8fc4,	// (0x00096948) calenote_window_pane_ParamLimits

0x8fc4,	// (0x00096948) calenote_window_pane

0xca51,	// (0x0009a3d5) popup_note_window_cp01

0x8fe0,	// (0x00096964) calenote_swipe_1_pane_ParamLimits

0x8fe0,	// (0x00096964) calenote_swipe_1_pane

0x88ac,	// (0x00096230) calenote_swipe_2_pane_ParamLimits

0x88ac,	// (0x00096230) calenote_swipe_2_pane

0xc635,	// (0x00099fb9) calenote_swipe_1_pane_g1_ParamLimits

0xc635,	// (0x00099fb9) calenote_swipe_1_pane_g1

0xc642,	// (0x00099fc6) calenote_swipe_1_pane_g2_ParamLimits

0xc642,	// (0x00099fc6) calenote_swipe_1_pane_g2

0x0001,

0xfc91,	// (0x0009d615) calenote_swipe_1_pane_g_ParamLimits

0xfc91,	// (0x0009d615) calenote_swipe_1_pane_g

0xca63,	// (0x0009a3e7) calenote_swipe_1_pane_t1_ParamLimits

0xca63,	// (0x0009a3e7) calenote_swipe_1_pane_t1

0xc635,	// (0x00099fb9) calenote_swipe_2_pane_g1_ParamLimits

0xc635,	// (0x00099fb9) calenote_swipe_2_pane_g1

0xca82,	// (0x0009a406) calenote_swipe_2_pane_g2_ParamLimits

0xca82,	// (0x0009a406) calenote_swipe_2_pane_g2

0x0001,

0xfd7d,	// (0x0009d701) calenote_swipe_2_pane_g_ParamLimits

0xfd7d,	// (0x0009d701) calenote_swipe_2_pane_g

0xca8e,	// (0x0009a412) calenote_swipe_2_pane_t1_ParamLimits

0xca8e,	// (0x0009a412) calenote_swipe_2_pane_t1

0x0baa,	// (0x0008e52e) main_mup_navstr_pane

0x59c5,	// (0x00093349) main_mup3_pane_t7_ParamLimits

0x59c5,	// (0x00093349) main_mup3_pane_t7

0xb146,	// (0x00098aca) main_mp4_pane_g6_ParamLimits

0xb146,	// (0x00098aca) main_mp4_pane_g6

0xb3a0,	// (0x00098d24) main_image3_pane_t4_ParamLimits

0xb3a0,	// (0x00098d24) main_image3_pane_t4

0x8ff5,	// (0x00096979) popup_navstr_preview_pane_ParamLimits

0x8ff5,	// (0x00096979) popup_navstr_preview_pane

0x9005,	// (0x00096989) scroll_navstr_pane_ParamLimits

0x9005,	// (0x00096989) scroll_navstr_pane

0x0baa,	// (0x0008e52e) bg_popup_preview_window_pane_cp04

0xcab5,	// (0x0009a439) popup_navstr_preview_pane_t1

0x9019,	// (0x0009699d) scroll_navstr_pane_g1_ParamLimits

0x9019,	// (0x0009699d) scroll_navstr_pane_g1

0x902d,	// (0x000969b1) scroll_navstr_pane_t1_ParamLimits

0x902d,	// (0x000969b1) scroll_navstr_pane_t1

0xca5a,	// (0x0009a3de) bg_button_pane_cp014

0xca5a,	// (0x0009a3de) bg_button_pane_cp030

0x874d,	// (0x000960d1) list_double_fisheye_pane_g4_ParamLimits

0x874d,	// (0x000960d1) list_double_fisheye_pane_g4

0x8759,	// (0x000960dd) list_double_fisheye_pane_g5_ParamLimits

0x8759,	// (0x000960dd) list_double_fisheye_pane_g5

0xc9c3,	// (0x0009a347) sp_fs_scroll_pane_cp03

0xc747,	// (0x0009a0cb) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc753,	// (0x0009a0d7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcae,	// (0x0009d632) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x895c,	// (0x000962e0) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc9bb,	// (0x0009a33f) sp_fs_scroll_pane_cp02

0xddc5,	// (0x0009b749) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xddc5,	// (0x0009b749) popup_sp_fs_calendar_preview_list_single_pane

0x0baa,	// (0x0008e52e) main_cam6_pano_pane

0x9ff6,	// (0x0009797a) main_mup3_pane_ParamLimits

0x0baa,	// (0x0008e52e) main_phacti_pane

0x833d,	// (0x00095cc1) bg_button_pane_cp11

0x8355,	// (0x00095cd9) main_mobtv_info_pane_g2_ParamLimits

0x8355,	// (0x00095cd9) main_mobtv_info_pane_g2

0x0001,

0xfc0e,	// (0x0009d592) main_mobtv_info_pane_g_ParamLimits

0xfc0e,	// (0x0009d592) main_mobtv_info_pane_g

0x850a,	// (0x00095e8e) sc_clock_pane_t5_ParamLimits

0x850a,	// (0x00095e8e) sc_clock_pane_t5

0x85b5,	// (0x00095f39) main_radioblah_pane_g1_ParamLimits

0xc578,	// (0x00099efc) main_radioblah_pane_t3_ParamLimits

0xc578,	// (0x00099efc) main_radioblah_pane_t3

0xc590,	// (0x00099f14) main_radioblah_pane_t4_ParamLimits

0xc590,	// (0x00099f14) main_radioblah_pane_t4

0x85dd,	// (0x00095f61) main_radioblah_text_pane_ParamLimits

0x85dd,	// (0x00095f61) main_radioblah_text_pane

0x85ef,	// (0x00095f73) main_radioblah_info_pane_g1_ParamLimits

0x8682,	// (0x00096006) main_radioblah_info_pane_t4_ParamLimits

0x8682,	// (0x00096006) main_radioblah_info_pane_t4

0x47a2,	// (0x00092126) main_sp_fs_calendar_pane

0x9043,	// (0x000969c7) main_phacti_pane_g1

0x904b,	// (0x000969cf) phacti_note_pane_ParamLimits

0x904b,	// (0x000969cf) phacti_note_pane

0xcacc,	// (0x0009a450) phacti_term_pane_ParamLimits

0xcacc,	// (0x0009a450) phacti_term_pane

0xcae1,	// (0x0009a465) phacti_note_pane_t1_ParamLimits

0xcae1,	// (0x0009a465) phacti_note_pane_t1

0xcaf8,	// (0x0009a47c) phacti_term_pane_g1

0xcb00,	// (0x0009a484) phacti_term_pane_t1_ParamLimits

0xcb00,	// (0x0009a484) phacti_term_pane_t1

0xcb2a,	// (0x0009a4ae) popup_sp_fs_calendar_preview_list_single_pane_g1

0xcb32,	// (0x0009a4b6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd87,	// (0x0009d70b) popup_sp_fs_calendar_preview_list_single_pane_g

0xcb3a,	// (0x0009a4be) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcb3a,	// (0x0009a4be) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcb50,	// (0x0009a4d4) aid_popup_sp_fs_bg_corner_pane

0xa7b6,	// (0x0009813a) popup_sp_fs_calendar_preview_bg_pane_g1

0x0baa,	// (0x0008e52e) popup_sp_fs_calendar_preview_bg_pane

0xcb58,	// (0x0009a4dc) popup_sp_fs_calendar_preview_list_pane

0xa2a2,	// (0x00097c26) bg_main_sp_fs_cale_pane_ParamLimits

0xa2a2,	// (0x00097c26) bg_main_sp_fs_cale_pane

0xcb69,	// (0x0009a4ed) listscroll_cale_mrui_pane_ParamLimits

0xcb69,	// (0x0009a4ed) listscroll_cale_mrui_pane

0xcb7e,	// (0x0009a502) listscroll_sp_fs_schedule_track_pane

0xcb87,	// (0x0009a50b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcb87,	// (0x0009a50b) main_sp_fs_ctrlbar_pane_cp01

0xcb9a,	// (0x0009a51e) main_sp_fs_ribbon_pane

0xcba2,	// (0x0009a526) popup_sp_fs_cale_preview_window

0x90ae,	// (0x00096a32) list_single_sp_fs_schedule_track_pane_ParamLimits

0x90ae,	// (0x00096a32) list_single_sp_fs_schedule_track_pane

0x47a2,	// (0x00092126) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x47a2,	// (0x00092126) bg_sp_fs_highlight_list_pane_cp03

0x90c2,	// (0x00096a46) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x90c2,	// (0x00096a46) list_single_sp_fs_schedule_track_pane_g1

0x90ce,	// (0x00096a52) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x90ce,	// (0x00096a52) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd8c,	// (0x0009d710) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd8c,	// (0x0009d710) list_single_sp_fs_schedule_track_pane_g

0x90da,	// (0x00096a5e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x90da,	// (0x00096a5e) list_single_sp_fs_schedule_track_pane_t1

0x90f4,	// (0x00096a78) sp_fs_schedule_track_pane_ParamLimits

0x90f4,	// (0x00096a78) sp_fs_schedule_track_pane

0xcbb4,	// (0x0009a538) sp_fs_schedule_track_pane_g1

0xcbbc,	// (0x0009a540) sp_fs_schedule_track_pane_g2

0xcbc4,	// (0x0009a548) sp_fs_schedule_track_pane_g3

0xcbcc,	// (0x0009a550) sp_fs_schedule_track_pane_g4

0xcbd4,	// (0x0009a558) sp_fs_schedule_track_pane_g5

0x0004,

0xfd91,	// (0x0009d715) sp_fs_schedule_track_pane_g

0xb5be,	// (0x00098f42) bg_sp_fs_schedule_viewer_highlight_g1

0xe136,	// (0x0009baba) bg_sp_fs_schedule_viewer_highlight_g2

0xb5c6,	// (0x00098f4a) bg_sp_fs_schedule_viewer_highlight_g3

0xb5ce,	// (0x00098f52) bg_sp_fs_schedule_viewer_highlight_g4

0xb7f0,	// (0x00099174) bg_sp_fs_schedule_viewer_highlight_g5

0xb5de,	// (0x00098f62) bg_sp_fs_schedule_viewer_highlight_g6

0xb5e6,	// (0x00098f6a) bg_sp_fs_schedule_viewer_highlight_g7

0xb5ee,	// (0x00098f72) bg_sp_fs_schedule_viewer_highlight_g8

0xe0fb,	// (0x0009ba7f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd9c,	// (0x0009d720) bg_sp_fs_schedule_viewer_highlight_g

0x0baa,	// (0x0008e52e) bg_main_sp_fs_ribbon_pane

0x9105,	// (0x00096a89) main_sp_fs_ribbon_pane_g1

0xcbdc,	// (0x0009a560) main_sp_fs_ribbon_pane_t1

0x910e,	// (0x00096a92) main_sp_fs_ribbon_pane_t2

0xcbeb,	// (0x0009a56f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdaf,	// (0x0009d733) main_sp_fs_ribbon_pane_t

0xcbfa,	// (0x0009a57e) main_sp_fs_ribbon_scheduler_pane

0xcc02,	// (0x0009a586) bg_main_sp_fs_ribbon_pane_g1

0xcc0b,	// (0x0009a58f) bg_main_sp_fs_ribbon_pane_g2

0xcc14,	// (0x0009a598) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdb6,	// (0x0009d73a) bg_main_sp_fs_ribbon_pane_g

0xcc1c,	// (0x0009a5a0) main_sp_fs_ribbon_scheduler_pane_g1

0xcc25,	// (0x0009a5a9) main_sp_fs_ribbon_scheduler_pane_g2

0xcc2e,	// (0x0009a5b2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdbd,	// (0x0009d741) main_sp_fs_ribbon_scheduler_pane_g

0xcc37,	// (0x0009a5bb) list_cale_mrui_pane

0x911d,	// (0x00096aa1) sp_fs_scroll_pane_cp07_ParamLimits

0x911d,	// (0x00096aa1) sp_fs_scroll_pane_cp07

0x9135,	// (0x00096ab9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9135,	// (0x00096ab9) bg_sp_fs_schedule_viewer_highlight

0xcc44,	// (0x0009a5c8) list_single_sp_fs_schedule_track_pane_cp01

0xcc4c,	// (0x0009a5d0) list_sp_fs_schedule_track_pane

0xcc54,	// (0x0009a5d8) sp_fs_scroll_pane_cp06_ParamLimits

0xcc54,	// (0x0009a5d8) sp_fs_scroll_pane_cp06

0xa7b6,	// (0x0009813a) bgmain_sp_fs_calendar_pane_g1

0x9145,	// (0x00096ac9) list_single_cale_mrui_pane_ParamLimits

0x9145,	// (0x00096ac9) list_single_cale_mrui_pane

0xcc66,	// (0x0009a5ea) list_single_cale_mrui_row_pane_ParamLimits

0xcc66,	// (0x0009a5ea) list_single_cale_mrui_row_pane

0xcc7c,	// (0x0009a600) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcc7c,	// (0x0009a600) list_single_cale_mrui_row_pane_g1

0xccc1,	// (0x0009a645) list_single_cale_mrui_row_pane_t1_ParamLimits

0xccc1,	// (0x0009a645) list_single_cale_mrui_row_pane_t1

0x9165,	// (0x00096ae9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9165,	// (0x00096ae9) list_single_cale_mrui_row_pane_t2

0xccd3,	// (0x0009a657) list_single_cale_mrui_row_pane_t3_ParamLimits

0xccd3,	// (0x0009a657) list_single_cale_mrui_row_pane_t3

0xcd02,	// (0x0009a686) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcd02,	// (0x0009a686) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdcb,	// (0x0009d74f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdcb,	// (0x0009d74f) list_single_cale_mrui_row_pane_t

0x91cb,	// (0x00096b4f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x91cb,	// (0x00096b4f) list_single_cmail_header_editor_pane_bg_cp01

0x91ef,	// (0x00096b73) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x91ef,	// (0x00096b73) list_single_cmail_header_editor_pane_bg_cp02

0x920d,	// (0x00096b91) main_radioblah_text_pane_t1_ParamLimits

0x920d,	// (0x00096b91) main_radioblah_text_pane_t1

0xcd31,	// (0x0009a6b5) cam6_indi_pane_cp01

0xcd39,	// (0x0009a6bd) cam6_mode_pane_cp01

0xcd41,	// (0x0009a6c5) cam6_pano_pane

0xcd4a,	// (0x0009a6ce) cam6_zoom_pane_cp01

0xcd52,	// (0x0009a6d6) cam6_pano_image_pane

0xcd5b,	// (0x0009a6df) cam6_pano_pane_g1

0xc2df,	// (0x00099c63) cam6_pano_pane_g2

0xcd64,	// (0x0009a6e8) cam6_pano_pane_g3

0xcd6d,	// (0x0009a6f1) cam6_pano_pane_g4

0xada3,	// (0x00098727) cam6_pano_pane_g5

0xcd76,	// (0x0009a6fa) cam6_pano_pane_g6

0xcd7e,	// (0x0009a702) cam6_pano_pane_g7

0xcd86,	// (0x0009a70a) cam6_pano_pane_g8

0xcd8f,	// (0x0009a713) cam6_pano_pane_g9

0x0008,

0xfdd4,	// (0x0009d758) cam6_pano_pane_g

0x0baa,	// (0x0008e52e) main_browser_tag_pane

0xcaad,	// (0x0009a431) grid_navstr_albumart_pane

0xcd98,	// (0x0009a71c) cell_navstr_albumart_pane_ParamLimits

0xcd98,	// (0x0009a71c) cell_navstr_albumart_pane

0xea0c,	// (0x0009c390) cell_navstr_albumart_pane_g1

0x43a9,	// (0x00091d2d) cell_navstr_albumart_pane_g2

0x43b9,	// (0x00091d3d) cell_navstr_albumart_pane_g3

0x43b1,	// (0x00091d35) cell_navstr_albumart_pane_g4

0x0003,

0xfde7,	// (0x0009d76b) cell_navstr_albumart_pane_g

0x9226,	// (0x00096baa) bt_list_pane_ParamLimits

0x9226,	// (0x00096baa) bt_list_pane

0x9239,	// (0x00096bbd) bt_list_pane_t1

0x9248,	// (0x00096bcc) bt_list_pane_t2

0x0001,

0xfdf0,	// (0x0009d774) bt_list_pane_t

0x0baa,	// (0x0008e52e) main_cale_prevew_pane

0x9257,	// (0x00096bdb) popup_cale_preview_window_ParamLimits

0x9257,	// (0x00096bdb) popup_cale_preview_window

0x47a2,	// (0x00092126) bg_popup_preview_window_pane_cp05_ParamLimits

0x47a2,	// (0x00092126) bg_popup_preview_window_pane_cp05

0xcdaf,	// (0x0009a733) list_cale_preview_pane_ParamLimits

0xcdaf,	// (0x0009a733) list_cale_preview_pane

0x926c,	// (0x00096bf0) list_double_cale_preview_pane_ParamLimits

0x926c,	// (0x00096bf0) list_double_cale_preview_pane

0x927d,	// (0x00096c01) list_single_cale_preview_pane_ParamLimits

0x927d,	// (0x00096c01) list_single_cale_preview_pane

0xcdbb,	// (0x0009a73f) list_single_cale_preview_pane_g1

0xcdc3,	// (0x0009a747) list_single_cale_preview_pane_t1_ParamLimits

0xcdc3,	// (0x0009a747) list_single_cale_preview_pane_t1

0x9291,	// (0x00096c15) list_double_cale_preview_pane_g1

0x9299,	// (0x00096c1d) list_double_cale_preview_pane_t1_ParamLimits

0x9299,	// (0x00096c1d) list_double_cale_preview_pane_t1

0x92ae,	// (0x00096c32) list_double_cale_preview_pane_t2_ParamLimits

0x92ae,	// (0x00096c32) list_double_cale_preview_pane_t2

0x0001,

0xfdf5,	// (0x0009d779) list_double_cale_preview_pane_t_ParamLimits

0xfdf5,	// (0x0009d779) list_double_cale_preview_pane_t

0x0baa,	// (0x0008e52e) main_ezdial_pane

0x47a2,	// (0x00092126) main_sp_fs_email_pane_ParamLimits

0x88d2,	// (0x00096256) cmail_ddmenu_btn01_pane_ParamLimits

0x88d2,	// (0x00096256) cmail_ddmenu_btn01_pane

0x88e5,	// (0x00096269) cmail_ddmenu_btn02_pane_ParamLimits

0x88e5,	// (0x00096269) cmail_ddmenu_btn02_pane

0x8908,	// (0x0009628c) cmail_ddmenu_btn03_pane_ParamLimits

0x8908,	// (0x0009628c) cmail_ddmenu_btn03_pane

0x89a5,	// (0x00096329) main_sp_fs_ctrlbar_pane_ParamLimits

0x89c6,	// (0x0009634a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8f16,	// (0x0009689a) list_cmail_body_pane_ParamLimits

0xc9dd,	// (0x0009a361) bg_button_pane_cp12

0xc9f2,	// (0x0009a376) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc9f2,	// (0x0009a376) list_single_cmail_header_detail_pane_g3

0xc9ff,	// (0x0009a383) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc9ff,	// (0x0009a383) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd78,	// (0x0009d6fc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd78,	// (0x0009d6fc) list_single_cmail_header_detail_pane_t

0xcb15,	// (0x0009a499) phacti_term_pane_t2_ParamLimits

0xcb15,	// (0x0009a499) phacti_term_pane_t2

0x0001,

0xfd82,	// (0x0009d706) phacti_term_pane_t_ParamLimits

0xfd82,	// (0x0009d706) phacti_term_pane_t

0xcdd8,	// (0x0009a75c) aid_size_list_single_double

0x92c6,	// (0x00096c4a) popup_ezdial_listscroll_window

0x92dc,	// (0x00096c60) popup_number_entry_window_cp01

0xde7d,	// (0x0009b801) bg_popup_call_pane_cp09

0xcde4,	// (0x0009a768) ezdial_list_pane

0xcdec,	// (0x0009a770) scroll_pane_cp23

0xa2a2,	// (0x00097c26) bg_button_pane_cp028_ParamLimits

0xa2a2,	// (0x00097c26) bg_button_pane_cp028

0x92e8,	// (0x00096c6c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x92e8,	// (0x00096c6c) cmail_ddmenu_btn01_pane_g1

0x92f4,	// (0x00096c78) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x92f4,	// (0x00096c78) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdfa,	// (0x0009d77e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdfa,	// (0x0009d77e) cmail_ddmenu_btn01_pane_g

0xcdf4,	// (0x0009a778) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcdf4,	// (0x0009a778) cmail_ddmenu_btn01_pane_t1

0xa2a2,	// (0x00097c26) bg_button_pane_cp029_ParamLimits

0xa2a2,	// (0x00097c26) bg_button_pane_cp029

0x9300,	// (0x00096c84) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9300,	// (0x00096c84) cmail_ddmenu_btn02_pane_g1

0x9318,	// (0x00096c9c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9318,	// (0x00096c9c) cmail_ddmenu_btn02_pane_t1

0x47a2,	// (0x00092126) bg_button_pane_cp031_ParamLimits

0x47a2,	// (0x00092126) bg_button_pane_cp031

0x9300,	// (0x00096c84) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9300,	// (0x00096c84) cmail_ddmenu_btn03_pane_g1

0x9318,	// (0x00096c9c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9318,	// (0x00096c9c) cmail_ddmenu_btn03_pane_t1

0x64b8,	// (0x00093e3c) cell_dialer2_keypad_pane_t1_ParamLimits

0x64d2,	// (0x00093e56) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x64d2,	// (0x00093e56) cell_dialer2_keypad_pane_t1_copy1

0x81a9,	// (0x00095b2d) ncimui_group_button_pane

0x47a2,	// (0x00092126) main_sp_fs_calendar_pane_ParamLimits

0x8f16,	// (0x0009689a) list_single_cmail_header_caption_pane_ParamLimits

0xcb60,	// (0x0009a4e4) aid_recal_txt_sm_pane

0x0baa,	// (0x0008e52e) mian_recal_day_pane

0xcba2,	// (0x0009a526) popup_sp_fs_cale_preview_window_ParamLimits

0xce09,	// (0x0009a78d) list_recal_day_pane

0xce4b,	// (0x0009a7cf) list_single_recal_day_pane_ParamLimits

0xce4b,	// (0x0009a7cf) list_single_recal_day_pane

0xce5d,	// (0x0009a7e1) list_single_recal_day_pane_g1_ParamLimits

0xce5d,	// (0x0009a7e1) list_single_recal_day_pane_g1

0xce69,	// (0x0009a7ed) list_single_recal_day_pane_g2_ParamLimits

0xce69,	// (0x0009a7ed) list_single_recal_day_pane_g2

0xce75,	// (0x0009a7f9) list_single_recal_day_pane_g3_ParamLimits

0xce75,	// (0x0009a7f9) list_single_recal_day_pane_g3

0x933c,	// (0x00096cc0) list_single_recal_day_pane_g4_ParamLimits

0x933c,	// (0x00096cc0) list_single_recal_day_pane_g4

0xce81,	// (0x0009a805) list_single_recal_day_pane_g5_ParamLimits

0xce81,	// (0x0009a805) list_single_recal_day_pane_g5

0x9354,	// (0x00096cd8) list_single_recal_day_pane_g6_ParamLimits

0x9354,	// (0x00096cd8) list_single_recal_day_pane_g6

0x0004,

0xfe09,	// (0x0009d78d) list_single_recal_day_pane_g_ParamLimits

0xfe09,	// (0x0009d78d) list_single_recal_day_pane_g

0xce95,	// (0x0009a819) list_single_recal_day_pane_t1

0x9360,	// (0x00096ce4) list_single_recal_day_pane_t2

0x0001,

0xfe14,	// (0x0009d798) list_single_recal_day_pane_t

0x9372,	// (0x00096cf6) ncimui_query_button_pane_ParamLimits

0x9372,	// (0x00096cf6) ncimui_query_button_pane

0x9382,	// (0x00096d06) ncimui_query_button_pane_t1_ParamLimits

0x9382,	// (0x00096d06) ncimui_query_button_pane_t1

0xcea7,	// (0x0009a82b) ncimui_query_button_pane_t2_ParamLimits

0xcea7,	// (0x0009a82b) ncimui_query_button_pane_t2

0x0001,

0xfe19,	// (0x0009d79d) ncimui_query_button_pane_t_ParamLimits

0xfe19,	// (0x0009d79d) ncimui_query_button_pane_t

0x9395,	// (0x00096d19) query_button_pane_ParamLimits

0x9395,	// (0x00096d19) query_button_pane

0x0baa,	// (0x0008e52e) bg_button_pane_cp0028

0xceba,	// (0x0009a83e) query_button_pane_t1

0x47c4,	// (0x00092148) main_tport_pane_ParamLimits

0x8e29,	// (0x000967ad) bg_popup_window_pane_cp01_ParamLimits

0x8e29,	// (0x000967ad) bg_popup_window_pane_cp01

0x8e40,	// (0x000967c4) heading_pane_cp08_ParamLimits

0x8e40,	// (0x000967c4) heading_pane_cp08

0x8e51,	// (0x000967d5) heading_pane_cp07_ParamLimits

0x8e51,	// (0x000967d5) heading_pane_cp07

0xc98d,	// (0x0009a311) cell_tport_appsw_pane_g2

0x0002,

0xfd65,	// (0x0009d6e9) cell_tport_appsw_pane_g

0x3350,	// (0x00090cd4) input_candi_list_open_g1

0xe2e3,	// (0x0009bc67) list_cale_time_pane_g6_ParamLimits

0xe2e3,	// (0x0009bc67) list_cale_time_pane_g6

0x5456,	// (0x00092dda) aid_size_touch_calib_1_ParamLimits

0x5456,	// (0x00092dda) aid_size_touch_calib_1

0x5468,	// (0x00092dec) aid_size_touch_calib_2_ParamLimits

0x5468,	// (0x00092dec) aid_size_touch_calib_2

0x547e,	// (0x00092e02) aid_size_touch_calib_3_ParamLimits

0x547e,	// (0x00092e02) aid_size_touch_calib_3

0x5496,	// (0x00092e1a) aid_size_touch_calib_4_ParamLimits

0x5496,	// (0x00092e1a) aid_size_touch_calib_4

0x54aa,	// (0x00092e2e) main_touch_calib_button_group_pane_ParamLimits

0x54aa,	// (0x00092e2e) main_touch_calib_button_group_pane

0x54c2,	// (0x00092e46) main_touch_calib_pane_g1_ParamLimits

0x54d4,	// (0x00092e58) main_touch_calib_pane_g2_ParamLimits

0x54e6,	// (0x00092e6a) main_touch_calib_pane_g3_ParamLimits

0x54f8,	// (0x00092e7c) main_touch_calib_pane_g4_ParamLimits

0xf727,	// (0x0009d0ab) main_touch_calib_pane_g_ParamLimits

0x550a,	// (0x00092e8e) main_touch_calib_pane_t1_ParamLimits

0x5522,	// (0x00092ea6) main_touch_calib_pane_t2_ParamLimits

0x553a,	// (0x00092ebe) main_touch_calib_pane_t3_ParamLimits

0x554c,	// (0x00092ed0) main_touch_calib_pane_t4_ParamLimits

0x555e,	// (0x00092ee2) main_touch_calib_pane_t5_ParamLimits

0xf730,	// (0x0009d0b4) main_touch_calib_pane_t_ParamLimits

0xab59,	// (0x000984dd) list_single_fp_cale_pane_g3_ParamLimits

0xab59,	// (0x000984dd) list_single_fp_cale_pane_g3

0x9ff6,	// (0x0009797a) bg_button_pane_cp012_ParamLimits

0x9ff6,	// (0x0009797a) bg_vkb2_func_pane_cp03_ParamLimits

0x733b,	// (0x00094cbf) cell_vitu2_function_top_pane_g1_ParamLimits

0x9ff6,	// (0x0009797a) bg_vkb2_func_pane_cp04_ParamLimits

0x8139,	// (0x00095abd) main_ncimui_button_group_pane_ParamLimits

0x8139,	// (0x00095abd) main_ncimui_button_group_pane

0x8197,	// (0x00095b1b) main_ncimui_pane_t3_ParamLimits

0x8197,	// (0x00095b1b) main_ncimui_pane_t3

0xcac3,	// (0x0009a447) phacti_button_group_pane

0xcdd8,	// (0x0009a75c) aid_size_list_single_double_ParamLimits

0x92c6,	// (0x00096c4a) popup_ezdial_listscroll_window_ParamLimits

0x92dc,	// (0x00096c60) popup_number_entry_window_cp01_ParamLimits

0x93a7,	// (0x00096d2b) phacti_button_pane_ParamLimits

0x93a7,	// (0x00096d2b) phacti_button_pane

0x0baa,	// (0x0008e52e) bg_button_pane_cp14

0xcec8,	// (0x0009a84c) phacti_button_pane_t1

0x93b6,	// (0x00096d3a) main_touch_calib_button_pane_ParamLimits

0x93b6,	// (0x00096d3a) main_touch_calib_button_pane

0xdcae,	// (0x0009b632) bg_button_pane_cp18_ParamLimits

0xdcae,	// (0x0009b632) bg_button_pane_cp18

0x93d1,	// (0x00096d55) main_touch_calib_button_pane_t1_ParamLimits

0x93d1,	// (0x00096d55) main_touch_calib_button_pane_t1

0x93e7,	// (0x00096d6b) main_touch_calib_button_pane_t2_ParamLimits

0x93e7,	// (0x00096d6b) main_touch_calib_button_pane_t2

0x0001,

0xfe1e,	// (0x0009d7a2) main_touch_calib_button_pane_t_ParamLimits

0xfe1e,	// (0x0009d7a2) main_touch_calib_button_pane_t

0x0baa,	// (0x0008e52e) cell_ncimui_button_pane

0x0baa,	// (0x0008e52e) bg_button_pane_cp032

0xced6,	// (0x0009a85a) cell_ncimui_button_pane_t1

0xb380,	// (0x00098d04) image3_infobar_pane_ParamLimits

0xb380,	// (0x00098d04) image3_infobar_pane

0x8532,	// (0x00095eb6) fs_bigclock_status_pane_ParamLimits

0x8532,	// (0x00095eb6) fs_bigclock_status_pane

0x853f,	// (0x00095ec3) main_fs_bigclock_clock_pane_ParamLimits

0x853f,	// (0x00095ec3) main_fs_bigclock_clock_pane

0x8561,	// (0x00095ee5) main_fs_bigclock_indi_pane_ParamLimits

0x8561,	// (0x00095ee5) main_fs_bigclock_indi_pane

0x858b,	// (0x00095f0f) main_fs_bigclock_swipe_pane_ParamLimits

0x858b,	// (0x00095f0f) main_fs_bigclock_swipe_pane

0x0baa,	// (0x0008e52e) main_fs_clock_dumped_data

0xc3ec,	// (0x00099d70) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc3ec,	// (0x00099d70) list_single_fs_bigclock_indicator_pane_g1

0xc406,	// (0x00099d8a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc406,	// (0x00099d8a) list_single_fs_bigclock_indicator_pane_g2

0xc420,	// (0x00099da4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc420,	// (0x00099da4) list_single_fs_bigclock_indicator_pane_g3

0xc43a,	// (0x00099dbe) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc43a,	// (0x00099dbe) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc42,	// (0x0009d5c6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc42,	// (0x0009d5c6) list_single_fs_bigclock_indicator_pane_g

0xc463,	// (0x00099de7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc463,	// (0x00099de7) list_single_fs_bigclock_indicator_pane_t1

0xc48b,	// (0x00099e0f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc48b,	// (0x00099e0f) list_single_fs_bigclock_indicator_pane_t2

0xc4b3,	// (0x00099e37) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc4b3,	// (0x00099e37) list_single_fs_bigclock_indicator_pane_t3

0xc4db,	// (0x00099e5f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc4db,	// (0x00099e5f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc4d,	// (0x0009d5d1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc4d,	// (0x0009d5d1) list_single_fs_bigclock_indicator_pane_t

0xcee4,	// (0x0009a868) image3_infobar_fav_pane_ParamLimits

0xcee4,	// (0x0009a868) image3_infobar_fav_pane

0xcef4,	// (0x0009a878) image3_infobar_loc_pane_ParamLimits

0xcef4,	// (0x0009a878) image3_infobar_loc_pane

0xcf08,	// (0x0009a88c) image3_infobar_time_pane_ParamLimits

0xcf08,	// (0x0009a88c) image3_infobar_time_pane

0xa7b6,	// (0x0009813a) image3_infobar_time_pane_g1

0xcf18,	// (0x0009a89c) image3_infobar_time_pane_t1

0xa7b6,	// (0x0009813a) image3_infobar_loc_pane_g1

0xcf26,	// (0x0009a8aa) image3_infobar_loc_pane_g2

0x0001,

0xfe23,	// (0x0009d7a7) image3_infobar_loc_pane_g

0xcf2e,	// (0x0009a8b2) image3_infobar_loc_pane_t1

0xa7b6,	// (0x0009813a) image3_infobar_fav_pane_g1

0xcf3c,	// (0x0009a8c0) image3_infobar_fav_pane_g2

0x0001,

0xfe28,	// (0x0009d7ac) image3_infobar_fav_pane_g

0xcf44,	// (0x0009a8c8) fs_bigclock_status_battery_pane

0xcf4d,	// (0x0009a8d1) fs_bigclock_status_signal_pane

0xcf56,	// (0x0009a8da) fs_bigclock_status_title_pane

0xcf5f,	// (0x0009a8e3) fs_bigclock_status_signal_pane_g1

0xcf68,	// (0x0009a8ec) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe2d,	// (0x0009d7b1) fs_bigclock_status_signal_pane_g

0xcf70,	// (0x0009a8f4) fs_bigclock_status_battery_pane_g1

0xcf79,	// (0x0009a8fd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe32,	// (0x0009d7b6) fs_bigclock_status_battery_pane_g

0xcf81,	// (0x0009a905) fs_bigclock_status_title_pane_t1

0x9405,	// (0x00096d89) main_fs_bigclock_clock_pane_g1

0x9417,	// (0x00096d9b) main_fs_bigclock_clock_pane_g2

0x9428,	// (0x00096dac) main_fs_bigclock_clock_pane_g3

0x9428,	// (0x00096dac) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe37,	// (0x0009d7bb) main_fs_bigclock_clock_pane_g

0x943b,	// (0x00096dbf) main_fs_bigclock_clock_pane_t1

0x9456,	// (0x00096dda) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe40,	// (0x0009d7c4) main_fs_bigclock_clock_pane_t

0xcf8f,	// (0x0009a913) list_single_fs_bigclock_indicator_pane_ParamLimits

0xcf8f,	// (0x0009a913) list_single_fs_bigclock_indicator_pane

0xcfa0,	// (0x0009a924) list_single_fs_bigclock_pane_ParamLimits

0xcfa0,	// (0x0009a924) list_single_fs_bigclock_pane

0xcfc6,	// (0x0009a94a) main_fs_bigclock_indicator_pane_t1

0xcfd5,	// (0x0009a959) list_single_fs_bigclock_pane_g1

0xcfdd,	// (0x0009a961) list_single_fs_bigclock_pane_t1

0xa7b6,	// (0x0009813a) main_fs_bigclock_swipe_pane_g1

0xd01d,	// (0x0009a9a1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe51,	// (0x0009d7d5) main_fs_bigclock_swipe_pane_g

0xd025,	// (0x0009a9a9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd025,	// (0x0009a9a9) main_fs_bigclock_swipe_pane_t1

0x2c6d,	// (0x000905f1) call_type_pane_ParamLimits

0x0baa,	// (0x0008e52e) main_btmg_pane

0xcca8,	// (0x0009a62c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcca8,	// (0x0009a62c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdc4,	// (0x0009d748) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdc4,	// (0x0009d748) list_single_cale_mrui_row_pane_g

0xce32,	// (0x0009a7b6) list_recal_vselct_arw_lo_pane

0xce3a,	// (0x0009a7be) list_recal_vselct_arw_up_pane

0xce42,	// (0x0009a7c6) list_recal_vselct_pane

0xd042,	// (0x0009a9c6) btmg_button_pane

0x94b6,	// (0x00096e3a) main_btmg_pane_g1

0x0baa,	// (0x0008e52e) bg_button_pane_cp044

0xd04a,	// (0x0009a9ce) btmg_button_pane_t1

0xa28e,	// (0x00097c12) aid_listscroll_gen

0x47a2,	// (0x00092126) main_cntbar_detail_pane

0xc9b3,	// (0x0009a337) list_cmail_folder_pane

0xc9c3,	// (0x0009a347) sp_fs_scroll_pane_cp03_ParamLimits

0x94be,	// (0x00096e42) list_single_fs_dyc_pane_cp01_ParamLimits

0x94be,	// (0x00096e42) list_single_fs_dyc_pane_cp01

0xd058,	// (0x0009a9dc) aid_size_cmail_indent

0xd061,	// (0x0009a9e5) list_single_dyc_row_pane_cp01

0x94fc,	// (0x00096e80) cntbar_detail_list_pane_ParamLimits

0x94fc,	// (0x00096e80) cntbar_detail_list_pane

0x9542,	// (0x00096ec6) main_cntbar_detail_cont_pane_ParamLimits

0x9542,	// (0x00096ec6) main_cntbar_detail_cont_pane

0x9556,	// (0x00096eda) scroll_pane_cp032_ParamLimits

0x9556,	// (0x00096eda) scroll_pane_cp032

0x9562,	// (0x00096ee6) cntbar_detail_list_event_pane_ParamLimits

0x9562,	// (0x00096ee6) cntbar_detail_list_event_pane

0x950c,	// (0x00096e90) cntbar_detail_list_shct_pane

0xd06a,	// (0x0009a9ee) aid_list_gen

0xddb3,	// (0x0009b737) aid_scroll

0xbb16,	// (0x0009949a) aid_size_touch_scroll_bar

0xbb4a,	// (0x000994ce) aid_list_double

0xbb41,	// (0x000994c5) aid_list_single

0xbb41,	// (0x000994c5) aid_list_single_lg

0xd073,	// (0x0009a9f7) aid_list_z_g_a_sm

0xa016,	// (0x0009799a) aid_list_z_g_d

0xd07b,	// (0x0009a9ff) aid_txt_z_prm

0x9573,	// (0x00096ef7) aid_txt_z_prm_cp01

0x9581,	// (0x00096f05) aid_txt_z_sec

0x958f,	// (0x00096f13) main_cntbar_detail_cont_pane_g1_ParamLimits

0x958f,	// (0x00096f13) main_cntbar_detail_cont_pane_g1

0x95a3,	// (0x00096f27) main_cntbar_detail_cont_pane_g2_ParamLimits

0x95a3,	// (0x00096f27) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe56,	// (0x0009d7da) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe56,	// (0x0009d7da) main_cntbar_detail_cont_pane_g

0xd089,	// (0x0009aa0d) main_cntbar_detail_cont_pane_t1

0xd097,	// (0x0009aa1b) main_cntbar_detail_cont_pane_t2

0xd0a5,	// (0x0009aa29) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe5b,	// (0x0009d7df) main_cntbar_detail_cont_pane_t

0x95b3,	// (0x00096f37) cell_cntbar_detail_list_shct_pane_ParamLimits

0x95b3,	// (0x00096f37) cell_cntbar_detail_list_shct_pane

0xd0b3,	// (0x0009aa37) cntbar_detail_list_shct_pane_g1

0xd0bc,	// (0x0009aa40) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe62,	// (0x0009d7e6) cntbar_detail_list_shct_pane_g

0x95c5,	// (0x00096f49) cntbar_detail_list_event_pane_g1_ParamLimits

0x95c5,	// (0x00096f49) cntbar_detail_list_event_pane_g1

0x95d1,	// (0x00096f55) cntbar_detail_list_event_pane_g2_ParamLimits

0x95d1,	// (0x00096f55) cntbar_detail_list_event_pane_g2

0x0005,

0xfe67,	// (0x0009d7eb) cntbar_detail_list_event_pane_g_ParamLimits

0xfe67,	// (0x0009d7eb) cntbar_detail_list_event_pane_g

0x963d,	// (0x00096fc1) cntbar_detail_list_event_pane_t1_ParamLimits

0x963d,	// (0x00096fc1) cntbar_detail_list_event_pane_t1

0x9652,	// (0x00096fd6) cntbar_detail_list_event_pane_t2_ParamLimits

0x9652,	// (0x00096fd6) cntbar_detail_list_event_pane_t2

0x0002,

0xfe74,	// (0x0009d7f8) cntbar_detail_list_event_pane_t_ParamLimits

0xfe74,	// (0x0009d7f8) cntbar_detail_list_event_pane_t

0xa7b6,	// (0x0009813a) cell_cntbar_detail_list_shct_pane_g1

0xe865,	// (0x0009c1e9) navi_pane_mv_g3

0x47a2,	// (0x00092126) main_cntbar_detail_pane_ParamLimits

0x0baa,	// (0x0008e52e) main_notif_wgt_pane

0xb0d4,	// (0x00098a58) aid_tch_main_mp4_pane_g4

0xb2f6,	// (0x00098c7a) popup_slider_window_cp02

0xce28,	// (0x0009a7ac) list_recal_day_event_pane

0x94d4,	// (0x00096e58) cntbar_detail_btn_pane_ParamLimits

0x94d4,	// (0x00096e58) cntbar_detail_btn_pane

0x94e7,	// (0x00096e6b) cntbar_detail_btn_pane_cp01_ParamLimits

0x94e7,	// (0x00096e6b) cntbar_detail_btn_pane_cp01

0x950c,	// (0x00096e90) cntbar_detail_list_shct_pane_ParamLimits

0x951c,	// (0x00096ea0) cntbar_detail_pane_g1_ParamLimits

0x951c,	// (0x00096ea0) cntbar_detail_pane_g1

0x952c,	// (0x00096eb0) cntbar_detail_pane_t1_ParamLimits

0x952c,	// (0x00096eb0) cntbar_detail_pane_t1

0x95dd,	// (0x00096f61) cntbar_detail_list_event_pane_g3_ParamLimits

0x95dd,	// (0x00096f61) cntbar_detail_list_event_pane_g3

0x95f5,	// (0x00096f79) cntbar_detail_list_event_pane_g4_ParamLimits

0x95f5,	// (0x00096f79) cntbar_detail_list_event_pane_g4

0x960d,	// (0x00096f91) cntbar_detail_list_event_pane_g5_ParamLimits

0x960d,	// (0x00096f91) cntbar_detail_list_event_pane_g5

0x9625,	// (0x00096fa9) cntbar_detail_list_event_pane_g6_ParamLimits

0x9625,	// (0x00096fa9) cntbar_detail_list_event_pane_g6

0x9667,	// (0x00096feb) cntbar_detail_list_event_pane_t3_ParamLimits

0x9667,	// (0x00096feb) cntbar_detail_list_event_pane_t3

0x9679,	// (0x00096ffd) popup_notif_wgt_window_ParamLimits

0x9679,	// (0x00096ffd) popup_notif_wgt_window

0x968e,	// (0x00097012) popup_submenu_window_cp01_ParamLimits

0x968e,	// (0x00097012) popup_submenu_window_cp01

0xde7d,	// (0x0009b801) bg_popup_window_pane_cp10

0xd0c5,	// (0x0009aa49) listscroll_notif_wgt_pane

0xd0d6,	// (0x0009aa5a) list_notif_wgt_window

0xd0df,	// (0x0009aa63) scroll_pane_cp033

0x969e,	// (0x00097022) list_notif_wgt_row_pane_ParamLimits

0x969e,	// (0x00097022) list_notif_wgt_row_pane

0xd0e8,	// (0x0009aa6c) aid_size_list_notif_wgt_del

0xd0f5,	// (0x0009aa79) list_notif_wgt_row_pane_g1

0xd101,	// (0x0009aa85) list_notif_wgt_row_pane_g2

0xd115,	// (0x0009aa99) list_notif_wgt_row_pane_g3

0x0002,

0xfe7b,	// (0x0009d7ff) list_notif_wgt_row_pane_g

0xd122,	// (0x0009aaa6) list_notif_wgt_row_pane_t1

0xd138,	// (0x0009aabc) list_notif_wgt_row_pane_t2

0xd14a,	// (0x0009aace) list_notif_wgt_row_pane_t3

0x0002,

0xfe82,	// (0x0009d806) list_notif_wgt_row_pane_t

0xb822,	// (0x000991a6) list_recal_day_event_pane_g1

0xd15c,	// (0x0009aae0) list_recal_day_event_pane_t1

0x0baa,	// (0x0008e52e) bg_button_pane_cp045

0x96ae,	// (0x00097032) cntbar_detail_btn_pane_t1

0xa2a2,	// (0x00097c26) main_callh_pane_ParamLimits

0xa2a2,	// (0x00097c26) main_callh_pane

0x0baa,	// (0x0008e52e) main_coverflow0_pane

0x0baa,	// (0x0008e52e) main_wgtman_pane

0x859f,	// (0x00095f23) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x859f,	// (0x00095f23) main_fs_bigclock_unlock_btn_pane

0xc985,	// (0x0009a309) bg_button_pane_cp16

0xc995,	// (0x0009a319) cell_tport_appsw_pane_g3

0x96bc,	// (0x00097040) cf0_flow_pane_ParamLimits

0x96bc,	// (0x00097040) cf0_flow_pane

0xd16b,	// (0x0009aaef) listscroll_cf0_pane

0xd174,	// (0x0009aaf8) main_cf0_pane_g1

0x96d1,	// (0x00097055) main_cf0_pane_t1_ParamLimits

0x96d1,	// (0x00097055) main_cf0_pane_t1

0x96e6,	// (0x0009706a) main_cf0_pane_t2_ParamLimits

0x96e6,	// (0x0009706a) main_cf0_pane_t2

0x0001,

0xfe8e,	// (0x0009d812) main_cf0_pane_t_ParamLimits

0xfe8e,	// (0x0009d812) main_cf0_pane_t

0xd186,	// (0x0009ab0a) scroll_pane_cp11

0x96fb,	// (0x0009707f) cf0_flow_pane_g1

0x9703,	// (0x00097087) cf0_flow_pane_g2

0x0001,

0xfe93,	// (0x0009d817) cf0_flow_pane_g

0x970b,	// (0x0009708f) cf0_flow_pane_t1

0x0baa,	// (0x0008e52e) main_call6_pane

0x0baa,	// (0x0008e52e) main_calllock_pane

0x9719,	// (0x0009709d) call6_btn_grp_pane_ParamLimits

0x9719,	// (0x0009709d) call6_btn_grp_pane

0x972f,	// (0x000970b3) call6_pane_g1_ParamLimits

0x972f,	// (0x000970b3) call6_pane_g1

0x9742,	// (0x000970c6) popup_call6_1st_window_ParamLimits

0x9742,	// (0x000970c6) popup_call6_1st_window

0x9751,	// (0x000970d5) popup_call6_2nd_window_ParamLimits

0x9751,	// (0x000970d5) popup_call6_2nd_window

0x9760,	// (0x000970e4) cell_call6_btn_pane_ParamLimits

0x9760,	// (0x000970e4) cell_call6_btn_pane

0xde7d,	// (0x0009b801) bg_popup_call2_in_pane_cp03

0xd18f,	// (0x0009ab13) popup_call6_1st_window_g1

0xd197,	// (0x0009ab1b) popup_call6_1st_window_g2

0xd19f,	// (0x0009ab23) popup_call6_1st_window_g3

0x0002,

0xfe98,	// (0x0009d81c) popup_call6_1st_window_g

0xd1a7,	// (0x0009ab2b) popup_call6_1st_window_t1

0xd1b6,	// (0x0009ab3a) popup_call6_1st_window_t2

0xd1c4,	// (0x0009ab48) popup_call6_1st_window_t3

0x0002,

0xfe9f,	// (0x0009d823) popup_call6_1st_window_t

0xde7d,	// (0x0009b801) bg_popup_call2_in_pane_cp04

0xd18f,	// (0x0009ab13) popup_call6_2nd_window_g1

0xd197,	// (0x0009ab1b) popup_call6_2nd_window_g2

0xd19f,	// (0x0009ab23) popup_call6_2nd_window_g3

0x0002,

0xfe98,	// (0x0009d81c) popup_call6_2nd_window_g

0xd1a7,	// (0x0009ab2b) popup_call6_2nd_window_t1

0xa004,	// (0x00097988) bg_button_pane_cp15

0xd8b7,	// (0x0009b23b) cell_call6_btn_pane_g1

0xd8c0,	// (0x0009b244) cell_call6_btn_pane_t1

0x9774,	// (0x000970f8) listscroll_wgtman_pane_ParamLimits

0x9774,	// (0x000970f8) listscroll_wgtman_pane

0x9795,	// (0x00097119) wgtman_btn_pane_ParamLimits

0x9795,	// (0x00097119) wgtman_btn_pane

0xe6bc,	// (0x0009c040) aid_scroll_copy1

0xd1d2,	// (0x0009ab56) list_wgtman_pane

0x97d5,	// (0x00097159) wgtman_btn_pane_g1_ParamLimits

0x97d5,	// (0x00097159) wgtman_btn_pane_g1

0x9801,	// (0x00097185) wgtman_btn_pane_t1_ParamLimits

0x9801,	// (0x00097185) wgtman_btn_pane_t1

0xd1dc,	// (0x0009ab60) wgtman_btn_pane_t2_ParamLimits

0xd1dc,	// (0x0009ab60) wgtman_btn_pane_t2

0x0001,

0xfea6,	// (0x0009d82a) wgtman_btn_pane_t_ParamLimits

0xfea6,	// (0x0009d82a) wgtman_btn_pane_t

0x983e,	// (0x000971c2) listrow_wgtman_pane_ParamLimits

0x983e,	// (0x000971c2) listrow_wgtman_pane

0x984f,	// (0x000971d3) listrow_wgtman_pane_g1

0x985c,	// (0x000971e0) listrow_wgtman_pane_g2

0x0001,

0xfeab,	// (0x0009d82f) listrow_wgtman_pane_g

0x9874,	// (0x000971f8) listrow_wgtman_pane_t1

0x988c,	// (0x00097210) listrow_wgtman_pane_t2

0x0001,

0xfeb0,	// (0x0009d834) listrow_wgtman_pane_t

0x98b2,	// (0x00097236) wait_bar_pane_cp09

0xd1f3,	// (0x0009ab77) main_calllock_btn_pane

0xd1fb,	// (0x0009ab7f) main_calllock_pane_g1

0x0baa,	// (0x0008e52e) bg_button_pane_cp17

0xd204,	// (0x0009ab88) main_calllock_btn_pane_g1

0xd20d,	// (0x0009ab91) main_calllock_btn_pane_t1

0x0baa,	// (0x0008e52e) main_dialer3_pane

0x0baa,	// (0x0008e52e) main_fmrd2_pane

0xa7b6,	// (0x0009813a) main_fs_bigclock_unlock_btn_pane_g1

0xd224,	// (0x0009aba8) main_fs_bigclock_unlock_btn_pane_t1

0x98c4,	// (0x00097248) area_fmrd2_info_pane_ParamLimits

0x98c4,	// (0x00097248) area_fmrd2_info_pane

0x98d3,	// (0x00097257) area_fmrd2_visual_pane_ParamLimits

0x98d3,	// (0x00097257) area_fmrd2_visual_pane

0x98e1,	// (0x00097265) fmrd2_indi_pane_ParamLimits

0x98e1,	// (0x00097265) fmrd2_indi_pane

0x98ee,	// (0x00097272) area_fmrd2_visual_pane_g1

0x98f6,	// (0x0009727a) area_fmrd2_visual_pane_t1

0x9904,	// (0x00097288) area_fmrd2_visual_pane_t2

0x9912,	// (0x00097296) area_fmrd2_visual_pane_t3

0x0002,

0xfeba,	// (0x0009d83e) area_fmrd2_visual_pane_t

0x9920,	// (0x000972a4) area_fmrd2_info_pane_g1

0x9928,	// (0x000972ac) area_fmrd2_info_pane_t1

0x9936,	// (0x000972ba) area_fmrd2_info_pane_t2

0x9944,	// (0x000972c8) area_fmrd2_info_pane_t3

0x9952,	// (0x000972d6) area_fmrd2_info_pane_t4

0x0003,

0xfec1,	// (0x0009d845) area_fmrd2_info_pane_t

0x9960,	// (0x000972e4) fmrd2_indi_pane_t1

0x996e,	// (0x000972f2) fmrd2_indi_pane_t2

0x997c,	// (0x00097300) fmrd2_indi_pane_t3

0x0002,

0xfeca,	// (0x0009d84e) fmrd2_indi_pane_t

0xc449,	// (0x00099dcd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc449,	// (0x00099dcd) list_single_fs_bigclock_indicator_pane_g5

0xc4f7,	// (0x00099e7b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc4f7,	// (0x00099e7b) list_single_fs_bigclock_indicator_pane_t5

0x905f,	// (0x000969e3) aid_cell_bcale_month_pane_ParamLimits

0x905f,	// (0x000969e3) aid_cell_bcale_month_pane

0x907d,	// (0x00096a01) bcale_month_pane_ParamLimits

0x907d,	// (0x00096a01) bcale_month_pane

0x9095,	// (0x00096a19) bcale_preview_pane_ParamLimits

0x9095,	// (0x00096a19) bcale_preview_pane

0xcfdd,	// (0x0009a961) list_single_fs_bigclock_pane_t1_ParamLimits

0xcff9,	// (0x0009a97d) list_single_fs_bigclock_pane_t2_ParamLimits

0xcff9,	// (0x0009a97d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe4c,	// (0x0009d7d0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe4c,	// (0x0009d7d0) list_single_fs_bigclock_pane_t

0xd21c,	// (0x0009aba0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeb5,	// (0x0009d839) main_fs_bigclock_unlock_btn_pane_g

0x998a,	// (0x0009730e) aid_dia3_key_size_ParamLimits

0x998a,	// (0x0009730e) aid_dia3_key_size

0x9999,	// (0x0009731d) aid_dia3_listrow_size_ParamLimits

0x9999,	// (0x0009731d) aid_dia3_listrow_size

0x99ac,	// (0x00097330) dia3_keypad_fun_pane_ParamLimits

0x99ac,	// (0x00097330) dia3_keypad_fun_pane

0x99c0,	// (0x00097344) dia3_keypad_num_pane_ParamLimits

0x99c0,	// (0x00097344) dia3_keypad_num_pane

0x99d1,	// (0x00097355) dia3_listscroll_pane_ParamLimits

0x99d1,	// (0x00097355) dia3_listscroll_pane

0x99e2,	// (0x00097366) dia3_numentry_pane_ParamLimits

0x99e2,	// (0x00097366) dia3_numentry_pane

0xd232,	// (0x0009abb6) dia3_list_pane

0xd23b,	// (0x0009abbf) scroll_pane_cp12

0x0baa,	// (0x0008e52e) bg_dia3_numentry_pane

0x99f4,	// (0x00097378) dia3_numentry_pane_t1

0x9a03,	// (0x00097387) cell_dia3_key_num_pane

0x9a0b,	// (0x0009738f) cell_dia3_key0_fun_pane_ParamLimits

0x9a0b,	// (0x0009738f) cell_dia3_key0_fun_pane

0x9a1f,	// (0x000973a3) cell_dia3_key1_fun_pane_ParamLimits

0x9a1f,	// (0x000973a3) cell_dia3_key1_fun_pane

0x9a36,	// (0x000973ba) dia3_listrow_pane

0xc14a,	// (0x00099ace) bg_dia3_numentry_pane_g1

0x0baa,	// (0x0008e52e) bg_button_pane_cp21

0xd244,	// (0x0009abc8) cell_dia3_key_num_pane_t1

0xd252,	// (0x0009abd6) cell_dia3_key_num_pane_t2

0xd261,	// (0x0009abe5) cell_dia3_key_num_pane_t3

0xd270,	// (0x0009abf4) cell_dia3_key_num_pane_t4

0x0003,

0xfed1,	// (0x0009d855) cell_dia3_key_num_pane_t

0x0baa,	// (0x0008e52e) bg_button_pane_cp19

0xd27f,	// (0x0009ac03) cell_dia3_key0_fun_pane_g1

0x0baa,	// (0x0008e52e) bg_button_pane_cp20

0x9a48,	// (0x000973cc) cell_dia3_key1_fun_pane_g1

0x9a50,	// (0x000973d4) area_left_week_number_pane

0x9a5c,	// (0x000973e0) area_top_day_name_pane

0x9a6d,	// (0x000973f1) frame_month_view_pane

0xd287,	// (0x0009ac0b) grid_month_view_pane

0x9a7e,	// (0x00097402) cell_top_day_name_pane_ParamLimits

0x9a7e,	// (0x00097402) cell_top_day_name_pane

0x9aa1,	// (0x00097425) cell_area_left_week_number_pane_ParamLimits

0x9aa1,	// (0x00097425) cell_area_left_week_number_pane

0x9ab5,	// (0x00097439) cell_month_view_pane_ParamLimits

0x9ab5,	// (0x00097439) cell_month_view_pane

0xd295,	// (0x0009ac19) frm_month_g1

0x9ada,	// (0x0009745e) frm_month_g2

0x9aeb,	// (0x0009746f) frm_month_g3

0x9afc,	// (0x00097480) frm_month_g4

0x9b0d,	// (0x00097491) frm_month_g5

0x9b1e,	// (0x000974a2) frm_month_g6

0x9b2f,	// (0x000974b3) frm_month_g7

0xd2a2,	// (0x0009ac26) frm_month_g8

0x9b40,	// (0x000974c4) frm_month_g9

0x9b50,	// (0x000974d4) frm_month_g10

0x9b60,	// (0x000974e4) frm_month_g11

0x9b70,	// (0x000974f4) frm_month_g12

0x9b80,	// (0x00097504) frm_month_g13

0x9b90,	// (0x00097514) frm_month_g14

0x9ba0,	// (0x00097524) frm_month_g15

0x9bb2,	// (0x00097536) frm_month_g16

0x000f,

0xfeda,	// (0x0009d85e) frm_month_g

0xd2af,	// (0x0009ac33) cell_top_day_name_pane_t1

0x9bc4,	// (0x00097548) cell_area_left_week_number_pane_g1

0x9bd0,	// (0x00097554) cell_area_left_week_number_pane_t1

0xa9e5,	// (0x00098369) cell_month_view_pane_g1

0x9be3,	// (0x00097567) cell_month_view_pane_t1

0x0baa,	// (0x0008e52e) main_fps_pane

0xc70f,	// (0x0009a093) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc70f,	// (0x0009a093) cmail_ddmenu_btn02_pane_cp1

0xc72b,	// (0x0009a0af) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc72b,	// (0x0009a0af) cmail_ddmenu_btn02_pane_cp2

0x930c,	// (0x00096c90) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x930c,	// (0x00096c90) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdff,	// (0x0009d783) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdff,	// (0x0009d783) cmail_ddmenu_btn02_pane_g

0x932a,	// (0x00096cae) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x932a,	// (0x00096cae) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe04,	// (0x0009d788) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe04,	// (0x0009d788) cmail_ddmenu_btn02_pane_t

0x9bf6,	// (0x0009757a) fps_text_pane_ParamLimits

0x9bf6,	// (0x0009757a) fps_text_pane

0x9c0c,	// (0x00097590) main_fps_pane_g1_ParamLimits

0x9c0c,	// (0x00097590) main_fps_pane_g1

0x9c22,	// (0x000975a6) wait_bar_pane_cp010_ParamLimits

0x9c22,	// (0x000975a6) wait_bar_pane_cp010

0x9c33,	// (0x000975b7) fps_text_pane_t1_ParamLimits

0x9c33,	// (0x000975b7) fps_text_pane_t1

0xb481,	// (0x00098e05) cam4_image_uncrop_pane_g1

0xb48a,	// (0x00098e0e) cam4_image_uncrop_pane_g2

0x690b,	// (0x0009428f) cam4_image_uncrop_pane_g3

0x6914,	// (0x00094298) cam4_image_uncrop_pane_g4

0x0003,

0xf8c3,	// (0x0009d247) cam4_image_uncrop_pane_g

0x9a36,	// (0x000973ba) dia3_listrow_pane_ParamLimits

0x0baa,	// (0x0008e52e) main_phob2_pane

0x8eb0,	// (0x00096834) cell_tport_appsw_pane_cp02_ParamLimits

0x8eb0,	// (0x00096834) cell_tport_appsw_pane_cp02

0x8ec0,	// (0x00096844) cell_tport_appsw_pane_cp03_ParamLimits

0x8ec0,	// (0x00096844) cell_tport_appsw_pane_cp03

0x0baa,	// (0x0008e52e) phob2_contact_card_pane

0x0baa,	// (0x0008e52e) phob2_listscroll_pane

0xd2c2,	// (0x0009ac46) phob2_list_pane

0xd2ca,	// (0x0009ac4e) scroll_pane_cp034

0x9c4b,	// (0x000975cf) phob2_cc_data_pane_ParamLimits

0x9c4b,	// (0x000975cf) phob2_cc_data_pane

0x9c68,	// (0x000975ec) phob2_cc_listscroll_pane_ParamLimits

0x9c68,	// (0x000975ec) phob2_cc_listscroll_pane

0x983e,	// (0x000971c2) list_double_large_graphic_phob2_pane_ParamLimits

0x983e,	// (0x000971c2) list_double_large_graphic_phob2_pane

0x9c84,	// (0x00097608) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9c84,	// (0x00097608) list_double_large_graphic_phob2_pane_g1

0x9c9a,	// (0x0009761e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9c9a,	// (0x0009761e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfefb,	// (0x0009d87f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfefb,	// (0x0009d87f) list_double_large_graphic_phob2_pane_g

0x9ca6,	// (0x0009762a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9ca6,	// (0x0009762a) list_double_large_graphic_phob2_pane_t1

0x9cbc,	// (0x00097640) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9cbc,	// (0x00097640) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff00,	// (0x0009d884) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff00,	// (0x0009d884) list_double_large_graphic_phob2_pane_t

0x0baa,	// (0x0008e52e) list_highlight_pane_cp024

0x9cd1,	// (0x00097655) phob2_cc_button_pane

0x9cd9,	// (0x0009765d) phob2_cc_data_pane_g1_ParamLimits

0x9cd9,	// (0x0009765d) phob2_cc_data_pane_g1

0x9cee,	// (0x00097672) phob2_cc_data_pane_g2_ParamLimits

0x9cee,	// (0x00097672) phob2_cc_data_pane_g2

0x0001,

0xff05,	// (0x0009d889) phob2_cc_data_pane_g_ParamLimits

0xff05,	// (0x0009d889) phob2_cc_data_pane_g

0x9cfe,	// (0x00097682) phob2_cc_data_pane_t1_ParamLimits

0x9cfe,	// (0x00097682) phob2_cc_data_pane_t1

0x9d16,	// (0x0009769a) phob2_cc_data_pane_t2_ParamLimits

0x9d16,	// (0x0009769a) phob2_cc_data_pane_t2

0x9d2e,	// (0x000976b2) phob2_cc_data_pane_t3_ParamLimits

0x9d2e,	// (0x000976b2) phob2_cc_data_pane_t3

0x0002,

0xff0a,	// (0x0009d88e) phob2_cc_data_pane_t_ParamLimits

0xff0a,	// (0x0009d88e) phob2_cc_data_pane_t

0xd2d2,	// (0x0009ac56) phob2_cc_list_pane_ParamLimits

0xd2d2,	// (0x0009ac56) phob2_cc_list_pane

0xc067,	// (0x000999eb) scroll_pane_cp035_ParamLimits

0xc067,	// (0x000999eb) scroll_pane_cp035

0x47a2,	// (0x00092126) bg_button_pane_cp033

0xd2de,	// (0x0009ac62) phob2_cc_button_pane_g1

0xd2ea,	// (0x0009ac6e) phob2_cc_button_pane_t1

0xd2ff,	// (0x0009ac83) phob2_cc_button_pane_t2

0x0001,

0xff11,	// (0x0009d895) phob2_cc_button_pane_t

0x9d46,	// (0x000976ca) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9d46,	// (0x000976ca) list_double_large_graphic_phob2_cc_pane

0x9d74,	// (0x000976f8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9d74,	// (0x000976f8) list_double_large_graphic_phob2_cc_pane_g1

0x9d80,	// (0x00097704) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9d80,	// (0x00097704) list_double_large_graphic_phob2_cc_pane_g2

0x9d8c,	// (0x00097710) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9d8c,	// (0x00097710) list_double_large_graphic_phob2_cc_pane_g3

0x9d98,	// (0x0009771c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9d98,	// (0x0009771c) list_double_large_graphic_phob2_cc_pane_g4

0x9da4,	// (0x00097728) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9da4,	// (0x00097728) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff16,	// (0x0009d89a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff16,	// (0x0009d89a) list_double_large_graphic_phob2_cc_pane_g

0x9db0,	// (0x00097734) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9db0,	// (0x00097734) list_double_large_graphic_phob2_cc_pane_t1

0x9dd9,	// (0x0009775d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9dd9,	// (0x0009775d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff21,	// (0x0009d8a5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff21,	// (0x0009d8a5) list_double_large_graphic_phob2_cc_pane_t

0xd311,	// (0x0009ac95) list_highlight_pane_cp025_ParamLimits

0xd311,	// (0x0009ac95) list_highlight_pane_cp025

0x47a2,	// (0x00092126) bg_button_pane_cp033_ParamLimits

0xd2de,	// (0x0009ac62) phob2_cc_button_pane_g1_ParamLimits

0xd2ea,	// (0x0009ac6e) phob2_cc_button_pane_t1_ParamLimits

0xd2ff,	// (0x0009ac83) phob2_cc_button_pane_t2_ParamLimits

0xff11,	// (0x0009d895) phob2_cc_button_pane_t_ParamLimits

0x0d98,	// (0x0008e71c) popup_wgtman_window

0xc16a,	// (0x00099aee) scroll_pane_cp038

0x97b7,	// (0x0009713b) wgtman_btn_pane_cp_01_ParamLimits

0x97b7,	// (0x0009713b) wgtman_btn_pane_cp_01

0xd31f,	// (0x0009aca3) wgtman_content_pane

0xd328,	// (0x0009acac) wgtman_heading_pane

0x0baa,	// (0x0008e52e) bg_heading_pane_cp02

0xd331,	// (0x0009acb5) wgtman_heading_pane_g1

0xd339,	// (0x0009acbd) wgtman_heading_pane_t1

0xd347,	// (0x0009accb) scroll_pane_cp036

0xd34f,	// (0x0009acd3) wgtman_list_pane

0xd357,	// (0x0009acdb) wgtman_list_pane_t1_ParamLimits

0xd357,	// (0x0009acdb) wgtman_list_pane_t1

0xb46f,	// (0x00098df3) cam4_grid_pane

0x74e5,	// (0x00094e69) bg_button_pane_cp015_ParamLimits

0x74f5,	// (0x00094e79) bg_button_pane_cp016_ParamLimits

0x7507,	// (0x00094e8b) bg_button_pane_cp017_ParamLimits

0x7557,	// (0x00094edb) popup_vitu2_query_window_g3_ParamLimits

0x7557,	// (0x00094edb) popup_vitu2_query_window_g3

0x760a,	// (0x00094f8e) popup_vitu2_query_window_t6_ParamLimits

0x760a,	// (0x00094f8e) popup_vitu2_query_window_t6

0x7635,	// (0x00094fb9) popup_vitu2_query_window_t7_ParamLimits

0x7635,	// (0x00094fb9) popup_vitu2_query_window_t7

0xb481,	// (0x00098e05) cam4_grid_pane_g1

0xb48a,	// (0x00098e0e) cam4_grid_pane_g2

0xd36e,	// (0x0009acf2) cam4_grid_pane_g3

0xd377,	// (0x0009acfb) cam4_grid_pane_g4

0x0003,

0xff26,	// (0x0009d8aa) cam4_grid_pane_g

0x1cb2,	// (0x0008f636) aid_placing_vt_slider_lsc_ParamLimits

0x1f22,	// (0x0008f8a6) vidtel_button_pane_ParamLimits

0x1f22,	// (0x0008f8a6) vidtel_button_pane

0x0baa,	// (0x0008e52e) bg_button_pane_cp034

0x9e02,	// (0x00097786) vidtel_button_pane_g1

0x9e0a,	// (0x0009778e) vidtel_button_pane_t1

0xb7da,	// (0x0009915e) aid_size_vtel_slider_touch

0xc067,	// (0x000999eb) scroll_pane_cp039

0xc199,	// (0x00099b1d) ncim_query_button_pane_cp01_ParamLimits

0xc1b8,	// (0x00099b3c) ncimui_query_pane_g1_ParamLimits

0x47a2,	// (0x00092126) input_focus_pane_cp012_ParamLimits

0xc1dd,	// (0x00099b61) ncim_query_entry_pane_t1_ParamLimits

0xc067,	// (0x000999eb) scroll_pane_cp039_ParamLimits

0xe780,	// (0x0009c104) navi_pane_bcale_mc_g1

0xe788,	// (0x0009c10c) navi_pane_bcale_mc_t1

0xc75f,	// (0x0009a0e3) main_sp_fs_email_pane_g1

0xc76b,	// (0x0009a0ef) main_sp_fs_email_pane_g2

0x0001,

0xfcb7,	// (0x0009d63b) main_sp_fs_email_pane_g

0xccb4,	// (0x0009a638) list_single_cale_mrui_row_pane_g3_ParamLimits

0xccb4,	// (0x0009a638) list_single_cale_mrui_row_pane_g3

0x934a,	// (0x00096cce) list_single_recal_day_pane_g5_event_pane

0xce8d,	// (0x0009a811) list_single_recal_day_pane_g7

0xd380,	// (0x0009ad04) list_recal_day_event_pane_cp01

0xd389,	// (0x0009ad0d) list_recal_vselct_arw_lo_pane_cp01

0xd391,	// (0x0009ad15) list_recal_vselct_arw_up_pane_cp01

0xd399,	// (0x0009ad1d) list_recal_vselct_pane_cp01

0xb822,	// (0x000991a6) list_recal_day_event_pane_cp01_g1

0xd3a3,	// (0x0009ad27) list_recal_day_event_pane_cp01_t1

0xce95,	// (0x0009a819) list_single_recal_day_pane_t1_ParamLimits

0x9360,	// (0x00096ce4) list_single_recal_day_pane_t2_ParamLimits

0xfe14,	// (0x0009d798) list_single_recal_day_pane_t_ParamLimits

0xdbe5,	// (0x0009b569) bg_notes_pane_ParamLimits

0xdc88,	// (0x0009b60c) list_notes_pane_ParamLimits

0x10ab,	// (0x0008ea2f) scroll_pane_cp06_ParamLimits

0xdcae,	// (0x0009b632) main_notes_pane_ParamLimits

0x47a2,	// (0x00092126) main_welc_pane

0x9e33,	// (0x000977b7) main_welc_body_pane_ParamLimits

0x9e33,	// (0x000977b7) main_welc_body_pane

0x9e4f,	// (0x000977d3) main_welc_opti_pane_ParamLimits

0x9e4f,	// (0x000977d3) main_welc_opti_pane

0x9e9b,	// (0x0009781f) main_welc_pane_t1_ParamLimits

0x9e9b,	// (0x0009781f) main_welc_pane_t1

0x9f01,	// (0x00097885) main_welc_body_row_pane_ParamLimits

0x9f01,	// (0x00097885) main_welc_body_row_pane

0xd3b1,	// (0x0009ad35) main_welc_opti_row_pane_ParamLimits

0xd3b1,	// (0x0009ad35) main_welc_opti_row_pane

0xd3bf,	// (0x0009ad43) main_welc_opti_row_pane_g1

0x9f14,	// (0x00097898) main_welc_opti_row_pane_t1

0xd3c7,	// (0x0009ad4b) main_welc_body_row_pane_t1

0xd0ce,	// (0x0009aa52) popup_notif_wgt_heading_pane

0xd0e8,	// (0x0009aa6c) aid_size_list_notif_wgt_del_ParamLimits

0xd0f5,	// (0x0009aa79) list_notif_wgt_row_pane_g1_ParamLimits

0xd101,	// (0x0009aa85) list_notif_wgt_row_pane_g2_ParamLimits

0xd115,	// (0x0009aa99) list_notif_wgt_row_pane_g3_ParamLimits

0xfe7b,	// (0x0009d7ff) list_notif_wgt_row_pane_g_ParamLimits

0xd122,	// (0x0009aaa6) list_notif_wgt_row_pane_t1_ParamLimits

0xd138,	// (0x0009aabc) list_notif_wgt_row_pane_t2_ParamLimits

0xd14a,	// (0x0009aace) list_notif_wgt_row_pane_t3_ParamLimits

0xfe82,	// (0x0009d806) list_notif_wgt_row_pane_t_ParamLimits

0x984f,	// (0x000971d3) listrow_wgtman_pane_g1_ParamLimits

0x985c,	// (0x000971e0) listrow_wgtman_pane_g2_ParamLimits

0xfeab,	// (0x0009d82f) listrow_wgtman_pane_g_ParamLimits

0x9874,	// (0x000971f8) listrow_wgtman_pane_t1_ParamLimits

0x988c,	// (0x00097210) listrow_wgtman_pane_t2_ParamLimits

0xfeb0,	// (0x0009d834) listrow_wgtman_pane_t_ParamLimits

0x98b2,	// (0x00097236) wait_bar_pane_cp09_ParamLimits

0x0baa,	// (0x0008e52e) bg_popup_heading_pane_cp02

0xd3d6,	// (0x0009ad5a) popup_notif_wgt_heading_pane_g1

0xd3de,	// (0x0009ad62) popup_notif_wgt_heading_pane_t1

0xa2b0,	// (0x00097c34) main_vids_pane

0x0baa,	// (0x0008e52e) vids_listscroll_pane

0x9f23,	// (0x000978a7) scroll_pane_cp040

0x0baa,	// (0x0008e52e) vids_list_pane

0x9f2e,	// (0x000978b2) vids_list_double_pane_ParamLimits

0x9f2e,	// (0x000978b2) vids_list_double_pane

0x9f3b,	// (0x000978bf) vids_list_double_pane_g1

0x9f44,	// (0x000978c8) vids_list_double_pane_t1

0x9f54,	// (0x000978d8) vids_list_double_pane_t2

0x0001,

0xff3d,	// (0x0009d8c1) vids_list_double_pane_t

0x9ff6,	// (0x0009797a) main_ncimui_pane_ParamLimits

0x814b,	// (0x00095acf) main_ncimui_pane_g1_ParamLimits

0x8157,	// (0x00095adb) main_ncimui_pane_g2_ParamLimits

0x8157,	// (0x00095adb) main_ncimui_pane_g2

0x0001,

0xfbb8,	// (0x0009d53c) main_ncimui_pane_g_ParamLimits

0xfbb8,	// (0x0009d53c) main_ncimui_pane_g

0x9e66,	// (0x000977ea) main_welc_pane_g1_ParamLimits

0x9e66,	// (0x000977ea) main_welc_pane_g1

0x9e79,	// (0x000977fd) main_welc_pane_g2_ParamLimits

0x9e79,	// (0x000977fd) main_welc_pane_g2

0x0002,

0xff2f,	// (0x0009d8b3) main_welc_pane_g_ParamLimits

0xff2f,	// (0x0009d8b3) main_welc_pane_g

0xdbe5,	// (0x0009b569) listscroll_mce_pane_ParamLimits

0x2f86,	// (0x0009090a) wait_bar_pane_cp10

0xa296,	// (0x00097c1a) main_cale_day_pane_ParamLimits

0xa296,	// (0x00097c1a) main_cale_week_pane_ParamLimits

0xdbe5,	// (0x0009b569) main_messa_pane_ParamLimits

0x5d22,	// (0x000936a6) main_clock2_btn_pane_ParamLimits

0x5d22,	// (0x000936a6) main_clock2_btn_pane

0xabe1,	// (0x00098565) main_clock2_btn_pane_cp01_ParamLimits

0xabe1,	// (0x00098565) main_clock2_btn_pane_cp01

0xcc37,	// (0x0009a5bb) list_cale_mrui_pane_ParamLimits

0xd17e,	// (0x0009ab02) main_cf0_pane_g2

0x0001,

0xfe89,	// (0x0009d80d) main_cf0_pane_g

0x9a50,	// (0x000973d4) area_left_week_number_pane_ParamLimits

0x9a5c,	// (0x000973e0) area_top_day_name_pane_ParamLimits

0x9a6d,	// (0x000973f1) frame_month_view_pane_ParamLimits

0xd287,	// (0x0009ac0b) grid_month_view_pane_ParamLimits

0xd295,	// (0x0009ac19) frm_month_g1_ParamLimits

0x9ada,	// (0x0009745e) frm_month_g2_ParamLimits

0x9aeb,	// (0x0009746f) frm_month_g3_ParamLimits

0x9afc,	// (0x00097480) frm_month_g4_ParamLimits

0x9b0d,	// (0x00097491) frm_month_g5_ParamLimits

0x9b1e,	// (0x000974a2) frm_month_g6_ParamLimits

0x9b2f,	// (0x000974b3) frm_month_g7_ParamLimits

0xd2a2,	// (0x0009ac26) frm_month_g8_ParamLimits

0x9b40,	// (0x000974c4) frm_month_g9_ParamLimits

0x9b50,	// (0x000974d4) frm_month_g10_ParamLimits

0x9b60,	// (0x000974e4) frm_month_g11_ParamLimits

0x9b70,	// (0x000974f4) frm_month_g12_ParamLimits

0x9b80,	// (0x00097504) frm_month_g13_ParamLimits

0x9b90,	// (0x00097514) frm_month_g14_ParamLimits

0x9ba0,	// (0x00097524) frm_month_g15_ParamLimits

0x9bb2,	// (0x00097536) frm_month_g16_ParamLimits

0xfeda,	// (0x0009d85e) frm_month_g_ParamLimits

0xd2af,	// (0x0009ac33) cell_top_day_name_pane_t1_ParamLimits

0x9bc4,	// (0x00097548) cell_area_left_week_number_pane_g1_ParamLimits

0x9bd0,	// (0x00097554) cell_area_left_week_number_pane_t1_ParamLimits

0xa9e5,	// (0x00098369) cell_month_view_pane_g1_ParamLimits

0x9be3,	// (0x00097567) cell_month_view_pane_t1_ParamLimits

0xdbdd,	// (0x0009b561) main_clock2_btn_pane_g1

0xd3ec,	// (0x0009ad70) main_clock2_btn_pane_t1

0x47a2,	// (0x00092126) listscroll_cmail_pane_ParamLimits

0xc75f,	// (0x0009a0e3) main_sp_fs_email_pane_g1_ParamLimits

0xc76b,	// (0x0009a0ef) main_sp_fs_email_pane_g2_ParamLimits

0xfcb7,	// (0x0009d63b) main_sp_fs_email_pane_g_ParamLimits

0xce09,	// (0x0009a78d) list_recal_day_pane_ParamLimits

0xce1a,	// (0x0009a79e) mian_recal_day_pane_t1

0x8bec,	// (0x00096570) list_single_dyc_row_text_pane_t4_ParamLimits

0x8bec,	// (0x00096570) list_single_dyc_row_text_pane_t4

0x8c23,	// (0x000965a7) list_single_dyc_row_text_pane_t5_ParamLimits

0x8c23,	// (0x000965a7) list_single_dyc_row_text_pane_t5

0xc83b,	// (0x0009a1bf) list_single_dyc_row_text_pane_t6_ParamLimits

0xc83b,	// (0x0009a1bf) list_single_dyc_row_text_pane_t6

0x2ab7,	// (0x0009043b) aid_mgn_list_cale_time_pane

0x9ff6,	// (0x0009797a) main_gallery2_pane_ParamLimits

0xabf5,	// (0x00098579) main_clock2_pane_cp01_t1

0xac03,	// (0x00098587) main_clock2_pane_cp01_t3

0x0001,

0xf79a,	// (0x0009d11e) main_clock2_pane_cp01_t

0x142d,	// (0x0008edb1) cale_week_scroll_pane_g16_ParamLimits

0x142d,	// (0x0008edb1) cale_week_scroll_pane_g16

0xde7d,	// (0x0009b801) vorec_slider_pane

0x9e0a,	// (0x0009778e) vidtel_button_pane_t1_ParamLimits

0x9405,	// (0x00096d89) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9417,	// (0x00096d9b) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9428,	// (0x00096dac) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9428,	// (0x00096dac) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe37,	// (0x0009d7bb) main_fs_bigclock_clock_pane_g_ParamLimits

0x943b,	// (0x00096dbf) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9456,	// (0x00096dda) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe40,	// (0x0009d7c4) main_fs_bigclock_clock_pane_t_ParamLimits

0x55a8,	// (0x00092f2c) main_mup3_lyrics_pane_ParamLimits

0x55a8,	// (0x00092f2c) main_mup3_lyrics_pane

0x9f86,	// (0x0009790a) main_mup3_lyrics_pane_t1_ParamLimits

0x9f86,	// (0x0009790a) main_mup3_lyrics_pane_t1

0xb0cc,	// (0x00098a50) aid_main_mp4_pane_t1_area

0xb0cc,	// (0x00098a50) aid_main_mp4_pane_t2_area

0xb174,	// (0x00098af8) main_mp4_pane_g7_ParamLimits

0xb174,	// (0x00098af8) main_mp4_pane_g7

0xb180,	// (0x00098b04) main_mp4_pane_g8_ParamLimits

0xb180,	// (0x00098b04) main_mp4_pane_g8

0x677b,	// (0x000940ff) aid_call6_pane_g1_size

0x9d60,	// (0x000976e4) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9d60,	// (0x000976e4) list_double_large_graphic_phob2_other_pane

0xe6d3,	// (0x0009c057) list_double_large_graphic_phob2_other_pane_g1

0x0baa,	// (0x0008e52e) list_highlight_pane_cp026

0x47a2,	// (0x00092126) main_welc_pane_ParamLimits

0x892a,	// (0x000962ae) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x892a,	// (0x000962ae) main_sp_fs_ctrlbar_pane_g3

0x8942,	// (0x000962c6) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8942,	// (0x000962c6) main_sp_fs_ctrlbar_pane_g4

0x8984,	// (0x00096308) toolbar2_fixed_button_pane_cp01

0x898f,	// (0x00096313) toolbar2_fixed_button_pane_cp02

0x899a,	// (0x0009631e) toolbar2_fixed_button_pane_cp03

0x9e20,	// (0x000977a4) list_welc_entry_pane_ParamLimits

0x9e20,	// (0x000977a4) list_welc_entry_pane

0x9e8c,	// (0x00097810) main_welc_pane_g3_ParamLimits

0x9e8c,	// (0x00097810) main_welc_pane_g3

0x9eb5,	// (0x00097839) main_welc_pane_t2_ParamLimits

0x9eb5,	// (0x00097839) main_welc_pane_t2

0x9ecb,	// (0x0009784f) main_welc_pane_t3_ParamLimits

0x9ecb,	// (0x0009784f) main_welc_pane_t3

0x0002,

0xff36,	// (0x0009d8ba) main_welc_pane_t_ParamLimits

0xff36,	// (0x0009d8ba) main_welc_pane_t

0x9ee0,	// (0x00097864) welc_button_pane_ParamLimits

0x9ee0,	// (0x00097864) welc_button_pane

0x9ef1,	// (0x00097875) welc_service_logo_pane_ParamLimits

0x9ef1,	// (0x00097875) welc_service_logo_pane

0xd3fa,	// (0x0009ad7e) list_single_welc_entry_pane_ParamLimits

0xd3fa,	// (0x0009ad7e) list_single_welc_entry_pane

0xd40b,	// (0x0009ad8f) list_single_welc_entry_pane_g1

0xd413,	// (0x0009ad97) list_single_welc_entry_pane_t1

0xd421,	// (0x0009ada5) list_single_welc_entry_pane_t2

0x0001,

0xff42,	// (0x0009d8c6) list_single_welc_entry_pane_t

0x0baa,	// (0x0008e52e) bg_button_pane_cp035

0xd42f,	// (0x0009adb3) welc_button_pane_t1

0xd43d,	// (0x0009adc1) welc_service_logo_pane_g1

0xd446,	// (0x0009adca) welc_service_logo_pane_g2

0x0001,

0xff47,	// (0x0009d8cb) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
