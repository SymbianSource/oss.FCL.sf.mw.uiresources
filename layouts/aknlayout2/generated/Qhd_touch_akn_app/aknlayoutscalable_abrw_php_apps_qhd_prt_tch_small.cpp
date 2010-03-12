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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004cf27 };

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
0x5a2d,	// (0x00052954) Screen

0x5a39,	// (0x00052960) application_window

0x5a95,	// (0x000529bc) area_bottom_pane_ParamLimits

0x5a95,	// (0x000529bc) area_bottom_pane

0x5aee,	// (0x00052a15) area_top_pane_ParamLimits

0x5aee,	// (0x00052a15) area_top_pane

0x5b52,	// (0x00052a79) call_video_uplink_pane_ParamLimits

0x5b52,	// (0x00052a79) call_video_uplink_pane

0x5b8f,	// (0x00052ab6) main_pane_ParamLimits

0x5b8f,	// (0x00052ab6) main_pane

0x3de0,	// (0x00050d07) context_pane

0x8cfa,	// (0x00055c21) navi_pane

0x8d1a,	// (0x00055c41) popup_cale_events_window_ParamLimits

0x8d1a,	// (0x00055c41) popup_cale_events_window

0x3df3,	// (0x00050d1a) popup_mup_playback_window

0x8d32,	// (0x00055c59) signal_pane

0x1eeb,	// (0x0004ee12) main_browser_pane

0x29be,	// (0x0004f8e5) main_burst_pane

0x8b77,	// (0x00055a9e) main_calc_pane

0x29be,	// (0x0004f8e5) main_cale_day_pane

0x1eeb,	// (0x0004ee12) main_cale_month_pane

0x29be,	// (0x0004f8e5) main_cale_week_pane

0x29be,	// (0x0004f8e5) main_call_pane

0x1bbd,	// (0x0004eae4) main_call_poc_pane

0x29be,	// (0x0004f8e5) main_camera_pane

0x29be,	// (0x0004f8e5) main_chi_dic_pane

0x2843,	// (0x0004f76a) main_clock_pane

0x1bbd,	// (0x0004eae4) main_fmradio_pane

0x29be,	// (0x0004f8e5) main_graph_messa_pane

0x1bbd,	// (0x0004eae4) main_help_pane

0x1eeb,	// (0x0004ee12) main_im_pane

0x1e18,	// (0x0004ed3f) main_image_pane_ParamLimits

0x1e18,	// (0x0004ed3f) main_image_pane

0x1bbd,	// (0x0004eae4) main_location2_pane

0x29be,	// (0x0004f8e5) main_location_pane

0x1bbd,	// (0x0004eae4) main_messa_pane

0x1bbd,	// (0x0004eae4) main_mp2_pane

0x29be,	// (0x0004f8e5) main_mp_pane

0x1bbd,	// (0x0004eae4) main_msg_pane

0x1bbd,	// (0x0004eae4) main_mup_eq_pane

0x1bbd,	// (0x0004eae4) main_mup_pane

0x1eeb,	// (0x0004ee12) main_notes_pane

0x1bbd,	// (0x0004eae4) main_pec_pane

0x1bbd,	// (0x0004eae4) main_phob_pane

0x1bbd,	// (0x0004eae4) main_pinb_pane

0x1bbd,	// (0x0004eae4) main_postcard_pane

0x1bbd,	// (0x0004eae4) main_qdial_pane

0x29be,	// (0x0004f8e5) main_skin_pane

0x1bbd,	// (0x0004eae4) main_smil2_pane

0x29be,	// (0x0004f8e5) main_smil_pane

0x29be,	// (0x0004f8e5) main_video_pane

0x29be,	// (0x0004f8e5) main_video_tele_pane

0x1e18,	// (0x0004ed3f) main_viewer_pane_ParamLimits

0x1e18,	// (0x0004ed3f) main_viewer_pane

0x29be,	// (0x0004f8e5) main_vorec_pane

0x8bc3,	// (0x00055aea) popup_blid_sat_info_window_ParamLimits

0x8bc3,	// (0x00055aea) popup_blid_sat_info_window

0x8be3,	// (0x00055b0a) popup_dyc_status_message_window_ParamLimits

0x8be3,	// (0x00055b0a) popup_dyc_status_message_window

0x8bf3,	// (0x00055b1a) popup_grid_large_graphic_window_ParamLimits

0x8bf3,	// (0x00055b1a) popup_grid_large_graphic_window

0x8c84,	// (0x00055bab) popup_loc_request_window_ParamLimits

0x8c84,	// (0x00055bab) popup_loc_request_window

0x8cd2,	// (0x00055bf9) popup_wml_address_window_ParamLimits

0x8cd2,	// (0x00055bf9) popup_wml_address_window

0x8a4f,	// (0x00055976) call_muted_g1

0x8711,	// (0x00055638) popup_call_audio_conf_window_ParamLimits

0x8711,	// (0x00055638) popup_call_audio_conf_window

0x8a5f,	// (0x00055986) popup_call_audio_first_window_ParamLimits

0x8a5f,	// (0x00055986) popup_call_audio_first_window

0x8a9f,	// (0x000559c6) popup_call_audio_in_window_ParamLimits

0x8a9f,	// (0x000559c6) popup_call_audio_in_window

0x8ac3,	// (0x000559ea) popup_call_audio_out_window_ParamLimits

0x8ac3,	// (0x000559ea) popup_call_audio_out_window

0x8ae5,	// (0x00055a0c) popup_call_audio_second_window_ParamLimits

0x8ae5,	// (0x00055a0c) popup_call_audio_second_window

0x8b15,	// (0x00055a3c) popup_call_audio_wait_window_ParamLimits

0x8b15,	// (0x00055a3c) popup_call_audio_wait_window

0x8b36,	// (0x00055a5d) popup_number_entry_window_ParamLimits

0x8b36,	// (0x00055a5d) popup_number_entry_window

0x17aa,	// (0x0004e6d1) bg_popup_call_pane_cp05_ParamLimits

0x17aa,	// (0x0004e6d1) bg_popup_call_pane_cp05

0x17ca,	// (0x0004e6f1) popup_number_entry_window_t1

0x17dd,	// (0x0004e704) popup_number_entry_window_t2

0x17ef,	// (0x0004e716) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0005bfff) popup_number_entry_window_t

0x1801,	// (0x0004e728) text_title_cp2

0x1814,	// (0x0004e73b) bg_popup_call_pane_cp_ParamLimits

0x1814,	// (0x0004e73b) bg_popup_call_pane_cp

0x1822,	// (0x0004e749) call_thumbnail_pane

0x182a,	// (0x0004e751) popup_call_audio_in_window_g1_ParamLimits

0x182a,	// (0x0004e751) popup_call_audio_in_window_g1

0x1836,	// (0x0004e75d) popup_call_audio_in_window_g2_ParamLimits

0x1836,	// (0x0004e75d) popup_call_audio_in_window_g2

0x1842,	// (0x0004e769) popup_call_audio_in_window_g3_ParamLimits

0x1842,	// (0x0004e769) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0005c008) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0005c008) popup_call_audio_in_window_g

0x184e,	// (0x0004e775) popup_call_audio_in_window_t1_ParamLimits

0x184e,	// (0x0004e775) popup_call_audio_in_window_t1

0x186a,	// (0x0004e791) popup_call_audio_in_window_t2_ParamLimits

0x186a,	// (0x0004e791) popup_call_audio_in_window_t2

0x1886,	// (0x0004e7ad) popup_call_audio_in_window_t3_ParamLimits

0x1886,	// (0x0004e7ad) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0005c00f) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0005c00f) popup_call_audio_in_window_t

0x1814,	// (0x0004e73b) bg_popup_call_pane_cp01_ParamLimits

0x1814,	// (0x0004e73b) bg_popup_call_pane_cp01

0x1822,	// (0x0004e749) call_thumbnail_pane_cp02

0x1899,	// (0x0004e7c0) call_type_pane_cp022

0x18a1,	// (0x0004e7c8) popup_call_audio_out_window_g1_ParamLimits

0x18a1,	// (0x0004e7c8) popup_call_audio_out_window_g1

0x18b3,	// (0x0004e7da) popup_call_audio_out_window_g2_ParamLimits

0x18b3,	// (0x0004e7da) popup_call_audio_out_window_g2

0x18bf,	// (0x0004e7e6) popup_call_audio_out_window_g3_ParamLimits

0x18bf,	// (0x0004e7e6) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0005c016) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0005c016) popup_call_audio_out_window_g

0x18d1,	// (0x0004e7f8) popup_call_audio_out_window_t1_ParamLimits

0x18d1,	// (0x0004e7f8) popup_call_audio_out_window_t1

0x18e9,	// (0x0004e810) popup_call_audio_out_window_t2_ParamLimits

0x18e9,	// (0x0004e810) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0005c01d) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0005c01d) popup_call_audio_out_window_t

0x18fe,	// (0x0004e825) bg_popup_call_pane_ParamLimits

0x18fe,	// (0x0004e825) bg_popup_call_pane

0x5d9e,	// (0x00052cc5) call_thumbnail_pane_cp_ParamLimits

0x5d9e,	// (0x00052cc5) call_thumbnail_pane_cp

0x1982,	// (0x0004e8a9) call_type_pane_cp01_ParamLimits

0x1982,	// (0x0004e8a9) call_type_pane_cp01

0x19c6,	// (0x0004e8ed) popup_call_audio_first_window_g1_ParamLimits

0x19c6,	// (0x0004e8ed) popup_call_audio_first_window_g1

0x1a12,	// (0x0004e939) popup_call_audio_first_window_g2_ParamLimits

0x1a12,	// (0x0004e939) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0005c022) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0005c022) popup_call_audio_first_window_g

0x1a56,	// (0x0004e97d) popup_call_audio_first_window_t1_ParamLimits

0x1a56,	// (0x0004e97d) popup_call_audio_first_window_t1

0x1b02,	// (0x0004ea29) popup_call_audio_first_window_t4_ParamLimits

0x1b02,	// (0x0004ea29) popup_call_audio_first_window_t4

0x1b8e,	// (0x0004eab5) popup_call_audio_first_window_t5_ParamLimits

0x1b8e,	// (0x0004eab5) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0005c027) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0005c027) popup_call_audio_first_window_t

0x1bbd,	// (0x0004eae4) bg_popup_call_pane_cp02

0x1bc7,	// (0x0004eaee) call_type_pane_cp023

0x1bcf,	// (0x0004eaf6) popup_call_audio_wait_window_g1

0x1bd7,	// (0x0004eafe) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0005c02e) popup_call_audio_wait_window_g

0x1bdf,	// (0x0004eb06) popup_call_audio_wait_window_t3

0x1bed,	// (0x0004eb14) bg_popup_call_pane_cp03_ParamLimits

0x1bed,	// (0x0004eb14) bg_popup_call_pane_cp03

0x1c4d,	// (0x0004eb74) call_thumbnail_pane_cp011_ParamLimits

0x1c4d,	// (0x0004eb74) call_thumbnail_pane_cp011

0x1c59,	// (0x0004eb80) call_type_pane_cp034_ParamLimits

0x1c59,	// (0x0004eb80) call_type_pane_cp034

0x1c95,	// (0x0004ebbc) popup_call_audio_second_window_g1_ParamLimits

0x1c95,	// (0x0004ebbc) popup_call_audio_second_window_g1

0x1cd1,	// (0x0004ebf8) popup_call_audio_second_window_g2_ParamLimits

0x1cd1,	// (0x0004ebf8) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0005c033) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0005c033) popup_call_audio_second_window_g

0x1d0d,	// (0x0004ec34) popup_call_audio_second_window_t1_ParamLimits

0x1d0d,	// (0x0004ec34) popup_call_audio_second_window_t1

0x1d8e,	// (0x0004ecb5) popup_call_audio_second_window_t2_ParamLimits

0x1d8e,	// (0x0004ecb5) popup_call_audio_second_window_t2

0x1dc4,	// (0x0004eceb) popup_call_audio_second_window_t3_ParamLimits

0x1dc4,	// (0x0004eceb) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0005c038) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0005c038) popup_call_audio_second_window_t

0x1bbd,	// (0x0004eae4) bg_popup_call_pane_cp04

0x1dfa,	// (0x0004ed21) list_conf_pane

0x1e02,	// (0x0004ed29) popup_call_audio_conf_window_t1

0x1e10,	// (0x0004ed37) call_thumbnail_pane_g1

0x1e18,	// (0x0004ed3f) bg_pinb_pane_ParamLimits

0x1e18,	// (0x0004ed3f) bg_pinb_pane

0x1e26,	// (0x0004ed4d) find_pinb_pane

0x1e2f,	// (0x0004ed56) listscroll_pinb_pane_ParamLimits

0x1e2f,	// (0x0004ed56) listscroll_pinb_pane

0x1e3e,	// (0x0004ed65) pinb_bg_pane_g1

0x5dc2,	// (0x00052ce9) pinb_bg_pane_g2

0x5dce,	// (0x00052cf5) pinb_bg_pane_g3

0x5dda,	// (0x00052d01) pinb_bg_pane_g4

0x5de6,	// (0x00052d0d) pinb_bg_pane_g5

0x5df2,	// (0x00052d19) pinb_bg_pane_g6

0x5dfd,	// (0x00052d24) pinb_bg_pane_g7

0x5e08,	// (0x00052d2f) pinb_bg_pane_g8

0x5e13,	// (0x00052d3a) pinb_bg_pane_g9

0x5e1d,	// (0x00052d44) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0005c03f) pinb_bg_pane_g

0x5e3a,	// (0x00052d61) grid_pinb_pane

0x5e45,	// (0x00052d6c) list_pinb_pane

0x5e50,	// (0x00052d77) scroll_pane_cp01_ParamLimits

0x5e50,	// (0x00052d77) scroll_pane_cp01

0x1e48,	// (0x0004ed6f) find_pinb_pane_g1_ParamLimits

0x1e48,	// (0x0004ed6f) find_pinb_pane_g1

0x1e60,	// (0x0004ed87) find_pinb_pane_t1

0x1e72,	// (0x0004ed99) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0005c059) find_pinb_pane_t

0x1e87,	// (0x0004edae) input_focus_pane_cp01_ParamLimits

0x1e87,	// (0x0004edae) input_focus_pane_cp01

0x5e62,	// (0x00052d89) cell_pinb_pane_ParamLimits

0x5e62,	// (0x00052d89) cell_pinb_pane

0x5e8a,	// (0x00052db1) cell_pinb_pane_g1_ParamLimits

0x5e8a,	// (0x00052db1) cell_pinb_pane_g1

0x5e9f,	// (0x00052dc6) cell_pinb_pane_g2_ParamLimits

0x5e9f,	// (0x00052dc6) cell_pinb_pane_g2

0x1e93,	// (0x0004edba) cell_pinb_pane_g3_ParamLimits

0x1e93,	// (0x0004edba) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0005c05e) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0005c05e) cell_pinb_pane_g

0x1bbd,	// (0x0004eae4) grid_highlight_pane_cp01

0x5eab,	// (0x00052dd2) list_pinb_item_pane_ParamLimits

0x5eab,	// (0x00052dd2) list_pinb_item_pane

0x1bbd,	// (0x0004eae4) list_highlight_pane_cp02

0x5ed1,	// (0x00052df8) list_pinb_item_pane_g1_ParamLimits

0x5ed1,	// (0x00052df8) list_pinb_item_pane_g1

0x5ede,	// (0x00052e05) list_pinb_item_pane_g2_ParamLimits

0x5ede,	// (0x00052e05) list_pinb_item_pane_g2

0x5eea,	// (0x00052e11) list_pinb_item_pane_g3_ParamLimits

0x5eea,	// (0x00052e11) list_pinb_item_pane_g3

0x5efb,	// (0x00052e22) list_pinb_item_pane_g4_ParamLimits

0x5efb,	// (0x00052e22) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0005c065) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0005c065) list_pinb_item_pane_g

0x5f07,	// (0x00052e2e) list_pinb_item_pane_t1_ParamLimits

0x5f07,	// (0x00052e2e) list_pinb_item_pane_t1

0x5f38,	// (0x00052e5f) calc_display_pane

0x5f56,	// (0x00052e7d) calc_paper_pane

0x5f72,	// (0x00052e99) grid_calc_pane

0x1bbd,	// (0x0004eae4) bg_list_pane_cp01

0x5f9e,	// (0x00052ec5) clock_g1

0x5fa6,	// (0x00052ecd) clock_g2

0x0001,

0xf147,	// (0x0005c06e) clock_g

0x5fb0,	// (0x00052ed7) clock_t1_ParamLimits

0x5fb0,	// (0x00052ed7) clock_t1

0x5fc5,	// (0x00052eec) clock_t2_ParamLimits

0x5fc5,	// (0x00052eec) clock_t2

0x5fd7,	// (0x00052efe) clock_t3_ParamLimits

0x5fd7,	// (0x00052efe) clock_t3

0x5fe9,	// (0x00052f10) clock_t4_ParamLimits

0x5fe9,	// (0x00052f10) clock_t4

0x5ffb,	// (0x00052f22) clock_t5_ParamLimits

0x5ffb,	// (0x00052f22) clock_t5

0x6010,	// (0x00052f37) clock_t6_ParamLimits

0x6010,	// (0x00052f37) clock_t6

0x6022,	// (0x00052f49) clock_t7_ParamLimits

0x6022,	// (0x00052f49) clock_t7

0x6034,	// (0x00052f5b) clock_t8_ParamLimits

0x6034,	// (0x00052f5b) clock_t8

0x604a,	// (0x00052f71) clock_t9_ParamLimits

0x604a,	// (0x00052f71) clock_t9

0x0008,

0xf14c,	// (0x0005c073) clock_t_ParamLimits

0xf14c,	// (0x0005c073) clock_t

0x1e9f,	// (0x0004edc6) popup_clock_analogue_window_cp02

0x1e9f,	// (0x0004edc6) popup_clock_digital_window_cp01

0x1ea7,	// (0x0004edce) listscroll_help_pane

0x1bbd,	// (0x0004eae4) phob_pre_status_pane

0x1eb1,	// (0x0004edd8) grid_qdial_pane

0x1bbd,	// (0x0004eae4) listscroll_mce_pane

0x1ebb,	// (0x0004ede2) bg_notes_pane

0x1ec9,	// (0x0004edf0) list_notes_pane

0x6060,	// (0x00052f87) scroll_pane_cp06

0x1ed7,	// (0x0004edfe) bg_calc_paper_pane

0x606f,	// (0x00052f96) list_calc_pane

0x1eeb,	// (0x0004ee12) bg_calc_display_pane

0x6089,	// (0x00052fb0) calc_display_pane_t1

0x609e,	// (0x00052fc5) calc_display_pane_t2

0x60b3,	// (0x00052fda) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0005c086) calc_display_pane_t

0x60c5,	// (0x00052fec) cell_calc_pane_ParamLimits

0x60c5,	// (0x00052fec) cell_calc_pane

0x1ef7,	// (0x0004ee1e) bg_calc_paper_pane_g1

0x1f0f,	// (0x0004ee36) bg_calc_paper_pane_g2

0x1f03,	// (0x0004ee2a) bg_calc_paper_pane_g3

0x1f27,	// (0x0004ee4e) bg_calc_paper_pane_g4

0x1f1b,	// (0x0004ee42) bg_calc_paper_pane_g5

0x60f2,	// (0x00053019) bg_calc_paper_pane_g6

0x6103,	// (0x0005302a) bg_calc_paper_pane_g7

0x6114,	// (0x0005303b) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0005c08d) bg_calc_paper_pane_g

0x6125,	// (0x0005304c) calc_bg_paper_pane_g9

0x6136,	// (0x0005305d) list_calc_item_pane_ParamLimits

0x6136,	// (0x0005305d) list_calc_item_pane

0x1f33,	// (0x0004ee5a) list_calc_item_pane_g1

0x6165,	// (0x0005308c) list_calc_item_pane_t1_ParamLimits

0x6165,	// (0x0005308c) list_calc_item_pane_t1

0x6177,	// (0x0005309e) list_calc_item_pane_t2_ParamLimits

0x6177,	// (0x0005309e) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0005c09e) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0005c09e) list_calc_item_pane_t

0x1f40,	// (0x0004ee67) cell_calc_pane_g1

0x1f4a,	// (0x0004ee71) grid_highlight_pane_cp02

0x61a7,	// (0x000530ce) bg_calc_display_pane_g1

0x61b0,	// (0x000530d7) bg_calc_display_pane_g2

0x412a,	// (0x00051051) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0005c0a8) bg_calc_display_pane_g

0x61ba,	// (0x000530e1) cell_qdial_pane_ParamLimits

0x61ba,	// (0x000530e1) cell_qdial_pane

0x61ce,	// (0x000530f5) cell_qdial_pane_g1_ParamLimits

0x61ce,	// (0x000530f5) cell_qdial_pane_g1

0x61db,	// (0x00053102) cell_qdial_pane_g2_ParamLimits

0x61db,	// (0x00053102) cell_qdial_pane_g2

0x1f6c,	// (0x0004ee93) cell_qdial_pane_g3_ParamLimits

0x1f6c,	// (0x0004ee93) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0005c0af) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0005c0af) cell_qdial_pane_g

0x61f9,	// (0x00053120) cell_qdial_pane_t1_ParamLimits

0x61f9,	// (0x00053120) cell_qdial_pane_t1

0x6211,	// (0x00053138) cell_qdial_pane_t2_ParamLimits

0x6211,	// (0x00053138) cell_qdial_pane_t2

0x6224,	// (0x0005314b) cell_qdial_pane_t3_ParamLimits

0x6224,	// (0x0005314b) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0005c0b8) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0005c0b8) cell_qdial_pane_t

0x1bbd,	// (0x0004eae4) grid_highlight_pane_cp04

0x1f78,	// (0x0004ee9f) thumbnail_qdial_pane_ParamLimits

0x1f78,	// (0x0004ee9f) thumbnail_qdial_pane

0x1fd4,	// (0x0004eefb) list_help_pane

0x1fdd,	// (0x0004ef04) scroll_pane_cp02

0x6237,	// (0x0005315e) help_list_pane_t1_ParamLimits

0x6237,	// (0x0005315e) help_list_pane_t1

0x626a,	// (0x00053191) bg_notes_pane_g2

0x6272,	// (0x00053199) bg_notes_pane_g3

0x627a,	// (0x000531a1) notes_bg_pane_g1

0x6282,	// (0x000531a9) notes_bg_pane_g4

0x628a,	// (0x000531b1) notes_bg_pane_g5

0x6292,	// (0x000531b9) notes_bg_pane_g6

0x629a,	// (0x000531c1) notes_bg_pane_g7

0x62a2,	// (0x000531c9) notes_bg_pane_g8

0x62aa,	// (0x000531d1) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0005c0d6) notes_bg_pane_g

0x62b2,	// (0x000531d9) list_notes_text_pane_ParamLimits

0x62b2,	// (0x000531d9) list_notes_text_pane

0x1fe6,	// (0x0004ef0d) list_notes_text_pane_g1

0x62da,	// (0x00053201) list_notes_text_pane_t1

0x1eeb,	// (0x0004ee12) listscroll_cale_week_pane

0x6305,	// (0x0005322c) bg_cale_heading_pane

0x2000,	// (0x0004ef27) bg_cale_pane_cp01

0x6321,	// (0x00053248) cale_week_corner_pane

0x6337,	// (0x0005325e) cale_week_day_heading_pane

0x6353,	// (0x0005327a) cale_week_scroll_pane_g1

0x636c,	// (0x00053293) cale_week_scroll_pane_g2

0x637d,	// (0x000532a4) cale_week_scroll_pane_g3

0x638e,	// (0x000532b5) cale_week_scroll_pane_g4

0x639f,	// (0x000532c6) cale_week_scroll_pane_g5

0x63b0,	// (0x000532d7) cale_week_scroll_pane_g6

0x63c1,	// (0x000532e8) cale_week_scroll_pane_g7

0x63d4,	// (0x000532fb) cale_week_scroll_pane_g8

0x63e7,	// (0x0005330e) cale_week_scroll_pane_g9

0x63f8,	// (0x0005331f) cale_week_scroll_pane_g10

0x6409,	// (0x00053330) cale_week_scroll_pane_g11

0x641a,	// (0x00053341) cale_week_scroll_pane_g12

0x642b,	// (0x00053352) cale_week_scroll_pane_g13

0x6444,	// (0x0005336b) cale_week_scroll_pane_g14

0x645d,	// (0x00053384) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0005c0e5) cale_week_scroll_pane_g

0x6476,	// (0x0005339d) cale_week_time_pane

0x6489,	// (0x000533b0) grid_cale_week_pane

0x64a6,	// (0x000533cd) scroll_pane_cp08

0x64c0,	// (0x000533e7) cell_cale_week_pane_ParamLimits

0x64c0,	// (0x000533e7) cell_cale_week_pane

0x650c,	// (0x00053433) cale_week_day_heading_pane_t1

0x6525,	// (0x0005344c) cale_week_day_heading_pane_t2

0x653e,	// (0x00053465) cale_week_day_heading_pane_t3

0x6557,	// (0x0005347e) cale_week_day_heading_pane_t4

0x6570,	// (0x00053497) cale_week_day_heading_pane_t5

0x6589,	// (0x000534b0) cale_week_day_heading_pane_t6

0x65a2,	// (0x000534c9) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0005c104) cale_week_day_heading_pane_t

0x202b,	// (0x0004ef52) bg_cale_side_pane

0x65bb,	// (0x000534e2) cale_week_time_pane_t1

0x65d3,	// (0x000534fa) cale_week_time_pane_t2

0x65eb,	// (0x00053512) cale_week_time_pane_t3

0x6603,	// (0x0005352a) cale_week_time_pane_t4

0x661b,	// (0x00053542) cale_week_time_pane_t5

0x6633,	// (0x0005355a) cale_week_time_pane_t6

0x664b,	// (0x00053572) cale_week_time_pane_t7

0x666b,	// (0x00053592) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0005c113) cale_week_time_pane_t

0x668b,	// (0x000535b2) cell_cale_week_pane_g2

0x669c,	// (0x000535c3) cell_cale_week_pane_g3_ParamLimits

0x669c,	// (0x000535c3) cell_cale_week_pane_g3

0x2039,	// (0x0004ef60) grid_highlight_pane_cp07

0x2041,	// (0x0004ef68) listscroll_gms_pane

0x204b,	// (0x0004ef72) grid_gms_pane

0x2054,	// (0x0004ef7b) listscroll_gms_pane_g1

0x205c,	// (0x0004ef83) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0005c124) listscroll_gms_pane_g

0x66b4,	// (0x000535db) scroll_pane_cp010

0x66bf,	// (0x000535e6) cell_gms_pane_ParamLimits

0x66bf,	// (0x000535e6) cell_gms_pane

0x66d2,	// (0x000535f9) cell_gms_pane_g1

0x2064,	// (0x0004ef8b) cell_gms_pane_g2

0x206c,	// (0x0004ef93) cell_gms_pane_g3

0x2075,	// (0x0004ef9c) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0005c129) cell_gms_pane_g

0x207e,	// (0x0004efa5) grid_highlight_pane_cp09

0x89f7,	// (0x0005591e) phob_pre_status_pane_g1

0x89ff,	// (0x00055926) phob_pre_status_pane_g2

0x8a07,	// (0x0005592e) phob_pre_status_pane_g3

0x8a0f,	// (0x00055936) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0005c518) phob_pre_status_pane_g

0x8a1f,	// (0x00055946) phob_pre_status_pane_t1

0x8a2f,	// (0x00055956) phob_pre_status_pane_t2

0x8a3f,	// (0x00055966) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0005c523) phob_pre_status_pane_t

0x1bbd,	// (0x0004eae4) bg_list_pane_cp05

0x66e2,	// (0x00053609) grid_vorec_pane

0x66ee,	// (0x00053615) vorec_t1

0x66fc,	// (0x00053623) vorec_t2

0x670a,	// (0x00053631) vorec_t3

0x6718,	// (0x0005363f) vorec_t4

0x6726,	// (0x0005364d) vorec_t5

0x6734,	// (0x0005365b) vorec_t6

0x0006,

0xf20b,	// (0x0005c132) vorec_t

0x6750,	// (0x00053677) wait_bar_pane_cp01

0x6758,	// (0x0005367f) cell_vorec_pane_ParamLimits

0x6758,	// (0x0005367f) cell_vorec_pane

0x2086,	// (0x0004efad) cell_vorec_pane_g1

0x1bbd,	// (0x0004eae4) grid_highlight_pane_cp05

0x677b,	// (0x000536a2) cams_zoom_pane

0x6787,	// (0x000536ae) image_vga_pane

0x6796,	// (0x000536bd) main_camera_pane_g1

0x67a4,	// (0x000536cb) main_camera_pane_g2

0x67b0,	// (0x000536d7) main_camera_pane_g3

0x67bc,	// (0x000536e3) main_camera_pane_g4

0x67c8,	// (0x000536ef) main_camera_pane_g5

0x67d4,	// (0x000536fb) main_camera_pane_g6

0x67e0,	// (0x00053707) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0005c141) main_camera_pane_g

0x67ec,	// (0x00053713) main_camera_pane_t1

0x67fe,	// (0x00053725) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0005c152) main_camera_pane_t

0x681f,	// (0x00053746) cams_zoom_pane_cp_ParamLimits

0x681f,	// (0x00053746) cams_zoom_pane_cp

0x6843,	// (0x0005376a) image_cif_pane_ParamLimits

0x6843,	// (0x0005376a) image_cif_pane

0x6861,	// (0x00053788) image_subqcif_pane

0x6869,	// (0x00053790) main_video_pane_g1_ParamLimits

0x6869,	// (0x00053790) main_video_pane_g1

0x6889,	// (0x000537b0) main_video_pane_g2_ParamLimits

0x6889,	// (0x000537b0) main_video_pane_g2

0x68b9,	// (0x000537e0) main_video_pane_g3_ParamLimits

0x68b9,	// (0x000537e0) main_video_pane_g3

0x68e2,	// (0x00053809) main_video_pane_g4_ParamLimits

0x68e2,	// (0x00053809) main_video_pane_g4

0x690b,	// (0x00053832) main_video_pane_g5_ParamLimits

0x690b,	// (0x00053832) main_video_pane_g5

0x209c,	// (0x0004efc3) main_video_pane_g6_ParamLimits

0x209c,	// (0x0004efc3) main_video_pane_g6

0x0006,

0xf230,	// (0x0005c157) main_video_pane_g_ParamLimits

0xf230,	// (0x0005c157) main_video_pane_g

0x692d,	// (0x00053854) main_video_pane_t1_ParamLimits

0x692d,	// (0x00053854) main_video_pane_t1

0x20b6,	// (0x0004efdd) cams_zoom_pane_g1

0x20bf,	// (0x0004efe6) cams_zoom_pane_g2

0x20c8,	// (0x0004efef) cams_zoom_pane_g3

0x20d1,	// (0x0004eff8) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0005c166) cams_zoom_pane_g

0x6977,	// (0x0005389e) grid_cams_pane

0x6985,	// (0x000538ac) linegrid_cams_pane

0x6993,	// (0x000538ba) cell_cams_pane_ParamLimits

0x6993,	// (0x000538ba) cell_cams_pane

0x20da,	// (0x0004f001) cams_burst_image_pane

0x20e2,	// (0x0004f009) cell_cams_pane_g1

0x1bbd,	// (0x0004eae4) grid_highlight_pane_cp03

0x1f40,	// (0x0004ee67) mp_bg_pane_g1

0x1bbd,	// (0x0004eae4) bg_list_pane_cp03

0x3cf7,	// (0x00050c1e) bg_mp_pane

0x3cff,	// (0x00050c26) grid_mp_pane

0x3d07,	// (0x00050c2e) media_player_g1

0x3d0f,	// (0x00050c36) media_player_t1

0x3d1d,	// (0x00050c44) media_player_t2

0x3d2b,	// (0x00050c52) media_player_t3

0x3d39,	// (0x00050c60) media_player_t4

0x3d47,	// (0x00050c6e) media_player_t5

0x3d55,	// (0x00050c7c) media_player_t6

0x3d63,	// (0x00050c8a) media_player_t7

0x0006,

0xf5db,	// (0x0005c502) media_player_t

0x3d71,	// (0x00050c98) wait_bar_pane_cp02

0xf5c0,	// (0x0005c4e7) main_usb_pane_t

0x89ee,	// (0x00055915) cell_mp_pane

0x1f40,	// (0x0004ee67) cell_mp_pane_g1

0x1bbd,	// (0x0004eae4) grid_highlight_pane_cp06

0x20ea,	// (0x0004f011) grid_skin_colour_pane

0x20f2,	// (0x0004f019) list_highlight_pane_cp03

0x69fd,	// (0x00053924) skin_g1

0x20fa,	// (0x0004f021) skin_t1

0x2109,	// (0x0004f030) skin_t2

0x0001,

0xf274,	// (0x0005c19b) skin_t

0x6a07,	// (0x0005392e) cell_skin_colour_pane_ParamLimits

0x6a07,	// (0x0005392e) cell_skin_colour_pane

0x2117,	// (0x0004f03e) cell_skin_colour_pane_g1

0x6a8b,	// (0x000539b2) call_video_g1_ParamLimits

0x6a8b,	// (0x000539b2) call_video_g1

0x6a9b,	// (0x000539c2) call_video_g2_ParamLimits

0x6a9b,	// (0x000539c2) call_video_g2

0x0001,

0xf279,	// (0x0005c1a0) call_video_g_ParamLimits

0xf279,	// (0x0005c1a0) call_video_g

0x6af5,	// (0x00053a1c) call_video_uplink_pane_cp1_ParamLimits

0x6af5,	// (0x00053a1c) call_video_uplink_pane_cp1

0x2129,	// (0x0004f050) call_video_uplink_pane_cp2

0x6bc1,	// (0x00053ae8) video_down_crop_pane_ParamLimits

0x6bc1,	// (0x00053ae8) video_down_crop_pane

0x6cbf,	// (0x00053be6) video_down_pane_ParamLimits

0x6cbf,	// (0x00053be6) video_down_pane

0x2131,	// (0x0004f058) video_down_subqcif_pane_ParamLimits

0x2131,	// (0x0004f058) video_down_subqcif_pane

0x2149,	// (0x0004f070) video_down_subqcif_pane_cp_ParamLimits

0x2149,	// (0x0004f070) video_down_subqcif_pane_cp

0x216f,	// (0x0004f096) im_reading_pane_ParamLimits

0x216f,	// (0x0004f096) im_reading_pane

0x6de1,	// (0x00053d08) im_writing_pane_ParamLimits

0x6de1,	// (0x00053d08) im_writing_pane

0x6dff,	// (0x00053d26) im_reading_pane_t1

0x2189,	// (0x0004f0b0) list_im_pane

0x219a,	// (0x0004f0c1) scroll_pane_cp07

0x6e53,	// (0x00053d7a) im_writing_pane_t1_ParamLimits

0x6e53,	// (0x00053d7a) im_writing_pane_t1

0x21b3,	// (0x0004f0da) im_writing_pane_t2_ParamLimits

0x21b3,	// (0x0004f0da) im_writing_pane_t2

0x0001,

0xf283,	// (0x0005c1aa) im_writing_pane_t_ParamLimits

0xf283,	// (0x0005c1aa) im_writing_pane_t

0x1bbd,	// (0x0004eae4) input_focus_pane_cp04

0x1bbd,	// (0x0004eae4) input_focus_pane_cp05

0x6e68,	// (0x00053d8f) list_im_single_pane_ParamLimits

0x6e68,	// (0x00053d8f) list_im_single_pane

0x6e8c,	// (0x00053db3) list_single_im_pane_t1

0x89b2,	// (0x000558d9) blid_accuracy_pane

0x89ba,	// (0x000558e1) blid_compass_pane

0x89c4,	// (0x000558eb) main_location_t1

0x89d2,	// (0x000558f9) main_location_t2

0x89e0,	// (0x00055907) main_location_t3

0x0002,

0xf5ea,	// (0x0005c511) main_location_t

0x1bbd,	// (0x0004eae4) aid_levels_location

0x1f40,	// (0x0004ee67) blid_accuracy_pane_g1

0x1f40,	// (0x0004ee67) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0005c20c) blid_accuracy_pane_g

0x21fb,	// (0x0004f122) wml_content_pane

0x2239,	// (0x0004f160) wml_button_pane_ParamLimits

0x2239,	// (0x0004f160) wml_button_pane

0x6e9b,	// (0x00053dc2) wml_list_single_large_pane_ParamLimits

0x6e9b,	// (0x00053dc2) wml_list_single_large_pane

0x6ec5,	// (0x00053dec) wml_list_single_medium_pane_ParamLimits

0x6ec5,	// (0x00053dec) wml_list_single_medium_pane

0x6ef6,	// (0x00053e1d) wml_list_single_small_pane_ParamLimits

0x6ef6,	// (0x00053e1d) wml_list_single_small_pane

0x224d,	// (0x0004f174) wml_selection_box_pane_ParamLimits

0x224d,	// (0x0004f174) wml_selection_box_pane

0x2260,	// (0x0004f187) wml_list_single_pane_t1

0x226f,	// (0x0004f196) wml_list_single_medium_pane_t1

0x227e,	// (0x0004f1a5) wml_list_single_large_pane_t1

0x228d,	// (0x0004f1b4) input_focus_pane_cp02_ParamLimits

0x228d,	// (0x0004f1b4) input_focus_pane_cp02

0x22a0,	// (0x0004f1c7) wml_selection_box_pane_g1

0x22a9,	// (0x0004f1d0) wml_selection_box_pane_t1_ParamLimits

0x22a9,	// (0x0004f1d0) wml_selection_box_pane_t1

0x1e18,	// (0x0004ed3f) bg_wml_button_pane_ParamLimits

0x1e18,	// (0x0004ed3f) bg_wml_button_pane

0x22c1,	// (0x0004f1e8) wml_button_pane_g1

0x22c9,	// (0x0004f1f0) wml_button_pane_t1

0x22c1,	// (0x0004f1e8) wml_button_bg_pane_g1

0x22d9,	// (0x0004f200) wml_button_bg_pane_g2

0x22e1,	// (0x0004f208) wml_button_bg_pane_g3

0x22e9,	// (0x0004f210) wml_button_bg_pane_g4

0x22f1,	// (0x0004f218) wml_button_bg_pane_g5

0x22f9,	// (0x0004f220) wml_button_bg_pane_g6

0x2301,	// (0x0004f228) wml_button_bg_pane_g7

0x2309,	// (0x0004f230) wml_button_bg_pane_g8

0x2311,	// (0x0004f238) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0005c1af) wml_button_bg_pane_g

0x6f30,	// (0x00053e57) bg_list_pane_cp02

0x2319,	// (0x0004f240) mce_header_pane_ParamLimits

0x2319,	// (0x0004f240) mce_header_pane

0x232f,	// (0x0004f256) mce_icon_pane

0x232f,	// (0x0004f256) mce_image_pane

0x2338,	// (0x0004f25f) mce_text_pane_ParamLimits

0x2338,	// (0x0004f25f) mce_text_pane

0x6f3a,	// (0x00053e61) scroll_pane_cp03

0x2231,	// (0x0004f158) scroll_pane_cp04

0x234b,	// (0x0004f272) scroll_pane_cp05_ParamLimits

0x234b,	// (0x0004f272) scroll_pane_cp05

0x6f44,	// (0x00053e6b) mce_header_field_pane_ParamLimits

0x6f44,	// (0x00053e6b) mce_header_field_pane

0x6f64,	// (0x00053e8b) mce_header_field_pane_2_ParamLimits

0x6f64,	// (0x00053e8b) mce_header_field_pane_2

0x6f7a,	// (0x00053ea1) mce_header_field_pane_3

0x6f82,	// (0x00053ea9) list_single_mce_message_pane_ParamLimits

0x6f82,	// (0x00053ea9) list_single_mce_message_pane

0x6fa7,	// (0x00053ece) list_single_mce_smart_pane_ParamLimits

0x6fa7,	// (0x00053ece) list_single_mce_smart_pane

0x2357,	// (0x0004f27e) input_focus_pane_cp03

0x2360,	// (0x0004f287) list_header_data_pane

0x6fd7,	// (0x00053efe) mce_header_field_pane_t1

0x6fe5,	// (0x00053f0c) list_single_mce_header_pane_ParamLimits

0x6fe5,	// (0x00053f0c) list_single_mce_header_pane

0x2368,	// (0x0004f28f) list_single_mce_header_pane_t1

0x2377,	// (0x0004f29e) list_single_mce_message_pane_g1

0x237f,	// (0x0004f2a6) list_single_mce_message_pane_t1

0x7029,	// (0x00053f50) bg_cale_heading_pane_cp01_ParamLimits

0x7029,	// (0x00053f50) bg_cale_heading_pane_cp01

0x238d,	// (0x0004f2b4) bg_cale_pane_cp02_ParamLimits

0x238d,	// (0x0004f2b4) bg_cale_pane_cp02

0x705c,	// (0x00053f83) cale_month_corner_pane

0x7072,	// (0x00053f99) cale_month_day_heading_pane_ParamLimits

0x7072,	// (0x00053f99) cale_month_day_heading_pane

0x70b5,	// (0x00053fdc) cale_month_pane_g1_ParamLimits

0x70b5,	// (0x00053fdc) cale_month_pane_g1

0x70e1,	// (0x00054008) cale_month_pane_g2_ParamLimits

0x70e1,	// (0x00054008) cale_month_pane_g2

0x7104,	// (0x0005402b) cale_month_pane_g3_ParamLimits

0x7104,	// (0x0005402b) cale_month_pane_g3

0x7140,	// (0x00054067) cale_month_pane_g4_ParamLimits

0x7140,	// (0x00054067) cale_month_pane_g4

0x717c,	// (0x000540a3) cale_month_pane_g5_ParamLimits

0x717c,	// (0x000540a3) cale_month_pane_g5

0x71b8,	// (0x000540df) cale_month_pane_g6_ParamLimits

0x71b8,	// (0x000540df) cale_month_pane_g6

0x71f4,	// (0x0005411b) cale_month_pane_g7_ParamLimits

0x71f4,	// (0x0005411b) cale_month_pane_g7

0x7240,	// (0x00054167) cale_month_pane_g8_ParamLimits

0x7240,	// (0x00054167) cale_month_pane_g8

0x728c,	// (0x000541b3) cale_month_pane_g9_ParamLimits

0x728c,	// (0x000541b3) cale_month_pane_g9

0x72d2,	// (0x000541f9) cale_month_pane_g10_ParamLimits

0x72d2,	// (0x000541f9) cale_month_pane_g10

0x730c,	// (0x00054233) cale_month_pane_g11_ParamLimits

0x730c,	// (0x00054233) cale_month_pane_g11

0x734a,	// (0x00054271) cale_month_pane_g12_ParamLimits

0x734a,	// (0x00054271) cale_month_pane_g12

0x7388,	// (0x000542af) cale_month_pane_g13_ParamLimits

0x7388,	// (0x000542af) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0005c1c2) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0005c1c2) cale_month_pane_g

0x73c6,	// (0x000542ed) cale_month_week_pane

0x73d9,	// (0x00054300) grid_cale_month_pane_ParamLimits

0x73d9,	// (0x00054300) grid_cale_month_pane

0x7417,	// (0x0005433e) cale_month_day_heading_pane_t1

0x7475,	// (0x0005439c) cale_month_day_heading_pane_t2

0x74da,	// (0x00054401) cale_month_day_heading_pane_t3

0x753f,	// (0x00054466) cale_month_day_heading_pane_t4

0x75a4,	// (0x000544cb) cale_month_day_heading_pane_t5

0x7609,	// (0x00054530) cale_month_day_heading_pane_t6

0x766e,	// (0x00054595) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0005c1dd) cale_month_day_heading_pane_t

0x202b,	// (0x0004ef52) bg_cale_side_pane_cp01

0x76e3,	// (0x0005460a) cale_month_week_pane_t1

0x76fa,	// (0x00054621) cale_month_week_pane_t2

0x7711,	// (0x00054638) cale_month_week_pane_t3

0x7728,	// (0x0005464f) cale_month_week_pane_t4

0x773f,	// (0x00054666) cale_month_week_pane_t5

0x775a,	// (0x00054681) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0005c1ec) cale_month_week_pane_t

0x7779,	// (0x000546a0) cell_cale_month_pane_ParamLimits

0x7779,	// (0x000546a0) cell_cale_month_pane

0x783f,	// (0x00054766) cell_cale_month_pane_g1

0x784b,	// (0x00054772) cell_cale_month_pane_t1_ParamLimits

0x784b,	// (0x00054772) cell_cale_month_pane_t1

0x2039,	// (0x0004ef60) grid_highlight_pane_cp08

0x1f40,	// (0x0004ee67) main_smil_g1

0x7867,	// (0x0005478e) smil_status_pane

0x23c2,	// (0x0004f2e9) smil_text_pane

0x3c17,	// (0x00050b3e) bg_popup_call3_rect_pane_g8

0x3c1f,	// (0x00050b46) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0005c4a5) bg_popup_call3_rect_pane_g

0x3e6d,	// (0x00050d94) smil_status_volume_pane_g1

0x23cc,	// (0x0004f2f3) smil_status_pane_t1

0x8de5,	// (0x00055d0c) volume_smil_pane

0x23e3,	// (0x0004f30a) list_smil_text_pane

0x787a,	// (0x000547a1) scroll_pane_cp011

0x7885,	// (0x000547ac) smil_text_list_pane_t1_ParamLimits

0x7885,	// (0x000547ac) smil_text_list_pane_t1

0x78fd,	// (0x00054824) aid_volume_smil_ParamLimits

0x78fd,	// (0x00054824) aid_volume_smil

0x1f40,	// (0x0004ee67) smil_volume_pane_g1

0x1f40,	// (0x0004ee67) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0005c20c) smil_volume_pane_g

0x1eeb,	// (0x0004ee12) listscroll_cale_day_pane

0x23ed,	// (0x0004f314) bg_cale_pane

0x2405,	// (0x0004f32c) list_cale_pane

0x2416,	// (0x0004f33d) scroll_pane_cp09

0x2427,	// (0x0004f34e) cale_bg_pane_g1

0x242f,	// (0x0004f356) cale_bg_pane_g2

0x2437,	// (0x0004f35e) cale_bg_pane_g3

0x243f,	// (0x0004f366) cale_bg_pane_g4

0x2447,	// (0x0004f36e) cale_bg_pane_g5

0x244f,	// (0x0004f376) cale_bg_pane_g6

0x2457,	// (0x0004f37e) cale_bg_pane_g7

0x245f,	// (0x0004f386) cale_bg_pane_g8

0x2467,	// (0x0004f38e) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0005c211) cale_bg_pane_g

0x791f,	// (0x00054846) list_cale_time_pane_ParamLimits

0x791f,	// (0x00054846) list_cale_time_pane

0x246f,	// (0x0004f396) list_cale_time_pane_g1_ParamLimits

0x246f,	// (0x0004f396) list_cale_time_pane_g1

0x247b,	// (0x0004f3a2) list_cale_time_pane_g2_ParamLimits

0x247b,	// (0x0004f3a2) list_cale_time_pane_g2

0x793b,	// (0x00054862) list_cale_time_pane_g3_ParamLimits

0x793b,	// (0x00054862) list_cale_time_pane_g3

0x7949,	// (0x00054870) list_cale_time_pane_g4_ParamLimits

0x7949,	// (0x00054870) list_cale_time_pane_g4

0x7957,	// (0x0005487e) list_cale_time_pane_g5_ParamLimits

0x7957,	// (0x0005487e) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0005c224) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0005c224) list_cale_time_pane_g

0x2495,	// (0x0004f3bc) list_cale_time_pane_t1_ParamLimits

0x2495,	// (0x0004f3bc) list_cale_time_pane_t1

0x24bd,	// (0x0004f3e4) list_cale_time_pane_t2_ParamLimits

0x24bd,	// (0x0004f3e4) list_cale_time_pane_t2

0x7c88,	// (0x00054baf) aid_blid_cardinal_pane

0x7cca,	// (0x00054bf1) compass_pane_t4

0x24e5,	// (0x0004f40c) list_cale_time_pane_t4_ParamLimits

0x24e5,	// (0x0004f40c) list_cale_time_pane_t4

0x7cd8,	// (0x00054bff) compass_pane_t5

0x7ce8,	// (0x00054c0f) compass_pane_t6

0x7cf6,	// (0x00054c1d) compass_pane_t7

0x2910,	// (0x0004f837) navi_pane_cc_t1

0x2a73,	// (0x0004f99a) aid_phob_thumbnail_center_pane

0x84b8,	// (0x000553df) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0005c231) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0005c231) list_cale_time_pane_t

0x1814,	// (0x0004e73b) bg_popup_window_pane_cp02_ParamLimits

0x1814,	// (0x0004e73b) bg_popup_window_pane_cp02

0x250d,	// (0x0004f434) heading_pane_cp01_ParamLimits

0x250d,	// (0x0004f434) heading_pane_cp01

0x2519,	// (0x0004f440) loc_req_pane_ParamLimits

0x2519,	// (0x0004f440) loc_req_pane

0x2529,	// (0x0004f450) loc_type_pane_ParamLimits

0x2529,	// (0x0004f450) loc_type_pane

0x253b,	// (0x0004f462) loc_type_pane_t1_ParamLimits

0x253b,	// (0x0004f462) loc_type_pane_t1

0x254d,	// (0x0004f474) loc_type_pane_t2_ParamLimits

0x254d,	// (0x0004f474) loc_type_pane_t2

0x255f,	// (0x0004f486) loc_type_pane_t3_ParamLimits

0x255f,	// (0x0004f486) loc_type_pane_t3

0x0002,

0xf311,	// (0x0005c238) loc_type_pane_t_ParamLimits

0xf311,	// (0x0005c238) loc_type_pane_t

0x2571,	// (0x0004f498) list_loc_req_pane

0x257b,	// (0x0004f4a2) scroll_pane_cp012

0x7965,	// (0x0005488c) list_single_loc_request_popup_menu_pane_ParamLimits

0x7965,	// (0x0005488c) list_single_loc_request_popup_menu_pane

0x2586,	// (0x0004f4ad) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2586,	// (0x0004f4ad) list_single_loc_request_popup_menu_pane_g1

0x2592,	// (0x0004f4b9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2592,	// (0x0004f4b9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0005c23f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0005c23f) list_single_loc_request_popup_menu_pane_g

0x259e,	// (0x0004f4c5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x259e,	// (0x0004f4c5) list_single_loc_request_popup_menu_pane_t1

0x7977,	// (0x0005489e) bg_popup_window_pane_cp03_ParamLimits

0x7977,	// (0x0005489e) bg_popup_window_pane_cp03

0x7985,	// (0x000548ac) heading_loc_req_pane_ParamLimits

0x7985,	// (0x000548ac) heading_loc_req_pane

0x7991,	// (0x000548b8) popup_dyc_status_message_window_g1_ParamLimits

0x7991,	// (0x000548b8) popup_dyc_status_message_window_g1

0x799d,	// (0x000548c4) popup_dyc_status_message_window_t1_ParamLimits

0x799d,	// (0x000548c4) popup_dyc_status_message_window_t1

0x79af,	// (0x000548d6) popup_dyc_status_message_window_t2_ParamLimits

0x79af,	// (0x000548d6) popup_dyc_status_message_window_t2

0x79c1,	// (0x000548e8) popup_dyc_status_message_window_t3_ParamLimits

0x79c1,	// (0x000548e8) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0005c244) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0005c244) popup_dyc_status_message_window_t

0x1bbd,	// (0x0004eae4) bg_heading_pane_cp01

0x25b4,	// (0x0004f4db) heading_loc_req_pane_g1

0x25bc,	// (0x0004f4e3) heading_loc_req_pane_g2

0x25c4,	// (0x0004f4eb) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0005c24b) heading_loc_req_pane_g

0x25cc,	// (0x0004f4f3) heading_loc_req_pane_t1

0x25db,	// (0x0004f502) bg_popup_sub_pane_cp01_ParamLimits

0x25db,	// (0x0004f502) bg_popup_sub_pane_cp01

0x25e9,	// (0x0004f510) popup_cale_events_window_g1_ParamLimits

0x25e9,	// (0x0004f510) popup_cale_events_window_g1

0x2609,	// (0x0004f530) popup_cale_events_window_g2_ParamLimits

0x2609,	// (0x0004f530) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0005c27f) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0005c27f) popup_cale_events_window_g

0x2629,	// (0x0004f550) popup_cale_events_window_t1_ParamLimits

0x2629,	// (0x0004f550) popup_cale_events_window_t1

0x263b,	// (0x0004f562) popup_cale_events_window_t2_ParamLimits

0x263b,	// (0x0004f562) popup_cale_events_window_t2

0x2679,	// (0x0004f5a0) popup_cale_events_window_t3_ParamLimits

0x2679,	// (0x0004f5a0) popup_cale_events_window_t3

0x26b3,	// (0x0004f5da) popup_cale_events_window_t4_ParamLimits

0x26b3,	// (0x0004f5da) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0005c284) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0005c284) popup_cale_events_window_t

0x7a45,	// (0x0005496c) call_type_pane

0x2a02,	// (0x0004f929) popup_call_status_window_g1

0x7a51,	// (0x00054978) popup_call_status_window_g2

0x7a5d,	// (0x00054984) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0005c28d) popup_call_status_window_g

0x26e9,	// (0x0004f610) call_type_pane_g1

0x26f2,	// (0x0004f619) call_type_pane_g2

0x0001,

0xf36d,	// (0x0005c294) call_type_pane_g

0x1bbd,	// (0x0004eae4) bg_popup_sub_pane_cp02

0x26fb,	// (0x0004f622) listscroll_popup_wml_pane

0x2703,	// (0x0004f62a) list_wml_pane

0x270d,	// (0x0004f634) scroll_pane_cp013

0x2718,	// (0x0004f63f) list_single_graphic_popup_wml_pane_ParamLimits

0x2718,	// (0x0004f63f) list_single_graphic_popup_wml_pane

0x1f40,	// (0x0004ee67) list_single_graphic_popup_wml_pane_g1

0x272c,	// (0x0004f653) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0005c299) list_single_graphic_popup_wml_pane_g

0x2734,	// (0x0004f65b) list_single_graphic_popup_wml_pane_t1

0x2742,	// (0x0004f669) aid_call_pane

0x1e10,	// (0x0004ed37) popup_clock_analogue_window_g1

0x1e10,	// (0x0004ed37) popup_clock_analogue_window_g2

0x7a69,	// (0x00054990) popup_clock_analogue_window_g3

0x7a69,	// (0x00054990) popup_clock_analogue_window_g4

0x1f40,	// (0x0004ee67) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0005c29e) popup_clock_analogue_window_g

0x7a71,	// (0x00054998) popup_clock_analogue_window_t1

0x7a7f,	// (0x000549a6) clock_digital_number_pane_ParamLimits

0x7a7f,	// (0x000549a6) clock_digital_number_pane

0x7a8b,	// (0x000549b2) clock_digital_number_pane_cp02_ParamLimits

0x7a8b,	// (0x000549b2) clock_digital_number_pane_cp02

0x7a97,	// (0x000549be) clock_digital_number_pane_cp03_ParamLimits

0x7a97,	// (0x000549be) clock_digital_number_pane_cp03

0x7aa3,	// (0x000549ca) clock_digital_number_pane_cp04_ParamLimits

0x7aa3,	// (0x000549ca) clock_digital_number_pane_cp04

0x7ab3,	// (0x000549da) clock_digital_separator_pane_ParamLimits

0x7ab3,	// (0x000549da) clock_digital_separator_pane

0x7abf,	// (0x000549e6) popup_clock_digital_window_t1

0x1f40,	// (0x0004ee67) clock_digital_number_pane_g1

0x1f40,	// (0x0004ee67) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0005c20c) clock_digital_number_pane_g

0x1f40,	// (0x0004ee67) clock_digital_separator_pane_g1

0x1f40,	// (0x0004ee67) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0005c20c) clock_digital_separator_pane_g

0x1bbd,	// (0x0004eae4) bg_popup_window_pane_cp04

0x2752,	// (0x0004f679) heading_pane_cp03

0x275a,	// (0x0004f681) listscroll_popup_gms_pane

0x2762,	// (0x0004f689) grid_large_graphic_popup_pane

0x276c,	// (0x0004f693) listscroll_popup_gms_pane_g1

0x2774,	// (0x0004f69b) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0005c2a9) listscroll_popup_gms_pane_g

0x2231,	// (0x0004f158) scroll_pane_cp014

0x7adc,	// (0x00054a03) cell_large_graphic_popup_pane_ParamLimits

0x7adc,	// (0x00054a03) cell_large_graphic_popup_pane

0x7af4,	// (0x00054a1b) cell_large_graphic_popup_pane_g1_ParamLimits

0x7af4,	// (0x00054a1b) cell_large_graphic_popup_pane_g1

0x277c,	// (0x0004f6a3) cell_large_graphic_popup_pane_g2_ParamLimits

0x277c,	// (0x0004f6a3) cell_large_graphic_popup_pane_g2

0x2788,	// (0x0004f6af) cell_large_graphic_popup_pane_g3_ParamLimits

0x2788,	// (0x0004f6af) cell_large_graphic_popup_pane_g3

0x2795,	// (0x0004f6bc) cell_large_graphic_popup_pane_g4_ParamLimits

0x2795,	// (0x0004f6bc) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0005c2ae) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0005c2ae) cell_large_graphic_popup_pane_g

0x27a5,	// (0x0004f6cc) grid_highlight_pane_cp010

0x1f40,	// (0x0004ee67) bg_popup_call_pane_g1

0x27af,	// (0x0004f6d6) list_single_graphic_popup_conf_pane_ParamLimits

0x27af,	// (0x0004f6d6) list_single_graphic_popup_conf_pane

0x27c2,	// (0x0004f6e9) list_highlight_pane_cp01

0x27cb,	// (0x0004f6f2) list_single_graphic_popup_conf_pane_g1

0x27d3,	// (0x0004f6fa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0005c2b7) list_single_graphic_popup_conf_pane_g

0x27db,	// (0x0004f702) list_single_graphic_popup_conf_pane_t1

0x27e9,	// (0x0004f710) linegrid_cams_pane_g1

0x7b00,	// (0x00054a27) linegrid_cams_pane_g2

0x206c,	// (0x0004ef93) linegrid_cams_pane_g3

0x27f2,	// (0x0004f719) linegrid_cams_pane_g4

0x7b09,	// (0x00054a30) linegrid_cams_pane_g5

0x7b12,	// (0x00054a39) linegrid_cams_pane_g6

0x2075,	// (0x0004ef9c) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0005c2bc) linegrid_cams_pane_g

0x27fb,	// (0x0004f722) popup_clock_analogue_window

0x27fb,	// (0x0004f722) popup_clock_digital_window

0x1bbd,	// (0x0004eae4) popup_phob_thumbnail_window

0x1f40,	// (0x0004ee67) call_video_uplink_pane_g1

0x2804,	// (0x0004f72b) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0005c2cb) call_video_uplink_pane_g

0x280c,	// (0x0004f733) video_uplink_pane

0x2814,	// (0x0004f73b) mce_image_pane_g1

0x7b1b,	// (0x00054a42) mce_image_pane_g2

0x7b25,	// (0x00054a4c) mce_image_pane_g3

0x7b2d,	// (0x00054a54) mce_image_pane_g4

0x7b35,	// (0x00054a5c) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0005c2d0) mce_image_pane_g

0x281e,	// (0x0004f745) control_top_pane_stacon_cp01_ParamLimits

0x281e,	// (0x0004f745) control_top_pane_stacon_cp01

0x2832,	// (0x0004f759) uni_indicator_pane_stacon_cp01_ParamLimits

0x2832,	// (0x0004f759) uni_indicator_pane_stacon_cp01

0x2843,	// (0x0004f76a) bg_popup_sub_pane_cp03

0x7b3d,	// (0x00054a64) chi_dic_find_pane

0x7b45,	// (0x00054a6c) listscroll_chi_dic_pane

0x7b4e,	// (0x00054a75) main_pane_chidic_g1

0x284d,	// (0x0004f774) chi_dic_find_pane_t1

0x285b,	// (0x0004f782) find_chidic_pane

0x2864,	// (0x0004f78b) chi_dic_list_pane_ParamLimits

0x2864,	// (0x0004f78b) chi_dic_list_pane

0x2875,	// (0x0004f79c) scroll_pane_cp020

0x287d,	// (0x0004f7a4) find_chidic_pane_t1

0x1bbd,	// (0x0004eae4) input_focus_pane_cp06

0x7b61,	// (0x00054a88) list_chi_dic_pane_ParamLimits

0x7b61,	// (0x00054a88) list_chi_dic_pane

0x7b7b,	// (0x00054aa2) list_chi_dic_pane_t1_ParamLimits

0x7b7b,	// (0x00054aa2) list_chi_dic_pane_t1

0x1bbd,	// (0x0004eae4) list_highlight_pane_cp020

0x288c,	// (0x0004f7b3) bg_cale_heading_pane_g1

0x7b8e,	// (0x00054ab5) bg_cale_heading_pane_g2

0x7b96,	// (0x00054abd) bg_cale_heading_pane_g3

0x7b9e,	// (0x00054ac5) bg_cale_heading_pane_g4

0x7ba8,	// (0x00054acf) bg_cale_heading_pane_g5

0x7bb2,	// (0x00054ad9) bg_cale_heading_pane_g6

0x7bba,	// (0x00054ae1) bg_cale_heading_pane_g7

0x7bc2,	// (0x00054ae9) bg_cale_heading_pane_g8

0x7bcc,	// (0x00054af3) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0005c2db) bg_cale_heading_pane_g

0x288c,	// (0x0004f7b3) bg_cale_side_pane_g1

0x7bd6,	// (0x00054afd) bg_cale_side_pane_g2

0x7be0,	// (0x00054b07) bg_cale_side_pane_g3

0x7bea,	// (0x00054b11) bg_cale_side_pane_g4

0x7bf4,	// (0x00054b1b) bg_cale_side_pane_g5

0x7bfe,	// (0x00054b25) bg_cale_side_pane_g6

0x7c08,	// (0x00054b2f) bg_cale_side_pane_g7

0x7c12,	// (0x00054b39) bg_cale_side_pane_g8

0x7c1a,	// (0x00054b41) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0005c2ee) bg_cale_side_pane_g

0x7c22,	// (0x00054b49) popup_call_status_window_ParamLimits

0x7c22,	// (0x00054b49) popup_call_status_window

0x2894,	// (0x0004f7bb) stacon_top_pane

0x289c,	// (0x0004f7c3) status_pane_ParamLimits

0x289c,	// (0x0004f7c3) status_pane

0x28b1,	// (0x0004f7d8) status_small_pane

0x28b9,	// (0x0004f7e0) control_pane

0x1bbd,	// (0x0004eae4) stacon_bottom_pane

0x28c1,	// (0x0004f7e8) list_single_mce_smart_pane_t1_ParamLimits

0x28c1,	// (0x0004f7e8) list_single_mce_smart_pane_t1

0x28d4,	// (0x0004f7fb) list_single_mce_smart_pane_t2_ParamLimits

0x28d4,	// (0x0004f7fb) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0005c301) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0005c301) list_single_mce_smart_pane_t

0x7c2e,	// (0x00054b55) compass_pane

0x7c3a,	// (0x00054b61) main_location2_pane_t1

0x7c4e,	// (0x00054b75) main_location2_pane_t2

0x7c62,	// (0x00054b89) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0005c306) main_location2_pane_t

0x28f3,	// (0x0004f81a) compass_pane_g1_ParamLimits

0x28f3,	// (0x0004f81a) compass_pane_g1

0x7cac,	// (0x00054bd3) compass_pane_t1

0x7cbb,	// (0x00054be2) compass_pane_t2

0x0005,

0xf3e8,	// (0x0005c30f) compass_pane_t

0x7d06,	// (0x00054c2d) text_secondary_cp61

0x2907,	// (0x0004f82e) navi_pane_cams_g5

0x292a,	// (0x0004f851) navi_pane_im_t1

0x2938,	// (0x0004f85f) navi_pane_mp_g1_ParamLimits

0x2938,	// (0x0004f85f) navi_pane_mp_g1

0x294c,	// (0x0004f873) navi_pane_mp_g2_ParamLimits

0x294c,	// (0x0004f873) navi_pane_mp_g2

0x2958,	// (0x0004f87f) navi_pane_mp_g3_ParamLimits

0x2958,	// (0x0004f87f) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0005c323) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0005c323) navi_pane_mp_g

0x2964,	// (0x0004f88b) navi_pane_mp_t1

0x2972,	// (0x0004f899) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0005c32a) navi_pane_mp_t

0x29ae,	// (0x0004f8d5) navi_pane_vt_g1

0x2964,	// (0x0004f88b) navi_pane_vt_t1

0x29b6,	// (0x0004f8dd) navi_slider_pane

0x29be,	// (0x0004f8e5) zooming_pane

0x29c6,	// (0x0004f8ed) navi_slider_pane_g1

0x7e31,	// (0x00054d58) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0005c331) navi_slider_pane_g

0x29ea,	// (0x0004f911) aid_levels_zoom

0x29f2,	// (0x0004f919) zooming_pane_g1

0x29fa,	// (0x0004f921) zooming_pane_g2

0x29fa,	// (0x0004f921) zooming_pane_g3

0x0002,

0xf419,	// (0x0005c340) zooming_pane_g

0x2a10,	// (0x0004f937) level_10_zoom

0x2a19,	// (0x0004f940) level_11_zoom

0x2a22,	// (0x0004f949) level_1_zoom

0x2a2b,	// (0x0004f952) level_2_zoom

0x2a34,	// (0x0004f95b) level_3_zoom

0x2a3d,	// (0x0004f964) level_4_zoom

0x2a46,	// (0x0004f96d) level_5_zoom

0x2a4f,	// (0x0004f976) level_6_zoom

0x2a58,	// (0x0004f97f) level_7_zoom

0x2a61,	// (0x0004f988) level_8_zoom

0x2a6a,	// (0x0004f991) level_9_zoom

0x2a7b,	// (0x0004f9a2) popup_phob_thumbnail_window_g1

0x2a83,	// (0x0004f9aa) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0005c347) popup_phob_thumbnail_window_g

0x3d79,	// (0x00050ca0) level_1_location

0x3d81,	// (0x00050ca8) level_2_location

0x3d89,	// (0x00050cb0) level_3_location

0x3d91,	// (0x00050cb8) level_4_location

0x29be,	// (0x0004f8e5) level_5_location

0x7e43,	// (0x00054d6a) mce_icon_pane_g1

0x7e4b,	// (0x00054d72) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0005c34c) mce_icon_pane_g

0x7e53,	// (0x00054d7a) main_mup_pane_g1_ParamLimits

0x7e53,	// (0x00054d7a) main_mup_pane_g1

0x7e6b,	// (0x00054d92) main_mup_pane_g2_ParamLimits

0x7e6b,	// (0x00054d92) main_mup_pane_g2

0x7e87,	// (0x00054dae) main_mup_pane_g3_ParamLimits

0x7e87,	// (0x00054dae) main_mup_pane_g3

0x7ea3,	// (0x00054dca) main_mup_pane_g4_ParamLimits

0x7ea3,	// (0x00054dca) main_mup_pane_g4

0x7ebf,	// (0x00054de6) main_mup_pane_g5_ParamLimits

0x7ebf,	// (0x00054de6) main_mup_pane_g5

0x7ee0,	// (0x00054e07) main_mup_pane_g6_ParamLimits

0x7ee0,	// (0x00054e07) main_mup_pane_g6

0x7efc,	// (0x00054e23) main_mup_pane_g7_ParamLimits

0x7efc,	// (0x00054e23) main_mup_pane_g7

0x7f18,	// (0x00054e3f) main_mup_pane_g8_ParamLimits

0x7f18,	// (0x00054e3f) main_mup_pane_g8

0x7f38,	// (0x00054e5f) main_mup_pane_g9_ParamLimits

0x7f38,	// (0x00054e5f) main_mup_pane_g9

0x7f57,	// (0x00054e7e) main_mup_pane_g10_ParamLimits

0x7f57,	// (0x00054e7e) main_mup_pane_g10

0x7f76,	// (0x00054e9d) main_mup_pane_g11_ParamLimits

0x7f76,	// (0x00054e9d) main_mup_pane_g11

0x7f8e,	// (0x00054eb5) main_mup_pane_g12_ParamLimits

0x7f8e,	// (0x00054eb5) main_mup_pane_g12

0x7f9c,	// (0x00054ec3) main_mup_pane_g13_ParamLimits

0x7f9c,	// (0x00054ec3) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0005c351) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0005c351) main_mup_pane_g

0x7fb2,	// (0x00054ed9) main_mup_pane_t1_ParamLimits

0x7fb2,	// (0x00054ed9) main_mup_pane_t1

0x7fcf,	// (0x00054ef6) main_mup_pane_t2_ParamLimits

0x7fcf,	// (0x00054ef6) main_mup_pane_t2

0x7fe9,	// (0x00054f10) main_mup_pane_t3_ParamLimits

0x7fe9,	// (0x00054f10) main_mup_pane_t3

0x8003,	// (0x00054f2a) main_mup_pane_t4_ParamLimits

0x8003,	// (0x00054f2a) main_mup_pane_t4

0x8015,	// (0x00054f3c) main_mup_pane_t5_ParamLimits

0x8015,	// (0x00054f3c) main_mup_pane_t5

0x8027,	// (0x00054f4e) main_mup_pane_t6_ParamLimits

0x8027,	// (0x00054f4e) main_mup_pane_t6

0x0005,

0xf445,	// (0x0005c36c) main_mup_pane_t_ParamLimits

0xf445,	// (0x0005c36c) main_mup_pane_t

0x803d,	// (0x00054f64) mup_progress_pane_ParamLimits

0x803d,	// (0x00054f64) mup_progress_pane

0x8049,	// (0x00054f70) mup_visualizer_pane_ParamLimits

0x8049,	// (0x00054f70) mup_visualizer_pane

0x8083,	// (0x00054faa) mup_volume_pane_ParamLimits

0x8083,	// (0x00054faa) mup_volume_pane

0x2a02,	// (0x0004f929) mup_visualizer_pane_g1_ParamLimits

0x2a02,	// (0x0004f929) mup_visualizer_pane_g1

0x2a02,	// (0x0004f929) mup_visualizer_pane_g2_ParamLimits

0x2a02,	// (0x0004f929) mup_visualizer_pane_g2

0x28f3,	// (0x0004f81a) mup_visualizer_pane_g3_ParamLimits

0x28f3,	// (0x0004f81a) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0005c379) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0005c379) mup_visualizer_pane_g

0x1f40,	// (0x0004ee67) mup_volume_pane_g1

0x2a93,	// (0x0004f9ba) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0005c380) mup_volume_pane_g

0x1f40,	// (0x0004ee67) mup_progress_pane_g1

0x2a9c,	// (0x0004f9c3) mup_progress_pane_g2

0x2aa5,	// (0x0004f9cc) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0005c385) mup_progress_pane_g

0x1bbd,	// (0x0004eae4) bg_popup_window_pane_cp05

0x2aae,	// (0x0004f9d5) heading_pane_cp02_ParamLimits

0x2aae,	// (0x0004f9d5) heading_pane_cp02

0x2ac8,	// (0x0004f9ef) list_popup_blid_pane

0x2ad0,	// (0x0004f9f7) list_blid_sat_info_pane_ParamLimits

0x2ad0,	// (0x0004f9f7) list_blid_sat_info_pane

0x2ae3,	// (0x0004fa0a) list_blid_sat_info_pane_g1

0x2aeb,	// (0x0004fa12) list_blid_sat_info_pane_t1

0x8190,	// (0x000550b7) mup_equalizer_pane_ParamLimits

0x8190,	// (0x000550b7) mup_equalizer_pane

0x81b1,	// (0x000550d8) mup_equalizer_pane_cp1_ParamLimits

0x81b1,	// (0x000550d8) mup_equalizer_pane_cp1

0x81d2,	// (0x000550f9) mup_equalizer_pane_cp2_ParamLimits

0x81d2,	// (0x000550f9) mup_equalizer_pane_cp2

0x81f3,	// (0x0005511a) mup_equalizer_pane_cp3_ParamLimits

0x81f3,	// (0x0005511a) mup_equalizer_pane_cp3

0x8214,	// (0x0005513b) mup_equalizer_pane_cp4_ParamLimits

0x8214,	// (0x0005513b) mup_equalizer_pane_cp4

0x8235,	// (0x0005515c) mup_equalizer_pane_cp5

0x824b,	// (0x00055172) mup_equalizer_pane_cp6

0x8263,	// (0x0005518a) mup_equalizer_pane_cp7

0x3c97,	// (0x00050bbe) bg_popup_call_poc_act_pane_g9

0x3c9f,	// (0x00050bc6) bg_popup_call_poc_act_pane_g10

0x3ca7,	// (0x00050bce) bg_popup_call_poc_act_pane_g11

0x000a,

0x1e18,	// (0x0004ed3f) mup_scale_pane

0x1f40,	// (0x0004ee67) mup_scale_pane_g1

0x2af9,	// (0x0004fa20) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0005c3a1) mup_scale_pane_g

0x2b1d,	// (0x0004fa44) msg_data_pane

0x2b25,	// (0x0004fa4c) scroll_pane_cp017

0x828d,	// (0x000551b4) bg_list_pane_cp04_ParamLimits

0x828d,	// (0x000551b4) bg_list_pane_cp04

0x2b2d,	// (0x0004fa54) msg_data_pane_g1

0x82b1,	// (0x000551d8) msg_data_pane_g2

0x82bb,	// (0x000551e2) msg_data_pane_g3

0x82c3,	// (0x000551ea) msg_data_pane_g4

0x82cb,	// (0x000551f2) msg_data_pane_g5

0x82d3,	// (0x000551fa) msg_data_pane_g6

0x82db,	// (0x00055202) msg_data_pane_g7

0x0006,

0xf489,	// (0x0005c3b0) msg_data_pane_g

0x82e3,	// (0x0005520a) msg_text_pane_ParamLimits

0x82e3,	// (0x0005520a) msg_text_pane

0x8323,	// (0x0005524a) qrid_highlight_pane_cp011_ParamLimits

0x8323,	// (0x0005524a) qrid_highlight_pane_cp011

0x1bbd,	// (0x0004eae4) msg_body_pane

0x1bbd,	// (0x0004eae4) msg_header_pane

0x2b3e,	// (0x0004fa65) input_focus_pane_cp07

0x8349,	// (0x00055270) msg_header_pane_t1_ParamLimits

0x8349,	// (0x00055270) msg_header_pane_t1

0x835b,	// (0x00055282) msg_header_pane_t2_ParamLimits

0x835b,	// (0x00055282) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0005c3c4) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0005c3c4) msg_header_pane_t

0x2b53,	// (0x0004fa7a) msg_body_pane_g1

0x836d,	// (0x00055294) msg_body_pane_t1_ParamLimits

0x836d,	// (0x00055294) msg_body_pane_t1

0x839e,	// (0x000552c5) msg_body_pane_t2_ParamLimits

0x839e,	// (0x000552c5) msg_body_pane_t2

0x83b0,	// (0x000552d7) msg_body_pane_t3_ParamLimits

0x83b0,	// (0x000552d7) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0005c3c9) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0005c3c9) msg_body_pane_t

0x8414,	// (0x0005533b) main_viewer_pane_g1_ParamLimits

0x8414,	// (0x0005533b) main_viewer_pane_g1

0x8420,	// (0x00055347) main_viewer_pane_g2_ParamLimits

0x8420,	// (0x00055347) main_viewer_pane_g2

0x842c,	// (0x00055353) main_viewer_pane_g3_ParamLimits

0x842c,	// (0x00055353) main_viewer_pane_g3

0x843d,	// (0x00055364) main_viewer_pane_g4_ParamLimits

0x843d,	// (0x00055364) main_viewer_pane_g4

0x844e,	// (0x00055375) main_viewer_pane_g5_ParamLimits

0x844e,	// (0x00055375) main_viewer_pane_g5

0x844e,	// (0x00055375) main_viewer_pane_g7_ParamLimits

0x844e,	// (0x00055375) main_viewer_pane_g7

0x2586,	// (0x0004f4ad) main_viewer_pane_g8_ParamLimits

0x2586,	// (0x0004f4ad) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0005c3d9) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0005c3d9) main_viewer_pane_g

0x2b5b,	// (0x0004fa82) viewer_content_pane_ParamLimits

0x2b5b,	// (0x0004fa82) viewer_content_pane

0x848c,	// (0x000553b3) main_postcard_pane_g1_ParamLimits

0x848c,	// (0x000553b3) main_postcard_pane_g1

0x849a,	// (0x000553c1) main_postcard_pane_g2_ParamLimits

0x849a,	// (0x000553c1) main_postcard_pane_g2

0x84a8,	// (0x000553cf) main_postcard_pane_g3_ParamLimits

0x84a8,	// (0x000553cf) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0005c3ea) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0005c3ea) main_postcard_pane_g

0x84b8,	// (0x000553df) main_postcard_pane_g4

0x3e5a,	// (0x00050d81) smil_status_volume_pane_g2

0x84e4,	// (0x0005540b) postcard_pane_ParamLimits

0x84e4,	// (0x0005540b) postcard_pane

0x2a02,	// (0x0004f929) postcard_pane_g1_ParamLimits

0x2a02,	// (0x0004f929) postcard_pane_g1

0x8516,	// (0x0005543d) postcard_pane_g2_ParamLimits

0x8516,	// (0x0005543d) postcard_pane_g2

0x8522,	// (0x00055449) postcard_pane_g3_ParamLimits

0x8522,	// (0x00055449) postcard_pane_g3

0x2b77,	// (0x0004fa9e) postcard_pane_g4_ParamLimits

0x2b77,	// (0x0004fa9e) postcard_pane_g4

0x852e,	// (0x00055455) postcard_pane_g5_ParamLimits

0x852e,	// (0x00055455) postcard_pane_g5

0x853a,	// (0x00055461) postcard_pane_g6_ParamLimits

0x853a,	// (0x00055461) postcard_pane_g6

0x2b69,	// (0x0004fa90) postcard_pane_g7_ParamLimits

0x2b69,	// (0x0004fa90) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0005c3f7) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0005c3f7) postcard_pane_g

0x8546,	// (0x0005546d) main_mp2_pane_g1_ParamLimits

0x8546,	// (0x0005546d) main_mp2_pane_g1

0x8552,	// (0x00055479) main_mp2_pane_g2_ParamLimits

0x8552,	// (0x00055479) main_mp2_pane_g2

0x855e,	// (0x00055485) main_mp2_pane_g3_ParamLimits

0x855e,	// (0x00055485) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0005c406) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0005c406) main_mp2_pane_g

0x856a,	// (0x00055491) main_mp2_pane_t1_ParamLimits

0x856a,	// (0x00055491) main_mp2_pane_t1

0x8581,	// (0x000554a8) main_mp2_pane_t2_ParamLimits

0x8581,	// (0x000554a8) main_mp2_pane_t2

0x8595,	// (0x000554bc) main_mp2_pane_t3_ParamLimits

0x8595,	// (0x000554bc) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0005c40d) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0005c40d) main_mp2_pane_t

0x2b85,	// (0x0004faac) pec_content_pane_ParamLimits

0x2b85,	// (0x0004faac) pec_content_pane

0x2231,	// (0x0004f158) scroll_pane_cp015

0x2b97,	// (0x0004fabe) pec_attribute_pane_ParamLimits

0x2b97,	// (0x0004fabe) pec_attribute_pane

0x85a7,	// (0x000554ce) pec_content_pane_g1_ParamLimits

0x85a7,	// (0x000554ce) pec_content_pane_g1

0x2ba7,	// (0x0004face) pec_content_pane_t1_ParamLimits

0x2ba7,	// (0x0004face) pec_content_pane_t1

0x2bb9,	// (0x0004fae0) pec_content_pane_t2_ParamLimits

0x2bb9,	// (0x0004fae0) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0005c414) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0005c414) pec_content_pane_t

0x85b3,	// (0x000554da) list_single_graphic_pane_cp01_ParamLimits

0x85b3,	// (0x000554da) list_single_graphic_pane_cp01

0x1e18,	// (0x0004ed3f) bg_popup_sub_pane_cp04

0x2bcb,	// (0x0004faf2) popup_mup_playback_window_g1

0x2bd7,	// (0x0004fafe) popup_mup_playback_window_t1

0x2bec,	// (0x0004fb13) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0005c419) popup_mup_playback_window_t

0x2c23,	// (0x0004fb4a) main_image_pane_g1_ParamLimits

0x2c23,	// (0x0004fb4a) main_image_pane_g1

0x2c66,	// (0x0004fb8d) scroll_pane_cp018_ParamLimits

0x2c66,	// (0x0004fb8d) scroll_pane_cp018

0x2c7e,	// (0x0004fba5) scroll_pane_cp016_ParamLimits

0x2c7e,	// (0x0004fba5) scroll_pane_cp016

0x864c,	// (0x00055573) smil2_image_pane_ParamLimits

0x864c,	// (0x00055573) smil2_image_pane

0x867c,	// (0x000555a3) smil2_root_pane_ParamLimits

0x867c,	// (0x000555a3) smil2_root_pane

0x86a8,	// (0x000555cf) smil2_text_pane_ParamLimits

0x86a8,	// (0x000555cf) smil2_text_pane

0x1bbd,	// (0x0004eae4) bg_list_pane_cp06

0x2cba,	// (0x0004fbe1) grid_radio_pane

0x1bbd,	// (0x0004eae4) bg_popup_window_pane_cp06

0x2cc2,	// (0x0004fbe9) main_fmradio_pane_t1

0x2752,	// (0x0004f679) heading_pane_cp04

0x2cd0,	// (0x0004fbf7) main_fmradio_pane_t2

0x3caf,	// (0x00050bd6) popup_cale_lunar_info_window_g1

0x2cde,	// (0x0004fc05) main_fmradio_pane_t3

0x3cb7,	// (0x00050bde) popup_cale_lunar_info_window_g2

0x2cec,	// (0x0004fc13) main_fmradio_pane_t4

0x0001,

0x2cfa,	// (0x0004fc21) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0005c4f4) popup_cale_lunar_info_window_g

0xf507,	// (0x0005c42e) main_fmradio_pane_t

0x2d08,	// (0x0004fc2f) wait_bar_pane_cp03

0x2d10,	// (0x0004fc37) cell_fmradio_pane_ParamLimits

0x2d10,	// (0x0004fc37) cell_fmradio_pane

0x2b69,	// (0x0004fa90) cell_fmradio_pane_g1_ParamLimits

0x2b69,	// (0x0004fa90) cell_fmradio_pane_g1

0x1bbd,	// (0x0004eae4) grid_highlight_pane_cp011

0x2d23,	// (0x0004fc4a) poc_content_pane_ParamLimits

0x2d23,	// (0x0004fc4a) poc_content_pane

0x2d35,	// (0x0004fc5c) scroll_pane_cp019

0x86e8,	// (0x0005560f) popup_call_poc_act_window_ParamLimits

0x86e8,	// (0x0005560f) popup_call_poc_act_window

0x86f5,	// (0x0005561c) popup_call_poc_inact_window_ParamLimits

0x86f5,	// (0x0005561c) popup_call_poc_inact_window

0xf5a4,	// (0x0005c4cb) bg_popup_call_poc_act_pane_g

0x3c27,	// (0x00050b4e) bg_popup_call_poc_inact_pane_g1

0x3c2f,	// (0x00050b56) bg_popup_call_poc_inact_pane_g2

0x2d3d,	// (0x0004fc64) popup_call_poc_act_window_g2

0x3c37,	// (0x00050b5e) bg_popup_call_poc_inact_pane_g3

0x3c3f,	// (0x00050b66) bg_popup_call_poc_inact_pane_g4

0x3c47,	// (0x00050b6e) bg_popup_call_poc_inact_pane_g5

0x2d45,	// (0x0004fc6c) popup_call_poc_act_window_t1_ParamLimits

0x2d45,	// (0x0004fc6c) popup_call_poc_act_window_t1

0x2d6d,	// (0x0004fc94) popup_call_poc_act_window_t2_ParamLimits

0x2d6d,	// (0x0004fc94) popup_call_poc_act_window_t2

0x2d95,	// (0x0004fcbc) popup_call_poc_act_window_t3_ParamLimits

0x2d95,	// (0x0004fcbc) popup_call_poc_act_window_t3

0x2dbd,	// (0x0004fce4) popup_call_poc_act_window_t4_ParamLimits

0x2dbd,	// (0x0004fce4) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0005c439) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0005c439) popup_call_poc_act_window_t

0x3c4f,	// (0x00050b76) bg_popup_call_poc_inact_pane_g6

0x3c57,	// (0x00050b7e) bg_popup_call_poc_inact_pane_g7

0x3c5f,	// (0x00050b86) bg_popup_call_poc_inact_pane_g8

0x2dcf,	// (0x0004fcf6) popup_call_poc_inact_window_g2

0x3c67,	// (0x00050b8e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0005c4b8) bg_popup_call_poc_inact_pane_g

0x2dd7,	// (0x0004fcfe) popup_call_poc_inact_window_t1_ParamLimits

0x2dd7,	// (0x0004fcfe) popup_call_poc_inact_window_t1

0x2dec,	// (0x0004fd13) popup_call_poc_inact_window_t2_ParamLimits

0x2dec,	// (0x0004fd13) popup_call_poc_inact_window_t2

0x2e01,	// (0x0004fd28) popup_call_poc_inact_window_t3_ParamLimits

0x2e01,	// (0x0004fd28) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0005c442) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0005c442) popup_call_poc_inact_window_t

0x3de0,	// (0x00050d07) context_pane_ParamLimits

0x8d32,	// (0x00055c59) signal_pane_ParamLimits

0x29be,	// (0x0004f8e5) main_call2_pane

0x8caa,	// (0x00055bd1) popup_phob_thumbnail2_window_ParamLimits

0x8caa,	// (0x00055bd1) popup_phob_thumbnail2_window

0x83c2,	// (0x000552e9) aid_hotspot_pointer_arrow_pane

0x83ca,	// (0x000552f1) aid_hotspot_pointer_hand_pane

0x8a17,	// (0x0005593e) phob_pre_status_pane_g5

0x677b,	// (0x000536a2) cams_zoom_pane_ParamLimits

0x6787,	// (0x000536ae) image_vga_pane_ParamLimits

0x6796,	// (0x000536bd) main_camera_pane_g1_ParamLimits

0x67a4,	// (0x000536cb) main_camera_pane_g2_ParamLimits

0x67b0,	// (0x000536d7) main_camera_pane_g3_ParamLimits

0x67bc,	// (0x000536e3) main_camera_pane_g4_ParamLimits

0x67c8,	// (0x000536ef) main_camera_pane_g5_ParamLimits

0x67d4,	// (0x000536fb) main_camera_pane_g6_ParamLimits

0x67e0,	// (0x00053707) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0005c141) main_camera_pane_g_ParamLimits

0x67ec,	// (0x00053713) main_camera_pane_t1_ParamLimits

0x67fe,	// (0x00053725) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0005c152) main_camera_pane_t_ParamLimits

0x1e18,	// (0x0004ed3f) bg_popup_preview_window_pane_cp01_ParamLimits

0x1e18,	// (0x0004ed3f) bg_popup_preview_window_pane_cp01

0x2e16,	// (0x0004fd3d) popup_phob_thumbnail2_window_g1_ParamLimits

0x2e16,	// (0x0004fd3d) popup_phob_thumbnail2_window_g1

0x1bbd,	// (0x0004eae4) call2_cli_visual_pane

0x8711,	// (0x00055638) popup_call2_audio_conf_window_ParamLimits

0x8711,	// (0x00055638) popup_call2_audio_conf_window

0x8726,	// (0x0005564d) popup_call2_audio_first_window_ParamLimits

0x8726,	// (0x0005564d) popup_call2_audio_first_window

0x87c4,	// (0x000556eb) popup_call2_audio_in_window_ParamLimits

0x87c4,	// (0x000556eb) popup_call2_audio_in_window

0x8806,	// (0x0005572d) popup_call2_audio_out_window_ParamLimits

0x8806,	// (0x0005572d) popup_call2_audio_out_window

0x8868,	// (0x0005578f) popup_call2_audio_second_window_ParamLimits

0x8868,	// (0x0005578f) popup_call2_audio_second_window

0x88c6,	// (0x000557ed) popup_call2_audio_wait_window_ParamLimits

0x88c6,	// (0x000557ed) popup_call2_audio_wait_window

0x1bbd,	// (0x0004eae4) bg_popup_call2_act_pane_cp03

0x1dfa,	// (0x0004ed21) list_conf_pane_cp

0x2e22,	// (0x0004fd49) popup_call2_audio_conf_window_t1

0x27af,	// (0x0004f6d6) list_single_graphic_popup_conf2_pane_ParamLimits

0x27af,	// (0x0004f6d6) list_single_graphic_popup_conf2_pane

0x27c2,	// (0x0004f6e9) list_highlight_pane_cp04

0x2e30,	// (0x0004fd57) list_single_graphic_popup_conf2_pane_g1

0x27d3,	// (0x0004f6fa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0005c449) list_single_graphic_popup_conf2_pane_g

0x2e3a,	// (0x0004fd61) list_single_graphic_popup_conf2_pane_t1

0x2e48,	// (0x0004fd6f) bg_popup_call2_act_pane_cp01_ParamLimits

0x2e48,	// (0x0004fd6f) bg_popup_call2_act_pane_cp01

0x2ed2,	// (0x0004fdf9) call_type_pane_cp05_ParamLimits

0x2ed2,	// (0x0004fdf9) call_type_pane_cp05

0x2f26,	// (0x0004fe4d) popup_call2_audio_second_window_g1_ParamLimits

0x2f26,	// (0x0004fe4d) popup_call2_audio_second_window_g1

0x2f7a,	// (0x0004fea1) popup_call2_audio_second_window_g2_ParamLimits

0x2f7a,	// (0x0004fea1) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0005c44e) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0005c44e) popup_call2_audio_second_window_g

0x2fdf,	// (0x0004ff06) popup_call2_audio_second_window_t1_ParamLimits

0x2fdf,	// (0x0004ff06) popup_call2_audio_second_window_t1

0x309a,	// (0x0004ffc1) popup_call2_audio_second_window_t2_ParamLimits

0x309a,	// (0x0004ffc1) popup_call2_audio_second_window_t2

0x30ed,	// (0x00050014) popup_call2_audio_second_window_t3_ParamLimits

0x30ed,	// (0x00050014) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0005c455) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0005c455) popup_call2_audio_second_window_t

0x1bbd,	// (0x0004eae4) bg_popup_call2_in_pane_cp02

0x1bc7,	// (0x0004eaee) call_type_pane_cp04

0x1bcf,	// (0x0004eaf6) popup_call2_audio_wait_window_g1

0x1bd7,	// (0x0004eafe) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0005c02e) popup_call2_audio_wait_window_g

0x1bdf,	// (0x0004eb06) popup_call2_audio_wait_window_t3

0x31e0,	// (0x00050107) bg_popup_call2_act_pane_ParamLimits

0x31e0,	// (0x00050107) bg_popup_call2_act_pane

0x32a0,	// (0x000501c7) call_type_pane_cp03_ParamLimits

0x32a0,	// (0x000501c7) call_type_pane_cp03

0x3304,	// (0x0005022b) popup_call2_audio_first_window_g1_ParamLimits

0x3304,	// (0x0005022b) popup_call2_audio_first_window_g1

0x3374,	// (0x0005029b) popup_call2_audio_first_window_g2_ParamLimits

0x3374,	// (0x0005029b) popup_call2_audio_first_window_g2

0x2a02,	// (0x0004f929) popup_call2_audio_first_window_g3_ParamLimits

0x2a02,	// (0x0004f929) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0005c45e) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0005c45e) popup_call2_audio_first_window_g

0x3452,	// (0x00050379) popup_call2_audio_first_window_t1_ParamLimits

0x3452,	// (0x00050379) popup_call2_audio_first_window_t1

0x3555,	// (0x0005047c) popup_call2_audio_first_window_t4_ParamLimits

0x3555,	// (0x0005047c) popup_call2_audio_first_window_t4

0x3638,	// (0x0005055f) popup_call2_audio_first_window_t5_ParamLimits

0x3638,	// (0x0005055f) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0005c469) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0005c469) popup_call2_audio_first_window_t

0x1e10,	// (0x0004ed37) bg_popup_call2_act_pane_g1

0x3cbf,	// (0x00050be6) popup_cale_lunar_info_window_t1

0x3ccd,	// (0x00050bf4) popup_cale_lunar_info_window_t2

0x3cdb,	// (0x00050c02) popup_cale_lunar_info_window_t3

0x1bbd,	// (0x0004eae4) bg_popup_call2_bubble_pane

0x3739,	// (0x00050660) bg_popup_call2_in_pane_cp01_ParamLimits

0x3739,	// (0x00050660) bg_popup_call2_in_pane_cp01

0x1899,	// (0x0004e7c0) call_type_pane_cp02

0x3781,	// (0x000506a8) popup_call2_audio_out_window_g1_ParamLimits

0x3781,	// (0x000506a8) popup_call2_audio_out_window_g1

0x37ad,	// (0x000506d4) popup_call2_audio_out_window_g2_ParamLimits

0x37ad,	// (0x000506d4) popup_call2_audio_out_window_g2

0x37d5,	// (0x000506fc) popup_call2_audio_out_window_g3_ParamLimits

0x37d5,	// (0x000506fc) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0005c472) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0005c472) popup_call2_audio_out_window_g

0x382a,	// (0x00050751) popup_call2_audio_out_window_t1_ParamLimits

0x382a,	// (0x00050751) popup_call2_audio_out_window_t1

0x3889,	// (0x000507b0) popup_call2_audio_out_window_t2_ParamLimits

0x3889,	// (0x000507b0) popup_call2_audio_out_window_t2

0x38dd,	// (0x00050804) popup_call2_audio_out_window_t3_ParamLimits

0x38dd,	// (0x00050804) popup_call2_audio_out_window_t3

0x38f3,	// (0x0005081a) popup_call2_audio_out_window_t4_ParamLimits

0x38f3,	// (0x0005081a) popup_call2_audio_out_window_t4

0x3909,	// (0x00050830) popup_call2_audio_out_window_t5_ParamLimits

0x3909,	// (0x00050830) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0005c47b) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0005c47b) popup_call2_audio_out_window_t

0x396d,	// (0x00050894) bg_popup_call2_in_pane_ParamLimits

0x396d,	// (0x00050894) bg_popup_call2_in_pane

0x39c9,	// (0x000508f0) popup_call2_audio_in_window_g1_ParamLimits

0x39c9,	// (0x000508f0) popup_call2_audio_in_window_g1

0x3a01,	// (0x00050928) popup_call2_audio_in_window_g2_ParamLimits

0x3a01,	// (0x00050928) popup_call2_audio_in_window_g2

0x3a39,	// (0x00050960) popup_call2_audio_in_window_g3_ParamLimits

0x3a39,	// (0x00050960) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0005c488) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0005c488) popup_call2_audio_in_window_g

0x3a91,	// (0x000509b8) popup_call2_audio_in_window_t1_ParamLimits

0x3a91,	// (0x000509b8) popup_call2_audio_in_window_t1

0x3b11,	// (0x00050a38) popup_call2_audio_in_window_t2_ParamLimits

0x3b11,	// (0x00050a38) popup_call2_audio_in_window_t2

0x3b91,	// (0x00050ab8) popup_call2_audio_in_window_t3_ParamLimits

0x3b91,	// (0x00050ab8) popup_call2_audio_in_window_t3

0x3bab,	// (0x00050ad2) popup_call2_audio_in_window_t4_ParamLimits

0x3bab,	// (0x00050ad2) popup_call2_audio_in_window_t4

0x3bbd,	// (0x00050ae4) popup_call2_audio_in_window_t5_ParamLimits

0x3bbd,	// (0x00050ae4) popup_call2_audio_in_window_t5

0x3bd2,	// (0x00050af9) popup_call2_audio_in_window_t6_ParamLimits

0x3bd2,	// (0x00050af9) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0005c491) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0005c491) popup_call2_audio_in_window_t

0x1e10,	// (0x0004ed37) bg_popup_call2_in_pane_g1

0x3ce9,	// (0x00050c10) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0005c4f9) popup_cale_lunar_info_window_t

0x1e18,	// (0x0004ed3f) bg_popup_call2_rect_pane_ParamLimits

0x1e18,	// (0x0004ed3f) bg_popup_call2_rect_pane

0x1bbd,	// (0x0004eae4) call2_cli_visual_graphic_pane

0x1bbd,	// (0x0004eae4) call2_cli_visual_text_pane

0x8dd8,	// (0x00055cff) smil_status_volume_pane_g3

0x0002,

0x1f40,	// (0x0004ee67) call2_cli_visual_graphic_pane_g1

0x1f40,	// (0x0004ee67) call2_cli_visual_graphic_pane_g2

0x1f40,	// (0x0004ee67) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0005c49e) call2_cli_visual_graphic_pane_g

0x3be7,	// (0x00050b0e) bg_popup_call2_rect_pane_g1

0x1fcc,	// (0x0004eef3) bg_popup_call2_rect_pane_g2

0x3bef,	// (0x00050b16) bg_popup_call2_rect_pane_g3

0x3bf7,	// (0x00050b1e) bg_popup_call2_rect_pane_g4

0x3bff,	// (0x00050b26) bg_popup_call2_rect_pane_g5

0x3c07,	// (0x00050b2e) bg_popup_call2_rect_pane_g6

0x3c0f,	// (0x00050b36) bg_popup_call2_rect_pane_g7

0x3c17,	// (0x00050b3e) bg_popup_call2_rect_pane_g8

0x3c1f,	// (0x00050b46) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0005c4a5) bg_popup_call2_rect_pane_g

0x3c27,	// (0x00050b4e) bg_popup_call2_bubble_pane_g1

0x3c2f,	// (0x00050b56) bg_popup_call2_bubble_pane_g2

0x3c37,	// (0x00050b5e) bg_popup_call2_bubble_pane_g3

0x3c3f,	// (0x00050b66) bg_popup_call2_bubble_pane_g4

0x3c47,	// (0x00050b6e) bg_popup_call2_bubble_pane_g5

0x3c4f,	// (0x00050b76) bg_popup_call2_bubble_pane_g6

0x3c57,	// (0x00050b7e) bg_popup_call2_bubble_pane_g7

0x3c5f,	// (0x00050b86) bg_popup_call2_bubble_pane_g8

0x3c67,	// (0x00050b8e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0005c4b8) bg_popup_call2_bubble_pane_g

0x62f2,	// (0x00053219) aid_cale_week_size_cell_pane

0x6810,	// (0x00053737) aid_cams_cif_uncrop_pane_ParamLimits

0x6810,	// (0x00053737) aid_cams_cif_uncrop_pane

0x696b,	// (0x00053892) aid_cams_size_cell_ParamLimits

0x696b,	// (0x00053892) aid_cams_size_cell

0x6977,	// (0x0005389e) grid_cams_pane_ParamLimits

0x6985,	// (0x000538ac) linegrid_cams_pane_ParamLimits

0x6ab3,	// (0x000539da) call_video_pane_t1

0x6ad4,	// (0x000539fb) call_video_pane_t2

0x0001,

0xf27e,	// (0x0005c1a5) call_video_pane_t

0x700b,	// (0x00053f32) aid_cale_month_size_cell_pane_ParamLimits

0x700b,	// (0x00053f32) aid_cale_month_size_cell_pane

0xf61b,	// (0x0005c542) smil_status_volume_pane_g

0x8de5,	// (0x00055d0c) volume_smil_pane_ParamLimits

0x5a4d,	// (0x00052974) aid_popup2_width_pane

0x61ec,	// (0x00053113) cell_qdial_pane_g4_ParamLimits

0x61ec,	// (0x00053113) cell_qdial_pane_g4

0x7c88,	// (0x00054baf) aid_blid_cardinal_pane_ParamLimits

0x7c98,	// (0x00054bbf) aid_blid_destination_pane_ParamLimits

0x7c98,	// (0x00054bbf) aid_blid_destination_pane

0x1e18,	// (0x0004ed3f) bg_popup_call_poc_act_pane_ParamLimits

0x1e18,	// (0x0004ed3f) bg_popup_call_poc_act_pane

0x1e18,	// (0x0004ed3f) bg_popup_call_poc_inact_pane_ParamLimits

0x1e18,	// (0x0004ed3f) bg_popup_call_poc_inact_pane

0x3c6f,	// (0x00050b96) bg_popup_call_poc_act_pane_g1

0x3c77,	// (0x00050b9e) bg_popup_call_poc_act_pane_g2

0x3c7f,	// (0x00050ba6) bg_popup_call_poc_act_pane_g3

0x3c3f,	// (0x00050b66) bg_popup_call_poc_act_pane_g4

0x3c47,	// (0x00050b6e) bg_popup_call_poc_act_pane_g5

0x3c87,	// (0x00050bae) bg_popup_call_poc_act_pane_g6

0x3c57,	// (0x00050b7e) bg_popup_call_poc_act_pane_g7

0x3c8f,	// (0x00050bb6) bg_popup_call_poc_act_pane_g8

0x1bbd,	// (0x0004eae4) main_usb_pane

0x8bd9,	// (0x00055b00) popup_cale_lunar_info_window

0x6dff,	// (0x00053d26) im_reading_pane_t1_ParamLimits

0x2189,	// (0x0004f0b0) list_im_pane_ParamLimits

0x219a,	// (0x0004f0c1) scroll_pane_cp07_ParamLimits

0x1bbd,	// (0x0004eae4) grid_highlight_pane_cp012

0x1e18,	// (0x0004ed3f) mup_scale_pane_ParamLimits

0x2a02,	// (0x0004f929) main_usb_pane_g1_ParamLimits

0x2a02,	// (0x0004f929) main_usb_pane_g1

0x893a,	// (0x00055861) main_usb_pane_g2_ParamLimits

0x893a,	// (0x00055861) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0005c4e2) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0005c4e2) main_usb_pane_g

0x8946,	// (0x0005586d) main_usb_pane_t1_ParamLimits

0x8946,	// (0x0005586d) main_usb_pane_t1

0x8958,	// (0x0005587f) main_usb_pane_t2_ParamLimits

0x8958,	// (0x0005587f) main_usb_pane_t2

0x896a,	// (0x00055891) main_usb_pane_t3_ParamLimits

0x896a,	// (0x00055891) main_usb_pane_t3

0x897c,	// (0x000558a3) main_usb_pane_t4_ParamLimits

0x897c,	// (0x000558a3) main_usb_pane_t4

0x898e,	// (0x000558b5) main_usb_pane_t5_ParamLimits

0x898e,	// (0x000558b5) main_usb_pane_t5

0x89a0,	// (0x000558c7) main_usb_pane_t6_ParamLimits

0x89a0,	// (0x000558c7) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0005c4e7) main_usb_pane_t_ParamLimits

0x7c2e,	// (0x00054b55) aid_text_placing

0x7c3a,	// (0x00054b61) main_location2_pane_t1_ParamLimits

0x7c4e,	// (0x00054b75) main_location2_pane_t2_ParamLimits

0x7c62,	// (0x00054b89) main_location2_pane_t3_ParamLimits

0x7c76,	// (0x00054b9d) main_location2_pane_t4_ParamLimits

0x7c76,	// (0x00054b9d) main_location2_pane_t4

0xf3df,	// (0x0005c306) main_location2_pane_t_ParamLimits

0x1e54,	// (0x0004ed7b) find_pinb_pane_g2_ParamLimits

0x1e54,	// (0x0004ed7b) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0005c054) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0005c054) find_pinb_pane_g

0x1e60,	// (0x0004ed87) find_pinb_pane_t1_ParamLimits

0x1e72,	// (0x0004ed99) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0005c059) find_pinb_pane_t_ParamLimits

0x1bbd,	// (0x0004eae4) main_call3_pane

0x7417,	// (0x0005433e) cale_month_day_heading_pane_t1_ParamLimits

0x7475,	// (0x0005439c) cale_month_day_heading_pane_t2_ParamLimits

0x74da,	// (0x00054401) cale_month_day_heading_pane_t3_ParamLimits

0x753f,	// (0x00054466) cale_month_day_heading_pane_t4_ParamLimits

0x75a4,	// (0x000544cb) cale_month_day_heading_pane_t5_ParamLimits

0x7609,	// (0x00054530) cale_month_day_heading_pane_t6_ParamLimits

0x766e,	// (0x00054595) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0005c1dd) cale_month_day_heading_pane_t_ParamLimits

0x23da,	// (0x0004f301) smil_status_volume_pane

0x84fe,	// (0x00055425) postcard_address_pane_ParamLimits

0x84fe,	// (0x00055425) postcard_address_pane

0x850a,	// (0x00055431) postcard_message_pane_ParamLimits

0x850a,	// (0x00055431) postcard_message_pane

0x8905,	// (0x0005582c) call2_cli_visual_pane_t1_ParamLimits

0x8905,	// (0x0005582c) call2_cli_visual_pane_t1

0x8f3c,	// (0x00055e63) postcard_message_pane_t1_ParamLimits

0x8f3c,	// (0x00055e63) postcard_message_pane_t1

0x8f25,	// (0x00055e4c) postcard_address_pane_t1_ParamLimits

0x8f25,	// (0x00055e4c) postcard_address_pane_t1

0x8f16,	// (0x00055e3d) popup_call3_audio_in_window_ParamLimits

0x8f16,	// (0x00055e3d) popup_call3_audio_in_window

0x8dfa,	// (0x00055d21) bg_popup_call3_in_pane_ParamLimits

0x8dfa,	// (0x00055d21) bg_popup_call3_in_pane

0x8e5c,	// (0x00055d83) popup_call3_audio_in_window_g1_ParamLimits

0x8e5c,	// (0x00055d83) popup_call3_audio_in_window_g1

0x8e74,	// (0x00055d9b) popup_call3_audio_in_window_g2_ParamLimits

0x8e74,	// (0x00055d9b) popup_call3_audio_in_window_g2

0x8e8c,	// (0x00055db3) popup_call3_audio_in_window_g3_ParamLimits

0x8e8c,	// (0x00055db3) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0005c549) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0005c549) popup_call3_audio_in_window_g

0x8eb4,	// (0x00055ddb) popup_call3_audio_in_window_t1_ParamLimits

0x8eb4,	// (0x00055ddb) popup_call3_audio_in_window_t1

0x8edc,	// (0x00055e03) popup_call3_audio_in_window_t2_ParamLimits

0x8edc,	// (0x00055e03) popup_call3_audio_in_window_t2

0x8f04,	// (0x00055e2b) popup_call3_audio_in_window_t3_ParamLimits

0x8f04,	// (0x00055e2b) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0005c552) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0005c552) popup_call3_audio_in_window_t

0x29be,	// (0x0004f8e5) bg_popup_call3_rect_pane

0x3be7,	// (0x00050b0e) bg_popup_call3_rect_pane_g1

0x1fcc,	// (0x0004eef3) bg_popup_call3_rect_pane_g2

0x3bef,	// (0x00050b16) bg_popup_call3_rect_pane_g3

0x3bf7,	// (0x00050b1e) bg_popup_call3_rect_pane_g4

0x3bff,	// (0x00050b26) bg_popup_call3_rect_pane_g5

0x3c07,	// (0x00050b2e) bg_popup_call3_rect_pane_g6

0x3c0f,	// (0x00050b36) bg_popup_call3_rect_pane_g7

0x809e,	// (0x00054fc5) mup_visualizer_osc_pane

0x2a8b,	// (0x0004f9b2) mup_visualizer_spec_pane

0x8e1a,	// (0x00055d41) call3_video_qcif_pane_ParamLimits

0x8e1a,	// (0x00055d41) call3_video_qcif_pane

0x8e2c,	// (0x00055d53) call3_video_qcif_uncrop_pane_ParamLimits

0x8e2c,	// (0x00055d53) call3_video_qcif_uncrop_pane

0x8e3a,	// (0x00055d61) call3_video_subqcif_pane_ParamLimits

0x8e3a,	// (0x00055d61) call3_video_subqcif_pane

0x8e4c,	// (0x00055d73) call3_video_subqcif_uncrop_pane_ParamLimits

0x8e4c,	// (0x00055d73) call3_video_subqcif_uncrop_pane

0x8ea4,	// (0x00055dcb) popup_call3_audio_in_window_g4_ParamLimits

0x8ea4,	// (0x00055dcb) popup_call3_audio_in_window_g4

0x8dc7,	// (0x00055cee) mup_spec_half_pane

0x8dd0,	// (0x00055cf7) mup_spec_half_pane_cp

0x3e40,	// (0x00050d67) mup_osc_middle_pane

0x3e49,	// (0x00050d70) mup_visualizer_osc_pane_g1

0x8da8,	// (0x00055ccf) mup_spec_bar_pane_ParamLimits

0x8da8,	// (0x00055ccf) mup_spec_bar_pane

0x3e2d,	// (0x00050d54) mup_spec_bar_pane_g1

0x3e37,	// (0x00050d5e) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0005c53d) mup_spec_bar_pane_g

0x62f2,	// (0x00053219) aid_cale_week_size_cell_pane_ParamLimits

0x6305,	// (0x0005322c) bg_cale_heading_pane_ParamLimits

0x2000,	// (0x0004ef27) bg_cale_pane_cp01_ParamLimits

0x6321,	// (0x00053248) cale_week_corner_pane_ParamLimits

0x6337,	// (0x0005325e) cale_week_day_heading_pane_ParamLimits

0x6353,	// (0x0005327a) cale_week_scroll_pane_g1_ParamLimits

0x636c,	// (0x00053293) cale_week_scroll_pane_g2_ParamLimits

0x637d,	// (0x000532a4) cale_week_scroll_pane_g3_ParamLimits

0x638e,	// (0x000532b5) cale_week_scroll_pane_g4_ParamLimits

0x639f,	// (0x000532c6) cale_week_scroll_pane_g5_ParamLimits

0x63b0,	// (0x000532d7) cale_week_scroll_pane_g6_ParamLimits

0x63c1,	// (0x000532e8) cale_week_scroll_pane_g7_ParamLimits

0x63d4,	// (0x000532fb) cale_week_scroll_pane_g8_ParamLimits

0x63e7,	// (0x0005330e) cale_week_scroll_pane_g9_ParamLimits

0x63f8,	// (0x0005331f) cale_week_scroll_pane_g10_ParamLimits

0x6409,	// (0x00053330) cale_week_scroll_pane_g11_ParamLimits

0x641a,	// (0x00053341) cale_week_scroll_pane_g12_ParamLimits

0x642b,	// (0x00053352) cale_week_scroll_pane_g13_ParamLimits

0x6444,	// (0x0005336b) cale_week_scroll_pane_g14_ParamLimits

0x645d,	// (0x00053384) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0005c0e5) cale_week_scroll_pane_g_ParamLimits

0x6476,	// (0x0005339d) cale_week_time_pane_ParamLimits

0x6489,	// (0x000533b0) grid_cale_week_pane_ParamLimits

0x2019,	// (0x0004ef40) listscroll_cale_week_pane_t1

0x64a6,	// (0x000533cd) scroll_pane_cp08_ParamLimits

0x705c,	// (0x00053f83) cale_month_corner_pane_ParamLimits

0x23b0,	// (0x0004f2d7) cale_month_pane_t1

0x73c6,	// (0x000542ed) cale_month_week_pane_ParamLimits

0x2a02,	// (0x0004f929) popup_call_status_window_g1_ParamLimits

0x7a51,	// (0x00054978) popup_call_status_window_g2_ParamLimits

0x7a5d,	// (0x00054984) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0005c28d) popup_call_status_window_g_ParamLimits

0x274a,	// (0x0004f671) aid_call2_pane

0x833d,	// (0x00055264) msg_header_pane_g1

0x84fe,	// (0x00055425) postcard_address2_pane_ParamLimits

0x84fe,	// (0x00055425) postcard_address2_pane

0x850a,	// (0x00055431) postcard_message2_pane_ParamLimits

0x850a,	// (0x00055431) postcard_message2_pane

0x8d40,	// (0x00055c67) message2_row_pane_ParamLimits

0x8d40,	// (0x00055c67) message2_row_pane

0x8d5b,	// (0x00055c82) address2_row_pane_ParamLimits

0x8d5b,	// (0x00055c82) address2_row_pane

0x3dfb,	// (0x00050d22) postcard_message2_row_pane_g1

0x3e03,	// (0x00050d2a) postcard_message2_row_pane_t1

0x3dfb,	// (0x00050d22) address2_row_pane_g1

0x3e03,	// (0x00050d2a) address2_row_pane_t1

0x66da,	// (0x00053601) aid_size_cell_vorec

0x1bbd,	// (0x0004eae4) main_rss_pane

0x8d6e,	// (0x00055c95) rss_list_single_pane_ParamLimits

0x8d6e,	// (0x00055c95) rss_list_single_pane

0x3e11,	// (0x00050d38) rss_list_single_pane_t1

0x3e1f,	// (0x00050d46) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0005c538) rss_list_single_pane_t

0x1bbd,	// (0x0004eae4) main_camera2_pane

0x1bbd,	// (0x0004eae4) main_video2_pane

0x8fa0,	// (0x00055ec7) cams_zoom_pane_cp2_ParamLimits

0x8fa0,	// (0x00055ec7) cams_zoom_pane_cp2

0x8fac,	// (0x00055ed3) image2_vga_pane_ParamLimits

0x8fac,	// (0x00055ed3) image2_vga_pane

0x8fbb,	// (0x00055ee2) main_camera2_pane_g1_ParamLimits

0x8fbb,	// (0x00055ee2) main_camera2_pane_g1

0x8fc7,	// (0x00055eee) main_camera2_pane_g2_ParamLimits

0x8fc7,	// (0x00055eee) main_camera2_pane_g2

0x8fd3,	// (0x00055efa) main_camera2_pane_g3_ParamLimits

0x8fd3,	// (0x00055efa) main_camera2_pane_g3

0x8fdf,	// (0x00055f06) main_camera2_pane_g4_ParamLimits

0x8fdf,	// (0x00055f06) main_camera2_pane_g4

0x8feb,	// (0x00055f12) main_camera2_pane_g5_ParamLimits

0x8feb,	// (0x00055f12) main_camera2_pane_g5

0x8ff7,	// (0x00055f1e) main_camera2_pane_g6_ParamLimits

0x8ff7,	// (0x00055f1e) main_camera2_pane_g6

0x9003,	// (0x00055f2a) main_camera2_pane_g7_ParamLimits

0x9003,	// (0x00055f2a) main_camera2_pane_g7

0x900f,	// (0x00055f36) main_camera2_pane_g8_ParamLimits

0x900f,	// (0x00055f36) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0005c559) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0005c559) main_camera2_pane_g

0x9027,	// (0x00055f4e) main_camera2_pane_t1_ParamLimits

0x9027,	// (0x00055f4e) main_camera2_pane_t1

0x9039,	// (0x00055f60) main_camera2_pane_t2_ParamLimits

0x9039,	// (0x00055f60) main_camera2_pane_t2

0x904b,	// (0x00055f72) main_camera2_pane_t3_ParamLimits

0x904b,	// (0x00055f72) main_camera2_pane_t3

0x905d,	// (0x00055f84) main_camera2_pane_t4_ParamLimits

0x905d,	// (0x00055f84) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0005c56c) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0005c56c) main_camera2_pane_t

0x90bf,	// (0x00055fe6) cams_zoom_pane_cp4_ParamLimits

0x90bf,	// (0x00055fe6) cams_zoom_pane_cp4

0x90cf,	// (0x00055ff6) image2_cif_pane_ParamLimits

0x90cf,	// (0x00055ff6) image2_cif_pane

0x90e4,	// (0x0005600b) image2_subqcif_pane_ParamLimits

0x90e4,	// (0x0005600b) image2_subqcif_pane

0x90f3,	// (0x0005601a) main_video2_pane_g1_ParamLimits

0x90f3,	// (0x0005601a) main_video2_pane_g1

0x9105,	// (0x0005602c) main_video2_pane_g2_ParamLimits

0x9105,	// (0x0005602c) main_video2_pane_g2

0x9115,	// (0x0005603c) main_video2_pane_g3_ParamLimits

0x9115,	// (0x0005603c) main_video2_pane_g3

0x9125,	// (0x0005604c) main_video2_pane_g4_ParamLimits

0x9125,	// (0x0005604c) main_video2_pane_g4

0x9135,	// (0x0005605c) main_video2_pane_g5_ParamLimits

0x9135,	// (0x0005605c) main_video2_pane_g5

0x9145,	// (0x0005606c) main_video2_pane_g6_ParamLimits

0x9145,	// (0x0005606c) main_video2_pane_g6

0x0005,

0xf654,	// (0x0005c57b) main_video2_pane_g_ParamLimits

0xf654,	// (0x0005c57b) main_video2_pane_g

0x9157,	// (0x0005607e) main_video2_pane_t1_ParamLimits

0x9157,	// (0x0005607e) main_video2_pane_t1

0x9171,	// (0x00056098) main_video2_pane_t2_ParamLimits

0x9171,	// (0x00056098) main_video2_pane_t2

0x9197,	// (0x000560be) main_video2_pane_t3_ParamLimits

0x9197,	// (0x000560be) main_video2_pane_t3

0x0002,

0xf661,	// (0x0005c588) main_video2_pane_t_ParamLimits

0xf661,	// (0x0005c588) main_video2_pane_t

0x8a57,	// (0x0005597e) call_muted_g2

0x0001,

0xf603,	// (0x0005c52a) call_muted_g

0x1bbd,	// (0x0004eae4) main_mup2_pane

0x3eae,	// (0x00050dd5) main_mup2_pane_g1_ParamLimits

0x3eae,	// (0x00050dd5) main_mup2_pane_g1

0x91bd,	// (0x000560e4) main_mup2_pane_g2_ParamLimits

0x91bd,	// (0x000560e4) main_mup2_pane_g2

0x943f,	// (0x00056366) main_mup_pane_g13_cp1

0x9447,	// (0x0005636e) mup_volume_pane_cp1

0x91dd,	// (0x00056104) main_mup2_pane_g4_ParamLimits

0x91dd,	// (0x00056104) main_mup2_pane_g4

0x91f2,	// (0x00056119) main_mup2_pane_g5_ParamLimits

0x91f2,	// (0x00056119) main_mup2_pane_g5

0x9207,	// (0x0005612e) main_mup2_pane_g6_ParamLimits

0x9207,	// (0x0005612e) main_mup2_pane_g6

0x921c,	// (0x00056143) main_mup2_pane_g7_ParamLimits

0x921c,	// (0x00056143) main_mup2_pane_g7

0x0006,

0xf668,	// (0x0005c58f) main_mup2_pane_g_ParamLimits

0xf668,	// (0x0005c58f) main_mup2_pane_g

0x9238,	// (0x0005615f) main_mup2_pane_t1_ParamLimits

0x9238,	// (0x0005615f) main_mup2_pane_t1

0x924f,	// (0x00056176) main_mup2_pane_t2_ParamLimits

0x924f,	// (0x00056176) main_mup2_pane_t2

0x9266,	// (0x0005618d) main_mup2_pane_t3_ParamLimits

0x9266,	// (0x0005618d) main_mup2_pane_t3

0x927d,	// (0x000561a4) main_mup2_pane_t4_ParamLimits

0x927d,	// (0x000561a4) main_mup2_pane_t4

0x9297,	// (0x000561be) main_mup2_pane_t5_ParamLimits

0x9297,	// (0x000561be) main_mup2_pane_t5

0x92b1,	// (0x000561d8) main_mup2_pane_t6_ParamLimits

0x92b1,	// (0x000561d8) main_mup2_pane_t6

0x0005,

0xf677,	// (0x0005c59e) main_mup2_pane_t_ParamLimits

0xf677,	// (0x0005c59e) main_mup2_pane_t

0x92e9,	// (0x00056210) mup2_visualizer_pane_ParamLimits

0x92e9,	// (0x00056210) mup2_visualizer_pane

0x931f,	// (0x00056246) mup_progress_pane_cp_ParamLimits

0x931f,	// (0x00056246) mup_progress_pane_cp

0x942a,	// (0x00056351) mup_volume_pane_cp_ParamLimits

0x942a,	// (0x00056351) mup_volume_pane_cp

0x9336,	// (0x0005625d) mup2_visualizer_pane_g1_ParamLimits

0x9336,	// (0x0005625d) mup2_visualizer_pane_g1

0x3e80,	// (0x00050da7) mup2_visualizer_pane_g2_ParamLimits

0x3e80,	// (0x00050da7) mup2_visualizer_pane_g2

0x934b,	// (0x00056272) mup2_visualizer_pane_g3_ParamLimits

0x934b,	// (0x00056272) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x0005c5ab) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x0005c5ab) mup2_visualizer_pane_g

0x2cb2,	// (0x0004fbd9) aid_size_cell_fmradio

0x8b6d,	// (0x00055a94) aid_height_parent_landcape

0x2218,	// (0x0004f13f) wml_content_pane_cp

0x2220,	// (0x0004f147) wml_tabs_pane

0x2229,	// (0x0004f150) popup_wml_miniature_window

0x2231,	// (0x0004f158) scroll_pane_cp021

0x2245,	// (0x0004f16c) wml_content_pane_comp8

0x1bbd,	// (0x0004eae4) bg_popup_sub_pane_cp05

0x3e9e,	// (0x00050dc5) popup_wml_miniature_window_g1

0x3ea6,	// (0x00050dcd) wml_miniature_view_pane

0x9359,	// (0x00056280) aid_size_wml_view

0x9361,	// (0x00056288) wml_miniature_view_pane_g1

0x936a,	// (0x00056291) wml_miniature_view_pane_g2

0x9373,	// (0x0005629a) wml_miniature_view_pane_g3

0x937b,	// (0x000562a2) wml_miniature_view_pane_g4

0x9383,	// (0x000562aa) wml_miniature_view_pane_g5

0x938b,	// (0x000562b2) wml_miniature_view_pane_g6

0x9393,	// (0x000562ba) wml_miniature_view_pane_g7

0x939b,	// (0x000562c2) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0005c5b2) wml_miniature_view_pane_g

0x3eae,	// (0x00050dd5) background_graphic_ParamLimits

0x3eae,	// (0x00050dd5) background_graphic

0x3eba,	// (0x00050de1) wml_tabs_2_pane

0x3ec3,	// (0x00050dea) wml_tabs_3_pane_ParamLimits

0x3ec3,	// (0x00050dea) wml_tabs_3_pane

0x3ed5,	// (0x00050dfc) wml_tabs_4_pane_ParamLimits

0x3ed5,	// (0x00050dfc) wml_tabs_4_pane

0x3eeb,	// (0x00050e12) wml_tabs_5_pane_ParamLimits

0x3eeb,	// (0x00050e12) wml_tabs_5_pane

0x3f05,	// (0x00050e2c) wml_tabs_pane_g2_ParamLimits

0x3f05,	// (0x00050e2c) wml_tabs_pane_g2

0x3f19,	// (0x00050e40) wml_tabs_pane_g3_ParamLimits

0x3f19,	// (0x00050e40) wml_tabs_pane_g3

0x93a3,	// (0x000562ca) wml_tabs_2_active_pane_ParamLimits

0x93a3,	// (0x000562ca) wml_tabs_2_active_pane

0x93b3,	// (0x000562da) wml_tabs_2_passive_pane_ParamLimits

0x93b3,	// (0x000562da) wml_tabs_2_passive_pane

0x93c3,	// (0x000562ea) wml_tabs_3_active_pane_cp_ParamLimits

0x93c3,	// (0x000562ea) wml_tabs_3_active_pane_cp

0x93d4,	// (0x000562fb) wml_tabs_3_passive_pane_ParamLimits

0x93d4,	// (0x000562fb) wml_tabs_3_passive_pane

0x93e5,	// (0x0005630c) wml_tabs_3_passive_pane_cp_ParamLimits

0x93e5,	// (0x0005630c) wml_tabs_3_passive_pane_cp

0x93f6,	// (0x0005631d) tabs_4_active_pane

0x93fe,	// (0x00056325) tabs_4_passive_pane

0x9406,	// (0x0005632d) tabs_4_passive_pane_cp

0x940e,	// (0x00056335) tabs_4_passive_pane_cp2

0x8932,	// (0x00055859) aid_height_text

0x806b,	// (0x00054f92) mup_volume_cont_pane_ParamLimits

0x806b,	// (0x00054f92) mup_volume_cont_pane

0x5e28,	// (0x00052d4f) aid_size_cell_pinb

0x5e32,	// (0x00052d59) aid_size_list_pinb

0x9308,	// (0x0005622f) mup2_volume_cont_pane_ParamLimits

0x9308,	// (0x0005622f) mup2_volume_cont_pane

0x9416,	// (0x0005633d) mup2_volume_cont_pane_g1_ParamLimits

0x9416,	// (0x0005633d) mup2_volume_cont_pane_g1

0x5a59,	// (0x00052980) aid_size_cell_touch_ParamLimits

0x5a59,	// (0x00052980) aid_size_cell_touch

0x5d0e,	// (0x00052c35) touch_pane_ParamLimits

0x5d0e,	// (0x00052c35) touch_pane

0x5d04,	// (0x00052c2b) main_rss2_pane

0x3f36,	// (0x00050e5d) listscroll_rss2_pane

0x3f3f,	// (0x00050e66) rss2_navigation_pane

0x3f47,	// (0x00050e6e) list_rss2_pane

0x2875,	// (0x0004f79c) scroll_pane_cp22

0x3f4f,	// (0x00050e76) rss2_navigation_pane_g1

0x3f58,	// (0x00050e7f) rss2_navigation_pane_g2

0x3f60,	// (0x00050e87) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0005c5c3) rss2_navigation_pane_g

0x3f68,	// (0x00050e8f) rss2_navigation_pane_t1

0x944f,	// (0x00056376) rss2_list_single_pane_ParamLimits

0x944f,	// (0x00056376) rss2_list_single_pane

0x3f76,	// (0x00050e9d) rss2_list_single_pane_t2

0x3f84,	// (0x00050eab) rss2_list_single_pane_t3_ParamLimits

0x3f84,	// (0x00050eab) rss2_list_single_pane_t3

0x3fa1,	// (0x00050ec8) rss2_list_single_pane_t4

0x7872,	// (0x00054799) smil_status_pane_g1

0x8b84,	// (0x00055aab) main_image2_pane_ParamLimits

0x8b84,	// (0x00055aab) main_image2_pane

0x901b,	// (0x00055f42) main_camera2_pane_g9_ParamLimits

0x901b,	// (0x00055f42) main_camera2_pane_g9

0x906f,	// (0x00055f96) main_camera2_pane_t5_ParamLimits

0x906f,	// (0x00055f96) main_camera2_pane_t5

0x9081,	// (0x00055fa8) main_camera2_pane_t6_ParamLimits

0x9081,	// (0x00055fa8) main_camera2_pane_t6

0x9480,	// (0x000563a7) main_image2_pane_g1_ParamLimits

0x9480,	// (0x000563a7) main_image2_pane_g1

0x86d2,	// (0x000555f9) smil2_video_pane_ParamLimits

0x86d2,	// (0x000555f9) smil2_video_pane

0x596a,	// (0x00052891) aid_zoom_text_primary_cp

0x5ca9,	// (0x00052bd0) popup_preview_fixed_window

0x2181,	// (0x0004f0a8) im_reading_pane_g1

0x8f65,	// (0x00055e8c) cams2_bc_adjust_pane_cp_ParamLimits

0x8f65,	// (0x00055e8c) cams2_bc_adjust_pane_cp

0x90b1,	// (0x00055fd8) cams2_bc_adjust_pane_ParamLimits

0x90b1,	// (0x00055fd8) cams2_bc_adjust_pane

0x4133,	// (0x0005105a) cams2_bc_adjust_pane_g1

0x948c,	// (0x000563b3) cams2_slider_pane

0x9495,	// (0x000563bc) cams2_slider_pane_g1

0x949e,	// (0x000563c5) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0005c5ca) cams2_slider_pane_g

0x5f38,	// (0x00052e5f) calc_display_pane_ParamLimits

0x5f56,	// (0x00052e7d) calc_paper_pane_ParamLimits

0x5f72,	// (0x00052e99) grid_calc_pane_ParamLimits

0x7abf,	// (0x000549e6) popup_clock_digital_window_t1_ParamLimits

0x2c4f,	// (0x0004fb76) main_image_pane_t1

0x5f1e,	// (0x00052e45) aid_size_cell_calc_ParamLimits

0x5f1e,	// (0x00052e45) aid_size_cell_calc

0x8bb5,	// (0x00055adc) popup_blid_sat_info2_window_ParamLimits

0x8bb5,	// (0x00055adc) popup_blid_sat_info2_window

0x3fb7,	// (0x00050ede) aid_size_cell_blid

0x3fbf,	// (0x00050ee6) bg_popup_window_pane_cp07

0x3fe2,	// (0x00050f09) grid_popup_blid_pane

0x3fec,	// (0x00050f13) heading_pane_cp05_ParamLimits

0x3fec,	// (0x00050f13) heading_pane_cp05

0x40b6,	// (0x00050fdd) cell_popup_blid_pane_ParamLimits

0x40b6,	// (0x00050fdd) cell_popup_blid_pane

0x40da,	// (0x00051001) cell_popup_blid_pane_g1

0x40e2,	// (0x00051009) cell_popup_blid_pane_t1

0x92ce,	// (0x000561f5) mup2_indicator_pane_ParamLimits

0x92ce,	// (0x000561f5) mup2_indicator_pane

0x29be,	// (0x0004f8e5) mup2_visualizer_osc_pane

0x3e8c,	// (0x00050db3) mup2_visualizer_spec_pane_ParamLimits

0x3e8c,	// (0x00050db3) mup2_visualizer_spec_pane

0x94b8,	// (0x000563df) mup2_spec_half_pane

0x94c1,	// (0x000563e8) mup2_spec_half_pane_cp

0x94cb,	// (0x000563f2) mup2_spec_bar_pane_ParamLimits

0x94cb,	// (0x000563f2) mup2_spec_bar_pane

0x3e2d,	// (0x00050d54) mup2_spec_bar_pane_g1

0x3e37,	// (0x00050d5e) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0005c53d) mup2_spec_bar_pane_g

0x94ea,	// (0x00056411) mup2_osc_middle_pane

0x3e49,	// (0x00050d70) mup2_visualizer_osc_pane_g1

0x17ca,	// (0x0004e6f1) popup_number_entry_window_t1_ParamLimits

0x17dd,	// (0x0004e704) popup_number_entry_window_t2_ParamLimits

0x17ef,	// (0x0004e716) popup_number_entry_window_t3_ParamLimits

0x5d65,	// (0x00052c8c) popup_number_entry_window_t5_ParamLimits

0x5d65,	// (0x00052c8c) popup_number_entry_window_t5

0xf0d8,	// (0x0005bfff) popup_number_entry_window_t_ParamLimits

0x1801,	// (0x0004e728) text_title_cp2_ParamLimits

0x83d2,	// (0x000552f9) aid_hotspot_pointer_text2_pane

0x8460,	// (0x00055387) main_viewer_pane_g9_ParamLimits

0x8460,	// (0x00055387) main_viewer_pane_g9

0x23b0,	// (0x0004f2d7) cale_month_pane_t1_ParamLimits

0x23ed,	// (0x0004f314) bg_cale_pane_ParamLimits

0x2405,	// (0x0004f32c) list_cale_pane_ParamLimits

0x2019,	// (0x0004ef40) listscroll_cale_day_pane_t1

0x2416,	// (0x0004f33d) scroll_pane_cp09_ParamLimits

0x80a6,	// (0x00054fcd) main_mup_eq_pane_t1_ParamLimits

0x80a6,	// (0x00054fcd) main_mup_eq_pane_t1

0x80c0,	// (0x00054fe7) main_mup_eq_pane_t2_ParamLimits

0x80c0,	// (0x00054fe7) main_mup_eq_pane_t2

0x80da,	// (0x00055001) main_mup_eq_pane_t3_ParamLimits

0x80da,	// (0x00055001) main_mup_eq_pane_t3

0x80f2,	// (0x00055019) main_mup_eq_pane_t4_ParamLimits

0x80f2,	// (0x00055019) main_mup_eq_pane_t4

0x810a,	// (0x00055031) main_mup_eq_pane_t5_ParamLimits

0x810a,	// (0x00055031) main_mup_eq_pane_t5

0x8122,	// (0x00055049) main_mup_eq_pane_t6_ParamLimits

0x8122,	// (0x00055049) main_mup_eq_pane_t6

0x8136,	// (0x0005505d) main_mup_eq_pane_t7_ParamLimits

0x8136,	// (0x0005505d) main_mup_eq_pane_t7

0x814a,	// (0x00055071) main_mup_eq_pane_t8_ParamLimits

0x814a,	// (0x00055071) main_mup_eq_pane_t8

0x8160,	// (0x00055087) main_mup_eq_pane_t9_ParamLimits

0x8160,	// (0x00055087) main_mup_eq_pane_t9

0x8178,	// (0x0005509f) main_mup_eq_pane_t10_ParamLimits

0x8178,	// (0x0005509f) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0005c38c) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0005c38c) main_mup_eq_pane_t

0x8235,	// (0x0005515c) mup_equalizer_pane_cp5_ParamLimits

0x824b,	// (0x00055172) mup_equalizer_pane_cp6_ParamLimits

0x8263,	// (0x0005518a) mup_equalizer_pane_cp7_ParamLimits

0x5d04,	// (0x00052c2b) main_gallery_pane

0x3e52,	// (0x00050d79) smil2_volume_pane

0x3e6d,	// (0x00050d94) smil_status_volume_pane_g1_ParamLimits

0x3e5a,	// (0x00050d81) smil_status_volume_pane_g2_ParamLimits

0x8dd8,	// (0x00055cff) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0005c542) smil_status_volume_pane_g_ParamLimits

0x3fbf,	// (0x00050ee6) bg_popup_window_pane_cp07_ParamLimits

0x3fcd,	// (0x00050ef4) blid_firmament_pane

0x94f3,	// (0x0005641a) aid_size_cell_gallery_ParamLimits

0x94f3,	// (0x0005641a) aid_size_cell_gallery

0x9501,	// (0x00056428) grid_gallery_pane_ParamLimits

0x9501,	// (0x00056428) grid_gallery_pane

0x9511,	// (0x00056438) cell_gallery_pane_ParamLimits

0x9511,	// (0x00056438) cell_gallery_pane

0x40f0,	// (0x00051017) bg_cell_gallery_focus_pane_ParamLimits

0x40f0,	// (0x00051017) bg_cell_gallery_focus_pane

0x4102,	// (0x00051029) cell_gallery_pane_g1_ParamLimits

0x4102,	// (0x00051029) cell_gallery_pane_g1

0x955f,	// (0x00056486) cell_gallery_pane_g2_ParamLimits

0x955f,	// (0x00056486) cell_gallery_pane_g2

0x956c,	// (0x00056493) cell_gallery_pane_g3_ParamLimits

0x956c,	// (0x00056493) cell_gallery_pane_g3

0x410e,	// (0x00051035) cell_gallery_pane_g4_ParamLimits

0x410e,	// (0x00051035) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x0005c5f0) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x0005c5f0) cell_gallery_pane_g

0x411a,	// (0x00051041) bg_cell_gallery_focus_pane_g1

0x4122,	// (0x00051049) bg_cell_gallery_focus_pane_g2

0x413b,	// (0x00051062) bg_cell_gallery_focus_pane_g3

0x4143,	// (0x0005106a) bg_cell_gallery_focus_pane_g4

0x414b,	// (0x00051072) bg_cell_gallery_focus_pane_g5

0x4153,	// (0x0005107a) bg_cell_gallery_focus_pane_g6

0x415b,	// (0x00051082) bg_cell_gallery_focus_pane_g7

0x4163,	// (0x0005108a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0005c5f9) bg_cell_gallery_focus_pane_g

0x416b,	// (0x00051092) aid_firma_cardinal

0x417f,	// (0x000510a6) blid_firmament_pane_t1

0x4196,	// (0x000510bd) blid_firmament_pane_t2

0x41ad,	// (0x000510d4) blid_firmament_pane_t3

0x41c4,	// (0x000510eb) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0005c60a) blid_firmament_pane_t

0x41db,	// (0x00051102) blid_sat_info_pane

0x41eb,	// (0x00051112) blid_sat_info_pane_g1

0x41eb,	// (0x00051112) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x0005c613) blid_sat_info_pane_g

0x41f5,	// (0x0005111c) blid_sat_info_pane_t1

0x4203,	// (0x0005112a) smil2_volume_content_pane

0x420c,	// (0x00051133) smil2_volume_pane_g1

0x412a,	// (0x00051051) smil2_volume_content_pane_g1

0x4214,	// (0x0005113b) smil2_volume_content_pane_g2

0x421d,	// (0x00051144) smil2_volume_content_pane_g3

0x4226,	// (0x0005114d) smil2_volume_content_pane_g4

0x422f,	// (0x00051156) smil2_volume_content_pane_g5

0x4238,	// (0x0005115f) smil2_volume_content_pane_g6

0x4241,	// (0x00051168) smil2_volume_content_pane_g7

0x424a,	// (0x00051171) smil2_volume_content_pane_g8

0x4253,	// (0x0005117a) smil2_volume_content_pane_g9

0x425c,	// (0x00051183) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0005c618) smil2_volume_content_pane_g

0x650c,	// (0x00053433) cale_week_day_heading_pane_t1_ParamLimits

0x6525,	// (0x0005344c) cale_week_day_heading_pane_t2_ParamLimits

0x653e,	// (0x00053465) cale_week_day_heading_pane_t3_ParamLimits

0x6557,	// (0x0005347e) cale_week_day_heading_pane_t4_ParamLimits

0x6570,	// (0x00053497) cale_week_day_heading_pane_t5_ParamLimits

0x6589,	// (0x000534b0) cale_week_day_heading_pane_t6_ParamLimits

0x65a2,	// (0x000534c9) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0005c104) cale_week_day_heading_pane_t_ParamLimits

0x202b,	// (0x0004ef52) bg_cale_side_pane_ParamLimits

0x65bb,	// (0x000534e2) cale_week_time_pane_t1_ParamLimits

0x65d3,	// (0x000534fa) cale_week_time_pane_t2_ParamLimits

0x65eb,	// (0x00053512) cale_week_time_pane_t3_ParamLimits

0x6603,	// (0x0005352a) cale_week_time_pane_t4_ParamLimits

0x661b,	// (0x00053542) cale_week_time_pane_t5_ParamLimits

0x6633,	// (0x0005355a) cale_week_time_pane_t6_ParamLimits

0x664b,	// (0x00053572) cale_week_time_pane_t7_ParamLimits

0x666b,	// (0x00053592) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0005c113) cale_week_time_pane_t_ParamLimits

0x668b,	// (0x000535b2) cell_cale_week_pane_g2_ParamLimits

0x202b,	// (0x0004ef52) bg_cale_side_pane_cp01_ParamLimits

0x76e3,	// (0x0005460a) cale_month_week_pane_t1_ParamLimits

0x76fa,	// (0x00054621) cale_month_week_pane_t2_ParamLimits

0x7711,	// (0x00054638) cale_month_week_pane_t3_ParamLimits

0x7728,	// (0x0005464f) cale_month_week_pane_t4_ParamLimits

0x773f,	// (0x00054666) cale_month_week_pane_t5_ParamLimits

0x775a,	// (0x00054681) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0005c1ec) cale_month_week_pane_t_ParamLimits

0x783f,	// (0x00054766) cell_cale_month_pane_g1_ParamLimits

0x5d04,	// (0x00052c2b) main_cale_event_viewer_pane

0x00f2,	// (0x0004d019) listscroll_cale_event_viewer_pane

0x4265,	// (0x0005118c) list_cale_ev_pane

0x426d,	// (0x00051194) scroll_pane_cp023

0x4279,	// (0x000511a0) field_cale_ev_pane_ParamLimits

0x4279,	// (0x000511a0) field_cale_ev_pane

0x4297,	// (0x000511be) field_cale_ev_content_pane_ParamLimits

0x4297,	// (0x000511be) field_cale_ev_content_pane

0x42a3,	// (0x000511ca) field_cale_ev_pane_g1_ParamLimits

0x42a3,	// (0x000511ca) field_cale_ev_pane_g1

0x42af,	// (0x000511d6) field_cale_ev_pane_g2_ParamLimits

0x42af,	// (0x000511d6) field_cale_ev_pane_g2

0x42c7,	// (0x000511ee) field_cale_ev_pane_g3_ParamLimits

0x42c7,	// (0x000511ee) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x0005c62d) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x0005c62d) field_cale_ev_pane_g

0x42df,	// (0x00051206) field_cale_ev_pane_t1_ParamLimits

0x42df,	// (0x00051206) field_cale_ev_pane_t1

0x42f6,	// (0x0005121d) field_cale_ev_content_pane_t1_ParamLimits

0x42f6,	// (0x0005121d) field_cale_ev_content_pane_t1

0x2b35,	// (0x0004fa5c) bg_button_pane_cp01

0x1eeb,	// (0x0004ee12) listscroll_cale_week_pane_ParamLimits

0x62e8,	// (0x0005320f) popup_toolbar_window_cp01

0x2019,	// (0x0004ef40) listscroll_cale_week_pane_t1_ParamLimits

0x1eeb,	// (0x0004ee12) listscroll_cale_day_pane_ParamLimits

0x62e8,	// (0x0005320f) popup_toolbar_window_cp02

0x2019,	// (0x0004ef40) listscroll_cale_day_pane_t1_ParamLimits

0x1eeb,	// (0x0004ee12) main_cale_month_pane_ParamLimits

0x8cbc,	// (0x00055be3) popup_toolbar_window_cp03_ParamLimits

0x8cbc,	// (0x00055be3) popup_toolbar_window_cp03

0x85e8,	// (0x0005550f) main_image_pane_g2_ParamLimits

0x85e8,	// (0x0005550f) main_image_pane_g2

0x85f4,	// (0x0005551b) main_image_pane_g3_ParamLimits

0x85f4,	// (0x0005551b) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0005c41e) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0005c41e) main_image_pane_g

0x2c4f,	// (0x0004fb76) main_image_pane_t1_ParamLimits

0x8600,	// (0x00055527) main_image_pane_t2_ParamLimits

0x8600,	// (0x00055527) main_image_pane_t2

0x8612,	// (0x00055539) main_image_pane_t3_ParamLimits

0x8612,	// (0x00055539) main_image_pane_t3

0x8624,	// (0x0005554b) main_image_pane_t4_ParamLimits

0x8624,	// (0x0005554b) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0005c425) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0005c425) main_image_pane_t

0x8636,	// (0x0005555d) popup_image_details_window_cp01

0x8640,	// (0x00055567) popup_toobar_trans_pane_cp01_ParamLimits

0x8640,	// (0x00055567) popup_toobar_trans_pane_cp01

0x8c0c,	// (0x00055b33) popup_image_details_window_ParamLimits

0x8c0c,	// (0x00055b33) popup_image_details_window

0x8c1a,	// (0x00055b41) popup_image_focus_window

0x8f57,	// (0x00055e7e) camera2_autofocus_pane_ParamLimits

0x8f57,	// (0x00055e7e) camera2_autofocus_pane

0x00f2,	// (0x0004d019) bg_popup_sub_pane_cp06

0x4314,	// (0x0005123b) popup_image_focus_window_g1

0x431c,	// (0x00051243) popup_image_focus_window_g2

0x4324,	// (0x0005124b) popup_image_focus_window_g3

0x432c,	// (0x00051253) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x0005c634) popup_image_focus_window_g

0x4334,	// (0x0005125b) popup_image_focus_window_t1

0x4342,	// (0x00051269) popup_image_focus_window_t2

0x4352,	// (0x00051279) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x0005c63d) popup_image_focus_window_t

0x4360,	// (0x00051287) camera2_autofocus_pane_g1

0x3810,	// (0x00050737) bg_tb_trans_pane_cp01

0x436e,	// (0x00051295) popup_image_details_window_g1

0x4381,	// (0x000512a8) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0005c64f) popup_image_details_window_g

0x43aa,	// (0x000512d1) popup_image_details_window_t1

0x43bc,	// (0x000512e3) popup_image_details_window_t2

0x43d5,	// (0x000512fc) popup_image_details_window_t3

0x43e9,	// (0x00051310) popup_image_details_window_t4

0x4404,	// (0x0005132b) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0005c656) popup_image_details_window_t

0x1ed7,	// (0x0004edfe) bg_calc_paper_pane_ParamLimits

0x5d04,	// (0x00052c2b) grid_highlight_pane_cp013

0x606f,	// (0x00052f96) list_calc_pane_ParamLimits

0x6081,	// (0x00052fa8) scroll_pane_cp024

0x1eeb,	// (0x0004ee12) bg_calc_display_pane_ParamLimits

0x6089,	// (0x00052fb0) calc_display_pane_t1_ParamLimits

0x609e,	// (0x00052fc5) calc_display_pane_t2_ParamLimits

0x60b3,	// (0x00052fda) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0005c086) calc_display_pane_t_ParamLimits

0x618f,	// (0x000530b6) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0005c0a3) cell_calc_pane_g

0x6198,	// (0x000530bf) cell_calc_pane_t1

0x1f4a,	// (0x0004ee71) grid_highlight_pane_cp02_ParamLimits

0x1f60,	// (0x0004ee87) toolbar_button_pane_cp01_ParamLimits

0x1f60,	// (0x0004ee87) toolbar_button_pane_cp01

0x2c94,	// (0x0004fbbb) temp_image_control_pane_ParamLimits

0x2c94,	// (0x0004fbbb) temp_image_control_pane

0x8b84,	// (0x00055aab) main_mp3_pane

0x441e,	// (0x00051345) temp_image_control_pane_g1_ParamLimits

0x441e,	// (0x00051345) temp_image_control_pane_g1

0x442c,	// (0x00051353) temp_image_control_pane_g2_ParamLimits

0x442c,	// (0x00051353) temp_image_control_pane_g2

0x443e,	// (0x00051365) temp_image_control_pane_g3_ParamLimits

0x443e,	// (0x00051365) temp_image_control_pane_g3

0x95a9,	// (0x000564d0) temp_image_control_pane_g4_ParamLimits

0x95a9,	// (0x000564d0) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0005c661) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0005c661) temp_image_control_pane_g

0x441e,	// (0x00051345) main_mp3_pane_g1

0x95ba,	// (0x000564e1) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0005c66a) main_mp3_pane_g

0x4481,	// (0x000513a8) main_mp3_pane_t1

0x2090,	// (0x0004efb7) main_camera_pane_g8_ParamLimits

0x2090,	// (0x0004efb7) main_camera_pane_g8

0x6921,	// (0x00053848) main_video_pane_g7_ParamLimits

0x6921,	// (0x00053848) main_video_pane_g7

0x909f,	// (0x00055fc6) main_camera2_pane_t7_ParamLimits

0x909f,	// (0x00055fc6) main_camera2_pane_t7

0x21d8,	// (0x0004f0ff) scroll_pane_cp025_ParamLimits

0x21d8,	// (0x0004f0ff) scroll_pane_cp025

0x21ec,	// (0x0004f113) scroll_pane_cp026_ParamLimits

0x21ec,	// (0x0004f113) scroll_pane_cp026

0x21fb,	// (0x0004f122) wml_content_pane_ParamLimits

0x5d04,	// (0x00052c2b) main_touch_calib_pane

0x965e,	// (0x00056585) main_touch_calib_pane_g1

0x966a,	// (0x00056591) main_touch_calib_pane_g2

0x9676,	// (0x0005659d) main_touch_calib_pane_g3

0x9682,	// (0x000565a9) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0005c688) main_touch_calib_pane_g

0x968e,	// (0x000565b5) main_touch_calib_pane_t1

0x96a5,	// (0x000565cc) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0005c691) main_touch_calib_pane_t

0x28ff,	// (0x0004f826) mup_progress_pane_cp02

0x291e,	// (0x0004f845) navi_pane_g1

0x2980,	// (0x0004f8a7) navi_pane_mp_t3

0x8b84,	// (0x00055aab) main_mp3_pane_ParamLimits

0x8cfa,	// (0x00055c21) navi_pane_ParamLimits

0x441e,	// (0x00051345) main_mp3_pane_g1_ParamLimits

0x95ba,	// (0x000564e1) main_mp3_pane_g2_ParamLimits

0x95c6,	// (0x000564ed) main_mp3_pane_g3_ParamLimits

0x95c6,	// (0x000564ed) main_mp3_pane_g3

0x95d2,	// (0x000564f9) main_mp3_pane_g4_ParamLimits

0x95d2,	// (0x000564f9) main_mp3_pane_g4

0x444e,	// (0x00051375) main_mp3_pane_g5_ParamLimits

0x444e,	// (0x00051375) main_mp3_pane_g5

0x445c,	// (0x00051383) main_mp3_pane_g6_ParamLimits

0x445c,	// (0x00051383) main_mp3_pane_g6

0x4469,	// (0x00051390) main_mp3_pane_g7_ParamLimits

0x4469,	// (0x00051390) main_mp3_pane_g7

0x4475,	// (0x0005139c) main_mp3_pane_g8_ParamLimits

0x4475,	// (0x0005139c) main_mp3_pane_g8

0xf743,	// (0x0005c66a) main_mp3_pane_g_ParamLimits

0x95de,	// (0x00056505) main_mp3_pane_t2

0x95ee,	// (0x00056515) main_mp3_pane_t3

0x448f,	// (0x000513b6) main_mp3_pane_t4

0x449d,	// (0x000513c4) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0005c67b) main_mp3_pane_t

0x44ab,	// (0x000513d2) mup_progress_pane_cp01

0x596a,	// (0x00052891) aid_zoom_text_secondary2

0x4265,	// (0x0005118c) list_cale_ev2_pane

0x426d,	// (0x00051194) scroll_pane_cp023_ParamLimits

0x96fa,	// (0x00056621) field_cale_ev2_pane_ParamLimits

0x96fa,	// (0x00056621) field_cale_ev2_pane

0x0538,	// (0x0004d45f) field_cale_ev2_pane_g1_ParamLimits

0x0538,	// (0x0004d45f) field_cale_ev2_pane_g1

0x0544,	// (0x0004d46b) field_cale_ev2_pane_g2_ParamLimits

0x0544,	// (0x0004d46b) field_cale_ev2_pane_g2

0x055c,	// (0x0004d483) field_cale_ev2_pane_g3_ParamLimits

0x055c,	// (0x0004d483) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0005c69c) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0005c69c) field_cale_ev2_pane_g

0x9723,	// (0x0005664a) field_cale_ev2_pane_t1_ParamLimits

0x9723,	// (0x0005664a) field_cale_ev2_pane_t1

0x973a,	// (0x00056661) field_cale_ev2_pane_t2_ParamLimits

0x973a,	// (0x00056661) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0005c6a5) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0005c6a5) field_cale_ev2_pane_t

0x84c8,	// (0x000553ef) main_postcard_pane_g5_ParamLimits

0x84c8,	// (0x000553ef) main_postcard_pane_g5

0x84d6,	// (0x000553fd) main_postcard_pane_g6_ParamLimits

0x84d6,	// (0x000553fd) main_postcard_pane_g6

0x676b,	// (0x00053692) camera2_autofocus_pane_cp_ParamLimits

0x676b,	// (0x00053692) camera2_autofocus_pane_cp

0x8b84,	// (0x00055aab) main_mup3_pane

0x976f,	// (0x00056696) main_mup3_pane_g1_ParamLimits

0x976f,	// (0x00056696) main_mup3_pane_g1

0x9790,	// (0x000566b7) main_mup3_pane_g2_ParamLimits

0x9790,	// (0x000566b7) main_mup3_pane_g2

0x9808,	// (0x0005672f) main_mup3_pane_g3_ParamLimits

0x9808,	// (0x0005672f) main_mup3_pane_g3

0x984b,	// (0x00056772) main_mup3_pane_g4_ParamLimits

0x984b,	// (0x00056772) main_mup3_pane_g4

0x988e,	// (0x000567b5) main_mup3_pane_g5_ParamLimits

0x988e,	// (0x000567b5) main_mup3_pane_g5

0x98d1,	// (0x000567f8) main_mup3_pane_g6_ParamLimits

0x98d1,	// (0x000567f8) main_mup3_pane_g6

0x44b3,	// (0x000513da) main_mup3_pane_g7_ParamLimits

0x44b3,	// (0x000513da) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0005c6b5) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0005c6b5) main_mup3_pane_g

0x9947,	// (0x0005686e) main_mup3_pane_t1_ParamLimits

0x9947,	// (0x0005686e) main_mup3_pane_t1

0x99b6,	// (0x000568dd) main_mup3_pane_t2_ParamLimits

0x99b6,	// (0x000568dd) main_mup3_pane_t2

0x9a7f,	// (0x000569a6) main_mup3_pane_t4_ParamLimits

0x9a7f,	// (0x000569a6) main_mup3_pane_t4

0x9acd,	// (0x000569f4) main_mup3_pane_t5_ParamLimits

0x9acd,	// (0x000569f4) main_mup3_pane_t5

0x9b7d,	// (0x00056aa4) main_mup3_pane_t6_ParamLimits

0x9b7d,	// (0x00056aa4) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0005c6c6) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0005c6c6) main_mup3_pane_t

0x9c29,	// (0x00056b50) mup3_progress_pane_ParamLimits

0x9c29,	// (0x00056b50) mup3_progress_pane

0x9ca7,	// (0x00056bce) popup_mup3_control_window_ParamLimits

0x9ca7,	// (0x00056bce) popup_mup3_control_window

0x44c1,	// (0x000513e8) popup_mup3_text_window

0x9cc0,	// (0x00056be7) mup3_progress_pane_t1

0x9cdf,	// (0x00056c06) mup3_progress_pane_t2

0x44c9,	// (0x000513f0) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0005c6d3) mup3_progress_pane_t

0x44e6,	// (0x0005140d) mup_progress_pane_cp03

0x00f2,	// (0x0004d019) bg_tb_trans_pane_cp04

0x9cfe,	// (0x00056c25) mup3_volume_pane

0x9d06,	// (0x00056c2d) popup_mup3_control_window_g1

0x9d0f,	// (0x00056c36) mup3_volume_pane_g1

0x9d18,	// (0x00056c3f) mup3_volume_pane_g2

0x9d21,	// (0x00056c48) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0005c6da) mup3_volume_pane_g

0x00f2,	// (0x0004d019) bg_tb_trans_pane_cp03

0x44f6,	// (0x0005141d) popup_mup3_text_window_g1

0x44fe,	// (0x00051425) popup_mup3_text_window_t1

0x1f33,	// (0x0004ee5a) list_calc_item_pane_g1_ParamLimits

0x3f2d,	// (0x00050e54) mup_volume_pane_cp_g1

0x96bc,	// (0x000565e3) main_touch_calib_pane_t3

0x96d0,	// (0x000565f7) main_touch_calib_pane_t4

0x96e4,	// (0x0005660b) main_touch_calib_pane_t5

0x5a45,	// (0x0005296c) aid_cell_size_toolbar2

0x5a4d,	// (0x00052974) aid_popup3_width_pane

0x5962,	// (0x00052889) aid_zoom_text_msg_primary

0x6742,	// (0x00053669) vorec_t7

0x1ef7,	// (0x0004ee1e) bg_calc_paper_pane_g1_ParamLimits

0x1f0f,	// (0x0004ee36) bg_calc_paper_pane_g2_ParamLimits

0x1f03,	// (0x0004ee2a) bg_calc_paper_pane_g3_ParamLimits

0x1f27,	// (0x0004ee4e) bg_calc_paper_pane_g4_ParamLimits

0x1f1b,	// (0x0004ee42) bg_calc_paper_pane_g5_ParamLimits

0x60f2,	// (0x00053019) bg_calc_paper_pane_g6_ParamLimits

0x6103,	// (0x0005302a) bg_calc_paper_pane_g7_ParamLimits

0x6114,	// (0x0005303b) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0005c08d) bg_calc_paper_pane_g_ParamLimits

0x6125,	// (0x0005304c) calc_bg_paper_pane_g9_ParamLimits

0x6852,	// (0x00053779) image_qvga_pane_ParamLimits

0x6852,	// (0x00053779) image_qvga_pane

0x1e18,	// (0x0004ed3f) bg_popup_sub_pane_cp04_ParamLimits

0x2bcb,	// (0x0004faf2) popup_mup_playback_window_g1_ParamLimits

0x2bd7,	// (0x0004fafe) popup_mup_playback_window_t1_ParamLimits

0x2bec,	// (0x0004fb13) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0005c419) popup_mup_playback_window_t_ParamLimits

0x91ce,	// (0x000560f5) main_mup2_pane_g3_ParamLimits

0x91ce,	// (0x000560f5) main_mup2_pane_g3

0x6b61,	// (0x00053a88) popup_toolbar_window_cp04

0x2fce,	// (0x0004fef5) popup_call2_audio_second_window_g3_ParamLimits

0x2fce,	// (0x0004fef5) popup_call2_audio_second_window_g3

0x33d8,	// (0x000502ff) popup_call2_audio_first_window_g4_ParamLimits

0x33d8,	// (0x000502ff) popup_call2_audio_first_window_g4

0x3a71,	// (0x00050998) popup_call2_audio_in_window_g4_ParamLimits

0x3a71,	// (0x00050998) popup_call2_audio_in_window_g4

0x85db,	// (0x00055502) aid_area_sk_bg_cut_ParamLimits

0x85db,	// (0x00055502) aid_area_sk_bg_cut

0x2c01,	// (0x0004fb28) aid_area_sk_bg_cut_2_ParamLimits

0x2c01,	// (0x0004fb28) aid_area_sk_bg_cut_2

0x954f,	// (0x00056476) aid_placing_details_win

0x9557,	// (0x0005647e) aid_placing_details_win_2

0x4360,	// (0x00051287) camera2_autofocus_pane_g1_ParamLimits

0x5c9a,	// (0x00052bc1) popup_fixed_preview_cale_window_ParamLimits

0x5c9a,	// (0x00052bc1) popup_fixed_preview_cale_window

0x29e1,	// (0x0004f908) navi_slider_pane_g3

0x29d8,	// (0x0004f8ff) navi_slider_pane_g4

0x29cf,	// (0x0004f8f6) navi_slider_pane_g5

0x29e1,	// (0x0004f908) navi_slider_pane_g6

0x7e3a,	// (0x00054d61) navi_slider_pane_g7

0x2b02,	// (0x0004fa29) mup_scale_pane_g3

0x2b0b,	// (0x0004fa32) mup_scale_pane_g4

0x2b14,	// (0x0004fa3b) mup_scale_pane_g5

0x827b,	// (0x000551a2) mup_scale_pane_g6

0x8284,	// (0x000551ab) mup_scale_pane_g7

0x29e1,	// (0x0004f908) cams2_slider_pane_g3

0x3faf,	// (0x00050ed6) cams2_slider_pane_g4

0x94a7,	// (0x000563ce) cams2_slider_pane_g5

0x29e1,	// (0x0004f908) cams2_slider_pane_g6

0x94af,	// (0x000563d6) cams2_slider_pane_g7

0x41eb,	// (0x00051112) camera2_autofocus_pane_cp_g1

0x450c,	// (0x00051433) bg_popup_preview_window_pane_cp02_ParamLimits

0x450c,	// (0x00051433) bg_popup_preview_window_pane_cp02

0x4518,	// (0x0005143f) list_fp_cale_pane_ParamLimits

0x4518,	// (0x0005143f) list_fp_cale_pane

0x4524,	// (0x0005144b) popup_fixed_preview_cale_window_t1_ParamLimits

0x4524,	// (0x0005144b) popup_fixed_preview_cale_window_t1

0x9d2a,	// (0x00056c51) popup_fixed_preview_cale_window_t2_ParamLimits

0x9d2a,	// (0x00056c51) popup_fixed_preview_cale_window_t2

0x9d3f,	// (0x00056c66) popup_fixed_preview_cale_window_t3_ParamLimits

0x9d3f,	// (0x00056c66) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0005c6e1) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0005c6e1) popup_fixed_preview_cale_window_t

0x9d54,	// (0x00056c7b) list_single_fp_cale_pane_ParamLimits

0x9d54,	// (0x00056c7b) list_single_fp_cale_pane

0x4542,	// (0x00051469) list_single_fp_cale_pane_g1_ParamLimits

0x4542,	// (0x00051469) list_single_fp_cale_pane_g1

0x454e,	// (0x00051475) list_single_fp_cale_pane_g2_ParamLimits

0x454e,	// (0x00051475) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0005c6e8) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0005c6e8) list_single_fp_cale_pane_g

0x4567,	// (0x0005148e) list_single_fp_cale_pane_t1_ParamLimits

0x4567,	// (0x0005148e) list_single_fp_cale_pane_t1

0x4579,	// (0x000514a0) list_single_fp_cale_pane_t2_ParamLimits

0x4579,	// (0x000514a0) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0005c6ef) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0005c6ef) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5d04,	// (0x00052c2b) main_dialer_pane

0x9d66,	// (0x00056c8d) aid_cell_size_keypad

0x9d70,	// (0x00056c97) dialer_ne_pane

0x9d7a,	// (0x00056ca1) grid_dialer_command_1_pane

0x9d82,	// (0x00056ca9) grid_dialer_command_2_pane

0x9d8a,	// (0x00056cb1) grid_dialer_keypad_pane

0x9d9c,	// (0x00056cc3) bg_popup_call_pane_cp06_ParamLimits

0x9d9c,	// (0x00056cc3) bg_popup_call_pane_cp06

0x9da8,	// (0x00056ccf) dialer_ne_clear_pane_ParamLimits

0x9da8,	// (0x00056ccf) dialer_ne_clear_pane

0x45ac,	// (0x000514d3) dialer_ne_pane_g1

0x45b4,	// (0x000514db) dialer_ne_pane_t1_ParamLimits

0x45b4,	// (0x000514db) dialer_ne_pane_t1

0x9db4,	// (0x00056cdb) dialer_ne_pane_t2_ParamLimits

0x9db4,	// (0x00056cdb) dialer_ne_pane_t2

0x9dd1,	// (0x00056cf8) dialer_ne_pane_t3_ParamLimits

0x9dd1,	// (0x00056cf8) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x0005c6f4) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x0005c6f4) dialer_ne_pane_t

0x9df5,	// (0x00056d1c) dialer_ne_pane_t3_copy1_ParamLimits

0x9df5,	// (0x00056d1c) dialer_ne_pane_t3_copy1

0x9e19,	// (0x00056d40) cell_dialer_keypad_pane_ParamLimits

0x9e19,	// (0x00056d40) cell_dialer_keypad_pane

0x9e30,	// (0x00056d57) cell_dialer_command_1_pane_ParamLimits

0x9e30,	// (0x00056d57) cell_dialer_command_1_pane

0x9e46,	// (0x00056d6d) cell_dialer_command_2_pane_ParamLimits

0x9e46,	// (0x00056d6d) cell_dialer_command_2_pane

0x45c6,	// (0x000514ed) bg_button_pane_cp02_ParamLimits

0x45c6,	// (0x000514ed) bg_button_pane_cp02

0x9e55,	// (0x00056d7c) cell_dialer_keypad_pane_g1_ParamLimits

0x9e55,	// (0x00056d7c) cell_dialer_keypad_pane_g1

0x45c6,	// (0x000514ed) bg_button_pane_cp03_ParamLimits

0x45c6,	// (0x000514ed) bg_button_pane_cp03

0x9e6a,	// (0x00056d91) cell_dialer_command_1_pane_g1_ParamLimits

0x9e6a,	// (0x00056d91) cell_dialer_command_1_pane_g1

0x45d2,	// (0x000514f9) bg_button_pane_cp04

0x9e7e,	// (0x00056da5) cell_dialer_command_2_pane_g1

0x29be,	// (0x0004f8e5) bg_button_pane_cp06

0x45da,	// (0x00051501) dialer_ne_clear_pane_g1

0x7d7d,	// (0x00054ca4) navi_pane_g2

0x7dab,	// (0x00054cd2) navi_pane_g3

0x0002,

0xf3f5,	// (0x0005c31c) navi_pane_g

0x7dd6,	// (0x00054cfd) navi_pane_mv_g2

0x7dfd,	// (0x00054d24) navi_pane_mv_g5

0x7e05,	// (0x00054d2c) navi_pane_mv_t1

0x1eeb,	// (0x0004ee12) main_clock2_pane

0x9eaf,	// (0x00056dd6) main_clock2_list_pane_ParamLimits

0x9eaf,	// (0x00056dd6) main_clock2_list_pane

0x9ed7,	// (0x00056dfe) main_clock2_pane_t1_ParamLimits

0x9ed7,	// (0x00056dfe) main_clock2_pane_t1

0x9ef9,	// (0x00056e20) main_clock2_pane_t2_ParamLimits

0x9ef9,	// (0x00056e20) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0005c6fb) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0005c6fb) main_clock2_pane_t

0x9f54,	// (0x00056e7b) popup_clock_analogue_window_cp03_ParamLimits

0x9f54,	// (0x00056e7b) popup_clock_analogue_window_cp03

0x9f72,	// (0x00056e99) popup_clock_digital_window_cp02_ParamLimits

0x9f72,	// (0x00056e99) popup_clock_digital_window_cp02

0x9fdf,	// (0x00056f06) main_clock2_list_single_pane_ParamLimits

0x9fdf,	// (0x00056f06) main_clock2_list_single_pane

0x29be,	// (0x0004f8e5) list_highlight_pane_cp05

0x45e2,	// (0x00051509) main_clock2_list_single_pane_t1

0x6b61,	// (0x00053a88) popup_toolbar_window_cp04_ParamLimits

0x9579,	// (0x000564a0) camera2_autofocus_pane_g2_ParamLimits

0x9579,	// (0x000564a0) camera2_autofocus_pane_g2

0x9585,	// (0x000564ac) camera2_autofocus_pane_g3_ParamLimits

0x9585,	// (0x000564ac) camera2_autofocus_pane_g3

0x9591,	// (0x000564b8) camera2_autofocus_pane_g4_ParamLimits

0x9591,	// (0x000564b8) camera2_autofocus_pane_g4

0x959d,	// (0x000564c4) camera2_autofocus_pane_g5_ParamLimits

0x959d,	// (0x000564c4) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0005c644) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0005c644) camera2_autofocus_pane_g

0x974f,	// (0x00056676) camera2_autofocus_pane_cp_g2

0x9757,	// (0x0005667e) camera2_autofocus_pane_cp_g3

0x975f,	// (0x00056686) camera2_autofocus_pane_cp_g4

0x9767,	// (0x0005668e) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x0005c6aa) camera2_autofocus_pane_cp_g

0x9d94,	// (0x00056cbb) popup_dialer_spcha_window

0x00f2,	// (0x0004d019) bg_popup_sub_pane_cp07

0x45f0,	// (0x00051517) list_spcha_pane

0x45f8,	// (0x0005151f) list_single_spcha_pane_ParamLimits

0x45f8,	// (0x0005151f) list_single_spcha_pane

0x00f2,	// (0x0004d019) list_highlight_pane_cp06

0x4609,	// (0x00051530) list_single_spcha_pane_t1

0x3801,	// (0x00050728) popup_call2_audio_out_window_g4_ParamLimits

0x3801,	// (0x00050728) popup_call2_audio_out_window_g4

0x5d04,	// (0x00052c2b) main_imed2_pane

0x8c22,	// (0x00055b49) popup_imed_adjust2_window

0x8c35,	// (0x00055b5c) popup_imed_trans_window_ParamLimits

0x8c35,	// (0x00055b5c) popup_imed_trans_window

0x4018,	// (0x00050f3f) popup_blid_sat_info2_window_t1

0x4026,	// (0x00050f4d) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0005c5d9) popup_blid_sat_info2_window_t

0xa089,	// (0x00056fb0) aid_size_cell_colour_35

0xa0a3,	// (0x00056fca) aid_size_cell_colour_112

0xa0ba,	// (0x00056fe1) aid_size_cell_effect

0x3810,	// (0x00050737) bg_tb_trans_pane_cp02

0x381e,	// (0x00050745) heading_imed_pane

0xa0d4,	// (0x00056ffb) listscroll_imed_pane

0x4617,	// (0x0005153e) heading_imed_pane_g1

0x461f,	// (0x00051546) heading_imed_pane_t1

0x462d,	// (0x00051554) grid_imed_colour_35_pane_ParamLimits

0x462d,	// (0x00051554) grid_imed_colour_35_pane

0xa0e0,	// (0x00057007) grid_imed_effect_pane

0x4644,	// (0x0005156b) list_imed_aspect_pane

0xa0f0,	// (0x00057017) scroll_pane_cp027_ParamLimits

0xa0f0,	// (0x00057017) scroll_pane_cp027

0xa0fc,	// (0x00057023) cell_imed_effect_pane_ParamLimits

0xa0fc,	// (0x00057023) cell_imed_effect_pane

0x464c,	// (0x00051573) cell_imed_colour_pane_ParamLimits

0x464c,	// (0x00051573) cell_imed_colour_pane

0x468e,	// (0x000515b5) cell_imed_colour_pane_g1_ParamLimits

0x468e,	// (0x000515b5) cell_imed_colour_pane_g1

0x469f,	// (0x000515c6) hgihlgiht_grid_pane_cp016_ParamLimits

0x469f,	// (0x000515c6) hgihlgiht_grid_pane_cp016

0xa114,	// (0x0005703b) cell_imed_effect_pane_g1

0xa11c,	// (0x00057043) grid_highlight_pane_cp017

0x46b0,	// (0x000515d7) list_imed_single_pane_ParamLimits

0x46b0,	// (0x000515d7) list_imed_single_pane

0x00f2,	// (0x0004d019) list_highlight_pane_cp07

0x46c5,	// (0x000515ec) list_imed_aspect_pane_comp1_t1

0x3dd2,	// (0x00050cf9) bg_tb_trans_pane_cp05

0x46e7,	// (0x0005160e) popup_imed_adjust2_window_g1

0x470e,	// (0x00051635) popup_imed_adjust2_window_t1

0x4726,	// (0x0005164d) slider_imed_adjust_pane

0x473a,	// (0x00051661) slider_imed_adjust_pane_g1

0x474a,	// (0x00051671) slider_imed_adjust_pane_g2

0x475a,	// (0x00051681) slider_imed_adjust_pane_g3

0x476b,	// (0x00051692) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0005c718) slider_imed_adjust_pane_g

0xa125,	// (0x0005704c) aid_size_cell_clipart2

0xa131,	// (0x00057058) grid_imed_clipart_pane

0x477c,	// (0x000516a3) scroll_pane_cp031

0xa13b,	// (0x00057062) cell_imed_clipart_pane_ParamLimits

0xa13b,	// (0x00057062) cell_imed_clipart_pane

0xa15d,	// (0x00057084) cell_imed_clipart_pane_g1

0x00f2,	// (0x0004d019) grid_highlight_pane_cp014

0x9ebb,	// (0x00056de2) main_clock2_pane_g1_ParamLimits

0x9ebb,	// (0x00056de2) main_clock2_pane_g1

0x9f8a,	// (0x00056eb1) aid_call2_pane_cp10

0x9f9c,	// (0x00056ec3) aid_call_pane_cp10

0x28f3,	// (0x0004f81a) popup_clock_analogue_window_cp10_g1

0x28f3,	// (0x0004f81a) popup_clock_analogue_window_cp10_g2

0x9fae,	// (0x00056ed5) popup_clock_analogue_window_cp10_g3

0x9fae,	// (0x00056ed5) popup_clock_analogue_window_cp10_g4

0x28f3,	// (0x0004f81a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0005c706) popup_clock_analogue_window_cp10_g

0x9fc0,	// (0x00056ee7) popup_clock_analogue_window_cp10_t1

0x9ff1,	// (0x00056f18) clock_digital_number_pane_cp10_ParamLimits

0x9ff1,	// (0x00056f18) clock_digital_number_pane_cp10

0xa009,	// (0x00056f30) clock_digital_number_pane_cp11_ParamLimits

0xa009,	// (0x00056f30) clock_digital_number_pane_cp11

0xa021,	// (0x00056f48) clock_digital_number_pane_cp12_ParamLimits

0xa021,	// (0x00056f48) clock_digital_number_pane_cp12

0xa039,	// (0x00056f60) clock_digital_number_pane_cp13_ParamLimits

0xa039,	// (0x00056f60) clock_digital_number_pane_cp13

0xa051,	// (0x00056f78) clock_digital_separator_pane_cp10_ParamLimits

0xa051,	// (0x00056f78) clock_digital_separator_pane_cp10

0xa069,	// (0x00056f90) popup_clock_digital_window_cp02_t1_ParamLimits

0xa069,	// (0x00056f90) popup_clock_digital_window_cp02_t1

0x1e10,	// (0x0004ed37) clock_digital_number_pane_cp10_g1

0x1e10,	// (0x0004ed37) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0005c721) clock_digital_number_pane_cp10_g

0x1e10,	// (0x0004ed37) clock_digital_separator_pane_cp10_g1

0x1e10,	// (0x0004ed37) clock_digital_separator_pane_g2_cp10

0x298e,	// (0x0004f8b5) navi_pane_vded_g4

0x2997,	// (0x0004f8be) navi_pane_vded_g5

0x29a0,	// (0x0004f8c7) navi_pane_vded_t1

0x5d04,	// (0x00052c2b) main_vded_pane

0xa166,	// (0x0005708d) main_vded_pane_g1

0xa172,	// (0x00057099) main_vded_pane_g2

0xa17c,	// (0x000570a3) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0005c726) main_vded_pane_g

0xa186,	// (0x000570ad) main_vded_pane_t1

0xa194,	// (0x000570bb) main_vded_pane_t2

0x0001,

0xf806,	// (0x0005c72d) main_vded_pane_t

0xa1a2,	// (0x000570c9) vded_slider_pane

0xa1ac,	// (0x000570d3) vded_video_pane

0x4784,	// (0x000516ab) vded_video_pane_g1

0xa1b6,	// (0x000570dd) vded_video_pane_g2

0x41eb,	// (0x00051112) vded_video_pane_g3

0x0002,

0xf80b,	// (0x0005c732) vded_video_pane_g

0x478e,	// (0x000516b5) vded_slider_pane_g1

0x3f2d,	// (0x00050e54) vded_slider_pane_g2

0x4797,	// (0x000516be) vded_slider_pane_g3

0x47a0,	// (0x000516c7) vded_slider_pane_g4

0x47a9,	// (0x000516d0) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0005c739) vded_slider_pane_g

0x9c99,	// (0x00056bc0) mup3_rocker_pane_ParamLimits

0x9c99,	// (0x00056bc0) mup3_rocker_pane

0xa1bf,	// (0x000570e6) mup3_control_keys_pane_g1

0xa1c7,	// (0x000570ee) mup3_control_keys_pane_g2

0xa1cf,	// (0x000570f6) mup3_control_keys_pane_g3

0xa1d7,	// (0x000570fe) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0005c744) mup3_control_keys_pane_g

0x5cc2,	// (0x00052be9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5cc2,	// (0x00052be9) popup_toolbar2_fixed_window_cp01

0x9cb3,	// (0x00056bda) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9cb3,	// (0x00056bda) popup_toolbar2_fixed_window_cp02

0x3140,	// (0x00050067) popup_call2_audio_second_window_t4_ParamLimits

0x3140,	// (0x00050067) popup_call2_audio_second_window_t4

0x366e,	// (0x00050595) popup_call2_audio_first_window_t6_ParamLimits

0x366e,	// (0x00050595) popup_call2_audio_first_window_t6

0x391e,	// (0x00050845) popup_call2_audio_out_window_t6_ParamLimits

0x391e,	// (0x00050845) popup_call2_audio_out_window_t6

0x5d04,	// (0x00052c2b) main_vitu_pane

0xa1e7,	// (0x0005710e) aid_size_cell_itu_ParamLimits

0xa1e7,	// (0x0005710e) aid_size_cell_itu

0xa1f5,	// (0x0005711c) bg_popup_window_pane_cp08_ParamLimits

0xa1f5,	// (0x0005711c) bg_popup_window_pane_cp08

0xa203,	// (0x0005712a) field_vitu_entry_pane_ParamLimits

0xa203,	// (0x0005712a) field_vitu_entry_pane

0xa212,	// (0x00057139) grid_vitu_function_pane_ParamLimits

0xa212,	// (0x00057139) grid_vitu_function_pane

0xa222,	// (0x00057149) grid_vitu_itu_pane_ParamLimits

0xa222,	// (0x00057149) grid_vitu_itu_pane

0xa232,	// (0x00057159) cell_vitu_itu_pane_ParamLimits

0xa232,	// (0x00057159) cell_vitu_itu_pane

0xa247,	// (0x0005716e) cell_vitu_function_pane_ParamLimits

0xa247,	// (0x0005716e) cell_vitu_function_pane

0x3810,	// (0x00050737) bg_popup_sub_pane_cp08_ParamLimits

0x3810,	// (0x00050737) bg_popup_sub_pane_cp08

0xa259,	// (0x00057180) field_vitu_entry_pane_t1_ParamLimits

0xa259,	// (0x00057180) field_vitu_entry_pane_t1

0x47ca,	// (0x000516f1) field_vitu_entry_pane_t2_ParamLimits

0x47ca,	// (0x000516f1) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0005c752) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0005c752) field_vitu_entry_pane_t

0x47e7,	// (0x0005170e) bg_button_pane_cp05_ParamLimits

0x47e7,	// (0x0005170e) bg_button_pane_cp05

0xa275,	// (0x0005719c) cell_vitu_itu_pane_g1

0xa28d,	// (0x000571b4) cell_vitu_itu_pane_t1_ParamLimits

0xa28d,	// (0x000571b4) cell_vitu_itu_pane_t1

0xa29f,	// (0x000571c6) cell_vitu_itu_pane_t2_ParamLimits

0xa29f,	// (0x000571c6) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0005c757) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0005c757) cell_vitu_itu_pane_t

0x47f5,	// (0x0005171c) bg_button_pane_cp07

0xa2d4,	// (0x000571fb) cell_vitu_function_pane_g1

0x5f96,	// (0x00052ebd) main_calc_pane_g1

0x5a81,	// (0x000529a8) aid_visual_content_pane

0x5d04,	// (0x00052c2b) main_vradio_pane

0xa2dd,	// (0x00057204) main_vradio_pane_g1_ParamLimits

0xa2dd,	// (0x00057204) main_vradio_pane_g1

0x47ff,	// (0x00051726) main_vradio_pane_g2_ParamLimits

0x47ff,	// (0x00051726) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0005c75e) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0005c75e) main_vradio_pane_g

0xa2ed,	// (0x00057214) main_vradio_pane_t1_ParamLimits

0xa2ed,	// (0x00057214) main_vradio_pane_t1

0xa2ff,	// (0x00057226) main_vradio_pane_t2_ParamLimits

0xa2ff,	// (0x00057226) main_vradio_pane_t2

0x480c,	// (0x00051733) main_vradio_pane_t3_ParamLimits

0x480c,	// (0x00051733) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0005c763) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0005c763) main_vradio_pane_t

0xa311,	// (0x00057238) vradio_rocker_control_pane_ParamLimits

0xa311,	// (0x00057238) vradio_rocker_control_pane

0xa31d,	// (0x00057244) vradio_station_info_pane_ParamLimits

0xa31d,	// (0x00057244) vradio_station_info_pane

0x4820,	// (0x00051747) vradio_frequency_info_pane_ParamLimits

0x4820,	// (0x00051747) vradio_frequency_info_pane

0x41eb,	// (0x00051112) vradio_station_info_pane_g1

0x482f,	// (0x00051756) vradio_station_info_pane_t1_ParamLimits

0x482f,	// (0x00051756) vradio_station_info_pane_t1

0x4851,	// (0x00051778) vradio_station_info_pane_t2_ParamLimits

0x4851,	// (0x00051778) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0005c76a) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0005c76a) vradio_station_info_pane_t

0x4863,	// (0x0005178a) vradio_tuning_pane

0x486b,	// (0x00051792) vradio_rocker_control_pane_g1

0x4873,	// (0x0005179a) vradio_rocker_control_pane_g2

0x487b,	// (0x000517a2) vradio_rocker_control_pane_g3

0x4883,	// (0x000517aa) vradio_rocker_control_pane_g4

0x488b,	// (0x000517b2) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x0005c76f) vradio_rocker_control_pane_g

0xa32c,	// (0x00057253) vradio_frequency_info_pane_g1

0x4893,	// (0x000517ba) vradio_frequency_info_pane_t1_ParamLimits

0x4893,	// (0x000517ba) vradio_frequency_info_pane_t1

0xa336,	// (0x0005725d) vradio_tuning_pane_g1

0xa33f,	// (0x00057266) vradio_tuning_pane_t1

0x5aca,	// (0x000529f1) area_side_right_pane_ParamLimits

0x5aca,	// (0x000529f1) area_side_right_pane

0x3d99,	// (0x00050cc0) status_small_pane_g1

0x3da1,	// (0x00050cc8) status_small_pane_g2

0x3daa,	// (0x00050cd1) status_small_pane_g3

0x3db3,	// (0x00050cda) status_small_pane_g4

0x0003,

0xf608,	// (0x0005c52f) status_small_pane_g

0x3dbc,	// (0x00050ce3) status_small_pane_t1

0x5d04,	// (0x00052c2b) main_video3_pane

0x48a7,	// (0x000517ce) cams_zoom_vslider_pane

0x48af,	// (0x000517d6) image3_wide_pane_ParamLimits

0x48af,	// (0x000517d6) image3_wide_pane

0x48c9,	// (0x000517f0) image3_wide_small_pane

0x48d5,	// (0x000517fc) main_video3_pane_g1_ParamLimits

0x48d5,	// (0x000517fc) main_video3_pane_g1

0x48f1,	// (0x00051818) main_video3_pane_g2_ParamLimits

0x48f1,	// (0x00051818) main_video3_pane_g2

0x0001,

0xf853,	// (0x0005c77a) main_video3_pane_g_ParamLimits

0xf853,	// (0x0005c77a) main_video3_pane_g

0x490d,	// (0x00051834) main_video3_pane_t1_ParamLimits

0x490d,	// (0x00051834) main_video3_pane_t1

0x4938,	// (0x0005185f) main_video3_pane_t2_ParamLimits

0x4938,	// (0x0005185f) main_video3_pane_t2

0x4963,	// (0x0005188a) main_video3_pane_t3_ParamLimits

0x4963,	// (0x0005188a) main_video3_pane_t3

0x0002,

0xf858,	// (0x0005c77f) main_video3_pane_t_ParamLimits

0xf858,	// (0x0005c77f) main_video3_pane_t

0x4990,	// (0x000518b7) cams_zoom_vslider_pane_g1

0x4999,	// (0x000518c0) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0005c786) cams_zoom_vslider_pane_g

0x49a1,	// (0x000518c8) small_slider_vertical_pane

0x41eb,	// (0x00051112) small_slider_vertical_pane_g1

0x41eb,	// (0x00051112) small_slider_vertical_pane_g2

0x49a9,	// (0x000518d0) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0005c78b) small_slider_vertical_pane_g

0x5d04,	// (0x00052c2b) main_hwr_training_pane

0x49b2,	// (0x000518d9) hwr_training_instruct_pane_ParamLimits

0x49b2,	// (0x000518d9) hwr_training_instruct_pane

0xa34e,	// (0x00057275) hwr_training_navi_pane_ParamLimits

0xa34e,	// (0x00057275) hwr_training_navi_pane

0xa368,	// (0x0005728f) hwr_training_write_pane_ParamLimits

0xa368,	// (0x0005728f) hwr_training_write_pane

0x00f2,	// (0x0004d019) bg_frame_shadow_pane

0x49e9,	// (0x00051910) hwr_training_write_pane_g1

0x49f1,	// (0x00051918) hwr_training_write_pane_g2

0x49f9,	// (0x00051920) hwr_training_write_pane_g3

0x4a01,	// (0x00051928) hwr_training_write_pane_g4

0x4a09,	// (0x00051930) hwr_training_write_pane_g5

0x4a11,	// (0x00051938) hwr_training_write_pane_g6

0x4a19,	// (0x00051940) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0005c792) hwr_training_write_pane_g

0xa3a0,	// (0x000572c7) hwr_training_navi_pane_g1_ParamLimits

0xa3a0,	// (0x000572c7) hwr_training_navi_pane_g1

0xa3b2,	// (0x000572d9) hwr_training_navi_pane_g2_ParamLimits

0xa3b2,	// (0x000572d9) hwr_training_navi_pane_g2

0xa3c4,	// (0x000572eb) hwr_training_navi_pane_g3_ParamLimits

0xa3c4,	// (0x000572eb) hwr_training_navi_pane_g3

0xa3d4,	// (0x000572fb) hwr_training_navi_pane_g4_ParamLimits

0xa3d4,	// (0x000572fb) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0005c7a1) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0005c7a1) hwr_training_navi_pane_g

0xa3ee,	// (0x00057315) hwr_training_navi_pane_t1

0xa3fc,	// (0x00057323) list_single_hwr_training_instruct_pane_ParamLimits

0xa3fc,	// (0x00057323) list_single_hwr_training_instruct_pane

0x4a21,	// (0x00051948) list_single_hwr_training_instruct_pane_t1

0x411a,	// (0x00051041) bg_frame_shadow_pane_g1

0x4a30,	// (0x00051957) bg_frame_shadow_pane_g2

0x4a38,	// (0x0005195f) bg_frame_shadow_pane_g3

0x4a40,	// (0x00051967) bg_frame_shadow_pane_g4

0x4a48,	// (0x0005196f) bg_frame_shadow_pane_g5

0x4a50,	// (0x00051977) bg_frame_shadow_pane_g6

0x4a58,	// (0x0005197f) bg_frame_shadow_pane_g7

0x1fa4,	// (0x0004eecb) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0005c7ac) bg_frame_shadow_pane_g

0x5d04,	// (0x00052c2b) main_video_tele_dialer_pane

0xa421,	// (0x00057348) aid_size_cell_video_keypad_ParamLimits

0xa421,	// (0x00057348) aid_size_cell_video_keypad

0xa431,	// (0x00057358) grid_video_dialer_keypad_pane_ParamLimits

0xa431,	// (0x00057358) grid_video_dialer_keypad_pane

0xa463,	// (0x0005738a) video_down_pane_cp_ParamLimits

0xa463,	// (0x0005738a) video_down_pane_cp

0xa46f,	// (0x00057396) cell_video_dialer_keypad_pane_ParamLimits

0xa46f,	// (0x00057396) cell_video_dialer_keypad_pane

0x4a7c,	// (0x000519a3) bg_button_pane_cp08_ParamLimits

0x4a7c,	// (0x000519a3) bg_button_pane_cp08

0xa484,	// (0x000573ab) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa484,	// (0x000573ab) cell_video_dialer_keypad_pane_g1

0x9c8d,	// (0x00056bb4) mup3_rocker2_pane_ParamLimits

0x9c8d,	// (0x00056bb4) mup3_rocker2_pane

0x41eb,	// (0x00051112) mup3_rocker2_pane_g1

0x8b92,	// (0x00055ab9) main_dialer2_pane

0x5d04,	// (0x00052c2b) main_mp4_pane

0xa4c6,	// (0x000573ed) main_mp4_pane_g1_ParamLimits

0xa4c6,	// (0x000573ed) main_mp4_pane_g1

0xa4d4,	// (0x000573fb) main_mp4_pane_g2_ParamLimits

0xa4d4,	// (0x000573fb) main_mp4_pane_g2

0xa4e2,	// (0x00057409) main_mp4_pane_g3_ParamLimits

0xa4e2,	// (0x00057409) main_mp4_pane_g3

0xa527,	// (0x0005744e) main_mp4_pane_g4_ParamLimits

0xa527,	// (0x0005744e) main_mp4_pane_g4

0xa54f,	// (0x00057476) main_mp4_pane_g5_ParamLimits

0xa54f,	// (0x00057476) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0005c7cc) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0005c7cc) main_mp4_pane_g

0xa59f,	// (0x000574c6) main_mp4_pane_t1_ParamLimits

0xa59f,	// (0x000574c6) main_mp4_pane_t1

0xa5fb,	// (0x00057522) main_mp4_pane_t2_ParamLimits

0xa5fb,	// (0x00057522) main_mp4_pane_t2

0x4a88,	// (0x000519af) main_mp4_pane_t3_ParamLimits

0x4a88,	// (0x000519af) main_mp4_pane_t3

0xa64d,	// (0x00057574) main_mp4_pane_t4_ParamLimits

0xa64d,	// (0x00057574) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0005c7d9) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0005c7d9) main_mp4_pane_t

0xa691,	// (0x000575b8) mp4_progress_pane_ParamLimits

0xa691,	// (0x000575b8) mp4_progress_pane

0xa6db,	// (0x00057602) mp4_rocker_pane_ParamLimits

0xa6db,	// (0x00057602) mp4_rocker_pane

0x4ab0,	// (0x000519d7) mp4_progress_pane_t1

0x4ac9,	// (0x000519f0) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x0005c7e2) mp4_progress_pane_t

0x4ae2,	// (0x00051a09) mup_progress_pane_cp04

0x4c01,	// (0x00051b28) mp4_rocker_pane_g1

0xa6fb,	// (0x00057622) aid_cell_size_keypad2_ParamLimits

0xa6fb,	// (0x00057622) aid_cell_size_keypad2

0xa70b,	// (0x00057632) dialer2_ne_pane_ParamLimits

0xa70b,	// (0x00057632) dialer2_ne_pane

0xa719,	// (0x00057640) grid_dialer2_keypad_pane_ParamLimits

0xa719,	// (0x00057640) grid_dialer2_keypad_pane

0xdde6,	// (0x0005ad0d) bg_popup_call_pane_cp07_ParamLimits

0xdde6,	// (0x0005ad0d) bg_popup_call_pane_cp07

0xa729,	// (0x00057650) dialer2_ne_pane_t1_ParamLimits

0xa729,	// (0x00057650) dialer2_ne_pane_t1

0xa74e,	// (0x00057675) cell_dialer2_keypad_pane_ParamLimits

0xa74e,	// (0x00057675) cell_dialer2_keypad_pane

0x4b00,	// (0x00051a27) bg_button_pane_pane_cp04_ParamLimits

0x4b00,	// (0x00051a27) bg_button_pane_pane_cp04

0xa763,	// (0x0005768a) cell_dialer2_keypad_pane_g1_ParamLimits

0xa763,	// (0x0005768a) cell_dialer2_keypad_pane_g1

0x6a23,	// (0x0005394a) aid_placing_vt_set_content_ParamLimits

0x6a23,	// (0x0005394a) aid_placing_vt_set_content

0x6a4f,	// (0x00053976) aid_placing_vt_set_title_ParamLimits

0x6a4f,	// (0x00053976) aid_placing_vt_set_title

0x5d04,	// (0x00052c2b) main_image3_pane

0xa7fd,	// (0x00057724) area_side_right_pane_cp01_ParamLimits

0xa7fd,	// (0x00057724) area_side_right_pane_cp01

0xa82a,	// (0x00057751) main_image3_pane_g1_ParamLimits

0xa82a,	// (0x00057751) main_image3_pane_g1

0xa838,	// (0x0005775f) main_image3_pane_g2_ParamLimits

0xa838,	// (0x0005775f) main_image3_pane_g2

0xa851,	// (0x00057778) main_image3_pane_g3_ParamLimits

0xa851,	// (0x00057778) main_image3_pane_g3

0xa86a,	// (0x00057791) main_image3_pane_g4_ParamLimits

0xa86a,	// (0x00057791) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x0005c7f1) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x0005c7f1) main_image3_pane_g

0xa883,	// (0x000577aa) main_image3_pane_t1_ParamLimits

0xa883,	// (0x000577aa) main_image3_pane_t1

0xa8a8,	// (0x000577cf) main_image3_pane_t2_ParamLimits

0xa8a8,	// (0x000577cf) main_image3_pane_t2

0xa8c7,	// (0x000577ee) main_image3_pane_t3_ParamLimits

0xa8c7,	// (0x000577ee) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0005c7fa) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0005c7fa) main_image3_pane_t

0xa1f5,	// (0x0005711c) grid_sctrl_middle_pane_cp01_ParamLimits

0xa1f5,	// (0x0005711c) grid_sctrl_middle_pane_cp01

0xa928,	// (0x0005784f) cell_sctrl_middle_pane_cp01_ParamLimits

0xa928,	// (0x0005784f) cell_sctrl_middle_pane_cp01

0xa939,	// (0x00057860) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa939,	// (0x00057860) cell_sctrl_middle_pane_cp01_g1

0x5d04,	// (0x00052c2b) main_call4_pane

0xa946,	// (0x0005786d) aid_size_button_call4_ParamLimits

0xa946,	// (0x0005786d) aid_size_button_call4

0xa976,	// (0x0005789d) call4_windows_pane_ParamLimits

0xa976,	// (0x0005789d) call4_windows_pane

0xa990,	// (0x000578b7) grid_call4_button_pane_ParamLimits

0xa990,	// (0x000578b7) grid_call4_button_pane

0x4b0c,	// (0x00051a33) call4_windows_conf_pane

0x4b23,	// (0x00051a4a) popup_call4_audio_first_window_ParamLimits

0x4b23,	// (0x00051a4a) popup_call4_audio_first_window

0x4b6f,	// (0x00051a96) popup_call4_audio_second_window_ParamLimits

0x4b6f,	// (0x00051a96) popup_call4_audio_second_window

0x4b83,	// (0x00051aaa) popup_call4_audio_wait_window_ParamLimits

0x4b83,	// (0x00051aaa) popup_call4_audio_wait_window

0xa9b4,	// (0x000578db) cell_call4_button_pane_ParamLimits

0xa9b4,	// (0x000578db) cell_call4_button_pane

0xa9d9,	// (0x00057900) bg_button_pane_cp09_ParamLimits

0xa9d9,	// (0x00057900) bg_button_pane_cp09

0xa9e5,	// (0x0005790c) cell_call4_button_pane_g1_ParamLimits

0xa9e5,	// (0x0005790c) cell_call4_button_pane_g1

0xa9f2,	// (0x00057919) cell_call4_button_pane_t1_ParamLimits

0xa9f2,	// (0x00057919) cell_call4_button_pane_t1

0x4bcb,	// (0x00051af2) popup_call4_audio_conf_window_ParamLimits

0x4bcb,	// (0x00051af2) popup_call4_audio_conf_window

0x9cc0,	// (0x00056be7) mup3_progress_pane_t1_ParamLimits

0x9cdf,	// (0x00056c06) mup3_progress_pane_t2_ParamLimits

0x44c9,	// (0x000513f0) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0005c6d3) mup3_progress_pane_t_ParamLimits

0x44e6,	// (0x0005140d) mup_progress_pane_cp03_ParamLimits

0xa1df,	// (0x00057106) mup3_control_keys_pane_g4_copy1

0xa6bf,	// (0x000575e6) mp4_rocker2_pane_ParamLimits

0xa6bf,	// (0x000575e6) mp4_rocker2_pane

0x4be7,	// (0x00051b0e) mp4_rocker2_pane_g1

0x4bdf,	// (0x00051b06) mp4_rocker2_pane_g2

0xaa04,	// (0x0005792b) mp4_rocker2_pane_g3

0xaa0c,	// (0x00057933) mp4_rocker2_pane_g4

0xaa14,	// (0x0005793b) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x0005c803) mp4_rocker2_pane_g

0x5d04,	// (0x00052c2b) main_camera4_pane

0x5d04,	// (0x00052c2b) main_video4_pane

0xa43f,	// (0x00057366) main_video_tele_dialer_pane_t1_ParamLimits

0xa43f,	// (0x00057366) main_video_tele_dialer_pane_t1

0xa451,	// (0x00057378) main_video_tele_dialer_pane_t2_ParamLimits

0xa451,	// (0x00057378) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x0005c7bd) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x0005c7bd) main_video_tele_dialer_pane_t

0xaa34,	// (0x0005795b) cam4_autofocus_pane_ParamLimits

0xaa34,	// (0x0005795b) cam4_autofocus_pane

0xaa4e,	// (0x00057975) cam4_image_uncrop_pane_ParamLimits

0xaa4e,	// (0x00057975) cam4_image_uncrop_pane

0xaa65,	// (0x0005798c) cam4_indicators_pane_ParamLimits

0xaa65,	// (0x0005798c) cam4_indicators_pane

0xaa81,	// (0x000579a8) main_camera4_pane_g1_ParamLimits

0xaa81,	// (0x000579a8) main_camera4_pane_g1

0xaa8d,	// (0x000579b4) main_camera4_pane_g2_ParamLimits

0xaa8d,	// (0x000579b4) main_camera4_pane_g2

0xaa8d,	// (0x000579b4) main_camera4_pane_g3_ParamLimits

0xaa8d,	// (0x000579b4) main_camera4_pane_g3

0xaa99,	// (0x000579c0) main_camera4_pane_g4_ParamLimits

0xaa99,	// (0x000579c0) main_camera4_pane_g4

0xaaa5,	// (0x000579cc) main_camera4_pane_g5_ParamLimits

0xaaa5,	// (0x000579cc) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x0005c80e) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x0005c80e) main_camera4_pane_g

0xaabf,	// (0x000579e6) main_camera4_pane_t1_ParamLimits

0xaabf,	// (0x000579e6) main_camera4_pane_t1

0xab07,	// (0x00057a2e) bg_tb_trans_pane_cp06

0xab1d,	// (0x00057a44) cam4_indicators_pane_g1

0xab2e,	// (0x00057a55) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0005c829) cam4_indicators_pane_g

0xab4c,	// (0x00057a73) cam4_indicators_pane_t1

0xab76,	// (0x00057a9d) main_video4_pane_g1_ParamLimits

0xab76,	// (0x00057a9d) main_video4_pane_g1

0xab82,	// (0x00057aa9) main_video4_pane_g2_ParamLimits

0xab82,	// (0x00057aa9) main_video4_pane_g2

0xab8e,	// (0x00057ab5) main_video4_pane_g3_ParamLimits

0xab8e,	// (0x00057ab5) main_video4_pane_g3

0xab9a,	// (0x00057ac1) main_video4_pane_g4_ParamLimits

0xab9a,	// (0x00057ac1) main_video4_pane_g4

0x0004,

0xf909,	// (0x0005c830) main_video4_pane_g_ParamLimits

0xf909,	// (0x0005c830) main_video4_pane_g

0xabba,	// (0x00057ae1) vid4_indicators_pane_ParamLimits

0xabba,	// (0x00057ae1) vid4_indicators_pane

0xabd9,	// (0x00057b00) video4_image_uncrop_cif_pane_ParamLimits

0xabd9,	// (0x00057b00) video4_image_uncrop_cif_pane

0xabe8,	// (0x00057b0f) video4_image_uncrop_nhd_pane_ParamLimits

0xabe8,	// (0x00057b0f) video4_image_uncrop_nhd_pane

0xaa4e,	// (0x00057975) video4_image_uncrop_vga_pane_ParamLimits

0xaa4e,	// (0x00057975) video4_image_uncrop_vga_pane

0x8b84,	// (0x00055aab) bg_tb_trans_pane_cp07

0xabff,	// (0x00057b26) vid4_indicators_pane_g1

0xac13,	// (0x00057b3a) vid4_indicators_pane_g2

0xac27,	// (0x00057b4e) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0005c83b) vid4_indicators_pane_g

0xac56,	// (0x00057b7d) vid4_indicators_pane_t1

0xac6d,	// (0x00057b94) cam4_autofocus_pane_g1

0xac75,	// (0x00057b9c) cam4_autofocus_pane_g2

0xac7d,	// (0x00057ba4) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0005c846) cam4_autofocus_pane_g

0xac85,	// (0x00057bac) cam4_autofocus_pane_g3_copy1

0x4a60,	// (0x00051987) video_down_pane_cp_t1

0x4a6e,	// (0x00051995) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0005c7c2) video_down_pane_cp_t

0x5cea,	// (0x00052c11) popup_vitu2_window_ParamLimits

0x5cea,	// (0x00052c11) popup_vitu2_window

0xac8d,	// (0x00057bb4) aid_size_cell2_itu2_ParamLimits

0xac8d,	// (0x00057bb4) aid_size_cell2_itu2

0xacaf,	// (0x00057bd6) aid_size_cell_itu2_ParamLimits

0xacaf,	// (0x00057bd6) aid_size_cell_itu2

0xacf3,	// (0x00057c1a) bg_popup_window_pane_cp09_ParamLimits

0xacf3,	// (0x00057c1a) bg_popup_window_pane_cp09

0xad01,	// (0x00057c28) field_vitu2_entry_pane_ParamLimits

0xad01,	// (0x00057c28) field_vitu2_entry_pane

0xad21,	// (0x00057c48) grid_vitu2_function_pane_ParamLimits

0xad21,	// (0x00057c48) grid_vitu2_function_pane

0xad65,	// (0x00057c8c) grid_vitu2_itu_pane_ParamLimits

0xad65,	// (0x00057c8c) grid_vitu2_itu_pane

0xaddd,	// (0x00057d04) cell_vitu2_itu_pane_ParamLimits

0xaddd,	// (0x00057d04) cell_vitu2_itu_pane

0xadf2,	// (0x00057d19) cell_vitu2_function_pane_ParamLimits

0xadf2,	// (0x00057d19) cell_vitu2_function_pane

0xddf4,	// (0x0005ad1b) bg_popup_call_pane_cp08_ParamLimits

0xddf4,	// (0x0005ad1b) bg_popup_call_pane_cp08

0xde0d,	// (0x0005ad34) field_vitu2_entry_pane_g1

0xde19,	// (0x0005ad40) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x0005c84d) field_vitu2_entry_pane_g

0xae31,	// (0x00057d58) field_vitu2_entry_pane_t1_ParamLimits

0xae31,	// (0x00057d58) field_vitu2_entry_pane_t1

0x08f0,	// (0x0004d817) field_vitu2_entry_pane_t2_ParamLimits

0x08f0,	// (0x0004d817) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0005c854) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0005c854) field_vitu2_entry_pane_t

0xae61,	// (0x00057d88) bg_button_pane_cp010_ParamLimits

0xae61,	// (0x00057d88) bg_button_pane_cp010

0xae6f,	// (0x00057d96) cell_vitu2_itu_pane_g1

0xae8d,	// (0x00057db4) cell_vitu2_itu_pane_t1_ParamLimits

0xae8d,	// (0x00057db4) cell_vitu2_itu_pane_t1

0x5972,	// (0x00052899) cell_vitu2_itu_pane_t2_ParamLimits

0x5972,	// (0x00052899) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x0005c85e) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x0005c85e) cell_vitu2_itu_pane_t

0x8b84,	// (0x00055aab) bg_button_pane_cp011

0xaedf,	// (0x00057e06) cell_vitu2_function_pane_g1

0x5d04,	// (0x00052c2b) main_myfav_hc_pane

0xa909,	// (0x00057830) popup_image3_note_pane_ParamLimits

0xa909,	// (0x00057830) popup_image3_note_pane

0xa917,	// (0x0005783e) popup_image3_tool_bar_pane_ParamLimits

0xa917,	// (0x0005783e) popup_image3_tool_bar_pane

0x59e0,	// (0x00052907) cell_vitu2_itu_pane_t3_ParamLimits

0x59e0,	// (0x00052907) cell_vitu2_itu_pane_t3

0x00f2,	// (0x0004d019) bg_popup_trans_pane

0xde3b,	// (0x0005ad62) grid_image3_tool_bar_pane

0xde45,	// (0x0005ad6c) bg_popup_trans_pane_g1

0x22e1,	// (0x0004f208) bg_popup_trans_pane_g2

0xde4d,	// (0x0005ad74) bg_popup_trans_pane_g3

0xde55,	// (0x0005ad7c) bg_popup_trans_pane_g4

0xde5d,	// (0x0005ad84) bg_popup_trans_pane_g5

0xde65,	// (0x0005ad8c) bg_popup_trans_pane_g6

0xde6d,	// (0x0005ad94) bg_popup_trans_pane_g7

0xde75,	// (0x0005ad9c) bg_popup_trans_pane_g8

0x22c1,	// (0x0004f1e8) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0005c865) bg_popup_trans_pane_g

0xde7d,	// (0x0005ada4) cell_image3_tool_bar_pane_ParamLimits

0xde7d,	// (0x0005ada4) cell_image3_tool_bar_pane

0x41eb,	// (0x00051112) cell_image3_tool_bar_pane_g1

0x00f2,	// (0x0004d019) bg_popup_trans_pane_cp1

0xde91,	// (0x0005adb8) popup_image3_note_pane_t1

0xde9f,	// (0x0005adc6) popup_image3_note_pane_t2

0xdead,	// (0x0005add4) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0005c878) popup_image3_note_pane_t

0xdebb,	// (0x0005ade2) popup_image3_note_pane_t3_copy1

0xaef3,	// (0x00057e1a) bg_myfav_hc_instruction_pane_ParamLimits

0xaef3,	// (0x00057e1a) bg_myfav_hc_instruction_pane

0xaf0b,	// (0x00057e32) cell_myfav_contact_pane_ParamLimits

0xaf0b,	// (0x00057e32) cell_myfav_contact_pane

0xaf25,	// (0x00057e4c) cell_myfav_contact_pane_cp1_ParamLimits

0xaf25,	// (0x00057e4c) cell_myfav_contact_pane_cp1

0xaf3d,	// (0x00057e64) cell_myfav_contact_pane_cp2_ParamLimits

0xaf3d,	// (0x00057e64) cell_myfav_contact_pane_cp2

0xaf55,	// (0x00057e7c) cell_myfav_contact_pane_cp3_ParamLimits

0xaf55,	// (0x00057e7c) cell_myfav_contact_pane_cp3

0xaf6c,	// (0x00057e93) cell_myfav_contact_pane_cp4_ParamLimits

0xaf6c,	// (0x00057e93) cell_myfav_contact_pane_cp4

0xaf82,	// (0x00057ea9) cell_myfav_contact_pane_cp5_ParamLimits

0xaf82,	// (0x00057ea9) cell_myfav_contact_pane_cp5

0xaf96,	// (0x00057ebd) cell_myfav_contact_pane_cp6_ParamLimits

0xaf96,	// (0x00057ebd) cell_myfav_contact_pane_cp6

0xafaa,	// (0x00057ed1) cell_myfav_contact_pane_cp7_ParamLimits

0xafaa,	// (0x00057ed1) cell_myfav_contact_pane_cp7

0xdec9,	// (0x0005adf0) listscroll_gen_pane_cp05

0xafc2,	// (0x00057ee9) main_myfav_hc_pane_g1_ParamLimits

0xafc2,	// (0x00057ee9) main_myfav_hc_pane_g1

0xafd8,	// (0x00057eff) main_myfav_hc_pane_g2_ParamLimits

0xafd8,	// (0x00057eff) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x0005c87f) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x0005c87f) main_myfav_hc_pane_g

0xb006,	// (0x00057f2d) main_myfav_hc_pane_t1_ParamLimits

0xb006,	// (0x00057f2d) main_myfav_hc_pane_t1

0xded2,	// (0x0005adf9) main_myfav_hc_pane_t2_ParamLimits

0xded2,	// (0x0005adf9) main_myfav_hc_pane_t2

0xdee4,	// (0x0005ae0b) main_myfav_hc_pane_t3_ParamLimits

0xdee4,	// (0x0005ae0b) main_myfav_hc_pane_t3

0xb01d,	// (0x00057f44) main_myfav_hc_pane_t4_ParamLimits

0xb01d,	// (0x00057f44) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0005c886) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0005c886) main_myfav_hc_pane_t

0x41eb,	// (0x00051112) bg_myfav_hc_instruction_pane_g1

0xdef6,	// (0x0005ae1d) cell_myfav_contact_pane_g1_ParamLimits

0xdef6,	// (0x0005ae1d) cell_myfav_contact_pane_g1

0xdef6,	// (0x0005ae1d) cell_myfav_contact_pane_g2_ParamLimits

0xdef6,	// (0x0005ae1d) cell_myfav_contact_pane_g2

0xdf02,	// (0x0005ae29) cell_myfav_contact_pane_g3_ParamLimits

0xdf02,	// (0x0005ae29) cell_myfav_contact_pane_g3

0x44b3,	// (0x000513da) cell_myfav_contact_pane_g4_ParamLimits

0x44b3,	// (0x000513da) cell_myfav_contact_pane_g4

0xdf0f,	// (0x0005ae36) cell_myfav_contact_pane_g5_ParamLimits

0xdf0f,	// (0x0005ae36) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0005c891) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0005c891) cell_myfav_contact_pane_g

0xafee,	// (0x00057f15) main_myfav_hc_pane_g3_ParamLimits

0xafee,	// (0x00057f15) main_myfav_hc_pane_g3

0x5bfd,	// (0x00052b24) popup_adpt_find_window

0xb047,	// (0x00057f6e) afind_page_pane_ParamLimits

0xb047,	// (0x00057f6e) afind_page_pane

0xb054,	// (0x00057f7b) aid_size_cell_afind_ParamLimits

0xb054,	// (0x00057f7b) aid_size_cell_afind

0xb06e,	// (0x00057f95) bg_popup_sub_pane_cp09_ParamLimits

0xb06e,	// (0x00057f95) bg_popup_sub_pane_cp09

0xb07b,	// (0x00057fa2) find_pane_cp01_ParamLimits

0xb07b,	// (0x00057fa2) find_pane_cp01

0xdf1b,	// (0x0005ae42) grid_afind_control_pane_ParamLimits

0xdf1b,	// (0x0005ae42) grid_afind_control_pane

0xb088,	// (0x00057faf) grid_afind_pane_ParamLimits

0xb088,	// (0x00057faf) grid_afind_pane

0xb0a4,	// (0x00057fcb) cell_afind_pane_ParamLimits

0xb0a4,	// (0x00057fcb) cell_afind_pane

0x41eb,	// (0x00051112) afind_page_pane_g1

0xb0ec,	// (0x00058013) afind_page_pane_g2

0xb0f5,	// (0x0005801c) afind_page_pane_g3

0x0002,

0xf975,	// (0x0005c89c) afind_page_pane_g

0xb0fe,	// (0x00058025) afind_page_pane_t1

0xdf2f,	// (0x0005ae56) cell_afind_grid_control_pane_ParamLimits

0xdf2f,	// (0x0005ae56) cell_afind_grid_control_pane

0x4b00,	// (0x00051a27) bg_button_pane_cp69_ParamLimits

0x4b00,	// (0x00051a27) bg_button_pane_cp69

0xb11e,	// (0x00058045) cell_afind_pane_g1_ParamLimits

0xb11e,	// (0x00058045) cell_afind_pane_g1

0xb12b,	// (0x00058052) cell_afind_pane_t1_ParamLimits

0xb12b,	// (0x00058052) cell_afind_pane_t1

0x20da,	// (0x0004f001) bg_button_pane_cp72

0xdf3e,	// (0x0005ae65) cell_afind_grid_control_pane_g1

0x8702,	// (0x00055629) aid_image_placing_area_ParamLimits

0x8702,	// (0x00055629) aid_image_placing_area

0x47b2,	// (0x000516d9) field_vitu_entry_pane_g1_ParamLimits

0x47b2,	// (0x000516d9) field_vitu_entry_pane_g1

0x47be,	// (0x000516e5) field_vitu_entry_pane_g2_ParamLimits

0x47be,	// (0x000516e5) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x0005c74d) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x0005c74d) field_vitu_entry_pane_g

0xa275,	// (0x0005719c) cell_vitu_itu_pane_g1_ParamLimits

0xa2b7,	// (0x000571de) cell_vitu_itu_pane_t3_ParamLimits

0xa2b7,	// (0x000571de) cell_vitu_itu_pane_t3

0x4ab0,	// (0x000519d7) mp4_progress_pane_t1_ParamLimits

0x4ac9,	// (0x000519f0) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x0005c7e2) mp4_progress_pane_t_ParamLimits

0x4ae2,	// (0x00051a09) mup_progress_pane_cp04_ParamLimits

0xb031,	// (0x00057f58) main_myfav_hc_pane_t5_ParamLimits

0xb031,	// (0x00057f58) main_myfav_hc_pane_t5

0x5a8d,	// (0x000529b4) aid_zoom_text_primary

0x5bfd,	// (0x00052b24) popup_adpt_find_window_ParamLimits

0x8b84,	// (0x00055aab) main_cam_set_pane

0xaa73,	// (0x0005799a) cam4_zoom_pane_ParamLimits

0xaa73,	// (0x0005799a) cam4_zoom_pane

0xb13d,	// (0x00058064) main_cam_set_pane_g1_ParamLimits

0xb13d,	// (0x00058064) main_cam_set_pane_g1

0xb14b,	// (0x00058072) main_cam_set_pane_g2_ParamLimits

0xb14b,	// (0x00058072) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0005c8a3) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0005c8a3) main_cam_set_pane_g

0xb157,	// (0x0005807e) main_cam_set_pane_t1_ParamLimits

0xb157,	// (0x0005807e) main_cam_set_pane_t1

0xb173,	// (0x0005809a) main_cset_listscroll_pane_ParamLimits

0xb173,	// (0x0005809a) main_cset_listscroll_pane

0xb19e,	// (0x000580c5) main_cset_slider_pane_ParamLimits

0xb19e,	// (0x000580c5) main_cset_slider_pane

0xdf4f,	// (0x0005ae76) main_cset_list_pane_ParamLimits

0xdf4f,	// (0x0005ae76) main_cset_list_pane

0xdf5f,	// (0x0005ae86) scroll_pane_cp028

0xb1bd,	// (0x000580e4) aid_area_touch_slider

0xb1d9,	// (0x00058100) cset_slider_pane

0xb203,	// (0x0005812a) main_cset_slider_pane_g1

0xb218,	// (0x0005813f) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0005c8a8) main_cset_slider_pane_g

0xdf98,	// (0x0005aebf) main_cset_slider_pane_t1

0xb2da,	// (0x00058201) main_cset_slider_pane_t2

0xb2f4,	// (0x0005821b) main_cset_slider_pane_t3

0xb30e,	// (0x00058235) main_cset_slider_pane_t4

0xb328,	// (0x0005824f) main_cset_slider_pane_t5

0xb346,	// (0x0005826d) main_cset_slider_pane_t6

0xb35d,	// (0x00058284) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x0005c8cd) main_cset_slider_pane_t

0xb469,	// (0x00058390) cset_list_set_pane_ParamLimits

0xb469,	// (0x00058390) cset_list_set_pane

0xb47f,	// (0x000583a6) aid_position_infowindow_above

0xb487,	// (0x000583ae) aid_position_infowindow_below

0x090d,	// (0x0004d834) cset_list_set_pane_g1_ParamLimits

0x090d,	// (0x0004d834) cset_list_set_pane_g1

0x0919,	// (0x0004d840) cset_list_set_pane_g3_ParamLimits

0x0919,	// (0x0004d840) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0005c8ec) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0005c8ec) cset_list_set_pane_g

0x0928,	// (0x0004d84f) cset_list_set_pane_t1_ParamLimits

0x0928,	// (0x0004d84f) cset_list_set_pane_t1

0x3810,	// (0x00050737) list_highlight_pane_cp021_ParamLimits

0x3810,	// (0x00050737) list_highlight_pane_cp021

0x2b02,	// (0x0004fa29) cset_slider_pane_g1

0x2b14,	// (0x0004fa3b) cset_slider_pane_g2

0x2b0b,	// (0x0004fa32) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x0005c8f1) cset_slider_pane_g

0xb48f,	// (0x000583b6) aid_area_touch_cam4_zoom

0xb497,	// (0x000583be) cam4_zoom_cont_pane

0xb49f,	// (0x000583c6) cam4_zoom_pane_g1

0xb4a7,	// (0x000583ce) cam4_zoom_pane_g2

0xb4af,	// (0x000583d6) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x0005c8f8) cam4_zoom_pane_g

0xb4b7,	// (0x000583de) cam4_zoom_cont_pane_g1

0xb4c0,	// (0x000583e7) cam4_zoom_cont_pane_g2

0xb4c9,	// (0x000583f0) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x0005c8ff) cam4_zoom_cont_pane_g

0xa960,	// (0x00057887) call4_image_pane_ParamLimits

0xa960,	// (0x00057887) call4_image_pane

0x4b0c,	// (0x00051a33) call4_windows_conf_pane_ParamLimits

0x4b4d,	// (0x00051a74) popup_call4_audio_in_window_ParamLimits

0x4b4d,	// (0x00051a74) popup_call4_audio_in_window

0x00f2,	// (0x0004d019) bg_popup_call2_act_pane_cp02

0x4bc3,	// (0x00051aea) call4_list_conf_pane

0x41eb,	// (0x00051112) call4_image_pane_g1

0x41eb,	// (0x00051112) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x0005c613) call4_image_pane_g

0xe038,	// (0x0005af5f) list_single_graphic_popup_conf4_pane_ParamLimits

0xe038,	// (0x0005af5f) list_single_graphic_popup_conf4_pane

0x00f2,	// (0x0004d019) list_highlight_pane_cp022

0xe04b,	// (0x0005af72) list_single_graphic_popup_conf4_pane_g1

0x27d3,	// (0x0004f6fa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x0005c906) list_single_graphic_popup_conf4_pane_g

0xe053,	// (0x0005af7a) list_single_graphic_popup_conf4_pane_t1

0x6bb3,	// (0x00053ada) popup_vtel_slider_window_ParamLimits

0x6bb3,	// (0x00053ada) popup_vtel_slider_window

0x4aee,	// (0x00051a15) dialer2_ne_pane_t2_ParamLimits

0x4aee,	// (0x00051a15) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0005c7e7) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0005c7e7) dialer2_ne_pane_t

0x3810,	// (0x00050737) bg_popup_sub_pane_cp010_ParamLimits

0x3810,	// (0x00050737) bg_popup_sub_pane_cp010

0xb4d2,	// (0x000583f9) popup_vtel_slider_window_g1_ParamLimits

0xb4d2,	// (0x000583f9) popup_vtel_slider_window_g1

0xb4de,	// (0x00058405) popup_vtel_slider_window_g2_ParamLimits

0xb4de,	// (0x00058405) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x0005c90b) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x0005c90b) popup_vtel_slider_window_g

0xb526,	// (0x0005844d) vtel_slider_pane_ParamLimits

0xb526,	// (0x0005844d) vtel_slider_pane

0xb535,	// (0x0005845c) vtel_slider_pane_g1_ParamLimits

0xb535,	// (0x0005845c) vtel_slider_pane_g1

0xb542,	// (0x00058469) vtel_slider_pane_g2_ParamLimits

0xb542,	// (0x00058469) vtel_slider_pane_g2

0xb54f,	// (0x00058476) vtel_slider_pane_g3_ParamLimits

0xb54f,	// (0x00058476) vtel_slider_pane_g3

0xb535,	// (0x0005845c) vtel_slider_pane_g4_ParamLimits

0xb535,	// (0x0005845c) vtel_slider_pane_g4

0xb55c,	// (0x00058483) vtel_slider_pane_g5_ParamLimits

0xb55c,	// (0x00058483) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x0005c914) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x0005c914) vtel_slider_pane_g

0x5d04,	// (0x00052c2b) main_gallery2_pane

0xacd5,	// (0x00057bfc) aid_size_row_itut2_dropdow_list_ParamLimits

0xacd5,	// (0x00057bfc) aid_size_row_itut2_dropdow_list

0xad43,	// (0x00057c6a) grid_vitu2_function_top_pane_ParamLimits

0xad43,	// (0x00057c6a) grid_vitu2_function_top_pane

0xad99,	// (0x00057cc0) popup_vitu2_dropdown_list_window_ParamLimits

0xad99,	// (0x00057cc0) popup_vitu2_dropdown_list_window

0xadb9,	// (0x00057ce0) popup_vitu2_match_list_window

0xb569,	// (0x00058490) cell_vitu2_function_top_pane_ParamLimits

0xb569,	// (0x00058490) cell_vitu2_function_top_pane

0xb589,	// (0x000584b0) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb589,	// (0x000584b0) cell_vitu2_function_top_pane_cp01

0xb5a7,	// (0x000584ce) cell_vitu2_function_top_wide_pane_ParamLimits

0xb5a7,	// (0x000584ce) cell_vitu2_function_top_wide_pane

0x8b84,	// (0x00055aab) bg_button_pane_cp012

0xb5c5,	// (0x000584ec) cell_vitu2_function_top_pane_g1

0xb5d4,	// (0x000584fb) bg_button_pane_cp013_ParamLimits

0xb5d4,	// (0x000584fb) bg_button_pane_cp013

0xb5f0,	// (0x00058517) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb5f0,	// (0x00058517) cell_vitu2_function_top_wide_pane_g1

0x5cea,	// (0x00052c11) bg_popup_sub_pane_cp20

0xb608,	// (0x0005852f) list_vitu2_match_list_pane

0xde45,	// (0x0005ad6c) bg_popup_sub_pane_cp20_g1

0xde4d,	// (0x0005ad74) bg_popup_sub_pane_cp20_g2

0x22e1,	// (0x0004f208) bg_popup_sub_pane_cp20_g3

0xde55,	// (0x0005ad7c) bg_popup_sub_pane_cp20_g4

0x22c1,	// (0x0004f1e8) bg_popup_sub_pane_cp20_g5

0xe069,	// (0x0005af90) bg_popup_sub_pane_cp20_g6

0xde65,	// (0x0005ad8c) bg_popup_sub_pane_cp20_g7

0xde6d,	// (0x0005ad94) bg_popup_sub_pane_cp20_g8

0xde75,	// (0x0005ad9c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x0005c91f) bg_popup_sub_pane_cp20_g

0xb620,	// (0x00058547) list_vitu2_match_list_item_pane_ParamLimits

0xb620,	// (0x00058547) list_vitu2_match_list_item_pane

0xb632,	// (0x00058559) list_vitu2_match_list_item_pane_t1

0x5d04,	// (0x00052c2b) bg_popup_sub_pane_cp21

0xb66f,	// (0x00058596) grid_vitu2_dropdown_list_pane

0xb677,	// (0x0005859e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb677,	// (0x0005859e) cell_vitu2_dropdown_list_char_pane

0xb698,	// (0x000585bf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb698,	// (0x000585bf) cell_vitu2_dropdown_list_ctrl_pane

0xe071,	// (0x0005af98) cell_vitu2_dropdown_list_char_pane_g1

0xe07a,	// (0x0005afa1) cell_vitu2_dropdown_list_char_pane_g2

0xe083,	// (0x0005afaa) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x0005c93c) cell_vitu2_dropdown_list_char_pane_g

0xb6c4,	// (0x000585eb) cell_vitu2_dropdown_list_char_pane_t1

0xb6d2,	// (0x000585f9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb6d2,	// (0x000585f9) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb6e2,	// (0x00058609) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb6e2,	// (0x00058609) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb6f3,	// (0x0005861a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb6f3,	// (0x0005861a) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb703,	// (0x0005862a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb703,	// (0x0005862a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xab07,	// (0x00057a2e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xab07,	// (0x00057a2e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x0005c943) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x0005c943) cell_vitu2_dropdown_list_ctrl_pane_g

0xb71f,	// (0x00058646) aid_size_cell_gallery2_ParamLimits

0xb71f,	// (0x00058646) aid_size_cell_gallery2

0xb72d,	// (0x00058654) grid_gallery2_pane_ParamLimits

0xb72d,	// (0x00058654) grid_gallery2_pane

0xb73c,	// (0x00058663) scroll_pane_cp029_ParamLimits

0xb73c,	// (0x00058663) scroll_pane_cp029

0xb748,	// (0x0005866f) cell_gallery2_pane_ParamLimits

0xb748,	// (0x0005866f) cell_gallery2_pane

0xe08c,	// (0x0005afb3) cell_gallery2_pane_g2

0x106b,	// (0x0004df92) cell_gallery2_pane_g3

0xe096,	// (0x0005afbd) cell_gallery2_pane_g4

0xe09e,	// (0x0005afc5) cell_gallery2_pane_g5

0x29be,	// (0x0004f8e5) grid_highlight_pane_cp10

0xadb9,	// (0x00057ce0) popup_vitu2_match_list_window_ParamLimits

0xadcd,	// (0x00057cf4) popup_vitu2_query_window_ParamLimits

0xadcd,	// (0x00057cf4) popup_vitu2_query_window

0x5d04,	// (0x00052c2b) bg_vitu2_candi_button_pane

0xe071,	// (0x0005af98) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe07a,	// (0x0005afa1) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe083,	// (0x0005afaa) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb776,	// (0x0005869d) bg_button_pane_cp015

0xb788,	// (0x000586af) bg_button_pane_cp016

0xb79b,	// (0x000586c2) bg_button_pane_cp017

0x3dd2,	// (0x00050cf9) bg_popup_sub_pane_cp22

0xe0a6,	// (0x0005afcd) popup_vitu2_query_window_g1

0xb7e0,	// (0x00058707) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x0005c94e) popup_vitu2_query_window_g

0xb7fd,	// (0x00058724) popup_vitu2_query_window_t1_ParamLimits

0xb7fd,	// (0x00058724) popup_vitu2_query_window_t1

0xb830,	// (0x00058757) popup_vitu2_query_window_t2_ParamLimits

0xb830,	// (0x00058757) popup_vitu2_query_window_t2

0xb842,	// (0x00058769) popup_vitu2_query_window_t3_ParamLimits

0xb842,	// (0x00058769) popup_vitu2_query_window_t3

0xb86a,	// (0x00058791) popup_vitu2_query_window_t4_ParamLimits

0xb86a,	// (0x00058791) popup_vitu2_query_window_t4

0xb88b,	// (0x000587b2) popup_vitu2_query_window_t5_ParamLimits

0xb88b,	// (0x000587b2) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0005c955) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0005c955) popup_vitu2_query_window_t

0xdf47,	// (0x0005ae6e) main_cset_text_pane

0xb1bd,	// (0x000580e4) aid_area_touch_slider_ParamLimits

0xb1d9,	// (0x00058100) cset_slider_pane_ParamLimits

0xb203,	// (0x0005812a) main_cset_slider_pane_g1_ParamLimits

0xb218,	// (0x0005813f) main_cset_slider_pane_g2_ParamLimits

0xdf68,	// (0x0005ae8f) main_cset_slider_pane_g3_ParamLimits

0xdf68,	// (0x0005ae8f) main_cset_slider_pane_g3

0xb22d,	// (0x00058154) main_cset_slider_pane_g4_ParamLimits

0xb22d,	// (0x00058154) main_cset_slider_pane_g4

0xb23c,	// (0x00058163) main_cset_slider_pane_g5_ParamLimits

0xb23c,	// (0x00058163) main_cset_slider_pane_g5

0xb24a,	// (0x00058171) main_cset_slider_pane_g6_ParamLimits

0xb24a,	// (0x00058171) main_cset_slider_pane_g6

0xf981,	// (0x0005c8a8) main_cset_slider_pane_g_ParamLimits

0xdf98,	// (0x0005aebf) main_cset_slider_pane_t1_ParamLimits

0xb2da,	// (0x00058201) main_cset_slider_pane_t2_ParamLimits

0xb2f4,	// (0x0005821b) main_cset_slider_pane_t3_ParamLimits

0xb30e,	// (0x00058235) main_cset_slider_pane_t4_ParamLimits

0xb328,	// (0x0005824f) main_cset_slider_pane_t5_ParamLimits

0xb346,	// (0x0005826d) main_cset_slider_pane_t6_ParamLimits

0xb35d,	// (0x00058284) main_cset_slider_pane_t7_ParamLimits

0xb38b,	// (0x000582b2) main_cset_slider_pane_t8_ParamLimits

0xb38b,	// (0x000582b2) main_cset_slider_pane_t8

0xb3b3,	// (0x000582da) main_cset_slider_pane_t9_ParamLimits

0xb3b3,	// (0x000582da) main_cset_slider_pane_t9

0xb3db,	// (0x00058302) main_cset_slider_pane_t10_ParamLimits

0xb3db,	// (0x00058302) main_cset_slider_pane_t10

0xb403,	// (0x0005832a) main_cset_slider_pane_t11_ParamLimits

0xb403,	// (0x0005832a) main_cset_slider_pane_t11

0xb42d,	// (0x00058354) main_cset_slider_pane_t12_ParamLimits

0xb42d,	// (0x00058354) main_cset_slider_pane_t12

0xb44a,	// (0x00058371) main_cset_slider_pane_t13_ParamLimits

0xb44a,	// (0x00058371) main_cset_slider_pane_t13

0xf9a6,	// (0x0005c8cd) main_cset_slider_pane_t_ParamLimits

0x00f2,	// (0x0004d019) bg_popup_sub_pane_cp011

0xe0b2,	// (0x0005afd9) main_cset_text_pane_g1

0xe0ba,	// (0x0005afe1) main_cset_text_pane_t1

0xe0c8,	// (0x0005afef) main_cset_text_pane_t2

0xe0d6,	// (0x0005affd) main_cset_text_pane_t3

0xe0e4,	// (0x0005b00b) main_cset_text_pane_t4

0xe0f2,	// (0x0005b019) main_cset_text_pane_t5

0xe100,	// (0x0005b027) main_cset_text_pane_t6

0xe10e,	// (0x0005b035) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0005c964) main_cset_text_pane_t

0x5d04,	// (0x00052c2b) main_cam4_burst_pane

0x5d04,	// (0x00052c2b) main_cam5_pane

0xb10c,	// (0x00058033) bg_button_pane_cp019

0xb115,	// (0x0005803c) bg_button_pane_cp020

0xdf74,	// (0x0005ae9b) main_cset_slider_pane_g7_ParamLimits

0xdf74,	// (0x0005ae9b) main_cset_slider_pane_g7

0xdf80,	// (0x0005aea7) main_cset_slider_pane_g8_ParamLimits

0xdf80,	// (0x0005aea7) main_cset_slider_pane_g8

0xb25e,	// (0x00058185) main_cset_slider_pane_g9_ParamLimits

0xb25e,	// (0x00058185) main_cset_slider_pane_g9

0xb26a,	// (0x00058191) main_cset_slider_pane_g10_ParamLimits

0xb26a,	// (0x00058191) main_cset_slider_pane_g10

0xb276,	// (0x0005819d) main_cset_slider_pane_g11_ParamLimits

0xb276,	// (0x0005819d) main_cset_slider_pane_g11

0xb282,	// (0x000581a9) main_cset_slider_pane_g12_ParamLimits

0xb282,	// (0x000581a9) main_cset_slider_pane_g12

0xb28e,	// (0x000581b5) main_cset_slider_pane_g13_ParamLimits

0xb28e,	// (0x000581b5) main_cset_slider_pane_g13

0xb29a,	// (0x000581c1) main_cset_slider_pane_g14_ParamLimits

0xb29a,	// (0x000581c1) main_cset_slider_pane_g14

0xb2a6,	// (0x000581cd) main_cset_slider_pane_g15_ParamLimits

0xb2a6,	// (0x000581cd) main_cset_slider_pane_g15

0xdfc6,	// (0x0005aeed) main_cset_slider_pane_t14_ParamLimits

0xdfc6,	// (0x0005aeed) main_cset_slider_pane_t14

0xdfff,	// (0x0005af26) main_cset_slider_pane_t15_ParamLimits

0xdfff,	// (0x0005af26) main_cset_slider_pane_t15

0xb902,	// (0x00058829) aid_cam4_burst_size_cell_ParamLimits

0xb902,	// (0x00058829) aid_cam4_burst_size_cell

0xb91e,	// (0x00058845) grid_cam4_burst_pane_ParamLimits

0xb91e,	// (0x00058845) grid_cam4_burst_pane

0xb94e,	// (0x00058875) linegrid_cam4_burst_pane_ParamLimits

0xb94e,	// (0x00058875) linegrid_cam4_burst_pane

0xb96e,	// (0x00058895) scroll_pane_cp30_ParamLimits

0xb96e,	// (0x00058895) scroll_pane_cp30

0xb97a,	// (0x000588a1) cell_cam4_burst_pane_ParamLimits

0xb97a,	// (0x000588a1) cell_cam4_burst_pane

0xe11c,	// (0x0005b043) linegrid_cam4_burst_pane_g1_ParamLimits

0xe11c,	// (0x0005b043) linegrid_cam4_burst_pane_g1

0xb9b6,	// (0x000588dd) linegrid_cam4_burst_pane_g2_ParamLimits

0xb9b6,	// (0x000588dd) linegrid_cam4_burst_pane_g2

0xe129,	// (0x0005b050) linegrid_cam4_burst_pane_g3_ParamLimits

0xe129,	// (0x0005b050) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0005c973) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0005c973) linegrid_cam4_burst_pane_g

0xb9c7,	// (0x000588ee) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb9c7,	// (0x000588ee) linegrid_cam4_burst_pane_g3_copy1

0xe136,	// (0x0005b05d) linegrid_cam4_burst_pane_g4_ParamLimits

0xe136,	// (0x0005b05d) linegrid_cam4_burst_pane_g4

0xb9e1,	// (0x00058908) linegrid_cam4_burst_pane_g5_ParamLimits

0xb9e1,	// (0x00058908) linegrid_cam4_burst_pane_g5

0xb9f2,	// (0x00058919) linegrid_cam4_burst_pane_g6_ParamLimits

0xb9f2,	// (0x00058919) linegrid_cam4_burst_pane_g6

0xe143,	// (0x0005b06a) linegrid_cam4_burst_pane_g7_ParamLimits

0xe143,	// (0x0005b06a) linegrid_cam4_burst_pane_g7

0xba03,	// (0x0005892a) cell_cam4_burst_pane_g1

0xe15c,	// (0x0005b083) main_cam5_pane_t1_ParamLimits

0xe15c,	// (0x0005b083) main_cam5_pane_t1

0xe16e,	// (0x0005b095) main_cam5_pane_t2_ParamLimits

0xe16e,	// (0x0005b095) main_cam5_pane_t2

0xe180,	// (0x0005b0a7) main_cam5_pane_t3_ParamLimits

0xe180,	// (0x0005b0a7) main_cam5_pane_t3

0xe192,	// (0x0005b0b9) main_cam5_pane_t4_ParamLimits

0xe192,	// (0x0005b0b9) main_cam5_pane_t4

0xe1aa,	// (0x0005b0d1) main_cam5_pane_t5_ParamLimits

0xe1aa,	// (0x0005b0d1) main_cam5_pane_t5

0xe1be,	// (0x0005b0e5) main_cam5_pane_t6_ParamLimits

0xe1be,	// (0x0005b0e5) main_cam5_pane_t6

0xe1d2,	// (0x0005b0f9) main_cam5_pane_t7_ParamLimits

0xe1d2,	// (0x0005b0f9) main_cam5_pane_t7

0xe1e4,	// (0x0005b10b) main_cam5_pane_t8_ParamLimits

0xe1e4,	// (0x0005b10b) main_cam5_pane_t8

0xe200,	// (0x0005b127) main_cam5_pane_t9_ParamLimits

0xe200,	// (0x0005b127) main_cam5_pane_t9

0xe212,	// (0x0005b139) main_cam5_pane_t10_ParamLimits

0xe212,	// (0x0005b139) main_cam5_pane_t10

0xe224,	// (0x0005b14b) main_cam5_pane_t11_ParamLimits

0xe224,	// (0x0005b14b) main_cam5_pane_t11

0xe236,	// (0x0005b15d) main_cam5_pane_t12_ParamLimits

0xe236,	// (0x0005b15d) main_cam5_pane_t12

0xe24b,	// (0x0005b172) main_cam5_pane_t13_ParamLimits

0xe24b,	// (0x0005b172) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x0005c97f) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x0005c97f) main_cam5_pane_t

0x5cb3,	// (0x00052bda) popup_scut_keymap_window_ParamLimits

0x5cb3,	// (0x00052bda) popup_scut_keymap_window

0xba16,	// (0x0005893d) aid_size_cell_brow_shortcut

0x29be,	// (0x0004f8e5) bg_popup_window_pane_cp010

0xba22,	// (0x00058949) grid_scut_pane

0xba2e,	// (0x00058955) cell_scut_pane_ParamLimits

0xba2e,	// (0x00058955) cell_scut_pane

0xba45,	// (0x0005896c) cell_scut_pane_g1

0xe268,	// (0x0005b18f) cell_scut_pane_t1

0xe277,	// (0x0005b19e) cell_scut_pane_t2

0xba4e,	// (0x00058975) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x0005c99a) cell_scut_pane_t

0x98df,	// (0x00056806) main_mup3_pane_g8_ParamLimits

0x98df,	// (0x00056806) main_mup3_pane_g8

0xace3,	// (0x00057c0a) area_vitu2_query_pane_ParamLimits

0xace3,	// (0x00057c0a) area_vitu2_query_pane

0xb7ae,	// (0x000586d5) input_focus_pane_cp08

0xe286,	// (0x0005b1ad) area_vitu2_query_pane_g1

0xba5c,	// (0x00058983) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0005c9a1) area_vitu2_query_pane_g

0xba6d,	// (0x00058994) area_vitu2_query_pane_t1_ParamLimits

0xba6d,	// (0x00058994) area_vitu2_query_pane_t1

0xba81,	// (0x000589a8) area_vitu2_query_pane_t2_ParamLimits

0xba81,	// (0x000589a8) area_vitu2_query_pane_t2

0xba95,	// (0x000589bc) area_vitu2_query_pane_t3_ParamLimits

0xba95,	// (0x000589bc) area_vitu2_query_pane_t3

0x09bf,	// (0x0004d8e6) area_vitu2_query_pane_t4_ParamLimits

0x09bf,	// (0x0004d8e6) area_vitu2_query_pane_t4

0x09e7,	// (0x0004d90e) area_vitu2_query_pane_t5_ParamLimits

0x09e7,	// (0x0004d90e) area_vitu2_query_pane_t5

0x0a0f,	// (0x0004d936) area_vitu2_query_pane_t6_ParamLimits

0x0a0f,	// (0x0004d936) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0005c9a6) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0005c9a6) area_vitu2_query_pane_t

0xbabd,	// (0x000589e4) bg_button_pane_cp018

0xbacb,	// (0x000589f2) bg_button_pane_cp021

0xbad7,	// (0x000589fe) bg_button_pane_cp022

0xbae8,	// (0x00058a0f) input_focus_pane_cp09

0x7d15,	// (0x00054c3c) aid_size_touch_mv_arrow_left

0x7d3e,	// (0x00054c65) aid_size_touch_mv_arrow_right

0xb2be,	// (0x000581e5) main_cset_slider_pane_g16_ParamLimits

0xb2be,	// (0x000581e5) main_cset_slider_pane_g16

0xb2cc,	// (0x000581f3) main_cset_slider_pane_g17_ParamLimits

0xb2cc,	// (0x000581f3) main_cset_slider_pane_g17

0xba03,	// (0x0005892a) cell_cam4_burst_pane_g1_ParamLimits

0x00f2,	// (0x0004d019) compa_mode_pane

0xb4ea,	// (0x00058411) popup_vtel_slider_window_g3_ParamLimits

0xb4ea,	// (0x00058411) popup_vtel_slider_window_g3

0xb4fe,	// (0x00058425) popup_vtel_slider_window_g4_ParamLimits

0xb4fe,	// (0x00058425) popup_vtel_slider_window_g4

0xb512,	// (0x00058439) popup_vtel_slider_window_t1_ParamLimits

0xb512,	// (0x00058439) popup_vtel_slider_window_t1

0x5d04,	// (0x00052c2b) main_cl_pane

0x8c22,	// (0x00055b49) popup_imed_adjust2_window_ParamLimits

0x3dd2,	// (0x00050cf9) bg_tb_trans_pane_cp05_ParamLimits

0x46e7,	// (0x0005160e) popup_imed_adjust2_window_g1_ParamLimits

0x46f6,	// (0x0005161d) popup_imed_adjust2_window_g2_ParamLimits

0x46f6,	// (0x0005161d) popup_imed_adjust2_window_g2

0x4702,	// (0x00051629) popup_imed_adjust2_window_g3_ParamLimits

0x4702,	// (0x00051629) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0005c711) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0005c711) popup_imed_adjust2_window_g

0x470e,	// (0x00051635) popup_imed_adjust2_window_t1_ParamLimits

0x4726,	// (0x0005164d) slider_imed_adjust_pane_ParamLimits

0x473a,	// (0x00051661) slider_imed_adjust_pane_g1_ParamLimits

0x474a,	// (0x00051671) slider_imed_adjust_pane_g2_ParamLimits

0x475a,	// (0x00051681) slider_imed_adjust_pane_g3_ParamLimits

0x476b,	// (0x00051692) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0005c718) slider_imed_adjust_pane_g_ParamLimits

0xaa1c,	// (0x00057943) aid_touch_area_cam4_ParamLimits

0xaa1c,	// (0x00057943) aid_touch_area_cam4

0xaa2c,	// (0x00057953) battery_pane_cp01

0xaab3,	// (0x000579da) main_camera4_pane_g6_ParamLimits

0xaab3,	// (0x000579da) main_camera4_pane_g6

0xaad1,	// (0x000579f8) main_camera4_pane_t2_ParamLimits

0xaad1,	// (0x000579f8) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0005c81b) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0005c81b) main_camera4_pane_t

0xab66,	// (0x00057a8d) aid_touch_area_vid4_ParamLimits

0xab66,	// (0x00057a8d) aid_touch_area_vid4

0xaba6,	// (0x00057acd) main_video4_pane_g5_ParamLimits

0xaba6,	// (0x00057acd) main_video4_pane_g5

0xabca,	// (0x00057af1) vid4_progress_pane_ParamLimits

0xabca,	// (0x00057af1) vid4_progress_pane

0xdf8c,	// (0x0005aeb3) main_cset_slider_pane_g18_ParamLimits

0xdf8c,	// (0x0005aeb3) main_cset_slider_pane_g18

0xe150,	// (0x0005b077) cell_cam4_burst_pane_g2_ParamLimits

0xe150,	// (0x0005b077) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x0005c97a) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x0005c97a) cell_cam4_burst_pane_g

0xbaf9,	// (0x00058a20) bg_cl_pane_ParamLimits

0xbaf9,	// (0x00058a20) bg_cl_pane

0xbb05,	// (0x00058a2c) cl_header_pane_ParamLimits

0xbb05,	// (0x00058a2c) cl_header_pane

0xbb11,	// (0x00058a38) cl_listscroll_pane_ParamLimits

0xbb11,	// (0x00058a38) cl_listscroll_pane

0xe292,	// (0x0005b1b9) bg_cl_pane_g1

0xe29a,	// (0x0005b1c1) bg_cl_pane_g2

0xe2a2,	// (0x0005b1c9) bg_cl_pane_g3

0xe2aa,	// (0x0005b1d1) bg_cl_pane_g4

0xe2b2,	// (0x0005b1d9) bg_cl_pane_g5

0xe2ba,	// (0x0005b1e1) bg_cl_pane_g6

0xe2c2,	// (0x0005b1e9) bg_cl_pane_g7

0xe2ca,	// (0x0005b1f1) bg_cl_pane_g8

0xe2d2,	// (0x0005b1f9) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x0005c9b5) bg_cl_pane_g

0xbb1d,	// (0x00058a44) aid_height_cl_leading_ParamLimits

0xbb1d,	// (0x00058a44) aid_height_cl_leading

0xbb29,	// (0x00058a50) aid_height_cl_text_ParamLimits

0xbb29,	// (0x00058a50) aid_height_cl_text

0xa1f5,	// (0x0005711c) bg_cl_header_pane_ParamLimits

0xa1f5,	// (0x0005711c) bg_cl_header_pane

0xbb41,	// (0x00058a68) cl_header_pane_g1_ParamLimits

0xbb41,	// (0x00058a68) cl_header_pane_g1

0xbb4e,	// (0x00058a75) cl_header_pane_t1_ParamLimits

0xbb4e,	// (0x00058a75) cl_header_pane_t1

0xe2da,	// (0x0005b201) cl_list_pane

0xdf5f,	// (0x0005ae86) hc_scroll_pane_cp01

0x22c1,	// (0x0004f1e8) bg_cl_header_pane_g1

0xde45,	// (0x0005ad6c) bg_cl_header_pane_g2

0x22e1,	// (0x0004f208) bg_cl_header_pane_g3

0xde55,	// (0x0005ad7c) bg_cl_header_pane_g4

0xde4d,	// (0x0005ad74) bg_cl_header_pane_g5

0xe069,	// (0x0005af90) bg_cl_header_pane_g6

0xde6d,	// (0x0005ad94) bg_cl_header_pane_g7

0xde75,	// (0x0005ad9c) bg_cl_header_pane_g8

0xde65,	// (0x0005ad8c) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0005c9c8) bg_cl_header_pane_g

0xbb60,	// (0x00058a87) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbb60,	// (0x00058a87) hc_cl_list_double_graphic_heading_pane

0xbb71,	// (0x00058a98) hc_cl_list_single_graphic_pane_ParamLimits

0xbb71,	// (0x00058a98) hc_cl_list_single_graphic_pane

0xbb8a,	// (0x00058ab1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbb8a,	// (0x00058ab1) hc_cl_list_single_graphic_pane_g1

0xbb96,	// (0x00058abd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbb96,	// (0x00058abd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0005c9db) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0005c9db) hc_cl_list_single_graphic_pane_g

0xbbaa,	// (0x00058ad1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbbaa,	// (0x00058ad1) hc_cl_list_single_graphic_pane_t1

0xbb8a,	// (0x00058ab1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbb8a,	// (0x00058ab1) hc_cl_list_double_graphic_heading_pane_g1

0xbbbf,	// (0x00058ae6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbbbf,	// (0x00058ae6) hc_cl_list_double_graphic_heading_pane_g2

0xbbd3,	// (0x00058afa) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbbd3,	// (0x00058afa) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x0005c9e0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x0005c9e0) hc_cl_list_double_graphic_heading_pane_g

0xbbe7,	// (0x00058b0e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbbe7,	// (0x00058b0e) hc_cl_list_double_graphic_heading_pane_t1

0xbbfc,	// (0x00058b23) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbbfc,	// (0x00058b23) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0005c9e7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0005c9e7) hc_cl_list_double_graphic_heading_pane_t

0xbc19,	// (0x00058b40) vid4_progress_pane_g1

0xbc2b,	// (0x00058b52) vid4_progress_pane_g2

0x2586,	// (0x0004f4ad) vid4_progress_pane_g3

0xbc3b,	// (0x00058b62) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0005c9ec) vid4_progress_pane_g

0xbc59,	// (0x00058b80) vid4_progress_pane_t1

0xbc6e,	// (0x00058b95) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0005c9f7) vid4_progress_pane_t

0xbc99,	// (0x00058bc0) wait_bar_pane_cp07

0x3fcd,	// (0x00050ef4) blid_firmament_pane_ParamLimits

0x4010,	// (0x00050f37) popup_blid_sat_info2_window_g1

0x4034,	// (0x00050f5b) popup_blid_sat_info2_window_t3

0x4042,	// (0x00050f69) popup_blid_sat_info2_window_t4

0x4050,	// (0x00050f77) popup_blid_sat_info2_window_t5

0x405e,	// (0x00050f85) popup_blid_sat_info2_window_t6

0x406e,	// (0x00050f95) popup_blid_sat_info2_window_t7

0x407c,	// (0x00050fa3) popup_blid_sat_info2_window_t8

0x408a,	// (0x00050fb1) popup_blid_sat_info2_window_t9

0x4098,	// (0x00050fbf) popup_blid_sat_info2_window_t10

0x416b,	// (0x00051092) aid_firma_cardinal_ParamLimits

0x417f,	// (0x000510a6) blid_firmament_pane_t1_ParamLimits

0x4196,	// (0x000510bd) blid_firmament_pane_t2_ParamLimits

0x41ad,	// (0x000510d4) blid_firmament_pane_t3_ParamLimits

0x41c4,	// (0x000510eb) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0005c60a) blid_firmament_pane_t_ParamLimits

0x41db,	// (0x00051102) blid_sat_info_pane_ParamLimits

0x8b84,	// (0x00055aab) main_cam_set_pane_ParamLimits

0xa089,	// (0x00056fb0) aid_size_cell_colour_35_ParamLimits

0xa0a3,	// (0x00056fca) aid_size_cell_colour_112_ParamLimits

0xa0ba,	// (0x00056fe1) aid_size_cell_effect_ParamLimits

0x3810,	// (0x00050737) bg_tb_trans_pane_cp02_ParamLimits

0x381e,	// (0x00050745) heading_imed_pane_ParamLimits

0xa0d4,	// (0x00056ffb) listscroll_imed_pane_ParamLimits

0x33ea,	// (0x00050311) popup_call2_audio_first_window_g5_ParamLimits

0x33ea,	// (0x00050311) popup_call2_audio_first_window_g5

0xa7cb,	// (0x000576f2) aid_size_touch_image3_arrow_left_ParamLimits

0xa7cb,	// (0x000576f2) aid_size_touch_image3_arrow_left

0xa7e1,	// (0x00057708) aid_size_touch_image3_arrow_right_ParamLimits

0xa7e1,	// (0x00057708) aid_size_touch_image3_arrow_right

0xbc84,	// (0x00058bab) vid4_progress_pane_t3

0xa380,	// (0x000572a7) main_hwr_training_symbol_option_pane_ParamLimits

0xa380,	// (0x000572a7) main_hwr_training_symbol_option_pane

0x49d4,	// (0x000518fb) popup_hwr_training_preview_window_ParamLimits

0x49d4,	// (0x000518fb) popup_hwr_training_preview_window

0xa3e1,	// (0x00057308) hwr_training_navi_pane_g5_ParamLimits

0xa3e1,	// (0x00057308) hwr_training_navi_pane_g5

0xde33,	// (0x0005ad5a) popup_char_count_window

0x5cea,	// (0x00052c11) bg_popup_sub_pane_cp20_ParamLimits

0xb608,	// (0x0005852f) list_vitu2_match_list_pane_ParamLimits

0xb614,	// (0x0005853b) vitu2_page_scroll_pane_ParamLimits

0xb614,	// (0x0005853b) vitu2_page_scroll_pane

0xe2ec,	// (0x0005b213) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe2ec,	// (0x0005b213) list_single_hwr_training_symbol_option_pane

0xe2ff,	// (0x0005b226) list_single_hwr_training_symbol_option_pane_g1

0xe307,	// (0x0005b22e) list_single_hwr_training_symbol_option_pane_t1

0xe315,	// (0x0005b23c) bg_button_pane_cp023

0xe31e,	// (0x0005b245) bg_button_pane_cp024

0xbcab,	// (0x00058bd2) vitu2_page_scroll_pane_g1

0xbcb3,	// (0x00058bda) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x0005c9fe) vitu2_page_scroll_pane_g

0xbcbb,	// (0x00058be2) vitu2_page_scroll_pane_t1

0xe351,	// (0x0005b278) popup_char_count_window_g1

0xe35a,	// (0x0005b281) popup_char_count_window_g2

0xe363,	// (0x0005b28a) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x0005ca03) popup_char_count_window_g

0xe36c,	// (0x0005b293) popup_char_count_window_t1

0x5d04,	// (0x00052c2b) main_vded2_pane

0x46d3,	// (0x000515fa) aid_size_cell_imed_line

0x46dd,	// (0x00051604) grid_imed_line_width_pane

0xac38,	// (0x00057b5f) vid4_indicators_pane_g4

0xe37a,	// (0x0005b2a1) cell_imed_line_width_pane_ParamLimits

0xe37a,	// (0x0005b2a1) cell_imed_line_width_pane

0xe38e,	// (0x0005b2b5) cell_imed_line_width_pane_g1

0x4133,	// (0x0005105a) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0005ca0a) cell_imed_line_width_pane_g

0xbcca,	// (0x00058bf1) main_vded2_pane_g1_ParamLimits

0xbcca,	// (0x00058bf1) main_vded2_pane_g1

0xbcd7,	// (0x00058bfe) main_vded2_pane_g2_ParamLimits

0xbcd7,	// (0x00058bfe) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x0005ca0f) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x0005ca0f) main_vded2_pane_g

0xbce5,	// (0x00058c0c) vded2_slider_pane_ParamLimits

0xbce5,	// (0x00058c0c) vded2_slider_pane

0xbcf2,	// (0x00058c19) aid_size_touch_vded2_end

0xbcfc,	// (0x00058c23) aid_size_touch_vded2_playhead

0xe397,	// (0x0005b2be) aid_size_touch_vded2_start

0xe39f,	// (0x0005b2c6) vded2_slider_bg_pane

0xe3a8,	// (0x0005b2cf) vded2_slider_pane_g1

0xe3b1,	// (0x0005b2d8) vded2_slider_pane_g2

0xbd04,	// (0x00058c2b) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x0005ca14) vded2_slider_pane_g

0xe3b9,	// (0x0005b2e0) vded2_slider_bg_pane_g1

0xe3c2,	// (0x0005b2e9) vded2_slider_bg_pane_g2

0xe3cb,	// (0x0005b2f2) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x0005ca1b) vded2_slider_bg_pane_g

0x846c,	// (0x00055393) aid_postcard_touch_down_pane_ParamLimits

0x846c,	// (0x00055393) aid_postcard_touch_down_pane

0x847c,	// (0x000553a3) aid_postcard_touch_up_pane_ParamLimits

0x847c,	// (0x000553a3) aid_postcard_touch_up_pane

0x5d04,	// (0x00052c2b) main_blid2_pane

0x8bad,	// (0x00055ad4) popup_blid2_search_window

0x00f2,	// (0x0004d019) blid2_gps_pane

0x00f2,	// (0x0004d019) blid2_navig_pane

0x00f2,	// (0x0004d019) blid2_search_pane

0x00f2,	// (0x0004d019) blid2_tripm_pane

0xbd0d,	// (0x00058c34) blid2_search_pane_g1_ParamLimits

0xbd0d,	// (0x00058c34) blid2_search_pane_g1

0xbd1d,	// (0x00058c44) blid2_search_pane_t1_ParamLimits

0xbd1d,	// (0x00058c44) blid2_search_pane_t1

0xbd2f,	// (0x00058c56) aid_size_cell_blid2_gps_ParamLimits

0xbd2f,	// (0x00058c56) aid_size_cell_blid2_gps

0xbd3f,	// (0x00058c66) blid2_gps_pane_g1_ParamLimits

0xbd3f,	// (0x00058c66) blid2_gps_pane_g1

0xbd4b,	// (0x00058c72) grid_blid2_satellite_pane_ParamLimits

0xbd4b,	// (0x00058c72) grid_blid2_satellite_pane

0xbd5b,	// (0x00058c82) blid2_navig_pane_g1_ParamLimits

0xbd5b,	// (0x00058c82) blid2_navig_pane_g1

0xbd67,	// (0x00058c8e) blid2_navig_pane_t1_ParamLimits

0xbd67,	// (0x00058c8e) blid2_navig_pane_t1

0xbd79,	// (0x00058ca0) blid2_navig_pane_t2_ParamLimits

0xbd79,	// (0x00058ca0) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x0005ca22) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x0005ca22) blid2_navig_pane_t

0xbd8b,	// (0x00058cb2) blid2_navig_ring_pane_ParamLimits

0xbd8b,	// (0x00058cb2) blid2_navig_ring_pane

0xbd9b,	// (0x00058cc2) blid2_speed_pane_ParamLimits

0xbd9b,	// (0x00058cc2) blid2_speed_pane

0xbda7,	// (0x00058cce) blid2_tripm_pane_g1_ParamLimits

0xbda7,	// (0x00058cce) blid2_tripm_pane_g1

0xbdb7,	// (0x00058cde) blid2_tripm_pane_g2_ParamLimits

0xbdb7,	// (0x00058cde) blid2_tripm_pane_g2

0xbdc3,	// (0x00058cea) blid2_tripm_pane_g3_ParamLimits

0xbdc3,	// (0x00058cea) blid2_tripm_pane_g3

0xbdcf,	// (0x00058cf6) blid2_tripm_pane_g4_ParamLimits

0xbdcf,	// (0x00058cf6) blid2_tripm_pane_g4

0xbddb,	// (0x00058d02) blid2_tripm_pane_g5_ParamLimits

0xbddb,	// (0x00058d02) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x0005ca27) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x0005ca27) blid2_tripm_pane_g

0xbdf7,	// (0x00058d1e) blid2_tripm_pane_t1_ParamLimits

0xbdf7,	// (0x00058d1e) blid2_tripm_pane_t1

0xbe0b,	// (0x00058d32) blid2_tripm_pane_t2_ParamLimits

0xbe0b,	// (0x00058d32) blid2_tripm_pane_t2

0xbe1d,	// (0x00058d44) blid2_tripm_pane_t3_ParamLimits

0xbe1d,	// (0x00058d44) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x0005ca34) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x0005ca34) blid2_tripm_pane_t

0xbe4f,	// (0x00058d76) cell_blid2_satellite_pane_ParamLimits

0xbe4f,	// (0x00058d76) cell_blid2_satellite_pane

0xbe69,	// (0x00058d90) cell_blid2_satellite_pane_g1

0xe3d4,	// (0x0005b2fb) cell_blid2_satellite_pane_t1

0x41eb,	// (0x00051112) blid2_speed_pane_g1

0xe3e2,	// (0x0005b309) blid2_speed_pane_t1

0xe3f0,	// (0x0005b317) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x0005ca3d) blid2_speed_pane_t

0x41eb,	// (0x00051112) blid2_navig_ring_pane_g1

0xbe72,	// (0x00058d99) blid2_navig_ring_pane_g2

0xbe7a,	// (0x00058da1) blid2_navig_ring_pane_g3

0xbe82,	// (0x00058da9) blid2_navig_ring_pane_g4

0xbe8a,	// (0x00058db1) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x0005ca42) blid2_navig_ring_pane_g

0x00f2,	// (0x0004d019) bg_popup_window_pane_cp011

0xe3fe,	// (0x0005b325) popup_blid2_search_window_g1

0xe406,	// (0x0005b32d) popup_blid2_search_window_t1

0xe414,	// (0x0005b33b) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x0005ca4d) popup_blid2_search_window_t

0x21d0,	// (0x0004f0f7) main_browser_pane_g1

0x1eeb,	// (0x0004ee12) main_browser_pane_ParamLimits

0x8b84,	// (0x00055aab) bg_button_pane_cp011_ParamLimits

0xaedf,	// (0x00057e06) cell_vitu2_function_pane_g1_ParamLimits

0x3dd2,	// (0x00050cf9) bg_popup_sub_pane_cp22_ParamLimits

0xb7ae,	// (0x000586d5) input_focus_pane_cp08_ParamLimits

0xb7c5,	// (0x000586ec) popup_vitu2_query_button_pane_ParamLimits

0xb7c5,	// (0x000586ec) popup_vitu2_query_button_pane

0xb7d6,	// (0x000586fd) popup_vitu2_query_input_button_pane

0xe0a6,	// (0x0005afcd) popup_vitu2_query_window_g1_ParamLimits

0xb7e0,	// (0x00058707) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x0005c94e) popup_vitu2_query_window_g_ParamLimits

0x00f2,	// (0x0004d019) bg_button_pane_cp026

0xbe92,	// (0x00058db9) popup_vitu2_query_input_button_pane_g1

0x00f2,	// (0x0004d019) bg_button_pane_cp025

0xe422,	// (0x0005b349) popup_vitu2_query_button_pane_t1

0x95fe,	// (0x00056525) main_mp3_pane_t6

0x960e,	// (0x00056535) popup_slider_window_cp01

0xab15,	// (0x00057a3c) cam4_battery_pane

0xabf5,	// (0x00057b1c) cam4_battery_pane_cp02

0xbc11,	// (0x00058b38) cam4_battery_pane_cp01

0xbc11,	// (0x00058b38) cam4_battery_pane_cp03

0x4c01,	// (0x00051b28) cam4_battery_pane_g1

0x41eb,	// (0x00051112) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x0005ca52) cam4_battery_pane_g

0x40a6,	// (0x00050fcd) popup_blid_sat_info2_window_t11

0x7d15,	// (0x00054c3c) aid_size_touch_mv_arrow_left_ParamLimits

0x7d3e,	// (0x00054c65) aid_size_touch_mv_arrow_right_ParamLimits

0x291e,	// (0x0004f845) navi_pane_g1_ParamLimits

0x7d7d,	// (0x00054ca4) navi_pane_g2_ParamLimits

0x7dab,	// (0x00054cd2) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0005c31c) navi_pane_g_ParamLimits

0x7e05,	// (0x00054d2c) navi_pane_mv_t1_ParamLimits

0xa0e0,	// (0x00057007) grid_imed_effect_pane_ParamLimits

0x6a73,	// (0x0005399a) aid_placing_vt_slider_lsc

0x211f,	// (0x0004f046) aid_placing_vt_slider_prt

0x3810,	// (0x00050737) bg_tb_trans_pane_cp01_ParamLimits

0x436e,	// (0x00051295) popup_image_details_window_g1_ParamLimits

0x4381,	// (0x000512a8) popup_image_details_window_g2_ParamLimits

0x4396,	// (0x000512bd) popup_image_details_window_g3_ParamLimits

0x4396,	// (0x000512bd) popup_image_details_window_g3

0xf728,	// (0x0005c64f) popup_image_details_window_g_ParamLimits

0x43aa,	// (0x000512d1) popup_image_details_window_t1_ParamLimits

0x43bc,	// (0x000512e3) popup_image_details_window_t2_ParamLimits

0x43d5,	// (0x000512fc) popup_image_details_window_t3_ParamLimits

0x43e9,	// (0x00051310) popup_image_details_window_t4_ParamLimits

0x4404,	// (0x0005132b) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0005c656) popup_image_details_window_t_ParamLimits

0xbb35,	// (0x00058a5c) cl_header_name_pane_ParamLimits

0xbb35,	// (0x00058a5c) cl_header_name_pane

0xbe9a,	// (0x00058dc1) cl_header_name_pane_t1_ParamLimits

0xbe9a,	// (0x00058dc1) cl_header_name_pane_t1

0xbeb1,	// (0x00058dd8) cl_header_name_pane_t2_ParamLimits

0xbeb1,	// (0x00058dd8) cl_header_name_pane_t2

0xbedb,	// (0x00058e02) cl_header_name_pane_t3_ParamLimits

0xbedb,	// (0x00058e02) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0005ca57) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0005ca57) cl_header_name_pane_t

0x7dd6,	// (0x00054cfd) navi_pane_mv_g2_ParamLimits

0xde0d,	// (0x0005ad34) field_vitu2_entry_pane_g1_ParamLimits

0xde19,	// (0x0005ad40) field_vitu2_entry_pane_g2_ParamLimits

0xde25,	// (0x0005ad4c) field_vitu2_entry_pane_g3_ParamLimits

0xde25,	// (0x0005ad4c) field_vitu2_entry_pane_g3

0xf926,	// (0x0005c84d) field_vitu2_entry_pane_g_ParamLimits

0xae6f,	// (0x00057d96) cell_vitu2_itu_pane_g1_ParamLimits

0xae7f,	// (0x00057da6) cell_vitu2_itu_pane_g2_ParamLimits

0xae7f,	// (0x00057da6) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0005c859) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0005c859) cell_vitu2_itu_pane_g

0x8b84,	// (0x00055aab) bg_vkb2_func_pane_cp05_ParamLimits

0x8b84,	// (0x00055aab) bg_vkb2_func_pane_cp05

0x8b84,	// (0x00055aab) bg_vkb2_func_pane_cp03

0x8b84,	// (0x00055aab) bg_vkb2_func_pane_cp04

0x8b84,	// (0x00055aab) bg_vkb2_func_pane_cp10_ParamLimits

0x8b84,	// (0x00055aab) bg_vkb2_func_pane_cp10

0xbad7,	// (0x000589fe) bg_vkb2_func_pane_cp08

0xbabd,	// (0x000589e4) bg_vkb2_func_pane_cp06

0xbacb,	// (0x000589f2) bg_vkb2_func_pane_cp07

0xe327,	// (0x0005b24e) bg_vkb2_func_pane_cp11_ParamLimits

0xe327,	// (0x0005b24e) bg_vkb2_func_pane_cp11

0xe33c,	// (0x0005b263) bg_vkb2_func_pane_cp12_ParamLimits

0xe33c,	// (0x0005b263) bg_vkb2_func_pane_cp12

0x00f2,	// (0x0004d019) bg_vkb2_func_pane_cp09

0xde45,	// (0x0005ad6c) bg_vkb2_func_pane_g1

0x22e1,	// (0x0004f208) bg_vkb2_func_pane_g2

0xde4d,	// (0x0005ad74) bg_vkb2_func_pane_g3

0xde55,	// (0x0005ad7c) bg_vkb2_func_pane_g4

0xe069,	// (0x0005af90) bg_vkb2_func_pane_g5

0xde6d,	// (0x0005ad94) bg_vkb2_func_pane_g6

0xde75,	// (0x0005ad9c) bg_vkb2_func_pane_g7

0xde65,	// (0x0005ad8c) bg_vkb2_func_pane_g8

0x22c1,	// (0x0004f1e8) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x0005ca5e) bg_vkb2_func_pane_g

0xbde9,	// (0x00058d10) blid2_tripm_pane_g6_ParamLimits

0xbde9,	// (0x00058d10) blid2_tripm_pane_g6

0x4aa8,	// (0x000519cf) mp4_progress_pane_g1

0xbe43,	// (0x00058d6a) blid2_tripm_values_pane_ParamLimits

0xbe43,	// (0x00058d6a) blid2_tripm_values_pane

0xbf00,	// (0x00058e27) blid2_tripm_values_pane_t1

0xbf0e,	// (0x00058e35) blid2_tripm_values_pane_t2

0xbf1c,	// (0x00058e43) blid2_tripm_values_pane_t3

0xbf2a,	// (0x00058e51) blid2_tripm_values_pane_t4

0xbf38,	// (0x00058e5f) blid2_tripm_values_pane_t5

0xbf46,	// (0x00058e6d) blid2_tripm_values_pane_t6

0xbf54,	// (0x00058e7b) blid2_tripm_values_pane_t7

0xbf62,	// (0x00058e89) blid2_tripm_values_pane_t8

0xbf70,	// (0x00058e97) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x0005ca71) blid2_tripm_values_pane_t

0x6ab3,	// (0x000539da) call_video_pane_t1_ParamLimits

0x6ad4,	// (0x000539fb) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0005c1a5) call_video_pane_t_ParamLimits

0x833d,	// (0x00055264) msg_header_pane_g1_ParamLimits

0x2b47,	// (0x0004fa6e) msg_header_pane_g2_ParamLimits

0x2b47,	// (0x0004fa6e) msg_header_pane_g2

0x0001,

0xf498,	// (0x0005c3bf) msg_header_pane_g_ParamLimits

0xf498,	// (0x0005c3bf) msg_header_pane_g

0x1eeb,	// (0x0004ee12) main_clock2_pane_ParamLimits

0x9e86,	// (0x00056dad) grid_clock2_toolbar_pane_ParamLimits

0x9e86,	// (0x00056dad) grid_clock2_toolbar_pane

0x9e86,	// (0x00056dad) listscroll_clock2_pane_ParamLimits

0x9e86,	// (0x00056dad) listscroll_clock2_pane

0x9f1d,	// (0x00056e44) main_clock2_pane_t3_ParamLimits

0x9f1d,	// (0x00056e44) main_clock2_pane_t3

0x9f2f,	// (0x00056e56) main_clock2_pane_t4_ParamLimits

0x9f2f,	// (0x00056e56) main_clock2_pane_t4

0xe430,	// (0x0005b357) cell_clock2_toolbar_pane

0xe438,	// (0x0005b35f) cell_clock2_toolbar_pane_cp01

0xe438,	// (0x0005b35f) cell_clock2_toolbar_pane_cp02

0xe440,	// (0x0005b367) cell_clock2_toolbar_pane_cp03

0xe448,	// (0x0005b36f) list_clock2_pane

0x2875,	// (0x0004f79c) scroll_pane_cp10

0xe450,	// (0x0005b377) list_single_clock2_pane_ParamLimits

0xe450,	// (0x0005b377) list_single_clock2_pane

0x29be,	// (0x0004f8e5) list_highlight_pane_cp08

0xe45d,	// (0x0005b384) list_single_clock2_pane_t1

0xe46b,	// (0x0005b392) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0005ca84) list_single_clock2_pane_t

0x00f2,	// (0x0004d019) bg_button_pane_cp10

0xe479,	// (0x0005b3a0) cell_clock2_toolbar_pane_g1

0x83da,	// (0x00055301) aid_main_viewer_pane_g1_ParamLimits

0x83da,	// (0x00055301) aid_main_viewer_pane_g1

0x83e6,	// (0x0005530d) aid_main_viewer_pane_g2_ParamLimits

0x83e6,	// (0x0005530d) aid_main_viewer_pane_g2

0x83f2,	// (0x00055319) aid_main_viewer_pane_g3_ParamLimits

0x83f2,	// (0x00055319) aid_main_viewer_pane_g3

0x8403,	// (0x0005532a) aid_main_viewer_pane_g4_ParamLimits

0x8403,	// (0x0005532a) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0005c3d0) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0005c3d0) aid_main_viewer_pane_g

0x8b77,	// (0x00055a9e) main_calc_pane_ParamLimits

0x8b92,	// (0x00055ab9) main_dialer2_pane_ParamLimits

0x5d04,	// (0x00052c2b) main_cam6_pane

0x5d04,	// (0x00052c2b) main_vid6_pane

0x9e92,	// (0x00056db9) listscroll_gen_pane_cp06_ParamLimits

0x9e92,	// (0x00056db9) listscroll_gen_pane_cp06

0x9f41,	// (0x00056e68) main_clock2_pane_t5_ParamLimits

0x9f41,	// (0x00056e68) main_clock2_pane_t5

0x9f8a,	// (0x00056eb1) aid_call2_pane_cp10_ParamLimits

0x9f9c,	// (0x00056ec3) aid_call_pane_cp10_ParamLimits

0x28f3,	// (0x0004f81a) popup_clock_analogue_window_cp10_g1_ParamLimits

0x28f3,	// (0x0004f81a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9fae,	// (0x00056ed5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9fae,	// (0x00056ed5) popup_clock_analogue_window_cp10_g4_ParamLimits

0x28f3,	// (0x0004f81a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0005c706) popup_clock_analogue_window_cp10_g_ParamLimits

0x9fc0,	// (0x00056ee7) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa778,	// (0x0005769f) cell_dialer2_keypad_pane_g2_ParamLimits

0xa778,	// (0x0005769f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0005c7ec) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0005c7ec) cell_dialer2_keypad_pane_g

0xa794,	// (0x000576bb) cell_dialer2_keypad_pane_t1

0xb1aa,	// (0x000580d1) main_cset_text2_pane_ParamLimits

0xb1aa,	// (0x000580d1) main_cset_text2_pane

0xe286,	// (0x0005b1ad) area_vitu2_query_pane_g1_ParamLimits

0xba5c,	// (0x00058983) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0005c9a1) area_vitu2_query_pane_g_ParamLimits

0x0a37,	// (0x0004d95e) area_vitu2_query_pane_t7_ParamLimits

0x0a37,	// (0x0004d95e) area_vitu2_query_pane_t7

0xbabd,	// (0x000589e4) bg_button_pane_cp018_ParamLimits

0xbacb,	// (0x000589f2) bg_button_pane_cp021_ParamLimits

0xbad7,	// (0x000589fe) bg_button_pane_cp022_ParamLimits

0xbad7,	// (0x000589fe) bg_vkb2_func_pane_cp08_ParamLimits

0xbabd,	// (0x000589e4) bg_vkb2_func_pane_cp06_ParamLimits

0xbacb,	// (0x000589f2) bg_vkb2_func_pane_cp07_ParamLimits

0xbae8,	// (0x00058a0f) input_focus_pane_cp09_ParamLimits

0xbf7e,	// (0x00058ea5) cam6_autofocus_pane_ParamLimits

0xbf7e,	// (0x00058ea5) cam6_autofocus_pane

0xbfa0,	// (0x00058ec7) cam6_image_uncrop_pane_ParamLimits

0xbfa0,	// (0x00058ec7) cam6_image_uncrop_pane

0xbfcd,	// (0x00058ef4) cam6_indi_pane_ParamLimits

0xbfcd,	// (0x00058ef4) cam6_indi_pane

0xbfe7,	// (0x00058f0e) cam6_mode_pane_ParamLimits

0xbfe7,	// (0x00058f0e) cam6_mode_pane

0xbffb,	// (0x00058f22) cam6_timer_pane_ParamLimits

0xbffb,	// (0x00058f22) cam6_timer_pane

0xc007,	// (0x00058f2e) cam6_zoom_pane_ParamLimits

0xc007,	// (0x00058f2e) cam6_zoom_pane

0xc01f,	// (0x00058f46) cam6_mode_pane_g1_ParamLimits

0xc01f,	// (0x00058f46) cam6_mode_pane_g1

0xc02b,	// (0x00058f52) cam6_mode_pane_g2_ParamLimits

0xc02b,	// (0x00058f52) cam6_mode_pane_g2

0xc037,	// (0x00058f5e) cam6_mode_pane_g3_ParamLimits

0xc037,	// (0x00058f5e) cam6_mode_pane_g3

0xc043,	// (0x00058f6a) cam6_mode_pane_g4_ParamLimits

0xc043,	// (0x00058f6a) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x0005ca89) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x0005ca89) cam6_mode_pane_g

0xdde6,	// (0x0005ad0d) bg_tb_trans_pane_cp08_ParamLimits

0xdde6,	// (0x0005ad0d) bg_tb_trans_pane_cp08

0xe481,	// (0x0005b3a8) cam6_battery_pane_ParamLimits

0xe481,	// (0x0005b3a8) cam6_battery_pane

0xe497,	// (0x0005b3be) cam6_indi_pane_g1_ParamLimits

0xe497,	// (0x0005b3be) cam6_indi_pane_g1

0xe4a9,	// (0x0005b3d0) cam6_indi_pane_g2_ParamLimits

0xe4a9,	// (0x0005b3d0) cam6_indi_pane_g2

0xe4bb,	// (0x0005b3e2) cam6_indi_pane_g3_ParamLimits

0xe4bb,	// (0x0005b3e2) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x0005ca92) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x0005ca92) cam6_indi_pane_g

0xe4cd,	// (0x0005b3f4) cam6_indi_pane_t1_ParamLimits

0xe4cd,	// (0x0005b3f4) cam6_indi_pane_t1

0xac75,	// (0x00057b9c) cam6_autofocus_pane_g1

0xac6d,	// (0x00057b94) cam6_autofocus_pane_g2

0xac85,	// (0x00057bac) cam6_autofocus_pane_g3

0xac7d,	// (0x00057ba4) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x0005ca99) cam6_autofocus_pane_g

0xe4f3,	// (0x0005b41a) cam6_timer_pane_g1

0xe4fb,	// (0x0005b422) cam6_timer_pane_t1

0xe509,	// (0x0005b430) cam6_zoom_cont_pane

0xe511,	// (0x0005b438) cam6_zoom_pane_g1

0xe519,	// (0x0005b440) cam6_zoom_pane_g2

0xc04f,	// (0x00058f76) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x0005caa2) cam6_zoom_pane_g

0x41eb,	// (0x00051112) cam6_battery_pane_g1

0x41eb,	// (0x00051112) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x0005c613) cam6_battery_pane_g

0xe521,	// (0x0005b448) cam6_zoom_cont_pane_g1

0xe52a,	// (0x0005b451) cam6_zoom_cont_pane_g2

0xe533,	// (0x0005b45a) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x0005caa9) cam6_zoom_cont_pane_g

0xc06c,	// (0x00058f93) cam6_mode_pane_cp_ParamLimits

0xc06c,	// (0x00058f93) cam6_mode_pane_cp

0xc080,	// (0x00058fa7) cam6_zoom_pane_cp_ParamLimits

0xc080,	// (0x00058fa7) cam6_zoom_pane_cp

0xc098,	// (0x00058fbf) vid6_image_uncrop_cif_pane_ParamLimits

0xc098,	// (0x00058fbf) vid6_image_uncrop_cif_pane

0xc0c4,	// (0x00058feb) vid6_image_uncrop_nhd_pane_ParamLimits

0xc0c4,	// (0x00058feb) vid6_image_uncrop_nhd_pane

0xc0e1,	// (0x00059008) vid6_image_uncrop_vga_pane_ParamLimits

0xc0e1,	// (0x00059008) vid6_image_uncrop_vga_pane

0xc100,	// (0x00059027) vid6_image_uncrop_wvga_pane_ParamLimits

0xc100,	// (0x00059027) vid6_image_uncrop_wvga_pane

0xc11d,	// (0x00059044) vid6_indi_pane_ParamLimits

0xc11d,	// (0x00059044) vid6_indi_pane

0xdde6,	// (0x0005ad0d) bg_tb_trans_pane_cp09_ParamLimits

0xdde6,	// (0x0005ad0d) bg_tb_trans_pane_cp09

0xe54b,	// (0x0005b472) cam6_battery_pane_cp_ParamLimits

0xe54b,	// (0x0005b472) cam6_battery_pane_cp

0xe557,	// (0x0005b47e) vid6_indi_pane_g1_ParamLimits

0xe557,	// (0x0005b47e) vid6_indi_pane_g1

0xe569,	// (0x0005b490) vid6_indi_pane_g2_ParamLimits

0xe569,	// (0x0005b490) vid6_indi_pane_g2

0xe57b,	// (0x0005b4a2) vid6_indi_pane_g3_ParamLimits

0xe57b,	// (0x0005b4a2) vid6_indi_pane_g3

0xe590,	// (0x0005b4b7) vid6_indi_pane_g4_ParamLimits

0xe590,	// (0x0005b4b7) vid6_indi_pane_g4

0xe5a5,	// (0x0005b4cc) vid6_indi_pane_g5_ParamLimits

0xe5a5,	// (0x0005b4cc) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x0005cab0) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x0005cab0) vid6_indi_pane_g

0xe5bf,	// (0x0005b4e6) vid6_indi_pane_t1_ParamLimits

0xe5bf,	// (0x0005b4e6) vid6_indi_pane_t1

0xe5d5,	// (0x0005b4fc) vid6_indi_pane_t2_ParamLimits

0xe5d5,	// (0x0005b4fc) vid6_indi_pane_t2

0xe5fd,	// (0x0005b524) vid6_indi_pane_t3_ParamLimits

0xe5fd,	// (0x0005b524) vid6_indi_pane_t3

0xe625,	// (0x0005b54c) vid6_indi_pane_t4_ParamLimits

0xe625,	// (0x0005b54c) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x0005cabb) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x0005cabb) vid6_indi_pane_t

0xe649,	// (0x0005b570) wait_bar_pane_cp08

0xc142,	// (0x00059069) main_cset_text2_pane_t1_ParamLimits

0xc142,	// (0x00059069) main_cset_text2_pane_t1

0xc057,	// (0x00058f7e) listscroll_gen_pane_cp06_t1_ParamLimits

0xc057,	// (0x00058f7e) listscroll_gen_pane_cp06_t1

0x5d04,	// (0x00052c2b) main_cam6_set_pane

0xab07,	// (0x00057a2e) bg_tb_trans_pane_cp06_ParamLimits

0xab1d,	// (0x00057a44) cam4_indicators_pane_g1_ParamLimits

0xab2e,	// (0x00057a55) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0005c829) cam4_indicators_pane_g_ParamLimits

0xab4c,	// (0x00057a73) cam4_indicators_pane_t1_ParamLimits

0x8b84,	// (0x00055aab) bg_tb_trans_pane_cp07_ParamLimits

0xabff,	// (0x00057b26) vid4_indicators_pane_g1_ParamLimits

0xac13,	// (0x00057b3a) vid4_indicators_pane_g2_ParamLimits

0xac27,	// (0x00057b4e) vid4_indicators_pane_g3_ParamLimits

0xac38,	// (0x00057b5f) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0005c83b) vid4_indicators_pane_g_ParamLimits

0xac56,	// (0x00057b7d) vid4_indicators_pane_t1_ParamLimits

0xbc19,	// (0x00058b40) vid4_progress_pane_g1_ParamLimits

0xbc2b,	// (0x00058b52) vid4_progress_pane_g2_ParamLimits

0x2586,	// (0x0004f4ad) vid4_progress_pane_g3_ParamLimits

0xbc3b,	// (0x00058b62) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0005c9ec) vid4_progress_pane_g_ParamLimits

0xbc59,	// (0x00058b80) vid4_progress_pane_t1_ParamLimits

0xbc6e,	// (0x00058b95) vid4_progress_pane_t2_ParamLimits

0xbc84,	// (0x00058bab) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0005c9f7) vid4_progress_pane_t_ParamLimits

0xbc99,	// (0x00058bc0) wait_bar_pane_cp07_ParamLimits

0xc175,	// (0x0005909c) main_cam6_set_pane_g2_ParamLimits

0xc175,	// (0x0005909c) main_cam6_set_pane_g2

0xc181,	// (0x000590a8) main_cset6_listscroll_pane_ParamLimits

0xc181,	// (0x000590a8) main_cset6_listscroll_pane

0xc1ac,	// (0x000590d3) main_cset6_slider_pane_ParamLimits

0xc1ac,	// (0x000590d3) main_cset6_slider_pane

0xc1b8,	// (0x000590df) main_cset6_text2_pane_ParamLimits

0xc1b8,	// (0x000590df) main_cset6_text2_pane

0xe658,	// (0x0005b57f) main_cset6_text_pane

0xe660,	// (0x0005b587) main_cset_list_pane_copy1_ParamLimits

0xe660,	// (0x0005b587) main_cset_list_pane_copy1

0xe670,	// (0x0005b597) scroll_pane_cp028_copy1

0xc1cb,	// (0x000590f2) cset_list_set_pane_copy1

0xc1de,	// (0x00059105) aid_position_infowindow_above_copy1

0xc1e6,	// (0x0005910d) aid_position_infowindow_below_copy1

0xc1ee,	// (0x00059115) cset_list_set_pane_g1_copy1

0x0919,	// (0x0004d840) cset_list_set_pane_g3_copy1_ParamLimits

0x0919,	// (0x0004d840) cset_list_set_pane_g3_copy1

0x0928,	// (0x0004d84f) cset_list_set_pane_t1_copy1_ParamLimits

0x0928,	// (0x0004d84f) cset_list_set_pane_t1_copy1

0x3810,	// (0x00050737) list_highlight_pane_cp021_copy1_ParamLimits

0x3810,	// (0x00050737) list_highlight_pane_cp021_copy1

0xe679,	// (0x0005b5a0) cset6_slider_pane_ParamLimits

0xe679,	// (0x0005b5a0) cset6_slider_pane

0xe6a5,	// (0x0005b5cc) main_cset6_slider_pane_g1_ParamLimits

0xe6a5,	// (0x0005b5cc) main_cset6_slider_pane_g1

0xc1f6,	// (0x0005911d) main_cset6_slider_pane_g2_ParamLimits

0xc1f6,	// (0x0005911d) main_cset6_slider_pane_g2

0xe6cd,	// (0x0005b5f4) main_cset6_slider_pane_g3_ParamLimits

0xe6cd,	// (0x0005b5f4) main_cset6_slider_pane_g3

0xc21e,	// (0x00059145) main_cset6_slider_pane_g4_ParamLimits

0xc21e,	// (0x00059145) main_cset6_slider_pane_g4

0xc22a,	// (0x00059151) main_cset6_slider_pane_g5_ParamLimits

0xc22a,	// (0x00059151) main_cset6_slider_pane_g5

0xdf74,	// (0x0005ae9b) main_cset6_slider_pane_g7_ParamLimits

0xdf74,	// (0x0005ae9b) main_cset6_slider_pane_g7

0xdf80,	// (0x0005aea7) main_cset6_slider_pane_g8_ParamLimits

0xdf80,	// (0x0005aea7) main_cset6_slider_pane_g8

0xc238,	// (0x0005915f) main_cset6_slider_pane_g9_ParamLimits

0xc238,	// (0x0005915f) main_cset6_slider_pane_g9

0xc244,	// (0x0005916b) main_cset6_slider_pane_g10_ParamLimits

0xc244,	// (0x0005916b) main_cset6_slider_pane_g10

0xc250,	// (0x00059177) main_cset6_slider_pane_g11_ParamLimits

0xc250,	// (0x00059177) main_cset6_slider_pane_g11

0xc25c,	// (0x00059183) main_cset6_slider_pane_g12_ParamLimits

0xc25c,	// (0x00059183) main_cset6_slider_pane_g12

0xc268,	// (0x0005918f) main_cset6_slider_pane_g13_ParamLimits

0xc268,	// (0x0005918f) main_cset6_slider_pane_g13

0xc274,	// (0x0005919b) main_cset6_slider_pane_g14_ParamLimits

0xc274,	// (0x0005919b) main_cset6_slider_pane_g14

0xc280,	// (0x000591a7) main_cset6_slider_pane_g15_ParamLimits

0xc280,	// (0x000591a7) main_cset6_slider_pane_g15

0xc298,	// (0x000591bf) main_cset6_slider_pane_g16_ParamLimits

0xc298,	// (0x000591bf) main_cset6_slider_pane_g16

0xc2a6,	// (0x000591cd) main_cset6_slider_pane_g17_ParamLimits

0xc2a6,	// (0x000591cd) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x0005cac4) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x0005cac4) main_cset6_slider_pane_g

0xe6d9,	// (0x0005b600) main_cset6_slider_pane_t1_ParamLimits

0xe6d9,	// (0x0005b600) main_cset6_slider_pane_t1

0xc2cc,	// (0x000591f3) main_cset6_slider_pane_t2_ParamLimits

0xc2cc,	// (0x000591f3) main_cset6_slider_pane_t2

0xc2f7,	// (0x0005921e) main_cset6_slider_pane_t3_ParamLimits

0xc2f7,	// (0x0005921e) main_cset6_slider_pane_t3

0xc322,	// (0x00059249) main_cset6_slider_pane_t4_ParamLimits

0xc322,	// (0x00059249) main_cset6_slider_pane_t4

0xc34d,	// (0x00059274) main_cset6_slider_pane_t5_ParamLimits

0xc34d,	// (0x00059274) main_cset6_slider_pane_t5

0xe71a,	// (0x0005b641) main_cset6_slider_pane_t7_ParamLimits

0xe71a,	// (0x0005b641) main_cset6_slider_pane_t7

0xc37a,	// (0x000592a1) main_cset6_slider_pane_t8_ParamLimits

0xc37a,	// (0x000592a1) main_cset6_slider_pane_t8

0xc39e,	// (0x000592c5) main_cset6_slider_pane_t9_ParamLimits

0xc39e,	// (0x000592c5) main_cset6_slider_pane_t9

0xc3c2,	// (0x000592e9) main_cset6_slider_pane_t10_ParamLimits

0xc3c2,	// (0x000592e9) main_cset6_slider_pane_t10

0xc3e6,	// (0x0005930d) main_cset6_slider_pane_t11_ParamLimits

0xc3e6,	// (0x0005930d) main_cset6_slider_pane_t11

0xe750,	// (0x0005b677) main_cset6_slider_pane_t14_ParamLimits

0xe750,	// (0x0005b677) main_cset6_slider_pane_t14

0xe789,	// (0x0005b6b0) main_cset6_slider_pane_t15_ParamLimits

0xe789,	// (0x0005b6b0) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x0005cae9) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x0005cae9) main_cset6_slider_pane_t

0xe7c2,	// (0x0005b6e9) cset_slider_pane_g1_copy1

0xe7cb,	// (0x0005b6f2) cset_slider_pane_g2_copy1

0xe7d4,	// (0x0005b6fb) cset_slider_pane_g3_copy1

0x00f2,	// (0x0004d019) bg_popup_sub_pane_cp011_copy1

0xe7dd,	// (0x0005b704) main_cset_text_pane_g1_copy1

0xe0ba,	// (0x0005afe1) main_cset_text_pane_t1_copy1

0xe0c8,	// (0x0005afef) main_cset_text_pane_t2_copy1

0xe0d6,	// (0x0005affd) main_cset_text_pane_t3_copy1

0xe0e4,	// (0x0005b00b) main_cset_text_pane_t4_copy1

0xe0f2,	// (0x0005b019) main_cset_text_pane_t5_copy1

0xe7e5,	// (0x0005b70c) main_cset_text_pane_t6_copy1

0xe7f3,	// (0x0005b71a) main_cset_text_pane_t7_copy1

0xc40a,	// (0x00059331) main_cset_text2_pane_t1_copy1

0x8b84,	// (0x00055aab) main_ncimui_pane

0x8be3,	// (0x00055b0a) popup_query_ncimui_window_ParamLimits

0x8be3,	// (0x00055b0a) popup_query_ncimui_window

0x0574,	// (0x0004d49b) field_cale_ev2_pane_g4_ParamLimits

0x0574,	// (0x0004d49b) field_cale_ev2_pane_g4

0xa498,	// (0x000573bf) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa498,	// (0x000573bf) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0005c7c7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0005c7c7) cell_video_dialer_keypad_pane_g

0xa4b0,	// (0x000573d7) cell_video_dialer_keypad_pane_t1

0x00f2,	// (0x0004d019) bg_popup_window_pane_cp012

0x2752,	// (0x0004f679) heading_pane_cp06

0xe82b,	// (0x0005b752) ncim_query_content_pane

0x00f2,	// (0x0004d019) bg_popup_heading_pane_cp01

0xe833,	// (0x0005b75a) ncim_heading_pane_t1

0xe841,	// (0x0005b768) ncim_indicator_popup_pane

0xe853,	// (0x0005b77a) ncim_query_button_pane

0xe867,	// (0x0005b78e) ncim_query_content_pane_t1

0xe879,	// (0x0005b7a0) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x0005cb2d) ncim_query_content_pane_t

0xe8b3,	// (0x0005b7da) ncim_query_list_pane

0xe8c5,	// (0x0005b7ec) ncim_query_popup_pane

0xe841,	// (0x0005b768) ncim_indicator_popup_pane_ParamLimits

0xc55d,	// (0x00059484) ncim_query_content_pane_g1_ParamLimits

0xc55d,	// (0x00059484) ncim_query_content_pane_g1

0xe867,	// (0x0005b78e) ncim_query_content_pane_t1_ParamLimits

0xe879,	// (0x0005b7a0) ncim_query_content_pane_t2_ParamLimits

0xc569,	// (0x00059490) ncim_query_content_pane_t3_ParamLimits

0xc569,	// (0x00059490) ncim_query_content_pane_t3

0xc586,	// (0x000594ad) ncim_query_content_pane_t4_ParamLimits

0xc586,	// (0x000594ad) ncim_query_content_pane_t4

0xc5a3,	// (0x000594ca) ncim_query_content_pane_t5_ParamLimits

0xc5a3,	// (0x000594ca) ncim_query_content_pane_t5

0xe88b,	// (0x0005b7b2) ncim_query_content_pane_t6_ParamLimits

0xe88b,	// (0x0005b7b2) ncim_query_content_pane_t6

0xfc06,	// (0x0005cb2d) ncim_query_content_pane_t_ParamLimits

0xe8b3,	// (0x0005b7da) ncim_query_list_pane_ParamLimits

0xe8c5,	// (0x0005b7ec) ncim_query_popup_pane_ParamLimits

0xe8d9,	// (0x0005b800) wait_bar_pane_cp04

0x00f2,	// (0x0004d019) input_focus_pane_cp011

0xe8e1,	// (0x0005b808) ncim_query_popup_pane_t1

0xe8ef,	// (0x0005b816) ncim_list_query_list_pane_ParamLimits

0xe8ef,	// (0x0005b816) ncim_list_query_list_pane

0x00f2,	// (0x0004d019) bg_button_pane_cp027

0xe8fc,	// (0x0005b823) ncim_query_button_pane_g1

0x00f2,	// (0x0004d019) list_highlight_pane_cp012

0xe906,	// (0x0005b82d) ncim_list_query_list_pane_g1

0xe90e,	// (0x0005b835) ncim_list_query_list_pane_t1

0xab3d,	// (0x00057a64) cam4_indicators_pane_g3_ParamLimits

0xab3d,	// (0x00057a64) cam4_indicators_pane_g3

0xac44,	// (0x00057b6b) vid4_indicators_pane_g5_ParamLimits

0xac44,	// (0x00057b6b) vid4_indicators_pane_g5

0xbc4a,	// (0x00058b71) vid4_progress_pane_g5_ParamLimits

0xbc4a,	// (0x00058b71) vid4_progress_pane_g5

0xc449,	// (0x00059370) main_ncimui_pane_g1

0xc4b1,	// (0x000593d8) ncimui_group_query_pane_ParamLimits

0xc4b1,	// (0x000593d8) ncimui_group_query_pane

0xc4f9,	// (0x00059420) ncimui_list_pane_ParamLimits

0xc4f9,	// (0x00059420) ncimui_list_pane

0xc520,	// (0x00059447) ncimui_text_pane_ParamLimits

0xc520,	// (0x00059447) ncimui_text_pane

0xc5c0,	// (0x000594e7) ncimui_text_pane_t1_ParamLimits

0xc5c0,	// (0x000594e7) ncimui_text_pane_t1

0xe91c,	// (0x0005b843) ncimui_list_single_graphic_pane_ParamLimits

0xe91c,	// (0x0005b843) ncimui_list_single_graphic_pane

0xc5df,	// (0x00059506) ncimui_query_pane_ParamLimits

0xc5df,	// (0x00059506) ncimui_query_pane

0x00f2,	// (0x0004d019) list_highlight_pane_cp013

0xe92c,	// (0x0005b853) ncim_list_query_list_pane_t1_copy1

0xe906,	// (0x0005b82d) ncim_list_single_graphic_pane_g1

0xe93a,	// (0x0005b861) ncim_query_button_pane_cp01

0xe946,	// (0x0005b86d) ncim_query_entry_pane_ParamLimits

0xe946,	// (0x0005b86d) ncim_query_entry_pane

0xe959,	// (0x0005b880) ncimui_query_pane_g1

0xe965,	// (0x0005b88c) ncimui_query_pane_t1_ParamLimits

0xe965,	// (0x0005b88c) ncimui_query_pane_t1

0x3810,	// (0x00050737) input_focus_pane_cp012

0xe97e,	// (0x0005b8a5) ncim_query_entry_pane_t1

0x1eeb,	// (0x0004ee12) main_im_pane_ParamLimits

0x8b84,	// (0x00055aab) main_mobtv_pane_ParamLimits

0x8b84,	// (0x00055aab) main_mobtv_pane

0xc2b4,	// (0x000591db) main_cset6_slider_pane_g18_ParamLimits

0xc2b4,	// (0x000591db) main_cset6_slider_pane_g18

0xc2c0,	// (0x000591e7) main_cset6_slider_pane_g19_ParamLimits

0xc2c0,	// (0x000591e7) main_cset6_slider_pane_g19

0xde25,	// (0x0005ad4c) bg_main_mobtv_pane_ParamLimits

0xde25,	// (0x0005ad4c) bg_main_mobtv_pane

0xc5f2,	// (0x00059519) main_mobtv_info_pane

0xc5fd,	// (0x00059524) main_mobtv_loading_pane_ParamLimits

0xc5fd,	// (0x00059524) main_mobtv_loading_pane

0xe990,	// (0x0005b8b7) main_mobtv_pg_channel_list_pane

0xe99a,	// (0x0005b8c1) main_mobtv_pg_hdr_pane

0xc60a,	// (0x00059531) main_mobtv_programe_curr_pane_ParamLimits

0xc60a,	// (0x00059531) main_mobtv_programe_curr_pane

0xc617,	// (0x0005953e) main_mobtv_programe_next_pane_ParamLimits

0xc617,	// (0x0005953e) main_mobtv_programe_next_pane

0xe9a3,	// (0x0005b8ca) popup_mobtv_noti_window

0x41eb,	// (0x00051112) main_tv_pg_hdr_pane_g1

0xe9ab,	// (0x0005b8d2) main_tv_pg_hdr_pane_g2

0xe9b3,	// (0x0005b8da) main_tv_pg_hdr_pane_g3

0xe9bb,	// (0x0005b8e2) main_tv_pg_hdr_pane_g4

0xe9c3,	// (0x0005b8ea) main_tv_pg_hdr_pane_g5

0xe9cd,	// (0x0005b8f4) main_tv_pg_hdr_pane_g6

0xe9d7,	// (0x0005b8fe) main_tv_pg_hdr_pane_g7

0xe9e1,	// (0x0005b908) main_tv_pg_hdr_pane_g8

0xe9eb,	// (0x0005b912) main_tv_pg_hdr_pane_g9

0xe9f5,	// (0x0005b91c) main_tv_pg_hdr_pane_g10

0xe9ff,	// (0x0005b926) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x0005cb3a) main_tv_pg_hdr_pane_g

0xea09,	// (0x0005b930) main_tv_pg_hdr_pane_t1

0xea17,	// (0x0005b93e) main_tv_pg_hdr_pane_t2

0xea25,	// (0x0005b94c) main_tv_pg_hdr_pane_t3

0xea35,	// (0x0005b95c) main_tv_pg_hdr_pane_t4

0xea45,	// (0x0005b96c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x0005cb51) main_tv_pg_hdr_pane_t

0xea55,	// (0x0005b97c) single_mobtv_pg_channel_pane_ParamLimits

0xea55,	// (0x0005b97c) single_mobtv_pg_channel_pane

0xea67,	// (0x0005b98e) single_mobtv_pg_channel_table_pane

0xea70,	// (0x0005b997) single_mobtv_pg_channel_thumb_pane

0xea79,	// (0x0005b9a0) single_tv_pg_channel_pane_g1

0xea82,	// (0x0005b9a9) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x0005cb5c) single_tv_pg_channel_pane_g

0x444e,	// (0x00051375) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x444e,	// (0x00051375) bg_single_mobtv_pg_channel_thumb_pane

0xea8b,	// (0x0005b9b2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xea8b,	// (0x0005b9b2) single_mobtv_pg_channel_thumb_pane_g1

0xea99,	// (0x0005b9c0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xea99,	// (0x0005b9c0) single_mobtv_pg_channel_thumb_pane_g2

0xeaa5,	// (0x0005b9cc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xeaa5,	// (0x0005b9cc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x0005cb61) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x0005cb61) single_mobtv_pg_channel_thumb_pane_g

0xeab1,	// (0x0005b9d8) single_mobtv_pg_channel_thumb_pane_t1

0xeabf,	// (0x0005b9e6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x0005cb68) single_mobtv_pg_channel_thumb_pane_t

0x41eb,	// (0x00051112) bg_single_mobtv_pg_channel_table_pane_g1

0x41eb,	// (0x00051112) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x0005c613) bg_single_mobtv_pg_channel_table_pane_g

0xeacd,	// (0x0005b9f4) single_mobtv_pg_channel_table_pane_t1

0xeadb,	// (0x0005ba02) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x0005cb6d) single_mobtv_pg_channel_table_pane_t

0xc62c,	// (0x00059553) main_mobtv_info_pane_g1_ParamLimits

0xc62c,	// (0x00059553) main_mobtv_info_pane_g1

0xc648,	// (0x0005956f) main_mobtv_info_pane_t1_ParamLimits

0xc648,	// (0x0005956f) main_mobtv_info_pane_t1

0xc6c0,	// (0x000595e7) main_mobtv_info_pane_t2_ParamLimits

0xc6c0,	// (0x000595e7) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x0005cb77) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x0005cb77) main_mobtv_info_pane_t

0xc74f,	// (0x00059676) wait_bar_pane_cp05

0xc761,	// (0x00059688) main_mobtv_loading_pane_g1_ParamLimits

0xc761,	// (0x00059688) main_mobtv_loading_pane_g1

0xc76f,	// (0x00059696) main_mobtv_loading_pane_g2_ParamLimits

0xc76f,	// (0x00059696) main_mobtv_loading_pane_g2

0xc77b,	// (0x000596a2) main_mobtv_loading_pane_g3_ParamLimits

0xc77b,	// (0x000596a2) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x0005cb7e) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x0005cb7e) main_mobtv_loading_pane_g

0xeae9,	// (0x0005ba10) main_mobtv_loading_pane_t1_ParamLimits

0xeae9,	// (0x0005ba10) main_mobtv_loading_pane_t1

0xeb01,	// (0x0005ba28) main_mobtv_loading_pane_t2_ParamLimits

0xeb01,	// (0x0005ba28) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x0005cb85) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x0005cb85) main_mobtv_loading_pane_t

0xc789,	// (0x000596b0) wait_bar_pane_cp06_ParamLimits

0xc789,	// (0x000596b0) wait_bar_pane_cp06

0xeb25,	// (0x0005ba4c) main_mobtv_programe_curr_pane_t1

0xeb33,	// (0x0005ba5a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x0005cb8a) main_mobtv_programe_curr_pane_t

0xeb41,	// (0x0005ba68) main_mobtv_programe_next_pane_t1

0xeb4f,	// (0x0005ba76) main_mobtv_programe_next_pane_t2

0xeb5d,	// (0x0005ba84) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x0005cb8f) main_mobtv_programe_next_pane_t

0x00f2,	// (0x0004d019) bg_popup_mobtv_noti_window_pane

0xeb6b,	// (0x0005ba92) popup_mobtv_noti_window_g1

0xeb73,	// (0x0005ba9a) popup_mobtv_noti_window_t1

0xeb81,	// (0x0005baa8) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x0005cb96) popup_mobtv_noti_window_t

0x41eb,	// (0x00051112) bg_popup_mobtv_noti_window_pane_g1

0x5d04,	// (0x00052c2b) sc_clock_pane

0x5d04,	// (0x00052c2b) main_fs_bigclock_pane

0xbe31,	// (0x00058d58) blid2_tripm_pane_t4_ParamLimits

0xbe31,	// (0x00058d58) blid2_tripm_pane_t4

0xc795,	// (0x000596bc) sc_clock_pane_g1_ParamLimits

0xc795,	// (0x000596bc) sc_clock_pane_g1

0xc7a3,	// (0x000596ca) sc_clock_pane_t1_ParamLimits

0xc7a3,	// (0x000596ca) sc_clock_pane_t1

0xc7b6,	// (0x000596dd) sc_clock_pane_t2_ParamLimits

0xc7b6,	// (0x000596dd) sc_clock_pane_t2

0xc7c8,	// (0x000596ef) sc_clock_pane_t3_ParamLimits

0xc7c8,	// (0x000596ef) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x0005cb9b) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x0005cb9b) sc_clock_pane_t

0xd4dc,	// (0x0005a403) main_fs_bigclock_indicator_pane_ParamLimits

0xd4dc,	// (0x0005a403) main_fs_bigclock_indicator_pane

0xc855,	// (0x0005977c) main_fs_bigclock_pane_g1_ParamLimits

0xc855,	// (0x0005977c) main_fs_bigclock_pane_g1

0xd4e8,	// (0x0005a40f) main_fs_bigclock_pane_t1_ParamLimits

0xd4e8,	// (0x0005a40f) main_fs_bigclock_pane_t1

0xd4fa,	// (0x0005a421) main_fs_bigclock_pane_t2_ParamLimits

0xd4fa,	// (0x0005a421) main_fs_bigclock_pane_t2

0xd50e,	// (0x0005a435) main_fs_bigclock_pane_t3_ParamLimits

0xd50e,	// (0x0005a435) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x0005cd9f) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x0005cd9f) main_fs_bigclock_pane_t

0x12e3,	// (0x0004e20a) main_fs_bigclock_indicator_pane_g1

0xe85b,	// (0x0005b782) ncim_query_content_pane_g2_ParamLimits

0xe85b,	// (0x0005b782) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x0005cb28) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x0005cb28) ncim_query_content_pane_g

0xc7dc,	// (0x00059703) sc_clock_pane_t4_ParamLimits

0xc7dc,	// (0x00059703) sc_clock_pane_t4

0x8b84,	// (0x00055aab) main_radioblah_pane

0x4b91,	// (0x00051ab8) cell_call4_button_pane_t1_copy1_ParamLimits

0x4b91,	// (0x00051ab8) cell_call4_button_pane_t1_copy1

0xc463,	// (0x0005938a) main_ncimui_pane_t1_ParamLimits

0xc463,	// (0x0005938a) main_ncimui_pane_t1

0xc47d,	// (0x000593a4) main_ncimui_pane_t2_ParamLimits

0xc47d,	// (0x000593a4) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x0005cb21) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x0005cb21) main_ncimui_pane_t

0xecc7,	// (0x0005bbee) main_radioblah_anim_pane_ParamLimits

0xecc7,	// (0x0005bbee) main_radioblah_anim_pane

0xecd8,	// (0x0005bbff) main_radioblah_info_pane_ParamLimits

0xecd8,	// (0x0005bbff) main_radioblah_info_pane

0xecec,	// (0x0005bc13) main_radioblah_pane_t1_ParamLimits

0xecec,	// (0x0005bc13) main_radioblah_pane_t1

0xed08,	// (0x0005bc2f) main_radioblah_pane_t2_ParamLimits

0xed08,	// (0x0005bc2f) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x0005cbbc) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x0005cbbc) main_radioblah_pane_t

0xc8a7,	// (0x000597ce) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc8a7,	// (0x000597ce) main_radioblah_rocker_ctrl_pane

0xed50,	// (0x0005bc77) main_radioblah_info_pane_t1_ParamLimits

0xed50,	// (0x0005bc77) main_radioblah_info_pane_t1

0xc8ec,	// (0x00059813) main_radioblah_info_pane_t2_ParamLimits

0xc8ec,	// (0x00059813) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x0005cbc5) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x0005cbc5) main_radioblah_info_pane_t

0x41eb,	// (0x00051112) main_radioblah_rocker_ctrl_pane_g1

0xc99c,	// (0x000598c3) main_radioblah_rocker_ctrl_pane_g2

0xc9a4,	// (0x000598cb) main_radioblah_rocker_ctrl_pane_g3

0xc9ac,	// (0x000598d3) main_radioblah_rocker_ctrl_pane_g4

0xc9b4,	// (0x000598db) main_radioblah_rocker_ctrl_pane_g5

0xc9bc,	// (0x000598e3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x0005cbce) main_radioblah_rocker_ctrl_pane_g

0xc40a,	// (0x00059331) main_cset_text2_pane_t1_copy1_ParamLimits

0xaa5d,	// (0x00057984) cam4_image_uncrop_qvga_pane

0xabb2,	// (0x00057ad9) vid4_image_uncrop_qcif_pane

0xbfbf,	// (0x00058ee6) cam6_image_uncrop_qvga_pane_ParamLimits

0xbfbf,	// (0x00058ee6) cam6_image_uncrop_qvga_pane

0xe53b,	// (0x0005b462) vid6_image_uncrop_qcif_pane_ParamLimits

0xe53b,	// (0x0005b462) vid6_image_uncrop_qcif_pane

0x00f2,	// (0x0004d019) bg_popup_preview_window_pane_cp03

0xe801,	// (0x0005b728) list_cset_text2_pane

0xe809,	// (0x0005b730) main_cset6_text2_pane_g1

0xe811,	// (0x0005b738) main_cset6_text2_pane_t1

0xc9c4,	// (0x000598eb) list_cset_text2_pane_t1_ParamLimits

0xc9c4,	// (0x000598eb) list_cset_text2_pane_t1

0x8b84,	// (0x00055aab) main_radioblah_pane_ParamLimits

0xc73b,	// (0x00059662) main_mobtv_info_pane_t3_ParamLimits

0xc73b,	// (0x00059662) main_mobtv_info_pane_t3

0xc895,	// (0x000597bc) main_radioblah_pane_g1

0xc8c0,	// (0x000597e7) main_radioblah_info_pane_g1

0xc941,	// (0x00059868) main_radioblah_info_pane_t3_ParamLimits

0xc941,	// (0x00059868) main_radioblah_info_pane_t3

0x7821,	// (0x00054748) highlight_cell_cale_month_pane_ParamLimits

0x7821,	// (0x00054748) highlight_cell_cale_month_pane

0x5d04,	// (0x00052c2b) main_phob_fisheye_pane

0x4536,	// (0x0005145d) scroll_pane_cp0031_ParamLimits

0x4536,	// (0x0005145d) scroll_pane_cp0031

0xe649,	// (0x0005b570) wait_bar_pane_cp08_ParamLimits

0xc1cb,	// (0x000590f2) cset_list_set_pane_copy1_ParamLimits

0xed8a,	// (0x0005bcb1) highlight_cell_cale_month_pane_g1

0xc9e1,	// (0x00059908) highlight_cell_cale_month_pane_t1

0xe2da,	// (0x0005b201) list_gen_pane_cp01

0xdf5f,	// (0x0005ae86) scroll_pane_01

0xc9ef,	// (0x00059916) list_single_double_fisheye_pane

0xc9f8,	// (0x0005991f) list_double_fisheye_pane_g1_ParamLimits

0xc9f8,	// (0x0005991f) list_double_fisheye_pane_g1

0xca04,	// (0x0005992b) list_double_fisheye_pane_g2_ParamLimits

0xca04,	// (0x0005992b) list_double_fisheye_pane_g2

0xca18,	// (0x0005993f) list_double_fisheye_pane_g3_ParamLimits

0xca18,	// (0x0005993f) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x0005cbdb) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x0005cbdb) list_double_fisheye_pane_g

0xca41,	// (0x00059968) list_double_fisheye_pane_t1_ParamLimits

0xca41,	// (0x00059968) list_double_fisheye_pane_t1

0xca5c,	// (0x00059983) list_double_fisheye_pane_t2_ParamLimits

0xca5c,	// (0x00059983) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x0005cbe6) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x0005cbe6) list_double_fisheye_pane_t

0x5d04,	// (0x00052c2b) main_call5_pane

0xc802,	// (0x00059729) sc_swipe_pane_ParamLimits

0xc802,	// (0x00059729) sc_swipe_pane

0xca8a,	// (0x000599b1) call5_image_pane_ParamLimits

0xca8a,	// (0x000599b1) call5_image_pane

0xca9a,	// (0x000599c1) call5_swipe_1_pane_ParamLimits

0xca9a,	// (0x000599c1) call5_swipe_1_pane

0xcaa6,	// (0x000599cd) call5_swipe_2_pane_ParamLimits

0xcaa6,	// (0x000599cd) call5_swipe_2_pane

0xcac0,	// (0x000599e7) popup_call5_audio_first_window_ParamLimits

0xcac0,	// (0x000599e7) popup_call5_audio_first_window

0x444e,	// (0x00051375) call5_swipe_1_pane_g1_ParamLimits

0x444e,	// (0x00051375) call5_swipe_1_pane_g1

0xed92,	// (0x0005bcb9) call5_swipe_1_pane_g2_ParamLimits

0xed92,	// (0x0005bcb9) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x0005cbeb) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x0005cbeb) call5_swipe_1_pane_g

0xed9e,	// (0x0005bcc5) call5_swipe_1_pane_t1_ParamLimits

0xed9e,	// (0x0005bcc5) call5_swipe_1_pane_t1

0x444e,	// (0x00051375) call5_swipe_2_pane_g1_ParamLimits

0x444e,	// (0x00051375) call5_swipe_2_pane_g1

0xedb3,	// (0x0005bcda) call5_swipe_2_pane_g2_ParamLimits

0xedb3,	// (0x0005bcda) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x0005cbf0) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x0005cbf0) call5_swipe_2_pane_g

0xedbf,	// (0x0005bce6) call5_swipe_2_pane_t1_ParamLimits

0xedbf,	// (0x0005bce6) call5_swipe_2_pane_t1

0xedd4,	// (0x0005bcfb) sc_swipe_pane_g1_ParamLimits

0xedd4,	// (0x0005bcfb) sc_swipe_pane_g1

0xede1,	// (0x0005bd08) sc_swipe_pane_g2_ParamLimits

0xede1,	// (0x0005bd08) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x0005cbf5) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x0005cbf5) sc_swipe_pane_g

0xeded,	// (0x0005bd14) sc_swipe_pane_t1_ParamLimits

0xeded,	// (0x0005bd14) sc_swipe_pane_t1

0x5d04,	// (0x00052c2b) main_cmail_launcher_pane

0xcace,	// (0x000599f5) aid_size_cell_cmail_l_ParamLimits

0xcace,	// (0x000599f5) aid_size_cell_cmail_l

0xcade,	// (0x00059a05) grid_cmail_l_pane_ParamLimits

0xcade,	// (0x00059a05) grid_cmail_l_pane

0xcaee,	// (0x00059a15) cell_cmail_l_pane_ParamLimits

0xcaee,	// (0x00059a15) cell_cmail_l_pane

0xcb02,	// (0x00059a29) cell_cmail_l_pane_g1_ParamLimits

0xcb02,	// (0x00059a29) cell_cmail_l_pane_g1

0xcb0e,	// (0x00059a35) cell_cmail_l_pane_t1_ParamLimits

0xcb0e,	// (0x00059a35) cell_cmail_l_pane_t1

0xee02,	// (0x0005bd29) cell_cmail_l_pane_t2_ParamLimits

0xee02,	// (0x0005bd29) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x0005cbfa) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x0005cbfa) cell_cmail_l_pane_t

0x3810,	// (0x00050737) grid_highlight_pane_cp018_ParamLimits

0x3810,	// (0x00050737) grid_highlight_pane_cp018

0x5b66,	// (0x00052a8d) main2_pane_ParamLimits

0x5b66,	// (0x00052a8d) main2_pane

0x1f84,	// (0x0004eeab) popup_sp_fs_action_menu_bg_pane_g1

0x1f8c,	// (0x0004eeb3) popup_sp_fs_action_menu_bg_pane_g2

0x1f94,	// (0x0004eebb) popup_sp_fs_action_menu_bg_pane_g3

0x1f9c,	// (0x0004eec3) popup_sp_fs_action_menu_bg_pane_g4

0x1fa4,	// (0x0004eecb) popup_sp_fs_action_menu_bg_pane_g5

0x1fac,	// (0x0004eed3) popup_sp_fs_action_menu_bg_pane_g6

0x1fb4,	// (0x0004eedb) popup_sp_fs_action_menu_bg_pane_g7

0x1fbc,	// (0x0004eee3) popup_sp_fs_action_menu_bg_pane_g8

0x1fc4,	// (0x0004eeeb) popup_sp_fs_action_menu_bg_pane_g9

0x1fcc,	// (0x0004eef3) popup_sp_fs_action_menu_bg_pane_g10

0x1fcc,	// (0x0004eef3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0005c0bf) popup_sp_fs_action_menu_bg_pane_g

0x0206,	// (0x0004d12d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x2_t3_g3_g1

0x0212,	// (0x0004d139) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0212,	// (0x0004d139) list_medium_line_x2_t3_g3_g2

0x021e,	// (0x0004d145) list_medium_line_x2_t3_g3_g3_ParamLimits

0x021e,	// (0x0004d145) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0005c16f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0005c16f) list_medium_line_x2_t3_g3_g

0x022a,	// (0x0004d151) list_medium_line_x2_t3_g3_t1_ParamLimits

0x022a,	// (0x0004d151) list_medium_line_x2_t3_g3_t1

0x69a6,	// (0x000538cd) list_medium_line_x2_t3_g3_t2_ParamLimits

0x69a6,	// (0x000538cd) list_medium_line_x2_t3_g3_t2

0x023f,	// (0x0004d166) list_medium_line_x2_t3_g3_t3_ParamLimits

0x023f,	// (0x0004d166) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0005c176) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0005c176) list_medium_line_x2_t3_g3_t

0x0206,	// (0x0004d12d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x2_t3_g2_g1

0x021e,	// (0x0004d145) list_medium_line_x2_t3_g2_g2_ParamLimits

0x021e,	// (0x0004d145) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0005c17d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0005c17d) list_medium_line_x2_t3_g2_g

0x0254,	// (0x0004d17b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0254,	// (0x0004d17b) list_medium_line_x2_t3_g2_t1

0x026a,	// (0x0004d191) list_medium_line_x2_t3_g2_t2_ParamLimits

0x026a,	// (0x0004d191) list_medium_line_x2_t3_g2_t2

0x023f,	// (0x0004d166) list_medium_line_x2_t3_g2_t3_ParamLimits

0x023f,	// (0x0004d166) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0005c182) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0005c182) list_medium_line_x2_t3_g2_t

0x0206,	// (0x0004d12d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x2_t4_g4_g1

0x027c,	// (0x0004d1a3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x027c,	// (0x0004d1a3) list_medium_line_x2_t4_g4_g2

0x0212,	// (0x0004d139) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0212,	// (0x0004d139) list_medium_line_x2_t4_g4_g3

0x0288,	// (0x0004d1af) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0288,	// (0x0004d1af) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0005c189) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0005c189) list_medium_line_x2_t4_g4_g

0x69b8,	// (0x000538df) list_medium_line_x2_t4_g4_t1_ParamLimits

0x69b8,	// (0x000538df) list_medium_line_x2_t4_g4_t1

0x69d2,	// (0x000538f9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x69d2,	// (0x000538f9) list_medium_line_x2_t4_g4_t2

0x69e8,	// (0x0005390f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x69e8,	// (0x0005390f) list_medium_line_x2_t4_g4_t3

0x0294,	// (0x0004d1bb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0294,	// (0x0004d1bb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0005c192) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0005c192) list_medium_line_x2_t4_g4_t

0x0206,	// (0x0004d12d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x2_t2_g4_g1

0x027c,	// (0x0004d1a3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x027c,	// (0x0004d1a3) list_medium_line_x2_t2_g4_g2

0x0212,	// (0x0004d139) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0212,	// (0x0004d139) list_medium_line_x2_t2_g4_g3

0x021e,	// (0x0004d145) list_medium_line_x2_t2_g4_g4_ParamLimits

0x021e,	// (0x0004d145) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0005c1f9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0005c1f9) list_medium_line_x2_t2_g4_g

0x02a6,	// (0x0004d1cd) list_medium_line_x2_t2_g4_t1_ParamLimits

0x02a6,	// (0x0004d1cd) list_medium_line_x2_t2_g4_t1

0x023f,	// (0x0004d166) list_medium_line_x2_t2_g4_t2_ParamLimits

0x023f,	// (0x0004d166) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0005c202) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0005c202) list_medium_line_x2_t2_g4_t

0x0206,	// (0x0004d12d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x2_t2_g3_g1

0x0212,	// (0x0004d139) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0212,	// (0x0004d139) list_medium_line_x2_t2_g3_g2

0x021e,	// (0x0004d145) list_medium_line_x2_t2_g3_g3_ParamLimits

0x021e,	// (0x0004d145) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0005c16f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0005c16f) list_medium_line_x2_t2_g3_g

0x02bb,	// (0x0004d1e2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x02bb,	// (0x0004d1e2) list_medium_line_x2_t2_g3_t1

0x023f,	// (0x0004d166) list_medium_line_x2_t2_g3_t2_ParamLimits

0x023f,	// (0x0004d166) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0005c207) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0005c207) list_medium_line_x2_t2_g3_t

0x79d3,	// (0x000548fa) main_sp_fs_list_pane_ParamLimits

0x79d3,	// (0x000548fa) main_sp_fs_list_pane

0x79df,	// (0x00054906) sp_fs_scroll_pane_ParamLimits

0x79df,	// (0x00054906) sp_fs_scroll_pane

0x79eb,	// (0x00054912) list_medium_line_x2_t3_t1

0x79fb,	// (0x00054922) list_medium_line_x2_t3_t2

0x02fe,	// (0x0004d225) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0005c252) list_medium_line_x2_t3_t

0x7a09,	// (0x00054930) list_medium_line_x3_t4_t1

0x7a19,	// (0x00054940) list_medium_line_x3_t4_t2

0x030c,	// (0x0004d233) list_medium_line_x3_t4_t3

0x02fe,	// (0x0004d225) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0005c259) list_medium_line_x3_t4_t

0x7a27,	// (0x0005494e) list_medium_line_x4_t5_t1

0x7a37,	// (0x0005495e) list_medium_line_x4_t5_t2

0x030c,	// (0x0004d233) list_medium_line_x4_t5_t3

0x031a,	// (0x0004d241) list_medium_line_x4_t5_t4

0x02fe,	// (0x0004d225) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0005c262) list_medium_line_x4_t5_t

0x0206,	// (0x0004d12d) list_medium_line_t4_g4_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_t4_g4_g1

0x0288,	// (0x0004d1af) list_medium_line_t4_g4_g2_ParamLimits

0x0288,	// (0x0004d1af) list_medium_line_t4_g4_g2

0x0328,	// (0x0004d24f) list_medium_line_t4_g4_g3_ParamLimits

0x0328,	// (0x0004d24f) list_medium_line_t4_g4_g3

0x021e,	// (0x0004d145) list_medium_line_t4_g4_g4_ParamLimits

0x021e,	// (0x0004d145) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0005c26d) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0005c26d) list_medium_line_t4_g4_g

0x0334,	// (0x0004d25b) list_medium_line_t4_g4_t1_ParamLimits

0x0334,	// (0x0004d25b) list_medium_line_t4_g4_t1

0x0349,	// (0x0004d270) list_medium_line_t4_g4_t2_ParamLimits

0x0349,	// (0x0004d270) list_medium_line_t4_g4_t2

0x035e,	// (0x0004d285) list_medium_line_t4_g4_t3_ParamLimits

0x035e,	// (0x0004d285) list_medium_line_t4_g4_t3

0x023f,	// (0x0004d166) list_medium_line_t4_g4_t4_ParamLimits

0x023f,	// (0x0004d166) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0005c276) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0005c276) list_medium_line_t4_g4_t

0x7b56,	// (0x00054a7d) chi_dic_find_pane_g1

0x8ba0,	// (0x00055ac7) main_tport_pane

0x095d,	// (0x0004d884) list_medium_line_plain_t1

0x09a7,	// (0x0004d8ce) list_medium_line_t2_g2_g1_ParamLimits

0x09a7,	// (0x0004d8ce) list_medium_line_t2_g2_g1

0x09b3,	// (0x0004d8da) list_medium_line_t2_g2_g2_ParamLimits

0x09b3,	// (0x0004d8da) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x0005c932) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x0005c932) list_medium_line_t2_g2_g

0xb640,	// (0x00058567) list_medium_line_t2_g2_t1_ParamLimits

0xb640,	// (0x00058567) list_medium_line_t2_g2_t1

0xb65a,	// (0x00058581) list_medium_line_t2_g2_t2_ParamLimits

0xb65a,	// (0x00058581) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0005c937) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0005c937) list_medium_line_t2_g2_t

0x0ad3,	// (0x0004d9fa) aid_sp_fs_list_icon_a_sm

0x0adb,	// (0x0004da02) aid_sp_fs_list_icon_d

0x0ae3,	// (0x0004da0a) aid_sp_fs_text_primary

0xe2e3,	// (0x0005b20a) aid_sp_fs_text_secondary

0x0aec,	// (0x0004da13) list_medium_line

0x0aec,	// (0x0004da13) list_medium_line_g2

0x0aec,	// (0x0004da13) list_medium_line_g3

0x0aec,	// (0x0004da13) list_medium_line_plain

0x0aec,	// (0x0004da13) list_medium_line_plain_t2

0x0aec,	// (0x0004da13) list_medium_line_plain_t3

0x0aec,	// (0x0004da13) list_medium_line_right_icon

0x0aec,	// (0x0004da13) list_medium_line_right_iconx2

0x0aec,	// (0x0004da13) list_medium_line_t2

0x0aec,	// (0x0004da13) list_medium_line_t2_g2

0x0aec,	// (0x0004da13) list_medium_line_t2_g3

0x0aec,	// (0x0004da13) list_medium_line_t2_right_icon

0x0aec,	// (0x0004da13) list_medium_line_t2_right_iconx2

0x0aec,	// (0x0004da13) list_medium_line_t3

0x0aec,	// (0x0004da13) list_medium_line_t3_g2

0x0aec,	// (0x0004da13) list_medium_line_t3_g3

0x0aec,	// (0x0004da13) list_medium_line_t3_right_iconx2

0x0af5,	// (0x0004da1c) list_medium_line_t4_g4

0x0afe,	// (0x0004da25) list_medium_line_x2

0x0afe,	// (0x0004da25) list_medium_line_x2_t2_g2

0x0afe,	// (0x0004da25) list_medium_line_x2_t2_g3

0x0afe,	// (0x0004da25) list_medium_line_x2_t2_g4

0x0afe,	// (0x0004da25) list_medium_line_x2_t3

0x0afe,	// (0x0004da25) list_medium_line_x2_t3_g2

0x0afe,	// (0x0004da25) list_medium_line_x2_t3_g3

0x0afe,	// (0x0004da25) list_medium_line_x2_t3_g4

0x0afe,	// (0x0004da25) list_medium_line_x2_t4_g2

0x0afe,	// (0x0004da25) list_medium_line_x2_t4_g4

0x0b07,	// (0x0004da2e) list_medium_line_x3

0x0b07,	// (0x0004da2e) list_medium_line_x3_t4

0x0b07,	// (0x0004da2e) list_medium_line_x3_t4_g4

0x0af5,	// (0x0004da1c) list_medium_line_x4_t4

0x0af5,	// (0x0004da1c) list_medium_line_x4_t4_g7

0x0af5,	// (0x0004da1c) list_medium_line_x4_t5

0x0b10,	// (0x0004da37) list_single_fs_dyc_pane_ParamLimits

0x0b10,	// (0x0004da37) list_single_fs_dyc_pane

0x0206,	// (0x0004d12d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x4_t4_g7_g1

0x0b32,	// (0x0004da59) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0b32,	// (0x0004da59) list_medium_line_x4_t4_g7_g2

0x0b3e,	// (0x0004da65) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0b3e,	// (0x0004da65) list_medium_line_x4_t4_g7_g3

0x0b4d,	// (0x0004da74) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0b4d,	// (0x0004da74) list_medium_line_x4_t4_g7_g4

0x0b59,	// (0x0004da80) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0b59,	// (0x0004da80) list_medium_line_x4_t4_g7_g5

0x0b68,	// (0x0004da8f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0b68,	// (0x0004da8f) list_medium_line_x4_t4_g7_g6

0x0b77,	// (0x0004da9e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0b77,	// (0x0004da9e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x0005cb02) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x0005cb02) list_medium_line_x4_t4_g7_g

0x0b83,	// (0x0004daaa) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0b83,	// (0x0004daaa) list_medium_line_x4_t4_g7_t1

0x0b98,	// (0x0004dabf) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0b98,	// (0x0004dabf) list_medium_line_x4_t4_g7_t2

0x0bad,	// (0x0004dad4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0bad,	// (0x0004dad4) list_medium_line_x4_t4_g7_t3

0x0bc2,	// (0x0004dae9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0bc2,	// (0x0004dae9) list_medium_line_x4_t4_g7_t4

0x0bd4,	// (0x0004dafb) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0bd4,	// (0x0004dafb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x0005cb11) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x0005cb11) list_medium_line_x4_t4_g7_t

0x0be6,	// (0x0004db0d) list_single_dyc_row_pane_ParamLimits

0x0be6,	// (0x0004db0d) list_single_dyc_row_pane

0xca7e,	// (0x000599a5) call5_gesture_pane_ParamLimits

0xca7e,	// (0x000599a5) call5_gesture_pane

0xcab2,	// (0x000599d9) call5_windows_pane_ParamLimits

0xcab2,	// (0x000599d9) call5_windows_pane

0xcb24,	// (0x00059a4b) call5_swipe_1_pane_cp_ParamLimits

0xcb24,	// (0x00059a4b) call5_swipe_1_pane_cp

0xcb30,	// (0x00059a57) call5_swipe_2_pane_cp_ParamLimits

0xcb30,	// (0x00059a57) call5_swipe_2_pane_cp

0x29be,	// (0x0004f8e5) call5_image_pane_cp

0xcb3c,	// (0x00059a63) popup_call5_audio_first_window_cp_ParamLimits

0xcb3c,	// (0x00059a63) popup_call5_audio_first_window_cp

0xedd4,	// (0x0005bcfb) call5_swipe_1_pane_g1_cp_ParamLimits

0xedd4,	// (0x0005bcfb) call5_swipe_1_pane_g1_cp

0xee14,	// (0x0005bd3b) call5_swipe_1_pane_g2_cp

0xeded,	// (0x0005bd14) call5_swipe_1_pane_t1_cp_ParamLimits

0xeded,	// (0x0005bd14) call5_swipe_1_pane_t1_cp

0xedd4,	// (0x0005bcfb) call5_swipe_2_pane_g1_cp_ParamLimits

0xedd4,	// (0x0005bcfb) call5_swipe_2_pane_g1_cp

0xee1c,	// (0x0005bd43) call5_swipe_2_pane_g2_cp

0xee24,	// (0x0005bd4b) call5_swipe_2_pane_t1_cp_ParamLimits

0xee24,	// (0x0005bd4b) call5_swipe_2_pane_t1_cp

0x3810,	// (0x00050737) main_sp_fs_email_pane

0xee39,	// (0x0005bd60) main_sp_fs_listscroll_pane_te

0x0c03,	// (0x0004db2a) popup_sp_fs_action_menu_pane_ParamLimits

0x0c03,	// (0x0004db2a) popup_sp_fs_action_menu_pane

0x41eb,	// (0x00051112) bg_sp_fs_ctrlbar_pane_g1

0xee42,	// (0x0005bd69) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xee4b,	// (0x0005bd72) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xee54,	// (0x0005bd7b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x41eb,	// (0x00051112) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x0005cbff) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3fbf,	// (0x00050ee6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3fbf,	// (0x00050ee6) bg_sp_fs_ctrlbar_ddmenu_pane

0xee5d,	// (0x0005bd84) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xee5d,	// (0x0005bd84) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xee69,	// (0x0005bd90) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xee69,	// (0x0005bd90) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x0005cc08) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x0005cc08) main_sp_fs_ctrlbar_ddmenu_pane_g

0xee75,	// (0x0005bd9c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xee75,	// (0x0005bd9c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0c47,	// (0x0004db6e) list_medium_line_t2_right_icon_g1

0xcb4a,	// (0x00059a71) list_medium_line_t2_right_icon_t1

0xcb5a,	// (0x00059a81) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x0005cc0d) list_medium_line_t2_right_icon_t

0x3dd2,	// (0x00050cf9) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3dd2,	// (0x00050cf9) bg_sp_fs_ctrlbar_pane

0xcbbf,	// (0x00059ae6) main_sp_fs_ctrlbar_button_pane_cp01

0xcbc7,	// (0x00059aee) main_sp_fs_ctrlbar_ddmenu_pane

0xeec7,	// (0x0005bdee) main_sp_fs_ctrlbar_pane_g1

0xeed3,	// (0x0005bdfa) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x0005cc12) main_sp_fs_ctrlbar_pane_g

0xeedf,	// (0x0005be06) main_sp_fs_ctrlbar_pane_t1

0xcbd1,	// (0x00059af8) main_sp_fs_ctrlbar_pane

0xcbeb,	// (0x00059b12) main_sp_fs_listscroll_pane_te_cp01

0xcbfc,	// (0x00059b23) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcbfc,	// (0x00059b23) popup_sp_fs_action_menu_pane_cp01

0x3810,	// (0x00050737) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3810,	// (0x00050737) bg_sp_fs_highlight_list_pane_cp01

0x0c4f,	// (0x0004db76) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0c4f,	// (0x0004db76) sp_fs_action_menu_list_gene_pane_g1

0xef04,	// (0x0005be2b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xef04,	// (0x0005be2b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x0005cc1c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x0005cc1c) sp_fs_action_menu_list_gene_pane_g

0x0c5e,	// (0x0004db85) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0c5e,	// (0x0004db85) sp_fs_action_menu_list_gene_pane_t1

0x0c76,	// (0x0004db9d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0c76,	// (0x0004db9d) sp_fs_action_menu_list_gene_pane

0xef11,	// (0x0005be38) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xef11,	// (0x0005be38) popup_sp_fs_action_menu_bg_pane

0x0c95,	// (0x0004dbbc) sp_fs_action_menu_list_pane_ParamLimits

0x0c95,	// (0x0004dbbc) sp_fs_action_menu_list_pane

0xef1f,	// (0x0005be46) sp_fs_scroll_pane_cp01_ParamLimits

0xef1f,	// (0x0005be46) sp_fs_scroll_pane_cp01

0xcc26,	// (0x00059b4d) list_medium_line_plain_t2_t1

0xcc36,	// (0x00059b5d) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x0005cc21) list_medium_line_plain_t2_t

0xcc44,	// (0x00059b6b) list_medium_line_plain_t3_t1

0xcc54,	// (0x00059b7b) list_medium_line_plain_t3_t2

0xcc62,	// (0x00059b89) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x0005cc26) list_medium_line_plain_t3_t

0x0206,	// (0x0004d12d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x2_t2_g2_g1

0x021e,	// (0x0004d145) list_medium_line_x2_t2_g2_g2_ParamLimits

0x021e,	// (0x0004d145) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0005c17d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0005c17d) list_medium_line_x2_t2_g2_g

0x0334,	// (0x0004d25b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0334,	// (0x0004d25b) list_medium_line_x2_t2_g2_t1

0x023f,	// (0x0004d166) list_medium_line_x2_t2_g2_t2_ParamLimits

0x023f,	// (0x0004d166) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x0005cc2d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x0005cc2d) list_medium_line_x2_t2_g2_t

0x0206,	// (0x0004d12d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x2_t4_g2_g1

0x0cb5,	// (0x0004dbdc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0cb5,	// (0x0004dbdc) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x0005cc32) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x0005cc32) list_medium_line_x2_t4_g2_g

0xcc70,	// (0x00059b97) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcc70,	// (0x00059b97) list_medium_line_x2_t4_g2_t1

0xcc8a,	// (0x00059bb1) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcc8a,	// (0x00059bb1) list_medium_line_x2_t4_g2_t2

0xcc9f,	// (0x00059bc6) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcc9f,	// (0x00059bc6) list_medium_line_x2_t4_g2_t3

0x023f,	// (0x0004d166) list_medium_line_x2_t4_g2_t4_ParamLimits

0x023f,	// (0x0004d166) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x0005cc37) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x0005cc37) list_medium_line_x2_t4_g2_t

0x0cc7,	// (0x0004dbee) list_medium_line_t3_right_iconx2_g1

0x0c47,	// (0x0004db6e) list_medium_line_t3_right_iconx2_g2

0xccb4,	// (0x00059bdb) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x0005cc40) list_medium_line_t3_right_iconx2_g

0xccbc,	// (0x00059be3) list_medium_line_t3_right_iconx2_t1

0xcccc,	// (0x00059bf3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x0005cc47) list_medium_line_t3_right_iconx2_t

0x0206,	// (0x0004d12d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x3_t4_g4_g1

0x0212,	// (0x0004d139) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0212,	// (0x0004d139) list_medium_line_x3_t4_g4_g2

0x0288,	// (0x0004d1af) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0288,	// (0x0004d1af) list_medium_line_x3_t4_g4_g3

0x0ccf,	// (0x0004dbf6) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0ccf,	// (0x0004dbf6) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x0005cc4c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x0005cc4c) list_medium_line_x3_t4_g4_g

0xccda,	// (0x00059c01) list_medium_line_x3_t4_g4_t1_ParamLimits

0xccda,	// (0x00059c01) list_medium_line_x3_t4_g4_t1

0xccf1,	// (0x00059c18) list_medium_line_x3_t4_g4_t2_ParamLimits

0xccf1,	// (0x00059c18) list_medium_line_x3_t4_g4_t2

0x0349,	// (0x0004d270) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0349,	// (0x0004d270) list_medium_line_x3_t4_g4_t3

0x0cdb,	// (0x0004dc02) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0cdb,	// (0x0004dc02) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x0005cc55) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x0005cc55) list_medium_line_x3_t4_g4_t

0xcd06,	// (0x00059c2d) list_single_dyc_row_text_pane_t1_ParamLimits

0xcd06,	// (0x00059c2d) list_single_dyc_row_text_pane_t1

0xcd3d,	// (0x00059c64) list_single_dyc_row_text_pane_t2_ParamLimits

0xcd3d,	// (0x00059c64) list_single_dyc_row_text_pane_t2

0x0cf8,	// (0x0004dc1f) list_single_dyc_row_text_pane_t3_ParamLimits

0x0cf8,	// (0x0004dc1f) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x0005cc5e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x0005cc5e) list_single_dyc_row_text_pane_t

0x0d0a,	// (0x0004dc31) list_single_dyc_row_pane_g1_ParamLimits

0x0d0a,	// (0x0004dc31) list_single_dyc_row_pane_g1

0x0d16,	// (0x0004dc3d) list_single_dyc_row_pane_g2_ParamLimits

0x0d16,	// (0x0004dc3d) list_single_dyc_row_pane_g2

0x0d22,	// (0x0004dc49) list_single_dyc_row_pane_g3_ParamLimits

0x0d22,	// (0x0004dc49) list_single_dyc_row_pane_g3

0x0d2e,	// (0x0004dc55) list_single_dyc_row_pane_g4_ParamLimits

0x0d2e,	// (0x0004dc55) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x0005cc65) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x0005cc65) list_single_dyc_row_pane_g

0x0d3a,	// (0x0004dc61) list_single_dyc_row_text_pane_ParamLimits

0x0d3a,	// (0x0004dc61) list_single_dyc_row_text_pane

0x00f2,	// (0x0004d019) bg_sp_fs_scroll_pane

0xef45,	// (0x0005be6c) thumb_sp_fs_scroll_pane

0x09a7,	// (0x0004d8ce) list_medium_line_g1_ParamLimits

0x09a7,	// (0x0004d8ce) list_medium_line_g1

0x0d59,	// (0x0004dc80) list_medium_line_t1_ParamLimits

0x0d59,	// (0x0004dc80) list_medium_line_t1

0x0206,	// (0x0004d12d) list_medium_line_x2_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x2_g1

0x0212,	// (0x0004d139) list_medium_line_x2_g2_ParamLimits

0x0212,	// (0x0004d139) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x0005cc6e) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x0005cc6e) list_medium_line_x2_g

0x0d6e,	// (0x0004dc95) list_medium_line_x2_t1_ParamLimits

0x0d6e,	// (0x0004dc95) list_medium_line_x2_t1

0x0206,	// (0x0004d12d) list_medium_line_x3_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x3_g1

0x0212,	// (0x0004d139) list_medium_line_x3_g2_ParamLimits

0x0212,	// (0x0004d139) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x0005cc6e) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x0005cc6e) list_medium_line_x3_g

0x0d6e,	// (0x0004dc95) list_medium_line_x3_t1_ParamLimits

0x0d6e,	// (0x0004dc95) list_medium_line_x3_t1

0xef4e,	// (0x0005be75) thumb_sp_fs_scroll_pane_g1

0xef57,	// (0x0005be7e) thumb_sp_fs_scroll_pane_g2

0xef60,	// (0x0005be87) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x0005cc73) thumb_sp_fs_scroll_pane_g

0xef4e,	// (0x0005be75) bg_sp_fs_scroll_pane_g1

0xef57,	// (0x0005be7e) bg_sp_fs_scroll_pane_g2

0xef60,	// (0x0005be87) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x0005cc73) bg_sp_fs_scroll_pane_g

0x0206,	// (0x0004d12d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0206,	// (0x0004d12d) list_medium_line_x2_t3_g4_g1

0x027c,	// (0x0004d1a3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x027c,	// (0x0004d1a3) list_medium_line_x2_t3_g4_g2

0x0212,	// (0x0004d139) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0212,	// (0x0004d139) list_medium_line_x2_t3_g4_g3

0x021e,	// (0x0004d145) list_medium_line_x2_t3_g4_g4_ParamLimits

0x021e,	// (0x0004d145) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0005c1f9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0005c1f9) list_medium_line_x2_t3_g4_g

0xcd97,	// (0x00059cbe) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcd97,	// (0x00059cbe) list_medium_line_x2_t3_g4_t1

0xcdad,	// (0x00059cd4) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcdad,	// (0x00059cd4) list_medium_line_x2_t3_g4_t2

0x023f,	// (0x0004d166) list_medium_line_x2_t3_g4_t3_ParamLimits

0x023f,	// (0x0004d166) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x0005cc7a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x0005cc7a) list_medium_line_x2_t3_g4_t

0x09a7,	// (0x0004d8ce) list_medium_line_g2_g1_ParamLimits

0x09a7,	// (0x0004d8ce) list_medium_line_g2_g1

0x09b3,	// (0x0004d8da) list_medium_line_g2_g2_ParamLimits

0x09b3,	// (0x0004d8da) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x0005c932) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x0005c932) list_medium_line_g2_g

0x0d84,	// (0x0004dcab) list_medium_line_g2_t1_ParamLimits

0x0d84,	// (0x0004dcab) list_medium_line_g2_t1

0x09a7,	// (0x0004d8ce) list_medium_line_t3_g2_g1_ParamLimits

0x09a7,	// (0x0004d8ce) list_medium_line_t3_g2_g1

0x09b3,	// (0x0004d8da) list_medium_line_t3_g2_g2_ParamLimits

0x09b3,	// (0x0004d8da) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x0005c932) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x0005c932) list_medium_line_t3_g2_g

0xcdc7,	// (0x00059cee) list_medium_line_t3_g2_t1_ParamLimits

0xcdc7,	// (0x00059cee) list_medium_line_t3_g2_t1

0xcdde,	// (0x00059d05) list_medium_line_t3_g2_t2_ParamLimits

0xcdde,	// (0x00059d05) list_medium_line_t3_g2_t2

0xcdf3,	// (0x00059d1a) list_medium_line_t3_g2_t3_ParamLimits

0xcdf3,	// (0x00059d1a) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x0005cc81) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x0005cc81) list_medium_line_t3_g2_t

0x0c47,	// (0x0004db6e) list_medium_line_right_icon_g1

0x0d99,	// (0x0004dcc0) list_medium_line_right_icon_t1

0x09a7,	// (0x0004d8ce) list_medium_line_t2_g1_ParamLimits

0x09a7,	// (0x0004d8ce) list_medium_line_t2_g1

0xce08,	// (0x00059d2f) list_medium_line_t2_t1_ParamLimits

0xce08,	// (0x00059d2f) list_medium_line_t2_t1

0xce22,	// (0x00059d49) list_medium_line_t2_t2_ParamLimits

0xce22,	// (0x00059d49) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x0005cc88) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x0005cc88) list_medium_line_t2_t

0x09a7,	// (0x0004d8ce) list_medium_line_t3_g1_ParamLimits

0x09a7,	// (0x0004d8ce) list_medium_line_t3_g1

0xce37,	// (0x00059d5e) list_medium_line_t3_t1_ParamLimits

0xce37,	// (0x00059d5e) list_medium_line_t3_t1

0xce4e,	// (0x00059d75) list_medium_line_t3_t2_ParamLimits

0xce4e,	// (0x00059d75) list_medium_line_t3_t2

0xce63,	// (0x00059d8a) list_medium_line_t3_t3_ParamLimits

0xce63,	// (0x00059d8a) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x0005cc8d) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x0005cc8d) list_medium_line_t3_t

0x09a7,	// (0x0004d8ce) list_medium_line_g3_g1_ParamLimits

0x09a7,	// (0x0004d8ce) list_medium_line_g3_g1

0x0da7,	// (0x0004dcce) list_medium_line_g3_g2_ParamLimits

0x0da7,	// (0x0004dcce) list_medium_line_g3_g2

0x09b3,	// (0x0004d8da) list_medium_line_g3_g3_ParamLimits

0x09b3,	// (0x0004d8da) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x0005cc94) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x0005cc94) list_medium_line_g3_g

0x0db3,	// (0x0004dcda) list_medium_line_g3_t1_ParamLimits

0x0db3,	// (0x0004dcda) list_medium_line_g3_t1

0x09a7,	// (0x0004d8ce) list_medium_line_t2_g3_g1_ParamLimits

0x09a7,	// (0x0004d8ce) list_medium_line_t2_g3_g1

0x0da7,	// (0x0004dcce) list_medium_line_t2_g3_g2_ParamLimits

0x0da7,	// (0x0004dcce) list_medium_line_t2_g3_g2

0x09b3,	// (0x0004d8da) list_medium_line_t2_g3_g3_ParamLimits

0x09b3,	// (0x0004d8da) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x0005cc94) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x0005cc94) list_medium_line_t2_g3_g

0xce75,	// (0x00059d9c) list_medium_line_t2_g3_t1_ParamLimits

0xce75,	// (0x00059d9c) list_medium_line_t2_g3_t1

0xce8f,	// (0x00059db6) list_medium_line_t2_g3_t2_ParamLimits

0xce8f,	// (0x00059db6) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x0005cc9b) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x0005cc9b) list_medium_line_t2_g3_t

0x09a7,	// (0x0004d8ce) list_medium_line_t3_g3_g1_ParamLimits

0x09a7,	// (0x0004d8ce) list_medium_line_t3_g3_g1

0x0da7,	// (0x0004dcce) list_medium_line_t3_g3_g2_ParamLimits

0x0da7,	// (0x0004dcce) list_medium_line_t3_g3_g2

0x09b3,	// (0x0004d8da) list_medium_line_t3_g3_g3_ParamLimits

0x09b3,	// (0x0004d8da) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x0005cc94) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x0005cc94) list_medium_line_t3_g3_g

0xcea4,	// (0x00059dcb) list_medium_line_t3_g3_t1_ParamLimits

0xcea4,	// (0x00059dcb) list_medium_line_t3_g3_t1

0xceb8,	// (0x00059ddf) list_medium_line_t3_g3_t2_ParamLimits

0xceb8,	// (0x00059ddf) list_medium_line_t3_g3_t2

0xceca,	// (0x00059df1) list_medium_line_t3_g3_t3_ParamLimits

0xceca,	// (0x00059df1) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x0005cca0) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x0005cca0) list_medium_line_t3_g3_t

0x0cc7,	// (0x0004dbee) list_medium_line_right_iconx2_g1

0x0c47,	// (0x0004db6e) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x0005cca7) list_medium_line_right_iconx2_g

0x0dc8,	// (0x0004dcef) list_medium_line_right_iconx2_t1

0x0cc7,	// (0x0004dbee) list_medium_line_t2_right_iconx2_g1

0x0c47,	// (0x0004db6e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x0005cca7) list_medium_line_t2_right_iconx2_g

0xcedc,	// (0x00059e03) list_medium_line_t2_right_iconx2_t1

0xceec,	// (0x00059e13) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x0005ccac) list_medium_line_t2_right_iconx2_t

0x0dd6,	// (0x0004dcfd) list_medium_line_x4_t4_t1

0xcefa,	// (0x00059e21) list_medium_line_x4_t4_t2

0xcf0a,	// (0x00059e31) list_medium_line_x4_t4_t3

0xcf1a,	// (0x00059e41) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x0005ccb1) list_medium_line_x4_t4_t

0xcf53,	// (0x00059e7a) tport_appsw_pane_ParamLimits

0xcf53,	// (0x00059e7a) tport_appsw_pane

0xcf5f,	// (0x00059e86) tport_contact_pane_ParamLimits

0xcf5f,	// (0x00059e86) tport_contact_pane

0xcf6f,	// (0x00059e96) tport_listscroll_pane_ParamLimits

0xcf6f,	// (0x00059e96) tport_listscroll_pane

0xcf7f,	// (0x00059ea6) cell_tport_appsw_pane_ParamLimits

0xcf7f,	// (0x00059ea6) cell_tport_appsw_pane

0x44b3,	// (0x000513da) tport_appsw_pane_g1_ParamLimits

0x44b3,	// (0x000513da) tport_appsw_pane_g1

0xef69,	// (0x0005be90) tport_contact_pane_g1

0xe8e1,	// (0x0005b808) tport_contact_pane_t1

0xef72,	// (0x0005be99) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x0005ccba) tport_contact_pane_t

0xef80,	// (0x0005bea7) list_tport_pane

0xef89,	// (0x0005beb0) scroll_pane_cp_030

0xef9a,	// (0x0005bec1) cell_tport_appsw_pane_g1

0xefaa,	// (0x0005bed1) cell_tport_appsw_pane_t1

0x00f2,	// (0x0004d019) grid_highlight_pane_cp019

0xcfaa,	// (0x00059ed1) list_tport_double_graphic_pane_ParamLimits

0xcfaa,	// (0x00059ed1) list_tport_double_graphic_pane

0x3810,	// (0x00050737) list_highlight_pane_cp023_ParamLimits

0x3810,	// (0x00050737) list_highlight_pane_cp023

0xcfbc,	// (0x00059ee3) list_tport_double_graphic_pane_g1_ParamLimits

0xcfbc,	// (0x00059ee3) list_tport_double_graphic_pane_g1

0xcfc9,	// (0x00059ef0) list_tport_double_graphic_pane_t1_ParamLimits

0xcfc9,	// (0x00059ef0) list_tport_double_graphic_pane_t1

0xcfde,	// (0x00059f05) list_tport_double_graphic_pane_t2_ParamLimits

0xcfde,	// (0x00059f05) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x0005ccc6) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x0005ccc6) list_tport_double_graphic_pane_t

0x00f2,	// (0x0004d019) main_cale_note_pane

0xae17,	// (0x00057d3e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xae17,	// (0x00057d3e) cell_vitu2_function_top_wide_pane_cp01

0xc74f,	// (0x00059676) wait_bar_pane_cp05_ParamLimits

0x00f2,	// (0x0004d019) listscroll_cmail_pane

0xefc0,	// (0x0005bee7) list_cmail_pane

0xcffa,	// (0x00059f21) list_cmail_body_pane

0xd014,	// (0x00059f3b) list_single_cmail_header_caption_pane

0xd039,	// (0x00059f60) list_single_cmail_header_detail_pane_ParamLimits

0xd039,	// (0x00059f60) list_single_cmail_header_detail_pane

0xd069,	// (0x00059f90) list_single_cmail_header_caption_pane_t1

0xd077,	// (0x00059f9e) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd077,	// (0x00059f9e) list_single_cmail_header_detail_pane_g1

0x0de4,	// (0x0004dd0b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0de4,	// (0x0004dd0b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x0005cccb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x0005cccb) list_single_cmail_header_detail_pane_g

0x0df0,	// (0x0004dd17) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0df0,	// (0x0004dd17) list_single_cmail_header_detail_pane_t1

0x0e26,	// (0x0004dd4d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0e26,	// (0x0004dd4d) list_single_cmail_header_editor_pane_bg

0xea82,	// (0x0005b9a9) list_cmail_body_pane_g1

0xefee,	// (0x0005bf15) list_cmail_body_pane_t1

0xde45,	// (0x0005ad6c) list_single_cmail_header_editor_pane_bg_g1

0x22e1,	// (0x0004f208) list_single_cmail_header_editor_pane_bg_g1_copy1

0xde55,	// (0x0005ad7c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xde4d,	// (0x0005ad74) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe069,	// (0x0005af90) list_single_cmail_header_editor_pane_bg_g1_copy4

0xde75,	// (0x0005ad9c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xde65,	// (0x0005ad8c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xde6d,	// (0x0005ad94) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x22c1,	// (0x0004f1e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd0b1,	// (0x00059fd8) calenote_gesture_pane_ParamLimits

0xd0b1,	// (0x00059fd8) calenote_gesture_pane

0xd0cb,	// (0x00059ff2) calenote_window_pane_ParamLimits

0xd0cb,	// (0x00059ff2) calenote_window_pane

0xeffc,	// (0x0005bf23) popup_note_window_cp01

0xd0e3,	// (0x0005a00a) calenote_swipe_1_pane_ParamLimits

0xd0e3,	// (0x0005a00a) calenote_swipe_1_pane

0xcb30,	// (0x00059a57) calenote_swipe_2_pane_ParamLimits

0xcb30,	// (0x00059a57) calenote_swipe_2_pane

0xedd4,	// (0x0005bcfb) calenote_swipe_1_pane_g1_ParamLimits

0xedd4,	// (0x0005bcfb) calenote_swipe_1_pane_g1

0xede1,	// (0x0005bd08) calenote_swipe_1_pane_g2_ParamLimits

0xede1,	// (0x0005bd08) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0005cbf5) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0005cbf5) calenote_swipe_1_pane_g

0xf00e,	// (0x0005bf35) calenote_swipe_1_pane_t1_ParamLimits

0xf00e,	// (0x0005bf35) calenote_swipe_1_pane_t1

0xedd4,	// (0x0005bcfb) calenote_swipe_2_pane_g1_ParamLimits

0xedd4,	// (0x0005bcfb) calenote_swipe_2_pane_g1

0xf02d,	// (0x0005bf54) calenote_swipe_2_pane_g2_ParamLimits

0xf02d,	// (0x0005bf54) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x0005ccd7) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x0005ccd7) calenote_swipe_2_pane_g

0xf039,	// (0x0005bf60) calenote_swipe_2_pane_t1_ParamLimits

0xf039,	// (0x0005bf60) calenote_swipe_2_pane_t1

0x00f2,	// (0x0004d019) main_mup_navstr_pane

0x9b8f,	// (0x00056ab6) main_mup3_pane_t7_ParamLimits

0x9b8f,	// (0x00056ab6) main_mup3_pane_t7

0xa577,	// (0x0005749e) main_mp4_pane_g6_ParamLimits

0xa577,	// (0x0005749e) main_mp4_pane_g6

0xa8f7,	// (0x0005781e) main_image3_pane_t4_ParamLimits

0xa8f7,	// (0x0005781e) main_image3_pane_t4

0xd0f6,	// (0x0005a01d) popup_navstr_preview_pane_ParamLimits

0xd0f6,	// (0x0005a01d) popup_navstr_preview_pane

0xd102,	// (0x0005a029) scroll_navstr_pane_ParamLimits

0xd102,	// (0x0005a029) scroll_navstr_pane

0x00f2,	// (0x0004d019) bg_popup_preview_window_pane_cp04

0xf060,	// (0x0005bf87) popup_navstr_preview_pane_t1

0xd10e,	// (0x0005a035) scroll_navstr_pane_g1_ParamLimits

0xd10e,	// (0x0005a035) scroll_navstr_pane_g1

0xd11b,	// (0x0005a042) scroll_navstr_pane_t1_ParamLimits

0xd11b,	// (0x0005a042) scroll_navstr_pane_t1

0xf005,	// (0x0005bf2c) bg_button_pane_cp014

0xf005,	// (0x0005bf2c) bg_button_pane_cp030

0xca24,	// (0x0005994b) list_double_fisheye_pane_g4_ParamLimits

0xca24,	// (0x0005994b) list_double_fisheye_pane_g4

0xca30,	// (0x00059957) list_double_fisheye_pane_g5_ParamLimits

0xca30,	// (0x00059957) list_double_fisheye_pane_g5

0xefc8,	// (0x0005beef) sp_fs_scroll_pane_cp03

0xeec7,	// (0x0005bdee) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xeed3,	// (0x0005bdfa) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x0005cc12) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xeedf,	// (0x0005be06) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcff0,	// (0x00059f17) sp_fs_scroll_pane_cp02

0x1fef,	// (0x0004ef16) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1fef,	// (0x0004ef16) popup_sp_fs_calendar_preview_list_single_pane

0x00f2,	// (0x0004d019) main_cam6_pano_pane

0x8b84,	// (0x00055aab) main_mup3_pane_ParamLimits

0x00f2,	// (0x0004d019) main_phacti_pane

0xc624,	// (0x0005954b) bg_button_pane_cp11

0xc63c,	// (0x00059563) main_mobtv_info_pane_g2_ParamLimits

0xc63c,	// (0x00059563) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x0005cb72) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x0005cb72) main_mobtv_info_pane_g

0xc7ee,	// (0x00059715) sc_clock_pane_t5_ParamLimits

0xc7ee,	// (0x00059715) sc_clock_pane_t5

0xc895,	// (0x000597bc) main_radioblah_pane_g1_ParamLimits

0xed20,	// (0x0005bc47) main_radioblah_pane_t3_ParamLimits

0xed20,	// (0x0005bc47) main_radioblah_pane_t3

0xed38,	// (0x0005bc5f) main_radioblah_pane_t4_ParamLimits

0xed38,	// (0x0005bc5f) main_radioblah_pane_t4

0xc8b3,	// (0x000597da) main_radioblah_text_pane_ParamLimits

0xc8b3,	// (0x000597da) main_radioblah_text_pane

0xc8c0,	// (0x000597e7) main_radioblah_info_pane_g1_ParamLimits

0xc955,	// (0x0005987c) main_radioblah_info_pane_t4_ParamLimits

0xc955,	// (0x0005987c) main_radioblah_info_pane_t4

0x3810,	// (0x00050737) main_sp_fs_calendar_pane

0xd12d,	// (0x0005a054) main_phacti_pane_g1

0xd135,	// (0x0005a05c) phacti_note_pane_ParamLimits

0xd135,	// (0x0005a05c) phacti_note_pane

0xf077,	// (0x0005bf9e) phacti_term_pane_ParamLimits

0xf077,	// (0x0005bf9e) phacti_term_pane

0xf08c,	// (0x0005bfb3) phacti_note_pane_t1_ParamLimits

0xf08c,	// (0x0005bfb3) phacti_note_pane_t1

0x0e38,	// (0x0004dd5f) phacti_term_pane_g1

0x0e40,	// (0x0004dd67) phacti_term_pane_t1_ParamLimits

0x0e40,	// (0x0004dd67) phacti_term_pane_t1

0xf0a3,	// (0x0005bfca) popup_sp_fs_calendar_preview_list_single_pane_g1

0x20e2,	// (0x0004f009) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x0005cce1) popup_sp_fs_calendar_preview_list_single_pane_g

0xf0ab,	// (0x0005bfd2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xf0ab,	// (0x0005bfd2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xf0c0,	// (0x0005bfe7) aid_popup_sp_fs_bg_corner_pane

0x41eb,	// (0x00051112) popup_sp_fs_calendar_preview_bg_pane_g1

0x00f2,	// (0x0004d019) popup_sp_fs_calendar_preview_bg_pane

0xf0c8,	// (0x0005bfef) popup_sp_fs_calendar_preview_list_pane

0x3810,	// (0x00050737) bg_main_sp_fs_cale_pane_ParamLimits

0x3810,	// (0x00050737) bg_main_sp_fs_cale_pane

0x0e6a,	// (0x0004dd91) listscroll_cale_mrui_pane_ParamLimits

0x0e6a,	// (0x0004dd91) listscroll_cale_mrui_pane

0x0e7e,	// (0x0004dda5) listscroll_sp_fs_schedule_track_pane

0x0e87,	// (0x0004ddae) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0e87,	// (0x0004ddae) main_sp_fs_ctrlbar_pane_cp01

0xf0d0,	// (0x0005bff7) main_sp_fs_ribbon_pane

0x0e98,	// (0x0004ddbf) popup_sp_fs_cale_preview_window

0xd17c,	// (0x0005a0a3) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd17c,	// (0x0005a0a3) list_single_sp_fs_schedule_track_pane

0xa1f5,	// (0x0005711c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa1f5,	// (0x0005711c) bg_sp_fs_highlight_list_pane_cp03

0xd19b,	// (0x0005a0c2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd19b,	// (0x0005a0c2) list_single_sp_fs_schedule_track_pane_g1

0xd1a7,	// (0x0005a0ce) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd1a7,	// (0x0005a0ce) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x0005cce6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x0005cce6) list_single_sp_fs_schedule_track_pane_g

0xd1b3,	// (0x0005a0da) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd1b3,	// (0x0005a0da) list_single_sp_fs_schedule_track_pane_t1

0xd1cb,	// (0x0005a0f2) sp_fs_schedule_track_pane_ParamLimits

0xd1cb,	// (0x0005a0f2) sp_fs_schedule_track_pane

0x0eaa,	// (0x0004ddd1) sp_fs_schedule_track_pane_g1

0x0eb2,	// (0x0004ddd9) sp_fs_schedule_track_pane_g2

0x0eba,	// (0x0004dde1) sp_fs_schedule_track_pane_g3

0x0ec2,	// (0x0004dde9) sp_fs_schedule_track_pane_g4

0x0eca,	// (0x0004ddf1) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x0005cceb) sp_fs_schedule_track_pane_g

0xde45,	// (0x0005ad6c) bg_sp_fs_schedule_viewer_highlight_g1

0x22e1,	// (0x0004f208) bg_sp_fs_schedule_viewer_highlight_g2

0xde4d,	// (0x0005ad74) bg_sp_fs_schedule_viewer_highlight_g3

0xde55,	// (0x0005ad7c) bg_sp_fs_schedule_viewer_highlight_g4

0xe069,	// (0x0005af90) bg_sp_fs_schedule_viewer_highlight_g5

0xde65,	// (0x0005ad8c) bg_sp_fs_schedule_viewer_highlight_g6

0xde6d,	// (0x0005ad94) bg_sp_fs_schedule_viewer_highlight_g7

0xde75,	// (0x0005ad9c) bg_sp_fs_schedule_viewer_highlight_g8

0x22c1,	// (0x0004f1e8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x0005ccf6) bg_sp_fs_schedule_viewer_highlight_g

0x00f2,	// (0x0004d019) bg_main_sp_fs_ribbon_pane

0xd1db,	// (0x0005a102) main_sp_fs_ribbon_pane_g1

0x0ed2,	// (0x0004ddf9) main_sp_fs_ribbon_pane_t1

0xd1e4,	// (0x0005a10b) main_sp_fs_ribbon_pane_t2

0x0ee1,	// (0x0004de08) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x0005cd09) main_sp_fs_ribbon_pane_t

0x0ef0,	// (0x0004de17) main_sp_fs_ribbon_scheduler_pane

0x0ef8,	// (0x0004de1f) bg_main_sp_fs_ribbon_pane_g1

0x0f01,	// (0x0004de28) bg_main_sp_fs_ribbon_pane_g2

0x0f0a,	// (0x0004de31) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x0005cd10) bg_main_sp_fs_ribbon_pane_g

0x0f12,	// (0x0004de39) main_sp_fs_ribbon_scheduler_pane_g1

0x0f1b,	// (0x0004de42) main_sp_fs_ribbon_scheduler_pane_g2

0x0f24,	// (0x0004de4b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x0005cd17) main_sp_fs_ribbon_scheduler_pane_g

0x0f2d,	// (0x0004de54) list_cale_mrui_pane

0xd1f3,	// (0x0005a11a) sp_fs_scroll_pane_cp07_ParamLimits

0xd1f3,	// (0x0005a11a) sp_fs_scroll_pane_cp07

0xd209,	// (0x0005a130) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd209,	// (0x0005a130) bg_sp_fs_schedule_viewer_highlight

0x0f36,	// (0x0004de5d) list_single_sp_fs_schedule_track_pane_cp01

0x0f3e,	// (0x0004de65) list_sp_fs_schedule_track_pane

0x0f46,	// (0x0004de6d) sp_fs_scroll_pane_cp06_ParamLimits

0x0f46,	// (0x0004de6d) sp_fs_scroll_pane_cp06

0x41eb,	// (0x00051112) bgmain_sp_fs_calendar_pane_g1

0xd216,	// (0x0005a13d) list_single_cale_mrui_pane_ParamLimits

0xd216,	// (0x0005a13d) list_single_cale_mrui_pane

0x0f58,	// (0x0004de7f) list_single_cale_mrui_row_pane_ParamLimits

0x0f58,	// (0x0004de7f) list_single_cale_mrui_row_pane

0x0f65,	// (0x0004de8c) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0f65,	// (0x0004de8c) list_single_cale_mrui_row_pane_g1

0x0faa,	// (0x0004ded1) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0faa,	// (0x0004ded1) list_single_cale_mrui_row_pane_t1

0xd241,	// (0x0005a168) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd241,	// (0x0005a168) list_single_cale_mrui_row_pane_t2

0x0fbc,	// (0x0004dee3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0fbc,	// (0x0004dee3) list_single_cale_mrui_row_pane_t3

0x0feb,	// (0x0004df12) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0feb,	// (0x0004df12) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x0005cd25) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x0005cd25) list_single_cale_mrui_row_pane_t

0xd2a7,	// (0x0005a1ce) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd2a7,	// (0x0005a1ce) list_single_cmail_header_editor_pane_bg_cp01

0xd2c7,	// (0x0005a1ee) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd2c7,	// (0x0005a1ee) list_single_cmail_header_editor_pane_bg_cp02

0xd2e3,	// (0x0005a20a) main_radioblah_text_pane_t1_ParamLimits

0xd2e3,	// (0x0005a20a) main_radioblah_text_pane_t1

0x101a,	// (0x0004df41) cam6_indi_pane_cp01

0x1022,	// (0x0004df49) cam6_mode_pane_cp01

0x102a,	// (0x0004df51) cam6_pano_pane

0x1033,	// (0x0004df5a) cam6_zoom_pane_cp01

0x103b,	// (0x0004df62) cam6_pano_image_pane

0x1046,	// (0x0004df6d) cam6_pano_pane_g1

0xea82,	// (0x0005b9a9) cam6_pano_pane_g2

0x104f,	// (0x0004df76) cam6_pano_pane_g3

0x1058,	// (0x0004df7f) cam6_pano_pane_g4

0x4784,	// (0x000516ab) cam6_pano_pane_g5

0x1061,	// (0x0004df88) cam6_pano_pane_g6

0x106b,	// (0x0004df92) cam6_pano_pane_g7

0x1073,	// (0x0004df9a) cam6_pano_pane_g8

0x107c,	// (0x0004dfa3) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x0005cd2e) cam6_pano_pane_g

0x00f2,	// (0x0004d019) main_browser_tag_pane

0xf058,	// (0x0005bf7f) grid_navstr_albumart_pane

0x1087,	// (0x0004dfae) cell_navstr_albumart_pane_ParamLimits

0x1087,	// (0x0004dfae) cell_navstr_albumart_pane

0x10aa,	// (0x0004dfd1) cell_navstr_albumart_pane_g1

0x3bef,	// (0x00050b16) cell_navstr_albumart_pane_g2

0x3bff,	// (0x00050b26) cell_navstr_albumart_pane_g3

0x3bf7,	// (0x00050b1e) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x0005cd41) cell_navstr_albumart_pane_g

0xd2fe,	// (0x0005a225) bt_list_pane_ParamLimits

0xd2fe,	// (0x0005a225) bt_list_pane

0xd31e,	// (0x0005a245) bt_list_pane_t1

0xd32d,	// (0x0005a254) bt_list_pane_t2

0x0001,

0xfe23,	// (0x0005cd4a) bt_list_pane_t

0x00f2,	// (0x0004d019) main_cale_prevew_pane

0xd33c,	// (0x0005a263) popup_cale_preview_window_ParamLimits

0xd33c,	// (0x0005a263) popup_cale_preview_window

0x3810,	// (0x00050737) bg_popup_preview_window_pane_cp05_ParamLimits

0x3810,	// (0x00050737) bg_popup_preview_window_pane_cp05

0x10b2,	// (0x0004dfd9) list_cale_preview_pane_ParamLimits

0x10b2,	// (0x0004dfd9) list_cale_preview_pane

0xd355,	// (0x0005a27c) list_double_cale_preview_pane_ParamLimits

0xd355,	// (0x0005a27c) list_double_cale_preview_pane

0xd367,	// (0x0005a28e) list_single_cale_preview_pane_ParamLimits

0xd367,	// (0x0005a28e) list_single_cale_preview_pane

0xd37d,	// (0x0005a2a4) list_single_cale_preview_pane_g1

0xd385,	// (0x0005a2ac) list_single_cale_preview_pane_t1_ParamLimits

0xd385,	// (0x0005a2ac) list_single_cale_preview_pane_t1

0xd39a,	// (0x0005a2c1) list_double_cale_preview_pane_g1

0xd3a2,	// (0x0005a2c9) list_double_cale_preview_pane_t1_ParamLimits

0xd3a2,	// (0x0005a2c9) list_double_cale_preview_pane_t1

0xd3b7,	// (0x0005a2de) list_double_cale_preview_pane_t2_ParamLimits

0xd3b7,	// (0x0005a2de) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x0005cd4f) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x0005cd4f) list_double_cale_preview_pane_t

0x00f2,	// (0x0004d019) main_ezdial_pane

0x3810,	// (0x00050737) main_sp_fs_email_pane_ParamLimits

0xcb68,	// (0x00059a8f) cmail_ddmenu_btn01_pane_ParamLimits

0xcb68,	// (0x00059a8f) cmail_ddmenu_btn01_pane

0xcb85,	// (0x00059aac) cmail_ddmenu_btn02_pane_ParamLimits

0xcb85,	// (0x00059aac) cmail_ddmenu_btn02_pane

0xcba3,	// (0x00059aca) cmail_ddmenu_btn03_pane_ParamLimits

0xcba3,	// (0x00059aca) cmail_ddmenu_btn03_pane

0xcbd1,	// (0x00059af8) main_sp_fs_ctrlbar_pane_ParamLimits

0xcbeb,	// (0x00059b12) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcffa,	// (0x00059f21) list_cmail_body_pane_ParamLimits

0xefd8,	// (0x0005beff) bg_button_pane_cp12

0xefe1,	// (0x0005bf08) list_single_cmail_header_detail_pane_g3_ParamLimits

0xefe1,	// (0x0005bf08) list_single_cmail_header_detail_pane_g3

0xd08d,	// (0x00059fb4) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd08d,	// (0x00059fb4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x0005ccd2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x0005ccd2) list_single_cmail_header_detail_pane_t

0x0e55,	// (0x0004dd7c) phacti_term_pane_t2_ParamLimits

0x0e55,	// (0x0004dd7c) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x0005ccdc) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x0005ccdc) phacti_term_pane_t

0x10be,	// (0x0004dfe5) aid_size_list_single_double

0xd3cf,	// (0x0005a2f6) popup_ezdial_listscroll_window

0xd3f0,	// (0x0005a317) popup_number_entry_window_cp01

0x29be,	// (0x0004f8e5) bg_popup_call_pane_cp09

0x10ca,	// (0x0004dff1) ezdial_list_pane

0x10d2,	// (0x0004dff9) scroll_pane_cp23

0x3fbf,	// (0x00050ee6) bg_button_pane_cp028_ParamLimits

0x3fbf,	// (0x00050ee6) bg_button_pane_cp028

0xd3fe,	// (0x0005a325) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd3fe,	// (0x0005a325) cmail_ddmenu_btn01_pane_g1

0xd410,	// (0x0005a337) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd410,	// (0x0005a337) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x0005cd54) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x0005cd54) cmail_ddmenu_btn01_pane_g

0x10da,	// (0x0004e001) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x10da,	// (0x0004e001) cmail_ddmenu_btn01_pane_t1

0x3dd2,	// (0x00050cf9) bg_button_pane_cp029_ParamLimits

0x3dd2,	// (0x00050cf9) bg_button_pane_cp029

0xd410,	// (0x0005a337) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd410,	// (0x0005a337) cmail_ddmenu_btn02_pane_g1

0xd428,	// (0x0005a34f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd428,	// (0x0005a34f) cmail_ddmenu_btn02_pane_t1

0xa1f5,	// (0x0005711c) bg_button_pane_cp031_ParamLimits

0xa1f5,	// (0x0005711c) bg_button_pane_cp031

0xd410,	// (0x0005a337) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd410,	// (0x0005a337) cmail_ddmenu_btn03_pane_g1

0xd428,	// (0x0005a34f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd428,	// (0x0005a34f) cmail_ddmenu_btn03_pane_t1

0xa794,	// (0x000576bb) cell_dialer2_keypad_pane_t1_ParamLimits

0xa7ae,	// (0x000576d5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa7ae,	// (0x000576d5) cell_dialer2_keypad_pane_t1_copy1

0xc4a9,	// (0x000593d0) ncimui_group_button_pane

0x3810,	// (0x00050737) main_sp_fs_calendar_pane_ParamLimits

0xd014,	// (0x00059f3b) list_single_cmail_header_caption_pane_ParamLimits

0xe2e3,	// (0x0005b20a) aid_recal_txt_sm_pane

0x00f2,	// (0x0004d019) mian_recal_day_pane

0x0e98,	// (0x0004ddbf) popup_sp_fs_cale_preview_window_ParamLimits

0x00f2,	// (0x0004d019) list_recal_day_pane

0x1109,	// (0x0004e030) list_single_recal_day_pane_ParamLimits

0x1109,	// (0x0004e030) list_single_recal_day_pane

0x111b,	// (0x0004e042) list_single_recal_day_pane_g1_ParamLimits

0x111b,	// (0x0004e042) list_single_recal_day_pane_g1

0x1127,	// (0x0004e04e) list_single_recal_day_pane_g2_ParamLimits

0x1127,	// (0x0004e04e) list_single_recal_day_pane_g2

0x1137,	// (0x0004e05e) list_single_recal_day_pane_g3_ParamLimits

0x1137,	// (0x0004e05e) list_single_recal_day_pane_g3

0xd44c,	// (0x0005a373) list_single_recal_day_pane_g4_ParamLimits

0xd44c,	// (0x0005a373) list_single_recal_day_pane_g4

0x1143,	// (0x0004e06a) list_single_recal_day_pane_g5_ParamLimits

0x1143,	// (0x0004e06a) list_single_recal_day_pane_g5

0x1153,	// (0x0004e07a) list_single_recal_day_pane_g6_ParamLimits

0x1153,	// (0x0004e07a) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x0005cd63) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x0005cd63) list_single_recal_day_pane_g

0x116a,	// (0x0004e091) list_single_recal_day_pane_t1

0x117c,	// (0x0004e0a3) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x0005cd6e) list_single_recal_day_pane_t

0xd46c,	// (0x0005a393) ncimui_query_button_pane_ParamLimits

0xd46c,	// (0x0005a393) ncimui_query_button_pane

0xd47c,	// (0x0005a3a3) ncimui_query_button_pane_t1_ParamLimits

0xd47c,	// (0x0005a3a3) ncimui_query_button_pane_t1

0x1191,	// (0x0004e0b8) ncimui_query_button_pane_t2_ParamLimits

0x1191,	// (0x0004e0b8) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x0005cd73) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x0005cd73) ncimui_query_button_pane_t

0xd48f,	// (0x0005a3b6) query_button_pane_ParamLimits

0xd48f,	// (0x0005a3b6) query_button_pane

0x00f2,	// (0x0004d019) bg_button_pane_cp0028

0x11a4,	// (0x0004e0cb) query_button_pane_t1

0x8ba0,	// (0x00055ac7) main_tport_pane_ParamLimits

0xcf2a,	// (0x00059e51) bg_popup_window_pane_cp01_ParamLimits

0xcf2a,	// (0x00059e51) bg_popup_window_pane_cp01

0xcf37,	// (0x00059e5e) heading_pane_cp08_ParamLimits

0xcf37,	// (0x00059e5e) heading_pane_cp08

0xcf45,	// (0x00059e6c) heading_pane_cp07_ParamLimits

0xcf45,	// (0x00059e6c) heading_pane_cp07

0xef9a,	// (0x0005bec1) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x0005ccbf) cell_tport_appsw_pane_g

0x82a9,	// (0x000551d0) input_candi_list_open_g1

0x2488,	// (0x0004f3af) list_cale_time_pane_g6_ParamLimits

0x2488,	// (0x0004f3af) list_cale_time_pane_g6

0x9618,	// (0x0005653f) aid_size_touch_calib_1_ParamLimits

0x9618,	// (0x0005653f) aid_size_touch_calib_1

0x9624,	// (0x0005654b) aid_size_touch_calib_2_ParamLimits

0x9624,	// (0x0005654b) aid_size_touch_calib_2

0x9632,	// (0x00056559) aid_size_touch_calib_3_ParamLimits

0x9632,	// (0x00056559) aid_size_touch_calib_3

0x9642,	// (0x00056569) aid_size_touch_calib_4_ParamLimits

0x9642,	// (0x00056569) aid_size_touch_calib_4

0x9650,	// (0x00056577) main_touch_calib_button_group_pane_ParamLimits

0x9650,	// (0x00056577) main_touch_calib_button_group_pane

0x965e,	// (0x00056585) main_touch_calib_pane_g1_ParamLimits

0x966a,	// (0x00056591) main_touch_calib_pane_g2_ParamLimits

0x9676,	// (0x0005659d) main_touch_calib_pane_g3_ParamLimits

0x9682,	// (0x000565a9) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0005c688) main_touch_calib_pane_g_ParamLimits

0x968e,	// (0x000565b5) main_touch_calib_pane_t1_ParamLimits

0x96a5,	// (0x000565cc) main_touch_calib_pane_t2_ParamLimits

0x96bc,	// (0x000565e3) main_touch_calib_pane_t3_ParamLimits

0x96d0,	// (0x000565f7) main_touch_calib_pane_t4_ParamLimits

0x96e4,	// (0x0005660b) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0005c691) main_touch_calib_pane_t_ParamLimits

0x455a,	// (0x00051481) list_single_fp_cale_pane_g3_ParamLimits

0x455a,	// (0x00051481) list_single_fp_cale_pane_g3

0x8b84,	// (0x00055aab) bg_button_pane_cp012_ParamLimits

0x8b84,	// (0x00055aab) bg_vkb2_func_pane_cp03_ParamLimits

0xb5c5,	// (0x000584ec) cell_vitu2_function_top_pane_g1_ParamLimits

0x8b84,	// (0x00055aab) bg_vkb2_func_pane_cp04_ParamLimits

0xc431,	// (0x00059358) main_ncimui_button_group_pane_ParamLimits

0xc431,	// (0x00059358) main_ncimui_button_group_pane

0xc497,	// (0x000593be) main_ncimui_pane_t3_ParamLimits

0xc497,	// (0x000593be) main_ncimui_pane_t3

0xf06e,	// (0x0005bf95) phacti_button_group_pane

0x10be,	// (0x0004dfe5) aid_size_list_single_double_ParamLimits

0xd3cf,	// (0x0005a2f6) popup_ezdial_listscroll_window_ParamLimits

0xd3f0,	// (0x0005a317) popup_number_entry_window_cp01_ParamLimits

0xd49c,	// (0x0005a3c3) phacti_button_pane_ParamLimits

0xd49c,	// (0x0005a3c3) phacti_button_pane

0x00f2,	// (0x0004d019) bg_button_pane_cp14

0x11b2,	// (0x0004e0d9) phacti_button_pane_t1

0xd4ad,	// (0x0005a3d4) main_touch_calib_button_pane_ParamLimits

0xd4ad,	// (0x0005a3d4) main_touch_calib_button_pane

0x1eeb,	// (0x0004ee12) bg_button_pane_cp18_ParamLimits

0x1eeb,	// (0x0004ee12) bg_button_pane_cp18

0x11c0,	// (0x0004e0e7) main_touch_calib_button_pane_t1_ParamLimits

0x11c0,	// (0x0004e0e7) main_touch_calib_button_pane_t1

0x11d6,	// (0x0004e0fd) main_touch_calib_button_pane_t2_ParamLimits

0x11d6,	// (0x0004e0fd) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x0005cd78) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x0005cd78) main_touch_calib_button_pane_t

0x00f2,	// (0x0004d019) cell_ncimui_button_pane

0x00f2,	// (0x0004d019) bg_button_pane_cp032

0x11f4,	// (0x0004e11b) cell_ncimui_button_pane_t1

0xa80a,	// (0x00057731) image3_infobar_pane_ParamLimits

0xa80a,	// (0x00057731) image3_infobar_pane

0xc810,	// (0x00059737) fs_bigclock_status_pane_ParamLimits

0xc810,	// (0x00059737) fs_bigclock_status_pane

0xc81d,	// (0x00059744) main_fs_bigclock_clock_pane_ParamLimits

0xc81d,	// (0x00059744) main_fs_bigclock_clock_pane

0xc833,	// (0x0005975a) main_fs_bigclock_indi_pane_ParamLimits

0xc833,	// (0x0005975a) main_fs_bigclock_indi_pane

0xc863,	// (0x0005978a) main_fs_bigclock_swipe_pane_ParamLimits

0xc863,	// (0x0005978a) main_fs_bigclock_swipe_pane

0x00f2,	// (0x0004d019) main_fs_clock_dumped_data

0xeb8f,	// (0x0005bab6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xeb8f,	// (0x0005bab6) list_single_fs_bigclock_indicator_pane_g1

0xebb5,	// (0x0005badc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xebb5,	// (0x0005badc) list_single_fs_bigclock_indicator_pane_g2

0xebcf,	// (0x0005baf6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xebcf,	// (0x0005baf6) list_single_fs_bigclock_indicator_pane_g3

0xebe9,	// (0x0005bb10) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xebe9,	// (0x0005bb10) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x0005cba6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x0005cba6) list_single_fs_bigclock_indicator_pane_g

0xec12,	// (0x0005bb39) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xec12,	// (0x0005bb39) list_single_fs_bigclock_indicator_pane_t1

0xec3a,	// (0x0005bb61) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xec3a,	// (0x0005bb61) list_single_fs_bigclock_indicator_pane_t2

0xec62,	// (0x0005bb89) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xec62,	// (0x0005bb89) list_single_fs_bigclock_indicator_pane_t3

0xec8a,	// (0x0005bbb1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xec8a,	// (0x0005bbb1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x0005cbb1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x0005cbb1) list_single_fs_bigclock_indicator_pane_t

0x1202,	// (0x0004e129) image3_infobar_fav_pane_ParamLimits

0x1202,	// (0x0004e129) image3_infobar_fav_pane

0x1212,	// (0x0004e139) image3_infobar_loc_pane_ParamLimits

0x1212,	// (0x0004e139) image3_infobar_loc_pane

0x1226,	// (0x0004e14d) image3_infobar_time_pane_ParamLimits

0x1226,	// (0x0004e14d) image3_infobar_time_pane

0x41eb,	// (0x00051112) image3_infobar_time_pane_g1

0x1236,	// (0x0004e15d) image3_infobar_time_pane_t1

0x41eb,	// (0x00051112) image3_infobar_loc_pane_g1

0x1244,	// (0x0004e16b) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x0005cd7d) image3_infobar_loc_pane_g

0x124c,	// (0x0004e173) image3_infobar_loc_pane_t1

0x41eb,	// (0x00051112) image3_infobar_fav_pane_g1

0x125a,	// (0x0004e181) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x0005cd82) image3_infobar_fav_pane_g

0x1262,	// (0x0004e189) fs_bigclock_status_battery_pane

0x126b,	// (0x0004e192) fs_bigclock_status_signal_pane

0x1274,	// (0x0004e19b) fs_bigclock_status_title_pane

0x127d,	// (0x0004e1a4) fs_bigclock_status_signal_pane_g1

0x1286,	// (0x0004e1ad) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x0005cd87) fs_bigclock_status_signal_pane_g

0x128e,	// (0x0004e1b5) fs_bigclock_status_battery_pane_g1

0x1297,	// (0x0004e1be) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x0005cd8c) fs_bigclock_status_battery_pane_g

0x129f,	// (0x0004e1c6) fs_bigclock_status_title_pane_t1

0x41eb,	// (0x00051112) main_fs_bigclock_clock_pane_g1

0x12ad,	// (0x0004e1d4) main_fs_bigclock_clock_pane_g2

0x12ad,	// (0x0004e1d4) main_fs_bigclock_clock_pane_g3

0x12ad,	// (0x0004e1d4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x0005cd91) main_fs_bigclock_clock_pane_g

0x12b5,	// (0x0004e1dc) main_fs_bigclock_clock_pane_t1

0x12c3,	// (0x0004e1ea) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x0005cd9a) main_fs_bigclock_clock_pane_t

0x12d2,	// (0x0004e1f9) list_single_fs_bigclock_indicator_pane_ParamLimits

0x12d2,	// (0x0004e1f9) list_single_fs_bigclock_indicator_pane

0xd4bf,	// (0x0005a3e6) list_single_fs_bigclock_pane_ParamLimits

0xd4bf,	// (0x0005a3e6) list_single_fs_bigclock_pane

0x12ec,	// (0x0004e213) main_fs_bigclock_indicator_pane_t1

0x12fb,	// (0x0004e222) list_single_fs_bigclock_pane_g1

0x1303,	// (0x0004e22a) list_single_fs_bigclock_pane_t1

0x41eb,	// (0x00051112) main_fs_bigclock_swipe_pane_g1

0x1346,	// (0x0004e26d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x0005cdab) main_fs_bigclock_swipe_pane_g

0x134e,	// (0x0004e275) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x134e,	// (0x0004e275) main_fs_bigclock_swipe_pane_t1

0x7a45,	// (0x0005496c) call_type_pane_ParamLimits

0x00f2,	// (0x0004d019) main_btmg_pane

0x0f91,	// (0x0004deb8) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0f91,	// (0x0004deb8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x0005cd1e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x0005cd1e) list_single_cale_mrui_row_pane_g

0x10f9,	// (0x0004e020) list_recal_vselct_arw_lo_pane

0x1101,	// (0x0004e028) list_recal_vselct_arw_up_pane

0x0ae3,	// (0x0004da0a) list_recal_vselct_pane

0xd520,	// (0x0005a447) btmg_button_pane

0xd52c,	// (0x0005a453) main_btmg_pane_g1

0x00f2,	// (0x0004d019) bg_button_pane_cp044

0x136b,	// (0x0004e292) btmg_button_pane_t1

0x3dca,	// (0x00050cf1) aid_listscroll_gen

0x3810,	// (0x00050737) main_cntbar_detail_pane

0xefb8,	// (0x0005bedf) list_cmail_folder_pane

0xefc8,	// (0x0005beef) sp_fs_scroll_pane_cp03_ParamLimits

0xd534,	// (0x0005a45b) list_single_fs_dyc_pane_cp01_ParamLimits

0xd534,	// (0x0005a45b) list_single_fs_dyc_pane_cp01

0x1379,	// (0x0004e2a0) aid_size_cmail_indent

0x1382,	// (0x0004e2a9) list_single_dyc_row_pane_cp01

0xd57a,	// (0x0005a4a1) cntbar_detail_list_pane_ParamLimits

0xd57a,	// (0x0005a4a1) cntbar_detail_list_pane

0xd5b4,	// (0x0005a4db) main_cntbar_detail_cont_pane_ParamLimits

0xd5b4,	// (0x0005a4db) main_cntbar_detail_cont_pane

0x79df,	// (0x00054906) scroll_pane_cp032_ParamLimits

0x79df,	// (0x00054906) scroll_pane_cp032

0xd5c0,	// (0x0005a4e7) cntbar_detail_list_event_pane_ParamLimits

0xd5c0,	// (0x0005a4e7) cntbar_detail_list_event_pane

0xd586,	// (0x0005a4ad) cntbar_detail_list_shct_pane

0x232f,	// (0x0004f256) aid_list_gen

0x138b,	// (0x0004e2b2) aid_scroll

0x1394,	// (0x0004e2bb) aid_size_touch_scroll_bar

0xd5d4,	// (0x0005a4fb) aid_list_double

0x139d,	// (0x0004e2c4) aid_list_single

0xd5dd,	// (0x0005a504) aid_list_single_lg

0x13a6,	// (0x0004e2cd) aid_list_z_g_a_sm

0x13ae,	// (0x0004e2d5) aid_list_z_g_d

0x13b6,	// (0x0004e2dd) aid_txt_z_prm

0xd5e6,	// (0x0005a50d) aid_txt_z_prm_cp01

0xd5f4,	// (0x0005a51b) aid_txt_z_sec

0xd602,	// (0x0005a529) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd602,	// (0x0005a529) main_cntbar_detail_cont_pane_g1

0xd60f,	// (0x0005a536) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd60f,	// (0x0005a536) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x0005cdb0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x0005cdb0) main_cntbar_detail_cont_pane_g

0x13c4,	// (0x0004e2eb) main_cntbar_detail_cont_pane_t1

0x13d2,	// (0x0004e2f9) main_cntbar_detail_cont_pane_t2

0x13e0,	// (0x0004e307) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x0005cdb5) main_cntbar_detail_cont_pane_t

0xd61b,	// (0x0005a542) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd61b,	// (0x0005a542) cell_cntbar_detail_list_shct_pane

0x13ee,	// (0x0004e315) cntbar_detail_list_shct_pane_g1

0x13f7,	// (0x0004e31e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x0005cdbc) cntbar_detail_list_shct_pane_g

0xd62f,	// (0x0005a556) cntbar_detail_list_event_pane_g1_ParamLimits

0xd62f,	// (0x0005a556) cntbar_detail_list_event_pane_g1

0xd63b,	// (0x0005a562) cntbar_detail_list_event_pane_g2_ParamLimits

0xd63b,	// (0x0005a562) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x0005cdc1) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x0005cdc1) cntbar_detail_list_event_pane_g

0xd6a7,	// (0x0005a5ce) cntbar_detail_list_event_pane_t1_ParamLimits

0xd6a7,	// (0x0005a5ce) cntbar_detail_list_event_pane_t1

0xd6bc,	// (0x0005a5e3) cntbar_detail_list_event_pane_t2_ParamLimits

0xd6bc,	// (0x0005a5e3) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x0005cdce) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x0005cdce) cntbar_detail_list_event_pane_t

0x41eb,	// (0x00051112) cell_cntbar_detail_list_shct_pane_g1

0x7df5,	// (0x00054d1c) navi_pane_mv_g3

0x3810,	// (0x00050737) main_cntbar_detail_pane_ParamLimits

0x00f2,	// (0x0004d019) main_notif_wgt_pane

0xa4be,	// (0x000573e5) aid_tch_main_mp4_pane_g4

0xa6f3,	// (0x0005761a) popup_slider_window_cp02

0x10ef,	// (0x0004e016) list_recal_day_event_pane

0xd55a,	// (0x0005a481) cntbar_detail_btn_pane_ParamLimits

0xd55a,	// (0x0005a481) cntbar_detail_btn_pane

0xd56a,	// (0x0005a491) cntbar_detail_btn_pane_cp01_ParamLimits

0xd56a,	// (0x0005a491) cntbar_detail_btn_pane_cp01

0xd586,	// (0x0005a4ad) cntbar_detail_list_shct_pane_ParamLimits

0xd592,	// (0x0005a4b9) cntbar_detail_pane_g1_ParamLimits

0xd592,	// (0x0005a4b9) cntbar_detail_pane_g1

0xd59e,	// (0x0005a4c5) cntbar_detail_pane_t1_ParamLimits

0xd59e,	// (0x0005a4c5) cntbar_detail_pane_t1

0xd647,	// (0x0005a56e) cntbar_detail_list_event_pane_g3_ParamLimits

0xd647,	// (0x0005a56e) cntbar_detail_list_event_pane_g3

0xd65f,	// (0x0005a586) cntbar_detail_list_event_pane_g4_ParamLimits

0xd65f,	// (0x0005a586) cntbar_detail_list_event_pane_g4

0xd677,	// (0x0005a59e) cntbar_detail_list_event_pane_g5_ParamLimits

0xd677,	// (0x0005a59e) cntbar_detail_list_event_pane_g5

0xd68f,	// (0x0005a5b6) cntbar_detail_list_event_pane_g6_ParamLimits

0xd68f,	// (0x0005a5b6) cntbar_detail_list_event_pane_g6

0xd6d1,	// (0x0005a5f8) cntbar_detail_list_event_pane_t3_ParamLimits

0xd6d1,	// (0x0005a5f8) cntbar_detail_list_event_pane_t3

0xd6e3,	// (0x0005a60a) popup_notif_wgt_window_ParamLimits

0xd6e3,	// (0x0005a60a) popup_notif_wgt_window

0xd6f3,	// (0x0005a61a) popup_submenu_window_cp01_ParamLimits

0xd6f3,	// (0x0005a61a) popup_submenu_window_cp01

0x29be,	// (0x0004f8e5) bg_popup_window_pane_cp10

0x1400,	// (0x0004e327) listscroll_notif_wgt_pane

0x1411,	// (0x0004e338) list_notif_wgt_window

0x141a,	// (0x0004e341) scroll_pane_cp033

0xd355,	// (0x0005a27c) list_notif_wgt_row_pane_ParamLimits

0xd355,	// (0x0005a27c) list_notif_wgt_row_pane

0x1423,	// (0x0004e34a) aid_size_list_notif_wgt_del

0x1430,	// (0x0004e357) list_notif_wgt_row_pane_g1

0x143c,	// (0x0004e363) list_notif_wgt_row_pane_g2

0x1448,	// (0x0004e36f) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x0005cdd5) list_notif_wgt_row_pane_g

0x1455,	// (0x0004e37c) list_notif_wgt_row_pane_t1

0x146a,	// (0x0004e391) list_notif_wgt_row_pane_t2

0x147c,	// (0x0004e3a3) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x0005cddc) list_notif_wgt_row_pane_t

0xe083,	// (0x0005afaa) list_recal_day_event_pane_g1

0x148e,	// (0x0004e3b5) list_recal_day_event_pane_t1

0x00f2,	// (0x0004d019) bg_button_pane_cp045

0x149d,	// (0x0004e3c4) cntbar_detail_btn_pane_t1

0x3dd2,	// (0x00050cf9) main_callh_pane_ParamLimits

0x3dd2,	// (0x00050cf9) main_callh_pane

0x00f2,	// (0x0004d019) main_coverflow0_pane

0x00f2,	// (0x0004d019) main_wgtman_pane

0xc87b,	// (0x000597a2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc87b,	// (0x000597a2) main_fs_bigclock_unlock_btn_pane

0xef92,	// (0x0005beb9) bg_button_pane_cp16

0xefa2,	// (0x0005bec9) cell_tport_appsw_pane_g3

0xd701,	// (0x0005a628) cf0_flow_pane_ParamLimits

0xd701,	// (0x0005a628) cf0_flow_pane

0x14ab,	// (0x0004e3d2) listscroll_cf0_pane

0x14b6,	// (0x0004e3dd) main_cf0_pane_g1

0xd710,	// (0x0005a637) main_cf0_pane_t1_ParamLimits

0xd710,	// (0x0005a637) main_cf0_pane_t1

0xd724,	// (0x0005a64b) main_cf0_pane_t2_ParamLimits

0xd724,	// (0x0005a64b) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0005cde3) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0005cde3) main_cf0_pane_t

0x14c0,	// (0x0004e3e7) scroll_pane_cp11

0xd738,	// (0x0005a65f) cf0_flow_pane_g1

0xd740,	// (0x0005a667) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0005cde8) cf0_flow_pane_g

0xd748,	// (0x0005a66f) cf0_flow_pane_t1

0x00f2,	// (0x0004d019) main_call6_pane

0x00f2,	// (0x0004d019) main_calllock_pane

0xd756,	// (0x0005a67d) call6_btn_grp_pane_ParamLimits

0xd756,	// (0x0005a67d) call6_btn_grp_pane

0xd765,	// (0x0005a68c) call6_pane_g1_ParamLimits

0xd765,	// (0x0005a68c) call6_pane_g1

0xd774,	// (0x0005a69b) popup_call6_1st_window_ParamLimits

0xd774,	// (0x0005a69b) popup_call6_1st_window

0xd782,	// (0x0005a6a9) popup_call6_2nd_window_ParamLimits

0xd782,	// (0x0005a6a9) popup_call6_2nd_window

0xd790,	// (0x0005a6b7) cell_call6_btn_pane_ParamLimits

0xd790,	// (0x0005a6b7) cell_call6_btn_pane

0x29be,	// (0x0004f8e5) bg_popup_call2_in_pane_cp03

0x14cb,	// (0x0004e3f2) popup_call6_1st_window_g1

0x14d3,	// (0x0004e3fa) popup_call6_1st_window_g2

0x14db,	// (0x0004e402) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0005cded) popup_call6_1st_window_g

0x14e3,	// (0x0004e40a) popup_call6_1st_window_t1

0x14f2,	// (0x0004e419) popup_call6_1st_window_t2

0x1502,	// (0x0004e429) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0005cdf4) popup_call6_1st_window_t

0x29be,	// (0x0004f8e5) bg_popup_call2_in_pane_cp04

0x14cb,	// (0x0004e3f2) popup_call6_2nd_window_g1

0x14d3,	// (0x0004e3fa) popup_call6_2nd_window_g2

0x14db,	// (0x0004e402) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0005cded) popup_call6_2nd_window_g

0x14e3,	// (0x0004e40a) popup_call6_2nd_window_t1

0x00f2,	// (0x0004d019) bg_button_pane_cp15

0x1512,	// (0x0004e439) cell_call6_btn_pane_g1

0x151b,	// (0x0004e442) cell_call6_btn_pane_t1

0xd79f,	// (0x0005a6c6) listscroll_wgtman_pane_ParamLimits

0xd79f,	// (0x0005a6c6) listscroll_wgtman_pane

0xd7bd,	// (0x0005a6e4) wgtman_btn_pane_ParamLimits

0xd7bd,	// (0x0005a6e4) wgtman_btn_pane

0x2875,	// (0x0004f79c) aid_scroll_copy1

0x152a,	// (0x0004e451) list_wgtman_pane

0xd7f2,	// (0x0005a719) wgtman_btn_pane_g1_ParamLimits

0xd7f2,	// (0x0005a719) wgtman_btn_pane_g1

0xd81a,	// (0x0005a741) wgtman_btn_pane_t1_ParamLimits

0xd81a,	// (0x0005a741) wgtman_btn_pane_t1

0x1534,	// (0x0004e45b) wgtman_btn_pane_t2_ParamLimits

0x1534,	// (0x0004e45b) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0005cdfb) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0005cdfb) wgtman_btn_pane_t

0xd851,	// (0x0005a778) listrow_wgtman_pane_ParamLimits

0xd851,	// (0x0005a778) listrow_wgtman_pane

0xd86c,	// (0x0005a793) listrow_wgtman_pane_g1

0xd879,	// (0x0005a7a0) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0005ce00) listrow_wgtman_pane_g

0xd897,	// (0x0005a7be) listrow_wgtman_pane_t1

0xd8af,	// (0x0005a7d6) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0005ce05) listrow_wgtman_pane_t

0xd8d5,	// (0x0005a7fc) wait_bar_pane_cp09

0x154b,	// (0x0004e472) main_calllock_btn_pane

0x1555,	// (0x0004e47c) main_calllock_pane_g1

0x00f2,	// (0x0004d019) bg_button_pane_cp17

0x1561,	// (0x0004e488) main_calllock_btn_pane_g1

0x156a,	// (0x0004e491) main_calllock_btn_pane_t1

0x00f2,	// (0x0004d019) main_dialer3_pane

0x00f2,	// (0x0004d019) main_fmrd2_pane

0x41eb,	// (0x00051112) main_fs_bigclock_unlock_btn_pane_g1

0x1581,	// (0x0004e4a8) main_fs_bigclock_unlock_btn_pane_t1

0xd8e7,	// (0x0005a80e) area_fmrd2_info_pane_ParamLimits

0xd8e7,	// (0x0005a80e) area_fmrd2_info_pane

0xd8f5,	// (0x0005a81c) area_fmrd2_visual_pane_ParamLimits

0xd8f5,	// (0x0005a81c) area_fmrd2_visual_pane

0xd903,	// (0x0005a82a) fmrd2_indi_pane_ParamLimits

0xd903,	// (0x0005a82a) fmrd2_indi_pane

0xd910,	// (0x0005a837) area_fmrd2_visual_pane_g1

0xd918,	// (0x0005a83f) area_fmrd2_visual_pane_t1

0xd928,	// (0x0005a84f) area_fmrd2_visual_pane_t2

0xd938,	// (0x0005a85f) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0005ce0f) area_fmrd2_visual_pane_t

0xd948,	// (0x0005a86f) area_fmrd2_info_pane_g1

0xd950,	// (0x0005a877) area_fmrd2_info_pane_t1

0xd960,	// (0x0005a887) area_fmrd2_info_pane_t2

0xd970,	// (0x0005a897) area_fmrd2_info_pane_t3

0xd980,	// (0x0005a8a7) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0005ce16) area_fmrd2_info_pane_t

0xd98e,	// (0x0005a8b5) fmrd2_indi_pane_t1

0xd99e,	// (0x0005a8c5) fmrd2_indi_pane_t2

0xd9ae,	// (0x0005a8d5) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0005ce1f) fmrd2_indi_pane_t

0xebf8,	// (0x0005bb1f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xebf8,	// (0x0005bb1f) list_single_fs_bigclock_indicator_pane_g5

0xec9f,	// (0x0005bbc6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xec9f,	// (0x0005bbc6) list_single_fs_bigclock_indicator_pane_t5

0xd14b,	// (0x0005a072) aid_cell_bcale_month_pane_ParamLimits

0xd14b,	// (0x0005a072) aid_cell_bcale_month_pane

0xd15b,	// (0x0005a082) bcale_month_pane_ParamLimits

0xd15b,	// (0x0005a082) bcale_month_pane

0xd16b,	// (0x0005a092) bcale_preview_pane_ParamLimits

0xd16b,	// (0x0005a092) bcale_preview_pane

0x1303,	// (0x0004e22a) list_single_fs_bigclock_pane_t1_ParamLimits

0x1322,	// (0x0004e249) list_single_fs_bigclock_pane_t2_ParamLimits

0x1322,	// (0x0004e249) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x0005cda6) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x0005cda6) list_single_fs_bigclock_pane_t

0x1579,	// (0x0004e4a0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0005ce0a) main_fs_bigclock_unlock_btn_pane_g

0xd9bc,	// (0x0005a8e3) aid_dia3_key_size_ParamLimits

0xd9bc,	// (0x0005a8e3) aid_dia3_key_size

0xd9c8,	// (0x0005a8ef) aid_dia3_listrow_size_ParamLimits

0xd9c8,	// (0x0005a8ef) aid_dia3_listrow_size

0xd9d8,	// (0x0005a8ff) dia3_keypad_fun_pane_ParamLimits

0xd9d8,	// (0x0005a8ff) dia3_keypad_fun_pane

0xd9ea,	// (0x0005a911) dia3_keypad_num_pane_ParamLimits

0xd9ea,	// (0x0005a911) dia3_keypad_num_pane

0xd9fc,	// (0x0005a923) dia3_listscroll_pane_ParamLimits

0xd9fc,	// (0x0005a923) dia3_listscroll_pane

0xda0a,	// (0x0005a931) dia3_numentry_pane_ParamLimits

0xda0a,	// (0x0005a931) dia3_numentry_pane

0x158f,	// (0x0004e4b6) dia3_list_pane

0x159a,	// (0x0004e4c1) scroll_pane_cp12

0x00f2,	// (0x0004d019) bg_dia3_numentry_pane

0xda18,	// (0x0005a93f) dia3_numentry_pane_t1

0xda27,	// (0x0005a94e) cell_dia3_key_num_pane

0xda2f,	// (0x0005a956) cell_dia3_key0_fun_pane_ParamLimits

0xda2f,	// (0x0005a956) cell_dia3_key0_fun_pane

0xda3c,	// (0x0005a963) cell_dia3_key1_fun_pane_ParamLimits

0xda3c,	// (0x0005a963) cell_dia3_key1_fun_pane

0xda49,	// (0x0005a970) dia3_listrow_pane

0xe8fc,	// (0x0005b823) bg_dia3_numentry_pane_g1

0x00f2,	// (0x0004d019) bg_button_pane_cp21

0x15a5,	// (0x0004e4cc) cell_dia3_key_num_pane_t1

0x15b3,	// (0x0004e4da) cell_dia3_key_num_pane_t2

0x15c2,	// (0x0004e4e9) cell_dia3_key_num_pane_t3

0x15d1,	// (0x0004e4f8) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0005ce26) cell_dia3_key_num_pane_t

0x00f2,	// (0x0004d019) bg_button_pane_cp19

0xda56,	// (0x0005a97d) cell_dia3_key0_fun_pane_g1

0x00f2,	// (0x0004d019) bg_button_pane_cp20

0xda5e,	// (0x0005a985) cell_dia3_key1_fun_pane_g1

0xda66,	// (0x0005a98d) area_left_week_number_pane

0xda70,	// (0x0005a997) area_top_day_name_pane

0xda7c,	// (0x0005a9a3) frame_month_view_pane

0xda86,	// (0x0005a9ad) grid_month_view_pane

0x15e0,	// (0x0004e507) cell_top_day_name_pane_ParamLimits

0x15e0,	// (0x0004e507) cell_top_day_name_pane

0xda90,	// (0x0005a9b7) cell_area_left_week_number_pane_ParamLimits

0xda90,	// (0x0005a9b7) cell_area_left_week_number_pane

0xdaa4,	// (0x0005a9cb) cell_month_view_pane_ParamLimits

0xdaa4,	// (0x0005a9cb) cell_month_view_pane

0x15fa,	// (0x0004e521) frm_month_g1

0xdac1,	// (0x0005a9e8) frm_month_g2

0xdacb,	// (0x0005a9f2) frm_month_g3

0xdad5,	// (0x0005a9fc) frm_month_g4

0xdadf,	// (0x0005aa06) frm_month_g5

0xdae9,	// (0x0005aa10) frm_month_g6

0xdaf3,	// (0x0005aa1a) frm_month_g7

0x1603,	// (0x0004e52a) frm_month_g8

0x160c,	// (0x0004e533) frm_month_g9

0x1615,	// (0x0004e53c) frm_month_g10

0x161e,	// (0x0004e545) frm_month_g11

0x1627,	// (0x0004e54e) frm_month_g12

0x1630,	// (0x0004e557) frm_month_g13

0x1639,	// (0x0004e560) frm_month_g14

0x1644,	// (0x0004e56b) frm_month_g15

0x164f,	// (0x0004e576) frm_month_g16

0x000f,

0xff08,	// (0x0005ce2f) frm_month_g

0xdafd,	// (0x0005aa24) cell_top_day_name_pane_t1

0xdb0c,	// (0x0005aa33) cell_area_left_week_number_pane_g1

0xdb14,	// (0x0005aa3b) cell_area_left_week_number_pane_t1

0x41eb,	// (0x00051112) cell_month_view_pane_g1

0xdb23,	// (0x0005aa4a) cell_month_view_pane_t1

0x00f2,	// (0x0004d019) main_fps_pane

0xee8f,	// (0x0005bdb6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xee8f,	// (0x0005bdb6) cmail_ddmenu_btn02_pane_cp1

0xeeab,	// (0x0005bdd2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xeeab,	// (0x0005bdd2) cmail_ddmenu_btn02_pane_cp2

0xd41c,	// (0x0005a343) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd41c,	// (0x0005a343) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x0005cd59) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x0005cd59) cmail_ddmenu_btn02_pane_g

0xd43a,	// (0x0005a361) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd43a,	// (0x0005a361) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x0005cd5e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x0005cd5e) cmail_ddmenu_btn02_pane_t

0xdb32,	// (0x0005aa59) fps_text_pane_ParamLimits

0xdb32,	// (0x0005aa59) fps_text_pane

0xdb3f,	// (0x0005aa66) main_fps_pane_g1_ParamLimits

0xdb3f,	// (0x0005aa66) main_fps_pane_g1

0xdb4d,	// (0x0005aa74) wait_bar_pane_cp010_ParamLimits

0xdb4d,	// (0x0005aa74) wait_bar_pane_cp010

0xdb59,	// (0x0005aa80) fps_text_pane_t1_ParamLimits

0xdb59,	// (0x0005aa80) fps_text_pane_t1

0xaae3,	// (0x00057a0a) cam4_image_uncrop_pane_g1

0xaaec,	// (0x00057a13) cam4_image_uncrop_pane_g2

0xaaf5,	// (0x00057a1c) cam4_image_uncrop_pane_g3

0xaafe,	// (0x00057a25) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x0005c820) cam4_image_uncrop_pane_g

0xda49,	// (0x0005a970) dia3_listrow_pane_ParamLimits

0x00f2,	// (0x0004d019) main_phob2_pane

0xcf8c,	// (0x00059eb3) cell_tport_appsw_pane_cp02_ParamLimits

0xcf8c,	// (0x00059eb3) cell_tport_appsw_pane_cp02

0xcf9b,	// (0x00059ec2) cell_tport_appsw_pane_cp03_ParamLimits

0xcf9b,	// (0x00059ec2) cell_tport_appsw_pane_cp03

0x00f2,	// (0x0004d019) phob2_contact_card_pane

0x00f2,	// (0x0004d019) phob2_listscroll_pane

0x165a,	// (0x0004e581) phob2_list_pane

0x1662,	// (0x0004e589) scroll_pane_cp034

0xdb72,	// (0x0005aa99) phob2_cc_data_pane_ParamLimits

0xdb72,	// (0x0005aa99) phob2_cc_data_pane

0xdb8c,	// (0x0005aab3) phob2_cc_listscroll_pane_ParamLimits

0xdb8c,	// (0x0005aab3) phob2_cc_listscroll_pane

0xdba6,	// (0x0005aacd) list_double_large_graphic_phob2_pane_ParamLimits

0xdba6,	// (0x0005aacd) list_double_large_graphic_phob2_pane

0xdbc4,	// (0x0005aaeb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdbc4,	// (0x0005aaeb) list_double_large_graphic_phob2_pane_g1

0xdbd1,	// (0x0005aaf8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdbd1,	// (0x0005aaf8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0005ce50) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0005ce50) list_double_large_graphic_phob2_pane_g

0xdbdd,	// (0x0005ab04) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xdbdd,	// (0x0005ab04) list_double_large_graphic_phob2_pane_t1

0xdbf2,	// (0x0005ab19) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xdbf2,	// (0x0005ab19) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0005ce55) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0005ce55) list_double_large_graphic_phob2_pane_t

0x00f2,	// (0x0004d019) list_highlight_pane_cp024

0x166a,	// (0x0004e591) phob2_cc_button_pane

0xdc04,	// (0x0005ab2b) phob2_cc_data_pane_g1_ParamLimits

0xdc04,	// (0x0005ab2b) phob2_cc_data_pane_g1

0xdc10,	// (0x0005ab37) phob2_cc_data_pane_g2_ParamLimits

0xdc10,	// (0x0005ab37) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0005ce5a) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0005ce5a) phob2_cc_data_pane_g

0xdc1c,	// (0x0005ab43) phob2_cc_data_pane_t1_ParamLimits

0xdc1c,	// (0x0005ab43) phob2_cc_data_pane_t1

0xdc2e,	// (0x0005ab55) phob2_cc_data_pane_t2_ParamLimits

0xdc2e,	// (0x0005ab55) phob2_cc_data_pane_t2

0xdc40,	// (0x0005ab67) phob2_cc_data_pane_t3_ParamLimits

0xdc40,	// (0x0005ab67) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0005ce5f) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0005ce5f) phob2_cc_data_pane_t

0x1672,	// (0x0004e599) phob2_cc_list_pane_ParamLimits

0x1672,	// (0x0004e599) phob2_cc_list_pane

0xe81f,	// (0x0005b746) scroll_pane_cp035_ParamLimits

0xe81f,	// (0x0005b746) scroll_pane_cp035

0x3810,	// (0x00050737) bg_button_pane_cp033

0x167e,	// (0x0004e5a5) phob2_cc_button_pane_g1

0x168a,	// (0x0004e5b1) phob2_cc_button_pane_t1

0x169f,	// (0x0004e5c6) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0005ce66) phob2_cc_button_pane_t

0xdc52,	// (0x0005ab79) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdc52,	// (0x0005ab79) list_double_large_graphic_phob2_cc_pane

0xdc79,	// (0x0005aba0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdc79,	// (0x0005aba0) list_double_large_graphic_phob2_cc_pane_g1

0xdc8a,	// (0x0005abb1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdc8a,	// (0x0005abb1) list_double_large_graphic_phob2_cc_pane_g2

0xdc99,	// (0x0005abc0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdc99,	// (0x0005abc0) list_double_large_graphic_phob2_cc_pane_g3

0xdca8,	// (0x0005abcf) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdca8,	// (0x0005abcf) list_double_large_graphic_phob2_cc_pane_g4

0xdcb9,	// (0x0005abe0) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdcb9,	// (0x0005abe0) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0005ce6b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0005ce6b) list_double_large_graphic_phob2_cc_pane_g

0xdcc8,	// (0x0005abef) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdcc8,	// (0x0005abef) list_double_large_graphic_phob2_cc_pane_t1

0xdcf1,	// (0x0005ac18) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdcf1,	// (0x0005ac18) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0005ce76) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0005ce76) list_double_large_graphic_phob2_cc_pane_t

0x16b1,	// (0x0004e5d8) list_highlight_pane_cp025_ParamLimits

0x16b1,	// (0x0004e5d8) list_highlight_pane_cp025

0x3810,	// (0x00050737) bg_button_pane_cp033_ParamLimits

0x167e,	// (0x0004e5a5) phob2_cc_button_pane_g1_ParamLimits

0x168a,	// (0x0004e5b1) phob2_cc_button_pane_t1_ParamLimits

0x169f,	// (0x0004e5c6) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0005ce66) phob2_cc_button_pane_t_ParamLimits

0x5cf8,	// (0x00052c1f) popup_wgtman_window

0xdf5f,	// (0x0005ae86) scroll_pane_cp038

0xd7da,	// (0x0005a701) wgtman_btn_pane_cp_01_ParamLimits

0xd7da,	// (0x0005a701) wgtman_btn_pane_cp_01

0x16bf,	// (0x0004e5e6) wgtman_content_pane

0x16c8,	// (0x0004e5ef) wgtman_heading_pane

0x00f2,	// (0x0004d019) bg_heading_pane_cp02

0x16d1,	// (0x0004e5f8) wgtman_heading_pane_g1

0x16d9,	// (0x0004e600) wgtman_heading_pane_t1

0x16e7,	// (0x0004e60e) scroll_pane_cp036

0x16ef,	// (0x0004e616) wgtman_list_pane

0x16f7,	// (0x0004e61e) wgtman_list_pane_t1_ParamLimits

0x16f7,	// (0x0004e61e) wgtman_list_pane_t1

0xaa42,	// (0x00057969) cam4_grid_pane

0xb776,	// (0x0005869d) bg_button_pane_cp015_ParamLimits

0xb788,	// (0x000586af) bg_button_pane_cp016_ParamLimits

0xb79b,	// (0x000586c2) bg_button_pane_cp017_ParamLimits

0xb7f1,	// (0x00058718) popup_vitu2_query_window_g3_ParamLimits

0xb7f1,	// (0x00058718) popup_vitu2_query_window_g3

0xb8ac,	// (0x000587d3) popup_vitu2_query_window_t6_ParamLimits

0xb8ac,	// (0x000587d3) popup_vitu2_query_window_t6

0xb8d7,	// (0x000587fe) popup_vitu2_query_window_t7_ParamLimits

0xb8d7,	// (0x000587fe) popup_vitu2_query_window_t7

0x4bef,	// (0x00051b16) cam4_grid_pane_g1

0x4bf8,	// (0x00051b1f) cam4_grid_pane_g2

0x1711,	// (0x0004e638) cam4_grid_pane_g3

0x171a,	// (0x0004e641) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0005ce7b) cam4_grid_pane_g

0x6a73,	// (0x0005399a) aid_placing_vt_slider_lsc_ParamLimits

0x6dbf,	// (0x00053ce6) vidtel_button_pane_ParamLimits

0x6dbf,	// (0x00053ce6) vidtel_button_pane

0x1725,	// (0x0004e64c) bg_button_pane_cp034

0xdd1a,	// (0x0005ac41) vidtel_button_pane_g1

0x172f,	// (0x0004e656) vidtel_button_pane_t1

0xe061,	// (0x0005af88) aid_size_vtel_slider_touch

0xe81f,	// (0x0005b746) scroll_pane_cp039

0xe93a,	// (0x0005b861) ncim_query_button_pane_cp01_ParamLimits

0xe959,	// (0x0005b880) ncimui_query_pane_g1_ParamLimits

0x3810,	// (0x00050737) input_focus_pane_cp012_ParamLimits

0xe97e,	// (0x0005b8a5) ncim_query_entry_pane_t1_ParamLimits

0xe81f,	// (0x0005b746) scroll_pane_cp039_ParamLimits

0x7d67,	// (0x00054c8e) navi_pane_bcale_mc_g1

0x7d6f,	// (0x00054c96) navi_pane_bcale_mc_t1

0xeef4,	// (0x0005be1b) main_sp_fs_email_pane_g1

0xeefc,	// (0x0005be23) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x0005cc17) main_sp_fs_email_pane_g

0x0f9d,	// (0x0004dec4) list_single_cale_mrui_row_pane_g3_ParamLimits

0x0f9d,	// (0x0004dec4) list_single_cale_mrui_row_pane_g3

0xd462,	// (0x0005a389) list_single_recal_day_pane_g5_event_pane

0x1162,	// (0x0004e089) list_single_recal_day_pane_g7

0x173d,	// (0x0004e664) list_recal_day_event_pane_cp01

0x1746,	// (0x0004e66d) list_recal_vselct_arw_lo_pane_cp01

0x174e,	// (0x0004e675) list_recal_vselct_arw_up_pane_cp01

0x1756,	// (0x0004e67d) list_recal_vselct_pane_cp01

0xe083,	// (0x0005afaa) list_recal_day_event_pane_cp01_g1

0x1760,	// (0x0004e687) list_recal_day_event_pane_cp01_t1

0x116a,	// (0x0004e091) list_single_recal_day_pane_t1_ParamLimits

0x117c,	// (0x0004e0a3) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x0005cd6e) list_single_recal_day_pane_t_ParamLimits

0x1ebb,	// (0x0004ede2) bg_notes_pane_ParamLimits

0x1ec9,	// (0x0004edf0) list_notes_pane_ParamLimits

0x6060,	// (0x00052f87) scroll_pane_cp06_ParamLimits

0x1eeb,	// (0x0004ee12) main_notes_pane_ParamLimits

0x00f2,	// (0x0004d019) main_welc_pane

0xdd22,	// (0x0005ac49) main_welc_body_pane_ParamLimits

0xdd22,	// (0x0005ac49) main_welc_body_pane

0xdd3c,	// (0x0005ac63) main_welc_opti_pane_ParamLimits

0xdd3c,	// (0x0005ac63) main_welc_opti_pane

0xdd6f,	// (0x0005ac96) main_welc_pane_t1_ParamLimits

0xdd6f,	// (0x0005ac96) main_welc_pane_t1

0xd014,	// (0x00059f3b) main_welc_body_row_pane_ParamLimits

0xd014,	// (0x00059f3b) main_welc_body_row_pane

0xdd89,	// (0x0005acb0) main_welc_opti_row_pane_ParamLimits

0xdd89,	// (0x0005acb0) main_welc_opti_row_pane

0x176e,	// (0x0004e695) main_welc_opti_row_pane_g1

0x1776,	// (0x0004e69d) main_welc_opti_row_pane_t1

0x1785,	// (0x0004e6ac) main_welc_body_row_pane_t1

0x1409,	// (0x0004e330) popup_notif_wgt_heading_pane

0x1423,	// (0x0004e34a) aid_size_list_notif_wgt_del_ParamLimits

0x1430,	// (0x0004e357) list_notif_wgt_row_pane_g1_ParamLimits

0x143c,	// (0x0004e363) list_notif_wgt_row_pane_g2_ParamLimits

0x1448,	// (0x0004e36f) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x0005cdd5) list_notif_wgt_row_pane_g_ParamLimits

0x1455,	// (0x0004e37c) list_notif_wgt_row_pane_t1_ParamLimits

0x146a,	// (0x0004e391) list_notif_wgt_row_pane_t2_ParamLimits

0x147c,	// (0x0004e3a3) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x0005cddc) list_notif_wgt_row_pane_t_ParamLimits

0xd86c,	// (0x0005a793) listrow_wgtman_pane_g1_ParamLimits

0xd879,	// (0x0005a7a0) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0005ce00) listrow_wgtman_pane_g_ParamLimits

0xd897,	// (0x0005a7be) listrow_wgtman_pane_t1_ParamLimits

0xd8af,	// (0x0005a7d6) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0005ce05) listrow_wgtman_pane_t_ParamLimits

0xd8d5,	// (0x0005a7fc) wait_bar_pane_cp09_ParamLimits

0x00f2,	// (0x0004d019) bg_popup_heading_pane_cp02

0x1794,	// (0x0004e6bb) popup_notif_wgt_heading_pane_g1

0x179c,	// (0x0004e6c3) popup_notif_wgt_heading_pane_t1

0x00f2,	// (0x0004d019) main_vids_pane

0x00f2,	// (0x0004d019) vids_listscroll_pane

0xdd9a,	// (0x0005acc1) scroll_pane_cp040

0x00f2,	// (0x0004d019) vids_list_pane

0xdda5,	// (0x0005accc) vids_list_double_pane_ParamLimits

0xdda5,	// (0x0005accc) vids_list_double_pane

0xddbf,	// (0x0005ace6) vids_list_double_pane_g1

0xddc8,	// (0x0005acef) vids_list_double_pane_t1

0xddd8,	// (0x0005acff) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0005ce89) vids_list_double_pane_t

0x8b84,	// (0x00055aab) main_ncimui_pane_ParamLimits

0xc449,	// (0x00059370) main_ncimui_pane_g1_ParamLimits

0xc455,	// (0x0005937c) main_ncimui_pane_g2_ParamLimits

0xc455,	// (0x0005937c) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x0005cb1c) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x0005cb1c) main_ncimui_pane_g

0xdd55,	// (0x0005ac7c) main_welc_pane_g1_ParamLimits

0xdd55,	// (0x0005ac7c) main_welc_pane_g1

0xdd61,	// (0x0005ac88) main_welc_pane_g2_ParamLimits

0xdd61,	// (0x0005ac88) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0005ce84) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0005ce84) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
