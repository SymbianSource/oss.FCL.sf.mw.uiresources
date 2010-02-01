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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00030d22 };

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
0x5f6a,	// (0x00036c8c) Screen

0x5f76,	// (0x00036c98) application_window

0x5fdc,	// (0x00036cfe) area_bottom_pane_ParamLimits

0x5fdc,	// (0x00036cfe) area_bottom_pane

0x6035,	// (0x00036d57) area_top_pane_ParamLimits

0x6035,	// (0x00036d57) area_top_pane

0xd7c2,	// (0x0003e4e4) call_video_uplink_pane_ParamLimits

0xd7c2,	// (0x0003e4e4) call_video_uplink_pane

0x60c2,	// (0x00036de4) main_pane_ParamLimits

0x60c2,	// (0x00036de4) main_pane

0x0d6b,	// (0x00031a8d) context_pane

0x8fee,	// (0x00039d10) navi_pane

0x900e,	// (0x00039d30) popup_cale_events_window_ParamLimits

0x900e,	// (0x00039d30) popup_cale_events_window

0x0d7e,	// (0x00031aa0) popup_mup_playback_window

0x9026,	// (0x00039d48) signal_pane

0xdf25,	// (0x0003ec47) main_browser_pane

0xea04,	// (0x0003f726) main_burst_pane

0x8eb8,	// (0x00039bda) main_calc_pane

0xea04,	// (0x0003f726) main_cale_day_pane

0xdf25,	// (0x0003ec47) main_cale_month_pane

0xea04,	// (0x0003f726) main_cale_week_pane

0xea04,	// (0x0003f726) main_call_pane

0xdbf3,	// (0x0003e915) main_call_poc_pane

0xea04,	// (0x0003f726) main_camera_pane

0xea04,	// (0x0003f726) main_chi_dic_pane

0xe889,	// (0x0003f5ab) main_clock_pane

0xdbf3,	// (0x0003e915) main_fmradio_pane

0xea04,	// (0x0003f726) main_graph_messa_pane

0xdbf3,	// (0x0003e915) main_help_pane

0xdf25,	// (0x0003ec47) main_im_pane

0xde4e,	// (0x0003eb70) main_image_pane_ParamLimits

0xde4e,	// (0x0003eb70) main_image_pane

0xdbf3,	// (0x0003e915) main_location2_pane

0xea04,	// (0x0003f726) main_location_pane

0xdbf3,	// (0x0003e915) main_messa_pane

0xdbf3,	// (0x0003e915) main_mp2_pane

0xea04,	// (0x0003f726) main_mp_pane

0xdbf3,	// (0x0003e915) main_msg_pane

0xdbf3,	// (0x0003e915) main_mup_eq_pane

0xdbf3,	// (0x0003e915) main_mup_pane

0xea04,	// (0x0003f726) main_notes_pane

0xdbf3,	// (0x0003e915) main_pec_pane

0xdbf3,	// (0x0003e915) main_phob_pane

0xdbf3,	// (0x0003e915) main_pinb_pane

0xdbf3,	// (0x0003e915) main_postcard_pane

0xdbf3,	// (0x0003e915) main_qdial_pane

0xea04,	// (0x0003f726) main_skin_pane

0xdbf3,	// (0x0003e915) main_smil2_pane

0xea04,	// (0x0003f726) main_smil_pane

0xea04,	// (0x0003f726) main_video_pane

0xea04,	// (0x0003f726) main_video_tele_pane

0xde4e,	// (0x0003eb70) main_viewer_pane_ParamLimits

0xde4e,	// (0x0003eb70) main_viewer_pane

0xea04,	// (0x0003f726) main_vorec_pane

0x8eee,	// (0x00039c10) popup_blid_sat_info_window_ParamLimits

0x8eee,	// (0x00039c10) popup_blid_sat_info_window

0x8f04,	// (0x00039c26) popup_dyc_status_message_window_ParamLimits

0x8f04,	// (0x00039c26) popup_dyc_status_message_window

0x8f14,	// (0x00039c36) popup_grid_large_graphic_window_ParamLimits

0x8f14,	// (0x00039c36) popup_grid_large_graphic_window

0x8f8a,	// (0x00039cac) popup_loc_request_window_ParamLimits

0x8f8a,	// (0x00039cac) popup_loc_request_window

0x8fc6,	// (0x00039ce8) popup_wml_address_window_ParamLimits

0x8fc6,	// (0x00039ce8) popup_wml_address_window

0x8d90,	// (0x00039ab2) call_muted_g1

0x8a52,	// (0x00039774) popup_call_audio_conf_window_ParamLimits

0x8a52,	// (0x00039774) popup_call_audio_conf_window

0x8da0,	// (0x00039ac2) popup_call_audio_first_window_ParamLimits

0x8da0,	// (0x00039ac2) popup_call_audio_first_window

0x8de0,	// (0x00039b02) popup_call_audio_in_window_ParamLimits

0x8de0,	// (0x00039b02) popup_call_audio_in_window

0x8e04,	// (0x00039b26) popup_call_audio_out_window_ParamLimits

0x8e04,	// (0x00039b26) popup_call_audio_out_window

0x8e26,	// (0x00039b48) popup_call_audio_second_window_ParamLimits

0x8e26,	// (0x00039b48) popup_call_audio_second_window

0x8e56,	// (0x00039b78) popup_call_audio_wait_window_ParamLimits

0x8e56,	// (0x00039b78) popup_call_audio_wait_window

0x8e77,	// (0x00039b99) popup_number_entry_window_ParamLimits

0x8e77,	// (0x00039b99) popup_number_entry_window

0xd7e0,	// (0x0003e502) bg_popup_call_pane_cp05_ParamLimits

0xd7e0,	// (0x0003e502) bg_popup_call_pane_cp05

0xd800,	// (0x0003e522) popup_number_entry_window_t1

0xd813,	// (0x0003e535) popup_number_entry_window_t2

0xd825,	// (0x0003e547) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0003fe0e) popup_number_entry_window_t

0xd837,	// (0x0003e559) text_title_cp2

0xd84a,	// (0x0003e56c) bg_popup_call_pane_cp_ParamLimits

0xd84a,	// (0x0003e56c) bg_popup_call_pane_cp

0xd858,	// (0x0003e57a) call_thumbnail_pane

0xd860,	// (0x0003e582) popup_call_audio_in_window_g1_ParamLimits

0xd860,	// (0x0003e582) popup_call_audio_in_window_g1

0xd86c,	// (0x0003e58e) popup_call_audio_in_window_g2_ParamLimits

0xd86c,	// (0x0003e58e) popup_call_audio_in_window_g2

0xd878,	// (0x0003e59a) popup_call_audio_in_window_g3_ParamLimits

0xd878,	// (0x0003e59a) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0003fe17) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0003fe17) popup_call_audio_in_window_g

0xd884,	// (0x0003e5a6) popup_call_audio_in_window_t1_ParamLimits

0xd884,	// (0x0003e5a6) popup_call_audio_in_window_t1

0xd8a0,	// (0x0003e5c2) popup_call_audio_in_window_t2_ParamLimits

0xd8a0,	// (0x0003e5c2) popup_call_audio_in_window_t2

0xd8bc,	// (0x0003e5de) popup_call_audio_in_window_t3_ParamLimits

0xd8bc,	// (0x0003e5de) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0003fe1e) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0003fe1e) popup_call_audio_in_window_t

0xd84a,	// (0x0003e56c) bg_popup_call_pane_cp01_ParamLimits

0xd84a,	// (0x0003e56c) bg_popup_call_pane_cp01

0xd858,	// (0x0003e57a) call_thumbnail_pane_cp02

0xd8cf,	// (0x0003e5f1) call_type_pane_cp022

0xd8d7,	// (0x0003e5f9) popup_call_audio_out_window_g1_ParamLimits

0xd8d7,	// (0x0003e5f9) popup_call_audio_out_window_g1

0xd8e9,	// (0x0003e60b) popup_call_audio_out_window_g2_ParamLimits

0xd8e9,	// (0x0003e60b) popup_call_audio_out_window_g2

0xd8f5,	// (0x0003e617) popup_call_audio_out_window_g3_ParamLimits

0xd8f5,	// (0x0003e617) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0003fe25) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0003fe25) popup_call_audio_out_window_g

0xd907,	// (0x0003e629) popup_call_audio_out_window_t1_ParamLimits

0xd907,	// (0x0003e629) popup_call_audio_out_window_t1

0xd91f,	// (0x0003e641) popup_call_audio_out_window_t2_ParamLimits

0xd91f,	// (0x0003e641) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0003fe2c) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0003fe2c) popup_call_audio_out_window_t

0xd934,	// (0x0003e656) bg_popup_call_pane_ParamLimits

0xd934,	// (0x0003e656) bg_popup_call_pane

0x62b1,	// (0x00036fd3) call_thumbnail_pane_cp_ParamLimits

0x62b1,	// (0x00036fd3) call_thumbnail_pane_cp

0xd9b8,	// (0x0003e6da) call_type_pane_cp01_ParamLimits

0xd9b8,	// (0x0003e6da) call_type_pane_cp01

0xd9fc,	// (0x0003e71e) popup_call_audio_first_window_g1_ParamLimits

0xd9fc,	// (0x0003e71e) popup_call_audio_first_window_g1

0xda48,	// (0x0003e76a) popup_call_audio_first_window_g2_ParamLimits

0xda48,	// (0x0003e76a) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0003fe31) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0003fe31) popup_call_audio_first_window_g

0xda8c,	// (0x0003e7ae) popup_call_audio_first_window_t1_ParamLimits

0xda8c,	// (0x0003e7ae) popup_call_audio_first_window_t1

0xdb38,	// (0x0003e85a) popup_call_audio_first_window_t4_ParamLimits

0xdb38,	// (0x0003e85a) popup_call_audio_first_window_t4

0xdbc4,	// (0x0003e8e6) popup_call_audio_first_window_t5_ParamLimits

0xdbc4,	// (0x0003e8e6) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0003fe36) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0003fe36) popup_call_audio_first_window_t

0xdbf3,	// (0x0003e915) bg_popup_call_pane_cp02

0xdbfd,	// (0x0003e91f) call_type_pane_cp023

0xdc05,	// (0x0003e927) popup_call_audio_wait_window_g1

0xdc0d,	// (0x0003e92f) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0003fe3d) popup_call_audio_wait_window_g

0xdc15,	// (0x0003e937) popup_call_audio_wait_window_t3

0xdc23,	// (0x0003e945) bg_popup_call_pane_cp03_ParamLimits

0xdc23,	// (0x0003e945) bg_popup_call_pane_cp03

0xdc83,	// (0x0003e9a5) call_thumbnail_pane_cp011_ParamLimits

0xdc83,	// (0x0003e9a5) call_thumbnail_pane_cp011

0xdc8f,	// (0x0003e9b1) call_type_pane_cp034_ParamLimits

0xdc8f,	// (0x0003e9b1) call_type_pane_cp034

0xdccb,	// (0x0003e9ed) popup_call_audio_second_window_g1_ParamLimits

0xdccb,	// (0x0003e9ed) popup_call_audio_second_window_g1

0xdd07,	// (0x0003ea29) popup_call_audio_second_window_g2_ParamLimits

0xdd07,	// (0x0003ea29) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0003fe42) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0003fe42) popup_call_audio_second_window_g

0xdd43,	// (0x0003ea65) popup_call_audio_second_window_t1_ParamLimits

0xdd43,	// (0x0003ea65) popup_call_audio_second_window_t1

0xddc4,	// (0x0003eae6) popup_call_audio_second_window_t2_ParamLimits

0xddc4,	// (0x0003eae6) popup_call_audio_second_window_t2

0xddfa,	// (0x0003eb1c) popup_call_audio_second_window_t3_ParamLimits

0xddfa,	// (0x0003eb1c) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0003fe47) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0003fe47) popup_call_audio_second_window_t

0xdbf3,	// (0x0003e915) bg_popup_call_pane_cp04

0xde30,	// (0x0003eb52) list_conf_pane

0xde38,	// (0x0003eb5a) popup_call_audio_conf_window_t1

0xde46,	// (0x0003eb68) call_thumbnail_pane_g1

0xde4e,	// (0x0003eb70) bg_pinb_pane_ParamLimits

0xde4e,	// (0x0003eb70) bg_pinb_pane

0xde5c,	// (0x0003eb7e) find_pinb_pane

0xde65,	// (0x0003eb87) listscroll_pinb_pane_ParamLimits

0xde65,	// (0x0003eb87) listscroll_pinb_pane

0xde74,	// (0x0003eb96) pinb_bg_pane_g1

0x62d5,	// (0x00036ff7) pinb_bg_pane_g2

0x62e1,	// (0x00037003) pinb_bg_pane_g3

0x62ed,	// (0x0003700f) pinb_bg_pane_g4

0x62f9,	// (0x0003701b) pinb_bg_pane_g5

0x6305,	// (0x00037027) pinb_bg_pane_g6

0x6310,	// (0x00037032) pinb_bg_pane_g7

0x631b,	// (0x0003703d) pinb_bg_pane_g8

0x6326,	// (0x00037048) pinb_bg_pane_g9

0x6330,	// (0x00037052) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0003fe4e) pinb_bg_pane_g

0x634d,	// (0x0003706f) grid_pinb_pane

0x6358,	// (0x0003707a) list_pinb_pane

0x6363,	// (0x00037085) scroll_pane_cp01_ParamLimits

0x6363,	// (0x00037085) scroll_pane_cp01

0xde7e,	// (0x0003eba0) find_pinb_pane_g1_ParamLimits

0xde7e,	// (0x0003eba0) find_pinb_pane_g1

0xde96,	// (0x0003ebb8) find_pinb_pane_t1

0xdea8,	// (0x0003ebca) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0003fe68) find_pinb_pane_t

0xdebd,	// (0x0003ebdf) input_focus_pane_cp01_ParamLimits

0xdebd,	// (0x0003ebdf) input_focus_pane_cp01

0x6375,	// (0x00037097) cell_pinb_pane_ParamLimits

0x6375,	// (0x00037097) cell_pinb_pane

0x639a,	// (0x000370bc) cell_pinb_pane_g1_ParamLimits

0x639a,	// (0x000370bc) cell_pinb_pane_g1

0x63af,	// (0x000370d1) cell_pinb_pane_g2_ParamLimits

0x63af,	// (0x000370d1) cell_pinb_pane_g2

0xdec9,	// (0x0003ebeb) cell_pinb_pane_g3_ParamLimits

0xdec9,	// (0x0003ebeb) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0003fe6d) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0003fe6d) cell_pinb_pane_g

0xdbf3,	// (0x0003e915) grid_highlight_pane_cp01

0x63bb,	// (0x000370dd) list_pinb_item_pane_ParamLimits

0x63bb,	// (0x000370dd) list_pinb_item_pane

0xdbf3,	// (0x0003e915) list_highlight_pane_cp02

0x63db,	// (0x000370fd) list_pinb_item_pane_g1_ParamLimits

0x63db,	// (0x000370fd) list_pinb_item_pane_g1

0xded5,	// (0x0003ebf7) list_pinb_item_pane_g2_ParamLimits

0xded5,	// (0x0003ebf7) list_pinb_item_pane_g2

0x63e8,	// (0x0003710a) list_pinb_item_pane_g3_ParamLimits

0x63e8,	// (0x0003710a) list_pinb_item_pane_g3

0x63f9,	// (0x0003711b) list_pinb_item_pane_g4_ParamLimits

0x63f9,	// (0x0003711b) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0003fe74) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0003fe74) list_pinb_item_pane_g

0x6405,	// (0x00037127) list_pinb_item_pane_t1_ParamLimits

0x6405,	// (0x00037127) list_pinb_item_pane_t1

0x6436,	// (0x00037158) calc_display_pane

0x6454,	// (0x00037176) calc_paper_pane

0x6470,	// (0x00037192) grid_calc_pane

0xdbf3,	// (0x0003e915) bg_list_pane_cp01

0x649a,	// (0x000371bc) clock_g1

0x64a2,	// (0x000371c4) clock_g2

0x0001,

0xf15b,	// (0x0003fe7d) clock_g

0x64ac,	// (0x000371ce) clock_t1_ParamLimits

0x64ac,	// (0x000371ce) clock_t1

0x64c1,	// (0x000371e3) clock_t2_ParamLimits

0x64c1,	// (0x000371e3) clock_t2

0x64d3,	// (0x000371f5) clock_t3_ParamLimits

0x64d3,	// (0x000371f5) clock_t3

0x64e5,	// (0x00037207) clock_t4_ParamLimits

0x64e5,	// (0x00037207) clock_t4

0x64f7,	// (0x00037219) clock_t5_ParamLimits

0x64f7,	// (0x00037219) clock_t5

0x650c,	// (0x0003722e) clock_t6_ParamLimits

0x650c,	// (0x0003722e) clock_t6

0x651e,	// (0x00037240) clock_t7_ParamLimits

0x651e,	// (0x00037240) clock_t7

0x6530,	// (0x00037252) clock_t8_ParamLimits

0x6530,	// (0x00037252) clock_t8

0x6546,	// (0x00037268) clock_t9_ParamLimits

0x6546,	// (0x00037268) clock_t9

0x0008,

0xf160,	// (0x0003fe82) clock_t_ParamLimits

0xf160,	// (0x0003fe82) clock_t

0xdee1,	// (0x0003ec03) popup_clock_analogue_window_cp02

0xdee1,	// (0x0003ec03) popup_clock_digital_window_cp01

0xdee9,	// (0x0003ec0b) listscroll_help_pane

0xdbf3,	// (0x0003e915) phob_pre_status_pane

0xdef3,	// (0x0003ec15) grid_qdial_pane

0xdbf3,	// (0x0003e915) listscroll_mce_pane

0xdefd,	// (0x0003ec1f) bg_notes_pane

0xdf07,	// (0x0003ec29) list_notes_pane

0x655c,	// (0x0003727e) scroll_pane_cp06

0xdf11,	// (0x0003ec33) bg_calc_paper_pane

0x6567,	// (0x00037289) list_calc_pane

0xdf25,	// (0x0003ec47) bg_calc_display_pane

0x6581,	// (0x000372a3) calc_display_pane_t1

0x6596,	// (0x000372b8) calc_display_pane_t2

0x65ab,	// (0x000372cd) calc_display_pane_t3

0x0002,

0xf173,	// (0x0003fe95) calc_display_pane_t

0x65bd,	// (0x000372df) cell_calc_pane_ParamLimits

0x65bd,	// (0x000372df) cell_calc_pane

0xdf31,	// (0x0003ec53) bg_calc_paper_pane_g1

0xdf3d,	// (0x0003ec5f) bg_calc_paper_pane_g2

0xdf49,	// (0x0003ec6b) bg_calc_paper_pane_g3

0xdf55,	// (0x0003ec77) bg_calc_paper_pane_g4

0xdf61,	// (0x0003ec83) bg_calc_paper_pane_g5

0x65ea,	// (0x0003730c) bg_calc_paper_pane_g6

0x65fb,	// (0x0003731d) bg_calc_paper_pane_g7

0x660c,	// (0x0003732e) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0003fe9c) bg_calc_paper_pane_g

0x661d,	// (0x0003733f) calc_bg_paper_pane_g9

0x662e,	// (0x00037350) list_calc_item_pane_ParamLimits

0x662e,	// (0x00037350) list_calc_item_pane

0xdf6d,	// (0x0003ec8f) list_calc_item_pane_g1

0x665d,	// (0x0003737f) list_calc_item_pane_t1_ParamLimits

0x665d,	// (0x0003737f) list_calc_item_pane_t1

0x666f,	// (0x00037391) list_calc_item_pane_t2_ParamLimits

0x666f,	// (0x00037391) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0003fead) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0003fead) list_calc_item_pane_t

0xdf7a,	// (0x0003ec9c) cell_calc_pane_g1

0xdf84,	// (0x0003eca6) grid_highlight_pane_cp02

0x124d,	// (0x00031f6f) bg_calc_display_pane_g1

0x669f,	// (0x000373c1) bg_calc_display_pane_g2

0x66a9,	// (0x000373cb) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0003feb7) bg_calc_display_pane_g

0x66b2,	// (0x000373d4) cell_qdial_pane_ParamLimits

0x66b2,	// (0x000373d4) cell_qdial_pane

0x66c6,	// (0x000373e8) cell_qdial_pane_g1_ParamLimits

0x66c6,	// (0x000373e8) cell_qdial_pane_g1

0x66d3,	// (0x000373f5) cell_qdial_pane_g2_ParamLimits

0x66d3,	// (0x000373f5) cell_qdial_pane_g2

0xdfa6,	// (0x0003ecc8) cell_qdial_pane_g3_ParamLimits

0xdfa6,	// (0x0003ecc8) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0003febe) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0003febe) cell_qdial_pane_g

0x66f1,	// (0x00037413) cell_qdial_pane_t1_ParamLimits

0x66f1,	// (0x00037413) cell_qdial_pane_t1

0x6709,	// (0x0003742b) cell_qdial_pane_t2_ParamLimits

0x6709,	// (0x0003742b) cell_qdial_pane_t2

0x671c,	// (0x0003743e) cell_qdial_pane_t3_ParamLimits

0x671c,	// (0x0003743e) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0003fec7) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0003fec7) cell_qdial_pane_t

0xdbf3,	// (0x0003e915) grid_highlight_pane_cp04

0xdfb2,	// (0x0003ecd4) thumbnail_qdial_pane_ParamLimits

0xdfb2,	// (0x0003ecd4) thumbnail_qdial_pane

0xe00e,	// (0x0003ed30) list_help_pane

0xe017,	// (0x0003ed39) scroll_pane_cp02

0x672f,	// (0x00037451) help_list_pane_t1_ParamLimits

0x672f,	// (0x00037451) help_list_pane_t1

0x6762,	// (0x00037484) bg_notes_pane_g2

0x676a,	// (0x0003748c) bg_notes_pane_g3

0x6772,	// (0x00037494) notes_bg_pane_g1

0x677a,	// (0x0003749c) notes_bg_pane_g4

0x6782,	// (0x000374a4) notes_bg_pane_g5

0x678a,	// (0x000374ac) notes_bg_pane_g6

0x6792,	// (0x000374b4) notes_bg_pane_g7

0x679a,	// (0x000374bc) notes_bg_pane_g8

0x67a2,	// (0x000374c4) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0003fee5) notes_bg_pane_g

0x67aa,	// (0x000374cc) list_notes_text_pane_ParamLimits

0x67aa,	// (0x000374cc) list_notes_text_pane

0xe020,	// (0x0003ed42) list_notes_text_pane_g1

0x4dd8,	// (0x00035afa) list_notes_text_pane_t1

0xdf25,	// (0x0003ec47) listscroll_cale_week_pane

0x67ec,	// (0x0003750e) bg_cale_heading_pane

0xe03a,	// (0x0003ed5c) bg_cale_pane_cp01

0x6808,	// (0x0003752a) cale_week_corner_pane

0x681e,	// (0x00037540) cale_week_day_heading_pane

0x683a,	// (0x0003755c) cale_week_scroll_pane_g1

0x6853,	// (0x00037575) cale_week_scroll_pane_g2

0x6864,	// (0x00037586) cale_week_scroll_pane_g3

0x6875,	// (0x00037597) cale_week_scroll_pane_g4

0x6886,	// (0x000375a8) cale_week_scroll_pane_g5

0x6897,	// (0x000375b9) cale_week_scroll_pane_g6

0x68a8,	// (0x000375ca) cale_week_scroll_pane_g7

0x68bb,	// (0x000375dd) cale_week_scroll_pane_g8

0x68ce,	// (0x000375f0) cale_week_scroll_pane_g9

0x68df,	// (0x00037601) cale_week_scroll_pane_g10

0x68f0,	// (0x00037612) cale_week_scroll_pane_g11

0x6901,	// (0x00037623) cale_week_scroll_pane_g12

0x6912,	// (0x00037634) cale_week_scroll_pane_g13

0x692b,	// (0x0003764d) cale_week_scroll_pane_g14

0x6944,	// (0x00037666) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0003fef4) cale_week_scroll_pane_g

0x695d,	// (0x0003767f) cale_week_time_pane

0x6970,	// (0x00037692) grid_cale_week_pane

0x698d,	// (0x000376af) scroll_pane_cp08

0x69a7,	// (0x000376c9) cell_cale_week_pane_ParamLimits

0x69a7,	// (0x000376c9) cell_cale_week_pane

0x69f3,	// (0x00037715) cale_week_day_heading_pane_t1

0x6a0c,	// (0x0003772e) cale_week_day_heading_pane_t2

0x6a25,	// (0x00037747) cale_week_day_heading_pane_t3

0x6a3e,	// (0x00037760) cale_week_day_heading_pane_t4

0x6a57,	// (0x00037779) cale_week_day_heading_pane_t5

0x6a70,	// (0x00037792) cale_week_day_heading_pane_t6

0x6a89,	// (0x000377ab) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0003ff13) cale_week_day_heading_pane_t

0xe065,	// (0x0003ed87) bg_cale_side_pane

0x6aa2,	// (0x000377c4) cale_week_time_pane_t1

0x6aba,	// (0x000377dc) cale_week_time_pane_t2

0x6ad2,	// (0x000377f4) cale_week_time_pane_t3

0x6aea,	// (0x0003780c) cale_week_time_pane_t4

0x6b02,	// (0x00037824) cale_week_time_pane_t5

0x6b1a,	// (0x0003783c) cale_week_time_pane_t6

0x6b32,	// (0x00037854) cale_week_time_pane_t7

0x6b52,	// (0x00037874) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0003ff22) cale_week_time_pane_t

0x6b72,	// (0x00037894) cell_cale_week_pane_g2

0x6b83,	// (0x000378a5) cell_cale_week_pane_g3_ParamLimits

0x6b83,	// (0x000378a5) cell_cale_week_pane_g3

0xe073,	// (0x0003ed95) grid_highlight_pane_cp07

0xe07b,	// (0x0003ed9d) listscroll_gms_pane

0xe085,	// (0x0003eda7) grid_gms_pane

0xe08e,	// (0x0003edb0) listscroll_gms_pane_g1

0xe096,	// (0x0003edb8) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0003ff33) listscroll_gms_pane_g

0x6b9b,	// (0x000378bd) scroll_pane_cp010

0x6ba6,	// (0x000378c8) cell_gms_pane_ParamLimits

0x6ba6,	// (0x000378c8) cell_gms_pane

0x6bb9,	// (0x000378db) cell_gms_pane_g1

0xe09e,	// (0x0003edc0) cell_gms_pane_g2

0xe0a6,	// (0x0003edc8) cell_gms_pane_g3

0xe0af,	// (0x0003edd1) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0003ff38) cell_gms_pane_g

0xe0b8,	// (0x0003edda) grid_highlight_pane_cp09

0x8d38,	// (0x00039a5a) phob_pre_status_pane_g1

0x8d40,	// (0x00039a62) phob_pre_status_pane_g2

0x8d48,	// (0x00039a6a) phob_pre_status_pane_g3

0x8d50,	// (0x00039a72) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00040327) phob_pre_status_pane_g

0x8d60,	// (0x00039a82) phob_pre_status_pane_t1

0x8d70,	// (0x00039a92) phob_pre_status_pane_t2

0x8d80,	// (0x00039aa2) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00040332) phob_pre_status_pane_t

0xdbf3,	// (0x0003e915) bg_list_pane_cp05

0x6bc9,	// (0x000378eb) grid_vorec_pane

0x6bd3,	// (0x000378f5) vorec_t1

0x6be1,	// (0x00037903) vorec_t2

0x6bef,	// (0x00037911) vorec_t3

0x6bfd,	// (0x0003791f) vorec_t4

0x6c0b,	// (0x0003792d) vorec_t5

0x6c19,	// (0x0003793b) vorec_t6

0x0006,

0xf21f,	// (0x0003ff41) vorec_t

0x6c35,	// (0x00037957) wait_bar_pane_cp01

0x6c3d,	// (0x0003795f) cell_vorec_pane_ParamLimits

0x6c3d,	// (0x0003795f) cell_vorec_pane

0xe0c0,	// (0x0003ede2) cell_vorec_pane_g1

0xdbf3,	// (0x0003e915) grid_highlight_pane_cp05

0x6c60,	// (0x00037982) cams_zoom_pane

0x6c6c,	// (0x0003798e) image_vga_pane

0x6c7b,	// (0x0003799d) main_camera_pane_g1

0x6c89,	// (0x000379ab) main_camera_pane_g2

0x6c95,	// (0x000379b7) main_camera_pane_g3

0x6ca1,	// (0x000379c3) main_camera_pane_g4

0x6cad,	// (0x000379cf) main_camera_pane_g5

0x6cb9,	// (0x000379db) main_camera_pane_g6

0x6cc5,	// (0x000379e7) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0003ff50) main_camera_pane_g

0x6cd1,	// (0x000379f3) main_camera_pane_t1

0x6ce3,	// (0x00037a05) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0003ff61) main_camera_pane_t

0x6d04,	// (0x00037a26) cams_zoom_pane_cp_ParamLimits

0x6d04,	// (0x00037a26) cams_zoom_pane_cp

0x6d28,	// (0x00037a4a) image_cif_pane_ParamLimits

0x6d28,	// (0x00037a4a) image_cif_pane

0x6d46,	// (0x00037a68) image_subqcif_pane

0x6d4e,	// (0x00037a70) main_video_pane_g1_ParamLimits

0x6d4e,	// (0x00037a70) main_video_pane_g1

0x6d6e,	// (0x00037a90) main_video_pane_g2_ParamLimits

0x6d6e,	// (0x00037a90) main_video_pane_g2

0x6d9e,	// (0x00037ac0) main_video_pane_g3_ParamLimits

0x6d9e,	// (0x00037ac0) main_video_pane_g3

0x6dc7,	// (0x00037ae9) main_video_pane_g4_ParamLimits

0x6dc7,	// (0x00037ae9) main_video_pane_g4

0x6df0,	// (0x00037b12) main_video_pane_g5_ParamLimits

0x6df0,	// (0x00037b12) main_video_pane_g5

0xe0d6,	// (0x0003edf8) main_video_pane_g6_ParamLimits

0xe0d6,	// (0x0003edf8) main_video_pane_g6

0x0006,

0xf244,	// (0x0003ff66) main_video_pane_g_ParamLimits

0xf244,	// (0x0003ff66) main_video_pane_g

0x6e14,	// (0x00037b36) main_video_pane_t1_ParamLimits

0x6e14,	// (0x00037b36) main_video_pane_t1

0xe0f0,	// (0x0003ee12) cams_zoom_pane_g1

0xe0f9,	// (0x0003ee1b) cams_zoom_pane_g2

0xe102,	// (0x0003ee24) cams_zoom_pane_g3

0xe10b,	// (0x0003ee2d) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0003ff75) cams_zoom_pane_g

0x6e5e,	// (0x00037b80) grid_cams_pane

0x6e6c,	// (0x00037b8e) linegrid_cams_pane

0x6e7a,	// (0x00037b9c) cell_cams_pane_ParamLimits

0x6e7a,	// (0x00037b9c) cell_cams_pane

0xe114,	// (0x0003ee36) cams_burst_image_pane

0xe11c,	// (0x0003ee3e) cell_cams_pane_g1

0xdbf3,	// (0x0003e915) grid_highlight_pane_cp03

0xdf7a,	// (0x0003ec9c) mp_bg_pane_g1

0xdbf3,	// (0x0003e915) bg_list_pane_cp03

0x0c43,	// (0x00031965) bg_mp_pane

0x0c4b,	// (0x0003196d) grid_mp_pane

0x0c53,	// (0x00031975) media_player_g1

0x0c5b,	// (0x0003197d) media_player_t1

0x0c69,	// (0x0003198b) media_player_t2

0x0c77,	// (0x00031999) media_player_t3

0x0c85,	// (0x000319a7) media_player_t4

0x0c93,	// (0x000319b5) media_player_t5

0x0ca1,	// (0x000319c3) media_player_t6

0x0caf,	// (0x000319d1) media_player_t7

0x0006,

0xf5ef,	// (0x00040311) media_player_t

0x0cbd,	// (0x000319df) wait_bar_pane_cp02

0xf5d4,	// (0x000402f6) main_usb_pane_t

0x8d2f,	// (0x00039a51) cell_mp_pane

0xdf7a,	// (0x0003ec9c) cell_mp_pane_g1

0xdbf3,	// (0x0003e915) grid_highlight_pane_cp06

0xe124,	// (0x0003ee46) grid_skin_colour_pane

0xe12c,	// (0x0003ee4e) list_highlight_pane_cp03

0x6e8d,	// (0x00037baf) skin_g1

0xe134,	// (0x0003ee56) skin_t1

0xe143,	// (0x0003ee65) skin_t2

0x0001,

0xf288,	// (0x0003ffaa) skin_t

0x6e97,	// (0x00037bb9) cell_skin_colour_pane_ParamLimits

0x6e97,	// (0x00037bb9) cell_skin_colour_pane

0xe151,	// (0x0003ee73) cell_skin_colour_pane_g1

0x6f19,	// (0x00037c3b) call_video_g1_ParamLimits

0x6f19,	// (0x00037c3b) call_video_g1

0x6f29,	// (0x00037c4b) call_video_g2_ParamLimits

0x6f29,	// (0x00037c4b) call_video_g2

0x0001,

0xf28d,	// (0x0003ffaf) call_video_g_ParamLimits

0xf28d,	// (0x0003ffaf) call_video_g

0x6f83,	// (0x00037ca5) call_video_uplink_pane_cp1_ParamLimits

0x6f83,	// (0x00037ca5) call_video_uplink_pane_cp1

0xe163,	// (0x0003ee85) call_video_uplink_pane_cp2

0x704f,	// (0x00037d71) video_down_crop_pane_ParamLimits

0x704f,	// (0x00037d71) video_down_crop_pane

0x714d,	// (0x00037e6f) video_down_pane_ParamLimits

0x714d,	// (0x00037e6f) video_down_pane

0xe16b,	// (0x0003ee8d) video_down_subqcif_pane_ParamLimits

0xe16b,	// (0x0003ee8d) video_down_subqcif_pane

0xe183,	// (0x0003eea5) video_down_subqcif_pane_cp_ParamLimits

0xe183,	// (0x0003eea5) video_down_subqcif_pane_cp

0xe1a7,	// (0x0003eec9) im_reading_pane_ParamLimits

0xe1a7,	// (0x0003eec9) im_reading_pane

0x726f,	// (0x00037f91) im_writing_pane_ParamLimits

0x726f,	// (0x00037f91) im_writing_pane

0x728d,	// (0x00037faf) im_reading_pane_t1

0xe1c1,	// (0x0003eee3) list_im_pane

0xe1d2,	// (0x0003eef4) scroll_pane_cp07

0x72e1,	// (0x00038003) im_writing_pane_t1_ParamLimits

0x72e1,	// (0x00038003) im_writing_pane_t1

0xe1eb,	// (0x0003ef0d) im_writing_pane_t2_ParamLimits

0xe1eb,	// (0x0003ef0d) im_writing_pane_t2

0x0001,

0xf297,	// (0x0003ffb9) im_writing_pane_t_ParamLimits

0xf297,	// (0x0003ffb9) im_writing_pane_t

0xdbf3,	// (0x0003e915) input_focus_pane_cp04

0xdbf3,	// (0x0003e915) input_focus_pane_cp05

0x72f6,	// (0x00038018) list_im_single_pane_ParamLimits

0x72f6,	// (0x00038018) list_im_single_pane

0x731a,	// (0x0003803c) list_single_im_pane_t1

0x8cf3,	// (0x00039a15) blid_accuracy_pane

0x8cfb,	// (0x00039a1d) blid_compass_pane

0x8d05,	// (0x00039a27) main_location_t1

0x8d13,	// (0x00039a35) main_location_t2

0x8d21,	// (0x00039a43) main_location_t3

0x0002,

0xf5fe,	// (0x00040320) main_location_t

0xdbf3,	// (0x0003e915) aid_levels_location

0xdf7a,	// (0x0003ec9c) blid_accuracy_pane_g1

0xdf7a,	// (0x0003ec9c) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0004001b) blid_accuracy_pane_g

0xe233,	// (0x0003ef55) wml_content_pane

0xe271,	// (0x0003ef93) wml_button_pane_ParamLimits

0xe271,	// (0x0003ef93) wml_button_pane

0x7329,	// (0x0003804b) wml_list_single_large_pane_ParamLimits

0x7329,	// (0x0003804b) wml_list_single_large_pane

0x7353,	// (0x00038075) wml_list_single_medium_pane_ParamLimits

0x7353,	// (0x00038075) wml_list_single_medium_pane

0x7384,	// (0x000380a6) wml_list_single_small_pane_ParamLimits

0x7384,	// (0x000380a6) wml_list_single_small_pane

0xe285,	// (0x0003efa7) wml_selection_box_pane_ParamLimits

0xe285,	// (0x0003efa7) wml_selection_box_pane

0xe298,	// (0x0003efba) wml_list_single_pane_t1

0xe2a7,	// (0x0003efc9) wml_list_single_medium_pane_t1

0xe2b6,	// (0x0003efd8) wml_list_single_large_pane_t1

0xe2c5,	// (0x0003efe7) input_focus_pane_cp02_ParamLimits

0xe2c5,	// (0x0003efe7) input_focus_pane_cp02

0xe2d8,	// (0x0003effa) wml_selection_box_pane_g1

0xe2e1,	// (0x0003f003) wml_selection_box_pane_t1_ParamLimits

0xe2e1,	// (0x0003f003) wml_selection_box_pane_t1

0xde4e,	// (0x0003eb70) bg_wml_button_pane_ParamLimits

0xde4e,	// (0x0003eb70) bg_wml_button_pane

0xe2f9,	// (0x0003f01b) wml_button_pane_g1

0xe301,	// (0x0003f023) wml_button_pane_t1

0xe2f9,	// (0x0003f01b) wml_button_bg_pane_g1

0xe311,	// (0x0003f033) wml_button_bg_pane_g2

0xe319,	// (0x0003f03b) wml_button_bg_pane_g3

0xe321,	// (0x0003f043) wml_button_bg_pane_g4

0xe329,	// (0x0003f04b) wml_button_bg_pane_g5

0xe331,	// (0x0003f053) wml_button_bg_pane_g6

0xe339,	// (0x0003f05b) wml_button_bg_pane_g7

0xe341,	// (0x0003f063) wml_button_bg_pane_g8

0xe349,	// (0x0003f06b) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0003ffbe) wml_button_bg_pane_g

0x73be,	// (0x000380e0) bg_list_pane_cp02

0xe351,	// (0x0003f073) mce_header_pane_ParamLimits

0xe351,	// (0x0003f073) mce_header_pane

0xe367,	// (0x0003f089) mce_icon_pane

0xe367,	// (0x0003f089) mce_image_pane

0xe370,	// (0x0003f092) mce_text_pane_ParamLimits

0xe370,	// (0x0003f092) mce_text_pane

0x73c8,	// (0x000380ea) scroll_pane_cp03

0xe269,	// (0x0003ef8b) scroll_pane_cp04

0xe383,	// (0x0003f0a5) scroll_pane_cp05_ParamLimits

0xe383,	// (0x0003f0a5) scroll_pane_cp05

0x73d2,	// (0x000380f4) mce_header_field_pane_ParamLimits

0x73d2,	// (0x000380f4) mce_header_field_pane

0x73f2,	// (0x00038114) mce_header_field_pane_2_ParamLimits

0x73f2,	// (0x00038114) mce_header_field_pane_2

0x7408,	// (0x0003812a) mce_header_field_pane_3

0x7410,	// (0x00038132) list_single_mce_message_pane_ParamLimits

0x7410,	// (0x00038132) list_single_mce_message_pane

0x7435,	// (0x00038157) list_single_mce_smart_pane_ParamLimits

0x7435,	// (0x00038157) list_single_mce_smart_pane

0xe38f,	// (0x0003f0b1) input_focus_pane_cp03

0xe398,	// (0x0003f0ba) list_header_data_pane

0x7465,	// (0x00038187) mce_header_field_pane_t1

0x7473,	// (0x00038195) list_single_mce_header_pane_ParamLimits

0x7473,	// (0x00038195) list_single_mce_header_pane

0xe3a0,	// (0x0003f0c2) list_single_mce_header_pane_t1

0xe3af,	// (0x0003f0d1) list_single_mce_message_pane_g1

0xe3b7,	// (0x0003f0d9) list_single_mce_message_pane_t1

0x74b7,	// (0x000381d9) bg_cale_heading_pane_cp01_ParamLimits

0x74b7,	// (0x000381d9) bg_cale_heading_pane_cp01

0xe3c5,	// (0x0003f0e7) bg_cale_pane_cp02_ParamLimits

0xe3c5,	// (0x0003f0e7) bg_cale_pane_cp02

0x74ea,	// (0x0003820c) cale_month_corner_pane

0x7500,	// (0x00038222) cale_month_day_heading_pane_ParamLimits

0x7500,	// (0x00038222) cale_month_day_heading_pane

0x7543,	// (0x00038265) cale_month_pane_g1_ParamLimits

0x7543,	// (0x00038265) cale_month_pane_g1

0x756f,	// (0x00038291) cale_month_pane_g2_ParamLimits

0x756f,	// (0x00038291) cale_month_pane_g2

0x7592,	// (0x000382b4) cale_month_pane_g3_ParamLimits

0x7592,	// (0x000382b4) cale_month_pane_g3

0x75ce,	// (0x000382f0) cale_month_pane_g4_ParamLimits

0x75ce,	// (0x000382f0) cale_month_pane_g4

0x760a,	// (0x0003832c) cale_month_pane_g5_ParamLimits

0x760a,	// (0x0003832c) cale_month_pane_g5

0x7646,	// (0x00038368) cale_month_pane_g6_ParamLimits

0x7646,	// (0x00038368) cale_month_pane_g6

0x7682,	// (0x000383a4) cale_month_pane_g7_ParamLimits

0x7682,	// (0x000383a4) cale_month_pane_g7

0x76ce,	// (0x000383f0) cale_month_pane_g8_ParamLimits

0x76ce,	// (0x000383f0) cale_month_pane_g8

0x771a,	// (0x0003843c) cale_month_pane_g9_ParamLimits

0x771a,	// (0x0003843c) cale_month_pane_g9

0x7760,	// (0x00038482) cale_month_pane_g10_ParamLimits

0x7760,	// (0x00038482) cale_month_pane_g10

0x779a,	// (0x000384bc) cale_month_pane_g11_ParamLimits

0x779a,	// (0x000384bc) cale_month_pane_g11

0x77d8,	// (0x000384fa) cale_month_pane_g12_ParamLimits

0x77d8,	// (0x000384fa) cale_month_pane_g12

0x7816,	// (0x00038538) cale_month_pane_g13_ParamLimits

0x7816,	// (0x00038538) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0003ffd1) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0003ffd1) cale_month_pane_g

0x7854,	// (0x00038576) cale_month_week_pane

0x7867,	// (0x00038589) grid_cale_month_pane_ParamLimits

0x7867,	// (0x00038589) grid_cale_month_pane

0x78a5,	// (0x000385c7) cale_month_day_heading_pane_t1

0x7903,	// (0x00038625) cale_month_day_heading_pane_t2

0x7968,	// (0x0003868a) cale_month_day_heading_pane_t3

0x79cd,	// (0x000386ef) cale_month_day_heading_pane_t4

0x7a32,	// (0x00038754) cale_month_day_heading_pane_t5

0x7a97,	// (0x000387b9) cale_month_day_heading_pane_t6

0x7afc,	// (0x0003881e) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0003ffec) cale_month_day_heading_pane_t

0xe065,	// (0x0003ed87) bg_cale_side_pane_cp01

0x7b71,	// (0x00038893) cale_month_week_pane_t1

0x7b88,	// (0x000388aa) cale_month_week_pane_t2

0x7b9f,	// (0x000388c1) cale_month_week_pane_t3

0x7bb6,	// (0x000388d8) cale_month_week_pane_t4

0x7bcd,	// (0x000388ef) cale_month_week_pane_t5

0x7be8,	// (0x0003890a) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0003fffb) cale_month_week_pane_t

0x7c07,	// (0x00038929) cell_cale_month_pane_ParamLimits

0x7c07,	// (0x00038929) cell_cale_month_pane

0x7ccd,	// (0x000389ef) cell_cale_month_pane_g1

0x7cd9,	// (0x000389fb) cell_cale_month_pane_t1_ParamLimits

0x7cd9,	// (0x000389fb) cell_cale_month_pane_t1

0xe073,	// (0x0003ed95) grid_highlight_pane_cp08

0xdf7a,	// (0x0003ec9c) main_smil_g1

0x7cf5,	// (0x00038a17) smil_status_pane

0xe3fa,	// (0x0003f11c) smil_text_pane

0x0b63,	// (0x00031885) bg_popup_call3_rect_pane_g8

0x0b6b,	// (0x0003188d) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x000402b4) bg_popup_call3_rect_pane_g

0x0df8,	// (0x00031b1a) smil_status_volume_pane_g1

0xe404,	// (0x0003f126) smil_status_pane_t1

0x90d9,	// (0x00039dfb) volume_smil_pane

0xe41b,	// (0x0003f13d) list_smil_text_pane

0x7d08,	// (0x00038a2a) scroll_pane_cp011

0x7d13,	// (0x00038a35) smil_text_list_pane_t1_ParamLimits

0x7d13,	// (0x00038a35) smil_text_list_pane_t1

0x7d8b,	// (0x00038aad) aid_volume_smil_ParamLimits

0x7d8b,	// (0x00038aad) aid_volume_smil

0xdf7a,	// (0x0003ec9c) smil_volume_pane_g1

0xdf7a,	// (0x0003ec9c) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0004001b) smil_volume_pane_g

0xdf25,	// (0x0003ec47) listscroll_cale_day_pane

0xe425,	// (0x0003f147) bg_cale_pane

0xe43d,	// (0x0003f15f) list_cale_pane

0xe44e,	// (0x0003f170) scroll_pane_cp09

0xe45f,	// (0x0003f181) cale_bg_pane_g1

0xe467,	// (0x0003f189) cale_bg_pane_g2

0xe46f,	// (0x0003f191) cale_bg_pane_g3

0xe477,	// (0x0003f199) cale_bg_pane_g4

0xe47f,	// (0x0003f1a1) cale_bg_pane_g5

0xe487,	// (0x0003f1a9) cale_bg_pane_g6

0xe48f,	// (0x0003f1b1) cale_bg_pane_g7

0xe497,	// (0x0003f1b9) cale_bg_pane_g8

0xe49f,	// (0x0003f1c1) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00040020) cale_bg_pane_g

0x7dad,	// (0x00038acf) list_cale_time_pane_ParamLimits

0x7dad,	// (0x00038acf) list_cale_time_pane

0xe4a7,	// (0x0003f1c9) list_cale_time_pane_g1_ParamLimits

0xe4a7,	// (0x0003f1c9) list_cale_time_pane_g1

0xe4b3,	// (0x0003f1d5) list_cale_time_pane_g2_ParamLimits

0xe4b3,	// (0x0003f1d5) list_cale_time_pane_g2

0x7dc9,	// (0x00038aeb) list_cale_time_pane_g3_ParamLimits

0x7dc9,	// (0x00038aeb) list_cale_time_pane_g3

0x7dd7,	// (0x00038af9) list_cale_time_pane_g4_ParamLimits

0x7dd7,	// (0x00038af9) list_cale_time_pane_g4

0x7de5,	// (0x00038b07) list_cale_time_pane_g5_ParamLimits

0x7de5,	// (0x00038b07) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00040033) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00040033) list_cale_time_pane_g

0xe4cd,	// (0x0003f1ef) list_cale_time_pane_t1_ParamLimits

0xe4cd,	// (0x0003f1ef) list_cale_time_pane_t1

0xe4f5,	// (0x0003f217) list_cale_time_pane_t2_ParamLimits

0xe4f5,	// (0x0003f217) list_cale_time_pane_t2

0x80bc,	// (0x00038dde) aid_blid_cardinal_pane

0x80fe,	// (0x00038e20) compass_pane_t4

0xe51d,	// (0x0003f23f) list_cale_time_pane_t4_ParamLimits

0xe51d,	// (0x0003f23f) list_cale_time_pane_t4

0x810c,	// (0x00038e2e) compass_pane_t5

0x811c,	// (0x00038e3e) compass_pane_t6

0x812a,	// (0x00038e4c) compass_pane_t7

0xe956,	// (0x0003f678) navi_pane_cc_t1

0xeaab,	// (0x0003f7cd) aid_phob_thumbnail_center_pane

0x87f9,	// (0x0003951b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00040040) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00040040) list_cale_time_pane_t

0xd84a,	// (0x0003e56c) bg_popup_window_pane_cp02_ParamLimits

0xd84a,	// (0x0003e56c) bg_popup_window_pane_cp02

0xe545,	// (0x0003f267) heading_pane_cp01_ParamLimits

0xe545,	// (0x0003f267) heading_pane_cp01

0xe551,	// (0x0003f273) loc_req_pane_ParamLimits

0xe551,	// (0x0003f273) loc_req_pane

0xe561,	// (0x0003f283) loc_type_pane_ParamLimits

0xe561,	// (0x0003f283) loc_type_pane

0xe573,	// (0x0003f295) loc_type_pane_t1_ParamLimits

0xe573,	// (0x0003f295) loc_type_pane_t1

0xe585,	// (0x0003f2a7) loc_type_pane_t2_ParamLimits

0xe585,	// (0x0003f2a7) loc_type_pane_t2

0xe597,	// (0x0003f2b9) loc_type_pane_t3_ParamLimits

0xe597,	// (0x0003f2b9) loc_type_pane_t3

0x0002,

0xf325,	// (0x00040047) loc_type_pane_t_ParamLimits

0xf325,	// (0x00040047) loc_type_pane_t

0xe5a9,	// (0x0003f2cb) list_loc_req_pane

0xe5b3,	// (0x0003f2d5) scroll_pane_cp012

0x7df3,	// (0x00038b15) list_single_loc_request_popup_menu_pane_ParamLimits

0x7df3,	// (0x00038b15) list_single_loc_request_popup_menu_pane

0xe5be,	// (0x0003f2e0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe5be,	// (0x0003f2e0) list_single_loc_request_popup_menu_pane_g1

0xe5ca,	// (0x0003f2ec) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe5ca,	// (0x0003f2ec) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0004004e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0004004e) list_single_loc_request_popup_menu_pane_g

0xe5d6,	// (0x0003f2f8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe5d6,	// (0x0003f2f8) list_single_loc_request_popup_menu_pane_t1

0x7e05,	// (0x00038b27) bg_popup_window_pane_cp03_ParamLimits

0x7e05,	// (0x00038b27) bg_popup_window_pane_cp03

0x7e13,	// (0x00038b35) heading_loc_req_pane_ParamLimits

0x7e13,	// (0x00038b35) heading_loc_req_pane

0x7e1f,	// (0x00038b41) popup_dyc_status_message_window_g1_ParamLimits

0x7e1f,	// (0x00038b41) popup_dyc_status_message_window_g1

0x7e2b,	// (0x00038b4d) popup_dyc_status_message_window_t1_ParamLimits

0x7e2b,	// (0x00038b4d) popup_dyc_status_message_window_t1

0x7e3d,	// (0x00038b5f) popup_dyc_status_message_window_t2_ParamLimits

0x7e3d,	// (0x00038b5f) popup_dyc_status_message_window_t2

0x7e4f,	// (0x00038b71) popup_dyc_status_message_window_t3_ParamLimits

0x7e4f,	// (0x00038b71) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00040053) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00040053) popup_dyc_status_message_window_t

0xdbf3,	// (0x0003e915) bg_heading_pane_cp01

0xe5ec,	// (0x0003f30e) heading_loc_req_pane_g1

0xe5f4,	// (0x0003f316) heading_loc_req_pane_g2

0xe5fc,	// (0x0003f31e) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0004005a) heading_loc_req_pane_g

0xe604,	// (0x0003f326) heading_loc_req_pane_t1

0xe613,	// (0x0003f335) bg_popup_sub_pane_cp01_ParamLimits

0xe613,	// (0x0003f335) bg_popup_sub_pane_cp01

0xe621,	// (0x0003f343) popup_cale_events_window_g1_ParamLimits

0xe621,	// (0x0003f343) popup_cale_events_window_g1

0xe641,	// (0x0003f363) popup_cale_events_window_g2_ParamLimits

0xe641,	// (0x0003f363) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0004008e) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0004008e) popup_cale_events_window_g

0xe661,	// (0x0003f383) popup_cale_events_window_t1_ParamLimits

0xe661,	// (0x0003f383) popup_cale_events_window_t1

0xe673,	// (0x0003f395) popup_cale_events_window_t2_ParamLimits

0xe673,	// (0x0003f395) popup_cale_events_window_t2

0xe6b1,	// (0x0003f3d3) popup_cale_events_window_t3_ParamLimits

0xe6b1,	// (0x0003f3d3) popup_cale_events_window_t3

0xe6eb,	// (0x0003f40d) popup_cale_events_window_t4_ParamLimits

0xe6eb,	// (0x0003f40d) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00040093) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00040093) popup_cale_events_window_t

0x7e79,	// (0x00038b9b) call_type_pane

0xe721,	// (0x0003f443) popup_call_status_window_g1

0x7e85,	// (0x00038ba7) popup_call_status_window_g2

0x7e91,	// (0x00038bb3) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0004009c) popup_call_status_window_g

0xe72f,	// (0x0003f451) call_type_pane_g1

0xe738,	// (0x0003f45a) call_type_pane_g2

0x0001,

0xf381,	// (0x000400a3) call_type_pane_g

0xdbf3,	// (0x0003e915) bg_popup_sub_pane_cp02

0xe741,	// (0x0003f463) listscroll_popup_wml_pane

0xe749,	// (0x0003f46b) list_wml_pane

0xe753,	// (0x0003f475) scroll_pane_cp013

0xe75e,	// (0x0003f480) list_single_graphic_popup_wml_pane_ParamLimits

0xe75e,	// (0x0003f480) list_single_graphic_popup_wml_pane

0xdf7a,	// (0x0003ec9c) list_single_graphic_popup_wml_pane_g1

0xe772,	// (0x0003f494) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x000400a8) list_single_graphic_popup_wml_pane_g

0xe77a,	// (0x0003f49c) list_single_graphic_popup_wml_pane_t1

0xe790,	// (0x0003f4b2) aid_call_pane

0xde46,	// (0x0003eb68) popup_clock_analogue_window_g1

0xde46,	// (0x0003eb68) popup_clock_analogue_window_g2

0x7e9d,	// (0x00038bbf) popup_clock_analogue_window_g3

0x7e9d,	// (0x00038bbf) popup_clock_analogue_window_g4

0xdf7a,	// (0x0003ec9c) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x000400ad) popup_clock_analogue_window_g

0x7ea5,	// (0x00038bc7) popup_clock_analogue_window_t1

0x7eb3,	// (0x00038bd5) clock_digital_number_pane_ParamLimits

0x7eb3,	// (0x00038bd5) clock_digital_number_pane

0x7ebf,	// (0x00038be1) clock_digital_number_pane_cp02_ParamLimits

0x7ebf,	// (0x00038be1) clock_digital_number_pane_cp02

0x7ecb,	// (0x00038bed) clock_digital_number_pane_cp03_ParamLimits

0x7ecb,	// (0x00038bed) clock_digital_number_pane_cp03

0x7ed7,	// (0x00038bf9) clock_digital_number_pane_cp04_ParamLimits

0x7ed7,	// (0x00038bf9) clock_digital_number_pane_cp04

0x7ee7,	// (0x00038c09) clock_digital_separator_pane_ParamLimits

0x7ee7,	// (0x00038c09) clock_digital_separator_pane

0x7ef3,	// (0x00038c15) popup_clock_digital_window_t1

0xdf7a,	// (0x0003ec9c) clock_digital_number_pane_g1

0xdf7a,	// (0x0003ec9c) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0004001b) clock_digital_number_pane_g

0xdf7a,	// (0x0003ec9c) clock_digital_separator_pane_g1

0xdf7a,	// (0x0003ec9c) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0004001b) clock_digital_separator_pane_g

0xdbf3,	// (0x0003e915) bg_popup_window_pane_cp04

0xe798,	// (0x0003f4ba) heading_pane_cp03

0xe7a0,	// (0x0003f4c2) listscroll_popup_gms_pane

0xe7a8,	// (0x0003f4ca) grid_large_graphic_popup_pane

0xe7b2,	// (0x0003f4d4) listscroll_popup_gms_pane_g1

0xe7ba,	// (0x0003f4dc) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x000400b8) listscroll_popup_gms_pane_g

0xe269,	// (0x0003ef8b) scroll_pane_cp014

0x7f10,	// (0x00038c32) cell_large_graphic_popup_pane_ParamLimits

0x7f10,	// (0x00038c32) cell_large_graphic_popup_pane

0x7f28,	// (0x00038c4a) cell_large_graphic_popup_pane_g1_ParamLimits

0x7f28,	// (0x00038c4a) cell_large_graphic_popup_pane_g1

0xe7c2,	// (0x0003f4e4) cell_large_graphic_popup_pane_g2_ParamLimits

0xe7c2,	// (0x0003f4e4) cell_large_graphic_popup_pane_g2

0xe7ce,	// (0x0003f4f0) cell_large_graphic_popup_pane_g3_ParamLimits

0xe7ce,	// (0x0003f4f0) cell_large_graphic_popup_pane_g3

0xe7db,	// (0x0003f4fd) cell_large_graphic_popup_pane_g4_ParamLimits

0xe7db,	// (0x0003f4fd) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x000400bd) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x000400bd) cell_large_graphic_popup_pane_g

0xe7eb,	// (0x0003f50d) grid_highlight_pane_cp010

0xdf7a,	// (0x0003ec9c) bg_popup_call_pane_g1

0xe7f5,	// (0x0003f517) list_single_graphic_popup_conf_pane_ParamLimits

0xe7f5,	// (0x0003f517) list_single_graphic_popup_conf_pane

0xe808,	// (0x0003f52a) list_highlight_pane_cp01

0xe811,	// (0x0003f533) list_single_graphic_popup_conf_pane_g1

0xe819,	// (0x0003f53b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x000400c6) list_single_graphic_popup_conf_pane_g

0xe821,	// (0x0003f543) list_single_graphic_popup_conf_pane_t1

0xe82f,	// (0x0003f551) linegrid_cams_pane_g1

0x7f34,	// (0x00038c56) linegrid_cams_pane_g2

0xe0a6,	// (0x0003edc8) linegrid_cams_pane_g3

0xe838,	// (0x0003f55a) linegrid_cams_pane_g4

0x7f3d,	// (0x00038c5f) linegrid_cams_pane_g5

0x7f46,	// (0x00038c68) linegrid_cams_pane_g6

0xe0af,	// (0x0003edd1) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x000400cb) linegrid_cams_pane_g

0xe841,	// (0x0003f563) popup_clock_analogue_window

0xe841,	// (0x0003f563) popup_clock_digital_window

0xdbf3,	// (0x0003e915) popup_phob_thumbnail_window

0xdf7a,	// (0x0003ec9c) call_video_uplink_pane_g1

0xe84a,	// (0x0003f56c) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x000400da) call_video_uplink_pane_g

0xe852,	// (0x0003f574) video_uplink_pane

0xe85a,	// (0x0003f57c) mce_image_pane_g1

0x7f4f,	// (0x00038c71) mce_image_pane_g2

0x7f59,	// (0x00038c7b) mce_image_pane_g3

0x7f61,	// (0x00038c83) mce_image_pane_g4

0x7f69,	// (0x00038c8b) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x000400df) mce_image_pane_g

0xe864,	// (0x0003f586) control_top_pane_stacon_cp01_ParamLimits

0xe864,	// (0x0003f586) control_top_pane_stacon_cp01

0xe878,	// (0x0003f59a) uni_indicator_pane_stacon_cp01_ParamLimits

0xe878,	// (0x0003f59a) uni_indicator_pane_stacon_cp01

0xe889,	// (0x0003f5ab) bg_popup_sub_pane_cp03

0x7f71,	// (0x00038c93) chi_dic_find_pane

0x7f79,	// (0x00038c9b) listscroll_chi_dic_pane

0x7f82,	// (0x00038ca4) main_pane_chidic_g1

0xe893,	// (0x0003f5b5) chi_dic_find_pane_t1

0xe8a1,	// (0x0003f5c3) find_chidic_pane

0xe8aa,	// (0x0003f5cc) chi_dic_list_pane_ParamLimits

0xe8aa,	// (0x0003f5cc) chi_dic_list_pane

0xe8bb,	// (0x0003f5dd) scroll_pane_cp020

0xe8c3,	// (0x0003f5e5) find_chidic_pane_t1

0xdbf3,	// (0x0003e915) input_focus_pane_cp06

0x7f95,	// (0x00038cb7) list_chi_dic_pane_ParamLimits

0x7f95,	// (0x00038cb7) list_chi_dic_pane

0x7faf,	// (0x00038cd1) list_chi_dic_pane_t1_ParamLimits

0x7faf,	// (0x00038cd1) list_chi_dic_pane_t1

0xdbf3,	// (0x0003e915) list_highlight_pane_cp020

0xe8d2,	// (0x0003f5f4) bg_cale_heading_pane_g1

0x7fc2,	// (0x00038ce4) bg_cale_heading_pane_g2

0x7fca,	// (0x00038cec) bg_cale_heading_pane_g3

0x7fd2,	// (0x00038cf4) bg_cale_heading_pane_g4

0x7fdc,	// (0x00038cfe) bg_cale_heading_pane_g5

0x7fe6,	// (0x00038d08) bg_cale_heading_pane_g6

0x7fee,	// (0x00038d10) bg_cale_heading_pane_g7

0x7ff6,	// (0x00038d18) bg_cale_heading_pane_g8

0x8000,	// (0x00038d22) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x000400ea) bg_cale_heading_pane_g

0xe8d2,	// (0x0003f5f4) bg_cale_side_pane_g1

0x800a,	// (0x00038d2c) bg_cale_side_pane_g2

0x8014,	// (0x00038d36) bg_cale_side_pane_g3

0x801e,	// (0x00038d40) bg_cale_side_pane_g4

0x8028,	// (0x00038d4a) bg_cale_side_pane_g5

0x8032,	// (0x00038d54) bg_cale_side_pane_g6

0x803c,	// (0x00038d5e) bg_cale_side_pane_g7

0x8046,	// (0x00038d68) bg_cale_side_pane_g8

0x804e,	// (0x00038d70) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x000400fd) bg_cale_side_pane_g

0x8056,	// (0x00038d78) popup_call_status_window_ParamLimits

0x8056,	// (0x00038d78) popup_call_status_window

0xe8da,	// (0x0003f5fc) stacon_top_pane

0xe8e2,	// (0x0003f604) status_pane_ParamLimits

0xe8e2,	// (0x0003f604) status_pane

0xe8f7,	// (0x0003f619) status_small_pane

0xe8ff,	// (0x0003f621) control_pane

0xdbf3,	// (0x0003e915) stacon_bottom_pane

0xe907,	// (0x0003f629) list_single_mce_smart_pane_t1_ParamLimits

0xe907,	// (0x0003f629) list_single_mce_smart_pane_t1

0xe91a,	// (0x0003f63c) list_single_mce_smart_pane_t2_ParamLimits

0xe91a,	// (0x0003f63c) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00040110) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00040110) list_single_mce_smart_pane_t

0x8062,	// (0x00038d84) compass_pane

0x806e,	// (0x00038d90) main_location2_pane_t1

0x8082,	// (0x00038da4) main_location2_pane_t2

0x8096,	// (0x00038db8) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00040115) main_location2_pane_t

0xe939,	// (0x0003f65b) compass_pane_g1_ParamLimits

0xe939,	// (0x0003f65b) compass_pane_g1

0x80e0,	// (0x00038e02) compass_pane_t1

0x80ef,	// (0x00038e11) compass_pane_t2

0x0005,

0xf3fc,	// (0x0004011e) compass_pane_t

0x813a,	// (0x00038e5c) text_secondary_cp61

0xe94d,	// (0x0003f66f) navi_pane_cams_g5

0xe970,	// (0x0003f692) navi_pane_im_t1

0xe97e,	// (0x0003f6a0) navi_pane_mp_g1_ParamLimits

0xe97e,	// (0x0003f6a0) navi_pane_mp_g1

0xe992,	// (0x0003f6b4) navi_pane_mp_g2_ParamLimits

0xe992,	// (0x0003f6b4) navi_pane_mp_g2

0xe99e,	// (0x0003f6c0) navi_pane_mp_g3_ParamLimits

0xe99e,	// (0x0003f6c0) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00040132) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00040132) navi_pane_mp_g

0xe9aa,	// (0x0003f6cc) navi_pane_mp_t1

0xe9b8,	// (0x0003f6da) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00040139) navi_pane_mp_t

0xe9f4,	// (0x0003f716) navi_pane_vt_g1

0xe9aa,	// (0x0003f6cc) navi_pane_vt_t1

0xe9fc,	// (0x0003f71e) navi_slider_pane

0xea04,	// (0x0003f726) zooming_pane

0xea0c,	// (0x0003f72e) navi_slider_pane_g1

0x824f,	// (0x00038f71) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00040140) navi_slider_pane_g

0xea30,	// (0x0003f752) aid_levels_zoom

0xea38,	// (0x0003f75a) zooming_pane_g1

0xea40,	// (0x0003f762) zooming_pane_g2

0xea40,	// (0x0003f762) zooming_pane_g3

0x0002,

0xf42d,	// (0x0004014f) zooming_pane_g

0xea48,	// (0x0003f76a) level_10_zoom

0xea51,	// (0x0003f773) level_11_zoom

0xea5a,	// (0x0003f77c) level_1_zoom

0xea63,	// (0x0003f785) level_2_zoom

0xea6c,	// (0x0003f78e) level_3_zoom

0xea75,	// (0x0003f797) level_4_zoom

0xea7e,	// (0x0003f7a0) level_5_zoom

0xea87,	// (0x0003f7a9) level_6_zoom

0xea90,	// (0x0003f7b2) level_7_zoom

0xea99,	// (0x0003f7bb) level_8_zoom

0xeaa2,	// (0x0003f7c4) level_9_zoom

0xeab3,	// (0x0003f7d5) popup_phob_thumbnail_window_g1

0xeabb,	// (0x0003f7dd) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00040156) popup_phob_thumbnail_window_g

0x0cc5,	// (0x000319e7) level_1_location

0x0ccd,	// (0x000319ef) level_2_location

0x0cd5,	// (0x000319f7) level_3_location

0x0cdd,	// (0x000319ff) level_4_location

0xea04,	// (0x0003f726) level_5_location

0x8261,	// (0x00038f83) mce_icon_pane_g1

0x8269,	// (0x00038f8b) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0004015b) mce_icon_pane_g

0x8271,	// (0x00038f93) main_mup_pane_g1_ParamLimits

0x8271,	// (0x00038f93) main_mup_pane_g1

0x8289,	// (0x00038fab) main_mup_pane_g2_ParamLimits

0x8289,	// (0x00038fab) main_mup_pane_g2

0x82a5,	// (0x00038fc7) main_mup_pane_g3_ParamLimits

0x82a5,	// (0x00038fc7) main_mup_pane_g3

0x82c1,	// (0x00038fe3) main_mup_pane_g4_ParamLimits

0x82c1,	// (0x00038fe3) main_mup_pane_g4

0x82dd,	// (0x00038fff) main_mup_pane_g5_ParamLimits

0x82dd,	// (0x00038fff) main_mup_pane_g5

0x82fe,	// (0x00039020) main_mup_pane_g6_ParamLimits

0x82fe,	// (0x00039020) main_mup_pane_g6

0x831a,	// (0x0003903c) main_mup_pane_g7_ParamLimits

0x831a,	// (0x0003903c) main_mup_pane_g7

0x8336,	// (0x00039058) main_mup_pane_g8_ParamLimits

0x8336,	// (0x00039058) main_mup_pane_g8

0x8356,	// (0x00039078) main_mup_pane_g9_ParamLimits

0x8356,	// (0x00039078) main_mup_pane_g9

0x8375,	// (0x00039097) main_mup_pane_g10_ParamLimits

0x8375,	// (0x00039097) main_mup_pane_g10

0x8394,	// (0x000390b6) main_mup_pane_g11_ParamLimits

0x8394,	// (0x000390b6) main_mup_pane_g11

0x83ac,	// (0x000390ce) main_mup_pane_g12_ParamLimits

0x83ac,	// (0x000390ce) main_mup_pane_g12

0x83ba,	// (0x000390dc) main_mup_pane_g13_ParamLimits

0x83ba,	// (0x000390dc) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00040160) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00040160) main_mup_pane_g

0x83d0,	// (0x000390f2) main_mup_pane_t1_ParamLimits

0x83d0,	// (0x000390f2) main_mup_pane_t1

0x83ed,	// (0x0003910f) main_mup_pane_t2_ParamLimits

0x83ed,	// (0x0003910f) main_mup_pane_t2

0x8407,	// (0x00039129) main_mup_pane_t3_ParamLimits

0x8407,	// (0x00039129) main_mup_pane_t3

0x8421,	// (0x00039143) main_mup_pane_t4_ParamLimits

0x8421,	// (0x00039143) main_mup_pane_t4

0x8433,	// (0x00039155) main_mup_pane_t5_ParamLimits

0x8433,	// (0x00039155) main_mup_pane_t5

0x8445,	// (0x00039167) main_mup_pane_t6_ParamLimits

0x8445,	// (0x00039167) main_mup_pane_t6

0x0005,

0xf459,	// (0x0004017b) main_mup_pane_t_ParamLimits

0xf459,	// (0x0004017b) main_mup_pane_t

0x845b,	// (0x0003917d) mup_progress_pane_ParamLimits

0x845b,	// (0x0003917d) mup_progress_pane

0x8467,	// (0x00039189) mup_visualizer_pane_ParamLimits

0x8467,	// (0x00039189) mup_visualizer_pane

0x84a1,	// (0x000391c3) mup_volume_pane_ParamLimits

0x84a1,	// (0x000391c3) mup_volume_pane

0xe721,	// (0x0003f443) mup_visualizer_pane_g1_ParamLimits

0xe721,	// (0x0003f443) mup_visualizer_pane_g1

0xe721,	// (0x0003f443) mup_visualizer_pane_g2_ParamLimits

0xe721,	// (0x0003f443) mup_visualizer_pane_g2

0xe939,	// (0x0003f65b) mup_visualizer_pane_g3_ParamLimits

0xe939,	// (0x0003f65b) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00040188) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00040188) mup_visualizer_pane_g

0xdf7a,	// (0x0003ec9c) mup_volume_pane_g1

0xeacb,	// (0x0003f7ed) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0004018f) mup_volume_pane_g

0xdf7a,	// (0x0003ec9c) mup_progress_pane_g1

0xead4,	// (0x0003f7f6) mup_progress_pane_g2

0xeadd,	// (0x0003f7ff) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00040194) mup_progress_pane_g

0xdbf3,	// (0x0003e915) bg_popup_window_pane_cp05

0xeae6,	// (0x0003f808) heading_pane_cp02_ParamLimits

0xeae6,	// (0x0003f808) heading_pane_cp02

0xeb00,	// (0x0003f822) list_popup_blid_pane

0xeb08,	// (0x0003f82a) list_blid_sat_info_pane_ParamLimits

0xeb08,	// (0x0003f82a) list_blid_sat_info_pane

0xeb1b,	// (0x0003f83d) list_blid_sat_info_pane_g1

0xeb23,	// (0x0003f845) list_blid_sat_info_pane_t1

0x85ae,	// (0x000392d0) mup_equalizer_pane_ParamLimits

0x85ae,	// (0x000392d0) mup_equalizer_pane

0x85cf,	// (0x000392f1) mup_equalizer_pane_cp1_ParamLimits

0x85cf,	// (0x000392f1) mup_equalizer_pane_cp1

0x85f0,	// (0x00039312) mup_equalizer_pane_cp2_ParamLimits

0x85f0,	// (0x00039312) mup_equalizer_pane_cp2

0x8611,	// (0x00039333) mup_equalizer_pane_cp3_ParamLimits

0x8611,	// (0x00039333) mup_equalizer_pane_cp3

0x8632,	// (0x00039354) mup_equalizer_pane_cp4_ParamLimits

0x8632,	// (0x00039354) mup_equalizer_pane_cp4

0x8653,	// (0x00039375) mup_equalizer_pane_cp5

0x8669,	// (0x0003938b) mup_equalizer_pane_cp6

0x8681,	// (0x000393a3) mup_equalizer_pane_cp7

0x0be3,	// (0x00031905) bg_popup_call_poc_act_pane_g9

0x0beb,	// (0x0003190d) bg_popup_call_poc_act_pane_g10

0x0bf3,	// (0x00031915) bg_popup_call_poc_act_pane_g11

0x000a,

0xde4e,	// (0x0003eb70) mup_scale_pane

0xdf7a,	// (0x0003ec9c) mup_scale_pane_g1

0xeb31,	// (0x0003f853) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x000401b0) mup_scale_pane_g

0xeb55,	// (0x0003f877) msg_data_pane

0xeb5d,	// (0x0003f87f) scroll_pane_cp017

0x4fd6,	// (0x00035cf8) bg_list_pane_cp04_ParamLimits

0x4fd6,	// (0x00035cf8) bg_list_pane_cp04

0xeb65,	// (0x0003f887) msg_data_pane_g1

0x86ab,	// (0x000393cd) msg_data_pane_g2

0x86b5,	// (0x000393d7) msg_data_pane_g3

0x86bd,	// (0x000393df) msg_data_pane_g4

0x86c5,	// (0x000393e7) msg_data_pane_g5

0x86cd,	// (0x000393ef) msg_data_pane_g6

0x86d5,	// (0x000393f7) msg_data_pane_g7

0x0006,

0xf49d,	// (0x000401bf) msg_data_pane_g

0x4ffa,	// (0x00035d1c) msg_text_pane_ParamLimits

0x4ffa,	// (0x00035d1c) msg_text_pane

0x86dd,	// (0x000393ff) qrid_highlight_pane_cp011_ParamLimits

0x86dd,	// (0x000393ff) qrid_highlight_pane_cp011

0xdbf3,	// (0x0003e915) msg_body_pane

0xdbf3,	// (0x0003e915) msg_header_pane

0xeb76,	// (0x0003f898) input_focus_pane_cp07

0x5046,	// (0x00035d68) msg_header_pane_t1_ParamLimits

0x5046,	// (0x00035d68) msg_header_pane_t1

0x5058,	// (0x00035d7a) msg_header_pane_t2_ParamLimits

0x5058,	// (0x00035d7a) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x000401d3) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x000401d3) msg_header_pane_t

0xeb8b,	// (0x0003f8ad) msg_body_pane_g1

0x506a,	// (0x00035d8c) msg_body_pane_t1_ParamLimits

0x506a,	// (0x00035d8c) msg_body_pane_t1

0x509b,	// (0x00035dbd) msg_body_pane_t2_ParamLimits

0x509b,	// (0x00035dbd) msg_body_pane_t2

0x50ad,	// (0x00035dcf) msg_body_pane_t3_ParamLimits

0x50ad,	// (0x00035dcf) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x000401d8) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x000401d8) msg_body_pane_t

0x8749,	// (0x0003946b) main_viewer_pane_g1_ParamLimits

0x8749,	// (0x0003946b) main_viewer_pane_g1

0x8755,	// (0x00039477) main_viewer_pane_g2_ParamLimits

0x8755,	// (0x00039477) main_viewer_pane_g2

0x8761,	// (0x00039483) main_viewer_pane_g3_ParamLimits

0x8761,	// (0x00039483) main_viewer_pane_g3

0x8772,	// (0x00039494) main_viewer_pane_g4_ParamLimits

0x8772,	// (0x00039494) main_viewer_pane_g4

0x8783,	// (0x000394a5) main_viewer_pane_g5_ParamLimits

0x8783,	// (0x000394a5) main_viewer_pane_g5

0x8783,	// (0x000394a5) main_viewer_pane_g7_ParamLimits

0x8783,	// (0x000394a5) main_viewer_pane_g7

0x8795,	// (0x000394b7) main_viewer_pane_g8_ParamLimits

0x8795,	// (0x000394b7) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x000401e8) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x000401e8) main_viewer_pane_g

0xeb93,	// (0x0003f8b5) viewer_content_pane_ParamLimits

0xeb93,	// (0x0003f8b5) viewer_content_pane

0x87cd,	// (0x000394ef) main_postcard_pane_g1_ParamLimits

0x87cd,	// (0x000394ef) main_postcard_pane_g1

0x87db,	// (0x000394fd) main_postcard_pane_g2_ParamLimits

0x87db,	// (0x000394fd) main_postcard_pane_g2

0x87e9,	// (0x0003950b) main_postcard_pane_g3_ParamLimits

0x87e9,	// (0x0003950b) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x000401f9) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x000401f9) main_postcard_pane_g

0x87f9,	// (0x0003951b) main_postcard_pane_g4

0x0de5,	// (0x00031b07) smil_status_volume_pane_g2

0x8825,	// (0x00039547) postcard_pane_ParamLimits

0x8825,	// (0x00039547) postcard_pane

0xe721,	// (0x0003f443) postcard_pane_g1_ParamLimits

0xe721,	// (0x0003f443) postcard_pane_g1

0x8857,	// (0x00039579) postcard_pane_g2_ParamLimits

0x8857,	// (0x00039579) postcard_pane_g2

0x8863,	// (0x00039585) postcard_pane_g3_ParamLimits

0x8863,	// (0x00039585) postcard_pane_g3

0xeba1,	// (0x0003f8c3) postcard_pane_g4_ParamLimits

0xeba1,	// (0x0003f8c3) postcard_pane_g4

0x886f,	// (0x00039591) postcard_pane_g5_ParamLimits

0x886f,	// (0x00039591) postcard_pane_g5

0x887b,	// (0x0003959d) postcard_pane_g6_ParamLimits

0x887b,	// (0x0003959d) postcard_pane_g6

0xebaf,	// (0x0003f8d1) postcard_pane_g7_ParamLimits

0xebaf,	// (0x0003f8d1) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00040206) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00040206) postcard_pane_g

0x8887,	// (0x000395a9) main_mp2_pane_g1_ParamLimits

0x8887,	// (0x000395a9) main_mp2_pane_g1

0x8893,	// (0x000395b5) main_mp2_pane_g2_ParamLimits

0x8893,	// (0x000395b5) main_mp2_pane_g2

0x889f,	// (0x000395c1) main_mp2_pane_g3_ParamLimits

0x889f,	// (0x000395c1) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00040215) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00040215) main_mp2_pane_g

0x88ab,	// (0x000395cd) main_mp2_pane_t1_ParamLimits

0x88ab,	// (0x000395cd) main_mp2_pane_t1

0x88c2,	// (0x000395e4) main_mp2_pane_t2_ParamLimits

0x88c2,	// (0x000395e4) main_mp2_pane_t2

0x88d6,	// (0x000395f8) main_mp2_pane_t3_ParamLimits

0x88d6,	// (0x000395f8) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0004021c) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0004021c) main_mp2_pane_t

0xebbd,	// (0x0003f8df) pec_content_pane_ParamLimits

0xebbd,	// (0x0003f8df) pec_content_pane

0xe269,	// (0x0003ef8b) scroll_pane_cp015

0xebcf,	// (0x0003f8f1) pec_attribute_pane_ParamLimits

0xebcf,	// (0x0003f8f1) pec_attribute_pane

0x88e8,	// (0x0003960a) pec_content_pane_g1_ParamLimits

0x88e8,	// (0x0003960a) pec_content_pane_g1

0xebdf,	// (0x0003f901) pec_content_pane_t1_ParamLimits

0xebdf,	// (0x0003f901) pec_content_pane_t1

0xebf1,	// (0x0003f913) pec_content_pane_t2_ParamLimits

0xebf1,	// (0x0003f913) pec_content_pane_t2

0x0001,

0xf501,	// (0x00040223) pec_content_pane_t_ParamLimits

0xf501,	// (0x00040223) pec_content_pane_t

0x88f4,	// (0x00039616) list_single_graphic_pane_cp01_ParamLimits

0x88f4,	// (0x00039616) list_single_graphic_pane_cp01

0xde4e,	// (0x0003eb70) bg_popup_sub_pane_cp04

0xec03,	// (0x0003f925) popup_mup_playback_window_g1

0xec0f,	// (0x0003f931) popup_mup_playback_window_t1

0xec24,	// (0x0003f946) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00040228) popup_mup_playback_window_t

0xec5b,	// (0x0003f97d) main_image_pane_g1_ParamLimits

0xec5b,	// (0x0003f97d) main_image_pane_g1

0xec9e,	// (0x0003f9c0) scroll_pane_cp018_ParamLimits

0xec9e,	// (0x0003f9c0) scroll_pane_cp018

0xecb6,	// (0x0003f9d8) scroll_pane_cp016_ParamLimits

0xecb6,	// (0x0003f9d8) scroll_pane_cp016

0x898d,	// (0x000396af) smil2_image_pane_ParamLimits

0x898d,	// (0x000396af) smil2_image_pane

0x89bd,	// (0x000396df) smil2_root_pane_ParamLimits

0x89bd,	// (0x000396df) smil2_root_pane

0x89e9,	// (0x0003970b) smil2_text_pane_ParamLimits

0x89e9,	// (0x0003970b) smil2_text_pane

0xdbf3,	// (0x0003e915) bg_list_pane_cp06

0xecf2,	// (0x0003fa14) grid_radio_pane

0xdbf3,	// (0x0003e915) bg_popup_window_pane_cp06

0xecfa,	// (0x0003fa1c) main_fmradio_pane_t1

0xe798,	// (0x0003f4ba) heading_pane_cp04

0xed08,	// (0x0003fa2a) main_fmradio_pane_t2

0x0bfb,	// (0x0003191d) popup_cale_lunar_info_window_g1

0xed16,	// (0x0003fa38) main_fmradio_pane_t3

0x0c03,	// (0x00031925) popup_cale_lunar_info_window_g2

0xed24,	// (0x0003fa46) main_fmradio_pane_t4

0x0001,

0xed32,	// (0x0003fa54) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00040303) popup_cale_lunar_info_window_g

0xf51b,	// (0x0004023d) main_fmradio_pane_t

0xed40,	// (0x0003fa62) wait_bar_pane_cp03

0xed48,	// (0x0003fa6a) cell_fmradio_pane_ParamLimits

0xed48,	// (0x0003fa6a) cell_fmradio_pane

0xebaf,	// (0x0003f8d1) cell_fmradio_pane_g1_ParamLimits

0xebaf,	// (0x0003f8d1) cell_fmradio_pane_g1

0xdbf3,	// (0x0003e915) grid_highlight_pane_cp011

0xed5b,	// (0x0003fa7d) poc_content_pane_ParamLimits

0xed5b,	// (0x0003fa7d) poc_content_pane

0xed6d,	// (0x0003fa8f) scroll_pane_cp019

0x8a29,	// (0x0003974b) popup_call_poc_act_window_ParamLimits

0x8a29,	// (0x0003974b) popup_call_poc_act_window

0x8a36,	// (0x00039758) popup_call_poc_inact_window_ParamLimits

0x8a36,	// (0x00039758) popup_call_poc_inact_window

0xf5b8,	// (0x000402da) bg_popup_call_poc_act_pane_g

0x0b73,	// (0x00031895) bg_popup_call_poc_inact_pane_g1

0x0b7b,	// (0x0003189d) bg_popup_call_poc_inact_pane_g2

0xed75,	// (0x0003fa97) popup_call_poc_act_window_g2

0x0b83,	// (0x000318a5) bg_popup_call_poc_inact_pane_g3

0x0b8b,	// (0x000318ad) bg_popup_call_poc_inact_pane_g4

0x0b93,	// (0x000318b5) bg_popup_call_poc_inact_pane_g5

0xed7d,	// (0x0003fa9f) popup_call_poc_act_window_t1_ParamLimits

0xed7d,	// (0x0003fa9f) popup_call_poc_act_window_t1

0xeda5,	// (0x0003fac7) popup_call_poc_act_window_t2_ParamLimits

0xeda5,	// (0x0003fac7) popup_call_poc_act_window_t2

0xedcd,	// (0x0003faef) popup_call_poc_act_window_t3_ParamLimits

0xedcd,	// (0x0003faef) popup_call_poc_act_window_t3

0xedf5,	// (0x0003fb17) popup_call_poc_act_window_t4_ParamLimits

0xedf5,	// (0x0003fb17) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00040248) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00040248) popup_call_poc_act_window_t

0x0b9b,	// (0x000318bd) bg_popup_call_poc_inact_pane_g6

0x0ba3,	// (0x000318c5) bg_popup_call_poc_inact_pane_g7

0x0bab,	// (0x000318cd) bg_popup_call_poc_inact_pane_g8

0xee07,	// (0x0003fb29) popup_call_poc_inact_window_g2

0x0bb3,	// (0x000318d5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x000402c7) bg_popup_call_poc_inact_pane_g

0xee0f,	// (0x0003fb31) popup_call_poc_inact_window_t1_ParamLimits

0xee0f,	// (0x0003fb31) popup_call_poc_inact_window_t1

0xee24,	// (0x0003fb46) popup_call_poc_inact_window_t2_ParamLimits

0xee24,	// (0x0003fb46) popup_call_poc_inact_window_t2

0xee39,	// (0x0003fb5b) popup_call_poc_inact_window_t3_ParamLimits

0xee39,	// (0x0003fb5b) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00040251) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00040251) popup_call_poc_inact_window_t

0x0d6b,	// (0x00031a8d) context_pane_ParamLimits

0x9026,	// (0x00039d48) signal_pane_ParamLimits

0xea04,	// (0x0003f726) main_call2_pane

0x0d59,	// (0x00031a7b) popup_phob_thumbnail2_window_ParamLimits

0x0d59,	// (0x00031a7b) popup_phob_thumbnail2_window

0x86f7,	// (0x00039419) aid_hotspot_pointer_arrow_pane

0x86ff,	// (0x00039421) aid_hotspot_pointer_hand_pane

0x8d58,	// (0x00039a7a) phob_pre_status_pane_g5

0x6c60,	// (0x00037982) cams_zoom_pane_ParamLimits

0x6c6c,	// (0x0003798e) image_vga_pane_ParamLimits

0x6c7b,	// (0x0003799d) main_camera_pane_g1_ParamLimits

0x6c89,	// (0x000379ab) main_camera_pane_g2_ParamLimits

0x6c95,	// (0x000379b7) main_camera_pane_g3_ParamLimits

0x6ca1,	// (0x000379c3) main_camera_pane_g4_ParamLimits

0x6cad,	// (0x000379cf) main_camera_pane_g5_ParamLimits

0x6cb9,	// (0x000379db) main_camera_pane_g6_ParamLimits

0x6cc5,	// (0x000379e7) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0003ff50) main_camera_pane_g_ParamLimits

0x6cd1,	// (0x000379f3) main_camera_pane_t1_ParamLimits

0x6ce3,	// (0x00037a05) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0003ff61) main_camera_pane_t_ParamLimits

0xde4e,	// (0x0003eb70) bg_popup_preview_window_pane_cp01_ParamLimits

0xde4e,	// (0x0003eb70) bg_popup_preview_window_pane_cp01

0xee4e,	// (0x0003fb70) popup_phob_thumbnail2_window_g1_ParamLimits

0xee4e,	// (0x0003fb70) popup_phob_thumbnail2_window_g1

0xdbf3,	// (0x0003e915) call2_cli_visual_pane

0x8a52,	// (0x00039774) popup_call2_audio_conf_window_ParamLimits

0x8a52,	// (0x00039774) popup_call2_audio_conf_window

0x8a67,	// (0x00039789) popup_call2_audio_first_window_ParamLimits

0x8a67,	// (0x00039789) popup_call2_audio_first_window

0x8b05,	// (0x00039827) popup_call2_audio_in_window_ParamLimits

0x8b05,	// (0x00039827) popup_call2_audio_in_window

0x8b47,	// (0x00039869) popup_call2_audio_out_window_ParamLimits

0x8b47,	// (0x00039869) popup_call2_audio_out_window

0x8ba9,	// (0x000398cb) popup_call2_audio_second_window_ParamLimits

0x8ba9,	// (0x000398cb) popup_call2_audio_second_window

0x8c07,	// (0x00039929) popup_call2_audio_wait_window_ParamLimits

0x8c07,	// (0x00039929) popup_call2_audio_wait_window

0xdbf3,	// (0x0003e915) bg_popup_call2_act_pane_cp03

0xde30,	// (0x0003eb52) list_conf_pane_cp

0xee5a,	// (0x0003fb7c) popup_call2_audio_conf_window_t1

0xe7f5,	// (0x0003f517) list_single_graphic_popup_conf2_pane_ParamLimits

0xe7f5,	// (0x0003f517) list_single_graphic_popup_conf2_pane

0xe808,	// (0x0003f52a) list_highlight_pane_cp04

0xee68,	// (0x0003fb8a) list_single_graphic_popup_conf2_pane_g1

0xe819,	// (0x0003f53b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00040258) list_single_graphic_popup_conf2_pane_g

0xee72,	// (0x0003fb94) list_single_graphic_popup_conf2_pane_t1

0xee80,	// (0x0003fba2) bg_popup_call2_act_pane_cp01_ParamLimits

0xee80,	// (0x0003fba2) bg_popup_call2_act_pane_cp01

0xef0a,	// (0x0003fc2c) call_type_pane_cp05_ParamLimits

0xef0a,	// (0x0003fc2c) call_type_pane_cp05

0xef5e,	// (0x0003fc80) popup_call2_audio_second_window_g1_ParamLimits

0xef5e,	// (0x0003fc80) popup_call2_audio_second_window_g1

0xefb2,	// (0x0003fcd4) popup_call2_audio_second_window_g2_ParamLimits

0xefb2,	// (0x0003fcd4) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0004025d) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0004025d) popup_call2_audio_second_window_g

0xf017,	// (0x0003fd39) popup_call2_audio_second_window_t1_ParamLimits

0xf017,	// (0x0003fd39) popup_call2_audio_second_window_t1

0x0000,	// (0x00030d22) popup_call2_audio_second_window_t2_ParamLimits

0x0000,	// (0x00030d22) popup_call2_audio_second_window_t2

0x0053,	// (0x00030d75) popup_call2_audio_second_window_t3_ParamLimits

0x0053,	// (0x00030d75) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00040264) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00040264) popup_call2_audio_second_window_t

0xdbf3,	// (0x0003e915) bg_popup_call2_in_pane_cp02

0xdbfd,	// (0x0003e91f) call_type_pane_cp04

0xdc05,	// (0x0003e927) popup_call2_audio_wait_window_g1

0xdc0d,	// (0x0003e92f) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0003fe3d) popup_call2_audio_wait_window_g

0xdc15,	// (0x0003e937) popup_call2_audio_wait_window_t3

0x0146,	// (0x00030e68) bg_popup_call2_act_pane_ParamLimits

0x0146,	// (0x00030e68) bg_popup_call2_act_pane

0x0206,	// (0x00030f28) call_type_pane_cp03_ParamLimits

0x0206,	// (0x00030f28) call_type_pane_cp03

0x026a,	// (0x00030f8c) popup_call2_audio_first_window_g1_ParamLimits

0x026a,	// (0x00030f8c) popup_call2_audio_first_window_g1

0x02da,	// (0x00030ffc) popup_call2_audio_first_window_g2_ParamLimits

0x02da,	// (0x00030ffc) popup_call2_audio_first_window_g2

0xe721,	// (0x0003f443) popup_call2_audio_first_window_g3_ParamLimits

0xe721,	// (0x0003f443) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0004026d) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0004026d) popup_call2_audio_first_window_g

0x03b8,	// (0x000310da) popup_call2_audio_first_window_t1_ParamLimits

0x03b8,	// (0x000310da) popup_call2_audio_first_window_t1

0x04bb,	// (0x000311dd) popup_call2_audio_first_window_t4_ParamLimits

0x04bb,	// (0x000311dd) popup_call2_audio_first_window_t4

0x059e,	// (0x000312c0) popup_call2_audio_first_window_t5_ParamLimits

0x059e,	// (0x000312c0) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00040278) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00040278) popup_call2_audio_first_window_t

0xde46,	// (0x0003eb68) bg_popup_call2_act_pane_g1

0x0c0b,	// (0x0003192d) popup_cale_lunar_info_window_t1

0x0c19,	// (0x0003193b) popup_cale_lunar_info_window_t2

0x0c27,	// (0x00031949) popup_cale_lunar_info_window_t3

0xdbf3,	// (0x0003e915) bg_popup_call2_bubble_pane

0x069f,	// (0x000313c1) bg_popup_call2_in_pane_cp01_ParamLimits

0x069f,	// (0x000313c1) bg_popup_call2_in_pane_cp01

0xd8cf,	// (0x0003e5f1) call_type_pane_cp02

0x06e7,	// (0x00031409) popup_call2_audio_out_window_g1_ParamLimits

0x06e7,	// (0x00031409) popup_call2_audio_out_window_g1

0x0713,	// (0x00031435) popup_call2_audio_out_window_g2_ParamLimits

0x0713,	// (0x00031435) popup_call2_audio_out_window_g2

0x073b,	// (0x0003145d) popup_call2_audio_out_window_g3_ParamLimits

0x073b,	// (0x0003145d) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00040281) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00040281) popup_call2_audio_out_window_g

0x0776,	// (0x00031498) popup_call2_audio_out_window_t1_ParamLimits

0x0776,	// (0x00031498) popup_call2_audio_out_window_t1

0x07d5,	// (0x000314f7) popup_call2_audio_out_window_t2_ParamLimits

0x07d5,	// (0x000314f7) popup_call2_audio_out_window_t2

0x0829,	// (0x0003154b) popup_call2_audio_out_window_t3_ParamLimits

0x0829,	// (0x0003154b) popup_call2_audio_out_window_t3

0x083f,	// (0x00031561) popup_call2_audio_out_window_t4_ParamLimits

0x083f,	// (0x00031561) popup_call2_audio_out_window_t4

0x0855,	// (0x00031577) popup_call2_audio_out_window_t5_ParamLimits

0x0855,	// (0x00031577) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0004028a) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0004028a) popup_call2_audio_out_window_t

0x08b9,	// (0x000315db) bg_popup_call2_in_pane_ParamLimits

0x08b9,	// (0x000315db) bg_popup_call2_in_pane

0x0915,	// (0x00031637) popup_call2_audio_in_window_g1_ParamLimits

0x0915,	// (0x00031637) popup_call2_audio_in_window_g1

0x094d,	// (0x0003166f) popup_call2_audio_in_window_g2_ParamLimits

0x094d,	// (0x0003166f) popup_call2_audio_in_window_g2

0x0985,	// (0x000316a7) popup_call2_audio_in_window_g3_ParamLimits

0x0985,	// (0x000316a7) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00040297) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00040297) popup_call2_audio_in_window_g

0x09dd,	// (0x000316ff) popup_call2_audio_in_window_t1_ParamLimits

0x09dd,	// (0x000316ff) popup_call2_audio_in_window_t1

0x0a5d,	// (0x0003177f) popup_call2_audio_in_window_t2_ParamLimits

0x0a5d,	// (0x0003177f) popup_call2_audio_in_window_t2

0x0add,	// (0x000317ff) popup_call2_audio_in_window_t3_ParamLimits

0x0add,	// (0x000317ff) popup_call2_audio_in_window_t3

0x0af7,	// (0x00031819) popup_call2_audio_in_window_t4_ParamLimits

0x0af7,	// (0x00031819) popup_call2_audio_in_window_t4

0x0b09,	// (0x0003182b) popup_call2_audio_in_window_t5_ParamLimits

0x0b09,	// (0x0003182b) popup_call2_audio_in_window_t5

0x0b1e,	// (0x00031840) popup_call2_audio_in_window_t6_ParamLimits

0x0b1e,	// (0x00031840) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x000402a0) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x000402a0) popup_call2_audio_in_window_t

0xde46,	// (0x0003eb68) bg_popup_call2_in_pane_g1

0x0c35,	// (0x00031957) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00040308) popup_cale_lunar_info_window_t

0xde4e,	// (0x0003eb70) bg_popup_call2_rect_pane_ParamLimits

0xde4e,	// (0x0003eb70) bg_popup_call2_rect_pane

0xdbf3,	// (0x0003e915) call2_cli_visual_graphic_pane

0xdbf3,	// (0x0003e915) call2_cli_visual_text_pane

0x90cc,	// (0x00039dee) smil_status_volume_pane_g3

0x0002,

0xdf7a,	// (0x0003ec9c) call2_cli_visual_graphic_pane_g1

0xdf7a,	// (0x0003ec9c) call2_cli_visual_graphic_pane_g2

0xdf7a,	// (0x0003ec9c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x000402ad) call2_cli_visual_graphic_pane_g

0x0b33,	// (0x00031855) bg_popup_call2_rect_pane_g1

0xe006,	// (0x0003ed28) bg_popup_call2_rect_pane_g2

0x0b3b,	// (0x0003185d) bg_popup_call2_rect_pane_g3

0x0b43,	// (0x00031865) bg_popup_call2_rect_pane_g4

0x0b4b,	// (0x0003186d) bg_popup_call2_rect_pane_g5

0x0b53,	// (0x00031875) bg_popup_call2_rect_pane_g6

0x0b5b,	// (0x0003187d) bg_popup_call2_rect_pane_g7

0x0b63,	// (0x00031885) bg_popup_call2_rect_pane_g8

0x0b6b,	// (0x0003188d) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x000402b4) bg_popup_call2_rect_pane_g

0x0b73,	// (0x00031895) bg_popup_call2_bubble_pane_g1

0x0b7b,	// (0x0003189d) bg_popup_call2_bubble_pane_g2

0x0b83,	// (0x000318a5) bg_popup_call2_bubble_pane_g3

0x0b8b,	// (0x000318ad) bg_popup_call2_bubble_pane_g4

0x0b93,	// (0x000318b5) bg_popup_call2_bubble_pane_g5

0x0b9b,	// (0x000318bd) bg_popup_call2_bubble_pane_g6

0x0ba3,	// (0x000318c5) bg_popup_call2_bubble_pane_g7

0x0bab,	// (0x000318cd) bg_popup_call2_bubble_pane_g8

0x0bb3,	// (0x000318d5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x000402c7) bg_popup_call2_bubble_pane_g

0x67d9,	// (0x000374fb) aid_cale_week_size_cell_pane

0x6cf5,	// (0x00037a17) aid_cams_cif_uncrop_pane_ParamLimits

0x6cf5,	// (0x00037a17) aid_cams_cif_uncrop_pane

0x6e52,	// (0x00037b74) aid_cams_size_cell_ParamLimits

0x6e52,	// (0x00037b74) aid_cams_size_cell

0x6e5e,	// (0x00037b80) grid_cams_pane_ParamLimits

0x6e6c,	// (0x00037b8e) linegrid_cams_pane_ParamLimits

0x6f41,	// (0x00037c63) call_video_pane_t1

0x6f62,	// (0x00037c84) call_video_pane_t2

0x0001,

0xf292,	// (0x0003ffb4) call_video_pane_t

0x7499,	// (0x000381bb) aid_cale_month_size_cell_pane_ParamLimits

0x7499,	// (0x000381bb) aid_cale_month_size_cell_pane

0xf62f,	// (0x00040351) smil_status_volume_pane_g

0x90d9,	// (0x00039dfb) volume_smil_pane_ParamLimits

0x5f94,	// (0x00036cb6) aid_popup2_width_pane

0x66e4,	// (0x00037406) cell_qdial_pane_g4_ParamLimits

0x66e4,	// (0x00037406) cell_qdial_pane_g4

0x80bc,	// (0x00038dde) aid_blid_cardinal_pane_ParamLimits

0x80cc,	// (0x00038dee) aid_blid_destination_pane_ParamLimits

0x80cc,	// (0x00038dee) aid_blid_destination_pane

0xde4e,	// (0x0003eb70) bg_popup_call_poc_act_pane_ParamLimits

0xde4e,	// (0x0003eb70) bg_popup_call_poc_act_pane

0xde4e,	// (0x0003eb70) bg_popup_call_poc_inact_pane_ParamLimits

0xde4e,	// (0x0003eb70) bg_popup_call_poc_inact_pane

0x0bbb,	// (0x000318dd) bg_popup_call_poc_act_pane_g1

0x0bc3,	// (0x000318e5) bg_popup_call_poc_act_pane_g2

0x0bcb,	// (0x000318ed) bg_popup_call_poc_act_pane_g3

0x0b8b,	// (0x000318ad) bg_popup_call_poc_act_pane_g4

0x0b93,	// (0x000318b5) bg_popup_call_poc_act_pane_g5

0x0bd3,	// (0x000318f5) bg_popup_call_poc_act_pane_g6

0x0ba3,	// (0x000318c5) bg_popup_call_poc_act_pane_g7

0x0bdb,	// (0x000318fd) bg_popup_call_poc_act_pane_g8

0xdbf3,	// (0x0003e915) main_usb_pane

0x0d34,	// (0x00031a56) popup_cale_lunar_info_window

0x728d,	// (0x00037faf) im_reading_pane_t1_ParamLimits

0xe1c1,	// (0x0003eee3) list_im_pane_ParamLimits

0xe1d2,	// (0x0003eef4) scroll_pane_cp07_ParamLimits

0xdbf3,	// (0x0003e915) grid_highlight_pane_cp012

0xde4e,	// (0x0003eb70) mup_scale_pane_ParamLimits

0xe721,	// (0x0003f443) main_usb_pane_g1_ParamLimits

0xe721,	// (0x0003f443) main_usb_pane_g1

0x8c7b,	// (0x0003999d) main_usb_pane_g2_ParamLimits

0x8c7b,	// (0x0003999d) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x000402f1) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x000402f1) main_usb_pane_g

0x8c87,	// (0x000399a9) main_usb_pane_t1_ParamLimits

0x8c87,	// (0x000399a9) main_usb_pane_t1

0x8c99,	// (0x000399bb) main_usb_pane_t2_ParamLimits

0x8c99,	// (0x000399bb) main_usb_pane_t2

0x8cab,	// (0x000399cd) main_usb_pane_t3_ParamLimits

0x8cab,	// (0x000399cd) main_usb_pane_t3

0x8cbd,	// (0x000399df) main_usb_pane_t4_ParamLimits

0x8cbd,	// (0x000399df) main_usb_pane_t4

0x8ccf,	// (0x000399f1) main_usb_pane_t5_ParamLimits

0x8ccf,	// (0x000399f1) main_usb_pane_t5

0x8ce1,	// (0x00039a03) main_usb_pane_t6_ParamLimits

0x8ce1,	// (0x00039a03) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x000402f6) main_usb_pane_t_ParamLimits

0x8062,	// (0x00038d84) aid_text_placing

0x806e,	// (0x00038d90) main_location2_pane_t1_ParamLimits

0x8082,	// (0x00038da4) main_location2_pane_t2_ParamLimits

0x8096,	// (0x00038db8) main_location2_pane_t3_ParamLimits

0x80aa,	// (0x00038dcc) main_location2_pane_t4_ParamLimits

0x80aa,	// (0x00038dcc) main_location2_pane_t4

0xf3f3,	// (0x00040115) main_location2_pane_t_ParamLimits

0xde8a,	// (0x0003ebac) find_pinb_pane_g2_ParamLimits

0xde8a,	// (0x0003ebac) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0003fe63) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0003fe63) find_pinb_pane_g

0xde96,	// (0x0003ebb8) find_pinb_pane_t1_ParamLimits

0xdea8,	// (0x0003ebca) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0003fe68) find_pinb_pane_t_ParamLimits

0xdbf3,	// (0x0003e915) main_call3_pane

0x78a5,	// (0x000385c7) cale_month_day_heading_pane_t1_ParamLimits

0x7903,	// (0x00038625) cale_month_day_heading_pane_t2_ParamLimits

0x7968,	// (0x0003868a) cale_month_day_heading_pane_t3_ParamLimits

0x79cd,	// (0x000386ef) cale_month_day_heading_pane_t4_ParamLimits

0x7a32,	// (0x00038754) cale_month_day_heading_pane_t5_ParamLimits

0x7a97,	// (0x000387b9) cale_month_day_heading_pane_t6_ParamLimits

0x7afc,	// (0x0003881e) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0003ffec) cale_month_day_heading_pane_t_ParamLimits

0xe412,	// (0x0003f134) smil_status_volume_pane

0x883f,	// (0x00039561) postcard_address_pane_ParamLimits

0x883f,	// (0x00039561) postcard_address_pane

0x884b,	// (0x0003956d) postcard_message_pane_ParamLimits

0x884b,	// (0x0003956d) postcard_message_pane

0x8c46,	// (0x00039968) call2_cli_visual_pane_t1_ParamLimits

0x8c46,	// (0x00039968) call2_cli_visual_pane_t1

0x9230,	// (0x00039f52) postcard_message_pane_t1_ParamLimits

0x9230,	// (0x00039f52) postcard_message_pane_t1

0x9219,	// (0x00039f3b) postcard_address_pane_t1_ParamLimits

0x9219,	// (0x00039f3b) postcard_address_pane_t1

0x920a,	// (0x00039f2c) popup_call3_audio_in_window_ParamLimits

0x920a,	// (0x00039f2c) popup_call3_audio_in_window

0x90ee,	// (0x00039e10) bg_popup_call3_in_pane_ParamLimits

0x90ee,	// (0x00039e10) bg_popup_call3_in_pane

0x9150,	// (0x00039e72) popup_call3_audio_in_window_g1_ParamLimits

0x9150,	// (0x00039e72) popup_call3_audio_in_window_g1

0x9168,	// (0x00039e8a) popup_call3_audio_in_window_g2_ParamLimits

0x9168,	// (0x00039e8a) popup_call3_audio_in_window_g2

0x9180,	// (0x00039ea2) popup_call3_audio_in_window_g3_ParamLimits

0x9180,	// (0x00039ea2) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00040358) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00040358) popup_call3_audio_in_window_g

0x91a8,	// (0x00039eca) popup_call3_audio_in_window_t1_ParamLimits

0x91a8,	// (0x00039eca) popup_call3_audio_in_window_t1

0x91d0,	// (0x00039ef2) popup_call3_audio_in_window_t2_ParamLimits

0x91d0,	// (0x00039ef2) popup_call3_audio_in_window_t2

0x91f8,	// (0x00039f1a) popup_call3_audio_in_window_t3_ParamLimits

0x91f8,	// (0x00039f1a) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00040361) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00040361) popup_call3_audio_in_window_t

0xea04,	// (0x0003f726) bg_popup_call3_rect_pane

0x0b33,	// (0x00031855) bg_popup_call3_rect_pane_g1

0xe006,	// (0x0003ed28) bg_popup_call3_rect_pane_g2

0x0b3b,	// (0x0003185d) bg_popup_call3_rect_pane_g3

0x0b43,	// (0x00031865) bg_popup_call3_rect_pane_g4

0x0b4b,	// (0x0003186d) bg_popup_call3_rect_pane_g5

0x0b53,	// (0x00031875) bg_popup_call3_rect_pane_g6

0x0b5b,	// (0x0003187d) bg_popup_call3_rect_pane_g7

0x84bc,	// (0x000391de) mup_visualizer_osc_pane

0xeac3,	// (0x0003f7e5) mup_visualizer_spec_pane

0x910e,	// (0x00039e30) call3_video_qcif_pane_ParamLimits

0x910e,	// (0x00039e30) call3_video_qcif_pane

0x9120,	// (0x00039e42) call3_video_qcif_uncrop_pane_ParamLimits

0x9120,	// (0x00039e42) call3_video_qcif_uncrop_pane

0x912e,	// (0x00039e50) call3_video_subqcif_pane_ParamLimits

0x912e,	// (0x00039e50) call3_video_subqcif_pane

0x9140,	// (0x00039e62) call3_video_subqcif_uncrop_pane_ParamLimits

0x9140,	// (0x00039e62) call3_video_subqcif_uncrop_pane

0x9198,	// (0x00039eba) popup_call3_audio_in_window_g4_ParamLimits

0x9198,	// (0x00039eba) popup_call3_audio_in_window_g4

0x90bb,	// (0x00039ddd) mup_spec_half_pane

0x90c4,	// (0x00039de6) mup_spec_half_pane_cp

0x0dcb,	// (0x00031aed) mup_osc_middle_pane

0x0dd4,	// (0x00031af6) mup_visualizer_osc_pane_g1

0x909c,	// (0x00039dbe) mup_spec_bar_pane_ParamLimits

0x909c,	// (0x00039dbe) mup_spec_bar_pane

0x0db8,	// (0x00031ada) mup_spec_bar_pane_g1

0x0dc2,	// (0x00031ae4) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0004034c) mup_spec_bar_pane_g

0x67d9,	// (0x000374fb) aid_cale_week_size_cell_pane_ParamLimits

0x67ec,	// (0x0003750e) bg_cale_heading_pane_ParamLimits

0xe03a,	// (0x0003ed5c) bg_cale_pane_cp01_ParamLimits

0x6808,	// (0x0003752a) cale_week_corner_pane_ParamLimits

0x681e,	// (0x00037540) cale_week_day_heading_pane_ParamLimits

0x683a,	// (0x0003755c) cale_week_scroll_pane_g1_ParamLimits

0x6853,	// (0x00037575) cale_week_scroll_pane_g2_ParamLimits

0x6864,	// (0x00037586) cale_week_scroll_pane_g3_ParamLimits

0x6875,	// (0x00037597) cale_week_scroll_pane_g4_ParamLimits

0x6886,	// (0x000375a8) cale_week_scroll_pane_g5_ParamLimits

0x6897,	// (0x000375b9) cale_week_scroll_pane_g6_ParamLimits

0x68a8,	// (0x000375ca) cale_week_scroll_pane_g7_ParamLimits

0x68bb,	// (0x000375dd) cale_week_scroll_pane_g8_ParamLimits

0x68ce,	// (0x000375f0) cale_week_scroll_pane_g9_ParamLimits

0x68df,	// (0x00037601) cale_week_scroll_pane_g10_ParamLimits

0x68f0,	// (0x00037612) cale_week_scroll_pane_g11_ParamLimits

0x6901,	// (0x00037623) cale_week_scroll_pane_g12_ParamLimits

0x6912,	// (0x00037634) cale_week_scroll_pane_g13_ParamLimits

0x692b,	// (0x0003764d) cale_week_scroll_pane_g14_ParamLimits

0x6944,	// (0x00037666) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0003fef4) cale_week_scroll_pane_g_ParamLimits

0x695d,	// (0x0003767f) cale_week_time_pane_ParamLimits

0x6970,	// (0x00037692) grid_cale_week_pane_ParamLimits

0xe053,	// (0x0003ed75) listscroll_cale_week_pane_t1

0x698d,	// (0x000376af) scroll_pane_cp08_ParamLimits

0x74ea,	// (0x0003820c) cale_month_corner_pane_ParamLimits

0xe3e8,	// (0x0003f10a) cale_month_pane_t1

0x7854,	// (0x00038576) cale_month_week_pane_ParamLimits

0xe721,	// (0x0003f443) popup_call_status_window_g1_ParamLimits

0x7e85,	// (0x00038ba7) popup_call_status_window_g2_ParamLimits

0x7e91,	// (0x00038bb3) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0004009c) popup_call_status_window_g_ParamLimits

0xe788,	// (0x0003f4aa) aid_call2_pane

0x503a,	// (0x00035d5c) msg_header_pane_g1

0x883f,	// (0x00039561) postcard_address2_pane_ParamLimits

0x883f,	// (0x00039561) postcard_address2_pane

0x884b,	// (0x0003956d) postcard_message2_pane_ParamLimits

0x884b,	// (0x0003956d) postcard_message2_pane

0x9034,	// (0x00039d56) message2_row_pane_ParamLimits

0x9034,	// (0x00039d56) message2_row_pane

0x904f,	// (0x00039d71) address2_row_pane_ParamLimits

0x904f,	// (0x00039d71) address2_row_pane

0x0d86,	// (0x00031aa8) postcard_message2_row_pane_g1

0x0d8e,	// (0x00031ab0) postcard_message2_row_pane_t1

0x0d86,	// (0x00031aa8) address2_row_pane_g1

0x0d8e,	// (0x00031ab0) address2_row_pane_t1

0x6bc1,	// (0x000378e3) aid_size_cell_vorec

0xdbf3,	// (0x0003e915) main_rss_pane

0x9062,	// (0x00039d84) rss_list_single_pane_ParamLimits

0x9062,	// (0x00039d84) rss_list_single_pane

0x0d9c,	// (0x00031abe) rss_list_single_pane_t1

0x0daa,	// (0x00031acc) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00040347) rss_list_single_pane_t

0xdbf3,	// (0x0003e915) main_camera2_pane

0xdbf3,	// (0x0003e915) main_video2_pane

0x9294,	// (0x00039fb6) cams_zoom_pane_cp2_ParamLimits

0x9294,	// (0x00039fb6) cams_zoom_pane_cp2

0x92a0,	// (0x00039fc2) image2_vga_pane_ParamLimits

0x92a0,	// (0x00039fc2) image2_vga_pane

0x92af,	// (0x00039fd1) main_camera2_pane_g1_ParamLimits

0x92af,	// (0x00039fd1) main_camera2_pane_g1

0x92bb,	// (0x00039fdd) main_camera2_pane_g2_ParamLimits

0x92bb,	// (0x00039fdd) main_camera2_pane_g2

0x92c7,	// (0x00039fe9) main_camera2_pane_g3_ParamLimits

0x92c7,	// (0x00039fe9) main_camera2_pane_g3

0x92d3,	// (0x00039ff5) main_camera2_pane_g4_ParamLimits

0x92d3,	// (0x00039ff5) main_camera2_pane_g4

0x92df,	// (0x0003a001) main_camera2_pane_g5_ParamLimits

0x92df,	// (0x0003a001) main_camera2_pane_g5

0x92eb,	// (0x0003a00d) main_camera2_pane_g6_ParamLimits

0x92eb,	// (0x0003a00d) main_camera2_pane_g6

0x92f7,	// (0x0003a019) main_camera2_pane_g7_ParamLimits

0x92f7,	// (0x0003a019) main_camera2_pane_g7

0x9303,	// (0x0003a025) main_camera2_pane_g8_ParamLimits

0x9303,	// (0x0003a025) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00040368) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00040368) main_camera2_pane_g

0x931b,	// (0x0003a03d) main_camera2_pane_t1_ParamLimits

0x931b,	// (0x0003a03d) main_camera2_pane_t1

0x932d,	// (0x0003a04f) main_camera2_pane_t2_ParamLimits

0x932d,	// (0x0003a04f) main_camera2_pane_t2

0x933f,	// (0x0003a061) main_camera2_pane_t3_ParamLimits

0x933f,	// (0x0003a061) main_camera2_pane_t3

0x9351,	// (0x0003a073) main_camera2_pane_t4_ParamLimits

0x9351,	// (0x0003a073) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0004037b) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0004037b) main_camera2_pane_t

0x93b3,	// (0x0003a0d5) cams_zoom_pane_cp4_ParamLimits

0x93b3,	// (0x0003a0d5) cams_zoom_pane_cp4

0x93c3,	// (0x0003a0e5) image2_cif_pane_ParamLimits

0x93c3,	// (0x0003a0e5) image2_cif_pane

0x93d8,	// (0x0003a0fa) image2_subqcif_pane_ParamLimits

0x93d8,	// (0x0003a0fa) image2_subqcif_pane

0x93e7,	// (0x0003a109) main_video2_pane_g1_ParamLimits

0x93e7,	// (0x0003a109) main_video2_pane_g1

0x93f9,	// (0x0003a11b) main_video2_pane_g2_ParamLimits

0x93f9,	// (0x0003a11b) main_video2_pane_g2

0x9409,	// (0x0003a12b) main_video2_pane_g3_ParamLimits

0x9409,	// (0x0003a12b) main_video2_pane_g3

0x9419,	// (0x0003a13b) main_video2_pane_g4_ParamLimits

0x9419,	// (0x0003a13b) main_video2_pane_g4

0x9429,	// (0x0003a14b) main_video2_pane_g5_ParamLimits

0x9429,	// (0x0003a14b) main_video2_pane_g5

0x9439,	// (0x0003a15b) main_video2_pane_g6_ParamLimits

0x9439,	// (0x0003a15b) main_video2_pane_g6

0x0005,

0xf668,	// (0x0004038a) main_video2_pane_g_ParamLimits

0xf668,	// (0x0004038a) main_video2_pane_g

0x944b,	// (0x0003a16d) main_video2_pane_t1_ParamLimits

0x944b,	// (0x0003a16d) main_video2_pane_t1

0x9465,	// (0x0003a187) main_video2_pane_t2_ParamLimits

0x9465,	// (0x0003a187) main_video2_pane_t2

0x948b,	// (0x0003a1ad) main_video2_pane_t3_ParamLimits

0x948b,	// (0x0003a1ad) main_video2_pane_t3

0x0002,

0xf675,	// (0x00040397) main_video2_pane_t_ParamLimits

0xf675,	// (0x00040397) main_video2_pane_t

0x8d98,	// (0x00039aba) call_muted_g2

0x0001,

0xf617,	// (0x00040339) call_muted_g

0xdbf3,	// (0x0003e915) main_mup2_pane

0x0e8b,	// (0x00031bad) main_mup2_pane_g1_ParamLimits

0x0e8b,	// (0x00031bad) main_mup2_pane_g1

0x94b1,	// (0x0003a1d3) main_mup2_pane_g2_ParamLimits

0x94b1,	// (0x0003a1d3) main_mup2_pane_g2

0x9733,	// (0x0003a455) main_mup_pane_g13_cp1

0x973b,	// (0x0003a45d) mup_volume_pane_cp1

0x94d1,	// (0x0003a1f3) main_mup2_pane_g4_ParamLimits

0x94d1,	// (0x0003a1f3) main_mup2_pane_g4

0x94e6,	// (0x0003a208) main_mup2_pane_g5_ParamLimits

0x94e6,	// (0x0003a208) main_mup2_pane_g5

0x94fb,	// (0x0003a21d) main_mup2_pane_g6_ParamLimits

0x94fb,	// (0x0003a21d) main_mup2_pane_g6

0x9510,	// (0x0003a232) main_mup2_pane_g7_ParamLimits

0x9510,	// (0x0003a232) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0004039e) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0004039e) main_mup2_pane_g

0x952c,	// (0x0003a24e) main_mup2_pane_t1_ParamLimits

0x952c,	// (0x0003a24e) main_mup2_pane_t1

0x9543,	// (0x0003a265) main_mup2_pane_t2_ParamLimits

0x9543,	// (0x0003a265) main_mup2_pane_t2

0x955a,	// (0x0003a27c) main_mup2_pane_t3_ParamLimits

0x955a,	// (0x0003a27c) main_mup2_pane_t3

0x9571,	// (0x0003a293) main_mup2_pane_t4_ParamLimits

0x9571,	// (0x0003a293) main_mup2_pane_t4

0x958b,	// (0x0003a2ad) main_mup2_pane_t5_ParamLimits

0x958b,	// (0x0003a2ad) main_mup2_pane_t5

0x95a5,	// (0x0003a2c7) main_mup2_pane_t6_ParamLimits

0x95a5,	// (0x0003a2c7) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x000403ad) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x000403ad) main_mup2_pane_t

0x95dd,	// (0x0003a2ff) mup2_visualizer_pane_ParamLimits

0x95dd,	// (0x0003a2ff) mup2_visualizer_pane

0x9613,	// (0x0003a335) mup_progress_pane_cp_ParamLimits

0x9613,	// (0x0003a335) mup_progress_pane_cp

0x971e,	// (0x0003a440) mup_volume_pane_cp_ParamLimits

0x971e,	// (0x0003a440) mup_volume_pane_cp

0x962a,	// (0x0003a34c) mup2_visualizer_pane_g1_ParamLimits

0x962a,	// (0x0003a34c) mup2_visualizer_pane_g1

0x0e5d,	// (0x00031b7f) mup2_visualizer_pane_g2_ParamLimits

0x0e5d,	// (0x00031b7f) mup2_visualizer_pane_g2

0x963f,	// (0x0003a361) mup2_visualizer_pane_g3_ParamLimits

0x963f,	// (0x0003a361) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x000403ba) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x000403ba) mup2_visualizer_pane_g

0xecea,	// (0x0003fa0c) aid_size_cell_fmradio

0x8eae,	// (0x00039bd0) aid_height_parent_landcape

0xe250,	// (0x0003ef72) wml_content_pane_cp

0xe258,	// (0x0003ef7a) wml_tabs_pane

0xe261,	// (0x0003ef83) popup_wml_miniature_window

0xe269,	// (0x0003ef8b) scroll_pane_cp021

0xe27d,	// (0x0003ef9f) wml_content_pane_comp8

0xdbf3,	// (0x0003e915) bg_popup_sub_pane_cp05

0x0e7b,	// (0x00031b9d) popup_wml_miniature_window_g1

0x0e83,	// (0x00031ba5) wml_miniature_view_pane

0x964d,	// (0x0003a36f) aid_size_wml_view

0x9655,	// (0x0003a377) wml_miniature_view_pane_g1

0x965e,	// (0x0003a380) wml_miniature_view_pane_g2

0x9667,	// (0x0003a389) wml_miniature_view_pane_g3

0x966f,	// (0x0003a391) wml_miniature_view_pane_g4

0x9677,	// (0x0003a399) wml_miniature_view_pane_g5

0x967f,	// (0x0003a3a1) wml_miniature_view_pane_g6

0x9687,	// (0x0003a3a9) wml_miniature_view_pane_g7

0x968f,	// (0x0003a3b1) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x000403c1) wml_miniature_view_pane_g

0x0e8b,	// (0x00031bad) background_graphic_ParamLimits

0x0e8b,	// (0x00031bad) background_graphic

0x0e97,	// (0x00031bb9) wml_tabs_2_pane

0x0ea0,	// (0x00031bc2) wml_tabs_3_pane_ParamLimits

0x0ea0,	// (0x00031bc2) wml_tabs_3_pane

0x0eb2,	// (0x00031bd4) wml_tabs_4_pane_ParamLimits

0x0eb2,	// (0x00031bd4) wml_tabs_4_pane

0x0ec8,	// (0x00031bea) wml_tabs_5_pane_ParamLimits

0x0ec8,	// (0x00031bea) wml_tabs_5_pane

0x0ee2,	// (0x00031c04) wml_tabs_pane_g2_ParamLimits

0x0ee2,	// (0x00031c04) wml_tabs_pane_g2

0x0ef6,	// (0x00031c18) wml_tabs_pane_g3_ParamLimits

0x0ef6,	// (0x00031c18) wml_tabs_pane_g3

0x9697,	// (0x0003a3b9) wml_tabs_2_active_pane_ParamLimits

0x9697,	// (0x0003a3b9) wml_tabs_2_active_pane

0x96a7,	// (0x0003a3c9) wml_tabs_2_passive_pane_ParamLimits

0x96a7,	// (0x0003a3c9) wml_tabs_2_passive_pane

0x96b7,	// (0x0003a3d9) wml_tabs_3_active_pane_cp_ParamLimits

0x96b7,	// (0x0003a3d9) wml_tabs_3_active_pane_cp

0x96c8,	// (0x0003a3ea) wml_tabs_3_passive_pane_ParamLimits

0x96c8,	// (0x0003a3ea) wml_tabs_3_passive_pane

0x96d9,	// (0x0003a3fb) wml_tabs_3_passive_pane_cp_ParamLimits

0x96d9,	// (0x0003a3fb) wml_tabs_3_passive_pane_cp

0x96ea,	// (0x0003a40c) tabs_4_active_pane

0x96f2,	// (0x0003a414) tabs_4_passive_pane

0x96fa,	// (0x0003a41c) tabs_4_passive_pane_cp

0x9702,	// (0x0003a424) tabs_4_passive_pane_cp2

0x8c73,	// (0x00039995) aid_height_text

0x8489,	// (0x000391ab) mup_volume_cont_pane_ParamLimits

0x8489,	// (0x000391ab) mup_volume_cont_pane

0x633b,	// (0x0003705d) aid_size_cell_pinb

0x6345,	// (0x00037067) aid_size_list_pinb

0x95fc,	// (0x0003a31e) mup2_volume_cont_pane_ParamLimits

0x95fc,	// (0x0003a31e) mup2_volume_cont_pane

0x970a,	// (0x0003a42c) mup2_volume_cont_pane_g1_ParamLimits

0x970a,	// (0x0003a42c) mup2_volume_cont_pane_g1

0x5fa0,	// (0x00036cc2) aid_size_cell_touch_ParamLimits

0x5fa0,	// (0x00036cc2) aid_size_cell_touch

0x6221,	// (0x00036f43) touch_pane_ParamLimits

0x6221,	// (0x00036f43) touch_pane

0x5f82,	// (0x00036ca4) main_rss2_pane

0x0f4c,	// (0x00031c6e) listscroll_rss2_pane

0x0f55,	// (0x00031c77) rss2_navigation_pane

0x0f5d,	// (0x00031c7f) list_rss2_pane

0xe8bb,	// (0x0003f5dd) scroll_pane_cp22

0x0f65,	// (0x00031c87) rss2_navigation_pane_g1

0x0f6e,	// (0x00031c90) rss2_navigation_pane_g2

0x0f76,	// (0x00031c98) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x000403d2) rss2_navigation_pane_g

0x0f7e,	// (0x00031ca0) rss2_navigation_pane_t1

0x9743,	// (0x0003a465) rss2_list_single_pane_ParamLimits

0x9743,	// (0x0003a465) rss2_list_single_pane

0x0f8c,	// (0x00031cae) rss2_list_single_pane_t2

0x0f9a,	// (0x00031cbc) rss2_list_single_pane_t3_ParamLimits

0x0f9a,	// (0x00031cbc) rss2_list_single_pane_t3

0x0fb7,	// (0x00031cd9) rss2_list_single_pane_t4

0x7d00,	// (0x00038a22) smil_status_pane_g1

0xf0d2,	// (0x0003fdf4) main_image2_pane_ParamLimits

0xf0d2,	// (0x0003fdf4) main_image2_pane

0x930f,	// (0x0003a031) main_camera2_pane_g9_ParamLimits

0x930f,	// (0x0003a031) main_camera2_pane_g9

0x9363,	// (0x0003a085) main_camera2_pane_t5_ParamLimits

0x9363,	// (0x0003a085) main_camera2_pane_t5

0x9375,	// (0x0003a097) main_camera2_pane_t6_ParamLimits

0x9375,	// (0x0003a097) main_camera2_pane_t6

0x9774,	// (0x0003a496) main_image2_pane_g1_ParamLimits

0x9774,	// (0x0003a496) main_image2_pane_g1

0x8a13,	// (0x00039735) smil2_video_pane_ParamLimits

0x8a13,	// (0x00039735) smil2_video_pane

0x4dd0,	// (0x00035af2) aid_zoom_text_primary_cp

0xd7d6,	// (0x0003e4f8) popup_preview_fixed_window

0xe1b9,	// (0x0003eedb) im_reading_pane_g1

0x9259,	// (0x00039f7b) cams2_bc_adjust_pane_cp_ParamLimits

0x9259,	// (0x00039f7b) cams2_bc_adjust_pane_cp

0x93a5,	// (0x0003a0c7) cams2_bc_adjust_pane_ParamLimits

0x93a5,	// (0x0003a0c7) cams2_bc_adjust_pane

0x9780,	// (0x0003a4a2) cams2_bc_adjust_pane_g1

0x9788,	// (0x0003a4aa) cams2_slider_pane

0x9791,	// (0x0003a4b3) cams2_slider_pane_g1

0x979a,	// (0x0003a4bc) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x000403d9) cams2_slider_pane_g

0x6436,	// (0x00037158) calc_display_pane_ParamLimits

0x6454,	// (0x00037176) calc_paper_pane_ParamLimits

0x6470,	// (0x00037192) grid_calc_pane_ParamLimits

0x7ef3,	// (0x00038c15) popup_clock_digital_window_t1_ParamLimits

0xec87,	// (0x0003f9a9) main_image_pane_t1

0x641c,	// (0x0003713e) aid_size_cell_calc_ParamLimits

0x641c,	// (0x0003713e) aid_size_cell_calc

0x8ee0,	// (0x00039c02) popup_blid_sat_info2_window_ParamLimits

0x8ee0,	// (0x00039c02) popup_blid_sat_info2_window

0x1001,	// (0x00031d23) aid_size_cell_blid

0x1009,	// (0x00031d2b) bg_popup_window_pane_cp07

0x102c,	// (0x00031d4e) grid_popup_blid_pane

0x1036,	// (0x00031d58) heading_pane_cp05_ParamLimits

0x1036,	// (0x00031d58) heading_pane_cp05

0x1100,	// (0x00031e22) cell_popup_blid_pane_ParamLimits

0x1100,	// (0x00031e22) cell_popup_blid_pane

0x1124,	// (0x00031e46) cell_popup_blid_pane_g1

0x112c,	// (0x00031e4e) cell_popup_blid_pane_t1

0x95c2,	// (0x0003a2e4) mup2_indicator_pane_ParamLimits

0x95c2,	// (0x0003a2e4) mup2_indicator_pane

0xea04,	// (0x0003f726) mup2_visualizer_osc_pane

0x0e69,	// (0x00031b8b) mup2_visualizer_spec_pane_ParamLimits

0x0e69,	// (0x00031b8b) mup2_visualizer_spec_pane

0x97b4,	// (0x0003a4d6) mup2_spec_half_pane

0x97bd,	// (0x0003a4df) mup2_spec_half_pane_cp

0x97c7,	// (0x0003a4e9) mup2_spec_bar_pane_ParamLimits

0x97c7,	// (0x0003a4e9) mup2_spec_bar_pane

0x0db8,	// (0x00031ada) mup2_spec_bar_pane_g1

0x0dc2,	// (0x00031ae4) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0004034c) mup2_spec_bar_pane_g

0x97e6,	// (0x0003a508) mup2_osc_middle_pane

0x0dd4,	// (0x00031af6) mup2_visualizer_osc_pane_g1

0xd800,	// (0x0003e522) popup_number_entry_window_t1_ParamLimits

0xd813,	// (0x0003e535) popup_number_entry_window_t2_ParamLimits

0xd825,	// (0x0003e547) popup_number_entry_window_t3_ParamLimits

0x6278,	// (0x00036f9a) popup_number_entry_window_t5_ParamLimits

0x6278,	// (0x00036f9a) popup_number_entry_window_t5

0xf0ec,	// (0x0003fe0e) popup_number_entry_window_t_ParamLimits

0xd837,	// (0x0003e559) text_title_cp2_ParamLimits

0x8707,	// (0x00039429) aid_hotspot_pointer_text2_pane

0x87a1,	// (0x000394c3) main_viewer_pane_g9_ParamLimits

0x87a1,	// (0x000394c3) main_viewer_pane_g9

0xe3e8,	// (0x0003f10a) cale_month_pane_t1_ParamLimits

0xe425,	// (0x0003f147) bg_cale_pane_ParamLimits

0xe43d,	// (0x0003f15f) list_cale_pane_ParamLimits

0xe053,	// (0x0003ed75) listscroll_cale_day_pane_t1

0xe44e,	// (0x0003f170) scroll_pane_cp09_ParamLimits

0x84c4,	// (0x000391e6) main_mup_eq_pane_t1_ParamLimits

0x84c4,	// (0x000391e6) main_mup_eq_pane_t1

0x84de,	// (0x00039200) main_mup_eq_pane_t2_ParamLimits

0x84de,	// (0x00039200) main_mup_eq_pane_t2

0x84f8,	// (0x0003921a) main_mup_eq_pane_t3_ParamLimits

0x84f8,	// (0x0003921a) main_mup_eq_pane_t3

0x8510,	// (0x00039232) main_mup_eq_pane_t4_ParamLimits

0x8510,	// (0x00039232) main_mup_eq_pane_t4

0x8528,	// (0x0003924a) main_mup_eq_pane_t5_ParamLimits

0x8528,	// (0x0003924a) main_mup_eq_pane_t5

0x8540,	// (0x00039262) main_mup_eq_pane_t6_ParamLimits

0x8540,	// (0x00039262) main_mup_eq_pane_t6

0x8554,	// (0x00039276) main_mup_eq_pane_t7_ParamLimits

0x8554,	// (0x00039276) main_mup_eq_pane_t7

0x8568,	// (0x0003928a) main_mup_eq_pane_t8_ParamLimits

0x8568,	// (0x0003928a) main_mup_eq_pane_t8

0x857e,	// (0x000392a0) main_mup_eq_pane_t9_ParamLimits

0x857e,	// (0x000392a0) main_mup_eq_pane_t9

0x8596,	// (0x000392b8) main_mup_eq_pane_t10_ParamLimits

0x8596,	// (0x000392b8) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0004019b) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0004019b) main_mup_eq_pane_t

0x8653,	// (0x00039375) mup_equalizer_pane_cp5_ParamLimits

0x8669,	// (0x0003938b) mup_equalizer_pane_cp6_ParamLimits

0x8681,	// (0x000393a3) mup_equalizer_pane_cp7_ParamLimits

0x5f82,	// (0x00036ca4) main_gallery_pane

0x0ddd,	// (0x00031aff) smil2_volume_pane

0x0df8,	// (0x00031b1a) smil_status_volume_pane_g1_ParamLimits

0x0de5,	// (0x00031b07) smil_status_volume_pane_g2_ParamLimits

0x90cc,	// (0x00039dee) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00040351) smil_status_volume_pane_g_ParamLimits

0x1009,	// (0x00031d2b) bg_popup_window_pane_cp07_ParamLimits

0x1017,	// (0x00031d39) blid_firmament_pane

0x97ef,	// (0x0003a511) aid_size_cell_gallery_ParamLimits

0x97ef,	// (0x0003a511) aid_size_cell_gallery

0x97fd,	// (0x0003a51f) grid_gallery_pane_ParamLimits

0x97fd,	// (0x0003a51f) grid_gallery_pane

0x980d,	// (0x0003a52f) cell_gallery_pane_ParamLimits

0x980d,	// (0x0003a52f) cell_gallery_pane

0x113a,	// (0x00031e5c) bg_cell_gallery_focus_pane_ParamLimits

0x113a,	// (0x00031e5c) bg_cell_gallery_focus_pane

0x114c,	// (0x00031e6e) cell_gallery_pane_g1_ParamLimits

0x114c,	// (0x00031e6e) cell_gallery_pane_g1

0x985b,	// (0x0003a57d) cell_gallery_pane_g2_ParamLimits

0x985b,	// (0x0003a57d) cell_gallery_pane_g2

0x9868,	// (0x0003a58a) cell_gallery_pane_g3_ParamLimits

0x9868,	// (0x0003a58a) cell_gallery_pane_g3

0x1158,	// (0x00031e7a) cell_gallery_pane_g4_ParamLimits

0x1158,	// (0x00031e7a) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x000403ff) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x000403ff) cell_gallery_pane_g

0x1164,	// (0x00031e86) bg_cell_gallery_focus_pane_g1

0x116c,	// (0x00031e8e) bg_cell_gallery_focus_pane_g2

0x1174,	// (0x00031e96) bg_cell_gallery_focus_pane_g3

0x117c,	// (0x00031e9e) bg_cell_gallery_focus_pane_g4

0x1184,	// (0x00031ea6) bg_cell_gallery_focus_pane_g5

0x118c,	// (0x00031eae) bg_cell_gallery_focus_pane_g6

0x1194,	// (0x00031eb6) bg_cell_gallery_focus_pane_g7

0x119c,	// (0x00031ebe) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00040408) bg_cell_gallery_focus_pane_g

0x11a4,	// (0x00031ec6) aid_firma_cardinal

0x11b8,	// (0x00031eda) blid_firmament_pane_t1

0x11cf,	// (0x00031ef1) blid_firmament_pane_t2

0x11e6,	// (0x00031f08) blid_firmament_pane_t3

0x11fd,	// (0x00031f1f) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00040419) blid_firmament_pane_t

0x1214,	// (0x00031f36) blid_sat_info_pane

0x1224,	// (0x00031f46) blid_sat_info_pane_g1

0x1224,	// (0x00031f46) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00040422) blid_sat_info_pane_g

0x122e,	// (0x00031f50) blid_sat_info_pane_t1

0x123c,	// (0x00031f5e) smil2_volume_content_pane

0x1245,	// (0x00031f67) smil2_volume_pane_g1

0x124d,	// (0x00031f6f) smil2_volume_content_pane_g1

0x1256,	// (0x00031f78) smil2_volume_content_pane_g2

0x125f,	// (0x00031f81) smil2_volume_content_pane_g3

0x1268,	// (0x00031f8a) smil2_volume_content_pane_g4

0x1271,	// (0x00031f93) smil2_volume_content_pane_g5

0x127a,	// (0x00031f9c) smil2_volume_content_pane_g6

0x1283,	// (0x00031fa5) smil2_volume_content_pane_g7

0x128c,	// (0x00031fae) smil2_volume_content_pane_g8

0x1295,	// (0x00031fb7) smil2_volume_content_pane_g9

0x129e,	// (0x00031fc0) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00040427) smil2_volume_content_pane_g

0x69f3,	// (0x00037715) cale_week_day_heading_pane_t1_ParamLimits

0x6a0c,	// (0x0003772e) cale_week_day_heading_pane_t2_ParamLimits

0x6a25,	// (0x00037747) cale_week_day_heading_pane_t3_ParamLimits

0x6a3e,	// (0x00037760) cale_week_day_heading_pane_t4_ParamLimits

0x6a57,	// (0x00037779) cale_week_day_heading_pane_t5_ParamLimits

0x6a70,	// (0x00037792) cale_week_day_heading_pane_t6_ParamLimits

0x6a89,	// (0x000377ab) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0003ff13) cale_week_day_heading_pane_t_ParamLimits

0xe065,	// (0x0003ed87) bg_cale_side_pane_ParamLimits

0x6aa2,	// (0x000377c4) cale_week_time_pane_t1_ParamLimits

0x6aba,	// (0x000377dc) cale_week_time_pane_t2_ParamLimits

0x6ad2,	// (0x000377f4) cale_week_time_pane_t3_ParamLimits

0x6aea,	// (0x0003780c) cale_week_time_pane_t4_ParamLimits

0x6b02,	// (0x00037824) cale_week_time_pane_t5_ParamLimits

0x6b1a,	// (0x0003783c) cale_week_time_pane_t6_ParamLimits

0x6b32,	// (0x00037854) cale_week_time_pane_t7_ParamLimits

0x6b52,	// (0x00037874) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0003ff22) cale_week_time_pane_t_ParamLimits

0x6b72,	// (0x00037894) cell_cale_week_pane_g2_ParamLimits

0xe065,	// (0x0003ed87) bg_cale_side_pane_cp01_ParamLimits

0x7b71,	// (0x00038893) cale_month_week_pane_t1_ParamLimits

0x7b88,	// (0x000388aa) cale_month_week_pane_t2_ParamLimits

0x7b9f,	// (0x000388c1) cale_month_week_pane_t3_ParamLimits

0x7bb6,	// (0x000388d8) cale_month_week_pane_t4_ParamLimits

0x7bcd,	// (0x000388ef) cale_month_week_pane_t5_ParamLimits

0x7be8,	// (0x0003890a) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0003fffb) cale_month_week_pane_t_ParamLimits

0x7ccd,	// (0x000389ef) cell_cale_month_pane_g1_ParamLimits

0x5f82,	// (0x00036ca4) main_cale_event_viewer_pane

0x5f82,	// (0x00036ca4) listscroll_cale_event_viewer_pane

0x12a7,	// (0x00031fc9) list_cale_ev_pane

0x12af,	// (0x00031fd1) scroll_pane_cp023

0x12bb,	// (0x00031fdd) field_cale_ev_pane_ParamLimits

0x12bb,	// (0x00031fdd) field_cale_ev_pane

0x12d9,	// (0x00031ffb) field_cale_ev_content_pane_ParamLimits

0x12d9,	// (0x00031ffb) field_cale_ev_content_pane

0x12e5,	// (0x00032007) field_cale_ev_pane_g1_ParamLimits

0x12e5,	// (0x00032007) field_cale_ev_pane_g1

0x12f1,	// (0x00032013) field_cale_ev_pane_g2_ParamLimits

0x12f1,	// (0x00032013) field_cale_ev_pane_g2

0x1309,	// (0x0003202b) field_cale_ev_pane_g3_ParamLimits

0x1309,	// (0x0003202b) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0004043c) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0004043c) field_cale_ev_pane_g

0x1321,	// (0x00032043) field_cale_ev_pane_t1_ParamLimits

0x1321,	// (0x00032043) field_cale_ev_pane_t1

0x1338,	// (0x0003205a) field_cale_ev_content_pane_t1_ParamLimits

0x1338,	// (0x0003205a) field_cale_ev_content_pane_t1

0xeb6d,	// (0x0003f88f) bg_button_pane_cp01

0xdf25,	// (0x0003ec47) listscroll_cale_week_pane_ParamLimits

0x67cf,	// (0x000374f1) popup_toolbar_window_cp01

0xe053,	// (0x0003ed75) listscroll_cale_week_pane_t1_ParamLimits

0xdf25,	// (0x0003ec47) listscroll_cale_day_pane_ParamLimits

0x67cf,	// (0x000374f1) popup_toolbar_window_cp02

0xe053,	// (0x0003ed75) listscroll_cale_day_pane_t1_ParamLimits

0xdf25,	// (0x0003ec47) main_cale_month_pane_ParamLimits

0x8fb0,	// (0x00039cd2) popup_toolbar_window_cp03_ParamLimits

0x8fb0,	// (0x00039cd2) popup_toolbar_window_cp03

0x8929,	// (0x0003964b) main_image_pane_g2_ParamLimits

0x8929,	// (0x0003964b) main_image_pane_g2

0x8935,	// (0x00039657) main_image_pane_g3_ParamLimits

0x8935,	// (0x00039657) main_image_pane_g3

0x0002,

0xf50b,	// (0x0004022d) main_image_pane_g_ParamLimits

0xf50b,	// (0x0004022d) main_image_pane_g

0xec87,	// (0x0003f9a9) main_image_pane_t1_ParamLimits

0x8941,	// (0x00039663) main_image_pane_t2_ParamLimits

0x8941,	// (0x00039663) main_image_pane_t2

0x8953,	// (0x00039675) main_image_pane_t3_ParamLimits

0x8953,	// (0x00039675) main_image_pane_t3

0x8965,	// (0x00039687) main_image_pane_t4_ParamLimits

0x8965,	// (0x00039687) main_image_pane_t4

0x0003,

0xf512,	// (0x00040234) main_image_pane_t_ParamLimits

0xf512,	// (0x00040234) main_image_pane_t

0x8977,	// (0x00039699) popup_image_details_window_cp01

0x8981,	// (0x000396a3) popup_toobar_trans_pane_cp01_ParamLimits

0x8981,	// (0x000396a3) popup_toobar_trans_pane_cp01

0x8f2d,	// (0x00039c4f) popup_image_details_window_ParamLimits

0x8f2d,	// (0x00039c4f) popup_image_details_window

0x0d3e,	// (0x00031a60) popup_image_focus_window

0x924b,	// (0x00039f6d) camera2_autofocus_pane_ParamLimits

0x924b,	// (0x00039f6d) camera2_autofocus_pane

0x5f82,	// (0x00036ca4) bg_popup_sub_pane_cp06

0x1356,	// (0x00032078) popup_image_focus_window_g1

0x135e,	// (0x00032080) popup_image_focus_window_g2

0x1366,	// (0x00032088) popup_image_focus_window_g3

0x136e,	// (0x00032090) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00040443) popup_image_focus_window_g

0x1376,	// (0x00032098) popup_image_focus_window_t1

0x1384,	// (0x000320a6) popup_image_focus_window_t2

0x1394,	// (0x000320b6) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0004044c) popup_image_focus_window_t

0x13a2,	// (0x000320c4) camera2_autofocus_pane_g1

0xf0d2,	// (0x0003fdf4) bg_tb_trans_pane_cp01

0x13b0,	// (0x000320d2) popup_image_details_window_g1

0x13c3,	// (0x000320e5) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0004045e) popup_image_details_window_g

0x13ec,	// (0x0003210e) popup_image_details_window_t1

0x13fe,	// (0x00032120) popup_image_details_window_t2

0x1417,	// (0x00032139) popup_image_details_window_t3

0x142b,	// (0x0003214d) popup_image_details_window_t4

0x1446,	// (0x00032168) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00040465) popup_image_details_window_t

0xdf11,	// (0x0003ec33) bg_calc_paper_pane_ParamLimits

0x5f82,	// (0x00036ca4) grid_highlight_pane_cp013

0x6567,	// (0x00037289) list_calc_pane_ParamLimits

0x6579,	// (0x0003729b) scroll_pane_cp024

0xdf25,	// (0x0003ec47) bg_calc_display_pane_ParamLimits

0x6581,	// (0x000372a3) calc_display_pane_t1_ParamLimits

0x6596,	// (0x000372b8) calc_display_pane_t2_ParamLimits

0x65ab,	// (0x000372cd) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0003fe95) calc_display_pane_t_ParamLimits

0x6687,	// (0x000373a9) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0003feb2) cell_calc_pane_g

0x6690,	// (0x000373b2) cell_calc_pane_t1

0xdf84,	// (0x0003eca6) grid_highlight_pane_cp02_ParamLimits

0xdf9a,	// (0x0003ecbc) toolbar_button_pane_cp01_ParamLimits

0xdf9a,	// (0x0003ecbc) toolbar_button_pane_cp01

0xeccc,	// (0x0003f9ee) temp_image_control_pane_ParamLimits

0xeccc,	// (0x0003f9ee) temp_image_control_pane

0xf0d2,	// (0x0003fdf4) main_mp3_pane

0x1460,	// (0x00032182) temp_image_control_pane_g1_ParamLimits

0x1460,	// (0x00032182) temp_image_control_pane_g1

0x146e,	// (0x00032190) temp_image_control_pane_g2_ParamLimits

0x146e,	// (0x00032190) temp_image_control_pane_g2

0x1480,	// (0x000321a2) temp_image_control_pane_g3_ParamLimits

0x1480,	// (0x000321a2) temp_image_control_pane_g3

0x98a5,	// (0x0003a5c7) temp_image_control_pane_g4_ParamLimits

0x98a5,	// (0x0003a5c7) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00040470) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00040470) temp_image_control_pane_g

0x1460,	// (0x00032182) main_mp3_pane_g1

0x98b6,	// (0x0003a5d8) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00040479) main_mp3_pane_g

0x14c3,	// (0x000321e5) main_mp3_pane_t1

0xe0ca,	// (0x0003edec) main_camera_pane_g8_ParamLimits

0xe0ca,	// (0x0003edec) main_camera_pane_g8

0x6e08,	// (0x00037b2a) main_video_pane_g7_ParamLimits

0x6e08,	// (0x00037b2a) main_video_pane_g7

0x9393,	// (0x0003a0b5) main_camera2_pane_t7_ParamLimits

0x9393,	// (0x0003a0b5) main_camera2_pane_t7

0xe210,	// (0x0003ef32) scroll_pane_cp025_ParamLimits

0xe210,	// (0x0003ef32) scroll_pane_cp025

0xe224,	// (0x0003ef46) scroll_pane_cp026_ParamLimits

0xe224,	// (0x0003ef46) scroll_pane_cp026

0xe233,	// (0x0003ef55) wml_content_pane_ParamLimits

0x5f82,	// (0x00036ca4) main_touch_calib_pane

0x995a,	// (0x0003a67c) main_touch_calib_pane_g1

0x9966,	// (0x0003a688) main_touch_calib_pane_g2

0x9972,	// (0x0003a694) main_touch_calib_pane_g3

0x997e,	// (0x0003a6a0) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00040497) main_touch_calib_pane_g

0x998a,	// (0x0003a6ac) main_touch_calib_pane_t1

0x99a1,	// (0x0003a6c3) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x000404a0) main_touch_calib_pane_t

0xe945,	// (0x0003f667) mup_progress_pane_cp02

0xe964,	// (0x0003f686) navi_pane_g1

0xe9c6,	// (0x0003f6e8) navi_pane_mp_t3

0xf0d2,	// (0x0003fdf4) main_mp3_pane_ParamLimits

0x8fee,	// (0x00039d10) navi_pane_ParamLimits

0x1460,	// (0x00032182) main_mp3_pane_g1_ParamLimits

0x98b6,	// (0x0003a5d8) main_mp3_pane_g2_ParamLimits

0x98c2,	// (0x0003a5e4) main_mp3_pane_g3_ParamLimits

0x98c2,	// (0x0003a5e4) main_mp3_pane_g3

0x98ce,	// (0x0003a5f0) main_mp3_pane_g4_ParamLimits

0x98ce,	// (0x0003a5f0) main_mp3_pane_g4

0x1490,	// (0x000321b2) main_mp3_pane_g5_ParamLimits

0x1490,	// (0x000321b2) main_mp3_pane_g5

0x149e,	// (0x000321c0) main_mp3_pane_g6_ParamLimits

0x149e,	// (0x000321c0) main_mp3_pane_g6

0x14ab,	// (0x000321cd) main_mp3_pane_g7_ParamLimits

0x14ab,	// (0x000321cd) main_mp3_pane_g7

0x14b7,	// (0x000321d9) main_mp3_pane_g8_ParamLimits

0x14b7,	// (0x000321d9) main_mp3_pane_g8

0xf757,	// (0x00040479) main_mp3_pane_g_ParamLimits

0x98da,	// (0x0003a5fc) main_mp3_pane_t2

0x98ea,	// (0x0003a60c) main_mp3_pane_t3

0x14d1,	// (0x000321f3) main_mp3_pane_t4

0x14df,	// (0x00032201) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0004048a) main_mp3_pane_t

0x14ed,	// (0x0003220f) mup_progress_pane_cp01

0x4dd0,	// (0x00035af2) aid_zoom_text_secondary2

0x12a7,	// (0x00031fc9) list_cale_ev2_pane

0x12af,	// (0x00031fd1) scroll_pane_cp023_ParamLimits

0x99f6,	// (0x0003a718) field_cale_ev2_pane_ParamLimits

0x99f6,	// (0x0003a718) field_cale_ev2_pane

0x50bf,	// (0x00035de1) field_cale_ev2_pane_g1_ParamLimits

0x50bf,	// (0x00035de1) field_cale_ev2_pane_g1

0x50cb,	// (0x00035ded) field_cale_ev2_pane_g2_ParamLimits

0x50cb,	// (0x00035ded) field_cale_ev2_pane_g2

0x50e3,	// (0x00035e05) field_cale_ev2_pane_g3_ParamLimits

0x50e3,	// (0x00035e05) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x000404ab) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x000404ab) field_cale_ev2_pane_g

0x5107,	// (0x00035e29) field_cale_ev2_pane_t1_ParamLimits

0x5107,	// (0x00035e29) field_cale_ev2_pane_t1

0x511e,	// (0x00035e40) field_cale_ev2_pane_t2_ParamLimits

0x511e,	// (0x00035e40) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x000404b4) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x000404b4) field_cale_ev2_pane_t

0x8809,	// (0x0003952b) main_postcard_pane_g5_ParamLimits

0x8809,	// (0x0003952b) main_postcard_pane_g5

0x8817,	// (0x00039539) main_postcard_pane_g6_ParamLimits

0x8817,	// (0x00039539) main_postcard_pane_g6

0x6c50,	// (0x00037972) camera2_autofocus_pane_cp_ParamLimits

0x6c50,	// (0x00037972) camera2_autofocus_pane_cp

0xf0d2,	// (0x0003fdf4) main_mup3_pane

0x9a3f,	// (0x0003a761) main_mup3_pane_g1_ParamLimits

0x9a3f,	// (0x0003a761) main_mup3_pane_g1

0x9a60,	// (0x0003a782) main_mup3_pane_g2_ParamLimits

0x9a60,	// (0x0003a782) main_mup3_pane_g2

0x9ad8,	// (0x0003a7fa) main_mup3_pane_g3_ParamLimits

0x9ad8,	// (0x0003a7fa) main_mup3_pane_g3

0x9b17,	// (0x0003a839) main_mup3_pane_g4_ParamLimits

0x9b17,	// (0x0003a839) main_mup3_pane_g4

0x9b56,	// (0x0003a878) main_mup3_pane_g5_ParamLimits

0x9b56,	// (0x0003a878) main_mup3_pane_g5

0x9b95,	// (0x0003a8b7) main_mup3_pane_g6_ParamLimits

0x9b95,	// (0x0003a8b7) main_mup3_pane_g6

0x1501,	// (0x00032223) main_mup3_pane_g7_ParamLimits

0x1501,	// (0x00032223) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x000404c4) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x000404c4) main_mup3_pane_g

0x9c07,	// (0x0003a929) main_mup3_pane_t1_ParamLimits

0x9c07,	// (0x0003a929) main_mup3_pane_t1

0x9c72,	// (0x0003a994) main_mup3_pane_t2_ParamLimits

0x9c72,	// (0x0003a994) main_mup3_pane_t2

0x9d37,	// (0x0003aa59) main_mup3_pane_t4_ParamLimits

0x9d37,	// (0x0003aa59) main_mup3_pane_t4

0x9d85,	// (0x0003aaa7) main_mup3_pane_t5_ParamLimits

0x9d85,	// (0x0003aaa7) main_mup3_pane_t5

0x9e2d,	// (0x0003ab4f) main_mup3_pane_t6_ParamLimits

0x9e2d,	// (0x0003ab4f) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x000404d5) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x000404d5) main_mup3_pane_t

0x9ed5,	// (0x0003abf7) mup3_progress_pane_ParamLimits

0x9ed5,	// (0x0003abf7) mup3_progress_pane

0x9f40,	// (0x0003ac62) popup_mup3_control_window_ParamLimits

0x9f40,	// (0x0003ac62) popup_mup3_control_window

0x150f,	// (0x00032231) popup_mup3_text_window

0x9f59,	// (0x0003ac7b) mup3_progress_pane_t1

0x9f70,	// (0x0003ac92) mup3_progress_pane_t2

0x1517,	// (0x00032239) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x000404e2) mup3_progress_pane_t

0x152e,	// (0x00032250) mup_progress_pane_cp03

0x5f82,	// (0x00036ca4) bg_tb_trans_pane_cp04

0x9f87,	// (0x0003aca9) mup3_volume_pane

0x9f8f,	// (0x0003acb1) popup_mup3_control_window_g1

0x9f98,	// (0x0003acba) mup3_volume_pane_g1

0x9fa1,	// (0x0003acc3) mup3_volume_pane_g2

0x9faa,	// (0x0003accc) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x000404e9) mup3_volume_pane_g

0x5f82,	// (0x00036ca4) bg_tb_trans_pane_cp03

0x153e,	// (0x00032260) popup_mup3_text_window_g1

0x1546,	// (0x00032268) popup_mup3_text_window_t1

0xdf6d,	// (0x0003ec8f) list_calc_item_pane_g1_ParamLimits

0x0f33,	// (0x00031c55) mup_volume_pane_cp_g1

0x99b8,	// (0x0003a6da) main_touch_calib_pane_t3

0x99cc,	// (0x0003a6ee) main_touch_calib_pane_t4

0x99e0,	// (0x0003a702) main_touch_calib_pane_t5

0x5f8c,	// (0x00036cae) aid_cell_size_toolbar2

0x5f94,	// (0x00036cb6) aid_popup3_width_pane

0x4dc8,	// (0x00035aea) aid_zoom_text_msg_primary

0x6c27,	// (0x00037949) vorec_t7

0xdf31,	// (0x0003ec53) bg_calc_paper_pane_g1_ParamLimits

0xdf3d,	// (0x0003ec5f) bg_calc_paper_pane_g2_ParamLimits

0xdf49,	// (0x0003ec6b) bg_calc_paper_pane_g3_ParamLimits

0xdf55,	// (0x0003ec77) bg_calc_paper_pane_g4_ParamLimits

0xdf61,	// (0x0003ec83) bg_calc_paper_pane_g5_ParamLimits

0x65ea,	// (0x0003730c) bg_calc_paper_pane_g6_ParamLimits

0x65fb,	// (0x0003731d) bg_calc_paper_pane_g7_ParamLimits

0x660c,	// (0x0003732e) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0003fe9c) bg_calc_paper_pane_g_ParamLimits

0x661d,	// (0x0003733f) calc_bg_paper_pane_g9_ParamLimits

0x6d37,	// (0x00037a59) image_qvga_pane_ParamLimits

0x6d37,	// (0x00037a59) image_qvga_pane

0xde4e,	// (0x0003eb70) bg_popup_sub_pane_cp04_ParamLimits

0xec03,	// (0x0003f925) popup_mup_playback_window_g1_ParamLimits

0xec0f,	// (0x0003f931) popup_mup_playback_window_t1_ParamLimits

0xec24,	// (0x0003f946) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00040228) popup_mup_playback_window_t_ParamLimits

0x94c2,	// (0x0003a1e4) main_mup2_pane_g3_ParamLimits

0x94c2,	// (0x0003a1e4) main_mup2_pane_g3

0x6fef,	// (0x00037d11) popup_toolbar_window_cp04

0xf006,	// (0x0003fd28) popup_call2_audio_second_window_g3_ParamLimits

0xf006,	// (0x0003fd28) popup_call2_audio_second_window_g3

0x033e,	// (0x00031060) popup_call2_audio_first_window_g4_ParamLimits

0x033e,	// (0x00031060) popup_call2_audio_first_window_g4

0x09bd,	// (0x000316df) popup_call2_audio_in_window_g4_ParamLimits

0x09bd,	// (0x000316df) popup_call2_audio_in_window_g4

0x891c,	// (0x0003963e) aid_area_sk_bg_cut_ParamLimits

0x891c,	// (0x0003963e) aid_area_sk_bg_cut

0xec39,	// (0x0003f95b) aid_area_sk_bg_cut_2_ParamLimits

0xec39,	// (0x0003f95b) aid_area_sk_bg_cut_2

0x984b,	// (0x0003a56d) aid_placing_details_win

0x9853,	// (0x0003a575) aid_placing_details_win_2

0x13a2,	// (0x000320c4) camera2_autofocus_pane_g1_ParamLimits

0x61cd,	// (0x00036eef) popup_fixed_preview_cale_window_ParamLimits

0x61cd,	// (0x00036eef) popup_fixed_preview_cale_window

0xea15,	// (0x0003f737) navi_slider_pane_g3

0xea1e,	// (0x0003f740) navi_slider_pane_g4

0xea27,	// (0x0003f749) navi_slider_pane_g5

0xea15,	// (0x0003f737) navi_slider_pane_g6

0x8258,	// (0x00038f7a) navi_slider_pane_g7

0xeb3a,	// (0x0003f85c) mup_scale_pane_g3

0xeb43,	// (0x0003f865) mup_scale_pane_g4

0xeb4c,	// (0x0003f86e) mup_scale_pane_g5

0x8699,	// (0x000393bb) mup_scale_pane_g6

0x86a2,	// (0x000393c4) mup_scale_pane_g7

0xea15,	// (0x0003f737) cams2_slider_pane_g3

0x0fe8,	// (0x00031d0a) cams2_slider_pane_g4

0x97a3,	// (0x0003a4c5) cams2_slider_pane_g5

0xea15,	// (0x0003f737) cams2_slider_pane_g6

0x97ab,	// (0x0003a4cd) cams2_slider_pane_g7

0x1224,	// (0x00031f46) camera2_autofocus_pane_cp_g1

0x1554,	// (0x00032276) bg_popup_preview_window_pane_cp02_ParamLimits

0x1554,	// (0x00032276) bg_popup_preview_window_pane_cp02

0x1560,	// (0x00032282) list_fp_cale_pane_ParamLimits

0x1560,	// (0x00032282) list_fp_cale_pane

0x156c,	// (0x0003228e) popup_fixed_preview_cale_window_t1_ParamLimits

0x156c,	// (0x0003228e) popup_fixed_preview_cale_window_t1

0x9fb3,	// (0x0003acd5) popup_fixed_preview_cale_window_t2_ParamLimits

0x9fb3,	// (0x0003acd5) popup_fixed_preview_cale_window_t2

0x9fc8,	// (0x0003acea) popup_fixed_preview_cale_window_t3_ParamLimits

0x9fc8,	// (0x0003acea) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x000404f0) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x000404f0) popup_fixed_preview_cale_window_t

0x9fdd,	// (0x0003acff) list_single_fp_cale_pane_ParamLimits

0x9fdd,	// (0x0003acff) list_single_fp_cale_pane

0x158a,	// (0x000322ac) list_single_fp_cale_pane_g1_ParamLimits

0x158a,	// (0x000322ac) list_single_fp_cale_pane_g1

0x1596,	// (0x000322b8) list_single_fp_cale_pane_g2_ParamLimits

0x1596,	// (0x000322b8) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x000404f7) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x000404f7) list_single_fp_cale_pane_g

0x15af,	// (0x000322d1) list_single_fp_cale_pane_t1_ParamLimits

0x15af,	// (0x000322d1) list_single_fp_cale_pane_t1

0x15c1,	// (0x000322e3) list_single_fp_cale_pane_t2_ParamLimits

0x15c1,	// (0x000322e3) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x000404fe) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x000404fe) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5f82,	// (0x00036ca4) main_dialer_pane

0x9fef,	// (0x0003ad11) aid_cell_size_keypad

0x9ff9,	// (0x0003ad1b) dialer_ne_pane

0xa003,	// (0x0003ad25) grid_dialer_command_1_pane

0xa00b,	// (0x0003ad2d) grid_dialer_command_2_pane

0xa013,	// (0x0003ad35) grid_dialer_keypad_pane

0xa025,	// (0x0003ad47) bg_popup_call_pane_cp06_ParamLimits

0xa025,	// (0x0003ad47) bg_popup_call_pane_cp06

0xa031,	// (0x0003ad53) dialer_ne_clear_pane_ParamLimits

0xa031,	// (0x0003ad53) dialer_ne_clear_pane

0x15f4,	// (0x00032316) dialer_ne_pane_g1

0x15fc,	// (0x0003231e) dialer_ne_pane_t1_ParamLimits

0x15fc,	// (0x0003231e) dialer_ne_pane_t1

0xa03d,	// (0x0003ad5f) dialer_ne_pane_t2_ParamLimits

0xa03d,	// (0x0003ad5f) dialer_ne_pane_t2

0xa05a,	// (0x0003ad7c) dialer_ne_pane_t3_ParamLimits

0xa05a,	// (0x0003ad7c) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00040503) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00040503) dialer_ne_pane_t

0xa07e,	// (0x0003ada0) dialer_ne_pane_t3_copy1_ParamLimits

0xa07e,	// (0x0003ada0) dialer_ne_pane_t3_copy1

0xa0a2,	// (0x0003adc4) cell_dialer_keypad_pane_ParamLimits

0xa0a2,	// (0x0003adc4) cell_dialer_keypad_pane

0xa0b9,	// (0x0003addb) cell_dialer_command_1_pane_ParamLimits

0xa0b9,	// (0x0003addb) cell_dialer_command_1_pane

0xa0cf,	// (0x0003adf1) cell_dialer_command_2_pane_ParamLimits

0xa0cf,	// (0x0003adf1) cell_dialer_command_2_pane

0x160e,	// (0x00032330) bg_button_pane_cp02_ParamLimits

0x160e,	// (0x00032330) bg_button_pane_cp02

0xa0de,	// (0x0003ae00) cell_dialer_keypad_pane_g1_ParamLimits

0xa0de,	// (0x0003ae00) cell_dialer_keypad_pane_g1

0x160e,	// (0x00032330) bg_button_pane_cp03_ParamLimits

0x160e,	// (0x00032330) bg_button_pane_cp03

0xa0f3,	// (0x0003ae15) cell_dialer_command_1_pane_g1_ParamLimits

0xa0f3,	// (0x0003ae15) cell_dialer_command_1_pane_g1

0x161a,	// (0x0003233c) bg_button_pane_cp04

0xa107,	// (0x0003ae29) cell_dialer_command_2_pane_g1

0xea04,	// (0x0003f726) bg_button_pane_cp06

0x1622,	// (0x00032344) dialer_ne_clear_pane_g1

0x819b,	// (0x00038ebd) navi_pane_g2

0x81c9,	// (0x00038eeb) navi_pane_g3

0x0002,

0xf409,	// (0x0004012b) navi_pane_g

0x81f4,	// (0x00038f16) navi_pane_mv_g2

0x821b,	// (0x00038f3d) navi_pane_mv_g5

0x8223,	// (0x00038f45) navi_pane_mv_t1

0xdf25,	// (0x0003ec47) main_clock2_pane

0xa136,	// (0x0003ae58) main_clock2_list_pane_ParamLimits

0xa136,	// (0x0003ae58) main_clock2_list_pane

0xa15e,	// (0x0003ae80) main_clock2_pane_t1_ParamLimits

0xa15e,	// (0x0003ae80) main_clock2_pane_t1

0xa18c,	// (0x0003aeae) main_clock2_pane_t2_ParamLimits

0xa18c,	// (0x0003aeae) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0004050a) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0004050a) main_clock2_pane_t

0xa1f3,	// (0x0003af15) popup_clock_analogue_window_cp03_ParamLimits

0xa1f3,	// (0x0003af15) popup_clock_analogue_window_cp03

0xa211,	// (0x0003af33) popup_clock_digital_window_cp02_ParamLimits

0xa211,	// (0x0003af33) popup_clock_digital_window_cp02

0xa27e,	// (0x0003afa0) main_clock2_list_single_pane_ParamLimits

0xa27e,	// (0x0003afa0) main_clock2_list_single_pane

0xea04,	// (0x0003f726) list_highlight_pane_cp05

0x162a,	// (0x0003234c) main_clock2_list_single_pane_t1

0x6fef,	// (0x00037d11) popup_toolbar_window_cp04_ParamLimits

0x9875,	// (0x0003a597) camera2_autofocus_pane_g2_ParamLimits

0x9875,	// (0x0003a597) camera2_autofocus_pane_g2

0x9881,	// (0x0003a5a3) camera2_autofocus_pane_g3_ParamLimits

0x9881,	// (0x0003a5a3) camera2_autofocus_pane_g3

0x988d,	// (0x0003a5af) camera2_autofocus_pane_g4_ParamLimits

0x988d,	// (0x0003a5af) camera2_autofocus_pane_g4

0x9899,	// (0x0003a5bb) camera2_autofocus_pane_g5_ParamLimits

0x9899,	// (0x0003a5bb) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00040453) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00040453) camera2_autofocus_pane_g

0x9a1f,	// (0x0003a741) camera2_autofocus_pane_cp_g2

0x9a27,	// (0x0003a749) camera2_autofocus_pane_cp_g3

0x9a2f,	// (0x0003a751) camera2_autofocus_pane_cp_g4

0x9a37,	// (0x0003a759) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x000404b9) camera2_autofocus_pane_cp_g

0xa01d,	// (0x0003ad3f) popup_dialer_spcha_window

0x5f82,	// (0x00036ca4) bg_popup_sub_pane_cp07

0x1638,	// (0x0003235a) list_spcha_pane

0x1640,	// (0x00032362) list_single_spcha_pane_ParamLimits

0x1640,	// (0x00032362) list_single_spcha_pane

0x5f82,	// (0x00036ca4) list_highlight_pane_cp06

0x1651,	// (0x00032373) list_single_spcha_pane_t1

0x0767,	// (0x00031489) popup_call2_audio_out_window_g4_ParamLimits

0x0767,	// (0x00031489) popup_call2_audio_out_window_g4

0x5f82,	// (0x00036ca4) main_imed2_pane

0x0d46,	// (0x00031a68) popup_imed_adjust2_window

0x8f3b,	// (0x00039c5d) popup_imed_trans_window_ParamLimits

0x8f3b,	// (0x00039c5d) popup_imed_trans_window

0x1062,	// (0x00031d84) popup_blid_sat_info2_window_t1

0x1070,	// (0x00031d92) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x000403e8) popup_blid_sat_info2_window_t

0xa328,	// (0x0003b04a) aid_size_cell_colour_35

0xa342,	// (0x0003b064) aid_size_cell_colour_112

0xa359,	// (0x0003b07b) aid_size_cell_effect

0xf0d2,	// (0x0003fdf4) bg_tb_trans_pane_cp02

0xf0e0,	// (0x0003fe02) heading_imed_pane

0xa373,	// (0x0003b095) listscroll_imed_pane

0x165f,	// (0x00032381) heading_imed_pane_g1

0x1667,	// (0x00032389) heading_imed_pane_t1

0x1675,	// (0x00032397) grid_imed_colour_35_pane_ParamLimits

0x1675,	// (0x00032397) grid_imed_colour_35_pane

0xa37f,	// (0x0003b0a1) grid_imed_effect_pane

0x168c,	// (0x000323ae) list_imed_aspect_pane

0xa38f,	// (0x0003b0b1) scroll_pane_cp027_ParamLimits

0xa38f,	// (0x0003b0b1) scroll_pane_cp027

0xa39b,	// (0x0003b0bd) cell_imed_effect_pane_ParamLimits

0xa39b,	// (0x0003b0bd) cell_imed_effect_pane

0x1694,	// (0x000323b6) cell_imed_colour_pane_ParamLimits

0x1694,	// (0x000323b6) cell_imed_colour_pane

0x16d6,	// (0x000323f8) cell_imed_colour_pane_g1_ParamLimits

0x16d6,	// (0x000323f8) cell_imed_colour_pane_g1

0x16e7,	// (0x00032409) hgihlgiht_grid_pane_cp016_ParamLimits

0x16e7,	// (0x00032409) hgihlgiht_grid_pane_cp016

0xa3b3,	// (0x0003b0d5) cell_imed_effect_pane_g1

0xa3bb,	// (0x0003b0dd) grid_highlight_pane_cp017

0x16f8,	// (0x0003241a) list_imed_single_pane_ParamLimits

0x16f8,	// (0x0003241a) list_imed_single_pane

0x5f82,	// (0x00036ca4) list_highlight_pane_cp07

0x170d,	// (0x0003242f) list_imed_aspect_pane_comp1_t1

0x0d1e,	// (0x00031a40) bg_tb_trans_pane_cp05

0x172f,	// (0x00032451) popup_imed_adjust2_window_g1

0x1756,	// (0x00032478) popup_imed_adjust2_window_t1

0x176e,	// (0x00032490) slider_imed_adjust_pane

0x1782,	// (0x000324a4) slider_imed_adjust_pane_g1

0x1792,	// (0x000324b4) slider_imed_adjust_pane_g2

0x17a2,	// (0x000324c4) slider_imed_adjust_pane_g3

0x17b3,	// (0x000324d5) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00040527) slider_imed_adjust_pane_g

0xa3c4,	// (0x0003b0e6) aid_size_cell_clipart2

0xa3d0,	// (0x0003b0f2) grid_imed_clipart_pane

0x17c4,	// (0x000324e6) scroll_pane_cp031

0xa3da,	// (0x0003b0fc) cell_imed_clipart_pane_ParamLimits

0xa3da,	// (0x0003b0fc) cell_imed_clipart_pane

0xa3fc,	// (0x0003b11e) cell_imed_clipart_pane_g1

0x5f82,	// (0x00036ca4) grid_highlight_pane_cp014

0xa142,	// (0x0003ae64) main_clock2_pane_g1_ParamLimits

0xa142,	// (0x0003ae64) main_clock2_pane_g1

0xa229,	// (0x0003af4b) aid_call2_pane_cp10

0xa23b,	// (0x0003af5d) aid_call_pane_cp10

0xe939,	// (0x0003f65b) popup_clock_analogue_window_cp10_g1

0xe939,	// (0x0003f65b) popup_clock_analogue_window_cp10_g2

0xa24d,	// (0x0003af6f) popup_clock_analogue_window_cp10_g3

0xa24d,	// (0x0003af6f) popup_clock_analogue_window_cp10_g4

0xe939,	// (0x0003f65b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00040515) popup_clock_analogue_window_cp10_g

0xa25f,	// (0x0003af81) popup_clock_analogue_window_cp10_t1

0xa290,	// (0x0003afb2) clock_digital_number_pane_cp10_ParamLimits

0xa290,	// (0x0003afb2) clock_digital_number_pane_cp10

0xa2a8,	// (0x0003afca) clock_digital_number_pane_cp11_ParamLimits

0xa2a8,	// (0x0003afca) clock_digital_number_pane_cp11

0xa2c0,	// (0x0003afe2) clock_digital_number_pane_cp12_ParamLimits

0xa2c0,	// (0x0003afe2) clock_digital_number_pane_cp12

0xa2d8,	// (0x0003affa) clock_digital_number_pane_cp13_ParamLimits

0xa2d8,	// (0x0003affa) clock_digital_number_pane_cp13

0xa2f0,	// (0x0003b012) clock_digital_separator_pane_cp10_ParamLimits

0xa2f0,	// (0x0003b012) clock_digital_separator_pane_cp10

0xa308,	// (0x0003b02a) popup_clock_digital_window_cp02_t1_ParamLimits

0xa308,	// (0x0003b02a) popup_clock_digital_window_cp02_t1

0xde46,	// (0x0003eb68) clock_digital_number_pane_cp10_g1

0xde46,	// (0x0003eb68) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00040530) clock_digital_number_pane_cp10_g

0xde46,	// (0x0003eb68) clock_digital_separator_pane_cp10_g1

0xde46,	// (0x0003eb68) clock_digital_separator_pane_g2_cp10

0xe9d4,	// (0x0003f6f6) navi_pane_vded_g4

0xe9dd,	// (0x0003f6ff) navi_pane_vded_g5

0xe9e6,	// (0x0003f708) navi_pane_vded_t1

0x5f82,	// (0x00036ca4) main_vded_pane

0xa405,	// (0x0003b127) main_vded_pane_g1

0xa411,	// (0x0003b133) main_vded_pane_g2

0xa41b,	// (0x0003b13d) main_vded_pane_g3

0x0002,

0xf813,	// (0x00040535) main_vded_pane_g

0xa425,	// (0x0003b147) main_vded_pane_t1

0xa433,	// (0x0003b155) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0004053c) main_vded_pane_t

0xa441,	// (0x0003b163) vded_slider_pane

0xa44b,	// (0x0003b16d) vded_video_pane

0x17cc,	// (0x000324ee) vded_video_pane_g1

0xa455,	// (0x0003b177) vded_video_pane_g2

0x1224,	// (0x00031f46) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00040541) vded_video_pane_g

0x17d6,	// (0x000324f8) vded_slider_pane_g1

0x0f33,	// (0x00031c55) vded_slider_pane_g2

0x17df,	// (0x00032501) vded_slider_pane_g3

0x17e8,	// (0x0003250a) vded_slider_pane_g4

0x17f1,	// (0x00032513) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00040548) vded_slider_pane_g

0x9f32,	// (0x0003ac54) mup3_rocker_pane_ParamLimits

0x9f32,	// (0x0003ac54) mup3_rocker_pane

0xa45e,	// (0x0003b180) mup3_control_keys_pane_g1

0xa466,	// (0x0003b188) mup3_control_keys_pane_g2

0xa46e,	// (0x0003b190) mup3_control_keys_pane_g3

0xa476,	// (0x0003b198) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00040553) mup3_control_keys_pane_g

0x61eb,	// (0x00036f0d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x61eb,	// (0x00036f0d) popup_toolbar2_fixed_window_cp01

0x9f4c,	// (0x0003ac6e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9f4c,	// (0x0003ac6e) popup_toolbar2_fixed_window_cp02

0x00a6,	// (0x00030dc8) popup_call2_audio_second_window_t4_ParamLimits

0x00a6,	// (0x00030dc8) popup_call2_audio_second_window_t4

0x05d4,	// (0x000312f6) popup_call2_audio_first_window_t6_ParamLimits

0x05d4,	// (0x000312f6) popup_call2_audio_first_window_t6

0x086a,	// (0x0003158c) popup_call2_audio_out_window_t6_ParamLimits

0x086a,	// (0x0003158c) popup_call2_audio_out_window_t6

0x5f82,	// (0x00036ca4) main_vitu_pane

0xa486,	// (0x0003b1a8) aid_size_cell_itu_ParamLimits

0xa486,	// (0x0003b1a8) aid_size_cell_itu

0x6213,	// (0x00036f35) bg_popup_window_pane_cp08_ParamLimits

0x6213,	// (0x00036f35) bg_popup_window_pane_cp08

0xa494,	// (0x0003b1b6) field_vitu_entry_pane_ParamLimits

0xa494,	// (0x0003b1b6) field_vitu_entry_pane

0xa4a3,	// (0x0003b1c5) grid_vitu_function_pane_ParamLimits

0xa4a3,	// (0x0003b1c5) grid_vitu_function_pane

0xa4b3,	// (0x0003b1d5) grid_vitu_itu_pane_ParamLimits

0xa4b3,	// (0x0003b1d5) grid_vitu_itu_pane

0xa4c3,	// (0x0003b1e5) cell_vitu_itu_pane_ParamLimits

0xa4c3,	// (0x0003b1e5) cell_vitu_itu_pane

0xa4d8,	// (0x0003b1fa) cell_vitu_function_pane_ParamLimits

0xa4d8,	// (0x0003b1fa) cell_vitu_function_pane

0xf0d2,	// (0x0003fdf4) bg_popup_sub_pane_cp08_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_popup_sub_pane_cp08

0xa4ea,	// (0x0003b20c) field_vitu_entry_pane_t1_ParamLimits

0xa4ea,	// (0x0003b20c) field_vitu_entry_pane_t1

0x1812,	// (0x00032534) field_vitu_entry_pane_t2_ParamLimits

0x1812,	// (0x00032534) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00040561) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00040561) field_vitu_entry_pane_t

0x182f,	// (0x00032551) bg_button_pane_cp05_ParamLimits

0x182f,	// (0x00032551) bg_button_pane_cp05

0xa505,	// (0x0003b227) cell_vitu_itu_pane_g1

0xa51d,	// (0x0003b23f) cell_vitu_itu_pane_t1_ParamLimits

0xa51d,	// (0x0003b23f) cell_vitu_itu_pane_t1

0xa52f,	// (0x0003b251) cell_vitu_itu_pane_t2_ParamLimits

0xa52f,	// (0x0003b251) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00040566) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00040566) cell_vitu_itu_pane_t

0x183d,	// (0x0003255f) bg_button_pane_cp07

0xa564,	// (0x0003b286) cell_vitu_function_pane_g1

0x6492,	// (0x000371b4) main_calc_pane_g1

0x5fc8,	// (0x00036cea) aid_visual_content_pane

0x5f82,	// (0x00036ca4) main_vradio_pane

0xa56d,	// (0x0003b28f) main_vradio_pane_g1_ParamLimits

0xa56d,	// (0x0003b28f) main_vradio_pane_g1

0x1847,	// (0x00032569) main_vradio_pane_g2_ParamLimits

0x1847,	// (0x00032569) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0004056d) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0004056d) main_vradio_pane_g

0xa57d,	// (0x0003b29f) main_vradio_pane_t1_ParamLimits

0xa57d,	// (0x0003b29f) main_vradio_pane_t1

0xa58f,	// (0x0003b2b1) main_vradio_pane_t2_ParamLimits

0xa58f,	// (0x0003b2b1) main_vradio_pane_t2

0x1854,	// (0x00032576) main_vradio_pane_t3_ParamLimits

0x1854,	// (0x00032576) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00040572) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00040572) main_vradio_pane_t

0xa5a1,	// (0x0003b2c3) vradio_rocker_control_pane_ParamLimits

0xa5a1,	// (0x0003b2c3) vradio_rocker_control_pane

0xa5ad,	// (0x0003b2cf) vradio_station_info_pane_ParamLimits

0xa5ad,	// (0x0003b2cf) vradio_station_info_pane

0x1868,	// (0x0003258a) vradio_frequency_info_pane_ParamLimits

0x1868,	// (0x0003258a) vradio_frequency_info_pane

0x1224,	// (0x00031f46) vradio_station_info_pane_g1

0x1877,	// (0x00032599) vradio_station_info_pane_t1_ParamLimits

0x1877,	// (0x00032599) vradio_station_info_pane_t1

0x1899,	// (0x000325bb) vradio_station_info_pane_t2_ParamLimits

0x1899,	// (0x000325bb) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00040579) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00040579) vradio_station_info_pane_t

0x18ab,	// (0x000325cd) vradio_tuning_pane

0x18b3,	// (0x000325d5) vradio_rocker_control_pane_g1

0x18bb,	// (0x000325dd) vradio_rocker_control_pane_g2

0x18c3,	// (0x000325e5) vradio_rocker_control_pane_g3

0x18cb,	// (0x000325ed) vradio_rocker_control_pane_g4

0x18d3,	// (0x000325f5) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0004057e) vradio_rocker_control_pane_g

0xa5bc,	// (0x0003b2de) vradio_frequency_info_pane_g1

0x18db,	// (0x000325fd) vradio_frequency_info_pane_t1_ParamLimits

0x18db,	// (0x000325fd) vradio_frequency_info_pane_t1

0xa5c6,	// (0x0003b2e8) vradio_tuning_pane_g1

0xa5cf,	// (0x0003b2f1) vradio_tuning_pane_t1

0x6011,	// (0x00036d33) area_side_right_pane_ParamLimits

0x6011,	// (0x00036d33) area_side_right_pane

0x0ce5,	// (0x00031a07) status_small_pane_g1

0x0ced,	// (0x00031a0f) status_small_pane_g2

0x0cf6,	// (0x00031a18) status_small_pane_g3

0x0cff,	// (0x00031a21) status_small_pane_g4

0x0003,

0xf61c,	// (0x0004033e) status_small_pane_g

0x0d08,	// (0x00031a2a) status_small_pane_t1

0x5f82,	// (0x00036ca4) main_video3_pane

0x18ef,	// (0x00032611) cams_zoom_vslider_pane

0x18f7,	// (0x00032619) image3_wide_pane_ParamLimits

0x18f7,	// (0x00032619) image3_wide_pane

0x1911,	// (0x00032633) image3_wide_small_pane

0x191d,	// (0x0003263f) main_video3_pane_g1_ParamLimits

0x191d,	// (0x0003263f) main_video3_pane_g1

0x1939,	// (0x0003265b) main_video3_pane_g2_ParamLimits

0x1939,	// (0x0003265b) main_video3_pane_g2

0x0001,

0xf867,	// (0x00040589) main_video3_pane_g_ParamLimits

0xf867,	// (0x00040589) main_video3_pane_g

0x1955,	// (0x00032677) main_video3_pane_t1_ParamLimits

0x1955,	// (0x00032677) main_video3_pane_t1

0x1980,	// (0x000326a2) main_video3_pane_t2_ParamLimits

0x1980,	// (0x000326a2) main_video3_pane_t2

0x19ab,	// (0x000326cd) main_video3_pane_t3_ParamLimits

0x19ab,	// (0x000326cd) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0004058e) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0004058e) main_video3_pane_t

0x19d8,	// (0x000326fa) cams_zoom_vslider_pane_g1

0x19e1,	// (0x00032703) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00040595) cams_zoom_vslider_pane_g

0x19e9,	// (0x0003270b) small_slider_vertical_pane

0x1224,	// (0x00031f46) small_slider_vertical_pane_g1

0x1224,	// (0x00031f46) small_slider_vertical_pane_g2

0x19f1,	// (0x00032713) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0004059a) small_slider_vertical_pane_g

0x5f82,	// (0x00036ca4) main_hwr_training_pane

0x19fa,	// (0x0003271c) hwr_training_instruct_pane_ParamLimits

0x19fa,	// (0x0003271c) hwr_training_instruct_pane

0xa5de,	// (0x0003b300) hwr_training_navi_pane_ParamLimits

0xa5de,	// (0x0003b300) hwr_training_navi_pane

0xa5f8,	// (0x0003b31a) hwr_training_write_pane_ParamLimits

0xa5f8,	// (0x0003b31a) hwr_training_write_pane

0x5f82,	// (0x00036ca4) bg_frame_shadow_pane

0x1a31,	// (0x00032753) hwr_training_write_pane_g1

0x1a39,	// (0x0003275b) hwr_training_write_pane_g2

0x1a41,	// (0x00032763) hwr_training_write_pane_g3

0x1a49,	// (0x0003276b) hwr_training_write_pane_g4

0x1a51,	// (0x00032773) hwr_training_write_pane_g5

0x1a59,	// (0x0003277b) hwr_training_write_pane_g6

0x1a61,	// (0x00032783) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x000405a1) hwr_training_write_pane_g

0xa630,	// (0x0003b352) hwr_training_navi_pane_g1_ParamLimits

0xa630,	// (0x0003b352) hwr_training_navi_pane_g1

0xa642,	// (0x0003b364) hwr_training_navi_pane_g2_ParamLimits

0xa642,	// (0x0003b364) hwr_training_navi_pane_g2

0xa654,	// (0x0003b376) hwr_training_navi_pane_g3_ParamLimits

0xa654,	// (0x0003b376) hwr_training_navi_pane_g3

0xa664,	// (0x0003b386) hwr_training_navi_pane_g4_ParamLimits

0xa664,	// (0x0003b386) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x000405b0) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x000405b0) hwr_training_navi_pane_g

0xa67e,	// (0x0003b3a0) hwr_training_navi_pane_t1

0xa68c,	// (0x0003b3ae) list_single_hwr_training_instruct_pane_ParamLimits

0xa68c,	// (0x0003b3ae) list_single_hwr_training_instruct_pane

0x1ab8,	// (0x000327da) list_single_hwr_training_instruct_pane_t1

0x1164,	// (0x00031e86) bg_frame_shadow_pane_g1

0x1ac7,	// (0x000327e9) bg_frame_shadow_pane_g2

0x1acf,	// (0x000327f1) bg_frame_shadow_pane_g3

0x1ad7,	// (0x000327f9) bg_frame_shadow_pane_g4

0x1adf,	// (0x00032801) bg_frame_shadow_pane_g5

0x1ae7,	// (0x00032809) bg_frame_shadow_pane_g6

0x1aef,	// (0x00032811) bg_frame_shadow_pane_g7

0xdfde,	// (0x0003ed00) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x000405bb) bg_frame_shadow_pane_g

0x5f82,	// (0x00036ca4) main_video_tele_dialer_pane

0xa6b1,	// (0x0003b3d3) aid_size_cell_video_keypad_ParamLimits

0xa6b1,	// (0x0003b3d3) aid_size_cell_video_keypad

0xa6c1,	// (0x0003b3e3) grid_video_dialer_keypad_pane_ParamLimits

0xa6c1,	// (0x0003b3e3) grid_video_dialer_keypad_pane

0xa6f3,	// (0x0003b415) video_down_pane_cp_ParamLimits

0xa6f3,	// (0x0003b415) video_down_pane_cp

0xa6ff,	// (0x0003b421) cell_video_dialer_keypad_pane_ParamLimits

0xa6ff,	// (0x0003b421) cell_video_dialer_keypad_pane

0x1b13,	// (0x00032835) bg_button_pane_cp08_ParamLimits

0x1b13,	// (0x00032835) bg_button_pane_cp08

0xa714,	// (0x0003b436) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa714,	// (0x0003b436) cell_video_dialer_keypad_pane_g1

0x9f26,	// (0x0003ac48) mup3_rocker2_pane_ParamLimits

0x9f26,	// (0x0003ac48) mup3_rocker2_pane

0x1224,	// (0x00031f46) mup3_rocker2_pane_g1

0x8ec5,	// (0x00039be7) main_dialer2_pane

0x5f82,	// (0x00036ca4) main_mp4_pane

0xa756,	// (0x0003b478) main_mp4_pane_g1_ParamLimits

0xa756,	// (0x0003b478) main_mp4_pane_g1

0xa764,	// (0x0003b486) main_mp4_pane_g2_ParamLimits

0xa764,	// (0x0003b486) main_mp4_pane_g2

0xa772,	// (0x0003b494) main_mp4_pane_g3_ParamLimits

0xa772,	// (0x0003b494) main_mp4_pane_g3

0xa7b7,	// (0x0003b4d9) main_mp4_pane_g4_ParamLimits

0xa7b7,	// (0x0003b4d9) main_mp4_pane_g4

0xa7df,	// (0x0003b501) main_mp4_pane_g5_ParamLimits

0xa7df,	// (0x0003b501) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x000405db) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x000405db) main_mp4_pane_g

0xa82f,	// (0x0003b551) main_mp4_pane_t1_ParamLimits

0xa82f,	// (0x0003b551) main_mp4_pane_t1

0xa88b,	// (0x0003b5ad) main_mp4_pane_t2_ParamLimits

0xa88b,	// (0x0003b5ad) main_mp4_pane_t2

0x1c5b,	// (0x0003297d) main_mp4_pane_t3_ParamLimits

0x1c5b,	// (0x0003297d) main_mp4_pane_t3

0xa8dd,	// (0x0003b5ff) main_mp4_pane_t4_ParamLimits

0xa8dd,	// (0x0003b5ff) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x000405e8) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x000405e8) main_mp4_pane_t

0xa921,	// (0x0003b643) mp4_progress_pane_ParamLimits

0xa921,	// (0x0003b643) mp4_progress_pane

0xa96b,	// (0x0003b68d) mp4_rocker_pane_ParamLimits

0xa96b,	// (0x0003b68d) mp4_rocker_pane

0x1d31,	// (0x00032a53) mp4_progress_pane_t1

0x1d4a,	// (0x00032a6c) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x000405f1) mp4_progress_pane_t

0x1d63,	// (0x00032a85) mup_progress_pane_cp04

0x1224,	// (0x00031f46) mp4_rocker_pane_g1

0xa98b,	// (0x0003b6ad) aid_cell_size_keypad2_ParamLimits

0xa98b,	// (0x0003b6ad) aid_cell_size_keypad2

0xa99b,	// (0x0003b6bd) dialer2_ne_pane_ParamLimits

0xa99b,	// (0x0003b6bd) dialer2_ne_pane

0xa9a9,	// (0x0003b6cb) grid_dialer2_keypad_pane_ParamLimits

0xa9a9,	// (0x0003b6cb) grid_dialer2_keypad_pane

0x28c0,	// (0x000335e2) bg_popup_call_pane_cp07_ParamLimits

0x28c0,	// (0x000335e2) bg_popup_call_pane_cp07

0xa9b9,	// (0x0003b6db) dialer2_ne_pane_t1_ParamLimits

0xa9b9,	// (0x0003b6db) dialer2_ne_pane_t1

0xa9de,	// (0x0003b700) cell_dialer2_keypad_pane_ParamLimits

0xa9de,	// (0x0003b700) cell_dialer2_keypad_pane

0x1d8b,	// (0x00032aad) bg_button_pane_pane_cp04_ParamLimits

0x1d8b,	// (0x00032aad) bg_button_pane_pane_cp04

0xa9f3,	// (0x0003b715) cell_dialer2_keypad_pane_g1_ParamLimits

0xa9f3,	// (0x0003b715) cell_dialer2_keypad_pane_g1

0x6eb3,	// (0x00037bd5) aid_placing_vt_set_content_ParamLimits

0x6eb3,	// (0x00037bd5) aid_placing_vt_set_content

0x6edd,	// (0x00037bff) aid_placing_vt_set_title_ParamLimits

0x6edd,	// (0x00037bff) aid_placing_vt_set_title

0x5f82,	// (0x00036ca4) main_image3_pane

0xaa8d,	// (0x0003b7af) area_side_right_pane_cp01_ParamLimits

0xaa8d,	// (0x0003b7af) area_side_right_pane_cp01

0x2e7e,	// (0x00033ba0) main_image3_pane_g1_ParamLimits

0x2e7e,	// (0x00033ba0) main_image3_pane_g1

0xaaba,	// (0x0003b7dc) main_image3_pane_g2_ParamLimits

0xaaba,	// (0x0003b7dc) main_image3_pane_g2

0xaad3,	// (0x0003b7f5) main_image3_pane_g3_ParamLimits

0xaad3,	// (0x0003b7f5) main_image3_pane_g3

0xaaec,	// (0x0003b80e) main_image3_pane_g4_ParamLimits

0xaaec,	// (0x0003b80e) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00040600) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00040600) main_image3_pane_g

0xab05,	// (0x0003b827) main_image3_pane_t1_ParamLimits

0xab05,	// (0x0003b827) main_image3_pane_t1

0xab2a,	// (0x0003b84c) main_image3_pane_t2_ParamLimits

0xab2a,	// (0x0003b84c) main_image3_pane_t2

0xab49,	// (0x0003b86b) main_image3_pane_t3_ParamLimits

0xab49,	// (0x0003b86b) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00040609) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00040609) main_image3_pane_t

0x6213,	// (0x00036f35) grid_sctrl_middle_pane_cp01_ParamLimits

0x6213,	// (0x00036f35) grid_sctrl_middle_pane_cp01

0xabaa,	// (0x0003b8cc) cell_sctrl_middle_pane_cp01_ParamLimits

0xabaa,	// (0x0003b8cc) cell_sctrl_middle_pane_cp01

0xabbb,	// (0x0003b8dd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xabbb,	// (0x0003b8dd) cell_sctrl_middle_pane_cp01_g1

0x5f82,	// (0x00036ca4) main_call4_pane

0xabc8,	// (0x0003b8ea) aid_size_button_call4_ParamLimits

0xabc8,	// (0x0003b8ea) aid_size_button_call4

0xabf8,	// (0x0003b91a) call4_windows_pane_ParamLimits

0xabf8,	// (0x0003b91a) call4_windows_pane

0xac12,	// (0x0003b934) grid_call4_button_pane_ParamLimits

0xac12,	// (0x0003b934) grid_call4_button_pane

0x1dc9,	// (0x00032aeb) call4_windows_conf_pane

0x1de0,	// (0x00032b02) popup_call4_audio_first_window_ParamLimits

0x1de0,	// (0x00032b02) popup_call4_audio_first_window

0x1e2c,	// (0x00032b4e) popup_call4_audio_second_window_ParamLimits

0x1e2c,	// (0x00032b4e) popup_call4_audio_second_window

0x1e40,	// (0x00032b62) popup_call4_audio_wait_window_ParamLimits

0x1e40,	// (0x00032b62) popup_call4_audio_wait_window

0xac36,	// (0x0003b958) cell_call4_button_pane_ParamLimits

0xac36,	// (0x0003b958) cell_call4_button_pane

0xac5b,	// (0x0003b97d) bg_button_pane_cp09_ParamLimits

0xac5b,	// (0x0003b97d) bg_button_pane_cp09

0xac67,	// (0x0003b989) cell_call4_button_pane_g1_ParamLimits

0xac67,	// (0x0003b989) cell_call4_button_pane_g1

0xac74,	// (0x0003b996) cell_call4_button_pane_t1_ParamLimits

0xac74,	// (0x0003b996) cell_call4_button_pane_t1

0x1e88,	// (0x00032baa) popup_call4_audio_conf_window_ParamLimits

0x1e88,	// (0x00032baa) popup_call4_audio_conf_window

0x9f59,	// (0x0003ac7b) mup3_progress_pane_t1_ParamLimits

0x9f70,	// (0x0003ac92) mup3_progress_pane_t2_ParamLimits

0x1517,	// (0x00032239) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x000404e2) mup3_progress_pane_t_ParamLimits

0x152e,	// (0x00032250) mup_progress_pane_cp03_ParamLimits

0xa47e,	// (0x0003b1a0) mup3_control_keys_pane_g4_copy1

0xa94f,	// (0x0003b671) mp4_rocker2_pane_ParamLimits

0xa94f,	// (0x0003b671) mp4_rocker2_pane

0x1ea4,	// (0x00032bc6) mp4_rocker2_pane_g1

0x1e9c,	// (0x00032bbe) mp4_rocker2_pane_g2

0xac86,	// (0x0003b9a8) mp4_rocker2_pane_g3

0xac8e,	// (0x0003b9b0) mp4_rocker2_pane_g4

0xac96,	// (0x0003b9b8) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00040612) mp4_rocker2_pane_g

0x5f82,	// (0x00036ca4) main_camera4_pane

0x5f82,	// (0x00036ca4) main_video4_pane

0xa6cf,	// (0x0003b3f1) main_video_tele_dialer_pane_t1_ParamLimits

0xa6cf,	// (0x0003b3f1) main_video_tele_dialer_pane_t1

0xa6e1,	// (0x0003b403) main_video_tele_dialer_pane_t2_ParamLimits

0xa6e1,	// (0x0003b403) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x000405cc) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x000405cc) main_video_tele_dialer_pane_t

0xacb6,	// (0x0003b9d8) cam4_autofocus_pane_ParamLimits

0xacb6,	// (0x0003b9d8) cam4_autofocus_pane

0xacd0,	// (0x0003b9f2) cam4_image_uncrop_pane_ParamLimits

0xacd0,	// (0x0003b9f2) cam4_image_uncrop_pane

0xace7,	// (0x0003ba09) cam4_indicators_pane_ParamLimits

0xace7,	// (0x0003ba09) cam4_indicators_pane

0xad03,	// (0x0003ba25) main_camera4_pane_g1_ParamLimits

0xad03,	// (0x0003ba25) main_camera4_pane_g1

0xad0f,	// (0x0003ba31) main_camera4_pane_g2_ParamLimits

0xad0f,	// (0x0003ba31) main_camera4_pane_g2

0xad0f,	// (0x0003ba31) main_camera4_pane_g3_ParamLimits

0xad0f,	// (0x0003ba31) main_camera4_pane_g3

0xad1b,	// (0x0003ba3d) main_camera4_pane_g4_ParamLimits

0xad1b,	// (0x0003ba3d) main_camera4_pane_g4

0xad27,	// (0x0003ba49) main_camera4_pane_g5_ParamLimits

0xad27,	// (0x0003ba49) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0004061d) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0004061d) main_camera4_pane_g

0xad41,	// (0x0003ba63) main_camera4_pane_t1_ParamLimits

0xad41,	// (0x0003ba63) main_camera4_pane_t1

0x1490,	// (0x000321b2) bg_tb_trans_pane_cp06

0xad91,	// (0x0003bab3) cam4_indicators_pane_g1

0xada2,	// (0x0003bac4) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00040638) cam4_indicators_pane_g

0xadc0,	// (0x0003bae2) cam4_indicators_pane_t1

0xadea,	// (0x0003bb0c) main_video4_pane_g1_ParamLimits

0xadea,	// (0x0003bb0c) main_video4_pane_g1

0xadf6,	// (0x0003bb18) main_video4_pane_g2_ParamLimits

0xadf6,	// (0x0003bb18) main_video4_pane_g2

0xae02,	// (0x0003bb24) main_video4_pane_g3_ParamLimits

0xae02,	// (0x0003bb24) main_video4_pane_g3

0xae0e,	// (0x0003bb30) main_video4_pane_g4_ParamLimits

0xae0e,	// (0x0003bb30) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0004063f) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0004063f) main_video4_pane_g

0xae2e,	// (0x0003bb50) vid4_indicators_pane_ParamLimits

0xae2e,	// (0x0003bb50) vid4_indicators_pane

0xae4c,	// (0x0003bb6e) video4_image_uncrop_cif_pane_ParamLimits

0xae4c,	// (0x0003bb6e) video4_image_uncrop_cif_pane

0xae5b,	// (0x0003bb7d) video4_image_uncrop_nhd_pane_ParamLimits

0xae5b,	// (0x0003bb7d) video4_image_uncrop_nhd_pane

0xacd0,	// (0x0003b9f2) video4_image_uncrop_vga_pane_ParamLimits

0xacd0,	// (0x0003b9f2) video4_image_uncrop_vga_pane

0xf0d2,	// (0x0003fdf4) bg_tb_trans_pane_cp07

0xae72,	// (0x0003bb94) vid4_indicators_pane_g1

0xae83,	// (0x0003bba5) vid4_indicators_pane_g2

0xae94,	// (0x0003bbb6) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0004064a) vid4_indicators_pane_g

0xaec1,	// (0x0003bbe3) vid4_indicators_pane_t1

0xaeda,	// (0x0003bbfc) cam4_autofocus_pane_g1

0xaee2,	// (0x0003bc04) cam4_autofocus_pane_g2

0xaeea,	// (0x0003bc0c) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00040655) cam4_autofocus_pane_g

0xaef2,	// (0x0003bc14) cam4_autofocus_pane_g3_copy1

0x1af7,	// (0x00032819) video_down_pane_cp_t1

0x1b05,	// (0x00032827) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x000405d1) video_down_pane_cp_t

0x6213,	// (0x00036f35) popup_vitu2_window_ParamLimits

0x6213,	// (0x00036f35) popup_vitu2_window

0xaefa,	// (0x0003bc1c) aid_size_cell2_itu2_ParamLimits

0xaefa,	// (0x0003bc1c) aid_size_cell2_itu2

0xaf1c,	// (0x0003bc3e) aid_size_cell_itu2_ParamLimits

0xaf1c,	// (0x0003bc3e) aid_size_cell_itu2

0x28c0,	// (0x000335e2) bg_popup_window_pane_cp09_ParamLimits

0x28c0,	// (0x000335e2) bg_popup_window_pane_cp09

0xaf60,	// (0x0003bc82) field_vitu2_entry_pane_ParamLimits

0xaf60,	// (0x0003bc82) field_vitu2_entry_pane

0xaf80,	// (0x0003bca2) grid_vitu2_function_pane_ParamLimits

0xaf80,	// (0x0003bca2) grid_vitu2_function_pane

0xafc4,	// (0x0003bce6) grid_vitu2_itu_pane_ParamLimits

0xafc4,	// (0x0003bce6) grid_vitu2_itu_pane

0xb03c,	// (0x0003bd5e) cell_vitu2_itu_pane_ParamLimits

0xb03c,	// (0x0003bd5e) cell_vitu2_itu_pane

0xb051,	// (0x0003bd73) cell_vitu2_function_pane_ParamLimits

0xb051,	// (0x0003bd73) cell_vitu2_function_pane

0x1f71,	// (0x00032c93) bg_popup_call_pane_cp08_ParamLimits

0x1f71,	// (0x00032c93) bg_popup_call_pane_cp08

0x1f8a,	// (0x00032cac) field_vitu2_entry_pane_g1

0x1f96,	// (0x00032cb8) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0004065c) field_vitu2_entry_pane_g

0x5133,	// (0x00035e55) field_vitu2_entry_pane_t1_ParamLimits

0x5133,	// (0x00035e55) field_vitu2_entry_pane_t1

0x5163,	// (0x00035e85) field_vitu2_entry_pane_t2_ParamLimits

0x5163,	// (0x00035e85) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00040663) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00040663) field_vitu2_entry_pane_t

0xb090,	// (0x0003bdb2) bg_button_pane_cp010_ParamLimits

0xb090,	// (0x0003bdb2) bg_button_pane_cp010

0xb09e,	// (0x0003bdc0) cell_vitu2_itu_pane_g1

0xb0bc,	// (0x0003bdde) cell_vitu2_itu_pane_t1_ParamLimits

0xb0bc,	// (0x0003bdde) cell_vitu2_itu_pane_t1

0x5180,	// (0x00035ea2) cell_vitu2_itu_pane_t2_ParamLimits

0x5180,	// (0x00035ea2) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0004066d) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0004066d) cell_vitu2_itu_pane_t

0xf0d2,	// (0x0003fdf4) bg_button_pane_cp011

0xb10e,	// (0x0003be30) cell_vitu2_function_pane_g1

0x5f82,	// (0x00036ca4) main_myfav_hc_pane

0xab8b,	// (0x0003b8ad) popup_image3_note_pane_ParamLimits

0xab8b,	// (0x0003b8ad) popup_image3_note_pane

0xab99,	// (0x0003b8bb) popup_image3_tool_bar_pane_ParamLimits

0xab99,	// (0x0003b8bb) popup_image3_tool_bar_pane

0x51ee,	// (0x00035f10) cell_vitu2_itu_pane_t3_ParamLimits

0x51ee,	// (0x00035f10) cell_vitu2_itu_pane_t3

0x5f82,	// (0x00036ca4) bg_popup_trans_pane

0x2012,	// (0x00032d34) grid_image3_tool_bar_pane

0x201c,	// (0x00032d3e) bg_popup_trans_pane_g1

0xe319,	// (0x0003f03b) bg_popup_trans_pane_g2

0x2024,	// (0x00032d46) bg_popup_trans_pane_g3

0x202c,	// (0x00032d4e) bg_popup_trans_pane_g4

0x2034,	// (0x00032d56) bg_popup_trans_pane_g5

0x203c,	// (0x00032d5e) bg_popup_trans_pane_g6

0x2044,	// (0x00032d66) bg_popup_trans_pane_g7

0x204c,	// (0x00032d6e) bg_popup_trans_pane_g8

0xe2f9,	// (0x0003f01b) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00040674) bg_popup_trans_pane_g

0x2054,	// (0x00032d76) cell_image3_tool_bar_pane_ParamLimits

0x2054,	// (0x00032d76) cell_image3_tool_bar_pane

0x1224,	// (0x00031f46) cell_image3_tool_bar_pane_g1

0x5f82,	// (0x00036ca4) bg_popup_trans_pane_cp1

0x2068,	// (0x00032d8a) popup_image3_note_pane_t1

0x2076,	// (0x00032d98) popup_image3_note_pane_t2

0x2084,	// (0x00032da6) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00040687) popup_image3_note_pane_t

0x2092,	// (0x00032db4) popup_image3_note_pane_t3_copy1

0xb122,	// (0x0003be44) bg_myfav_hc_instruction_pane_ParamLimits

0xb122,	// (0x0003be44) bg_myfav_hc_instruction_pane

0xb13a,	// (0x0003be5c) cell_myfav_contact_pane_ParamLimits

0xb13a,	// (0x0003be5c) cell_myfav_contact_pane

0xb154,	// (0x0003be76) cell_myfav_contact_pane_cp1_ParamLimits

0xb154,	// (0x0003be76) cell_myfav_contact_pane_cp1

0xb16c,	// (0x0003be8e) cell_myfav_contact_pane_cp2_ParamLimits

0xb16c,	// (0x0003be8e) cell_myfav_contact_pane_cp2

0xb184,	// (0x0003bea6) cell_myfav_contact_pane_cp3_ParamLimits

0xb184,	// (0x0003bea6) cell_myfav_contact_pane_cp3

0xb19b,	// (0x0003bebd) cell_myfav_contact_pane_cp4_ParamLimits

0xb19b,	// (0x0003bebd) cell_myfav_contact_pane_cp4

0xb1b1,	// (0x0003bed3) cell_myfav_contact_pane_cp5_ParamLimits

0xb1b1,	// (0x0003bed3) cell_myfav_contact_pane_cp5

0xb1c5,	// (0x0003bee7) cell_myfav_contact_pane_cp6_ParamLimits

0xb1c5,	// (0x0003bee7) cell_myfav_contact_pane_cp6

0xb1d9,	// (0x0003befb) cell_myfav_contact_pane_cp7_ParamLimits

0xb1d9,	// (0x0003befb) cell_myfav_contact_pane_cp7

0x20a0,	// (0x00032dc2) listscroll_gen_pane_cp05

0xb1f1,	// (0x0003bf13) main_myfav_hc_pane_g1_ParamLimits

0xb1f1,	// (0x0003bf13) main_myfav_hc_pane_g1

0xb207,	// (0x0003bf29) main_myfav_hc_pane_g2_ParamLimits

0xb207,	// (0x0003bf29) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0004068e) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0004068e) main_myfav_hc_pane_g

0xb235,	// (0x0003bf57) main_myfav_hc_pane_t1_ParamLimits

0xb235,	// (0x0003bf57) main_myfav_hc_pane_t1

0x20a9,	// (0x00032dcb) main_myfav_hc_pane_t2_ParamLimits

0x20a9,	// (0x00032dcb) main_myfav_hc_pane_t2

0x20bb,	// (0x00032ddd) main_myfav_hc_pane_t3_ParamLimits

0x20bb,	// (0x00032ddd) main_myfav_hc_pane_t3

0xb24c,	// (0x0003bf6e) main_myfav_hc_pane_t4_ParamLimits

0xb24c,	// (0x0003bf6e) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00040695) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00040695) main_myfav_hc_pane_t

0x1224,	// (0x00031f46) bg_myfav_hc_instruction_pane_g1

0x20cd,	// (0x00032def) cell_myfav_contact_pane_g1_ParamLimits

0x20cd,	// (0x00032def) cell_myfav_contact_pane_g1

0x20cd,	// (0x00032def) cell_myfav_contact_pane_g2_ParamLimits

0x20cd,	// (0x00032def) cell_myfav_contact_pane_g2

0x20d9,	// (0x00032dfb) cell_myfav_contact_pane_g3_ParamLimits

0x20d9,	// (0x00032dfb) cell_myfav_contact_pane_g3

0x1501,	// (0x00032223) cell_myfav_contact_pane_g4_ParamLimits

0x1501,	// (0x00032223) cell_myfav_contact_pane_g4

0x20e6,	// (0x00032e08) cell_myfav_contact_pane_g5_ParamLimits

0x20e6,	// (0x00032e08) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x000406a0) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x000406a0) cell_myfav_contact_pane_g

0xb21d,	// (0x0003bf3f) main_myfav_hc_pane_g3_ParamLimits

0xb21d,	// (0x0003bf3f) main_myfav_hc_pane_g3

0x6130,	// (0x00036e52) popup_adpt_find_window

0xb276,	// (0x0003bf98) afind_page_pane_ParamLimits

0xb276,	// (0x0003bf98) afind_page_pane

0xb283,	// (0x0003bfa5) aid_size_cell_afind_ParamLimits

0xb283,	// (0x0003bfa5) aid_size_cell_afind

0xb29d,	// (0x0003bfbf) bg_popup_sub_pane_cp09_ParamLimits

0xb29d,	// (0x0003bfbf) bg_popup_sub_pane_cp09

0xb2aa,	// (0x0003bfcc) find_pane_cp01_ParamLimits

0xb2aa,	// (0x0003bfcc) find_pane_cp01

0x20f2,	// (0x00032e14) grid_afind_control_pane_ParamLimits

0x20f2,	// (0x00032e14) grid_afind_control_pane

0xb2b7,	// (0x0003bfd9) grid_afind_pane_ParamLimits

0xb2b7,	// (0x0003bfd9) grid_afind_pane

0xb2d3,	// (0x0003bff5) cell_afind_pane_ParamLimits

0xb2d3,	// (0x0003bff5) cell_afind_pane

0x1224,	// (0x00031f46) afind_page_pane_g1

0xb31b,	// (0x0003c03d) afind_page_pane_g2

0xb324,	// (0x0003c046) afind_page_pane_g3

0x0002,

0xf989,	// (0x000406ab) afind_page_pane_g

0xb32d,	// (0x0003c04f) afind_page_pane_t1

0x2106,	// (0x00032e28) cell_afind_grid_control_pane_ParamLimits

0x2106,	// (0x00032e28) cell_afind_grid_control_pane

0x1d8b,	// (0x00032aad) bg_button_pane_cp69_ParamLimits

0x1d8b,	// (0x00032aad) bg_button_pane_cp69

0xb34d,	// (0x0003c06f) cell_afind_pane_g1_ParamLimits

0xb34d,	// (0x0003c06f) cell_afind_pane_g1

0xb35a,	// (0x0003c07c) cell_afind_pane_t1_ParamLimits

0xb35a,	// (0x0003c07c) cell_afind_pane_t1

0xe114,	// (0x0003ee36) bg_button_pane_cp72

0x2115,	// (0x00032e37) cell_afind_grid_control_pane_g1

0x8a43,	// (0x00039765) aid_image_placing_area_ParamLimits

0x8a43,	// (0x00039765) aid_image_placing_area

0x17fa,	// (0x0003251c) field_vitu_entry_pane_g1_ParamLimits

0x17fa,	// (0x0003251c) field_vitu_entry_pane_g1

0x1806,	// (0x00032528) field_vitu_entry_pane_g2_ParamLimits

0x1806,	// (0x00032528) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0004055c) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0004055c) field_vitu_entry_pane_g

0xa505,	// (0x0003b227) cell_vitu_itu_pane_g1_ParamLimits

0xa547,	// (0x0003b269) cell_vitu_itu_pane_t3_ParamLimits

0xa547,	// (0x0003b269) cell_vitu_itu_pane_t3

0x1d31,	// (0x00032a53) mp4_progress_pane_t1_ParamLimits

0x1d4a,	// (0x00032a6c) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x000405f1) mp4_progress_pane_t_ParamLimits

0x1d63,	// (0x00032a85) mup_progress_pane_cp04_ParamLimits

0xb260,	// (0x0003bf82) main_myfav_hc_pane_t5_ParamLimits

0xb260,	// (0x0003bf82) main_myfav_hc_pane_t5

0x5fd4,	// (0x00036cf6) aid_zoom_text_primary

0x6130,	// (0x00036e52) popup_adpt_find_window_ParamLimits

0xf0d2,	// (0x0003fdf4) main_cam_set_pane

0xacf5,	// (0x0003ba17) cam4_zoom_pane_ParamLimits

0xacf5,	// (0x0003ba17) cam4_zoom_pane

0xb36c,	// (0x0003c08e) main_cam_set_pane_g1_ParamLimits

0xb36c,	// (0x0003c08e) main_cam_set_pane_g1

0xb37a,	// (0x0003c09c) main_cam_set_pane_g2_ParamLimits

0xb37a,	// (0x0003c09c) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x000406b2) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x000406b2) main_cam_set_pane_g

0xb386,	// (0x0003c0a8) main_cam_set_pane_t1_ParamLimits

0xb386,	// (0x0003c0a8) main_cam_set_pane_t1

0xb3a2,	// (0x0003c0c4) main_cset_listscroll_pane_ParamLimits

0xb3a2,	// (0x0003c0c4) main_cset_listscroll_pane

0xb3cd,	// (0x0003c0ef) main_cset_slider_pane_ParamLimits

0xb3cd,	// (0x0003c0ef) main_cset_slider_pane

0x2126,	// (0x00032e48) main_cset_list_pane_ParamLimits

0x2126,	// (0x00032e48) main_cset_list_pane

0x2136,	// (0x00032e58) scroll_pane_cp028

0xb3ec,	// (0x0003c10e) aid_area_touch_slider

0xb408,	// (0x0003c12a) cset_slider_pane

0xb432,	// (0x0003c154) main_cset_slider_pane_g1

0xb447,	// (0x0003c169) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x000406b7) main_cset_slider_pane_g

0x216f,	// (0x00032e91) main_cset_slider_pane_t1

0xb509,	// (0x0003c22b) main_cset_slider_pane_t2

0xb523,	// (0x0003c245) main_cset_slider_pane_t3

0xb53d,	// (0x0003c25f) main_cset_slider_pane_t4

0xb557,	// (0x0003c279) main_cset_slider_pane_t5

0xb575,	// (0x0003c297) main_cset_slider_pane_t6

0xb58c,	// (0x0003c2ae) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x000406dc) main_cset_slider_pane_t

0xb698,	// (0x0003c3ba) cset_list_set_pane_ParamLimits

0xb698,	// (0x0003c3ba) cset_list_set_pane

0xb6ae,	// (0x0003c3d0) aid_position_infowindow_above

0xb6b6,	// (0x0003c3d8) aid_position_infowindow_below

0x523b,	// (0x00035f5d) cset_list_set_pane_g1_ParamLimits

0x523b,	// (0x00035f5d) cset_list_set_pane_g1

0x5247,	// (0x00035f69) cset_list_set_pane_g3_ParamLimits

0x5247,	// (0x00035f69) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x000406fb) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x000406fb) cset_list_set_pane_g

0x5256,	// (0x00035f78) cset_list_set_pane_t1_ParamLimits

0x5256,	// (0x00035f78) cset_list_set_pane_t1

0xf0d2,	// (0x0003fdf4) list_highlight_pane_cp021_ParamLimits

0xf0d2,	// (0x0003fdf4) list_highlight_pane_cp021

0xeb3a,	// (0x0003f85c) cset_slider_pane_g1

0xeb4c,	// (0x0003f86e) cset_slider_pane_g2

0xeb43,	// (0x0003f865) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00040700) cset_slider_pane_g

0xb6be,	// (0x0003c3e0) aid_area_touch_cam4_zoom

0xb6c6,	// (0x0003c3e8) cam4_zoom_cont_pane

0xb6ce,	// (0x0003c3f0) cam4_zoom_pane_g1

0xb6d6,	// (0x0003c3f8) cam4_zoom_pane_g2

0xb6de,	// (0x0003c400) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00040707) cam4_zoom_pane_g

0x2c0f,	// (0x00033931) cam4_zoom_cont_pane_g1

0x2c18,	// (0x0003393a) cam4_zoom_cont_pane_g2

0x2c21,	// (0x00033943) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0004070e) cam4_zoom_cont_pane_g

0xabe2,	// (0x0003b904) call4_image_pane_ParamLimits

0xabe2,	// (0x0003b904) call4_image_pane

0x1dc9,	// (0x00032aeb) call4_windows_conf_pane_ParamLimits

0x1e0a,	// (0x00032b2c) popup_call4_audio_in_window_ParamLimits

0x1e0a,	// (0x00032b2c) popup_call4_audio_in_window

0x5f82,	// (0x00036ca4) bg_popup_call2_act_pane_cp02

0x1e80,	// (0x00032ba2) call4_list_conf_pane

0x1224,	// (0x00031f46) call4_image_pane_g1

0x1224,	// (0x00031f46) call4_image_pane_g2

0x0001,

0xf700,	// (0x00040422) call4_image_pane_g

0x226e,	// (0x00032f90) list_single_graphic_popup_conf4_pane_ParamLimits

0x226e,	// (0x00032f90) list_single_graphic_popup_conf4_pane

0x5f82,	// (0x00036ca4) list_highlight_pane_cp022

0x2281,	// (0x00032fa3) list_single_graphic_popup_conf4_pane_g1

0xe819,	// (0x0003f53b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00040715) list_single_graphic_popup_conf4_pane_g

0x2289,	// (0x00032fab) list_single_graphic_popup_conf4_pane_t1

0x7041,	// (0x00037d63) popup_vtel_slider_window_ParamLimits

0x7041,	// (0x00037d63) popup_vtel_slider_window

0x1d79,	// (0x00032a9b) dialer2_ne_pane_t2_ParamLimits

0x1d79,	// (0x00032a9b) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x000405f6) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x000405f6) dialer2_ne_pane_t

0xf0d2,	// (0x0003fdf4) bg_popup_sub_pane_cp010_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_popup_sub_pane_cp010

0xb6e6,	// (0x0003c408) popup_vtel_slider_window_g1_ParamLimits

0xb6e6,	// (0x0003c408) popup_vtel_slider_window_g1

0xb6f2,	// (0x0003c414) popup_vtel_slider_window_g2_ParamLimits

0xb6f2,	// (0x0003c414) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0004071a) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0004071a) popup_vtel_slider_window_g

0xb73a,	// (0x0003c45c) vtel_slider_pane_ParamLimits

0xb73a,	// (0x0003c45c) vtel_slider_pane

0xb749,	// (0x0003c46b) vtel_slider_pane_g1_ParamLimits

0xb749,	// (0x0003c46b) vtel_slider_pane_g1

0xb756,	// (0x0003c478) vtel_slider_pane_g2_ParamLimits

0xb756,	// (0x0003c478) vtel_slider_pane_g2

0xb763,	// (0x0003c485) vtel_slider_pane_g3_ParamLimits

0xb763,	// (0x0003c485) vtel_slider_pane_g3

0xb749,	// (0x0003c46b) vtel_slider_pane_g4_ParamLimits

0xb749,	// (0x0003c46b) vtel_slider_pane_g4

0xb770,	// (0x0003c492) vtel_slider_pane_g5_ParamLimits

0xb770,	// (0x0003c492) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00040723) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00040723) vtel_slider_pane_g

0x5f82,	// (0x00036ca4) main_gallery2_pane

0xaf42,	// (0x0003bc64) aid_size_row_itut2_dropdow_list_ParamLimits

0xaf42,	// (0x0003bc64) aid_size_row_itut2_dropdow_list

0xafa2,	// (0x0003bcc4) grid_vitu2_function_top_pane_ParamLimits

0xafa2,	// (0x0003bcc4) grid_vitu2_function_top_pane

0xaff8,	// (0x0003bd1a) popup_vitu2_dropdown_list_window_ParamLimits

0xaff8,	// (0x0003bd1a) popup_vitu2_dropdown_list_window

0xb018,	// (0x0003bd3a) popup_vitu2_match_list_window

0xb77d,	// (0x0003c49f) cell_vitu2_function_top_pane_ParamLimits

0xb77d,	// (0x0003c49f) cell_vitu2_function_top_pane

0xb79d,	// (0x0003c4bf) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb79d,	// (0x0003c4bf) cell_vitu2_function_top_pane_cp01

0xb7bb,	// (0x0003c4dd) cell_vitu2_function_top_wide_pane_ParamLimits

0xb7bb,	// (0x0003c4dd) cell_vitu2_function_top_wide_pane

0xf0d2,	// (0x0003fdf4) bg_button_pane_cp012

0xb7d9,	// (0x0003c4fb) cell_vitu2_function_top_pane_g1

0xb7e8,	// (0x0003c50a) bg_button_pane_cp013_ParamLimits

0xb7e8,	// (0x0003c50a) bg_button_pane_cp013

0xb804,	// (0x0003c526) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb804,	// (0x0003c526) cell_vitu2_function_top_wide_pane_g1

0x6213,	// (0x00036f35) bg_popup_sub_pane_cp20

0xb81c,	// (0x0003c53e) list_vitu2_match_list_pane

0x201c,	// (0x00032d3e) bg_popup_sub_pane_cp20_g1

0x2024,	// (0x00032d46) bg_popup_sub_pane_cp20_g2

0xe319,	// (0x0003f03b) bg_popup_sub_pane_cp20_g3

0x202c,	// (0x00032d4e) bg_popup_sub_pane_cp20_g4

0xe2f9,	// (0x0003f01b) bg_popup_sub_pane_cp20_g5

0x22c9,	// (0x00032feb) bg_popup_sub_pane_cp20_g6

0x203c,	// (0x00032d5e) bg_popup_sub_pane_cp20_g7

0x2044,	// (0x00032d66) bg_popup_sub_pane_cp20_g8

0x204c,	// (0x00032d6e) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0004072e) bg_popup_sub_pane_cp20_g

0xb834,	// (0x0003c556) list_vitu2_match_list_item_pane_ParamLimits

0xb834,	// (0x0003c556) list_vitu2_match_list_item_pane

0xb846,	// (0x0003c568) list_vitu2_match_list_item_pane_t1

0x5f82,	// (0x00036ca4) bg_popup_sub_pane_cp21

0xe741,	// (0x0003f463) grid_vitu2_dropdown_list_pane

0xb854,	// (0x0003c576) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb854,	// (0x0003c576) cell_vitu2_dropdown_list_char_pane

0xb875,	// (0x0003c597) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb875,	// (0x0003c597) cell_vitu2_dropdown_list_ctrl_pane

0x2323,	// (0x00033045) cell_vitu2_dropdown_list_char_pane_g1

0x231a,	// (0x0003303c) cell_vitu2_dropdown_list_char_pane_g2

0x2311,	// (0x00033033) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0004074b) cell_vitu2_dropdown_list_char_pane_g

0xb8a1,	// (0x0003c5c3) cell_vitu2_dropdown_list_char_pane_t1

0xb8af,	// (0x0003c5d1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb8af,	// (0x0003c5d1) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb8bf,	// (0x0003c5e1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb8bf,	// (0x0003c5e1) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb8d0,	// (0x0003c5f2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb8d0,	// (0x0003c5f2) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb8e0,	// (0x0003c602) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb8e0,	// (0x0003c602) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1490,	// (0x000321b2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1490,	// (0x000321b2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00040752) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00040752) cell_vitu2_dropdown_list_ctrl_pane_g

0xb8fc,	// (0x0003c61e) aid_size_cell_gallery2_ParamLimits

0xb8fc,	// (0x0003c61e) aid_size_cell_gallery2

0xb90a,	// (0x0003c62c) grid_gallery2_pane_ParamLimits

0xb90a,	// (0x0003c62c) grid_gallery2_pane

0xb919,	// (0x0003c63b) scroll_pane_cp029_ParamLimits

0xb919,	// (0x0003c63b) scroll_pane_cp029

0xb925,	// (0x0003c647) cell_gallery2_pane_ParamLimits

0xb925,	// (0x0003c647) cell_gallery2_pane

0x232c,	// (0x0003304e) cell_gallery2_pane_g2

0x38eb,	// (0x0003460d) cell_gallery2_pane_g3

0x2336,	// (0x00033058) cell_gallery2_pane_g4

0x233e,	// (0x00033060) cell_gallery2_pane_g5

0xea04,	// (0x0003f726) grid_highlight_pane_cp10

0xb018,	// (0x0003bd3a) popup_vitu2_match_list_window_ParamLimits

0xb02c,	// (0x0003bd4e) popup_vitu2_query_window_ParamLimits

0xb02c,	// (0x0003bd4e) popup_vitu2_query_window

0x5f82,	// (0x00036ca4) bg_vitu2_candi_button_pane

0x2323,	// (0x00033045) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x231a,	// (0x0003303c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2311,	// (0x00033033) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x52c0,	// (0x00035fe2) bg_button_pane_cp015

0xb953,	// (0x0003c675) bg_button_pane_cp016

0xb966,	// (0x0003c688) bg_button_pane_cp017

0x0d1e,	// (0x00031a40) bg_popup_sub_pane_cp22

0x2346,	// (0x00033068) popup_vitu2_query_window_g1

0x52f3,	// (0x00036015) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0004075d) popup_vitu2_query_window_g

0x5310,	// (0x00036032) popup_vitu2_query_window_t1_ParamLimits

0x5310,	// (0x00036032) popup_vitu2_query_window_t1

0x5343,	// (0x00036065) popup_vitu2_query_window_t2_ParamLimits

0x5343,	// (0x00036065) popup_vitu2_query_window_t2

0x5355,	// (0x00036077) popup_vitu2_query_window_t3_ParamLimits

0x5355,	// (0x00036077) popup_vitu2_query_window_t3

0xb98a,	// (0x0003c6ac) popup_vitu2_query_window_t4_ParamLimits

0xb98a,	// (0x0003c6ac) popup_vitu2_query_window_t4

0xb9ab,	// (0x0003c6cd) popup_vitu2_query_window_t5_ParamLimits

0xb9ab,	// (0x0003c6cd) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00040764) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00040764) popup_vitu2_query_window_t

0x211e,	// (0x00032e40) main_cset_text_pane

0xb3ec,	// (0x0003c10e) aid_area_touch_slider_ParamLimits

0xb408,	// (0x0003c12a) cset_slider_pane_ParamLimits

0xb432,	// (0x0003c154) main_cset_slider_pane_g1_ParamLimits

0xb447,	// (0x0003c169) main_cset_slider_pane_g2_ParamLimits

0x213f,	// (0x00032e61) main_cset_slider_pane_g3_ParamLimits

0x213f,	// (0x00032e61) main_cset_slider_pane_g3

0xb45c,	// (0x0003c17e) main_cset_slider_pane_g4_ParamLimits

0xb45c,	// (0x0003c17e) main_cset_slider_pane_g4

0xb46b,	// (0x0003c18d) main_cset_slider_pane_g5_ParamLimits

0xb46b,	// (0x0003c18d) main_cset_slider_pane_g5

0xb479,	// (0x0003c19b) main_cset_slider_pane_g6_ParamLimits

0xb479,	// (0x0003c19b) main_cset_slider_pane_g6

0xf995,	// (0x000406b7) main_cset_slider_pane_g_ParamLimits

0x216f,	// (0x00032e91) main_cset_slider_pane_t1_ParamLimits

0xb509,	// (0x0003c22b) main_cset_slider_pane_t2_ParamLimits

0xb523,	// (0x0003c245) main_cset_slider_pane_t3_ParamLimits

0xb53d,	// (0x0003c25f) main_cset_slider_pane_t4_ParamLimits

0xb557,	// (0x0003c279) main_cset_slider_pane_t5_ParamLimits

0xb575,	// (0x0003c297) main_cset_slider_pane_t6_ParamLimits

0xb58c,	// (0x0003c2ae) main_cset_slider_pane_t7_ParamLimits

0xb5ba,	// (0x0003c2dc) main_cset_slider_pane_t8_ParamLimits

0xb5ba,	// (0x0003c2dc) main_cset_slider_pane_t8

0xb5e2,	// (0x0003c304) main_cset_slider_pane_t9_ParamLimits

0xb5e2,	// (0x0003c304) main_cset_slider_pane_t9

0xb60a,	// (0x0003c32c) main_cset_slider_pane_t10_ParamLimits

0xb60a,	// (0x0003c32c) main_cset_slider_pane_t10

0xb632,	// (0x0003c354) main_cset_slider_pane_t11_ParamLimits

0xb632,	// (0x0003c354) main_cset_slider_pane_t11

0xb65c,	// (0x0003c37e) main_cset_slider_pane_t12_ParamLimits

0xb65c,	// (0x0003c37e) main_cset_slider_pane_t12

0xb679,	// (0x0003c39b) main_cset_slider_pane_t13_ParamLimits

0xb679,	// (0x0003c39b) main_cset_slider_pane_t13

0xf9ba,	// (0x000406dc) main_cset_slider_pane_t_ParamLimits

0x5f82,	// (0x00036ca4) bg_popup_sub_pane_cp011

0x2352,	// (0x00033074) main_cset_text_pane_g1

0x235a,	// (0x0003307c) main_cset_text_pane_t1

0x2368,	// (0x0003308a) main_cset_text_pane_t2

0x2376,	// (0x00033098) main_cset_text_pane_t3

0x2384,	// (0x000330a6) main_cset_text_pane_t4

0x2392,	// (0x000330b4) main_cset_text_pane_t5

0x23a0,	// (0x000330c2) main_cset_text_pane_t6

0x23ae,	// (0x000330d0) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00040773) main_cset_text_pane_t

0x5f82,	// (0x00036ca4) main_cam4_burst_pane

0x5f82,	// (0x00036ca4) main_cam5_pane

0xb33b,	// (0x0003c05d) bg_button_pane_cp019

0xb344,	// (0x0003c066) bg_button_pane_cp020

0x214b,	// (0x00032e6d) main_cset_slider_pane_g7_ParamLimits

0x214b,	// (0x00032e6d) main_cset_slider_pane_g7

0x2157,	// (0x00032e79) main_cset_slider_pane_g8_ParamLimits

0x2157,	// (0x00032e79) main_cset_slider_pane_g8

0xb48d,	// (0x0003c1af) main_cset_slider_pane_g9_ParamLimits

0xb48d,	// (0x0003c1af) main_cset_slider_pane_g9

0xb499,	// (0x0003c1bb) main_cset_slider_pane_g10_ParamLimits

0xb499,	// (0x0003c1bb) main_cset_slider_pane_g10

0xb4a5,	// (0x0003c1c7) main_cset_slider_pane_g11_ParamLimits

0xb4a5,	// (0x0003c1c7) main_cset_slider_pane_g11

0xb4b1,	// (0x0003c1d3) main_cset_slider_pane_g12_ParamLimits

0xb4b1,	// (0x0003c1d3) main_cset_slider_pane_g12

0xb4bd,	// (0x0003c1df) main_cset_slider_pane_g13_ParamLimits

0xb4bd,	// (0x0003c1df) main_cset_slider_pane_g13

0xb4c9,	// (0x0003c1eb) main_cset_slider_pane_g14_ParamLimits

0xb4c9,	// (0x0003c1eb) main_cset_slider_pane_g14

0xb4d5,	// (0x0003c1f7) main_cset_slider_pane_g15_ParamLimits

0xb4d5,	// (0x0003c1f7) main_cset_slider_pane_g15

0x219d,	// (0x00032ebf) main_cset_slider_pane_t14_ParamLimits

0x219d,	// (0x00032ebf) main_cset_slider_pane_t14

0x21d6,	// (0x00032ef8) main_cset_slider_pane_t15_ParamLimits

0x21d6,	// (0x00032ef8) main_cset_slider_pane_t15

0xb9cc,	// (0x0003c6ee) aid_cam4_burst_size_cell_ParamLimits

0xb9cc,	// (0x0003c6ee) aid_cam4_burst_size_cell

0xb9e8,	// (0x0003c70a) grid_cam4_burst_pane_ParamLimits

0xb9e8,	// (0x0003c70a) grid_cam4_burst_pane

0xba18,	// (0x0003c73a) linegrid_cam4_burst_pane_ParamLimits

0xba18,	// (0x0003c73a) linegrid_cam4_burst_pane

0xba38,	// (0x0003c75a) scroll_pane_cp30_ParamLimits

0xba38,	// (0x0003c75a) scroll_pane_cp30

0xba44,	// (0x0003c766) cell_cam4_burst_pane_ParamLimits

0xba44,	// (0x0003c766) cell_cam4_burst_pane

0x23c8,	// (0x000330ea) linegrid_cam4_burst_pane_g1_ParamLimits

0x23c8,	// (0x000330ea) linegrid_cam4_burst_pane_g1

0xba80,	// (0x0003c7a2) linegrid_cam4_burst_pane_g2_ParamLimits

0xba80,	// (0x0003c7a2) linegrid_cam4_burst_pane_g2

0x23d5,	// (0x000330f7) linegrid_cam4_burst_pane_g3_ParamLimits

0x23d5,	// (0x000330f7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00040782) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00040782) linegrid_cam4_burst_pane_g

0xba91,	// (0x0003c7b3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xba91,	// (0x0003c7b3) linegrid_cam4_burst_pane_g3_copy1

0x23e2,	// (0x00033104) linegrid_cam4_burst_pane_g4_ParamLimits

0x23e2,	// (0x00033104) linegrid_cam4_burst_pane_g4

0xbaab,	// (0x0003c7cd) linegrid_cam4_burst_pane_g5_ParamLimits

0xbaab,	// (0x0003c7cd) linegrid_cam4_burst_pane_g5

0xbabc,	// (0x0003c7de) linegrid_cam4_burst_pane_g6_ParamLimits

0xbabc,	// (0x0003c7de) linegrid_cam4_burst_pane_g6

0x23ef,	// (0x00033111) linegrid_cam4_burst_pane_g7_ParamLimits

0x23ef,	// (0x00033111) linegrid_cam4_burst_pane_g7

0xbacd,	// (0x0003c7ef) cell_cam4_burst_pane_g1

0x2408,	// (0x0003312a) main_cam5_pane_t1_ParamLimits

0x2408,	// (0x0003312a) main_cam5_pane_t1

0x241a,	// (0x0003313c) main_cam5_pane_t2_ParamLimits

0x241a,	// (0x0003313c) main_cam5_pane_t2

0x242c,	// (0x0003314e) main_cam5_pane_t3_ParamLimits

0x242c,	// (0x0003314e) main_cam5_pane_t3

0x243e,	// (0x00033160) main_cam5_pane_t4_ParamLimits

0x243e,	// (0x00033160) main_cam5_pane_t4

0x2456,	// (0x00033178) main_cam5_pane_t5_ParamLimits

0x2456,	// (0x00033178) main_cam5_pane_t5

0x246a,	// (0x0003318c) main_cam5_pane_t6_ParamLimits

0x246a,	// (0x0003318c) main_cam5_pane_t6

0x247e,	// (0x000331a0) main_cam5_pane_t7_ParamLimits

0x247e,	// (0x000331a0) main_cam5_pane_t7

0x2490,	// (0x000331b2) main_cam5_pane_t8_ParamLimits

0x2490,	// (0x000331b2) main_cam5_pane_t8

0x24ac,	// (0x000331ce) main_cam5_pane_t9_ParamLimits

0x24ac,	// (0x000331ce) main_cam5_pane_t9

0x24be,	// (0x000331e0) main_cam5_pane_t10_ParamLimits

0x24be,	// (0x000331e0) main_cam5_pane_t10

0x24d0,	// (0x000331f2) main_cam5_pane_t11_ParamLimits

0x24d0,	// (0x000331f2) main_cam5_pane_t11

0x24e2,	// (0x00033204) main_cam5_pane_t12_ParamLimits

0x24e2,	// (0x00033204) main_cam5_pane_t12

0x24f7,	// (0x00033219) main_cam5_pane_t13_ParamLimits

0x24f7,	// (0x00033219) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0004078e) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0004078e) main_cam5_pane_t

0x61dc,	// (0x00036efe) popup_scut_keymap_window_ParamLimits

0x61dc,	// (0x00036efe) popup_scut_keymap_window

0xbae0,	// (0x0003c802) aid_size_cell_brow_shortcut

0xea04,	// (0x0003f726) bg_popup_window_pane_cp010

0xbaec,	// (0x0003c80e) grid_scut_pane

0xbaf8,	// (0x0003c81a) cell_scut_pane_ParamLimits

0xbaf8,	// (0x0003c81a) cell_scut_pane

0xbb0f,	// (0x0003c831) cell_scut_pane_g1

0x2514,	// (0x00033236) cell_scut_pane_t1

0x2523,	// (0x00033245) cell_scut_pane_t2

0xbb18,	// (0x0003c83a) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x000407a9) cell_scut_pane_t

0x9ba3,	// (0x0003a8c5) main_mup3_pane_g8_ParamLimits

0x9ba3,	// (0x0003a8c5) main_mup3_pane_g8

0xaf50,	// (0x0003bc72) area_vitu2_query_pane_ParamLimits

0xaf50,	// (0x0003bc72) area_vitu2_query_pane

0x52d2,	// (0x00035ff4) input_focus_pane_cp08

0x2532,	// (0x00033254) area_vitu2_query_pane_g1

0x53d3,	// (0x000360f5) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x000407b0) area_vitu2_query_pane_g

0xbb26,	// (0x0003c848) area_vitu2_query_pane_t1_ParamLimits

0xbb26,	// (0x0003c848) area_vitu2_query_pane_t1

0xbb3a,	// (0x0003c85c) area_vitu2_query_pane_t2_ParamLimits

0xbb3a,	// (0x0003c85c) area_vitu2_query_pane_t2

0x53e4,	// (0x00036106) area_vitu2_query_pane_t3_ParamLimits

0x53e4,	// (0x00036106) area_vitu2_query_pane_t3

0x540c,	// (0x0003612e) area_vitu2_query_pane_t4_ParamLimits

0x540c,	// (0x0003612e) area_vitu2_query_pane_t4

0x5434,	// (0x00036156) area_vitu2_query_pane_t5_ParamLimits

0x5434,	// (0x00036156) area_vitu2_query_pane_t5

0x545c,	// (0x0003617e) area_vitu2_query_pane_t6_ParamLimits

0x545c,	// (0x0003617e) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x000407b5) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x000407b5) area_vitu2_query_pane_t

0xbb4e,	// (0x0003c870) bg_button_pane_cp018

0xbb5c,	// (0x0003c87e) bg_button_pane_cp021

0x54a8,	// (0x000361ca) bg_button_pane_cp022

0x54b9,	// (0x000361db) input_focus_pane_cp09

0x8149,	// (0x00038e6b) aid_size_touch_mv_arrow_left

0x8172,	// (0x00038e94) aid_size_touch_mv_arrow_right

0xb4ed,	// (0x0003c20f) main_cset_slider_pane_g16_ParamLimits

0xb4ed,	// (0x0003c20f) main_cset_slider_pane_g16

0xb4fb,	// (0x0003c21d) main_cset_slider_pane_g17_ParamLimits

0xb4fb,	// (0x0003c21d) main_cset_slider_pane_g17

0xbacd,	// (0x0003c7ef) cell_cam4_burst_pane_g1_ParamLimits

0x5f82,	// (0x00036ca4) compa_mode_pane

0xb6fe,	// (0x0003c420) popup_vtel_slider_window_g3_ParamLimits

0xb6fe,	// (0x0003c420) popup_vtel_slider_window_g3

0xb712,	// (0x0003c434) popup_vtel_slider_window_g4_ParamLimits

0xb712,	// (0x0003c434) popup_vtel_slider_window_g4

0xb726,	// (0x0003c448) popup_vtel_slider_window_t1_ParamLimits

0xb726,	// (0x0003c448) popup_vtel_slider_window_t1

0x5f82,	// (0x00036ca4) main_cl_pane

0x0d46,	// (0x00031a68) popup_imed_adjust2_window_ParamLimits

0x0d1e,	// (0x00031a40) bg_tb_trans_pane_cp05_ParamLimits

0x172f,	// (0x00032451) popup_imed_adjust2_window_g1_ParamLimits

0x173e,	// (0x00032460) popup_imed_adjust2_window_g2_ParamLimits

0x173e,	// (0x00032460) popup_imed_adjust2_window_g2

0x174a,	// (0x0003246c) popup_imed_adjust2_window_g3_ParamLimits

0x174a,	// (0x0003246c) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00040520) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00040520) popup_imed_adjust2_window_g

0x1756,	// (0x00032478) popup_imed_adjust2_window_t1_ParamLimits

0x176e,	// (0x00032490) slider_imed_adjust_pane_ParamLimits

0x1782,	// (0x000324a4) slider_imed_adjust_pane_g1_ParamLimits

0x1792,	// (0x000324b4) slider_imed_adjust_pane_g2_ParamLimits

0x17a2,	// (0x000324c4) slider_imed_adjust_pane_g3_ParamLimits

0x17b3,	// (0x000324d5) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00040527) slider_imed_adjust_pane_g_ParamLimits

0xac9e,	// (0x0003b9c0) aid_touch_area_cam4_ParamLimits

0xac9e,	// (0x0003b9c0) aid_touch_area_cam4

0xacae,	// (0x0003b9d0) battery_pane_cp01

0xad35,	// (0x0003ba57) main_camera4_pane_g6_ParamLimits

0xad35,	// (0x0003ba57) main_camera4_pane_g6

0xad53,	// (0x0003ba75) main_camera4_pane_t2_ParamLimits

0xad53,	// (0x0003ba75) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0004062a) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0004062a) main_camera4_pane_t

0xadda,	// (0x0003bafc) aid_touch_area_vid4_ParamLimits

0xadda,	// (0x0003bafc) aid_touch_area_vid4

0xae1a,	// (0x0003bb3c) main_video4_pane_g5_ParamLimits

0xae1a,	// (0x0003bb3c) main_video4_pane_g5

0xae3c,	// (0x0003bb5e) vid4_progress_pane_ParamLimits

0xae3c,	// (0x0003bb5e) vid4_progress_pane

0x2163,	// (0x00032e85) main_cset_slider_pane_g18_ParamLimits

0x2163,	// (0x00032e85) main_cset_slider_pane_g18

0x23fc,	// (0x0003311e) cell_cam4_burst_pane_g2_ParamLimits

0x23fc,	// (0x0003311e) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00040789) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00040789) cell_cam4_burst_pane_g

0xbb68,	// (0x0003c88a) bg_cl_pane_ParamLimits

0xbb68,	// (0x0003c88a) bg_cl_pane

0xbb74,	// (0x0003c896) cl_header_pane_ParamLimits

0xbb74,	// (0x0003c896) cl_header_pane

0xbb80,	// (0x0003c8a2) cl_listscroll_pane_ParamLimits

0xbb80,	// (0x0003c8a2) cl_listscroll_pane

0x25da,	// (0x000332fc) bg_cl_pane_g1

0x25e2,	// (0x00033304) bg_cl_pane_g2

0x25ea,	// (0x0003330c) bg_cl_pane_g3

0x25f2,	// (0x00033314) bg_cl_pane_g4

0x25fa,	// (0x0003331c) bg_cl_pane_g5

0x2602,	// (0x00033324) bg_cl_pane_g6

0x260a,	// (0x0003332c) bg_cl_pane_g7

0x2612,	// (0x00033334) bg_cl_pane_g8

0x261a,	// (0x0003333c) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x000407c4) bg_cl_pane_g

0xbb8c,	// (0x0003c8ae) aid_height_cl_leading_ParamLimits

0xbb8c,	// (0x0003c8ae) aid_height_cl_leading

0xbb98,	// (0x0003c8ba) aid_height_cl_text_ParamLimits

0xbb98,	// (0x0003c8ba) aid_height_cl_text

0x6213,	// (0x00036f35) bg_cl_header_pane_ParamLimits

0x6213,	// (0x00036f35) bg_cl_header_pane

0xbbb0,	// (0x0003c8d2) cl_header_pane_g1_ParamLimits

0xbbb0,	// (0x0003c8d2) cl_header_pane_g1

0xbbbd,	// (0x0003c8df) cl_header_pane_t1_ParamLimits

0xbbbd,	// (0x0003c8df) cl_header_pane_t1

0x2622,	// (0x00033344) cl_list_pane

0x2136,	// (0x00032e58) hc_scroll_pane_cp01

0xe2f9,	// (0x0003f01b) bg_cl_header_pane_g1

0x201c,	// (0x00032d3e) bg_cl_header_pane_g2

0xe319,	// (0x0003f03b) bg_cl_header_pane_g3

0x202c,	// (0x00032d4e) bg_cl_header_pane_g4

0x2024,	// (0x00032d46) bg_cl_header_pane_g5

0x22c9,	// (0x00032feb) bg_cl_header_pane_g6

0x2044,	// (0x00032d66) bg_cl_header_pane_g7

0x204c,	// (0x00032d6e) bg_cl_header_pane_g8

0x203c,	// (0x00032d5e) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x000407d7) bg_cl_header_pane_g

0xbbcf,	// (0x0003c8f1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbbcf,	// (0x0003c8f1) hc_cl_list_double_graphic_heading_pane

0xbbe0,	// (0x0003c902) hc_cl_list_single_graphic_pane_ParamLimits

0xbbe0,	// (0x0003c902) hc_cl_list_single_graphic_pane

0xbbf9,	// (0x0003c91b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbbf9,	// (0x0003c91b) hc_cl_list_single_graphic_pane_g1

0xbc05,	// (0x0003c927) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbc05,	// (0x0003c927) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x000407ea) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x000407ea) hc_cl_list_single_graphic_pane_g

0xbc19,	// (0x0003c93b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbc19,	// (0x0003c93b) hc_cl_list_single_graphic_pane_t1

0xbbf9,	// (0x0003c91b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbbf9,	// (0x0003c91b) hc_cl_list_double_graphic_heading_pane_g1

0xbc2e,	// (0x0003c950) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbc2e,	// (0x0003c950) hc_cl_list_double_graphic_heading_pane_g2

0xbc42,	// (0x0003c964) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbc42,	// (0x0003c964) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x000407ef) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x000407ef) hc_cl_list_double_graphic_heading_pane_g

0xbc56,	// (0x0003c978) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbc56,	// (0x0003c978) hc_cl_list_double_graphic_heading_pane_t1

0xbc6b,	// (0x0003c98d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbc6b,	// (0x0003c98d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x000407f6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x000407f6) hc_cl_list_double_graphic_heading_pane_t

0xbc88,	// (0x0003c9aa) vid4_progress_pane_g1

0xbc98,	// (0x0003c9ba) vid4_progress_pane_g2

0x8795,	// (0x000394b7) vid4_progress_pane_g3

0xbca8,	// (0x0003c9ca) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x000407fb) vid4_progress_pane_g

0xbcc6,	// (0x0003c9e8) vid4_progress_pane_t1

0xbcdb,	// (0x0003c9fd) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00040806) vid4_progress_pane_t

0xbd06,	// (0x0003ca28) wait_bar_pane_cp07

0x1017,	// (0x00031d39) blid_firmament_pane_ParamLimits

0x105a,	// (0x00031d7c) popup_blid_sat_info2_window_g1

0x107e,	// (0x00031da0) popup_blid_sat_info2_window_t3

0x108c,	// (0x00031dae) popup_blid_sat_info2_window_t4

0x109a,	// (0x00031dbc) popup_blid_sat_info2_window_t5

0x10a8,	// (0x00031dca) popup_blid_sat_info2_window_t6

0x10b8,	// (0x00031dda) popup_blid_sat_info2_window_t7

0x10c6,	// (0x00031de8) popup_blid_sat_info2_window_t8

0x10d4,	// (0x00031df6) popup_blid_sat_info2_window_t9

0x10e2,	// (0x00031e04) popup_blid_sat_info2_window_t10

0x11a4,	// (0x00031ec6) aid_firma_cardinal_ParamLimits

0x11b8,	// (0x00031eda) blid_firmament_pane_t1_ParamLimits

0x11cf,	// (0x00031ef1) blid_firmament_pane_t2_ParamLimits

0x11e6,	// (0x00031f08) blid_firmament_pane_t3_ParamLimits

0x11fd,	// (0x00031f1f) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00040419) blid_firmament_pane_t_ParamLimits

0x1214,	// (0x00031f36) blid_sat_info_pane_ParamLimits

0xf0d2,	// (0x0003fdf4) main_cam_set_pane_ParamLimits

0xa328,	// (0x0003b04a) aid_size_cell_colour_35_ParamLimits

0xa342,	// (0x0003b064) aid_size_cell_colour_112_ParamLimits

0xa359,	// (0x0003b07b) aid_size_cell_effect_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_tb_trans_pane_cp02_ParamLimits

0xf0e0,	// (0x0003fe02) heading_imed_pane_ParamLimits

0xa373,	// (0x0003b095) listscroll_imed_pane_ParamLimits

0x0350,	// (0x00031072) popup_call2_audio_first_window_g5_ParamLimits

0x0350,	// (0x00031072) popup_call2_audio_first_window_g5

0xaa5b,	// (0x0003b77d) aid_size_touch_image3_arrow_left_ParamLimits

0xaa5b,	// (0x0003b77d) aid_size_touch_image3_arrow_left

0xaa71,	// (0x0003b793) aid_size_touch_image3_arrow_right_ParamLimits

0xaa71,	// (0x0003b793) aid_size_touch_image3_arrow_right

0xbcf1,	// (0x0003ca13) vid4_progress_pane_t3

0xa610,	// (0x0003b332) main_hwr_training_symbol_option_pane_ParamLimits

0xa610,	// (0x0003b332) main_hwr_training_symbol_option_pane

0x1a1c,	// (0x0003273e) popup_hwr_training_preview_window_ParamLimits

0x1a1c,	// (0x0003273e) popup_hwr_training_preview_window

0xa671,	// (0x0003b393) hwr_training_navi_pane_g5_ParamLimits

0xa671,	// (0x0003b393) hwr_training_navi_pane_g5

0x1ffc,	// (0x00032d1e) popup_char_count_window

0x6213,	// (0x00036f35) bg_popup_sub_pane_cp20_ParamLimits

0xb81c,	// (0x0003c53e) list_vitu2_match_list_pane_ParamLimits

0xb828,	// (0x0003c54a) vitu2_page_scroll_pane_ParamLimits

0xb828,	// (0x0003c54a) vitu2_page_scroll_pane

0x271d,	// (0x0003343f) list_single_hwr_training_symbol_option_pane_ParamLimits

0x271d,	// (0x0003343f) list_single_hwr_training_symbol_option_pane

0x2730,	// (0x00033452) list_single_hwr_training_symbol_option_pane_g1

0x2738,	// (0x0003345a) list_single_hwr_training_symbol_option_pane_t1

0x2746,	// (0x00033468) bg_button_pane_cp023

0x274f,	// (0x00033471) bg_button_pane_cp024

0xbd18,	// (0x0003ca3a) vitu2_page_scroll_pane_g1

0xbd20,	// (0x0003ca42) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0004080d) vitu2_page_scroll_pane_g

0xbd28,	// (0x0003ca4a) vitu2_page_scroll_pane_t1

0x2782,	// (0x000334a4) popup_char_count_window_g1

0x278b,	// (0x000334ad) popup_char_count_window_g2

0x2794,	// (0x000334b6) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00040812) popup_char_count_window_g

0x279d,	// (0x000334bf) popup_char_count_window_t1

0x5f82,	// (0x00036ca4) main_vded2_pane

0x171b,	// (0x0003243d) aid_size_cell_imed_line

0x1725,	// (0x00032447) grid_imed_line_width_pane

0xaea5,	// (0x0003bbc7) vid4_indicators_pane_g4

0x27ab,	// (0x000334cd) cell_imed_line_width_pane_ParamLimits

0x27ab,	// (0x000334cd) cell_imed_line_width_pane

0x27bf,	// (0x000334e1) cell_imed_line_width_pane_g1

0x0fc5,	// (0x00031ce7) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00040819) cell_imed_line_width_pane_g

0xbd37,	// (0x0003ca59) main_vded2_pane_g1_ParamLimits

0xbd37,	// (0x0003ca59) main_vded2_pane_g1

0xbd44,	// (0x0003ca66) main_vded2_pane_g2_ParamLimits

0xbd44,	// (0x0003ca66) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0004081e) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0004081e) main_vded2_pane_g

0xbd52,	// (0x0003ca74) vded2_slider_pane_ParamLimits

0xbd52,	// (0x0003ca74) vded2_slider_pane

0xbd5f,	// (0x0003ca81) aid_size_touch_vded2_end

0xbd69,	// (0x0003ca8b) aid_size_touch_vded2_playhead

0x27c8,	// (0x000334ea) aid_size_touch_vded2_start

0x27d0,	// (0x000334f2) vded2_slider_bg_pane

0x27d9,	// (0x000334fb) vded2_slider_pane_g1

0x27e2,	// (0x00033504) vded2_slider_pane_g2

0xbd71,	// (0x0003ca93) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00040823) vded2_slider_pane_g

0x27ea,	// (0x0003350c) vded2_slider_bg_pane_g1

0x27f3,	// (0x00033515) vded2_slider_bg_pane_g2

0x27fc,	// (0x0003351e) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0004082a) vded2_slider_bg_pane_g

0x87ad,	// (0x000394cf) aid_postcard_touch_down_pane_ParamLimits

0x87ad,	// (0x000394cf) aid_postcard_touch_down_pane

0x87bd,	// (0x000394df) aid_postcard_touch_up_pane_ParamLimits

0x87bd,	// (0x000394df) aid_postcard_touch_up_pane

0x5f82,	// (0x00036ca4) main_blid2_pane

0x0d2c,	// (0x00031a4e) popup_blid2_search_window

0x5f82,	// (0x00036ca4) blid2_gps_pane

0x5f82,	// (0x00036ca4) blid2_navig_pane

0x5f82,	// (0x00036ca4) blid2_search_pane

0x5f82,	// (0x00036ca4) blid2_tripm_pane

0xbd7a,	// (0x0003ca9c) blid2_search_pane_g1_ParamLimits

0xbd7a,	// (0x0003ca9c) blid2_search_pane_g1

0xbd8a,	// (0x0003caac) blid2_search_pane_t1_ParamLimits

0xbd8a,	// (0x0003caac) blid2_search_pane_t1

0xbd9c,	// (0x0003cabe) aid_size_cell_blid2_gps_ParamLimits

0xbd9c,	// (0x0003cabe) aid_size_cell_blid2_gps

0xbdac,	// (0x0003cace) blid2_gps_pane_g1_ParamLimits

0xbdac,	// (0x0003cace) blid2_gps_pane_g1

0xbdb8,	// (0x0003cada) grid_blid2_satellite_pane_ParamLimits

0xbdb8,	// (0x0003cada) grid_blid2_satellite_pane

0xbdc8,	// (0x0003caea) blid2_navig_pane_g1_ParamLimits

0xbdc8,	// (0x0003caea) blid2_navig_pane_g1

0xbdd4,	// (0x0003caf6) blid2_navig_pane_t1_ParamLimits

0xbdd4,	// (0x0003caf6) blid2_navig_pane_t1

0xbde6,	// (0x0003cb08) blid2_navig_pane_t2_ParamLimits

0xbde6,	// (0x0003cb08) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00040831) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00040831) blid2_navig_pane_t

0xbdf8,	// (0x0003cb1a) blid2_navig_ring_pane_ParamLimits

0xbdf8,	// (0x0003cb1a) blid2_navig_ring_pane

0xbe08,	// (0x0003cb2a) blid2_speed_pane_ParamLimits

0xbe08,	// (0x0003cb2a) blid2_speed_pane

0xbe14,	// (0x0003cb36) blid2_tripm_pane_g1_ParamLimits

0xbe14,	// (0x0003cb36) blid2_tripm_pane_g1

0xbe24,	// (0x0003cb46) blid2_tripm_pane_g2_ParamLimits

0xbe24,	// (0x0003cb46) blid2_tripm_pane_g2

0xbe30,	// (0x0003cb52) blid2_tripm_pane_g3_ParamLimits

0xbe30,	// (0x0003cb52) blid2_tripm_pane_g3

0xbe3c,	// (0x0003cb5e) blid2_tripm_pane_g4_ParamLimits

0xbe3c,	// (0x0003cb5e) blid2_tripm_pane_g4

0xbe48,	// (0x0003cb6a) blid2_tripm_pane_g5_ParamLimits

0xbe48,	// (0x0003cb6a) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00040836) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00040836) blid2_tripm_pane_g

0xbe64,	// (0x0003cb86) blid2_tripm_pane_t1_ParamLimits

0xbe64,	// (0x0003cb86) blid2_tripm_pane_t1

0xbe78,	// (0x0003cb9a) blid2_tripm_pane_t2_ParamLimits

0xbe78,	// (0x0003cb9a) blid2_tripm_pane_t2

0xbe8a,	// (0x0003cbac) blid2_tripm_pane_t3_ParamLimits

0xbe8a,	// (0x0003cbac) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00040843) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00040843) blid2_tripm_pane_t

0xbebc,	// (0x0003cbde) cell_blid2_satellite_pane_ParamLimits

0xbebc,	// (0x0003cbde) cell_blid2_satellite_pane

0xbed6,	// (0x0003cbf8) cell_blid2_satellite_pane_g1

0x2805,	// (0x00033527) cell_blid2_satellite_pane_t1

0x1224,	// (0x00031f46) blid2_speed_pane_g1

0x2813,	// (0x00033535) blid2_speed_pane_t1

0x2821,	// (0x00033543) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0004084c) blid2_speed_pane_t

0x1224,	// (0x00031f46) blid2_navig_ring_pane_g1

0xbedf,	// (0x0003cc01) blid2_navig_ring_pane_g2

0xbee7,	// (0x0003cc09) blid2_navig_ring_pane_g3

0xbeef,	// (0x0003cc11) blid2_navig_ring_pane_g4

0xbef7,	// (0x0003cc19) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00040851) blid2_navig_ring_pane_g

0x5f82,	// (0x00036ca4) bg_popup_window_pane_cp011

0x282f,	// (0x00033551) popup_blid2_search_window_g1

0x2837,	// (0x00033559) popup_blid2_search_window_t1

0x2845,	// (0x00033567) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0004085c) popup_blid2_search_window_t

0xe208,	// (0x0003ef2a) main_browser_pane_g1

0xdf25,	// (0x0003ec47) main_browser_pane_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_button_pane_cp011_ParamLimits

0xb10e,	// (0x0003be30) cell_vitu2_function_pane_g1_ParamLimits

0x0d1e,	// (0x00031a40) bg_popup_sub_pane_cp22_ParamLimits

0x52d2,	// (0x00035ff4) input_focus_pane_cp08_ParamLimits

0xb979,	// (0x0003c69b) popup_vitu2_query_button_pane_ParamLimits

0xb979,	// (0x0003c69b) popup_vitu2_query_button_pane

0x52e9,	// (0x0003600b) popup_vitu2_query_input_button_pane

0x2346,	// (0x00033068) popup_vitu2_query_window_g1_ParamLimits

0x52f3,	// (0x00036015) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0004075d) popup_vitu2_query_window_g_ParamLimits

0x5f82,	// (0x00036ca4) bg_button_pane_cp026

0xbeff,	// (0x0003cc21) popup_vitu2_query_input_button_pane_g1

0x5f82,	// (0x00036ca4) bg_button_pane_cp025

0x2853,	// (0x00033575) popup_vitu2_query_button_pane_t1

0x98fa,	// (0x0003a61c) main_mp3_pane_t6

0x990a,	// (0x0003a62c) popup_slider_window_cp01

0xad89,	// (0x0003baab) cam4_battery_pane

0xae68,	// (0x0003bb8a) cam4_battery_pane_cp02

0xbc80,	// (0x0003c9a2) cam4_battery_pane_cp01

0xbc80,	// (0x0003c9a2) cam4_battery_pane_cp03

0x1224,	// (0x00031f46) cam4_battery_pane_g1

0x1d6f,	// (0x00032a91) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00040861) cam4_battery_pane_g

0x10f0,	// (0x00031e12) popup_blid_sat_info2_window_t11

0x8149,	// (0x00038e6b) aid_size_touch_mv_arrow_left_ParamLimits

0x8172,	// (0x00038e94) aid_size_touch_mv_arrow_right_ParamLimits

0xe964,	// (0x0003f686) navi_pane_g1_ParamLimits

0x819b,	// (0x00038ebd) navi_pane_g2_ParamLimits

0x81c9,	// (0x00038eeb) navi_pane_g3_ParamLimits

0xf409,	// (0x0004012b) navi_pane_g_ParamLimits

0x8223,	// (0x00038f45) navi_pane_mv_t1_ParamLimits

0xa37f,	// (0x0003b0a1) grid_imed_effect_pane_ParamLimits

0x6f01,	// (0x00037c23) aid_placing_vt_slider_lsc

0xe159,	// (0x0003ee7b) aid_placing_vt_slider_prt

0xf0d2,	// (0x0003fdf4) bg_tb_trans_pane_cp01_ParamLimits

0x13b0,	// (0x000320d2) popup_image_details_window_g1_ParamLimits

0x13c3,	// (0x000320e5) popup_image_details_window_g2_ParamLimits

0x13d8,	// (0x000320fa) popup_image_details_window_g3_ParamLimits

0x13d8,	// (0x000320fa) popup_image_details_window_g3

0xf73c,	// (0x0004045e) popup_image_details_window_g_ParamLimits

0x13ec,	// (0x0003210e) popup_image_details_window_t1_ParamLimits

0x13fe,	// (0x00032120) popup_image_details_window_t2_ParamLimits

0x1417,	// (0x00032139) popup_image_details_window_t3_ParamLimits

0x142b,	// (0x0003214d) popup_image_details_window_t4_ParamLimits

0x1446,	// (0x00032168) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00040465) popup_image_details_window_t_ParamLimits

0xbba4,	// (0x0003c8c6) cl_header_name_pane_ParamLimits

0xbba4,	// (0x0003c8c6) cl_header_name_pane

0xbf07,	// (0x0003cc29) cl_header_name_pane_t1_ParamLimits

0xbf07,	// (0x0003cc29) cl_header_name_pane_t1

0xbf1e,	// (0x0003cc40) cl_header_name_pane_t2_ParamLimits

0xbf1e,	// (0x0003cc40) cl_header_name_pane_t2

0xbf48,	// (0x0003cc6a) cl_header_name_pane_t3_ParamLimits

0xbf48,	// (0x0003cc6a) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x00040866) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x00040866) cl_header_name_pane_t

0x81f4,	// (0x00038f16) navi_pane_mv_g2_ParamLimits

0x1f8a,	// (0x00032cac) field_vitu2_entry_pane_g1_ParamLimits

0x1f96,	// (0x00032cb8) field_vitu2_entry_pane_g2_ParamLimits

0x1fa2,	// (0x00032cc4) field_vitu2_entry_pane_g3_ParamLimits

0x1fa2,	// (0x00032cc4) field_vitu2_entry_pane_g3

0xf93a,	// (0x0004065c) field_vitu2_entry_pane_g_ParamLimits

0xb09e,	// (0x0003bdc0) cell_vitu2_itu_pane_g1_ParamLimits

0xb0ae,	// (0x0003bdd0) cell_vitu2_itu_pane_g2_ParamLimits

0xb0ae,	// (0x0003bdd0) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00040668) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00040668) cell_vitu2_itu_pane_g

0xf0d2,	// (0x0003fdf4) bg_vkb2_func_pane_cp05_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_vkb2_func_pane_cp05

0xf0d2,	// (0x0003fdf4) bg_vkb2_func_pane_cp03

0xf0d2,	// (0x0003fdf4) bg_vkb2_func_pane_cp04

0xf0d2,	// (0x0003fdf4) bg_vkb2_func_pane_cp10_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_vkb2_func_pane_cp10

0x54a8,	// (0x000361ca) bg_vkb2_func_pane_cp08

0xbb4e,	// (0x0003c870) bg_vkb2_func_pane_cp06

0xbb5c,	// (0x0003c87e) bg_vkb2_func_pane_cp07

0x2758,	// (0x0003347a) bg_vkb2_func_pane_cp11_ParamLimits

0x2758,	// (0x0003347a) bg_vkb2_func_pane_cp11

0x276d,	// (0x0003348f) bg_vkb2_func_pane_cp12_ParamLimits

0x276d,	// (0x0003348f) bg_vkb2_func_pane_cp12

0x5f82,	// (0x00036ca4) bg_vkb2_func_pane_cp09

0x201c,	// (0x00032d3e) bg_vkb2_func_pane_g1

0xe319,	// (0x0003f03b) bg_vkb2_func_pane_g2

0x2024,	// (0x00032d46) bg_vkb2_func_pane_g3

0x202c,	// (0x00032d4e) bg_vkb2_func_pane_g4

0x22c9,	// (0x00032feb) bg_vkb2_func_pane_g5

0x2044,	// (0x00032d66) bg_vkb2_func_pane_g6

0x204c,	// (0x00032d6e) bg_vkb2_func_pane_g7

0x203c,	// (0x00032d5e) bg_vkb2_func_pane_g8

0xe2f9,	// (0x0003f01b) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0004086d) bg_vkb2_func_pane_g

0xbe56,	// (0x0003cb78) blid2_tripm_pane_g6_ParamLimits

0xbe56,	// (0x0003cb78) blid2_tripm_pane_g6

0x1d29,	// (0x00032a4b) mp4_progress_pane_g1

0xbeb0,	// (0x0003cbd2) blid2_tripm_values_pane_ParamLimits

0xbeb0,	// (0x0003cbd2) blid2_tripm_values_pane

0xbf6d,	// (0x0003cc8f) blid2_tripm_values_pane_t1

0xbf7b,	// (0x0003cc9d) blid2_tripm_values_pane_t2

0xbf89,	// (0x0003ccab) blid2_tripm_values_pane_t3

0xbf97,	// (0x0003ccb9) blid2_tripm_values_pane_t4

0xbfa5,	// (0x0003ccc7) blid2_tripm_values_pane_t5

0xbfb3,	// (0x0003ccd5) blid2_tripm_values_pane_t6

0xbfc1,	// (0x0003cce3) blid2_tripm_values_pane_t7

0xbfcf,	// (0x0003ccf1) blid2_tripm_values_pane_t8

0xbfdd,	// (0x0003ccff) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x00040880) blid2_tripm_values_pane_t

0x6f41,	// (0x00037c63) call_video_pane_t1_ParamLimits

0x6f62,	// (0x00037c84) call_video_pane_t2_ParamLimits

0xf292,	// (0x0003ffb4) call_video_pane_t_ParamLimits

0x503a,	// (0x00035d5c) msg_header_pane_g1_ParamLimits

0xeb7f,	// (0x0003f8a1) msg_header_pane_g2_ParamLimits

0xeb7f,	// (0x0003f8a1) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x000401ce) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x000401ce) msg_header_pane_g

0xdf25,	// (0x0003ec47) main_clock2_pane_ParamLimits

0xa10f,	// (0x0003ae31) grid_clock2_toolbar_pane_ParamLimits

0xa10f,	// (0x0003ae31) grid_clock2_toolbar_pane

0xa10f,	// (0x0003ae31) listscroll_clock2_pane_ParamLimits

0xa10f,	// (0x0003ae31) listscroll_clock2_pane

0xa1bc,	// (0x0003aede) main_clock2_pane_t3_ParamLimits

0xa1bc,	// (0x0003aede) main_clock2_pane_t3

0xa1ce,	// (0x0003aef0) main_clock2_pane_t4_ParamLimits

0xa1ce,	// (0x0003aef0) main_clock2_pane_t4

0x2861,	// (0x00033583) cell_clock2_toolbar_pane

0x2869,	// (0x0003358b) cell_clock2_toolbar_pane_cp01

0x2869,	// (0x0003358b) cell_clock2_toolbar_pane_cp02

0x2871,	// (0x00033593) cell_clock2_toolbar_pane_cp03

0x2879,	// (0x0003359b) list_clock2_pane

0xe8bb,	// (0x0003f5dd) scroll_pane_cp10

0x2881,	// (0x000335a3) list_single_clock2_pane_ParamLimits

0x2881,	// (0x000335a3) list_single_clock2_pane

0xea04,	// (0x0003f726) list_highlight_pane_cp08

0x288e,	// (0x000335b0) list_single_clock2_pane_t1

0x289c,	// (0x000335be) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x00040893) list_single_clock2_pane_t

0x5f82,	// (0x00036ca4) bg_button_pane_cp10

0x28aa,	// (0x000335cc) cell_clock2_toolbar_pane_g1

0x870f,	// (0x00039431) aid_main_viewer_pane_g1_ParamLimits

0x870f,	// (0x00039431) aid_main_viewer_pane_g1

0x871b,	// (0x0003943d) aid_main_viewer_pane_g2_ParamLimits

0x871b,	// (0x0003943d) aid_main_viewer_pane_g2

0x8727,	// (0x00039449) aid_main_viewer_pane_g3_ParamLimits

0x8727,	// (0x00039449) aid_main_viewer_pane_g3

0x8738,	// (0x0003945a) aid_main_viewer_pane_g4_ParamLimits

0x8738,	// (0x0003945a) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x000401df) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x000401df) aid_main_viewer_pane_g

0x8eb8,	// (0x00039bda) main_calc_pane_ParamLimits

0x8ec5,	// (0x00039be7) main_dialer2_pane_ParamLimits

0x5f82,	// (0x00036ca4) main_cam6_pane

0x5f82,	// (0x00036ca4) main_vid6_pane

0xa11b,	// (0x0003ae3d) listscroll_gen_pane_cp06_ParamLimits

0xa11b,	// (0x0003ae3d) listscroll_gen_pane_cp06

0xa1e0,	// (0x0003af02) main_clock2_pane_t5_ParamLimits

0xa1e0,	// (0x0003af02) main_clock2_pane_t5

0xa229,	// (0x0003af4b) aid_call2_pane_cp10_ParamLimits

0xa23b,	// (0x0003af5d) aid_call_pane_cp10_ParamLimits

0xe939,	// (0x0003f65b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe939,	// (0x0003f65b) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa24d,	// (0x0003af6f) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa24d,	// (0x0003af6f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe939,	// (0x0003f65b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00040515) popup_clock_analogue_window_cp10_g_ParamLimits

0xa25f,	// (0x0003af81) popup_clock_analogue_window_cp10_t1_ParamLimits

0xaa08,	// (0x0003b72a) cell_dialer2_keypad_pane_g2_ParamLimits

0xaa08,	// (0x0003b72a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x000405fb) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x000405fb) cell_dialer2_keypad_pane_g

0xaa24,	// (0x0003b746) cell_dialer2_keypad_pane_t1

0xb3d9,	// (0x0003c0fb) main_cset_text2_pane_ParamLimits

0xb3d9,	// (0x0003c0fb) main_cset_text2_pane

0x2532,	// (0x00033254) area_vitu2_query_pane_g1_ParamLimits

0x53d3,	// (0x000360f5) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x000407b0) area_vitu2_query_pane_g_ParamLimits

0x5484,	// (0x000361a6) area_vitu2_query_pane_t7_ParamLimits

0x5484,	// (0x000361a6) area_vitu2_query_pane_t7

0xbb4e,	// (0x0003c870) bg_button_pane_cp018_ParamLimits

0xbb5c,	// (0x0003c87e) bg_button_pane_cp021_ParamLimits

0x54a8,	// (0x000361ca) bg_button_pane_cp022_ParamLimits

0x54a8,	// (0x000361ca) bg_vkb2_func_pane_cp08_ParamLimits

0xbb4e,	// (0x0003c870) bg_vkb2_func_pane_cp06_ParamLimits

0xbb5c,	// (0x0003c87e) bg_vkb2_func_pane_cp07_ParamLimits

0x54b9,	// (0x000361db) input_focus_pane_cp09_ParamLimits

0xbfeb,	// (0x0003cd0d) cam6_autofocus_pane_ParamLimits

0xbfeb,	// (0x0003cd0d) cam6_autofocus_pane

0xc00d,	// (0x0003cd2f) cam6_image_uncrop_pane_ParamLimits

0xc00d,	// (0x0003cd2f) cam6_image_uncrop_pane

0xc03a,	// (0x0003cd5c) cam6_indi_pane_ParamLimits

0xc03a,	// (0x0003cd5c) cam6_indi_pane

0xc054,	// (0x0003cd76) cam6_mode_pane_ParamLimits

0xc054,	// (0x0003cd76) cam6_mode_pane

0xc068,	// (0x0003cd8a) cam6_timer_pane_ParamLimits

0xc068,	// (0x0003cd8a) cam6_timer_pane

0xc074,	// (0x0003cd96) cam6_zoom_pane_ParamLimits

0xc074,	// (0x0003cd96) cam6_zoom_pane

0xadea,	// (0x0003bb0c) cam6_mode_pane_g1_ParamLimits

0xadea,	// (0x0003bb0c) cam6_mode_pane_g1

0xae02,	// (0x0003bb24) cam6_mode_pane_g2_ParamLimits

0xae02,	// (0x0003bb24) cam6_mode_pane_g2

0xae0e,	// (0x0003bb30) cam6_mode_pane_g3_ParamLimits

0xae0e,	// (0x0003bb30) cam6_mode_pane_g3

0xae1a,	// (0x0003bb3c) cam6_mode_pane_g4_ParamLimits

0xae1a,	// (0x0003bb3c) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00040898) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00040898) cam6_mode_pane_g

0x28c0,	// (0x000335e2) bg_tb_trans_pane_cp08_ParamLimits

0x28c0,	// (0x000335e2) bg_tb_trans_pane_cp08

0x28ce,	// (0x000335f0) cam6_battery_pane_ParamLimits

0x28ce,	// (0x000335f0) cam6_battery_pane

0x28e4,	// (0x00033606) cam6_indi_pane_g1_ParamLimits

0x28e4,	// (0x00033606) cam6_indi_pane_g1

0x28f6,	// (0x00033618) cam6_indi_pane_g2_ParamLimits

0x28f6,	// (0x00033618) cam6_indi_pane_g2

0x2908,	// (0x0003362a) cam6_indi_pane_g3_ParamLimits

0x2908,	// (0x0003362a) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x000408a1) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x000408a1) cam6_indi_pane_g

0x291a,	// (0x0003363c) cam6_indi_pane_t1_ParamLimits

0x291a,	// (0x0003363c) cam6_indi_pane_t1

0xaeda,	// (0x0003bbfc) cam6_autofocus_pane_g1

0xaee2,	// (0x0003bc04) cam6_autofocus_pane_g2

0xaeea,	// (0x0003bc0c) cam6_autofocus_pane_g3

0xaef2,	// (0x0003bc14) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x000408a8) cam6_autofocus_pane_g

0x2940,	// (0x00033662) cam6_timer_pane_g1

0x2948,	// (0x0003366a) cam6_timer_pane_t1

0x2956,	// (0x00033678) cam6_zoom_cont_pane

0x295e,	// (0x00033680) cam6_zoom_pane_g1

0x2966,	// (0x00033688) cam6_zoom_pane_g2

0xc08c,	// (0x0003cdae) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x000408b1) cam6_zoom_pane_g

0x1224,	// (0x00031f46) cam6_battery_pane_g1

0x1224,	// (0x00031f46) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00040422) cam6_battery_pane_g

0x296e,	// (0x00033690) cam6_zoom_cont_pane_g1

0x2977,	// (0x00033699) cam6_zoom_cont_pane_g2

0x2980,	// (0x000336a2) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x000408b8) cam6_zoom_cont_pane_g

0xc0a9,	// (0x0003cdcb) cam6_mode_pane_cp_ParamLimits

0xc0a9,	// (0x0003cdcb) cam6_mode_pane_cp

0xc074,	// (0x0003cd96) cam6_zoom_pane_cp_ParamLimits

0xc074,	// (0x0003cd96) cam6_zoom_pane_cp

0xc0bd,	// (0x0003cddf) vid6_image_uncrop_cif_pane_ParamLimits

0xc0bd,	// (0x0003cddf) vid6_image_uncrop_cif_pane

0xc0e9,	// (0x0003ce0b) vid6_image_uncrop_nhd_pane_ParamLimits

0xc0e9,	// (0x0003ce0b) vid6_image_uncrop_nhd_pane

0xc00d,	// (0x0003cd2f) vid6_image_uncrop_vga_pane_ParamLimits

0xc00d,	// (0x0003cd2f) vid6_image_uncrop_vga_pane

0xc106,	// (0x0003ce28) vid6_image_uncrop_wvga_pane_ParamLimits

0xc106,	// (0x0003ce28) vid6_image_uncrop_wvga_pane

0xc123,	// (0x0003ce45) vid6_indi_pane_ParamLimits

0xc123,	// (0x0003ce45) vid6_indi_pane

0x28c0,	// (0x000335e2) bg_tb_trans_pane_cp09_ParamLimits

0x28c0,	// (0x000335e2) bg_tb_trans_pane_cp09

0x2998,	// (0x000336ba) cam6_battery_pane_cp_ParamLimits

0x2998,	// (0x000336ba) cam6_battery_pane_cp

0x29a4,	// (0x000336c6) vid6_indi_pane_g1_ParamLimits

0x29a4,	// (0x000336c6) vid6_indi_pane_g1

0x29b6,	// (0x000336d8) vid6_indi_pane_g2_ParamLimits

0x29b6,	// (0x000336d8) vid6_indi_pane_g2

0x29c8,	// (0x000336ea) vid6_indi_pane_g3_ParamLimits

0x29c8,	// (0x000336ea) vid6_indi_pane_g3

0x29dd,	// (0x000336ff) vid6_indi_pane_g4_ParamLimits

0x29dd,	// (0x000336ff) vid6_indi_pane_g4

0x29f2,	// (0x00033714) vid6_indi_pane_g5_ParamLimits

0x29f2,	// (0x00033714) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x000408bf) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x000408bf) vid6_indi_pane_g

0x2a0c,	// (0x0003372e) vid6_indi_pane_t1_ParamLimits

0x2a0c,	// (0x0003372e) vid6_indi_pane_t1

0x2a22,	// (0x00033744) vid6_indi_pane_t2_ParamLimits

0x2a22,	// (0x00033744) vid6_indi_pane_t2

0x2a4a,	// (0x0003376c) vid6_indi_pane_t3_ParamLimits

0x2a4a,	// (0x0003376c) vid6_indi_pane_t3

0x2a72,	// (0x00033794) vid6_indi_pane_t4_ParamLimits

0x2a72,	// (0x00033794) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x000408ca) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x000408ca) vid6_indi_pane_t

0x2a96,	// (0x000337b8) wait_bar_pane_cp08

0xc148,	// (0x0003ce6a) main_cset_text2_pane_t1_ParamLimits

0xc148,	// (0x0003ce6a) main_cset_text2_pane_t1

0xc094,	// (0x0003cdb6) listscroll_gen_pane_cp06_t1_ParamLimits

0xc094,	// (0x0003cdb6) listscroll_gen_pane_cp06_t1

0x5f82,	// (0x00036ca4) main_cam6_set_pane

0x1490,	// (0x000321b2) bg_tb_trans_pane_cp06_ParamLimits

0xad91,	// (0x0003bab3) cam4_indicators_pane_g1_ParamLimits

0xada2,	// (0x0003bac4) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00040638) cam4_indicators_pane_g_ParamLimits

0xadc0,	// (0x0003bae2) cam4_indicators_pane_t1_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_tb_trans_pane_cp07_ParamLimits

0xae72,	// (0x0003bb94) vid4_indicators_pane_g1_ParamLimits

0xae83,	// (0x0003bba5) vid4_indicators_pane_g2_ParamLimits

0xae94,	// (0x0003bbb6) vid4_indicators_pane_g3_ParamLimits

0xaea5,	// (0x0003bbc7) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0004064a) vid4_indicators_pane_g_ParamLimits

0xaec1,	// (0x0003bbe3) vid4_indicators_pane_t1_ParamLimits

0xbc88,	// (0x0003c9aa) vid4_progress_pane_g1_ParamLimits

0xbc98,	// (0x0003c9ba) vid4_progress_pane_g2_ParamLimits

0x8795,	// (0x000394b7) vid4_progress_pane_g3_ParamLimits

0xbca8,	// (0x0003c9ca) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x000407fb) vid4_progress_pane_g_ParamLimits

0xbcc6,	// (0x0003c9e8) vid4_progress_pane_t1_ParamLimits

0xbcdb,	// (0x0003c9fd) vid4_progress_pane_t2_ParamLimits

0xbcf1,	// (0x0003ca13) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00040806) vid4_progress_pane_t_ParamLimits

0xbd06,	// (0x0003ca28) wait_bar_pane_cp07_ParamLimits

0xc17b,	// (0x0003ce9d) main_cam6_set_pane_g2_ParamLimits

0xc17b,	// (0x0003ce9d) main_cam6_set_pane_g2

0xc187,	// (0x0003cea9) main_cset6_listscroll_pane_ParamLimits

0xc187,	// (0x0003cea9) main_cset6_listscroll_pane

0xc1b2,	// (0x0003ced4) main_cset6_slider_pane_ParamLimits

0xc1b2,	// (0x0003ced4) main_cset6_slider_pane

0xc1be,	// (0x0003cee0) main_cset6_text2_pane_ParamLimits

0xc1be,	// (0x0003cee0) main_cset6_text2_pane

0x2aa5,	// (0x000337c7) main_cset6_text_pane

0x2aad,	// (0x000337cf) main_cset_list_pane_copy1_ParamLimits

0x2aad,	// (0x000337cf) main_cset_list_pane_copy1

0x2abd,	// (0x000337df) scroll_pane_cp028_copy1

0xc1d1,	// (0x0003cef3) cset_list_set_pane_copy1

0xc1e4,	// (0x0003cf06) aid_position_infowindow_above_copy1

0xc1ec,	// (0x0003cf0e) aid_position_infowindow_below_copy1

0x5512,	// (0x00036234) cset_list_set_pane_g1_copy1

0x5247,	// (0x00035f69) cset_list_set_pane_g3_copy1_ParamLimits

0x5247,	// (0x00035f69) cset_list_set_pane_g3_copy1

0x5256,	// (0x00035f78) cset_list_set_pane_t1_copy1_ParamLimits

0x5256,	// (0x00035f78) cset_list_set_pane_t1_copy1

0xf0d2,	// (0x0003fdf4) list_highlight_pane_cp021_copy1_ParamLimits

0xf0d2,	// (0x0003fdf4) list_highlight_pane_cp021_copy1

0x2ac6,	// (0x000337e8) cset6_slider_pane_ParamLimits

0x2ac6,	// (0x000337e8) cset6_slider_pane

0x2af2,	// (0x00033814) main_cset6_slider_pane_g1_ParamLimits

0x2af2,	// (0x00033814) main_cset6_slider_pane_g1

0xc1f4,	// (0x0003cf16) main_cset6_slider_pane_g2_ParamLimits

0xc1f4,	// (0x0003cf16) main_cset6_slider_pane_g2

0x2b1a,	// (0x0003383c) main_cset6_slider_pane_g3_ParamLimits

0x2b1a,	// (0x0003383c) main_cset6_slider_pane_g3

0xc21c,	// (0x0003cf3e) main_cset6_slider_pane_g4_ParamLimits

0xc21c,	// (0x0003cf3e) main_cset6_slider_pane_g4

0xc228,	// (0x0003cf4a) main_cset6_slider_pane_g5_ParamLimits

0xc228,	// (0x0003cf4a) main_cset6_slider_pane_g5

0x214b,	// (0x00032e6d) main_cset6_slider_pane_g7_ParamLimits

0x214b,	// (0x00032e6d) main_cset6_slider_pane_g7

0x2157,	// (0x00032e79) main_cset6_slider_pane_g8_ParamLimits

0x2157,	// (0x00032e79) main_cset6_slider_pane_g8

0xc236,	// (0x0003cf58) main_cset6_slider_pane_g9_ParamLimits

0xc236,	// (0x0003cf58) main_cset6_slider_pane_g9

0xc242,	// (0x0003cf64) main_cset6_slider_pane_g10_ParamLimits

0xc242,	// (0x0003cf64) main_cset6_slider_pane_g10

0xc24e,	// (0x0003cf70) main_cset6_slider_pane_g11_ParamLimits

0xc24e,	// (0x0003cf70) main_cset6_slider_pane_g11

0xc25a,	// (0x0003cf7c) main_cset6_slider_pane_g12_ParamLimits

0xc25a,	// (0x0003cf7c) main_cset6_slider_pane_g12

0xc266,	// (0x0003cf88) main_cset6_slider_pane_g13_ParamLimits

0xc266,	// (0x0003cf88) main_cset6_slider_pane_g13

0xc272,	// (0x0003cf94) main_cset6_slider_pane_g14_ParamLimits

0xc272,	// (0x0003cf94) main_cset6_slider_pane_g14

0xc27e,	// (0x0003cfa0) main_cset6_slider_pane_g15_ParamLimits

0xc27e,	// (0x0003cfa0) main_cset6_slider_pane_g15

0xc296,	// (0x0003cfb8) main_cset6_slider_pane_g16_ParamLimits

0xc296,	// (0x0003cfb8) main_cset6_slider_pane_g16

0xc2a4,	// (0x0003cfc6) main_cset6_slider_pane_g17_ParamLimits

0xc2a4,	// (0x0003cfc6) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x000408d3) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x000408d3) main_cset6_slider_pane_g

0x2b26,	// (0x00033848) main_cset6_slider_pane_t1_ParamLimits

0x2b26,	// (0x00033848) main_cset6_slider_pane_t1

0xc2ca,	// (0x0003cfec) main_cset6_slider_pane_t2_ParamLimits

0xc2ca,	// (0x0003cfec) main_cset6_slider_pane_t2

0xc2f5,	// (0x0003d017) main_cset6_slider_pane_t3_ParamLimits

0xc2f5,	// (0x0003d017) main_cset6_slider_pane_t3

0xc320,	// (0x0003d042) main_cset6_slider_pane_t4_ParamLimits

0xc320,	// (0x0003d042) main_cset6_slider_pane_t4

0xc34b,	// (0x0003d06d) main_cset6_slider_pane_t5_ParamLimits

0xc34b,	// (0x0003d06d) main_cset6_slider_pane_t5

0x2b67,	// (0x00033889) main_cset6_slider_pane_t7_ParamLimits

0x2b67,	// (0x00033889) main_cset6_slider_pane_t7

0xc378,	// (0x0003d09a) main_cset6_slider_pane_t8_ParamLimits

0xc378,	// (0x0003d09a) main_cset6_slider_pane_t8

0xc39c,	// (0x0003d0be) main_cset6_slider_pane_t9_ParamLimits

0xc39c,	// (0x0003d0be) main_cset6_slider_pane_t9

0xc3c0,	// (0x0003d0e2) main_cset6_slider_pane_t10_ParamLimits

0xc3c0,	// (0x0003d0e2) main_cset6_slider_pane_t10

0xc3e4,	// (0x0003d106) main_cset6_slider_pane_t11_ParamLimits

0xc3e4,	// (0x0003d106) main_cset6_slider_pane_t11

0x2b9d,	// (0x000338bf) main_cset6_slider_pane_t14_ParamLimits

0x2b9d,	// (0x000338bf) main_cset6_slider_pane_t14

0x2bd6,	// (0x000338f8) main_cset6_slider_pane_t15_ParamLimits

0x2bd6,	// (0x000338f8) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x000408f8) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x000408f8) main_cset6_slider_pane_t

0x2c0f,	// (0x00033931) cset_slider_pane_g1_copy1

0x2c18,	// (0x0003393a) cset_slider_pane_g2_copy1

0x2c21,	// (0x00033943) cset_slider_pane_g3_copy1

0x5f82,	// (0x00036ca4) bg_popup_sub_pane_cp011_copy1

0x2352,	// (0x00033074) main_cset_text_pane_g1_copy1

0x235a,	// (0x0003307c) main_cset_text_pane_t1_copy1

0x2368,	// (0x0003308a) main_cset_text_pane_t2_copy1

0x2376,	// (0x00033098) main_cset_text_pane_t3_copy1

0x2384,	// (0x000330a6) main_cset_text_pane_t4_copy1

0x2392,	// (0x000330b4) main_cset_text_pane_t5_copy1

0x23a0,	// (0x000330c2) main_cset_text_pane_t6_copy1

0x23ae,	// (0x000330d0) main_cset_text_pane_t7_copy1

0xc408,	// (0x0003d12a) main_cset_text2_pane_t1_copy1

0x5f82,	// (0x00036ca4) main_ncimui_pane

0x8f04,	// (0x00039c26) popup_query_ncimui_window_ParamLimits

0x8f04,	// (0x00039c26) popup_query_ncimui_window

0x50fb,	// (0x00035e1d) field_cale_ev2_pane_g4_ParamLimits

0x50fb,	// (0x00035e1d) field_cale_ev2_pane_g4

0xa728,	// (0x0003b44a) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa728,	// (0x0003b44a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x000405d6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x000405d6) cell_video_dialer_keypad_pane_g

0xa740,	// (0x0003b462) cell_video_dialer_keypad_pane_t1

0x5f82,	// (0x00036ca4) bg_popup_window_pane_cp012

0xe798,	// (0x0003f4ba) heading_pane_cp06

0x2d19,	// (0x00033a3b) ncim_query_content_pane

0x5f82,	// (0x00036ca4) bg_popup_heading_pane_cp01

0x2d21,	// (0x00033a43) ncim_heading_pane_t1

0x2d2f,	// (0x00033a51) ncim_indicator_popup_pane

0x2d41,	// (0x00033a63) ncim_query_button_pane

0x2d55,	// (0x00033a77) ncim_query_content_pane_t1

0x2d67,	// (0x00033a89) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x00040937) ncim_query_content_pane_t

0x2da1,	// (0x00033ac3) ncim_query_list_pane

0x2db3,	// (0x00033ad5) ncim_query_popup_pane

0x2d2f,	// (0x00033a51) ncim_indicator_popup_pane_ParamLimits

0xc52a,	// (0x0003d24c) ncim_query_content_pane_g1_ParamLimits

0xc52a,	// (0x0003d24c) ncim_query_content_pane_g1

0x2d55,	// (0x00033a77) ncim_query_content_pane_t1_ParamLimits

0x2d67,	// (0x00033a89) ncim_query_content_pane_t2_ParamLimits

0xc536,	// (0x0003d258) ncim_query_content_pane_t3_ParamLimits

0xc536,	// (0x0003d258) ncim_query_content_pane_t3

0xc553,	// (0x0003d275) ncim_query_content_pane_t4_ParamLimits

0xc553,	// (0x0003d275) ncim_query_content_pane_t4

0xc570,	// (0x0003d292) ncim_query_content_pane_t5_ParamLimits

0xc570,	// (0x0003d292) ncim_query_content_pane_t5

0x2d79,	// (0x00033a9b) ncim_query_content_pane_t6_ParamLimits

0x2d79,	// (0x00033a9b) ncim_query_content_pane_t6

0xfc15,	// (0x00040937) ncim_query_content_pane_t_ParamLimits

0x2da1,	// (0x00033ac3) ncim_query_list_pane_ParamLimits

0x2db3,	// (0x00033ad5) ncim_query_popup_pane_ParamLimits

0x2dc7,	// (0x00033ae9) wait_bar_pane_cp04

0x5f82,	// (0x00036ca4) input_focus_pane_cp011

0x2dcf,	// (0x00033af1) ncim_query_popup_pane_t1

0x2ddd,	// (0x00033aff) ncim_list_query_list_pane_ParamLimits

0x2ddd,	// (0x00033aff) ncim_list_query_list_pane

0x5f82,	// (0x00036ca4) bg_button_pane_cp027

0x2dea,	// (0x00033b0c) ncim_query_button_pane_g1

0x5f82,	// (0x00036ca4) list_highlight_pane_cp012

0x2df4,	// (0x00033b16) ncim_list_query_list_pane_g1

0x2dfc,	// (0x00033b1e) ncim_list_query_list_pane_t1

0xadb1,	// (0x0003bad3) cam4_indicators_pane_g3_ParamLimits

0xadb1,	// (0x0003bad3) cam4_indicators_pane_g3

0xaeb1,	// (0x0003bbd3) vid4_indicators_pane_g5_ParamLimits

0xaeb1,	// (0x0003bbd3) vid4_indicators_pane_g5

0xbcb7,	// (0x0003c9d9) vid4_progress_pane_g5_ParamLimits

0xbcb7,	// (0x0003c9d9) vid4_progress_pane_g5

0xc443,	// (0x0003d165) main_ncimui_pane_g1

0xc499,	// (0x0003d1bb) ncimui_group_query_pane_ParamLimits

0xc499,	// (0x0003d1bb) ncimui_group_query_pane

0xc4d5,	// (0x0003d1f7) ncimui_list_pane_ParamLimits

0xc4d5,	// (0x0003d1f7) ncimui_list_pane

0xc4f6,	// (0x0003d218) ncimui_text_pane_ParamLimits

0xc4f6,	// (0x0003d218) ncimui_text_pane

0xc58d,	// (0x0003d2af) ncimui_text_pane_t1_ParamLimits

0xc58d,	// (0x0003d2af) ncimui_text_pane_t1

0x2e0a,	// (0x00033b2c) ncimui_list_single_graphic_pane_ParamLimits

0x2e0a,	// (0x00033b2c) ncimui_list_single_graphic_pane

0xc5ac,	// (0x0003d2ce) ncimui_query_pane_ParamLimits

0xc5ac,	// (0x0003d2ce) ncimui_query_pane

0x5f82,	// (0x00036ca4) list_highlight_pane_cp013

0x2e1a,	// (0x00033b3c) ncim_list_query_list_pane_t1_copy1

0x2df4,	// (0x00033b16) ncim_list_single_graphic_pane_g1

0x2e28,	// (0x00033b4a) ncim_query_button_pane_cp01

0x2e34,	// (0x00033b56) ncim_query_entry_pane_ParamLimits

0x2e34,	// (0x00033b56) ncim_query_entry_pane

0x2e47,	// (0x00033b69) ncimui_query_pane_g1

0x2e53,	// (0x00033b75) ncimui_query_pane_t1_ParamLimits

0x2e53,	// (0x00033b75) ncimui_query_pane_t1

0xf0d2,	// (0x0003fdf4) input_focus_pane_cp012

0x2e6c,	// (0x00033b8e) ncim_query_entry_pane_t1

0xdf25,	// (0x0003ec47) main_im_pane_ParamLimits

0xf0d2,	// (0x0003fdf4) main_mobtv_pane_ParamLimits

0xf0d2,	// (0x0003fdf4) main_mobtv_pane

0xc2b2,	// (0x0003cfd4) main_cset6_slider_pane_g18_ParamLimits

0xc2b2,	// (0x0003cfd4) main_cset6_slider_pane_g18

0xc2be,	// (0x0003cfe0) main_cset6_slider_pane_g19_ParamLimits

0xc2be,	// (0x0003cfe0) main_cset6_slider_pane_g19

0x1fa2,	// (0x00032cc4) bg_main_mobtv_pane_ParamLimits

0x1fa2,	// (0x00032cc4) bg_main_mobtv_pane

0xc5bf,	// (0x0003d2e1) main_mobtv_info_pane

0xc5ca,	// (0x0003d2ec) main_mobtv_loading_pane_ParamLimits

0xc5ca,	// (0x0003d2ec) main_mobtv_loading_pane

0x2e8c,	// (0x00033bae) main_mobtv_pg_channel_list_pane

0x2e96,	// (0x00033bb8) main_mobtv_pg_hdr_pane

0xc5d7,	// (0x0003d2f9) main_mobtv_programe_curr_pane_ParamLimits

0xc5d7,	// (0x0003d2f9) main_mobtv_programe_curr_pane

0xc5e4,	// (0x0003d306) main_mobtv_programe_next_pane_ParamLimits

0xc5e4,	// (0x0003d306) main_mobtv_programe_next_pane

0x2e9f,	// (0x00033bc1) popup_mobtv_noti_window

0x1224,	// (0x00031f46) main_tv_pg_hdr_pane_g1

0x2ea7,	// (0x00033bc9) main_tv_pg_hdr_pane_g2

0x2eaf,	// (0x00033bd1) main_tv_pg_hdr_pane_g3

0x2eb7,	// (0x00033bd9) main_tv_pg_hdr_pane_g4

0x2ebf,	// (0x00033be1) main_tv_pg_hdr_pane_g5

0x2ec9,	// (0x00033beb) main_tv_pg_hdr_pane_g6

0x2ed3,	// (0x00033bf5) main_tv_pg_hdr_pane_g7

0x2edd,	// (0x00033bff) main_tv_pg_hdr_pane_g8

0x2ee7,	// (0x00033c09) main_tv_pg_hdr_pane_g9

0x2ef1,	// (0x00033c13) main_tv_pg_hdr_pane_g10

0x2efb,	// (0x00033c1d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00040944) main_tv_pg_hdr_pane_g

0x2f05,	// (0x00033c27) main_tv_pg_hdr_pane_t1

0x2f13,	// (0x00033c35) main_tv_pg_hdr_pane_t2

0x2f21,	// (0x00033c43) main_tv_pg_hdr_pane_t3

0x2f31,	// (0x00033c53) main_tv_pg_hdr_pane_t4

0x2f41,	// (0x00033c63) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0004095b) main_tv_pg_hdr_pane_t

0x2f51,	// (0x00033c73) single_mobtv_pg_channel_pane_ParamLimits

0x2f51,	// (0x00033c73) single_mobtv_pg_channel_pane

0x2f63,	// (0x00033c85) single_mobtv_pg_channel_table_pane

0x2f6c,	// (0x00033c8e) single_mobtv_pg_channel_thumb_pane

0x2f75,	// (0x00033c97) single_tv_pg_channel_pane_g1

0x2f7e,	// (0x00033ca0) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x00040966) single_tv_pg_channel_pane_g

0x1490,	// (0x000321b2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1490,	// (0x000321b2) bg_single_mobtv_pg_channel_thumb_pane

0x2f87,	// (0x00033ca9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2f87,	// (0x00033ca9) single_mobtv_pg_channel_thumb_pane_g1

0x2f95,	// (0x00033cb7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2f95,	// (0x00033cb7) single_mobtv_pg_channel_thumb_pane_g2

0x2fa1,	// (0x00033cc3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2fa1,	// (0x00033cc3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0004096b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0004096b) single_mobtv_pg_channel_thumb_pane_g

0x2fad,	// (0x00033ccf) single_mobtv_pg_channel_thumb_pane_t1

0x2fbb,	// (0x00033cdd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00040972) single_mobtv_pg_channel_thumb_pane_t

0x1224,	// (0x00031f46) bg_single_mobtv_pg_channel_table_pane_g1

0x1224,	// (0x00031f46) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00040422) bg_single_mobtv_pg_channel_table_pane_g

0x2fc9,	// (0x00033ceb) single_mobtv_pg_channel_table_pane_t1

0x2fd7,	// (0x00033cf9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x00040977) single_mobtv_pg_channel_table_pane_t

0xc5f9,	// (0x0003d31b) main_mobtv_info_pane_g1_ParamLimits

0xc5f9,	// (0x0003d31b) main_mobtv_info_pane_g1

0xc615,	// (0x0003d337) main_mobtv_info_pane_t1_ParamLimits

0xc615,	// (0x0003d337) main_mobtv_info_pane_t1

0xc68d,	// (0x0003d3af) main_mobtv_info_pane_t2_ParamLimits

0xc68d,	// (0x0003d3af) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x00040981) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x00040981) main_mobtv_info_pane_t

0xc71c,	// (0x0003d43e) wait_bar_pane_cp05

0xc72e,	// (0x0003d450) main_mobtv_loading_pane_g1_ParamLimits

0xc72e,	// (0x0003d450) main_mobtv_loading_pane_g1

0xc73c,	// (0x0003d45e) main_mobtv_loading_pane_g2_ParamLimits

0xc73c,	// (0x0003d45e) main_mobtv_loading_pane_g2

0xc748,	// (0x0003d46a) main_mobtv_loading_pane_g3_ParamLimits

0xc748,	// (0x0003d46a) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x00040988) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x00040988) main_mobtv_loading_pane_g

0x2fe5,	// (0x00033d07) main_mobtv_loading_pane_t1_ParamLimits

0x2fe5,	// (0x00033d07) main_mobtv_loading_pane_t1

0x2ffd,	// (0x00033d1f) main_mobtv_loading_pane_t2_ParamLimits

0x2ffd,	// (0x00033d1f) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0004098f) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0004098f) main_mobtv_loading_pane_t

0xc756,	// (0x0003d478) wait_bar_pane_cp06_ParamLimits

0xc756,	// (0x0003d478) wait_bar_pane_cp06

0x3021,	// (0x00033d43) main_mobtv_programe_curr_pane_t1

0x302f,	// (0x00033d51) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x00040994) main_mobtv_programe_curr_pane_t

0x303d,	// (0x00033d5f) main_mobtv_programe_next_pane_t1

0x304b,	// (0x00033d6d) main_mobtv_programe_next_pane_t2

0x3059,	// (0x00033d7b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x00040999) main_mobtv_programe_next_pane_t

0x5f82,	// (0x00036ca4) bg_popup_mobtv_noti_window_pane

0x3067,	// (0x00033d89) popup_mobtv_noti_window_g1

0x306f,	// (0x00033d91) popup_mobtv_noti_window_t1

0x307d,	// (0x00033d9f) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x000409a0) popup_mobtv_noti_window_t

0x1224,	// (0x00031f46) bg_popup_mobtv_noti_window_pane_g1

0x5f82,	// (0x00036ca4) sc_clock_pane

0x5f82,	// (0x00036ca4) main_fs_bigclock_pane

0xbe9e,	// (0x0003cbc0) blid2_tripm_pane_t4_ParamLimits

0xbe9e,	// (0x0003cbc0) blid2_tripm_pane_t4

0xc762,	// (0x0003d484) sc_clock_pane_g1_ParamLimits

0xc762,	// (0x0003d484) sc_clock_pane_g1

0xc770,	// (0x0003d492) sc_clock_pane_t1_ParamLimits

0xc770,	// (0x0003d492) sc_clock_pane_t1

0xc783,	// (0x0003d4a5) sc_clock_pane_t2_ParamLimits

0xc783,	// (0x0003d4a5) sc_clock_pane_t2

0xc795,	// (0x0003d4b7) sc_clock_pane_t3_ParamLimits

0xc795,	// (0x0003d4b7) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x000409a5) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x000409a5) sc_clock_pane_t

0xd0c1,	// (0x0003dde3) main_fs_bigclock_indicator_pane_ParamLimits

0xd0c1,	// (0x0003dde3) main_fs_bigclock_indicator_pane

0xc833,	// (0x0003d555) main_fs_bigclock_pane_g1_ParamLimits

0xc833,	// (0x0003d555) main_fs_bigclock_pane_g1

0xd0cd,	// (0x0003ddef) main_fs_bigclock_pane_t1_ParamLimits

0xd0cd,	// (0x0003ddef) main_fs_bigclock_pane_t1

0xd0df,	// (0x0003de01) main_fs_bigclock_pane_t2_ParamLimits

0xd0df,	// (0x0003de01) main_fs_bigclock_pane_t2

0xd0f3,	// (0x0003de15) main_fs_bigclock_pane_t3_ParamLimits

0xd0f3,	// (0x0003de15) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x00040ba4) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00040ba4) main_fs_bigclock_pane_t

0x3b36,	// (0x00034858) main_fs_bigclock_indicator_pane_g1

0x2d49,	// (0x00033a6b) ncim_query_content_pane_g2_ParamLimits

0x2d49,	// (0x00033a6b) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00040932) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00040932) ncim_query_content_pane_g

0xc7a9,	// (0x0003d4cb) sc_clock_pane_t4_ParamLimits

0xc7a9,	// (0x0003d4cb) sc_clock_pane_t4

0xf0d2,	// (0x0003fdf4) main_radioblah_pane

0x1e4e,	// (0x00032b70) cell_call4_button_pane_t1_copy1_ParamLimits

0x1e4e,	// (0x00032b70) cell_call4_button_pane_t1_copy1

0xc44b,	// (0x0003d16d) main_ncimui_pane_t1_ParamLimits

0xc44b,	// (0x0003d16d) main_ncimui_pane_t1

0xc465,	// (0x0003d187) main_ncimui_pane_t2_ParamLimits

0xc465,	// (0x0003d187) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0004092b) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0004092b) main_ncimui_pane_t

0x308b,	// (0x00033dad) main_radioblah_anim_pane_ParamLimits

0x308b,	// (0x00033dad) main_radioblah_anim_pane

0x309c,	// (0x00033dbe) main_radioblah_info_pane_ParamLimits

0x309c,	// (0x00033dbe) main_radioblah_info_pane

0x30b0,	// (0x00033dd2) main_radioblah_pane_t1_ParamLimits

0x30b0,	// (0x00033dd2) main_radioblah_pane_t1

0x30cc,	// (0x00033dee) main_radioblah_pane_t2_ParamLimits

0x30cc,	// (0x00033dee) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x000409c6) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x000409c6) main_radioblah_pane_t

0xc9ac,	// (0x0003d6ce) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc9ac,	// (0x0003d6ce) main_radioblah_rocker_ctrl_pane

0x3114,	// (0x00033e36) main_radioblah_info_pane_t1_ParamLimits

0x3114,	// (0x00033e36) main_radioblah_info_pane_t1

0xc9f1,	// (0x0003d713) main_radioblah_info_pane_t2_ParamLimits

0xc9f1,	// (0x0003d713) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x000409cf) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x000409cf) main_radioblah_info_pane_t

0x1224,	// (0x00031f46) main_radioblah_rocker_ctrl_pane_g1

0xcaa1,	// (0x0003d7c3) main_radioblah_rocker_ctrl_pane_g2

0xcaa9,	// (0x0003d7cb) main_radioblah_rocker_ctrl_pane_g3

0xcab1,	// (0x0003d7d3) main_radioblah_rocker_ctrl_pane_g4

0xcab9,	// (0x0003d7db) main_radioblah_rocker_ctrl_pane_g5

0xcac1,	// (0x0003d7e3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x000409d8) main_radioblah_rocker_ctrl_pane_g

0xc408,	// (0x0003d12a) main_cset_text2_pane_t1_copy1_ParamLimits

0xacdf,	// (0x0003ba01) cam4_image_uncrop_qvga_pane

0xae26,	// (0x0003bb48) vid4_image_uncrop_qcif_pane

0xc02c,	// (0x0003cd4e) cam6_image_uncrop_qvga_pane_ParamLimits

0xc02c,	// (0x0003cd4e) cam6_image_uncrop_qvga_pane

0x2988,	// (0x000336aa) vid6_image_uncrop_qcif_pane_ParamLimits

0x2988,	// (0x000336aa) vid6_image_uncrop_qcif_pane

0x5f82,	// (0x00036ca4) bg_popup_preview_window_pane_cp03

0x2cfb,	// (0x00033a1d) list_cset_text2_pane

0x2d03,	// (0x00033a25) main_cset6_text2_pane_g1

0x2d0b,	// (0x00033a2d) main_cset6_text2_pane_t1

0x3f13,	// (0x00034c35) list_cset_text2_pane_t1_ParamLimits

0x3f13,	// (0x00034c35) list_cset_text2_pane_t1

0xf0d2,	// (0x0003fdf4) main_radioblah_pane_ParamLimits

0xc708,	// (0x0003d42a) main_mobtv_info_pane_t3_ParamLimits

0xc708,	// (0x0003d42a) main_mobtv_info_pane_t3

0xc99a,	// (0x0003d6bc) main_radioblah_pane_g1

0xc9c5,	// (0x0003d6e7) main_radioblah_info_pane_g1

0xca46,	// (0x0003d768) main_radioblah_info_pane_t3_ParamLimits

0xca46,	// (0x0003d768) main_radioblah_info_pane_t3

0x7caf,	// (0x000389d1) highlight_cell_cale_month_pane_ParamLimits

0x7caf,	// (0x000389d1) highlight_cell_cale_month_pane

0x5f82,	// (0x00036ca4) main_phob_fisheye_pane

0x157e,	// (0x000322a0) scroll_pane_cp0031_ParamLimits

0x157e,	// (0x000322a0) scroll_pane_cp0031

0x2a96,	// (0x000337b8) wait_bar_pane_cp08_ParamLimits

0xc1d1,	// (0x0003cef3) cset_list_set_pane_copy1_ParamLimits

0x314e,	// (0x00033e70) highlight_cell_cale_month_pane_g1

0xcac9,	// (0x0003d7eb) highlight_cell_cale_month_pane_t1

0x2622,	// (0x00033344) list_gen_pane_cp01

0x2136,	// (0x00032e58) scroll_pane_01

0xcad7,	// (0x0003d7f9) list_single_double_fisheye_pane

0x55eb,	// (0x0003630d) list_double_fisheye_pane_g1_ParamLimits

0x55eb,	// (0x0003630d) list_double_fisheye_pane_g1

0x55f7,	// (0x00036319) list_double_fisheye_pane_g2_ParamLimits

0x55f7,	// (0x00036319) list_double_fisheye_pane_g2

0xcae0,	// (0x0003d802) list_double_fisheye_pane_g3_ParamLimits

0xcae0,	// (0x0003d802) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x000409e5) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x000409e5) list_double_fisheye_pane_g

0x5628,	// (0x0003634a) list_double_fisheye_pane_t1_ParamLimits

0x5628,	// (0x0003634a) list_double_fisheye_pane_t1

0x5643,	// (0x00036365) list_double_fisheye_pane_t2_ParamLimits

0x5643,	// (0x00036365) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x000409f0) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x000409f0) list_double_fisheye_pane_t

0x5f82,	// (0x00036ca4) main_call5_pane

0xc7cf,	// (0x0003d4f1) sc_swipe_pane_ParamLimits

0xc7cf,	// (0x0003d4f1) sc_swipe_pane

0xcaf8,	// (0x0003d81a) call5_image_pane_ParamLimits

0xcaf8,	// (0x0003d81a) call5_image_pane

0xcb08,	// (0x0003d82a) call5_swipe_1_pane_ParamLimits

0xcb08,	// (0x0003d82a) call5_swipe_1_pane

0xcb14,	// (0x0003d836) call5_swipe_2_pane_ParamLimits

0xcb14,	// (0x0003d836) call5_swipe_2_pane

0xcb2e,	// (0x0003d850) popup_call5_audio_first_window_ParamLimits

0xcb2e,	// (0x0003d850) popup_call5_audio_first_window

0x1490,	// (0x000321b2) call5_swipe_1_pane_g1_ParamLimits

0x1490,	// (0x000321b2) call5_swipe_1_pane_g1

0x315f,	// (0x00033e81) call5_swipe_1_pane_g2_ParamLimits

0x315f,	// (0x00033e81) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x000409f5) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x000409f5) call5_swipe_1_pane_g

0x316b,	// (0x00033e8d) call5_swipe_1_pane_t1_ParamLimits

0x316b,	// (0x00033e8d) call5_swipe_1_pane_t1

0x1490,	// (0x000321b2) call5_swipe_2_pane_g1_ParamLimits

0x1490,	// (0x000321b2) call5_swipe_2_pane_g1

0x3180,	// (0x00033ea2) call5_swipe_2_pane_g2_ParamLimits

0x3180,	// (0x00033ea2) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x000409fa) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x000409fa) call5_swipe_2_pane_g

0x318c,	// (0x00033eae) call5_swipe_2_pane_t1_ParamLimits

0x318c,	// (0x00033eae) call5_swipe_2_pane_t1

0x31a1,	// (0x00033ec3) sc_swipe_pane_g1_ParamLimits

0x31a1,	// (0x00033ec3) sc_swipe_pane_g1

0x31ae,	// (0x00033ed0) sc_swipe_pane_g2_ParamLimits

0x31ae,	// (0x00033ed0) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x000409ff) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x000409ff) sc_swipe_pane_g

0x31ba,	// (0x00033edc) sc_swipe_pane_t1_ParamLimits

0x31ba,	// (0x00033edc) sc_swipe_pane_t1

0x5f82,	// (0x00036ca4) main_cmail_launcher_pane

0xcb3c,	// (0x0003d85e) aid_size_cell_cmail_l_ParamLimits

0xcb3c,	// (0x0003d85e) aid_size_cell_cmail_l

0xcb4c,	// (0x0003d86e) grid_cmail_l_pane_ParamLimits

0xcb4c,	// (0x0003d86e) grid_cmail_l_pane

0xcb5c,	// (0x0003d87e) cell_cmail_l_pane_ParamLimits

0xcb5c,	// (0x0003d87e) cell_cmail_l_pane

0xcb70,	// (0x0003d892) cell_cmail_l_pane_g1_ParamLimits

0xcb70,	// (0x0003d892) cell_cmail_l_pane_g1

0xcb7c,	// (0x0003d89e) cell_cmail_l_pane_t1_ParamLimits

0xcb7c,	// (0x0003d89e) cell_cmail_l_pane_t1

0x31cf,	// (0x00033ef1) cell_cmail_l_pane_t2_ParamLimits

0x31cf,	// (0x00033ef1) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00040a04) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00040a04) cell_cmail_l_pane_t

0xf0d2,	// (0x0003fdf4) grid_highlight_pane_cp018_ParamLimits

0xf0d2,	// (0x0003fdf4) grid_highlight_pane_cp018

0x6099,	// (0x00036dbb) main2_pane_ParamLimits

0x6099,	// (0x00036dbb) main2_pane

0xdfbe,	// (0x0003ece0) popup_sp_fs_action_menu_bg_pane_g1

0xdfc6,	// (0x0003ece8) popup_sp_fs_action_menu_bg_pane_g2

0xdfce,	// (0x0003ecf0) popup_sp_fs_action_menu_bg_pane_g3

0xdfd6,	// (0x0003ecf8) popup_sp_fs_action_menu_bg_pane_g4

0xdfde,	// (0x0003ed00) popup_sp_fs_action_menu_bg_pane_g5

0xdfe6,	// (0x0003ed08) popup_sp_fs_action_menu_bg_pane_g6

0xdfee,	// (0x0003ed10) popup_sp_fs_action_menu_bg_pane_g7

0xdff6,	// (0x0003ed18) popup_sp_fs_action_menu_bg_pane_g8

0xdffe,	// (0x0003ed20) popup_sp_fs_action_menu_bg_pane_g9

0xe006,	// (0x0003ed28) popup_sp_fs_action_menu_bg_pane_g10

0xe006,	// (0x0003ed28) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0003fece) popup_sp_fs_action_menu_bg_pane_g

0x4de6,	// (0x00035b08) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x2_t3_g3_g1

0x4df2,	// (0x00035b14) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4df2,	// (0x00035b14) list_medium_line_x2_t3_g3_g2

0x4dfe,	// (0x00035b20) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4dfe,	// (0x00035b20) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0003ff7e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0003ff7e) list_medium_line_x2_t3_g3_g

0x4e0a,	// (0x00035b2c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4e0a,	// (0x00035b2c) list_medium_line_x2_t3_g3_t1

0x4e1f,	// (0x00035b41) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4e1f,	// (0x00035b41) list_medium_line_x2_t3_g3_t2

0x4e31,	// (0x00035b53) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4e31,	// (0x00035b53) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0003ff85) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0003ff85) list_medium_line_x2_t3_g3_t

0x4de6,	// (0x00035b08) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x2_t3_g2_g1

0x4dfe,	// (0x00035b20) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4dfe,	// (0x00035b20) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0003ff8c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0003ff8c) list_medium_line_x2_t3_g2_g

0x4e46,	// (0x00035b68) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4e46,	// (0x00035b68) list_medium_line_x2_t3_g2_t1

0x4e5c,	// (0x00035b7e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4e5c,	// (0x00035b7e) list_medium_line_x2_t3_g2_t2

0x4e31,	// (0x00035b53) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4e31,	// (0x00035b53) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0003ff91) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0003ff91) list_medium_line_x2_t3_g2_t

0x4de6,	// (0x00035b08) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x2_t4_g4_g1

0x4e6e,	// (0x00035b90) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4e6e,	// (0x00035b90) list_medium_line_x2_t4_g4_g2

0x4df2,	// (0x00035b14) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4df2,	// (0x00035b14) list_medium_line_x2_t4_g4_g3

0x4e7a,	// (0x00035b9c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4e7a,	// (0x00035b9c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0003ff98) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0003ff98) list_medium_line_x2_t4_g4_g

0x4e86,	// (0x00035ba8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4e86,	// (0x00035ba8) list_medium_line_x2_t4_g4_t1

0x4ea0,	// (0x00035bc2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4ea0,	// (0x00035bc2) list_medium_line_x2_t4_g4_t2

0x4eb6,	// (0x00035bd8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4eb6,	// (0x00035bd8) list_medium_line_x2_t4_g4_t3

0x4ecb,	// (0x00035bed) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4ecb,	// (0x00035bed) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0003ffa1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0003ffa1) list_medium_line_x2_t4_g4_t

0x4de6,	// (0x00035b08) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x2_t2_g4_g1

0x4e6e,	// (0x00035b90) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4e6e,	// (0x00035b90) list_medium_line_x2_t2_g4_g2

0x4df2,	// (0x00035b14) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4df2,	// (0x00035b14) list_medium_line_x2_t2_g4_g3

0x4dfe,	// (0x00035b20) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4dfe,	// (0x00035b20) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00040008) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00040008) list_medium_line_x2_t2_g4_g

0x4edd,	// (0x00035bff) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4edd,	// (0x00035bff) list_medium_line_x2_t2_g4_t1

0x4e31,	// (0x00035b53) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4e31,	// (0x00035b53) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00040011) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00040011) list_medium_line_x2_t2_g4_t

0x4de6,	// (0x00035b08) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x2_t2_g3_g1

0x4df2,	// (0x00035b14) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4df2,	// (0x00035b14) list_medium_line_x2_t2_g3_g2

0x4dfe,	// (0x00035b20) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4dfe,	// (0x00035b20) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0003ff7e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0003ff7e) list_medium_line_x2_t2_g3_g

0x4ef2,	// (0x00035c14) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4ef2,	// (0x00035c14) list_medium_line_x2_t2_g3_t1

0x4e31,	// (0x00035b53) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4e31,	// (0x00035b53) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00040016) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00040016) list_medium_line_x2_t2_g3_t

0x7e61,	// (0x00038b83) main_sp_fs_list_pane_ParamLimits

0x7e61,	// (0x00038b83) main_sp_fs_list_pane

0x7e6d,	// (0x00038b8f) sp_fs_scroll_pane_ParamLimits

0x7e6d,	// (0x00038b8f) sp_fs_scroll_pane

0x4f07,	// (0x00035c29) list_medium_line_x2_t3_t1

0x4f17,	// (0x00035c39) list_medium_line_x2_t3_t2

0x4f25,	// (0x00035c47) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00040061) list_medium_line_x2_t3_t

0x4f33,	// (0x00035c55) list_medium_line_x3_t4_t1

0x4f43,	// (0x00035c65) list_medium_line_x3_t4_t2

0x4f51,	// (0x00035c73) list_medium_line_x3_t4_t3

0x4f25,	// (0x00035c47) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00040068) list_medium_line_x3_t4_t

0x4f5f,	// (0x00035c81) list_medium_line_x4_t5_t1

0x4f6f,	// (0x00035c91) list_medium_line_x4_t5_t2

0x4f51,	// (0x00035c73) list_medium_line_x4_t5_t3

0x4f7d,	// (0x00035c9f) list_medium_line_x4_t5_t4

0x4f25,	// (0x00035c47) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00040071) list_medium_line_x4_t5_t

0x4de6,	// (0x00035b08) list_medium_line_t4_g4_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_t4_g4_g1

0x4e7a,	// (0x00035b9c) list_medium_line_t4_g4_g2_ParamLimits

0x4e7a,	// (0x00035b9c) list_medium_line_t4_g4_g2

0x4f8b,	// (0x00035cad) list_medium_line_t4_g4_g3_ParamLimits

0x4f8b,	// (0x00035cad) list_medium_line_t4_g4_g3

0x4dfe,	// (0x00035b20) list_medium_line_t4_g4_g4_ParamLimits

0x4dfe,	// (0x00035b20) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0004007c) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0004007c) list_medium_line_t4_g4_g

0x4f97,	// (0x00035cb9) list_medium_line_t4_g4_t1_ParamLimits

0x4f97,	// (0x00035cb9) list_medium_line_t4_g4_t1

0x4fac,	// (0x00035cce) list_medium_line_t4_g4_t2_ParamLimits

0x4fac,	// (0x00035cce) list_medium_line_t4_g4_t2

0x4fc1,	// (0x00035ce3) list_medium_line_t4_g4_t3_ParamLimits

0x4fc1,	// (0x00035ce3) list_medium_line_t4_g4_t3

0x4e31,	// (0x00035b53) list_medium_line_t4_g4_t4_ParamLimits

0x4e31,	// (0x00035b53) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00040085) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00040085) list_medium_line_t4_g4_t

0x7f8a,	// (0x00038cac) chi_dic_find_pane_g1

0x8ed3,	// (0x00039bf5) main_tport_pane

0x526b,	// (0x00035f8d) list_medium_line_plain_t1

0x5279,	// (0x00035f9b) list_medium_line_t2_g2_g1_ParamLimits

0x5279,	// (0x00035f9b) list_medium_line_t2_g2_g1

0x5285,	// (0x00035fa7) list_medium_line_t2_g2_g2_ParamLimits

0x5285,	// (0x00035fa7) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00040741) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00040741) list_medium_line_t2_g2_g

0x5291,	// (0x00035fb3) list_medium_line_t2_g2_t1_ParamLimits

0x5291,	// (0x00035fb3) list_medium_line_t2_g2_t1

0x52ab,	// (0x00035fcd) list_medium_line_t2_g2_t2_ParamLimits

0x52ab,	// (0x00035fcd) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00040746) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00040746) list_medium_line_t2_g2_t

0x54ca,	// (0x000361ec) aid_sp_fs_list_icon_a_sm

0x54d2,	// (0x000361f4) aid_sp_fs_list_icon_d

0x3988,	// (0x000346aa) aid_sp_fs_text_primary

0x36e6,	// (0x00034408) aid_sp_fs_text_secondary

0x54da,	// (0x000361fc) list_medium_line

0x54da,	// (0x000361fc) list_medium_line_g2

0x54da,	// (0x000361fc) list_medium_line_g3

0x54da,	// (0x000361fc) list_medium_line_plain

0x54da,	// (0x000361fc) list_medium_line_plain_t2

0x54da,	// (0x000361fc) list_medium_line_plain_t3

0x54da,	// (0x000361fc) list_medium_line_right_icon

0x54da,	// (0x000361fc) list_medium_line_right_iconx2

0x54da,	// (0x000361fc) list_medium_line_t2

0x54da,	// (0x000361fc) list_medium_line_t2_g2

0x54da,	// (0x000361fc) list_medium_line_t2_g3

0x54da,	// (0x000361fc) list_medium_line_t2_right_icon

0x54da,	// (0x000361fc) list_medium_line_t2_right_iconx2

0x54da,	// (0x000361fc) list_medium_line_t3

0x54da,	// (0x000361fc) list_medium_line_t3_g2

0x54da,	// (0x000361fc) list_medium_line_t3_g3

0x54da,	// (0x000361fc) list_medium_line_t3_right_iconx2

0x54e3,	// (0x00036205) list_medium_line_t4_g4

0x54ec,	// (0x0003620e) list_medium_line_x2

0x54ec,	// (0x0003620e) list_medium_line_x2_t2_g2

0x54ec,	// (0x0003620e) list_medium_line_x2_t2_g3

0x54ec,	// (0x0003620e) list_medium_line_x2_t2_g4

0x54ec,	// (0x0003620e) list_medium_line_x2_t3

0x54ec,	// (0x0003620e) list_medium_line_x2_t3_g2

0x54ec,	// (0x0003620e) list_medium_line_x2_t3_g3

0x54ec,	// (0x0003620e) list_medium_line_x2_t3_g4

0x54ec,	// (0x0003620e) list_medium_line_x2_t4_g2

0x54ec,	// (0x0003620e) list_medium_line_x2_t4_g4

0x54f5,	// (0x00036217) list_medium_line_x3

0x54f5,	// (0x00036217) list_medium_line_x3_t4

0x54f5,	// (0x00036217) list_medium_line_x3_t4_g4

0x54e3,	// (0x00036205) list_medium_line_x4_t4

0x54e3,	// (0x00036205) list_medium_line_x4_t4_g7

0x54e3,	// (0x00036205) list_medium_line_x4_t5

0x54fe,	// (0x00036220) list_single_fs_dyc_pane_ParamLimits

0x54fe,	// (0x00036220) list_single_fs_dyc_pane

0x4de6,	// (0x00035b08) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x4_t4_g7_g1

0x551a,	// (0x0003623c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x551a,	// (0x0003623c) list_medium_line_x4_t4_g7_g2

0x5526,	// (0x00036248) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5526,	// (0x00036248) list_medium_line_x4_t4_g7_g3

0x5535,	// (0x00036257) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5535,	// (0x00036257) list_medium_line_x4_t4_g7_g4

0x5541,	// (0x00036263) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5541,	// (0x00036263) list_medium_line_x4_t4_g7_g5

0x5550,	// (0x00036272) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5550,	// (0x00036272) list_medium_line_x4_t4_g7_g6

0x555f,	// (0x00036281) list_medium_line_x4_t4_g7_g7_ParamLimits

0x555f,	// (0x00036281) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00040911) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00040911) list_medium_line_x4_t4_g7_g

0x556b,	// (0x0003628d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x556b,	// (0x0003628d) list_medium_line_x4_t4_g7_t1

0x5580,	// (0x000362a2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5580,	// (0x000362a2) list_medium_line_x4_t4_g7_t2

0x5595,	// (0x000362b7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5595,	// (0x000362b7) list_medium_line_x4_t4_g7_t3

0x55aa,	// (0x000362cc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x55aa,	// (0x000362cc) list_medium_line_x4_t4_g7_t4

0x55bc,	// (0x000362de) list_medium_line_x4_t4_g7_t5_ParamLimits

0x55bc,	// (0x000362de) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00040920) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00040920) list_medium_line_x4_t4_g7_t

0x55ce,	// (0x000362f0) list_single_dyc_row_pane_ParamLimits

0x55ce,	// (0x000362f0) list_single_dyc_row_pane

0xcaec,	// (0x0003d80e) call5_gesture_pane_ParamLimits

0xcaec,	// (0x0003d80e) call5_gesture_pane

0xcb20,	// (0x0003d842) call5_windows_pane_ParamLimits

0xcb20,	// (0x0003d842) call5_windows_pane

0xcb92,	// (0x0003d8b4) call5_swipe_1_pane_cp_ParamLimits

0xcb92,	// (0x0003d8b4) call5_swipe_1_pane_cp

0xcb9e,	// (0x0003d8c0) call5_swipe_2_pane_cp_ParamLimits

0xcb9e,	// (0x0003d8c0) call5_swipe_2_pane_cp

0xea04,	// (0x0003f726) call5_image_pane_cp

0xcbaa,	// (0x0003d8cc) popup_call5_audio_first_window_cp_ParamLimits

0xcbaa,	// (0x0003d8cc) popup_call5_audio_first_window_cp

0x31a1,	// (0x00033ec3) call5_swipe_1_pane_g1_cp_ParamLimits

0x31a1,	// (0x00033ec3) call5_swipe_1_pane_g1_cp

0x31e1,	// (0x00033f03) call5_swipe_1_pane_g2_cp

0x31ba,	// (0x00033edc) call5_swipe_1_pane_t1_cp_ParamLimits

0x31ba,	// (0x00033edc) call5_swipe_1_pane_t1_cp

0x31a1,	// (0x00033ec3) call5_swipe_2_pane_g1_cp_ParamLimits

0x31a1,	// (0x00033ec3) call5_swipe_2_pane_g1_cp

0x31e9,	// (0x00033f0b) call5_swipe_2_pane_g2_cp

0x31f1,	// (0x00033f13) call5_swipe_2_pane_t1_cp_ParamLimits

0x31f1,	// (0x00033f13) call5_swipe_2_pane_t1_cp

0xf0d2,	// (0x0003fdf4) main_sp_fs_email_pane

0x3206,	// (0x00033f28) main_sp_fs_listscroll_pane_te

0x5665,	// (0x00036387) popup_sp_fs_action_menu_pane_ParamLimits

0x5665,	// (0x00036387) popup_sp_fs_action_menu_pane

0x1224,	// (0x00031f46) bg_sp_fs_ctrlbar_pane_g1

0x3253,	// (0x00033f75) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x325c,	// (0x00033f7e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3265,	// (0x00033f87) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1224,	// (0x00031f46) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x00040a09) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1009,	// (0x00031d2b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1009,	// (0x00031d2b) bg_sp_fs_ctrlbar_ddmenu_pane

0x326e,	// (0x00033f90) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x326e,	// (0x00033f90) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x327a,	// (0x00033f9c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x327a,	// (0x00033f9c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00040a12) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00040a12) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3286,	// (0x00033fa8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3286,	// (0x00033fa8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x56a9,	// (0x000363cb) list_medium_line_t2_right_icon_g1

0x56b1,	// (0x000363d3) list_medium_line_t2_right_icon_t1

0x56c1,	// (0x000363e3) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x00040a17) list_medium_line_t2_right_icon_t

0x0d1e,	// (0x00031a40) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0d1e,	// (0x00031a40) bg_sp_fs_ctrlbar_pane

0xcc0f,	// (0x0003d931) main_sp_fs_ctrlbar_button_pane_cp01

0xcc17,	// (0x0003d939) main_sp_fs_ctrlbar_ddmenu_pane

0x32e0,	// (0x00034002) main_sp_fs_ctrlbar_pane_g1

0x32ec,	// (0x0003400e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x00040a1c) main_sp_fs_ctrlbar_pane_g

0x32f8,	// (0x0003401a) main_sp_fs_ctrlbar_pane_t1

0x56cf,	// (0x000363f1) main_sp_fs_ctrlbar_pane

0x56eb,	// (0x0003640d) main_sp_fs_listscroll_pane_te_cp01

0x56fc,	// (0x0003641e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x56fc,	// (0x0003641e) popup_sp_fs_action_menu_pane_cp01

0xf0d2,	// (0x0003fdf4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_sp_fs_highlight_list_pane_cp01

0x5714,	// (0x00036436) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5714,	// (0x00036436) sp_fs_action_menu_list_gene_pane_g1

0x331c,	// (0x0003403e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x331c,	// (0x0003403e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00040a21) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00040a21) sp_fs_action_menu_list_gene_pane_g

0x5723,	// (0x00036445) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5723,	// (0x00036445) sp_fs_action_menu_list_gene_pane_t1

0x573b,	// (0x0003645d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x573b,	// (0x0003645d) sp_fs_action_menu_list_gene_pane

0x3362,	// (0x00034084) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3362,	// (0x00034084) popup_sp_fs_action_menu_bg_pane

0x575a,	// (0x0003647c) sp_fs_action_menu_list_pane_ParamLimits

0x575a,	// (0x0003647c) sp_fs_action_menu_list_pane

0x3392,	// (0x000340b4) sp_fs_scroll_pane_cp01_ParamLimits

0x3392,	// (0x000340b4) sp_fs_scroll_pane_cp01

0x577a,	// (0x0003649c) list_medium_line_plain_t2_t1

0x578a,	// (0x000364ac) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00040a26) list_medium_line_plain_t2_t

0x5798,	// (0x000364ba) list_medium_line_plain_t3_t1

0x57a8,	// (0x000364ca) list_medium_line_plain_t3_t2

0x57b6,	// (0x000364d8) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00040a2b) list_medium_line_plain_t3_t

0x4de6,	// (0x00035b08) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x2_t2_g2_g1

0x4dfe,	// (0x00035b20) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4dfe,	// (0x00035b20) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0003ff8c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0003ff8c) list_medium_line_x2_t2_g2_g

0x4f97,	// (0x00035cb9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4f97,	// (0x00035cb9) list_medium_line_x2_t2_g2_t1

0x4e31,	// (0x00035b53) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4e31,	// (0x00035b53) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00040a32) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00040a32) list_medium_line_x2_t2_g2_t

0x4de6,	// (0x00035b08) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x2_t4_g2_g1

0x57c4,	// (0x000364e6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x57c4,	// (0x000364e6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x00040a37) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x00040a37) list_medium_line_x2_t4_g2_g

0x57d6,	// (0x000364f8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x57d6,	// (0x000364f8) list_medium_line_x2_t4_g2_t1

0x57f0,	// (0x00036512) list_medium_line_x2_t4_g2_t2_ParamLimits

0x57f0,	// (0x00036512) list_medium_line_x2_t4_g2_t2

0x5805,	// (0x00036527) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5805,	// (0x00036527) list_medium_line_x2_t4_g2_t3

0x4e31,	// (0x00035b53) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4e31,	// (0x00035b53) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x00040a3c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x00040a3c) list_medium_line_x2_t4_g2_t

0x581a,	// (0x0003653c) list_medium_line_t3_right_iconx2_g1

0x56a9,	// (0x000363cb) list_medium_line_t3_right_iconx2_g2

0x5822,	// (0x00036544) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x00040a45) list_medium_line_t3_right_iconx2_g

0x582a,	// (0x0003654c) list_medium_line_t3_right_iconx2_t1

0x583a,	// (0x0003655c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x00040a4c) list_medium_line_t3_right_iconx2_t

0x4de6,	// (0x00035b08) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x3_t4_g4_g1

0x4df2,	// (0x00035b14) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4df2,	// (0x00035b14) list_medium_line_x3_t4_g4_g2

0x4e7a,	// (0x00035b9c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4e7a,	// (0x00035b9c) list_medium_line_x3_t4_g4_g3

0x5848,	// (0x0003656a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5848,	// (0x0003656a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x00040a51) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x00040a51) list_medium_line_x3_t4_g4_g

0x5854,	// (0x00036576) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5854,	// (0x00036576) list_medium_line_x3_t4_g4_t1

0x586b,	// (0x0003658d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x586b,	// (0x0003658d) list_medium_line_x3_t4_g4_t2

0x4fac,	// (0x00035cce) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4fac,	// (0x00035cce) list_medium_line_x3_t4_g4_t3

0x5880,	// (0x000365a2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5880,	// (0x000365a2) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x00040a5a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x00040a5a) list_medium_line_x3_t4_g4_t

0x589d,	// (0x000365bf) list_single_dyc_row_text_pane_t1_ParamLimits

0x589d,	// (0x000365bf) list_single_dyc_row_text_pane_t1

0x58d4,	// (0x000365f6) list_single_dyc_row_text_pane_t2_ParamLimits

0x58d4,	// (0x000365f6) list_single_dyc_row_text_pane_t2

0x592e,	// (0x00036650) list_single_dyc_row_text_pane_t3_ParamLimits

0x592e,	// (0x00036650) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x00040a63) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x00040a63) list_single_dyc_row_text_pane_t

0x5940,	// (0x00036662) list_single_dyc_row_pane_g1_ParamLimits

0x5940,	// (0x00036662) list_single_dyc_row_pane_g1

0x594c,	// (0x0003666e) list_single_dyc_row_pane_g2_ParamLimits

0x594c,	// (0x0003666e) list_single_dyc_row_pane_g2

0x5958,	// (0x0003667a) list_single_dyc_row_pane_g3_ParamLimits

0x5958,	// (0x0003667a) list_single_dyc_row_pane_g3

0x5964,	// (0x00036686) list_single_dyc_row_pane_g4_ParamLimits

0x5964,	// (0x00036686) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x00040a6a) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x00040a6a) list_single_dyc_row_pane_g

0x5970,	// (0x00036692) list_single_dyc_row_text_pane_ParamLimits

0x5970,	// (0x00036692) list_single_dyc_row_text_pane

0x5f82,	// (0x00036ca4) bg_sp_fs_scroll_pane

0x344a,	// (0x0003416c) thumb_sp_fs_scroll_pane

0x5279,	// (0x00035f9b) list_medium_line_g1_ParamLimits

0x5279,	// (0x00035f9b) list_medium_line_g1

0x598f,	// (0x000366b1) list_medium_line_t1_ParamLimits

0x598f,	// (0x000366b1) list_medium_line_t1

0x4de6,	// (0x00035b08) list_medium_line_x2_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x2_g1

0x4df2,	// (0x00035b14) list_medium_line_x2_g2_ParamLimits

0x4df2,	// (0x00035b14) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x00040a73) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x00040a73) list_medium_line_x2_g

0x59a4,	// (0x000366c6) list_medium_line_x2_t1_ParamLimits

0x59a4,	// (0x000366c6) list_medium_line_x2_t1

0x4de6,	// (0x00035b08) list_medium_line_x3_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x3_g1

0x4df2,	// (0x00035b14) list_medium_line_x3_g2_ParamLimits

0x4df2,	// (0x00035b14) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x00040a73) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x00040a73) list_medium_line_x3_g

0x59a4,	// (0x000366c6) list_medium_line_x3_t1_ParamLimits

0x59a4,	// (0x000366c6) list_medium_line_x3_t1

0x347e,	// (0x000341a0) thumb_sp_fs_scroll_pane_g1

0x3487,	// (0x000341a9) thumb_sp_fs_scroll_pane_g2

0x3490,	// (0x000341b2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00040a78) thumb_sp_fs_scroll_pane_g

0x347e,	// (0x000341a0) bg_sp_fs_scroll_pane_g1

0x3487,	// (0x000341a9) bg_sp_fs_scroll_pane_g2

0x3490,	// (0x000341b2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00040a78) bg_sp_fs_scroll_pane_g

0x4de6,	// (0x00035b08) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4de6,	// (0x00035b08) list_medium_line_x2_t3_g4_g1

0x4e6e,	// (0x00035b90) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4e6e,	// (0x00035b90) list_medium_line_x2_t3_g4_g2

0x4df2,	// (0x00035b14) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4df2,	// (0x00035b14) list_medium_line_x2_t3_g4_g3

0x4dfe,	// (0x00035b20) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4dfe,	// (0x00035b20) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00040008) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00040008) list_medium_line_x2_t3_g4_g

0x59ba,	// (0x000366dc) list_medium_line_x2_t3_g4_t1_ParamLimits

0x59ba,	// (0x000366dc) list_medium_line_x2_t3_g4_t1

0x59d0,	// (0x000366f2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x59d0,	// (0x000366f2) list_medium_line_x2_t3_g4_t2

0x4e31,	// (0x00035b53) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4e31,	// (0x00035b53) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x00040a7f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x00040a7f) list_medium_line_x2_t3_g4_t

0x5279,	// (0x00035f9b) list_medium_line_g2_g1_ParamLimits

0x5279,	// (0x00035f9b) list_medium_line_g2_g1

0x5285,	// (0x00035fa7) list_medium_line_g2_g2_ParamLimits

0x5285,	// (0x00035fa7) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00040741) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00040741) list_medium_line_g2_g

0x59ea,	// (0x0003670c) list_medium_line_g2_t1_ParamLimits

0x59ea,	// (0x0003670c) list_medium_line_g2_t1

0x5279,	// (0x00035f9b) list_medium_line_t3_g2_g1_ParamLimits

0x5279,	// (0x00035f9b) list_medium_line_t3_g2_g1

0x5285,	// (0x00035fa7) list_medium_line_t3_g2_g2_ParamLimits

0x5285,	// (0x00035fa7) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00040741) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00040741) list_medium_line_t3_g2_g

0x59ff,	// (0x00036721) list_medium_line_t3_g2_t1_ParamLimits

0x59ff,	// (0x00036721) list_medium_line_t3_g2_t1

0x5a16,	// (0x00036738) list_medium_line_t3_g2_t2_ParamLimits

0x5a16,	// (0x00036738) list_medium_line_t3_g2_t2

0x5a2b,	// (0x0003674d) list_medium_line_t3_g2_t3_ParamLimits

0x5a2b,	// (0x0003674d) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x00040a86) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x00040a86) list_medium_line_t3_g2_t

0x56a9,	// (0x000363cb) list_medium_line_right_icon_g1

0x5a40,	// (0x00036762) list_medium_line_right_icon_t1

0x5279,	// (0x00035f9b) list_medium_line_t2_g1_ParamLimits

0x5279,	// (0x00035f9b) list_medium_line_t2_g1

0x5a4e,	// (0x00036770) list_medium_line_t2_t1_ParamLimits

0x5a4e,	// (0x00036770) list_medium_line_t2_t1

0x5a68,	// (0x0003678a) list_medium_line_t2_t2_ParamLimits

0x5a68,	// (0x0003678a) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x00040a8d) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x00040a8d) list_medium_line_t2_t

0x5279,	// (0x00035f9b) list_medium_line_t3_g1_ParamLimits

0x5279,	// (0x00035f9b) list_medium_line_t3_g1

0x5a7d,	// (0x0003679f) list_medium_line_t3_t1_ParamLimits

0x5a7d,	// (0x0003679f) list_medium_line_t3_t1

0x5a94,	// (0x000367b6) list_medium_line_t3_t2_ParamLimits

0x5a94,	// (0x000367b6) list_medium_line_t3_t2

0x5aa9,	// (0x000367cb) list_medium_line_t3_t3_ParamLimits

0x5aa9,	// (0x000367cb) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x00040a92) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x00040a92) list_medium_line_t3_t

0x5279,	// (0x00035f9b) list_medium_line_g3_g1_ParamLimits

0x5279,	// (0x00035f9b) list_medium_line_g3_g1

0x5abb,	// (0x000367dd) list_medium_line_g3_g2_ParamLimits

0x5abb,	// (0x000367dd) list_medium_line_g3_g2

0x5285,	// (0x00035fa7) list_medium_line_g3_g3_ParamLimits

0x5285,	// (0x00035fa7) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x00040a99) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x00040a99) list_medium_line_g3_g

0x5ac7,	// (0x000367e9) list_medium_line_g3_t1_ParamLimits

0x5ac7,	// (0x000367e9) list_medium_line_g3_t1

0x5279,	// (0x00035f9b) list_medium_line_t2_g3_g1_ParamLimits

0x5279,	// (0x00035f9b) list_medium_line_t2_g3_g1

0x5abb,	// (0x000367dd) list_medium_line_t2_g3_g2_ParamLimits

0x5abb,	// (0x000367dd) list_medium_line_t2_g3_g2

0x5285,	// (0x00035fa7) list_medium_line_t2_g3_g3_ParamLimits

0x5285,	// (0x00035fa7) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x00040a99) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x00040a99) list_medium_line_t2_g3_g

0x5adc,	// (0x000367fe) list_medium_line_t2_g3_t1_ParamLimits

0x5adc,	// (0x000367fe) list_medium_line_t2_g3_t1

0x5af6,	// (0x00036818) list_medium_line_t2_g3_t2_ParamLimits

0x5af6,	// (0x00036818) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x00040aa0) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x00040aa0) list_medium_line_t2_g3_t

0x5279,	// (0x00035f9b) list_medium_line_t3_g3_g1_ParamLimits

0x5279,	// (0x00035f9b) list_medium_line_t3_g3_g1

0x5abb,	// (0x000367dd) list_medium_line_t3_g3_g2_ParamLimits

0x5abb,	// (0x000367dd) list_medium_line_t3_g3_g2

0x5285,	// (0x00035fa7) list_medium_line_t3_g3_g3_ParamLimits

0x5285,	// (0x00035fa7) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x00040a99) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x00040a99) list_medium_line_t3_g3_g

0x5b0b,	// (0x0003682d) list_medium_line_t3_g3_t1_ParamLimits

0x5b0b,	// (0x0003682d) list_medium_line_t3_g3_t1

0x5b1f,	// (0x00036841) list_medium_line_t3_g3_t2_ParamLimits

0x5b1f,	// (0x00036841) list_medium_line_t3_g3_t2

0x5b31,	// (0x00036853) list_medium_line_t3_g3_t3_ParamLimits

0x5b31,	// (0x00036853) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x00040aa5) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x00040aa5) list_medium_line_t3_g3_t

0x581a,	// (0x0003653c) list_medium_line_right_iconx2_g1

0x56a9,	// (0x000363cb) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00040aac) list_medium_line_right_iconx2_g

0x5b43,	// (0x00036865) list_medium_line_right_iconx2_t1

0x581a,	// (0x0003653c) list_medium_line_t2_right_iconx2_g1

0x56a9,	// (0x000363cb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00040aac) list_medium_line_t2_right_iconx2_g

0x5b51,	// (0x00036873) list_medium_line_t2_right_iconx2_t1

0x5b61,	// (0x00036883) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x00040ab1) list_medium_line_t2_right_iconx2_t

0x5b6f,	// (0x00036891) list_medium_line_x4_t4_t1

0x5b7d,	// (0x0003689f) list_medium_line_x4_t4_t2

0x5b8d,	// (0x000368af) list_medium_line_x4_t4_t3

0x5b9d,	// (0x000368bf) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x00040ab6) list_medium_line_x4_t4_t

0xcc4a,	// (0x0003d96c) tport_appsw_pane_ParamLimits

0xcc4a,	// (0x0003d96c) tport_appsw_pane

0xcc56,	// (0x0003d978) tport_contact_pane_ParamLimits

0xcc56,	// (0x0003d978) tport_contact_pane

0xcc66,	// (0x0003d988) tport_listscroll_pane_ParamLimits

0xcc66,	// (0x0003d988) tport_listscroll_pane

0xcc76,	// (0x0003d998) cell_tport_appsw_pane_ParamLimits

0xcc76,	// (0x0003d998) cell_tport_appsw_pane

0x1501,	// (0x00032223) tport_appsw_pane_g1_ParamLimits

0x1501,	// (0x00032223) tport_appsw_pane_g1

0x34f9,	// (0x0003421b) tport_contact_pane_g1

0x2dcf,	// (0x00033af1) tport_contact_pane_t1

0x3502,	// (0x00034224) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x00040abf) tport_contact_pane_t

0x3510,	// (0x00034232) list_tport_pane

0x3519,	// (0x0003423b) scroll_pane_cp_030

0x352a,	// (0x0003424c) cell_tport_appsw_pane_g1

0x353a,	// (0x0003425c) cell_tport_appsw_pane_t1

0x5f82,	// (0x00036ca4) grid_highlight_pane_cp019

0xcca1,	// (0x0003d9c3) list_tport_double_graphic_pane_ParamLimits

0xcca1,	// (0x0003d9c3) list_tport_double_graphic_pane

0xf0d2,	// (0x0003fdf4) list_highlight_pane_cp023_ParamLimits

0xf0d2,	// (0x0003fdf4) list_highlight_pane_cp023

0xccb3,	// (0x0003d9d5) list_tport_double_graphic_pane_g1_ParamLimits

0xccb3,	// (0x0003d9d5) list_tport_double_graphic_pane_g1

0xccc0,	// (0x0003d9e2) list_tport_double_graphic_pane_t1_ParamLimits

0xccc0,	// (0x0003d9e2) list_tport_double_graphic_pane_t1

0xccd5,	// (0x0003d9f7) list_tport_double_graphic_pane_t2_ParamLimits

0xccd5,	// (0x0003d9f7) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x00040acb) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x00040acb) list_tport_double_graphic_pane_t

0x5f82,	// (0x00036ca4) main_cale_note_pane

0xb076,	// (0x0003bd98) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb076,	// (0x0003bd98) cell_vitu2_function_top_wide_pane_cp01

0xc71c,	// (0x0003d43e) wait_bar_pane_cp05_ParamLimits

0x5f82,	// (0x00036ca4) listscroll_cmail_pane

0x3550,	// (0x00034272) list_cmail_pane

0xccf1,	// (0x0003da13) list_cmail_body_pane

0xcd0e,	// (0x0003da30) list_single_cmail_header_caption_pane

0xcd33,	// (0x0003da55) list_single_cmail_header_detail_pane_ParamLimits

0xcd33,	// (0x0003da55) list_single_cmail_header_detail_pane

0xcd66,	// (0x0003da88) list_single_cmail_header_caption_pane_t1

0x5bad,	// (0x000368cf) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5bad,	// (0x000368cf) list_single_cmail_header_detail_pane_g1

0x5bc3,	// (0x000368e5) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5bc3,	// (0x000368e5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x00040ad0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x00040ad0) list_single_cmail_header_detail_pane_g

0x5bcf,	// (0x000368f1) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5bcf,	// (0x000368f1) list_single_cmail_header_detail_pane_t1

0x5c29,	// (0x0003694b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5c29,	// (0x0003694b) list_single_cmail_header_editor_pane_bg

0x2f7e,	// (0x00033ca0) list_cmail_body_pane_g1

0x35d2,	// (0x000342f4) list_cmail_body_pane_t1

0x201c,	// (0x00032d3e) list_single_cmail_header_editor_pane_bg_g1

0xe319,	// (0x0003f03b) list_single_cmail_header_editor_pane_bg_g1_copy1

0x202c,	// (0x00032d4e) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2024,	// (0x00032d46) list_single_cmail_header_editor_pane_bg_g1_copy3

0x22c9,	// (0x00032feb) list_single_cmail_header_editor_pane_bg_g1_copy4

0x204c,	// (0x00032d6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x203c,	// (0x00032d5e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2044,	// (0x00032d66) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe2f9,	// (0x0003f01b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcd74,	// (0x0003da96) calenote_gesture_pane_ParamLimits

0xcd74,	// (0x0003da96) calenote_gesture_pane

0xcd8e,	// (0x0003dab0) calenote_window_pane_ParamLimits

0xcd8e,	// (0x0003dab0) calenote_window_pane

0x35e0,	// (0x00034302) popup_note_window_cp01

0xcda6,	// (0x0003dac8) calenote_swipe_1_pane_ParamLimits

0xcda6,	// (0x0003dac8) calenote_swipe_1_pane

0xcb9e,	// (0x0003d8c0) calenote_swipe_2_pane_ParamLimits

0xcb9e,	// (0x0003d8c0) calenote_swipe_2_pane

0x31a1,	// (0x00033ec3) calenote_swipe_1_pane_g1_ParamLimits

0x31a1,	// (0x00033ec3) calenote_swipe_1_pane_g1

0x31ae,	// (0x00033ed0) calenote_swipe_1_pane_g2_ParamLimits

0x31ae,	// (0x00033ed0) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x000409ff) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x000409ff) calenote_swipe_1_pane_g

0x35f2,	// (0x00034314) calenote_swipe_1_pane_t1_ParamLimits

0x35f2,	// (0x00034314) calenote_swipe_1_pane_t1

0x31a1,	// (0x00033ec3) calenote_swipe_2_pane_g1_ParamLimits

0x31a1,	// (0x00033ec3) calenote_swipe_2_pane_g1

0x3611,	// (0x00034333) calenote_swipe_2_pane_g2_ParamLimits

0x3611,	// (0x00034333) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x00040adc) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x00040adc) calenote_swipe_2_pane_g

0x361d,	// (0x0003433f) calenote_swipe_2_pane_t1_ParamLimits

0x361d,	// (0x0003433f) calenote_swipe_2_pane_t1

0x5f82,	// (0x00036ca4) main_mup_navstr_pane

0x9e3f,	// (0x0003ab61) main_mup3_pane_t7_ParamLimits

0x9e3f,	// (0x0003ab61) main_mup3_pane_t7

0xa807,	// (0x0003b529) main_mp4_pane_g6_ParamLimits

0xa807,	// (0x0003b529) main_mp4_pane_g6

0xab79,	// (0x0003b89b) main_image3_pane_t4_ParamLimits

0xab79,	// (0x0003b89b) main_image3_pane_t4

0xcdb9,	// (0x0003dadb) popup_navstr_preview_pane_ParamLimits

0xcdb9,	// (0x0003dadb) popup_navstr_preview_pane

0xcdc5,	// (0x0003dae7) scroll_navstr_pane_ParamLimits

0xcdc5,	// (0x0003dae7) scroll_navstr_pane

0x5f82,	// (0x00036ca4) bg_popup_preview_window_pane_cp04

0x3644,	// (0x00034366) popup_navstr_preview_pane_t1

0xcdd1,	// (0x0003daf3) scroll_navstr_pane_g1_ParamLimits

0xcdd1,	// (0x0003daf3) scroll_navstr_pane_g1

0xcdde,	// (0x0003db00) scroll_navstr_pane_t1_ParamLimits

0xcdde,	// (0x0003db00) scroll_navstr_pane_t1

0x35e9,	// (0x0003430b) bg_button_pane_cp014

0x35e9,	// (0x0003430b) bg_button_pane_cp030

0x560b,	// (0x0003632d) list_double_fisheye_pane_g4_ParamLimits

0x560b,	// (0x0003632d) list_double_fisheye_pane_g4

0x5617,	// (0x00036339) list_double_fisheye_pane_g5_ParamLimits

0x5617,	// (0x00036339) list_double_fisheye_pane_g5

0x3558,	// (0x0003427a) sp_fs_scroll_pane_cp03

0x32e0,	// (0x00034002) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x32ec,	// (0x0003400e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x00040a1c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x32f8,	// (0x0003401a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcce7,	// (0x0003da09) sp_fs_scroll_pane_cp02

0xe029,	// (0x0003ed4b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe029,	// (0x0003ed4b) popup_sp_fs_calendar_preview_list_single_pane

0x5f82,	// (0x00036ca4) main_cam6_pano_pane

0xf0d2,	// (0x0003fdf4) main_mup3_pane_ParamLimits

0x5f82,	// (0x00036ca4) main_phacti_pane

0xc5f1,	// (0x0003d313) bg_button_pane_cp11

0xc609,	// (0x0003d32b) main_mobtv_info_pane_g2_ParamLimits

0xc609,	// (0x0003d32b) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0004097c) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0004097c) main_mobtv_info_pane_g

0xc7bb,	// (0x0003d4dd) sc_clock_pane_t5_ParamLimits

0xc7bb,	// (0x0003d4dd) sc_clock_pane_t5

0xc99a,	// (0x0003d6bc) main_radioblah_pane_g1_ParamLimits

0x30e4,	// (0x00033e06) main_radioblah_pane_t3_ParamLimits

0x30e4,	// (0x00033e06) main_radioblah_pane_t3

0x30fc,	// (0x00033e1e) main_radioblah_pane_t4_ParamLimits

0x30fc,	// (0x00033e1e) main_radioblah_pane_t4

0xc9b8,	// (0x0003d6da) main_radioblah_text_pane_ParamLimits

0xc9b8,	// (0x0003d6da) main_radioblah_text_pane

0xc9c5,	// (0x0003d6e7) main_radioblah_info_pane_g1_ParamLimits

0xca5a,	// (0x0003d77c) main_radioblah_info_pane_t4_ParamLimits

0xca5a,	// (0x0003d77c) main_radioblah_info_pane_t4

0xf0d2,	// (0x0003fdf4) main_sp_fs_calendar_pane

0xcdf0,	// (0x0003db12) main_phacti_pane_g1

0xcdf8,	// (0x0003db1a) phacti_note_pane_ParamLimits

0xcdf8,	// (0x0003db1a) phacti_note_pane

0x365b,	// (0x0003437d) phacti_term_pane_ParamLimits

0x365b,	// (0x0003437d) phacti_term_pane

0x3670,	// (0x00034392) phacti_note_pane_t1_ParamLimits

0x3670,	// (0x00034392) phacti_note_pane_t1

0x5c3b,	// (0x0003695d) phacti_term_pane_g1

0x5c43,	// (0x00036965) phacti_term_pane_t1_ParamLimits

0x5c43,	// (0x00036965) phacti_term_pane_t1

0x36b9,	// (0x000343db) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe11c,	// (0x0003ee3e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00040ae6) popup_sp_fs_calendar_preview_list_single_pane_g

0x36c1,	// (0x000343e3) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x36c1,	// (0x000343e3) popup_sp_fs_calendar_preview_list_single_pane_t1

0x36d6,	// (0x000343f8) aid_popup_sp_fs_bg_corner_pane

0x1224,	// (0x00031f46) popup_sp_fs_calendar_preview_bg_pane_g1

0x5f82,	// (0x00036ca4) popup_sp_fs_calendar_preview_bg_pane

0x36de,	// (0x00034400) popup_sp_fs_calendar_preview_list_pane

0xf0d2,	// (0x0003fdf4) bg_main_sp_fs_cale_pane_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_main_sp_fs_cale_pane

0x5c6d,	// (0x0003698f) listscroll_cale_mrui_pane_ParamLimits

0x5c6d,	// (0x0003698f) listscroll_cale_mrui_pane

0x5c81,	// (0x000369a3) listscroll_sp_fs_schedule_track_pane

0x5c8a,	// (0x000369ac) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5c8a,	// (0x000369ac) main_sp_fs_ctrlbar_pane_cp01

0x371d,	// (0x0003443f) main_sp_fs_ribbon_pane

0x3725,	// (0x00034447) popup_sp_fs_cale_preview_window

0xce37,	// (0x0003db59) list_single_sp_fs_schedule_track_pane_ParamLimits

0xce37,	// (0x0003db59) list_single_sp_fs_schedule_track_pane

0x6213,	// (0x00036f35) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6213,	// (0x00036f35) bg_sp_fs_highlight_list_pane_cp03

0xce50,	// (0x0003db72) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xce50,	// (0x0003db72) list_single_sp_fs_schedule_track_pane_g1

0xce5c,	// (0x0003db7e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xce5c,	// (0x0003db7e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x00040aeb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x00040aeb) list_single_sp_fs_schedule_track_pane_g

0xce68,	// (0x0003db8a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xce68,	// (0x0003db8a) list_single_sp_fs_schedule_track_pane_t1

0xce80,	// (0x0003dba2) sp_fs_schedule_track_pane_ParamLimits

0xce80,	// (0x0003dba2) sp_fs_schedule_track_pane

0x3737,	// (0x00034459) sp_fs_schedule_track_pane_g1

0x373f,	// (0x00034461) sp_fs_schedule_track_pane_g2

0x3747,	// (0x00034469) sp_fs_schedule_track_pane_g3

0x374f,	// (0x00034471) sp_fs_schedule_track_pane_g4

0x3757,	// (0x00034479) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00040af0) sp_fs_schedule_track_pane_g

0x201c,	// (0x00032d3e) bg_sp_fs_schedule_viewer_highlight_g1

0xe319,	// (0x0003f03b) bg_sp_fs_schedule_viewer_highlight_g2

0x2024,	// (0x00032d46) bg_sp_fs_schedule_viewer_highlight_g3

0x202c,	// (0x00032d4e) bg_sp_fs_schedule_viewer_highlight_g4

0x22c9,	// (0x00032feb) bg_sp_fs_schedule_viewer_highlight_g5

0x203c,	// (0x00032d5e) bg_sp_fs_schedule_viewer_highlight_g6

0x2044,	// (0x00032d66) bg_sp_fs_schedule_viewer_highlight_g7

0x204c,	// (0x00032d6e) bg_sp_fs_schedule_viewer_highlight_g8

0xe2f9,	// (0x0003f01b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x00040afb) bg_sp_fs_schedule_viewer_highlight_g

0x5f82,	// (0x00036ca4) bg_main_sp_fs_ribbon_pane

0xce90,	// (0x0003dbb2) main_sp_fs_ribbon_pane_g1

0x375f,	// (0x00034481) main_sp_fs_ribbon_pane_t1

0xce99,	// (0x0003dbbb) main_sp_fs_ribbon_pane_t2

0x376e,	// (0x00034490) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x00040b0e) main_sp_fs_ribbon_pane_t

0x377d,	// (0x0003449f) main_sp_fs_ribbon_scheduler_pane

0x3785,	// (0x000344a7) bg_main_sp_fs_ribbon_pane_g1

0x378e,	// (0x000344b0) bg_main_sp_fs_ribbon_pane_g2

0x3797,	// (0x000344b9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00040b15) bg_main_sp_fs_ribbon_pane_g

0x379f,	// (0x000344c1) main_sp_fs_ribbon_scheduler_pane_g1

0x37a8,	// (0x000344ca) main_sp_fs_ribbon_scheduler_pane_g2

0x37b1,	// (0x000344d3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x00040b1c) main_sp_fs_ribbon_scheduler_pane_g

0x37ba,	// (0x000344dc) list_cale_mrui_pane

0xcea8,	// (0x0003dbca) sp_fs_scroll_pane_cp07_ParamLimits

0xcea8,	// (0x0003dbca) sp_fs_scroll_pane_cp07

0xcebe,	// (0x0003dbe0) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcebe,	// (0x0003dbe0) bg_sp_fs_schedule_viewer_highlight

0x37c3,	// (0x000344e5) list_single_sp_fs_schedule_track_pane_cp01

0x37cb,	// (0x000344ed) list_sp_fs_schedule_track_pane

0x37d3,	// (0x000344f5) sp_fs_scroll_pane_cp06_ParamLimits

0x37d3,	// (0x000344f5) sp_fs_scroll_pane_cp06

0x1224,	// (0x00031f46) bgmain_sp_fs_calendar_pane_g1

0x5c9b,	// (0x000369bd) list_single_cale_mrui_pane_ParamLimits

0x5c9b,	// (0x000369bd) list_single_cale_mrui_pane

0x5cc3,	// (0x000369e5) list_single_cale_mrui_row_pane_ParamLimits

0x5cc3,	// (0x000369e5) list_single_cale_mrui_row_pane

0x5cd0,	// (0x000369f2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5cd0,	// (0x000369f2) list_single_cale_mrui_row_pane_g1

0x5d08,	// (0x00036a2a) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5d08,	// (0x00036a2a) list_single_cale_mrui_row_pane_t1

0x5d1a,	// (0x00036a3c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5d1a,	// (0x00036a3c) list_single_cale_mrui_row_pane_t2

0x5d80,	// (0x00036aa2) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5d80,	// (0x00036aa2) list_single_cale_mrui_row_pane_t3

0x5daf,	// (0x00036ad1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5daf,	// (0x00036ad1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x00040b28) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x00040b28) list_single_cale_mrui_row_pane_t

0x5dde,	// (0x00036b00) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5dde,	// (0x00036b00) list_single_cmail_header_editor_pane_bg_cp01

0x5dfe,	// (0x00036b20) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5dfe,	// (0x00036b20) list_single_cmail_header_editor_pane_bg_cp02

0xcecb,	// (0x0003dbed) main_radioblah_text_pane_t1_ParamLimits

0xcecb,	// (0x0003dbed) main_radioblah_text_pane_t1

0x389a,	// (0x000345bc) cam6_indi_pane_cp01

0x38a2,	// (0x000345c4) cam6_mode_pane_cp01

0x38aa,	// (0x000345cc) cam6_pano_pane

0x38b3,	// (0x000345d5) cam6_zoom_pane_cp01

0x38bb,	// (0x000345dd) cam6_pano_image_pane

0x38c6,	// (0x000345e8) cam6_pano_pane_g1

0x2f7e,	// (0x00033ca0) cam6_pano_pane_g2

0x38cf,	// (0x000345f1) cam6_pano_pane_g3

0x38d8,	// (0x000345fa) cam6_pano_pane_g4

0x17cc,	// (0x000324ee) cam6_pano_pane_g5

0x38e1,	// (0x00034603) cam6_pano_pane_g6

0x38eb,	// (0x0003460d) cam6_pano_pane_g7

0x38f3,	// (0x00034615) cam6_pano_pane_g8

0x38fc,	// (0x0003461e) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x00040b31) cam6_pano_pane_g

0x5f82,	// (0x00036ca4) main_browser_tag_pane

0x363c,	// (0x0003435e) grid_navstr_albumart_pane

0x3907,	// (0x00034629) cell_navstr_albumart_pane_ParamLimits

0x3907,	// (0x00034629) cell_navstr_albumart_pane

0x392a,	// (0x0003464c) cell_navstr_albumart_pane_g1

0x0b3b,	// (0x0003185d) cell_navstr_albumart_pane_g2

0x0b4b,	// (0x0003186d) cell_navstr_albumart_pane_g3

0x0b43,	// (0x00031865) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x00040b44) cell_navstr_albumart_pane_g

0xcee6,	// (0x0003dc08) bt_list_pane_ParamLimits

0xcee6,	// (0x0003dc08) bt_list_pane

0xcf06,	// (0x0003dc28) bt_list_pane_t1

0xcf15,	// (0x0003dc37) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x00040b4d) bt_list_pane_t

0x5f82,	// (0x00036ca4) main_cale_prevew_pane

0xcf24,	// (0x0003dc46) popup_cale_preview_window_ParamLimits

0xcf24,	// (0x0003dc46) popup_cale_preview_window

0xf0d2,	// (0x0003fdf4) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_popup_preview_window_pane_cp05

0x3932,	// (0x00034654) list_cale_preview_pane_ParamLimits

0x3932,	// (0x00034654) list_cale_preview_pane

0x3c76,	// (0x00034998) list_double_cale_preview_pane_ParamLimits

0x3c76,	// (0x00034998) list_double_cale_preview_pane

0xcf3d,	// (0x0003dc5f) list_single_cale_preview_pane_ParamLimits

0xcf3d,	// (0x0003dc5f) list_single_cale_preview_pane

0xcf53,	// (0x0003dc75) list_single_cale_preview_pane_g1

0xcf5b,	// (0x0003dc7d) list_single_cale_preview_pane_t1_ParamLimits

0xcf5b,	// (0x0003dc7d) list_single_cale_preview_pane_t1

0xcf70,	// (0x0003dc92) list_double_cale_preview_pane_g1

0xcf78,	// (0x0003dc9a) list_double_cale_preview_pane_t1_ParamLimits

0xcf78,	// (0x0003dc9a) list_double_cale_preview_pane_t1

0xcf8d,	// (0x0003dcaf) list_double_cale_preview_pane_t2_ParamLimits

0xcf8d,	// (0x0003dcaf) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x00040b52) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x00040b52) list_double_cale_preview_pane_t

0x5f82,	// (0x00036ca4) main_ezdial_pane

0xf0d2,	// (0x0003fdf4) main_sp_fs_email_pane_ParamLimits

0xcbb8,	// (0x0003d8da) cmail_ddmenu_btn01_pane_ParamLimits

0xcbb8,	// (0x0003d8da) cmail_ddmenu_btn01_pane

0xcbd5,	// (0x0003d8f7) cmail_ddmenu_btn02_pane_ParamLimits

0xcbd5,	// (0x0003d8f7) cmail_ddmenu_btn02_pane

0xcbf3,	// (0x0003d915) cmail_ddmenu_btn03_pane_ParamLimits

0xcbf3,	// (0x0003d915) cmail_ddmenu_btn03_pane

0x56cf,	// (0x000363f1) main_sp_fs_ctrlbar_pane_ParamLimits

0x56eb,	// (0x0003640d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xccf1,	// (0x0003da13) list_cmail_body_pane_ParamLimits

0x3568,	// (0x0003428a) bg_button_pane_cp12

0x357d,	// (0x0003429f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x357d,	// (0x0003429f) list_single_cmail_header_detail_pane_g3

0x5c05,	// (0x00036927) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5c05,	// (0x00036927) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x00040ad7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x00040ad7) list_single_cmail_header_detail_pane_t

0x5c58,	// (0x0003697a) phacti_term_pane_t2_ParamLimits

0x5c58,	// (0x0003697a) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00040ae1) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00040ae1) phacti_term_pane_t

0x393e,	// (0x00034660) aid_size_list_single_double

0xcfa5,	// (0x0003dcc7) popup_ezdial_listscroll_window

0xcfc5,	// (0x0003dce7) popup_number_entry_window_cp01

0xea04,	// (0x0003f726) bg_popup_call_pane_cp09

0x394a,	// (0x0003466c) ezdial_list_pane

0x3952,	// (0x00034674) scroll_pane_cp23

0x1009,	// (0x00031d2b) bg_button_pane_cp028_ParamLimits

0x1009,	// (0x00031d2b) bg_button_pane_cp028

0xcfd3,	// (0x0003dcf5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcfd3,	// (0x0003dcf5) cmail_ddmenu_btn01_pane_g1

0xcfe3,	// (0x0003dd05) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcfe3,	// (0x0003dd05) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x00040b57) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x00040b57) cmail_ddmenu_btn01_pane_g

0x395a,	// (0x0003467c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x395a,	// (0x0003467c) cmail_ddmenu_btn01_pane_t1

0x0d1e,	// (0x00031a40) bg_button_pane_cp029_ParamLimits

0x0d1e,	// (0x00031a40) bg_button_pane_cp029

0xcfe3,	// (0x0003dd05) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcfe3,	// (0x0003dd05) cmail_ddmenu_btn02_pane_g1

0xcffb,	// (0x0003dd1d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcffb,	// (0x0003dd1d) cmail_ddmenu_btn02_pane_t1

0x6213,	// (0x00036f35) bg_button_pane_cp031_ParamLimits

0x6213,	// (0x00036f35) bg_button_pane_cp031

0xcfe3,	// (0x0003dd05) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcfe3,	// (0x0003dd05) cmail_ddmenu_btn03_pane_g1

0xcffb,	// (0x0003dd1d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcffb,	// (0x0003dd1d) cmail_ddmenu_btn03_pane_t1

0xaa24,	// (0x0003b746) cell_dialer2_keypad_pane_t1_ParamLimits

0xaa3e,	// (0x0003b760) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xaa3e,	// (0x0003b760) cell_dialer2_keypad_pane_t1_copy1

0xc491,	// (0x0003d1b3) ncimui_group_button_pane

0xf0d2,	// (0x0003fdf4) main_sp_fs_calendar_pane_ParamLimits

0xcd0e,	// (0x0003da30) list_single_cmail_header_caption_pane_ParamLimits

0x36e6,	// (0x00034408) aid_recal_txt_sm_pane

0x5f82,	// (0x00036ca4) mian_recal_day_pane

0x3725,	// (0x00034447) popup_sp_fs_cale_preview_window_ParamLimits

0x5f82,	// (0x00036ca4) list_recal_day_pane

0x3991,	// (0x000346b3) list_single_recal_day_pane_ParamLimits

0x3991,	// (0x000346b3) list_single_recal_day_pane

0x39a3,	// (0x000346c5) list_single_recal_day_pane_g1_ParamLimits

0x39a3,	// (0x000346c5) list_single_recal_day_pane_g1

0x39af,	// (0x000346d1) list_single_recal_day_pane_g2_ParamLimits

0x39af,	// (0x000346d1) list_single_recal_day_pane_g2

0x39be,	// (0x000346e0) list_single_recal_day_pane_g3_ParamLimits

0x39be,	// (0x000346e0) list_single_recal_day_pane_g3

0xd01f,	// (0x0003dd41) list_single_recal_day_pane_g4_ParamLimits

0xd01f,	// (0x0003dd41) list_single_recal_day_pane_g4

0x39ca,	// (0x000346ec) list_single_recal_day_pane_g5_ParamLimits

0x39ca,	// (0x000346ec) list_single_recal_day_pane_g5

0x39d9,	// (0x000346fb) list_single_recal_day_pane_g6_ParamLimits

0x39d9,	// (0x000346fb) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x00040b66) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x00040b66) list_single_recal_day_pane_g

0x39e5,	// (0x00034707) list_single_recal_day_pane_t1

0x39f3,	// (0x00034715) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x00040b73) list_single_recal_day_pane_t

0xd032,	// (0x0003dd54) ncimui_query_button_pane_ParamLimits

0xd032,	// (0x0003dd54) ncimui_query_button_pane

0xd042,	// (0x0003dd64) ncimui_query_button_pane_t1_ParamLimits

0xd042,	// (0x0003dd64) ncimui_query_button_pane_t1

0x3a01,	// (0x00034723) ncimui_query_button_pane_t2_ParamLimits

0x3a01,	// (0x00034723) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x00040b78) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x00040b78) ncimui_query_button_pane_t

0xd055,	// (0x0003dd77) query_button_pane_ParamLimits

0xd055,	// (0x0003dd77) query_button_pane

0x5f82,	// (0x00036ca4) bg_button_pane_cp0028

0x3a14,	// (0x00034736) query_button_pane_t1

0x8ed3,	// (0x00039bf5) main_tport_pane_ParamLimits

0xcc21,	// (0x0003d943) bg_popup_window_pane_cp01_ParamLimits

0xcc21,	// (0x0003d943) bg_popup_window_pane_cp01

0xcc2e,	// (0x0003d950) heading_pane_cp08_ParamLimits

0xcc2e,	// (0x0003d950) heading_pane_cp08

0xcc3c,	// (0x0003d95e) heading_pane_cp07_ParamLimits

0xcc3c,	// (0x0003d95e) heading_pane_cp07

0x352a,	// (0x0003424c) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x00040ac4) cell_tport_appsw_pane_g

0x4ff2,	// (0x00035d14) input_candi_list_open_g1

0xe4c0,	// (0x0003f1e2) list_cale_time_pane_g6_ParamLimits

0xe4c0,	// (0x0003f1e2) list_cale_time_pane_g6

0x9914,	// (0x0003a636) aid_size_touch_calib_1_ParamLimits

0x9914,	// (0x0003a636) aid_size_touch_calib_1

0x9920,	// (0x0003a642) aid_size_touch_calib_2_ParamLimits

0x9920,	// (0x0003a642) aid_size_touch_calib_2

0x992e,	// (0x0003a650) aid_size_touch_calib_3_ParamLimits

0x992e,	// (0x0003a650) aid_size_touch_calib_3

0x993e,	// (0x0003a660) aid_size_touch_calib_4_ParamLimits

0x993e,	// (0x0003a660) aid_size_touch_calib_4

0x994c,	// (0x0003a66e) main_touch_calib_button_group_pane_ParamLimits

0x994c,	// (0x0003a66e) main_touch_calib_button_group_pane

0x995a,	// (0x0003a67c) main_touch_calib_pane_g1_ParamLimits

0x9966,	// (0x0003a688) main_touch_calib_pane_g2_ParamLimits

0x9972,	// (0x0003a694) main_touch_calib_pane_g3_ParamLimits

0x997e,	// (0x0003a6a0) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00040497) main_touch_calib_pane_g_ParamLimits

0x998a,	// (0x0003a6ac) main_touch_calib_pane_t1_ParamLimits

0x99a1,	// (0x0003a6c3) main_touch_calib_pane_t2_ParamLimits

0x99b8,	// (0x0003a6da) main_touch_calib_pane_t3_ParamLimits

0x99cc,	// (0x0003a6ee) main_touch_calib_pane_t4_ParamLimits

0x99e0,	// (0x0003a702) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x000404a0) main_touch_calib_pane_t_ParamLimits

0x15a2,	// (0x000322c4) list_single_fp_cale_pane_g3_ParamLimits

0x15a2,	// (0x000322c4) list_single_fp_cale_pane_g3

0xf0d2,	// (0x0003fdf4) bg_button_pane_cp012_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_vkb2_func_pane_cp03_ParamLimits

0xb7d9,	// (0x0003c4fb) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0d2,	// (0x0003fdf4) bg_vkb2_func_pane_cp04_ParamLimits

0xc42f,	// (0x0003d151) main_ncimui_button_group_pane_ParamLimits

0xc42f,	// (0x0003d151) main_ncimui_button_group_pane

0xc47f,	// (0x0003d1a1) main_ncimui_pane_t3_ParamLimits

0xc47f,	// (0x0003d1a1) main_ncimui_pane_t3

0x3652,	// (0x00034374) phacti_button_group_pane

0x393e,	// (0x00034660) aid_size_list_single_double_ParamLimits

0xcfa5,	// (0x0003dcc7) popup_ezdial_listscroll_window_ParamLimits

0xcfc5,	// (0x0003dce7) popup_number_entry_window_cp01_ParamLimits

0xd062,	// (0x0003dd84) phacti_button_pane_ParamLimits

0xd062,	// (0x0003dd84) phacti_button_pane

0x5f82,	// (0x00036ca4) bg_button_pane_cp14

0x3a22,	// (0x00034744) phacti_button_pane_t1

0xd073,	// (0x0003dd95) main_touch_calib_button_pane_ParamLimits

0xd073,	// (0x0003dd95) main_touch_calib_button_pane

0xdf25,	// (0x0003ec47) bg_button_pane_cp18_ParamLimits

0xdf25,	// (0x0003ec47) bg_button_pane_cp18

0x3a30,	// (0x00034752) main_touch_calib_button_pane_t1_ParamLimits

0x3a30,	// (0x00034752) main_touch_calib_button_pane_t1

0x3a46,	// (0x00034768) main_touch_calib_button_pane_t2_ParamLimits

0x3a46,	// (0x00034768) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x00040b7d) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x00040b7d) main_touch_calib_button_pane_t

0x5f82,	// (0x00036ca4) cell_ncimui_button_pane

0x5f82,	// (0x00036ca4) bg_button_pane_cp032

0x3a64,	// (0x00034786) cell_ncimui_button_pane_t1

0xaa9a,	// (0x0003b7bc) image3_infobar_pane_ParamLimits

0xaa9a,	// (0x0003b7bc) image3_infobar_pane

0xc7dd,	// (0x0003d4ff) fs_bigclock_status_pane_ParamLimits

0xc7dd,	// (0x0003d4ff) fs_bigclock_status_pane

0xc7ea,	// (0x0003d50c) main_fs_bigclock_clock_pane_ParamLimits

0xc7ea,	// (0x0003d50c) main_fs_bigclock_clock_pane

0xc80e,	// (0x0003d530) main_fs_bigclock_indi_pane_ParamLimits

0xc80e,	// (0x0003d530) main_fs_bigclock_indi_pane

0xc841,	// (0x0003d563) main_fs_bigclock_swipe_pane_ParamLimits

0xc841,	// (0x0003d563) main_fs_bigclock_swipe_pane

0x5f82,	// (0x00036ca4) main_fs_clock_dumped_data

0xc873,	// (0x0003d595) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc873,	// (0x0003d595) list_single_fs_bigclock_indicator_pane_g1

0xc894,	// (0x0003d5b6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc894,	// (0x0003d5b6) list_single_fs_bigclock_indicator_pane_g2

0xc8ae,	// (0x0003d5d0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc8ae,	// (0x0003d5d0) list_single_fs_bigclock_indicator_pane_g3

0xc8c8,	// (0x0003d5ea) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc8c8,	// (0x0003d5ea) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x000409b0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x000409b0) list_single_fs_bigclock_indicator_pane_g

0xc8ee,	// (0x0003d610) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc8ee,	// (0x0003d610) list_single_fs_bigclock_indicator_pane_t1

0xc916,	// (0x0003d638) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc916,	// (0x0003d638) list_single_fs_bigclock_indicator_pane_t2

0xc93e,	// (0x0003d660) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc93e,	// (0x0003d660) list_single_fs_bigclock_indicator_pane_t3

0xc966,	// (0x0003d688) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc966,	// (0x0003d688) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x000409bb) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x000409bb) list_single_fs_bigclock_indicator_pane_t

0x3a72,	// (0x00034794) image3_infobar_fav_pane_ParamLimits

0x3a72,	// (0x00034794) image3_infobar_fav_pane

0x3a82,	// (0x000347a4) image3_infobar_loc_pane_ParamLimits

0x3a82,	// (0x000347a4) image3_infobar_loc_pane

0x3a96,	// (0x000347b8) image3_infobar_time_pane_ParamLimits

0x3a96,	// (0x000347b8) image3_infobar_time_pane

0x1224,	// (0x00031f46) image3_infobar_time_pane_g1

0x3aa6,	// (0x000347c8) image3_infobar_time_pane_t1

0x1224,	// (0x00031f46) image3_infobar_loc_pane_g1

0x3ab4,	// (0x000347d6) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x00040b82) image3_infobar_loc_pane_g

0x3abc,	// (0x000347de) image3_infobar_loc_pane_t1

0x1224,	// (0x00031f46) image3_infobar_fav_pane_g1

0x3aca,	// (0x000347ec) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x00040b87) image3_infobar_fav_pane_g

0x3ad2,	// (0x000347f4) fs_bigclock_status_battery_pane

0x3adb,	// (0x000347fd) fs_bigclock_status_signal_pane

0x3ae4,	// (0x00034806) fs_bigclock_status_title_pane

0x3aed,	// (0x0003480f) fs_bigclock_status_signal_pane_g1

0x3af6,	// (0x00034818) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x00040b8c) fs_bigclock_status_signal_pane_g

0x3afe,	// (0x00034820) fs_bigclock_status_battery_pane_g1

0x3b07,	// (0x00034829) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x00040b91) fs_bigclock_status_battery_pane_g

0x3b0f,	// (0x00034831) fs_bigclock_status_title_pane_t1

0x1224,	// (0x00031f46) main_fs_bigclock_clock_pane_g1

0x3b1d,	// (0x0003483f) main_fs_bigclock_clock_pane_g2

0x3b1d,	// (0x0003483f) main_fs_bigclock_clock_pane_g3

0x3b1d,	// (0x0003483f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x00040b96) main_fs_bigclock_clock_pane_g

0xd085,	// (0x0003dda7) main_fs_bigclock_clock_pane_t1

0xd093,	// (0x0003ddb5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x00040b9f) main_fs_bigclock_clock_pane_t

0x3b25,	// (0x00034847) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3b25,	// (0x00034847) list_single_fs_bigclock_indicator_pane

0xd0a2,	// (0x0003ddc4) list_single_fs_bigclock_pane_ParamLimits

0xd0a2,	// (0x0003ddc4) list_single_fs_bigclock_pane

0x3b3f,	// (0x00034861) main_fs_bigclock_indicator_pane_t1

0x3b4e,	// (0x00034870) list_single_fs_bigclock_pane_g1

0x3b56,	// (0x00034878) list_single_fs_bigclock_pane_t1

0x1224,	// (0x00031f46) main_fs_bigclock_swipe_pane_g1

0x3b96,	// (0x000348b8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x00040bb0) main_fs_bigclock_swipe_pane_g

0x3b9e,	// (0x000348c0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3b9e,	// (0x000348c0) main_fs_bigclock_swipe_pane_t1

0x7e79,	// (0x00038b9b) call_type_pane_ParamLimits

0x5f82,	// (0x00036ca4) main_btmg_pane

0x5cfc,	// (0x00036a1e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5cfc,	// (0x00036a1e) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x00040b23) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x00040b23) list_single_cale_mrui_row_pane_g

0x3978,	// (0x0003469a) list_recal_vselct_arw_lo_pane

0x3980,	// (0x000346a2) list_recal_vselct_arw_up_pane

0x3988,	// (0x000346aa) list_recal_vselct_pane

0x3bbb,	// (0x000348dd) btmg_button_pane

0xd105,	// (0x0003de27) main_btmg_pane_g1

0x5f82,	// (0x00036ca4) bg_button_pane_cp044

0x3bc5,	// (0x000348e7) btmg_button_pane_t1

0x0d16,	// (0x00031a38) aid_listscroll_gen

0xf0d2,	// (0x0003fdf4) main_cntbar_detail_pane

0x3548,	// (0x0003426a) list_cmail_folder_pane

0x3558,	// (0x0003427a) sp_fs_scroll_pane_cp03_ParamLimits

0x5e1a,	// (0x00036b3c) list_single_fs_dyc_pane_cp01_ParamLimits

0x5e1a,	// (0x00036b3c) list_single_fs_dyc_pane_cp01

0x3bd3,	// (0x000348f5) aid_size_cmail_indent

0x5e40,	// (0x00036b62) list_single_dyc_row_pane_cp01

0xd12d,	// (0x0003de4f) cntbar_detail_list_pane_ParamLimits

0xd12d,	// (0x0003de4f) cntbar_detail_list_pane

0xd167,	// (0x0003de89) main_cntbar_detail_cont_pane_ParamLimits

0xd167,	// (0x0003de89) main_cntbar_detail_cont_pane

0x7e6d,	// (0x00038b8f) scroll_pane_cp032_ParamLimits

0x7e6d,	// (0x00038b8f) scroll_pane_cp032

0xd173,	// (0x0003de95) cntbar_detail_list_event_pane_ParamLimits

0xd173,	// (0x0003de95) cntbar_detail_list_event_pane

0xd139,	// (0x0003de5b) cntbar_detail_list_shct_pane

0xe367,	// (0x0003f089) aid_list_gen

0x3be5,	// (0x00034907) aid_scroll

0x3bee,	// (0x00034910) aid_size_touch_scroll_bar

0x3156,	// (0x00033e78) aid_list_double

0x3bf7,	// (0x00034919) aid_list_single

0x26e5,	// (0x00033407) aid_list_single_lg

0x5e49,	// (0x00036b6b) aid_list_z_g_a_sm

0x5e51,	// (0x00036b73) aid_list_z_g_d

0x5e59,	// (0x00036b7b) aid_txt_z_prm

0x5e67,	// (0x00036b89) aid_txt_z_prm_cp01

0x5e75,	// (0x00036b97) aid_txt_z_sec

0xd187,	// (0x0003dea9) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd187,	// (0x0003dea9) main_cntbar_detail_cont_pane_g1

0xd194,	// (0x0003deb6) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd194,	// (0x0003deb6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x00040bb5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x00040bb5) main_cntbar_detail_cont_pane_g

0x3c1e,	// (0x00034940) main_cntbar_detail_cont_pane_t1

0x3c2c,	// (0x0003494e) main_cntbar_detail_cont_pane_t2

0x3c3a,	// (0x0003495c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x00040bba) main_cntbar_detail_cont_pane_t

0xd1a0,	// (0x0003dec2) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd1a0,	// (0x0003dec2) cell_cntbar_detail_list_shct_pane

0x3c48,	// (0x0003496a) cntbar_detail_list_shct_pane_g1

0x3c51,	// (0x00034973) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00040bc1) cntbar_detail_list_shct_pane_g

0xd1b4,	// (0x0003ded6) cntbar_detail_list_event_pane_g1_ParamLimits

0xd1b4,	// (0x0003ded6) cntbar_detail_list_event_pane_g1

0xd1c0,	// (0x0003dee2) cntbar_detail_list_event_pane_g2_ParamLimits

0xd1c0,	// (0x0003dee2) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x00040bc6) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x00040bc6) cntbar_detail_list_event_pane_g

0xd22c,	// (0x0003df4e) cntbar_detail_list_event_pane_t1_ParamLimits

0xd22c,	// (0x0003df4e) cntbar_detail_list_event_pane_t1

0xd241,	// (0x0003df63) cntbar_detail_list_event_pane_t2_ParamLimits

0xd241,	// (0x0003df63) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00040bd3) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00040bd3) cntbar_detail_list_event_pane_t

0x1224,	// (0x00031f46) cell_cntbar_detail_list_shct_pane_g1

0x8213,	// (0x00038f35) navi_pane_mv_g3

0xf0d2,	// (0x0003fdf4) main_cntbar_detail_pane_ParamLimits

0x5f82,	// (0x00036ca4) main_notif_wgt_pane

0xa74e,	// (0x0003b470) aid_tch_main_mp4_pane_g4

0xa983,	// (0x0003b6a5) popup_slider_window_cp02

0x396f,	// (0x00034691) list_recal_day_event_pane

0xd10d,	// (0x0003de2f) cntbar_detail_btn_pane_ParamLimits

0xd10d,	// (0x0003de2f) cntbar_detail_btn_pane

0xd11d,	// (0x0003de3f) cntbar_detail_btn_pane_cp01_ParamLimits

0xd11d,	// (0x0003de3f) cntbar_detail_btn_pane_cp01

0xd139,	// (0x0003de5b) cntbar_detail_list_shct_pane_ParamLimits

0xd145,	// (0x0003de67) cntbar_detail_pane_g1_ParamLimits

0xd145,	// (0x0003de67) cntbar_detail_pane_g1

0xd151,	// (0x0003de73) cntbar_detail_pane_t1_ParamLimits

0xd151,	// (0x0003de73) cntbar_detail_pane_t1

0xd1cc,	// (0x0003deee) cntbar_detail_list_event_pane_g3_ParamLimits

0xd1cc,	// (0x0003deee) cntbar_detail_list_event_pane_g3

0xd1e4,	// (0x0003df06) cntbar_detail_list_event_pane_g4_ParamLimits

0xd1e4,	// (0x0003df06) cntbar_detail_list_event_pane_g4

0xd1fc,	// (0x0003df1e) cntbar_detail_list_event_pane_g5_ParamLimits

0xd1fc,	// (0x0003df1e) cntbar_detail_list_event_pane_g5

0xd214,	// (0x0003df36) cntbar_detail_list_event_pane_g6_ParamLimits

0xd214,	// (0x0003df36) cntbar_detail_list_event_pane_g6

0xd256,	// (0x0003df78) cntbar_detail_list_event_pane_t3_ParamLimits

0xd256,	// (0x0003df78) cntbar_detail_list_event_pane_t3

0xd268,	// (0x0003df8a) popup_notif_wgt_window_ParamLimits

0xd268,	// (0x0003df8a) popup_notif_wgt_window

0xd278,	// (0x0003df9a) popup_submenu_window_cp01_ParamLimits

0xd278,	// (0x0003df9a) popup_submenu_window_cp01

0xea04,	// (0x0003f726) bg_popup_window_pane_cp10

0x3c5a,	// (0x0003497c) listscroll_notif_wgt_pane

0x3c64,	// (0x00034986) list_notif_wgt_window

0x3c6d,	// (0x0003498f) scroll_pane_cp033

0x3c76,	// (0x00034998) list_notif_wgt_row_pane_ParamLimits

0x3c76,	// (0x00034998) list_notif_wgt_row_pane

0x3c88,	// (0x000349aa) aid_size_list_notif_wgt_del

0x3c91,	// (0x000349b3) list_notif_wgt_row_pane_g1

0x3c99,	// (0x000349bb) list_notif_wgt_row_pane_g2

0x3ca1,	// (0x000349c3) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x00040bda) list_notif_wgt_row_pane_g

0x3caa,	// (0x000349cc) list_notif_wgt_row_pane_t1

0x3cb8,	// (0x000349da) list_notif_wgt_row_pane_t2

0x3cc6,	// (0x000349e8) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00040be1) list_notif_wgt_row_pane_t

0x2323,	// (0x00033045) list_recal_day_event_pane_g1

0x3cd4,	// (0x000349f6) list_recal_day_event_pane_t1

0x5f82,	// (0x00036ca4) bg_button_pane_cp045

0x3ce3,	// (0x00034a05) cntbar_detail_btn_pane_t1

0x0d1e,	// (0x00031a40) main_callh_pane_ParamLimits

0x0d1e,	// (0x00031a40) main_callh_pane

0x5f82,	// (0x00036ca4) main_coverflow0_pane

0x5f82,	// (0x00036ca4) main_wgtman_pane

0xc859,	// (0x0003d57b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc859,	// (0x0003d57b) main_fs_bigclock_unlock_btn_pane

0x3522,	// (0x00034244) bg_button_pane_cp16

0x3532,	// (0x00034254) cell_tport_appsw_pane_g3

0xd286,	// (0x0003dfa8) cf0_flow_pane_ParamLimits

0xd286,	// (0x0003dfa8) cf0_flow_pane

0x3cf1,	// (0x00034a13) listscroll_cf0_pane

0x3cfa,	// (0x00034a1c) main_cf0_pane_g1

0xd295,	// (0x0003dfb7) main_cf0_pane_t1_ParamLimits

0xd295,	// (0x0003dfb7) main_cf0_pane_t1

0xd2a9,	// (0x0003dfcb) main_cf0_pane_t2_ParamLimits

0xd2a9,	// (0x0003dfcb) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x00040be8) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x00040be8) main_cf0_pane_t

0x3d04,	// (0x00034a26) scroll_pane_cp11

0xd2bd,	// (0x0003dfdf) cf0_flow_pane_g1

0xd2c5,	// (0x0003dfe7) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x00040bed) cf0_flow_pane_g

0xd2cd,	// (0x0003dfef) cf0_flow_pane_t1

0x5f82,	// (0x00036ca4) main_call6_pane

0x5f82,	// (0x00036ca4) main_calllock_pane

0xd2db,	// (0x0003dffd) call6_btn_grp_pane_ParamLimits

0xd2db,	// (0x0003dffd) call6_btn_grp_pane

0xd2ea,	// (0x0003e00c) call6_pane_g1_ParamLimits

0xd2ea,	// (0x0003e00c) call6_pane_g1

0xd2f9,	// (0x0003e01b) popup_call6_1st_window_ParamLimits

0xd2f9,	// (0x0003e01b) popup_call6_1st_window

0xd307,	// (0x0003e029) popup_call6_2nd_window_ParamLimits

0xd307,	// (0x0003e029) popup_call6_2nd_window

0xd315,	// (0x0003e037) cell_call6_btn_pane_ParamLimits

0xd315,	// (0x0003e037) cell_call6_btn_pane

0xea04,	// (0x0003f726) bg_popup_call2_in_pane_cp03

0x3d0f,	// (0x00034a31) popup_call6_1st_window_g1

0x3d17,	// (0x00034a39) popup_call6_1st_window_g2

0x3d1f,	// (0x00034a41) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00040bf2) popup_call6_1st_window_g

0x3d27,	// (0x00034a49) popup_call6_1st_window_t1

0x3d36,	// (0x00034a58) popup_call6_1st_window_t2

0x3d46,	// (0x00034a68) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x00040bf9) popup_call6_1st_window_t

0xea04,	// (0x0003f726) bg_popup_call2_in_pane_cp04

0x3d0f,	// (0x00034a31) popup_call6_2nd_window_g1

0x3d17,	// (0x00034a39) popup_call6_2nd_window_g2

0x3d1f,	// (0x00034a41) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00040bf2) popup_call6_2nd_window_g

0x3d27,	// (0x00034a49) popup_call6_2nd_window_t1

0x5f82,	// (0x00036ca4) bg_button_pane_cp15

0x3d56,	// (0x00034a78) cell_call6_btn_pane_g1

0x3d5f,	// (0x00034a81) cell_call6_btn_pane_t1

0xd324,	// (0x0003e046) listscroll_wgtman_pane_ParamLimits

0xd324,	// (0x0003e046) listscroll_wgtman_pane

0xd342,	// (0x0003e064) wgtman_btn_pane_ParamLimits

0xd342,	// (0x0003e064) wgtman_btn_pane

0xe8bb,	// (0x0003f5dd) aid_scroll_copy1

0x3d6e,	// (0x00034a90) list_wgtman_pane

0xd377,	// (0x0003e099) wgtman_btn_pane_g1_ParamLimits

0xd377,	// (0x0003e099) wgtman_btn_pane_g1

0xd39f,	// (0x0003e0c1) wgtman_btn_pane_t1_ParamLimits

0xd39f,	// (0x0003e0c1) wgtman_btn_pane_t1

0x3d78,	// (0x00034a9a) wgtman_btn_pane_t2_ParamLimits

0x3d78,	// (0x00034a9a) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x00040c00) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x00040c00) wgtman_btn_pane_t

0xd3d6,	// (0x0003e0f8) listrow_wgtman_pane_ParamLimits

0xd3d6,	// (0x0003e0f8) listrow_wgtman_pane

0xd3f1,	// (0x0003e113) listrow_wgtman_pane_g1

0xd3fa,	// (0x0003e11c) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00040c05) listrow_wgtman_pane_g

0x5e83,	// (0x00036ba5) listrow_wgtman_pane_t1

0x5e91,	// (0x00036bb3) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x00040c0a) listrow_wgtman_pane_t

0x5e9f,	// (0x00036bc1) wait_bar_pane_cp09

0x3d8f,	// (0x00034ab1) main_calllock_btn_pane

0x3d99,	// (0x00034abb) main_calllock_pane_g1

0x5f82,	// (0x00036ca4) bg_button_pane_cp17

0x3da5,	// (0x00034ac7) main_calllock_btn_pane_g1

0x3dae,	// (0x00034ad0) main_calllock_btn_pane_t1

0x5f82,	// (0x00036ca4) main_dialer3_pane

0x5f82,	// (0x00036ca4) main_fmrd2_pane

0x1224,	// (0x00031f46) main_fs_bigclock_unlock_btn_pane_g1

0x3dc5,	// (0x00034ae7) main_fs_bigclock_unlock_btn_pane_t1

0xd404,	// (0x0003e126) area_fmrd2_info_pane_ParamLimits

0xd404,	// (0x0003e126) area_fmrd2_info_pane

0xd412,	// (0x0003e134) area_fmrd2_visual_pane_ParamLimits

0xd412,	// (0x0003e134) area_fmrd2_visual_pane

0xd420,	// (0x0003e142) fmrd2_indi_pane_ParamLimits

0xd420,	// (0x0003e142) fmrd2_indi_pane

0xd42d,	// (0x0003e14f) area_fmrd2_visual_pane_g1

0xd435,	// (0x0003e157) area_fmrd2_visual_pane_t1

0xd445,	// (0x0003e167) area_fmrd2_visual_pane_t2

0xd455,	// (0x0003e177) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00040c14) area_fmrd2_visual_pane_t

0xd465,	// (0x0003e187) area_fmrd2_info_pane_g1

0xd46d,	// (0x0003e18f) area_fmrd2_info_pane_t1

0xd47d,	// (0x0003e19f) area_fmrd2_info_pane_t2

0xd48d,	// (0x0003e1af) area_fmrd2_info_pane_t3

0xd49d,	// (0x0003e1bf) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x00040c1b) area_fmrd2_info_pane_t

0xd4ab,	// (0x0003e1cd) fmrd2_indi_pane_t1

0xd4bb,	// (0x0003e1dd) fmrd2_indi_pane_t2

0xd4cb,	// (0x0003e1ed) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00040c24) fmrd2_indi_pane_t

0xc8d7,	// (0x0003d5f9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc8d7,	// (0x0003d5f9) list_single_fs_bigclock_indicator_pane_g5

0xc97b,	// (0x0003d69d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc97b,	// (0x0003d69d) list_single_fs_bigclock_indicator_pane_t5

0xce0e,	// (0x0003db30) aid_cell_bcale_month_pane_ParamLimits

0xce0e,	// (0x0003db30) aid_cell_bcale_month_pane

0xce1a,	// (0x0003db3c) bcale_month_pane_ParamLimits

0xce1a,	// (0x0003db3c) bcale_month_pane

0xce28,	// (0x0003db4a) bcale_preview_pane_ParamLimits

0xce28,	// (0x0003db4a) bcale_preview_pane

0x3b56,	// (0x00034878) list_single_fs_bigclock_pane_t1_ParamLimits

0x3b72,	// (0x00034894) list_single_fs_bigclock_pane_t2_ParamLimits

0x3b72,	// (0x00034894) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x00040bab) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x00040bab) list_single_fs_bigclock_pane_t

0x3dbd,	// (0x00034adf) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x00040c0f) main_fs_bigclock_unlock_btn_pane_g

0xd4d9,	// (0x0003e1fb) aid_dia3_key_size_ParamLimits

0xd4d9,	// (0x0003e1fb) aid_dia3_key_size

0xd4e5,	// (0x0003e207) aid_dia3_listrow_size_ParamLimits

0xd4e5,	// (0x0003e207) aid_dia3_listrow_size

0xd4f5,	// (0x0003e217) dia3_keypad_fun_pane_ParamLimits

0xd4f5,	// (0x0003e217) dia3_keypad_fun_pane

0xd507,	// (0x0003e229) dia3_keypad_num_pane_ParamLimits

0xd507,	// (0x0003e229) dia3_keypad_num_pane

0xd519,	// (0x0003e23b) dia3_listscroll_pane_ParamLimits

0xd519,	// (0x0003e23b) dia3_listscroll_pane

0xd527,	// (0x0003e249) dia3_numentry_pane_ParamLimits

0xd527,	// (0x0003e249) dia3_numentry_pane

0x3dd3,	// (0x00034af5) dia3_list_pane

0x3dde,	// (0x00034b00) scroll_pane_cp12

0x5f82,	// (0x00036ca4) bg_dia3_numentry_pane

0xd535,	// (0x0003e257) dia3_numentry_pane_t1

0xd544,	// (0x0003e266) cell_dia3_key_num_pane

0xd54c,	// (0x0003e26e) cell_dia3_key0_fun_pane_ParamLimits

0xd54c,	// (0x0003e26e) cell_dia3_key0_fun_pane

0xd559,	// (0x0003e27b) cell_dia3_key1_fun_pane_ParamLimits

0xd559,	// (0x0003e27b) cell_dia3_key1_fun_pane

0xd566,	// (0x0003e288) dia3_listrow_pane

0x2dea,	// (0x00033b0c) bg_dia3_numentry_pane_g1

0x5f82,	// (0x00036ca4) bg_button_pane_cp21

0x3de9,	// (0x00034b0b) cell_dia3_key_num_pane_t1

0x3df7,	// (0x00034b19) cell_dia3_key_num_pane_t2

0x3e06,	// (0x00034b28) cell_dia3_key_num_pane_t3

0x3e15,	// (0x00034b37) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x00040c2b) cell_dia3_key_num_pane_t

0x5f82,	// (0x00036ca4) bg_button_pane_cp19

0xd573,	// (0x0003e295) cell_dia3_key0_fun_pane_g1

0x5f82,	// (0x00036ca4) bg_button_pane_cp20

0xd57b,	// (0x0003e29d) cell_dia3_key1_fun_pane_g1

0xd583,	// (0x0003e2a5) area_left_week_number_pane

0xd58c,	// (0x0003e2ae) area_top_day_name_pane

0xd595,	// (0x0003e2b7) frame_month_view_pane

0xd59f,	// (0x0003e2c1) grid_month_view_pane

0xd5a9,	// (0x0003e2cb) cell_top_day_name_pane_ParamLimits

0xd5a9,	// (0x0003e2cb) cell_top_day_name_pane

0xd5c3,	// (0x0003e2e5) cell_area_left_week_number_pane_ParamLimits

0xd5c3,	// (0x0003e2e5) cell_area_left_week_number_pane

0xd5d7,	// (0x0003e2f9) cell_month_view_pane_ParamLimits

0xd5d7,	// (0x0003e2f9) cell_month_view_pane

0x3e24,	// (0x00034b46) frm_month_g1

0xd5f4,	// (0x0003e316) frm_month_g2

0xd5fe,	// (0x0003e320) frm_month_g3

0xd608,	// (0x0003e32a) frm_month_g4

0xd612,	// (0x0003e334) frm_month_g5

0xd61c,	// (0x0003e33e) frm_month_g6

0xd626,	// (0x0003e348) frm_month_g7

0x3e2d,	// (0x00034b4f) frm_month_g8

0xd630,	// (0x0003e352) frm_month_g9

0xd639,	// (0x0003e35b) frm_month_g10

0xd642,	// (0x0003e364) frm_month_g11

0xd64b,	// (0x0003e36d) frm_month_g12

0xd654,	// (0x0003e376) frm_month_g13

0xd65d,	// (0x0003e37f) frm_month_g14

0xd666,	// (0x0003e388) frm_month_g15

0xd671,	// (0x0003e393) frm_month_g16

0x000f,

0xff12,	// (0x00040c34) frm_month_g

0xd67c,	// (0x0003e39e) cell_top_day_name_pane_t1

0xd68b,	// (0x0003e3ad) cell_area_left_week_number_pane_g1

0xd67c,	// (0x0003e39e) cell_area_left_week_number_pane_t1

0x1224,	// (0x00031f46) cell_month_view_pane_g1

0xd693,	// (0x0003e3b5) cell_month_view_pane_t1

0x5f82,	// (0x00036ca4) main_fps_pane

0x32a8,	// (0x00033fca) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x32a8,	// (0x00033fca) cmail_ddmenu_btn02_pane_cp1

0x32c4,	// (0x00033fe6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x32c4,	// (0x00033fe6) cmail_ddmenu_btn02_pane_cp2

0xcfef,	// (0x0003dd11) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcfef,	// (0x0003dd11) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x00040b5c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x00040b5c) cmail_ddmenu_btn02_pane_g

0xd00d,	// (0x0003dd2f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd00d,	// (0x0003dd2f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x00040b61) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x00040b61) cmail_ddmenu_btn02_pane_t

0xd6a2,	// (0x0003e3c4) fps_text_pane_ParamLimits

0xd6a2,	// (0x0003e3c4) fps_text_pane

0xd6af,	// (0x0003e3d1) main_fps_pane_g1_ParamLimits

0xd6af,	// (0x0003e3d1) main_fps_pane_g1

0xd6bd,	// (0x0003e3df) wait_bar_pane_cp010_ParamLimits

0xd6bd,	// (0x0003e3df) wait_bar_pane_cp010

0xd6c9,	// (0x0003e3eb) fps_text_pane_t1_ParamLimits

0xd6c9,	// (0x0003e3eb) fps_text_pane_t1

0xad65,	// (0x0003ba87) cam4_image_uncrop_pane_g1

0xad6e,	// (0x0003ba90) cam4_image_uncrop_pane_g2

0xad77,	// (0x0003ba99) cam4_image_uncrop_pane_g3

0xad80,	// (0x0003baa2) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0004062f) cam4_image_uncrop_pane_g

0xd566,	// (0x0003e288) dia3_listrow_pane_ParamLimits

0x5f82,	// (0x00036ca4) main_phob2_pane

0xcc83,	// (0x0003d9a5) cell_tport_appsw_pane_cp02_ParamLimits

0xcc83,	// (0x0003d9a5) cell_tport_appsw_pane_cp02

0xcc92,	// (0x0003d9b4) cell_tport_appsw_pane_cp03_ParamLimits

0xcc92,	// (0x0003d9b4) cell_tport_appsw_pane_cp03

0x5f82,	// (0x00036ca4) phob2_contact_card_pane

0x5f82,	// (0x00036ca4) phob2_listscroll_pane

0x3e36,	// (0x00034b58) phob2_list_pane

0x3e3e,	// (0x00034b60) scroll_pane_cp034

0xd6e2,	// (0x0003e404) phob2_cc_data_pane_ParamLimits

0xd6e2,	// (0x0003e404) phob2_cc_data_pane

0xd6fc,	// (0x0003e41e) phob2_cc_listscroll_pane_ParamLimits

0xd6fc,	// (0x0003e41e) phob2_cc_listscroll_pane

0xd716,	// (0x0003e438) list_double_large_graphic_phob2_pane_ParamLimits

0xd716,	// (0x0003e438) list_double_large_graphic_phob2_pane

0x3e46,	// (0x00034b68) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x3e46,	// (0x00034b68) list_double_large_graphic_phob2_pane_g1

0x5ea7,	// (0x00036bc9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5ea7,	// (0x00036bc9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x00040c55) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x00040c55) list_double_large_graphic_phob2_pane_g

0x5eb3,	// (0x00036bd5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5eb3,	// (0x00036bd5) list_double_large_graphic_phob2_pane_t1

0x5ec8,	// (0x00036bea) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x5ec8,	// (0x00036bea) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x00040c5a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x00040c5a) list_double_large_graphic_phob2_pane_t

0x5f82,	// (0x00036ca4) list_highlight_pane_cp024

0x3e86,	// (0x00034ba8) phob2_cc_button_pane

0xd734,	// (0x0003e456) phob2_cc_data_pane_g1_ParamLimits

0xd734,	// (0x0003e456) phob2_cc_data_pane_g1

0xd740,	// (0x0003e462) phob2_cc_data_pane_g2_ParamLimits

0xd740,	// (0x0003e462) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x00040c5f) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x00040c5f) phob2_cc_data_pane_g

0xd74c,	// (0x0003e46e) phob2_cc_data_pane_t1_ParamLimits

0xd74c,	// (0x0003e46e) phob2_cc_data_pane_t1

0xd75e,	// (0x0003e480) phob2_cc_data_pane_t2_ParamLimits

0xd75e,	// (0x0003e480) phob2_cc_data_pane_t2

0xd770,	// (0x0003e492) phob2_cc_data_pane_t3_ParamLimits

0xd770,	// (0x0003e492) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x00040c64) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x00040c64) phob2_cc_data_pane_t

0x3e8e,	// (0x00034bb0) phob2_cc_list_pane_ParamLimits

0x3e8e,	// (0x00034bb0) phob2_cc_list_pane

0x23bc,	// (0x000330de) scroll_pane_cp035_ParamLimits

0x23bc,	// (0x000330de) scroll_pane_cp035

0xf0d2,	// (0x0003fdf4) bg_button_pane_cp033

0x3e9a,	// (0x00034bbc) phob2_cc_button_pane_g1

0x3ea6,	// (0x00034bc8) phob2_cc_button_pane_t1

0x3ebb,	// (0x00034bdd) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x00040c6b) phob2_cc_button_pane_t

0xd782,	// (0x0003e4a4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd782,	// (0x0003e4a4) list_double_large_graphic_phob2_cc_pane

0xd7a9,	// (0x0003e4cb) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd7a9,	// (0x0003e4cb) list_double_large_graphic_phob2_cc_pane_g1

0x5eda,	// (0x00036bfc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5eda,	// (0x00036bfc) list_double_large_graphic_phob2_cc_pane_g2

0x5ee9,	// (0x00036c0b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5ee9,	// (0x00036c0b) list_double_large_graphic_phob2_cc_pane_g3

0x5ef8,	// (0x00036c1a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5ef8,	// (0x00036c1a) list_double_large_graphic_phob2_cc_pane_g4

0x5f09,	// (0x00036c2b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5f09,	// (0x00036c2b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x00040c70) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x00040c70) list_double_large_graphic_phob2_cc_pane_g

0x5f18,	// (0x00036c3a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5f18,	// (0x00036c3a) list_double_large_graphic_phob2_cc_pane_t1

0x5f41,	// (0x00036c63) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x5f41,	// (0x00036c63) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x00040c7b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x00040c7b) list_double_large_graphic_phob2_cc_pane_t

0x3ecd,	// (0x00034bef) list_highlight_pane_cp025_ParamLimits

0x3ecd,	// (0x00034bef) list_highlight_pane_cp025

0xf0d2,	// (0x0003fdf4) bg_button_pane_cp033_ParamLimits

0x3e9a,	// (0x00034bbc) phob2_cc_button_pane_g1_ParamLimits

0x3ea6,	// (0x00034bc8) phob2_cc_button_pane_t1_ParamLimits

0x3ebb,	// (0x00034bdd) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x00040c6b) phob2_cc_button_pane_t_ParamLimits

0x5fc8,	// (0x00036cea) popup_wgtman_window

0x2136,	// (0x00032e58) scroll_pane_cp038

0xd35f,	// (0x0003e081) wgtman_btn_pane_cp_01_ParamLimits

0xd35f,	// (0x0003e081) wgtman_btn_pane_cp_01

0x3edb,	// (0x00034bfd) wgtman_content_pane

0x3ee4,	// (0x00034c06) wgtman_heading_pane

0x5f82,	// (0x00036ca4) bg_heading_pane_cp02

0x3eed,	// (0x00034c0f) wgtman_heading_pane_g1

0x3ef5,	// (0x00034c17) wgtman_heading_pane_t1

0x3f03,	// (0x00034c25) scroll_pane_cp036

0x3f0b,	// (0x00034c2d) wgtman_list_pane

0x3f13,	// (0x00034c35) wgtman_list_pane_t1_ParamLimits

0x3f13,	// (0x00034c35) wgtman_list_pane_t1

0xacc4,	// (0x0003b9e6) cam4_grid_pane

0x52c0,	// (0x00035fe2) bg_button_pane_cp015_ParamLimits

0xb953,	// (0x0003c675) bg_button_pane_cp016_ParamLimits

0xb966,	// (0x0003c688) bg_button_pane_cp017_ParamLimits

0x5304,	// (0x00036026) popup_vitu2_query_window_g3_ParamLimits

0x5304,	// (0x00036026) popup_vitu2_query_window_g3

0x537d,	// (0x0003609f) popup_vitu2_query_window_t6_ParamLimits

0x537d,	// (0x0003609f) popup_vitu2_query_window_t6

0x53a8,	// (0x000360ca) popup_vitu2_query_window_t7_ParamLimits

0x53a8,	// (0x000360ca) popup_vitu2_query_window_t7

0x1ee0,	// (0x00032c02) cam4_grid_pane_g1

0x1ee9,	// (0x00032c0b) cam4_grid_pane_g2

0x3f30,	// (0x00034c52) cam4_grid_pane_g3

0x3f39,	// (0x00034c5b) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x00040c80) cam4_grid_pane_g

0x6f01,	// (0x00037c23) aid_placing_vt_slider_lsc_ParamLimits

0x724d,	// (0x00037f6f) vidtel_button_pane_ParamLimits

0x724d,	// (0x00037f6f) vidtel_button_pane

0x5f82,	// (0x00036ca4) bg_button_pane_cp034

0xd7ba,	// (0x0003e4dc) vidtel_button_pane_g1

0x3f44,	// (0x00034c66) vidtel_button_pane_t1

0x2297,	// (0x00032fb9) aid_size_vtel_slider_touch

0x23bc,	// (0x000330de) scroll_pane_cp039

0x2e28,	// (0x00033b4a) ncim_query_button_pane_cp01_ParamLimits

0x2e47,	// (0x00033b69) ncimui_query_pane_g1_ParamLimits

0xf0d2,	// (0x0003fdf4) input_focus_pane_cp012_ParamLimits

0x2e6c,	// (0x00033b8e) ncim_query_entry_pane_t1_ParamLimits

0x23bc,	// (0x000330de) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
