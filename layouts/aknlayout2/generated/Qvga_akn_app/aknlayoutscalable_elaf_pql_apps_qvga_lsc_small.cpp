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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000406d8 };

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
0x18f4,	// (0x00041fcc) Screen

0x18fe,	// (0x00041fd6) application_window

0x1934,	// (0x0004200c) area_bottom_pane_ParamLimits

0x1934,	// (0x0004200c) area_bottom_pane

0x1967,	// (0x0004203f) area_top_pane_ParamLimits

0x1967,	// (0x0004203f) area_top_pane

0xa8d0,	// (0x0004afa8) call_video_uplink_pane_ParamLimits

0xa8d0,	// (0x0004afa8) call_video_uplink_pane

0x19e7,	// (0x000420bf) main_pane_ParamLimits

0x19e7,	// (0x000420bf) main_pane

0x50c7,	// (0x0004579f) context_pane

0x50da,	// (0x000457b2) navi_pane

0x5103,	// (0x000457db) popup_cale_events_window_ParamLimits

0x5103,	// (0x000457db) popup_cale_events_window

0x511b,	// (0x000457f3) popup_mup_playback_window

0x5123,	// (0x000457fb) signal_pane

0xd841,	// (0x0004df19) main_browser_pane

0xda10,	// (0x0004e0e8) main_burst_pane

0xefab,	// (0x0004f683) main_calc_pane

0x4e59,	// (0x00045531) main_cale_day_pane

0x1f76,	// (0x0004264e) main_cale_month_pane

0x4e59,	// (0x00045531) main_cale_week_pane

0xda10,	// (0x0004e0e8) main_call_pane

0xd51d,	// (0x0004dbf5) main_call_poc_pane

0xda10,	// (0x0004e0e8) main_camera_pane

0xda10,	// (0x0004e0e8) main_chi_dic_pane

0xe21b,	// (0x0004e8f3) main_clock_pane

0xd51d,	// (0x0004dbf5) main_fmradio_pane

0xda10,	// (0x0004e0e8) main_graph_messa_pane

0xd51d,	// (0x0004dbf5) main_help_pane

0xd841,	// (0x0004df19) main_im_pane

0xd778,	// (0x0004de50) main_image_pane_ParamLimits

0xd778,	// (0x0004de50) main_image_pane

0xd51d,	// (0x0004dbf5) main_location2_pane

0xda10,	// (0x0004e0e8) main_location_pane

0xd778,	// (0x0004de50) main_messa_pane

0xd51d,	// (0x0004dbf5) main_mp2_pane

0xda10,	// (0x0004e0e8) main_mp_pane

0xd51d,	// (0x0004dbf5) main_msg_pane

0xd51d,	// (0x0004dbf5) main_mup_eq_pane

0xd51d,	// (0x0004dbf5) main_mup_pane

0xd841,	// (0x0004df19) main_notes_pane

0xd51d,	// (0x0004dbf5) main_pec_pane

0xd51d,	// (0x0004dbf5) main_phob_pane

0xd51d,	// (0x0004dbf5) main_pinb_pane

0xd51d,	// (0x0004dbf5) main_postcard_pane

0xd51d,	// (0x0004dbf5) main_qdial_pane

0xda10,	// (0x0004e0e8) main_skin_pane

0xd51d,	// (0x0004dbf5) main_smil2_pane

0xda10,	// (0x0004e0e8) main_smil_pane

0xda10,	// (0x0004e0e8) main_video_pane

0xda10,	// (0x0004e0e8) main_video_tele_pane

0xd778,	// (0x0004de50) main_viewer_pane_ParamLimits

0xd778,	// (0x0004de50) main_viewer_pane

0xda10,	// (0x0004e0e8) main_vorec_pane

0x4ebb,	// (0x00045593) popup_blid_sat_info_window_ParamLimits

0x4ebb,	// (0x00045593) popup_blid_sat_info_window

0x4f11,	// (0x000455e9) popup_dyc_status_message_window_ParamLimits

0x4f11,	// (0x000455e9) popup_dyc_status_message_window

0x4f27,	// (0x000455ff) popup_grid_large_graphic_window_ParamLimits

0x4f27,	// (0x000455ff) popup_grid_large_graphic_window

0x4fbd,	// (0x00045695) popup_loc_request_window_ParamLimits

0x4fbd,	// (0x00045695) popup_loc_request_window

0x50a1,	// (0x00045779) popup_wml_address_window_ParamLimits

0x50a1,	// (0x00045779) popup_wml_address_window

0x4cb4,	// (0x0004538c) call_muted_g1

0x4252,	// (0x0004492a) popup_call_audio_conf_window_ParamLimits

0x4252,	// (0x0004492a) popup_call_audio_conf_window

0x4cc4,	// (0x0004539c) popup_call_audio_first_window_ParamLimits

0x4cc4,	// (0x0004539c) popup_call_audio_first_window

0x4d22,	// (0x000453fa) popup_call_audio_in_window_ParamLimits

0x4d22,	// (0x000453fa) popup_call_audio_in_window

0x4d4e,	// (0x00045426) popup_call_audio_out_window_ParamLimits

0x4d4e,	// (0x00045426) popup_call_audio_out_window

0x4d7c,	// (0x00045454) popup_call_audio_second_window_ParamLimits

0x4d7c,	// (0x00045454) popup_call_audio_second_window

0x4dc2,	// (0x0004549a) popup_call_audio_wait_window_ParamLimits

0x4dc2,	// (0x0004549a) popup_call_audio_wait_window

0x4df5,	// (0x000454cd) popup_number_entry_window_ParamLimits

0x4df5,	// (0x000454cd) popup_number_entry_window

0xd003,	// (0x0004d6db) bg_popup_call_pane_cp05_ParamLimits

0xd003,	// (0x0004d6db) bg_popup_call_pane_cp05

0xd023,	// (0x0004d6fb) popup_number_entry_window_t1

0xd036,	// (0x0004d70e) popup_number_entry_window_t2

0xd048,	// (0x0004d720) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0004f79e) popup_number_entry_window_t

0xd05a,	// (0x0004d732) text_title_cp2

0xd06d,	// (0x0004d745) bg_popup_call_pane_cp_ParamLimits

0xd06d,	// (0x0004d745) bg_popup_call_pane_cp

0xd07b,	// (0x0004d753) call_thumbnail_pane

0xd083,	// (0x0004d75b) popup_call_audio_in_window_g1_ParamLimits

0xd083,	// (0x0004d75b) popup_call_audio_in_window_g1

0xd08f,	// (0x0004d767) popup_call_audio_in_window_g2_ParamLimits

0xd08f,	// (0x0004d767) popup_call_audio_in_window_g2

0xd09b,	// (0x0004d773) popup_call_audio_in_window_g3_ParamLimits

0xd09b,	// (0x0004d773) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0004f7a7) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0004f7a7) popup_call_audio_in_window_g

0xd0a7,	// (0x0004d77f) popup_call_audio_in_window_t1_ParamLimits

0xd0a7,	// (0x0004d77f) popup_call_audio_in_window_t1

0xd0c2,	// (0x0004d79a) popup_call_audio_in_window_t2_ParamLimits

0xd0c2,	// (0x0004d79a) popup_call_audio_in_window_t2

0xd0dd,	// (0x0004d7b5) popup_call_audio_in_window_t3_ParamLimits

0xd0dd,	// (0x0004d7b5) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0004f7ae) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0004f7ae) popup_call_audio_in_window_t

0xd06d,	// (0x0004d745) bg_popup_call_pane_cp01_ParamLimits

0xd06d,	// (0x0004d745) bg_popup_call_pane_cp01

0xd07b,	// (0x0004d753) call_thumbnail_pane_cp02

0xd0f0,	// (0x0004d7c8) call_type_pane_cp022

0xd0f8,	// (0x0004d7d0) popup_call_audio_out_window_g1_ParamLimits

0xd0f8,	// (0x0004d7d0) popup_call_audio_out_window_g1

0xd10a,	// (0x0004d7e2) popup_call_audio_out_window_g2_ParamLimits

0xd10a,	// (0x0004d7e2) popup_call_audio_out_window_g2

0xd21f,	// (0x0004d8f7) popup_call_audio_out_window_g3_ParamLimits

0xd21f,	// (0x0004d8f7) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0004f7b5) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0004f7b5) popup_call_audio_out_window_g

0xd231,	// (0x0004d909) popup_call_audio_out_window_t1_ParamLimits

0xd231,	// (0x0004d909) popup_call_audio_out_window_t1

0xd249,	// (0x0004d921) popup_call_audio_out_window_t2_ParamLimits

0xd249,	// (0x0004d921) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0004f7bc) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0004f7bc) popup_call_audio_out_window_t

0xd25e,	// (0x0004d936) bg_popup_call_pane_ParamLimits

0xd25e,	// (0x0004d936) bg_popup_call_pane

0x1b70,	// (0x00042248) call_thumbnail_pane_cp_ParamLimits

0x1b70,	// (0x00042248) call_thumbnail_pane_cp

0xd2e2,	// (0x0004d9ba) call_type_pane_cp01_ParamLimits

0xd2e2,	// (0x0004d9ba) call_type_pane_cp01

0xd326,	// (0x0004d9fe) popup_call_audio_first_window_g1_ParamLimits

0xd326,	// (0x0004d9fe) popup_call_audio_first_window_g1

0xd372,	// (0x0004da4a) popup_call_audio_first_window_g2_ParamLimits

0xd372,	// (0x0004da4a) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0004f7c1) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0004f7c1) popup_call_audio_first_window_g

0xd3b6,	// (0x0004da8e) popup_call_audio_first_window_t1_ParamLimits

0xd3b6,	// (0x0004da8e) popup_call_audio_first_window_t1

0xd462,	// (0x0004db3a) popup_call_audio_first_window_t4_ParamLimits

0xd462,	// (0x0004db3a) popup_call_audio_first_window_t4

0xd4ee,	// (0x0004dbc6) popup_call_audio_first_window_t5_ParamLimits

0xd4ee,	// (0x0004dbc6) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0004f7c6) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0004f7c6) popup_call_audio_first_window_t

0xd51d,	// (0x0004dbf5) bg_popup_call_pane_cp02

0xd527,	// (0x0004dbff) call_type_pane_cp023

0xd52f,	// (0x0004dc07) popup_call_audio_wait_window_g1

0xd537,	// (0x0004dc0f) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004f7cd) popup_call_audio_wait_window_g

0xd53f,	// (0x0004dc17) popup_call_audio_wait_window_t3

0xd54d,	// (0x0004dc25) bg_popup_call_pane_cp03_ParamLimits

0xd54d,	// (0x0004dc25) bg_popup_call_pane_cp03

0xd5ad,	// (0x0004dc85) call_thumbnail_pane_cp011_ParamLimits

0xd5ad,	// (0x0004dc85) call_thumbnail_pane_cp011

0xd5b9,	// (0x0004dc91) call_type_pane_cp034_ParamLimits

0xd5b9,	// (0x0004dc91) call_type_pane_cp034

0xd5f5,	// (0x0004dccd) popup_call_audio_second_window_g1_ParamLimits

0xd5f5,	// (0x0004dccd) popup_call_audio_second_window_g1

0xd631,	// (0x0004dd09) popup_call_audio_second_window_g2_ParamLimits

0xd631,	// (0x0004dd09) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0004f7d2) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0004f7d2) popup_call_audio_second_window_g

0xd66d,	// (0x0004dd45) popup_call_audio_second_window_t1_ParamLimits

0xd66d,	// (0x0004dd45) popup_call_audio_second_window_t1

0xd6ee,	// (0x0004ddc6) popup_call_audio_second_window_t2_ParamLimits

0xd6ee,	// (0x0004ddc6) popup_call_audio_second_window_t2

0xd724,	// (0x0004ddfc) popup_call_audio_second_window_t3_ParamLimits

0xd724,	// (0x0004ddfc) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0004f7d7) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0004f7d7) popup_call_audio_second_window_t

0xd51d,	// (0x0004dbf5) bg_popup_call_pane_cp04

0xd75a,	// (0x0004de32) list_conf_pane

0xd762,	// (0x0004de3a) popup_call_audio_conf_window_t1

0xd770,	// (0x0004de48) call_thumbnail_pane_g1

0xd778,	// (0x0004de50) bg_pinb_pane_ParamLimits

0xd778,	// (0x0004de50) bg_pinb_pane

0xd786,	// (0x0004de5e) find_pinb_pane

0xd78f,	// (0x0004de67) listscroll_pinb_pane_ParamLimits

0xd78f,	// (0x0004de67) listscroll_pinb_pane

0xd79e,	// (0x0004de76) pinb_bg_pane_g1

0x1b94,	// (0x0004226c) pinb_bg_pane_g2

0x1b9e,	// (0x00042276) pinb_bg_pane_g3

0x1ba8,	// (0x00042280) pinb_bg_pane_g4

0x1bb2,	// (0x0004228a) pinb_bg_pane_g5

0x1bbc,	// (0x00042294) pinb_bg_pane_g6

0x1bc5,	// (0x0004229d) pinb_bg_pane_g7

0x1bce,	// (0x000422a6) pinb_bg_pane_g8

0x1bd9,	// (0x000422b1) pinb_bg_pane_g9

0x1be3,	// (0x000422bb) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0004f7de) pinb_bg_pane_g

0x1bfe,	// (0x000422d6) grid_pinb_pane

0x1c07,	// (0x000422df) list_pinb_pane

0x1c10,	// (0x000422e8) scroll_pane_cp01_ParamLimits

0x1c10,	// (0x000422e8) scroll_pane_cp01

0xd7a8,	// (0x0004de80) find_pinb_pane_g1_ParamLimits

0xd7a8,	// (0x0004de80) find_pinb_pane_g1

0xd7c0,	// (0x0004de98) find_pinb_pane_t1

0xd7d2,	// (0x0004deaa) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0004f7f8) find_pinb_pane_t

0xd7e7,	// (0x0004debf) input_focus_pane_cp01_ParamLimits

0xd7e7,	// (0x0004debf) input_focus_pane_cp01

0x1c22,	// (0x000422fa) cell_pinb_pane_ParamLimits

0x1c22,	// (0x000422fa) cell_pinb_pane

0x1c3d,	// (0x00042315) cell_pinb_pane_g1_ParamLimits

0x1c3d,	// (0x00042315) cell_pinb_pane_g1

0x1c4d,	// (0x00042325) cell_pinb_pane_g2_ParamLimits

0x1c4d,	// (0x00042325) cell_pinb_pane_g2

0xd7f3,	// (0x0004decb) cell_pinb_pane_g3_ParamLimits

0xd7f3,	// (0x0004decb) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0004f7fd) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0004f7fd) cell_pinb_pane_g

0xd51d,	// (0x0004dbf5) grid_highlight_pane_cp01

0x1c59,	// (0x00042331) list_pinb_item_pane_ParamLimits

0x1c59,	// (0x00042331) list_pinb_item_pane

0xd51d,	// (0x0004dbf5) list_highlight_pane_cp02

0x1c6b,	// (0x00042343) list_pinb_item_pane_g1_ParamLimits

0x1c6b,	// (0x00042343) list_pinb_item_pane_g1

0x1c78,	// (0x00042350) list_pinb_item_pane_g2_ParamLimits

0x1c78,	// (0x00042350) list_pinb_item_pane_g2

0x1c84,	// (0x0004235c) list_pinb_item_pane_g3_ParamLimits

0x1c84,	// (0x0004235c) list_pinb_item_pane_g3

0x1c95,	// (0x0004236d) list_pinb_item_pane_g4_ParamLimits

0x1c95,	// (0x0004236d) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0004f804) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0004f804) list_pinb_item_pane_g

0x1ca1,	// (0x00042379) list_pinb_item_pane_t1_ParamLimits

0x1ca1,	// (0x00042379) list_pinb_item_pane_t1

0x1cd6,	// (0x000423ae) calc_display_pane

0x1cf2,	// (0x000423ca) calc_paper_pane

0x1d13,	// (0x000423eb) grid_calc_pane

0xd51d,	// (0x0004dbf5) bg_list_pane_cp01

0x1d2f,	// (0x00042407) clock_g1

0x1d37,	// (0x0004240f) clock_g2

0x0001,

0xf135,	// (0x0004f80d) clock_g

0x1d3f,	// (0x00042417) clock_t1_ParamLimits

0x1d3f,	// (0x00042417) clock_t1

0x1d54,	// (0x0004242c) clock_t2_ParamLimits

0x1d54,	// (0x0004242c) clock_t2

0x1d66,	// (0x0004243e) clock_t3_ParamLimits

0x1d66,	// (0x0004243e) clock_t3

0x1d78,	// (0x00042450) clock_t4_ParamLimits

0x1d78,	// (0x00042450) clock_t4

0x1d8a,	// (0x00042462) clock_t5_ParamLimits

0x1d8a,	// (0x00042462) clock_t5

0x1d9f,	// (0x00042477) clock_t6_ParamLimits

0x1d9f,	// (0x00042477) clock_t6

0x1db1,	// (0x00042489) clock_t7_ParamLimits

0x1db1,	// (0x00042489) clock_t7

0x1dc3,	// (0x0004249b) clock_t8_ParamLimits

0x1dc3,	// (0x0004249b) clock_t8

0x1dd5,	// (0x000424ad) clock_t9_ParamLimits

0x1dd5,	// (0x000424ad) clock_t9

0x0008,

0xf13a,	// (0x0004f812) clock_t_ParamLimits

0xf13a,	// (0x0004f812) clock_t

0xd7ff,	// (0x0004ded7) popup_clock_analogue_window_cp02

0xd7ff,	// (0x0004ded7) popup_clock_digital_window_cp01

0xd807,	// (0x0004dedf) listscroll_help_pane

0xd51d,	// (0x0004dbf5) phob_pre_status_pane

0xd811,	// (0x0004dee9) grid_qdial_pane

0xd778,	// (0x0004de50) listscroll_mce_pane

0xd778,	// (0x0004de50) bg_notes_pane

0xd81b,	// (0x0004def3) list_notes_pane

0x1de7,	// (0x000424bf) scroll_pane_cp06

0xd829,	// (0x0004df01) bg_calc_paper_pane

0xa8f4,	// (0x0004afcc) list_calc_pane

0xd841,	// (0x0004df19) bg_calc_display_pane

0xa90e,	// (0x0004afe6) calc_display_pane_t1

0xa923,	// (0x0004affb) calc_display_pane_t2

0xa938,	// (0x0004b010) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0004f825) calc_display_pane_t

0x1df9,	// (0x000424d1) cell_calc_pane_ParamLimits

0x1df9,	// (0x000424d1) cell_calc_pane

0xd84d,	// (0x0004df25) bg_calc_paper_pane_g1

0xd859,	// (0x0004df31) bg_calc_paper_pane_g2

0xd865,	// (0x0004df3d) bg_calc_paper_pane_g3

0xd871,	// (0x0004df49) bg_calc_paper_pane_g4

0xd87d,	// (0x0004df55) bg_calc_paper_pane_g5

0x1e2c,	// (0x00042504) bg_calc_paper_pane_g6

0x1e3b,	// (0x00042513) bg_calc_paper_pane_g7

0x1e4a,	// (0x00042522) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0004f82c) bg_calc_paper_pane_g

0x1e59,	// (0x00042531) calc_bg_paper_pane_g9

0x1e68,	// (0x00042540) list_calc_item_pane_ParamLimits

0x1e68,	// (0x00042540) list_calc_item_pane

0xd889,	// (0x0004df61) list_calc_item_pane_g1

0xa94a,	// (0x0004b022) list_calc_item_pane_t1_ParamLimits

0xa94a,	// (0x0004b022) list_calc_item_pane_t1

0x1e7c,	// (0x00042554) list_calc_item_pane_t2_ParamLimits

0x1e7c,	// (0x00042554) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0004f83d) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0004f83d) list_calc_item_pane_t

0xd896,	// (0x0004df6e) cell_calc_pane_g1

0xd8a0,	// (0x0004df78) grid_highlight_pane_cp02

0xd8c2,	// (0x0004df9a) bg_calc_display_pane_g1

0xa95c,	// (0x0004b034) bg_calc_display_pane_g2

0xd8cb,	// (0x0004dfa3) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0004f847) bg_calc_display_pane_g

0x1eaa,	// (0x00042582) cell_qdial_pane_ParamLimits

0x1eaa,	// (0x00042582) cell_qdial_pane

0x1ebc,	// (0x00042594) cell_qdial_pane_g1_ParamLimits

0x1ebc,	// (0x00042594) cell_qdial_pane_g1

0x1ed2,	// (0x000425aa) cell_qdial_pane_g2_ParamLimits

0x1ed2,	// (0x000425aa) cell_qdial_pane_g2

0xd8d4,	// (0x0004dfac) cell_qdial_pane_g3_ParamLimits

0xd8d4,	// (0x0004dfac) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0004f84e) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0004f84e) cell_qdial_pane_g

0x1ef9,	// (0x000425d1) cell_qdial_pane_t1_ParamLimits

0x1ef9,	// (0x000425d1) cell_qdial_pane_t1

0x1f11,	// (0x000425e9) cell_qdial_pane_t2_ParamLimits

0x1f11,	// (0x000425e9) cell_qdial_pane_t2

0x1f24,	// (0x000425fc) cell_qdial_pane_t3_ParamLimits

0x1f24,	// (0x000425fc) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0004f857) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0004f857) cell_qdial_pane_t

0xd51d,	// (0x0004dbf5) grid_highlight_pane_cp04

0xd8e0,	// (0x0004dfb8) thumbnail_qdial_pane_ParamLimits

0xd8e0,	// (0x0004dfb8) thumbnail_qdial_pane

0xd93c,	// (0x0004e014) list_help_pane

0xd946,	// (0x0004e01e) scroll_pane_cp02

0x1f37,	// (0x0004260f) help_list_pane_t1_ParamLimits

0x1f37,	// (0x0004260f) help_list_pane_t1

0xa966,	// (0x0004b03e) bg_notes_pane_g2

0xa96e,	// (0x0004b046) bg_notes_pane_g3

0xa976,	// (0x0004b04e) notes_bg_pane_g1

0xa97e,	// (0x0004b056) notes_bg_pane_g4

0xa986,	// (0x0004b05e) notes_bg_pane_g5

0xa98e,	// (0x0004b066) notes_bg_pane_g6

0xa996,	// (0x0004b06e) notes_bg_pane_g7

0xa99e,	// (0x0004b076) notes_bg_pane_g8

0xa9a6,	// (0x0004b07e) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0004f875) notes_bg_pane_g

0x1f53,	// (0x0004262b) list_notes_text_pane_ParamLimits

0x1f53,	// (0x0004262b) list_notes_text_pane

0xd94f,	// (0x0004e027) list_notes_text_pane_g1

0x0c92,	// (0x0004136a) list_notes_text_pane_t1

0x1f76,	// (0x0004264e) listscroll_cale_week_pane

0x1fa0,	// (0x00042678) bg_cale_heading_pane

0xd972,	// (0x0004e04a) bg_cale_pane_cp01

0x1fb8,	// (0x00042690) cale_week_corner_pane

0x1fd7,	// (0x000426af) cale_week_day_heading_pane

0x1ff4,	// (0x000426cc) cale_week_scroll_pane_g1

0x2007,	// (0x000426df) cale_week_scroll_pane_g2

0x201f,	// (0x000426f7) cale_week_scroll_pane_g3

0x2037,	// (0x0004270f) cale_week_scroll_pane_g4

0x204f,	// (0x00042727) cale_week_scroll_pane_g5

0x2067,	// (0x0004273f) cale_week_scroll_pane_g6

0x207f,	// (0x00042757) cale_week_scroll_pane_g7

0x2097,	// (0x0004276f) cale_week_scroll_pane_g8

0x20b3,	// (0x0004278b) cale_week_scroll_pane_g9

0x20cb,	// (0x000427a3) cale_week_scroll_pane_g10

0x20e3,	// (0x000427bb) cale_week_scroll_pane_g11

0x20fb,	// (0x000427d3) cale_week_scroll_pane_g12

0x2113,	// (0x000427eb) cale_week_scroll_pane_g13

0x212b,	// (0x00042803) cale_week_scroll_pane_g14

0x2143,	// (0x0004281b) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0004f884) cale_week_scroll_pane_g

0x2177,	// (0x0004284f) cale_week_time_pane

0x2193,	// (0x0004286b) grid_cale_week_pane

0xd9a1,	// (0x0004e079) scroll_pane_cp08

0x21b1,	// (0x00042889) cell_cale_week_pane_ParamLimits

0x21b1,	// (0x00042889) cell_cale_week_pane

0x2227,	// (0x000428ff) cale_week_day_heading_pane_t1

0x2251,	// (0x00042929) cale_week_day_heading_pane_t2

0x2280,	// (0x00042958) cale_week_day_heading_pane_t3

0x22af,	// (0x00042987) cale_week_day_heading_pane_t4

0x22de,	// (0x000429b6) cale_week_day_heading_pane_t5

0x230d,	// (0x000429e5) cale_week_day_heading_pane_t6

0x233c,	// (0x00042a14) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0004f8a5) cale_week_day_heading_pane_t

0xd9be,	// (0x0004e096) bg_cale_side_pane

0x2366,	// (0x00042a3e) cale_week_time_pane_t1

0x23a0,	// (0x00042a78) cale_week_time_pane_t2

0x23da,	// (0x00042ab2) cale_week_time_pane_t3

0x2414,	// (0x00042aec) cale_week_time_pane_t4

0x244e,	// (0x00042b26) cale_week_time_pane_t5

0x2488,	// (0x00042b60) cale_week_time_pane_t6

0x24c2,	// (0x00042b9a) cale_week_time_pane_t7

0x24fc,	// (0x00042bd4) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0004f8b4) cale_week_time_pane_t

0x2536,	// (0x00042c0e) cell_cale_week_pane_g2

0x2555,	// (0x00042c2d) cell_cale_week_pane_g3_ParamLimits

0x2555,	// (0x00042c2d) cell_cale_week_pane_g3

0xd9cc,	// (0x0004e0a4) grid_highlight_pane_cp07

0xd9d4,	// (0x0004e0ac) listscroll_gms_pane

0xd9de,	// (0x0004e0b6) grid_gms_pane

0xd9e7,	// (0x0004e0bf) listscroll_gms_pane_g1

0xd9ef,	// (0x0004e0c7) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0004f8c5) listscroll_gms_pane_g

0x256d,	// (0x00042c45) scroll_pane_cp010

0x2578,	// (0x00042c50) cell_gms_pane_ParamLimits

0x2578,	// (0x00042c50) cell_gms_pane

0x2588,	// (0x00042c60) cell_gms_pane_g1

0xd9f7,	// (0x0004e0cf) cell_gms_pane_g2

0xd94f,	// (0x0004e027) cell_gms_pane_g3

0xd9ff,	// (0x0004e0d7) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0004f8ca) cell_gms_pane_g

0xda08,	// (0x0004e0e0) grid_highlight_pane_cp09

0x4c42,	// (0x0004531a) phob_pre_status_pane_g1

0x4c4a,	// (0x00045322) phob_pre_status_pane_g2

0x4c52,	// (0x0004532a) phob_pre_status_pane_g3

0x4c5a,	// (0x00045332) phob_pre_status_pane_g4

0x0004,

0xf55c,	// (0x0004fc34) phob_pre_status_pane_g

0x4c6a,	// (0x00045342) phob_pre_status_pane_t1

0x4c78,	// (0x00045350) phob_pre_status_pane_t2

0x4c86,	// (0x0004535e) phob_pre_status_pane_t3

0x0002,

0xf567,	// (0x0004fc3f) phob_pre_status_pane_t

0xda10,	// (0x0004e0e8) bg_list_pane_cp05

0x2598,	// (0x00042c70) grid_vorec_pane

0xda18,	// (0x0004e0f0) vorec_t1

0xda26,	// (0x0004e0fe) vorec_t2

0xda34,	// (0x0004e10c) vorec_t3

0x25a0,	// (0x00042c78) vorec_t4

0xa858,	// (0x0004af30) vorec_t5

0xa866,	// (0x0004af3e) vorec_t6

0x0004,

0xf1fb,	// (0x0004f8d3) vorec_t

0xa874,	// (0x0004af4c) wait_bar_pane_cp01

0x25ae,	// (0x00042c86) cell_vorec_pane_ParamLimits

0x25ae,	// (0x00042c86) cell_vorec_pane

0xa9ae,	// (0x0004b086) cell_vorec_pane_g1

0xd51d,	// (0x0004dbf5) grid_highlight_pane_cp05

0x25d3,	// (0x00042cab) cams_zoom_pane

0x25e2,	// (0x00042cba) image_vga_pane

0x25fa,	// (0x00042cd2) main_camera_pane_g1

0x260a,	// (0x00042ce2) main_camera_pane_g2

0x261a,	// (0x00042cf2) main_camera_pane_g3

0x262a,	// (0x00042d02) main_camera_pane_g4

0x263a,	// (0x00042d12) main_camera_pane_g5

0x264a,	// (0x00042d22) main_camera_pane_g6

0x265a,	// (0x00042d32) main_camera_pane_g7

0x0007,

0xf206,	// (0x0004f8de) main_camera_pane_g

0x266a,	// (0x00042d42) main_camera_pane_t1

0x2680,	// (0x00042d58) main_camera_pane_t2

0x0001,

0xf217,	// (0x0004f8ef) main_camera_pane_t

0x26b2,	// (0x00042d8a) cams_zoom_pane_cp_ParamLimits

0x26b2,	// (0x00042d8a) cams_zoom_pane_cp

0x26da,	// (0x00042db2) image_cif_pane_ParamLimits

0x26da,	// (0x00042db2) image_cif_pane

0x270b,	// (0x00042de3) image_subqcif_pane

0x2713,	// (0x00042deb) main_video_pane_g1_ParamLimits

0x2713,	// (0x00042deb) main_video_pane_g1

0x2737,	// (0x00042e0f) main_video_pane_g2_ParamLimits

0x2737,	// (0x00042e0f) main_video_pane_g2

0x276b,	// (0x00042e43) main_video_pane_g3_ParamLimits

0x276b,	// (0x00042e43) main_video_pane_g3

0x2799,	// (0x00042e71) main_video_pane_g4_ParamLimits

0x2799,	// (0x00042e71) main_video_pane_g4

0x27c7,	// (0x00042e9f) main_video_pane_g5_ParamLimits

0x27c7,	// (0x00042e9f) main_video_pane_g5

0xda5c,	// (0x0004e134) main_video_pane_g6_ParamLimits

0xda5c,	// (0x0004e134) main_video_pane_g6

0x0006,

0xf21c,	// (0x0004f8f4) main_video_pane_g_ParamLimits

0xf21c,	// (0x0004f8f4) main_video_pane_g

0x27ee,	// (0x00042ec6) main_video_pane_t1_ParamLimits

0x27ee,	// (0x00042ec6) main_video_pane_t1

0xda76,	// (0x0004e14e) cams_zoom_pane_g1

0xda7f,	// (0x0004e157) cams_zoom_pane_g2

0xda88,	// (0x0004e160) cams_zoom_pane_g3

0xda91,	// (0x0004e169) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0004f903) cams_zoom_pane_g

0x284b,	// (0x00042f23) grid_cams_pane

0x2860,	// (0x00042f38) linegrid_cams_pane

0x2871,	// (0x00042f49) cell_cams_pane_ParamLimits

0x2871,	// (0x00042f49) cell_cams_pane

0xda9a,	// (0x0004e172) cams_burst_image_pane

0xdaa2,	// (0x0004e17a) cell_cams_pane_g1

0xd51d,	// (0x0004dbf5) grid_highlight_pane_cp03

0xd896,	// (0x0004df6e) mp_bg_pane_g1

0xd51d,	// (0x0004dbf5) bg_list_pane_cp03

0x4b7d,	// (0x00045255) bg_mp_pane

0x4b85,	// (0x0004525d) grid_mp_pane

0x4b8d,	// (0x00045265) media_player_g1

0x4b95,	// (0x0004526d) media_player_t1

0x4ba3,	// (0x0004527b) media_player_t2

0x4bb1,	// (0x00045289) media_player_t3

0x4bbf,	// (0x00045297) media_player_t4

0x4bcd,	// (0x000452a5) media_player_t5

0x4bdb,	// (0x000452b3) media_player_t6

0x4be9,	// (0x000452c1) media_player_t7

0x0006,

0xf546,	// (0x0004fc1e) media_player_t

0x4bf7,	// (0x000452cf) wait_bar_pane_cp02

0xf52b,	// (0x0004fc03) main_usb_pane_t

0x4c39,	// (0x00045311) cell_mp_pane

0xd896,	// (0x0004df6e) cell_mp_pane_g1

0xd51d,	// (0x0004dbf5) grid_highlight_pane_cp06

0xdaaa,	// (0x0004e182) grid_skin_colour_pane

0xdab2,	// (0x0004e18a) list_highlight_pane_cp03

0x288f,	// (0x00042f67) skin_g1

0xdaba,	// (0x0004e192) skin_t1

0xdac9,	// (0x0004e1a1) skin_t2

0x0001,

0xf260,	// (0x0004f938) skin_t

0x2897,	// (0x00042f6f) cell_skin_colour_pane_ParamLimits

0x2897,	// (0x00042f6f) cell_skin_colour_pane

0xdad7,	// (0x0004e1af) cell_skin_colour_pane_g1

0x2900,	// (0x00042fd8) call_video_g1_ParamLimits

0x2900,	// (0x00042fd8) call_video_g1

0x2916,	// (0x00042fee) call_video_g2_ParamLimits

0x2916,	// (0x00042fee) call_video_g2

0x0001,

0xf265,	// (0x0004f93d) call_video_g_ParamLimits

0xf265,	// (0x0004f93d) call_video_g

0x295e,	// (0x00043036) call_video_uplink_pane_cp1_ParamLimits

0x295e,	// (0x00043036) call_video_uplink_pane_cp1

0xdae9,	// (0x0004e1c1) call_video_uplink_pane_cp2

0x29f3,	// (0x000430cb) video_down_crop_pane_ParamLimits

0x29f3,	// (0x000430cb) video_down_crop_pane

0x2ab6,	// (0x0004318e) video_down_pane_ParamLimits

0x2ab6,	// (0x0004318e) video_down_pane

0xdaf1,	// (0x0004e1c9) video_down_subqcif_pane_ParamLimits

0xdaf1,	// (0x0004e1c9) video_down_subqcif_pane

0xdb09,	// (0x0004e1e1) video_down_subqcif_pane_cp_ParamLimits

0xdb09,	// (0x0004e1e1) video_down_subqcif_pane_cp

0xdb48,	// (0x0004e220) im_reading_pane_ParamLimits

0xdb48,	// (0x0004e220) im_reading_pane

0x2b73,	// (0x0004324b) im_writing_pane_ParamLimits

0x2b73,	// (0x0004324b) im_writing_pane

0x2b89,	// (0x00043261) im_reading_pane_t1

0xdb62,	// (0x0004e23a) list_im_pane

0xdb73,	// (0x0004e24b) scroll_pane_cp07

0x2bbf,	// (0x00043297) im_writing_pane_t1_ParamLimits

0x2bbf,	// (0x00043297) im_writing_pane_t1

0xdb8c,	// (0x0004e264) im_writing_pane_t2_ParamLimits

0xdb8c,	// (0x0004e264) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0004f947) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0004f947) im_writing_pane_t

0xd51d,	// (0x0004dbf5) input_focus_pane_cp04

0xd51d,	// (0x0004dbf5) input_focus_pane_cp05

0x2bd4,	// (0x000432ac) list_im_single_pane_ParamLimits

0x2bd4,	// (0x000432ac) list_im_single_pane

0xdba9,	// (0x0004e281) list_single_im_pane_t1

0x4bff,	// (0x000452d7) blid_accuracy_pane

0x4c07,	// (0x000452df) blid_compass_pane

0x4c0f,	// (0x000452e7) main_location_t1

0x4c1d,	// (0x000452f5) main_location_t2

0x4c2b,	// (0x00045303) main_location_t3

0x0002,

0xf555,	// (0x0004fc2d) main_location_t

0xd51d,	// (0x0004dbf5) aid_levels_location

0xd896,	// (0x0004df6e) blid_accuracy_pane_g1

0xd896,	// (0x0004df6e) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0004f9a9) blid_accuracy_pane_g

0xdbe3,	// (0x0004e2bb) wml_content_pane

0xdc21,	// (0x0004e2f9) wml_button_pane_ParamLimits

0xdc21,	// (0x0004e2f9) wml_button_pane

0x2bea,	// (0x000432c2) wml_list_single_large_pane_ParamLimits

0x2bea,	// (0x000432c2) wml_list_single_large_pane

0x2bfe,	// (0x000432d6) wml_list_single_medium_pane_ParamLimits

0x2bfe,	// (0x000432d6) wml_list_single_medium_pane

0x2c13,	// (0x000432eb) wml_list_single_small_pane_ParamLimits

0x2c13,	// (0x000432eb) wml_list_single_small_pane

0xdc35,	// (0x0004e30d) wml_selection_box_pane_ParamLimits

0xdc35,	// (0x0004e30d) wml_selection_box_pane

0xdc48,	// (0x0004e320) wml_list_single_pane_t1

0xdc57,	// (0x0004e32f) wml_list_single_medium_pane_t1

0xdc66,	// (0x0004e33e) wml_list_single_large_pane_t1

0xdc75,	// (0x0004e34d) input_focus_pane_cp02_ParamLimits

0xdc75,	// (0x0004e34d) input_focus_pane_cp02

0xdc88,	// (0x0004e360) wml_selection_box_pane_g1

0xdc91,	// (0x0004e369) wml_selection_box_pane_t1_ParamLimits

0xdc91,	// (0x0004e369) wml_selection_box_pane_t1

0xd778,	// (0x0004de50) bg_wml_button_pane_ParamLimits

0xd778,	// (0x0004de50) bg_wml_button_pane

0xdca9,	// (0x0004e381) wml_button_pane_g1

0xdcb1,	// (0x0004e389) wml_button_pane_t1

0xdca9,	// (0x0004e381) wml_button_bg_pane_g1

0xdcc1,	// (0x0004e399) wml_button_bg_pane_g2

0xdcc9,	// (0x0004e3a1) wml_button_bg_pane_g3

0xdcd1,	// (0x0004e3a9) wml_button_bg_pane_g4

0xdcd9,	// (0x0004e3b1) wml_button_bg_pane_g5

0xdce1,	// (0x0004e3b9) wml_button_bg_pane_g6

0xdce9,	// (0x0004e3c1) wml_button_bg_pane_g7

0xdcf1,	// (0x0004e3c9) wml_button_bg_pane_g8

0xdcf9,	// (0x0004e3d1) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0004f94c) wml_button_bg_pane_g

0x2c2a,	// (0x00043302) bg_list_pane_cp02

0xdd01,	// (0x0004e3d9) mce_header_pane_ParamLimits

0xdd01,	// (0x0004e3d9) mce_header_pane

0xdd15,	// (0x0004e3ed) mce_icon_pane

0xdd15,	// (0x0004e3ed) mce_image_pane

0xdd1e,	// (0x0004e3f6) mce_text_pane_ParamLimits

0xdd1e,	// (0x0004e3f6) mce_text_pane

0x2c33,	// (0x0004330b) scroll_pane_cp03

0x2c33,	// (0x0004330b) scroll_pane_cp04

0xdd32,	// (0x0004e40a) scroll_pane_cp05_ParamLimits

0xdd32,	// (0x0004e40a) scroll_pane_cp05

0x2c3d,	// (0x00043315) mce_header_field_pane_ParamLimits

0x2c3d,	// (0x00043315) mce_header_field_pane

0x2c54,	// (0x0004332c) mce_header_field_pane_2_ParamLimits

0x2c54,	// (0x0004332c) mce_header_field_pane_2

0x2c6a,	// (0x00043342) mce_header_field_pane_3

0x2c72,	// (0x0004334a) list_single_mce_message_pane_ParamLimits

0x2c72,	// (0x0004334a) list_single_mce_message_pane

0x2c87,	// (0x0004335f) list_single_mce_smart_pane_ParamLimits

0x2c87,	// (0x0004335f) list_single_mce_smart_pane

0xdd3e,	// (0x0004e416) input_focus_pane_cp03

0xdd47,	// (0x0004e41f) list_header_data_pane

0x2ca7,	// (0x0004337f) mce_header_field_pane_t1

0x2cb5,	// (0x0004338d) list_single_mce_header_pane_ParamLimits

0x2cb5,	// (0x0004338d) list_single_mce_header_pane

0xdd4f,	// (0x0004e427) list_single_mce_header_pane_t1

0xdd5e,	// (0x0004e436) list_single_mce_message_pane_g1

0xdd67,	// (0x0004e43f) list_single_mce_message_pane_t1

0x2cef,	// (0x000433c7) bg_cale_heading_pane_cp01_ParamLimits

0x2cef,	// (0x000433c7) bg_cale_heading_pane_cp01

0xdd76,	// (0x0004e44e) bg_cale_pane_cp02_ParamLimits

0xdd76,	// (0x0004e44e) bg_cale_pane_cp02

0x2d1e,	// (0x000433f6) cale_month_corner_pane

0x2d3d,	// (0x00043415) cale_month_day_heading_pane_ParamLimits

0x2d3d,	// (0x00043415) cale_month_day_heading_pane

0x2d74,	// (0x0004344c) cale_month_pane_g1_ParamLimits

0x2d74,	// (0x0004344c) cale_month_pane_g1

0x2d98,	// (0x00043470) cale_month_pane_g2_ParamLimits

0x2d98,	// (0x00043470) cale_month_pane_g2

0x2dc0,	// (0x00043498) cale_month_pane_g3_ParamLimits

0x2dc0,	// (0x00043498) cale_month_pane_g3

0x2dfc,	// (0x000434d4) cale_month_pane_g4_ParamLimits

0x2dfc,	// (0x000434d4) cale_month_pane_g4

0x2e38,	// (0x00043510) cale_month_pane_g5_ParamLimits

0x2e38,	// (0x00043510) cale_month_pane_g5

0x2e74,	// (0x0004354c) cale_month_pane_g6_ParamLimits

0x2e74,	// (0x0004354c) cale_month_pane_g6

0x2eb0,	// (0x00043588) cale_month_pane_g7_ParamLimits

0x2eb0,	// (0x00043588) cale_month_pane_g7

0x2eec,	// (0x000435c4) cale_month_pane_g8_ParamLimits

0x2eec,	// (0x000435c4) cale_month_pane_g8

0x2f30,	// (0x00043608) cale_month_pane_g9_ParamLimits

0x2f30,	// (0x00043608) cale_month_pane_g9

0x2f72,	// (0x0004364a) cale_month_pane_g10_ParamLimits

0x2f72,	// (0x0004364a) cale_month_pane_g10

0x2fb4,	// (0x0004368c) cale_month_pane_g11_ParamLimits

0x2fb4,	// (0x0004368c) cale_month_pane_g11

0x2ff6,	// (0x000436ce) cale_month_pane_g12_ParamLimits

0x2ff6,	// (0x000436ce) cale_month_pane_g12

0x3038,	// (0x00043710) cale_month_pane_g13_ParamLimits

0x3038,	// (0x00043710) cale_month_pane_g13

0x000c,

0xf287,	// (0x0004f95f) cale_month_pane_g_ParamLimits

0xf287,	// (0x0004f95f) cale_month_pane_g

0x307a,	// (0x00043752) cale_month_week_pane

0x3096,	// (0x0004376e) grid_cale_month_pane_ParamLimits

0x3096,	// (0x0004376e) grid_cale_month_pane

0x30c4,	// (0x0004379c) cale_month_day_heading_pane_t1

0x314a,	// (0x00043822) cale_month_day_heading_pane_t2

0x31db,	// (0x000438b3) cale_month_day_heading_pane_t3

0x326c,	// (0x00043944) cale_month_day_heading_pane_t4

0x32fd,	// (0x000439d5) cale_month_day_heading_pane_t5

0x338e,	// (0x00043a66) cale_month_day_heading_pane_t6

0x341f,	// (0x00043af7) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0004f97a) cale_month_day_heading_pane_t

0xd9be,	// (0x0004e096) bg_cale_side_pane_cp01

0x34b4,	// (0x00043b8c) cale_month_week_pane_t1

0x34cd,	// (0x00043ba5) cale_month_week_pane_t2

0x34e6,	// (0x00043bbe) cale_month_week_pane_t3

0x34ff,	// (0x00043bd7) cale_month_week_pane_t4

0x3518,	// (0x00043bf0) cale_month_week_pane_t5

0x3531,	// (0x00043c09) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0004f989) cale_month_week_pane_t

0x354a,	// (0x00043c22) cell_cale_month_pane_ParamLimits

0x354a,	// (0x00043c22) cell_cale_month_pane

0xaa82,	// (0x0004b15a) cell_cale_month_pane_g1

0x363c,	// (0x00043d14) cell_cale_month_pane_t1_ParamLimits

0x363c,	// (0x00043d14) cell_cale_month_pane_t1

0xd9cc,	// (0x0004e0a4) grid_highlight_pane_cp08

0xd896,	// (0x0004df6e) main_smil_g1

0x365c,	// (0x00043d34) smil_status_pane

0xddb5,	// (0x0004e48d) smil_text_pane

0x49d5,	// (0x000450ad) bg_popup_call3_rect_pane_g8

0x49dd,	// (0x000450b5) bg_popup_call3_rect_pane_g9

0x0008,

0xf4d6,	// (0x0004fbae) bg_popup_call3_rect_pane_g

0x5204,	// (0x000458dc) smil_status_volume_pane_g1

0x366d,	// (0x00043d45) smil_status_pane_t1

0xaca0,	// (0x0004b378) volume_smil_pane

0xddbf,	// (0x0004e497) list_smil_text_pane

0x3684,	// (0x00043d5c) scroll_pane_cp011

0x368f,	// (0x00043d67) smil_text_list_pane_t1_ParamLimits

0x368f,	// (0x00043d67) smil_text_list_pane_t1

0xaa8e,	// (0x0004b166) aid_volume_smil_ParamLimits

0xaa8e,	// (0x0004b166) aid_volume_smil

0xd896,	// (0x0004df6e) smil_volume_pane_g1

0xd896,	// (0x0004df6e) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0004f9a9) smil_volume_pane_g

0x1f76,	// (0x0004264e) listscroll_cale_day_pane

0xddc9,	// (0x0004e4a1) bg_cale_pane

0xdde1,	// (0x0004e4b9) list_cale_pane

0xde04,	// (0x0004e4dc) scroll_pane_cp09

0xde15,	// (0x0004e4ed) cale_bg_pane_g1

0xde1d,	// (0x0004e4f5) cale_bg_pane_g2

0xde25,	// (0x0004e4fd) cale_bg_pane_g3

0xde2d,	// (0x0004e505) cale_bg_pane_g4

0xde35,	// (0x0004e50d) cale_bg_pane_g5

0xde3d,	// (0x0004e515) cale_bg_pane_g6

0xde45,	// (0x0004e51d) cale_bg_pane_g7

0xde4d,	// (0x0004e525) cale_bg_pane_g8

0xde55,	// (0x0004e52d) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0004f9ae) cale_bg_pane_g

0x36d3,	// (0x00043dab) list_cale_time_pane_ParamLimits

0x36d3,	// (0x00043dab) list_cale_time_pane

0xde5d,	// (0x0004e535) list_cale_time_pane_g1_ParamLimits

0xde5d,	// (0x0004e535) list_cale_time_pane_g1

0xde69,	// (0x0004e541) list_cale_time_pane_g2_ParamLimits

0xde69,	// (0x0004e541) list_cale_time_pane_g2

0x36e8,	// (0x00043dc0) list_cale_time_pane_g3_ParamLimits

0x36e8,	// (0x00043dc0) list_cale_time_pane_g3

0x36f4,	// (0x00043dcc) list_cale_time_pane_g4_ParamLimits

0x36f4,	// (0x00043dcc) list_cale_time_pane_g4

0x3700,	// (0x00043dd8) list_cale_time_pane_g5_ParamLimits

0x3700,	// (0x00043dd8) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0004f9c1) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0004f9c1) list_cale_time_pane_g

0xde83,	// (0x0004e55b) list_cale_time_pane_t1_ParamLimits

0xde83,	// (0x0004e55b) list_cale_time_pane_t1

0xdeab,	// (0x0004e583) list_cale_time_pane_t2_ParamLimits

0xdeab,	// (0x0004e583) list_cale_time_pane_t2

0x39a2,	// (0x0004407a) aid_blid_cardinal_pane

0x39e0,	// (0x000440b8) compass_pane_t4

0xded3,	// (0x0004e5ab) list_cale_time_pane_t4_ParamLimits

0xded3,	// (0x0004e5ab) list_cale_time_pane_t4

0x39ee,	// (0x000440c6) compass_pane_t5

0x39fc,	// (0x000440d4) compass_pane_t6

0x3a0a,	// (0x000440e2) compass_pane_t7

0xe340,	// (0x0004ea18) navi_pane_cc_t1

0xe4e5,	// (0x0004ebbd) aid_phob_thumbnail_center_pane

0x3f4a,	// (0x00044622) main_postcard_pane_g4_ParamLimits

0x0002,

0x000e,	// (0x000406e6) list_cale_time_pane_t_ParamLimits

0x000e,	// (0x000406e6) list_cale_time_pane_t

0xd06d,	// (0x0004d745) bg_popup_window_pane_cp02_ParamLimits

0xd06d,	// (0x0004d745) bg_popup_window_pane_cp02

0xdefb,	// (0x0004e5d3) heading_pane_cp01_ParamLimits

0xdefb,	// (0x0004e5d3) heading_pane_cp01

0xdf07,	// (0x0004e5df) loc_req_pane_ParamLimits

0xdf07,	// (0x0004e5df) loc_req_pane

0xdf17,	// (0x0004e5ef) loc_type_pane_ParamLimits

0xdf17,	// (0x0004e5ef) loc_type_pane

0xdf29,	// (0x0004e601) loc_type_pane_t1_ParamLimits

0xdf29,	// (0x0004e601) loc_type_pane_t1

0xdf3b,	// (0x0004e613) loc_type_pane_t2_ParamLimits

0xdf3b,	// (0x0004e613) loc_type_pane_t2

0xdf4d,	// (0x0004e625) loc_type_pane_t3_ParamLimits

0xdf4d,	// (0x0004e625) loc_type_pane_t3

0x0002,

0x0015,	// (0x000406ed) loc_type_pane_t_ParamLimits

0x0015,	// (0x000406ed) loc_type_pane_t

0xdf5f,	// (0x0004e637) list_loc_req_pane

0xdf69,	// (0x0004e641) scroll_pane_cp012

0x370c,	// (0x00043de4) list_single_loc_request_popup_menu_pane_ParamLimits

0x370c,	// (0x00043de4) list_single_loc_request_popup_menu_pane

0xdf72,	// (0x0004e64a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdf72,	// (0x0004e64a) list_single_loc_request_popup_menu_pane_g1

0xdf7e,	// (0x0004e656) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdf7e,	// (0x0004e656) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x001c,	// (0x000406f4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x001c,	// (0x000406f4) list_single_loc_request_popup_menu_pane_g

0xdf8a,	// (0x0004e662) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xdf8a,	// (0x0004e662) list_single_loc_request_popup_menu_pane_t1

0xd778,	// (0x0004de50) bg_popup_window_pane_cp03_ParamLimits

0xd778,	// (0x0004de50) bg_popup_window_pane_cp03

0xefb9,	// (0x0004f691) heading_loc_req_pane_ParamLimits

0xefb9,	// (0x0004f691) heading_loc_req_pane

0x3719,	// (0x00043df1) popup_dyc_status_message_window_g1_ParamLimits

0x3719,	// (0x00043df1) popup_dyc_status_message_window_g1

0x372d,	// (0x00043e05) popup_dyc_status_message_window_t1_ParamLimits

0x372d,	// (0x00043e05) popup_dyc_status_message_window_t1

0x3742,	// (0x00043e1a) popup_dyc_status_message_window_t2_ParamLimits

0x3742,	// (0x00043e1a) popup_dyc_status_message_window_t2

0x3757,	// (0x00043e2f) popup_dyc_status_message_window_t3_ParamLimits

0x3757,	// (0x00043e2f) popup_dyc_status_message_window_t3

0x0002,

0xf2f6,	// (0x0004f9ce) popup_dyc_status_message_window_t_ParamLimits

0xf2f6,	// (0x0004f9ce) popup_dyc_status_message_window_t

0xd51d,	// (0x0004dbf5) bg_heading_pane_cp01

0xdfa0,	// (0x0004e678) heading_loc_req_pane_g1

0xdfa8,	// (0x0004e680) heading_loc_req_pane_g2

0xdfb0,	// (0x0004e688) heading_loc_req_pane_g3

0x0002,

0x0028,	// (0x00040700) heading_loc_req_pane_g

0xdfb8,	// (0x0004e690) heading_loc_req_pane_t1

0xdfc7,	// (0x0004e69f) bg_popup_sub_pane_cp01_ParamLimits

0xdfc7,	// (0x0004e69f) bg_popup_sub_pane_cp01

0xdfd5,	// (0x0004e6ad) popup_cale_events_window_g1_ParamLimits

0xdfd5,	// (0x0004e6ad) popup_cale_events_window_g1

0xdff5,	// (0x0004e6cd) popup_cale_events_window_g2_ParamLimits

0xdff5,	// (0x0004e6cd) popup_cale_events_window_g2

0x0001,

0x005c,	// (0x00040734) popup_cale_events_window_g_ParamLimits

0x005c,	// (0x00040734) popup_cale_events_window_g

0xe015,	// (0x0004e6ed) popup_cale_events_window_t1_ParamLimits

0xe015,	// (0x0004e6ed) popup_cale_events_window_t1

0xe027,	// (0x0004e6ff) popup_cale_events_window_t2_ParamLimits

0xe027,	// (0x0004e6ff) popup_cale_events_window_t2

0xe065,	// (0x0004e73d) popup_cale_events_window_t3_ParamLimits

0xe065,	// (0x0004e73d) popup_cale_events_window_t3

0xe09f,	// (0x0004e777) popup_cale_events_window_t4_ParamLimits

0xe09f,	// (0x0004e777) popup_cale_events_window_t4

0x0003,

0x0061,	// (0x00040739) popup_cale_events_window_t_ParamLimits

0x0061,	// (0x00040739) popup_cale_events_window_t

0x378d,	// (0x00043e65) call_type_pane

0x379d,	// (0x00043e75) popup_call_status_window_g1

0x37b1,	// (0x00043e89) popup_call_status_window_g2

0x37c5,	// (0x00043e9d) popup_call_status_window_g3

0x0002,

0xf32a,	// (0x0004fa02) popup_call_status_window_g

0xe0d5,	// (0x0004e7ad) call_type_pane_g1

0xe0de,	// (0x0004e7b6) call_type_pane_g2

0x0001,

0xf331,	// (0x0004fa09) call_type_pane_g

0xd51d,	// (0x0004dbf5) bg_popup_sub_pane_cp02

0xe0e7,	// (0x0004e7bf) listscroll_popup_wml_pane

0xe0ef,	// (0x0004e7c7) list_wml_pane

0xe0f9,	// (0x0004e7d1) scroll_pane_cp013

0x37d5,	// (0x00043ead) list_single_graphic_popup_wml_pane_ParamLimits

0x37d5,	// (0x00043ead) list_single_graphic_popup_wml_pane

0xd896,	// (0x0004df6e) list_single_graphic_popup_wml_pane_g1

0xe102,	// (0x0004e7da) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf336,	// (0x0004fa0e) list_single_graphic_popup_wml_pane_g

0xe10a,	// (0x0004e7e2) list_single_graphic_popup_wml_pane_t1

0xe120,	// (0x0004e7f8) aid_call_pane

0xd770,	// (0x0004de48) popup_clock_analogue_window_g1

0xd770,	// (0x0004de48) popup_clock_analogue_window_g2

0xab4a,	// (0x0004b222) popup_clock_analogue_window_g3

0xab4a,	// (0x0004b222) popup_clock_analogue_window_g4

0xd896,	// (0x0004df6e) popup_clock_analogue_window_g5

0x0004,

0xf33b,	// (0x0004fa13) popup_clock_analogue_window_g

0xab52,	// (0x0004b22a) popup_clock_analogue_window_t1

0xab60,	// (0x0004b238) clock_digital_number_pane_ParamLimits

0xab60,	// (0x0004b238) clock_digital_number_pane

0xab6c,	// (0x0004b244) clock_digital_number_pane_cp02_ParamLimits

0xab6c,	// (0x0004b244) clock_digital_number_pane_cp02

0xab78,	// (0x0004b250) clock_digital_number_pane_cp03_ParamLimits

0xab78,	// (0x0004b250) clock_digital_number_pane_cp03

0xab84,	// (0x0004b25c) clock_digital_number_pane_cp04_ParamLimits

0xab84,	// (0x0004b25c) clock_digital_number_pane_cp04

0xab90,	// (0x0004b268) clock_digital_separator_pane_ParamLimits

0xab90,	// (0x0004b268) clock_digital_separator_pane

0xab9c,	// (0x0004b274) popup_clock_digital_window_t1

0xd896,	// (0x0004df6e) clock_digital_number_pane_g1

0xd896,	// (0x0004df6e) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0004f9a9) clock_digital_number_pane_g

0xd896,	// (0x0004df6e) clock_digital_separator_pane_g1

0xd896,	// (0x0004df6e) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0004f9a9) clock_digital_separator_pane_g

0xd51d,	// (0x0004dbf5) bg_popup_window_pane_cp04

0xe128,	// (0x0004e800) heading_pane_cp03

0xe130,	// (0x0004e808) listscroll_popup_gms_pane

0xe138,	// (0x0004e810) grid_large_graphic_popup_pane

0xe142,	// (0x0004e81a) listscroll_popup_gms_pane_g1

0xe14a,	// (0x0004e822) listscroll_popup_gms_pane_g2

0x0001,

0xf346,	// (0x0004fa1e) listscroll_popup_gms_pane_g

0xdc19,	// (0x0004e2f1) scroll_pane_cp014

0x37e8,	// (0x00043ec0) cell_large_graphic_popup_pane_ParamLimits

0x37e8,	// (0x00043ec0) cell_large_graphic_popup_pane

0x37fe,	// (0x00043ed6) cell_large_graphic_popup_pane_g1_ParamLimits

0x37fe,	// (0x00043ed6) cell_large_graphic_popup_pane_g1

0xe152,	// (0x0004e82a) cell_large_graphic_popup_pane_g2_ParamLimits

0xe152,	// (0x0004e82a) cell_large_graphic_popup_pane_g2

0xe15e,	// (0x0004e836) cell_large_graphic_popup_pane_g3_ParamLimits

0xe15e,	// (0x0004e836) cell_large_graphic_popup_pane_g3

0xe16b,	// (0x0004e843) cell_large_graphic_popup_pane_g4_ParamLimits

0xe16b,	// (0x0004e843) cell_large_graphic_popup_pane_g4

0x0003,

0xf34b,	// (0x0004fa23) cell_large_graphic_popup_pane_g_ParamLimits

0xf34b,	// (0x0004fa23) cell_large_graphic_popup_pane_g

0xe17b,	// (0x0004e853) grid_highlight_pane_cp010

0xd896,	// (0x0004df6e) bg_popup_call_pane_g1

0xe185,	// (0x0004e85d) list_single_graphic_popup_conf_pane_ParamLimits

0xe185,	// (0x0004e85d) list_single_graphic_popup_conf_pane

0xe198,	// (0x0004e870) list_highlight_pane_cp01

0xe1a1,	// (0x0004e879) list_single_graphic_popup_conf_pane_g1

0xe1a9,	// (0x0004e881) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf354,	// (0x0004fa2c) list_single_graphic_popup_conf_pane_g

0xe1b1,	// (0x0004e889) list_single_graphic_popup_conf_pane_t1

0xe1cd,	// (0x0004e8a5) linegrid_cams_pane_g1

0x380a,	// (0x00043ee2) linegrid_cams_pane_g2

0xd94f,	// (0x0004e027) linegrid_cams_pane_g3

0xe1d6,	// (0x0004e8ae) linegrid_cams_pane_g4

0x3813,	// (0x00043eeb) linegrid_cams_pane_g5

0x381c,	// (0x00043ef4) linegrid_cams_pane_g6

0xd9ff,	// (0x0004e0d7) linegrid_cams_pane_g7

0x0006,

0xf359,	// (0x0004fa31) linegrid_cams_pane_g

0xe1df,	// (0x0004e8b7) popup_clock_analogue_window

0xe1df,	// (0x0004e8b7) popup_clock_digital_window

0xd51d,	// (0x0004dbf5) popup_phob_thumbnail_window

0xd896,	// (0x0004df6e) call_video_uplink_pane_g1

0xe1e8,	// (0x0004e8c0) call_video_uplink_pane_g2

0x0001,

0x00a8,	// (0x00040780) call_video_uplink_pane_g

0xd9cc,	// (0x0004e0a4) video_uplink_pane

0xe1f0,	// (0x0004e8c8) mce_image_pane_g1

0x3825,	// (0x00043efd) mce_image_pane_g2

0x382d,	// (0x00043f05) mce_image_pane_g3

0x3835,	// (0x00043f0d) mce_image_pane_g4

0x383d,	// (0x00043f15) mce_image_pane_g5

0x0004,

0xf368,	// (0x0004fa40) mce_image_pane_g

0xe1fa,	// (0x0004e8d2) control_top_pane_stacon_cp01_ParamLimits

0xe1fa,	// (0x0004e8d2) control_top_pane_stacon_cp01

0xe20a,	// (0x0004e8e2) uni_indicator_pane_stacon_cp01_ParamLimits

0xe20a,	// (0x0004e8e2) uni_indicator_pane_stacon_cp01

0xe21b,	// (0x0004e8f3) bg_popup_sub_pane_cp03

0xe225,	// (0x0004e8fd) chi_dic_find_pane

0x3845,	// (0x00043f1d) listscroll_chi_dic_pane

0xe22d,	// (0x0004e905) main_pane_chidic_g1

0xe235,	// (0x0004e90d) chi_dic_find_pane_t1

0xe243,	// (0x0004e91b) find_chidic_pane

0xe24c,	// (0x0004e924) chi_dic_list_pane_ParamLimits

0xe24c,	// (0x0004e924) chi_dic_list_pane

0xe25d,	// (0x0004e935) scroll_pane_cp020

0xe265,	// (0x0004e93d) find_chidic_pane_t1

0xd51d,	// (0x0004dbf5) input_focus_pane_cp06

0x3859,	// (0x00043f31) list_chi_dic_pane_ParamLimits

0x3859,	// (0x00043f31) list_chi_dic_pane

0x386b,	// (0x00043f43) list_chi_dic_pane_t1_ParamLimits

0x386b,	// (0x00043f43) list_chi_dic_pane_t1

0xd51d,	// (0x0004dbf5) list_highlight_pane_cp020

0xe274,	// (0x0004e94c) bg_cale_heading_pane_g1

0x387e,	// (0x00043f56) bg_cale_heading_pane_g2

0x3886,	// (0x00043f5e) bg_cale_heading_pane_g3

0x388e,	// (0x00043f66) bg_cale_heading_pane_g4

0x3896,	// (0x00043f6e) bg_cale_heading_pane_g5

0x389e,	// (0x00043f76) bg_cale_heading_pane_g6

0x38a6,	// (0x00043f7e) bg_cale_heading_pane_g7

0x38ae,	// (0x00043f86) bg_cale_heading_pane_g8

0x38b6,	// (0x00043f8e) bg_cale_heading_pane_g9

0x0008,

0xf373,	// (0x0004fa4b) bg_cale_heading_pane_g

0xe274,	// (0x0004e94c) bg_cale_side_pane_g1

0x38be,	// (0x00043f96) bg_cale_side_pane_g2

0x38c6,	// (0x00043f9e) bg_cale_side_pane_g3

0x38ce,	// (0x00043fa6) bg_cale_side_pane_g4

0x38d6,	// (0x00043fae) bg_cale_side_pane_g5

0x38de,	// (0x00043fb6) bg_cale_side_pane_g6

0x38e6,	// (0x00043fbe) bg_cale_side_pane_g7

0x38ee,	// (0x00043fc6) bg_cale_side_pane_g8

0x38f6,	// (0x00043fce) bg_cale_side_pane_g9

0x0008,

0xf386,	// (0x0004fa5e) bg_cale_side_pane_g

0x38fe,	// (0x00043fd6) popup_call_status_window_ParamLimits

0x38fe,	// (0x00043fd6) popup_call_status_window

0xe27c,	// (0x0004e954) stacon_top_pane

0xe284,	// (0x0004e95c) status_pane_ParamLimits

0xe284,	// (0x0004e95c) status_pane

0xe29e,	// (0x0004e976) status_small_pane

0xe2a6,	// (0x0004e97e) control_pane

0xd51d,	// (0x0004dbf5) stacon_bottom_pane

0xe2ae,	// (0x0004e986) list_single_mce_smart_pane_t1_ParamLimits

0xe2ae,	// (0x0004e986) list_single_mce_smart_pane_t1

0xe2c1,	// (0x0004e999) list_single_mce_smart_pane_t2_ParamLimits

0xe2c1,	// (0x0004e999) list_single_mce_smart_pane_t2

0x0001,

0x00de,	// (0x000407b6) list_single_mce_smart_pane_t_ParamLimits

0x00de,	// (0x000407b6) list_single_mce_smart_pane_t

0x3945,	// (0x0004401d) compass_pane

0x394e,	// (0x00044026) main_location2_pane_t1

0x3964,	// (0x0004403c) main_location2_pane_t2

0x397a,	// (0x00044052) main_location2_pane_t3

0x0003,

0xf399,	// (0x0004fa71) main_location2_pane_t

0xe2e9,	// (0x0004e9c1) compass_pane_g1_ParamLimits

0xe2e9,	// (0x0004e9c1) compass_pane_g1

0x39c2,	// (0x0004409a) compass_pane_t1

0x39d1,	// (0x000440a9) compass_pane_t2

0x0005,

0xf3a2,	// (0x0004fa7a) compass_pane_t

0x3a18,	// (0x000440f0) text_secondary_cp61

0xe337,	// (0x0004ea0f) navi_pane_cams_g5

0xe383,	// (0x0004ea5b) navi_pane_im_t1

0xe391,	// (0x0004ea69) navi_pane_mp_g1_ParamLimits

0xe391,	// (0x0004ea69) navi_pane_mp_g1

0xe3a5,	// (0x0004ea7d) navi_pane_mp_g2_ParamLimits

0xe3a5,	// (0x0004ea7d) navi_pane_mp_g2

0xe3b1,	// (0x0004ea89) navi_pane_mp_g3_ParamLimits

0xe3b1,	// (0x0004ea89) navi_pane_mp_g3

0x0002,

0x0100,	// (0x000407d8) navi_pane_mp_g_ParamLimits

0x0100,	// (0x000407d8) navi_pane_mp_g

0xe3bd,	// (0x0004ea95) navi_pane_mp_t1

0xe3cb,	// (0x0004eaa3) navi_pane_mp_t2

0x0002,

0x0107,	// (0x000407df) navi_pane_mp_t

0xe436,	// (0x0004eb0e) navi_pane_vt_g1

0xe3bd,	// (0x0004ea95) navi_pane_vt_t1

0xe43e,	// (0x0004eb16) navi_slider_pane

0xda10,	// (0x0004e0e8) zooming_pane

0xe446,	// (0x0004eb1e) navi_slider_pane_g1

0xabb9,	// (0x0004b291) navi_slider_pane_g2

0x0006,

0xf3b6,	// (0x0004fa8e) navi_slider_pane_g

0xe46a,	// (0x0004eb42) aid_levels_zoom

0xe472,	// (0x0004eb4a) zooming_pane_g1

0xe47a,	// (0x0004eb52) zooming_pane_g2

0xe47a,	// (0x0004eb52) zooming_pane_g3

0x0002,

0x011d,	// (0x000407f5) zooming_pane_g

0xe482,	// (0x0004eb5a) level_10_zoom

0xe48b,	// (0x0004eb63) level_11_zoom

0xe494,	// (0x0004eb6c) level_1_zoom

0xe49d,	// (0x0004eb75) level_2_zoom

0xe4a6,	// (0x0004eb7e) level_3_zoom

0xe4af,	// (0x0004eb87) level_4_zoom

0xe4b8,	// (0x0004eb90) level_5_zoom

0xe4c1,	// (0x0004eb99) level_6_zoom

0xe4ca,	// (0x0004eba2) level_7_zoom

0xe4d3,	// (0x0004ebab) level_8_zoom

0xe4dc,	// (0x0004ebb4) level_9_zoom

0xe4ed,	// (0x0004ebc5) popup_phob_thumbnail_window_g1

0xe4f5,	// (0x0004ebcd) popup_phob_thumbnail_window_g2

0x0001,

0x0124,	// (0x000407fc) popup_phob_thumbnail_window_g

0x4c94,	// (0x0004536c) level_1_location

0x4c9c,	// (0x00045374) level_2_location

0x4ca4,	// (0x0004537c) level_3_location

0x4cac,	// (0x00045384) level_4_location

0xda10,	// (0x0004e0e8) level_5_location

0x3aae,	// (0x00044186) mce_icon_pane_g1

0x3ab6,	// (0x0004418e) mce_icon_pane_g2

0x0001,

0xf3c5,	// (0x0004fa9d) mce_icon_pane_g

0x3abe,	// (0x00044196) main_mup_pane_g1_ParamLimits

0x3abe,	// (0x00044196) main_mup_pane_g1

0x3ad4,	// (0x000441ac) main_mup_pane_g2_ParamLimits

0x3ad4,	// (0x000441ac) main_mup_pane_g2

0x3aec,	// (0x000441c4) main_mup_pane_g3_ParamLimits

0x3aec,	// (0x000441c4) main_mup_pane_g3

0x3b04,	// (0x000441dc) main_mup_pane_g4_ParamLimits

0x3b04,	// (0x000441dc) main_mup_pane_g4

0x3b1c,	// (0x000441f4) main_mup_pane_g5_ParamLimits

0x3b1c,	// (0x000441f4) main_mup_pane_g5

0x3b36,	// (0x0004420e) main_mup_pane_g6_ParamLimits

0x3b36,	// (0x0004420e) main_mup_pane_g6

0x3b4e,	// (0x00044226) main_mup_pane_g7_ParamLimits

0x3b4e,	// (0x00044226) main_mup_pane_g7

0x3b66,	// (0x0004423e) main_mup_pane_g8_ParamLimits

0x3b66,	// (0x0004423e) main_mup_pane_g8

0x3b7e,	// (0x00044256) main_mup_pane_g9_ParamLimits

0x3b7e,	// (0x00044256) main_mup_pane_g9

0x3b92,	// (0x0004426a) main_mup_pane_g10_ParamLimits

0x3b92,	// (0x0004426a) main_mup_pane_g10

0x3ba6,	// (0x0004427e) main_mup_pane_g11_ParamLimits

0x3ba6,	// (0x0004427e) main_mup_pane_g11

0x3bb8,	// (0x00044290) main_mup_pane_g12_ParamLimits

0x3bb8,	// (0x00044290) main_mup_pane_g12

0x3bcc,	// (0x000442a4) main_mup_pane_g13_ParamLimits

0x3bcc,	// (0x000442a4) main_mup_pane_g13

0x000c,

0xf3ca,	// (0x0004faa2) main_mup_pane_g_ParamLimits

0xf3ca,	// (0x0004faa2) main_mup_pane_g

0x3bde,	// (0x000442b6) main_mup_pane_t1_ParamLimits

0x3bde,	// (0x000442b6) main_mup_pane_t1

0x3bf8,	// (0x000442d0) main_mup_pane_t2_ParamLimits

0x3bf8,	// (0x000442d0) main_mup_pane_t2

0x3c10,	// (0x000442e8) main_mup_pane_t3_ParamLimits

0x3c10,	// (0x000442e8) main_mup_pane_t3

0x3c28,	// (0x00044300) main_mup_pane_t4_ParamLimits

0x3c28,	// (0x00044300) main_mup_pane_t4

0x3c46,	// (0x0004431e) main_mup_pane_t5_ParamLimits

0x3c46,	// (0x0004431e) main_mup_pane_t5

0x3c5b,	// (0x00044333) main_mup_pane_t6_ParamLimits

0x3c5b,	// (0x00044333) main_mup_pane_t6

0x0005,

0xf3e5,	// (0x0004fabd) main_mup_pane_t_ParamLimits

0xf3e5,	// (0x0004fabd) main_mup_pane_t

0x3c6d,	// (0x00044345) mup_progress_pane_ParamLimits

0x3c6d,	// (0x00044345) mup_progress_pane

0x3c79,	// (0x00044351) mup_visualizer_pane_ParamLimits

0x3c79,	// (0x00044351) mup_visualizer_pane

0x3ca1,	// (0x00044379) mup_volume_pane_ParamLimits

0x3ca1,	// (0x00044379) mup_volume_pane

0xe1bf,	// (0x0004e897) mup_visualizer_pane_g1_ParamLimits

0xe1bf,	// (0x0004e897) mup_visualizer_pane_g1

0xe1bf,	// (0x0004e897) mup_visualizer_pane_g2_ParamLimits

0xe1bf,	// (0x0004e897) mup_visualizer_pane_g2

0xe2e9,	// (0x0004e9c1) mup_visualizer_pane_g3_ParamLimits

0xe2e9,	// (0x0004e9c1) mup_visualizer_pane_g3

0x0002,

0xf3f2,	// (0x0004faca) mup_visualizer_pane_g_ParamLimits

0xf3f2,	// (0x0004faca) mup_visualizer_pane_g

0xd896,	// (0x0004df6e) mup_volume_pane_g1

0xe505,	// (0x0004ebdd) mup_volume_pane_g2

0x0001,

0x015d,	// (0x00040835) mup_volume_pane_g

0xd896,	// (0x0004df6e) mup_progress_pane_g1

0xe50e,	// (0x0004ebe6) mup_progress_pane_g2

0xe517,	// (0x0004ebef) mup_progress_pane_g3

0x0002,

0x0162,	// (0x0004083a) mup_progress_pane_g

0xd51d,	// (0x0004dbf5) bg_popup_window_pane_cp05

0xe520,	// (0x0004ebf8) heading_pane_cp02_ParamLimits

0xe520,	// (0x0004ebf8) heading_pane_cp02

0xe53a,	// (0x0004ec12) list_popup_blid_pane

0xe542,	// (0x0004ec1a) list_blid_sat_info_pane_ParamLimits

0xe542,	// (0x0004ec1a) list_blid_sat_info_pane

0xe555,	// (0x0004ec2d) list_blid_sat_info_pane_g1

0xe55d,	// (0x0004ec35) list_blid_sat_info_pane_t1

0x3d91,	// (0x00044469) mup_equalizer_pane_ParamLimits

0x3d91,	// (0x00044469) mup_equalizer_pane

0x3daa,	// (0x00044482) mup_equalizer_pane_cp1_ParamLimits

0x3daa,	// (0x00044482) mup_equalizer_pane_cp1

0x3dc3,	// (0x0004449b) mup_equalizer_pane_cp2_ParamLimits

0x3dc3,	// (0x0004449b) mup_equalizer_pane_cp2

0x3ddc,	// (0x000444b4) mup_equalizer_pane_cp3_ParamLimits

0x3ddc,	// (0x000444b4) mup_equalizer_pane_cp3

0x3df5,	// (0x000444cd) mup_equalizer_pane_cp4_ParamLimits

0x3df5,	// (0x000444cd) mup_equalizer_pane_cp4

0x3e0e,	// (0x000444e6) mup_equalizer_pane_cp5

0x3e20,	// (0x000444f8) mup_equalizer_pane_cp6

0x3e32,	// (0x0004450a) mup_equalizer_pane_cp7

0x4a5d,	// (0x00045135) bg_popup_call_poc_act_pane_g9

0x4a65,	// (0x0004513d) bg_popup_call_poc_act_pane_g10

0x4a6d,	// (0x00045145) bg_popup_call_poc_act_pane_g11

0x000a,

0xd778,	// (0x0004de50) mup_scale_pane

0xd896,	// (0x0004df6e) mup_scale_pane_g1

0xe56b,	// (0x0004ec43) mup_scale_pane_g2

0x0006,

0xf40e,	// (0x0004fae6) mup_scale_pane_g

0xe58f,	// (0x0004ec67) msg_data_pane

0xe597,	// (0x0004ec6f) scroll_pane_cp017

0x0d50,	// (0x00041428) bg_list_pane_cp04_ParamLimits

0x0d50,	// (0x00041428) bg_list_pane_cp04

0xe59f,	// (0x0004ec77) msg_data_pane_g1

0x3825,	// (0x00043efd) msg_data_pane_g2

0x382d,	// (0x00043f05) msg_data_pane_g3

0x3e58,	// (0x00044530) msg_data_pane_g4

0x383d,	// (0x00043f15) msg_data_pane_g5

0x3aae,	// (0x00044186) msg_data_pane_g6

0x3e60,	// (0x00044538) msg_data_pane_g7

0x0006,

0xf41d,	// (0x0004faf5) msg_data_pane_g

0x0d70,	// (0x00041448) msg_text_pane_ParamLimits

0x0d70,	// (0x00041448) msg_text_pane

0x3e68,	// (0x00044540) qrid_highlight_pane_cp011_ParamLimits

0x3e68,	// (0x00044540) qrid_highlight_pane_cp011

0xd51d,	// (0x0004dbf5) msg_body_pane

0xd51d,	// (0x0004dbf5) msg_header_pane

0xe5b0,	// (0x0004ec88) input_focus_pane_cp07

0x0da4,	// (0x0004147c) msg_header_pane_t1_ParamLimits

0x0da4,	// (0x0004147c) msg_header_pane_t1

0xabcb,	// (0x0004b2a3) msg_header_pane_t2_ParamLimits

0xabcb,	// (0x0004b2a3) msg_header_pane_t2

0x0001,

0xf431,	// (0x0004fb09) msg_header_pane_t_ParamLimits

0xf431,	// (0x0004fb09) msg_header_pane_t

0xe5c5,	// (0x0004ec9d) msg_body_pane_g1

0x0db6,	// (0x0004148e) msg_body_pane_t1_ParamLimits

0x0db6,	// (0x0004148e) msg_body_pane_t1

0xabdd,	// (0x0004b2b5) msg_body_pane_t2_ParamLimits

0xabdd,	// (0x0004b2b5) msg_body_pane_t2

0xabef,	// (0x0004b2c7) msg_body_pane_t3_ParamLimits

0xabef,	// (0x0004b2c7) msg_body_pane_t3

0x0002,

0xf436,	// (0x0004fb0e) msg_body_pane_t_ParamLimits

0xf436,	// (0x0004fb0e) msg_body_pane_t

0x3eb4,	// (0x0004458c) main_viewer_pane_g1_ParamLimits

0x3eb4,	// (0x0004458c) main_viewer_pane_g1

0x3ec0,	// (0x00044598) main_viewer_pane_g2_ParamLimits

0x3ec0,	// (0x00044598) main_viewer_pane_g2

0x3ecc,	// (0x000445a4) main_viewer_pane_g3_ParamLimits

0x3ecc,	// (0x000445a4) main_viewer_pane_g3

0x3edb,	// (0x000445b3) main_viewer_pane_g4_ParamLimits

0x3edb,	// (0x000445b3) main_viewer_pane_g4

0xac19,	// (0x0004b2f1) main_viewer_pane_g5_ParamLimits

0xac19,	// (0x0004b2f1) main_viewer_pane_g5

0xac19,	// (0x0004b2f1) main_viewer_pane_g7_ParamLimits

0xac19,	// (0x0004b2f1) main_viewer_pane_g7

0xac2b,	// (0x0004b303) main_viewer_pane_g8_ParamLimits

0xac2b,	// (0x0004b303) main_viewer_pane_g8

0x0007,

0xf446,	// (0x0004fb1e) main_viewer_pane_g_ParamLimits

0xf446,	// (0x0004fb1e) main_viewer_pane_g

0xe5cd,	// (0x0004eca5) viewer_content_pane_ParamLimits

0xe5cd,	// (0x0004eca5) viewer_content_pane

0x3f0f,	// (0x000445e7) main_postcard_pane_g1_ParamLimits

0x3f0f,	// (0x000445e7) main_postcard_pane_g1

0x3f23,	// (0x000445fb) main_postcard_pane_g2_ParamLimits

0x3f23,	// (0x000445fb) main_postcard_pane_g2

0x3f37,	// (0x0004460f) main_postcard_pane_g3_ParamLimits

0x3f37,	// (0x0004460f) main_postcard_pane_g3

0x0005,

0xf457,	// (0x0004fb2f) main_postcard_pane_g_ParamLimits

0xf457,	// (0x0004fb2f) main_postcard_pane_g

0x3f4a,	// (0x00044622) main_postcard_pane_g4

0x5217,	// (0x000458ef) smil_status_volume_pane_g2

0x3f85,	// (0x0004465d) postcard_pane_ParamLimits

0x3f85,	// (0x0004465d) postcard_pane

0xe5db,	// (0x0004ecb3) postcard_pane_g1_ParamLimits

0xe5db,	// (0x0004ecb3) postcard_pane_g1

0x3fc5,	// (0x0004469d) postcard_pane_g2_ParamLimits

0x3fc5,	// (0x0004469d) postcard_pane_g2

0x3fd1,	// (0x000446a9) postcard_pane_g3_ParamLimits

0x3fd1,	// (0x000446a9) postcard_pane_g3

0xe5e9,	// (0x0004ecc1) postcard_pane_g4_ParamLimits

0xe5e9,	// (0x0004ecc1) postcard_pane_g4

0x3fdd,	// (0x000446b5) postcard_pane_g5_ParamLimits

0x3fdd,	// (0x000446b5) postcard_pane_g5

0x3ff2,	// (0x000446ca) postcard_pane_g6_ParamLimits

0x3ff2,	// (0x000446ca) postcard_pane_g6

0xe5db,	// (0x0004ecb3) postcard_pane_g7_ParamLimits

0xe5db,	// (0x0004ecb3) postcard_pane_g7

0x0006,

0xf464,	// (0x0004fb3c) postcard_pane_g_ParamLimits

0xf464,	// (0x0004fb3c) postcard_pane_g

0x4006,	// (0x000446de) main_mp2_pane_g1_ParamLimits

0x4006,	// (0x000446de) main_mp2_pane_g1

0x4012,	// (0x000446ea) main_mp2_pane_g2_ParamLimits

0x4012,	// (0x000446ea) main_mp2_pane_g2

0x401e,	// (0x000446f6) main_mp2_pane_g3_ParamLimits

0x401e,	// (0x000446f6) main_mp2_pane_g3

0x0002,

0xf473,	// (0x0004fb4b) main_mp2_pane_g_ParamLimits

0xf473,	// (0x0004fb4b) main_mp2_pane_g

0x402a,	// (0x00044702) main_mp2_pane_t1_ParamLimits

0x402a,	// (0x00044702) main_mp2_pane_t1

0x403f,	// (0x00044717) main_mp2_pane_t2_ParamLimits

0x403f,	// (0x00044717) main_mp2_pane_t2

0x4051,	// (0x00044729) main_mp2_pane_t3_ParamLimits

0x4051,	// (0x00044729) main_mp2_pane_t3

0x0002,

0xf47a,	// (0x0004fb52) main_mp2_pane_t_ParamLimits

0xf47a,	// (0x0004fb52) main_mp2_pane_t

0xe5f7,	// (0x0004eccf) pec_content_pane_ParamLimits

0xe5f7,	// (0x0004eccf) pec_content_pane

0xdc19,	// (0x0004e2f1) scroll_pane_cp015

0xe609,	// (0x0004ece1) pec_attribute_pane_ParamLimits

0xe609,	// (0x0004ece1) pec_attribute_pane

0x4063,	// (0x0004473b) pec_content_pane_g1_ParamLimits

0x4063,	// (0x0004473b) pec_content_pane_g1

0xe619,	// (0x0004ecf1) pec_content_pane_t1_ParamLimits

0xe619,	// (0x0004ecf1) pec_content_pane_t1

0xe62b,	// (0x0004ed03) pec_content_pane_t2_ParamLimits

0xe62b,	// (0x0004ed03) pec_content_pane_t2

0x0001,

0x01f1,	// (0x000408c9) pec_content_pane_t_ParamLimits

0x01f1,	// (0x000408c9) pec_content_pane_t

0x406f,	// (0x00044747) list_single_graphic_pane_cp01_ParamLimits

0x406f,	// (0x00044747) list_single_graphic_pane_cp01

0xd778,	// (0x0004de50) bg_popup_sub_pane_cp04

0xe63d,	// (0x0004ed15) popup_mup_playback_window_g1

0xe649,	// (0x0004ed21) popup_mup_playback_window_t1

0xe65e,	// (0x0004ed36) popup_mup_playback_window_t2

0x0001,

0x01f6,	// (0x000408ce) popup_mup_playback_window_t

0xe695,	// (0x0004ed6d) main_image_pane_g1_ParamLimits

0xe695,	// (0x0004ed6d) main_image_pane_g1

0xe6d8,	// (0x0004edb0) scroll_pane_cp018_ParamLimits

0xe6d8,	// (0x0004edb0) scroll_pane_cp018

0xe6f0,	// (0x0004edc8) scroll_pane_cp016_ParamLimits

0xe6f0,	// (0x0004edc8) scroll_pane_cp016

0x413a,	// (0x00044812) smil2_image_pane_ParamLimits

0x413a,	// (0x00044812) smil2_image_pane

0x4162,	// (0x0004483a) smil2_root_pane_ParamLimits

0x4162,	// (0x0004483a) smil2_root_pane

0x419a,	// (0x00044872) smil2_text_pane_ParamLimits

0x419a,	// (0x00044872) smil2_text_pane

0xd51d,	// (0x0004dbf5) bg_list_pane_cp06

0xe724,	// (0x0004edfc) grid_radio_pane

0xd51d,	// (0x0004dbf5) bg_popup_window_pane_cp06

0xe72c,	// (0x0004ee04) main_fmradio_pane_t1

0xe128,	// (0x0004e800) heading_pane_cp04

0xe73a,	// (0x0004ee12) main_fmradio_pane_t2

0x4b35,	// (0x0004520d) popup_cale_lunar_info_window_g1

0xe748,	// (0x0004ee20) main_fmradio_pane_t3

0x4b3d,	// (0x00045215) popup_cale_lunar_info_window_g2

0xe756,	// (0x0004ee2e) main_fmradio_pane_t4

0x0001,

0xe764,	// (0x0004ee3c) main_fmradio_pane_t5

0x0004,

0xf538,	// (0x0004fc10) popup_cale_lunar_info_window_g

0x020b,	// (0x000408e3) main_fmradio_pane_t

0xe772,	// (0x0004ee4a) wait_bar_pane_cp03

0xdb35,	// (0x0004e20d) cell_fmradio_pane_ParamLimits

0xdb35,	// (0x0004e20d) cell_fmradio_pane

0xe5db,	// (0x0004ecb3) cell_fmradio_pane_g1_ParamLimits

0xe5db,	// (0x0004ecb3) cell_fmradio_pane_g1

0xd51d,	// (0x0004dbf5) grid_highlight_pane_cp011

0xe77a,	// (0x0004ee52) poc_content_pane_ParamLimits

0xe77a,	// (0x0004ee52) poc_content_pane

0xe78d,	// (0x0004ee65) scroll_pane_cp019

0x4206,	// (0x000448de) popup_call_poc_act_window_ParamLimits

0x4206,	// (0x000448de) popup_call_poc_act_window

0x4226,	// (0x000448fe) popup_call_poc_inact_window_ParamLimits

0x4226,	// (0x000448fe) popup_call_poc_inact_window

0xf4fc,	// (0x0004fbd4) bg_popup_call_poc_act_pane_g

0x4a75,	// (0x0004514d) bg_popup_call_poc_inact_pane_g1

0x4a7d,	// (0x00045155) bg_popup_call_poc_inact_pane_g2

0xe795,	// (0x0004ee6d) popup_call_poc_act_window_g2

0x4a85,	// (0x0004515d) bg_popup_call_poc_inact_pane_g3

0x49fd,	// (0x000450d5) bg_popup_call_poc_inact_pane_g4

0x4a8d,	// (0x00045165) bg_popup_call_poc_inact_pane_g5

0xe79d,	// (0x0004ee75) popup_call_poc_act_window_t1_ParamLimits

0xe79d,	// (0x0004ee75) popup_call_poc_act_window_t1

0xe7c5,	// (0x0004ee9d) popup_call_poc_act_window_t2_ParamLimits

0xe7c5,	// (0x0004ee9d) popup_call_poc_act_window_t2

0xe7ed,	// (0x0004eec5) popup_call_poc_act_window_t3_ParamLimits

0xe7ed,	// (0x0004eec5) popup_call_poc_act_window_t3

0xe815,	// (0x0004eeed) popup_call_poc_act_window_t4_ParamLimits

0xe815,	// (0x0004eeed) popup_call_poc_act_window_t4

0x0003,

0x0216,	// (0x000408ee) popup_call_poc_act_window_t_ParamLimits

0x0216,	// (0x000408ee) popup_call_poc_act_window_t

0x4a95,	// (0x0004516d) bg_popup_call_poc_inact_pane_g6

0x4a9d,	// (0x00045175) bg_popup_call_poc_inact_pane_g7

0x4aa5,	// (0x0004517d) bg_popup_call_poc_inact_pane_g8

0xe827,	// (0x0004eeff) popup_call_poc_inact_window_g2

0x4aad,	// (0x00045185) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf513,	// (0x0004fbeb) bg_popup_call_poc_inact_pane_g

0xe82f,	// (0x0004ef07) popup_call_poc_inact_window_t1_ParamLimits

0xe82f,	// (0x0004ef07) popup_call_poc_inact_window_t1

0xe844,	// (0x0004ef1c) popup_call_poc_inact_window_t2_ParamLimits

0xe844,	// (0x0004ef1c) popup_call_poc_inact_window_t2

0xe859,	// (0x0004ef31) popup_call_poc_inact_window_t3_ParamLimits

0xe859,	// (0x0004ef31) popup_call_poc_inact_window_t3

0x0002,

0x021f,	// (0x000408f7) popup_call_poc_inact_window_t_ParamLimits

0x021f,	// (0x000408f7) popup_call_poc_inact_window_t

0x50c7,	// (0x0004579f) context_pane_ParamLimits

0x5123,	// (0x000457fb) signal_pane_ParamLimits

0xda10,	// (0x0004e0e8) main_call2_pane

0xac6c,	// (0x0004b344) popup_phob_thumbnail2_window_ParamLimits

0xac6c,	// (0x0004b344) popup_phob_thumbnail2_window

0xac01,	// (0x0004b2d9) aid_hotspot_pointer_arrow_pane

0xac09,	// (0x0004b2e1) aid_hotspot_pointer_hand_pane

0x4c62,	// (0x0004533a) phob_pre_status_pane_g5

0x25d3,	// (0x00042cab) cams_zoom_pane_ParamLimits

0x25e2,	// (0x00042cba) image_vga_pane_ParamLimits

0x25fa,	// (0x00042cd2) main_camera_pane_g1_ParamLimits

0x260a,	// (0x00042ce2) main_camera_pane_g2_ParamLimits

0x261a,	// (0x00042cf2) main_camera_pane_g3_ParamLimits

0x262a,	// (0x00042d02) main_camera_pane_g4_ParamLimits

0x263a,	// (0x00042d12) main_camera_pane_g5_ParamLimits

0x264a,	// (0x00042d22) main_camera_pane_g6_ParamLimits

0x265a,	// (0x00042d32) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0004f8de) main_camera_pane_g_ParamLimits

0x266a,	// (0x00042d42) main_camera_pane_t1_ParamLimits

0x2680,	// (0x00042d58) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0004f8ef) main_camera_pane_t_ParamLimits

0xd778,	// (0x0004de50) bg_popup_preview_window_pane_cp01_ParamLimits

0xd778,	// (0x0004de50) bg_popup_preview_window_pane_cp01

0xe86e,	// (0x0004ef46) popup_phob_thumbnail2_window_g1_ParamLimits

0xe86e,	// (0x0004ef46) popup_phob_thumbnail2_window_g1

0xd51d,	// (0x0004dbf5) call2_cli_visual_pane

0x4252,	// (0x0004492a) popup_call2_audio_conf_window_ParamLimits

0x4252,	// (0x0004492a) popup_call2_audio_conf_window

0x4270,	// (0x00044948) popup_call2_audio_first_window_ParamLimits

0x4270,	// (0x00044948) popup_call2_audio_first_window

0x42e6,	// (0x000449be) popup_call2_audio_in_window_ParamLimits

0x42e6,	// (0x000449be) popup_call2_audio_in_window

0x431a,	// (0x000449f2) popup_call2_audio_out_window_ParamLimits

0x431a,	// (0x000449f2) popup_call2_audio_out_window

0x436c,	// (0x00044a44) popup_call2_audio_second_window_ParamLimits

0x436c,	// (0x00044a44) popup_call2_audio_second_window

0x43be,	// (0x00044a96) popup_call2_audio_wait_window_ParamLimits

0x43be,	// (0x00044a96) popup_call2_audio_wait_window

0xd51d,	// (0x0004dbf5) bg_popup_call2_act_pane_cp03

0xd75a,	// (0x0004de32) list_conf_pane_cp

0xe87a,	// (0x0004ef52) popup_call2_audio_conf_window_t1

0xe185,	// (0x0004e85d) list_single_graphic_popup_conf2_pane_ParamLimits

0xe185,	// (0x0004e85d) list_single_graphic_popup_conf2_pane

0xe198,	// (0x0004e870) list_highlight_pane_cp04

0xe888,	// (0x0004ef60) list_single_graphic_popup_conf2_pane_g1

0xe1a9,	// (0x0004e881) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf491,	// (0x0004fb69) list_single_graphic_popup_conf2_pane_g

0xe890,	// (0x0004ef68) list_single_graphic_popup_conf2_pane_t1

0xe89e,	// (0x0004ef76) bg_popup_call2_act_pane_cp01_ParamLimits

0xe89e,	// (0x0004ef76) bg_popup_call2_act_pane_cp01

0xe928,	// (0x0004f000) call_type_pane_cp05_ParamLimits

0xe928,	// (0x0004f000) call_type_pane_cp05

0xe97c,	// (0x0004f054) popup_call2_audio_second_window_g1_ParamLimits

0xe97c,	// (0x0004f054) popup_call2_audio_second_window_g1

0xe9d0,	// (0x0004f0a8) popup_call2_audio_second_window_g2_ParamLimits

0xe9d0,	// (0x0004f0a8) popup_call2_audio_second_window_g2

0x0002,

0x022b,	// (0x00040903) popup_call2_audio_second_window_g_ParamLimits

0x022b,	// (0x00040903) popup_call2_audio_second_window_g

0xea35,	// (0x0004f10d) popup_call2_audio_second_window_t1_ParamLimits

0xea35,	// (0x0004f10d) popup_call2_audio_second_window_t1

0xeaf0,	// (0x0004f1c8) popup_call2_audio_second_window_t2_ParamLimits

0xeaf0,	// (0x0004f1c8) popup_call2_audio_second_window_t2

0xeb43,	// (0x0004f21b) popup_call2_audio_second_window_t3_ParamLimits

0xeb43,	// (0x0004f21b) popup_call2_audio_second_window_t3

0x0003,

0x0232,	// (0x0004090a) popup_call2_audio_second_window_t_ParamLimits

0x0232,	// (0x0004090a) popup_call2_audio_second_window_t

0xd51d,	// (0x0004dbf5) bg_popup_call2_in_pane_cp02

0xd527,	// (0x0004dbff) call_type_pane_cp04

0xd52f,	// (0x0004dc07) popup_call2_audio_wait_window_g1

0xd537,	// (0x0004dc0f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004f7cd) popup_call2_audio_wait_window_g

0xd53f,	// (0x0004dc17) popup_call2_audio_wait_window_t3

0xec36,	// (0x0004f30e) bg_popup_call2_act_pane_ParamLimits

0xec36,	// (0x0004f30e) bg_popup_call2_act_pane

0xecf6,	// (0x0004f3ce) call_type_pane_cp03_ParamLimits

0xecf6,	// (0x0004f3ce) call_type_pane_cp03

0xed5a,	// (0x0004f432) popup_call2_audio_first_window_g1_ParamLimits

0xed5a,	// (0x0004f432) popup_call2_audio_first_window_g1

0xedca,	// (0x0004f4a2) popup_call2_audio_first_window_g2_ParamLimits

0xedca,	// (0x0004f4a2) popup_call2_audio_first_window_g2

0xe1bf,	// (0x0004e897) popup_call2_audio_first_window_g3_ParamLimits

0xe1bf,	// (0x0004e897) popup_call2_audio_first_window_g3

0x0004,

0xf496,	// (0x0004fb6e) popup_call2_audio_first_window_g_ParamLimits

0xf496,	// (0x0004fb6e) popup_call2_audio_first_window_g

0xeea8,	// (0x0004f580) popup_call2_audio_first_window_t1_ParamLimits

0xeea8,	// (0x0004f580) popup_call2_audio_first_window_t1

0xefc5,	// (0x0004f69d) popup_call2_audio_first_window_t4_ParamLimits

0xefc5,	// (0x0004f69d) popup_call2_audio_first_window_t4

0x43f6,	// (0x00044ace) popup_call2_audio_first_window_t5_ParamLimits

0x43f6,	// (0x00044ace) popup_call2_audio_first_window_t5

0x0003,

0xf4a1,	// (0x0004fb79) popup_call2_audio_first_window_t_ParamLimits

0xf4a1,	// (0x0004fb79) popup_call2_audio_first_window_t

0xd770,	// (0x0004de48) bg_popup_call2_act_pane_g1

0x4b45,	// (0x0004521d) popup_cale_lunar_info_window_t1

0x4b53,	// (0x0004522b) popup_cale_lunar_info_window_t2

0x4b61,	// (0x00045239) popup_cale_lunar_info_window_t3

0xd51d,	// (0x0004dbf5) bg_popup_call2_bubble_pane

0x44f7,	// (0x00044bcf) bg_popup_call2_in_pane_cp01_ParamLimits

0x44f7,	// (0x00044bcf) bg_popup_call2_in_pane_cp01

0xd0f0,	// (0x0004d7c8) call_type_pane_cp02

0x453f,	// (0x00044c17) popup_call2_audio_out_window_g1_ParamLimits

0x453f,	// (0x00044c17) popup_call2_audio_out_window_g1

0x456b,	// (0x00044c43) popup_call2_audio_out_window_g2_ParamLimits

0x456b,	// (0x00044c43) popup_call2_audio_out_window_g2

0x4593,	// (0x00044c6b) popup_call2_audio_out_window_g3_ParamLimits

0x4593,	// (0x00044c6b) popup_call2_audio_out_window_g3

0x0003,

0xf4aa,	// (0x0004fb82) popup_call2_audio_out_window_g_ParamLimits

0xf4aa,	// (0x0004fb82) popup_call2_audio_out_window_g

0x45ce,	// (0x00044ca6) popup_call2_audio_out_window_t1_ParamLimits

0x45ce,	// (0x00044ca6) popup_call2_audio_out_window_t1

0x462d,	// (0x00044d05) popup_call2_audio_out_window_t2_ParamLimits

0x462d,	// (0x00044d05) popup_call2_audio_out_window_t2

0x4681,	// (0x00044d59) popup_call2_audio_out_window_t3_ParamLimits

0x4681,	// (0x00044d59) popup_call2_audio_out_window_t3

0x4697,	// (0x00044d6f) popup_call2_audio_out_window_t4_ParamLimits

0x4697,	// (0x00044d6f) popup_call2_audio_out_window_t4

0x46ad,	// (0x00044d85) popup_call2_audio_out_window_t5_ParamLimits

0x46ad,	// (0x00044d85) popup_call2_audio_out_window_t5

0x0005,

0xf4b3,	// (0x0004fb8b) popup_call2_audio_out_window_t_ParamLimits

0xf4b3,	// (0x0004fb8b) popup_call2_audio_out_window_t

0x4711,	// (0x00044de9) bg_popup_call2_in_pane_ParamLimits

0x4711,	// (0x00044de9) bg_popup_call2_in_pane

0x476d,	// (0x00044e45) popup_call2_audio_in_window_g1_ParamLimits

0x476d,	// (0x00044e45) popup_call2_audio_in_window_g1

0x47a5,	// (0x00044e7d) popup_call2_audio_in_window_g2_ParamLimits

0x47a5,	// (0x00044e7d) popup_call2_audio_in_window_g2

0x47dd,	// (0x00044eb5) popup_call2_audio_in_window_g3_ParamLimits

0x47dd,	// (0x00044eb5) popup_call2_audio_in_window_g3

0x0003,

0xf4c0,	// (0x0004fb98) popup_call2_audio_in_window_g_ParamLimits

0xf4c0,	// (0x0004fb98) popup_call2_audio_in_window_g

0x4835,	// (0x00044f0d) popup_call2_audio_in_window_t1_ParamLimits

0x4835,	// (0x00044f0d) popup_call2_audio_in_window_t1

0x48b5,	// (0x00044f8d) popup_call2_audio_in_window_t2_ParamLimits

0x48b5,	// (0x00044f8d) popup_call2_audio_in_window_t2

0x4935,	// (0x0004500d) popup_call2_audio_in_window_t3_ParamLimits

0x4935,	// (0x0004500d) popup_call2_audio_in_window_t3

0x494f,	// (0x00045027) popup_call2_audio_in_window_t4_ParamLimits

0x494f,	// (0x00045027) popup_call2_audio_in_window_t4

0x4961,	// (0x00045039) popup_call2_audio_in_window_t5_ParamLimits

0x4961,	// (0x00045039) popup_call2_audio_in_window_t5

0x4976,	// (0x0004504e) popup_call2_audio_in_window_t6_ParamLimits

0x4976,	// (0x0004504e) popup_call2_audio_in_window_t6

0x0005,

0xf4c9,	// (0x0004fba1) popup_call2_audio_in_window_t_ParamLimits

0xf4c9,	// (0x0004fba1) popup_call2_audio_in_window_t

0xd770,	// (0x0004de48) bg_popup_call2_in_pane_g1

0x4b6f,	// (0x00045247) popup_cale_lunar_info_window_t4

0x0003,

0xf53d,	// (0x0004fc15) popup_cale_lunar_info_window_t

0xd778,	// (0x0004de50) bg_popup_call2_rect_pane_ParamLimits

0xd778,	// (0x0004de50) bg_popup_call2_rect_pane

0xd51d,	// (0x0004dbf5) call2_cli_visual_graphic_pane

0xd51d,	// (0x0004dbf5) call2_cli_visual_text_pane

0xac93,	// (0x0004b36b) smil_status_volume_pane_g3

0x0002,

0xd896,	// (0x0004df6e) call2_cli_visual_graphic_pane_g1

0xd896,	// (0x0004df6e) call2_cli_visual_graphic_pane_g2

0xd896,	// (0x0004df6e) call2_cli_visual_graphic_pane_g3

0x0002,

0x027b,	// (0x00040953) call2_cli_visual_graphic_pane_g

0x49a5,	// (0x0004507d) bg_popup_call2_rect_pane_g1

0xd934,	// (0x0004e00c) bg_popup_call2_rect_pane_g2

0x49ad,	// (0x00045085) bg_popup_call2_rect_pane_g3

0x49b5,	// (0x0004508d) bg_popup_call2_rect_pane_g4

0x49bd,	// (0x00045095) bg_popup_call2_rect_pane_g5

0x49c5,	// (0x0004509d) bg_popup_call2_rect_pane_g6

0x49cd,	// (0x000450a5) bg_popup_call2_rect_pane_g7

0x49d5,	// (0x000450ad) bg_popup_call2_rect_pane_g8

0x49dd,	// (0x000450b5) bg_popup_call2_rect_pane_g9

0x0008,

0xf4d6,	// (0x0004fbae) bg_popup_call2_rect_pane_g

0x49e5,	// (0x000450bd) bg_popup_call2_bubble_pane_g1

0x49ed,	// (0x000450c5) bg_popup_call2_bubble_pane_g2

0x49f5,	// (0x000450cd) bg_popup_call2_bubble_pane_g3

0x49fd,	// (0x000450d5) bg_popup_call2_bubble_pane_g4

0x4a05,	// (0x000450dd) bg_popup_call2_bubble_pane_g5

0x4a0d,	// (0x000450e5) bg_popup_call2_bubble_pane_g6

0x4a15,	// (0x000450ed) bg_popup_call2_bubble_pane_g7

0x4a1d,	// (0x000450f5) bg_popup_call2_bubble_pane_g8

0x4a25,	// (0x000450fd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4e9,	// (0x0004fbc1) bg_popup_call2_bubble_pane_g

0x1f86,	// (0x0004265e) aid_cale_week_size_cell_pane

0x2696,	// (0x00042d6e) aid_cams_cif_uncrop_pane_ParamLimits

0x2696,	// (0x00042d6e) aid_cams_cif_uncrop_pane

0x2837,	// (0x00042f0f) aid_cams_size_cell_ParamLimits

0x2837,	// (0x00042f0f) aid_cams_size_cell

0x284b,	// (0x00042f23) grid_cams_pane_ParamLimits

0x2860,	// (0x00042f38) linegrid_cams_pane_ParamLimits

0x292a,	// (0x00043002) call_video_pane_t1

0x2944,	// (0x0004301c) call_video_pane_t2

0x0001,

0xf26a,	// (0x0004f942) call_video_pane_t

0x2cc9,	// (0x000433a1) aid_cale_month_size_cell_pane_ParamLimits

0x2cc9,	// (0x000433a1) aid_cale_month_size_cell_pane

0xf586,	// (0x0004fc5e) smil_status_volume_pane_g

0xaca0,	// (0x0004b378) volume_smil_pane_ParamLimits

0xa8a3,	// (0x0004af7b) aid_popup2_width_pane

0x1ee3,	// (0x000425bb) cell_qdial_pane_g4_ParamLimits

0x1ee3,	// (0x000425bb) cell_qdial_pane_g4

0x39a2,	// (0x0004407a) aid_blid_cardinal_pane_ParamLimits

0x39ae,	// (0x00044086) aid_blid_destination_pane_ParamLimits

0x39ae,	// (0x00044086) aid_blid_destination_pane

0xd778,	// (0x0004de50) bg_popup_call_poc_act_pane_ParamLimits

0xd778,	// (0x0004de50) bg_popup_call_poc_act_pane

0xd778,	// (0x0004de50) bg_popup_call_poc_inact_pane_ParamLimits

0xd778,	// (0x0004de50) bg_popup_call_poc_inact_pane

0x4a35,	// (0x0004510d) bg_popup_call_poc_act_pane_g1

0x4a3d,	// (0x00045115) bg_popup_call_poc_act_pane_g2

0x4a45,	// (0x0004511d) bg_popup_call_poc_act_pane_g3

0x49fd,	// (0x000450d5) bg_popup_call_poc_act_pane_g4

0x4a05,	// (0x000450dd) bg_popup_call_poc_act_pane_g5

0x4a4d,	// (0x00045125) bg_popup_call_poc_act_pane_g6

0x4a15,	// (0x000450ed) bg_popup_call_poc_act_pane_g7

0x4a55,	// (0x0004512d) bg_popup_call_poc_act_pane_g8

0xd51d,	// (0x0004dbf5) main_usb_pane

0xac4b,	// (0x0004b323) popup_cale_lunar_info_window

0x2b89,	// (0x00043261) im_reading_pane_t1_ParamLimits

0xdb62,	// (0x0004e23a) list_im_pane_ParamLimits

0xdb73,	// (0x0004e24b) scroll_pane_cp07_ParamLimits

0xd51d,	// (0x0004dbf5) grid_highlight_pane_cp012

0xd778,	// (0x0004de50) mup_scale_pane_ParamLimits

0xe5db,	// (0x0004ecb3) main_usb_pane_g1_ParamLimits

0xe5db,	// (0x0004ecb3) main_usb_pane_g1

0x4ab5,	// (0x0004518d) main_usb_pane_g2_ParamLimits

0x4ab5,	// (0x0004518d) main_usb_pane_g2

0x0001,

0xf526,	// (0x0004fbfe) main_usb_pane_g_ParamLimits

0xf526,	// (0x0004fbfe) main_usb_pane_g

0x4ac9,	// (0x000451a1) main_usb_pane_t1_ParamLimits

0x4ac9,	// (0x000451a1) main_usb_pane_t1

0x4adb,	// (0x000451b3) main_usb_pane_t2_ParamLimits

0x4adb,	// (0x000451b3) main_usb_pane_t2

0x4aed,	// (0x000451c5) main_usb_pane_t3_ParamLimits

0x4aed,	// (0x000451c5) main_usb_pane_t3

0x4aff,	// (0x000451d7) main_usb_pane_t4_ParamLimits

0x4aff,	// (0x000451d7) main_usb_pane_t4

0x4b11,	// (0x000451e9) main_usb_pane_t5_ParamLimits

0x4b11,	// (0x000451e9) main_usb_pane_t5

0x4b23,	// (0x000451fb) main_usb_pane_t6_ParamLimits

0x4b23,	// (0x000451fb) main_usb_pane_t6

0x0005,

0xf52b,	// (0x0004fc03) main_usb_pane_t_ParamLimits

0xe2e0,	// (0x0004e9b8) aid_text_placing

0x394e,	// (0x00044026) main_location2_pane_t1_ParamLimits

0x3964,	// (0x0004403c) main_location2_pane_t2_ParamLimits

0x397a,	// (0x00044052) main_location2_pane_t3_ParamLimits

0x3990,	// (0x00044068) main_location2_pane_t4_ParamLimits

0x3990,	// (0x00044068) main_location2_pane_t4

0xf399,	// (0x0004fa71) main_location2_pane_t_ParamLimits

0xd7b4,	// (0x0004de8c) find_pinb_pane_g2_ParamLimits

0xd7b4,	// (0x0004de8c) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0004f7f3) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0004f7f3) find_pinb_pane_g

0xd7c0,	// (0x0004de98) find_pinb_pane_t1_ParamLimits

0xd7d2,	// (0x0004deaa) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0004f7f8) find_pinb_pane_t_ParamLimits

0xd51d,	// (0x0004dbf5) main_call3_pane

0x30c4,	// (0x0004379c) cale_month_day_heading_pane_t1_ParamLimits

0x314a,	// (0x00043822) cale_month_day_heading_pane_t2_ParamLimits

0x31db,	// (0x000438b3) cale_month_day_heading_pane_t3_ParamLimits

0x326c,	// (0x00043944) cale_month_day_heading_pane_t4_ParamLimits

0x32fd,	// (0x000439d5) cale_month_day_heading_pane_t5_ParamLimits

0x338e,	// (0x00043a66) cale_month_day_heading_pane_t6_ParamLimits

0x341f,	// (0x00043af7) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0004f97a) cale_month_day_heading_pane_t_ParamLimits

0x367b,	// (0x00043d53) smil_status_volume_pane

0x3fa1,	// (0x00044679) postcard_address_pane_ParamLimits

0x3fa1,	// (0x00044679) postcard_address_pane

0x3fb3,	// (0x0004468b) postcard_message_pane_ParamLimits

0x3fb3,	// (0x0004468b) postcard_message_pane

0x498b,	// (0x00045063) call2_cli_visual_pane_t1_ParamLimits

0x498b,	// (0x00045063) call2_cli_visual_pane_t1

0x53c4,	// (0x00045a9c) postcard_message_pane_t1_ParamLimits

0x53c4,	// (0x00045a9c) postcard_message_pane_t1

0x53ad,	// (0x00045a85) postcard_address_pane_t1_ParamLimits

0x53ad,	// (0x00045a85) postcard_address_pane_t1

0x539b,	// (0x00045a73) popup_call3_audio_in_window_ParamLimits

0x539b,	// (0x00045a73) popup_call3_audio_in_window

0x522a,	// (0x00045902) bg_popup_call3_in_pane_ParamLimits

0x522a,	// (0x00045902) bg_popup_call3_in_pane

0x529c,	// (0x00045974) popup_call3_audio_in_window_g1_ParamLimits

0x529c,	// (0x00045974) popup_call3_audio_in_window_g1

0x52bc,	// (0x00045994) popup_call3_audio_in_window_g2_ParamLimits

0x52bc,	// (0x00045994) popup_call3_audio_in_window_g2

0x52dc,	// (0x000459b4) popup_call3_audio_in_window_g3_ParamLimits

0x52dc,	// (0x000459b4) popup_call3_audio_in_window_g3

0x0003,

0xf58d,	// (0x0004fc65) popup_call3_audio_in_window_g_ParamLimits

0xf58d,	// (0x0004fc65) popup_call3_audio_in_window_g

0x530d,	// (0x000459e5) popup_call3_audio_in_window_t1_ParamLimits

0x530d,	// (0x000459e5) popup_call3_audio_in_window_t1

0x534b,	// (0x00045a23) popup_call3_audio_in_window_t2_ParamLimits

0x534b,	// (0x00045a23) popup_call3_audio_in_window_t2

0x5389,	// (0x00045a61) popup_call3_audio_in_window_t3_ParamLimits

0x5389,	// (0x00045a61) popup_call3_audio_in_window_t3

0x0002,

0xf596,	// (0x0004fc6e) popup_call3_audio_in_window_t_ParamLimits

0xf596,	// (0x0004fc6e) popup_call3_audio_in_window_t

0xda10,	// (0x0004e0e8) bg_popup_call3_rect_pane

0x49a5,	// (0x0004507d) bg_popup_call3_rect_pane_g1

0xd934,	// (0x0004e00c) bg_popup_call3_rect_pane_g2

0x49ad,	// (0x00045085) bg_popup_call3_rect_pane_g3

0x49b5,	// (0x0004508d) bg_popup_call3_rect_pane_g4

0x49bd,	// (0x00045095) bg_popup_call3_rect_pane_g5

0x49c5,	// (0x0004509d) bg_popup_call3_rect_pane_g6

0x49cd,	// (0x000450a5) bg_popup_call3_rect_pane_g7

0x3cb7,	// (0x0004438f) mup_visualizer_osc_pane

0xe4fd,	// (0x0004ebd5) mup_visualizer_spec_pane

0x525a,	// (0x00045932) call3_video_qcif_pane_ParamLimits

0x525a,	// (0x00045932) call3_video_qcif_pane

0x526b,	// (0x00045943) call3_video_qcif_uncrop_pane_ParamLimits

0x526b,	// (0x00045943) call3_video_qcif_uncrop_pane

0x5277,	// (0x0004594f) call3_video_subqcif_pane_ParamLimits

0x5277,	// (0x0004594f) call3_video_subqcif_pane

0x528b,	// (0x00045963) call3_video_subqcif_uncrop_pane_ParamLimits

0x528b,	// (0x00045963) call3_video_subqcif_uncrop_pane

0x52fc,	// (0x000459d4) popup_call3_audio_in_window_g4_ParamLimits

0x52fc,	// (0x000459d4) popup_call3_audio_in_window_g4

0x51eb,	// (0x000458c3) mup_spec_half_pane

0x51f4,	// (0x000458cc) mup_spec_half_pane_cp

0x51d9,	// (0x000458b1) mup_osc_middle_pane

0x51e2,	// (0x000458ba) mup_visualizer_osc_pane_g1

0x51ba,	// (0x00045892) mup_spec_bar_pane_ParamLimits

0x51ba,	// (0x00045892) mup_spec_bar_pane

0x51a7,	// (0x0004587f) mup_spec_bar_pane_g1

0x51b1,	// (0x00045889) mup_spec_bar_pane_g2

0x0001,

0xf581,	// (0x0004fc59) mup_spec_bar_pane_g

0x1f86,	// (0x0004265e) aid_cale_week_size_cell_pane_ParamLimits

0x1fa0,	// (0x00042678) bg_cale_heading_pane_ParamLimits

0xd972,	// (0x0004e04a) bg_cale_pane_cp01_ParamLimits

0x1fb8,	// (0x00042690) cale_week_corner_pane_ParamLimits

0x1fd7,	// (0x000426af) cale_week_day_heading_pane_ParamLimits

0x1ff4,	// (0x000426cc) cale_week_scroll_pane_g1_ParamLimits

0x2007,	// (0x000426df) cale_week_scroll_pane_g2_ParamLimits

0x201f,	// (0x000426f7) cale_week_scroll_pane_g3_ParamLimits

0x2037,	// (0x0004270f) cale_week_scroll_pane_g4_ParamLimits

0x204f,	// (0x00042727) cale_week_scroll_pane_g5_ParamLimits

0x2067,	// (0x0004273f) cale_week_scroll_pane_g6_ParamLimits

0x207f,	// (0x00042757) cale_week_scroll_pane_g7_ParamLimits

0x2097,	// (0x0004276f) cale_week_scroll_pane_g8_ParamLimits

0x20b3,	// (0x0004278b) cale_week_scroll_pane_g9_ParamLimits

0x20cb,	// (0x000427a3) cale_week_scroll_pane_g10_ParamLimits

0x20e3,	// (0x000427bb) cale_week_scroll_pane_g11_ParamLimits

0x20fb,	// (0x000427d3) cale_week_scroll_pane_g12_ParamLimits

0x2113,	// (0x000427eb) cale_week_scroll_pane_g13_ParamLimits

0x212b,	// (0x00042803) cale_week_scroll_pane_g14_ParamLimits

0x2143,	// (0x0004281b) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0004f884) cale_week_scroll_pane_g_ParamLimits

0x2177,	// (0x0004284f) cale_week_time_pane_ParamLimits

0x2193,	// (0x0004286b) grid_cale_week_pane_ParamLimits

0xd98f,	// (0x0004e067) listscroll_cale_week_pane_t1

0xd9a1,	// (0x0004e079) scroll_pane_cp08_ParamLimits

0x2d1e,	// (0x000433f6) cale_month_corner_pane_ParamLimits

0xdda3,	// (0x0004e47b) cale_month_pane_t1

0x307a,	// (0x00043752) cale_month_week_pane_ParamLimits

0x379d,	// (0x00043e75) popup_call_status_window_g1_ParamLimits

0x37b1,	// (0x00043e89) popup_call_status_window_g2_ParamLimits

0x37c5,	// (0x00043e9d) popup_call_status_window_g3_ParamLimits

0xf32a,	// (0x0004fa02) popup_call_status_window_g_ParamLimits

0xe118,	// (0x0004e7f0) aid_call2_pane

0x0d98,	// (0x00041470) msg_header_pane_g1

0x3fa1,	// (0x00044679) postcard_address2_pane_ParamLimits

0x3fa1,	// (0x00044679) postcard_address2_pane

0x3fb3,	// (0x0004468b) postcard_message2_pane_ParamLimits

0x3fb3,	// (0x0004468b) postcard_message2_pane

0x5131,	// (0x00045809) message2_row_pane_ParamLimits

0x5131,	// (0x00045809) message2_row_pane

0x514b,	// (0x00045823) address2_row_pane_ParamLimits

0x514b,	// (0x00045823) address2_row_pane

0x515e,	// (0x00045836) postcard_message2_row_pane_g1

0x5166,	// (0x0004583e) postcard_message2_row_pane_t1

0x515e,	// (0x00045836) address2_row_pane_g1

0x5166,	// (0x0004583e) address2_row_pane_t1

0x2590,	// (0x00042c68) aid_size_cell_vorec

0xd51d,	// (0x0004dbf5) main_rss_pane

0x5174,	// (0x0004584c) rss_list_single_pane_ParamLimits

0x5174,	// (0x0004584c) rss_list_single_pane

0x518b,	// (0x00045863) rss_list_single_pane_t1

0x5199,	// (0x00045871) rss_list_single_pane_t2

0x0001,

0xf57c,	// (0x0004fc54) rss_list_single_pane_t

0xd51d,	// (0x0004dbf5) main_camera2_pane

0xd51d,	// (0x0004dbf5) main_video2_pane

0x541d,	// (0x00045af5) cams_zoom_pane_cp2_ParamLimits

0x541d,	// (0x00045af5) cams_zoom_pane_cp2

0x5434,	// (0x00045b0c) image2_vga_pane_ParamLimits

0x5434,	// (0x00045b0c) image2_vga_pane

0x546a,	// (0x00045b42) main_camera2_pane_g1_ParamLimits

0x546a,	// (0x00045b42) main_camera2_pane_g1

0x548a,	// (0x00045b62) main_camera2_pane_g2_ParamLimits

0x548a,	// (0x00045b62) main_camera2_pane_g2

0x54a1,	// (0x00045b79) main_camera2_pane_g3_ParamLimits

0x54a1,	// (0x00045b79) main_camera2_pane_g3

0x54b8,	// (0x00045b90) main_camera2_pane_g4_ParamLimits

0x54b8,	// (0x00045b90) main_camera2_pane_g4

0x54cf,	// (0x00045ba7) main_camera2_pane_g5_ParamLimits

0x54cf,	// (0x00045ba7) main_camera2_pane_g5

0x54e6,	// (0x00045bbe) main_camera2_pane_g6_ParamLimits

0x54e6,	// (0x00045bbe) main_camera2_pane_g6

0x54fd,	// (0x00045bd5) main_camera2_pane_g7_ParamLimits

0x54fd,	// (0x00045bd5) main_camera2_pane_g7

0x5514,	// (0x00045bec) main_camera2_pane_g8_ParamLimits

0x5514,	// (0x00045bec) main_camera2_pane_g8

0x0008,

0xf59d,	// (0x0004fc75) main_camera2_pane_g_ParamLimits

0xf59d,	// (0x0004fc75) main_camera2_pane_g

0x5542,	// (0x00045c1a) main_camera2_pane_t1_ParamLimits

0x5542,	// (0x00045c1a) main_camera2_pane_t1

0x5571,	// (0x00045c49) main_camera2_pane_t2_ParamLimits

0x5571,	// (0x00045c49) main_camera2_pane_t2

0x558e,	// (0x00045c66) main_camera2_pane_t3_ParamLimits

0x558e,	// (0x00045c66) main_camera2_pane_t3

0x55da,	// (0x00045cb2) main_camera2_pane_t4_ParamLimits

0x55da,	// (0x00045cb2) main_camera2_pane_t4

0x0006,

0xf5b0,	// (0x0004fc88) main_camera2_pane_t_ParamLimits

0xf5b0,	// (0x0004fc88) main_camera2_pane_t

0x564f,	// (0x00045d27) cams_zoom_pane_cp4_ParamLimits

0x564f,	// (0x00045d27) cams_zoom_pane_cp4

0x5665,	// (0x00045d3d) image2_cif_pane_ParamLimits

0x5665,	// (0x00045d3d) image2_cif_pane

0x5688,	// (0x00045d60) image2_subqcif_pane_ParamLimits

0x5688,	// (0x00045d60) image2_subqcif_pane

0x569e,	// (0x00045d76) main_video2_pane_g1_ParamLimits

0x569e,	// (0x00045d76) main_video2_pane_g1

0x56b8,	// (0x00045d90) main_video2_pane_g2_ParamLimits

0x56b8,	// (0x00045d90) main_video2_pane_g2

0x56ce,	// (0x00045da6) main_video2_pane_g3_ParamLimits

0x56ce,	// (0x00045da6) main_video2_pane_g3

0x56e4,	// (0x00045dbc) main_video2_pane_g4_ParamLimits

0x56e4,	// (0x00045dbc) main_video2_pane_g4

0x56fa,	// (0x00045dd2) main_video2_pane_g5_ParamLimits

0x56fa,	// (0x00045dd2) main_video2_pane_g5

0x5710,	// (0x00045de8) main_video2_pane_g6_ParamLimits

0x5710,	// (0x00045de8) main_video2_pane_g6

0x0005,

0xf5bf,	// (0x0004fc97) main_video2_pane_g_ParamLimits

0xf5bf,	// (0x0004fc97) main_video2_pane_g

0x572a,	// (0x00045e02) main_video2_pane_t1_ParamLimits

0x572a,	// (0x00045e02) main_video2_pane_t1

0x574e,	// (0x00045e26) main_video2_pane_t2_ParamLimits

0x574e,	// (0x00045e26) main_video2_pane_t2

0x5798,	// (0x00045e70) main_video2_pane_t3_ParamLimits

0x5798,	// (0x00045e70) main_video2_pane_t3

0x0002,

0xf5cc,	// (0x0004fca4) main_video2_pane_t_ParamLimits

0xf5cc,	// (0x0004fca4) main_video2_pane_t

0x4cbc,	// (0x00045394) call_muted_g2

0x0001,

0xf56e,	// (0x0004fc46) call_muted_g

0xd51d,	// (0x0004dbf5) main_mup2_pane

0x57da,	// (0x00045eb2) main_mup2_pane_g1_ParamLimits

0x57da,	// (0x00045eb2) main_mup2_pane_g1

0x57e6,	// (0x00045ebe) main_mup2_pane_g2_ParamLimits

0x57e6,	// (0x00045ebe) main_mup2_pane_g2

0xad09,	// (0x0004b3e1) main_mup_pane_g13_cp1

0xad11,	// (0x0004b3e9) mup_volume_pane_cp1

0x5802,	// (0x00045eda) main_mup2_pane_g4_ParamLimits

0x5802,	// (0x00045eda) main_mup2_pane_g4

0x5812,	// (0x00045eea) main_mup2_pane_g5_ParamLimits

0x5812,	// (0x00045eea) main_mup2_pane_g5

0x5822,	// (0x00045efa) main_mup2_pane_g6_ParamLimits

0x5822,	// (0x00045efa) main_mup2_pane_g6

0x5832,	// (0x00045f0a) main_mup2_pane_g7_ParamLimits

0x5832,	// (0x00045f0a) main_mup2_pane_g7

0x0006,

0xf5d3,	// (0x0004fcab) main_mup2_pane_g_ParamLimits

0xf5d3,	// (0x0004fcab) main_mup2_pane_g

0x584a,	// (0x00045f22) main_mup2_pane_t1_ParamLimits

0x584a,	// (0x00045f22) main_mup2_pane_t1

0x5860,	// (0x00045f38) main_mup2_pane_t2_ParamLimits

0x5860,	// (0x00045f38) main_mup2_pane_t2

0x5876,	// (0x00045f4e) main_mup2_pane_t3_ParamLimits

0x5876,	// (0x00045f4e) main_mup2_pane_t3

0x588c,	// (0x00045f64) main_mup2_pane_t4_ParamLimits

0x588c,	// (0x00045f64) main_mup2_pane_t4

0x58a4,	// (0x00045f7c) main_mup2_pane_t5_ParamLimits

0x58a4,	// (0x00045f7c) main_mup2_pane_t5

0x58bc,	// (0x00045f94) main_mup2_pane_t6_ParamLimits

0x58bc,	// (0x00045f94) main_mup2_pane_t6

0x0005,

0xf5e2,	// (0x0004fcba) main_mup2_pane_t_ParamLimits

0xf5e2,	// (0x0004fcba) main_mup2_pane_t

0x58ec,	// (0x00045fc4) mup2_visualizer_pane_ParamLimits

0x58ec,	// (0x00045fc4) mup2_visualizer_pane

0x5917,	// (0x00045fef) mup_progress_pane_cp_ParamLimits

0x5917,	// (0x00045fef) mup_progress_pane_cp

0xacf4,	// (0x0004b3cc) mup_volume_pane_cp_ParamLimits

0xacf4,	// (0x0004b3cc) mup_volume_pane_cp

0x592b,	// (0x00046003) mup2_visualizer_pane_g1_ParamLimits

0x592b,	// (0x00046003) mup2_visualizer_pane_g1

0x5940,	// (0x00046018) mup2_visualizer_pane_g2_ParamLimits

0x5940,	// (0x00046018) mup2_visualizer_pane_g2

0x594c,	// (0x00046024) mup2_visualizer_pane_g3_ParamLimits

0x594c,	// (0x00046024) mup2_visualizer_pane_g3

0x0002,

0xf5ef,	// (0x0004fcc7) mup2_visualizer_pane_g_ParamLimits

0xf5ef,	// (0x0004fcc7) mup2_visualizer_pane_g

0xdb2d,	// (0x0004e205) aid_size_cell_fmradio

0x4e49,	// (0x00045521) aid_height_parent_landcape

0xdc00,	// (0x0004e2d8) wml_content_pane_cp

0xdc08,	// (0x0004e2e0) wml_tabs_pane

0xdc11,	// (0x0004e2e9) popup_wml_miniature_window

0xdc19,	// (0x0004e2f1) scroll_pane_cp021

0xdc2d,	// (0x0004e305) wml_content_pane_comp8

0xd51d,	// (0x0004dbf5) bg_popup_sub_pane_cp05

0x596a,	// (0x00046042) popup_wml_miniature_window_g1

0x5972,	// (0x0004604a) wml_miniature_view_pane

0x597a,	// (0x00046052) aid_size_wml_view

0x5982,	// (0x0004605a) wml_miniature_view_pane_g1

0x598b,	// (0x00046063) wml_miniature_view_pane_g2

0x5994,	// (0x0004606c) wml_miniature_view_pane_g3

0x599c,	// (0x00046074) wml_miniature_view_pane_g4

0x59a4,	// (0x0004607c) wml_miniature_view_pane_g5

0x59ac,	// (0x00046084) wml_miniature_view_pane_g6

0x59b4,	// (0x0004608c) wml_miniature_view_pane_g7

0x59bc,	// (0x00046094) wml_miniature_view_pane_g8

0x0007,

0xf5f6,	// (0x0004fcce) wml_miniature_view_pane_g

0x59c4,	// (0x0004609c) background_graphic_ParamLimits

0x59c4,	// (0x0004609c) background_graphic

0x59d0,	// (0x000460a8) wml_tabs_2_pane

0x59d9,	// (0x000460b1) wml_tabs_3_pane_ParamLimits

0x59d9,	// (0x000460b1) wml_tabs_3_pane

0x59eb,	// (0x000460c3) wml_tabs_4_pane_ParamLimits

0x59eb,	// (0x000460c3) wml_tabs_4_pane

0x5a01,	// (0x000460d9) wml_tabs_5_pane_ParamLimits

0x5a01,	// (0x000460d9) wml_tabs_5_pane

0x5a1b,	// (0x000460f3) wml_tabs_pane_g2_ParamLimits

0x5a1b,	// (0x000460f3) wml_tabs_pane_g2

0x5a2f,	// (0x00046107) wml_tabs_pane_g3_ParamLimits

0x5a2f,	// (0x00046107) wml_tabs_pane_g3

0x5a43,	// (0x0004611b) wml_tabs_2_active_pane_ParamLimits

0x5a43,	// (0x0004611b) wml_tabs_2_active_pane

0x5a53,	// (0x0004612b) wml_tabs_2_passive_pane_ParamLimits

0x5a53,	// (0x0004612b) wml_tabs_2_passive_pane

0x5a63,	// (0x0004613b) wml_tabs_3_active_pane_cp_ParamLimits

0x5a63,	// (0x0004613b) wml_tabs_3_active_pane_cp

0x5a74,	// (0x0004614c) wml_tabs_3_passive_pane_ParamLimits

0x5a74,	// (0x0004614c) wml_tabs_3_passive_pane

0x5a85,	// (0x0004615d) wml_tabs_3_passive_pane_cp_ParamLimits

0x5a85,	// (0x0004615d) wml_tabs_3_passive_pane_cp

0x5a96,	// (0x0004616e) tabs_4_active_pane

0x5a9e,	// (0x00046176) tabs_4_passive_pane

0x5aa6,	// (0x0004617e) tabs_4_passive_pane_cp

0x5aae,	// (0x00046186) tabs_4_passive_pane_cp2

0x4a2d,	// (0x00045105) aid_height_text

0x3c8d,	// (0x00044365) mup_volume_cont_pane_ParamLimits

0x3c8d,	// (0x00044365) mup_volume_cont_pane

0x1bec,	// (0x000422c4) aid_size_cell_pinb

0x1bf6,	// (0x000422ce) aid_size_list_pinb

0x5903,	// (0x00045fdb) mup2_volume_cont_pane_ParamLimits

0x5903,	// (0x00045fdb) mup2_volume_cont_pane

0xace0,	// (0x0004b3b8) mup2_volume_cont_pane_g1_ParamLimits

0xace0,	// (0x0004b3b8) mup2_volume_cont_pane_g1

0x1908,	// (0x00041fe0) aid_size_cell_touch_ParamLimits

0x1908,	// (0x00041fe0) aid_size_cell_touch

0x1af4,	// (0x000421cc) touch_pane_ParamLimits

0x1af4,	// (0x000421cc) touch_pane

0xcff9,	// (0x0004d6d1) main_rss2_pane

0x5abf,	// (0x00046197) listscroll_rss2_pane

0x5ac8,	// (0x000461a0) rss2_navigation_pane

0x5ad0,	// (0x000461a8) list_rss2_pane

0xe25d,	// (0x0004e935) scroll_pane_cp22

0x5ad8,	// (0x000461b0) rss2_navigation_pane_g1

0x5ae1,	// (0x000461b9) rss2_navigation_pane_g2

0x5ae9,	// (0x000461c1) rss2_navigation_pane_g3

0x0002,

0xf607,	// (0x0004fcdf) rss2_navigation_pane_g

0x5af1,	// (0x000461c9) rss2_navigation_pane_t1

0x5aff,	// (0x000461d7) rss2_list_single_pane_ParamLimits

0x5aff,	// (0x000461d7) rss2_list_single_pane

0x5b13,	// (0x000461eb) rss2_list_single_pane_t2

0x5b21,	// (0x000461f9) rss2_list_single_pane_t3_ParamLimits

0x5b21,	// (0x000461f9) rss2_list_single_pane_t3

0x5b3e,	// (0x00046216) rss2_list_single_pane_t4

0x3665,	// (0x00043d3d) smil_status_pane_g1

0xefab,	// (0x0004f683) main_image2_pane_ParamLimits

0xefab,	// (0x0004f683) main_image2_pane

0x552b,	// (0x00045c03) main_camera2_pane_g9_ParamLimits

0x552b,	// (0x00045c03) main_camera2_pane_g9

0x561d,	// (0x00045cf5) main_camera2_pane_t5_ParamLimits

0x561d,	// (0x00045cf5) main_camera2_pane_t5

0xacb5,	// (0x0004b38d) main_camera2_pane_t6_ParamLimits

0xacb5,	// (0x0004b38d) main_camera2_pane_t6

0x5b4c,	// (0x00046224) main_image2_pane_g1_ParamLimits

0x5b4c,	// (0x00046224) main_image2_pane_g1

0x41c8,	// (0x000448a0) smil2_video_pane_ParamLimits

0x41c8,	// (0x000448a0) smil2_video_pane

0xa8bb,	// (0x0004af93) aid_zoom_text_primary_cp

0xa8e4,	// (0x0004afbc) popup_preview_fixed_window

0xdb5a,	// (0x0004e232) im_reading_pane_g1

0x5411,	// (0x00045ae9) cams2_bc_adjust_pane_cp_ParamLimits

0x5411,	// (0x00045ae9) cams2_bc_adjust_pane_cp

0x5643,	// (0x00045d1b) cams2_bc_adjust_pane_ParamLimits

0x5643,	// (0x00045d1b) cams2_bc_adjust_pane

0xad19,	// (0x0004b3f1) cams2_bc_adjust_pane_g1

0xad21,	// (0x0004b3f9) cams2_slider_pane

0xad2a,	// (0x0004b402) cams2_slider_pane_g1

0xad33,	// (0x0004b40b) cams2_slider_pane_g2

0x0006,

0xf60e,	// (0x0004fce6) cams2_slider_pane_g

0x1cd6,	// (0x000423ae) calc_display_pane_ParamLimits

0x1cf2,	// (0x000423ca) calc_paper_pane_ParamLimits

0x1d13,	// (0x000423eb) grid_calc_pane_ParamLimits

0xab9c,	// (0x0004b274) popup_clock_digital_window_t1_ParamLimits

0xe6c1,	// (0x0004ed99) main_image_pane_t1

0x1cb8,	// (0x00042390) aid_size_cell_calc_ParamLimits

0x1cb8,	// (0x00042390) aid_size_cell_calc

0x4ea5,	// (0x0004557d) popup_blid_sat_info2_window_ParamLimits

0x4ea5,	// (0x0004557d) popup_blid_sat_info2_window

0x5b68,	// (0x00046240) aid_size_cell_blid

0x5b70,	// (0x00046248) bg_popup_window_pane_cp07

0x5b93,	// (0x0004626b) grid_popup_blid_pane

0x5b9b,	// (0x00046273) heading_pane_cp05_ParamLimits

0x5b9b,	// (0x00046273) heading_pane_cp05

0x5c63,	// (0x0004633b) cell_popup_blid_pane_ParamLimits

0x5c63,	// (0x0004633b) cell_popup_blid_pane

0x5c83,	// (0x0004635b) cell_popup_blid_pane_g1

0x5c8b,	// (0x00046363) cell_popup_blid_pane_t1

0x58d6,	// (0x00045fae) mup2_indicator_pane_ParamLimits

0x58d6,	// (0x00045fae) mup2_indicator_pane

0xda10,	// (0x0004e0e8) mup2_visualizer_osc_pane

0x5958,	// (0x00046030) mup2_visualizer_spec_pane_ParamLimits

0x5958,	// (0x00046030) mup2_visualizer_spec_pane

0x5c99,	// (0x00046371) mup2_spec_half_pane

0x5ca2,	// (0x0004637a) mup2_spec_half_pane_cp

0x5caa,	// (0x00046382) mup2_spec_bar_pane_ParamLimits

0x5caa,	// (0x00046382) mup2_spec_bar_pane

0x51a7,	// (0x0004587f) mup2_spec_bar_pane_g1

0x51b1,	// (0x00045889) mup2_spec_bar_pane_g2

0x0001,

0xf581,	// (0x0004fc59) mup2_spec_bar_pane_g

0x5cc9,	// (0x000463a1) mup2_osc_middle_pane

0x51e2,	// (0x000458ba) mup2_visualizer_osc_pane_g1

0xd023,	// (0x0004d6fb) popup_number_entry_window_t1_ParamLimits

0xd036,	// (0x0004d70e) popup_number_entry_window_t2_ParamLimits

0xd048,	// (0x0004d720) popup_number_entry_window_t3_ParamLimits

0x1b3c,	// (0x00042214) popup_number_entry_window_t5_ParamLimits

0x1b3c,	// (0x00042214) popup_number_entry_window_t5

0xf0c6,	// (0x0004f79e) popup_number_entry_window_t_ParamLimits

0xd05a,	// (0x0004d732) text_title_cp2_ParamLimits

0xac11,	// (0x0004b2e9) aid_hotspot_pointer_text2_pane

0xac37,	// (0x0004b30f) main_viewer_pane_g9_ParamLimits

0xac37,	// (0x0004b30f) main_viewer_pane_g9

0xdda3,	// (0x0004e47b) cale_month_pane_t1_ParamLimits

0xddc9,	// (0x0004e4a1) bg_cale_pane_ParamLimits

0xdde1,	// (0x0004e4b9) list_cale_pane_ParamLimits

0xddf2,	// (0x0004e4ca) listscroll_cale_day_pane_t1

0xde04,	// (0x0004e4dc) scroll_pane_cp09_ParamLimits

0x3cbf,	// (0x00044397) main_mup_eq_pane_t1_ParamLimits

0x3cbf,	// (0x00044397) main_mup_eq_pane_t1

0x3cd7,	// (0x000443af) main_mup_eq_pane_t2_ParamLimits

0x3cd7,	// (0x000443af) main_mup_eq_pane_t2

0x3ced,	// (0x000443c5) main_mup_eq_pane_t3_ParamLimits

0x3ced,	// (0x000443c5) main_mup_eq_pane_t3

0x3d03,	// (0x000443db) main_mup_eq_pane_t4_ParamLimits

0x3d03,	// (0x000443db) main_mup_eq_pane_t4

0x3d19,	// (0x000443f1) main_mup_eq_pane_t5_ParamLimits

0x3d19,	// (0x000443f1) main_mup_eq_pane_t5

0x3d2f,	// (0x00044407) main_mup_eq_pane_t6_ParamLimits

0x3d2f,	// (0x00044407) main_mup_eq_pane_t6

0x3d41,	// (0x00044419) main_mup_eq_pane_t7_ParamLimits

0x3d41,	// (0x00044419) main_mup_eq_pane_t7

0x3d53,	// (0x0004442b) main_mup_eq_pane_t8_ParamLimits

0x3d53,	// (0x0004442b) main_mup_eq_pane_t8

0x3d65,	// (0x0004443d) main_mup_eq_pane_t9_ParamLimits

0x3d65,	// (0x0004443d) main_mup_eq_pane_t9

0x3d7b,	// (0x00044453) main_mup_eq_pane_t10_ParamLimits

0x3d7b,	// (0x00044453) main_mup_eq_pane_t10

0x0009,

0xf3f9,	// (0x0004fad1) main_mup_eq_pane_t_ParamLimits

0xf3f9,	// (0x0004fad1) main_mup_eq_pane_t

0x3e0e,	// (0x000444e6) mup_equalizer_pane_cp5_ParamLimits

0x3e20,	// (0x000444f8) mup_equalizer_pane_cp6_ParamLimits

0x3e32,	// (0x0004450a) mup_equalizer_pane_cp7_ParamLimits

0xcff9,	// (0x0004d6d1) main_gallery_pane

0x51fc,	// (0x000458d4) smil2_volume_pane

0x5204,	// (0x000458dc) smil_status_volume_pane_g1_ParamLimits

0x5217,	// (0x000458ef) smil_status_volume_pane_g2_ParamLimits

0xac93,	// (0x0004b36b) smil_status_volume_pane_g3_ParamLimits

0xf586,	// (0x0004fc5e) smil_status_volume_pane_g_ParamLimits

0x5b70,	// (0x00046248) bg_popup_window_pane_cp07_ParamLimits

0x5b7e,	// (0x00046256) blid_firmament_pane

0x5cd2,	// (0x000463aa) aid_size_cell_gallery_ParamLimits

0x5cd2,	// (0x000463aa) aid_size_cell_gallery

0x5ce8,	// (0x000463c0) grid_gallery_pane_ParamLimits

0x5ce8,	// (0x000463c0) grid_gallery_pane

0x5cfc,	// (0x000463d4) cell_gallery_pane_ParamLimits

0x5cfc,	// (0x000463d4) cell_gallery_pane

0x5d43,	// (0x0004641b) bg_cell_gallery_focus_pane_ParamLimits

0x5d43,	// (0x0004641b) bg_cell_gallery_focus_pane

0x5d55,	// (0x0004642d) cell_gallery_pane_g1_ParamLimits

0x5d55,	// (0x0004642d) cell_gallery_pane_g1

0x5d61,	// (0x00046439) cell_gallery_pane_g2_ParamLimits

0x5d61,	// (0x00046439) cell_gallery_pane_g2

0x5d6e,	// (0x00046446) cell_gallery_pane_g3_ParamLimits

0x5d6e,	// (0x00046446) cell_gallery_pane_g3

0x5d7b,	// (0x00046453) cell_gallery_pane_g4_ParamLimits

0x5d7b,	// (0x00046453) cell_gallery_pane_g4

0x0003,

0xf634,	// (0x0004fd0c) cell_gallery_pane_g_ParamLimits

0xf634,	// (0x0004fd0c) cell_gallery_pane_g

0x5d87,	// (0x0004645f) bg_cell_gallery_focus_pane_g1

0x5d8f,	// (0x00046467) bg_cell_gallery_focus_pane_g2

0x5d97,	// (0x0004646f) bg_cell_gallery_focus_pane_g3

0x5d9f,	// (0x00046477) bg_cell_gallery_focus_pane_g4

0x5da7,	// (0x0004647f) bg_cell_gallery_focus_pane_g5

0x5daf,	// (0x00046487) bg_cell_gallery_focus_pane_g6

0x5db7,	// (0x0004648f) bg_cell_gallery_focus_pane_g7

0x5dbf,	// (0x00046497) bg_cell_gallery_focus_pane_g8

0x0007,

0xf63d,	// (0x0004fd15) bg_cell_gallery_focus_pane_g

0x5dc7,	// (0x0004649f) aid_firma_cardinal

0x5ddb,	// (0x000464b3) blid_firmament_pane_t1

0x5df2,	// (0x000464ca) blid_firmament_pane_t2

0x5e09,	// (0x000464e1) blid_firmament_pane_t3

0x5e20,	// (0x000464f8) blid_firmament_pane_t4

0x0003,

0xf64e,	// (0x0004fd26) blid_firmament_pane_t

0x5e37,	// (0x0004650f) blid_sat_info_pane

0x5e47,	// (0x0004651f) blid_sat_info_pane_g1

0x5e47,	// (0x0004651f) blid_sat_info_pane_g2

0x0001,

0xf657,	// (0x0004fd2f) blid_sat_info_pane_g

0x5e51,	// (0x00046529) blid_sat_info_pane_t1

0x5e5f,	// (0x00046537) smil2_volume_content_pane

0x5e68,	// (0x00046540) smil2_volume_pane_g1

0x5e70,	// (0x00046548) smil2_volume_content_pane_g1

0x5e79,	// (0x00046551) smil2_volume_content_pane_g2

0x5e82,	// (0x0004655a) smil2_volume_content_pane_g3

0x5e8b,	// (0x00046563) smil2_volume_content_pane_g4

0x5e94,	// (0x0004656c) smil2_volume_content_pane_g5

0x5e9d,	// (0x00046575) smil2_volume_content_pane_g6

0x5ea6,	// (0x0004657e) smil2_volume_content_pane_g7

0x5eaf,	// (0x00046587) smil2_volume_content_pane_g8

0x5eb8,	// (0x00046590) smil2_volume_content_pane_g9

0x5ec1,	// (0x00046599) smil2_volume_content_pane_g10

0x0009,

0xf65c,	// (0x0004fd34) smil2_volume_content_pane_g

0x2227,	// (0x000428ff) cale_week_day_heading_pane_t1_ParamLimits

0x2251,	// (0x00042929) cale_week_day_heading_pane_t2_ParamLimits

0x2280,	// (0x00042958) cale_week_day_heading_pane_t3_ParamLimits

0x22af,	// (0x00042987) cale_week_day_heading_pane_t4_ParamLimits

0x22de,	// (0x000429b6) cale_week_day_heading_pane_t5_ParamLimits

0x230d,	// (0x000429e5) cale_week_day_heading_pane_t6_ParamLimits

0x233c,	// (0x00042a14) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0004f8a5) cale_week_day_heading_pane_t_ParamLimits

0xd9be,	// (0x0004e096) bg_cale_side_pane_ParamLimits

0x2366,	// (0x00042a3e) cale_week_time_pane_t1_ParamLimits

0x23a0,	// (0x00042a78) cale_week_time_pane_t2_ParamLimits

0x23da,	// (0x00042ab2) cale_week_time_pane_t3_ParamLimits

0x2414,	// (0x00042aec) cale_week_time_pane_t4_ParamLimits

0x244e,	// (0x00042b26) cale_week_time_pane_t5_ParamLimits

0x2488,	// (0x00042b60) cale_week_time_pane_t6_ParamLimits

0x24c2,	// (0x00042b9a) cale_week_time_pane_t7_ParamLimits

0x24fc,	// (0x00042bd4) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0004f8b4) cale_week_time_pane_t_ParamLimits

0x2536,	// (0x00042c0e) cell_cale_week_pane_g2_ParamLimits

0xd9be,	// (0x0004e096) bg_cale_side_pane_cp01_ParamLimits

0x34b4,	// (0x00043b8c) cale_month_week_pane_t1_ParamLimits

0x34cd,	// (0x00043ba5) cale_month_week_pane_t2_ParamLimits

0x34e6,	// (0x00043bbe) cale_month_week_pane_t3_ParamLimits

0x34ff,	// (0x00043bd7) cale_month_week_pane_t4_ParamLimits

0x3518,	// (0x00043bf0) cale_month_week_pane_t5_ParamLimits

0x3531,	// (0x00043c09) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0004f989) cale_month_week_pane_t_ParamLimits

0xaa82,	// (0x0004b15a) cell_cale_month_pane_g1_ParamLimits

0xcff9,	// (0x0004d6d1) main_cale_event_viewer_pane

0xcff9,	// (0x0004d6d1) listscroll_cale_event_viewer_pane

0x5eca,	// (0x000465a2) list_cale_ev_pane

0x5ed2,	// (0x000465aa) scroll_pane_cp023

0x5ede,	// (0x000465b6) field_cale_ev_pane_ParamLimits

0x5ede,	// (0x000465b6) field_cale_ev_pane

0x5ef8,	// (0x000465d0) field_cale_ev_content_pane_ParamLimits

0x5ef8,	// (0x000465d0) field_cale_ev_content_pane

0x5f04,	// (0x000465dc) field_cale_ev_pane_g1_ParamLimits

0x5f04,	// (0x000465dc) field_cale_ev_pane_g1

0x5f10,	// (0x000465e8) field_cale_ev_pane_g2_ParamLimits

0x5f10,	// (0x000465e8) field_cale_ev_pane_g2

0x5f28,	// (0x00046600) field_cale_ev_pane_g3_ParamLimits

0x5f28,	// (0x00046600) field_cale_ev_pane_g3

0x0002,

0xf671,	// (0x0004fd49) field_cale_ev_pane_g_ParamLimits

0xf671,	// (0x0004fd49) field_cale_ev_pane_g

0x5f40,	// (0x00046618) field_cale_ev_pane_t1_ParamLimits

0x5f40,	// (0x00046618) field_cale_ev_pane_t1

0x5f57,	// (0x0004662f) field_cale_ev_content_pane_t1_ParamLimits

0x5f57,	// (0x0004662f) field_cale_ev_content_pane_t1

0xe5a7,	// (0x0004ec7f) bg_button_pane_cp01

0x1f76,	// (0x0004264e) listscroll_cale_week_pane_ParamLimits

0xd969,	// (0x0004e041) popup_toolbar_window_cp01

0xd98f,	// (0x0004e067) listscroll_cale_week_pane_t1_ParamLimits

0x1f76,	// (0x0004264e) listscroll_cale_day_pane_ParamLimits

0xd969,	// (0x0004e041) popup_toolbar_window_cp02

0xddf2,	// (0x0004e4ca) listscroll_cale_day_pane_t1_ParamLimits

0x1f76,	// (0x0004264e) main_cale_month_pane_ParamLimits

0xac7e,	// (0x0004b356) popup_toolbar_window_cp03_ParamLimits

0xac7e,	// (0x0004b356) popup_toolbar_window_cp03

0x40a2,	// (0x0004477a) main_image_pane_g2_ParamLimits

0x40a2,	// (0x0004477a) main_image_pane_g2

0x40b3,	// (0x0004478b) main_image_pane_g3_ParamLimits

0x40b3,	// (0x0004478b) main_image_pane_g3

0x0002,

0xf481,	// (0x0004fb59) main_image_pane_g_ParamLimits

0xf481,	// (0x0004fb59) main_image_pane_g

0xe6c1,	// (0x0004ed99) main_image_pane_t1_ParamLimits

0x40c4,	// (0x0004479c) main_image_pane_t2_ParamLimits

0x40c4,	// (0x0004479c) main_image_pane_t2

0x40d6,	// (0x000447ae) main_image_pane_t3_ParamLimits

0x40d6,	// (0x000447ae) main_image_pane_t3

0x40fe,	// (0x000447d6) main_image_pane_t4_ParamLimits

0x40fe,	// (0x000447d6) main_image_pane_t4

0x0003,

0xf488,	// (0x0004fb60) main_image_pane_t_ParamLimits

0xf488,	// (0x0004fb60) main_image_pane_t

0x411e,	// (0x000447f6) popup_image_details_window_cp01

0x4126,	// (0x000447fe) popup_toobar_trans_pane_cp01_ParamLimits

0x4126,	// (0x000447fe) popup_toobar_trans_pane_cp01

0x4f6e,	// (0x00045646) popup_image_details_window_ParamLimits

0x4f6e,	// (0x00045646) popup_image_details_window

0xac53,	// (0x0004b32b) popup_image_focus_window

0x53df,	// (0x00045ab7) camera2_autofocus_pane_ParamLimits

0x53df,	// (0x00045ab7) camera2_autofocus_pane

0xcff9,	// (0x0004d6d1) bg_popup_sub_pane_cp06

0x5f74,	// (0x0004664c) popup_image_focus_window_g1

0x5f7c,	// (0x00046654) popup_image_focus_window_g2

0x5f84,	// (0x0004665c) popup_image_focus_window_g3

0x5f8c,	// (0x00046664) popup_image_focus_window_g4

0x0003,

0xf678,	// (0x0004fd50) popup_image_focus_window_g

0x5f94,	// (0x0004666c) popup_image_focus_window_t1

0x5fa2,	// (0x0004667a) popup_image_focus_window_t2

0x5fb1,	// (0x00046689) popup_image_focus_window_t3

0x0002,

0xf681,	// (0x0004fd59) popup_image_focus_window_t

0x5fbf,	// (0x00046697) camera2_autofocus_pane_g1

0xefab,	// (0x0004f683) bg_tb_trans_pane_cp01

0x5ffd,	// (0x000466d5) popup_image_details_window_g1

0x6010,	// (0x000466e8) popup_image_details_window_g2

0x0002,

0xf693,	// (0x0004fd6b) popup_image_details_window_g

0x6039,	// (0x00046711) popup_image_details_window_t1

0x604b,	// (0x00046723) popup_image_details_window_t2

0x6064,	// (0x0004673c) popup_image_details_window_t3

0x6078,	// (0x00046750) popup_image_details_window_t4

0x6093,	// (0x0004676b) popup_image_details_window_t5

0x0004,

0xf69a,	// (0x0004fd72) popup_image_details_window_t

0xd829,	// (0x0004df01) bg_calc_paper_pane_ParamLimits

0xcff9,	// (0x0004d6d1) grid_highlight_pane_cp013

0xa8f4,	// (0x0004afcc) list_calc_pane_ParamLimits

0xa906,	// (0x0004afde) scroll_pane_cp024

0xd841,	// (0x0004df19) bg_calc_display_pane_ParamLimits

0xa90e,	// (0x0004afe6) calc_display_pane_t1_ParamLimits

0xa923,	// (0x0004affb) calc_display_pane_t2_ParamLimits

0xa938,	// (0x0004b010) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0004f825) calc_display_pane_t_ParamLimits

0x1e92,	// (0x0004256a) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0004f842) cell_calc_pane_g

0x1e9b,	// (0x00042573) cell_calc_pane_t1

0xd8a0,	// (0x0004df78) grid_highlight_pane_cp02_ParamLimits

0xd8b6,	// (0x0004df8e) toolbar_button_pane_cp01_ParamLimits

0xd8b6,	// (0x0004df8e) toolbar_button_pane_cp01

0xe706,	// (0x0004edde) temp_image_control_pane_ParamLimits

0xe706,	// (0x0004edde) temp_image_control_pane

0xefab,	// (0x0004f683) main_mp3_pane

0x60ad,	// (0x00046785) temp_image_control_pane_g1_ParamLimits

0x60ad,	// (0x00046785) temp_image_control_pane_g1

0x60bb,	// (0x00046793) temp_image_control_pane_g2_ParamLimits

0x60bb,	// (0x00046793) temp_image_control_pane_g2

0x60cd,	// (0x000467a5) temp_image_control_pane_g3_ParamLimits

0x60cd,	// (0x000467a5) temp_image_control_pane_g3

0x60dd,	// (0x000467b5) temp_image_control_pane_g4_ParamLimits

0x60dd,	// (0x000467b5) temp_image_control_pane_g4

0x0003,

0xf6a5,	// (0x0004fd7d) temp_image_control_pane_g_ParamLimits

0xf6a5,	// (0x0004fd7d) temp_image_control_pane_g

0x60ad,	// (0x00046785) main_mp3_pane_g1

0x60ee,	// (0x000467c6) main_mp3_pane_g2

0x0007,

0xf6ae,	// (0x0004fd86) main_mp3_pane_g

0x6145,	// (0x0004681d) main_mp3_pane_t1

0xda50,	// (0x0004e128) main_camera_pane_g8_ParamLimits

0xda50,	// (0x0004e128) main_camera_pane_g8

0x27df,	// (0x00042eb7) main_video_pane_g7_ParamLimits

0x27df,	// (0x00042eb7) main_video_pane_g7

0xacce,	// (0x0004b3a6) main_camera2_pane_t7_ParamLimits

0xacce,	// (0x0004b3a6) main_camera2_pane_t7

0xdbc0,	// (0x0004e298) scroll_pane_cp025_ParamLimits

0xdbc0,	// (0x0004e298) scroll_pane_cp025

0xdbd4,	// (0x0004e2ac) scroll_pane_cp026_ParamLimits

0xdbd4,	// (0x0004e2ac) scroll_pane_cp026

0xdbe3,	// (0x0004e2bb) wml_content_pane_ParamLimits

0xcff9,	// (0x0004d6d1) main_touch_calib_pane

0x6215,	// (0x000468ed) main_touch_calib_pane_g1

0x6227,	// (0x000468ff) main_touch_calib_pane_g2

0x6239,	// (0x00046911) main_touch_calib_pane_g3

0x624b,	// (0x00046923) main_touch_calib_pane_g4

0x0003,

0xf6cc,	// (0x0004fda4) main_touch_calib_pane_g

0x625d,	// (0x00046935) main_touch_calib_pane_t1

0x6275,	// (0x0004694d) main_touch_calib_pane_t2

0x0004,

0xf6d5,	// (0x0004fdad) main_touch_calib_pane_t

0xe319,	// (0x0004e9f1) mup_progress_pane_cp02

0xe34e,	// (0x0004ea26) navi_pane_g1

0xe3d9,	// (0x0004eab1) navi_pane_mp_t3

0xefab,	// (0x0004f683) main_mp3_pane_ParamLimits

0x50da,	// (0x000457b2) navi_pane_ParamLimits

0x60ad,	// (0x00046785) main_mp3_pane_g1_ParamLimits

0x60ee,	// (0x000467c6) main_mp3_pane_g2_ParamLimits

0x60fa,	// (0x000467d2) main_mp3_pane_g3_ParamLimits

0x60fa,	// (0x000467d2) main_mp3_pane_g3

0x6106,	// (0x000467de) main_mp3_pane_g4_ParamLimits

0x6106,	// (0x000467de) main_mp3_pane_g4

0x6112,	// (0x000467ea) main_mp3_pane_g5_ParamLimits

0x6112,	// (0x000467ea) main_mp3_pane_g5

0x6120,	// (0x000467f8) main_mp3_pane_g6_ParamLimits

0x6120,	// (0x000467f8) main_mp3_pane_g6

0x612d,	// (0x00046805) main_mp3_pane_g7_ParamLimits

0x612d,	// (0x00046805) main_mp3_pane_g7

0x6139,	// (0x00046811) main_mp3_pane_g8_ParamLimits

0x6139,	// (0x00046811) main_mp3_pane_g8

0xf6ae,	// (0x0004fd86) main_mp3_pane_g_ParamLimits

0x6153,	// (0x0004682b) main_mp3_pane_t2

0x6161,	// (0x00046839) main_mp3_pane_t3

0x616f,	// (0x00046847) main_mp3_pane_t4

0x617d,	// (0x00046855) main_mp3_pane_t5

0x0005,

0xf6bf,	// (0x0004fd97) main_mp3_pane_t

0x6199,	// (0x00046871) mup_progress_pane_cp01

0xa8bb,	// (0x0004af93) aid_zoom_text_secondary2

0x5eca,	// (0x000465a2) list_cale_ev2_pane

0x5ed2,	// (0x000465aa) scroll_pane_cp023_ParamLimits

0x62c3,	// (0x0004699b) field_cale_ev2_pane_ParamLimits

0x62c3,	// (0x0004699b) field_cale_ev2_pane

0xad4d,	// (0x0004b425) field_cale_ev2_pane_g1_ParamLimits

0xad4d,	// (0x0004b425) field_cale_ev2_pane_g1

0xad59,	// (0x0004b431) field_cale_ev2_pane_g2_ParamLimits

0xad59,	// (0x0004b431) field_cale_ev2_pane_g2

0xad71,	// (0x0004b449) field_cale_ev2_pane_g3_ParamLimits

0xad71,	// (0x0004b449) field_cale_ev2_pane_g3

0x0003,

0xf6e0,	// (0x0004fdb8) field_cale_ev2_pane_g_ParamLimits

0xf6e0,	// (0x0004fdb8) field_cale_ev2_pane_g

0xad95,	// (0x0004b46d) field_cale_ev2_pane_t1_ParamLimits

0xad95,	// (0x0004b46d) field_cale_ev2_pane_t1

0xadac,	// (0x0004b484) field_cale_ev2_pane_t2_ParamLimits

0xadac,	// (0x0004b484) field_cale_ev2_pane_t2

0x0001,

0xf6e9,	// (0x0004fdc1) field_cale_ev2_pane_t_ParamLimits

0xf6e9,	// (0x0004fdc1) field_cale_ev2_pane_t

0x3f5d,	// (0x00044635) main_postcard_pane_g5_ParamLimits

0x3f5d,	// (0x00044635) main_postcard_pane_g5

0x3f71,	// (0x00044649) main_postcard_pane_g6_ParamLimits

0x3f71,	// (0x00044649) main_postcard_pane_g6

0x25c1,	// (0x00042c99) camera2_autofocus_pane_cp_ParamLimits

0x25c1,	// (0x00042c99) camera2_autofocus_pane_cp

0xefab,	// (0x0004f683) main_mup3_pane

0x6319,	// (0x000469f1) main_mup3_pane_g1_ParamLimits

0x6319,	// (0x000469f1) main_mup3_pane_g1

0x633b,	// (0x00046a13) main_mup3_pane_g2_ParamLimits

0x633b,	// (0x00046a13) main_mup3_pane_g2

0x63ae,	// (0x00046a86) main_mup3_pane_g3_ParamLimits

0x63ae,	// (0x00046a86) main_mup3_pane_g3

0x63ec,	// (0x00046ac4) main_mup3_pane_g4_ParamLimits

0x63ec,	// (0x00046ac4) main_mup3_pane_g4

0x642a,	// (0x00046b02) main_mup3_pane_g5_ParamLimits

0x642a,	// (0x00046b02) main_mup3_pane_g5

0x6468,	// (0x00046b40) main_mup3_pane_g6_ParamLimits

0x6468,	// (0x00046b40) main_mup3_pane_g6

0x6477,	// (0x00046b4f) main_mup3_pane_g7_ParamLimits

0x6477,	// (0x00046b4f) main_mup3_pane_g7

0x0007,

0xf6f9,	// (0x0004fdd1) main_mup3_pane_g_ParamLimits

0xf6f9,	// (0x0004fdd1) main_mup3_pane_g

0x64ec,	// (0x00046bc4) main_mup3_pane_t1_ParamLimits

0x64ec,	// (0x00046bc4) main_mup3_pane_t1

0x6552,	// (0x00046c2a) main_mup3_pane_t2_ParamLimits

0x6552,	// (0x00046c2a) main_mup3_pane_t2

0x6618,	// (0x00046cf0) main_mup3_pane_t4_ParamLimits

0x6618,	// (0x00046cf0) main_mup3_pane_t4

0x6666,	// (0x00046d3e) main_mup3_pane_t5_ParamLimits

0x6666,	// (0x00046d3e) main_mup3_pane_t5

0x6714,	// (0x00046dec) main_mup3_pane_t6_ParamLimits

0x6714,	// (0x00046dec) main_mup3_pane_t6

0x0005,

0xf70a,	// (0x0004fde2) main_mup3_pane_t_ParamLimits

0xf70a,	// (0x0004fde2) main_mup3_pane_t

0x67c8,	// (0x00046ea0) mup3_progress_pane_ParamLimits

0x67c8,	// (0x00046ea0) mup3_progress_pane

0x6844,	// (0x00046f1c) popup_mup3_control_window_ParamLimits

0x6844,	// (0x00046f1c) popup_mup3_control_window

0x685c,	// (0x00046f34) popup_mup3_text_window

0x687a,	// (0x00046f52) mup3_progress_pane_t1

0x6898,	// (0x00046f70) mup3_progress_pane_t2

0x68b6,	// (0x00046f8e) mup3_progress_pane_t3

0x0002,

0xf717,	// (0x0004fdef) mup3_progress_pane_t

0x68d3,	// (0x00046fab) mup_progress_pane_cp03

0xcff9,	// (0x0004d6d1) bg_tb_trans_pane_cp04

0x68e3,	// (0x00046fbb) mup3_volume_pane

0x68eb,	// (0x00046fc3) popup_mup3_control_window_g1

0x68f4,	// (0x00046fcc) mup3_volume_pane_g1

0x68fd,	// (0x00046fd5) mup3_volume_pane_g2

0x6906,	// (0x00046fde) mup3_volume_pane_g3

0x0002,

0xf71e,	// (0x0004fdf6) mup3_volume_pane_g

0xcff9,	// (0x0004d6d1) bg_tb_trans_pane_cp03

0x690f,	// (0x00046fe7) popup_mup3_text_window_g1

0x6917,	// (0x00046fef) popup_mup3_text_window_t1

0xd889,	// (0x0004df61) list_calc_item_pane_g1_ParamLimits

0x5ab6,	// (0x0004618e) mup_volume_pane_cp_g1

0x628d,	// (0x00046965) main_touch_calib_pane_t3

0x629f,	// (0x00046977) main_touch_calib_pane_t4

0x62b1,	// (0x00046989) main_touch_calib_pane_t5

0xa89b,	// (0x0004af73) aid_cell_size_toolbar2

0xa8a3,	// (0x0004af7b) aid_popup3_width_pane

0xa8ab,	// (0x0004af83) aid_zoom_text_msg_primary

0xda42,	// (0x0004e11a) vorec_t7

0xd84d,	// (0x0004df25) bg_calc_paper_pane_g1_ParamLimits

0xd859,	// (0x0004df31) bg_calc_paper_pane_g2_ParamLimits

0xd865,	// (0x0004df3d) bg_calc_paper_pane_g3_ParamLimits

0xd871,	// (0x0004df49) bg_calc_paper_pane_g4_ParamLimits

0xd87d,	// (0x0004df55) bg_calc_paper_pane_g5_ParamLimits

0x1e2c,	// (0x00042504) bg_calc_paper_pane_g6_ParamLimits

0x1e3b,	// (0x00042513) bg_calc_paper_pane_g7_ParamLimits

0x1e4a,	// (0x00042522) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0004f82c) bg_calc_paper_pane_g_ParamLimits

0x1e59,	// (0x00042531) calc_bg_paper_pane_g9_ParamLimits

0x26f5,	// (0x00042dcd) image_qvga_pane_ParamLimits

0x26f5,	// (0x00042dcd) image_qvga_pane

0xd778,	// (0x0004de50) bg_popup_sub_pane_cp04_ParamLimits

0xe63d,	// (0x0004ed15) popup_mup_playback_window_g1_ParamLimits

0xe649,	// (0x0004ed21) popup_mup_playback_window_t1_ParamLimits

0xe65e,	// (0x0004ed36) popup_mup_playback_window_t2_ParamLimits

0x01f6,	// (0x000408ce) popup_mup_playback_window_t_ParamLimits

0x57f6,	// (0x00045ece) main_mup2_pane_g3_ParamLimits

0x57f6,	// (0x00045ece) main_mup2_pane_g3

0x29c3,	// (0x0004309b) popup_toolbar_window_cp04

0xea24,	// (0x0004f0fc) popup_call2_audio_second_window_g3_ParamLimits

0xea24,	// (0x0004f0fc) popup_call2_audio_second_window_g3

0xee2e,	// (0x0004f506) popup_call2_audio_first_window_g4_ParamLimits

0xee2e,	// (0x0004f506) popup_call2_audio_first_window_g4

0x4815,	// (0x00044eed) popup_call2_audio_in_window_g4_ParamLimits

0x4815,	// (0x00044eed) popup_call2_audio_in_window_g4

0x4084,	// (0x0004475c) aid_area_sk_bg_cut_ParamLimits

0x4084,	// (0x0004475c) aid_area_sk_bg_cut

0xe673,	// (0x0004ed4b) aid_area_sk_bg_cut_2_ParamLimits

0xe673,	// (0x0004ed4b) aid_area_sk_bg_cut_2

0x5d33,	// (0x0004640b) aid_placing_details_win

0x5d3b,	// (0x00046413) aid_placing_details_win_2

0x5fbf,	// (0x00046697) camera2_autofocus_pane_g1_ParamLimits

0x1a95,	// (0x0004216d) popup_fixed_preview_cale_window_ParamLimits

0x1a95,	// (0x0004216d) popup_fixed_preview_cale_window

0xe44f,	// (0x0004eb27) navi_slider_pane_g3

0xe458,	// (0x0004eb30) navi_slider_pane_g4

0xe461,	// (0x0004eb39) navi_slider_pane_g5

0xe44f,	// (0x0004eb27) navi_slider_pane_g6

0xabc2,	// (0x0004b29a) navi_slider_pane_g7

0xe574,	// (0x0004ec4c) mup_scale_pane_g3

0xe57d,	// (0x0004ec55) mup_scale_pane_g4

0xe586,	// (0x0004ec5e) mup_scale_pane_g5

0x3e46,	// (0x0004451e) mup_scale_pane_g6

0x3e4f,	// (0x00044527) mup_scale_pane_g7

0xe44f,	// (0x0004eb27) cams2_slider_pane_g3

0x5b60,	// (0x00046238) cams2_slider_pane_g4

0xad3c,	// (0x0004b414) cams2_slider_pane_g5

0xe44f,	// (0x0004eb27) cams2_slider_pane_g6

0xad44,	// (0x0004b41c) cams2_slider_pane_g7

0x5e47,	// (0x0004651f) camera2_autofocus_pane_cp_g1

0x4e59,	// (0x00045531) bg_popup_preview_window_pane_cp02_ParamLimits

0x4e59,	// (0x00045531) bg_popup_preview_window_pane_cp02

0x6925,	// (0x00046ffd) list_fp_cale_pane_ParamLimits

0x6925,	// (0x00046ffd) list_fp_cale_pane

0x6931,	// (0x00047009) popup_fixed_preview_cale_window_t1_ParamLimits

0x6931,	// (0x00047009) popup_fixed_preview_cale_window_t1

0x6943,	// (0x0004701b) popup_fixed_preview_cale_window_t2_ParamLimits

0x6943,	// (0x0004701b) popup_fixed_preview_cale_window_t2

0x6958,	// (0x00047030) popup_fixed_preview_cale_window_t3_ParamLimits

0x6958,	// (0x00047030) popup_fixed_preview_cale_window_t3

0x0002,

0xf725,	// (0x0004fdfd) popup_fixed_preview_cale_window_t_ParamLimits

0xf725,	// (0x0004fdfd) popup_fixed_preview_cale_window_t

0x6979,	// (0x00047051) list_single_fp_cale_pane_ParamLimits

0x6979,	// (0x00047051) list_single_fp_cale_pane

0x698d,	// (0x00047065) list_single_fp_cale_pane_g1_ParamLimits

0x698d,	// (0x00047065) list_single_fp_cale_pane_g1

0x6999,	// (0x00047071) list_single_fp_cale_pane_g2_ParamLimits

0x6999,	// (0x00047071) list_single_fp_cale_pane_g2

0x0002,

0xf72c,	// (0x0004fe04) list_single_fp_cale_pane_g_ParamLimits

0xf72c,	// (0x0004fe04) list_single_fp_cale_pane_g

0x69b2,	// (0x0004708a) list_single_fp_cale_pane_t1_ParamLimits

0x69b2,	// (0x0004708a) list_single_fp_cale_pane_t1

0x69c4,	// (0x0004709c) list_single_fp_cale_pane_t2_ParamLimits

0x69c4,	// (0x0004709c) list_single_fp_cale_pane_t2

0x0001,

0xf733,	// (0x0004fe0b) list_single_fp_cale_pane_t_ParamLimits

0xf733,	// (0x0004fe0b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcff9,	// (0x0004d6d1) main_dialer_pane

0x69f7,	// (0x000470cf) aid_cell_size_keypad

0x6a01,	// (0x000470d9) dialer_ne_pane

0x6a09,	// (0x000470e1) grid_dialer_command_1_pane

0x6a11,	// (0x000470e9) grid_dialer_command_2_pane

0x6a19,	// (0x000470f1) grid_dialer_keypad_pane

0x6a29,	// (0x00047101) bg_popup_call_pane_cp06_ParamLimits

0x6a29,	// (0x00047101) bg_popup_call_pane_cp06

0x6a35,	// (0x0004710d) dialer_ne_clear_pane_ParamLimits

0x6a35,	// (0x0004710d) dialer_ne_clear_pane

0x6a41,	// (0x00047119) dialer_ne_pane_g1

0x6a49,	// (0x00047121) dialer_ne_pane_t1_ParamLimits

0x6a49,	// (0x00047121) dialer_ne_pane_t1

0x6a5b,	// (0x00047133) dialer_ne_pane_t2_ParamLimits

0x6a5b,	// (0x00047133) dialer_ne_pane_t2

0x6a85,	// (0x0004715d) dialer_ne_pane_t3_ParamLimits

0x6a85,	// (0x0004715d) dialer_ne_pane_t3

0x0002,

0xf738,	// (0x0004fe10) dialer_ne_pane_t_ParamLimits

0xf738,	// (0x0004fe10) dialer_ne_pane_t

0x6ab5,	// (0x0004718d) dialer_ne_pane_t3_copy1_ParamLimits

0x6ab5,	// (0x0004718d) dialer_ne_pane_t3_copy1

0x6ae4,	// (0x000471bc) cell_dialer_keypad_pane_ParamLimits

0x6ae4,	// (0x000471bc) cell_dialer_keypad_pane

0x6af9,	// (0x000471d1) cell_dialer_command_1_pane_ParamLimits

0x6af9,	// (0x000471d1) cell_dialer_command_1_pane

0x6b0f,	// (0x000471e7) cell_dialer_command_2_pane_ParamLimits

0x6b0f,	// (0x000471e7) cell_dialer_command_2_pane

0x6b1e,	// (0x000471f6) bg_button_pane_cp02_ParamLimits

0x6b1e,	// (0x000471f6) bg_button_pane_cp02

0x6b2a,	// (0x00047202) cell_dialer_keypad_pane_g1_ParamLimits

0x6b2a,	// (0x00047202) cell_dialer_keypad_pane_g1

0x6b1e,	// (0x000471f6) bg_button_pane_cp03_ParamLimits

0x6b1e,	// (0x000471f6) bg_button_pane_cp03

0x6b3f,	// (0x00047217) cell_dialer_command_1_pane_g1_ParamLimits

0x6b3f,	// (0x00047217) cell_dialer_command_1_pane_g1

0x6b53,	// (0x0004722b) bg_button_pane_cp04

0x6b5b,	// (0x00047233) cell_dialer_command_2_pane_g1

0xda10,	// (0x0004e0e8) bg_button_pane_cp06

0x6b63,	// (0x0004723b) dialer_ne_clear_pane_g1

0xe35a,	// (0x0004ea32) navi_pane_g2

0x3a4b,	// (0x00044123) navi_pane_g3

0x0002,

0xf3af,	// (0x0004fa87) navi_pane_g

0xe3e7,	// (0x0004eabf) navi_pane_mv_g2

0xe40e,	// (0x0004eae6) navi_pane_mv_g5

0x3a68,	// (0x00044140) navi_pane_mv_t1

0xd841,	// (0x0004df19) main_clock2_pane

0x6bbc,	// (0x00047294) main_clock2_list_pane_ParamLimits

0x6bbc,	// (0x00047294) main_clock2_list_pane

0x6c0a,	// (0x000472e2) main_clock2_pane_t1_ParamLimits

0x6c0a,	// (0x000472e2) main_clock2_pane_t1

0x6c44,	// (0x0004731c) main_clock2_pane_t2_ParamLimits

0x6c44,	// (0x0004731c) main_clock2_pane_t2

0x0004,

0xf744,	// (0x0004fe1c) main_clock2_pane_t_ParamLimits

0xf744,	// (0x0004fe1c) main_clock2_pane_t

0x6cd8,	// (0x000473b0) popup_clock_analogue_window_cp03_ParamLimits

0x6cd8,	// (0x000473b0) popup_clock_analogue_window_cp03

0x6cfd,	// (0x000473d5) popup_clock_digital_window_cp02_ParamLimits

0x6cfd,	// (0x000473d5) popup_clock_digital_window_cp02

0x6d6e,	// (0x00047446) main_clock2_list_single_pane_ParamLimits

0x6d6e,	// (0x00047446) main_clock2_list_single_pane

0xda10,	// (0x0004e0e8) list_highlight_pane_cp05

0x6d80,	// (0x00047458) main_clock2_list_single_pane_t1

0x29c3,	// (0x0004309b) popup_toolbar_window_cp04_ParamLimits

0x5fcd,	// (0x000466a5) camera2_autofocus_pane_g2_ParamLimits

0x5fcd,	// (0x000466a5) camera2_autofocus_pane_g2

0x5fd9,	// (0x000466b1) camera2_autofocus_pane_g3_ParamLimits

0x5fd9,	// (0x000466b1) camera2_autofocus_pane_g3

0x5fe5,	// (0x000466bd) camera2_autofocus_pane_g4_ParamLimits

0x5fe5,	// (0x000466bd) camera2_autofocus_pane_g4

0x5ff1,	// (0x000466c9) camera2_autofocus_pane_g5_ParamLimits

0x5ff1,	// (0x000466c9) camera2_autofocus_pane_g5

0x0004,

0xf688,	// (0x0004fd60) camera2_autofocus_pane_g_ParamLimits

0xf688,	// (0x0004fd60) camera2_autofocus_pane_g

0x62db,	// (0x000469b3) camera2_autofocus_pane_cp_g2

0x62e3,	// (0x000469bb) camera2_autofocus_pane_cp_g3

0x62eb,	// (0x000469c3) camera2_autofocus_pane_cp_g4

0x62f3,	// (0x000469cb) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ee,	// (0x0004fdc6) camera2_autofocus_pane_cp_g

0x6a21,	// (0x000470f9) popup_dialer_spcha_window

0xcff9,	// (0x0004d6d1) bg_popup_sub_pane_cp07

0x6e26,	// (0x000474fe) list_spcha_pane

0x6e2e,	// (0x00047506) list_single_spcha_pane_ParamLimits

0x6e2e,	// (0x00047506) list_single_spcha_pane

0xcff9,	// (0x0004d6d1) list_highlight_pane_cp06

0x6e3f,	// (0x00047517) list_single_spcha_pane_t1

0x45bf,	// (0x00044c97) popup_call2_audio_out_window_g4_ParamLimits

0x45bf,	// (0x00044c97) popup_call2_audio_out_window_g4

0xcff9,	// (0x0004d6d1) main_imed2_pane

0xac5b,	// (0x0004b333) popup_imed_adjust2_window

0x4f84,	// (0x0004565c) popup_imed_trans_window_ParamLimits

0x4f84,	// (0x0004565c) popup_imed_trans_window

0x5bc7,	// (0x0004629f) popup_blid_sat_info2_window_t1

0x5bd5,	// (0x000462ad) popup_blid_sat_info2_window_t2

0x000a,

0xf61d,	// (0x0004fcf5) popup_blid_sat_info2_window_t

0x6e4d,	// (0x00047525) aid_size_cell_colour_35

0x6e6d,	// (0x00047545) aid_size_cell_colour_112

0x6e8d,	// (0x00047565) aid_size_cell_effect

0x4e65,	// (0x0004553d) bg_tb_trans_pane_cp02

0xdefb,	// (0x0004e5d3) heading_imed_pane

0x6ead,	// (0x00047585) listscroll_imed_pane

0x6eb9,	// (0x00047591) heading_imed_pane_g1

0x6ec1,	// (0x00047599) heading_imed_pane_t1

0x6ecf,	// (0x000475a7) grid_imed_colour_35_pane_ParamLimits

0x6ecf,	// (0x000475a7) grid_imed_colour_35_pane

0x6ee2,	// (0x000475ba) grid_imed_effect_pane

0x6ef5,	// (0x000475cd) list_imed_aspect_pane

0x6efd,	// (0x000475d5) scroll_pane_cp027_ParamLimits

0x6efd,	// (0x000475d5) scroll_pane_cp027

0x6f09,	// (0x000475e1) cell_imed_effect_pane_ParamLimits

0x6f09,	// (0x000475e1) cell_imed_effect_pane

0x6f2e,	// (0x00047606) cell_imed_colour_pane_ParamLimits

0x6f2e,	// (0x00047606) cell_imed_colour_pane

0x6f68,	// (0x00047640) cell_imed_colour_pane_g1_ParamLimits

0x6f68,	// (0x00047640) cell_imed_colour_pane_g1

0x6f79,	// (0x00047651) hgihlgiht_grid_pane_cp016_ParamLimits

0x6f79,	// (0x00047651) hgihlgiht_grid_pane_cp016

0x6f8a,	// (0x00047662) cell_imed_effect_pane_g1

0x6f92,	// (0x0004766a) grid_highlight_pane_cp017

0x6f9b,	// (0x00047673) list_imed_single_pane_ParamLimits

0x6f9b,	// (0x00047673) list_imed_single_pane

0xcff9,	// (0x0004d6d1) list_highlight_pane_cp07

0x6fae,	// (0x00047686) list_imed_aspect_pane_comp1_t1

0x4e65,	// (0x0004553d) bg_tb_trans_pane_cp05

0x6fce,	// (0x000476a6) popup_imed_adjust2_window_g1

0x6ff5,	// (0x000476cd) popup_imed_adjust2_window_t1

0x700d,	// (0x000476e5) slider_imed_adjust_pane

0x7021,	// (0x000476f9) slider_imed_adjust_pane_g1

0x7031,	// (0x00047709) slider_imed_adjust_pane_g2

0x7041,	// (0x00047719) slider_imed_adjust_pane_g3

0x7052,	// (0x0004772a) slider_imed_adjust_pane_g4

0x0003,

0xf761,	// (0x0004fe39) slider_imed_adjust_pane_g

0x7063,	// (0x0004773b) aid_size_cell_clipart2

0x706f,	// (0x00047747) grid_imed_clipart_pane

0x7079,	// (0x00047751) scroll_pane_cp031

0x7081,	// (0x00047759) cell_imed_clipart_pane_ParamLimits

0x7081,	// (0x00047759) cell_imed_clipart_pane

0x7099,	// (0x00047771) cell_imed_clipart_pane_g1

0xcff9,	// (0x0004d6d1) grid_highlight_pane_cp014

0x6beb,	// (0x000472c3) main_clock2_pane_g1_ParamLimits

0x6beb,	// (0x000472c3) main_clock2_pane_g1

0x6d19,	// (0x000473f1) aid_call2_pane_cp10

0x6d2b,	// (0x00047403) aid_call_pane_cp10

0xe2e9,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g1

0xe2e9,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g2

0x6d3d,	// (0x00047415) popup_clock_analogue_window_cp10_g3

0x6d3d,	// (0x00047415) popup_clock_analogue_window_cp10_g4

0xe2e9,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf74f,	// (0x0004fe27) popup_clock_analogue_window_cp10_g

0x6d4f,	// (0x00047427) popup_clock_analogue_window_cp10_t1

0x6d8e,	// (0x00047466) clock_digital_number_pane_cp10_ParamLimits

0x6d8e,	// (0x00047466) clock_digital_number_pane_cp10

0x6da6,	// (0x0004747e) clock_digital_number_pane_cp11_ParamLimits

0x6da6,	// (0x0004747e) clock_digital_number_pane_cp11

0x6dbe,	// (0x00047496) clock_digital_number_pane_cp12_ParamLimits

0x6dbe,	// (0x00047496) clock_digital_number_pane_cp12

0x6dd6,	// (0x000474ae) clock_digital_number_pane_cp13_ParamLimits

0x6dd6,	// (0x000474ae) clock_digital_number_pane_cp13

0x6dee,	// (0x000474c6) clock_digital_separator_pane_cp10_ParamLimits

0x6dee,	// (0x000474c6) clock_digital_separator_pane_cp10

0x6e06,	// (0x000474de) popup_clock_digital_window_cp02_t1_ParamLimits

0x6e06,	// (0x000474de) popup_clock_digital_window_cp02_t1

0xd770,	// (0x0004de48) clock_digital_number_pane_cp10_g1

0xd770,	// (0x0004de48) clock_digital_number_pane_cp10_g2

0x0001,

0x0516,	// (0x00040bee) clock_digital_number_pane_cp10_g

0xd770,	// (0x0004de48) clock_digital_separator_pane_cp10_g1

0xd770,	// (0x0004de48) clock_digital_separator_pane_g2_cp10

0xe416,	// (0x0004eaee) navi_pane_vded_g4

0xe41f,	// (0x0004eaf7) navi_pane_vded_g5

0xe428,	// (0x0004eb00) navi_pane_vded_t1

0xcff9,	// (0x0004d6d1) main_vded_pane

0x70a2,	// (0x0004777a) main_vded_pane_g1

0x70ac,	// (0x00047784) main_vded_pane_g2

0x70b4,	// (0x0004778c) main_vded_pane_g3

0x0002,

0xf76a,	// (0x0004fe42) main_vded_pane_g

0x70bc,	// (0x00047794) main_vded_pane_t1

0x70ca,	// (0x000477a2) main_vded_pane_t2

0x0001,

0xf771,	// (0x0004fe49) main_vded_pane_t

0x70d8,	// (0x000477b0) vded_slider_pane

0x70e0,	// (0x000477b8) vded_video_pane

0x70e8,	// (0x000477c0) vded_video_pane_g1

0x70f2,	// (0x000477ca) vded_video_pane_g2

0x5e47,	// (0x0004651f) vded_video_pane_g3

0x0002,

0xf776,	// (0x0004fe4e) vded_video_pane_g

0x70fb,	// (0x000477d3) vded_slider_pane_g1

0x5ab6,	// (0x0004618e) vded_slider_pane_g2

0x7104,	// (0x000477dc) vded_slider_pane_g3

0x710d,	// (0x000477e5) vded_slider_pane_g4

0x7116,	// (0x000477ee) vded_slider_pane_g5

0x0004,

0xf77d,	// (0x0004fe55) vded_slider_pane_g

0x682e,	// (0x00046f06) mup3_rocker_pane_ParamLimits

0x682e,	// (0x00046f06) mup3_rocker_pane

0x711f,	// (0x000477f7) mup3_control_keys_pane_g1

0x7127,	// (0x000477ff) mup3_control_keys_pane_g2

0x712f,	// (0x00047807) mup3_control_keys_pane_g3

0x7137,	// (0x0004780f) mup3_control_keys_pane_g4

0x0003,

0xf788,	// (0x0004fe60) mup3_control_keys_pane_g

0x1ac8,	// (0x000421a0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1ac8,	// (0x000421a0) popup_toolbar2_fixed_window_cp01

0x6864,	// (0x00046f3c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6864,	// (0x00046f3c) popup_toolbar2_fixed_window_cp02

0xeb96,	// (0x0004f26e) popup_call2_audio_second_window_t4_ParamLimits

0xeb96,	// (0x0004f26e) popup_call2_audio_second_window_t4

0x442c,	// (0x00044b04) popup_call2_audio_first_window_t6_ParamLimits

0x442c,	// (0x00044b04) popup_call2_audio_first_window_t6

0x46c2,	// (0x00044d9a) popup_call2_audio_out_window_t6_ParamLimits

0x46c2,	// (0x00044d9a) popup_call2_audio_out_window_t6

0xcff9,	// (0x0004d6d1) main_vitu_pane

0x7147,	// (0x0004781f) aid_size_cell_itu_ParamLimits

0x7147,	// (0x0004781f) aid_size_cell_itu

0xefab,	// (0x0004f683) bg_popup_window_pane_cp08_ParamLimits

0xefab,	// (0x0004f683) bg_popup_window_pane_cp08

0x715d,	// (0x00047835) field_vitu_entry_pane_ParamLimits

0x715d,	// (0x00047835) field_vitu_entry_pane

0x7170,	// (0x00047848) grid_vitu_function_pane_ParamLimits

0x7170,	// (0x00047848) grid_vitu_function_pane

0x7185,	// (0x0004785d) grid_vitu_itu_pane_ParamLimits

0x7185,	// (0x0004785d) grid_vitu_itu_pane

0x719b,	// (0x00047873) cell_vitu_itu_pane_ParamLimits

0x719b,	// (0x00047873) cell_vitu_itu_pane

0x71bd,	// (0x00047895) cell_vitu_function_pane_ParamLimits

0x71bd,	// (0x00047895) cell_vitu_function_pane

0xefab,	// (0x0004f683) bg_popup_sub_pane_cp08_ParamLimits

0xefab,	// (0x0004f683) bg_popup_sub_pane_cp08

0x71ee,	// (0x000478c6) field_vitu_entry_pane_t1_ParamLimits

0x71ee,	// (0x000478c6) field_vitu_entry_pane_t1

0x720a,	// (0x000478e2) field_vitu_entry_pane_t2_ParamLimits

0x720a,	// (0x000478e2) field_vitu_entry_pane_t2

0x0001,

0xf796,	// (0x0004fe6e) field_vitu_entry_pane_t_ParamLimits

0xf796,	// (0x0004fe6e) field_vitu_entry_pane_t

0x7227,	// (0x000478ff) bg_button_pane_cp05_ParamLimits

0x7227,	// (0x000478ff) bg_button_pane_cp05

0x7235,	// (0x0004790d) cell_vitu_itu_pane_g1

0x724d,	// (0x00047925) cell_vitu_itu_pane_t1_ParamLimits

0x724d,	// (0x00047925) cell_vitu_itu_pane_t1

0x725f,	// (0x00047937) cell_vitu_itu_pane_t2_ParamLimits

0x725f,	// (0x00047937) cell_vitu_itu_pane_t2

0x0002,

0xf79b,	// (0x0004fe73) cell_vitu_itu_pane_t_ParamLimits

0xf79b,	// (0x0004fe73) cell_vitu_itu_pane_t

0x7294,	// (0x0004796c) bg_button_pane_cp07

0x729e,	// (0x00047976) cell_vitu_function_pane_g1

0xa8ec,	// (0x0004afc4) main_calc_pane_g1

0x192c,	// (0x00042004) aid_visual_content_pane

0xcff9,	// (0x0004d6d1) main_vradio_pane

0x72a7,	// (0x0004797f) main_vradio_pane_g1_ParamLimits

0x72a7,	// (0x0004797f) main_vradio_pane_g1

0x72bd,	// (0x00047995) main_vradio_pane_g2_ParamLimits

0x72bd,	// (0x00047995) main_vradio_pane_g2

0x0001,

0xf7a2,	// (0x0004fe7a) main_vradio_pane_g_ParamLimits

0xf7a2,	// (0x0004fe7a) main_vradio_pane_g

0x72ca,	// (0x000479a2) main_vradio_pane_t1_ParamLimits

0x72ca,	// (0x000479a2) main_vradio_pane_t1

0x72df,	// (0x000479b7) main_vradio_pane_t2_ParamLimits

0x72df,	// (0x000479b7) main_vradio_pane_t2

0x72f4,	// (0x000479cc) main_vradio_pane_t3_ParamLimits

0x72f4,	// (0x000479cc) main_vradio_pane_t3

0x0002,

0xf7a7,	// (0x0004fe7f) main_vradio_pane_t_ParamLimits

0xf7a7,	// (0x0004fe7f) main_vradio_pane_t

0x7306,	// (0x000479de) vradio_rocker_control_pane_ParamLimits

0x7306,	// (0x000479de) vradio_rocker_control_pane

0x7318,	// (0x000479f0) vradio_station_info_pane_ParamLimits

0x7318,	// (0x000479f0) vradio_station_info_pane

0x7328,	// (0x00047a00) vradio_frequency_info_pane_ParamLimits

0x7328,	// (0x00047a00) vradio_frequency_info_pane

0x5e47,	// (0x0004651f) vradio_station_info_pane_g1

0x7337,	// (0x00047a0f) vradio_station_info_pane_t1_ParamLimits

0x7337,	// (0x00047a0f) vradio_station_info_pane_t1

0x7359,	// (0x00047a31) vradio_station_info_pane_t2_ParamLimits

0x7359,	// (0x00047a31) vradio_station_info_pane_t2

0x0001,

0xf7ae,	// (0x0004fe86) vradio_station_info_pane_t_ParamLimits

0xf7ae,	// (0x0004fe86) vradio_station_info_pane_t

0x736b,	// (0x00047a43) vradio_tuning_pane

0x7373,	// (0x00047a4b) vradio_rocker_control_pane_g1

0x737b,	// (0x00047a53) vradio_rocker_control_pane_g2

0x7383,	// (0x00047a5b) vradio_rocker_control_pane_g3

0x738b,	// (0x00047a63) vradio_rocker_control_pane_g4

0x7393,	// (0x00047a6b) vradio_rocker_control_pane_g5

0x0004,

0xf7b3,	// (0x0004fe8b) vradio_rocker_control_pane_g

0x739b,	// (0x00047a73) vradio_frequency_info_pane_g1

0x73a5,	// (0x00047a7d) vradio_frequency_info_pane_t1_ParamLimits

0x73a5,	// (0x00047a7d) vradio_frequency_info_pane_t1

0x73b9,	// (0x00047a91) vradio_tuning_pane_g1

0x73c2,	// (0x00047a9a) vradio_tuning_pane_t1

0xa8c3,	// (0x0004af9b) area_side_right_pane_ParamLimits

0xa8c3,	// (0x0004af9b) area_side_right_pane

0x4e18,	// (0x000454f0) status_small_pane_g1

0x4e20,	// (0x000454f8) status_small_pane_g2

0x4e29,	// (0x00045501) status_small_pane_g3

0x4e32,	// (0x0004550a) status_small_pane_g4

0x0003,

0xf573,	// (0x0004fc4b) status_small_pane_g

0x4e3b,	// (0x00045513) status_small_pane_t1

0xcff9,	// (0x0004d6d1) main_video3_pane

0x73d1,	// (0x00047aa9) cams_zoom_vslider_pane

0x73d9,	// (0x00047ab1) image3_wide_pane_ParamLimits

0x73d9,	// (0x00047ab1) image3_wide_pane

0x73f3,	// (0x00047acb) image3_wide_small_pane

0x73fd,	// (0x00047ad5) main_video3_pane_g1_ParamLimits

0x73fd,	// (0x00047ad5) main_video3_pane_g1

0x7419,	// (0x00047af1) main_video3_pane_g2_ParamLimits

0x7419,	// (0x00047af1) main_video3_pane_g2

0x0001,

0xf7be,	// (0x0004fe96) main_video3_pane_g_ParamLimits

0xf7be,	// (0x0004fe96) main_video3_pane_g

0x7435,	// (0x00047b0d) main_video3_pane_t1_ParamLimits

0x7435,	// (0x00047b0d) main_video3_pane_t1

0x7460,	// (0x00047b38) main_video3_pane_t2_ParamLimits

0x7460,	// (0x00047b38) main_video3_pane_t2

0x748b,	// (0x00047b63) main_video3_pane_t3_ParamLimits

0x748b,	// (0x00047b63) main_video3_pane_t3

0x0002,

0xf7c3,	// (0x0004fe9b) main_video3_pane_t_ParamLimits

0xf7c3,	// (0x0004fe9b) main_video3_pane_t

0x74b6,	// (0x00047b8e) cams_zoom_vslider_pane_g1

0x74bf,	// (0x00047b97) cams_zoom_vslider_pane_g2

0x0001,

0xf7ca,	// (0x0004fea2) cams_zoom_vslider_pane_g

0x74c7,	// (0x00047b9f) small_slider_vertical_pane

0x5e47,	// (0x0004651f) small_slider_vertical_pane_g1

0x5e47,	// (0x0004651f) small_slider_vertical_pane_g2

0x74cf,	// (0x00047ba7) small_slider_vertical_pane_g3

0x0002,

0xf7cf,	// (0x0004fea7) small_slider_vertical_pane_g

0xcff9,	// (0x0004d6d1) main_hwr_training_pane

0x74d8,	// (0x00047bb0) hwr_training_instruct_pane_ParamLimits

0x74d8,	// (0x00047bb0) hwr_training_instruct_pane

0x74f2,	// (0x00047bca) hwr_training_navi_pane_ParamLimits

0x74f2,	// (0x00047bca) hwr_training_navi_pane

0x7509,	// (0x00047be1) hwr_training_write_pane_ParamLimits

0x7509,	// (0x00047be1) hwr_training_write_pane

0xcff9,	// (0x0004d6d1) bg_frame_shadow_pane

0x7551,	// (0x00047c29) hwr_training_write_pane_g1

0x7559,	// (0x00047c31) hwr_training_write_pane_g2

0x7561,	// (0x00047c39) hwr_training_write_pane_g3

0x7569,	// (0x00047c41) hwr_training_write_pane_g4

0x7571,	// (0x00047c49) hwr_training_write_pane_g5

0x7579,	// (0x00047c51) hwr_training_write_pane_g6

0x7581,	// (0x00047c59) hwr_training_write_pane_g7

0x0006,

0xf7d6,	// (0x0004feae) hwr_training_write_pane_g

0xadc1,	// (0x0004b499) hwr_training_navi_pane_g1_ParamLimits

0xadc1,	// (0x0004b499) hwr_training_navi_pane_g1

0xadd3,	// (0x0004b4ab) hwr_training_navi_pane_g2_ParamLimits

0xadd3,	// (0x0004b4ab) hwr_training_navi_pane_g2

0xade5,	// (0x0004b4bd) hwr_training_navi_pane_g3_ParamLimits

0xade5,	// (0x0004b4bd) hwr_training_navi_pane_g3

0xadf5,	// (0x0004b4cd) hwr_training_navi_pane_g4_ParamLimits

0xadf5,	// (0x0004b4cd) hwr_training_navi_pane_g4

0x0004,

0xf7e5,	// (0x0004febd) hwr_training_navi_pane_g_ParamLimits

0xf7e5,	// (0x0004febd) hwr_training_navi_pane_g

0xae02,	// (0x0004b4da) hwr_training_navi_pane_t1

0x7596,	// (0x00047c6e) list_single_hwr_training_instruct_pane_ParamLimits

0x7596,	// (0x00047c6e) list_single_hwr_training_instruct_pane

0x75ae,	// (0x00047c86) list_single_hwr_training_instruct_pane_t1

0x5d87,	// (0x0004645f) bg_frame_shadow_pane_g1

0x75bd,	// (0x00047c95) bg_frame_shadow_pane_g2

0x75c5,	// (0x00047c9d) bg_frame_shadow_pane_g3

0x75cd,	// (0x00047ca5) bg_frame_shadow_pane_g4

0x75d5,	// (0x00047cad) bg_frame_shadow_pane_g5

0x75dd,	// (0x00047cb5) bg_frame_shadow_pane_g6

0x75e5,	// (0x00047cbd) bg_frame_shadow_pane_g7

0xd90c,	// (0x0004dfe4) bg_frame_shadow_pane_g8

0x0007,

0xf7f0,	// (0x0004fec8) bg_frame_shadow_pane_g

0xcff9,	// (0x0004d6d1) main_video_tele_dialer_pane

0x75ed,	// (0x00047cc5) aid_size_cell_video_keypad_ParamLimits

0x75ed,	// (0x00047cc5) aid_size_cell_video_keypad

0x7607,	// (0x00047cdf) grid_video_dialer_keypad_pane_ParamLimits

0x7607,	// (0x00047cdf) grid_video_dialer_keypad_pane

0x7649,	// (0x00047d21) video_down_pane_cp_ParamLimits

0x7649,	// (0x00047d21) video_down_pane_cp

0x7679,	// (0x00047d51) cell_video_dialer_keypad_pane_ParamLimits

0x7679,	// (0x00047d51) cell_video_dialer_keypad_pane

0x769b,	// (0x00047d73) bg_button_pane_cp08_ParamLimits

0x769b,	// (0x00047d73) bg_button_pane_cp08

0x76a7,	// (0x00047d7f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x76a7,	// (0x00047d7f) cell_video_dialer_keypad_pane_g1

0x6818,	// (0x00046ef0) mup3_rocker2_pane_ParamLimits

0x6818,	// (0x00046ef0) mup3_rocker2_pane

0x5e47,	// (0x0004651f) mup3_rocker2_pane_g1

0x4e73,	// (0x0004554b) main_dialer2_pane

0xcff9,	// (0x0004d6d1) main_mp4_pane

0xae20,	// (0x0004b4f8) main_mp4_pane_g1_ParamLimits

0xae20,	// (0x0004b4f8) main_mp4_pane_g1

0xae20,	// (0x0004b4f8) main_mp4_pane_g2_ParamLimits

0xae20,	// (0x0004b4f8) main_mp4_pane_g2

0x76e2,	// (0x00047dba) main_mp4_pane_g3_ParamLimits

0x76e2,	// (0x00047dba) main_mp4_pane_g3

0xae2e,	// (0x0004b506) main_mp4_pane_g4_ParamLimits

0xae2e,	// (0x0004b506) main_mp4_pane_g4

0xae5c,	// (0x0004b534) main_mp4_pane_g5_ParamLimits

0xae5c,	// (0x0004b534) main_mp4_pane_g5

0x0007,

0xf810,	// (0x0004fee8) main_mp4_pane_g_ParamLimits

0xf810,	// (0x0004fee8) main_mp4_pane_g

0xaed0,	// (0x0004b5a8) main_mp4_pane_t1_ParamLimits

0xaed0,	// (0x0004b5a8) main_mp4_pane_t1

0xaf28,	// (0x0004b600) main_mp4_pane_t2_ParamLimits

0xaf28,	// (0x0004b600) main_mp4_pane_t2

0x7712,	// (0x00047dea) main_mp4_pane_t3_ParamLimits

0x7712,	// (0x00047dea) main_mp4_pane_t3

0xaf7a,	// (0x0004b652) main_mp4_pane_t4_ParamLimits

0xaf7a,	// (0x0004b652) main_mp4_pane_t4

0x0003,

0xf821,	// (0x0004fef9) main_mp4_pane_t_ParamLimits

0xf821,	// (0x0004fef9) main_mp4_pane_t

0xafba,	// (0x0004b692) mp4_progress_pane_ParamLimits

0xafba,	// (0x0004b692) mp4_progress_pane

0xaffe,	// (0x0004b6d6) mp4_rocker_pane_ParamLimits

0xaffe,	// (0x0004b6d6) mp4_rocker_pane

0x7740,	// (0x00047e18) mp4_progress_pane_t1

0x7757,	// (0x00047e2f) mp4_progress_pane_t2

0x0001,

0xf82a,	// (0x0004ff02) mp4_progress_pane_t

0x776e,	// (0x00047e46) mup_progress_pane_cp04

0x5e47,	// (0x0004651f) mp4_rocker_pane_g1

0x777a,	// (0x00047e52) aid_cell_size_keypad2_ParamLimits

0x777a,	// (0x00047e52) aid_cell_size_keypad2

0x7794,	// (0x00047e6c) dialer2_ne_pane_ParamLimits

0x7794,	// (0x00047e6c) dialer2_ne_pane

0x77a9,	// (0x00047e81) grid_dialer2_keypad_pane_ParamLimits

0x77a9,	// (0x00047e81) grid_dialer2_keypad_pane

0x5b70,	// (0x00046248) bg_popup_call_pane_cp07_ParamLimits

0x5b70,	// (0x00046248) bg_popup_call_pane_cp07

0x77bf,	// (0x00047e97) dialer2_ne_pane_t1_ParamLimits

0x77bf,	// (0x00047e97) dialer2_ne_pane_t1

0x780e,	// (0x00047ee6) cell_dialer2_keypad_pane_ParamLimits

0x780e,	// (0x00047ee6) cell_dialer2_keypad_pane

0x7830,	// (0x00047f08) bg_button_pane_pane_cp04_ParamLimits

0x7830,	// (0x00047f08) bg_button_pane_pane_cp04

0x783c,	// (0x00047f14) cell_dialer2_keypad_pane_g1_ParamLimits

0x783c,	// (0x00047f14) cell_dialer2_keypad_pane_g1

0x28b1,	// (0x00042f89) aid_placing_vt_set_content_ParamLimits

0x28b1,	// (0x00042f89) aid_placing_vt_set_content

0x28d3,	// (0x00042fab) aid_placing_vt_set_title_ParamLimits

0x28d3,	// (0x00042fab) aid_placing_vt_set_title

0xcff9,	// (0x0004d6d1) main_image3_pane

0x78e3,	// (0x00047fbb) area_side_right_pane_cp01_ParamLimits

0x78e3,	// (0x00047fbb) area_side_right_pane_cp01

0xae20,	// (0x0004b4f8) main_image3_pane_g1_ParamLimits

0xae20,	// (0x0004b4f8) main_image3_pane_g1

0x78fa,	// (0x00047fd2) main_image3_pane_g2_ParamLimits

0x78fa,	// (0x00047fd2) main_image3_pane_g2

0x7920,	// (0x00047ff8) main_image3_pane_g3_ParamLimits

0x7920,	// (0x00047ff8) main_image3_pane_g3

0x7946,	// (0x0004801e) main_image3_pane_g4_ParamLimits

0x7946,	// (0x0004801e) main_image3_pane_g4

0x0003,

0xf839,	// (0x0004ff11) main_image3_pane_g_ParamLimits

0xf839,	// (0x0004ff11) main_image3_pane_g

0x796c,	// (0x00048044) main_image3_pane_t1_ParamLimits

0x796c,	// (0x00048044) main_image3_pane_t1

0x79c4,	// (0x0004809c) main_image3_pane_t2_ParamLimits

0x79c4,	// (0x0004809c) main_image3_pane_t2

0x7a16,	// (0x000480ee) main_image3_pane_t3_ParamLimits

0x7a16,	// (0x000480ee) main_image3_pane_t3

0x0003,

0xf842,	// (0x0004ff1a) main_image3_pane_t_ParamLimits

0xf842,	// (0x0004ff1a) main_image3_pane_t

0xefab,	// (0x0004f683) grid_sctrl_middle_pane_cp01_ParamLimits

0xefab,	// (0x0004f683) grid_sctrl_middle_pane_cp01

0x7a96,	// (0x0004816e) cell_sctrl_middle_pane_cp01_ParamLimits

0x7a96,	// (0x0004816e) cell_sctrl_middle_pane_cp01

0x7ab3,	// (0x0004818b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7ab3,	// (0x0004818b) cell_sctrl_middle_pane_cp01_g1

0xcff9,	// (0x0004d6d1) main_call4_pane

0x7ac9,	// (0x000481a1) aid_size_button_call4_ParamLimits

0x7ac9,	// (0x000481a1) aid_size_button_call4

0x7af6,	// (0x000481ce) call4_windows_pane_ParamLimits

0x7af6,	// (0x000481ce) call4_windows_pane

0x7b0c,	// (0x000481e4) grid_call4_button_pane_ParamLimits

0x7b0c,	// (0x000481e4) grid_call4_button_pane

0x7b33,	// (0x0004820b) call4_windows_conf_pane

0x7b46,	// (0x0004821e) popup_call4_audio_first_window_ParamLimits

0x7b46,	// (0x0004821e) popup_call4_audio_first_window

0x7b86,	// (0x0004825e) popup_call4_audio_second_window_ParamLimits

0x7b86,	// (0x0004825e) popup_call4_audio_second_window

0xb04e,	// (0x0004b726) popup_call4_audio_wait_window_ParamLimits

0xb04e,	// (0x0004b726) popup_call4_audio_wait_window

0x7b98,	// (0x00048270) cell_call4_button_pane_ParamLimits

0x7b98,	// (0x00048270) cell_call4_button_pane

0x7bbd,	// (0x00048295) bg_button_pane_cp09_ParamLimits

0x7bbd,	// (0x00048295) bg_button_pane_cp09

0x7bc9,	// (0x000482a1) cell_call4_button_pane_g1_ParamLimits

0x7bc9,	// (0x000482a1) cell_call4_button_pane_g1

0x7bef,	// (0x000482c7) cell_call4_button_pane_t1_ParamLimits

0x7bef,	// (0x000482c7) cell_call4_button_pane_t1

0xb094,	// (0x0004b76c) popup_call4_audio_conf_window_ParamLimits

0xb094,	// (0x0004b76c) popup_call4_audio_conf_window

0x687a,	// (0x00046f52) mup3_progress_pane_t1_ParamLimits

0x6898,	// (0x00046f70) mup3_progress_pane_t2_ParamLimits

0x68b6,	// (0x00046f8e) mup3_progress_pane_t3_ParamLimits

0xf717,	// (0x0004fdef) mup3_progress_pane_t_ParamLimits

0x68d3,	// (0x00046fab) mup_progress_pane_cp03_ParamLimits

0x713f,	// (0x00047817) mup3_control_keys_pane_g4_copy1

0xafe8,	// (0x0004b6c0) mp4_rocker2_pane_ParamLimits

0xafe8,	// (0x0004b6c0) mp4_rocker2_pane

0xb0a8,	// (0x0004b780) mp4_rocker2_pane_g1

0xb0b0,	// (0x0004b788) mp4_rocker2_pane_g2

0xb0b8,	// (0x0004b790) mp4_rocker2_pane_g3

0xb0c0,	// (0x0004b798) mp4_rocker2_pane_g4

0xb0c8,	// (0x0004b7a0) mp4_rocker2_pane_g5

0x0004,

0xf84b,	// (0x0004ff23) mp4_rocker2_pane_g

0xcff9,	// (0x0004d6d1) main_camera4_pane

0xcff9,	// (0x0004d6d1) main_video4_pane

0x761b,	// (0x00047cf3) main_video_tele_dialer_pane_t1_ParamLimits

0x761b,	// (0x00047cf3) main_video_tele_dialer_pane_t1

0x7632,	// (0x00047d0a) main_video_tele_dialer_pane_t2_ParamLimits

0x7632,	// (0x00047d0a) main_video_tele_dialer_pane_t2

0x0001,

0xf801,	// (0x0004fed9) main_video_tele_dialer_pane_t_ParamLimits

0xf801,	// (0x0004fed9) main_video_tele_dialer_pane_t

0x7c2d,	// (0x00048305) cam4_autofocus_pane_ParamLimits

0x7c2d,	// (0x00048305) cam4_autofocus_pane

0x7c41,	// (0x00048319) cam4_image_uncrop_pane_ParamLimits

0x7c41,	// (0x00048319) cam4_image_uncrop_pane

0x7c58,	// (0x00048330) cam4_indicators_pane_ParamLimits

0x7c58,	// (0x00048330) cam4_indicators_pane

0x7c7c,	// (0x00048354) main_camera4_pane_g1_ParamLimits

0x7c7c,	// (0x00048354) main_camera4_pane_g1

0x7c88,	// (0x00048360) main_camera4_pane_g2_ParamLimits

0x7c88,	// (0x00048360) main_camera4_pane_g2

0x7c88,	// (0x00048360) main_camera4_pane_g3_ParamLimits

0x7c88,	// (0x00048360) main_camera4_pane_g3

0x7c94,	// (0x0004836c) main_camera4_pane_g4_ParamLimits

0x7c94,	// (0x0004836c) main_camera4_pane_g4

0x7ca0,	// (0x00048378) main_camera4_pane_g5_ParamLimits

0x7ca0,	// (0x00048378) main_camera4_pane_g5

0x0005,

0xf856,	// (0x0004ff2e) main_camera4_pane_g_ParamLimits

0xf856,	// (0x0004ff2e) main_camera4_pane_g

0x7cbd,	// (0x00048395) main_camera4_pane_t1_ParamLimits

0x7cbd,	// (0x00048395) main_camera4_pane_t1

0x6112,	// (0x000467ea) bg_tb_trans_pane_cp06

0xb104,	// (0x0004b7dc) cam4_indicators_pane_g1

0xb114,	// (0x0004b7ec) cam4_indicators_pane_g2

0x0002,

0xf871,	// (0x0004ff49) cam4_indicators_pane_g

0xb134,	// (0x0004b80c) cam4_indicators_pane_t1

0x7d12,	// (0x000483ea) main_video4_pane_g1_ParamLimits

0x7d12,	// (0x000483ea) main_video4_pane_g1

0x7d24,	// (0x000483fc) main_video4_pane_g2_ParamLimits

0x7d24,	// (0x000483fc) main_video4_pane_g2

0x7d24,	// (0x000483fc) main_video4_pane_g3_ParamLimits

0x7d24,	// (0x000483fc) main_video4_pane_g3

0x7d33,	// (0x0004840b) main_video4_pane_g4_ParamLimits

0x7d33,	// (0x0004840b) main_video4_pane_g4

0x0004,

0xf878,	// (0x0004ff50) main_video4_pane_g_ParamLimits

0xf878,	// (0x0004ff50) main_video4_pane_g

0x7d51,	// (0x00048429) vid4_indicators_pane_ParamLimits

0x7d51,	// (0x00048429) vid4_indicators_pane

0x7d79,	// (0x00048451) video4_image_uncrop_cif_pane_ParamLimits

0x7d79,	// (0x00048451) video4_image_uncrop_cif_pane

0x7d91,	// (0x00048469) video4_image_uncrop_nhd_pane_ParamLimits

0x7d91,	// (0x00048469) video4_image_uncrop_nhd_pane

0x7da5,	// (0x0004847d) video4_image_uncrop_vga_pane_ParamLimits

0x7da5,	// (0x0004847d) video4_image_uncrop_vga_pane

0xefab,	// (0x0004f683) bg_tb_trans_pane_cp07

0xb104,	// (0x0004b7dc) vid4_indicators_pane_g1

0xb156,	// (0x0004b82e) vid4_indicators_pane_g2

0xb166,	// (0x0004b83e) vid4_indicators_pane_g3

0x0004,

0xf883,	// (0x0004ff5b) vid4_indicators_pane_g

0xb193,	// (0x0004b86b) vid4_indicators_pane_t1

0x7dbd,	// (0x00048495) cam4_autofocus_pane_g1

0x7dc5,	// (0x0004849d) cam4_autofocus_pane_g2

0x7dcd,	// (0x000484a5) cam4_autofocus_pane_g3

0x0002,

0xf88e,	// (0x0004ff66) cam4_autofocus_pane_g

0x7dd5,	// (0x000484ad) cam4_autofocus_pane_g3_copy1

0x765d,	// (0x00047d35) video_down_pane_cp_t1

0x766b,	// (0x00047d43) video_down_pane_cp_t2

0x0001,

0xf806,	// (0x0004fede) video_down_pane_cp_t

0xefab,	// (0x0004f683) popup_vitu2_window_ParamLimits

0xefab,	// (0x0004f683) popup_vitu2_window

0x7ddd,	// (0x000484b5) aid_size_cell2_itu2_ParamLimits

0x7ddd,	// (0x000484b5) aid_size_cell2_itu2

0x7e03,	// (0x000484db) aid_size_cell_itu2_ParamLimits

0x7e03,	// (0x000484db) aid_size_cell_itu2

0x7e54,	// (0x0004852c) bg_popup_window_pane_cp09_ParamLimits

0x7e54,	// (0x0004852c) bg_popup_window_pane_cp09

0x7e62,	// (0x0004853a) field_vitu2_entry_pane_ParamLimits

0x7e62,	// (0x0004853a) field_vitu2_entry_pane

0x7e79,	// (0x00048551) grid_vitu2_function_pane_ParamLimits

0x7e79,	// (0x00048551) grid_vitu2_function_pane

0x7eae,	// (0x00048586) grid_vitu2_itu_pane_ParamLimits

0x7eae,	// (0x00048586) grid_vitu2_itu_pane

0x7f15,	// (0x000485ed) cell_vitu2_itu_pane_ParamLimits

0x7f15,	// (0x000485ed) cell_vitu2_itu_pane

0x7f3d,	// (0x00048615) cell_vitu2_function_pane_ParamLimits

0x7f3d,	// (0x00048615) cell_vitu2_function_pane

0xb1ad,	// (0x0004b885) bg_popup_call_pane_cp08_ParamLimits

0xb1ad,	// (0x0004b885) bg_popup_call_pane_cp08

0xb1c4,	// (0x0004b89c) field_vitu2_entry_pane_g1

0xb1d0,	// (0x0004b8a8) field_vitu2_entry_pane_g2

0x0002,

0xf895,	// (0x0004ff6d) field_vitu2_entry_pane_g

0x0de1,	// (0x000414b9) field_vitu2_entry_pane_t1_ParamLimits

0x0de1,	// (0x000414b9) field_vitu2_entry_pane_t1

0xb1ea,	// (0x0004b8c2) field_vitu2_entry_pane_t2_ParamLimits

0xb1ea,	// (0x0004b8c2) field_vitu2_entry_pane_t2

0x0001,

0xf89c,	// (0x0004ff74) field_vitu2_entry_pane_t_ParamLimits

0xf89c,	// (0x0004ff74) field_vitu2_entry_pane_t

0x7f7c,	// (0x00048654) bg_button_pane_cp010_ParamLimits

0x7f7c,	// (0x00048654) bg_button_pane_cp010

0xb20f,	// (0x0004b8e7) cell_vitu2_itu_pane_g1

0x7f98,	// (0x00048670) cell_vitu2_itu_pane_t1_ParamLimits

0x7f98,	// (0x00048670) cell_vitu2_itu_pane_t1

0x0e0f,	// (0x000414e7) cell_vitu2_itu_pane_t2_ParamLimits

0x0e0f,	// (0x000414e7) cell_vitu2_itu_pane_t2

0x0002,

0xf8a6,	// (0x0004ff7e) cell_vitu2_itu_pane_t_ParamLimits

0xf8a6,	// (0x0004ff7e) cell_vitu2_itu_pane_t

0xefab,	// (0x0004f683) bg_button_pane_cp011

0x7ff6,	// (0x000486ce) cell_vitu2_function_pane_g1

0xcff9,	// (0x0004d6d1) main_myfav_hc_pane

0x7a62,	// (0x0004813a) popup_image3_note_pane_ParamLimits

0x7a62,	// (0x0004813a) popup_image3_note_pane

0x7a7c,	// (0x00048154) popup_image3_tool_bar_pane_ParamLimits

0x7a7c,	// (0x00048154) popup_image3_tool_bar_pane

0x0e9d,	// (0x00041575) cell_vitu2_itu_pane_t3_ParamLimits

0x0e9d,	// (0x00041575) cell_vitu2_itu_pane_t3

0xcff9,	// (0x0004d6d1) bg_popup_trans_pane

0xb221,	// (0x0004b8f9) grid_image3_tool_bar_pane

0xb22b,	// (0x0004b903) bg_popup_trans_pane_g1

0xdcc9,	// (0x0004e3a1) bg_popup_trans_pane_g2

0xb233,	// (0x0004b90b) bg_popup_trans_pane_g3

0xb23b,	// (0x0004b913) bg_popup_trans_pane_g4

0xb243,	// (0x0004b91b) bg_popup_trans_pane_g5

0xb24b,	// (0x0004b923) bg_popup_trans_pane_g6

0xb253,	// (0x0004b92b) bg_popup_trans_pane_g7

0xb25b,	// (0x0004b933) bg_popup_trans_pane_g8

0xdca9,	// (0x0004e381) bg_popup_trans_pane_g9

0x0008,

0xf8ad,	// (0x0004ff85) bg_popup_trans_pane_g

0xb263,	// (0x0004b93b) cell_image3_tool_bar_pane_ParamLimits

0xb263,	// (0x0004b93b) cell_image3_tool_bar_pane

0x5e47,	// (0x0004651f) cell_image3_tool_bar_pane_g1

0xcff9,	// (0x0004d6d1) bg_popup_trans_pane_cp1

0xb277,	// (0x0004b94f) popup_image3_note_pane_t1

0xb285,	// (0x0004b95d) popup_image3_note_pane_t2

0xb293,	// (0x0004b96b) popup_image3_note_pane_t3

0x0002,

0xf8c0,	// (0x0004ff98) popup_image3_note_pane_t

0xb2a1,	// (0x0004b979) popup_image3_note_pane_t3_copy1

0x8009,	// (0x000486e1) bg_myfav_hc_instruction_pane_ParamLimits

0x8009,	// (0x000486e1) bg_myfav_hc_instruction_pane

0x801b,	// (0x000486f3) cell_myfav_contact_pane_ParamLimits

0x801b,	// (0x000486f3) cell_myfav_contact_pane

0x8035,	// (0x0004870d) cell_myfav_contact_pane_cp1_ParamLimits

0x8035,	// (0x0004870d) cell_myfav_contact_pane_cp1

0x804b,	// (0x00048723) cell_myfav_contact_pane_cp2_ParamLimits

0x804b,	// (0x00048723) cell_myfav_contact_pane_cp2

0x8061,	// (0x00048739) cell_myfav_contact_pane_cp3_ParamLimits

0x8061,	// (0x00048739) cell_myfav_contact_pane_cp3

0x8076,	// (0x0004874e) cell_myfav_contact_pane_cp4_ParamLimits

0x8076,	// (0x0004874e) cell_myfav_contact_pane_cp4

0x808a,	// (0x00048762) cell_myfav_contact_pane_cp5_ParamLimits

0x808a,	// (0x00048762) cell_myfav_contact_pane_cp5

0x809e,	// (0x00048776) cell_myfav_contact_pane_cp6_ParamLimits

0x809e,	// (0x00048776) cell_myfav_contact_pane_cp6

0x80b2,	// (0x0004878a) cell_myfav_contact_pane_cp7_ParamLimits

0x80b2,	// (0x0004878a) cell_myfav_contact_pane_cp7

0xb2af,	// (0x0004b987) listscroll_gen_pane_cp05

0x80ca,	// (0x000487a2) main_myfav_hc_pane_g1_ParamLimits

0x80ca,	// (0x000487a2) main_myfav_hc_pane_g1

0x80e0,	// (0x000487b8) main_myfav_hc_pane_g2_ParamLimits

0x80e0,	// (0x000487b8) main_myfav_hc_pane_g2

0x0002,

0xf8c7,	// (0x0004ff9f) main_myfav_hc_pane_g_ParamLimits

0xf8c7,	// (0x0004ff9f) main_myfav_hc_pane_g

0x810a,	// (0x000487e2) main_myfav_hc_pane_t1_ParamLimits

0x810a,	// (0x000487e2) main_myfav_hc_pane_t1

0xb2b8,	// (0x0004b990) main_myfav_hc_pane_t2_ParamLimits

0xb2b8,	// (0x0004b990) main_myfav_hc_pane_t2

0xb2ca,	// (0x0004b9a2) main_myfav_hc_pane_t3_ParamLimits

0xb2ca,	// (0x0004b9a2) main_myfav_hc_pane_t3

0x811f,	// (0x000487f7) main_myfav_hc_pane_t4_ParamLimits

0x811f,	// (0x000487f7) main_myfav_hc_pane_t4

0x0004,

0xf8ce,	// (0x0004ffa6) main_myfav_hc_pane_t_ParamLimits

0xf8ce,	// (0x0004ffa6) main_myfav_hc_pane_t

0x5e47,	// (0x0004651f) bg_myfav_hc_instruction_pane_g1

0xb2dc,	// (0x0004b9b4) cell_myfav_contact_pane_g1_ParamLimits

0xb2dc,	// (0x0004b9b4) cell_myfav_contact_pane_g1

0xb2dc,	// (0x0004b9b4) cell_myfav_contact_pane_g2_ParamLimits

0xb2dc,	// (0x0004b9b4) cell_myfav_contact_pane_g2

0xb2e8,	// (0x0004b9c0) cell_myfav_contact_pane_g3_ParamLimits

0xb2e8,	// (0x0004b9c0) cell_myfav_contact_pane_g3

0x6477,	// (0x00046b4f) cell_myfav_contact_pane_g4_ParamLimits

0x6477,	// (0x00046b4f) cell_myfav_contact_pane_g4

0xb2f5,	// (0x0004b9cd) cell_myfav_contact_pane_g5_ParamLimits

0xb2f5,	// (0x0004b9cd) cell_myfav_contact_pane_g5

0x0004,

0xf8d9,	// (0x0004ffb1) cell_myfav_contact_pane_g_ParamLimits

0xf8d9,	// (0x0004ffb1) cell_myfav_contact_pane_g

0x80f6,	// (0x000487ce) main_myfav_hc_pane_g3_ParamLimits

0x80f6,	// (0x000487ce) main_myfav_hc_pane_g3

0x1a4e,	// (0x00042126) popup_adpt_find_window

0x8143,	// (0x0004881b) afind_page_pane_ParamLimits

0x8143,	// (0x0004881b) afind_page_pane

0x8158,	// (0x00048830) aid_size_cell_afind_ParamLimits

0x8158,	// (0x00048830) aid_size_cell_afind

0x8176,	// (0x0004884e) bg_popup_sub_pane_cp09_ParamLimits

0x8176,	// (0x0004884e) bg_popup_sub_pane_cp09

0x8183,	// (0x0004885b) find_pane_cp01_ParamLimits

0x8183,	// (0x0004885b) find_pane_cp01

0xb301,	// (0x0004b9d9) grid_afind_control_pane_ParamLimits

0xb301,	// (0x0004b9d9) grid_afind_control_pane

0x8190,	// (0x00048868) grid_afind_pane_ParamLimits

0x8190,	// (0x00048868) grid_afind_pane

0x81ae,	// (0x00048886) cell_afind_pane_ParamLimits

0x81ae,	// (0x00048886) cell_afind_pane

0x5e47,	// (0x0004651f) afind_page_pane_g1

0x81fd,	// (0x000488d5) afind_page_pane_g2

0x8206,	// (0x000488de) afind_page_pane_g3

0x0002,

0xf8e4,	// (0x0004ffbc) afind_page_pane_g

0x820f,	// (0x000488e7) afind_page_pane_t1

0xb315,	// (0x0004b9ed) cell_afind_grid_control_pane_ParamLimits

0xb315,	// (0x0004b9ed) cell_afind_grid_control_pane

0x7830,	// (0x00047f08) bg_button_pane_cp69_ParamLimits

0x7830,	// (0x00047f08) bg_button_pane_cp69

0x822f,	// (0x00048907) cell_afind_pane_g1_ParamLimits

0x822f,	// (0x00048907) cell_afind_pane_g1

0x823c,	// (0x00048914) cell_afind_pane_t1_ParamLimits

0x823c,	// (0x00048914) cell_afind_pane_t1

0xda9a,	// (0x0004e172) bg_button_pane_cp72

0xb324,	// (0x0004b9fc) cell_afind_grid_control_pane_g1

0x423b,	// (0x00044913) aid_image_placing_area_ParamLimits

0x423b,	// (0x00044913) aid_image_placing_area

0x71d6,	// (0x000478ae) field_vitu_entry_pane_g1_ParamLimits

0x71d6,	// (0x000478ae) field_vitu_entry_pane_g1

0x71e2,	// (0x000478ba) field_vitu_entry_pane_g2_ParamLimits

0x71e2,	// (0x000478ba) field_vitu_entry_pane_g2

0x0001,

0xf791,	// (0x0004fe69) field_vitu_entry_pane_g_ParamLimits

0xf791,	// (0x0004fe69) field_vitu_entry_pane_g

0x7235,	// (0x0004790d) cell_vitu_itu_pane_g1_ParamLimits

0x7277,	// (0x0004794f) cell_vitu_itu_pane_t3_ParamLimits

0x7277,	// (0x0004794f) cell_vitu_itu_pane_t3

0x7740,	// (0x00047e18) mp4_progress_pane_t1_ParamLimits

0x7757,	// (0x00047e2f) mp4_progress_pane_t2_ParamLimits

0xf82a,	// (0x0004ff02) mp4_progress_pane_t_ParamLimits

0x776e,	// (0x00047e46) mup_progress_pane_cp04_ParamLimits

0x8131,	// (0x00048809) main_myfav_hc_pane_t5_ParamLimits

0x8131,	// (0x00048809) main_myfav_hc_pane_t5

0xa8b3,	// (0x0004af8b) aid_zoom_text_primary

0x1a4e,	// (0x00042126) popup_adpt_find_window_ParamLimits

0xefab,	// (0x0004f683) main_cam_set_pane

0x7c6a,	// (0x00048342) cam4_zoom_pane_ParamLimits

0x7c6a,	// (0x00048342) cam4_zoom_pane

0x824e,	// (0x00048926) main_cam_set_pane_g1_ParamLimits

0x824e,	// (0x00048926) main_cam_set_pane_g1

0x825c,	// (0x00048934) main_cam_set_pane_g2_ParamLimits

0x825c,	// (0x00048934) main_cam_set_pane_g2

0x0001,

0xf8eb,	// (0x0004ffc3) main_cam_set_pane_g_ParamLimits

0xf8eb,	// (0x0004ffc3) main_cam_set_pane_g

0x827b,	// (0x00048953) main_cam_set_pane_t1_ParamLimits

0x827b,	// (0x00048953) main_cam_set_pane_t1

0x828d,	// (0x00048965) main_cset_listscroll_pane_ParamLimits

0x828d,	// (0x00048965) main_cset_listscroll_pane

0x82ab,	// (0x00048983) main_cset_slider_pane_ParamLimits

0x82ab,	// (0x00048983) main_cset_slider_pane

0xb335,	// (0x0004ba0d) main_cset_list_pane_ParamLimits

0xb335,	// (0x0004ba0d) main_cset_list_pane

0xb345,	// (0x0004ba1d) scroll_pane_cp028

0x82cf,	// (0x000489a7) aid_area_touch_slider

0x82eb,	// (0x000489c3) cset_slider_pane

0x8315,	// (0x000489ed) main_cset_slider_pane_g1

0x832a,	// (0x00048a02) main_cset_slider_pane_g2

0x0011,

0xf8f0,	// (0x0004ffc8) main_cset_slider_pane_g

0xb37e,	// (0x0004ba56) main_cset_slider_pane_t1

0x83e6,	// (0x00048abe) main_cset_slider_pane_t2

0x8400,	// (0x00048ad8) main_cset_slider_pane_t3

0x841a,	// (0x00048af2) main_cset_slider_pane_t4

0x8434,	// (0x00048b0c) main_cset_slider_pane_t5

0x844e,	// (0x00048b26) main_cset_slider_pane_t6

0x8463,	// (0x00048b3b) main_cset_slider_pane_t7

0x000e,

0xf915,	// (0x0004ffed) main_cset_slider_pane_t

0x8567,	// (0x00048c3f) cset_list_set_pane_ParamLimits

0x8567,	// (0x00048c3f) cset_list_set_pane

0x8578,	// (0x00048c50) aid_position_infowindow_above

0x8580,	// (0x00048c58) aid_position_infowindow_below

0x0efb,	// (0x000415d3) cset_list_set_pane_g1_ParamLimits

0x0efb,	// (0x000415d3) cset_list_set_pane_g1

0x0f07,	// (0x000415df) cset_list_set_pane_g3_ParamLimits

0x0f07,	// (0x000415df) cset_list_set_pane_g3

0x0001,

0xf934,	// (0x0005000c) cset_list_set_pane_g_ParamLimits

0xf934,	// (0x0005000c) cset_list_set_pane_g

0x0f16,	// (0x000415ee) cset_list_set_pane_t1_ParamLimits

0x0f16,	// (0x000415ee) cset_list_set_pane_t1

0xefab,	// (0x0004f683) list_highlight_pane_cp021_ParamLimits

0xefab,	// (0x0004f683) list_highlight_pane_cp021

0xe574,	// (0x0004ec4c) cset_slider_pane_g1

0xe586,	// (0x0004ec5e) cset_slider_pane_g2

0xe57d,	// (0x0004ec55) cset_slider_pane_g3

0x0002,

0x06ea,	// (0x00040dc2) cset_slider_pane_g

0xd116,	// (0x0004d7ee) aid_area_touch_cam4_zoom

0xd11e,	// (0x0004d7f6) cam4_zoom_cont_pane

0xd126,	// (0x0004d7fe) cam4_zoom_pane_g1

0xd12e,	// (0x0004d806) cam4_zoom_pane_g2

0x8588,	// (0x00048c60) cam4_zoom_pane_g3

0x0002,

0xf939,	// (0x00050011) cam4_zoom_pane_g

0xb41e,	// (0x0004baf6) cam4_zoom_cont_pane_g1

0xb427,	// (0x0004baff) cam4_zoom_cont_pane_g2

0xb430,	// (0x0004bb08) cam4_zoom_cont_pane_g3

0x0002,

0xf940,	// (0x00050018) cam4_zoom_cont_pane_g

0x7ae7,	// (0x000481bf) call4_image_pane_ParamLimits

0x7ae7,	// (0x000481bf) call4_image_pane

0x7b33,	// (0x0004820b) call4_windows_conf_pane_ParamLimits

0x7b66,	// (0x0004823e) popup_call4_audio_in_window_ParamLimits

0x7b66,	// (0x0004823e) popup_call4_audio_in_window

0xcff9,	// (0x0004d6d1) bg_popup_call2_act_pane_cp02

0xb08c,	// (0x0004b764) call4_list_conf_pane

0x5e47,	// (0x0004651f) call4_image_pane_g1

0x5e47,	// (0x0004651f) call4_image_pane_g2

0x0001,

0xf657,	// (0x0004fd2f) call4_image_pane_g

0xb439,	// (0x0004bb11) list_single_graphic_popup_conf4_pane_ParamLimits

0xb439,	// (0x0004bb11) list_single_graphic_popup_conf4_pane

0xcff9,	// (0x0004d6d1) list_highlight_pane_cp022

0xb44c,	// (0x0004bb24) list_single_graphic_popup_conf4_pane_g1

0xe1a9,	// (0x0004e881) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf947,	// (0x0005001f) list_single_graphic_popup_conf4_pane_g

0xb454,	// (0x0004bb2c) list_single_graphic_popup_conf4_pane_t1

0x29dd,	// (0x000430b5) popup_vtel_slider_window_ParamLimits

0x29dd,	// (0x000430b5) popup_vtel_slider_window

0x77fc,	// (0x00047ed4) dialer2_ne_pane_t2_ParamLimits

0x77fc,	// (0x00047ed4) dialer2_ne_pane_t2

0x0001,

0xf82f,	// (0x0004ff07) dialer2_ne_pane_t_ParamLimits

0xf82f,	// (0x0004ff07) dialer2_ne_pane_t

0x5b70,	// (0x00046248) bg_popup_sub_pane_cp010_ParamLimits

0x5b70,	// (0x00046248) bg_popup_sub_pane_cp010

0x8590,	// (0x00048c68) popup_vtel_slider_window_g1_ParamLimits

0x8590,	// (0x00048c68) popup_vtel_slider_window_g1

0x85a3,	// (0x00048c7b) popup_vtel_slider_window_g2_ParamLimits

0x85a3,	// (0x00048c7b) popup_vtel_slider_window_g2

0x0003,

0xf94c,	// (0x00050024) popup_vtel_slider_window_g_ParamLimits

0xf94c,	// (0x00050024) popup_vtel_slider_window_g

0x85f7,	// (0x00048ccf) vtel_slider_pane_ParamLimits

0x85f7,	// (0x00048ccf) vtel_slider_pane

0x8619,	// (0x00048cf1) vtel_slider_pane_g1_ParamLimits

0x8619,	// (0x00048cf1) vtel_slider_pane_g1

0x862d,	// (0x00048d05) vtel_slider_pane_g2_ParamLimits

0x862d,	// (0x00048d05) vtel_slider_pane_g2

0x8645,	// (0x00048d1d) vtel_slider_pane_g3_ParamLimits

0x8645,	// (0x00048d1d) vtel_slider_pane_g3

0x8619,	// (0x00048cf1) vtel_slider_pane_g4_ParamLimits

0x8619,	// (0x00048cf1) vtel_slider_pane_g4

0x865b,	// (0x00048d33) vtel_slider_pane_g5_ParamLimits

0x865b,	// (0x00048d33) vtel_slider_pane_g5

0x0004,

0xf955,	// (0x0005002d) vtel_slider_pane_g_ParamLimits

0xf955,	// (0x0005002d) vtel_slider_pane_g

0xefab,	// (0x0004f683) main_gallery2_pane

0x7e2f,	// (0x00048507) aid_size_row_itut2_dropdow_list_ParamLimits

0x7e2f,	// (0x00048507) aid_size_row_itut2_dropdow_list

0x7e92,	// (0x0004856a) grid_vitu2_function_top_pane_ParamLimits

0x7e92,	// (0x0004856a) grid_vitu2_function_top_pane

0x7ed7,	// (0x000485af) popup_vitu2_dropdown_list_window_ParamLimits

0x7ed7,	// (0x000485af) popup_vitu2_dropdown_list_window

0x7ef3,	// (0x000485cb) popup_vitu2_match_list_window

0x8671,	// (0x00048d49) cell_vitu2_function_top_pane_ParamLimits

0x8671,	// (0x00048d49) cell_vitu2_function_top_pane

0x8689,	// (0x00048d61) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8689,	// (0x00048d61) cell_vitu2_function_top_pane_cp01

0x86a5,	// (0x00048d7d) cell_vitu2_function_top_wide_pane_ParamLimits

0x86a5,	// (0x00048d7d) cell_vitu2_function_top_wide_pane

0xefab,	// (0x0004f683) bg_button_pane_cp012

0x86c1,	// (0x00048d99) cell_vitu2_function_top_pane_g1

0xd136,	// (0x0004d80e) bg_button_pane_cp013_ParamLimits

0xd136,	// (0x0004d80e) bg_button_pane_cp013

0x86d5,	// (0x00048dad) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x86d5,	// (0x00048dad) cell_vitu2_function_top_wide_pane_g1

0xefab,	// (0x0004f683) bg_popup_sub_pane_cp20

0x86ed,	// (0x00048dc5) list_vitu2_match_list_pane

0xb22b,	// (0x0004b903) bg_popup_sub_pane_cp20_g1

0xb233,	// (0x0004b90b) bg_popup_sub_pane_cp20_g2

0xdcc9,	// (0x0004e3a1) bg_popup_sub_pane_cp20_g3

0xb23b,	// (0x0004b913) bg_popup_sub_pane_cp20_g4

0xdca9,	// (0x0004e381) bg_popup_sub_pane_cp20_g5

0xb46a,	// (0x0004bb42) bg_popup_sub_pane_cp20_g6

0xb24b,	// (0x0004b923) bg_popup_sub_pane_cp20_g7

0xb253,	// (0x0004b92b) bg_popup_sub_pane_cp20_g8

0xb25b,	// (0x0004b933) bg_popup_sub_pane_cp20_g9

0x0008,

0xf960,	// (0x00050038) bg_popup_sub_pane_cp20_g

0xd152,	// (0x0004d82a) list_vitu2_match_list_item_pane_ParamLimits

0xd152,	// (0x0004d82a) list_vitu2_match_list_item_pane

0xd164,	// (0x0004d83c) list_vitu2_match_list_item_pane_t1

0xcff9,	// (0x0004d6d1) bg_popup_sub_pane_cp21

0xe0e7,	// (0x0004e7bf) grid_vitu2_dropdown_list_pane

0x870b,	// (0x00048de3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x870b,	// (0x00048de3) cell_vitu2_dropdown_list_char_pane

0x872c,	// (0x00048e04) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x872c,	// (0x00048e04) cell_vitu2_dropdown_list_ctrl_pane

0xb472,	// (0x0004bb4a) cell_vitu2_dropdown_list_char_pane_g1

0xb47b,	// (0x0004bb53) cell_vitu2_dropdown_list_char_pane_g2

0xb484,	// (0x0004bb5c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf97d,	// (0x00050055) cell_vitu2_dropdown_list_char_pane_g

0x8758,	// (0x00048e30) cell_vitu2_dropdown_list_char_pane_t1

0x8766,	// (0x00048e3e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8766,	// (0x00048e3e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8773,	// (0x00048e4b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8773,	// (0x00048e4b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8780,	// (0x00048e58) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8780,	// (0x00048e58) cell_vitu2_dropdown_list_ctrl_pane_g3

0x878d,	// (0x00048e65) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x878d,	// (0x00048e65) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6112,	// (0x000467ea) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6112,	// (0x000467ea) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf984,	// (0x0005005c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf984,	// (0x0005005c) cell_vitu2_dropdown_list_ctrl_pane_g

0x87a9,	// (0x00048e81) aid_size_cell_gallery2_ParamLimits

0x87a9,	// (0x00048e81) aid_size_cell_gallery2

0x87c7,	// (0x00048e9f) grid_gallery2_pane_ParamLimits

0x87c7,	// (0x00048e9f) grid_gallery2_pane

0x6efd,	// (0x000475d5) scroll_pane_cp029_ParamLimits

0x6efd,	// (0x000475d5) scroll_pane_cp029

0x87db,	// (0x00048eb3) cell_gallery2_pane_ParamLimits

0x87db,	// (0x00048eb3) cell_gallery2_pane

0xb48d,	// (0x0004bb65) cell_gallery2_pane_g2

0x8834,	// (0x00048f0c) cell_gallery2_pane_g3

0xb495,	// (0x0004bb6d) cell_gallery2_pane_g4

0xb49d,	// (0x0004bb75) cell_gallery2_pane_g5

0xda10,	// (0x0004e0e8) grid_highlight_pane_cp10

0x7ef3,	// (0x000485cb) popup_vitu2_match_list_window_ParamLimits

0x7f04,	// (0x000485dc) popup_vitu2_query_window_ParamLimits

0x7f04,	// (0x000485dc) popup_vitu2_query_window

0xcff9,	// (0x0004d6d1) bg_vitu2_candi_button_pane

0xb472,	// (0x0004bb4a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb47b,	// (0x0004bb53) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb484,	// (0x0004bb5c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0f80,	// (0x00041658) bg_button_pane_cp015

0x883c,	// (0x00048f14) bg_button_pane_cp016

0x884e,	// (0x00048f26) bg_button_pane_cp017

0x4e65,	// (0x0004553d) bg_popup_sub_pane_cp22

0xb4a5,	// (0x0004bb7d) popup_vitu2_query_window_g1

0x0faf,	// (0x00041687) popup_vitu2_query_window_g2

0x0002,

0xf98f,	// (0x00050067) popup_vitu2_query_window_g

0x0fca,	// (0x000416a2) popup_vitu2_query_window_t1_ParamLimits

0x0fca,	// (0x000416a2) popup_vitu2_query_window_t1

0x0ffd,	// (0x000416d5) popup_vitu2_query_window_t2_ParamLimits

0x0ffd,	// (0x000416d5) popup_vitu2_query_window_t2

0x100f,	// (0x000416e7) popup_vitu2_query_window_t3_ParamLimits

0x100f,	// (0x000416e7) popup_vitu2_query_window_t3

0x8870,	// (0x00048f48) popup_vitu2_query_window_t4_ParamLimits

0x8870,	// (0x00048f48) popup_vitu2_query_window_t4

0x888d,	// (0x00048f65) popup_vitu2_query_window_t5_ParamLimits

0x888d,	// (0x00048f65) popup_vitu2_query_window_t5

0x0006,

0xf996,	// (0x0005006e) popup_vitu2_query_window_t_ParamLimits

0xf996,	// (0x0005006e) popup_vitu2_query_window_t

0xb32d,	// (0x0004ba05) main_cset_text_pane

0x82cf,	// (0x000489a7) aid_area_touch_slider_ParamLimits

0x82eb,	// (0x000489c3) cset_slider_pane_ParamLimits

0x8315,	// (0x000489ed) main_cset_slider_pane_g1_ParamLimits

0x832a,	// (0x00048a02) main_cset_slider_pane_g2_ParamLimits

0xb34e,	// (0x0004ba26) main_cset_slider_pane_g3_ParamLimits

0xb34e,	// (0x0004ba26) main_cset_slider_pane_g3

0x833f,	// (0x00048a17) main_cset_slider_pane_g4_ParamLimits

0x833f,	// (0x00048a17) main_cset_slider_pane_g4

0x834e,	// (0x00048a26) main_cset_slider_pane_g5_ParamLimits

0x834e,	// (0x00048a26) main_cset_slider_pane_g5

0x835a,	// (0x00048a32) main_cset_slider_pane_g6_ParamLimits

0x835a,	// (0x00048a32) main_cset_slider_pane_g6

0xf8f0,	// (0x0004ffc8) main_cset_slider_pane_g_ParamLimits

0xb37e,	// (0x0004ba56) main_cset_slider_pane_t1_ParamLimits

0x83e6,	// (0x00048abe) main_cset_slider_pane_t2_ParamLimits

0x8400,	// (0x00048ad8) main_cset_slider_pane_t3_ParamLimits

0x841a,	// (0x00048af2) main_cset_slider_pane_t4_ParamLimits

0x8434,	// (0x00048b0c) main_cset_slider_pane_t5_ParamLimits

0x844e,	// (0x00048b26) main_cset_slider_pane_t6_ParamLimits

0x8463,	// (0x00048b3b) main_cset_slider_pane_t7_ParamLimits

0x848d,	// (0x00048b65) main_cset_slider_pane_t8_ParamLimits

0x848d,	// (0x00048b65) main_cset_slider_pane_t8

0x84b5,	// (0x00048b8d) main_cset_slider_pane_t9_ParamLimits

0x84b5,	// (0x00048b8d) main_cset_slider_pane_t9

0x84dd,	// (0x00048bb5) main_cset_slider_pane_t10_ParamLimits

0x84dd,	// (0x00048bb5) main_cset_slider_pane_t10

0x8505,	// (0x00048bdd) main_cset_slider_pane_t11_ParamLimits

0x8505,	// (0x00048bdd) main_cset_slider_pane_t11

0x852d,	// (0x00048c05) main_cset_slider_pane_t12_ParamLimits

0x852d,	// (0x00048c05) main_cset_slider_pane_t12

0x854a,	// (0x00048c22) main_cset_slider_pane_t13_ParamLimits

0x854a,	// (0x00048c22) main_cset_slider_pane_t13

0xf915,	// (0x0004ffed) main_cset_slider_pane_t_ParamLimits

0xcff9,	// (0x0004d6d1) bg_popup_sub_pane_cp011

0xb4b1,	// (0x0004bb89) main_cset_text_pane_g1

0xb4b9,	// (0x0004bb91) main_cset_text_pane_t1

0xb4c7,	// (0x0004bb9f) main_cset_text_pane_t2

0xb4d5,	// (0x0004bbad) main_cset_text_pane_t3

0xb4e3,	// (0x0004bbbb) main_cset_text_pane_t4

0xb4f1,	// (0x0004bbc9) main_cset_text_pane_t5

0xb4ff,	// (0x0004bbd7) main_cset_text_pane_t6

0xb50d,	// (0x0004bbe5) main_cset_text_pane_t7

0x0006,

0xf9a5,	// (0x0005007d) main_cset_text_pane_t

0xcff9,	// (0x0004d6d1) main_cam4_burst_pane

0xcff9,	// (0x0004d6d1) main_cam5_pane

0x821d,	// (0x000488f5) bg_button_pane_cp019

0x8226,	// (0x000488fe) bg_button_pane_cp020

0xb35a,	// (0x0004ba32) main_cset_slider_pane_g7_ParamLimits

0xb35a,	// (0x0004ba32) main_cset_slider_pane_g7

0xb366,	// (0x0004ba3e) main_cset_slider_pane_g8_ParamLimits

0xb366,	// (0x0004ba3e) main_cset_slider_pane_g8

0x836e,	// (0x00048a46) main_cset_slider_pane_g9_ParamLimits

0x836e,	// (0x00048a46) main_cset_slider_pane_g9

0x837a,	// (0x00048a52) main_cset_slider_pane_g10_ParamLimits

0x837a,	// (0x00048a52) main_cset_slider_pane_g10

0x8386,	// (0x00048a5e) main_cset_slider_pane_g11_ParamLimits

0x8386,	// (0x00048a5e) main_cset_slider_pane_g11

0x8392,	// (0x00048a6a) main_cset_slider_pane_g12_ParamLimits

0x8392,	// (0x00048a6a) main_cset_slider_pane_g12

0x839e,	// (0x00048a76) main_cset_slider_pane_g13_ParamLimits

0x839e,	// (0x00048a76) main_cset_slider_pane_g13

0x83aa,	// (0x00048a82) main_cset_slider_pane_g14_ParamLimits

0x83aa,	// (0x00048a82) main_cset_slider_pane_g14

0x83b6,	// (0x00048a8e) main_cset_slider_pane_g15_ParamLimits

0x83b6,	// (0x00048a8e) main_cset_slider_pane_g15

0xb3ac,	// (0x0004ba84) main_cset_slider_pane_t14_ParamLimits

0xb3ac,	// (0x0004ba84) main_cset_slider_pane_t14

0xb3e5,	// (0x0004babd) main_cset_slider_pane_t15_ParamLimits

0xb3e5,	// (0x0004babd) main_cset_slider_pane_t15

0x88aa,	// (0x00048f82) aid_cam4_burst_size_cell_ParamLimits

0x88aa,	// (0x00048f82) aid_cam4_burst_size_cell

0x88ca,	// (0x00048fa2) grid_cam4_burst_pane_ParamLimits

0x88ca,	// (0x00048fa2) grid_cam4_burst_pane

0x88f0,	// (0x00048fc8) linegrid_cam4_burst_pane_ParamLimits

0x88f0,	// (0x00048fc8) linegrid_cam4_burst_pane

0x8912,	// (0x00048fea) scroll_pane_cp30_ParamLimits

0x8912,	// (0x00048fea) scroll_pane_cp30

0x891e,	// (0x00048ff6) cell_cam4_burst_pane_ParamLimits

0x891e,	// (0x00048ff6) cell_cam4_burst_pane

0xb51b,	// (0x0004bbf3) linegrid_cam4_burst_pane_g1_ParamLimits

0xb51b,	// (0x0004bbf3) linegrid_cam4_burst_pane_g1

0x8965,	// (0x0004903d) linegrid_cam4_burst_pane_g2_ParamLimits

0x8965,	// (0x0004903d) linegrid_cam4_burst_pane_g2

0xb528,	// (0x0004bc00) linegrid_cam4_burst_pane_g3_ParamLimits

0xb528,	// (0x0004bc00) linegrid_cam4_burst_pane_g3

0x0002,

0xf9b4,	// (0x0005008c) linegrid_cam4_burst_pane_g_ParamLimits

0xf9b4,	// (0x0005008c) linegrid_cam4_burst_pane_g

0x8976,	// (0x0004904e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8976,	// (0x0004904e) linegrid_cam4_burst_pane_g3_copy1

0xb535,	// (0x0004bc0d) linegrid_cam4_burst_pane_g4_ParamLimits

0xb535,	// (0x0004bc0d) linegrid_cam4_burst_pane_g4

0x8990,	// (0x00049068) linegrid_cam4_burst_pane_g5_ParamLimits

0x8990,	// (0x00049068) linegrid_cam4_burst_pane_g5

0x89a1,	// (0x00049079) linegrid_cam4_burst_pane_g6_ParamLimits

0x89a1,	// (0x00049079) linegrid_cam4_burst_pane_g6

0xb542,	// (0x0004bc1a) linegrid_cam4_burst_pane_g7_ParamLimits

0xb542,	// (0x0004bc1a) linegrid_cam4_burst_pane_g7

0x89b2,	// (0x0004908a) cell_cam4_burst_pane_g1

0xb55b,	// (0x0004bc33) main_cam5_pane_t1_ParamLimits

0xb55b,	// (0x0004bc33) main_cam5_pane_t1

0xb56d,	// (0x0004bc45) main_cam5_pane_t2_ParamLimits

0xb56d,	// (0x0004bc45) main_cam5_pane_t2

0xb57f,	// (0x0004bc57) main_cam5_pane_t3_ParamLimits

0xb57f,	// (0x0004bc57) main_cam5_pane_t3

0xb591,	// (0x0004bc69) main_cam5_pane_t4_ParamLimits

0xb591,	// (0x0004bc69) main_cam5_pane_t4

0xb5a7,	// (0x0004bc7f) main_cam5_pane_t5_ParamLimits

0xb5a7,	// (0x0004bc7f) main_cam5_pane_t5

0xb5b9,	// (0x0004bc91) main_cam5_pane_t6_ParamLimits

0xb5b9,	// (0x0004bc91) main_cam5_pane_t6

0xb5cb,	// (0x0004bca3) main_cam5_pane_t7_ParamLimits

0xb5cb,	// (0x0004bca3) main_cam5_pane_t7

0xb5dd,	// (0x0004bcb5) main_cam5_pane_t8_ParamLimits

0xb5dd,	// (0x0004bcb5) main_cam5_pane_t8

0xb5f9,	// (0x0004bcd1) main_cam5_pane_t9_ParamLimits

0xb5f9,	// (0x0004bcd1) main_cam5_pane_t9

0xb60b,	// (0x0004bce3) main_cam5_pane_t10_ParamLimits

0xb60b,	// (0x0004bce3) main_cam5_pane_t10

0xb61d,	// (0x0004bcf5) main_cam5_pane_t11_ParamLimits

0xb61d,	// (0x0004bcf5) main_cam5_pane_t11

0xb62f,	// (0x0004bd07) main_cam5_pane_t12_ParamLimits

0xb62f,	// (0x0004bd07) main_cam5_pane_t12

0xb644,	// (0x0004bd1c) main_cam5_pane_t13_ParamLimits

0xb644,	// (0x0004bd1c) main_cam5_pane_t13

0x000c,

0xf9c0,	// (0x00050098) main_cam5_pane_t_ParamLimits

0xf9c0,	// (0x00050098) main_cam5_pane_t

0x1aac,	// (0x00042184) popup_scut_keymap_window_ParamLimits

0x1aac,	// (0x00042184) popup_scut_keymap_window

0x89c7,	// (0x0004909f) aid_size_cell_brow_shortcut

0xda10,	// (0x0004e0e8) bg_popup_window_pane_cp010

0x89d3,	// (0x000490ab) grid_scut_pane

0x89dd,	// (0x000490b5) cell_scut_pane_ParamLimits

0x89dd,	// (0x000490b5) cell_scut_pane

0x89f2,	// (0x000490ca) cell_scut_pane_g1

0xb661,	// (0x0004bd39) cell_scut_pane_t1

0xb670,	// (0x0004bd48) cell_scut_pane_t2

0x89fb,	// (0x000490d3) cell_scut_pane_t3

0x0002,

0xf9db,	// (0x000500b3) cell_scut_pane_t

0x6485,	// (0x00046b5d) main_mup3_pane_g8_ParamLimits

0x6485,	// (0x00046b5d) main_mup3_pane_g8

0x7e42,	// (0x0004851a) area_vitu2_query_pane_ParamLimits

0x7e42,	// (0x0004851a) area_vitu2_query_pane

0x0f90,	// (0x00041668) input_focus_pane_cp08

0xb67f,	// (0x0004bd57) area_vitu2_query_pane_g1

0x108d,	// (0x00041765) area_vitu2_query_pane_g2

0x0001,

0xf9e2,	// (0x000500ba) area_vitu2_query_pane_g

0x8a09,	// (0x000490e1) area_vitu2_query_pane_t1_ParamLimits

0x8a09,	// (0x000490e1) area_vitu2_query_pane_t1

0x8a1b,	// (0x000490f3) area_vitu2_query_pane_t2_ParamLimits

0x8a1b,	// (0x000490f3) area_vitu2_query_pane_t2

0x109c,	// (0x00041774) area_vitu2_query_pane_t3_ParamLimits

0x109c,	// (0x00041774) area_vitu2_query_pane_t3

0xb68b,	// (0x0004bd63) area_vitu2_query_pane_t4_ParamLimits

0xb68b,	// (0x0004bd63) area_vitu2_query_pane_t4

0xb6b3,	// (0x0004bd8b) area_vitu2_query_pane_t5_ParamLimits

0xb6b3,	// (0x0004bd8b) area_vitu2_query_pane_t5

0xb6db,	// (0x0004bdb3) area_vitu2_query_pane_t6_ParamLimits

0xb6db,	// (0x0004bdb3) area_vitu2_query_pane_t6

0x0006,

0xf9e7,	// (0x000500bf) area_vitu2_query_pane_t_ParamLimits

0xf9e7,	// (0x000500bf) area_vitu2_query_pane_t

0x8a2d,	// (0x00049105) bg_button_pane_cp018

0x8a3a,	// (0x00049112) bg_button_pane_cp021

0x10c4,	// (0x0004179c) bg_button_pane_cp022

0x10d3,	// (0x000417ab) input_focus_pane_cp09

0x3a27,	// (0x000440ff) aid_size_touch_mv_arrow_left

0xe2f5,	// (0x0004e9cd) aid_size_touch_mv_arrow_right

0x83ce,	// (0x00048aa6) main_cset_slider_pane_g16_ParamLimits

0x83ce,	// (0x00048aa6) main_cset_slider_pane_g16

0x83da,	// (0x00048ab2) main_cset_slider_pane_g17_ParamLimits

0x83da,	// (0x00048ab2) main_cset_slider_pane_g17

0x89b2,	// (0x0004908a) cell_cam4_burst_pane_g1_ParamLimits

0xcff9,	// (0x0004d6d1) compa_mode_pane

0x85b3,	// (0x00048c8b) popup_vtel_slider_window_g3_ParamLimits

0x85b3,	// (0x00048c8b) popup_vtel_slider_window_g3

0x85ca,	// (0x00048ca2) popup_vtel_slider_window_g4_ParamLimits

0x85ca,	// (0x00048ca2) popup_vtel_slider_window_g4

0x85e1,	// (0x00048cb9) popup_vtel_slider_window_t1_ParamLimits

0x85e1,	// (0x00048cb9) popup_vtel_slider_window_t1

0xcff9,	// (0x0004d6d1) main_cl_pane

0xac5b,	// (0x0004b333) popup_imed_adjust2_window_ParamLimits

0x4e65,	// (0x0004553d) bg_tb_trans_pane_cp05_ParamLimits

0x6fce,	// (0x000476a6) popup_imed_adjust2_window_g1_ParamLimits

0x6fdd,	// (0x000476b5) popup_imed_adjust2_window_g2_ParamLimits

0x6fdd,	// (0x000476b5) popup_imed_adjust2_window_g2

0x6fe9,	// (0x000476c1) popup_imed_adjust2_window_g3_ParamLimits

0x6fe9,	// (0x000476c1) popup_imed_adjust2_window_g3

0x0002,

0xf75a,	// (0x0004fe32) popup_imed_adjust2_window_g_ParamLimits

0xf75a,	// (0x0004fe32) popup_imed_adjust2_window_g

0x6ff5,	// (0x000476cd) popup_imed_adjust2_window_t1_ParamLimits

0x700d,	// (0x000476e5) slider_imed_adjust_pane_ParamLimits

0x7021,	// (0x000476f9) slider_imed_adjust_pane_g1_ParamLimits

0x7031,	// (0x00047709) slider_imed_adjust_pane_g2_ParamLimits

0x7041,	// (0x00047719) slider_imed_adjust_pane_g3_ParamLimits

0x7052,	// (0x0004772a) slider_imed_adjust_pane_g4_ParamLimits

0xf761,	// (0x0004fe39) slider_imed_adjust_pane_g_ParamLimits

0x7c19,	// (0x000482f1) aid_touch_area_cam4_ParamLimits

0x7c19,	// (0x000482f1) aid_touch_area_cam4

0xb0d0,	// (0x0004b7a8) battery_pane_cp01

0x7cb1,	// (0x00048389) main_camera4_pane_g6_ParamLimits

0x7cb1,	// (0x00048389) main_camera4_pane_g6

0x7cd2,	// (0x000483aa) main_camera4_pane_t2_ParamLimits

0x7cd2,	// (0x000483aa) main_camera4_pane_t2

0x0001,

0xf863,	// (0x0004ff3b) main_camera4_pane_t_ParamLimits

0xf863,	// (0x0004ff3b) main_camera4_pane_t

0x7d00,	// (0x000483d8) aid_touch_area_vid4_ParamLimits

0x7d00,	// (0x000483d8) aid_touch_area_vid4

0x7d42,	// (0x0004841a) main_video4_pane_g5_ParamLimits

0x7d42,	// (0x0004841a) main_video4_pane_g5

0x7d63,	// (0x0004843b) vid4_progress_pane_ParamLimits

0x7d63,	// (0x0004843b) vid4_progress_pane

0xb372,	// (0x0004ba4a) main_cset_slider_pane_g18_ParamLimits

0xb372,	// (0x0004ba4a) main_cset_slider_pane_g18

0xb54f,	// (0x0004bc27) cell_cam4_burst_pane_g2_ParamLimits

0xb54f,	// (0x0004bc27) cell_cam4_burst_pane_g2

0x0001,

0xf9bb,	// (0x00050093) cell_cam4_burst_pane_g_ParamLimits

0xf9bb,	// (0x00050093) cell_cam4_burst_pane_g

0xd841,	// (0x0004df19) bg_cl_pane_ParamLimits

0xd841,	// (0x0004df19) bg_cl_pane

0x8a46,	// (0x0004911e) cl_header_pane_ParamLimits

0x8a46,	// (0x0004911e) cl_header_pane

0x8a5a,	// (0x00049132) cl_listscroll_pane_ParamLimits

0x8a5a,	// (0x00049132) cl_listscroll_pane

0xb727,	// (0x0004bdff) bg_cl_pane_g1

0xb72f,	// (0x0004be07) bg_cl_pane_g2

0xb737,	// (0x0004be0f) bg_cl_pane_g3

0xb73f,	// (0x0004be17) bg_cl_pane_g4

0xb747,	// (0x0004be1f) bg_cl_pane_g5

0xb74f,	// (0x0004be27) bg_cl_pane_g6

0xb757,	// (0x0004be2f) bg_cl_pane_g7

0xb75f,	// (0x0004be37) bg_cl_pane_g8

0xb767,	// (0x0004be3f) bg_cl_pane_g9

0x0008,

0xf9f6,	// (0x000500ce) bg_cl_pane_g

0x8a6a,	// (0x00049142) aid_height_cl_leading_ParamLimits

0x8a6a,	// (0x00049142) aid_height_cl_leading

0x8a76,	// (0x0004914e) aid_height_cl_text_ParamLimits

0x8a76,	// (0x0004914e) aid_height_cl_text

0xefab,	// (0x0004f683) bg_cl_header_pane_ParamLimits

0xefab,	// (0x0004f683) bg_cl_header_pane

0x8a95,	// (0x0004916d) cl_header_pane_g1_ParamLimits

0x8a95,	// (0x0004916d) cl_header_pane_g1

0x8aab,	// (0x00049183) cl_header_pane_t1_ParamLimits

0x8aab,	// (0x00049183) cl_header_pane_t1

0xb76f,	// (0x0004be47) cl_list_pane

0xb778,	// (0x0004be50) hc_scroll_pane_cp01

0xdca9,	// (0x0004e381) bg_cl_header_pane_g1

0xb22b,	// (0x0004b903) bg_cl_header_pane_g2

0xdcc9,	// (0x0004e3a1) bg_cl_header_pane_g3

0xb23b,	// (0x0004b913) bg_cl_header_pane_g4

0xb233,	// (0x0004b90b) bg_cl_header_pane_g5

0xb46a,	// (0x0004bb42) bg_cl_header_pane_g6

0xb253,	// (0x0004b92b) bg_cl_header_pane_g7

0xb25b,	// (0x0004b933) bg_cl_header_pane_g8

0xb24b,	// (0x0004b923) bg_cl_header_pane_g9

0x0008,

0xfa09,	// (0x000500e1) bg_cl_header_pane_g

0x8ac4,	// (0x0004919c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8ac4,	// (0x0004919c) hc_cl_list_double_graphic_heading_pane

0x8ad4,	// (0x000491ac) hc_cl_list_single_graphic_pane_ParamLimits

0x8ad4,	// (0x000491ac) hc_cl_list_single_graphic_pane

0x8ae7,	// (0x000491bf) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8ae7,	// (0x000491bf) hc_cl_list_single_graphic_pane_g1

0x8af3,	// (0x000491cb) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8af3,	// (0x000491cb) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa1c,	// (0x000500f4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa1c,	// (0x000500f4) hc_cl_list_single_graphic_pane_g

0x8b07,	// (0x000491df) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8b07,	// (0x000491df) hc_cl_list_single_graphic_pane_t1

0x8ae7,	// (0x000491bf) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8ae7,	// (0x000491bf) hc_cl_list_double_graphic_heading_pane_g1

0x8b1c,	// (0x000491f4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8b1c,	// (0x000491f4) hc_cl_list_double_graphic_heading_pane_g2

0x8b30,	// (0x00049208) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8b30,	// (0x00049208) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa21,	// (0x000500f9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa21,	// (0x000500f9) hc_cl_list_double_graphic_heading_pane_g

0x8b44,	// (0x0004921c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8b44,	// (0x0004921c) hc_cl_list_double_graphic_heading_pane_t1

0x8b59,	// (0x00049231) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8b59,	// (0x00049231) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa28,	// (0x00050100) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa28,	// (0x00050100) hc_cl_list_double_graphic_heading_pane_t

0xd172,	// (0x0004d84a) vid4_progress_pane_g1

0xd181,	// (0x0004d859) vid4_progress_pane_g2

0xd190,	// (0x0004d868) vid4_progress_pane_g3

0xd19f,	// (0x0004d877) vid4_progress_pane_g4

0x0004,

0xfa2d,	// (0x00050105) vid4_progress_pane_g

0xd1ab,	// (0x0004d883) vid4_progress_pane_t1

0xd1c1,	// (0x0004d899) vid4_progress_pane_t2

0x0002,

0xfa38,	// (0x00050110) vid4_progress_pane_t

0xd1eb,	// (0x0004d8c3) wait_bar_pane_cp07

0x5b7e,	// (0x00046256) blid_firmament_pane_ParamLimits

0x5bbf,	// (0x00046297) popup_blid_sat_info2_window_g1

0x5be3,	// (0x000462bb) popup_blid_sat_info2_window_t3

0x5bf1,	// (0x000462c9) popup_blid_sat_info2_window_t4

0x5bff,	// (0x000462d7) popup_blid_sat_info2_window_t5

0x5c0d,	// (0x000462e5) popup_blid_sat_info2_window_t6

0x5c1d,	// (0x000462f5) popup_blid_sat_info2_window_t7

0x5c2b,	// (0x00046303) popup_blid_sat_info2_window_t8

0x5c39,	// (0x00046311) popup_blid_sat_info2_window_t9

0x5c47,	// (0x0004631f) popup_blid_sat_info2_window_t10

0x5dc7,	// (0x0004649f) aid_firma_cardinal_ParamLimits

0x5ddb,	// (0x000464b3) blid_firmament_pane_t1_ParamLimits

0x5df2,	// (0x000464ca) blid_firmament_pane_t2_ParamLimits

0x5e09,	// (0x000464e1) blid_firmament_pane_t3_ParamLimits

0x5e20,	// (0x000464f8) blid_firmament_pane_t4_ParamLimits

0xf64e,	// (0x0004fd26) blid_firmament_pane_t_ParamLimits

0x5e37,	// (0x0004650f) blid_sat_info_pane_ParamLimits

0xefab,	// (0x0004f683) main_cam_set_pane_ParamLimits

0x6e4d,	// (0x00047525) aid_size_cell_colour_35_ParamLimits

0x6e6d,	// (0x00047545) aid_size_cell_colour_112_ParamLimits

0x6e8d,	// (0x00047565) aid_size_cell_effect_ParamLimits

0x4e65,	// (0x0004553d) bg_tb_trans_pane_cp02_ParamLimits

0xdefb,	// (0x0004e5d3) heading_imed_pane_ParamLimits

0x6ead,	// (0x00047585) listscroll_imed_pane_ParamLimits

0xee40,	// (0x0004f518) popup_call2_audio_first_window_g5_ParamLimits

0xee40,	// (0x0004f518) popup_call2_audio_first_window_g5

0x789f,	// (0x00047f77) aid_size_touch_image3_arrow_left_ParamLimits

0x789f,	// (0x00047f77) aid_size_touch_image3_arrow_left

0x78bf,	// (0x00047f97) aid_size_touch_image3_arrow_right_ParamLimits

0x78bf,	// (0x00047f97) aid_size_touch_image3_arrow_right

0xd1d6,	// (0x0004d8ae) vid4_progress_pane_t3

0x7520,	// (0x00047bf8) main_hwr_training_symbol_option_pane_ParamLimits

0x7520,	// (0x00047bf8) main_hwr_training_symbol_option_pane

0x753c,	// (0x00047c14) popup_hwr_training_preview_window_ParamLimits

0x753c,	// (0x00047c14) popup_hwr_training_preview_window

0x7589,	// (0x00047c61) hwr_training_navi_pane_g5_ParamLimits

0x7589,	// (0x00047c61) hwr_training_navi_pane_g5

0xb207,	// (0x0004b8df) popup_char_count_window

0xefab,	// (0x0004f683) bg_popup_sub_pane_cp20_ParamLimits

0x86ed,	// (0x00048dc5) list_vitu2_match_list_pane_ParamLimits

0x86fc,	// (0x00048dd4) vitu2_page_scroll_pane_ParamLimits

0x86fc,	// (0x00048dd4) vitu2_page_scroll_pane

0xb7b5,	// (0x0004be8d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xb7b5,	// (0x0004be8d) list_single_hwr_training_symbol_option_pane

0xb7c8,	// (0x0004bea0) list_single_hwr_training_symbol_option_pane_g1

0xb7d0,	// (0x0004bea8) list_single_hwr_training_symbol_option_pane_t1

0xb7de,	// (0x0004beb6) bg_button_pane_cp023

0xb7e7,	// (0x0004bebf) bg_button_pane_cp024

0x8b6e,	// (0x00049246) vitu2_page_scroll_pane_g1

0x8b76,	// (0x0004924e) vitu2_page_scroll_pane_g2

0x0001,

0xfa3f,	// (0x00050117) vitu2_page_scroll_pane_g

0x8b7e,	// (0x00049256) vitu2_page_scroll_pane_t1

0x5e70,	// (0x00046548) popup_char_count_window_g1

0xb81a,	// (0x0004bef2) popup_char_count_window_g2

0xb823,	// (0x0004befb) popup_char_count_window_g3

0x0002,

0xfa44,	// (0x0005011c) popup_char_count_window_g

0xb82c,	// (0x0004bf04) popup_char_count_window_t1

0xcff9,	// (0x0004d6d1) main_vded2_pane

0x6fbc,	// (0x00047694) aid_size_cell_imed_line

0x6fc6,	// (0x0004769e) grid_imed_line_width_pane

0xb177,	// (0x0004b84f) vid4_indicators_pane_g4

0xb83a,	// (0x0004bf12) cell_imed_line_width_pane_ParamLimits

0xb83a,	// (0x0004bf12) cell_imed_line_width_pane

0xb84c,	// (0x0004bf24) cell_imed_line_width_pane_g1

0x8b8d,	// (0x00049265) cell_imed_line_width_pane_g2

0x0001,

0xfa4b,	// (0x00050123) cell_imed_line_width_pane_g

0x8b95,	// (0x0004926d) main_vded2_pane_g1_ParamLimits

0x8b95,	// (0x0004926d) main_vded2_pane_g1

0x8bab,	// (0x00049283) main_vded2_pane_g2_ParamLimits

0x8bab,	// (0x00049283) main_vded2_pane_g2

0x0001,

0xfa50,	// (0x00050128) main_vded2_pane_g_ParamLimits

0xfa50,	// (0x00050128) main_vded2_pane_g

0x8bbb,	// (0x00049293) vded2_slider_pane_ParamLimits

0x8bbb,	// (0x00049293) vded2_slider_pane

0x8bce,	// (0x000492a6) aid_size_touch_vded2_end

0x8bd6,	// (0x000492ae) aid_size_touch_vded2_playhead

0x8bde,	// (0x000492b6) aid_size_touch_vded2_start

0x8be6,	// (0x000492be) vded2_slider_bg_pane

0x8bef,	// (0x000492c7) vded2_slider_pane_g1

0x8bf8,	// (0x000492d0) vded2_slider_pane_g2

0x8c00,	// (0x000492d8) vded2_slider_pane_g3

0x0002,

0xfa55,	// (0x0005012d) vded2_slider_pane_g

0x8c09,	// (0x000492e1) vded2_slider_bg_pane_g1

0x8c12,	// (0x000492ea) vded2_slider_bg_pane_g2

0x8c1b,	// (0x000492f3) vded2_slider_bg_pane_g3

0x0002,

0xfa5c,	// (0x00050134) vded2_slider_bg_pane_g

0x3eea,	// (0x000445c2) aid_postcard_touch_down_pane_ParamLimits

0x3eea,	// (0x000445c2) aid_postcard_touch_down_pane

0x3efc,	// (0x000445d4) aid_postcard_touch_up_pane_ParamLimits

0x3efc,	// (0x000445d4) aid_postcard_touch_up_pane

0xcff9,	// (0x0004d6d1) main_blid2_pane

0xac43,	// (0x0004b31b) popup_blid2_search_window

0xcff9,	// (0x0004d6d1) blid2_gps_pane

0xcff9,	// (0x0004d6d1) blid2_navig_pane

0xcff9,	// (0x0004d6d1) blid2_search_pane

0xcff9,	// (0x0004d6d1) blid2_tripm_pane

0x8c24,	// (0x000492fc) blid2_search_pane_g1_ParamLimits

0x8c24,	// (0x000492fc) blid2_search_pane_g1

0x8c38,	// (0x00049310) blid2_search_pane_t1_ParamLimits

0x8c38,	// (0x00049310) blid2_search_pane_t1

0x8c4a,	// (0x00049322) aid_size_cell_blid2_gps_ParamLimits

0x8c4a,	// (0x00049322) aid_size_cell_blid2_gps

0x8c62,	// (0x0004933a) blid2_gps_pane_g1_ParamLimits

0x8c62,	// (0x0004933a) blid2_gps_pane_g1

0x8c76,	// (0x0004934e) grid_blid2_satellite_pane_ParamLimits

0x8c76,	// (0x0004934e) grid_blid2_satellite_pane

0x8c8a,	// (0x00049362) blid2_navig_pane_g1_ParamLimits

0x8c8a,	// (0x00049362) blid2_navig_pane_g1

0x8c96,	// (0x0004936e) blid2_navig_pane_t1_ParamLimits

0x8c96,	// (0x0004936e) blid2_navig_pane_t1

0x8caf,	// (0x00049387) blid2_navig_pane_t2_ParamLimits

0x8caf,	// (0x00049387) blid2_navig_pane_t2

0x0001,

0xfa63,	// (0x0005013b) blid2_navig_pane_t_ParamLimits

0xfa63,	// (0x0005013b) blid2_navig_pane_t

0x8cc8,	// (0x000493a0) blid2_navig_ring_pane_ParamLimits

0x8cc8,	// (0x000493a0) blid2_navig_ring_pane

0x8cdd,	// (0x000493b5) blid2_speed_pane_ParamLimits

0x8cdd,	// (0x000493b5) blid2_speed_pane

0x8ce9,	// (0x000493c1) blid2_tripm_pane_g1_ParamLimits

0x8ce9,	// (0x000493c1) blid2_tripm_pane_g1

0x8cfe,	// (0x000493d6) blid2_tripm_pane_g2_ParamLimits

0x8cfe,	// (0x000493d6) blid2_tripm_pane_g2

0x8d12,	// (0x000493ea) blid2_tripm_pane_g3_ParamLimits

0x8d12,	// (0x000493ea) blid2_tripm_pane_g3

0x8d26,	// (0x000493fe) blid2_tripm_pane_g4_ParamLimits

0x8d26,	// (0x000493fe) blid2_tripm_pane_g4

0x8d3a,	// (0x00049412) blid2_tripm_pane_g5_ParamLimits

0x8d3a,	// (0x00049412) blid2_tripm_pane_g5

0x0005,

0xfa68,	// (0x00050140) blid2_tripm_pane_g_ParamLimits

0xfa68,	// (0x00050140) blid2_tripm_pane_g

0x8d5c,	// (0x00049434) blid2_tripm_pane_t1_ParamLimits

0x8d5c,	// (0x00049434) blid2_tripm_pane_t1

0x8d73,	// (0x0004944b) blid2_tripm_pane_t2_ParamLimits

0x8d73,	// (0x0004944b) blid2_tripm_pane_t2

0x8d8a,	// (0x00049462) blid2_tripm_pane_t3_ParamLimits

0x8d8a,	// (0x00049462) blid2_tripm_pane_t3

0x0003,

0xfa75,	// (0x0005014d) blid2_tripm_pane_t_ParamLimits

0xfa75,	// (0x0005014d) blid2_tripm_pane_t

0x8dcd,	// (0x000494a5) cell_blid2_satellite_pane_ParamLimits

0x8dcd,	// (0x000494a5) cell_blid2_satellite_pane

0x8de5,	// (0x000494bd) cell_blid2_satellite_pane_g1

0xb855,	// (0x0004bf2d) cell_blid2_satellite_pane_t1

0x5e47,	// (0x0004651f) blid2_speed_pane_g1

0xb863,	// (0x0004bf3b) blid2_speed_pane_t1

0xb871,	// (0x0004bf49) blid2_speed_pane_t2

0x0001,

0xfa7e,	// (0x00050156) blid2_speed_pane_t

0x5e47,	// (0x0004651f) blid2_navig_ring_pane_g1

0x8dee,	// (0x000494c6) blid2_navig_ring_pane_g2

0x8df6,	// (0x000494ce) blid2_navig_ring_pane_g3

0x8dfe,	// (0x000494d6) blid2_navig_ring_pane_g4

0x8e06,	// (0x000494de) blid2_navig_ring_pane_g5

0x0004,

0xfa83,	// (0x0005015b) blid2_navig_ring_pane_g

0xcff9,	// (0x0004d6d1) bg_popup_window_pane_cp011

0xb87f,	// (0x0004bf57) popup_blid2_search_window_g1

0xb887,	// (0x0004bf5f) popup_blid2_search_window_t1

0xb895,	// (0x0004bf6d) popup_blid2_search_window_t2

0x0001,

0xfa8e,	// (0x00050166) popup_blid2_search_window_t

0xdbb8,	// (0x0004e290) main_browser_pane_g1

0xd841,	// (0x0004df19) main_browser_pane_ParamLimits

0xefab,	// (0x0004f683) bg_button_pane_cp011_ParamLimits

0x7ff6,	// (0x000486ce) cell_vitu2_function_pane_g1_ParamLimits

0x4e65,	// (0x0004553d) bg_popup_sub_pane_cp22_ParamLimits

0x0f90,	// (0x00041668) input_focus_pane_cp08_ParamLimits

0x8860,	// (0x00048f38) popup_vitu2_query_button_pane_ParamLimits

0x8860,	// (0x00048f38) popup_vitu2_query_button_pane

0x0fa7,	// (0x0004167f) popup_vitu2_query_input_button_pane

0xb4a5,	// (0x0004bb7d) popup_vitu2_query_window_g1_ParamLimits

0x0faf,	// (0x00041687) popup_vitu2_query_window_g2_ParamLimits

0xf98f,	// (0x00050067) popup_vitu2_query_window_g_ParamLimits

0xcff9,	// (0x0004d6d1) bg_button_pane_cp026

0x8e0e,	// (0x000494e6) popup_vitu2_query_input_button_pane_g1

0xcff9,	// (0x0004d6d1) bg_button_pane_cp025

0xb8a3,	// (0x0004bf7b) popup_vitu2_query_button_pane_t1

0x618b,	// (0x00046863) main_mp3_pane_t6

0x61a1,	// (0x00046879) popup_slider_window_cp01

0xb0fc,	// (0x0004b7d4) cam4_battery_pane

0xb0fc,	// (0x0004b7d4) cam4_battery_pane_cp02

0xb0fc,	// (0x0004b7d4) cam4_battery_pane_cp01

0xb0fc,	// (0x0004b7d4) cam4_battery_pane_cp03

0x5e47,	// (0x0004651f) cam4_battery_pane_g1

0x8e16,	// (0x000494ee) cam4_battery_pane_g2

0x0001,

0xfa93,	// (0x0005016b) cam4_battery_pane_g

0x5c55,	// (0x0004632d) popup_blid_sat_info2_window_t11

0x3a27,	// (0x000440ff) aid_size_touch_mv_arrow_left_ParamLimits

0xe2f5,	// (0x0004e9cd) aid_size_touch_mv_arrow_right_ParamLimits

0xe34e,	// (0x0004ea26) navi_pane_g1_ParamLimits

0xe35a,	// (0x0004ea32) navi_pane_g2_ParamLimits

0x3a4b,	// (0x00044123) navi_pane_g3_ParamLimits

0xf3af,	// (0x0004fa87) navi_pane_g_ParamLimits

0x3a68,	// (0x00044140) navi_pane_mv_t1_ParamLimits

0x6ee2,	// (0x000475ba) grid_imed_effect_pane_ParamLimits

0x28f0,	// (0x00042fc8) aid_placing_vt_slider_lsc

0xdadf,	// (0x0004e1b7) aid_placing_vt_slider_prt

0xefab,	// (0x0004f683) bg_tb_trans_pane_cp01_ParamLimits

0x5ffd,	// (0x000466d5) popup_image_details_window_g1_ParamLimits

0x6010,	// (0x000466e8) popup_image_details_window_g2_ParamLimits

0x6025,	// (0x000466fd) popup_image_details_window_g3_ParamLimits

0x6025,	// (0x000466fd) popup_image_details_window_g3

0xf693,	// (0x0004fd6b) popup_image_details_window_g_ParamLimits

0x6039,	// (0x00046711) popup_image_details_window_t1_ParamLimits

0x604b,	// (0x00046723) popup_image_details_window_t2_ParamLimits

0x6064,	// (0x0004673c) popup_image_details_window_t3_ParamLimits

0x6078,	// (0x00046750) popup_image_details_window_t4_ParamLimits

0x6093,	// (0x0004676b) popup_image_details_window_t5_ParamLimits

0xf69a,	// (0x0004fd72) popup_image_details_window_t_ParamLimits

0x8a82,	// (0x0004915a) cl_header_name_pane_ParamLimits

0x8a82,	// (0x0004915a) cl_header_name_pane

0x8e20,	// (0x000494f8) cl_header_name_pane_t1_ParamLimits

0x8e20,	// (0x000494f8) cl_header_name_pane_t1

0x8e41,	// (0x00049519) cl_header_name_pane_t2_ParamLimits

0x8e41,	// (0x00049519) cl_header_name_pane_t2

0x8e83,	// (0x0004955b) cl_header_name_pane_t3_ParamLimits

0x8e83,	// (0x0004955b) cl_header_name_pane_t3

0x0002,

0xfa98,	// (0x00050170) cl_header_name_pane_t_ParamLimits

0xfa98,	// (0x00050170) cl_header_name_pane_t

0xe3e7,	// (0x0004eabf) navi_pane_mv_g2_ParamLimits

0xb1c4,	// (0x0004b89c) field_vitu2_entry_pane_g1_ParamLimits

0xb1d0,	// (0x0004b8a8) field_vitu2_entry_pane_g2_ParamLimits

0xb1dc,	// (0x0004b8b4) field_vitu2_entry_pane_g3_ParamLimits

0xb1dc,	// (0x0004b8b4) field_vitu2_entry_pane_g3

0xf895,	// (0x0004ff6d) field_vitu2_entry_pane_g_ParamLimits

0xb20f,	// (0x0004b8e7) cell_vitu2_itu_pane_g1_ParamLimits

0x7f8a,	// (0x00048662) cell_vitu2_itu_pane_g2_ParamLimits

0x7f8a,	// (0x00048662) cell_vitu2_itu_pane_g2

0x0001,

0xf8a1,	// (0x0004ff79) cell_vitu2_itu_pane_g_ParamLimits

0xf8a1,	// (0x0004ff79) cell_vitu2_itu_pane_g

0xefab,	// (0x0004f683) bg_vkb2_func_pane_cp05_ParamLimits

0xefab,	// (0x0004f683) bg_vkb2_func_pane_cp05

0xefab,	// (0x0004f683) bg_vkb2_func_pane_cp03

0xefab,	// (0x0004f683) bg_vkb2_func_pane_cp04

0xefab,	// (0x0004f683) bg_vkb2_func_pane_cp10_ParamLimits

0xefab,	// (0x0004f683) bg_vkb2_func_pane_cp10

0x10c4,	// (0x0004179c) bg_vkb2_func_pane_cp08

0x8a2d,	// (0x00049105) bg_vkb2_func_pane_cp06

0x8a3a,	// (0x00049112) bg_vkb2_func_pane_cp07

0xb7f0,	// (0x0004bec8) bg_vkb2_func_pane_cp11_ParamLimits

0xb7f0,	// (0x0004bec8) bg_vkb2_func_pane_cp11

0xb805,	// (0x0004bedd) bg_vkb2_func_pane_cp12_ParamLimits

0xb805,	// (0x0004bedd) bg_vkb2_func_pane_cp12

0xcff9,	// (0x0004d6d1) bg_vkb2_func_pane_cp09

0xb22b,	// (0x0004b903) bg_vkb2_func_pane_g1

0xdcc9,	// (0x0004e3a1) bg_vkb2_func_pane_g2

0xb233,	// (0x0004b90b) bg_vkb2_func_pane_g3

0xb23b,	// (0x0004b913) bg_vkb2_func_pane_g4

0xb46a,	// (0x0004bb42) bg_vkb2_func_pane_g5

0xb253,	// (0x0004b92b) bg_vkb2_func_pane_g6

0xb25b,	// (0x0004b933) bg_vkb2_func_pane_g7

0xb24b,	// (0x0004b923) bg_vkb2_func_pane_g8

0xdca9,	// (0x0004e381) bg_vkb2_func_pane_g9

0x0008,

0xfa9f,	// (0x00050177) bg_vkb2_func_pane_g

0x8d4c,	// (0x00049424) blid2_tripm_pane_g6_ParamLimits

0x8d4c,	// (0x00049424) blid2_tripm_pane_g6

0x7738,	// (0x00047e10) mp4_progress_pane_g1

0x8dbb,	// (0x00049493) blid2_tripm_values_pane_ParamLimits

0x8dbb,	// (0x00049493) blid2_tripm_values_pane

0x8eb4,	// (0x0004958c) blid2_tripm_values_pane_t1

0x8ec2,	// (0x0004959a) blid2_tripm_values_pane_t2

0x8ed0,	// (0x000495a8) blid2_tripm_values_pane_t3

0x8ede,	// (0x000495b6) blid2_tripm_values_pane_t4

0x8eec,	// (0x000495c4) blid2_tripm_values_pane_t5

0x8efa,	// (0x000495d2) blid2_tripm_values_pane_t6

0x8f08,	// (0x000495e0) blid2_tripm_values_pane_t7

0x8f16,	// (0x000495ee) blid2_tripm_values_pane_t8

0x8f24,	// (0x000495fc) blid2_tripm_values_pane_t9

0x0008,

0xfab2,	// (0x0005018a) blid2_tripm_values_pane_t

0x292a,	// (0x00043002) call_video_pane_t1_ParamLimits

0x2944,	// (0x0004301c) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0004f942) call_video_pane_t_ParamLimits

0x0d98,	// (0x00041470) msg_header_pane_g1_ParamLimits

0xe5b9,	// (0x0004ec91) msg_header_pane_g2_ParamLimits

0xe5b9,	// (0x0004ec91) msg_header_pane_g2

0x0001,

0xf42c,	// (0x0004fb04) msg_header_pane_g_ParamLimits

0xf42c,	// (0x0004fb04) msg_header_pane_g

0xd841,	// (0x0004df19) main_clock2_pane_ParamLimits

0x6b6b,	// (0x00047243) grid_clock2_toolbar_pane_ParamLimits

0x6b6b,	// (0x00047243) grid_clock2_toolbar_pane

0x6b6b,	// (0x00047243) listscroll_clock2_pane_ParamLimits

0x6b6b,	// (0x00047243) listscroll_clock2_pane

0x6c7e,	// (0x00047356) main_clock2_pane_t3_ParamLimits

0x6c7e,	// (0x00047356) main_clock2_pane_t3

0x6ca0,	// (0x00047378) main_clock2_pane_t4_ParamLimits

0x6ca0,	// (0x00047378) main_clock2_pane_t4

0xb8b1,	// (0x0004bf89) cell_clock2_toolbar_pane

0xb8b9,	// (0x0004bf91) cell_clock2_toolbar_pane_cp01

0xb8b9,	// (0x0004bf91) cell_clock2_toolbar_pane_cp02

0xb8c1,	// (0x0004bf99) cell_clock2_toolbar_pane_cp03

0xb8c9,	// (0x0004bfa1) list_clock2_pane

0xb8d1,	// (0x0004bfa9) scroll_pane_cp10

0xb8d9,	// (0x0004bfb1) list_single_clock2_pane_ParamLimits

0xb8d9,	// (0x0004bfb1) list_single_clock2_pane

0xda10,	// (0x0004e0e8) list_highlight_pane_cp08

0xb8e6,	// (0x0004bfbe) list_single_clock2_pane_t1

0xb8f4,	// (0x0004bfcc) list_single_clock2_pane_t2

0x0001,

0xfac5,	// (0x0005019d) list_single_clock2_pane_t

0xcff9,	// (0x0004d6d1) bg_button_pane_cp10

0xb902,	// (0x0004bfda) cell_clock2_toolbar_pane_g1

0x3e7e,	// (0x00044556) aid_main_viewer_pane_g1_ParamLimits

0x3e7e,	// (0x00044556) aid_main_viewer_pane_g1

0x3e8a,	// (0x00044562) aid_main_viewer_pane_g2_ParamLimits

0x3e8a,	// (0x00044562) aid_main_viewer_pane_g2

0x3e96,	// (0x0004456e) aid_main_viewer_pane_g3_ParamLimits

0x3e96,	// (0x0004456e) aid_main_viewer_pane_g3

0x3ea5,	// (0x0004457d) aid_main_viewer_pane_g4_ParamLimits

0x3ea5,	// (0x0004457d) aid_main_viewer_pane_g4

0x0003,

0xf43d,	// (0x0004fb15) aid_main_viewer_pane_g_ParamLimits

0xf43d,	// (0x0004fb15) aid_main_viewer_pane_g

0xefab,	// (0x0004f683) main_calc_pane_ParamLimits

0x4e73,	// (0x0004554b) main_dialer2_pane_ParamLimits

0xcff9,	// (0x0004d6d1) main_cam6_pane

0xcff9,	// (0x0004d6d1) main_vid6_pane

0x6b77,	// (0x0004724f) listscroll_gen_pane_cp06_ParamLimits

0x6b77,	// (0x0004724f) listscroll_gen_pane_cp06

0x6cc1,	// (0x00047399) main_clock2_pane_t5_ParamLimits

0x6cc1,	// (0x00047399) main_clock2_pane_t5

0x6d19,	// (0x000473f1) aid_call2_pane_cp10_ParamLimits

0x6d2b,	// (0x00047403) aid_call_pane_cp10_ParamLimits

0xe2e9,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe2e9,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6d3d,	// (0x00047415) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6d3d,	// (0x00047415) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe2e9,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf74f,	// (0x0004fe27) popup_clock_analogue_window_cp10_g_ParamLimits

0x6d4f,	// (0x00047427) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7850,	// (0x00047f28) cell_dialer2_keypad_pane_g2_ParamLimits

0x7850,	// (0x00047f28) cell_dialer2_keypad_pane_g2

0x0001,

0xf834,	// (0x0004ff0c) cell_dialer2_keypad_pane_g_ParamLimits

0xf834,	// (0x0004ff0c) cell_dialer2_keypad_pane_g

0x7868,	// (0x00047f40) cell_dialer2_keypad_pane_t1

0x82c1,	// (0x00048999) main_cset_text2_pane_ParamLimits

0x82c1,	// (0x00048999) main_cset_text2_pane

0xb67f,	// (0x0004bd57) area_vitu2_query_pane_g1_ParamLimits

0x108d,	// (0x00041765) area_vitu2_query_pane_g2_ParamLimits

0xf9e2,	// (0x000500ba) area_vitu2_query_pane_g_ParamLimits

0xb703,	// (0x0004bddb) area_vitu2_query_pane_t7_ParamLimits

0xb703,	// (0x0004bddb) area_vitu2_query_pane_t7

0x8a2d,	// (0x00049105) bg_button_pane_cp018_ParamLimits

0x8a3a,	// (0x00049112) bg_button_pane_cp021_ParamLimits

0x10c4,	// (0x0004179c) bg_button_pane_cp022_ParamLimits

0x10c4,	// (0x0004179c) bg_vkb2_func_pane_cp08_ParamLimits

0x8a2d,	// (0x00049105) bg_vkb2_func_pane_cp06_ParamLimits

0x8a3a,	// (0x00049112) bg_vkb2_func_pane_cp07_ParamLimits

0x10d3,	// (0x000417ab) input_focus_pane_cp09_ParamLimits

0xd1fb,	// (0x0004d8d3) cam6_autofocus_pane_ParamLimits

0xd1fb,	// (0x0004d8d3) cam6_autofocus_pane

0x8f32,	// (0x0004960a) cam6_image_uncrop_pane_ParamLimits

0x8f32,	// (0x0004960a) cam6_image_uncrop_pane

0x8f3f,	// (0x00049617) cam6_indi_pane_ParamLimits

0x8f3f,	// (0x00049617) cam6_indi_pane

0x8f55,	// (0x0004962d) cam6_mode_pane_ParamLimits

0x8f55,	// (0x0004962d) cam6_mode_pane

0x8f67,	// (0x0004963f) cam6_timer_pane_ParamLimits

0x8f67,	// (0x0004963f) cam6_timer_pane

0x8f73,	// (0x0004964b) cam6_zoom_pane_ParamLimits

0x8f73,	// (0x0004964b) cam6_zoom_pane

0x8f7f,	// (0x00049657) cam6_mode_pane_g1_ParamLimits

0x8f7f,	// (0x00049657) cam6_mode_pane_g1

0x8f8f,	// (0x00049667) cam6_mode_pane_g2_ParamLimits

0x8f8f,	// (0x00049667) cam6_mode_pane_g2

0x8f9f,	// (0x00049677) cam6_mode_pane_g3_ParamLimits

0x8f9f,	// (0x00049677) cam6_mode_pane_g3

0x8faf,	// (0x00049687) cam6_mode_pane_g4_ParamLimits

0x8faf,	// (0x00049687) cam6_mode_pane_g4

0x0003,

0xfaca,	// (0x000501a2) cam6_mode_pane_g_ParamLimits

0xfaca,	// (0x000501a2) cam6_mode_pane_g

0xb90a,	// (0x0004bfe2) bg_tb_trans_pane_cp08_ParamLimits

0xb90a,	// (0x0004bfe2) bg_tb_trans_pane_cp08

0xb918,	// (0x0004bff0) cam6_battery_pane_ParamLimits

0xb918,	// (0x0004bff0) cam6_battery_pane

0xb92e,	// (0x0004c006) cam6_indi_pane_g1_ParamLimits

0xb92e,	// (0x0004c006) cam6_indi_pane_g1

0xb940,	// (0x0004c018) cam6_indi_pane_g2_ParamLimits

0xb940,	// (0x0004c018) cam6_indi_pane_g2

0xb952,	// (0x0004c02a) cam6_indi_pane_g3_ParamLimits

0xb952,	// (0x0004c02a) cam6_indi_pane_g3

0x0002,

0xfad3,	// (0x000501ab) cam6_indi_pane_g_ParamLimits

0xfad3,	// (0x000501ab) cam6_indi_pane_g

0xb964,	// (0x0004c03c) cam6_indi_pane_t1_ParamLimits

0xb964,	// (0x0004c03c) cam6_indi_pane_t1

0x7dbd,	// (0x00048495) cam6_autofocus_pane_g1

0x7dc5,	// (0x0004849d) cam6_autofocus_pane_g2

0x7dcd,	// (0x000484a5) cam6_autofocus_pane_g3

0x7dd5,	// (0x000484ad) cam6_autofocus_pane_g4

0x0003,

0xfada,	// (0x000501b2) cam6_autofocus_pane_g

0xb98a,	// (0x0004c062) cam6_timer_pane_g1

0xb992,	// (0x0004c06a) cam6_timer_pane_t1

0xb9a0,	// (0x0004c078) cam6_zoom_cont_pane

0xb9a8,	// (0x0004c080) cam6_zoom_pane_g1

0xb9b0,	// (0x0004c088) cam6_zoom_pane_g2

0x8fbf,	// (0x00049697) cam6_zoom_pane_g3

0x0002,

0xfae3,	// (0x000501bb) cam6_zoom_pane_g

0x5e47,	// (0x0004651f) cam6_battery_pane_g1

0x5e47,	// (0x0004651f) cam6_battery_pane_g2

0x0001,

0xf657,	// (0x0004fd2f) cam6_battery_pane_g

0xb9b8,	// (0x0004c090) cam6_zoom_cont_pane_g1

0xb9c1,	// (0x0004c099) cam6_zoom_cont_pane_g2

0xb9ca,	// (0x0004c0a2) cam6_zoom_cont_pane_g3

0x0002,

0xfaea,	// (0x000501c2) cam6_zoom_cont_pane_g

0x8fdc,	// (0x000496b4) cam6_mode_pane_cp_ParamLimits

0x8fdc,	// (0x000496b4) cam6_mode_pane_cp

0x8f73,	// (0x0004964b) cam6_zoom_pane_cp_ParamLimits

0x8f73,	// (0x0004964b) cam6_zoom_pane_cp

0x8fee,	// (0x000496c6) vid6_image_uncrop_cif_pane_ParamLimits

0x8fee,	// (0x000496c6) vid6_image_uncrop_cif_pane

0x8ffc,	// (0x000496d4) vid6_image_uncrop_nhd_pane_ParamLimits

0x8ffc,	// (0x000496d4) vid6_image_uncrop_nhd_pane

0x8f32,	// (0x0004960a) vid6_image_uncrop_vga_pane_ParamLimits

0x8f32,	// (0x0004960a) vid6_image_uncrop_vga_pane

0x9009,	// (0x000496e1) vid6_image_uncrop_wvga_pane_ParamLimits

0x9009,	// (0x000496e1) vid6_image_uncrop_wvga_pane

0x9016,	// (0x000496ee) vid6_indi_pane_ParamLimits

0x9016,	// (0x000496ee) vid6_indi_pane

0xb90a,	// (0x0004bfe2) bg_tb_trans_pane_cp09_ParamLimits

0xb90a,	// (0x0004bfe2) bg_tb_trans_pane_cp09

0xb9de,	// (0x0004c0b6) cam6_battery_pane_cp_ParamLimits

0xb9de,	// (0x0004c0b6) cam6_battery_pane_cp

0xb9ea,	// (0x0004c0c2) vid6_indi_pane_g1_ParamLimits

0xb9ea,	// (0x0004c0c2) vid6_indi_pane_g1

0xb9fc,	// (0x0004c0d4) vid6_indi_pane_g2_ParamLimits

0xb9fc,	// (0x0004c0d4) vid6_indi_pane_g2

0xba0e,	// (0x0004c0e6) vid6_indi_pane_g3_ParamLimits

0xba0e,	// (0x0004c0e6) vid6_indi_pane_g3

0xba23,	// (0x0004c0fb) vid6_indi_pane_g4_ParamLimits

0xba23,	// (0x0004c0fb) vid6_indi_pane_g4

0xba38,	// (0x0004c110) vid6_indi_pane_g5_ParamLimits

0xba38,	// (0x0004c110) vid6_indi_pane_g5

0x0004,

0xfaf1,	// (0x000501c9) vid6_indi_pane_g_ParamLimits

0xfaf1,	// (0x000501c9) vid6_indi_pane_g

0xba52,	// (0x0004c12a) vid6_indi_pane_t1_ParamLimits

0xba52,	// (0x0004c12a) vid6_indi_pane_t1

0xba68,	// (0x0004c140) vid6_indi_pane_t2_ParamLimits

0xba68,	// (0x0004c140) vid6_indi_pane_t2

0xba90,	// (0x0004c168) vid6_indi_pane_t3_ParamLimits

0xba90,	// (0x0004c168) vid6_indi_pane_t3

0xbab8,	// (0x0004c190) vid6_indi_pane_t4_ParamLimits

0xbab8,	// (0x0004c190) vid6_indi_pane_t4

0x0003,

0xfafc,	// (0x000501d4) vid6_indi_pane_t_ParamLimits

0xfafc,	// (0x000501d4) vid6_indi_pane_t

0xbadc,	// (0x0004c1b4) wait_bar_pane_cp08

0x902d,	// (0x00049705) main_cset_text2_pane_t1_ParamLimits

0x902d,	// (0x00049705) main_cset_text2_pane_t1

0x8fc7,	// (0x0004969f) listscroll_gen_pane_cp06_t1_ParamLimits

0x8fc7,	// (0x0004969f) listscroll_gen_pane_cp06_t1

0xcff9,	// (0x0004d6d1) main_cam6_set_pane

0x6112,	// (0x000467ea) bg_tb_trans_pane_cp06_ParamLimits

0xb104,	// (0x0004b7dc) cam4_indicators_pane_g1_ParamLimits

0xb114,	// (0x0004b7ec) cam4_indicators_pane_g2_ParamLimits

0xf871,	// (0x0004ff49) cam4_indicators_pane_g_ParamLimits

0xb134,	// (0x0004b80c) cam4_indicators_pane_t1_ParamLimits

0xefab,	// (0x0004f683) bg_tb_trans_pane_cp07_ParamLimits

0xb104,	// (0x0004b7dc) vid4_indicators_pane_g1_ParamLimits

0xb156,	// (0x0004b82e) vid4_indicators_pane_g2_ParamLimits

0xb166,	// (0x0004b83e) vid4_indicators_pane_g3_ParamLimits

0xb177,	// (0x0004b84f) vid4_indicators_pane_g4_ParamLimits

0xf883,	// (0x0004ff5b) vid4_indicators_pane_g_ParamLimits

0xb193,	// (0x0004b86b) vid4_indicators_pane_t1_ParamLimits

0xd172,	// (0x0004d84a) vid4_progress_pane_g1_ParamLimits

0xd181,	// (0x0004d859) vid4_progress_pane_g2_ParamLimits

0xd190,	// (0x0004d868) vid4_progress_pane_g3_ParamLimits

0xd19f,	// (0x0004d877) vid4_progress_pane_g4_ParamLimits

0xfa2d,	// (0x00050105) vid4_progress_pane_g_ParamLimits

0xd1ab,	// (0x0004d883) vid4_progress_pane_t1_ParamLimits

0xd1c1,	// (0x0004d899) vid4_progress_pane_t2_ParamLimits

0xd1d6,	// (0x0004d8ae) vid4_progress_pane_t3_ParamLimits

0xfa38,	// (0x00050110) vid4_progress_pane_t_ParamLimits

0xd1eb,	// (0x0004d8c3) wait_bar_pane_cp07_ParamLimits

0x9048,	// (0x00049720) main_cam6_set_pane_g2_ParamLimits

0x9048,	// (0x00049720) main_cam6_set_pane_g2

0x906a,	// (0x00049742) main_cset6_listscroll_pane_ParamLimits

0x906a,	// (0x00049742) main_cset6_listscroll_pane

0x9084,	// (0x0004975c) main_cset6_slider_pane_ParamLimits

0x9084,	// (0x0004975c) main_cset6_slider_pane

0x909a,	// (0x00049772) main_cset6_text2_pane_ParamLimits

0x909a,	// (0x00049772) main_cset6_text2_pane

0xbaec,	// (0x0004c1c4) main_cset6_text_pane

0xb335,	// (0x0004ba0d) main_cset_list_pane_copy1_ParamLimits

0xb335,	// (0x0004ba0d) main_cset_list_pane_copy1

0xb345,	// (0x0004ba1d) scroll_pane_cp028_copy1

0x90a8,	// (0x00049780) cset_list_set_pane_copy1

0x90ba,	// (0x00049792) aid_position_infowindow_above_copy1

0x90c2,	// (0x0004979a) aid_position_infowindow_below_copy1

0x10f6,	// (0x000417ce) cset_list_set_pane_g1_copy1

0x10fe,	// (0x000417d6) cset_list_set_pane_g3_copy1_ParamLimits

0x10fe,	// (0x000417d6) cset_list_set_pane_g3_copy1

0x110d,	// (0x000417e5) cset_list_set_pane_t1_copy1_ParamLimits

0x110d,	// (0x000417e5) cset_list_set_pane_t1_copy1

0xefab,	// (0x0004f683) list_highlight_pane_cp021_copy1_ParamLimits

0xefab,	// (0x0004f683) list_highlight_pane_cp021_copy1

0xbaf4,	// (0x0004c1cc) cset6_slider_pane_ParamLimits

0xbaf4,	// (0x0004c1cc) cset6_slider_pane

0xbb20,	// (0x0004c1f8) main_cset6_slider_pane_g1_ParamLimits

0xbb20,	// (0x0004c1f8) main_cset6_slider_pane_g1

0x90ca,	// (0x000497a2) main_cset6_slider_pane_g2_ParamLimits

0x90ca,	// (0x000497a2) main_cset6_slider_pane_g2

0xb35a,	// (0x0004ba32) main_cset6_slider_pane_g3_ParamLimits

0xb35a,	// (0x0004ba32) main_cset6_slider_pane_g3

0x8386,	// (0x00048a5e) main_cset6_slider_pane_g4_ParamLimits

0x8386,	// (0x00048a5e) main_cset6_slider_pane_g4

0x83ce,	// (0x00048aa6) main_cset6_slider_pane_g5_ParamLimits

0x83ce,	// (0x00048aa6) main_cset6_slider_pane_g5

0xb35a,	// (0x0004ba32) main_cset6_slider_pane_g7_ParamLimits

0xb35a,	// (0x0004ba32) main_cset6_slider_pane_g7

0xb366,	// (0x0004ba3e) main_cset6_slider_pane_g8_ParamLimits

0xb366,	// (0x0004ba3e) main_cset6_slider_pane_g8

0x836e,	// (0x00048a46) main_cset6_slider_pane_g9_ParamLimits

0x836e,	// (0x00048a46) main_cset6_slider_pane_g9

0x837a,	// (0x00048a52) main_cset6_slider_pane_g10_ParamLimits

0x837a,	// (0x00048a52) main_cset6_slider_pane_g10

0x8386,	// (0x00048a5e) main_cset6_slider_pane_g11_ParamLimits

0x8386,	// (0x00048a5e) main_cset6_slider_pane_g11

0x8392,	// (0x00048a6a) main_cset6_slider_pane_g12_ParamLimits

0x8392,	// (0x00048a6a) main_cset6_slider_pane_g12

0x839e,	// (0x00048a76) main_cset6_slider_pane_g13_ParamLimits

0x839e,	// (0x00048a76) main_cset6_slider_pane_g13

0x83aa,	// (0x00048a82) main_cset6_slider_pane_g14_ParamLimits

0x83aa,	// (0x00048a82) main_cset6_slider_pane_g14

0x90f2,	// (0x000497ca) main_cset6_slider_pane_g15_ParamLimits

0x90f2,	// (0x000497ca) main_cset6_slider_pane_g15

0x83ce,	// (0x00048aa6) main_cset6_slider_pane_g16_ParamLimits

0x83ce,	// (0x00048aa6) main_cset6_slider_pane_g16

0x83da,	// (0x00048ab2) main_cset6_slider_pane_g17_ParamLimits

0x83da,	// (0x00048ab2) main_cset6_slider_pane_g17

0x0011,

0xfb05,	// (0x000501dd) main_cset6_slider_pane_g_ParamLimits

0xfb05,	// (0x000501dd) main_cset6_slider_pane_g

0xbb48,	// (0x0004c220) main_cset6_slider_pane_t1_ParamLimits

0xbb48,	// (0x0004c220) main_cset6_slider_pane_t1

0xbb89,	// (0x0004c261) main_cset6_slider_pane_t2_ParamLimits

0xbb89,	// (0x0004c261) main_cset6_slider_pane_t2

0xbbb4,	// (0x0004c28c) main_cset6_slider_pane_t3_ParamLimits

0xbbb4,	// (0x0004c28c) main_cset6_slider_pane_t3

0x910a,	// (0x000497e2) main_cset6_slider_pane_t4_ParamLimits

0x910a,	// (0x000497e2) main_cset6_slider_pane_t4

0x9135,	// (0x0004980d) main_cset6_slider_pane_t5_ParamLimits

0x9135,	// (0x0004980d) main_cset6_slider_pane_t5

0xbbdf,	// (0x0004c2b7) main_cset6_slider_pane_t7_ParamLimits

0xbbdf,	// (0x0004c2b7) main_cset6_slider_pane_t7

0x9160,	// (0x00049838) main_cset6_slider_pane_t8_ParamLimits

0x9160,	// (0x00049838) main_cset6_slider_pane_t8

0x9184,	// (0x0004985c) main_cset6_slider_pane_t9_ParamLimits

0x9184,	// (0x0004985c) main_cset6_slider_pane_t9

0x91a8,	// (0x00049880) main_cset6_slider_pane_t10_ParamLimits

0x91a8,	// (0x00049880) main_cset6_slider_pane_t10

0x91cc,	// (0x000498a4) main_cset6_slider_pane_t11_ParamLimits

0x91cc,	// (0x000498a4) main_cset6_slider_pane_t11

0xbc15,	// (0x0004c2ed) main_cset6_slider_pane_t14_ParamLimits

0xbc15,	// (0x0004c2ed) main_cset6_slider_pane_t14

0xbc4e,	// (0x0004c326) main_cset6_slider_pane_t15_ParamLimits

0xbc4e,	// (0x0004c326) main_cset6_slider_pane_t15

0x000b,

0xfb2a,	// (0x00050202) main_cset6_slider_pane_t_ParamLimits

0xfb2a,	// (0x00050202) main_cset6_slider_pane_t

0xb41e,	// (0x0004baf6) cset_slider_pane_g1_copy1

0xb427,	// (0x0004baff) cset_slider_pane_g2_copy1

0xb430,	// (0x0004bb08) cset_slider_pane_g3_copy1

0xcff9,	// (0x0004d6d1) bg_popup_sub_pane_cp011_copy1

0xb4b1,	// (0x0004bb89) main_cset_text_pane_g1_copy1

0xb4b9,	// (0x0004bb91) main_cset_text_pane_t1_copy1

0xb4c7,	// (0x0004bb9f) main_cset_text_pane_t2_copy1

0xb4d5,	// (0x0004bbad) main_cset_text_pane_t3_copy1

0xb4e3,	// (0x0004bbbb) main_cset_text_pane_t4_copy1

0xb4f1,	// (0x0004bbc9) main_cset_text_pane_t5_copy1

0xb4ff,	// (0x0004bbd7) main_cset_text_pane_t6_copy1

0xb50d,	// (0x0004bbe5) main_cset_text_pane_t7_copy1

0x91f0,	// (0x000498c8) main_cset_text2_pane_t1_copy1

0xefab,	// (0x0004f683) main_ncimui_pane

0x508b,	// (0x00045763) popup_query_ncimui_window_ParamLimits

0x508b,	// (0x00045763) popup_query_ncimui_window

0xad89,	// (0x0004b461) field_cale_ev2_pane_g4_ParamLimits

0xad89,	// (0x0004b461) field_cale_ev2_pane_g4

0x76bc,	// (0x00047d94) cell_video_dialer_keypad_pane_g2_ParamLimits

0x76bc,	// (0x00047d94) cell_video_dialer_keypad_pane_g2

0x0001,

0xf80b,	// (0x0004fee3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf80b,	// (0x0004fee3) cell_video_dialer_keypad_pane_g

0x76d4,	// (0x00047dac) cell_video_dialer_keypad_pane_t1

0xcff9,	// (0x0004d6d1) bg_popup_window_pane_cp012

0xe128,	// (0x0004e800) heading_pane_cp06

0xbd65,	// (0x0004c43d) ncim_query_content_pane

0xcff9,	// (0x0004d6d1) bg_popup_heading_pane_cp01

0xbd6d,	// (0x0004c445) ncim_heading_pane_t1

0xbd7b,	// (0x0004c453) ncim_indicator_popup_pane

0xbd8d,	// (0x0004c465) ncim_query_button_pane

0xbda1,	// (0x0004c479) ncim_query_content_pane_t1

0xbdb3,	// (0x0004c48b) ncim_query_content_pane_t2

0x0005,

0xfb6e,	// (0x00050246) ncim_query_content_pane_t

0xbded,	// (0x0004c4c5) ncim_query_list_pane

0xbdff,	// (0x0004c4d7) ncim_query_popup_pane

0xbd7b,	// (0x0004c453) ncim_indicator_popup_pane_ParamLimits

0x932f,	// (0x00049a07) ncim_query_content_pane_g1_ParamLimits

0x932f,	// (0x00049a07) ncim_query_content_pane_g1

0xbda1,	// (0x0004c479) ncim_query_content_pane_t1_ParamLimits

0xbdb3,	// (0x0004c48b) ncim_query_content_pane_t2_ParamLimits

0x933b,	// (0x00049a13) ncim_query_content_pane_t3_ParamLimits

0x933b,	// (0x00049a13) ncim_query_content_pane_t3

0x9363,	// (0x00049a3b) ncim_query_content_pane_t4_ParamLimits

0x9363,	// (0x00049a3b) ncim_query_content_pane_t4

0x938b,	// (0x00049a63) ncim_query_content_pane_t5_ParamLimits

0x938b,	// (0x00049a63) ncim_query_content_pane_t5

0xbdc5,	// (0x0004c49d) ncim_query_content_pane_t6_ParamLimits

0xbdc5,	// (0x0004c49d) ncim_query_content_pane_t6

0xfb6e,	// (0x00050246) ncim_query_content_pane_t_ParamLimits

0xbded,	// (0x0004c4c5) ncim_query_list_pane_ParamLimits

0xbdff,	// (0x0004c4d7) ncim_query_popup_pane_ParamLimits

0xbe13,	// (0x0004c4eb) wait_bar_pane_cp04

0xcff9,	// (0x0004d6d1) input_focus_pane_cp011

0xbe1b,	// (0x0004c4f3) ncim_query_popup_pane_t1

0xbe29,	// (0x0004c501) ncim_list_query_list_pane_ParamLimits

0xbe29,	// (0x0004c501) ncim_list_query_list_pane

0xcff9,	// (0x0004d6d1) bg_button_pane_cp027

0xbe3c,	// (0x0004c514) ncim_query_button_pane_g1

0xcff9,	// (0x0004d6d1) list_highlight_pane_cp012

0xbe46,	// (0x0004c51e) ncim_list_query_list_pane_g1

0xbe4e,	// (0x0004c526) ncim_list_query_list_pane_t1

0xb124,	// (0x0004b7fc) cam4_indicators_pane_g3_ParamLimits

0xb124,	// (0x0004b7fc) cam4_indicators_pane_g3

0xb183,	// (0x0004b85b) vid4_indicators_pane_g5_ParamLimits

0xb183,	// (0x0004b85b) vid4_indicators_pane_g5

0xdf72,	// (0x0004e64a) vid4_progress_pane_g5_ParamLimits

0xdf72,	// (0x0004e64a) vid4_progress_pane_g5

0x921f,	// (0x000498f7) main_ncimui_pane_g1

0x9285,	// (0x0004995d) ncimui_group_query_pane_ParamLimits

0x9285,	// (0x0004995d) ncimui_group_query_pane

0x92cd,	// (0x000499a5) ncimui_list_pane_ParamLimits

0x92cd,	// (0x000499a5) ncimui_list_pane

0x92f2,	// (0x000499ca) ncimui_text_pane_ParamLimits

0x92f2,	// (0x000499ca) ncimui_text_pane

0x93b3,	// (0x00049a8b) ncimui_text_pane_t1_ParamLimits

0x93b3,	// (0x00049a8b) ncimui_text_pane_t1

0xbe65,	// (0x0004c53d) ncimui_list_single_graphic_pane_ParamLimits

0xbe65,	// (0x0004c53d) ncimui_list_single_graphic_pane

0x93d1,	// (0x00049aa9) ncimui_query_pane_ParamLimits

0x93d1,	// (0x00049aa9) ncimui_query_pane

0xcff9,	// (0x0004d6d1) list_highlight_pane_cp013

0xbe75,	// (0x0004c54d) ncim_list_query_list_pane_t1_copy1

0xbe83,	// (0x0004c55b) ncim_list_single_graphic_pane_g1

0xbe8b,	// (0x0004c563) ncim_query_button_pane_cp01

0xbe97,	// (0x0004c56f) ncim_query_entry_pane_ParamLimits

0xbe97,	// (0x0004c56f) ncim_query_entry_pane

0xbeaa,	// (0x0004c582) ncimui_query_pane_g1

0xbeb6,	// (0x0004c58e) ncimui_query_pane_t1_ParamLimits

0xbeb6,	// (0x0004c58e) ncimui_query_pane_t1

0xefab,	// (0x0004f683) input_focus_pane_cp012

0xbecf,	// (0x0004c5a7) ncim_query_entry_pane_t1

0xd841,	// (0x0004df19) main_im_pane_ParamLimits

0xefab,	// (0x0004f683) main_mobtv_pane_ParamLimits

0xefab,	// (0x0004f683) main_mobtv_pane

0x836e,	// (0x00048a46) main_cset6_slider_pane_g18_ParamLimits

0x836e,	// (0x00048a46) main_cset6_slider_pane_g18

0x839e,	// (0x00048a76) main_cset6_slider_pane_g19_ParamLimits

0x839e,	// (0x00048a76) main_cset6_slider_pane_g19

0xbee1,	// (0x0004c5b9) bg_main_mobtv_pane_ParamLimits

0xbee1,	// (0x0004c5b9) bg_main_mobtv_pane

0x93e1,	// (0x00049ab9) main_mobtv_info_pane

0x93ea,	// (0x00049ac2) main_mobtv_loading_pane_ParamLimits

0x93ea,	// (0x00049ac2) main_mobtv_loading_pane

0xbeef,	// (0x0004c5c7) main_mobtv_pg_channel_list_pane

0xbef9,	// (0x0004c5d1) main_mobtv_pg_hdr_pane

0x93f7,	// (0x00049acf) main_mobtv_programe_curr_pane_ParamLimits

0x93f7,	// (0x00049acf) main_mobtv_programe_curr_pane

0x9404,	// (0x00049adc) main_mobtv_programe_next_pane_ParamLimits

0x9404,	// (0x00049adc) main_mobtv_programe_next_pane

0xbf02,	// (0x0004c5da) popup_mobtv_noti_window

0x5e47,	// (0x0004651f) main_tv_pg_hdr_pane_g1

0xbf0a,	// (0x0004c5e2) main_tv_pg_hdr_pane_g2

0xbf12,	// (0x0004c5ea) main_tv_pg_hdr_pane_g3

0xbf1a,	// (0x0004c5f2) main_tv_pg_hdr_pane_g4

0xbf22,	// (0x0004c5fa) main_tv_pg_hdr_pane_g5

0xbf2a,	// (0x0004c602) main_tv_pg_hdr_pane_g6

0xbf32,	// (0x0004c60a) main_tv_pg_hdr_pane_g7

0xbf3a,	// (0x0004c612) main_tv_pg_hdr_pane_g8

0xbf42,	// (0x0004c61a) main_tv_pg_hdr_pane_g9

0xbf4a,	// (0x0004c622) main_tv_pg_hdr_pane_g10

0xbf54,	// (0x0004c62c) main_tv_pg_hdr_pane_g11

0x000a,

0xfb7b,	// (0x00050253) main_tv_pg_hdr_pane_g

0xbf5e,	// (0x0004c636) main_tv_pg_hdr_pane_t1

0xbf6c,	// (0x0004c644) main_tv_pg_hdr_pane_t2

0xbf7a,	// (0x0004c652) main_tv_pg_hdr_pane_t3

0xbf88,	// (0x0004c660) main_tv_pg_hdr_pane_t4

0xbf96,	// (0x0004c66e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb92,	// (0x0005026a) main_tv_pg_hdr_pane_t

0xbfa4,	// (0x0004c67c) single_mobtv_pg_channel_pane_ParamLimits

0xbfa4,	// (0x0004c67c) single_mobtv_pg_channel_pane

0xbfb6,	// (0x0004c68e) single_mobtv_pg_channel_table_pane

0xbfbf,	// (0x0004c697) single_mobtv_pg_channel_thumb_pane

0xbfc8,	// (0x0004c6a0) single_tv_pg_channel_pane_g1

0xbfd1,	// (0x0004c6a9) single_tv_pg_channel_pane_g2

0x0001,

0xfb9d,	// (0x00050275) single_tv_pg_channel_pane_g

0x6112,	// (0x000467ea) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x6112,	// (0x000467ea) bg_single_mobtv_pg_channel_thumb_pane

0xbfda,	// (0x0004c6b2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xbfda,	// (0x0004c6b2) single_mobtv_pg_channel_thumb_pane_g1

0xbfe8,	// (0x0004c6c0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xbfe8,	// (0x0004c6c0) single_mobtv_pg_channel_thumb_pane_g2

0xbff4,	// (0x0004c6cc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xbff4,	// (0x0004c6cc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfba2,	// (0x0005027a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfba2,	// (0x0005027a) single_mobtv_pg_channel_thumb_pane_g

0xc000,	// (0x0004c6d8) single_mobtv_pg_channel_thumb_pane_t1

0xc00e,	// (0x0004c6e6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfba9,	// (0x00050281) single_mobtv_pg_channel_thumb_pane_t

0x5e47,	// (0x0004651f) bg_single_mobtv_pg_channel_table_pane_g1

0x5e47,	// (0x0004651f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf657,	// (0x0004fd2f) bg_single_mobtv_pg_channel_table_pane_g

0xc01c,	// (0x0004c6f4) single_mobtv_pg_channel_table_pane_t1

0xc02a,	// (0x0004c702) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbae,	// (0x00050286) single_mobtv_pg_channel_table_pane_t

0x9419,	// (0x00049af1) main_mobtv_info_pane_g1_ParamLimits

0x9419,	// (0x00049af1) main_mobtv_info_pane_g1

0x9435,	// (0x00049b0d) main_mobtv_info_pane_t1_ParamLimits

0x9435,	// (0x00049b0d) main_mobtv_info_pane_t1

0x949b,	// (0x00049b73) main_mobtv_info_pane_t2_ParamLimits

0x949b,	// (0x00049b73) main_mobtv_info_pane_t2

0x0002,

0xfbb8,	// (0x00050290) main_mobtv_info_pane_t_ParamLimits

0xfbb8,	// (0x00050290) main_mobtv_info_pane_t

0x951e,	// (0x00049bf6) wait_bar_pane_cp05

0x952e,	// (0x00049c06) main_mobtv_loading_pane_g1_ParamLimits

0x952e,	// (0x00049c06) main_mobtv_loading_pane_g1

0x953f,	// (0x00049c17) main_mobtv_loading_pane_g2_ParamLimits

0x953f,	// (0x00049c17) main_mobtv_loading_pane_g2

0x954b,	// (0x00049c23) main_mobtv_loading_pane_g3_ParamLimits

0x954b,	// (0x00049c23) main_mobtv_loading_pane_g3

0x0002,

0xfbbf,	// (0x00050297) main_mobtv_loading_pane_g_ParamLimits

0xfbbf,	// (0x00050297) main_mobtv_loading_pane_g

0xc038,	// (0x0004c710) main_mobtv_loading_pane_t1_ParamLimits

0xc038,	// (0x0004c710) main_mobtv_loading_pane_t1

0xc050,	// (0x0004c728) main_mobtv_loading_pane_t2_ParamLimits

0xc050,	// (0x0004c728) main_mobtv_loading_pane_t2

0x0001,

0xfbc6,	// (0x0005029e) main_mobtv_loading_pane_t_ParamLimits

0xfbc6,	// (0x0005029e) main_mobtv_loading_pane_t

0x955c,	// (0x00049c34) wait_bar_pane_cp06_ParamLimits

0x955c,	// (0x00049c34) wait_bar_pane_cp06

0xc074,	// (0x0004c74c) main_mobtv_programe_curr_pane_t1

0xc082,	// (0x0004c75a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbcb,	// (0x000502a3) main_mobtv_programe_curr_pane_t

0xc090,	// (0x0004c768) main_mobtv_programe_next_pane_t1

0xc09e,	// (0x0004c776) main_mobtv_programe_next_pane_t2

0xc0ac,	// (0x0004c784) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd0,	// (0x000502a8) main_mobtv_programe_next_pane_t

0xcff9,	// (0x0004d6d1) bg_popup_mobtv_noti_window_pane

0xc0ba,	// (0x0004c792) popup_mobtv_noti_window_g1

0xc0c2,	// (0x0004c79a) popup_mobtv_noti_window_t1

0xc0d0,	// (0x0004c7a8) popup_mobtv_noti_window_t2

0x0001,

0xfbd7,	// (0x000502af) popup_mobtv_noti_window_t

0x5e47,	// (0x0004651f) bg_popup_mobtv_noti_window_pane_g1

0xcff9,	// (0x0004d6d1) sc_clock_pane

0xcff9,	// (0x0004d6d1) main_fs_bigclock_pane

0x8da5,	// (0x0004947d) blid2_tripm_pane_t4_ParamLimits

0x8da5,	// (0x0004947d) blid2_tripm_pane_t4

0x956b,	// (0x00049c43) sc_clock_pane_g1_ParamLimits

0x956b,	// (0x00049c43) sc_clock_pane_g1

0x957d,	// (0x00049c55) sc_clock_pane_t1_ParamLimits

0x957d,	// (0x00049c55) sc_clock_pane_t1

0x959f,	// (0x00049c77) sc_clock_pane_t2_ParamLimits

0x959f,	// (0x00049c77) sc_clock_pane_t2

0x95b5,	// (0x00049c8d) sc_clock_pane_t3_ParamLimits

0x95b5,	// (0x00049c8d) sc_clock_pane_t3

0x0004,

0xfbdc,	// (0x000502b4) sc_clock_pane_t_ParamLimits

0xfbdc,	// (0x000502b4) sc_clock_pane_t

0x9f0a,	// (0x0004a5e2) main_fs_bigclock_indicator_pane_ParamLimits

0x9f0a,	// (0x0004a5e2) main_fs_bigclock_indicator_pane

0x9651,	// (0x00049d29) main_fs_bigclock_pane_g1_ParamLimits

0x9651,	// (0x00049d29) main_fs_bigclock_pane_g1

0x9f16,	// (0x0004a5ee) main_fs_bigclock_pane_t1_ParamLimits

0x9f16,	// (0x0004a5ee) main_fs_bigclock_pane_t1

0x9f28,	// (0x0004a600) main_fs_bigclock_pane_t2_ParamLimits

0x9f28,	// (0x0004a600) main_fs_bigclock_pane_t2

0x9f3a,	// (0x0004a612) main_fs_bigclock_pane_t3_ParamLimits

0x9f3a,	// (0x0004a612) main_fs_bigclock_pane_t3

0x0002,

0xfde6,	// (0x000504be) main_fs_bigclock_pane_t_ParamLimits

0xfde6,	// (0x000504be) main_fs_bigclock_pane_t

0xcbb6,	// (0x0004d28e) main_fs_bigclock_indicator_pane_g1

0xbd95,	// (0x0004c46d) ncim_query_content_pane_g2_ParamLimits

0xbd95,	// (0x0004c46d) ncim_query_content_pane_g2

0x0001,

0xfb69,	// (0x00050241) ncim_query_content_pane_g_ParamLimits

0xfb69,	// (0x00050241) ncim_query_content_pane_g

0x95cc,	// (0x00049ca4) sc_clock_pane_t4_ParamLimits

0x95cc,	// (0x00049ca4) sc_clock_pane_t4

0xefab,	// (0x0004f683) main_radioblah_pane

0xb05a,	// (0x0004b732) cell_call4_button_pane_t1_copy1_ParamLimits

0xb05a,	// (0x0004b732) cell_call4_button_pane_t1_copy1

0x9237,	// (0x0004990f) main_ncimui_pane_t1_ParamLimits

0x9237,	// (0x0004990f) main_ncimui_pane_t1

0x9251,	// (0x00049929) main_ncimui_pane_t2_ParamLimits

0x9251,	// (0x00049929) main_ncimui_pane_t2

0x0002,

0xfb62,	// (0x0005023a) main_ncimui_pane_t_ParamLimits

0xfb62,	// (0x0005023a) main_ncimui_pane_t

0xc211,	// (0x0004c8e9) main_radioblah_anim_pane_ParamLimits

0xc211,	// (0x0004c8e9) main_radioblah_anim_pane

0xc222,	// (0x0004c8fa) main_radioblah_info_pane_ParamLimits

0xc222,	// (0x0004c8fa) main_radioblah_info_pane

0xc236,	// (0x0004c90e) main_radioblah_pane_t1_ParamLimits

0xc236,	// (0x0004c90e) main_radioblah_pane_t1

0xc252,	// (0x0004c92a) main_radioblah_pane_t2_ParamLimits

0xc252,	// (0x0004c92a) main_radioblah_pane_t2

0x0003,

0xfbfd,	// (0x000502d5) main_radioblah_pane_t_ParamLimits

0xfbfd,	// (0x000502d5) main_radioblah_pane_t

0x969b,	// (0x00049d73) main_radioblah_rocker_ctrl_pane_ParamLimits

0x969b,	// (0x00049d73) main_radioblah_rocker_ctrl_pane

0xc29a,	// (0x0004c972) main_radioblah_info_pane_t1_ParamLimits

0xc29a,	// (0x0004c972) main_radioblah_info_pane_t1

0x96ef,	// (0x00049dc7) main_radioblah_info_pane_t2_ParamLimits

0x96ef,	// (0x00049dc7) main_radioblah_info_pane_t2

0x0003,

0xfc06,	// (0x000502de) main_radioblah_info_pane_t_ParamLimits

0xfc06,	// (0x000502de) main_radioblah_info_pane_t

0x5e47,	// (0x0004651f) main_radioblah_rocker_ctrl_pane_g1

0x979d,	// (0x00049e75) main_radioblah_rocker_ctrl_pane_g2

0x97a5,	// (0x00049e7d) main_radioblah_rocker_ctrl_pane_g3

0x97ad,	// (0x00049e85) main_radioblah_rocker_ctrl_pane_g4

0x97b5,	// (0x00049e8d) main_radioblah_rocker_ctrl_pane_g5

0x97bd,	// (0x00049e95) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc0f,	// (0x000502e7) main_radioblah_rocker_ctrl_pane_g

0x91f0,	// (0x000498c8) main_cset_text2_pane_t1_copy1_ParamLimits

0xb0e2,	// (0x0004b7ba) cam4_image_uncrop_qvga_pane

0xb14e,	// (0x0004b826) vid4_image_uncrop_qcif_pane

0xd1fb,	// (0x0004d8d3) cam6_image_uncrop_qvga_pane_ParamLimits

0xd1fb,	// (0x0004d8d3) cam6_image_uncrop_qvga_pane

0xb9d2,	// (0x0004c0aa) vid6_image_uncrop_qcif_pane_ParamLimits

0xb9d2,	// (0x0004c0aa) vid6_image_uncrop_qcif_pane

0xcff9,	// (0x0004d6d1) bg_popup_preview_window_pane_cp03

0xbd3b,	// (0x0004c413) list_cset_text2_pane

0xbd43,	// (0x0004c41b) main_cset6_text2_pane_g1

0xbd4b,	// (0x0004c423) main_cset6_text2_pane_t1

0x97c5,	// (0x00049e9d) list_cset_text2_pane_t1_ParamLimits

0x97c5,	// (0x00049e9d) list_cset_text2_pane_t1

0xefab,	// (0x0004f683) main_radioblah_pane_ParamLimits

0x950c,	// (0x00049be4) main_mobtv_info_pane_t3_ParamLimits

0x950c,	// (0x00049be4) main_mobtv_info_pane_t3

0x9689,	// (0x00049d61) main_radioblah_pane_g1

0x96c3,	// (0x00049d9b) main_radioblah_info_pane_g1

0x9742,	// (0x00049e1a) main_radioblah_info_pane_t3_ParamLimits

0x9742,	// (0x00049e1a) main_radioblah_info_pane_t3

0x3616,	// (0x00043cee) highlight_cell_cale_month_pane_ParamLimits

0x3616,	// (0x00043cee) highlight_cell_cale_month_pane

0xcff9,	// (0x0004d6d1) main_phob_fisheye_pane

0x696d,	// (0x00047045) scroll_pane_cp0031_ParamLimits

0x696d,	// (0x00047045) scroll_pane_cp0031

0xbadc,	// (0x0004c1b4) wait_bar_pane_cp08_ParamLimits

0x90a8,	// (0x00049780) cset_list_set_pane_copy1_ParamLimits

0xc2d4,	// (0x0004c9ac) highlight_cell_cale_month_pane_g1

0x97de,	// (0x00049eb6) highlight_cell_cale_month_pane_t1

0xc2dc,	// (0x0004c9b4) list_gen_pane_cp01

0xb345,	// (0x0004ba1d) scroll_pane_01

0xf0b1,	// (0x0004f789) list_single_double_fisheye_pane

0xc2e5,	// (0x0004c9bd) list_double_fisheye_pane_g1_ParamLimits

0xc2e5,	// (0x0004c9bd) list_double_fisheye_pane_g1

0xc2f1,	// (0x0004c9c9) list_double_fisheye_pane_g2_ParamLimits

0xc2f1,	// (0x0004c9c9) list_double_fisheye_pane_g2

0xf0ba,	// (0x0004f792) list_double_fisheye_pane_g3_ParamLimits

0xf0ba,	// (0x0004f792) list_double_fisheye_pane_g3

0x0004,

0xfc1c,	// (0x000502f4) list_double_fisheye_pane_g_ParamLimits

0xfc1c,	// (0x000502f4) list_double_fisheye_pane_g

0xc322,	// (0x0004c9fa) list_double_fisheye_pane_t1_ParamLimits

0xc322,	// (0x0004c9fa) list_double_fisheye_pane_t1

0xc33d,	// (0x0004ca15) list_double_fisheye_pane_t2_ParamLimits

0xc33d,	// (0x0004ca15) list_double_fisheye_pane_t2

0x0001,

0xfc27,	// (0x000502ff) list_double_fisheye_pane_t_ParamLimits

0xfc27,	// (0x000502ff) list_double_fisheye_pane_t

0xcff9,	// (0x0004d6d1) main_call5_pane

0x95f5,	// (0x00049ccd) sc_swipe_pane_ParamLimits

0x95f5,	// (0x00049ccd) sc_swipe_pane

0x97fd,	// (0x00049ed5) call5_image_pane_ParamLimits

0x97fd,	// (0x00049ed5) call5_image_pane

0x9812,	// (0x00049eea) call5_swipe_1_pane_ParamLimits

0x9812,	// (0x00049eea) call5_swipe_1_pane

0x9823,	// (0x00049efb) call5_swipe_2_pane_ParamLimits

0x9823,	// (0x00049efb) call5_swipe_2_pane

0x9848,	// (0x00049f20) popup_call5_audio_first_window_ParamLimits

0x9848,	// (0x00049f20) popup_call5_audio_first_window

0x6112,	// (0x000467ea) call5_swipe_1_pane_g1_ParamLimits

0x6112,	// (0x000467ea) call5_swipe_1_pane_g1

0xc35f,	// (0x0004ca37) call5_swipe_1_pane_g2_ParamLimits

0xc35f,	// (0x0004ca37) call5_swipe_1_pane_g2

0x0001,

0xfc2c,	// (0x00050304) call5_swipe_1_pane_g_ParamLimits

0xfc2c,	// (0x00050304) call5_swipe_1_pane_g

0xc36b,	// (0x0004ca43) call5_swipe_1_pane_t1_ParamLimits

0xc36b,	// (0x0004ca43) call5_swipe_1_pane_t1

0x6112,	// (0x000467ea) call5_swipe_2_pane_g1_ParamLimits

0x6112,	// (0x000467ea) call5_swipe_2_pane_g1

0xc380,	// (0x0004ca58) call5_swipe_2_pane_g2_ParamLimits

0xc380,	// (0x0004ca58) call5_swipe_2_pane_g2

0x0001,

0xfc31,	// (0x00050309) call5_swipe_2_pane_g_ParamLimits

0xfc31,	// (0x00050309) call5_swipe_2_pane_g

0xc38c,	// (0x0004ca64) call5_swipe_2_pane_t1_ParamLimits

0xc38c,	// (0x0004ca64) call5_swipe_2_pane_t1

0xc3a1,	// (0x0004ca79) sc_swipe_pane_g1_ParamLimits

0xc3a1,	// (0x0004ca79) sc_swipe_pane_g1

0xc3ae,	// (0x0004ca86) sc_swipe_pane_g2_ParamLimits

0xc3ae,	// (0x0004ca86) sc_swipe_pane_g2

0x0001,

0xfc36,	// (0x0005030e) sc_swipe_pane_g_ParamLimits

0xfc36,	// (0x0005030e) sc_swipe_pane_g

0xc3ba,	// (0x0004ca92) sc_swipe_pane_t1_ParamLimits

0xc3ba,	// (0x0004ca92) sc_swipe_pane_t1

0xcff9,	// (0x0004d6d1) main_cmail_launcher_pane

0x9857,	// (0x00049f2f) aid_size_cell_cmail_l_ParamLimits

0x9857,	// (0x00049f2f) aid_size_cell_cmail_l

0x9870,	// (0x00049f48) grid_cmail_l_pane_ParamLimits

0x9870,	// (0x00049f48) grid_cmail_l_pane

0x9885,	// (0x00049f5d) cell_cmail_l_pane_ParamLimits

0x9885,	// (0x00049f5d) cell_cmail_l_pane

0x98a7,	// (0x00049f7f) cell_cmail_l_pane_g1_ParamLimits

0x98a7,	// (0x00049f7f) cell_cmail_l_pane_g1

0x98b7,	// (0x00049f8f) cell_cmail_l_pane_t1_ParamLimits

0x98b7,	// (0x00049f8f) cell_cmail_l_pane_t1

0x98cd,	// (0x00049fa5) cell_cmail_l_pane_t2_ParamLimits

0x98cd,	// (0x00049fa5) cell_cmail_l_pane_t2

0x0001,

0xfc3b,	// (0x00050313) cell_cmail_l_pane_t_ParamLimits

0xfc3b,	// (0x00050313) cell_cmail_l_pane_t

0xefab,	// (0x0004f683) grid_highlight_pane_cp018_ParamLimits

0xefab,	// (0x0004f683) grid_highlight_pane_cp018

0x19bc,	// (0x00042094) main2_pane_ParamLimits

0x19bc,	// (0x00042094) main2_pane

0xd8ec,	// (0x0004dfc4) popup_sp_fs_action_menu_bg_pane_g1

0xd8f4,	// (0x0004dfcc) popup_sp_fs_action_menu_bg_pane_g2

0xd8fc,	// (0x0004dfd4) popup_sp_fs_action_menu_bg_pane_g3

0xd904,	// (0x0004dfdc) popup_sp_fs_action_menu_bg_pane_g4

0xd90c,	// (0x0004dfe4) popup_sp_fs_action_menu_bg_pane_g5

0xd914,	// (0x0004dfec) popup_sp_fs_action_menu_bg_pane_g6

0xd91c,	// (0x0004dff4) popup_sp_fs_action_menu_bg_pane_g7

0xd924,	// (0x0004dffc) popup_sp_fs_action_menu_bg_pane_g8

0xd92c,	// (0x0004e004) popup_sp_fs_action_menu_bg_pane_g9

0xd934,	// (0x0004e00c) popup_sp_fs_action_menu_bg_pane_g10

0xd934,	// (0x0004e00c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0004f85e) popup_sp_fs_action_menu_bg_pane_g

0xa9b8,	// (0x0004b090) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x2_t3_g3_g1

0xa9c4,	// (0x0004b09c) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa9c4,	// (0x0004b09c) list_medium_line_x2_t3_g3_g2

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0004f90c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0004f90c) list_medium_line_x2_t3_g3_g

0xa9dc,	// (0x0004b0b4) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa9dc,	// (0x0004b0b4) list_medium_line_x2_t3_g3_t1

0x0ca0,	// (0x00041378) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ca0,	// (0x00041378) list_medium_line_x2_t3_g3_t2

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0004f913) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0004f913) list_medium_line_x2_t3_g3_t

0xa9b8,	// (0x0004b090) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x2_t3_g2_g1

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0004f91a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0004f91a) list_medium_line_x2_t3_g2_g

0xaa06,	// (0x0004b0de) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaa06,	// (0x0004b0de) list_medium_line_x2_t3_g2_t1

0xaa1c,	// (0x0004b0f4) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaa1c,	// (0x0004b0f4) list_medium_line_x2_t3_g2_t2

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0004f91f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0004f91f) list_medium_line_x2_t3_g2_t

0xa9b8,	// (0x0004b090) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x2_t4_g4_g1

0xaa2e,	// (0x0004b106) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaa2e,	// (0x0004b106) list_medium_line_x2_t4_g4_g2

0xa9c4,	// (0x0004b09c) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa9c4,	// (0x0004b09c) list_medium_line_x2_t4_g4_g3

0xaa3a,	// (0x0004b112) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaa3a,	// (0x0004b112) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0004f926) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0004f926) list_medium_line_x2_t4_g4_g

0x0cb2,	// (0x0004138a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0cb2,	// (0x0004138a) list_medium_line_x2_t4_g4_t1

0x0ccc,	// (0x000413a4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0ccc,	// (0x000413a4) list_medium_line_x2_t4_g4_t2

0x0ce1,	// (0x000413b9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ce1,	// (0x000413b9) list_medium_line_x2_t4_g4_t3

0xaa46,	// (0x0004b11e) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaa46,	// (0x0004b11e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0004f92f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0004f92f) list_medium_line_x2_t4_g4_t

0xa9b8,	// (0x0004b090) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x2_t2_g4_g1

0xaa2e,	// (0x0004b106) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaa2e,	// (0x0004b106) list_medium_line_x2_t2_g4_g2

0xa9c4,	// (0x0004b09c) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa9c4,	// (0x0004b09c) list_medium_line_x2_t2_g4_g3

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0004f996) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0004f996) list_medium_line_x2_t2_g4_g

0xaa58,	// (0x0004b130) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaa58,	// (0x0004b130) list_medium_line_x2_t2_g4_t1

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0004f99f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0004f99f) list_medium_line_x2_t2_g4_t

0xa9b8,	// (0x0004b090) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x2_t2_g3_g1

0xa9c4,	// (0x0004b09c) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa9c4,	// (0x0004b09c) list_medium_line_x2_t2_g3_g2

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0004f90c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0004f90c) list_medium_line_x2_t2_g3_g

0xaa6d,	// (0x0004b145) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaa6d,	// (0x0004b145) list_medium_line_x2_t2_g3_t1

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0004f9a4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0004f9a4) list_medium_line_x2_t2_g3_t

0x3773,	// (0x00043e4b) main_sp_fs_list_pane_ParamLimits

0x3773,	// (0x00043e4b) main_sp_fs_list_pane

0x3780,	// (0x00043e58) sp_fs_scroll_pane_ParamLimits

0x3780,	// (0x00043e58) sp_fs_scroll_pane

0x0cf6,	// (0x000413ce) list_medium_line_x2_t3_t1

0x0d06,	// (0x000413de) list_medium_line_x2_t3_t2

0xaab0,	// (0x0004b188) list_medium_line_x2_t3_t3

0x0002,

0xf2fd,	// (0x0004f9d5) list_medium_line_x2_t3_t

0x0d14,	// (0x000413ec) list_medium_line_x3_t4_t1

0x0d24,	// (0x000413fc) list_medium_line_x3_t4_t2

0xaabe,	// (0x0004b196) list_medium_line_x3_t4_t3

0xaacc,	// (0x0004b1a4) list_medium_line_x3_t4_t4

0x0003,

0xf304,	// (0x0004f9dc) list_medium_line_x3_t4_t

0x0d32,	// (0x0004140a) list_medium_line_x4_t5_t1

0x0d42,	// (0x0004141a) list_medium_line_x4_t5_t2

0xaabe,	// (0x0004b196) list_medium_line_x4_t5_t3

0xaada,	// (0x0004b1b2) list_medium_line_x4_t5_t4

0xaacc,	// (0x0004b1a4) list_medium_line_x4_t5_t5

0x0004,

0xf30d,	// (0x0004f9e5) list_medium_line_x4_t5_t

0xa9b8,	// (0x0004b090) list_medium_line_t4_g4_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_t4_g4_g1

0xaa3a,	// (0x0004b112) list_medium_line_t4_g4_g2_ParamLimits

0xaa3a,	// (0x0004b112) list_medium_line_t4_g4_g2

0xaae8,	// (0x0004b1c0) list_medium_line_t4_g4_g3_ParamLimits

0xaae8,	// (0x0004b1c0) list_medium_line_t4_g4_g3

0xa9d0,	// (0x0004b0a8) list_medium_line_t4_g4_g4_ParamLimits

0xa9d0,	// (0x0004b0a8) list_medium_line_t4_g4_g4

0x0003,

0xf318,	// (0x0004f9f0) list_medium_line_t4_g4_g_ParamLimits

0xf318,	// (0x0004f9f0) list_medium_line_t4_g4_g

0xaaf4,	// (0x0004b1cc) list_medium_line_t4_g4_t1_ParamLimits

0xaaf4,	// (0x0004b1cc) list_medium_line_t4_g4_t1

0xab09,	// (0x0004b1e1) list_medium_line_t4_g4_t2_ParamLimits

0xab09,	// (0x0004b1e1) list_medium_line_t4_g4_t2

0xab1f,	// (0x0004b1f7) list_medium_line_t4_g4_t3_ParamLimits

0xab1f,	// (0x0004b1f7) list_medium_line_t4_g4_t3

0xab35,	// (0x0004b20d) list_medium_line_t4_g4_t4_ParamLimits

0xab35,	// (0x0004b20d) list_medium_line_t4_g4_t4

0x0003,

0xf321,	// (0x0004f9f9) list_medium_line_t4_g4_t_ParamLimits

0xf321,	// (0x0004f9f9) list_medium_line_t4_g4_t

0x384e,	// (0x00043f26) chi_dic_find_pane_g1

0x4e87,	// (0x0004555f) main_tport_pane

0x0f2b,	// (0x00041603) list_medium_line_plain_t1

0x0f39,	// (0x00041611) list_medium_line_t2_g2_g1_ParamLimits

0x0f39,	// (0x00041611) list_medium_line_t2_g2_g1

0x0f45,	// (0x0004161d) list_medium_line_t2_g2_g2_ParamLimits

0x0f45,	// (0x0004161d) list_medium_line_t2_g2_g2

0x0001,

0xf973,	// (0x0005004b) list_medium_line_t2_g2_g_ParamLimits

0xf973,	// (0x0005004b) list_medium_line_t2_g2_g

0x0f51,	// (0x00041629) list_medium_line_t2_g2_t1_ParamLimits

0x0f51,	// (0x00041629) list_medium_line_t2_g2_t1

0x0f6b,	// (0x00041643) list_medium_line_t2_g2_t2_ParamLimits

0x0f6b,	// (0x00041643) list_medium_line_t2_g2_t2

0x0001,

0xf978,	// (0x00050050) list_medium_line_t2_g2_t_ParamLimits

0xf978,	// (0x00050050) list_medium_line_t2_g2_t

0xb781,	// (0x0004be59) aid_sp_fs_list_icon_a_sm

0xb789,	// (0x0004be61) aid_sp_fs_list_icon_d

0xb791,	// (0x0004be69) aid_sp_fs_text_primary

0xb79a,	// (0x0004be72) aid_sp_fs_text_secondary

0xb7a3,	// (0x0004be7b) list_medium_line

0xb7a3,	// (0x0004be7b) list_medium_line_g2

0xb7a3,	// (0x0004be7b) list_medium_line_g3

0xb7a3,	// (0x0004be7b) list_medium_line_plain

0xb7a3,	// (0x0004be7b) list_medium_line_plain_t2

0xb7a3,	// (0x0004be7b) list_medium_line_plain_t3

0xb7a3,	// (0x0004be7b) list_medium_line_right_icon

0xb7a3,	// (0x0004be7b) list_medium_line_right_iconx2

0xb7a3,	// (0x0004be7b) list_medium_line_t2

0xb7a3,	// (0x0004be7b) list_medium_line_t2_g2

0xb7a3,	// (0x0004be7b) list_medium_line_t2_g3

0xb7a3,	// (0x0004be7b) list_medium_line_t2_right_icon

0xb7a3,	// (0x0004be7b) list_medium_line_t2_right_iconx2

0xb7a3,	// (0x0004be7b) list_medium_line_t3

0xb7a3,	// (0x0004be7b) list_medium_line_t3_g2

0xb7a3,	// (0x0004be7b) list_medium_line_t3_g3

0xb7a3,	// (0x0004be7b) list_medium_line_t3_right_iconx2

0xf0a8,	// (0x0004f780) list_medium_line_t4_g4

0xb7a3,	// (0x0004be7b) list_medium_line_x2

0xb7a3,	// (0x0004be7b) list_medium_line_x2_t2_g2

0xb7a3,	// (0x0004be7b) list_medium_line_x2_t2_g3

0xb7a3,	// (0x0004be7b) list_medium_line_x2_t2_g4

0xb7a3,	// (0x0004be7b) list_medium_line_x2_t3

0xb7a3,	// (0x0004be7b) list_medium_line_x2_t3_g2

0xb7a3,	// (0x0004be7b) list_medium_line_x2_t3_g3

0xb7a3,	// (0x0004be7b) list_medium_line_x2_t3_g4

0xb7a3,	// (0x0004be7b) list_medium_line_x2_t4_g2

0xb7a3,	// (0x0004be7b) list_medium_line_x2_t4_g4

0xb7ac,	// (0x0004be84) list_medium_line_x3

0xb7ac,	// (0x0004be84) list_medium_line_x3_t4

0xb7ac,	// (0x0004be84) list_medium_line_x3_t4_g4

0xf0a8,	// (0x0004f780) list_medium_line_x4_t4

0xf0a8,	// (0x0004f780) list_medium_line_x4_t4_g7

0xf0a8,	// (0x0004f780) list_medium_line_x4_t5

0x10e2,	// (0x000417ba) list_single_fs_dyc_pane_ParamLimits

0x10e2,	// (0x000417ba) list_single_fs_dyc_pane

0xa9b8,	// (0x0004b090) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x4_t4_g7_g1

0xbc87,	// (0x0004c35f) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbc87,	// (0x0004c35f) list_medium_line_x4_t4_g7_g2

0xbc93,	// (0x0004c36b) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbc93,	// (0x0004c36b) list_medium_line_x4_t4_g7_g3

0xbca2,	// (0x0004c37a) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbca2,	// (0x0004c37a) list_medium_line_x4_t4_g7_g4

0xbcae,	// (0x0004c386) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbcae,	// (0x0004c386) list_medium_line_x4_t4_g7_g5

0xbcbd,	// (0x0004c395) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbcbd,	// (0x0004c395) list_medium_line_x4_t4_g7_g6

0xbccc,	// (0x0004c3a4) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbccc,	// (0x0004c3a4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb43,	// (0x0005021b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb43,	// (0x0005021b) list_medium_line_x4_t4_g7_g

0xbcd8,	// (0x0004c3b0) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbcd8,	// (0x0004c3b0) list_medium_line_x4_t4_g7_t1

0xbced,	// (0x0004c3c5) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbced,	// (0x0004c3c5) list_medium_line_x4_t4_g7_t2

0xbd02,	// (0x0004c3da) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbd02,	// (0x0004c3da) list_medium_line_x4_t4_g7_t3

0xbd17,	// (0x0004c3ef) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbd17,	// (0x0004c3ef) list_medium_line_x4_t4_g7_t4

0xbd29,	// (0x0004c401) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbd29,	// (0x0004c401) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb52,	// (0x0005022a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb52,	// (0x0005022a) list_medium_line_x4_t4_g7_t

0x1122,	// (0x000417fa) list_single_dyc_row_pane_ParamLimits

0x1122,	// (0x000417fa) list_single_dyc_row_pane

0x97ec,	// (0x00049ec4) call5_gesture_pane_ParamLimits

0x97ec,	// (0x00049ec4) call5_gesture_pane

0x9834,	// (0x00049f0c) call5_windows_pane_ParamLimits

0x9834,	// (0x00049f0c) call5_windows_pane

0x98e5,	// (0x00049fbd) call5_swipe_1_pane_cp_ParamLimits

0x98e5,	// (0x00049fbd) call5_swipe_1_pane_cp

0x98f1,	// (0x00049fc9) call5_swipe_2_pane_cp_ParamLimits

0x98f1,	// (0x00049fc9) call5_swipe_2_pane_cp

0xda10,	// (0x0004e0e8) call5_image_pane_cp

0x98fd,	// (0x00049fd5) popup_call5_audio_first_window_cp_ParamLimits

0x98fd,	// (0x00049fd5) popup_call5_audio_first_window_cp

0xc3a1,	// (0x0004ca79) call5_swipe_1_pane_g1_cp_ParamLimits

0xc3a1,	// (0x0004ca79) call5_swipe_1_pane_g1_cp

0xc3cf,	// (0x0004caa7) call5_swipe_1_pane_g2_cp

0xc3ba,	// (0x0004ca92) call5_swipe_1_pane_t1_cp_ParamLimits

0xc3ba,	// (0x0004ca92) call5_swipe_1_pane_t1_cp

0xc3a1,	// (0x0004ca79) call5_swipe_2_pane_g1_cp_ParamLimits

0xc3a1,	// (0x0004ca79) call5_swipe_2_pane_g1_cp

0xc3d7,	// (0x0004caaf) call5_swipe_2_pane_g2_cp

0xc3df,	// (0x0004cab7) call5_swipe_2_pane_t1_cp_ParamLimits

0xc3df,	// (0x0004cab7) call5_swipe_2_pane_t1_cp

0xefab,	// (0x0004f683) main_sp_fs_email_pane

0xc3f4,	// (0x0004cacc) main_sp_fs_listscroll_pane_te

0x9909,	// (0x00049fe1) popup_sp_fs_action_menu_pane_ParamLimits

0x9909,	// (0x00049fe1) popup_sp_fs_action_menu_pane

0x5e47,	// (0x0004651f) bg_sp_fs_ctrlbar_pane_g1

0x7104,	// (0x000477dc) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x7116,	// (0x000477ee) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x710d,	// (0x000477e5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x5e47,	// (0x0004651f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc40,	// (0x00050318) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x5b70,	// (0x00046248) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x5b70,	// (0x00046248) bg_sp_fs_ctrlbar_ddmenu_pane

0xc3fd,	// (0x0004cad5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc3fd,	// (0x0004cad5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc409,	// (0x0004cae1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc409,	// (0x0004cae1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc49,	// (0x00050321) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc49,	// (0x00050321) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc415,	// (0x0004caed) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc415,	// (0x0004caed) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x113f,	// (0x00041817) list_medium_line_t2_right_icon_g1

0x1147,	// (0x0004181f) list_medium_line_t2_right_icon_t1

0x1157,	// (0x0004182f) list_medium_line_t2_right_icon_t2

0x0001,

0xfc4e,	// (0x00050326) list_medium_line_t2_right_icon_t

0x4e65,	// (0x0004553d) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4e65,	// (0x0004553d) bg_sp_fs_ctrlbar_pane

0x9981,	// (0x0004a059) main_sp_fs_ctrlbar_button_pane_cp01

0x9989,	// (0x0004a061) main_sp_fs_ctrlbar_ddmenu_pane

0xc467,	// (0x0004cb3f) main_sp_fs_ctrlbar_pane_g1

0xc473,	// (0x0004cb4b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc53,	// (0x0005032b) main_sp_fs_ctrlbar_pane_g

0xc47f,	// (0x0004cb57) main_sp_fs_ctrlbar_pane_t1

0x9993,	// (0x0004a06b) main_sp_fs_ctrlbar_pane

0x99b4,	// (0x0004a08c) main_sp_fs_listscroll_pane_te_cp01

0x1165,	// (0x0004183d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1165,	// (0x0004183d) popup_sp_fs_action_menu_pane_cp01

0xefab,	// (0x0004f683) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xefab,	// (0x0004f683) bg_sp_fs_highlight_list_pane_cp01

0x1189,	// (0x00041861) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1189,	// (0x00041861) sp_fs_action_menu_list_gene_pane_g1

0xc4af,	// (0x0004cb87) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc4af,	// (0x0004cb87) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc5d,	// (0x00050335) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc5d,	// (0x00050335) sp_fs_action_menu_list_gene_pane_g

0x1198,	// (0x00041870) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1198,	// (0x00041870) sp_fs_action_menu_list_gene_pane_t1

0x99d4,	// (0x0004a0ac) sp_fs_action_menu_list_gene_pane_ParamLimits

0x99d4,	// (0x0004a0ac) sp_fs_action_menu_list_gene_pane

0xc4bc,	// (0x0004cb94) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc4bc,	// (0x0004cb94) popup_sp_fs_action_menu_bg_pane

0x99f1,	// (0x0004a0c9) sp_fs_action_menu_list_pane_ParamLimits

0x99f1,	// (0x0004a0c9) sp_fs_action_menu_list_pane

0xc4ca,	// (0x0004cba2) sp_fs_scroll_pane_cp01_ParamLimits

0xc4ca,	// (0x0004cba2) sp_fs_scroll_pane_cp01

0x11b0,	// (0x00041888) list_medium_line_plain_t2_t1

0x11c0,	// (0x00041898) list_medium_line_plain_t2_t2

0x0001,

0xfc62,	// (0x0005033a) list_medium_line_plain_t2_t

0x11ce,	// (0x000418a6) list_medium_line_plain_t3_t1

0x11de,	// (0x000418b6) list_medium_line_plain_t3_t2

0x11ec,	// (0x000418c4) list_medium_line_plain_t3_t3

0x0002,

0xfc67,	// (0x0005033f) list_medium_line_plain_t3_t

0xa9b8,	// (0x0004b090) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x2_t2_g2_g1

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0004f91a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0004f91a) list_medium_line_x2_t2_g2_g

0xaaf4,	// (0x0004b1cc) list_medium_line_x2_t2_g2_t1_ParamLimits

0xaaf4,	// (0x0004b1cc) list_medium_line_x2_t2_g2_t1

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc6e,	// (0x00050346) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc6e,	// (0x00050346) list_medium_line_x2_t2_g2_t

0xa9b8,	// (0x0004b090) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x2_t4_g2_g1

0xc4f0,	// (0x0004cbc8) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc4f0,	// (0x0004cbc8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc73,	// (0x0005034b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc73,	// (0x0005034b) list_medium_line_x2_t4_g2_g

0x11fa,	// (0x000418d2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x11fa,	// (0x000418d2) list_medium_line_x2_t4_g2_t1

0x1214,	// (0x000418ec) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1214,	// (0x000418ec) list_medium_line_x2_t4_g2_t2

0x1229,	// (0x00041901) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1229,	// (0x00041901) list_medium_line_x2_t4_g2_t3

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc78,	// (0x00050350) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc78,	// (0x00050350) list_medium_line_x2_t4_g2_t

0x123e,	// (0x00041916) list_medium_line_t3_right_iconx2_g1

0x113f,	// (0x00041817) list_medium_line_t3_right_iconx2_g2

0x1246,	// (0x0004191e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc81,	// (0x00050359) list_medium_line_t3_right_iconx2_g

0x124e,	// (0x00041926) list_medium_line_t3_right_iconx2_t1

0x125e,	// (0x00041936) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc88,	// (0x00050360) list_medium_line_t3_right_iconx2_t

0xa9b8,	// (0x0004b090) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x3_t4_g4_g1

0xa9c4,	// (0x0004b09c) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa9c4,	// (0x0004b09c) list_medium_line_x3_t4_g4_g2

0xaa3a,	// (0x0004b112) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaa3a,	// (0x0004b112) list_medium_line_x3_t4_g4_g3

0xc502,	// (0x0004cbda) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc502,	// (0x0004cbda) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc8d,	// (0x00050365) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc8d,	// (0x00050365) list_medium_line_x3_t4_g4_g

0x126c,	// (0x00041944) list_medium_line_x3_t4_g4_t1_ParamLimits

0x126c,	// (0x00041944) list_medium_line_x3_t4_g4_t1

0x1283,	// (0x0004195b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1283,	// (0x0004195b) list_medium_line_x3_t4_g4_t2

0xc50e,	// (0x0004cbe6) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc50e,	// (0x0004cbe6) list_medium_line_x3_t4_g4_t3

0xc523,	// (0x0004cbfb) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc523,	// (0x0004cbfb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc96,	// (0x0005036e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc96,	// (0x0005036e) list_medium_line_x3_t4_g4_t

0x1298,	// (0x00041970) list_single_dyc_row_text_pane_t1_ParamLimits

0x1298,	// (0x00041970) list_single_dyc_row_text_pane_t1

0x12cf,	// (0x000419a7) list_single_dyc_row_text_pane_t2_ParamLimits

0x12cf,	// (0x000419a7) list_single_dyc_row_text_pane_t2

0xc540,	// (0x0004cc18) list_single_dyc_row_text_pane_t3_ParamLimits

0xc540,	// (0x0004cc18) list_single_dyc_row_text_pane_t3

0x0005,

0xfc9f,	// (0x00050377) list_single_dyc_row_text_pane_t_ParamLimits

0xfc9f,	// (0x00050377) list_single_dyc_row_text_pane_t

0xc564,	// (0x0004cc3c) list_single_dyc_row_pane_g1_ParamLimits

0xc564,	// (0x0004cc3c) list_single_dyc_row_pane_g1

0xc570,	// (0x0004cc48) list_single_dyc_row_pane_g2_ParamLimits

0xc570,	// (0x0004cc48) list_single_dyc_row_pane_g2

0xc57c,	// (0x0004cc54) list_single_dyc_row_pane_g3_ParamLimits

0xc57c,	// (0x0004cc54) list_single_dyc_row_pane_g3

0xc588,	// (0x0004cc60) list_single_dyc_row_pane_g4_ParamLimits

0xc588,	// (0x0004cc60) list_single_dyc_row_pane_g4

0x0003,

0xfcac,	// (0x00050384) list_single_dyc_row_pane_g_ParamLimits

0xfcac,	// (0x00050384) list_single_dyc_row_pane_g

0xc594,	// (0x0004cc6c) list_single_dyc_row_text_pane_ParamLimits

0xc594,	// (0x0004cc6c) list_single_dyc_row_text_pane

0xcff9,	// (0x0004d6d1) bg_sp_fs_scroll_pane

0xc5b3,	// (0x0004cc8b) thumb_sp_fs_scroll_pane

0x0f39,	// (0x00041611) list_medium_line_g1_ParamLimits

0x0f39,	// (0x00041611) list_medium_line_g1

0x13f2,	// (0x00041aca) list_medium_line_t1_ParamLimits

0x13f2,	// (0x00041aca) list_medium_line_t1

0xa9b8,	// (0x0004b090) list_medium_line_x2_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x2_g1

0xa9c4,	// (0x0004b09c) list_medium_line_x2_g2_ParamLimits

0xa9c4,	// (0x0004b09c) list_medium_line_x2_g2

0x0001,

0xfcb5,	// (0x0005038d) list_medium_line_x2_g_ParamLimits

0xfcb5,	// (0x0005038d) list_medium_line_x2_g

0xc5bc,	// (0x0004cc94) list_medium_line_x2_t1_ParamLimits

0xc5bc,	// (0x0004cc94) list_medium_line_x2_t1

0xa9b8,	// (0x0004b090) list_medium_line_x3_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x3_g1

0xa9c4,	// (0x0004b09c) list_medium_line_x3_g2_ParamLimits

0xa9c4,	// (0x0004b09c) list_medium_line_x3_g2

0x0001,

0xfcb5,	// (0x0005038d) list_medium_line_x3_g_ParamLimits

0xfcb5,	// (0x0005038d) list_medium_line_x3_g

0xc5bc,	// (0x0004cc94) list_medium_line_x3_t1_ParamLimits

0xc5bc,	// (0x0004cc94) list_medium_line_x3_t1

0xc5d2,	// (0x0004ccaa) thumb_sp_fs_scroll_pane_g1

0xc5db,	// (0x0004ccb3) thumb_sp_fs_scroll_pane_g2

0xc5e4,	// (0x0004ccbc) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcba,	// (0x00050392) thumb_sp_fs_scroll_pane_g

0xc5d2,	// (0x0004ccaa) bg_sp_fs_scroll_pane_g1

0xc5db,	// (0x0004ccb3) bg_sp_fs_scroll_pane_g2

0xc5e4,	// (0x0004ccbc) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcba,	// (0x00050392) bg_sp_fs_scroll_pane_g

0xa9b8,	// (0x0004b090) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa9b8,	// (0x0004b090) list_medium_line_x2_t3_g4_g1

0xaa2e,	// (0x0004b106) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaa2e,	// (0x0004b106) list_medium_line_x2_t3_g4_g2

0xa9c4,	// (0x0004b09c) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa9c4,	// (0x0004b09c) list_medium_line_x2_t3_g4_g3

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa9d0,	// (0x0004b0a8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0004f996) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0004f996) list_medium_line_x2_t3_g4_g

0x1407,	// (0x00041adf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1407,	// (0x00041adf) list_medium_line_x2_t3_g4_t1

0x141d,	// (0x00041af5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x141d,	// (0x00041af5) list_medium_line_x2_t3_g4_t2

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa9f1,	// (0x0004b0c9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcc1,	// (0x00050399) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcc1,	// (0x00050399) list_medium_line_x2_t3_g4_t

0x0f39,	// (0x00041611) list_medium_line_g2_g1_ParamLimits

0x0f39,	// (0x00041611) list_medium_line_g2_g1

0x0f45,	// (0x0004161d) list_medium_line_g2_g2_ParamLimits

0x0f45,	// (0x0004161d) list_medium_line_g2_g2

0x0001,

0xf973,	// (0x0005004b) list_medium_line_g2_g_ParamLimits

0xf973,	// (0x0005004b) list_medium_line_g2_g

0x1436,	// (0x00041b0e) list_medium_line_g2_t1_ParamLimits

0x1436,	// (0x00041b0e) list_medium_line_g2_t1

0x0f39,	// (0x00041611) list_medium_line_t3_g2_g1_ParamLimits

0x0f39,	// (0x00041611) list_medium_line_t3_g2_g1

0x0f45,	// (0x0004161d) list_medium_line_t3_g2_g2_ParamLimits

0x0f45,	// (0x0004161d) list_medium_line_t3_g2_g2

0x0001,

0xf973,	// (0x0005004b) list_medium_line_t3_g2_g_ParamLimits

0xf973,	// (0x0005004b) list_medium_line_t3_g2_g

0x144b,	// (0x00041b23) list_medium_line_t3_g2_t1_ParamLimits

0x144b,	// (0x00041b23) list_medium_line_t3_g2_t1

0x1462,	// (0x00041b3a) list_medium_line_t3_g2_t2_ParamLimits

0x1462,	// (0x00041b3a) list_medium_line_t3_g2_t2

0x1477,	// (0x00041b4f) list_medium_line_t3_g2_t3_ParamLimits

0x1477,	// (0x00041b4f) list_medium_line_t3_g2_t3

0x0002,

0xfcc8,	// (0x000503a0) list_medium_line_t3_g2_t_ParamLimits

0xfcc8,	// (0x000503a0) list_medium_line_t3_g2_t

0x113f,	// (0x00041817) list_medium_line_right_icon_g1

0x148c,	// (0x00041b64) list_medium_line_right_icon_t1

0x0f39,	// (0x00041611) list_medium_line_t2_g1_ParamLimits

0x0f39,	// (0x00041611) list_medium_line_t2_g1

0x149a,	// (0x00041b72) list_medium_line_t2_t1_ParamLimits

0x149a,	// (0x00041b72) list_medium_line_t2_t1

0x14b1,	// (0x00041b89) list_medium_line_t2_t2_ParamLimits

0x14b1,	// (0x00041b89) list_medium_line_t2_t2

0x0001,

0xfccf,	// (0x000503a7) list_medium_line_t2_t_ParamLimits

0xfccf,	// (0x000503a7) list_medium_line_t2_t

0x0f39,	// (0x00041611) list_medium_line_t3_g1_ParamLimits

0x0f39,	// (0x00041611) list_medium_line_t3_g1

0x14c3,	// (0x00041b9b) list_medium_line_t3_t1_ParamLimits

0x14c3,	// (0x00041b9b) list_medium_line_t3_t1

0x14da,	// (0x00041bb2) list_medium_line_t3_t2_ParamLimits

0x14da,	// (0x00041bb2) list_medium_line_t3_t2

0x14ef,	// (0x00041bc7) list_medium_line_t3_t3_ParamLimits

0x14ef,	// (0x00041bc7) list_medium_line_t3_t3

0x0002,

0xfcd4,	// (0x000503ac) list_medium_line_t3_t_ParamLimits

0xfcd4,	// (0x000503ac) list_medium_line_t3_t

0x0f39,	// (0x00041611) list_medium_line_g3_g1_ParamLimits

0x0f39,	// (0x00041611) list_medium_line_g3_g1

0x1501,	// (0x00041bd9) list_medium_line_g3_g2_ParamLimits

0x1501,	// (0x00041bd9) list_medium_line_g3_g2

0x0f45,	// (0x0004161d) list_medium_line_g3_g3_ParamLimits

0x0f45,	// (0x0004161d) list_medium_line_g3_g3

0x0002,

0xfcdb,	// (0x000503b3) list_medium_line_g3_g_ParamLimits

0xfcdb,	// (0x000503b3) list_medium_line_g3_g

0x150d,	// (0x00041be5) list_medium_line_g3_t1_ParamLimits

0x150d,	// (0x00041be5) list_medium_line_g3_t1

0x0f39,	// (0x00041611) list_medium_line_t2_g3_g1_ParamLimits

0x0f39,	// (0x00041611) list_medium_line_t2_g3_g1

0x1501,	// (0x00041bd9) list_medium_line_t2_g3_g2_ParamLimits

0x1501,	// (0x00041bd9) list_medium_line_t2_g3_g2

0x0f45,	// (0x0004161d) list_medium_line_t2_g3_g3_ParamLimits

0x0f45,	// (0x0004161d) list_medium_line_t2_g3_g3

0x0002,

0xfcdb,	// (0x000503b3) list_medium_line_t2_g3_g_ParamLimits

0xfcdb,	// (0x000503b3) list_medium_line_t2_g3_g

0x1522,	// (0x00041bfa) list_medium_line_t2_g3_t1_ParamLimits

0x1522,	// (0x00041bfa) list_medium_line_t2_g3_t1

0x153c,	// (0x00041c14) list_medium_line_t2_g3_t2_ParamLimits

0x153c,	// (0x00041c14) list_medium_line_t2_g3_t2

0x0001,

0xfce2,	// (0x000503ba) list_medium_line_t2_g3_t_ParamLimits

0xfce2,	// (0x000503ba) list_medium_line_t2_g3_t

0x0f39,	// (0x00041611) list_medium_line_t3_g3_g1_ParamLimits

0x0f39,	// (0x00041611) list_medium_line_t3_g3_g1

0x1501,	// (0x00041bd9) list_medium_line_t3_g3_g2_ParamLimits

0x1501,	// (0x00041bd9) list_medium_line_t3_g3_g2

0x0f45,	// (0x0004161d) list_medium_line_t3_g3_g3_ParamLimits

0x0f45,	// (0x0004161d) list_medium_line_t3_g3_g3

0x0002,

0xfcdb,	// (0x000503b3) list_medium_line_t3_g3_g_ParamLimits

0xfcdb,	// (0x000503b3) list_medium_line_t3_g3_g

0x1551,	// (0x00041c29) list_medium_line_t3_g3_t1_ParamLimits

0x1551,	// (0x00041c29) list_medium_line_t3_g3_t1

0x1565,	// (0x00041c3d) list_medium_line_t3_g3_t2_ParamLimits

0x1565,	// (0x00041c3d) list_medium_line_t3_g3_t2

0x1577,	// (0x00041c4f) list_medium_line_t3_g3_t3_ParamLimits

0x1577,	// (0x00041c4f) list_medium_line_t3_g3_t3

0x0002,

0xfce7,	// (0x000503bf) list_medium_line_t3_g3_t_ParamLimits

0xfce7,	// (0x000503bf) list_medium_line_t3_g3_t

0x123e,	// (0x00041916) list_medium_line_right_iconx2_g1

0x113f,	// (0x00041817) list_medium_line_right_iconx2_g2

0x0001,

0xfcee,	// (0x000503c6) list_medium_line_right_iconx2_g

0x1589,	// (0x00041c61) list_medium_line_right_iconx2_t1

0x123e,	// (0x00041916) list_medium_line_t2_right_iconx2_g1

0x113f,	// (0x00041817) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcee,	// (0x000503c6) list_medium_line_t2_right_iconx2_g

0x1597,	// (0x00041c6f) list_medium_line_t2_right_iconx2_t1

0x15a7,	// (0x00041c7f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcf3,	// (0x000503cb) list_medium_line_t2_right_iconx2_t

0xc5ed,	// (0x0004ccc5) list_medium_line_x4_t4_t1

0x15b5,	// (0x00041c8d) list_medium_line_x4_t4_t2

0x15c5,	// (0x00041c9d) list_medium_line_x4_t4_t3

0x15d5,	// (0x00041cad) list_medium_line_x4_t4_t4

0x0003,

0xfcf8,	// (0x000503d0) list_medium_line_x4_t4_t

0x9a48,	// (0x0004a120) tport_appsw_pane_ParamLimits

0x9a48,	// (0x0004a120) tport_appsw_pane

0x9a59,	// (0x0004a131) tport_contact_pane_ParamLimits

0x9a59,	// (0x0004a131) tport_contact_pane

0x9a6d,	// (0x0004a145) tport_listscroll_pane_ParamLimits

0x9a6d,	// (0x0004a145) tport_listscroll_pane

0x9a85,	// (0x0004a15d) cell_tport_appsw_pane_ParamLimits

0x9a85,	// (0x0004a15d) cell_tport_appsw_pane

0xb1dc,	// (0x0004b8b4) tport_appsw_pane_g1_ParamLimits

0xb1dc,	// (0x0004b8b4) tport_appsw_pane_g1

0xc5fb,	// (0x0004ccd3) tport_contact_pane_g1

0xc604,	// (0x0004ccdc) tport_contact_pane_t1

0xc612,	// (0x0004ccea) tport_contact_pane_t2

0x0001,

0xfd01,	// (0x000503d9) tport_contact_pane_t

0xc620,	// (0x0004ccf8) list_tport_pane

0xd946,	// (0x0004e01e) scroll_pane_cp_030

0xc631,	// (0x0004cd09) cell_tport_appsw_pane_g1

0xc641,	// (0x0004cd19) cell_tport_appsw_pane_t1

0xc64f,	// (0x0004cd27) grid_highlight_pane_cp019

0x9abb,	// (0x0004a193) list_tport_double_graphic_pane_ParamLimits

0x9abb,	// (0x0004a193) list_tport_double_graphic_pane

0xefab,	// (0x0004f683) list_highlight_pane_cp023_ParamLimits

0xefab,	// (0x0004f683) list_highlight_pane_cp023

0x9ac8,	// (0x0004a1a0) list_tport_double_graphic_pane_g1_ParamLimits

0x9ac8,	// (0x0004a1a0) list_tport_double_graphic_pane_g1

0x9ad5,	// (0x0004a1ad) list_tport_double_graphic_pane_t1_ParamLimits

0x9ad5,	// (0x0004a1ad) list_tport_double_graphic_pane_t1

0x9aea,	// (0x0004a1c2) list_tport_double_graphic_pane_t2_ParamLimits

0x9aea,	// (0x0004a1c2) list_tport_double_graphic_pane_t2

0x0001,

0xfd0d,	// (0x000503e5) list_tport_double_graphic_pane_t_ParamLimits

0xfd0d,	// (0x000503e5) list_tport_double_graphic_pane_t

0xcff9,	// (0x0004d6d1) main_cale_note_pane

0x7f62,	// (0x0004863a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7f62,	// (0x0004863a) cell_vitu2_function_top_wide_pane_cp01

0x951e,	// (0x00049bf6) wait_bar_pane_cp05_ParamLimits

0xefab,	// (0x0004f683) listscroll_cmail_pane

0xc657,	// (0x0004cd2f) list_cmail_pane

0x9afc,	// (0x0004a1d4) list_cmail_body_pane

0x9afc,	// (0x0004a1d4) list_single_cmail_header_caption_pane

0x9b13,	// (0x0004a1eb) list_single_cmail_header_detail_pane_ParamLimits

0x9b13,	// (0x0004a1eb) list_single_cmail_header_detail_pane

0xc673,	// (0x0004cd4b) list_single_cmail_header_caption_pane_t1

0x15e5,	// (0x00041cbd) list_single_cmail_header_detail_pane_g1_ParamLimits

0x15e5,	// (0x00041cbd) list_single_cmail_header_detail_pane_g1

0xc68a,	// (0x0004cd62) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc68a,	// (0x0004cd62) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd12,	// (0x000503ea) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd12,	// (0x000503ea) list_single_cmail_header_detail_pane_g

0x15fb,	// (0x00041cd3) list_single_cmail_header_detail_pane_t1_ParamLimits

0x15fb,	// (0x00041cd3) list_single_cmail_header_detail_pane_t1

0xc6c7,	// (0x0004cd9f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xc6c7,	// (0x0004cd9f) list_single_cmail_header_editor_pane_bg

0xc6de,	// (0x0004cdb6) list_cmail_body_pane_g1

0xc6e7,	// (0x0004cdbf) list_cmail_body_pane_t1

0xb22b,	// (0x0004b903) list_single_cmail_header_editor_pane_bg_g1

0xdcc9,	// (0x0004e3a1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb23b,	// (0x0004b913) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb233,	// (0x0004b90b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb46a,	// (0x0004bb42) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb25b,	// (0x0004b933) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb24b,	// (0x0004b923) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb253,	// (0x0004b92b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdca9,	// (0x0004e381) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9b3c,	// (0x0004a214) calenote_gesture_pane_ParamLimits

0x9b3c,	// (0x0004a214) calenote_gesture_pane

0x9b58,	// (0x0004a230) calenote_window_pane_ParamLimits

0x9b58,	// (0x0004a230) calenote_window_pane

0xc6f5,	// (0x0004cdcd) popup_note_window_cp01

0x9b74,	// (0x0004a24c) calenote_swipe_1_pane_ParamLimits

0x9b74,	// (0x0004a24c) calenote_swipe_1_pane

0x98f1,	// (0x00049fc9) calenote_swipe_2_pane_ParamLimits

0x98f1,	// (0x00049fc9) calenote_swipe_2_pane

0xc3a1,	// (0x0004ca79) calenote_swipe_1_pane_g1_ParamLimits

0xc3a1,	// (0x0004ca79) calenote_swipe_1_pane_g1

0xc3ae,	// (0x0004ca86) calenote_swipe_1_pane_g2_ParamLimits

0xc3ae,	// (0x0004ca86) calenote_swipe_1_pane_g2

0x0001,

0xfc36,	// (0x0005030e) calenote_swipe_1_pane_g_ParamLimits

0xfc36,	// (0x0005030e) calenote_swipe_1_pane_g

0xc707,	// (0x0004cddf) calenote_swipe_1_pane_t1_ParamLimits

0xc707,	// (0x0004cddf) calenote_swipe_1_pane_t1

0xc3a1,	// (0x0004ca79) calenote_swipe_2_pane_g1_ParamLimits

0xc3a1,	// (0x0004ca79) calenote_swipe_2_pane_g1

0xc726,	// (0x0004cdfe) calenote_swipe_2_pane_g2_ParamLimits

0xc726,	// (0x0004cdfe) calenote_swipe_2_pane_g2

0x0001,

0xfd1e,	// (0x000503f6) calenote_swipe_2_pane_g_ParamLimits

0xfd1e,	// (0x000503f6) calenote_swipe_2_pane_g

0xc732,	// (0x0004ce0a) calenote_swipe_2_pane_t1_ParamLimits

0xc732,	// (0x0004ce0a) calenote_swipe_2_pane_t1

0xcff9,	// (0x0004d6d1) main_mup_navstr_pane

0x6726,	// (0x00046dfe) main_mup3_pane_t7_ParamLimits

0x6726,	// (0x00046dfe) main_mup3_pane_t7

0xae8a,	// (0x0004b562) main_mp4_pane_g6_ParamLimits

0xae8a,	// (0x0004b562) main_mp4_pane_g6

0xb03c,	// (0x0004b714) main_image3_pane_t4_ParamLimits

0xb03c,	// (0x0004b714) main_image3_pane_t4

0x9b89,	// (0x0004a261) popup_navstr_preview_pane_ParamLimits

0x9b89,	// (0x0004a261) popup_navstr_preview_pane

0x9b99,	// (0x0004a271) scroll_navstr_pane_ParamLimits

0x9b99,	// (0x0004a271) scroll_navstr_pane

0xcff9,	// (0x0004d6d1) bg_popup_preview_window_pane_cp04

0xc759,	// (0x0004ce31) popup_navstr_preview_pane_t1

0x9bad,	// (0x0004a285) scroll_navstr_pane_g1_ParamLimits

0x9bad,	// (0x0004a285) scroll_navstr_pane_g1

0x9bc1,	// (0x0004a299) scroll_navstr_pane_t1_ParamLimits

0x9bc1,	// (0x0004a299) scroll_navstr_pane_t1

0xc6fe,	// (0x0004cdd6) bg_button_pane_cp014

0xc6fe,	// (0x0004cdd6) bg_button_pane_cp030

0xc305,	// (0x0004c9dd) list_double_fisheye_pane_g4_ParamLimits

0xc305,	// (0x0004c9dd) list_double_fisheye_pane_g4

0xc311,	// (0x0004c9e9) list_double_fisheye_pane_g5_ParamLimits

0xc311,	// (0x0004c9e9) list_double_fisheye_pane_g5

0xc667,	// (0x0004cd3f) sp_fs_scroll_pane_cp03

0xc467,	// (0x0004cb3f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc473,	// (0x0004cb4b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc53,	// (0x0005032b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc47f,	// (0x0004cb57) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc65f,	// (0x0004cd37) sp_fs_scroll_pane_cp02

0xd958,	// (0x0004e030) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd958,	// (0x0004e030) popup_sp_fs_calendar_preview_list_single_pane

0xcff9,	// (0x0004d6d1) main_cam6_pano_pane

0xefab,	// (0x0004f683) main_mup3_pane_ParamLimits

0xcff9,	// (0x0004d6d1) main_phacti_pane

0x9411,	// (0x00049ae9) bg_button_pane_cp11

0x9429,	// (0x00049b01) main_mobtv_info_pane_g2_ParamLimits

0x9429,	// (0x00049b01) main_mobtv_info_pane_g2

0x0001,

0xfbb3,	// (0x0005028b) main_mobtv_info_pane_g_ParamLimits

0xfbb3,	// (0x0005028b) main_mobtv_info_pane_g

0x95de,	// (0x00049cb6) sc_clock_pane_t5_ParamLimits

0x95de,	// (0x00049cb6) sc_clock_pane_t5

0x9689,	// (0x00049d61) main_radioblah_pane_g1_ParamLimits

0xc26a,	// (0x0004c942) main_radioblah_pane_t3_ParamLimits

0xc26a,	// (0x0004c942) main_radioblah_pane_t3

0xc282,	// (0x0004c95a) main_radioblah_pane_t4_ParamLimits

0xc282,	// (0x0004c95a) main_radioblah_pane_t4

0x96b1,	// (0x00049d89) main_radioblah_text_pane_ParamLimits

0x96b1,	// (0x00049d89) main_radioblah_text_pane

0x96c3,	// (0x00049d9b) main_radioblah_info_pane_g1_ParamLimits

0x9756,	// (0x00049e2e) main_radioblah_info_pane_t4_ParamLimits

0x9756,	// (0x00049e2e) main_radioblah_info_pane_t4

0xefab,	// (0x0004f683) main_sp_fs_calendar_pane

0x9bd7,	// (0x0004a2af) main_phacti_pane_g1

0x9bdf,	// (0x0004a2b7) phacti_note_pane_ParamLimits

0x9bdf,	// (0x0004a2b7) phacti_note_pane

0xc770,	// (0x0004ce48) phacti_term_pane_ParamLimits

0xc770,	// (0x0004ce48) phacti_term_pane

0xc785,	// (0x0004ce5d) phacti_note_pane_t1_ParamLimits

0xc785,	// (0x0004ce5d) phacti_note_pane_t1

0xc79c,	// (0x0004ce74) phacti_term_pane_g1

0xc7a4,	// (0x0004ce7c) phacti_term_pane_t1_ParamLimits

0xc7a4,	// (0x0004ce7c) phacti_term_pane_t1

0xc7ce,	// (0x0004cea6) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc7d6,	// (0x0004ceae) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd28,	// (0x00050400) popup_sp_fs_calendar_preview_list_single_pane_g

0xc7de,	// (0x0004ceb6) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc7de,	// (0x0004ceb6) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc7f4,	// (0x0004cecc) aid_popup_sp_fs_bg_corner_pane

0x5e47,	// (0x0004651f) popup_sp_fs_calendar_preview_bg_pane_g1

0xcff9,	// (0x0004d6d1) popup_sp_fs_calendar_preview_bg_pane

0xc7fc,	// (0x0004ced4) popup_sp_fs_calendar_preview_list_pane

0x4e65,	// (0x0004553d) bg_main_sp_fs_cale_pane_ParamLimits

0x4e65,	// (0x0004553d) bg_main_sp_fs_cale_pane

0xc80d,	// (0x0004cee5) listscroll_cale_mrui_pane_ParamLimits

0xc80d,	// (0x0004cee5) listscroll_cale_mrui_pane

0xc822,	// (0x0004cefa) listscroll_sp_fs_schedule_track_pane

0xc82b,	// (0x0004cf03) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc82b,	// (0x0004cf03) main_sp_fs_ctrlbar_pane_cp01

0xc83e,	// (0x0004cf16) main_sp_fs_ribbon_pane

0xc846,	// (0x0004cf1e) popup_sp_fs_cale_preview_window

0x9c42,	// (0x0004a31a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9c42,	// (0x0004a31a) list_single_sp_fs_schedule_track_pane

0xefab,	// (0x0004f683) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xefab,	// (0x0004f683) bg_sp_fs_highlight_list_pane_cp03

0x9c56,	// (0x0004a32e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9c56,	// (0x0004a32e) list_single_sp_fs_schedule_track_pane_g1

0x9c62,	// (0x0004a33a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9c62,	// (0x0004a33a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2d,	// (0x00050405) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2d,	// (0x00050405) list_single_sp_fs_schedule_track_pane_g

0x9c6e,	// (0x0004a346) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9c6e,	// (0x0004a346) list_single_sp_fs_schedule_track_pane_t1

0x9c88,	// (0x0004a360) sp_fs_schedule_track_pane_ParamLimits

0x9c88,	// (0x0004a360) sp_fs_schedule_track_pane

0xc855,	// (0x0004cf2d) sp_fs_schedule_track_pane_g1

0xc85d,	// (0x0004cf35) sp_fs_schedule_track_pane_g2

0xc865,	// (0x0004cf3d) sp_fs_schedule_track_pane_g3

0xc86d,	// (0x0004cf45) sp_fs_schedule_track_pane_g4

0xc875,	// (0x0004cf4d) sp_fs_schedule_track_pane_g5

0x0004,

0xfd32,	// (0x0005040a) sp_fs_schedule_track_pane_g

0xb22b,	// (0x0004b903) bg_sp_fs_schedule_viewer_highlight_g1

0xdcc9,	// (0x0004e3a1) bg_sp_fs_schedule_viewer_highlight_g2

0xb233,	// (0x0004b90b) bg_sp_fs_schedule_viewer_highlight_g3

0xb23b,	// (0x0004b913) bg_sp_fs_schedule_viewer_highlight_g4

0xb46a,	// (0x0004bb42) bg_sp_fs_schedule_viewer_highlight_g5

0xb24b,	// (0x0004b923) bg_sp_fs_schedule_viewer_highlight_g6

0xb253,	// (0x0004b92b) bg_sp_fs_schedule_viewer_highlight_g7

0xb25b,	// (0x0004b933) bg_sp_fs_schedule_viewer_highlight_g8

0xdca9,	// (0x0004e381) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3d,	// (0x00050415) bg_sp_fs_schedule_viewer_highlight_g

0xcff9,	// (0x0004d6d1) bg_main_sp_fs_ribbon_pane

0x9c99,	// (0x0004a371) main_sp_fs_ribbon_pane_g1

0xc87d,	// (0x0004cf55) main_sp_fs_ribbon_pane_t1

0x9ca2,	// (0x0004a37a) main_sp_fs_ribbon_pane_t2

0xc88c,	// (0x0004cf64) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd50,	// (0x00050428) main_sp_fs_ribbon_pane_t

0xc89b,	// (0x0004cf73) main_sp_fs_ribbon_scheduler_pane

0xc8a3,	// (0x0004cf7b) bg_main_sp_fs_ribbon_pane_g1

0xc8ac,	// (0x0004cf84) bg_main_sp_fs_ribbon_pane_g2

0xc8b5,	// (0x0004cf8d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd57,	// (0x0005042f) bg_main_sp_fs_ribbon_pane_g

0xc8bd,	// (0x0004cf95) main_sp_fs_ribbon_scheduler_pane_g1

0xc8c6,	// (0x0004cf9e) main_sp_fs_ribbon_scheduler_pane_g2

0xc8cf,	// (0x0004cfa7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd5e,	// (0x00050436) main_sp_fs_ribbon_scheduler_pane_g

0xc8d8,	// (0x0004cfb0) list_cale_mrui_pane

0x9cb1,	// (0x0004a389) sp_fs_scroll_pane_cp07_ParamLimits

0x9cb1,	// (0x0004a389) sp_fs_scroll_pane_cp07

0x9cc9,	// (0x0004a3a1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9cc9,	// (0x0004a3a1) bg_sp_fs_schedule_viewer_highlight

0xc8e5,	// (0x0004cfbd) list_single_sp_fs_schedule_track_pane_cp01

0xc8ed,	// (0x0004cfc5) list_sp_fs_schedule_track_pane

0xc8f5,	// (0x0004cfcd) sp_fs_scroll_pane_cp06_ParamLimits

0xc8f5,	// (0x0004cfcd) sp_fs_scroll_pane_cp06

0x5e47,	// (0x0004651f) bgmain_sp_fs_calendar_pane_g1

0x1626,	// (0x00041cfe) list_single_cale_mrui_pane_ParamLimits

0x1626,	// (0x00041cfe) list_single_cale_mrui_pane

0xc907,	// (0x0004cfdf) list_single_cale_mrui_row_pane_ParamLimits

0xc907,	// (0x0004cfdf) list_single_cale_mrui_row_pane

0x1647,	// (0x00041d1f) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1647,	// (0x00041d1f) list_single_cale_mrui_row_pane_g1

0x167f,	// (0x00041d57) list_single_cale_mrui_row_pane_t1_ParamLimits

0x167f,	// (0x00041d57) list_single_cale_mrui_row_pane_t1

0x1691,	// (0x00041d69) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1691,	// (0x00041d69) list_single_cale_mrui_row_pane_t2

0x16f7,	// (0x00041dcf) list_single_cale_mrui_row_pane_t3_ParamLimits

0x16f7,	// (0x00041dcf) list_single_cale_mrui_row_pane_t3

0x1726,	// (0x00041dfe) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1726,	// (0x00041dfe) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6c,	// (0x00050444) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6c,	// (0x00050444) list_single_cale_mrui_row_pane_t

0x1755,	// (0x00041e2d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1755,	// (0x00041e2d) list_single_cmail_header_editor_pane_bg_cp01

0x1779,	// (0x00041e51) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1779,	// (0x00041e51) list_single_cmail_header_editor_pane_bg_cp02

0x9cd9,	// (0x0004a3b1) main_radioblah_text_pane_t1_ParamLimits

0x9cd9,	// (0x0004a3b1) main_radioblah_text_pane_t1

0xc92a,	// (0x0004d002) cam6_indi_pane_cp01

0xc932,	// (0x0004d00a) cam6_mode_pane_cp01

0xc93a,	// (0x0004d012) cam6_pano_pane

0xc943,	// (0x0004d01b) cam6_zoom_pane_cp01

0xc94b,	// (0x0004d023) cam6_pano_image_pane

0xc954,	// (0x0004d02c) cam6_pano_pane_g1

0xbfd1,	// (0x0004c6a9) cam6_pano_pane_g2

0xc95d,	// (0x0004d035) cam6_pano_pane_g3

0xc966,	// (0x0004d03e) cam6_pano_pane_g4

0x70e8,	// (0x000477c0) cam6_pano_pane_g5

0xc96f,	// (0x0004d047) cam6_pano_pane_g6

0xc977,	// (0x0004d04f) cam6_pano_pane_g7

0xc97f,	// (0x0004d057) cam6_pano_pane_g8

0xc988,	// (0x0004d060) cam6_pano_pane_g9

0x0008,

0xfd75,	// (0x0005044d) cam6_pano_pane_g

0xcff9,	// (0x0004d6d1) main_browser_tag_pane

0xc751,	// (0x0004ce29) grid_navstr_albumart_pane

0xc991,	// (0x0004d069) cell_navstr_albumart_pane_ParamLimits

0xc991,	// (0x0004d069) cell_navstr_albumart_pane

0xe59f,	// (0x0004ec77) cell_navstr_albumart_pane_g1

0x49ad,	// (0x00045085) cell_navstr_albumart_pane_g2

0x49bd,	// (0x00045095) cell_navstr_albumart_pane_g3

0x49b5,	// (0x0004508d) cell_navstr_albumart_pane_g4

0x0003,

0xfd88,	// (0x00050460) cell_navstr_albumart_pane_g

0x9cf2,	// (0x0004a3ca) bt_list_pane_ParamLimits

0x9cf2,	// (0x0004a3ca) bt_list_pane

0x9d05,	// (0x0004a3dd) bt_list_pane_t1

0x9d14,	// (0x0004a3ec) bt_list_pane_t2

0x0001,

0xfd91,	// (0x00050469) bt_list_pane_t

0xcff9,	// (0x0004d6d1) main_cale_prevew_pane

0x9d23,	// (0x0004a3fb) popup_cale_preview_window_ParamLimits

0x9d23,	// (0x0004a3fb) popup_cale_preview_window

0xefab,	// (0x0004f683) bg_popup_preview_window_pane_cp05_ParamLimits

0xefab,	// (0x0004f683) bg_popup_preview_window_pane_cp05

0xc9a8,	// (0x0004d080) list_cale_preview_pane_ParamLimits

0xc9a8,	// (0x0004d080) list_cale_preview_pane

0x9d38,	// (0x0004a410) list_double_cale_preview_pane_ParamLimits

0x9d38,	// (0x0004a410) list_double_cale_preview_pane

0x9d49,	// (0x0004a421) list_single_cale_preview_pane_ParamLimits

0x9d49,	// (0x0004a421) list_single_cale_preview_pane

0xc9b4,	// (0x0004d08c) list_single_cale_preview_pane_g1

0xc9bc,	// (0x0004d094) list_single_cale_preview_pane_t1_ParamLimits

0xc9bc,	// (0x0004d094) list_single_cale_preview_pane_t1

0x9d5d,	// (0x0004a435) list_double_cale_preview_pane_g1

0x9d65,	// (0x0004a43d) list_double_cale_preview_pane_t1_ParamLimits

0x9d65,	// (0x0004a43d) list_double_cale_preview_pane_t1

0x9d7a,	// (0x0004a452) list_double_cale_preview_pane_t2_ParamLimits

0x9d7a,	// (0x0004a452) list_double_cale_preview_pane_t2

0x0001,

0xfd96,	// (0x0005046e) list_double_cale_preview_pane_t_ParamLimits

0xfd96,	// (0x0005046e) list_double_cale_preview_pane_t

0xcff9,	// (0x0004d6d1) main_ezdial_pane

0xefab,	// (0x0004f683) main_sp_fs_email_pane_ParamLimits

0x993b,	// (0x0004a013) cmail_ddmenu_btn01_pane_ParamLimits

0x993b,	// (0x0004a013) cmail_ddmenu_btn01_pane

0x994e,	// (0x0004a026) cmail_ddmenu_btn02_pane_ParamLimits

0x994e,	// (0x0004a026) cmail_ddmenu_btn02_pane

0x9971,	// (0x0004a049) cmail_ddmenu_btn03_pane_ParamLimits

0x9971,	// (0x0004a049) cmail_ddmenu_btn03_pane

0x9993,	// (0x0004a06b) main_sp_fs_ctrlbar_pane_ParamLimits

0x99b4,	// (0x0004a08c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9afc,	// (0x0004a1d4) list_cmail_body_pane_ParamLimits

0xc681,	// (0x0004cd59) bg_button_pane_cp12

0xc696,	// (0x0004cd6e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc696,	// (0x0004cd6e) list_single_cmail_header_detail_pane_g3

0xc6a3,	// (0x0004cd7b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc6a3,	// (0x0004cd7b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd19,	// (0x000503f1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd19,	// (0x000503f1) list_single_cmail_header_detail_pane_t

0xc7b9,	// (0x0004ce91) phacti_term_pane_t2_ParamLimits

0xc7b9,	// (0x0004ce91) phacti_term_pane_t2

0x0001,

0xfd23,	// (0x000503fb) phacti_term_pane_t_ParamLimits

0xfd23,	// (0x000503fb) phacti_term_pane_t

0xc9d1,	// (0x0004d0a9) aid_size_list_single_double

0x9d92,	// (0x0004a46a) popup_ezdial_listscroll_window

0x9da8,	// (0x0004a480) popup_number_entry_window_cp01

0xda10,	// (0x0004e0e8) bg_popup_call_pane_cp09

0xc9dd,	// (0x0004d0b5) ezdial_list_pane

0xc9e5,	// (0x0004d0bd) scroll_pane_cp23

0x4e65,	// (0x0004553d) bg_button_pane_cp028_ParamLimits

0x4e65,	// (0x0004553d) bg_button_pane_cp028

0x9db4,	// (0x0004a48c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9db4,	// (0x0004a48c) cmail_ddmenu_btn01_pane_g1

0x9dc0,	// (0x0004a498) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9dc0,	// (0x0004a498) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9b,	// (0x00050473) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9b,	// (0x00050473) cmail_ddmenu_btn01_pane_g

0xc9ed,	// (0x0004d0c5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc9ed,	// (0x0004d0c5) cmail_ddmenu_btn01_pane_t1

0x4e65,	// (0x0004553d) bg_button_pane_cp029_ParamLimits

0x4e65,	// (0x0004553d) bg_button_pane_cp029

0x9dcc,	// (0x0004a4a4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9dcc,	// (0x0004a4a4) cmail_ddmenu_btn02_pane_g1

0x9de4,	// (0x0004a4bc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9de4,	// (0x0004a4bc) cmail_ddmenu_btn02_pane_t1

0xefab,	// (0x0004f683) bg_button_pane_cp031_ParamLimits

0xefab,	// (0x0004f683) bg_button_pane_cp031

0x9dcc,	// (0x0004a4a4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9dcc,	// (0x0004a4a4) cmail_ddmenu_btn03_pane_g1

0x9de4,	// (0x0004a4bc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9de4,	// (0x0004a4bc) cmail_ddmenu_btn03_pane_t1

0x7868,	// (0x00047f40) cell_dialer2_keypad_pane_t1_ParamLimits

0x7882,	// (0x00047f5a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7882,	// (0x00047f5a) cell_dialer2_keypad_pane_t1_copy1

0x927d,	// (0x00049955) ncimui_group_button_pane

0xefab,	// (0x0004f683) main_sp_fs_calendar_pane_ParamLimits

0x9afc,	// (0x0004a1d4) list_single_cmail_header_caption_pane_ParamLimits

0xc804,	// (0x0004cedc) aid_recal_txt_sm_pane

0xcff9,	// (0x0004d6d1) mian_recal_day_pane

0xc846,	// (0x0004cf1e) popup_sp_fs_cale_preview_window_ParamLimits

0xca02,	// (0x0004d0da) list_recal_day_pane

0xca44,	// (0x0004d11c) list_single_recal_day_pane_ParamLimits

0xca44,	// (0x0004d11c) list_single_recal_day_pane

0xca56,	// (0x0004d12e) list_single_recal_day_pane_g1_ParamLimits

0xca56,	// (0x0004d12e) list_single_recal_day_pane_g1

0xca62,	// (0x0004d13a) list_single_recal_day_pane_g2_ParamLimits

0xca62,	// (0x0004d13a) list_single_recal_day_pane_g2

0xca6e,	// (0x0004d146) list_single_recal_day_pane_g3_ParamLimits

0xca6e,	// (0x0004d146) list_single_recal_day_pane_g3

0x1797,	// (0x00041e6f) list_single_recal_day_pane_g4_ParamLimits

0x1797,	// (0x00041e6f) list_single_recal_day_pane_g4

0xca7a,	// (0x0004d152) list_single_recal_day_pane_g5_ParamLimits

0xca7a,	// (0x0004d152) list_single_recal_day_pane_g5

0x17af,	// (0x00041e87) list_single_recal_day_pane_g6_ParamLimits

0x17af,	// (0x00041e87) list_single_recal_day_pane_g6

0x0004,

0xfdaa,	// (0x00050482) list_single_recal_day_pane_g_ParamLimits

0xfdaa,	// (0x00050482) list_single_recal_day_pane_g

0xca8e,	// (0x0004d166) list_single_recal_day_pane_t1

0x17bb,	// (0x00041e93) list_single_recal_day_pane_t2

0x0001,

0xfdb5,	// (0x0005048d) list_single_recal_day_pane_t

0x9e08,	// (0x0004a4e0) ncimui_query_button_pane_ParamLimits

0x9e08,	// (0x0004a4e0) ncimui_query_button_pane

0x9e18,	// (0x0004a4f0) ncimui_query_button_pane_t1_ParamLimits

0x9e18,	// (0x0004a4f0) ncimui_query_button_pane_t1

0xcaa0,	// (0x0004d178) ncimui_query_button_pane_t2_ParamLimits

0xcaa0,	// (0x0004d178) ncimui_query_button_pane_t2

0x0001,

0xfdba,	// (0x00050492) ncimui_query_button_pane_t_ParamLimits

0xfdba,	// (0x00050492) ncimui_query_button_pane_t

0x9e2b,	// (0x0004a503) query_button_pane_ParamLimits

0x9e2b,	// (0x0004a503) query_button_pane

0xcff9,	// (0x0004d6d1) bg_button_pane_cp0028

0xcab3,	// (0x0004d18b) query_button_pane_t1

0x4e87,	// (0x0004555f) main_tport_pane_ParamLimits

0x9a0f,	// (0x0004a0e7) bg_popup_window_pane_cp01_ParamLimits

0x9a0f,	// (0x0004a0e7) bg_popup_window_pane_cp01

0x9a26,	// (0x0004a0fe) heading_pane_cp08_ParamLimits

0x9a26,	// (0x0004a0fe) heading_pane_cp08

0x9a37,	// (0x0004a10f) heading_pane_cp07_ParamLimits

0x9a37,	// (0x0004a10f) heading_pane_cp07

0xc631,	// (0x0004cd09) cell_tport_appsw_pane_g2

0x0002,

0xfd06,	// (0x000503de) cell_tport_appsw_pane_g

0x0d68,	// (0x00041440) input_candi_list_open_g1

0xde76,	// (0x0004e54e) list_cale_time_pane_g6_ParamLimits

0xde76,	// (0x0004e54e) list_cale_time_pane_g6

0x61a9,	// (0x00046881) aid_size_touch_calib_1_ParamLimits

0x61a9,	// (0x00046881) aid_size_touch_calib_1

0x61bb,	// (0x00046893) aid_size_touch_calib_2_ParamLimits

0x61bb,	// (0x00046893) aid_size_touch_calib_2

0x61d1,	// (0x000468a9) aid_size_touch_calib_3_ParamLimits

0x61d1,	// (0x000468a9) aid_size_touch_calib_3

0x61e9,	// (0x000468c1) aid_size_touch_calib_4_ParamLimits

0x61e9,	// (0x000468c1) aid_size_touch_calib_4

0x61fd,	// (0x000468d5) main_touch_calib_button_group_pane_ParamLimits

0x61fd,	// (0x000468d5) main_touch_calib_button_group_pane

0x6215,	// (0x000468ed) main_touch_calib_pane_g1_ParamLimits

0x6227,	// (0x000468ff) main_touch_calib_pane_g2_ParamLimits

0x6239,	// (0x00046911) main_touch_calib_pane_g3_ParamLimits

0x624b,	// (0x00046923) main_touch_calib_pane_g4_ParamLimits

0xf6cc,	// (0x0004fda4) main_touch_calib_pane_g_ParamLimits

0x625d,	// (0x00046935) main_touch_calib_pane_t1_ParamLimits

0x6275,	// (0x0004694d) main_touch_calib_pane_t2_ParamLimits

0x628d,	// (0x00046965) main_touch_calib_pane_t3_ParamLimits

0x629f,	// (0x00046977) main_touch_calib_pane_t4_ParamLimits

0x62b1,	// (0x00046989) main_touch_calib_pane_t5_ParamLimits

0xf6d5,	// (0x0004fdad) main_touch_calib_pane_t_ParamLimits

0x69a5,	// (0x0004707d) list_single_fp_cale_pane_g3_ParamLimits

0x69a5,	// (0x0004707d) list_single_fp_cale_pane_g3

0xefab,	// (0x0004f683) bg_button_pane_cp012_ParamLimits

0xefab,	// (0x0004f683) bg_vkb2_func_pane_cp03_ParamLimits

0x86c1,	// (0x00048d99) cell_vitu2_function_top_pane_g1_ParamLimits

0xefab,	// (0x0004f683) bg_vkb2_func_pane_cp04_ParamLimits

0x920d,	// (0x000498e5) main_ncimui_button_group_pane_ParamLimits

0x920d,	// (0x000498e5) main_ncimui_button_group_pane

0x926b,	// (0x00049943) main_ncimui_pane_t3_ParamLimits

0x926b,	// (0x00049943) main_ncimui_pane_t3

0xc767,	// (0x0004ce3f) phacti_button_group_pane

0xc9d1,	// (0x0004d0a9) aid_size_list_single_double_ParamLimits

0x9d92,	// (0x0004a46a) popup_ezdial_listscroll_window_ParamLimits

0x9da8,	// (0x0004a480) popup_number_entry_window_cp01_ParamLimits

0x9e3d,	// (0x0004a515) phacti_button_pane_ParamLimits

0x9e3d,	// (0x0004a515) phacti_button_pane

0xcff9,	// (0x0004d6d1) bg_button_pane_cp14

0xcac1,	// (0x0004d199) phacti_button_pane_t1

0x9e4c,	// (0x0004a524) main_touch_calib_button_pane_ParamLimits

0x9e4c,	// (0x0004a524) main_touch_calib_button_pane

0xd841,	// (0x0004df19) bg_button_pane_cp18_ParamLimits

0xd841,	// (0x0004df19) bg_button_pane_cp18

0x9e67,	// (0x0004a53f) main_touch_calib_button_pane_t1_ParamLimits

0x9e67,	// (0x0004a53f) main_touch_calib_button_pane_t1

0x9e7d,	// (0x0004a555) main_touch_calib_button_pane_t2_ParamLimits

0x9e7d,	// (0x0004a555) main_touch_calib_button_pane_t2

0x0001,

0xfdbf,	// (0x00050497) main_touch_calib_button_pane_t_ParamLimits

0xfdbf,	// (0x00050497) main_touch_calib_button_pane_t

0xcff9,	// (0x0004d6d1) cell_ncimui_button_pane

0xcff9,	// (0x0004d6d1) bg_button_pane_cp032

0xcacf,	// (0x0004d1a7) cell_ncimui_button_pane_t1

0xb01c,	// (0x0004b6f4) image3_infobar_pane_ParamLimits

0xb01c,	// (0x0004b6f4) image3_infobar_pane

0x9606,	// (0x00049cde) fs_bigclock_status_pane_ParamLimits

0x9606,	// (0x00049cde) fs_bigclock_status_pane

0x9613,	// (0x00049ceb) main_fs_bigclock_clock_pane_ParamLimits

0x9613,	// (0x00049ceb) main_fs_bigclock_clock_pane

0x9635,	// (0x00049d0d) main_fs_bigclock_indi_pane_ParamLimits

0x9635,	// (0x00049d0d) main_fs_bigclock_indi_pane

0x965f,	// (0x00049d37) main_fs_bigclock_swipe_pane_ParamLimits

0x965f,	// (0x00049d37) main_fs_bigclock_swipe_pane

0xcff9,	// (0x0004d6d1) main_fs_clock_dumped_data

0xc0de,	// (0x0004c7b6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc0de,	// (0x0004c7b6) list_single_fs_bigclock_indicator_pane_g1

0xc0f8,	// (0x0004c7d0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc0f8,	// (0x0004c7d0) list_single_fs_bigclock_indicator_pane_g2

0xc112,	// (0x0004c7ea) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc112,	// (0x0004c7ea) list_single_fs_bigclock_indicator_pane_g3

0xc12c,	// (0x0004c804) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc12c,	// (0x0004c804) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbe7,	// (0x000502bf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbe7,	// (0x000502bf) list_single_fs_bigclock_indicator_pane_g

0xc155,	// (0x0004c82d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc155,	// (0x0004c82d) list_single_fs_bigclock_indicator_pane_t1

0xc17d,	// (0x0004c855) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc17d,	// (0x0004c855) list_single_fs_bigclock_indicator_pane_t2

0xc1a5,	// (0x0004c87d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc1a5,	// (0x0004c87d) list_single_fs_bigclock_indicator_pane_t3

0xc1cd,	// (0x0004c8a5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc1cd,	// (0x0004c8a5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbf2,	// (0x000502ca) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbf2,	// (0x000502ca) list_single_fs_bigclock_indicator_pane_t

0xcadd,	// (0x0004d1b5) image3_infobar_fav_pane_ParamLimits

0xcadd,	// (0x0004d1b5) image3_infobar_fav_pane

0xcaed,	// (0x0004d1c5) image3_infobar_loc_pane_ParamLimits

0xcaed,	// (0x0004d1c5) image3_infobar_loc_pane

0xcb01,	// (0x0004d1d9) image3_infobar_time_pane_ParamLimits

0xcb01,	// (0x0004d1d9) image3_infobar_time_pane

0x5e47,	// (0x0004651f) image3_infobar_time_pane_g1

0xcb11,	// (0x0004d1e9) image3_infobar_time_pane_t1

0x5e47,	// (0x0004651f) image3_infobar_loc_pane_g1

0xcb1f,	// (0x0004d1f7) image3_infobar_loc_pane_g2

0x0001,

0xfdc4,	// (0x0005049c) image3_infobar_loc_pane_g

0xcb27,	// (0x0004d1ff) image3_infobar_loc_pane_t1

0x5e47,	// (0x0004651f) image3_infobar_fav_pane_g1

0xcb35,	// (0x0004d20d) image3_infobar_fav_pane_g2

0x0001,

0xfdc9,	// (0x000504a1) image3_infobar_fav_pane_g

0xcb3d,	// (0x0004d215) fs_bigclock_status_battery_pane

0xcb46,	// (0x0004d21e) fs_bigclock_status_signal_pane

0xcb4f,	// (0x0004d227) fs_bigclock_status_title_pane

0xcb58,	// (0x0004d230) fs_bigclock_status_signal_pane_g1

0xcb61,	// (0x0004d239) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdce,	// (0x000504a6) fs_bigclock_status_signal_pane_g

0xcb69,	// (0x0004d241) fs_bigclock_status_battery_pane_g1

0xcb72,	// (0x0004d24a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd3,	// (0x000504ab) fs_bigclock_status_battery_pane_g

0xcb7a,	// (0x0004d252) fs_bigclock_status_title_pane_t1

0x9e9b,	// (0x0004a573) main_fs_bigclock_clock_pane_g1

0x9ead,	// (0x0004a585) main_fs_bigclock_clock_pane_g2

0x9ebe,	// (0x0004a596) main_fs_bigclock_clock_pane_g3

0x9ebe,	// (0x0004a596) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdd8,	// (0x000504b0) main_fs_bigclock_clock_pane_g

0x9ed1,	// (0x0004a5a9) main_fs_bigclock_clock_pane_t1

0x9eec,	// (0x0004a5c4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde1,	// (0x000504b9) main_fs_bigclock_clock_pane_t

0xcb88,	// (0x0004d260) list_single_fs_bigclock_indicator_pane_ParamLimits

0xcb88,	// (0x0004d260) list_single_fs_bigclock_indicator_pane

0xcb99,	// (0x0004d271) list_single_fs_bigclock_pane_ParamLimits

0xcb99,	// (0x0004d271) list_single_fs_bigclock_pane

0xcbbf,	// (0x0004d297) main_fs_bigclock_indicator_pane_t1

0xcbce,	// (0x0004d2a6) list_single_fs_bigclock_pane_g1

0xcbd6,	// (0x0004d2ae) list_single_fs_bigclock_pane_t1

0x5e47,	// (0x0004651f) main_fs_bigclock_swipe_pane_g1

0xcc16,	// (0x0004d2ee) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf2,	// (0x000504ca) main_fs_bigclock_swipe_pane_g

0xcc1e,	// (0x0004d2f6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xcc1e,	// (0x0004d2f6) main_fs_bigclock_swipe_pane_t1

0x378d,	// (0x00043e65) call_type_pane_ParamLimits

0xcff9,	// (0x0004d6d1) main_btmg_pane

0x1673,	// (0x00041d4b) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1673,	// (0x00041d4b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd65,	// (0x0005043d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd65,	// (0x0005043d) list_single_cale_mrui_row_pane_g

0xca2b,	// (0x0004d103) list_recal_vselct_arw_lo_pane

0xca33,	// (0x0004d10b) list_recal_vselct_arw_up_pane

0xca3b,	// (0x0004d113) list_recal_vselct_pane

0xcc3b,	// (0x0004d313) btmg_button_pane

0x9f4c,	// (0x0004a624) main_btmg_pane_g1

0xcff9,	// (0x0004d6d1) bg_button_pane_cp044

0xcc43,	// (0x0004d31b) btmg_button_pane_t1

0x4e51,	// (0x00045529) aid_listscroll_gen

0xefab,	// (0x0004f683) main_cntbar_detail_pane

0xc657,	// (0x0004cd2f) list_cmail_folder_pane

0xc667,	// (0x0004cd3f) sp_fs_scroll_pane_cp03_ParamLimits

0x9afc,	// (0x0004a1d4) list_single_fs_dyc_pane_cp01_ParamLimits

0x9afc,	// (0x0004a1d4) list_single_fs_dyc_pane_cp01

0xcc51,	// (0x0004d329) aid_size_cmail_indent

0xcc5a,	// (0x0004d332) list_single_dyc_row_pane_cp01

0x9f7c,	// (0x0004a654) cntbar_detail_list_pane_ParamLimits

0x9f7c,	// (0x0004a654) cntbar_detail_list_pane

0x9fc2,	// (0x0004a69a) main_cntbar_detail_cont_pane_ParamLimits

0x9fc2,	// (0x0004a69a) main_cntbar_detail_cont_pane

0x9fd6,	// (0x0004a6ae) scroll_pane_cp032_ParamLimits

0x9fd6,	// (0x0004a6ae) scroll_pane_cp032

0x9fe2,	// (0x0004a6ba) cntbar_detail_list_event_pane_ParamLimits

0x9fe2,	// (0x0004a6ba) cntbar_detail_list_event_pane

0x9f8c,	// (0x0004a664) cntbar_detail_list_shct_pane

0xcc63,	// (0x0004d33b) aid_list_gen

0xd946,	// (0x0004e01e) aid_scroll

0xb778,	// (0x0004be50) aid_size_touch_scroll_bar

0xb7a3,	// (0x0004be7b) aid_list_double

0x9ff3,	// (0x0004a6cb) aid_list_single

0xb7a3,	// (0x0004be7b) aid_list_single_lg

0x17cd,	// (0x00041ea5) aid_list_z_g_a_sm

0x17d5,	// (0x00041ead) aid_list_z_g_d

0x17dd,	// (0x00041eb5) aid_txt_z_prm

0xcc6c,	// (0x0004d344) aid_txt_z_prm_cp01

0xcc7a,	// (0x0004d352) aid_txt_z_sec

0x9ffc,	// (0x0004a6d4) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9ffc,	// (0x0004a6d4) main_cntbar_detail_cont_pane_g1

0xa010,	// (0x0004a6e8) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa010,	// (0x0004a6e8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf7,	// (0x000504cf) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf7,	// (0x000504cf) main_cntbar_detail_cont_pane_g

0xcc88,	// (0x0004d360) main_cntbar_detail_cont_pane_t1

0xcc96,	// (0x0004d36e) main_cntbar_detail_cont_pane_t2

0xcca4,	// (0x0004d37c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdfc,	// (0x000504d4) main_cntbar_detail_cont_pane_t

0xa020,	// (0x0004a6f8) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa020,	// (0x0004a6f8) cell_cntbar_detail_list_shct_pane

0xccb2,	// (0x0004d38a) cntbar_detail_list_shct_pane_g1

0xccbb,	// (0x0004d393) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe03,	// (0x000504db) cntbar_detail_list_shct_pane_g

0xa032,	// (0x0004a70a) cntbar_detail_list_event_pane_g1_ParamLimits

0xa032,	// (0x0004a70a) cntbar_detail_list_event_pane_g1

0xa03e,	// (0x0004a716) cntbar_detail_list_event_pane_g2_ParamLimits

0xa03e,	// (0x0004a716) cntbar_detail_list_event_pane_g2

0x0005,

0xfe08,	// (0x000504e0) cntbar_detail_list_event_pane_g_ParamLimits

0xfe08,	// (0x000504e0) cntbar_detail_list_event_pane_g

0xa0aa,	// (0x0004a782) cntbar_detail_list_event_pane_t1_ParamLimits

0xa0aa,	// (0x0004a782) cntbar_detail_list_event_pane_t1

0xa0bf,	// (0x0004a797) cntbar_detail_list_event_pane_t2_ParamLimits

0xa0bf,	// (0x0004a797) cntbar_detail_list_event_pane_t2

0x0002,

0xfe15,	// (0x000504ed) cntbar_detail_list_event_pane_t_ParamLimits

0xfe15,	// (0x000504ed) cntbar_detail_list_event_pane_t

0x5e47,	// (0x0004651f) cell_cntbar_detail_list_shct_pane_g1

0xe406,	// (0x0004eade) navi_pane_mv_g3

0xefab,	// (0x0004f683) main_cntbar_detail_pane_ParamLimits

0xcff9,	// (0x0004d6d1) main_notif_wgt_pane

0xae18,	// (0x0004b4f0) aid_tch_main_mp4_pane_g4

0xb014,	// (0x0004b6ec) popup_slider_window_cp02

0xca21,	// (0x0004d0f9) list_recal_day_event_pane

0x9f54,	// (0x0004a62c) cntbar_detail_btn_pane_ParamLimits

0x9f54,	// (0x0004a62c) cntbar_detail_btn_pane

0x9f67,	// (0x0004a63f) cntbar_detail_btn_pane_cp01_ParamLimits

0x9f67,	// (0x0004a63f) cntbar_detail_btn_pane_cp01

0x9f8c,	// (0x0004a664) cntbar_detail_list_shct_pane_ParamLimits

0x9f9c,	// (0x0004a674) cntbar_detail_pane_g1_ParamLimits

0x9f9c,	// (0x0004a674) cntbar_detail_pane_g1

0x9fac,	// (0x0004a684) cntbar_detail_pane_t1_ParamLimits

0x9fac,	// (0x0004a684) cntbar_detail_pane_t1

0xa04a,	// (0x0004a722) cntbar_detail_list_event_pane_g3_ParamLimits

0xa04a,	// (0x0004a722) cntbar_detail_list_event_pane_g3

0xa062,	// (0x0004a73a) cntbar_detail_list_event_pane_g4_ParamLimits

0xa062,	// (0x0004a73a) cntbar_detail_list_event_pane_g4

0xa07a,	// (0x0004a752) cntbar_detail_list_event_pane_g5_ParamLimits

0xa07a,	// (0x0004a752) cntbar_detail_list_event_pane_g5

0xa092,	// (0x0004a76a) cntbar_detail_list_event_pane_g6_ParamLimits

0xa092,	// (0x0004a76a) cntbar_detail_list_event_pane_g6

0xa0d4,	// (0x0004a7ac) cntbar_detail_list_event_pane_t3_ParamLimits

0xa0d4,	// (0x0004a7ac) cntbar_detail_list_event_pane_t3

0xa0e6,	// (0x0004a7be) popup_notif_wgt_window_ParamLimits

0xa0e6,	// (0x0004a7be) popup_notif_wgt_window

0xa0fb,	// (0x0004a7d3) popup_submenu_window_cp01_ParamLimits

0xa0fb,	// (0x0004a7d3) popup_submenu_window_cp01

0xda10,	// (0x0004e0e8) bg_popup_window_pane_cp10

0xccc4,	// (0x0004d39c) listscroll_notif_wgt_pane

0xccd5,	// (0x0004d3ad) list_notif_wgt_window

0xccde,	// (0x0004d3b6) scroll_pane_cp033

0xa10b,	// (0x0004a7e3) list_notif_wgt_row_pane_ParamLimits

0xa10b,	// (0x0004a7e3) list_notif_wgt_row_pane

0xcce7,	// (0x0004d3bf) aid_size_list_notif_wgt_del

0xccf4,	// (0x0004d3cc) list_notif_wgt_row_pane_g1

0xcd00,	// (0x0004d3d8) list_notif_wgt_row_pane_g2

0xcd14,	// (0x0004d3ec) list_notif_wgt_row_pane_g3

0x0002,

0xfe1c,	// (0x000504f4) list_notif_wgt_row_pane_g

0xcd21,	// (0x0004d3f9) list_notif_wgt_row_pane_t1

0xcd37,	// (0x0004d40f) list_notif_wgt_row_pane_t2

0xcd49,	// (0x0004d421) list_notif_wgt_row_pane_t3

0x0002,

0xfe23,	// (0x000504fb) list_notif_wgt_row_pane_t

0xb472,	// (0x0004bb4a) list_recal_day_event_pane_g1

0xcd5b,	// (0x0004d433) list_recal_day_event_pane_t1

0xcff9,	// (0x0004d6d1) bg_button_pane_cp045

0xa11b,	// (0x0004a7f3) cntbar_detail_btn_pane_t1

0x4e65,	// (0x0004553d) main_callh_pane_ParamLimits

0x4e65,	// (0x0004553d) main_callh_pane

0xcff9,	// (0x0004d6d1) main_coverflow0_pane

0xcff9,	// (0x0004d6d1) main_wgtman_pane

0x9673,	// (0x00049d4b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9673,	// (0x00049d4b) main_fs_bigclock_unlock_btn_pane

0xc629,	// (0x0004cd01) bg_button_pane_cp16

0xc639,	// (0x0004cd11) cell_tport_appsw_pane_g3

0xa129,	// (0x0004a801) cf0_flow_pane_ParamLimits

0xa129,	// (0x0004a801) cf0_flow_pane

0xcd6a,	// (0x0004d442) listscroll_cf0_pane

0xcd73,	// (0x0004d44b) main_cf0_pane_g1

0xa13e,	// (0x0004a816) main_cf0_pane_t1_ParamLimits

0xa13e,	// (0x0004a816) main_cf0_pane_t1

0xa153,	// (0x0004a82b) main_cf0_pane_t2_ParamLimits

0xa153,	// (0x0004a82b) main_cf0_pane_t2

0x0001,

0xfe2f,	// (0x00050507) main_cf0_pane_t_ParamLimits

0xfe2f,	// (0x00050507) main_cf0_pane_t

0xcd85,	// (0x0004d45d) scroll_pane_cp11

0xa168,	// (0x0004a840) cf0_flow_pane_g1

0xa170,	// (0x0004a848) cf0_flow_pane_g2

0x0001,

0xfe34,	// (0x0005050c) cf0_flow_pane_g

0xa178,	// (0x0004a850) cf0_flow_pane_t1

0xcff9,	// (0x0004d6d1) main_call6_pane

0xcff9,	// (0x0004d6d1) main_calllock_pane

0xa186,	// (0x0004a85e) call6_btn_grp_pane_ParamLimits

0xa186,	// (0x0004a85e) call6_btn_grp_pane

0xa19c,	// (0x0004a874) call6_pane_g1_ParamLimits

0xa19c,	// (0x0004a874) call6_pane_g1

0xa1af,	// (0x0004a887) popup_call6_1st_window_ParamLimits

0xa1af,	// (0x0004a887) popup_call6_1st_window

0xa1be,	// (0x0004a896) popup_call6_2nd_window_ParamLimits

0xa1be,	// (0x0004a896) popup_call6_2nd_window

0xa1cd,	// (0x0004a8a5) cell_call6_btn_pane_ParamLimits

0xa1cd,	// (0x0004a8a5) cell_call6_btn_pane

0xda10,	// (0x0004e0e8) bg_popup_call2_in_pane_cp03

0xcd8e,	// (0x0004d466) popup_call6_1st_window_g1

0xcd96,	// (0x0004d46e) popup_call6_1st_window_g2

0xcd9e,	// (0x0004d476) popup_call6_1st_window_g3

0x0002,

0xfe39,	// (0x00050511) popup_call6_1st_window_g

0xcda6,	// (0x0004d47e) popup_call6_1st_window_t1

0xcdb5,	// (0x0004d48d) popup_call6_1st_window_t2

0xcdc3,	// (0x0004d49b) popup_call6_1st_window_t3

0x0002,

0xfe40,	// (0x00050518) popup_call6_1st_window_t

0xda10,	// (0x0004e0e8) bg_popup_call2_in_pane_cp04

0xcd8e,	// (0x0004d466) popup_call6_2nd_window_g1

0xcd96,	// (0x0004d46e) popup_call6_2nd_window_g2

0xcd9e,	// (0x0004d476) popup_call6_2nd_window_g3

0x0002,

0xfe39,	// (0x00050511) popup_call6_2nd_window_g

0xcda6,	// (0x0004d47e) popup_call6_2nd_window_t1

0xcff9,	// (0x0004d6d1) bg_button_pane_cp15

0xd207,	// (0x0004d8df) cell_call6_btn_pane_g1

0xd210,	// (0x0004d8e8) cell_call6_btn_pane_t1

0xa1e1,	// (0x0004a8b9) listscroll_wgtman_pane_ParamLimits

0xa1e1,	// (0x0004a8b9) listscroll_wgtman_pane

0xa202,	// (0x0004a8da) wgtman_btn_pane_ParamLimits

0xa202,	// (0x0004a8da) wgtman_btn_pane

0xe25d,	// (0x0004e935) aid_scroll_copy1

0xcdd1,	// (0x0004d4a9) list_wgtman_pane

0xa242,	// (0x0004a91a) wgtman_btn_pane_g1_ParamLimits

0xa242,	// (0x0004a91a) wgtman_btn_pane_g1

0xa26e,	// (0x0004a946) wgtman_btn_pane_t1_ParamLimits

0xa26e,	// (0x0004a946) wgtman_btn_pane_t1

0xcddb,	// (0x0004d4b3) wgtman_btn_pane_t2_ParamLimits

0xcddb,	// (0x0004d4b3) wgtman_btn_pane_t2

0x0001,

0xfe47,	// (0x0005051f) wgtman_btn_pane_t_ParamLimits

0xfe47,	// (0x0005051f) wgtman_btn_pane_t

0xa2ab,	// (0x0004a983) listrow_wgtman_pane_ParamLimits

0xa2ab,	// (0x0004a983) listrow_wgtman_pane

0xa2bc,	// (0x0004a994) listrow_wgtman_pane_g1

0xa2c9,	// (0x0004a9a1) listrow_wgtman_pane_g2

0x0001,

0xfe4c,	// (0x00050524) listrow_wgtman_pane_g

0x17eb,	// (0x00041ec3) listrow_wgtman_pane_t1

0x1803,	// (0x00041edb) listrow_wgtman_pane_t2

0x0001,

0xfe51,	// (0x00050529) listrow_wgtman_pane_t

0x1829,	// (0x00041f01) wait_bar_pane_cp09

0xcdf2,	// (0x0004d4ca) main_calllock_btn_pane

0xcdfa,	// (0x0004d4d2) main_calllock_pane_g1

0xcff9,	// (0x0004d6d1) bg_button_pane_cp17

0xce03,	// (0x0004d4db) main_calllock_btn_pane_g1

0xce0c,	// (0x0004d4e4) main_calllock_btn_pane_t1

0xcff9,	// (0x0004d6d1) main_dialer3_pane

0xcff9,	// (0x0004d6d1) main_fmrd2_pane

0x5e47,	// (0x0004651f) main_fs_bigclock_unlock_btn_pane_g1

0xce23,	// (0x0004d4fb) main_fs_bigclock_unlock_btn_pane_t1

0xa2e1,	// (0x0004a9b9) area_fmrd2_info_pane_ParamLimits

0xa2e1,	// (0x0004a9b9) area_fmrd2_info_pane

0xa2f0,	// (0x0004a9c8) area_fmrd2_visual_pane_ParamLimits

0xa2f0,	// (0x0004a9c8) area_fmrd2_visual_pane

0xa2fe,	// (0x0004a9d6) fmrd2_indi_pane_ParamLimits

0xa2fe,	// (0x0004a9d6) fmrd2_indi_pane

0xa30b,	// (0x0004a9e3) area_fmrd2_visual_pane_g1

0xa313,	// (0x0004a9eb) area_fmrd2_visual_pane_t1

0xa321,	// (0x0004a9f9) area_fmrd2_visual_pane_t2

0xa32f,	// (0x0004aa07) area_fmrd2_visual_pane_t3

0x0002,

0xfe5b,	// (0x00050533) area_fmrd2_visual_pane_t

0xa33d,	// (0x0004aa15) area_fmrd2_info_pane_g1

0xa345,	// (0x0004aa1d) area_fmrd2_info_pane_t1

0xa353,	// (0x0004aa2b) area_fmrd2_info_pane_t2

0xa361,	// (0x0004aa39) area_fmrd2_info_pane_t3

0xa36f,	// (0x0004aa47) area_fmrd2_info_pane_t4

0x0003,

0xfe62,	// (0x0005053a) area_fmrd2_info_pane_t

0xa37d,	// (0x0004aa55) fmrd2_indi_pane_t1

0xa38b,	// (0x0004aa63) fmrd2_indi_pane_t2

0xa399,	// (0x0004aa71) fmrd2_indi_pane_t3

0x0002,

0xfe6b,	// (0x00050543) fmrd2_indi_pane_t

0xc13b,	// (0x0004c813) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc13b,	// (0x0004c813) list_single_fs_bigclock_indicator_pane_g5

0xc1e9,	// (0x0004c8c1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc1e9,	// (0x0004c8c1) list_single_fs_bigclock_indicator_pane_t5

0x9bf3,	// (0x0004a2cb) aid_cell_bcale_month_pane_ParamLimits

0x9bf3,	// (0x0004a2cb) aid_cell_bcale_month_pane

0x9c11,	// (0x0004a2e9) bcale_month_pane_ParamLimits

0x9c11,	// (0x0004a2e9) bcale_month_pane

0x9c29,	// (0x0004a301) bcale_preview_pane_ParamLimits

0x9c29,	// (0x0004a301) bcale_preview_pane

0xcbd6,	// (0x0004d2ae) list_single_fs_bigclock_pane_t1_ParamLimits

0xcbf2,	// (0x0004d2ca) list_single_fs_bigclock_pane_t2_ParamLimits

0xcbf2,	// (0x0004d2ca) list_single_fs_bigclock_pane_t2

0x0001,

0xfded,	// (0x000504c5) list_single_fs_bigclock_pane_t_ParamLimits

0xfded,	// (0x000504c5) list_single_fs_bigclock_pane_t

0xce1b,	// (0x0004d4f3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe56,	// (0x0005052e) main_fs_bigclock_unlock_btn_pane_g

0xa3a7,	// (0x0004aa7f) aid_dia3_key_size_ParamLimits

0xa3a7,	// (0x0004aa7f) aid_dia3_key_size

0xa3b6,	// (0x0004aa8e) aid_dia3_listrow_size_ParamLimits

0xa3b6,	// (0x0004aa8e) aid_dia3_listrow_size

0xa3c9,	// (0x0004aaa1) dia3_keypad_fun_pane_ParamLimits

0xa3c9,	// (0x0004aaa1) dia3_keypad_fun_pane

0xa3dd,	// (0x0004aab5) dia3_keypad_num_pane_ParamLimits

0xa3dd,	// (0x0004aab5) dia3_keypad_num_pane

0xa3ee,	// (0x0004aac6) dia3_listscroll_pane_ParamLimits

0xa3ee,	// (0x0004aac6) dia3_listscroll_pane

0xa3ff,	// (0x0004aad7) dia3_numentry_pane_ParamLimits

0xa3ff,	// (0x0004aad7) dia3_numentry_pane

0xce31,	// (0x0004d509) dia3_list_pane

0xce3a,	// (0x0004d512) scroll_pane_cp12

0xcff9,	// (0x0004d6d1) bg_dia3_numentry_pane

0xa411,	// (0x0004aae9) dia3_numentry_pane_t1

0xa420,	// (0x0004aaf8) cell_dia3_key_num_pane

0xa428,	// (0x0004ab00) cell_dia3_key0_fun_pane_ParamLimits

0xa428,	// (0x0004ab00) cell_dia3_key0_fun_pane

0xa43c,	// (0x0004ab14) cell_dia3_key1_fun_pane_ParamLimits

0xa43c,	// (0x0004ab14) cell_dia3_key1_fun_pane

0xa453,	// (0x0004ab2b) dia3_listrow_pane

0xbe3c,	// (0x0004c514) bg_dia3_numentry_pane_g1

0xcff9,	// (0x0004d6d1) bg_button_pane_cp21

0xce43,	// (0x0004d51b) cell_dia3_key_num_pane_t1

0xce51,	// (0x0004d529) cell_dia3_key_num_pane_t2

0xce60,	// (0x0004d538) cell_dia3_key_num_pane_t3

0xce6f,	// (0x0004d547) cell_dia3_key_num_pane_t4

0x0003,

0xfe72,	// (0x0005054a) cell_dia3_key_num_pane_t

0xcff9,	// (0x0004d6d1) bg_button_pane_cp19

0xce7e,	// (0x0004d556) cell_dia3_key0_fun_pane_g1

0xcff9,	// (0x0004d6d1) bg_button_pane_cp20

0xa465,	// (0x0004ab3d) cell_dia3_key1_fun_pane_g1

0xa46d,	// (0x0004ab45) area_left_week_number_pane

0xa479,	// (0x0004ab51) area_top_day_name_pane

0xa48a,	// (0x0004ab62) frame_month_view_pane

0xce86,	// (0x0004d55e) grid_month_view_pane

0xa49b,	// (0x0004ab73) cell_top_day_name_pane_ParamLimits

0xa49b,	// (0x0004ab73) cell_top_day_name_pane

0xa4be,	// (0x0004ab96) cell_area_left_week_number_pane_ParamLimits

0xa4be,	// (0x0004ab96) cell_area_left_week_number_pane

0xa4d2,	// (0x0004abaa) cell_month_view_pane_ParamLimits

0xa4d2,	// (0x0004abaa) cell_month_view_pane

0xce94,	// (0x0004d56c) frm_month_g1

0xa4f7,	// (0x0004abcf) frm_month_g2

0xa508,	// (0x0004abe0) frm_month_g3

0xa519,	// (0x0004abf1) frm_month_g4

0xa52a,	// (0x0004ac02) frm_month_g5

0xa53b,	// (0x0004ac13) frm_month_g6

0xa54c,	// (0x0004ac24) frm_month_g7

0xcea1,	// (0x0004d579) frm_month_g8

0xa55d,	// (0x0004ac35) frm_month_g9

0xa56d,	// (0x0004ac45) frm_month_g10

0xa57d,	// (0x0004ac55) frm_month_g11

0xa58d,	// (0x0004ac65) frm_month_g12

0xa59d,	// (0x0004ac75) frm_month_g13

0xa5ad,	// (0x0004ac85) frm_month_g14

0xa5bd,	// (0x0004ac95) frm_month_g15

0xa5cf,	// (0x0004aca7) frm_month_g16

0x000f,

0xfe7b,	// (0x00050553) frm_month_g

0xceae,	// (0x0004d586) cell_top_day_name_pane_t1

0xa5e1,	// (0x0004acb9) cell_area_left_week_number_pane_g1

0xa5ed,	// (0x0004acc5) cell_area_left_week_number_pane_t1

0x6112,	// (0x000467ea) cell_month_view_pane_g1

0xa600,	// (0x0004acd8) cell_month_view_pane_t1

0xcff9,	// (0x0004d6d1) main_fps_pane

0xc42f,	// (0x0004cb07) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc42f,	// (0x0004cb07) cmail_ddmenu_btn02_pane_cp1

0xc44b,	// (0x0004cb23) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc44b,	// (0x0004cb23) cmail_ddmenu_btn02_pane_cp2

0x9dd8,	// (0x0004a4b0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9dd8,	// (0x0004a4b0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfda0,	// (0x00050478) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfda0,	// (0x00050478) cmail_ddmenu_btn02_pane_g

0x9df6,	// (0x0004a4ce) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9df6,	// (0x0004a4ce) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda5,	// (0x0005047d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda5,	// (0x0005047d) cmail_ddmenu_btn02_pane_t

0xa613,	// (0x0004aceb) fps_text_pane_ParamLimits

0xa613,	// (0x0004aceb) fps_text_pane

0xa629,	// (0x0004ad01) main_fps_pane_g1_ParamLimits

0xa629,	// (0x0004ad01) main_fps_pane_g1

0xa63f,	// (0x0004ad17) wait_bar_pane_cp010_ParamLimits

0xa63f,	// (0x0004ad17) wait_bar_pane_cp010

0xa650,	// (0x0004ad28) fps_text_pane_t1_ParamLimits

0xa650,	// (0x0004ad28) fps_text_pane_t1

0xb0ea,	// (0x0004b7c2) cam4_image_uncrop_pane_g1

0xb0f3,	// (0x0004b7cb) cam4_image_uncrop_pane_g2

0x7cee,	// (0x000483c6) cam4_image_uncrop_pane_g3

0x7cf7,	// (0x000483cf) cam4_image_uncrop_pane_g4

0x0003,

0xf868,	// (0x0004ff40) cam4_image_uncrop_pane_g

0xa453,	// (0x0004ab2b) dia3_listrow_pane_ParamLimits

0xcff9,	// (0x0004d6d1) main_phob2_pane

0x9a96,	// (0x0004a16e) cell_tport_appsw_pane_cp02_ParamLimits

0x9a96,	// (0x0004a16e) cell_tport_appsw_pane_cp02

0x9aa6,	// (0x0004a17e) cell_tport_appsw_pane_cp03_ParamLimits

0x9aa6,	// (0x0004a17e) cell_tport_appsw_pane_cp03

0xcff9,	// (0x0004d6d1) phob2_contact_card_pane

0xcff9,	// (0x0004d6d1) phob2_listscroll_pane

0xcec1,	// (0x0004d599) phob2_list_pane

0xcec9,	// (0x0004d5a1) scroll_pane_cp034

0xa668,	// (0x0004ad40) phob2_cc_data_pane_ParamLimits

0xa668,	// (0x0004ad40) phob2_cc_data_pane

0xa685,	// (0x0004ad5d) phob2_cc_listscroll_pane_ParamLimits

0xa685,	// (0x0004ad5d) phob2_cc_listscroll_pane

0xa2ab,	// (0x0004a983) list_double_large_graphic_phob2_pane_ParamLimits

0xa2ab,	// (0x0004a983) list_double_large_graphic_phob2_pane

0xa6a1,	// (0x0004ad79) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa6a1,	// (0x0004ad79) list_double_large_graphic_phob2_pane_g1

0x183b,	// (0x00041f13) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x183b,	// (0x00041f13) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe9c,	// (0x00050574) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe9c,	// (0x00050574) list_double_large_graphic_phob2_pane_g

0x1847,	// (0x00041f1f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1847,	// (0x00041f1f) list_double_large_graphic_phob2_pane_t1

0x185d,	// (0x00041f35) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x185d,	// (0x00041f35) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfea1,	// (0x00050579) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfea1,	// (0x00050579) list_double_large_graphic_phob2_pane_t

0xcff9,	// (0x0004d6d1) list_highlight_pane_cp024

0xa6b7,	// (0x0004ad8f) phob2_cc_button_pane

0xa6bf,	// (0x0004ad97) phob2_cc_data_pane_g1_ParamLimits

0xa6bf,	// (0x0004ad97) phob2_cc_data_pane_g1

0xa6d4,	// (0x0004adac) phob2_cc_data_pane_g2_ParamLimits

0xa6d4,	// (0x0004adac) phob2_cc_data_pane_g2

0x0001,

0xfea6,	// (0x0005057e) phob2_cc_data_pane_g_ParamLimits

0xfea6,	// (0x0005057e) phob2_cc_data_pane_g

0xa6e4,	// (0x0004adbc) phob2_cc_data_pane_t1_ParamLimits

0xa6e4,	// (0x0004adbc) phob2_cc_data_pane_t1

0xa6fc,	// (0x0004add4) phob2_cc_data_pane_t2_ParamLimits

0xa6fc,	// (0x0004add4) phob2_cc_data_pane_t2

0xa714,	// (0x0004adec) phob2_cc_data_pane_t3_ParamLimits

0xa714,	// (0x0004adec) phob2_cc_data_pane_t3

0x0002,

0xfeab,	// (0x00050583) phob2_cc_data_pane_t_ParamLimits

0xfeab,	// (0x00050583) phob2_cc_data_pane_t

0xced1,	// (0x0004d5a9) phob2_cc_list_pane_ParamLimits

0xced1,	// (0x0004d5a9) phob2_cc_list_pane

0xbd59,	// (0x0004c431) scroll_pane_cp035_ParamLimits

0xbd59,	// (0x0004c431) scroll_pane_cp035

0xefab,	// (0x0004f683) bg_button_pane_cp033

0xcedd,	// (0x0004d5b5) phob2_cc_button_pane_g1

0xcee9,	// (0x0004d5c1) phob2_cc_button_pane_t1

0xcefe,	// (0x0004d5d6) phob2_cc_button_pane_t2

0x0001,

0xfeb2,	// (0x0005058a) phob2_cc_button_pane_t

0xa72c,	// (0x0004ae04) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa72c,	// (0x0004ae04) list_double_large_graphic_phob2_cc_pane

0xa75a,	// (0x0004ae32) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa75a,	// (0x0004ae32) list_double_large_graphic_phob2_cc_pane_g1

0x1872,	// (0x00041f4a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1872,	// (0x00041f4a) list_double_large_graphic_phob2_cc_pane_g2

0x187e,	// (0x00041f56) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x187e,	// (0x00041f56) list_double_large_graphic_phob2_cc_pane_g3

0x188a,	// (0x00041f62) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x188a,	// (0x00041f62) list_double_large_graphic_phob2_cc_pane_g4

0x1896,	// (0x00041f6e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1896,	// (0x00041f6e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeb7,	// (0x0005058f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeb7,	// (0x0005058f) list_double_large_graphic_phob2_cc_pane_g

0x18a2,	// (0x00041f7a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x18a2,	// (0x00041f7a) list_double_large_graphic_phob2_cc_pane_t1

0x18cb,	// (0x00041fa3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x18cb,	// (0x00041fa3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfec2,	// (0x0005059a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfec2,	// (0x0005059a) list_double_large_graphic_phob2_cc_pane_t

0xcf10,	// (0x0004d5e8) list_highlight_pane_cp025_ParamLimits

0xcf10,	// (0x0004d5e8) list_highlight_pane_cp025

0xefab,	// (0x0004f683) bg_button_pane_cp033_ParamLimits

0xcedd,	// (0x0004d5b5) phob2_cc_button_pane_g1_ParamLimits

0xcee9,	// (0x0004d5c1) phob2_cc_button_pane_t1_ParamLimits

0xcefe,	// (0x0004d5d6) phob2_cc_button_pane_t2_ParamLimits

0xfeb2,	// (0x0005058a) phob2_cc_button_pane_t_ParamLimits

0x1aec,	// (0x000421c4) popup_wgtman_window

0xbe5c,	// (0x0004c534) scroll_pane_cp038

0xa224,	// (0x0004a8fc) wgtman_btn_pane_cp_01_ParamLimits

0xa224,	// (0x0004a8fc) wgtman_btn_pane_cp_01

0xcf1e,	// (0x0004d5f6) wgtman_content_pane

0xcf27,	// (0x0004d5ff) wgtman_heading_pane

0xcff9,	// (0x0004d6d1) bg_heading_pane_cp02

0xcf30,	// (0x0004d608) wgtman_heading_pane_g1

0xcf38,	// (0x0004d610) wgtman_heading_pane_t1

0xcf46,	// (0x0004d61e) scroll_pane_cp036

0xcf4e,	// (0x0004d626) wgtman_list_pane

0xcf56,	// (0x0004d62e) wgtman_list_pane_t1_ParamLimits

0xcf56,	// (0x0004d62e) wgtman_list_pane_t1

0xb0d8,	// (0x0004b7b0) cam4_grid_pane

0x0f80,	// (0x00041658) bg_button_pane_cp015_ParamLimits

0x883c,	// (0x00048f14) bg_button_pane_cp016_ParamLimits

0x884e,	// (0x00048f26) bg_button_pane_cp017_ParamLimits

0x0fbe,	// (0x00041696) popup_vitu2_query_window_g3_ParamLimits

0x0fbe,	// (0x00041696) popup_vitu2_query_window_g3

0x1037,	// (0x0004170f) popup_vitu2_query_window_t6_ParamLimits

0x1037,	// (0x0004170f) popup_vitu2_query_window_t6

0x1062,	// (0x0004173a) popup_vitu2_query_window_t7_ParamLimits

0x1062,	// (0x0004173a) popup_vitu2_query_window_t7

0xb0ea,	// (0x0004b7c2) cam4_grid_pane_g1

0xb0f3,	// (0x0004b7cb) cam4_grid_pane_g2

0xcf6d,	// (0x0004d645) cam4_grid_pane_g3

0xcf76,	// (0x0004d64e) cam4_grid_pane_g4

0x0003,

0xfec7,	// (0x0005059f) cam4_grid_pane_g

0x28f0,	// (0x00042fc8) aid_placing_vt_slider_lsc_ParamLimits

0x2b60,	// (0x00043238) vidtel_button_pane_ParamLimits

0x2b60,	// (0x00043238) vidtel_button_pane

0xcff9,	// (0x0004d6d1) bg_button_pane_cp034

0xa766,	// (0x0004ae3e) vidtel_button_pane_g1

0xa76e,	// (0x0004ae46) vidtel_button_pane_t1

0xb462,	// (0x0004bb3a) aid_size_vtel_slider_touch

0xbd59,	// (0x0004c431) scroll_pane_cp039

0xbe8b,	// (0x0004c563) ncim_query_button_pane_cp01_ParamLimits

0xbeaa,	// (0x0004c582) ncimui_query_pane_g1_ParamLimits

0xefab,	// (0x0004f683) input_focus_pane_cp012_ParamLimits

0xbecf,	// (0x0004c5a7) ncim_query_entry_pane_t1_ParamLimits

0xbd59,	// (0x0004c431) scroll_pane_cp039_ParamLimits

0xe321,	// (0x0004e9f9) navi_pane_bcale_mc_g1

0xe329,	// (0x0004ea01) navi_pane_bcale_mc_t1

0xc494,	// (0x0004cb6c) main_sp_fs_email_pane_g1

0xc4a0,	// (0x0004cb78) main_sp_fs_email_pane_g2

0x0001,

0xfc58,	// (0x00050330) main_sp_fs_email_pane_g

0xc91d,	// (0x0004cff5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc91d,	// (0x0004cff5) list_single_cale_mrui_row_pane_g3

0x17a5,	// (0x00041e7d) list_single_recal_day_pane_g5_event_pane

0xca86,	// (0x0004d15e) list_single_recal_day_pane_g7

0xcf7f,	// (0x0004d657) list_recal_day_event_pane_cp01

0xcf88,	// (0x0004d660) list_recal_vselct_arw_lo_pane_cp01

0xcf90,	// (0x0004d668) list_recal_vselct_arw_up_pane_cp01

0xcf98,	// (0x0004d670) list_recal_vselct_pane_cp01

0xb472,	// (0x0004bb4a) list_recal_day_event_pane_cp01_g1

0xcfa2,	// (0x0004d67a) list_recal_day_event_pane_cp01_t1

0xca8e,	// (0x0004d166) list_single_recal_day_pane_t1_ParamLimits

0x17bb,	// (0x00041e93) list_single_recal_day_pane_t2_ParamLimits

0xfdb5,	// (0x0005048d) list_single_recal_day_pane_t_ParamLimits

0xd778,	// (0x0004de50) bg_notes_pane_ParamLimits

0xd81b,	// (0x0004def3) list_notes_pane_ParamLimits

0x1de7,	// (0x000424bf) scroll_pane_cp06_ParamLimits

0xd841,	// (0x0004df19) main_notes_pane_ParamLimits

0xcff9,	// (0x0004d6d1) main_welc_pane

0xa784,	// (0x0004ae5c) main_welc_body_pane_ParamLimits

0xa784,	// (0x0004ae5c) main_welc_body_pane

0xa7a0,	// (0x0004ae78) main_welc_opti_pane_ParamLimits

0xa7a0,	// (0x0004ae78) main_welc_opti_pane

0xa7dd,	// (0x0004aeb5) main_welc_pane_t1_ParamLimits

0xa7dd,	// (0x0004aeb5) main_welc_pane_t1

0xa7f7,	// (0x0004aecf) main_welc_body_row_pane_ParamLimits

0xa7f7,	// (0x0004aecf) main_welc_body_row_pane

0xcfb0,	// (0x0004d688) main_welc_opti_row_pane_ParamLimits

0xcfb0,	// (0x0004d688) main_welc_opti_row_pane

0xcfbe,	// (0x0004d696) main_welc_opti_row_pane_g1

0xa80a,	// (0x0004aee2) main_welc_opti_row_pane_t1

0xcfc6,	// (0x0004d69e) main_welc_body_row_pane_t1

0xcccd,	// (0x0004d3a5) popup_notif_wgt_heading_pane

0xcce7,	// (0x0004d3bf) aid_size_list_notif_wgt_del_ParamLimits

0xccf4,	// (0x0004d3cc) list_notif_wgt_row_pane_g1_ParamLimits

0xcd00,	// (0x0004d3d8) list_notif_wgt_row_pane_g2_ParamLimits

0xcd14,	// (0x0004d3ec) list_notif_wgt_row_pane_g3_ParamLimits

0xfe1c,	// (0x000504f4) list_notif_wgt_row_pane_g_ParamLimits

0xcd21,	// (0x0004d3f9) list_notif_wgt_row_pane_t1_ParamLimits

0xcd37,	// (0x0004d40f) list_notif_wgt_row_pane_t2_ParamLimits

0xcd49,	// (0x0004d421) list_notif_wgt_row_pane_t3_ParamLimits

0xfe23,	// (0x000504fb) list_notif_wgt_row_pane_t_ParamLimits

0xa2bc,	// (0x0004a994) listrow_wgtman_pane_g1_ParamLimits

0xa2c9,	// (0x0004a9a1) listrow_wgtman_pane_g2_ParamLimits

0xfe4c,	// (0x00050524) listrow_wgtman_pane_g_ParamLimits

0x17eb,	// (0x00041ec3) listrow_wgtman_pane_t1_ParamLimits

0x1803,	// (0x00041edb) listrow_wgtman_pane_t2_ParamLimits

0xfe51,	// (0x00050529) listrow_wgtman_pane_t_ParamLimits

0x1829,	// (0x00041f01) wait_bar_pane_cp09_ParamLimits

0xcff9,	// (0x0004d6d1) bg_popup_heading_pane_cp02

0xcfd5,	// (0x0004d6ad) popup_notif_wgt_heading_pane_g1

0xcfdd,	// (0x0004d6b5) popup_notif_wgt_heading_pane_t1

0x4e9b,	// (0x00045573) main_vids_pane

0xcff9,	// (0x0004d6d1) vids_listscroll_pane

0xa819,	// (0x0004aef1) scroll_pane_cp040

0xcff9,	// (0x0004d6d1) vids_list_pane

0xa824,	// (0x0004aefc) vids_list_double_pane_ParamLimits

0xa824,	// (0x0004aefc) vids_list_double_pane

0xa831,	// (0x0004af09) vids_list_double_pane_g1

0xa83a,	// (0x0004af12) vids_list_double_pane_t1

0xa84a,	// (0x0004af22) vids_list_double_pane_t2

0x0001,

0xfed5,	// (0x000505ad) vids_list_double_pane_t

0xefab,	// (0x0004f683) main_ncimui_pane_ParamLimits

0x921f,	// (0x000498f7) main_ncimui_pane_g1_ParamLimits

0x922b,	// (0x00049903) main_ncimui_pane_g2_ParamLimits

0x922b,	// (0x00049903) main_ncimui_pane_g2

0x0001,

0xfb5d,	// (0x00050235) main_ncimui_pane_g_ParamLimits

0xfb5d,	// (0x00050235) main_ncimui_pane_g

0xa7b7,	// (0x0004ae8f) main_welc_pane_g1_ParamLimits

0xa7b7,	// (0x0004ae8f) main_welc_pane_g1

0xa7ca,	// (0x0004aea2) main_welc_pane_g2_ParamLimits

0xa7ca,	// (0x0004aea2) main_welc_pane_g2

0x0001,

0xfed0,	// (0x000505a8) main_welc_pane_g_ParamLimits

0xfed0,	// (0x000505a8) main_welc_pane_g

0xd778,	// (0x0004de50) listscroll_mce_pane_ParamLimits

0x3aa6,	// (0x0004417e) wait_bar_pane_cp10

0x4e59,	// (0x00045531) main_cale_day_pane_ParamLimits

0x4e59,	// (0x00045531) main_cale_week_pane_ParamLimits

0xd778,	// (0x0004de50) main_messa_pane_ParamLimits

0x6b98,	// (0x00047270) main_clock2_btn_pane_ParamLimits

0x6b98,	// (0x00047270) main_clock2_btn_pane

0x6ba8,	// (0x00047280) main_clock2_btn_pane_cp01_ParamLimits

0x6ba8,	// (0x00047280) main_clock2_btn_pane_cp01

0xc8d8,	// (0x0004cfb0) list_cale_mrui_pane_ParamLimits

0xcd7d,	// (0x0004d455) main_cf0_pane_g2

0x0001,

0xfe2a,	// (0x00050502) main_cf0_pane_g

0xa46d,	// (0x0004ab45) area_left_week_number_pane_ParamLimits

0xa479,	// (0x0004ab51) area_top_day_name_pane_ParamLimits

0xa48a,	// (0x0004ab62) frame_month_view_pane_ParamLimits

0xce86,	// (0x0004d55e) grid_month_view_pane_ParamLimits

0xce94,	// (0x0004d56c) frm_month_g1_ParamLimits

0xa4f7,	// (0x0004abcf) frm_month_g2_ParamLimits

0xa508,	// (0x0004abe0) frm_month_g3_ParamLimits

0xa519,	// (0x0004abf1) frm_month_g4_ParamLimits

0xa52a,	// (0x0004ac02) frm_month_g5_ParamLimits

0xa53b,	// (0x0004ac13) frm_month_g6_ParamLimits

0xa54c,	// (0x0004ac24) frm_month_g7_ParamLimits

0xcea1,	// (0x0004d579) frm_month_g8_ParamLimits

0xa55d,	// (0x0004ac35) frm_month_g9_ParamLimits

0xa56d,	// (0x0004ac45) frm_month_g10_ParamLimits

0xa57d,	// (0x0004ac55) frm_month_g11_ParamLimits

0xa58d,	// (0x0004ac65) frm_month_g12_ParamLimits

0xa59d,	// (0x0004ac75) frm_month_g13_ParamLimits

0xa5ad,	// (0x0004ac85) frm_month_g14_ParamLimits

0xa5bd,	// (0x0004ac95) frm_month_g15_ParamLimits

0xa5cf,	// (0x0004aca7) frm_month_g16_ParamLimits

0xfe7b,	// (0x00050553) frm_month_g_ParamLimits

0xceae,	// (0x0004d586) cell_top_day_name_pane_t1_ParamLimits

0xa5e1,	// (0x0004acb9) cell_area_left_week_number_pane_g1_ParamLimits

0xa5ed,	// (0x0004acc5) cell_area_left_week_number_pane_t1_ParamLimits

0x6112,	// (0x000467ea) cell_month_view_pane_g1_ParamLimits

0xa600,	// (0x0004acd8) cell_month_view_pane_t1_ParamLimits

0xd770,	// (0x0004de48) main_clock2_btn_pane_g1

0xcfeb,	// (0x0004d6c3) main_clock2_btn_pane_t1

0xefab,	// (0x0004f683) listscroll_cmail_pane_ParamLimits

0xc494,	// (0x0004cb6c) main_sp_fs_email_pane_g1_ParamLimits

0xc4a0,	// (0x0004cb78) main_sp_fs_email_pane_g2_ParamLimits

0xfc58,	// (0x00050330) main_sp_fs_email_pane_g_ParamLimits

0xca02,	// (0x0004d0da) list_recal_day_pane_ParamLimits

0xca13,	// (0x0004d0eb) mian_recal_day_pane_t1

0x1345,	// (0x00041a1d) list_single_dyc_row_text_pane_t4_ParamLimits

0x1345,	// (0x00041a1d) list_single_dyc_row_text_pane_t4

0x137c,	// (0x00041a54) list_single_dyc_row_text_pane_t5_ParamLimits

0x137c,	// (0x00041a54) list_single_dyc_row_text_pane_t5

0xc552,	// (0x0004cc2a) list_single_dyc_row_text_pane_t6_ParamLimits

0xc552,	// (0x0004cc2a) list_single_dyc_row_text_pane_t6

0x36cb,	// (0x00043da3) aid_mgn_list_cale_time_pane

0xefab,	// (0x0004f683) main_gallery2_pane_ParamLimits

0x6bcf,	// (0x000472a7) main_clock2_pane_cp01_t1

0x6bdd,	// (0x000472b5) main_clock2_pane_cp01_t3

0x0001,

0xf73f,	// (0x0004fe17) main_clock2_pane_cp01_t

0x215b,	// (0x00042833) cale_week_scroll_pane_g16_ParamLimits

0x215b,	// (0x00042833) cale_week_scroll_pane_g16

0xda10,	// (0x0004e0e8) vorec_slider_pane

0xa76e,	// (0x0004ae46) vidtel_button_pane_t1_ParamLimits

0x9e9b,	// (0x0004a573) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9ead,	// (0x0004a585) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9ebe,	// (0x0004a596) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9ebe,	// (0x0004a596) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdd8,	// (0x000504b0) main_fs_bigclock_clock_pane_g_ParamLimits

0x9ed1,	// (0x0004a5a9) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9eec,	// (0x0004a5c4) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfde1,	// (0x000504b9) main_fs_bigclock_clock_pane_t_ParamLimits

0x62fb,	// (0x000469d3) main_mup3_lyrics_pane_ParamLimits

0x62fb,	// (0x000469d3) main_mup3_lyrics_pane

0xa87c,	// (0x0004af54) main_mup3_lyrics_pane_t1_ParamLimits

0xa87c,	// (0x0004af54) main_mup3_lyrics_pane_t1

0xae10,	// (0x0004b4e8) aid_main_mp4_pane_t1_area

0xae10,	// (0x0004b4e8) aid_main_mp4_pane_t2_area

0xaeb8,	// (0x0004b590) main_mp4_pane_g7_ParamLimits

0xaeb8,	// (0x0004b590) main_mp4_pane_g7

0xaec4,	// (0x0004b59c) main_mp4_pane_g8_ParamLimits

0xaec4,	// (0x0004b59c) main_mp4_pane_g8

0x7b2b,	// (0x00048203) aid_call6_pane_g1_size

0xa746,	// (0x0004ae1e) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa746,	// (0x0004ae1e) list_double_large_graphic_phob2_other_pane

0xe274,	// (0x0004e94c) list_double_large_graphic_phob2_other_pane_g1

0xcff9,	// (0x0004d6d1) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
