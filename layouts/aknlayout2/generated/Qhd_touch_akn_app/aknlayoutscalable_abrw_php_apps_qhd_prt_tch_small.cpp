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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004c244 };

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
0x5bfd,	// (0x00051e41) Screen

0x5c09,	// (0x00051e4d) application_window

0x5c49,	// (0x00051e8d) area_bottom_pane_ParamLimits

0x5c49,	// (0x00051e8d) area_bottom_pane

0x5c7e,	// (0x00051ec2) area_top_pane_ParamLimits

0x5c7e,	// (0x00051ec2) area_top_pane

0x03d8,	// (0x0004c61c) call_video_uplink_pane_ParamLimits

0x03d8,	// (0x0004c61c) call_video_uplink_pane

0x5d0b,	// (0x00051f4f) main_pane_ParamLimits

0x5d0b,	// (0x00051f4f) main_pane

0x419d,	// (0x000503e1) context_pane

0x8e0f,	// (0x00055053) navi_pane

0x8e2f,	// (0x00055073) popup_cale_events_window_ParamLimits

0x8e2f,	// (0x00055073) popup_cale_events_window

0x41b0,	// (0x000503f4) popup_mup_playback_window

0x8e47,	// (0x0005508b) signal_pane

0x2269,	// (0x0004e4ad) main_browser_pane

0x2d3c,	// (0x0004ef80) main_burst_pane

0x8cd9,	// (0x00054f1d) main_calc_pane

0x2d3c,	// (0x0004ef80) main_cale_day_pane

0x2269,	// (0x0004e4ad) main_cale_month_pane

0x2d3c,	// (0x0004ef80) main_cale_week_pane

0x2d3c,	// (0x0004ef80) main_call_pane

0x1f3b,	// (0x0004e17f) main_call_poc_pane

0x2d3c,	// (0x0004ef80) main_camera_pane

0x2d3c,	// (0x0004ef80) main_chi_dic_pane

0x2bc1,	// (0x0004ee05) main_clock_pane

0x1f3b,	// (0x0004e17f) main_fmradio_pane

0x2d3c,	// (0x0004ef80) main_graph_messa_pane

0x1f3b,	// (0x0004e17f) main_help_pane

0x2269,	// (0x0004e4ad) main_im_pane

0x2196,	// (0x0004e3da) main_image_pane_ParamLimits

0x2196,	// (0x0004e3da) main_image_pane

0x1f3b,	// (0x0004e17f) main_location2_pane

0x2d3c,	// (0x0004ef80) main_location_pane

0x1f3b,	// (0x0004e17f) main_messa_pane

0x1f3b,	// (0x0004e17f) main_mp2_pane

0x2d3c,	// (0x0004ef80) main_mp_pane

0x1f3b,	// (0x0004e17f) main_msg_pane

0x1f3b,	// (0x0004e17f) main_mup_eq_pane

0x1f3b,	// (0x0004e17f) main_mup_pane

0x2269,	// (0x0004e4ad) main_notes_pane

0x1f3b,	// (0x0004e17f) main_pec_pane

0x1f3b,	// (0x0004e17f) main_phob_pane

0x1f3b,	// (0x0004e17f) main_pinb_pane

0x1f3b,	// (0x0004e17f) main_postcard_pane

0x1f3b,	// (0x0004e17f) main_qdial_pane

0x2d3c,	// (0x0004ef80) main_skin_pane

0x1f3b,	// (0x0004e17f) main_smil2_pane

0x2d3c,	// (0x0004ef80) main_smil_pane

0x2d3c,	// (0x0004ef80) main_video_pane

0x2d3c,	// (0x0004ef80) main_video_tele_pane

0x2196,	// (0x0004e3da) main_viewer_pane_ParamLimits

0x2196,	// (0x0004e3da) main_viewer_pane

0x2d3c,	// (0x0004ef80) main_vorec_pane

0x8d0f,	// (0x00054f53) popup_blid_sat_info_window_ParamLimits

0x8d0f,	// (0x00054f53) popup_blid_sat_info_window

0x8d25,	// (0x00054f69) popup_dyc_status_message_window_ParamLimits

0x8d25,	// (0x00054f69) popup_dyc_status_message_window

0x8d35,	// (0x00054f79) popup_grid_large_graphic_window_ParamLimits

0x8d35,	// (0x00054f79) popup_grid_large_graphic_window

0x8dab,	// (0x00054fef) popup_loc_request_window_ParamLimits

0x8dab,	// (0x00054fef) popup_loc_request_window

0x8de7,	// (0x0005502b) popup_wml_address_window_ParamLimits

0x8de7,	// (0x0005502b) popup_wml_address_window

0x8bb1,	// (0x00054df5) call_muted_g1

0x8873,	// (0x00054ab7) popup_call_audio_conf_window_ParamLimits

0x8873,	// (0x00054ab7) popup_call_audio_conf_window

0x8bc1,	// (0x00054e05) popup_call_audio_first_window_ParamLimits

0x8bc1,	// (0x00054e05) popup_call_audio_first_window

0x8c01,	// (0x00054e45) popup_call_audio_in_window_ParamLimits

0x8c01,	// (0x00054e45) popup_call_audio_in_window

0x8c25,	// (0x00054e69) popup_call_audio_out_window_ParamLimits

0x8c25,	// (0x00054e69) popup_call_audio_out_window

0x8c47,	// (0x00054e8b) popup_call_audio_second_window_ParamLimits

0x8c47,	// (0x00054e8b) popup_call_audio_second_window

0x8c77,	// (0x00054ebb) popup_call_audio_wait_window_ParamLimits

0x8c77,	// (0x00054ebb) popup_call_audio_wait_window

0x8c98,	// (0x00054edc) popup_number_entry_window_ParamLimits

0x8c98,	// (0x00054edc) popup_number_entry_window

0x1b28,	// (0x0004dd6c) bg_popup_call_pane_cp05_ParamLimits

0x1b28,	// (0x0004dd6c) bg_popup_call_pane_cp05

0x1b48,	// (0x0004dd8c) popup_number_entry_window_t1

0x1b5b,	// (0x0004dd9f) popup_number_entry_window_t2

0x1b6d,	// (0x0004ddb1) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0005b32b) popup_number_entry_window_t

0x1b7f,	// (0x0004ddc3) text_title_cp2

0x1b92,	// (0x0004ddd6) bg_popup_call_pane_cp_ParamLimits

0x1b92,	// (0x0004ddd6) bg_popup_call_pane_cp

0x1ba0,	// (0x0004dde4) call_thumbnail_pane

0x1ba8,	// (0x0004ddec) popup_call_audio_in_window_g1_ParamLimits

0x1ba8,	// (0x0004ddec) popup_call_audio_in_window_g1

0x1bb4,	// (0x0004ddf8) popup_call_audio_in_window_g2_ParamLimits

0x1bb4,	// (0x0004ddf8) popup_call_audio_in_window_g2

0x1bc0,	// (0x0004de04) popup_call_audio_in_window_g3_ParamLimits

0x1bc0,	// (0x0004de04) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0005b334) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0005b334) popup_call_audio_in_window_g

0x1bcc,	// (0x0004de10) popup_call_audio_in_window_t1_ParamLimits

0x1bcc,	// (0x0004de10) popup_call_audio_in_window_t1

0x1be8,	// (0x0004de2c) popup_call_audio_in_window_t2_ParamLimits

0x1be8,	// (0x0004de2c) popup_call_audio_in_window_t2

0x1c04,	// (0x0004de48) popup_call_audio_in_window_t3_ParamLimits

0x1c04,	// (0x0004de48) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0005b33b) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0005b33b) popup_call_audio_in_window_t

0x1b92,	// (0x0004ddd6) bg_popup_call_pane_cp01_ParamLimits

0x1b92,	// (0x0004ddd6) bg_popup_call_pane_cp01

0x1ba0,	// (0x0004dde4) call_thumbnail_pane_cp02

0x1c17,	// (0x0004de5b) call_type_pane_cp022

0x1c1f,	// (0x0004de63) popup_call_audio_out_window_g1_ParamLimits

0x1c1f,	// (0x0004de63) popup_call_audio_out_window_g1

0x1c31,	// (0x0004de75) popup_call_audio_out_window_g2_ParamLimits

0x1c31,	// (0x0004de75) popup_call_audio_out_window_g2

0x1c3d,	// (0x0004de81) popup_call_audio_out_window_g3_ParamLimits

0x1c3d,	// (0x0004de81) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0005b342) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0005b342) popup_call_audio_out_window_g

0x1c4f,	// (0x0004de93) popup_call_audio_out_window_t1_ParamLimits

0x1c4f,	// (0x0004de93) popup_call_audio_out_window_t1

0x1c67,	// (0x0004deab) popup_call_audio_out_window_t2_ParamLimits

0x1c67,	// (0x0004deab) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0005b349) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0005b349) popup_call_audio_out_window_t

0x1c7c,	// (0x0004dec0) bg_popup_call_pane_ParamLimits

0x1c7c,	// (0x0004dec0) bg_popup_call_pane

0x5ef8,	// (0x0005213c) call_thumbnail_pane_cp_ParamLimits

0x5ef8,	// (0x0005213c) call_thumbnail_pane_cp

0x1d00,	// (0x0004df44) call_type_pane_cp01_ParamLimits

0x1d00,	// (0x0004df44) call_type_pane_cp01

0x1d44,	// (0x0004df88) popup_call_audio_first_window_g1_ParamLimits

0x1d44,	// (0x0004df88) popup_call_audio_first_window_g1

0x1d90,	// (0x0004dfd4) popup_call_audio_first_window_g2_ParamLimits

0x1d90,	// (0x0004dfd4) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0005b34e) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0005b34e) popup_call_audio_first_window_g

0x1dd4,	// (0x0004e018) popup_call_audio_first_window_t1_ParamLimits

0x1dd4,	// (0x0004e018) popup_call_audio_first_window_t1

0x1e80,	// (0x0004e0c4) popup_call_audio_first_window_t4_ParamLimits

0x1e80,	// (0x0004e0c4) popup_call_audio_first_window_t4

0x1f0c,	// (0x0004e150) popup_call_audio_first_window_t5_ParamLimits

0x1f0c,	// (0x0004e150) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0005b353) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0005b353) popup_call_audio_first_window_t

0x1f3b,	// (0x0004e17f) bg_popup_call_pane_cp02

0x1f45,	// (0x0004e189) call_type_pane_cp023

0x1f4d,	// (0x0004e191) popup_call_audio_wait_window_g1

0x1f55,	// (0x0004e199) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0005b35a) popup_call_audio_wait_window_g

0x1f5d,	// (0x0004e1a1) popup_call_audio_wait_window_t3

0x1f6b,	// (0x0004e1af) bg_popup_call_pane_cp03_ParamLimits

0x1f6b,	// (0x0004e1af) bg_popup_call_pane_cp03

0x1fcb,	// (0x0004e20f) call_thumbnail_pane_cp011_ParamLimits

0x1fcb,	// (0x0004e20f) call_thumbnail_pane_cp011

0x1fd7,	// (0x0004e21b) call_type_pane_cp034_ParamLimits

0x1fd7,	// (0x0004e21b) call_type_pane_cp034

0x2013,	// (0x0004e257) popup_call_audio_second_window_g1_ParamLimits

0x2013,	// (0x0004e257) popup_call_audio_second_window_g1

0x204f,	// (0x0004e293) popup_call_audio_second_window_g2_ParamLimits

0x204f,	// (0x0004e293) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0005b35f) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0005b35f) popup_call_audio_second_window_g

0x208b,	// (0x0004e2cf) popup_call_audio_second_window_t1_ParamLimits

0x208b,	// (0x0004e2cf) popup_call_audio_second_window_t1

0x210c,	// (0x0004e350) popup_call_audio_second_window_t2_ParamLimits

0x210c,	// (0x0004e350) popup_call_audio_second_window_t2

0x2142,	// (0x0004e386) popup_call_audio_second_window_t3_ParamLimits

0x2142,	// (0x0004e386) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0005b364) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0005b364) popup_call_audio_second_window_t

0x1f3b,	// (0x0004e17f) bg_popup_call_pane_cp04

0x2178,	// (0x0004e3bc) list_conf_pane

0x2180,	// (0x0004e3c4) popup_call_audio_conf_window_t1

0x218e,	// (0x0004e3d2) call_thumbnail_pane_g1

0x2196,	// (0x0004e3da) bg_pinb_pane_ParamLimits

0x2196,	// (0x0004e3da) bg_pinb_pane

0x21a4,	// (0x0004e3e8) find_pinb_pane

0x21ad,	// (0x0004e3f1) listscroll_pinb_pane_ParamLimits

0x21ad,	// (0x0004e3f1) listscroll_pinb_pane

0x21bc,	// (0x0004e400) pinb_bg_pane_g1

0x5f1c,	// (0x00052160) pinb_bg_pane_g2

0x5f28,	// (0x0005216c) pinb_bg_pane_g3

0x5f34,	// (0x00052178) pinb_bg_pane_g4

0x5f40,	// (0x00052184) pinb_bg_pane_g5

0x5f4c,	// (0x00052190) pinb_bg_pane_g6

0x5f57,	// (0x0005219b) pinb_bg_pane_g7

0x5f62,	// (0x000521a6) pinb_bg_pane_g8

0x5f6d,	// (0x000521b1) pinb_bg_pane_g9

0x5f77,	// (0x000521bb) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0005b36b) pinb_bg_pane_g

0x5f94,	// (0x000521d8) grid_pinb_pane

0x5f9f,	// (0x000521e3) list_pinb_pane

0x5faa,	// (0x000521ee) scroll_pane_cp01_ParamLimits

0x5faa,	// (0x000521ee) scroll_pane_cp01

0x21c6,	// (0x0004e40a) find_pinb_pane_g1_ParamLimits

0x21c6,	// (0x0004e40a) find_pinb_pane_g1

0x21de,	// (0x0004e422) find_pinb_pane_t1

0x21f0,	// (0x0004e434) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0005b385) find_pinb_pane_t

0x2205,	// (0x0004e449) input_focus_pane_cp01_ParamLimits

0x2205,	// (0x0004e449) input_focus_pane_cp01

0x5fbc,	// (0x00052200) cell_pinb_pane_ParamLimits

0x5fbc,	// (0x00052200) cell_pinb_pane

0x5fe4,	// (0x00052228) cell_pinb_pane_g1_ParamLimits

0x5fe4,	// (0x00052228) cell_pinb_pane_g1

0x5ff9,	// (0x0005223d) cell_pinb_pane_g2_ParamLimits

0x5ff9,	// (0x0005223d) cell_pinb_pane_g2

0x2211,	// (0x0004e455) cell_pinb_pane_g3_ParamLimits

0x2211,	// (0x0004e455) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0005b38a) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0005b38a) cell_pinb_pane_g

0x1f3b,	// (0x0004e17f) grid_highlight_pane_cp01

0x6005,	// (0x00052249) list_pinb_item_pane_ParamLimits

0x6005,	// (0x00052249) list_pinb_item_pane

0x1f3b,	// (0x0004e17f) list_highlight_pane_cp02

0x602b,	// (0x0005226f) list_pinb_item_pane_g1_ParamLimits

0x602b,	// (0x0005226f) list_pinb_item_pane_g1

0x6038,	// (0x0005227c) list_pinb_item_pane_g2_ParamLimits

0x6038,	// (0x0005227c) list_pinb_item_pane_g2

0x6044,	// (0x00052288) list_pinb_item_pane_g3_ParamLimits

0x6044,	// (0x00052288) list_pinb_item_pane_g3

0x6055,	// (0x00052299) list_pinb_item_pane_g4_ParamLimits

0x6055,	// (0x00052299) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0005b391) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0005b391) list_pinb_item_pane_g

0x6061,	// (0x000522a5) list_pinb_item_pane_t1_ParamLimits

0x6061,	// (0x000522a5) list_pinb_item_pane_t1

0x6092,	// (0x000522d6) calc_display_pane

0x60b0,	// (0x000522f4) calc_paper_pane

0x60cc,	// (0x00052310) grid_calc_pane

0x1f3b,	// (0x0004e17f) bg_list_pane_cp01

0x60f8,	// (0x0005233c) clock_g1

0x6100,	// (0x00052344) clock_g2

0x0001,

0xf156,	// (0x0005b39a) clock_g

0x610a,	// (0x0005234e) clock_t1_ParamLimits

0x610a,	// (0x0005234e) clock_t1

0x611f,	// (0x00052363) clock_t2_ParamLimits

0x611f,	// (0x00052363) clock_t2

0x6131,	// (0x00052375) clock_t3_ParamLimits

0x6131,	// (0x00052375) clock_t3

0x6143,	// (0x00052387) clock_t4_ParamLimits

0x6143,	// (0x00052387) clock_t4

0x6155,	// (0x00052399) clock_t5_ParamLimits

0x6155,	// (0x00052399) clock_t5

0x616a,	// (0x000523ae) clock_t6_ParamLimits

0x616a,	// (0x000523ae) clock_t6

0x617c,	// (0x000523c0) clock_t7_ParamLimits

0x617c,	// (0x000523c0) clock_t7

0x618e,	// (0x000523d2) clock_t8_ParamLimits

0x618e,	// (0x000523d2) clock_t8

0x61a4,	// (0x000523e8) clock_t9_ParamLimits

0x61a4,	// (0x000523e8) clock_t9

0x0008,

0xf15b,	// (0x0005b39f) clock_t_ParamLimits

0xf15b,	// (0x0005b39f) clock_t

0x221d,	// (0x0004e461) popup_clock_analogue_window_cp02

0x221d,	// (0x0004e461) popup_clock_digital_window_cp01

0x2225,	// (0x0004e469) listscroll_help_pane

0x1f3b,	// (0x0004e17f) phob_pre_status_pane

0x222f,	// (0x0004e473) grid_qdial_pane

0x1f3b,	// (0x0004e17f) listscroll_mce_pane

0x2239,	// (0x0004e47d) bg_notes_pane

0x2247,	// (0x0004e48b) list_notes_pane

0x61ba,	// (0x000523fe) scroll_pane_cp06

0x2255,	// (0x0004e499) bg_calc_paper_pane

0x61d3,	// (0x00052417) list_calc_pane

0x2269,	// (0x0004e4ad) bg_calc_display_pane

0x61ed,	// (0x00052431) calc_display_pane_t1

0x6202,	// (0x00052446) calc_display_pane_t2

0x6217,	// (0x0005245b) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0005b3b2) calc_display_pane_t

0x6229,	// (0x0005246d) cell_calc_pane_ParamLimits

0x6229,	// (0x0005246d) cell_calc_pane

0x2275,	// (0x0004e4b9) bg_calc_paper_pane_g1

0x228d,	// (0x0004e4d1) bg_calc_paper_pane_g2

0x2281,	// (0x0004e4c5) bg_calc_paper_pane_g3

0x22a5,	// (0x0004e4e9) bg_calc_paper_pane_g4

0x2299,	// (0x0004e4dd) bg_calc_paper_pane_g5

0x6256,	// (0x0005249a) bg_calc_paper_pane_g6

0x6267,	// (0x000524ab) bg_calc_paper_pane_g7

0x6278,	// (0x000524bc) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0005b3b9) bg_calc_paper_pane_g

0x6289,	// (0x000524cd) calc_bg_paper_pane_g9

0x629a,	// (0x000524de) list_calc_item_pane_ParamLimits

0x629a,	// (0x000524de) list_calc_item_pane

0x22b1,	// (0x0004e4f5) list_calc_item_pane_g1

0x62c9,	// (0x0005250d) list_calc_item_pane_t1_ParamLimits

0x62c9,	// (0x0005250d) list_calc_item_pane_t1

0x62db,	// (0x0005251f) list_calc_item_pane_t2_ParamLimits

0x62db,	// (0x0005251f) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0005b3ca) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0005b3ca) list_calc_item_pane_t

0x22be,	// (0x0004e502) cell_calc_pane_g1

0x22c8,	// (0x0004e50c) grid_highlight_pane_cp02

0x630b,	// (0x0005254f) bg_calc_display_pane_g1

0x6314,	// (0x00052558) bg_calc_display_pane_g2

0x45b8,	// (0x000507fc) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0005b3d4) bg_calc_display_pane_g

0x631e,	// (0x00052562) cell_qdial_pane_ParamLimits

0x631e,	// (0x00052562) cell_qdial_pane

0x6332,	// (0x00052576) cell_qdial_pane_g1_ParamLimits

0x6332,	// (0x00052576) cell_qdial_pane_g1

0x633f,	// (0x00052583) cell_qdial_pane_g2_ParamLimits

0x633f,	// (0x00052583) cell_qdial_pane_g2

0x22ea,	// (0x0004e52e) cell_qdial_pane_g3_ParamLimits

0x22ea,	// (0x0004e52e) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0005b3db) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0005b3db) cell_qdial_pane_g

0x635d,	// (0x000525a1) cell_qdial_pane_t1_ParamLimits

0x635d,	// (0x000525a1) cell_qdial_pane_t1

0x6375,	// (0x000525b9) cell_qdial_pane_t2_ParamLimits

0x6375,	// (0x000525b9) cell_qdial_pane_t2

0x6388,	// (0x000525cc) cell_qdial_pane_t3_ParamLimits

0x6388,	// (0x000525cc) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0005b3e4) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0005b3e4) cell_qdial_pane_t

0x1f3b,	// (0x0004e17f) grid_highlight_pane_cp04

0x22f6,	// (0x0004e53a) thumbnail_qdial_pane_ParamLimits

0x22f6,	// (0x0004e53a) thumbnail_qdial_pane

0x2352,	// (0x0004e596) list_help_pane

0x235b,	// (0x0004e59f) scroll_pane_cp02

0x639b,	// (0x000525df) help_list_pane_t1_ParamLimits

0x639b,	// (0x000525df) help_list_pane_t1

0x63ce,	// (0x00052612) bg_notes_pane_g2

0x63d6,	// (0x0005261a) bg_notes_pane_g3

0x63de,	// (0x00052622) notes_bg_pane_g1

0x63e6,	// (0x0005262a) notes_bg_pane_g4

0x63ee,	// (0x00052632) notes_bg_pane_g5

0x63f6,	// (0x0005263a) notes_bg_pane_g6

0x63fe,	// (0x00052642) notes_bg_pane_g7

0x6406,	// (0x0005264a) notes_bg_pane_g8

0x640e,	// (0x00052652) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0005b402) notes_bg_pane_g

0x6416,	// (0x0005265a) list_notes_text_pane_ParamLimits

0x6416,	// (0x0005265a) list_notes_text_pane

0x2364,	// (0x0004e5a8) list_notes_text_pane_g1

0x643e,	// (0x00052682) list_notes_text_pane_t1

0x2269,	// (0x0004e4ad) listscroll_cale_week_pane

0x6469,	// (0x000526ad) bg_cale_heading_pane

0x237e,	// (0x0004e5c2) bg_cale_pane_cp01

0x6485,	// (0x000526c9) cale_week_corner_pane

0x649b,	// (0x000526df) cale_week_day_heading_pane

0x64b7,	// (0x000526fb) cale_week_scroll_pane_g1

0x64d0,	// (0x00052714) cale_week_scroll_pane_g2

0x64e1,	// (0x00052725) cale_week_scroll_pane_g3

0x64f2,	// (0x00052736) cale_week_scroll_pane_g4

0x6503,	// (0x00052747) cale_week_scroll_pane_g5

0x6514,	// (0x00052758) cale_week_scroll_pane_g6

0x6525,	// (0x00052769) cale_week_scroll_pane_g7

0x6538,	// (0x0005277c) cale_week_scroll_pane_g8

0x654b,	// (0x0005278f) cale_week_scroll_pane_g9

0x655c,	// (0x000527a0) cale_week_scroll_pane_g10

0x656d,	// (0x000527b1) cale_week_scroll_pane_g11

0x657e,	// (0x000527c2) cale_week_scroll_pane_g12

0x658f,	// (0x000527d3) cale_week_scroll_pane_g13

0x65a8,	// (0x000527ec) cale_week_scroll_pane_g14

0x65c1,	// (0x00052805) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0005b411) cale_week_scroll_pane_g

0x65da,	// (0x0005281e) cale_week_time_pane

0x65ed,	// (0x00052831) grid_cale_week_pane

0x660a,	// (0x0005284e) scroll_pane_cp08

0x6624,	// (0x00052868) cell_cale_week_pane_ParamLimits

0x6624,	// (0x00052868) cell_cale_week_pane

0x6670,	// (0x000528b4) cale_week_day_heading_pane_t1

0x6689,	// (0x000528cd) cale_week_day_heading_pane_t2

0x66a2,	// (0x000528e6) cale_week_day_heading_pane_t3

0x66bb,	// (0x000528ff) cale_week_day_heading_pane_t4

0x66d4,	// (0x00052918) cale_week_day_heading_pane_t5

0x66ed,	// (0x00052931) cale_week_day_heading_pane_t6

0x6706,	// (0x0005294a) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0005b430) cale_week_day_heading_pane_t

0x23a9,	// (0x0004e5ed) bg_cale_side_pane

0x671f,	// (0x00052963) cale_week_time_pane_t1

0x6737,	// (0x0005297b) cale_week_time_pane_t2

0x674f,	// (0x00052993) cale_week_time_pane_t3

0x6767,	// (0x000529ab) cale_week_time_pane_t4

0x677f,	// (0x000529c3) cale_week_time_pane_t5

0x6797,	// (0x000529db) cale_week_time_pane_t6

0x67af,	// (0x000529f3) cale_week_time_pane_t7

0x67cf,	// (0x00052a13) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0005b43f) cale_week_time_pane_t

0x67ef,	// (0x00052a33) cell_cale_week_pane_g2

0x6800,	// (0x00052a44) cell_cale_week_pane_g3_ParamLimits

0x6800,	// (0x00052a44) cell_cale_week_pane_g3

0x23b7,	// (0x0004e5fb) grid_highlight_pane_cp07

0x23bf,	// (0x0004e603) listscroll_gms_pane

0x23c9,	// (0x0004e60d) grid_gms_pane

0x23d2,	// (0x0004e616) listscroll_gms_pane_g1

0x23da,	// (0x0004e61e) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0005b450) listscroll_gms_pane_g

0x6818,	// (0x00052a5c) scroll_pane_cp010

0x6823,	// (0x00052a67) cell_gms_pane_ParamLimits

0x6823,	// (0x00052a67) cell_gms_pane

0x6836,	// (0x00052a7a) cell_gms_pane_g1

0x23e2,	// (0x0004e626) cell_gms_pane_g2

0x23ea,	// (0x0004e62e) cell_gms_pane_g3

0x23f3,	// (0x0004e637) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0005b455) cell_gms_pane_g

0x23fc,	// (0x0004e640) grid_highlight_pane_cp09

0x8b59,	// (0x00054d9d) phob_pre_status_pane_g1

0x8b61,	// (0x00054da5) phob_pre_status_pane_g2

0x8b69,	// (0x00054dad) phob_pre_status_pane_g3

0x8b71,	// (0x00054db5) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0005b844) phob_pre_status_pane_g

0x8b81,	// (0x00054dc5) phob_pre_status_pane_t1

0x8b91,	// (0x00054dd5) phob_pre_status_pane_t2

0x8ba1,	// (0x00054de5) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0005b84f) phob_pre_status_pane_t

0x1f3b,	// (0x0004e17f) bg_list_pane_cp05

0x6846,	// (0x00052a8a) grid_vorec_pane

0x6850,	// (0x00052a94) vorec_t1

0x685e,	// (0x00052aa2) vorec_t2

0x686c,	// (0x00052ab0) vorec_t3

0x687a,	// (0x00052abe) vorec_t4

0x6888,	// (0x00052acc) vorec_t5

0x6896,	// (0x00052ada) vorec_t6

0x0006,

0xf21a,	// (0x0005b45e) vorec_t

0x68b2,	// (0x00052af6) wait_bar_pane_cp01

0x68ba,	// (0x00052afe) cell_vorec_pane_ParamLimits

0x68ba,	// (0x00052afe) cell_vorec_pane

0x2404,	// (0x0004e648) cell_vorec_pane_g1

0x1f3b,	// (0x0004e17f) grid_highlight_pane_cp05

0x68dd,	// (0x00052b21) cams_zoom_pane

0x68e9,	// (0x00052b2d) image_vga_pane

0x68f8,	// (0x00052b3c) main_camera_pane_g1

0x6906,	// (0x00052b4a) main_camera_pane_g2

0x6912,	// (0x00052b56) main_camera_pane_g3

0x691e,	// (0x00052b62) main_camera_pane_g4

0x692a,	// (0x00052b6e) main_camera_pane_g5

0x6936,	// (0x00052b7a) main_camera_pane_g6

0x6942,	// (0x00052b86) main_camera_pane_g7

0x0007,

0xf229,	// (0x0005b46d) main_camera_pane_g

0x694e,	// (0x00052b92) main_camera_pane_t1

0x6960,	// (0x00052ba4) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0005b47e) main_camera_pane_t

0x6981,	// (0x00052bc5) cams_zoom_pane_cp_ParamLimits

0x6981,	// (0x00052bc5) cams_zoom_pane_cp

0x69a5,	// (0x00052be9) image_cif_pane_ParamLimits

0x69a5,	// (0x00052be9) image_cif_pane

0x69c3,	// (0x00052c07) image_subqcif_pane

0x69cb,	// (0x00052c0f) main_video_pane_g1_ParamLimits

0x69cb,	// (0x00052c0f) main_video_pane_g1

0x69eb,	// (0x00052c2f) main_video_pane_g2_ParamLimits

0x69eb,	// (0x00052c2f) main_video_pane_g2

0x6a1b,	// (0x00052c5f) main_video_pane_g3_ParamLimits

0x6a1b,	// (0x00052c5f) main_video_pane_g3

0x6a44,	// (0x00052c88) main_video_pane_g4_ParamLimits

0x6a44,	// (0x00052c88) main_video_pane_g4

0x6a6d,	// (0x00052cb1) main_video_pane_g5_ParamLimits

0x6a6d,	// (0x00052cb1) main_video_pane_g5

0x241a,	// (0x0004e65e) main_video_pane_g6_ParamLimits

0x241a,	// (0x0004e65e) main_video_pane_g6

0x0006,

0xf23f,	// (0x0005b483) main_video_pane_g_ParamLimits

0xf23f,	// (0x0005b483) main_video_pane_g

0x6a8f,	// (0x00052cd3) main_video_pane_t1_ParamLimits

0x6a8f,	// (0x00052cd3) main_video_pane_t1

0x2434,	// (0x0004e678) cams_zoom_pane_g1

0x243d,	// (0x0004e681) cams_zoom_pane_g2

0x2446,	// (0x0004e68a) cams_zoom_pane_g3

0x244f,	// (0x0004e693) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0005b492) cams_zoom_pane_g

0x6ad9,	// (0x00052d1d) grid_cams_pane

0x6ae7,	// (0x00052d2b) linegrid_cams_pane

0x6af5,	// (0x00052d39) cell_cams_pane_ParamLimits

0x6af5,	// (0x00052d39) cell_cams_pane

0x2458,	// (0x0004e69c) cams_burst_image_pane

0x2460,	// (0x0004e6a4) cell_cams_pane_g1

0x1f3b,	// (0x0004e17f) grid_highlight_pane_cp03

0x22be,	// (0x0004e502) mp_bg_pane_g1

0x1f3b,	// (0x0004e17f) bg_list_pane_cp03

0x4075,	// (0x000502b9) bg_mp_pane

0x407d,	// (0x000502c1) grid_mp_pane

0x4085,	// (0x000502c9) media_player_g1

0x408d,	// (0x000502d1) media_player_t1

0x409b,	// (0x000502df) media_player_t2

0x40a9,	// (0x000502ed) media_player_t3

0x40b7,	// (0x000502fb) media_player_t4

0x40c5,	// (0x00050309) media_player_t5

0x40d3,	// (0x00050317) media_player_t6

0x40e1,	// (0x00050325) media_player_t7

0x0006,

0xf5ea,	// (0x0005b82e) media_player_t

0x40ef,	// (0x00050333) wait_bar_pane_cp02

0xf5cf,	// (0x0005b813) main_usb_pane_t

0x8b50,	// (0x00054d94) cell_mp_pane

0x22be,	// (0x0004e502) cell_mp_pane_g1

0x1f3b,	// (0x0004e17f) grid_highlight_pane_cp06

0x2468,	// (0x0004e6ac) grid_skin_colour_pane

0x2470,	// (0x0004e6b4) list_highlight_pane_cp03

0x6b5f,	// (0x00052da3) skin_g1

0x2478,	// (0x0004e6bc) skin_t1

0x2487,	// (0x0004e6cb) skin_t2

0x0001,

0xf283,	// (0x0005b4c7) skin_t

0x6b69,	// (0x00052dad) cell_skin_colour_pane_ParamLimits

0x6b69,	// (0x00052dad) cell_skin_colour_pane

0x2495,	// (0x0004e6d9) cell_skin_colour_pane_g1

0x6bed,	// (0x00052e31) call_video_g1_ParamLimits

0x6bed,	// (0x00052e31) call_video_g1

0x6bfd,	// (0x00052e41) call_video_g2_ParamLimits

0x6bfd,	// (0x00052e41) call_video_g2

0x0001,

0xf288,	// (0x0005b4cc) call_video_g_ParamLimits

0xf288,	// (0x0005b4cc) call_video_g

0x6c57,	// (0x00052e9b) call_video_uplink_pane_cp1_ParamLimits

0x6c57,	// (0x00052e9b) call_video_uplink_pane_cp1

0x24a7,	// (0x0004e6eb) call_video_uplink_pane_cp2

0x6d23,	// (0x00052f67) video_down_crop_pane_ParamLimits

0x6d23,	// (0x00052f67) video_down_crop_pane

0x6e21,	// (0x00053065) video_down_pane_ParamLimits

0x6e21,	// (0x00053065) video_down_pane

0x24af,	// (0x0004e6f3) video_down_subqcif_pane_ParamLimits

0x24af,	// (0x0004e6f3) video_down_subqcif_pane

0x24c7,	// (0x0004e70b) video_down_subqcif_pane_cp_ParamLimits

0x24c7,	// (0x0004e70b) video_down_subqcif_pane_cp

0x24ed,	// (0x0004e731) im_reading_pane_ParamLimits

0x24ed,	// (0x0004e731) im_reading_pane

0x6f43,	// (0x00053187) im_writing_pane_ParamLimits

0x6f43,	// (0x00053187) im_writing_pane

0x6f61,	// (0x000531a5) im_reading_pane_t1

0x2507,	// (0x0004e74b) list_im_pane

0x2518,	// (0x0004e75c) scroll_pane_cp07

0x6fb5,	// (0x000531f9) im_writing_pane_t1_ParamLimits

0x6fb5,	// (0x000531f9) im_writing_pane_t1

0x2531,	// (0x0004e775) im_writing_pane_t2_ParamLimits

0x2531,	// (0x0004e775) im_writing_pane_t2

0x0001,

0xf292,	// (0x0005b4d6) im_writing_pane_t_ParamLimits

0xf292,	// (0x0005b4d6) im_writing_pane_t

0x1f3b,	// (0x0004e17f) input_focus_pane_cp04

0x1f3b,	// (0x0004e17f) input_focus_pane_cp05

0x6fca,	// (0x0005320e) list_im_single_pane_ParamLimits

0x6fca,	// (0x0005320e) list_im_single_pane

0x6fee,	// (0x00053232) list_single_im_pane_t1

0x8b14,	// (0x00054d58) blid_accuracy_pane

0x8b1c,	// (0x00054d60) blid_compass_pane

0x8b26,	// (0x00054d6a) main_location_t1

0x8b34,	// (0x00054d78) main_location_t2

0x8b42,	// (0x00054d86) main_location_t3

0x0002,

0xf5f9,	// (0x0005b83d) main_location_t

0x1f3b,	// (0x0004e17f) aid_levels_location

0x22be,	// (0x0004e502) blid_accuracy_pane_g1

0x22be,	// (0x0004e502) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0005b538) blid_accuracy_pane_g

0x2579,	// (0x0004e7bd) wml_content_pane

0x25b7,	// (0x0004e7fb) wml_button_pane_ParamLimits

0x25b7,	// (0x0004e7fb) wml_button_pane

0x6ffd,	// (0x00053241) wml_list_single_large_pane_ParamLimits

0x6ffd,	// (0x00053241) wml_list_single_large_pane

0x7027,	// (0x0005326b) wml_list_single_medium_pane_ParamLimits

0x7027,	// (0x0005326b) wml_list_single_medium_pane

0x7058,	// (0x0005329c) wml_list_single_small_pane_ParamLimits

0x7058,	// (0x0005329c) wml_list_single_small_pane

0x25cb,	// (0x0004e80f) wml_selection_box_pane_ParamLimits

0x25cb,	// (0x0004e80f) wml_selection_box_pane

0x25de,	// (0x0004e822) wml_list_single_pane_t1

0x25ed,	// (0x0004e831) wml_list_single_medium_pane_t1

0x25fc,	// (0x0004e840) wml_list_single_large_pane_t1

0x260b,	// (0x0004e84f) input_focus_pane_cp02_ParamLimits

0x260b,	// (0x0004e84f) input_focus_pane_cp02

0x261e,	// (0x0004e862) wml_selection_box_pane_g1

0x2627,	// (0x0004e86b) wml_selection_box_pane_t1_ParamLimits

0x2627,	// (0x0004e86b) wml_selection_box_pane_t1

0x2196,	// (0x0004e3da) bg_wml_button_pane_ParamLimits

0x2196,	// (0x0004e3da) bg_wml_button_pane

0x263f,	// (0x0004e883) wml_button_pane_g1

0x2647,	// (0x0004e88b) wml_button_pane_t1

0x263f,	// (0x0004e883) wml_button_bg_pane_g1

0x2657,	// (0x0004e89b) wml_button_bg_pane_g2

0x265f,	// (0x0004e8a3) wml_button_bg_pane_g3

0x2667,	// (0x0004e8ab) wml_button_bg_pane_g4

0x266f,	// (0x0004e8b3) wml_button_bg_pane_g5

0x2677,	// (0x0004e8bb) wml_button_bg_pane_g6

0x267f,	// (0x0004e8c3) wml_button_bg_pane_g7

0x2687,	// (0x0004e8cb) wml_button_bg_pane_g8

0x268f,	// (0x0004e8d3) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0005b4db) wml_button_bg_pane_g

0x7092,	// (0x000532d6) bg_list_pane_cp02

0x2697,	// (0x0004e8db) mce_header_pane_ParamLimits

0x2697,	// (0x0004e8db) mce_header_pane

0x26ad,	// (0x0004e8f1) mce_icon_pane

0x26ad,	// (0x0004e8f1) mce_image_pane

0x26b6,	// (0x0004e8fa) mce_text_pane_ParamLimits

0x26b6,	// (0x0004e8fa) mce_text_pane

0x709c,	// (0x000532e0) scroll_pane_cp03

0x25af,	// (0x0004e7f3) scroll_pane_cp04

0x26c9,	// (0x0004e90d) scroll_pane_cp05_ParamLimits

0x26c9,	// (0x0004e90d) scroll_pane_cp05

0x70a6,	// (0x000532ea) mce_header_field_pane_ParamLimits

0x70a6,	// (0x000532ea) mce_header_field_pane

0x70c6,	// (0x0005330a) mce_header_field_pane_2_ParamLimits

0x70c6,	// (0x0005330a) mce_header_field_pane_2

0x70dc,	// (0x00053320) mce_header_field_pane_3

0x70e4,	// (0x00053328) list_single_mce_message_pane_ParamLimits

0x70e4,	// (0x00053328) list_single_mce_message_pane

0x7109,	// (0x0005334d) list_single_mce_smart_pane_ParamLimits

0x7109,	// (0x0005334d) list_single_mce_smart_pane

0x26d5,	// (0x0004e919) input_focus_pane_cp03

0x26de,	// (0x0004e922) list_header_data_pane

0x7139,	// (0x0005337d) mce_header_field_pane_t1

0x7147,	// (0x0005338b) list_single_mce_header_pane_ParamLimits

0x7147,	// (0x0005338b) list_single_mce_header_pane

0x26e6,	// (0x0004e92a) list_single_mce_header_pane_t1

0x26f5,	// (0x0004e939) list_single_mce_message_pane_g1

0x26fd,	// (0x0004e941) list_single_mce_message_pane_t1

0x718b,	// (0x000533cf) bg_cale_heading_pane_cp01_ParamLimits

0x718b,	// (0x000533cf) bg_cale_heading_pane_cp01

0x270b,	// (0x0004e94f) bg_cale_pane_cp02_ParamLimits

0x270b,	// (0x0004e94f) bg_cale_pane_cp02

0x71be,	// (0x00053402) cale_month_corner_pane

0x71d4,	// (0x00053418) cale_month_day_heading_pane_ParamLimits

0x71d4,	// (0x00053418) cale_month_day_heading_pane

0x7217,	// (0x0005345b) cale_month_pane_g1_ParamLimits

0x7217,	// (0x0005345b) cale_month_pane_g1

0x7243,	// (0x00053487) cale_month_pane_g2_ParamLimits

0x7243,	// (0x00053487) cale_month_pane_g2

0x7266,	// (0x000534aa) cale_month_pane_g3_ParamLimits

0x7266,	// (0x000534aa) cale_month_pane_g3

0x72a2,	// (0x000534e6) cale_month_pane_g4_ParamLimits

0x72a2,	// (0x000534e6) cale_month_pane_g4

0x72de,	// (0x00053522) cale_month_pane_g5_ParamLimits

0x72de,	// (0x00053522) cale_month_pane_g5

0x731a,	// (0x0005355e) cale_month_pane_g6_ParamLimits

0x731a,	// (0x0005355e) cale_month_pane_g6

0x7356,	// (0x0005359a) cale_month_pane_g7_ParamLimits

0x7356,	// (0x0005359a) cale_month_pane_g7

0x73a2,	// (0x000535e6) cale_month_pane_g8_ParamLimits

0x73a2,	// (0x000535e6) cale_month_pane_g8

0x73ee,	// (0x00053632) cale_month_pane_g9_ParamLimits

0x73ee,	// (0x00053632) cale_month_pane_g9

0x7434,	// (0x00053678) cale_month_pane_g10_ParamLimits

0x7434,	// (0x00053678) cale_month_pane_g10

0x746e,	// (0x000536b2) cale_month_pane_g11_ParamLimits

0x746e,	// (0x000536b2) cale_month_pane_g11

0x74ac,	// (0x000536f0) cale_month_pane_g12_ParamLimits

0x74ac,	// (0x000536f0) cale_month_pane_g12

0x74ea,	// (0x0005372e) cale_month_pane_g13_ParamLimits

0x74ea,	// (0x0005372e) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0005b4ee) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0005b4ee) cale_month_pane_g

0x7528,	// (0x0005376c) cale_month_week_pane

0x753b,	// (0x0005377f) grid_cale_month_pane_ParamLimits

0x753b,	// (0x0005377f) grid_cale_month_pane

0x7579,	// (0x000537bd) cale_month_day_heading_pane_t1

0x75d7,	// (0x0005381b) cale_month_day_heading_pane_t2

0x763c,	// (0x00053880) cale_month_day_heading_pane_t3

0x76a1,	// (0x000538e5) cale_month_day_heading_pane_t4

0x7706,	// (0x0005394a) cale_month_day_heading_pane_t5

0x776b,	// (0x000539af) cale_month_day_heading_pane_t6

0x77d0,	// (0x00053a14) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0005b509) cale_month_day_heading_pane_t

0x23a9,	// (0x0004e5ed) bg_cale_side_pane_cp01

0x7845,	// (0x00053a89) cale_month_week_pane_t1

0x785c,	// (0x00053aa0) cale_month_week_pane_t2

0x7873,	// (0x00053ab7) cale_month_week_pane_t3

0x788a,	// (0x00053ace) cale_month_week_pane_t4

0x78a1,	// (0x00053ae5) cale_month_week_pane_t5

0x78bc,	// (0x00053b00) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0005b518) cale_month_week_pane_t

0x78db,	// (0x00053b1f) cell_cale_month_pane_ParamLimits

0x78db,	// (0x00053b1f) cell_cale_month_pane

0x79a1,	// (0x00053be5) cell_cale_month_pane_g1

0x79ad,	// (0x00053bf1) cell_cale_month_pane_t1_ParamLimits

0x79ad,	// (0x00053bf1) cell_cale_month_pane_t1

0x23b7,	// (0x0004e5fb) grid_highlight_pane_cp08

0x22be,	// (0x0004e502) main_smil_g1

0x79c9,	// (0x00053c0d) smil_status_pane

0x2740,	// (0x0004e984) smil_text_pane

0x3f95,	// (0x000501d9) bg_popup_call3_rect_pane_g8

0x3f9d,	// (0x000501e1) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0005b7d1) bg_popup_call3_rect_pane_g

0x422a,	// (0x0005046e) smil_status_volume_pane_g1

0x274a,	// (0x0004e98e) smil_status_pane_t1

0x8efa,	// (0x0005513e) volume_smil_pane

0x2761,	// (0x0004e9a5) list_smil_text_pane

0x79dc,	// (0x00053c20) scroll_pane_cp011

0x79e7,	// (0x00053c2b) smil_text_list_pane_t1_ParamLimits

0x79e7,	// (0x00053c2b) smil_text_list_pane_t1

0x7a5f,	// (0x00053ca3) aid_volume_smil_ParamLimits

0x7a5f,	// (0x00053ca3) aid_volume_smil

0x22be,	// (0x0004e502) smil_volume_pane_g1

0x22be,	// (0x0004e502) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0005b538) smil_volume_pane_g

0x2269,	// (0x0004e4ad) listscroll_cale_day_pane

0x276b,	// (0x0004e9af) bg_cale_pane

0x2783,	// (0x0004e9c7) list_cale_pane

0x2794,	// (0x0004e9d8) scroll_pane_cp09

0x27a5,	// (0x0004e9e9) cale_bg_pane_g1

0x27ad,	// (0x0004e9f1) cale_bg_pane_g2

0x27b5,	// (0x0004e9f9) cale_bg_pane_g3

0x27bd,	// (0x0004ea01) cale_bg_pane_g4

0x27c5,	// (0x0004ea09) cale_bg_pane_g5

0x27cd,	// (0x0004ea11) cale_bg_pane_g6

0x27d5,	// (0x0004ea19) cale_bg_pane_g7

0x27dd,	// (0x0004ea21) cale_bg_pane_g8

0x27e5,	// (0x0004ea29) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0005b53d) cale_bg_pane_g

0x7a81,	// (0x00053cc5) list_cale_time_pane_ParamLimits

0x7a81,	// (0x00053cc5) list_cale_time_pane

0x27ed,	// (0x0004ea31) list_cale_time_pane_g1_ParamLimits

0x27ed,	// (0x0004ea31) list_cale_time_pane_g1

0x27f9,	// (0x0004ea3d) list_cale_time_pane_g2_ParamLimits

0x27f9,	// (0x0004ea3d) list_cale_time_pane_g2

0x7a9d,	// (0x00053ce1) list_cale_time_pane_g3_ParamLimits

0x7a9d,	// (0x00053ce1) list_cale_time_pane_g3

0x7aab,	// (0x00053cef) list_cale_time_pane_g4_ParamLimits

0x7aab,	// (0x00053cef) list_cale_time_pane_g4

0x7ab9,	// (0x00053cfd) list_cale_time_pane_g5_ParamLimits

0x7ab9,	// (0x00053cfd) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0005b550) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0005b550) list_cale_time_pane_g

0x2813,	// (0x0004ea57) list_cale_time_pane_t1_ParamLimits

0x2813,	// (0x0004ea57) list_cale_time_pane_t1

0x283b,	// (0x0004ea7f) list_cale_time_pane_t2_ParamLimits

0x283b,	// (0x0004ea7f) list_cale_time_pane_t2

0x7dea,	// (0x0005402e) aid_blid_cardinal_pane

0x7e2c,	// (0x00054070) compass_pane_t4

0x2863,	// (0x0004eaa7) list_cale_time_pane_t4_ParamLimits

0x2863,	// (0x0004eaa7) list_cale_time_pane_t4

0x7e3a,	// (0x0005407e) compass_pane_t5

0x7e4a,	// (0x0005408e) compass_pane_t6

0x7e58,	// (0x0005409c) compass_pane_t7

0x2c8e,	// (0x0004eed2) navi_pane_cc_t1

0x2df1,	// (0x0004f035) aid_phob_thumbnail_center_pane

0x861a,	// (0x0005485e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0005b55d) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0005b55d) list_cale_time_pane_t

0x1b92,	// (0x0004ddd6) bg_popup_window_pane_cp02_ParamLimits

0x1b92,	// (0x0004ddd6) bg_popup_window_pane_cp02

0x288b,	// (0x0004eacf) heading_pane_cp01_ParamLimits

0x288b,	// (0x0004eacf) heading_pane_cp01

0x2897,	// (0x0004eadb) loc_req_pane_ParamLimits

0x2897,	// (0x0004eadb) loc_req_pane

0x28a7,	// (0x0004eaeb) loc_type_pane_ParamLimits

0x28a7,	// (0x0004eaeb) loc_type_pane

0x28b9,	// (0x0004eafd) loc_type_pane_t1_ParamLimits

0x28b9,	// (0x0004eafd) loc_type_pane_t1

0x28cb,	// (0x0004eb0f) loc_type_pane_t2_ParamLimits

0x28cb,	// (0x0004eb0f) loc_type_pane_t2

0x28dd,	// (0x0004eb21) loc_type_pane_t3_ParamLimits

0x28dd,	// (0x0004eb21) loc_type_pane_t3

0x0002,

0xf320,	// (0x0005b564) loc_type_pane_t_ParamLimits

0xf320,	// (0x0005b564) loc_type_pane_t

0x28ef,	// (0x0004eb33) list_loc_req_pane

0x28f9,	// (0x0004eb3d) scroll_pane_cp012

0x7ac7,	// (0x00053d0b) list_single_loc_request_popup_menu_pane_ParamLimits

0x7ac7,	// (0x00053d0b) list_single_loc_request_popup_menu_pane

0x2904,	// (0x0004eb48) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2904,	// (0x0004eb48) list_single_loc_request_popup_menu_pane_g1

0x2910,	// (0x0004eb54) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2910,	// (0x0004eb54) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0005b56b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0005b56b) list_single_loc_request_popup_menu_pane_g

0x291c,	// (0x0004eb60) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x291c,	// (0x0004eb60) list_single_loc_request_popup_menu_pane_t1

0x7ad9,	// (0x00053d1d) bg_popup_window_pane_cp03_ParamLimits

0x7ad9,	// (0x00053d1d) bg_popup_window_pane_cp03

0x7ae7,	// (0x00053d2b) heading_loc_req_pane_ParamLimits

0x7ae7,	// (0x00053d2b) heading_loc_req_pane

0x7af3,	// (0x00053d37) popup_dyc_status_message_window_g1_ParamLimits

0x7af3,	// (0x00053d37) popup_dyc_status_message_window_g1

0x7aff,	// (0x00053d43) popup_dyc_status_message_window_t1_ParamLimits

0x7aff,	// (0x00053d43) popup_dyc_status_message_window_t1

0x7b11,	// (0x00053d55) popup_dyc_status_message_window_t2_ParamLimits

0x7b11,	// (0x00053d55) popup_dyc_status_message_window_t2

0x7b23,	// (0x00053d67) popup_dyc_status_message_window_t3_ParamLimits

0x7b23,	// (0x00053d67) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0005b570) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0005b570) popup_dyc_status_message_window_t

0x1f3b,	// (0x0004e17f) bg_heading_pane_cp01

0x2932,	// (0x0004eb76) heading_loc_req_pane_g1

0x293a,	// (0x0004eb7e) heading_loc_req_pane_g2

0x2942,	// (0x0004eb86) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0005b577) heading_loc_req_pane_g

0x294a,	// (0x0004eb8e) heading_loc_req_pane_t1

0x2959,	// (0x0004eb9d) bg_popup_sub_pane_cp01_ParamLimits

0x2959,	// (0x0004eb9d) bg_popup_sub_pane_cp01

0x2967,	// (0x0004ebab) popup_cale_events_window_g1_ParamLimits

0x2967,	// (0x0004ebab) popup_cale_events_window_g1

0x2987,	// (0x0004ebcb) popup_cale_events_window_g2_ParamLimits

0x2987,	// (0x0004ebcb) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0005b5ab) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0005b5ab) popup_cale_events_window_g

0x29a7,	// (0x0004ebeb) popup_cale_events_window_t1_ParamLimits

0x29a7,	// (0x0004ebeb) popup_cale_events_window_t1

0x29b9,	// (0x0004ebfd) popup_cale_events_window_t2_ParamLimits

0x29b9,	// (0x0004ebfd) popup_cale_events_window_t2

0x29f7,	// (0x0004ec3b) popup_cale_events_window_t3_ParamLimits

0x29f7,	// (0x0004ec3b) popup_cale_events_window_t3

0x2a31,	// (0x0004ec75) popup_cale_events_window_t4_ParamLimits

0x2a31,	// (0x0004ec75) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0005b5b0) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0005b5b0) popup_cale_events_window_t

0x7ba7,	// (0x00053deb) call_type_pane

0x2d4d,	// (0x0004ef91) popup_call_status_window_g1

0x7bb3,	// (0x00053df7) popup_call_status_window_g2

0x7bbf,	// (0x00053e03) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0005b5b9) popup_call_status_window_g

0x2a67,	// (0x0004ecab) call_type_pane_g1

0x2a70,	// (0x0004ecb4) call_type_pane_g2

0x0001,

0xf37c,	// (0x0005b5c0) call_type_pane_g

0x1f3b,	// (0x0004e17f) bg_popup_sub_pane_cp02

0x2a79,	// (0x0004ecbd) listscroll_popup_wml_pane

0x2a81,	// (0x0004ecc5) list_wml_pane

0x2a8b,	// (0x0004eccf) scroll_pane_cp013

0x2a96,	// (0x0004ecda) list_single_graphic_popup_wml_pane_ParamLimits

0x2a96,	// (0x0004ecda) list_single_graphic_popup_wml_pane

0x22be,	// (0x0004e502) list_single_graphic_popup_wml_pane_g1

0x2aaa,	// (0x0004ecee) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0005b5c5) list_single_graphic_popup_wml_pane_g

0x2ab2,	// (0x0004ecf6) list_single_graphic_popup_wml_pane_t1

0x2ac0,	// (0x0004ed04) aid_call_pane

0x218e,	// (0x0004e3d2) popup_clock_analogue_window_g1

0x218e,	// (0x0004e3d2) popup_clock_analogue_window_g2

0x7bcb,	// (0x00053e0f) popup_clock_analogue_window_g3

0x7bcb,	// (0x00053e0f) popup_clock_analogue_window_g4

0x22be,	// (0x0004e502) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0005b5ca) popup_clock_analogue_window_g

0x7bd3,	// (0x00053e17) popup_clock_analogue_window_t1

0x7be1,	// (0x00053e25) clock_digital_number_pane_ParamLimits

0x7be1,	// (0x00053e25) clock_digital_number_pane

0x7bed,	// (0x00053e31) clock_digital_number_pane_cp02_ParamLimits

0x7bed,	// (0x00053e31) clock_digital_number_pane_cp02

0x7bf9,	// (0x00053e3d) clock_digital_number_pane_cp03_ParamLimits

0x7bf9,	// (0x00053e3d) clock_digital_number_pane_cp03

0x7c05,	// (0x00053e49) clock_digital_number_pane_cp04_ParamLimits

0x7c05,	// (0x00053e49) clock_digital_number_pane_cp04

0x7c15,	// (0x00053e59) clock_digital_separator_pane_ParamLimits

0x7c15,	// (0x00053e59) clock_digital_separator_pane

0x7c21,	// (0x00053e65) popup_clock_digital_window_t1

0x22be,	// (0x0004e502) clock_digital_number_pane_g1

0x22be,	// (0x0004e502) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0005b538) clock_digital_number_pane_g

0x22be,	// (0x0004e502) clock_digital_separator_pane_g1

0x22be,	// (0x0004e502) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0005b538) clock_digital_separator_pane_g

0x1f3b,	// (0x0004e17f) bg_popup_window_pane_cp04

0x2ad0,	// (0x0004ed14) heading_pane_cp03

0x2ad8,	// (0x0004ed1c) listscroll_popup_gms_pane

0x2ae0,	// (0x0004ed24) grid_large_graphic_popup_pane

0x2aea,	// (0x0004ed2e) listscroll_popup_gms_pane_g1

0x2af2,	// (0x0004ed36) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0005b5d5) listscroll_popup_gms_pane_g

0x25af,	// (0x0004e7f3) scroll_pane_cp014

0x7c3e,	// (0x00053e82) cell_large_graphic_popup_pane_ParamLimits

0x7c3e,	// (0x00053e82) cell_large_graphic_popup_pane

0x7c56,	// (0x00053e9a) cell_large_graphic_popup_pane_g1_ParamLimits

0x7c56,	// (0x00053e9a) cell_large_graphic_popup_pane_g1

0x2afa,	// (0x0004ed3e) cell_large_graphic_popup_pane_g2_ParamLimits

0x2afa,	// (0x0004ed3e) cell_large_graphic_popup_pane_g2

0x2b06,	// (0x0004ed4a) cell_large_graphic_popup_pane_g3_ParamLimits

0x2b06,	// (0x0004ed4a) cell_large_graphic_popup_pane_g3

0x2b13,	// (0x0004ed57) cell_large_graphic_popup_pane_g4_ParamLimits

0x2b13,	// (0x0004ed57) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0005b5da) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0005b5da) cell_large_graphic_popup_pane_g

0x2b23,	// (0x0004ed67) grid_highlight_pane_cp010

0x22be,	// (0x0004e502) bg_popup_call_pane_g1

0x2b2d,	// (0x0004ed71) list_single_graphic_popup_conf_pane_ParamLimits

0x2b2d,	// (0x0004ed71) list_single_graphic_popup_conf_pane

0x2b40,	// (0x0004ed84) list_highlight_pane_cp01

0x2b49,	// (0x0004ed8d) list_single_graphic_popup_conf_pane_g1

0x2b51,	// (0x0004ed95) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0005b5e3) list_single_graphic_popup_conf_pane_g

0x2b59,	// (0x0004ed9d) list_single_graphic_popup_conf_pane_t1

0x2b67,	// (0x0004edab) linegrid_cams_pane_g1

0x7c62,	// (0x00053ea6) linegrid_cams_pane_g2

0x23ea,	// (0x0004e62e) linegrid_cams_pane_g3

0x2b70,	// (0x0004edb4) linegrid_cams_pane_g4

0x7c6b,	// (0x00053eaf) linegrid_cams_pane_g5

0x7c74,	// (0x00053eb8) linegrid_cams_pane_g6

0x23f3,	// (0x0004e637) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0005b5e8) linegrid_cams_pane_g

0x2b79,	// (0x0004edbd) popup_clock_analogue_window

0x2b79,	// (0x0004edbd) popup_clock_digital_window

0x1f3b,	// (0x0004e17f) popup_phob_thumbnail_window

0x22be,	// (0x0004e502) call_video_uplink_pane_g1

0x2b82,	// (0x0004edc6) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0005b5f7) call_video_uplink_pane_g

0x2b8a,	// (0x0004edce) video_uplink_pane

0x2b92,	// (0x0004edd6) mce_image_pane_g1

0x7c7d,	// (0x00053ec1) mce_image_pane_g2

0x7c87,	// (0x00053ecb) mce_image_pane_g3

0x7c8f,	// (0x00053ed3) mce_image_pane_g4

0x7c97,	// (0x00053edb) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0005b5fc) mce_image_pane_g

0x2b9c,	// (0x0004ede0) control_top_pane_stacon_cp01_ParamLimits

0x2b9c,	// (0x0004ede0) control_top_pane_stacon_cp01

0x2bb0,	// (0x0004edf4) uni_indicator_pane_stacon_cp01_ParamLimits

0x2bb0,	// (0x0004edf4) uni_indicator_pane_stacon_cp01

0x2bc1,	// (0x0004ee05) bg_popup_sub_pane_cp03

0x7c9f,	// (0x00053ee3) chi_dic_find_pane

0x7ca7,	// (0x00053eeb) listscroll_chi_dic_pane

0x7cb0,	// (0x00053ef4) main_pane_chidic_g1

0x2bcb,	// (0x0004ee0f) chi_dic_find_pane_t1

0x2bd9,	// (0x0004ee1d) find_chidic_pane

0x2be2,	// (0x0004ee26) chi_dic_list_pane_ParamLimits

0x2be2,	// (0x0004ee26) chi_dic_list_pane

0x2bf3,	// (0x0004ee37) scroll_pane_cp020

0x2bfb,	// (0x0004ee3f) find_chidic_pane_t1

0x1f3b,	// (0x0004e17f) input_focus_pane_cp06

0x7cc3,	// (0x00053f07) list_chi_dic_pane_ParamLimits

0x7cc3,	// (0x00053f07) list_chi_dic_pane

0x7cdd,	// (0x00053f21) list_chi_dic_pane_t1_ParamLimits

0x7cdd,	// (0x00053f21) list_chi_dic_pane_t1

0x1f3b,	// (0x0004e17f) list_highlight_pane_cp020

0x2c0a,	// (0x0004ee4e) bg_cale_heading_pane_g1

0x7cf0,	// (0x00053f34) bg_cale_heading_pane_g2

0x7cf8,	// (0x00053f3c) bg_cale_heading_pane_g3

0x7d00,	// (0x00053f44) bg_cale_heading_pane_g4

0x7d0a,	// (0x00053f4e) bg_cale_heading_pane_g5

0x7d14,	// (0x00053f58) bg_cale_heading_pane_g6

0x7d1c,	// (0x00053f60) bg_cale_heading_pane_g7

0x7d24,	// (0x00053f68) bg_cale_heading_pane_g8

0x7d2e,	// (0x00053f72) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0005b607) bg_cale_heading_pane_g

0x2c0a,	// (0x0004ee4e) bg_cale_side_pane_g1

0x7d38,	// (0x00053f7c) bg_cale_side_pane_g2

0x7d42,	// (0x00053f86) bg_cale_side_pane_g3

0x7d4c,	// (0x00053f90) bg_cale_side_pane_g4

0x7d56,	// (0x00053f9a) bg_cale_side_pane_g5

0x7d60,	// (0x00053fa4) bg_cale_side_pane_g6

0x7d6a,	// (0x00053fae) bg_cale_side_pane_g7

0x7d74,	// (0x00053fb8) bg_cale_side_pane_g8

0x7d7c,	// (0x00053fc0) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0005b61a) bg_cale_side_pane_g

0x7d84,	// (0x00053fc8) popup_call_status_window_ParamLimits

0x7d84,	// (0x00053fc8) popup_call_status_window

0x2c12,	// (0x0004ee56) stacon_top_pane

0x2c1a,	// (0x0004ee5e) status_pane_ParamLimits

0x2c1a,	// (0x0004ee5e) status_pane

0x2c2f,	// (0x0004ee73) status_small_pane

0x2c37,	// (0x0004ee7b) control_pane

0x1f3b,	// (0x0004e17f) stacon_bottom_pane

0x2c3f,	// (0x0004ee83) list_single_mce_smart_pane_t1_ParamLimits

0x2c3f,	// (0x0004ee83) list_single_mce_smart_pane_t1

0x2c52,	// (0x0004ee96) list_single_mce_smart_pane_t2_ParamLimits

0x2c52,	// (0x0004ee96) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0005b62d) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0005b62d) list_single_mce_smart_pane_t

0x7d90,	// (0x00053fd4) compass_pane

0x7d9c,	// (0x00053fe0) main_location2_pane_t1

0x7db0,	// (0x00053ff4) main_location2_pane_t2

0x7dc4,	// (0x00054008) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0005b632) main_location2_pane_t

0x2c71,	// (0x0004eeb5) compass_pane_g1_ParamLimits

0x2c71,	// (0x0004eeb5) compass_pane_g1

0x7e0e,	// (0x00054052) compass_pane_t1

0x7e1d,	// (0x00054061) compass_pane_t2

0x0005,

0xf3f7,	// (0x0005b63b) compass_pane_t

0x7e68,	// (0x000540ac) text_secondary_cp61

0x2c85,	// (0x0004eec9) navi_pane_cams_g5

0x2ca8,	// (0x0004eeec) navi_pane_im_t1

0x2cb6,	// (0x0004eefa) navi_pane_mp_g1_ParamLimits

0x2cb6,	// (0x0004eefa) navi_pane_mp_g1

0x2cca,	// (0x0004ef0e) navi_pane_mp_g2_ParamLimits

0x2cca,	// (0x0004ef0e) navi_pane_mp_g2

0x2cd6,	// (0x0004ef1a) navi_pane_mp_g3_ParamLimits

0x2cd6,	// (0x0004ef1a) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0005b64f) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0005b64f) navi_pane_mp_g

0x2ce2,	// (0x0004ef26) navi_pane_mp_t1

0x2cf0,	// (0x0004ef34) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0005b656) navi_pane_mp_t

0x2d2c,	// (0x0004ef70) navi_pane_vt_g1

0x2ce2,	// (0x0004ef26) navi_pane_vt_t1

0x2d34,	// (0x0004ef78) navi_slider_pane

0x2d3c,	// (0x0004ef80) zooming_pane

0x2d44,	// (0x0004ef88) navi_slider_pane_g1

0x7f93,	// (0x000541d7) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0005b65d) navi_slider_pane_g

0x2d76,	// (0x0004efba) aid_levels_zoom

0x2d7e,	// (0x0004efc2) zooming_pane_g1

0x2d86,	// (0x0004efca) zooming_pane_g2

0x2d86,	// (0x0004efca) zooming_pane_g3

0x0002,

0xf428,	// (0x0005b66c) zooming_pane_g

0x2d8e,	// (0x0004efd2) level_10_zoom

0x2d97,	// (0x0004efdb) level_11_zoom

0x2da0,	// (0x0004efe4) level_1_zoom

0x2da9,	// (0x0004efed) level_2_zoom

0x2db2,	// (0x0004eff6) level_3_zoom

0x2dbb,	// (0x0004efff) level_4_zoom

0x2dc4,	// (0x0004f008) level_5_zoom

0x2dcd,	// (0x0004f011) level_6_zoom

0x2dd6,	// (0x0004f01a) level_7_zoom

0x2ddf,	// (0x0004f023) level_8_zoom

0x2de8,	// (0x0004f02c) level_9_zoom

0x2df9,	// (0x0004f03d) popup_phob_thumbnail_window_g1

0x2e01,	// (0x0004f045) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0005b673) popup_phob_thumbnail_window_g

0x40f7,	// (0x0005033b) level_1_location

0x40ff,	// (0x00050343) level_2_location

0x4107,	// (0x0005034b) level_3_location

0x410f,	// (0x00050353) level_4_location

0x2d3c,	// (0x0004ef80) level_5_location

0x7fa5,	// (0x000541e9) mce_icon_pane_g1

0x7fad,	// (0x000541f1) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0005b678) mce_icon_pane_g

0x7fb5,	// (0x000541f9) main_mup_pane_g1_ParamLimits

0x7fb5,	// (0x000541f9) main_mup_pane_g1

0x7fcd,	// (0x00054211) main_mup_pane_g2_ParamLimits

0x7fcd,	// (0x00054211) main_mup_pane_g2

0x7fe9,	// (0x0005422d) main_mup_pane_g3_ParamLimits

0x7fe9,	// (0x0005422d) main_mup_pane_g3

0x8005,	// (0x00054249) main_mup_pane_g4_ParamLimits

0x8005,	// (0x00054249) main_mup_pane_g4

0x8021,	// (0x00054265) main_mup_pane_g5_ParamLimits

0x8021,	// (0x00054265) main_mup_pane_g5

0x8042,	// (0x00054286) main_mup_pane_g6_ParamLimits

0x8042,	// (0x00054286) main_mup_pane_g6

0x805e,	// (0x000542a2) main_mup_pane_g7_ParamLimits

0x805e,	// (0x000542a2) main_mup_pane_g7

0x807a,	// (0x000542be) main_mup_pane_g8_ParamLimits

0x807a,	// (0x000542be) main_mup_pane_g8

0x809a,	// (0x000542de) main_mup_pane_g9_ParamLimits

0x809a,	// (0x000542de) main_mup_pane_g9

0x80b9,	// (0x000542fd) main_mup_pane_g10_ParamLimits

0x80b9,	// (0x000542fd) main_mup_pane_g10

0x80d8,	// (0x0005431c) main_mup_pane_g11_ParamLimits

0x80d8,	// (0x0005431c) main_mup_pane_g11

0x80f0,	// (0x00054334) main_mup_pane_g12_ParamLimits

0x80f0,	// (0x00054334) main_mup_pane_g12

0x80fe,	// (0x00054342) main_mup_pane_g13_ParamLimits

0x80fe,	// (0x00054342) main_mup_pane_g13

0x000c,

0xf439,	// (0x0005b67d) main_mup_pane_g_ParamLimits

0xf439,	// (0x0005b67d) main_mup_pane_g

0x8114,	// (0x00054358) main_mup_pane_t1_ParamLimits

0x8114,	// (0x00054358) main_mup_pane_t1

0x8131,	// (0x00054375) main_mup_pane_t2_ParamLimits

0x8131,	// (0x00054375) main_mup_pane_t2

0x814b,	// (0x0005438f) main_mup_pane_t3_ParamLimits

0x814b,	// (0x0005438f) main_mup_pane_t3

0x8165,	// (0x000543a9) main_mup_pane_t4_ParamLimits

0x8165,	// (0x000543a9) main_mup_pane_t4

0x8177,	// (0x000543bb) main_mup_pane_t5_ParamLimits

0x8177,	// (0x000543bb) main_mup_pane_t5

0x8189,	// (0x000543cd) main_mup_pane_t6_ParamLimits

0x8189,	// (0x000543cd) main_mup_pane_t6

0x0005,

0xf454,	// (0x0005b698) main_mup_pane_t_ParamLimits

0xf454,	// (0x0005b698) main_mup_pane_t

0x819f,	// (0x000543e3) mup_progress_pane_ParamLimits

0x819f,	// (0x000543e3) mup_progress_pane

0x81ab,	// (0x000543ef) mup_visualizer_pane_ParamLimits

0x81ab,	// (0x000543ef) mup_visualizer_pane

0x81e5,	// (0x00054429) mup_volume_pane_ParamLimits

0x81e5,	// (0x00054429) mup_volume_pane

0x2d4d,	// (0x0004ef91) mup_visualizer_pane_g1_ParamLimits

0x2d4d,	// (0x0004ef91) mup_visualizer_pane_g1

0x2d4d,	// (0x0004ef91) mup_visualizer_pane_g2_ParamLimits

0x2d4d,	// (0x0004ef91) mup_visualizer_pane_g2

0x2c71,	// (0x0004eeb5) mup_visualizer_pane_g3_ParamLimits

0x2c71,	// (0x0004eeb5) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0005b6a5) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0005b6a5) mup_visualizer_pane_g

0x22be,	// (0x0004e502) mup_volume_pane_g1

0x2e11,	// (0x0004f055) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0005b6ac) mup_volume_pane_g

0x22be,	// (0x0004e502) mup_progress_pane_g1

0x2e1a,	// (0x0004f05e) mup_progress_pane_g2

0x2e23,	// (0x0004f067) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0005b6b1) mup_progress_pane_g

0x1f3b,	// (0x0004e17f) bg_popup_window_pane_cp05

0x2e2c,	// (0x0004f070) heading_pane_cp02_ParamLimits

0x2e2c,	// (0x0004f070) heading_pane_cp02

0x2e46,	// (0x0004f08a) list_popup_blid_pane

0x2e4e,	// (0x0004f092) list_blid_sat_info_pane_ParamLimits

0x2e4e,	// (0x0004f092) list_blid_sat_info_pane

0x2e61,	// (0x0004f0a5) list_blid_sat_info_pane_g1

0x2e69,	// (0x0004f0ad) list_blid_sat_info_pane_t1

0x82f2,	// (0x00054536) mup_equalizer_pane_ParamLimits

0x82f2,	// (0x00054536) mup_equalizer_pane

0x8313,	// (0x00054557) mup_equalizer_pane_cp1_ParamLimits

0x8313,	// (0x00054557) mup_equalizer_pane_cp1

0x8334,	// (0x00054578) mup_equalizer_pane_cp2_ParamLimits

0x8334,	// (0x00054578) mup_equalizer_pane_cp2

0x8355,	// (0x00054599) mup_equalizer_pane_cp3_ParamLimits

0x8355,	// (0x00054599) mup_equalizer_pane_cp3

0x8376,	// (0x000545ba) mup_equalizer_pane_cp4_ParamLimits

0x8376,	// (0x000545ba) mup_equalizer_pane_cp4

0x8397,	// (0x000545db) mup_equalizer_pane_cp5

0x83ad,	// (0x000545f1) mup_equalizer_pane_cp6

0x83c5,	// (0x00054609) mup_equalizer_pane_cp7

0x4015,	// (0x00050259) bg_popup_call_poc_act_pane_g9

0x401d,	// (0x00050261) bg_popup_call_poc_act_pane_g10

0x4025,	// (0x00050269) bg_popup_call_poc_act_pane_g11

0x000a,

0x2196,	// (0x0004e3da) mup_scale_pane

0x22be,	// (0x0004e502) mup_scale_pane_g1

0x2e77,	// (0x0004f0bb) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0005b6cd) mup_scale_pane_g

0x2e9b,	// (0x0004f0df) msg_data_pane

0x2ea3,	// (0x0004f0e7) scroll_pane_cp017

0x83ef,	// (0x00054633) bg_list_pane_cp04_ParamLimits

0x83ef,	// (0x00054633) bg_list_pane_cp04

0x2eab,	// (0x0004f0ef) msg_data_pane_g1

0x8413,	// (0x00054657) msg_data_pane_g2

0x841d,	// (0x00054661) msg_data_pane_g3

0x8425,	// (0x00054669) msg_data_pane_g4

0x842d,	// (0x00054671) msg_data_pane_g5

0x8435,	// (0x00054679) msg_data_pane_g6

0x843d,	// (0x00054681) msg_data_pane_g7

0x0006,

0xf498,	// (0x0005b6dc) msg_data_pane_g

0x8445,	// (0x00054689) msg_text_pane_ParamLimits

0x8445,	// (0x00054689) msg_text_pane

0x8485,	// (0x000546c9) qrid_highlight_pane_cp011_ParamLimits

0x8485,	// (0x000546c9) qrid_highlight_pane_cp011

0x1f3b,	// (0x0004e17f) msg_body_pane

0x1f3b,	// (0x0004e17f) msg_header_pane

0x2ebc,	// (0x0004f100) input_focus_pane_cp07

0x84ab,	// (0x000546ef) msg_header_pane_t1_ParamLimits

0x84ab,	// (0x000546ef) msg_header_pane_t1

0x84bd,	// (0x00054701) msg_header_pane_t2_ParamLimits

0x84bd,	// (0x00054701) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0005b6f0) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0005b6f0) msg_header_pane_t

0x2ed1,	// (0x0004f115) msg_body_pane_g1

0x84cf,	// (0x00054713) msg_body_pane_t1_ParamLimits

0x84cf,	// (0x00054713) msg_body_pane_t1

0x8500,	// (0x00054744) msg_body_pane_t2_ParamLimits

0x8500,	// (0x00054744) msg_body_pane_t2

0x8512,	// (0x00054756) msg_body_pane_t3_ParamLimits

0x8512,	// (0x00054756) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0005b6f5) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0005b6f5) msg_body_pane_t

0x8576,	// (0x000547ba) main_viewer_pane_g1_ParamLimits

0x8576,	// (0x000547ba) main_viewer_pane_g1

0x8582,	// (0x000547c6) main_viewer_pane_g2_ParamLimits

0x8582,	// (0x000547c6) main_viewer_pane_g2

0x858e,	// (0x000547d2) main_viewer_pane_g3_ParamLimits

0x858e,	// (0x000547d2) main_viewer_pane_g3

0x859f,	// (0x000547e3) main_viewer_pane_g4_ParamLimits

0x859f,	// (0x000547e3) main_viewer_pane_g4

0x85b0,	// (0x000547f4) main_viewer_pane_g5_ParamLimits

0x85b0,	// (0x000547f4) main_viewer_pane_g5

0x85b0,	// (0x000547f4) main_viewer_pane_g7_ParamLimits

0x85b0,	// (0x000547f4) main_viewer_pane_g7

0x2904,	// (0x0004eb48) main_viewer_pane_g8_ParamLimits

0x2904,	// (0x0004eb48) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0005b705) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0005b705) main_viewer_pane_g

0x2ed9,	// (0x0004f11d) viewer_content_pane_ParamLimits

0x2ed9,	// (0x0004f11d) viewer_content_pane

0x85ee,	// (0x00054832) main_postcard_pane_g1_ParamLimits

0x85ee,	// (0x00054832) main_postcard_pane_g1

0x85fc,	// (0x00054840) main_postcard_pane_g2_ParamLimits

0x85fc,	// (0x00054840) main_postcard_pane_g2

0x860a,	// (0x0005484e) main_postcard_pane_g3_ParamLimits

0x860a,	// (0x0005484e) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0005b716) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0005b716) main_postcard_pane_g

0x861a,	// (0x0005485e) main_postcard_pane_g4

0x4217,	// (0x0005045b) smil_status_volume_pane_g2

0x8646,	// (0x0005488a) postcard_pane_ParamLimits

0x8646,	// (0x0005488a) postcard_pane

0x2d4d,	// (0x0004ef91) postcard_pane_g1_ParamLimits

0x2d4d,	// (0x0004ef91) postcard_pane_g1

0x8678,	// (0x000548bc) postcard_pane_g2_ParamLimits

0x8678,	// (0x000548bc) postcard_pane_g2

0x8684,	// (0x000548c8) postcard_pane_g3_ParamLimits

0x8684,	// (0x000548c8) postcard_pane_g3

0x2ef5,	// (0x0004f139) postcard_pane_g4_ParamLimits

0x2ef5,	// (0x0004f139) postcard_pane_g4

0x8690,	// (0x000548d4) postcard_pane_g5_ParamLimits

0x8690,	// (0x000548d4) postcard_pane_g5

0x869c,	// (0x000548e0) postcard_pane_g6_ParamLimits

0x869c,	// (0x000548e0) postcard_pane_g6

0x2ee7,	// (0x0004f12b) postcard_pane_g7_ParamLimits

0x2ee7,	// (0x0004f12b) postcard_pane_g7

0x0006,

0xf4df,	// (0x0005b723) postcard_pane_g_ParamLimits

0xf4df,	// (0x0005b723) postcard_pane_g

0x86a8,	// (0x000548ec) main_mp2_pane_g1_ParamLimits

0x86a8,	// (0x000548ec) main_mp2_pane_g1

0x86b4,	// (0x000548f8) main_mp2_pane_g2_ParamLimits

0x86b4,	// (0x000548f8) main_mp2_pane_g2

0x86c0,	// (0x00054904) main_mp2_pane_g3_ParamLimits

0x86c0,	// (0x00054904) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0005b732) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0005b732) main_mp2_pane_g

0x86cc,	// (0x00054910) main_mp2_pane_t1_ParamLimits

0x86cc,	// (0x00054910) main_mp2_pane_t1

0x86e3,	// (0x00054927) main_mp2_pane_t2_ParamLimits

0x86e3,	// (0x00054927) main_mp2_pane_t2

0x86f7,	// (0x0005493b) main_mp2_pane_t3_ParamLimits

0x86f7,	// (0x0005493b) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0005b739) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0005b739) main_mp2_pane_t

0x2f03,	// (0x0004f147) pec_content_pane_ParamLimits

0x2f03,	// (0x0004f147) pec_content_pane

0x25af,	// (0x0004e7f3) scroll_pane_cp015

0x2f15,	// (0x0004f159) pec_attribute_pane_ParamLimits

0x2f15,	// (0x0004f159) pec_attribute_pane

0x8709,	// (0x0005494d) pec_content_pane_g1_ParamLimits

0x8709,	// (0x0005494d) pec_content_pane_g1

0x2f25,	// (0x0004f169) pec_content_pane_t1_ParamLimits

0x2f25,	// (0x0004f169) pec_content_pane_t1

0x2f37,	// (0x0004f17b) pec_content_pane_t2_ParamLimits

0x2f37,	// (0x0004f17b) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0005b740) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0005b740) pec_content_pane_t

0x8715,	// (0x00054959) list_single_graphic_pane_cp01_ParamLimits

0x8715,	// (0x00054959) list_single_graphic_pane_cp01

0x2196,	// (0x0004e3da) bg_popup_sub_pane_cp04

0x2f49,	// (0x0004f18d) popup_mup_playback_window_g1

0x2f55,	// (0x0004f199) popup_mup_playback_window_t1

0x2f6a,	// (0x0004f1ae) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0005b745) popup_mup_playback_window_t

0x2fa1,	// (0x0004f1e5) main_image_pane_g1_ParamLimits

0x2fa1,	// (0x0004f1e5) main_image_pane_g1

0x2fe4,	// (0x0004f228) scroll_pane_cp018_ParamLimits

0x2fe4,	// (0x0004f228) scroll_pane_cp018

0x2ffc,	// (0x0004f240) scroll_pane_cp016_ParamLimits

0x2ffc,	// (0x0004f240) scroll_pane_cp016

0x87ae,	// (0x000549f2) smil2_image_pane_ParamLimits

0x87ae,	// (0x000549f2) smil2_image_pane

0x87de,	// (0x00054a22) smil2_root_pane_ParamLimits

0x87de,	// (0x00054a22) smil2_root_pane

0x880a,	// (0x00054a4e) smil2_text_pane_ParamLimits

0x880a,	// (0x00054a4e) smil2_text_pane

0x1f3b,	// (0x0004e17f) bg_list_pane_cp06

0x3038,	// (0x0004f27c) grid_radio_pane

0x1f3b,	// (0x0004e17f) bg_popup_window_pane_cp06

0x3040,	// (0x0004f284) main_fmradio_pane_t1

0x2ad0,	// (0x0004ed14) heading_pane_cp04

0x304e,	// (0x0004f292) main_fmradio_pane_t2

0x402d,	// (0x00050271) popup_cale_lunar_info_window_g1

0x305c,	// (0x0004f2a0) main_fmradio_pane_t3

0x4035,	// (0x00050279) popup_cale_lunar_info_window_g2

0x306a,	// (0x0004f2ae) main_fmradio_pane_t4

0x0001,

0x3078,	// (0x0004f2bc) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0005b820) popup_cale_lunar_info_window_g

0xf516,	// (0x0005b75a) main_fmradio_pane_t

0x3086,	// (0x0004f2ca) wait_bar_pane_cp03

0x308e,	// (0x0004f2d2) cell_fmradio_pane_ParamLimits

0x308e,	// (0x0004f2d2) cell_fmradio_pane

0x2ee7,	// (0x0004f12b) cell_fmradio_pane_g1_ParamLimits

0x2ee7,	// (0x0004f12b) cell_fmradio_pane_g1

0x1f3b,	// (0x0004e17f) grid_highlight_pane_cp011

0x30a1,	// (0x0004f2e5) poc_content_pane_ParamLimits

0x30a1,	// (0x0004f2e5) poc_content_pane

0x30b3,	// (0x0004f2f7) scroll_pane_cp019

0x884a,	// (0x00054a8e) popup_call_poc_act_window_ParamLimits

0x884a,	// (0x00054a8e) popup_call_poc_act_window

0x8857,	// (0x00054a9b) popup_call_poc_inact_window_ParamLimits

0x8857,	// (0x00054a9b) popup_call_poc_inact_window

0xf5b3,	// (0x0005b7f7) bg_popup_call_poc_act_pane_g

0x3fa5,	// (0x000501e9) bg_popup_call_poc_inact_pane_g1

0x3fad,	// (0x000501f1) bg_popup_call_poc_inact_pane_g2

0x30bb,	// (0x0004f2ff) popup_call_poc_act_window_g2

0x3fb5,	// (0x000501f9) bg_popup_call_poc_inact_pane_g3

0x3fbd,	// (0x00050201) bg_popup_call_poc_inact_pane_g4

0x3fc5,	// (0x00050209) bg_popup_call_poc_inact_pane_g5

0x30c3,	// (0x0004f307) popup_call_poc_act_window_t1_ParamLimits

0x30c3,	// (0x0004f307) popup_call_poc_act_window_t1

0x30eb,	// (0x0004f32f) popup_call_poc_act_window_t2_ParamLimits

0x30eb,	// (0x0004f32f) popup_call_poc_act_window_t2

0x3113,	// (0x0004f357) popup_call_poc_act_window_t3_ParamLimits

0x3113,	// (0x0004f357) popup_call_poc_act_window_t3

0x313b,	// (0x0004f37f) popup_call_poc_act_window_t4_ParamLimits

0x313b,	// (0x0004f37f) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0005b765) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0005b765) popup_call_poc_act_window_t

0x3fcd,	// (0x00050211) bg_popup_call_poc_inact_pane_g6

0x3fd5,	// (0x00050219) bg_popup_call_poc_inact_pane_g7

0x3fdd,	// (0x00050221) bg_popup_call_poc_inact_pane_g8

0x314d,	// (0x0004f391) popup_call_poc_inact_window_g2

0x3fe5,	// (0x00050229) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0005b7e4) bg_popup_call_poc_inact_pane_g

0x3155,	// (0x0004f399) popup_call_poc_inact_window_t1_ParamLimits

0x3155,	// (0x0004f399) popup_call_poc_inact_window_t1

0x316a,	// (0x0004f3ae) popup_call_poc_inact_window_t2_ParamLimits

0x316a,	// (0x0004f3ae) popup_call_poc_inact_window_t2

0x317f,	// (0x0004f3c3) popup_call_poc_inact_window_t3_ParamLimits

0x317f,	// (0x0004f3c3) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0005b76e) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0005b76e) popup_call_poc_inact_window_t

0x419d,	// (0x000503e1) context_pane_ParamLimits

0x8e47,	// (0x0005508b) signal_pane_ParamLimits

0x2d3c,	// (0x0004ef80) main_call2_pane

0x418b,	// (0x000503cf) popup_phob_thumbnail2_window_ParamLimits

0x418b,	// (0x000503cf) popup_phob_thumbnail2_window

0x8524,	// (0x00054768) aid_hotspot_pointer_arrow_pane

0x852c,	// (0x00054770) aid_hotspot_pointer_hand_pane

0x8b79,	// (0x00054dbd) phob_pre_status_pane_g5

0x68dd,	// (0x00052b21) cams_zoom_pane_ParamLimits

0x68e9,	// (0x00052b2d) image_vga_pane_ParamLimits

0x68f8,	// (0x00052b3c) main_camera_pane_g1_ParamLimits

0x6906,	// (0x00052b4a) main_camera_pane_g2_ParamLimits

0x6912,	// (0x00052b56) main_camera_pane_g3_ParamLimits

0x691e,	// (0x00052b62) main_camera_pane_g4_ParamLimits

0x692a,	// (0x00052b6e) main_camera_pane_g5_ParamLimits

0x6936,	// (0x00052b7a) main_camera_pane_g6_ParamLimits

0x6942,	// (0x00052b86) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0005b46d) main_camera_pane_g_ParamLimits

0x694e,	// (0x00052b92) main_camera_pane_t1_ParamLimits

0x6960,	// (0x00052ba4) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0005b47e) main_camera_pane_t_ParamLimits

0x2196,	// (0x0004e3da) bg_popup_preview_window_pane_cp01_ParamLimits

0x2196,	// (0x0004e3da) bg_popup_preview_window_pane_cp01

0x3194,	// (0x0004f3d8) popup_phob_thumbnail2_window_g1_ParamLimits

0x3194,	// (0x0004f3d8) popup_phob_thumbnail2_window_g1

0x1f3b,	// (0x0004e17f) call2_cli_visual_pane

0x8873,	// (0x00054ab7) popup_call2_audio_conf_window_ParamLimits

0x8873,	// (0x00054ab7) popup_call2_audio_conf_window

0x8888,	// (0x00054acc) popup_call2_audio_first_window_ParamLimits

0x8888,	// (0x00054acc) popup_call2_audio_first_window

0x8926,	// (0x00054b6a) popup_call2_audio_in_window_ParamLimits

0x8926,	// (0x00054b6a) popup_call2_audio_in_window

0x8968,	// (0x00054bac) popup_call2_audio_out_window_ParamLimits

0x8968,	// (0x00054bac) popup_call2_audio_out_window

0x89ca,	// (0x00054c0e) popup_call2_audio_second_window_ParamLimits

0x89ca,	// (0x00054c0e) popup_call2_audio_second_window

0x8a28,	// (0x00054c6c) popup_call2_audio_wait_window_ParamLimits

0x8a28,	// (0x00054c6c) popup_call2_audio_wait_window

0x1f3b,	// (0x0004e17f) bg_popup_call2_act_pane_cp03

0x2178,	// (0x0004e3bc) list_conf_pane_cp

0x31a0,	// (0x0004f3e4) popup_call2_audio_conf_window_t1

0x2b2d,	// (0x0004ed71) list_single_graphic_popup_conf2_pane_ParamLimits

0x2b2d,	// (0x0004ed71) list_single_graphic_popup_conf2_pane

0x2b40,	// (0x0004ed84) list_highlight_pane_cp04

0x31ae,	// (0x0004f3f2) list_single_graphic_popup_conf2_pane_g1

0x2b51,	// (0x0004ed95) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0005b775) list_single_graphic_popup_conf2_pane_g

0x31b8,	// (0x0004f3fc) list_single_graphic_popup_conf2_pane_t1

0x31c6,	// (0x0004f40a) bg_popup_call2_act_pane_cp01_ParamLimits

0x31c6,	// (0x0004f40a) bg_popup_call2_act_pane_cp01

0x3250,	// (0x0004f494) call_type_pane_cp05_ParamLimits

0x3250,	// (0x0004f494) call_type_pane_cp05

0x32a4,	// (0x0004f4e8) popup_call2_audio_second_window_g1_ParamLimits

0x32a4,	// (0x0004f4e8) popup_call2_audio_second_window_g1

0x32f8,	// (0x0004f53c) popup_call2_audio_second_window_g2_ParamLimits

0x32f8,	// (0x0004f53c) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0005b77a) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0005b77a) popup_call2_audio_second_window_g

0x3377,	// (0x0004f5bb) popup_call2_audio_second_window_t1_ParamLimits

0x3377,	// (0x0004f5bb) popup_call2_audio_second_window_t1

0x3432,	// (0x0004f676) popup_call2_audio_second_window_t2_ParamLimits

0x3432,	// (0x0004f676) popup_call2_audio_second_window_t2

0x3485,	// (0x0004f6c9) popup_call2_audio_second_window_t3_ParamLimits

0x3485,	// (0x0004f6c9) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0005b781) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0005b781) popup_call2_audio_second_window_t

0x1f3b,	// (0x0004e17f) bg_popup_call2_in_pane_cp02

0x1f45,	// (0x0004e189) call_type_pane_cp04

0x1f4d,	// (0x0004e191) popup_call2_audio_wait_window_g1

0x1f55,	// (0x0004e199) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0005b35a) popup_call2_audio_wait_window_g

0x1f5d,	// (0x0004e1a1) popup_call2_audio_wait_window_t3

0x3578,	// (0x0004f7bc) bg_popup_call2_act_pane_ParamLimits

0x3578,	// (0x0004f7bc) bg_popup_call2_act_pane

0x3638,	// (0x0004f87c) call_type_pane_cp03_ParamLimits

0x3638,	// (0x0004f87c) call_type_pane_cp03

0x369c,	// (0x0004f8e0) popup_call2_audio_first_window_g1_ParamLimits

0x369c,	// (0x0004f8e0) popup_call2_audio_first_window_g1

0x370c,	// (0x0004f950) popup_call2_audio_first_window_g2_ParamLimits

0x370c,	// (0x0004f950) popup_call2_audio_first_window_g2

0x2d4d,	// (0x0004ef91) popup_call2_audio_first_window_g3_ParamLimits

0x2d4d,	// (0x0004ef91) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0005b78a) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0005b78a) popup_call2_audio_first_window_g

0x37ea,	// (0x0004fa2e) popup_call2_audio_first_window_t1_ParamLimits

0x37ea,	// (0x0004fa2e) popup_call2_audio_first_window_t1

0x38ed,	// (0x0004fb31) popup_call2_audio_first_window_t4_ParamLimits

0x38ed,	// (0x0004fb31) popup_call2_audio_first_window_t4

0x39d0,	// (0x0004fc14) popup_call2_audio_first_window_t5_ParamLimits

0x39d0,	// (0x0004fc14) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0005b795) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0005b795) popup_call2_audio_first_window_t

0x218e,	// (0x0004e3d2) bg_popup_call2_act_pane_g1

0x403d,	// (0x00050281) popup_cale_lunar_info_window_t1

0x404b,	// (0x0005028f) popup_cale_lunar_info_window_t2

0x4059,	// (0x0005029d) popup_cale_lunar_info_window_t3

0x1f3b,	// (0x0004e17f) bg_popup_call2_bubble_pane

0x3ad1,	// (0x0004fd15) bg_popup_call2_in_pane_cp01_ParamLimits

0x3ad1,	// (0x0004fd15) bg_popup_call2_in_pane_cp01

0x1c17,	// (0x0004de5b) call_type_pane_cp02

0x3b19,	// (0x0004fd5d) popup_call2_audio_out_window_g1_ParamLimits

0x3b19,	// (0x0004fd5d) popup_call2_audio_out_window_g1

0x3b45,	// (0x0004fd89) popup_call2_audio_out_window_g2_ParamLimits

0x3b45,	// (0x0004fd89) popup_call2_audio_out_window_g2

0x3b6d,	// (0x0004fdb1) popup_call2_audio_out_window_g3_ParamLimits

0x3b6d,	// (0x0004fdb1) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0005b79e) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0005b79e) popup_call2_audio_out_window_g

0x3ba8,	// (0x0004fdec) popup_call2_audio_out_window_t1_ParamLimits

0x3ba8,	// (0x0004fdec) popup_call2_audio_out_window_t1

0x3c07,	// (0x0004fe4b) popup_call2_audio_out_window_t2_ParamLimits

0x3c07,	// (0x0004fe4b) popup_call2_audio_out_window_t2

0x3c5b,	// (0x0004fe9f) popup_call2_audio_out_window_t3_ParamLimits

0x3c5b,	// (0x0004fe9f) popup_call2_audio_out_window_t3

0x3c71,	// (0x0004feb5) popup_call2_audio_out_window_t4_ParamLimits

0x3c71,	// (0x0004feb5) popup_call2_audio_out_window_t4

0x3c87,	// (0x0004fecb) popup_call2_audio_out_window_t5_ParamLimits

0x3c87,	// (0x0004fecb) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0005b7a7) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0005b7a7) popup_call2_audio_out_window_t

0x3ceb,	// (0x0004ff2f) bg_popup_call2_in_pane_ParamLimits

0x3ceb,	// (0x0004ff2f) bg_popup_call2_in_pane

0x3d47,	// (0x0004ff8b) popup_call2_audio_in_window_g1_ParamLimits

0x3d47,	// (0x0004ff8b) popup_call2_audio_in_window_g1

0x3d7f,	// (0x0004ffc3) popup_call2_audio_in_window_g2_ParamLimits

0x3d7f,	// (0x0004ffc3) popup_call2_audio_in_window_g2

0x3db7,	// (0x0004fffb) popup_call2_audio_in_window_g3_ParamLimits

0x3db7,	// (0x0004fffb) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0005b7b4) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0005b7b4) popup_call2_audio_in_window_g

0x3e0f,	// (0x00050053) popup_call2_audio_in_window_t1_ParamLimits

0x3e0f,	// (0x00050053) popup_call2_audio_in_window_t1

0x3e8f,	// (0x000500d3) popup_call2_audio_in_window_t2_ParamLimits

0x3e8f,	// (0x000500d3) popup_call2_audio_in_window_t2

0x3f0f,	// (0x00050153) popup_call2_audio_in_window_t3_ParamLimits

0x3f0f,	// (0x00050153) popup_call2_audio_in_window_t3

0x3f29,	// (0x0005016d) popup_call2_audio_in_window_t4_ParamLimits

0x3f29,	// (0x0005016d) popup_call2_audio_in_window_t4

0x3f3b,	// (0x0005017f) popup_call2_audio_in_window_t5_ParamLimits

0x3f3b,	// (0x0005017f) popup_call2_audio_in_window_t5

0x3f50,	// (0x00050194) popup_call2_audio_in_window_t6_ParamLimits

0x3f50,	// (0x00050194) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0005b7bd) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0005b7bd) popup_call2_audio_in_window_t

0x218e,	// (0x0004e3d2) bg_popup_call2_in_pane_g1

0x4067,	// (0x000502ab) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0005b825) popup_cale_lunar_info_window_t

0x2196,	// (0x0004e3da) bg_popup_call2_rect_pane_ParamLimits

0x2196,	// (0x0004e3da) bg_popup_call2_rect_pane

0x1f3b,	// (0x0004e17f) call2_cli_visual_graphic_pane

0x1f3b,	// (0x0004e17f) call2_cli_visual_text_pane

0x8eed,	// (0x00055131) smil_status_volume_pane_g3

0x0002,

0x22be,	// (0x0004e502) call2_cli_visual_graphic_pane_g1

0x22be,	// (0x0004e502) call2_cli_visual_graphic_pane_g2

0x22be,	// (0x0004e502) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0005b7ca) call2_cli_visual_graphic_pane_g

0x3f65,	// (0x000501a9) bg_popup_call2_rect_pane_g1

0x234a,	// (0x0004e58e) bg_popup_call2_rect_pane_g2

0x3f6d,	// (0x000501b1) bg_popup_call2_rect_pane_g3

0x3f75,	// (0x000501b9) bg_popup_call2_rect_pane_g4

0x3f7d,	// (0x000501c1) bg_popup_call2_rect_pane_g5

0x3f85,	// (0x000501c9) bg_popup_call2_rect_pane_g6

0x3f8d,	// (0x000501d1) bg_popup_call2_rect_pane_g7

0x3f95,	// (0x000501d9) bg_popup_call2_rect_pane_g8

0x3f9d,	// (0x000501e1) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0005b7d1) bg_popup_call2_rect_pane_g

0x3fa5,	// (0x000501e9) bg_popup_call2_bubble_pane_g1

0x3fad,	// (0x000501f1) bg_popup_call2_bubble_pane_g2

0x3fb5,	// (0x000501f9) bg_popup_call2_bubble_pane_g3

0x3fbd,	// (0x00050201) bg_popup_call2_bubble_pane_g4

0x3fc5,	// (0x00050209) bg_popup_call2_bubble_pane_g5

0x3fcd,	// (0x00050211) bg_popup_call2_bubble_pane_g6

0x3fd5,	// (0x00050219) bg_popup_call2_bubble_pane_g7

0x3fdd,	// (0x00050221) bg_popup_call2_bubble_pane_g8

0x3fe5,	// (0x00050229) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0005b7e4) bg_popup_call2_bubble_pane_g

0x6456,	// (0x0005269a) aid_cale_week_size_cell_pane

0x6972,	// (0x00052bb6) aid_cams_cif_uncrop_pane_ParamLimits

0x6972,	// (0x00052bb6) aid_cams_cif_uncrop_pane

0x6acd,	// (0x00052d11) aid_cams_size_cell_ParamLimits

0x6acd,	// (0x00052d11) aid_cams_size_cell

0x6ad9,	// (0x00052d1d) grid_cams_pane_ParamLimits

0x6ae7,	// (0x00052d2b) linegrid_cams_pane_ParamLimits

0x6c15,	// (0x00052e59) call_video_pane_t1

0x6c36,	// (0x00052e7a) call_video_pane_t2

0x0001,

0xf28d,	// (0x0005b4d1) call_video_pane_t

0x716d,	// (0x000533b1) aid_cale_month_size_cell_pane_ParamLimits

0x716d,	// (0x000533b1) aid_cale_month_size_cell_pane

0xf62a,	// (0x0005b86e) smil_status_volume_pane_g

0x8efa,	// (0x0005513e) volume_smil_pane_ParamLimits

0x0390,	// (0x0004c5d4) aid_popup2_width_pane

0x6350,	// (0x00052594) cell_qdial_pane_g4_ParamLimits

0x6350,	// (0x00052594) cell_qdial_pane_g4

0x7dea,	// (0x0005402e) aid_blid_cardinal_pane_ParamLimits

0x7dfa,	// (0x0005403e) aid_blid_destination_pane_ParamLimits

0x7dfa,	// (0x0005403e) aid_blid_destination_pane

0x2196,	// (0x0004e3da) bg_popup_call_poc_act_pane_ParamLimits

0x2196,	// (0x0004e3da) bg_popup_call_poc_act_pane

0x2196,	// (0x0004e3da) bg_popup_call_poc_inact_pane_ParamLimits

0x2196,	// (0x0004e3da) bg_popup_call_poc_inact_pane

0x3fed,	// (0x00050231) bg_popup_call_poc_act_pane_g1

0x3ff5,	// (0x00050239) bg_popup_call_poc_act_pane_g2

0x3ffd,	// (0x00050241) bg_popup_call_poc_act_pane_g3

0x3fbd,	// (0x00050201) bg_popup_call_poc_act_pane_g4

0x3fc5,	// (0x00050209) bg_popup_call_poc_act_pane_g5

0x4005,	// (0x00050249) bg_popup_call_poc_act_pane_g6

0x3fd5,	// (0x00050219) bg_popup_call_poc_act_pane_g7

0x400d,	// (0x00050251) bg_popup_call_poc_act_pane_g8

0x1f3b,	// (0x0004e17f) main_usb_pane

0x4166,	// (0x000503aa) popup_cale_lunar_info_window

0x6f61,	// (0x000531a5) im_reading_pane_t1_ParamLimits

0x2507,	// (0x0004e74b) list_im_pane_ParamLimits

0x2518,	// (0x0004e75c) scroll_pane_cp07_ParamLimits

0x1f3b,	// (0x0004e17f) grid_highlight_pane_cp012

0x2196,	// (0x0004e3da) mup_scale_pane_ParamLimits

0x2d4d,	// (0x0004ef91) main_usb_pane_g1_ParamLimits

0x2d4d,	// (0x0004ef91) main_usb_pane_g1

0x8a9c,	// (0x00054ce0) main_usb_pane_g2_ParamLimits

0x8a9c,	// (0x00054ce0) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0005b80e) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0005b80e) main_usb_pane_g

0x8aa8,	// (0x00054cec) main_usb_pane_t1_ParamLimits

0x8aa8,	// (0x00054cec) main_usb_pane_t1

0x8aba,	// (0x00054cfe) main_usb_pane_t2_ParamLimits

0x8aba,	// (0x00054cfe) main_usb_pane_t2

0x8acc,	// (0x00054d10) main_usb_pane_t3_ParamLimits

0x8acc,	// (0x00054d10) main_usb_pane_t3

0x8ade,	// (0x00054d22) main_usb_pane_t4_ParamLimits

0x8ade,	// (0x00054d22) main_usb_pane_t4

0x8af0,	// (0x00054d34) main_usb_pane_t5_ParamLimits

0x8af0,	// (0x00054d34) main_usb_pane_t5

0x8b02,	// (0x00054d46) main_usb_pane_t6_ParamLimits

0x8b02,	// (0x00054d46) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0005b813) main_usb_pane_t_ParamLimits

0x7d90,	// (0x00053fd4) aid_text_placing

0x7d9c,	// (0x00053fe0) main_location2_pane_t1_ParamLimits

0x7db0,	// (0x00053ff4) main_location2_pane_t2_ParamLimits

0x7dc4,	// (0x00054008) main_location2_pane_t3_ParamLimits

0x7dd8,	// (0x0005401c) main_location2_pane_t4_ParamLimits

0x7dd8,	// (0x0005401c) main_location2_pane_t4

0xf3ee,	// (0x0005b632) main_location2_pane_t_ParamLimits

0x21d2,	// (0x0004e416) find_pinb_pane_g2_ParamLimits

0x21d2,	// (0x0004e416) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0005b380) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0005b380) find_pinb_pane_g

0x21de,	// (0x0004e422) find_pinb_pane_t1_ParamLimits

0x21f0,	// (0x0004e434) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0005b385) find_pinb_pane_t_ParamLimits

0x1f3b,	// (0x0004e17f) main_call3_pane

0x7579,	// (0x000537bd) cale_month_day_heading_pane_t1_ParamLimits

0x75d7,	// (0x0005381b) cale_month_day_heading_pane_t2_ParamLimits

0x763c,	// (0x00053880) cale_month_day_heading_pane_t3_ParamLimits

0x76a1,	// (0x000538e5) cale_month_day_heading_pane_t4_ParamLimits

0x7706,	// (0x0005394a) cale_month_day_heading_pane_t5_ParamLimits

0x776b,	// (0x000539af) cale_month_day_heading_pane_t6_ParamLimits

0x77d0,	// (0x00053a14) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0005b509) cale_month_day_heading_pane_t_ParamLimits

0x2758,	// (0x0004e99c) smil_status_volume_pane

0x8660,	// (0x000548a4) postcard_address_pane_ParamLimits

0x8660,	// (0x000548a4) postcard_address_pane

0x866c,	// (0x000548b0) postcard_message_pane_ParamLimits

0x866c,	// (0x000548b0) postcard_message_pane

0x8a67,	// (0x00054cab) call2_cli_visual_pane_t1_ParamLimits

0x8a67,	// (0x00054cab) call2_cli_visual_pane_t1

0x9051,	// (0x00055295) postcard_message_pane_t1_ParamLimits

0x9051,	// (0x00055295) postcard_message_pane_t1

0x903a,	// (0x0005527e) postcard_address_pane_t1_ParamLimits

0x903a,	// (0x0005527e) postcard_address_pane_t1

0x902b,	// (0x0005526f) popup_call3_audio_in_window_ParamLimits

0x902b,	// (0x0005526f) popup_call3_audio_in_window

0x8f0f,	// (0x00055153) bg_popup_call3_in_pane_ParamLimits

0x8f0f,	// (0x00055153) bg_popup_call3_in_pane

0x8f71,	// (0x000551b5) popup_call3_audio_in_window_g1_ParamLimits

0x8f71,	// (0x000551b5) popup_call3_audio_in_window_g1

0x8f89,	// (0x000551cd) popup_call3_audio_in_window_g2_ParamLimits

0x8f89,	// (0x000551cd) popup_call3_audio_in_window_g2

0x8fa1,	// (0x000551e5) popup_call3_audio_in_window_g3_ParamLimits

0x8fa1,	// (0x000551e5) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0005b875) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0005b875) popup_call3_audio_in_window_g

0x8fc9,	// (0x0005520d) popup_call3_audio_in_window_t1_ParamLimits

0x8fc9,	// (0x0005520d) popup_call3_audio_in_window_t1

0x8ff1,	// (0x00055235) popup_call3_audio_in_window_t2_ParamLimits

0x8ff1,	// (0x00055235) popup_call3_audio_in_window_t2

0x9019,	// (0x0005525d) popup_call3_audio_in_window_t3_ParamLimits

0x9019,	// (0x0005525d) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0005b87e) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0005b87e) popup_call3_audio_in_window_t

0x2d3c,	// (0x0004ef80) bg_popup_call3_rect_pane

0x3f65,	// (0x000501a9) bg_popup_call3_rect_pane_g1

0x234a,	// (0x0004e58e) bg_popup_call3_rect_pane_g2

0x3f6d,	// (0x000501b1) bg_popup_call3_rect_pane_g3

0x3f75,	// (0x000501b9) bg_popup_call3_rect_pane_g4

0x3f7d,	// (0x000501c1) bg_popup_call3_rect_pane_g5

0x3f85,	// (0x000501c9) bg_popup_call3_rect_pane_g6

0x3f8d,	// (0x000501d1) bg_popup_call3_rect_pane_g7

0x8200,	// (0x00054444) mup_visualizer_osc_pane

0x2e09,	// (0x0004f04d) mup_visualizer_spec_pane

0x8f2f,	// (0x00055173) call3_video_qcif_pane_ParamLimits

0x8f2f,	// (0x00055173) call3_video_qcif_pane

0x8f41,	// (0x00055185) call3_video_qcif_uncrop_pane_ParamLimits

0x8f41,	// (0x00055185) call3_video_qcif_uncrop_pane

0x8f4f,	// (0x00055193) call3_video_subqcif_pane_ParamLimits

0x8f4f,	// (0x00055193) call3_video_subqcif_pane

0x8f61,	// (0x000551a5) call3_video_subqcif_uncrop_pane_ParamLimits

0x8f61,	// (0x000551a5) call3_video_subqcif_uncrop_pane

0x8fb9,	// (0x000551fd) popup_call3_audio_in_window_g4_ParamLimits

0x8fb9,	// (0x000551fd) popup_call3_audio_in_window_g4

0x8edc,	// (0x00055120) mup_spec_half_pane

0x8ee5,	// (0x00055129) mup_spec_half_pane_cp

0x41fd,	// (0x00050441) mup_osc_middle_pane

0x4206,	// (0x0005044a) mup_visualizer_osc_pane_g1

0x8ebd,	// (0x00055101) mup_spec_bar_pane_ParamLimits

0x8ebd,	// (0x00055101) mup_spec_bar_pane

0x41ea,	// (0x0005042e) mup_spec_bar_pane_g1

0x41f4,	// (0x00050438) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0005b869) mup_spec_bar_pane_g

0x6456,	// (0x0005269a) aid_cale_week_size_cell_pane_ParamLimits

0x6469,	// (0x000526ad) bg_cale_heading_pane_ParamLimits

0x237e,	// (0x0004e5c2) bg_cale_pane_cp01_ParamLimits

0x6485,	// (0x000526c9) cale_week_corner_pane_ParamLimits

0x649b,	// (0x000526df) cale_week_day_heading_pane_ParamLimits

0x64b7,	// (0x000526fb) cale_week_scroll_pane_g1_ParamLimits

0x64d0,	// (0x00052714) cale_week_scroll_pane_g2_ParamLimits

0x64e1,	// (0x00052725) cale_week_scroll_pane_g3_ParamLimits

0x64f2,	// (0x00052736) cale_week_scroll_pane_g4_ParamLimits

0x6503,	// (0x00052747) cale_week_scroll_pane_g5_ParamLimits

0x6514,	// (0x00052758) cale_week_scroll_pane_g6_ParamLimits

0x6525,	// (0x00052769) cale_week_scroll_pane_g7_ParamLimits

0x6538,	// (0x0005277c) cale_week_scroll_pane_g8_ParamLimits

0x654b,	// (0x0005278f) cale_week_scroll_pane_g9_ParamLimits

0x655c,	// (0x000527a0) cale_week_scroll_pane_g10_ParamLimits

0x656d,	// (0x000527b1) cale_week_scroll_pane_g11_ParamLimits

0x657e,	// (0x000527c2) cale_week_scroll_pane_g12_ParamLimits

0x658f,	// (0x000527d3) cale_week_scroll_pane_g13_ParamLimits

0x65a8,	// (0x000527ec) cale_week_scroll_pane_g14_ParamLimits

0x65c1,	// (0x00052805) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0005b411) cale_week_scroll_pane_g_ParamLimits

0x65da,	// (0x0005281e) cale_week_time_pane_ParamLimits

0x65ed,	// (0x00052831) grid_cale_week_pane_ParamLimits

0x2397,	// (0x0004e5db) listscroll_cale_week_pane_t1

0x660a,	// (0x0005284e) scroll_pane_cp08_ParamLimits

0x71be,	// (0x00053402) cale_month_corner_pane_ParamLimits

0x272e,	// (0x0004e972) cale_month_pane_t1

0x7528,	// (0x0005376c) cale_month_week_pane_ParamLimits

0x2d4d,	// (0x0004ef91) popup_call_status_window_g1_ParamLimits

0x7bb3,	// (0x00053df7) popup_call_status_window_g2_ParamLimits

0x7bbf,	// (0x00053e03) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0005b5b9) popup_call_status_window_g_ParamLimits

0x2ac8,	// (0x0004ed0c) aid_call2_pane

0x849f,	// (0x000546e3) msg_header_pane_g1

0x8660,	// (0x000548a4) postcard_address2_pane_ParamLimits

0x8660,	// (0x000548a4) postcard_address2_pane

0x866c,	// (0x000548b0) postcard_message2_pane_ParamLimits

0x866c,	// (0x000548b0) postcard_message2_pane

0x8e55,	// (0x00055099) message2_row_pane_ParamLimits

0x8e55,	// (0x00055099) message2_row_pane

0x8e70,	// (0x000550b4) address2_row_pane_ParamLimits

0x8e70,	// (0x000550b4) address2_row_pane

0x41b8,	// (0x000503fc) postcard_message2_row_pane_g1

0x41c0,	// (0x00050404) postcard_message2_row_pane_t1

0x41b8,	// (0x000503fc) address2_row_pane_g1

0x41c0,	// (0x00050404) address2_row_pane_t1

0x683e,	// (0x00052a82) aid_size_cell_vorec

0x1f3b,	// (0x0004e17f) main_rss_pane

0x8e83,	// (0x000550c7) rss_list_single_pane_ParamLimits

0x8e83,	// (0x000550c7) rss_list_single_pane

0x41ce,	// (0x00050412) rss_list_single_pane_t1

0x41dc,	// (0x00050420) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0005b864) rss_list_single_pane_t

0x1f3b,	// (0x0004e17f) main_camera2_pane

0x1f3b,	// (0x0004e17f) main_video2_pane

0x90b5,	// (0x000552f9) cams_zoom_pane_cp2_ParamLimits

0x90b5,	// (0x000552f9) cams_zoom_pane_cp2

0x90c1,	// (0x00055305) image2_vga_pane_ParamLimits

0x90c1,	// (0x00055305) image2_vga_pane

0x90d0,	// (0x00055314) main_camera2_pane_g1_ParamLimits

0x90d0,	// (0x00055314) main_camera2_pane_g1

0x90dc,	// (0x00055320) main_camera2_pane_g2_ParamLimits

0x90dc,	// (0x00055320) main_camera2_pane_g2

0x90e8,	// (0x0005532c) main_camera2_pane_g3_ParamLimits

0x90e8,	// (0x0005532c) main_camera2_pane_g3

0x90f4,	// (0x00055338) main_camera2_pane_g4_ParamLimits

0x90f4,	// (0x00055338) main_camera2_pane_g4

0x9100,	// (0x00055344) main_camera2_pane_g5_ParamLimits

0x9100,	// (0x00055344) main_camera2_pane_g5

0x910c,	// (0x00055350) main_camera2_pane_g6_ParamLimits

0x910c,	// (0x00055350) main_camera2_pane_g6

0x9118,	// (0x0005535c) main_camera2_pane_g7_ParamLimits

0x9118,	// (0x0005535c) main_camera2_pane_g7

0x9124,	// (0x00055368) main_camera2_pane_g8_ParamLimits

0x9124,	// (0x00055368) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0005b885) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0005b885) main_camera2_pane_g

0x913c,	// (0x00055380) main_camera2_pane_t1_ParamLimits

0x913c,	// (0x00055380) main_camera2_pane_t1

0x914e,	// (0x00055392) main_camera2_pane_t2_ParamLimits

0x914e,	// (0x00055392) main_camera2_pane_t2

0x9160,	// (0x000553a4) main_camera2_pane_t3_ParamLimits

0x9160,	// (0x000553a4) main_camera2_pane_t3

0x9172,	// (0x000553b6) main_camera2_pane_t4_ParamLimits

0x9172,	// (0x000553b6) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0005b898) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0005b898) main_camera2_pane_t

0x91d4,	// (0x00055418) cams_zoom_pane_cp4_ParamLimits

0x91d4,	// (0x00055418) cams_zoom_pane_cp4

0x91e4,	// (0x00055428) image2_cif_pane_ParamLimits

0x91e4,	// (0x00055428) image2_cif_pane

0x91f9,	// (0x0005543d) image2_subqcif_pane_ParamLimits

0x91f9,	// (0x0005543d) image2_subqcif_pane

0x9208,	// (0x0005544c) main_video2_pane_g1_ParamLimits

0x9208,	// (0x0005544c) main_video2_pane_g1

0x921a,	// (0x0005545e) main_video2_pane_g2_ParamLimits

0x921a,	// (0x0005545e) main_video2_pane_g2

0x922a,	// (0x0005546e) main_video2_pane_g3_ParamLimits

0x922a,	// (0x0005546e) main_video2_pane_g3

0x923a,	// (0x0005547e) main_video2_pane_g4_ParamLimits

0x923a,	// (0x0005547e) main_video2_pane_g4

0x924a,	// (0x0005548e) main_video2_pane_g5_ParamLimits

0x924a,	// (0x0005548e) main_video2_pane_g5

0x925a,	// (0x0005549e) main_video2_pane_g6_ParamLimits

0x925a,	// (0x0005549e) main_video2_pane_g6

0x0005,

0xf663,	// (0x0005b8a7) main_video2_pane_g_ParamLimits

0xf663,	// (0x0005b8a7) main_video2_pane_g

0x926c,	// (0x000554b0) main_video2_pane_t1_ParamLimits

0x926c,	// (0x000554b0) main_video2_pane_t1

0x9286,	// (0x000554ca) main_video2_pane_t2_ParamLimits

0x9286,	// (0x000554ca) main_video2_pane_t2

0x92ac,	// (0x000554f0) main_video2_pane_t3_ParamLimits

0x92ac,	// (0x000554f0) main_video2_pane_t3

0x0002,

0xf670,	// (0x0005b8b4) main_video2_pane_t_ParamLimits

0xf670,	// (0x0005b8b4) main_video2_pane_t

0x8bb9,	// (0x00054dfd) call_muted_g2

0x0001,

0xf612,	// (0x0005b856) call_muted_g

0x1f3b,	// (0x0004e17f) main_mup2_pane

0x426b,	// (0x000504af) main_mup2_pane_g1_ParamLimits

0x426b,	// (0x000504af) main_mup2_pane_g1

0x92d2,	// (0x00055516) main_mup2_pane_g2_ParamLimits

0x92d2,	// (0x00055516) main_mup2_pane_g2

0x9554,	// (0x00055798) main_mup_pane_g13_cp1

0x955c,	// (0x000557a0) mup_volume_pane_cp1

0x92f2,	// (0x00055536) main_mup2_pane_g4_ParamLimits

0x92f2,	// (0x00055536) main_mup2_pane_g4

0x9307,	// (0x0005554b) main_mup2_pane_g5_ParamLimits

0x9307,	// (0x0005554b) main_mup2_pane_g5

0x931c,	// (0x00055560) main_mup2_pane_g6_ParamLimits

0x931c,	// (0x00055560) main_mup2_pane_g6

0x9331,	// (0x00055575) main_mup2_pane_g7_ParamLimits

0x9331,	// (0x00055575) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0005b8bb) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0005b8bb) main_mup2_pane_g

0x934d,	// (0x00055591) main_mup2_pane_t1_ParamLimits

0x934d,	// (0x00055591) main_mup2_pane_t1

0x9364,	// (0x000555a8) main_mup2_pane_t2_ParamLimits

0x9364,	// (0x000555a8) main_mup2_pane_t2

0x937b,	// (0x000555bf) main_mup2_pane_t3_ParamLimits

0x937b,	// (0x000555bf) main_mup2_pane_t3

0x9392,	// (0x000555d6) main_mup2_pane_t4_ParamLimits

0x9392,	// (0x000555d6) main_mup2_pane_t4

0x93ac,	// (0x000555f0) main_mup2_pane_t5_ParamLimits

0x93ac,	// (0x000555f0) main_mup2_pane_t5

0x93c6,	// (0x0005560a) main_mup2_pane_t6_ParamLimits

0x93c6,	// (0x0005560a) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0005b8ca) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0005b8ca) main_mup2_pane_t

0x93fe,	// (0x00055642) mup2_visualizer_pane_ParamLimits

0x93fe,	// (0x00055642) mup2_visualizer_pane

0x9434,	// (0x00055678) mup_progress_pane_cp_ParamLimits

0x9434,	// (0x00055678) mup_progress_pane_cp

0x953f,	// (0x00055783) mup_volume_pane_cp_ParamLimits

0x953f,	// (0x00055783) mup_volume_pane_cp

0x944b,	// (0x0005568f) mup2_visualizer_pane_g1_ParamLimits

0x944b,	// (0x0005568f) mup2_visualizer_pane_g1

0x423d,	// (0x00050481) mup2_visualizer_pane_g2_ParamLimits

0x423d,	// (0x00050481) mup2_visualizer_pane_g2

0x9460,	// (0x000556a4) mup2_visualizer_pane_g3_ParamLimits

0x9460,	// (0x000556a4) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0005b8d7) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0005b8d7) mup2_visualizer_pane_g

0x3030,	// (0x0004f274) aid_size_cell_fmradio

0x8ccf,	// (0x00054f13) aid_height_parent_landcape

0x2596,	// (0x0004e7da) wml_content_pane_cp

0x259e,	// (0x0004e7e2) wml_tabs_pane

0x25a7,	// (0x0004e7eb) popup_wml_miniature_window

0x25af,	// (0x0004e7f3) scroll_pane_cp021

0x25c3,	// (0x0004e807) wml_content_pane_comp8

0x1f3b,	// (0x0004e17f) bg_popup_sub_pane_cp05

0x425b,	// (0x0005049f) popup_wml_miniature_window_g1

0x4263,	// (0x000504a7) wml_miniature_view_pane

0x946e,	// (0x000556b2) aid_size_wml_view

0x9476,	// (0x000556ba) wml_miniature_view_pane_g1

0x947f,	// (0x000556c3) wml_miniature_view_pane_g2

0x9488,	// (0x000556cc) wml_miniature_view_pane_g3

0x9490,	// (0x000556d4) wml_miniature_view_pane_g4

0x9498,	// (0x000556dc) wml_miniature_view_pane_g5

0x94a0,	// (0x000556e4) wml_miniature_view_pane_g6

0x94a8,	// (0x000556ec) wml_miniature_view_pane_g7

0x94b0,	// (0x000556f4) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0005b8de) wml_miniature_view_pane_g

0x426b,	// (0x000504af) background_graphic_ParamLimits

0x426b,	// (0x000504af) background_graphic

0x4277,	// (0x000504bb) wml_tabs_2_pane

0x4280,	// (0x000504c4) wml_tabs_3_pane_ParamLimits

0x4280,	// (0x000504c4) wml_tabs_3_pane

0x4292,	// (0x000504d6) wml_tabs_4_pane_ParamLimits

0x4292,	// (0x000504d6) wml_tabs_4_pane

0x42a8,	// (0x000504ec) wml_tabs_5_pane_ParamLimits

0x42a8,	// (0x000504ec) wml_tabs_5_pane

0x42c2,	// (0x00050506) wml_tabs_pane_g2_ParamLimits

0x42c2,	// (0x00050506) wml_tabs_pane_g2

0x42d6,	// (0x0005051a) wml_tabs_pane_g3_ParamLimits

0x42d6,	// (0x0005051a) wml_tabs_pane_g3

0x94b8,	// (0x000556fc) wml_tabs_2_active_pane_ParamLimits

0x94b8,	// (0x000556fc) wml_tabs_2_active_pane

0x94c8,	// (0x0005570c) wml_tabs_2_passive_pane_ParamLimits

0x94c8,	// (0x0005570c) wml_tabs_2_passive_pane

0x94d8,	// (0x0005571c) wml_tabs_3_active_pane_cp_ParamLimits

0x94d8,	// (0x0005571c) wml_tabs_3_active_pane_cp

0x94e9,	// (0x0005572d) wml_tabs_3_passive_pane_ParamLimits

0x94e9,	// (0x0005572d) wml_tabs_3_passive_pane

0x94fa,	// (0x0005573e) wml_tabs_3_passive_pane_cp_ParamLimits

0x94fa,	// (0x0005573e) wml_tabs_3_passive_pane_cp

0x950b,	// (0x0005574f) tabs_4_active_pane

0x9513,	// (0x00055757) tabs_4_passive_pane

0x951b,	// (0x0005575f) tabs_4_passive_pane_cp

0x9523,	// (0x00055767) tabs_4_passive_pane_cp2

0x8a94,	// (0x00054cd8) aid_height_text

0x81cd,	// (0x00054411) mup_volume_cont_pane_ParamLimits

0x81cd,	// (0x00054411) mup_volume_cont_pane

0x5f82,	// (0x000521c6) aid_size_cell_pinb

0x5f8c,	// (0x000521d0) aid_size_list_pinb

0x941d,	// (0x00055661) mup2_volume_cont_pane_ParamLimits

0x941d,	// (0x00055661) mup2_volume_cont_pane

0x952b,	// (0x0005576f) mup2_volume_cont_pane_g1_ParamLimits

0x952b,	// (0x0005576f) mup2_volume_cont_pane_g1

0x5c15,	// (0x00051e59) aid_size_cell_touch_ParamLimits

0x5c15,	// (0x00051e59) aid_size_cell_touch

0x5e68,	// (0x000520ac) touch_pane_ParamLimits

0x5e68,	// (0x000520ac) touch_pane

0x037e,	// (0x0004c5c2) main_rss2_pane

0x42f3,	// (0x00050537) listscroll_rss2_pane

0x42fc,	// (0x00050540) rss2_navigation_pane

0x4304,	// (0x00050548) list_rss2_pane

0x2bf3,	// (0x0004ee37) scroll_pane_cp22

0x430c,	// (0x00050550) rss2_navigation_pane_g1

0x4315,	// (0x00050559) rss2_navigation_pane_g2

0x431d,	// (0x00050561) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0005b8ef) rss2_navigation_pane_g

0x4325,	// (0x00050569) rss2_navigation_pane_t1

0x9564,	// (0x000557a8) rss2_list_single_pane_ParamLimits

0x9564,	// (0x000557a8) rss2_list_single_pane

0x4333,	// (0x00050577) rss2_list_single_pane_t2

0x4341,	// (0x00050585) rss2_list_single_pane_t3_ParamLimits

0x4341,	// (0x00050585) rss2_list_single_pane_t3

0x435e,	// (0x000505a2) rss2_list_single_pane_t4

0x79d4,	// (0x00053c18) smil_status_pane_g1

0x334c,	// (0x0004f590) main_image2_pane_ParamLimits

0x334c,	// (0x0004f590) main_image2_pane

0x9130,	// (0x00055374) main_camera2_pane_g9_ParamLimits

0x9130,	// (0x00055374) main_camera2_pane_g9

0x9184,	// (0x000553c8) main_camera2_pane_t5_ParamLimits

0x9184,	// (0x000553c8) main_camera2_pane_t5

0x9196,	// (0x000553da) main_camera2_pane_t6_ParamLimits

0x9196,	// (0x000553da) main_camera2_pane_t6

0x9595,	// (0x000557d9) main_image2_pane_g1_ParamLimits

0x9595,	// (0x000557d9) main_image2_pane_g1

0x8834,	// (0x00054a78) smil2_video_pane_ParamLimits

0x8834,	// (0x00054a78) smil2_video_pane

0x03ac,	// (0x0004c5f0) aid_zoom_text_primary_cp

0x03ec,	// (0x0004c630) popup_preview_fixed_window

0x24ff,	// (0x0004e743) im_reading_pane_g1

0x907a,	// (0x000552be) cams2_bc_adjust_pane_cp_ParamLimits

0x907a,	// (0x000552be) cams2_bc_adjust_pane_cp

0x91c6,	// (0x0005540a) cams2_bc_adjust_pane_ParamLimits

0x91c6,	// (0x0005540a) cams2_bc_adjust_pane

0x45c1,	// (0x00050805) cams2_bc_adjust_pane_g1

0x95a1,	// (0x000557e5) cams2_slider_pane

0x95aa,	// (0x000557ee) cams2_slider_pane_g1

0x95b3,	// (0x000557f7) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0005b8f6) cams2_slider_pane_g

0x6092,	// (0x000522d6) calc_display_pane_ParamLimits

0x60b0,	// (0x000522f4) calc_paper_pane_ParamLimits

0x60cc,	// (0x00052310) grid_calc_pane_ParamLimits

0x7c21,	// (0x00053e65) popup_clock_digital_window_t1_ParamLimits

0x2fcd,	// (0x0004f211) main_image_pane_t1

0x6078,	// (0x000522bc) aid_size_cell_calc_ParamLimits

0x6078,	// (0x000522bc) aid_size_cell_calc

0x8d01,	// (0x00054f45) popup_blid_sat_info2_window_ParamLimits

0x8d01,	// (0x00054f45) popup_blid_sat_info2_window

0x4374,	// (0x000505b8) aid_size_cell_blid

0x437c,	// (0x000505c0) bg_popup_window_pane_cp07

0x439f,	// (0x000505e3) grid_popup_blid_pane

0x43a9,	// (0x000505ed) heading_pane_cp05_ParamLimits

0x43a9,	// (0x000505ed) heading_pane_cp05

0x4473,	// (0x000506b7) cell_popup_blid_pane_ParamLimits

0x4473,	// (0x000506b7) cell_popup_blid_pane

0x4497,	// (0x000506db) cell_popup_blid_pane_g1

0x449f,	// (0x000506e3) cell_popup_blid_pane_t1

0x93e3,	// (0x00055627) mup2_indicator_pane_ParamLimits

0x93e3,	// (0x00055627) mup2_indicator_pane

0x2d3c,	// (0x0004ef80) mup2_visualizer_osc_pane

0x4249,	// (0x0005048d) mup2_visualizer_spec_pane_ParamLimits

0x4249,	// (0x0005048d) mup2_visualizer_spec_pane

0x95cd,	// (0x00055811) mup2_spec_half_pane

0x95d6,	// (0x0005581a) mup2_spec_half_pane_cp

0x95e0,	// (0x00055824) mup2_spec_bar_pane_ParamLimits

0x95e0,	// (0x00055824) mup2_spec_bar_pane

0x41ea,	// (0x0005042e) mup2_spec_bar_pane_g1

0x41f4,	// (0x00050438) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0005b869) mup2_spec_bar_pane_g

0x95ff,	// (0x00055843) mup2_osc_middle_pane

0x4206,	// (0x0005044a) mup2_visualizer_osc_pane_g1

0x1b48,	// (0x0004dd8c) popup_number_entry_window_t1_ParamLimits

0x1b5b,	// (0x0004dd9f) popup_number_entry_window_t2_ParamLimits

0x1b6d,	// (0x0004ddb1) popup_number_entry_window_t3_ParamLimits

0x5ebf,	// (0x00052103) popup_number_entry_window_t5_ParamLimits

0x5ebf,	// (0x00052103) popup_number_entry_window_t5

0xf0e7,	// (0x0005b32b) popup_number_entry_window_t_ParamLimits

0x1b7f,	// (0x0004ddc3) text_title_cp2_ParamLimits

0x8534,	// (0x00054778) aid_hotspot_pointer_text2_pane

0x85c2,	// (0x00054806) main_viewer_pane_g9_ParamLimits

0x85c2,	// (0x00054806) main_viewer_pane_g9

0x272e,	// (0x0004e972) cale_month_pane_t1_ParamLimits

0x276b,	// (0x0004e9af) bg_cale_pane_ParamLimits

0x2783,	// (0x0004e9c7) list_cale_pane_ParamLimits

0x2397,	// (0x0004e5db) listscroll_cale_day_pane_t1

0x2794,	// (0x0004e9d8) scroll_pane_cp09_ParamLimits

0x8208,	// (0x0005444c) main_mup_eq_pane_t1_ParamLimits

0x8208,	// (0x0005444c) main_mup_eq_pane_t1

0x8222,	// (0x00054466) main_mup_eq_pane_t2_ParamLimits

0x8222,	// (0x00054466) main_mup_eq_pane_t2

0x823c,	// (0x00054480) main_mup_eq_pane_t3_ParamLimits

0x823c,	// (0x00054480) main_mup_eq_pane_t3

0x8254,	// (0x00054498) main_mup_eq_pane_t4_ParamLimits

0x8254,	// (0x00054498) main_mup_eq_pane_t4

0x826c,	// (0x000544b0) main_mup_eq_pane_t5_ParamLimits

0x826c,	// (0x000544b0) main_mup_eq_pane_t5

0x8284,	// (0x000544c8) main_mup_eq_pane_t6_ParamLimits

0x8284,	// (0x000544c8) main_mup_eq_pane_t6

0x8298,	// (0x000544dc) main_mup_eq_pane_t7_ParamLimits

0x8298,	// (0x000544dc) main_mup_eq_pane_t7

0x82ac,	// (0x000544f0) main_mup_eq_pane_t8_ParamLimits

0x82ac,	// (0x000544f0) main_mup_eq_pane_t8

0x82c2,	// (0x00054506) main_mup_eq_pane_t9_ParamLimits

0x82c2,	// (0x00054506) main_mup_eq_pane_t9

0x82da,	// (0x0005451e) main_mup_eq_pane_t10_ParamLimits

0x82da,	// (0x0005451e) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0005b6b8) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0005b6b8) main_mup_eq_pane_t

0x8397,	// (0x000545db) mup_equalizer_pane_cp5_ParamLimits

0x83ad,	// (0x000545f1) mup_equalizer_pane_cp6_ParamLimits

0x83c5,	// (0x00054609) mup_equalizer_pane_cp7_ParamLimits

0x037e,	// (0x0004c5c2) main_gallery_pane

0x420f,	// (0x00050453) smil2_volume_pane

0x422a,	// (0x0005046e) smil_status_volume_pane_g1_ParamLimits

0x4217,	// (0x0005045b) smil_status_volume_pane_g2_ParamLimits

0x8eed,	// (0x00055131) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0005b86e) smil_status_volume_pane_g_ParamLimits

0x437c,	// (0x000505c0) bg_popup_window_pane_cp07_ParamLimits

0x438a,	// (0x000505ce) blid_firmament_pane

0x9608,	// (0x0005584c) aid_size_cell_gallery_ParamLimits

0x9608,	// (0x0005584c) aid_size_cell_gallery

0x9616,	// (0x0005585a) grid_gallery_pane_ParamLimits

0x9616,	// (0x0005585a) grid_gallery_pane

0x9626,	// (0x0005586a) cell_gallery_pane_ParamLimits

0x9626,	// (0x0005586a) cell_gallery_pane

0x44ad,	// (0x000506f1) bg_cell_gallery_focus_pane_ParamLimits

0x44ad,	// (0x000506f1) bg_cell_gallery_focus_pane

0x44bf,	// (0x00050703) cell_gallery_pane_g1_ParamLimits

0x44bf,	// (0x00050703) cell_gallery_pane_g1

0x9674,	// (0x000558b8) cell_gallery_pane_g2_ParamLimits

0x9674,	// (0x000558b8) cell_gallery_pane_g2

0x9681,	// (0x000558c5) cell_gallery_pane_g3_ParamLimits

0x9681,	// (0x000558c5) cell_gallery_pane_g3

0x44cb,	// (0x0005070f) cell_gallery_pane_g4_ParamLimits

0x44cb,	// (0x0005070f) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0005b91c) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0005b91c) cell_gallery_pane_g

0x44d7,	// (0x0005071b) bg_cell_gallery_focus_pane_g1

0x44df,	// (0x00050723) bg_cell_gallery_focus_pane_g2

0x44e7,	// (0x0005072b) bg_cell_gallery_focus_pane_g3

0x44ef,	// (0x00050733) bg_cell_gallery_focus_pane_g4

0x44f7,	// (0x0005073b) bg_cell_gallery_focus_pane_g5

0x44ff,	// (0x00050743) bg_cell_gallery_focus_pane_g6

0x4507,	// (0x0005074b) bg_cell_gallery_focus_pane_g7

0x450f,	// (0x00050753) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0005b925) bg_cell_gallery_focus_pane_g

0x4517,	// (0x0005075b) aid_firma_cardinal

0x452b,	// (0x0005076f) blid_firmament_pane_t1

0x4542,	// (0x00050786) blid_firmament_pane_t2

0x4559,	// (0x0005079d) blid_firmament_pane_t3

0x4570,	// (0x000507b4) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0005b936) blid_firmament_pane_t

0x4587,	// (0x000507cb) blid_sat_info_pane

0x4597,	// (0x000507db) blid_sat_info_pane_g1

0x4597,	// (0x000507db) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0005b93f) blid_sat_info_pane_g

0x45a1,	// (0x000507e5) blid_sat_info_pane_t1

0x45af,	// (0x000507f3) smil2_volume_content_pane

0x45c9,	// (0x0005080d) smil2_volume_pane_g1

0x45b8,	// (0x000507fc) smil2_volume_content_pane_g1

0x45d1,	// (0x00050815) smil2_volume_content_pane_g2

0x45da,	// (0x0005081e) smil2_volume_content_pane_g3

0x45e3,	// (0x00050827) smil2_volume_content_pane_g4

0x45ec,	// (0x00050830) smil2_volume_content_pane_g5

0x45f5,	// (0x00050839) smil2_volume_content_pane_g6

0x45fe,	// (0x00050842) smil2_volume_content_pane_g7

0x4607,	// (0x0005084b) smil2_volume_content_pane_g8

0x4610,	// (0x00050854) smil2_volume_content_pane_g9

0x4619,	// (0x0005085d) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0005b944) smil2_volume_content_pane_g

0x6670,	// (0x000528b4) cale_week_day_heading_pane_t1_ParamLimits

0x6689,	// (0x000528cd) cale_week_day_heading_pane_t2_ParamLimits

0x66a2,	// (0x000528e6) cale_week_day_heading_pane_t3_ParamLimits

0x66bb,	// (0x000528ff) cale_week_day_heading_pane_t4_ParamLimits

0x66d4,	// (0x00052918) cale_week_day_heading_pane_t5_ParamLimits

0x66ed,	// (0x00052931) cale_week_day_heading_pane_t6_ParamLimits

0x6706,	// (0x0005294a) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0005b430) cale_week_day_heading_pane_t_ParamLimits

0x23a9,	// (0x0004e5ed) bg_cale_side_pane_ParamLimits

0x671f,	// (0x00052963) cale_week_time_pane_t1_ParamLimits

0x6737,	// (0x0005297b) cale_week_time_pane_t2_ParamLimits

0x674f,	// (0x00052993) cale_week_time_pane_t3_ParamLimits

0x6767,	// (0x000529ab) cale_week_time_pane_t4_ParamLimits

0x677f,	// (0x000529c3) cale_week_time_pane_t5_ParamLimits

0x6797,	// (0x000529db) cale_week_time_pane_t6_ParamLimits

0x67af,	// (0x000529f3) cale_week_time_pane_t7_ParamLimits

0x67cf,	// (0x00052a13) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0005b43f) cale_week_time_pane_t_ParamLimits

0x67ef,	// (0x00052a33) cell_cale_week_pane_g2_ParamLimits

0x23a9,	// (0x0004e5ed) bg_cale_side_pane_cp01_ParamLimits

0x7845,	// (0x00053a89) cale_month_week_pane_t1_ParamLimits

0x785c,	// (0x00053aa0) cale_month_week_pane_t2_ParamLimits

0x7873,	// (0x00053ab7) cale_month_week_pane_t3_ParamLimits

0x788a,	// (0x00053ace) cale_month_week_pane_t4_ParamLimits

0x78a1,	// (0x00053ae5) cale_month_week_pane_t5_ParamLimits

0x78bc,	// (0x00053b00) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0005b518) cale_month_week_pane_t_ParamLimits

0x79a1,	// (0x00053be5) cell_cale_month_pane_g1_ParamLimits

0x037e,	// (0x0004c5c2) main_cale_event_viewer_pane

0x037e,	// (0x0004c5c2) listscroll_cale_event_viewer_pane

0x4622,	// (0x00050866) list_cale_ev_pane

0x462a,	// (0x0005086e) scroll_pane_cp023

0x4636,	// (0x0005087a) field_cale_ev_pane_ParamLimits

0x4636,	// (0x0005087a) field_cale_ev_pane

0x4654,	// (0x00050898) field_cale_ev_content_pane_ParamLimits

0x4654,	// (0x00050898) field_cale_ev_content_pane

0x4660,	// (0x000508a4) field_cale_ev_pane_g1_ParamLimits

0x4660,	// (0x000508a4) field_cale_ev_pane_g1

0x466c,	// (0x000508b0) field_cale_ev_pane_g2_ParamLimits

0x466c,	// (0x000508b0) field_cale_ev_pane_g2

0x4684,	// (0x000508c8) field_cale_ev_pane_g3_ParamLimits

0x4684,	// (0x000508c8) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0005b959) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0005b959) field_cale_ev_pane_g

0x469c,	// (0x000508e0) field_cale_ev_pane_t1_ParamLimits

0x469c,	// (0x000508e0) field_cale_ev_pane_t1

0x46b3,	// (0x000508f7) field_cale_ev_content_pane_t1_ParamLimits

0x46b3,	// (0x000508f7) field_cale_ev_content_pane_t1

0x2eb3,	// (0x0004f0f7) bg_button_pane_cp01

0x2269,	// (0x0004e4ad) listscroll_cale_week_pane_ParamLimits

0x644c,	// (0x00052690) popup_toolbar_window_cp01

0x2397,	// (0x0004e5db) listscroll_cale_week_pane_t1_ParamLimits

0x2269,	// (0x0004e4ad) listscroll_cale_day_pane_ParamLimits

0x644c,	// (0x00052690) popup_toolbar_window_cp02

0x2397,	// (0x0004e5db) listscroll_cale_day_pane_t1_ParamLimits

0x2269,	// (0x0004e4ad) main_cale_month_pane_ParamLimits

0x8dd1,	// (0x00055015) popup_toolbar_window_cp03_ParamLimits

0x8dd1,	// (0x00055015) popup_toolbar_window_cp03

0x874a,	// (0x0005498e) main_image_pane_g2_ParamLimits

0x874a,	// (0x0005498e) main_image_pane_g2

0x8756,	// (0x0005499a) main_image_pane_g3_ParamLimits

0x8756,	// (0x0005499a) main_image_pane_g3

0x0002,

0xf506,	// (0x0005b74a) main_image_pane_g_ParamLimits

0xf506,	// (0x0005b74a) main_image_pane_g

0x2fcd,	// (0x0004f211) main_image_pane_t1_ParamLimits

0x8762,	// (0x000549a6) main_image_pane_t2_ParamLimits

0x8762,	// (0x000549a6) main_image_pane_t2

0x8774,	// (0x000549b8) main_image_pane_t3_ParamLimits

0x8774,	// (0x000549b8) main_image_pane_t3

0x8786,	// (0x000549ca) main_image_pane_t4_ParamLimits

0x8786,	// (0x000549ca) main_image_pane_t4

0x0003,

0xf50d,	// (0x0005b751) main_image_pane_t_ParamLimits

0xf50d,	// (0x0005b751) main_image_pane_t

0x8798,	// (0x000549dc) popup_image_details_window_cp01

0x87a2,	// (0x000549e6) popup_toobar_trans_pane_cp01_ParamLimits

0x87a2,	// (0x000549e6) popup_toobar_trans_pane_cp01

0x8d4e,	// (0x00054f92) popup_image_details_window_ParamLimits

0x8d4e,	// (0x00054f92) popup_image_details_window

0x4170,	// (0x000503b4) popup_image_focus_window

0x906c,	// (0x000552b0) camera2_autofocus_pane_ParamLimits

0x906c,	// (0x000552b0) camera2_autofocus_pane

0x037e,	// (0x0004c5c2) bg_popup_sub_pane_cp06

0x46d1,	// (0x00050915) popup_image_focus_window_g1

0x46d9,	// (0x0005091d) popup_image_focus_window_g2

0x46e1,	// (0x00050925) popup_image_focus_window_g3

0x46e9,	// (0x0005092d) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0005b960) popup_image_focus_window_g

0x46f1,	// (0x00050935) popup_image_focus_window_t1

0x46ff,	// (0x00050943) popup_image_focus_window_t2

0x470f,	// (0x00050953) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0005b969) popup_image_focus_window_t

0x471d,	// (0x00050961) camera2_autofocus_pane_g1

0x334c,	// (0x0004f590) bg_tb_trans_pane_cp01

0x472b,	// (0x0005096f) popup_image_details_window_g1

0x473e,	// (0x00050982) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0005b97b) popup_image_details_window_g

0x4767,	// (0x000509ab) popup_image_details_window_t1

0x4779,	// (0x000509bd) popup_image_details_window_t2

0x4792,	// (0x000509d6) popup_image_details_window_t3

0x47a6,	// (0x000509ea) popup_image_details_window_t4

0x47c1,	// (0x00050a05) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0005b982) popup_image_details_window_t

0x2255,	// (0x0004e499) bg_calc_paper_pane_ParamLimits

0x61c9,	// (0x0005240d) grid_highlight_pane_cp013

0x61d3,	// (0x00052417) list_calc_pane_ParamLimits

0x61e5,	// (0x00052429) scroll_pane_cp024

0x2269,	// (0x0004e4ad) bg_calc_display_pane_ParamLimits

0x61ed,	// (0x00052431) calc_display_pane_t1_ParamLimits

0x6202,	// (0x00052446) calc_display_pane_t2_ParamLimits

0x6217,	// (0x0005245b) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0005b3b2) calc_display_pane_t_ParamLimits

0x62f3,	// (0x00052537) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0005b3cf) cell_calc_pane_g

0x62fc,	// (0x00052540) cell_calc_pane_t1

0x22c8,	// (0x0004e50c) grid_highlight_pane_cp02_ParamLimits

0x22de,	// (0x0004e522) toolbar_button_pane_cp01_ParamLimits

0x22de,	// (0x0004e522) toolbar_button_pane_cp01

0x3012,	// (0x0004f256) temp_image_control_pane_ParamLimits

0x3012,	// (0x0004f256) temp_image_control_pane

0x334c,	// (0x0004f590) main_mp3_pane

0x47db,	// (0x00050a1f) temp_image_control_pane_g1_ParamLimits

0x47db,	// (0x00050a1f) temp_image_control_pane_g1

0x47e9,	// (0x00050a2d) temp_image_control_pane_g2_ParamLimits

0x47e9,	// (0x00050a2d) temp_image_control_pane_g2

0x47fb,	// (0x00050a3f) temp_image_control_pane_g3_ParamLimits

0x47fb,	// (0x00050a3f) temp_image_control_pane_g3

0x96be,	// (0x00055902) temp_image_control_pane_g4_ParamLimits

0x96be,	// (0x00055902) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0005b98d) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0005b98d) temp_image_control_pane_g

0x47db,	// (0x00050a1f) main_mp3_pane_g1

0x96cf,	// (0x00055913) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0005b996) main_mp3_pane_g

0x483e,	// (0x00050a82) main_mp3_pane_t1

0x240e,	// (0x0004e652) main_camera_pane_g8_ParamLimits

0x240e,	// (0x0004e652) main_camera_pane_g8

0x6a83,	// (0x00052cc7) main_video_pane_g7_ParamLimits

0x6a83,	// (0x00052cc7) main_video_pane_g7

0x91b4,	// (0x000553f8) main_camera2_pane_t7_ParamLimits

0x91b4,	// (0x000553f8) main_camera2_pane_t7

0x2556,	// (0x0004e79a) scroll_pane_cp025_ParamLimits

0x2556,	// (0x0004e79a) scroll_pane_cp025

0x256a,	// (0x0004e7ae) scroll_pane_cp026_ParamLimits

0x256a,	// (0x0004e7ae) scroll_pane_cp026

0x2579,	// (0x0004e7bd) wml_content_pane_ParamLimits

0x037e,	// (0x0004c5c2) main_touch_calib_pane

0x9773,	// (0x000559b7) main_touch_calib_pane_g1

0x977f,	// (0x000559c3) main_touch_calib_pane_g2

0x978b,	// (0x000559cf) main_touch_calib_pane_g3

0x9797,	// (0x000559db) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0005b9b4) main_touch_calib_pane_g

0x97a3,	// (0x000559e7) main_touch_calib_pane_t1

0x97ba,	// (0x000559fe) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0005b9bd) main_touch_calib_pane_t

0x2c7d,	// (0x0004eec1) mup_progress_pane_cp02

0x2c9c,	// (0x0004eee0) navi_pane_g1

0x2cfe,	// (0x0004ef42) navi_pane_mp_t3

0x334c,	// (0x0004f590) main_mp3_pane_ParamLimits

0x8e0f,	// (0x00055053) navi_pane_ParamLimits

0x47db,	// (0x00050a1f) main_mp3_pane_g1_ParamLimits

0x96cf,	// (0x00055913) main_mp3_pane_g2_ParamLimits

0x96db,	// (0x0005591f) main_mp3_pane_g3_ParamLimits

0x96db,	// (0x0005591f) main_mp3_pane_g3

0x96e7,	// (0x0005592b) main_mp3_pane_g4_ParamLimits

0x96e7,	// (0x0005592b) main_mp3_pane_g4

0x480b,	// (0x00050a4f) main_mp3_pane_g5_ParamLimits

0x480b,	// (0x00050a4f) main_mp3_pane_g5

0x4819,	// (0x00050a5d) main_mp3_pane_g6_ParamLimits

0x4819,	// (0x00050a5d) main_mp3_pane_g6

0x4826,	// (0x00050a6a) main_mp3_pane_g7_ParamLimits

0x4826,	// (0x00050a6a) main_mp3_pane_g7

0x4832,	// (0x00050a76) main_mp3_pane_g8_ParamLimits

0x4832,	// (0x00050a76) main_mp3_pane_g8

0xf752,	// (0x0005b996) main_mp3_pane_g_ParamLimits

0x96f3,	// (0x00055937) main_mp3_pane_t2

0x9703,	// (0x00055947) main_mp3_pane_t3

0x484c,	// (0x00050a90) main_mp3_pane_t4

0x485a,	// (0x00050a9e) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0005b9a7) main_mp3_pane_t

0x4868,	// (0x00050aac) mup_progress_pane_cp01

0x03ac,	// (0x0004c5f0) aid_zoom_text_secondary2

0x4622,	// (0x00050866) list_cale_ev2_pane

0x462a,	// (0x0005086e) scroll_pane_cp023_ParamLimits

0x980f,	// (0x00055a53) field_cale_ev2_pane_ParamLimits

0x980f,	// (0x00055a53) field_cale_ev2_pane

0x07e1,	// (0x0004ca25) field_cale_ev2_pane_g1_ParamLimits

0x07e1,	// (0x0004ca25) field_cale_ev2_pane_g1

0x07ed,	// (0x0004ca31) field_cale_ev2_pane_g2_ParamLimits

0x07ed,	// (0x0004ca31) field_cale_ev2_pane_g2

0x0805,	// (0x0004ca49) field_cale_ev2_pane_g3_ParamLimits

0x0805,	// (0x0004ca49) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0005b9c8) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0005b9c8) field_cale_ev2_pane_g

0x9838,	// (0x00055a7c) field_cale_ev2_pane_t1_ParamLimits

0x9838,	// (0x00055a7c) field_cale_ev2_pane_t1

0x984f,	// (0x00055a93) field_cale_ev2_pane_t2_ParamLimits

0x984f,	// (0x00055a93) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0005b9d1) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0005b9d1) field_cale_ev2_pane_t

0x862a,	// (0x0005486e) main_postcard_pane_g5_ParamLimits

0x862a,	// (0x0005486e) main_postcard_pane_g5

0x8638,	// (0x0005487c) main_postcard_pane_g6_ParamLimits

0x8638,	// (0x0005487c) main_postcard_pane_g6

0x68cd,	// (0x00052b11) camera2_autofocus_pane_cp_ParamLimits

0x68cd,	// (0x00052b11) camera2_autofocus_pane_cp

0x334c,	// (0x0004f590) main_mup3_pane

0x9884,	// (0x00055ac8) main_mup3_pane_g1_ParamLimits

0x9884,	// (0x00055ac8) main_mup3_pane_g1

0x98a5,	// (0x00055ae9) main_mup3_pane_g2_ParamLimits

0x98a5,	// (0x00055ae9) main_mup3_pane_g2

0x991d,	// (0x00055b61) main_mup3_pane_g3_ParamLimits

0x991d,	// (0x00055b61) main_mup3_pane_g3

0x9960,	// (0x00055ba4) main_mup3_pane_g4_ParamLimits

0x9960,	// (0x00055ba4) main_mup3_pane_g4

0x99a3,	// (0x00055be7) main_mup3_pane_g5_ParamLimits

0x99a3,	// (0x00055be7) main_mup3_pane_g5

0x99e6,	// (0x00055c2a) main_mup3_pane_g6_ParamLimits

0x99e6,	// (0x00055c2a) main_mup3_pane_g6

0x4870,	// (0x00050ab4) main_mup3_pane_g7_ParamLimits

0x4870,	// (0x00050ab4) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0005b9e1) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0005b9e1) main_mup3_pane_g

0x9a5c,	// (0x00055ca0) main_mup3_pane_t1_ParamLimits

0x9a5c,	// (0x00055ca0) main_mup3_pane_t1

0x9acb,	// (0x00055d0f) main_mup3_pane_t2_ParamLimits

0x9acb,	// (0x00055d0f) main_mup3_pane_t2

0x9b94,	// (0x00055dd8) main_mup3_pane_t4_ParamLimits

0x9b94,	// (0x00055dd8) main_mup3_pane_t4

0x9be2,	// (0x00055e26) main_mup3_pane_t5_ParamLimits

0x9be2,	// (0x00055e26) main_mup3_pane_t5

0x9c92,	// (0x00055ed6) main_mup3_pane_t6_ParamLimits

0x9c92,	// (0x00055ed6) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0005b9f2) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0005b9f2) main_mup3_pane_t

0x9d3e,	// (0x00055f82) mup3_progress_pane_ParamLimits

0x9d3e,	// (0x00055f82) mup3_progress_pane

0x9dbc,	// (0x00056000) popup_mup3_control_window_ParamLimits

0x9dbc,	// (0x00056000) popup_mup3_control_window

0x487e,	// (0x00050ac2) popup_mup3_text_window

0x9dd5,	// (0x00056019) mup3_progress_pane_t1

0x9df4,	// (0x00056038) mup3_progress_pane_t2

0x4886,	// (0x00050aca) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0005b9ff) mup3_progress_pane_t

0x48a3,	// (0x00050ae7) mup_progress_pane_cp03

0x037e,	// (0x0004c5c2) bg_tb_trans_pane_cp04

0x9e13,	// (0x00056057) mup3_volume_pane

0x9e1b,	// (0x0005605f) popup_mup3_control_window_g1

0x9e24,	// (0x00056068) mup3_volume_pane_g1

0x9e2d,	// (0x00056071) mup3_volume_pane_g2

0x9e36,	// (0x0005607a) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0005ba06) mup3_volume_pane_g

0x037e,	// (0x0004c5c2) bg_tb_trans_pane_cp03

0x48b3,	// (0x00050af7) popup_mup3_text_window_g1

0x48bb,	// (0x00050aff) popup_mup3_text_window_t1

0x22b1,	// (0x0004e4f5) list_calc_item_pane_g1_ParamLimits

0x42ea,	// (0x0005052e) mup_volume_pane_cp_g1

0x97d1,	// (0x00055a15) main_touch_calib_pane_t3

0x97e5,	// (0x00055a29) main_touch_calib_pane_t4

0x97f9,	// (0x00055a3d) main_touch_calib_pane_t5

0x0388,	// (0x0004c5cc) aid_cell_size_toolbar2

0x0390,	// (0x0004c5d4) aid_popup3_width_pane

0x039c,	// (0x0004c5e0) aid_zoom_text_msg_primary

0x68a4,	// (0x00052ae8) vorec_t7

0x2275,	// (0x0004e4b9) bg_calc_paper_pane_g1_ParamLimits

0x228d,	// (0x0004e4d1) bg_calc_paper_pane_g2_ParamLimits

0x2281,	// (0x0004e4c5) bg_calc_paper_pane_g3_ParamLimits

0x22a5,	// (0x0004e4e9) bg_calc_paper_pane_g4_ParamLimits

0x2299,	// (0x0004e4dd) bg_calc_paper_pane_g5_ParamLimits

0x6256,	// (0x0005249a) bg_calc_paper_pane_g6_ParamLimits

0x6267,	// (0x000524ab) bg_calc_paper_pane_g7_ParamLimits

0x6278,	// (0x000524bc) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0005b3b9) bg_calc_paper_pane_g_ParamLimits

0x6289,	// (0x000524cd) calc_bg_paper_pane_g9_ParamLimits

0x69b4,	// (0x00052bf8) image_qvga_pane_ParamLimits

0x69b4,	// (0x00052bf8) image_qvga_pane

0x2196,	// (0x0004e3da) bg_popup_sub_pane_cp04_ParamLimits

0x2f49,	// (0x0004f18d) popup_mup_playback_window_g1_ParamLimits

0x2f55,	// (0x0004f199) popup_mup_playback_window_t1_ParamLimits

0x2f6a,	// (0x0004f1ae) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0005b745) popup_mup_playback_window_t_ParamLimits

0x92e3,	// (0x00055527) main_mup2_pane_g3_ParamLimits

0x92e3,	// (0x00055527) main_mup2_pane_g3

0x6cc3,	// (0x00052f07) popup_toolbar_window_cp04

0x3366,	// (0x0004f5aa) popup_call2_audio_second_window_g3_ParamLimits

0x3366,	// (0x0004f5aa) popup_call2_audio_second_window_g3

0x3770,	// (0x0004f9b4) popup_call2_audio_first_window_g4_ParamLimits

0x3770,	// (0x0004f9b4) popup_call2_audio_first_window_g4

0x3def,	// (0x00050033) popup_call2_audio_in_window_g4_ParamLimits

0x3def,	// (0x00050033) popup_call2_audio_in_window_g4

0x873d,	// (0x00054981) aid_area_sk_bg_cut_ParamLimits

0x873d,	// (0x00054981) aid_area_sk_bg_cut

0x2f7f,	// (0x0004f1c3) aid_area_sk_bg_cut_2_ParamLimits

0x2f7f,	// (0x0004f1c3) aid_area_sk_bg_cut_2

0x9664,	// (0x000558a8) aid_placing_details_win

0x966c,	// (0x000558b0) aid_placing_details_win_2

0x471d,	// (0x00050961) camera2_autofocus_pane_g1_ParamLimits

0x5e16,	// (0x0005205a) popup_fixed_preview_cale_window_ParamLimits

0x5e16,	// (0x0005205a) popup_fixed_preview_cale_window

0x2d6d,	// (0x0004efb1) navi_slider_pane_g3

0x2d64,	// (0x0004efa8) navi_slider_pane_g4

0x2d5b,	// (0x0004ef9f) navi_slider_pane_g5

0x2d6d,	// (0x0004efb1) navi_slider_pane_g6

0x7f9c,	// (0x000541e0) navi_slider_pane_g7

0x2e80,	// (0x0004f0c4) mup_scale_pane_g3

0x2e89,	// (0x0004f0cd) mup_scale_pane_g4

0x2e92,	// (0x0004f0d6) mup_scale_pane_g5

0x83dd,	// (0x00054621) mup_scale_pane_g6

0x83e6,	// (0x0005462a) mup_scale_pane_g7

0x2d6d,	// (0x0004efb1) cams2_slider_pane_g3

0x436c,	// (0x000505b0) cams2_slider_pane_g4

0x95bc,	// (0x00055800) cams2_slider_pane_g5

0x2d6d,	// (0x0004efb1) cams2_slider_pane_g6

0x95c4,	// (0x00055808) cams2_slider_pane_g7

0x4597,	// (0x000507db) camera2_autofocus_pane_cp_g1

0x48c9,	// (0x00050b0d) bg_popup_preview_window_pane_cp02_ParamLimits

0x48c9,	// (0x00050b0d) bg_popup_preview_window_pane_cp02

0x48d5,	// (0x00050b19) list_fp_cale_pane_ParamLimits

0x48d5,	// (0x00050b19) list_fp_cale_pane

0x48e1,	// (0x00050b25) popup_fixed_preview_cale_window_t1_ParamLimits

0x48e1,	// (0x00050b25) popup_fixed_preview_cale_window_t1

0x9e3f,	// (0x00056083) popup_fixed_preview_cale_window_t2_ParamLimits

0x9e3f,	// (0x00056083) popup_fixed_preview_cale_window_t2

0x9e54,	// (0x00056098) popup_fixed_preview_cale_window_t3_ParamLimits

0x9e54,	// (0x00056098) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0005ba0d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0005ba0d) popup_fixed_preview_cale_window_t

0x9e69,	// (0x000560ad) list_single_fp_cale_pane_ParamLimits

0x9e69,	// (0x000560ad) list_single_fp_cale_pane

0x48ff,	// (0x00050b43) list_single_fp_cale_pane_g1_ParamLimits

0x48ff,	// (0x00050b43) list_single_fp_cale_pane_g1

0x490b,	// (0x00050b4f) list_single_fp_cale_pane_g2_ParamLimits

0x490b,	// (0x00050b4f) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0005ba14) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0005ba14) list_single_fp_cale_pane_g

0x4924,	// (0x00050b68) list_single_fp_cale_pane_t1_ParamLimits

0x4924,	// (0x00050b68) list_single_fp_cale_pane_t1

0x4936,	// (0x00050b7a) list_single_fp_cale_pane_t2_ParamLimits

0x4936,	// (0x00050b7a) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0005ba1b) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0005ba1b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x037e,	// (0x0004c5c2) main_dialer_pane

0x9e7b,	// (0x000560bf) aid_cell_size_keypad

0x9e85,	// (0x000560c9) dialer_ne_pane

0x9e8f,	// (0x000560d3) grid_dialer_command_1_pane

0x9e97,	// (0x000560db) grid_dialer_command_2_pane

0x9e9f,	// (0x000560e3) grid_dialer_keypad_pane

0x9eb1,	// (0x000560f5) bg_popup_call_pane_cp06_ParamLimits

0x9eb1,	// (0x000560f5) bg_popup_call_pane_cp06

0x9ebd,	// (0x00056101) dialer_ne_clear_pane_ParamLimits

0x9ebd,	// (0x00056101) dialer_ne_clear_pane

0x4969,	// (0x00050bad) dialer_ne_pane_g1

0x4971,	// (0x00050bb5) dialer_ne_pane_t1_ParamLimits

0x4971,	// (0x00050bb5) dialer_ne_pane_t1

0x9ec9,	// (0x0005610d) dialer_ne_pane_t2_ParamLimits

0x9ec9,	// (0x0005610d) dialer_ne_pane_t2

0x9ee6,	// (0x0005612a) dialer_ne_pane_t3_ParamLimits

0x9ee6,	// (0x0005612a) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0005ba20) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0005ba20) dialer_ne_pane_t

0x9f0a,	// (0x0005614e) dialer_ne_pane_t3_copy1_ParamLimits

0x9f0a,	// (0x0005614e) dialer_ne_pane_t3_copy1

0x9f2e,	// (0x00056172) cell_dialer_keypad_pane_ParamLimits

0x9f2e,	// (0x00056172) cell_dialer_keypad_pane

0x9f45,	// (0x00056189) cell_dialer_command_1_pane_ParamLimits

0x9f45,	// (0x00056189) cell_dialer_command_1_pane

0x9f5b,	// (0x0005619f) cell_dialer_command_2_pane_ParamLimits

0x9f5b,	// (0x0005619f) cell_dialer_command_2_pane

0x4983,	// (0x00050bc7) bg_button_pane_cp02_ParamLimits

0x4983,	// (0x00050bc7) bg_button_pane_cp02

0x9f6a,	// (0x000561ae) cell_dialer_keypad_pane_g1_ParamLimits

0x9f6a,	// (0x000561ae) cell_dialer_keypad_pane_g1

0x4983,	// (0x00050bc7) bg_button_pane_cp03_ParamLimits

0x4983,	// (0x00050bc7) bg_button_pane_cp03

0x9f7f,	// (0x000561c3) cell_dialer_command_1_pane_g1_ParamLimits

0x9f7f,	// (0x000561c3) cell_dialer_command_1_pane_g1

0x498f,	// (0x00050bd3) bg_button_pane_cp04

0x9f93,	// (0x000561d7) cell_dialer_command_2_pane_g1

0x2d3c,	// (0x0004ef80) bg_button_pane_cp06

0x4997,	// (0x00050bdb) dialer_ne_clear_pane_g1

0x7edf,	// (0x00054123) navi_pane_g2

0x7f0d,	// (0x00054151) navi_pane_g3

0x0002,

0xf404,	// (0x0005b648) navi_pane_g

0x7f38,	// (0x0005417c) navi_pane_mv_g2

0x7f5f,	// (0x000541a3) navi_pane_mv_g5

0x7f67,	// (0x000541ab) navi_pane_mv_t1

0x2269,	// (0x0004e4ad) main_clock2_pane

0x9fc4,	// (0x00056208) main_clock2_list_pane_ParamLimits

0x9fc4,	// (0x00056208) main_clock2_list_pane

0x9fec,	// (0x00056230) main_clock2_pane_t1_ParamLimits

0x9fec,	// (0x00056230) main_clock2_pane_t1

0xa00e,	// (0x00056252) main_clock2_pane_t2_ParamLimits

0xa00e,	// (0x00056252) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0005ba27) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0005ba27) main_clock2_pane_t

0xa069,	// (0x000562ad) popup_clock_analogue_window_cp03_ParamLimits

0xa069,	// (0x000562ad) popup_clock_analogue_window_cp03

0xa087,	// (0x000562cb) popup_clock_digital_window_cp02_ParamLimits

0xa087,	// (0x000562cb) popup_clock_digital_window_cp02

0xa0f4,	// (0x00056338) main_clock2_list_single_pane_ParamLimits

0xa0f4,	// (0x00056338) main_clock2_list_single_pane

0x2d3c,	// (0x0004ef80) list_highlight_pane_cp05

0x499f,	// (0x00050be3) main_clock2_list_single_pane_t1

0x6cc3,	// (0x00052f07) popup_toolbar_window_cp04_ParamLimits

0x968e,	// (0x000558d2) camera2_autofocus_pane_g2_ParamLimits

0x968e,	// (0x000558d2) camera2_autofocus_pane_g2

0x969a,	// (0x000558de) camera2_autofocus_pane_g3_ParamLimits

0x969a,	// (0x000558de) camera2_autofocus_pane_g3

0x96a6,	// (0x000558ea) camera2_autofocus_pane_g4_ParamLimits

0x96a6,	// (0x000558ea) camera2_autofocus_pane_g4

0x96b2,	// (0x000558f6) camera2_autofocus_pane_g5_ParamLimits

0x96b2,	// (0x000558f6) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0005b970) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0005b970) camera2_autofocus_pane_g

0x9864,	// (0x00055aa8) camera2_autofocus_pane_cp_g2

0x986c,	// (0x00055ab0) camera2_autofocus_pane_cp_g3

0x9874,	// (0x00055ab8) camera2_autofocus_pane_cp_g4

0x987c,	// (0x00055ac0) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0005b9d6) camera2_autofocus_pane_cp_g

0x9ea9,	// (0x000560ed) popup_dialer_spcha_window

0x037e,	// (0x0004c5c2) bg_popup_sub_pane_cp07

0x49ad,	// (0x00050bf1) list_spcha_pane

0x49b5,	// (0x00050bf9) list_single_spcha_pane_ParamLimits

0x49b5,	// (0x00050bf9) list_single_spcha_pane

0x037e,	// (0x0004c5c2) list_highlight_pane_cp06

0x49c6,	// (0x00050c0a) list_single_spcha_pane_t1

0x3b99,	// (0x0004fddd) popup_call2_audio_out_window_g4_ParamLimits

0x3b99,	// (0x0004fddd) popup_call2_audio_out_window_g4

0x037e,	// (0x0004c5c2) main_imed2_pane

0x4178,	// (0x000503bc) popup_imed_adjust2_window

0x8d5c,	// (0x00054fa0) popup_imed_trans_window_ParamLimits

0x8d5c,	// (0x00054fa0) popup_imed_trans_window

0x43d5,	// (0x00050619) popup_blid_sat_info2_window_t1

0x43e3,	// (0x00050627) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0005b905) popup_blid_sat_info2_window_t

0xa19e,	// (0x000563e2) aid_size_cell_colour_35

0xa1b8,	// (0x000563fc) aid_size_cell_colour_112

0xa1cf,	// (0x00056413) aid_size_cell_effect

0x334c,	// (0x0004f590) bg_tb_trans_pane_cp02

0x335a,	// (0x0004f59e) heading_imed_pane

0xa1e9,	// (0x0005642d) listscroll_imed_pane

0x49d4,	// (0x00050c18) heading_imed_pane_g1

0x49dc,	// (0x00050c20) heading_imed_pane_t1

0x49ea,	// (0x00050c2e) grid_imed_colour_35_pane_ParamLimits

0x49ea,	// (0x00050c2e) grid_imed_colour_35_pane

0xa1f5,	// (0x00056439) grid_imed_effect_pane

0x4a01,	// (0x00050c45) list_imed_aspect_pane

0xa205,	// (0x00056449) scroll_pane_cp027_ParamLimits

0xa205,	// (0x00056449) scroll_pane_cp027

0xa211,	// (0x00056455) cell_imed_effect_pane_ParamLimits

0xa211,	// (0x00056455) cell_imed_effect_pane

0x4a09,	// (0x00050c4d) cell_imed_colour_pane_ParamLimits

0x4a09,	// (0x00050c4d) cell_imed_colour_pane

0x4a4b,	// (0x00050c8f) cell_imed_colour_pane_g1_ParamLimits

0x4a4b,	// (0x00050c8f) cell_imed_colour_pane_g1

0x4a5c,	// (0x00050ca0) hgihlgiht_grid_pane_cp016_ParamLimits

0x4a5c,	// (0x00050ca0) hgihlgiht_grid_pane_cp016

0xa229,	// (0x0005646d) cell_imed_effect_pane_g1

0xa231,	// (0x00056475) grid_highlight_pane_cp017

0x4a6d,	// (0x00050cb1) list_imed_single_pane_ParamLimits

0x4a6d,	// (0x00050cb1) list_imed_single_pane

0x037e,	// (0x0004c5c2) list_highlight_pane_cp07

0x4a82,	// (0x00050cc6) list_imed_aspect_pane_comp1_t1

0x4150,	// (0x00050394) bg_tb_trans_pane_cp05

0x4aa4,	// (0x00050ce8) popup_imed_adjust2_window_g1

0x4acb,	// (0x00050d0f) popup_imed_adjust2_window_t1

0x4ae3,	// (0x00050d27) slider_imed_adjust_pane

0x4af7,	// (0x00050d3b) slider_imed_adjust_pane_g1

0x4b07,	// (0x00050d4b) slider_imed_adjust_pane_g2

0x4b17,	// (0x00050d5b) slider_imed_adjust_pane_g3

0x4b28,	// (0x00050d6c) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0005ba44) slider_imed_adjust_pane_g

0xa23a,	// (0x0005647e) aid_size_cell_clipart2

0xa246,	// (0x0005648a) grid_imed_clipart_pane

0x4b39,	// (0x00050d7d) scroll_pane_cp031

0xa250,	// (0x00056494) cell_imed_clipart_pane_ParamLimits

0xa250,	// (0x00056494) cell_imed_clipart_pane

0xa272,	// (0x000564b6) cell_imed_clipart_pane_g1

0x037e,	// (0x0004c5c2) grid_highlight_pane_cp014

0x9fd0,	// (0x00056214) main_clock2_pane_g1_ParamLimits

0x9fd0,	// (0x00056214) main_clock2_pane_g1

0xa09f,	// (0x000562e3) aid_call2_pane_cp10

0xa0b1,	// (0x000562f5) aid_call_pane_cp10

0x2c71,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g1

0x2c71,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g2

0xa0c3,	// (0x00056307) popup_clock_analogue_window_cp10_g3

0xa0c3,	// (0x00056307) popup_clock_analogue_window_cp10_g4

0x2c71,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0005ba32) popup_clock_analogue_window_cp10_g

0xa0d5,	// (0x00056319) popup_clock_analogue_window_cp10_t1

0xa106,	// (0x0005634a) clock_digital_number_pane_cp10_ParamLimits

0xa106,	// (0x0005634a) clock_digital_number_pane_cp10

0xa11e,	// (0x00056362) clock_digital_number_pane_cp11_ParamLimits

0xa11e,	// (0x00056362) clock_digital_number_pane_cp11

0xa136,	// (0x0005637a) clock_digital_number_pane_cp12_ParamLimits

0xa136,	// (0x0005637a) clock_digital_number_pane_cp12

0xa14e,	// (0x00056392) clock_digital_number_pane_cp13_ParamLimits

0xa14e,	// (0x00056392) clock_digital_number_pane_cp13

0xa166,	// (0x000563aa) clock_digital_separator_pane_cp10_ParamLimits

0xa166,	// (0x000563aa) clock_digital_separator_pane_cp10

0xa17e,	// (0x000563c2) popup_clock_digital_window_cp02_t1_ParamLimits

0xa17e,	// (0x000563c2) popup_clock_digital_window_cp02_t1

0x218e,	// (0x0004e3d2) clock_digital_number_pane_cp10_g1

0x218e,	// (0x0004e3d2) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0005ba4d) clock_digital_number_pane_cp10_g

0x218e,	// (0x0004e3d2) clock_digital_separator_pane_cp10_g1

0x218e,	// (0x0004e3d2) clock_digital_separator_pane_g2_cp10

0x2d0c,	// (0x0004ef50) navi_pane_vded_g4

0x2d15,	// (0x0004ef59) navi_pane_vded_g5

0x2d1e,	// (0x0004ef62) navi_pane_vded_t1

0x037e,	// (0x0004c5c2) main_vded_pane

0xa27b,	// (0x000564bf) main_vded_pane_g1

0xa287,	// (0x000564cb) main_vded_pane_g2

0xa291,	// (0x000564d5) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0005ba52) main_vded_pane_g

0xa29b,	// (0x000564df) main_vded_pane_t1

0xa2a9,	// (0x000564ed) main_vded_pane_t2

0x0001,

0xf815,	// (0x0005ba59) main_vded_pane_t

0xa2b7,	// (0x000564fb) vded_slider_pane

0xa2c1,	// (0x00056505) vded_video_pane

0x4b41,	// (0x00050d85) vded_video_pane_g1

0xa2cb,	// (0x0005650f) vded_video_pane_g2

0x4597,	// (0x000507db) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0005ba5e) vded_video_pane_g

0x4b4b,	// (0x00050d8f) vded_slider_pane_g1

0x42ea,	// (0x0005052e) vded_slider_pane_g2

0x4b54,	// (0x00050d98) vded_slider_pane_g3

0x4b5d,	// (0x00050da1) vded_slider_pane_g4

0x4b66,	// (0x00050daa) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0005ba65) vded_slider_pane_g

0x9dae,	// (0x00055ff2) mup3_rocker_pane_ParamLimits

0x9dae,	// (0x00055ff2) mup3_rocker_pane

0xa2d4,	// (0x00056518) mup3_control_keys_pane_g1

0xa2dc,	// (0x00056520) mup3_control_keys_pane_g2

0xa2e4,	// (0x00056528) mup3_control_keys_pane_g3

0xa2ec,	// (0x00056530) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0005ba70) mup3_control_keys_pane_g

0x5e34,	// (0x00052078) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5e34,	// (0x00052078) popup_toolbar2_fixed_window_cp01

0x9dc8,	// (0x0005600c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9dc8,	// (0x0005600c) popup_toolbar2_fixed_window_cp02

0x34d8,	// (0x0004f71c) popup_call2_audio_second_window_t4_ParamLimits

0x34d8,	// (0x0004f71c) popup_call2_audio_second_window_t4

0x3a06,	// (0x0004fc4a) popup_call2_audio_first_window_t6_ParamLimits

0x3a06,	// (0x0004fc4a) popup_call2_audio_first_window_t6

0x3c9c,	// (0x0004fee0) popup_call2_audio_out_window_t6_ParamLimits

0x3c9c,	// (0x0004fee0) popup_call2_audio_out_window_t6

0x037e,	// (0x0004c5c2) main_vitu_pane

0xa2fc,	// (0x00056540) aid_size_cell_itu_ParamLimits

0xa2fc,	// (0x00056540) aid_size_cell_itu

0x0b21,	// (0x0004cd65) bg_popup_window_pane_cp08_ParamLimits

0x0b21,	// (0x0004cd65) bg_popup_window_pane_cp08

0xa30a,	// (0x0005654e) field_vitu_entry_pane_ParamLimits

0xa30a,	// (0x0005654e) field_vitu_entry_pane

0xa319,	// (0x0005655d) grid_vitu_function_pane_ParamLimits

0xa319,	// (0x0005655d) grid_vitu_function_pane

0xa329,	// (0x0005656d) grid_vitu_itu_pane_ParamLimits

0xa329,	// (0x0005656d) grid_vitu_itu_pane

0xa339,	// (0x0005657d) cell_vitu_itu_pane_ParamLimits

0xa339,	// (0x0005657d) cell_vitu_itu_pane

0xa34e,	// (0x00056592) cell_vitu_function_pane_ParamLimits

0xa34e,	// (0x00056592) cell_vitu_function_pane

0x334c,	// (0x0004f590) bg_popup_sub_pane_cp08_ParamLimits

0x334c,	// (0x0004f590) bg_popup_sub_pane_cp08

0xa360,	// (0x000565a4) field_vitu_entry_pane_t1_ParamLimits

0xa360,	// (0x000565a4) field_vitu_entry_pane_t1

0x4b87,	// (0x00050dcb) field_vitu_entry_pane_t2_ParamLimits

0x4b87,	// (0x00050dcb) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0005ba7e) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0005ba7e) field_vitu_entry_pane_t

0x4ba4,	// (0x00050de8) bg_button_pane_cp05_ParamLimits

0x4ba4,	// (0x00050de8) bg_button_pane_cp05

0xa37c,	// (0x000565c0) cell_vitu_itu_pane_g1

0xa394,	// (0x000565d8) cell_vitu_itu_pane_t1_ParamLimits

0xa394,	// (0x000565d8) cell_vitu_itu_pane_t1

0xa3a6,	// (0x000565ea) cell_vitu_itu_pane_t2_ParamLimits

0xa3a6,	// (0x000565ea) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0005ba83) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0005ba83) cell_vitu_itu_pane_t

0x4bb2,	// (0x00050df6) bg_button_pane_cp07

0xa3db,	// (0x0005661f) cell_vitu_function_pane_g1

0x60f0,	// (0x00052334) main_calc_pane_g1

0x5c3d,	// (0x00051e81) aid_visual_content_pane

0x037e,	// (0x0004c5c2) main_vradio_pane

0xa3e4,	// (0x00056628) main_vradio_pane_g1_ParamLimits

0xa3e4,	// (0x00056628) main_vradio_pane_g1

0x4bbc,	// (0x00050e00) main_vradio_pane_g2_ParamLimits

0x4bbc,	// (0x00050e00) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0005ba8a) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0005ba8a) main_vradio_pane_g

0xa3f4,	// (0x00056638) main_vradio_pane_t1_ParamLimits

0xa3f4,	// (0x00056638) main_vradio_pane_t1

0xa406,	// (0x0005664a) main_vradio_pane_t2_ParamLimits

0xa406,	// (0x0005664a) main_vradio_pane_t2

0x4bc9,	// (0x00050e0d) main_vradio_pane_t3_ParamLimits

0x4bc9,	// (0x00050e0d) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0005ba8f) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0005ba8f) main_vradio_pane_t

0xa418,	// (0x0005665c) vradio_rocker_control_pane_ParamLimits

0xa418,	// (0x0005665c) vradio_rocker_control_pane

0xa424,	// (0x00056668) vradio_station_info_pane_ParamLimits

0xa424,	// (0x00056668) vradio_station_info_pane

0x4bdd,	// (0x00050e21) vradio_frequency_info_pane_ParamLimits

0x4bdd,	// (0x00050e21) vradio_frequency_info_pane

0x4597,	// (0x000507db) vradio_station_info_pane_g1

0x4bec,	// (0x00050e30) vradio_station_info_pane_t1_ParamLimits

0x4bec,	// (0x00050e30) vradio_station_info_pane_t1

0x4c0e,	// (0x00050e52) vradio_station_info_pane_t2_ParamLimits

0x4c0e,	// (0x00050e52) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0005ba96) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0005ba96) vradio_station_info_pane_t

0x4c20,	// (0x00050e64) vradio_tuning_pane

0x4c28,	// (0x00050e6c) vradio_rocker_control_pane_g1

0x4c30,	// (0x00050e74) vradio_rocker_control_pane_g2

0x4c38,	// (0x00050e7c) vradio_rocker_control_pane_g3

0x4c40,	// (0x00050e84) vradio_rocker_control_pane_g4

0x4c48,	// (0x00050e8c) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0005ba9b) vradio_rocker_control_pane_g

0xa433,	// (0x00056677) vradio_frequency_info_pane_g1

0x4c50,	// (0x00050e94) vradio_frequency_info_pane_t1_ParamLimits

0x4c50,	// (0x00050e94) vradio_frequency_info_pane_t1

0xa43d,	// (0x00056681) vradio_tuning_pane_g1

0xa446,	// (0x0005668a) vradio_tuning_pane_t1

0x03b4,	// (0x0004c5f8) area_side_right_pane_ParamLimits

0x03b4,	// (0x0004c5f8) area_side_right_pane

0x4117,	// (0x0005035b) status_small_pane_g1

0x411f,	// (0x00050363) status_small_pane_g2

0x4128,	// (0x0005036c) status_small_pane_g3

0x4131,	// (0x00050375) status_small_pane_g4

0x0003,

0xf617,	// (0x0005b85b) status_small_pane_g

0x413a,	// (0x0005037e) status_small_pane_t1

0x037e,	// (0x0004c5c2) main_video3_pane

0x4c64,	// (0x00050ea8) cams_zoom_vslider_pane

0x4c6c,	// (0x00050eb0) image3_wide_pane_ParamLimits

0x4c6c,	// (0x00050eb0) image3_wide_pane

0x4c86,	// (0x00050eca) image3_wide_small_pane

0x4c92,	// (0x00050ed6) main_video3_pane_g1_ParamLimits

0x4c92,	// (0x00050ed6) main_video3_pane_g1

0x4cae,	// (0x00050ef2) main_video3_pane_g2_ParamLimits

0x4cae,	// (0x00050ef2) main_video3_pane_g2

0x0001,

0xf862,	// (0x0005baa6) main_video3_pane_g_ParamLimits

0xf862,	// (0x0005baa6) main_video3_pane_g

0x4cca,	// (0x00050f0e) main_video3_pane_t1_ParamLimits

0x4cca,	// (0x00050f0e) main_video3_pane_t1

0x4cf5,	// (0x00050f39) main_video3_pane_t2_ParamLimits

0x4cf5,	// (0x00050f39) main_video3_pane_t2

0x4d20,	// (0x00050f64) main_video3_pane_t3_ParamLimits

0x4d20,	// (0x00050f64) main_video3_pane_t3

0x0002,

0xf867,	// (0x0005baab) main_video3_pane_t_ParamLimits

0xf867,	// (0x0005baab) main_video3_pane_t

0x4d4d,	// (0x00050f91) cams_zoom_vslider_pane_g1

0x4d56,	// (0x00050f9a) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0005bab2) cams_zoom_vslider_pane_g

0x4d5e,	// (0x00050fa2) small_slider_vertical_pane

0x4597,	// (0x000507db) small_slider_vertical_pane_g1

0x4597,	// (0x000507db) small_slider_vertical_pane_g2

0x4d66,	// (0x00050faa) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0005bab7) small_slider_vertical_pane_g

0x037e,	// (0x0004c5c2) main_hwr_training_pane

0x4d6f,	// (0x00050fb3) hwr_training_instruct_pane_ParamLimits

0x4d6f,	// (0x00050fb3) hwr_training_instruct_pane

0xa455,	// (0x00056699) hwr_training_navi_pane_ParamLimits

0xa455,	// (0x00056699) hwr_training_navi_pane

0xa46f,	// (0x000566b3) hwr_training_write_pane_ParamLimits

0xa46f,	// (0x000566b3) hwr_training_write_pane

0x037e,	// (0x0004c5c2) bg_frame_shadow_pane

0x4da6,	// (0x00050fea) hwr_training_write_pane_g1

0x4dae,	// (0x00050ff2) hwr_training_write_pane_g2

0x4db6,	// (0x00050ffa) hwr_training_write_pane_g3

0x4dbe,	// (0x00051002) hwr_training_write_pane_g4

0x4dc6,	// (0x0005100a) hwr_training_write_pane_g5

0x4dce,	// (0x00051012) hwr_training_write_pane_g6

0x4dd6,	// (0x0005101a) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0005babe) hwr_training_write_pane_g

0xa4a7,	// (0x000566eb) hwr_training_navi_pane_g1_ParamLimits

0xa4a7,	// (0x000566eb) hwr_training_navi_pane_g1

0xa4b9,	// (0x000566fd) hwr_training_navi_pane_g2_ParamLimits

0xa4b9,	// (0x000566fd) hwr_training_navi_pane_g2

0xa4cb,	// (0x0005670f) hwr_training_navi_pane_g3_ParamLimits

0xa4cb,	// (0x0005670f) hwr_training_navi_pane_g3

0xa4db,	// (0x0005671f) hwr_training_navi_pane_g4_ParamLimits

0xa4db,	// (0x0005671f) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0005bacd) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0005bacd) hwr_training_navi_pane_g

0xa4f5,	// (0x00056739) hwr_training_navi_pane_t1

0xa503,	// (0x00056747) list_single_hwr_training_instruct_pane_ParamLimits

0xa503,	// (0x00056747) list_single_hwr_training_instruct_pane

0x4dde,	// (0x00051022) list_single_hwr_training_instruct_pane_t1

0x44d7,	// (0x0005071b) bg_frame_shadow_pane_g1

0x4ded,	// (0x00051031) bg_frame_shadow_pane_g2

0x4df5,	// (0x00051039) bg_frame_shadow_pane_g3

0x4dfd,	// (0x00051041) bg_frame_shadow_pane_g4

0x4e05,	// (0x00051049) bg_frame_shadow_pane_g5

0x4e0d,	// (0x00051051) bg_frame_shadow_pane_g6

0x4e15,	// (0x00051059) bg_frame_shadow_pane_g7

0x2322,	// (0x0004e566) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0005bad8) bg_frame_shadow_pane_g

0x037e,	// (0x0004c5c2) main_video_tele_dialer_pane

0xa528,	// (0x0005676c) aid_size_cell_video_keypad_ParamLimits

0xa528,	// (0x0005676c) aid_size_cell_video_keypad

0xa538,	// (0x0005677c) grid_video_dialer_keypad_pane_ParamLimits

0xa538,	// (0x0005677c) grid_video_dialer_keypad_pane

0xa56a,	// (0x000567ae) video_down_pane_cp_ParamLimits

0xa56a,	// (0x000567ae) video_down_pane_cp

0xa576,	// (0x000567ba) cell_video_dialer_keypad_pane_ParamLimits

0xa576,	// (0x000567ba) cell_video_dialer_keypad_pane

0x4e39,	// (0x0005107d) bg_button_pane_cp08_ParamLimits

0x4e39,	// (0x0005107d) bg_button_pane_cp08

0xa58b,	// (0x000567cf) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa58b,	// (0x000567cf) cell_video_dialer_keypad_pane_g1

0x9da2,	// (0x00055fe6) mup3_rocker2_pane_ParamLimits

0x9da2,	// (0x00055fe6) mup3_rocker2_pane

0x4597,	// (0x000507db) mup3_rocker2_pane_g1

0x8ce6,	// (0x00054f2a) main_dialer2_pane

0x037e,	// (0x0004c5c2) main_mp4_pane

0xa5cd,	// (0x00056811) main_mp4_pane_g1_ParamLimits

0xa5cd,	// (0x00056811) main_mp4_pane_g1

0xa5db,	// (0x0005681f) main_mp4_pane_g2_ParamLimits

0xa5db,	// (0x0005681f) main_mp4_pane_g2

0xa5e9,	// (0x0005682d) main_mp4_pane_g3_ParamLimits

0xa5e9,	// (0x0005682d) main_mp4_pane_g3

0xa62e,	// (0x00056872) main_mp4_pane_g4_ParamLimits

0xa62e,	// (0x00056872) main_mp4_pane_g4

0xa656,	// (0x0005689a) main_mp4_pane_g5_ParamLimits

0xa656,	// (0x0005689a) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0005baf8) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0005baf8) main_mp4_pane_g

0xa6a6,	// (0x000568ea) main_mp4_pane_t1_ParamLimits

0xa6a6,	// (0x000568ea) main_mp4_pane_t1

0xa702,	// (0x00056946) main_mp4_pane_t2_ParamLimits

0xa702,	// (0x00056946) main_mp4_pane_t2

0xde32,	// (0x0005a076) main_mp4_pane_t3_ParamLimits

0xde32,	// (0x0005a076) main_mp4_pane_t3

0xa754,	// (0x00056998) main_mp4_pane_t4_ParamLimits

0xa754,	// (0x00056998) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0005bb05) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0005bb05) main_mp4_pane_t

0xa798,	// (0x000569dc) mp4_progress_pane_ParamLimits

0xa798,	// (0x000569dc) mp4_progress_pane

0xa7e2,	// (0x00056a26) mp4_rocker_pane_ParamLimits

0xa7e2,	// (0x00056a26) mp4_rocker_pane

0xde5a,	// (0x0005a09e) mp4_progress_pane_t1

0xde73,	// (0x0005a0b7) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0005bb0e) mp4_progress_pane_t

0xde8c,	// (0x0005a0d0) mup_progress_pane_cp04

0xde98,	// (0x0005a0dc) mp4_rocker_pane_g1

0xa802,	// (0x00056a46) aid_cell_size_keypad2_ParamLimits

0xa802,	// (0x00056a46) aid_cell_size_keypad2

0xa812,	// (0x00056a56) dialer2_ne_pane_ParamLimits

0xa812,	// (0x00056a56) dialer2_ne_pane

0xa820,	// (0x00056a64) grid_dialer2_keypad_pane_ParamLimits

0xa820,	// (0x00056a64) grid_dialer2_keypad_pane

0xdea2,	// (0x0005a0e6) bg_popup_call_pane_cp07_ParamLimits

0xdea2,	// (0x0005a0e6) bg_popup_call_pane_cp07

0xa830,	// (0x00056a74) dialer2_ne_pane_t1_ParamLimits

0xa830,	// (0x00056a74) dialer2_ne_pane_t1

0xa855,	// (0x00056a99) cell_dialer2_keypad_pane_ParamLimits

0xa855,	// (0x00056a99) cell_dialer2_keypad_pane

0xdec2,	// (0x0005a106) bg_button_pane_pane_cp04_ParamLimits

0xdec2,	// (0x0005a106) bg_button_pane_pane_cp04

0xa86a,	// (0x00056aae) cell_dialer2_keypad_pane_g1_ParamLimits

0xa86a,	// (0x00056aae) cell_dialer2_keypad_pane_g1

0x6b85,	// (0x00052dc9) aid_placing_vt_set_content_ParamLimits

0x6b85,	// (0x00052dc9) aid_placing_vt_set_content

0x6bb1,	// (0x00052df5) aid_placing_vt_set_title_ParamLimits

0x6bb1,	// (0x00052df5) aid_placing_vt_set_title

0x037e,	// (0x0004c5c2) main_image3_pane

0xa904,	// (0x00056b48) area_side_right_pane_cp01_ParamLimits

0xa904,	// (0x00056b48) area_side_right_pane_cp01

0xa931,	// (0x00056b75) main_image3_pane_g1_ParamLimits

0xa931,	// (0x00056b75) main_image3_pane_g1

0xa93f,	// (0x00056b83) main_image3_pane_g2_ParamLimits

0xa93f,	// (0x00056b83) main_image3_pane_g2

0xa958,	// (0x00056b9c) main_image3_pane_g3_ParamLimits

0xa958,	// (0x00056b9c) main_image3_pane_g3

0xa971,	// (0x00056bb5) main_image3_pane_g4_ParamLimits

0xa971,	// (0x00056bb5) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0005bb1d) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0005bb1d) main_image3_pane_g

0xa98a,	// (0x00056bce) main_image3_pane_t1_ParamLimits

0xa98a,	// (0x00056bce) main_image3_pane_t1

0xa9af,	// (0x00056bf3) main_image3_pane_t2_ParamLimits

0xa9af,	// (0x00056bf3) main_image3_pane_t2

0xa9ce,	// (0x00056c12) main_image3_pane_t3_ParamLimits

0xa9ce,	// (0x00056c12) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0005bb26) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0005bb26) main_image3_pane_t

0x0b21,	// (0x0004cd65) grid_sctrl_middle_pane_cp01_ParamLimits

0x0b21,	// (0x0004cd65) grid_sctrl_middle_pane_cp01

0xaa2f,	// (0x00056c73) cell_sctrl_middle_pane_cp01_ParamLimits

0xaa2f,	// (0x00056c73) cell_sctrl_middle_pane_cp01

0xaa40,	// (0x00056c84) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaa40,	// (0x00056c84) cell_sctrl_middle_pane_cp01_g1

0x037e,	// (0x0004c5c2) main_call4_pane

0xaa4d,	// (0x00056c91) aid_size_button_call4_ParamLimits

0xaa4d,	// (0x00056c91) aid_size_button_call4

0xaa7d,	// (0x00056cc1) call4_windows_pane_ParamLimits

0xaa7d,	// (0x00056cc1) call4_windows_pane

0xaa97,	// (0x00056cdb) grid_call4_button_pane_ParamLimits

0xaa97,	// (0x00056cdb) grid_call4_button_pane

0xdece,	// (0x0005a112) call4_windows_conf_pane

0xdee5,	// (0x0005a129) popup_call4_audio_first_window_ParamLimits

0xdee5,	// (0x0005a129) popup_call4_audio_first_window

0xdf31,	// (0x0005a175) popup_call4_audio_second_window_ParamLimits

0xdf31,	// (0x0005a175) popup_call4_audio_second_window

0xdf45,	// (0x0005a189) popup_call4_audio_wait_window_ParamLimits

0xdf45,	// (0x0005a189) popup_call4_audio_wait_window

0xaabb,	// (0x00056cff) cell_call4_button_pane_ParamLimits

0xaabb,	// (0x00056cff) cell_call4_button_pane

0xaae0,	// (0x00056d24) bg_button_pane_cp09_ParamLimits

0xaae0,	// (0x00056d24) bg_button_pane_cp09

0xaaec,	// (0x00056d30) cell_call4_button_pane_g1_ParamLimits

0xaaec,	// (0x00056d30) cell_call4_button_pane_g1

0xaaf9,	// (0x00056d3d) cell_call4_button_pane_t1_ParamLimits

0xaaf9,	// (0x00056d3d) cell_call4_button_pane_t1

0xdf8d,	// (0x0005a1d1) popup_call4_audio_conf_window_ParamLimits

0xdf8d,	// (0x0005a1d1) popup_call4_audio_conf_window

0x9dd5,	// (0x00056019) mup3_progress_pane_t1_ParamLimits

0x9df4,	// (0x00056038) mup3_progress_pane_t2_ParamLimits

0x4886,	// (0x00050aca) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0005b9ff) mup3_progress_pane_t_ParamLimits

0x48a3,	// (0x00050ae7) mup_progress_pane_cp03_ParamLimits

0xa2f4,	// (0x00056538) mup3_control_keys_pane_g4_copy1

0xa7c6,	// (0x00056a0a) mp4_rocker2_pane_ParamLimits

0xa7c6,	// (0x00056a0a) mp4_rocker2_pane

0xdfa1,	// (0x0005a1e5) mp4_rocker2_pane_g1

0xdfa9,	// (0x0005a1ed) mp4_rocker2_pane_g2

0xab0b,	// (0x00056d4f) mp4_rocker2_pane_g3

0xab13,	// (0x00056d57) mp4_rocker2_pane_g4

0xab1b,	// (0x00056d5f) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0005bb2f) mp4_rocker2_pane_g

0x037e,	// (0x0004c5c2) main_camera4_pane

0x037e,	// (0x0004c5c2) main_video4_pane

0xa546,	// (0x0005678a) main_video_tele_dialer_pane_t1_ParamLimits

0xa546,	// (0x0005678a) main_video_tele_dialer_pane_t1

0xa558,	// (0x0005679c) main_video_tele_dialer_pane_t2_ParamLimits

0xa558,	// (0x0005679c) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0005bae9) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0005bae9) main_video_tele_dialer_pane_t

0xab3b,	// (0x00056d7f) cam4_autofocus_pane_ParamLimits

0xab3b,	// (0x00056d7f) cam4_autofocus_pane

0xab55,	// (0x00056d99) cam4_image_uncrop_pane_ParamLimits

0xab55,	// (0x00056d99) cam4_image_uncrop_pane

0xab6c,	// (0x00056db0) cam4_indicators_pane_ParamLimits

0xab6c,	// (0x00056db0) cam4_indicators_pane

0xab88,	// (0x00056dcc) main_camera4_pane_g1_ParamLimits

0xab88,	// (0x00056dcc) main_camera4_pane_g1

0xab94,	// (0x00056dd8) main_camera4_pane_g2_ParamLimits

0xab94,	// (0x00056dd8) main_camera4_pane_g2

0xab94,	// (0x00056dd8) main_camera4_pane_g3_ParamLimits

0xab94,	// (0x00056dd8) main_camera4_pane_g3

0xaba0,	// (0x00056de4) main_camera4_pane_g4_ParamLimits

0xaba0,	// (0x00056de4) main_camera4_pane_g4

0xabac,	// (0x00056df0) main_camera4_pane_g5_ParamLimits

0xabac,	// (0x00056df0) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0005bb3a) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0005bb3a) main_camera4_pane_g

0xabc6,	// (0x00056e0a) main_camera4_pane_t1_ParamLimits

0xabc6,	// (0x00056e0a) main_camera4_pane_t1

0xac0e,	// (0x00056e52) bg_tb_trans_pane_cp06

0xac24,	// (0x00056e68) cam4_indicators_pane_g1

0xac35,	// (0x00056e79) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0005bb55) cam4_indicators_pane_g

0xac53,	// (0x00056e97) cam4_indicators_pane_t1

0xac7d,	// (0x00056ec1) main_video4_pane_g1_ParamLimits

0xac7d,	// (0x00056ec1) main_video4_pane_g1

0xac89,	// (0x00056ecd) main_video4_pane_g2_ParamLimits

0xac89,	// (0x00056ecd) main_video4_pane_g2

0xac95,	// (0x00056ed9) main_video4_pane_g3_ParamLimits

0xac95,	// (0x00056ed9) main_video4_pane_g3

0xaca1,	// (0x00056ee5) main_video4_pane_g4_ParamLimits

0xaca1,	// (0x00056ee5) main_video4_pane_g4

0x0004,

0xf918,	// (0x0005bb5c) main_video4_pane_g_ParamLimits

0xf918,	// (0x0005bb5c) main_video4_pane_g

0xacc1,	// (0x00056f05) vid4_indicators_pane_ParamLimits

0xacc1,	// (0x00056f05) vid4_indicators_pane

0xacdf,	// (0x00056f23) video4_image_uncrop_cif_pane_ParamLimits

0xacdf,	// (0x00056f23) video4_image_uncrop_cif_pane

0xacee,	// (0x00056f32) video4_image_uncrop_nhd_pane_ParamLimits

0xacee,	// (0x00056f32) video4_image_uncrop_nhd_pane

0xab55,	// (0x00056d99) video4_image_uncrop_vga_pane_ParamLimits

0xab55,	// (0x00056d99) video4_image_uncrop_vga_pane

0xacfb,	// (0x00056f3f) bg_tb_trans_pane_cp07

0xad13,	// (0x00056f57) vid4_indicators_pane_g1

0xad24,	// (0x00056f68) vid4_indicators_pane_g2

0xad35,	// (0x00056f79) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0005bb67) vid4_indicators_pane_g

0xad62,	// (0x00056fa6) vid4_indicators_pane_t1

0xad7b,	// (0x00056fbf) cam4_autofocus_pane_g1

0xad83,	// (0x00056fc7) cam4_autofocus_pane_g2

0xad8b,	// (0x00056fcf) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0005bb72) cam4_autofocus_pane_g

0xad93,	// (0x00056fd7) cam4_autofocus_pane_g3_copy1

0x4e1d,	// (0x00051061) video_down_pane_cp_t1

0x4e2b,	// (0x0005106f) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0005baee) video_down_pane_cp_t

0x0b21,	// (0x0004cd65) popup_vitu2_window_ParamLimits

0x0b21,	// (0x0004cd65) popup_vitu2_window

0xad9b,	// (0x00056fdf) aid_size_cell2_itu2_ParamLimits

0xad9b,	// (0x00056fdf) aid_size_cell2_itu2

0xadbd,	// (0x00057001) aid_size_cell_itu2_ParamLimits

0xadbd,	// (0x00057001) aid_size_cell_itu2

0xae01,	// (0x00057045) bg_popup_window_pane_cp09_ParamLimits

0xae01,	// (0x00057045) bg_popup_window_pane_cp09

0xae0f,	// (0x00057053) field_vitu2_entry_pane_ParamLimits

0xae0f,	// (0x00057053) field_vitu2_entry_pane

0xae2f,	// (0x00057073) grid_vitu2_function_pane_ParamLimits

0xae2f,	// (0x00057073) grid_vitu2_function_pane

0xae73,	// (0x000570b7) grid_vitu2_itu_pane_ParamLimits

0xae73,	// (0x000570b7) grid_vitu2_itu_pane

0xaeeb,	// (0x0005712f) cell_vitu2_itu_pane_ParamLimits

0xaeeb,	// (0x0005712f) cell_vitu2_itu_pane

0xaf00,	// (0x00057144) cell_vitu2_function_pane_ParamLimits

0xaf00,	// (0x00057144) cell_vitu2_function_pane

0xdfb1,	// (0x0005a1f5) bg_popup_call_pane_cp08_ParamLimits

0xdfb1,	// (0x0005a1f5) bg_popup_call_pane_cp08

0xdfca,	// (0x0005a20e) field_vitu2_entry_pane_g1

0xdfd6,	// (0x0005a21a) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0005bb79) field_vitu2_entry_pane_g

0xaf3f,	// (0x00057183) field_vitu2_entry_pane_t1_ParamLimits

0xaf3f,	// (0x00057183) field_vitu2_entry_pane_t1

0x0b39,	// (0x0004cd7d) field_vitu2_entry_pane_t2_ParamLimits

0x0b39,	// (0x0004cd7d) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0005bb80) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0005bb80) field_vitu2_entry_pane_t

0xaf6f,	// (0x000571b3) bg_button_pane_cp010_ParamLimits

0xaf6f,	// (0x000571b3) bg_button_pane_cp010

0xaf7d,	// (0x000571c1) cell_vitu2_itu_pane_g1

0xaf9b,	// (0x000571df) cell_vitu2_itu_pane_t1_ParamLimits

0xaf9b,	// (0x000571df) cell_vitu2_itu_pane_t1

0x5b42,	// (0x00051d86) cell_vitu2_itu_pane_t2_ParamLimits

0x5b42,	// (0x00051d86) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0005bb8a) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0005bb8a) cell_vitu2_itu_pane_t

0xacfb,	// (0x00056f3f) bg_button_pane_cp011

0xafed,	// (0x00057231) cell_vitu2_function_pane_g1

0x037e,	// (0x0004c5c2) main_myfav_hc_pane

0xaa10,	// (0x00056c54) popup_image3_note_pane_ParamLimits

0xaa10,	// (0x00056c54) popup_image3_note_pane

0xaa1e,	// (0x00056c62) popup_image3_tool_bar_pane_ParamLimits

0xaa1e,	// (0x00056c62) popup_image3_tool_bar_pane

0x5bb0,	// (0x00051df4) cell_vitu2_itu_pane_t3_ParamLimits

0x5bb0,	// (0x00051df4) cell_vitu2_itu_pane_t3

0x037e,	// (0x0004c5c2) bg_popup_trans_pane

0xdff8,	// (0x0005a23c) grid_image3_tool_bar_pane

0xe002,	// (0x0005a246) bg_popup_trans_pane_g1

0x265f,	// (0x0004e8a3) bg_popup_trans_pane_g2

0xe00a,	// (0x0005a24e) bg_popup_trans_pane_g3

0xe012,	// (0x0005a256) bg_popup_trans_pane_g4

0xe01a,	// (0x0005a25e) bg_popup_trans_pane_g5

0xe022,	// (0x0005a266) bg_popup_trans_pane_g6

0xe02a,	// (0x0005a26e) bg_popup_trans_pane_g7

0xe032,	// (0x0005a276) bg_popup_trans_pane_g8

0x263f,	// (0x0004e883) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0005bb91) bg_popup_trans_pane_g

0xe03a,	// (0x0005a27e) cell_image3_tool_bar_pane_ParamLimits

0xe03a,	// (0x0005a27e) cell_image3_tool_bar_pane

0x4597,	// (0x000507db) cell_image3_tool_bar_pane_g1

0x037e,	// (0x0004c5c2) bg_popup_trans_pane_cp1

0xe04e,	// (0x0005a292) popup_image3_note_pane_t1

0xe05c,	// (0x0005a2a0) popup_image3_note_pane_t2

0xe06a,	// (0x0005a2ae) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0005bba4) popup_image3_note_pane_t

0xe078,	// (0x0005a2bc) popup_image3_note_pane_t3_copy1

0xb001,	// (0x00057245) bg_myfav_hc_instruction_pane_ParamLimits

0xb001,	// (0x00057245) bg_myfav_hc_instruction_pane

0xb019,	// (0x0005725d) cell_myfav_contact_pane_ParamLimits

0xb019,	// (0x0005725d) cell_myfav_contact_pane

0xb033,	// (0x00057277) cell_myfav_contact_pane_cp1_ParamLimits

0xb033,	// (0x00057277) cell_myfav_contact_pane_cp1

0xb04b,	// (0x0005728f) cell_myfav_contact_pane_cp2_ParamLimits

0xb04b,	// (0x0005728f) cell_myfav_contact_pane_cp2

0xb063,	// (0x000572a7) cell_myfav_contact_pane_cp3_ParamLimits

0xb063,	// (0x000572a7) cell_myfav_contact_pane_cp3

0xb07a,	// (0x000572be) cell_myfav_contact_pane_cp4_ParamLimits

0xb07a,	// (0x000572be) cell_myfav_contact_pane_cp4

0xb090,	// (0x000572d4) cell_myfav_contact_pane_cp5_ParamLimits

0xb090,	// (0x000572d4) cell_myfav_contact_pane_cp5

0xb0a4,	// (0x000572e8) cell_myfav_contact_pane_cp6_ParamLimits

0xb0a4,	// (0x000572e8) cell_myfav_contact_pane_cp6

0xb0b8,	// (0x000572fc) cell_myfav_contact_pane_cp7_ParamLimits

0xb0b8,	// (0x000572fc) cell_myfav_contact_pane_cp7

0xe086,	// (0x0005a2ca) listscroll_gen_pane_cp05

0xb0d0,	// (0x00057314) main_myfav_hc_pane_g1_ParamLimits

0xb0d0,	// (0x00057314) main_myfav_hc_pane_g1

0xb0e6,	// (0x0005732a) main_myfav_hc_pane_g2_ParamLimits

0xb0e6,	// (0x0005732a) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0005bbab) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0005bbab) main_myfav_hc_pane_g

0xb114,	// (0x00057358) main_myfav_hc_pane_t1_ParamLimits

0xb114,	// (0x00057358) main_myfav_hc_pane_t1

0xe08f,	// (0x0005a2d3) main_myfav_hc_pane_t2_ParamLimits

0xe08f,	// (0x0005a2d3) main_myfav_hc_pane_t2

0xe0a1,	// (0x0005a2e5) main_myfav_hc_pane_t3_ParamLimits

0xe0a1,	// (0x0005a2e5) main_myfav_hc_pane_t3

0xb12b,	// (0x0005736f) main_myfav_hc_pane_t4_ParamLimits

0xb12b,	// (0x0005736f) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0005bbb2) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0005bbb2) main_myfav_hc_pane_t

0x4597,	// (0x000507db) bg_myfav_hc_instruction_pane_g1

0xe0b3,	// (0x0005a2f7) cell_myfav_contact_pane_g1_ParamLimits

0xe0b3,	// (0x0005a2f7) cell_myfav_contact_pane_g1

0xe0b3,	// (0x0005a2f7) cell_myfav_contact_pane_g2_ParamLimits

0xe0b3,	// (0x0005a2f7) cell_myfav_contact_pane_g2

0xe0bf,	// (0x0005a303) cell_myfav_contact_pane_g3_ParamLimits

0xe0bf,	// (0x0005a303) cell_myfav_contact_pane_g3

0x4870,	// (0x00050ab4) cell_myfav_contact_pane_g4_ParamLimits

0x4870,	// (0x00050ab4) cell_myfav_contact_pane_g4

0xe0cc,	// (0x0005a310) cell_myfav_contact_pane_g5_ParamLimits

0xe0cc,	// (0x0005a310) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0005bbbd) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0005bbbd) cell_myfav_contact_pane_g

0xb0fc,	// (0x00057340) main_myfav_hc_pane_g3_ParamLimits

0xb0fc,	// (0x00057340) main_myfav_hc_pane_g3

0x5d79,	// (0x00051fbd) popup_adpt_find_window

0xb155,	// (0x00057399) afind_page_pane_ParamLimits

0xb155,	// (0x00057399) afind_page_pane

0xb162,	// (0x000573a6) aid_size_cell_afind_ParamLimits

0xb162,	// (0x000573a6) aid_size_cell_afind

0xb17c,	// (0x000573c0) bg_popup_sub_pane_cp09_ParamLimits

0xb17c,	// (0x000573c0) bg_popup_sub_pane_cp09

0xb189,	// (0x000573cd) find_pane_cp01_ParamLimits

0xb189,	// (0x000573cd) find_pane_cp01

0xe0d8,	// (0x0005a31c) grid_afind_control_pane_ParamLimits

0xe0d8,	// (0x0005a31c) grid_afind_control_pane

0xb196,	// (0x000573da) grid_afind_pane_ParamLimits

0xb196,	// (0x000573da) grid_afind_pane

0xb1b2,	// (0x000573f6) cell_afind_pane_ParamLimits

0xb1b2,	// (0x000573f6) cell_afind_pane

0x4597,	// (0x000507db) afind_page_pane_g1

0xb1fa,	// (0x0005743e) afind_page_pane_g2

0xb203,	// (0x00057447) afind_page_pane_g3

0x0002,

0xf984,	// (0x0005bbc8) afind_page_pane_g

0xb20c,	// (0x00057450) afind_page_pane_t1

0xe0ec,	// (0x0005a330) cell_afind_grid_control_pane_ParamLimits

0xe0ec,	// (0x0005a330) cell_afind_grid_control_pane

0xdec2,	// (0x0005a106) bg_button_pane_cp69_ParamLimits

0xdec2,	// (0x0005a106) bg_button_pane_cp69

0xb22c,	// (0x00057470) cell_afind_pane_g1_ParamLimits

0xb22c,	// (0x00057470) cell_afind_pane_g1

0xb239,	// (0x0005747d) cell_afind_pane_t1_ParamLimits

0xb239,	// (0x0005747d) cell_afind_pane_t1

0x2458,	// (0x0004e69c) bg_button_pane_cp72

0xe0fb,	// (0x0005a33f) cell_afind_grid_control_pane_g1

0x8864,	// (0x00054aa8) aid_image_placing_area_ParamLimits

0x8864,	// (0x00054aa8) aid_image_placing_area

0x4b6f,	// (0x00050db3) field_vitu_entry_pane_g1_ParamLimits

0x4b6f,	// (0x00050db3) field_vitu_entry_pane_g1

0x4b7b,	// (0x00050dbf) field_vitu_entry_pane_g2_ParamLimits

0x4b7b,	// (0x00050dbf) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0005ba79) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0005ba79) field_vitu_entry_pane_g

0xa37c,	// (0x000565c0) cell_vitu_itu_pane_g1_ParamLimits

0xa3be,	// (0x00056602) cell_vitu_itu_pane_t3_ParamLimits

0xa3be,	// (0x00056602) cell_vitu_itu_pane_t3

0xde5a,	// (0x0005a09e) mp4_progress_pane_t1_ParamLimits

0xde73,	// (0x0005a0b7) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0005bb0e) mp4_progress_pane_t_ParamLimits

0xde8c,	// (0x0005a0d0) mup_progress_pane_cp04_ParamLimits

0xb13f,	// (0x00057383) main_myfav_hc_pane_t5_ParamLimits

0xb13f,	// (0x00057383) main_myfav_hc_pane_t5

0x03a4,	// (0x0004c5e8) aid_zoom_text_primary

0x5d79,	// (0x00051fbd) popup_adpt_find_window_ParamLimits

0x334c,	// (0x0004f590) main_cam_set_pane

0xab7a,	// (0x00056dbe) cam4_zoom_pane_ParamLimits

0xab7a,	// (0x00056dbe) cam4_zoom_pane

0xb24b,	// (0x0005748f) main_cam_set_pane_g1_ParamLimits

0xb24b,	// (0x0005748f) main_cam_set_pane_g1

0xb259,	// (0x0005749d) main_cam_set_pane_g2_ParamLimits

0xb259,	// (0x0005749d) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0005bbcf) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0005bbcf) main_cam_set_pane_g

0xb265,	// (0x000574a9) main_cam_set_pane_t1_ParamLimits

0xb265,	// (0x000574a9) main_cam_set_pane_t1

0xb281,	// (0x000574c5) main_cset_listscroll_pane_ParamLimits

0xb281,	// (0x000574c5) main_cset_listscroll_pane

0xb2ac,	// (0x000574f0) main_cset_slider_pane_ParamLimits

0xb2ac,	// (0x000574f0) main_cset_slider_pane

0xe10c,	// (0x0005a350) main_cset_list_pane_ParamLimits

0xe10c,	// (0x0005a350) main_cset_list_pane

0xe11c,	// (0x0005a360) scroll_pane_cp028

0xb2cb,	// (0x0005750f) aid_area_touch_slider

0xb2e7,	// (0x0005752b) cset_slider_pane

0xb311,	// (0x00057555) main_cset_slider_pane_g1

0xb326,	// (0x0005756a) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0005bbd4) main_cset_slider_pane_g

0xe155,	// (0x0005a399) main_cset_slider_pane_t1

0xb3e8,	// (0x0005762c) main_cset_slider_pane_t2

0xb402,	// (0x00057646) main_cset_slider_pane_t3

0xb41c,	// (0x00057660) main_cset_slider_pane_t4

0xb436,	// (0x0005767a) main_cset_slider_pane_t5

0xb454,	// (0x00057698) main_cset_slider_pane_t6

0xb46b,	// (0x000576af) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0005bbf9) main_cset_slider_pane_t

0xb577,	// (0x000577bb) cset_list_set_pane_ParamLimits

0xb577,	// (0x000577bb) cset_list_set_pane

0xb58d,	// (0x000577d1) aid_position_infowindow_above

0xb595,	// (0x000577d9) aid_position_infowindow_below

0x0b56,	// (0x0004cd9a) cset_list_set_pane_g1_ParamLimits

0x0b56,	// (0x0004cd9a) cset_list_set_pane_g1

0x0b62,	// (0x0004cda6) cset_list_set_pane_g3_ParamLimits

0x0b62,	// (0x0004cda6) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0005bc18) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0005bc18) cset_list_set_pane_g

0x0b71,	// (0x0004cdb5) cset_list_set_pane_t1_ParamLimits

0x0b71,	// (0x0004cdb5) cset_list_set_pane_t1

0x334c,	// (0x0004f590) list_highlight_pane_cp021_ParamLimits

0x334c,	// (0x0004f590) list_highlight_pane_cp021

0x2e80,	// (0x0004f0c4) cset_slider_pane_g1

0x2e92,	// (0x0004f0d6) cset_slider_pane_g2

0x2e89,	// (0x0004f0cd) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0005bc1d) cset_slider_pane_g

0xb59d,	// (0x000577e1) aid_area_touch_cam4_zoom

0xb5a5,	// (0x000577e9) cam4_zoom_cont_pane

0xb5ad,	// (0x000577f1) cam4_zoom_pane_g1

0xb5b5,	// (0x000577f9) cam4_zoom_pane_g2

0xb5bd,	// (0x00057801) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0005bc24) cam4_zoom_pane_g

0xb5c5,	// (0x00057809) cam4_zoom_cont_pane_g1

0xb5ce,	// (0x00057812) cam4_zoom_cont_pane_g2

0xb5d7,	// (0x0005781b) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0005bc2b) cam4_zoom_cont_pane_g

0xaa67,	// (0x00056cab) call4_image_pane_ParamLimits

0xaa67,	// (0x00056cab) call4_image_pane

0xdece,	// (0x0005a112) call4_windows_conf_pane_ParamLimits

0xdf0f,	// (0x0005a153) popup_call4_audio_in_window_ParamLimits

0xdf0f,	// (0x0005a153) popup_call4_audio_in_window

0x037e,	// (0x0004c5c2) bg_popup_call2_act_pane_cp02

0xdf85,	// (0x0005a1c9) call4_list_conf_pane

0x4597,	// (0x000507db) call4_image_pane_g1

0x4597,	// (0x000507db) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0005b93f) call4_image_pane_g

0xe1f5,	// (0x0005a439) list_single_graphic_popup_conf4_pane_ParamLimits

0xe1f5,	// (0x0005a439) list_single_graphic_popup_conf4_pane

0x037e,	// (0x0004c5c2) list_highlight_pane_cp022

0xe208,	// (0x0005a44c) list_single_graphic_popup_conf4_pane_g1

0x2b51,	// (0x0004ed95) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0005bc32) list_single_graphic_popup_conf4_pane_g

0xe210,	// (0x0005a454) list_single_graphic_popup_conf4_pane_t1

0x6d15,	// (0x00052f59) popup_vtel_slider_window_ParamLimits

0x6d15,	// (0x00052f59) popup_vtel_slider_window

0xdeb0,	// (0x0005a0f4) dialer2_ne_pane_t2_ParamLimits

0xdeb0,	// (0x0005a0f4) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0005bb13) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0005bb13) dialer2_ne_pane_t

0x334c,	// (0x0004f590) bg_popup_sub_pane_cp010_ParamLimits

0x334c,	// (0x0004f590) bg_popup_sub_pane_cp010

0xb5e0,	// (0x00057824) popup_vtel_slider_window_g1_ParamLimits

0xb5e0,	// (0x00057824) popup_vtel_slider_window_g1

0xb5ec,	// (0x00057830) popup_vtel_slider_window_g2_ParamLimits

0xb5ec,	// (0x00057830) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0005bc37) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0005bc37) popup_vtel_slider_window_g

0xb634,	// (0x00057878) vtel_slider_pane_ParamLimits

0xb634,	// (0x00057878) vtel_slider_pane

0xb643,	// (0x00057887) vtel_slider_pane_g1_ParamLimits

0xb643,	// (0x00057887) vtel_slider_pane_g1

0xb650,	// (0x00057894) vtel_slider_pane_g2_ParamLimits

0xb650,	// (0x00057894) vtel_slider_pane_g2

0xb65d,	// (0x000578a1) vtel_slider_pane_g3_ParamLimits

0xb65d,	// (0x000578a1) vtel_slider_pane_g3

0xb643,	// (0x00057887) vtel_slider_pane_g4_ParamLimits

0xb643,	// (0x00057887) vtel_slider_pane_g4

0xb66a,	// (0x000578ae) vtel_slider_pane_g5_ParamLimits

0xb66a,	// (0x000578ae) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0005bc40) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0005bc40) vtel_slider_pane_g

0x037e,	// (0x0004c5c2) main_gallery2_pane

0xade3,	// (0x00057027) aid_size_row_itut2_dropdow_list_ParamLimits

0xade3,	// (0x00057027) aid_size_row_itut2_dropdow_list

0xae51,	// (0x00057095) grid_vitu2_function_top_pane_ParamLimits

0xae51,	// (0x00057095) grid_vitu2_function_top_pane

0xaea7,	// (0x000570eb) popup_vitu2_dropdown_list_window_ParamLimits

0xaea7,	// (0x000570eb) popup_vitu2_dropdown_list_window

0xaec7,	// (0x0005710b) popup_vitu2_match_list_window

0xb677,	// (0x000578bb) cell_vitu2_function_top_pane_ParamLimits

0xb677,	// (0x000578bb) cell_vitu2_function_top_pane

0xb697,	// (0x000578db) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb697,	// (0x000578db) cell_vitu2_function_top_pane_cp01

0xb6b5,	// (0x000578f9) cell_vitu2_function_top_wide_pane_ParamLimits

0xb6b5,	// (0x000578f9) cell_vitu2_function_top_wide_pane

0xacfb,	// (0x00056f3f) bg_button_pane_cp012

0xb6d3,	// (0x00057917) cell_vitu2_function_top_pane_g1

0xb6e2,	// (0x00057926) bg_button_pane_cp013_ParamLimits

0xb6e2,	// (0x00057926) bg_button_pane_cp013

0xb6fe,	// (0x00057942) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb6fe,	// (0x00057942) cell_vitu2_function_top_wide_pane_g1

0xb716,	// (0x0005795a) bg_popup_sub_pane_cp20

0xb724,	// (0x00057968) list_vitu2_match_list_pane

0xe002,	// (0x0005a246) bg_popup_sub_pane_cp20_g1

0xe00a,	// (0x0005a24e) bg_popup_sub_pane_cp20_g2

0x265f,	// (0x0004e8a3) bg_popup_sub_pane_cp20_g3

0xe012,	// (0x0005a256) bg_popup_sub_pane_cp20_g4

0x263f,	// (0x0004e883) bg_popup_sub_pane_cp20_g5

0xe226,	// (0x0005a46a) bg_popup_sub_pane_cp20_g6

0xe022,	// (0x0005a266) bg_popup_sub_pane_cp20_g7

0xe02a,	// (0x0005a26e) bg_popup_sub_pane_cp20_g8

0xe032,	// (0x0005a276) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0005bc4b) bg_popup_sub_pane_cp20_g

0xb73c,	// (0x00057980) list_vitu2_match_list_item_pane_ParamLimits

0xb73c,	// (0x00057980) list_vitu2_match_list_item_pane

0xb74e,	// (0x00057992) list_vitu2_match_list_item_pane_t1

0x61c9,	// (0x0005240d) bg_popup_sub_pane_cp21

0xb78b,	// (0x000579cf) grid_vitu2_dropdown_list_pane

0xb793,	// (0x000579d7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb793,	// (0x000579d7) cell_vitu2_dropdown_list_char_pane

0xb7b4,	// (0x000579f8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb7b4,	// (0x000579f8) cell_vitu2_dropdown_list_ctrl_pane

0xe22e,	// (0x0005a472) cell_vitu2_dropdown_list_char_pane_g1

0xe237,	// (0x0005a47b) cell_vitu2_dropdown_list_char_pane_g2

0xe240,	// (0x0005a484) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0005bc68) cell_vitu2_dropdown_list_char_pane_g

0xb7e0,	// (0x00057a24) cell_vitu2_dropdown_list_char_pane_t1

0xb7ee,	// (0x00057a32) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb7ee,	// (0x00057a32) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb7fe,	// (0x00057a42) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb7fe,	// (0x00057a42) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb80f,	// (0x00057a53) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb80f,	// (0x00057a53) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb81f,	// (0x00057a63) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb81f,	// (0x00057a63) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac0e,	// (0x00056e52) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac0e,	// (0x00056e52) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0005bc6f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0005bc6f) cell_vitu2_dropdown_list_ctrl_pane_g

0xb83b,	// (0x00057a7f) aid_size_cell_gallery2_ParamLimits

0xb83b,	// (0x00057a7f) aid_size_cell_gallery2

0xb849,	// (0x00057a8d) grid_gallery2_pane_ParamLimits

0xb849,	// (0x00057a8d) grid_gallery2_pane

0xb858,	// (0x00057a9c) scroll_pane_cp029_ParamLimits

0xb858,	// (0x00057a9c) scroll_pane_cp029

0xb864,	// (0x00057aa8) cell_gallery2_pane_ParamLimits

0xb864,	// (0x00057aa8) cell_gallery2_pane

0xe249,	// (0x0005a48d) cell_gallery2_pane_g2

0x1470,	// (0x0004d6b4) cell_gallery2_pane_g3

0xe253,	// (0x0005a497) cell_gallery2_pane_g4

0xe25b,	// (0x0005a49f) cell_gallery2_pane_g5

0x2d3c,	// (0x0004ef80) grid_highlight_pane_cp10

0xaec7,	// (0x0005710b) popup_vitu2_match_list_window_ParamLimits

0xaedb,	// (0x0005711f) popup_vitu2_query_window_ParamLimits

0xaedb,	// (0x0005711f) popup_vitu2_query_window

0x61c9,	// (0x0005240d) bg_vitu2_candi_button_pane

0xe22e,	// (0x0005a472) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe237,	// (0x0005a47b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe240,	// (0x0005a484) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb892,	// (0x00057ad6) bg_button_pane_cp015

0xb8a4,	// (0x00057ae8) bg_button_pane_cp016

0xb8b7,	// (0x00057afb) bg_button_pane_cp017

0x4150,	// (0x00050394) bg_popup_sub_pane_cp22

0xe263,	// (0x0005a4a7) popup_vitu2_query_window_g1

0xb8fc,	// (0x00057b40) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0005bc7a) popup_vitu2_query_window_g

0xb919,	// (0x00057b5d) popup_vitu2_query_window_t1_ParamLimits

0xb919,	// (0x00057b5d) popup_vitu2_query_window_t1

0xb94c,	// (0x00057b90) popup_vitu2_query_window_t2_ParamLimits

0xb94c,	// (0x00057b90) popup_vitu2_query_window_t2

0xb95e,	// (0x00057ba2) popup_vitu2_query_window_t3_ParamLimits

0xb95e,	// (0x00057ba2) popup_vitu2_query_window_t3

0xb986,	// (0x00057bca) popup_vitu2_query_window_t4_ParamLimits

0xb986,	// (0x00057bca) popup_vitu2_query_window_t4

0xb9a7,	// (0x00057beb) popup_vitu2_query_window_t5_ParamLimits

0xb9a7,	// (0x00057beb) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0005bc81) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0005bc81) popup_vitu2_query_window_t

0xe104,	// (0x0005a348) main_cset_text_pane

0xb2cb,	// (0x0005750f) aid_area_touch_slider_ParamLimits

0xb2e7,	// (0x0005752b) cset_slider_pane_ParamLimits

0xb311,	// (0x00057555) main_cset_slider_pane_g1_ParamLimits

0xb326,	// (0x0005756a) main_cset_slider_pane_g2_ParamLimits

0xe125,	// (0x0005a369) main_cset_slider_pane_g3_ParamLimits

0xe125,	// (0x0005a369) main_cset_slider_pane_g3

0xb33b,	// (0x0005757f) main_cset_slider_pane_g4_ParamLimits

0xb33b,	// (0x0005757f) main_cset_slider_pane_g4

0xb34a,	// (0x0005758e) main_cset_slider_pane_g5_ParamLimits

0xb34a,	// (0x0005758e) main_cset_slider_pane_g5

0xb358,	// (0x0005759c) main_cset_slider_pane_g6_ParamLimits

0xb358,	// (0x0005759c) main_cset_slider_pane_g6

0xf990,	// (0x0005bbd4) main_cset_slider_pane_g_ParamLimits

0xe155,	// (0x0005a399) main_cset_slider_pane_t1_ParamLimits

0xb3e8,	// (0x0005762c) main_cset_slider_pane_t2_ParamLimits

0xb402,	// (0x00057646) main_cset_slider_pane_t3_ParamLimits

0xb41c,	// (0x00057660) main_cset_slider_pane_t4_ParamLimits

0xb436,	// (0x0005767a) main_cset_slider_pane_t5_ParamLimits

0xb454,	// (0x00057698) main_cset_slider_pane_t6_ParamLimits

0xb46b,	// (0x000576af) main_cset_slider_pane_t7_ParamLimits

0xb499,	// (0x000576dd) main_cset_slider_pane_t8_ParamLimits

0xb499,	// (0x000576dd) main_cset_slider_pane_t8

0xb4c1,	// (0x00057705) main_cset_slider_pane_t9_ParamLimits

0xb4c1,	// (0x00057705) main_cset_slider_pane_t9

0xb4e9,	// (0x0005772d) main_cset_slider_pane_t10_ParamLimits

0xb4e9,	// (0x0005772d) main_cset_slider_pane_t10

0xb511,	// (0x00057755) main_cset_slider_pane_t11_ParamLimits

0xb511,	// (0x00057755) main_cset_slider_pane_t11

0xb53b,	// (0x0005777f) main_cset_slider_pane_t12_ParamLimits

0xb53b,	// (0x0005777f) main_cset_slider_pane_t12

0xb558,	// (0x0005779c) main_cset_slider_pane_t13_ParamLimits

0xb558,	// (0x0005779c) main_cset_slider_pane_t13

0xf9b5,	// (0x0005bbf9) main_cset_slider_pane_t_ParamLimits

0x037e,	// (0x0004c5c2) bg_popup_sub_pane_cp011

0xe26f,	// (0x0005a4b3) main_cset_text_pane_g1

0xe277,	// (0x0005a4bb) main_cset_text_pane_t1

0xe285,	// (0x0005a4c9) main_cset_text_pane_t2

0xe293,	// (0x0005a4d7) main_cset_text_pane_t3

0xe2a1,	// (0x0005a4e5) main_cset_text_pane_t4

0xe2af,	// (0x0005a4f3) main_cset_text_pane_t5

0xe2bd,	// (0x0005a501) main_cset_text_pane_t6

0xe2cb,	// (0x0005a50f) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0005bc90) main_cset_text_pane_t

0x037e,	// (0x0004c5c2) main_cam4_burst_pane

0x037e,	// (0x0004c5c2) main_cam5_pane

0xb21a,	// (0x0005745e) bg_button_pane_cp019

0xb223,	// (0x00057467) bg_button_pane_cp020

0xe131,	// (0x0005a375) main_cset_slider_pane_g7_ParamLimits

0xe131,	// (0x0005a375) main_cset_slider_pane_g7

0xe13d,	// (0x0005a381) main_cset_slider_pane_g8_ParamLimits

0xe13d,	// (0x0005a381) main_cset_slider_pane_g8

0xb36c,	// (0x000575b0) main_cset_slider_pane_g9_ParamLimits

0xb36c,	// (0x000575b0) main_cset_slider_pane_g9

0xb378,	// (0x000575bc) main_cset_slider_pane_g10_ParamLimits

0xb378,	// (0x000575bc) main_cset_slider_pane_g10

0xb384,	// (0x000575c8) main_cset_slider_pane_g11_ParamLimits

0xb384,	// (0x000575c8) main_cset_slider_pane_g11

0xb390,	// (0x000575d4) main_cset_slider_pane_g12_ParamLimits

0xb390,	// (0x000575d4) main_cset_slider_pane_g12

0xb39c,	// (0x000575e0) main_cset_slider_pane_g13_ParamLimits

0xb39c,	// (0x000575e0) main_cset_slider_pane_g13

0xb3a8,	// (0x000575ec) main_cset_slider_pane_g14_ParamLimits

0xb3a8,	// (0x000575ec) main_cset_slider_pane_g14

0xb3b4,	// (0x000575f8) main_cset_slider_pane_g15_ParamLimits

0xb3b4,	// (0x000575f8) main_cset_slider_pane_g15

0xe183,	// (0x0005a3c7) main_cset_slider_pane_t14_ParamLimits

0xe183,	// (0x0005a3c7) main_cset_slider_pane_t14

0xe1bc,	// (0x0005a400) main_cset_slider_pane_t15_ParamLimits

0xe1bc,	// (0x0005a400) main_cset_slider_pane_t15

0xba1e,	// (0x00057c62) aid_cam4_burst_size_cell_ParamLimits

0xba1e,	// (0x00057c62) aid_cam4_burst_size_cell

0xba3a,	// (0x00057c7e) grid_cam4_burst_pane_ParamLimits

0xba3a,	// (0x00057c7e) grid_cam4_burst_pane

0xba6a,	// (0x00057cae) linegrid_cam4_burst_pane_ParamLimits

0xba6a,	// (0x00057cae) linegrid_cam4_burst_pane

0xba8a,	// (0x00057cce) scroll_pane_cp30_ParamLimits

0xba8a,	// (0x00057cce) scroll_pane_cp30

0xba96,	// (0x00057cda) cell_cam4_burst_pane_ParamLimits

0xba96,	// (0x00057cda) cell_cam4_burst_pane

0xe2d9,	// (0x0005a51d) linegrid_cam4_burst_pane_g1_ParamLimits

0xe2d9,	// (0x0005a51d) linegrid_cam4_burst_pane_g1

0xbad2,	// (0x00057d16) linegrid_cam4_burst_pane_g2_ParamLimits

0xbad2,	// (0x00057d16) linegrid_cam4_burst_pane_g2

0xe2e6,	// (0x0005a52a) linegrid_cam4_burst_pane_g3_ParamLimits

0xe2e6,	// (0x0005a52a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0005bc9f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0005bc9f) linegrid_cam4_burst_pane_g

0xbae3,	// (0x00057d27) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbae3,	// (0x00057d27) linegrid_cam4_burst_pane_g3_copy1

0xe2f3,	// (0x0005a537) linegrid_cam4_burst_pane_g4_ParamLimits

0xe2f3,	// (0x0005a537) linegrid_cam4_burst_pane_g4

0xbafd,	// (0x00057d41) linegrid_cam4_burst_pane_g5_ParamLimits

0xbafd,	// (0x00057d41) linegrid_cam4_burst_pane_g5

0xbb0e,	// (0x00057d52) linegrid_cam4_burst_pane_g6_ParamLimits

0xbb0e,	// (0x00057d52) linegrid_cam4_burst_pane_g6

0xe300,	// (0x0005a544) linegrid_cam4_burst_pane_g7_ParamLimits

0xe300,	// (0x0005a544) linegrid_cam4_burst_pane_g7

0xbb1f,	// (0x00057d63) cell_cam4_burst_pane_g1

0xe319,	// (0x0005a55d) main_cam5_pane_t1_ParamLimits

0xe319,	// (0x0005a55d) main_cam5_pane_t1

0xe32b,	// (0x0005a56f) main_cam5_pane_t2_ParamLimits

0xe32b,	// (0x0005a56f) main_cam5_pane_t2

0xe33d,	// (0x0005a581) main_cam5_pane_t3_ParamLimits

0xe33d,	// (0x0005a581) main_cam5_pane_t3

0xe34f,	// (0x0005a593) main_cam5_pane_t4_ParamLimits

0xe34f,	// (0x0005a593) main_cam5_pane_t4

0xe367,	// (0x0005a5ab) main_cam5_pane_t5_ParamLimits

0xe367,	// (0x0005a5ab) main_cam5_pane_t5

0xe37b,	// (0x0005a5bf) main_cam5_pane_t6_ParamLimits

0xe37b,	// (0x0005a5bf) main_cam5_pane_t6

0xe38f,	// (0x0005a5d3) main_cam5_pane_t7_ParamLimits

0xe38f,	// (0x0005a5d3) main_cam5_pane_t7

0xe3a1,	// (0x0005a5e5) main_cam5_pane_t8_ParamLimits

0xe3a1,	// (0x0005a5e5) main_cam5_pane_t8

0xe3bd,	// (0x0005a601) main_cam5_pane_t9_ParamLimits

0xe3bd,	// (0x0005a601) main_cam5_pane_t9

0xe3cf,	// (0x0005a613) main_cam5_pane_t10_ParamLimits

0xe3cf,	// (0x0005a613) main_cam5_pane_t10

0xe3e1,	// (0x0005a625) main_cam5_pane_t11_ParamLimits

0xe3e1,	// (0x0005a625) main_cam5_pane_t11

0xe3f3,	// (0x0005a637) main_cam5_pane_t12_ParamLimits

0xe3f3,	// (0x0005a637) main_cam5_pane_t12

0xe408,	// (0x0005a64c) main_cam5_pane_t13_ParamLimits

0xe408,	// (0x0005a64c) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x0005bcab) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x0005bcab) main_cam5_pane_t

0x5e25,	// (0x00052069) popup_scut_keymap_window_ParamLimits

0x5e25,	// (0x00052069) popup_scut_keymap_window

0xbb32,	// (0x00057d76) aid_size_cell_brow_shortcut

0x2d3c,	// (0x0004ef80) bg_popup_window_pane_cp010

0xbb3e,	// (0x00057d82) grid_scut_pane

0xbb4a,	// (0x00057d8e) cell_scut_pane_ParamLimits

0xbb4a,	// (0x00057d8e) cell_scut_pane

0xbb61,	// (0x00057da5) cell_scut_pane_g1

0xe425,	// (0x0005a669) cell_scut_pane_t1

0xe434,	// (0x0005a678) cell_scut_pane_t2

0xbb6a,	// (0x00057dae) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x0005bcc6) cell_scut_pane_t

0x99f4,	// (0x00055c38) main_mup3_pane_g8_ParamLimits

0x99f4,	// (0x00055c38) main_mup3_pane_g8

0xadf1,	// (0x00057035) area_vitu2_query_pane_ParamLimits

0xadf1,	// (0x00057035) area_vitu2_query_pane

0xb8ca,	// (0x00057b0e) input_focus_pane_cp08

0xe443,	// (0x0005a687) area_vitu2_query_pane_g1

0xbb78,	// (0x00057dbc) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x0005bccd) area_vitu2_query_pane_g

0xbb89,	// (0x00057dcd) area_vitu2_query_pane_t1_ParamLimits

0xbb89,	// (0x00057dcd) area_vitu2_query_pane_t1

0xbb9d,	// (0x00057de1) area_vitu2_query_pane_t2_ParamLimits

0xbb9d,	// (0x00057de1) area_vitu2_query_pane_t2

0xbbb1,	// (0x00057df5) area_vitu2_query_pane_t3_ParamLimits

0xbbb1,	// (0x00057df5) area_vitu2_query_pane_t3

0x0c08,	// (0x0004ce4c) area_vitu2_query_pane_t4_ParamLimits

0x0c08,	// (0x0004ce4c) area_vitu2_query_pane_t4

0x0c30,	// (0x0004ce74) area_vitu2_query_pane_t5_ParamLimits

0x0c30,	// (0x0004ce74) area_vitu2_query_pane_t5

0x0c58,	// (0x0004ce9c) area_vitu2_query_pane_t6_ParamLimits

0x0c58,	// (0x0004ce9c) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x0005bcd2) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x0005bcd2) area_vitu2_query_pane_t

0xbbd9,	// (0x00057e1d) bg_button_pane_cp018

0xbbe7,	// (0x00057e2b) bg_button_pane_cp021

0xbbf3,	// (0x00057e37) bg_button_pane_cp022

0xbc04,	// (0x00057e48) input_focus_pane_cp09

0x7e77,	// (0x000540bb) aid_size_touch_mv_arrow_left

0x7ea0,	// (0x000540e4) aid_size_touch_mv_arrow_right

0xb3cc,	// (0x00057610) main_cset_slider_pane_g16_ParamLimits

0xb3cc,	// (0x00057610) main_cset_slider_pane_g16

0xb3da,	// (0x0005761e) main_cset_slider_pane_g17_ParamLimits

0xb3da,	// (0x0005761e) main_cset_slider_pane_g17

0xbb1f,	// (0x00057d63) cell_cam4_burst_pane_g1_ParamLimits

0x037e,	// (0x0004c5c2) compa_mode_pane

0xb5f8,	// (0x0005783c) popup_vtel_slider_window_g3_ParamLimits

0xb5f8,	// (0x0005783c) popup_vtel_slider_window_g3

0xb60c,	// (0x00057850) popup_vtel_slider_window_g4_ParamLimits

0xb60c,	// (0x00057850) popup_vtel_slider_window_g4

0xb620,	// (0x00057864) popup_vtel_slider_window_t1_ParamLimits

0xb620,	// (0x00057864) popup_vtel_slider_window_t1

0x037e,	// (0x0004c5c2) main_cl_pane

0x4178,	// (0x000503bc) popup_imed_adjust2_window_ParamLimits

0x4150,	// (0x00050394) bg_tb_trans_pane_cp05_ParamLimits

0x4aa4,	// (0x00050ce8) popup_imed_adjust2_window_g1_ParamLimits

0x4ab3,	// (0x00050cf7) popup_imed_adjust2_window_g2_ParamLimits

0x4ab3,	// (0x00050cf7) popup_imed_adjust2_window_g2

0x4abf,	// (0x00050d03) popup_imed_adjust2_window_g3_ParamLimits

0x4abf,	// (0x00050d03) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0005ba3d) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0005ba3d) popup_imed_adjust2_window_g

0x4acb,	// (0x00050d0f) popup_imed_adjust2_window_t1_ParamLimits

0x4ae3,	// (0x00050d27) slider_imed_adjust_pane_ParamLimits

0x4af7,	// (0x00050d3b) slider_imed_adjust_pane_g1_ParamLimits

0x4b07,	// (0x00050d4b) slider_imed_adjust_pane_g2_ParamLimits

0x4b17,	// (0x00050d5b) slider_imed_adjust_pane_g3_ParamLimits

0x4b28,	// (0x00050d6c) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0005ba44) slider_imed_adjust_pane_g_ParamLimits

0xab23,	// (0x00056d67) aid_touch_area_cam4_ParamLimits

0xab23,	// (0x00056d67) aid_touch_area_cam4

0xab33,	// (0x00056d77) battery_pane_cp01

0xabba,	// (0x00056dfe) main_camera4_pane_g6_ParamLimits

0xabba,	// (0x00056dfe) main_camera4_pane_g6

0xabd8,	// (0x00056e1c) main_camera4_pane_t2_ParamLimits

0xabd8,	// (0x00056e1c) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0005bb47) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0005bb47) main_camera4_pane_t

0xac6d,	// (0x00056eb1) aid_touch_area_vid4_ParamLimits

0xac6d,	// (0x00056eb1) aid_touch_area_vid4

0xacad,	// (0x00056ef1) main_video4_pane_g5_ParamLimits

0xacad,	// (0x00056ef1) main_video4_pane_g5

0xaccf,	// (0x00056f13) vid4_progress_pane_ParamLimits

0xaccf,	// (0x00056f13) vid4_progress_pane

0xe149,	// (0x0005a38d) main_cset_slider_pane_g18_ParamLimits

0xe149,	// (0x0005a38d) main_cset_slider_pane_g18

0xe30d,	// (0x0005a551) cell_cam4_burst_pane_g2_ParamLimits

0xe30d,	// (0x0005a551) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0005bca6) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0005bca6) cell_cam4_burst_pane_g

0xbc15,	// (0x00057e59) bg_cl_pane_ParamLimits

0xbc15,	// (0x00057e59) bg_cl_pane

0xbc21,	// (0x00057e65) cl_header_pane_ParamLimits

0xbc21,	// (0x00057e65) cl_header_pane

0xbc2d,	// (0x00057e71) cl_listscroll_pane_ParamLimits

0xbc2d,	// (0x00057e71) cl_listscroll_pane

0xe44f,	// (0x0005a693) bg_cl_pane_g1

0xe457,	// (0x0005a69b) bg_cl_pane_g2

0xe45f,	// (0x0005a6a3) bg_cl_pane_g3

0xe467,	// (0x0005a6ab) bg_cl_pane_g4

0xe46f,	// (0x0005a6b3) bg_cl_pane_g5

0xe477,	// (0x0005a6bb) bg_cl_pane_g6

0xe47f,	// (0x0005a6c3) bg_cl_pane_g7

0xe487,	// (0x0005a6cb) bg_cl_pane_g8

0xe48f,	// (0x0005a6d3) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x0005bce1) bg_cl_pane_g

0xbc39,	// (0x00057e7d) aid_height_cl_leading_ParamLimits

0xbc39,	// (0x00057e7d) aid_height_cl_leading

0xbc45,	// (0x00057e89) aid_height_cl_text_ParamLimits

0xbc45,	// (0x00057e89) aid_height_cl_text

0x0b21,	// (0x0004cd65) bg_cl_header_pane_ParamLimits

0x0b21,	// (0x0004cd65) bg_cl_header_pane

0xbc5d,	// (0x00057ea1) cl_header_pane_g1_ParamLimits

0xbc5d,	// (0x00057ea1) cl_header_pane_g1

0xbc6a,	// (0x00057eae) cl_header_pane_t1_ParamLimits

0xbc6a,	// (0x00057eae) cl_header_pane_t1

0xe497,	// (0x0005a6db) cl_list_pane

0xe11c,	// (0x0005a360) hc_scroll_pane_cp01

0x263f,	// (0x0004e883) bg_cl_header_pane_g1

0xe002,	// (0x0005a246) bg_cl_header_pane_g2

0x265f,	// (0x0004e8a3) bg_cl_header_pane_g3

0xe012,	// (0x0005a256) bg_cl_header_pane_g4

0xe00a,	// (0x0005a24e) bg_cl_header_pane_g5

0xe226,	// (0x0005a46a) bg_cl_header_pane_g6

0xe02a,	// (0x0005a26e) bg_cl_header_pane_g7

0xe032,	// (0x0005a276) bg_cl_header_pane_g8

0xe022,	// (0x0005a266) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x0005bcf4) bg_cl_header_pane_g

0xbc7c,	// (0x00057ec0) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbc7c,	// (0x00057ec0) hc_cl_list_double_graphic_heading_pane

0xbc8d,	// (0x00057ed1) hc_cl_list_single_graphic_pane_ParamLimits

0xbc8d,	// (0x00057ed1) hc_cl_list_single_graphic_pane

0xbca6,	// (0x00057eea) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbca6,	// (0x00057eea) hc_cl_list_single_graphic_pane_g1

0xbcb2,	// (0x00057ef6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbcb2,	// (0x00057ef6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x0005bd07) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x0005bd07) hc_cl_list_single_graphic_pane_g

0xbcc6,	// (0x00057f0a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbcc6,	// (0x00057f0a) hc_cl_list_single_graphic_pane_t1

0xbca6,	// (0x00057eea) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbca6,	// (0x00057eea) hc_cl_list_double_graphic_heading_pane_g1

0xbcdb,	// (0x00057f1f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbcdb,	// (0x00057f1f) hc_cl_list_double_graphic_heading_pane_g2

0xbcef,	// (0x00057f33) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbcef,	// (0x00057f33) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x0005bd0c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x0005bd0c) hc_cl_list_double_graphic_heading_pane_g

0xbd03,	// (0x00057f47) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbd03,	// (0x00057f47) hc_cl_list_double_graphic_heading_pane_t1

0xbd18,	// (0x00057f5c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbd18,	// (0x00057f5c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x0005bd13) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x0005bd13) hc_cl_list_double_graphic_heading_pane_t

0xbd35,	// (0x00057f79) vid4_progress_pane_g1

0xbd45,	// (0x00057f89) vid4_progress_pane_g2

0x2904,	// (0x0004eb48) vid4_progress_pane_g3

0xbd55,	// (0x00057f99) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0005bd18) vid4_progress_pane_g

0xbd73,	// (0x00057fb7) vid4_progress_pane_t1

0xbd88,	// (0x00057fcc) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x0005bd23) vid4_progress_pane_t

0xbdb3,	// (0x00057ff7) wait_bar_pane_cp07

0x438a,	// (0x000505ce) blid_firmament_pane_ParamLimits

0x43cd,	// (0x00050611) popup_blid_sat_info2_window_g1

0x43f1,	// (0x00050635) popup_blid_sat_info2_window_t3

0x43ff,	// (0x00050643) popup_blid_sat_info2_window_t4

0x440d,	// (0x00050651) popup_blid_sat_info2_window_t5

0x441b,	// (0x0005065f) popup_blid_sat_info2_window_t6

0x442b,	// (0x0005066f) popup_blid_sat_info2_window_t7

0x4439,	// (0x0005067d) popup_blid_sat_info2_window_t8

0x4447,	// (0x0005068b) popup_blid_sat_info2_window_t9

0x4455,	// (0x00050699) popup_blid_sat_info2_window_t10

0x4517,	// (0x0005075b) aid_firma_cardinal_ParamLimits

0x452b,	// (0x0005076f) blid_firmament_pane_t1_ParamLimits

0x4542,	// (0x00050786) blid_firmament_pane_t2_ParamLimits

0x4559,	// (0x0005079d) blid_firmament_pane_t3_ParamLimits

0x4570,	// (0x000507b4) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0005b936) blid_firmament_pane_t_ParamLimits

0x4587,	// (0x000507cb) blid_sat_info_pane_ParamLimits

0x334c,	// (0x0004f590) main_cam_set_pane_ParamLimits

0xa19e,	// (0x000563e2) aid_size_cell_colour_35_ParamLimits

0xa1b8,	// (0x000563fc) aid_size_cell_colour_112_ParamLimits

0xa1cf,	// (0x00056413) aid_size_cell_effect_ParamLimits

0x334c,	// (0x0004f590) bg_tb_trans_pane_cp02_ParamLimits

0x335a,	// (0x0004f59e) heading_imed_pane_ParamLimits

0xa1e9,	// (0x0005642d) listscroll_imed_pane_ParamLimits

0x3782,	// (0x0004f9c6) popup_call2_audio_first_window_g5_ParamLimits

0x3782,	// (0x0004f9c6) popup_call2_audio_first_window_g5

0xa8d2,	// (0x00056b16) aid_size_touch_image3_arrow_left_ParamLimits

0xa8d2,	// (0x00056b16) aid_size_touch_image3_arrow_left

0xa8e8,	// (0x00056b2c) aid_size_touch_image3_arrow_right_ParamLimits

0xa8e8,	// (0x00056b2c) aid_size_touch_image3_arrow_right

0xbd9e,	// (0x00057fe2) vid4_progress_pane_t3

0xa487,	// (0x000566cb) main_hwr_training_symbol_option_pane_ParamLimits

0xa487,	// (0x000566cb) main_hwr_training_symbol_option_pane

0x4d91,	// (0x00050fd5) popup_hwr_training_preview_window_ParamLimits

0x4d91,	// (0x00050fd5) popup_hwr_training_preview_window

0xa4e8,	// (0x0005672c) hwr_training_navi_pane_g5_ParamLimits

0xa4e8,	// (0x0005672c) hwr_training_navi_pane_g5

0xdff0,	// (0x0005a234) popup_char_count_window

0xb716,	// (0x0005795a) bg_popup_sub_pane_cp20_ParamLimits

0xb724,	// (0x00057968) list_vitu2_match_list_pane_ParamLimits

0xb730,	// (0x00057974) vitu2_page_scroll_pane_ParamLimits

0xb730,	// (0x00057974) vitu2_page_scroll_pane

0xe4a0,	// (0x0005a6e4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe4a0,	// (0x0005a6e4) list_single_hwr_training_symbol_option_pane

0xe4b3,	// (0x0005a6f7) list_single_hwr_training_symbol_option_pane_g1

0xe4bb,	// (0x0005a6ff) list_single_hwr_training_symbol_option_pane_t1

0xe4c9,	// (0x0005a70d) bg_button_pane_cp023

0xe4d2,	// (0x0005a716) bg_button_pane_cp024

0xbdc5,	// (0x00058009) vitu2_page_scroll_pane_g1

0xbdcd,	// (0x00058011) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x0005bd2a) vitu2_page_scroll_pane_g

0xbdd5,	// (0x00058019) vitu2_page_scroll_pane_t1

0xe505,	// (0x0005a749) popup_char_count_window_g1

0xe50e,	// (0x0005a752) popup_char_count_window_g2

0xe517,	// (0x0005a75b) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x0005bd2f) popup_char_count_window_g

0xe520,	// (0x0005a764) popup_char_count_window_t1

0x037e,	// (0x0004c5c2) main_vded2_pane

0x4a90,	// (0x00050cd4) aid_size_cell_imed_line

0x4a9a,	// (0x00050cde) grid_imed_line_width_pane

0xad46,	// (0x00056f8a) vid4_indicators_pane_g4

0xe52e,	// (0x0005a772) cell_imed_line_width_pane_ParamLimits

0xe52e,	// (0x0005a772) cell_imed_line_width_pane

0xe542,	// (0x0005a786) cell_imed_line_width_pane_g1

0x45c1,	// (0x00050805) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0005bd36) cell_imed_line_width_pane_g

0xbde4,	// (0x00058028) main_vded2_pane_g1_ParamLimits

0xbde4,	// (0x00058028) main_vded2_pane_g1

0xbdf1,	// (0x00058035) main_vded2_pane_g2_ParamLimits

0xbdf1,	// (0x00058035) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x0005bd3b) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x0005bd3b) main_vded2_pane_g

0xbdff,	// (0x00058043) vded2_slider_pane_ParamLimits

0xbdff,	// (0x00058043) vded2_slider_pane

0xbe0c,	// (0x00058050) aid_size_touch_vded2_end

0xbe16,	// (0x0005805a) aid_size_touch_vded2_playhead

0xe54b,	// (0x0005a78f) aid_size_touch_vded2_start

0xe553,	// (0x0005a797) vded2_slider_bg_pane

0xe55c,	// (0x0005a7a0) vded2_slider_pane_g1

0xe565,	// (0x0005a7a9) vded2_slider_pane_g2

0xbe1e,	// (0x00058062) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x0005bd40) vded2_slider_pane_g

0xe56d,	// (0x0005a7b1) vded2_slider_bg_pane_g1

0xe576,	// (0x0005a7ba) vded2_slider_bg_pane_g2

0xe57f,	// (0x0005a7c3) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0005bd47) vded2_slider_bg_pane_g

0x85ce,	// (0x00054812) aid_postcard_touch_down_pane_ParamLimits

0x85ce,	// (0x00054812) aid_postcard_touch_down_pane

0x85de,	// (0x00054822) aid_postcard_touch_up_pane_ParamLimits

0x85de,	// (0x00054822) aid_postcard_touch_up_pane

0x037e,	// (0x0004c5c2) main_blid2_pane

0x415e,	// (0x000503a2) popup_blid2_search_window

0x037e,	// (0x0004c5c2) blid2_gps_pane

0x037e,	// (0x0004c5c2) blid2_navig_pane

0x037e,	// (0x0004c5c2) blid2_search_pane

0x037e,	// (0x0004c5c2) blid2_tripm_pane

0xbe27,	// (0x0005806b) blid2_search_pane_g1_ParamLimits

0xbe27,	// (0x0005806b) blid2_search_pane_g1

0xbe37,	// (0x0005807b) blid2_search_pane_t1_ParamLimits

0xbe37,	// (0x0005807b) blid2_search_pane_t1

0xbe49,	// (0x0005808d) aid_size_cell_blid2_gps_ParamLimits

0xbe49,	// (0x0005808d) aid_size_cell_blid2_gps

0xbe59,	// (0x0005809d) blid2_gps_pane_g1_ParamLimits

0xbe59,	// (0x0005809d) blid2_gps_pane_g1

0xbe65,	// (0x000580a9) grid_blid2_satellite_pane_ParamLimits

0xbe65,	// (0x000580a9) grid_blid2_satellite_pane

0xbe75,	// (0x000580b9) blid2_navig_pane_g1_ParamLimits

0xbe75,	// (0x000580b9) blid2_navig_pane_g1

0xbe81,	// (0x000580c5) blid2_navig_pane_t1_ParamLimits

0xbe81,	// (0x000580c5) blid2_navig_pane_t1

0xbe93,	// (0x000580d7) blid2_navig_pane_t2_ParamLimits

0xbe93,	// (0x000580d7) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x0005bd4e) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x0005bd4e) blid2_navig_pane_t

0xbea5,	// (0x000580e9) blid2_navig_ring_pane_ParamLimits

0xbea5,	// (0x000580e9) blid2_navig_ring_pane

0xbeb5,	// (0x000580f9) blid2_speed_pane_ParamLimits

0xbeb5,	// (0x000580f9) blid2_speed_pane

0xbec1,	// (0x00058105) blid2_tripm_pane_g1_ParamLimits

0xbec1,	// (0x00058105) blid2_tripm_pane_g1

0xbed1,	// (0x00058115) blid2_tripm_pane_g2_ParamLimits

0xbed1,	// (0x00058115) blid2_tripm_pane_g2

0xbedd,	// (0x00058121) blid2_tripm_pane_g3_ParamLimits

0xbedd,	// (0x00058121) blid2_tripm_pane_g3

0xbee9,	// (0x0005812d) blid2_tripm_pane_g4_ParamLimits

0xbee9,	// (0x0005812d) blid2_tripm_pane_g4

0xbef5,	// (0x00058139) blid2_tripm_pane_g5_ParamLimits

0xbef5,	// (0x00058139) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x0005bd53) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x0005bd53) blid2_tripm_pane_g

0xbf11,	// (0x00058155) blid2_tripm_pane_t1_ParamLimits

0xbf11,	// (0x00058155) blid2_tripm_pane_t1

0xbf25,	// (0x00058169) blid2_tripm_pane_t2_ParamLimits

0xbf25,	// (0x00058169) blid2_tripm_pane_t2

0xbf37,	// (0x0005817b) blid2_tripm_pane_t3_ParamLimits

0xbf37,	// (0x0005817b) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x0005bd60) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x0005bd60) blid2_tripm_pane_t

0xbf69,	// (0x000581ad) cell_blid2_satellite_pane_ParamLimits

0xbf69,	// (0x000581ad) cell_blid2_satellite_pane

0xbf83,	// (0x000581c7) cell_blid2_satellite_pane_g1

0xe588,	// (0x0005a7cc) cell_blid2_satellite_pane_t1

0x4597,	// (0x000507db) blid2_speed_pane_g1

0xe596,	// (0x0005a7da) blid2_speed_pane_t1

0xe5a4,	// (0x0005a7e8) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x0005bd69) blid2_speed_pane_t

0x4597,	// (0x000507db) blid2_navig_ring_pane_g1

0xbf8c,	// (0x000581d0) blid2_navig_ring_pane_g2

0xbf94,	// (0x000581d8) blid2_navig_ring_pane_g3

0xbf9c,	// (0x000581e0) blid2_navig_ring_pane_g4

0xbfa4,	// (0x000581e8) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x0005bd6e) blid2_navig_ring_pane_g

0x037e,	// (0x0004c5c2) bg_popup_window_pane_cp011

0xe5b2,	// (0x0005a7f6) popup_blid2_search_window_g1

0xe5ba,	// (0x0005a7fe) popup_blid2_search_window_t1

0xe5c8,	// (0x0005a80c) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x0005bd79) popup_blid2_search_window_t

0x254e,	// (0x0004e792) main_browser_pane_g1

0x2269,	// (0x0004e4ad) main_browser_pane_ParamLimits

0xacfb,	// (0x00056f3f) bg_button_pane_cp011_ParamLimits

0xafed,	// (0x00057231) cell_vitu2_function_pane_g1_ParamLimits

0x4150,	// (0x00050394) bg_popup_sub_pane_cp22_ParamLimits

0xb8ca,	// (0x00057b0e) input_focus_pane_cp08_ParamLimits

0xb8e1,	// (0x00057b25) popup_vitu2_query_button_pane_ParamLimits

0xb8e1,	// (0x00057b25) popup_vitu2_query_button_pane

0xb8f2,	// (0x00057b36) popup_vitu2_query_input_button_pane

0xe263,	// (0x0005a4a7) popup_vitu2_query_window_g1_ParamLimits

0xb8fc,	// (0x00057b40) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0005bc7a) popup_vitu2_query_window_g_ParamLimits

0x037e,	// (0x0004c5c2) bg_button_pane_cp026

0xbfac,	// (0x000581f0) popup_vitu2_query_input_button_pane_g1

0x037e,	// (0x0004c5c2) bg_button_pane_cp025

0xe5d6,	// (0x0005a81a) popup_vitu2_query_button_pane_t1

0x9713,	// (0x00055957) main_mp3_pane_t6

0x9723,	// (0x00055967) popup_slider_window_cp01

0xac1c,	// (0x00056e60) cam4_battery_pane

0xad09,	// (0x00056f4d) cam4_battery_pane_cp02

0xbd2d,	// (0x00057f71) cam4_battery_pane_cp01

0xbd2d,	// (0x00057f71) cam4_battery_pane_cp03

0xde98,	// (0x0005a0dc) cam4_battery_pane_g1

0x4597,	// (0x000507db) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x0005bd7e) cam4_battery_pane_g

0x4463,	// (0x000506a7) popup_blid_sat_info2_window_t11

0x7e77,	// (0x000540bb) aid_size_touch_mv_arrow_left_ParamLimits

0x7ea0,	// (0x000540e4) aid_size_touch_mv_arrow_right_ParamLimits

0x2c9c,	// (0x0004eee0) navi_pane_g1_ParamLimits

0x7edf,	// (0x00054123) navi_pane_g2_ParamLimits

0x7f0d,	// (0x00054151) navi_pane_g3_ParamLimits

0xf404,	// (0x0005b648) navi_pane_g_ParamLimits

0x7f67,	// (0x000541ab) navi_pane_mv_t1_ParamLimits

0xa1f5,	// (0x00056439) grid_imed_effect_pane_ParamLimits

0x6bd5,	// (0x00052e19) aid_placing_vt_slider_lsc

0x249d,	// (0x0004e6e1) aid_placing_vt_slider_prt

0x334c,	// (0x0004f590) bg_tb_trans_pane_cp01_ParamLimits

0x472b,	// (0x0005096f) popup_image_details_window_g1_ParamLimits

0x473e,	// (0x00050982) popup_image_details_window_g2_ParamLimits

0x4753,	// (0x00050997) popup_image_details_window_g3_ParamLimits

0x4753,	// (0x00050997) popup_image_details_window_g3

0xf737,	// (0x0005b97b) popup_image_details_window_g_ParamLimits

0x4767,	// (0x000509ab) popup_image_details_window_t1_ParamLimits

0x4779,	// (0x000509bd) popup_image_details_window_t2_ParamLimits

0x4792,	// (0x000509d6) popup_image_details_window_t3_ParamLimits

0x47a6,	// (0x000509ea) popup_image_details_window_t4_ParamLimits

0x47c1,	// (0x00050a05) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0005b982) popup_image_details_window_t_ParamLimits

0xbc51,	// (0x00057e95) cl_header_name_pane_ParamLimits

0xbc51,	// (0x00057e95) cl_header_name_pane

0xbfb4,	// (0x000581f8) cl_header_name_pane_t1_ParamLimits

0xbfb4,	// (0x000581f8) cl_header_name_pane_t1

0xbfcb,	// (0x0005820f) cl_header_name_pane_t2_ParamLimits

0xbfcb,	// (0x0005820f) cl_header_name_pane_t2

0xbff5,	// (0x00058239) cl_header_name_pane_t3_ParamLimits

0xbff5,	// (0x00058239) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x0005bd83) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x0005bd83) cl_header_name_pane_t

0x7f38,	// (0x0005417c) navi_pane_mv_g2_ParamLimits

0xdfca,	// (0x0005a20e) field_vitu2_entry_pane_g1_ParamLimits

0xdfd6,	// (0x0005a21a) field_vitu2_entry_pane_g2_ParamLimits

0xdfe2,	// (0x0005a226) field_vitu2_entry_pane_g3_ParamLimits

0xdfe2,	// (0x0005a226) field_vitu2_entry_pane_g3

0xf935,	// (0x0005bb79) field_vitu2_entry_pane_g_ParamLimits

0xaf7d,	// (0x000571c1) cell_vitu2_itu_pane_g1_ParamLimits

0xaf8d,	// (0x000571d1) cell_vitu2_itu_pane_g2_ParamLimits

0xaf8d,	// (0x000571d1) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0005bb85) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0005bb85) cell_vitu2_itu_pane_g

0xacfb,	// (0x00056f3f) bg_vkb2_func_pane_cp05_ParamLimits

0xacfb,	// (0x00056f3f) bg_vkb2_func_pane_cp05

0xacfb,	// (0x00056f3f) bg_vkb2_func_pane_cp03

0xacfb,	// (0x00056f3f) bg_vkb2_func_pane_cp04

0xacfb,	// (0x00056f3f) bg_vkb2_func_pane_cp10_ParamLimits

0xacfb,	// (0x00056f3f) bg_vkb2_func_pane_cp10

0xbbf3,	// (0x00057e37) bg_vkb2_func_pane_cp08

0xbbd9,	// (0x00057e1d) bg_vkb2_func_pane_cp06

0xbbe7,	// (0x00057e2b) bg_vkb2_func_pane_cp07

0xe4db,	// (0x0005a71f) bg_vkb2_func_pane_cp11_ParamLimits

0xe4db,	// (0x0005a71f) bg_vkb2_func_pane_cp11

0xe4f0,	// (0x0005a734) bg_vkb2_func_pane_cp12_ParamLimits

0xe4f0,	// (0x0005a734) bg_vkb2_func_pane_cp12

0x037e,	// (0x0004c5c2) bg_vkb2_func_pane_cp09

0xe002,	// (0x0005a246) bg_vkb2_func_pane_g1

0x265f,	// (0x0004e8a3) bg_vkb2_func_pane_g2

0xe00a,	// (0x0005a24e) bg_vkb2_func_pane_g3

0xe012,	// (0x0005a256) bg_vkb2_func_pane_g4

0xe226,	// (0x0005a46a) bg_vkb2_func_pane_g5

0xe02a,	// (0x0005a26e) bg_vkb2_func_pane_g6

0xe032,	// (0x0005a276) bg_vkb2_func_pane_g7

0xe022,	// (0x0005a266) bg_vkb2_func_pane_g8

0x263f,	// (0x0004e883) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x0005bd8a) bg_vkb2_func_pane_g

0xbf03,	// (0x00058147) blid2_tripm_pane_g6_ParamLimits

0xbf03,	// (0x00058147) blid2_tripm_pane_g6

0xde52,	// (0x0005a096) mp4_progress_pane_g1

0xbf5d,	// (0x000581a1) blid2_tripm_values_pane_ParamLimits

0xbf5d,	// (0x000581a1) blid2_tripm_values_pane

0xc01a,	// (0x0005825e) blid2_tripm_values_pane_t1

0xc028,	// (0x0005826c) blid2_tripm_values_pane_t2

0xc036,	// (0x0005827a) blid2_tripm_values_pane_t3

0xc044,	// (0x00058288) blid2_tripm_values_pane_t4

0xc052,	// (0x00058296) blid2_tripm_values_pane_t5

0xc060,	// (0x000582a4) blid2_tripm_values_pane_t6

0xc06e,	// (0x000582b2) blid2_tripm_values_pane_t7

0xc07c,	// (0x000582c0) blid2_tripm_values_pane_t8

0xc08a,	// (0x000582ce) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x0005bd9d) blid2_tripm_values_pane_t

0x6c15,	// (0x00052e59) call_video_pane_t1_ParamLimits

0x6c36,	// (0x00052e7a) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0005b4d1) call_video_pane_t_ParamLimits

0x849f,	// (0x000546e3) msg_header_pane_g1_ParamLimits

0x2ec5,	// (0x0004f109) msg_header_pane_g2_ParamLimits

0x2ec5,	// (0x0004f109) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0005b6eb) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0005b6eb) msg_header_pane_g

0x2269,	// (0x0004e4ad) main_clock2_pane_ParamLimits

0x9f9b,	// (0x000561df) grid_clock2_toolbar_pane_ParamLimits

0x9f9b,	// (0x000561df) grid_clock2_toolbar_pane

0x9f9b,	// (0x000561df) listscroll_clock2_pane_ParamLimits

0x9f9b,	// (0x000561df) listscroll_clock2_pane

0xa032,	// (0x00056276) main_clock2_pane_t3_ParamLimits

0xa032,	// (0x00056276) main_clock2_pane_t3

0xa044,	// (0x00056288) main_clock2_pane_t4_ParamLimits

0xa044,	// (0x00056288) main_clock2_pane_t4

0xe5e4,	// (0x0005a828) cell_clock2_toolbar_pane

0xe5ec,	// (0x0005a830) cell_clock2_toolbar_pane_cp01

0xe5ec,	// (0x0005a830) cell_clock2_toolbar_pane_cp02

0xe5f4,	// (0x0005a838) cell_clock2_toolbar_pane_cp03

0xe5fc,	// (0x0005a840) list_clock2_pane

0x2bf3,	// (0x0004ee37) scroll_pane_cp10

0xe604,	// (0x0005a848) list_single_clock2_pane_ParamLimits

0xe604,	// (0x0005a848) list_single_clock2_pane

0x2d3c,	// (0x0004ef80) list_highlight_pane_cp08

0xe611,	// (0x0005a855) list_single_clock2_pane_t1

0xe61f,	// (0x0005a863) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x0005bdb0) list_single_clock2_pane_t

0x037e,	// (0x0004c5c2) bg_button_pane_cp10

0xe62d,	// (0x0005a871) cell_clock2_toolbar_pane_g1

0x853c,	// (0x00054780) aid_main_viewer_pane_g1_ParamLimits

0x853c,	// (0x00054780) aid_main_viewer_pane_g1

0x8548,	// (0x0005478c) aid_main_viewer_pane_g2_ParamLimits

0x8548,	// (0x0005478c) aid_main_viewer_pane_g2

0x8554,	// (0x00054798) aid_main_viewer_pane_g3_ParamLimits

0x8554,	// (0x00054798) aid_main_viewer_pane_g3

0x8565,	// (0x000547a9) aid_main_viewer_pane_g4_ParamLimits

0x8565,	// (0x000547a9) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0005b6fc) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0005b6fc) aid_main_viewer_pane_g

0x8cd9,	// (0x00054f1d) main_calc_pane_ParamLimits

0x8ce6,	// (0x00054f2a) main_dialer2_pane_ParamLimits

0x037e,	// (0x0004c5c2) main_cam6_pane

0x037e,	// (0x0004c5c2) main_vid6_pane

0x9fa7,	// (0x000561eb) listscroll_gen_pane_cp06_ParamLimits

0x9fa7,	// (0x000561eb) listscroll_gen_pane_cp06

0xa056,	// (0x0005629a) main_clock2_pane_t5_ParamLimits

0xa056,	// (0x0005629a) main_clock2_pane_t5

0xa09f,	// (0x000562e3) aid_call2_pane_cp10_ParamLimits

0xa0b1,	// (0x000562f5) aid_call_pane_cp10_ParamLimits

0x2c71,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2c71,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa0c3,	// (0x00056307) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa0c3,	// (0x00056307) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2c71,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0005ba32) popup_clock_analogue_window_cp10_g_ParamLimits

0xa0d5,	// (0x00056319) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa87f,	// (0x00056ac3) cell_dialer2_keypad_pane_g2_ParamLimits

0xa87f,	// (0x00056ac3) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0005bb18) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0005bb18) cell_dialer2_keypad_pane_g

0xa89b,	// (0x00056adf) cell_dialer2_keypad_pane_t1

0xb2b8,	// (0x000574fc) main_cset_text2_pane_ParamLimits

0xb2b8,	// (0x000574fc) main_cset_text2_pane

0xe443,	// (0x0005a687) area_vitu2_query_pane_g1_ParamLimits

0xbb78,	// (0x00057dbc) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x0005bccd) area_vitu2_query_pane_g_ParamLimits

0x0c80,	// (0x0004cec4) area_vitu2_query_pane_t7_ParamLimits

0x0c80,	// (0x0004cec4) area_vitu2_query_pane_t7

0xbbd9,	// (0x00057e1d) bg_button_pane_cp018_ParamLimits

0xbbe7,	// (0x00057e2b) bg_button_pane_cp021_ParamLimits

0xbbf3,	// (0x00057e37) bg_button_pane_cp022_ParamLimits

0xbbf3,	// (0x00057e37) bg_vkb2_func_pane_cp08_ParamLimits

0xbbd9,	// (0x00057e1d) bg_vkb2_func_pane_cp06_ParamLimits

0xbbe7,	// (0x00057e2b) bg_vkb2_func_pane_cp07_ParamLimits

0xbc04,	// (0x00057e48) input_focus_pane_cp09_ParamLimits

0xc098,	// (0x000582dc) cam6_autofocus_pane_ParamLimits

0xc098,	// (0x000582dc) cam6_autofocus_pane

0xc0ba,	// (0x000582fe) cam6_image_uncrop_pane_ParamLimits

0xc0ba,	// (0x000582fe) cam6_image_uncrop_pane

0xc0e7,	// (0x0005832b) cam6_indi_pane_ParamLimits

0xc0e7,	// (0x0005832b) cam6_indi_pane

0xc101,	// (0x00058345) cam6_mode_pane_ParamLimits

0xc101,	// (0x00058345) cam6_mode_pane

0xc115,	// (0x00058359) cam6_timer_pane_ParamLimits

0xc115,	// (0x00058359) cam6_timer_pane

0xc121,	// (0x00058365) cam6_zoom_pane_ParamLimits

0xc121,	// (0x00058365) cam6_zoom_pane

0xc139,	// (0x0005837d) cam6_mode_pane_g1_ParamLimits

0xc139,	// (0x0005837d) cam6_mode_pane_g1

0xc145,	// (0x00058389) cam6_mode_pane_g2_ParamLimits

0xc145,	// (0x00058389) cam6_mode_pane_g2

0xc151,	// (0x00058395) cam6_mode_pane_g3_ParamLimits

0xc151,	// (0x00058395) cam6_mode_pane_g3

0xc15d,	// (0x000583a1) cam6_mode_pane_g4_ParamLimits

0xc15d,	// (0x000583a1) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x0005bdb5) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x0005bdb5) cam6_mode_pane_g

0xdea2,	// (0x0005a0e6) bg_tb_trans_pane_cp08_ParamLimits

0xdea2,	// (0x0005a0e6) bg_tb_trans_pane_cp08

0xe635,	// (0x0005a879) cam6_battery_pane_ParamLimits

0xe635,	// (0x0005a879) cam6_battery_pane

0xe64b,	// (0x0005a88f) cam6_indi_pane_g1_ParamLimits

0xe64b,	// (0x0005a88f) cam6_indi_pane_g1

0xe65d,	// (0x0005a8a1) cam6_indi_pane_g2_ParamLimits

0xe65d,	// (0x0005a8a1) cam6_indi_pane_g2

0xe66f,	// (0x0005a8b3) cam6_indi_pane_g3_ParamLimits

0xe66f,	// (0x0005a8b3) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x0005bdbe) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0005bdbe) cam6_indi_pane_g

0xe681,	// (0x0005a8c5) cam6_indi_pane_t1_ParamLimits

0xe681,	// (0x0005a8c5) cam6_indi_pane_t1

0xad83,	// (0x00056fc7) cam6_autofocus_pane_g1

0xad7b,	// (0x00056fbf) cam6_autofocus_pane_g2

0xad93,	// (0x00056fd7) cam6_autofocus_pane_g3

0xad8b,	// (0x00056fcf) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x0005bdc5) cam6_autofocus_pane_g

0xe6a7,	// (0x0005a8eb) cam6_timer_pane_g1

0xe6af,	// (0x0005a8f3) cam6_timer_pane_t1

0xe6bd,	// (0x0005a901) cam6_zoom_cont_pane

0xe6c5,	// (0x0005a909) cam6_zoom_pane_g1

0xe6cd,	// (0x0005a911) cam6_zoom_pane_g2

0xc169,	// (0x000583ad) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x0005bdce) cam6_zoom_pane_g

0x4597,	// (0x000507db) cam6_battery_pane_g1

0x4597,	// (0x000507db) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0005b93f) cam6_battery_pane_g

0xe6d5,	// (0x0005a919) cam6_zoom_cont_pane_g1

0xe6de,	// (0x0005a922) cam6_zoom_cont_pane_g2

0xe6e7,	// (0x0005a92b) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x0005bdd5) cam6_zoom_cont_pane_g

0xc186,	// (0x000583ca) cam6_mode_pane_cp_ParamLimits

0xc186,	// (0x000583ca) cam6_mode_pane_cp

0xc19a,	// (0x000583de) cam6_zoom_pane_cp_ParamLimits

0xc19a,	// (0x000583de) cam6_zoom_pane_cp

0xc1b2,	// (0x000583f6) vid6_image_uncrop_cif_pane_ParamLimits

0xc1b2,	// (0x000583f6) vid6_image_uncrop_cif_pane

0xc1de,	// (0x00058422) vid6_image_uncrop_nhd_pane_ParamLimits

0xc1de,	// (0x00058422) vid6_image_uncrop_nhd_pane

0xc1fb,	// (0x0005843f) vid6_image_uncrop_vga_pane_ParamLimits

0xc1fb,	// (0x0005843f) vid6_image_uncrop_vga_pane

0xc21a,	// (0x0005845e) vid6_image_uncrop_wvga_pane_ParamLimits

0xc21a,	// (0x0005845e) vid6_image_uncrop_wvga_pane

0xc237,	// (0x0005847b) vid6_indi_pane_ParamLimits

0xc237,	// (0x0005847b) vid6_indi_pane

0xdea2,	// (0x0005a0e6) bg_tb_trans_pane_cp09_ParamLimits

0xdea2,	// (0x0005a0e6) bg_tb_trans_pane_cp09

0xe6ff,	// (0x0005a943) cam6_battery_pane_cp_ParamLimits

0xe6ff,	// (0x0005a943) cam6_battery_pane_cp

0xe70b,	// (0x0005a94f) vid6_indi_pane_g1_ParamLimits

0xe70b,	// (0x0005a94f) vid6_indi_pane_g1

0xe71d,	// (0x0005a961) vid6_indi_pane_g2_ParamLimits

0xe71d,	// (0x0005a961) vid6_indi_pane_g2

0xe72f,	// (0x0005a973) vid6_indi_pane_g3_ParamLimits

0xe72f,	// (0x0005a973) vid6_indi_pane_g3

0xe744,	// (0x0005a988) vid6_indi_pane_g4_ParamLimits

0xe744,	// (0x0005a988) vid6_indi_pane_g4

0xe759,	// (0x0005a99d) vid6_indi_pane_g5_ParamLimits

0xe759,	// (0x0005a99d) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x0005bddc) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x0005bddc) vid6_indi_pane_g

0xe773,	// (0x0005a9b7) vid6_indi_pane_t1_ParamLimits

0xe773,	// (0x0005a9b7) vid6_indi_pane_t1

0xe789,	// (0x0005a9cd) vid6_indi_pane_t2_ParamLimits

0xe789,	// (0x0005a9cd) vid6_indi_pane_t2

0xe7b1,	// (0x0005a9f5) vid6_indi_pane_t3_ParamLimits

0xe7b1,	// (0x0005a9f5) vid6_indi_pane_t3

0xe7d9,	// (0x0005aa1d) vid6_indi_pane_t4_ParamLimits

0xe7d9,	// (0x0005aa1d) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x0005bde7) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x0005bde7) vid6_indi_pane_t

0xe7fd,	// (0x0005aa41) wait_bar_pane_cp08

0xc25c,	// (0x000584a0) main_cset_text2_pane_t1_ParamLimits

0xc25c,	// (0x000584a0) main_cset_text2_pane_t1

0xc171,	// (0x000583b5) listscroll_gen_pane_cp06_t1_ParamLimits

0xc171,	// (0x000583b5) listscroll_gen_pane_cp06_t1

0x037e,	// (0x0004c5c2) main_cam6_set_pane

0xac0e,	// (0x00056e52) bg_tb_trans_pane_cp06_ParamLimits

0xac24,	// (0x00056e68) cam4_indicators_pane_g1_ParamLimits

0xac35,	// (0x00056e79) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0005bb55) cam4_indicators_pane_g_ParamLimits

0xac53,	// (0x00056e97) cam4_indicators_pane_t1_ParamLimits

0xacfb,	// (0x00056f3f) bg_tb_trans_pane_cp07_ParamLimits

0xad13,	// (0x00056f57) vid4_indicators_pane_g1_ParamLimits

0xad24,	// (0x00056f68) vid4_indicators_pane_g2_ParamLimits

0xad35,	// (0x00056f79) vid4_indicators_pane_g3_ParamLimits

0xad46,	// (0x00056f8a) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0005bb67) vid4_indicators_pane_g_ParamLimits

0xad62,	// (0x00056fa6) vid4_indicators_pane_t1_ParamLimits

0xbd35,	// (0x00057f79) vid4_progress_pane_g1_ParamLimits

0xbd45,	// (0x00057f89) vid4_progress_pane_g2_ParamLimits

0x2904,	// (0x0004eb48) vid4_progress_pane_g3_ParamLimits

0xbd55,	// (0x00057f99) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0005bd18) vid4_progress_pane_g_ParamLimits

0xbd73,	// (0x00057fb7) vid4_progress_pane_t1_ParamLimits

0xbd88,	// (0x00057fcc) vid4_progress_pane_t2_ParamLimits

0xbd9e,	// (0x00057fe2) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x0005bd23) vid4_progress_pane_t_ParamLimits

0xbdb3,	// (0x00057ff7) wait_bar_pane_cp07_ParamLimits

0xc28f,	// (0x000584d3) main_cam6_set_pane_g2_ParamLimits

0xc28f,	// (0x000584d3) main_cam6_set_pane_g2

0xc29b,	// (0x000584df) main_cset6_listscroll_pane_ParamLimits

0xc29b,	// (0x000584df) main_cset6_listscroll_pane

0xc2c6,	// (0x0005850a) main_cset6_slider_pane_ParamLimits

0xc2c6,	// (0x0005850a) main_cset6_slider_pane

0xc2d2,	// (0x00058516) main_cset6_text2_pane_ParamLimits

0xc2d2,	// (0x00058516) main_cset6_text2_pane

0xe80c,	// (0x0005aa50) main_cset6_text_pane

0xe814,	// (0x0005aa58) main_cset_list_pane_copy1_ParamLimits

0xe814,	// (0x0005aa58) main_cset_list_pane_copy1

0xe824,	// (0x0005aa68) scroll_pane_cp028_copy1

0xc2e5,	// (0x00058529) cset_list_set_pane_copy1

0xc2f8,	// (0x0005853c) aid_position_infowindow_above_copy1

0xc300,	// (0x00058544) aid_position_infowindow_below_copy1

0xc308,	// (0x0005854c) cset_list_set_pane_g1_copy1

0x0b62,	// (0x0004cda6) cset_list_set_pane_g3_copy1_ParamLimits

0x0b62,	// (0x0004cda6) cset_list_set_pane_g3_copy1

0x0b71,	// (0x0004cdb5) cset_list_set_pane_t1_copy1_ParamLimits

0x0b71,	// (0x0004cdb5) cset_list_set_pane_t1_copy1

0x334c,	// (0x0004f590) list_highlight_pane_cp021_copy1_ParamLimits

0x334c,	// (0x0004f590) list_highlight_pane_cp021_copy1

0xe82d,	// (0x0005aa71) cset6_slider_pane_ParamLimits

0xe82d,	// (0x0005aa71) cset6_slider_pane

0xe859,	// (0x0005aa9d) main_cset6_slider_pane_g1_ParamLimits

0xe859,	// (0x0005aa9d) main_cset6_slider_pane_g1

0xc310,	// (0x00058554) main_cset6_slider_pane_g2_ParamLimits

0xc310,	// (0x00058554) main_cset6_slider_pane_g2

0xe881,	// (0x0005aac5) main_cset6_slider_pane_g3_ParamLimits

0xe881,	// (0x0005aac5) main_cset6_slider_pane_g3

0xc338,	// (0x0005857c) main_cset6_slider_pane_g4_ParamLimits

0xc338,	// (0x0005857c) main_cset6_slider_pane_g4

0xc344,	// (0x00058588) main_cset6_slider_pane_g5_ParamLimits

0xc344,	// (0x00058588) main_cset6_slider_pane_g5

0xe131,	// (0x0005a375) main_cset6_slider_pane_g7_ParamLimits

0xe131,	// (0x0005a375) main_cset6_slider_pane_g7

0xe13d,	// (0x0005a381) main_cset6_slider_pane_g8_ParamLimits

0xe13d,	// (0x0005a381) main_cset6_slider_pane_g8

0xc352,	// (0x00058596) main_cset6_slider_pane_g9_ParamLimits

0xc352,	// (0x00058596) main_cset6_slider_pane_g9

0xc35e,	// (0x000585a2) main_cset6_slider_pane_g10_ParamLimits

0xc35e,	// (0x000585a2) main_cset6_slider_pane_g10

0xc36a,	// (0x000585ae) main_cset6_slider_pane_g11_ParamLimits

0xc36a,	// (0x000585ae) main_cset6_slider_pane_g11

0xc376,	// (0x000585ba) main_cset6_slider_pane_g12_ParamLimits

0xc376,	// (0x000585ba) main_cset6_slider_pane_g12

0xc382,	// (0x000585c6) main_cset6_slider_pane_g13_ParamLimits

0xc382,	// (0x000585c6) main_cset6_slider_pane_g13

0xc38e,	// (0x000585d2) main_cset6_slider_pane_g14_ParamLimits

0xc38e,	// (0x000585d2) main_cset6_slider_pane_g14

0xc39a,	// (0x000585de) main_cset6_slider_pane_g15_ParamLimits

0xc39a,	// (0x000585de) main_cset6_slider_pane_g15

0xc3b2,	// (0x000585f6) main_cset6_slider_pane_g16_ParamLimits

0xc3b2,	// (0x000585f6) main_cset6_slider_pane_g16

0xc3c0,	// (0x00058604) main_cset6_slider_pane_g17_ParamLimits

0xc3c0,	// (0x00058604) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x0005bdf0) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x0005bdf0) main_cset6_slider_pane_g

0xe88d,	// (0x0005aad1) main_cset6_slider_pane_t1_ParamLimits

0xe88d,	// (0x0005aad1) main_cset6_slider_pane_t1

0xc3e6,	// (0x0005862a) main_cset6_slider_pane_t2_ParamLimits

0xc3e6,	// (0x0005862a) main_cset6_slider_pane_t2

0xc411,	// (0x00058655) main_cset6_slider_pane_t3_ParamLimits

0xc411,	// (0x00058655) main_cset6_slider_pane_t3

0xc43c,	// (0x00058680) main_cset6_slider_pane_t4_ParamLimits

0xc43c,	// (0x00058680) main_cset6_slider_pane_t4

0xc467,	// (0x000586ab) main_cset6_slider_pane_t5_ParamLimits

0xc467,	// (0x000586ab) main_cset6_slider_pane_t5

0xe8ce,	// (0x0005ab12) main_cset6_slider_pane_t7_ParamLimits

0xe8ce,	// (0x0005ab12) main_cset6_slider_pane_t7

0xc494,	// (0x000586d8) main_cset6_slider_pane_t8_ParamLimits

0xc494,	// (0x000586d8) main_cset6_slider_pane_t8

0xc4b8,	// (0x000586fc) main_cset6_slider_pane_t9_ParamLimits

0xc4b8,	// (0x000586fc) main_cset6_slider_pane_t9

0xc4dc,	// (0x00058720) main_cset6_slider_pane_t10_ParamLimits

0xc4dc,	// (0x00058720) main_cset6_slider_pane_t10

0xc500,	// (0x00058744) main_cset6_slider_pane_t11_ParamLimits

0xc500,	// (0x00058744) main_cset6_slider_pane_t11

0xe904,	// (0x0005ab48) main_cset6_slider_pane_t14_ParamLimits

0xe904,	// (0x0005ab48) main_cset6_slider_pane_t14

0xe93d,	// (0x0005ab81) main_cset6_slider_pane_t15_ParamLimits

0xe93d,	// (0x0005ab81) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x0005be15) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x0005be15) main_cset6_slider_pane_t

0xe976,	// (0x0005abba) cset_slider_pane_g1_copy1

0xe97f,	// (0x0005abc3) cset_slider_pane_g2_copy1

0xe988,	// (0x0005abcc) cset_slider_pane_g3_copy1

0x037e,	// (0x0004c5c2) bg_popup_sub_pane_cp011_copy1

0xe26f,	// (0x0005a4b3) main_cset_text_pane_g1_copy1

0xe277,	// (0x0005a4bb) main_cset_text_pane_t1_copy1

0xe285,	// (0x0005a4c9) main_cset_text_pane_t2_copy1

0xe293,	// (0x0005a4d7) main_cset_text_pane_t3_copy1

0xe2a1,	// (0x0005a4e5) main_cset_text_pane_t4_copy1

0xe2af,	// (0x0005a4f3) main_cset_text_pane_t5_copy1

0xe2bd,	// (0x0005a501) main_cset_text_pane_t6_copy1

0xe2cb,	// (0x0005a50f) main_cset_text_pane_t7_copy1

0xc524,	// (0x00058768) main_cset_text2_pane_t1_copy1

0x037e,	// (0x0004c5c2) main_ncimui_pane

0x8d25,	// (0x00054f69) popup_query_ncimui_window_ParamLimits

0x8d25,	// (0x00054f69) popup_query_ncimui_window

0x081d,	// (0x0004ca61) field_cale_ev2_pane_g4_ParamLimits

0x081d,	// (0x0004ca61) field_cale_ev2_pane_g4

0xa59f,	// (0x000567e3) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa59f,	// (0x000567e3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0005baf3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0005baf3) cell_video_dialer_keypad_pane_g

0xa5b7,	// (0x000567fb) cell_video_dialer_keypad_pane_t1

0x037e,	// (0x0004c5c2) bg_popup_window_pane_cp012

0x2ad0,	// (0x0004ed14) heading_pane_cp06

0xe9bb,	// (0x0005abff) ncim_query_content_pane

0x037e,	// (0x0004c5c2) bg_popup_heading_pane_cp01

0xe9c3,	// (0x0005ac07) ncim_heading_pane_t1

0xe9d1,	// (0x0005ac15) ncim_indicator_popup_pane

0xe9e3,	// (0x0005ac27) ncim_query_button_pane

0xe9f7,	// (0x0005ac3b) ncim_query_content_pane_t1

0xea09,	// (0x0005ac4d) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x0005be54) ncim_query_content_pane_t

0xea43,	// (0x0005ac87) ncim_query_list_pane

0xea55,	// (0x0005ac99) ncim_query_popup_pane

0xe9d1,	// (0x0005ac15) ncim_indicator_popup_pane_ParamLimits

0xc646,	// (0x0005888a) ncim_query_content_pane_g1_ParamLimits

0xc646,	// (0x0005888a) ncim_query_content_pane_g1

0xe9f7,	// (0x0005ac3b) ncim_query_content_pane_t1_ParamLimits

0xea09,	// (0x0005ac4d) ncim_query_content_pane_t2_ParamLimits

0xc652,	// (0x00058896) ncim_query_content_pane_t3_ParamLimits

0xc652,	// (0x00058896) ncim_query_content_pane_t3

0xc66f,	// (0x000588b3) ncim_query_content_pane_t4_ParamLimits

0xc66f,	// (0x000588b3) ncim_query_content_pane_t4

0xc68c,	// (0x000588d0) ncim_query_content_pane_t5_ParamLimits

0xc68c,	// (0x000588d0) ncim_query_content_pane_t5

0xea1b,	// (0x0005ac5f) ncim_query_content_pane_t6_ParamLimits

0xea1b,	// (0x0005ac5f) ncim_query_content_pane_t6

0xfc10,	// (0x0005be54) ncim_query_content_pane_t_ParamLimits

0xea43,	// (0x0005ac87) ncim_query_list_pane_ParamLimits

0xea55,	// (0x0005ac99) ncim_query_popup_pane_ParamLimits

0xea69,	// (0x0005acad) wait_bar_pane_cp04

0x037e,	// (0x0004c5c2) input_focus_pane_cp011

0xea71,	// (0x0005acb5) ncim_query_popup_pane_t1

0xea7f,	// (0x0005acc3) ncim_list_query_list_pane_ParamLimits

0xea7f,	// (0x0005acc3) ncim_list_query_list_pane

0x037e,	// (0x0004c5c2) bg_button_pane_cp027

0xea8c,	// (0x0005acd0) ncim_query_button_pane_g1

0x037e,	// (0x0004c5c2) list_highlight_pane_cp012

0xea96,	// (0x0005acda) ncim_list_query_list_pane_g1

0xea9e,	// (0x0005ace2) ncim_list_query_list_pane_t1

0xac44,	// (0x00056e88) cam4_indicators_pane_g3_ParamLimits

0xac44,	// (0x00056e88) cam4_indicators_pane_g3

0xad52,	// (0x00056f96) vid4_indicators_pane_g5_ParamLimits

0xad52,	// (0x00056f96) vid4_indicators_pane_g5

0xbd64,	// (0x00057fa8) vid4_progress_pane_g5_ParamLimits

0xbd64,	// (0x00057fa8) vid4_progress_pane_g5

0xc55f,	// (0x000587a3) main_ncimui_pane_g1

0xc5b5,	// (0x000587f9) ncimui_group_query_pane_ParamLimits

0xc5b5,	// (0x000587f9) ncimui_group_query_pane

0xc5f1,	// (0x00058835) ncimui_list_pane_ParamLimits

0xc5f1,	// (0x00058835) ncimui_list_pane

0xc612,	// (0x00058856) ncimui_text_pane_ParamLimits

0xc612,	// (0x00058856) ncimui_text_pane

0xc6a9,	// (0x000588ed) ncimui_text_pane_t1_ParamLimits

0xc6a9,	// (0x000588ed) ncimui_text_pane_t1

0xeaac,	// (0x0005acf0) ncimui_list_single_graphic_pane_ParamLimits

0xeaac,	// (0x0005acf0) ncimui_list_single_graphic_pane

0xc6c8,	// (0x0005890c) ncimui_query_pane_ParamLimits

0xc6c8,	// (0x0005890c) ncimui_query_pane

0x037e,	// (0x0004c5c2) list_highlight_pane_cp013

0xeabc,	// (0x0005ad00) ncim_list_query_list_pane_t1_copy1

0xea96,	// (0x0005acda) ncim_list_single_graphic_pane_g1

0xeaca,	// (0x0005ad0e) ncim_query_button_pane_cp01

0xead6,	// (0x0005ad1a) ncim_query_entry_pane_ParamLimits

0xead6,	// (0x0005ad1a) ncim_query_entry_pane

0xeae9,	// (0x0005ad2d) ncimui_query_pane_g1

0xeaf5,	// (0x0005ad39) ncimui_query_pane_t1_ParamLimits

0xeaf5,	// (0x0005ad39) ncimui_query_pane_t1

0x334c,	// (0x0004f590) input_focus_pane_cp012

0xeb0e,	// (0x0005ad52) ncim_query_entry_pane_t1

0x2269,	// (0x0004e4ad) main_im_pane_ParamLimits

0x334c,	// (0x0004f590) main_mobtv_pane_ParamLimits

0x334c,	// (0x0004f590) main_mobtv_pane

0xc3ce,	// (0x00058612) main_cset6_slider_pane_g18_ParamLimits

0xc3ce,	// (0x00058612) main_cset6_slider_pane_g18

0xc3da,	// (0x0005861e) main_cset6_slider_pane_g19_ParamLimits

0xc3da,	// (0x0005861e) main_cset6_slider_pane_g19

0xdfe2,	// (0x0005a226) bg_main_mobtv_pane_ParamLimits

0xdfe2,	// (0x0005a226) bg_main_mobtv_pane

0xc6db,	// (0x0005891f) main_mobtv_info_pane

0xc6e6,	// (0x0005892a) main_mobtv_loading_pane_ParamLimits

0xc6e6,	// (0x0005892a) main_mobtv_loading_pane

0xeb20,	// (0x0005ad64) main_mobtv_pg_channel_list_pane

0xeb2a,	// (0x0005ad6e) main_mobtv_pg_hdr_pane

0xc6f3,	// (0x00058937) main_mobtv_programe_curr_pane_ParamLimits

0xc6f3,	// (0x00058937) main_mobtv_programe_curr_pane

0xc700,	// (0x00058944) main_mobtv_programe_next_pane_ParamLimits

0xc700,	// (0x00058944) main_mobtv_programe_next_pane

0xeb33,	// (0x0005ad77) popup_mobtv_noti_window

0x4597,	// (0x000507db) main_tv_pg_hdr_pane_g1

0xeb3b,	// (0x0005ad7f) main_tv_pg_hdr_pane_g2

0xeb43,	// (0x0005ad87) main_tv_pg_hdr_pane_g3

0xeb4b,	// (0x0005ad8f) main_tv_pg_hdr_pane_g4

0xeb53,	// (0x0005ad97) main_tv_pg_hdr_pane_g5

0xeb5d,	// (0x0005ada1) main_tv_pg_hdr_pane_g6

0xeb67,	// (0x0005adab) main_tv_pg_hdr_pane_g7

0xeb71,	// (0x0005adb5) main_tv_pg_hdr_pane_g8

0xeb7b,	// (0x0005adbf) main_tv_pg_hdr_pane_g9

0xeb85,	// (0x0005adc9) main_tv_pg_hdr_pane_g10

0xeb8f,	// (0x0005add3) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x0005be61) main_tv_pg_hdr_pane_g

0xeb99,	// (0x0005addd) main_tv_pg_hdr_pane_t1

0xeba7,	// (0x0005adeb) main_tv_pg_hdr_pane_t2

0xebb5,	// (0x0005adf9) main_tv_pg_hdr_pane_t3

0xebc5,	// (0x0005ae09) main_tv_pg_hdr_pane_t4

0xebd5,	// (0x0005ae19) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x0005be78) main_tv_pg_hdr_pane_t

0xebe5,	// (0x0005ae29) single_mobtv_pg_channel_pane_ParamLimits

0xebe5,	// (0x0005ae29) single_mobtv_pg_channel_pane

0xebf7,	// (0x0005ae3b) single_mobtv_pg_channel_table_pane

0xec00,	// (0x0005ae44) single_mobtv_pg_channel_thumb_pane

0xec09,	// (0x0005ae4d) single_tv_pg_channel_pane_g1

0xec12,	// (0x0005ae56) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x0005be83) single_tv_pg_channel_pane_g

0x480b,	// (0x00050a4f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x480b,	// (0x00050a4f) bg_single_mobtv_pg_channel_thumb_pane

0xec1b,	// (0x0005ae5f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xec1b,	// (0x0005ae5f) single_mobtv_pg_channel_thumb_pane_g1

0xec29,	// (0x0005ae6d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xec29,	// (0x0005ae6d) single_mobtv_pg_channel_thumb_pane_g2

0xec35,	// (0x0005ae79) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xec35,	// (0x0005ae79) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x0005be88) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x0005be88) single_mobtv_pg_channel_thumb_pane_g

0xec41,	// (0x0005ae85) single_mobtv_pg_channel_thumb_pane_t1

0xec4f,	// (0x0005ae93) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x0005be8f) single_mobtv_pg_channel_thumb_pane_t

0x4597,	// (0x000507db) bg_single_mobtv_pg_channel_table_pane_g1

0x4597,	// (0x000507db) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0005b93f) bg_single_mobtv_pg_channel_table_pane_g

0xec5d,	// (0x0005aea1) single_mobtv_pg_channel_table_pane_t1

0xec6b,	// (0x0005aeaf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0005be94) single_mobtv_pg_channel_table_pane_t

0xc715,	// (0x00058959) main_mobtv_info_pane_g1_ParamLimits

0xc715,	// (0x00058959) main_mobtv_info_pane_g1

0xc731,	// (0x00058975) main_mobtv_info_pane_t1_ParamLimits

0xc731,	// (0x00058975) main_mobtv_info_pane_t1

0xc7a9,	// (0x000589ed) main_mobtv_info_pane_t2_ParamLimits

0xc7a9,	// (0x000589ed) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x0005be9e) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x0005be9e) main_mobtv_info_pane_t

0xc838,	// (0x00058a7c) wait_bar_pane_cp05

0xc84a,	// (0x00058a8e) main_mobtv_loading_pane_g1_ParamLimits

0xc84a,	// (0x00058a8e) main_mobtv_loading_pane_g1

0xc858,	// (0x00058a9c) main_mobtv_loading_pane_g2_ParamLimits

0xc858,	// (0x00058a9c) main_mobtv_loading_pane_g2

0xc864,	// (0x00058aa8) main_mobtv_loading_pane_g3_ParamLimits

0xc864,	// (0x00058aa8) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x0005bea5) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x0005bea5) main_mobtv_loading_pane_g

0xec8b,	// (0x0005aecf) main_mobtv_loading_pane_t1_ParamLimits

0xec8b,	// (0x0005aecf) main_mobtv_loading_pane_t1

0xeca3,	// (0x0005aee7) main_mobtv_loading_pane_t2_ParamLimits

0xeca3,	// (0x0005aee7) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x0005beac) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x0005beac) main_mobtv_loading_pane_t

0xc872,	// (0x00058ab6) wait_bar_pane_cp06_ParamLimits

0xc872,	// (0x00058ab6) wait_bar_pane_cp06

0xecc7,	// (0x0005af0b) main_mobtv_programe_curr_pane_t1

0xecd5,	// (0x0005af19) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x0005beb1) main_mobtv_programe_curr_pane_t

0xece3,	// (0x0005af27) main_mobtv_programe_next_pane_t1

0xecf1,	// (0x0005af35) main_mobtv_programe_next_pane_t2

0xecff,	// (0x0005af43) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x0005beb6) main_mobtv_programe_next_pane_t

0x037e,	// (0x0004c5c2) bg_popup_mobtv_noti_window_pane

0xed0d,	// (0x0005af51) popup_mobtv_noti_window_g1

0xed15,	// (0x0005af59) popup_mobtv_noti_window_t1

0xed23,	// (0x0005af67) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x0005bebd) popup_mobtv_noti_window_t

0x4597,	// (0x000507db) bg_popup_mobtv_noti_window_pane_g1

0x037e,	// (0x0004c5c2) sc_clock_pane

0x037e,	// (0x0004c5c2) main_fs_bigclock_pane

0xbf4b,	// (0x0005818f) blid2_tripm_pane_t4_ParamLimits

0xbf4b,	// (0x0005818f) blid2_tripm_pane_t4

0xc87e,	// (0x00058ac2) sc_clock_pane_g1_ParamLimits

0xc87e,	// (0x00058ac2) sc_clock_pane_g1

0xc88c,	// (0x00058ad0) sc_clock_pane_t1_ParamLimits

0xc88c,	// (0x00058ad0) sc_clock_pane_t1

0xc89f,	// (0x00058ae3) sc_clock_pane_t2_ParamLimits

0xc89f,	// (0x00058ae3) sc_clock_pane_t2

0xc8b1,	// (0x00058af5) sc_clock_pane_t3_ParamLimits

0xc8b1,	// (0x00058af5) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x0005bec2) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x0005bec2) sc_clock_pane_t

0xd580,	// (0x000597c4) main_fs_bigclock_indicator_pane_ParamLimits

0xd580,	// (0x000597c4) main_fs_bigclock_indicator_pane

0xc93e,	// (0x00058b82) main_fs_bigclock_pane_g1_ParamLimits

0xc93e,	// (0x00058b82) main_fs_bigclock_pane_g1

0xd58c,	// (0x000597d0) main_fs_bigclock_pane_t1_ParamLimits

0xd58c,	// (0x000597d0) main_fs_bigclock_pane_t1

0xd59e,	// (0x000597e2) main_fs_bigclock_pane_t2_ParamLimits

0xd59e,	// (0x000597e2) main_fs_bigclock_pane_t2

0xd5b2,	// (0x000597f6) main_fs_bigclock_pane_t3_ParamLimits

0xd5b2,	// (0x000597f6) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0005c0c6) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0005c0c6) main_fs_bigclock_pane_t

0x16e8,	// (0x0004d92c) main_fs_bigclock_indicator_pane_g1

0xe9eb,	// (0x0005ac2f) ncim_query_content_pane_g2_ParamLimits

0xe9eb,	// (0x0005ac2f) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x0005be4f) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x0005be4f) ncim_query_content_pane_g

0xc8c5,	// (0x00058b09) sc_clock_pane_t4_ParamLimits

0xc8c5,	// (0x00058b09) sc_clock_pane_t4

0x334c,	// (0x0004f590) main_radioblah_pane

0xdf53,	// (0x0005a197) cell_call4_button_pane_t1_copy1_ParamLimits

0xdf53,	// (0x0005a197) cell_call4_button_pane_t1_copy1

0xc567,	// (0x000587ab) main_ncimui_pane_t1_ParamLimits

0xc567,	// (0x000587ab) main_ncimui_pane_t1

0xc581,	// (0x000587c5) main_ncimui_pane_t2_ParamLimits

0xc581,	// (0x000587c5) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x0005be48) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x0005be48) main_ncimui_pane_t

0xee69,	// (0x0005b0ad) main_radioblah_anim_pane_ParamLimits

0xee69,	// (0x0005b0ad) main_radioblah_anim_pane

0xee7a,	// (0x0005b0be) main_radioblah_info_pane_ParamLimits

0xee7a,	// (0x0005b0be) main_radioblah_info_pane

0xee8e,	// (0x0005b0d2) main_radioblah_pane_t1_ParamLimits

0xee8e,	// (0x0005b0d2) main_radioblah_pane_t1

0xeeaa,	// (0x0005b0ee) main_radioblah_pane_t2_ParamLimits

0xeeaa,	// (0x0005b0ee) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x0005bee3) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x0005bee3) main_radioblah_pane_t

0xc990,	// (0x00058bd4) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc990,	// (0x00058bd4) main_radioblah_rocker_ctrl_pane

0xeef2,	// (0x0005b136) main_radioblah_info_pane_t1_ParamLimits

0xeef2,	// (0x0005b136) main_radioblah_info_pane_t1

0xc9d5,	// (0x00058c19) main_radioblah_info_pane_t2_ParamLimits

0xc9d5,	// (0x00058c19) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x0005beec) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x0005beec) main_radioblah_info_pane_t

0x4597,	// (0x000507db) main_radioblah_rocker_ctrl_pane_g1

0xca85,	// (0x00058cc9) main_radioblah_rocker_ctrl_pane_g2

0xca8d,	// (0x00058cd1) main_radioblah_rocker_ctrl_pane_g3

0xca95,	// (0x00058cd9) main_radioblah_rocker_ctrl_pane_g4

0xca9d,	// (0x00058ce1) main_radioblah_rocker_ctrl_pane_g5

0xcaa5,	// (0x00058ce9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x0005bef5) main_radioblah_rocker_ctrl_pane_g

0xc524,	// (0x00058768) main_cset_text2_pane_t1_copy1_ParamLimits

0xab64,	// (0x00056da8) cam4_image_uncrop_qvga_pane

0xacb9,	// (0x00056efd) vid4_image_uncrop_qcif_pane

0xc0d9,	// (0x0005831d) cam6_image_uncrop_qvga_pane_ParamLimits

0xc0d9,	// (0x0005831d) cam6_image_uncrop_qvga_pane

0xe6ef,	// (0x0005a933) vid6_image_uncrop_qcif_pane_ParamLimits

0xe6ef,	// (0x0005a933) vid6_image_uncrop_qcif_pane

0x037e,	// (0x0004c5c2) bg_popup_preview_window_pane_cp03

0xe991,	// (0x0005abd5) list_cset_text2_pane

0xe999,	// (0x0005abdd) main_cset6_text2_pane_g1

0xe9a1,	// (0x0005abe5) main_cset6_text2_pane_t1

0x1a88,	// (0x0004dccc) list_cset_text2_pane_t1_ParamLimits

0x1a88,	// (0x0004dccc) list_cset_text2_pane_t1

0x334c,	// (0x0004f590) main_radioblah_pane_ParamLimits

0xc824,	// (0x00058a68) main_mobtv_info_pane_t3_ParamLimits

0xc824,	// (0x00058a68) main_mobtv_info_pane_t3

0xc97e,	// (0x00058bc2) main_radioblah_pane_g1

0xc9a9,	// (0x00058bed) main_radioblah_info_pane_g1

0xca2a,	// (0x00058c6e) main_radioblah_info_pane_t3_ParamLimits

0xca2a,	// (0x00058c6e) main_radioblah_info_pane_t3

0x7983,	// (0x00053bc7) highlight_cell_cale_month_pane_ParamLimits

0x7983,	// (0x00053bc7) highlight_cell_cale_month_pane

0x037e,	// (0x0004c5c2) main_phob_fisheye_pane

0x48f3,	// (0x00050b37) scroll_pane_cp0031_ParamLimits

0x48f3,	// (0x00050b37) scroll_pane_cp0031

0xe7fd,	// (0x0005aa41) wait_bar_pane_cp08_ParamLimits

0xc2e5,	// (0x00058529) cset_list_set_pane_copy1_ParamLimits

0xef2c,	// (0x0005b170) highlight_cell_cale_month_pane_g1

0xcaad,	// (0x00058cf1) highlight_cell_cale_month_pane_t1

0xe497,	// (0x0005a6db) list_gen_pane_cp01

0xe11c,	// (0x0005a360) scroll_pane_01

0xcabb,	// (0x00058cff) list_single_double_fisheye_pane

0xcac4,	// (0x00058d08) list_double_fisheye_pane_g1_ParamLimits

0xcac4,	// (0x00058d08) list_double_fisheye_pane_g1

0xcad0,	// (0x00058d14) list_double_fisheye_pane_g2_ParamLimits

0xcad0,	// (0x00058d14) list_double_fisheye_pane_g2

0xcae4,	// (0x00058d28) list_double_fisheye_pane_g3_ParamLimits

0xcae4,	// (0x00058d28) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x0005bf02) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x0005bf02) list_double_fisheye_pane_g

0xcb0d,	// (0x00058d51) list_double_fisheye_pane_t1_ParamLimits

0xcb0d,	// (0x00058d51) list_double_fisheye_pane_t1

0xcb28,	// (0x00058d6c) list_double_fisheye_pane_t2_ParamLimits

0xcb28,	// (0x00058d6c) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x0005bf0d) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x0005bf0d) list_double_fisheye_pane_t

0x037e,	// (0x0004c5c2) main_call5_pane

0xc8eb,	// (0x00058b2f) sc_swipe_pane_ParamLimits

0xc8eb,	// (0x00058b2f) sc_swipe_pane

0xcb56,	// (0x00058d9a) call5_image_pane_ParamLimits

0xcb56,	// (0x00058d9a) call5_image_pane

0xcb66,	// (0x00058daa) call5_swipe_1_pane_ParamLimits

0xcb66,	// (0x00058daa) call5_swipe_1_pane

0xcb72,	// (0x00058db6) call5_swipe_2_pane_ParamLimits

0xcb72,	// (0x00058db6) call5_swipe_2_pane

0xcb8c,	// (0x00058dd0) popup_call5_audio_first_window_ParamLimits

0xcb8c,	// (0x00058dd0) popup_call5_audio_first_window

0x480b,	// (0x00050a4f) call5_swipe_1_pane_g1_ParamLimits

0x480b,	// (0x00050a4f) call5_swipe_1_pane_g1

0xef34,	// (0x0005b178) call5_swipe_1_pane_g2_ParamLimits

0xef34,	// (0x0005b178) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0005bf12) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0005bf12) call5_swipe_1_pane_g

0xef40,	// (0x0005b184) call5_swipe_1_pane_t1_ParamLimits

0xef40,	// (0x0005b184) call5_swipe_1_pane_t1

0x480b,	// (0x00050a4f) call5_swipe_2_pane_g1_ParamLimits

0x480b,	// (0x00050a4f) call5_swipe_2_pane_g1

0xef55,	// (0x0005b199) call5_swipe_2_pane_g2_ParamLimits

0xef55,	// (0x0005b199) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x0005bf17) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x0005bf17) call5_swipe_2_pane_g

0xef61,	// (0x0005b1a5) call5_swipe_2_pane_t1_ParamLimits

0xef61,	// (0x0005b1a5) call5_swipe_2_pane_t1

0xef76,	// (0x0005b1ba) sc_swipe_pane_g1_ParamLimits

0xef76,	// (0x0005b1ba) sc_swipe_pane_g1

0xef83,	// (0x0005b1c7) sc_swipe_pane_g2_ParamLimits

0xef83,	// (0x0005b1c7) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x0005bf1c) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x0005bf1c) sc_swipe_pane_g

0xef8f,	// (0x0005b1d3) sc_swipe_pane_t1_ParamLimits

0xef8f,	// (0x0005b1d3) sc_swipe_pane_t1

0x037e,	// (0x0004c5c2) main_cmail_launcher_pane

0xcb9a,	// (0x00058dde) aid_size_cell_cmail_l_ParamLimits

0xcb9a,	// (0x00058dde) aid_size_cell_cmail_l

0xcbaa,	// (0x00058dee) grid_cmail_l_pane_ParamLimits

0xcbaa,	// (0x00058dee) grid_cmail_l_pane

0xcbba,	// (0x00058dfe) cell_cmail_l_pane_ParamLimits

0xcbba,	// (0x00058dfe) cell_cmail_l_pane

0xcbce,	// (0x00058e12) cell_cmail_l_pane_g1_ParamLimits

0xcbce,	// (0x00058e12) cell_cmail_l_pane_g1

0xcbda,	// (0x00058e1e) cell_cmail_l_pane_t1_ParamLimits

0xcbda,	// (0x00058e1e) cell_cmail_l_pane_t1

0xefa4,	// (0x0005b1e8) cell_cmail_l_pane_t2_ParamLimits

0xefa4,	// (0x0005b1e8) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x0005bf21) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x0005bf21) cell_cmail_l_pane_t

0x334c,	// (0x0004f590) grid_highlight_pane_cp018_ParamLimits

0x334c,	// (0x0004f590) grid_highlight_pane_cp018

0x5ce2,	// (0x00051f26) main2_pane_ParamLimits

0x5ce2,	// (0x00051f26) main2_pane

0x2302,	// (0x0004e546) popup_sp_fs_action_menu_bg_pane_g1

0x230a,	// (0x0004e54e) popup_sp_fs_action_menu_bg_pane_g2

0x2312,	// (0x0004e556) popup_sp_fs_action_menu_bg_pane_g3

0x231a,	// (0x0004e55e) popup_sp_fs_action_menu_bg_pane_g4

0x2322,	// (0x0004e566) popup_sp_fs_action_menu_bg_pane_g5

0x232a,	// (0x0004e56e) popup_sp_fs_action_menu_bg_pane_g6

0x2332,	// (0x0004e576) popup_sp_fs_action_menu_bg_pane_g7

0x233a,	// (0x0004e57e) popup_sp_fs_action_menu_bg_pane_g8

0x2342,	// (0x0004e586) popup_sp_fs_action_menu_bg_pane_g9

0x234a,	// (0x0004e58e) popup_sp_fs_action_menu_bg_pane_g10

0x234a,	// (0x0004e58e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0005b3eb) popup_sp_fs_action_menu_bg_pane_g

0x04ee,	// (0x0004c732) list_medium_line_x2_t3_g3_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x2_t3_g3_g1

0x04fa,	// (0x0004c73e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x04fa,	// (0x0004c73e) list_medium_line_x2_t3_g3_g2

0x0506,	// (0x0004c74a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0506,	// (0x0004c74a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0005b49b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0005b49b) list_medium_line_x2_t3_g3_g

0x0512,	// (0x0004c756) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0512,	// (0x0004c756) list_medium_line_x2_t3_g3_t1

0x6b08,	// (0x00052d4c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6b08,	// (0x00052d4c) list_medium_line_x2_t3_g3_t2

0x0527,	// (0x0004c76b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0527,	// (0x0004c76b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0005b4a2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0005b4a2) list_medium_line_x2_t3_g3_t

0x04ee,	// (0x0004c732) list_medium_line_x2_t3_g2_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x2_t3_g2_g1

0x0506,	// (0x0004c74a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0506,	// (0x0004c74a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0005b4a9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0005b4a9) list_medium_line_x2_t3_g2_g

0x053c,	// (0x0004c780) list_medium_line_x2_t3_g2_t1_ParamLimits

0x053c,	// (0x0004c780) list_medium_line_x2_t3_g2_t1

0x0552,	// (0x0004c796) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0552,	// (0x0004c796) list_medium_line_x2_t3_g2_t2

0x0527,	// (0x0004c76b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0527,	// (0x0004c76b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0005b4ae) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0005b4ae) list_medium_line_x2_t3_g2_t

0x04ee,	// (0x0004c732) list_medium_line_x2_t4_g4_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x2_t4_g4_g1

0x0564,	// (0x0004c7a8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0564,	// (0x0004c7a8) list_medium_line_x2_t4_g4_g2

0x04fa,	// (0x0004c73e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x04fa,	// (0x0004c73e) list_medium_line_x2_t4_g4_g3

0x0570,	// (0x0004c7b4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0570,	// (0x0004c7b4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0005b4b5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0005b4b5) list_medium_line_x2_t4_g4_g

0x6b1a,	// (0x00052d5e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6b1a,	// (0x00052d5e) list_medium_line_x2_t4_g4_t1

0x6b34,	// (0x00052d78) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6b34,	// (0x00052d78) list_medium_line_x2_t4_g4_t2

0x6b4a,	// (0x00052d8e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6b4a,	// (0x00052d8e) list_medium_line_x2_t4_g4_t3

0x057c,	// (0x0004c7c0) list_medium_line_x2_t4_g4_t4_ParamLimits

0x057c,	// (0x0004c7c0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0005b4be) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0005b4be) list_medium_line_x2_t4_g4_t

0x04ee,	// (0x0004c732) list_medium_line_x2_t2_g4_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x2_t2_g4_g1

0x0564,	// (0x0004c7a8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0564,	// (0x0004c7a8) list_medium_line_x2_t2_g4_g2

0x04fa,	// (0x0004c73e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x04fa,	// (0x0004c73e) list_medium_line_x2_t2_g4_g3

0x0506,	// (0x0004c74a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0506,	// (0x0004c74a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0005b525) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0005b525) list_medium_line_x2_t2_g4_g

0x058e,	// (0x0004c7d2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x058e,	// (0x0004c7d2) list_medium_line_x2_t2_g4_t1

0x0527,	// (0x0004c76b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0527,	// (0x0004c76b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0005b52e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0005b52e) list_medium_line_x2_t2_g4_t

0x04ee,	// (0x0004c732) list_medium_line_x2_t2_g3_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x2_t2_g3_g1

0x04fa,	// (0x0004c73e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x04fa,	// (0x0004c73e) list_medium_line_x2_t2_g3_g2

0x0506,	// (0x0004c74a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0506,	// (0x0004c74a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0005b49b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0005b49b) list_medium_line_x2_t2_g3_g

0x05a3,	// (0x0004c7e7) list_medium_line_x2_t2_g3_t1_ParamLimits

0x05a3,	// (0x0004c7e7) list_medium_line_x2_t2_g3_t1

0x0527,	// (0x0004c76b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0527,	// (0x0004c76b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0005b533) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0005b533) list_medium_line_x2_t2_g3_t

0x7b35,	// (0x00053d79) main_sp_fs_list_pane_ParamLimits

0x7b35,	// (0x00053d79) main_sp_fs_list_pane

0x7b41,	// (0x00053d85) sp_fs_scroll_pane_ParamLimits

0x7b41,	// (0x00053d85) sp_fs_scroll_pane

0x7b4d,	// (0x00053d91) list_medium_line_x2_t3_t1

0x7b5d,	// (0x00053da1) list_medium_line_x2_t3_t2

0x05e6,	// (0x0004c82a) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0005b57e) list_medium_line_x2_t3_t

0x7b6b,	// (0x00053daf) list_medium_line_x3_t4_t1

0x7b7b,	// (0x00053dbf) list_medium_line_x3_t4_t2

0x05f4,	// (0x0004c838) list_medium_line_x3_t4_t3

0x05e6,	// (0x0004c82a) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0005b585) list_medium_line_x3_t4_t

0x7b89,	// (0x00053dcd) list_medium_line_x4_t5_t1

0x7b99,	// (0x00053ddd) list_medium_line_x4_t5_t2

0x05f4,	// (0x0004c838) list_medium_line_x4_t5_t3

0x0602,	// (0x0004c846) list_medium_line_x4_t5_t4

0x05e6,	// (0x0004c82a) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0005b58e) list_medium_line_x4_t5_t

0x04ee,	// (0x0004c732) list_medium_line_t4_g4_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_t4_g4_g1

0x0570,	// (0x0004c7b4) list_medium_line_t4_g4_g2_ParamLimits

0x0570,	// (0x0004c7b4) list_medium_line_t4_g4_g2

0x0610,	// (0x0004c854) list_medium_line_t4_g4_g3_ParamLimits

0x0610,	// (0x0004c854) list_medium_line_t4_g4_g3

0x0506,	// (0x0004c74a) list_medium_line_t4_g4_g4_ParamLimits

0x0506,	// (0x0004c74a) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0005b599) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0005b599) list_medium_line_t4_g4_g

0x061c,	// (0x0004c860) list_medium_line_t4_g4_t1_ParamLimits

0x061c,	// (0x0004c860) list_medium_line_t4_g4_t1

0x0631,	// (0x0004c875) list_medium_line_t4_g4_t2_ParamLimits

0x0631,	// (0x0004c875) list_medium_line_t4_g4_t2

0x0646,	// (0x0004c88a) list_medium_line_t4_g4_t3_ParamLimits

0x0646,	// (0x0004c88a) list_medium_line_t4_g4_t3

0x0527,	// (0x0004c76b) list_medium_line_t4_g4_t4_ParamLimits

0x0527,	// (0x0004c76b) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0005b5a2) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0005b5a2) list_medium_line_t4_g4_t

0x7cb8,	// (0x00053efc) chi_dic_find_pane_g1

0x8cf4,	// (0x00054f38) main_tport_pane

0x0ba6,	// (0x0004cdea) list_medium_line_plain_t1

0x0bf0,	// (0x0004ce34) list_medium_line_t2_g2_g1_ParamLimits

0x0bf0,	// (0x0004ce34) list_medium_line_t2_g2_g1

0x0bfc,	// (0x0004ce40) list_medium_line_t2_g2_g2_ParamLimits

0x0bfc,	// (0x0004ce40) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0005bc5e) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0005bc5e) list_medium_line_t2_g2_g

0xb75c,	// (0x000579a0) list_medium_line_t2_g2_t1_ParamLimits

0xb75c,	// (0x000579a0) list_medium_line_t2_g2_t1

0xb776,	// (0x000579ba) list_medium_line_t2_g2_t2_ParamLimits

0xb776,	// (0x000579ba) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0005bc63) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0005bc63) list_medium_line_t2_g2_t

0x0d3c,	// (0x0004cf80) aid_sp_fs_list_icon_a_sm

0x0d44,	// (0x0004cf88) aid_sp_fs_list_icon_d

0x0d4c,	// (0x0004cf90) aid_sp_fs_text_primary

0x0d55,	// (0x0004cf99) aid_sp_fs_text_secondary

0x0d5e,	// (0x0004cfa2) list_medium_line

0x0d5e,	// (0x0004cfa2) list_medium_line_g2

0x0d5e,	// (0x0004cfa2) list_medium_line_g3

0x0d5e,	// (0x0004cfa2) list_medium_line_plain

0x0d5e,	// (0x0004cfa2) list_medium_line_plain_t2

0x0d5e,	// (0x0004cfa2) list_medium_line_plain_t3

0x0d5e,	// (0x0004cfa2) list_medium_line_right_icon

0x0d5e,	// (0x0004cfa2) list_medium_line_right_iconx2

0x0d5e,	// (0x0004cfa2) list_medium_line_t2

0x0d5e,	// (0x0004cfa2) list_medium_line_t2_g2

0x0d5e,	// (0x0004cfa2) list_medium_line_t2_g3

0x0d5e,	// (0x0004cfa2) list_medium_line_t2_right_icon

0x0d5e,	// (0x0004cfa2) list_medium_line_t2_right_iconx2

0x0d5e,	// (0x0004cfa2) list_medium_line_t3

0x0d5e,	// (0x0004cfa2) list_medium_line_t3_g2

0x0d5e,	// (0x0004cfa2) list_medium_line_t3_g3

0x0d5e,	// (0x0004cfa2) list_medium_line_t3_right_iconx2

0x0d67,	// (0x0004cfab) list_medium_line_t4_g4

0x0d70,	// (0x0004cfb4) list_medium_line_x2

0x0d70,	// (0x0004cfb4) list_medium_line_x2_t2_g2

0x0d70,	// (0x0004cfb4) list_medium_line_x2_t2_g3

0x0d70,	// (0x0004cfb4) list_medium_line_x2_t2_g4

0x0d70,	// (0x0004cfb4) list_medium_line_x2_t3

0x0d70,	// (0x0004cfb4) list_medium_line_x2_t3_g2

0x0d70,	// (0x0004cfb4) list_medium_line_x2_t3_g3

0x0d70,	// (0x0004cfb4) list_medium_line_x2_t3_g4

0x0d70,	// (0x0004cfb4) list_medium_line_x2_t4_g2

0x0d70,	// (0x0004cfb4) list_medium_line_x2_t4_g4

0x0d79,	// (0x0004cfbd) list_medium_line_x3

0x0d79,	// (0x0004cfbd) list_medium_line_x3_t4

0x0d79,	// (0x0004cfbd) list_medium_line_x3_t4_g4

0x0d67,	// (0x0004cfab) list_medium_line_x4_t4

0x0d67,	// (0x0004cfab) list_medium_line_x4_t4_g7

0x0d67,	// (0x0004cfab) list_medium_line_x4_t5

0x0d82,	// (0x0004cfc6) list_single_fs_dyc_pane_ParamLimits

0x0d82,	// (0x0004cfc6) list_single_fs_dyc_pane

0x04ee,	// (0x0004c732) list_medium_line_x4_t4_g7_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x4_t4_g7_g1

0x0da4,	// (0x0004cfe8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0da4,	// (0x0004cfe8) list_medium_line_x4_t4_g7_g2

0x0db0,	// (0x0004cff4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0db0,	// (0x0004cff4) list_medium_line_x4_t4_g7_g3

0x0dbf,	// (0x0004d003) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0dbf,	// (0x0004d003) list_medium_line_x4_t4_g7_g4

0x0dcb,	// (0x0004d00f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0dcb,	// (0x0004d00f) list_medium_line_x4_t4_g7_g5

0x0dda,	// (0x0004d01e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0dda,	// (0x0004d01e) list_medium_line_x4_t4_g7_g6

0x0de9,	// (0x0004d02d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0de9,	// (0x0004d02d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x0005be2e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x0005be2e) list_medium_line_x4_t4_g7_g

0x0df5,	// (0x0004d039) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0df5,	// (0x0004d039) list_medium_line_x4_t4_g7_t1

0x0e0a,	// (0x0004d04e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0e0a,	// (0x0004d04e) list_medium_line_x4_t4_g7_t2

0x0e1f,	// (0x0004d063) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0e1f,	// (0x0004d063) list_medium_line_x4_t4_g7_t3

0x0e34,	// (0x0004d078) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0e34,	// (0x0004d078) list_medium_line_x4_t4_g7_t4

0x0e46,	// (0x0004d08a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0e46,	// (0x0004d08a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x0005be3d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x0005be3d) list_medium_line_x4_t4_g7_t

0x0e58,	// (0x0004d09c) list_single_dyc_row_pane_ParamLimits

0x0e58,	// (0x0004d09c) list_single_dyc_row_pane

0xcb4a,	// (0x00058d8e) call5_gesture_pane_ParamLimits

0xcb4a,	// (0x00058d8e) call5_gesture_pane

0xcb7e,	// (0x00058dc2) call5_windows_pane_ParamLimits

0xcb7e,	// (0x00058dc2) call5_windows_pane

0xcbf0,	// (0x00058e34) call5_swipe_1_pane_cp_ParamLimits

0xcbf0,	// (0x00058e34) call5_swipe_1_pane_cp

0xcbfc,	// (0x00058e40) call5_swipe_2_pane_cp_ParamLimits

0xcbfc,	// (0x00058e40) call5_swipe_2_pane_cp

0x2d3c,	// (0x0004ef80) call5_image_pane_cp

0xcc08,	// (0x00058e4c) popup_call5_audio_first_window_cp_ParamLimits

0xcc08,	// (0x00058e4c) popup_call5_audio_first_window_cp

0xef76,	// (0x0005b1ba) call5_swipe_1_pane_g1_cp_ParamLimits

0xef76,	// (0x0005b1ba) call5_swipe_1_pane_g1_cp

0xefb6,	// (0x0005b1fa) call5_swipe_1_pane_g2_cp

0xef8f,	// (0x0005b1d3) call5_swipe_1_pane_t1_cp_ParamLimits

0xef8f,	// (0x0005b1d3) call5_swipe_1_pane_t1_cp

0xef76,	// (0x0005b1ba) call5_swipe_2_pane_g1_cp_ParamLimits

0xef76,	// (0x0005b1ba) call5_swipe_2_pane_g1_cp

0xefbe,	// (0x0005b202) call5_swipe_2_pane_g2_cp

0xefc6,	// (0x0005b20a) call5_swipe_2_pane_t1_cp_ParamLimits

0xefc6,	// (0x0005b20a) call5_swipe_2_pane_t1_cp

0x334c,	// (0x0004f590) main_sp_fs_email_pane

0xefdb,	// (0x0005b21f) main_sp_fs_listscroll_pane_te

0x0e75,	// (0x0004d0b9) popup_sp_fs_action_menu_pane_ParamLimits

0x0e75,	// (0x0004d0b9) popup_sp_fs_action_menu_pane

0x4597,	// (0x000507db) bg_sp_fs_ctrlbar_pane_g1

0xefe4,	// (0x0005b228) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xefed,	// (0x0005b231) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xeff6,	// (0x0005b23a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x4597,	// (0x000507db) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x0005bf26) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x437c,	// (0x000505c0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x437c,	// (0x000505c0) bg_sp_fs_ctrlbar_ddmenu_pane

0xefff,	// (0x0005b243) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xefff,	// (0x0005b243) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf00b,	// (0x0005b24f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf00b,	// (0x0005b24f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x0005bf2f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x0005bf2f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xf017,	// (0x0005b25b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xf017,	// (0x0005b25b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0eb9,	// (0x0004d0fd) list_medium_line_t2_right_icon_g1

0xcc16,	// (0x00058e5a) list_medium_line_t2_right_icon_t1

0xcc26,	// (0x00058e6a) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x0005bf34) list_medium_line_t2_right_icon_t

0x4150,	// (0x00050394) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4150,	// (0x00050394) bg_sp_fs_ctrlbar_pane

0xcc8b,	// (0x00058ecf) main_sp_fs_ctrlbar_button_pane_cp01

0xcc93,	// (0x00058ed7) main_sp_fs_ctrlbar_ddmenu_pane

0xf069,	// (0x0005b2ad) main_sp_fs_ctrlbar_pane_g1

0xf075,	// (0x0005b2b9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x0005bf39) main_sp_fs_ctrlbar_pane_g

0xf081,	// (0x0005b2c5) main_sp_fs_ctrlbar_pane_t1

0xcc9d,	// (0x00058ee1) main_sp_fs_ctrlbar_pane

0xccb7,	// (0x00058efb) main_sp_fs_listscroll_pane_te_cp01

0xccc8,	// (0x00058f0c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xccc8,	// (0x00058f0c) popup_sp_fs_action_menu_pane_cp01

0x334c,	// (0x0004f590) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x334c,	// (0x0004f590) bg_sp_fs_highlight_list_pane_cp01

0x0ec1,	// (0x0004d105) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0ec1,	// (0x0004d105) sp_fs_action_menu_list_gene_pane_g1

0xf0a6,	// (0x0005b2ea) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf0a6,	// (0x0005b2ea) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0005bf43) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0005bf43) sp_fs_action_menu_list_gene_pane_g

0x0ed0,	// (0x0004d114) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0ed0,	// (0x0004d114) sp_fs_action_menu_list_gene_pane_t1

0x0ee8,	// (0x0004d12c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0ee8,	// (0x0004d12c) sp_fs_action_menu_list_gene_pane

0xf0b3,	// (0x0005b2f7) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xf0b3,	// (0x0005b2f7) popup_sp_fs_action_menu_bg_pane

0x0f07,	// (0x0004d14b) sp_fs_action_menu_list_pane_ParamLimits

0x0f07,	// (0x0004d14b) sp_fs_action_menu_list_pane

0xf0c1,	// (0x0005b305) sp_fs_scroll_pane_cp01_ParamLimits

0xf0c1,	// (0x0005b305) sp_fs_scroll_pane_cp01

0xcce0,	// (0x00058f24) list_medium_line_plain_t2_t1

0xccf0,	// (0x00058f34) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0005bf48) list_medium_line_plain_t2_t

0xccfe,	// (0x00058f42) list_medium_line_plain_t3_t1

0xcd0e,	// (0x00058f52) list_medium_line_plain_t3_t2

0xcd1c,	// (0x00058f60) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0005bf4d) list_medium_line_plain_t3_t

0x04ee,	// (0x0004c732) list_medium_line_x2_t2_g2_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x2_t2_g2_g1

0x0506,	// (0x0004c74a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0506,	// (0x0004c74a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0005b4a9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0005b4a9) list_medium_line_x2_t2_g2_g

0x061c,	// (0x0004c860) list_medium_line_x2_t2_g2_t1_ParamLimits

0x061c,	// (0x0004c860) list_medium_line_x2_t2_g2_t1

0x0527,	// (0x0004c76b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0527,	// (0x0004c76b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0005bf54) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0005bf54) list_medium_line_x2_t2_g2_t

0x04ee,	// (0x0004c732) list_medium_line_x2_t4_g2_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x2_t4_g2_g1

0x0f27,	// (0x0004d16b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0f27,	// (0x0004d16b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0005bf59) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0005bf59) list_medium_line_x2_t4_g2_g

0xcd2a,	// (0x00058f6e) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcd2a,	// (0x00058f6e) list_medium_line_x2_t4_g2_t1

0xcd44,	// (0x00058f88) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcd44,	// (0x00058f88) list_medium_line_x2_t4_g2_t2

0xcd59,	// (0x00058f9d) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcd59,	// (0x00058f9d) list_medium_line_x2_t4_g2_t3

0x0527,	// (0x0004c76b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0527,	// (0x0004c76b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0005bf5e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0005bf5e) list_medium_line_x2_t4_g2_t

0x0f39,	// (0x0004d17d) list_medium_line_t3_right_iconx2_g1

0x0eb9,	// (0x0004d0fd) list_medium_line_t3_right_iconx2_g2

0xcd6e,	// (0x00058fb2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0005bf67) list_medium_line_t3_right_iconx2_g

0xcd76,	// (0x00058fba) list_medium_line_t3_right_iconx2_t1

0xcd86,	// (0x00058fca) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0005bf6e) list_medium_line_t3_right_iconx2_t

0x04ee,	// (0x0004c732) list_medium_line_x3_t4_g4_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x3_t4_g4_g1

0x04fa,	// (0x0004c73e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x04fa,	// (0x0004c73e) list_medium_line_x3_t4_g4_g2

0x0570,	// (0x0004c7b4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0570,	// (0x0004c7b4) list_medium_line_x3_t4_g4_g3

0x0f41,	// (0x0004d185) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0f41,	// (0x0004d185) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0005bf73) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0005bf73) list_medium_line_x3_t4_g4_g

0xcd94,	// (0x00058fd8) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcd94,	// (0x00058fd8) list_medium_line_x3_t4_g4_t1

0xcdab,	// (0x00058fef) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcdab,	// (0x00058fef) list_medium_line_x3_t4_g4_t2

0x0631,	// (0x0004c875) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0631,	// (0x0004c875) list_medium_line_x3_t4_g4_t3

0x0f4d,	// (0x0004d191) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0f4d,	// (0x0004d191) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0005bf7c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0005bf7c) list_medium_line_x3_t4_g4_t

0xcdc0,	// (0x00059004) list_single_dyc_row_text_pane_t1_ParamLimits

0xcdc0,	// (0x00059004) list_single_dyc_row_text_pane_t1

0xcdf7,	// (0x0005903b) list_single_dyc_row_text_pane_t2_ParamLimits

0xcdf7,	// (0x0005903b) list_single_dyc_row_text_pane_t2

0x0f6a,	// (0x0004d1ae) list_single_dyc_row_text_pane_t3_ParamLimits

0x0f6a,	// (0x0004d1ae) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0005bf85) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0005bf85) list_single_dyc_row_text_pane_t

0x0f7c,	// (0x0004d1c0) list_single_dyc_row_pane_g1_ParamLimits

0x0f7c,	// (0x0004d1c0) list_single_dyc_row_pane_g1

0x0f88,	// (0x0004d1cc) list_single_dyc_row_pane_g2_ParamLimits

0x0f88,	// (0x0004d1cc) list_single_dyc_row_pane_g2

0x0f94,	// (0x0004d1d8) list_single_dyc_row_pane_g3_ParamLimits

0x0f94,	// (0x0004d1d8) list_single_dyc_row_pane_g3

0x0fa0,	// (0x0004d1e4) list_single_dyc_row_pane_g4_ParamLimits

0x0fa0,	// (0x0004d1e4) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0005bf8c) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0005bf8c) list_single_dyc_row_pane_g

0x0fac,	// (0x0004d1f0) list_single_dyc_row_text_pane_ParamLimits

0x0fac,	// (0x0004d1f0) list_single_dyc_row_text_pane

0x037e,	// (0x0004c5c2) bg_sp_fs_scroll_pane

0x0fcb,	// (0x0004d20f) thumb_sp_fs_scroll_pane

0x0bf0,	// (0x0004ce34) list_medium_line_g1_ParamLimits

0x0bf0,	// (0x0004ce34) list_medium_line_g1

0x0fd4,	// (0x0004d218) list_medium_line_t1_ParamLimits

0x0fd4,	// (0x0004d218) list_medium_line_t1

0x04ee,	// (0x0004c732) list_medium_line_x2_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x2_g1

0x04fa,	// (0x0004c73e) list_medium_line_x2_g2_ParamLimits

0x04fa,	// (0x0004c73e) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0005bf95) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0005bf95) list_medium_line_x2_g

0x0fe9,	// (0x0004d22d) list_medium_line_x2_t1_ParamLimits

0x0fe9,	// (0x0004d22d) list_medium_line_x2_t1

0x04ee,	// (0x0004c732) list_medium_line_x3_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x3_g1

0x04fa,	// (0x0004c73e) list_medium_line_x3_g2_ParamLimits

0x04fa,	// (0x0004c73e) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0005bf95) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0005bf95) list_medium_line_x3_g

0x0fe9,	// (0x0004d22d) list_medium_line_x3_t1_ParamLimits

0x0fe9,	// (0x0004d22d) list_medium_line_x3_t1

0x0fff,	// (0x0004d243) thumb_sp_fs_scroll_pane_g1

0x1008,	// (0x0004d24c) thumb_sp_fs_scroll_pane_g2

0x1011,	// (0x0004d255) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005bf9a) thumb_sp_fs_scroll_pane_g

0x0fff,	// (0x0004d243) bg_sp_fs_scroll_pane_g1

0x1008,	// (0x0004d24c) bg_sp_fs_scroll_pane_g2

0x1011,	// (0x0004d255) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005bf9a) bg_sp_fs_scroll_pane_g

0x04ee,	// (0x0004c732) list_medium_line_x2_t3_g4_g1_ParamLimits

0x04ee,	// (0x0004c732) list_medium_line_x2_t3_g4_g1

0x0564,	// (0x0004c7a8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0564,	// (0x0004c7a8) list_medium_line_x2_t3_g4_g2

0x04fa,	// (0x0004c73e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x04fa,	// (0x0004c73e) list_medium_line_x2_t3_g4_g3

0x0506,	// (0x0004c74a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0506,	// (0x0004c74a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0005b525) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0005b525) list_medium_line_x2_t3_g4_g

0xce51,	// (0x00059095) list_medium_line_x2_t3_g4_t1_ParamLimits

0xce51,	// (0x00059095) list_medium_line_x2_t3_g4_t1

0xce67,	// (0x000590ab) list_medium_line_x2_t3_g4_t2_ParamLimits

0xce67,	// (0x000590ab) list_medium_line_x2_t3_g4_t2

0x0527,	// (0x0004c76b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0527,	// (0x0004c76b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0005bfa1) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0005bfa1) list_medium_line_x2_t3_g4_t

0x0bf0,	// (0x0004ce34) list_medium_line_g2_g1_ParamLimits

0x0bf0,	// (0x0004ce34) list_medium_line_g2_g1

0x0bfc,	// (0x0004ce40) list_medium_line_g2_g2_ParamLimits

0x0bfc,	// (0x0004ce40) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0005bc5e) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0005bc5e) list_medium_line_g2_g

0x101a,	// (0x0004d25e) list_medium_line_g2_t1_ParamLimits

0x101a,	// (0x0004d25e) list_medium_line_g2_t1

0x0bf0,	// (0x0004ce34) list_medium_line_t3_g2_g1_ParamLimits

0x0bf0,	// (0x0004ce34) list_medium_line_t3_g2_g1

0x0bfc,	// (0x0004ce40) list_medium_line_t3_g2_g2_ParamLimits

0x0bfc,	// (0x0004ce40) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0005bc5e) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0005bc5e) list_medium_line_t3_g2_g

0xce81,	// (0x000590c5) list_medium_line_t3_g2_t1_ParamLimits

0xce81,	// (0x000590c5) list_medium_line_t3_g2_t1

0xce98,	// (0x000590dc) list_medium_line_t3_g2_t2_ParamLimits

0xce98,	// (0x000590dc) list_medium_line_t3_g2_t2

0xcead,	// (0x000590f1) list_medium_line_t3_g2_t3_ParamLimits

0xcead,	// (0x000590f1) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0005bfa8) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0005bfa8) list_medium_line_t3_g2_t

0x0eb9,	// (0x0004d0fd) list_medium_line_right_icon_g1

0x102f,	// (0x0004d273) list_medium_line_right_icon_t1

0x0bf0,	// (0x0004ce34) list_medium_line_t2_g1_ParamLimits

0x0bf0,	// (0x0004ce34) list_medium_line_t2_g1

0xcec2,	// (0x00059106) list_medium_line_t2_t1_ParamLimits

0xcec2,	// (0x00059106) list_medium_line_t2_t1

0xcedc,	// (0x00059120) list_medium_line_t2_t2_ParamLimits

0xcedc,	// (0x00059120) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0005bfaf) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0005bfaf) list_medium_line_t2_t

0x0bf0,	// (0x0004ce34) list_medium_line_t3_g1_ParamLimits

0x0bf0,	// (0x0004ce34) list_medium_line_t3_g1

0xcef1,	// (0x00059135) list_medium_line_t3_t1_ParamLimits

0xcef1,	// (0x00059135) list_medium_line_t3_t1

0xcf08,	// (0x0005914c) list_medium_line_t3_t2_ParamLimits

0xcf08,	// (0x0005914c) list_medium_line_t3_t2

0xcf1d,	// (0x00059161) list_medium_line_t3_t3_ParamLimits

0xcf1d,	// (0x00059161) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0005bfb4) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0005bfb4) list_medium_line_t3_t

0x0bf0,	// (0x0004ce34) list_medium_line_g3_g1_ParamLimits

0x0bf0,	// (0x0004ce34) list_medium_line_g3_g1

0x103d,	// (0x0004d281) list_medium_line_g3_g2_ParamLimits

0x103d,	// (0x0004d281) list_medium_line_g3_g2

0x0bfc,	// (0x0004ce40) list_medium_line_g3_g3_ParamLimits

0x0bfc,	// (0x0004ce40) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0005bfbb) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0005bfbb) list_medium_line_g3_g

0x1049,	// (0x0004d28d) list_medium_line_g3_t1_ParamLimits

0x1049,	// (0x0004d28d) list_medium_line_g3_t1

0x0bf0,	// (0x0004ce34) list_medium_line_t2_g3_g1_ParamLimits

0x0bf0,	// (0x0004ce34) list_medium_line_t2_g3_g1

0x103d,	// (0x0004d281) list_medium_line_t2_g3_g2_ParamLimits

0x103d,	// (0x0004d281) list_medium_line_t2_g3_g2

0x0bfc,	// (0x0004ce40) list_medium_line_t2_g3_g3_ParamLimits

0x0bfc,	// (0x0004ce40) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0005bfbb) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0005bfbb) list_medium_line_t2_g3_g

0xcf2f,	// (0x00059173) list_medium_line_t2_g3_t1_ParamLimits

0xcf2f,	// (0x00059173) list_medium_line_t2_g3_t1

0xcf49,	// (0x0005918d) list_medium_line_t2_g3_t2_ParamLimits

0xcf49,	// (0x0005918d) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0005bfc2) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0005bfc2) list_medium_line_t2_g3_t

0x0bf0,	// (0x0004ce34) list_medium_line_t3_g3_g1_ParamLimits

0x0bf0,	// (0x0004ce34) list_medium_line_t3_g3_g1

0x103d,	// (0x0004d281) list_medium_line_t3_g3_g2_ParamLimits

0x103d,	// (0x0004d281) list_medium_line_t3_g3_g2

0x0bfc,	// (0x0004ce40) list_medium_line_t3_g3_g3_ParamLimits

0x0bfc,	// (0x0004ce40) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0005bfbb) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0005bfbb) list_medium_line_t3_g3_g

0xcf5e,	// (0x000591a2) list_medium_line_t3_g3_t1_ParamLimits

0xcf5e,	// (0x000591a2) list_medium_line_t3_g3_t1

0xcf72,	// (0x000591b6) list_medium_line_t3_g3_t2_ParamLimits

0xcf72,	// (0x000591b6) list_medium_line_t3_g3_t2

0xcf84,	// (0x000591c8) list_medium_line_t3_g3_t3_ParamLimits

0xcf84,	// (0x000591c8) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0005bfc7) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0005bfc7) list_medium_line_t3_g3_t

0x0f39,	// (0x0004d17d) list_medium_line_right_iconx2_g1

0x0eb9,	// (0x0004d0fd) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005bfce) list_medium_line_right_iconx2_g

0x105e,	// (0x0004d2a2) list_medium_line_right_iconx2_t1

0x0f39,	// (0x0004d17d) list_medium_line_t2_right_iconx2_g1

0x0eb9,	// (0x0004d0fd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005bfce) list_medium_line_t2_right_iconx2_g

0xcf96,	// (0x000591da) list_medium_line_t2_right_iconx2_t1

0xcfa6,	// (0x000591ea) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0005bfd3) list_medium_line_t2_right_iconx2_t

0x106c,	// (0x0004d2b0) list_medium_line_x4_t4_t1

0xcfb4,	// (0x000591f8) list_medium_line_x4_t4_t2

0xcfc4,	// (0x00059208) list_medium_line_x4_t4_t3

0xcfd4,	// (0x00059218) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0005bfd8) list_medium_line_x4_t4_t

0xd00d,	// (0x00059251) tport_appsw_pane_ParamLimits

0xd00d,	// (0x00059251) tport_appsw_pane

0xd019,	// (0x0005925d) tport_contact_pane_ParamLimits

0xd019,	// (0x0005925d) tport_contact_pane

0xd029,	// (0x0005926d) tport_listscroll_pane_ParamLimits

0xd029,	// (0x0005926d) tport_listscroll_pane

0xd039,	// (0x0005927d) cell_tport_appsw_pane_ParamLimits

0xd039,	// (0x0005927d) cell_tport_appsw_pane

0x4870,	// (0x00050ab4) tport_appsw_pane_g1_ParamLimits

0x4870,	// (0x00050ab4) tport_appsw_pane_g1

0x107a,	// (0x0004d2be) tport_contact_pane_g1

0xea71,	// (0x0005acb5) tport_contact_pane_t1

0x1083,	// (0x0004d2c7) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0005bfe1) tport_contact_pane_t

0x1091,	// (0x0004d2d5) list_tport_pane

0x109a,	// (0x0004d2de) scroll_pane_cp_030

0x10ab,	// (0x0004d2ef) cell_tport_appsw_pane_g1

0x10bb,	// (0x0004d2ff) cell_tport_appsw_pane_t1

0x037e,	// (0x0004c5c2) grid_highlight_pane_cp019

0xd064,	// (0x000592a8) list_tport_double_graphic_pane_ParamLimits

0xd064,	// (0x000592a8) list_tport_double_graphic_pane

0x334c,	// (0x0004f590) list_highlight_pane_cp023_ParamLimits

0x334c,	// (0x0004f590) list_highlight_pane_cp023

0xd076,	// (0x000592ba) list_tport_double_graphic_pane_g1_ParamLimits

0xd076,	// (0x000592ba) list_tport_double_graphic_pane_g1

0xd083,	// (0x000592c7) list_tport_double_graphic_pane_t1_ParamLimits

0xd083,	// (0x000592c7) list_tport_double_graphic_pane_t1

0xd098,	// (0x000592dc) list_tport_double_graphic_pane_t2_ParamLimits

0xd098,	// (0x000592dc) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0005bfed) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0005bfed) list_tport_double_graphic_pane_t

0x037e,	// (0x0004c5c2) main_cale_note_pane

0xaf25,	// (0x00057169) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaf25,	// (0x00057169) cell_vitu2_function_top_wide_pane_cp01

0xc838,	// (0x00058a7c) wait_bar_pane_cp05_ParamLimits

0x037e,	// (0x0004c5c2) listscroll_cmail_pane

0x10d1,	// (0x0004d315) list_cmail_pane

0xd0b4,	// (0x000592f8) list_cmail_body_pane

0xd0ce,	// (0x00059312) list_single_cmail_header_caption_pane

0xd0f3,	// (0x00059337) list_single_cmail_header_detail_pane_ParamLimits

0xd0f3,	// (0x00059337) list_single_cmail_header_detail_pane

0xd123,	// (0x00059367) list_single_cmail_header_caption_pane_t1

0xd131,	// (0x00059375) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd131,	// (0x00059375) list_single_cmail_header_detail_pane_g1

0x10f2,	// (0x0004d336) list_single_cmail_header_detail_pane_g2_ParamLimits

0x10f2,	// (0x0004d336) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0005bff2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0005bff2) list_single_cmail_header_detail_pane_g

0x110b,	// (0x0004d34f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x110b,	// (0x0004d34f) list_single_cmail_header_detail_pane_t1

0x1141,	// (0x0004d385) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1141,	// (0x0004d385) list_single_cmail_header_editor_pane_bg

0xec12,	// (0x0005ae56) list_cmail_body_pane_g1

0x1153,	// (0x0004d397) list_cmail_body_pane_t1

0xe002,	// (0x0005a246) list_single_cmail_header_editor_pane_bg_g1

0x265f,	// (0x0004e8a3) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe012,	// (0x0005a256) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe00a,	// (0x0005a24e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe226,	// (0x0005a46a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe032,	// (0x0005a276) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe022,	// (0x0005a266) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe02a,	// (0x0005a26e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x263f,	// (0x0004e883) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd16b,	// (0x000593af) calenote_gesture_pane_ParamLimits

0xd16b,	// (0x000593af) calenote_gesture_pane

0xd185,	// (0x000593c9) calenote_window_pane_ParamLimits

0xd185,	// (0x000593c9) calenote_window_pane

0x1161,	// (0x0004d3a5) popup_note_window_cp01

0xd19d,	// (0x000593e1) calenote_swipe_1_pane_ParamLimits

0xd19d,	// (0x000593e1) calenote_swipe_1_pane

0xcbfc,	// (0x00058e40) calenote_swipe_2_pane_ParamLimits

0xcbfc,	// (0x00058e40) calenote_swipe_2_pane

0xef76,	// (0x0005b1ba) calenote_swipe_1_pane_g1_ParamLimits

0xef76,	// (0x0005b1ba) calenote_swipe_1_pane_g1

0xef83,	// (0x0005b1c7) calenote_swipe_1_pane_g2_ParamLimits

0xef83,	// (0x0005b1c7) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x0005bf1c) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x0005bf1c) calenote_swipe_1_pane_g

0x1173,	// (0x0004d3b7) calenote_swipe_1_pane_t1_ParamLimits

0x1173,	// (0x0004d3b7) calenote_swipe_1_pane_t1

0xef76,	// (0x0005b1ba) calenote_swipe_2_pane_g1_ParamLimits

0xef76,	// (0x0005b1ba) calenote_swipe_2_pane_g1

0x1192,	// (0x0004d3d6) calenote_swipe_2_pane_g2_ParamLimits

0x1192,	// (0x0004d3d6) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0005bffe) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0005bffe) calenote_swipe_2_pane_g

0x119e,	// (0x0004d3e2) calenote_swipe_2_pane_t1_ParamLimits

0x119e,	// (0x0004d3e2) calenote_swipe_2_pane_t1

0x037e,	// (0x0004c5c2) main_mup_navstr_pane

0x9ca4,	// (0x00055ee8) main_mup3_pane_t7_ParamLimits

0x9ca4,	// (0x00055ee8) main_mup3_pane_t7

0xa67e,	// (0x000568c2) main_mp4_pane_g6_ParamLimits

0xa67e,	// (0x000568c2) main_mp4_pane_g6

0xa9fe,	// (0x00056c42) main_image3_pane_t4_ParamLimits

0xa9fe,	// (0x00056c42) main_image3_pane_t4

0xd1b0,	// (0x000593f4) popup_navstr_preview_pane_ParamLimits

0xd1b0,	// (0x000593f4) popup_navstr_preview_pane

0xd1bc,	// (0x00059400) scroll_navstr_pane_ParamLimits

0xd1bc,	// (0x00059400) scroll_navstr_pane

0x037e,	// (0x0004c5c2) bg_popup_preview_window_pane_cp04

0x11c5,	// (0x0004d409) popup_navstr_preview_pane_t1

0xd1c8,	// (0x0005940c) scroll_navstr_pane_g1_ParamLimits

0xd1c8,	// (0x0005940c) scroll_navstr_pane_g1

0xd1d5,	// (0x00059419) scroll_navstr_pane_t1_ParamLimits

0xd1d5,	// (0x00059419) scroll_navstr_pane_t1

0x116a,	// (0x0004d3ae) bg_button_pane_cp014

0x116a,	// (0x0004d3ae) bg_button_pane_cp030

0xcaf0,	// (0x00058d34) list_double_fisheye_pane_g4_ParamLimits

0xcaf0,	// (0x00058d34) list_double_fisheye_pane_g4

0xcafc,	// (0x00058d40) list_double_fisheye_pane_g5_ParamLimits

0xcafc,	// (0x00058d40) list_double_fisheye_pane_g5

0x10d9,	// (0x0004d31d) sp_fs_scroll_pane_cp03

0xf069,	// (0x0005b2ad) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf075,	// (0x0005b2b9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x0005bf39) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf081,	// (0x0005b2c5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd0aa,	// (0x000592ee) sp_fs_scroll_pane_cp02

0x236d,	// (0x0004e5b1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x236d,	// (0x0004e5b1) popup_sp_fs_calendar_preview_list_single_pane

0x037e,	// (0x0004c5c2) main_cam6_pano_pane

0x334c,	// (0x0004f590) main_mup3_pane_ParamLimits

0x037e,	// (0x0004c5c2) main_phacti_pane

0xc70d,	// (0x00058951) bg_button_pane_cp11

0xc725,	// (0x00058969) main_mobtv_info_pane_g2_ParamLimits

0xc725,	// (0x00058969) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x0005be99) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x0005be99) main_mobtv_info_pane_g

0xc8d7,	// (0x00058b1b) sc_clock_pane_t5_ParamLimits

0xc8d7,	// (0x00058b1b) sc_clock_pane_t5

0xc97e,	// (0x00058bc2) main_radioblah_pane_g1_ParamLimits

0xeec2,	// (0x0005b106) main_radioblah_pane_t3_ParamLimits

0xeec2,	// (0x0005b106) main_radioblah_pane_t3

0xeeda,	// (0x0005b11e) main_radioblah_pane_t4_ParamLimits

0xeeda,	// (0x0005b11e) main_radioblah_pane_t4

0xc99c,	// (0x00058be0) main_radioblah_text_pane_ParamLimits

0xc99c,	// (0x00058be0) main_radioblah_text_pane

0xc9a9,	// (0x00058bed) main_radioblah_info_pane_g1_ParamLimits

0xca3e,	// (0x00058c82) main_radioblah_info_pane_t4_ParamLimits

0xca3e,	// (0x00058c82) main_radioblah_info_pane_t4

0x334c,	// (0x0004f590) main_sp_fs_calendar_pane

0xd1e7,	// (0x0005942b) main_phacti_pane_g1

0xd1ef,	// (0x00059433) phacti_note_pane_ParamLimits

0xd1ef,	// (0x00059433) phacti_note_pane

0x11dc,	// (0x0004d420) phacti_term_pane_ParamLimits

0x11dc,	// (0x0004d420) phacti_term_pane

0x11f1,	// (0x0004d435) phacti_note_pane_t1_ParamLimits

0x11f1,	// (0x0004d435) phacti_note_pane_t1

0x1208,	// (0x0004d44c) phacti_term_pane_g1

0x1210,	// (0x0004d454) phacti_term_pane_t1_ParamLimits

0x1210,	// (0x0004d454) phacti_term_pane_t1

0x123a,	// (0x0004d47e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2460,	// (0x0004e6a4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0005c008) popup_sp_fs_calendar_preview_list_single_pane_g

0x1242,	// (0x0004d486) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1242,	// (0x0004d486) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1257,	// (0x0004d49b) aid_popup_sp_fs_bg_corner_pane

0x4597,	// (0x000507db) popup_sp_fs_calendar_preview_bg_pane_g1

0x037e,	// (0x0004c5c2) popup_sp_fs_calendar_preview_bg_pane

0x125f,	// (0x0004d4a3) popup_sp_fs_calendar_preview_list_pane

0x334c,	// (0x0004f590) bg_main_sp_fs_cale_pane_ParamLimits

0x334c,	// (0x0004f590) bg_main_sp_fs_cale_pane

0x1267,	// (0x0004d4ab) listscroll_cale_mrui_pane_ParamLimits

0x1267,	// (0x0004d4ab) listscroll_cale_mrui_pane

0x127b,	// (0x0004d4bf) listscroll_sp_fs_schedule_track_pane

0x1284,	// (0x0004d4c8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1284,	// (0x0004d4c8) main_sp_fs_ctrlbar_pane_cp01

0x1295,	// (0x0004d4d9) main_sp_fs_ribbon_pane

0x129d,	// (0x0004d4e1) popup_sp_fs_cale_preview_window

0xd232,	// (0x00059476) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd232,	// (0x00059476) list_single_sp_fs_schedule_track_pane

0x0b21,	// (0x0004cd65) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0b21,	// (0x0004cd65) bg_sp_fs_highlight_list_pane_cp03

0xd251,	// (0x00059495) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd251,	// (0x00059495) list_single_sp_fs_schedule_track_pane_g1

0xd25d,	// (0x000594a1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd25d,	// (0x000594a1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0005c00d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0005c00d) list_single_sp_fs_schedule_track_pane_g

0xd269,	// (0x000594ad) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd269,	// (0x000594ad) list_single_sp_fs_schedule_track_pane_t1

0xd281,	// (0x000594c5) sp_fs_schedule_track_pane_ParamLimits

0xd281,	// (0x000594c5) sp_fs_schedule_track_pane

0x12af,	// (0x0004d4f3) sp_fs_schedule_track_pane_g1

0x12b7,	// (0x0004d4fb) sp_fs_schedule_track_pane_g2

0x12bf,	// (0x0004d503) sp_fs_schedule_track_pane_g3

0x12c7,	// (0x0004d50b) sp_fs_schedule_track_pane_g4

0x12cf,	// (0x0004d513) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0005c012) sp_fs_schedule_track_pane_g

0xe002,	// (0x0005a246) bg_sp_fs_schedule_viewer_highlight_g1

0x265f,	// (0x0004e8a3) bg_sp_fs_schedule_viewer_highlight_g2

0xe00a,	// (0x0005a24e) bg_sp_fs_schedule_viewer_highlight_g3

0xe012,	// (0x0005a256) bg_sp_fs_schedule_viewer_highlight_g4

0xe226,	// (0x0005a46a) bg_sp_fs_schedule_viewer_highlight_g5

0xe022,	// (0x0005a266) bg_sp_fs_schedule_viewer_highlight_g6

0xe02a,	// (0x0005a26e) bg_sp_fs_schedule_viewer_highlight_g7

0xe032,	// (0x0005a276) bg_sp_fs_schedule_viewer_highlight_g8

0x263f,	// (0x0004e883) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0005c01d) bg_sp_fs_schedule_viewer_highlight_g

0x037e,	// (0x0004c5c2) bg_main_sp_fs_ribbon_pane

0xd291,	// (0x000594d5) main_sp_fs_ribbon_pane_g1

0x12d7,	// (0x0004d51b) main_sp_fs_ribbon_pane_t1

0xd29a,	// (0x000594de) main_sp_fs_ribbon_pane_t2

0x12e6,	// (0x0004d52a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0005c030) main_sp_fs_ribbon_pane_t

0x12f5,	// (0x0004d539) main_sp_fs_ribbon_scheduler_pane

0x12fd,	// (0x0004d541) bg_main_sp_fs_ribbon_pane_g1

0x1306,	// (0x0004d54a) bg_main_sp_fs_ribbon_pane_g2

0x130f,	// (0x0004d553) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0005c037) bg_main_sp_fs_ribbon_pane_g

0x1317,	// (0x0004d55b) main_sp_fs_ribbon_scheduler_pane_g1

0x1320,	// (0x0004d564) main_sp_fs_ribbon_scheduler_pane_g2

0x1329,	// (0x0004d56d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0005c03e) main_sp_fs_ribbon_scheduler_pane_g

0x1332,	// (0x0004d576) list_cale_mrui_pane

0xd2a9,	// (0x000594ed) sp_fs_scroll_pane_cp07_ParamLimits

0xd2a9,	// (0x000594ed) sp_fs_scroll_pane_cp07

0xd2bf,	// (0x00059503) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd2bf,	// (0x00059503) bg_sp_fs_schedule_viewer_highlight

0x133b,	// (0x0004d57f) list_single_sp_fs_schedule_track_pane_cp01

0x1343,	// (0x0004d587) list_sp_fs_schedule_track_pane

0x134b,	// (0x0004d58f) sp_fs_scroll_pane_cp06_ParamLimits

0x134b,	// (0x0004d58f) sp_fs_scroll_pane_cp06

0x4597,	// (0x000507db) bgmain_sp_fs_calendar_pane_g1

0xd2cc,	// (0x00059510) list_single_cale_mrui_pane_ParamLimits

0xd2cc,	// (0x00059510) list_single_cale_mrui_pane

0x135d,	// (0x0004d5a1) list_single_cale_mrui_row_pane_ParamLimits

0x135d,	// (0x0004d5a1) list_single_cale_mrui_row_pane

0x136a,	// (0x0004d5ae) list_single_cale_mrui_row_pane_g1_ParamLimits

0x136a,	// (0x0004d5ae) list_single_cale_mrui_row_pane_g1

0x13af,	// (0x0004d5f3) list_single_cale_mrui_row_pane_t1_ParamLimits

0x13af,	// (0x0004d5f3) list_single_cale_mrui_row_pane_t1

0xd2f7,	// (0x0005953b) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd2f7,	// (0x0005953b) list_single_cale_mrui_row_pane_t2

0x13c1,	// (0x0004d605) list_single_cale_mrui_row_pane_t3_ParamLimits

0x13c1,	// (0x0004d605) list_single_cale_mrui_row_pane_t3

0x13f0,	// (0x0004d634) list_single_cale_mrui_row_pane_t4_ParamLimits

0x13f0,	// (0x0004d634) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x0005c04c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x0005c04c) list_single_cale_mrui_row_pane_t

0xd35d,	// (0x000595a1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd35d,	// (0x000595a1) list_single_cmail_header_editor_pane_bg_cp01

0xd37d,	// (0x000595c1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd37d,	// (0x000595c1) list_single_cmail_header_editor_pane_bg_cp02

0xd399,	// (0x000595dd) main_radioblah_text_pane_t1_ParamLimits

0xd399,	// (0x000595dd) main_radioblah_text_pane_t1

0x141f,	// (0x0004d663) cam6_indi_pane_cp01

0x1427,	// (0x0004d66b) cam6_mode_pane_cp01

0x142f,	// (0x0004d673) cam6_pano_pane

0x1438,	// (0x0004d67c) cam6_zoom_pane_cp01

0x1440,	// (0x0004d684) cam6_pano_image_pane

0x144b,	// (0x0004d68f) cam6_pano_pane_g1

0xec12,	// (0x0005ae56) cam6_pano_pane_g2

0x1454,	// (0x0004d698) cam6_pano_pane_g3

0x145d,	// (0x0004d6a1) cam6_pano_pane_g4

0x4b41,	// (0x00050d85) cam6_pano_pane_g5

0x1466,	// (0x0004d6aa) cam6_pano_pane_g6

0x1470,	// (0x0004d6b4) cam6_pano_pane_g7

0x1478,	// (0x0004d6bc) cam6_pano_pane_g8

0x1481,	// (0x0004d6c5) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x0005c055) cam6_pano_pane_g

0x037e,	// (0x0004c5c2) main_browser_tag_pane

0x11bd,	// (0x0004d401) grid_navstr_albumart_pane

0x148c,	// (0x0004d6d0) cell_navstr_albumart_pane_ParamLimits

0x148c,	// (0x0004d6d0) cell_navstr_albumart_pane

0x14af,	// (0x0004d6f3) cell_navstr_albumart_pane_g1

0x3f6d,	// (0x000501b1) cell_navstr_albumart_pane_g2

0x3f7d,	// (0x000501c1) cell_navstr_albumart_pane_g3

0x3f75,	// (0x000501b9) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x0005c068) cell_navstr_albumart_pane_g

0xd3b4,	// (0x000595f8) bt_list_pane_ParamLimits

0xd3b4,	// (0x000595f8) bt_list_pane

0xd3d4,	// (0x00059618) bt_list_pane_t1

0xd3e3,	// (0x00059627) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x0005c071) bt_list_pane_t

0x037e,	// (0x0004c5c2) main_cale_prevew_pane

0xd3f2,	// (0x00059636) popup_cale_preview_window_ParamLimits

0xd3f2,	// (0x00059636) popup_cale_preview_window

0x334c,	// (0x0004f590) bg_popup_preview_window_pane_cp05_ParamLimits

0x334c,	// (0x0004f590) bg_popup_preview_window_pane_cp05

0x14b7,	// (0x0004d6fb) list_cale_preview_pane_ParamLimits

0x14b7,	// (0x0004d6fb) list_cale_preview_pane

0x182b,	// (0x0004da6f) list_double_cale_preview_pane_ParamLimits

0x182b,	// (0x0004da6f) list_double_cale_preview_pane

0xd40b,	// (0x0005964f) list_single_cale_preview_pane_ParamLimits

0xd40b,	// (0x0005964f) list_single_cale_preview_pane

0xd421,	// (0x00059665) list_single_cale_preview_pane_g1

0xd429,	// (0x0005966d) list_single_cale_preview_pane_t1_ParamLimits

0xd429,	// (0x0005966d) list_single_cale_preview_pane_t1

0xd43e,	// (0x00059682) list_double_cale_preview_pane_g1

0xd446,	// (0x0005968a) list_double_cale_preview_pane_t1_ParamLimits

0xd446,	// (0x0005968a) list_double_cale_preview_pane_t1

0xd45b,	// (0x0005969f) list_double_cale_preview_pane_t2_ParamLimits

0xd45b,	// (0x0005969f) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x0005c076) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x0005c076) list_double_cale_preview_pane_t

0x037e,	// (0x0004c5c2) main_ezdial_pane

0x334c,	// (0x0004f590) main_sp_fs_email_pane_ParamLimits

0xcc34,	// (0x00058e78) cmail_ddmenu_btn01_pane_ParamLimits

0xcc34,	// (0x00058e78) cmail_ddmenu_btn01_pane

0xcc51,	// (0x00058e95) cmail_ddmenu_btn02_pane_ParamLimits

0xcc51,	// (0x00058e95) cmail_ddmenu_btn02_pane

0xcc6f,	// (0x00058eb3) cmail_ddmenu_btn03_pane_ParamLimits

0xcc6f,	// (0x00058eb3) cmail_ddmenu_btn03_pane

0xcc9d,	// (0x00058ee1) main_sp_fs_ctrlbar_pane_ParamLimits

0xccb7,	// (0x00058efb) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd0b4,	// (0x000592f8) list_cmail_body_pane_ParamLimits

0x10e9,	// (0x0004d32d) bg_button_pane_cp12

0x10fe,	// (0x0004d342) list_single_cmail_header_detail_pane_g3_ParamLimits

0x10fe,	// (0x0004d342) list_single_cmail_header_detail_pane_g3

0xd147,	// (0x0005938b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd147,	// (0x0005938b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0005bff9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0005bff9) list_single_cmail_header_detail_pane_t

0x1225,	// (0x0004d469) phacti_term_pane_t2_ParamLimits

0x1225,	// (0x0004d469) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0005c003) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0005c003) phacti_term_pane_t

0x14c3,	// (0x0004d707) aid_size_list_single_double

0xd473,	// (0x000596b7) popup_ezdial_listscroll_window

0xd494,	// (0x000596d8) popup_number_entry_window_cp01

0x2d3c,	// (0x0004ef80) bg_popup_call_pane_cp09

0x14cf,	// (0x0004d713) ezdial_list_pane

0x14d7,	// (0x0004d71b) scroll_pane_cp23

0x437c,	// (0x000505c0) bg_button_pane_cp028_ParamLimits

0x437c,	// (0x000505c0) bg_button_pane_cp028

0xd4a2,	// (0x000596e6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd4a2,	// (0x000596e6) cmail_ddmenu_btn01_pane_g1

0xd4b4,	// (0x000596f8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd4b4,	// (0x000596f8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x0005c07b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x0005c07b) cmail_ddmenu_btn01_pane_g

0x14df,	// (0x0004d723) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x14df,	// (0x0004d723) cmail_ddmenu_btn01_pane_t1

0x4150,	// (0x00050394) bg_button_pane_cp029_ParamLimits

0x4150,	// (0x00050394) bg_button_pane_cp029

0xd4b4,	// (0x000596f8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd4b4,	// (0x000596f8) cmail_ddmenu_btn02_pane_g1

0xd4cc,	// (0x00059710) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd4cc,	// (0x00059710) cmail_ddmenu_btn02_pane_t1

0x0b21,	// (0x0004cd65) bg_button_pane_cp031_ParamLimits

0x0b21,	// (0x0004cd65) bg_button_pane_cp031

0xd4b4,	// (0x000596f8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd4b4,	// (0x000596f8) cmail_ddmenu_btn03_pane_g1

0xd4cc,	// (0x00059710) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd4cc,	// (0x00059710) cmail_ddmenu_btn03_pane_t1

0xa89b,	// (0x00056adf) cell_dialer2_keypad_pane_t1_ParamLimits

0xa8b5,	// (0x00056af9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa8b5,	// (0x00056af9) cell_dialer2_keypad_pane_t1_copy1

0xc5ad,	// (0x000587f1) ncimui_group_button_pane

0x334c,	// (0x0004f590) main_sp_fs_calendar_pane_ParamLimits

0xd0ce,	// (0x00059312) list_single_cmail_header_caption_pane_ParamLimits

0x0d55,	// (0x0004cf99) aid_recal_txt_sm_pane

0x037e,	// (0x0004c5c2) mian_recal_day_pane

0x129d,	// (0x0004d4e1) popup_sp_fs_cale_preview_window_ParamLimits

0x037e,	// (0x0004c5c2) list_recal_day_pane

0x150e,	// (0x0004d752) list_single_recal_day_pane_ParamLimits

0x150e,	// (0x0004d752) list_single_recal_day_pane

0x1520,	// (0x0004d764) list_single_recal_day_pane_g1_ParamLimits

0x1520,	// (0x0004d764) list_single_recal_day_pane_g1

0x152c,	// (0x0004d770) list_single_recal_day_pane_g2_ParamLimits

0x152c,	// (0x0004d770) list_single_recal_day_pane_g2

0x153c,	// (0x0004d780) list_single_recal_day_pane_g3_ParamLimits

0x153c,	// (0x0004d780) list_single_recal_day_pane_g3

0xd4f0,	// (0x00059734) list_single_recal_day_pane_g4_ParamLimits

0xd4f0,	// (0x00059734) list_single_recal_day_pane_g4

0x1548,	// (0x0004d78c) list_single_recal_day_pane_g5_ParamLimits

0x1548,	// (0x0004d78c) list_single_recal_day_pane_g5

0x1558,	// (0x0004d79c) list_single_recal_day_pane_g6_ParamLimits

0x1558,	// (0x0004d79c) list_single_recal_day_pane_g6

0x0004,

0xfe46,	// (0x0005c08a) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x0005c08a) list_single_recal_day_pane_g

0x156f,	// (0x0004d7b3) list_single_recal_day_pane_t1

0x1581,	// (0x0004d7c5) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0005c095) list_single_recal_day_pane_t

0xd510,	// (0x00059754) ncimui_query_button_pane_ParamLimits

0xd510,	// (0x00059754) ncimui_query_button_pane

0xd520,	// (0x00059764) ncimui_query_button_pane_t1_ParamLimits

0xd520,	// (0x00059764) ncimui_query_button_pane_t1

0x1596,	// (0x0004d7da) ncimui_query_button_pane_t2_ParamLimits

0x1596,	// (0x0004d7da) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0005c09a) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0005c09a) ncimui_query_button_pane_t

0xd533,	// (0x00059777) query_button_pane_ParamLimits

0xd533,	// (0x00059777) query_button_pane

0x037e,	// (0x0004c5c2) bg_button_pane_cp0028

0x15a9,	// (0x0004d7ed) query_button_pane_t1

0x8cf4,	// (0x00054f38) main_tport_pane_ParamLimits

0xcfe4,	// (0x00059228) bg_popup_window_pane_cp01_ParamLimits

0xcfe4,	// (0x00059228) bg_popup_window_pane_cp01

0xcff1,	// (0x00059235) heading_pane_cp08_ParamLimits

0xcff1,	// (0x00059235) heading_pane_cp08

0xcfff,	// (0x00059243) heading_pane_cp07_ParamLimits

0xcfff,	// (0x00059243) heading_pane_cp07

0x10ab,	// (0x0004d2ef) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0005bfe6) cell_tport_appsw_pane_g

0x840b,	// (0x0005464f) input_candi_list_open_g1

0x2806,	// (0x0004ea4a) list_cale_time_pane_g6_ParamLimits

0x2806,	// (0x0004ea4a) list_cale_time_pane_g6

0x972d,	// (0x00055971) aid_size_touch_calib_1_ParamLimits

0x972d,	// (0x00055971) aid_size_touch_calib_1

0x9739,	// (0x0005597d) aid_size_touch_calib_2_ParamLimits

0x9739,	// (0x0005597d) aid_size_touch_calib_2

0x9747,	// (0x0005598b) aid_size_touch_calib_3_ParamLimits

0x9747,	// (0x0005598b) aid_size_touch_calib_3

0x9757,	// (0x0005599b) aid_size_touch_calib_4_ParamLimits

0x9757,	// (0x0005599b) aid_size_touch_calib_4

0x9765,	// (0x000559a9) main_touch_calib_button_group_pane_ParamLimits

0x9765,	// (0x000559a9) main_touch_calib_button_group_pane

0x9773,	// (0x000559b7) main_touch_calib_pane_g1_ParamLimits

0x977f,	// (0x000559c3) main_touch_calib_pane_g2_ParamLimits

0x978b,	// (0x000559cf) main_touch_calib_pane_g3_ParamLimits

0x9797,	// (0x000559db) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0005b9b4) main_touch_calib_pane_g_ParamLimits

0x97a3,	// (0x000559e7) main_touch_calib_pane_t1_ParamLimits

0x97ba,	// (0x000559fe) main_touch_calib_pane_t2_ParamLimits

0x97d1,	// (0x00055a15) main_touch_calib_pane_t3_ParamLimits

0x97e5,	// (0x00055a29) main_touch_calib_pane_t4_ParamLimits

0x97f9,	// (0x00055a3d) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0005b9bd) main_touch_calib_pane_t_ParamLimits

0x4917,	// (0x00050b5b) list_single_fp_cale_pane_g3_ParamLimits

0x4917,	// (0x00050b5b) list_single_fp_cale_pane_g3

0xacfb,	// (0x00056f3f) bg_button_pane_cp012_ParamLimits

0xacfb,	// (0x00056f3f) bg_vkb2_func_pane_cp03_ParamLimits

0xb6d3,	// (0x00057917) cell_vitu2_function_top_pane_g1_ParamLimits

0xacfb,	// (0x00056f3f) bg_vkb2_func_pane_cp04_ParamLimits

0xc54b,	// (0x0005878f) main_ncimui_button_group_pane_ParamLimits

0xc54b,	// (0x0005878f) main_ncimui_button_group_pane

0xc59b,	// (0x000587df) main_ncimui_pane_t3_ParamLimits

0xc59b,	// (0x000587df) main_ncimui_pane_t3

0x11d3,	// (0x0004d417) phacti_button_group_pane

0x14c3,	// (0x0004d707) aid_size_list_single_double_ParamLimits

0xd473,	// (0x000596b7) popup_ezdial_listscroll_window_ParamLimits

0xd494,	// (0x000596d8) popup_number_entry_window_cp01_ParamLimits

0xd540,	// (0x00059784) phacti_button_pane_ParamLimits

0xd540,	// (0x00059784) phacti_button_pane

0x037e,	// (0x0004c5c2) bg_button_pane_cp14

0x15b7,	// (0x0004d7fb) phacti_button_pane_t1

0xd551,	// (0x00059795) main_touch_calib_button_pane_ParamLimits

0xd551,	// (0x00059795) main_touch_calib_button_pane

0x2269,	// (0x0004e4ad) bg_button_pane_cp18_ParamLimits

0x2269,	// (0x0004e4ad) bg_button_pane_cp18

0x15c5,	// (0x0004d809) main_touch_calib_button_pane_t1_ParamLimits

0x15c5,	// (0x0004d809) main_touch_calib_button_pane_t1

0x15db,	// (0x0004d81f) main_touch_calib_button_pane_t2_ParamLimits

0x15db,	// (0x0004d81f) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0005c09f) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0005c09f) main_touch_calib_button_pane_t

0x037e,	// (0x0004c5c2) cell_ncimui_button_pane

0x037e,	// (0x0004c5c2) bg_button_pane_cp032

0x15f9,	// (0x0004d83d) cell_ncimui_button_pane_t1

0xa911,	// (0x00056b55) image3_infobar_pane_ParamLimits

0xa911,	// (0x00056b55) image3_infobar_pane

0xc8f9,	// (0x00058b3d) fs_bigclock_status_pane_ParamLimits

0xc8f9,	// (0x00058b3d) fs_bigclock_status_pane

0xc906,	// (0x00058b4a) main_fs_bigclock_clock_pane_ParamLimits

0xc906,	// (0x00058b4a) main_fs_bigclock_clock_pane

0xc91c,	// (0x00058b60) main_fs_bigclock_indi_pane_ParamLimits

0xc91c,	// (0x00058b60) main_fs_bigclock_indi_pane

0xc94c,	// (0x00058b90) main_fs_bigclock_swipe_pane_ParamLimits

0xc94c,	// (0x00058b90) main_fs_bigclock_swipe_pane

0x037e,	// (0x0004c5c2) main_fs_clock_dumped_data

0xed31,	// (0x0005af75) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xed31,	// (0x0005af75) list_single_fs_bigclock_indicator_pane_g1

0xed57,	// (0x0005af9b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xed57,	// (0x0005af9b) list_single_fs_bigclock_indicator_pane_g2

0xed71,	// (0x0005afb5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xed71,	// (0x0005afb5) list_single_fs_bigclock_indicator_pane_g3

0xed8b,	// (0x0005afcf) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xed8b,	// (0x0005afcf) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x0005becd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x0005becd) list_single_fs_bigclock_indicator_pane_g

0xedb4,	// (0x0005aff8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xedb4,	// (0x0005aff8) list_single_fs_bigclock_indicator_pane_t1

0xeddc,	// (0x0005b020) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xeddc,	// (0x0005b020) list_single_fs_bigclock_indicator_pane_t2

0xee04,	// (0x0005b048) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xee04,	// (0x0005b048) list_single_fs_bigclock_indicator_pane_t3

0xee2c,	// (0x0005b070) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xee2c,	// (0x0005b070) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x0005bed8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x0005bed8) list_single_fs_bigclock_indicator_pane_t

0x1607,	// (0x0004d84b) image3_infobar_fav_pane_ParamLimits

0x1607,	// (0x0004d84b) image3_infobar_fav_pane

0x1617,	// (0x0004d85b) image3_infobar_loc_pane_ParamLimits

0x1617,	// (0x0004d85b) image3_infobar_loc_pane

0x162b,	// (0x0004d86f) image3_infobar_time_pane_ParamLimits

0x162b,	// (0x0004d86f) image3_infobar_time_pane

0x4597,	// (0x000507db) image3_infobar_time_pane_g1

0x163b,	// (0x0004d87f) image3_infobar_time_pane_t1

0x4597,	// (0x000507db) image3_infobar_loc_pane_g1

0x1649,	// (0x0004d88d) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0005c0a4) image3_infobar_loc_pane_g

0x1651,	// (0x0004d895) image3_infobar_loc_pane_t1

0x4597,	// (0x000507db) image3_infobar_fav_pane_g1

0x165f,	// (0x0004d8a3) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0005c0a9) image3_infobar_fav_pane_g

0x1667,	// (0x0004d8ab) fs_bigclock_status_battery_pane

0x1670,	// (0x0004d8b4) fs_bigclock_status_signal_pane

0x1679,	// (0x0004d8bd) fs_bigclock_status_title_pane

0x1682,	// (0x0004d8c6) fs_bigclock_status_signal_pane_g1

0x168b,	// (0x0004d8cf) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0005c0ae) fs_bigclock_status_signal_pane_g

0x1693,	// (0x0004d8d7) fs_bigclock_status_battery_pane_g1

0x169c,	// (0x0004d8e0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0005c0b3) fs_bigclock_status_battery_pane_g

0x16a4,	// (0x0004d8e8) fs_bigclock_status_title_pane_t1

0x4597,	// (0x000507db) main_fs_bigclock_clock_pane_g1

0x16b2,	// (0x0004d8f6) main_fs_bigclock_clock_pane_g2

0x16b2,	// (0x0004d8f6) main_fs_bigclock_clock_pane_g3

0x16b2,	// (0x0004d8f6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0005c0b8) main_fs_bigclock_clock_pane_g

0x16ba,	// (0x0004d8fe) main_fs_bigclock_clock_pane_t1

0x16c8,	// (0x0004d90c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0005c0c1) main_fs_bigclock_clock_pane_t

0x16d7,	// (0x0004d91b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x16d7,	// (0x0004d91b) list_single_fs_bigclock_indicator_pane

0xd563,	// (0x000597a7) list_single_fs_bigclock_pane_ParamLimits

0xd563,	// (0x000597a7) list_single_fs_bigclock_pane

0x16f1,	// (0x0004d935) main_fs_bigclock_indicator_pane_t1

0x1700,	// (0x0004d944) list_single_fs_bigclock_pane_g1

0x1708,	// (0x0004d94c) list_single_fs_bigclock_pane_t1

0x4597,	// (0x000507db) main_fs_bigclock_swipe_pane_g1

0x174b,	// (0x0004d98f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0005c0d2) main_fs_bigclock_swipe_pane_g

0x1753,	// (0x0004d997) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1753,	// (0x0004d997) main_fs_bigclock_swipe_pane_t1

0x7ba7,	// (0x00053deb) call_type_pane_ParamLimits

0x037e,	// (0x0004c5c2) main_btmg_pane

0x1396,	// (0x0004d5da) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1396,	// (0x0004d5da) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe01,	// (0x0005c045) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0005c045) list_single_cale_mrui_row_pane_g

0x14fe,	// (0x0004d742) list_recal_vselct_arw_lo_pane

0x1506,	// (0x0004d74a) list_recal_vselct_arw_up_pane

0x0d4c,	// (0x0004cf90) list_recal_vselct_pane

0x1770,	// (0x0004d9b4) btmg_button_pane

0xd5c4,	// (0x00059808) main_btmg_pane_g1

0x037e,	// (0x0004c5c2) bg_button_pane_cp044

0x177a,	// (0x0004d9be) btmg_button_pane_t1

0x4148,	// (0x0005038c) aid_listscroll_gen

0x334c,	// (0x0004f590) main_cntbar_detail_pane

0x10c9,	// (0x0004d30d) list_cmail_folder_pane

0x10d9,	// (0x0004d31d) sp_fs_scroll_pane_cp03_ParamLimits

0xd5cc,	// (0x00059810) list_single_fs_dyc_pane_cp01_ParamLimits

0xd5cc,	// (0x00059810) list_single_fs_dyc_pane_cp01

0x1788,	// (0x0004d9cc) aid_size_cmail_indent

0x1791,	// (0x0004d9d5) list_single_dyc_row_pane_cp01

0xd612,	// (0x00059856) cntbar_detail_list_pane_ParamLimits

0xd612,	// (0x00059856) cntbar_detail_list_pane

0xd64c,	// (0x00059890) main_cntbar_detail_cont_pane_ParamLimits

0xd64c,	// (0x00059890) main_cntbar_detail_cont_pane

0x7b41,	// (0x00053d85) scroll_pane_cp032_ParamLimits

0x7b41,	// (0x00053d85) scroll_pane_cp032

0xd658,	// (0x0005989c) cntbar_detail_list_event_pane_ParamLimits

0xd658,	// (0x0005989c) cntbar_detail_list_event_pane

0xd61e,	// (0x00059862) cntbar_detail_list_shct_pane

0x26ad,	// (0x0004e8f1) aid_list_gen

0x179a,	// (0x0004d9de) aid_scroll

0x17a3,	// (0x0004d9e7) aid_size_touch_scroll_bar

0xd66c,	// (0x000598b0) aid_list_double

0x17ac,	// (0x0004d9f0) aid_list_single

0xd675,	// (0x000598b9) aid_list_single_lg

0x17b5,	// (0x0004d9f9) aid_list_z_g_a_sm

0x17bd,	// (0x0004da01) aid_list_z_g_d

0x17c5,	// (0x0004da09) aid_txt_z_prm

0xd67e,	// (0x000598c2) aid_txt_z_prm_cp01

0xd68c,	// (0x000598d0) aid_txt_z_sec

0xd69a,	// (0x000598de) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd69a,	// (0x000598de) main_cntbar_detail_cont_pane_g1

0xd6a7,	// (0x000598eb) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd6a7,	// (0x000598eb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0005c0d7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0005c0d7) main_cntbar_detail_cont_pane_g

0x17d3,	// (0x0004da17) main_cntbar_detail_cont_pane_t1

0x17e1,	// (0x0004da25) main_cntbar_detail_cont_pane_t2

0x17ef,	// (0x0004da33) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0005c0dc) main_cntbar_detail_cont_pane_t

0xd6b3,	// (0x000598f7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd6b3,	// (0x000598f7) cell_cntbar_detail_list_shct_pane

0x17fd,	// (0x0004da41) cntbar_detail_list_shct_pane_g1

0x1806,	// (0x0004da4a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0005c0e3) cntbar_detail_list_shct_pane_g

0xd6c7,	// (0x0005990b) cntbar_detail_list_event_pane_g1_ParamLimits

0xd6c7,	// (0x0005990b) cntbar_detail_list_event_pane_g1

0xd6d3,	// (0x00059917) cntbar_detail_list_event_pane_g2_ParamLimits

0xd6d3,	// (0x00059917) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0005c0e8) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0005c0e8) cntbar_detail_list_event_pane_g

0xd73f,	// (0x00059983) cntbar_detail_list_event_pane_t1_ParamLimits

0xd73f,	// (0x00059983) cntbar_detail_list_event_pane_t1

0xd754,	// (0x00059998) cntbar_detail_list_event_pane_t2_ParamLimits

0xd754,	// (0x00059998) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0005c0f5) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0005c0f5) cntbar_detail_list_event_pane_t

0x4597,	// (0x000507db) cell_cntbar_detail_list_shct_pane_g1

0x7f57,	// (0x0005419b) navi_pane_mv_g3

0x334c,	// (0x0004f590) main_cntbar_detail_pane_ParamLimits

0x037e,	// (0x0004c5c2) main_notif_wgt_pane

0xa5c5,	// (0x00056809) aid_tch_main_mp4_pane_g4

0xa7fa,	// (0x00056a3e) popup_slider_window_cp02

0x14f4,	// (0x0004d738) list_recal_day_event_pane

0xd5f2,	// (0x00059836) cntbar_detail_btn_pane_ParamLimits

0xd5f2,	// (0x00059836) cntbar_detail_btn_pane

0xd602,	// (0x00059846) cntbar_detail_btn_pane_cp01_ParamLimits

0xd602,	// (0x00059846) cntbar_detail_btn_pane_cp01

0xd61e,	// (0x00059862) cntbar_detail_list_shct_pane_ParamLimits

0xd62a,	// (0x0005986e) cntbar_detail_pane_g1_ParamLimits

0xd62a,	// (0x0005986e) cntbar_detail_pane_g1

0xd636,	// (0x0005987a) cntbar_detail_pane_t1_ParamLimits

0xd636,	// (0x0005987a) cntbar_detail_pane_t1

0xd6df,	// (0x00059923) cntbar_detail_list_event_pane_g3_ParamLimits

0xd6df,	// (0x00059923) cntbar_detail_list_event_pane_g3

0xd6f7,	// (0x0005993b) cntbar_detail_list_event_pane_g4_ParamLimits

0xd6f7,	// (0x0005993b) cntbar_detail_list_event_pane_g4

0xd70f,	// (0x00059953) cntbar_detail_list_event_pane_g5_ParamLimits

0xd70f,	// (0x00059953) cntbar_detail_list_event_pane_g5

0xd727,	// (0x0005996b) cntbar_detail_list_event_pane_g6_ParamLimits

0xd727,	// (0x0005996b) cntbar_detail_list_event_pane_g6

0xd769,	// (0x000599ad) cntbar_detail_list_event_pane_t3_ParamLimits

0xd769,	// (0x000599ad) cntbar_detail_list_event_pane_t3

0xd77b,	// (0x000599bf) popup_notif_wgt_window_ParamLimits

0xd77b,	// (0x000599bf) popup_notif_wgt_window

0xd78b,	// (0x000599cf) popup_submenu_window_cp01_ParamLimits

0xd78b,	// (0x000599cf) popup_submenu_window_cp01

0x2d3c,	// (0x0004ef80) bg_popup_window_pane_cp10

0x180f,	// (0x0004da53) listscroll_notif_wgt_pane

0x1819,	// (0x0004da5d) list_notif_wgt_window

0x1822,	// (0x0004da66) scroll_pane_cp033

0x182b,	// (0x0004da6f) list_notif_wgt_row_pane_ParamLimits

0x182b,	// (0x0004da6f) list_notif_wgt_row_pane

0x183d,	// (0x0004da81) aid_size_list_notif_wgt_del

0x1846,	// (0x0004da8a) list_notif_wgt_row_pane_g1

0x184e,	// (0x0004da92) list_notif_wgt_row_pane_g2

0x1856,	// (0x0004da9a) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0005c0fc) list_notif_wgt_row_pane_g

0x185f,	// (0x0004daa3) list_notif_wgt_row_pane_t1

0x186d,	// (0x0004dab1) list_notif_wgt_row_pane_t2

0x187b,	// (0x0004dabf) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0005c103) list_notif_wgt_row_pane_t

0xe240,	// (0x0005a484) list_recal_day_event_pane_g1

0x1889,	// (0x0004dacd) list_recal_day_event_pane_t1

0x037e,	// (0x0004c5c2) bg_button_pane_cp045

0x1898,	// (0x0004dadc) cntbar_detail_btn_pane_t1

0x4150,	// (0x00050394) main_callh_pane_ParamLimits

0x4150,	// (0x00050394) main_callh_pane

0x037e,	// (0x0004c5c2) main_coverflow0_pane

0x037e,	// (0x0004c5c2) main_wgtman_pane

0xc964,	// (0x00058ba8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc964,	// (0x00058ba8) main_fs_bigclock_unlock_btn_pane

0x10a3,	// (0x0004d2e7) bg_button_pane_cp16

0x10b3,	// (0x0004d2f7) cell_tport_appsw_pane_g3

0xd799,	// (0x000599dd) cf0_flow_pane_ParamLimits

0xd799,	// (0x000599dd) cf0_flow_pane

0x18a6,	// (0x0004daea) listscroll_cf0_pane

0x18af,	// (0x0004daf3) main_cf0_pane_g1

0xd7a8,	// (0x000599ec) main_cf0_pane_t1_ParamLimits

0xd7a8,	// (0x000599ec) main_cf0_pane_t1

0xd7bc,	// (0x00059a00) main_cf0_pane_t2_ParamLimits

0xd7bc,	// (0x00059a00) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0005c10a) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0005c10a) main_cf0_pane_t

0x18b9,	// (0x0004dafd) scroll_pane_cp11

0xd7d0,	// (0x00059a14) cf0_flow_pane_g1

0xd7d8,	// (0x00059a1c) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0005c10f) cf0_flow_pane_g

0xd7e0,	// (0x00059a24) cf0_flow_pane_t1

0x037e,	// (0x0004c5c2) main_call6_pane

0x037e,	// (0x0004c5c2) main_calllock_pane

0xd7ee,	// (0x00059a32) call6_btn_grp_pane_ParamLimits

0xd7ee,	// (0x00059a32) call6_btn_grp_pane

0xd7fd,	// (0x00059a41) call6_pane_g1_ParamLimits

0xd7fd,	// (0x00059a41) call6_pane_g1

0xd80c,	// (0x00059a50) popup_call6_1st_window_ParamLimits

0xd80c,	// (0x00059a50) popup_call6_1st_window

0xd81a,	// (0x00059a5e) popup_call6_2nd_window_ParamLimits

0xd81a,	// (0x00059a5e) popup_call6_2nd_window

0xd828,	// (0x00059a6c) cell_call6_btn_pane_ParamLimits

0xd828,	// (0x00059a6c) cell_call6_btn_pane

0x2d3c,	// (0x0004ef80) bg_popup_call2_in_pane_cp03

0x18c4,	// (0x0004db08) popup_call6_1st_window_g1

0x18cc,	// (0x0004db10) popup_call6_1st_window_g2

0x18d4,	// (0x0004db18) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0005c114) popup_call6_1st_window_g

0x18dc,	// (0x0004db20) popup_call6_1st_window_t1

0x18eb,	// (0x0004db2f) popup_call6_1st_window_t2

0x18fb,	// (0x0004db3f) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0005c11b) popup_call6_1st_window_t

0x2d3c,	// (0x0004ef80) bg_popup_call2_in_pane_cp04

0x18c4,	// (0x0004db08) popup_call6_2nd_window_g1

0x18cc,	// (0x0004db10) popup_call6_2nd_window_g2

0x18d4,	// (0x0004db18) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0005c114) popup_call6_2nd_window_g

0x18dc,	// (0x0004db20) popup_call6_2nd_window_t1

0x037e,	// (0x0004c5c2) bg_button_pane_cp15

0x190b,	// (0x0004db4f) cell_call6_btn_pane_g1

0x1914,	// (0x0004db58) cell_call6_btn_pane_t1

0xd837,	// (0x00059a7b) listscroll_wgtman_pane_ParamLimits

0xd837,	// (0x00059a7b) listscroll_wgtman_pane

0xd855,	// (0x00059a99) wgtman_btn_pane_ParamLimits

0xd855,	// (0x00059a99) wgtman_btn_pane

0x2bf3,	// (0x0004ee37) aid_scroll_copy1

0x1923,	// (0x0004db67) list_wgtman_pane

0xd88a,	// (0x00059ace) wgtman_btn_pane_g1_ParamLimits

0xd88a,	// (0x00059ace) wgtman_btn_pane_g1

0xd8b2,	// (0x00059af6) wgtman_btn_pane_t1_ParamLimits

0xd8b2,	// (0x00059af6) wgtman_btn_pane_t1

0x192d,	// (0x0004db71) wgtman_btn_pane_t2_ParamLimits

0x192d,	// (0x0004db71) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0005c122) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0005c122) wgtman_btn_pane_t

0xd8e9,	// (0x00059b2d) listrow_wgtman_pane_ParamLimits

0xd8e9,	// (0x00059b2d) listrow_wgtman_pane

0xd904,	// (0x00059b48) listrow_wgtman_pane_g1

0xd90d,	// (0x00059b51) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0005c127) listrow_wgtman_pane_g

0xd917,	// (0x00059b5b) listrow_wgtman_pane_t1

0xd925,	// (0x00059b69) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0005c12c) listrow_wgtman_pane_t

0xd933,	// (0x00059b77) wait_bar_pane_cp09

0x1944,	// (0x0004db88) main_calllock_btn_pane

0x194e,	// (0x0004db92) main_calllock_pane_g1

0x037e,	// (0x0004c5c2) bg_button_pane_cp17

0x195a,	// (0x0004db9e) main_calllock_btn_pane_g1

0x1963,	// (0x0004dba7) main_calllock_btn_pane_t1

0x037e,	// (0x0004c5c2) main_dialer3_pane

0x037e,	// (0x0004c5c2) main_fmrd2_pane

0x4597,	// (0x000507db) main_fs_bigclock_unlock_btn_pane_g1

0x197a,	// (0x0004dbbe) main_fs_bigclock_unlock_btn_pane_t1

0xd93b,	// (0x00059b7f) area_fmrd2_info_pane_ParamLimits

0xd93b,	// (0x00059b7f) area_fmrd2_info_pane

0xd949,	// (0x00059b8d) area_fmrd2_visual_pane_ParamLimits

0xd949,	// (0x00059b8d) area_fmrd2_visual_pane

0xd957,	// (0x00059b9b) fmrd2_indi_pane_ParamLimits

0xd957,	// (0x00059b9b) fmrd2_indi_pane

0xd964,	// (0x00059ba8) area_fmrd2_visual_pane_g1

0xd96c,	// (0x00059bb0) area_fmrd2_visual_pane_t1

0xd97c,	// (0x00059bc0) area_fmrd2_visual_pane_t2

0xd98c,	// (0x00059bd0) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0005c136) area_fmrd2_visual_pane_t

0xd99c,	// (0x00059be0) area_fmrd2_info_pane_g1

0xd9a4,	// (0x00059be8) area_fmrd2_info_pane_t1

0xd9b4,	// (0x00059bf8) area_fmrd2_info_pane_t2

0xd9c4,	// (0x00059c08) area_fmrd2_info_pane_t3

0xd9d4,	// (0x00059c18) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0005c13d) area_fmrd2_info_pane_t

0xd9e2,	// (0x00059c26) fmrd2_indi_pane_t1

0xd9f2,	// (0x00059c36) fmrd2_indi_pane_t2

0xda02,	// (0x00059c46) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0005c146) fmrd2_indi_pane_t

0xed9a,	// (0x0005afde) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xed9a,	// (0x0005afde) list_single_fs_bigclock_indicator_pane_g5

0xee41,	// (0x0005b085) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xee41,	// (0x0005b085) list_single_fs_bigclock_indicator_pane_t5

0xd205,	// (0x00059449) aid_cell_bcale_month_pane_ParamLimits

0xd205,	// (0x00059449) aid_cell_bcale_month_pane

0xd211,	// (0x00059455) bcale_month_pane_ParamLimits

0xd211,	// (0x00059455) bcale_month_pane

0xd221,	// (0x00059465) bcale_preview_pane_ParamLimits

0xd221,	// (0x00059465) bcale_preview_pane

0x1708,	// (0x0004d94c) list_single_fs_bigclock_pane_t1_ParamLimits

0x1727,	// (0x0004d96b) list_single_fs_bigclock_pane_t2_ParamLimits

0x1727,	// (0x0004d96b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0005c0cd) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0005c0cd) list_single_fs_bigclock_pane_t

0x1972,	// (0x0004dbb6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0005c131) main_fs_bigclock_unlock_btn_pane_g

0xda10,	// (0x00059c54) aid_dia3_key_size_ParamLimits

0xda10,	// (0x00059c54) aid_dia3_key_size

0xda1c,	// (0x00059c60) aid_dia3_listrow_size_ParamLimits

0xda1c,	// (0x00059c60) aid_dia3_listrow_size

0xda2c,	// (0x00059c70) dia3_keypad_fun_pane_ParamLimits

0xda2c,	// (0x00059c70) dia3_keypad_fun_pane

0xda3e,	// (0x00059c82) dia3_keypad_num_pane_ParamLimits

0xda3e,	// (0x00059c82) dia3_keypad_num_pane

0xda50,	// (0x00059c94) dia3_listscroll_pane_ParamLimits

0xda50,	// (0x00059c94) dia3_listscroll_pane

0xda5e,	// (0x00059ca2) dia3_numentry_pane_ParamLimits

0xda5e,	// (0x00059ca2) dia3_numentry_pane

0x1988,	// (0x0004dbcc) dia3_list_pane

0x1993,	// (0x0004dbd7) scroll_pane_cp12

0x037e,	// (0x0004c5c2) bg_dia3_numentry_pane

0xda6c,	// (0x00059cb0) dia3_numentry_pane_t1

0xda7b,	// (0x00059cbf) cell_dia3_key_num_pane

0xda83,	// (0x00059cc7) cell_dia3_key0_fun_pane_ParamLimits

0xda83,	// (0x00059cc7) cell_dia3_key0_fun_pane

0xda90,	// (0x00059cd4) cell_dia3_key1_fun_pane_ParamLimits

0xda90,	// (0x00059cd4) cell_dia3_key1_fun_pane

0xda9d,	// (0x00059ce1) dia3_listrow_pane

0xea8c,	// (0x0005acd0) bg_dia3_numentry_pane_g1

0x037e,	// (0x0004c5c2) bg_button_pane_cp21

0x199e,	// (0x0004dbe2) cell_dia3_key_num_pane_t1

0x19ac,	// (0x0004dbf0) cell_dia3_key_num_pane_t2

0x19bb,	// (0x0004dbff) cell_dia3_key_num_pane_t3

0x19ca,	// (0x0004dc0e) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0005c14d) cell_dia3_key_num_pane_t

0x037e,	// (0x0004c5c2) bg_button_pane_cp19

0xdaaa,	// (0x00059cee) cell_dia3_key0_fun_pane_g1

0x037e,	// (0x0004c5c2) bg_button_pane_cp20

0xdab2,	// (0x00059cf6) cell_dia3_key1_fun_pane_g1

0xdaba,	// (0x00059cfe) area_left_week_number_pane

0xdac3,	// (0x00059d07) area_top_day_name_pane

0xdacc,	// (0x00059d10) frame_month_view_pane

0xdad6,	// (0x00059d1a) grid_month_view_pane

0xdae0,	// (0x00059d24) cell_top_day_name_pane_ParamLimits

0xdae0,	// (0x00059d24) cell_top_day_name_pane

0xdafa,	// (0x00059d3e) cell_area_left_week_number_pane_ParamLimits

0xdafa,	// (0x00059d3e) cell_area_left_week_number_pane

0xdb0e,	// (0x00059d52) cell_month_view_pane_ParamLimits

0xdb0e,	// (0x00059d52) cell_month_view_pane

0x19d9,	// (0x0004dc1d) frm_month_g1

0xdb2b,	// (0x00059d6f) frm_month_g2

0xdb35,	// (0x00059d79) frm_month_g3

0xdb3f,	// (0x00059d83) frm_month_g4

0xdb49,	// (0x00059d8d) frm_month_g5

0xdb53,	// (0x00059d97) frm_month_g6

0xdb5d,	// (0x00059da1) frm_month_g7

0x19e2,	// (0x0004dc26) frm_month_g8

0xdb67,	// (0x00059dab) frm_month_g9

0xdb70,	// (0x00059db4) frm_month_g10

0xdb79,	// (0x00059dbd) frm_month_g11

0xdb82,	// (0x00059dc6) frm_month_g12

0xdb8b,	// (0x00059dcf) frm_month_g13

0xdb94,	// (0x00059dd8) frm_month_g14

0xdb9d,	// (0x00059de1) frm_month_g15

0xdba8,	// (0x00059dec) frm_month_g16

0x000f,

0xff12,	// (0x0005c156) frm_month_g

0xdbb3,	// (0x00059df7) cell_top_day_name_pane_t1

0xdbc2,	// (0x00059e06) cell_area_left_week_number_pane_g1

0xdbb3,	// (0x00059df7) cell_area_left_week_number_pane_t1

0x4597,	// (0x000507db) cell_month_view_pane_g1

0xdbca,	// (0x00059e0e) cell_month_view_pane_t1

0x037e,	// (0x0004c5c2) main_fps_pane

0xf031,	// (0x0005b275) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf031,	// (0x0005b275) cmail_ddmenu_btn02_pane_cp1

0xf04d,	// (0x0005b291) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf04d,	// (0x0005b291) cmail_ddmenu_btn02_pane_cp2

0xd4c0,	// (0x00059704) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd4c0,	// (0x00059704) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x0005c080) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x0005c080) cmail_ddmenu_btn02_pane_g

0xd4de,	// (0x00059722) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd4de,	// (0x00059722) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x0005c085) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x0005c085) cmail_ddmenu_btn02_pane_t

0xdbd9,	// (0x00059e1d) fps_text_pane_ParamLimits

0xdbd9,	// (0x00059e1d) fps_text_pane

0xdbe6,	// (0x00059e2a) main_fps_pane_g1_ParamLimits

0xdbe6,	// (0x00059e2a) main_fps_pane_g1

0xdbf4,	// (0x00059e38) wait_bar_pane_cp010_ParamLimits

0xdbf4,	// (0x00059e38) wait_bar_pane_cp010

0xdc00,	// (0x00059e44) fps_text_pane_t1_ParamLimits

0xdc00,	// (0x00059e44) fps_text_pane_t1

0xabea,	// (0x00056e2e) cam4_image_uncrop_pane_g1

0xabf3,	// (0x00056e37) cam4_image_uncrop_pane_g2

0xabfc,	// (0x00056e40) cam4_image_uncrop_pane_g3

0xac05,	// (0x00056e49) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0005bb4c) cam4_image_uncrop_pane_g

0xda9d,	// (0x00059ce1) dia3_listrow_pane_ParamLimits

0x037e,	// (0x0004c5c2) main_phob2_pane

0xd046,	// (0x0005928a) cell_tport_appsw_pane_cp02_ParamLimits

0xd046,	// (0x0005928a) cell_tport_appsw_pane_cp02

0xd055,	// (0x00059299) cell_tport_appsw_pane_cp03_ParamLimits

0xd055,	// (0x00059299) cell_tport_appsw_pane_cp03

0x037e,	// (0x0004c5c2) phob2_contact_card_pane

0x037e,	// (0x0004c5c2) phob2_listscroll_pane

0x19eb,	// (0x0004dc2f) phob2_list_pane

0x19f3,	// (0x0004dc37) scroll_pane_cp034

0xdc19,	// (0x00059e5d) phob2_cc_data_pane_ParamLimits

0xdc19,	// (0x00059e5d) phob2_cc_data_pane

0xdc33,	// (0x00059e77) phob2_cc_listscroll_pane_ParamLimits

0xdc33,	// (0x00059e77) phob2_cc_listscroll_pane

0xdc4d,	// (0x00059e91) list_double_large_graphic_phob2_pane_ParamLimits

0xdc4d,	// (0x00059e91) list_double_large_graphic_phob2_pane

0xdc6b,	// (0x00059eaf) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdc6b,	// (0x00059eaf) list_double_large_graphic_phob2_pane_g1

0xdc78,	// (0x00059ebc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdc78,	// (0x00059ebc) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0005c177) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0005c177) list_double_large_graphic_phob2_pane_g

0xdc84,	// (0x00059ec8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xdc84,	// (0x00059ec8) list_double_large_graphic_phob2_pane_t1

0xdc99,	// (0x00059edd) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xdc99,	// (0x00059edd) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0005c17c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0005c17c) list_double_large_graphic_phob2_pane_t

0x037e,	// (0x0004c5c2) list_highlight_pane_cp024

0x19fb,	// (0x0004dc3f) phob2_cc_button_pane

0xdcab,	// (0x00059eef) phob2_cc_data_pane_g1_ParamLimits

0xdcab,	// (0x00059eef) phob2_cc_data_pane_g1

0xdcb7,	// (0x00059efb) phob2_cc_data_pane_g2_ParamLimits

0xdcb7,	// (0x00059efb) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0005c181) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0005c181) phob2_cc_data_pane_g

0xdcc3,	// (0x00059f07) phob2_cc_data_pane_t1_ParamLimits

0xdcc3,	// (0x00059f07) phob2_cc_data_pane_t1

0xdcd5,	// (0x00059f19) phob2_cc_data_pane_t2_ParamLimits

0xdcd5,	// (0x00059f19) phob2_cc_data_pane_t2

0xdce7,	// (0x00059f2b) phob2_cc_data_pane_t3_ParamLimits

0xdce7,	// (0x00059f2b) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0005c186) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0005c186) phob2_cc_data_pane_t

0x1a03,	// (0x0004dc47) phob2_cc_list_pane_ParamLimits

0x1a03,	// (0x0004dc47) phob2_cc_list_pane

0xe9af,	// (0x0005abf3) scroll_pane_cp035_ParamLimits

0xe9af,	// (0x0005abf3) scroll_pane_cp035

0x334c,	// (0x0004f590) bg_button_pane_cp033

0x1a0f,	// (0x0004dc53) phob2_cc_button_pane_g1

0x1a1b,	// (0x0004dc5f) phob2_cc_button_pane_t1

0x1a30,	// (0x0004dc74) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0005c18d) phob2_cc_button_pane_t

0xdcf9,	// (0x00059f3d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdcf9,	// (0x00059f3d) list_double_large_graphic_phob2_cc_pane

0xdd20,	// (0x00059f64) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdd20,	// (0x00059f64) list_double_large_graphic_phob2_cc_pane_g1

0xdd31,	// (0x00059f75) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdd31,	// (0x00059f75) list_double_large_graphic_phob2_cc_pane_g2

0xdd40,	// (0x00059f84) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdd40,	// (0x00059f84) list_double_large_graphic_phob2_cc_pane_g3

0xdd4f,	// (0x00059f93) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdd4f,	// (0x00059f93) list_double_large_graphic_phob2_cc_pane_g4

0xdd60,	// (0x00059fa4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdd60,	// (0x00059fa4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0005c192) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0005c192) list_double_large_graphic_phob2_cc_pane_g

0xdd6f,	// (0x00059fb3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdd6f,	// (0x00059fb3) list_double_large_graphic_phob2_cc_pane_t1

0xdd98,	// (0x00059fdc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdd98,	// (0x00059fdc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0005c19d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0005c19d) list_double_large_graphic_phob2_cc_pane_t

0x1a42,	// (0x0004dc86) list_highlight_pane_cp025_ParamLimits

0x1a42,	// (0x0004dc86) list_highlight_pane_cp025

0x334c,	// (0x0004f590) bg_button_pane_cp033_ParamLimits

0x1a0f,	// (0x0004dc53) phob2_cc_button_pane_g1_ParamLimits

0x1a1b,	// (0x0004dc5f) phob2_cc_button_pane_t1_ParamLimits

0x1a30,	// (0x0004dc74) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0005c18d) phob2_cc_button_pane_t_ParamLimits

0x5e5c,	// (0x000520a0) popup_wgtman_window

0xe11c,	// (0x0005a360) scroll_pane_cp038

0xd872,	// (0x00059ab6) wgtman_btn_pane_cp_01_ParamLimits

0xd872,	// (0x00059ab6) wgtman_btn_pane_cp_01

0x1a50,	// (0x0004dc94) wgtman_content_pane

0x1a59,	// (0x0004dc9d) wgtman_heading_pane

0x037e,	// (0x0004c5c2) bg_heading_pane_cp02

0x1a62,	// (0x0004dca6) wgtman_heading_pane_g1

0x1a6a,	// (0x0004dcae) wgtman_heading_pane_t1

0x1a78,	// (0x0004dcbc) scroll_pane_cp036

0x1a80,	// (0x0004dcc4) wgtman_list_pane

0x1a88,	// (0x0004dccc) wgtman_list_pane_t1_ParamLimits

0x1a88,	// (0x0004dccc) wgtman_list_pane_t1

0xab49,	// (0x00056d8d) cam4_grid_pane

0xb892,	// (0x00057ad6) bg_button_pane_cp015_ParamLimits

0xb8a4,	// (0x00057ae8) bg_button_pane_cp016_ParamLimits

0xb8b7,	// (0x00057afb) bg_button_pane_cp017_ParamLimits

0xb90d,	// (0x00057b51) popup_vitu2_query_window_g3_ParamLimits

0xb90d,	// (0x00057b51) popup_vitu2_query_window_g3

0xb9c8,	// (0x00057c0c) popup_vitu2_query_window_t6_ParamLimits

0xb9c8,	// (0x00057c0c) popup_vitu2_query_window_t6

0xb9f3,	// (0x00057c37) popup_vitu2_query_window_t7_ParamLimits

0xb9f3,	// (0x00057c37) popup_vitu2_query_window_t7

0xec79,	// (0x0005aebd) cam4_grid_pane_g1

0xec82,	// (0x0005aec6) cam4_grid_pane_g2

0x1aa5,	// (0x0004dce9) cam4_grid_pane_g3

0x1aae,	// (0x0004dcf2) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0005c1a2) cam4_grid_pane_g

0x6bd5,	// (0x00052e19) aid_placing_vt_slider_lsc_ParamLimits

0x6f21,	// (0x00053165) vidtel_button_pane_ParamLimits

0x6f21,	// (0x00053165) vidtel_button_pane

0x1ab9,	// (0x0004dcfd) bg_button_pane_cp034

0xddc1,	// (0x0005a005) vidtel_button_pane_g1

0x1ac3,	// (0x0004dd07) vidtel_button_pane_t1

0xe21e,	// (0x0005a462) aid_size_vtel_slider_touch

0xe9af,	// (0x0005abf3) scroll_pane_cp039

0xeaca,	// (0x0005ad0e) ncim_query_button_pane_cp01_ParamLimits

0xeae9,	// (0x0005ad2d) ncimui_query_pane_g1_ParamLimits

0x334c,	// (0x0004f590) input_focus_pane_cp012_ParamLimits

0xeb0e,	// (0x0005ad52) ncim_query_entry_pane_t1_ParamLimits

0xe9af,	// (0x0005abf3) scroll_pane_cp039_ParamLimits

0x7ec9,	// (0x0005410d) navi_pane_bcale_mc_g1

0x7ed1,	// (0x00054115) navi_pane_bcale_mc_t1

0xf096,	// (0x0005b2da) main_sp_fs_email_pane_g1

0xf09e,	// (0x0005b2e2) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x0005bf3e) main_sp_fs_email_pane_g

0x13a2,	// (0x0004d5e6) list_single_cale_mrui_row_pane_g3_ParamLimits

0x13a2,	// (0x0004d5e6) list_single_cale_mrui_row_pane_g3

0xd506,	// (0x0005974a) list_single_recal_day_pane_g5_event_pane

0x1567,	// (0x0004d7ab) list_single_recal_day_pane_g7

0x1ad1,	// (0x0004dd15) list_recal_day_event_pane_cp01

0x1ada,	// (0x0004dd1e) list_recal_vselct_arw_lo_pane_cp01

0x1ae2,	// (0x0004dd26) list_recal_vselct_arw_up_pane_cp01

0x1aea,	// (0x0004dd2e) list_recal_vselct_pane_cp01

0xe240,	// (0x0005a484) list_recal_day_event_pane_cp01_g1

0x1af4,	// (0x0004dd38) list_recal_day_event_pane_cp01_t1

0x156f,	// (0x0004d7b3) list_single_recal_day_pane_t1_ParamLimits

0x1581,	// (0x0004d7c5) list_single_recal_day_pane_t2_ParamLimits

0xfe51,	// (0x0005c095) list_single_recal_day_pane_t_ParamLimits

0x2239,	// (0x0004e47d) bg_notes_pane_ParamLimits

0x2247,	// (0x0004e48b) list_notes_pane_ParamLimits

0x61ba,	// (0x000523fe) scroll_pane_cp06_ParamLimits

0x2269,	// (0x0004e4ad) main_notes_pane_ParamLimits

0x037e,	// (0x0004c5c2) main_welc_pane

0xddc9,	// (0x0005a00d) main_welc_body_pane_ParamLimits

0xddc9,	// (0x0005a00d) main_welc_body_pane

0xddd8,	// (0x0005a01c) main_welc_opti_pane_ParamLimits

0xddd8,	// (0x0005a01c) main_welc_opti_pane

0xdde7,	// (0x0005a02b) main_welc_pane_t1_ParamLimits

0xdde7,	// (0x0005a02b) main_welc_pane_t1

0xddf9,	// (0x0005a03d) main_welc_body_row_pane_ParamLimits

0xddf9,	// (0x0005a03d) main_welc_body_row_pane

0xde21,	// (0x0005a065) main_welc_opti_row_pane_ParamLimits

0xde21,	// (0x0005a065) main_welc_opti_row_pane

0x1b02,	// (0x0004dd46) main_welc_opti_row_pane_g1

0x1b0a,	// (0x0004dd4e) main_welc_opti_row_pane_t1

0x1b19,	// (0x0004dd5d) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
