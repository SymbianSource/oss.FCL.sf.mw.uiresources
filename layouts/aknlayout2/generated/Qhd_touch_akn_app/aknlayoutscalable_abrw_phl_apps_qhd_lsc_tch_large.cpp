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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008f404 };

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
0x0a50,	// (0x0008fe54) Screen

0x0a5c,	// (0x0008fe60) application_window

0x0a98,	// (0x0008fe9c) area_bottom_pane_ParamLimits

0x0a98,	// (0x0008fe9c) area_bottom_pane

0x0ad1,	// (0x0008fed5) area_top_pane_ParamLimits

0x0ad1,	// (0x0008fed5) area_top_pane

0xa093,	// (0x00099497) call_video_uplink_pane_ParamLimits

0xa093,	// (0x00099497) call_video_uplink_pane

0x0b46,	// (0x0008ff4a) main_pane_ParamLimits

0x0b46,	// (0x0008ff4a) main_pane

0xa4dc,	// (0x000998e0) context_pane

0x4aa1,	// (0x00093ea5) navi_pane

0x4ac9,	// (0x00093ecd) popup_cale_events_window_ParamLimits

0x4ac9,	// (0x00093ecd) popup_cale_events_window

0xa4ef,	// (0x000998f3) popup_mup_playback_window

0x4ae1,	// (0x00093ee5) signal_pane

0xe0db,	// (0x0009d4df) main_browser_pane

0xebae,	// (0x0009dfb2) main_burst_pane

0x47e5,	// (0x00093be9) main_calc_pane

0xebae,	// (0x0009dfb2) main_cale_day_pane

0xe0db,	// (0x0009d4df) main_cale_month_pane

0xebae,	// (0x0009dfb2) main_cale_week_pane

0xebae,	// (0x0009dfb2) main_call_pane

0xddad,	// (0x0009d1b1) main_call_poc_pane

0xebae,	// (0x0009dfb2) main_camera_pane

0xebae,	// (0x0009dfb2) main_chi_dic_pane

0xea33,	// (0x0009de37) main_clock_pane

0xddad,	// (0x0009d1b1) main_fmradio_pane

0xebae,	// (0x0009dfb2) main_graph_messa_pane

0xddad,	// (0x0009d1b1) main_help_pane

0xe0db,	// (0x0009d4df) main_im_pane

0xe008,	// (0x0009d40c) main_image_pane_ParamLimits

0xe008,	// (0x0009d40c) main_image_pane

0xddad,	// (0x0009d1b1) main_location2_pane

0xebae,	// (0x0009dfb2) main_location_pane

0xddad,	// (0x0009d1b1) main_messa_pane

0xddad,	// (0x0009d1b1) main_mp2_pane

0xebae,	// (0x0009dfb2) main_mp_pane

0xddad,	// (0x0009d1b1) main_msg_pane

0xddad,	// (0x0009d1b1) main_mup_eq_pane

0xddad,	// (0x0009d1b1) main_mup_pane

0xe0db,	// (0x0009d4df) main_notes_pane

0xddad,	// (0x0009d1b1) main_pec_pane

0xddad,	// (0x0009d1b1) main_phob_pane

0xddad,	// (0x0009d1b1) main_pinb_pane

0xddad,	// (0x0009d1b1) main_postcard_pane

0xddad,	// (0x0009d1b1) main_qdial_pane

0xebae,	// (0x0009dfb2) main_skin_pane

0xddad,	// (0x0009d1b1) main_smil2_pane

0xebae,	// (0x0009dfb2) main_smil_pane

0xebae,	// (0x0009dfb2) main_video_pane

0xebae,	// (0x0009dfb2) main_video_tele_pane

0xe008,	// (0x0009d40c) main_viewer_pane_ParamLimits

0xe008,	// (0x0009d40c) main_viewer_pane

0xebae,	// (0x0009dfb2) main_vorec_pane

0x4847,	// (0x00093c4b) popup_blid_sat_info_window_ParamLimits

0x4847,	// (0x00093c4b) popup_blid_sat_info_window

0x489f,	// (0x00093ca3) popup_dyc_status_message_window_ParamLimits

0x489f,	// (0x00093ca3) popup_dyc_status_message_window

0x48b9,	// (0x00093cbd) popup_grid_large_graphic_window_ParamLimits

0x48b9,	// (0x00093cbd) popup_grid_large_graphic_window

0x4975,	// (0x00093d79) popup_loc_request_window_ParamLimits

0x4975,	// (0x00093d79) popup_loc_request_window

0x4a79,	// (0x00093e7d) popup_wml_address_window_ParamLimits

0x4a79,	// (0x00093e7d) popup_wml_address_window

0x461f,	// (0x00093a23) call_muted_g1

0x362f,	// (0x00092a33) popup_call_audio_conf_window_ParamLimits

0x362f,	// (0x00092a33) popup_call_audio_conf_window

0x4633,	// (0x00093a37) popup_call_audio_first_window_ParamLimits

0x4633,	// (0x00093a37) popup_call_audio_first_window

0x46a9,	// (0x00093aad) popup_call_audio_in_window_ParamLimits

0x46a9,	// (0x00093aad) popup_call_audio_in_window

0x46e5,	// (0x00093ae9) popup_call_audio_out_window_ParamLimits

0x46e5,	// (0x00093ae9) popup_call_audio_out_window

0x471f,	// (0x00093b23) popup_call_audio_second_window_ParamLimits

0x471f,	// (0x00093b23) popup_call_audio_second_window

0x4775,	// (0x00093b79) popup_call_audio_wait_window_ParamLimits

0x4775,	// (0x00093b79) popup_call_audio_wait_window

0x47aa,	// (0x00093bae) popup_number_entry_window_ParamLimits

0x47aa,	// (0x00093bae) popup_number_entry_window

0xd782,	// (0x0009cb86) bg_popup_call_pane_cp05_ParamLimits

0xd782,	// (0x0009cb86) bg_popup_call_pane_cp05

0xd7a2,	// (0x0009cba6) popup_number_entry_window_t1

0xd7b5,	// (0x0009cbb9) popup_number_entry_window_t2

0xd7c7,	// (0x0009cbcb) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0009e4dc) popup_number_entry_window_t

0xd7d9,	// (0x0009cbdd) text_title_cp2

0xd7ec,	// (0x0009cbf0) bg_popup_call_pane_cp_ParamLimits

0xd7ec,	// (0x0009cbf0) bg_popup_call_pane_cp

0xd7fa,	// (0x0009cbfe) call_thumbnail_pane

0xd802,	// (0x0009cc06) popup_call_audio_in_window_g1_ParamLimits

0xd802,	// (0x0009cc06) popup_call_audio_in_window_g1

0xd80e,	// (0x0009cc12) popup_call_audio_in_window_g2_ParamLimits

0xd80e,	// (0x0009cc12) popup_call_audio_in_window_g2

0xd81a,	// (0x0009cc1e) popup_call_audio_in_window_g3_ParamLimits

0xd81a,	// (0x0009cc1e) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0009e4e5) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0009e4e5) popup_call_audio_in_window_g

0xd826,	// (0x0009cc2a) popup_call_audio_in_window_t1_ParamLimits

0xd826,	// (0x0009cc2a) popup_call_audio_in_window_t1

0xd842,	// (0x0009cc46) popup_call_audio_in_window_t2_ParamLimits

0xd842,	// (0x0009cc46) popup_call_audio_in_window_t2

0xd85e,	// (0x0009cc62) popup_call_audio_in_window_t3_ParamLimits

0xd85e,	// (0x0009cc62) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0009e4ec) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0009e4ec) popup_call_audio_in_window_t

0xd7ec,	// (0x0009cbf0) bg_popup_call_pane_cp01_ParamLimits

0xd7ec,	// (0x0009cbf0) bg_popup_call_pane_cp01

0xd7fa,	// (0x0009cbfe) call_thumbnail_pane_cp02

0xd871,	// (0x0009cc75) call_type_pane_cp022

0xd879,	// (0x0009cc7d) popup_call_audio_out_window_g1_ParamLimits

0xd879,	// (0x0009cc7d) popup_call_audio_out_window_g1

0xd88b,	// (0x0009cc8f) popup_call_audio_out_window_g2_ParamLimits

0xd88b,	// (0x0009cc8f) popup_call_audio_out_window_g2

0xd897,	// (0x0009cc9b) popup_call_audio_out_window_g3_ParamLimits

0xd897,	// (0x0009cc9b) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0009e4f3) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0009e4f3) popup_call_audio_out_window_g

0xd8a9,	// (0x0009ccad) popup_call_audio_out_window_t1_ParamLimits

0xd8a9,	// (0x0009ccad) popup_call_audio_out_window_t1

0xd8c1,	// (0x0009ccc5) popup_call_audio_out_window_t2_ParamLimits

0xd8c1,	// (0x0009ccc5) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0009e4fa) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0009e4fa) popup_call_audio_out_window_t

0xd8d6,	// (0x0009ccda) bg_popup_call_pane_ParamLimits

0xd8d6,	// (0x0009ccda) bg_popup_call_pane

0x0cfc,	// (0x00090100) call_thumbnail_pane_cp_ParamLimits

0x0cfc,	// (0x00090100) call_thumbnail_pane_cp

0xd95a,	// (0x0009cd5e) call_type_pane_cp01_ParamLimits

0xd95a,	// (0x0009cd5e) call_type_pane_cp01

0xd99e,	// (0x0009cda2) popup_call_audio_first_window_g1_ParamLimits

0xd99e,	// (0x0009cda2) popup_call_audio_first_window_g1

0xd9ea,	// (0x0009cdee) popup_call_audio_first_window_g2_ParamLimits

0xd9ea,	// (0x0009cdee) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0009e4ff) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0009e4ff) popup_call_audio_first_window_g

0xda2e,	// (0x0009ce32) popup_call_audio_first_window_t1_ParamLimits

0xda2e,	// (0x0009ce32) popup_call_audio_first_window_t1

0xdcf2,	// (0x0009d0f6) popup_call_audio_first_window_t4_ParamLimits

0xdcf2,	// (0x0009d0f6) popup_call_audio_first_window_t4

0xdd7e,	// (0x0009d182) popup_call_audio_first_window_t5_ParamLimits

0xdd7e,	// (0x0009d182) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0009e504) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0009e504) popup_call_audio_first_window_t

0xddad,	// (0x0009d1b1) bg_popup_call_pane_cp02

0xddb7,	// (0x0009d1bb) call_type_pane_cp023

0xddbf,	// (0x0009d1c3) popup_call_audio_wait_window_g1

0xddc7,	// (0x0009d1cb) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0009e50b) popup_call_audio_wait_window_g

0xddcf,	// (0x0009d1d3) popup_call_audio_wait_window_t3

0xdddd,	// (0x0009d1e1) bg_popup_call_pane_cp03_ParamLimits

0xdddd,	// (0x0009d1e1) bg_popup_call_pane_cp03

0xde3d,	// (0x0009d241) call_thumbnail_pane_cp011_ParamLimits

0xde3d,	// (0x0009d241) call_thumbnail_pane_cp011

0xde49,	// (0x0009d24d) call_type_pane_cp034_ParamLimits

0xde49,	// (0x0009d24d) call_type_pane_cp034

0xde85,	// (0x0009d289) popup_call_audio_second_window_g1_ParamLimits

0xde85,	// (0x0009d289) popup_call_audio_second_window_g1

0xdec1,	// (0x0009d2c5) popup_call_audio_second_window_g2_ParamLimits

0xdec1,	// (0x0009d2c5) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0009e510) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0009e510) popup_call_audio_second_window_g

0xdefd,	// (0x0009d301) popup_call_audio_second_window_t1_ParamLimits

0xdefd,	// (0x0009d301) popup_call_audio_second_window_t1

0xdf7e,	// (0x0009d382) popup_call_audio_second_window_t2_ParamLimits

0xdf7e,	// (0x0009d382) popup_call_audio_second_window_t2

0xdfb4,	// (0x0009d3b8) popup_call_audio_second_window_t3_ParamLimits

0xdfb4,	// (0x0009d3b8) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0009e515) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0009e515) popup_call_audio_second_window_t

0xddad,	// (0x0009d1b1) bg_popup_call_pane_cp04

0xdfea,	// (0x0009d3ee) list_conf_pane

0xdff2,	// (0x0009d3f6) popup_call_audio_conf_window_t1

0xe000,	// (0x0009d404) call_thumbnail_pane_g1

0xe008,	// (0x0009d40c) bg_pinb_pane_ParamLimits

0xe008,	// (0x0009d40c) bg_pinb_pane

0xe016,	// (0x0009d41a) find_pinb_pane

0xe01f,	// (0x0009d423) listscroll_pinb_pane_ParamLimits

0xe01f,	// (0x0009d423) listscroll_pinb_pane

0xe02e,	// (0x0009d432) pinb_bg_pane_g1

0x0d20,	// (0x00090124) pinb_bg_pane_g2

0x0d2c,	// (0x00090130) pinb_bg_pane_g3

0x0d38,	// (0x0009013c) pinb_bg_pane_g4

0x0d44,	// (0x00090148) pinb_bg_pane_g5

0x0d50,	// (0x00090154) pinb_bg_pane_g6

0x0d5b,	// (0x0009015f) pinb_bg_pane_g7

0x0d66,	// (0x0009016a) pinb_bg_pane_g8

0x0d71,	// (0x00090175) pinb_bg_pane_g9

0x0d7b,	// (0x0009017f) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0009e51c) pinb_bg_pane_g

0x0d98,	// (0x0009019c) grid_pinb_pane

0x0da1,	// (0x000901a5) list_pinb_pane

0x0daa,	// (0x000901ae) scroll_pane_cp01_ParamLimits

0x0daa,	// (0x000901ae) scroll_pane_cp01

0xe038,	// (0x0009d43c) find_pinb_pane_g1_ParamLimits

0xe038,	// (0x0009d43c) find_pinb_pane_g1

0xe050,	// (0x0009d454) find_pinb_pane_t1

0xe062,	// (0x0009d466) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0009e536) find_pinb_pane_t

0xe077,	// (0x0009d47b) input_focus_pane_cp01_ParamLimits

0xe077,	// (0x0009d47b) input_focus_pane_cp01

0x0dbc,	// (0x000901c0) cell_pinb_pane_ParamLimits

0x0dbc,	// (0x000901c0) cell_pinb_pane

0x0de5,	// (0x000901e9) cell_pinb_pane_g1_ParamLimits

0x0de5,	// (0x000901e9) cell_pinb_pane_g1

0x0df5,	// (0x000901f9) cell_pinb_pane_g2_ParamLimits

0x0df5,	// (0x000901f9) cell_pinb_pane_g2

0xe083,	// (0x0009d487) cell_pinb_pane_g3_ParamLimits

0xe083,	// (0x0009d487) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0009e53b) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0009e53b) cell_pinb_pane_g

0xddad,	// (0x0009d1b1) grid_highlight_pane_cp01

0x0e01,	// (0x00090205) list_pinb_item_pane_ParamLimits

0x0e01,	// (0x00090205) list_pinb_item_pane

0xddad,	// (0x0009d1b1) list_highlight_pane_cp02

0x0e13,	// (0x00090217) list_pinb_item_pane_g1_ParamLimits

0x0e13,	// (0x00090217) list_pinb_item_pane_g1

0x0e20,	// (0x00090224) list_pinb_item_pane_g2_ParamLimits

0x0e20,	// (0x00090224) list_pinb_item_pane_g2

0x0e2c,	// (0x00090230) list_pinb_item_pane_g3_ParamLimits

0x0e2c,	// (0x00090230) list_pinb_item_pane_g3

0x0e3d,	// (0x00090241) list_pinb_item_pane_g4_ParamLimits

0x0e3d,	// (0x00090241) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0009e542) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0009e542) list_pinb_item_pane_g

0x0e49,	// (0x0009024d) list_pinb_item_pane_t1_ParamLimits

0x0e49,	// (0x0009024d) list_pinb_item_pane_t1

0x0e7e,	// (0x00090282) calc_display_pane

0x0ea6,	// (0x000902aa) calc_paper_pane

0x0ec9,	// (0x000902cd) grid_calc_pane

0xddad,	// (0x0009d1b1) bg_list_pane_cp01

0x0ef7,	// (0x000902fb) clock_g1

0x0eff,	// (0x00090303) clock_g2

0x0001,

0xf147,	// (0x0009e54b) clock_g

0x0f07,	// (0x0009030b) clock_t1_ParamLimits

0x0f07,	// (0x0009030b) clock_t1

0x0f1c,	// (0x00090320) clock_t2_ParamLimits

0x0f1c,	// (0x00090320) clock_t2

0x0f2e,	// (0x00090332) clock_t3_ParamLimits

0x0f2e,	// (0x00090332) clock_t3

0x0f40,	// (0x00090344) clock_t4_ParamLimits

0x0f40,	// (0x00090344) clock_t4

0x0f52,	// (0x00090356) clock_t5_ParamLimits

0x0f52,	// (0x00090356) clock_t5

0x0f67,	// (0x0009036b) clock_t6_ParamLimits

0x0f67,	// (0x0009036b) clock_t6

0x0f79,	// (0x0009037d) clock_t7_ParamLimits

0x0f79,	// (0x0009037d) clock_t7

0x0f8b,	// (0x0009038f) clock_t8_ParamLimits

0x0f8b,	// (0x0009038f) clock_t8

0x0f9f,	// (0x000903a3) clock_t9_ParamLimits

0x0f9f,	// (0x000903a3) clock_t9

0x0008,

0xf14c,	// (0x0009e550) clock_t_ParamLimits

0xf14c,	// (0x0009e550) clock_t

0xe08f,	// (0x0009d493) popup_clock_analogue_window_cp02

0xe08f,	// (0x0009d493) popup_clock_digital_window_cp01

0xe097,	// (0x0009d49b) listscroll_help_pane

0xddad,	// (0x0009d1b1) phob_pre_status_pane

0xe0a1,	// (0x0009d4a5) grid_qdial_pane

0xddad,	// (0x0009d1b1) listscroll_mce_pane

0xe0ab,	// (0x0009d4af) bg_notes_pane

0xe0b9,	// (0x0009d4bd) list_notes_pane

0x0fb3,	// (0x000903b7) scroll_pane_cp06

0xe0c7,	// (0x0009d4cb) bg_calc_paper_pane

0xa0d1,	// (0x000994d5) list_calc_pane

0xe0db,	// (0x0009d4df) bg_calc_display_pane

0x0fc7,	// (0x000903cb) calc_display_pane_t1

0x0fd9,	// (0x000903dd) calc_display_pane_t2

0xa0eb,	// (0x000994ef) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0009e563) calc_display_pane_t

0x0feb,	// (0x000903ef) cell_calc_pane_ParamLimits

0x0feb,	// (0x000903ef) cell_calc_pane

0xe0e7,	// (0x0009d4eb) bg_calc_paper_pane_g1

0xe0f3,	// (0x0009d4f7) bg_calc_paper_pane_g2

0xe0ff,	// (0x0009d503) bg_calc_paper_pane_g3

0xe10b,	// (0x0009d50f) bg_calc_paper_pane_g4

0xe117,	// (0x0009d51b) bg_calc_paper_pane_g5

0x1020,	// (0x00090424) bg_calc_paper_pane_g6

0x102f,	// (0x00090433) bg_calc_paper_pane_g7

0x103e,	// (0x00090442) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0009e56a) bg_calc_paper_pane_g

0x1051,	// (0x00090455) calc_bg_paper_pane_g9

0x1064,	// (0x00090468) list_calc_item_pane_ParamLimits

0x1064,	// (0x00090468) list_calc_item_pane

0xe123,	// (0x0009d527) list_calc_item_pane_g1

0xa0fd,	// (0x00099501) list_calc_item_pane_t1_ParamLimits

0xa0fd,	// (0x00099501) list_calc_item_pane_t1

0x107c,	// (0x00090480) list_calc_item_pane_t2_ParamLimits

0x107c,	// (0x00090480) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0009e57b) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0009e57b) list_calc_item_pane_t

0xe130,	// (0x0009d534) cell_calc_pane_g1

0xe13a,	// (0x0009d53e) grid_highlight_pane_cp02

0x10ae,	// (0x000904b2) bg_calc_display_pane_g1

0x10b7,	// (0x000904bb) bg_calc_display_pane_g2

0x10c1,	// (0x000904c5) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0009e585) bg_calc_display_pane_g

0x10ca,	// (0x000904ce) cell_qdial_pane_ParamLimits

0x10ca,	// (0x000904ce) cell_qdial_pane

0x10de,	// (0x000904e2) cell_qdial_pane_g1_ParamLimits

0x10de,	// (0x000904e2) cell_qdial_pane_g1

0x10f4,	// (0x000904f8) cell_qdial_pane_g2_ParamLimits

0x10f4,	// (0x000904f8) cell_qdial_pane_g2

0xe15c,	// (0x0009d560) cell_qdial_pane_g3_ParamLimits

0xe15c,	// (0x0009d560) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0009e58c) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0009e58c) cell_qdial_pane_g

0x111b,	// (0x0009051f) cell_qdial_pane_t1_ParamLimits

0x111b,	// (0x0009051f) cell_qdial_pane_t1

0x1133,	// (0x00090537) cell_qdial_pane_t2_ParamLimits

0x1133,	// (0x00090537) cell_qdial_pane_t2

0x1146,	// (0x0009054a) cell_qdial_pane_t3_ParamLimits

0x1146,	// (0x0009054a) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0009e595) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0009e595) cell_qdial_pane_t

0xddad,	// (0x0009d1b1) grid_highlight_pane_cp04

0xe168,	// (0x0009d56c) thumbnail_qdial_pane_ParamLimits

0xe168,	// (0x0009d56c) thumbnail_qdial_pane

0xe1c4,	// (0x0009d5c8) list_help_pane

0xe1cd,	// (0x0009d5d1) scroll_pane_cp02

0x1159,	// (0x0009055d) help_list_pane_t1_ParamLimits

0x1159,	// (0x0009055d) help_list_pane_t1

0xa10f,	// (0x00099513) bg_notes_pane_g2

0xa117,	// (0x0009951b) bg_notes_pane_g3

0xa11f,	// (0x00099523) notes_bg_pane_g1

0xa127,	// (0x0009952b) notes_bg_pane_g4

0xa12f,	// (0x00099533) notes_bg_pane_g5

0xa137,	// (0x0009953b) notes_bg_pane_g6

0xa13f,	// (0x00099543) notes_bg_pane_g7

0xa147,	// (0x0009954b) notes_bg_pane_g8

0xa14f,	// (0x00099553) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0009e5b3) notes_bg_pane_g

0x1176,	// (0x0009057a) list_notes_text_pane_ParamLimits

0x1176,	// (0x0009057a) list_notes_text_pane

0xe1d6,	// (0x0009d5da) list_notes_text_pane_g1

0x118b,	// (0x0009058f) list_notes_text_pane_t1

0xe0db,	// (0x0009d4df) listscroll_cale_week_pane

0x11b6,	// (0x000905ba) bg_cale_heading_pane

0xe1f0,	// (0x0009d5f4) bg_cale_pane_cp01

0x11ca,	// (0x000905ce) cale_week_corner_pane

0x11e0,	// (0x000905e4) cale_week_day_heading_pane

0x11f4,	// (0x000905f8) cale_week_scroll_pane_g1

0x1205,	// (0x00090609) cale_week_scroll_pane_g2

0x1216,	// (0x0009061a) cale_week_scroll_pane_g3

0x1227,	// (0x0009062b) cale_week_scroll_pane_g4

0x1238,	// (0x0009063c) cale_week_scroll_pane_g5

0x124b,	// (0x0009064f) cale_week_scroll_pane_g6

0x125e,	// (0x00090662) cale_week_scroll_pane_g7

0x1271,	// (0x00090675) cale_week_scroll_pane_g8

0x1284,	// (0x00090688) cale_week_scroll_pane_g9

0x1295,	// (0x00090699) cale_week_scroll_pane_g10

0x12a6,	// (0x000906aa) cale_week_scroll_pane_g11

0x12b7,	// (0x000906bb) cale_week_scroll_pane_g12

0x12c8,	// (0x000906cc) cale_week_scroll_pane_g13

0x12d9,	// (0x000906dd) cale_week_scroll_pane_g14

0x12ea,	// (0x000906ee) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0009e5c2) cale_week_scroll_pane_g

0x12fb,	// (0x000906ff) cale_week_time_pane

0x130e,	// (0x00090712) grid_cale_week_pane

0x1323,	// (0x00090727) scroll_pane_cp08

0x133d,	// (0x00090741) cell_cale_week_pane_ParamLimits

0x133d,	// (0x00090741) cell_cale_week_pane

0x137d,	// (0x00090781) cale_week_day_heading_pane_t1

0x13a7,	// (0x000907ab) cale_week_day_heading_pane_t2

0x13d1,	// (0x000907d5) cale_week_day_heading_pane_t3

0x13fb,	// (0x000907ff) cale_week_day_heading_pane_t4

0x1425,	// (0x00090829) cale_week_day_heading_pane_t5

0x144f,	// (0x00090853) cale_week_day_heading_pane_t6

0x147b,	// (0x0009087f) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0009e5e1) cale_week_day_heading_pane_t

0xe21b,	// (0x0009d61f) bg_cale_side_pane

0x14a5,	// (0x000908a9) cale_week_time_pane_t1

0x14bd,	// (0x000908c1) cale_week_time_pane_t2

0x14d5,	// (0x000908d9) cale_week_time_pane_t3

0x14ed,	// (0x000908f1) cale_week_time_pane_t4

0x1505,	// (0x00090909) cale_week_time_pane_t5

0x151d,	// (0x00090921) cale_week_time_pane_t6

0x1535,	// (0x00090939) cale_week_time_pane_t7

0x154d,	// (0x00090951) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0009e5f0) cale_week_time_pane_t

0x1565,	// (0x00090969) cell_cale_week_pane_g2

0x157e,	// (0x00090982) cell_cale_week_pane_g3_ParamLimits

0x157e,	// (0x00090982) cell_cale_week_pane_g3

0xe229,	// (0x0009d62d) grid_highlight_pane_cp07

0xe231,	// (0x0009d635) listscroll_gms_pane

0xe23b,	// (0x0009d63f) grid_gms_pane

0xe244,	// (0x0009d648) listscroll_gms_pane_g1

0xe24c,	// (0x0009d650) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0009e601) listscroll_gms_pane_g

0x1596,	// (0x0009099a) scroll_pane_cp010

0x15a1,	// (0x000909a5) cell_gms_pane_ParamLimits

0x15a1,	// (0x000909a5) cell_gms_pane

0x15b3,	// (0x000909b7) cell_gms_pane_g1

0xe254,	// (0x0009d658) cell_gms_pane_g2

0xe25c,	// (0x0009d660) cell_gms_pane_g3

0xe265,	// (0x0009d669) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0009e606) cell_gms_pane_g

0xe26e,	// (0x0009d672) grid_highlight_pane_cp09

0x45c9,	// (0x000939cd) phob_pre_status_pane_g1

0x45d1,	// (0x000939d5) phob_pre_status_pane_g2

0x45d9,	// (0x000939dd) phob_pre_status_pane_g3

0x45e1,	// (0x000939e5) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0009e9f5) phob_pre_status_pane_g

0x45f1,	// (0x000939f5) phob_pre_status_pane_t1

0x45ff,	// (0x00093a03) phob_pre_status_pane_t2

0x460f,	// (0x00093a13) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0009ea00) phob_pre_status_pane_t

0xddad,	// (0x0009d1b1) bg_list_pane_cp05

0x15c3,	// (0x000909c7) grid_vorec_pane

0x15cd,	// (0x000909d1) vorec_t1

0x15db,	// (0x000909df) vorec_t2

0x15e9,	// (0x000909ed) vorec_t3

0x15f7,	// (0x000909fb) vorec_t4

0x1605,	// (0x00090a09) vorec_t5

0xa157,	// (0x0009955b) vorec_t6

0x0006,

0xf20b,	// (0x0009e60f) vorec_t

0x1621,	// (0x00090a25) wait_bar_pane_cp01

0x1629,	// (0x00090a2d) cell_vorec_pane_ParamLimits

0x1629,	// (0x00090a2d) cell_vorec_pane

0xe276,	// (0x0009d67a) cell_vorec_pane_g1

0xddad,	// (0x0009d1b1) grid_highlight_pane_cp05

0x1654,	// (0x00090a58) cams_zoom_pane

0x1663,	// (0x00090a67) image_vga_pane

0x167d,	// (0x00090a81) main_camera_pane_g1

0x168f,	// (0x00090a93) main_camera_pane_g2

0x169f,	// (0x00090aa3) main_camera_pane_g3

0x16af,	// (0x00090ab3) main_camera_pane_g4

0x16bf,	// (0x00090ac3) main_camera_pane_g5

0x16cf,	// (0x00090ad3) main_camera_pane_g6

0x16e1,	// (0x00090ae5) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0009e61e) main_camera_pane_g

0x16f1,	// (0x00090af5) main_camera_pane_t1

0x1707,	// (0x00090b0b) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0009e62f) main_camera_pane_t

0x1741,	// (0x00090b45) cams_zoom_pane_cp_ParamLimits

0x1741,	// (0x00090b45) cams_zoom_pane_cp

0x1769,	// (0x00090b6d) image_cif_pane_ParamLimits

0x1769,	// (0x00090b6d) image_cif_pane

0x17a4,	// (0x00090ba8) image_subqcif_pane

0x17ac,	// (0x00090bb0) main_video_pane_g1_ParamLimits

0x17ac,	// (0x00090bb0) main_video_pane_g1

0x17d0,	// (0x00090bd4) main_video_pane_g2_ParamLimits

0x17d0,	// (0x00090bd4) main_video_pane_g2

0x1804,	// (0x00090c08) main_video_pane_g3_ParamLimits

0x1804,	// (0x00090c08) main_video_pane_g3

0x1832,	// (0x00090c36) main_video_pane_g4_ParamLimits

0x1832,	// (0x00090c36) main_video_pane_g4

0x1860,	// (0x00090c64) main_video_pane_g5_ParamLimits

0x1860,	// (0x00090c64) main_video_pane_g5

0xe28c,	// (0x0009d690) main_video_pane_g6_ParamLimits

0xe28c,	// (0x0009d690) main_video_pane_g6

0x0006,

0xf230,	// (0x0009e634) main_video_pane_g_ParamLimits

0xf230,	// (0x0009e634) main_video_pane_g

0x1889,	// (0x00090c8d) main_video_pane_t1_ParamLimits

0x1889,	// (0x00090c8d) main_video_pane_t1

0xe2a6,	// (0x0009d6aa) cams_zoom_pane_g1

0xe2af,	// (0x0009d6b3) cams_zoom_pane_g2

0xe2b8,	// (0x0009d6bc) cams_zoom_pane_g3

0xe2c1,	// (0x0009d6c5) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0009e643) cams_zoom_pane_g

0x18e6,	// (0x00090cea) grid_cams_pane

0x1900,	// (0x00090d04) linegrid_cams_pane

0x1914,	// (0x00090d18) cell_cams_pane_ParamLimits

0x1914,	// (0x00090d18) cell_cams_pane

0xe2ca,	// (0x0009d6ce) cams_burst_image_pane

0xe2d2,	// (0x0009d6d6) cell_cams_pane_g1

0xddad,	// (0x0009d1b1) grid_highlight_pane_cp03

0xe130,	// (0x0009d534) mp_bg_pane_g1

0xddad,	// (0x0009d1b1) bg_list_pane_cp03

0xa3b4,	// (0x000997b8) bg_mp_pane

0xa3bc,	// (0x000997c0) grid_mp_pane

0xa3c4,	// (0x000997c8) media_player_g1

0xa3cc,	// (0x000997d0) media_player_t1

0xa3da,	// (0x000997de) media_player_t2

0xa3e8,	// (0x000997ec) media_player_t3

0xa3f6,	// (0x000997fa) media_player_t4

0xa404,	// (0x00099808) media_player_t5

0xa412,	// (0x00099816) media_player_t6

0xa420,	// (0x00099824) media_player_t7

0x0006,

0xf5db,	// (0x0009e9df) media_player_t

0xa42e,	// (0x00099832) wait_bar_pane_cp02

0xf5c0,	// (0x0009e9c4) main_usb_pane_t

0x45c0,	// (0x000939c4) cell_mp_pane

0xe130,	// (0x0009d534) cell_mp_pane_g1

0xddad,	// (0x0009d1b1) grid_highlight_pane_cp06

0xe2da,	// (0x0009d6de) grid_skin_colour_pane

0xe2e2,	// (0x0009d6e6) list_highlight_pane_cp03

0x1a4a,	// (0x00090e4e) skin_g1

0xe2ea,	// (0x0009d6ee) skin_t1

0xe2f9,	// (0x0009d6fd) skin_t2

0x0001,

0xf274,	// (0x0009e678) skin_t

0x1a52,	// (0x00090e56) cell_skin_colour_pane_ParamLimits

0x1a52,	// (0x00090e56) cell_skin_colour_pane

0xe307,	// (0x0009d70b) cell_skin_colour_pane_g1

0x1acb,	// (0x00090ecf) call_video_g1_ParamLimits

0x1acb,	// (0x00090ecf) call_video_g1

0x1ae7,	// (0x00090eeb) call_video_g2_ParamLimits

0x1ae7,	// (0x00090eeb) call_video_g2

0x0001,

0xf279,	// (0x0009e67d) call_video_g_ParamLimits

0xf279,	// (0x0009e67d) call_video_g

0x1b39,	// (0x00090f3d) call_video_uplink_pane_cp1_ParamLimits

0x1b39,	// (0x00090f3d) call_video_uplink_pane_cp1

0xe319,	// (0x0009d71d) call_video_uplink_pane_cp2

0x1bd8,	// (0x00090fdc) video_down_crop_pane_ParamLimits

0x1bd8,	// (0x00090fdc) video_down_crop_pane

0x1ccf,	// (0x000910d3) video_down_pane_ParamLimits

0x1ccf,	// (0x000910d3) video_down_pane

0xe321,	// (0x0009d725) video_down_subqcif_pane_ParamLimits

0xe321,	// (0x0009d725) video_down_subqcif_pane

0xe339,	// (0x0009d73d) video_down_subqcif_pane_cp_ParamLimits

0xe339,	// (0x0009d73d) video_down_subqcif_pane_cp

0xe35f,	// (0x0009d763) im_reading_pane_ParamLimits

0xe35f,	// (0x0009d763) im_reading_pane

0x1ddd,	// (0x000911e1) im_writing_pane_ParamLimits

0x1ddd,	// (0x000911e1) im_writing_pane

0x1df3,	// (0x000911f7) im_reading_pane_t1

0xe379,	// (0x0009d77d) list_im_pane

0xe38a,	// (0x0009d78e) scroll_pane_cp07

0x1e2c,	// (0x00091230) im_writing_pane_t1_ParamLimits

0x1e2c,	// (0x00091230) im_writing_pane_t1

0xe3a3,	// (0x0009d7a7) im_writing_pane_t2_ParamLimits

0xe3a3,	// (0x0009d7a7) im_writing_pane_t2

0x0001,

0xf283,	// (0x0009e687) im_writing_pane_t_ParamLimits

0xf283,	// (0x0009e687) im_writing_pane_t

0xddad,	// (0x0009d1b1) input_focus_pane_cp04

0xddad,	// (0x0009d1b1) input_focus_pane_cp05

0x1e41,	// (0x00091245) list_im_single_pane_ParamLimits

0x1e41,	// (0x00091245) list_im_single_pane

0x1e55,	// (0x00091259) list_single_im_pane_t1

0x4580,	// (0x00093984) blid_accuracy_pane

0x4588,	// (0x0009398c) blid_compass_pane

0x4592,	// (0x00093996) main_location_t1

0x45a2,	// (0x000939a6) main_location_t2

0x45b2,	// (0x000939b6) main_location_t3

0x0002,

0xf5ea,	// (0x0009e9ee) main_location_t

0xddad,	// (0x0009d1b1) aid_levels_location

0xe130,	// (0x0009d534) blid_accuracy_pane_g1

0xe130,	// (0x0009d534) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0009e6e9) blid_accuracy_pane_g

0xe3eb,	// (0x0009d7ef) wml_content_pane

0xe429,	// (0x0009d82d) wml_button_pane_ParamLimits

0xe429,	// (0x0009d82d) wml_button_pane

0x1e64,	// (0x00091268) wml_list_single_large_pane_ParamLimits

0x1e64,	// (0x00091268) wml_list_single_large_pane

0x1e79,	// (0x0009127d) wml_list_single_medium_pane_ParamLimits

0x1e79,	// (0x0009127d) wml_list_single_medium_pane

0x1e8f,	// (0x00091293) wml_list_single_small_pane_ParamLimits

0x1e8f,	// (0x00091293) wml_list_single_small_pane

0xe43d,	// (0x0009d841) wml_selection_box_pane_ParamLimits

0xe43d,	// (0x0009d841) wml_selection_box_pane

0xe450,	// (0x0009d854) wml_list_single_pane_t1

0xe45f,	// (0x0009d863) wml_list_single_medium_pane_t1

0xe46e,	// (0x0009d872) wml_list_single_large_pane_t1

0xe47d,	// (0x0009d881) input_focus_pane_cp02_ParamLimits

0xe47d,	// (0x0009d881) input_focus_pane_cp02

0xe490,	// (0x0009d894) wml_selection_box_pane_g1

0xe499,	// (0x0009d89d) wml_selection_box_pane_t1_ParamLimits

0xe499,	// (0x0009d89d) wml_selection_box_pane_t1

0xe008,	// (0x0009d40c) bg_wml_button_pane_ParamLimits

0xe008,	// (0x0009d40c) bg_wml_button_pane

0xe4b1,	// (0x0009d8b5) wml_button_pane_g1

0xe4b9,	// (0x0009d8bd) wml_button_pane_t1

0xe4b1,	// (0x0009d8b5) wml_button_bg_pane_g1

0xe4c9,	// (0x0009d8cd) wml_button_bg_pane_g2

0xe4d1,	// (0x0009d8d5) wml_button_bg_pane_g3

0xe4d9,	// (0x0009d8dd) wml_button_bg_pane_g4

0xe4e1,	// (0x0009d8e5) wml_button_bg_pane_g5

0xe4e9,	// (0x0009d8ed) wml_button_bg_pane_g6

0xe4f1,	// (0x0009d8f5) wml_button_bg_pane_g7

0xe4f9,	// (0x0009d8fd) wml_button_bg_pane_g8

0xe501,	// (0x0009d905) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0009e68c) wml_button_bg_pane_g

0x1ea7,	// (0x000912ab) bg_list_pane_cp02

0xe509,	// (0x0009d90d) mce_header_pane_ParamLimits

0xe509,	// (0x0009d90d) mce_header_pane

0xe51f,	// (0x0009d923) mce_icon_pane

0xe51f,	// (0x0009d923) mce_image_pane

0xe528,	// (0x0009d92c) mce_text_pane_ParamLimits

0xe528,	// (0x0009d92c) mce_text_pane

0x1eaf,	// (0x000912b3) scroll_pane_cp03

0xe421,	// (0x0009d825) scroll_pane_cp04

0xe53b,	// (0x0009d93f) scroll_pane_cp05_ParamLimits

0xe53b,	// (0x0009d93f) scroll_pane_cp05

0x1eb9,	// (0x000912bd) mce_header_field_pane_ParamLimits

0x1eb9,	// (0x000912bd) mce_header_field_pane

0x1ed0,	// (0x000912d4) mce_header_field_pane_2_ParamLimits

0x1ed0,	// (0x000912d4) mce_header_field_pane_2

0x1ee6,	// (0x000912ea) mce_header_field_pane_3

0x1eee,	// (0x000912f2) list_single_mce_message_pane_ParamLimits

0x1eee,	// (0x000912f2) list_single_mce_message_pane

0x1f03,	// (0x00091307) list_single_mce_smart_pane_ParamLimits

0x1f03,	// (0x00091307) list_single_mce_smart_pane

0xe547,	// (0x0009d94b) input_focus_pane_cp03

0xe550,	// (0x0009d954) list_header_data_pane

0x1f23,	// (0x00091327) mce_header_field_pane_t1

0x1f33,	// (0x00091337) list_single_mce_header_pane_ParamLimits

0x1f33,	// (0x00091337) list_single_mce_header_pane

0xe558,	// (0x0009d95c) list_single_mce_header_pane_t1

0xe567,	// (0x0009d96b) list_single_mce_message_pane_g1

0xe56f,	// (0x0009d973) list_single_mce_message_pane_t1

0x1f65,	// (0x00091369) bg_cale_heading_pane_cp01_ParamLimits

0x1f65,	// (0x00091369) bg_cale_heading_pane_cp01

0xe57d,	// (0x0009d981) bg_cale_pane_cp02_ParamLimits

0xe57d,	// (0x0009d981) bg_cale_pane_cp02

0x1f88,	// (0x0009138c) cale_month_corner_pane

0x1f9e,	// (0x000913a2) cale_month_day_heading_pane_ParamLimits

0x1f9e,	// (0x000913a2) cale_month_day_heading_pane

0x1fd1,	// (0x000913d5) cale_month_pane_g1_ParamLimits

0x1fd1,	// (0x000913d5) cale_month_pane_g1

0x1fed,	// (0x000913f1) cale_month_pane_g2_ParamLimits

0x1fed,	// (0x000913f1) cale_month_pane_g2

0x2008,	// (0x0009140c) cale_month_pane_g3_ParamLimits

0x2008,	// (0x0009140c) cale_month_pane_g3

0x2034,	// (0x00091438) cale_month_pane_g4_ParamLimits

0x2034,	// (0x00091438) cale_month_pane_g4

0x2060,	// (0x00091464) cale_month_pane_g5_ParamLimits

0x2060,	// (0x00091464) cale_month_pane_g5

0x2094,	// (0x00091498) cale_month_pane_g6_ParamLimits

0x2094,	// (0x00091498) cale_month_pane_g6

0x20d0,	// (0x000914d4) cale_month_pane_g7_ParamLimits

0x20d0,	// (0x000914d4) cale_month_pane_g7

0x210c,	// (0x00091510) cale_month_pane_g8_ParamLimits

0x210c,	// (0x00091510) cale_month_pane_g8

0x2148,	// (0x0009154c) cale_month_pane_g9_ParamLimits

0x2148,	// (0x0009154c) cale_month_pane_g9

0x2182,	// (0x00091586) cale_month_pane_g10_ParamLimits

0x2182,	// (0x00091586) cale_month_pane_g10

0x21bc,	// (0x000915c0) cale_month_pane_g11_ParamLimits

0x21bc,	// (0x000915c0) cale_month_pane_g11

0x21f6,	// (0x000915fa) cale_month_pane_g12_ParamLimits

0x21f6,	// (0x000915fa) cale_month_pane_g12

0x2230,	// (0x00091634) cale_month_pane_g13_ParamLimits

0x2230,	// (0x00091634) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0009e69f) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0009e69f) cale_month_pane_g

0x226a,	// (0x0009166e) cale_month_week_pane

0x227d,	// (0x00091681) grid_cale_month_pane_ParamLimits

0x227d,	// (0x00091681) grid_cale_month_pane

0x22ab,	// (0x000916af) cale_month_day_heading_pane_t1

0x2309,	// (0x0009170d) cale_month_day_heading_pane_t2

0x236e,	// (0x00091772) cale_month_day_heading_pane_t3

0x23d3,	// (0x000917d7) cale_month_day_heading_pane_t4

0x2438,	// (0x0009183c) cale_month_day_heading_pane_t5

0x24ad,	// (0x000918b1) cale_month_day_heading_pane_t6

0x2522,	// (0x00091926) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0009e6ba) cale_month_day_heading_pane_t

0xe21b,	// (0x0009d61f) bg_cale_side_pane_cp01

0x2597,	// (0x0009199b) cale_month_week_pane_t1

0x25ae,	// (0x000919b2) cale_month_week_pane_t2

0x25c5,	// (0x000919c9) cale_month_week_pane_t3

0x25dc,	// (0x000919e0) cale_month_week_pane_t4

0x25f3,	// (0x000919f7) cale_month_week_pane_t5

0x260a,	// (0x00091a0e) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0009e6c9) cale_month_week_pane_t

0x2621,	// (0x00091a25) cell_cale_month_pane_ParamLimits

0x2621,	// (0x00091a25) cell_cale_month_pane

0xa165,	// (0x00099569) cell_cale_month_pane_g1

0x2721,	// (0x00091b25) cell_cale_month_pane_t1_ParamLimits

0x2721,	// (0x00091b25) cell_cale_month_pane_t1

0xe229,	// (0x0009d62d) grid_highlight_pane_cp08

0xe130,	// (0x0009d534) main_smil_g1

0x273d,	// (0x00091b41) smil_status_pane

0xe5b2,	// (0x0009d9b6) smil_text_pane

0xa2d4,	// (0x000996d8) bg_popup_call3_rect_pane_g8

0xa2dc,	// (0x000996e0) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0009e982) bg_popup_call3_rect_pane_g

0xa556,	// (0x0009995a) smil_status_volume_pane_g1

0xe5bc,	// (0x0009d9c0) smil_status_pane_t1

0xa589,	// (0x0009998d) volume_smil_pane

0xe5d3,	// (0x0009d9d7) list_smil_text_pane

0x2750,	// (0x00091b54) scroll_pane_cp011

0x275b,	// (0x00091b5f) smil_text_list_pane_t1_ParamLimits

0x275b,	// (0x00091b5f) smil_text_list_pane_t1

0xa171,	// (0x00099575) aid_volume_smil_ParamLimits

0xa171,	// (0x00099575) aid_volume_smil

0xe130,	// (0x0009d534) smil_volume_pane_g1

0xe130,	// (0x0009d534) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0009e6e9) smil_volume_pane_g

0xe0db,	// (0x0009d4df) listscroll_cale_day_pane

0xe5dd,	// (0x0009d9e1) bg_cale_pane

0xe5f5,	// (0x0009d9f9) list_cale_pane

0xe606,	// (0x0009da0a) scroll_pane_cp09

0xe617,	// (0x0009da1b) cale_bg_pane_g1

0xe61f,	// (0x0009da23) cale_bg_pane_g2

0xe627,	// (0x0009da2b) cale_bg_pane_g3

0xe62f,	// (0x0009da33) cale_bg_pane_g4

0xe637,	// (0x0009da3b) cale_bg_pane_g5

0xe63f,	// (0x0009da43) cale_bg_pane_g6

0xe647,	// (0x0009da4b) cale_bg_pane_g7

0xe64f,	// (0x0009da53) cale_bg_pane_g8

0xe657,	// (0x0009da5b) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0009e6ee) cale_bg_pane_g

0x27a1,	// (0x00091ba5) list_cale_time_pane_ParamLimits

0x27a1,	// (0x00091ba5) list_cale_time_pane

0xe65f,	// (0x0009da63) list_cale_time_pane_g1_ParamLimits

0xe65f,	// (0x0009da63) list_cale_time_pane_g1

0xe66b,	// (0x0009da6f) list_cale_time_pane_g2_ParamLimits

0xe66b,	// (0x0009da6f) list_cale_time_pane_g2

0x27b4,	// (0x00091bb8) list_cale_time_pane_g3_ParamLimits

0x27b4,	// (0x00091bb8) list_cale_time_pane_g3

0x27c2,	// (0x00091bc6) list_cale_time_pane_g4_ParamLimits

0x27c2,	// (0x00091bc6) list_cale_time_pane_g4

0x27d0,	// (0x00091bd4) list_cale_time_pane_g5_ParamLimits

0x27d0,	// (0x00091bd4) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0009e701) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0009e701) list_cale_time_pane_g

0xe685,	// (0x0009da89) list_cale_time_pane_t1_ParamLimits

0xe685,	// (0x0009da89) list_cale_time_pane_t1

0xe6ad,	// (0x0009dab1) list_cale_time_pane_t2_ParamLimits

0xe6ad,	// (0x0009dab1) list_cale_time_pane_t2

0x2b41,	// (0x00091f45) aid_blid_cardinal_pane

0x2b7f,	// (0x00091f83) compass_pane_t4

0xe6d5,	// (0x0009dad9) list_cale_time_pane_t4_ParamLimits

0xe6d5,	// (0x0009dad9) list_cale_time_pane_t4

0x2b8d,	// (0x00091f91) compass_pane_t5

0x2b9b,	// (0x00091f9f) compass_pane_t6

0x2ba9,	// (0x00091fad) compass_pane_t7

0xeb00,	// (0x0009df04) navi_pane_cc_t1

0xec79,	// (0x0009e07d) aid_phob_thumbnail_center_pane

0x32f3,	// (0x000926f7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0009e70e) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0009e70e) list_cale_time_pane_t

0xd7ec,	// (0x0009cbf0) bg_popup_window_pane_cp02_ParamLimits

0xd7ec,	// (0x0009cbf0) bg_popup_window_pane_cp02

0xe6fd,	// (0x0009db01) heading_pane_cp01_ParamLimits

0xe6fd,	// (0x0009db01) heading_pane_cp01

0xe709,	// (0x0009db0d) loc_req_pane_ParamLimits

0xe709,	// (0x0009db0d) loc_req_pane

0xe719,	// (0x0009db1d) loc_type_pane_ParamLimits

0xe719,	// (0x0009db1d) loc_type_pane

0xe72b,	// (0x0009db2f) loc_type_pane_t1_ParamLimits

0xe72b,	// (0x0009db2f) loc_type_pane_t1

0xe73d,	// (0x0009db41) loc_type_pane_t2_ParamLimits

0xe73d,	// (0x0009db41) loc_type_pane_t2

0xe74f,	// (0x0009db53) loc_type_pane_t3_ParamLimits

0xe74f,	// (0x0009db53) loc_type_pane_t3

0x0002,

0xf311,	// (0x0009e715) loc_type_pane_t_ParamLimits

0xf311,	// (0x0009e715) loc_type_pane_t

0xe761,	// (0x0009db65) list_loc_req_pane

0xe76b,	// (0x0009db6f) scroll_pane_cp012

0x27de,	// (0x00091be2) list_single_loc_request_popup_menu_pane_ParamLimits

0x27de,	// (0x00091be2) list_single_loc_request_popup_menu_pane

0xe776,	// (0x0009db7a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe776,	// (0x0009db7a) list_single_loc_request_popup_menu_pane_g1

0xe782,	// (0x0009db86) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe782,	// (0x0009db86) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0009e71c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0009e71c) list_single_loc_request_popup_menu_pane_g

0xe78e,	// (0x0009db92) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe78e,	// (0x0009db92) list_single_loc_request_popup_menu_pane_t1

0xe008,	// (0x0009d40c) bg_popup_window_pane_cp03_ParamLimits

0xe008,	// (0x0009d40c) bg_popup_window_pane_cp03

0xec64,	// (0x0009e068) heading_loc_req_pane_ParamLimits

0xec64,	// (0x0009e068) heading_loc_req_pane

0x27eb,	// (0x00091bef) popup_dyc_status_message_window_g1_ParamLimits

0x27eb,	// (0x00091bef) popup_dyc_status_message_window_g1

0x27ff,	// (0x00091c03) popup_dyc_status_message_window_t1_ParamLimits

0x27ff,	// (0x00091c03) popup_dyc_status_message_window_t1

0x2814,	// (0x00091c18) popup_dyc_status_message_window_t2_ParamLimits

0x2814,	// (0x00091c18) popup_dyc_status_message_window_t2

0x2829,	// (0x00091c2d) popup_dyc_status_message_window_t3_ParamLimits

0x2829,	// (0x00091c2d) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0009e721) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0009e721) popup_dyc_status_message_window_t

0xddad,	// (0x0009d1b1) bg_heading_pane_cp01

0xe7a4,	// (0x0009dba8) heading_loc_req_pane_g1

0xe7ac,	// (0x0009dbb0) heading_loc_req_pane_g2

0xe7b4,	// (0x0009dbb8) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0009e728) heading_loc_req_pane_g

0xe7bc,	// (0x0009dbc0) heading_loc_req_pane_t1

0xe7cb,	// (0x0009dbcf) bg_popup_sub_pane_cp01_ParamLimits

0xe7cb,	// (0x0009dbcf) bg_popup_sub_pane_cp01

0xe7d9,	// (0x0009dbdd) popup_cale_events_window_g1_ParamLimits

0xe7d9,	// (0x0009dbdd) popup_cale_events_window_g1

0xe7f9,	// (0x0009dbfd) popup_cale_events_window_g2_ParamLimits

0xe7f9,	// (0x0009dbfd) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0009e75c) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0009e75c) popup_cale_events_window_g

0xe819,	// (0x0009dc1d) popup_cale_events_window_t1_ParamLimits

0xe819,	// (0x0009dc1d) popup_cale_events_window_t1

0xe82b,	// (0x0009dc2f) popup_cale_events_window_t2_ParamLimits

0xe82b,	// (0x0009dc2f) popup_cale_events_window_t2

0xe869,	// (0x0009dc6d) popup_cale_events_window_t3_ParamLimits

0xe869,	// (0x0009dc6d) popup_cale_events_window_t3

0xe8a3,	// (0x0009dca7) popup_cale_events_window_t4_ParamLimits

0xe8a3,	// (0x0009dca7) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0009e761) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0009e761) popup_cale_events_window_t

0x292c,	// (0x00091d30) call_type_pane

0x293c,	// (0x00091d40) popup_call_status_window_g1

0x2950,	// (0x00091d54) popup_call_status_window_g2

0x2964,	// (0x00091d68) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0009e76a) popup_call_status_window_g

0xe8d9,	// (0x0009dcdd) call_type_pane_g1

0xe8e2,	// (0x0009dce6) call_type_pane_g2

0x0001,

0xf36d,	// (0x0009e771) call_type_pane_g

0xddad,	// (0x0009d1b1) bg_popup_sub_pane_cp02

0xe8eb,	// (0x0009dcef) listscroll_popup_wml_pane

0xe8f3,	// (0x0009dcf7) list_wml_pane

0xe8fd,	// (0x0009dd01) scroll_pane_cp013

0xe908,	// (0x0009dd0c) list_single_graphic_popup_wml_pane_ParamLimits

0xe908,	// (0x0009dd0c) list_single_graphic_popup_wml_pane

0xe130,	// (0x0009d534) list_single_graphic_popup_wml_pane_g1

0xe91c,	// (0x0009dd20) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0009e776) list_single_graphic_popup_wml_pane_g

0xe924,	// (0x0009dd28) list_single_graphic_popup_wml_pane_t1

0xe93a,	// (0x0009dd3e) aid_call_pane

0xe000,	// (0x0009d404) popup_clock_analogue_window_g1

0xe000,	// (0x0009d404) popup_clock_analogue_window_g2

0xa193,	// (0x00099597) popup_clock_analogue_window_g3

0xa193,	// (0x00099597) popup_clock_analogue_window_g4

0xe130,	// (0x0009d534) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0009e77b) popup_clock_analogue_window_g

0xa19b,	// (0x0009959f) popup_clock_analogue_window_t1

0xa1a9,	// (0x000995ad) clock_digital_number_pane_ParamLimits

0xa1a9,	// (0x000995ad) clock_digital_number_pane

0xa1b5,	// (0x000995b9) clock_digital_number_pane_cp02_ParamLimits

0xa1b5,	// (0x000995b9) clock_digital_number_pane_cp02

0xa1c1,	// (0x000995c5) clock_digital_number_pane_cp03_ParamLimits

0xa1c1,	// (0x000995c5) clock_digital_number_pane_cp03

0xa1cd,	// (0x000995d1) clock_digital_number_pane_cp04_ParamLimits

0xa1cd,	// (0x000995d1) clock_digital_number_pane_cp04

0xa1dd,	// (0x000995e1) clock_digital_separator_pane_ParamLimits

0xa1dd,	// (0x000995e1) clock_digital_separator_pane

0xa1e9,	// (0x000995ed) popup_clock_digital_window_t1

0xe130,	// (0x0009d534) clock_digital_number_pane_g1

0xe130,	// (0x0009d534) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0009e6e9) clock_digital_number_pane_g

0xe130,	// (0x0009d534) clock_digital_separator_pane_g1

0xe130,	// (0x0009d534) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0009e6e9) clock_digital_separator_pane_g

0xddad,	// (0x0009d1b1) bg_popup_window_pane_cp04

0xe942,	// (0x0009dd46) heading_pane_cp03

0xe94a,	// (0x0009dd4e) listscroll_popup_gms_pane

0xe952,	// (0x0009dd56) grid_large_graphic_popup_pane

0xe95c,	// (0x0009dd60) listscroll_popup_gms_pane_g1

0xe964,	// (0x0009dd68) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0009e786) listscroll_popup_gms_pane_g

0xe421,	// (0x0009d825) scroll_pane_cp014

0x2973,	// (0x00091d77) cell_large_graphic_popup_pane_ParamLimits

0x2973,	// (0x00091d77) cell_large_graphic_popup_pane

0x298b,	// (0x00091d8f) cell_large_graphic_popup_pane_g1_ParamLimits

0x298b,	// (0x00091d8f) cell_large_graphic_popup_pane_g1

0xe96c,	// (0x0009dd70) cell_large_graphic_popup_pane_g2_ParamLimits

0xe96c,	// (0x0009dd70) cell_large_graphic_popup_pane_g2

0xe978,	// (0x0009dd7c) cell_large_graphic_popup_pane_g3_ParamLimits

0xe978,	// (0x0009dd7c) cell_large_graphic_popup_pane_g3

0xe985,	// (0x0009dd89) cell_large_graphic_popup_pane_g4_ParamLimits

0xe985,	// (0x0009dd89) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0009e78b) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0009e78b) cell_large_graphic_popup_pane_g

0xe995,	// (0x0009dd99) grid_highlight_pane_cp010

0xe130,	// (0x0009d534) bg_popup_call_pane_g1

0xe99f,	// (0x0009dda3) list_single_graphic_popup_conf_pane_ParamLimits

0xe99f,	// (0x0009dda3) list_single_graphic_popup_conf_pane

0xe9b2,	// (0x0009ddb6) list_highlight_pane_cp01

0xe9bb,	// (0x0009ddbf) list_single_graphic_popup_conf_pane_g1

0xe9c3,	// (0x0009ddc7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0009e794) list_single_graphic_popup_conf_pane_g

0xe9cb,	// (0x0009ddcf) list_single_graphic_popup_conf_pane_t1

0xe9d9,	// (0x0009dddd) linegrid_cams_pane_g1

0x2997,	// (0x00091d9b) linegrid_cams_pane_g2

0xe25c,	// (0x0009d660) linegrid_cams_pane_g3

0xe9e2,	// (0x0009dde6) linegrid_cams_pane_g4

0x29a0,	// (0x00091da4) linegrid_cams_pane_g5

0x29a9,	// (0x00091dad) linegrid_cams_pane_g6

0xe265,	// (0x0009d669) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0009e799) linegrid_cams_pane_g

0xe9eb,	// (0x0009ddef) popup_clock_analogue_window

0xe9eb,	// (0x0009ddef) popup_clock_digital_window

0xddad,	// (0x0009d1b1) popup_phob_thumbnail_window

0xe130,	// (0x0009d534) call_video_uplink_pane_g1

0xe9f4,	// (0x0009ddf8) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0009e7a8) call_video_uplink_pane_g

0xe9fc,	// (0x0009de00) video_uplink_pane

0xea04,	// (0x0009de08) mce_image_pane_g1

0x29b4,	// (0x00091db8) mce_image_pane_g2

0x29be,	// (0x00091dc2) mce_image_pane_g3

0x29c6,	// (0x00091dca) mce_image_pane_g4

0x29ce,	// (0x00091dd2) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0009e7ad) mce_image_pane_g

0xea0e,	// (0x0009de12) control_top_pane_stacon_cp01_ParamLimits

0xea0e,	// (0x0009de12) control_top_pane_stacon_cp01

0xea22,	// (0x0009de26) uni_indicator_pane_stacon_cp01_ParamLimits

0xea22,	// (0x0009de26) uni_indicator_pane_stacon_cp01

0xea33,	// (0x0009de37) bg_popup_sub_pane_cp03

0x29d6,	// (0x00091dda) chi_dic_find_pane

0x29de,	// (0x00091de2) listscroll_chi_dic_pane

0x29e7,	// (0x00091deb) main_pane_chidic_g1

0xea3d,	// (0x0009de41) chi_dic_find_pane_t1

0xea4b,	// (0x0009de4f) find_chidic_pane

0xea54,	// (0x0009de58) chi_dic_list_pane_ParamLimits

0xea54,	// (0x0009de58) chi_dic_list_pane

0xea65,	// (0x0009de69) scroll_pane_cp020

0xea6d,	// (0x0009de71) find_chidic_pane_t1

0xddad,	// (0x0009d1b1) input_focus_pane_cp06

0x29fa,	// (0x00091dfe) list_chi_dic_pane_ParamLimits

0x29fa,	// (0x00091dfe) list_chi_dic_pane

0x2a0c,	// (0x00091e10) list_chi_dic_pane_t1_ParamLimits

0x2a0c,	// (0x00091e10) list_chi_dic_pane_t1

0xddad,	// (0x0009d1b1) list_highlight_pane_cp020

0xea7c,	// (0x0009de80) bg_cale_heading_pane_g1

0x2a1f,	// (0x00091e23) bg_cale_heading_pane_g2

0x2a27,	// (0x00091e2b) bg_cale_heading_pane_g3

0x2a2f,	// (0x00091e33) bg_cale_heading_pane_g4

0x2a39,	// (0x00091e3d) bg_cale_heading_pane_g5

0x2a43,	// (0x00091e47) bg_cale_heading_pane_g6

0x2a4b,	// (0x00091e4f) bg_cale_heading_pane_g7

0x2a53,	// (0x00091e57) bg_cale_heading_pane_g8

0x2a5d,	// (0x00091e61) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0009e7b8) bg_cale_heading_pane_g

0xea7c,	// (0x0009de80) bg_cale_side_pane_g1

0x2a67,	// (0x00091e6b) bg_cale_side_pane_g2

0x2a6f,	// (0x00091e73) bg_cale_side_pane_g3

0x2a77,	// (0x00091e7b) bg_cale_side_pane_g4

0x2a7f,	// (0x00091e83) bg_cale_side_pane_g5

0x2a87,	// (0x00091e8b) bg_cale_side_pane_g6

0x2a8f,	// (0x00091e93) bg_cale_side_pane_g7

0x2a97,	// (0x00091e9b) bg_cale_side_pane_g8

0x2a9f,	// (0x00091ea3) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0009e7cb) bg_cale_side_pane_g

0x2aa7,	// (0x00091eab) popup_call_status_window_ParamLimits

0x2aa7,	// (0x00091eab) popup_call_status_window

0xea84,	// (0x0009de88) stacon_top_pane

0xea8c,	// (0x0009de90) status_pane_ParamLimits

0xea8c,	// (0x0009de90) status_pane

0xeaa1,	// (0x0009dea5) status_small_pane

0xeaa9,	// (0x0009dead) control_pane

0xddad,	// (0x0009d1b1) stacon_bottom_pane

0xeab1,	// (0x0009deb5) list_single_mce_smart_pane_t1_ParamLimits

0xeab1,	// (0x0009deb5) list_single_mce_smart_pane_t1

0xeac4,	// (0x0009dec8) list_single_mce_smart_pane_t2_ParamLimits

0xeac4,	// (0x0009dec8) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0009e7de) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0009e7de) list_single_mce_smart_pane_t

0x2af0,	// (0x00091ef4) compass_pane

0x2af9,	// (0x00091efd) main_location2_pane_t1

0x2b0b,	// (0x00091f0f) main_location2_pane_t2

0x2b1d,	// (0x00091f21) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0009e7e3) main_location2_pane_t

0xeae3,	// (0x0009dee7) compass_pane_g1_ParamLimits

0xeae3,	// (0x0009dee7) compass_pane_g1

0x2b61,	// (0x00091f65) compass_pane_t1

0x2b70,	// (0x00091f74) compass_pane_t2

0x0005,

0xf3e8,	// (0x0009e7ec) compass_pane_t

0x2bb7,	// (0x00091fbb) text_secondary_cp61

0xeaf7,	// (0x0009defb) navi_pane_cams_g5

0xeb1a,	// (0x0009df1e) navi_pane_im_t1

0xeb28,	// (0x0009df2c) navi_pane_mp_g1_ParamLimits

0xeb28,	// (0x0009df2c) navi_pane_mp_g1

0xeb3c,	// (0x0009df40) navi_pane_mp_g2_ParamLimits

0xeb3c,	// (0x0009df40) navi_pane_mp_g2

0xeb48,	// (0x0009df4c) navi_pane_mp_g3_ParamLimits

0xeb48,	// (0x0009df4c) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0009e800) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0009e800) navi_pane_mp_g

0xeb54,	// (0x0009df58) navi_pane_mp_t1

0xeb62,	// (0x0009df66) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0009e807) navi_pane_mp_t

0xeb9e,	// (0x0009dfa2) navi_pane_vt_g1

0xeb54,	// (0x0009df58) navi_pane_vt_t1

0xeba6,	// (0x0009dfaa) navi_slider_pane

0xebae,	// (0x0009dfb2) zooming_pane

0xebb6,	// (0x0009dfba) navi_slider_pane_g1

0xa206,	// (0x0009960a) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0009e80e) navi_slider_pane_g

0xebda,	// (0x0009dfde) aid_levels_zoom

0xebe2,	// (0x0009dfe6) zooming_pane_g1

0xebea,	// (0x0009dfee) zooming_pane_g2

0xebea,	// (0x0009dfee) zooming_pane_g3

0x0002,

0xf419,	// (0x0009e81d) zooming_pane_g

0xebf2,	// (0x0009dff6) level_10_zoom

0xebfb,	// (0x0009dfff) level_11_zoom

0xec04,	// (0x0009e008) level_1_zoom

0xec0d,	// (0x0009e011) level_2_zoom

0xec16,	// (0x0009e01a) level_3_zoom

0xec1f,	// (0x0009e023) level_4_zoom

0xec28,	// (0x0009e02c) level_5_zoom

0xec31,	// (0x0009e035) level_6_zoom

0xec3a,	// (0x0009e03e) level_7_zoom

0xec43,	// (0x0009e047) level_8_zoom

0xec70,	// (0x0009e074) level_9_zoom

0xec81,	// (0x0009e085) popup_phob_thumbnail_window_g1

0xec89,	// (0x0009e08d) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0009e824) popup_phob_thumbnail_window_g

0xa436,	// (0x0009983a) level_1_location

0xa43e,	// (0x00099842) level_2_location

0xa446,	// (0x0009984a) level_3_location

0xa44e,	// (0x00099852) level_4_location

0xebae,	// (0x0009dfb2) level_5_location

0x2cf2,	// (0x000920f6) mce_icon_pane_g1

0x2cfa,	// (0x000920fe) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0009e829) mce_icon_pane_g

0x2d02,	// (0x00092106) main_mup_pane_g1_ParamLimits

0x2d02,	// (0x00092106) main_mup_pane_g1

0x2d18,	// (0x0009211c) main_mup_pane_g2_ParamLimits

0x2d18,	// (0x0009211c) main_mup_pane_g2

0x2d30,	// (0x00092134) main_mup_pane_g3_ParamLimits

0x2d30,	// (0x00092134) main_mup_pane_g3

0x2d48,	// (0x0009214c) main_mup_pane_g4_ParamLimits

0x2d48,	// (0x0009214c) main_mup_pane_g4

0x2d60,	// (0x00092164) main_mup_pane_g5_ParamLimits

0x2d60,	// (0x00092164) main_mup_pane_g5

0x2d7c,	// (0x00092180) main_mup_pane_g6_ParamLimits

0x2d7c,	// (0x00092180) main_mup_pane_g6

0x2d94,	// (0x00092198) main_mup_pane_g7_ParamLimits

0x2d94,	// (0x00092198) main_mup_pane_g7

0x2dac,	// (0x000921b0) main_mup_pane_g8_ParamLimits

0x2dac,	// (0x000921b0) main_mup_pane_g8

0x2dc6,	// (0x000921ca) main_mup_pane_g9_ParamLimits

0x2dc6,	// (0x000921ca) main_mup_pane_g9

0x2de0,	// (0x000921e4) main_mup_pane_g10_ParamLimits

0x2de0,	// (0x000921e4) main_mup_pane_g10

0x2dfa,	// (0x000921fe) main_mup_pane_g11_ParamLimits

0x2dfa,	// (0x000921fe) main_mup_pane_g11

0x2e0e,	// (0x00092212) main_mup_pane_g12_ParamLimits

0x2e0e,	// (0x00092212) main_mup_pane_g12

0x2e24,	// (0x00092228) main_mup_pane_g13_ParamLimits

0x2e24,	// (0x00092228) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0009e82e) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0009e82e) main_mup_pane_g

0x2e38,	// (0x0009223c) main_mup_pane_t1_ParamLimits

0x2e38,	// (0x0009223c) main_mup_pane_t1

0x2e52,	// (0x00092256) main_mup_pane_t2_ParamLimits

0x2e52,	// (0x00092256) main_mup_pane_t2

0x2e6a,	// (0x0009226e) main_mup_pane_t3_ParamLimits

0x2e6a,	// (0x0009226e) main_mup_pane_t3

0x2e82,	// (0x00092286) main_mup_pane_t4_ParamLimits

0x2e82,	// (0x00092286) main_mup_pane_t4

0x2ea0,	// (0x000922a4) main_mup_pane_t5_ParamLimits

0x2ea0,	// (0x000922a4) main_mup_pane_t5

0x2eb5,	// (0x000922b9) main_mup_pane_t6_ParamLimits

0x2eb5,	// (0x000922b9) main_mup_pane_t6

0x0005,

0xf445,	// (0x0009e849) main_mup_pane_t_ParamLimits

0xf445,	// (0x0009e849) main_mup_pane_t

0x2ec7,	// (0x000922cb) mup_progress_pane_ParamLimits

0x2ec7,	// (0x000922cb) mup_progress_pane

0x2ed3,	// (0x000922d7) mup_visualizer_pane_ParamLimits

0x2ed3,	// (0x000922d7) mup_visualizer_pane

0x2f03,	// (0x00092307) mup_volume_pane_ParamLimits

0x2f03,	// (0x00092307) mup_volume_pane

0xec4c,	// (0x0009e050) mup_visualizer_pane_g1_ParamLimits

0xec4c,	// (0x0009e050) mup_visualizer_pane_g1

0xec4c,	// (0x0009e050) mup_visualizer_pane_g2_ParamLimits

0xec4c,	// (0x0009e050) mup_visualizer_pane_g2

0xeae3,	// (0x0009dee7) mup_visualizer_pane_g3_ParamLimits

0xeae3,	// (0x0009dee7) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0009e856) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0009e856) mup_visualizer_pane_g

0xe130,	// (0x0009d534) mup_volume_pane_g1

0xec99,	// (0x0009e09d) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0009e85d) mup_volume_pane_g

0xe130,	// (0x0009d534) mup_progress_pane_g1

0xeca2,	// (0x0009e0a6) mup_progress_pane_g2

0xecab,	// (0x0009e0af) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0009e862) mup_progress_pane_g

0xddad,	// (0x0009d1b1) bg_popup_window_pane_cp05

0xecb4,	// (0x0009e0b8) heading_pane_cp02_ParamLimits

0xecb4,	// (0x0009e0b8) heading_pane_cp02

0xecce,	// (0x0009e0d2) list_popup_blid_pane

0xecd6,	// (0x0009e0da) list_blid_sat_info_pane_ParamLimits

0xecd6,	// (0x0009e0da) list_blid_sat_info_pane

0xece9,	// (0x0009e0ed) list_blid_sat_info_pane_g1

0xecf1,	// (0x0009e0f5) list_blid_sat_info_pane_t1

0x3019,	// (0x0009241d) mup_equalizer_pane_ParamLimits

0x3019,	// (0x0009241d) mup_equalizer_pane

0x3032,	// (0x00092436) mup_equalizer_pane_cp1_ParamLimits

0x3032,	// (0x00092436) mup_equalizer_pane_cp1

0x304f,	// (0x00092453) mup_equalizer_pane_cp2_ParamLimits

0x304f,	// (0x00092453) mup_equalizer_pane_cp2

0x306c,	// (0x00092470) mup_equalizer_pane_cp3_ParamLimits

0x306c,	// (0x00092470) mup_equalizer_pane_cp3

0x308d,	// (0x00092491) mup_equalizer_pane_cp4_ParamLimits

0x308d,	// (0x00092491) mup_equalizer_pane_cp4

0x30ae,	// (0x000924b2) mup_equalizer_pane_cp5

0x30c2,	// (0x000924c6) mup_equalizer_pane_cp6

0x30d6,	// (0x000924da) mup_equalizer_pane_cp7

0xa354,	// (0x00099758) bg_popup_call_poc_act_pane_g9

0xa35c,	// (0x00099760) bg_popup_call_poc_act_pane_g10

0xa364,	// (0x00099768) bg_popup_call_poc_act_pane_g11

0x000a,

0xe008,	// (0x0009d40c) mup_scale_pane

0xe130,	// (0x0009d534) mup_scale_pane_g1

0xecff,	// (0x0009e103) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0009e87e) mup_scale_pane_g

0xed23,	// (0x0009e127) msg_data_pane

0xed2b,	// (0x0009e12f) scroll_pane_cp017

0x30fc,	// (0x00092500) bg_list_pane_cp04_ParamLimits

0x30fc,	// (0x00092500) bg_list_pane_cp04

0xed33,	// (0x0009e137) msg_data_pane_g1

0x311c,	// (0x00092520) msg_data_pane_g2

0x3126,	// (0x0009252a) msg_data_pane_g3

0x312e,	// (0x00092532) msg_data_pane_g4

0x3136,	// (0x0009253a) msg_data_pane_g5

0x313e,	// (0x00092542) msg_data_pane_g6

0x3146,	// (0x0009254a) msg_data_pane_g7

0x0006,

0xf489,	// (0x0009e88d) msg_data_pane_g

0x314e,	// (0x00092552) msg_text_pane_ParamLimits

0x314e,	// (0x00092552) msg_text_pane

0x3170,	// (0x00092574) qrid_highlight_pane_cp011_ParamLimits

0x3170,	// (0x00092574) qrid_highlight_pane_cp011

0xddad,	// (0x0009d1b1) msg_body_pane

0xddad,	// (0x0009d1b1) msg_header_pane

0xed44,	// (0x0009e148) input_focus_pane_cp07

0x3194,	// (0x00092598) msg_header_pane_t1_ParamLimits

0x3194,	// (0x00092598) msg_header_pane_t1

0x31a8,	// (0x000925ac) msg_header_pane_t2_ParamLimits

0x31a8,	// (0x000925ac) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0009e8a1) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0009e8a1) msg_header_pane_t

0xed59,	// (0x0009e15d) msg_body_pane_g1

0x31ba,	// (0x000925be) msg_body_pane_t1_ParamLimits

0x31ba,	// (0x000925be) msg_body_pane_t1

0x31eb,	// (0x000925ef) msg_body_pane_t2_ParamLimits

0x31eb,	// (0x000925ef) msg_body_pane_t2

0x31fd,	// (0x00092601) msg_body_pane_t3_ParamLimits

0x31fd,	// (0x00092601) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0009e8a6) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0009e8a6) msg_body_pane_t

0x3249,	// (0x0009264d) main_viewer_pane_g1_ParamLimits

0x3249,	// (0x0009264d) main_viewer_pane_g1

0x3257,	// (0x0009265b) main_viewer_pane_g2_ParamLimits

0x3257,	// (0x0009265b) main_viewer_pane_g2

0x3265,	// (0x00092669) main_viewer_pane_g3_ParamLimits

0x3265,	// (0x00092669) main_viewer_pane_g3

0x3274,	// (0x00092678) main_viewer_pane_g4_ParamLimits

0x3274,	// (0x00092678) main_viewer_pane_g4

0xa230,	// (0x00099634) main_viewer_pane_g5_ParamLimits

0xa230,	// (0x00099634) main_viewer_pane_g5

0xa230,	// (0x00099634) main_viewer_pane_g7_ParamLimits

0xa230,	// (0x00099634) main_viewer_pane_g7

0xe776,	// (0x0009db7a) main_viewer_pane_g8_ParamLimits

0xe776,	// (0x0009db7a) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0009e8b6) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0009e8b6) main_viewer_pane_g

0xed61,	// (0x0009e165) viewer_content_pane_ParamLimits

0xed61,	// (0x0009e165) viewer_content_pane

0x32b0,	// (0x000926b4) main_postcard_pane_g1_ParamLimits

0x32b0,	// (0x000926b4) main_postcard_pane_g1

0x32c6,	// (0x000926ca) main_postcard_pane_g2_ParamLimits

0x32c6,	// (0x000926ca) main_postcard_pane_g2

0x32dc,	// (0x000926e0) main_postcard_pane_g3_ParamLimits

0x32dc,	// (0x000926e0) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0009e8c7) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0009e8c7) main_postcard_pane_g

0x32f3,	// (0x000926f7) main_postcard_pane_g4

0xa569,	// (0x0009996d) smil_status_volume_pane_g2

0x3336,	// (0x0009273a) postcard_pane_ParamLimits

0x3336,	// (0x0009273a) postcard_pane

0xed6f,	// (0x0009e173) postcard_pane_g1_ParamLimits

0xed6f,	// (0x0009e173) postcard_pane_g1

0x3378,	// (0x0009277c) postcard_pane_g2_ParamLimits

0x3378,	// (0x0009277c) postcard_pane_g2

0x3384,	// (0x00092788) postcard_pane_g3_ParamLimits

0x3384,	// (0x00092788) postcard_pane_g3

0xed7d,	// (0x0009e181) postcard_pane_g4_ParamLimits

0xed7d,	// (0x0009e181) postcard_pane_g4

0x3390,	// (0x00092794) postcard_pane_g5_ParamLimits

0x3390,	// (0x00092794) postcard_pane_g5

0x33a5,	// (0x000927a9) postcard_pane_g6_ParamLimits

0x33a5,	// (0x000927a9) postcard_pane_g6

0xed6f,	// (0x0009e173) postcard_pane_g7_ParamLimits

0xed6f,	// (0x0009e173) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0009e8d4) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0009e8d4) postcard_pane_g

0x33b9,	// (0x000927bd) main_mp2_pane_g1_ParamLimits

0x33b9,	// (0x000927bd) main_mp2_pane_g1

0x33c5,	// (0x000927c9) main_mp2_pane_g2_ParamLimits

0x33c5,	// (0x000927c9) main_mp2_pane_g2

0x33d1,	// (0x000927d5) main_mp2_pane_g3_ParamLimits

0x33d1,	// (0x000927d5) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0009e8e3) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0009e8e3) main_mp2_pane_g

0x33dd,	// (0x000927e1) main_mp2_pane_t1_ParamLimits

0x33dd,	// (0x000927e1) main_mp2_pane_t1

0x33f2,	// (0x000927f6) main_mp2_pane_t2_ParamLimits

0x33f2,	// (0x000927f6) main_mp2_pane_t2

0x3404,	// (0x00092808) main_mp2_pane_t3_ParamLimits

0x3404,	// (0x00092808) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0009e8ea) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0009e8ea) main_mp2_pane_t

0xed8b,	// (0x0009e18f) pec_content_pane_ParamLimits

0xed8b,	// (0x0009e18f) pec_content_pane

0xe421,	// (0x0009d825) scroll_pane_cp015

0xed9d,	// (0x0009e1a1) pec_attribute_pane_ParamLimits

0xed9d,	// (0x0009e1a1) pec_attribute_pane

0x3416,	// (0x0009281a) pec_content_pane_g1_ParamLimits

0x3416,	// (0x0009281a) pec_content_pane_g1

0xedad,	// (0x0009e1b1) pec_content_pane_t1_ParamLimits

0xedad,	// (0x0009e1b1) pec_content_pane_t1

0xedbf,	// (0x0009e1c3) pec_content_pane_t2_ParamLimits

0xedbf,	// (0x0009e1c3) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0009e8f1) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0009e8f1) pec_content_pane_t

0x3422,	// (0x00092826) list_single_graphic_pane_cp01_ParamLimits

0x3422,	// (0x00092826) list_single_graphic_pane_cp01

0xe008,	// (0x0009d40c) bg_popup_sub_pane_cp04

0xedd1,	// (0x0009e1d5) popup_mup_playback_window_g1

0xeddd,	// (0x0009e1e1) popup_mup_playback_window_t1

0xedf2,	// (0x0009e1f6) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0009e8f6) popup_mup_playback_window_t

0xee29,	// (0x0009e22d) main_image_pane_g1_ParamLimits

0xee29,	// (0x0009e22d) main_image_pane_g1

0xee6c,	// (0x0009e270) scroll_pane_cp018_ParamLimits

0xee6c,	// (0x0009e270) scroll_pane_cp018

0xee84,	// (0x0009e288) scroll_pane_cp016_ParamLimits

0xee84,	// (0x0009e288) scroll_pane_cp016

0x34ef,	// (0x000928f3) smil2_image_pane_ParamLimits

0x34ef,	// (0x000928f3) smil2_image_pane

0x351f,	// (0x00092923) smil2_root_pane_ParamLimits

0x351f,	// (0x00092923) smil2_root_pane

0x3557,	// (0x0009295b) smil2_text_pane_ParamLimits

0x3557,	// (0x0009295b) smil2_text_pane

0xddad,	// (0x0009d1b1) bg_list_pane_cp06

0xeec0,	// (0x0009e2c4) grid_radio_pane

0xddad,	// (0x0009d1b1) bg_popup_window_pane_cp06

0xeec8,	// (0x0009e2cc) main_fmradio_pane_t1

0xe942,	// (0x0009dd46) heading_pane_cp04

0xeed6,	// (0x0009e2da) main_fmradio_pane_t2

0xa36c,	// (0x00099770) popup_cale_lunar_info_window_g1

0xeee4,	// (0x0009e2e8) main_fmradio_pane_t3

0xa374,	// (0x00099778) popup_cale_lunar_info_window_g2

0xeef2,	// (0x0009e2f6) main_fmradio_pane_t4

0x0001,

0xef00,	// (0x0009e304) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0009e9d1) popup_cale_lunar_info_window_g

0xf507,	// (0x0009e90b) main_fmradio_pane_t

0xef0e,	// (0x0009e312) wait_bar_pane_cp03

0xef16,	// (0x0009e31a) cell_fmradio_pane_ParamLimits

0xef16,	// (0x0009e31a) cell_fmradio_pane

0xed6f,	// (0x0009e173) cell_fmradio_pane_g1_ParamLimits

0xed6f,	// (0x0009e173) cell_fmradio_pane_g1

0xddad,	// (0x0009d1b1) grid_highlight_pane_cp011

0xef29,	// (0x0009e32d) poc_content_pane_ParamLimits

0xef29,	// (0x0009e32d) poc_content_pane

0xef3b,	// (0x0009e33f) scroll_pane_cp019

0x35d7,	// (0x000929db) popup_call_poc_act_window_ParamLimits

0x35d7,	// (0x000929db) popup_call_poc_act_window

0x35fb,	// (0x000929ff) popup_call_poc_inact_window_ParamLimits

0x35fb,	// (0x000929ff) popup_call_poc_inact_window

0xf5a4,	// (0x0009e9a8) bg_popup_call_poc_act_pane_g

0xa2e4,	// (0x000996e8) bg_popup_call_poc_inact_pane_g1

0xa2ec,	// (0x000996f0) bg_popup_call_poc_inact_pane_g2

0xef43,	// (0x0009e347) popup_call_poc_act_window_g2

0xa2f4,	// (0x000996f8) bg_popup_call_poc_inact_pane_g3

0xa2fc,	// (0x00099700) bg_popup_call_poc_inact_pane_g4

0xa304,	// (0x00099708) bg_popup_call_poc_inact_pane_g5

0xef4b,	// (0x0009e34f) popup_call_poc_act_window_t1_ParamLimits

0xef4b,	// (0x0009e34f) popup_call_poc_act_window_t1

0xef73,	// (0x0009e377) popup_call_poc_act_window_t2_ParamLimits

0xef73,	// (0x0009e377) popup_call_poc_act_window_t2

0xef9b,	// (0x0009e39f) popup_call_poc_act_window_t3_ParamLimits

0xef9b,	// (0x0009e39f) popup_call_poc_act_window_t3

0xefc3,	// (0x0009e3c7) popup_call_poc_act_window_t4_ParamLimits

0xefc3,	// (0x0009e3c7) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0009e916) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0009e916) popup_call_poc_act_window_t

0xa30c,	// (0x00099710) bg_popup_call_poc_inact_pane_g6

0xa314,	// (0x00099718) bg_popup_call_poc_inact_pane_g7

0xa31c,	// (0x00099720) bg_popup_call_poc_inact_pane_g8

0xefd5,	// (0x0009e3d9) popup_call_poc_inact_window_g2

0xa324,	// (0x00099728) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0009e995) bg_popup_call_poc_inact_pane_g

0xefdd,	// (0x0009e3e1) popup_call_poc_inact_window_t1_ParamLimits

0xefdd,	// (0x0009e3e1) popup_call_poc_inact_window_t1

0xeff2,	// (0x0009e3f6) popup_call_poc_inact_window_t2_ParamLimits

0xeff2,	// (0x0009e3f6) popup_call_poc_inact_window_t2

0xf007,	// (0x0009e40b) popup_call_poc_inact_window_t3_ParamLimits

0xf007,	// (0x0009e40b) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0009e91f) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0009e91f) popup_call_poc_inact_window_t

0xa4dc,	// (0x000998e0) context_pane_ParamLimits

0x4ae1,	// (0x00093ee5) signal_pane_ParamLimits

0xebae,	// (0x0009dfb2) main_call2_pane

0xa4ca,	// (0x000998ce) popup_phob_thumbnail2_window_ParamLimits

0xa4ca,	// (0x000998ce) popup_phob_thumbnail2_window

0xa218,	// (0x0009961c) aid_hotspot_pointer_arrow_pane

0xa220,	// (0x00099624) aid_hotspot_pointer_hand_pane

0x45e9,	// (0x000939ed) phob_pre_status_pane_g5

0x1654,	// (0x00090a58) cams_zoom_pane_ParamLimits

0x1663,	// (0x00090a67) image_vga_pane_ParamLimits

0x167d,	// (0x00090a81) main_camera_pane_g1_ParamLimits

0x168f,	// (0x00090a93) main_camera_pane_g2_ParamLimits

0x169f,	// (0x00090aa3) main_camera_pane_g3_ParamLimits

0x16af,	// (0x00090ab3) main_camera_pane_g4_ParamLimits

0x16bf,	// (0x00090ac3) main_camera_pane_g5_ParamLimits

0x16cf,	// (0x00090ad3) main_camera_pane_g6_ParamLimits

0x16e1,	// (0x00090ae5) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0009e61e) main_camera_pane_g_ParamLimits

0x16f1,	// (0x00090af5) main_camera_pane_t1_ParamLimits

0x1707,	// (0x00090b0b) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0009e62f) main_camera_pane_t_ParamLimits

0xe008,	// (0x0009d40c) bg_popup_preview_window_pane_cp01_ParamLimits

0xe008,	// (0x0009d40c) bg_popup_preview_window_pane_cp01

0xf01c,	// (0x0009e420) popup_phob_thumbnail2_window_g1_ParamLimits

0xf01c,	// (0x0009e420) popup_phob_thumbnail2_window_g1

0xddad,	// (0x0009d1b1) call2_cli_visual_pane

0x362f,	// (0x00092a33) popup_call2_audio_conf_window_ParamLimits

0x362f,	// (0x00092a33) popup_call2_audio_conf_window

0x364f,	// (0x00092a53) popup_call2_audio_first_window_ParamLimits

0x364f,	// (0x00092a53) popup_call2_audio_first_window

0x36e5,	// (0x00092ae9) popup_call2_audio_in_window_ParamLimits

0x36e5,	// (0x00092ae9) popup_call2_audio_in_window

0x372d,	// (0x00092b31) popup_call2_audio_out_window_ParamLimits

0x372d,	// (0x00092b31) popup_call2_audio_out_window

0x3797,	// (0x00092b9b) popup_call2_audio_second_window_ParamLimits

0x3797,	// (0x00092b9b) popup_call2_audio_second_window

0x37fd,	// (0x00092c01) popup_call2_audio_wait_window_ParamLimits

0x37fd,	// (0x00092c01) popup_call2_audio_wait_window

0xddad,	// (0x0009d1b1) bg_popup_call2_act_pane_cp03

0xdfea,	// (0x0009d3ee) list_conf_pane_cp

0xf028,	// (0x0009e42c) popup_call2_audio_conf_window_t1

0xe99f,	// (0x0009dda3) list_single_graphic_popup_conf2_pane_ParamLimits

0xe99f,	// (0x0009dda3) list_single_graphic_popup_conf2_pane

0xe9b2,	// (0x0009ddb6) list_highlight_pane_cp04

0xf036,	// (0x0009e43a) list_single_graphic_popup_conf2_pane_g1

0xe9c3,	// (0x0009ddc7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0009e926) list_single_graphic_popup_conf2_pane_g

0xf040,	// (0x0009e444) list_single_graphic_popup_conf2_pane_t1

0xf04e,	// (0x0009e452) bg_popup_call2_act_pane_cp01_ParamLimits

0xf04e,	// (0x0009e452) bg_popup_call2_act_pane_cp01

0x3837,	// (0x00092c3b) call_type_pane_cp05_ParamLimits

0x3837,	// (0x00092c3b) call_type_pane_cp05

0x388b,	// (0x00092c8f) popup_call2_audio_second_window_g1_ParamLimits

0x388b,	// (0x00092c8f) popup_call2_audio_second_window_g1

0x38df,	// (0x00092ce3) popup_call2_audio_second_window_g2_ParamLimits

0x38df,	// (0x00092ce3) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0009e92b) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0009e92b) popup_call2_audio_second_window_g

0x3944,	// (0x00092d48) popup_call2_audio_second_window_t1_ParamLimits

0x3944,	// (0x00092d48) popup_call2_audio_second_window_t1

0x39ff,	// (0x00092e03) popup_call2_audio_second_window_t2_ParamLimits

0x39ff,	// (0x00092e03) popup_call2_audio_second_window_t2

0x3a52,	// (0x00092e56) popup_call2_audio_second_window_t3_ParamLimits

0x3a52,	// (0x00092e56) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0009e932) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0009e932) popup_call2_audio_second_window_t

0xddad,	// (0x0009d1b1) bg_popup_call2_in_pane_cp02

0xddb7,	// (0x0009d1bb) call_type_pane_cp04

0xddbf,	// (0x0009d1c3) popup_call2_audio_wait_window_g1

0xddc7,	// (0x0009d1cb) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0009e50b) popup_call2_audio_wait_window_g

0xddcf,	// (0x0009d1d3) popup_call2_audio_wait_window_t3

0x3b45,	// (0x00092f49) bg_popup_call2_act_pane_ParamLimits

0x3b45,	// (0x00092f49) bg_popup_call2_act_pane

0x3c05,	// (0x00093009) call_type_pane_cp03_ParamLimits

0x3c05,	// (0x00093009) call_type_pane_cp03

0x3c69,	// (0x0009306d) popup_call2_audio_first_window_g1_ParamLimits

0x3c69,	// (0x0009306d) popup_call2_audio_first_window_g1

0x3cd9,	// (0x000930dd) popup_call2_audio_first_window_g2_ParamLimits

0x3cd9,	// (0x000930dd) popup_call2_audio_first_window_g2

0xec4c,	// (0x0009e050) popup_call2_audio_first_window_g3_ParamLimits

0xec4c,	// (0x0009e050) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0009e93b) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0009e93b) popup_call2_audio_first_window_g

0x3db7,	// (0x000931bb) popup_call2_audio_first_window_t1_ParamLimits

0x3db7,	// (0x000931bb) popup_call2_audio_first_window_t1

0x3eba,	// (0x000932be) popup_call2_audio_first_window_t4_ParamLimits

0x3eba,	// (0x000932be) popup_call2_audio_first_window_t4

0x3f9d,	// (0x000933a1) popup_call2_audio_first_window_t5_ParamLimits

0x3f9d,	// (0x000933a1) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0009e946) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0009e946) popup_call2_audio_first_window_t

0xe000,	// (0x0009d404) bg_popup_call2_act_pane_g1

0xa37c,	// (0x00099780) popup_cale_lunar_info_window_t1

0xa38a,	// (0x0009978e) popup_cale_lunar_info_window_t2

0xa398,	// (0x0009979c) popup_cale_lunar_info_window_t3

0xddad,	// (0x0009d1b1) bg_popup_call2_bubble_pane

0x409e,	// (0x000934a2) bg_popup_call2_in_pane_cp01_ParamLimits

0x409e,	// (0x000934a2) bg_popup_call2_in_pane_cp01

0xd871,	// (0x0009cc75) call_type_pane_cp02

0x40e6,	// (0x000934ea) popup_call2_audio_out_window_g1_ParamLimits

0x40e6,	// (0x000934ea) popup_call2_audio_out_window_g1

0x4112,	// (0x00093516) popup_call2_audio_out_window_g2_ParamLimits

0x4112,	// (0x00093516) popup_call2_audio_out_window_g2

0x413a,	// (0x0009353e) popup_call2_audio_out_window_g3_ParamLimits

0x413a,	// (0x0009353e) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0009e94f) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0009e94f) popup_call2_audio_out_window_g

0x4175,	// (0x00093579) popup_call2_audio_out_window_t1_ParamLimits

0x4175,	// (0x00093579) popup_call2_audio_out_window_t1

0x41d4,	// (0x000935d8) popup_call2_audio_out_window_t2_ParamLimits

0x41d4,	// (0x000935d8) popup_call2_audio_out_window_t2

0x4228,	// (0x0009362c) popup_call2_audio_out_window_t3_ParamLimits

0x4228,	// (0x0009362c) popup_call2_audio_out_window_t3

0x423e,	// (0x00093642) popup_call2_audio_out_window_t4_ParamLimits

0x423e,	// (0x00093642) popup_call2_audio_out_window_t4

0x4254,	// (0x00093658) popup_call2_audio_out_window_t5_ParamLimits

0x4254,	// (0x00093658) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0009e958) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0009e958) popup_call2_audio_out_window_t

0x42b8,	// (0x000936bc) bg_popup_call2_in_pane_ParamLimits

0x42b8,	// (0x000936bc) bg_popup_call2_in_pane

0x4314,	// (0x00093718) popup_call2_audio_in_window_g1_ParamLimits

0x4314,	// (0x00093718) popup_call2_audio_in_window_g1

0x434c,	// (0x00093750) popup_call2_audio_in_window_g2_ParamLimits

0x434c,	// (0x00093750) popup_call2_audio_in_window_g2

0x4384,	// (0x00093788) popup_call2_audio_in_window_g3_ParamLimits

0x4384,	// (0x00093788) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0009e965) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0009e965) popup_call2_audio_in_window_g

0x43dc,	// (0x000937e0) popup_call2_audio_in_window_t1_ParamLimits

0x43dc,	// (0x000937e0) popup_call2_audio_in_window_t1

0x445c,	// (0x00093860) popup_call2_audio_in_window_t2_ParamLimits

0x445c,	// (0x00093860) popup_call2_audio_in_window_t2

0xa24e,	// (0x00099652) popup_call2_audio_in_window_t3_ParamLimits

0xa24e,	// (0x00099652) popup_call2_audio_in_window_t3

0xa268,	// (0x0009966c) popup_call2_audio_in_window_t4_ParamLimits

0xa268,	// (0x0009966c) popup_call2_audio_in_window_t4

0xa27a,	// (0x0009967e) popup_call2_audio_in_window_t5_ParamLimits

0xa27a,	// (0x0009967e) popup_call2_audio_in_window_t5

0xa28f,	// (0x00099693) popup_call2_audio_in_window_t6_ParamLimits

0xa28f,	// (0x00099693) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0009e96e) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0009e96e) popup_call2_audio_in_window_t

0xe000,	// (0x0009d404) bg_popup_call2_in_pane_g1

0xa3a6,	// (0x000997aa) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0009e9d6) popup_cale_lunar_info_window_t

0xe008,	// (0x0009d40c) bg_popup_call2_rect_pane_ParamLimits

0xe008,	// (0x0009d40c) bg_popup_call2_rect_pane

0xddad,	// (0x0009d1b1) call2_cli_visual_graphic_pane

0xddad,	// (0x0009d1b1) call2_cli_visual_text_pane

0xa57c,	// (0x00099980) smil_status_volume_pane_g3

0x0002,

0xe130,	// (0x0009d534) call2_cli_visual_graphic_pane_g1

0xe130,	// (0x0009d534) call2_cli_visual_graphic_pane_g2

0xe130,	// (0x0009d534) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0009e97b) call2_cli_visual_graphic_pane_g

0xa2a4,	// (0x000996a8) bg_popup_call2_rect_pane_g1

0xe1bc,	// (0x0009d5c0) bg_popup_call2_rect_pane_g2

0xa2ac,	// (0x000996b0) bg_popup_call2_rect_pane_g3

0xa2b4,	// (0x000996b8) bg_popup_call2_rect_pane_g4

0xa2bc,	// (0x000996c0) bg_popup_call2_rect_pane_g5

0xa2c4,	// (0x000996c8) bg_popup_call2_rect_pane_g6

0xa2cc,	// (0x000996d0) bg_popup_call2_rect_pane_g7

0xa2d4,	// (0x000996d8) bg_popup_call2_rect_pane_g8

0xa2dc,	// (0x000996e0) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0009e982) bg_popup_call2_rect_pane_g

0xa2e4,	// (0x000996e8) bg_popup_call2_bubble_pane_g1

0xa2ec,	// (0x000996f0) bg_popup_call2_bubble_pane_g2

0xa2f4,	// (0x000996f8) bg_popup_call2_bubble_pane_g3

0xa2fc,	// (0x00099700) bg_popup_call2_bubble_pane_g4

0xa304,	// (0x00099708) bg_popup_call2_bubble_pane_g5

0xa30c,	// (0x00099710) bg_popup_call2_bubble_pane_g6

0xa314,	// (0x00099718) bg_popup_call2_bubble_pane_g7

0xa31c,	// (0x00099720) bg_popup_call2_bubble_pane_g8

0xa324,	// (0x00099728) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0009e995) bg_popup_call2_bubble_pane_g

0x11a3,	// (0x000905a7) aid_cale_week_size_cell_pane

0x171d,	// (0x00090b21) aid_cams_cif_uncrop_pane_ParamLimits

0x171d,	// (0x00090b21) aid_cams_cif_uncrop_pane

0x18d2,	// (0x00090cd6) aid_cams_size_cell_ParamLimits

0x18d2,	// (0x00090cd6) aid_cams_size_cell

0x18e6,	// (0x00090cea) grid_cams_pane_ParamLimits

0x1900,	// (0x00090d04) linegrid_cams_pane_ParamLimits

0x1afd,	// (0x00090f01) call_video_pane_t1

0x1b1b,	// (0x00090f1f) call_video_pane_t2

0x0001,

0xf27e,	// (0x0009e682) call_video_pane_t

0x1f47,	// (0x0009134b) aid_cale_month_size_cell_pane_ParamLimits

0x1f47,	// (0x0009134b) aid_cale_month_size_cell_pane

0xf61b,	// (0x0009ea1f) smil_status_volume_pane_g

0xa589,	// (0x0009998d) volume_smil_pane_ParamLimits

0xa04b,	// (0x0009944f) aid_popup2_width_pane

0x1105,	// (0x00090509) cell_qdial_pane_g4_ParamLimits

0x1105,	// (0x00090509) cell_qdial_pane_g4

0x2b41,	// (0x00091f45) aid_blid_cardinal_pane_ParamLimits

0x2b4d,	// (0x00091f51) aid_blid_destination_pane_ParamLimits

0x2b4d,	// (0x00091f51) aid_blid_destination_pane

0xe008,	// (0x0009d40c) bg_popup_call_poc_act_pane_ParamLimits

0xe008,	// (0x0009d40c) bg_popup_call_poc_act_pane

0xe008,	// (0x0009d40c) bg_popup_call_poc_inact_pane_ParamLimits

0xe008,	// (0x0009d40c) bg_popup_call_poc_inact_pane

0xa32c,	// (0x00099730) bg_popup_call_poc_act_pane_g1

0xa334,	// (0x00099738) bg_popup_call_poc_act_pane_g2

0xa33c,	// (0x00099740) bg_popup_call_poc_act_pane_g3

0xa2fc,	// (0x00099700) bg_popup_call_poc_act_pane_g4

0xa304,	// (0x00099708) bg_popup_call_poc_act_pane_g5

0xa344,	// (0x00099748) bg_popup_call_poc_act_pane_g6

0xa314,	// (0x00099718) bg_popup_call_poc_act_pane_g7

0xa34c,	// (0x00099750) bg_popup_call_poc_act_pane_g8

0xddad,	// (0x0009d1b1) main_usb_pane

0xa4a5,	// (0x000998a9) popup_cale_lunar_info_window

0x1df3,	// (0x000911f7) im_reading_pane_t1_ParamLimits

0xe379,	// (0x0009d77d) list_im_pane_ParamLimits

0xe38a,	// (0x0009d78e) scroll_pane_cp07_ParamLimits

0xddad,	// (0x0009d1b1) grid_highlight_pane_cp012

0xe008,	// (0x0009d40c) mup_scale_pane_ParamLimits

0xed6f,	// (0x0009e173) main_usb_pane_g1_ParamLimits

0xed6f,	// (0x0009e173) main_usb_pane_g1

0x44fe,	// (0x00093902) main_usb_pane_g2_ParamLimits

0x44fe,	// (0x00093902) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0009e9bf) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0009e9bf) main_usb_pane_g

0x4514,	// (0x00093918) main_usb_pane_t1_ParamLimits

0x4514,	// (0x00093918) main_usb_pane_t1

0x4526,	// (0x0009392a) main_usb_pane_t2_ParamLimits

0x4526,	// (0x0009392a) main_usb_pane_t2

0x4538,	// (0x0009393c) main_usb_pane_t3_ParamLimits

0x4538,	// (0x0009393c) main_usb_pane_t3

0x454a,	// (0x0009394e) main_usb_pane_t4_ParamLimits

0x454a,	// (0x0009394e) main_usb_pane_t4

0x455c,	// (0x00093960) main_usb_pane_t5_ParamLimits

0x455c,	// (0x00093960) main_usb_pane_t5

0x456e,	// (0x00093972) main_usb_pane_t6_ParamLimits

0x456e,	// (0x00093972) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0009e9c4) main_usb_pane_t_ParamLimits

0x2af0,	// (0x00091ef4) aid_text_placing

0x2af9,	// (0x00091efd) main_location2_pane_t1_ParamLimits

0x2b0b,	// (0x00091f0f) main_location2_pane_t2_ParamLimits

0x2b1d,	// (0x00091f21) main_location2_pane_t3_ParamLimits

0x2b2f,	// (0x00091f33) main_location2_pane_t4_ParamLimits

0x2b2f,	// (0x00091f33) main_location2_pane_t4

0xf3df,	// (0x0009e7e3) main_location2_pane_t_ParamLimits

0xe044,	// (0x0009d448) find_pinb_pane_g2_ParamLimits

0xe044,	// (0x0009d448) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0009e531) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0009e531) find_pinb_pane_g

0xe050,	// (0x0009d454) find_pinb_pane_t1_ParamLimits

0xe062,	// (0x0009d466) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0009e536) find_pinb_pane_t_ParamLimits

0xddad,	// (0x0009d1b1) main_call3_pane

0x22ab,	// (0x000916af) cale_month_day_heading_pane_t1_ParamLimits

0x2309,	// (0x0009170d) cale_month_day_heading_pane_t2_ParamLimits

0x236e,	// (0x00091772) cale_month_day_heading_pane_t3_ParamLimits

0x23d3,	// (0x000917d7) cale_month_day_heading_pane_t4_ParamLimits

0x2438,	// (0x0009183c) cale_month_day_heading_pane_t5_ParamLimits

0x24ad,	// (0x000918b1) cale_month_day_heading_pane_t6_ParamLimits

0x2522,	// (0x00091926) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0009e6ba) cale_month_day_heading_pane_t_ParamLimits

0xe5ca,	// (0x0009d9ce) smil_status_volume_pane

0x3354,	// (0x00092758) postcard_address_pane_ParamLimits

0x3354,	// (0x00092758) postcard_address_pane

0x3366,	// (0x0009276a) postcard_message_pane_ParamLimits

0x3366,	// (0x0009276a) postcard_message_pane

0x44dc,	// (0x000938e0) call2_cli_visual_pane_t1_ParamLimits

0x44dc,	// (0x000938e0) call2_cli_visual_pane_t1

0x4d0e,	// (0x00094112) postcard_message_pane_t1_ParamLimits

0x4d0e,	// (0x00094112) postcard_message_pane_t1

0x4cf7,	// (0x000940fb) postcard_address_pane_t1_ParamLimits

0x4cf7,	// (0x000940fb) postcard_address_pane_t1

0x4ce3,	// (0x000940e7) popup_call3_audio_in_window_ParamLimits

0x4ce3,	// (0x000940e7) popup_call3_audio_in_window

0x4b6e,	// (0x00093f72) bg_popup_call3_in_pane_ParamLimits

0x4b6e,	// (0x00093f72) bg_popup_call3_in_pane

0x4be4,	// (0x00093fe8) popup_call3_audio_in_window_g1_ParamLimits

0x4be4,	// (0x00093fe8) popup_call3_audio_in_window_g1

0x4c04,	// (0x00094008) popup_call3_audio_in_window_g2_ParamLimits

0x4c04,	// (0x00094008) popup_call3_audio_in_window_g2

0x4c24,	// (0x00094028) popup_call3_audio_in_window_g3_ParamLimits

0x4c24,	// (0x00094028) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0009ea26) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0009ea26) popup_call3_audio_in_window_g

0x4c55,	// (0x00094059) popup_call3_audio_in_window_t1_ParamLimits

0x4c55,	// (0x00094059) popup_call3_audio_in_window_t1

0x4c93,	// (0x00094097) popup_call3_audio_in_window_t2_ParamLimits

0x4c93,	// (0x00094097) popup_call3_audio_in_window_t2

0x4cd1,	// (0x000940d5) popup_call3_audio_in_window_t3_ParamLimits

0x4cd1,	// (0x000940d5) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0009ea2f) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0009ea2f) popup_call3_audio_in_window_t

0xebae,	// (0x0009dfb2) bg_popup_call3_rect_pane

0xa2a4,	// (0x000996a8) bg_popup_call3_rect_pane_g1

0xe1bc,	// (0x0009d5c0) bg_popup_call3_rect_pane_g2

0xa2ac,	// (0x000996b0) bg_popup_call3_rect_pane_g3

0xa2b4,	// (0x000996b8) bg_popup_call3_rect_pane_g4

0xa2bc,	// (0x000996c0) bg_popup_call3_rect_pane_g5

0xa2c4,	// (0x000996c8) bg_popup_call3_rect_pane_g6

0xa2cc,	// (0x000996d0) bg_popup_call3_rect_pane_g7

0x2f19,	// (0x0009231d) mup_visualizer_osc_pane

0xec91,	// (0x0009e095) mup_visualizer_spec_pane

0x4b9e,	// (0x00093fa2) call3_video_qcif_pane_ParamLimits

0x4b9e,	// (0x00093fa2) call3_video_qcif_pane

0x4bb1,	// (0x00093fb5) call3_video_qcif_uncrop_pane_ParamLimits

0x4bb1,	// (0x00093fb5) call3_video_qcif_uncrop_pane

0x4bbf,	// (0x00093fc3) call3_video_subqcif_pane_ParamLimits

0x4bbf,	// (0x00093fc3) call3_video_subqcif_pane

0x4bd3,	// (0x00093fd7) call3_video_subqcif_uncrop_pane_ParamLimits

0x4bd3,	// (0x00093fd7) call3_video_subqcif_uncrop_pane

0x4c44,	// (0x00094048) popup_call3_audio_in_window_g4_ParamLimits

0x4c44,	// (0x00094048) popup_call3_audio_in_window_g4

0x4b5d,	// (0x00093f61) mup_spec_half_pane

0x4b66,	// (0x00093f6a) mup_spec_half_pane_cp

0xa53c,	// (0x00099940) mup_osc_middle_pane

0xa545,	// (0x00099949) mup_visualizer_osc_pane_g1

0x4b3d,	// (0x00093f41) mup_spec_bar_pane_ParamLimits

0x4b3d,	// (0x00093f41) mup_spec_bar_pane

0xa529,	// (0x0009992d) mup_spec_bar_pane_g1

0xa533,	// (0x00099937) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0009ea1a) mup_spec_bar_pane_g

0x11a3,	// (0x000905a7) aid_cale_week_size_cell_pane_ParamLimits

0x11b6,	// (0x000905ba) bg_cale_heading_pane_ParamLimits

0xe1f0,	// (0x0009d5f4) bg_cale_pane_cp01_ParamLimits

0x11ca,	// (0x000905ce) cale_week_corner_pane_ParamLimits

0x11e0,	// (0x000905e4) cale_week_day_heading_pane_ParamLimits

0x11f4,	// (0x000905f8) cale_week_scroll_pane_g1_ParamLimits

0x1205,	// (0x00090609) cale_week_scroll_pane_g2_ParamLimits

0x1216,	// (0x0009061a) cale_week_scroll_pane_g3_ParamLimits

0x1227,	// (0x0009062b) cale_week_scroll_pane_g4_ParamLimits

0x1238,	// (0x0009063c) cale_week_scroll_pane_g5_ParamLimits

0x124b,	// (0x0009064f) cale_week_scroll_pane_g6_ParamLimits

0x125e,	// (0x00090662) cale_week_scroll_pane_g7_ParamLimits

0x1271,	// (0x00090675) cale_week_scroll_pane_g8_ParamLimits

0x1284,	// (0x00090688) cale_week_scroll_pane_g9_ParamLimits

0x1295,	// (0x00090699) cale_week_scroll_pane_g10_ParamLimits

0x12a6,	// (0x000906aa) cale_week_scroll_pane_g11_ParamLimits

0x12b7,	// (0x000906bb) cale_week_scroll_pane_g12_ParamLimits

0x12c8,	// (0x000906cc) cale_week_scroll_pane_g13_ParamLimits

0x12d9,	// (0x000906dd) cale_week_scroll_pane_g14_ParamLimits

0x12ea,	// (0x000906ee) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0009e5c2) cale_week_scroll_pane_g_ParamLimits

0x12fb,	// (0x000906ff) cale_week_time_pane_ParamLimits

0x130e,	// (0x00090712) grid_cale_week_pane_ParamLimits

0xe209,	// (0x0009d60d) listscroll_cale_week_pane_t1

0x1323,	// (0x00090727) scroll_pane_cp08_ParamLimits

0x1f88,	// (0x0009138c) cale_month_corner_pane_ParamLimits

0xe5a0,	// (0x0009d9a4) cale_month_pane_t1

0x226a,	// (0x0009166e) cale_month_week_pane_ParamLimits

0x293c,	// (0x00091d40) popup_call_status_window_g1_ParamLimits

0x2950,	// (0x00091d54) popup_call_status_window_g2_ParamLimits

0x2964,	// (0x00091d68) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0009e76a) popup_call_status_window_g_ParamLimits

0xe932,	// (0x0009dd36) aid_call2_pane

0x3186,	// (0x0009258a) msg_header_pane_g1

0x3354,	// (0x00092758) postcard_address2_pane_ParamLimits

0x3354,	// (0x00092758) postcard_address2_pane

0x3366,	// (0x0009276a) postcard_message2_pane_ParamLimits

0x3366,	// (0x0009276a) postcard_message2_pane

0x4aef,	// (0x00093ef3) message2_row_pane_ParamLimits

0x4aef,	// (0x00093ef3) message2_row_pane

0x4b0b,	// (0x00093f0f) address2_row_pane_ParamLimits

0x4b0b,	// (0x00093f0f) address2_row_pane

0xa4f7,	// (0x000998fb) postcard_message2_row_pane_g1

0xa4ff,	// (0x00099903) postcard_message2_row_pane_t1

0xa4f7,	// (0x000998fb) address2_row_pane_g1

0xa4ff,	// (0x00099903) address2_row_pane_t1

0x15bb,	// (0x000909bf) aid_size_cell_vorec

0xddad,	// (0x0009d1b1) main_rss_pane

0x4b1e,	// (0x00093f22) rss_list_single_pane_ParamLimits

0x4b1e,	// (0x00093f22) rss_list_single_pane

0xa50d,	// (0x00099911) rss_list_single_pane_t1

0xa51b,	// (0x0009991f) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0009ea15) rss_list_single_pane_t

0xddad,	// (0x0009d1b1) main_camera2_pane

0xddad,	// (0x0009d1b1) main_video2_pane

0x4d87,	// (0x0009418b) cams_zoom_pane_cp2_ParamLimits

0x4d87,	// (0x0009418b) cams_zoom_pane_cp2

0x4da7,	// (0x000941ab) image2_vga_pane_ParamLimits

0x4da7,	// (0x000941ab) image2_vga_pane

0x4df8,	// (0x000941fc) main_camera2_pane_g1_ParamLimits

0x4df8,	// (0x000941fc) main_camera2_pane_g1

0x4e18,	// (0x0009421c) main_camera2_pane_g2_ParamLimits

0x4e18,	// (0x0009421c) main_camera2_pane_g2

0x4e38,	// (0x0009423c) main_camera2_pane_g3_ParamLimits

0x4e38,	// (0x0009423c) main_camera2_pane_g3

0x4e58,	// (0x0009425c) main_camera2_pane_g4_ParamLimits

0x4e58,	// (0x0009425c) main_camera2_pane_g4

0x4e78,	// (0x0009427c) main_camera2_pane_g5_ParamLimits

0x4e78,	// (0x0009427c) main_camera2_pane_g5

0x4e98,	// (0x0009429c) main_camera2_pane_g6_ParamLimits

0x4e98,	// (0x0009429c) main_camera2_pane_g6

0x4eb8,	// (0x000942bc) main_camera2_pane_g7_ParamLimits

0x4eb8,	// (0x000942bc) main_camera2_pane_g7

0x4ed8,	// (0x000942dc) main_camera2_pane_g8_ParamLimits

0x4ed8,	// (0x000942dc) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0009ea36) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0009ea36) main_camera2_pane_g

0x4f18,	// (0x0009431c) main_camera2_pane_t1_ParamLimits

0x4f18,	// (0x0009431c) main_camera2_pane_t1

0x4f4d,	// (0x00094351) main_camera2_pane_t2_ParamLimits

0x4f4d,	// (0x00094351) main_camera2_pane_t2

0x4f73,	// (0x00094377) main_camera2_pane_t3_ParamLimits

0x4f73,	// (0x00094377) main_camera2_pane_t3

0x4fd1,	// (0x000943d5) main_camera2_pane_t4_ParamLimits

0x4fd1,	// (0x000943d5) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0009ea49) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0009ea49) main_camera2_pane_t

0x5063,	// (0x00094467) cams_zoom_pane_cp4_ParamLimits

0x5063,	// (0x00094467) cams_zoom_pane_cp4

0x5079,	// (0x0009447d) image2_cif_pane_ParamLimits

0x5079,	// (0x0009447d) image2_cif_pane

0x50a4,	// (0x000944a8) image2_subqcif_pane_ParamLimits

0x50a4,	// (0x000944a8) image2_subqcif_pane

0x50be,	// (0x000944c2) main_video2_pane_g1_ParamLimits

0x50be,	// (0x000944c2) main_video2_pane_g1

0x50d8,	// (0x000944dc) main_video2_pane_g2_ParamLimits

0x50d8,	// (0x000944dc) main_video2_pane_g2

0x50ee,	// (0x000944f2) main_video2_pane_g3_ParamLimits

0x50ee,	// (0x000944f2) main_video2_pane_g3

0x5104,	// (0x00094508) main_video2_pane_g4_ParamLimits

0x5104,	// (0x00094508) main_video2_pane_g4

0x511a,	// (0x0009451e) main_video2_pane_g5_ParamLimits

0x511a,	// (0x0009451e) main_video2_pane_g5

0x5130,	// (0x00094534) main_video2_pane_g6_ParamLimits

0x5130,	// (0x00094534) main_video2_pane_g6

0x0005,

0xf654,	// (0x0009ea58) main_video2_pane_g_ParamLimits

0xf654,	// (0x0009ea58) main_video2_pane_g

0x514a,	// (0x0009454e) main_video2_pane_t1_ParamLimits

0x514a,	// (0x0009454e) main_video2_pane_t1

0x516e,	// (0x00094572) main_video2_pane_t2_ParamLimits

0x516e,	// (0x00094572) main_video2_pane_t2

0x51bc,	// (0x000945c0) main_video2_pane_t3_ParamLimits

0x51bc,	// (0x000945c0) main_video2_pane_t3

0x0002,

0xf661,	// (0x0009ea65) main_video2_pane_t_ParamLimits

0xf661,	// (0x0009ea65) main_video2_pane_t

0x4629,	// (0x00093a2d) call_muted_g2

0x0001,

0xf603,	// (0x0009ea07) call_muted_g

0xddad,	// (0x0009d1b1) main_mup2_pane

0x5200,	// (0x00094604) main_mup2_pane_g1_ParamLimits

0x5200,	// (0x00094604) main_mup2_pane_g1

0x520c,	// (0x00094610) main_mup2_pane_g2_ParamLimits

0x520c,	// (0x00094610) main_mup2_pane_g2

0xa6ad,	// (0x00099ab1) main_mup_pane_g13_cp1

0xa6b5,	// (0x00099ab9) mup_volume_pane_cp1

0x5228,	// (0x0009462c) main_mup2_pane_g4_ParamLimits

0x5228,	// (0x0009462c) main_mup2_pane_g4

0x523a,	// (0x0009463e) main_mup2_pane_g5_ParamLimits

0x523a,	// (0x0009463e) main_mup2_pane_g5

0x524c,	// (0x00094650) main_mup2_pane_g6_ParamLimits

0x524c,	// (0x00094650) main_mup2_pane_g6

0x525e,	// (0x00094662) main_mup2_pane_g7_ParamLimits

0x525e,	// (0x00094662) main_mup2_pane_g7

0x0006,

0xf668,	// (0x0009ea6c) main_mup2_pane_g_ParamLimits

0xf668,	// (0x0009ea6c) main_mup2_pane_g

0x5276,	// (0x0009467a) main_mup2_pane_t1_ParamLimits

0x5276,	// (0x0009467a) main_mup2_pane_t1

0x528c,	// (0x00094690) main_mup2_pane_t2_ParamLimits

0x528c,	// (0x00094690) main_mup2_pane_t2

0x52a2,	// (0x000946a6) main_mup2_pane_t3_ParamLimits

0x52a2,	// (0x000946a6) main_mup2_pane_t3

0x52b8,	// (0x000946bc) main_mup2_pane_t4_ParamLimits

0x52b8,	// (0x000946bc) main_mup2_pane_t4

0x52d0,	// (0x000946d4) main_mup2_pane_t5_ParamLimits

0x52d0,	// (0x000946d4) main_mup2_pane_t5

0x52e8,	// (0x000946ec) main_mup2_pane_t6_ParamLimits

0x52e8,	// (0x000946ec) main_mup2_pane_t6

0x0005,

0xf677,	// (0x0009ea7b) main_mup2_pane_t_ParamLimits

0xf677,	// (0x0009ea7b) main_mup2_pane_t

0x5318,	// (0x0009471c) mup2_visualizer_pane_ParamLimits

0x5318,	// (0x0009471c) mup2_visualizer_pane

0x5346,	// (0x0009474a) mup_progress_pane_cp_ParamLimits

0x5346,	// (0x0009474a) mup_progress_pane_cp

0xa68f,	// (0x00099a93) mup_volume_pane_cp_ParamLimits

0xa68f,	// (0x00099a93) mup_volume_pane_cp

0x535a,	// (0x0009475e) mup2_visualizer_pane_g1_ParamLimits

0x535a,	// (0x0009475e) mup2_visualizer_pane_g1

0xa5ce,	// (0x000999d2) mup2_visualizer_pane_g2_ParamLimits

0xa5ce,	// (0x000999d2) mup2_visualizer_pane_g2

0x5371,	// (0x00094775) mup2_visualizer_pane_g3_ParamLimits

0x5371,	// (0x00094775) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x0009ea88) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x0009ea88) mup2_visualizer_pane_g

0xeeb8,	// (0x0009e2bc) aid_size_cell_fmradio

0x47db,	// (0x00093bdf) aid_height_parent_landcape

0xe408,	// (0x0009d80c) wml_content_pane_cp

0xe410,	// (0x0009d814) wml_tabs_pane

0xe419,	// (0x0009d81d) popup_wml_miniature_window

0xe421,	// (0x0009d825) scroll_pane_cp021

0xe435,	// (0x0009d839) wml_content_pane_comp8

0xddad,	// (0x0009d1b1) bg_popup_sub_pane_cp05

0xa5ec,	// (0x000999f0) popup_wml_miniature_window_g1

0xa5f4,	// (0x000999f8) wml_miniature_view_pane

0x537d,	// (0x00094781) aid_size_wml_view

0x5385,	// (0x00094789) wml_miniature_view_pane_g1

0x538e,	// (0x00094792) wml_miniature_view_pane_g2

0x5397,	// (0x0009479b) wml_miniature_view_pane_g3

0x539f,	// (0x000947a3) wml_miniature_view_pane_g4

0x53a7,	// (0x000947ab) wml_miniature_view_pane_g5

0x53af,	// (0x000947b3) wml_miniature_view_pane_g6

0x53b7,	// (0x000947bb) wml_miniature_view_pane_g7

0x53bf,	// (0x000947c3) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0009ea8f) wml_miniature_view_pane_g

0xa5fc,	// (0x00099a00) background_graphic_ParamLimits

0xa5fc,	// (0x00099a00) background_graphic

0xa608,	// (0x00099a0c) wml_tabs_2_pane

0xa611,	// (0x00099a15) wml_tabs_3_pane_ParamLimits

0xa611,	// (0x00099a15) wml_tabs_3_pane

0xa623,	// (0x00099a27) wml_tabs_4_pane_ParamLimits

0xa623,	// (0x00099a27) wml_tabs_4_pane

0xa639,	// (0x00099a3d) wml_tabs_5_pane_ParamLimits

0xa639,	// (0x00099a3d) wml_tabs_5_pane

0xa653,	// (0x00099a57) wml_tabs_pane_g2_ParamLimits

0xa653,	// (0x00099a57) wml_tabs_pane_g2

0xa667,	// (0x00099a6b) wml_tabs_pane_g3_ParamLimits

0xa667,	// (0x00099a6b) wml_tabs_pane_g3

0x53c7,	// (0x000947cb) wml_tabs_2_active_pane_ParamLimits

0x53c7,	// (0x000947cb) wml_tabs_2_active_pane

0x53db,	// (0x000947df) wml_tabs_2_passive_pane_ParamLimits

0x53db,	// (0x000947df) wml_tabs_2_passive_pane

0x53ef,	// (0x000947f3) wml_tabs_3_active_pane_cp_ParamLimits

0x53ef,	// (0x000947f3) wml_tabs_3_active_pane_cp

0x5404,	// (0x00094808) wml_tabs_3_passive_pane_ParamLimits

0x5404,	// (0x00094808) wml_tabs_3_passive_pane

0x5417,	// (0x0009481b) wml_tabs_3_passive_pane_cp_ParamLimits

0x5417,	// (0x0009481b) wml_tabs_3_passive_pane_cp

0x542e,	// (0x00094832) tabs_4_active_pane

0x5436,	// (0x0009483a) tabs_4_passive_pane

0x5440,	// (0x00094844) tabs_4_passive_pane_cp

0x5448,	// (0x0009484c) tabs_4_passive_pane_cp2

0x44f6,	// (0x000938fa) aid_height_text

0x2eef,	// (0x000922f3) mup_volume_cont_pane_ParamLimits

0x2eef,	// (0x000922f3) mup_volume_cont_pane

0x0d86,	// (0x0009018a) aid_size_cell_pinb

0x0d90,	// (0x00090194) aid_size_list_pinb

0x5332,	// (0x00094736) mup2_volume_cont_pane_ParamLimits

0x5332,	// (0x00094736) mup2_volume_cont_pane

0xa67b,	// (0x00099a7f) mup2_volume_cont_pane_g1_ParamLimits

0xa67b,	// (0x00099a7f) mup2_volume_cont_pane_g1

0x0a68,	// (0x0008fe6c) aid_size_cell_touch_ParamLimits

0x0a68,	// (0x0008fe6c) aid_size_cell_touch

0x0c76,	// (0x0009007a) touch_pane_ParamLimits

0x0c76,	// (0x0009007a) touch_pane

0xa0bf,	// (0x000994c3) main_rss2_pane

0xa6bd,	// (0x00099ac1) listscroll_rss2_pane

0xa6c6,	// (0x00099aca) rss2_navigation_pane

0xa6ce,	// (0x00099ad2) list_rss2_pane

0xea65,	// (0x0009de69) scroll_pane_cp22

0xa6d6,	// (0x00099ada) rss2_navigation_pane_g1

0xa6df,	// (0x00099ae3) rss2_navigation_pane_g2

0xa6e7,	// (0x00099aeb) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0009eaa0) rss2_navigation_pane_g

0xa6ef,	// (0x00099af3) rss2_navigation_pane_t1

0x5452,	// (0x00094856) rss2_list_single_pane_ParamLimits

0x5452,	// (0x00094856) rss2_list_single_pane

0xa6fd,	// (0x00099b01) rss2_list_single_pane_t2

0xa70b,	// (0x00099b0f) rss2_list_single_pane_t3_ParamLimits

0xa70b,	// (0x00099b0f) rss2_list_single_pane_t3

0xa728,	// (0x00099b2c) rss2_list_single_pane_t4

0x2746,	// (0x00091b4a) smil_status_pane_g1

0xa0b1,	// (0x000994b5) main_image2_pane_ParamLimits

0xa0b1,	// (0x000994b5) main_image2_pane

0x4ef8,	// (0x000942fc) main_camera2_pane_g9_ParamLimits

0x4ef8,	// (0x000942fc) main_camera2_pane_g9

0x5026,	// (0x0009442a) main_camera2_pane_t5_ParamLimits

0x5026,	// (0x0009442a) main_camera2_pane_t5

0xa59e,	// (0x000999a2) main_camera2_pane_t6_ParamLimits

0xa59e,	// (0x000999a2) main_camera2_pane_t6

0x5467,	// (0x0009486b) main_image2_pane_g1_ParamLimits

0x5467,	// (0x0009486b) main_image2_pane_g1

0x358d,	// (0x00092991) smil2_video_pane_ParamLimits

0x358d,	// (0x00092991) smil2_video_pane

0xa067,	// (0x0009946b) aid_zoom_text_primary_cp

0xa0a7,	// (0x000994ab) popup_preview_fixed_window

0xe371,	// (0x0009d775) im_reading_pane_g1

0x4d6f,	// (0x00094173) cams2_bc_adjust_pane_cp_ParamLimits

0x4d6f,	// (0x00094173) cams2_bc_adjust_pane_cp

0x5055,	// (0x00094459) cams2_bc_adjust_pane_ParamLimits

0x5055,	// (0x00094459) cams2_bc_adjust_pane

0xa736,	// (0x00099b3a) cams2_bc_adjust_pane_g1

0xa73e,	// (0x00099b42) cams2_slider_pane

0xa747,	// (0x00099b4b) cams2_slider_pane_g1

0xa750,	// (0x00099b54) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0009eaa7) cams2_slider_pane_g

0x0e7e,	// (0x00090282) calc_display_pane_ParamLimits

0x0ea6,	// (0x000902aa) calc_paper_pane_ParamLimits

0x0ec9,	// (0x000902cd) grid_calc_pane_ParamLimits

0xa1e9,	// (0x000995ed) popup_clock_digital_window_t1_ParamLimits

0xee55,	// (0x0009e259) main_image_pane_t1

0x0e60,	// (0x00090264) aid_size_cell_calc_ParamLimits

0x0e60,	// (0x00090264) aid_size_cell_calc

0x482f,	// (0x00093c33) popup_blid_sat_info2_window_ParamLimits

0x482f,	// (0x00093c33) popup_blid_sat_info2_window

0xa772,	// (0x00099b76) aid_size_cell_blid

0xa77a,	// (0x00099b7e) bg_popup_window_pane_cp07

0xa79d,	// (0x00099ba1) grid_popup_blid_pane

0xa7a7,	// (0x00099bab) heading_pane_cp05_ParamLimits

0xa7a7,	// (0x00099bab) heading_pane_cp05

0xa871,	// (0x00099c75) cell_popup_blid_pane_ParamLimits

0xa871,	// (0x00099c75) cell_popup_blid_pane

0xa895,	// (0x00099c99) cell_popup_blid_pane_g1

0xa89d,	// (0x00099ca1) cell_popup_blid_pane_t1

0x5302,	// (0x00094706) mup2_indicator_pane_ParamLimits

0x5302,	// (0x00094706) mup2_indicator_pane

0xebae,	// (0x0009dfb2) mup2_visualizer_osc_pane

0xa5da,	// (0x000999de) mup2_visualizer_spec_pane_ParamLimits

0xa5da,	// (0x000999de) mup2_visualizer_spec_pane

0x547d,	// (0x00094881) mup2_spec_half_pane

0x5486,	// (0x0009488a) mup2_spec_half_pane_cp

0x548e,	// (0x00094892) mup2_spec_bar_pane_ParamLimits

0x548e,	// (0x00094892) mup2_spec_bar_pane

0xa529,	// (0x0009992d) mup2_spec_bar_pane_g1

0xa533,	// (0x00099937) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0009ea1a) mup2_spec_bar_pane_g

0x54ae,	// (0x000948b2) mup2_osc_middle_pane

0xa545,	// (0x00099949) mup2_visualizer_osc_pane_g1

0xd7a2,	// (0x0009cba6) popup_number_entry_window_t1_ParamLimits

0xd7b5,	// (0x0009cbb9) popup_number_entry_window_t2_ParamLimits

0xd7c7,	// (0x0009cbcb) popup_number_entry_window_t3_ParamLimits

0x0cc8,	// (0x000900cc) popup_number_entry_window_t5_ParamLimits

0x0cc8,	// (0x000900cc) popup_number_entry_window_t5

0xf0d8,	// (0x0009e4dc) popup_number_entry_window_t_ParamLimits

0xd7d9,	// (0x0009cbdd) text_title_cp2_ParamLimits

0xa228,	// (0x0009962c) aid_hotspot_pointer_text2_pane

0xa242,	// (0x00099646) main_viewer_pane_g9_ParamLimits

0xa242,	// (0x00099646) main_viewer_pane_g9

0xe5a0,	// (0x0009d9a4) cale_month_pane_t1_ParamLimits

0xe5dd,	// (0x0009d9e1) bg_cale_pane_ParamLimits

0xe5f5,	// (0x0009d9f9) list_cale_pane_ParamLimits

0xe209,	// (0x0009d60d) listscroll_cale_day_pane_t1

0xe606,	// (0x0009da0a) scroll_pane_cp09_ParamLimits

0x2f21,	// (0x00092325) main_mup_eq_pane_t1_ParamLimits

0x2f21,	// (0x00092325) main_mup_eq_pane_t1

0x2f3b,	// (0x0009233f) main_mup_eq_pane_t2_ParamLimits

0x2f3b,	// (0x0009233f) main_mup_eq_pane_t2

0x2f55,	// (0x00092359) main_mup_eq_pane_t3_ParamLimits

0x2f55,	// (0x00092359) main_mup_eq_pane_t3

0x2f71,	// (0x00092375) main_mup_eq_pane_t4_ParamLimits

0x2f71,	// (0x00092375) main_mup_eq_pane_t4

0x2f8d,	// (0x00092391) main_mup_eq_pane_t5_ParamLimits

0x2f8d,	// (0x00092391) main_mup_eq_pane_t5

0x2fa9,	// (0x000923ad) main_mup_eq_pane_t6_ParamLimits

0x2fa9,	// (0x000923ad) main_mup_eq_pane_t6

0x2fbd,	// (0x000923c1) main_mup_eq_pane_t7_ParamLimits

0x2fbd,	// (0x000923c1) main_mup_eq_pane_t7

0x2fd1,	// (0x000923d5) main_mup_eq_pane_t8_ParamLimits

0x2fd1,	// (0x000923d5) main_mup_eq_pane_t8

0x2fe5,	// (0x000923e9) main_mup_eq_pane_t9_ParamLimits

0x2fe5,	// (0x000923e9) main_mup_eq_pane_t9

0x2fff,	// (0x00092403) main_mup_eq_pane_t10_ParamLimits

0x2fff,	// (0x00092403) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0009e869) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0009e869) main_mup_eq_pane_t

0x30ae,	// (0x000924b2) mup_equalizer_pane_cp5_ParamLimits

0x30c2,	// (0x000924c6) mup_equalizer_pane_cp6_ParamLimits

0x30d6,	// (0x000924da) mup_equalizer_pane_cp7_ParamLimits

0xa0bf,	// (0x000994c3) main_gallery_pane

0xa54e,	// (0x00099952) smil2_volume_pane

0xa556,	// (0x0009995a) smil_status_volume_pane_g1_ParamLimits

0xa569,	// (0x0009996d) smil_status_volume_pane_g2_ParamLimits

0xa57c,	// (0x00099980) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0009ea1f) smil_status_volume_pane_g_ParamLimits

0xa77a,	// (0x00099b7e) bg_popup_window_pane_cp07_ParamLimits

0xa788,	// (0x00099b8c) blid_firmament_pane

0x54b7,	// (0x000948bb) aid_size_cell_gallery_ParamLimits

0x54b7,	// (0x000948bb) aid_size_cell_gallery

0x54cd,	// (0x000948d1) grid_gallery_pane_ParamLimits

0x54cd,	// (0x000948d1) grid_gallery_pane

0x54e6,	// (0x000948ea) cell_gallery_pane_ParamLimits

0x54e6,	// (0x000948ea) cell_gallery_pane

0xa8ab,	// (0x00099caf) bg_cell_gallery_focus_pane_ParamLimits

0xa8ab,	// (0x00099caf) bg_cell_gallery_focus_pane

0xa8bd,	// (0x00099cc1) cell_gallery_pane_g1_ParamLimits

0xa8bd,	// (0x00099cc1) cell_gallery_pane_g1

0x552f,	// (0x00094933) cell_gallery_pane_g2_ParamLimits

0x552f,	// (0x00094933) cell_gallery_pane_g2

0x553c,	// (0x00094940) cell_gallery_pane_g3_ParamLimits

0x553c,	// (0x00094940) cell_gallery_pane_g3

0xa8c9,	// (0x00099ccd) cell_gallery_pane_g4_ParamLimits

0xa8c9,	// (0x00099ccd) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x0009eacd) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x0009eacd) cell_gallery_pane_g

0xa8d5,	// (0x00099cd9) bg_cell_gallery_focus_pane_g1

0xa8dd,	// (0x00099ce1) bg_cell_gallery_focus_pane_g2

0xa8e5,	// (0x00099ce9) bg_cell_gallery_focus_pane_g3

0xa8ed,	// (0x00099cf1) bg_cell_gallery_focus_pane_g4

0xa8f5,	// (0x00099cf9) bg_cell_gallery_focus_pane_g5

0xa8fd,	// (0x00099d01) bg_cell_gallery_focus_pane_g6

0xa905,	// (0x00099d09) bg_cell_gallery_focus_pane_g7

0xa90d,	// (0x00099d11) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0009ead6) bg_cell_gallery_focus_pane_g

0xa915,	// (0x00099d19) aid_firma_cardinal

0xa929,	// (0x00099d2d) blid_firmament_pane_t1

0xa940,	// (0x00099d44) blid_firmament_pane_t2

0xa957,	// (0x00099d5b) blid_firmament_pane_t3

0xa96e,	// (0x00099d72) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0009eae7) blid_firmament_pane_t

0xa985,	// (0x00099d89) blid_sat_info_pane

0xa995,	// (0x00099d99) blid_sat_info_pane_g1

0xa995,	// (0x00099d99) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x0009eaf0) blid_sat_info_pane_g

0xa99f,	// (0x00099da3) blid_sat_info_pane_t1

0xa9ad,	// (0x00099db1) smil2_volume_content_pane

0xa9b6,	// (0x00099dba) smil2_volume_pane_g1

0xa9be,	// (0x00099dc2) smil2_volume_content_pane_g1

0xa9c7,	// (0x00099dcb) smil2_volume_content_pane_g2

0xa9d0,	// (0x00099dd4) smil2_volume_content_pane_g3

0xa9d9,	// (0x00099ddd) smil2_volume_content_pane_g4

0xa9e2,	// (0x00099de6) smil2_volume_content_pane_g5

0xa9eb,	// (0x00099def) smil2_volume_content_pane_g6

0xa9f4,	// (0x00099df8) smil2_volume_content_pane_g7

0xa9fd,	// (0x00099e01) smil2_volume_content_pane_g8

0xaa06,	// (0x00099e0a) smil2_volume_content_pane_g9

0xaa0f,	// (0x00099e13) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0009eaf5) smil2_volume_content_pane_g

0x137d,	// (0x00090781) cale_week_day_heading_pane_t1_ParamLimits

0x13a7,	// (0x000907ab) cale_week_day_heading_pane_t2_ParamLimits

0x13d1,	// (0x000907d5) cale_week_day_heading_pane_t3_ParamLimits

0x13fb,	// (0x000907ff) cale_week_day_heading_pane_t4_ParamLimits

0x1425,	// (0x00090829) cale_week_day_heading_pane_t5_ParamLimits

0x144f,	// (0x00090853) cale_week_day_heading_pane_t6_ParamLimits

0x147b,	// (0x0009087f) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0009e5e1) cale_week_day_heading_pane_t_ParamLimits

0xe21b,	// (0x0009d61f) bg_cale_side_pane_ParamLimits

0x14a5,	// (0x000908a9) cale_week_time_pane_t1_ParamLimits

0x14bd,	// (0x000908c1) cale_week_time_pane_t2_ParamLimits

0x14d5,	// (0x000908d9) cale_week_time_pane_t3_ParamLimits

0x14ed,	// (0x000908f1) cale_week_time_pane_t4_ParamLimits

0x1505,	// (0x00090909) cale_week_time_pane_t5_ParamLimits

0x151d,	// (0x00090921) cale_week_time_pane_t6_ParamLimits

0x1535,	// (0x00090939) cale_week_time_pane_t7_ParamLimits

0x154d,	// (0x00090951) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0009e5f0) cale_week_time_pane_t_ParamLimits

0x1565,	// (0x00090969) cell_cale_week_pane_g2_ParamLimits

0xe21b,	// (0x0009d61f) bg_cale_side_pane_cp01_ParamLimits

0x2597,	// (0x0009199b) cale_month_week_pane_t1_ParamLimits

0x25ae,	// (0x000919b2) cale_month_week_pane_t2_ParamLimits

0x25c5,	// (0x000919c9) cale_month_week_pane_t3_ParamLimits

0x25dc,	// (0x000919e0) cale_month_week_pane_t4_ParamLimits

0x25f3,	// (0x000919f7) cale_month_week_pane_t5_ParamLimits

0x260a,	// (0x00091a0e) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0009e6c9) cale_month_week_pane_t_ParamLimits

0xa165,	// (0x00099569) cell_cale_month_pane_g1_ParamLimits

0xa0bf,	// (0x000994c3) main_cale_event_viewer_pane

0xec5a,	// (0x0009e05e) listscroll_cale_event_viewer_pane

0xaa18,	// (0x00099e1c) list_cale_ev_pane

0xaa20,	// (0x00099e24) scroll_pane_cp023

0xaa2c,	// (0x00099e30) field_cale_ev_pane_ParamLimits

0xaa2c,	// (0x00099e30) field_cale_ev_pane

0xaa4a,	// (0x00099e4e) field_cale_ev_content_pane_ParamLimits

0xaa4a,	// (0x00099e4e) field_cale_ev_content_pane

0xaa56,	// (0x00099e5a) field_cale_ev_pane_g1_ParamLimits

0xaa56,	// (0x00099e5a) field_cale_ev_pane_g1

0xaa62,	// (0x00099e66) field_cale_ev_pane_g2_ParamLimits

0xaa62,	// (0x00099e66) field_cale_ev_pane_g2

0xaa7a,	// (0x00099e7e) field_cale_ev_pane_g3_ParamLimits

0xaa7a,	// (0x00099e7e) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x0009eb0a) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x0009eb0a) field_cale_ev_pane_g

0xaa92,	// (0x00099e96) field_cale_ev_pane_t1_ParamLimits

0xaa92,	// (0x00099e96) field_cale_ev_pane_t1

0xaaa9,	// (0x00099ead) field_cale_ev_content_pane_t1_ParamLimits

0xaaa9,	// (0x00099ead) field_cale_ev_content_pane_t1

0xed3b,	// (0x0009e13f) bg_button_pane_cp01

0xe0db,	// (0x0009d4df) listscroll_cale_week_pane_ParamLimits

0x1199,	// (0x0009059d) popup_toolbar_window_cp01

0xe209,	// (0x0009d60d) listscroll_cale_week_pane_t1_ParamLimits

0xe0db,	// (0x0009d4df) listscroll_cale_day_pane_ParamLimits

0x2797,	// (0x00091b9b) popup_toolbar_window_cp02

0xe209,	// (0x0009d60d) listscroll_cale_day_pane_t1_ParamLimits

0xe0db,	// (0x0009d4df) main_cale_month_pane_ParamLimits

0x4a63,	// (0x00093e67) popup_toolbar_window_cp03_ParamLimits

0x4a63,	// (0x00093e67) popup_toolbar_window_cp03

0x3455,	// (0x00092859) main_image_pane_g2_ParamLimits

0x3455,	// (0x00092859) main_image_pane_g2

0x3466,	// (0x0009286a) main_image_pane_g3_ParamLimits

0x3466,	// (0x0009286a) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0009e8fb) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0009e8fb) main_image_pane_g

0xee55,	// (0x0009e259) main_image_pane_t1_ParamLimits

0x3477,	// (0x0009287b) main_image_pane_t2_ParamLimits

0x3477,	// (0x0009287b) main_image_pane_t2

0x3489,	// (0x0009288d) main_image_pane_t3_ParamLimits

0x3489,	// (0x0009288d) main_image_pane_t3

0x34b1,	// (0x000928b5) main_image_pane_t4_ParamLimits

0x34b1,	// (0x000928b5) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0009e902) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0009e902) main_image_pane_t

0x34d1,	// (0x000928d5) popup_image_details_window_cp01

0x34db,	// (0x000928df) popup_toobar_trans_pane_cp01_ParamLimits

0x34db,	// (0x000928df) popup_toobar_trans_pane_cp01

0x490e,	// (0x00093d12) popup_image_details_window_ParamLimits

0x490e,	// (0x00093d12) popup_image_details_window

0xa4af,	// (0x000998b3) popup_image_focus_window

0x4d29,	// (0x0009412d) camera2_autofocus_pane_ParamLimits

0x4d29,	// (0x0009412d) camera2_autofocus_pane

0xec5a,	// (0x0009e05e) bg_popup_sub_pane_cp06

0xaac7,	// (0x00099ecb) popup_image_focus_window_g1

0xaacf,	// (0x00099ed3) popup_image_focus_window_g2

0xaad7,	// (0x00099edb) popup_image_focus_window_g3

0xaadf,	// (0x00099ee3) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x0009eb11) popup_image_focus_window_g

0xaae7,	// (0x00099eeb) popup_image_focus_window_t1

0xaaf5,	// (0x00099ef9) popup_image_focus_window_t2

0xab05,	// (0x00099f09) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x0009eb1a) popup_image_focus_window_t

0xab13,	// (0x00099f17) camera2_autofocus_pane_g1

0x47f9,	// (0x00093bfd) bg_tb_trans_pane_cp01

0xab21,	// (0x00099f25) popup_image_details_window_g1

0xab34,	// (0x00099f38) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0009eb2c) popup_image_details_window_g

0xab5d,	// (0x00099f61) popup_image_details_window_t1

0xab6f,	// (0x00099f73) popup_image_details_window_t2

0xab88,	// (0x00099f8c) popup_image_details_window_t3

0xab9c,	// (0x00099fa0) popup_image_details_window_t4

0xabb7,	// (0x00099fbb) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0009eb33) popup_image_details_window_t

0xe0c7,	// (0x0009d4cb) bg_calc_paper_pane_ParamLimits

0xa0bf,	// (0x000994c3) grid_highlight_pane_cp013

0xa0d1,	// (0x000994d5) list_calc_pane_ParamLimits

0xa0e3,	// (0x000994e7) scroll_pane_cp024

0xe0db,	// (0x0009d4df) bg_calc_display_pane_ParamLimits

0x0fc7,	// (0x000903cb) calc_display_pane_t1_ParamLimits

0x0fd9,	// (0x000903dd) calc_display_pane_t2_ParamLimits

0xa0eb,	// (0x000994ef) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0009e563) calc_display_pane_t_ParamLimits

0x1096,	// (0x0009049a) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0009e580) cell_calc_pane_g

0x109f,	// (0x000904a3) cell_calc_pane_t1

0xe13a,	// (0x0009d53e) grid_highlight_pane_cp02_ParamLimits

0xe150,	// (0x0009d554) toolbar_button_pane_cp01_ParamLimits

0xe150,	// (0x0009d554) toolbar_button_pane_cp01

0xee9a,	// (0x0009e29e) temp_image_control_pane_ParamLimits

0xee9a,	// (0x0009e29e) temp_image_control_pane

0xa0b1,	// (0x000994b5) main_mp3_pane

0xabd1,	// (0x00099fd5) temp_image_control_pane_g1_ParamLimits

0xabd1,	// (0x00099fd5) temp_image_control_pane_g1

0xabdf,	// (0x00099fe3) temp_image_control_pane_g2_ParamLimits

0xabdf,	// (0x00099fe3) temp_image_control_pane_g2

0xabf1,	// (0x00099ff5) temp_image_control_pane_g3_ParamLimits

0xabf1,	// (0x00099ff5) temp_image_control_pane_g3

0x5579,	// (0x0009497d) temp_image_control_pane_g4_ParamLimits

0x5579,	// (0x0009497d) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0009eb3e) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0009eb3e) temp_image_control_pane_g

0xabd1,	// (0x00099fd5) main_mp3_pane_g1

0x558c,	// (0x00094990) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0009eb47) main_mp3_pane_g

0xac34,	// (0x0009a038) main_mp3_pane_t1

0xe280,	// (0x0009d684) main_camera_pane_g8_ParamLimits

0xe280,	// (0x0009d684) main_camera_pane_g8

0x1878,	// (0x00090c7c) main_video_pane_g7_ParamLimits

0x1878,	// (0x00090c7c) main_video_pane_g7

0xa5bc,	// (0x000999c0) main_camera2_pane_t7_ParamLimits

0xa5bc,	// (0x000999c0) main_camera2_pane_t7

0xe3c8,	// (0x0009d7cc) scroll_pane_cp025_ParamLimits

0xe3c8,	// (0x0009d7cc) scroll_pane_cp025

0xe3dc,	// (0x0009d7e0) scroll_pane_cp026_ParamLimits

0xe3dc,	// (0x0009d7e0) scroll_pane_cp026

0xe3eb,	// (0x0009d7ef) wml_content_pane_ParamLimits

0xa0bf,	// (0x000994c3) main_touch_calib_pane

0x5656,	// (0x00094a5a) main_touch_calib_pane_g1

0x5662,	// (0x00094a66) main_touch_calib_pane_g2

0x566e,	// (0x00094a72) main_touch_calib_pane_g3

0x567a,	// (0x00094a7e) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0009eb65) main_touch_calib_pane_g

0x5686,	// (0x00094a8a) main_touch_calib_pane_t1

0x56a0,	// (0x00094aa4) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0009eb6e) main_touch_calib_pane_t

0xeaef,	// (0x0009def3) mup_progress_pane_cp02

0xeb0e,	// (0x0009df12) navi_pane_g1

0xeb70,	// (0x0009df74) navi_pane_mp_t3

0xa0b1,	// (0x000994b5) main_mp3_pane_ParamLimits

0x4aa1,	// (0x00093ea5) navi_pane_ParamLimits

0xabd1,	// (0x00099fd5) main_mp3_pane_g1_ParamLimits

0x558c,	// (0x00094990) main_mp3_pane_g2_ParamLimits

0x559a,	// (0x0009499e) main_mp3_pane_g3_ParamLimits

0x559a,	// (0x0009499e) main_mp3_pane_g3

0x55a8,	// (0x000949ac) main_mp3_pane_g4_ParamLimits

0x55a8,	// (0x000949ac) main_mp3_pane_g4

0xac01,	// (0x0009a005) main_mp3_pane_g5_ParamLimits

0xac01,	// (0x0009a005) main_mp3_pane_g5

0xac0f,	// (0x0009a013) main_mp3_pane_g6_ParamLimits

0xac0f,	// (0x0009a013) main_mp3_pane_g6

0xac1c,	// (0x0009a020) main_mp3_pane_g7_ParamLimits

0xac1c,	// (0x0009a020) main_mp3_pane_g7

0xac28,	// (0x0009a02c) main_mp3_pane_g8_ParamLimits

0xac28,	// (0x0009a02c) main_mp3_pane_g8

0xf743,	// (0x0009eb47) main_mp3_pane_g_ParamLimits

0x55b4,	// (0x000949b8) main_mp3_pane_t2

0x55c2,	// (0x000949c6) main_mp3_pane_t3

0xac42,	// (0x0009a046) main_mp3_pane_t4

0xac50,	// (0x0009a054) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0009eb58) main_mp3_pane_t

0xac5e,	// (0x0009a062) mup_progress_pane_cp01

0xa067,	// (0x0009946b) aid_zoom_text_secondary2

0xaa18,	// (0x00099e1c) list_cale_ev2_pane

0xaa20,	// (0x00099e24) scroll_pane_cp023_ParamLimits

0x56f6,	// (0x00094afa) field_cale_ev2_pane_ParamLimits

0x56f6,	// (0x00094afa) field_cale_ev2_pane

0x5716,	// (0x00094b1a) field_cale_ev2_pane_g1_ParamLimits

0x5716,	// (0x00094b1a) field_cale_ev2_pane_g1

0x5722,	// (0x00094b26) field_cale_ev2_pane_g2_ParamLimits

0x5722,	// (0x00094b26) field_cale_ev2_pane_g2

0x573a,	// (0x00094b3e) field_cale_ev2_pane_g3_ParamLimits

0x573a,	// (0x00094b3e) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0009eb79) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0009eb79) field_cale_ev2_pane_g

0xac72,	// (0x0009a076) field_cale_ev2_pane_t1_ParamLimits

0xac72,	// (0x0009a076) field_cale_ev2_pane_t1

0xac89,	// (0x0009a08d) field_cale_ev2_pane_t2_ParamLimits

0xac89,	// (0x0009a08d) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0009eb82) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0009eb82) field_cale_ev2_pane_t

0x330a,	// (0x0009270e) main_postcard_pane_g5_ParamLimits

0x330a,	// (0x0009270e) main_postcard_pane_g5

0x3320,	// (0x00092724) main_postcard_pane_g6_ParamLimits

0x3320,	// (0x00092724) main_postcard_pane_g6

0x163c,	// (0x00090a40) camera2_autofocus_pane_cp_ParamLimits

0x163c,	// (0x00090a40) camera2_autofocus_pane_cp

0xa0b1,	// (0x000994b5) main_mup3_pane

0x5772,	// (0x00094b76) main_mup3_pane_g1_ParamLimits

0x5772,	// (0x00094b76) main_mup3_pane_g1

0x5794,	// (0x00094b98) main_mup3_pane_g2_ParamLimits

0x5794,	// (0x00094b98) main_mup3_pane_g2

0x5812,	// (0x00094c16) main_mup3_pane_g3_ParamLimits

0x5812,	// (0x00094c16) main_mup3_pane_g3

0x5858,	// (0x00094c5c) main_mup3_pane_g4_ParamLimits

0x5858,	// (0x00094c5c) main_mup3_pane_g4

0x589e,	// (0x00094ca2) main_mup3_pane_g5_ParamLimits

0x589e,	// (0x00094ca2) main_mup3_pane_g5

0x58e4,	// (0x00094ce8) main_mup3_pane_g6_ParamLimits

0x58e4,	// (0x00094ce8) main_mup3_pane_g6

0xac9e,	// (0x0009a0a2) main_mup3_pane_g7_ParamLimits

0xac9e,	// (0x0009a0a2) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0009eb92) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0009eb92) main_mup3_pane_g

0x5962,	// (0x00094d66) main_mup3_pane_t1_ParamLimits

0x5962,	// (0x00094d66) main_mup3_pane_t1

0x59d6,	// (0x00094dda) main_mup3_pane_t2_ParamLimits

0x59d6,	// (0x00094dda) main_mup3_pane_t2

0x5aaa,	// (0x00094eae) main_mup3_pane_t4_ParamLimits

0x5aaa,	// (0x00094eae) main_mup3_pane_t4

0x5b00,	// (0x00094f04) main_mup3_pane_t5_ParamLimits

0x5b00,	// (0x00094f04) main_mup3_pane_t5

0x5bbc,	// (0x00094fc0) main_mup3_pane_t6_ParamLimits

0x5bbc,	// (0x00094fc0) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0009eba3) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0009eba3) main_mup3_pane_t

0x5c74,	// (0x00095078) mup3_progress_pane_ParamLimits

0x5c74,	// (0x00095078) mup3_progress_pane

0x5d0a,	// (0x0009510e) popup_mup3_control_window_ParamLimits

0x5d0a,	// (0x0009510e) popup_mup3_control_window

0xacac,	// (0x0009a0b0) popup_mup3_text_window

0x5d3c,	// (0x00095140) mup3_progress_pane_t1

0x5d5b,	// (0x0009515f) mup3_progress_pane_t2

0xacb4,	// (0x0009a0b8) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0009ebb0) mup3_progress_pane_t

0xacd1,	// (0x0009a0d5) mup_progress_pane_cp03

0xec5a,	// (0x0009e05e) bg_tb_trans_pane_cp04

0x5d7a,	// (0x0009517e) mup3_volume_pane

0x5d82,	// (0x00095186) popup_mup3_control_window_g1

0x5d8b,	// (0x0009518f) mup3_volume_pane_g1

0x5d94,	// (0x00095198) mup3_volume_pane_g2

0x5d9d,	// (0x000951a1) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0009ebb7) mup3_volume_pane_g

0xec5a,	// (0x0009e05e) bg_tb_trans_pane_cp03

0xace1,	// (0x0009a0e5) popup_mup3_text_window_g1

0xace9,	// (0x0009a0ed) popup_mup3_text_window_t1

0xe123,	// (0x0009d527) list_calc_item_pane_g1_ParamLimits

0xa6a4,	// (0x00099aa8) mup_volume_pane_cp_g1

0x56ba,	// (0x00094abe) main_touch_calib_pane_t3

0x56ce,	// (0x00094ad2) main_touch_calib_pane_t4

0x56e2,	// (0x00094ae6) main_touch_calib_pane_t5

0xa043,	// (0x00099447) aid_cell_size_toolbar2

0xa04b,	// (0x0009944f) aid_popup3_width_pane

0xa057,	// (0x0009945b) aid_zoom_text_msg_primary

0x1613,	// (0x00090a17) vorec_t7

0xe0e7,	// (0x0009d4eb) bg_calc_paper_pane_g1_ParamLimits

0xe0f3,	// (0x0009d4f7) bg_calc_paper_pane_g2_ParamLimits

0xe0ff,	// (0x0009d503) bg_calc_paper_pane_g3_ParamLimits

0xe10b,	// (0x0009d50f) bg_calc_paper_pane_g4_ParamLimits

0xe117,	// (0x0009d51b) bg_calc_paper_pane_g5_ParamLimits

0x1020,	// (0x00090424) bg_calc_paper_pane_g6_ParamLimits

0x102f,	// (0x00090433) bg_calc_paper_pane_g7_ParamLimits

0x103e,	// (0x00090442) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0009e56a) bg_calc_paper_pane_g_ParamLimits

0x1051,	// (0x00090455) calc_bg_paper_pane_g9_ParamLimits

0x178a,	// (0x00090b8e) image_qvga_pane_ParamLimits

0x178a,	// (0x00090b8e) image_qvga_pane

0xe008,	// (0x0009d40c) bg_popup_sub_pane_cp04_ParamLimits

0xedd1,	// (0x0009e1d5) popup_mup_playback_window_g1_ParamLimits

0xeddd,	// (0x0009e1e1) popup_mup_playback_window_t1_ParamLimits

0xedf2,	// (0x0009e1f6) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0009e8f6) popup_mup_playback_window_t_ParamLimits

0x521c,	// (0x00094620) main_mup2_pane_g3_ParamLimits

0x521c,	// (0x00094620) main_mup2_pane_g3

0x1b9e,	// (0x00090fa2) popup_toolbar_window_cp04

0x3933,	// (0x00092d37) popup_call2_audio_second_window_g3_ParamLimits

0x3933,	// (0x00092d37) popup_call2_audio_second_window_g3

0x3d3d,	// (0x00093141) popup_call2_audio_first_window_g4_ParamLimits

0x3d3d,	// (0x00093141) popup_call2_audio_first_window_g4

0x43bc,	// (0x000937c0) popup_call2_audio_in_window_g4_ParamLimits

0x43bc,	// (0x000937c0) popup_call2_audio_in_window_g4

0x3437,	// (0x0009283b) aid_area_sk_bg_cut_ParamLimits

0x3437,	// (0x0009283b) aid_area_sk_bg_cut

0xee07,	// (0x0009e20b) aid_area_sk_bg_cut_2_ParamLimits

0xee07,	// (0x0009e20b) aid_area_sk_bg_cut_2

0x551f,	// (0x00094923) aid_placing_details_win

0x5527,	// (0x0009492b) aid_placing_details_win_2

0xab13,	// (0x00099f17) camera2_autofocus_pane_g1_ParamLimits

0x0c15,	// (0x00090019) popup_fixed_preview_cale_window_ParamLimits

0x0c15,	// (0x00090019) popup_fixed_preview_cale_window

0xebbf,	// (0x0009dfc3) navi_slider_pane_g3

0xebc8,	// (0x0009dfcc) navi_slider_pane_g4

0xebd1,	// (0x0009dfd5) navi_slider_pane_g5

0xebbf,	// (0x0009dfc3) navi_slider_pane_g6

0xa20f,	// (0x00099613) navi_slider_pane_g7

0xed08,	// (0x0009e10c) mup_scale_pane_g3

0xed11,	// (0x0009e115) mup_scale_pane_g4

0xed1a,	// (0x0009e11e) mup_scale_pane_g5

0x30ea,	// (0x000924ee) mup_scale_pane_g6

0x30f3,	// (0x000924f7) mup_scale_pane_g7

0xebbf,	// (0x0009dfc3) cams2_slider_pane_g3

0xa759,	// (0x00099b5d) cams2_slider_pane_g4

0xa761,	// (0x00099b65) cams2_slider_pane_g5

0xebbf,	// (0x0009dfc3) cams2_slider_pane_g6

0xa769,	// (0x00099b6d) cams2_slider_pane_g7

0xa995,	// (0x00099d99) camera2_autofocus_pane_cp_g1

0xacf7,	// (0x0009a0fb) bg_popup_preview_window_pane_cp02_ParamLimits

0xacf7,	// (0x0009a0fb) bg_popup_preview_window_pane_cp02

0xad03,	// (0x0009a107) list_fp_cale_pane_ParamLimits

0xad03,	// (0x0009a107) list_fp_cale_pane

0xad0f,	// (0x0009a113) popup_fixed_preview_cale_window_t1_ParamLimits

0xad0f,	// (0x0009a113) popup_fixed_preview_cale_window_t1

0x5da6,	// (0x000951aa) popup_fixed_preview_cale_window_t2_ParamLimits

0x5da6,	// (0x000951aa) popup_fixed_preview_cale_window_t2

0x5dbb,	// (0x000951bf) popup_fixed_preview_cale_window_t3_ParamLimits

0x5dbb,	// (0x000951bf) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0009ebbe) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0009ebbe) popup_fixed_preview_cale_window_t

0x5dd0,	// (0x000951d4) list_single_fp_cale_pane_ParamLimits

0x5dd0,	// (0x000951d4) list_single_fp_cale_pane

0xad2d,	// (0x0009a131) list_single_fp_cale_pane_g1_ParamLimits

0xad2d,	// (0x0009a131) list_single_fp_cale_pane_g1

0xad39,	// (0x0009a13d) list_single_fp_cale_pane_g2_ParamLimits

0xad39,	// (0x0009a13d) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0009ebc5) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0009ebc5) list_single_fp_cale_pane_g

0xad52,	// (0x0009a156) list_single_fp_cale_pane_t1_ParamLimits

0xad52,	// (0x0009a156) list_single_fp_cale_pane_t1

0xad64,	// (0x0009a168) list_single_fp_cale_pane_t2_ParamLimits

0xad64,	// (0x0009a168) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0009ebcc) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0009ebcc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa0bf,	// (0x000994c3) main_dialer_pane

0x5de5,	// (0x000951e9) aid_cell_size_keypad

0x5def,	// (0x000951f3) dialer_ne_pane

0x5df7,	// (0x000951fb) grid_dialer_command_1_pane

0x5dff,	// (0x00095203) grid_dialer_command_2_pane

0x5e07,	// (0x0009520b) grid_dialer_keypad_pane

0x5e19,	// (0x0009521d) bg_popup_call_pane_cp06_ParamLimits

0x5e19,	// (0x0009521d) bg_popup_call_pane_cp06

0x5e25,	// (0x00095229) dialer_ne_clear_pane_ParamLimits

0x5e25,	// (0x00095229) dialer_ne_clear_pane

0xad97,	// (0x0009a19b) dialer_ne_pane_g1

0xad9f,	// (0x0009a1a3) dialer_ne_pane_t1_ParamLimits

0xad9f,	// (0x0009a1a3) dialer_ne_pane_t1

0x5e31,	// (0x00095235) dialer_ne_pane_t2_ParamLimits

0x5e31,	// (0x00095235) dialer_ne_pane_t2

0x5e5b,	// (0x0009525f) dialer_ne_pane_t3_ParamLimits

0x5e5b,	// (0x0009525f) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x0009ebd1) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x0009ebd1) dialer_ne_pane_t

0x5e8b,	// (0x0009528f) dialer_ne_pane_t3_copy1_ParamLimits

0x5e8b,	// (0x0009528f) dialer_ne_pane_t3_copy1

0x5eba,	// (0x000952be) cell_dialer_keypad_pane_ParamLimits

0x5eba,	// (0x000952be) cell_dialer_keypad_pane

0x5ed1,	// (0x000952d5) cell_dialer_command_1_pane_ParamLimits

0x5ed1,	// (0x000952d5) cell_dialer_command_1_pane

0x5ee7,	// (0x000952eb) cell_dialer_command_2_pane_ParamLimits

0x5ee7,	// (0x000952eb) cell_dialer_command_2_pane

0xadb1,	// (0x0009a1b5) bg_button_pane_cp02_ParamLimits

0xadb1,	// (0x0009a1b5) bg_button_pane_cp02

0x5ef6,	// (0x000952fa) cell_dialer_keypad_pane_g1_ParamLimits

0x5ef6,	// (0x000952fa) cell_dialer_keypad_pane_g1

0xadb1,	// (0x0009a1b5) bg_button_pane_cp03_ParamLimits

0xadb1,	// (0x0009a1b5) bg_button_pane_cp03

0x5f0a,	// (0x0009530e) cell_dialer_command_1_pane_g1_ParamLimits

0x5f0a,	// (0x0009530e) cell_dialer_command_1_pane_g1

0xadbd,	// (0x0009a1c1) bg_button_pane_cp04

0x5f1e,	// (0x00095322) cell_dialer_command_2_pane_g1

0xebae,	// (0x0009dfb2) bg_button_pane_cp06

0xadc5,	// (0x0009a1c9) dialer_ne_clear_pane_g1

0x2c2e,	// (0x00092032) navi_pane_g2

0x2c5c,	// (0x00092060) navi_pane_g3

0x0002,

0xf3f5,	// (0x0009e7f9) navi_pane_g

0x2c85,	// (0x00092089) navi_pane_mv_g2

0x2cac,	// (0x000920b0) navi_pane_mv_g5

0x2cb4,	// (0x000920b8) navi_pane_mv_t1

0xe0db,	// (0x0009d4df) main_clock2_pane

0x5f56,	// (0x0009535a) main_clock2_list_pane_ParamLimits

0x5f56,	// (0x0009535a) main_clock2_list_pane

0x5f8e,	// (0x00095392) main_clock2_pane_t1_ParamLimits

0x5f8e,	// (0x00095392) main_clock2_pane_t1

0x5fca,	// (0x000953ce) main_clock2_pane_t2_ParamLimits

0x5fca,	// (0x000953ce) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0009ebd8) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0009ebd8) main_clock2_pane_t

0x6067,	// (0x0009546b) popup_clock_analogue_window_cp03_ParamLimits

0x6067,	// (0x0009546b) popup_clock_analogue_window_cp03

0x608c,	// (0x00095490) popup_clock_digital_window_cp02_ParamLimits

0x608c,	// (0x00095490) popup_clock_digital_window_cp02

0x60fd,	// (0x00095501) main_clock2_list_single_pane_ParamLimits

0x60fd,	// (0x00095501) main_clock2_list_single_pane

0xebae,	// (0x0009dfb2) list_highlight_pane_cp05

0xadcd,	// (0x0009a1d1) main_clock2_list_single_pane_t1

0x1b9e,	// (0x00090fa2) popup_toolbar_window_cp04_ParamLimits

0x5549,	// (0x0009494d) camera2_autofocus_pane_g2_ParamLimits

0x5549,	// (0x0009494d) camera2_autofocus_pane_g2

0x5555,	// (0x00094959) camera2_autofocus_pane_g3_ParamLimits

0x5555,	// (0x00094959) camera2_autofocus_pane_g3

0x5561,	// (0x00094965) camera2_autofocus_pane_g4_ParamLimits

0x5561,	// (0x00094965) camera2_autofocus_pane_g4

0x556d,	// (0x00094971) camera2_autofocus_pane_g5_ParamLimits

0x556d,	// (0x00094971) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0009eb21) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0009eb21) camera2_autofocus_pane_g

0x5752,	// (0x00094b56) camera2_autofocus_pane_cp_g2

0x575a,	// (0x00094b5e) camera2_autofocus_pane_cp_g3

0x5762,	// (0x00094b66) camera2_autofocus_pane_cp_g4

0x576a,	// (0x00094b6e) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x0009eb87) camera2_autofocus_pane_cp_g

0x5e11,	// (0x00095215) popup_dialer_spcha_window

0xec5a,	// (0x0009e05e) bg_popup_sub_pane_cp07

0xaddb,	// (0x0009a1df) list_spcha_pane

0xade3,	// (0x0009a1e7) list_single_spcha_pane_ParamLimits

0xade3,	// (0x0009a1e7) list_single_spcha_pane

0xec5a,	// (0x0009e05e) list_highlight_pane_cp06

0xadf4,	// (0x0009a1f8) list_single_spcha_pane_t1

0x4166,	// (0x0009356a) popup_call2_audio_out_window_g4_ParamLimits

0x4166,	// (0x0009356a) popup_call2_audio_out_window_g4

0xa0bf,	// (0x000994c3) main_imed2_pane

0xa4b7,	// (0x000998bb) popup_imed_adjust2_window

0x4926,	// (0x00093d2a) popup_imed_trans_window_ParamLimits

0x4926,	// (0x00093d2a) popup_imed_trans_window

0xa7d3,	// (0x00099bd7) popup_blid_sat_info2_window_t1

0xa7e1,	// (0x00099be5) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0009eab6) popup_blid_sat_info2_window_t

0x61a7,	// (0x000955ab) aid_size_cell_colour_35

0x61c7,	// (0x000955cb) aid_size_cell_colour_112

0x61e7,	// (0x000955eb) aid_size_cell_effect

0xa48f,	// (0x00099893) bg_tb_trans_pane_cp02

0xe6fd,	// (0x0009db01) heading_imed_pane

0x6207,	// (0x0009560b) listscroll_imed_pane

0xae02,	// (0x0009a206) heading_imed_pane_g1

0xae0a,	// (0x0009a20e) heading_imed_pane_t1

0xae18,	// (0x0009a21c) grid_imed_colour_35_pane_ParamLimits

0xae18,	// (0x0009a21c) grid_imed_colour_35_pane

0x6213,	// (0x00095617) grid_imed_effect_pane

0xae2f,	// (0x0009a233) list_imed_aspect_pane

0x6229,	// (0x0009562d) scroll_pane_cp027_ParamLimits

0x6229,	// (0x0009562d) scroll_pane_cp027

0x623a,	// (0x0009563e) cell_imed_effect_pane_ParamLimits

0x623a,	// (0x0009563e) cell_imed_effect_pane

0xae37,	// (0x0009a23b) cell_imed_colour_pane_ParamLimits

0xae37,	// (0x0009a23b) cell_imed_colour_pane

0xae79,	// (0x0009a27d) cell_imed_colour_pane_g1_ParamLimits

0xae79,	// (0x0009a27d) cell_imed_colour_pane_g1

0xae8a,	// (0x0009a28e) hgihlgiht_grid_pane_cp016_ParamLimits

0xae8a,	// (0x0009a28e) hgihlgiht_grid_pane_cp016

0x6261,	// (0x00095665) cell_imed_effect_pane_g1

0x6269,	// (0x0009566d) grid_highlight_pane_cp017

0xae9b,	// (0x0009a29f) list_imed_single_pane_ParamLimits

0xae9b,	// (0x0009a29f) list_imed_single_pane

0xec5a,	// (0x0009e05e) list_highlight_pane_cp07

0xaeb0,	// (0x0009a2b4) list_imed_aspect_pane_comp1_t1

0xa48f,	// (0x00099893) bg_tb_trans_pane_cp05

0xaed2,	// (0x0009a2d6) popup_imed_adjust2_window_g1

0xaef9,	// (0x0009a2fd) popup_imed_adjust2_window_t1

0xaf11,	// (0x0009a315) slider_imed_adjust_pane

0xaf25,	// (0x0009a329) slider_imed_adjust_pane_g1

0xaf35,	// (0x0009a339) slider_imed_adjust_pane_g2

0xaf45,	// (0x0009a349) slider_imed_adjust_pane_g3

0xaf56,	// (0x0009a35a) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0009ebf5) slider_imed_adjust_pane_g

0x6272,	// (0x00095676) aid_size_cell_clipart2

0x627e,	// (0x00095682) grid_imed_clipart_pane

0xaf67,	// (0x0009a36b) scroll_pane_cp031

0x6288,	// (0x0009568c) cell_imed_clipart_pane_ParamLimits

0x6288,	// (0x0009568c) cell_imed_clipart_pane

0x62aa,	// (0x000956ae) cell_imed_clipart_pane_g1

0xec5a,	// (0x0009e05e) grid_highlight_pane_cp014

0x5f6b,	// (0x0009536f) main_clock2_pane_g1_ParamLimits

0x5f6b,	// (0x0009536f) main_clock2_pane_g1

0x60a8,	// (0x000954ac) aid_call2_pane_cp10

0x60ba,	// (0x000954be) aid_call_pane_cp10

0xeae3,	// (0x0009dee7) popup_clock_analogue_window_cp10_g1

0xeae3,	// (0x0009dee7) popup_clock_analogue_window_cp10_g2

0x60cc,	// (0x000954d0) popup_clock_analogue_window_cp10_g3

0x60cc,	// (0x000954d0) popup_clock_analogue_window_cp10_g4

0xeae3,	// (0x0009dee7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0009ebe3) popup_clock_analogue_window_cp10_g

0x60de,	// (0x000954e2) popup_clock_analogue_window_cp10_t1

0x610f,	// (0x00095513) clock_digital_number_pane_cp10_ParamLimits

0x610f,	// (0x00095513) clock_digital_number_pane_cp10

0x6127,	// (0x0009552b) clock_digital_number_pane_cp11_ParamLimits

0x6127,	// (0x0009552b) clock_digital_number_pane_cp11

0x613f,	// (0x00095543) clock_digital_number_pane_cp12_ParamLimits

0x613f,	// (0x00095543) clock_digital_number_pane_cp12

0x6157,	// (0x0009555b) clock_digital_number_pane_cp13_ParamLimits

0x6157,	// (0x0009555b) clock_digital_number_pane_cp13

0x616f,	// (0x00095573) clock_digital_separator_pane_cp10_ParamLimits

0x616f,	// (0x00095573) clock_digital_separator_pane_cp10

0x6187,	// (0x0009558b) popup_clock_digital_window_cp02_t1_ParamLimits

0x6187,	// (0x0009558b) popup_clock_digital_window_cp02_t1

0xe000,	// (0x0009d404) clock_digital_number_pane_cp10_g1

0xe000,	// (0x0009d404) clock_digital_number_pane_cp10_g2

0x0001,

0x0207,	// (0x0008f60b) clock_digital_number_pane_cp10_g

0xe000,	// (0x0009d404) clock_digital_separator_pane_cp10_g1

0xe000,	// (0x0009d404) clock_digital_separator_pane_g2_cp10

0xeb7e,	// (0x0009df82) navi_pane_vded_g4

0xeb87,	// (0x0009df8b) navi_pane_vded_g5

0xeb90,	// (0x0009df94) navi_pane_vded_t1

0xa0bf,	// (0x000994c3) main_vded_pane

0x62b3,	// (0x000956b7) main_vded_pane_g1

0x62bd,	// (0x000956c1) main_vded_pane_g2

0x62c7,	// (0x000956cb) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0009ebfe) main_vded_pane_g

0x62d1,	// (0x000956d5) main_vded_pane_t1

0x62df,	// (0x000956e3) main_vded_pane_t2

0x0001,

0xf801,	// (0x0009ec05) main_vded_pane_t

0x62ed,	// (0x000956f1) vded_slider_pane

0x62f5,	// (0x000956f9) vded_video_pane

0xaf6f,	// (0x0009a373) vded_video_pane_g1

0x62fd,	// (0x00095701) vded_video_pane_g2

0xa995,	// (0x00099d99) vded_video_pane_g3

0x0002,

0xf806,	// (0x0009ec0a) vded_video_pane_g

0xaf79,	// (0x0009a37d) vded_slider_pane_g1

0xa6a4,	// (0x00099aa8) vded_slider_pane_g2

0xaf82,	// (0x0009a386) vded_slider_pane_g3

0xaf8b,	// (0x0009a38f) vded_slider_pane_g4

0xaf94,	// (0x0009a398) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0009ec11) vded_slider_pane_g

0x5cf2,	// (0x000950f6) mup3_rocker_pane_ParamLimits

0x5cf2,	// (0x000950f6) mup3_rocker_pane

0x6306,	// (0x0009570a) mup3_control_keys_pane_g1

0x630e,	// (0x00095712) mup3_control_keys_pane_g2

0x6316,	// (0x0009571a) mup3_control_keys_pane_g3

0x631e,	// (0x00095722) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0009ec1c) mup3_control_keys_pane_g

0x0c4c,	// (0x00090050) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c4c,	// (0x00090050) popup_toolbar2_fixed_window_cp01

0x5d26,	// (0x0009512a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5d26,	// (0x0009512a) popup_toolbar2_fixed_window_cp02

0x3aa5,	// (0x00092ea9) popup_call2_audio_second_window_t4_ParamLimits

0x3aa5,	// (0x00092ea9) popup_call2_audio_second_window_t4

0x3fd3,	// (0x000933d7) popup_call2_audio_first_window_t6_ParamLimits

0x3fd3,	// (0x000933d7) popup_call2_audio_first_window_t6

0x4269,	// (0x0009366d) popup_call2_audio_out_window_t6_ParamLimits

0x4269,	// (0x0009366d) popup_call2_audio_out_window_t6

0xa0bf,	// (0x000994c3) main_vitu_pane

0x632e,	// (0x00095732) aid_size_cell_itu_ParamLimits

0x632e,	// (0x00095732) aid_size_cell_itu

0x47f9,	// (0x00093bfd) bg_popup_window_pane_cp08_ParamLimits

0x47f9,	// (0x00093bfd) bg_popup_window_pane_cp08

0x6344,	// (0x00095748) field_vitu_entry_pane_ParamLimits

0x6344,	// (0x00095748) field_vitu_entry_pane

0x635b,	// (0x0009575f) grid_vitu_function_pane_ParamLimits

0x635b,	// (0x0009575f) grid_vitu_function_pane

0x6376,	// (0x0009577a) grid_vitu_itu_pane_ParamLimits

0x6376,	// (0x0009577a) grid_vitu_itu_pane

0x6394,	// (0x00095798) cell_vitu_itu_pane_ParamLimits

0x6394,	// (0x00095798) cell_vitu_itu_pane

0x63b6,	// (0x000957ba) cell_vitu_function_pane_ParamLimits

0x63b6,	// (0x000957ba) cell_vitu_function_pane

0x47f9,	// (0x00093bfd) bg_popup_sub_pane_cp08_ParamLimits

0x47f9,	// (0x00093bfd) bg_popup_sub_pane_cp08

0x63cf,	// (0x000957d3) field_vitu_entry_pane_t1_ParamLimits

0x63cf,	// (0x000957d3) field_vitu_entry_pane_t1

0xafb5,	// (0x0009a3b9) field_vitu_entry_pane_t2_ParamLimits

0xafb5,	// (0x0009a3b9) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0009ec2a) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0009ec2a) field_vitu_entry_pane_t

0xafd2,	// (0x0009a3d6) bg_button_pane_cp05_ParamLimits

0xafd2,	// (0x0009a3d6) bg_button_pane_cp05

0x63ed,	// (0x000957f1) cell_vitu_itu_pane_g1

0x6405,	// (0x00095809) cell_vitu_itu_pane_t1_ParamLimits

0x6405,	// (0x00095809) cell_vitu_itu_pane_t1

0x6417,	// (0x0009581b) cell_vitu_itu_pane_t2_ParamLimits

0x6417,	// (0x0009581b) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0009ec2f) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0009ec2f) cell_vitu_itu_pane_t

0xafe0,	// (0x0009a3e4) bg_button_pane_cp07

0x644c,	// (0x00095850) cell_vitu_function_pane_g1

0xa0c9,	// (0x000994cd) main_calc_pane_g1

0x0a8c,	// (0x0008fe90) aid_visual_content_pane

0xa0bf,	// (0x000994c3) main_vradio_pane

0x6455,	// (0x00095859) main_vradio_pane_g1_ParamLimits

0x6455,	// (0x00095859) main_vradio_pane_g1

0xafea,	// (0x0009a3ee) main_vradio_pane_g2_ParamLimits

0xafea,	// (0x0009a3ee) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0009ec36) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0009ec36) main_vradio_pane_g

0x646e,	// (0x00095872) main_vradio_pane_t1_ParamLimits

0x646e,	// (0x00095872) main_vradio_pane_t1

0x6483,	// (0x00095887) main_vradio_pane_t2_ParamLimits

0x6483,	// (0x00095887) main_vradio_pane_t2

0xaff7,	// (0x0009a3fb) main_vradio_pane_t3_ParamLimits

0xaff7,	// (0x0009a3fb) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0009ec3b) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0009ec3b) main_vradio_pane_t

0x6498,	// (0x0009589c) vradio_rocker_control_pane_ParamLimits

0x6498,	// (0x0009589c) vradio_rocker_control_pane

0x64aa,	// (0x000958ae) vradio_station_info_pane_ParamLimits

0x64aa,	// (0x000958ae) vradio_station_info_pane

0xb00b,	// (0x0009a40f) vradio_frequency_info_pane_ParamLimits

0xb00b,	// (0x0009a40f) vradio_frequency_info_pane

0xa995,	// (0x00099d99) vradio_station_info_pane_g1

0xb01a,	// (0x0009a41e) vradio_station_info_pane_t1_ParamLimits

0xb01a,	// (0x0009a41e) vradio_station_info_pane_t1

0xb03c,	// (0x0009a440) vradio_station_info_pane_t2_ParamLimits

0xb03c,	// (0x0009a440) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0009ec42) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0009ec42) vradio_station_info_pane_t

0xb04e,	// (0x0009a452) vradio_tuning_pane

0xb056,	// (0x0009a45a) vradio_rocker_control_pane_g1

0xb05e,	// (0x0009a462) vradio_rocker_control_pane_g2

0xb066,	// (0x0009a46a) vradio_rocker_control_pane_g3

0xb06e,	// (0x0009a472) vradio_rocker_control_pane_g4

0xb076,	// (0x0009a47a) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0009ec47) vradio_rocker_control_pane_g

0x64bc,	// (0x000958c0) vradio_frequency_info_pane_g1

0xb07e,	// (0x0009a482) vradio_frequency_info_pane_t1_ParamLimits

0xb07e,	// (0x0009a482) vradio_frequency_info_pane_t1

0x64c6,	// (0x000958ca) vradio_tuning_pane_g1

0x64d1,	// (0x000958d5) vradio_tuning_pane_t1

0xa06f,	// (0x00099473) area_side_right_pane_ParamLimits

0xa06f,	// (0x00099473) area_side_right_pane

0xa456,	// (0x0009985a) status_small_pane_g1

0xa45e,	// (0x00099862) status_small_pane_g2

0xa467,	// (0x0009986b) status_small_pane_g3

0xa470,	// (0x00099874) status_small_pane_g4

0x0003,

0xf608,	// (0x0009ea0c) status_small_pane_g

0xa479,	// (0x0009987d) status_small_pane_t1

0xa0bf,	// (0x000994c3) main_video3_pane

0xb092,	// (0x0009a496) cams_zoom_vslider_pane

0xb09a,	// (0x0009a49e) image3_wide_pane_ParamLimits

0xb09a,	// (0x0009a49e) image3_wide_pane

0xb0b4,	// (0x0009a4b8) image3_wide_small_pane

0xb0c0,	// (0x0009a4c4) main_video3_pane_g1_ParamLimits

0xb0c0,	// (0x0009a4c4) main_video3_pane_g1

0xb0dc,	// (0x0009a4e0) main_video3_pane_g2_ParamLimits

0xb0dc,	// (0x0009a4e0) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0009ec52) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0009ec52) main_video3_pane_g

0xb0f8,	// (0x0009a4fc) main_video3_pane_t1_ParamLimits

0xb0f8,	// (0x0009a4fc) main_video3_pane_t1

0xb123,	// (0x0009a527) main_video3_pane_t2_ParamLimits

0xb123,	// (0x0009a527) main_video3_pane_t2

0xb14e,	// (0x0009a552) main_video3_pane_t3_ParamLimits

0xb14e,	// (0x0009a552) main_video3_pane_t3

0x0002,

0xf853,	// (0x0009ec57) main_video3_pane_t_ParamLimits

0xf853,	// (0x0009ec57) main_video3_pane_t

0xb17b,	// (0x0009a57f) cams_zoom_vslider_pane_g1

0xb184,	// (0x0009a588) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0009ec5e) cams_zoom_vslider_pane_g

0xb18c,	// (0x0009a590) small_slider_vertical_pane

0xa995,	// (0x00099d99) small_slider_vertical_pane_g1

0xa995,	// (0x00099d99) small_slider_vertical_pane_g2

0xb194,	// (0x0009a598) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0009ec63) small_slider_vertical_pane_g

0xa0bf,	// (0x000994c3) main_hwr_training_pane

0xb19d,	// (0x0009a5a1) hwr_training_instruct_pane_ParamLimits

0xb19d,	// (0x0009a5a1) hwr_training_instruct_pane

0x64e0,	// (0x000958e4) hwr_training_navi_pane_ParamLimits

0x64e0,	// (0x000958e4) hwr_training_navi_pane

0x64ff,	// (0x00095903) hwr_training_write_pane_ParamLimits

0x64ff,	// (0x00095903) hwr_training_write_pane

0xec5a,	// (0x0009e05e) bg_frame_shadow_pane

0xb1d4,	// (0x0009a5d8) hwr_training_write_pane_g1

0xb1dc,	// (0x0009a5e0) hwr_training_write_pane_g2

0xb1e4,	// (0x0009a5e8) hwr_training_write_pane_g3

0xb1ec,	// (0x0009a5f0) hwr_training_write_pane_g4

0xb1f4,	// (0x0009a5f8) hwr_training_write_pane_g5

0xb1fc,	// (0x0009a600) hwr_training_write_pane_g6

0xb204,	// (0x0009a608) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0009ec6a) hwr_training_write_pane_g

0xb20c,	// (0x0009a610) hwr_training_navi_pane_g1_ParamLimits

0xb20c,	// (0x0009a610) hwr_training_navi_pane_g1

0xb21e,	// (0x0009a622) hwr_training_navi_pane_g2_ParamLimits

0xb21e,	// (0x0009a622) hwr_training_navi_pane_g2

0xb230,	// (0x0009a634) hwr_training_navi_pane_g3_ParamLimits

0xb230,	// (0x0009a634) hwr_training_navi_pane_g3

0xb240,	// (0x0009a644) hwr_training_navi_pane_g4_ParamLimits

0xb240,	// (0x0009a644) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0009ec79) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0009ec79) hwr_training_navi_pane_g

0xb24d,	// (0x0009a651) hwr_training_navi_pane_t1

0x6547,	// (0x0009594b) list_single_hwr_training_instruct_pane_ParamLimits

0x6547,	// (0x0009594b) list_single_hwr_training_instruct_pane

0xb25b,	// (0x0009a65f) list_single_hwr_training_instruct_pane_t1

0xa8d5,	// (0x00099cd9) bg_frame_shadow_pane_g1

0xb26a,	// (0x0009a66e) bg_frame_shadow_pane_g2

0xb272,	// (0x0009a676) bg_frame_shadow_pane_g3

0xb27a,	// (0x0009a67e) bg_frame_shadow_pane_g4

0xb282,	// (0x0009a686) bg_frame_shadow_pane_g5

0xb28a,	// (0x0009a68e) bg_frame_shadow_pane_g6

0xb292,	// (0x0009a696) bg_frame_shadow_pane_g7

0xe194,	// (0x0009d598) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0009ec84) bg_frame_shadow_pane_g

0xa0bf,	// (0x000994c3) main_video_tele_dialer_pane

0x655c,	// (0x00095960) aid_size_cell_video_keypad_ParamLimits

0x655c,	// (0x00095960) aid_size_cell_video_keypad

0x6576,	// (0x0009597a) grid_video_dialer_keypad_pane_ParamLimits

0x6576,	// (0x0009597a) grid_video_dialer_keypad_pane

0x65c0,	// (0x000959c4) video_down_pane_cp_ParamLimits

0x65c0,	// (0x000959c4) video_down_pane_cp

0x65d0,	// (0x000959d4) cell_video_dialer_keypad_pane_ParamLimits

0x65d0,	// (0x000959d4) cell_video_dialer_keypad_pane

0xb2b6,	// (0x0009a6ba) bg_button_pane_cp08_ParamLimits

0xb2b6,	// (0x0009a6ba) bg_button_pane_cp08

0x65f2,	// (0x000959f6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x65f2,	// (0x000959f6) cell_video_dialer_keypad_pane_g1

0x5cdc,	// (0x000950e0) mup3_rocker2_pane_ParamLimits

0x5cdc,	// (0x000950e0) mup3_rocker2_pane

0xa995,	// (0x00099d99) mup3_rocker2_pane_g1

0x4807,	// (0x00093c0b) main_dialer2_pane

0xa0bf,	// (0x000994c3) main_mp4_pane

0xb2ca,	// (0x0009a6ce) main_mp4_pane_g1_ParamLimits

0xb2ca,	// (0x0009a6ce) main_mp4_pane_g1

0xb2ca,	// (0x0009a6ce) main_mp4_pane_g2_ParamLimits

0xb2ca,	// (0x0009a6ce) main_mp4_pane_g2

0x662c,	// (0x00095a30) main_mp4_pane_g3_ParamLimits

0x662c,	// (0x00095a30) main_mp4_pane_g3

0xb2d8,	// (0x0009a6dc) main_mp4_pane_g4_ParamLimits

0xb2d8,	// (0x0009a6dc) main_mp4_pane_g4

0xb300,	// (0x0009a704) main_mp4_pane_g5_ParamLimits

0xb300,	// (0x0009a704) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0009eca4) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0009eca4) main_mp4_pane_g

0xb350,	// (0x0009a754) main_mp4_pane_t1_ParamLimits

0xb350,	// (0x0009a754) main_mp4_pane_t1

0xb3ac,	// (0x0009a7b0) main_mp4_pane_t2_ParamLimits

0xb3ac,	// (0x0009a7b0) main_mp4_pane_t2

0xb3fe,	// (0x0009a802) main_mp4_pane_t3_ParamLimits

0xb3fe,	// (0x0009a802) main_mp4_pane_t3

0xb41e,	// (0x0009a822) main_mp4_pane_t4_ParamLimits

0xb41e,	// (0x0009a822) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0009ecb1) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0009ecb1) main_mp4_pane_t

0xb462,	// (0x0009a866) mp4_progress_pane_ParamLimits

0xb462,	// (0x0009a866) mp4_progress_pane

0xb4ac,	// (0x0009a8b0) mp4_rocker_pane_ParamLimits

0xb4ac,	// (0x0009a8b0) mp4_rocker_pane

0xb4d4,	// (0x0009a8d8) mp4_progress_pane_t1

0xb4ed,	// (0x0009a8f1) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0009ecba) mp4_progress_pane_t

0xb506,	// (0x0009a90a) mup_progress_pane_cp04

0xb512,	// (0x0009a916) mp4_rocker_pane_g1

0x6668,	// (0x00095a6c) aid_cell_size_keypad2_ParamLimits

0x6668,	// (0x00095a6c) aid_cell_size_keypad2

0x667e,	// (0x00095a82) dialer2_ne_pane_ParamLimits

0x667e,	// (0x00095a82) dialer2_ne_pane

0x6698,	// (0x00095a9c) grid_dialer2_keypad_pane_ParamLimits

0x6698,	// (0x00095a9c) grid_dialer2_keypad_pane

0xa77a,	// (0x00099b7e) bg_popup_call_pane_cp07_ParamLimits

0xa77a,	// (0x00099b7e) bg_popup_call_pane_cp07

0x66b4,	// (0x00095ab8) dialer2_ne_pane_t1_ParamLimits

0x66b4,	// (0x00095ab8) dialer2_ne_pane_t1

0x66ef,	// (0x00095af3) cell_dialer2_keypad_pane_ParamLimits

0x66ef,	// (0x00095af3) cell_dialer2_keypad_pane

0xb52e,	// (0x0009a932) bg_button_pane_pane_cp04_ParamLimits

0xb52e,	// (0x0009a932) bg_button_pane_pane_cp04

0x6711,	// (0x00095b15) cell_dialer2_keypad_pane_g1_ParamLimits

0x6711,	// (0x00095b15) cell_dialer2_keypad_pane_g1

0x1a72,	// (0x00090e76) aid_placing_vt_set_content_ParamLimits

0x1a72,	// (0x00090e76) aid_placing_vt_set_content

0x1a9a,	// (0x00090e9e) aid_placing_vt_set_title_ParamLimits

0x1a9a,	// (0x00090e9e) aid_placing_vt_set_title

0xa0bf,	// (0x000994c3) main_image3_pane

0x67d7,	// (0x00095bdb) area_side_right_pane_cp01_ParamLimits

0x67d7,	// (0x00095bdb) area_side_right_pane_cp01

0xb2ca,	// (0x0009a6ce) main_image3_pane_g1_ParamLimits

0xb2ca,	// (0x0009a6ce) main_image3_pane_g1

0x67ee,	// (0x00095bf2) main_image3_pane_g2_ParamLimits

0x67ee,	// (0x00095bf2) main_image3_pane_g2

0x6816,	// (0x00095c1a) main_image3_pane_g3_ParamLimits

0x6816,	// (0x00095c1a) main_image3_pane_g3

0x6840,	// (0x00095c44) main_image3_pane_g4_ParamLimits

0x6840,	// (0x00095c44) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0009ecc9) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0009ecc9) main_image3_pane_g

0x686a,	// (0x00095c6e) main_image3_pane_t1_ParamLimits

0x686a,	// (0x00095c6e) main_image3_pane_t1

0x68c2,	// (0x00095cc6) main_image3_pane_t2_ParamLimits

0x68c2,	// (0x00095cc6) main_image3_pane_t2

0x6914,	// (0x00095d18) main_image3_pane_t3_ParamLimits

0x6914,	// (0x00095d18) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0009ecd2) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0009ecd2) main_image3_pane_t

0x47f9,	// (0x00093bfd) grid_sctrl_middle_pane_cp01_ParamLimits

0x47f9,	// (0x00093bfd) grid_sctrl_middle_pane_cp01

0x699c,	// (0x00095da0) cell_sctrl_middle_pane_cp01_ParamLimits

0x699c,	// (0x00095da0) cell_sctrl_middle_pane_cp01

0x69b9,	// (0x00095dbd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x69b9,	// (0x00095dbd) cell_sctrl_middle_pane_cp01_g1

0xa0bf,	// (0x000994c3) main_call4_pane

0x69cf,	// (0x00095dd3) aid_size_button_call4_ParamLimits

0x69cf,	// (0x00095dd3) aid_size_button_call4

0x6a00,	// (0x00095e04) call4_windows_pane_ParamLimits

0x6a00,	// (0x00095e04) call4_windows_pane

0x6a20,	// (0x00095e24) grid_call4_button_pane_ParamLimits

0x6a20,	// (0x00095e24) grid_call4_button_pane

0xb56c,	// (0x0009a970) call4_windows_conf_pane

0xb583,	// (0x0009a987) popup_call4_audio_first_window_ParamLimits

0xb583,	// (0x0009a987) popup_call4_audio_first_window

0xb5cf,	// (0x0009a9d3) popup_call4_audio_second_window_ParamLimits

0xb5cf,	// (0x0009a9d3) popup_call4_audio_second_window

0xb5e3,	// (0x0009a9e7) popup_call4_audio_wait_window_ParamLimits

0xb5e3,	// (0x0009a9e7) popup_call4_audio_wait_window

0x6a4d,	// (0x00095e51) cell_call4_button_pane_ParamLimits

0x6a4d,	// (0x00095e51) cell_call4_button_pane

0x6a76,	// (0x00095e7a) bg_button_pane_cp09_ParamLimits

0x6a76,	// (0x00095e7a) bg_button_pane_cp09

0x6a82,	// (0x00095e86) cell_call4_button_pane_g1_ParamLimits

0x6a82,	// (0x00095e86) cell_call4_button_pane_g1

0x6aa8,	// (0x00095eac) cell_call4_button_pane_t1_ParamLimits

0x6aa8,	// (0x00095eac) cell_call4_button_pane_t1

0xb62b,	// (0x0009aa2f) popup_call4_audio_conf_window_ParamLimits

0xb62b,	// (0x0009aa2f) popup_call4_audio_conf_window

0x5d3c,	// (0x00095140) mup3_progress_pane_t1_ParamLimits

0x5d5b,	// (0x0009515f) mup3_progress_pane_t2_ParamLimits

0xacb4,	// (0x0009a0b8) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0009ebb0) mup3_progress_pane_t_ParamLimits

0xacd1,	// (0x0009a0d5) mup_progress_pane_cp03_ParamLimits

0x6326,	// (0x0009572a) mup3_control_keys_pane_g4_copy1

0xb490,	// (0x0009a894) mp4_rocker2_pane_ParamLimits

0xb490,	// (0x0009a894) mp4_rocker2_pane

0xb63f,	// (0x0009aa43) mp4_rocker2_pane_g1

0xb647,	// (0x0009aa4b) mp4_rocker2_pane_g2

0xdada,	// (0x0009cede) mp4_rocker2_pane_g3

0xdae2,	// (0x0009cee6) mp4_rocker2_pane_g4

0xdaea,	// (0x0009ceee) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0009ecdb) mp4_rocker2_pane_g

0xa0bf,	// (0x000994c3) main_camera4_pane

0xa0bf,	// (0x000994c3) main_video4_pane

0x658e,	// (0x00095992) main_video_tele_dialer_pane_t1_ParamLimits

0x658e,	// (0x00095992) main_video_tele_dialer_pane_t1

0x65a7,	// (0x000959ab) main_video_tele_dialer_pane_t2_ParamLimits

0x65a7,	// (0x000959ab) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0009ec95) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0009ec95) main_video_tele_dialer_pane_t

0x6ae6,	// (0x00095eea) cam4_autofocus_pane_ParamLimits

0x6ae6,	// (0x00095eea) cam4_autofocus_pane

0x6afc,	// (0x00095f00) cam4_image_uncrop_pane_ParamLimits

0x6afc,	// (0x00095f00) cam4_image_uncrop_pane

0x6b16,	// (0x00095f1a) cam4_indicators_pane_ParamLimits

0x6b16,	// (0x00095f1a) cam4_indicators_pane

0x6b41,	// (0x00095f45) main_camera4_pane_g1_ParamLimits

0x6b41,	// (0x00095f45) main_camera4_pane_g1

0x6b53,	// (0x00095f57) main_camera4_pane_g2_ParamLimits

0x6b53,	// (0x00095f57) main_camera4_pane_g2

0x6b66,	// (0x00095f6a) main_camera4_pane_g3_ParamLimits

0x6b66,	// (0x00095f6a) main_camera4_pane_g3

0x6b79,	// (0x00095f7d) main_camera4_pane_g4_ParamLimits

0x6b79,	// (0x00095f7d) main_camera4_pane_g4

0x6b8c,	// (0x00095f90) main_camera4_pane_g5_ParamLimits

0x6b8c,	// (0x00095f90) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0009ece6) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0009ece6) main_camera4_pane_g

0x6bb0,	// (0x00095fb4) main_camera4_pane_t1_ParamLimits

0x6bb0,	// (0x00095fb4) main_camera4_pane_t1

0xdb0e,	// (0x0009cf12) bg_tb_trans_pane_cp06

0xdb24,	// (0x0009cf28) cam4_indicators_pane_g1

0xdb35,	// (0x0009cf39) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0009ed01) cam4_indicators_pane_g

0xdb53,	// (0x0009cf57) cam4_indicators_pane_t1

0x6c14,	// (0x00096018) main_video4_pane_g1_ParamLimits

0x6c14,	// (0x00096018) main_video4_pane_g1

0x6c23,	// (0x00096027) main_video4_pane_g2_ParamLimits

0x6c23,	// (0x00096027) main_video4_pane_g2

0x6c32,	// (0x00096036) main_video4_pane_g3_ParamLimits

0x6c32,	// (0x00096036) main_video4_pane_g3

0x6c41,	// (0x00096045) main_video4_pane_g4_ParamLimits

0x6c41,	// (0x00096045) main_video4_pane_g4

0x0004,

0xf904,	// (0x0009ed08) main_video4_pane_g_ParamLimits

0xf904,	// (0x0009ed08) main_video4_pane_g

0x6c5f,	// (0x00096063) vid4_indicators_pane_ParamLimits

0x6c5f,	// (0x00096063) vid4_indicators_pane

0x6c8d,	// (0x00096091) video4_image_uncrop_cif_pane_ParamLimits

0x6c8d,	// (0x00096091) video4_image_uncrop_cif_pane

0x6ca7,	// (0x000960ab) video4_image_uncrop_nhd_pane_ParamLimits

0x6ca7,	// (0x000960ab) video4_image_uncrop_nhd_pane

0x6afc,	// (0x00095f00) video4_image_uncrop_vga_pane_ParamLimits

0x6afc,	// (0x00095f00) video4_image_uncrop_vga_pane

0xa0b1,	// (0x000994b5) bg_tb_trans_pane_cp07

0xdb7f,	// (0x0009cf83) vid4_indicators_pane_g1

0xdb93,	// (0x0009cf97) vid4_indicators_pane_g2

0xdba7,	// (0x0009cfab) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0009ed13) vid4_indicators_pane_g

0xdbd6,	// (0x0009cfda) vid4_indicators_pane_t1

0x6cbb,	// (0x000960bf) cam4_autofocus_pane_g1

0x6cc3,	// (0x000960c7) cam4_autofocus_pane_g2

0x6ccb,	// (0x000960cf) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0009ed1e) cam4_autofocus_pane_g

0x6cd3,	// (0x000960d7) cam4_autofocus_pane_g3_copy1

0xb29a,	// (0x0009a69e) video_down_pane_cp_t1

0xb2a8,	// (0x0009a6ac) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0009ec9a) video_down_pane_cp_t

0xa0b1,	// (0x000994b5) popup_vitu2_window_ParamLimits

0xa0b1,	// (0x000994b5) popup_vitu2_window

0x6cdb,	// (0x000960df) aid_size_cell2_itu2_ParamLimits

0x6cdb,	// (0x000960df) aid_size_cell2_itu2

0x6d01,	// (0x00096105) aid_size_cell_itu2_ParamLimits

0x6d01,	// (0x00096105) aid_size_cell_itu2

0x6d5d,	// (0x00096161) bg_popup_window_pane_cp09_ParamLimits

0x6d5d,	// (0x00096161) bg_popup_window_pane_cp09

0x6d6b,	// (0x0009616f) field_vitu2_entry_pane_ParamLimits

0x6d6b,	// (0x0009616f) field_vitu2_entry_pane

0x6d91,	// (0x00096195) grid_vitu2_function_pane_ParamLimits

0x6d91,	// (0x00096195) grid_vitu2_function_pane

0x6de2,	// (0x000961e6) grid_vitu2_itu_pane_ParamLimits

0x6de2,	// (0x000961e6) grid_vitu2_itu_pane

0x6e75,	// (0x00096279) cell_vitu2_itu_pane_ParamLimits

0x6e75,	// (0x00096279) cell_vitu2_itu_pane

0x6e99,	// (0x0009629d) cell_vitu2_function_pane_ParamLimits

0x6e99,	// (0x0009629d) cell_vitu2_function_pane

0xb661,	// (0x0009aa65) bg_popup_call_pane_cp08_ParamLimits

0xb661,	// (0x0009aa65) bg_popup_call_pane_cp08

0xb67a,	// (0x0009aa7e) field_vitu2_entry_pane_g1

0xb686,	// (0x0009aa8a) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0009ed25) field_vitu2_entry_pane_g

0xb6a0,	// (0x0009aaa4) field_vitu2_entry_pane_t1_ParamLimits

0xb6a0,	// (0x0009aaa4) field_vitu2_entry_pane_t1

0xb6cf,	// (0x0009aad3) field_vitu2_entry_pane_t2_ParamLimits

0xb6cf,	// (0x0009aad3) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0009ed2c) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0009ed2c) field_vitu2_entry_pane_t

0x6ed8,	// (0x000962dc) bg_button_pane_cp010_ParamLimits

0x6ed8,	// (0x000962dc) bg_button_pane_cp010

0x6ee6,	// (0x000962ea) cell_vitu2_itu_pane_g1

0x6f04,	// (0x00096308) cell_vitu2_itu_pane_t1_ParamLimits

0x6f04,	// (0x00096308) cell_vitu2_itu_pane_t1

0x0974,	// (0x0008fd78) cell_vitu2_itu_pane_t2_ParamLimits

0x0974,	// (0x0008fd78) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0009ed36) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0009ed36) cell_vitu2_itu_pane_t

0xa0b1,	// (0x000994b5) bg_button_pane_cp011

0x6f6a,	// (0x0009636e) cell_vitu2_function_pane_g1

0xa0bf,	// (0x000994c3) main_myfav_hc_pane

0x6964,	// (0x00095d68) popup_image3_note_pane_ParamLimits

0x6964,	// (0x00095d68) popup_image3_note_pane

0x6980,	// (0x00095d84) popup_image3_tool_bar_pane_ParamLimits

0x6980,	// (0x00095d84) popup_image3_tool_bar_pane

0x09f8,	// (0x0008fdfc) cell_vitu2_itu_pane_t3_ParamLimits

0x09f8,	// (0x0008fdfc) cell_vitu2_itu_pane_t3

0xec5a,	// (0x0009e05e) bg_popup_trans_pane

0xb6f4,	// (0x0009aaf8) grid_image3_tool_bar_pane

0xb6fe,	// (0x0009ab02) bg_popup_trans_pane_g1

0xe4d1,	// (0x0009d8d5) bg_popup_trans_pane_g2

0xb706,	// (0x0009ab0a) bg_popup_trans_pane_g3

0xb70e,	// (0x0009ab12) bg_popup_trans_pane_g4

0xb716,	// (0x0009ab1a) bg_popup_trans_pane_g5

0xb71e,	// (0x0009ab22) bg_popup_trans_pane_g6

0xb726,	// (0x0009ab2a) bg_popup_trans_pane_g7

0xb72e,	// (0x0009ab32) bg_popup_trans_pane_g8

0xe4b1,	// (0x0009d8b5) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0009ed3d) bg_popup_trans_pane_g

0xb736,	// (0x0009ab3a) cell_image3_tool_bar_pane_ParamLimits

0xb736,	// (0x0009ab3a) cell_image3_tool_bar_pane

0xa995,	// (0x00099d99) cell_image3_tool_bar_pane_g1

0xec5a,	// (0x0009e05e) bg_popup_trans_pane_cp1

0xb74a,	// (0x0009ab4e) popup_image3_note_pane_t1

0xb758,	// (0x0009ab5c) popup_image3_note_pane_t2

0xb766,	// (0x0009ab6a) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0009ed50) popup_image3_note_pane_t

0xb774,	// (0x0009ab78) popup_image3_note_pane_t3_copy1

0x6f7e,	// (0x00096382) bg_myfav_hc_instruction_pane_ParamLimits

0x6f7e,	// (0x00096382) bg_myfav_hc_instruction_pane

0x6f92,	// (0x00096396) cell_myfav_contact_pane_ParamLimits

0x6f92,	// (0x00096396) cell_myfav_contact_pane

0x6fb0,	// (0x000963b4) cell_myfav_contact_pane_cp1_ParamLimits

0x6fb0,	// (0x000963b4) cell_myfav_contact_pane_cp1

0x6fc8,	// (0x000963cc) cell_myfav_contact_pane_cp2_ParamLimits

0x6fc8,	// (0x000963cc) cell_myfav_contact_pane_cp2

0x6fe0,	// (0x000963e4) cell_myfav_contact_pane_cp3_ParamLimits

0x6fe0,	// (0x000963e4) cell_myfav_contact_pane_cp3

0x6ff7,	// (0x000963fb) cell_myfav_contact_pane_cp4_ParamLimits

0x6ff7,	// (0x000963fb) cell_myfav_contact_pane_cp4

0x700f,	// (0x00096413) cell_myfav_contact_pane_cp5_ParamLimits

0x700f,	// (0x00096413) cell_myfav_contact_pane_cp5

0x7023,	// (0x00096427) cell_myfav_contact_pane_cp6_ParamLimits

0x7023,	// (0x00096427) cell_myfav_contact_pane_cp6

0x7039,	// (0x0009643d) cell_myfav_contact_pane_cp7_ParamLimits

0x7039,	// (0x0009643d) cell_myfav_contact_pane_cp7

0xb782,	// (0x0009ab86) listscroll_gen_pane_cp05

0x7053,	// (0x00096457) main_myfav_hc_pane_g1_ParamLimits

0x7053,	// (0x00096457) main_myfav_hc_pane_g1

0x706d,	// (0x00096471) main_myfav_hc_pane_g2_ParamLimits

0x706d,	// (0x00096471) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0009ed57) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0009ed57) main_myfav_hc_pane_g

0x709f,	// (0x000964a3) main_myfav_hc_pane_t1_ParamLimits

0x709f,	// (0x000964a3) main_myfav_hc_pane_t1

0xb78b,	// (0x0009ab8f) main_myfav_hc_pane_t2_ParamLimits

0xb78b,	// (0x0009ab8f) main_myfav_hc_pane_t2

0xb79d,	// (0x0009aba1) main_myfav_hc_pane_t3_ParamLimits

0xb79d,	// (0x0009aba1) main_myfav_hc_pane_t3

0x70b6,	// (0x000964ba) main_myfav_hc_pane_t4_ParamLimits

0x70b6,	// (0x000964ba) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0009ed5e) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0009ed5e) main_myfav_hc_pane_t

0xa995,	// (0x00099d99) bg_myfav_hc_instruction_pane_g1

0xb7af,	// (0x0009abb3) cell_myfav_contact_pane_g1_ParamLimits

0xb7af,	// (0x0009abb3) cell_myfav_contact_pane_g1

0xb7af,	// (0x0009abb3) cell_myfav_contact_pane_g2_ParamLimits

0xb7af,	// (0x0009abb3) cell_myfav_contact_pane_g2

0xb7bb,	// (0x0009abbf) cell_myfav_contact_pane_g3_ParamLimits

0xb7bb,	// (0x0009abbf) cell_myfav_contact_pane_g3

0xac9e,	// (0x0009a0a2) cell_myfav_contact_pane_g4_ParamLimits

0xac9e,	// (0x0009a0a2) cell_myfav_contact_pane_g4

0xb7c8,	// (0x0009abcc) cell_myfav_contact_pane_g5_ParamLimits

0xb7c8,	// (0x0009abcc) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0009ed69) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0009ed69) cell_myfav_contact_pane_g

0x7087,	// (0x0009648b) main_myfav_hc_pane_g3_ParamLimits

0x7087,	// (0x0009648b) main_myfav_hc_pane_g3

0x0bae,	// (0x0008ffb2) popup_adpt_find_window

0x70de,	// (0x000964e2) afind_page_pane_ParamLimits

0x70de,	// (0x000964e2) afind_page_pane

0x70f3,	// (0x000964f7) aid_size_cell_afind_ParamLimits

0x70f3,	// (0x000964f7) aid_size_cell_afind

0x7111,	// (0x00096515) bg_popup_sub_pane_cp09_ParamLimits

0x7111,	// (0x00096515) bg_popup_sub_pane_cp09

0x711e,	// (0x00096522) find_pane_cp01_ParamLimits

0x711e,	// (0x00096522) find_pane_cp01

0xb7d4,	// (0x0009abd8) grid_afind_control_pane_ParamLimits

0xb7d4,	// (0x0009abd8) grid_afind_control_pane

0x712b,	// (0x0009652f) grid_afind_pane_ParamLimits

0x712b,	// (0x0009652f) grid_afind_pane

0x714d,	// (0x00096551) cell_afind_pane_ParamLimits

0x714d,	// (0x00096551) cell_afind_pane

0xa995,	// (0x00099d99) afind_page_pane_g1

0x71ae,	// (0x000965b2) afind_page_pane_g2

0x71b7,	// (0x000965bb) afind_page_pane_g3

0x0002,

0xf970,	// (0x0009ed74) afind_page_pane_g

0x71c0,	// (0x000965c4) afind_page_pane_t1

0xb7e8,	// (0x0009abec) cell_afind_grid_control_pane_ParamLimits

0xb7e8,	// (0x0009abec) cell_afind_grid_control_pane

0xb52e,	// (0x0009a932) bg_button_pane_cp69_ParamLimits

0xb52e,	// (0x0009a932) bg_button_pane_cp69

0x71e0,	// (0x000965e4) cell_afind_pane_g1_ParamLimits

0x71e0,	// (0x000965e4) cell_afind_pane_g1

0x71ed,	// (0x000965f1) cell_afind_pane_t1_ParamLimits

0x71ed,	// (0x000965f1) cell_afind_pane_t1

0xe2ca,	// (0x0009d6ce) bg_button_pane_cp72

0xb7f7,	// (0x0009abfb) cell_afind_grid_control_pane_g1

0x3614,	// (0x00092a18) aid_image_placing_area_ParamLimits

0x3614,	// (0x00092a18) aid_image_placing_area

0xaf9d,	// (0x0009a3a1) field_vitu_entry_pane_g1_ParamLimits

0xaf9d,	// (0x0009a3a1) field_vitu_entry_pane_g1

0xafa9,	// (0x0009a3ad) field_vitu_entry_pane_g2_ParamLimits

0xafa9,	// (0x0009a3ad) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0009ec25) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0009ec25) field_vitu_entry_pane_g

0x63ed,	// (0x000957f1) cell_vitu_itu_pane_g1_ParamLimits

0x642f,	// (0x00095833) cell_vitu_itu_pane_t3_ParamLimits

0x642f,	// (0x00095833) cell_vitu_itu_pane_t3

0xb4d4,	// (0x0009a8d8) mp4_progress_pane_t1_ParamLimits

0xb4ed,	// (0x0009a8f1) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0009ecba) mp4_progress_pane_t_ParamLimits

0xb506,	// (0x0009a90a) mup_progress_pane_cp04_ParamLimits

0x70ca,	// (0x000964ce) main_myfav_hc_pane_t5_ParamLimits

0x70ca,	// (0x000964ce) main_myfav_hc_pane_t5

0xa05f,	// (0x00099463) aid_zoom_text_primary

0x0bae,	// (0x0008ffb2) popup_adpt_find_window_ParamLimits

0xa0b1,	// (0x000994b5) main_cam_set_pane

0x6b2d,	// (0x00095f31) cam4_zoom_pane_ParamLimits

0x6b2d,	// (0x00095f31) cam4_zoom_pane

0x71ff,	// (0x00096603) main_cam_set_pane_g1_ParamLimits

0x71ff,	// (0x00096603) main_cam_set_pane_g1

0x720d,	// (0x00096611) main_cam_set_pane_g2_ParamLimits

0x720d,	// (0x00096611) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0009ed7b) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0009ed7b) main_cam_set_pane_g

0x722e,	// (0x00096632) main_cam_set_pane_t1_ParamLimits

0x722e,	// (0x00096632) main_cam_set_pane_t1

0x7249,	// (0x0009664d) main_cset_listscroll_pane_ParamLimits

0x7249,	// (0x0009664d) main_cset_listscroll_pane

0x7269,	// (0x0009666d) main_cset_slider_pane_ParamLimits

0x7269,	// (0x0009666d) main_cset_slider_pane

0xb808,	// (0x0009ac0c) main_cset_list_pane_ParamLimits

0xb808,	// (0x0009ac0c) main_cset_list_pane

0xb818,	// (0x0009ac1c) scroll_pane_cp028

0x728f,	// (0x00096693) aid_area_touch_slider

0x72ab,	// (0x000966af) cset_slider_pane

0x72d5,	// (0x000966d9) main_cset_slider_pane_g1

0x72ea,	// (0x000966ee) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0009ed80) main_cset_slider_pane_g

0xb851,	// (0x0009ac55) main_cset_slider_pane_t1

0x73a6,	// (0x000967aa) main_cset_slider_pane_t2

0x73c0,	// (0x000967c4) main_cset_slider_pane_t3

0x73da,	// (0x000967de) main_cset_slider_pane_t4

0x73f4,	// (0x000967f8) main_cset_slider_pane_t5

0x740e,	// (0x00096812) main_cset_slider_pane_t6

0x7423,	// (0x00096827) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0009eda5) main_cset_slider_pane_t

0x7527,	// (0x0009692b) cset_list_set_pane_ParamLimits

0x7527,	// (0x0009692b) cset_list_set_pane

0x7539,	// (0x0009693d) aid_position_infowindow_above

0x7541,	// (0x00096945) aid_position_infowindow_below

0xb8f1,	// (0x0009acf5) cset_list_set_pane_g1_ParamLimits

0xb8f1,	// (0x0009acf5) cset_list_set_pane_g1

0xb8fd,	// (0x0009ad01) cset_list_set_pane_g3_ParamLimits

0xb8fd,	// (0x0009ad01) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0009edc4) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0009edc4) cset_list_set_pane_g

0xb90c,	// (0x0009ad10) cset_list_set_pane_t1_ParamLimits

0xb90c,	// (0x0009ad10) cset_list_set_pane_t1

0x47f9,	// (0x00093bfd) list_highlight_pane_cp021_ParamLimits

0x47f9,	// (0x00093bfd) list_highlight_pane_cp021

0xed08,	// (0x0009e10c) cset_slider_pane_g1

0xed1a,	// (0x0009e11e) cset_slider_pane_g2

0xed11,	// (0x0009e115) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0009edc9) cset_slider_pane_g

0xdbed,	// (0x0009cff1) aid_area_touch_cam4_zoom

0xdbf5,	// (0x0009cff9) cam4_zoom_cont_pane

0xdbfd,	// (0x0009d001) cam4_zoom_pane_g1

0xdc05,	// (0x0009d009) cam4_zoom_pane_g2

0x7549,	// (0x0009694d) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0009edd0) cam4_zoom_pane_g

0xdc0d,	// (0x0009d011) cam4_zoom_cont_pane_g1

0xdc16,	// (0x0009d01a) cam4_zoom_cont_pane_g2

0xdc1f,	// (0x0009d023) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0009edd7) cam4_zoom_cont_pane_g

0x69ed,	// (0x00095df1) call4_image_pane_ParamLimits

0x69ed,	// (0x00095df1) call4_image_pane

0xb56c,	// (0x0009a970) call4_windows_conf_pane_ParamLimits

0xb5ad,	// (0x0009a9b1) popup_call4_audio_in_window_ParamLimits

0xb5ad,	// (0x0009a9b1) popup_call4_audio_in_window

0xec5a,	// (0x0009e05e) bg_popup_call2_act_pane_cp02

0xb623,	// (0x0009aa27) call4_list_conf_pane

0xa995,	// (0x00099d99) call4_image_pane_g1

0xa995,	// (0x00099d99) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x0009eaf0) call4_image_pane_g

0xb921,	// (0x0009ad25) list_single_graphic_popup_conf4_pane_ParamLimits

0xb921,	// (0x0009ad25) list_single_graphic_popup_conf4_pane

0xec5a,	// (0x0009e05e) list_highlight_pane_cp022

0xb934,	// (0x0009ad38) list_single_graphic_popup_conf4_pane_g1

0xe9c3,	// (0x0009ddc7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0009edde) list_single_graphic_popup_conf4_pane_g

0xb93c,	// (0x0009ad40) list_single_graphic_popup_conf4_pane_t1

0x1bbe,	// (0x00090fc2) popup_vtel_slider_window_ParamLimits

0x1bbe,	// (0x00090fc2) popup_vtel_slider_window

0xb51c,	// (0x0009a920) dialer2_ne_pane_t2_ParamLimits

0xb51c,	// (0x0009a920) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0009ecbf) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0009ecbf) dialer2_ne_pane_t

0xa77a,	// (0x00099b7e) bg_popup_sub_pane_cp010_ParamLimits

0xa77a,	// (0x00099b7e) bg_popup_sub_pane_cp010

0x7551,	// (0x00096955) popup_vtel_slider_window_g1_ParamLimits

0x7551,	// (0x00096955) popup_vtel_slider_window_g1

0x7564,	// (0x00096968) popup_vtel_slider_window_g2_ParamLimits

0x7564,	// (0x00096968) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0009ede3) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0009ede3) popup_vtel_slider_window_g

0x75ba,	// (0x000969be) vtel_slider_pane_ParamLimits

0x75ba,	// (0x000969be) vtel_slider_pane

0x75dc,	// (0x000969e0) vtel_slider_pane_g1_ParamLimits

0x75dc,	// (0x000969e0) vtel_slider_pane_g1

0x75f0,	// (0x000969f4) vtel_slider_pane_g2_ParamLimits

0x75f0,	// (0x000969f4) vtel_slider_pane_g2

0x7608,	// (0x00096a0c) vtel_slider_pane_g3_ParamLimits

0x7608,	// (0x00096a0c) vtel_slider_pane_g3

0x75dc,	// (0x000969e0) vtel_slider_pane_g4_ParamLimits

0x75dc,	// (0x000969e0) vtel_slider_pane_g4

0x761e,	// (0x00096a22) vtel_slider_pane_g5_ParamLimits

0x761e,	// (0x00096a22) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0009edec) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0009edec) vtel_slider_pane_g

0xa0bf,	// (0x000994c3) main_gallery2_pane

0x6d2d,	// (0x00096131) aid_size_row_itut2_dropdow_list_ParamLimits

0x6d2d,	// (0x00096131) aid_size_row_itut2_dropdow_list

0x6db9,	// (0x000961bd) grid_vitu2_function_top_pane_ParamLimits

0x6db9,	// (0x000961bd) grid_vitu2_function_top_pane

0x6e1e,	// (0x00096222) popup_vitu2_dropdown_list_window_ParamLimits

0x6e1e,	// (0x00096222) popup_vitu2_dropdown_list_window

0x6e47,	// (0x0009624b) popup_vitu2_match_list_window

0x7634,	// (0x00096a38) cell_vitu2_function_top_pane_ParamLimits

0x7634,	// (0x00096a38) cell_vitu2_function_top_pane

0x7652,	// (0x00096a56) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7652,	// (0x00096a56) cell_vitu2_function_top_pane_cp01

0x7670,	// (0x00096a74) cell_vitu2_function_top_wide_pane_ParamLimits

0x7670,	// (0x00096a74) cell_vitu2_function_top_wide_pane

0xa0b1,	// (0x000994b5) bg_button_pane_cp012

0x768e,	// (0x00096a92) cell_vitu2_function_top_pane_g1

0xdc28,	// (0x0009d02c) bg_button_pane_cp013_ParamLimits

0xdc28,	// (0x0009d02c) bg_button_pane_cp013

0x76a2,	// (0x00096aa6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x76a2,	// (0x00096aa6) cell_vitu2_function_top_wide_pane_g1

0xa0b1,	// (0x000994b5) bg_popup_sub_pane_cp20

0x76ba,	// (0x00096abe) list_vitu2_match_list_pane

0xb6fe,	// (0x0009ab02) bg_popup_sub_pane_cp20_g1

0xb706,	// (0x0009ab0a) bg_popup_sub_pane_cp20_g2

0xe4d1,	// (0x0009d8d5) bg_popup_sub_pane_cp20_g3

0xb70e,	// (0x0009ab12) bg_popup_sub_pane_cp20_g4

0xe4b1,	// (0x0009d8b5) bg_popup_sub_pane_cp20_g5

0xb960,	// (0x0009ad64) bg_popup_sub_pane_cp20_g6

0xb71e,	// (0x0009ab22) bg_popup_sub_pane_cp20_g7

0xb726,	// (0x0009ab2a) bg_popup_sub_pane_cp20_g8

0xb72e,	// (0x0009ab32) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0009edf7) bg_popup_sub_pane_cp20_g

0xdc44,	// (0x0009d048) list_vitu2_match_list_item_pane_ParamLimits

0xdc44,	// (0x0009d048) list_vitu2_match_list_item_pane

0xdc56,	// (0x0009d05a) list_vitu2_match_list_item_pane_t1

0xa0bf,	// (0x000994c3) bg_popup_sub_pane_cp21

0xdc64,	// (0x0009d068) grid_vitu2_dropdown_list_pane

0x770d,	// (0x00096b11) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x770d,	// (0x00096b11) cell_vitu2_dropdown_list_char_pane

0x772e,	// (0x00096b32) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x772e,	// (0x00096b32) cell_vitu2_dropdown_list_ctrl_pane

0xb980,	// (0x0009ad84) cell_vitu2_dropdown_list_char_pane_g1

0xb989,	// (0x0009ad8d) cell_vitu2_dropdown_list_char_pane_g2

0xb992,	// (0x0009ad96) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0009ee14) cell_vitu2_dropdown_list_char_pane_g

0x775a,	// (0x00096b5e) cell_vitu2_dropdown_list_char_pane_t1

0x7768,	// (0x00096b6c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7768,	// (0x00096b6c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7775,	// (0x00096b79) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7775,	// (0x00096b79) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7782,	// (0x00096b86) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7782,	// (0x00096b86) cell_vitu2_dropdown_list_ctrl_pane_g3

0x778f,	// (0x00096b93) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x778f,	// (0x00096b93) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdb0e,	// (0x0009cf12) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdb0e,	// (0x0009cf12) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0009ee1b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0009ee1b) cell_vitu2_dropdown_list_ctrl_pane_g

0x77ab,	// (0x00096baf) aid_size_cell_gallery2_ParamLimits

0x77ab,	// (0x00096baf) aid_size_cell_gallery2

0x77c1,	// (0x00096bc5) grid_gallery2_pane_ParamLimits

0x77c1,	// (0x00096bc5) grid_gallery2_pane

0x77d5,	// (0x00096bd9) scroll_pane_cp029_ParamLimits

0x77d5,	// (0x00096bd9) scroll_pane_cp029

0x77e1,	// (0x00096be5) cell_gallery2_pane_ParamLimits

0x77e1,	// (0x00096be5) cell_gallery2_pane

0xb99b,	// (0x0009ad9f) cell_gallery2_pane_g2

0x7817,	// (0x00096c1b) cell_gallery2_pane_g3

0xb9a5,	// (0x0009ada9) cell_gallery2_pane_g4

0xb9ad,	// (0x0009adb1) cell_gallery2_pane_g5

0xebae,	// (0x0009dfb2) grid_highlight_pane_cp10

0x6e47,	// (0x0009624b) popup_vitu2_match_list_window_ParamLimits

0x6e5e,	// (0x00096262) popup_vitu2_query_window_ParamLimits

0x6e5e,	// (0x00096262) popup_vitu2_query_window

0xa0bf,	// (0x000994c3) bg_vitu2_candi_button_pane

0xb980,	// (0x0009ad84) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb989,	// (0x0009ad8d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb992,	// (0x0009ad96) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x781f,	// (0x00096c23) bg_button_pane_cp015

0x7831,	// (0x00096c35) bg_button_pane_cp016

0x7844,	// (0x00096c48) bg_button_pane_cp017

0xa48f,	// (0x00099893) bg_popup_sub_pane_cp22

0xb9b5,	// (0x0009adb9) popup_vitu2_query_window_g1

0x7889,	// (0x00096c8d) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0009ee26) popup_vitu2_query_window_g

0x78a8,	// (0x00096cac) popup_vitu2_query_window_t1_ParamLimits

0x78a8,	// (0x00096cac) popup_vitu2_query_window_t1

0x78dd,	// (0x00096ce1) popup_vitu2_query_window_t2_ParamLimits

0x78dd,	// (0x00096ce1) popup_vitu2_query_window_t2

0x78ef,	// (0x00096cf3) popup_vitu2_query_window_t3_ParamLimits

0x78ef,	// (0x00096cf3) popup_vitu2_query_window_t3

0x7917,	// (0x00096d1b) popup_vitu2_query_window_t4_ParamLimits

0x7917,	// (0x00096d1b) popup_vitu2_query_window_t4

0x7938,	// (0x00096d3c) popup_vitu2_query_window_t5_ParamLimits

0x7938,	// (0x00096d3c) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0009ee2d) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0009ee2d) popup_vitu2_query_window_t

0xb800,	// (0x0009ac04) main_cset_text_pane

0x728f,	// (0x00096693) aid_area_touch_slider_ParamLimits

0x72ab,	// (0x000966af) cset_slider_pane_ParamLimits

0x72d5,	// (0x000966d9) main_cset_slider_pane_g1_ParamLimits

0x72ea,	// (0x000966ee) main_cset_slider_pane_g2_ParamLimits

0xb821,	// (0x0009ac25) main_cset_slider_pane_g3_ParamLimits

0xb821,	// (0x0009ac25) main_cset_slider_pane_g3

0x72ff,	// (0x00096703) main_cset_slider_pane_g4_ParamLimits

0x72ff,	// (0x00096703) main_cset_slider_pane_g4

0x730e,	// (0x00096712) main_cset_slider_pane_g5_ParamLimits

0x730e,	// (0x00096712) main_cset_slider_pane_g5

0x731a,	// (0x0009671e) main_cset_slider_pane_g6_ParamLimits

0x731a,	// (0x0009671e) main_cset_slider_pane_g6

0xf97c,	// (0x0009ed80) main_cset_slider_pane_g_ParamLimits

0xb851,	// (0x0009ac55) main_cset_slider_pane_t1_ParamLimits

0x73a6,	// (0x000967aa) main_cset_slider_pane_t2_ParamLimits

0x73c0,	// (0x000967c4) main_cset_slider_pane_t3_ParamLimits

0x73da,	// (0x000967de) main_cset_slider_pane_t4_ParamLimits

0x73f4,	// (0x000967f8) main_cset_slider_pane_t5_ParamLimits

0x740e,	// (0x00096812) main_cset_slider_pane_t6_ParamLimits

0x7423,	// (0x00096827) main_cset_slider_pane_t7_ParamLimits

0x744d,	// (0x00096851) main_cset_slider_pane_t8_ParamLimits

0x744d,	// (0x00096851) main_cset_slider_pane_t8

0x7475,	// (0x00096879) main_cset_slider_pane_t9_ParamLimits

0x7475,	// (0x00096879) main_cset_slider_pane_t9

0x749d,	// (0x000968a1) main_cset_slider_pane_t10_ParamLimits

0x749d,	// (0x000968a1) main_cset_slider_pane_t10

0x74c5,	// (0x000968c9) main_cset_slider_pane_t11_ParamLimits

0x74c5,	// (0x000968c9) main_cset_slider_pane_t11

0x74ed,	// (0x000968f1) main_cset_slider_pane_t12_ParamLimits

0x74ed,	// (0x000968f1) main_cset_slider_pane_t12

0x750a,	// (0x0009690e) main_cset_slider_pane_t13_ParamLimits

0x750a,	// (0x0009690e) main_cset_slider_pane_t13

0xf9a1,	// (0x0009eda5) main_cset_slider_pane_t_ParamLimits

0xec5a,	// (0x0009e05e) bg_popup_sub_pane_cp011

0xb9c1,	// (0x0009adc5) main_cset_text_pane_g1

0xb9c9,	// (0x0009adcd) main_cset_text_pane_t1

0xb9d7,	// (0x0009addb) main_cset_text_pane_t2

0xb9e5,	// (0x0009ade9) main_cset_text_pane_t3

0xb9f3,	// (0x0009adf7) main_cset_text_pane_t4

0xba01,	// (0x0009ae05) main_cset_text_pane_t5

0xba0f,	// (0x0009ae13) main_cset_text_pane_t6

0xba1d,	// (0x0009ae21) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0009ee3c) main_cset_text_pane_t

0xa0bf,	// (0x000994c3) main_cam4_burst_pane

0xa0bf,	// (0x000994c3) main_cam5_pane

0x71ce,	// (0x000965d2) bg_button_pane_cp019

0x71d7,	// (0x000965db) bg_button_pane_cp020

0xb82d,	// (0x0009ac31) main_cset_slider_pane_g7_ParamLimits

0xb82d,	// (0x0009ac31) main_cset_slider_pane_g7

0xb839,	// (0x0009ac3d) main_cset_slider_pane_g8_ParamLimits

0xb839,	// (0x0009ac3d) main_cset_slider_pane_g8

0x732e,	// (0x00096732) main_cset_slider_pane_g9_ParamLimits

0x732e,	// (0x00096732) main_cset_slider_pane_g9

0x733a,	// (0x0009673e) main_cset_slider_pane_g10_ParamLimits

0x733a,	// (0x0009673e) main_cset_slider_pane_g10

0x7346,	// (0x0009674a) main_cset_slider_pane_g11_ParamLimits

0x7346,	// (0x0009674a) main_cset_slider_pane_g11

0x7352,	// (0x00096756) main_cset_slider_pane_g12_ParamLimits

0x7352,	// (0x00096756) main_cset_slider_pane_g12

0x735e,	// (0x00096762) main_cset_slider_pane_g13_ParamLimits

0x735e,	// (0x00096762) main_cset_slider_pane_g13

0x736a,	// (0x0009676e) main_cset_slider_pane_g14_ParamLimits

0x736a,	// (0x0009676e) main_cset_slider_pane_g14

0x7376,	// (0x0009677a) main_cset_slider_pane_g15_ParamLimits

0x7376,	// (0x0009677a) main_cset_slider_pane_g15

0xb87f,	// (0x0009ac83) main_cset_slider_pane_t14_ParamLimits

0xb87f,	// (0x0009ac83) main_cset_slider_pane_t14

0xb8b8,	// (0x0009acbc) main_cset_slider_pane_t15_ParamLimits

0xb8b8,	// (0x0009acbc) main_cset_slider_pane_t15

0x79af,	// (0x00096db3) aid_cam4_burst_size_cell_ParamLimits

0x79af,	// (0x00096db3) aid_cam4_burst_size_cell

0x79cf,	// (0x00096dd3) grid_cam4_burst_pane_ParamLimits

0x79cf,	// (0x00096dd3) grid_cam4_burst_pane

0x7a07,	// (0x00096e0b) linegrid_cam4_burst_pane_ParamLimits

0x7a07,	// (0x00096e0b) linegrid_cam4_burst_pane

0xba2b,	// (0x0009ae2f) scroll_pane_cp30_ParamLimits

0xba2b,	// (0x0009ae2f) scroll_pane_cp30

0x7a2b,	// (0x00096e2f) cell_cam4_burst_pane_ParamLimits

0x7a2b,	// (0x00096e2f) cell_cam4_burst_pane

0xba37,	// (0x0009ae3b) linegrid_cam4_burst_pane_g1_ParamLimits

0xba37,	// (0x0009ae3b) linegrid_cam4_burst_pane_g1

0x7a78,	// (0x00096e7c) linegrid_cam4_burst_pane_g2_ParamLimits

0x7a78,	// (0x00096e7c) linegrid_cam4_burst_pane_g2

0xba44,	// (0x0009ae48) linegrid_cam4_burst_pane_g3_ParamLimits

0xba44,	// (0x0009ae48) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0009ee4b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0009ee4b) linegrid_cam4_burst_pane_g

0x7a89,	// (0x00096e8d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7a89,	// (0x00096e8d) linegrid_cam4_burst_pane_g3_copy1

0xba51,	// (0x0009ae55) linegrid_cam4_burst_pane_g4_ParamLimits

0xba51,	// (0x0009ae55) linegrid_cam4_burst_pane_g4

0x7aa3,	// (0x00096ea7) linegrid_cam4_burst_pane_g5_ParamLimits

0x7aa3,	// (0x00096ea7) linegrid_cam4_burst_pane_g5

0x7ab4,	// (0x00096eb8) linegrid_cam4_burst_pane_g6_ParamLimits

0x7ab4,	// (0x00096eb8) linegrid_cam4_burst_pane_g6

0xba5e,	// (0x0009ae62) linegrid_cam4_burst_pane_g7_ParamLimits

0xba5e,	// (0x0009ae62) linegrid_cam4_burst_pane_g7

0x7acb,	// (0x00096ecf) cell_cam4_burst_pane_g1

0xba77,	// (0x0009ae7b) main_cam5_pane_t1_ParamLimits

0xba77,	// (0x0009ae7b) main_cam5_pane_t1

0xba89,	// (0x0009ae8d) main_cam5_pane_t2_ParamLimits

0xba89,	// (0x0009ae8d) main_cam5_pane_t2

0xba9b,	// (0x0009ae9f) main_cam5_pane_t3_ParamLimits

0xba9b,	// (0x0009ae9f) main_cam5_pane_t3

0xbaad,	// (0x0009aeb1) main_cam5_pane_t4_ParamLimits

0xbaad,	// (0x0009aeb1) main_cam5_pane_t4

0xbac5,	// (0x0009aec9) main_cam5_pane_t5_ParamLimits

0xbac5,	// (0x0009aec9) main_cam5_pane_t5

0xbad9,	// (0x0009aedd) main_cam5_pane_t6_ParamLimits

0xbad9,	// (0x0009aedd) main_cam5_pane_t6

0xbaed,	// (0x0009aef1) main_cam5_pane_t7_ParamLimits

0xbaed,	// (0x0009aef1) main_cam5_pane_t7

0xbaff,	// (0x0009af03) main_cam5_pane_t8_ParamLimits

0xbaff,	// (0x0009af03) main_cam5_pane_t8

0xbb1b,	// (0x0009af1f) main_cam5_pane_t9_ParamLimits

0xbb1b,	// (0x0009af1f) main_cam5_pane_t9

0xbb2d,	// (0x0009af31) main_cam5_pane_t10_ParamLimits

0xbb2d,	// (0x0009af31) main_cam5_pane_t10

0xbb3f,	// (0x0009af43) main_cam5_pane_t11_ParamLimits

0xbb3f,	// (0x0009af43) main_cam5_pane_t11

0xbb51,	// (0x0009af55) main_cam5_pane_t12_ParamLimits

0xbb51,	// (0x0009af55) main_cam5_pane_t12

0xbb66,	// (0x0009af6a) main_cam5_pane_t13_ParamLimits

0xbb66,	// (0x0009af6a) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0009ee57) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0009ee57) main_cam5_pane_t

0x0c30,	// (0x00090034) popup_scut_keymap_window_ParamLimits

0x0c30,	// (0x00090034) popup_scut_keymap_window

0x7ade,	// (0x00096ee2) aid_size_cell_brow_shortcut

0xebae,	// (0x0009dfb2) bg_popup_window_pane_cp010

0x7aea,	// (0x00096eee) grid_scut_pane

0x7af6,	// (0x00096efa) cell_scut_pane_ParamLimits

0x7af6,	// (0x00096efa) cell_scut_pane

0x7b0d,	// (0x00096f11) cell_scut_pane_g1

0xbb83,	// (0x0009af87) cell_scut_pane_t1

0xbb92,	// (0x0009af96) cell_scut_pane_t2

0x7b16,	// (0x00096f1a) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0009ee72) cell_scut_pane_t

0x58f5,	// (0x00094cf9) main_mup3_pane_g8_ParamLimits

0x58f5,	// (0x00094cf9) main_mup3_pane_g8

0x6d45,	// (0x00096149) area_vitu2_query_pane_ParamLimits

0x6d45,	// (0x00096149) area_vitu2_query_pane

0x7857,	// (0x00096c5b) input_focus_pane_cp08

0xbba1,	// (0x0009afa5) area_vitu2_query_pane_g1

0x7b24,	// (0x00096f28) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0009ee79) area_vitu2_query_pane_g

0x7b35,	// (0x00096f39) area_vitu2_query_pane_t1_ParamLimits

0x7b35,	// (0x00096f39) area_vitu2_query_pane_t1

0x7b49,	// (0x00096f4d) area_vitu2_query_pane_t2_ParamLimits

0x7b49,	// (0x00096f4d) area_vitu2_query_pane_t2

0x7b5d,	// (0x00096f61) area_vitu2_query_pane_t3_ParamLimits

0x7b5d,	// (0x00096f61) area_vitu2_query_pane_t3

0xbbad,	// (0x0009afb1) area_vitu2_query_pane_t4_ParamLimits

0xbbad,	// (0x0009afb1) area_vitu2_query_pane_t4

0xbbd5,	// (0x0009afd9) area_vitu2_query_pane_t5_ParamLimits

0xbbd5,	// (0x0009afd9) area_vitu2_query_pane_t5

0xbbfd,	// (0x0009b001) area_vitu2_query_pane_t6_ParamLimits

0xbbfd,	// (0x0009b001) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0009ee7e) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0009ee7e) area_vitu2_query_pane_t

0x7b85,	// (0x00096f89) bg_button_pane_cp018

0x7b93,	// (0x00096f97) bg_button_pane_cp021

0x7b9f,	// (0x00096fa3) bg_button_pane_cp022

0x7bae,	// (0x00096fb2) input_focus_pane_cp09

0x2bc6,	// (0x00091fca) aid_size_touch_mv_arrow_left

0x2bef,	// (0x00091ff3) aid_size_touch_mv_arrow_right

0x738e,	// (0x00096792) main_cset_slider_pane_g16_ParamLimits

0x738e,	// (0x00096792) main_cset_slider_pane_g16

0x739a,	// (0x0009679e) main_cset_slider_pane_g17_ParamLimits

0x739a,	// (0x0009679e) main_cset_slider_pane_g17

0x7acb,	// (0x00096ecf) cell_cam4_burst_pane_g1_ParamLimits

0xec5a,	// (0x0009e05e) compa_mode_pane

0x7574,	// (0x00096978) popup_vtel_slider_window_g3_ParamLimits

0x7574,	// (0x00096978) popup_vtel_slider_window_g3

0x758b,	// (0x0009698f) popup_vtel_slider_window_g4_ParamLimits

0x758b,	// (0x0009698f) popup_vtel_slider_window_g4

0x75a2,	// (0x000969a6) popup_vtel_slider_window_t1_ParamLimits

0x75a2,	// (0x000969a6) popup_vtel_slider_window_t1

0xa0bf,	// (0x000994c3) main_cl_pane

0xa4b7,	// (0x000998bb) popup_imed_adjust2_window_ParamLimits

0xa48f,	// (0x00099893) bg_tb_trans_pane_cp05_ParamLimits

0xaed2,	// (0x0009a2d6) popup_imed_adjust2_window_g1_ParamLimits

0xaee1,	// (0x0009a2e5) popup_imed_adjust2_window_g2_ParamLimits

0xaee1,	// (0x0009a2e5) popup_imed_adjust2_window_g2

0xaeed,	// (0x0009a2f1) popup_imed_adjust2_window_g3_ParamLimits

0xaeed,	// (0x0009a2f1) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0009ebee) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0009ebee) popup_imed_adjust2_window_g

0xaef9,	// (0x0009a2fd) popup_imed_adjust2_window_t1_ParamLimits

0xaf11,	// (0x0009a315) slider_imed_adjust_pane_ParamLimits

0xaf25,	// (0x0009a329) slider_imed_adjust_pane_g1_ParamLimits

0xaf35,	// (0x0009a339) slider_imed_adjust_pane_g2_ParamLimits

0xaf45,	// (0x0009a349) slider_imed_adjust_pane_g3_ParamLimits

0xaf56,	// (0x0009a35a) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0009ebf5) slider_imed_adjust_pane_g_ParamLimits

0x6ace,	// (0x00095ed2) aid_touch_area_cam4_ParamLimits

0x6ace,	// (0x00095ed2) aid_touch_area_cam4

0xdaf2,	// (0x0009cef6) battery_pane_cp01

0x6b9d,	// (0x00095fa1) main_camera4_pane_g6_ParamLimits

0x6b9d,	// (0x00095fa1) main_camera4_pane_g6

0x6bc7,	// (0x00095fcb) main_camera4_pane_t2_ParamLimits

0x6bc7,	// (0x00095fcb) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0009ecf3) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0009ecf3) main_camera4_pane_t

0x6bfc,	// (0x00096000) aid_touch_area_vid4_ParamLimits

0x6bfc,	// (0x00096000) aid_touch_area_vid4

0x6c50,	// (0x00096054) main_video4_pane_g5_ParamLimits

0x6c50,	// (0x00096054) main_video4_pane_g5

0x6c75,	// (0x00096079) vid4_progress_pane_ParamLimits

0x6c75,	// (0x00096079) vid4_progress_pane

0xb845,	// (0x0009ac49) main_cset_slider_pane_g18_ParamLimits

0xb845,	// (0x0009ac49) main_cset_slider_pane_g18

0xba6b,	// (0x0009ae6f) cell_cam4_burst_pane_g2_ParamLimits

0xba6b,	// (0x0009ae6f) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0009ee52) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0009ee52) cell_cam4_burst_pane_g

0xe0db,	// (0x0009d4df) bg_cl_pane_ParamLimits

0xe0db,	// (0x0009d4df) bg_cl_pane

0x7bbd,	// (0x00096fc1) cl_header_pane_ParamLimits

0x7bbd,	// (0x00096fc1) cl_header_pane

0x7bd1,	// (0x00096fd5) cl_listscroll_pane_ParamLimits

0x7bd1,	// (0x00096fd5) cl_listscroll_pane

0xbc49,	// (0x0009b04d) bg_cl_pane_g1

0xbc51,	// (0x0009b055) bg_cl_pane_g2

0xbc59,	// (0x0009b05d) bg_cl_pane_g3

0xbc61,	// (0x0009b065) bg_cl_pane_g4

0xbc69,	// (0x0009b06d) bg_cl_pane_g5

0xbc71,	// (0x0009b075) bg_cl_pane_g6

0xbc79,	// (0x0009b07d) bg_cl_pane_g7

0xbc81,	// (0x0009b085) bg_cl_pane_g8

0xbc89,	// (0x0009b08d) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0009ee8d) bg_cl_pane_g

0x7be1,	// (0x00096fe5) aid_height_cl_leading_ParamLimits

0x7be1,	// (0x00096fe5) aid_height_cl_leading

0x7bed,	// (0x00096ff1) aid_height_cl_text_ParamLimits

0x7bed,	// (0x00096ff1) aid_height_cl_text

0x47f9,	// (0x00093bfd) bg_cl_header_pane_ParamLimits

0x47f9,	// (0x00093bfd) bg_cl_header_pane

0x7c0c,	// (0x00097010) cl_header_pane_g1_ParamLimits

0x7c0c,	// (0x00097010) cl_header_pane_g1

0x7c22,	// (0x00097026) cl_header_pane_t1_ParamLimits

0x7c22,	// (0x00097026) cl_header_pane_t1

0xbc91,	// (0x0009b095) cl_list_pane

0xb818,	// (0x0009ac1c) hc_scroll_pane_cp01

0xe4b1,	// (0x0009d8b5) bg_cl_header_pane_g1

0xb6fe,	// (0x0009ab02) bg_cl_header_pane_g2

0xe4d1,	// (0x0009d8d5) bg_cl_header_pane_g3

0xb70e,	// (0x0009ab12) bg_cl_header_pane_g4

0xb706,	// (0x0009ab0a) bg_cl_header_pane_g5

0xb960,	// (0x0009ad64) bg_cl_header_pane_g6

0xb726,	// (0x0009ab2a) bg_cl_header_pane_g7

0xb72e,	// (0x0009ab32) bg_cl_header_pane_g8

0xb71e,	// (0x0009ab22) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0009eea0) bg_cl_header_pane_g

0x7c3b,	// (0x0009703f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7c3b,	// (0x0009703f) hc_cl_list_double_graphic_heading_pane

0x7c4c,	// (0x00097050) hc_cl_list_single_graphic_pane_ParamLimits

0x7c4c,	// (0x00097050) hc_cl_list_single_graphic_pane

0x7c62,	// (0x00097066) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7c62,	// (0x00097066) hc_cl_list_single_graphic_pane_g1

0x7c6e,	// (0x00097072) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7c6e,	// (0x00097072) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0009eeb3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0009eeb3) hc_cl_list_single_graphic_pane_g

0x7c82,	// (0x00097086) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7c82,	// (0x00097086) hc_cl_list_single_graphic_pane_t1

0x7c62,	// (0x00097066) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7c62,	// (0x00097066) hc_cl_list_double_graphic_heading_pane_g1

0x7c97,	// (0x0009709b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7c97,	// (0x0009709b) hc_cl_list_double_graphic_heading_pane_g2

0x7cab,	// (0x000970af) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7cab,	// (0x000970af) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0009eeb8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0009eeb8) hc_cl_list_double_graphic_heading_pane_g

0x7cbf,	// (0x000970c3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7cbf,	// (0x000970c3) hc_cl_list_double_graphic_heading_pane_t1

0x7cd4,	// (0x000970d8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7cd4,	// (0x000970d8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0009eebf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0009eebf) hc_cl_list_double_graphic_heading_pane_t

0x7ce9,	// (0x000970ed) vid4_progress_pane_g1

0x7cfb,	// (0x000970ff) vid4_progress_pane_g2

0xe776,	// (0x0009db7a) vid4_progress_pane_g3

0xdc74,	// (0x0009d078) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0009eec4) vid4_progress_pane_g

0xdc92,	// (0x0009d096) vid4_progress_pane_t1

0xdca7,	// (0x0009d0ab) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0009eecf) vid4_progress_pane_t

0xdcd2,	// (0x0009d0d6) wait_bar_pane_cp07

0xa788,	// (0x00099b8c) blid_firmament_pane_ParamLimits

0xa7cb,	// (0x00099bcf) popup_blid_sat_info2_window_g1

0xa7ef,	// (0x00099bf3) popup_blid_sat_info2_window_t3

0xa7fd,	// (0x00099c01) popup_blid_sat_info2_window_t4

0xa80b,	// (0x00099c0f) popup_blid_sat_info2_window_t5

0xa819,	// (0x00099c1d) popup_blid_sat_info2_window_t6

0xa829,	// (0x00099c2d) popup_blid_sat_info2_window_t7

0xa837,	// (0x00099c3b) popup_blid_sat_info2_window_t8

0xa845,	// (0x00099c49) popup_blid_sat_info2_window_t9

0xa853,	// (0x00099c57) popup_blid_sat_info2_window_t10

0xa915,	// (0x00099d19) aid_firma_cardinal_ParamLimits

0xa929,	// (0x00099d2d) blid_firmament_pane_t1_ParamLimits

0xa940,	// (0x00099d44) blid_firmament_pane_t2_ParamLimits

0xa957,	// (0x00099d5b) blid_firmament_pane_t3_ParamLimits

0xa96e,	// (0x00099d72) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0009eae7) blid_firmament_pane_t_ParamLimits

0xa985,	// (0x00099d89) blid_sat_info_pane_ParamLimits

0xa0b1,	// (0x000994b5) main_cam_set_pane_ParamLimits

0x61a7,	// (0x000955ab) aid_size_cell_colour_35_ParamLimits

0x61c7,	// (0x000955cb) aid_size_cell_colour_112_ParamLimits

0x61e7,	// (0x000955eb) aid_size_cell_effect_ParamLimits

0xa48f,	// (0x00099893) bg_tb_trans_pane_cp02_ParamLimits

0xe6fd,	// (0x0009db01) heading_imed_pane_ParamLimits

0x6207,	// (0x0009560b) listscroll_imed_pane_ParamLimits

0x3d4f,	// (0x00093153) popup_call2_audio_first_window_g5_ParamLimits

0x3d4f,	// (0x00093153) popup_call2_audio_first_window_g5

0x6779,	// (0x00095b7d) aid_size_touch_image3_arrow_left_ParamLimits

0x6779,	// (0x00095b7d) aid_size_touch_image3_arrow_left

0x67a5,	// (0x00095ba9) aid_size_touch_image3_arrow_right_ParamLimits

0x67a5,	// (0x00095ba9) aid_size_touch_image3_arrow_right

0xdcbd,	// (0x0009d0c1) vid4_progress_pane_t3

0x651a,	// (0x0009591e) main_hwr_training_symbol_option_pane_ParamLimits

0x651a,	// (0x0009591e) main_hwr_training_symbol_option_pane

0xb1bf,	// (0x0009a5c3) popup_hwr_training_preview_window_ParamLimits

0xb1bf,	// (0x0009a5c3) popup_hwr_training_preview_window

0x653a,	// (0x0009593e) hwr_training_navi_pane_g5_ParamLimits

0x653a,	// (0x0009593e) hwr_training_navi_pane_g5

0xb6ec,	// (0x0009aaf0) popup_char_count_window

0xa0b1,	// (0x000994b5) bg_popup_sub_pane_cp20_ParamLimits

0x76ba,	// (0x00096abe) list_vitu2_match_list_pane_ParamLimits

0x76c9,	// (0x00096acd) vitu2_page_scroll_pane_ParamLimits

0x76c9,	// (0x00096acd) vitu2_page_scroll_pane

0xbcf4,	// (0x0009b0f8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbcf4,	// (0x0009b0f8) list_single_hwr_training_symbol_option_pane

0xbd07,	// (0x0009b10b) list_single_hwr_training_symbol_option_pane_g1

0xbd0f,	// (0x0009b113) list_single_hwr_training_symbol_option_pane_t1

0xbd1d,	// (0x0009b121) bg_button_pane_cp023

0xbd26,	// (0x0009b12a) bg_button_pane_cp024

0x7d0d,	// (0x00097111) vitu2_page_scroll_pane_g1

0x7d15,	// (0x00097119) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0009eed6) vitu2_page_scroll_pane_g

0x7d1d,	// (0x00097121) vitu2_page_scroll_pane_t1

0xbd59,	// (0x0009b15d) popup_char_count_window_g1

0xbd62,	// (0x0009b166) popup_char_count_window_g2

0xbd6b,	// (0x0009b16f) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0009eedb) popup_char_count_window_g

0xbd74,	// (0x0009b178) popup_char_count_window_t1

0xa0bf,	// (0x000994c3) main_vded2_pane

0xaebe,	// (0x0009a2c2) aid_size_cell_imed_line

0xaec8,	// (0x0009a2cc) grid_imed_line_width_pane

0xdbb8,	// (0x0009cfbc) vid4_indicators_pane_g4

0xbd82,	// (0x0009b186) cell_imed_line_width_pane_ParamLimits

0xbd82,	// (0x0009b186) cell_imed_line_width_pane

0xbd96,	// (0x0009b19a) cell_imed_line_width_pane_g1

0xa736,	// (0x00099b3a) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0009eee2) cell_imed_line_width_pane_g

0x7d2c,	// (0x00097130) main_vded2_pane_g1_ParamLimits

0x7d2c,	// (0x00097130) main_vded2_pane_g1

0x7d42,	// (0x00097146) main_vded2_pane_g2_ParamLimits

0x7d42,	// (0x00097146) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0009eee7) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0009eee7) main_vded2_pane_g

0x7d54,	// (0x00097158) vded2_slider_pane_ParamLimits

0x7d54,	// (0x00097158) vded2_slider_pane

0x7d64,	// (0x00097168) aid_size_touch_vded2_end

0x7d6e,	// (0x00097172) aid_size_touch_vded2_playhead

0xbd9f,	// (0x0009b1a3) aid_size_touch_vded2_start

0xbda7,	// (0x0009b1ab) vded2_slider_bg_pane

0xbdb0,	// (0x0009b1b4) vded2_slider_pane_g1

0xbdb9,	// (0x0009b1bd) vded2_slider_pane_g2

0x7d78,	// (0x0009717c) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0009eeec) vded2_slider_pane_g

0xbdc1,	// (0x0009b1c5) vded2_slider_bg_pane_g1

0xbdca,	// (0x0009b1ce) vded2_slider_bg_pane_g2

0xbdd3,	// (0x0009b1d7) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0009eef3) vded2_slider_bg_pane_g

0x3283,	// (0x00092687) aid_postcard_touch_down_pane_ParamLimits

0x3283,	// (0x00092687) aid_postcard_touch_down_pane

0x3299,	// (0x0009269d) aid_postcard_touch_up_pane_ParamLimits

0x3299,	// (0x0009269d) aid_postcard_touch_up_pane

0xa0bf,	// (0x000994c3) main_blid2_pane

0xa49d,	// (0x000998a1) popup_blid2_search_window

0xec5a,	// (0x0009e05e) blid2_gps_pane

0xec5a,	// (0x0009e05e) blid2_navig_pane

0xec5a,	// (0x0009e05e) blid2_search_pane

0xec5a,	// (0x0009e05e) blid2_tripm_pane

0x7d83,	// (0x00097187) blid2_search_pane_g1_ParamLimits

0x7d83,	// (0x00097187) blid2_search_pane_g1

0x7d9d,	// (0x000971a1) blid2_search_pane_t1_ParamLimits

0x7d9d,	// (0x000971a1) blid2_search_pane_t1

0x7daf,	// (0x000971b3) aid_size_cell_blid2_gps_ParamLimits

0x7daf,	// (0x000971b3) aid_size_cell_blid2_gps

0x7dc7,	// (0x000971cb) blid2_gps_pane_g1_ParamLimits

0x7dc7,	// (0x000971cb) blid2_gps_pane_g1

0x7ddb,	// (0x000971df) grid_blid2_satellite_pane_ParamLimits

0x7ddb,	// (0x000971df) grid_blid2_satellite_pane

0x7df5,	// (0x000971f9) blid2_navig_pane_g1_ParamLimits

0x7df5,	// (0x000971f9) blid2_navig_pane_g1

0x7e01,	// (0x00097205) blid2_navig_pane_t1_ParamLimits

0x7e01,	// (0x00097205) blid2_navig_pane_t1

0x7e1c,	// (0x00097220) blid2_navig_pane_t2_ParamLimits

0x7e1c,	// (0x00097220) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0009eefa) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0009eefa) blid2_navig_pane_t

0x7e37,	// (0x0009723b) blid2_navig_ring_pane_ParamLimits

0x7e37,	// (0x0009723b) blid2_navig_ring_pane

0x7e50,	// (0x00097254) blid2_speed_pane_ParamLimits

0x7e50,	// (0x00097254) blid2_speed_pane

0x7e5c,	// (0x00097260) blid2_tripm_pane_g1_ParamLimits

0x7e5c,	// (0x00097260) blid2_tripm_pane_g1

0x7e75,	// (0x00097279) blid2_tripm_pane_g2_ParamLimits

0x7e75,	// (0x00097279) blid2_tripm_pane_g2

0x7e89,	// (0x0009728d) blid2_tripm_pane_g3_ParamLimits

0x7e89,	// (0x0009728d) blid2_tripm_pane_g3

0x7e9d,	// (0x000972a1) blid2_tripm_pane_g4_ParamLimits

0x7e9d,	// (0x000972a1) blid2_tripm_pane_g4

0x7eb1,	// (0x000972b5) blid2_tripm_pane_g5_ParamLimits

0x7eb1,	// (0x000972b5) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0009eeff) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0009eeff) blid2_tripm_pane_g

0x7ed7,	// (0x000972db) blid2_tripm_pane_t1_ParamLimits

0x7ed7,	// (0x000972db) blid2_tripm_pane_t1

0x7ef2,	// (0x000972f6) blid2_tripm_pane_t2_ParamLimits

0x7ef2,	// (0x000972f6) blid2_tripm_pane_t2

0x7f0b,	// (0x0009730f) blid2_tripm_pane_t3_ParamLimits

0x7f0b,	// (0x0009730f) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0009ef0c) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0009ef0c) blid2_tripm_pane_t

0x7f52,	// (0x00097356) cell_blid2_satellite_pane_ParamLimits

0x7f52,	// (0x00097356) cell_blid2_satellite_pane

0x7f70,	// (0x00097374) cell_blid2_satellite_pane_g1

0xbddc,	// (0x0009b1e0) cell_blid2_satellite_pane_t1

0xa995,	// (0x00099d99) blid2_speed_pane_g1

0xbdea,	// (0x0009b1ee) blid2_speed_pane_t1

0xbdf8,	// (0x0009b1fc) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0009ef15) blid2_speed_pane_t

0xa995,	// (0x00099d99) blid2_navig_ring_pane_g1

0x7f79,	// (0x0009737d) blid2_navig_ring_pane_g2

0x7f81,	// (0x00097385) blid2_navig_ring_pane_g3

0x7f89,	// (0x0009738d) blid2_navig_ring_pane_g4

0x7f91,	// (0x00097395) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0009ef1a) blid2_navig_ring_pane_g

0xec5a,	// (0x0009e05e) bg_popup_window_pane_cp011

0xbe06,	// (0x0009b20a) popup_blid2_search_window_g1

0xbe0e,	// (0x0009b212) popup_blid2_search_window_t1

0xbe1c,	// (0x0009b220) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0009ef25) popup_blid2_search_window_t

0xe3c0,	// (0x0009d7c4) main_browser_pane_g1

0xe0db,	// (0x0009d4df) main_browser_pane_ParamLimits

0xa0b1,	// (0x000994b5) bg_button_pane_cp011_ParamLimits

0x6f6a,	// (0x0009636e) cell_vitu2_function_pane_g1_ParamLimits

0xa48f,	// (0x00099893) bg_popup_sub_pane_cp22_ParamLimits

0x7857,	// (0x00096c5b) input_focus_pane_cp08_ParamLimits

0x786e,	// (0x00096c72) popup_vitu2_query_button_pane_ParamLimits

0x786e,	// (0x00096c72) popup_vitu2_query_button_pane

0x787f,	// (0x00096c83) popup_vitu2_query_input_button_pane

0xb9b5,	// (0x0009adb9) popup_vitu2_query_window_g1_ParamLimits

0x7889,	// (0x00096c8d) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0009ee26) popup_vitu2_query_window_g_ParamLimits

0xec5a,	// (0x0009e05e) bg_button_pane_cp026

0x7f99,	// (0x0009739d) popup_vitu2_query_input_button_pane_g1

0xec5a,	// (0x0009e05e) bg_button_pane_cp025

0xbe2a,	// (0x0009b22e) popup_vitu2_query_button_pane_t1

0x55d0,	// (0x000949d4) main_mp3_pane_t6

0x55de,	// (0x000949e2) popup_slider_window_cp01

0xdb1c,	// (0x0009cf20) cam4_battery_pane

0xdb75,	// (0x0009cf79) cam4_battery_pane_cp02

0xdc6c,	// (0x0009d070) cam4_battery_pane_cp01

0xdc6c,	// (0x0009d070) cam4_battery_pane_cp03

0xb512,	// (0x0009a916) cam4_battery_pane_g1

0xa995,	// (0x00099d99) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0009ef2a) cam4_battery_pane_g

0xa861,	// (0x00099c65) popup_blid_sat_info2_window_t11

0x2bc6,	// (0x00091fca) aid_size_touch_mv_arrow_left_ParamLimits

0x2bef,	// (0x00091ff3) aid_size_touch_mv_arrow_right_ParamLimits

0xeb0e,	// (0x0009df12) navi_pane_g1_ParamLimits

0x2c2e,	// (0x00092032) navi_pane_g2_ParamLimits

0x2c5c,	// (0x00092060) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0009e7f9) navi_pane_g_ParamLimits

0x2cb4,	// (0x000920b8) navi_pane_mv_t1_ParamLimits

0x6213,	// (0x00095617) grid_imed_effect_pane_ParamLimits

0x1abb,	// (0x00090ebf) aid_placing_vt_slider_lsc

0xe30f,	// (0x0009d713) aid_placing_vt_slider_prt

0x47f9,	// (0x00093bfd) bg_tb_trans_pane_cp01_ParamLimits

0xab21,	// (0x00099f25) popup_image_details_window_g1_ParamLimits

0xab34,	// (0x00099f38) popup_image_details_window_g2_ParamLimits

0xab49,	// (0x00099f4d) popup_image_details_window_g3_ParamLimits

0xab49,	// (0x00099f4d) popup_image_details_window_g3

0xf728,	// (0x0009eb2c) popup_image_details_window_g_ParamLimits

0xab5d,	// (0x00099f61) popup_image_details_window_t1_ParamLimits

0xab6f,	// (0x00099f73) popup_image_details_window_t2_ParamLimits

0xab88,	// (0x00099f8c) popup_image_details_window_t3_ParamLimits

0xab9c,	// (0x00099fa0) popup_image_details_window_t4_ParamLimits

0xabb7,	// (0x00099fbb) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0009eb33) popup_image_details_window_t_ParamLimits

0x7bf9,	// (0x00096ffd) cl_header_name_pane_ParamLimits

0x7bf9,	// (0x00096ffd) cl_header_name_pane

0x7fa1,	// (0x000973a5) cl_header_name_pane_t1_ParamLimits

0x7fa1,	// (0x000973a5) cl_header_name_pane_t1

0x7fc2,	// (0x000973c6) cl_header_name_pane_t2_ParamLimits

0x7fc2,	// (0x000973c6) cl_header_name_pane_t2

0x8004,	// (0x00097408) cl_header_name_pane_t3_ParamLimits

0x8004,	// (0x00097408) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0009ef2f) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0009ef2f) cl_header_name_pane_t

0x2c85,	// (0x00092089) navi_pane_mv_g2_ParamLimits

0xb67a,	// (0x0009aa7e) field_vitu2_entry_pane_g1_ParamLimits

0xb686,	// (0x0009aa8a) field_vitu2_entry_pane_g2_ParamLimits

0xb692,	// (0x0009aa96) field_vitu2_entry_pane_g3_ParamLimits

0xb692,	// (0x0009aa96) field_vitu2_entry_pane_g3

0xf921,	// (0x0009ed25) field_vitu2_entry_pane_g_ParamLimits

0x6ee6,	// (0x000962ea) cell_vitu2_itu_pane_g1_ParamLimits

0x6ef6,	// (0x000962fa) cell_vitu2_itu_pane_g2_ParamLimits

0x6ef6,	// (0x000962fa) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0009ed31) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0009ed31) cell_vitu2_itu_pane_g

0xa0b1,	// (0x000994b5) bg_vkb2_func_pane_cp05_ParamLimits

0xa0b1,	// (0x000994b5) bg_vkb2_func_pane_cp05

0xa0b1,	// (0x000994b5) bg_vkb2_func_pane_cp03

0xa0b1,	// (0x000994b5) bg_vkb2_func_pane_cp04

0xa0b1,	// (0x000994b5) bg_vkb2_func_pane_cp10_ParamLimits

0xa0b1,	// (0x000994b5) bg_vkb2_func_pane_cp10

0x7b9f,	// (0x00096fa3) bg_vkb2_func_pane_cp08

0x7b85,	// (0x00096f89) bg_vkb2_func_pane_cp06

0x7b93,	// (0x00096f97) bg_vkb2_func_pane_cp07

0xbd2f,	// (0x0009b133) bg_vkb2_func_pane_cp11_ParamLimits

0xbd2f,	// (0x0009b133) bg_vkb2_func_pane_cp11

0xbd44,	// (0x0009b148) bg_vkb2_func_pane_cp12_ParamLimits

0xbd44,	// (0x0009b148) bg_vkb2_func_pane_cp12

0xec5a,	// (0x0009e05e) bg_vkb2_func_pane_cp09

0xb6fe,	// (0x0009ab02) bg_vkb2_func_pane_g1

0xe4d1,	// (0x0009d8d5) bg_vkb2_func_pane_g2

0xb706,	// (0x0009ab0a) bg_vkb2_func_pane_g3

0xb70e,	// (0x0009ab12) bg_vkb2_func_pane_g4

0xb960,	// (0x0009ad64) bg_vkb2_func_pane_g5

0xb726,	// (0x0009ab2a) bg_vkb2_func_pane_g6

0xb72e,	// (0x0009ab32) bg_vkb2_func_pane_g7

0xb71e,	// (0x0009ab22) bg_vkb2_func_pane_g8

0xe4b1,	// (0x0009d8b5) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0009ef36) bg_vkb2_func_pane_g

0x7ec5,	// (0x000972c9) blid2_tripm_pane_g6_ParamLimits

0x7ec5,	// (0x000972c9) blid2_tripm_pane_g6

0xb4cc,	// (0x0009a8d0) mp4_progress_pane_g1

0x7f3e,	// (0x00097342) blid2_tripm_values_pane_ParamLimits

0x7f3e,	// (0x00097342) blid2_tripm_values_pane

0x8035,	// (0x00097439) blid2_tripm_values_pane_t1

0x8043,	// (0x00097447) blid2_tripm_values_pane_t2

0x8051,	// (0x00097455) blid2_tripm_values_pane_t3

0x805f,	// (0x00097463) blid2_tripm_values_pane_t4

0x806d,	// (0x00097471) blid2_tripm_values_pane_t5

0x807b,	// (0x0009747f) blid2_tripm_values_pane_t6

0x8089,	// (0x0009748d) blid2_tripm_values_pane_t7

0x8097,	// (0x0009749b) blid2_tripm_values_pane_t8

0x80a5,	// (0x000974a9) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0009ef49) blid2_tripm_values_pane_t

0x1afd,	// (0x00090f01) call_video_pane_t1_ParamLimits

0x1b1b,	// (0x00090f1f) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0009e682) call_video_pane_t_ParamLimits

0x3186,	// (0x0009258a) msg_header_pane_g1_ParamLimits

0xed4d,	// (0x0009e151) msg_header_pane_g2_ParamLimits

0xed4d,	// (0x0009e151) msg_header_pane_g2

0x0001,

0xf498,	// (0x0009e89c) msg_header_pane_g_ParamLimits

0xf498,	// (0x0009e89c) msg_header_pane_g

0xe0db,	// (0x0009d4df) main_clock2_pane_ParamLimits

0x5f26,	// (0x0009532a) grid_clock2_toolbar_pane_ParamLimits

0x5f26,	// (0x0009532a) grid_clock2_toolbar_pane

0x5f26,	// (0x0009532a) listscroll_clock2_pane_ParamLimits

0x5f26,	// (0x0009532a) listscroll_clock2_pane

0x6008,	// (0x0009540c) main_clock2_pane_t3_ParamLimits

0x6008,	// (0x0009540c) main_clock2_pane_t3

0x602b,	// (0x0009542f) main_clock2_pane_t4_ParamLimits

0x602b,	// (0x0009542f) main_clock2_pane_t4

0xbe38,	// (0x0009b23c) cell_clock2_toolbar_pane

0xbe40,	// (0x0009b244) cell_clock2_toolbar_pane_cp01

0xbe40,	// (0x0009b244) cell_clock2_toolbar_pane_cp02

0xbe48,	// (0x0009b24c) cell_clock2_toolbar_pane_cp03

0xbe50,	// (0x0009b254) list_clock2_pane

0xea65,	// (0x0009de69) scroll_pane_cp10

0xbe58,	// (0x0009b25c) list_single_clock2_pane_ParamLimits

0xbe58,	// (0x0009b25c) list_single_clock2_pane

0xebae,	// (0x0009dfb2) list_highlight_pane_cp08

0xbe65,	// (0x0009b269) list_single_clock2_pane_t1

0xbe73,	// (0x0009b277) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0009ef5c) list_single_clock2_pane_t

0xec5a,	// (0x0009e05e) bg_button_pane_cp10

0xbe81,	// (0x0009b285) cell_clock2_toolbar_pane_g1

0x320f,	// (0x00092613) aid_main_viewer_pane_g1_ParamLimits

0x320f,	// (0x00092613) aid_main_viewer_pane_g1

0x321d,	// (0x00092621) aid_main_viewer_pane_g2_ParamLimits

0x321d,	// (0x00092621) aid_main_viewer_pane_g2

0x322b,	// (0x0009262f) aid_main_viewer_pane_g3_ParamLimits

0x322b,	// (0x0009262f) aid_main_viewer_pane_g3

0x323a,	// (0x0009263e) aid_main_viewer_pane_g4_ParamLimits

0x323a,	// (0x0009263e) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0009e8ad) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0009e8ad) aid_main_viewer_pane_g

0x47e5,	// (0x00093be9) main_calc_pane_ParamLimits

0x4807,	// (0x00093c0b) main_dialer2_pane_ParamLimits

0xa0bf,	// (0x000994c3) main_cam6_pane

0xa0bf,	// (0x000994c3) main_vid6_pane

0x5f32,	// (0x00095336) listscroll_gen_pane_cp06_ParamLimits

0x5f32,	// (0x00095336) listscroll_gen_pane_cp06

0x604e,	// (0x00095452) main_clock2_pane_t5_ParamLimits

0x604e,	// (0x00095452) main_clock2_pane_t5

0x60a8,	// (0x000954ac) aid_call2_pane_cp10_ParamLimits

0x60ba,	// (0x000954be) aid_call_pane_cp10_ParamLimits

0xeae3,	// (0x0009dee7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeae3,	// (0x0009dee7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x60cc,	// (0x000954d0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x60cc,	// (0x000954d0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeae3,	// (0x0009dee7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0009ebe3) popup_clock_analogue_window_cp10_g_ParamLimits

0x60de,	// (0x000954e2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6726,	// (0x00095b2a) cell_dialer2_keypad_pane_g2_ParamLimits

0x6726,	// (0x00095b2a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0009ecc4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0009ecc4) cell_dialer2_keypad_pane_g

0x6742,	// (0x00095b46) cell_dialer2_keypad_pane_t1

0x7281,	// (0x00096685) main_cset_text2_pane_ParamLimits

0x7281,	// (0x00096685) main_cset_text2_pane

0xbba1,	// (0x0009afa5) area_vitu2_query_pane_g1_ParamLimits

0x7b24,	// (0x00096f28) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0009ee79) area_vitu2_query_pane_g_ParamLimits

0xbc25,	// (0x0009b029) area_vitu2_query_pane_t7_ParamLimits

0xbc25,	// (0x0009b029) area_vitu2_query_pane_t7

0x7b85,	// (0x00096f89) bg_button_pane_cp018_ParamLimits

0x7b93,	// (0x00096f97) bg_button_pane_cp021_ParamLimits

0x7b9f,	// (0x00096fa3) bg_button_pane_cp022_ParamLimits

0x7b9f,	// (0x00096fa3) bg_vkb2_func_pane_cp08_ParamLimits

0x7b85,	// (0x00096f89) bg_vkb2_func_pane_cp06_ParamLimits

0x7b93,	// (0x00096f97) bg_vkb2_func_pane_cp07_ParamLimits

0x7bae,	// (0x00096fb2) input_focus_pane_cp09_ParamLimits

0xdce4,	// (0x0009d0e8) cam6_autofocus_pane_ParamLimits

0xdce4,	// (0x0009d0e8) cam6_autofocus_pane

0x80b3,	// (0x000974b7) cam6_image_uncrop_pane_ParamLimits

0x80b3,	// (0x000974b7) cam6_image_uncrop_pane

0x80c2,	// (0x000974c6) cam6_indi_pane_ParamLimits

0x80c2,	// (0x000974c6) cam6_indi_pane

0x80d8,	// (0x000974dc) cam6_mode_pane_ParamLimits

0x80d8,	// (0x000974dc) cam6_mode_pane

0x80ea,	// (0x000974ee) cam6_timer_pane_ParamLimits

0x80ea,	// (0x000974ee) cam6_timer_pane

0x80f6,	// (0x000974fa) cam6_zoom_pane_ParamLimits

0x80f6,	// (0x000974fa) cam6_zoom_pane

0x8102,	// (0x00097506) cam6_mode_pane_g1_ParamLimits

0x8102,	// (0x00097506) cam6_mode_pane_g1

0x8112,	// (0x00097516) cam6_mode_pane_g2_ParamLimits

0x8112,	// (0x00097516) cam6_mode_pane_g2

0x8122,	// (0x00097526) cam6_mode_pane_g3_ParamLimits

0x8122,	// (0x00097526) cam6_mode_pane_g3

0x8132,	// (0x00097536) cam6_mode_pane_g4_ParamLimits

0x8132,	// (0x00097536) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0009ef61) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0009ef61) cam6_mode_pane_g

0xbe89,	// (0x0009b28d) bg_tb_trans_pane_cp08_ParamLimits

0xbe89,	// (0x0009b28d) bg_tb_trans_pane_cp08

0xbe97,	// (0x0009b29b) cam6_battery_pane_ParamLimits

0xbe97,	// (0x0009b29b) cam6_battery_pane

0xbead,	// (0x0009b2b1) cam6_indi_pane_g1_ParamLimits

0xbead,	// (0x0009b2b1) cam6_indi_pane_g1

0xbebf,	// (0x0009b2c3) cam6_indi_pane_g2_ParamLimits

0xbebf,	// (0x0009b2c3) cam6_indi_pane_g2

0xbed1,	// (0x0009b2d5) cam6_indi_pane_g3_ParamLimits

0xbed1,	// (0x0009b2d5) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0009ef6a) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0009ef6a) cam6_indi_pane_g

0xbee3,	// (0x0009b2e7) cam6_indi_pane_t1_ParamLimits

0xbee3,	// (0x0009b2e7) cam6_indi_pane_t1

0x8142,	// (0x00097546) cam6_autofocus_pane_g1

0x814a,	// (0x0009754e) cam6_autofocus_pane_g2

0x8152,	// (0x00097556) cam6_autofocus_pane_g3

0x815a,	// (0x0009755e) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0009ef71) cam6_autofocus_pane_g

0xbf09,	// (0x0009b30d) cam6_timer_pane_g1

0xbf11,	// (0x0009b315) cam6_timer_pane_t1

0xbf1f,	// (0x0009b323) cam6_zoom_cont_pane

0xbf27,	// (0x0009b32b) cam6_zoom_pane_g1

0xbf2f,	// (0x0009b333) cam6_zoom_pane_g2

0x8162,	// (0x00097566) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0009ef7a) cam6_zoom_pane_g

0xa995,	// (0x00099d99) cam6_battery_pane_g1

0xa995,	// (0x00099d99) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x0009eaf0) cam6_battery_pane_g

0xbf37,	// (0x0009b33b) cam6_zoom_cont_pane_g1

0xbf40,	// (0x0009b344) cam6_zoom_cont_pane_g2

0xbf49,	// (0x0009b34d) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0009ef81) cam6_zoom_cont_pane_g

0x817f,	// (0x00097583) cam6_mode_pane_cp_ParamLimits

0x817f,	// (0x00097583) cam6_mode_pane_cp

0x8191,	// (0x00097595) cam6_zoom_pane_cp_ParamLimits

0x8191,	// (0x00097595) cam6_zoom_pane_cp

0x819d,	// (0x000975a1) vid6_image_uncrop_cif_pane_ParamLimits

0x819d,	// (0x000975a1) vid6_image_uncrop_cif_pane

0x81ad,	// (0x000975b1) vid6_image_uncrop_nhd_pane_ParamLimits

0x81ad,	// (0x000975b1) vid6_image_uncrop_nhd_pane

0x81bc,	// (0x000975c0) vid6_image_uncrop_vga_pane_ParamLimits

0x81bc,	// (0x000975c0) vid6_image_uncrop_vga_pane

0x81cb,	// (0x000975cf) vid6_image_uncrop_wvga_pane_ParamLimits

0x81cb,	// (0x000975cf) vid6_image_uncrop_wvga_pane

0x81da,	// (0x000975de) vid6_indi_pane_ParamLimits

0x81da,	// (0x000975de) vid6_indi_pane

0xbe89,	// (0x0009b28d) bg_tb_trans_pane_cp09_ParamLimits

0xbe89,	// (0x0009b28d) bg_tb_trans_pane_cp09

0xbf61,	// (0x0009b365) cam6_battery_pane_cp_ParamLimits

0xbf61,	// (0x0009b365) cam6_battery_pane_cp

0xbf6d,	// (0x0009b371) vid6_indi_pane_g1_ParamLimits

0xbf6d,	// (0x0009b371) vid6_indi_pane_g1

0xbf7f,	// (0x0009b383) vid6_indi_pane_g2_ParamLimits

0xbf7f,	// (0x0009b383) vid6_indi_pane_g2

0xbf91,	// (0x0009b395) vid6_indi_pane_g3_ParamLimits

0xbf91,	// (0x0009b395) vid6_indi_pane_g3

0xbfa6,	// (0x0009b3aa) vid6_indi_pane_g4_ParamLimits

0xbfa6,	// (0x0009b3aa) vid6_indi_pane_g4

0xbfbb,	// (0x0009b3bf) vid6_indi_pane_g5_ParamLimits

0xbfbb,	// (0x0009b3bf) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0009ef88) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0009ef88) vid6_indi_pane_g

0xbfd5,	// (0x0009b3d9) vid6_indi_pane_t1_ParamLimits

0xbfd5,	// (0x0009b3d9) vid6_indi_pane_t1

0xbfeb,	// (0x0009b3ef) vid6_indi_pane_t2_ParamLimits

0xbfeb,	// (0x0009b3ef) vid6_indi_pane_t2

0xc013,	// (0x0009b417) vid6_indi_pane_t3_ParamLimits

0xc013,	// (0x0009b417) vid6_indi_pane_t3

0xc03b,	// (0x0009b43f) vid6_indi_pane_t4_ParamLimits

0xc03b,	// (0x0009b43f) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0009ef93) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0009ef93) vid6_indi_pane_t

0xc05f,	// (0x0009b463) wait_bar_pane_cp08

0x81f2,	// (0x000975f6) main_cset_text2_pane_t1_ParamLimits

0x81f2,	// (0x000975f6) main_cset_text2_pane_t1

0x816a,	// (0x0009756e) listscroll_gen_pane_cp06_t1_ParamLimits

0x816a,	// (0x0009756e) listscroll_gen_pane_cp06_t1

0xa0bf,	// (0x000994c3) main_cam6_set_pane

0xdb0e,	// (0x0009cf12) bg_tb_trans_pane_cp06_ParamLimits

0xdb24,	// (0x0009cf28) cam4_indicators_pane_g1_ParamLimits

0xdb35,	// (0x0009cf39) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0009ed01) cam4_indicators_pane_g_ParamLimits

0xdb53,	// (0x0009cf57) cam4_indicators_pane_t1_ParamLimits

0xa0b1,	// (0x000994b5) bg_tb_trans_pane_cp07_ParamLimits

0xdb7f,	// (0x0009cf83) vid4_indicators_pane_g1_ParamLimits

0xdb93,	// (0x0009cf97) vid4_indicators_pane_g2_ParamLimits

0xdba7,	// (0x0009cfab) vid4_indicators_pane_g3_ParamLimits

0xdbb8,	// (0x0009cfbc) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0009ed13) vid4_indicators_pane_g_ParamLimits

0xdbd6,	// (0x0009cfda) vid4_indicators_pane_t1_ParamLimits

0x7ce9,	// (0x000970ed) vid4_progress_pane_g1_ParamLimits

0x7cfb,	// (0x000970ff) vid4_progress_pane_g2_ParamLimits

0xe776,	// (0x0009db7a) vid4_progress_pane_g3_ParamLimits

0xdc74,	// (0x0009d078) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0009eec4) vid4_progress_pane_g_ParamLimits

0xdc92,	// (0x0009d096) vid4_progress_pane_t1_ParamLimits

0xdca7,	// (0x0009d0ab) vid4_progress_pane_t2_ParamLimits

0xdcbd,	// (0x0009d0c1) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0009eecf) vid4_progress_pane_t_ParamLimits

0xdcd2,	// (0x0009d0d6) wait_bar_pane_cp07_ParamLimits

0x820f,	// (0x00097613) main_cam6_set_pane_g2_ParamLimits

0x820f,	// (0x00097613) main_cam6_set_pane_g2

0x8233,	// (0x00097637) main_cset6_listscroll_pane_ParamLimits

0x8233,	// (0x00097637) main_cset6_listscroll_pane

0x8253,	// (0x00097657) main_cset6_slider_pane_ParamLimits

0x8253,	// (0x00097657) main_cset6_slider_pane

0x8269,	// (0x0009766d) main_cset6_text2_pane_ParamLimits

0x8269,	// (0x0009766d) main_cset6_text2_pane

0xc06e,	// (0x0009b472) main_cset6_text_pane

0xc076,	// (0x0009b47a) main_cset_list_pane_copy1_ParamLimits

0xc076,	// (0x0009b47a) main_cset_list_pane_copy1

0xc086,	// (0x0009b48a) scroll_pane_cp028_copy1

0x8277,	// (0x0009767b) cset_list_set_pane_copy1

0x8288,	// (0x0009768c) aid_position_infowindow_above_copy1

0x8290,	// (0x00097694) aid_position_infowindow_below_copy1

0x8298,	// (0x0009769c) cset_list_set_pane_g1_copy1

0x82a0,	// (0x000976a4) cset_list_set_pane_g3_copy1_ParamLimits

0x82a0,	// (0x000976a4) cset_list_set_pane_g3_copy1

0x82af,	// (0x000976b3) cset_list_set_pane_t1_copy1_ParamLimits

0x82af,	// (0x000976b3) cset_list_set_pane_t1_copy1

0x47f9,	// (0x00093bfd) list_highlight_pane_cp021_copy1_ParamLimits

0x47f9,	// (0x00093bfd) list_highlight_pane_cp021_copy1

0xc08f,	// (0x0009b493) cset6_slider_pane_ParamLimits

0xc08f,	// (0x0009b493) cset6_slider_pane

0xc0bb,	// (0x0009b4bf) main_cset6_slider_pane_g1_ParamLimits

0xc0bb,	// (0x0009b4bf) main_cset6_slider_pane_g1

0x82c4,	// (0x000976c8) main_cset6_slider_pane_g2_ParamLimits

0x82c4,	// (0x000976c8) main_cset6_slider_pane_g2

0xc0e3,	// (0x0009b4e7) main_cset6_slider_pane_g3_ParamLimits

0xc0e3,	// (0x0009b4e7) main_cset6_slider_pane_g3

0x82ec,	// (0x000976f0) main_cset6_slider_pane_g4_ParamLimits

0x82ec,	// (0x000976f0) main_cset6_slider_pane_g4

0x82f8,	// (0x000976fc) main_cset6_slider_pane_g5_ParamLimits

0x82f8,	// (0x000976fc) main_cset6_slider_pane_g5

0xb82d,	// (0x0009ac31) main_cset6_slider_pane_g7_ParamLimits

0xb82d,	// (0x0009ac31) main_cset6_slider_pane_g7

0xb839,	// (0x0009ac3d) main_cset6_slider_pane_g8_ParamLimits

0xb839,	// (0x0009ac3d) main_cset6_slider_pane_g8

0x732e,	// (0x00096732) main_cset6_slider_pane_g9_ParamLimits

0x732e,	// (0x00096732) main_cset6_slider_pane_g9

0x733a,	// (0x0009673e) main_cset6_slider_pane_g10_ParamLimits

0x733a,	// (0x0009673e) main_cset6_slider_pane_g10

0x7346,	// (0x0009674a) main_cset6_slider_pane_g11_ParamLimits

0x7346,	// (0x0009674a) main_cset6_slider_pane_g11

0x7352,	// (0x00096756) main_cset6_slider_pane_g12_ParamLimits

0x7352,	// (0x00096756) main_cset6_slider_pane_g12

0x735e,	// (0x00096762) main_cset6_slider_pane_g13_ParamLimits

0x735e,	// (0x00096762) main_cset6_slider_pane_g13

0x736a,	// (0x0009676e) main_cset6_slider_pane_g14_ParamLimits

0x736a,	// (0x0009676e) main_cset6_slider_pane_g14

0x8304,	// (0x00097708) main_cset6_slider_pane_g15_ParamLimits

0x8304,	// (0x00097708) main_cset6_slider_pane_g15

0x738e,	// (0x00096792) main_cset6_slider_pane_g16_ParamLimits

0x738e,	// (0x00096792) main_cset6_slider_pane_g16

0x739a,	// (0x0009679e) main_cset6_slider_pane_g17_ParamLimits

0x739a,	// (0x0009679e) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0009ef9c) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0009ef9c) main_cset6_slider_pane_g

0xc0ef,	// (0x0009b4f3) main_cset6_slider_pane_t1_ParamLimits

0xc0ef,	// (0x0009b4f3) main_cset6_slider_pane_t1

0x8334,	// (0x00097738) main_cset6_slider_pane_t2_ParamLimits

0x8334,	// (0x00097738) main_cset6_slider_pane_t2

0x835f,	// (0x00097763) main_cset6_slider_pane_t3_ParamLimits

0x835f,	// (0x00097763) main_cset6_slider_pane_t3

0x838a,	// (0x0009778e) main_cset6_slider_pane_t4_ParamLimits

0x838a,	// (0x0009778e) main_cset6_slider_pane_t4

0x83b5,	// (0x000977b9) main_cset6_slider_pane_t5_ParamLimits

0x83b5,	// (0x000977b9) main_cset6_slider_pane_t5

0xc130,	// (0x0009b534) main_cset6_slider_pane_t7_ParamLimits

0xc130,	// (0x0009b534) main_cset6_slider_pane_t7

0x83e0,	// (0x000977e4) main_cset6_slider_pane_t8_ParamLimits

0x83e0,	// (0x000977e4) main_cset6_slider_pane_t8

0x8404,	// (0x00097808) main_cset6_slider_pane_t9_ParamLimits

0x8404,	// (0x00097808) main_cset6_slider_pane_t9

0x8428,	// (0x0009782c) main_cset6_slider_pane_t10_ParamLimits

0x8428,	// (0x0009782c) main_cset6_slider_pane_t10

0x844c,	// (0x00097850) main_cset6_slider_pane_t11_ParamLimits

0x844c,	// (0x00097850) main_cset6_slider_pane_t11

0xc166,	// (0x0009b56a) main_cset6_slider_pane_t14_ParamLimits

0xc166,	// (0x0009b56a) main_cset6_slider_pane_t14

0xc19f,	// (0x0009b5a3) main_cset6_slider_pane_t15_ParamLimits

0xc19f,	// (0x0009b5a3) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0009efc1) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0009efc1) main_cset6_slider_pane_t

0xc1d8,	// (0x0009b5dc) cset_slider_pane_g1_copy1

0xc1e1,	// (0x0009b5e5) cset_slider_pane_g2_copy1

0xc1ea,	// (0x0009b5ee) cset_slider_pane_g3_copy1

0xec5a,	// (0x0009e05e) bg_popup_sub_pane_cp011_copy1

0xc2c4,	// (0x0009b6c8) main_cset_text_pane_g1_copy1

0xb9c9,	// (0x0009adcd) main_cset_text_pane_t1_copy1

0xb9d7,	// (0x0009addb) main_cset_text_pane_t2_copy1

0xb9e5,	// (0x0009ade9) main_cset_text_pane_t3_copy1

0xb9f3,	// (0x0009adf7) main_cset_text_pane_t4_copy1

0xba01,	// (0x0009ae05) main_cset_text_pane_t5_copy1

0xc2cc,	// (0x0009b6d0) main_cset_text_pane_t6_copy1

0xc2da,	// (0x0009b6de) main_cset_text_pane_t7_copy1

0x81f2,	// (0x000975f6) main_cset_text2_pane_t1_copy1

0xa0b1,	// (0x000994b5) main_ncimui_pane

0x4a49,	// (0x00093e4d) popup_query_ncimui_window_ParamLimits

0x4a49,	// (0x00093e4d) popup_query_ncimui_window

0xac66,	// (0x0009a06a) field_cale_ev2_pane_g4_ParamLimits

0xac66,	// (0x0009a06a) field_cale_ev2_pane_g4

0x6606,	// (0x00095a0a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6606,	// (0x00095a0a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0009ec9f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0009ec9f) cell_video_dialer_keypad_pane_g

0x661e,	// (0x00095a22) cell_video_dialer_keypad_pane_t1

0xec5a,	// (0x0009e05e) bg_popup_window_pane_cp012

0xe942,	// (0x0009dd46) heading_pane_cp06

0xc306,	// (0x0009b70a) ncim_query_content_pane

0xec5a,	// (0x0009e05e) bg_popup_heading_pane_cp01

0xc30e,	// (0x0009b712) ncim_heading_pane_t1

0xc31c,	// (0x0009b720) ncim_indicator_popup_pane

0xc32e,	// (0x0009b732) ncim_query_button_pane

0xc342,	// (0x0009b746) ncim_query_content_pane_t1

0xc354,	// (0x0009b758) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0009f005) ncim_query_content_pane_t

0xc38e,	// (0x0009b792) ncim_query_list_pane

0xc3a0,	// (0x0009b7a4) ncim_query_popup_pane

0xc31c,	// (0x0009b720) ncim_indicator_popup_pane_ParamLimits

0x8596,	// (0x0009799a) ncim_query_content_pane_g1_ParamLimits

0x8596,	// (0x0009799a) ncim_query_content_pane_g1

0xc342,	// (0x0009b746) ncim_query_content_pane_t1_ParamLimits

0xc354,	// (0x0009b758) ncim_query_content_pane_t2_ParamLimits

0x85a2,	// (0x000979a6) ncim_query_content_pane_t3_ParamLimits

0x85a2,	// (0x000979a6) ncim_query_content_pane_t3

0x85ca,	// (0x000979ce) ncim_query_content_pane_t4_ParamLimits

0x85ca,	// (0x000979ce) ncim_query_content_pane_t4

0x85f2,	// (0x000979f6) ncim_query_content_pane_t5_ParamLimits

0x85f2,	// (0x000979f6) ncim_query_content_pane_t5

0xc366,	// (0x0009b76a) ncim_query_content_pane_t6_ParamLimits

0xc366,	// (0x0009b76a) ncim_query_content_pane_t6

0xfc01,	// (0x0009f005) ncim_query_content_pane_t_ParamLimits

0xc38e,	// (0x0009b792) ncim_query_list_pane_ParamLimits

0xc3a0,	// (0x0009b7a4) ncim_query_popup_pane_ParamLimits

0xc3b4,	// (0x0009b7b8) wait_bar_pane_cp04

0xec5a,	// (0x0009e05e) input_focus_pane_cp011

0xc3bc,	// (0x0009b7c0) ncim_query_popup_pane_t1

0xc3ca,	// (0x0009b7ce) ncim_list_query_list_pane_ParamLimits

0xc3ca,	// (0x0009b7ce) ncim_list_query_list_pane

0xec5a,	// (0x0009e05e) bg_button_pane_cp027

0xc3d7,	// (0x0009b7db) ncim_query_button_pane_g1

0xec5a,	// (0x0009e05e) list_highlight_pane_cp012

0xc3e1,	// (0x0009b7e5) ncim_list_query_list_pane_g1

0xc3e9,	// (0x0009b7ed) ncim_list_query_list_pane_t1

0xdb44,	// (0x0009cf48) cam4_indicators_pane_g3_ParamLimits

0xdb44,	// (0x0009cf48) cam4_indicators_pane_g3

0xdbc4,	// (0x0009cfc8) vid4_indicators_pane_g5_ParamLimits

0xdbc4,	// (0x0009cfc8) vid4_indicators_pane_g5

0xdc83,	// (0x0009d087) vid4_progress_pane_g5_ParamLimits

0xdc83,	// (0x0009d087) vid4_progress_pane_g5

0x8484,	// (0x00097888) main_ncimui_pane_g1

0x84ea,	// (0x000978ee) ncimui_group_query_pane_ParamLimits

0x84ea,	// (0x000978ee) ncimui_group_query_pane

0x8532,	// (0x00097936) ncimui_list_pane_ParamLimits

0x8532,	// (0x00097936) ncimui_list_pane

0x8559,	// (0x0009795d) ncimui_text_pane_ParamLimits

0x8559,	// (0x0009795d) ncimui_text_pane

0x861a,	// (0x00097a1e) ncimui_text_pane_t1_ParamLimits

0x861a,	// (0x00097a1e) ncimui_text_pane_t1

0xc3f7,	// (0x0009b7fb) ncimui_list_single_graphic_pane_ParamLimits

0xc3f7,	// (0x0009b7fb) ncimui_list_single_graphic_pane

0x8638,	// (0x00097a3c) ncimui_query_pane_ParamLimits

0x8638,	// (0x00097a3c) ncimui_query_pane

0xec5a,	// (0x0009e05e) list_highlight_pane_cp013

0xc407,	// (0x0009b80b) ncim_list_query_list_pane_t1_copy1

0xc3e1,	// (0x0009b7e5) ncim_list_single_graphic_pane_g1

0xc415,	// (0x0009b819) ncim_query_button_pane_cp01

0xc421,	// (0x0009b825) ncim_query_entry_pane_ParamLimits

0xc421,	// (0x0009b825) ncim_query_entry_pane

0xc434,	// (0x0009b838) ncimui_query_pane_g1

0xc440,	// (0x0009b844) ncimui_query_pane_t1_ParamLimits

0xc440,	// (0x0009b844) ncimui_query_pane_t1

0x47f9,	// (0x00093bfd) input_focus_pane_cp012

0xc459,	// (0x0009b85d) ncim_query_entry_pane_t1

0xe0db,	// (0x0009d4df) main_im_pane_ParamLimits

0xa0b1,	// (0x000994b5) main_mobtv_pane_ParamLimits

0xa0b1,	// (0x000994b5) main_mobtv_pane

0x831c,	// (0x00097720) main_cset6_slider_pane_g18_ParamLimits

0x831c,	// (0x00097720) main_cset6_slider_pane_g18

0x8328,	// (0x0009772c) main_cset6_slider_pane_g19_ParamLimits

0x8328,	// (0x0009772c) main_cset6_slider_pane_g19

0xc46b,	// (0x0009b86f) bg_main_mobtv_pane_ParamLimits

0xc46b,	// (0x0009b86f) bg_main_mobtv_pane

0x864b,	// (0x00097a4f) main_mobtv_info_pane

0x8654,	// (0x00097a58) main_mobtv_loading_pane_ParamLimits

0x8654,	// (0x00097a58) main_mobtv_loading_pane

0xc479,	// (0x0009b87d) main_mobtv_pg_channel_list_pane

0xc483,	// (0x0009b887) main_mobtv_pg_hdr_pane

0x8661,	// (0x00097a65) main_mobtv_programe_curr_pane_ParamLimits

0x8661,	// (0x00097a65) main_mobtv_programe_curr_pane

0x866e,	// (0x00097a72) main_mobtv_programe_next_pane_ParamLimits

0x866e,	// (0x00097a72) main_mobtv_programe_next_pane

0xc48c,	// (0x0009b890) popup_mobtv_noti_window

0xa995,	// (0x00099d99) main_tv_pg_hdr_pane_g1

0xc494,	// (0x0009b898) main_tv_pg_hdr_pane_g2

0xc49c,	// (0x0009b8a0) main_tv_pg_hdr_pane_g3

0xc4a4,	// (0x0009b8a8) main_tv_pg_hdr_pane_g4

0xc4ac,	// (0x0009b8b0) main_tv_pg_hdr_pane_g5

0xc4b6,	// (0x0009b8ba) main_tv_pg_hdr_pane_g6

0xc4c0,	// (0x0009b8c4) main_tv_pg_hdr_pane_g7

0xc4ca,	// (0x0009b8ce) main_tv_pg_hdr_pane_g8

0xc4d4,	// (0x0009b8d8) main_tv_pg_hdr_pane_g9

0xc4de,	// (0x0009b8e2) main_tv_pg_hdr_pane_g10

0xc4e8,	// (0x0009b8ec) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0009f012) main_tv_pg_hdr_pane_g

0xc4f2,	// (0x0009b8f6) main_tv_pg_hdr_pane_t1

0xc500,	// (0x0009b904) main_tv_pg_hdr_pane_t2

0xc50e,	// (0x0009b912) main_tv_pg_hdr_pane_t3

0xc51e,	// (0x0009b922) main_tv_pg_hdr_pane_t4

0xc52e,	// (0x0009b932) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0009f029) main_tv_pg_hdr_pane_t

0xc53e,	// (0x0009b942) single_mobtv_pg_channel_pane_ParamLimits

0xc53e,	// (0x0009b942) single_mobtv_pg_channel_pane

0xc550,	// (0x0009b954) single_mobtv_pg_channel_table_pane

0xc559,	// (0x0009b95d) single_mobtv_pg_channel_thumb_pane

0xc562,	// (0x0009b966) single_tv_pg_channel_pane_g1

0xc56b,	// (0x0009b96f) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0009f034) single_tv_pg_channel_pane_g

0xac01,	// (0x0009a005) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xac01,	// (0x0009a005) bg_single_mobtv_pg_channel_thumb_pane

0xc574,	// (0x0009b978) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc574,	// (0x0009b978) single_mobtv_pg_channel_thumb_pane_g1

0xc582,	// (0x0009b986) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc582,	// (0x0009b986) single_mobtv_pg_channel_thumb_pane_g2

0xc58e,	// (0x0009b992) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc58e,	// (0x0009b992) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0009f039) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0009f039) single_mobtv_pg_channel_thumb_pane_g

0xc59a,	// (0x0009b99e) single_mobtv_pg_channel_thumb_pane_t1

0xc5a8,	// (0x0009b9ac) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0009f040) single_mobtv_pg_channel_thumb_pane_t

0xa995,	// (0x00099d99) bg_single_mobtv_pg_channel_table_pane_g1

0xa995,	// (0x00099d99) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x0009eaf0) bg_single_mobtv_pg_channel_table_pane_g

0xc5b6,	// (0x0009b9ba) single_mobtv_pg_channel_table_pane_t1

0xc5c4,	// (0x0009b9c8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0009f045) single_mobtv_pg_channel_table_pane_t

0x8683,	// (0x00097a87) main_mobtv_info_pane_g1_ParamLimits

0x8683,	// (0x00097a87) main_mobtv_info_pane_g1

0x86a1,	// (0x00097aa5) main_mobtv_info_pane_t1_ParamLimits

0x86a1,	// (0x00097aa5) main_mobtv_info_pane_t1

0x8719,	// (0x00097b1d) main_mobtv_info_pane_t2_ParamLimits

0x8719,	// (0x00097b1d) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0009f04f) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0009f04f) main_mobtv_info_pane_t

0x87a8,	// (0x00097bac) wait_bar_pane_cp05

0x87ba,	// (0x00097bbe) main_mobtv_loading_pane_g1_ParamLimits

0x87ba,	// (0x00097bbe) main_mobtv_loading_pane_g1

0x87cd,	// (0x00097bd1) main_mobtv_loading_pane_g2_ParamLimits

0x87cd,	// (0x00097bd1) main_mobtv_loading_pane_g2

0x87d9,	// (0x00097bdd) main_mobtv_loading_pane_g3_ParamLimits

0x87d9,	// (0x00097bdd) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0009f056) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0009f056) main_mobtv_loading_pane_g

0xc5d2,	// (0x0009b9d6) main_mobtv_loading_pane_t1_ParamLimits

0xc5d2,	// (0x0009b9d6) main_mobtv_loading_pane_t1

0xc5ea,	// (0x0009b9ee) main_mobtv_loading_pane_t2_ParamLimits

0xc5ea,	// (0x0009b9ee) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0009f05d) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0009f05d) main_mobtv_loading_pane_t

0x87ec,	// (0x00097bf0) wait_bar_pane_cp06_ParamLimits

0x87ec,	// (0x00097bf0) wait_bar_pane_cp06

0xc60e,	// (0x0009ba12) main_mobtv_programe_curr_pane_t1

0xc61c,	// (0x0009ba20) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0009f062) main_mobtv_programe_curr_pane_t

0xc62a,	// (0x0009ba2e) main_mobtv_programe_next_pane_t1

0xc638,	// (0x0009ba3c) main_mobtv_programe_next_pane_t2

0xc646,	// (0x0009ba4a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0009f067) main_mobtv_programe_next_pane_t

0xec5a,	// (0x0009e05e) bg_popup_mobtv_noti_window_pane

0xc654,	// (0x0009ba58) popup_mobtv_noti_window_g1

0xc65c,	// (0x0009ba60) popup_mobtv_noti_window_t1

0xc66a,	// (0x0009ba6e) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0009f06e) popup_mobtv_noti_window_t

0xa995,	// (0x00099d99) bg_popup_mobtv_noti_window_pane_g1

0xa0bf,	// (0x000994c3) sc_clock_pane

0xa0bf,	// (0x000994c3) main_fs_bigclock_pane

0x7f28,	// (0x0009732c) blid2_tripm_pane_t4_ParamLimits

0x7f28,	// (0x0009732c) blid2_tripm_pane_t4

0x87fb,	// (0x00097bff) sc_clock_pane_g1_ParamLimits

0x87fb,	// (0x00097bff) sc_clock_pane_g1

0x880d,	// (0x00097c11) sc_clock_pane_t1_ParamLimits

0x880d,	// (0x00097c11) sc_clock_pane_t1

0x882f,	// (0x00097c33) sc_clock_pane_t2_ParamLimits

0x882f,	// (0x00097c33) sc_clock_pane_t2

0x8847,	// (0x00097c4b) sc_clock_pane_t3_ParamLimits

0x8847,	// (0x00097c4b) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0009f073) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0009f073) sc_clock_pane_t

0x965c,	// (0x00098a60) main_fs_bigclock_indicator_pane_ParamLimits

0x965c,	// (0x00098a60) main_fs_bigclock_indicator_pane

0xabd1,	// (0x00099fd5) main_fs_bigclock_pane_g1_ParamLimits

0xabd1,	// (0x00099fd5) main_fs_bigclock_pane_g1

0x9668,	// (0x00098a6c) main_fs_bigclock_pane_t1_ParamLimits

0x9668,	// (0x00098a6c) main_fs_bigclock_pane_t1

0x967a,	// (0x00098a7e) main_fs_bigclock_pane_t2_ParamLimits

0x967a,	// (0x00098a7e) main_fs_bigclock_pane_t2

0x968e,	// (0x00098a92) main_fs_bigclock_pane_t3_ParamLimits

0x968e,	// (0x00098a92) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0009f277) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0009f277) main_fs_bigclock_pane_t

0xd2bb,	// (0x0009c6bf) main_fs_bigclock_indicator_pane_g1

0xc336,	// (0x0009b73a) ncim_query_content_pane_g2_ParamLimits

0xc336,	// (0x0009b73a) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0009f000) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0009f000) ncim_query_content_pane_g

0x8860,	// (0x00097c64) sc_clock_pane_t4_ParamLimits

0x8860,	// (0x00097c64) sc_clock_pane_t4

0xa0b1,	// (0x000994b5) main_radioblah_pane

0xb5f1,	// (0x0009a9f5) cell_call4_button_pane_t1_copy1_ParamLimits

0xb5f1,	// (0x0009a9f5) cell_call4_button_pane_t1_copy1

0x849c,	// (0x000978a0) main_ncimui_pane_t1_ParamLimits

0x849c,	// (0x000978a0) main_ncimui_pane_t1

0x84b6,	// (0x000978ba) main_ncimui_pane_t2_ParamLimits

0x84b6,	// (0x000978ba) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0009eff9) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0009eff9) main_ncimui_pane_t

0xc7b0,	// (0x0009bbb4) main_radioblah_anim_pane_ParamLimits

0xc7b0,	// (0x0009bbb4) main_radioblah_anim_pane

0xc7c1,	// (0x0009bbc5) main_radioblah_info_pane_ParamLimits

0xc7c1,	// (0x0009bbc5) main_radioblah_info_pane

0xc7d5,	// (0x0009bbd9) main_radioblah_pane_t1_ParamLimits

0xc7d5,	// (0x0009bbd9) main_radioblah_pane_t1

0xc7f1,	// (0x0009bbf5) main_radioblah_pane_t2_ParamLimits

0xc7f1,	// (0x0009bbf5) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0009f094) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0009f094) main_radioblah_pane_t

0x890e,	// (0x00097d12) main_radioblah_rocker_ctrl_pane_ParamLimits

0x890e,	// (0x00097d12) main_radioblah_rocker_ctrl_pane

0xc839,	// (0x0009bc3d) main_radioblah_info_pane_t1_ParamLimits

0xc839,	// (0x0009bc3d) main_radioblah_info_pane_t1

0x8966,	// (0x00097d6a) main_radioblah_info_pane_t2_ParamLimits

0x8966,	// (0x00097d6a) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0009f09d) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0009f09d) main_radioblah_info_pane_t

0xa995,	// (0x00099d99) main_radioblah_rocker_ctrl_pane_g1

0x8a16,	// (0x00097e1a) main_radioblah_rocker_ctrl_pane_g2

0x8a1e,	// (0x00097e22) main_radioblah_rocker_ctrl_pane_g3

0x8a26,	// (0x00097e2a) main_radioblah_rocker_ctrl_pane_g4

0x8a2e,	// (0x00097e32) main_radioblah_rocker_ctrl_pane_g5

0x8a36,	// (0x00097e3a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0009f0a6) main_radioblah_rocker_ctrl_pane_g

0x81f2,	// (0x000975f6) main_cset_text2_pane_t1_copy1_ParamLimits

0xdb06,	// (0x0009cf0a) cam4_image_uncrop_qvga_pane

0xdb6d,	// (0x0009cf71) vid4_image_uncrop_qcif_pane

0xdce4,	// (0x0009d0e8) cam6_image_uncrop_qvga_pane_ParamLimits

0xdce4,	// (0x0009d0e8) cam6_image_uncrop_qvga_pane

0xbf51,	// (0x0009b355) vid6_image_uncrop_qcif_pane_ParamLimits

0xbf51,	// (0x0009b355) vid6_image_uncrop_qcif_pane

0xec5a,	// (0x0009e05e) bg_popup_preview_window_pane_cp03

0xc2e8,	// (0x0009b6ec) list_cset_text2_pane

0xc2f0,	// (0x0009b6f4) main_cset6_text2_pane_g1

0xc2f8,	// (0x0009b6fc) main_cset6_text2_pane_t1

0x8a3e,	// (0x00097e42) list_cset_text2_pane_t1_ParamLimits

0x8a3e,	// (0x00097e42) list_cset_text2_pane_t1

0xa0b1,	// (0x000994b5) main_radioblah_pane_ParamLimits

0x8794,	// (0x00097b98) main_mobtv_info_pane_t3_ParamLimits

0x8794,	// (0x00097b98) main_mobtv_info_pane_t3

0x88fc,	// (0x00097d00) main_radioblah_pane_g1

0x8936,	// (0x00097d3a) main_radioblah_info_pane_g1

0x89bb,	// (0x00097dbf) main_radioblah_info_pane_t3_ParamLimits

0x89bb,	// (0x00097dbf) main_radioblah_info_pane_t3

0x26d9,	// (0x00091add) highlight_cell_cale_month_pane_ParamLimits

0x26d9,	// (0x00091add) highlight_cell_cale_month_pane

0xa0bf,	// (0x000994c3) main_phob_fisheye_pane

0xad21,	// (0x0009a125) scroll_pane_cp0031_ParamLimits

0xad21,	// (0x0009a125) scroll_pane_cp0031

0xc05f,	// (0x0009b463) wait_bar_pane_cp08_ParamLimits

0x8277,	// (0x0009767b) cset_list_set_pane_copy1_ParamLimits

0xc873,	// (0x0009bc77) highlight_cell_cale_month_pane_g1

0x8a57,	// (0x00097e5b) highlight_cell_cale_month_pane_t1

0xbc91,	// (0x0009b095) list_gen_pane_cp01

0xb818,	// (0x0009ac1c) scroll_pane_01

0x8a65,	// (0x00097e69) list_single_double_fisheye_pane

0x8a6e,	// (0x00097e72) list_double_fisheye_pane_g1_ParamLimits

0x8a6e,	// (0x00097e72) list_double_fisheye_pane_g1

0x8a7a,	// (0x00097e7e) list_double_fisheye_pane_g2_ParamLimits

0x8a7a,	// (0x00097e7e) list_double_fisheye_pane_g2

0x8a8e,	// (0x00097e92) list_double_fisheye_pane_g3_ParamLimits

0x8a8e,	// (0x00097e92) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0009f0b3) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0009f0b3) list_double_fisheye_pane_g

0x8ab7,	// (0x00097ebb) list_double_fisheye_pane_t1_ParamLimits

0x8ab7,	// (0x00097ebb) list_double_fisheye_pane_t1

0x8ad2,	// (0x00097ed6) list_double_fisheye_pane_t2_ParamLimits

0x8ad2,	// (0x00097ed6) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0009f0be) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0009f0be) list_double_fisheye_pane_t

0xa0bf,	// (0x000994c3) main_call5_pane

0x888b,	// (0x00097c8f) sc_swipe_pane_ParamLimits

0x888b,	// (0x00097c8f) sc_swipe_pane

0x8b07,	// (0x00097f0b) call5_image_pane_ParamLimits

0x8b07,	// (0x00097f0b) call5_image_pane

0x8b24,	// (0x00097f28) call5_swipe_1_pane_ParamLimits

0x8b24,	// (0x00097f28) call5_swipe_1_pane

0x8b37,	// (0x00097f3b) call5_swipe_2_pane_ParamLimits

0x8b37,	// (0x00097f3b) call5_swipe_2_pane

0x8b62,	// (0x00097f66) popup_call5_audio_first_window_ParamLimits

0x8b62,	// (0x00097f66) popup_call5_audio_first_window

0xac01,	// (0x0009a005) call5_swipe_1_pane_g1_ParamLimits

0xac01,	// (0x0009a005) call5_swipe_1_pane_g1

0xc87b,	// (0x0009bc7f) call5_swipe_1_pane_g2_ParamLimits

0xc87b,	// (0x0009bc7f) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0009f0c3) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0009f0c3) call5_swipe_1_pane_g

0xc887,	// (0x0009bc8b) call5_swipe_1_pane_t1_ParamLimits

0xc887,	// (0x0009bc8b) call5_swipe_1_pane_t1

0xac01,	// (0x0009a005) call5_swipe_2_pane_g1_ParamLimits

0xac01,	// (0x0009a005) call5_swipe_2_pane_g1

0xc89c,	// (0x0009bca0) call5_swipe_2_pane_g2_ParamLimits

0xc89c,	// (0x0009bca0) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0009f0c8) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0009f0c8) call5_swipe_2_pane_g

0xc8a8,	// (0x0009bcac) call5_swipe_2_pane_t1_ParamLimits

0xc8a8,	// (0x0009bcac) call5_swipe_2_pane_t1

0xc8bd,	// (0x0009bcc1) sc_swipe_pane_g1_ParamLimits

0xc8bd,	// (0x0009bcc1) sc_swipe_pane_g1

0xc8ca,	// (0x0009bcce) sc_swipe_pane_g2_ParamLimits

0xc8ca,	// (0x0009bcce) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0009f0cd) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0009f0cd) sc_swipe_pane_g

0xc8d6,	// (0x0009bcda) sc_swipe_pane_t1_ParamLimits

0xc8d6,	// (0x0009bcda) sc_swipe_pane_t1

0xa0bf,	// (0x000994c3) main_cmail_launcher_pane

0x8b73,	// (0x00097f77) aid_size_cell_cmail_l_ParamLimits

0x8b73,	// (0x00097f77) aid_size_cell_cmail_l

0x8b8d,	// (0x00097f91) grid_cmail_l_pane_ParamLimits

0x8b8d,	// (0x00097f91) grid_cmail_l_pane

0x8ba8,	// (0x00097fac) cell_cmail_l_pane_ParamLimits

0x8ba8,	// (0x00097fac) cell_cmail_l_pane

0x8bce,	// (0x00097fd2) cell_cmail_l_pane_g1_ParamLimits

0x8bce,	// (0x00097fd2) cell_cmail_l_pane_g1

0x8bda,	// (0x00097fde) cell_cmail_l_pane_t1_ParamLimits

0x8bda,	// (0x00097fde) cell_cmail_l_pane_t1

0xc8eb,	// (0x0009bcef) cell_cmail_l_pane_t2_ParamLimits

0xc8eb,	// (0x0009bcef) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0009f0d2) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0009f0d2) cell_cmail_l_pane_t

0x47f9,	// (0x00093bfd) grid_highlight_pane_cp018_ParamLimits

0x47f9,	// (0x00093bfd) grid_highlight_pane_cp018

0x0b2e,	// (0x0008ff32) main2_pane_ParamLimits

0x0b2e,	// (0x0008ff32) main2_pane

0xe174,	// (0x0009d578) popup_sp_fs_action_menu_bg_pane_g1

0xe17c,	// (0x0009d580) popup_sp_fs_action_menu_bg_pane_g2

0xe184,	// (0x0009d588) popup_sp_fs_action_menu_bg_pane_g3

0xe18c,	// (0x0009d590) popup_sp_fs_action_menu_bg_pane_g4

0xe194,	// (0x0009d598) popup_sp_fs_action_menu_bg_pane_g5

0xe19c,	// (0x0009d5a0) popup_sp_fs_action_menu_bg_pane_g6

0xe1a4,	// (0x0009d5a8) popup_sp_fs_action_menu_bg_pane_g7

0xe1ac,	// (0x0009d5b0) popup_sp_fs_action_menu_bg_pane_g8

0xe1b4,	// (0x0009d5b8) popup_sp_fs_action_menu_bg_pane_g9

0xe1bc,	// (0x0009d5c0) popup_sp_fs_action_menu_bg_pane_g10

0xe1bc,	// (0x0009d5c0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0009e59c) popup_sp_fs_action_menu_bg_pane_g

0x1934,	// (0x00090d38) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x2_t3_g3_g1

0x1940,	// (0x00090d44) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1940,	// (0x00090d44) list_medium_line_x2_t3_g3_g2

0x194c,	// (0x00090d50) list_medium_line_x2_t3_g3_g3_ParamLimits

0x194c,	// (0x00090d50) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0009e64c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0009e64c) list_medium_line_x2_t3_g3_g

0x1958,	// (0x00090d5c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1958,	// (0x00090d5c) list_medium_line_x2_t3_g3_t1

0x196d,	// (0x00090d71) list_medium_line_x2_t3_g3_t2_ParamLimits

0x196d,	// (0x00090d71) list_medium_line_x2_t3_g3_t2

0x1981,	// (0x00090d85) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1981,	// (0x00090d85) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0009e653) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0009e653) list_medium_line_x2_t3_g3_t

0x1934,	// (0x00090d38) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x2_t3_g2_g1

0x194c,	// (0x00090d50) list_medium_line_x2_t3_g2_g2_ParamLimits

0x194c,	// (0x00090d50) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0009e65a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0009e65a) list_medium_line_x2_t3_g2_g

0x1996,	// (0x00090d9a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1996,	// (0x00090d9a) list_medium_line_x2_t3_g2_t1

0x19ac,	// (0x00090db0) list_medium_line_x2_t3_g2_t2_ParamLimits

0x19ac,	// (0x00090db0) list_medium_line_x2_t3_g2_t2

0x19be,	// (0x00090dc2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x19be,	// (0x00090dc2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0009e65f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0009e65f) list_medium_line_x2_t3_g2_t

0x1934,	// (0x00090d38) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x2_t4_g4_g1

0x19db,	// (0x00090ddf) list_medium_line_x2_t4_g4_g2_ParamLimits

0x19db,	// (0x00090ddf) list_medium_line_x2_t4_g4_g2

0x1940,	// (0x00090d44) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1940,	// (0x00090d44) list_medium_line_x2_t4_g4_g3

0x19e7,	// (0x00090deb) list_medium_line_x2_t4_g4_g4_ParamLimits

0x19e7,	// (0x00090deb) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0009e666) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0009e666) list_medium_line_x2_t4_g4_g

0x19f3,	// (0x00090df7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x19f3,	// (0x00090df7) list_medium_line_x2_t4_g4_t1

0x1a0d,	// (0x00090e11) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1a0d,	// (0x00090e11) list_medium_line_x2_t4_g4_t2

0x1a23,	// (0x00090e27) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1a23,	// (0x00090e27) list_medium_line_x2_t4_g4_t3

0x1a38,	// (0x00090e3c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1a38,	// (0x00090e3c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0009e66f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0009e66f) list_medium_line_x2_t4_g4_t

0x1934,	// (0x00090d38) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x2_t2_g4_g1

0x19db,	// (0x00090ddf) list_medium_line_x2_t2_g4_g2_ParamLimits

0x19db,	// (0x00090ddf) list_medium_line_x2_t2_g4_g2

0x1940,	// (0x00090d44) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1940,	// (0x00090d44) list_medium_line_x2_t2_g4_g3

0x194c,	// (0x00090d50) list_medium_line_x2_t2_g4_g4_ParamLimits

0x194c,	// (0x00090d50) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0009e6d6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0009e6d6) list_medium_line_x2_t2_g4_g

0x26f7,	// (0x00091afb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x26f7,	// (0x00091afb) list_medium_line_x2_t2_g4_t1

0x1981,	// (0x00090d85) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1981,	// (0x00090d85) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0009e6df) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0009e6df) list_medium_line_x2_t2_g4_t

0x1934,	// (0x00090d38) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x2_t2_g3_g1

0x1940,	// (0x00090d44) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1940,	// (0x00090d44) list_medium_line_x2_t2_g3_g2

0x194c,	// (0x00090d50) list_medium_line_x2_t2_g3_g3_ParamLimits

0x194c,	// (0x00090d50) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0009e64c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0009e64c) list_medium_line_x2_t2_g3_g

0x270c,	// (0x00091b10) list_medium_line_x2_t2_g3_t1_ParamLimits

0x270c,	// (0x00091b10) list_medium_line_x2_t2_g3_t1

0x1981,	// (0x00090d85) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1981,	// (0x00090d85) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0009e6e4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0009e6e4) list_medium_line_x2_t2_g3_t

0x2845,	// (0x00091c49) main_sp_fs_list_pane_ParamLimits

0x2845,	// (0x00091c49) main_sp_fs_list_pane

0x2851,	// (0x00091c55) sp_fs_scroll_pane_ParamLimits

0x2851,	// (0x00091c55) sp_fs_scroll_pane

0x285d,	// (0x00091c61) list_medium_line_x2_t3_t1

0x286d,	// (0x00091c71) list_medium_line_x2_t3_t2

0x287b,	// (0x00091c7f) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0009e72f) list_medium_line_x2_t3_t

0x2889,	// (0x00091c8d) list_medium_line_x3_t4_t1

0x2899,	// (0x00091c9d) list_medium_line_x3_t4_t2

0x28a7,	// (0x00091cab) list_medium_line_x3_t4_t3

0x287b,	// (0x00091c7f) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0009e736) list_medium_line_x3_t4_t

0x28b5,	// (0x00091cb9) list_medium_line_x4_t5_t1

0x28c5,	// (0x00091cc9) list_medium_line_x4_t5_t2

0x28a7,	// (0x00091cab) list_medium_line_x4_t5_t3

0x28d3,	// (0x00091cd7) list_medium_line_x4_t5_t4

0x287b,	// (0x00091c7f) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0009e73f) list_medium_line_x4_t5_t

0x1934,	// (0x00090d38) list_medium_line_t4_g4_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_t4_g4_g1

0x19e7,	// (0x00090deb) list_medium_line_t4_g4_g2_ParamLimits

0x19e7,	// (0x00090deb) list_medium_line_t4_g4_g2

0x28e1,	// (0x00091ce5) list_medium_line_t4_g4_g3_ParamLimits

0x28e1,	// (0x00091ce5) list_medium_line_t4_g4_g3

0x194c,	// (0x00090d50) list_medium_line_t4_g4_g4_ParamLimits

0x194c,	// (0x00090d50) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0009e74a) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0009e74a) list_medium_line_t4_g4_g

0x28ed,	// (0x00091cf1) list_medium_line_t4_g4_t1_ParamLimits

0x28ed,	// (0x00091cf1) list_medium_line_t4_g4_t1

0x2902,	// (0x00091d06) list_medium_line_t4_g4_t2_ParamLimits

0x2902,	// (0x00091d06) list_medium_line_t4_g4_t2

0x2917,	// (0x00091d1b) list_medium_line_t4_g4_t3_ParamLimits

0x2917,	// (0x00091d1b) list_medium_line_t4_g4_t3

0x1981,	// (0x00090d85) list_medium_line_t4_g4_t4_ParamLimits

0x1981,	// (0x00090d85) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0009e753) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0009e753) list_medium_line_t4_g4_t

0x29ef,	// (0x00091df3) chi_dic_find_pane_g1

0x481b,	// (0x00093c1f) main_tport_pane

0xb952,	// (0x0009ad56) list_medium_line_plain_t1

0xb968,	// (0x0009ad6c) list_medium_line_t2_g2_g1_ParamLimits

0xb968,	// (0x0009ad6c) list_medium_line_t2_g2_g1

0xb974,	// (0x0009ad78) list_medium_line_t2_g2_g2_ParamLimits

0xb974,	// (0x0009ad78) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0009ee0a) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0009ee0a) list_medium_line_t2_g2_g

0x76d8,	// (0x00096adc) list_medium_line_t2_g2_t1_ParamLimits

0x76d8,	// (0x00096adc) list_medium_line_t2_g2_t1

0x76f2,	// (0x00096af6) list_medium_line_t2_g2_t2_ParamLimits

0x76f2,	// (0x00096af6) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0009ee0f) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0009ee0f) list_medium_line_t2_g2_t

0xbc9a,	// (0x0009b09e) aid_sp_fs_list_icon_a_sm

0xbca2,	// (0x0009b0a6) aid_sp_fs_list_icon_d

0xbcaa,	// (0x0009b0ae) aid_sp_fs_text_primary

0xbcb3,	// (0x0009b0b7) aid_sp_fs_text_secondary

0xbcbc,	// (0x0009b0c0) list_medium_line

0xbcbc,	// (0x0009b0c0) list_medium_line_g2

0xbcbc,	// (0x0009b0c0) list_medium_line_g3

0xbcbc,	// (0x0009b0c0) list_medium_line_plain

0xbcbc,	// (0x0009b0c0) list_medium_line_plain_t2

0xbcbc,	// (0x0009b0c0) list_medium_line_plain_t3

0xbcbc,	// (0x0009b0c0) list_medium_line_right_icon

0xbcbc,	// (0x0009b0c0) list_medium_line_right_iconx2

0xbcbc,	// (0x0009b0c0) list_medium_line_t2

0xbcbc,	// (0x0009b0c0) list_medium_line_t2_g2

0xbcbc,	// (0x0009b0c0) list_medium_line_t2_g3

0xbcbc,	// (0x0009b0c0) list_medium_line_t2_right_icon

0xbcbc,	// (0x0009b0c0) list_medium_line_t2_right_iconx2

0xbcbc,	// (0x0009b0c0) list_medium_line_t3

0xbcbc,	// (0x0009b0c0) list_medium_line_t3_g2

0xbcbc,	// (0x0009b0c0) list_medium_line_t3_g3

0xbcbc,	// (0x0009b0c0) list_medium_line_t3_right_iconx2

0xbcc5,	// (0x0009b0c9) list_medium_line_t4_g4

0xbcce,	// (0x0009b0d2) list_medium_line_x2

0xbcce,	// (0x0009b0d2) list_medium_line_x2_t2_g2

0xbcce,	// (0x0009b0d2) list_medium_line_x2_t2_g3

0xbcce,	// (0x0009b0d2) list_medium_line_x2_t2_g4

0xbcce,	// (0x0009b0d2) list_medium_line_x2_t3

0xbcce,	// (0x0009b0d2) list_medium_line_x2_t3_g2

0xbcce,	// (0x0009b0d2) list_medium_line_x2_t3_g3

0xbcce,	// (0x0009b0d2) list_medium_line_x2_t3_g4

0xbcce,	// (0x0009b0d2) list_medium_line_x2_t4_g2

0xbcce,	// (0x0009b0d2) list_medium_line_x2_t4_g4

0xbcd7,	// (0x0009b0db) list_medium_line_x3

0xbcd7,	// (0x0009b0db) list_medium_line_x3_t4

0xbcd7,	// (0x0009b0db) list_medium_line_x3_t4_g4

0xbcc5,	// (0x0009b0c9) list_medium_line_x4_t4

0xbcc5,	// (0x0009b0c9) list_medium_line_x4_t4_g7

0xbcc5,	// (0x0009b0c9) list_medium_line_x4_t5

0xbce0,	// (0x0009b0e4) list_single_fs_dyc_pane_ParamLimits

0xbce0,	// (0x0009b0e4) list_single_fs_dyc_pane

0x1934,	// (0x00090d38) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x4_t4_g7_g1

0xc1f3,	// (0x0009b5f7) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc1f3,	// (0x0009b5f7) list_medium_line_x4_t4_g7_g2

0xc1ff,	// (0x0009b603) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc1ff,	// (0x0009b603) list_medium_line_x4_t4_g7_g3

0xc20e,	// (0x0009b612) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc20e,	// (0x0009b612) list_medium_line_x4_t4_g7_g4

0xc21a,	// (0x0009b61e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc21a,	// (0x0009b61e) list_medium_line_x4_t4_g7_g5

0xc229,	// (0x0009b62d) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc229,	// (0x0009b62d) list_medium_line_x4_t4_g7_g6

0xc238,	// (0x0009b63c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc238,	// (0x0009b63c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0009efda) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0009efda) list_medium_line_x4_t4_g7_g

0xc244,	// (0x0009b648) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc244,	// (0x0009b648) list_medium_line_x4_t4_g7_t1

0xc259,	// (0x0009b65d) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc259,	// (0x0009b65d) list_medium_line_x4_t4_g7_t2

0xc26e,	// (0x0009b672) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc26e,	// (0x0009b672) list_medium_line_x4_t4_g7_t3

0xc283,	// (0x0009b687) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc283,	// (0x0009b687) list_medium_line_x4_t4_g7_t4

0xc295,	// (0x0009b699) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc295,	// (0x0009b699) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0009efe9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0009efe9) list_medium_line_x4_t4_g7_t

0xc2a7,	// (0x0009b6ab) list_single_dyc_row_pane_ParamLimits

0xc2a7,	// (0x0009b6ab) list_single_dyc_row_pane

0x8af4,	// (0x00097ef8) call5_gesture_pane_ParamLimits

0x8af4,	// (0x00097ef8) call5_gesture_pane

0x8b4a,	// (0x00097f4e) call5_windows_pane_ParamLimits

0x8b4a,	// (0x00097f4e) call5_windows_pane

0x8bf0,	// (0x00097ff4) call5_swipe_1_pane_cp_ParamLimits

0x8bf0,	// (0x00097ff4) call5_swipe_1_pane_cp

0x8bfc,	// (0x00098000) call5_swipe_2_pane_cp_ParamLimits

0x8bfc,	// (0x00098000) call5_swipe_2_pane_cp

0xebae,	// (0x0009dfb2) call5_image_pane_cp

0x8c08,	// (0x0009800c) popup_call5_audio_first_window_cp_ParamLimits

0x8c08,	// (0x0009800c) popup_call5_audio_first_window_cp

0xc8bd,	// (0x0009bcc1) call5_swipe_1_pane_g1_cp_ParamLimits

0xc8bd,	// (0x0009bcc1) call5_swipe_1_pane_g1_cp

0xc8fd,	// (0x0009bd01) call5_swipe_1_pane_g2_cp

0xc8d6,	// (0x0009bcda) call5_swipe_1_pane_t1_cp_ParamLimits

0xc8d6,	// (0x0009bcda) call5_swipe_1_pane_t1_cp

0xc8bd,	// (0x0009bcc1) call5_swipe_2_pane_g1_cp_ParamLimits

0xc8bd,	// (0x0009bcc1) call5_swipe_2_pane_g1_cp

0xc905,	// (0x0009bd09) call5_swipe_2_pane_g2_cp

0xc90d,	// (0x0009bd11) call5_swipe_2_pane_t1_cp_ParamLimits

0xc90d,	// (0x0009bd11) call5_swipe_2_pane_t1_cp

0x47f9,	// (0x00093bfd) main_sp_fs_email_pane

0xc922,	// (0x0009bd26) main_sp_fs_listscroll_pane_te

0xc92b,	// (0x0009bd2f) popup_sp_fs_action_menu_pane_ParamLimits

0xc92b,	// (0x0009bd2f) popup_sp_fs_action_menu_pane

0xa995,	// (0x00099d99) bg_sp_fs_ctrlbar_pane_g1

0xc96f,	// (0x0009bd73) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc978,	// (0x0009bd7c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc981,	// (0x0009bd85) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa995,	// (0x00099d99) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0009f0d7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa77a,	// (0x00099b7e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa77a,	// (0x00099b7e) bg_sp_fs_ctrlbar_ddmenu_pane

0xc98a,	// (0x0009bd8e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc98a,	// (0x0009bd8e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc996,	// (0x0009bd9a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc996,	// (0x0009bd9a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0009f0e0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0009f0e0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc9a2,	// (0x0009bda6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc9a2,	// (0x0009bda6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc9bc,	// (0x0009bdc0) list_medium_line_t2_right_icon_g1

0x8c16,	// (0x0009801a) list_medium_line_t2_right_icon_t1

0x8c26,	// (0x0009802a) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0009f0e5) list_medium_line_t2_right_icon_t

0xa48f,	// (0x00099893) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa48f,	// (0x00099893) bg_sp_fs_ctrlbar_pane

0x8c83,	// (0x00098087) main_sp_fs_ctrlbar_button_pane_cp01

0x8c8d,	// (0x00098091) main_sp_fs_ctrlbar_ddmenu_pane

0xc9fc,	// (0x0009be00) main_sp_fs_ctrlbar_pane_g1

0xca08,	// (0x0009be0c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0009f0ea) main_sp_fs_ctrlbar_pane_g

0xca14,	// (0x0009be18) main_sp_fs_ctrlbar_pane_t1

0x8c97,	// (0x0009809b) main_sp_fs_ctrlbar_pane

0x8cbb,	// (0x000980bf) main_sp_fs_listscroll_pane_te_cp01

0x8cdb,	// (0x000980df) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8cdb,	// (0x000980df) popup_sp_fs_action_menu_pane_cp01

0x47f9,	// (0x00093bfd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x47f9,	// (0x00093bfd) bg_sp_fs_highlight_list_pane_cp01

0xca39,	// (0x0009be3d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xca39,	// (0x0009be3d) sp_fs_action_menu_list_gene_pane_g1

0xca48,	// (0x0009be4c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xca48,	// (0x0009be4c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0009f0f4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0009f0f4) sp_fs_action_menu_list_gene_pane_g

0xca55,	// (0x0009be59) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xca55,	// (0x0009be59) sp_fs_action_menu_list_gene_pane_t1

0xca6d,	// (0x0009be71) sp_fs_action_menu_list_gene_pane_ParamLimits

0xca6d,	// (0x0009be71) sp_fs_action_menu_list_gene_pane

0xca8e,	// (0x0009be92) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xca8e,	// (0x0009be92) popup_sp_fs_action_menu_bg_pane

0xca9c,	// (0x0009bea0) sp_fs_action_menu_list_pane_ParamLimits

0xca9c,	// (0x0009bea0) sp_fs_action_menu_list_pane

0xcabe,	// (0x0009bec2) sp_fs_scroll_pane_cp01_ParamLimits

0xcabe,	// (0x0009bec2) sp_fs_scroll_pane_cp01

0x8d0b,	// (0x0009810f) list_medium_line_plain_t2_t1

0x8d1b,	// (0x0009811f) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0009f0f9) list_medium_line_plain_t2_t

0x8d2b,	// (0x0009812f) list_medium_line_plain_t3_t1

0x8d3b,	// (0x0009813f) list_medium_line_plain_t3_t2

0x8d49,	// (0x0009814d) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0009f0fe) list_medium_line_plain_t3_t

0x1934,	// (0x00090d38) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x2_t2_g2_g1

0x194c,	// (0x00090d50) list_medium_line_x2_t2_g2_g2_ParamLimits

0x194c,	// (0x00090d50) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0009e65a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0009e65a) list_medium_line_x2_t2_g2_g

0x28ed,	// (0x00091cf1) list_medium_line_x2_t2_g2_t1_ParamLimits

0x28ed,	// (0x00091cf1) list_medium_line_x2_t2_g2_t1

0x1981,	// (0x00090d85) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1981,	// (0x00090d85) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0009f105) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0009f105) list_medium_line_x2_t2_g2_t

0x1934,	// (0x00090d38) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x2_t4_g2_g1

0xcae4,	// (0x0009bee8) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcae4,	// (0x0009bee8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x0009f10a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x0009f10a) list_medium_line_x2_t4_g2_g

0x8d57,	// (0x0009815b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8d57,	// (0x0009815b) list_medium_line_x2_t4_g2_t1

0x8d71,	// (0x00098175) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8d71,	// (0x00098175) list_medium_line_x2_t4_g2_t2

0x8d86,	// (0x0009818a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8d86,	// (0x0009818a) list_medium_line_x2_t4_g2_t3

0x1981,	// (0x00090d85) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1981,	// (0x00090d85) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0009f10f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0009f10f) list_medium_line_x2_t4_g2_t

0xcaf6,	// (0x0009befa) list_medium_line_t3_right_iconx2_g1

0xc9bc,	// (0x0009bdc0) list_medium_line_t3_right_iconx2_g2

0x8d9b,	// (0x0009819f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0009f118) list_medium_line_t3_right_iconx2_g

0x8da5,	// (0x000981a9) list_medium_line_t3_right_iconx2_t1

0x8db5,	// (0x000981b9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0009f11f) list_medium_line_t3_right_iconx2_t

0x1934,	// (0x00090d38) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x3_t4_g4_g1

0x1940,	// (0x00090d44) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1940,	// (0x00090d44) list_medium_line_x3_t4_g4_g2

0x19e7,	// (0x00090deb) list_medium_line_x3_t4_g4_g3_ParamLimits

0x19e7,	// (0x00090deb) list_medium_line_x3_t4_g4_g3

0xcafe,	// (0x0009bf02) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcafe,	// (0x0009bf02) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0009f124) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0009f124) list_medium_line_x3_t4_g4_g

0x8dc3,	// (0x000981c7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8dc3,	// (0x000981c7) list_medium_line_x3_t4_g4_t1

0x8dda,	// (0x000981de) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8dda,	// (0x000981de) list_medium_line_x3_t4_g4_t2

0x2902,	// (0x00091d06) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2902,	// (0x00091d06) list_medium_line_x3_t4_g4_t3

0xcb0a,	// (0x0009bf0e) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcb0a,	// (0x0009bf0e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0009f12d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0009f12d) list_medium_line_x3_t4_g4_t

0x8df5,	// (0x000981f9) list_single_dyc_row_text_pane_t1_ParamLimits

0x8df5,	// (0x000981f9) list_single_dyc_row_text_pane_t1

0x8e3e,	// (0x00098242) list_single_dyc_row_text_pane_t2_ParamLimits

0x8e3e,	// (0x00098242) list_single_dyc_row_text_pane_t2

0xcb27,	// (0x0009bf2b) list_single_dyc_row_text_pane_t3_ParamLimits

0xcb27,	// (0x0009bf2b) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0009f136) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0009f136) list_single_dyc_row_text_pane_t

0xcb39,	// (0x0009bf3d) list_single_dyc_row_pane_g1_ParamLimits

0xcb39,	// (0x0009bf3d) list_single_dyc_row_pane_g1

0xcb45,	// (0x0009bf49) list_single_dyc_row_pane_g2_ParamLimits

0xcb45,	// (0x0009bf49) list_single_dyc_row_pane_g2

0xcb51,	// (0x0009bf55) list_single_dyc_row_pane_g3_ParamLimits

0xcb51,	// (0x0009bf55) list_single_dyc_row_pane_g3

0xcb5d,	// (0x0009bf61) list_single_dyc_row_pane_g4_ParamLimits

0xcb5d,	// (0x0009bf61) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0009f13d) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0009f13d) list_single_dyc_row_pane_g

0xcb69,	// (0x0009bf6d) list_single_dyc_row_text_pane_ParamLimits

0xcb69,	// (0x0009bf6d) list_single_dyc_row_text_pane

0xec5a,	// (0x0009e05e) bg_sp_fs_scroll_pane

0xcb88,	// (0x0009bf8c) thumb_sp_fs_scroll_pane

0xb968,	// (0x0009ad6c) list_medium_line_g1_ParamLimits

0xb968,	// (0x0009ad6c) list_medium_line_g1

0xcb91,	// (0x0009bf95) list_medium_line_t1_ParamLimits

0xcb91,	// (0x0009bf95) list_medium_line_t1

0x1934,	// (0x00090d38) list_medium_line_x2_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x2_g1

0x1940,	// (0x00090d44) list_medium_line_x2_g2_ParamLimits

0x1940,	// (0x00090d44) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0009f146) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0009f146) list_medium_line_x2_g

0xcba6,	// (0x0009bfaa) list_medium_line_x2_t1_ParamLimits

0xcba6,	// (0x0009bfaa) list_medium_line_x2_t1

0x1934,	// (0x00090d38) list_medium_line_x3_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x3_g1

0x1940,	// (0x00090d44) list_medium_line_x3_g2_ParamLimits

0x1940,	// (0x00090d44) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0009f146) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0009f146) list_medium_line_x3_g

0xcba6,	// (0x0009bfaa) list_medium_line_x3_t1_ParamLimits

0xcba6,	// (0x0009bfaa) list_medium_line_x3_t1

0xcbbc,	// (0x0009bfc0) thumb_sp_fs_scroll_pane_g1

0xcbc5,	// (0x0009bfc9) thumb_sp_fs_scroll_pane_g2

0xcbce,	// (0x0009bfd2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009f14b) thumb_sp_fs_scroll_pane_g

0xcbbc,	// (0x0009bfc0) bg_sp_fs_scroll_pane_g1

0xcbc5,	// (0x0009bfc9) bg_sp_fs_scroll_pane_g2

0xcbce,	// (0x0009bfd2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009f14b) bg_sp_fs_scroll_pane_g

0x1934,	// (0x00090d38) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1934,	// (0x00090d38) list_medium_line_x2_t3_g4_g1

0x19db,	// (0x00090ddf) list_medium_line_x2_t3_g4_g2_ParamLimits

0x19db,	// (0x00090ddf) list_medium_line_x2_t3_g4_g2

0x1940,	// (0x00090d44) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1940,	// (0x00090d44) list_medium_line_x2_t3_g4_g3

0x194c,	// (0x00090d50) list_medium_line_x2_t3_g4_g4_ParamLimits

0x194c,	// (0x00090d50) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0009e6d6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0009e6d6) list_medium_line_x2_t3_g4_g

0x8e98,	// (0x0009829c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8e98,	// (0x0009829c) list_medium_line_x2_t3_g4_t1

0x8eb2,	// (0x000982b6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8eb2,	// (0x000982b6) list_medium_line_x2_t3_g4_t2

0x1981,	// (0x00090d85) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1981,	// (0x00090d85) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0009f152) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0009f152) list_medium_line_x2_t3_g4_t

0xb968,	// (0x0009ad6c) list_medium_line_g2_g1_ParamLimits

0xb968,	// (0x0009ad6c) list_medium_line_g2_g1

0xb974,	// (0x0009ad78) list_medium_line_g2_g2_ParamLimits

0xb974,	// (0x0009ad78) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0009ee0a) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0009ee0a) list_medium_line_g2_g

0xcbd7,	// (0x0009bfdb) list_medium_line_g2_t1_ParamLimits

0xcbd7,	// (0x0009bfdb) list_medium_line_g2_t1

0xb968,	// (0x0009ad6c) list_medium_line_t3_g2_g1_ParamLimits

0xb968,	// (0x0009ad6c) list_medium_line_t3_g2_g1

0xb974,	// (0x0009ad78) list_medium_line_t3_g2_g2_ParamLimits

0xb974,	// (0x0009ad78) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0009ee0a) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0009ee0a) list_medium_line_t3_g2_g

0x8ecc,	// (0x000982d0) list_medium_line_t3_g2_t1_ParamLimits

0x8ecc,	// (0x000982d0) list_medium_line_t3_g2_t1

0x8ee3,	// (0x000982e7) list_medium_line_t3_g2_t2_ParamLimits

0x8ee3,	// (0x000982e7) list_medium_line_t3_g2_t2

0x8ef8,	// (0x000982fc) list_medium_line_t3_g2_t3_ParamLimits

0x8ef8,	// (0x000982fc) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0009f159) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0009f159) list_medium_line_t3_g2_t

0xc9bc,	// (0x0009bdc0) list_medium_line_right_icon_g1

0xcbec,	// (0x0009bff0) list_medium_line_right_icon_t1

0xb968,	// (0x0009ad6c) list_medium_line_t2_g1_ParamLimits

0xb968,	// (0x0009ad6c) list_medium_line_t2_g1

0x8f11,	// (0x00098315) list_medium_line_t2_t1_ParamLimits

0x8f11,	// (0x00098315) list_medium_line_t2_t1

0x8f2b,	// (0x0009832f) list_medium_line_t2_t2_ParamLimits

0x8f2b,	// (0x0009832f) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0009f160) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0009f160) list_medium_line_t2_t

0xb968,	// (0x0009ad6c) list_medium_line_t3_g1_ParamLimits

0xb968,	// (0x0009ad6c) list_medium_line_t3_g1

0x8f44,	// (0x00098348) list_medium_line_t3_t1_ParamLimits

0x8f44,	// (0x00098348) list_medium_line_t3_t1

0x8f5e,	// (0x00098362) list_medium_line_t3_t2_ParamLimits

0x8f5e,	// (0x00098362) list_medium_line_t3_t2

0x8f73,	// (0x00098377) list_medium_line_t3_t3_ParamLimits

0x8f73,	// (0x00098377) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0009f165) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0009f165) list_medium_line_t3_t

0xb968,	// (0x0009ad6c) list_medium_line_g3_g1_ParamLimits

0xb968,	// (0x0009ad6c) list_medium_line_g3_g1

0xcbfa,	// (0x0009bffe) list_medium_line_g3_g2_ParamLimits

0xcbfa,	// (0x0009bffe) list_medium_line_g3_g2

0xb974,	// (0x0009ad78) list_medium_line_g3_g3_ParamLimits

0xb974,	// (0x0009ad78) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0009f16c) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0009f16c) list_medium_line_g3_g

0xcc06,	// (0x0009c00a) list_medium_line_g3_t1_ParamLimits

0xcc06,	// (0x0009c00a) list_medium_line_g3_t1

0xb968,	// (0x0009ad6c) list_medium_line_t2_g3_g1_ParamLimits

0xb968,	// (0x0009ad6c) list_medium_line_t2_g3_g1

0xcbfa,	// (0x0009bffe) list_medium_line_t2_g3_g2_ParamLimits

0xcbfa,	// (0x0009bffe) list_medium_line_t2_g3_g2

0xb974,	// (0x0009ad78) list_medium_line_t2_g3_g3_ParamLimits

0xb974,	// (0x0009ad78) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0009f16c) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0009f16c) list_medium_line_t2_g3_g

0x8f88,	// (0x0009838c) list_medium_line_t2_g3_t1_ParamLimits

0x8f88,	// (0x0009838c) list_medium_line_t2_g3_t1

0x8fa2,	// (0x000983a6) list_medium_line_t2_g3_t2_ParamLimits

0x8fa2,	// (0x000983a6) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0009f173) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0009f173) list_medium_line_t2_g3_t

0xb968,	// (0x0009ad6c) list_medium_line_t3_g3_g1_ParamLimits

0xb968,	// (0x0009ad6c) list_medium_line_t3_g3_g1

0xcbfa,	// (0x0009bffe) list_medium_line_t3_g3_g2_ParamLimits

0xcbfa,	// (0x0009bffe) list_medium_line_t3_g3_g2

0xb974,	// (0x0009ad78) list_medium_line_t3_g3_g3_ParamLimits

0xb974,	// (0x0009ad78) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0009f16c) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0009f16c) list_medium_line_t3_g3_g

0x8fbd,	// (0x000983c1) list_medium_line_t3_g3_t1_ParamLimits

0x8fbd,	// (0x000983c1) list_medium_line_t3_g3_t1

0x8fd1,	// (0x000983d5) list_medium_line_t3_g3_t2_ParamLimits

0x8fd1,	// (0x000983d5) list_medium_line_t3_g3_t2

0x8fe3,	// (0x000983e7) list_medium_line_t3_g3_t3_ParamLimits

0x8fe3,	// (0x000983e7) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0009f178) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0009f178) list_medium_line_t3_g3_t

0xcaf6,	// (0x0009befa) list_medium_line_right_iconx2_g1

0xc9bc,	// (0x0009bdc0) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009f17f) list_medium_line_right_iconx2_g

0xcc1b,	// (0x0009c01f) list_medium_line_right_iconx2_t1

0xcaf6,	// (0x0009befa) list_medium_line_t2_right_iconx2_g1

0xc9bc,	// (0x0009bdc0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009f17f) list_medium_line_t2_right_iconx2_g

0x8ff7,	// (0x000983fb) list_medium_line_t2_right_iconx2_t1

0x9007,	// (0x0009840b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0009f184) list_medium_line_t2_right_iconx2_t

0xcc29,	// (0x0009c02d) list_medium_line_x4_t4_t1

0x9019,	// (0x0009841d) list_medium_line_x4_t4_t2

0x9029,	// (0x0009842d) list_medium_line_x4_t4_t3

0x9039,	// (0x0009843d) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0009f189) list_medium_line_x4_t4_t

0x908c,	// (0x00098490) tport_appsw_pane_ParamLimits

0x908c,	// (0x00098490) tport_appsw_pane

0x909d,	// (0x000984a1) tport_contact_pane_ParamLimits

0x909d,	// (0x000984a1) tport_contact_pane

0x90b6,	// (0x000984ba) tport_listscroll_pane_ParamLimits

0x90b6,	// (0x000984ba) tport_listscroll_pane

0x90d1,	// (0x000984d5) cell_tport_appsw_pane_ParamLimits

0x90d1,	// (0x000984d5) cell_tport_appsw_pane

0xb692,	// (0x0009aa96) tport_appsw_pane_g1_ParamLimits

0xb692,	// (0x0009aa96) tport_appsw_pane_g1

0xcc37,	// (0x0009c03b) tport_contact_pane_g1

0xc3bc,	// (0x0009b7c0) tport_contact_pane_t1

0xcc40,	// (0x0009c044) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0009f192) tport_contact_pane_t

0xcc4e,	// (0x0009c052) list_tport_pane

0xcc57,	// (0x0009c05b) scroll_pane_cp_030

0xcc68,	// (0x0009c06c) cell_tport_appsw_pane_g1

0xcc78,	// (0x0009c07c) cell_tport_appsw_pane_t1

0xec5a,	// (0x0009e05e) grid_highlight_pane_cp019

0x9111,	// (0x00098515) list_tport_double_graphic_pane_ParamLimits

0x9111,	// (0x00098515) list_tport_double_graphic_pane

0x47f9,	// (0x00093bfd) list_highlight_pane_cp023_ParamLimits

0x47f9,	// (0x00093bfd) list_highlight_pane_cp023

0x911e,	// (0x00098522) list_tport_double_graphic_pane_g1_ParamLimits

0x911e,	// (0x00098522) list_tport_double_graphic_pane_g1

0x912b,	// (0x0009852f) list_tport_double_graphic_pane_t1_ParamLimits

0x912b,	// (0x0009852f) list_tport_double_graphic_pane_t1

0x9140,	// (0x00098544) list_tport_double_graphic_pane_t2_ParamLimits

0x9140,	// (0x00098544) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0009f19e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0009f19e) list_tport_double_graphic_pane_t

0xec5a,	// (0x0009e05e) main_cale_note_pane

0x6ebe,	// (0x000962c2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6ebe,	// (0x000962c2) cell_vitu2_function_top_wide_pane_cp01

0x87a8,	// (0x00097bac) wait_bar_pane_cp05_ParamLimits

0xec5a,	// (0x0009e05e) listscroll_cmail_pane

0xcc8e,	// (0x0009c092) list_cmail_pane

0xb921,	// (0x0009ad25) list_cmail_body_pane

0x915c,	// (0x00098560) list_single_cmail_header_caption_pane

0x9172,	// (0x00098576) list_single_cmail_header_detail_pane_ParamLimits

0x9172,	// (0x00098576) list_single_cmail_header_detail_pane

0x919b,	// (0x0009859f) list_single_cmail_header_caption_pane_t1

0x91ab,	// (0x000985af) list_single_cmail_header_detail_pane_g1_ParamLimits

0x91ab,	// (0x000985af) list_single_cmail_header_detail_pane_g1

0xccaf,	// (0x0009c0b3) list_single_cmail_header_detail_pane_g2_ParamLimits

0xccaf,	// (0x0009c0b3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0009f1a3) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0009f1a3) list_single_cmail_header_detail_pane_g

0xccc8,	// (0x0009c0cc) list_single_cmail_header_detail_pane_t1_ParamLimits

0xccc8,	// (0x0009c0cc) list_single_cmail_header_detail_pane_t1

0xcd02,	// (0x0009c106) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcd02,	// (0x0009c106) list_single_cmail_header_editor_pane_bg

0xc56b,	// (0x0009b96f) list_cmail_body_pane_g1

0xcd14,	// (0x0009c118) list_cmail_body_pane_t1

0xb6fe,	// (0x0009ab02) list_single_cmail_header_editor_pane_bg_g1

0xe4d1,	// (0x0009d8d5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb70e,	// (0x0009ab12) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb706,	// (0x0009ab0a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb960,	// (0x0009ad64) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb72e,	// (0x0009ab32) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb71e,	// (0x0009ab22) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb726,	// (0x0009ab2a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe4b1,	// (0x0009d8b5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x91e9,	// (0x000985ed) calenote_gesture_pane_ParamLimits

0x91e9,	// (0x000985ed) calenote_gesture_pane

0x9209,	// (0x0009860d) calenote_window_pane_ParamLimits

0x9209,	// (0x0009860d) calenote_window_pane

0xcd22,	// (0x0009c126) popup_note_window_cp01

0x9225,	// (0x00098629) calenote_swipe_1_pane_ParamLimits

0x9225,	// (0x00098629) calenote_swipe_1_pane

0x8bfc,	// (0x00098000) calenote_swipe_2_pane_ParamLimits

0x8bfc,	// (0x00098000) calenote_swipe_2_pane

0xc8bd,	// (0x0009bcc1) calenote_swipe_1_pane_g1_ParamLimits

0xc8bd,	// (0x0009bcc1) calenote_swipe_1_pane_g1

0xc8ca,	// (0x0009bcce) calenote_swipe_1_pane_g2_ParamLimits

0xc8ca,	// (0x0009bcce) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0009f0cd) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0009f0cd) calenote_swipe_1_pane_g

0xcd34,	// (0x0009c138) calenote_swipe_1_pane_t1_ParamLimits

0xcd34,	// (0x0009c138) calenote_swipe_1_pane_t1

0xc8bd,	// (0x0009bcc1) calenote_swipe_2_pane_g1_ParamLimits

0xc8bd,	// (0x0009bcc1) calenote_swipe_2_pane_g1

0xcd53,	// (0x0009c157) calenote_swipe_2_pane_g2_ParamLimits

0xcd53,	// (0x0009c157) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0009f1af) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0009f1af) calenote_swipe_2_pane_g

0xcd5f,	// (0x0009c163) calenote_swipe_2_pane_t1_ParamLimits

0xcd5f,	// (0x0009c163) calenote_swipe_2_pane_t1

0xec5a,	// (0x0009e05e) main_mup_navstr_pane

0x5bce,	// (0x00094fd2) main_mup3_pane_t7_ParamLimits

0x5bce,	// (0x00094fd2) main_mup3_pane_t7

0xb328,	// (0x0009a72c) main_mp4_pane_g6_ParamLimits

0xb328,	// (0x0009a72c) main_mp4_pane_g6

0xb55a,	// (0x0009a95e) main_image3_pane_t4_ParamLimits

0xb55a,	// (0x0009a95e) main_image3_pane_t4

0x923a,	// (0x0009863e) popup_navstr_preview_pane_ParamLimits

0x923a,	// (0x0009863e) popup_navstr_preview_pane

0x924e,	// (0x00098652) scroll_navstr_pane_ParamLimits

0x924e,	// (0x00098652) scroll_navstr_pane

0xec5a,	// (0x0009e05e) bg_popup_preview_window_pane_cp04

0xcd86,	// (0x0009c18a) popup_navstr_preview_pane_t1

0x9262,	// (0x00098666) scroll_navstr_pane_g1_ParamLimits

0x9262,	// (0x00098666) scroll_navstr_pane_g1

0x9276,	// (0x0009867a) scroll_navstr_pane_t1_ParamLimits

0x9276,	// (0x0009867a) scroll_navstr_pane_t1

0xcd2b,	// (0x0009c12f) bg_button_pane_cp014

0xcd2b,	// (0x0009c12f) bg_button_pane_cp030

0x8a9a,	// (0x00097e9e) list_double_fisheye_pane_g4_ParamLimits

0x8a9a,	// (0x00097e9e) list_double_fisheye_pane_g4

0x8aa6,	// (0x00097eaa) list_double_fisheye_pane_g5_ParamLimits

0x8aa6,	// (0x00097eaa) list_double_fisheye_pane_g5

0xcc96,	// (0x0009c09a) sp_fs_scroll_pane_cp03

0xc9fc,	// (0x0009be00) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xca08,	// (0x0009be0c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0009f0ea) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xca14,	// (0x0009be18) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9152,	// (0x00098556) sp_fs_scroll_pane_cp02

0xe1df,	// (0x0009d5e3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe1df,	// (0x0009d5e3) popup_sp_fs_calendar_preview_list_single_pane

0xec5a,	// (0x0009e05e) main_cam6_pano_pane

0xa0b1,	// (0x000994b5) main_mup3_pane_ParamLimits

0xec5a,	// (0x0009e05e) main_phacti_pane

0x867b,	// (0x00097a7f) bg_button_pane_cp11

0x8695,	// (0x00097a99) main_mobtv_info_pane_g2_ParamLimits

0x8695,	// (0x00097a99) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0009f04a) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0009f04a) main_mobtv_info_pane_g

0x8872,	// (0x00097c76) sc_clock_pane_t5_ParamLimits

0x8872,	// (0x00097c76) sc_clock_pane_t5

0x88fc,	// (0x00097d00) main_radioblah_pane_g1_ParamLimits

0xc809,	// (0x0009bc0d) main_radioblah_pane_t3_ParamLimits

0xc809,	// (0x0009bc0d) main_radioblah_pane_t3

0xc821,	// (0x0009bc25) main_radioblah_pane_t4_ParamLimits

0xc821,	// (0x0009bc25) main_radioblah_pane_t4

0x8924,	// (0x00097d28) main_radioblah_text_pane_ParamLimits

0x8924,	// (0x00097d28) main_radioblah_text_pane

0x8936,	// (0x00097d3a) main_radioblah_info_pane_g1_ParamLimits

0x89cf,	// (0x00097dd3) main_radioblah_info_pane_t4_ParamLimits

0x89cf,	// (0x00097dd3) main_radioblah_info_pane_t4

0x47f9,	// (0x00093bfd) main_sp_fs_calendar_pane

0x928d,	// (0x00098691) main_phacti_pane_g1

0x9295,	// (0x00098699) phacti_note_pane_ParamLimits

0x9295,	// (0x00098699) phacti_note_pane

0xcd9d,	// (0x0009c1a1) phacti_term_pane_ParamLimits

0xcd9d,	// (0x0009c1a1) phacti_term_pane

0xcdb2,	// (0x0009c1b6) phacti_note_pane_t1_ParamLimits

0xcdb2,	// (0x0009c1b6) phacti_note_pane_t1

0xcdc9,	// (0x0009c1cd) phacti_term_pane_g1

0xcdd1,	// (0x0009c1d5) phacti_term_pane_t1_ParamLimits

0xcdd1,	// (0x0009c1d5) phacti_term_pane_t1

0xcdfb,	// (0x0009c1ff) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe2d2,	// (0x0009d6d6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0009f1b9) popup_sp_fs_calendar_preview_list_single_pane_g

0xce03,	// (0x0009c207) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce03,	// (0x0009c207) popup_sp_fs_calendar_preview_list_single_pane_t1

0xce18,	// (0x0009c21c) aid_popup_sp_fs_bg_corner_pane

0xa995,	// (0x00099d99) popup_sp_fs_calendar_preview_bg_pane_g1

0xec5a,	// (0x0009e05e) popup_sp_fs_calendar_preview_bg_pane

0xce20,	// (0x0009c224) popup_sp_fs_calendar_preview_list_pane

0x47f9,	// (0x00093bfd) bg_main_sp_fs_cale_pane_ParamLimits

0x47f9,	// (0x00093bfd) bg_main_sp_fs_cale_pane

0xce31,	// (0x0009c235) listscroll_cale_mrui_pane_ParamLimits

0xce31,	// (0x0009c235) listscroll_cale_mrui_pane

0xce45,	// (0x0009c249) listscroll_sp_fs_schedule_track_pane

0xce4e,	// (0x0009c252) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xce4e,	// (0x0009c252) main_sp_fs_ctrlbar_pane_cp01

0xce5f,	// (0x0009c263) main_sp_fs_ribbon_pane

0xce67,	// (0x0009c26b) popup_sp_fs_cale_preview_window

0x92f6,	// (0x000986fa) list_single_sp_fs_schedule_track_pane_ParamLimits

0x92f6,	// (0x000986fa) list_single_sp_fs_schedule_track_pane

0x47f9,	// (0x00093bfd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x47f9,	// (0x00093bfd) bg_sp_fs_highlight_list_pane_cp03

0x9308,	// (0x0009870c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9308,	// (0x0009870c) list_single_sp_fs_schedule_track_pane_g1

0x9314,	// (0x00098718) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9314,	// (0x00098718) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0009f1be) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0009f1be) list_single_sp_fs_schedule_track_pane_g

0x9320,	// (0x00098724) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9320,	// (0x00098724) list_single_sp_fs_schedule_track_pane_t1

0x933a,	// (0x0009873e) sp_fs_schedule_track_pane_ParamLimits

0x933a,	// (0x0009873e) sp_fs_schedule_track_pane

0xce79,	// (0x0009c27d) sp_fs_schedule_track_pane_g1

0xce81,	// (0x0009c285) sp_fs_schedule_track_pane_g2

0xce89,	// (0x0009c28d) sp_fs_schedule_track_pane_g3

0xce91,	// (0x0009c295) sp_fs_schedule_track_pane_g4

0xce99,	// (0x0009c29d) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0009f1c3) sp_fs_schedule_track_pane_g

0xb6fe,	// (0x0009ab02) bg_sp_fs_schedule_viewer_highlight_g1

0xe4d1,	// (0x0009d8d5) bg_sp_fs_schedule_viewer_highlight_g2

0xb706,	// (0x0009ab0a) bg_sp_fs_schedule_viewer_highlight_g3

0xb70e,	// (0x0009ab12) bg_sp_fs_schedule_viewer_highlight_g4

0xb960,	// (0x0009ad64) bg_sp_fs_schedule_viewer_highlight_g5

0xb71e,	// (0x0009ab22) bg_sp_fs_schedule_viewer_highlight_g6

0xb726,	// (0x0009ab2a) bg_sp_fs_schedule_viewer_highlight_g7

0xb72e,	// (0x0009ab32) bg_sp_fs_schedule_viewer_highlight_g8

0xe4b1,	// (0x0009d8b5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0009f1ce) bg_sp_fs_schedule_viewer_highlight_g

0xec5a,	// (0x0009e05e) bg_main_sp_fs_ribbon_pane

0x934b,	// (0x0009874f) main_sp_fs_ribbon_pane_g1

0xcea1,	// (0x0009c2a5) main_sp_fs_ribbon_pane_t1

0x9354,	// (0x00098758) main_sp_fs_ribbon_pane_t2

0xceb0,	// (0x0009c2b4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0009f1e1) main_sp_fs_ribbon_pane_t

0xcebf,	// (0x0009c2c3) main_sp_fs_ribbon_scheduler_pane

0xcec7,	// (0x0009c2cb) bg_main_sp_fs_ribbon_pane_g1

0xced0,	// (0x0009c2d4) bg_main_sp_fs_ribbon_pane_g2

0xced9,	// (0x0009c2dd) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0009f1e8) bg_main_sp_fs_ribbon_pane_g

0xcee1,	// (0x0009c2e5) main_sp_fs_ribbon_scheduler_pane_g1

0xceea,	// (0x0009c2ee) main_sp_fs_ribbon_scheduler_pane_g2

0xcef3,	// (0x0009c2f7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0009f1ef) main_sp_fs_ribbon_scheduler_pane_g

0xcefc,	// (0x0009c300) list_cale_mrui_pane

0x9363,	// (0x00098767) sp_fs_scroll_pane_cp07_ParamLimits

0x9363,	// (0x00098767) sp_fs_scroll_pane_cp07

0x9377,	// (0x0009877b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9377,	// (0x0009877b) bg_sp_fs_schedule_viewer_highlight

0xcf05,	// (0x0009c309) list_single_sp_fs_schedule_track_pane_cp01

0xcf0d,	// (0x0009c311) list_sp_fs_schedule_track_pane

0xcf15,	// (0x0009c319) sp_fs_scroll_pane_cp06_ParamLimits

0xcf15,	// (0x0009c319) sp_fs_scroll_pane_cp06

0xa995,	// (0x00099d99) bgmain_sp_fs_calendar_pane_g1

0x9387,	// (0x0009878b) list_single_cale_mrui_pane_ParamLimits

0x9387,	// (0x0009878b) list_single_cale_mrui_pane

0xcf27,	// (0x0009c32b) list_single_cale_mrui_row_pane_ParamLimits

0xcf27,	// (0x0009c32b) list_single_cale_mrui_row_pane

0xcf34,	// (0x0009c338) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcf34,	// (0x0009c338) list_single_cale_mrui_row_pane_g1

0xcf79,	// (0x0009c37d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcf79,	// (0x0009c37d) list_single_cale_mrui_row_pane_t1

0x93a7,	// (0x000987ab) list_single_cale_mrui_row_pane_t2_ParamLimits

0x93a7,	// (0x000987ab) list_single_cale_mrui_row_pane_t2

0xcf8b,	// (0x0009c38f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcf8b,	// (0x0009c38f) list_single_cale_mrui_row_pane_t3

0xcfba,	// (0x0009c3be) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcfba,	// (0x0009c3be) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0009f1fd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0009f1fd) list_single_cale_mrui_row_pane_t

0x940f,	// (0x00098813) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x940f,	// (0x00098813) list_single_cmail_header_editor_pane_bg_cp01

0x9435,	// (0x00098839) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9435,	// (0x00098839) list_single_cmail_header_editor_pane_bg_cp02

0x9455,	// (0x00098859) main_radioblah_text_pane_t1_ParamLimits

0x9455,	// (0x00098859) main_radioblah_text_pane_t1

0xcfe9,	// (0x0009c3ed) cam6_indi_pane_cp01

0xcff1,	// (0x0009c3f5) cam6_mode_pane_cp01

0xcff9,	// (0x0009c3fd) cam6_pano_pane

0xd002,	// (0x0009c406) cam6_zoom_pane_cp01

0xd00a,	// (0x0009c40e) cam6_pano_image_pane

0xd015,	// (0x0009c419) cam6_pano_pane_g1

0xc56b,	// (0x0009b96f) cam6_pano_pane_g2

0xd01e,	// (0x0009c422) cam6_pano_pane_g3

0xd027,	// (0x0009c42b) cam6_pano_pane_g4

0xaf6f,	// (0x0009a373) cam6_pano_pane_g5

0xd030,	// (0x0009c434) cam6_pano_pane_g6

0xd03a,	// (0x0009c43e) cam6_pano_pane_g7

0xd042,	// (0x0009c446) cam6_pano_pane_g8

0xd04b,	// (0x0009c44f) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0009f206) cam6_pano_pane_g

0xec5a,	// (0x0009e05e) main_browser_tag_pane

0xcd7e,	// (0x0009c182) grid_navstr_albumart_pane

0xd056,	// (0x0009c45a) cell_navstr_albumart_pane_ParamLimits

0xd056,	// (0x0009c45a) cell_navstr_albumart_pane

0xd079,	// (0x0009c47d) cell_navstr_albumart_pane_g1

0xa2ac,	// (0x000996b0) cell_navstr_albumart_pane_g2

0xa2bc,	// (0x000996c0) cell_navstr_albumart_pane_g3

0xa2b4,	// (0x000996b8) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0009f219) cell_navstr_albumart_pane_g

0x946f,	// (0x00098873) bt_list_pane_ParamLimits

0x946f,	// (0x00098873) bt_list_pane

0x9483,	// (0x00098887) bt_list_pane_t1

0x9492,	// (0x00098896) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0009f222) bt_list_pane_t

0xec5a,	// (0x0009e05e) main_cale_prevew_pane

0x94a1,	// (0x000988a5) popup_cale_preview_window_ParamLimits

0x94a1,	// (0x000988a5) popup_cale_preview_window

0x47f9,	// (0x00093bfd) bg_popup_preview_window_pane_cp05_ParamLimits

0x47f9,	// (0x00093bfd) bg_popup_preview_window_pane_cp05

0xd081,	// (0x0009c485) list_cale_preview_pane_ParamLimits

0xd081,	// (0x0009c485) list_cale_preview_pane

0x94bc,	// (0x000988c0) list_double_cale_preview_pane_ParamLimits

0x94bc,	// (0x000988c0) list_double_cale_preview_pane

0x94ce,	// (0x000988d2) list_single_cale_preview_pane_ParamLimits

0x94ce,	// (0x000988d2) list_single_cale_preview_pane

0x94e4,	// (0x000988e8) list_single_cale_preview_pane_g1

0x94ec,	// (0x000988f0) list_single_cale_preview_pane_t1_ParamLimits

0x94ec,	// (0x000988f0) list_single_cale_preview_pane_t1

0x9501,	// (0x00098905) list_double_cale_preview_pane_g1

0x9509,	// (0x0009890d) list_double_cale_preview_pane_t1_ParamLimits

0x9509,	// (0x0009890d) list_double_cale_preview_pane_t1

0x951e,	// (0x00098922) list_double_cale_preview_pane_t2_ParamLimits

0x951e,	// (0x00098922) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0009f227) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0009f227) list_double_cale_preview_pane_t

0xec5a,	// (0x0009e05e) main_ezdial_pane

0x47f9,	// (0x00093bfd) main_sp_fs_email_pane_ParamLimits

0x8c38,	// (0x0009803c) cmail_ddmenu_btn01_pane_ParamLimits

0x8c38,	// (0x0009803c) cmail_ddmenu_btn01_pane

0x8c4b,	// (0x0009804f) cmail_ddmenu_btn02_pane_ParamLimits

0x8c4b,	// (0x0009804f) cmail_ddmenu_btn02_pane

0x8c6e,	// (0x00098072) cmail_ddmenu_btn03_pane_ParamLimits

0x8c6e,	// (0x00098072) cmail_ddmenu_btn03_pane

0x8c97,	// (0x0009809b) main_sp_fs_ctrlbar_pane_ParamLimits

0x8cbb,	// (0x000980bf) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb921,	// (0x0009ad25) list_cmail_body_pane_ParamLimits

0xcca6,	// (0x0009c0aa) bg_button_pane_cp12

0xccbb,	// (0x0009c0bf) list_single_cmail_header_detail_pane_g3_ParamLimits

0xccbb,	// (0x0009c0bf) list_single_cmail_header_detail_pane_g3

0x91c3,	// (0x000985c7) list_single_cmail_header_detail_pane_t2_ParamLimits

0x91c3,	// (0x000985c7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0009f1aa) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0009f1aa) list_single_cmail_header_detail_pane_t

0xcde6,	// (0x0009c1ea) phacti_term_pane_t2_ParamLimits

0xcde6,	// (0x0009c1ea) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0009f1b4) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0009f1b4) phacti_term_pane_t

0xd08d,	// (0x0009c491) aid_size_list_single_double

0x9536,	// (0x0009893a) popup_ezdial_listscroll_window

0x9552,	// (0x00098956) popup_number_entry_window_cp01

0xebae,	// (0x0009dfb2) bg_popup_call_pane_cp09

0xd099,	// (0x0009c49d) ezdial_list_pane

0xd0a1,	// (0x0009c4a5) scroll_pane_cp23

0xa48f,	// (0x00099893) bg_button_pane_cp028_ParamLimits

0xa48f,	// (0x00099893) bg_button_pane_cp028

0x9560,	// (0x00098964) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9560,	// (0x00098964) cmail_ddmenu_btn01_pane_g1

0x956f,	// (0x00098973) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x956f,	// (0x00098973) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0009f22c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0009f22c) cmail_ddmenu_btn01_pane_g

0xd0a9,	// (0x0009c4ad) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd0a9,	// (0x0009c4ad) cmail_ddmenu_btn01_pane_t1

0xa48f,	// (0x00099893) bg_button_pane_cp029_ParamLimits

0xa48f,	// (0x00099893) bg_button_pane_cp029

0x957f,	// (0x00098983) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x957f,	// (0x00098983) cmail_ddmenu_btn02_pane_g1

0x959a,	// (0x0009899e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x959a,	// (0x0009899e) cmail_ddmenu_btn02_pane_t1

0x47f9,	// (0x00093bfd) bg_button_pane_cp031_ParamLimits

0x47f9,	// (0x00093bfd) bg_button_pane_cp031

0x957f,	// (0x00098983) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x957f,	// (0x00098983) cmail_ddmenu_btn03_pane_g1

0x959a,	// (0x0009899e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x959a,	// (0x0009899e) cmail_ddmenu_btn03_pane_t1

0x6742,	// (0x00095b46) cell_dialer2_keypad_pane_t1_ParamLimits

0x675c,	// (0x00095b60) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x675c,	// (0x00095b60) cell_dialer2_keypad_pane_t1_copy1

0x84e2,	// (0x000978e6) ncimui_group_button_pane

0x47f9,	// (0x00093bfd) main_sp_fs_calendar_pane_ParamLimits

0x915c,	// (0x00098560) list_single_cmail_header_caption_pane_ParamLimits

0xce28,	// (0x0009c22c) aid_recal_txt_sm_pane

0xec5a,	// (0x0009e05e) mian_recal_day_pane

0xce67,	// (0x0009c26b) popup_sp_fs_cale_preview_window_ParamLimits

0xec5a,	// (0x0009e05e) list_recal_day_pane

0xd0e1,	// (0x0009c4e5) list_single_recal_day_pane_ParamLimits

0xd0e1,	// (0x0009c4e5) list_single_recal_day_pane

0xd0f3,	// (0x0009c4f7) list_single_recal_day_pane_g1_ParamLimits

0xd0f3,	// (0x0009c4f7) list_single_recal_day_pane_g1

0xd0ff,	// (0x0009c503) list_single_recal_day_pane_g2_ParamLimits

0xd0ff,	// (0x0009c503) list_single_recal_day_pane_g2

0xd10f,	// (0x0009c513) list_single_recal_day_pane_g3_ParamLimits

0xd10f,	// (0x0009c513) list_single_recal_day_pane_g3

0x95c1,	// (0x000989c5) list_single_recal_day_pane_g4_ParamLimits

0x95c1,	// (0x000989c5) list_single_recal_day_pane_g4

0xd11b,	// (0x0009c51f) list_single_recal_day_pane_g5_ParamLimits

0xd11b,	// (0x0009c51f) list_single_recal_day_pane_g5

0xd12b,	// (0x0009c52f) list_single_recal_day_pane_g6_ParamLimits

0xd12b,	// (0x0009c52f) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0009f23b) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0009f23b) list_single_recal_day_pane_g

0xd142,	// (0x0009c546) list_single_recal_day_pane_t1

0xd154,	// (0x0009c558) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0009f246) list_single_recal_day_pane_t

0x95e1,	// (0x000989e5) ncimui_query_button_pane_ParamLimits

0x95e1,	// (0x000989e5) ncimui_query_button_pane

0x95f1,	// (0x000989f5) ncimui_query_button_pane_t1_ParamLimits

0x95f1,	// (0x000989f5) ncimui_query_button_pane_t1

0xd169,	// (0x0009c56d) ncimui_query_button_pane_t2_ParamLimits

0xd169,	// (0x0009c56d) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0009f24b) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0009f24b) ncimui_query_button_pane_t

0x9604,	// (0x00098a08) query_button_pane_ParamLimits

0x9604,	// (0x00098a08) query_button_pane

0xec5a,	// (0x0009e05e) bg_button_pane_cp0028

0xd17c,	// (0x0009c580) query_button_pane_t1

0x481b,	// (0x00093c1f) main_tport_pane_ParamLimits

0x9049,	// (0x0009844d) bg_popup_window_pane_cp01_ParamLimits

0x9049,	// (0x0009844d) bg_popup_window_pane_cp01

0x9063,	// (0x00098467) heading_pane_cp08_ParamLimits

0x9063,	// (0x00098467) heading_pane_cp08

0x9077,	// (0x0009847b) heading_pane_cp07_ParamLimits

0x9077,	// (0x0009847b) heading_pane_cp07

0xcc68,	// (0x0009c06c) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0009f197) cell_tport_appsw_pane_g

0x3114,	// (0x00092518) input_candi_list_open_g1

0xe678,	// (0x0009da7c) list_cale_time_pane_g6_ParamLimits

0xe678,	// (0x0009da7c) list_cale_time_pane_g6

0x55e8,	// (0x000949ec) aid_size_touch_calib_1_ParamLimits

0x55e8,	// (0x000949ec) aid_size_touch_calib_1

0x55f4,	// (0x000949f8) aid_size_touch_calib_2_ParamLimits

0x55f4,	// (0x000949f8) aid_size_touch_calib_2

0x560a,	// (0x00094a0e) aid_size_touch_calib_3_ParamLimits

0x560a,	// (0x00094a0e) aid_size_touch_calib_3

0x5628,	// (0x00094a2c) aid_size_touch_calib_4_ParamLimits

0x5628,	// (0x00094a2c) aid_size_touch_calib_4

0x563e,	// (0x00094a42) main_touch_calib_button_group_pane_ParamLimits

0x563e,	// (0x00094a42) main_touch_calib_button_group_pane

0x5656,	// (0x00094a5a) main_touch_calib_pane_g1_ParamLimits

0x5662,	// (0x00094a66) main_touch_calib_pane_g2_ParamLimits

0x566e,	// (0x00094a72) main_touch_calib_pane_g3_ParamLimits

0x567a,	// (0x00094a7e) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0009eb65) main_touch_calib_pane_g_ParamLimits

0x5686,	// (0x00094a8a) main_touch_calib_pane_t1_ParamLimits

0x56a0,	// (0x00094aa4) main_touch_calib_pane_t2_ParamLimits

0x56ba,	// (0x00094abe) main_touch_calib_pane_t3_ParamLimits

0x56ce,	// (0x00094ad2) main_touch_calib_pane_t4_ParamLimits

0x56e2,	// (0x00094ae6) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0009eb6e) main_touch_calib_pane_t_ParamLimits

0xad45,	// (0x0009a149) list_single_fp_cale_pane_g3_ParamLimits

0xad45,	// (0x0009a149) list_single_fp_cale_pane_g3

0xa0b1,	// (0x000994b5) bg_button_pane_cp012_ParamLimits

0xa0b1,	// (0x000994b5) bg_vkb2_func_pane_cp03_ParamLimits

0x768e,	// (0x00096a92) cell_vitu2_function_top_pane_g1_ParamLimits

0xa0b1,	// (0x000994b5) bg_vkb2_func_pane_cp04_ParamLimits

0x8470,	// (0x00097874) main_ncimui_button_group_pane_ParamLimits

0x8470,	// (0x00097874) main_ncimui_button_group_pane

0x84d0,	// (0x000978d4) main_ncimui_pane_t3_ParamLimits

0x84d0,	// (0x000978d4) main_ncimui_pane_t3

0xcd94,	// (0x0009c198) phacti_button_group_pane

0xd08d,	// (0x0009c491) aid_size_list_single_double_ParamLimits

0x9536,	// (0x0009893a) popup_ezdial_listscroll_window_ParamLimits

0x9552,	// (0x00098956) popup_number_entry_window_cp01_ParamLimits

0x9617,	// (0x00098a1b) phacti_button_pane_ParamLimits

0x9617,	// (0x00098a1b) phacti_button_pane

0xec5a,	// (0x0009e05e) bg_button_pane_cp14

0xd18a,	// (0x0009c58e) phacti_button_pane_t1

0x9628,	// (0x00098a2c) main_touch_calib_button_pane_ParamLimits

0x9628,	// (0x00098a2c) main_touch_calib_button_pane

0xe0db,	// (0x0009d4df) bg_button_pane_cp18_ParamLimits

0xe0db,	// (0x0009d4df) bg_button_pane_cp18

0xd198,	// (0x0009c59c) main_touch_calib_button_pane_t1_ParamLimits

0xd198,	// (0x0009c59c) main_touch_calib_button_pane_t1

0xd1ae,	// (0x0009c5b2) main_touch_calib_button_pane_t2_ParamLimits

0xd1ae,	// (0x0009c5b2) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0009f250) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0009f250) main_touch_calib_button_pane_t

0xec5a,	// (0x0009e05e) cell_ncimui_button_pane

0xec5a,	// (0x0009e05e) bg_button_pane_cp032

0xd1cc,	// (0x0009c5d0) cell_ncimui_button_pane_t1

0xb53a,	// (0x0009a93e) image3_infobar_pane_ParamLimits

0xb53a,	// (0x0009a93e) image3_infobar_pane

0x889e,	// (0x00097ca2) fs_bigclock_status_pane_ParamLimits

0x889e,	// (0x00097ca2) fs_bigclock_status_pane

0x88ab,	// (0x00097caf) main_fs_bigclock_clock_pane_ParamLimits

0x88ab,	// (0x00097caf) main_fs_bigclock_clock_pane

0x88bf,	// (0x00097cc3) main_fs_bigclock_indi_pane_ParamLimits

0x88bf,	// (0x00097cc3) main_fs_bigclock_indi_pane

0x88d8,	// (0x00097cdc) main_fs_bigclock_swipe_pane_ParamLimits

0x88d8,	// (0x00097cdc) main_fs_bigclock_swipe_pane

0xec5a,	// (0x0009e05e) main_fs_clock_dumped_data

0xc678,	// (0x0009ba7c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc678,	// (0x0009ba7c) list_single_fs_bigclock_indicator_pane_g1

0xc69e,	// (0x0009baa2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc69e,	// (0x0009baa2) list_single_fs_bigclock_indicator_pane_g2

0xc6b8,	// (0x0009babc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc6b8,	// (0x0009babc) list_single_fs_bigclock_indicator_pane_g3

0xc6d2,	// (0x0009bad6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc6d2,	// (0x0009bad6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0009f07e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0009f07e) list_single_fs_bigclock_indicator_pane_g

0xc6fb,	// (0x0009baff) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc6fb,	// (0x0009baff) list_single_fs_bigclock_indicator_pane_t1

0xc723,	// (0x0009bb27) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc723,	// (0x0009bb27) list_single_fs_bigclock_indicator_pane_t2

0xc74b,	// (0x0009bb4f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc74b,	// (0x0009bb4f) list_single_fs_bigclock_indicator_pane_t3

0xc773,	// (0x0009bb77) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc773,	// (0x0009bb77) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0009f089) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0009f089) list_single_fs_bigclock_indicator_pane_t

0xd1da,	// (0x0009c5de) image3_infobar_fav_pane_ParamLimits

0xd1da,	// (0x0009c5de) image3_infobar_fav_pane

0xd1ea,	// (0x0009c5ee) image3_infobar_loc_pane_ParamLimits

0xd1ea,	// (0x0009c5ee) image3_infobar_loc_pane

0xd1fe,	// (0x0009c602) image3_infobar_time_pane_ParamLimits

0xd1fe,	// (0x0009c602) image3_infobar_time_pane

0xa995,	// (0x00099d99) image3_infobar_time_pane_g1

0xd20e,	// (0x0009c612) image3_infobar_time_pane_t1

0xa995,	// (0x00099d99) image3_infobar_loc_pane_g1

0xd21c,	// (0x0009c620) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0009f255) image3_infobar_loc_pane_g

0xd224,	// (0x0009c628) image3_infobar_loc_pane_t1

0xa995,	// (0x00099d99) image3_infobar_fav_pane_g1

0xd232,	// (0x0009c636) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0009f25a) image3_infobar_fav_pane_g

0xd23a,	// (0x0009c63e) fs_bigclock_status_battery_pane

0xd243,	// (0x0009c647) fs_bigclock_status_signal_pane

0xd24c,	// (0x0009c650) fs_bigclock_status_title_pane

0xd255,	// (0x0009c659) fs_bigclock_status_signal_pane_g1

0xd25e,	// (0x0009c662) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0009f25f) fs_bigclock_status_signal_pane_g

0xd266,	// (0x0009c66a) fs_bigclock_status_battery_pane_g1

0xd26f,	// (0x0009c673) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0009f264) fs_bigclock_status_battery_pane_g

0xd277,	// (0x0009c67b) fs_bigclock_status_title_pane_t1

0xa995,	// (0x00099d99) main_fs_bigclock_clock_pane_g1

0xd285,	// (0x0009c689) main_fs_bigclock_clock_pane_g2

0xd285,	// (0x0009c689) main_fs_bigclock_clock_pane_g3

0xd285,	// (0x0009c689) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0009f269) main_fs_bigclock_clock_pane_g

0xd28d,	// (0x0009c691) main_fs_bigclock_clock_pane_t1

0xd29b,	// (0x0009c69f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0009f272) main_fs_bigclock_clock_pane_t

0xd2aa,	// (0x0009c6ae) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd2aa,	// (0x0009c6ae) list_single_fs_bigclock_indicator_pane

0x963d,	// (0x00098a41) list_single_fs_bigclock_pane_ParamLimits

0x963d,	// (0x00098a41) list_single_fs_bigclock_pane

0xd2c4,	// (0x0009c6c8) main_fs_bigclock_indicator_pane_t1

0xd2d3,	// (0x0009c6d7) list_single_fs_bigclock_pane_g1

0xd2db,	// (0x0009c6df) list_single_fs_bigclock_pane_t1

0xa995,	// (0x00099d99) main_fs_bigclock_swipe_pane_g1

0xd31e,	// (0x0009c722) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0009f283) main_fs_bigclock_swipe_pane_g

0xd326,	// (0x0009c72a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd326,	// (0x0009c72a) main_fs_bigclock_swipe_pane_t1

0x292c,	// (0x00091d30) call_type_pane_ParamLimits

0xec5a,	// (0x0009e05e) main_btmg_pane

0xcf60,	// (0x0009c364) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcf60,	// (0x0009c364) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0009f1f6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0009f1f6) list_single_cale_mrui_row_pane_g

0xd0c8,	// (0x0009c4cc) list_recal_vselct_arw_lo_pane

0xd0d0,	// (0x0009c4d4) list_recal_vselct_arw_up_pane

0xd0d8,	// (0x0009c4dc) list_recal_vselct_pane

0x96a0,	// (0x00098aa4) btmg_button_pane

0x96aa,	// (0x00098aae) main_btmg_pane_g1

0xec5a,	// (0x0009e05e) bg_button_pane_cp044

0xd343,	// (0x0009c747) btmg_button_pane_t1

0xa487,	// (0x0009988b) aid_listscroll_gen

0x47f9,	// (0x00093bfd) main_cntbar_detail_pane

0xcc86,	// (0x0009c08a) list_cmail_folder_pane

0xcc96,	// (0x0009c09a) sp_fs_scroll_pane_cp03_ParamLimits

0x96b4,	// (0x00098ab8) list_single_fs_dyc_pane_cp01_ParamLimits

0x96b4,	// (0x00098ab8) list_single_fs_dyc_pane_cp01

0xd351,	// (0x0009c755) aid_size_cmail_indent

0xd35a,	// (0x0009c75e) list_single_dyc_row_pane_cp01

0x96f5,	// (0x00098af9) cntbar_detail_list_pane_ParamLimits

0x96f5,	// (0x00098af9) cntbar_detail_list_pane

0x9741,	// (0x00098b45) main_cntbar_detail_cont_pane_ParamLimits

0x9741,	// (0x00098b45) main_cntbar_detail_cont_pane

0x2851,	// (0x00091c55) scroll_pane_cp032_ParamLimits

0x2851,	// (0x00091c55) scroll_pane_cp032

0x9755,	// (0x00098b59) cntbar_detail_list_event_pane_ParamLimits

0x9755,	// (0x00098b59) cntbar_detail_list_event_pane

0x9705,	// (0x00098b09) cntbar_detail_list_shct_pane

0xe51f,	// (0x0009d923) aid_list_gen

0xd363,	// (0x0009c767) aid_scroll

0xd36c,	// (0x0009c770) aid_size_touch_scroll_bar

0x9765,	// (0x00098b69) aid_list_double

0xd375,	// (0x0009c779) aid_list_single

0x976e,	// (0x00098b72) aid_list_single_lg

0xd37e,	// (0x0009c782) aid_list_z_g_a_sm

0xd386,	// (0x0009c78a) aid_list_z_g_d

0xd38e,	// (0x0009c792) aid_txt_z_prm

0x9777,	// (0x00098b7b) aid_txt_z_prm_cp01

0x9785,	// (0x00098b89) aid_txt_z_sec

0x9793,	// (0x00098b97) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9793,	// (0x00098b97) main_cntbar_detail_cont_pane_g1

0x97a7,	// (0x00098bab) main_cntbar_detail_cont_pane_g2_ParamLimits

0x97a7,	// (0x00098bab) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0009f288) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0009f288) main_cntbar_detail_cont_pane_g

0xd39c,	// (0x0009c7a0) main_cntbar_detail_cont_pane_t1

0xd3aa,	// (0x0009c7ae) main_cntbar_detail_cont_pane_t2

0xd3b8,	// (0x0009c7bc) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0009f28d) main_cntbar_detail_cont_pane_t

0x97b7,	// (0x00098bbb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x97b7,	// (0x00098bbb) cell_cntbar_detail_list_shct_pane

0xd3c6,	// (0x0009c7ca) cntbar_detail_list_shct_pane_g1

0xd3cf,	// (0x0009c7d3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0009f294) cntbar_detail_list_shct_pane_g

0x97cb,	// (0x00098bcf) cntbar_detail_list_event_pane_g1_ParamLimits

0x97cb,	// (0x00098bcf) cntbar_detail_list_event_pane_g1

0x97d7,	// (0x00098bdb) cntbar_detail_list_event_pane_g2_ParamLimits

0x97d7,	// (0x00098bdb) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0009f299) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0009f299) cntbar_detail_list_event_pane_g

0x9843,	// (0x00098c47) cntbar_detail_list_event_pane_t1_ParamLimits

0x9843,	// (0x00098c47) cntbar_detail_list_event_pane_t1

0x9858,	// (0x00098c5c) cntbar_detail_list_event_pane_t2_ParamLimits

0x9858,	// (0x00098c5c) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0009f2a6) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0009f2a6) cntbar_detail_list_event_pane_t

0xa995,	// (0x00099d99) cell_cntbar_detail_list_shct_pane_g1

0x2ca4,	// (0x000920a8) navi_pane_mv_g3

0x47f9,	// (0x00093bfd) main_cntbar_detail_pane_ParamLimits

0xec5a,	// (0x0009e05e) main_notif_wgt_pane

0xb2c2,	// (0x0009a6c6) aid_tch_main_mp4_pane_g4

0xb4c4,	// (0x0009a8c8) popup_slider_window_cp02

0xd0be,	// (0x0009c4c2) list_recal_day_event_pane

0x96c9,	// (0x00098acd) cntbar_detail_btn_pane_ParamLimits

0x96c9,	// (0x00098acd) cntbar_detail_btn_pane

0x96df,	// (0x00098ae3) cntbar_detail_btn_pane_cp01_ParamLimits

0x96df,	// (0x00098ae3) cntbar_detail_btn_pane_cp01

0x9705,	// (0x00098b09) cntbar_detail_list_shct_pane_ParamLimits

0x9715,	// (0x00098b19) cntbar_detail_pane_g1_ParamLimits

0x9715,	// (0x00098b19) cntbar_detail_pane_g1

0x9725,	// (0x00098b29) cntbar_detail_pane_t1_ParamLimits

0x9725,	// (0x00098b29) cntbar_detail_pane_t1

0x97e3,	// (0x00098be7) cntbar_detail_list_event_pane_g3_ParamLimits

0x97e3,	// (0x00098be7) cntbar_detail_list_event_pane_g3

0x97fb,	// (0x00098bff) cntbar_detail_list_event_pane_g4_ParamLimits

0x97fb,	// (0x00098bff) cntbar_detail_list_event_pane_g4

0x9813,	// (0x00098c17) cntbar_detail_list_event_pane_g5_ParamLimits

0x9813,	// (0x00098c17) cntbar_detail_list_event_pane_g5

0x982b,	// (0x00098c2f) cntbar_detail_list_event_pane_g6_ParamLimits

0x982b,	// (0x00098c2f) cntbar_detail_list_event_pane_g6

0x986d,	// (0x00098c71) cntbar_detail_list_event_pane_t3_ParamLimits

0x986d,	// (0x00098c71) cntbar_detail_list_event_pane_t3

0x987f,	// (0x00098c83) popup_notif_wgt_window_ParamLimits

0x987f,	// (0x00098c83) popup_notif_wgt_window

0x9898,	// (0x00098c9c) popup_submenu_window_cp01_ParamLimits

0x9898,	// (0x00098c9c) popup_submenu_window_cp01

0xebae,	// (0x0009dfb2) bg_popup_window_pane_cp10

0xd3d8,	// (0x0009c7dc) listscroll_notif_wgt_pane

0xd3e9,	// (0x0009c7ed) list_notif_wgt_window

0xd3f2,	// (0x0009c7f6) scroll_pane_cp033

0x95e1,	// (0x000989e5) list_notif_wgt_row_pane_ParamLimits

0x95e1,	// (0x000989e5) list_notif_wgt_row_pane

0xd3fb,	// (0x0009c7ff) aid_size_list_notif_wgt_del

0xd408,	// (0x0009c80c) list_notif_wgt_row_pane_g1

0xd414,	// (0x0009c818) list_notif_wgt_row_pane_g2

0xd420,	// (0x0009c824) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0009f2ad) list_notif_wgt_row_pane_g

0xd42d,	// (0x0009c831) list_notif_wgt_row_pane_t1

0xd442,	// (0x0009c846) list_notif_wgt_row_pane_t2

0xd454,	// (0x0009c858) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0009f2b4) list_notif_wgt_row_pane_t

0xb992,	// (0x0009ad96) list_recal_day_event_pane_g1

0xd466,	// (0x0009c86a) list_recal_day_event_pane_t1

0xec5a,	// (0x0009e05e) bg_button_pane_cp045

0xd475,	// (0x0009c879) cntbar_detail_btn_pane_t1

0xa48f,	// (0x00099893) main_callh_pane_ParamLimits

0xa48f,	// (0x00099893) main_callh_pane

0xec5a,	// (0x0009e05e) main_coverflow0_pane

0xec5a,	// (0x0009e05e) main_wgtman_pane

0x88e6,	// (0x00097cea) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x88e6,	// (0x00097cea) main_fs_bigclock_unlock_btn_pane

0xcc60,	// (0x0009c064) bg_button_pane_cp16

0xcc70,	// (0x0009c074) cell_tport_appsw_pane_g3

0x98aa,	// (0x00098cae) cf0_flow_pane_ParamLimits

0x98aa,	// (0x00098cae) cf0_flow_pane

0xd483,	// (0x0009c887) listscroll_cf0_pane

0xd48e,	// (0x0009c892) main_cf0_pane_g1

0x98bf,	// (0x00098cc3) main_cf0_pane_t1_ParamLimits

0x98bf,	// (0x00098cc3) main_cf0_pane_t1

0x98d6,	// (0x00098cda) main_cf0_pane_t2_ParamLimits

0x98d6,	// (0x00098cda) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0009f2bb) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0009f2bb) main_cf0_pane_t

0xd498,	// (0x0009c89c) scroll_pane_cp11

0x98ed,	// (0x00098cf1) cf0_flow_pane_g1

0x98f5,	// (0x00098cf9) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0009f2c0) cf0_flow_pane_g

0x98fd,	// (0x00098d01) cf0_flow_pane_t1

0xec5a,	// (0x0009e05e) main_call6_pane

0xec5a,	// (0x0009e05e) main_calllock_pane

0x990b,	// (0x00098d0f) call6_btn_grp_pane_ParamLimits

0x990b,	// (0x00098d0f) call6_btn_grp_pane

0x9925,	// (0x00098d29) call6_pane_g1_ParamLimits

0x9925,	// (0x00098d29) call6_pane_g1

0x993a,	// (0x00098d3e) popup_call6_1st_window_ParamLimits

0x993a,	// (0x00098d3e) popup_call6_1st_window

0x994b,	// (0x00098d4f) popup_call6_2nd_window_ParamLimits

0x994b,	// (0x00098d4f) popup_call6_2nd_window

0x995c,	// (0x00098d60) cell_call6_btn_pane_ParamLimits

0x995c,	// (0x00098d60) cell_call6_btn_pane

0xebae,	// (0x0009dfb2) bg_popup_call2_in_pane_cp03

0xd4a3,	// (0x0009c8a7) popup_call6_1st_window_g1

0xd4ab,	// (0x0009c8af) popup_call6_1st_window_g2

0xd4b3,	// (0x0009c8b7) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0009f2c5) popup_call6_1st_window_g

0xd4bb,	// (0x0009c8bf) popup_call6_1st_window_t1

0xd4ca,	// (0x0009c8ce) popup_call6_1st_window_t2

0xd4da,	// (0x0009c8de) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0009f2cc) popup_call6_1st_window_t

0xebae,	// (0x0009dfb2) bg_popup_call2_in_pane_cp04

0xd4a3,	// (0x0009c8a7) popup_call6_2nd_window_g1

0xd4ab,	// (0x0009c8af) popup_call6_2nd_window_g2

0xd4b3,	// (0x0009c8b7) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0009f2c5) popup_call6_2nd_window_g

0xd4bb,	// (0x0009c8bf) popup_call6_2nd_window_t1

0xec5a,	// (0x0009e05e) bg_button_pane_cp15

0xd4ea,	// (0x0009c8ee) cell_call6_btn_pane_g1

0xd4f3,	// (0x0009c8f7) cell_call6_btn_pane_t1

0x9970,	// (0x00098d74) listscroll_wgtman_pane_ParamLimits

0x9970,	// (0x00098d74) listscroll_wgtman_pane

0x9993,	// (0x00098d97) wgtman_btn_pane_ParamLimits

0x9993,	// (0x00098d97) wgtman_btn_pane

0xea65,	// (0x0009de69) aid_scroll_copy1

0xd502,	// (0x0009c906) list_wgtman_pane

0x99d6,	// (0x00098dda) wgtman_btn_pane_g1_ParamLimits

0x99d6,	// (0x00098dda) wgtman_btn_pane_g1

0x9a02,	// (0x00098e06) wgtman_btn_pane_t1_ParamLimits

0x9a02,	// (0x00098e06) wgtman_btn_pane_t1

0xd50c,	// (0x0009c910) wgtman_btn_pane_t2_ParamLimits

0xd50c,	// (0x0009c910) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0009f2d3) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0009f2d3) wgtman_btn_pane_t

0x9a3f,	// (0x00098e43) listrow_wgtman_pane_ParamLimits

0x9a3f,	// (0x00098e43) listrow_wgtman_pane

0x9a51,	// (0x00098e55) listrow_wgtman_pane_g1

0x9a5e,	// (0x00098e62) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0009f2d8) listrow_wgtman_pane_g

0x9a7c,	// (0x00098e80) listrow_wgtman_pane_t1

0x9a94,	// (0x00098e98) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0009f2dd) listrow_wgtman_pane_t

0x9aba,	// (0x00098ebe) wait_bar_pane_cp09

0xd523,	// (0x0009c927) main_calllock_btn_pane

0xd52d,	// (0x0009c931) main_calllock_pane_g1

0xec5a,	// (0x0009e05e) bg_button_pane_cp17

0xd539,	// (0x0009c93d) main_calllock_btn_pane_g1

0xd542,	// (0x0009c946) main_calllock_btn_pane_t1

0xec5a,	// (0x0009e05e) main_dialer3_pane

0xec5a,	// (0x0009e05e) main_fmrd2_pane

0xa995,	// (0x00099d99) main_fs_bigclock_unlock_btn_pane_g1

0xd559,	// (0x0009c95d) main_fs_bigclock_unlock_btn_pane_t1

0x9acc,	// (0x00098ed0) area_fmrd2_info_pane_ParamLimits

0x9acc,	// (0x00098ed0) area_fmrd2_info_pane

0x9add,	// (0x00098ee1) area_fmrd2_visual_pane_ParamLimits

0x9add,	// (0x00098ee1) area_fmrd2_visual_pane

0x9aeb,	// (0x00098eef) fmrd2_indi_pane_ParamLimits

0x9aeb,	// (0x00098eef) fmrd2_indi_pane

0x9af8,	// (0x00098efc) area_fmrd2_visual_pane_g1

0x9b00,	// (0x00098f04) area_fmrd2_visual_pane_t1

0x9b10,	// (0x00098f14) area_fmrd2_visual_pane_t2

0x9b20,	// (0x00098f24) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0009f2e7) area_fmrd2_visual_pane_t

0x9b30,	// (0x00098f34) area_fmrd2_info_pane_g1

0x9b38,	// (0x00098f3c) area_fmrd2_info_pane_t1

0x9b48,	// (0x00098f4c) area_fmrd2_info_pane_t2

0x9b58,	// (0x00098f5c) area_fmrd2_info_pane_t3

0x9b68,	// (0x00098f6c) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0009f2ee) area_fmrd2_info_pane_t

0x9b76,	// (0x00098f7a) fmrd2_indi_pane_t1

0x9b86,	// (0x00098f8a) fmrd2_indi_pane_t2

0x9b96,	// (0x00098f9a) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0009f2f7) fmrd2_indi_pane_t

0xc6e1,	// (0x0009bae5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc6e1,	// (0x0009bae5) list_single_fs_bigclock_indicator_pane_g5

0xc788,	// (0x0009bb8c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc788,	// (0x0009bb8c) list_single_fs_bigclock_indicator_pane_t5

0x92a9,	// (0x000986ad) aid_cell_bcale_month_pane_ParamLimits

0x92a9,	// (0x000986ad) aid_cell_bcale_month_pane

0x92c1,	// (0x000986c5) bcale_month_pane_ParamLimits

0x92c1,	// (0x000986c5) bcale_month_pane

0x92d8,	// (0x000986dc) bcale_preview_pane_ParamLimits

0x92d8,	// (0x000986dc) bcale_preview_pane

0xd2db,	// (0x0009c6df) list_single_fs_bigclock_pane_t1_ParamLimits

0xd2fa,	// (0x0009c6fe) list_single_fs_bigclock_pane_t2_ParamLimits

0xd2fa,	// (0x0009c6fe) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0009f27e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009f27e) list_single_fs_bigclock_pane_t

0xd551,	// (0x0009c955) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0009f2e2) main_fs_bigclock_unlock_btn_pane_g

0x9ba6,	// (0x00098faa) aid_dia3_key_size_ParamLimits

0x9ba6,	// (0x00098faa) aid_dia3_key_size

0x9bb5,	// (0x00098fb9) aid_dia3_listrow_size_ParamLimits

0x9bb5,	// (0x00098fb9) aid_dia3_listrow_size

0x9bca,	// (0x00098fce) dia3_keypad_fun_pane_ParamLimits

0x9bca,	// (0x00098fce) dia3_keypad_fun_pane

0x9be6,	// (0x00098fea) dia3_keypad_num_pane_ParamLimits

0x9be6,	// (0x00098fea) dia3_keypad_num_pane

0x9c01,	// (0x00099005) dia3_listscroll_pane_ParamLimits

0x9c01,	// (0x00099005) dia3_listscroll_pane

0x9c14,	// (0x00099018) dia3_numentry_pane_ParamLimits

0x9c14,	// (0x00099018) dia3_numentry_pane

0xd567,	// (0x0009c96b) dia3_list_pane

0xd572,	// (0x0009c976) scroll_pane_cp12

0xec5a,	// (0x0009e05e) bg_dia3_numentry_pane

0x9c28,	// (0x0009902c) dia3_numentry_pane_t1

0x9c37,	// (0x0009903b) cell_dia3_key_num_pane

0x9c3f,	// (0x00099043) cell_dia3_key0_fun_pane_ParamLimits

0x9c3f,	// (0x00099043) cell_dia3_key0_fun_pane

0x9c53,	// (0x00099057) cell_dia3_key1_fun_pane_ParamLimits

0x9c53,	// (0x00099057) cell_dia3_key1_fun_pane

0x9c6b,	// (0x0009906f) dia3_listrow_pane

0xc3d7,	// (0x0009b7db) bg_dia3_numentry_pane_g1

0xec5a,	// (0x0009e05e) bg_button_pane_cp21

0xd57d,	// (0x0009c981) cell_dia3_key_num_pane_t1

0xd58b,	// (0x0009c98f) cell_dia3_key_num_pane_t2

0xd59a,	// (0x0009c99e) cell_dia3_key_num_pane_t3

0xd5a9,	// (0x0009c9ad) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0009f2fe) cell_dia3_key_num_pane_t

0xec5a,	// (0x0009e05e) bg_button_pane_cp19

0x9c7d,	// (0x00099081) cell_dia3_key0_fun_pane_g1

0xec5a,	// (0x0009e05e) bg_button_pane_cp20

0x9c85,	// (0x00099089) cell_dia3_key1_fun_pane_g1

0x9c8d,	// (0x00099091) area_left_week_number_pane

0x9c97,	// (0x0009909b) area_top_day_name_pane

0x9ca3,	// (0x000990a7) frame_month_view_pane

0x9cad,	// (0x000990b1) grid_month_view_pane

0xd5b8,	// (0x0009c9bc) cell_top_day_name_pane_ParamLimits

0xd5b8,	// (0x0009c9bc) cell_top_day_name_pane

0x9cb7,	// (0x000990bb) cell_area_left_week_number_pane_ParamLimits

0x9cb7,	// (0x000990bb) cell_area_left_week_number_pane

0x9ccb,	// (0x000990cf) cell_month_view_pane_ParamLimits

0x9ccb,	// (0x000990cf) cell_month_view_pane

0xd5d2,	// (0x0009c9d6) frm_month_g1

0x9ce8,	// (0x000990ec) frm_month_g2

0x9cf2,	// (0x000990f6) frm_month_g3

0x9cfc,	// (0x00099100) frm_month_g4

0x9d06,	// (0x0009910a) frm_month_g5

0x9d10,	// (0x00099114) frm_month_g6

0x9d1a,	// (0x0009911e) frm_month_g7

0xd5db,	// (0x0009c9df) frm_month_g8

0xd5e4,	// (0x0009c9e8) frm_month_g9

0xd5ed,	// (0x0009c9f1) frm_month_g10

0xd5f6,	// (0x0009c9fa) frm_month_g11

0xd5ff,	// (0x0009ca03) frm_month_g12

0xd608,	// (0x0009ca0c) frm_month_g13

0xd611,	// (0x0009ca15) frm_month_g14

0xd61c,	// (0x0009ca20) frm_month_g15

0xd627,	// (0x0009ca2b) frm_month_g16

0x000f,

0xff03,	// (0x0009f307) frm_month_g

0x9d24,	// (0x00099128) cell_top_day_name_pane_t1

0x9d33,	// (0x00099137) cell_area_left_week_number_pane_g1

0x9d3b,	// (0x0009913f) cell_area_left_week_number_pane_t1

0xa995,	// (0x00099d99) cell_month_view_pane_g1

0x9d4a,	// (0x0009914e) cell_month_view_pane_t1

0xec5a,	// (0x0009e05e) main_fps_pane

0xc9c4,	// (0x0009bdc8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc9c4,	// (0x0009bdc8) cmail_ddmenu_btn02_pane_cp1

0xc9e0,	// (0x0009bde4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc9e0,	// (0x0009bde4) cmail_ddmenu_btn02_pane_cp2

0x958e,	// (0x00098992) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x958e,	// (0x00098992) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0009f231) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0009f231) cmail_ddmenu_btn02_pane_g

0x95af,	// (0x000989b3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x95af,	// (0x000989b3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0009f236) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0009f236) cmail_ddmenu_btn02_pane_t

0x9d59,	// (0x0009915d) fps_text_pane_ParamLimits

0x9d59,	// (0x0009915d) fps_text_pane

0x9d70,	// (0x00099174) main_fps_pane_g1_ParamLimits

0x9d70,	// (0x00099174) main_fps_pane_g1

0x9d8a,	// (0x0009918e) wait_bar_pane_cp010_ParamLimits

0x9d8a,	// (0x0009918e) wait_bar_pane_cp010

0x9d9b,	// (0x0009919f) fps_text_pane_t1_ParamLimits

0x9d9b,	// (0x0009919f) fps_text_pane_t1

0xb64f,	// (0x0009aa53) cam4_image_uncrop_pane_g1

0xb658,	// (0x0009aa5c) cam4_image_uncrop_pane_g2

0x6be8,	// (0x00095fec) cam4_image_uncrop_pane_g3

0x6bf1,	// (0x00095ff5) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0009ecf8) cam4_image_uncrop_pane_g

0x9c6b,	// (0x0009906f) dia3_listrow_pane_ParamLimits

0xec5a,	// (0x0009e05e) main_phob2_pane

0x90e2,	// (0x000984e6) cell_tport_appsw_pane_cp02_ParamLimits

0x90e2,	// (0x000984e6) cell_tport_appsw_pane_cp02

0x90f6,	// (0x000984fa) cell_tport_appsw_pane_cp03_ParamLimits

0x90f6,	// (0x000984fa) cell_tport_appsw_pane_cp03

0xec5a,	// (0x0009e05e) phob2_contact_card_pane

0xec5a,	// (0x0009e05e) phob2_listscroll_pane

0xd632,	// (0x0009ca36) phob2_list_pane

0xd63a,	// (0x0009ca3e) scroll_pane_cp034

0x9db3,	// (0x000991b7) phob2_cc_data_pane_ParamLimits

0x9db3,	// (0x000991b7) phob2_cc_data_pane

0x9dd2,	// (0x000991d6) phob2_cc_listscroll_pane_ParamLimits

0x9dd2,	// (0x000991d6) phob2_cc_listscroll_pane

0x9df0,	// (0x000991f4) list_double_large_graphic_phob2_pane_ParamLimits

0x9df0,	// (0x000991f4) list_double_large_graphic_phob2_pane

0x9e02,	// (0x00099206) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e02,	// (0x00099206) list_double_large_graphic_phob2_pane_g1

0x9e0f,	// (0x00099213) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9e0f,	// (0x00099213) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0009f328) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0009f328) list_double_large_graphic_phob2_pane_g

0x9e1b,	// (0x0009921f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9e1b,	// (0x0009921f) list_double_large_graphic_phob2_pane_t1

0x9e30,	// (0x00099234) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9e30,	// (0x00099234) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0009f32d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0009f32d) list_double_large_graphic_phob2_pane_t

0xec5a,	// (0x0009e05e) list_highlight_pane_cp024

0xd642,	// (0x0009ca46) phob2_cc_button_pane

0x9e42,	// (0x00099246) phob2_cc_data_pane_g1_ParamLimits

0x9e42,	// (0x00099246) phob2_cc_data_pane_g1

0x9e57,	// (0x0009925b) phob2_cc_data_pane_g2_ParamLimits

0x9e57,	// (0x0009925b) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0009f332) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0009f332) phob2_cc_data_pane_g

0x9e69,	// (0x0009926d) phob2_cc_data_pane_t1_ParamLimits

0x9e69,	// (0x0009926d) phob2_cc_data_pane_t1

0x9e81,	// (0x00099285) phob2_cc_data_pane_t2_ParamLimits

0x9e81,	// (0x00099285) phob2_cc_data_pane_t2

0x9e99,	// (0x0009929d) phob2_cc_data_pane_t3_ParamLimits

0x9e99,	// (0x0009929d) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0009f337) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0009f337) phob2_cc_data_pane_t

0xd64a,	// (0x0009ca4e) phob2_cc_list_pane_ParamLimits

0xd64a,	// (0x0009ca4e) phob2_cc_list_pane

0xba2b,	// (0x0009ae2f) scroll_pane_cp035_ParamLimits

0xba2b,	// (0x0009ae2f) scroll_pane_cp035

0x47f9,	// (0x00093bfd) bg_button_pane_cp033

0xd656,	// (0x0009ca5a) phob2_cc_button_pane_g1

0xd662,	// (0x0009ca66) phob2_cc_button_pane_t1

0xd677,	// (0x0009ca7b) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0009f33e) phob2_cc_button_pane_t

0x9eb1,	// (0x000992b5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9eb1,	// (0x000992b5) list_double_large_graphic_phob2_cc_pane

0x9ec3,	// (0x000992c7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ec3,	// (0x000992c7) list_double_large_graphic_phob2_cc_pane_g1

0x9ecf,	// (0x000992d3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9ecf,	// (0x000992d3) list_double_large_graphic_phob2_cc_pane_g2

0x9edb,	// (0x000992df) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9edb,	// (0x000992df) list_double_large_graphic_phob2_cc_pane_g3

0x9ee7,	// (0x000992eb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9ee7,	// (0x000992eb) list_double_large_graphic_phob2_cc_pane_g4

0x9ef3,	// (0x000992f7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ef3,	// (0x000992f7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0009f343) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0009f343) list_double_large_graphic_phob2_cc_pane_g

0x9eff,	// (0x00099303) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9eff,	// (0x00099303) list_double_large_graphic_phob2_cc_pane_t1

0x9f28,	// (0x0009932c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9f28,	// (0x0009932c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0009f34e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0009f34e) list_double_large_graphic_phob2_cc_pane_t

0xd689,	// (0x0009ca8d) list_highlight_pane_cp025_ParamLimits

0xd689,	// (0x0009ca8d) list_highlight_pane_cp025

0x47f9,	// (0x00093bfd) bg_button_pane_cp033_ParamLimits

0xd656,	// (0x0009ca5a) phob2_cc_button_pane_g1_ParamLimits

0xd662,	// (0x0009ca66) phob2_cc_button_pane_t1_ParamLimits

0xd677,	// (0x0009ca7b) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0009f33e) phob2_cc_button_pane_t_ParamLimits

0x0c6a,	// (0x0009006e) popup_wgtman_window

0xb818,	// (0x0009ac1c) scroll_pane_cp038

0x99b8,	// (0x00098dbc) wgtman_btn_pane_cp_01_ParamLimits

0x99b8,	// (0x00098dbc) wgtman_btn_pane_cp_01

0xd697,	// (0x0009ca9b) wgtman_content_pane

0xd6a0,	// (0x0009caa4) wgtman_heading_pane

0xec5a,	// (0x0009e05e) bg_heading_pane_cp02

0xd6a9,	// (0x0009caad) wgtman_heading_pane_g1

0xd6b1,	// (0x0009cab5) wgtman_heading_pane_t1

0xd6bf,	// (0x0009cac3) scroll_pane_cp036

0xd6c7,	// (0x0009cacb) wgtman_list_pane

0xd6cf,	// (0x0009cad3) wgtman_list_pane_t1_ParamLimits

0xd6cf,	// (0x0009cad3) wgtman_list_pane_t1

0xdafa,	// (0x0009cefe) cam4_grid_pane

0x781f,	// (0x00096c23) bg_button_pane_cp015_ParamLimits

0x7831,	// (0x00096c35) bg_button_pane_cp016_ParamLimits

0x7844,	// (0x00096c48) bg_button_pane_cp017_ParamLimits

0x789c,	// (0x00096ca0) popup_vitu2_query_window_g3_ParamLimits

0x789c,	// (0x00096ca0) popup_vitu2_query_window_g3

0x7959,	// (0x00096d5d) popup_vitu2_query_window_t6_ParamLimits

0x7959,	// (0x00096d5d) popup_vitu2_query_window_t6

0x7984,	// (0x00096d88) popup_vitu2_query_window_t7_ParamLimits

0x7984,	// (0x00096d88) popup_vitu2_query_window_t7

0xb64f,	// (0x0009aa53) cam4_grid_pane_g1

0xb658,	// (0x0009aa5c) cam4_grid_pane_g2

0xd6e9,	// (0x0009caed) cam4_grid_pane_g3

0xd6f2,	// (0x0009caf6) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0009f353) cam4_grid_pane_g

0x1abb,	// (0x00090ebf) aid_placing_vt_slider_lsc_ParamLimits

0x1dc6,	// (0x000911ca) vidtel_button_pane_ParamLimits

0x1dc6,	// (0x000911ca) vidtel_button_pane

0xd6fd,	// (0x0009cb01) bg_button_pane_cp034

0x9f51,	// (0x00099355) vidtel_button_pane_g1

0xd707,	// (0x0009cb0b) vidtel_button_pane_t1

0xb94a,	// (0x0009ad4e) aid_size_vtel_slider_touch

0xba2b,	// (0x0009ae2f) scroll_pane_cp039

0xc415,	// (0x0009b819) ncim_query_button_pane_cp01_ParamLimits

0xc434,	// (0x0009b838) ncimui_query_pane_g1_ParamLimits

0x47f9,	// (0x00093bfd) input_focus_pane_cp012_ParamLimits

0xc459,	// (0x0009b85d) ncim_query_entry_pane_t1_ParamLimits

0xba2b,	// (0x0009ae2f) scroll_pane_cp039_ParamLimits

0x2c18,	// (0x0009201c) navi_pane_bcale_mc_g1

0x2c20,	// (0x00092024) navi_pane_bcale_mc_t1

0xca29,	// (0x0009be2d) main_sp_fs_email_pane_g1

0xca31,	// (0x0009be35) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0009f0ef) main_sp_fs_email_pane_g

0xcf6c,	// (0x0009c370) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcf6c,	// (0x0009c370) list_single_cale_mrui_row_pane_g3

0x95d7,	// (0x000989db) list_single_recal_day_pane_g5_event_pane

0xd13a,	// (0x0009c53e) list_single_recal_day_pane_g7

0xd715,	// (0x0009cb19) list_recal_day_event_pane_cp01

0xd71e,	// (0x0009cb22) list_recal_vselct_arw_lo_pane_cp01

0xd726,	// (0x0009cb2a) list_recal_vselct_arw_up_pane_cp01

0xd72e,	// (0x0009cb32) list_recal_vselct_pane_cp01

0xb992,	// (0x0009ad96) list_recal_day_event_pane_cp01_g1

0xd738,	// (0x0009cb3c) list_recal_day_event_pane_cp01_t1

0xd142,	// (0x0009c546) list_single_recal_day_pane_t1_ParamLimits

0xd154,	// (0x0009c558) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0009f246) list_single_recal_day_pane_t_ParamLimits

0xe0ab,	// (0x0009d4af) bg_notes_pane_ParamLimits

0xe0b9,	// (0x0009d4bd) list_notes_pane_ParamLimits

0x0fb3,	// (0x000903b7) scroll_pane_cp06_ParamLimits

0xe0db,	// (0x0009d4df) main_notes_pane_ParamLimits

0xec5a,	// (0x0009e05e) main_welc_pane

0x9f59,	// (0x0009935d) main_welc_body_pane_ParamLimits

0x9f59,	// (0x0009935d) main_welc_body_pane

0x9f77,	// (0x0009937b) main_welc_opti_pane_ParamLimits

0x9f77,	// (0x0009937b) main_welc_opti_pane

0x9fbc,	// (0x000993c0) main_welc_pane_t1_ParamLimits

0x9fbc,	// (0x000993c0) main_welc_pane_t1

0x9fda,	// (0x000993de) main_welc_body_row_pane_ParamLimits

0x9fda,	// (0x000993de) main_welc_body_row_pane

0x9fee,	// (0x000993f2) main_welc_opti_row_pane_ParamLimits

0x9fee,	// (0x000993f2) main_welc_opti_row_pane

0xd746,	// (0x0009cb4a) main_welc_opti_row_pane_g1

0xd74e,	// (0x0009cb52) main_welc_opti_row_pane_t1

0xd75d,	// (0x0009cb61) main_welc_body_row_pane_t1

0xd3e1,	// (0x0009c7e5) popup_notif_wgt_heading_pane

0xd3fb,	// (0x0009c7ff) aid_size_list_notif_wgt_del_ParamLimits

0xd408,	// (0x0009c80c) list_notif_wgt_row_pane_g1_ParamLimits

0xd414,	// (0x0009c818) list_notif_wgt_row_pane_g2_ParamLimits

0xd420,	// (0x0009c824) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0009f2ad) list_notif_wgt_row_pane_g_ParamLimits

0xd42d,	// (0x0009c831) list_notif_wgt_row_pane_t1_ParamLimits

0xd442,	// (0x0009c846) list_notif_wgt_row_pane_t2_ParamLimits

0xd454,	// (0x0009c858) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0009f2b4) list_notif_wgt_row_pane_t_ParamLimits

0x9a51,	// (0x00098e55) listrow_wgtman_pane_g1_ParamLimits

0x9a5e,	// (0x00098e62) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0009f2d8) listrow_wgtman_pane_g_ParamLimits

0x9a7c,	// (0x00098e80) listrow_wgtman_pane_t1_ParamLimits

0x9a94,	// (0x00098e98) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0009f2dd) listrow_wgtman_pane_t_ParamLimits

0x9aba,	// (0x00098ebe) wait_bar_pane_cp09_ParamLimits

0xec5a,	// (0x0009e05e) bg_popup_heading_pane_cp02

0xd76c,	// (0x0009cb70) popup_notif_wgt_heading_pane_g1

0xd774,	// (0x0009cb78) popup_notif_wgt_heading_pane_t1

0xec5a,	// (0x0009e05e) main_vids_pane

0xec5a,	// (0x0009e05e) vids_listscroll_pane

0x9ffe,	// (0x00099402) scroll_pane_cp040

0xec5a,	// (0x0009e05e) vids_list_pane

0xa009,	// (0x0009940d) vids_list_double_pane_ParamLimits

0xa009,	// (0x0009940d) vids_list_double_pane

0xa01a,	// (0x0009941e) vids_list_double_pane_g1

0xa023,	// (0x00099427) vids_list_double_pane_t1

0xa033,	// (0x00099437) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0009f361) vids_list_double_pane_t

0xa0b1,	// (0x000994b5) main_ncimui_pane_ParamLimits

0x8484,	// (0x00097888) main_ncimui_pane_g1_ParamLimits

0x8490,	// (0x00097894) main_ncimui_pane_g2_ParamLimits

0x8490,	// (0x00097894) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0009eff4) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0009eff4) main_ncimui_pane_g

0x9f92,	// (0x00099396) main_welc_pane_g1_ParamLimits

0x9f92,	// (0x00099396) main_welc_pane_g1

0x9fa7,	// (0x000993ab) main_welc_pane_g2_ParamLimits

0x9fa7,	// (0x000993ab) main_welc_pane_g2

0x0001,

0xff58,	// (0x0009f35c) main_welc_pane_g_ParamLimits

0xff58,	// (0x0009f35c) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
