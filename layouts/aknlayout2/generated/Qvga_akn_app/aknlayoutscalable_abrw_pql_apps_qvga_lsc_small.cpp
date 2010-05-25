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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000591f6 };

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
0x0dd6,	// (0x00059fcc) Screen

0x0de0,	// (0x00059fd6) application_window

0x0e16,	// (0x0005a00c) area_bottom_pane_ParamLimits

0x0e16,	// (0x0005a00c) area_bottom_pane

0x0e47,	// (0x0005a03d) area_top_pane_ParamLimits

0x0e47,	// (0x0005a03d) area_top_pane

0x9823,	// (0x00062a19) call_video_uplink_pane_ParamLimits

0x9823,	// (0x00062a19) call_video_uplink_pane

0x0ec1,	// (0x0005a0b7) main_pane_ParamLimits

0x0ec1,	// (0x0005a0b7) main_pane

0xe457,	// (0x0006764d) context_pane

0x4063,	// (0x0005d259) navi_pane

0x408b,	// (0x0005d281) popup_cale_events_window_ParamLimits

0x408b,	// (0x0005d281) popup_cale_events_window

0xe46a,	// (0x00067660) popup_mup_playback_window

0x40a2,	// (0x0005d298) signal_pane

0x9fea,	// (0x000631e0) main_browser_pane

0xa211,	// (0x00063407) main_burst_pane

0x3de9,	// (0x0005cfdf) main_calc_pane

0xe43d,	// (0x00067633) main_cale_day_pane

0x3dfd,	// (0x0005cff3) main_cale_month_pane

0xe43d,	// (0x00067633) main_cale_week_pane

0xa211,	// (0x00063407) main_call_pane

0x9c9c,	// (0x00062e92) main_call_poc_pane

0xa211,	// (0x00063407) main_camera_pane

0xa211,	// (0x00063407) main_chi_dic_pane

0xaa8c,	// (0x00063c82) main_clock_pane

0x9c9c,	// (0x00062e92) main_fmradio_pane

0xa211,	// (0x00063407) main_graph_messa_pane

0x9c9c,	// (0x00062e92) main_help_pane

0x9fea,	// (0x000631e0) main_im_pane

0x9ef7,	// (0x000630ed) main_image_pane_ParamLimits

0x9ef7,	// (0x000630ed) main_image_pane

0x9c9c,	// (0x00062e92) main_location2_pane

0xa211,	// (0x00063407) main_location_pane

0x9ef7,	// (0x000630ed) main_messa_pane

0x9c9c,	// (0x00062e92) main_mp2_pane

0xa211,	// (0x00063407) main_mp_pane

0x9c9c,	// (0x00062e92) main_msg_pane

0x9c9c,	// (0x00062e92) main_mup_eq_pane

0x9c9c,	// (0x00062e92) main_mup_pane

0x9fea,	// (0x000631e0) main_notes_pane

0x9c9c,	// (0x00062e92) main_pec_pane

0x9c9c,	// (0x00062e92) main_phob_pane

0x9c9c,	// (0x00062e92) main_pinb_pane

0x9c9c,	// (0x00062e92) main_postcard_pane

0x9c9c,	// (0x00062e92) main_qdial_pane

0xa211,	// (0x00063407) main_skin_pane

0x9c9c,	// (0x00062e92) main_smil2_pane

0xa211,	// (0x00063407) main_smil_pane

0xa211,	// (0x00063407) main_video_pane

0xa211,	// (0x00063407) main_video_tele_pane

0x9ef7,	// (0x000630ed) main_viewer_pane_ParamLimits

0x9ef7,	// (0x000630ed) main_viewer_pane

0xa211,	// (0x00063407) main_vorec_pane

0x3e4b,	// (0x0005d041) popup_blid_sat_info_window_ParamLimits

0x3e4b,	// (0x0005d041) popup_blid_sat_info_window

0x3ea9,	// (0x0005d09f) popup_dyc_status_message_window_ParamLimits

0x3ea9,	// (0x0005d09f) popup_dyc_status_message_window

0x3ebf,	// (0x0005d0b5) popup_grid_large_graphic_window_ParamLimits

0x3ebf,	// (0x0005d0b5) popup_grid_large_graphic_window

0x3f59,	// (0x0005d14f) popup_loc_request_window_ParamLimits

0x3f59,	// (0x0005d14f) popup_loc_request_window

0x403d,	// (0x0005d233) popup_wml_address_window_ParamLimits

0x403d,	// (0x0005d233) popup_wml_address_window

0x3c7d,	// (0x0005ce73) call_muted_g1

0x39a3,	// (0x0005cb99) popup_call_audio_conf_window_ParamLimits

0x39a3,	// (0x0005cb99) popup_call_audio_conf_window

0x3c8d,	// (0x0005ce83) popup_call_audio_first_window_ParamLimits

0x3c8d,	// (0x0005ce83) popup_call_audio_first_window

0x3ceb,	// (0x0005cee1) popup_call_audio_in_window_ParamLimits

0x3ceb,	// (0x0005cee1) popup_call_audio_in_window

0x3d17,	// (0x0005cf0d) popup_call_audio_out_window_ParamLimits

0x3d17,	// (0x0005cf0d) popup_call_audio_out_window

0x3d45,	// (0x0005cf3b) popup_call_audio_second_window_ParamLimits

0x3d45,	// (0x0005cf3b) popup_call_audio_second_window

0x3d8b,	// (0x0005cf81) popup_call_audio_wait_window_ParamLimits

0x3d8b,	// (0x0005cf81) popup_call_audio_wait_window

0x3dbe,	// (0x0005cfb4) popup_number_entry_window_ParamLimits

0x3dbe,	// (0x0005cfb4) popup_number_entry_window

0x9857,	// (0x00062a4d) bg_popup_call_pane_cp05_ParamLimits

0x9857,	// (0x00062a4d) bg_popup_call_pane_cp05

0x9877,	// (0x00062a6d) popup_number_entry_window_t1

0x988a,	// (0x00062a80) popup_number_entry_window_t2

0x989c,	// (0x00062a92) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000682c0) popup_number_entry_window_t

0x98e2,	// (0x00062ad8) text_title_cp2

0x98f5,	// (0x00062aeb) bg_popup_call_pane_cp_ParamLimits

0x98f5,	// (0x00062aeb) bg_popup_call_pane_cp

0x9903,	// (0x00062af9) call_thumbnail_pane

0x990b,	// (0x00062b01) popup_call_audio_in_window_g1_ParamLimits

0x990b,	// (0x00062b01) popup_call_audio_in_window_g1

0x9917,	// (0x00062b0d) popup_call_audio_in_window_g2_ParamLimits

0x9917,	// (0x00062b0d) popup_call_audio_in_window_g2

0x9923,	// (0x00062b19) popup_call_audio_in_window_g3_ParamLimits

0x9923,	// (0x00062b19) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000682c9) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000682c9) popup_call_audio_in_window_g

0x992f,	// (0x00062b25) popup_call_audio_in_window_t1_ParamLimits

0x992f,	// (0x00062b25) popup_call_audio_in_window_t1

0x994a,	// (0x00062b40) popup_call_audio_in_window_t2_ParamLimits

0x994a,	// (0x00062b40) popup_call_audio_in_window_t2

0x9965,	// (0x00062b5b) popup_call_audio_in_window_t3_ParamLimits

0x9965,	// (0x00062b5b) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000682d0) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000682d0) popup_call_audio_in_window_t

0x98f5,	// (0x00062aeb) bg_popup_call_pane_cp01_ParamLimits

0x98f5,	// (0x00062aeb) bg_popup_call_pane_cp01

0x9903,	// (0x00062af9) call_thumbnail_pane_cp02

0x9978,	// (0x00062b6e) call_type_pane_cp022

0x9980,	// (0x00062b76) popup_call_audio_out_window_g1_ParamLimits

0x9980,	// (0x00062b76) popup_call_audio_out_window_g1

0x9992,	// (0x00062b88) popup_call_audio_out_window_g2_ParamLimits

0x9992,	// (0x00062b88) popup_call_audio_out_window_g2

0x999e,	// (0x00062b94) popup_call_audio_out_window_g3_ParamLimits

0x999e,	// (0x00062b94) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000682d7) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000682d7) popup_call_audio_out_window_g

0x99b0,	// (0x00062ba6) popup_call_audio_out_window_t1_ParamLimits

0x99b0,	// (0x00062ba6) popup_call_audio_out_window_t1

0x99c8,	// (0x00062bbe) popup_call_audio_out_window_t2_ParamLimits

0x99c8,	// (0x00062bbe) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000682de) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000682de) popup_call_audio_out_window_t

0x99dd,	// (0x00062bd3) bg_popup_call_pane_ParamLimits

0x99dd,	// (0x00062bd3) bg_popup_call_pane

0x1037,	// (0x0005a22d) call_thumbnail_pane_cp_ParamLimits

0x1037,	// (0x0005a22d) call_thumbnail_pane_cp

0x9a61,	// (0x00062c57) call_type_pane_cp01_ParamLimits

0x9a61,	// (0x00062c57) call_type_pane_cp01

0x9aa5,	// (0x00062c9b) popup_call_audio_first_window_g1_ParamLimits

0x9aa5,	// (0x00062c9b) popup_call_audio_first_window_g1

0x9af1,	// (0x00062ce7) popup_call_audio_first_window_g2_ParamLimits

0x9af1,	// (0x00062ce7) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000682e3) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000682e3) popup_call_audio_first_window_g

0x9b35,	// (0x00062d2b) popup_call_audio_first_window_t1_ParamLimits

0x9b35,	// (0x00062d2b) popup_call_audio_first_window_t1

0x9be1,	// (0x00062dd7) popup_call_audio_first_window_t4_ParamLimits

0x9be1,	// (0x00062dd7) popup_call_audio_first_window_t4

0x9c6d,	// (0x00062e63) popup_call_audio_first_window_t5_ParamLimits

0x9c6d,	// (0x00062e63) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000682e8) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000682e8) popup_call_audio_first_window_t

0x9c9c,	// (0x00062e92) bg_popup_call_pane_cp02

0x9ca6,	// (0x00062e9c) call_type_pane_cp023

0x9cae,	// (0x00062ea4) popup_call_audio_wait_window_g1

0x9cb6,	// (0x00062eac) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000682ef) popup_call_audio_wait_window_g

0x9cbe,	// (0x00062eb4) popup_call_audio_wait_window_t3

0x9ccc,	// (0x00062ec2) bg_popup_call_pane_cp03_ParamLimits

0x9ccc,	// (0x00062ec2) bg_popup_call_pane_cp03

0x9d2c,	// (0x00062f22) call_thumbnail_pane_cp011_ParamLimits

0x9d2c,	// (0x00062f22) call_thumbnail_pane_cp011

0x9d38,	// (0x00062f2e) call_type_pane_cp034_ParamLimits

0x9d38,	// (0x00062f2e) call_type_pane_cp034

0x9d74,	// (0x00062f6a) popup_call_audio_second_window_g1_ParamLimits

0x9d74,	// (0x00062f6a) popup_call_audio_second_window_g1

0x9db0,	// (0x00062fa6) popup_call_audio_second_window_g2_ParamLimits

0x9db0,	// (0x00062fa6) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000682f4) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000682f4) popup_call_audio_second_window_g

0x9dec,	// (0x00062fe2) popup_call_audio_second_window_t1_ParamLimits

0x9dec,	// (0x00062fe2) popup_call_audio_second_window_t1

0x9e6d,	// (0x00063063) popup_call_audio_second_window_t2_ParamLimits

0x9e6d,	// (0x00063063) popup_call_audio_second_window_t2

0x9ea3,	// (0x00063099) popup_call_audio_second_window_t3_ParamLimits

0x9ea3,	// (0x00063099) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000682f9) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000682f9) popup_call_audio_second_window_t

0x9c9c,	// (0x00062e92) bg_popup_call_pane_cp04

0x9ed9,	// (0x000630cf) list_conf_pane

0x9ee1,	// (0x000630d7) popup_call_audio_conf_window_t1

0x9eef,	// (0x000630e5) call_thumbnail_pane_g1

0x9ef7,	// (0x000630ed) bg_pinb_pane_ParamLimits

0x9ef7,	// (0x000630ed) bg_pinb_pane

0x9f05,	// (0x000630fb) find_pinb_pane

0x9f0e,	// (0x00063104) listscroll_pinb_pane_ParamLimits

0x9f0e,	// (0x00063104) listscroll_pinb_pane

0x9f1d,	// (0x00063113) pinb_bg_pane_g1

0x105b,	// (0x0005a251) pinb_bg_pane_g2

0x1065,	// (0x0005a25b) pinb_bg_pane_g3

0x106f,	// (0x0005a265) pinb_bg_pane_g4

0x1079,	// (0x0005a26f) pinb_bg_pane_g5

0x1083,	// (0x0005a279) pinb_bg_pane_g6

0x108c,	// (0x0005a282) pinb_bg_pane_g7

0x1095,	// (0x0005a28b) pinb_bg_pane_g8

0x10a0,	// (0x0005a296) pinb_bg_pane_g9

0x10aa,	// (0x0005a2a0) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00068300) pinb_bg_pane_g

0x10c5,	// (0x0005a2bb) grid_pinb_pane

0x10ce,	// (0x0005a2c4) list_pinb_pane

0x10d7,	// (0x0005a2cd) scroll_pane_cp01_ParamLimits

0x10d7,	// (0x0005a2cd) scroll_pane_cp01

0x9f27,	// (0x0006311d) find_pinb_pane_g1_ParamLimits

0x9f27,	// (0x0006311d) find_pinb_pane_g1

0x9f3f,	// (0x00063135) find_pinb_pane_t1

0x9f51,	// (0x00063147) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0006831a) find_pinb_pane_t

0x9f66,	// (0x0006315c) input_focus_pane_cp01_ParamLimits

0x9f66,	// (0x0006315c) input_focus_pane_cp01

0x10e9,	// (0x0005a2df) cell_pinb_pane_ParamLimits

0x10e9,	// (0x0005a2df) cell_pinb_pane

0x1101,	// (0x0005a2f7) cell_pinb_pane_g1_ParamLimits

0x1101,	// (0x0005a2f7) cell_pinb_pane_g1

0x1115,	// (0x0005a30b) cell_pinb_pane_g2_ParamLimits

0x1115,	// (0x0005a30b) cell_pinb_pane_g2

0x9f72,	// (0x00063168) cell_pinb_pane_g3_ParamLimits

0x9f72,	// (0x00063168) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0006831f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0006831f) cell_pinb_pane_g

0x9c9c,	// (0x00062e92) grid_highlight_pane_cp01

0x1121,	// (0x0005a317) list_pinb_item_pane_ParamLimits

0x1121,	// (0x0005a317) list_pinb_item_pane

0x9c9c,	// (0x00062e92) list_highlight_pane_cp02

0x1132,	// (0x0005a328) list_pinb_item_pane_g1_ParamLimits

0x1132,	// (0x0005a328) list_pinb_item_pane_g1

0x9f7e,	// (0x00063174) list_pinb_item_pane_g2_ParamLimits

0x9f7e,	// (0x00063174) list_pinb_item_pane_g2

0x113f,	// (0x0005a335) list_pinb_item_pane_g3_ParamLimits

0x113f,	// (0x0005a335) list_pinb_item_pane_g3

0x1150,	// (0x0005a346) list_pinb_item_pane_g4_ParamLimits

0x1150,	// (0x0005a346) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00068326) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00068326) list_pinb_item_pane_g

0x115c,	// (0x0005a352) list_pinb_item_pane_t1_ParamLimits

0x115c,	// (0x0005a352) list_pinb_item_pane_t1

0x1191,	// (0x0005a387) calc_display_pane

0x11b3,	// (0x0005a3a9) calc_paper_pane

0x11d0,	// (0x0005a3c6) grid_calc_pane

0x9c9c,	// (0x00062e92) bg_list_pane_cp01

0x11f2,	// (0x0005a3e8) clock_g1

0x11fa,	// (0x0005a3f0) clock_g2

0x0001,

0xf139,	// (0x0006832f) clock_g

0x1202,	// (0x0005a3f8) clock_t1_ParamLimits

0x1202,	// (0x0005a3f8) clock_t1

0x1217,	// (0x0005a40d) clock_t2_ParamLimits

0x1217,	// (0x0005a40d) clock_t2

0x1229,	// (0x0005a41f) clock_t3_ParamLimits

0x1229,	// (0x0005a41f) clock_t3

0x123b,	// (0x0005a431) clock_t4_ParamLimits

0x123b,	// (0x0005a431) clock_t4

0x124d,	// (0x0005a443) clock_t5_ParamLimits

0x124d,	// (0x0005a443) clock_t5

0x1262,	// (0x0005a458) clock_t6_ParamLimits

0x1262,	// (0x0005a458) clock_t6

0x1274,	// (0x0005a46a) clock_t7_ParamLimits

0x1274,	// (0x0005a46a) clock_t7

0x1286,	// (0x0005a47c) clock_t8_ParamLimits

0x1286,	// (0x0005a47c) clock_t8

0x1298,	// (0x0005a48e) clock_t9_ParamLimits

0x1298,	// (0x0005a48e) clock_t9

0x0008,

0xf13e,	// (0x00068334) clock_t_ParamLimits

0xf13e,	// (0x00068334) clock_t

0x9f92,	// (0x00063188) popup_clock_analogue_window_cp02

0x9f92,	// (0x00063188) popup_clock_digital_window_cp01

0x9f9a,	// (0x00063190) listscroll_help_pane

0x9c9c,	// (0x00062e92) phob_pre_status_pane

0x9fa4,	// (0x0006319a) grid_qdial_pane

0x9ef7,	// (0x000630ed) listscroll_mce_pane

0x9ef7,	// (0x000630ed) bg_notes_pane

0x9fae,	// (0x000631a4) list_notes_pane

0x12aa,	// (0x0005a4a0) scroll_pane_cp06

0x9fbc,	// (0x000631b2) bg_calc_paper_pane

0x9fd0,	// (0x000631c6) list_calc_pane

0x9fea,	// (0x000631e0) bg_calc_display_pane

0x12bc,	// (0x0005a4b2) calc_display_pane_t1

0x12ce,	// (0x0005a4c4) calc_display_pane_t2

0x9ff6,	// (0x000631ec) calc_display_pane_t3

0x0002,

0xf151,	// (0x00068347) calc_display_pane_t

0x12e0,	// (0x0005a4d6) cell_calc_pane_ParamLimits

0x12e0,	// (0x0005a4d6) cell_calc_pane

0xa008,	// (0x000631fe) bg_calc_paper_pane_g1

0xa014,	// (0x0006320a) bg_calc_paper_pane_g2

0xa020,	// (0x00063216) bg_calc_paper_pane_g3

0xa02c,	// (0x00063222) bg_calc_paper_pane_g4

0xa038,	// (0x0006322e) bg_calc_paper_pane_g5

0x1313,	// (0x0005a509) bg_calc_paper_pane_g6

0x1322,	// (0x0005a518) bg_calc_paper_pane_g7

0x1331,	// (0x0005a527) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0006834e) bg_calc_paper_pane_g

0x1340,	// (0x0005a536) calc_bg_paper_pane_g9

0x134f,	// (0x0005a545) list_calc_item_pane_ParamLimits

0x134f,	// (0x0005a545) list_calc_item_pane

0xa044,	// (0x0006323a) list_calc_item_pane_g1

0xa051,	// (0x00063247) list_calc_item_pane_t1_ParamLimits

0xa051,	// (0x00063247) list_calc_item_pane_t1

0x1362,	// (0x0005a558) list_calc_item_pane_t2_ParamLimits

0x1362,	// (0x0005a558) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0006835f) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0006835f) list_calc_item_pane_t

0xa063,	// (0x00063259) cell_calc_pane_g1

0xa06d,	// (0x00063263) grid_highlight_pane_cp02

0xa08f,	// (0x00063285) bg_calc_display_pane_g1

0xa098,	// (0x0006328e) bg_calc_display_pane_g2

0xa0a2,	// (0x00063298) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00068369) bg_calc_display_pane_g

0x1390,	// (0x0005a586) cell_qdial_pane_ParamLimits

0x1390,	// (0x0005a586) cell_qdial_pane

0x13a2,	// (0x0005a598) cell_qdial_pane_g1_ParamLimits

0x13a2,	// (0x0005a598) cell_qdial_pane_g1

0x13b8,	// (0x0005a5ae) cell_qdial_pane_g2_ParamLimits

0x13b8,	// (0x0005a5ae) cell_qdial_pane_g2

0xa0ab,	// (0x000632a1) cell_qdial_pane_g3_ParamLimits

0xa0ab,	// (0x000632a1) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x00068370) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x00068370) cell_qdial_pane_g

0x13df,	// (0x0005a5d5) cell_qdial_pane_t1_ParamLimits

0x13df,	// (0x0005a5d5) cell_qdial_pane_t1

0x13f7,	// (0x0005a5ed) cell_qdial_pane_t2_ParamLimits

0x13f7,	// (0x0005a5ed) cell_qdial_pane_t2

0x140a,	// (0x0005a600) cell_qdial_pane_t3_ParamLimits

0x140a,	// (0x0005a600) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00068379) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00068379) cell_qdial_pane_t

0x9c9c,	// (0x00062e92) grid_highlight_pane_cp04

0xa0b7,	// (0x000632ad) thumbnail_qdial_pane_ParamLimits

0xa0b7,	// (0x000632ad) thumbnail_qdial_pane

0xa113,	// (0x00063309) list_help_pane

0xa11c,	// (0x00063312) scroll_pane_cp02

0x141d,	// (0x0005a613) help_list_pane_t1_ParamLimits

0x141d,	// (0x0005a613) help_list_pane_t1

0xa125,	// (0x0006331b) bg_notes_pane_g2

0xa12d,	// (0x00063323) bg_notes_pane_g3

0xa135,	// (0x0006332b) notes_bg_pane_g1

0xa13d,	// (0x00063333) notes_bg_pane_g4

0xa145,	// (0x0006333b) notes_bg_pane_g5

0xa14d,	// (0x00063343) notes_bg_pane_g6

0xa155,	// (0x0006334b) notes_bg_pane_g7

0xa15d,	// (0x00063353) notes_bg_pane_g8

0xa165,	// (0x0006335b) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00068397) notes_bg_pane_g

0x1438,	// (0x0005a62e) list_notes_text_pane_ParamLimits

0x1438,	// (0x0005a62e) list_notes_text_pane

0xa16d,	// (0x00063363) list_notes_text_pane_g1

0x144b,	// (0x0005a641) list_notes_text_pane_t1

0x1459,	// (0x0005a64f) listscroll_cale_week_pane

0x1483,	// (0x0005a679) bg_cale_heading_pane

0x149b,	// (0x0005a691) bg_cale_pane_cp01

0x14b8,	// (0x0005a6ae) cale_week_corner_pane

0x14d7,	// (0x0005a6cd) cale_week_day_heading_pane

0x14f4,	// (0x0005a6ea) cale_week_scroll_pane_g1

0x1507,	// (0x0005a6fd) cale_week_scroll_pane_g2

0x151f,	// (0x0005a715) cale_week_scroll_pane_g3

0x1537,	// (0x0005a72d) cale_week_scroll_pane_g4

0x154f,	// (0x0005a745) cale_week_scroll_pane_g5

0x1567,	// (0x0005a75d) cale_week_scroll_pane_g6

0x157f,	// (0x0005a775) cale_week_scroll_pane_g7

0x1597,	// (0x0005a78d) cale_week_scroll_pane_g8

0x15b3,	// (0x0005a7a9) cale_week_scroll_pane_g9

0x15cb,	// (0x0005a7c1) cale_week_scroll_pane_g10

0x15e3,	// (0x0005a7d9) cale_week_scroll_pane_g11

0x15fb,	// (0x0005a7f1) cale_week_scroll_pane_g12

0x1613,	// (0x0005a809) cale_week_scroll_pane_g13

0x1613,	// (0x0005a809) cale_week_scroll_pane_g14

0x1613,	// (0x0005a809) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000683a6) cale_week_scroll_pane_g

0x1647,	// (0x0005a83d) cale_week_time_pane

0x1663,	// (0x0005a859) grid_cale_week_pane

0xa1a2,	// (0x00063398) scroll_pane_cp08

0x167d,	// (0x0005a873) cell_cale_week_pane_ParamLimits

0x167d,	// (0x0005a873) cell_cale_week_pane

0x16f3,	// (0x0005a8e9) cale_week_day_heading_pane_t1

0x1718,	// (0x0005a90e) cale_week_day_heading_pane_t2

0x1742,	// (0x0005a938) cale_week_day_heading_pane_t3

0x176c,	// (0x0005a962) cale_week_day_heading_pane_t4

0x1796,	// (0x0005a98c) cale_week_day_heading_pane_t5

0x17c0,	// (0x0005a9b6) cale_week_day_heading_pane_t6

0x17ea,	// (0x0005a9e0) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000683c7) cale_week_day_heading_pane_t

0xa1bf,	// (0x000633b5) bg_cale_side_pane

0x180f,	// (0x0005aa05) cale_week_time_pane_t1

0x1849,	// (0x0005aa3f) cale_week_time_pane_t2

0x1883,	// (0x0005aa79) cale_week_time_pane_t3

0x18bd,	// (0x0005aab3) cale_week_time_pane_t4

0x18f7,	// (0x0005aaed) cale_week_time_pane_t5

0x1931,	// (0x0005ab27) cale_week_time_pane_t6

0x196b,	// (0x0005ab61) cale_week_time_pane_t7

0x19a5,	// (0x0005ab9b) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000683d6) cale_week_time_pane_t

0x19df,	// (0x0005abd5) cell_cale_week_pane_g2

0x19fe,	// (0x0005abf4) cell_cale_week_pane_g3_ParamLimits

0x19fe,	// (0x0005abf4) cell_cale_week_pane_g3

0xa1cd,	// (0x000633c3) grid_highlight_pane_cp07

0xa1d5,	// (0x000633cb) listscroll_gms_pane

0xa1df,	// (0x000633d5) grid_gms_pane

0xa1e8,	// (0x000633de) listscroll_gms_pane_g1

0xa1f0,	// (0x000633e6) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000683e7) listscroll_gms_pane_g

0x1a16,	// (0x0005ac0c) scroll_pane_cp010

0x1a21,	// (0x0005ac17) cell_gms_pane_ParamLimits

0x1a21,	// (0x0005ac17) cell_gms_pane

0x1a32,	// (0x0005ac28) cell_gms_pane_g1

0xa1f8,	// (0x000633ee) cell_gms_pane_g2

0xa16d,	// (0x00063363) cell_gms_pane_g3

0xa200,	// (0x000633f6) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000683ec) cell_gms_pane_g

0xa209,	// (0x000633ff) grid_highlight_pane_cp09

0x3c2b,	// (0x0005ce21) phob_pre_status_pane_g1

0x3c33,	// (0x0005ce29) phob_pre_status_pane_g2

0x3c3b,	// (0x0005ce31) phob_pre_status_pane_g3

0x3c43,	// (0x0005ce39) phob_pre_status_pane_g4

0x0004,

0xf565,	// (0x0006875b) phob_pre_status_pane_g

0x3c53,	// (0x0005ce49) phob_pre_status_pane_t1

0x3c61,	// (0x0005ce57) phob_pre_status_pane_t2

0x3c6f,	// (0x0005ce65) phob_pre_status_pane_t3

0x0002,

0xf570,	// (0x00068766) phob_pre_status_pane_t

0xa211,	// (0x00063407) bg_list_pane_cp05

0x1a42,	// (0x0005ac38) grid_vorec_pane

0x1a4a,	// (0x0005ac40) vorec_t1

0x1a58,	// (0x0005ac4e) vorec_t2

0x1a66,	// (0x0005ac5c) vorec_t3

0x1a74,	// (0x0005ac6a) vorec_t4

0x97a9,	// (0x0006299f) vorec_t5

0x97b7,	// (0x000629ad) vorec_t6

0x0004,

0xf1ff,	// (0x000683f5) vorec_t

0x97c5,	// (0x000629bb) wait_bar_pane_cp01

0x1a90,	// (0x0005ac86) cell_vorec_pane_ParamLimits

0x1a90,	// (0x0005ac86) cell_vorec_pane

0xa219,	// (0x0006340f) cell_vorec_pane_g1

0x9c9c,	// (0x00062e92) grid_highlight_pane_cp05

0x1ab5,	// (0x0005acab) cams_zoom_pane

0x1ac4,	// (0x0005acba) image_vga_pane

0x1ada,	// (0x0005acd0) main_camera_pane_g1

0x1aea,	// (0x0005ace0) main_camera_pane_g2

0x1afa,	// (0x0005acf0) main_camera_pane_g3

0x1b0a,	// (0x0005ad00) main_camera_pane_g4

0x1b1a,	// (0x0005ad10) main_camera_pane_g5

0x1b2a,	// (0x0005ad20) main_camera_pane_g6

0x1b3a,	// (0x0005ad30) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00068400) main_camera_pane_g

0x1b4a,	// (0x0005ad40) main_camera_pane_t1

0x1b60,	// (0x0005ad56) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00068411) main_camera_pane_t

0x1b92,	// (0x0005ad88) cams_zoom_pane_cp_ParamLimits

0x1b92,	// (0x0005ad88) cams_zoom_pane_cp

0x1bba,	// (0x0005adb0) image_cif_pane_ParamLimits

0x1bba,	// (0x0005adb0) image_cif_pane

0x1be9,	// (0x0005addf) image_subqcif_pane

0x1bf1,	// (0x0005ade7) main_video_pane_g1_ParamLimits

0x1bf1,	// (0x0005ade7) main_video_pane_g1

0x1c15,	// (0x0005ae0b) main_video_pane_g2_ParamLimits

0x1c15,	// (0x0005ae0b) main_video_pane_g2

0x1c49,	// (0x0005ae3f) main_video_pane_g3_ParamLimits

0x1c49,	// (0x0005ae3f) main_video_pane_g3

0x1c77,	// (0x0005ae6d) main_video_pane_g4_ParamLimits

0x1c77,	// (0x0005ae6d) main_video_pane_g4

0x1ca5,	// (0x0005ae9b) main_video_pane_g5_ParamLimits

0x1ca5,	// (0x0005ae9b) main_video_pane_g5

0xa22f,	// (0x00063425) main_video_pane_g6_ParamLimits

0xa22f,	// (0x00063425) main_video_pane_g6

0x0006,

0xf220,	// (0x00068416) main_video_pane_g_ParamLimits

0xf220,	// (0x00068416) main_video_pane_g

0x1ccc,	// (0x0005aec2) main_video_pane_t1_ParamLimits

0x1ccc,	// (0x0005aec2) main_video_pane_t1

0xa249,	// (0x0006343f) cams_zoom_pane_g1

0xa252,	// (0x00063448) cams_zoom_pane_g2

0xa25b,	// (0x00063451) cams_zoom_pane_g3

0xa264,	// (0x0006345a) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00068425) cams_zoom_pane_g

0x1d29,	// (0x0005af1f) grid_cams_pane

0x1d3e,	// (0x0005af34) linegrid_cams_pane

0x1d4f,	// (0x0005af45) cell_cams_pane_ParamLimits

0x1d4f,	// (0x0005af45) cell_cams_pane

0xa26d,	// (0x00063463) cams_burst_image_pane

0xa275,	// (0x0006346b) cell_cams_pane_g1

0x9c9c,	// (0x00062e92) grid_highlight_pane_cp03

0xa063,	// (0x00063259) mp_bg_pane_g1

0x9c9c,	// (0x00062e92) bg_list_pane_cp03

0xe362,	// (0x00067558) bg_mp_pane

0xe36a,	// (0x00067560) grid_mp_pane

0xe372,	// (0x00067568) media_player_g1

0xe37a,	// (0x00067570) media_player_t1

0xe388,	// (0x0006757e) media_player_t2

0xe396,	// (0x0006758c) media_player_t3

0xe3a4,	// (0x0006759a) media_player_t4

0xe3b2,	// (0x000675a8) media_player_t5

0xe3c0,	// (0x000675b6) media_player_t6

0xe3ce,	// (0x000675c4) media_player_t7

0x0006,

0x034e,	// (0x00059544) media_player_t

0xe3dc,	// (0x000675d2) wait_bar_pane_cp02

0xf551,	// (0x00068747) main_usb_pane_t

0x3c22,	// (0x0005ce18) cell_mp_pane

0xa063,	// (0x00063259) cell_mp_pane_g1

0x9c9c,	// (0x00062e92) grid_highlight_pane_cp06

0xa27d,	// (0x00063473) grid_skin_colour_pane

0xa285,	// (0x0006347b) list_highlight_pane_cp03

0x1e82,	// (0x0005b078) skin_g1

0xa28d,	// (0x00063483) skin_t1

0xa29c,	// (0x00063492) skin_t2

0x0001,

0xf264,	// (0x0006845a) skin_t

0x1e8a,	// (0x0005b080) cell_skin_colour_pane_ParamLimits

0x1e8a,	// (0x0005b080) cell_skin_colour_pane

0xa2aa,	// (0x000634a0) cell_skin_colour_pane_g1

0x1ef3,	// (0x0005b0e9) call_video_g1_ParamLimits

0x1ef3,	// (0x0005b0e9) call_video_g1

0x1f09,	// (0x0005b0ff) call_video_g2_ParamLimits

0x1f09,	// (0x0005b0ff) call_video_g2

0x0001,

0xf269,	// (0x0006845f) call_video_g_ParamLimits

0xf269,	// (0x0006845f) call_video_g

0x1f4e,	// (0x0005b144) call_video_uplink_pane_cp1_ParamLimits

0x1f4e,	// (0x0005b144) call_video_uplink_pane_cp1

0xa2bc,	// (0x000634b2) call_video_uplink_pane_cp2

0x1fe3,	// (0x0005b1d9) video_down_crop_pane_ParamLimits

0x1fe3,	// (0x0005b1d9) video_down_crop_pane

0x20a6,	// (0x0005b29c) video_down_pane_ParamLimits

0x20a6,	// (0x0005b29c) video_down_pane

0xa2c4,	// (0x000634ba) video_down_subqcif_pane_ParamLimits

0xa2c4,	// (0x000634ba) video_down_subqcif_pane

0xa2dc,	// (0x000634d2) video_down_subqcif_pane_cp_ParamLimits

0xa2dc,	// (0x000634d2) video_down_subqcif_pane_cp

0xa300,	// (0x000634f6) im_reading_pane_ParamLimits

0xa300,	// (0x000634f6) im_reading_pane

0x2163,	// (0x0005b359) im_writing_pane_ParamLimits

0x2163,	// (0x0005b359) im_writing_pane

0x2179,	// (0x0005b36f) im_reading_pane_t1

0xa31a,	// (0x00063510) list_im_pane

0xa32b,	// (0x00063521) scroll_pane_cp07

0x21af,	// (0x0005b3a5) im_writing_pane_t1_ParamLimits

0x21af,	// (0x0005b3a5) im_writing_pane_t1

0xa344,	// (0x0006353a) im_writing_pane_t2_ParamLimits

0xa344,	// (0x0006353a) im_writing_pane_t2

0x0001,

0xf273,	// (0x00068469) im_writing_pane_t_ParamLimits

0xf273,	// (0x00068469) im_writing_pane_t

0x9c9c,	// (0x00062e92) input_focus_pane_cp04

0x9c9c,	// (0x00062e92) input_focus_pane_cp05

0x21c4,	// (0x0005b3ba) list_im_single_pane_ParamLimits

0x21c4,	// (0x0005b3ba) list_im_single_pane

0xa361,	// (0x00063557) list_single_im_pane_t1

0x3be8,	// (0x0005cdde) blid_accuracy_pane

0x3bf0,	// (0x0005cde6) blid_compass_pane

0x3bf8,	// (0x0005cdee) main_location_t1

0x3c06,	// (0x0005cdfc) main_location_t2

0x3c14,	// (0x0005ce0a) main_location_t3

0x0002,

0xf55e,	// (0x00068754) main_location_t

0x9c9c,	// (0x00062e92) aid_levels_location

0xa063,	// (0x00063259) blid_accuracy_pane_g1

0xa063,	// (0x00063259) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000684cb) blid_accuracy_pane_g

0xa39b,	// (0x00063591) wml_content_pane

0xa3d9,	// (0x000635cf) wml_button_pane_ParamLimits

0xa3d9,	// (0x000635cf) wml_button_pane

0x1a90,	// (0x0005ac86) wml_list_single_large_pane_ParamLimits

0x1a90,	// (0x0005ac86) wml_list_single_large_pane

0x21d7,	// (0x0005b3cd) wml_list_single_medium_pane_ParamLimits

0x21d7,	// (0x0005b3cd) wml_list_single_medium_pane

0x21eb,	// (0x0005b3e1) wml_list_single_small_pane_ParamLimits

0x21eb,	// (0x0005b3e1) wml_list_single_small_pane

0xa3ed,	// (0x000635e3) wml_selection_box_pane_ParamLimits

0xa3ed,	// (0x000635e3) wml_selection_box_pane

0xa400,	// (0x000635f6) wml_list_single_pane_t1

0xa40f,	// (0x00063605) wml_list_single_medium_pane_t1

0xa41e,	// (0x00063614) wml_list_single_large_pane_t1

0xa42d,	// (0x00063623) input_focus_pane_cp02_ParamLimits

0xa42d,	// (0x00063623) input_focus_pane_cp02

0xa440,	// (0x00063636) wml_selection_box_pane_g1

0xa449,	// (0x0006363f) wml_selection_box_pane_t1_ParamLimits

0xa449,	// (0x0006363f) wml_selection_box_pane_t1

0x9ef7,	// (0x000630ed) bg_wml_button_pane_ParamLimits

0x9ef7,	// (0x000630ed) bg_wml_button_pane

0xa461,	// (0x00063657) wml_button_pane_g1

0xa469,	// (0x0006365f) wml_button_pane_t1

0xa461,	// (0x00063657) wml_button_bg_pane_g1

0xa479,	// (0x0006366f) wml_button_bg_pane_g2

0xa481,	// (0x00063677) wml_button_bg_pane_g3

0xa489,	// (0x0006367f) wml_button_bg_pane_g4

0xa491,	// (0x00063687) wml_button_bg_pane_g5

0xa499,	// (0x0006368f) wml_button_bg_pane_g6

0xa4a1,	// (0x00063697) wml_button_bg_pane_g7

0xa4a9,	// (0x0006369f) wml_button_bg_pane_g8

0xa4b1,	// (0x000636a7) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006846e) wml_button_bg_pane_g

0x2201,	// (0x0005b3f7) bg_list_pane_cp02

0xa4b9,	// (0x000636af) mce_header_pane_ParamLimits

0xa4b9,	// (0x000636af) mce_header_pane

0xa4cf,	// (0x000636c5) mce_icon_pane

0xa4cf,	// (0x000636c5) mce_image_pane

0xa4d8,	// (0x000636ce) mce_text_pane_ParamLimits

0xa4d8,	// (0x000636ce) mce_text_pane

0x2209,	// (0x0005b3ff) scroll_pane_cp03

0xa3d1,	// (0x000635c7) scroll_pane_cp04

0xa4eb,	// (0x000636e1) scroll_pane_cp05_ParamLimits

0xa4eb,	// (0x000636e1) scroll_pane_cp05

0x2213,	// (0x0005b409) mce_header_field_pane_ParamLimits

0x2213,	// (0x0005b409) mce_header_field_pane

0x222a,	// (0x0005b420) mce_header_field_pane_2_ParamLimits

0x222a,	// (0x0005b420) mce_header_field_pane_2

0x2240,	// (0x0005b436) mce_header_field_pane_3

0x2248,	// (0x0005b43e) list_single_mce_message_pane_ParamLimits

0x2248,	// (0x0005b43e) list_single_mce_message_pane

0x225b,	// (0x0005b451) list_single_mce_smart_pane_ParamLimits

0x225b,	// (0x0005b451) list_single_mce_smart_pane

0xa4f7,	// (0x000636ed) input_focus_pane_cp03

0xa500,	// (0x000636f6) list_header_data_pane

0x2279,	// (0x0005b46f) mce_header_field_pane_t1

0x2287,	// (0x0005b47d) list_single_mce_header_pane_ParamLimits

0x2287,	// (0x0005b47d) list_single_mce_header_pane

0xa508,	// (0x000636fe) list_single_mce_header_pane_t1

0xa517,	// (0x0006370d) list_single_mce_message_pane_g1

0xa51f,	// (0x00063715) list_single_mce_message_pane_t1

0x22c1,	// (0x0005b4b7) bg_cale_heading_pane_cp01_ParamLimits

0x22c1,	// (0x0005b4b7) bg_cale_heading_pane_cp01

0xa52d,	// (0x00063723) bg_cale_pane_cp02_ParamLimits

0xa52d,	// (0x00063723) bg_cale_pane_cp02

0x22fb,	// (0x0005b4f1) cale_month_corner_pane

0x231a,	// (0x0005b510) cale_month_day_heading_pane_ParamLimits

0x231a,	// (0x0005b510) cale_month_day_heading_pane

0x2360,	// (0x0005b556) cale_month_pane_g1_ParamLimits

0x2360,	// (0x0005b556) cale_month_pane_g1

0x238f,	// (0x0005b585) cale_month_pane_g2_ParamLimits

0x238f,	// (0x0005b585) cale_month_pane_g2

0x23b7,	// (0x0005b5ad) cale_month_pane_g3_ParamLimits

0x23b7,	// (0x0005b5ad) cale_month_pane_g3

0x23f3,	// (0x0005b5e9) cale_month_pane_g4_ParamLimits

0x23f3,	// (0x0005b5e9) cale_month_pane_g4

0x242f,	// (0x0005b625) cale_month_pane_g5_ParamLimits

0x242f,	// (0x0005b625) cale_month_pane_g5

0x246b,	// (0x0005b661) cale_month_pane_g6_ParamLimits

0x246b,	// (0x0005b661) cale_month_pane_g6

0x24a7,	// (0x0005b69d) cale_month_pane_g7_ParamLimits

0x24a7,	// (0x0005b69d) cale_month_pane_g7

0x24e3,	// (0x0005b6d9) cale_month_pane_g8_ParamLimits

0x24e3,	// (0x0005b6d9) cale_month_pane_g8

0x2527,	// (0x0005b71d) cale_month_pane_g9_ParamLimits

0x2527,	// (0x0005b71d) cale_month_pane_g9

0x256d,	// (0x0005b763) cale_month_pane_g10_ParamLimits

0x256d,	// (0x0005b763) cale_month_pane_g10

0x25b3,	// (0x0005b7a9) cale_month_pane_g11_ParamLimits

0x25b3,	// (0x0005b7a9) cale_month_pane_g11

0x25f9,	// (0x0005b7ef) cale_month_pane_g12_ParamLimits

0x25f9,	// (0x0005b7ef) cale_month_pane_g12

0x263f,	// (0x0005b835) cale_month_pane_g13_ParamLimits

0x263f,	// (0x0005b835) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00068481) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00068481) cale_month_pane_g

0x2685,	// (0x0005b87b) cale_month_week_pane

0x26a1,	// (0x0005b897) grid_cale_month_pane_ParamLimits

0x26a1,	// (0x0005b897) grid_cale_month_pane

0x26de,	// (0x0005b8d4) cale_month_day_heading_pane_t1

0x2764,	// (0x0005b95a) cale_month_day_heading_pane_t2

0x27dd,	// (0x0005b9d3) cale_month_day_heading_pane_t3

0x2856,	// (0x0005ba4c) cale_month_day_heading_pane_t4

0x28cf,	// (0x0005bac5) cale_month_day_heading_pane_t5

0x2948,	// (0x0005bb3e) cale_month_day_heading_pane_t6

0x29c1,	// (0x0005bbb7) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006849c) cale_month_day_heading_pane_t

0xa1bf,	// (0x000633b5) bg_cale_side_pane_cp01

0x2a3e,	// (0x0005bc34) cale_month_week_pane_t1

0x2a57,	// (0x0005bc4d) cale_month_week_pane_t2

0x2a70,	// (0x0005bc66) cale_month_week_pane_t3

0x2a89,	// (0x0005bc7f) cale_month_week_pane_t4

0x2aa2,	// (0x0005bc98) cale_month_week_pane_t5

0x2abb,	// (0x0005bcb1) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000684ab) cale_month_week_pane_t

0x2ad4,	// (0x0005bcca) cell_cale_month_pane_ParamLimits

0x2ad4,	// (0x0005bcca) cell_cale_month_pane

0xa56c,	// (0x00063762) cell_cale_month_pane_g1

0x2bf0,	// (0x0005bde6) cell_cale_month_pane_t1_ParamLimits

0x2bf0,	// (0x0005bde6) cell_cale_month_pane_t1

0xa1cd,	// (0x000633c3) grid_highlight_pane_cp08

0xa063,	// (0x00063259) main_smil_g1

0x2c1c,	// (0x0005be12) smil_status_pane

0xa578,	// (0x0006376e) smil_text_pane

0xe242,	// (0x00067438) bg_popup_call3_rect_pane_g8

0xe24a,	// (0x00067440) bg_popup_call3_rect_pane_g9

0x0008,

0xf539,	// (0x0006872f) bg_popup_call3_rect_pane_g

0xe4d1,	// (0x000676c7) smil_status_volume_pane_g1

0xa582,	// (0x00063778) smil_status_pane_t1

0xb705,	// (0x000648fb) volume_smil_pane

0xa599,	// (0x0006378f) list_smil_text_pane

0x2c2d,	// (0x0005be23) scroll_pane_cp011

0x2c38,	// (0x0005be2e) smil_text_list_pane_t1_ParamLimits

0x2c38,	// (0x0005be2e) smil_text_list_pane_t1

0xa5a3,	// (0x00063799) aid_volume_smil_ParamLimits

0xa5a3,	// (0x00063799) aid_volume_smil

0xa063,	// (0x00063259) smil_volume_pane_g1

0xa063,	// (0x00063259) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000684cb) smil_volume_pane_g

0x1459,	// (0x0005a64f) listscroll_cale_day_pane

0xa5c5,	// (0x000637bb) bg_cale_pane

0xa5dd,	// (0x000637d3) list_cale_pane

0xa600,	// (0x000637f6) scroll_pane_cp09

0xa611,	// (0x00063807) cale_bg_pane_g1

0xa619,	// (0x0006380f) cale_bg_pane_g2

0xa621,	// (0x00063817) cale_bg_pane_g3

0xa629,	// (0x0006381f) cale_bg_pane_g4

0xa631,	// (0x00063827) cale_bg_pane_g5

0xa639,	// (0x0006382f) cale_bg_pane_g6

0xa641,	// (0x00063837) cale_bg_pane_g7

0xa649,	// (0x0006383f) cale_bg_pane_g8

0xa651,	// (0x00063847) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000684d0) cale_bg_pane_g

0x2c6e,	// (0x0005be64) list_cale_time_pane_ParamLimits

0x2c6e,	// (0x0005be64) list_cale_time_pane

0xa661,	// (0x00063857) list_cale_time_pane_g1_ParamLimits

0xa661,	// (0x00063857) list_cale_time_pane_g1

0xa66d,	// (0x00063863) list_cale_time_pane_g2_ParamLimits

0xa66d,	// (0x00063863) list_cale_time_pane_g2

0x2c81,	// (0x0005be77) list_cale_time_pane_g3_ParamLimits

0x2c81,	// (0x0005be77) list_cale_time_pane_g3

0x2c8d,	// (0x0005be83) list_cale_time_pane_g4_ParamLimits

0x2c8d,	// (0x0005be83) list_cale_time_pane_g4

0x2c99,	// (0x0005be8f) list_cale_time_pane_g5_ParamLimits

0x2c99,	// (0x0005be8f) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000684e3) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000684e3) list_cale_time_pane_g

0xa687,	// (0x0006387d) list_cale_time_pane_t1_ParamLimits

0xa687,	// (0x0006387d) list_cale_time_pane_t1

0xa6af,	// (0x000638a5) list_cale_time_pane_t2_ParamLimits

0xa6af,	// (0x000638a5) list_cale_time_pane_t2

0x301c,	// (0x0005c212) aid_blid_cardinal_pane

0x305a,	// (0x0005c250) compass_pane_t4

0xa6d7,	// (0x000638cd) list_cale_time_pane_t4_ParamLimits

0xa6d7,	// (0x000638cd) list_cale_time_pane_t4

0x3068,	// (0x0005c25e) compass_pane_t5

0x3076,	// (0x0005c26c) compass_pane_t6

0x3084,	// (0x0005c27a) compass_pane_t7

0xaba4,	// (0x00063d9a) navi_pane_cc_t1

0xad91,	// (0x00063f87) aid_phob_thumbnail_center_pane

0x3686,	// (0x0005c87c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000684f0) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000684f0) list_cale_time_pane_t

0x98f5,	// (0x00062aeb) bg_popup_window_pane_cp02_ParamLimits

0x98f5,	// (0x00062aeb) bg_popup_window_pane_cp02

0xa6ff,	// (0x000638f5) heading_pane_cp01_ParamLimits

0xa6ff,	// (0x000638f5) heading_pane_cp01

0xa70b,	// (0x00063901) loc_req_pane_ParamLimits

0xa70b,	// (0x00063901) loc_req_pane

0xa71b,	// (0x00063911) loc_type_pane_ParamLimits

0xa71b,	// (0x00063911) loc_type_pane

0xa72d,	// (0x00063923) loc_type_pane_t1_ParamLimits

0xa72d,	// (0x00063923) loc_type_pane_t1

0xa73f,	// (0x00063935) loc_type_pane_t2_ParamLimits

0xa73f,	// (0x00063935) loc_type_pane_t2

0xa751,	// (0x00063947) loc_type_pane_t3_ParamLimits

0xa751,	// (0x00063947) loc_type_pane_t3

0x0002,

0xf301,	// (0x000684f7) loc_type_pane_t_ParamLimits

0xf301,	// (0x000684f7) loc_type_pane_t

0xa763,	// (0x00063959) list_loc_req_pane

0xa76d,	// (0x00063963) scroll_pane_cp012

0x2ca5,	// (0x0005be9b) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ca5,	// (0x0005be9b) list_single_loc_request_popup_menu_pane

0xa776,	// (0x0006396c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa776,	// (0x0006396c) list_single_loc_request_popup_menu_pane_g1

0xa782,	// (0x00063978) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa782,	// (0x00063978) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000684fe) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000684fe) list_single_loc_request_popup_menu_pane_g

0xa78e,	// (0x00063984) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa78e,	// (0x00063984) list_single_loc_request_popup_menu_pane_t1

0x9ef7,	// (0x000630ed) bg_popup_window_pane_cp03_ParamLimits

0x9ef7,	// (0x000630ed) bg_popup_window_pane_cp03

0xa7a4,	// (0x0006399a) heading_loc_req_pane_ParamLimits

0xa7a4,	// (0x0006399a) heading_loc_req_pane

0x2cb2,	// (0x0005bea8) popup_dyc_status_message_window_g1_ParamLimits

0x2cb2,	// (0x0005bea8) popup_dyc_status_message_window_g1

0x2cc6,	// (0x0005bebc) popup_dyc_status_message_window_t1_ParamLimits

0x2cc6,	// (0x0005bebc) popup_dyc_status_message_window_t1

0x2cdb,	// (0x0005bed1) popup_dyc_status_message_window_t2_ParamLimits

0x2cdb,	// (0x0005bed1) popup_dyc_status_message_window_t2

0x2cf0,	// (0x0005bee6) popup_dyc_status_message_window_t3_ParamLimits

0x2cf0,	// (0x0005bee6) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00068503) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00068503) popup_dyc_status_message_window_t

0x9c9c,	// (0x00062e92) bg_heading_pane_cp01

0xa7b0,	// (0x000639a6) heading_loc_req_pane_g1

0xa7b8,	// (0x000639ae) heading_loc_req_pane_g2

0xa7c0,	// (0x000639b6) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0006850a) heading_loc_req_pane_g

0xa7c8,	// (0x000639be) heading_loc_req_pane_t1

0xa7d7,	// (0x000639cd) bg_popup_sub_pane_cp01_ParamLimits

0xa7d7,	// (0x000639cd) bg_popup_sub_pane_cp01

0xa7e5,	// (0x000639db) popup_cale_events_window_g1_ParamLimits

0xa7e5,	// (0x000639db) popup_cale_events_window_g1

0xa805,	// (0x000639fb) popup_cale_events_window_g2_ParamLimits

0xa805,	// (0x000639fb) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0006853e) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0006853e) popup_cale_events_window_g

0xa825,	// (0x00063a1b) popup_cale_events_window_t1_ParamLimits

0xa825,	// (0x00063a1b) popup_cale_events_window_t1

0xa837,	// (0x00063a2d) popup_cale_events_window_t2_ParamLimits

0xa837,	// (0x00063a2d) popup_cale_events_window_t2

0xa875,	// (0x00063a6b) popup_cale_events_window_t3_ParamLimits

0xa875,	// (0x00063a6b) popup_cale_events_window_t3

0xa8af,	// (0x00063aa5) popup_cale_events_window_t4_ParamLimits

0xa8af,	// (0x00063aa5) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00068543) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00068543) popup_cale_events_window_t

0x2de9,	// (0x0005bfdf) call_type_pane

0x2df9,	// (0x0005bfef) popup_call_status_window_g1

0x2e0d,	// (0x0005c003) popup_call_status_window_g2

0x2e21,	// (0x0005c017) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0006854c) popup_call_status_window_g

0xa8e5,	// (0x00063adb) call_type_pane_g1

0xa8ee,	// (0x00063ae4) call_type_pane_g2

0x0001,

0xf35d,	// (0x00068553) call_type_pane_g

0x9c9c,	// (0x00062e92) bg_popup_sub_pane_cp02

0xa8f7,	// (0x00063aed) listscroll_popup_wml_pane

0xa8ff,	// (0x00063af5) list_wml_pane

0xa909,	// (0x00063aff) scroll_pane_cp013

0x2e30,	// (0x0005c026) list_single_graphic_popup_wml_pane_ParamLimits

0x2e30,	// (0x0005c026) list_single_graphic_popup_wml_pane

0xa063,	// (0x00063259) list_single_graphic_popup_wml_pane_g1

0xa912,	// (0x00063b08) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00068558) list_single_graphic_popup_wml_pane_g

0xa91a,	// (0x00063b10) list_single_graphic_popup_wml_pane_t1

0xa930,	// (0x00063b26) aid_call_pane

0x9eef,	// (0x000630e5) popup_clock_analogue_window_g1

0x9eef,	// (0x000630e5) popup_clock_analogue_window_g2

0xa938,	// (0x00063b2e) popup_clock_analogue_window_g3

0xa938,	// (0x00063b2e) popup_clock_analogue_window_g4

0xa063,	// (0x00063259) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006855d) popup_clock_analogue_window_g

0xa940,	// (0x00063b36) popup_clock_analogue_window_t1

0xa94e,	// (0x00063b44) clock_digital_number_pane_ParamLimits

0xa94e,	// (0x00063b44) clock_digital_number_pane

0xa95a,	// (0x00063b50) clock_digital_number_pane_cp02_ParamLimits

0xa95a,	// (0x00063b50) clock_digital_number_pane_cp02

0xa966,	// (0x00063b5c) clock_digital_number_pane_cp03_ParamLimits

0xa966,	// (0x00063b5c) clock_digital_number_pane_cp03

0xa972,	// (0x00063b68) clock_digital_number_pane_cp04_ParamLimits

0xa972,	// (0x00063b68) clock_digital_number_pane_cp04

0xa97e,	// (0x00063b74) clock_digital_separator_pane_ParamLimits

0xa97e,	// (0x00063b74) clock_digital_separator_pane

0xa98a,	// (0x00063b80) popup_clock_digital_window_t1

0xa063,	// (0x00063259) clock_digital_number_pane_g1

0xa063,	// (0x00063259) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000684cb) clock_digital_number_pane_g

0xa063,	// (0x00063259) clock_digital_separator_pane_g1

0xa063,	// (0x00063259) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000684cb) clock_digital_separator_pane_g

0x9c9c,	// (0x00062e92) bg_popup_window_pane_cp04

0xa9a7,	// (0x00063b9d) heading_pane_cp03

0xa9af,	// (0x00063ba5) listscroll_popup_gms_pane

0xa9b7,	// (0x00063bad) grid_large_graphic_popup_pane

0xa9c1,	// (0x00063bb7) listscroll_popup_gms_pane_g1

0xa9c9,	// (0x00063bbf) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00068568) listscroll_popup_gms_pane_g

0xa3d1,	// (0x000635c7) scroll_pane_cp014

0x2e42,	// (0x0005c038) cell_large_graphic_popup_pane_ParamLimits

0x2e42,	// (0x0005c038) cell_large_graphic_popup_pane

0x2e58,	// (0x0005c04e) cell_large_graphic_popup_pane_g1_ParamLimits

0x2e58,	// (0x0005c04e) cell_large_graphic_popup_pane_g1

0xa9d1,	// (0x00063bc7) cell_large_graphic_popup_pane_g2_ParamLimits

0xa9d1,	// (0x00063bc7) cell_large_graphic_popup_pane_g2

0xa9dd,	// (0x00063bd3) cell_large_graphic_popup_pane_g3_ParamLimits

0xa9dd,	// (0x00063bd3) cell_large_graphic_popup_pane_g3

0xa9ea,	// (0x00063be0) cell_large_graphic_popup_pane_g4_ParamLimits

0xa9ea,	// (0x00063be0) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0006856d) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0006856d) cell_large_graphic_popup_pane_g

0xa9fa,	// (0x00063bf0) grid_highlight_pane_cp010

0xa063,	// (0x00063259) bg_popup_call_pane_g1

0xaa04,	// (0x00063bfa) list_single_graphic_popup_conf_pane_ParamLimits

0xaa04,	// (0x00063bfa) list_single_graphic_popup_conf_pane

0xaa17,	// (0x00063c0d) list_highlight_pane_cp01

0xaa20,	// (0x00063c16) list_single_graphic_popup_conf_pane_g1

0xaa28,	// (0x00063c1e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00068576) list_single_graphic_popup_conf_pane_g

0xaa30,	// (0x00063c26) list_single_graphic_popup_conf_pane_t1

0xaa3e,	// (0x00063c34) linegrid_cams_pane_g1

0x2e64,	// (0x0005c05a) linegrid_cams_pane_g2

0xa16d,	// (0x00063363) linegrid_cams_pane_g3

0xaa47,	// (0x00063c3d) linegrid_cams_pane_g4

0x2e6d,	// (0x0005c063) linegrid_cams_pane_g5

0x2e76,	// (0x0005c06c) linegrid_cams_pane_g6

0xa200,	// (0x000633f6) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0006857b) linegrid_cams_pane_g

0xaa50,	// (0x00063c46) popup_clock_analogue_window

0xaa50,	// (0x00063c46) popup_clock_digital_window

0x9c9c,	// (0x00062e92) popup_phob_thumbnail_window

0xa063,	// (0x00063259) call_video_uplink_pane_g1

0xaa59,	// (0x00063c4f) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0006858a) call_video_uplink_pane_g

0xa1cd,	// (0x000633c3) video_uplink_pane

0xaa61,	// (0x00063c57) mce_image_pane_g1

0x2e7f,	// (0x0005c075) mce_image_pane_g2

0x2e87,	// (0x0005c07d) mce_image_pane_g3

0x2e8f,	// (0x0005c085) mce_image_pane_g4

0x2e97,	// (0x0005c08d) mce_image_pane_g5

0x0004,

0xf399,	// (0x0006858f) mce_image_pane_g

0xaa6b,	// (0x00063c61) control_top_pane_stacon_cp01_ParamLimits

0xaa6b,	// (0x00063c61) control_top_pane_stacon_cp01

0xaa7b,	// (0x00063c71) uni_indicator_pane_stacon_cp01_ParamLimits

0xaa7b,	// (0x00063c71) uni_indicator_pane_stacon_cp01

0xaa8c,	// (0x00063c82) bg_popup_sub_pane_cp03

0x2e9f,	// (0x0005c095) chi_dic_find_pane

0x2ea7,	// (0x0005c09d) listscroll_chi_dic_pane

0x2eb0,	// (0x0005c0a6) main_pane_chidic_g1

0x2ec3,	// (0x0005c0b9) chi_dic_find_pane_t1

0xaa96,	// (0x00063c8c) find_chidic_pane

0xaa9f,	// (0x00063c95) chi_dic_list_pane_ParamLimits

0xaa9f,	// (0x00063c95) chi_dic_list_pane

0xaab0,	// (0x00063ca6) scroll_pane_cp020

0x2ed1,	// (0x0005c0c7) find_chidic_pane_t1

0x9c9c,	// (0x00062e92) input_focus_pane_cp06

0x2ee0,	// (0x0005c0d6) list_chi_dic_pane_ParamLimits

0x2ee0,	// (0x0005c0d6) list_chi_dic_pane

0x2ef1,	// (0x0005c0e7) list_chi_dic_pane_t1_ParamLimits

0x2ef1,	// (0x0005c0e7) list_chi_dic_pane_t1

0x9c9c,	// (0x00062e92) list_highlight_pane_cp020

0xaab8,	// (0x00063cae) bg_cale_heading_pane_g1

0x2f04,	// (0x0005c0fa) bg_cale_heading_pane_g2

0x2f0c,	// (0x0005c102) bg_cale_heading_pane_g3

0x2f14,	// (0x0005c10a) bg_cale_heading_pane_g4

0x2f1c,	// (0x0005c112) bg_cale_heading_pane_g5

0x2f24,	// (0x0005c11a) bg_cale_heading_pane_g6

0x2f2c,	// (0x0005c122) bg_cale_heading_pane_g7

0x2f34,	// (0x0005c12a) bg_cale_heading_pane_g8

0x2f3c,	// (0x0005c132) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0006859a) bg_cale_heading_pane_g

0xaab8,	// (0x00063cae) bg_cale_side_pane_g1

0x2f44,	// (0x0005c13a) bg_cale_side_pane_g2

0x2f4c,	// (0x0005c142) bg_cale_side_pane_g3

0x2f54,	// (0x0005c14a) bg_cale_side_pane_g4

0x2f5c,	// (0x0005c152) bg_cale_side_pane_g5

0x2f64,	// (0x0005c15a) bg_cale_side_pane_g6

0x2f6c,	// (0x0005c162) bg_cale_side_pane_g7

0x2f74,	// (0x0005c16a) bg_cale_side_pane_g8

0x2f7c,	// (0x0005c172) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000685ad) bg_cale_side_pane_g

0x2f84,	// (0x0005c17a) popup_call_status_window_ParamLimits

0x2f84,	// (0x0005c17a) popup_call_status_window

0xaac0,	// (0x00063cb6) stacon_top_pane

0xaac8,	// (0x00063cbe) status_pane_ParamLimits

0xaac8,	// (0x00063cbe) status_pane

0xaadd,	// (0x00063cd3) status_small_pane

0xaae5,	// (0x00063cdb) control_pane

0x9c9c,	// (0x00062e92) stacon_bottom_pane

0xaaed,	// (0x00063ce3) list_single_mce_smart_pane_t1_ParamLimits

0xaaed,	// (0x00063ce3) list_single_mce_smart_pane_t1

0xab00,	// (0x00063cf6) list_single_mce_smart_pane_t2_ParamLimits

0xab00,	// (0x00063cf6) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000685c0) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000685c0) list_single_mce_smart_pane_t

0x2fcb,	// (0x0005c1c1) compass_pane

0x2fd4,	// (0x0005c1ca) main_location2_pane_t1

0x2fe6,	// (0x0005c1dc) main_location2_pane_t2

0x2ff8,	// (0x0005c1ee) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000685c5) main_location2_pane_t

0xab1f,	// (0x00063d15) compass_pane_g1_ParamLimits

0xab1f,	// (0x00063d15) compass_pane_g1

0x303c,	// (0x0005c232) compass_pane_t1

0x304b,	// (0x0005c241) compass_pane_t2

0x0005,

0xf3d8,	// (0x000685ce) compass_pane_t

0x3092,	// (0x0005c288) text_secondary_cp61

0xab9b,	// (0x00063d91) navi_pane_cams_g5

0xac15,	// (0x00063e0b) navi_pane_im_t1

0xac23,	// (0x00063e19) navi_pane_mp_g1_ParamLimits

0xac23,	// (0x00063e19) navi_pane_mp_g1

0xac37,	// (0x00063e2d) navi_pane_mp_g2_ParamLimits

0xac37,	// (0x00063e2d) navi_pane_mp_g2

0xac43,	// (0x00063e39) navi_pane_mp_g3_ParamLimits

0xac43,	// (0x00063e39) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000685e2) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000685e2) navi_pane_mp_g

0xac4f,	// (0x00063e45) navi_pane_mp_t1

0xac5d,	// (0x00063e53) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000685e9) navi_pane_mp_t

0xacc8,	// (0x00063ebe) navi_pane_vt_g1

0xac4f,	// (0x00063e45) navi_pane_vt_t1

0xacd0,	// (0x00063ec6) navi_slider_pane

0xa211,	// (0x00063407) zooming_pane

0xace0,	// (0x00063ed6) navi_slider_pane_g1

0xace9,	// (0x00063edf) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000685f0) navi_slider_pane_g

0xad16,	// (0x00063f0c) aid_levels_zoom

0xad1e,	// (0x00063f14) zooming_pane_g1

0xad26,	// (0x00063f1c) zooming_pane_g2

0xad26,	// (0x00063f1c) zooming_pane_g3

0x0002,

0xf409,	// (0x000685ff) zooming_pane_g

0xad2e,	// (0x00063f24) level_10_zoom

0xad37,	// (0x00063f2d) level_11_zoom

0xad40,	// (0x00063f36) level_1_zoom

0xad49,	// (0x00063f3f) level_2_zoom

0xad52,	// (0x00063f48) level_3_zoom

0xad5b,	// (0x00063f51) level_4_zoom

0xad64,	// (0x00063f5a) level_5_zoom

0xad6d,	// (0x00063f63) level_6_zoom

0xad76,	// (0x00063f6c) level_7_zoom

0xad7f,	// (0x00063f75) level_8_zoom

0xad88,	// (0x00063f7e) level_9_zoom

0xad99,	// (0x00063f8f) popup_phob_thumbnail_window_g1

0xada1,	// (0x00063f97) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00068606) popup_phob_thumbnail_window_g

0xe3e4,	// (0x000675da) level_1_location

0xe3ec,	// (0x000675e2) level_2_location

0xe3f4,	// (0x000675ea) level_3_location

0xe3fc,	// (0x000675f2) level_4_location

0xa211,	// (0x00063407) level_5_location

0x30e3,	// (0x0005c2d9) mce_icon_pane_g1

0x30eb,	// (0x0005c2e1) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0006860b) mce_icon_pane_g

0x30f3,	// (0x0005c2e9) main_mup_pane_g1_ParamLimits

0x30f3,	// (0x0005c2e9) main_mup_pane_g1

0x3109,	// (0x0005c2ff) main_mup_pane_g2_ParamLimits

0x3109,	// (0x0005c2ff) main_mup_pane_g2

0x3121,	// (0x0005c317) main_mup_pane_g3_ParamLimits

0x3121,	// (0x0005c317) main_mup_pane_g3

0x3139,	// (0x0005c32f) main_mup_pane_g4_ParamLimits

0x3139,	// (0x0005c32f) main_mup_pane_g4

0x3151,	// (0x0005c347) main_mup_pane_g5_ParamLimits

0x3151,	// (0x0005c347) main_mup_pane_g5

0x316b,	// (0x0005c361) main_mup_pane_g6_ParamLimits

0x316b,	// (0x0005c361) main_mup_pane_g6

0x3183,	// (0x0005c379) main_mup_pane_g7_ParamLimits

0x3183,	// (0x0005c379) main_mup_pane_g7

0x319b,	// (0x0005c391) main_mup_pane_g8_ParamLimits

0x319b,	// (0x0005c391) main_mup_pane_g8

0x31b3,	// (0x0005c3a9) main_mup_pane_g9_ParamLimits

0x31b3,	// (0x0005c3a9) main_mup_pane_g9

0x31c7,	// (0x0005c3bd) main_mup_pane_g10_ParamLimits

0x31c7,	// (0x0005c3bd) main_mup_pane_g10

0x31db,	// (0x0005c3d1) main_mup_pane_g11_ParamLimits

0x31db,	// (0x0005c3d1) main_mup_pane_g11

0x31ed,	// (0x0005c3e3) main_mup_pane_g12_ParamLimits

0x31ed,	// (0x0005c3e3) main_mup_pane_g12

0x3201,	// (0x0005c3f7) main_mup_pane_g13_ParamLimits

0x3201,	// (0x0005c3f7) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00068610) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00068610) main_mup_pane_g

0x3213,	// (0x0005c409) main_mup_pane_t1_ParamLimits

0x3213,	// (0x0005c409) main_mup_pane_t1

0x322d,	// (0x0005c423) main_mup_pane_t2_ParamLimits

0x322d,	// (0x0005c423) main_mup_pane_t2

0x3245,	// (0x0005c43b) main_mup_pane_t3_ParamLimits

0x3245,	// (0x0005c43b) main_mup_pane_t3

0x325d,	// (0x0005c453) main_mup_pane_t4_ParamLimits

0x325d,	// (0x0005c453) main_mup_pane_t4

0x327b,	// (0x0005c471) main_mup_pane_t5_ParamLimits

0x327b,	// (0x0005c471) main_mup_pane_t5

0x3290,	// (0x0005c486) main_mup_pane_t6_ParamLimits

0x3290,	// (0x0005c486) main_mup_pane_t6

0x0005,

0xf435,	// (0x0006862b) main_mup_pane_t_ParamLimits

0xf435,	// (0x0006862b) main_mup_pane_t

0x32a2,	// (0x0005c498) mup_progress_pane_ParamLimits

0x32a2,	// (0x0005c498) mup_progress_pane

0x32ae,	// (0x0005c4a4) mup_visualizer_pane_ParamLimits

0x32ae,	// (0x0005c4a4) mup_visualizer_pane

0x32d6,	// (0x0005c4cc) mup_volume_pane_ParamLimits

0x32d6,	// (0x0005c4cc) mup_volume_pane

0xada9,	// (0x00063f9f) mup_visualizer_pane_g1_ParamLimits

0xada9,	// (0x00063f9f) mup_visualizer_pane_g1

0xada9,	// (0x00063f9f) mup_visualizer_pane_g2_ParamLimits

0xada9,	// (0x00063f9f) mup_visualizer_pane_g2

0xab1f,	// (0x00063d15) mup_visualizer_pane_g3_ParamLimits

0xab1f,	// (0x00063d15) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00068638) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00068638) mup_visualizer_pane_g

0xa063,	// (0x00063259) mup_volume_pane_g1

0xadbf,	// (0x00063fb5) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0006863f) mup_volume_pane_g

0xa063,	// (0x00063259) mup_progress_pane_g1

0xadc8,	// (0x00063fbe) mup_progress_pane_g2

0xadd1,	// (0x00063fc7) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00068644) mup_progress_pane_g

0x9c9c,	// (0x00062e92) bg_popup_window_pane_cp05

0x32f4,	// (0x0005c4ea) heading_pane_cp02_ParamLimits

0x32f4,	// (0x0005c4ea) heading_pane_cp02

0xadda,	// (0x00063fd0) list_popup_blid_pane

0xade2,	// (0x00063fd8) list_blid_sat_info_pane_ParamLimits

0xade2,	// (0x00063fd8) list_blid_sat_info_pane

0xadf4,	// (0x00063fea) list_blid_sat_info_pane_g1

0xadfc,	// (0x00063ff2) list_blid_sat_info_pane_t1

0x33e0,	// (0x0005c5d6) mup_equalizer_pane_ParamLimits

0x33e0,	// (0x0005c5d6) mup_equalizer_pane

0x33f9,	// (0x0005c5ef) mup_equalizer_pane_cp1_ParamLimits

0x33f9,	// (0x0005c5ef) mup_equalizer_pane_cp1

0x3412,	// (0x0005c608) mup_equalizer_pane_cp2_ParamLimits

0x3412,	// (0x0005c608) mup_equalizer_pane_cp2

0x342b,	// (0x0005c621) mup_equalizer_pane_cp3_ParamLimits

0x342b,	// (0x0005c621) mup_equalizer_pane_cp3

0x3444,	// (0x0005c63a) mup_equalizer_pane_cp4_ParamLimits

0x3444,	// (0x0005c63a) mup_equalizer_pane_cp4

0x345d,	// (0x0005c653) mup_equalizer_pane_cp5

0x346f,	// (0x0005c665) mup_equalizer_pane_cp6

0x3481,	// (0x0005c677) mup_equalizer_pane_cp7

0xe2c2,	// (0x000674b8) bg_popup_call_poc_act_pane_g9

0xe2ca,	// (0x000674c0) bg_popup_call_poc_act_pane_g10

0xe2d2,	// (0x000674c8) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ef7,	// (0x000630ed) mup_scale_pane

0xa063,	// (0x00063259) mup_scale_pane_g1

0xae0a,	// (0x00064000) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00068660) mup_scale_pane_g

0xae2e,	// (0x00064024) msg_data_pane

0xae36,	// (0x0006402c) scroll_pane_cp017

0x34a7,	// (0x0005c69d) bg_list_pane_cp04_ParamLimits

0x34a7,	// (0x0005c69d) bg_list_pane_cp04

0xae3e,	// (0x00064034) msg_data_pane_g1

0x34c7,	// (0x0005c6bd) msg_data_pane_g2

0x34cf,	// (0x0005c6c5) msg_data_pane_g3

0x34d7,	// (0x0005c6cd) msg_data_pane_g4

0x34df,	// (0x0005c6d5) msg_data_pane_g5

0x34e7,	// (0x0005c6dd) msg_data_pane_g6

0x34ef,	// (0x0005c6e5) msg_data_pane_g7

0x0006,

0xf479,	// (0x0006866f) msg_data_pane_g

0x34f7,	// (0x0005c6ed) msg_text_pane_ParamLimits

0x34f7,	// (0x0005c6ed) msg_text_pane

0x351f,	// (0x0005c715) qrid_highlight_pane_cp011_ParamLimits

0x351f,	// (0x0005c715) qrid_highlight_pane_cp011

0x9c9c,	// (0x00062e92) msg_body_pane

0x9c9c,	// (0x00062e92) msg_header_pane

0xae4f,	// (0x00064045) input_focus_pane_cp07

0x3541,	// (0x0005c737) msg_header_pane_t1_ParamLimits

0x3541,	// (0x0005c737) msg_header_pane_t1

0x3553,	// (0x0005c749) msg_header_pane_t2_ParamLimits

0x3553,	// (0x0005c749) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00068683) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00068683) msg_header_pane_t

0xae64,	// (0x0006405a) msg_body_pane_g1

0x3565,	// (0x0005c75b) msg_body_pane_t1_ParamLimits

0x3565,	// (0x0005c75b) msg_body_pane_t1

0x3596,	// (0x0005c78c) msg_body_pane_t2_ParamLimits

0x3596,	// (0x0005c78c) msg_body_pane_t2

0x35a8,	// (0x0005c79e) msg_body_pane_t3_ParamLimits

0x35a8,	// (0x0005c79e) msg_body_pane_t3

0x0002,

0xf492,	// (0x00068688) msg_body_pane_t_ParamLimits

0xf492,	// (0x00068688) msg_body_pane_t

0x35f0,	// (0x0005c7e6) main_viewer_pane_g1_ParamLimits

0x35f0,	// (0x0005c7e6) main_viewer_pane_g1

0x35fc,	// (0x0005c7f2) main_viewer_pane_g2_ParamLimits

0x35fc,	// (0x0005c7f2) main_viewer_pane_g2

0x3608,	// (0x0005c7fe) main_viewer_pane_g3_ParamLimits

0x3608,	// (0x0005c7fe) main_viewer_pane_g3

0x3617,	// (0x0005c80d) main_viewer_pane_g4_ParamLimits

0x3617,	// (0x0005c80d) main_viewer_pane_g4

0xae84,	// (0x0006407a) main_viewer_pane_g5_ParamLimits

0xae84,	// (0x0006407a) main_viewer_pane_g5

0xae84,	// (0x0006407a) main_viewer_pane_g7_ParamLimits

0xae84,	// (0x0006407a) main_viewer_pane_g7

0xae96,	// (0x0006408c) main_viewer_pane_g8_ParamLimits

0xae96,	// (0x0006408c) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00068698) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00068698) main_viewer_pane_g

0xaeae,	// (0x000640a4) viewer_content_pane_ParamLimits

0xaeae,	// (0x000640a4) viewer_content_pane

0x364b,	// (0x0005c841) main_postcard_pane_g1_ParamLimits

0x364b,	// (0x0005c841) main_postcard_pane_g1

0x365f,	// (0x0005c855) main_postcard_pane_g2_ParamLimits

0x365f,	// (0x0005c855) main_postcard_pane_g2

0x3673,	// (0x0005c869) main_postcard_pane_g3_ParamLimits

0x3673,	// (0x0005c869) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000686a9) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000686a9) main_postcard_pane_g

0x3686,	// (0x0005c87c) main_postcard_pane_g4

0xe4e4,	// (0x000676da) smil_status_volume_pane_g2

0x36c1,	// (0x0005c8b7) postcard_pane_ParamLimits

0x36c1,	// (0x0005c8b7) postcard_pane

0xaebc,	// (0x000640b2) postcard_pane_g1_ParamLimits

0xaebc,	// (0x000640b2) postcard_pane_g1

0x36fd,	// (0x0005c8f3) postcard_pane_g2_ParamLimits

0x36fd,	// (0x0005c8f3) postcard_pane_g2

0x3709,	// (0x0005c8ff) postcard_pane_g3_ParamLimits

0x3709,	// (0x0005c8ff) postcard_pane_g3

0xaeca,	// (0x000640c0) postcard_pane_g4_ParamLimits

0xaeca,	// (0x000640c0) postcard_pane_g4

0x3715,	// (0x0005c90b) postcard_pane_g5_ParamLimits

0x3715,	// (0x0005c90b) postcard_pane_g5

0x3729,	// (0x0005c91f) postcard_pane_g6_ParamLimits

0x3729,	// (0x0005c91f) postcard_pane_g6

0xaebc,	// (0x000640b2) postcard_pane_g7_ParamLimits

0xaebc,	// (0x000640b2) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000686b6) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000686b6) postcard_pane_g

0x373b,	// (0x0005c931) main_mp2_pane_g1_ParamLimits

0x373b,	// (0x0005c931) main_mp2_pane_g1

0x3747,	// (0x0005c93d) main_mp2_pane_g2_ParamLimits

0x3747,	// (0x0005c93d) main_mp2_pane_g2

0x3753,	// (0x0005c949) main_mp2_pane_g3_ParamLimits

0x3753,	// (0x0005c949) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000686c5) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000686c5) main_mp2_pane_g

0x375f,	// (0x0005c955) main_mp2_pane_t1_ParamLimits

0x375f,	// (0x0005c955) main_mp2_pane_t1

0x3774,	// (0x0005c96a) main_mp2_pane_t2_ParamLimits

0x3774,	// (0x0005c96a) main_mp2_pane_t2

0x3786,	// (0x0005c97c) main_mp2_pane_t3_ParamLimits

0x3786,	// (0x0005c97c) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000686cc) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000686cc) main_mp2_pane_t

0xaed8,	// (0x000640ce) pec_content_pane_ParamLimits

0xaed8,	// (0x000640ce) pec_content_pane

0xa3d1,	// (0x000635c7) scroll_pane_cp015

0xaeea,	// (0x000640e0) pec_attribute_pane_ParamLimits

0xaeea,	// (0x000640e0) pec_attribute_pane

0x3798,	// (0x0005c98e) pec_content_pane_g1_ParamLimits

0x3798,	// (0x0005c98e) pec_content_pane_g1

0xaefa,	// (0x000640f0) pec_content_pane_t1_ParamLimits

0xaefa,	// (0x000640f0) pec_content_pane_t1

0xaf0c,	// (0x00064102) pec_content_pane_t2_ParamLimits

0xaf0c,	// (0x00064102) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000686d3) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000686d3) pec_content_pane_t

0x37a4,	// (0x0005c99a) list_single_graphic_pane_cp01_ParamLimits

0x37a4,	// (0x0005c99a) list_single_graphic_pane_cp01

0x9ef7,	// (0x000630ed) bg_popup_sub_pane_cp04

0xaf1e,	// (0x00064114) popup_mup_playback_window_g1

0xaf2a,	// (0x00064120) popup_mup_playback_window_t1

0xaf3f,	// (0x00064135) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000686d8) popup_mup_playback_window_t

0xaf76,	// (0x0006416c) main_image_pane_g1_ParamLimits

0xaf76,	// (0x0006416c) main_image_pane_g1

0xafb9,	// (0x000641af) scroll_pane_cp018_ParamLimits

0xafb9,	// (0x000641af) scroll_pane_cp018

0xafd1,	// (0x000641c7) scroll_pane_cp016_ParamLimits

0xafd1,	// (0x000641c7) scroll_pane_cp016

0x386e,	// (0x0005ca64) smil2_image_pane_ParamLimits

0x386e,	// (0x0005ca64) smil2_image_pane

0x3896,	// (0x0005ca8c) smil2_root_pane_ParamLimits

0x3896,	// (0x0005ca8c) smil2_root_pane

0x38ce,	// (0x0005cac4) smil2_text_pane_ParamLimits

0x38ce,	// (0x0005cac4) smil2_text_pane

0x9c9c,	// (0x00062e92) bg_list_pane_cp06

0x393c,	// (0x0005cb32) grid_radio_pane

0x9c9c,	// (0x00062e92) bg_popup_window_pane_cp06

0xb005,	// (0x000641fb) main_fmradio_pane_t1

0xa9a7,	// (0x00063b9d) heading_pane_cp04

0xb013,	// (0x00064209) main_fmradio_pane_t2

0xe31a,	// (0x00067510) popup_cale_lunar_info_window_g1

0xb021,	// (0x00064217) main_fmradio_pane_t3

0xe322,	// (0x00067518) popup_cale_lunar_info_window_g2

0xb02f,	// (0x00064225) main_fmradio_pane_t4

0x0001,

0xb03d,	// (0x00064233) main_fmradio_pane_t5

0x0004,

0x0340,	// (0x00059536) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000686ed) main_fmradio_pane_t

0xb04b,	// (0x00064241) wait_bar_pane_cp03

0x3944,	// (0x0005cb3a) cell_fmradio_pane_ParamLimits

0x3944,	// (0x0005cb3a) cell_fmradio_pane

0xaebc,	// (0x000640b2) cell_fmradio_pane_g1_ParamLimits

0xaebc,	// (0x000640b2) cell_fmradio_pane_g1

0x9c9c,	// (0x00062e92) grid_highlight_pane_cp011

0xb053,	// (0x00064249) poc_content_pane_ParamLimits

0xb053,	// (0x00064249) poc_content_pane

0xb065,	// (0x0006425b) scroll_pane_cp019

0x3957,	// (0x0005cb4d) popup_call_poc_act_window_ParamLimits

0x3957,	// (0x0005cb4d) popup_call_poc_act_window

0x3977,	// (0x0005cb6d) popup_call_poc_inact_window_ParamLimits

0x3977,	// (0x0005cb6d) popup_call_poc_inact_window

0x0304,	// (0x000594fa) bg_popup_call_poc_act_pane_g

0xe2da,	// (0x000674d0) bg_popup_call_poc_inact_pane_g1

0xe2e2,	// (0x000674d8) bg_popup_call_poc_inact_pane_g2

0xb06d,	// (0x00064263) popup_call_poc_act_window_g2

0xe2ea,	// (0x000674e0) bg_popup_call_poc_inact_pane_g3

0xe26a,	// (0x00067460) bg_popup_call_poc_inact_pane_g4

0xe2f2,	// (0x000674e8) bg_popup_call_poc_inact_pane_g5

0xb075,	// (0x0006426b) popup_call_poc_act_window_t1_ParamLimits

0xb075,	// (0x0006426b) popup_call_poc_act_window_t1

0xb09d,	// (0x00064293) popup_call_poc_act_window_t2_ParamLimits

0xb09d,	// (0x00064293) popup_call_poc_act_window_t2

0xb0c5,	// (0x000642bb) popup_call_poc_act_window_t3_ParamLimits

0xb0c5,	// (0x000642bb) popup_call_poc_act_window_t3

0xb0ed,	// (0x000642e3) popup_call_poc_act_window_t4_ParamLimits

0xb0ed,	// (0x000642e3) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000686f8) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000686f8) popup_call_poc_act_window_t

0xe2fa,	// (0x000674f0) bg_popup_call_poc_inact_pane_g6

0xe302,	// (0x000674f8) bg_popup_call_poc_inact_pane_g7

0xe30a,	// (0x00067500) bg_popup_call_poc_inact_pane_g8

0xb0ff,	// (0x000642f5) popup_call_poc_inact_window_g2

0xe312,	// (0x00067508) bg_popup_call_poc_inact_pane_g9

0x0008,

0x031b,	// (0x00059511) bg_popup_call_poc_inact_pane_g

0xb107,	// (0x000642fd) popup_call_poc_inact_window_t1_ParamLimits

0xb107,	// (0x000642fd) popup_call_poc_inact_window_t1

0xb11c,	// (0x00064312) popup_call_poc_inact_window_t2_ParamLimits

0xb11c,	// (0x00064312) popup_call_poc_inact_window_t2

0xb131,	// (0x00064327) popup_call_poc_inact_window_t3_ParamLimits

0xb131,	// (0x00064327) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00068701) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00068701) popup_call_poc_inact_window_t

0xe457,	// (0x0006764d) context_pane_ParamLimits

0x40a2,	// (0x0005d298) signal_pane_ParamLimits

0xa211,	// (0x00063407) main_call2_pane

0xb6d1,	// (0x000648c7) popup_phob_thumbnail2_window_ParamLimits

0xb6d1,	// (0x000648c7) popup_phob_thumbnail2_window

0xae6c,	// (0x00064062) aid_hotspot_pointer_arrow_pane

0xae74,	// (0x0006406a) aid_hotspot_pointer_hand_pane

0x3c4b,	// (0x0005ce41) phob_pre_status_pane_g5

0x1ab5,	// (0x0005acab) cams_zoom_pane_ParamLimits

0x1ac4,	// (0x0005acba) image_vga_pane_ParamLimits

0x1ada,	// (0x0005acd0) main_camera_pane_g1_ParamLimits

0x1aea,	// (0x0005ace0) main_camera_pane_g2_ParamLimits

0x1afa,	// (0x0005acf0) main_camera_pane_g3_ParamLimits

0x1b0a,	// (0x0005ad00) main_camera_pane_g4_ParamLimits

0x1b1a,	// (0x0005ad10) main_camera_pane_g5_ParamLimits

0x1b2a,	// (0x0005ad20) main_camera_pane_g6_ParamLimits

0x1b3a,	// (0x0005ad30) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00068400) main_camera_pane_g_ParamLimits

0x1b4a,	// (0x0005ad40) main_camera_pane_t1_ParamLimits

0x1b60,	// (0x0005ad56) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00068411) main_camera_pane_t_ParamLimits

0x9ef7,	// (0x000630ed) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ef7,	// (0x000630ed) bg_popup_preview_window_pane_cp01

0xb146,	// (0x0006433c) popup_phob_thumbnail2_window_g1_ParamLimits

0xb146,	// (0x0006433c) popup_phob_thumbnail2_window_g1

0x9c9c,	// (0x00062e92) call2_cli_visual_pane

0x39a3,	// (0x0005cb99) popup_call2_audio_conf_window_ParamLimits

0x39a3,	// (0x0005cb99) popup_call2_audio_conf_window

0x39c1,	// (0x0005cbb7) popup_call2_audio_first_window_ParamLimits

0x39c1,	// (0x0005cbb7) popup_call2_audio_first_window

0x3a37,	// (0x0005cc2d) popup_call2_audio_in_window_ParamLimits

0x3a37,	// (0x0005cc2d) popup_call2_audio_in_window

0x3a6b,	// (0x0005cc61) popup_call2_audio_out_window_ParamLimits

0x3a6b,	// (0x0005cc61) popup_call2_audio_out_window

0x3abd,	// (0x0005ccb3) popup_call2_audio_second_window_ParamLimits

0x3abd,	// (0x0005ccb3) popup_call2_audio_second_window

0x3b0f,	// (0x0005cd05) popup_call2_audio_wait_window_ParamLimits

0x3b0f,	// (0x0005cd05) popup_call2_audio_wait_window

0x9c9c,	// (0x00062e92) bg_popup_call2_act_pane_cp03

0x9ed9,	// (0x000630cf) list_conf_pane_cp

0xb152,	// (0x00064348) popup_call2_audio_conf_window_t1

0xaa04,	// (0x00063bfa) list_single_graphic_popup_conf2_pane_ParamLimits

0xaa04,	// (0x00063bfa) list_single_graphic_popup_conf2_pane

0xaa17,	// (0x00063c0d) list_highlight_pane_cp04

0xb160,	// (0x00064356) list_single_graphic_popup_conf2_pane_g1

0xaa28,	// (0x00063c1e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00068708) list_single_graphic_popup_conf2_pane_g

0xb168,	// (0x0006435e) list_single_graphic_popup_conf2_pane_t1

0xb176,	// (0x0006436c) bg_popup_call2_act_pane_cp01_ParamLimits

0xb176,	// (0x0006436c) bg_popup_call2_act_pane_cp01

0xb200,	// (0x000643f6) call_type_pane_cp05_ParamLimits

0xb200,	// (0x000643f6) call_type_pane_cp05

0xb254,	// (0x0006444a) popup_call2_audio_second_window_g1_ParamLimits

0xb254,	// (0x0006444a) popup_call2_audio_second_window_g1

0xb2a8,	// (0x0006449e) popup_call2_audio_second_window_g2_ParamLimits

0xb2a8,	// (0x0006449e) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0006870d) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0006870d) popup_call2_audio_second_window_g

0xb30d,	// (0x00064503) popup_call2_audio_second_window_t1_ParamLimits

0xb30d,	// (0x00064503) popup_call2_audio_second_window_t1

0xb3c8,	// (0x000645be) popup_call2_audio_second_window_t2_ParamLimits

0xb3c8,	// (0x000645be) popup_call2_audio_second_window_t2

0xb41b,	// (0x00064611) popup_call2_audio_second_window_t3_ParamLimits

0xb41b,	// (0x00064611) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00068714) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00068714) popup_call2_audio_second_window_t

0x9c9c,	// (0x00062e92) bg_popup_call2_in_pane_cp02

0x9ca6,	// (0x00062e9c) call_type_pane_cp04

0x9cae,	// (0x00062ea4) popup_call2_audio_wait_window_g1

0x9cb6,	// (0x00062eac) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000682ef) popup_call2_audio_wait_window_g

0x9cbe,	// (0x00062eb4) popup_call2_audio_wait_window_t3

0xb50e,	// (0x00064704) bg_popup_call2_act_pane_ParamLimits

0xb50e,	// (0x00064704) bg_popup_call2_act_pane

0xb5ce,	// (0x000647c4) call_type_pane_cp03_ParamLimits

0xb5ce,	// (0x000647c4) call_type_pane_cp03

0xb632,	// (0x00064828) popup_call2_audio_first_window_g1_ParamLimits

0xb632,	// (0x00064828) popup_call2_audio_first_window_g1

0xd9b9,	// (0x00066baf) popup_call2_audio_first_window_g2_ParamLimits

0xd9b9,	// (0x00066baf) popup_call2_audio_first_window_g2

0xada9,	// (0x00063f9f) popup_call2_audio_first_window_g3_ParamLimits

0xada9,	// (0x00063f9f) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0006871d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0006871d) popup_call2_audio_first_window_g

0xda97,	// (0x00066c8d) popup_call2_audio_first_window_t1_ParamLimits

0xda97,	// (0x00066c8d) popup_call2_audio_first_window_t1

0xdb9a,	// (0x00066d90) popup_call2_audio_first_window_t4_ParamLimits

0xdb9a,	// (0x00066d90) popup_call2_audio_first_window_t4

0xdc7d,	// (0x00066e73) popup_call2_audio_first_window_t5_ParamLimits

0xdc7d,	// (0x00066e73) popup_call2_audio_first_window_t5

0x0003,

0x02a2,	// (0x00059498) popup_call2_audio_first_window_t_ParamLimits

0x02a2,	// (0x00059498) popup_call2_audio_first_window_t

0x9eef,	// (0x000630e5) bg_popup_call2_act_pane_g1

0xe32a,	// (0x00067520) popup_cale_lunar_info_window_t1

0xe338,	// (0x0006752e) popup_cale_lunar_info_window_t2

0xe346,	// (0x0006753c) popup_cale_lunar_info_window_t3

0x9c9c,	// (0x00062e92) bg_popup_call2_bubble_pane

0xdd7e,	// (0x00066f74) bg_popup_call2_in_pane_cp01_ParamLimits

0xdd7e,	// (0x00066f74) bg_popup_call2_in_pane_cp01

0x9978,	// (0x00062b6e) call_type_pane_cp02

0xddc6,	// (0x00066fbc) popup_call2_audio_out_window_g1_ParamLimits

0xddc6,	// (0x00066fbc) popup_call2_audio_out_window_g1

0xddf2,	// (0x00066fe8) popup_call2_audio_out_window_g2_ParamLimits

0xddf2,	// (0x00066fe8) popup_call2_audio_out_window_g2

0xde1a,	// (0x00067010) popup_call2_audio_out_window_g3_ParamLimits

0xde1a,	// (0x00067010) popup_call2_audio_out_window_g3

0x0003,

0x02ab,	// (0x000594a1) popup_call2_audio_out_window_g_ParamLimits

0x02ab,	// (0x000594a1) popup_call2_audio_out_window_g

0xde55,	// (0x0006704b) popup_call2_audio_out_window_t1_ParamLimits

0xde55,	// (0x0006704b) popup_call2_audio_out_window_t1

0xdeb4,	// (0x000670aa) popup_call2_audio_out_window_t2_ParamLimits

0xdeb4,	// (0x000670aa) popup_call2_audio_out_window_t2

0xdf08,	// (0x000670fe) popup_call2_audio_out_window_t3_ParamLimits

0xdf08,	// (0x000670fe) popup_call2_audio_out_window_t3

0xdf1e,	// (0x00067114) popup_call2_audio_out_window_t4_ParamLimits

0xdf1e,	// (0x00067114) popup_call2_audio_out_window_t4

0xdf34,	// (0x0006712a) popup_call2_audio_out_window_t5_ParamLimits

0xdf34,	// (0x0006712a) popup_call2_audio_out_window_t5

0x0005,

0x02b4,	// (0x000594aa) popup_call2_audio_out_window_t_ParamLimits

0x02b4,	// (0x000594aa) popup_call2_audio_out_window_t

0xdf98,	// (0x0006718e) bg_popup_call2_in_pane_ParamLimits

0xdf98,	// (0x0006718e) bg_popup_call2_in_pane

0xdff4,	// (0x000671ea) popup_call2_audio_in_window_g1_ParamLimits

0xdff4,	// (0x000671ea) popup_call2_audio_in_window_g1

0xe02c,	// (0x00067222) popup_call2_audio_in_window_g2_ParamLimits

0xe02c,	// (0x00067222) popup_call2_audio_in_window_g2

0xe064,	// (0x0006725a) popup_call2_audio_in_window_g3_ParamLimits

0xe064,	// (0x0006725a) popup_call2_audio_in_window_g3

0x0003,

0x02c1,	// (0x000594b7) popup_call2_audio_in_window_g_ParamLimits

0x02c1,	// (0x000594b7) popup_call2_audio_in_window_g

0xe0bc,	// (0x000672b2) popup_call2_audio_in_window_t1_ParamLimits

0xe0bc,	// (0x000672b2) popup_call2_audio_in_window_t1

0xe13c,	// (0x00067332) popup_call2_audio_in_window_t2_ParamLimits

0xe13c,	// (0x00067332) popup_call2_audio_in_window_t2

0xe1bc,	// (0x000673b2) popup_call2_audio_in_window_t3_ParamLimits

0xe1bc,	// (0x000673b2) popup_call2_audio_in_window_t3

0xe1d6,	// (0x000673cc) popup_call2_audio_in_window_t4_ParamLimits

0xe1d6,	// (0x000673cc) popup_call2_audio_in_window_t4

0xe1e8,	// (0x000673de) popup_call2_audio_in_window_t5_ParamLimits

0xe1e8,	// (0x000673de) popup_call2_audio_in_window_t5

0xe1fd,	// (0x000673f3) popup_call2_audio_in_window_t6_ParamLimits

0xe1fd,	// (0x000673f3) popup_call2_audio_in_window_t6

0x0005,

0x02ca,	// (0x000594c0) popup_call2_audio_in_window_t_ParamLimits

0x02ca,	// (0x000594c0) popup_call2_audio_in_window_t

0x9eef,	// (0x000630e5) bg_popup_call2_in_pane_g1

0xe354,	// (0x0006754a) popup_cale_lunar_info_window_t4

0x0003,

0x0345,	// (0x0005953b) popup_cale_lunar_info_window_t

0x9ef7,	// (0x000630ed) bg_popup_call2_rect_pane_ParamLimits

0x9ef7,	// (0x000630ed) bg_popup_call2_rect_pane

0x9c9c,	// (0x00062e92) call2_cli_visual_graphic_pane

0x9c9c,	// (0x00062e92) call2_cli_visual_text_pane

0xb6f8,	// (0x000648ee) smil_status_volume_pane_g3

0x0002,

0xa063,	// (0x00063259) call2_cli_visual_graphic_pane_g1

0xa063,	// (0x00063259) call2_cli_visual_graphic_pane_g2

0xa063,	// (0x00063259) call2_cli_visual_graphic_pane_g3

0x0002,

0xf532,	// (0x00068728) call2_cli_visual_graphic_pane_g

0xe212,	// (0x00067408) bg_popup_call2_rect_pane_g1

0xa10b,	// (0x00063301) bg_popup_call2_rect_pane_g2

0xe21a,	// (0x00067410) bg_popup_call2_rect_pane_g3

0xe222,	// (0x00067418) bg_popup_call2_rect_pane_g4

0xe22a,	// (0x00067420) bg_popup_call2_rect_pane_g5

0xe232,	// (0x00067428) bg_popup_call2_rect_pane_g6

0xe23a,	// (0x00067430) bg_popup_call2_rect_pane_g7

0xe242,	// (0x00067438) bg_popup_call2_rect_pane_g8

0xe24a,	// (0x00067440) bg_popup_call2_rect_pane_g9

0x0008,

0xf539,	// (0x0006872f) bg_popup_call2_rect_pane_g

0xe252,	// (0x00067448) bg_popup_call2_bubble_pane_g1

0xe25a,	// (0x00067450) bg_popup_call2_bubble_pane_g2

0xe262,	// (0x00067458) bg_popup_call2_bubble_pane_g3

0xe26a,	// (0x00067460) bg_popup_call2_bubble_pane_g4

0xe272,	// (0x00067468) bg_popup_call2_bubble_pane_g5

0xe27a,	// (0x00067470) bg_popup_call2_bubble_pane_g6

0xe282,	// (0x00067478) bg_popup_call2_bubble_pane_g7

0xe28a,	// (0x00067480) bg_popup_call2_bubble_pane_g8

0xe292,	// (0x00067488) bg_popup_call2_bubble_pane_g9

0x0008,

0x02f1,	// (0x000594e7) bg_popup_call2_bubble_pane_g

0x1469,	// (0x0005a65f) aid_cale_week_size_cell_pane

0x1b76,	// (0x0005ad6c) aid_cams_cif_uncrop_pane_ParamLimits

0x1b76,	// (0x0005ad6c) aid_cams_cif_uncrop_pane

0x1d15,	// (0x0005af0b) aid_cams_size_cell_ParamLimits

0x1d15,	// (0x0005af0b) aid_cams_size_cell

0x1d29,	// (0x0005af1f) grid_cams_pane_ParamLimits

0x1d3e,	// (0x0005af34) linegrid_cams_pane_ParamLimits

0x1f1a,	// (0x0005b110) call_video_pane_t1

0x1f34,	// (0x0005b12a) call_video_pane_t2

0x0001,

0xf26e,	// (0x00068464) call_video_pane_t

0x229b,	// (0x0005b491) aid_cale_month_size_cell_pane_ParamLimits

0x229b,	// (0x0005b491) aid_cale_month_size_cell_pane

0xf57c,	// (0x00068772) smil_status_volume_pane_g

0xb705,	// (0x000648fb) volume_smil_pane_ParamLimits

0x97df,	// (0x000629d5) aid_popup2_width_pane

0x13c9,	// (0x0005a5bf) cell_qdial_pane_g4_ParamLimits

0x13c9,	// (0x0005a5bf) cell_qdial_pane_g4

0x301c,	// (0x0005c212) aid_blid_cardinal_pane_ParamLimits

0x3028,	// (0x0005c21e) aid_blid_destination_pane_ParamLimits

0x3028,	// (0x0005c21e) aid_blid_destination_pane

0x9ef7,	// (0x000630ed) bg_popup_call_poc_act_pane_ParamLimits

0x9ef7,	// (0x000630ed) bg_popup_call_poc_act_pane

0x9ef7,	// (0x000630ed) bg_popup_call_poc_inact_pane_ParamLimits

0x9ef7,	// (0x000630ed) bg_popup_call_poc_inact_pane

0xe29a,	// (0x00067490) bg_popup_call_poc_act_pane_g1

0xe2a2,	// (0x00067498) bg_popup_call_poc_act_pane_g2

0xe2aa,	// (0x000674a0) bg_popup_call_poc_act_pane_g3

0xe26a,	// (0x00067460) bg_popup_call_poc_act_pane_g4

0xe272,	// (0x00067468) bg_popup_call_poc_act_pane_g5

0xe2b2,	// (0x000674a8) bg_popup_call_poc_act_pane_g6

0xe282,	// (0x00067478) bg_popup_call_poc_act_pane_g7

0xe2ba,	// (0x000674b0) bg_popup_call_poc_act_pane_g8

0x9c9c,	// (0x00062e92) main_usb_pane

0x3ea1,	// (0x0005d097) popup_cale_lunar_info_window

0x2179,	// (0x0005b36f) im_reading_pane_t1_ParamLimits

0xa31a,	// (0x00063510) list_im_pane_ParamLimits

0xa32b,	// (0x00063521) scroll_pane_cp07_ParamLimits

0x9c9c,	// (0x00062e92) grid_highlight_pane_cp012

0x9ef7,	// (0x000630ed) mup_scale_pane_ParamLimits

0xaebc,	// (0x000640b2) main_usb_pane_g1_ParamLimits

0xaebc,	// (0x000640b2) main_usb_pane_g1

0x3b68,	// (0x0005cd5e) main_usb_pane_g2_ParamLimits

0x3b68,	// (0x0005cd5e) main_usb_pane_g2

0x0001,

0xf54c,	// (0x00068742) main_usb_pane_g_ParamLimits

0xf54c,	// (0x00068742) main_usb_pane_g

0x3b7c,	// (0x0005cd72) main_usb_pane_t1_ParamLimits

0x3b7c,	// (0x0005cd72) main_usb_pane_t1

0x3b8e,	// (0x0005cd84) main_usb_pane_t2_ParamLimits

0x3b8e,	// (0x0005cd84) main_usb_pane_t2

0x3ba0,	// (0x0005cd96) main_usb_pane_t3_ParamLimits

0x3ba0,	// (0x0005cd96) main_usb_pane_t3

0x3bb2,	// (0x0005cda8) main_usb_pane_t4_ParamLimits

0x3bb2,	// (0x0005cda8) main_usb_pane_t4

0x3bc4,	// (0x0005cdba) main_usb_pane_t5_ParamLimits

0x3bc4,	// (0x0005cdba) main_usb_pane_t5

0x3bd6,	// (0x0005cdcc) main_usb_pane_t6_ParamLimits

0x3bd6,	// (0x0005cdcc) main_usb_pane_t6

0x0005,

0xf551,	// (0x00068747) main_usb_pane_t_ParamLimits

0x2fcb,	// (0x0005c1c1) aid_text_placing

0x2fd4,	// (0x0005c1ca) main_location2_pane_t1_ParamLimits

0x2fe6,	// (0x0005c1dc) main_location2_pane_t2_ParamLimits

0x2ff8,	// (0x0005c1ee) main_location2_pane_t3_ParamLimits

0x300a,	// (0x0005c200) main_location2_pane_t4_ParamLimits

0x300a,	// (0x0005c200) main_location2_pane_t4

0xf3cf,	// (0x000685c5) main_location2_pane_t_ParamLimits

0x9f33,	// (0x00063129) find_pinb_pane_g2_ParamLimits

0x9f33,	// (0x00063129) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00068315) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00068315) find_pinb_pane_g

0x9f3f,	// (0x00063135) find_pinb_pane_t1_ParamLimits

0x9f51,	// (0x00063147) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0006831a) find_pinb_pane_t_ParamLimits

0x9c9c,	// (0x00062e92) main_call3_pane

0x26de,	// (0x0005b8d4) cale_month_day_heading_pane_t1_ParamLimits

0x2764,	// (0x0005b95a) cale_month_day_heading_pane_t2_ParamLimits

0x27dd,	// (0x0005b9d3) cale_month_day_heading_pane_t3_ParamLimits

0x2856,	// (0x0005ba4c) cale_month_day_heading_pane_t4_ParamLimits

0x28cf,	// (0x0005bac5) cale_month_day_heading_pane_t5_ParamLimits

0x2948,	// (0x0005bb3e) cale_month_day_heading_pane_t6_ParamLimits

0x29c1,	// (0x0005bbb7) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006849c) cale_month_day_heading_pane_t_ParamLimits

0xa590,	// (0x00063786) smil_status_volume_pane

0x36dd,	// (0x0005c8d3) postcard_address_pane_ParamLimits

0x36dd,	// (0x0005c8d3) postcard_address_pane

0x36ed,	// (0x0005c8e3) postcard_message_pane_ParamLimits

0x36ed,	// (0x0005c8e3) postcard_message_pane

0x3b47,	// (0x0005cd3d) call2_cli_visual_pane_t1_ParamLimits

0x3b47,	// (0x0005cd3d) call2_cli_visual_pane_t1

0x42bc,	// (0x0005d4b2) postcard_message_pane_t1_ParamLimits

0x42bc,	// (0x0005d4b2) postcard_message_pane_t1

0x42a5,	// (0x0005d49b) postcard_address_pane_t1_ParamLimits

0x42a5,	// (0x0005d49b) postcard_address_pane_t1

0x4293,	// (0x0005d489) popup_call3_audio_in_window_ParamLimits

0x4293,	// (0x0005d489) popup_call3_audio_in_window

0x4122,	// (0x0005d318) bg_popup_call3_in_pane_ParamLimits

0x4122,	// (0x0005d318) bg_popup_call3_in_pane

0x4194,	// (0x0005d38a) popup_call3_audio_in_window_g1_ParamLimits

0x4194,	// (0x0005d38a) popup_call3_audio_in_window_g1

0x41b4,	// (0x0005d3aa) popup_call3_audio_in_window_g2_ParamLimits

0x41b4,	// (0x0005d3aa) popup_call3_audio_in_window_g2

0x41d4,	// (0x0005d3ca) popup_call3_audio_in_window_g3_ParamLimits

0x41d4,	// (0x0005d3ca) popup_call3_audio_in_window_g3

0x0003,

0xf583,	// (0x00068779) popup_call3_audio_in_window_g_ParamLimits

0xf583,	// (0x00068779) popup_call3_audio_in_window_g

0x4205,	// (0x0005d3fb) popup_call3_audio_in_window_t1_ParamLimits

0x4205,	// (0x0005d3fb) popup_call3_audio_in_window_t1

0x4243,	// (0x0005d439) popup_call3_audio_in_window_t2_ParamLimits

0x4243,	// (0x0005d439) popup_call3_audio_in_window_t2

0x4281,	// (0x0005d477) popup_call3_audio_in_window_t3_ParamLimits

0x4281,	// (0x0005d477) popup_call3_audio_in_window_t3

0x0002,

0xf58c,	// (0x00068782) popup_call3_audio_in_window_t_ParamLimits

0xf58c,	// (0x00068782) popup_call3_audio_in_window_t

0xa211,	// (0x00063407) bg_popup_call3_rect_pane

0xe212,	// (0x00067408) bg_popup_call3_rect_pane_g1

0xa10b,	// (0x00063301) bg_popup_call3_rect_pane_g2

0xe21a,	// (0x00067410) bg_popup_call3_rect_pane_g3

0xe222,	// (0x00067418) bg_popup_call3_rect_pane_g4

0xe22a,	// (0x00067420) bg_popup_call3_rect_pane_g5

0xe232,	// (0x00067428) bg_popup_call3_rect_pane_g6

0xe23a,	// (0x00067430) bg_popup_call3_rect_pane_g7

0x32ec,	// (0x0005c4e2) mup_visualizer_osc_pane

0xadb7,	// (0x00063fad) mup_visualizer_spec_pane

0x4152,	// (0x0005d348) call3_video_qcif_pane_ParamLimits

0x4152,	// (0x0005d348) call3_video_qcif_pane

0x4163,	// (0x0005d359) call3_video_qcif_uncrop_pane_ParamLimits

0x4163,	// (0x0005d359) call3_video_qcif_uncrop_pane

0x416f,	// (0x0005d365) call3_video_subqcif_pane_ParamLimits

0x416f,	// (0x0005d365) call3_video_subqcif_pane

0x4183,	// (0x0005d379) call3_video_subqcif_uncrop_pane_ParamLimits

0x4183,	// (0x0005d379) call3_video_subqcif_uncrop_pane

0x41f4,	// (0x0005d3ea) popup_call3_audio_in_window_g4_ParamLimits

0x41f4,	// (0x0005d3ea) popup_call3_audio_in_window_g4

0x4111,	// (0x0005d307) mup_spec_half_pane

0x411a,	// (0x0005d310) mup_spec_half_pane_cp

0xe4b7,	// (0x000676ad) mup_osc_middle_pane

0xe4c0,	// (0x000676b6) mup_visualizer_osc_pane_g1

0x40f2,	// (0x0005d2e8) mup_spec_bar_pane_ParamLimits

0x40f2,	// (0x0005d2e8) mup_spec_bar_pane

0xe4a4,	// (0x0006769a) mup_spec_bar_pane_g1

0xe4ae,	// (0x000676a4) mup_spec_bar_pane_g2

0x0001,

0x0389,	// (0x0005957f) mup_spec_bar_pane_g

0x1469,	// (0x0005a65f) aid_cale_week_size_cell_pane_ParamLimits

0x1483,	// (0x0005a679) bg_cale_heading_pane_ParamLimits

0x149b,	// (0x0005a691) bg_cale_pane_cp01_ParamLimits

0x14b8,	// (0x0005a6ae) cale_week_corner_pane_ParamLimits

0x14d7,	// (0x0005a6cd) cale_week_day_heading_pane_ParamLimits

0x14f4,	// (0x0005a6ea) cale_week_scroll_pane_g1_ParamLimits

0x1507,	// (0x0005a6fd) cale_week_scroll_pane_g2_ParamLimits

0x151f,	// (0x0005a715) cale_week_scroll_pane_g3_ParamLimits

0x1537,	// (0x0005a72d) cale_week_scroll_pane_g4_ParamLimits

0x154f,	// (0x0005a745) cale_week_scroll_pane_g5_ParamLimits

0x1567,	// (0x0005a75d) cale_week_scroll_pane_g6_ParamLimits

0x157f,	// (0x0005a775) cale_week_scroll_pane_g7_ParamLimits

0x1597,	// (0x0005a78d) cale_week_scroll_pane_g8_ParamLimits

0x15b3,	// (0x0005a7a9) cale_week_scroll_pane_g9_ParamLimits

0x15cb,	// (0x0005a7c1) cale_week_scroll_pane_g10_ParamLimits

0x15e3,	// (0x0005a7d9) cale_week_scroll_pane_g11_ParamLimits

0x15fb,	// (0x0005a7f1) cale_week_scroll_pane_g12_ParamLimits

0x1613,	// (0x0005a809) cale_week_scroll_pane_g13_ParamLimits

0x1613,	// (0x0005a809) cale_week_scroll_pane_g14_ParamLimits

0x1613,	// (0x0005a809) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000683a6) cale_week_scroll_pane_g_ParamLimits

0x1647,	// (0x0005a83d) cale_week_time_pane_ParamLimits

0x1663,	// (0x0005a859) grid_cale_week_pane_ParamLimits

0xa190,	// (0x00063386) listscroll_cale_week_pane_t1

0xa1a2,	// (0x00063398) scroll_pane_cp08_ParamLimits

0x22fb,	// (0x0005b4f1) cale_month_corner_pane_ParamLimits

0xa55a,	// (0x00063750) cale_month_pane_t1

0x2685,	// (0x0005b87b) cale_month_week_pane_ParamLimits

0x2df9,	// (0x0005bfef) popup_call_status_window_g1_ParamLimits

0x2e0d,	// (0x0005c003) popup_call_status_window_g2_ParamLimits

0x2e21,	// (0x0005c017) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0006854c) popup_call_status_window_g_ParamLimits

0xa928,	// (0x00063b1e) aid_call2_pane

0x3535,	// (0x0005c72b) msg_header_pane_g1

0x36dd,	// (0x0005c8d3) postcard_address2_pane_ParamLimits

0x36dd,	// (0x0005c8d3) postcard_address2_pane

0x36ed,	// (0x0005c8e3) postcard_message2_pane_ParamLimits

0x36ed,	// (0x0005c8e3) postcard_message2_pane

0x40b0,	// (0x0005d2a6) message2_row_pane_ParamLimits

0x40b0,	// (0x0005d2a6) message2_row_pane

0x40c8,	// (0x0005d2be) address2_row_pane_ParamLimits

0x40c8,	// (0x0005d2be) address2_row_pane

0xe472,	// (0x00067668) postcard_message2_row_pane_g1

0xe47a,	// (0x00067670) postcard_message2_row_pane_t1

0xe472,	// (0x00067668) address2_row_pane_g1

0xe47a,	// (0x00067670) address2_row_pane_t1

0x1a3a,	// (0x0005ac30) aid_size_cell_vorec

0x9c9c,	// (0x00062e92) main_rss_pane

0x40db,	// (0x0005d2d1) rss_list_single_pane_ParamLimits

0x40db,	// (0x0005d2d1) rss_list_single_pane

0xe488,	// (0x0006767e) rss_list_single_pane_t1

0xe496,	// (0x0006768c) rss_list_single_pane_t2

0x0001,

0x0384,	// (0x0005957a) rss_list_single_pane_t

0x9c9c,	// (0x00062e92) main_camera2_pane

0x9c9c,	// (0x00062e92) main_video2_pane

0x4315,	// (0x0005d50b) cams_zoom_pane_cp2_ParamLimits

0x4315,	// (0x0005d50b) cams_zoom_pane_cp2

0x432c,	// (0x0005d522) image2_vga_pane_ParamLimits

0x432c,	// (0x0005d522) image2_vga_pane

0x4362,	// (0x0005d558) main_camera2_pane_g1_ParamLimits

0x4362,	// (0x0005d558) main_camera2_pane_g1

0x4382,	// (0x0005d578) main_camera2_pane_g2_ParamLimits

0x4382,	// (0x0005d578) main_camera2_pane_g2

0x4399,	// (0x0005d58f) main_camera2_pane_g3_ParamLimits

0x4399,	// (0x0005d58f) main_camera2_pane_g3

0x43b0,	// (0x0005d5a6) main_camera2_pane_g4_ParamLimits

0x43b0,	// (0x0005d5a6) main_camera2_pane_g4

0x43c7,	// (0x0005d5bd) main_camera2_pane_g5_ParamLimits

0x43c7,	// (0x0005d5bd) main_camera2_pane_g5

0x43de,	// (0x0005d5d4) main_camera2_pane_g6_ParamLimits

0x43de,	// (0x0005d5d4) main_camera2_pane_g6

0x43f5,	// (0x0005d5eb) main_camera2_pane_g7_ParamLimits

0x43f5,	// (0x0005d5eb) main_camera2_pane_g7

0x440c,	// (0x0005d602) main_camera2_pane_g8_ParamLimits

0x440c,	// (0x0005d602) main_camera2_pane_g8

0x0008,

0xf593,	// (0x00068789) main_camera2_pane_g_ParamLimits

0xf593,	// (0x00068789) main_camera2_pane_g

0x443a,	// (0x0005d630) main_camera2_pane_t1_ParamLimits

0x443a,	// (0x0005d630) main_camera2_pane_t1

0x4469,	// (0x0005d65f) main_camera2_pane_t2_ParamLimits

0x4469,	// (0x0005d65f) main_camera2_pane_t2

0x4486,	// (0x0005d67c) main_camera2_pane_t3_ParamLimits

0x4486,	// (0x0005d67c) main_camera2_pane_t3

0x44d2,	// (0x0005d6c8) main_camera2_pane_t4_ParamLimits

0x44d2,	// (0x0005d6c8) main_camera2_pane_t4

0x0006,

0xf5a6,	// (0x0006879c) main_camera2_pane_t_ParamLimits

0xf5a6,	// (0x0006879c) main_camera2_pane_t

0x4547,	// (0x0005d73d) cams_zoom_pane_cp4_ParamLimits

0x4547,	// (0x0005d73d) cams_zoom_pane_cp4

0x455d,	// (0x0005d753) image2_cif_pane_ParamLimits

0x455d,	// (0x0005d753) image2_cif_pane

0x4580,	// (0x0005d776) image2_subqcif_pane_ParamLimits

0x4580,	// (0x0005d776) image2_subqcif_pane

0x4596,	// (0x0005d78c) main_video2_pane_g1_ParamLimits

0x4596,	// (0x0005d78c) main_video2_pane_g1

0x45b0,	// (0x0005d7a6) main_video2_pane_g2_ParamLimits

0x45b0,	// (0x0005d7a6) main_video2_pane_g2

0x45c6,	// (0x0005d7bc) main_video2_pane_g3_ParamLimits

0x45c6,	// (0x0005d7bc) main_video2_pane_g3

0x45dc,	// (0x0005d7d2) main_video2_pane_g4_ParamLimits

0x45dc,	// (0x0005d7d2) main_video2_pane_g4

0x45f2,	// (0x0005d7e8) main_video2_pane_g5_ParamLimits

0x45f2,	// (0x0005d7e8) main_video2_pane_g5

0x4608,	// (0x0005d7fe) main_video2_pane_g6_ParamLimits

0x4608,	// (0x0005d7fe) main_video2_pane_g6

0x0005,

0xf5b5,	// (0x000687ab) main_video2_pane_g_ParamLimits

0xf5b5,	// (0x000687ab) main_video2_pane_g

0x4622,	// (0x0005d818) main_video2_pane_t1_ParamLimits

0x4622,	// (0x0005d818) main_video2_pane_t1

0x4646,	// (0x0005d83c) main_video2_pane_t2_ParamLimits

0x4646,	// (0x0005d83c) main_video2_pane_t2

0x4690,	// (0x0005d886) main_video2_pane_t3_ParamLimits

0x4690,	// (0x0005d886) main_video2_pane_t3

0x0002,

0xf5c2,	// (0x000687b8) main_video2_pane_t_ParamLimits

0xf5c2,	// (0x000687b8) main_video2_pane_t

0x3c85,	// (0x0005ce7b) call_muted_g2

0x0001,

0xf577,	// (0x0006876d) call_muted_g

0x9c9c,	// (0x00062e92) main_mup2_pane

0x46d2,	// (0x0005d8c8) main_mup2_pane_g1_ParamLimits

0x46d2,	// (0x0005d8c8) main_mup2_pane_g1

0x46de,	// (0x0005d8d4) main_mup2_pane_g2_ParamLimits

0x46de,	// (0x0005d8d4) main_mup2_pane_g2

0xb76e,	// (0x00064964) main_mup_pane_g13_cp1

0xb776,	// (0x0006496c) mup_volume_pane_cp1

0x46fa,	// (0x0005d8f0) main_mup2_pane_g4_ParamLimits

0x46fa,	// (0x0005d8f0) main_mup2_pane_g4

0x470a,	// (0x0005d900) main_mup2_pane_g5_ParamLimits

0x470a,	// (0x0005d900) main_mup2_pane_g5

0x471a,	// (0x0005d910) main_mup2_pane_g6_ParamLimits

0x471a,	// (0x0005d910) main_mup2_pane_g6

0x472a,	// (0x0005d920) main_mup2_pane_g7_ParamLimits

0x472a,	// (0x0005d920) main_mup2_pane_g7

0x0006,

0xf5c9,	// (0x000687bf) main_mup2_pane_g_ParamLimits

0xf5c9,	// (0x000687bf) main_mup2_pane_g

0x4742,	// (0x0005d938) main_mup2_pane_t1_ParamLimits

0x4742,	// (0x0005d938) main_mup2_pane_t1

0x4758,	// (0x0005d94e) main_mup2_pane_t2_ParamLimits

0x4758,	// (0x0005d94e) main_mup2_pane_t2

0x476e,	// (0x0005d964) main_mup2_pane_t3_ParamLimits

0x476e,	// (0x0005d964) main_mup2_pane_t3

0x4784,	// (0x0005d97a) main_mup2_pane_t4_ParamLimits

0x4784,	// (0x0005d97a) main_mup2_pane_t4

0x479c,	// (0x0005d992) main_mup2_pane_t5_ParamLimits

0x479c,	// (0x0005d992) main_mup2_pane_t5

0x47b4,	// (0x0005d9aa) main_mup2_pane_t6_ParamLimits

0x47b4,	// (0x0005d9aa) main_mup2_pane_t6

0x0005,

0xf5d8,	// (0x000687ce) main_mup2_pane_t_ParamLimits

0xf5d8,	// (0x000687ce) main_mup2_pane_t

0x47e2,	// (0x0005d9d8) mup2_visualizer_pane_ParamLimits

0x47e2,	// (0x0005d9d8) mup2_visualizer_pane

0x480d,	// (0x0005da03) mup_progress_pane_cp_ParamLimits

0x480d,	// (0x0005da03) mup_progress_pane_cp

0xb759,	// (0x0006494f) mup_volume_pane_cp_ParamLimits

0xb759,	// (0x0006494f) mup_volume_pane_cp

0x4821,	// (0x0005da17) mup2_visualizer_pane_g1_ParamLimits

0x4821,	// (0x0005da17) mup2_visualizer_pane_g1

0xe4f7,	// (0x000676ed) mup2_visualizer_pane_g2_ParamLimits

0xe4f7,	// (0x000676ed) mup2_visualizer_pane_g2

0x4836,	// (0x0005da2c) mup2_visualizer_pane_g3_ParamLimits

0x4836,	// (0x0005da2c) mup2_visualizer_pane_g3

0x0002,

0xf5e5,	// (0x000687db) mup2_visualizer_pane_g_ParamLimits

0xf5e5,	// (0x000687db) mup2_visualizer_pane_g

0x3934,	// (0x0005cb2a) aid_size_cell_fmradio

0x3de1,	// (0x0005cfd7) aid_height_parent_landcape

0xa3b8,	// (0x000635ae) wml_content_pane_cp

0xa3c0,	// (0x000635b6) wml_tabs_pane

0xa3c9,	// (0x000635bf) popup_wml_miniature_window

0xa3d1,	// (0x000635c7) scroll_pane_cp021

0xa3e5,	// (0x000635db) wml_content_pane_comp8

0x9c9c,	// (0x00062e92) bg_popup_sub_pane_cp05

0xe515,	// (0x0006770b) popup_wml_miniature_window_g1

0xe51d,	// (0x00067713) wml_miniature_view_pane

0x4842,	// (0x0005da38) aid_size_wml_view

0x484a,	// (0x0005da40) wml_miniature_view_pane_g1

0x4853,	// (0x0005da49) wml_miniature_view_pane_g2

0x485c,	// (0x0005da52) wml_miniature_view_pane_g3

0x4864,	// (0x0005da5a) wml_miniature_view_pane_g4

0x486c,	// (0x0005da62) wml_miniature_view_pane_g5

0x4874,	// (0x0005da6a) wml_miniature_view_pane_g6

0x487c,	// (0x0005da72) wml_miniature_view_pane_g7

0x4884,	// (0x0005da7a) wml_miniature_view_pane_g8

0x0007,

0xf5ec,	// (0x000687e2) wml_miniature_view_pane_g

0xe525,	// (0x0006771b) background_graphic_ParamLimits

0xe525,	// (0x0006771b) background_graphic

0xe531,	// (0x00067727) wml_tabs_2_pane

0xe53a,	// (0x00067730) wml_tabs_3_pane_ParamLimits

0xe53a,	// (0x00067730) wml_tabs_3_pane

0xe54c,	// (0x00067742) wml_tabs_4_pane_ParamLimits

0xe54c,	// (0x00067742) wml_tabs_4_pane

0xe562,	// (0x00067758) wml_tabs_5_pane_ParamLimits

0xe562,	// (0x00067758) wml_tabs_5_pane

0xe57c,	// (0x00067772) wml_tabs_pane_g2_ParamLimits

0xe57c,	// (0x00067772) wml_tabs_pane_g2

0xe590,	// (0x00067786) wml_tabs_pane_g3_ParamLimits

0xe590,	// (0x00067786) wml_tabs_pane_g3

0x488c,	// (0x0005da82) wml_tabs_2_active_pane_ParamLimits

0x488c,	// (0x0005da82) wml_tabs_2_active_pane

0x489c,	// (0x0005da92) wml_tabs_2_passive_pane_ParamLimits

0x489c,	// (0x0005da92) wml_tabs_2_passive_pane

0x48ac,	// (0x0005daa2) wml_tabs_3_active_pane_cp_ParamLimits

0x48ac,	// (0x0005daa2) wml_tabs_3_active_pane_cp

0x48bd,	// (0x0005dab3) wml_tabs_3_passive_pane_ParamLimits

0x48bd,	// (0x0005dab3) wml_tabs_3_passive_pane

0x48ce,	// (0x0005dac4) wml_tabs_3_passive_pane_cp_ParamLimits

0x48ce,	// (0x0005dac4) wml_tabs_3_passive_pane_cp

0x48df,	// (0x0005dad5) tabs_4_active_pane

0x48e7,	// (0x0005dadd) tabs_4_passive_pane

0x48ef,	// (0x0005dae5) tabs_4_passive_pane_cp

0x48f7,	// (0x0005daed) tabs_4_passive_pane_cp2

0x3b60,	// (0x0005cd56) aid_height_text

0x32c2,	// (0x0005c4b8) mup_volume_cont_pane_ParamLimits

0x32c2,	// (0x0005c4b8) mup_volume_cont_pane

0x10b3,	// (0x0005a2a9) aid_size_cell_pinb

0x10bd,	// (0x0005a2b3) aid_size_list_pinb

0x47f9,	// (0x0005d9ef) mup2_volume_cont_pane_ParamLimits

0x47f9,	// (0x0005d9ef) mup2_volume_cont_pane

0xb745,	// (0x0006493b) mup2_volume_cont_pane_g1_ParamLimits

0xb745,	// (0x0006493b) mup2_volume_cont_pane_g1

0x0dea,	// (0x00059fe0) aid_size_cell_touch_ParamLimits

0x0dea,	// (0x00059fe0) aid_size_cell_touch

0x0fef,	// (0x0005a1e5) touch_pane_ParamLimits

0x0fef,	// (0x0005a1e5) touch_pane

0x984d,	// (0x00062a43) main_rss2_pane

0xe5ad,	// (0x000677a3) listscroll_rss2_pane

0xe5b6,	// (0x000677ac) rss2_navigation_pane

0xe5be,	// (0x000677b4) list_rss2_pane

0xaab0,	// (0x00063ca6) scroll_pane_cp22

0xe5c6,	// (0x000677bc) rss2_navigation_pane_g1

0xe5cf,	// (0x000677c5) rss2_navigation_pane_g2

0xe5d7,	// (0x000677cd) rss2_navigation_pane_g3

0x0002,

0x040f,	// (0x00059605) rss2_navigation_pane_g

0xe5df,	// (0x000677d5) rss2_navigation_pane_t1

0x48ff,	// (0x0005daf5) rss2_list_single_pane_ParamLimits

0x48ff,	// (0x0005daf5) rss2_list_single_pane

0xe5ed,	// (0x000677e3) rss2_list_single_pane_t2

0xe5fb,	// (0x000677f1) rss2_list_single_pane_t3_ParamLimits

0xe5fb,	// (0x000677f1) rss2_list_single_pane_t3

0xe618,	// (0x0006780e) rss2_list_single_pane_t4

0x2c25,	// (0x0005be1b) smil_status_pane_g1

0x983f,	// (0x00062a35) main_image2_pane_ParamLimits

0x983f,	// (0x00062a35) main_image2_pane

0x4423,	// (0x0005d619) main_camera2_pane_g9_ParamLimits

0x4423,	// (0x0005d619) main_camera2_pane_g9

0x4515,	// (0x0005d70b) main_camera2_pane_t5_ParamLimits

0x4515,	// (0x0005d70b) main_camera2_pane_t5

0xb71a,	// (0x00064910) main_camera2_pane_t6_ParamLimits

0xb71a,	// (0x00064910) main_camera2_pane_t6

0x4912,	// (0x0005db08) main_image2_pane_g1_ParamLimits

0x4912,	// (0x0005db08) main_image2_pane_g1

0x38fc,	// (0x0005caf2) smil2_video_pane_ParamLimits

0x38fc,	// (0x0005caf2) smil2_video_pane

0x97f7,	// (0x000629ed) aid_zoom_text_primary_cp

0x9837,	// (0x00062a2d) popup_preview_fixed_window

0xa312,	// (0x00063508) im_reading_pane_g1

0x4309,	// (0x0005d4ff) cams2_bc_adjust_pane_cp_ParamLimits

0x4309,	// (0x0005d4ff) cams2_bc_adjust_pane_cp

0x453b,	// (0x0005d731) cams2_bc_adjust_pane_ParamLimits

0x453b,	// (0x0005d731) cams2_bc_adjust_pane

0xefa8,	// (0x0006819e) cams2_bc_adjust_pane_g1

0xb77e,	// (0x00064974) cams2_slider_pane

0xb787,	// (0x0006497d) cams2_slider_pane_g1

0xb790,	// (0x00064986) cams2_slider_pane_g2

0x0006,

0xf5fd,	// (0x000687f3) cams2_slider_pane_g

0x1191,	// (0x0005a387) calc_display_pane_ParamLimits

0x11b3,	// (0x0005a3a9) calc_paper_pane_ParamLimits

0x11d0,	// (0x0005a3c6) grid_calc_pane_ParamLimits

0xa98a,	// (0x00063b80) popup_clock_digital_window_t1_ParamLimits

0xafa2,	// (0x00064198) main_image_pane_t1

0x1173,	// (0x0005a369) aid_size_cell_calc_ParamLimits

0x1173,	// (0x0005a369) aid_size_cell_calc

0x3e35,	// (0x0005d02b) popup_blid_sat_info2_window_ParamLimits

0x3e35,	// (0x0005d02b) popup_blid_sat_info2_window

0xe62e,	// (0x00067824) aid_size_cell_blid

0xe636,	// (0x0006782c) bg_popup_window_pane_cp07

0xe659,	// (0x0006784f) grid_popup_blid_pane

0xe661,	// (0x00067857) heading_pane_cp05_ParamLimits

0xe661,	// (0x00067857) heading_pane_cp05

0xe729,	// (0x0006791f) cell_popup_blid_pane_ParamLimits

0xe729,	// (0x0006791f) cell_popup_blid_pane

0xe749,	// (0x0006793f) cell_popup_blid_pane_g1

0xe751,	// (0x00067947) cell_popup_blid_pane_t1

0x47ce,	// (0x0005d9c4) mup2_indicator_pane_ParamLimits

0x47ce,	// (0x0005d9c4) mup2_indicator_pane

0xa211,	// (0x00063407) mup2_visualizer_osc_pane

0xe503,	// (0x000676f9) mup2_visualizer_spec_pane_ParamLimits

0xe503,	// (0x000676f9) mup2_visualizer_spec_pane

0x4926,	// (0x0005db1c) mup2_spec_half_pane

0x492f,	// (0x0005db25) mup2_spec_half_pane_cp

0x4937,	// (0x0005db2d) mup2_spec_bar_pane_ParamLimits

0x4937,	// (0x0005db2d) mup2_spec_bar_pane

0xe4a4,	// (0x0006769a) mup2_spec_bar_pane_g1

0xe4ae,	// (0x000676a4) mup2_spec_bar_pane_g2

0x0001,

0x0389,	// (0x0005957f) mup2_spec_bar_pane_g

0xe4b7,	// (0x000676ad) mup2_osc_middle_pane

0xe4c0,	// (0x000676b6) mup2_visualizer_osc_pane_g1

0x9877,	// (0x00062a6d) popup_number_entry_window_t1_ParamLimits

0x988a,	// (0x00062a80) popup_number_entry_window_t2_ParamLimits

0x989c,	// (0x00062a92) popup_number_entry_window_t3_ParamLimits

0x98ae,	// (0x00062aa4) popup_number_entry_window_t5_ParamLimits

0x98ae,	// (0x00062aa4) popup_number_entry_window_t5

0xf0ca,	// (0x000682c0) popup_number_entry_window_t_ParamLimits

0x98e2,	// (0x00062ad8) text_title_cp2_ParamLimits

0xae7c,	// (0x00064072) aid_hotspot_pointer_text2_pane

0xaea2,	// (0x00064098) main_viewer_pane_g9_ParamLimits

0xaea2,	// (0x00064098) main_viewer_pane_g9

0xa55a,	// (0x00063750) cale_month_pane_t1_ParamLimits

0xa5c5,	// (0x000637bb) bg_cale_pane_ParamLimits

0xa5dd,	// (0x000637d3) list_cale_pane_ParamLimits

0xa5ee,	// (0x000637e4) listscroll_cale_day_pane_t1

0xa600,	// (0x000637f6) scroll_pane_cp09_ParamLimits

0x330e,	// (0x0005c504) main_mup_eq_pane_t1_ParamLimits

0x330e,	// (0x0005c504) main_mup_eq_pane_t1

0x3326,	// (0x0005c51c) main_mup_eq_pane_t2_ParamLimits

0x3326,	// (0x0005c51c) main_mup_eq_pane_t2

0x333c,	// (0x0005c532) main_mup_eq_pane_t3_ParamLimits

0x333c,	// (0x0005c532) main_mup_eq_pane_t3

0x3352,	// (0x0005c548) main_mup_eq_pane_t4_ParamLimits

0x3352,	// (0x0005c548) main_mup_eq_pane_t4

0x3368,	// (0x0005c55e) main_mup_eq_pane_t5_ParamLimits

0x3368,	// (0x0005c55e) main_mup_eq_pane_t5

0x337e,	// (0x0005c574) main_mup_eq_pane_t6_ParamLimits

0x337e,	// (0x0005c574) main_mup_eq_pane_t6

0x3390,	// (0x0005c586) main_mup_eq_pane_t7_ParamLimits

0x3390,	// (0x0005c586) main_mup_eq_pane_t7

0x33a2,	// (0x0005c598) main_mup_eq_pane_t8_ParamLimits

0x33a2,	// (0x0005c598) main_mup_eq_pane_t8

0x33b4,	// (0x0005c5aa) main_mup_eq_pane_t9_ParamLimits

0x33b4,	// (0x0005c5aa) main_mup_eq_pane_t9

0x33ca,	// (0x0005c5c0) main_mup_eq_pane_t10_ParamLimits

0x33ca,	// (0x0005c5c0) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0006864b) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0006864b) main_mup_eq_pane_t

0x345d,	// (0x0005c653) mup_equalizer_pane_cp5_ParamLimits

0x346f,	// (0x0005c665) mup_equalizer_pane_cp6_ParamLimits

0x3481,	// (0x0005c677) mup_equalizer_pane_cp7_ParamLimits

0x984d,	// (0x00062a43) main_gallery_pane

0xe4c9,	// (0x000676bf) smil2_volume_pane

0xe4d1,	// (0x000676c7) smil_status_volume_pane_g1_ParamLimits

0xe4e4,	// (0x000676da) smil_status_volume_pane_g2_ParamLimits

0xb6f8,	// (0x000648ee) smil_status_volume_pane_g3_ParamLimits

0xf57c,	// (0x00068772) smil_status_volume_pane_g_ParamLimits

0xe636,	// (0x0006782c) bg_popup_window_pane_cp07_ParamLimits

0xe644,	// (0x0006783a) blid_firmament_pane

0x4956,	// (0x0005db4c) aid_size_cell_gallery_ParamLimits

0x4956,	// (0x0005db4c) aid_size_cell_gallery

0x496c,	// (0x0005db62) grid_gallery_pane_ParamLimits

0x496c,	// (0x0005db62) grid_gallery_pane

0x4981,	// (0x0005db77) cell_gallery_pane_ParamLimits

0x4981,	// (0x0005db77) cell_gallery_pane

0xe75f,	// (0x00067955) bg_cell_gallery_focus_pane_ParamLimits

0xe75f,	// (0x00067955) bg_cell_gallery_focus_pane

0xe771,	// (0x00067967) cell_gallery_pane_g1_ParamLimits

0xe771,	// (0x00067967) cell_gallery_pane_g1

0x49c6,	// (0x0005dbbc) cell_gallery_pane_g2_ParamLimits

0x49c6,	// (0x0005dbbc) cell_gallery_pane_g2

0x49d3,	// (0x0005dbc9) cell_gallery_pane_g3_ParamLimits

0x49d3,	// (0x0005dbc9) cell_gallery_pane_g3

0xe77d,	// (0x00067973) cell_gallery_pane_g4_ParamLimits

0xe77d,	// (0x00067973) cell_gallery_pane_g4

0x0003,

0xf60c,	// (0x00068802) cell_gallery_pane_g_ParamLimits

0xf60c,	// (0x00068802) cell_gallery_pane_g

0xe789,	// (0x0006797f) bg_cell_gallery_focus_pane_g1

0xe791,	// (0x00067987) bg_cell_gallery_focus_pane_g2

0xe799,	// (0x0006798f) bg_cell_gallery_focus_pane_g3

0xe7a1,	// (0x00067997) bg_cell_gallery_focus_pane_g4

0xe7a9,	// (0x0006799f) bg_cell_gallery_focus_pane_g5

0xe7b1,	// (0x000679a7) bg_cell_gallery_focus_pane_g6

0xe7b9,	// (0x000679af) bg_cell_gallery_focus_pane_g7

0xe7c1,	// (0x000679b7) bg_cell_gallery_focus_pane_g8

0x0007,

0x0445,	// (0x0005963b) bg_cell_gallery_focus_pane_g

0xe7c9,	// (0x000679bf) aid_firma_cardinal

0xe7dd,	// (0x000679d3) blid_firmament_pane_t1

0xe7f4,	// (0x000679ea) blid_firmament_pane_t2

0xe80b,	// (0x00067a01) blid_firmament_pane_t3

0xe822,	// (0x00067a18) blid_firmament_pane_t4

0x0003,

0x0456,	// (0x0005964c) blid_firmament_pane_t

0xe839,	// (0x00067a2f) blid_sat_info_pane

0xe849,	// (0x00067a3f) blid_sat_info_pane_g1

0xe849,	// (0x00067a3f) blid_sat_info_pane_g2

0x0001,

0x045f,	// (0x00059655) blid_sat_info_pane_g

0xe853,	// (0x00067a49) blid_sat_info_pane_t1

0xe861,	// (0x00067a57) smil2_volume_content_pane

0xe86a,	// (0x00067a60) smil2_volume_pane_g1

0xe872,	// (0x00067a68) smil2_volume_content_pane_g1

0xe87b,	// (0x00067a71) smil2_volume_content_pane_g2

0xe884,	// (0x00067a7a) smil2_volume_content_pane_g3

0xe88d,	// (0x00067a83) smil2_volume_content_pane_g4

0xe896,	// (0x00067a8c) smil2_volume_content_pane_g5

0xe89f,	// (0x00067a95) smil2_volume_content_pane_g6

0xe8a8,	// (0x00067a9e) smil2_volume_content_pane_g7

0xe8b1,	// (0x00067aa7) smil2_volume_content_pane_g8

0xe8ba,	// (0x00067ab0) smil2_volume_content_pane_g9

0xe8c3,	// (0x00067ab9) smil2_volume_content_pane_g10

0x0009,

0x0464,	// (0x0005965a) smil2_volume_content_pane_g

0x16f3,	// (0x0005a8e9) cale_week_day_heading_pane_t1_ParamLimits

0x1718,	// (0x0005a90e) cale_week_day_heading_pane_t2_ParamLimits

0x1742,	// (0x0005a938) cale_week_day_heading_pane_t3_ParamLimits

0x176c,	// (0x0005a962) cale_week_day_heading_pane_t4_ParamLimits

0x1796,	// (0x0005a98c) cale_week_day_heading_pane_t5_ParamLimits

0x17c0,	// (0x0005a9b6) cale_week_day_heading_pane_t6_ParamLimits

0x17ea,	// (0x0005a9e0) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000683c7) cale_week_day_heading_pane_t_ParamLimits

0xa1bf,	// (0x000633b5) bg_cale_side_pane_ParamLimits

0x180f,	// (0x0005aa05) cale_week_time_pane_t1_ParamLimits

0x1849,	// (0x0005aa3f) cale_week_time_pane_t2_ParamLimits

0x1883,	// (0x0005aa79) cale_week_time_pane_t3_ParamLimits

0x18bd,	// (0x0005aab3) cale_week_time_pane_t4_ParamLimits

0x18f7,	// (0x0005aaed) cale_week_time_pane_t5_ParamLimits

0x1931,	// (0x0005ab27) cale_week_time_pane_t6_ParamLimits

0x196b,	// (0x0005ab61) cale_week_time_pane_t7_ParamLimits

0x19a5,	// (0x0005ab9b) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000683d6) cale_week_time_pane_t_ParamLimits

0x19df,	// (0x0005abd5) cell_cale_week_pane_g2_ParamLimits

0xa1bf,	// (0x000633b5) bg_cale_side_pane_cp01_ParamLimits

0x2a3e,	// (0x0005bc34) cale_month_week_pane_t1_ParamLimits

0x2a57,	// (0x0005bc4d) cale_month_week_pane_t2_ParamLimits

0x2a70,	// (0x0005bc66) cale_month_week_pane_t3_ParamLimits

0x2a89,	// (0x0005bc7f) cale_month_week_pane_t4_ParamLimits

0x2aa2,	// (0x0005bc98) cale_month_week_pane_t5_ParamLimits

0x2abb,	// (0x0005bcb1) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000684ab) cale_month_week_pane_t_ParamLimits

0xa56c,	// (0x00063762) cell_cale_month_pane_g1_ParamLimits

0x984d,	// (0x00062a43) main_cale_event_viewer_pane

0x97cd,	// (0x000629c3) listscroll_cale_event_viewer_pane

0xe8cc,	// (0x00067ac2) list_cale_ev_pane

0xe8d4,	// (0x00067aca) scroll_pane_cp023

0x49e0,	// (0x0005dbd6) field_cale_ev_pane_ParamLimits

0x49e0,	// (0x0005dbd6) field_cale_ev_pane

0xe8e0,	// (0x00067ad6) field_cale_ev_content_pane_ParamLimits

0xe8e0,	// (0x00067ad6) field_cale_ev_content_pane

0xe8ec,	// (0x00067ae2) field_cale_ev_pane_g1_ParamLimits

0xe8ec,	// (0x00067ae2) field_cale_ev_pane_g1

0xe8f8,	// (0x00067aee) field_cale_ev_pane_g2_ParamLimits

0xe8f8,	// (0x00067aee) field_cale_ev_pane_g2

0xe910,	// (0x00067b06) field_cale_ev_pane_g3_ParamLimits

0xe910,	// (0x00067b06) field_cale_ev_pane_g3

0x0002,

0x0479,	// (0x0005966f) field_cale_ev_pane_g_ParamLimits

0x0479,	// (0x0005966f) field_cale_ev_pane_g

0xe928,	// (0x00067b1e) field_cale_ev_pane_t1_ParamLimits

0xe928,	// (0x00067b1e) field_cale_ev_pane_t1

0x49fa,	// (0x0005dbf0) field_cale_ev_content_pane_t1_ParamLimits

0x49fa,	// (0x0005dbf0) field_cale_ev_content_pane_t1

0xae46,	// (0x0006403c) bg_button_pane_cp01

0x1459,	// (0x0005a64f) listscroll_cale_week_pane_ParamLimits

0xa187,	// (0x0006337d) popup_toolbar_window_cp01

0xa190,	// (0x00063386) listscroll_cale_week_pane_t1_ParamLimits

0x1459,	// (0x0005a64f) listscroll_cale_day_pane_ParamLimits

0xa187,	// (0x0006337d) popup_toolbar_window_cp02

0xa5ee,	// (0x000637e4) listscroll_cale_day_pane_t1_ParamLimits

0x3dfd,	// (0x0005cff3) main_cale_month_pane_ParamLimits

0xb6e3,	// (0x000648d9) popup_toolbar_window_cp03_ParamLimits

0xb6e3,	// (0x000648d9) popup_toolbar_window_cp03

0x37d6,	// (0x0005c9cc) main_image_pane_g2_ParamLimits

0x37d6,	// (0x0005c9cc) main_image_pane_g2

0x37e7,	// (0x0005c9dd) main_image_pane_g3_ParamLimits

0x37e7,	// (0x0005c9dd) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000686dd) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000686dd) main_image_pane_g

0xafa2,	// (0x00064198) main_image_pane_t1_ParamLimits

0x37f8,	// (0x0005c9ee) main_image_pane_t2_ParamLimits

0x37f8,	// (0x0005c9ee) main_image_pane_t2

0x380a,	// (0x0005ca00) main_image_pane_t3_ParamLimits

0x380a,	// (0x0005ca00) main_image_pane_t3

0x3832,	// (0x0005ca28) main_image_pane_t4_ParamLimits

0x3832,	// (0x0005ca28) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000686e4) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000686e4) main_image_pane_t

0x3852,	// (0x0005ca48) popup_image_details_window_cp01

0x385a,	// (0x0005ca50) popup_toobar_trans_pane_cp01_ParamLimits

0x385a,	// (0x0005ca50) popup_toobar_trans_pane_cp01

0x3f06,	// (0x0005d0fc) popup_image_details_window_ParamLimits

0x3f06,	// (0x0005d0fc) popup_image_details_window

0xb6b8,	// (0x000648ae) popup_image_focus_window

0x42d7,	// (0x0005d4cd) camera2_autofocus_pane_ParamLimits

0x42d7,	// (0x0005d4cd) camera2_autofocus_pane

0x97cd,	// (0x000629c3) bg_popup_sub_pane_cp06

0xe93f,	// (0x00067b35) popup_image_focus_window_g1

0xe947,	// (0x00067b3d) popup_image_focus_window_g2

0xe94f,	// (0x00067b45) popup_image_focus_window_g3

0xe957,	// (0x00067b4d) popup_image_focus_window_g4

0x0003,

0x0480,	// (0x00059676) popup_image_focus_window_g

0xe95f,	// (0x00067b55) popup_image_focus_window_t1

0xe96d,	// (0x00067b63) popup_image_focus_window_t2

0xe97c,	// (0x00067b72) popup_image_focus_window_t3

0x0002,

0x0489,	// (0x0005967f) popup_image_focus_window_t

0xe98a,	// (0x00067b80) camera2_autofocus_pane_g1

0xb6a2,	// (0x00064898) bg_tb_trans_pane_cp01

0xe998,	// (0x00067b8e) popup_image_details_window_g1

0xe9ab,	// (0x00067ba1) popup_image_details_window_g2

0x0002,

0x049b,	// (0x00059691) popup_image_details_window_g

0xe9d4,	// (0x00067bca) popup_image_details_window_t1

0xe9e6,	// (0x00067bdc) popup_image_details_window_t2

0xe9ff,	// (0x00067bf5) popup_image_details_window_t3

0xea13,	// (0x00067c09) popup_image_details_window_t4

0xea2e,	// (0x00067c24) popup_image_details_window_t5

0x0004,

0x04a2,	// (0x00059698) popup_image_details_window_t

0x9fbc,	// (0x000631b2) bg_calc_paper_pane_ParamLimits

0x984d,	// (0x00062a43) grid_highlight_pane_cp013

0x9fd0,	// (0x000631c6) list_calc_pane_ParamLimits

0x9fe2,	// (0x000631d8) scroll_pane_cp024

0x9fea,	// (0x000631e0) bg_calc_display_pane_ParamLimits

0x12bc,	// (0x0005a4b2) calc_display_pane_t1_ParamLimits

0x12ce,	// (0x0005a4c4) calc_display_pane_t2_ParamLimits

0x9ff6,	// (0x000631ec) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00068347) calc_display_pane_t_ParamLimits

0x1378,	// (0x0005a56e) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00068364) cell_calc_pane_g

0x1381,	// (0x0005a577) cell_calc_pane_t1

0xa06d,	// (0x00063263) grid_highlight_pane_cp02_ParamLimits

0xa083,	// (0x00063279) toolbar_button_pane_cp01_ParamLimits

0xa083,	// (0x00063279) toolbar_button_pane_cp01

0xafe7,	// (0x000641dd) temp_image_control_pane_ParamLimits

0xafe7,	// (0x000641dd) temp_image_control_pane

0x983f,	// (0x00062a35) main_mp3_pane

0xea48,	// (0x00067c3e) temp_image_control_pane_g1_ParamLimits

0xea48,	// (0x00067c3e) temp_image_control_pane_g1

0xea56,	// (0x00067c4c) temp_image_control_pane_g2_ParamLimits

0xea56,	// (0x00067c4c) temp_image_control_pane_g2

0xea68,	// (0x00067c5e) temp_image_control_pane_g3_ParamLimits

0xea68,	// (0x00067c5e) temp_image_control_pane_g3

0x4a47,	// (0x0005dc3d) temp_image_control_pane_g4_ParamLimits

0x4a47,	// (0x0005dc3d) temp_image_control_pane_g4

0x0003,

0xf620,	// (0x00068816) temp_image_control_pane_g_ParamLimits

0xf620,	// (0x00068816) temp_image_control_pane_g

0xea48,	// (0x00067c3e) main_mp3_pane_g1

0x4a58,	// (0x0005dc4e) main_mp3_pane_g2

0x0007,

0xf629,	// (0x0006881f) main_mp3_pane_g

0xeaab,	// (0x00067ca1) main_mp3_pane_t1

0xa223,	// (0x00063419) main_camera_pane_g8_ParamLimits

0xa223,	// (0x00063419) main_camera_pane_g8

0x1cbd,	// (0x0005aeb3) main_video_pane_g7_ParamLimits

0x1cbd,	// (0x0005aeb3) main_video_pane_g7

0xb733,	// (0x00064929) main_camera2_pane_t7_ParamLimits

0xb733,	// (0x00064929) main_camera2_pane_t7

0xa378,	// (0x0006356e) scroll_pane_cp025_ParamLimits

0xa378,	// (0x0006356e) scroll_pane_cp025

0xa38c,	// (0x00063582) scroll_pane_cp026_ParamLimits

0xa38c,	// (0x00063582) scroll_pane_cp026

0xa39b,	// (0x00063591) wml_content_pane_ParamLimits

0x984d,	// (0x00062a43) main_touch_calib_pane

0x4b1a,	// (0x0005dd10) main_touch_calib_pane_g1

0x4b2c,	// (0x0005dd22) main_touch_calib_pane_g2

0x4b3e,	// (0x0005dd34) main_touch_calib_pane_g3

0x4b50,	// (0x0005dd46) main_touch_calib_pane_g4

0x0003,

0xf647,	// (0x0006883d) main_touch_calib_pane_g

0x4b62,	// (0x0005dd58) main_touch_calib_pane_t1

0x4b7a,	// (0x0005dd70) main_touch_calib_pane_t2

0x0004,

0xf650,	// (0x00068846) main_touch_calib_pane_t

0xab7d,	// (0x00063d73) mup_progress_pane_cp02

0xabb2,	// (0x00063da8) navi_pane_g1

0xac6b,	// (0x00063e61) navi_pane_mp_t3

0x983f,	// (0x00062a35) main_mp3_pane_ParamLimits

0x4063,	// (0x0005d259) navi_pane_ParamLimits

0xea48,	// (0x00067c3e) main_mp3_pane_g1_ParamLimits

0x4a58,	// (0x0005dc4e) main_mp3_pane_g2_ParamLimits

0x4a64,	// (0x0005dc5a) main_mp3_pane_g3_ParamLimits

0x4a64,	// (0x0005dc5a) main_mp3_pane_g3

0x4a70,	// (0x0005dc66) main_mp3_pane_g4_ParamLimits

0x4a70,	// (0x0005dc66) main_mp3_pane_g4

0xea78,	// (0x00067c6e) main_mp3_pane_g5_ParamLimits

0xea78,	// (0x00067c6e) main_mp3_pane_g5

0xea86,	// (0x00067c7c) main_mp3_pane_g6_ParamLimits

0xea86,	// (0x00067c7c) main_mp3_pane_g6

0xea93,	// (0x00067c89) main_mp3_pane_g7_ParamLimits

0xea93,	// (0x00067c89) main_mp3_pane_g7

0xea9f,	// (0x00067c95) main_mp3_pane_g8_ParamLimits

0xea9f,	// (0x00067c95) main_mp3_pane_g8

0xf629,	// (0x0006881f) main_mp3_pane_g_ParamLimits

0x4a7c,	// (0x0005dc72) main_mp3_pane_t2

0x4a8a,	// (0x0005dc80) main_mp3_pane_t3

0xeab9,	// (0x00067caf) main_mp3_pane_t4

0xeac7,	// (0x00067cbd) main_mp3_pane_t5

0x0005,

0xf63a,	// (0x00068830) main_mp3_pane_t

0xead5,	// (0x00067ccb) mup_progress_pane_cp01

0x97f7,	// (0x000629ed) aid_zoom_text_secondary2

0xe8cc,	// (0x00067ac2) list_cale_ev2_pane

0xe8d4,	// (0x00067aca) scroll_pane_cp023_ParamLimits

0x4bc8,	// (0x0005ddbe) field_cale_ev2_pane_ParamLimits

0x4bc8,	// (0x0005ddbe) field_cale_ev2_pane

0x4be0,	// (0x0005ddd6) field_cale_ev2_pane_g1_ParamLimits

0x4be0,	// (0x0005ddd6) field_cale_ev2_pane_g1

0x4bec,	// (0x0005dde2) field_cale_ev2_pane_g2_ParamLimits

0x4bec,	// (0x0005dde2) field_cale_ev2_pane_g2

0x4c04,	// (0x0005ddfa) field_cale_ev2_pane_g3_ParamLimits

0x4c04,	// (0x0005ddfa) field_cale_ev2_pane_g3

0x0003,

0xf65b,	// (0x00068851) field_cale_ev2_pane_g_ParamLimits

0xf65b,	// (0x00068851) field_cale_ev2_pane_g

0x4c28,	// (0x0005de1e) field_cale_ev2_pane_t1_ParamLimits

0x4c28,	// (0x0005de1e) field_cale_ev2_pane_t1

0x4c3f,	// (0x0005de35) field_cale_ev2_pane_t2_ParamLimits

0x4c3f,	// (0x0005de35) field_cale_ev2_pane_t2

0x0001,

0xf664,	// (0x0006885a) field_cale_ev2_pane_t_ParamLimits

0xf664,	// (0x0006885a) field_cale_ev2_pane_t

0x3699,	// (0x0005c88f) main_postcard_pane_g5_ParamLimits

0x3699,	// (0x0005c88f) main_postcard_pane_g5

0x36ad,	// (0x0005c8a3) main_postcard_pane_g6_ParamLimits

0x36ad,	// (0x0005c8a3) main_postcard_pane_g6

0x1aa3,	// (0x0005ac99) camera2_autofocus_pane_cp_ParamLimits

0x1aa3,	// (0x0005ac99) camera2_autofocus_pane_cp

0x983f,	// (0x00062a35) main_mup3_pane

0x4c74,	// (0x0005de6a) main_mup3_pane_g1_ParamLimits

0x4c74,	// (0x0005de6a) main_mup3_pane_g1

0x4c96,	// (0x0005de8c) main_mup3_pane_g2_ParamLimits

0x4c96,	// (0x0005de8c) main_mup3_pane_g2

0x4d09,	// (0x0005deff) main_mup3_pane_g3_ParamLimits

0x4d09,	// (0x0005deff) main_mup3_pane_g3

0x4d47,	// (0x0005df3d) main_mup3_pane_g4_ParamLimits

0x4d47,	// (0x0005df3d) main_mup3_pane_g4

0x4d85,	// (0x0005df7b) main_mup3_pane_g5_ParamLimits

0x4d85,	// (0x0005df7b) main_mup3_pane_g5

0x4dc3,	// (0x0005dfb9) main_mup3_pane_g6_ParamLimits

0x4dc3,	// (0x0005dfb9) main_mup3_pane_g6

0xeadd,	// (0x00067cd3) main_mup3_pane_g7_ParamLimits

0xeadd,	// (0x00067cd3) main_mup3_pane_g7

0x0007,

0xf674,	// (0x0006886a) main_mup3_pane_g_ParamLimits

0xf674,	// (0x0006886a) main_mup3_pane_g

0x4e37,	// (0x0005e02d) main_mup3_pane_t1_ParamLimits

0x4e37,	// (0x0005e02d) main_mup3_pane_t1

0x4e9d,	// (0x0005e093) main_mup3_pane_t2_ParamLimits

0x4e9d,	// (0x0005e093) main_mup3_pane_t2

0x4f63,	// (0x0005e159) main_mup3_pane_t4_ParamLimits

0x4f63,	// (0x0005e159) main_mup3_pane_t4

0x4fb1,	// (0x0005e1a7) main_mup3_pane_t5_ParamLimits

0x4fb1,	// (0x0005e1a7) main_mup3_pane_t5

0x505f,	// (0x0005e255) main_mup3_pane_t6_ParamLimits

0x505f,	// (0x0005e255) main_mup3_pane_t6

0x0005,

0xf685,	// (0x0006887b) main_mup3_pane_t_ParamLimits

0xf685,	// (0x0006887b) main_mup3_pane_t

0x5113,	// (0x0005e309) mup3_progress_pane_ParamLimits

0x5113,	// (0x0005e309) mup3_progress_pane

0x518f,	// (0x0005e385) popup_mup3_control_window_ParamLimits

0x518f,	// (0x0005e385) popup_mup3_control_window

0xeaeb,	// (0x00067ce1) popup_mup3_text_window

0x51bd,	// (0x0005e3b3) mup3_progress_pane_t1

0x51db,	// (0x0005e3d1) mup3_progress_pane_t2

0xeaf3,	// (0x00067ce9) mup3_progress_pane_t3

0x0002,

0xf692,	// (0x00068888) mup3_progress_pane_t

0xeb10,	// (0x00067d06) mup_progress_pane_cp03

0x97cd,	// (0x000629c3) bg_tb_trans_pane_cp04

0x51f9,	// (0x0005e3ef) mup3_volume_pane

0x5201,	// (0x0005e3f7) popup_mup3_control_window_g1

0xefb0,	// (0x000681a6) mup3_volume_pane_g1

0xefb9,	// (0x000681af) mup3_volume_pane_g2

0xefc2,	// (0x000681b8) mup3_volume_pane_g3

0x0002,

0xf699,	// (0x0006888f) mup3_volume_pane_g

0x97cd,	// (0x000629c3) bg_tb_trans_pane_cp03

0xeb20,	// (0x00067d16) popup_mup3_text_window_g1

0xeb28,	// (0x00067d1e) popup_mup3_text_window_t1

0xa044,	// (0x0006323a) list_calc_item_pane_g1_ParamLimits

0xe5a4,	// (0x0006779a) mup_volume_pane_cp_g1

0x4b92,	// (0x0005dd88) main_touch_calib_pane_t3

0x4ba4,	// (0x0005dd9a) main_touch_calib_pane_t4

0x4bb6,	// (0x0005ddac) main_touch_calib_pane_t5

0x97d7,	// (0x000629cd) aid_cell_size_toolbar2

0x97df,	// (0x000629d5) aid_popup3_width_pane

0x97e7,	// (0x000629dd) aid_zoom_text_msg_primary

0x1a82,	// (0x0005ac78) vorec_t7

0xa008,	// (0x000631fe) bg_calc_paper_pane_g1_ParamLimits

0xa014,	// (0x0006320a) bg_calc_paper_pane_g2_ParamLimits

0xa020,	// (0x00063216) bg_calc_paper_pane_g3_ParamLimits

0xa02c,	// (0x00063222) bg_calc_paper_pane_g4_ParamLimits

0xa038,	// (0x0006322e) bg_calc_paper_pane_g5_ParamLimits

0x1313,	// (0x0005a509) bg_calc_paper_pane_g6_ParamLimits

0x1322,	// (0x0005a518) bg_calc_paper_pane_g7_ParamLimits

0x1331,	// (0x0005a527) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0006834e) bg_calc_paper_pane_g_ParamLimits

0x1340,	// (0x0005a536) calc_bg_paper_pane_g9_ParamLimits

0x1bd5,	// (0x0005adcb) image_qvga_pane_ParamLimits

0x1bd5,	// (0x0005adcb) image_qvga_pane

0x9ef7,	// (0x000630ed) bg_popup_sub_pane_cp04_ParamLimits

0xaf1e,	// (0x00064114) popup_mup_playback_window_g1_ParamLimits

0xaf2a,	// (0x00064120) popup_mup_playback_window_t1_ParamLimits

0xaf3f,	// (0x00064135) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000686d8) popup_mup_playback_window_t_ParamLimits

0x46ee,	// (0x0005d8e4) main_mup2_pane_g3_ParamLimits

0x46ee,	// (0x0005d8e4) main_mup2_pane_g3

0x1fb3,	// (0x0005b1a9) popup_toolbar_window_cp04

0xb2fc,	// (0x000644f2) popup_call2_audio_second_window_g3_ParamLimits

0xb2fc,	// (0x000644f2) popup_call2_audio_second_window_g3

0xda1d,	// (0x00066c13) popup_call2_audio_first_window_g4_ParamLimits

0xda1d,	// (0x00066c13) popup_call2_audio_first_window_g4

0xe09c,	// (0x00067292) popup_call2_audio_in_window_g4_ParamLimits

0xe09c,	// (0x00067292) popup_call2_audio_in_window_g4

0x37b8,	// (0x0005c9ae) aid_area_sk_bg_cut_ParamLimits

0x37b8,	// (0x0005c9ae) aid_area_sk_bg_cut

0xaf54,	// (0x0006414a) aid_area_sk_bg_cut_2_ParamLimits

0xaf54,	// (0x0006414a) aid_area_sk_bg_cut_2

0x49b6,	// (0x0005dbac) aid_placing_details_win

0x49be,	// (0x0005dbb4) aid_placing_details_win_2

0xe98a,	// (0x00067b80) camera2_autofocus_pane_g1_ParamLimits

0x0f8c,	// (0x0005a182) popup_fixed_preview_cale_window_ParamLimits

0x0f8c,	// (0x0005a182) popup_fixed_preview_cale_window

0xacf2,	// (0x00063ee8) navi_slider_pane_g3

0xacfb,	// (0x00063ef1) navi_slider_pane_g4

0xad04,	// (0x00063efa) navi_slider_pane_g5

0xacf2,	// (0x00063ee8) navi_slider_pane_g6

0xad0d,	// (0x00063f03) navi_slider_pane_g7

0xae13,	// (0x00064009) mup_scale_pane_g3

0xae1c,	// (0x00064012) mup_scale_pane_g4

0xae25,	// (0x0006401b) mup_scale_pane_g5

0x3495,	// (0x0005c68b) mup_scale_pane_g6

0x349e,	// (0x0005c694) mup_scale_pane_g7

0xacf2,	// (0x00063ee8) cams2_slider_pane_g3

0xe626,	// (0x0006781c) cams2_slider_pane_g4

0xb799,	// (0x0006498f) cams2_slider_pane_g5

0xacf2,	// (0x00063ee8) cams2_slider_pane_g6

0xb7a1,	// (0x00064997) cams2_slider_pane_g7

0xe849,	// (0x00067a3f) camera2_autofocus_pane_cp_g1

0xe43d,	// (0x00067633) bg_popup_preview_window_pane_cp02_ParamLimits

0xe43d,	// (0x00067633) bg_popup_preview_window_pane_cp02

0xeb36,	// (0x00067d2c) list_fp_cale_pane_ParamLimits

0xeb36,	// (0x00067d2c) list_fp_cale_pane

0xeb42,	// (0x00067d38) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb42,	// (0x00067d38) popup_fixed_preview_cale_window_t1

0x520a,	// (0x0005e400) popup_fixed_preview_cale_window_t2_ParamLimits

0x520a,	// (0x0005e400) popup_fixed_preview_cale_window_t2

0x521f,	// (0x0005e415) popup_fixed_preview_cale_window_t3_ParamLimits

0x521f,	// (0x0005e415) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a0,	// (0x00068896) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a0,	// (0x00068896) popup_fixed_preview_cale_window_t

0x5234,	// (0x0005e42a) list_single_fp_cale_pane_ParamLimits

0x5234,	// (0x0005e42a) list_single_fp_cale_pane

0xeb60,	// (0x00067d56) list_single_fp_cale_pane_g1_ParamLimits

0xeb60,	// (0x00067d56) list_single_fp_cale_pane_g1

0xeb6c,	// (0x00067d62) list_single_fp_cale_pane_g2_ParamLimits

0xeb6c,	// (0x00067d62) list_single_fp_cale_pane_g2

0x0002,

0x0534,	// (0x0005972a) list_single_fp_cale_pane_g_ParamLimits

0x0534,	// (0x0005972a) list_single_fp_cale_pane_g

0xeb85,	// (0x00067d7b) list_single_fp_cale_pane_t1_ParamLimits

0xeb85,	// (0x00067d7b) list_single_fp_cale_pane_t1

0xeb97,	// (0x00067d8d) list_single_fp_cale_pane_t2_ParamLimits

0xeb97,	// (0x00067d8d) list_single_fp_cale_pane_t2

0x0001,

0x053b,	// (0x00059731) list_single_fp_cale_pane_t_ParamLimits

0x053b,	// (0x00059731) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x984d,	// (0x00062a43) main_dialer_pane

0x5247,	// (0x0005e43d) aid_cell_size_keypad

0x5251,	// (0x0005e447) dialer_ne_pane

0x5259,	// (0x0005e44f) grid_dialer_command_1_pane

0x5261,	// (0x0005e457) grid_dialer_command_2_pane

0x5269,	// (0x0005e45f) grid_dialer_keypad_pane

0x5279,	// (0x0005e46f) bg_popup_call_pane_cp06_ParamLimits

0x5279,	// (0x0005e46f) bg_popup_call_pane_cp06

0x5285,	// (0x0005e47b) dialer_ne_clear_pane_ParamLimits

0x5285,	// (0x0005e47b) dialer_ne_clear_pane

0xebca,	// (0x00067dc0) dialer_ne_pane_g1

0xebd2,	// (0x00067dc8) dialer_ne_pane_t1_ParamLimits

0xebd2,	// (0x00067dc8) dialer_ne_pane_t1

0x5291,	// (0x0005e487) dialer_ne_pane_t2_ParamLimits

0x5291,	// (0x0005e487) dialer_ne_pane_t2

0x52bb,	// (0x0005e4b1) dialer_ne_pane_t3_ParamLimits

0x52bb,	// (0x0005e4b1) dialer_ne_pane_t3

0x0002,

0xf6a7,	// (0x0006889d) dialer_ne_pane_t_ParamLimits

0xf6a7,	// (0x0006889d) dialer_ne_pane_t

0x52eb,	// (0x0005e4e1) dialer_ne_pane_t3_copy1_ParamLimits

0x52eb,	// (0x0005e4e1) dialer_ne_pane_t3_copy1

0x531a,	// (0x0005e510) cell_dialer_keypad_pane_ParamLimits

0x531a,	// (0x0005e510) cell_dialer_keypad_pane

0x532f,	// (0x0005e525) cell_dialer_command_1_pane_ParamLimits

0x532f,	// (0x0005e525) cell_dialer_command_1_pane

0x5345,	// (0x0005e53b) cell_dialer_command_2_pane_ParamLimits

0x5345,	// (0x0005e53b) cell_dialer_command_2_pane

0xebe4,	// (0x00067dda) bg_button_pane_cp02_ParamLimits

0xebe4,	// (0x00067dda) bg_button_pane_cp02

0x5354,	// (0x0005e54a) cell_dialer_keypad_pane_g1_ParamLimits

0x5354,	// (0x0005e54a) cell_dialer_keypad_pane_g1

0xebe4,	// (0x00067dda) bg_button_pane_cp03_ParamLimits

0xebe4,	// (0x00067dda) bg_button_pane_cp03

0x5369,	// (0x0005e55f) cell_dialer_command_1_pane_g1_ParamLimits

0x5369,	// (0x0005e55f) cell_dialer_command_1_pane_g1

0xebf0,	// (0x00067de6) bg_button_pane_cp04

0x537c,	// (0x0005e572) cell_dialer_command_2_pane_g1

0xa211,	// (0x00063407) bg_button_pane_cp06

0xebf8,	// (0x00067dee) dialer_ne_clear_pane_g1

0xabbe,	// (0x00063db4) navi_pane_g2

0xabec,	// (0x00063de2) navi_pane_g3

0x0002,

0xf3e5,	// (0x000685db) navi_pane_g

0xac79,	// (0x00063e6f) navi_pane_mv_g2

0xaca0,	// (0x00063e96) navi_pane_mv_g5

0x30a1,	// (0x0005c297) navi_pane_mv_t1

0x9fea,	// (0x000631e0) main_clock2_pane

0x53c1,	// (0x0005e5b7) main_clock2_list_pane_ParamLimits

0x53c1,	// (0x0005e5b7) main_clock2_list_pane

0x53f3,	// (0x0005e5e9) main_clock2_pane_t1_ParamLimits

0x53f3,	// (0x0005e5e9) main_clock2_pane_t1

0x542d,	// (0x0005e623) main_clock2_pane_t2_ParamLimits

0x542d,	// (0x0005e623) main_clock2_pane_t2

0x0004,

0xf6ae,	// (0x000688a4) main_clock2_pane_t_ParamLimits

0xf6ae,	// (0x000688a4) main_clock2_pane_t

0x54c1,	// (0x0005e6b7) popup_clock_analogue_window_cp03_ParamLimits

0x54c1,	// (0x0005e6b7) popup_clock_analogue_window_cp03

0x54e5,	// (0x0005e6db) popup_clock_digital_window_cp02_ParamLimits

0x54e5,	// (0x0005e6db) popup_clock_digital_window_cp02

0x5556,	// (0x0005e74c) main_clock2_list_single_pane_ParamLimits

0x5556,	// (0x0005e74c) main_clock2_list_single_pane

0xa211,	// (0x00063407) list_highlight_pane_cp05

0xec30,	// (0x00067e26) main_clock2_list_single_pane_t1

0x1fb3,	// (0x0005b1a9) popup_toolbar_window_cp04_ParamLimits

0x4a17,	// (0x0005dc0d) camera2_autofocus_pane_g2_ParamLimits

0x4a17,	// (0x0005dc0d) camera2_autofocus_pane_g2

0x4a23,	// (0x0005dc19) camera2_autofocus_pane_g3_ParamLimits

0x4a23,	// (0x0005dc19) camera2_autofocus_pane_g3

0x4a2f,	// (0x0005dc25) camera2_autofocus_pane_g4_ParamLimits

0x4a2f,	// (0x0005dc25) camera2_autofocus_pane_g4

0x4a3b,	// (0x0005dc31) camera2_autofocus_pane_g5_ParamLimits

0x4a3b,	// (0x0005dc31) camera2_autofocus_pane_g5

0x0004,

0xf615,	// (0x0006880b) camera2_autofocus_pane_g_ParamLimits

0xf615,	// (0x0006880b) camera2_autofocus_pane_g

0x4c54,	// (0x0005de4a) camera2_autofocus_pane_cp_g2

0x4c5c,	// (0x0005de52) camera2_autofocus_pane_cp_g3

0x4c64,	// (0x0005de5a) camera2_autofocus_pane_cp_g4

0x4c6c,	// (0x0005de62) camera2_autofocus_pane_cp_g5

0x0004,

0xf669,	// (0x0006885f) camera2_autofocus_pane_cp_g

0x5271,	// (0x0005e467) popup_dialer_spcha_window

0x97cd,	// (0x000629c3) bg_popup_sub_pane_cp07

0xec3e,	// (0x00067e34) list_spcha_pane

0xec46,	// (0x00067e3c) list_single_spcha_pane_ParamLimits

0xec46,	// (0x00067e3c) list_single_spcha_pane

0x97cd,	// (0x000629c3) list_highlight_pane_cp06

0xec57,	// (0x00067e4d) list_single_spcha_pane_t1

0xde46,	// (0x0006703c) popup_call2_audio_out_window_g4_ParamLimits

0xde46,	// (0x0006703c) popup_call2_audio_out_window_g4

0x984d,	// (0x00062a43) main_imed2_pane

0xb6c0,	// (0x000648b6) popup_imed_adjust2_window

0x3f1c,	// (0x0005d112) popup_imed_trans_window_ParamLimits

0x3f1c,	// (0x0005d112) popup_imed_trans_window

0xe68d,	// (0x00067883) popup_blid_sat_info2_window_t1

0xe69b,	// (0x00067891) popup_blid_sat_info2_window_t2

0x000a,

0x0425,	// (0x0005961b) popup_blid_sat_info2_window_t

0x5600,	// (0x0005e7f6) aid_size_cell_colour_35

0x5620,	// (0x0005e816) aid_size_cell_colour_112

0x5640,	// (0x0005e836) aid_size_cell_effect

0xe449,	// (0x0006763f) bg_tb_trans_pane_cp02

0xa6ff,	// (0x000638f5) heading_imed_pane

0x565f,	// (0x0005e855) listscroll_imed_pane

0xec65,	// (0x00067e5b) heading_imed_pane_g1

0xec6d,	// (0x00067e63) heading_imed_pane_t1

0xec7b,	// (0x00067e71) grid_imed_colour_35_pane_ParamLimits

0xec7b,	// (0x00067e71) grid_imed_colour_35_pane

0x566b,	// (0x0005e861) grid_imed_effect_pane

0xec8e,	// (0x00067e84) list_imed_aspect_pane

0x5680,	// (0x0005e876) scroll_pane_cp027_ParamLimits

0x5680,	// (0x0005e876) scroll_pane_cp027

0x5691,	// (0x0005e887) cell_imed_effect_pane_ParamLimits

0x5691,	// (0x0005e887) cell_imed_effect_pane

0xec96,	// (0x00067e8c) cell_imed_colour_pane_ParamLimits

0xec96,	// (0x00067e8c) cell_imed_colour_pane

0xecd0,	// (0x00067ec6) cell_imed_colour_pane_g1_ParamLimits

0xecd0,	// (0x00067ec6) cell_imed_colour_pane_g1

0xece1,	// (0x00067ed7) hgihlgiht_grid_pane_cp016_ParamLimits

0xece1,	// (0x00067ed7) hgihlgiht_grid_pane_cp016

0x56b6,	// (0x0005e8ac) cell_imed_effect_pane_g1

0x56be,	// (0x0005e8b4) grid_highlight_pane_cp017

0xecf1,	// (0x00067ee7) list_imed_single_pane_ParamLimits

0xecf1,	// (0x00067ee7) list_imed_single_pane

0x97cd,	// (0x000629c3) list_highlight_pane_cp07

0xed04,	// (0x00067efa) list_imed_aspect_pane_comp1_t1

0xe449,	// (0x0006763f) bg_tb_trans_pane_cp05

0xed24,	// (0x00067f1a) popup_imed_adjust2_window_g1

0xed4b,	// (0x00067f41) popup_imed_adjust2_window_t1

0xed63,	// (0x00067f59) slider_imed_adjust_pane

0xed77,	// (0x00067f6d) slider_imed_adjust_pane_g1

0xed87,	// (0x00067f7d) slider_imed_adjust_pane_g2

0xed97,	// (0x00067f8d) slider_imed_adjust_pane_g3

0xeda8,	// (0x00067f9e) slider_imed_adjust_pane_g4

0x0003,

0x0569,	// (0x0005975f) slider_imed_adjust_pane_g

0x56c7,	// (0x0005e8bd) aid_size_cell_clipart2

0x56d2,	// (0x0005e8c8) grid_imed_clipart_pane

0xedb9,	// (0x00067faf) scroll_pane_cp031

0x56dc,	// (0x0005e8d2) cell_imed_clipart_pane_ParamLimits

0x56dc,	// (0x0005e8d2) cell_imed_clipart_pane

0x56f1,	// (0x0005e8e7) cell_imed_clipart_pane_g1

0x97cd,	// (0x000629c3) grid_highlight_pane_cp014

0x53d4,	// (0x0005e5ca) main_clock2_pane_g1_ParamLimits

0x53d4,	// (0x0005e5ca) main_clock2_pane_g1

0x5501,	// (0x0005e6f7) aid_call2_pane_cp10

0x5513,	// (0x0005e709) aid_call_pane_cp10

0xab1f,	// (0x00063d15) popup_clock_analogue_window_cp10_g1

0xab1f,	// (0x00063d15) popup_clock_analogue_window_cp10_g2

0x5525,	// (0x0005e71b) popup_clock_analogue_window_cp10_g3

0x5525,	// (0x0005e71b) popup_clock_analogue_window_cp10_g4

0xab1f,	// (0x00063d15) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6b9,	// (0x000688af) popup_clock_analogue_window_cp10_g

0x5537,	// (0x0005e72d) popup_clock_analogue_window_cp10_t1

0x5568,	// (0x0005e75e) clock_digital_number_pane_cp10_ParamLimits

0x5568,	// (0x0005e75e) clock_digital_number_pane_cp10

0x5580,	// (0x0005e776) clock_digital_number_pane_cp11_ParamLimits

0x5580,	// (0x0005e776) clock_digital_number_pane_cp11

0x5598,	// (0x0005e78e) clock_digital_number_pane_cp12_ParamLimits

0x5598,	// (0x0005e78e) clock_digital_number_pane_cp12

0x55b0,	// (0x0005e7a6) clock_digital_number_pane_cp13_ParamLimits

0x55b0,	// (0x0005e7a6) clock_digital_number_pane_cp13

0x55c8,	// (0x0005e7be) clock_digital_separator_pane_cp10_ParamLimits

0x55c8,	// (0x0005e7be) clock_digital_separator_pane_cp10

0x55e0,	// (0x0005e7d6) popup_clock_digital_window_cp02_t1_ParamLimits

0x55e0,	// (0x0005e7d6) popup_clock_digital_window_cp02_t1

0x9eef,	// (0x000630e5) clock_digital_number_pane_cp10_g1

0x9eef,	// (0x000630e5) clock_digital_number_pane_cp10_g2

0x0001,

0xf6c4,	// (0x000688ba) clock_digital_number_pane_cp10_g

0x9eef,	// (0x000630e5) clock_digital_separator_pane_cp10_g1

0x9eef,	// (0x000630e5) clock_digital_separator_pane_g2_cp10

0xaca8,	// (0x00063e9e) navi_pane_vded_g4

0xacb1,	// (0x00063ea7) navi_pane_vded_g5

0xacba,	// (0x00063eb0) navi_pane_vded_t1

0x984d,	// (0x00062a43) main_vded_pane

0x56fa,	// (0x0005e8f0) main_vded_pane_g1

0x5702,	// (0x0005e8f8) main_vded_pane_g2

0x570a,	// (0x0005e900) main_vded_pane_g3

0x0002,

0xf6c9,	// (0x000688bf) main_vded_pane_g

0x5712,	// (0x0005e908) main_vded_pane_t1

0x5720,	// (0x0005e916) main_vded_pane_t2

0x0001,

0xf6d0,	// (0x000688c6) main_vded_pane_t

0x572e,	// (0x0005e924) vded_slider_pane

0x5736,	// (0x0005e92c) vded_video_pane

0xedc1,	// (0x00067fb7) vded_video_pane_g1

0x573e,	// (0x0005e934) vded_video_pane_g2

0xe849,	// (0x00067a3f) vded_video_pane_g3

0x0002,

0xf6d5,	// (0x000688cb) vded_video_pane_g

0xedcb,	// (0x00067fc1) vded_slider_pane_g1

0xe5a4,	// (0x0006779a) vded_slider_pane_g2

0xedd4,	// (0x00067fca) vded_slider_pane_g3

0xeddd,	// (0x00067fd3) vded_slider_pane_g4

0xede6,	// (0x00067fdc) vded_slider_pane_g5

0x0004,

0x058a,	// (0x00059780) vded_slider_pane_g

0x5179,	// (0x0005e36f) mup3_rocker_pane_ParamLimits

0x5179,	// (0x0005e36f) mup3_rocker_pane

0x5747,	// (0x0005e93d) mup3_control_keys_pane_g1

0x574f,	// (0x0005e945) mup3_control_keys_pane_g2

0x5757,	// (0x0005e94d) mup3_control_keys_pane_g3

0x575f,	// (0x0005e955) mup3_control_keys_pane_g4

0x0003,

0xf6dc,	// (0x000688d2) mup3_control_keys_pane_g

0x0fc3,	// (0x0005a1b9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fc3,	// (0x0005a1b9) popup_toolbar2_fixed_window_cp01

0x51a7,	// (0x0005e39d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x51a7,	// (0x0005e39d) popup_toolbar2_fixed_window_cp02

0xb46e,	// (0x00064664) popup_call2_audio_second_window_t4_ParamLimits

0xb46e,	// (0x00064664) popup_call2_audio_second_window_t4

0xdcb3,	// (0x00066ea9) popup_call2_audio_first_window_t6_ParamLimits

0xdcb3,	// (0x00066ea9) popup_call2_audio_first_window_t6

0xdf49,	// (0x0006713f) popup_call2_audio_out_window_t6_ParamLimits

0xdf49,	// (0x0006713f) popup_call2_audio_out_window_t6

0x984d,	// (0x00062a43) main_vitu_pane

0x576f,	// (0x0005e965) aid_size_cell_itu_ParamLimits

0x576f,	// (0x0005e965) aid_size_cell_itu

0xb6a2,	// (0x00064898) bg_popup_window_pane_cp08_ParamLimits

0xb6a2,	// (0x00064898) bg_popup_window_pane_cp08

0x5785,	// (0x0005e97b) field_vitu_entry_pane_ParamLimits

0x5785,	// (0x0005e97b) field_vitu_entry_pane

0x5798,	// (0x0005e98e) grid_vitu_function_pane_ParamLimits

0x5798,	// (0x0005e98e) grid_vitu_function_pane

0x57ad,	// (0x0005e9a3) grid_vitu_itu_pane_ParamLimits

0x57ad,	// (0x0005e9a3) grid_vitu_itu_pane

0x57c3,	// (0x0005e9b9) cell_vitu_itu_pane_ParamLimits

0x57c3,	// (0x0005e9b9) cell_vitu_itu_pane

0x57e5,	// (0x0005e9db) cell_vitu_function_pane_ParamLimits

0x57e5,	// (0x0005e9db) cell_vitu_function_pane

0xb6a2,	// (0x00064898) bg_popup_sub_pane_cp08_ParamLimits

0xb6a2,	// (0x00064898) bg_popup_sub_pane_cp08

0x57fe,	// (0x0005e9f4) field_vitu_entry_pane_t1_ParamLimits

0x57fe,	// (0x0005e9f4) field_vitu_entry_pane_t1

0xee07,	// (0x00067ffd) field_vitu_entry_pane_t2_ParamLimits

0xee07,	// (0x00067ffd) field_vitu_entry_pane_t2

0x0001,

0xf6e5,	// (0x000688db) field_vitu_entry_pane_t_ParamLimits

0xf6e5,	// (0x000688db) field_vitu_entry_pane_t

0xee24,	// (0x0006801a) bg_button_pane_cp05_ParamLimits

0xee24,	// (0x0006801a) bg_button_pane_cp05

0x581a,	// (0x0005ea10) cell_vitu_itu_pane_g1

0x5832,	// (0x0005ea28) cell_vitu_itu_pane_t1_ParamLimits

0x5832,	// (0x0005ea28) cell_vitu_itu_pane_t1

0x5844,	// (0x0005ea3a) cell_vitu_itu_pane_t2_ParamLimits

0x5844,	// (0x0005ea3a) cell_vitu_itu_pane_t2

0x0002,

0xf6ea,	// (0x000688e0) cell_vitu_itu_pane_t_ParamLimits

0xf6ea,	// (0x000688e0) cell_vitu_itu_pane_t

0xee32,	// (0x00068028) bg_button_pane_cp07

0x5879,	// (0x0005ea6f) cell_vitu_function_pane_g1

0x9f8a,	// (0x00063180) main_calc_pane_g1

0x0e0e,	// (0x0005a004) aid_visual_content_pane

0x984d,	// (0x00062a43) main_vradio_pane

0x5882,	// (0x0005ea78) main_vradio_pane_g1_ParamLimits

0x5882,	// (0x0005ea78) main_vradio_pane_g1

0xee3c,	// (0x00068032) main_vradio_pane_g2_ParamLimits

0xee3c,	// (0x00068032) main_vradio_pane_g2

0x0001,

0xf6f1,	// (0x000688e7) main_vradio_pane_g_ParamLimits

0xf6f1,	// (0x000688e7) main_vradio_pane_g

0x5898,	// (0x0005ea8e) main_vradio_pane_t1_ParamLimits

0x5898,	// (0x0005ea8e) main_vradio_pane_t1

0x58ad,	// (0x0005eaa3) main_vradio_pane_t2_ParamLimits

0x58ad,	// (0x0005eaa3) main_vradio_pane_t2

0xee49,	// (0x0006803f) main_vradio_pane_t3_ParamLimits

0xee49,	// (0x0006803f) main_vradio_pane_t3

0x0002,

0xf6f6,	// (0x000688ec) main_vradio_pane_t_ParamLimits

0xf6f6,	// (0x000688ec) main_vradio_pane_t

0x58c2,	// (0x0005eab8) vradio_rocker_control_pane_ParamLimits

0x58c2,	// (0x0005eab8) vradio_rocker_control_pane

0x58d4,	// (0x0005eaca) vradio_station_info_pane_ParamLimits

0x58d4,	// (0x0005eaca) vradio_station_info_pane

0xee5b,	// (0x00068051) vradio_frequency_info_pane_ParamLimits

0xee5b,	// (0x00068051) vradio_frequency_info_pane

0xe849,	// (0x00067a3f) vradio_station_info_pane_g1

0xee6a,	// (0x00068060) vradio_station_info_pane_t1_ParamLimits

0xee6a,	// (0x00068060) vradio_station_info_pane_t1

0xee8c,	// (0x00068082) vradio_station_info_pane_t2_ParamLimits

0xee8c,	// (0x00068082) vradio_station_info_pane_t2

0x0001,

0x05bb,	// (0x000597b1) vradio_station_info_pane_t_ParamLimits

0x05bb,	// (0x000597b1) vradio_station_info_pane_t

0xee9e,	// (0x00068094) vradio_tuning_pane

0xeea6,	// (0x0006809c) vradio_rocker_control_pane_g1

0xeeae,	// (0x000680a4) vradio_rocker_control_pane_g2

0xeeb6,	// (0x000680ac) vradio_rocker_control_pane_g3

0xeebe,	// (0x000680b4) vradio_rocker_control_pane_g4

0xeec6,	// (0x000680bc) vradio_rocker_control_pane_g5

0x0004,

0x05c0,	// (0x000597b6) vradio_rocker_control_pane_g

0x58e4,	// (0x0005eada) vradio_frequency_info_pane_g1

0xeece,	// (0x000680c4) vradio_frequency_info_pane_t1_ParamLimits

0xeece,	// (0x000680c4) vradio_frequency_info_pane_t1

0x58ee,	// (0x0005eae4) vradio_tuning_pane_g1

0x58f7,	// (0x0005eaed) vradio_tuning_pane_t1

0x97ff,	// (0x000629f5) area_side_right_pane_ParamLimits

0x97ff,	// (0x000629f5) area_side_right_pane

0xe404,	// (0x000675fa) status_small_pane_g1

0xe40c,	// (0x00067602) status_small_pane_g2

0xe415,	// (0x0006760b) status_small_pane_g3

0xe41e,	// (0x00067614) status_small_pane_g4

0x0003,

0x037b,	// (0x00059571) status_small_pane_g

0xe427,	// (0x0006761d) status_small_pane_t1

0x984d,	// (0x00062a43) main_video3_pane

0xeee2,	// (0x000680d8) cams_zoom_vslider_pane

0xeeea,	// (0x000680e0) image3_wide_pane_ParamLimits

0xeeea,	// (0x000680e0) image3_wide_pane

0xef04,	// (0x000680fa) image3_wide_small_pane

0xef0e,	// (0x00068104) main_video3_pane_g1_ParamLimits

0xef0e,	// (0x00068104) main_video3_pane_g1

0xef2a,	// (0x00068120) main_video3_pane_g2_ParamLimits

0xef2a,	// (0x00068120) main_video3_pane_g2

0x0001,

0x05cb,	// (0x000597c1) main_video3_pane_g_ParamLimits

0x05cb,	// (0x000597c1) main_video3_pane_g

0xef46,	// (0x0006813c) main_video3_pane_t1_ParamLimits

0xef46,	// (0x0006813c) main_video3_pane_t1

0xef71,	// (0x00068167) main_video3_pane_t2_ParamLimits

0xef71,	// (0x00068167) main_video3_pane_t2

0xefcb,	// (0x000681c1) main_video3_pane_t3_ParamLimits

0xefcb,	// (0x000681c1) main_video3_pane_t3

0x0002,

0xf6fd,	// (0x000688f3) main_video3_pane_t_ParamLimits

0xf6fd,	// (0x000688f3) main_video3_pane_t

0xeff6,	// (0x000681ec) cams_zoom_vslider_pane_g1

0xefff,	// (0x000681f5) cams_zoom_vslider_pane_g2

0x0001,

0xf704,	// (0x000688fa) cams_zoom_vslider_pane_g

0xf007,	// (0x000681fd) small_slider_vertical_pane

0xe849,	// (0x00067a3f) small_slider_vertical_pane_g1

0xe849,	// (0x00067a3f) small_slider_vertical_pane_g2

0xf00f,	// (0x00068205) small_slider_vertical_pane_g3

0x0002,

0xf709,	// (0x000688ff) small_slider_vertical_pane_g

0x984d,	// (0x00062a43) main_hwr_training_pane

0xf018,	// (0x0006820e) hwr_training_instruct_pane_ParamLimits

0xf018,	// (0x0006820e) hwr_training_instruct_pane

0x5906,	// (0x0005eafc) hwr_training_navi_pane_ParamLimits

0x5906,	// (0x0005eafc) hwr_training_navi_pane

0x591d,	// (0x0005eb13) hwr_training_write_pane_ParamLimits

0x591d,	// (0x0005eb13) hwr_training_write_pane

0x97cd,	// (0x000629c3) bg_frame_shadow_pane

0xf047,	// (0x0006823d) hwr_training_write_pane_g1

0xf04f,	// (0x00068245) hwr_training_write_pane_g2

0xf057,	// (0x0006824d) hwr_training_write_pane_g3

0xf05f,	// (0x00068255) hwr_training_write_pane_g4

0xf067,	// (0x0006825d) hwr_training_write_pane_g5

0xf06f,	// (0x00068265) hwr_training_write_pane_g6

0xf077,	// (0x0006826d) hwr_training_write_pane_g7

0x0006,

0xf710,	// (0x00068906) hwr_training_write_pane_g

0xd543,	// (0x00066739) hwr_training_navi_pane_g1_ParamLimits

0xd543,	// (0x00066739) hwr_training_navi_pane_g1

0xd555,	// (0x0006674b) hwr_training_navi_pane_g2_ParamLimits

0xd555,	// (0x0006674b) hwr_training_navi_pane_g2

0xd567,	// (0x0006675d) hwr_training_navi_pane_g3_ParamLimits

0xd567,	// (0x0006675d) hwr_training_navi_pane_g3

0xd577,	// (0x0006676d) hwr_training_navi_pane_g4_ParamLimits

0xd577,	// (0x0006676d) hwr_training_navi_pane_g4

0x0004,

0xf71f,	// (0x00068915) hwr_training_navi_pane_g_ParamLimits

0xf71f,	// (0x00068915) hwr_training_navi_pane_g

0xd584,	// (0x0006677a) hwr_training_navi_pane_t1

0x595d,	// (0x0005eb53) list_single_hwr_training_instruct_pane_ParamLimits

0x595d,	// (0x0005eb53) list_single_hwr_training_instruct_pane

0xf07f,	// (0x00068275) list_single_hwr_training_instruct_pane_t1

0xe789,	// (0x0006797f) bg_frame_shadow_pane_g1

0xf08e,	// (0x00068284) bg_frame_shadow_pane_g2

0xf096,	// (0x0006828c) bg_frame_shadow_pane_g3

0xf09e,	// (0x00068294) bg_frame_shadow_pane_g4

0xf0a6,	// (0x0006829c) bg_frame_shadow_pane_g5

0xf0ae,	// (0x000682a4) bg_frame_shadow_pane_g6

0xf0b6,	// (0x000682ac) bg_frame_shadow_pane_g7

0xa0e3,	// (0x000632d9) bg_frame_shadow_pane_g8

0x0007,

0xf72a,	// (0x00068920) bg_frame_shadow_pane_g

0x984d,	// (0x00062a43) main_video_tele_dialer_pane

0x5970,	// (0x0005eb66) aid_size_cell_video_keypad_ParamLimits

0x5970,	// (0x0005eb66) aid_size_cell_video_keypad

0x598a,	// (0x0005eb80) grid_video_dialer_keypad_pane_ParamLimits

0x598a,	// (0x0005eb80) grid_video_dialer_keypad_pane

0x59cc,	// (0x0005ebc2) video_down_pane_cp_ParamLimits

0x59cc,	// (0x0005ebc2) video_down_pane_cp

0x59fc,	// (0x0005ebf2) cell_video_dialer_keypad_pane_ParamLimits

0x59fc,	// (0x0005ebf2) cell_video_dialer_keypad_pane

0xf0be,	// (0x000682b4) bg_button_pane_cp08_ParamLimits

0xf0be,	// (0x000682b4) bg_button_pane_cp08

0x5a1e,	// (0x0005ec14) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5a1e,	// (0x0005ec14) cell_video_dialer_keypad_pane_g1

0x5163,	// (0x0005e359) mup3_rocker2_pane_ParamLimits

0x5163,	// (0x0005e359) mup3_rocker2_pane

0xe849,	// (0x00067a3f) mup3_rocker2_pane_g1

0x3e0d,	// (0x0005d003) main_dialer2_pane

0x984d,	// (0x00062a43) main_mp4_pane

0xd59a,	// (0x00066790) main_mp4_pane_g1_ParamLimits

0xd59a,	// (0x00066790) main_mp4_pane_g1

0xd59a,	// (0x00066790) main_mp4_pane_g2_ParamLimits

0xd59a,	// (0x00066790) main_mp4_pane_g2

0x5a59,	// (0x0005ec4f) main_mp4_pane_g3_ParamLimits

0x5a59,	// (0x0005ec4f) main_mp4_pane_g3

0xd5a8,	// (0x0006679e) main_mp4_pane_g4_ParamLimits

0xd5a8,	// (0x0006679e) main_mp4_pane_g4

0xd5d0,	// (0x000667c6) main_mp4_pane_g5_ParamLimits

0xd5d0,	// (0x000667c6) main_mp4_pane_g5

0x0005,

0xf74a,	// (0x00068940) main_mp4_pane_g_ParamLimits

0xf74a,	// (0x00068940) main_mp4_pane_g

0xd620,	// (0x00066816) main_mp4_pane_t1_ParamLimits

0xd620,	// (0x00066816) main_mp4_pane_t1

0xd678,	// (0x0006686e) main_mp4_pane_t2_ParamLimits

0xd678,	// (0x0006686e) main_mp4_pane_t2

0x5a89,	// (0x0005ec7f) main_mp4_pane_t3_ParamLimits

0x5a89,	// (0x0005ec7f) main_mp4_pane_t3

0xd6ca,	// (0x000668c0) main_mp4_pane_t4_ParamLimits

0xd6ca,	// (0x000668c0) main_mp4_pane_t4

0x0003,

0xf757,	// (0x0006894d) main_mp4_pane_t_ParamLimits

0xf757,	// (0x0006894d) main_mp4_pane_t

0xd70a,	// (0x00066900) mp4_progress_pane_ParamLimits

0xd70a,	// (0x00066900) mp4_progress_pane

0xd754,	// (0x0006694a) mp4_rocker_pane_ParamLimits

0xd754,	// (0x0006694a) mp4_rocker_pane

0x5ab1,	// (0x0005eca7) mp4_progress_pane_t1

0x5ac8,	// (0x0005ecbe) mp4_progress_pane_t2

0x0001,

0xf760,	// (0x00068956) mp4_progress_pane_t

0x5adf,	// (0x0005ecd5) mup_progress_pane_cp04

0xb7aa,	// (0x000649a0) mp4_rocker_pane_g1

0x5aeb,	// (0x0005ece1) aid_cell_size_keypad2_ParamLimits

0x5aeb,	// (0x0005ece1) aid_cell_size_keypad2

0x5b01,	// (0x0005ecf7) dialer2_ne_pane_ParamLimits

0x5b01,	// (0x0005ecf7) dialer2_ne_pane

0x5b15,	// (0x0005ed0b) grid_dialer2_keypad_pane_ParamLimits

0x5b15,	// (0x0005ed0b) grid_dialer2_keypad_pane

0xe636,	// (0x0006782c) bg_popup_call_pane_cp07_ParamLimits

0xe636,	// (0x0006782c) bg_popup_call_pane_cp07

0x5b2b,	// (0x0005ed21) dialer2_ne_pane_t1_ParamLimits

0x5b2b,	// (0x0005ed21) dialer2_ne_pane_t1

0x5b77,	// (0x0005ed6d) cell_dialer2_keypad_pane_ParamLimits

0x5b77,	// (0x0005ed6d) cell_dialer2_keypad_pane

0x5b99,	// (0x0005ed8f) bg_button_pane_pane_cp04_ParamLimits

0x5b99,	// (0x0005ed8f) bg_button_pane_pane_cp04

0x5ba5,	// (0x0005ed9b) cell_dialer2_keypad_pane_g1_ParamLimits

0x5ba5,	// (0x0005ed9b) cell_dialer2_keypad_pane_g1

0x1ea4,	// (0x0005b09a) aid_placing_vt_set_content_ParamLimits

0x1ea4,	// (0x0005b09a) aid_placing_vt_set_content

0x1ec6,	// (0x0005b0bc) aid_placing_vt_set_title_ParamLimits

0x1ec6,	// (0x0005b0bc) aid_placing_vt_set_title

0x984d,	// (0x00062a43) main_image3_pane

0x5c51,	// (0x0005ee47) area_side_right_pane_cp01_ParamLimits

0x5c51,	// (0x0005ee47) area_side_right_pane_cp01

0xd59a,	// (0x00066790) main_image3_pane_g1_ParamLimits

0xd59a,	// (0x00066790) main_image3_pane_g1

0x5c68,	// (0x0005ee5e) main_image3_pane_g2_ParamLimits

0x5c68,	// (0x0005ee5e) main_image3_pane_g2

0x5c8e,	// (0x0005ee84) main_image3_pane_g3_ParamLimits

0x5c8e,	// (0x0005ee84) main_image3_pane_g3

0x5cb4,	// (0x0005eeaa) main_image3_pane_g4_ParamLimits

0x5cb4,	// (0x0005eeaa) main_image3_pane_g4

0x0003,

0xf76f,	// (0x00068965) main_image3_pane_g_ParamLimits

0xf76f,	// (0x00068965) main_image3_pane_g

0x5cda,	// (0x0005eed0) main_image3_pane_t1_ParamLimits

0x5cda,	// (0x0005eed0) main_image3_pane_t1

0x5d32,	// (0x0005ef28) main_image3_pane_t2_ParamLimits

0x5d32,	// (0x0005ef28) main_image3_pane_t2

0x5d84,	// (0x0005ef7a) main_image3_pane_t3_ParamLimits

0x5d84,	// (0x0005ef7a) main_image3_pane_t3

0x0003,

0xf778,	// (0x0006896e) main_image3_pane_t_ParamLimits

0xf778,	// (0x0006896e) main_image3_pane_t

0xb6a2,	// (0x00064898) grid_sctrl_middle_pane_cp01_ParamLimits

0xb6a2,	// (0x00064898) grid_sctrl_middle_pane_cp01

0x5e04,	// (0x0005effa) cell_sctrl_middle_pane_cp01_ParamLimits

0x5e04,	// (0x0005effa) cell_sctrl_middle_pane_cp01

0x5e21,	// (0x0005f017) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5e21,	// (0x0005f017) cell_sctrl_middle_pane_cp01_g1

0x984d,	// (0x00062a43) main_call4_pane

0x5e37,	// (0x0005f02d) aid_size_button_call4_ParamLimits

0x5e37,	// (0x0005f02d) aid_size_button_call4

0x5e66,	// (0x0005f05c) call4_windows_pane_ParamLimits

0x5e66,	// (0x0005f05c) call4_windows_pane

0x5e82,	// (0x0005f078) grid_call4_button_pane_ParamLimits

0x5e82,	// (0x0005f078) grid_call4_button_pane

0x5ea1,	// (0x0005f097) call4_windows_conf_pane

0x5eb4,	// (0x0005f0aa) popup_call4_audio_first_window_ParamLimits

0x5eb4,	// (0x0005f0aa) popup_call4_audio_first_window

0x5ef4,	// (0x0005f0ea) popup_call4_audio_second_window_ParamLimits

0x5ef4,	// (0x0005f0ea) popup_call4_audio_second_window

0x5f06,	// (0x0005f0fc) popup_call4_audio_wait_window_ParamLimits

0x5f06,	// (0x0005f0fc) popup_call4_audio_wait_window

0x5f12,	// (0x0005f108) cell_call4_button_pane_ParamLimits

0x5f12,	// (0x0005f108) cell_call4_button_pane

0x5f37,	// (0x0005f12d) bg_button_pane_cp09_ParamLimits

0x5f37,	// (0x0005f12d) bg_button_pane_cp09

0x5f43,	// (0x0005f139) cell_call4_button_pane_g1_ParamLimits

0x5f43,	// (0x0005f139) cell_call4_button_pane_g1

0x5f69,	// (0x0005f15f) cell_call4_button_pane_t1_ParamLimits

0x5f69,	// (0x0005f15f) cell_call4_button_pane_t1

0x5fcd,	// (0x0005f1c3) popup_call4_audio_conf_window_ParamLimits

0x5fcd,	// (0x0005f1c3) popup_call4_audio_conf_window

0x51bd,	// (0x0005e3b3) mup3_progress_pane_t1_ParamLimits

0x51db,	// (0x0005e3d1) mup3_progress_pane_t2_ParamLimits

0xeaf3,	// (0x00067ce9) mup3_progress_pane_t3_ParamLimits

0xf692,	// (0x00068888) mup3_progress_pane_t_ParamLimits

0xeb10,	// (0x00067d06) mup_progress_pane_cp03_ParamLimits

0x5767,	// (0x0005e95d) mup3_control_keys_pane_g4_copy1

0xd738,	// (0x0006692e) mp4_rocker2_pane_ParamLimits

0xd738,	// (0x0006692e) mp4_rocker2_pane

0x5fe1,	// (0x0005f1d7) mp4_rocker2_pane_g1

0x5fe9,	// (0x0005f1df) mp4_rocker2_pane_g2

0xd7a4,	// (0x0006699a) mp4_rocker2_pane_g3

0xd7ac,	// (0x000669a2) mp4_rocker2_pane_g4

0xd7b4,	// (0x000669aa) mp4_rocker2_pane_g5

0x0004,

0xf781,	// (0x00068977) mp4_rocker2_pane_g

0x984d,	// (0x00062a43) main_camera4_pane

0x984d,	// (0x00062a43) main_video4_pane

0x599e,	// (0x0005eb94) main_video_tele_dialer_pane_t1_ParamLimits

0x599e,	// (0x0005eb94) main_video_tele_dialer_pane_t1

0x59b5,	// (0x0005ebab) main_video_tele_dialer_pane_t2_ParamLimits

0x59b5,	// (0x0005ebab) main_video_tele_dialer_pane_t2

0x0001,

0xf73b,	// (0x00068931) main_video_tele_dialer_pane_t_ParamLimits

0xf73b,	// (0x00068931) main_video_tele_dialer_pane_t

0x6005,	// (0x0005f1fb) cam4_autofocus_pane_ParamLimits

0x6005,	// (0x0005f1fb) cam4_autofocus_pane

0x6019,	// (0x0005f20f) cam4_image_uncrop_pane_ParamLimits

0x6019,	// (0x0005f20f) cam4_image_uncrop_pane

0x6030,	// (0x0005f226) cam4_indicators_pane_ParamLimits

0x6030,	// (0x0005f226) cam4_indicators_pane

0x6055,	// (0x0005f24b) main_camera4_pane_g1_ParamLimits

0x6055,	// (0x0005f24b) main_camera4_pane_g1

0x6067,	// (0x0005f25d) main_camera4_pane_g2_ParamLimits

0x6067,	// (0x0005f25d) main_camera4_pane_g2

0x607a,	// (0x0005f270) main_camera4_pane_g3_ParamLimits

0x607a,	// (0x0005f270) main_camera4_pane_g3

0x608d,	// (0x0005f283) main_camera4_pane_g4_ParamLimits

0x608d,	// (0x0005f283) main_camera4_pane_g4

0x60a0,	// (0x0005f296) main_camera4_pane_g5_ParamLimits

0x60a0,	// (0x0005f296) main_camera4_pane_g5

0x0005,

0xf78c,	// (0x00068982) main_camera4_pane_g_ParamLimits

0xf78c,	// (0x00068982) main_camera4_pane_g

0x60c4,	// (0x0005f2ba) main_camera4_pane_t1_ParamLimits

0x60c4,	// (0x0005f2ba) main_camera4_pane_t1

0xd7d6,	// (0x000669cc) bg_tb_trans_pane_cp06

0xd7ec,	// (0x000669e2) cam4_indicators_pane_g1

0xd7fd,	// (0x000669f3) cam4_indicators_pane_g2

0x0002,

0xf7a7,	// (0x0006899d) cam4_indicators_pane_g

0xd815,	// (0x00066a0b) cam4_indicators_pane_t1

0x612e,	// (0x0005f324) main_video4_pane_g1_ParamLimits

0x612e,	// (0x0005f324) main_video4_pane_g1

0x613d,	// (0x0005f333) main_video4_pane_g2_ParamLimits

0x613d,	// (0x0005f333) main_video4_pane_g2

0x614c,	// (0x0005f342) main_video4_pane_g3_ParamLimits

0x614c,	// (0x0005f342) main_video4_pane_g3

0x615b,	// (0x0005f351) main_video4_pane_g4_ParamLimits

0x615b,	// (0x0005f351) main_video4_pane_g4

0x0004,

0xf7ae,	// (0x000689a4) main_video4_pane_g_ParamLimits

0xf7ae,	// (0x000689a4) main_video4_pane_g

0x6179,	// (0x0005f36f) vid4_indicators_pane_ParamLimits

0x6179,	// (0x0005f36f) vid4_indicators_pane

0x61a1,	// (0x0005f397) video4_image_uncrop_cif_pane_ParamLimits

0x61a1,	// (0x0005f397) video4_image_uncrop_cif_pane

0x61b9,	// (0x0005f3af) video4_image_uncrop_nhd_pane_ParamLimits

0x61b9,	// (0x0005f3af) video4_image_uncrop_nhd_pane

0x6019,	// (0x0005f20f) video4_image_uncrop_vga_pane_ParamLimits

0x6019,	// (0x0005f20f) video4_image_uncrop_vga_pane

0x983f,	// (0x00062a35) bg_tb_trans_pane_cp07

0xd83f,	// (0x00066a35) vid4_indicators_pane_g1

0xd853,	// (0x00066a49) vid4_indicators_pane_g2

0xd867,	// (0x00066a5d) vid4_indicators_pane_g3

0x0004,

0xf7b9,	// (0x000689af) vid4_indicators_pane_g

0xd894,	// (0x00066a8a) vid4_indicators_pane_t1

0x61cd,	// (0x0005f3c3) cam4_autofocus_pane_g1

0x61d5,	// (0x0005f3cb) cam4_autofocus_pane_g2

0x61dd,	// (0x0005f3d3) cam4_autofocus_pane_g3

0x0002,

0xf7c4,	// (0x000689ba) cam4_autofocus_pane_g

0x61e5,	// (0x0005f3db) cam4_autofocus_pane_g3_copy1

0x59e0,	// (0x0005ebd6) video_down_pane_cp_t1

0x59ee,	// (0x0005ebe4) video_down_pane_cp_t2

0x0001,

0xf740,	// (0x00068936) video_down_pane_cp_t

0x983f,	// (0x00062a35) popup_vitu2_window_ParamLimits

0x983f,	// (0x00062a35) popup_vitu2_window

0x61ed,	// (0x0005f3e3) aid_size_cell2_itu2_ParamLimits

0x61ed,	// (0x0005f3e3) aid_size_cell2_itu2

0x6213,	// (0x0005f409) aid_size_cell_itu2_ParamLimits

0x6213,	// (0x0005f409) aid_size_cell_itu2

0x6264,	// (0x0005f45a) bg_popup_window_pane_cp09_ParamLimits

0x6264,	// (0x0005f45a) bg_popup_window_pane_cp09

0x6272,	// (0x0005f468) field_vitu2_entry_pane_ParamLimits

0x6272,	// (0x0005f468) field_vitu2_entry_pane

0x6289,	// (0x0005f47f) grid_vitu2_function_pane_ParamLimits

0x6289,	// (0x0005f47f) grid_vitu2_function_pane

0x62be,	// (0x0005f4b4) grid_vitu2_itu_pane_ParamLimits

0x62be,	// (0x0005f4b4) grid_vitu2_itu_pane

0x6325,	// (0x0005f51b) cell_vitu2_itu_pane_ParamLimits

0x6325,	// (0x0005f51b) cell_vitu2_itu_pane

0x634d,	// (0x0005f543) cell_vitu2_function_pane_ParamLimits

0x634d,	// (0x0005f543) cell_vitu2_function_pane

0x638c,	// (0x0005f582) bg_popup_call_pane_cp08_ParamLimits

0x638c,	// (0x0005f582) bg_popup_call_pane_cp08

0x63a3,	// (0x0005f599) field_vitu2_entry_pane_g1

0x63af,	// (0x0005f5a5) field_vitu2_entry_pane_g2

0x0002,

0xf7cb,	// (0x000689c1) field_vitu2_entry_pane_g

0x63c9,	// (0x0005f5bf) field_vitu2_entry_pane_t1_ParamLimits

0x63c9,	// (0x0005f5bf) field_vitu2_entry_pane_t1

0x63f6,	// (0x0005f5ec) field_vitu2_entry_pane_t2_ParamLimits

0x63f6,	// (0x0005f5ec) field_vitu2_entry_pane_t2

0x0001,

0xf7d2,	// (0x000689c8) field_vitu2_entry_pane_t_ParamLimits

0xf7d2,	// (0x000689c8) field_vitu2_entry_pane_t

0x641b,	// (0x0005f611) bg_button_pane_cp010_ParamLimits

0x641b,	// (0x0005f611) bg_button_pane_cp010

0xd8ab,	// (0x00066aa1) cell_vitu2_itu_pane_g1

0x6437,	// (0x0005f62d) cell_vitu2_itu_pane_t1_ParamLimits

0x6437,	// (0x0005f62d) cell_vitu2_itu_pane_t1

0x0cea,	// (0x00059ee0) cell_vitu2_itu_pane_t2_ParamLimits

0x0cea,	// (0x00059ee0) cell_vitu2_itu_pane_t2

0x0002,

0xf7dc,	// (0x000689d2) cell_vitu2_itu_pane_t_ParamLimits

0xf7dc,	// (0x000689d2) cell_vitu2_itu_pane_t

0x983f,	// (0x00062a35) bg_button_pane_cp011

0x6495,	// (0x0005f68b) cell_vitu2_function_pane_g1

0x984d,	// (0x00062a43) main_myfav_hc_pane

0x5dd0,	// (0x0005efc6) popup_image3_note_pane_ParamLimits

0x5dd0,	// (0x0005efc6) popup_image3_note_pane

0x5dea,	// (0x0005efe0) popup_image3_tool_bar_pane_ParamLimits

0x5dea,	// (0x0005efe0) popup_image3_tool_bar_pane

0x0d78,	// (0x00059f6e) cell_vitu2_itu_pane_t3_ParamLimits

0x0d78,	// (0x00059f6e) cell_vitu2_itu_pane_t3

0x97cd,	// (0x000629c3) bg_popup_trans_pane

0x64a8,	// (0x0005f69e) grid_image3_tool_bar_pane

0x64b2,	// (0x0005f6a8) bg_popup_trans_pane_g1

0xa481,	// (0x00063677) bg_popup_trans_pane_g2

0x64ba,	// (0x0005f6b0) bg_popup_trans_pane_g3

0x64c2,	// (0x0005f6b8) bg_popup_trans_pane_g4

0x64ca,	// (0x0005f6c0) bg_popup_trans_pane_g5

0x64d2,	// (0x0005f6c8) bg_popup_trans_pane_g6

0x64da,	// (0x0005f6d0) bg_popup_trans_pane_g7

0x64e2,	// (0x0005f6d8) bg_popup_trans_pane_g8

0xa461,	// (0x00063657) bg_popup_trans_pane_g9

0x0008,

0xf7e3,	// (0x000689d9) bg_popup_trans_pane_g

0x64ea,	// (0x0005f6e0) cell_image3_tool_bar_pane_ParamLimits

0x64ea,	// (0x0005f6e0) cell_image3_tool_bar_pane

0xe849,	// (0x00067a3f) cell_image3_tool_bar_pane_g1

0x97cd,	// (0x000629c3) bg_popup_trans_pane_cp1

0x64fe,	// (0x0005f6f4) popup_image3_note_pane_t1

0x650c,	// (0x0005f702) popup_image3_note_pane_t2

0x651a,	// (0x0005f710) popup_image3_note_pane_t3

0x0002,

0xf7f6,	// (0x000689ec) popup_image3_note_pane_t

0x6528,	// (0x0005f71e) popup_image3_note_pane_t3_copy1

0x6536,	// (0x0005f72c) bg_myfav_hc_instruction_pane_ParamLimits

0x6536,	// (0x0005f72c) bg_myfav_hc_instruction_pane

0x6548,	// (0x0005f73e) cell_myfav_contact_pane_ParamLimits

0x6548,	// (0x0005f73e) cell_myfav_contact_pane

0x6562,	// (0x0005f758) cell_myfav_contact_pane_cp1_ParamLimits

0x6562,	// (0x0005f758) cell_myfav_contact_pane_cp1

0x6578,	// (0x0005f76e) cell_myfav_contact_pane_cp2_ParamLimits

0x6578,	// (0x0005f76e) cell_myfav_contact_pane_cp2

0x658e,	// (0x0005f784) cell_myfav_contact_pane_cp3_ParamLimits

0x658e,	// (0x0005f784) cell_myfav_contact_pane_cp3

0x65a3,	// (0x0005f799) cell_myfav_contact_pane_cp4_ParamLimits

0x65a3,	// (0x0005f799) cell_myfav_contact_pane_cp4

0x65b7,	// (0x0005f7ad) cell_myfav_contact_pane_cp5_ParamLimits

0x65b7,	// (0x0005f7ad) cell_myfav_contact_pane_cp5

0x65cb,	// (0x0005f7c1) cell_myfav_contact_pane_cp6_ParamLimits

0x65cb,	// (0x0005f7c1) cell_myfav_contact_pane_cp6

0x65df,	// (0x0005f7d5) cell_myfav_contact_pane_cp7_ParamLimits

0x65df,	// (0x0005f7d5) cell_myfav_contact_pane_cp7

0x65f7,	// (0x0005f7ed) listscroll_gen_pane_cp05

0x6600,	// (0x0005f7f6) main_myfav_hc_pane_g1_ParamLimits

0x6600,	// (0x0005f7f6) main_myfav_hc_pane_g1

0x6616,	// (0x0005f80c) main_myfav_hc_pane_g2_ParamLimits

0x6616,	// (0x0005f80c) main_myfav_hc_pane_g2

0x0002,

0xf7fd,	// (0x000689f3) main_myfav_hc_pane_g_ParamLimits

0xf7fd,	// (0x000689f3) main_myfav_hc_pane_g

0x6640,	// (0x0005f836) main_myfav_hc_pane_t1_ParamLimits

0x6640,	// (0x0005f836) main_myfav_hc_pane_t1

0x6655,	// (0x0005f84b) main_myfav_hc_pane_t2_ParamLimits

0x6655,	// (0x0005f84b) main_myfav_hc_pane_t2

0x6667,	// (0x0005f85d) main_myfav_hc_pane_t3_ParamLimits

0x6667,	// (0x0005f85d) main_myfav_hc_pane_t3

0x6679,	// (0x0005f86f) main_myfav_hc_pane_t4_ParamLimits

0x6679,	// (0x0005f86f) main_myfav_hc_pane_t4

0x0004,

0xf804,	// (0x000689fa) main_myfav_hc_pane_t_ParamLimits

0xf804,	// (0x000689fa) main_myfav_hc_pane_t

0xe849,	// (0x00067a3f) bg_myfav_hc_instruction_pane_g1

0x669d,	// (0x0005f893) cell_myfav_contact_pane_g1_ParamLimits

0x669d,	// (0x0005f893) cell_myfav_contact_pane_g1

0x669d,	// (0x0005f893) cell_myfav_contact_pane_g2_ParamLimits

0x669d,	// (0x0005f893) cell_myfav_contact_pane_g2

0x66a9,	// (0x0005f89f) cell_myfav_contact_pane_g3_ParamLimits

0x66a9,	// (0x0005f89f) cell_myfav_contact_pane_g3

0xeadd,	// (0x00067cd3) cell_myfav_contact_pane_g4_ParamLimits

0xeadd,	// (0x00067cd3) cell_myfav_contact_pane_g4

0x66b6,	// (0x0005f8ac) cell_myfav_contact_pane_g5_ParamLimits

0x66b6,	// (0x0005f8ac) cell_myfav_contact_pane_g5

0x0004,

0xf80f,	// (0x00068a05) cell_myfav_contact_pane_g_ParamLimits

0xf80f,	// (0x00068a05) cell_myfav_contact_pane_g

0x662c,	// (0x0005f822) main_myfav_hc_pane_g3_ParamLimits

0x662c,	// (0x0005f822) main_myfav_hc_pane_g3

0x0f29,	// (0x0005a11f) popup_adpt_find_window

0x66c2,	// (0x0005f8b8) afind_page_pane_ParamLimits

0x66c2,	// (0x0005f8b8) afind_page_pane

0x66d7,	// (0x0005f8cd) aid_size_cell_afind_ParamLimits

0x66d7,	// (0x0005f8cd) aid_size_cell_afind

0x66f5,	// (0x0005f8eb) bg_popup_sub_pane_cp09_ParamLimits

0x66f5,	// (0x0005f8eb) bg_popup_sub_pane_cp09

0x6702,	// (0x0005f8f8) find_pane_cp01_ParamLimits

0x6702,	// (0x0005f8f8) find_pane_cp01

0xb7b4,	// (0x000649aa) grid_afind_control_pane_ParamLimits

0xb7b4,	// (0x000649aa) grid_afind_control_pane

0x670f,	// (0x0005f905) grid_afind_pane_ParamLimits

0x670f,	// (0x0005f905) grid_afind_pane

0x672d,	// (0x0005f923) cell_afind_pane_ParamLimits

0x672d,	// (0x0005f923) cell_afind_pane

0xe849,	// (0x00067a3f) afind_page_pane_g1

0x677c,	// (0x0005f972) afind_page_pane_g2

0x6785,	// (0x0005f97b) afind_page_pane_g3

0x0002,

0xf81a,	// (0x00068a10) afind_page_pane_g

0x678e,	// (0x0005f984) afind_page_pane_t1

0xb7c8,	// (0x000649be) cell_afind_grid_control_pane_ParamLimits

0xb7c8,	// (0x000649be) cell_afind_grid_control_pane

0x5b99,	// (0x0005ed8f) bg_button_pane_cp69_ParamLimits

0x5b99,	// (0x0005ed8f) bg_button_pane_cp69

0x67ae,	// (0x0005f9a4) cell_afind_pane_g1_ParamLimits

0x67ae,	// (0x0005f9a4) cell_afind_pane_g1

0x67bb,	// (0x0005f9b1) cell_afind_pane_t1_ParamLimits

0x67bb,	// (0x0005f9b1) cell_afind_pane_t1

0xa26d,	// (0x00063463) bg_button_pane_cp72

0xb7d7,	// (0x000649cd) cell_afind_grid_control_pane_g1

0x398c,	// (0x0005cb82) aid_image_placing_area_ParamLimits

0x398c,	// (0x0005cb82) aid_image_placing_area

0xedef,	// (0x00067fe5) field_vitu_entry_pane_g1_ParamLimits

0xedef,	// (0x00067fe5) field_vitu_entry_pane_g1

0xedfb,	// (0x00067ff1) field_vitu_entry_pane_g2_ParamLimits

0xedfb,	// (0x00067ff1) field_vitu_entry_pane_g2

0x0001,

0x059e,	// (0x00059794) field_vitu_entry_pane_g_ParamLimits

0x059e,	// (0x00059794) field_vitu_entry_pane_g

0x581a,	// (0x0005ea10) cell_vitu_itu_pane_g1_ParamLimits

0x585c,	// (0x0005ea52) cell_vitu_itu_pane_t3_ParamLimits

0x585c,	// (0x0005ea52) cell_vitu_itu_pane_t3

0x5ab1,	// (0x0005eca7) mp4_progress_pane_t1_ParamLimits

0x5ac8,	// (0x0005ecbe) mp4_progress_pane_t2_ParamLimits

0xf760,	// (0x00068956) mp4_progress_pane_t_ParamLimits

0x5adf,	// (0x0005ecd5) mup_progress_pane_cp04_ParamLimits

0x668b,	// (0x0005f881) main_myfav_hc_pane_t5_ParamLimits

0x668b,	// (0x0005f881) main_myfav_hc_pane_t5

0x97ef,	// (0x000629e5) aid_zoom_text_primary

0x0f29,	// (0x0005a11f) popup_adpt_find_window_ParamLimits

0x983f,	// (0x00062a35) main_cam_set_pane

0x6043,	// (0x0005f239) cam4_zoom_pane_ParamLimits

0x6043,	// (0x0005f239) cam4_zoom_pane

0x67cd,	// (0x0005f9c3) main_cam_set_pane_g1_ParamLimits

0x67cd,	// (0x0005f9c3) main_cam_set_pane_g1

0x67db,	// (0x0005f9d1) main_cam_set_pane_g2_ParamLimits

0x67db,	// (0x0005f9d1) main_cam_set_pane_g2

0x0001,

0xf821,	// (0x00068a17) main_cam_set_pane_g_ParamLimits

0xf821,	// (0x00068a17) main_cam_set_pane_g

0x67fc,	// (0x0005f9f2) main_cam_set_pane_t1_ParamLimits

0x67fc,	// (0x0005f9f2) main_cam_set_pane_t1

0x6817,	// (0x0005fa0d) main_cset_listscroll_pane_ParamLimits

0x6817,	// (0x0005fa0d) main_cset_listscroll_pane

0x6835,	// (0x0005fa2b) main_cset_slider_pane_ParamLimits

0x6835,	// (0x0005fa2b) main_cset_slider_pane

0xb7e8,	// (0x000649de) main_cset_list_pane_ParamLimits

0xb7e8,	// (0x000649de) main_cset_list_pane

0xb7f8,	// (0x000649ee) scroll_pane_cp028

0x6859,	// (0x0005fa4f) aid_area_touch_slider

0xb801,	// (0x000649f7) cset_slider_pane

0x6875,	// (0x0005fa6b) main_cset_slider_pane_g1

0x688a,	// (0x0005fa80) main_cset_slider_pane_g2

0x0011,

0xf826,	// (0x00068a1c) main_cset_slider_pane_g

0xb873,	// (0x00064a69) main_cset_slider_pane_t1

0x692e,	// (0x0005fb24) main_cset_slider_pane_t2

0x6948,	// (0x0005fb3e) main_cset_slider_pane_t3

0x6962,	// (0x0005fb58) main_cset_slider_pane_t4

0x697c,	// (0x0005fb72) main_cset_slider_pane_t5

0x6996,	// (0x0005fb8c) main_cset_slider_pane_t6

0x69ab,	// (0x0005fba1) main_cset_slider_pane_t7

0x000e,

0xf84b,	// (0x00068a41) main_cset_slider_pane_t

0x6aaf,	// (0x0005fca5) cset_list_set_pane_ParamLimits

0x6aaf,	// (0x0005fca5) cset_list_set_pane

0x6ac0,	// (0x0005fcb6) aid_position_infowindow_above

0x6ac8,	// (0x0005fcbe) aid_position_infowindow_below

0x6ad0,	// (0x0005fcc6) cset_list_set_pane_g1_ParamLimits

0x6ad0,	// (0x0005fcc6) cset_list_set_pane_g1

0x6adc,	// (0x0005fcd2) cset_list_set_pane_g3_ParamLimits

0x6adc,	// (0x0005fcd2) cset_list_set_pane_g3

0x0001,

0xf86a,	// (0x00068a60) cset_list_set_pane_g_ParamLimits

0xf86a,	// (0x00068a60) cset_list_set_pane_g

0x6aeb,	// (0x0005fce1) cset_list_set_pane_t1_ParamLimits

0x6aeb,	// (0x0005fce1) cset_list_set_pane_t1

0xb6a2,	// (0x00064898) list_highlight_pane_cp021_ParamLimits

0xb6a2,	// (0x00064898) list_highlight_pane_cp021

0xae13,	// (0x00064009) cset_slider_pane_g1

0xae25,	// (0x0006401b) cset_slider_pane_g2

0xae1c,	// (0x00064012) cset_slider_pane_g3

0x0002,

0xf86f,	// (0x00068a65) cset_slider_pane_g

0xd8bd,	// (0x00066ab3) aid_area_touch_cam4_zoom

0xd8c5,	// (0x00066abb) cam4_zoom_cont_pane

0xd8cd,	// (0x00066ac3) cam4_zoom_pane_g1

0xd8d5,	// (0x00066acb) cam4_zoom_pane_g2

0x6b00,	// (0x0005fcf6) cam4_zoom_pane_g3

0x0002,

0xf876,	// (0x00068a6c) cam4_zoom_pane_g

0xd8dd,	// (0x00066ad3) cam4_zoom_cont_pane_g1

0xd8e6,	// (0x00066adc) cam4_zoom_cont_pane_g2

0xd8ef,	// (0x00066ae5) cam4_zoom_cont_pane_g3

0x0002,

0xf87d,	// (0x00068a73) cam4_zoom_cont_pane_g

0x5e55,	// (0x0005f04b) call4_image_pane_ParamLimits

0x5e55,	// (0x0005f04b) call4_image_pane

0x5ea1,	// (0x0005f097) call4_windows_conf_pane_ParamLimits

0x5ed4,	// (0x0005f0ca) popup_call4_audio_in_window_ParamLimits

0x5ed4,	// (0x0005f0ca) popup_call4_audio_in_window

0x97cd,	// (0x000629c3) bg_popup_call2_act_pane_cp02

0x5fc5,	// (0x0005f1bb) call4_list_conf_pane

0xe849,	// (0x00067a3f) call4_image_pane_g1

0xe849,	// (0x00067a3f) call4_image_pane_g2

0x0001,

0x045f,	// (0x00059655) call4_image_pane_g

0xb913,	// (0x00064b09) list_single_graphic_popup_conf4_pane_ParamLimits

0xb913,	// (0x00064b09) list_single_graphic_popup_conf4_pane

0x97cd,	// (0x000629c3) list_highlight_pane_cp022

0xb926,	// (0x00064b1c) list_single_graphic_popup_conf4_pane_g1

0xaa28,	// (0x00063c1e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf884,	// (0x00068a7a) list_single_graphic_popup_conf4_pane_g

0xb92e,	// (0x00064b24) list_single_graphic_popup_conf4_pane_t1

0x1fcd,	// (0x0005b1c3) popup_vtel_slider_window_ParamLimits

0x1fcd,	// (0x0005b1c3) popup_vtel_slider_window

0x5b65,	// (0x0005ed5b) dialer2_ne_pane_t2_ParamLimits

0x5b65,	// (0x0005ed5b) dialer2_ne_pane_t2

0x0001,

0xf765,	// (0x0006895b) dialer2_ne_pane_t_ParamLimits

0xf765,	// (0x0006895b) dialer2_ne_pane_t

0xe636,	// (0x0006782c) bg_popup_sub_pane_cp010_ParamLimits

0xe636,	// (0x0006782c) bg_popup_sub_pane_cp010

0x6b08,	// (0x0005fcfe) popup_vtel_slider_window_g1_ParamLimits

0x6b08,	// (0x0005fcfe) popup_vtel_slider_window_g1

0x6b1b,	// (0x0005fd11) popup_vtel_slider_window_g2_ParamLimits

0x6b1b,	// (0x0005fd11) popup_vtel_slider_window_g2

0x0003,

0xf889,	// (0x00068a7f) popup_vtel_slider_window_g_ParamLimits

0xf889,	// (0x00068a7f) popup_vtel_slider_window_g

0x6b6f,	// (0x0005fd65) vtel_slider_pane_ParamLimits

0x6b6f,	// (0x0005fd65) vtel_slider_pane

0x6b91,	// (0x0005fd87) vtel_slider_pane_g1_ParamLimits

0x6b91,	// (0x0005fd87) vtel_slider_pane_g1

0x6ba5,	// (0x0005fd9b) vtel_slider_pane_g2_ParamLimits

0x6ba5,	// (0x0005fd9b) vtel_slider_pane_g2

0x6bbd,	// (0x0005fdb3) vtel_slider_pane_g3_ParamLimits

0x6bbd,	// (0x0005fdb3) vtel_slider_pane_g3

0x6b91,	// (0x0005fd87) vtel_slider_pane_g4_ParamLimits

0x6b91,	// (0x0005fd87) vtel_slider_pane_g4

0x6bd3,	// (0x0005fdc9) vtel_slider_pane_g5_ParamLimits

0x6bd3,	// (0x0005fdc9) vtel_slider_pane_g5

0x0004,

0xf892,	// (0x00068a88) vtel_slider_pane_g_ParamLimits

0xf892,	// (0x00068a88) vtel_slider_pane_g

0x983f,	// (0x00062a35) main_gallery2_pane

0x623f,	// (0x0005f435) aid_size_row_itut2_dropdow_list_ParamLimits

0x623f,	// (0x0005f435) aid_size_row_itut2_dropdow_list

0x62a2,	// (0x0005f498) grid_vitu2_function_top_pane_ParamLimits

0x62a2,	// (0x0005f498) grid_vitu2_function_top_pane

0x62e7,	// (0x0005f4dd) popup_vitu2_dropdown_list_window_ParamLimits

0x62e7,	// (0x0005f4dd) popup_vitu2_dropdown_list_window

0x6303,	// (0x0005f4f9) popup_vitu2_match_list_window

0x6bf7,	// (0x0005fded) cell_vitu2_function_top_pane_ParamLimits

0x6bf7,	// (0x0005fded) cell_vitu2_function_top_pane

0x6c0f,	// (0x0005fe05) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6c0f,	// (0x0005fe05) cell_vitu2_function_top_pane_cp01

0x6c2b,	// (0x0005fe21) cell_vitu2_function_top_wide_pane_ParamLimits

0x6c2b,	// (0x0005fe21) cell_vitu2_function_top_wide_pane

0x983f,	// (0x00062a35) bg_button_pane_cp012

0x6c47,	// (0x0005fe3d) cell_vitu2_function_top_pane_g1

0xd8f8,	// (0x00066aee) bg_button_pane_cp013_ParamLimits

0xd8f8,	// (0x00066aee) bg_button_pane_cp013

0x6c5b,	// (0x0005fe51) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6c5b,	// (0x0005fe51) cell_vitu2_function_top_wide_pane_g1

0x983f,	// (0x00062a35) bg_popup_sub_pane_cp20

0x6c73,	// (0x0005fe69) list_vitu2_match_list_pane

0x64b2,	// (0x0005f6a8) bg_popup_sub_pane_cp20_g1

0x64ba,	// (0x0005f6b0) bg_popup_sub_pane_cp20_g2

0xa481,	// (0x00063677) bg_popup_sub_pane_cp20_g3

0x64c2,	// (0x0005f6b8) bg_popup_sub_pane_cp20_g4

0xa461,	// (0x00063657) bg_popup_sub_pane_cp20_g5

0xb944,	// (0x00064b3a) bg_popup_sub_pane_cp20_g6

0x64d2,	// (0x0005f6c8) bg_popup_sub_pane_cp20_g7

0x64da,	// (0x0005f6d0) bg_popup_sub_pane_cp20_g8

0x64e2,	// (0x0005f6d8) bg_popup_sub_pane_cp20_g9

0x0008,

0xf89d,	// (0x00068a93) bg_popup_sub_pane_cp20_g

0xd914,	// (0x00066b0a) list_vitu2_match_list_item_pane_ParamLimits

0xd914,	// (0x00066b0a) list_vitu2_match_list_item_pane

0xd926,	// (0x00066b1c) list_vitu2_match_list_item_pane_t1

0x984d,	// (0x00062a43) bg_popup_sub_pane_cp21

0xd934,	// (0x00066b2a) grid_vitu2_dropdown_list_pane

0x6cd9,	// (0x0005fecf) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6cd9,	// (0x0005fecf) cell_vitu2_dropdown_list_char_pane

0x6cfa,	// (0x0005fef0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6cfa,	// (0x0005fef0) cell_vitu2_dropdown_list_ctrl_pane

0xb94c,	// (0x00064b42) cell_vitu2_dropdown_list_char_pane_g1

0xb955,	// (0x00064b4b) cell_vitu2_dropdown_list_char_pane_g2

0xb95e,	// (0x00064b54) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8ba,	// (0x00068ab0) cell_vitu2_dropdown_list_char_pane_g

0x6d26,	// (0x0005ff1c) cell_vitu2_dropdown_list_char_pane_t1

0x6d34,	// (0x0005ff2a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6d34,	// (0x0005ff2a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6d41,	// (0x0005ff37) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6d41,	// (0x0005ff37) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6d4e,	// (0x0005ff44) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6d4e,	// (0x0005ff44) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6d5b,	// (0x0005ff51) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6d5b,	// (0x0005ff51) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd7d6,	// (0x000669cc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd7d6,	// (0x000669cc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8c1,	// (0x00068ab7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8c1,	// (0x00068ab7) cell_vitu2_dropdown_list_ctrl_pane_g

0x6d77,	// (0x0005ff6d) aid_size_cell_gallery2_ParamLimits

0x6d77,	// (0x0005ff6d) aid_size_cell_gallery2

0x6d95,	// (0x0005ff8b) grid_gallery2_pane_ParamLimits

0x6d95,	// (0x0005ff8b) grid_gallery2_pane

0x6da7,	// (0x0005ff9d) scroll_pane_cp029_ParamLimits

0x6da7,	// (0x0005ff9d) scroll_pane_cp029

0x6db3,	// (0x0005ffa9) cell_gallery2_pane_ParamLimits

0x6db3,	// (0x0005ffa9) cell_gallery2_pane

0xb967,	// (0x00064b5d) cell_gallery2_pane_g2

0x6e09,	// (0x0005ffff) cell_gallery2_pane_g3

0xb96f,	// (0x00064b65) cell_gallery2_pane_g4

0xb977,	// (0x00064b6d) cell_gallery2_pane_g5

0xa211,	// (0x00063407) grid_highlight_pane_cp10

0x6303,	// (0x0005f4f9) popup_vitu2_match_list_window_ParamLimits

0x6314,	// (0x0005f50a) popup_vitu2_query_window_ParamLimits

0x6314,	// (0x0005f50a) popup_vitu2_query_window

0x984d,	// (0x00062a43) bg_vitu2_candi_button_pane

0xb94c,	// (0x00064b42) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb955,	// (0x00064b4b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb95e,	// (0x00064b54) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6e11,	// (0x00060007) bg_button_pane_cp015

0x6e21,	// (0x00060017) bg_button_pane_cp016

0x6e33,	// (0x00060029) bg_button_pane_cp017

0xe449,	// (0x0006763f) bg_popup_sub_pane_cp22

0xb97f,	// (0x00064b75) popup_vitu2_query_window_g1

0x6e74,	// (0x0006006a) popup_vitu2_query_window_g2

0x0002,

0xf8cc,	// (0x00068ac2) popup_vitu2_query_window_g

0x6e8f,	// (0x00060085) popup_vitu2_query_window_t1_ParamLimits

0x6e8f,	// (0x00060085) popup_vitu2_query_window_t1

0x6ec2,	// (0x000600b8) popup_vitu2_query_window_t2_ParamLimits

0x6ec2,	// (0x000600b8) popup_vitu2_query_window_t2

0x6ed4,	// (0x000600ca) popup_vitu2_query_window_t3_ParamLimits

0x6ed4,	// (0x000600ca) popup_vitu2_query_window_t3

0x6efc,	// (0x000600f2) popup_vitu2_query_window_t4_ParamLimits

0x6efc,	// (0x000600f2) popup_vitu2_query_window_t4

0x6f19,	// (0x0006010f) popup_vitu2_query_window_t5_ParamLimits

0x6f19,	// (0x0006010f) popup_vitu2_query_window_t5

0x0006,

0xf8d3,	// (0x00068ac9) popup_vitu2_query_window_t_ParamLimits

0xf8d3,	// (0x00068ac9) popup_vitu2_query_window_t

0xb7e0,	// (0x000649d6) main_cset_text_pane

0x6859,	// (0x0005fa4f) aid_area_touch_slider_ParamLimits

0xb801,	// (0x000649f7) cset_slider_pane_ParamLimits

0x6875,	// (0x0005fa6b) main_cset_slider_pane_g1_ParamLimits

0x688a,	// (0x0005fa80) main_cset_slider_pane_g2_ParamLimits

0xb82b,	// (0x00064a21) main_cset_slider_pane_g3_ParamLimits

0xb82b,	// (0x00064a21) main_cset_slider_pane_g3

0x689f,	// (0x0005fa95) main_cset_slider_pane_g4_ParamLimits

0x689f,	// (0x0005fa95) main_cset_slider_pane_g4

0x68ae,	// (0x0005faa4) main_cset_slider_pane_g5_ParamLimits

0x68ae,	// (0x0005faa4) main_cset_slider_pane_g5

0x68ba,	// (0x0005fab0) main_cset_slider_pane_g6_ParamLimits

0x68ba,	// (0x0005fab0) main_cset_slider_pane_g6

0xf826,	// (0x00068a1c) main_cset_slider_pane_g_ParamLimits

0xb873,	// (0x00064a69) main_cset_slider_pane_t1_ParamLimits

0x692e,	// (0x0005fb24) main_cset_slider_pane_t2_ParamLimits

0x6948,	// (0x0005fb3e) main_cset_slider_pane_t3_ParamLimits

0x6962,	// (0x0005fb58) main_cset_slider_pane_t4_ParamLimits

0x697c,	// (0x0005fb72) main_cset_slider_pane_t5_ParamLimits

0x6996,	// (0x0005fb8c) main_cset_slider_pane_t6_ParamLimits

0x69ab,	// (0x0005fba1) main_cset_slider_pane_t7_ParamLimits

0x69d5,	// (0x0005fbcb) main_cset_slider_pane_t8_ParamLimits

0x69d5,	// (0x0005fbcb) main_cset_slider_pane_t8

0x69fd,	// (0x0005fbf3) main_cset_slider_pane_t9_ParamLimits

0x69fd,	// (0x0005fbf3) main_cset_slider_pane_t9

0x6a25,	// (0x0005fc1b) main_cset_slider_pane_t10_ParamLimits

0x6a25,	// (0x0005fc1b) main_cset_slider_pane_t10

0x6a4d,	// (0x0005fc43) main_cset_slider_pane_t11_ParamLimits

0x6a4d,	// (0x0005fc43) main_cset_slider_pane_t11

0x6a75,	// (0x0005fc6b) main_cset_slider_pane_t12_ParamLimits

0x6a75,	// (0x0005fc6b) main_cset_slider_pane_t12

0x6a92,	// (0x0005fc88) main_cset_slider_pane_t13_ParamLimits

0x6a92,	// (0x0005fc88) main_cset_slider_pane_t13

0xf84b,	// (0x00068a41) main_cset_slider_pane_t_ParamLimits

0x97cd,	// (0x000629c3) bg_popup_sub_pane_cp011

0xb98b,	// (0x00064b81) main_cset_text_pane_g1

0xb993,	// (0x00064b89) main_cset_text_pane_t1

0xb9a1,	// (0x00064b97) main_cset_text_pane_t2

0xb9af,	// (0x00064ba5) main_cset_text_pane_t3

0xb9bd,	// (0x00064bb3) main_cset_text_pane_t4

0xb9cb,	// (0x00064bc1) main_cset_text_pane_t5

0xb9d9,	// (0x00064bcf) main_cset_text_pane_t6

0xb9e7,	// (0x00064bdd) main_cset_text_pane_t7

0x0006,

0xf8e2,	// (0x00068ad8) main_cset_text_pane_t

0x984d,	// (0x00062a43) main_cam4_burst_pane

0x984d,	// (0x00062a43) main_cam5_pane

0x679c,	// (0x0005f992) bg_button_pane_cp019

0x67a5,	// (0x0005f99b) bg_button_pane_cp020

0xb837,	// (0x00064a2d) main_cset_slider_pane_g7_ParamLimits

0xb837,	// (0x00064a2d) main_cset_slider_pane_g7

0xb843,	// (0x00064a39) main_cset_slider_pane_g8_ParamLimits

0xb843,	// (0x00064a39) main_cset_slider_pane_g8

0x68ce,	// (0x0005fac4) main_cset_slider_pane_g9_ParamLimits

0x68ce,	// (0x0005fac4) main_cset_slider_pane_g9

0x68da,	// (0x0005fad0) main_cset_slider_pane_g10_ParamLimits

0x68da,	// (0x0005fad0) main_cset_slider_pane_g10

0xb84f,	// (0x00064a45) main_cset_slider_pane_g11_ParamLimits

0xb84f,	// (0x00064a45) main_cset_slider_pane_g11

0xb85b,	// (0x00064a51) main_cset_slider_pane_g12_ParamLimits

0xb85b,	// (0x00064a51) main_cset_slider_pane_g12

0x68e6,	// (0x0005fadc) main_cset_slider_pane_g13_ParamLimits

0x68e6,	// (0x0005fadc) main_cset_slider_pane_g13

0x68f2,	// (0x0005fae8) main_cset_slider_pane_g14_ParamLimits

0x68f2,	// (0x0005fae8) main_cset_slider_pane_g14

0x68fe,	// (0x0005faf4) main_cset_slider_pane_g15_ParamLimits

0x68fe,	// (0x0005faf4) main_cset_slider_pane_g15

0xb8a1,	// (0x00064a97) main_cset_slider_pane_t14_ParamLimits

0xb8a1,	// (0x00064a97) main_cset_slider_pane_t14

0xb8da,	// (0x00064ad0) main_cset_slider_pane_t15_ParamLimits

0xb8da,	// (0x00064ad0) main_cset_slider_pane_t15

0x6f8c,	// (0x00060182) aid_cam4_burst_size_cell_ParamLimits

0x6f8c,	// (0x00060182) aid_cam4_burst_size_cell

0x6fac,	// (0x000601a2) grid_cam4_burst_pane_ParamLimits

0x6fac,	// (0x000601a2) grid_cam4_burst_pane

0x6fd6,	// (0x000601cc) linegrid_cam4_burst_pane_ParamLimits

0x6fd6,	// (0x000601cc) linegrid_cam4_burst_pane

0xb9f5,	// (0x00064beb) scroll_pane_cp30_ParamLimits

0xb9f5,	// (0x00064beb) scroll_pane_cp30

0x6ff8,	// (0x000601ee) cell_cam4_burst_pane_ParamLimits

0x6ff8,	// (0x000601ee) cell_cam4_burst_pane

0xba01,	// (0x00064bf7) linegrid_cam4_burst_pane_g1_ParamLimits

0xba01,	// (0x00064bf7) linegrid_cam4_burst_pane_g1

0x703f,	// (0x00060235) linegrid_cam4_burst_pane_g2_ParamLimits

0x703f,	// (0x00060235) linegrid_cam4_burst_pane_g2

0xba0e,	// (0x00064c04) linegrid_cam4_burst_pane_g3_ParamLimits

0xba0e,	// (0x00064c04) linegrid_cam4_burst_pane_g3

0x0002,

0xf8f1,	// (0x00068ae7) linegrid_cam4_burst_pane_g_ParamLimits

0xf8f1,	// (0x00068ae7) linegrid_cam4_burst_pane_g

0x7050,	// (0x00060246) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7050,	// (0x00060246) linegrid_cam4_burst_pane_g3_copy1

0xba1b,	// (0x00064c11) linegrid_cam4_burst_pane_g4_ParamLimits

0xba1b,	// (0x00064c11) linegrid_cam4_burst_pane_g4

0x706a,	// (0x00060260) linegrid_cam4_burst_pane_g5_ParamLimits

0x706a,	// (0x00060260) linegrid_cam4_burst_pane_g5

0x707b,	// (0x00060271) linegrid_cam4_burst_pane_g6_ParamLimits

0x707b,	// (0x00060271) linegrid_cam4_burst_pane_g6

0xba28,	// (0x00064c1e) linegrid_cam4_burst_pane_g7_ParamLimits

0xba28,	// (0x00064c1e) linegrid_cam4_burst_pane_g7

0x708c,	// (0x00060282) cell_cam4_burst_pane_g1

0xba41,	// (0x00064c37) main_cam5_pane_t1_ParamLimits

0xba41,	// (0x00064c37) main_cam5_pane_t1

0xba53,	// (0x00064c49) main_cam5_pane_t2_ParamLimits

0xba53,	// (0x00064c49) main_cam5_pane_t2

0xba65,	// (0x00064c5b) main_cam5_pane_t3_ParamLimits

0xba65,	// (0x00064c5b) main_cam5_pane_t3

0xba77,	// (0x00064c6d) main_cam5_pane_t4_ParamLimits

0xba77,	// (0x00064c6d) main_cam5_pane_t4

0xba8d,	// (0x00064c83) main_cam5_pane_t5_ParamLimits

0xba8d,	// (0x00064c83) main_cam5_pane_t5

0xba9f,	// (0x00064c95) main_cam5_pane_t6_ParamLimits

0xba9f,	// (0x00064c95) main_cam5_pane_t6

0xbab1,	// (0x00064ca7) main_cam5_pane_t7_ParamLimits

0xbab1,	// (0x00064ca7) main_cam5_pane_t7

0xbac3,	// (0x00064cb9) main_cam5_pane_t8_ParamLimits

0xbac3,	// (0x00064cb9) main_cam5_pane_t8

0xbadf,	// (0x00064cd5) main_cam5_pane_t9_ParamLimits

0xbadf,	// (0x00064cd5) main_cam5_pane_t9

0xbaf1,	// (0x00064ce7) main_cam5_pane_t10_ParamLimits

0xbaf1,	// (0x00064ce7) main_cam5_pane_t10

0xbb03,	// (0x00064cf9) main_cam5_pane_t11_ParamLimits

0xbb03,	// (0x00064cf9) main_cam5_pane_t11

0xbb15,	// (0x00064d0b) main_cam5_pane_t12_ParamLimits

0xbb15,	// (0x00064d0b) main_cam5_pane_t12

0xbb2a,	// (0x00064d20) main_cam5_pane_t13_ParamLimits

0xbb2a,	// (0x00064d20) main_cam5_pane_t13

0x000c,

0xf8fd,	// (0x00068af3) main_cam5_pane_t_ParamLimits

0xf8fd,	// (0x00068af3) main_cam5_pane_t

0x0fa7,	// (0x0005a19d) popup_scut_keymap_window_ParamLimits

0x0fa7,	// (0x0005a19d) popup_scut_keymap_window

0x709f,	// (0x00060295) aid_size_cell_brow_shortcut

0xa211,	// (0x00063407) bg_popup_window_pane_cp010

0x70ab,	// (0x000602a1) grid_scut_pane

0x70b5,	// (0x000602ab) cell_scut_pane_ParamLimits

0x70b5,	// (0x000602ab) cell_scut_pane

0x70ca,	// (0x000602c0) cell_scut_pane_g1

0xbb47,	// (0x00064d3d) cell_scut_pane_t1

0xbb56,	// (0x00064d4c) cell_scut_pane_t2

0x70d3,	// (0x000602c9) cell_scut_pane_t3

0x0002,

0xf918,	// (0x00068b0e) cell_scut_pane_t

0x4dd2,	// (0x0005dfc8) main_mup3_pane_g8_ParamLimits

0x4dd2,	// (0x0005dfc8) main_mup3_pane_g8

0x6252,	// (0x0005f448) area_vitu2_query_pane_ParamLimits

0x6252,	// (0x0005f448) area_vitu2_query_pane

0x6e45,	// (0x0006003b) input_focus_pane_cp08

0xbb65,	// (0x00064d5b) area_vitu2_query_pane_g1

0x70e1,	// (0x000602d7) area_vitu2_query_pane_g2

0x0001,

0xf91f,	// (0x00068b15) area_vitu2_query_pane_g

0x70f0,	// (0x000602e6) area_vitu2_query_pane_t1_ParamLimits

0x70f0,	// (0x000602e6) area_vitu2_query_pane_t1

0x7102,	// (0x000602f8) area_vitu2_query_pane_t2_ParamLimits

0x7102,	// (0x000602f8) area_vitu2_query_pane_t2

0x7114,	// (0x0006030a) area_vitu2_query_pane_t3_ParamLimits

0x7114,	// (0x0006030a) area_vitu2_query_pane_t3

0xbb71,	// (0x00064d67) area_vitu2_query_pane_t4_ParamLimits

0xbb71,	// (0x00064d67) area_vitu2_query_pane_t4

0xbb99,	// (0x00064d8f) area_vitu2_query_pane_t5_ParamLimits

0xbb99,	// (0x00064d8f) area_vitu2_query_pane_t5

0xbbc1,	// (0x00064db7) area_vitu2_query_pane_t6_ParamLimits

0xbbc1,	// (0x00064db7) area_vitu2_query_pane_t6

0x0006,

0xf924,	// (0x00068b1a) area_vitu2_query_pane_t_ParamLimits

0xf924,	// (0x00068b1a) area_vitu2_query_pane_t

0x713c,	// (0x00060332) bg_button_pane_cp018

0x7149,	// (0x0006033f) bg_button_pane_cp021

0x7155,	// (0x0006034b) bg_button_pane_cp022

0x7164,	// (0x0006035a) input_focus_pane_cp09

0xab2b,	// (0x00063d21) aid_size_touch_mv_arrow_left

0xab54,	// (0x00063d4a) aid_size_touch_mv_arrow_right

0x6916,	// (0x0005fb0c) main_cset_slider_pane_g16_ParamLimits

0x6916,	// (0x0005fb0c) main_cset_slider_pane_g16

0x6922,	// (0x0005fb18) main_cset_slider_pane_g17_ParamLimits

0x6922,	// (0x0005fb18) main_cset_slider_pane_g17

0x708c,	// (0x00060282) cell_cam4_burst_pane_g1_ParamLimits

0x97cd,	// (0x000629c3) compa_mode_pane

0x6b2b,	// (0x0005fd21) popup_vtel_slider_window_g3_ParamLimits

0x6b2b,	// (0x0005fd21) popup_vtel_slider_window_g3

0x6b42,	// (0x0005fd38) popup_vtel_slider_window_g4_ParamLimits

0x6b42,	// (0x0005fd38) popup_vtel_slider_window_g4

0x6b59,	// (0x0005fd4f) popup_vtel_slider_window_t1_ParamLimits

0x6b59,	// (0x0005fd4f) popup_vtel_slider_window_t1

0x984d,	// (0x00062a43) main_cl_pane

0xb6c0,	// (0x000648b6) popup_imed_adjust2_window_ParamLimits

0xe449,	// (0x0006763f) bg_tb_trans_pane_cp05_ParamLimits

0xed24,	// (0x00067f1a) popup_imed_adjust2_window_g1_ParamLimits

0xed33,	// (0x00067f29) popup_imed_adjust2_window_g2_ParamLimits

0xed33,	// (0x00067f29) popup_imed_adjust2_window_g2

0xed3f,	// (0x00067f35) popup_imed_adjust2_window_g3_ParamLimits

0xed3f,	// (0x00067f35) popup_imed_adjust2_window_g3

0x0002,

0x0562,	// (0x00059758) popup_imed_adjust2_window_g_ParamLimits

0x0562,	// (0x00059758) popup_imed_adjust2_window_g

0xed4b,	// (0x00067f41) popup_imed_adjust2_window_t1_ParamLimits

0xed63,	// (0x00067f59) slider_imed_adjust_pane_ParamLimits

0xed77,	// (0x00067f6d) slider_imed_adjust_pane_g1_ParamLimits

0xed87,	// (0x00067f7d) slider_imed_adjust_pane_g2_ParamLimits

0xed97,	// (0x00067f8d) slider_imed_adjust_pane_g3_ParamLimits

0xeda8,	// (0x00067f9e) slider_imed_adjust_pane_g4_ParamLimits

0x0569,	// (0x0005975f) slider_imed_adjust_pane_g_ParamLimits

0x5ff1,	// (0x0005f1e7) aid_touch_area_cam4_ParamLimits

0x5ff1,	// (0x0005f1e7) aid_touch_area_cam4

0xd7bc,	// (0x000669b2) battery_pane_cp01

0x60b1,	// (0x0005f2a7) main_camera4_pane_g6_ParamLimits

0x60b1,	// (0x0005f2a7) main_camera4_pane_g6

0x60d9,	// (0x0005f2cf) main_camera4_pane_t2_ParamLimits

0x60d9,	// (0x0005f2cf) main_camera4_pane_t2

0x0001,

0xf799,	// (0x0006898f) main_camera4_pane_t_ParamLimits

0xf799,	// (0x0006898f) main_camera4_pane_t

0x611a,	// (0x0005f310) aid_touch_area_vid4_ParamLimits

0x611a,	// (0x0005f310) aid_touch_area_vid4

0x616a,	// (0x0005f360) main_video4_pane_g5_ParamLimits

0x616a,	// (0x0005f360) main_video4_pane_g5

0x618b,	// (0x0005f381) vid4_progress_pane_ParamLimits

0x618b,	// (0x0005f381) vid4_progress_pane

0xb867,	// (0x00064a5d) main_cset_slider_pane_g18_ParamLimits

0xb867,	// (0x00064a5d) main_cset_slider_pane_g18

0xba35,	// (0x00064c2b) cell_cam4_burst_pane_g2_ParamLimits

0xba35,	// (0x00064c2b) cell_cam4_burst_pane_g2

0x0001,

0xf8f8,	// (0x00068aee) cell_cam4_burst_pane_g_ParamLimits

0xf8f8,	// (0x00068aee) cell_cam4_burst_pane_g

0x9fea,	// (0x000631e0) bg_cl_pane_ParamLimits

0x9fea,	// (0x000631e0) bg_cl_pane

0x7173,	// (0x00060369) cl_header_pane_ParamLimits

0x7173,	// (0x00060369) cl_header_pane

0x7187,	// (0x0006037d) cl_listscroll_pane_ParamLimits

0x7187,	// (0x0006037d) cl_listscroll_pane

0xbc0d,	// (0x00064e03) bg_cl_pane_g1

0xbc15,	// (0x00064e0b) bg_cl_pane_g2

0xbc1d,	// (0x00064e13) bg_cl_pane_g3

0xbc25,	// (0x00064e1b) bg_cl_pane_g4

0xbc2d,	// (0x00064e23) bg_cl_pane_g5

0xbc35,	// (0x00064e2b) bg_cl_pane_g6

0xbc3d,	// (0x00064e33) bg_cl_pane_g7

0xbc45,	// (0x00064e3b) bg_cl_pane_g8

0xbc4d,	// (0x00064e43) bg_cl_pane_g9

0x0008,

0xf933,	// (0x00068b29) bg_cl_pane_g

0x7197,	// (0x0006038d) aid_height_cl_leading_ParamLimits

0x7197,	// (0x0006038d) aid_height_cl_leading

0x71a3,	// (0x00060399) aid_height_cl_text_ParamLimits

0x71a3,	// (0x00060399) aid_height_cl_text

0xb6a2,	// (0x00064898) bg_cl_header_pane_ParamLimits

0xb6a2,	// (0x00064898) bg_cl_header_pane

0x71c2,	// (0x000603b8) cl_header_pane_g1_ParamLimits

0x71c2,	// (0x000603b8) cl_header_pane_g1

0x71d8,	// (0x000603ce) cl_header_pane_t1_ParamLimits

0x71d8,	// (0x000603ce) cl_header_pane_t1

0xbc55,	// (0x00064e4b) cl_list_pane

0xb7f8,	// (0x000649ee) hc_scroll_pane_cp01

0xa461,	// (0x00063657) bg_cl_header_pane_g1

0x64b2,	// (0x0005f6a8) bg_cl_header_pane_g2

0xa481,	// (0x00063677) bg_cl_header_pane_g3

0x64c2,	// (0x0005f6b8) bg_cl_header_pane_g4

0x64ba,	// (0x0005f6b0) bg_cl_header_pane_g5

0xb944,	// (0x00064b3a) bg_cl_header_pane_g6

0x64da,	// (0x0005f6d0) bg_cl_header_pane_g7

0x64e2,	// (0x0005f6d8) bg_cl_header_pane_g8

0x64d2,	// (0x0005f6c8) bg_cl_header_pane_g9

0x0008,

0xf946,	// (0x00068b3c) bg_cl_header_pane_g

0x71f1,	// (0x000603e7) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x71f1,	// (0x000603e7) hc_cl_list_double_graphic_heading_pane

0x7201,	// (0x000603f7) hc_cl_list_single_graphic_pane_ParamLimits

0x7201,	// (0x000603f7) hc_cl_list_single_graphic_pane

0x7214,	// (0x0006040a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7214,	// (0x0006040a) hc_cl_list_single_graphic_pane_g1

0x7220,	// (0x00060416) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7220,	// (0x00060416) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf959,	// (0x00068b4f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf959,	// (0x00068b4f) hc_cl_list_single_graphic_pane_g

0x7234,	// (0x0006042a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7234,	// (0x0006042a) hc_cl_list_single_graphic_pane_t1

0x7214,	// (0x0006040a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7214,	// (0x0006040a) hc_cl_list_double_graphic_heading_pane_g1

0x7249,	// (0x0006043f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7249,	// (0x0006043f) hc_cl_list_double_graphic_heading_pane_g2

0x725d,	// (0x00060453) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x725d,	// (0x00060453) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf95e,	// (0x00068b54) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf95e,	// (0x00068b54) hc_cl_list_double_graphic_heading_pane_g

0x7271,	// (0x00060467) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7271,	// (0x00060467) hc_cl_list_double_graphic_heading_pane_t1

0x7286,	// (0x0006047c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7286,	// (0x0006047c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf965,	// (0x00068b5b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf965,	// (0x00068b5b) hc_cl_list_double_graphic_heading_pane_t

0xd944,	// (0x00066b3a) vid4_progress_pane_g1

0xd954,	// (0x00066b4a) vid4_progress_pane_g2

0x729b,	// (0x00060491) vid4_progress_pane_g3

0xd964,	// (0x00066b5a) vid4_progress_pane_g4

0x0004,

0xf96a,	// (0x00068b60) vid4_progress_pane_g

0x72ad,	// (0x000604a3) vid4_progress_pane_t1

0xd982,	// (0x00066b78) vid4_progress_pane_t2

0x0002,

0xf975,	// (0x00068b6b) vid4_progress_pane_t

0x72c3,	// (0x000604b9) wait_bar_pane_cp07

0xe644,	// (0x0006783a) blid_firmament_pane_ParamLimits

0xe685,	// (0x0006787b) popup_blid_sat_info2_window_g1

0xe6a9,	// (0x0006789f) popup_blid_sat_info2_window_t3

0xe6b7,	// (0x000678ad) popup_blid_sat_info2_window_t4

0xe6c5,	// (0x000678bb) popup_blid_sat_info2_window_t5

0xe6d3,	// (0x000678c9) popup_blid_sat_info2_window_t6

0xe6e3,	// (0x000678d9) popup_blid_sat_info2_window_t7

0xe6f1,	// (0x000678e7) popup_blid_sat_info2_window_t8

0xe6ff,	// (0x000678f5) popup_blid_sat_info2_window_t9

0xe70d,	// (0x00067903) popup_blid_sat_info2_window_t10

0xe7c9,	// (0x000679bf) aid_firma_cardinal_ParamLimits

0xe7dd,	// (0x000679d3) blid_firmament_pane_t1_ParamLimits

0xe7f4,	// (0x000679ea) blid_firmament_pane_t2_ParamLimits

0xe80b,	// (0x00067a01) blid_firmament_pane_t3_ParamLimits

0xe822,	// (0x00067a18) blid_firmament_pane_t4_ParamLimits

0x0456,	// (0x0005964c) blid_firmament_pane_t_ParamLimits

0xe839,	// (0x00067a2f) blid_sat_info_pane_ParamLimits

0x983f,	// (0x00062a35) main_cam_set_pane_ParamLimits

0x5600,	// (0x0005e7f6) aid_size_cell_colour_35_ParamLimits

0x5620,	// (0x0005e816) aid_size_cell_colour_112_ParamLimits

0x5640,	// (0x0005e836) aid_size_cell_effect_ParamLimits

0xe449,	// (0x0006763f) bg_tb_trans_pane_cp02_ParamLimits

0xa6ff,	// (0x000638f5) heading_imed_pane_ParamLimits

0x565f,	// (0x0005e855) listscroll_imed_pane_ParamLimits

0xda2f,	// (0x00066c25) popup_call2_audio_first_window_g5_ParamLimits

0xda2f,	// (0x00066c25) popup_call2_audio_first_window_g5

0x5c0d,	// (0x0005ee03) aid_size_touch_image3_arrow_left_ParamLimits

0x5c0d,	// (0x0005ee03) aid_size_touch_image3_arrow_left

0x5c2d,	// (0x0005ee23) aid_size_touch_image3_arrow_right_ParamLimits

0x5c2d,	// (0x0005ee23) aid_size_touch_image3_arrow_right

0xd997,	// (0x00066b8d) vid4_progress_pane_t3

0x5934,	// (0x0005eb2a) main_hwr_training_symbol_option_pane_ParamLimits

0x5934,	// (0x0005eb2a) main_hwr_training_symbol_option_pane

0xf032,	// (0x00068228) popup_hwr_training_preview_window_ParamLimits

0xf032,	// (0x00068228) popup_hwr_training_preview_window

0x5950,	// (0x0005eb46) hwr_training_navi_pane_g5_ParamLimits

0x5950,	// (0x0005eb46) hwr_training_navi_pane_g5

0x6413,	// (0x0005f609) popup_char_count_window

0x983f,	// (0x00062a35) bg_popup_sub_pane_cp20_ParamLimits

0x6c73,	// (0x0005fe69) list_vitu2_match_list_pane_ParamLimits

0x6c82,	// (0x0005fe78) vitu2_page_scroll_pane_ParamLimits

0x6c82,	// (0x0005fe78) vitu2_page_scroll_pane

0xbc89,	// (0x00064e7f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbc89,	// (0x00064e7f) list_single_hwr_training_symbol_option_pane

0xbc9c,	// (0x00064e92) list_single_hwr_training_symbol_option_pane_g1

0xbca4,	// (0x00064e9a) list_single_hwr_training_symbol_option_pane_t1

0xbc80,	// (0x00064e76) bg_button_pane_cp023

0xbcb2,	// (0x00064ea8) bg_button_pane_cp024

0x7303,	// (0x000604f9) vitu2_page_scroll_pane_g1

0x730b,	// (0x00060501) vitu2_page_scroll_pane_g2

0x0001,

0xf97c,	// (0x00068b72) vitu2_page_scroll_pane_g

0x7313,	// (0x00060509) vitu2_page_scroll_pane_t1

0xe872,	// (0x00067a68) popup_char_count_window_g1

0xbce5,	// (0x00064edb) popup_char_count_window_g2

0xbcee,	// (0x00064ee4) popup_char_count_window_g3

0x0002,

0xf981,	// (0x00068b77) popup_char_count_window_g

0xbcf7,	// (0x00064eed) popup_char_count_window_t1

0x984d,	// (0x00062a43) main_vded2_pane

0xed12,	// (0x00067f08) aid_size_cell_imed_line

0xed1c,	// (0x00067f12) grid_imed_line_width_pane

0xd878,	// (0x00066a6e) vid4_indicators_pane_g4

0xbd05,	// (0x00064efb) cell_imed_line_width_pane_ParamLimits

0xbd05,	// (0x00064efb) cell_imed_line_width_pane

0xbd17,	// (0x00064f0d) cell_imed_line_width_pane_g1

0xefa8,	// (0x0006819e) cell_imed_line_width_pane_g2

0x0001,

0xf988,	// (0x00068b7e) cell_imed_line_width_pane_g

0x7322,	// (0x00060518) main_vded2_pane_g1_ParamLimits

0x7322,	// (0x00060518) main_vded2_pane_g1

0x7338,	// (0x0006052e) main_vded2_pane_g2_ParamLimits

0x7338,	// (0x0006052e) main_vded2_pane_g2

0x0001,

0xf98d,	// (0x00068b83) main_vded2_pane_g_ParamLimits

0xf98d,	// (0x00068b83) main_vded2_pane_g

0x7348,	// (0x0006053e) vded2_slider_pane_ParamLimits

0x7348,	// (0x0006053e) vded2_slider_pane

0x7358,	// (0x0006054e) aid_size_touch_vded2_end

0x7360,	// (0x00060556) aid_size_touch_vded2_playhead

0xbd20,	// (0x00064f16) aid_size_touch_vded2_start

0xbd28,	// (0x00064f1e) vded2_slider_bg_pane

0xbd31,	// (0x00064f27) vded2_slider_pane_g1

0xbd3a,	// (0x00064f30) vded2_slider_pane_g2

0x7368,	// (0x0006055e) vded2_slider_pane_g3

0x0002,

0xf992,	// (0x00068b88) vded2_slider_pane_g

0xbd42,	// (0x00064f38) vded2_slider_bg_pane_g1

0xbd4b,	// (0x00064f41) vded2_slider_bg_pane_g2

0xbd54,	// (0x00064f4a) vded2_slider_bg_pane_g3

0x0002,

0xf999,	// (0x00068b8f) vded2_slider_bg_pane_g

0x3626,	// (0x0005c81c) aid_postcard_touch_down_pane_ParamLimits

0x3626,	// (0x0005c81c) aid_postcard_touch_down_pane

0x3638,	// (0x0005c82e) aid_postcard_touch_up_pane_ParamLimits

0x3638,	// (0x0005c82e) aid_postcard_touch_up_pane

0x984d,	// (0x00062a43) main_blid2_pane

0xb6b0,	// (0x000648a6) popup_blid2_search_window

0x97cd,	// (0x000629c3) blid2_gps_pane

0x97cd,	// (0x000629c3) blid2_navig_pane

0x97cd,	// (0x000629c3) blid2_search_pane

0x97cd,	// (0x000629c3) blid2_tripm_pane

0x7371,	// (0x00060567) blid2_search_pane_g1_ParamLimits

0x7371,	// (0x00060567) blid2_search_pane_g1

0x7384,	// (0x0006057a) blid2_search_pane_t1_ParamLimits

0x7384,	// (0x0006057a) blid2_search_pane_t1

0x7396,	// (0x0006058c) aid_size_cell_blid2_gps_ParamLimits

0x7396,	// (0x0006058c) aid_size_cell_blid2_gps

0x73ae,	// (0x000605a4) blid2_gps_pane_g1_ParamLimits

0x73ae,	// (0x000605a4) blid2_gps_pane_g1

0x73c2,	// (0x000605b8) grid_blid2_satellite_pane_ParamLimits

0x73c2,	// (0x000605b8) grid_blid2_satellite_pane

0x73d6,	// (0x000605cc) blid2_navig_pane_g1_ParamLimits

0x73d6,	// (0x000605cc) blid2_navig_pane_g1

0x73e2,	// (0x000605d8) blid2_navig_pane_t1_ParamLimits

0x73e2,	// (0x000605d8) blid2_navig_pane_t1

0x73fb,	// (0x000605f1) blid2_navig_pane_t2_ParamLimits

0x73fb,	// (0x000605f1) blid2_navig_pane_t2

0x0001,

0xf9a0,	// (0x00068b96) blid2_navig_pane_t_ParamLimits

0xf9a0,	// (0x00068b96) blid2_navig_pane_t

0x7414,	// (0x0006060a) blid2_navig_ring_pane_ParamLimits

0x7414,	// (0x0006060a) blid2_navig_ring_pane

0x7429,	// (0x0006061f) blid2_speed_pane_ParamLimits

0x7429,	// (0x0006061f) blid2_speed_pane

0x7435,	// (0x0006062b) blid2_tripm_pane_g1_ParamLimits

0x7435,	// (0x0006062b) blid2_tripm_pane_g1

0x744a,	// (0x00060640) blid2_tripm_pane_g2_ParamLimits

0x744a,	// (0x00060640) blid2_tripm_pane_g2

0x745e,	// (0x00060654) blid2_tripm_pane_g3_ParamLimits

0x745e,	// (0x00060654) blid2_tripm_pane_g3

0x7472,	// (0x00060668) blid2_tripm_pane_g4_ParamLimits

0x7472,	// (0x00060668) blid2_tripm_pane_g4

0x7486,	// (0x0006067c) blid2_tripm_pane_g5_ParamLimits

0x7486,	// (0x0006067c) blid2_tripm_pane_g5

0x0005,

0xf9a5,	// (0x00068b9b) blid2_tripm_pane_g_ParamLimits

0xf9a5,	// (0x00068b9b) blid2_tripm_pane_g

0x74a8,	// (0x0006069e) blid2_tripm_pane_t1_ParamLimits

0x74a8,	// (0x0006069e) blid2_tripm_pane_t1

0x74bf,	// (0x000606b5) blid2_tripm_pane_t2_ParamLimits

0x74bf,	// (0x000606b5) blid2_tripm_pane_t2

0x74d6,	// (0x000606cc) blid2_tripm_pane_t3_ParamLimits

0x74d6,	// (0x000606cc) blid2_tripm_pane_t3

0x0003,

0xf9b2,	// (0x00068ba8) blid2_tripm_pane_t_ParamLimits

0xf9b2,	// (0x00068ba8) blid2_tripm_pane_t

0x7519,	// (0x0006070f) cell_blid2_satellite_pane_ParamLimits

0x7519,	// (0x0006070f) cell_blid2_satellite_pane

0x7531,	// (0x00060727) cell_blid2_satellite_pane_g1

0xbd5d,	// (0x00064f53) cell_blid2_satellite_pane_t1

0xe849,	// (0x00067a3f) blid2_speed_pane_g1

0xbd6b,	// (0x00064f61) blid2_speed_pane_t1

0xbd79,	// (0x00064f6f) blid2_speed_pane_t2

0x0001,

0xf9bb,	// (0x00068bb1) blid2_speed_pane_t

0xe849,	// (0x00067a3f) blid2_navig_ring_pane_g1

0x753a,	// (0x00060730) blid2_navig_ring_pane_g2

0x7542,	// (0x00060738) blid2_navig_ring_pane_g3

0x754a,	// (0x00060740) blid2_navig_ring_pane_g4

0x7552,	// (0x00060748) blid2_navig_ring_pane_g5

0x0004,

0xf9c0,	// (0x00068bb6) blid2_navig_ring_pane_g

0x97cd,	// (0x000629c3) bg_popup_window_pane_cp011

0xbd87,	// (0x00064f7d) popup_blid2_search_window_g1

0xbd8f,	// (0x00064f85) popup_blid2_search_window_t1

0xbd9d,	// (0x00064f93) popup_blid2_search_window_t2

0x0001,

0xf9cb,	// (0x00068bc1) popup_blid2_search_window_t

0xa370,	// (0x00063566) main_browser_pane_g1

0x9fea,	// (0x000631e0) main_browser_pane_ParamLimits

0x983f,	// (0x00062a35) bg_button_pane_cp011_ParamLimits

0x6495,	// (0x0005f68b) cell_vitu2_function_pane_g1_ParamLimits

0xe449,	// (0x0006763f) bg_popup_sub_pane_cp22_ParamLimits

0x6e45,	// (0x0006003b) input_focus_pane_cp08_ParamLimits

0x6e5c,	// (0x00060052) popup_vitu2_query_button_pane_ParamLimits

0x6e5c,	// (0x00060052) popup_vitu2_query_button_pane

0x6e6c,	// (0x00060062) popup_vitu2_query_input_button_pane

0xb97f,	// (0x00064b75) popup_vitu2_query_window_g1_ParamLimits

0x6e74,	// (0x0006006a) popup_vitu2_query_window_g2_ParamLimits

0xf8cc,	// (0x00068ac2) popup_vitu2_query_window_g_ParamLimits

0x97cd,	// (0x000629c3) bg_button_pane_cp026

0x755a,	// (0x00060750) popup_vitu2_query_input_button_pane_g1

0x97cd,	// (0x000629c3) bg_button_pane_cp025

0xbdab,	// (0x00064fa1) popup_vitu2_query_button_pane_t1

0x4a98,	// (0x0005dc8e) main_mp3_pane_t6

0x4aa6,	// (0x0005dc9c) popup_slider_window_cp01

0xd7e4,	// (0x000669da) cam4_battery_pane

0xd837,	// (0x00066a2d) cam4_battery_pane_cp02

0xd93c,	// (0x00066b32) cam4_battery_pane_cp01

0xd93c,	// (0x00066b32) cam4_battery_pane_cp03

0xb7aa,	// (0x000649a0) cam4_battery_pane_g1

0xe849,	// (0x00067a3f) cam4_battery_pane_g2

0x0001,

0xf9d0,	// (0x00068bc6) cam4_battery_pane_g

0xe71b,	// (0x00067911) popup_blid_sat_info2_window_t11

0xab2b,	// (0x00063d21) aid_size_touch_mv_arrow_left_ParamLimits

0xab54,	// (0x00063d4a) aid_size_touch_mv_arrow_right_ParamLimits

0xabb2,	// (0x00063da8) navi_pane_g1_ParamLimits

0xabbe,	// (0x00063db4) navi_pane_g2_ParamLimits

0xabec,	// (0x00063de2) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000685db) navi_pane_g_ParamLimits

0x30a1,	// (0x0005c297) navi_pane_mv_t1_ParamLimits

0x566b,	// (0x0005e861) grid_imed_effect_pane_ParamLimits

0x1ee3,	// (0x0005b0d9) aid_placing_vt_slider_lsc

0xa2b2,	// (0x000634a8) aid_placing_vt_slider_prt

0xb6a2,	// (0x00064898) bg_tb_trans_pane_cp01_ParamLimits

0xe998,	// (0x00067b8e) popup_image_details_window_g1_ParamLimits

0xe9ab,	// (0x00067ba1) popup_image_details_window_g2_ParamLimits

0xe9c0,	// (0x00067bb6) popup_image_details_window_g3_ParamLimits

0xe9c0,	// (0x00067bb6) popup_image_details_window_g3

0x049b,	// (0x00059691) popup_image_details_window_g_ParamLimits

0xe9d4,	// (0x00067bca) popup_image_details_window_t1_ParamLimits

0xe9e6,	// (0x00067bdc) popup_image_details_window_t2_ParamLimits

0xe9ff,	// (0x00067bf5) popup_image_details_window_t3_ParamLimits

0xea13,	// (0x00067c09) popup_image_details_window_t4_ParamLimits

0xea2e,	// (0x00067c24) popup_image_details_window_t5_ParamLimits

0x04a2,	// (0x00059698) popup_image_details_window_t_ParamLimits

0x71af,	// (0x000603a5) cl_header_name_pane_ParamLimits

0x71af,	// (0x000603a5) cl_header_name_pane

0x7562,	// (0x00060758) cl_header_name_pane_t1_ParamLimits

0x7562,	// (0x00060758) cl_header_name_pane_t1

0x7583,	// (0x00060779) cl_header_name_pane_t2_ParamLimits

0x7583,	// (0x00060779) cl_header_name_pane_t2

0x75c5,	// (0x000607bb) cl_header_name_pane_t3_ParamLimits

0x75c5,	// (0x000607bb) cl_header_name_pane_t3

0x0002,

0xf9d5,	// (0x00068bcb) cl_header_name_pane_t_ParamLimits

0xf9d5,	// (0x00068bcb) cl_header_name_pane_t

0xac79,	// (0x00063e6f) navi_pane_mv_g2_ParamLimits

0x63a3,	// (0x0005f599) field_vitu2_entry_pane_g1_ParamLimits

0x63af,	// (0x0005f5a5) field_vitu2_entry_pane_g2_ParamLimits

0x63bb,	// (0x0005f5b1) field_vitu2_entry_pane_g3_ParamLimits

0x63bb,	// (0x0005f5b1) field_vitu2_entry_pane_g3

0xf7cb,	// (0x000689c1) field_vitu2_entry_pane_g_ParamLimits

0xd8ab,	// (0x00066aa1) cell_vitu2_itu_pane_g1_ParamLimits

0x6429,	// (0x0005f61f) cell_vitu2_itu_pane_g2_ParamLimits

0x6429,	// (0x0005f61f) cell_vitu2_itu_pane_g2

0x0001,

0xf7d7,	// (0x000689cd) cell_vitu2_itu_pane_g_ParamLimits

0xf7d7,	// (0x000689cd) cell_vitu2_itu_pane_g

0x983f,	// (0x00062a35) bg_vkb2_func_pane_cp05_ParamLimits

0x983f,	// (0x00062a35) bg_vkb2_func_pane_cp05

0x983f,	// (0x00062a35) bg_vkb2_func_pane_cp03

0x983f,	// (0x00062a35) bg_vkb2_func_pane_cp04

0x983f,	// (0x00062a35) bg_vkb2_func_pane_cp10_ParamLimits

0x983f,	// (0x00062a35) bg_vkb2_func_pane_cp10

0x7155,	// (0x0006034b) bg_vkb2_func_pane_cp08

0x713c,	// (0x00060332) bg_vkb2_func_pane_cp06

0x7149,	// (0x0006033f) bg_vkb2_func_pane_cp07

0xbcbb,	// (0x00064eb1) bg_vkb2_func_pane_cp11_ParamLimits

0xbcbb,	// (0x00064eb1) bg_vkb2_func_pane_cp11

0xbcd0,	// (0x00064ec6) bg_vkb2_func_pane_cp12_ParamLimits

0xbcd0,	// (0x00064ec6) bg_vkb2_func_pane_cp12

0x97cd,	// (0x000629c3) bg_vkb2_func_pane_cp09

0x64b2,	// (0x0005f6a8) bg_vkb2_func_pane_g1

0xa481,	// (0x00063677) bg_vkb2_func_pane_g2

0x64ba,	// (0x0005f6b0) bg_vkb2_func_pane_g3

0x64c2,	// (0x0005f6b8) bg_vkb2_func_pane_g4

0xb944,	// (0x00064b3a) bg_vkb2_func_pane_g5

0x64da,	// (0x0005f6d0) bg_vkb2_func_pane_g6

0x64e2,	// (0x0005f6d8) bg_vkb2_func_pane_g7

0x64d2,	// (0x0005f6c8) bg_vkb2_func_pane_g8

0xa461,	// (0x00063657) bg_vkb2_func_pane_g9

0x0008,

0xf9dc,	// (0x00068bd2) bg_vkb2_func_pane_g

0x7498,	// (0x0006068e) blid2_tripm_pane_g6_ParamLimits

0x7498,	// (0x0006068e) blid2_tripm_pane_g6

0x5aa9,	// (0x0005ec9f) mp4_progress_pane_g1

0x7507,	// (0x000606fd) blid2_tripm_values_pane_ParamLimits

0x7507,	// (0x000606fd) blid2_tripm_values_pane

0x75f6,	// (0x000607ec) blid2_tripm_values_pane_t1

0x7604,	// (0x000607fa) blid2_tripm_values_pane_t2

0x7612,	// (0x00060808) blid2_tripm_values_pane_t3

0x7620,	// (0x00060816) blid2_tripm_values_pane_t4

0x762e,	// (0x00060824) blid2_tripm_values_pane_t5

0x763c,	// (0x00060832) blid2_tripm_values_pane_t6

0x764a,	// (0x00060840) blid2_tripm_values_pane_t7

0x7658,	// (0x0006084e) blid2_tripm_values_pane_t8

0x7666,	// (0x0006085c) blid2_tripm_values_pane_t9

0x0008,

0xf9ef,	// (0x00068be5) blid2_tripm_values_pane_t

0x1f1a,	// (0x0005b110) call_video_pane_t1_ParamLimits

0x1f34,	// (0x0005b12a) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00068464) call_video_pane_t_ParamLimits

0x3535,	// (0x0005c72b) msg_header_pane_g1_ParamLimits

0xae58,	// (0x0006404e) msg_header_pane_g2_ParamLimits

0xae58,	// (0x0006404e) msg_header_pane_g2

0x0001,

0xf488,	// (0x0006867e) msg_header_pane_g_ParamLimits

0xf488,	// (0x0006867e) msg_header_pane_g

0x9fea,	// (0x000631e0) main_clock2_pane_ParamLimits

0x5384,	// (0x0005e57a) grid_clock2_toolbar_pane_ParamLimits

0x5384,	// (0x0005e57a) grid_clock2_toolbar_pane

0x5384,	// (0x0005e57a) listscroll_clock2_pane_ParamLimits

0x5384,	// (0x0005e57a) listscroll_clock2_pane

0x5467,	// (0x0005e65d) main_clock2_pane_t3_ParamLimits

0x5467,	// (0x0005e65d) main_clock2_pane_t3

0x5489,	// (0x0005e67f) main_clock2_pane_t4_ParamLimits

0x5489,	// (0x0005e67f) main_clock2_pane_t4

0xbdb9,	// (0x00064faf) cell_clock2_toolbar_pane

0xbdc1,	// (0x00064fb7) cell_clock2_toolbar_pane_cp01

0xbdc1,	// (0x00064fb7) cell_clock2_toolbar_pane_cp02

0xbdc9,	// (0x00064fbf) cell_clock2_toolbar_pane_cp03

0xbdd1,	// (0x00064fc7) list_clock2_pane

0xaab0,	// (0x00063ca6) scroll_pane_cp10

0xbdd9,	// (0x00064fcf) list_single_clock2_pane_ParamLimits

0xbdd9,	// (0x00064fcf) list_single_clock2_pane

0xa211,	// (0x00063407) list_highlight_pane_cp08

0xbde6,	// (0x00064fdc) list_single_clock2_pane_t1

0xbdf4,	// (0x00064fea) list_single_clock2_pane_t2

0x0001,

0xfa02,	// (0x00068bf8) list_single_clock2_pane_t

0x97cd,	// (0x000629c3) bg_button_pane_cp10

0xbe02,	// (0x00064ff8) cell_clock2_toolbar_pane_g1

0x35ba,	// (0x0005c7b0) aid_main_viewer_pane_g1_ParamLimits

0x35ba,	// (0x0005c7b0) aid_main_viewer_pane_g1

0x35c6,	// (0x0005c7bc) aid_main_viewer_pane_g2_ParamLimits

0x35c6,	// (0x0005c7bc) aid_main_viewer_pane_g2

0x35d2,	// (0x0005c7c8) aid_main_viewer_pane_g3_ParamLimits

0x35d2,	// (0x0005c7c8) aid_main_viewer_pane_g3

0x35e1,	// (0x0005c7d7) aid_main_viewer_pane_g4_ParamLimits

0x35e1,	// (0x0005c7d7) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0006868f) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0006868f) aid_main_viewer_pane_g

0x3de9,	// (0x0005cfdf) main_calc_pane_ParamLimits

0x3e0d,	// (0x0005d003) main_dialer2_pane_ParamLimits

0x984d,	// (0x00062a43) main_cam6_pane

0x984d,	// (0x00062a43) main_vid6_pane

0x5390,	// (0x0005e586) listscroll_gen_pane_cp06_ParamLimits

0x5390,	// (0x0005e586) listscroll_gen_pane_cp06

0x54aa,	// (0x0005e6a0) main_clock2_pane_t5_ParamLimits

0x54aa,	// (0x0005e6a0) main_clock2_pane_t5

0x5501,	// (0x0005e6f7) aid_call2_pane_cp10_ParamLimits

0x5513,	// (0x0005e709) aid_call_pane_cp10_ParamLimits

0xab1f,	// (0x00063d15) popup_clock_analogue_window_cp10_g1_ParamLimits

0xab1f,	// (0x00063d15) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5525,	// (0x0005e71b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5525,	// (0x0005e71b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xab1f,	// (0x00063d15) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6b9,	// (0x000688af) popup_clock_analogue_window_cp10_g_ParamLimits

0x5537,	// (0x0005e72d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5bba,	// (0x0005edb0) cell_dialer2_keypad_pane_g2_ParamLimits

0x5bba,	// (0x0005edb0) cell_dialer2_keypad_pane_g2

0x0001,

0xf76a,	// (0x00068960) cell_dialer2_keypad_pane_g_ParamLimits

0xf76a,	// (0x00068960) cell_dialer2_keypad_pane_g

0x5bd6,	// (0x0005edcc) cell_dialer2_keypad_pane_t1

0x684b,	// (0x0005fa41) main_cset_text2_pane_ParamLimits

0x684b,	// (0x0005fa41) main_cset_text2_pane

0xbb65,	// (0x00064d5b) area_vitu2_query_pane_g1_ParamLimits

0x70e1,	// (0x000602d7) area_vitu2_query_pane_g2_ParamLimits

0xf91f,	// (0x00068b15) area_vitu2_query_pane_g_ParamLimits

0xbbe9,	// (0x00064ddf) area_vitu2_query_pane_t7_ParamLimits

0xbbe9,	// (0x00064ddf) area_vitu2_query_pane_t7

0x713c,	// (0x00060332) bg_button_pane_cp018_ParamLimits

0x7149,	// (0x0006033f) bg_button_pane_cp021_ParamLimits

0x7155,	// (0x0006034b) bg_button_pane_cp022_ParamLimits

0x7155,	// (0x0006034b) bg_vkb2_func_pane_cp08_ParamLimits

0x713c,	// (0x00060332) bg_vkb2_func_pane_cp06_ParamLimits

0x7149,	// (0x0006033f) bg_vkb2_func_pane_cp07_ParamLimits

0x7164,	// (0x0006035a) input_focus_pane_cp09_ParamLimits

0xd9ad,	// (0x00066ba3) cam6_autofocus_pane_ParamLimits

0xd9ad,	// (0x00066ba3) cam6_autofocus_pane

0x7674,	// (0x0006086a) cam6_image_uncrop_pane_ParamLimits

0x7674,	// (0x0006086a) cam6_image_uncrop_pane

0x7681,	// (0x00060877) cam6_indi_pane_ParamLimits

0x7681,	// (0x00060877) cam6_indi_pane

0x7697,	// (0x0006088d) cam6_mode_pane_ParamLimits

0x7697,	// (0x0006088d) cam6_mode_pane

0x76a9,	// (0x0006089f) cam6_timer_pane_ParamLimits

0x76a9,	// (0x0006089f) cam6_timer_pane

0x76b5,	// (0x000608ab) cam6_zoom_pane_ParamLimits

0x76b5,	// (0x000608ab) cam6_zoom_pane

0x76c1,	// (0x000608b7) cam6_mode_pane_g1_ParamLimits

0x76c1,	// (0x000608b7) cam6_mode_pane_g1

0x76d1,	// (0x000608c7) cam6_mode_pane_g2_ParamLimits

0x76d1,	// (0x000608c7) cam6_mode_pane_g2

0x76e1,	// (0x000608d7) cam6_mode_pane_g3_ParamLimits

0x76e1,	// (0x000608d7) cam6_mode_pane_g3

0x76f1,	// (0x000608e7) cam6_mode_pane_g4_ParamLimits

0x76f1,	// (0x000608e7) cam6_mode_pane_g4

0x0003,

0xfa07,	// (0x00068bfd) cam6_mode_pane_g_ParamLimits

0xfa07,	// (0x00068bfd) cam6_mode_pane_g

0xbe0a,	// (0x00065000) bg_tb_trans_pane_cp08_ParamLimits

0xbe0a,	// (0x00065000) bg_tb_trans_pane_cp08

0xbe18,	// (0x0006500e) cam6_battery_pane_ParamLimits

0xbe18,	// (0x0006500e) cam6_battery_pane

0xbe2e,	// (0x00065024) cam6_indi_pane_g1_ParamLimits

0xbe2e,	// (0x00065024) cam6_indi_pane_g1

0xbe40,	// (0x00065036) cam6_indi_pane_g2_ParamLimits

0xbe40,	// (0x00065036) cam6_indi_pane_g2

0xbe52,	// (0x00065048) cam6_indi_pane_g3_ParamLimits

0xbe52,	// (0x00065048) cam6_indi_pane_g3

0x0002,

0xfa10,	// (0x00068c06) cam6_indi_pane_g_ParamLimits

0xfa10,	// (0x00068c06) cam6_indi_pane_g

0xbe64,	// (0x0006505a) cam6_indi_pane_t1_ParamLimits

0xbe64,	// (0x0006505a) cam6_indi_pane_t1

0x61d5,	// (0x0005f3cb) cam6_autofocus_pane_g1

0x61cd,	// (0x0005f3c3) cam6_autofocus_pane_g2

0x61e5,	// (0x0005f3db) cam6_autofocus_pane_g3

0x61dd,	// (0x0005f3d3) cam6_autofocus_pane_g4

0x0003,

0xfa17,	// (0x00068c0d) cam6_autofocus_pane_g

0xbe8a,	// (0x00065080) cam6_timer_pane_g1

0xbe92,	// (0x00065088) cam6_timer_pane_t1

0xbea0,	// (0x00065096) cam6_zoom_cont_pane

0xbea8,	// (0x0006509e) cam6_zoom_pane_g1

0xbeb0,	// (0x000650a6) cam6_zoom_pane_g2

0x7701,	// (0x000608f7) cam6_zoom_pane_g3

0x0002,

0xfa20,	// (0x00068c16) cam6_zoom_pane_g

0xe849,	// (0x00067a3f) cam6_battery_pane_g1

0xe849,	// (0x00067a3f) cam6_battery_pane_g2

0x0001,

0x045f,	// (0x00059655) cam6_battery_pane_g

0xbeb8,	// (0x000650ae) cam6_zoom_cont_pane_g1

0xbec1,	// (0x000650b7) cam6_zoom_cont_pane_g2

0xbeca,	// (0x000650c0) cam6_zoom_cont_pane_g3

0x0002,

0xfa27,	// (0x00068c1d) cam6_zoom_cont_pane_g

0x771e,	// (0x00060914) cam6_mode_pane_cp_ParamLimits

0x771e,	// (0x00060914) cam6_mode_pane_cp

0x7730,	// (0x00060926) cam6_zoom_pane_cp_ParamLimits

0x7730,	// (0x00060926) cam6_zoom_pane_cp

0x773c,	// (0x00060932) vid6_image_uncrop_cif_pane_ParamLimits

0x773c,	// (0x00060932) vid6_image_uncrop_cif_pane

0x774a,	// (0x00060940) vid6_image_uncrop_nhd_pane_ParamLimits

0x774a,	// (0x00060940) vid6_image_uncrop_nhd_pane

0x7757,	// (0x0006094d) vid6_image_uncrop_vga_pane_ParamLimits

0x7757,	// (0x0006094d) vid6_image_uncrop_vga_pane

0x7764,	// (0x0006095a) vid6_image_uncrop_wvga_pane_ParamLimits

0x7764,	// (0x0006095a) vid6_image_uncrop_wvga_pane

0x7771,	// (0x00060967) vid6_indi_pane_ParamLimits

0x7771,	// (0x00060967) vid6_indi_pane

0xbe0a,	// (0x00065000) bg_tb_trans_pane_cp09_ParamLimits

0xbe0a,	// (0x00065000) bg_tb_trans_pane_cp09

0xbede,	// (0x000650d4) cam6_battery_pane_cp_ParamLimits

0xbede,	// (0x000650d4) cam6_battery_pane_cp

0xbeea,	// (0x000650e0) vid6_indi_pane_g1_ParamLimits

0xbeea,	// (0x000650e0) vid6_indi_pane_g1

0xbefc,	// (0x000650f2) vid6_indi_pane_g2_ParamLimits

0xbefc,	// (0x000650f2) vid6_indi_pane_g2

0xbf0e,	// (0x00065104) vid6_indi_pane_g3_ParamLimits

0xbf0e,	// (0x00065104) vid6_indi_pane_g3

0xbf23,	// (0x00065119) vid6_indi_pane_g4_ParamLimits

0xbf23,	// (0x00065119) vid6_indi_pane_g4

0xbf38,	// (0x0006512e) vid6_indi_pane_g5_ParamLimits

0xbf38,	// (0x0006512e) vid6_indi_pane_g5

0x0004,

0xfa2e,	// (0x00068c24) vid6_indi_pane_g_ParamLimits

0xfa2e,	// (0x00068c24) vid6_indi_pane_g

0xbf52,	// (0x00065148) vid6_indi_pane_t1_ParamLimits

0xbf52,	// (0x00065148) vid6_indi_pane_t1

0xbf68,	// (0x0006515e) vid6_indi_pane_t2_ParamLimits

0xbf68,	// (0x0006515e) vid6_indi_pane_t2

0xbf90,	// (0x00065186) vid6_indi_pane_t3_ParamLimits

0xbf90,	// (0x00065186) vid6_indi_pane_t3

0xbfb8,	// (0x000651ae) vid6_indi_pane_t4_ParamLimits

0xbfb8,	// (0x000651ae) vid6_indi_pane_t4

0x0003,

0xfa39,	// (0x00068c2f) vid6_indi_pane_t_ParamLimits

0xfa39,	// (0x00068c2f) vid6_indi_pane_t

0xbfdc,	// (0x000651d2) wait_bar_pane_cp08

0x7788,	// (0x0006097e) main_cset_text2_pane_t1_ParamLimits

0x7788,	// (0x0006097e) main_cset_text2_pane_t1

0x7709,	// (0x000608ff) listscroll_gen_pane_cp06_t1_ParamLimits

0x7709,	// (0x000608ff) listscroll_gen_pane_cp06_t1

0x984d,	// (0x00062a43) main_cam6_set_pane

0xd7d6,	// (0x000669cc) bg_tb_trans_pane_cp06_ParamLimits

0xd7ec,	// (0x000669e2) cam4_indicators_pane_g1_ParamLimits

0xd7fd,	// (0x000669f3) cam4_indicators_pane_g2_ParamLimits

0xf7a7,	// (0x0006899d) cam4_indicators_pane_g_ParamLimits

0xd815,	// (0x00066a0b) cam4_indicators_pane_t1_ParamLimits

0x983f,	// (0x00062a35) bg_tb_trans_pane_cp07_ParamLimits

0xd83f,	// (0x00066a35) vid4_indicators_pane_g1_ParamLimits

0xd853,	// (0x00066a49) vid4_indicators_pane_g2_ParamLimits

0xd867,	// (0x00066a5d) vid4_indicators_pane_g3_ParamLimits

0xd878,	// (0x00066a6e) vid4_indicators_pane_g4_ParamLimits

0xf7b9,	// (0x000689af) vid4_indicators_pane_g_ParamLimits

0xd894,	// (0x00066a8a) vid4_indicators_pane_t1_ParamLimits

0xd944,	// (0x00066b3a) vid4_progress_pane_g1_ParamLimits

0xd954,	// (0x00066b4a) vid4_progress_pane_g2_ParamLimits

0x729b,	// (0x00060491) vid4_progress_pane_g3_ParamLimits

0xd964,	// (0x00066b5a) vid4_progress_pane_g4_ParamLimits

0xf96a,	// (0x00068b60) vid4_progress_pane_g_ParamLimits

0x72ad,	// (0x000604a3) vid4_progress_pane_t1_ParamLimits

0xd982,	// (0x00066b78) vid4_progress_pane_t2_ParamLimits

0xd997,	// (0x00066b8d) vid4_progress_pane_t3_ParamLimits

0xf975,	// (0x00068b6b) vid4_progress_pane_t_ParamLimits

0x72c3,	// (0x000604b9) wait_bar_pane_cp07_ParamLimits

0x77a3,	// (0x00060999) main_cam6_set_pane_g2_ParamLimits

0x77a3,	// (0x00060999) main_cam6_set_pane_g2

0x77c5,	// (0x000609bb) main_cset6_listscroll_pane_ParamLimits

0x77c5,	// (0x000609bb) main_cset6_listscroll_pane

0x77df,	// (0x000609d5) main_cset6_slider_pane_ParamLimits

0x77df,	// (0x000609d5) main_cset6_slider_pane

0x77f5,	// (0x000609eb) main_cset6_text2_pane_ParamLimits

0x77f5,	// (0x000609eb) main_cset6_text2_pane

0xbfeb,	// (0x000651e1) main_cset6_text_pane

0xbff3,	// (0x000651e9) main_cset_list_pane_copy1_ParamLimits

0xbff3,	// (0x000651e9) main_cset_list_pane_copy1

0xc003,	// (0x000651f9) scroll_pane_cp028_copy1

0x7803,	// (0x000609f9) cset_list_set_pane_copy1

0x7814,	// (0x00060a0a) aid_position_infowindow_above_copy1

0x781c,	// (0x00060a12) aid_position_infowindow_below_copy1

0x7824,	// (0x00060a1a) cset_list_set_pane_g1_copy1

0x6adc,	// (0x0005fcd2) cset_list_set_pane_g3_copy1_ParamLimits

0x6adc,	// (0x0005fcd2) cset_list_set_pane_g3_copy1

0x782c,	// (0x00060a22) cset_list_set_pane_t1_copy1_ParamLimits

0x782c,	// (0x00060a22) cset_list_set_pane_t1_copy1

0xb6a2,	// (0x00064898) list_highlight_pane_cp021_copy1_ParamLimits

0xb6a2,	// (0x00064898) list_highlight_pane_cp021_copy1

0xc00c,	// (0x00065202) cset6_slider_pane_ParamLimits

0xc00c,	// (0x00065202) cset6_slider_pane

0xc038,	// (0x0006522e) main_cset6_slider_pane_g1_ParamLimits

0xc038,	// (0x0006522e) main_cset6_slider_pane_g1

0x7841,	// (0x00060a37) main_cset6_slider_pane_g2_ParamLimits

0x7841,	// (0x00060a37) main_cset6_slider_pane_g2

0xb837,	// (0x00064a2d) main_cset6_slider_pane_g3_ParamLimits

0xb837,	// (0x00064a2d) main_cset6_slider_pane_g3

0x7869,	// (0x00060a5f) main_cset6_slider_pane_g4_ParamLimits

0x7869,	// (0x00060a5f) main_cset6_slider_pane_g4

0x6916,	// (0x0005fb0c) main_cset6_slider_pane_g5_ParamLimits

0x6916,	// (0x0005fb0c) main_cset6_slider_pane_g5

0xb837,	// (0x00064a2d) main_cset6_slider_pane_g7_ParamLimits

0xb837,	// (0x00064a2d) main_cset6_slider_pane_g7

0xb843,	// (0x00064a39) main_cset6_slider_pane_g8_ParamLimits

0xb843,	// (0x00064a39) main_cset6_slider_pane_g8

0x68ce,	// (0x0005fac4) main_cset6_slider_pane_g9_ParamLimits

0x68ce,	// (0x0005fac4) main_cset6_slider_pane_g9

0x68da,	// (0x0005fad0) main_cset6_slider_pane_g10_ParamLimits

0x68da,	// (0x0005fad0) main_cset6_slider_pane_g10

0xb84f,	// (0x00064a45) main_cset6_slider_pane_g11_ParamLimits

0xb84f,	// (0x00064a45) main_cset6_slider_pane_g11

0xb85b,	// (0x00064a51) main_cset6_slider_pane_g12_ParamLimits

0xb85b,	// (0x00064a51) main_cset6_slider_pane_g12

0x68e6,	// (0x0005fadc) main_cset6_slider_pane_g13_ParamLimits

0x68e6,	// (0x0005fadc) main_cset6_slider_pane_g13

0x68f2,	// (0x0005fae8) main_cset6_slider_pane_g14_ParamLimits

0x68f2,	// (0x0005fae8) main_cset6_slider_pane_g14

0x7875,	// (0x00060a6b) main_cset6_slider_pane_g15_ParamLimits

0x7875,	// (0x00060a6b) main_cset6_slider_pane_g15

0x6916,	// (0x0005fb0c) main_cset6_slider_pane_g16_ParamLimits

0x6916,	// (0x0005fb0c) main_cset6_slider_pane_g16

0x6922,	// (0x0005fb18) main_cset6_slider_pane_g17_ParamLimits

0x6922,	// (0x0005fb18) main_cset6_slider_pane_g17

0x0011,

0xfa42,	// (0x00068c38) main_cset6_slider_pane_g_ParamLimits

0xfa42,	// (0x00068c38) main_cset6_slider_pane_g

0xc060,	// (0x00065256) main_cset6_slider_pane_t1_ParamLimits

0xc060,	// (0x00065256) main_cset6_slider_pane_t1

0x7899,	// (0x00060a8f) main_cset6_slider_pane_t2_ParamLimits

0x7899,	// (0x00060a8f) main_cset6_slider_pane_t2

0x78c4,	// (0x00060aba) main_cset6_slider_pane_t3_ParamLimits

0x78c4,	// (0x00060aba) main_cset6_slider_pane_t3

0x78ef,	// (0x00060ae5) main_cset6_slider_pane_t4_ParamLimits

0x78ef,	// (0x00060ae5) main_cset6_slider_pane_t4

0x791a,	// (0x00060b10) main_cset6_slider_pane_t5_ParamLimits

0x791a,	// (0x00060b10) main_cset6_slider_pane_t5

0xc0a1,	// (0x00065297) main_cset6_slider_pane_t7_ParamLimits

0xc0a1,	// (0x00065297) main_cset6_slider_pane_t7

0x7945,	// (0x00060b3b) main_cset6_slider_pane_t8_ParamLimits

0x7945,	// (0x00060b3b) main_cset6_slider_pane_t8

0x7969,	// (0x00060b5f) main_cset6_slider_pane_t9_ParamLimits

0x7969,	// (0x00060b5f) main_cset6_slider_pane_t9

0x798d,	// (0x00060b83) main_cset6_slider_pane_t10_ParamLimits

0x798d,	// (0x00060b83) main_cset6_slider_pane_t10

0x79b1,	// (0x00060ba7) main_cset6_slider_pane_t11_ParamLimits

0x79b1,	// (0x00060ba7) main_cset6_slider_pane_t11

0xc0d7,	// (0x000652cd) main_cset6_slider_pane_t14_ParamLimits

0xc0d7,	// (0x000652cd) main_cset6_slider_pane_t14

0xc110,	// (0x00065306) main_cset6_slider_pane_t15_ParamLimits

0xc110,	// (0x00065306) main_cset6_slider_pane_t15

0x000b,

0xfa67,	// (0x00068c5d) main_cset6_slider_pane_t_ParamLimits

0xfa67,	// (0x00068c5d) main_cset6_slider_pane_t

0xc149,	// (0x0006533f) cset_slider_pane_g1_copy1

0xc152,	// (0x00065348) cset_slider_pane_g2_copy1

0xc15b,	// (0x00065351) cset_slider_pane_g3_copy1

0x97cd,	// (0x000629c3) bg_popup_sub_pane_cp011_copy1

0xc164,	// (0x0006535a) main_cset_text_pane_g1_copy1

0xb993,	// (0x00064b89) main_cset_text_pane_t1_copy1

0xb9a1,	// (0x00064b97) main_cset_text_pane_t2_copy1

0xb9af,	// (0x00064ba5) main_cset_text_pane_t3_copy1

0xb9bd,	// (0x00064bb3) main_cset_text_pane_t4_copy1

0xc16c,	// (0x00065362) main_cset_text_pane_t5_copy1

0xc17a,	// (0x00065370) main_cset_text_pane_t6_copy1

0xc188,	// (0x0006537e) main_cset_text_pane_t7_copy1

0x7aa6,	// (0x00060c9c) main_cset_text2_pane_t1_copy1

0x983f,	// (0x00062a35) main_ncimui_pane

0x4027,	// (0x0005d21d) popup_query_ncimui_window_ParamLimits

0x4027,	// (0x0005d21d) popup_query_ncimui_window

0x4c1c,	// (0x0005de12) field_cale_ev2_pane_g4_ParamLimits

0x4c1c,	// (0x0005de12) field_cale_ev2_pane_g4

0x5a33,	// (0x0005ec29) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5a33,	// (0x0005ec29) cell_video_dialer_keypad_pane_g2

0x0001,

0xf745,	// (0x0006893b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf745,	// (0x0006893b) cell_video_dialer_keypad_pane_g

0x5a4b,	// (0x0005ec41) cell_video_dialer_keypad_pane_t1

0x97cd,	// (0x000629c3) bg_popup_window_pane_cp012

0xa9a7,	// (0x00063b9d) heading_pane_cp06

0xc1b4,	// (0x000653aa) ncim_query_content_pane

0x97cd,	// (0x000629c3) bg_popup_heading_pane_cp01

0xc1bc,	// (0x000653b2) ncim_heading_pane_t1

0xc1ca,	// (0x000653c0) ncim_indicator_popup_pane

0xc1dc,	// (0x000653d2) ncim_query_button_pane

0xc1f0,	// (0x000653e6) ncim_query_content_pane_t1

0xc202,	// (0x000653f8) ncim_query_content_pane_t2

0x0005,

0xfaab,	// (0x00068ca1) ncim_query_content_pane_t

0xc23c,	// (0x00065432) ncim_query_list_pane

0xc24e,	// (0x00065444) ncim_query_popup_pane

0xc1ca,	// (0x000653c0) ncim_indicator_popup_pane_ParamLimits

0x7be6,	// (0x00060ddc) ncim_query_content_pane_g1_ParamLimits

0x7be6,	// (0x00060ddc) ncim_query_content_pane_g1

0xc1f0,	// (0x000653e6) ncim_query_content_pane_t1_ParamLimits

0xc202,	// (0x000653f8) ncim_query_content_pane_t2_ParamLimits

0x7bf2,	// (0x00060de8) ncim_query_content_pane_t3_ParamLimits

0x7bf2,	// (0x00060de8) ncim_query_content_pane_t3

0x7c1a,	// (0x00060e10) ncim_query_content_pane_t4_ParamLimits

0x7c1a,	// (0x00060e10) ncim_query_content_pane_t4

0x7c42,	// (0x00060e38) ncim_query_content_pane_t5_ParamLimits

0x7c42,	// (0x00060e38) ncim_query_content_pane_t5

0xc214,	// (0x0006540a) ncim_query_content_pane_t6_ParamLimits

0xc214,	// (0x0006540a) ncim_query_content_pane_t6

0xfaab,	// (0x00068ca1) ncim_query_content_pane_t_ParamLimits

0xc23c,	// (0x00065432) ncim_query_list_pane_ParamLimits

0xc24e,	// (0x00065444) ncim_query_popup_pane_ParamLimits

0xc262,	// (0x00065458) wait_bar_pane_cp04

0x97cd,	// (0x000629c3) input_focus_pane_cp011

0xc26a,	// (0x00065460) ncim_query_popup_pane_t1

0xc278,	// (0x0006546e) ncim_list_query_list_pane_ParamLimits

0xc278,	// (0x0006546e) ncim_list_query_list_pane

0x97cd,	// (0x000629c3) bg_button_pane_cp027

0xc28b,	// (0x00065481) ncim_query_button_pane_g1

0x97cd,	// (0x000629c3) list_highlight_pane_cp012

0xc295,	// (0x0006548b) ncim_list_query_list_pane_g1

0xc29d,	// (0x00065493) ncim_list_query_list_pane_t1

0xd809,	// (0x000669ff) cam4_indicators_pane_g3_ParamLimits

0xd809,	// (0x000669ff) cam4_indicators_pane_g3

0xd884,	// (0x00066a7a) vid4_indicators_pane_g5_ParamLimits

0xd884,	// (0x00066a7a) vid4_indicators_pane_g5

0xd973,	// (0x00066b69) vid4_progress_pane_g5_ParamLimits

0xd973,	// (0x00066b69) vid4_progress_pane_g5

0x7ad2,	// (0x00060cc8) main_ncimui_pane_g1

0x7b3b,	// (0x00060d31) ncimui_group_query_pane_ParamLimits

0x7b3b,	// (0x00060d31) ncimui_group_query_pane

0x7b83,	// (0x00060d79) ncimui_list_pane_ParamLimits

0x7b83,	// (0x00060d79) ncimui_list_pane

0x7ba9,	// (0x00060d9f) ncimui_text_pane_ParamLimits

0x7ba9,	// (0x00060d9f) ncimui_text_pane

0x7c6a,	// (0x00060e60) ncimui_text_pane_t1_ParamLimits

0x7c6a,	// (0x00060e60) ncimui_text_pane_t1

0xc2ab,	// (0x000654a1) ncimui_list_single_graphic_pane_ParamLimits

0xc2ab,	// (0x000654a1) ncimui_list_single_graphic_pane

0x7c87,	// (0x00060e7d) ncimui_query_pane_ParamLimits

0x7c87,	// (0x00060e7d) ncimui_query_pane

0x97cd,	// (0x000629c3) list_highlight_pane_cp013

0xc2bb,	// (0x000654b1) ncim_list_query_list_pane_t1_copy1

0xc2c9,	// (0x000654bf) ncim_list_single_graphic_pane_g1

0x7c9a,	// (0x00060e90) ncim_query_button_pane_cp01

0x7ca6,	// (0x00060e9c) ncim_query_entry_pane_ParamLimits

0x7ca6,	// (0x00060e9c) ncim_query_entry_pane

0x7cb9,	// (0x00060eaf) ncimui_query_pane_g1

0x7cc5,	// (0x00060ebb) ncimui_query_pane_t1_ParamLimits

0x7cc5,	// (0x00060ebb) ncimui_query_pane_t1

0xb6a2,	// (0x00064898) input_focus_pane_cp012

0xc2d1,	// (0x000654c7) ncim_query_entry_pane_t1

0x9fea,	// (0x000631e0) main_im_pane_ParamLimits

0x983f,	// (0x00062a35) main_mobtv_pane_ParamLimits

0x983f,	// (0x00062a35) main_mobtv_pane

0x68ce,	// (0x0005fac4) main_cset6_slider_pane_g18_ParamLimits

0x68ce,	// (0x0005fac4) main_cset6_slider_pane_g18

0x788d,	// (0x00060a83) main_cset6_slider_pane_g19_ParamLimits

0x788d,	// (0x00060a83) main_cset6_slider_pane_g19

0xc2e3,	// (0x000654d9) bg_main_mobtv_pane_ParamLimits

0xc2e3,	// (0x000654d9) bg_main_mobtv_pane

0x7cde,	// (0x00060ed4) main_mobtv_info_pane

0x7ce7,	// (0x00060edd) main_mobtv_loading_pane_ParamLimits

0x7ce7,	// (0x00060edd) main_mobtv_loading_pane

0xc2f1,	// (0x000654e7) main_mobtv_pg_channel_list_pane

0xc2fb,	// (0x000654f1) main_mobtv_pg_hdr_pane

0x7cf4,	// (0x00060eea) main_mobtv_programe_curr_pane_ParamLimits

0x7cf4,	// (0x00060eea) main_mobtv_programe_curr_pane

0x7d01,	// (0x00060ef7) main_mobtv_programe_next_pane_ParamLimits

0x7d01,	// (0x00060ef7) main_mobtv_programe_next_pane

0xc304,	// (0x000654fa) popup_mobtv_noti_window

0xe849,	// (0x00067a3f) main_tv_pg_hdr_pane_g1

0xc30c,	// (0x00065502) main_tv_pg_hdr_pane_g2

0xc314,	// (0x0006550a) main_tv_pg_hdr_pane_g3

0xc31c,	// (0x00065512) main_tv_pg_hdr_pane_g4

0xc324,	// (0x0006551a) main_tv_pg_hdr_pane_g5

0xc32c,	// (0x00065522) main_tv_pg_hdr_pane_g6

0xc334,	// (0x0006552a) main_tv_pg_hdr_pane_g7

0xc33c,	// (0x00065532) main_tv_pg_hdr_pane_g8

0xc344,	// (0x0006553a) main_tv_pg_hdr_pane_g9

0xc34c,	// (0x00065542) main_tv_pg_hdr_pane_g10

0xc356,	// (0x0006554c) main_tv_pg_hdr_pane_g11

0x000a,

0xfab8,	// (0x00068cae) main_tv_pg_hdr_pane_g

0xc360,	// (0x00065556) main_tv_pg_hdr_pane_t1

0xc36e,	// (0x00065564) main_tv_pg_hdr_pane_t2

0xc37c,	// (0x00065572) main_tv_pg_hdr_pane_t3

0xc38a,	// (0x00065580) main_tv_pg_hdr_pane_t4

0xc398,	// (0x0006558e) main_tv_pg_hdr_pane_t5

0x0004,

0xfacf,	// (0x00068cc5) main_tv_pg_hdr_pane_t

0xc3a6,	// (0x0006559c) single_mobtv_pg_channel_pane_ParamLimits

0xc3a6,	// (0x0006559c) single_mobtv_pg_channel_pane

0xc3b8,	// (0x000655ae) single_mobtv_pg_channel_table_pane

0xc3c1,	// (0x000655b7) single_mobtv_pg_channel_thumb_pane

0xc3ca,	// (0x000655c0) single_tv_pg_channel_pane_g1

0xc3d3,	// (0x000655c9) single_tv_pg_channel_pane_g2

0x0001,

0xfada,	// (0x00068cd0) single_tv_pg_channel_pane_g

0xea78,	// (0x00067c6e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xea78,	// (0x00067c6e) bg_single_mobtv_pg_channel_thumb_pane

0xc3dc,	// (0x000655d2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc3dc,	// (0x000655d2) single_mobtv_pg_channel_thumb_pane_g1

0xc3ea,	// (0x000655e0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc3ea,	// (0x000655e0) single_mobtv_pg_channel_thumb_pane_g2

0xc3f6,	// (0x000655ec) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc3f6,	// (0x000655ec) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfadf,	// (0x00068cd5) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfadf,	// (0x00068cd5) single_mobtv_pg_channel_thumb_pane_g

0xc402,	// (0x000655f8) single_mobtv_pg_channel_thumb_pane_t1

0xc410,	// (0x00065606) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfae6,	// (0x00068cdc) single_mobtv_pg_channel_thumb_pane_t

0xe849,	// (0x00067a3f) bg_single_mobtv_pg_channel_table_pane_g1

0xe849,	// (0x00067a3f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x045f,	// (0x00059655) bg_single_mobtv_pg_channel_table_pane_g

0xc41e,	// (0x00065614) single_mobtv_pg_channel_table_pane_t1

0xc42c,	// (0x00065622) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfaeb,	// (0x00068ce1) single_mobtv_pg_channel_table_pane_t

0x7d16,	// (0x00060f0c) main_mobtv_info_pane_g1_ParamLimits

0x7d16,	// (0x00060f0c) main_mobtv_info_pane_g1

0x7d32,	// (0x00060f28) main_mobtv_info_pane_t1_ParamLimits

0x7d32,	// (0x00060f28) main_mobtv_info_pane_t1

0x7d98,	// (0x00060f8e) main_mobtv_info_pane_t2_ParamLimits

0x7d98,	// (0x00060f8e) main_mobtv_info_pane_t2

0x0002,

0xfaf5,	// (0x00068ceb) main_mobtv_info_pane_t_ParamLimits

0xfaf5,	// (0x00068ceb) main_mobtv_info_pane_t

0x7e1b,	// (0x00061011) wait_bar_pane_cp05

0x7e2b,	// (0x00061021) main_mobtv_loading_pane_g1_ParamLimits

0x7e2b,	// (0x00061021) main_mobtv_loading_pane_g1

0x7e3c,	// (0x00061032) main_mobtv_loading_pane_g2_ParamLimits

0x7e3c,	// (0x00061032) main_mobtv_loading_pane_g2

0x7e48,	// (0x0006103e) main_mobtv_loading_pane_g3_ParamLimits

0x7e48,	// (0x0006103e) main_mobtv_loading_pane_g3

0x0002,

0xfafc,	// (0x00068cf2) main_mobtv_loading_pane_g_ParamLimits

0xfafc,	// (0x00068cf2) main_mobtv_loading_pane_g

0xc43a,	// (0x00065630) main_mobtv_loading_pane_t1_ParamLimits

0xc43a,	// (0x00065630) main_mobtv_loading_pane_t1

0xc452,	// (0x00065648) main_mobtv_loading_pane_t2_ParamLimits

0xc452,	// (0x00065648) main_mobtv_loading_pane_t2

0x0001,

0xfb03,	// (0x00068cf9) main_mobtv_loading_pane_t_ParamLimits

0xfb03,	// (0x00068cf9) main_mobtv_loading_pane_t

0x7e59,	// (0x0006104f) wait_bar_pane_cp06_ParamLimits

0x7e59,	// (0x0006104f) wait_bar_pane_cp06

0xc476,	// (0x0006566c) main_mobtv_programe_curr_pane_t1

0xc484,	// (0x0006567a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb08,	// (0x00068cfe) main_mobtv_programe_curr_pane_t

0xc492,	// (0x00065688) main_mobtv_programe_next_pane_t1

0xc4a0,	// (0x00065696) main_mobtv_programe_next_pane_t2

0xc4ae,	// (0x000656a4) main_mobtv_programe_next_pane_t3

0x0002,

0xfb0d,	// (0x00068d03) main_mobtv_programe_next_pane_t

0x97cd,	// (0x000629c3) bg_popup_mobtv_noti_window_pane

0xc4bc,	// (0x000656b2) popup_mobtv_noti_window_g1

0xc4c4,	// (0x000656ba) popup_mobtv_noti_window_t1

0xc4d2,	// (0x000656c8) popup_mobtv_noti_window_t2

0x0001,

0xfb14,	// (0x00068d0a) popup_mobtv_noti_window_t

0xe849,	// (0x00067a3f) bg_popup_mobtv_noti_window_pane_g1

0x984d,	// (0x00062a43) sc_clock_pane

0x984d,	// (0x00062a43) main_fs_bigclock_pane

0x74f1,	// (0x000606e7) blid2_tripm_pane_t4_ParamLimits

0x74f1,	// (0x000606e7) blid2_tripm_pane_t4

0x7e68,	// (0x0006105e) sc_clock_pane_g1_ParamLimits

0x7e68,	// (0x0006105e) sc_clock_pane_g1

0x7e7a,	// (0x00061070) sc_clock_pane_t1_ParamLimits

0x7e7a,	// (0x00061070) sc_clock_pane_t1

0x7e9c,	// (0x00061092) sc_clock_pane_t2_ParamLimits

0x7e9c,	// (0x00061092) sc_clock_pane_t2

0x7eb2,	// (0x000610a8) sc_clock_pane_t3_ParamLimits

0x7eb2,	// (0x000610a8) sc_clock_pane_t3

0x0004,

0xfb19,	// (0x00068d0f) sc_clock_pane_t_ParamLimits

0xfb19,	// (0x00068d0f) sc_clock_pane_t

0x8d75,	// (0x00061f6b) main_fs_bigclock_indicator_pane_ParamLimits

0x8d75,	// (0x00061f6b) main_fs_bigclock_indicator_pane

0x7f48,	// (0x0006113e) main_fs_bigclock_pane_g1_ParamLimits

0x7f48,	// (0x0006113e) main_fs_bigclock_pane_g1

0x8d81,	// (0x00061f77) main_fs_bigclock_pane_t1_ParamLimits

0x8d81,	// (0x00061f77) main_fs_bigclock_pane_t1

0x8d93,	// (0x00061f89) main_fs_bigclock_pane_t2_ParamLimits

0x8d93,	// (0x00061f89) main_fs_bigclock_pane_t2

0x8da5,	// (0x00061f9b) main_fs_bigclock_pane_t3_ParamLimits

0x8da5,	// (0x00061f9b) main_fs_bigclock_pane_t3

0x0002,

0xfd23,	// (0x00068f19) main_fs_bigclock_pane_t_ParamLimits

0xfd23,	// (0x00068f19) main_fs_bigclock_pane_t

0xd0e9,	// (0x000662df) main_fs_bigclock_indicator_pane_g1

0xc1e4,	// (0x000653da) ncim_query_content_pane_g2_ParamLimits

0xc1e4,	// (0x000653da) ncim_query_content_pane_g2

0x0001,

0xfaa6,	// (0x00068c9c) ncim_query_content_pane_g_ParamLimits

0xfaa6,	// (0x00068c9c) ncim_query_content_pane_g

0x7ec9,	// (0x000610bf) sc_clock_pane_t4_ParamLimits

0x7ec9,	// (0x000610bf) sc_clock_pane_t4

0x983f,	// (0x00062a35) main_radioblah_pane

0x5f93,	// (0x0005f189) cell_call4_button_pane_t1_copy1_ParamLimits

0x5f93,	// (0x0005f189) cell_call4_button_pane_t1_copy1

0x7aea,	// (0x00060ce0) main_ncimui_pane_t1_ParamLimits

0x7aea,	// (0x00060ce0) main_ncimui_pane_t1

0x7b04,	// (0x00060cfa) main_ncimui_pane_t2_ParamLimits

0x7b04,	// (0x00060cfa) main_ncimui_pane_t2

0x0002,

0xfa9f,	// (0x00068c95) main_ncimui_pane_t_ParamLimits

0xfa9f,	// (0x00068c95) main_ncimui_pane_t

0xc613,	// (0x00065809) main_radioblah_anim_pane_ParamLimits

0xc613,	// (0x00065809) main_radioblah_anim_pane

0xc624,	// (0x0006581a) main_radioblah_info_pane_ParamLimits

0xc624,	// (0x0006581a) main_radioblah_info_pane

0xc638,	// (0x0006582e) main_radioblah_pane_t1_ParamLimits

0xc638,	// (0x0006582e) main_radioblah_pane_t1

0xc654,	// (0x0006584a) main_radioblah_pane_t2_ParamLimits

0xc654,	// (0x0006584a) main_radioblah_pane_t2

0x0003,

0xfb3a,	// (0x00068d30) main_radioblah_pane_t_ParamLimits

0xfb3a,	// (0x00068d30) main_radioblah_pane_t

0x7f95,	// (0x0006118b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7f95,	// (0x0006118b) main_radioblah_rocker_ctrl_pane

0xc69c,	// (0x00065892) main_radioblah_info_pane_t1_ParamLimits

0xc69c,	// (0x00065892) main_radioblah_info_pane_t1

0x7fe9,	// (0x000611df) main_radioblah_info_pane_t2_ParamLimits

0x7fe9,	// (0x000611df) main_radioblah_info_pane_t2

0x0003,

0xfb43,	// (0x00068d39) main_radioblah_info_pane_t_ParamLimits

0xfb43,	// (0x00068d39) main_radioblah_info_pane_t

0xe849,	// (0x00067a3f) main_radioblah_rocker_ctrl_pane_g1

0x8095,	// (0x0006128b) main_radioblah_rocker_ctrl_pane_g2

0x809d,	// (0x00061293) main_radioblah_rocker_ctrl_pane_g3

0x80a5,	// (0x0006129b) main_radioblah_rocker_ctrl_pane_g4

0x80ad,	// (0x000612a3) main_radioblah_rocker_ctrl_pane_g5

0x80b5,	// (0x000612ab) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb4c,	// (0x00068d42) main_radioblah_rocker_ctrl_pane_g

0x7aa6,	// (0x00060c9c) main_cset_text2_pane_t1_copy1_ParamLimits

0xd7ce,	// (0x000669c4) cam4_image_uncrop_qvga_pane

0xd82f,	// (0x00066a25) vid4_image_uncrop_qcif_pane

0xd9ad,	// (0x00066ba3) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9ad,	// (0x00066ba3) cam6_image_uncrop_qvga_pane

0xbed2,	// (0x000650c8) vid6_image_uncrop_qcif_pane_ParamLimits

0xbed2,	// (0x000650c8) vid6_image_uncrop_qcif_pane

0x97cd,	// (0x000629c3) bg_popup_preview_window_pane_cp03

0xc196,	// (0x0006538c) list_cset_text2_pane

0xc19e,	// (0x00065394) main_cset6_text2_pane_g1

0xc1a6,	// (0x0006539c) main_cset6_text2_pane_t1

0xc6d6,	// (0x000658cc) list_cset_text2_pane_t1_ParamLimits

0xc6d6,	// (0x000658cc) list_cset_text2_pane_t1

0x983f,	// (0x00062a35) main_radioblah_pane_ParamLimits

0x7e09,	// (0x00060fff) main_mobtv_info_pane_t3_ParamLimits

0x7e09,	// (0x00060fff) main_mobtv_info_pane_t3

0x7f83,	// (0x00061179) main_radioblah_pane_g1

0x7fbd,	// (0x000611b3) main_radioblah_info_pane_g1

0x803a,	// (0x00061230) main_radioblah_info_pane_t3_ParamLimits

0x803a,	// (0x00061230) main_radioblah_info_pane_t3

0x2ba0,	// (0x0005bd96) highlight_cell_cale_month_pane_ParamLimits

0x2ba0,	// (0x0005bd96) highlight_cell_cale_month_pane

0x984d,	// (0x00062a43) main_phob_fisheye_pane

0xeb54,	// (0x00067d4a) scroll_pane_cp0031_ParamLimits

0xeb54,	// (0x00067d4a) scroll_pane_cp0031

0xbfdc,	// (0x000651d2) wait_bar_pane_cp08_ParamLimits

0x7803,	// (0x000609f9) cset_list_set_pane_copy1_ParamLimits

0xc6ed,	// (0x000658e3) highlight_cell_cale_month_pane_g1

0x80bd,	// (0x000612b3) highlight_cell_cale_month_pane_t1

0xbc55,	// (0x00064e4b) list_gen_pane_cp01

0xb7f8,	// (0x000649ee) scroll_pane_01

0x80cb,	// (0x000612c1) list_single_double_fisheye_pane

0x80d4,	// (0x000612ca) list_double_fisheye_pane_g1_ParamLimits

0x80d4,	// (0x000612ca) list_double_fisheye_pane_g1

0x80e0,	// (0x000612d6) list_double_fisheye_pane_g2_ParamLimits

0x80e0,	// (0x000612d6) list_double_fisheye_pane_g2

0x80f4,	// (0x000612ea) list_double_fisheye_pane_g3_ParamLimits

0x80f4,	// (0x000612ea) list_double_fisheye_pane_g3

0x0004,

0xfb59,	// (0x00068d4f) list_double_fisheye_pane_g_ParamLimits

0xfb59,	// (0x00068d4f) list_double_fisheye_pane_g

0x811d,	// (0x00061313) list_double_fisheye_pane_t1_ParamLimits

0x811d,	// (0x00061313) list_double_fisheye_pane_t1

0x8138,	// (0x0006132e) list_double_fisheye_pane_t2_ParamLimits

0x8138,	// (0x0006132e) list_double_fisheye_pane_t2

0x0001,

0xfb64,	// (0x00068d5a) list_double_fisheye_pane_t_ParamLimits

0xfb64,	// (0x00068d5a) list_double_fisheye_pane_t

0x984d,	// (0x00062a43) main_call5_pane

0x7ef2,	// (0x000610e8) sc_swipe_pane_ParamLimits

0x7ef2,	// (0x000610e8) sc_swipe_pane

0x816b,	// (0x00061361) call5_image_pane_ParamLimits

0x816b,	// (0x00061361) call5_image_pane

0x8180,	// (0x00061376) call5_swipe_1_pane_ParamLimits

0x8180,	// (0x00061376) call5_swipe_1_pane

0x8191,	// (0x00061387) call5_swipe_2_pane_ParamLimits

0x8191,	// (0x00061387) call5_swipe_2_pane

0x81b6,	// (0x000613ac) popup_call5_audio_first_window_ParamLimits

0x81b6,	// (0x000613ac) popup_call5_audio_first_window

0xea78,	// (0x00067c6e) call5_swipe_1_pane_g1_ParamLimits

0xea78,	// (0x00067c6e) call5_swipe_1_pane_g1

0xc6f5,	// (0x000658eb) call5_swipe_1_pane_g2_ParamLimits

0xc6f5,	// (0x000658eb) call5_swipe_1_pane_g2

0x0001,

0xfb69,	// (0x00068d5f) call5_swipe_1_pane_g_ParamLimits

0xfb69,	// (0x00068d5f) call5_swipe_1_pane_g

0xc701,	// (0x000658f7) call5_swipe_1_pane_t1_ParamLimits

0xc701,	// (0x000658f7) call5_swipe_1_pane_t1

0xea78,	// (0x00067c6e) call5_swipe_2_pane_g1_ParamLimits

0xea78,	// (0x00067c6e) call5_swipe_2_pane_g1

0xc716,	// (0x0006590c) call5_swipe_2_pane_g2_ParamLimits

0xc716,	// (0x0006590c) call5_swipe_2_pane_g2

0x0001,

0xfb6e,	// (0x00068d64) call5_swipe_2_pane_g_ParamLimits

0xfb6e,	// (0x00068d64) call5_swipe_2_pane_g

0xc722,	// (0x00065918) call5_swipe_2_pane_t1_ParamLimits

0xc722,	// (0x00065918) call5_swipe_2_pane_t1

0xc737,	// (0x0006592d) sc_swipe_pane_g1_ParamLimits

0xc737,	// (0x0006592d) sc_swipe_pane_g1

0xc744,	// (0x0006593a) sc_swipe_pane_g2_ParamLimits

0xc744,	// (0x0006593a) sc_swipe_pane_g2

0x0001,

0xfb73,	// (0x00068d69) sc_swipe_pane_g_ParamLimits

0xfb73,	// (0x00068d69) sc_swipe_pane_g

0xc750,	// (0x00065946) sc_swipe_pane_t1_ParamLimits

0xc750,	// (0x00065946) sc_swipe_pane_t1

0x984d,	// (0x00062a43) main_cmail_launcher_pane

0x81c5,	// (0x000613bb) aid_size_cell_cmail_l_ParamLimits

0x81c5,	// (0x000613bb) aid_size_cell_cmail_l

0x81de,	// (0x000613d4) grid_cmail_l_pane_ParamLimits

0x81de,	// (0x000613d4) grid_cmail_l_pane

0x81f2,	// (0x000613e8) cell_cmail_l_pane_ParamLimits

0x81f2,	// (0x000613e8) cell_cmail_l_pane

0x8214,	// (0x0006140a) cell_cmail_l_pane_g1_ParamLimits

0x8214,	// (0x0006140a) cell_cmail_l_pane_g1

0x8225,	// (0x0006141b) cell_cmail_l_pane_t1_ParamLimits

0x8225,	// (0x0006141b) cell_cmail_l_pane_t1

0xc765,	// (0x0006595b) cell_cmail_l_pane_t2_ParamLimits

0xc765,	// (0x0006595b) cell_cmail_l_pane_t2

0x0001,

0xfb78,	// (0x00068d6e) cell_cmail_l_pane_t_ParamLimits

0xfb78,	// (0x00068d6e) cell_cmail_l_pane_t

0xb6a2,	// (0x00064898) grid_highlight_pane_cp018_ParamLimits

0xb6a2,	// (0x00064898) grid_highlight_pane_cp018

0x0e96,	// (0x0005a08c) main2_pane_ParamLimits

0x0e96,	// (0x0005a08c) main2_pane

0xa0c3,	// (0x000632b9) popup_sp_fs_action_menu_bg_pane_g1

0xa0cb,	// (0x000632c1) popup_sp_fs_action_menu_bg_pane_g2

0xa0d3,	// (0x000632c9) popup_sp_fs_action_menu_bg_pane_g3

0xa0db,	// (0x000632d1) popup_sp_fs_action_menu_bg_pane_g4

0xa0e3,	// (0x000632d9) popup_sp_fs_action_menu_bg_pane_g5

0xa0eb,	// (0x000632e1) popup_sp_fs_action_menu_bg_pane_g6

0xa0f3,	// (0x000632e9) popup_sp_fs_action_menu_bg_pane_g7

0xa0fb,	// (0x000632f1) popup_sp_fs_action_menu_bg_pane_g8

0xa103,	// (0x000632f9) popup_sp_fs_action_menu_bg_pane_g9

0xa10b,	// (0x00063301) popup_sp_fs_action_menu_bg_pane_g10

0xa10b,	// (0x00063301) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00068380) popup_sp_fs_action_menu_bg_pane_g

0x1d6d,	// (0x0005af63) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x2_t3_g3_g1

0x1d79,	// (0x0005af6f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1d79,	// (0x0005af6f) list_medium_line_x2_t3_g3_g2

0x1d85,	// (0x0005af7b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d85,	// (0x0005af7b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006842e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006842e) list_medium_line_x2_t3_g3_g

0x1d91,	// (0x0005af87) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d91,	// (0x0005af87) list_medium_line_x2_t3_g3_t1

0x1da6,	// (0x0005af9c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1da6,	// (0x0005af9c) list_medium_line_x2_t3_g3_t2

0x1db8,	// (0x0005afae) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1db8,	// (0x0005afae) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00068435) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00068435) list_medium_line_x2_t3_g3_t

0x1d6d,	// (0x0005af63) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x2_t3_g2_g1

0x1d85,	// (0x0005af7b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d85,	// (0x0005af7b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006843c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006843c) list_medium_line_x2_t3_g2_g

0x1dcd,	// (0x0005afc3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1dcd,	// (0x0005afc3) list_medium_line_x2_t3_g2_t1

0x1de3,	// (0x0005afd9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1de3,	// (0x0005afd9) list_medium_line_x2_t3_g2_t2

0x1df5,	// (0x0005afeb) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1df5,	// (0x0005afeb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00068441) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00068441) list_medium_line_x2_t3_g2_t

0x1d6d,	// (0x0005af63) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x2_t4_g4_g1

0x1e13,	// (0x0005b009) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1e13,	// (0x0005b009) list_medium_line_x2_t4_g4_g2

0x1d79,	// (0x0005af6f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1d79,	// (0x0005af6f) list_medium_line_x2_t4_g4_g3

0x1e1f,	// (0x0005b015) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e1f,	// (0x0005b015) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00068448) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00068448) list_medium_line_x2_t4_g4_g

0x1e2b,	// (0x0005b021) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e2b,	// (0x0005b021) list_medium_line_x2_t4_g4_t1

0x1e45,	// (0x0005b03b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e45,	// (0x0005b03b) list_medium_line_x2_t4_g4_t2

0x1e5b,	// (0x0005b051) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e5b,	// (0x0005b051) list_medium_line_x2_t4_g4_t3

0x1e70,	// (0x0005b066) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e70,	// (0x0005b066) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00068451) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00068451) list_medium_line_x2_t4_g4_t

0x1d6d,	// (0x0005af63) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x2_t2_g4_g1

0x1e13,	// (0x0005b009) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1e13,	// (0x0005b009) list_medium_line_x2_t2_g4_g2

0x1d79,	// (0x0005af6f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1d79,	// (0x0005af6f) list_medium_line_x2_t2_g4_g3

0x1d85,	// (0x0005af7b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d85,	// (0x0005af7b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000684b8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000684b8) list_medium_line_x2_t2_g4_g

0x2bc6,	// (0x0005bdbc) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2bc6,	// (0x0005bdbc) list_medium_line_x2_t2_g4_t1

0x1db8,	// (0x0005afae) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1db8,	// (0x0005afae) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000684c1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000684c1) list_medium_line_x2_t2_g4_t

0x1d6d,	// (0x0005af63) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x2_t2_g3_g1

0x1d79,	// (0x0005af6f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1d79,	// (0x0005af6f) list_medium_line_x2_t2_g3_g2

0x1d85,	// (0x0005af7b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d85,	// (0x0005af7b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006842e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006842e) list_medium_line_x2_t2_g3_g

0x2bdb,	// (0x0005bdd1) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2bdb,	// (0x0005bdd1) list_medium_line_x2_t2_g3_t1

0x1db8,	// (0x0005afae) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1db8,	// (0x0005afae) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000684c6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000684c6) list_medium_line_x2_t2_g3_t

0x2d0c,	// (0x0005bf02) main_sp_fs_list_pane_ParamLimits

0x2d0c,	// (0x0005bf02) main_sp_fs_list_pane

0xef9c,	// (0x00068192) sp_fs_scroll_pane_ParamLimits

0xef9c,	// (0x00068192) sp_fs_scroll_pane

0x2d18,	// (0x0005bf0e) list_medium_line_x2_t3_t1

0x2d28,	// (0x0005bf1e) list_medium_line_x2_t3_t2

0x2d36,	// (0x0005bf2c) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00068511) list_medium_line_x2_t3_t

0x2d44,	// (0x0005bf3a) list_medium_line_x3_t4_t1

0x2d54,	// (0x0005bf4a) list_medium_line_x3_t4_t2

0x2d62,	// (0x0005bf58) list_medium_line_x3_t4_t3

0x2d36,	// (0x0005bf2c) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00068518) list_medium_line_x3_t4_t

0x2d70,	// (0x0005bf66) list_medium_line_x4_t5_t1

0x2d80,	// (0x0005bf76) list_medium_line_x4_t5_t2

0x2d62,	// (0x0005bf58) list_medium_line_x4_t5_t3

0x2d8e,	// (0x0005bf84) list_medium_line_x4_t5_t4

0x2d36,	// (0x0005bf2c) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00068521) list_medium_line_x4_t5_t

0x1d6d,	// (0x0005af63) list_medium_line_t4_g4_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_t4_g4_g1

0x1e1f,	// (0x0005b015) list_medium_line_t4_g4_g2_ParamLimits

0x1e1f,	// (0x0005b015) list_medium_line_t4_g4_g2

0x2d9c,	// (0x0005bf92) list_medium_line_t4_g4_g3_ParamLimits

0x2d9c,	// (0x0005bf92) list_medium_line_t4_g4_g3

0x1d85,	// (0x0005af7b) list_medium_line_t4_g4_g4_ParamLimits

0x1d85,	// (0x0005af7b) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0006852c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0006852c) list_medium_line_t4_g4_g

0x2da8,	// (0x0005bf9e) list_medium_line_t4_g4_t1_ParamLimits

0x2da8,	// (0x0005bf9e) list_medium_line_t4_g4_t1

0x2dbd,	// (0x0005bfb3) list_medium_line_t4_g4_t2_ParamLimits

0x2dbd,	// (0x0005bfb3) list_medium_line_t4_g4_t2

0x2dd3,	// (0x0005bfc9) list_medium_line_t4_g4_t3_ParamLimits

0x2dd3,	// (0x0005bfc9) list_medium_line_t4_g4_t3

0x1db8,	// (0x0005afae) list_medium_line_t4_g4_t4_ParamLimits

0x1db8,	// (0x0005afae) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00068535) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00068535) list_medium_line_t4_g4_t

0x2eb8,	// (0x0005c0ae) chi_dic_find_pane_g1

0x3e21,	// (0x0005d017) main_tport_pane

0x6be9,	// (0x0005fddf) list_medium_line_plain_t1

0x6c91,	// (0x0005fe87) list_medium_line_t2_g2_g1_ParamLimits

0x6c91,	// (0x0005fe87) list_medium_line_t2_g2_g1

0x6c9d,	// (0x0005fe93) list_medium_line_t2_g2_g2_ParamLimits

0x6c9d,	// (0x0005fe93) list_medium_line_t2_g2_g2

0x0001,

0xf8b0,	// (0x00068aa6) list_medium_line_t2_g2_g_ParamLimits

0xf8b0,	// (0x00068aa6) list_medium_line_t2_g2_g

0x6ca9,	// (0x0005fe9f) list_medium_line_t2_g2_t1_ParamLimits

0x6ca9,	// (0x0005fe9f) list_medium_line_t2_g2_t1

0x6cc3,	// (0x0005feb9) list_medium_line_t2_g2_t2_ParamLimits

0x6cc3,	// (0x0005feb9) list_medium_line_t2_g2_t2

0x0001,

0xf8b5,	// (0x00068aab) list_medium_line_t2_g2_t_ParamLimits

0xf8b5,	// (0x00068aab) list_medium_line_t2_g2_t

0xbc5e,	// (0x00064e54) aid_sp_fs_list_icon_a_sm

0xbc66,	// (0x00064e5c) aid_sp_fs_list_icon_d

0xbc6e,	// (0x00064e64) aid_sp_fs_text_primary

0xbc77,	// (0x00064e6d) aid_sp_fs_text_secondary

0xbc80,	// (0x00064e76) list_medium_line

0xbc80,	// (0x00064e76) list_medium_line_g2

0xbc80,	// (0x00064e76) list_medium_line_g3

0xbc80,	// (0x00064e76) list_medium_line_plain

0xbc80,	// (0x00064e76) list_medium_line_plain_t2

0xbc80,	// (0x00064e76) list_medium_line_plain_t3

0xbc80,	// (0x00064e76) list_medium_line_right_icon

0xbc80,	// (0x00064e76) list_medium_line_right_iconx2

0xbc80,	// (0x00064e76) list_medium_line_t2

0xbc80,	// (0x00064e76) list_medium_line_t2_g2

0xbc80,	// (0x00064e76) list_medium_line_t2_g3

0xbc80,	// (0x00064e76) list_medium_line_t2_right_icon

0xbc80,	// (0x00064e76) list_medium_line_t2_right_iconx2

0xbc80,	// (0x00064e76) list_medium_line_t3

0xbc80,	// (0x00064e76) list_medium_line_t3_g2

0xbc80,	// (0x00064e76) list_medium_line_t3_g3

0xbc80,	// (0x00064e76) list_medium_line_t3_right_iconx2

0x72d4,	// (0x000604ca) list_medium_line_t4_g4

0x72dd,	// (0x000604d3) list_medium_line_x2

0x72dd,	// (0x000604d3) list_medium_line_x2_t2_g2

0x72dd,	// (0x000604d3) list_medium_line_x2_t2_g3

0x72dd,	// (0x000604d3) list_medium_line_x2_t2_g4

0x72dd,	// (0x000604d3) list_medium_line_x2_t3

0x72dd,	// (0x000604d3) list_medium_line_x2_t3_g2

0x72dd,	// (0x000604d3) list_medium_line_x2_t3_g3

0x72dd,	// (0x000604d3) list_medium_line_x2_t3_g4

0x72dd,	// (0x000604d3) list_medium_line_x2_t4_g2

0x72dd,	// (0x000604d3) list_medium_line_x2_t4_g4

0x72e6,	// (0x000604dc) list_medium_line_x3

0x72e6,	// (0x000604dc) list_medium_line_x3_t4

0x72e6,	// (0x000604dc) list_medium_line_x3_t4_g4

0x72d4,	// (0x000604ca) list_medium_line_x4_t4

0x72d4,	// (0x000604ca) list_medium_line_x4_t4_g7

0x72d4,	// (0x000604ca) list_medium_line_x4_t5

0x72ef,	// (0x000604e5) list_single_fs_dyc_pane_ParamLimits

0x72ef,	// (0x000604e5) list_single_fs_dyc_pane

0x1d6d,	// (0x0005af63) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x4_t4_g7_g1

0x79d5,	// (0x00060bcb) list_medium_line_x4_t4_g7_g2_ParamLimits

0x79d5,	// (0x00060bcb) list_medium_line_x4_t4_g7_g2

0x79e1,	// (0x00060bd7) list_medium_line_x4_t4_g7_g3_ParamLimits

0x79e1,	// (0x00060bd7) list_medium_line_x4_t4_g7_g3

0x79f0,	// (0x00060be6) list_medium_line_x4_t4_g7_g4_ParamLimits

0x79f0,	// (0x00060be6) list_medium_line_x4_t4_g7_g4

0x79fc,	// (0x00060bf2) list_medium_line_x4_t4_g7_g5_ParamLimits

0x79fc,	// (0x00060bf2) list_medium_line_x4_t4_g7_g5

0x7a0b,	// (0x00060c01) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7a0b,	// (0x00060c01) list_medium_line_x4_t4_g7_g6

0x7a1a,	// (0x00060c10) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7a1a,	// (0x00060c10) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa80,	// (0x00068c76) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa80,	// (0x00068c76) list_medium_line_x4_t4_g7_g

0x7a26,	// (0x00060c1c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7a26,	// (0x00060c1c) list_medium_line_x4_t4_g7_t1

0x7a3b,	// (0x00060c31) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7a3b,	// (0x00060c31) list_medium_line_x4_t4_g7_t2

0x7a50,	// (0x00060c46) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7a50,	// (0x00060c46) list_medium_line_x4_t4_g7_t3

0x7a65,	// (0x00060c5b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7a65,	// (0x00060c5b) list_medium_line_x4_t4_g7_t4

0x7a77,	// (0x00060c6d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7a77,	// (0x00060c6d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa8f,	// (0x00068c85) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa8f,	// (0x00068c85) list_medium_line_x4_t4_g7_t

0x7a89,	// (0x00060c7f) list_single_dyc_row_pane_ParamLimits

0x7a89,	// (0x00060c7f) list_single_dyc_row_pane

0x815a,	// (0x00061350) call5_gesture_pane_ParamLimits

0x815a,	// (0x00061350) call5_gesture_pane

0x81a2,	// (0x00061398) call5_windows_pane_ParamLimits

0x81a2,	// (0x00061398) call5_windows_pane

0x823b,	// (0x00061431) call5_swipe_1_pane_cp_ParamLimits

0x823b,	// (0x00061431) call5_swipe_1_pane_cp

0x8247,	// (0x0006143d) call5_swipe_2_pane_cp_ParamLimits

0x8247,	// (0x0006143d) call5_swipe_2_pane_cp

0xa211,	// (0x00063407) call5_image_pane_cp

0x8253,	// (0x00061449) popup_call5_audio_first_window_cp_ParamLimits

0x8253,	// (0x00061449) popup_call5_audio_first_window_cp

0xc737,	// (0x0006592d) call5_swipe_1_pane_g1_cp_ParamLimits

0xc737,	// (0x0006592d) call5_swipe_1_pane_g1_cp

0xc777,	// (0x0006596d) call5_swipe_1_pane_g2_cp

0xc750,	// (0x00065946) call5_swipe_1_pane_t1_cp_ParamLimits

0xc750,	// (0x00065946) call5_swipe_1_pane_t1_cp

0xc737,	// (0x0006592d) call5_swipe_2_pane_g1_cp_ParamLimits

0xc737,	// (0x0006592d) call5_swipe_2_pane_g1_cp

0xc77f,	// (0x00065975) call5_swipe_2_pane_g2_cp

0xc787,	// (0x0006597d) call5_swipe_2_pane_t1_cp_ParamLimits

0xc787,	// (0x0006597d) call5_swipe_2_pane_t1_cp

0xb6a2,	// (0x00064898) main_sp_fs_email_pane

0xc79c,	// (0x00065992) main_sp_fs_listscroll_pane_te

0x825f,	// (0x00061455) popup_sp_fs_action_menu_pane_ParamLimits

0x825f,	// (0x00061455) popup_sp_fs_action_menu_pane

0xe849,	// (0x00067a3f) bg_sp_fs_ctrlbar_pane_g1

0xefb0,	// (0x000681a6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xefc2,	// (0x000681b8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xefb9,	// (0x000681af) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe849,	// (0x00067a3f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb7d,	// (0x00068d73) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe636,	// (0x0006782c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe636,	// (0x0006782c) bg_sp_fs_ctrlbar_ddmenu_pane

0xc7a5,	// (0x0006599b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc7a5,	// (0x0006599b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc7b1,	// (0x000659a7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc7b1,	// (0x000659a7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb86,	// (0x00068d7c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb86,	// (0x00068d7c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc7bd,	// (0x000659b3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc7bd,	// (0x000659b3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8291,	// (0x00061487) list_medium_line_t2_right_icon_g1

0x8299,	// (0x0006148f) list_medium_line_t2_right_icon_t1

0x82a9,	// (0x0006149f) list_medium_line_t2_right_icon_t2

0x0001,

0xfb8b,	// (0x00068d81) list_medium_line_t2_right_icon_t

0xe449,	// (0x0006763f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe449,	// (0x0006763f) bg_sp_fs_ctrlbar_pane

0x82fd,	// (0x000614f3) main_sp_fs_ctrlbar_button_pane_cp01

0x8305,	// (0x000614fb) main_sp_fs_ctrlbar_ddmenu_pane

0xc80f,	// (0x00065a05) main_sp_fs_ctrlbar_pane_g1

0xc81b,	// (0x00065a11) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfb90,	// (0x00068d86) main_sp_fs_ctrlbar_pane_g

0xc827,	// (0x00065a1d) main_sp_fs_ctrlbar_pane_t1

0x830f,	// (0x00061505) main_sp_fs_ctrlbar_pane

0x8333,	// (0x00061529) main_sp_fs_listscroll_pane_te_cp01

0x8353,	// (0x00061549) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8353,	// (0x00061549) popup_sp_fs_action_menu_pane_cp01

0xb6a2,	// (0x00064898) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb6a2,	// (0x00064898) bg_sp_fs_highlight_list_pane_cp01

0xc857,	// (0x00065a4d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc857,	// (0x00065a4d) sp_fs_action_menu_list_gene_pane_g1

0xc866,	// (0x00065a5c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc866,	// (0x00065a5c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb9a,	// (0x00068d90) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb9a,	// (0x00068d90) sp_fs_action_menu_list_gene_pane_g

0xc873,	// (0x00065a69) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc873,	// (0x00065a69) sp_fs_action_menu_list_gene_pane_t1

0xc88b,	// (0x00065a81) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc88b,	// (0x00065a81) sp_fs_action_menu_list_gene_pane

0xc8a8,	// (0x00065a9e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc8a8,	// (0x00065a9e) popup_sp_fs_action_menu_bg_pane

0xc8b6,	// (0x00065aac) sp_fs_action_menu_list_pane_ParamLimits

0xc8b6,	// (0x00065aac) sp_fs_action_menu_list_pane

0xc8d4,	// (0x00065aca) sp_fs_scroll_pane_cp01_ParamLimits

0xc8d4,	// (0x00065aca) sp_fs_scroll_pane_cp01

0x8377,	// (0x0006156d) list_medium_line_plain_t2_t1

0x8387,	// (0x0006157d) list_medium_line_plain_t2_t2

0x0001,

0xfb9f,	// (0x00068d95) list_medium_line_plain_t2_t

0x8395,	// (0x0006158b) list_medium_line_plain_t3_t1

0x83a5,	// (0x0006159b) list_medium_line_plain_t3_t2

0x83b3,	// (0x000615a9) list_medium_line_plain_t3_t3

0x0002,

0xfba4,	// (0x00068d9a) list_medium_line_plain_t3_t

0x1d6d,	// (0x0005af63) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x2_t2_g2_g1

0x1d85,	// (0x0005af7b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d85,	// (0x0005af7b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006843c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006843c) list_medium_line_x2_t2_g2_g

0x2da8,	// (0x0005bf9e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2da8,	// (0x0005bf9e) list_medium_line_x2_t2_g2_t1

0x1db8,	// (0x0005afae) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1db8,	// (0x0005afae) list_medium_line_x2_t2_g2_t2

0x0001,

0xfbab,	// (0x00068da1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfbab,	// (0x00068da1) list_medium_line_x2_t2_g2_t

0x1d6d,	// (0x0005af63) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x2_t4_g2_g1

0x83c1,	// (0x000615b7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x83c1,	// (0x000615b7) list_medium_line_x2_t4_g2_g2

0x0001,

0xfbb0,	// (0x00068da6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfbb0,	// (0x00068da6) list_medium_line_x2_t4_g2_g

0x83d3,	// (0x000615c9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x83d3,	// (0x000615c9) list_medium_line_x2_t4_g2_t1

0x83ed,	// (0x000615e3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x83ed,	// (0x000615e3) list_medium_line_x2_t4_g2_t2

0x8403,	// (0x000615f9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8403,	// (0x000615f9) list_medium_line_x2_t4_g2_t3

0x1db8,	// (0x0005afae) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1db8,	// (0x0005afae) list_medium_line_x2_t4_g2_t4

0x0003,

0xfbb5,	// (0x00068dab) list_medium_line_x2_t4_g2_t_ParamLimits

0xfbb5,	// (0x00068dab) list_medium_line_x2_t4_g2_t

0x8418,	// (0x0006160e) list_medium_line_t3_right_iconx2_g1

0x8291,	// (0x00061487) list_medium_line_t3_right_iconx2_g2

0x8420,	// (0x00061616) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfbbe,	// (0x00068db4) list_medium_line_t3_right_iconx2_g

0x8428,	// (0x0006161e) list_medium_line_t3_right_iconx2_t1

0x8438,	// (0x0006162e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbc5,	// (0x00068dbb) list_medium_line_t3_right_iconx2_t

0x1d6d,	// (0x0005af63) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x3_t4_g4_g1

0x1d79,	// (0x0005af6f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1d79,	// (0x0005af6f) list_medium_line_x3_t4_g4_g2

0x1e1f,	// (0x0005b015) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1e1f,	// (0x0005b015) list_medium_line_x3_t4_g4_g3

0x8446,	// (0x0006163c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8446,	// (0x0006163c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfbca,	// (0x00068dc0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfbca,	// (0x00068dc0) list_medium_line_x3_t4_g4_g

0x8452,	// (0x00061648) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8452,	// (0x00061648) list_medium_line_x3_t4_g4_t1

0x8469,	// (0x0006165f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8469,	// (0x0006165f) list_medium_line_x3_t4_g4_t2

0x847e,	// (0x00061674) list_medium_line_x3_t4_g4_t3_ParamLimits

0x847e,	// (0x00061674) list_medium_line_x3_t4_g4_t3

0x8493,	// (0x00061689) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8493,	// (0x00061689) list_medium_line_x3_t4_g4_t4

0x0003,

0xfbd3,	// (0x00068dc9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfbd3,	// (0x00068dc9) list_medium_line_x3_t4_g4_t

0x84b0,	// (0x000616a6) list_single_dyc_row_text_pane_t1_ParamLimits

0x84b0,	// (0x000616a6) list_single_dyc_row_text_pane_t1

0x84e7,	// (0x000616dd) list_single_dyc_row_text_pane_t2_ParamLimits

0x84e7,	// (0x000616dd) list_single_dyc_row_text_pane_t2

0xc8fa,	// (0x00065af0) list_single_dyc_row_text_pane_t3_ParamLimits

0xc8fa,	// (0x00065af0) list_single_dyc_row_text_pane_t3

0x0005,

0xfbdc,	// (0x00068dd2) list_single_dyc_row_text_pane_t_ParamLimits

0xfbdc,	// (0x00068dd2) list_single_dyc_row_text_pane_t

0xc91e,	// (0x00065b14) list_single_dyc_row_pane_g1_ParamLimits

0xc91e,	// (0x00065b14) list_single_dyc_row_pane_g1

0xc92a,	// (0x00065b20) list_single_dyc_row_pane_g2_ParamLimits

0xc92a,	// (0x00065b20) list_single_dyc_row_pane_g2

0xc936,	// (0x00065b2c) list_single_dyc_row_pane_g3_ParamLimits

0xc936,	// (0x00065b2c) list_single_dyc_row_pane_g3

0xc942,	// (0x00065b38) list_single_dyc_row_pane_g4_ParamLimits

0xc942,	// (0x00065b38) list_single_dyc_row_pane_g4

0x0003,

0xfbe9,	// (0x00068ddf) list_single_dyc_row_pane_g_ParamLimits

0xfbe9,	// (0x00068ddf) list_single_dyc_row_pane_g

0xc94e,	// (0x00065b44) list_single_dyc_row_text_pane_ParamLimits

0xc94e,	// (0x00065b44) list_single_dyc_row_text_pane

0x97cd,	// (0x000629c3) bg_sp_fs_scroll_pane

0xc96d,	// (0x00065b63) thumb_sp_fs_scroll_pane

0x6c91,	// (0x0005fe87) list_medium_line_g1_ParamLimits

0x6c91,	// (0x0005fe87) list_medium_line_g1

0x860a,	// (0x00061800) list_medium_line_t1_ParamLimits

0x860a,	// (0x00061800) list_medium_line_t1

0x1d6d,	// (0x0005af63) list_medium_line_x2_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x2_g1

0x1d79,	// (0x0005af6f) list_medium_line_x2_g2_ParamLimits

0x1d79,	// (0x0005af6f) list_medium_line_x2_g2

0x0001,

0xfbf2,	// (0x00068de8) list_medium_line_x2_g_ParamLimits

0xfbf2,	// (0x00068de8) list_medium_line_x2_g

0xc976,	// (0x00065b6c) list_medium_line_x2_t1_ParamLimits

0xc976,	// (0x00065b6c) list_medium_line_x2_t1

0x1d6d,	// (0x0005af63) list_medium_line_x3_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x3_g1

0x1d79,	// (0x0005af6f) list_medium_line_x3_g2_ParamLimits

0x1d79,	// (0x0005af6f) list_medium_line_x3_g2

0x0001,

0xfbf2,	// (0x00068de8) list_medium_line_x3_g_ParamLimits

0xfbf2,	// (0x00068de8) list_medium_line_x3_g

0xc976,	// (0x00065b6c) list_medium_line_x3_t1_ParamLimits

0xc976,	// (0x00065b6c) list_medium_line_x3_t1

0xc98c,	// (0x00065b82) thumb_sp_fs_scroll_pane_g1

0xc995,	// (0x00065b8b) thumb_sp_fs_scroll_pane_g2

0xc99e,	// (0x00065b94) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x00068ded) thumb_sp_fs_scroll_pane_g

0xc98c,	// (0x00065b82) bg_sp_fs_scroll_pane_g1

0xc995,	// (0x00065b8b) bg_sp_fs_scroll_pane_g2

0xc99e,	// (0x00065b94) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x00068ded) bg_sp_fs_scroll_pane_g

0x1d6d,	// (0x0005af63) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d6d,	// (0x0005af63) list_medium_line_x2_t3_g4_g1

0x1e13,	// (0x0005b009) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1e13,	// (0x0005b009) list_medium_line_x2_t3_g4_g2

0x1d79,	// (0x0005af6f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1d79,	// (0x0005af6f) list_medium_line_x2_t3_g4_g3

0x1d85,	// (0x0005af7b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d85,	// (0x0005af7b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000684b8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000684b8) list_medium_line_x2_t3_g4_g

0x861f,	// (0x00061815) list_medium_line_x2_t3_g4_t1_ParamLimits

0x861f,	// (0x00061815) list_medium_line_x2_t3_g4_t1

0x8635,	// (0x0006182b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8635,	// (0x0006182b) list_medium_line_x2_t3_g4_t2

0x1db8,	// (0x0005afae) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1db8,	// (0x0005afae) list_medium_line_x2_t3_g4_t3

0x0002,

0xfbfe,	// (0x00068df4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfbfe,	// (0x00068df4) list_medium_line_x2_t3_g4_t

0x6c91,	// (0x0005fe87) list_medium_line_g2_g1_ParamLimits

0x6c91,	// (0x0005fe87) list_medium_line_g2_g1

0x6c9d,	// (0x0005fe93) list_medium_line_g2_g2_ParamLimits

0x6c9d,	// (0x0005fe93) list_medium_line_g2_g2

0x0001,

0xf8b0,	// (0x00068aa6) list_medium_line_g2_g_ParamLimits

0xf8b0,	// (0x00068aa6) list_medium_line_g2_g

0x864f,	// (0x00061845) list_medium_line_g2_t1_ParamLimits

0x864f,	// (0x00061845) list_medium_line_g2_t1

0x6c91,	// (0x0005fe87) list_medium_line_t3_g2_g1_ParamLimits

0x6c91,	// (0x0005fe87) list_medium_line_t3_g2_g1

0x6c9d,	// (0x0005fe93) list_medium_line_t3_g2_g2_ParamLimits

0x6c9d,	// (0x0005fe93) list_medium_line_t3_g2_g2

0x0001,

0xf8b0,	// (0x00068aa6) list_medium_line_t3_g2_g_ParamLimits

0xf8b0,	// (0x00068aa6) list_medium_line_t3_g2_g

0x8664,	// (0x0006185a) list_medium_line_t3_g2_t1_ParamLimits

0x8664,	// (0x0006185a) list_medium_line_t3_g2_t1

0x867e,	// (0x00061874) list_medium_line_t3_g2_t2_ParamLimits

0x867e,	// (0x00061874) list_medium_line_t3_g2_t2

0x8694,	// (0x0006188a) list_medium_line_t3_g2_t3_ParamLimits

0x8694,	// (0x0006188a) list_medium_line_t3_g2_t3

0x0002,

0xfc05,	// (0x00068dfb) list_medium_line_t3_g2_t_ParamLimits

0xfc05,	// (0x00068dfb) list_medium_line_t3_g2_t

0x8291,	// (0x00061487) list_medium_line_right_icon_g1

0x86aa,	// (0x000618a0) list_medium_line_right_icon_t1

0x6c91,	// (0x0005fe87) list_medium_line_t2_g1_ParamLimits

0x6c91,	// (0x0005fe87) list_medium_line_t2_g1

0x86b8,	// (0x000618ae) list_medium_line_t2_t1_ParamLimits

0x86b8,	// (0x000618ae) list_medium_line_t2_t1

0x86d2,	// (0x000618c8) list_medium_line_t2_t2_ParamLimits

0x86d2,	// (0x000618c8) list_medium_line_t2_t2

0x0001,

0xfc0c,	// (0x00068e02) list_medium_line_t2_t_ParamLimits

0xfc0c,	// (0x00068e02) list_medium_line_t2_t

0x6c91,	// (0x0005fe87) list_medium_line_t3_g1_ParamLimits

0x6c91,	// (0x0005fe87) list_medium_line_t3_g1

0x86e7,	// (0x000618dd) list_medium_line_t3_t1_ParamLimits

0x86e7,	// (0x000618dd) list_medium_line_t3_t1

0x8701,	// (0x000618f7) list_medium_line_t3_t2_ParamLimits

0x8701,	// (0x000618f7) list_medium_line_t3_t2

0x8717,	// (0x0006190d) list_medium_line_t3_t3_ParamLimits

0x8717,	// (0x0006190d) list_medium_line_t3_t3

0x0002,

0xfc11,	// (0x00068e07) list_medium_line_t3_t_ParamLimits

0xfc11,	// (0x00068e07) list_medium_line_t3_t

0x6c91,	// (0x0005fe87) list_medium_line_g3_g1_ParamLimits

0x6c91,	// (0x0005fe87) list_medium_line_g3_g1

0x872c,	// (0x00061922) list_medium_line_g3_g2_ParamLimits

0x872c,	// (0x00061922) list_medium_line_g3_g2

0x6c9d,	// (0x0005fe93) list_medium_line_g3_g3_ParamLimits

0x6c9d,	// (0x0005fe93) list_medium_line_g3_g3

0x0002,

0xfc18,	// (0x00068e0e) list_medium_line_g3_g_ParamLimits

0xfc18,	// (0x00068e0e) list_medium_line_g3_g

0x8738,	// (0x0006192e) list_medium_line_g3_t1_ParamLimits

0x8738,	// (0x0006192e) list_medium_line_g3_t1

0x6c91,	// (0x0005fe87) list_medium_line_t2_g3_g1_ParamLimits

0x6c91,	// (0x0005fe87) list_medium_line_t2_g3_g1

0x872c,	// (0x00061922) list_medium_line_t2_g3_g2_ParamLimits

0x872c,	// (0x00061922) list_medium_line_t2_g3_g2

0x6c9d,	// (0x0005fe93) list_medium_line_t2_g3_g3_ParamLimits

0x6c9d,	// (0x0005fe93) list_medium_line_t2_g3_g3

0x0002,

0xfc18,	// (0x00068e0e) list_medium_line_t2_g3_g_ParamLimits

0xfc18,	// (0x00068e0e) list_medium_line_t2_g3_g

0x874d,	// (0x00061943) list_medium_line_t2_g3_t1_ParamLimits

0x874d,	// (0x00061943) list_medium_line_t2_g3_t1

0x8767,	// (0x0006195d) list_medium_line_t2_g3_t2_ParamLimits

0x8767,	// (0x0006195d) list_medium_line_t2_g3_t2

0x0001,

0xfc1f,	// (0x00068e15) list_medium_line_t2_g3_t_ParamLimits

0xfc1f,	// (0x00068e15) list_medium_line_t2_g3_t

0x6c91,	// (0x0005fe87) list_medium_line_t3_g3_g1_ParamLimits

0x6c91,	// (0x0005fe87) list_medium_line_t3_g3_g1

0x872c,	// (0x00061922) list_medium_line_t3_g3_g2_ParamLimits

0x872c,	// (0x00061922) list_medium_line_t3_g3_g2

0x6c9d,	// (0x0005fe93) list_medium_line_t3_g3_g3_ParamLimits

0x6c9d,	// (0x0005fe93) list_medium_line_t3_g3_g3

0x0002,

0xfc18,	// (0x00068e0e) list_medium_line_t3_g3_g_ParamLimits

0xfc18,	// (0x00068e0e) list_medium_line_t3_g3_g

0x877d,	// (0x00061973) list_medium_line_t3_g3_t1_ParamLimits

0x877d,	// (0x00061973) list_medium_line_t3_g3_t1

0x8796,	// (0x0006198c) list_medium_line_t3_g3_t2_ParamLimits

0x8796,	// (0x0006198c) list_medium_line_t3_g3_t2

0x87ac,	// (0x000619a2) list_medium_line_t3_g3_t3_ParamLimits

0x87ac,	// (0x000619a2) list_medium_line_t3_g3_t3

0x0002,

0xfc24,	// (0x00068e1a) list_medium_line_t3_g3_t_ParamLimits

0xfc24,	// (0x00068e1a) list_medium_line_t3_g3_t

0x8418,	// (0x0006160e) list_medium_line_right_iconx2_g1

0x8291,	// (0x00061487) list_medium_line_right_iconx2_g2

0x0001,

0xfc2b,	// (0x00068e21) list_medium_line_right_iconx2_g

0x87c2,	// (0x000619b8) list_medium_line_right_iconx2_t1

0x8418,	// (0x0006160e) list_medium_line_t2_right_iconx2_g1

0x8291,	// (0x00061487) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfc2b,	// (0x00068e21) list_medium_line_t2_right_iconx2_g

0x87d0,	// (0x000619c6) list_medium_line_t2_right_iconx2_t1

0x87e0,	// (0x000619d6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc30,	// (0x00068e26) list_medium_line_t2_right_iconx2_t

0x87ee,	// (0x000619e4) list_medium_line_x4_t4_t1

0x87fc,	// (0x000619f2) list_medium_line_x4_t4_t2

0x880c,	// (0x00061a02) list_medium_line_x4_t4_t3

0x881c,	// (0x00061a12) list_medium_line_x4_t4_t4

0x0003,

0xfc35,	// (0x00068e2b) list_medium_line_x4_t4_t

0x8865,	// (0x00061a5b) tport_appsw_pane_ParamLimits

0x8865,	// (0x00061a5b) tport_appsw_pane

0x8876,	// (0x00061a6c) tport_contact_pane_ParamLimits

0x8876,	// (0x00061a6c) tport_contact_pane

0x888a,	// (0x00061a80) tport_listscroll_pane_ParamLimits

0x888a,	// (0x00061a80) tport_listscroll_pane

0x88a2,	// (0x00061a98) cell_tport_appsw_pane_ParamLimits

0x88a2,	// (0x00061a98) cell_tport_appsw_pane

0x63bb,	// (0x0005f5b1) tport_appsw_pane_g1_ParamLimits

0x63bb,	// (0x0005f5b1) tport_appsw_pane_g1

0xc9a7,	// (0x00065b9d) tport_contact_pane_g1

0xc9b0,	// (0x00065ba6) tport_contact_pane_t1

0xc9be,	// (0x00065bb4) tport_contact_pane_t2

0x0001,

0xfc3e,	// (0x00068e34) tport_contact_pane_t

0xc9cc,	// (0x00065bc2) list_tport_pane

0xc9d5,	// (0x00065bcb) scroll_pane_cp_030

0xc9e6,	// (0x00065bdc) cell_tport_appsw_pane_g1

0xc9f6,	// (0x00065bec) cell_tport_appsw_pane_t1

0xca04,	// (0x00065bfa) grid_highlight_pane_cp019

0x88d8,	// (0x00061ace) list_tport_double_graphic_pane_ParamLimits

0x88d8,	// (0x00061ace) list_tport_double_graphic_pane

0xb6a2,	// (0x00064898) list_highlight_pane_cp023_ParamLimits

0xb6a2,	// (0x00064898) list_highlight_pane_cp023

0x88e5,	// (0x00061adb) list_tport_double_graphic_pane_g1_ParamLimits

0x88e5,	// (0x00061adb) list_tport_double_graphic_pane_g1

0x88f2,	// (0x00061ae8) list_tport_double_graphic_pane_t1_ParamLimits

0x88f2,	// (0x00061ae8) list_tport_double_graphic_pane_t1

0x8907,	// (0x00061afd) list_tport_double_graphic_pane_t2_ParamLimits

0x8907,	// (0x00061afd) list_tport_double_graphic_pane_t2

0x0001,

0xfc4a,	// (0x00068e40) list_tport_double_graphic_pane_t_ParamLimits

0xfc4a,	// (0x00068e40) list_tport_double_graphic_pane_t

0x97cd,	// (0x000629c3) main_cale_note_pane

0x6372,	// (0x0005f568) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6372,	// (0x0005f568) cell_vitu2_function_top_wide_pane_cp01

0x7e1b,	// (0x00061011) wait_bar_pane_cp05_ParamLimits

0xb6a2,	// (0x00064898) listscroll_cmail_pane

0xca0c,	// (0x00065c02) list_cmail_pane

0x8919,	// (0x00061b0f) list_cmail_body_pane

0x892c,	// (0x00061b22) list_single_cmail_header_caption_pane

0x8940,	// (0x00061b36) list_single_cmail_header_detail_pane_ParamLimits

0x8940,	// (0x00061b36) list_single_cmail_header_detail_pane

0xca1c,	// (0x00065c12) list_single_cmail_header_caption_pane_t1

0x8966,	// (0x00061b5c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8966,	// (0x00061b5c) list_single_cmail_header_detail_pane_g1

0xca33,	// (0x00065c29) list_single_cmail_header_detail_pane_g2_ParamLimits

0xca33,	// (0x00065c29) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc4f,	// (0x00068e45) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc4f,	// (0x00068e45) list_single_cmail_header_detail_pane_g

0xca4c,	// (0x00065c42) list_single_cmail_header_detail_pane_t1_ParamLimits

0xca4c,	// (0x00065c42) list_single_cmail_header_detail_pane_t1

0xcaac,	// (0x00065ca2) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcaac,	// (0x00065ca2) list_single_cmail_header_editor_pane_bg

0xcac3,	// (0x00065cb9) list_cmail_body_pane_g1

0xcacc,	// (0x00065cc2) list_cmail_body_pane_t1

0x64b2,	// (0x0005f6a8) list_single_cmail_header_editor_pane_bg_g1

0xa481,	// (0x00063677) list_single_cmail_header_editor_pane_bg_g1_copy1

0x64c2,	// (0x0005f6b8) list_single_cmail_header_editor_pane_bg_g1_copy2

0x64ba,	// (0x0005f6b0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb944,	// (0x00064b3a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x64e2,	// (0x0005f6d8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x64d2,	// (0x0005f6c8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x64da,	// (0x0005f6d0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa461,	// (0x00063657) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x897c,	// (0x00061b72) calenote_gesture_pane_ParamLimits

0x897c,	// (0x00061b72) calenote_gesture_pane

0x8998,	// (0x00061b8e) calenote_window_pane_ParamLimits

0x8998,	// (0x00061b8e) calenote_window_pane

0xcada,	// (0x00065cd0) popup_note_window_cp01

0x89b4,	// (0x00061baa) calenote_swipe_1_pane_ParamLimits

0x89b4,	// (0x00061baa) calenote_swipe_1_pane

0x8247,	// (0x0006143d) calenote_swipe_2_pane_ParamLimits

0x8247,	// (0x0006143d) calenote_swipe_2_pane

0xc737,	// (0x0006592d) calenote_swipe_1_pane_g1_ParamLimits

0xc737,	// (0x0006592d) calenote_swipe_1_pane_g1

0xc744,	// (0x0006593a) calenote_swipe_1_pane_g2_ParamLimits

0xc744,	// (0x0006593a) calenote_swipe_1_pane_g2

0x0001,

0xfb73,	// (0x00068d69) calenote_swipe_1_pane_g_ParamLimits

0xfb73,	// (0x00068d69) calenote_swipe_1_pane_g

0xcaec,	// (0x00065ce2) calenote_swipe_1_pane_t1_ParamLimits

0xcaec,	// (0x00065ce2) calenote_swipe_1_pane_t1

0xc737,	// (0x0006592d) calenote_swipe_2_pane_g1_ParamLimits

0xc737,	// (0x0006592d) calenote_swipe_2_pane_g1

0xcb0b,	// (0x00065d01) calenote_swipe_2_pane_g2_ParamLimits

0xcb0b,	// (0x00065d01) calenote_swipe_2_pane_g2

0x0001,

0xfc5b,	// (0x00068e51) calenote_swipe_2_pane_g_ParamLimits

0xfc5b,	// (0x00068e51) calenote_swipe_2_pane_g

0xcb17,	// (0x00065d0d) calenote_swipe_2_pane_t1_ParamLimits

0xcb17,	// (0x00065d0d) calenote_swipe_2_pane_t1

0x97cd,	// (0x000629c3) main_mup_navstr_pane

0x5071,	// (0x0005e267) main_mup3_pane_t7_ParamLimits

0x5071,	// (0x0005e267) main_mup3_pane_t7

0xd5f8,	// (0x000667ee) main_mp4_pane_g6_ParamLimits

0xd5f8,	// (0x000667ee) main_mp4_pane_g6

0xd792,	// (0x00066988) main_image3_pane_t4_ParamLimits

0xd792,	// (0x00066988) main_image3_pane_t4

0x89c9,	// (0x00061bbf) popup_navstr_preview_pane_ParamLimits

0x89c9,	// (0x00061bbf) popup_navstr_preview_pane

0x89d9,	// (0x00061bcf) scroll_navstr_pane_ParamLimits

0x89d9,	// (0x00061bcf) scroll_navstr_pane

0x97cd,	// (0x000629c3) bg_popup_preview_window_pane_cp04

0xcb3e,	// (0x00065d34) popup_navstr_preview_pane_t1

0x89ed,	// (0x00061be3) scroll_navstr_pane_g1_ParamLimits

0x89ed,	// (0x00061be3) scroll_navstr_pane_g1

0x8a01,	// (0x00061bf7) scroll_navstr_pane_t1_ParamLimits

0x8a01,	// (0x00061bf7) scroll_navstr_pane_t1

0xcae3,	// (0x00065cd9) bg_button_pane_cp014

0xcae3,	// (0x00065cd9) bg_button_pane_cp030

0x8100,	// (0x000612f6) list_double_fisheye_pane_g4_ParamLimits

0x8100,	// (0x000612f6) list_double_fisheye_pane_g4

0x810c,	// (0x00061302) list_double_fisheye_pane_g5_ParamLimits

0x810c,	// (0x00061302) list_double_fisheye_pane_g5

0xef9c,	// (0x00068192) sp_fs_scroll_pane_cp03

0xc80f,	// (0x00065a05) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc81b,	// (0x00065a11) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb90,	// (0x00068d86) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc827,	// (0x00065a1d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xca14,	// (0x00065c0a) sp_fs_scroll_pane_cp02

0xa176,	// (0x0006336c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa176,	// (0x0006336c) popup_sp_fs_calendar_preview_list_single_pane

0x97cd,	// (0x000629c3) main_cam6_pano_pane

0x983f,	// (0x00062a35) main_mup3_pane_ParamLimits

0x97cd,	// (0x000629c3) main_phacti_pane

0x7d0e,	// (0x00060f04) bg_button_pane_cp11

0x7d26,	// (0x00060f1c) main_mobtv_info_pane_g2_ParamLimits

0x7d26,	// (0x00060f1c) main_mobtv_info_pane_g2

0x0001,

0xfaf0,	// (0x00068ce6) main_mobtv_info_pane_g_ParamLimits

0xfaf0,	// (0x00068ce6) main_mobtv_info_pane_g

0x7edb,	// (0x000610d1) sc_clock_pane_t5_ParamLimits

0x7edb,	// (0x000610d1) sc_clock_pane_t5

0x7f83,	// (0x00061179) main_radioblah_pane_g1_ParamLimits

0xc66c,	// (0x00065862) main_radioblah_pane_t3_ParamLimits

0xc66c,	// (0x00065862) main_radioblah_pane_t3

0xc684,	// (0x0006587a) main_radioblah_pane_t4_ParamLimits

0xc684,	// (0x0006587a) main_radioblah_pane_t4

0x7fab,	// (0x000611a1) main_radioblah_text_pane_ParamLimits

0x7fab,	// (0x000611a1) main_radioblah_text_pane

0x7fbd,	// (0x000611b3) main_radioblah_info_pane_g1_ParamLimits

0x804e,	// (0x00061244) main_radioblah_info_pane_t4_ParamLimits

0x804e,	// (0x00061244) main_radioblah_info_pane_t4

0xb6a2,	// (0x00064898) main_sp_fs_calendar_pane

0x8a17,	// (0x00061c0d) main_phacti_pane_g1

0x8a1f,	// (0x00061c15) phacti_note_pane_ParamLimits

0x8a1f,	// (0x00061c15) phacti_note_pane

0xcb55,	// (0x00065d4b) phacti_term_pane_ParamLimits

0xcb55,	// (0x00065d4b) phacti_term_pane

0xcb6a,	// (0x00065d60) phacti_note_pane_t1_ParamLimits

0xcb6a,	// (0x00065d60) phacti_note_pane_t1

0xcb81,	// (0x00065d77) phacti_term_pane_g1

0xcb89,	// (0x00065d7f) phacti_term_pane_t1_ParamLimits

0xcb89,	// (0x00065d7f) phacti_term_pane_t1

0xcbb3,	// (0x00065da9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xcbbb,	// (0x00065db1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc65,	// (0x00068e5b) popup_sp_fs_calendar_preview_list_single_pane_g

0xcbc3,	// (0x00065db9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcbc3,	// (0x00065db9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcbd9,	// (0x00065dcf) aid_popup_sp_fs_bg_corner_pane

0xe849,	// (0x00067a3f) popup_sp_fs_calendar_preview_bg_pane_g1

0x97cd,	// (0x000629c3) popup_sp_fs_calendar_preview_bg_pane

0xcbe1,	// (0x00065dd7) popup_sp_fs_calendar_preview_list_pane

0xe449,	// (0x0006763f) bg_main_sp_fs_cale_pane_ParamLimits

0xe449,	// (0x0006763f) bg_main_sp_fs_cale_pane

0xcbf2,	// (0x00065de8) listscroll_cale_mrui_pane_ParamLimits

0xcbf2,	// (0x00065de8) listscroll_cale_mrui_pane

0xcc07,	// (0x00065dfd) listscroll_sp_fs_schedule_track_pane

0xcc10,	// (0x00065e06) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcc10,	// (0x00065e06) main_sp_fs_ctrlbar_pane_cp01

0xcc23,	// (0x00065e19) main_sp_fs_ribbon_pane

0xcc2b,	// (0x00065e21) popup_sp_fs_cale_preview_window

0x8a81,	// (0x00061c77) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a81,	// (0x00061c77) list_single_sp_fs_schedule_track_pane

0xb6a2,	// (0x00064898) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb6a2,	// (0x00064898) bg_sp_fs_highlight_list_pane_cp03

0x8a92,	// (0x00061c88) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a92,	// (0x00061c88) list_single_sp_fs_schedule_track_pane_g1

0x8a9e,	// (0x00061c94) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a9e,	// (0x00061c94) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc6a,	// (0x00068e60) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc6a,	// (0x00068e60) list_single_sp_fs_schedule_track_pane_g

0x8aaa,	// (0x00061ca0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8aaa,	// (0x00061ca0) list_single_sp_fs_schedule_track_pane_t1

0x8ac4,	// (0x00061cba) sp_fs_schedule_track_pane_ParamLimits

0x8ac4,	// (0x00061cba) sp_fs_schedule_track_pane

0xcc3a,	// (0x00065e30) sp_fs_schedule_track_pane_g1

0xcc42,	// (0x00065e38) sp_fs_schedule_track_pane_g2

0xcc4a,	// (0x00065e40) sp_fs_schedule_track_pane_g3

0xcc52,	// (0x00065e48) sp_fs_schedule_track_pane_g4

0xcc5a,	// (0x00065e50) sp_fs_schedule_track_pane_g5

0x0004,

0xfc6f,	// (0x00068e65) sp_fs_schedule_track_pane_g

0x64b2,	// (0x0005f6a8) bg_sp_fs_schedule_viewer_highlight_g1

0xa481,	// (0x00063677) bg_sp_fs_schedule_viewer_highlight_g2

0x64ba,	// (0x0005f6b0) bg_sp_fs_schedule_viewer_highlight_g3

0x64c2,	// (0x0005f6b8) bg_sp_fs_schedule_viewer_highlight_g4

0xb944,	// (0x00064b3a) bg_sp_fs_schedule_viewer_highlight_g5

0x64d2,	// (0x0005f6c8) bg_sp_fs_schedule_viewer_highlight_g6

0x64da,	// (0x0005f6d0) bg_sp_fs_schedule_viewer_highlight_g7

0x64e2,	// (0x0005f6d8) bg_sp_fs_schedule_viewer_highlight_g8

0xa461,	// (0x00063657) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc7a,	// (0x00068e70) bg_sp_fs_schedule_viewer_highlight_g

0x97cd,	// (0x000629c3) bg_main_sp_fs_ribbon_pane

0x8ad5,	// (0x00061ccb) main_sp_fs_ribbon_pane_g1

0xcc62,	// (0x00065e58) main_sp_fs_ribbon_pane_t1

0x8ade,	// (0x00061cd4) main_sp_fs_ribbon_pane_t2

0xcc71,	// (0x00065e67) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc8d,	// (0x00068e83) main_sp_fs_ribbon_pane_t

0xcc80,	// (0x00065e76) main_sp_fs_ribbon_scheduler_pane

0xcc88,	// (0x00065e7e) bg_main_sp_fs_ribbon_pane_g1

0xcc91,	// (0x00065e87) bg_main_sp_fs_ribbon_pane_g2

0xcc9a,	// (0x00065e90) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc94,	// (0x00068e8a) bg_main_sp_fs_ribbon_pane_g

0xcca2,	// (0x00065e98) main_sp_fs_ribbon_scheduler_pane_g1

0xccab,	// (0x00065ea1) main_sp_fs_ribbon_scheduler_pane_g2

0xccb4,	// (0x00065eaa) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc9b,	// (0x00068e91) main_sp_fs_ribbon_scheduler_pane_g

0xccbd,	// (0x00065eb3) list_cale_mrui_pane

0x8aed,	// (0x00061ce3) sp_fs_scroll_pane_cp07_ParamLimits

0x8aed,	// (0x00061ce3) sp_fs_scroll_pane_cp07

0x8b05,	// (0x00061cfb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b05,	// (0x00061cfb) bg_sp_fs_schedule_viewer_highlight

0xccca,	// (0x00065ec0) list_single_sp_fs_schedule_track_pane_cp01

0xccd2,	// (0x00065ec8) list_sp_fs_schedule_track_pane

0xccda,	// (0x00065ed0) sp_fs_scroll_pane_cp06_ParamLimits

0xccda,	// (0x00065ed0) sp_fs_scroll_pane_cp06

0xe849,	// (0x00067a3f) bgmain_sp_fs_calendar_pane_g1

0x8b15,	// (0x00061d0b) list_single_cale_mrui_pane_ParamLimits

0x8b15,	// (0x00061d0b) list_single_cale_mrui_pane

0xccec,	// (0x00065ee2) list_single_cale_mrui_row_pane_ParamLimits

0xccec,	// (0x00065ee2) list_single_cale_mrui_row_pane

0xccf9,	// (0x00065eef) list_single_cale_mrui_row_pane_g1_ParamLimits

0xccf9,	// (0x00065eef) list_single_cale_mrui_row_pane_g1

0xcd3e,	// (0x00065f34) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcd3e,	// (0x00065f34) list_single_cale_mrui_row_pane_t1

0x8b35,	// (0x00061d2b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8b35,	// (0x00061d2b) list_single_cale_mrui_row_pane_t2

0xcd50,	// (0x00065f46) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcd50,	// (0x00065f46) list_single_cale_mrui_row_pane_t3

0xcd7f,	// (0x00065f75) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcd7f,	// (0x00065f75) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca9,	// (0x00068e9f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca9,	// (0x00068e9f) list_single_cale_mrui_row_pane_t

0x8b9b,	// (0x00061d91) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8b9b,	// (0x00061d91) list_single_cmail_header_editor_pane_bg_cp01

0x8bbb,	// (0x00061db1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8bbb,	// (0x00061db1) list_single_cmail_header_editor_pane_bg_cp02

0x8bd7,	// (0x00061dcd) main_radioblah_text_pane_t1_ParamLimits

0x8bd7,	// (0x00061dcd) main_radioblah_text_pane_t1

0xcdae,	// (0x00065fa4) cam6_indi_pane_cp01

0xcdb6,	// (0x00065fac) cam6_mode_pane_cp01

0xcdbe,	// (0x00065fb4) cam6_pano_pane

0xcdc7,	// (0x00065fbd) cam6_zoom_pane_cp01

0xcdcf,	// (0x00065fc5) cam6_pano_image_pane

0xcdd8,	// (0x00065fce) cam6_pano_pane_g1

0xc3d3,	// (0x000655c9) cam6_pano_pane_g2

0xcde1,	// (0x00065fd7) cam6_pano_pane_g3

0xcdea,	// (0x00065fe0) cam6_pano_pane_g4

0xedc1,	// (0x00067fb7) cam6_pano_pane_g5

0xcdf3,	// (0x00065fe9) cam6_pano_pane_g6

0xcdfb,	// (0x00065ff1) cam6_pano_pane_g7

0xce03,	// (0x00065ff9) cam6_pano_pane_g8

0xce0c,	// (0x00066002) cam6_pano_pane_g9

0x0008,

0xfcb2,	// (0x00068ea8) cam6_pano_pane_g

0x97cd,	// (0x000629c3) main_browser_tag_pane

0xcb36,	// (0x00065d2c) grid_navstr_albumart_pane

0xce15,	// (0x0006600b) cell_navstr_albumart_pane_ParamLimits

0xce15,	// (0x0006600b) cell_navstr_albumart_pane

0xae3e,	// (0x00064034) cell_navstr_albumart_pane_g1

0xe21a,	// (0x00067410) cell_navstr_albumart_pane_g2

0xe22a,	// (0x00067420) cell_navstr_albumart_pane_g3

0xe222,	// (0x00067418) cell_navstr_albumart_pane_g4

0x0003,

0xfcc5,	// (0x00068ebb) cell_navstr_albumart_pane_g

0x8bf1,	// (0x00061de7) bt_list_pane_ParamLimits

0x8bf1,	// (0x00061de7) bt_list_pane

0x8c04,	// (0x00061dfa) bt_list_pane_t1

0x8c13,	// (0x00061e09) bt_list_pane_t2

0x0001,

0xfcce,	// (0x00068ec4) bt_list_pane_t

0x97cd,	// (0x000629c3) main_cale_prevew_pane

0x8c22,	// (0x00061e18) popup_cale_preview_window_ParamLimits

0x8c22,	// (0x00061e18) popup_cale_preview_window

0xb6a2,	// (0x00064898) bg_popup_preview_window_pane_cp05_ParamLimits

0xb6a2,	// (0x00064898) bg_popup_preview_window_pane_cp05

0xce2d,	// (0x00066023) list_cale_preview_pane_ParamLimits

0xce2d,	// (0x00066023) list_cale_preview_pane

0xce39,	// (0x0006602f) list_double_cale_preview_pane_ParamLimits

0xce39,	// (0x0006602f) list_double_cale_preview_pane

0xce4b,	// (0x00066041) list_single_cale_preview_pane_ParamLimits

0xce4b,	// (0x00066041) list_single_cale_preview_pane

0xce5f,	// (0x00066055) list_single_cale_preview_pane_g1

0xce67,	// (0x0006605d) list_single_cale_preview_pane_t1_ParamLimits

0xce67,	// (0x0006605d) list_single_cale_preview_pane_t1

0xce7c,	// (0x00066072) list_double_cale_preview_pane_g1

0xce84,	// (0x0006607a) list_double_cale_preview_pane_t1_ParamLimits

0xce84,	// (0x0006607a) list_double_cale_preview_pane_t1

0xce99,	// (0x0006608f) list_double_cale_preview_pane_t2_ParamLimits

0xce99,	// (0x0006608f) list_double_cale_preview_pane_t2

0x0001,

0xfcd3,	// (0x00068ec9) list_double_cale_preview_pane_t_ParamLimits

0xfcd3,	// (0x00068ec9) list_double_cale_preview_pane_t

0x97cd,	// (0x000629c3) main_ezdial_pane

0xb6a2,	// (0x00064898) main_sp_fs_email_pane_ParamLimits

0x82b7,	// (0x000614ad) cmail_ddmenu_btn01_pane_ParamLimits

0x82b7,	// (0x000614ad) cmail_ddmenu_btn01_pane

0x82ca,	// (0x000614c0) cmail_ddmenu_btn02_pane_ParamLimits

0x82ca,	// (0x000614c0) cmail_ddmenu_btn02_pane

0x82ed,	// (0x000614e3) cmail_ddmenu_btn03_pane_ParamLimits

0x82ed,	// (0x000614e3) cmail_ddmenu_btn03_pane

0x830f,	// (0x00061505) main_sp_fs_ctrlbar_pane_ParamLimits

0x8333,	// (0x00061529) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8919,	// (0x00061b0f) list_cmail_body_pane_ParamLimits

0xca2a,	// (0x00065c20) bg_button_pane_cp12

0xca3f,	// (0x00065c35) list_single_cmail_header_detail_pane_g3_ParamLimits

0xca3f,	// (0x00065c35) list_single_cmail_header_detail_pane_g3

0xca88,	// (0x00065c7e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xca88,	// (0x00065c7e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc56,	// (0x00068e4c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc56,	// (0x00068e4c) list_single_cmail_header_detail_pane_t

0xcb9e,	// (0x00065d94) phacti_term_pane_t2_ParamLimits

0xcb9e,	// (0x00065d94) phacti_term_pane_t2

0x0001,

0xfc60,	// (0x00068e56) phacti_term_pane_t_ParamLimits

0xfc60,	// (0x00068e56) phacti_term_pane_t

0xceb1,	// (0x000660a7) aid_size_list_single_double

0x8c37,	// (0x00061e2d) popup_ezdial_listscroll_window

0x8c4d,	// (0x00061e43) popup_number_entry_window_cp01

0xa211,	// (0x00063407) bg_popup_call_pane_cp09

0xcebd,	// (0x000660b3) ezdial_list_pane

0xcec5,	// (0x000660bb) scroll_pane_cp23

0xe449,	// (0x0006763f) bg_button_pane_cp028_ParamLimits

0xe449,	// (0x0006763f) bg_button_pane_cp028

0x8c59,	// (0x00061e4f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c59,	// (0x00061e4f) cmail_ddmenu_btn01_pane_g1

0x8c65,	// (0x00061e5b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c65,	// (0x00061e5b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd8,	// (0x00068ece) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd8,	// (0x00068ece) cmail_ddmenu_btn01_pane_g

0xcecd,	// (0x000660c3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcecd,	// (0x000660c3) cmail_ddmenu_btn01_pane_t1

0xe449,	// (0x0006763f) bg_button_pane_cp029_ParamLimits

0xe449,	// (0x0006763f) bg_button_pane_cp029

0x8c79,	// (0x00061e6f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c79,	// (0x00061e6f) cmail_ddmenu_btn02_pane_g1

0x8c92,	// (0x00061e88) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c92,	// (0x00061e88) cmail_ddmenu_btn02_pane_t1

0xb6a2,	// (0x00064898) bg_button_pane_cp031_ParamLimits

0xb6a2,	// (0x00064898) bg_button_pane_cp031

0x8c79,	// (0x00061e6f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c79,	// (0x00061e6f) cmail_ddmenu_btn03_pane_g1

0x8c92,	// (0x00061e88) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c92,	// (0x00061e88) cmail_ddmenu_btn03_pane_t1

0x5bd6,	// (0x0005edcc) cell_dialer2_keypad_pane_t1_ParamLimits

0x5bf0,	// (0x0005ede6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5bf0,	// (0x0005ede6) cell_dialer2_keypad_pane_t1_copy1

0x7b33,	// (0x00060d29) ncimui_group_button_pane

0xb6a2,	// (0x00064898) main_sp_fs_calendar_pane_ParamLimits

0x892c,	// (0x00061b22) list_single_cmail_header_caption_pane_ParamLimits

0xcbe9,	// (0x00065ddf) aid_recal_txt_sm_pane

0x97cd,	// (0x000629c3) mian_recal_day_pane

0xcc2b,	// (0x00065e21) popup_sp_fs_cale_preview_window_ParamLimits

0xcee3,	// (0x000660d9) list_recal_day_pane

0xcf25,	// (0x0006611b) list_single_recal_day_pane_ParamLimits

0xcf25,	// (0x0006611b) list_single_recal_day_pane

0xcf37,	// (0x0006612d) list_single_recal_day_pane_g1_ParamLimits

0xcf37,	// (0x0006612d) list_single_recal_day_pane_g1

0xcf43,	// (0x00066139) list_single_recal_day_pane_g2_ParamLimits

0xcf43,	// (0x00066139) list_single_recal_day_pane_g2

0xcf4f,	// (0x00066145) list_single_recal_day_pane_g3_ParamLimits

0xcf4f,	// (0x00066145) list_single_recal_day_pane_g3

0x8cb6,	// (0x00061eac) list_single_recal_day_pane_g4_ParamLimits

0x8cb6,	// (0x00061eac) list_single_recal_day_pane_g4

0xcf5b,	// (0x00066151) list_single_recal_day_pane_g5_ParamLimits

0xcf5b,	// (0x00066151) list_single_recal_day_pane_g5

0xcf67,	// (0x0006615d) list_single_recal_day_pane_g6_ParamLimits

0xcf67,	// (0x0006615d) list_single_recal_day_pane_g6

0x0004,

0xfce7,	// (0x00068edd) list_single_recal_day_pane_g_ParamLimits

0xfce7,	// (0x00068edd) list_single_recal_day_pane_g

0xcf7b,	// (0x00066171) list_single_recal_day_pane_t1

0xcf8d,	// (0x00066183) list_single_recal_day_pane_t2

0x0001,

0xfcf2,	// (0x00068ee8) list_single_recal_day_pane_t

0x8cce,	// (0x00061ec4) ncimui_query_button_pane_ParamLimits

0x8cce,	// (0x00061ec4) ncimui_query_button_pane

0x8cde,	// (0x00061ed4) ncimui_query_button_pane_t1_ParamLimits

0x8cde,	// (0x00061ed4) ncimui_query_button_pane_t1

0xcf9f,	// (0x00066195) ncimui_query_button_pane_t2_ParamLimits

0xcf9f,	// (0x00066195) ncimui_query_button_pane_t2

0x0001,

0xfcf7,	// (0x00068eed) ncimui_query_button_pane_t_ParamLimits

0xfcf7,	// (0x00068eed) ncimui_query_button_pane_t

0x8cf1,	// (0x00061ee7) query_button_pane_ParamLimits

0x8cf1,	// (0x00061ee7) query_button_pane

0x97cd,	// (0x000629c3) bg_button_pane_cp0028

0xcfb2,	// (0x000661a8) query_button_pane_t1

0x3e21,	// (0x0005d017) main_tport_pane_ParamLimits

0x882c,	// (0x00061a22) bg_popup_window_pane_cp01_ParamLimits

0x882c,	// (0x00061a22) bg_popup_window_pane_cp01

0x8843,	// (0x00061a39) heading_pane_cp08_ParamLimits

0x8843,	// (0x00061a39) heading_pane_cp08

0x8854,	// (0x00061a4a) heading_pane_cp07_ParamLimits

0x8854,	// (0x00061a4a) heading_pane_cp07

0xc9e6,	// (0x00065bdc) cell_tport_appsw_pane_g2

0x0002,

0xfc43,	// (0x00068e39) cell_tport_appsw_pane_g

0x34bf,	// (0x0005c6b5) input_candi_list_open_g1

0xa67a,	// (0x00063870) list_cale_time_pane_g6_ParamLimits

0xa67a,	// (0x00063870) list_cale_time_pane_g6

0x4aae,	// (0x0005dca4) aid_size_touch_calib_1_ParamLimits

0x4aae,	// (0x0005dca4) aid_size_touch_calib_1

0x4ac0,	// (0x0005dcb6) aid_size_touch_calib_2_ParamLimits

0x4ac0,	// (0x0005dcb6) aid_size_touch_calib_2

0x4ad6,	// (0x0005dccc) aid_size_touch_calib_3_ParamLimits

0x4ad6,	// (0x0005dccc) aid_size_touch_calib_3

0x4aee,	// (0x0005dce4) aid_size_touch_calib_4_ParamLimits

0x4aee,	// (0x0005dce4) aid_size_touch_calib_4

0x4b02,	// (0x0005dcf8) main_touch_calib_button_group_pane_ParamLimits

0x4b02,	// (0x0005dcf8) main_touch_calib_button_group_pane

0x4b1a,	// (0x0005dd10) main_touch_calib_pane_g1_ParamLimits

0x4b2c,	// (0x0005dd22) main_touch_calib_pane_g2_ParamLimits

0x4b3e,	// (0x0005dd34) main_touch_calib_pane_g3_ParamLimits

0x4b50,	// (0x0005dd46) main_touch_calib_pane_g4_ParamLimits

0xf647,	// (0x0006883d) main_touch_calib_pane_g_ParamLimits

0x4b62,	// (0x0005dd58) main_touch_calib_pane_t1_ParamLimits

0x4b7a,	// (0x0005dd70) main_touch_calib_pane_t2_ParamLimits

0x4b92,	// (0x0005dd88) main_touch_calib_pane_t3_ParamLimits

0x4ba4,	// (0x0005dd9a) main_touch_calib_pane_t4_ParamLimits

0x4bb6,	// (0x0005ddac) main_touch_calib_pane_t5_ParamLimits

0xf650,	// (0x00068846) main_touch_calib_pane_t_ParamLimits

0xeb78,	// (0x00067d6e) list_single_fp_cale_pane_g3_ParamLimits

0xeb78,	// (0x00067d6e) list_single_fp_cale_pane_g3

0x983f,	// (0x00062a35) bg_button_pane_cp012_ParamLimits

0x983f,	// (0x00062a35) bg_vkb2_func_pane_cp03_ParamLimits

0x6c47,	// (0x0005fe3d) cell_vitu2_function_top_pane_g1_ParamLimits

0x983f,	// (0x00062a35) bg_vkb2_func_pane_cp04_ParamLimits

0x7ac0,	// (0x00060cb6) main_ncimui_button_group_pane_ParamLimits

0x7ac0,	// (0x00060cb6) main_ncimui_button_group_pane

0x7b1e,	// (0x00060d14) main_ncimui_pane_t3_ParamLimits

0x7b1e,	// (0x00060d14) main_ncimui_pane_t3

0xcb4c,	// (0x00065d42) phacti_button_group_pane

0xceb1,	// (0x000660a7) aid_size_list_single_double_ParamLimits

0x8c37,	// (0x00061e2d) popup_ezdial_listscroll_window_ParamLimits

0x8c4d,	// (0x00061e43) popup_number_entry_window_cp01_ParamLimits

0x8d03,	// (0x00061ef9) phacti_button_pane_ParamLimits

0x8d03,	// (0x00061ef9) phacti_button_pane

0x97cd,	// (0x000629c3) bg_button_pane_cp14

0xcfc0,	// (0x000661b6) phacti_button_pane_t1

0x8d12,	// (0x00061f08) main_touch_calib_button_pane_ParamLimits

0x8d12,	// (0x00061f08) main_touch_calib_button_pane

0x9fea,	// (0x000631e0) bg_button_pane_cp18_ParamLimits

0x9fea,	// (0x000631e0) bg_button_pane_cp18

0xcfce,	// (0x000661c4) main_touch_calib_button_pane_t1_ParamLimits

0xcfce,	// (0x000661c4) main_touch_calib_button_pane_t1

0xcfe4,	// (0x000661da) main_touch_calib_button_pane_t2_ParamLimits

0xcfe4,	// (0x000661da) main_touch_calib_button_pane_t2

0x0001,

0xfcfc,	// (0x00068ef2) main_touch_calib_button_pane_t_ParamLimits

0xfcfc,	// (0x00068ef2) main_touch_calib_button_pane_t

0x97cd,	// (0x000629c3) cell_ncimui_button_pane

0x97cd,	// (0x000629c3) bg_button_pane_cp032

0xd002,	// (0x000661f8) cell_ncimui_button_pane_t1

0xd772,	// (0x00066968) image3_infobar_pane_ParamLimits

0xd772,	// (0x00066968) image3_infobar_pane

0x7f03,	// (0x000610f9) fs_bigclock_status_pane_ParamLimits

0x7f03,	// (0x000610f9) fs_bigclock_status_pane

0x7f10,	// (0x00061106) main_fs_bigclock_clock_pane_ParamLimits

0x7f10,	// (0x00061106) main_fs_bigclock_clock_pane

0x7f2c,	// (0x00061122) main_fs_bigclock_indi_pane_ParamLimits

0x7f2c,	// (0x00061122) main_fs_bigclock_indi_pane

0x7f56,	// (0x0006114c) main_fs_bigclock_swipe_pane_ParamLimits

0x7f56,	// (0x0006114c) main_fs_bigclock_swipe_pane

0x97cd,	// (0x000629c3) main_fs_clock_dumped_data

0xc4e0,	// (0x000656d6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc4e0,	// (0x000656d6) list_single_fs_bigclock_indicator_pane_g1

0xc4fa,	// (0x000656f0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc4fa,	// (0x000656f0) list_single_fs_bigclock_indicator_pane_g2

0xc514,	// (0x0006570a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc514,	// (0x0006570a) list_single_fs_bigclock_indicator_pane_g3

0xc52e,	// (0x00065724) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc52e,	// (0x00065724) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb24,	// (0x00068d1a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb24,	// (0x00068d1a) list_single_fs_bigclock_indicator_pane_g

0xc557,	// (0x0006574d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc557,	// (0x0006574d) list_single_fs_bigclock_indicator_pane_t1

0xc57f,	// (0x00065775) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc57f,	// (0x00065775) list_single_fs_bigclock_indicator_pane_t2

0xc5a7,	// (0x0006579d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc5a7,	// (0x0006579d) list_single_fs_bigclock_indicator_pane_t3

0xc5cf,	// (0x000657c5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc5cf,	// (0x000657c5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb2f,	// (0x00068d25) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb2f,	// (0x00068d25) list_single_fs_bigclock_indicator_pane_t

0xd010,	// (0x00066206) image3_infobar_fav_pane_ParamLimits

0xd010,	// (0x00066206) image3_infobar_fav_pane

0xd020,	// (0x00066216) image3_infobar_loc_pane_ParamLimits

0xd020,	// (0x00066216) image3_infobar_loc_pane

0xd034,	// (0x0006622a) image3_infobar_time_pane_ParamLimits

0xd034,	// (0x0006622a) image3_infobar_time_pane

0xe849,	// (0x00067a3f) image3_infobar_time_pane_g1

0xd044,	// (0x0006623a) image3_infobar_time_pane_t1

0xe849,	// (0x00067a3f) image3_infobar_loc_pane_g1

0xd052,	// (0x00066248) image3_infobar_loc_pane_g2

0x0001,

0xfd01,	// (0x00068ef7) image3_infobar_loc_pane_g

0xd05a,	// (0x00066250) image3_infobar_loc_pane_t1

0xe849,	// (0x00067a3f) image3_infobar_fav_pane_g1

0xd068,	// (0x0006625e) image3_infobar_fav_pane_g2

0x0001,

0xfd06,	// (0x00068efc) image3_infobar_fav_pane_g

0xd070,	// (0x00066266) fs_bigclock_status_battery_pane

0xd079,	// (0x0006626f) fs_bigclock_status_signal_pane

0xd082,	// (0x00066278) fs_bigclock_status_title_pane

0xd08b,	// (0x00066281) fs_bigclock_status_signal_pane_g1

0xd094,	// (0x0006628a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd0b,	// (0x00068f01) fs_bigclock_status_signal_pane_g

0xd09c,	// (0x00066292) fs_bigclock_status_battery_pane_g1

0xd0a5,	// (0x0006629b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd10,	// (0x00068f06) fs_bigclock_status_battery_pane_g

0xd0ad,	// (0x000662a3) fs_bigclock_status_title_pane_t1

0x8d25,	// (0x00061f1b) main_fs_bigclock_clock_pane_g1

0x8d25,	// (0x00061f1b) main_fs_bigclock_clock_pane_g2

0x8d36,	// (0x00061f2c) main_fs_bigclock_clock_pane_g3

0x8d36,	// (0x00061f2c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd15,	// (0x00068f0b) main_fs_bigclock_clock_pane_g

0x8d49,	// (0x00061f3f) main_fs_bigclock_clock_pane_t1

0x8d5f,	// (0x00061f55) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd1e,	// (0x00068f14) main_fs_bigclock_clock_pane_t

0xd0bb,	// (0x000662b1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd0bb,	// (0x000662b1) list_single_fs_bigclock_indicator_pane

0xd0cc,	// (0x000662c2) list_single_fs_bigclock_pane_ParamLimits

0xd0cc,	// (0x000662c2) list_single_fs_bigclock_pane

0xd0f2,	// (0x000662e8) main_fs_bigclock_indicator_pane_t1

0xd101,	// (0x000662f7) list_single_fs_bigclock_pane_g1

0xd109,	// (0x000662ff) list_single_fs_bigclock_pane_t1

0xe849,	// (0x00067a3f) main_fs_bigclock_swipe_pane_g1

0xd14c,	// (0x00066342) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd2f,	// (0x00068f25) main_fs_bigclock_swipe_pane_g

0xd154,	// (0x0006634a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd154,	// (0x0006634a) main_fs_bigclock_swipe_pane_t1

0x2de9,	// (0x0005bfdf) call_type_pane_ParamLimits

0x97cd,	// (0x000629c3) main_btmg_pane

0xcd25,	// (0x00065f1b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcd25,	// (0x00065f1b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfca2,	// (0x00068e98) list_single_cale_mrui_row_pane_g_ParamLimits

0xfca2,	// (0x00068e98) list_single_cale_mrui_row_pane_g

0xcf0c,	// (0x00066102) list_recal_vselct_arw_lo_pane

0xcf14,	// (0x0006610a) list_recal_vselct_arw_up_pane

0xcf1c,	// (0x00066112) list_recal_vselct_pane

0x8db7,	// (0x00061fad) btmg_button_pane

0x8dbf,	// (0x00061fb5) main_btmg_pane_g1

0x97cd,	// (0x000629c3) bg_button_pane_cp044

0xd171,	// (0x00066367) btmg_button_pane_t1

0xe435,	// (0x0006762b) aid_listscroll_gen

0xb6a2,	// (0x00064898) main_cntbar_detail_pane

0xca0c,	// (0x00065c02) list_cmail_folder_pane

0xef9c,	// (0x00068192) sp_fs_scroll_pane_cp03_ParamLimits

0x892c,	// (0x00061b22) list_single_fs_dyc_pane_cp01_ParamLimits

0x892c,	// (0x00061b22) list_single_fs_dyc_pane_cp01

0xd17f,	// (0x00066375) aid_size_cmail_indent

0xd188,	// (0x0006637e) list_single_dyc_row_pane_cp01

0x8def,	// (0x00061fe5) cntbar_detail_list_pane_ParamLimits

0x8def,	// (0x00061fe5) cntbar_detail_list_pane

0x8e35,	// (0x0006202b) main_cntbar_detail_cont_pane_ParamLimits

0x8e35,	// (0x0006202b) main_cntbar_detail_cont_pane

0xef9c,	// (0x00068192) scroll_pane_cp032_ParamLimits

0xef9c,	// (0x00068192) scroll_pane_cp032

0x8e49,	// (0x0006203f) cntbar_detail_list_event_pane_ParamLimits

0x8e49,	// (0x0006203f) cntbar_detail_list_event_pane

0x8dff,	// (0x00061ff5) cntbar_detail_list_shct_pane

0xa4cf,	// (0x000636c5) aid_list_gen

0xd191,	// (0x00066387) aid_scroll

0xd19a,	// (0x00066390) aid_size_touch_scroll_bar

0x72dd,	// (0x000604d3) aid_list_double

0xbc80,	// (0x00064e76) aid_list_single

0xbc80,	// (0x00064e76) aid_list_single_lg

0xd1a3,	// (0x00066399) aid_list_z_g_a_sm

0x8e59,	// (0x0006204f) aid_list_z_g_d

0x8e61,	// (0x00062057) aid_txt_z_prm

0x8e6f,	// (0x00062065) aid_txt_z_prm_cp01

0x8e7d,	// (0x00062073) aid_txt_z_sec

0x8e8b,	// (0x00062081) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e8b,	// (0x00062081) main_cntbar_detail_cont_pane_g1

0x8e9e,	// (0x00062094) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e9e,	// (0x00062094) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd34,	// (0x00068f2a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd34,	// (0x00068f2a) main_cntbar_detail_cont_pane_g

0xd1ab,	// (0x000663a1) main_cntbar_detail_cont_pane_t1

0xd1b9,	// (0x000663af) main_cntbar_detail_cont_pane_t2

0xd1c7,	// (0x000663bd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd39,	// (0x00068f2f) main_cntbar_detail_cont_pane_t

0x8eae,	// (0x000620a4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8eae,	// (0x000620a4) cell_cntbar_detail_list_shct_pane

0xd1d5,	// (0x000663cb) cntbar_detail_list_shct_pane_g1

0xd1de,	// (0x000663d4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd40,	// (0x00068f36) cntbar_detail_list_shct_pane_g

0x8ec0,	// (0x000620b6) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ec0,	// (0x000620b6) cntbar_detail_list_event_pane_g1

0x8ecc,	// (0x000620c2) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ecc,	// (0x000620c2) cntbar_detail_list_event_pane_g2

0x0005,

0xfd45,	// (0x00068f3b) cntbar_detail_list_event_pane_g_ParamLimits

0xfd45,	// (0x00068f3b) cntbar_detail_list_event_pane_g

0x8f38,	// (0x0006212e) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f38,	// (0x0006212e) cntbar_detail_list_event_pane_t1

0x8f4d,	// (0x00062143) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f4d,	// (0x00062143) cntbar_detail_list_event_pane_t2

0x0002,

0xfd52,	// (0x00068f48) cntbar_detail_list_event_pane_t_ParamLimits

0xfd52,	// (0x00068f48) cntbar_detail_list_event_pane_t

0xe849,	// (0x00067a3f) cell_cntbar_detail_list_shct_pane_g1

0xac98,	// (0x00063e8e) navi_pane_mv_g3

0xb6a2,	// (0x00064898) main_cntbar_detail_pane_ParamLimits

0x97cd,	// (0x000629c3) main_notif_wgt_pane

0xd592,	// (0x00066788) aid_tch_main_mp4_pane_g4

0xd76a,	// (0x00066960) popup_slider_window_cp02

0xcf02,	// (0x000660f8) list_recal_day_event_pane

0x8dc7,	// (0x00061fbd) cntbar_detail_btn_pane_ParamLimits

0x8dc7,	// (0x00061fbd) cntbar_detail_btn_pane

0x8dda,	// (0x00061fd0) cntbar_detail_btn_pane_cp01_ParamLimits

0x8dda,	// (0x00061fd0) cntbar_detail_btn_pane_cp01

0x8dff,	// (0x00061ff5) cntbar_detail_list_shct_pane_ParamLimits

0x8e0f,	// (0x00062005) cntbar_detail_pane_g1_ParamLimits

0x8e0f,	// (0x00062005) cntbar_detail_pane_g1

0x8e1f,	// (0x00062015) cntbar_detail_pane_t1_ParamLimits

0x8e1f,	// (0x00062015) cntbar_detail_pane_t1

0x8ed8,	// (0x000620ce) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ed8,	// (0x000620ce) cntbar_detail_list_event_pane_g3

0x8ef0,	// (0x000620e6) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ef0,	// (0x000620e6) cntbar_detail_list_event_pane_g4

0x8f08,	// (0x000620fe) cntbar_detail_list_event_pane_g5_ParamLimits

0x8f08,	// (0x000620fe) cntbar_detail_list_event_pane_g5

0x8f20,	// (0x00062116) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f20,	// (0x00062116) cntbar_detail_list_event_pane_g6

0x8f62,	// (0x00062158) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f62,	// (0x00062158) cntbar_detail_list_event_pane_t3

0x8f74,	// (0x0006216a) popup_notif_wgt_window_ParamLimits

0x8f74,	// (0x0006216a) popup_notif_wgt_window

0x8f89,	// (0x0006217f) popup_submenu_window_cp01_ParamLimits

0x8f89,	// (0x0006217f) popup_submenu_window_cp01

0xa211,	// (0x00063407) bg_popup_window_pane_cp10

0xd1e7,	// (0x000663dd) listscroll_notif_wgt_pane

0xd1f8,	// (0x000663ee) list_notif_wgt_window

0xd201,	// (0x000663f7) scroll_pane_cp033

0x8f99,	// (0x0006218f) list_notif_wgt_row_pane_ParamLimits

0x8f99,	// (0x0006218f) list_notif_wgt_row_pane

0xd20a,	// (0x00066400) aid_size_list_notif_wgt_del

0xd217,	// (0x0006640d) list_notif_wgt_row_pane_g1

0xd223,	// (0x00066419) list_notif_wgt_row_pane_g2

0xd232,	// (0x00066428) list_notif_wgt_row_pane_g3

0x0002,

0xfd59,	// (0x00068f4f) list_notif_wgt_row_pane_g

0xd23f,	// (0x00066435) list_notif_wgt_row_pane_t1

0xd255,	// (0x0006644b) list_notif_wgt_row_pane_t2

0xd267,	// (0x0006645d) list_notif_wgt_row_pane_t3

0x0002,

0xfd60,	// (0x00068f56) list_notif_wgt_row_pane_t

0xb95e,	// (0x00064b54) list_recal_day_event_pane_g1

0xd279,	// (0x0006646f) list_recal_day_event_pane_t1

0x97cd,	// (0x000629c3) bg_button_pane_cp045

0x8fa9,	// (0x0006219f) cntbar_detail_btn_pane_t1

0xe449,	// (0x0006763f) main_callh_pane_ParamLimits

0xe449,	// (0x0006763f) main_callh_pane

0x97cd,	// (0x000629c3) main_coverflow0_pane

0x97cd,	// (0x000629c3) main_wgtman_pane

0x7f6a,	// (0x00061160) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7f6a,	// (0x00061160) main_fs_bigclock_unlock_btn_pane

0xc9de,	// (0x00065bd4) bg_button_pane_cp16

0xc9ee,	// (0x00065be4) cell_tport_appsw_pane_g3

0x8fb7,	// (0x000621ad) cf0_flow_pane_ParamLimits

0x8fb7,	// (0x000621ad) cf0_flow_pane

0xd288,	// (0x0006647e) listscroll_cf0_pane

0xd291,	// (0x00066487) main_cf0_pane_g1

0x8fcc,	// (0x000621c2) main_cf0_pane_t1_ParamLimits

0x8fcc,	// (0x000621c2) main_cf0_pane_t1

0x8fe1,	// (0x000621d7) main_cf0_pane_t2_ParamLimits

0x8fe1,	// (0x000621d7) main_cf0_pane_t2

0x0001,

0xfd6c,	// (0x00068f62) main_cf0_pane_t_ParamLimits

0xfd6c,	// (0x00068f62) main_cf0_pane_t

0xd2a3,	// (0x00066499) scroll_pane_cp11

0x8ff6,	// (0x000621ec) cf0_flow_pane_g1

0x8ffe,	// (0x000621f4) cf0_flow_pane_g2

0x0001,

0xfd71,	// (0x00068f67) cf0_flow_pane_g

0x9006,	// (0x000621fc) cf0_flow_pane_t1

0x97cd,	// (0x000629c3) main_call6_pane

0x97cd,	// (0x000629c3) main_calllock_pane

0x9014,	// (0x0006220a) call6_btn_grp_pane_ParamLimits

0x9014,	// (0x0006220a) call6_btn_grp_pane

0x902a,	// (0x00062220) call6_pane_g1_ParamLimits

0x902a,	// (0x00062220) call6_pane_g1

0x903d,	// (0x00062233) popup_call6_1st_window_ParamLimits

0x903d,	// (0x00062233) popup_call6_1st_window

0x904c,	// (0x00062242) popup_call6_2nd_window_ParamLimits

0x904c,	// (0x00062242) popup_call6_2nd_window

0x905b,	// (0x00062251) cell_call6_btn_pane_ParamLimits

0x905b,	// (0x00062251) cell_call6_btn_pane

0xa211,	// (0x00063407) bg_popup_call2_in_pane_cp03

0xd2ac,	// (0x000664a2) popup_call6_1st_window_g1

0xd2b4,	// (0x000664aa) popup_call6_1st_window_g2

0xd2bc,	// (0x000664b2) popup_call6_1st_window_g3

0x0002,

0xfd76,	// (0x00068f6c) popup_call6_1st_window_g

0xd2c4,	// (0x000664ba) popup_call6_1st_window_t1

0xd2d3,	// (0x000664c9) popup_call6_1st_window_t2

0xd2e1,	// (0x000664d7) popup_call6_1st_window_t3

0x0002,

0xfd7d,	// (0x00068f73) popup_call6_1st_window_t

0xa211,	// (0x00063407) bg_popup_call2_in_pane_cp04

0xd2ac,	// (0x000664a2) popup_call6_2nd_window_g1

0xd2b4,	// (0x000664aa) popup_call6_2nd_window_g2

0xd2bc,	// (0x000664b2) popup_call6_2nd_window_g3

0x0002,

0xfd76,	// (0x00068f6c) popup_call6_2nd_window_g

0xd2c4,	// (0x000664ba) popup_call6_2nd_window_t1

0x97cd,	// (0x000629c3) bg_button_pane_cp15

0xd2ef,	// (0x000664e5) cell_call6_btn_pane_g1

0xd2f8,	// (0x000664ee) cell_call6_btn_pane_t1

0x906f,	// (0x00062265) listscroll_wgtman_pane_ParamLimits

0x906f,	// (0x00062265) listscroll_wgtman_pane

0x9090,	// (0x00062286) wgtman_btn_pane_ParamLimits

0x9090,	// (0x00062286) wgtman_btn_pane

0xaab0,	// (0x00063ca6) aid_scroll_copy1

0xd307,	// (0x000664fd) list_wgtman_pane

0x90d0,	// (0x000622c6) wgtman_btn_pane_g1_ParamLimits

0x90d0,	// (0x000622c6) wgtman_btn_pane_g1

0x90fc,	// (0x000622f2) wgtman_btn_pane_t1_ParamLimits

0x90fc,	// (0x000622f2) wgtman_btn_pane_t1

0xd311,	// (0x00066507) wgtman_btn_pane_t2_ParamLimits

0xd311,	// (0x00066507) wgtman_btn_pane_t2

0x0001,

0xfd84,	// (0x00068f7a) wgtman_btn_pane_t_ParamLimits

0xfd84,	// (0x00068f7a) wgtman_btn_pane_t

0x9139,	// (0x0006232f) listrow_wgtman_pane_ParamLimits

0x9139,	// (0x0006232f) listrow_wgtman_pane

0x914a,	// (0x00062340) listrow_wgtman_pane_g1

0x9157,	// (0x0006234d) listrow_wgtman_pane_g2

0x0001,

0xfd89,	// (0x00068f7f) listrow_wgtman_pane_g

0x916f,	// (0x00062365) listrow_wgtman_pane_t1

0x9187,	// (0x0006237d) listrow_wgtman_pane_t2

0x0001,

0xfd8e,	// (0x00068f84) listrow_wgtman_pane_t

0x91ad,	// (0x000623a3) wait_bar_pane_cp09

0xd328,	// (0x0006651e) main_calllock_btn_pane

0xd330,	// (0x00066526) main_calllock_pane_g1

0x97cd,	// (0x000629c3) bg_button_pane_cp17

0xd339,	// (0x0006652f) main_calllock_btn_pane_g1

0xd342,	// (0x00066538) main_calllock_btn_pane_t1

0x97cd,	// (0x000629c3) main_dialer3_pane

0x97cd,	// (0x000629c3) main_fmrd2_pane

0xe849,	// (0x00067a3f) main_fs_bigclock_unlock_btn_pane_g1

0xd359,	// (0x0006654f) main_fs_bigclock_unlock_btn_pane_t1

0x91bf,	// (0x000623b5) area_fmrd2_info_pane_ParamLimits

0x91bf,	// (0x000623b5) area_fmrd2_info_pane

0x91ce,	// (0x000623c4) area_fmrd2_visual_pane_ParamLimits

0x91ce,	// (0x000623c4) area_fmrd2_visual_pane

0x91dc,	// (0x000623d2) fmrd2_indi_pane_ParamLimits

0x91dc,	// (0x000623d2) fmrd2_indi_pane

0x91e9,	// (0x000623df) area_fmrd2_visual_pane_g1

0x91f1,	// (0x000623e7) area_fmrd2_visual_pane_t1

0x91ff,	// (0x000623f5) area_fmrd2_visual_pane_t2

0x920d,	// (0x00062403) area_fmrd2_visual_pane_t3

0x0002,

0xfd98,	// (0x00068f8e) area_fmrd2_visual_pane_t

0x921b,	// (0x00062411) area_fmrd2_info_pane_g1

0x9223,	// (0x00062419) area_fmrd2_info_pane_t1

0x9231,	// (0x00062427) area_fmrd2_info_pane_t2

0x923f,	// (0x00062435) area_fmrd2_info_pane_t3

0x924d,	// (0x00062443) area_fmrd2_info_pane_t4

0x0003,

0xfd9f,	// (0x00068f95) area_fmrd2_info_pane_t

0x925b,	// (0x00062451) fmrd2_indi_pane_t1

0x9269,	// (0x0006245f) fmrd2_indi_pane_t2

0x9277,	// (0x0006246d) fmrd2_indi_pane_t3

0x0002,

0xfda8,	// (0x00068f9e) fmrd2_indi_pane_t

0xc53d,	// (0x00065733) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc53d,	// (0x00065733) list_single_fs_bigclock_indicator_pane_g5

0xc5eb,	// (0x000657e1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc5eb,	// (0x000657e1) list_single_fs_bigclock_indicator_pane_t5

0x8a33,	// (0x00061c29) aid_cell_bcale_month_pane_ParamLimits

0x8a33,	// (0x00061c29) aid_cell_bcale_month_pane

0x8a51,	// (0x00061c47) bcale_month_pane_ParamLimits

0x8a51,	// (0x00061c47) bcale_month_pane

0x8a69,	// (0x00061c5f) bcale_preview_pane_ParamLimits

0x8a69,	// (0x00061c5f) bcale_preview_pane

0xd109,	// (0x000662ff) list_single_fs_bigclock_pane_t1_ParamLimits

0xd128,	// (0x0006631e) list_single_fs_bigclock_pane_t2_ParamLimits

0xd128,	// (0x0006631e) list_single_fs_bigclock_pane_t2

0x0001,

0xfd2a,	// (0x00068f20) list_single_fs_bigclock_pane_t_ParamLimits

0xfd2a,	// (0x00068f20) list_single_fs_bigclock_pane_t

0xd351,	// (0x00066547) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd93,	// (0x00068f89) main_fs_bigclock_unlock_btn_pane_g

0x9285,	// (0x0006247b) aid_dia3_key_size_ParamLimits

0x9285,	// (0x0006247b) aid_dia3_key_size

0x9294,	// (0x0006248a) aid_dia3_listrow_size_ParamLimits

0x9294,	// (0x0006248a) aid_dia3_listrow_size

0x92a7,	// (0x0006249d) dia3_keypad_fun_pane_ParamLimits

0x92a7,	// (0x0006249d) dia3_keypad_fun_pane

0x92bb,	// (0x000624b1) dia3_keypad_num_pane_ParamLimits

0x92bb,	// (0x000624b1) dia3_keypad_num_pane

0x92cc,	// (0x000624c2) dia3_listscroll_pane_ParamLimits

0x92cc,	// (0x000624c2) dia3_listscroll_pane

0x92dd,	// (0x000624d3) dia3_numentry_pane_ParamLimits

0x92dd,	// (0x000624d3) dia3_numentry_pane

0xd367,	// (0x0006655d) dia3_list_pane

0xd370,	// (0x00066566) scroll_pane_cp12

0x97cd,	// (0x000629c3) bg_dia3_numentry_pane

0x92ef,	// (0x000624e5) dia3_numentry_pane_t1

0x92fe,	// (0x000624f4) cell_dia3_key_num_pane

0x9306,	// (0x000624fc) cell_dia3_key0_fun_pane_ParamLimits

0x9306,	// (0x000624fc) cell_dia3_key0_fun_pane

0x931a,	// (0x00062510) cell_dia3_key1_fun_pane_ParamLimits

0x931a,	// (0x00062510) cell_dia3_key1_fun_pane

0x9331,	// (0x00062527) dia3_listrow_pane

0xc28b,	// (0x00065481) bg_dia3_numentry_pane_g1

0x97cd,	// (0x000629c3) bg_button_pane_cp21

0xd379,	// (0x0006656f) cell_dia3_key_num_pane_t1

0xd387,	// (0x0006657d) cell_dia3_key_num_pane_t2

0xd396,	// (0x0006658c) cell_dia3_key_num_pane_t3

0xd3a5,	// (0x0006659b) cell_dia3_key_num_pane_t4

0x0003,

0xfdaf,	// (0x00068fa5) cell_dia3_key_num_pane_t

0x97cd,	// (0x000629c3) bg_button_pane_cp19

0xd3b4,	// (0x000665aa) cell_dia3_key0_fun_pane_g1

0x97cd,	// (0x000629c3) bg_button_pane_cp20

0x9343,	// (0x00062539) cell_dia3_key1_fun_pane_g1

0x934b,	// (0x00062541) area_left_week_number_pane

0x9357,	// (0x0006254d) area_top_day_name_pane

0x9368,	// (0x0006255e) frame_month_view_pane

0xd3bc,	// (0x000665b2) grid_month_view_pane

0x9379,	// (0x0006256f) cell_top_day_name_pane_ParamLimits

0x9379,	// (0x0006256f) cell_top_day_name_pane

0x939c,	// (0x00062592) cell_area_left_week_number_pane_ParamLimits

0x939c,	// (0x00062592) cell_area_left_week_number_pane

0x93b0,	// (0x000625a6) cell_month_view_pane_ParamLimits

0x93b0,	// (0x000625a6) cell_month_view_pane

0xd3ca,	// (0x000665c0) frm_month_g1

0x93d5,	// (0x000625cb) frm_month_g2

0x93e6,	// (0x000625dc) frm_month_g3

0x93f7,	// (0x000625ed) frm_month_g4

0x9408,	// (0x000625fe) frm_month_g5

0x9419,	// (0x0006260f) frm_month_g6

0x942a,	// (0x00062620) frm_month_g7

0xd3d7,	// (0x000665cd) frm_month_g8

0x943b,	// (0x00062631) frm_month_g9

0x944b,	// (0x00062641) frm_month_g10

0x945b,	// (0x00062651) frm_month_g11

0x946b,	// (0x00062661) frm_month_g12

0x947b,	// (0x00062671) frm_month_g13

0x948b,	// (0x00062681) frm_month_g14

0x949b,	// (0x00062691) frm_month_g15

0x94ad,	// (0x000626a3) frm_month_g16

0x000f,

0xfdb8,	// (0x00068fae) frm_month_g

0xd3e4,	// (0x000665da) cell_top_day_name_pane_t1

0x94bf,	// (0x000626b5) cell_area_left_week_number_pane_g1

0x94cb,	// (0x000626c1) cell_area_left_week_number_pane_t1

0xea78,	// (0x00067c6e) cell_month_view_pane_g1

0x94de,	// (0x000626d4) cell_month_view_pane_t1

0x97cd,	// (0x000629c3) main_fps_pane

0xc7d7,	// (0x000659cd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc7d7,	// (0x000659cd) cmail_ddmenu_btn02_pane_cp1

0xc7f3,	// (0x000659e9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc7f3,	// (0x000659e9) cmail_ddmenu_btn02_pane_cp2

0x8c85,	// (0x00061e7b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c85,	// (0x00061e7b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcdd,	// (0x00068ed3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcdd,	// (0x00068ed3) cmail_ddmenu_btn02_pane_g

0x8ca4,	// (0x00061e9a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ca4,	// (0x00061e9a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfce2,	// (0x00068ed8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfce2,	// (0x00068ed8) cmail_ddmenu_btn02_pane_t

0x94f1,	// (0x000626e7) fps_text_pane_ParamLimits

0x94f1,	// (0x000626e7) fps_text_pane

0x9507,	// (0x000626fd) main_fps_pane_g1_ParamLimits

0x9507,	// (0x000626fd) main_fps_pane_g1

0x951d,	// (0x00062713) wait_bar_pane_cp010_ParamLimits

0x951d,	// (0x00062713) wait_bar_pane_cp010

0xd3f7,	// (0x000665ed) fps_text_pane_t1_ParamLimits

0xd3f7,	// (0x000665ed) fps_text_pane_t1

0x60f6,	// (0x0005f2ec) cam4_image_uncrop_pane_g1

0x60ff,	// (0x0005f2f5) cam4_image_uncrop_pane_g2

0x6108,	// (0x0005f2fe) cam4_image_uncrop_pane_g3

0x6111,	// (0x0005f307) cam4_image_uncrop_pane_g4

0x0003,

0xf79e,	// (0x00068994) cam4_image_uncrop_pane_g

0x9331,	// (0x00062527) dia3_listrow_pane_ParamLimits

0x97cd,	// (0x000629c3) main_phob2_pane

0x88b3,	// (0x00061aa9) cell_tport_appsw_pane_cp02_ParamLimits

0x88b3,	// (0x00061aa9) cell_tport_appsw_pane_cp02

0x88c3,	// (0x00061ab9) cell_tport_appsw_pane_cp03_ParamLimits

0x88c3,	// (0x00061ab9) cell_tport_appsw_pane_cp03

0x97cd,	// (0x000629c3) phob2_contact_card_pane

0x97cd,	// (0x000629c3) phob2_listscroll_pane

0xd40f,	// (0x00066605) phob2_list_pane

0xd417,	// (0x0006660d) scroll_pane_cp034

0x952e,	// (0x00062724) phob2_cc_data_pane_ParamLimits

0x952e,	// (0x00062724) phob2_cc_data_pane

0x954b,	// (0x00062741) phob2_cc_listscroll_pane_ParamLimits

0x954b,	// (0x00062741) phob2_cc_listscroll_pane

0x9139,	// (0x0006232f) list_double_large_graphic_phob2_pane_ParamLimits

0x9139,	// (0x0006232f) list_double_large_graphic_phob2_pane

0x9567,	// (0x0006275d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9567,	// (0x0006275d) list_double_large_graphic_phob2_pane_g1

0x957d,	// (0x00062773) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x957d,	// (0x00062773) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfdd9,	// (0x00068fcf) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd9,	// (0x00068fcf) list_double_large_graphic_phob2_pane_g

0x9589,	// (0x0006277f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9589,	// (0x0006277f) list_double_large_graphic_phob2_pane_t1

0x959f,	// (0x00062795) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x959f,	// (0x00062795) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdde,	// (0x00068fd4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdde,	// (0x00068fd4) list_double_large_graphic_phob2_pane_t

0x97cd,	// (0x000629c3) list_highlight_pane_cp024

0x95b4,	// (0x000627aa) phob2_cc_button_pane

0x95bc,	// (0x000627b2) phob2_cc_data_pane_g1_ParamLimits

0x95bc,	// (0x000627b2) phob2_cc_data_pane_g1

0x95d1,	// (0x000627c7) phob2_cc_data_pane_g2_ParamLimits

0x95d1,	// (0x000627c7) phob2_cc_data_pane_g2

0x0001,

0xfde3,	// (0x00068fd9) phob2_cc_data_pane_g_ParamLimits

0xfde3,	// (0x00068fd9) phob2_cc_data_pane_g

0x95e1,	// (0x000627d7) phob2_cc_data_pane_t1_ParamLimits

0x95e1,	// (0x000627d7) phob2_cc_data_pane_t1

0x95f9,	// (0x000627ef) phob2_cc_data_pane_t2_ParamLimits

0x95f9,	// (0x000627ef) phob2_cc_data_pane_t2

0x9611,	// (0x00062807) phob2_cc_data_pane_t3_ParamLimits

0x9611,	// (0x00062807) phob2_cc_data_pane_t3

0x0002,

0xfde8,	// (0x00068fde) phob2_cc_data_pane_t_ParamLimits

0xfde8,	// (0x00068fde) phob2_cc_data_pane_t

0xd41f,	// (0x00066615) phob2_cc_list_pane_ParamLimits

0xd41f,	// (0x00066615) phob2_cc_list_pane

0xb9f5,	// (0x00064beb) scroll_pane_cp035_ParamLimits

0xb9f5,	// (0x00064beb) scroll_pane_cp035

0xb6a2,	// (0x00064898) bg_button_pane_cp033

0xd42b,	// (0x00066621) phob2_cc_button_pane_g1

0xd437,	// (0x0006662d) phob2_cc_button_pane_t1

0xd44c,	// (0x00066642) phob2_cc_button_pane_t2

0x0001,

0xfdef,	// (0x00068fe5) phob2_cc_button_pane_t

0x9629,	// (0x0006281f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9629,	// (0x0006281f) list_double_large_graphic_phob2_cc_pane

0x963a,	// (0x00062830) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x963a,	// (0x00062830) list_double_large_graphic_phob2_cc_pane_g1

0x9646,	// (0x0006283c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9646,	// (0x0006283c) list_double_large_graphic_phob2_cc_pane_g2

0x9652,	// (0x00062848) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9652,	// (0x00062848) list_double_large_graphic_phob2_cc_pane_g3

0x965e,	// (0x00062854) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x965e,	// (0x00062854) list_double_large_graphic_phob2_cc_pane_g4

0x966a,	// (0x00062860) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x966a,	// (0x00062860) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf4,	// (0x00068fea) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf4,	// (0x00068fea) list_double_large_graphic_phob2_cc_pane_g

0x9676,	// (0x0006286c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9676,	// (0x0006286c) list_double_large_graphic_phob2_cc_pane_t1

0x969f,	// (0x00062895) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x969f,	// (0x00062895) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdff,	// (0x00068ff5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdff,	// (0x00068ff5) list_double_large_graphic_phob2_cc_pane_t

0xd45e,	// (0x00066654) list_highlight_pane_cp025_ParamLimits

0xd45e,	// (0x00066654) list_highlight_pane_cp025

0xb6a2,	// (0x00064898) bg_button_pane_cp033_ParamLimits

0xd42b,	// (0x00066621) phob2_cc_button_pane_g1_ParamLimits

0xd437,	// (0x0006662d) phob2_cc_button_pane_t1_ParamLimits

0xd44c,	// (0x00066642) phob2_cc_button_pane_t2_ParamLimits

0xfdef,	// (0x00068fe5) phob2_cc_button_pane_t_ParamLimits

0x0fe7,	// (0x0005a1dd) popup_wgtman_window

0xb7f8,	// (0x000649ee) scroll_pane_cp038

0x90b2,	// (0x000622a8) wgtman_btn_pane_cp_01_ParamLimits

0x90b2,	// (0x000622a8) wgtman_btn_pane_cp_01

0xd46c,	// (0x00066662) wgtman_content_pane

0xd475,	// (0x0006666b) wgtman_heading_pane

0x97cd,	// (0x000629c3) bg_heading_pane_cp02

0xd47e,	// (0x00066674) wgtman_heading_pane_g1

0xd486,	// (0x0006667c) wgtman_heading_pane_t1

0xd494,	// (0x0006668a) scroll_pane_cp036

0xd49c,	// (0x00066692) wgtman_list_pane

0xc6d6,	// (0x000658cc) wgtman_list_pane_t1_ParamLimits

0xc6d6,	// (0x000658cc) wgtman_list_pane_t1

0xd7c4,	// (0x000669ba) cam4_grid_pane

0x6e11,	// (0x00060007) bg_button_pane_cp015_ParamLimits

0x6e21,	// (0x00060017) bg_button_pane_cp016_ParamLimits

0x6e33,	// (0x00060029) bg_button_pane_cp017_ParamLimits

0x6e83,	// (0x00060079) popup_vitu2_query_window_g3_ParamLimits

0x6e83,	// (0x00060079) popup_vitu2_query_window_g3

0x6f36,	// (0x0006012c) popup_vitu2_query_window_t6_ParamLimits

0x6f36,	// (0x0006012c) popup_vitu2_query_window_t6

0x6f61,	// (0x00060157) popup_vitu2_query_window_t7_ParamLimits

0x6f61,	// (0x00060157) popup_vitu2_query_window_t7

0x60f6,	// (0x0005f2ec) cam4_grid_pane_g1

0x60ff,	// (0x0005f2f5) cam4_grid_pane_g2

0xd4a4,	// (0x0006669a) cam4_grid_pane_g3

0xd4ad,	// (0x000666a3) cam4_grid_pane_g4

0x0003,

0xfe04,	// (0x00068ffa) cam4_grid_pane_g

0x1ee3,	// (0x0005b0d9) aid_placing_vt_slider_lsc_ParamLimits

0x2150,	// (0x0005b346) vidtel_button_pane_ParamLimits

0x2150,	// (0x0005b346) vidtel_button_pane

0x97cd,	// (0x000629c3) bg_button_pane_cp034

0x96c8,	// (0x000628be) vidtel_button_pane_g1

0x96d0,	// (0x000628c6) vidtel_button_pane_t1

0xb93c,	// (0x00064b32) aid_size_vtel_slider_touch

0xb9f5,	// (0x00064beb) scroll_pane_cp039

0x7c9a,	// (0x00060e90) ncim_query_button_pane_cp01_ParamLimits

0x7cb9,	// (0x00060eaf) ncimui_query_pane_g1_ParamLimits

0xb6a2,	// (0x00064898) input_focus_pane_cp012_ParamLimits

0xc2d1,	// (0x000654c7) ncim_query_entry_pane_t1_ParamLimits

0xb9f5,	// (0x00064beb) scroll_pane_cp039_ParamLimits

0xab85,	// (0x00063d7b) navi_pane_bcale_mc_g1

0xab8d,	// (0x00063d83) navi_pane_bcale_mc_t1

0xc83c,	// (0x00065a32) main_sp_fs_email_pane_g1

0xc848,	// (0x00065a3e) main_sp_fs_email_pane_g2

0x0001,

0xfb95,	// (0x00068d8b) main_sp_fs_email_pane_g

0xcd31,	// (0x00065f27) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcd31,	// (0x00065f27) list_single_cale_mrui_row_pane_g3

0x8cc4,	// (0x00061eba) list_single_recal_day_pane_g5_event_pane

0xcf73,	// (0x00066169) list_single_recal_day_pane_g7

0xd4b6,	// (0x000666ac) list_recal_day_event_pane_cp01

0xd4bf,	// (0x000666b5) list_recal_vselct_arw_lo_pane_cp01

0xd4c7,	// (0x000666bd) list_recal_vselct_arw_up_pane_cp01

0xd4cf,	// (0x000666c5) list_recal_vselct_pane_cp01

0xb95e,	// (0x00064b54) list_recal_day_event_pane_cp01_g1

0xd4d9,	// (0x000666cf) list_recal_day_event_pane_cp01_t1

0xcf7b,	// (0x00066171) list_single_recal_day_pane_t1_ParamLimits

0xcf8d,	// (0x00066183) list_single_recal_day_pane_t2_ParamLimits

0xfcf2,	// (0x00068ee8) list_single_recal_day_pane_t_ParamLimits

0x9ef7,	// (0x000630ed) bg_notes_pane_ParamLimits

0x9fae,	// (0x000631a4) list_notes_pane_ParamLimits

0x12aa,	// (0x0005a4a0) scroll_pane_cp06_ParamLimits

0x9fea,	// (0x000631e0) main_notes_pane_ParamLimits

0x97cd,	// (0x000629c3) main_welc_pane

0x96e6,	// (0x000628dc) main_welc_body_pane_ParamLimits

0x96e6,	// (0x000628dc) main_welc_body_pane

0x9702,	// (0x000628f8) main_welc_opti_pane_ParamLimits

0x9702,	// (0x000628f8) main_welc_opti_pane

0x973f,	// (0x00062935) main_welc_pane_t1_ParamLimits

0x973f,	// (0x00062935) main_welc_pane_t1

0xd4e7,	// (0x000666dd) main_welc_body_row_pane_ParamLimits

0xd4e7,	// (0x000666dd) main_welc_body_row_pane

0xd4fa,	// (0x000666f0) main_welc_opti_row_pane_ParamLimits

0xd4fa,	// (0x000666f0) main_welc_opti_row_pane

0xd508,	// (0x000666fe) main_welc_opti_row_pane_g1

0x9759,	// (0x0006294f) main_welc_opti_row_pane_t1

0xd510,	// (0x00066706) main_welc_body_row_pane_t1

0xd1f0,	// (0x000663e6) popup_notif_wgt_heading_pane

0xd20a,	// (0x00066400) aid_size_list_notif_wgt_del_ParamLimits

0xd217,	// (0x0006640d) list_notif_wgt_row_pane_g1_ParamLimits

0xd223,	// (0x00066419) list_notif_wgt_row_pane_g2_ParamLimits

0xd232,	// (0x00066428) list_notif_wgt_row_pane_g3_ParamLimits

0xfd59,	// (0x00068f4f) list_notif_wgt_row_pane_g_ParamLimits

0xd23f,	// (0x00066435) list_notif_wgt_row_pane_t1_ParamLimits

0xd255,	// (0x0006644b) list_notif_wgt_row_pane_t2_ParamLimits

0xd267,	// (0x0006645d) list_notif_wgt_row_pane_t3_ParamLimits

0xfd60,	// (0x00068f56) list_notif_wgt_row_pane_t_ParamLimits

0x914a,	// (0x00062340) listrow_wgtman_pane_g1_ParamLimits

0x9157,	// (0x0006234d) listrow_wgtman_pane_g2_ParamLimits

0xfd89,	// (0x00068f7f) listrow_wgtman_pane_g_ParamLimits

0x916f,	// (0x00062365) listrow_wgtman_pane_t1_ParamLimits

0x9187,	// (0x0006237d) listrow_wgtman_pane_t2_ParamLimits

0xfd8e,	// (0x00068f84) listrow_wgtman_pane_t_ParamLimits

0x91ad,	// (0x000623a3) wait_bar_pane_cp09_ParamLimits

0x97cd,	// (0x000629c3) bg_popup_heading_pane_cp02

0xd51f,	// (0x00066715) popup_notif_wgt_heading_pane_g1

0xd527,	// (0x0006671d) popup_notif_wgt_heading_pane_t1

0x97cd,	// (0x000629c3) main_vids_pane

0x97cd,	// (0x000629c3) vids_listscroll_pane

0x9768,	// (0x0006295e) scroll_pane_cp040

0x97cd,	// (0x000629c3) vids_list_pane

0x9773,	// (0x00062969) vids_list_double_pane_ParamLimits

0x9773,	// (0x00062969) vids_list_double_pane

0x9783,	// (0x00062979) vids_list_double_pane_g1

0x978c,	// (0x00062982) vids_list_double_pane_t1

0x979b,	// (0x00062991) vids_list_double_pane_t2

0x0001,

0xfe12,	// (0x00069008) vids_list_double_pane_t

0x983f,	// (0x00062a35) main_ncimui_pane_ParamLimits

0x7ad2,	// (0x00060cc8) main_ncimui_pane_g1_ParamLimits

0x7ade,	// (0x00060cd4) main_ncimui_pane_g2_ParamLimits

0x7ade,	// (0x00060cd4) main_ncimui_pane_g2

0x0001,

0xfa9a,	// (0x00068c90) main_ncimui_pane_g_ParamLimits

0xfa9a,	// (0x00068c90) main_ncimui_pane_g

0x9719,	// (0x0006290f) main_welc_pane_g1_ParamLimits

0x9719,	// (0x0006290f) main_welc_pane_g1

0x972c,	// (0x00062922) main_welc_pane_g2_ParamLimits

0x972c,	// (0x00062922) main_welc_pane_g2

0x0001,

0xfe0d,	// (0x00069003) main_welc_pane_g_ParamLimits

0xfe0d,	// (0x00069003) main_welc_pane_g

0x9ef7,	// (0x000630ed) listscroll_mce_pane_ParamLimits

0xacd8,	// (0x00063ece) wait_bar_pane_cp10

0xe43d,	// (0x00067633) main_cale_day_pane_ParamLimits

0xe43d,	// (0x00067633) main_cale_week_pane_ParamLimits

0x9ef7,	// (0x000630ed) main_messa_pane_ParamLimits

0x53b1,	// (0x0005e5a7) main_clock2_btn_pane_ParamLimits

0x53b1,	// (0x0005e5a7) main_clock2_btn_pane

0xec00,	// (0x00067df6) main_clock2_btn_pane_cp01_ParamLimits

0xec00,	// (0x00067df6) main_clock2_btn_pane_cp01

0xccbd,	// (0x00065eb3) list_cale_mrui_pane_ParamLimits

0xd29b,	// (0x00066491) main_cf0_pane_g2

0x0001,

0xfd67,	// (0x00068f5d) main_cf0_pane_g

0x934b,	// (0x00062541) area_left_week_number_pane_ParamLimits

0x9357,	// (0x0006254d) area_top_day_name_pane_ParamLimits

0x9368,	// (0x0006255e) frame_month_view_pane_ParamLimits

0xd3bc,	// (0x000665b2) grid_month_view_pane_ParamLimits

0xd3ca,	// (0x000665c0) frm_month_g1_ParamLimits

0x93d5,	// (0x000625cb) frm_month_g2_ParamLimits

0x93e6,	// (0x000625dc) frm_month_g3_ParamLimits

0x93f7,	// (0x000625ed) frm_month_g4_ParamLimits

0x9408,	// (0x000625fe) frm_month_g5_ParamLimits

0x9419,	// (0x0006260f) frm_month_g6_ParamLimits

0x942a,	// (0x00062620) frm_month_g7_ParamLimits

0xd3d7,	// (0x000665cd) frm_month_g8_ParamLimits

0x943b,	// (0x00062631) frm_month_g9_ParamLimits

0x944b,	// (0x00062641) frm_month_g10_ParamLimits

0x945b,	// (0x00062651) frm_month_g11_ParamLimits

0x946b,	// (0x00062661) frm_month_g12_ParamLimits

0x947b,	// (0x00062671) frm_month_g13_ParamLimits

0x948b,	// (0x00062681) frm_month_g14_ParamLimits

0x949b,	// (0x00062691) frm_month_g15_ParamLimits

0x94ad,	// (0x000626a3) frm_month_g16_ParamLimits

0xfdb8,	// (0x00068fae) frm_month_g_ParamLimits

0xd3e4,	// (0x000665da) cell_top_day_name_pane_t1_ParamLimits

0x94bf,	// (0x000626b5) cell_area_left_week_number_pane_g1_ParamLimits

0x94cb,	// (0x000626c1) cell_area_left_week_number_pane_t1_ParamLimits

0xea78,	// (0x00067c6e) cell_month_view_pane_g1_ParamLimits

0x94de,	// (0x000626d4) cell_month_view_pane_t1_ParamLimits

0x9eef,	// (0x000630e5) main_clock2_btn_pane_g1

0xd535,	// (0x0006672b) main_clock2_btn_pane_t1

0xb6a2,	// (0x00064898) listscroll_cmail_pane_ParamLimits

0xc83c,	// (0x00065a32) main_sp_fs_email_pane_g1_ParamLimits

0xc848,	// (0x00065a3e) main_sp_fs_email_pane_g2_ParamLimits

0xfb95,	// (0x00068d8b) main_sp_fs_email_pane_g_ParamLimits

0xcee3,	// (0x000660d9) list_recal_day_pane_ParamLimits

0xcef4,	// (0x000660ea) mian_recal_day_pane_t1

0x855d,	// (0x00061753) list_single_dyc_row_text_pane_t4_ParamLimits

0x855d,	// (0x00061753) list_single_dyc_row_text_pane_t4

0x8594,	// (0x0006178a) list_single_dyc_row_text_pane_t5_ParamLimits

0x8594,	// (0x0006178a) list_single_dyc_row_text_pane_t5

0xc90c,	// (0x00065b02) list_single_dyc_row_text_pane_t6_ParamLimits

0xc90c,	// (0x00065b02) list_single_dyc_row_text_pane_t6

0xa659,	// (0x0006384f) aid_mgn_list_cale_time_pane

0x983f,	// (0x00062a35) main_gallery2_pane_ParamLimits

0xec14,	// (0x00067e0a) main_clock2_pane_cp01_t1

0xec22,	// (0x00067e18) main_clock2_pane_cp01_t3

0x0001,

0x0547,	// (0x0005973d) main_clock2_pane_cp01_t

0x162b,	// (0x0005a821) cale_week_scroll_pane_g16_ParamLimits

0x162b,	// (0x0005a821) cale_week_scroll_pane_g16

0xa211,	// (0x00063407) vorec_slider_pane

0x96d0,	// (0x000628c6) vidtel_button_pane_t1_ParamLimits

0x8d25,	// (0x00061f1b) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8d25,	// (0x00061f1b) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8d36,	// (0x00061f2c) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8d36,	// (0x00061f2c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd15,	// (0x00068f0b) main_fs_bigclock_clock_pane_g_ParamLimits

0x8d49,	// (0x00061f3f) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8d5f,	// (0x00061f55) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd1e,	// (0x00068f14) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small
