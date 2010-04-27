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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008da20 };

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
0x09c8,	// (0x0008e3e8) Screen

0x09d4,	// (0x0008e3f4) application_window

0x0a28,	// (0x0008e448) area_bottom_pane_ParamLimits

0x0a28,	// (0x0008e448) area_bottom_pane

0x0a61,	// (0x0008e481) area_top_pane_ParamLimits

0x0a61,	// (0x0008e481) area_top_pane

0x99dc,	// (0x000973fc) call_video_uplink_pane_ParamLimits

0x99dc,	// (0x000973fc) call_video_uplink_pane

0x0aef,	// (0x0008e50f) main_pane_ParamLimits

0x0aef,	// (0x0008e50f) main_pane

0xc7ec,	// (0x0009a20c) context_pane

0x4451,	// (0x00091e71) navi_pane

0x4481,	// (0x00091ea1) popup_cale_events_window_ParamLimits

0x4481,	// (0x00091ea1) popup_cale_events_window

0xc7ff,	// (0x0009a21f) popup_mup_playback_window

0x4499,	// (0x00091eb9) signal_pane

0xa15d,	// (0x00097b7d) main_browser_pane

0xa389,	// (0x00097da9) main_burst_pane

0x4153,	// (0x00091b73) main_calc_pane

0xc78f,	// (0x0009a1af) main_cale_day_pane

0x1131,	// (0x0008eb51) main_cale_month_pane

0xc78f,	// (0x0009a1af) main_cale_week_pane

0xa389,	// (0x00097da9) main_call_pane

0x9e1b,	// (0x0009783b) main_call_poc_pane

0xa389,	// (0x00097da9) main_camera_pane

0xa389,	// (0x00097da9) main_chi_dic_pane

0xb220,	// (0x00098c40) main_clock_pane

0x9e1b,	// (0x0009783b) main_fmradio_pane

0xa389,	// (0x00097da9) main_graph_messa_pane

0x9e1b,	// (0x0009783b) main_help_pane

0xa15d,	// (0x00097b7d) main_im_pane

0xa076,	// (0x00097a96) main_image_pane_ParamLimits

0xa076,	// (0x00097a96) main_image_pane

0x9e1b,	// (0x0009783b) main_location2_pane

0xa389,	// (0x00097da9) main_location_pane

0xa076,	// (0x00097a96) main_messa_pane

0x9e1b,	// (0x0009783b) main_mp2_pane

0xa389,	// (0x00097da9) main_mp_pane

0x9e1b,	// (0x0009783b) main_msg_pane

0x9e1b,	// (0x0009783b) main_mup_eq_pane

0x9e1b,	// (0x0009783b) main_mup_pane

0xa15d,	// (0x00097b7d) main_notes_pane

0x9e1b,	// (0x0009783b) main_pec_pane

0x9e1b,	// (0x0009783b) main_phob_pane

0x9e1b,	// (0x0009783b) main_pinb_pane

0x9e1b,	// (0x0009783b) main_postcard_pane

0x9e1b,	// (0x0009783b) main_qdial_pane

0xa389,	// (0x00097da9) main_skin_pane

0x9e1b,	// (0x0009783b) main_smil2_pane

0xa389,	// (0x00097da9) main_smil_pane

0xa389,	// (0x00097da9) main_video_pane

0xa389,	// (0x00097da9) main_video_tele_pane

0xa076,	// (0x00097a96) main_viewer_pane_ParamLimits

0xa076,	// (0x00097a96) main_viewer_pane

0xa389,	// (0x00097da9) main_vorec_pane

0x41a9,	// (0x00091bc9) popup_blid_sat_info_window_ParamLimits

0x41a9,	// (0x00091bc9) popup_blid_sat_info_window

0x420d,	// (0x00091c2d) popup_dyc_status_message_window_ParamLimits

0x420d,	// (0x00091c2d) popup_dyc_status_message_window

0x4227,	// (0x00091c47) popup_grid_large_graphic_window_ParamLimits

0x4227,	// (0x00091c47) popup_grid_large_graphic_window

0x42e9,	// (0x00091d09) popup_loc_request_window_ParamLimits

0x42e9,	// (0x00091d09) popup_loc_request_window

0x4425,	// (0x00091e45) popup_wml_address_window_ParamLimits

0x4425,	// (0x00091e45) popup_wml_address_window

0x3f91,	// (0x000919b1) call_muted_g1

0x3c25,	// (0x00091645) popup_call_audio_conf_window_ParamLimits

0x3c25,	// (0x00091645) popup_call_audio_conf_window

0x3fa1,	// (0x000919c1) popup_call_audio_first_window_ParamLimits

0x3fa1,	// (0x000919c1) popup_call_audio_first_window

0x4017,	// (0x00091a37) popup_call_audio_in_window_ParamLimits

0x4017,	// (0x00091a37) popup_call_audio_in_window

0x4053,	// (0x00091a73) popup_call_audio_out_window_ParamLimits

0x4053,	// (0x00091a73) popup_call_audio_out_window

0x408d,	// (0x00091aad) popup_call_audio_second_window_ParamLimits

0x408d,	// (0x00091aad) popup_call_audio_second_window

0x40e3,	// (0x00091b03) popup_call_audio_wait_window_ParamLimits

0x40e3,	// (0x00091b03) popup_call_audio_wait_window

0x4118,	// (0x00091b38) popup_number_entry_window_ParamLimits

0x4118,	// (0x00091b38) popup_number_entry_window

0x9a08,	// (0x00097428) bg_popup_call_pane_cp05_ParamLimits

0x9a08,	// (0x00097428) bg_popup_call_pane_cp05

0x9a28,	// (0x00097448) popup_number_entry_window_t1

0x9a3b,	// (0x0009745b) popup_number_entry_window_t2

0x9a4d,	// (0x0009746d) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0009caea) popup_number_entry_window_t

0x9a5f,	// (0x0009747f) text_title_cp2

0x9a72,	// (0x00097492) bg_popup_call_pane_cp_ParamLimits

0x9a72,	// (0x00097492) bg_popup_call_pane_cp

0x9a80,	// (0x000974a0) call_thumbnail_pane

0x9a88,	// (0x000974a8) popup_call_audio_in_window_g1_ParamLimits

0x9a88,	// (0x000974a8) popup_call_audio_in_window_g1

0x9a94,	// (0x000974b4) popup_call_audio_in_window_g2_ParamLimits

0x9a94,	// (0x000974b4) popup_call_audio_in_window_g2

0x9aa0,	// (0x000974c0) popup_call_audio_in_window_g3_ParamLimits

0x9aa0,	// (0x000974c0) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0009caf3) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0009caf3) popup_call_audio_in_window_g

0x9aac,	// (0x000974cc) popup_call_audio_in_window_t1_ParamLimits

0x9aac,	// (0x000974cc) popup_call_audio_in_window_t1

0x9ac8,	// (0x000974e8) popup_call_audio_in_window_t2_ParamLimits

0x9ac8,	// (0x000974e8) popup_call_audio_in_window_t2

0x9ae4,	// (0x00097504) popup_call_audio_in_window_t3_ParamLimits

0x9ae4,	// (0x00097504) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0009cafa) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0009cafa) popup_call_audio_in_window_t

0x9a72,	// (0x00097492) bg_popup_call_pane_cp01_ParamLimits

0x9a72,	// (0x00097492) bg_popup_call_pane_cp01

0x9a80,	// (0x000974a0) call_thumbnail_pane_cp02

0x9af7,	// (0x00097517) call_type_pane_cp022

0x9aff,	// (0x0009751f) popup_call_audio_out_window_g1_ParamLimits

0x9aff,	// (0x0009751f) popup_call_audio_out_window_g1

0x9b11,	// (0x00097531) popup_call_audio_out_window_g2_ParamLimits

0x9b11,	// (0x00097531) popup_call_audio_out_window_g2

0x9b1d,	// (0x0009753d) popup_call_audio_out_window_g3_ParamLimits

0x9b1d,	// (0x0009753d) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0009cb01) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0009cb01) popup_call_audio_out_window_g

0x9b2f,	// (0x0009754f) popup_call_audio_out_window_t1_ParamLimits

0x9b2f,	// (0x0009754f) popup_call_audio_out_window_t1

0x9b47,	// (0x00097567) popup_call_audio_out_window_t2_ParamLimits

0x9b47,	// (0x00097567) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0009cb08) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0009cb08) popup_call_audio_out_window_t

0x9b5c,	// (0x0009757c) bg_popup_call_pane_ParamLimits

0x9b5c,	// (0x0009757c) bg_popup_call_pane

0x0cae,	// (0x0008e6ce) call_thumbnail_pane_cp_ParamLimits

0x0cae,	// (0x0008e6ce) call_thumbnail_pane_cp

0x9be0,	// (0x00097600) call_type_pane_cp01_ParamLimits

0x9be0,	// (0x00097600) call_type_pane_cp01

0x9c24,	// (0x00097644) popup_call_audio_first_window_g1_ParamLimits

0x9c24,	// (0x00097644) popup_call_audio_first_window_g1

0x9c70,	// (0x00097690) popup_call_audio_first_window_g2_ParamLimits

0x9c70,	// (0x00097690) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0009cb0d) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0009cb0d) popup_call_audio_first_window_g

0x9cb4,	// (0x000976d4) popup_call_audio_first_window_t1_ParamLimits

0x9cb4,	// (0x000976d4) popup_call_audio_first_window_t1

0x9d60,	// (0x00097780) popup_call_audio_first_window_t4_ParamLimits

0x9d60,	// (0x00097780) popup_call_audio_first_window_t4

0x9dec,	// (0x0009780c) popup_call_audio_first_window_t5_ParamLimits

0x9dec,	// (0x0009780c) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0009cb12) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0009cb12) popup_call_audio_first_window_t

0x9e1b,	// (0x0009783b) bg_popup_call_pane_cp02

0x9e25,	// (0x00097845) call_type_pane_cp023

0x9e2d,	// (0x0009784d) popup_call_audio_wait_window_g1

0x9e35,	// (0x00097855) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009cb19) popup_call_audio_wait_window_g

0x9e3d,	// (0x0009785d) popup_call_audio_wait_window_t3

0x9e4b,	// (0x0009786b) bg_popup_call_pane_cp03_ParamLimits

0x9e4b,	// (0x0009786b) bg_popup_call_pane_cp03

0x9eab,	// (0x000978cb) call_thumbnail_pane_cp011_ParamLimits

0x9eab,	// (0x000978cb) call_thumbnail_pane_cp011

0x9eb7,	// (0x000978d7) call_type_pane_cp034_ParamLimits

0x9eb7,	// (0x000978d7) call_type_pane_cp034

0x9ef3,	// (0x00097913) popup_call_audio_second_window_g1_ParamLimits

0x9ef3,	// (0x00097913) popup_call_audio_second_window_g1

0x9f2f,	// (0x0009794f) popup_call_audio_second_window_g2_ParamLimits

0x9f2f,	// (0x0009794f) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0009cb1e) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0009cb1e) popup_call_audio_second_window_g

0x9f6b,	// (0x0009798b) popup_call_audio_second_window_t1_ParamLimits

0x9f6b,	// (0x0009798b) popup_call_audio_second_window_t1

0x9fec,	// (0x00097a0c) popup_call_audio_second_window_t2_ParamLimits

0x9fec,	// (0x00097a0c) popup_call_audio_second_window_t2

0xa022,	// (0x00097a42) popup_call_audio_second_window_t3_ParamLimits

0xa022,	// (0x00097a42) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0009cb23) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0009cb23) popup_call_audio_second_window_t

0x9e1b,	// (0x0009783b) bg_popup_call_pane_cp04

0xa058,	// (0x00097a78) list_conf_pane

0xa060,	// (0x00097a80) popup_call_audio_conf_window_t1

0xa06e,	// (0x00097a8e) call_thumbnail_pane_g1

0xa076,	// (0x00097a96) bg_pinb_pane_ParamLimits

0xa076,	// (0x00097a96) bg_pinb_pane

0xa084,	// (0x00097aa4) find_pinb_pane

0xa08d,	// (0x00097aad) listscroll_pinb_pane_ParamLimits

0xa08d,	// (0x00097aad) listscroll_pinb_pane

0xa09c,	// (0x00097abc) pinb_bg_pane_g1

0x0cd2,	// (0x0008e6f2) pinb_bg_pane_g2

0x0cde,	// (0x0008e6fe) pinb_bg_pane_g3

0x0cea,	// (0x0008e70a) pinb_bg_pane_g4

0x0cf6,	// (0x0008e716) pinb_bg_pane_g5

0x0d02,	// (0x0008e722) pinb_bg_pane_g6

0x0d0d,	// (0x0008e72d) pinb_bg_pane_g7

0x0d18,	// (0x0008e738) pinb_bg_pane_g8

0x0d23,	// (0x0008e743) pinb_bg_pane_g9

0x0d2d,	// (0x0008e74d) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0009cb2a) pinb_bg_pane_g

0x0d4a,	// (0x0008e76a) grid_pinb_pane

0x0d55,	// (0x0008e775) list_pinb_pane

0x0d60,	// (0x0008e780) scroll_pane_cp01_ParamLimits

0x0d60,	// (0x0008e780) scroll_pane_cp01

0xa0a6,	// (0x00097ac6) find_pinb_pane_g1_ParamLimits

0xa0a6,	// (0x00097ac6) find_pinb_pane_g1

0xa0be,	// (0x00097ade) find_pinb_pane_t1

0xa0d0,	// (0x00097af0) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0009cb44) find_pinb_pane_t

0xa0e5,	// (0x00097b05) input_focus_pane_cp01_ParamLimits

0xa0e5,	// (0x00097b05) input_focus_pane_cp01

0x0d72,	// (0x0008e792) cell_pinb_pane_ParamLimits

0x0d72,	// (0x0008e792) cell_pinb_pane

0x0d94,	// (0x0008e7b4) cell_pinb_pane_g1_ParamLimits

0x0d94,	// (0x0008e7b4) cell_pinb_pane_g1

0x0da9,	// (0x0008e7c9) cell_pinb_pane_g2_ParamLimits

0x0da9,	// (0x0008e7c9) cell_pinb_pane_g2

0xa0f1,	// (0x00097b11) cell_pinb_pane_g3_ParamLimits

0xa0f1,	// (0x00097b11) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0009cb49) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0009cb49) cell_pinb_pane_g

0x9e1b,	// (0x0009783b) grid_highlight_pane_cp01

0x0db5,	// (0x0008e7d5) list_pinb_item_pane_ParamLimits

0x0db5,	// (0x0008e7d5) list_pinb_item_pane

0x9e1b,	// (0x0009783b) list_highlight_pane_cp02

0x0dc7,	// (0x0008e7e7) list_pinb_item_pane_g1_ParamLimits

0x0dc7,	// (0x0008e7e7) list_pinb_item_pane_g1

0x0dd4,	// (0x0008e7f4) list_pinb_item_pane_g2_ParamLimits

0x0dd4,	// (0x0008e7f4) list_pinb_item_pane_g2

0x0de0,	// (0x0008e800) list_pinb_item_pane_g3_ParamLimits

0x0de0,	// (0x0008e800) list_pinb_item_pane_g3

0x0df1,	// (0x0008e811) list_pinb_item_pane_g4_ParamLimits

0x0df1,	// (0x0008e811) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0009cb50) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0009cb50) list_pinb_item_pane_g

0x0dfd,	// (0x0008e81d) list_pinb_item_pane_t1_ParamLimits

0x0dfd,	// (0x0008e81d) list_pinb_item_pane_t1

0x0e32,	// (0x0008e852) calc_display_pane

0x0e5a,	// (0x0008e87a) calc_paper_pane

0x0e7d,	// (0x0008e89d) grid_calc_pane

0x9e1b,	// (0x0009783b) bg_list_pane_cp01

0x0eab,	// (0x0008e8cb) clock_g1

0x0eb3,	// (0x0008e8d3) clock_g2

0x0001,

0xf139,	// (0x0009cb59) clock_g

0x0ebb,	// (0x0008e8db) clock_t1_ParamLimits

0x0ebb,	// (0x0008e8db) clock_t1

0x0ed0,	// (0x0008e8f0) clock_t2_ParamLimits

0x0ed0,	// (0x0008e8f0) clock_t2

0x0ee2,	// (0x0008e902) clock_t3_ParamLimits

0x0ee2,	// (0x0008e902) clock_t3

0x0ef4,	// (0x0008e914) clock_t4_ParamLimits

0x0ef4,	// (0x0008e914) clock_t4

0x0f06,	// (0x0008e926) clock_t5_ParamLimits

0x0f06,	// (0x0008e926) clock_t5

0x0f1b,	// (0x0008e93b) clock_t6_ParamLimits

0x0f1b,	// (0x0008e93b) clock_t6

0x0f2d,	// (0x0008e94d) clock_t7_ParamLimits

0x0f2d,	// (0x0008e94d) clock_t7

0x0f3f,	// (0x0008e95f) clock_t8_ParamLimits

0x0f3f,	// (0x0008e95f) clock_t8

0x0f53,	// (0x0008e973) clock_t9_ParamLimits

0x0f53,	// (0x0008e973) clock_t9

0x0008,

0xf13e,	// (0x0009cb5e) clock_t_ParamLimits

0xf13e,	// (0x0009cb5e) clock_t

0xa105,	// (0x00097b25) popup_clock_analogue_window_cp02

0xa105,	// (0x00097b25) popup_clock_digital_window_cp01

0xa10d,	// (0x00097b2d) listscroll_help_pane

0x9e1b,	// (0x0009783b) phob_pre_status_pane

0xa117,	// (0x00097b37) grid_qdial_pane

0xa076,	// (0x00097a96) listscroll_mce_pane

0xa076,	// (0x00097a96) bg_notes_pane

0xa121,	// (0x00097b41) list_notes_pane

0x0f69,	// (0x0008e989) scroll_pane_cp06

0xa12f,	// (0x00097b4f) bg_calc_paper_pane

0xa143,	// (0x00097b63) list_calc_pane

0xa15d,	// (0x00097b7d) bg_calc_display_pane

0x0f7d,	// (0x0008e99d) calc_display_pane_t1

0x0f8f,	// (0x0008e9af) calc_display_pane_t2

0xa169,	// (0x00097b89) calc_display_pane_t3

0x0002,

0xf151,	// (0x0009cb71) calc_display_pane_t

0x0fa1,	// (0x0008e9c1) cell_calc_pane_ParamLimits

0x0fa1,	// (0x0008e9c1) cell_calc_pane

0xa17b,	// (0x00097b9b) bg_calc_paper_pane_g1

0xa187,	// (0x00097ba7) bg_calc_paper_pane_g2

0xa193,	// (0x00097bb3) bg_calc_paper_pane_g3

0xa19f,	// (0x00097bbf) bg_calc_paper_pane_g4

0xa1ab,	// (0x00097bcb) bg_calc_paper_pane_g5

0x0fde,	// (0x0008e9fe) bg_calc_paper_pane_g6

0x0ff1,	// (0x0008ea11) bg_calc_paper_pane_g7

0x1004,	// (0x0008ea24) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0009cb78) bg_calc_paper_pane_g

0x1015,	// (0x0008ea35) calc_bg_paper_pane_g9

0x1026,	// (0x0008ea46) list_calc_item_pane_ParamLimits

0x1026,	// (0x0008ea46) list_calc_item_pane

0xa1b7,	// (0x00097bd7) list_calc_item_pane_g1

0xa1c4,	// (0x00097be4) list_calc_item_pane_t1_ParamLimits

0xa1c4,	// (0x00097be4) list_calc_item_pane_t1

0x103e,	// (0x0008ea5e) list_calc_item_pane_t2_ParamLimits

0x103e,	// (0x0008ea5e) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0009cb89) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0009cb89) list_calc_item_pane_t

0xa1d6,	// (0x00097bf6) cell_calc_pane_g1

0xa1e0,	// (0x00097c00) grid_highlight_pane_cp02

0xa202,	// (0x00097c22) bg_calc_display_pane_g1

0xa20b,	// (0x00097c2b) bg_calc_display_pane_g2

0xa215,	// (0x00097c35) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0009cb93) bg_calc_display_pane_g

0x1070,	// (0x0008ea90) cell_qdial_pane_ParamLimits

0x1070,	// (0x0008ea90) cell_qdial_pane

0x1084,	// (0x0008eaa4) cell_qdial_pane_g1_ParamLimits

0x1084,	// (0x0008eaa4) cell_qdial_pane_g1

0x109a,	// (0x0008eaba) cell_qdial_pane_g2_ParamLimits

0x109a,	// (0x0008eaba) cell_qdial_pane_g2

0xa21e,	// (0x00097c3e) cell_qdial_pane_g3_ParamLimits

0xa21e,	// (0x00097c3e) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0009cb9a) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0009cb9a) cell_qdial_pane_g

0x10c1,	// (0x0008eae1) cell_qdial_pane_t1_ParamLimits

0x10c1,	// (0x0008eae1) cell_qdial_pane_t1

0x10d9,	// (0x0008eaf9) cell_qdial_pane_t2_ParamLimits

0x10d9,	// (0x0008eaf9) cell_qdial_pane_t2

0x10ec,	// (0x0008eb0c) cell_qdial_pane_t3_ParamLimits

0x10ec,	// (0x0008eb0c) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0009cba3) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0009cba3) cell_qdial_pane_t

0x9e1b,	// (0x0009783b) grid_highlight_pane_cp04

0xa22a,	// (0x00097c4a) thumbnail_qdial_pane_ParamLimits

0xa22a,	// (0x00097c4a) thumbnail_qdial_pane

0xa286,	// (0x00097ca6) list_help_pane

0xa28f,	// (0x00097caf) scroll_pane_cp02

0x10ff,	// (0x0008eb1f) help_list_pane_t1_ParamLimits

0x10ff,	// (0x0008eb1f) help_list_pane_t1

0xa298,	// (0x00097cb8) bg_notes_pane_g2

0xa2a0,	// (0x00097cc0) bg_notes_pane_g3

0xa2a8,	// (0x00097cc8) notes_bg_pane_g1

0xa2b0,	// (0x00097cd0) notes_bg_pane_g4

0xa2b8,	// (0x00097cd8) notes_bg_pane_g5

0xa2c0,	// (0x00097ce0) notes_bg_pane_g6

0xa2c8,	// (0x00097ce8) notes_bg_pane_g7

0xa2d0,	// (0x00097cf0) notes_bg_pane_g8

0xa2d8,	// (0x00097cf8) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0009cbc1) notes_bg_pane_g

0x111d,	// (0x0008eb3d) list_notes_text_pane_ParamLimits

0x111d,	// (0x0008eb3d) list_notes_text_pane

0xa2e0,	// (0x00097d00) list_notes_text_pane_g1

0xfb33,	// (0x0008d553) list_notes_text_pane_t1

0x1131,	// (0x0008eb51) listscroll_cale_week_pane

0x1167,	// (0x0008eb87) bg_cale_heading_pane

0x1190,	// (0x0008ebb0) bg_cale_pane_cp01

0x11b2,	// (0x0008ebd2) cale_week_corner_pane

0x11d1,	// (0x0008ebf1) cale_week_day_heading_pane

0x11ff,	// (0x0008ec1f) cale_week_scroll_pane_g1

0x1223,	// (0x0008ec43) cale_week_scroll_pane_g2

0x123b,	// (0x0008ec5b) cale_week_scroll_pane_g3

0x1253,	// (0x0008ec73) cale_week_scroll_pane_g4

0x126f,	// (0x0008ec8f) cale_week_scroll_pane_g5

0x128f,	// (0x0008ecaf) cale_week_scroll_pane_g6

0x12af,	// (0x0008eccf) cale_week_scroll_pane_g7

0x12d3,	// (0x0008ecf3) cale_week_scroll_pane_g8

0x12f7,	// (0x0008ed17) cale_week_scroll_pane_g9

0x1314,	// (0x0008ed34) cale_week_scroll_pane_g10

0x1331,	// (0x0008ed51) cale_week_scroll_pane_g11

0x134e,	// (0x0008ed6e) cale_week_scroll_pane_g12

0x136b,	// (0x0008ed8b) cale_week_scroll_pane_g13

0x1388,	// (0x0008eda8) cale_week_scroll_pane_g14

0x13b1,	// (0x0008edd1) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0009cbd0) cale_week_scroll_pane_g

0x13fe,	// (0x0008ee1e) cale_week_time_pane

0x1422,	// (0x0008ee42) grid_cale_week_pane

0xa30c,	// (0x00097d2c) scroll_pane_cp08

0x1459,	// (0x0008ee79) cell_cale_week_pane_ParamLimits

0x1459,	// (0x0008ee79) cell_cale_week_pane

0x14e9,	// (0x0008ef09) cale_week_day_heading_pane_t1

0x1533,	// (0x0008ef53) cale_week_day_heading_pane_t2

0x1582,	// (0x0008efa2) cale_week_day_heading_pane_t3

0x15d1,	// (0x0008eff1) cale_week_day_heading_pane_t4

0x1620,	// (0x0008f040) cale_week_day_heading_pane_t5

0x1673,	// (0x0008f093) cale_week_day_heading_pane_t6

0x16ca,	// (0x0008f0ea) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0009cbf1) cale_week_day_heading_pane_t

0xa32e,	// (0x00097d4e) bg_cale_side_pane

0x1714,	// (0x0008f134) cale_week_time_pane_t1

0x174e,	// (0x0008f16e) cale_week_time_pane_t2

0x1788,	// (0x0008f1a8) cale_week_time_pane_t3

0x17c2,	// (0x0008f1e2) cale_week_time_pane_t4

0x17fc,	// (0x0008f21c) cale_week_time_pane_t5

0x1836,	// (0x0008f256) cale_week_time_pane_t6

0x1870,	// (0x0008f290) cale_week_time_pane_t7

0x18aa,	// (0x0008f2ca) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0009cc00) cale_week_time_pane_t

0x18ea,	// (0x0008f30a) cell_cale_week_pane_g2

0x1909,	// (0x0008f329) cell_cale_week_pane_g3_ParamLimits

0x1909,	// (0x0008f329) cell_cale_week_pane_g3

0xa33c,	// (0x00097d5c) grid_highlight_pane_cp07

0xa344,	// (0x00097d64) listscroll_gms_pane

0xa34e,	// (0x00097d6e) grid_gms_pane

0xa357,	// (0x00097d77) listscroll_gms_pane_g1

0xa35f,	// (0x00097d7f) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0009cc11) listscroll_gms_pane_g

0x1921,	// (0x0008f341) scroll_pane_cp010

0x192c,	// (0x0008f34c) cell_gms_pane_ParamLimits

0x192c,	// (0x0008f34c) cell_gms_pane

0x1946,	// (0x0008f366) cell_gms_pane_g1

0xa367,	// (0x00097d87) cell_gms_pane_g2

0xa36f,	// (0x00097d8f) cell_gms_pane_g3

0xa378,	// (0x00097d98) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0009cc16) cell_gms_pane_g

0xa381,	// (0x00097da1) grid_highlight_pane_cp09

0x3f39,	// (0x00091959) phob_pre_status_pane_g1

0x3f41,	// (0x00091961) phob_pre_status_pane_g2

0x3f49,	// (0x00091969) phob_pre_status_pane_g3

0x3f51,	// (0x00091971) phob_pre_status_pane_g4

0x0004,

0xf5e8,	// (0x0009d008) phob_pre_status_pane_g

0x3f61,	// (0x00091981) phob_pre_status_pane_t1

0x3f71,	// (0x00091991) phob_pre_status_pane_t2

0x3f81,	// (0x000919a1) phob_pre_status_pane_t3

0x0002,

0xf5f3,	// (0x0009d013) phob_pre_status_pane_t

0xa389,	// (0x00097da9) bg_list_pane_cp05

0x1956,	// (0x0008f376) grid_vorec_pane

0x1962,	// (0x0008f382) vorec_t1

0x1970,	// (0x0008f390) vorec_t2

0x197e,	// (0x0008f39e) vorec_t3

0x198c,	// (0x0008f3ac) vorec_t4

0x9983,	// (0x000973a3) vorec_t5

0x9991,	// (0x000973b1) vorec_t6

0x0004,

0xf1ff,	// (0x0009cc1f) vorec_t

0x999f,	// (0x000973bf) wait_bar_pane_cp01

0x19a8,	// (0x0008f3c8) cell_vorec_pane_ParamLimits

0x19a8,	// (0x0008f3c8) cell_vorec_pane

0xa391,	// (0x00097db1) cell_vorec_pane_g1

0x9e1b,	// (0x0009783b) grid_highlight_pane_cp05

0x19d3,	// (0x0008f3f3) cams_zoom_pane

0x19e2,	// (0x0008f402) image_vga_pane

0x19fc,	// (0x0008f41c) main_camera_pane_g1

0x1a0e,	// (0x0008f42e) main_camera_pane_g2

0x1a1e,	// (0x0008f43e) main_camera_pane_g3

0x1a32,	// (0x0008f452) main_camera_pane_g4

0x1a46,	// (0x0008f466) main_camera_pane_g5

0x1a5a,	// (0x0008f47a) main_camera_pane_g6

0x1a6e,	// (0x0008f48e) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0009cc2a) main_camera_pane_g

0x1a82,	// (0x0008f4a2) main_camera_pane_t1

0x1a98,	// (0x0008f4b8) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0009cc3b) main_camera_pane_t

0x1ad6,	// (0x0008f4f6) cams_zoom_pane_cp_ParamLimits

0x1ad6,	// (0x0008f4f6) cams_zoom_pane_cp

0x1afe,	// (0x0008f51e) image_cif_pane_ParamLimits

0x1afe,	// (0x0008f51e) image_cif_pane

0x1b39,	// (0x0008f559) image_subqcif_pane

0x1b43,	// (0x0008f563) main_video_pane_g1_ParamLimits

0x1b43,	// (0x0008f563) main_video_pane_g1

0x1b67,	// (0x0008f587) main_video_pane_g2_ParamLimits

0x1b67,	// (0x0008f587) main_video_pane_g2

0x1b9d,	// (0x0008f5bd) main_video_pane_g3_ParamLimits

0x1b9d,	// (0x0008f5bd) main_video_pane_g3

0x1bcb,	// (0x0008f5eb) main_video_pane_g4_ParamLimits

0x1bcb,	// (0x0008f5eb) main_video_pane_g4

0x1bf9,	// (0x0008f619) main_video_pane_g5_ParamLimits

0x1bf9,	// (0x0008f619) main_video_pane_g5

0xa3a7,	// (0x00097dc7) main_video_pane_g6_ParamLimits

0xa3a7,	// (0x00097dc7) main_video_pane_g6

0x0006,

0xf220,	// (0x0009cc40) main_video_pane_g_ParamLimits

0xf220,	// (0x0009cc40) main_video_pane_g

0x1c22,	// (0x0008f642) main_video_pane_t1_ParamLimits

0x1c22,	// (0x0008f642) main_video_pane_t1

0xa3c1,	// (0x00097de1) cams_zoom_pane_g1

0xa3ca,	// (0x00097dea) cams_zoom_pane_g2

0xa3d3,	// (0x00097df3) cams_zoom_pane_g3

0xa3dc,	// (0x00097dfc) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0009cc4f) cams_zoom_pane_g

0x1c7f,	// (0x0008f69f) grid_cams_pane

0x1c99,	// (0x0008f6b9) linegrid_cams_pane

0x1cab,	// (0x0008f6cb) cell_cams_pane_ParamLimits

0x1cab,	// (0x0008f6cb) cell_cams_pane

0xa3e5,	// (0x00097e05) cams_burst_image_pane

0xa3ed,	// (0x00097e0d) cell_cams_pane_g1

0x9e1b,	// (0x0009783b) grid_highlight_pane_cp03

0xa1d6,	// (0x00097bf6) mp_bg_pane_g1

0x9e1b,	// (0x0009783b) bg_list_pane_cp03

0xc6b2,	// (0x0009a0d2) bg_mp_pane

0xc6ba,	// (0x0009a0da) grid_mp_pane

0xc6c2,	// (0x0009a0e2) media_player_g1

0xc6cc,	// (0x0009a0ec) media_player_t1

0xc6da,	// (0x0009a0fa) media_player_t2

0xc6e8,	// (0x0009a108) media_player_t3

0xc6f6,	// (0x0009a116) media_player_t4

0xc704,	// (0x0009a124) media_player_t5

0xc712,	// (0x0009a132) media_player_t6

0xc720,	// (0x0009a140) media_player_t7

0x0006,

0xf5d2,	// (0x0009cff2) media_player_t

0xc72e,	// (0x0009a14e) wait_bar_pane_cp02

0xf5b7,	// (0x0009cfd7) main_usb_pane_t

0x3f30,	// (0x00091950) cell_mp_pane

0xa1d6,	// (0x00097bf6) cell_mp_pane_g1

0x9e1b,	// (0x0009783b) grid_highlight_pane_cp06

0xa3f5,	// (0x00097e15) grid_skin_colour_pane

0xa3fd,	// (0x00097e1d) list_highlight_pane_cp03

0x1ccd,	// (0x0008f6ed) skin_g1

0xa405,	// (0x00097e25) skin_t1

0xa414,	// (0x00097e34) skin_t2

0x0001,

0xf264,	// (0x0009cc84) skin_t

0x1cd5,	// (0x0008f6f5) cell_skin_colour_pane_ParamLimits

0x1cd5,	// (0x0008f6f5) cell_skin_colour_pane

0xa422,	// (0x00097e42) cell_skin_colour_pane_g1

0x1d48,	// (0x0008f768) call_video_g1_ParamLimits

0x1d48,	// (0x0008f768) call_video_g1

0x1d64,	// (0x0008f784) call_video_g2_ParamLimits

0x1d64,	// (0x0008f784) call_video_g2

0x0001,

0xf269,	// (0x0009cc89) call_video_g_ParamLimits

0xf269,	// (0x0009cc89) call_video_g

0x1da9,	// (0x0008f7c9) call_video_uplink_pane_cp1_ParamLimits

0x1da9,	// (0x0008f7c9) call_video_uplink_pane_cp1

0xa434,	// (0x00097e54) call_video_uplink_pane_cp2

0x1e4a,	// (0x0008f86a) video_down_crop_pane_ParamLimits

0x1e4a,	// (0x0008f86a) video_down_crop_pane

0x1f33,	// (0x0008f953) video_down_pane_ParamLimits

0x1f33,	// (0x0008f953) video_down_pane

0xa43c,	// (0x00097e5c) video_down_subqcif_pane_ParamLimits

0xa43c,	// (0x00097e5c) video_down_subqcif_pane

0xa456,	// (0x00097e76) video_down_subqcif_pane_cp_ParamLimits

0xa456,	// (0x00097e76) video_down_subqcif_pane_cp

0xa47e,	// (0x00097e9e) im_reading_pane_ParamLimits

0xa47e,	// (0x00097e9e) im_reading_pane

0x203c,	// (0x0008fa5c) im_writing_pane_ParamLimits

0x203c,	// (0x0008fa5c) im_writing_pane

0x2058,	// (0x0008fa78) im_reading_pane_t1

0xa498,	// (0x00097eb8) list_im_pane

0xa4a9,	// (0x00097ec9) scroll_pane_cp07

0x2094,	// (0x0008fab4) im_writing_pane_t1_ParamLimits

0x2094,	// (0x0008fab4) im_writing_pane_t1

0xa4c2,	// (0x00097ee2) im_writing_pane_t2_ParamLimits

0xa4c2,	// (0x00097ee2) im_writing_pane_t2

0x0001,

0xf273,	// (0x0009cc93) im_writing_pane_t_ParamLimits

0xf273,	// (0x0009cc93) im_writing_pane_t

0x9e1b,	// (0x0009783b) input_focus_pane_cp04

0x9e1b,	// (0x0009783b) input_focus_pane_cp05

0x20a9,	// (0x0008fac9) list_im_single_pane_ParamLimits

0x20a9,	// (0x0008fac9) list_im_single_pane

0x20bf,	// (0x0008fadf) list_single_im_pane_t1

0x3ef0,	// (0x00091910) blid_accuracy_pane

0x3ef8,	// (0x00091918) blid_compass_pane

0x3f02,	// (0x00091922) main_location_t1

0x3f12,	// (0x00091932) main_location_t2

0x3f22,	// (0x00091942) main_location_t3

0x0002,

0xf5e1,	// (0x0009d001) main_location_t

0x9e1b,	// (0x0009783b) aid_levels_location

0xa1d6,	// (0x00097bf6) blid_accuracy_pane_g1

0xa1d6,	// (0x00097bf6) blid_accuracy_pane_g2

0x0001,

0xf2dc,	// (0x0009ccfc) blid_accuracy_pane_g

0xa50a,	// (0x00097f2a) wml_content_pane

0xa548,	// (0x00097f68) wml_button_pane_ParamLimits

0xa548,	// (0x00097f68) wml_button_pane

0x20ce,	// (0x0008faee) wml_list_single_large_pane_ParamLimits

0x20ce,	// (0x0008faee) wml_list_single_large_pane

0x20e4,	// (0x0008fb04) wml_list_single_medium_pane_ParamLimits

0x20e4,	// (0x0008fb04) wml_list_single_medium_pane

0x20fb,	// (0x0008fb1b) wml_list_single_small_pane_ParamLimits

0x20fb,	// (0x0008fb1b) wml_list_single_small_pane

0xa55c,	// (0x00097f7c) wml_selection_box_pane_ParamLimits

0xa55c,	// (0x00097f7c) wml_selection_box_pane

0xa56f,	// (0x00097f8f) wml_list_single_pane_t1

0xa57e,	// (0x00097f9e) wml_list_single_medium_pane_t1

0xa58d,	// (0x00097fad) wml_list_single_large_pane_t1

0xa59c,	// (0x00097fbc) input_focus_pane_cp02_ParamLimits

0xa59c,	// (0x00097fbc) input_focus_pane_cp02

0xa5af,	// (0x00097fcf) wml_selection_box_pane_g1

0xa5b8,	// (0x00097fd8) wml_selection_box_pane_t1_ParamLimits

0xa5b8,	// (0x00097fd8) wml_selection_box_pane_t1

0xa076,	// (0x00097a96) bg_wml_button_pane_ParamLimits

0xa076,	// (0x00097a96) bg_wml_button_pane

0xac85,	// (0x000986a5) wml_button_pane_g1

0xac8d,	// (0x000986ad) wml_button_pane_t1

0xac85,	// (0x000986a5) wml_button_bg_pane_g1

0xac9d,	// (0x000986bd) wml_button_bg_pane_g2

0xaca5,	// (0x000986c5) wml_button_bg_pane_g3

0xacad,	// (0x000986cd) wml_button_bg_pane_g4

0xacb5,	// (0x000986d5) wml_button_bg_pane_g5

0xacbd,	// (0x000986dd) wml_button_bg_pane_g6

0xacc5,	// (0x000986e5) wml_button_bg_pane_g7

0xaccd,	// (0x000986ed) wml_button_bg_pane_g8

0xacd5,	// (0x000986f5) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0009cc98) wml_button_bg_pane_g

0x2117,	// (0x0008fb37) bg_list_pane_cp02

0xacdd,	// (0x000986fd) mce_header_pane_ParamLimits

0xacdd,	// (0x000986fd) mce_header_pane

0xacf3,	// (0x00098713) mce_icon_pane

0xacf3,	// (0x00098713) mce_image_pane

0xacfc,	// (0x0009871c) mce_text_pane_ParamLimits

0xacfc,	// (0x0009871c) mce_text_pane

0x2121,	// (0x0008fb41) scroll_pane_cp03

0xa540,	// (0x00097f60) scroll_pane_cp04

0xad0f,	// (0x0009872f) scroll_pane_cp05_ParamLimits

0xad0f,	// (0x0009872f) scroll_pane_cp05

0x212b,	// (0x0008fb4b) mce_header_field_pane_ParamLimits

0x212b,	// (0x0008fb4b) mce_header_field_pane

0x2144,	// (0x0008fb64) mce_header_field_pane_2_ParamLimits

0x2144,	// (0x0008fb64) mce_header_field_pane_2

0x215a,	// (0x0008fb7a) mce_header_field_pane_3

0x2162,	// (0x0008fb82) list_single_mce_message_pane_ParamLimits

0x2162,	// (0x0008fb82) list_single_mce_message_pane

0x217b,	// (0x0008fb9b) list_single_mce_smart_pane_ParamLimits

0x217b,	// (0x0008fb9b) list_single_mce_smart_pane

0xad1b,	// (0x0009873b) input_focus_pane_cp03

0xad24,	// (0x00098744) list_header_data_pane

0x219f,	// (0x0008fbbf) mce_header_field_pane_t1

0x21af,	// (0x0008fbcf) list_single_mce_header_pane_ParamLimits

0x21af,	// (0x0008fbcf) list_single_mce_header_pane

0xad2c,	// (0x0009874c) list_single_mce_header_pane_t1

0xad3b,	// (0x0009875b) list_single_mce_message_pane_g1

0xad43,	// (0x00098763) list_single_mce_message_pane_t1

0x21e9,	// (0x0008fc09) bg_cale_heading_pane_cp01_ParamLimits

0x21e9,	// (0x0008fc09) bg_cale_heading_pane_cp01

0xad51,	// (0x00098771) bg_cale_pane_cp02_ParamLimits

0xad51,	// (0x00098771) bg_cale_pane_cp02

0x2230,	// (0x0008fc50) cale_month_corner_pane

0x224f,	// (0x0008fc6f) cale_month_day_heading_pane_ParamLimits

0x224f,	// (0x0008fc6f) cale_month_day_heading_pane

0x22ae,	// (0x0008fcce) cale_month_pane_g1_ParamLimits

0x22ae,	// (0x0008fcce) cale_month_pane_g1

0x22ea,	// (0x0008fd0a) cale_month_pane_g2_ParamLimits

0x22ea,	// (0x0008fd0a) cale_month_pane_g2

0x2326,	// (0x0008fd46) cale_month_pane_g3_ParamLimits

0x2326,	// (0x0008fd46) cale_month_pane_g3

0x237a,	// (0x0008fd9a) cale_month_pane_g4_ParamLimits

0x237a,	// (0x0008fd9a) cale_month_pane_g4

0x23ce,	// (0x0008fdee) cale_month_pane_g5_ParamLimits

0x23ce,	// (0x0008fdee) cale_month_pane_g5

0x242a,	// (0x0008fe4a) cale_month_pane_g6_ParamLimits

0x242a,	// (0x0008fe4a) cale_month_pane_g6

0x248e,	// (0x0008feae) cale_month_pane_g7_ParamLimits

0x248e,	// (0x0008feae) cale_month_pane_g7

0x24fa,	// (0x0008ff1a) cale_month_pane_g8_ParamLimits

0x24fa,	// (0x0008ff1a) cale_month_pane_g8

0x2566,	// (0x0008ff86) cale_month_pane_g9_ParamLimits

0x2566,	// (0x0008ff86) cale_month_pane_g9

0x25c4,	// (0x0008ffe4) cale_month_pane_g10_ParamLimits

0x25c4,	// (0x0008ffe4) cale_month_pane_g10

0x2616,	// (0x00090036) cale_month_pane_g11_ParamLimits

0x2616,	// (0x00090036) cale_month_pane_g11

0x2668,	// (0x00090088) cale_month_pane_g12_ParamLimits

0x2668,	// (0x00090088) cale_month_pane_g12

0x26c0,	// (0x000900e0) cale_month_pane_g13_ParamLimits

0x26c0,	// (0x000900e0) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0009ccab) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0009ccab) cale_month_pane_g

0x2718,	// (0x00090138) cale_month_week_pane

0x273c,	// (0x0009015c) grid_cale_month_pane_ParamLimits

0x273c,	// (0x0009015c) grid_cale_month_pane

0x2792,	// (0x000901b2) cale_month_day_heading_pane_t1

0x2818,	// (0x00090238) cale_month_day_heading_pane_t2

0x28a9,	// (0x000902c9) cale_month_day_heading_pane_t3

0x293a,	// (0x0009035a) cale_month_day_heading_pane_t4

0x29cb,	// (0x000903eb) cale_month_day_heading_pane_t5

0x2a6c,	// (0x0009048c) cale_month_day_heading_pane_t6

0x2b11,	// (0x00090531) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0009ccc6) cale_month_day_heading_pane_t

0xa32e,	// (0x00097d4e) bg_cale_side_pane_cp01

0x2bba,	// (0x000905da) cale_month_week_pane_t1

0x2bd3,	// (0x000905f3) cale_month_week_pane_t2

0x2bec,	// (0x0009060c) cale_month_week_pane_t3

0x2c05,	// (0x00090625) cale_month_week_pane_t4

0x2c1e,	// (0x0009063e) cale_month_week_pane_t5

0x2c37,	// (0x00090657) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0009ccd5) cale_month_week_pane_t

0x2c56,	// (0x00090676) cell_cale_month_pane_ParamLimits

0x2c56,	// (0x00090676) cell_cale_month_pane

0xa5d0,	// (0x00097ff0) cell_cale_month_pane_g1

0x2d80,	// (0x000907a0) cell_cale_month_pane_t1_ParamLimits

0x2d80,	// (0x000907a0) cell_cale_month_pane_t1

0xa33c,	// (0x00097d5c) grid_highlight_pane_cp08

0xa1d6,	// (0x00097bf6) main_smil_g1

0x2da0,	// (0x000907c0) smil_status_pane

0xad90,	// (0x000987b0) smil_text_pane

0xc5d0,	// (0x00099ff0) bg_popup_call3_rect_pane_g8

0xc5d8,	// (0x00099ff8) bg_popup_call3_rect_pane_g9

0x0008,

0xf575,	// (0x0009cf95) bg_popup_call3_rect_pane_g

0xc866,	// (0x0009a286) smil_status_volume_pane_g1

0x2db3,	// (0x000907d3) smil_status_pane_t1

0xa6ce,	// (0x000980ee) volume_smil_pane

0xad9a,	// (0x000987ba) list_smil_text_pane

0x2dcc,	// (0x000907ec) scroll_pane_cp011

0x2dd7,	// (0x000907f7) smil_text_list_pane_t1_ParamLimits

0x2dd7,	// (0x000907f7) smil_text_list_pane_t1

0xa5dc,	// (0x00097ffc) aid_volume_smil_ParamLimits

0xa5dc,	// (0x00097ffc) aid_volume_smil

0xa1d6,	// (0x00097bf6) smil_volume_pane_g1

0xa1d6,	// (0x00097bf6) smil_volume_pane_g2

0x0001,

0xf2dc,	// (0x0009ccfc) smil_volume_pane_g

0x1131,	// (0x0008eb51) listscroll_cale_day_pane

0xada4,	// (0x000987c4) bg_cale_pane

0xadbc,	// (0x000987dc) list_cale_pane

0xaddf,	// (0x000987ff) scroll_pane_cp09

0xadf0,	// (0x00098810) cale_bg_pane_g1

0xadf8,	// (0x00098818) cale_bg_pane_g2

0xae00,	// (0x00098820) cale_bg_pane_g3

0xae08,	// (0x00098828) cale_bg_pane_g4

0xae10,	// (0x00098830) cale_bg_pane_g5

0xae18,	// (0x00098838) cale_bg_pane_g6

0xae20,	// (0x00098840) cale_bg_pane_g7

0xae28,	// (0x00098848) cale_bg_pane_g8

0xae30,	// (0x00098850) cale_bg_pane_g9

0x0008,

0xf2e1,	// (0x0009cd01) cale_bg_pane_g

0x2e10,	// (0x00090830) list_cale_time_pane_ParamLimits

0x2e10,	// (0x00090830) list_cale_time_pane

0xae40,	// (0x00098860) list_cale_time_pane_g1_ParamLimits

0xae40,	// (0x00098860) list_cale_time_pane_g1

0xae4c,	// (0x0009886c) list_cale_time_pane_g2_ParamLimits

0xae4c,	// (0x0009886c) list_cale_time_pane_g2

0x2e24,	// (0x00090844) list_cale_time_pane_g3_ParamLimits

0x2e24,	// (0x00090844) list_cale_time_pane_g3

0x2e32,	// (0x00090852) list_cale_time_pane_g4_ParamLimits

0x2e32,	// (0x00090852) list_cale_time_pane_g4

0x2e40,	// (0x00090860) list_cale_time_pane_g5_ParamLimits

0x2e40,	// (0x00090860) list_cale_time_pane_g5

0x0005,

0xf2f4,	// (0x0009cd14) list_cale_time_pane_g_ParamLimits

0xf2f4,	// (0x0009cd14) list_cale_time_pane_g

0xae66,	// (0x00098886) list_cale_time_pane_t1_ParamLimits

0xae66,	// (0x00098886) list_cale_time_pane_t1

0xae8e,	// (0x000988ae) list_cale_time_pane_t2_ParamLimits

0xae8e,	// (0x000988ae) list_cale_time_pane_t2

0x310e,	// (0x00090b2e) aid_blid_cardinal_pane

0x314c,	// (0x00090b6c) compass_pane_t4

0xaeb6,	// (0x000988d6) list_cale_time_pane_t4_ParamLimits

0xaeb6,	// (0x000988d6) list_cale_time_pane_t4

0x315a,	// (0x00090b7a) compass_pane_t5

0x3168,	// (0x00090b88) compass_pane_t6

0x3176,	// (0x00090b96) compass_pane_t7

0xb2d0,	// (0x00098cf0) navi_pane_cc_t1

0xb41d,	// (0x00098e3d) aid_phob_thumbnail_center_pane

0x38bb,	// (0x000912db) main_postcard_pane_g4_ParamLimits

0x0002,

0xf301,	// (0x0009cd21) list_cale_time_pane_t_ParamLimits

0xf301,	// (0x0009cd21) list_cale_time_pane_t

0x9a72,	// (0x00097492) bg_popup_window_pane_cp02_ParamLimits

0x9a72,	// (0x00097492) bg_popup_window_pane_cp02

0xaede,	// (0x000988fe) heading_pane_cp01_ParamLimits

0xaede,	// (0x000988fe) heading_pane_cp01

0xaeea,	// (0x0009890a) loc_req_pane_ParamLimits

0xaeea,	// (0x0009890a) loc_req_pane

0xaefa,	// (0x0009891a) loc_type_pane_ParamLimits

0xaefa,	// (0x0009891a) loc_type_pane

0xaf0c,	// (0x0009892c) loc_type_pane_t1_ParamLimits

0xaf0c,	// (0x0009892c) loc_type_pane_t1

0xaf1e,	// (0x0009893e) loc_type_pane_t2_ParamLimits

0xaf1e,	// (0x0009893e) loc_type_pane_t2

0xaf30,	// (0x00098950) loc_type_pane_t3_ParamLimits

0xaf30,	// (0x00098950) loc_type_pane_t3

0x0002,

0xf308,	// (0x0009cd28) loc_type_pane_t_ParamLimits

0xf308,	// (0x0009cd28) loc_type_pane_t

0xaf42,	// (0x00098962) list_loc_req_pane

0xaf4c,	// (0x0009896c) scroll_pane_cp012

0x2e4e,	// (0x0009086e) list_single_loc_request_popup_menu_pane_ParamLimits

0x2e4e,	// (0x0009086e) list_single_loc_request_popup_menu_pane

0xaf57,	// (0x00098977) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf57,	// (0x00098977) list_single_loc_request_popup_menu_pane_g1

0xaf63,	// (0x00098983) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf63,	// (0x00098983) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30f,	// (0x0009cd2f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30f,	// (0x0009cd2f) list_single_loc_request_popup_menu_pane_g

0xaf6f,	// (0x0009898f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf6f,	// (0x0009898f) list_single_loc_request_popup_menu_pane_t1

0xa076,	// (0x00097a96) bg_popup_window_pane_cp03_ParamLimits

0xa076,	// (0x00097a96) bg_popup_window_pane_cp03

0xaf85,	// (0x000989a5) heading_loc_req_pane_ParamLimits

0xaf85,	// (0x000989a5) heading_loc_req_pane

0x2e5b,	// (0x0009087b) popup_dyc_status_message_window_g1_ParamLimits

0x2e5b,	// (0x0009087b) popup_dyc_status_message_window_g1

0x2e6f,	// (0x0009088f) popup_dyc_status_message_window_t1_ParamLimits

0x2e6f,	// (0x0009088f) popup_dyc_status_message_window_t1

0x2e84,	// (0x000908a4) popup_dyc_status_message_window_t2_ParamLimits

0x2e84,	// (0x000908a4) popup_dyc_status_message_window_t2

0x2e99,	// (0x000908b9) popup_dyc_status_message_window_t3_ParamLimits

0x2e99,	// (0x000908b9) popup_dyc_status_message_window_t3

0x0002,

0xf314,	// (0x0009cd34) popup_dyc_status_message_window_t_ParamLimits

0xf314,	// (0x0009cd34) popup_dyc_status_message_window_t

0x9e1b,	// (0x0009783b) bg_heading_pane_cp01

0xaf91,	// (0x000989b1) heading_loc_req_pane_g1

0xaf99,	// (0x000989b9) heading_loc_req_pane_g2

0xafa1,	// (0x000989c1) heading_loc_req_pane_g3

0x0002,

0xf31b,	// (0x0009cd3b) heading_loc_req_pane_g

0xafa9,	// (0x000989c9) heading_loc_req_pane_t1

0xafb9,	// (0x000989d9) bg_popup_sub_pane_cp01_ParamLimits

0xafb9,	// (0x000989d9) bg_popup_sub_pane_cp01

0xafc7,	// (0x000989e7) popup_cale_events_window_g1_ParamLimits

0xafc7,	// (0x000989e7) popup_cale_events_window_g1

0xafe7,	// (0x00098a07) popup_cale_events_window_g2_ParamLimits

0xafe7,	// (0x00098a07) popup_cale_events_window_g2

0x0001,

0xf34f,	// (0x0009cd6f) popup_cale_events_window_g_ParamLimits

0xf34f,	// (0x0009cd6f) popup_cale_events_window_g

0xb007,	// (0x00098a27) popup_cale_events_window_t1_ParamLimits

0xb007,	// (0x00098a27) popup_cale_events_window_t1

0xb019,	// (0x00098a39) popup_cale_events_window_t2_ParamLimits

0xb019,	// (0x00098a39) popup_cale_events_window_t2

0xb057,	// (0x00098a77) popup_cale_events_window_t3_ParamLimits

0xb057,	// (0x00098a77) popup_cale_events_window_t3

0xb091,	// (0x00098ab1) popup_cale_events_window_t4_ParamLimits

0xb091,	// (0x00098ab1) popup_cale_events_window_t4

0x0003,

0xf354,	// (0x0009cd74) popup_cale_events_window_t_ParamLimits

0xf354,	// (0x0009cd74) popup_cale_events_window_t

0x2ecd,	// (0x000908ed) call_type_pane

0x2edd,	// (0x000908fd) popup_call_status_window_g1

0x2ef1,	// (0x00090911) popup_call_status_window_g2

0x2f05,	// (0x00090925) popup_call_status_window_g3

0x0002,

0xf35d,	// (0x0009cd7d) popup_call_status_window_g

0xb0c7,	// (0x00098ae7) call_type_pane_g1

0xb0d0,	// (0x00098af0) call_type_pane_g2

0x0001,

0xf364,	// (0x0009cd84) call_type_pane_g

0x9e1b,	// (0x0009783b) bg_popup_sub_pane_cp02

0xb0d9,	// (0x00098af9) listscroll_popup_wml_pane

0xb0e1,	// (0x00098b01) list_wml_pane

0xb0eb,	// (0x00098b0b) scroll_pane_cp013

0xb0f6,	// (0x00098b16) list_single_graphic_popup_wml_pane_ParamLimits

0xb0f6,	// (0x00098b16) list_single_graphic_popup_wml_pane

0xa1d6,	// (0x00097bf6) list_single_graphic_popup_wml_pane_g1

0xb10a,	// (0x00098b2a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf369,	// (0x0009cd89) list_single_graphic_popup_wml_pane_g

0xb112,	// (0x00098b32) list_single_graphic_popup_wml_pane_t1

0xb128,	// (0x00098b48) aid_call_pane

0xa06e,	// (0x00097a8e) popup_clock_analogue_window_g1

0xa06e,	// (0x00097a8e) popup_clock_analogue_window_g2

0xa5fe,	// (0x0009801e) popup_clock_analogue_window_g3

0xa5fe,	// (0x0009801e) popup_clock_analogue_window_g4

0xa1d6,	// (0x00097bf6) popup_clock_analogue_window_g5

0x0004,

0xf36e,	// (0x0009cd8e) popup_clock_analogue_window_g

0xa606,	// (0x00098026) popup_clock_analogue_window_t1

0xa614,	// (0x00098034) clock_digital_number_pane_ParamLimits

0xa614,	// (0x00098034) clock_digital_number_pane

0xa620,	// (0x00098040) clock_digital_number_pane_cp02_ParamLimits

0xa620,	// (0x00098040) clock_digital_number_pane_cp02

0xa62c,	// (0x0009804c) clock_digital_number_pane_cp03_ParamLimits

0xa62c,	// (0x0009804c) clock_digital_number_pane_cp03

0xa638,	// (0x00098058) clock_digital_number_pane_cp04_ParamLimits

0xa638,	// (0x00098058) clock_digital_number_pane_cp04

0xa644,	// (0x00098064) clock_digital_separator_pane_ParamLimits

0xa644,	// (0x00098064) clock_digital_separator_pane

0xa650,	// (0x00098070) popup_clock_digital_window_t1

0xa1d6,	// (0x00097bf6) clock_digital_number_pane_g1

0xa1d6,	// (0x00097bf6) clock_digital_number_pane_g2

0x0001,

0xf2dc,	// (0x0009ccfc) clock_digital_number_pane_g

0xa1d6,	// (0x00097bf6) clock_digital_separator_pane_g1

0xa1d6,	// (0x00097bf6) clock_digital_separator_pane_g2

0x0001,

0xf2dc,	// (0x0009ccfc) clock_digital_separator_pane_g

0x9e1b,	// (0x0009783b) bg_popup_window_pane_cp04

0xb130,	// (0x00098b50) heading_pane_cp03

0xb138,	// (0x00098b58) listscroll_popup_gms_pane

0xb140,	// (0x00098b60) grid_large_graphic_popup_pane

0xb14a,	// (0x00098b6a) listscroll_popup_gms_pane_g1

0xb152,	// (0x00098b72) listscroll_popup_gms_pane_g2

0x0001,

0xf379,	// (0x0009cd99) listscroll_popup_gms_pane_g

0xa540,	// (0x00097f60) scroll_pane_cp014

0x2f15,	// (0x00090935) cell_large_graphic_popup_pane_ParamLimits

0x2f15,	// (0x00090935) cell_large_graphic_popup_pane

0x2f2d,	// (0x0009094d) cell_large_graphic_popup_pane_g1_ParamLimits

0x2f2d,	// (0x0009094d) cell_large_graphic_popup_pane_g1

0xb15a,	// (0x00098b7a) cell_large_graphic_popup_pane_g2_ParamLimits

0xb15a,	// (0x00098b7a) cell_large_graphic_popup_pane_g2

0xb166,	// (0x00098b86) cell_large_graphic_popup_pane_g3_ParamLimits

0xb166,	// (0x00098b86) cell_large_graphic_popup_pane_g3

0xb173,	// (0x00098b93) cell_large_graphic_popup_pane_g4_ParamLimits

0xb173,	// (0x00098b93) cell_large_graphic_popup_pane_g4

0x0003,

0xf37e,	// (0x0009cd9e) cell_large_graphic_popup_pane_g_ParamLimits

0xf37e,	// (0x0009cd9e) cell_large_graphic_popup_pane_g

0xb183,	// (0x00098ba3) grid_highlight_pane_cp010

0xa1d6,	// (0x00097bf6) bg_popup_call_pane_g1

0xb18d,	// (0x00098bad) list_single_graphic_popup_conf_pane_ParamLimits

0xb18d,	// (0x00098bad) list_single_graphic_popup_conf_pane

0xb19f,	// (0x00098bbf) list_highlight_pane_cp01

0xb1a8,	// (0x00098bc8) list_single_graphic_popup_conf_pane_g1

0xb1b0,	// (0x00098bd0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf387,	// (0x0009cda7) list_single_graphic_popup_conf_pane_g

0xb1b8,	// (0x00098bd8) list_single_graphic_popup_conf_pane_t1

0xb1c6,	// (0x00098be6) linegrid_cams_pane_g1

0x2f39,	// (0x00090959) linegrid_cams_pane_g2

0xa36f,	// (0x00097d8f) linegrid_cams_pane_g3

0xb1cf,	// (0x00098bef) linegrid_cams_pane_g4

0x2f42,	// (0x00090962) linegrid_cams_pane_g5

0x2f4b,	// (0x0009096b) linegrid_cams_pane_g6

0xa378,	// (0x00097d98) linegrid_cams_pane_g7

0x0006,

0xf38c,	// (0x0009cdac) linegrid_cams_pane_g

0xb1d8,	// (0x00098bf8) popup_clock_analogue_window

0xb1d8,	// (0x00098bf8) popup_clock_digital_window

0x9e1b,	// (0x0009783b) popup_phob_thumbnail_window

0xa1d6,	// (0x00097bf6) call_video_uplink_pane_g1

0xb1e1,	// (0x00098c01) call_video_uplink_pane_g2

0x0001,

0xf39b,	// (0x0009cdbb) call_video_uplink_pane_g

0xb1e9,	// (0x00098c09) video_uplink_pane

0xb1f1,	// (0x00098c11) mce_image_pane_g1

0x2f56,	// (0x00090976) mce_image_pane_g2

0x2f60,	// (0x00090980) mce_image_pane_g3

0x2f6a,	// (0x0009098a) mce_image_pane_g4

0x2f72,	// (0x00090992) mce_image_pane_g5

0x0004,

0xf3a0,	// (0x0009cdc0) mce_image_pane_g

0xb1fb,	// (0x00098c1b) control_top_pane_stacon_cp01_ParamLimits

0xb1fb,	// (0x00098c1b) control_top_pane_stacon_cp01

0xb20f,	// (0x00098c2f) uni_indicator_pane_stacon_cp01_ParamLimits

0xb20f,	// (0x00098c2f) uni_indicator_pane_stacon_cp01

0xb220,	// (0x00098c40) bg_popup_sub_pane_cp03

0x2f7a,	// (0x0009099a) chi_dic_find_pane

0x2f82,	// (0x000909a2) listscroll_chi_dic_pane

0x2f8b,	// (0x000909ab) main_pane_chidic_g1

0x2f9e,	// (0x000909be) chi_dic_find_pane_t1

0xb22a,	// (0x00098c4a) find_chidic_pane

0xb233,	// (0x00098c53) chi_dic_list_pane_ParamLimits

0xb233,	// (0x00098c53) chi_dic_list_pane

0xb244,	// (0x00098c64) scroll_pane_cp020

0x2fac,	// (0x000909cc) find_chidic_pane_t1

0x9e1b,	// (0x0009783b) input_focus_pane_cp06

0x0db5,	// (0x0008e7d5) list_chi_dic_pane_ParamLimits

0x0db5,	// (0x0008e7d5) list_chi_dic_pane

0x2fbb,	// (0x000909db) list_chi_dic_pane_t1_ParamLimits

0x2fbb,	// (0x000909db) list_chi_dic_pane_t1

0x9e1b,	// (0x0009783b) list_highlight_pane_cp020

0xb24c,	// (0x00098c6c) bg_cale_heading_pane_g1

0x2fce,	// (0x000909ee) bg_cale_heading_pane_g2

0x2fd6,	// (0x000909f6) bg_cale_heading_pane_g3

0x2fde,	// (0x000909fe) bg_cale_heading_pane_g4

0x2fe8,	// (0x00090a08) bg_cale_heading_pane_g5

0x2ff2,	// (0x00090a12) bg_cale_heading_pane_g6

0x2ffa,	// (0x00090a1a) bg_cale_heading_pane_g7

0x3002,	// (0x00090a22) bg_cale_heading_pane_g8

0x300c,	// (0x00090a2c) bg_cale_heading_pane_g9

0x0008,

0xf3ab,	// (0x0009cdcb) bg_cale_heading_pane_g

0xb24c,	// (0x00098c6c) bg_cale_side_pane_g1

0x3016,	// (0x00090a36) bg_cale_side_pane_g2

0x3020,	// (0x00090a40) bg_cale_side_pane_g3

0x302a,	// (0x00090a4a) bg_cale_side_pane_g4

0x3034,	// (0x00090a54) bg_cale_side_pane_g5

0x303e,	// (0x00090a5e) bg_cale_side_pane_g6

0x3048,	// (0x00090a68) bg_cale_side_pane_g7

0x3052,	// (0x00090a72) bg_cale_side_pane_g8

0x305a,	// (0x00090a7a) bg_cale_side_pane_g9

0x0008,

0xf3be,	// (0x0009cdde) bg_cale_side_pane_g

0x3062,	// (0x00090a82) popup_call_status_window_ParamLimits

0x3062,	// (0x00090a82) popup_call_status_window

0xb254,	// (0x00098c74) stacon_top_pane

0xb25c,	// (0x00098c7c) status_pane_ParamLimits

0xb25c,	// (0x00098c7c) status_pane

0xb271,	// (0x00098c91) status_small_pane

0xb279,	// (0x00098c99) control_pane

0x9e1b,	// (0x0009783b) stacon_bottom_pane

0xb281,	// (0x00098ca1) list_single_mce_smart_pane_t1_ParamLimits

0xb281,	// (0x00098ca1) list_single_mce_smart_pane_t1

0xb294,	// (0x00098cb4) list_single_mce_smart_pane_t2_ParamLimits

0xb294,	// (0x00098cb4) list_single_mce_smart_pane_t2

0x0001,

0xf3d1,	// (0x0009cdf1) list_single_mce_smart_pane_t_ParamLimits

0xf3d1,	// (0x0009cdf1) list_single_mce_smart_pane_t

0x30af,	// (0x00090acf) compass_pane

0x30ba,	// (0x00090ada) main_location2_pane_t1

0x30ce,	// (0x00090aee) main_location2_pane_t2

0x30e4,	// (0x00090b04) main_location2_pane_t3

0x0003,

0xf3d6,	// (0x0009cdf6) main_location2_pane_t

0xb2b3,	// (0x00098cd3) compass_pane_g1_ParamLimits

0xb2b3,	// (0x00098cd3) compass_pane_g1

0x312e,	// (0x00090b4e) compass_pane_t1

0x313d,	// (0x00090b5d) compass_pane_t2

0x0005,

0xf3df,	// (0x0009cdff) compass_pane_t

0x3184,	// (0x00090ba4) text_secondary_cp61

0xb2c7,	// (0x00098ce7) navi_pane_cams_g5

0xb2ea,	// (0x00098d0a) navi_pane_im_t1

0xb2f8,	// (0x00098d18) navi_pane_mp_g1_ParamLimits

0xb2f8,	// (0x00098d18) navi_pane_mp_g1

0xb30c,	// (0x00098d2c) navi_pane_mp_g2_ParamLimits

0xb30c,	// (0x00098d2c) navi_pane_mp_g2

0xb318,	// (0x00098d38) navi_pane_mp_g3_ParamLimits

0xb318,	// (0x00098d38) navi_pane_mp_g3

0x0002,

0xf3f3,	// (0x0009ce13) navi_pane_mp_g_ParamLimits

0xf3f3,	// (0x0009ce13) navi_pane_mp_g

0xb324,	// (0x00098d44) navi_pane_mp_t1

0xb332,	// (0x00098d52) navi_pane_mp_t2

0x0002,

0xf3fa,	// (0x0009ce1a) navi_pane_mp_t

0xb36e,	// (0x00098d8e) navi_pane_vt_g1

0xb324,	// (0x00098d44) navi_pane_vt_t1

0xb376,	// (0x00098d96) navi_slider_pane

0xa389,	// (0x00097da9) zooming_pane

0xb37e,	// (0x00098d9e) navi_slider_pane_g1

0xa66d,	// (0x0009808d) navi_slider_pane_g2

0x0006,

0xf401,	// (0x0009ce21) navi_slider_pane_g

0xb3a2,	// (0x00098dc2) aid_levels_zoom

0xb3aa,	// (0x00098dca) zooming_pane_g1

0xb3b2,	// (0x00098dd2) zooming_pane_g2

0xb3b2,	// (0x00098dd2) zooming_pane_g3

0x0002,

0xf410,	// (0x0009ce30) zooming_pane_g

0xb3ba,	// (0x00098dda) level_10_zoom

0xb3c3,	// (0x00098de3) level_11_zoom

0xb3cc,	// (0x00098dec) level_1_zoom

0xb3d5,	// (0x00098df5) level_2_zoom

0xb3de,	// (0x00098dfe) level_3_zoom

0xb3e7,	// (0x00098e07) level_4_zoom

0xb3f0,	// (0x00098e10) level_5_zoom

0xb3f9,	// (0x00098e19) level_6_zoom

0xb402,	// (0x00098e22) level_7_zoom

0xb40b,	// (0x00098e2b) level_8_zoom

0xb414,	// (0x00098e34) level_9_zoom

0xb425,	// (0x00098e45) popup_phob_thumbnail_window_g1

0xb42d,	// (0x00098e4d) popup_phob_thumbnail_window_g2

0x0001,

0xf417,	// (0x0009ce37) popup_phob_thumbnail_window_g

0xc736,	// (0x0009a156) level_1_location

0xc73e,	// (0x0009a15e) level_2_location

0xc746,	// (0x0009a166) level_3_location

0xc74e,	// (0x0009a16e) level_4_location

0xa389,	// (0x00097da9) level_5_location

0x32cd,	// (0x00090ced) mce_icon_pane_g1

0x32d7,	// (0x00090cf7) mce_icon_pane_g2

0x0001,

0xf41c,	// (0x0009ce3c) mce_icon_pane_g

0x32df,	// (0x00090cff) main_mup_pane_g1_ParamLimits

0x32df,	// (0x00090cff) main_mup_pane_g1

0x32f5,	// (0x00090d15) main_mup_pane_g2_ParamLimits

0x32f5,	// (0x00090d15) main_mup_pane_g2

0x330d,	// (0x00090d2d) main_mup_pane_g3_ParamLimits

0x330d,	// (0x00090d2d) main_mup_pane_g3

0x3325,	// (0x00090d45) main_mup_pane_g4_ParamLimits

0x3325,	// (0x00090d45) main_mup_pane_g4

0x333d,	// (0x00090d5d) main_mup_pane_g5_ParamLimits

0x333d,	// (0x00090d5d) main_mup_pane_g5

0x3359,	// (0x00090d79) main_mup_pane_g6_ParamLimits

0x3359,	// (0x00090d79) main_mup_pane_g6

0x3373,	// (0x00090d93) main_mup_pane_g7_ParamLimits

0x3373,	// (0x00090d93) main_mup_pane_g7

0x3391,	// (0x00090db1) main_mup_pane_g8_ParamLimits

0x3391,	// (0x00090db1) main_mup_pane_g8

0x33af,	// (0x00090dcf) main_mup_pane_g9_ParamLimits

0x33af,	// (0x00090dcf) main_mup_pane_g9

0x33cb,	// (0x00090deb) main_mup_pane_g10_ParamLimits

0x33cb,	// (0x00090deb) main_mup_pane_g10

0x33e9,	// (0x00090e09) main_mup_pane_g11_ParamLimits

0x33e9,	// (0x00090e09) main_mup_pane_g11

0x3403,	// (0x00090e23) main_mup_pane_g12_ParamLimits

0x3403,	// (0x00090e23) main_mup_pane_g12

0x3419,	// (0x00090e39) main_mup_pane_g13_ParamLimits

0x3419,	// (0x00090e39) main_mup_pane_g13

0x000c,

0xf421,	// (0x0009ce41) main_mup_pane_g_ParamLimits

0xf421,	// (0x0009ce41) main_mup_pane_g

0x342d,	// (0x00090e4d) main_mup_pane_t1_ParamLimits

0x342d,	// (0x00090e4d) main_mup_pane_t1

0x3449,	// (0x00090e69) main_mup_pane_t2_ParamLimits

0x3449,	// (0x00090e69) main_mup_pane_t2

0x3461,	// (0x00090e81) main_mup_pane_t3_ParamLimits

0x3461,	// (0x00090e81) main_mup_pane_t3

0x3479,	// (0x00090e99) main_mup_pane_t4_ParamLimits

0x3479,	// (0x00090e99) main_mup_pane_t4

0x3497,	// (0x00090eb7) main_mup_pane_t5_ParamLimits

0x3497,	// (0x00090eb7) main_mup_pane_t5

0x34ac,	// (0x00090ecc) main_mup_pane_t6_ParamLimits

0x34ac,	// (0x00090ecc) main_mup_pane_t6

0x0005,

0xf43c,	// (0x0009ce5c) main_mup_pane_t_ParamLimits

0xf43c,	// (0x0009ce5c) main_mup_pane_t

0x34be,	// (0x00090ede) mup_progress_pane_ParamLimits

0x34be,	// (0x00090ede) mup_progress_pane

0x34ca,	// (0x00090eea) mup_visualizer_pane_ParamLimits

0x34ca,	// (0x00090eea) mup_visualizer_pane

0x34fe,	// (0x00090f1e) mup_volume_pane_ParamLimits

0x34fe,	// (0x00090f1e) mup_volume_pane

0xb435,	// (0x00098e55) mup_visualizer_pane_g1_ParamLimits

0xb435,	// (0x00098e55) mup_visualizer_pane_g1

0xb435,	// (0x00098e55) mup_visualizer_pane_g2_ParamLimits

0xb435,	// (0x00098e55) mup_visualizer_pane_g2

0xb2b3,	// (0x00098cd3) mup_visualizer_pane_g3_ParamLimits

0xb2b3,	// (0x00098cd3) mup_visualizer_pane_g3

0x0002,

0xf449,	// (0x0009ce69) mup_visualizer_pane_g_ParamLimits

0xf449,	// (0x0009ce69) mup_visualizer_pane_g

0xa1d6,	// (0x00097bf6) mup_volume_pane_g1

0xb44b,	// (0x00098e6b) mup_volume_pane_g2

0x0001,

0xf450,	// (0x0009ce70) mup_volume_pane_g

0xa1d6,	// (0x00097bf6) mup_progress_pane_g1

0xb454,	// (0x00098e74) mup_progress_pane_g2

0xb45d,	// (0x00098e7d) mup_progress_pane_g3

0x0002,

0xf455,	// (0x0009ce75) mup_progress_pane_g

0x9e1b,	// (0x0009783b) bg_popup_window_pane_cp05

0xb466,	// (0x00098e86) heading_pane_cp02_ParamLimits

0xb466,	// (0x00098e86) heading_pane_cp02

0xb482,	// (0x00098ea2) list_popup_blid_pane

0xb48a,	// (0x00098eaa) list_blid_sat_info_pane_ParamLimits

0xb48a,	// (0x00098eaa) list_blid_sat_info_pane

0xb49d,	// (0x00098ebd) list_blid_sat_info_pane_g1

0xb4a5,	// (0x00098ec5) list_blid_sat_info_pane_t1

0x3628,	// (0x00091048) mup_equalizer_pane_ParamLimits

0x3628,	// (0x00091048) mup_equalizer_pane

0x3649,	// (0x00091069) mup_equalizer_pane_cp1_ParamLimits

0x3649,	// (0x00091069) mup_equalizer_pane_cp1

0x366a,	// (0x0009108a) mup_equalizer_pane_cp2_ParamLimits

0x366a,	// (0x0009108a) mup_equalizer_pane_cp2

0x368f,	// (0x000910af) mup_equalizer_pane_cp3_ParamLimits

0x368f,	// (0x000910af) mup_equalizer_pane_cp3

0x36b8,	// (0x000910d8) mup_equalizer_pane_cp4_ParamLimits

0x36b8,	// (0x000910d8) mup_equalizer_pane_cp4

0x36e1,	// (0x00091101) mup_equalizer_pane_cp5

0x36f9,	// (0x00091119) mup_equalizer_pane_cp6

0x3711,	// (0x00091131) mup_equalizer_pane_cp7

0xc650,	// (0x0009a070) bg_popup_call_poc_act_pane_g9

0xc658,	// (0x0009a078) bg_popup_call_poc_act_pane_g10

0xc660,	// (0x0009a080) bg_popup_call_poc_act_pane_g11

0x000a,

0xa076,	// (0x00097a96) mup_scale_pane

0xa1d6,	// (0x00097bf6) mup_scale_pane_g1

0xb4b3,	// (0x00098ed3) mup_scale_pane_g2

0x0006,

0xf471,	// (0x0009ce91) mup_scale_pane_g

0xb4d7,	// (0x00098ef7) msg_data_pane

0xb4df,	// (0x00098eff) scroll_pane_cp017

0xfd53,	// (0x0008d773) bg_list_pane_cp04_ParamLimits

0xfd53,	// (0x0008d773) bg_list_pane_cp04

0xb4e7,	// (0x00098f07) msg_data_pane_g1

0x3743,	// (0x00091163) msg_data_pane_g2

0x374d,	// (0x0009116d) msg_data_pane_g3

0x3757,	// (0x00091177) msg_data_pane_g4

0x375f,	// (0x0009117f) msg_data_pane_g5

0x3767,	// (0x00091187) msg_data_pane_g6

0x376f,	// (0x0009118f) msg_data_pane_g7

0x0006,

0xf480,	// (0x0009cea0) msg_data_pane_g

0xfd73,	// (0x0008d793) msg_text_pane_ParamLimits

0xfd73,	// (0x0008d793) msg_text_pane

0x3777,	// (0x00091197) qrid_highlight_pane_cp011_ParamLimits

0x3777,	// (0x00091197) qrid_highlight_pane_cp011

0x9e1b,	// (0x0009783b) msg_body_pane

0x9e1b,	// (0x0009783b) msg_header_pane

0xb4f8,	// (0x00098f18) input_focus_pane_cp07

0x378d,	// (0x000911ad) msg_header_pane_t1_ParamLimits

0x378d,	// (0x000911ad) msg_header_pane_t1

0x379f,	// (0x000911bf) msg_header_pane_t2_ParamLimits

0x379f,	// (0x000911bf) msg_header_pane_t2

0x0001,

0xf494,	// (0x0009ceb4) msg_header_pane_t_ParamLimits

0xf494,	// (0x0009ceb4) msg_header_pane_t

0xb50d,	// (0x00098f2d) msg_body_pane_g1

0xfda7,	// (0x0008d7c7) msg_body_pane_t1_ParamLimits

0xfda7,	// (0x0008d7c7) msg_body_pane_t1

0x37b1,	// (0x000911d1) msg_body_pane_t2_ParamLimits

0x37b1,	// (0x000911d1) msg_body_pane_t2

0x37c3,	// (0x000911e3) msg_body_pane_t3_ParamLimits

0x37c3,	// (0x000911e3) msg_body_pane_t3

0x0002,

0xf499,	// (0x0009ceb9) msg_body_pane_t_ParamLimits

0xf499,	// (0x0009ceb9) msg_body_pane_t

0x380f,	// (0x0009122f) main_viewer_pane_g1_ParamLimits

0x380f,	// (0x0009122f) main_viewer_pane_g1

0x381d,	// (0x0009123d) main_viewer_pane_g2_ParamLimits

0x381d,	// (0x0009123d) main_viewer_pane_g2

0x382b,	// (0x0009124b) main_viewer_pane_g3_ParamLimits

0x382b,	// (0x0009124b) main_viewer_pane_g3

0x383a,	// (0x0009125a) main_viewer_pane_g4_ParamLimits

0x383a,	// (0x0009125a) main_viewer_pane_g4

0xa697,	// (0x000980b7) main_viewer_pane_g5_ParamLimits

0xa697,	// (0x000980b7) main_viewer_pane_g5

0xa697,	// (0x000980b7) main_viewer_pane_g7_ParamLimits

0xa697,	// (0x000980b7) main_viewer_pane_g7

0xa6a9,	// (0x000980c9) main_viewer_pane_g8_ParamLimits

0xa6a9,	// (0x000980c9) main_viewer_pane_g8

0x0007,

0xf4a9,	// (0x0009cec9) main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0009cec9) main_viewer_pane_g

0xb515,	// (0x00098f35) viewer_content_pane_ParamLimits

0xb515,	// (0x00098f35) viewer_content_pane

0x3878,	// (0x00091298) main_postcard_pane_g1_ParamLimits

0x3878,	// (0x00091298) main_postcard_pane_g1

0x388e,	// (0x000912ae) main_postcard_pane_g2_ParamLimits

0x388e,	// (0x000912ae) main_postcard_pane_g2

0x38a4,	// (0x000912c4) main_postcard_pane_g3_ParamLimits

0x38a4,	// (0x000912c4) main_postcard_pane_g3

0x0005,

0xf4ba,	// (0x0009ceda) main_postcard_pane_g_ParamLimits

0xf4ba,	// (0x0009ceda) main_postcard_pane_g

0x38bb,	// (0x000912db) main_postcard_pane_g4

0xc879,	// (0x0009a299) smil_status_volume_pane_g2

0x38fe,	// (0x0009131e) postcard_pane_ParamLimits

0x38fe,	// (0x0009131e) postcard_pane

0xb523,	// (0x00098f43) postcard_pane_g1_ParamLimits

0xb523,	// (0x00098f43) postcard_pane_g1

0x394e,	// (0x0009136e) postcard_pane_g2_ParamLimits

0x394e,	// (0x0009136e) postcard_pane_g2

0x395a,	// (0x0009137a) postcard_pane_g3_ParamLimits

0x395a,	// (0x0009137a) postcard_pane_g3

0xb531,	// (0x00098f51) postcard_pane_g4_ParamLimits

0xb531,	// (0x00098f51) postcard_pane_g4

0x3966,	// (0x00091386) postcard_pane_g5_ParamLimits

0x3966,	// (0x00091386) postcard_pane_g5

0x397b,	// (0x0009139b) postcard_pane_g6_ParamLimits

0x397b,	// (0x0009139b) postcard_pane_g6

0xb523,	// (0x00098f43) postcard_pane_g7_ParamLimits

0xb523,	// (0x00098f43) postcard_pane_g7

0x0006,

0xf4c7,	// (0x0009cee7) postcard_pane_g_ParamLimits

0xf4c7,	// (0x0009cee7) postcard_pane_g

0x3993,	// (0x000913b3) main_mp2_pane_g1_ParamLimits

0x3993,	// (0x000913b3) main_mp2_pane_g1

0x39a1,	// (0x000913c1) main_mp2_pane_g2_ParamLimits

0x39a1,	// (0x000913c1) main_mp2_pane_g2

0x39ad,	// (0x000913cd) main_mp2_pane_g3_ParamLimits

0x39ad,	// (0x000913cd) main_mp2_pane_g3

0x0002,

0xf4d6,	// (0x0009cef6) main_mp2_pane_g_ParamLimits

0xf4d6,	// (0x0009cef6) main_mp2_pane_g

0x39b9,	// (0x000913d9) main_mp2_pane_t1_ParamLimits

0x39b9,	// (0x000913d9) main_mp2_pane_t1

0x39d0,	// (0x000913f0) main_mp2_pane_t2_ParamLimits

0x39d0,	// (0x000913f0) main_mp2_pane_t2

0x39e2,	// (0x00091402) main_mp2_pane_t3_ParamLimits

0x39e2,	// (0x00091402) main_mp2_pane_t3

0x0002,

0xf4dd,	// (0x0009cefd) main_mp2_pane_t_ParamLimits

0xf4dd,	// (0x0009cefd) main_mp2_pane_t

0xb53f,	// (0x00098f5f) pec_content_pane_ParamLimits

0xb53f,	// (0x00098f5f) pec_content_pane

0xa540,	// (0x00097f60) scroll_pane_cp015

0xb551,	// (0x00098f71) pec_attribute_pane_ParamLimits

0xb551,	// (0x00098f71) pec_attribute_pane

0x39f4,	// (0x00091414) pec_content_pane_g1_ParamLimits

0x39f4,	// (0x00091414) pec_content_pane_g1

0xb561,	// (0x00098f81) pec_content_pane_t1_ParamLimits

0xb561,	// (0x00098f81) pec_content_pane_t1

0xb573,	// (0x00098f93) pec_content_pane_t2_ParamLimits

0xb573,	// (0x00098f93) pec_content_pane_t2

0x0001,

0xf4e4,	// (0x0009cf04) pec_content_pane_t_ParamLimits

0xf4e4,	// (0x0009cf04) pec_content_pane_t

0x3a00,	// (0x00091420) list_single_graphic_pane_cp01_ParamLimits

0x3a00,	// (0x00091420) list_single_graphic_pane_cp01

0xa076,	// (0x00097a96) bg_popup_sub_pane_cp04

0xb585,	// (0x00098fa5) popup_mup_playback_window_g1

0xb591,	// (0x00098fb1) popup_mup_playback_window_t1

0xb5a6,	// (0x00098fc6) popup_mup_playback_window_t2

0x0001,

0xf4e9,	// (0x0009cf09) popup_mup_playback_window_t

0xb5dd,	// (0x00098ffd) main_image_pane_g1_ParamLimits

0xb5dd,	// (0x00098ffd) main_image_pane_g1

0xb620,	// (0x00099040) scroll_pane_cp018_ParamLimits

0xb620,	// (0x00099040) scroll_pane_cp018

0xb638,	// (0x00099058) scroll_pane_cp016_ParamLimits

0xb638,	// (0x00099058) scroll_pane_cp016

0x3acf,	// (0x000914ef) smil2_image_pane_ParamLimits

0x3acf,	// (0x000914ef) smil2_image_pane

0x3b05,	// (0x00091525) smil2_root_pane_ParamLimits

0x3b05,	// (0x00091525) smil2_root_pane

0x3b3d,	// (0x0009155d) smil2_text_pane_ParamLimits

0x3b3d,	// (0x0009155d) smil2_text_pane

0x9e1b,	// (0x0009783b) bg_list_pane_cp06

0xb674,	// (0x00099094) grid_radio_pane

0x9e1b,	// (0x0009783b) bg_popup_window_pane_cp06

0xb67e,	// (0x0009909e) main_fmradio_pane_t1

0xb130,	// (0x00098b50) heading_pane_cp04

0xb68c,	// (0x000990ac) main_fmradio_pane_t2

0xc668,	// (0x0009a088) popup_cale_lunar_info_window_g1

0xb69a,	// (0x000990ba) main_fmradio_pane_t3

0xc670,	// (0x0009a090) popup_cale_lunar_info_window_g2

0xb6aa,	// (0x000990ca) main_fmradio_pane_t4

0x0001,

0xb6b8,	// (0x000990d8) main_fmradio_pane_t5

0x0004,

0xf5c4,	// (0x0009cfe4) popup_cale_lunar_info_window_g

0xf4fe,	// (0x0009cf1e) main_fmradio_pane_t

0xb6c6,	// (0x000990e6) wait_bar_pane_cp03

0xb6ce,	// (0x000990ee) cell_fmradio_pane_ParamLimits

0xb6ce,	// (0x000990ee) cell_fmradio_pane

0xb523,	// (0x00098f43) cell_fmradio_pane_g1_ParamLimits

0xb523,	// (0x00098f43) cell_fmradio_pane_g1

0x9e1b,	// (0x0009783b) grid_highlight_pane_cp011

0xb6e3,	// (0x00099103) poc_content_pane_ParamLimits

0xb6e3,	// (0x00099103) poc_content_pane

0xb6f5,	// (0x00099115) scroll_pane_cp019

0x3bcd,	// (0x000915ed) popup_call_poc_act_window_ParamLimits

0x3bcd,	// (0x000915ed) popup_call_poc_act_window

0x3bf1,	// (0x00091611) popup_call_poc_inact_window_ParamLimits

0x3bf1,	// (0x00091611) popup_call_poc_inact_window

0xf59b,	// (0x0009cfbb) bg_popup_call_poc_act_pane_g

0xc5e0,	// (0x0009a000) bg_popup_call_poc_inact_pane_g1

0xc5e8,	// (0x0009a008) bg_popup_call_poc_inact_pane_g2

0xb6fd,	// (0x0009911d) popup_call_poc_act_window_g2

0xc5f0,	// (0x0009a010) bg_popup_call_poc_inact_pane_g3

0xc5f8,	// (0x0009a018) bg_popup_call_poc_inact_pane_g4

0xc600,	// (0x0009a020) bg_popup_call_poc_inact_pane_g5

0xb705,	// (0x00099125) popup_call_poc_act_window_t1_ParamLimits

0xb705,	// (0x00099125) popup_call_poc_act_window_t1

0xb72d,	// (0x0009914d) popup_call_poc_act_window_t2_ParamLimits

0xb72d,	// (0x0009914d) popup_call_poc_act_window_t2

0xb755,	// (0x00099175) popup_call_poc_act_window_t3_ParamLimits

0xb755,	// (0x00099175) popup_call_poc_act_window_t3

0xb77d,	// (0x0009919d) popup_call_poc_act_window_t4_ParamLimits

0xb77d,	// (0x0009919d) popup_call_poc_act_window_t4

0x0003,

0xf509,	// (0x0009cf29) popup_call_poc_act_window_t_ParamLimits

0xf509,	// (0x0009cf29) popup_call_poc_act_window_t

0xc608,	// (0x0009a028) bg_popup_call_poc_inact_pane_g6

0xc610,	// (0x0009a030) bg_popup_call_poc_inact_pane_g7

0xc618,	// (0x0009a038) bg_popup_call_poc_inact_pane_g8

0xb78f,	// (0x000991af) popup_call_poc_inact_window_g2

0xc620,	// (0x0009a040) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf588,	// (0x0009cfa8) bg_popup_call_poc_inact_pane_g

0xb797,	// (0x000991b7) popup_call_poc_inact_window_t1_ParamLimits

0xb797,	// (0x000991b7) popup_call_poc_inact_window_t1

0xb7ac,	// (0x000991cc) popup_call_poc_inact_window_t2_ParamLimits

0xb7ac,	// (0x000991cc) popup_call_poc_inact_window_t2

0xb7c1,	// (0x000991e1) popup_call_poc_inact_window_t3_ParamLimits

0xb7c1,	// (0x000991e1) popup_call_poc_inact_window_t3

0x0002,

0xf512,	// (0x0009cf32) popup_call_poc_inact_window_t_ParamLimits

0xf512,	// (0x0009cf32) popup_call_poc_inact_window_t

0xc7ec,	// (0x0009a20c) context_pane_ParamLimits

0x4499,	// (0x00091eb9) signal_pane_ParamLimits

0xa389,	// (0x00097da9) main_call2_pane

0xc7da,	// (0x0009a1fa) popup_phob_thumbnail2_window_ParamLimits

0xc7da,	// (0x0009a1fa) popup_phob_thumbnail2_window

0xa67f,	// (0x0009809f) aid_hotspot_pointer_arrow_pane

0xa687,	// (0x000980a7) aid_hotspot_pointer_hand_pane

0x3f59,	// (0x00091979) phob_pre_status_pane_g5

0x19d3,	// (0x0008f3f3) cams_zoom_pane_ParamLimits

0x19e2,	// (0x0008f402) image_vga_pane_ParamLimits

0x19fc,	// (0x0008f41c) main_camera_pane_g1_ParamLimits

0x1a0e,	// (0x0008f42e) main_camera_pane_g2_ParamLimits

0x1a1e,	// (0x0008f43e) main_camera_pane_g3_ParamLimits

0x1a32,	// (0x0008f452) main_camera_pane_g4_ParamLimits

0x1a46,	// (0x0008f466) main_camera_pane_g5_ParamLimits

0x1a5a,	// (0x0008f47a) main_camera_pane_g6_ParamLimits

0x1a6e,	// (0x0008f48e) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0009cc2a) main_camera_pane_g_ParamLimits

0x1a82,	// (0x0008f4a2) main_camera_pane_t1_ParamLimits

0x1a98,	// (0x0008f4b8) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0009cc3b) main_camera_pane_t_ParamLimits

0xa076,	// (0x00097a96) bg_popup_preview_window_pane_cp01_ParamLimits

0xa076,	// (0x00097a96) bg_popup_preview_window_pane_cp01

0xb7d6,	// (0x000991f6) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7d6,	// (0x000991f6) popup_phob_thumbnail2_window_g1

0x9e1b,	// (0x0009783b) call2_cli_visual_pane

0x3c25,	// (0x00091645) popup_call2_audio_conf_window_ParamLimits

0x3c25,	// (0x00091645) popup_call2_audio_conf_window

0x3c4d,	// (0x0009166d) popup_call2_audio_first_window_ParamLimits

0x3c4d,	// (0x0009166d) popup_call2_audio_first_window

0x3ce3,	// (0x00091703) popup_call2_audio_in_window_ParamLimits

0x3ce3,	// (0x00091703) popup_call2_audio_in_window

0x3d2f,	// (0x0009174f) popup_call2_audio_out_window_ParamLimits

0x3d2f,	// (0x0009174f) popup_call2_audio_out_window

0x3da1,	// (0x000917c1) popup_call2_audio_second_window_ParamLimits

0x3da1,	// (0x000917c1) popup_call2_audio_second_window

0x3e07,	// (0x00091827) popup_call2_audio_wait_window_ParamLimits

0x3e07,	// (0x00091827) popup_call2_audio_wait_window

0x9e1b,	// (0x0009783b) bg_popup_call2_act_pane_cp03

0xa058,	// (0x00097a78) list_conf_pane_cp

0xb7e2,	// (0x00099202) popup_call2_audio_conf_window_t1

0xb7f0,	// (0x00099210) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7f0,	// (0x00099210) list_single_graphic_popup_conf2_pane

0xb19f,	// (0x00098bbf) list_highlight_pane_cp04

0xb803,	// (0x00099223) list_single_graphic_popup_conf2_pane_g1

0xb1b0,	// (0x00098bd0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf519,	// (0x0009cf39) list_single_graphic_popup_conf2_pane_g

0xb80d,	// (0x0009922d) list_single_graphic_popup_conf2_pane_t1

0xb81b,	// (0x0009923b) bg_popup_call2_act_pane_cp01_ParamLimits

0xb81b,	// (0x0009923b) bg_popup_call2_act_pane_cp01

0xb8a5,	// (0x000992c5) call_type_pane_cp05_ParamLimits

0xb8a5,	// (0x000992c5) call_type_pane_cp05

0xb8f9,	// (0x00099319) popup_call2_audio_second_window_g1_ParamLimits

0xb8f9,	// (0x00099319) popup_call2_audio_second_window_g1

0xb94d,	// (0x0009936d) popup_call2_audio_second_window_g2_ParamLimits

0xb94d,	// (0x0009936d) popup_call2_audio_second_window_g2

0x0002,

0xf51e,	// (0x0009cf3e) popup_call2_audio_second_window_g_ParamLimits

0xf51e,	// (0x0009cf3e) popup_call2_audio_second_window_g

0xb9b2,	// (0x000993d2) popup_call2_audio_second_window_t1_ParamLimits

0xb9b2,	// (0x000993d2) popup_call2_audio_second_window_t1

0xba6d,	// (0x0009948d) popup_call2_audio_second_window_t2_ParamLimits

0xba6d,	// (0x0009948d) popup_call2_audio_second_window_t2

0xbac0,	// (0x000994e0) popup_call2_audio_second_window_t3_ParamLimits

0xbac0,	// (0x000994e0) popup_call2_audio_second_window_t3

0x0003,

0xf525,	// (0x0009cf45) popup_call2_audio_second_window_t_ParamLimits

0xf525,	// (0x0009cf45) popup_call2_audio_second_window_t

0x9e1b,	// (0x0009783b) bg_popup_call2_in_pane_cp02

0x9e25,	// (0x00097845) call_type_pane_cp04

0x9e2d,	// (0x0009784d) popup_call2_audio_wait_window_g1

0x9e35,	// (0x00097855) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009cb19) popup_call2_audio_wait_window_g

0x9e3d,	// (0x0009785d) popup_call2_audio_wait_window_t3

0xbbb3,	// (0x000995d3) bg_popup_call2_act_pane_ParamLimits

0xbbb3,	// (0x000995d3) bg_popup_call2_act_pane

0xbc73,	// (0x00099693) call_type_pane_cp03_ParamLimits

0xbc73,	// (0x00099693) call_type_pane_cp03

0xbcd7,	// (0x000996f7) popup_call2_audio_first_window_g1_ParamLimits

0xbcd7,	// (0x000996f7) popup_call2_audio_first_window_g1

0xbd47,	// (0x00099767) popup_call2_audio_first_window_g2_ParamLimits

0xbd47,	// (0x00099767) popup_call2_audio_first_window_g2

0xb435,	// (0x00098e55) popup_call2_audio_first_window_g3_ParamLimits

0xb435,	// (0x00098e55) popup_call2_audio_first_window_g3

0x0004,

0xf52e,	// (0x0009cf4e) popup_call2_audio_first_window_g_ParamLimits

0xf52e,	// (0x0009cf4e) popup_call2_audio_first_window_g

0xbe25,	// (0x00099845) popup_call2_audio_first_window_t1_ParamLimits

0xbe25,	// (0x00099845) popup_call2_audio_first_window_t1

0xbf28,	// (0x00099948) popup_call2_audio_first_window_t4_ParamLimits

0xbf28,	// (0x00099948) popup_call2_audio_first_window_t4

0xc00b,	// (0x00099a2b) popup_call2_audio_first_window_t5_ParamLimits

0xc00b,	// (0x00099a2b) popup_call2_audio_first_window_t5

0x0003,

0xf539,	// (0x0009cf59) popup_call2_audio_first_window_t_ParamLimits

0xf539,	// (0x0009cf59) popup_call2_audio_first_window_t

0xa06e,	// (0x00097a8e) bg_popup_call2_act_pane_g1

0xc67a,	// (0x0009a09a) popup_cale_lunar_info_window_t1

0xc688,	// (0x0009a0a8) popup_cale_lunar_info_window_t2

0xc696,	// (0x0009a0b6) popup_cale_lunar_info_window_t3

0x9e1b,	// (0x0009783b) bg_popup_call2_bubble_pane

0xc10c,	// (0x00099b2c) bg_popup_call2_in_pane_cp01_ParamLimits

0xc10c,	// (0x00099b2c) bg_popup_call2_in_pane_cp01

0x9af7,	// (0x00097517) call_type_pane_cp02

0xc154,	// (0x00099b74) popup_call2_audio_out_window_g1_ParamLimits

0xc154,	// (0x00099b74) popup_call2_audio_out_window_g1

0xc180,	// (0x00099ba0) popup_call2_audio_out_window_g2_ParamLimits

0xc180,	// (0x00099ba0) popup_call2_audio_out_window_g2

0xc1a8,	// (0x00099bc8) popup_call2_audio_out_window_g3_ParamLimits

0xc1a8,	// (0x00099bc8) popup_call2_audio_out_window_g3

0x0003,

0xf542,	// (0x0009cf62) popup_call2_audio_out_window_g_ParamLimits

0xf542,	// (0x0009cf62) popup_call2_audio_out_window_g

0xc1e3,	// (0x00099c03) popup_call2_audio_out_window_t1_ParamLimits

0xc1e3,	// (0x00099c03) popup_call2_audio_out_window_t1

0xc242,	// (0x00099c62) popup_call2_audio_out_window_t2_ParamLimits

0xc242,	// (0x00099c62) popup_call2_audio_out_window_t2

0xc296,	// (0x00099cb6) popup_call2_audio_out_window_t3_ParamLimits

0xc296,	// (0x00099cb6) popup_call2_audio_out_window_t3

0xc2ac,	// (0x00099ccc) popup_call2_audio_out_window_t4_ParamLimits

0xc2ac,	// (0x00099ccc) popup_call2_audio_out_window_t4

0xc2c2,	// (0x00099ce2) popup_call2_audio_out_window_t5_ParamLimits

0xc2c2,	// (0x00099ce2) popup_call2_audio_out_window_t5

0x0005,

0xf54b,	// (0x0009cf6b) popup_call2_audio_out_window_t_ParamLimits

0xf54b,	// (0x0009cf6b) popup_call2_audio_out_window_t

0xc326,	// (0x00099d46) bg_popup_call2_in_pane_ParamLimits

0xc326,	// (0x00099d46) bg_popup_call2_in_pane

0xc382,	// (0x00099da2) popup_call2_audio_in_window_g1_ParamLimits

0xc382,	// (0x00099da2) popup_call2_audio_in_window_g1

0xc3ba,	// (0x00099dda) popup_call2_audio_in_window_g2_ParamLimits

0xc3ba,	// (0x00099dda) popup_call2_audio_in_window_g2

0xc3f2,	// (0x00099e12) popup_call2_audio_in_window_g3_ParamLimits

0xc3f2,	// (0x00099e12) popup_call2_audio_in_window_g3

0x0003,

0xf558,	// (0x0009cf78) popup_call2_audio_in_window_g_ParamLimits

0xf558,	// (0x0009cf78) popup_call2_audio_in_window_g

0xc44a,	// (0x00099e6a) popup_call2_audio_in_window_t1_ParamLimits

0xc44a,	// (0x00099e6a) popup_call2_audio_in_window_t1

0xc4ca,	// (0x00099eea) popup_call2_audio_in_window_t2_ParamLimits

0xc4ca,	// (0x00099eea) popup_call2_audio_in_window_t2

0xc54a,	// (0x00099f6a) popup_call2_audio_in_window_t3_ParamLimits

0xc54a,	// (0x00099f6a) popup_call2_audio_in_window_t3

0xc564,	// (0x00099f84) popup_call2_audio_in_window_t4_ParamLimits

0xc564,	// (0x00099f84) popup_call2_audio_in_window_t4

0xc576,	// (0x00099f96) popup_call2_audio_in_window_t5_ParamLimits

0xc576,	// (0x00099f96) popup_call2_audio_in_window_t5

0xc58b,	// (0x00099fab) popup_call2_audio_in_window_t6_ParamLimits

0xc58b,	// (0x00099fab) popup_call2_audio_in_window_t6

0x0005,

0xf561,	// (0x0009cf81) popup_call2_audio_in_window_t_ParamLimits

0xf561,	// (0x0009cf81) popup_call2_audio_in_window_t

0xa06e,	// (0x00097a8e) bg_popup_call2_in_pane_g1

0xc6a4,	// (0x0009a0c4) popup_cale_lunar_info_window_t4

0x0003,

0xf5c9,	// (0x0009cfe9) popup_cale_lunar_info_window_t

0xa076,	// (0x00097a96) bg_popup_call2_rect_pane_ParamLimits

0xa076,	// (0x00097a96) bg_popup_call2_rect_pane

0x9e1b,	// (0x0009783b) call2_cli_visual_graphic_pane

0x9e1b,	// (0x0009783b) call2_cli_visual_text_pane

0xa6c1,	// (0x000980e1) smil_status_volume_pane_g3

0x0002,

0xa1d6,	// (0x00097bf6) call2_cli_visual_graphic_pane_g1

0xa1d6,	// (0x00097bf6) call2_cli_visual_graphic_pane_g2

0xa1d6,	// (0x00097bf6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56e,	// (0x0009cf8e) call2_cli_visual_graphic_pane_g

0xc5a0,	// (0x00099fc0) bg_popup_call2_rect_pane_g1

0xa27e,	// (0x00097c9e) bg_popup_call2_rect_pane_g2

0xc5a8,	// (0x00099fc8) bg_popup_call2_rect_pane_g3

0xc5b0,	// (0x00099fd0) bg_popup_call2_rect_pane_g4

0xc5b8,	// (0x00099fd8) bg_popup_call2_rect_pane_g5

0xc5c0,	// (0x00099fe0) bg_popup_call2_rect_pane_g6

0xc5c8,	// (0x00099fe8) bg_popup_call2_rect_pane_g7

0xc5d0,	// (0x00099ff0) bg_popup_call2_rect_pane_g8

0xc5d8,	// (0x00099ff8) bg_popup_call2_rect_pane_g9

0x0008,

0xf575,	// (0x0009cf95) bg_popup_call2_rect_pane_g

0xc5e0,	// (0x0009a000) bg_popup_call2_bubble_pane_g1

0xc5e8,	// (0x0009a008) bg_popup_call2_bubble_pane_g2

0xc5f0,	// (0x0009a010) bg_popup_call2_bubble_pane_g3

0xc5f8,	// (0x0009a018) bg_popup_call2_bubble_pane_g4

0xc600,	// (0x0009a020) bg_popup_call2_bubble_pane_g5

0xc608,	// (0x0009a028) bg_popup_call2_bubble_pane_g6

0xc610,	// (0x0009a030) bg_popup_call2_bubble_pane_g7

0xc618,	// (0x0009a038) bg_popup_call2_bubble_pane_g8

0xc620,	// (0x0009a040) bg_popup_call2_bubble_pane_g9

0x0008,

0xf588,	// (0x0009cfa8) bg_popup_call2_bubble_pane_g

0x114d,	// (0x0008eb6d) aid_cale_week_size_cell_pane

0x1ab2,	// (0x0008f4d2) aid_cams_cif_uncrop_pane_ParamLimits

0x1ab2,	// (0x0008f4d2) aid_cams_cif_uncrop_pane

0x1c6b,	// (0x0008f68b) aid_cams_size_cell_ParamLimits

0x1c6b,	// (0x0008f68b) aid_cams_size_cell

0x1c7f,	// (0x0008f69f) grid_cams_pane_ParamLimits

0x1c99,	// (0x0008f6b9) linegrid_cams_pane_ParamLimits

0x1d75,	// (0x0008f795) call_video_pane_t1

0x1d8f,	// (0x0008f7af) call_video_pane_t2

0x0001,

0xf26e,	// (0x0009cc8e) call_video_pane_t

0x21c3,	// (0x0008fbe3) aid_cale_month_size_cell_pane_ParamLimits

0x21c3,	// (0x0008fbe3) aid_cale_month_size_cell_pane

0xf612,	// (0x0009d032) smil_status_volume_pane_g

0xa6ce,	// (0x000980ee) volume_smil_pane_ParamLimits

0x99bb,	// (0x000973db) aid_popup2_width_pane

0x10ab,	// (0x0008eacb) cell_qdial_pane_g4_ParamLimits

0x10ab,	// (0x0008eacb) cell_qdial_pane_g4

0x310e,	// (0x00090b2e) aid_blid_cardinal_pane_ParamLimits

0x311a,	// (0x00090b3a) aid_blid_destination_pane_ParamLimits

0x311a,	// (0x00090b3a) aid_blid_destination_pane

0xa076,	// (0x00097a96) bg_popup_call_poc_act_pane_ParamLimits

0xa076,	// (0x00097a96) bg_popup_call_poc_act_pane

0xa076,	// (0x00097a96) bg_popup_call_poc_inact_pane_ParamLimits

0xa076,	// (0x00097a96) bg_popup_call_poc_inact_pane

0xc628,	// (0x0009a048) bg_popup_call_poc_act_pane_g1

0xc630,	// (0x0009a050) bg_popup_call_poc_act_pane_g2

0xc638,	// (0x0009a058) bg_popup_call_poc_act_pane_g3

0xc5f8,	// (0x0009a018) bg_popup_call_poc_act_pane_g4

0xc600,	// (0x0009a020) bg_popup_call_poc_act_pane_g5

0xc640,	// (0x0009a060) bg_popup_call_poc_act_pane_g6

0xc610,	// (0x0009a030) bg_popup_call_poc_act_pane_g7

0xc648,	// (0x0009a068) bg_popup_call_poc_act_pane_g8

0x9e1b,	// (0x0009783b) main_usb_pane

0xc7b1,	// (0x0009a1d1) popup_cale_lunar_info_window

0x2058,	// (0x0008fa78) im_reading_pane_t1_ParamLimits

0xa498,	// (0x00097eb8) list_im_pane_ParamLimits

0xa4a9,	// (0x00097ec9) scroll_pane_cp07_ParamLimits

0x9e1b,	// (0x0009783b) grid_highlight_pane_cp012

0xa076,	// (0x00097a96) mup_scale_pane_ParamLimits

0xb523,	// (0x00098f43) main_usb_pane_g1_ParamLimits

0xb523,	// (0x00098f43) main_usb_pane_g1

0x3e65,	// (0x00091885) main_usb_pane_g2_ParamLimits

0x3e65,	// (0x00091885) main_usb_pane_g2

0x0001,

0xf5b2,	// (0x0009cfd2) main_usb_pane_g_ParamLimits

0xf5b2,	// (0x0009cfd2) main_usb_pane_g

0x3e7b,	// (0x0009189b) main_usb_pane_t1_ParamLimits

0x3e7b,	// (0x0009189b) main_usb_pane_t1

0x3e8d,	// (0x000918ad) main_usb_pane_t2_ParamLimits

0x3e8d,	// (0x000918ad) main_usb_pane_t2

0x3e9f,	// (0x000918bf) main_usb_pane_t3_ParamLimits

0x3e9f,	// (0x000918bf) main_usb_pane_t3

0x3eb1,	// (0x000918d1) main_usb_pane_t4_ParamLimits

0x3eb1,	// (0x000918d1) main_usb_pane_t4

0x3ec6,	// (0x000918e6) main_usb_pane_t5_ParamLimits

0x3ec6,	// (0x000918e6) main_usb_pane_t5

0x3edb,	// (0x000918fb) main_usb_pane_t6_ParamLimits

0x3edb,	// (0x000918fb) main_usb_pane_t6

0x0005,

0xf5b7,	// (0x0009cfd7) main_usb_pane_t_ParamLimits

0x30af,	// (0x00090acf) aid_text_placing

0x30ba,	// (0x00090ada) main_location2_pane_t1_ParamLimits

0x30ce,	// (0x00090aee) main_location2_pane_t2_ParamLimits

0x30e4,	// (0x00090b04) main_location2_pane_t3_ParamLimits

0x30fa,	// (0x00090b1a) main_location2_pane_t4_ParamLimits

0x30fa,	// (0x00090b1a) main_location2_pane_t4

0xf3d6,	// (0x0009cdf6) main_location2_pane_t_ParamLimits

0xa0b2,	// (0x00097ad2) find_pinb_pane_g2_ParamLimits

0xa0b2,	// (0x00097ad2) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0009cb3f) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0009cb3f) find_pinb_pane_g

0xa0be,	// (0x00097ade) find_pinb_pane_t1_ParamLimits

0xa0d0,	// (0x00097af0) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0009cb44) find_pinb_pane_t_ParamLimits

0x9e1b,	// (0x0009783b) main_call3_pane

0x2792,	// (0x000901b2) cale_month_day_heading_pane_t1_ParamLimits

0x2818,	// (0x00090238) cale_month_day_heading_pane_t2_ParamLimits

0x28a9,	// (0x000902c9) cale_month_day_heading_pane_t3_ParamLimits

0x293a,	// (0x0009035a) cale_month_day_heading_pane_t4_ParamLimits

0x29cb,	// (0x000903eb) cale_month_day_heading_pane_t5_ParamLimits

0x2a6c,	// (0x0009048c) cale_month_day_heading_pane_t6_ParamLimits

0x2b11,	// (0x00090531) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0009ccc6) cale_month_day_heading_pane_t_ParamLimits

0x2dc3,	// (0x000907e3) smil_status_volume_pane

0x3922,	// (0x00091342) postcard_address_pane_ParamLimits

0x3922,	// (0x00091342) postcard_address_pane

0x3938,	// (0x00091358) postcard_message_pane_ParamLimits

0x3938,	// (0x00091358) postcard_message_pane

0x3e41,	// (0x00091861) call2_cli_visual_pane_t1_ParamLimits

0x3e41,	// (0x00091861) call2_cli_visual_pane_t1

0x46ce,	// (0x000920ee) postcard_message_pane_t1_ParamLimits

0x46ce,	// (0x000920ee) postcard_message_pane_t1

0x46b7,	// (0x000920d7) postcard_address_pane_t1_ParamLimits

0x46b7,	// (0x000920d7) postcard_address_pane_t1

0x46a3,	// (0x000920c3) popup_call3_audio_in_window_ParamLimits

0x46a3,	// (0x000920c3) popup_call3_audio_in_window

0x4528,	// (0x00091f48) bg_popup_call3_in_pane_ParamLimits

0x4528,	// (0x00091f48) bg_popup_call3_in_pane

0x45a4,	// (0x00091fc4) popup_call3_audio_in_window_g1_ParamLimits

0x45a4,	// (0x00091fc4) popup_call3_audio_in_window_g1

0x45c4,	// (0x00091fe4) popup_call3_audio_in_window_g2_ParamLimits

0x45c4,	// (0x00091fe4) popup_call3_audio_in_window_g2

0x45e4,	// (0x00092004) popup_call3_audio_in_window_g3_ParamLimits

0x45e4,	// (0x00092004) popup_call3_audio_in_window_g3

0x0003,

0xf619,	// (0x0009d039) popup_call3_audio_in_window_g_ParamLimits

0xf619,	// (0x0009d039) popup_call3_audio_in_window_g

0x4615,	// (0x00092035) popup_call3_audio_in_window_t1_ParamLimits

0x4615,	// (0x00092035) popup_call3_audio_in_window_t1

0x4653,	// (0x00092073) popup_call3_audio_in_window_t2_ParamLimits

0x4653,	// (0x00092073) popup_call3_audio_in_window_t2

0x4691,	// (0x000920b1) popup_call3_audio_in_window_t3_ParamLimits

0x4691,	// (0x000920b1) popup_call3_audio_in_window_t3

0x0002,

0xf622,	// (0x0009d042) popup_call3_audio_in_window_t_ParamLimits

0xf622,	// (0x0009d042) popup_call3_audio_in_window_t

0xa389,	// (0x00097da9) bg_popup_call3_rect_pane

0xc5a0,	// (0x00099fc0) bg_popup_call3_rect_pane_g1

0xa27e,	// (0x00097c9e) bg_popup_call3_rect_pane_g2

0xc5a8,	// (0x00099fc8) bg_popup_call3_rect_pane_g3

0xc5b0,	// (0x00099fd0) bg_popup_call3_rect_pane_g4

0xc5b8,	// (0x00099fd8) bg_popup_call3_rect_pane_g5

0xc5c0,	// (0x00099fe0) bg_popup_call3_rect_pane_g6

0xc5c8,	// (0x00099fe8) bg_popup_call3_rect_pane_g7

0x3514,	// (0x00090f34) mup_visualizer_osc_pane

0xb443,	// (0x00098e63) mup_visualizer_spec_pane

0x4558,	// (0x00091f78) call3_video_qcif_pane_ParamLimits

0x4558,	// (0x00091f78) call3_video_qcif_pane

0x456b,	// (0x00091f8b) call3_video_qcif_uncrop_pane_ParamLimits

0x456b,	// (0x00091f8b) call3_video_qcif_uncrop_pane

0x457b,	// (0x00091f9b) call3_video_subqcif_pane_ParamLimits

0x457b,	// (0x00091f9b) call3_video_subqcif_pane

0x4591,	// (0x00091fb1) call3_video_subqcif_uncrop_pane_ParamLimits

0x4591,	// (0x00091fb1) call3_video_subqcif_uncrop_pane

0x4604,	// (0x00092024) popup_call3_audio_in_window_g4_ParamLimits

0x4604,	// (0x00092024) popup_call3_audio_in_window_g4

0x4517,	// (0x00091f37) mup_spec_half_pane

0x4520,	// (0x00091f40) mup_spec_half_pane_cp

0xc84c,	// (0x0009a26c) mup_osc_middle_pane

0xc855,	// (0x0009a275) mup_visualizer_osc_pane_g1

0x44f7,	// (0x00091f17) mup_spec_bar_pane_ParamLimits

0x44f7,	// (0x00091f17) mup_spec_bar_pane

0xc839,	// (0x0009a259) mup_spec_bar_pane_g1

0xc843,	// (0x0009a263) mup_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0009d02d) mup_spec_bar_pane_g

0x114d,	// (0x0008eb6d) aid_cale_week_size_cell_pane_ParamLimits

0x1167,	// (0x0008eb87) bg_cale_heading_pane_ParamLimits

0x1190,	// (0x0008ebb0) bg_cale_pane_cp01_ParamLimits

0x11b2,	// (0x0008ebd2) cale_week_corner_pane_ParamLimits

0x11d1,	// (0x0008ebf1) cale_week_day_heading_pane_ParamLimits

0x11ff,	// (0x0008ec1f) cale_week_scroll_pane_g1_ParamLimits

0x1223,	// (0x0008ec43) cale_week_scroll_pane_g2_ParamLimits

0x123b,	// (0x0008ec5b) cale_week_scroll_pane_g3_ParamLimits

0x1253,	// (0x0008ec73) cale_week_scroll_pane_g4_ParamLimits

0x126f,	// (0x0008ec8f) cale_week_scroll_pane_g5_ParamLimits

0x128f,	// (0x0008ecaf) cale_week_scroll_pane_g6_ParamLimits

0x12af,	// (0x0008eccf) cale_week_scroll_pane_g7_ParamLimits

0x12d3,	// (0x0008ecf3) cale_week_scroll_pane_g8_ParamLimits

0x12f7,	// (0x0008ed17) cale_week_scroll_pane_g9_ParamLimits

0x1314,	// (0x0008ed34) cale_week_scroll_pane_g10_ParamLimits

0x1331,	// (0x0008ed51) cale_week_scroll_pane_g11_ParamLimits

0x134e,	// (0x0008ed6e) cale_week_scroll_pane_g12_ParamLimits

0x136b,	// (0x0008ed8b) cale_week_scroll_pane_g13_ParamLimits

0x1388,	// (0x0008eda8) cale_week_scroll_pane_g14_ParamLimits

0x13b1,	// (0x0008edd1) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0009cbd0) cale_week_scroll_pane_g_ParamLimits

0x13fe,	// (0x0008ee1e) cale_week_time_pane_ParamLimits

0x1422,	// (0x0008ee42) grid_cale_week_pane_ParamLimits

0xa2fa,	// (0x00097d1a) listscroll_cale_week_pane_t1

0xa30c,	// (0x00097d2c) scroll_pane_cp08_ParamLimits

0x2230,	// (0x0008fc50) cale_month_corner_pane_ParamLimits

0xad7e,	// (0x0009879e) cale_month_pane_t1

0x2718,	// (0x00090138) cale_month_week_pane_ParamLimits

0x2edd,	// (0x000908fd) popup_call_status_window_g1_ParamLimits

0x2ef1,	// (0x00090911) popup_call_status_window_g2_ParamLimits

0x2f05,	// (0x00090925) popup_call_status_window_g3_ParamLimits

0xf35d,	// (0x0009cd7d) popup_call_status_window_g_ParamLimits

0xb120,	// (0x00098b40) aid_call2_pane

0xfd99,	// (0x0008d7b9) msg_header_pane_g1

0x3922,	// (0x00091342) postcard_address2_pane_ParamLimits

0x3922,	// (0x00091342) postcard_address2_pane

0x3938,	// (0x00091358) postcard_message2_pane_ParamLimits

0x3938,	// (0x00091358) postcard_message2_pane

0x44a7,	// (0x00091ec7) message2_row_pane_ParamLimits

0x44a7,	// (0x00091ec7) message2_row_pane

0x44c4,	// (0x00091ee4) address2_row_pane_ParamLimits

0x44c4,	// (0x00091ee4) address2_row_pane

0xc807,	// (0x0009a227) postcard_message2_row_pane_g1

0xc80f,	// (0x0009a22f) postcard_message2_row_pane_t1

0xc807,	// (0x0009a227) address2_row_pane_g1

0xc80f,	// (0x0009a22f) address2_row_pane_t1

0x194e,	// (0x0008f36e) aid_size_cell_vorec

0x9e1b,	// (0x0009783b) main_rss_pane

0x44d7,	// (0x00091ef7) rss_list_single_pane_ParamLimits

0x44d7,	// (0x00091ef7) rss_list_single_pane

0xc81d,	// (0x0009a23d) rss_list_single_pane_t1

0xc82b,	// (0x0009a24b) rss_list_single_pane_t2

0x0001,

0xf608,	// (0x0009d028) rss_list_single_pane_t

0x9e1b,	// (0x0009783b) main_camera2_pane

0x9e1b,	// (0x0009783b) main_video2_pane

0x473d,	// (0x0009215d) cams_zoom_pane_cp2_ParamLimits

0x473d,	// (0x0009215d) cams_zoom_pane_cp2

0x4754,	// (0x00092174) image2_vga_pane_ParamLimits

0x4754,	// (0x00092174) image2_vga_pane

0x479c,	// (0x000921bc) main_camera2_pane_g1_ParamLimits

0x479c,	// (0x000921bc) main_camera2_pane_g1

0x47bc,	// (0x000921dc) main_camera2_pane_g2_ParamLimits

0x47bc,	// (0x000921dc) main_camera2_pane_g2

0x47d3,	// (0x000921f3) main_camera2_pane_g3_ParamLimits

0x47d3,	// (0x000921f3) main_camera2_pane_g3

0x47ea,	// (0x0009220a) main_camera2_pane_g4_ParamLimits

0x47ea,	// (0x0009220a) main_camera2_pane_g4

0x4801,	// (0x00092221) main_camera2_pane_g5_ParamLimits

0x4801,	// (0x00092221) main_camera2_pane_g5

0x4818,	// (0x00092238) main_camera2_pane_g6_ParamLimits

0x4818,	// (0x00092238) main_camera2_pane_g6

0x482f,	// (0x0009224f) main_camera2_pane_g7_ParamLimits

0x482f,	// (0x0009224f) main_camera2_pane_g7

0x4846,	// (0x00092266) main_camera2_pane_g8_ParamLimits

0x4846,	// (0x00092266) main_camera2_pane_g8

0x0008,

0xf629,	// (0x0009d049) main_camera2_pane_g_ParamLimits

0xf629,	// (0x0009d049) main_camera2_pane_g

0x4874,	// (0x00092294) main_camera2_pane_t1_ParamLimits

0x4874,	// (0x00092294) main_camera2_pane_t1

0x48a9,	// (0x000922c9) main_camera2_pane_t2_ParamLimits

0x48a9,	// (0x000922c9) main_camera2_pane_t2

0x48c6,	// (0x000922e6) main_camera2_pane_t3_ParamLimits

0x48c6,	// (0x000922e6) main_camera2_pane_t3

0x4924,	// (0x00092344) main_camera2_pane_t4_ParamLimits

0x4924,	// (0x00092344) main_camera2_pane_t4

0x0006,

0xf63c,	// (0x0009d05c) main_camera2_pane_t_ParamLimits

0xf63c,	// (0x0009d05c) main_camera2_pane_t

0x49ad,	// (0x000923cd) cams_zoom_pane_cp4_ParamLimits

0x49ad,	// (0x000923cd) cams_zoom_pane_cp4

0x49c3,	// (0x000923e3) image2_cif_pane_ParamLimits

0x49c3,	// (0x000923e3) image2_cif_pane

0x49ee,	// (0x0009240e) image2_subqcif_pane_ParamLimits

0x49ee,	// (0x0009240e) image2_subqcif_pane

0x4a09,	// (0x00092429) main_video2_pane_g1_ParamLimits

0x4a09,	// (0x00092429) main_video2_pane_g1

0x4a23,	// (0x00092443) main_video2_pane_g2_ParamLimits

0x4a23,	// (0x00092443) main_video2_pane_g2

0x4a39,	// (0x00092459) main_video2_pane_g3_ParamLimits

0x4a39,	// (0x00092459) main_video2_pane_g3

0x4a4f,	// (0x0009246f) main_video2_pane_g4_ParamLimits

0x4a4f,	// (0x0009246f) main_video2_pane_g4

0x4a65,	// (0x00092485) main_video2_pane_g5_ParamLimits

0x4a65,	// (0x00092485) main_video2_pane_g5

0x4a7b,	// (0x0009249b) main_video2_pane_g6_ParamLimits

0x4a7b,	// (0x0009249b) main_video2_pane_g6

0x0005,

0xf64b,	// (0x0009d06b) main_video2_pane_g_ParamLimits

0xf64b,	// (0x0009d06b) main_video2_pane_g

0x4a95,	// (0x000924b5) main_video2_pane_t1_ParamLimits

0x4a95,	// (0x000924b5) main_video2_pane_t1

0x4ab9,	// (0x000924d9) main_video2_pane_t2_ParamLimits

0x4ab9,	// (0x000924d9) main_video2_pane_t2

0x4b09,	// (0x00092529) main_video2_pane_t3_ParamLimits

0x4b09,	// (0x00092529) main_video2_pane_t3

0x0002,

0xf658,	// (0x0009d078) main_video2_pane_t_ParamLimits

0xf658,	// (0x0009d078) main_video2_pane_t

0x3f99,	// (0x000919b9) call_muted_g2

0x0001,

0xf5fa,	// (0x0009d01a) call_muted_g

0x9e1b,	// (0x0009783b) main_mup2_pane

0x4b51,	// (0x00092571) main_mup2_pane_g1_ParamLimits

0x4b51,	// (0x00092571) main_mup2_pane_g1

0x4b5d,	// (0x0009257d) main_mup2_pane_g2_ParamLimits

0x4b5d,	// (0x0009257d) main_mup2_pane_g2

0xa739,	// (0x00098159) main_mup_pane_g13_cp1

0xa741,	// (0x00098161) mup_volume_pane_cp1

0x4b7b,	// (0x0009259b) main_mup2_pane_g4_ParamLimits

0x4b7b,	// (0x0009259b) main_mup2_pane_g4

0x4b8d,	// (0x000925ad) main_mup2_pane_g5_ParamLimits

0x4b8d,	// (0x000925ad) main_mup2_pane_g5

0x4b9f,	// (0x000925bf) main_mup2_pane_g6_ParamLimits

0x4b9f,	// (0x000925bf) main_mup2_pane_g6

0x4bb1,	// (0x000925d1) main_mup2_pane_g7_ParamLimits

0x4bb1,	// (0x000925d1) main_mup2_pane_g7

0x0006,

0xf65f,	// (0x0009d07f) main_mup2_pane_g_ParamLimits

0xf65f,	// (0x0009d07f) main_mup2_pane_g

0x4bc9,	// (0x000925e9) main_mup2_pane_t1_ParamLimits

0x4bc9,	// (0x000925e9) main_mup2_pane_t1

0x4bdf,	// (0x000925ff) main_mup2_pane_t2_ParamLimits

0x4bdf,	// (0x000925ff) main_mup2_pane_t2

0x4bf5,	// (0x00092615) main_mup2_pane_t3_ParamLimits

0x4bf5,	// (0x00092615) main_mup2_pane_t3

0x4c0b,	// (0x0009262b) main_mup2_pane_t4_ParamLimits

0x4c0b,	// (0x0009262b) main_mup2_pane_t4

0x4c23,	// (0x00092643) main_mup2_pane_t5_ParamLimits

0x4c23,	// (0x00092643) main_mup2_pane_t5

0x4c3b,	// (0x0009265b) main_mup2_pane_t6_ParamLimits

0x4c3b,	// (0x0009265b) main_mup2_pane_t6

0x0005,

0xf66e,	// (0x0009d08e) main_mup2_pane_t_ParamLimits

0xf66e,	// (0x0009d08e) main_mup2_pane_t

0x4c6b,	// (0x0009268b) mup2_visualizer_pane_ParamLimits

0x4c6b,	// (0x0009268b) mup2_visualizer_pane

0x4c99,	// (0x000926b9) mup_progress_pane_cp_ParamLimits

0x4c99,	// (0x000926b9) mup_progress_pane_cp

0xa724,	// (0x00098144) mup_volume_pane_cp_ParamLimits

0xa724,	// (0x00098144) mup_volume_pane_cp

0x4caf,	// (0x000926cf) mup2_visualizer_pane_g1_ParamLimits

0x4caf,	// (0x000926cf) mup2_visualizer_pane_g1

0xc88c,	// (0x0009a2ac) mup2_visualizer_pane_g2_ParamLimits

0xc88c,	// (0x0009a2ac) mup2_visualizer_pane_g2

0x4cc6,	// (0x000926e6) mup2_visualizer_pane_g3_ParamLimits

0x4cc6,	// (0x000926e6) mup2_visualizer_pane_g3

0x0002,

0xf67b,	// (0x0009d09b) mup2_visualizer_pane_g_ParamLimits

0xf67b,	// (0x0009d09b) mup2_visualizer_pane_g

0xb66c,	// (0x0009908c) aid_size_cell_fmradio

0x4149,	// (0x00091b69) aid_height_parent_landcape

0xa527,	// (0x00097f47) wml_content_pane_cp

0xa52f,	// (0x00097f4f) wml_tabs_pane

0xa538,	// (0x00097f58) popup_wml_miniature_window

0xa540,	// (0x00097f60) scroll_pane_cp021

0xa554,	// (0x00097f74) wml_content_pane_comp8

0x9e1b,	// (0x0009783b) bg_popup_sub_pane_cp05

0xc8aa,	// (0x0009a2ca) popup_wml_miniature_window_g1

0xc8b2,	// (0x0009a2d2) wml_miniature_view_pane

0x4cd2,	// (0x000926f2) aid_size_wml_view

0x4cda,	// (0x000926fa) wml_miniature_view_pane_g1

0x4ce3,	// (0x00092703) wml_miniature_view_pane_g2

0x4cec,	// (0x0009270c) wml_miniature_view_pane_g3

0x4cf4,	// (0x00092714) wml_miniature_view_pane_g4

0x4cfc,	// (0x0009271c) wml_miniature_view_pane_g5

0x4d04,	// (0x00092724) wml_miniature_view_pane_g6

0x4d0c,	// (0x0009272c) wml_miniature_view_pane_g7

0x4d14,	// (0x00092734) wml_miniature_view_pane_g8

0x0007,

0xf682,	// (0x0009d0a2) wml_miniature_view_pane_g

0xc8ba,	// (0x0009a2da) background_graphic_ParamLimits

0xc8ba,	// (0x0009a2da) background_graphic

0xc8c6,	// (0x0009a2e6) wml_tabs_2_pane

0xc8cf,	// (0x0009a2ef) wml_tabs_3_pane_ParamLimits

0xc8cf,	// (0x0009a2ef) wml_tabs_3_pane

0xc8e1,	// (0x0009a301) wml_tabs_4_pane_ParamLimits

0xc8e1,	// (0x0009a301) wml_tabs_4_pane

0xc8f7,	// (0x0009a317) wml_tabs_5_pane_ParamLimits

0xc8f7,	// (0x0009a317) wml_tabs_5_pane

0xc911,	// (0x0009a331) wml_tabs_pane_g2_ParamLimits

0xc911,	// (0x0009a331) wml_tabs_pane_g2

0xc925,	// (0x0009a345) wml_tabs_pane_g3_ParamLimits

0xc925,	// (0x0009a345) wml_tabs_pane_g3

0x4d1c,	// (0x0009273c) wml_tabs_2_active_pane_ParamLimits

0x4d1c,	// (0x0009273c) wml_tabs_2_active_pane

0x4d30,	// (0x00092750) wml_tabs_2_passive_pane_ParamLimits

0x4d30,	// (0x00092750) wml_tabs_2_passive_pane

0x4d44,	// (0x00092764) wml_tabs_3_active_pane_cp_ParamLimits

0x4d44,	// (0x00092764) wml_tabs_3_active_pane_cp

0x4d59,	// (0x00092779) wml_tabs_3_passive_pane_ParamLimits

0x4d59,	// (0x00092779) wml_tabs_3_passive_pane

0x4d6c,	// (0x0009278c) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d6c,	// (0x0009278c) wml_tabs_3_passive_pane_cp

0x4d83,	// (0x000927a3) tabs_4_active_pane

0x4d8b,	// (0x000927ab) tabs_4_passive_pane

0x4d95,	// (0x000927b5) tabs_4_passive_pane_cp

0x4d9d,	// (0x000927bd) tabs_4_passive_pane_cp2

0x3e5d,	// (0x0009187d) aid_height_text

0x34e6,	// (0x00090f06) mup_volume_cont_pane_ParamLimits

0x34e6,	// (0x00090f06) mup_volume_cont_pane

0x0d38,	// (0x0008e758) aid_size_cell_pinb

0x0d42,	// (0x0008e762) aid_size_list_pinb

0x4c85,	// (0x000926a5) mup2_volume_cont_pane_ParamLimits

0x4c85,	// (0x000926a5) mup2_volume_cont_pane

0xa710,	// (0x00098130) mup2_volume_cont_pane_g1_ParamLimits

0xa710,	// (0x00098130) mup2_volume_cont_pane_g1

0x09e0,	// (0x0008e400) aid_size_cell_touch_ParamLimits

0x09e0,	// (0x0008e400) aid_size_cell_touch

0x0c28,	// (0x0008e648) touch_pane_ParamLimits

0x0c28,	// (0x0008e648) touch_pane

0x99a9,	// (0x000973c9) main_rss2_pane

0xc942,	// (0x0009a362) listscroll_rss2_pane

0xc94b,	// (0x0009a36b) rss2_navigation_pane

0xc953,	// (0x0009a373) list_rss2_pane

0xb244,	// (0x00098c64) scroll_pane_cp22

0xc95b,	// (0x0009a37b) rss2_navigation_pane_g1

0xc964,	// (0x0009a384) rss2_navigation_pane_g2

0xc96c,	// (0x0009a38c) rss2_navigation_pane_g3

0x0002,

0xf693,	// (0x0009d0b3) rss2_navigation_pane_g

0xc974,	// (0x0009a394) rss2_navigation_pane_t1

0x4da7,	// (0x000927c7) rss2_list_single_pane_ParamLimits

0x4da7,	// (0x000927c7) rss2_list_single_pane

0xc982,	// (0x0009a3a2) rss2_list_single_pane_t2

0xc990,	// (0x0009a3b0) rss2_list_single_pane_t3_ParamLimits

0xc990,	// (0x0009a3b0) rss2_list_single_pane_t3

0xc9ad,	// (0x0009a3cd) rss2_list_single_pane_t4

0x2dab,	// (0x000907cb) smil_status_pane_g1

0x99fa,	// (0x0009741a) main_image2_pane_ParamLimits

0x99fa,	// (0x0009741a) main_image2_pane

0x485d,	// (0x0009227d) main_camera2_pane_g9_ParamLimits

0x485d,	// (0x0009227d) main_camera2_pane_g9

0x4979,	// (0x00092399) main_camera2_pane_t5_ParamLimits

0x4979,	// (0x00092399) main_camera2_pane_t5

0xa6e5,	// (0x00098105) main_camera2_pane_t6_ParamLimits

0xa6e5,	// (0x00098105) main_camera2_pane_t6

0x4dbd,	// (0x000927dd) main_image2_pane_g1_ParamLimits

0x4dbd,	// (0x000927dd) main_image2_pane_g1

0x3b77,	// (0x00091597) smil2_video_pane_ParamLimits

0x3b77,	// (0x00091597) smil2_video_pane

0x0a20,	// (0x0008e440) aid_zoom_text_primary_cp

0x99f0,	// (0x00097410) popup_preview_fixed_window

0xa490,	// (0x00097eb0) im_reading_pane_g1

0x472f,	// (0x0009214f) cams2_bc_adjust_pane_cp_ParamLimits

0x472f,	// (0x0009214f) cams2_bc_adjust_pane_cp

0x499f,	// (0x000923bf) cams2_bc_adjust_pane_ParamLimits

0x499f,	// (0x000923bf) cams2_bc_adjust_pane

0xa749,	// (0x00098169) cams2_bc_adjust_pane_g1

0xa751,	// (0x00098171) cams2_slider_pane

0xa75a,	// (0x0009817a) cams2_slider_pane_g1

0xa763,	// (0x00098183) cams2_slider_pane_g2

0x0006,

0xf69a,	// (0x0009d0ba) cams2_slider_pane_g

0x0e32,	// (0x0008e852) calc_display_pane_ParamLimits

0x0e5a,	// (0x0008e87a) calc_paper_pane_ParamLimits

0x0e7d,	// (0x0008e89d) grid_calc_pane_ParamLimits

0xa650,	// (0x00098070) popup_clock_digital_window_t1_ParamLimits

0xb609,	// (0x00099029) main_image_pane_t1

0x0e14,	// (0x0008e834) aid_size_cell_calc_ParamLimits

0x0e14,	// (0x0008e834) aid_size_cell_calc

0x418f,	// (0x00091baf) popup_blid_sat_info2_window_ParamLimits

0x418f,	// (0x00091baf) popup_blid_sat_info2_window

0xc9c3,	// (0x0009a3e3) aid_size_cell_blid

0xc9cb,	// (0x0009a3eb) bg_popup_window_pane_cp07

0xc9ee,	// (0x0009a40e) grid_popup_blid_pane

0xc9f8,	// (0x0009a418) heading_pane_cp05_ParamLimits

0xc9f8,	// (0x0009a418) heading_pane_cp05

0xcac2,	// (0x0009a4e2) cell_popup_blid_pane_ParamLimits

0xcac2,	// (0x0009a4e2) cell_popup_blid_pane

0xcaec,	// (0x0009a50c) cell_popup_blid_pane_g1

0xcaf4,	// (0x0009a514) cell_popup_blid_pane_t1

0x4c55,	// (0x00092675) mup2_indicator_pane_ParamLimits

0x4c55,	// (0x00092675) mup2_indicator_pane

0xa389,	// (0x00097da9) mup2_visualizer_osc_pane

0xc898,	// (0x0009a2b8) mup2_visualizer_spec_pane_ParamLimits

0xc898,	// (0x0009a2b8) mup2_visualizer_spec_pane

0x4dd3,	// (0x000927f3) mup2_spec_half_pane

0x4ddc,	// (0x000927fc) mup2_spec_half_pane_cp

0x4de4,	// (0x00092804) mup2_spec_bar_pane_ParamLimits

0x4de4,	// (0x00092804) mup2_spec_bar_pane

0xc839,	// (0x0009a259) mup2_spec_bar_pane_g1

0xc843,	// (0x0009a263) mup2_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0009d02d) mup2_spec_bar_pane_g

0x4e04,	// (0x00092824) mup2_osc_middle_pane

0xc855,	// (0x0009a275) mup2_visualizer_osc_pane_g1

0x9a28,	// (0x00097448) popup_number_entry_window_t1_ParamLimits

0x9a3b,	// (0x0009745b) popup_number_entry_window_t2_ParamLimits

0x9a4d,	// (0x0009746d) popup_number_entry_window_t3_ParamLimits

0x0c7a,	// (0x0008e69a) popup_number_entry_window_t5_ParamLimits

0x0c7a,	// (0x0008e69a) popup_number_entry_window_t5

0xf0ca,	// (0x0009caea) popup_number_entry_window_t_ParamLimits

0x9a5f,	// (0x0009747f) text_title_cp2_ParamLimits

0xa68f,	// (0x000980af) aid_hotspot_pointer_text2_pane

0xa6b5,	// (0x000980d5) main_viewer_pane_g9_ParamLimits

0xa6b5,	// (0x000980d5) main_viewer_pane_g9

0xad7e,	// (0x0009879e) cale_month_pane_t1_ParamLimits

0xada4,	// (0x000987c4) bg_cale_pane_ParamLimits

0xadbc,	// (0x000987dc) list_cale_pane_ParamLimits

0xadcd,	// (0x000987ed) listscroll_cale_day_pane_t1

0xaddf,	// (0x000987ff) scroll_pane_cp09_ParamLimits

0x351c,	// (0x00090f3c) main_mup_eq_pane_t1_ParamLimits

0x351c,	// (0x00090f3c) main_mup_eq_pane_t1

0x3538,	// (0x00090f58) main_mup_eq_pane_t2_ParamLimits

0x3538,	// (0x00090f58) main_mup_eq_pane_t2

0x3554,	// (0x00090f74) main_mup_eq_pane_t3_ParamLimits

0x3554,	// (0x00090f74) main_mup_eq_pane_t3

0x3572,	// (0x00090f92) main_mup_eq_pane_t4_ParamLimits

0x3572,	// (0x00090f92) main_mup_eq_pane_t4

0x3590,	// (0x00090fb0) main_mup_eq_pane_t5_ParamLimits

0x3590,	// (0x00090fb0) main_mup_eq_pane_t5

0x35ae,	// (0x00090fce) main_mup_eq_pane_t6_ParamLimits

0x35ae,	// (0x00090fce) main_mup_eq_pane_t6

0x35c4,	// (0x00090fe4) main_mup_eq_pane_t7_ParamLimits

0x35c4,	// (0x00090fe4) main_mup_eq_pane_t7

0x35da,	// (0x00090ffa) main_mup_eq_pane_t8_ParamLimits

0x35da,	// (0x00090ffa) main_mup_eq_pane_t8

0x35f0,	// (0x00091010) main_mup_eq_pane_t9_ParamLimits

0x35f0,	// (0x00091010) main_mup_eq_pane_t9

0x360c,	// (0x0009102c) main_mup_eq_pane_t10_ParamLimits

0x360c,	// (0x0009102c) main_mup_eq_pane_t10

0x0009,

0xf45c,	// (0x0009ce7c) main_mup_eq_pane_t_ParamLimits

0xf45c,	// (0x0009ce7c) main_mup_eq_pane_t

0x36e1,	// (0x00091101) mup_equalizer_pane_cp5_ParamLimits

0x36f9,	// (0x00091119) mup_equalizer_pane_cp6_ParamLimits

0x3711,	// (0x00091131) mup_equalizer_pane_cp7_ParamLimits

0x99a9,	// (0x000973c9) main_gallery_pane

0xc85e,	// (0x0009a27e) smil2_volume_pane

0xc866,	// (0x0009a286) smil_status_volume_pane_g1_ParamLimits

0xc879,	// (0x0009a299) smil_status_volume_pane_g2_ParamLimits

0xa6c1,	// (0x000980e1) smil_status_volume_pane_g3_ParamLimits

0xf612,	// (0x0009d032) smil_status_volume_pane_g_ParamLimits

0xc9cb,	// (0x0009a3eb) bg_popup_window_pane_cp07_ParamLimits

0xc9d9,	// (0x0009a3f9) blid_firmament_pane

0x4e0d,	// (0x0009282d) aid_size_cell_gallery_ParamLimits

0x4e0d,	// (0x0009282d) aid_size_cell_gallery

0x4e23,	// (0x00092843) grid_gallery_pane_ParamLimits

0x4e23,	// (0x00092843) grid_gallery_pane

0x4e3e,	// (0x0009285e) cell_gallery_pane_ParamLimits

0x4e3e,	// (0x0009285e) cell_gallery_pane

0xcb02,	// (0x0009a522) bg_cell_gallery_focus_pane_ParamLimits

0xcb02,	// (0x0009a522) bg_cell_gallery_focus_pane

0xcb14,	// (0x0009a534) cell_gallery_pane_g1_ParamLimits

0xcb14,	// (0x0009a534) cell_gallery_pane_g1

0x4e89,	// (0x000928a9) cell_gallery_pane_g2_ParamLimits

0x4e89,	// (0x000928a9) cell_gallery_pane_g2

0x4e96,	// (0x000928b6) cell_gallery_pane_g3_ParamLimits

0x4e96,	// (0x000928b6) cell_gallery_pane_g3

0xcb20,	// (0x0009a540) cell_gallery_pane_g4_ParamLimits

0xcb20,	// (0x0009a540) cell_gallery_pane_g4

0x0003,

0xf6c0,	// (0x0009d0e0) cell_gallery_pane_g_ParamLimits

0xf6c0,	// (0x0009d0e0) cell_gallery_pane_g

0xcb2c,	// (0x0009a54c) bg_cell_gallery_focus_pane_g1

0xcb34,	// (0x0009a554) bg_cell_gallery_focus_pane_g2

0xcb3c,	// (0x0009a55c) bg_cell_gallery_focus_pane_g3

0xcb44,	// (0x0009a564) bg_cell_gallery_focus_pane_g4

0xcb4c,	// (0x0009a56c) bg_cell_gallery_focus_pane_g5

0xcb54,	// (0x0009a574) bg_cell_gallery_focus_pane_g6

0xcb5c,	// (0x0009a57c) bg_cell_gallery_focus_pane_g7

0xcb64,	// (0x0009a584) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c9,	// (0x0009d0e9) bg_cell_gallery_focus_pane_g

0xcb6c,	// (0x0009a58c) aid_firma_cardinal

0xcb80,	// (0x0009a5a0) blid_firmament_pane_t1

0xcb97,	// (0x0009a5b7) blid_firmament_pane_t2

0xcbae,	// (0x0009a5ce) blid_firmament_pane_t3

0xcbc5,	// (0x0009a5e5) blid_firmament_pane_t4

0x0003,

0xf6da,	// (0x0009d0fa) blid_firmament_pane_t

0xcbdc,	// (0x0009a5fc) blid_sat_info_pane

0xcbec,	// (0x0009a60c) blid_sat_info_pane_g1

0xcbec,	// (0x0009a60c) blid_sat_info_pane_g2

0x0001,

0xf6e3,	// (0x0009d103) blid_sat_info_pane_g

0xcbf6,	// (0x0009a616) blid_sat_info_pane_t1

0xcc04,	// (0x0009a624) smil2_volume_content_pane

0xcc0d,	// (0x0009a62d) smil2_volume_pane_g1

0xcc15,	// (0x0009a635) smil2_volume_content_pane_g1

0xcc1e,	// (0x0009a63e) smil2_volume_content_pane_g2

0xcc27,	// (0x0009a647) smil2_volume_content_pane_g3

0xcc30,	// (0x0009a650) smil2_volume_content_pane_g4

0xcc39,	// (0x0009a659) smil2_volume_content_pane_g5

0xcc42,	// (0x0009a662) smil2_volume_content_pane_g6

0xcc4b,	// (0x0009a66b) smil2_volume_content_pane_g7

0xcc54,	// (0x0009a674) smil2_volume_content_pane_g8

0xcc5d,	// (0x0009a67d) smil2_volume_content_pane_g9

0xcc66,	// (0x0009a686) smil2_volume_content_pane_g10

0x0009,

0xf6e8,	// (0x0009d108) smil2_volume_content_pane_g

0x14e9,	// (0x0008ef09) cale_week_day_heading_pane_t1_ParamLimits

0x1533,	// (0x0008ef53) cale_week_day_heading_pane_t2_ParamLimits

0x1582,	// (0x0008efa2) cale_week_day_heading_pane_t3_ParamLimits

0x15d1,	// (0x0008eff1) cale_week_day_heading_pane_t4_ParamLimits

0x1620,	// (0x0008f040) cale_week_day_heading_pane_t5_ParamLimits

0x1673,	// (0x0008f093) cale_week_day_heading_pane_t6_ParamLimits

0x16ca,	// (0x0008f0ea) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0009cbf1) cale_week_day_heading_pane_t_ParamLimits

0xa32e,	// (0x00097d4e) bg_cale_side_pane_ParamLimits

0x1714,	// (0x0008f134) cale_week_time_pane_t1_ParamLimits

0x174e,	// (0x0008f16e) cale_week_time_pane_t2_ParamLimits

0x1788,	// (0x0008f1a8) cale_week_time_pane_t3_ParamLimits

0x17c2,	// (0x0008f1e2) cale_week_time_pane_t4_ParamLimits

0x17fc,	// (0x0008f21c) cale_week_time_pane_t5_ParamLimits

0x1836,	// (0x0008f256) cale_week_time_pane_t6_ParamLimits

0x1870,	// (0x0008f290) cale_week_time_pane_t7_ParamLimits

0x18aa,	// (0x0008f2ca) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0009cc00) cale_week_time_pane_t_ParamLimits

0x18ea,	// (0x0008f30a) cell_cale_week_pane_g2_ParamLimits

0xa32e,	// (0x00097d4e) bg_cale_side_pane_cp01_ParamLimits

0x2bba,	// (0x000905da) cale_month_week_pane_t1_ParamLimits

0x2bd3,	// (0x000905f3) cale_month_week_pane_t2_ParamLimits

0x2bec,	// (0x0009060c) cale_month_week_pane_t3_ParamLimits

0x2c05,	// (0x00090625) cale_month_week_pane_t4_ParamLimits

0x2c1e,	// (0x0009063e) cale_month_week_pane_t5_ParamLimits

0x2c37,	// (0x00090657) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0009ccd5) cale_month_week_pane_t_ParamLimits

0xa5d0,	// (0x00097ff0) cell_cale_month_pane_g1_ParamLimits

0x99a9,	// (0x000973c9) main_cale_event_viewer_pane

0x99a9,	// (0x000973c9) listscroll_cale_event_viewer_pane

0xcc6f,	// (0x0009a68f) list_cale_ev_pane

0xcc77,	// (0x0009a697) scroll_pane_cp023

0x4ea3,	// (0x000928c3) field_cale_ev_pane_ParamLimits

0x4ea3,	// (0x000928c3) field_cale_ev_pane

0xcc83,	// (0x0009a6a3) field_cale_ev_content_pane_ParamLimits

0xcc83,	// (0x0009a6a3) field_cale_ev_content_pane

0xcc8f,	// (0x0009a6af) field_cale_ev_pane_g1_ParamLimits

0xcc8f,	// (0x0009a6af) field_cale_ev_pane_g1

0xcc9b,	// (0x0009a6bb) field_cale_ev_pane_g2_ParamLimits

0xcc9b,	// (0x0009a6bb) field_cale_ev_pane_g2

0xccb3,	// (0x0009a6d3) field_cale_ev_pane_g3_ParamLimits

0xccb3,	// (0x0009a6d3) field_cale_ev_pane_g3

0x0002,

0xf6fd,	// (0x0009d11d) field_cale_ev_pane_g_ParamLimits

0xf6fd,	// (0x0009d11d) field_cale_ev_pane_g

0xcccb,	// (0x0009a6eb) field_cale_ev_pane_t1_ParamLimits

0xcccb,	// (0x0009a6eb) field_cale_ev_pane_t1

0x4ec7,	// (0x000928e7) field_cale_ev_content_pane_t1_ParamLimits

0x4ec7,	// (0x000928e7) field_cale_ev_content_pane_t1

0xb4ef,	// (0x00098f0f) bg_button_pane_cp01

0x1131,	// (0x0008eb51) listscroll_cale_week_pane_ParamLimits

0x1143,	// (0x0008eb63) popup_toolbar_window_cp01

0xa2fa,	// (0x00097d1a) listscroll_cale_week_pane_t1_ParamLimits

0x1131,	// (0x0008eb51) listscroll_cale_day_pane_ParamLimits

0x1143,	// (0x0008eb63) popup_toolbar_window_cp02

0xadcd,	// (0x000987ed) listscroll_cale_day_pane_t1_ParamLimits

0x1131,	// (0x0008eb51) main_cale_month_pane_ParamLimits

0x440f,	// (0x00091e2f) popup_toolbar_window_cp03_ParamLimits

0x440f,	// (0x00091e2f) popup_toolbar_window_cp03

0x3a35,	// (0x00091455) main_image_pane_g2_ParamLimits

0x3a35,	// (0x00091455) main_image_pane_g2

0x3a46,	// (0x00091466) main_image_pane_g3_ParamLimits

0x3a46,	// (0x00091466) main_image_pane_g3

0x0002,

0xf4ee,	// (0x0009cf0e) main_image_pane_g_ParamLimits

0xf4ee,	// (0x0009cf0e) main_image_pane_g

0xb609,	// (0x00099029) main_image_pane_t1_ParamLimits

0x3a57,	// (0x00091477) main_image_pane_t2_ParamLimits

0x3a57,	// (0x00091477) main_image_pane_t2

0x3a69,	// (0x00091489) main_image_pane_t3_ParamLimits

0x3a69,	// (0x00091489) main_image_pane_t3

0x3a91,	// (0x000914b1) main_image_pane_t4_ParamLimits

0x3a91,	// (0x000914b1) main_image_pane_t4

0x0003,

0xf4f5,	// (0x0009cf15) main_image_pane_t_ParamLimits

0xf4f5,	// (0x0009cf15) main_image_pane_t

0x3ab1,	// (0x000914d1) popup_image_details_window_cp01

0x3abb,	// (0x000914db) popup_toobar_trans_pane_cp01_ParamLimits

0x3abb,	// (0x000914db) popup_toobar_trans_pane_cp01

0x4282,	// (0x00091ca2) popup_image_details_window_ParamLimits

0x4282,	// (0x00091ca2) popup_image_details_window

0xc7bd,	// (0x0009a1dd) popup_image_focus_window

0x46e9,	// (0x00092109) camera2_autofocus_pane_ParamLimits

0x46e9,	// (0x00092109) camera2_autofocus_pane

0x99a9,	// (0x000973c9) bg_popup_sub_pane_cp06

0xcce2,	// (0x0009a702) popup_image_focus_window_g1

0xccea,	// (0x0009a70a) popup_image_focus_window_g2

0xccf2,	// (0x0009a712) popup_image_focus_window_g3

0xccfa,	// (0x0009a71a) popup_image_focus_window_g4

0x0003,

0xf704,	// (0x0009d124) popup_image_focus_window_g

0xcd02,	// (0x0009a722) popup_image_focus_window_t1

0xcd10,	// (0x0009a730) popup_image_focus_window_t2

0xcd20,	// (0x0009a740) popup_image_focus_window_t3

0x0002,

0xf70d,	// (0x0009d12d) popup_image_focus_window_t

0xcd2e,	// (0x0009a74e) camera2_autofocus_pane_g1

0x99fa,	// (0x0009741a) bg_tb_trans_pane_cp01

0xcd3c,	// (0x0009a75c) popup_image_details_window_g1

0xcd4f,	// (0x0009a76f) popup_image_details_window_g2

0x0002,

0xf71f,	// (0x0009d13f) popup_image_details_window_g

0xcd78,	// (0x0009a798) popup_image_details_window_t1

0xcd8a,	// (0x0009a7aa) popup_image_details_window_t2

0xcda3,	// (0x0009a7c3) popup_image_details_window_t3

0xcdb7,	// (0x0009a7d7) popup_image_details_window_t4

0xcdd2,	// (0x0009a7f2) popup_image_details_window_t5

0x0004,

0xf726,	// (0x0009d146) popup_image_details_window_t

0xa12f,	// (0x00097b4f) bg_calc_paper_pane_ParamLimits

0x99a9,	// (0x000973c9) grid_highlight_pane_cp013

0xa143,	// (0x00097b63) list_calc_pane_ParamLimits

0xa155,	// (0x00097b75) scroll_pane_cp024

0xa15d,	// (0x00097b7d) bg_calc_display_pane_ParamLimits

0x0f7d,	// (0x0008e99d) calc_display_pane_t1_ParamLimits

0x0f8f,	// (0x0008e9af) calc_display_pane_t2_ParamLimits

0xa169,	// (0x00097b89) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0009cb71) calc_display_pane_t_ParamLimits

0x1058,	// (0x0008ea78) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0009cb8e) cell_calc_pane_g

0x1061,	// (0x0008ea81) cell_calc_pane_t1

0xa1e0,	// (0x00097c00) grid_highlight_pane_cp02_ParamLimits

0xa1f6,	// (0x00097c16) toolbar_button_pane_cp01_ParamLimits

0xa1f6,	// (0x00097c16) toolbar_button_pane_cp01

0xb64e,	// (0x0009906e) temp_image_control_pane_ParamLimits

0xb64e,	// (0x0009906e) temp_image_control_pane

0x99fa,	// (0x0009741a) main_mp3_pane

0xcdec,	// (0x0009a80c) temp_image_control_pane_g1_ParamLimits

0xcdec,	// (0x0009a80c) temp_image_control_pane_g1

0xcdfa,	// (0x0009a81a) temp_image_control_pane_g2_ParamLimits

0xcdfa,	// (0x0009a81a) temp_image_control_pane_g2

0xce0c,	// (0x0009a82c) temp_image_control_pane_g3_ParamLimits

0xce0c,	// (0x0009a82c) temp_image_control_pane_g3

0x4f18,	// (0x00092938) temp_image_control_pane_g4_ParamLimits

0x4f18,	// (0x00092938) temp_image_control_pane_g4

0x0003,

0xf731,	// (0x0009d151) temp_image_control_pane_g_ParamLimits

0xf731,	// (0x0009d151) temp_image_control_pane_g

0xcdec,	// (0x0009a80c) main_mp3_pane_g1

0x4f2b,	// (0x0009294b) main_mp3_pane_g2

0x0007,

0xf73a,	// (0x0009d15a) main_mp3_pane_g

0xce4f,	// (0x0009a86f) main_mp3_pane_t1

0xa39b,	// (0x00097dbb) main_camera_pane_g8_ParamLimits

0xa39b,	// (0x00097dbb) main_camera_pane_g8

0x1c11,	// (0x0008f631) main_video_pane_g7_ParamLimits

0x1c11,	// (0x0008f631) main_video_pane_g7

0xa6fe,	// (0x0009811e) main_camera2_pane_t7_ParamLimits

0xa6fe,	// (0x0009811e) main_camera2_pane_t7

0xa4e7,	// (0x00097f07) scroll_pane_cp025_ParamLimits

0xa4e7,	// (0x00097f07) scroll_pane_cp025

0xa4fb,	// (0x00097f1b) scroll_pane_cp026_ParamLimits

0xa4fb,	// (0x00097f1b) scroll_pane_cp026

0xa50a,	// (0x00097f2a) wml_content_pane_ParamLimits

0x99a9,	// (0x000973c9) main_touch_calib_pane

0x4ffd,	// (0x00092a1d) main_touch_calib_pane_g1

0x500f,	// (0x00092a2f) main_touch_calib_pane_g2

0x5021,	// (0x00092a41) main_touch_calib_pane_g3

0x5033,	// (0x00092a53) main_touch_calib_pane_g4

0x0003,

0xf758,	// (0x0009d178) main_touch_calib_pane_g

0x5045,	// (0x00092a65) main_touch_calib_pane_t1

0x505f,	// (0x00092a7f) main_touch_calib_pane_t2

0x0004,

0xf761,	// (0x0009d181) main_touch_calib_pane_t

0xb2bf,	// (0x00098cdf) mup_progress_pane_cp02

0xb2de,	// (0x00098cfe) navi_pane_g1

0xb340,	// (0x00098d60) navi_pane_mp_t3

0x99fa,	// (0x0009741a) main_mp3_pane_ParamLimits

0x4451,	// (0x00091e71) navi_pane_ParamLimits

0xcdec,	// (0x0009a80c) main_mp3_pane_g1_ParamLimits

0x4f2b,	// (0x0009294b) main_mp3_pane_g2_ParamLimits

0x4f37,	// (0x00092957) main_mp3_pane_g3_ParamLimits

0x4f37,	// (0x00092957) main_mp3_pane_g3

0x4f45,	// (0x00092965) main_mp3_pane_g4_ParamLimits

0x4f45,	// (0x00092965) main_mp3_pane_g4

0xce1c,	// (0x0009a83c) main_mp3_pane_g5_ParamLimits

0xce1c,	// (0x0009a83c) main_mp3_pane_g5

0xce2a,	// (0x0009a84a) main_mp3_pane_g6_ParamLimits

0xce2a,	// (0x0009a84a) main_mp3_pane_g6

0xce37,	// (0x0009a857) main_mp3_pane_g7_ParamLimits

0xce37,	// (0x0009a857) main_mp3_pane_g7

0xce43,	// (0x0009a863) main_mp3_pane_g8_ParamLimits

0xce43,	// (0x0009a863) main_mp3_pane_g8

0xf73a,	// (0x0009d15a) main_mp3_pane_g_ParamLimits

0x4f51,	// (0x00092971) main_mp3_pane_t2

0x4f5f,	// (0x0009297f) main_mp3_pane_t3

0xce5d,	// (0x0009a87d) main_mp3_pane_t4

0xce6b,	// (0x0009a88b) main_mp3_pane_t5

0x0005,

0xf74b,	// (0x0009d16b) main_mp3_pane_t

0xce79,	// (0x0009a899) mup_progress_pane_cp01

0x0a20,	// (0x0008e440) aid_zoom_text_secondary2

0xcc6f,	// (0x0009a68f) list_cale_ev2_pane

0xcc77,	// (0x0009a697) scroll_pane_cp023_ParamLimits

0x50b9,	// (0x00092ad9) field_cale_ev2_pane_ParamLimits

0x50b9,	// (0x00092ad9) field_cale_ev2_pane

0x50dd,	// (0x00092afd) field_cale_ev2_pane_g1_ParamLimits

0x50dd,	// (0x00092afd) field_cale_ev2_pane_g1

0x50e9,	// (0x00092b09) field_cale_ev2_pane_g2_ParamLimits

0x50e9,	// (0x00092b09) field_cale_ev2_pane_g2

0x5101,	// (0x00092b21) field_cale_ev2_pane_g3_ParamLimits

0x5101,	// (0x00092b21) field_cale_ev2_pane_g3

0x0003,

0xf76c,	// (0x0009d18c) field_cale_ev2_pane_g_ParamLimits

0xf76c,	// (0x0009d18c) field_cale_ev2_pane_g

0xfdd8,	// (0x0008d7f8) field_cale_ev2_pane_t1_ParamLimits

0xfdd8,	// (0x0008d7f8) field_cale_ev2_pane_t1

0xfdef,	// (0x0008d80f) field_cale_ev2_pane_t2_ParamLimits

0xfdef,	// (0x0008d80f) field_cale_ev2_pane_t2

0x0001,

0xf775,	// (0x0009d195) field_cale_ev2_pane_t_ParamLimits

0xf775,	// (0x0009d195) field_cale_ev2_pane_t

0x38d2,	// (0x000912f2) main_postcard_pane_g5_ParamLimits

0x38d2,	// (0x000912f2) main_postcard_pane_g5

0x38e8,	// (0x00091308) main_postcard_pane_g6_ParamLimits

0x38e8,	// (0x00091308) main_postcard_pane_g6

0x19bd,	// (0x0008f3dd) camera2_autofocus_pane_cp_ParamLimits

0x19bd,	// (0x0008f3dd) camera2_autofocus_pane_cp

0x99fa,	// (0x0009741a) main_mup3_pane

0x5139,	// (0x00092b59) main_mup3_pane_g1_ParamLimits

0x5139,	// (0x00092b59) main_mup3_pane_g1

0x515b,	// (0x00092b7b) main_mup3_pane_g2_ParamLimits

0x515b,	// (0x00092b7b) main_mup3_pane_g2

0x51de,	// (0x00092bfe) main_mup3_pane_g3_ParamLimits

0x51de,	// (0x00092bfe) main_mup3_pane_g3

0x5226,	// (0x00092c46) main_mup3_pane_g4_ParamLimits

0x5226,	// (0x00092c46) main_mup3_pane_g4

0x526c,	// (0x00092c8c) main_mup3_pane_g5_ParamLimits

0x526c,	// (0x00092c8c) main_mup3_pane_g5

0x52b4,	// (0x00092cd4) main_mup3_pane_g6_ParamLimits

0x52b4,	// (0x00092cd4) main_mup3_pane_g6

0xce81,	// (0x0009a8a1) main_mup3_pane_g7_ParamLimits

0xce81,	// (0x0009a8a1) main_mup3_pane_g7

0x0007,

0xf785,	// (0x0009d1a5) main_mup3_pane_g_ParamLimits

0xf785,	// (0x0009d1a5) main_mup3_pane_g

0x5334,	// (0x00092d54) main_mup3_pane_t1_ParamLimits

0x5334,	// (0x00092d54) main_mup3_pane_t1

0x53a2,	// (0x00092dc2) main_mup3_pane_t2_ParamLimits

0x53a2,	// (0x00092dc2) main_mup3_pane_t2

0x5478,	// (0x00092e98) main_mup3_pane_t4_ParamLimits

0x5478,	// (0x00092e98) main_mup3_pane_t4

0x54d6,	// (0x00092ef6) main_mup3_pane_t5_ParamLimits

0x54d6,	// (0x00092ef6) main_mup3_pane_t5

0x5590,	// (0x00092fb0) main_mup3_pane_t6_ParamLimits

0x5590,	// (0x00092fb0) main_mup3_pane_t6

0x0005,

0xf796,	// (0x0009d1b6) main_mup3_pane_t_ParamLimits

0xf796,	// (0x0009d1b6) main_mup3_pane_t

0x5648,	// (0x00093068) mup3_progress_pane_ParamLimits

0x5648,	// (0x00093068) mup3_progress_pane

0x56da,	// (0x000930fa) popup_mup3_control_window_ParamLimits

0x56da,	// (0x000930fa) popup_mup3_control_window

0xce8f,	// (0x0009a8af) popup_mup3_text_window

0x5710,	// (0x00093130) mup3_progress_pane_t1

0x572e,	// (0x0009314e) mup3_progress_pane_t2

0xce97,	// (0x0009a8b7) mup3_progress_pane_t3

0x0002,

0xf7a3,	// (0x0009d1c3) mup3_progress_pane_t

0xceb4,	// (0x0009a8d4) mup_progress_pane_cp03

0x99a9,	// (0x000973c9) bg_tb_trans_pane_cp04

0x574c,	// (0x0009316c) mup3_volume_pane

0x5754,	// (0x00093174) popup_mup3_control_window_g1

0x575d,	// (0x0009317d) mup3_volume_pane_g1

0x5766,	// (0x00093186) mup3_volume_pane_g2

0x576f,	// (0x0009318f) mup3_volume_pane_g3

0x0002,

0xf7aa,	// (0x0009d1ca) mup3_volume_pane_g

0x99a9,	// (0x000973c9) bg_tb_trans_pane_cp03

0xcec4,	// (0x0009a8e4) popup_mup3_text_window_g1

0xcecc,	// (0x0009a8ec) popup_mup3_text_window_t1

0xa1b7,	// (0x00097bd7) list_calc_item_pane_g1_ParamLimits

0xc939,	// (0x0009a359) mup_volume_pane_cp_g1

0x5079,	// (0x00092a99) main_touch_calib_pane_t3

0x508d,	// (0x00092aad) main_touch_calib_pane_t4

0x50a3,	// (0x00092ac3) main_touch_calib_pane_t5

0x99b3,	// (0x000973d3) aid_cell_size_toolbar2

0x99bb,	// (0x000973db) aid_popup3_width_pane

0x0a10,	// (0x0008e430) aid_zoom_text_msg_primary

0x199a,	// (0x0008f3ba) vorec_t7

0xa17b,	// (0x00097b9b) bg_calc_paper_pane_g1_ParamLimits

0xa187,	// (0x00097ba7) bg_calc_paper_pane_g2_ParamLimits

0xa193,	// (0x00097bb3) bg_calc_paper_pane_g3_ParamLimits

0xa19f,	// (0x00097bbf) bg_calc_paper_pane_g4_ParamLimits

0xa1ab,	// (0x00097bcb) bg_calc_paper_pane_g5_ParamLimits

0x0fde,	// (0x0008e9fe) bg_calc_paper_pane_g6_ParamLimits

0x0ff1,	// (0x0008ea11) bg_calc_paper_pane_g7_ParamLimits

0x1004,	// (0x0008ea24) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0009cb78) bg_calc_paper_pane_g_ParamLimits

0x1015,	// (0x0008ea35) calc_bg_paper_pane_g9_ParamLimits

0x1b1f,	// (0x0008f53f) image_qvga_pane_ParamLimits

0x1b1f,	// (0x0008f53f) image_qvga_pane

0xa076,	// (0x00097a96) bg_popup_sub_pane_cp04_ParamLimits

0xb585,	// (0x00098fa5) popup_mup_playback_window_g1_ParamLimits

0xb591,	// (0x00098fb1) popup_mup_playback_window_t1_ParamLimits

0xb5a6,	// (0x00098fc6) popup_mup_playback_window_t2_ParamLimits

0xf4e9,	// (0x0009cf09) popup_mup_playback_window_t_ParamLimits

0x4b6d,	// (0x0009258d) main_mup2_pane_g3_ParamLimits

0x4b6d,	// (0x0009258d) main_mup2_pane_g3

0x1e0e,	// (0x0008f82e) popup_toolbar_window_cp04

0xb9a1,	// (0x000993c1) popup_call2_audio_second_window_g3_ParamLimits

0xb9a1,	// (0x000993c1) popup_call2_audio_second_window_g3

0xbdab,	// (0x000997cb) popup_call2_audio_first_window_g4_ParamLimits

0xbdab,	// (0x000997cb) popup_call2_audio_first_window_g4

0xc42a,	// (0x00099e4a) popup_call2_audio_in_window_g4_ParamLimits

0xc42a,	// (0x00099e4a) popup_call2_audio_in_window_g4

0x3a17,	// (0x00091437) aid_area_sk_bg_cut_ParamLimits

0x3a17,	// (0x00091437) aid_area_sk_bg_cut

0xb5bb,	// (0x00098fdb) aid_area_sk_bg_cut_2_ParamLimits

0xb5bb,	// (0x00098fdb) aid_area_sk_bg_cut_2

0x4e79,	// (0x00092899) aid_placing_details_win

0x4e81,	// (0x000928a1) aid_placing_details_win_2

0xcd2e,	// (0x0009a74e) camera2_autofocus_pane_g1_ParamLimits

0x0bc1,	// (0x0008e5e1) popup_fixed_preview_cale_window_ParamLimits

0x0bc1,	// (0x0008e5e1) popup_fixed_preview_cale_window

0xb387,	// (0x00098da7) navi_slider_pane_g3

0xb390,	// (0x00098db0) navi_slider_pane_g4

0xb399,	// (0x00098db9) navi_slider_pane_g5

0xb387,	// (0x00098da7) navi_slider_pane_g6

0xa676,	// (0x00098096) navi_slider_pane_g7

0xb4bc,	// (0x00098edc) mup_scale_pane_g3

0xb4c5,	// (0x00098ee5) mup_scale_pane_g4

0xb4ce,	// (0x00098eee) mup_scale_pane_g5

0x3729,	// (0x00091149) mup_scale_pane_g6

0x3732,	// (0x00091152) mup_scale_pane_g7

0xb387,	// (0x00098da7) cams2_slider_pane_g3

0xc9bb,	// (0x0009a3db) cams2_slider_pane_g4

0xa76c,	// (0x0009818c) cams2_slider_pane_g5

0xb387,	// (0x00098da7) cams2_slider_pane_g6

0xa774,	// (0x00098194) cams2_slider_pane_g7

0xcbec,	// (0x0009a60c) camera2_autofocus_pane_cp_g1

0xc78f,	// (0x0009a1af) bg_popup_preview_window_pane_cp02_ParamLimits

0xc78f,	// (0x0009a1af) bg_popup_preview_window_pane_cp02

0xceda,	// (0x0009a8fa) list_fp_cale_pane_ParamLimits

0xceda,	// (0x0009a8fa) list_fp_cale_pane

0xcee6,	// (0x0009a906) popup_fixed_preview_cale_window_t1_ParamLimits

0xcee6,	// (0x0009a906) popup_fixed_preview_cale_window_t1

0x5778,	// (0x00093198) popup_fixed_preview_cale_window_t2_ParamLimits

0x5778,	// (0x00093198) popup_fixed_preview_cale_window_t2

0x578d,	// (0x000931ad) popup_fixed_preview_cale_window_t3_ParamLimits

0x578d,	// (0x000931ad) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b1,	// (0x0009d1d1) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b1,	// (0x0009d1d1) popup_fixed_preview_cale_window_t

0x57a2,	// (0x000931c2) list_single_fp_cale_pane_ParamLimits

0x57a2,	// (0x000931c2) list_single_fp_cale_pane

0xcf04,	// (0x0009a924) list_single_fp_cale_pane_g1_ParamLimits

0xcf04,	// (0x0009a924) list_single_fp_cale_pane_g1

0xcf10,	// (0x0009a930) list_single_fp_cale_pane_g2_ParamLimits

0xcf10,	// (0x0009a930) list_single_fp_cale_pane_g2

0x0002,

0xf7b8,	// (0x0009d1d8) list_single_fp_cale_pane_g_ParamLimits

0xf7b8,	// (0x0009d1d8) list_single_fp_cale_pane_g

0xcf29,	// (0x0009a949) list_single_fp_cale_pane_t1_ParamLimits

0xcf29,	// (0x0009a949) list_single_fp_cale_pane_t1

0xcf3b,	// (0x0009a95b) list_single_fp_cale_pane_t2_ParamLimits

0xcf3b,	// (0x0009a95b) list_single_fp_cale_pane_t2

0x0001,

0xf7bf,	// (0x0009d1df) list_single_fp_cale_pane_t_ParamLimits

0xf7bf,	// (0x0009d1df) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x99a9,	// (0x000973c9) main_dialer_pane

0x57b7,	// (0x000931d7) aid_cell_size_keypad

0x57c1,	// (0x000931e1) dialer_ne_pane

0x57cb,	// (0x000931eb) grid_dialer_command_1_pane

0x57d3,	// (0x000931f3) grid_dialer_command_2_pane

0x57db,	// (0x000931fb) grid_dialer_keypad_pane

0x57ed,	// (0x0009320d) bg_popup_call_pane_cp06_ParamLimits

0x57ed,	// (0x0009320d) bg_popup_call_pane_cp06

0x57f9,	// (0x00093219) dialer_ne_clear_pane_ParamLimits

0x57f9,	// (0x00093219) dialer_ne_clear_pane

0xcf6e,	// (0x0009a98e) dialer_ne_pane_g1

0xcf76,	// (0x0009a996) dialer_ne_pane_t1_ParamLimits

0xcf76,	// (0x0009a996) dialer_ne_pane_t1

0x5805,	// (0x00093225) dialer_ne_pane_t2_ParamLimits

0x5805,	// (0x00093225) dialer_ne_pane_t2

0x582f,	// (0x0009324f) dialer_ne_pane_t3_ParamLimits

0x582f,	// (0x0009324f) dialer_ne_pane_t3

0x0002,

0xf7c4,	// (0x0009d1e4) dialer_ne_pane_t_ParamLimits

0xf7c4,	// (0x0009d1e4) dialer_ne_pane_t

0x585f,	// (0x0009327f) dialer_ne_pane_t3_copy1_ParamLimits

0x585f,	// (0x0009327f) dialer_ne_pane_t3_copy1

0x588e,	// (0x000932ae) cell_dialer_keypad_pane_ParamLimits

0x588e,	// (0x000932ae) cell_dialer_keypad_pane

0x58a5,	// (0x000932c5) cell_dialer_command_1_pane_ParamLimits

0x58a5,	// (0x000932c5) cell_dialer_command_1_pane

0x58bb,	// (0x000932db) cell_dialer_command_2_pane_ParamLimits

0x58bb,	// (0x000932db) cell_dialer_command_2_pane

0xcf88,	// (0x0009a9a8) bg_button_pane_cp02_ParamLimits

0xcf88,	// (0x0009a9a8) bg_button_pane_cp02

0x58ca,	// (0x000932ea) cell_dialer_keypad_pane_g1_ParamLimits

0x58ca,	// (0x000932ea) cell_dialer_keypad_pane_g1

0xcf88,	// (0x0009a9a8) bg_button_pane_cp03_ParamLimits

0xcf88,	// (0x0009a9a8) bg_button_pane_cp03

0x58df,	// (0x000932ff) cell_dialer_command_1_pane_g1_ParamLimits

0x58df,	// (0x000932ff) cell_dialer_command_1_pane_g1

0xcf94,	// (0x0009a9b4) bg_button_pane_cp04

0x58f3,	// (0x00093313) cell_dialer_command_2_pane_g1

0xa389,	// (0x00097da9) bg_button_pane_cp06

0xcf9c,	// (0x0009a9bc) dialer_ne_clear_pane_g1

0x31fb,	// (0x00090c1b) navi_pane_g2

0x3229,	// (0x00090c49) navi_pane_g3

0x0002,

0xf3ec,	// (0x0009ce0c) navi_pane_g

0x3254,	// (0x00090c74) navi_pane_mv_g2

0x327b,	// (0x00090c9b) navi_pane_mv_g5

0x3283,	// (0x00090ca3) navi_pane_mv_t1

0xa15d,	// (0x00097b7d) main_clock2_pane

0x593e,	// (0x0009335e) main_clock2_list_pane_ParamLimits

0x593e,	// (0x0009335e) main_clock2_list_pane

0x5976,	// (0x00093396) main_clock2_pane_t1_ParamLimits

0x5976,	// (0x00093396) main_clock2_pane_t1

0x59b2,	// (0x000933d2) main_clock2_pane_t2_ParamLimits

0x59b2,	// (0x000933d2) main_clock2_pane_t2

0x0004,

0xf7d0,	// (0x0009d1f0) main_clock2_pane_t_ParamLimits

0xf7d0,	// (0x0009d1f0) main_clock2_pane_t

0x5a52,	// (0x00093472) popup_clock_analogue_window_cp03_ParamLimits

0x5a52,	// (0x00093472) popup_clock_analogue_window_cp03

0x5a79,	// (0x00093499) popup_clock_digital_window_cp02_ParamLimits

0x5a79,	// (0x00093499) popup_clock_digital_window_cp02

0x5af2,	// (0x00093512) main_clock2_list_single_pane_ParamLimits

0x5af2,	// (0x00093512) main_clock2_list_single_pane

0xa389,	// (0x00097da9) list_highlight_pane_cp05

0xcfd8,	// (0x0009a9f8) main_clock2_list_single_pane_t1

0x1e0e,	// (0x0008f82e) popup_toolbar_window_cp04_ParamLimits

0x4ee8,	// (0x00092908) camera2_autofocus_pane_g2_ParamLimits

0x4ee8,	// (0x00092908) camera2_autofocus_pane_g2

0x4ef4,	// (0x00092914) camera2_autofocus_pane_g3_ParamLimits

0x4ef4,	// (0x00092914) camera2_autofocus_pane_g3

0x4f00,	// (0x00092920) camera2_autofocus_pane_g4_ParamLimits

0x4f00,	// (0x00092920) camera2_autofocus_pane_g4

0x4f0c,	// (0x0009292c) camera2_autofocus_pane_g5_ParamLimits

0x4f0c,	// (0x0009292c) camera2_autofocus_pane_g5

0x0004,

0xf714,	// (0x0009d134) camera2_autofocus_pane_g_ParamLimits

0xf714,	// (0x0009d134) camera2_autofocus_pane_g

0x5119,	// (0x00092b39) camera2_autofocus_pane_cp_g2

0x5121,	// (0x00092b41) camera2_autofocus_pane_cp_g3

0x5129,	// (0x00092b49) camera2_autofocus_pane_cp_g4

0x5131,	// (0x00092b51) camera2_autofocus_pane_cp_g5

0x0004,

0xf77a,	// (0x0009d19a) camera2_autofocus_pane_cp_g

0x57e5,	// (0x00093205) popup_dialer_spcha_window

0x99a9,	// (0x000973c9) bg_popup_sub_pane_cp07

0xcfe6,	// (0x0009aa06) list_spcha_pane

0xcfee,	// (0x0009aa0e) list_single_spcha_pane_ParamLimits

0xcfee,	// (0x0009aa0e) list_single_spcha_pane

0x99a9,	// (0x000973c9) list_highlight_pane_cp06

0xcfff,	// (0x0009aa1f) list_single_spcha_pane_t1

0xc1d4,	// (0x00099bf4) popup_call2_audio_out_window_g4_ParamLimits

0xc1d4,	// (0x00099bf4) popup_call2_audio_out_window_g4

0x99a9,	// (0x000973c9) main_imed2_pane

0xc7c7,	// (0x0009a1e7) popup_imed_adjust2_window

0x429a,	// (0x00091cba) popup_imed_trans_window_ParamLimits

0x429a,	// (0x00091cba) popup_imed_trans_window

0xca24,	// (0x0009a444) popup_blid_sat_info2_window_t1

0xca32,	// (0x0009a452) popup_blid_sat_info2_window_t2

0x000a,

0xf6a9,	// (0x0009d0c9) popup_blid_sat_info2_window_t

0x5ba8,	// (0x000935c8) aid_size_cell_colour_35

0x5bc8,	// (0x000935e8) aid_size_cell_colour_112

0x5be8,	// (0x00093608) aid_size_cell_effect

0xc79b,	// (0x0009a1bb) bg_tb_trans_pane_cp02

0xaede,	// (0x000988fe) heading_imed_pane

0x5c08,	// (0x00093628) listscroll_imed_pane

0xd00d,	// (0x0009aa2d) heading_imed_pane_g1

0xd015,	// (0x0009aa35) heading_imed_pane_t1

0xd023,	// (0x0009aa43) grid_imed_colour_35_pane_ParamLimits

0xd023,	// (0x0009aa43) grid_imed_colour_35_pane

0x5c14,	// (0x00093634) grid_imed_effect_pane

0xd03f,	// (0x0009aa5f) list_imed_aspect_pane

0x5c29,	// (0x00093649) scroll_pane_cp027_ParamLimits

0x5c29,	// (0x00093649) scroll_pane_cp027

0x5c3a,	// (0x0009365a) cell_imed_effect_pane_ParamLimits

0x5c3a,	// (0x0009365a) cell_imed_effect_pane

0xd047,	// (0x0009aa67) cell_imed_colour_pane_ParamLimits

0xd047,	// (0x0009aa67) cell_imed_colour_pane

0xd091,	// (0x0009aab1) cell_imed_colour_pane_g1_ParamLimits

0xd091,	// (0x0009aab1) cell_imed_colour_pane_g1

0xd0a2,	// (0x0009aac2) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0a2,	// (0x0009aac2) hgihlgiht_grid_pane_cp016

0x5c65,	// (0x00093685) cell_imed_effect_pane_g1

0x5c6d,	// (0x0009368d) grid_highlight_pane_cp017

0xd0b3,	// (0x0009aad3) list_imed_single_pane_ParamLimits

0xd0b3,	// (0x0009aad3) list_imed_single_pane

0x99a9,	// (0x000973c9) list_highlight_pane_cp07

0xd0c7,	// (0x0009aae7) list_imed_aspect_pane_comp1_t1

0xc79b,	// (0x0009a1bb) bg_tb_trans_pane_cp05

0xd0e9,	// (0x0009ab09) popup_imed_adjust2_window_g1

0xd110,	// (0x0009ab30) popup_imed_adjust2_window_t1

0xd128,	// (0x0009ab48) slider_imed_adjust_pane

0xd13c,	// (0x0009ab5c) slider_imed_adjust_pane_g1

0xd14c,	// (0x0009ab6c) slider_imed_adjust_pane_g2

0xd15c,	// (0x0009ab7c) slider_imed_adjust_pane_g3

0xd16d,	// (0x0009ab8d) slider_imed_adjust_pane_g4

0x0003,

0xf7ed,	// (0x0009d20d) slider_imed_adjust_pane_g

0x5c76,	// (0x00093696) aid_size_cell_clipart2

0x5c82,	// (0x000936a2) grid_imed_clipart_pane

0xd17e,	// (0x0009ab9e) scroll_pane_cp031

0x5c8c,	// (0x000936ac) cell_imed_clipart_pane_ParamLimits

0x5c8c,	// (0x000936ac) cell_imed_clipart_pane

0x5ca9,	// (0x000936c9) cell_imed_clipart_pane_g1

0x99a9,	// (0x000973c9) grid_highlight_pane_cp014

0x5953,	// (0x00093373) main_clock2_pane_g1_ParamLimits

0x5953,	// (0x00093373) main_clock2_pane_g1

0x5a99,	// (0x000934b9) aid_call2_pane_cp10

0x5aab,	// (0x000934cb) aid_call_pane_cp10

0xb2b3,	// (0x00098cd3) popup_clock_analogue_window_cp10_g1

0xb2b3,	// (0x00098cd3) popup_clock_analogue_window_cp10_g2

0x5abd,	// (0x000934dd) popup_clock_analogue_window_cp10_g3

0x5abd,	// (0x000934dd) popup_clock_analogue_window_cp10_g4

0xb2b3,	// (0x00098cd3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7db,	// (0x0009d1fb) popup_clock_analogue_window_cp10_g

0x5ad3,	// (0x000934f3) popup_clock_analogue_window_cp10_t1

0x5b04,	// (0x00093524) clock_digital_number_pane_cp10_ParamLimits

0x5b04,	// (0x00093524) clock_digital_number_pane_cp10

0x5b1e,	// (0x0009353e) clock_digital_number_pane_cp11_ParamLimits

0x5b1e,	// (0x0009353e) clock_digital_number_pane_cp11

0x5b38,	// (0x00093558) clock_digital_number_pane_cp12_ParamLimits

0x5b38,	// (0x00093558) clock_digital_number_pane_cp12

0x5b52,	// (0x00093572) clock_digital_number_pane_cp13_ParamLimits

0x5b52,	// (0x00093572) clock_digital_number_pane_cp13

0x5b6c,	// (0x0009358c) clock_digital_separator_pane_cp10_ParamLimits

0x5b6c,	// (0x0009358c) clock_digital_separator_pane_cp10

0x5b86,	// (0x000935a6) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b86,	// (0x000935a6) popup_clock_digital_window_cp02_t1

0xa06e,	// (0x00097a8e) clock_digital_number_pane_cp10_g1

0xa06e,	// (0x00097a8e) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f6,	// (0x0009d216) clock_digital_number_pane_cp10_g

0xa06e,	// (0x00097a8e) clock_digital_separator_pane_cp10_g1

0xa06e,	// (0x00097a8e) clock_digital_separator_pane_g2_cp10

0xb34e,	// (0x00098d6e) navi_pane_vded_g4

0xb357,	// (0x00098d77) navi_pane_vded_g5

0xb360,	// (0x00098d80) navi_pane_vded_t1

0x99a9,	// (0x000973c9) main_vded_pane

0x5cb2,	// (0x000936d2) main_vded_pane_g1

0x5cbe,	// (0x000936de) main_vded_pane_g2

0x5cca,	// (0x000936ea) main_vded_pane_g3

0x0002,

0xf7fb,	// (0x0009d21b) main_vded_pane_g

0x5cd6,	// (0x000936f6) main_vded_pane_t1

0x5ce4,	// (0x00093704) main_vded_pane_t2

0x0001,

0xf802,	// (0x0009d222) main_vded_pane_t

0x5cf2,	// (0x00093712) vded_slider_pane

0x5cfc,	// (0x0009371c) vded_video_pane

0xd186,	// (0x0009aba6) vded_video_pane_g1

0x5d06,	// (0x00093726) vded_video_pane_g2

0xcbec,	// (0x0009a60c) vded_video_pane_g3

0x0002,

0xf807,	// (0x0009d227) vded_video_pane_g

0xd190,	// (0x0009abb0) vded_slider_pane_g1

0xc939,	// (0x0009a359) vded_slider_pane_g2

0xd199,	// (0x0009abb9) vded_slider_pane_g3

0xd1a2,	// (0x0009abc2) vded_slider_pane_g4

0xd1ab,	// (0x0009abcb) vded_slider_pane_g5

0x0004,

0xf80e,	// (0x0009d22e) vded_slider_pane_g

0x56c4,	// (0x000930e4) mup3_rocker_pane_ParamLimits

0x56c4,	// (0x000930e4) mup3_rocker_pane

0x5d0f,	// (0x0009372f) mup3_control_keys_pane_g1

0x5d17,	// (0x00093737) mup3_control_keys_pane_g2

0x5d1f,	// (0x0009373f) mup3_control_keys_pane_g3

0x5d27,	// (0x00093747) mup3_control_keys_pane_g4

0x0003,

0xf819,	// (0x0009d239) mup3_control_keys_pane_g

0x0bf8,	// (0x0008e618) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bf8,	// (0x0008e618) popup_toolbar2_fixed_window_cp01

0x56fa,	// (0x0009311a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x56fa,	// (0x0009311a) popup_toolbar2_fixed_window_cp02

0xbb13,	// (0x00099533) popup_call2_audio_second_window_t4_ParamLimits

0xbb13,	// (0x00099533) popup_call2_audio_second_window_t4

0xc041,	// (0x00099a61) popup_call2_audio_first_window_t6_ParamLimits

0xc041,	// (0x00099a61) popup_call2_audio_first_window_t6

0xc2d7,	// (0x00099cf7) popup_call2_audio_out_window_t6_ParamLimits

0xc2d7,	// (0x00099cf7) popup_call2_audio_out_window_t6

0x99a9,	// (0x000973c9) main_vitu_pane

0x5d37,	// (0x00093757) aid_size_cell_itu_ParamLimits

0x5d37,	// (0x00093757) aid_size_cell_itu

0x99fa,	// (0x0009741a) bg_popup_window_pane_cp08_ParamLimits

0x99fa,	// (0x0009741a) bg_popup_window_pane_cp08

0x5d4d,	// (0x0009376d) field_vitu_entry_pane_ParamLimits

0x5d4d,	// (0x0009376d) field_vitu_entry_pane

0x5d64,	// (0x00093784) grid_vitu_function_pane_ParamLimits

0x5d64,	// (0x00093784) grid_vitu_function_pane

0x5d7f,	// (0x0009379f) grid_vitu_itu_pane_ParamLimits

0x5d7f,	// (0x0009379f) grid_vitu_itu_pane

0x5d9d,	// (0x000937bd) cell_vitu_itu_pane_ParamLimits

0x5d9d,	// (0x000937bd) cell_vitu_itu_pane

0x5dc3,	// (0x000937e3) cell_vitu_function_pane_ParamLimits

0x5dc3,	// (0x000937e3) cell_vitu_function_pane

0x99fa,	// (0x0009741a) bg_popup_sub_pane_cp08_ParamLimits

0x99fa,	// (0x0009741a) bg_popup_sub_pane_cp08

0x5dde,	// (0x000937fe) field_vitu_entry_pane_t1_ParamLimits

0x5dde,	// (0x000937fe) field_vitu_entry_pane_t1

0xd1cc,	// (0x0009abec) field_vitu_entry_pane_t2_ParamLimits

0xd1cc,	// (0x0009abec) field_vitu_entry_pane_t2

0x0001,

0xf827,	// (0x0009d247) field_vitu_entry_pane_t_ParamLimits

0xf827,	// (0x0009d247) field_vitu_entry_pane_t

0xd1e9,	// (0x0009ac09) bg_button_pane_cp05_ParamLimits

0xd1e9,	// (0x0009ac09) bg_button_pane_cp05

0x5dfe,	// (0x0009381e) cell_vitu_itu_pane_g1

0x5e16,	// (0x00093836) cell_vitu_itu_pane_t1_ParamLimits

0x5e16,	// (0x00093836) cell_vitu_itu_pane_t1

0x5e28,	// (0x00093848) cell_vitu_itu_pane_t2_ParamLimits

0x5e28,	// (0x00093848) cell_vitu_itu_pane_t2

0x0002,

0xf82c,	// (0x0009d24c) cell_vitu_itu_pane_t_ParamLimits

0xf82c,	// (0x0009d24c) cell_vitu_itu_pane_t

0xd1f7,	// (0x0009ac17) bg_button_pane_cp07

0x5e5d,	// (0x0009387d) cell_vitu_function_pane_g1

0xa0fd,	// (0x00097b1d) main_calc_pane_g1

0x0a04,	// (0x0008e424) aid_visual_content_pane

0x99a9,	// (0x000973c9) main_vradio_pane

0x5e66,	// (0x00093886) main_vradio_pane_g1_ParamLimits

0x5e66,	// (0x00093886) main_vradio_pane_g1

0xd201,	// (0x0009ac21) main_vradio_pane_g2_ParamLimits

0xd201,	// (0x0009ac21) main_vradio_pane_g2

0x0001,

0xf833,	// (0x0009d253) main_vradio_pane_g_ParamLimits

0xf833,	// (0x0009d253) main_vradio_pane_g

0x5e7d,	// (0x0009389d) main_vradio_pane_t1_ParamLimits

0x5e7d,	// (0x0009389d) main_vradio_pane_t1

0x5e92,	// (0x000938b2) main_vradio_pane_t2_ParamLimits

0x5e92,	// (0x000938b2) main_vradio_pane_t2

0xd20e,	// (0x0009ac2e) main_vradio_pane_t3_ParamLimits

0xd20e,	// (0x0009ac2e) main_vradio_pane_t3

0x0002,

0xf838,	// (0x0009d258) main_vradio_pane_t_ParamLimits

0xf838,	// (0x0009d258) main_vradio_pane_t

0x5ea7,	// (0x000938c7) vradio_rocker_control_pane_ParamLimits

0x5ea7,	// (0x000938c7) vradio_rocker_control_pane

0x5eb9,	// (0x000938d9) vradio_station_info_pane_ParamLimits

0x5eb9,	// (0x000938d9) vradio_station_info_pane

0xd222,	// (0x0009ac42) vradio_frequency_info_pane_ParamLimits

0xd222,	// (0x0009ac42) vradio_frequency_info_pane

0xcbec,	// (0x0009a60c) vradio_station_info_pane_g1

0xd231,	// (0x0009ac51) vradio_station_info_pane_t1_ParamLimits

0xd231,	// (0x0009ac51) vradio_station_info_pane_t1

0xd253,	// (0x0009ac73) vradio_station_info_pane_t2_ParamLimits

0xd253,	// (0x0009ac73) vradio_station_info_pane_t2

0x0001,

0xf83f,	// (0x0009d25f) vradio_station_info_pane_t_ParamLimits

0xf83f,	// (0x0009d25f) vradio_station_info_pane_t

0xd265,	// (0x0009ac85) vradio_tuning_pane

0xd26d,	// (0x0009ac8d) vradio_rocker_control_pane_g1

0xd275,	// (0x0009ac95) vradio_rocker_control_pane_g2

0xd27d,	// (0x0009ac9d) vradio_rocker_control_pane_g3

0xd285,	// (0x0009aca5) vradio_rocker_control_pane_g4

0xd28d,	// (0x0009acad) vradio_rocker_control_pane_g5

0x0004,

0xf844,	// (0x0009d264) vradio_rocker_control_pane_g

0x5ec9,	// (0x000938e9) vradio_frequency_info_pane_g1

0xd295,	// (0x0009acb5) vradio_frequency_info_pane_t1_ParamLimits

0xd295,	// (0x0009acb5) vradio_frequency_info_pane_t1

0x5ed3,	// (0x000938f3) vradio_tuning_pane_g1

0x5ede,	// (0x000938fe) vradio_tuning_pane_t1

0x99c7,	// (0x000973e7) area_side_right_pane_ParamLimits

0x99c7,	// (0x000973e7) area_side_right_pane

0xc756,	// (0x0009a176) status_small_pane_g1

0xc75e,	// (0x0009a17e) status_small_pane_g2

0xc767,	// (0x0009a187) status_small_pane_g3

0xc770,	// (0x0009a190) status_small_pane_g4

0x0003,

0xf5ff,	// (0x0009d01f) status_small_pane_g

0xc779,	// (0x0009a199) status_small_pane_t1

0x99a9,	// (0x000973c9) main_video3_pane

0xd2a9,	// (0x0009acc9) cams_zoom_vslider_pane

0xd2b1,	// (0x0009acd1) image3_wide_pane_ParamLimits

0xd2b1,	// (0x0009acd1) image3_wide_pane

0xd2cb,	// (0x0009aceb) image3_wide_small_pane

0xd2df,	// (0x0009acff) main_video3_pane_g1_ParamLimits

0xd2df,	// (0x0009acff) main_video3_pane_g1

0xd2fb,	// (0x0009ad1b) main_video3_pane_g2_ParamLimits

0xd2fb,	// (0x0009ad1b) main_video3_pane_g2

0x0001,

0xf84f,	// (0x0009d26f) main_video3_pane_g_ParamLimits

0xf84f,	// (0x0009d26f) main_video3_pane_g

0xd317,	// (0x0009ad37) main_video3_pane_t1_ParamLimits

0xd317,	// (0x0009ad37) main_video3_pane_t1

0xd342,	// (0x0009ad62) main_video3_pane_t2_ParamLimits

0xd342,	// (0x0009ad62) main_video3_pane_t2

0xd36f,	// (0x0009ad8f) main_video3_pane_t3_ParamLimits

0xd36f,	// (0x0009ad8f) main_video3_pane_t3

0x0002,

0xf854,	// (0x0009d274) main_video3_pane_t_ParamLimits

0xf854,	// (0x0009d274) main_video3_pane_t

0xd39c,	// (0x0009adbc) cams_zoom_vslider_pane_g1

0xd3a5,	// (0x0009adc5) cams_zoom_vslider_pane_g2

0x0001,

0xf85b,	// (0x0009d27b) cams_zoom_vslider_pane_g

0xd3ad,	// (0x0009adcd) small_slider_vertical_pane

0xcbec,	// (0x0009a60c) small_slider_vertical_pane_g1

0xcbec,	// (0x0009a60c) small_slider_vertical_pane_g2

0xd3b5,	// (0x0009add5) small_slider_vertical_pane_g3

0x0002,

0xf860,	// (0x0009d280) small_slider_vertical_pane_g

0x99a9,	// (0x000973c9) main_hwr_training_pane

0xd3be,	// (0x0009adde) hwr_training_instruct_pane_ParamLimits

0xd3be,	// (0x0009adde) hwr_training_instruct_pane

0x5eed,	// (0x0009390d) hwr_training_navi_pane_ParamLimits

0x5eed,	// (0x0009390d) hwr_training_navi_pane

0x5f0c,	// (0x0009392c) hwr_training_write_pane_ParamLimits

0x5f0c,	// (0x0009392c) hwr_training_write_pane

0x99a9,	// (0x000973c9) bg_frame_shadow_pane

0xd3f5,	// (0x0009ae15) hwr_training_write_pane_g1

0xd3fd,	// (0x0009ae1d) hwr_training_write_pane_g2

0xd405,	// (0x0009ae25) hwr_training_write_pane_g3

0xd40d,	// (0x0009ae2d) hwr_training_write_pane_g4

0xd415,	// (0x0009ae35) hwr_training_write_pane_g5

0xd41d,	// (0x0009ae3d) hwr_training_write_pane_g6

0xd425,	// (0x0009ae45) hwr_training_write_pane_g7

0x0006,

0xf867,	// (0x0009d287) hwr_training_write_pane_g

0xa789,	// (0x000981a9) hwr_training_navi_pane_g1_ParamLimits

0xa789,	// (0x000981a9) hwr_training_navi_pane_g1

0xa79b,	// (0x000981bb) hwr_training_navi_pane_g2_ParamLimits

0xa79b,	// (0x000981bb) hwr_training_navi_pane_g2

0xa7ad,	// (0x000981cd) hwr_training_navi_pane_g3_ParamLimits

0xa7ad,	// (0x000981cd) hwr_training_navi_pane_g3

0xa7bd,	// (0x000981dd) hwr_training_navi_pane_g4_ParamLimits

0xa7bd,	// (0x000981dd) hwr_training_navi_pane_g4

0x0004,

0xf876,	// (0x0009d296) hwr_training_navi_pane_g_ParamLimits

0xf876,	// (0x0009d296) hwr_training_navi_pane_g

0xa7ca,	// (0x000981ea) hwr_training_navi_pane_t1

0x5f54,	// (0x00093974) list_single_hwr_training_instruct_pane_ParamLimits

0x5f54,	// (0x00093974) list_single_hwr_training_instruct_pane

0xd42d,	// (0x0009ae4d) list_single_hwr_training_instruct_pane_t1

0xcb2c,	// (0x0009a54c) bg_frame_shadow_pane_g1

0xd43c,	// (0x0009ae5c) bg_frame_shadow_pane_g2

0xd444,	// (0x0009ae64) bg_frame_shadow_pane_g3

0xd44c,	// (0x0009ae6c) bg_frame_shadow_pane_g4

0xd454,	// (0x0009ae74) bg_frame_shadow_pane_g5

0xd45c,	// (0x0009ae7c) bg_frame_shadow_pane_g6

0xd464,	// (0x0009ae84) bg_frame_shadow_pane_g7

0xa256,	// (0x00097c76) bg_frame_shadow_pane_g8

0x0007,

0xf881,	// (0x0009d2a1) bg_frame_shadow_pane_g

0x99a9,	// (0x000973c9) main_video_tele_dialer_pane

0x5f69,	// (0x00093989) aid_size_cell_video_keypad_ParamLimits

0x5f69,	// (0x00093989) aid_size_cell_video_keypad

0x5f83,	// (0x000939a3) grid_video_dialer_keypad_pane_ParamLimits

0x5f83,	// (0x000939a3) grid_video_dialer_keypad_pane

0x5fcf,	// (0x000939ef) video_down_pane_cp_ParamLimits

0x5fcf,	// (0x000939ef) video_down_pane_cp

0x5fff,	// (0x00093a1f) cell_video_dialer_keypad_pane_ParamLimits

0x5fff,	// (0x00093a1f) cell_video_dialer_keypad_pane

0xd46c,	// (0x0009ae8c) bg_button_pane_cp08_ParamLimits

0xd46c,	// (0x0009ae8c) bg_button_pane_cp08

0x6023,	// (0x00093a43) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6023,	// (0x00093a43) cell_video_dialer_keypad_pane_g1

0x56ae,	// (0x000930ce) mup3_rocker2_pane_ParamLimits

0x56ae,	// (0x000930ce) mup3_rocker2_pane

0xcbec,	// (0x0009a60c) mup3_rocker2_pane_g1

0x4167,	// (0x00091b87) main_dialer2_pane

0x99a9,	// (0x000973c9) main_mp4_pane

0xa7e0,	// (0x00098200) main_mp4_pane_g1_ParamLimits

0xa7e0,	// (0x00098200) main_mp4_pane_g1

0xa7e0,	// (0x00098200) main_mp4_pane_g2_ParamLimits

0xa7e0,	// (0x00098200) main_mp4_pane_g2

0x605e,	// (0x00093a7e) main_mp4_pane_g3_ParamLimits

0x605e,	// (0x00093a7e) main_mp4_pane_g3

0xa7ee,	// (0x0009820e) main_mp4_pane_g4_ParamLimits

0xa7ee,	// (0x0009820e) main_mp4_pane_g4

0xa816,	// (0x00098236) main_mp4_pane_g5_ParamLimits

0xa816,	// (0x00098236) main_mp4_pane_g5

0x0005,

0xf8a1,	// (0x0009d2c1) main_mp4_pane_g_ParamLimits

0xf8a1,	// (0x0009d2c1) main_mp4_pane_g

0xa866,	// (0x00098286) main_mp4_pane_t1_ParamLimits

0xa866,	// (0x00098286) main_mp4_pane_t1

0xa8c2,	// (0x000982e2) main_mp4_pane_t2_ParamLimits

0xa8c2,	// (0x000982e2) main_mp4_pane_t2

0xd478,	// (0x0009ae98) main_mp4_pane_t3_ParamLimits

0xd478,	// (0x0009ae98) main_mp4_pane_t3

0xa914,	// (0x00098334) main_mp4_pane_t4_ParamLimits

0xa914,	// (0x00098334) main_mp4_pane_t4

0x0003,

0xf8ae,	// (0x0009d2ce) main_mp4_pane_t_ParamLimits

0xf8ae,	// (0x0009d2ce) main_mp4_pane_t

0xa954,	// (0x00098374) mp4_progress_pane_ParamLimits

0xa954,	// (0x00098374) mp4_progress_pane

0xa99e,	// (0x000983be) mp4_rocker_pane_ParamLimits

0xa99e,	// (0x000983be) mp4_rocker_pane

0xd4a0,	// (0x0009aec0) mp4_progress_pane_t1

0xd4b9,	// (0x0009aed9) mp4_progress_pane_t2

0x0001,

0xf8b7,	// (0x0009d2d7) mp4_progress_pane_t

0xd4d2,	// (0x0009aef2) mup_progress_pane_cp04

0xcbec,	// (0x0009a60c) mp4_rocker_pane_g1

0x60a8,	// (0x00093ac8) aid_cell_size_keypad2_ParamLimits

0x60a8,	// (0x00093ac8) aid_cell_size_keypad2

0x60be,	// (0x00093ade) dialer2_ne_pane_ParamLimits

0x60be,	// (0x00093ade) dialer2_ne_pane

0x60d6,	// (0x00093af6) grid_dialer2_keypad_pane_ParamLimits

0x60d6,	// (0x00093af6) grid_dialer2_keypad_pane

0xc9cb,	// (0x0009a3eb) bg_popup_call_pane_cp07_ParamLimits

0xc9cb,	// (0x0009a3eb) bg_popup_call_pane_cp07

0x60f2,	// (0x00093b12) dialer2_ne_pane_t1_ParamLimits

0x60f2,	// (0x00093b12) dialer2_ne_pane_t1

0x612d,	// (0x00093b4d) cell_dialer2_keypad_pane_ParamLimits

0x612d,	// (0x00093b4d) cell_dialer2_keypad_pane

0xd4f0,	// (0x0009af10) bg_button_pane_pane_cp04_ParamLimits

0xd4f0,	// (0x0009af10) bg_button_pane_pane_cp04

0x6151,	// (0x00093b71) cell_dialer2_keypad_pane_g1_ParamLimits

0x6151,	// (0x00093b71) cell_dialer2_keypad_pane_g1

0x1cf5,	// (0x0008f715) aid_placing_vt_set_content_ParamLimits

0x1cf5,	// (0x0008f715) aid_placing_vt_set_content

0x1d19,	// (0x0008f739) aid_placing_vt_set_title_ParamLimits

0x1d19,	// (0x0008f739) aid_placing_vt_set_title

0x99a9,	// (0x000973c9) main_image3_pane

0x6217,	// (0x00093c37) area_side_right_pane_cp01_ParamLimits

0x6217,	// (0x00093c37) area_side_right_pane_cp01

0xa7e0,	// (0x00098200) main_image3_pane_g1_ParamLimits

0xa7e0,	// (0x00098200) main_image3_pane_g1

0x6230,	// (0x00093c50) main_image3_pane_g2_ParamLimits

0x6230,	// (0x00093c50) main_image3_pane_g2

0x6258,	// (0x00093c78) main_image3_pane_g3_ParamLimits

0x6258,	// (0x00093c78) main_image3_pane_g3

0x6282,	// (0x00093ca2) main_image3_pane_g4_ParamLimits

0x6282,	// (0x00093ca2) main_image3_pane_g4

0x0003,

0xf8c6,	// (0x0009d2e6) main_image3_pane_g_ParamLimits

0xf8c6,	// (0x0009d2e6) main_image3_pane_g

0x62ac,	// (0x00093ccc) main_image3_pane_t1_ParamLimits

0x62ac,	// (0x00093ccc) main_image3_pane_t1

0x6304,	// (0x00093d24) main_image3_pane_t2_ParamLimits

0x6304,	// (0x00093d24) main_image3_pane_t2

0x6356,	// (0x00093d76) main_image3_pane_t3_ParamLimits

0x6356,	// (0x00093d76) main_image3_pane_t3

0x0003,

0xf8cf,	// (0x0009d2ef) main_image3_pane_t_ParamLimits

0xf8cf,	// (0x0009d2ef) main_image3_pane_t

0x99fa,	// (0x0009741a) grid_sctrl_middle_pane_cp01_ParamLimits

0x99fa,	// (0x0009741a) grid_sctrl_middle_pane_cp01

0x63de,	// (0x00093dfe) cell_sctrl_middle_pane_cp01_ParamLimits

0x63de,	// (0x00093dfe) cell_sctrl_middle_pane_cp01

0x63fb,	// (0x00093e1b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63fb,	// (0x00093e1b) cell_sctrl_middle_pane_cp01_g1

0x99a9,	// (0x000973c9) main_call4_pane

0x6410,	// (0x00093e30) aid_size_button_call4_ParamLimits

0x6410,	// (0x00093e30) aid_size_button_call4

0x6443,	// (0x00093e63) call4_windows_pane_ParamLimits

0x6443,	// (0x00093e63) call4_windows_pane

0x6465,	// (0x00093e85) grid_call4_button_pane_ParamLimits

0x6465,	// (0x00093e85) grid_call4_button_pane

0xd4fc,	// (0x0009af1c) call4_windows_conf_pane

0x6490,	// (0x00093eb0) popup_call4_audio_first_window_ParamLimits

0x6490,	// (0x00093eb0) popup_call4_audio_first_window

0x64bc,	// (0x00093edc) popup_call4_audio_second_window_ParamLimits

0x64bc,	// (0x00093edc) popup_call4_audio_second_window

0xd539,	// (0x0009af59) popup_call4_audio_wait_window_ParamLimits

0xd539,	// (0x0009af59) popup_call4_audio_wait_window

0x64d2,	// (0x00093ef2) cell_call4_button_pane_ParamLimits

0x64d2,	// (0x00093ef2) cell_call4_button_pane

0x64f9,	// (0x00093f19) bg_button_pane_cp09_ParamLimits

0x64f9,	// (0x00093f19) bg_button_pane_cp09

0x6505,	// (0x00093f25) cell_call4_button_pane_g1_ParamLimits

0x6505,	// (0x00093f25) cell_call4_button_pane_g1

0x652b,	// (0x00093f4b) cell_call4_button_pane_t1_ParamLimits

0x652b,	// (0x00093f4b) cell_call4_button_pane_t1

0xd581,	// (0x0009afa1) popup_call4_audio_conf_window_ParamLimits

0xd581,	// (0x0009afa1) popup_call4_audio_conf_window

0x5710,	// (0x00093130) mup3_progress_pane_t1_ParamLimits

0x572e,	// (0x0009314e) mup3_progress_pane_t2_ParamLimits

0xce97,	// (0x0009a8b7) mup3_progress_pane_t3_ParamLimits

0xf7a3,	// (0x0009d1c3) mup3_progress_pane_t_ParamLimits

0xceb4,	// (0x0009a8d4) mup_progress_pane_cp03_ParamLimits

0x5d2f,	// (0x0009374f) mup3_control_keys_pane_g4_copy1

0xa982,	// (0x000983a2) mp4_rocker2_pane_ParamLimits

0xa982,	// (0x000983a2) mp4_rocker2_pane

0xd59b,	// (0x0009afbb) mp4_rocker2_pane_g1

0xd5a3,	// (0x0009afc3) mp4_rocker2_pane_g2

0xa9f4,	// (0x00098414) mp4_rocker2_pane_g3

0xa9fc,	// (0x0009841c) mp4_rocker2_pane_g4

0xaa04,	// (0x00098424) mp4_rocker2_pane_g5

0x0004,

0xf8d8,	// (0x0009d2f8) mp4_rocker2_pane_g

0x99a9,	// (0x000973c9) main_camera4_pane

0x99a9,	// (0x000973c9) main_video4_pane

0x5f9d,	// (0x000939bd) main_video_tele_dialer_pane_t1_ParamLimits

0x5f9d,	// (0x000939bd) main_video_tele_dialer_pane_t1

0x5fb6,	// (0x000939d6) main_video_tele_dialer_pane_t2_ParamLimits

0x5fb6,	// (0x000939d6) main_video_tele_dialer_pane_t2

0x0001,

0xf892,	// (0x0009d2b2) main_video_tele_dialer_pane_t_ParamLimits

0xf892,	// (0x0009d2b2) main_video_tele_dialer_pane_t

0x6569,	// (0x00093f89) cam4_autofocus_pane_ParamLimits

0x6569,	// (0x00093f89) cam4_autofocus_pane

0x657f,	// (0x00093f9f) cam4_image_uncrop_pane_ParamLimits

0x657f,	// (0x00093f9f) cam4_image_uncrop_pane

0x6598,	// (0x00093fb8) cam4_indicators_pane_ParamLimits

0x6598,	// (0x00093fb8) cam4_indicators_pane

0x65c7,	// (0x00093fe7) main_camera4_pane_g1_ParamLimits

0x65c7,	// (0x00093fe7) main_camera4_pane_g1

0x65d9,	// (0x00093ff9) main_camera4_pane_g2_ParamLimits

0x65d9,	// (0x00093ff9) main_camera4_pane_g2

0x65ec,	// (0x0009400c) main_camera4_pane_g3_ParamLimits

0x65ec,	// (0x0009400c) main_camera4_pane_g3

0x65ff,	// (0x0009401f) main_camera4_pane_g4_ParamLimits

0x65ff,	// (0x0009401f) main_camera4_pane_g4

0x6612,	// (0x00094032) main_camera4_pane_g5_ParamLimits

0x6612,	// (0x00094032) main_camera4_pane_g5

0x0005,

0xf8e3,	// (0x0009d303) main_camera4_pane_g_ParamLimits

0xf8e3,	// (0x0009d303) main_camera4_pane_g

0x6636,	// (0x00094056) main_camera4_pane_t1_ParamLimits

0x6636,	// (0x00094056) main_camera4_pane_t1

0xce1c,	// (0x0009a83c) bg_tb_trans_pane_cp06

0xaa32,	// (0x00098452) cam4_indicators_pane_g1

0xaa43,	// (0x00098463) cam4_indicators_pane_g2

0x0002,

0xf8fe,	// (0x0009d31e) cam4_indicators_pane_g

0xaa5b,	// (0x0009847b) cam4_indicators_pane_t1

0x669a,	// (0x000940ba) main_video4_pane_g1_ParamLimits

0x669a,	// (0x000940ba) main_video4_pane_g1

0x66a9,	// (0x000940c9) main_video4_pane_g2_ParamLimits

0x66a9,	// (0x000940c9) main_video4_pane_g2

0x66b8,	// (0x000940d8) main_video4_pane_g3_ParamLimits

0x66b8,	// (0x000940d8) main_video4_pane_g3

0x66c7,	// (0x000940e7) main_video4_pane_g4_ParamLimits

0x66c7,	// (0x000940e7) main_video4_pane_g4

0x0004,

0xf905,	// (0x0009d325) main_video4_pane_g_ParamLimits

0xf905,	// (0x0009d325) main_video4_pane_g

0x66e5,	// (0x00094105) vid4_indicators_pane_ParamLimits

0x66e5,	// (0x00094105) vid4_indicators_pane

0x6713,	// (0x00094133) video4_image_uncrop_cif_pane_ParamLimits

0x6713,	// (0x00094133) video4_image_uncrop_cif_pane

0x672d,	// (0x0009414d) video4_image_uncrop_nhd_pane_ParamLimits

0x672d,	// (0x0009414d) video4_image_uncrop_nhd_pane

0x657f,	// (0x00093f9f) video4_image_uncrop_vga_pane_ParamLimits

0x657f,	// (0x00093f9f) video4_image_uncrop_vga_pane

0x99fa,	// (0x0009741a) bg_tb_trans_pane_cp07

0xaa89,	// (0x000984a9) vid4_indicators_pane_g1

0xaa9f,	// (0x000984bf) vid4_indicators_pane_g2

0xaab3,	// (0x000984d3) vid4_indicators_pane_g3

0x0004,

0xf910,	// (0x0009d330) vid4_indicators_pane_g

0xaae4,	// (0x00098504) vid4_indicators_pane_t1

0x6743,	// (0x00094163) cam4_autofocus_pane_g1

0x674b,	// (0x0009416b) cam4_autofocus_pane_g2

0x6753,	// (0x00094173) cam4_autofocus_pane_g3

0x0002,

0xf91b,	// (0x0009d33b) cam4_autofocus_pane_g

0x675b,	// (0x0009417b) cam4_autofocus_pane_g3_copy1

0x5fe3,	// (0x00093a03) video_down_pane_cp_t1

0x5ff1,	// (0x00093a11) video_down_pane_cp_t2

0x0001,

0xf897,	// (0x0009d2b7) video_down_pane_cp_t

0x99fa,	// (0x0009741a) popup_vitu2_window_ParamLimits

0x99fa,	// (0x0009741a) popup_vitu2_window

0x6763,	// (0x00094183) aid_size_cell2_itu2_ParamLimits

0x6763,	// (0x00094183) aid_size_cell2_itu2

0x6789,	// (0x000941a9) aid_size_cell_itu2_ParamLimits

0x6789,	// (0x000941a9) aid_size_cell_itu2

0x67e9,	// (0x00094209) bg_popup_window_pane_cp09_ParamLimits

0x67e9,	// (0x00094209) bg_popup_window_pane_cp09

0x67f7,	// (0x00094217) field_vitu2_entry_pane_ParamLimits

0x67f7,	// (0x00094217) field_vitu2_entry_pane

0x681f,	// (0x0009423f) grid_vitu2_function_pane_ParamLimits

0x681f,	// (0x0009423f) grid_vitu2_function_pane

0x6870,	// (0x00094290) grid_vitu2_itu_pane_ParamLimits

0x6870,	// (0x00094290) grid_vitu2_itu_pane

0x6904,	// (0x00094324) cell_vitu2_itu_pane_ParamLimits

0x6904,	// (0x00094324) cell_vitu2_itu_pane

0x692a,	// (0x0009434a) cell_vitu2_function_pane_ParamLimits

0x692a,	// (0x0009434a) cell_vitu2_function_pane

0xd5bf,	// (0x0009afdf) bg_popup_call_pane_cp08_ParamLimits

0xd5bf,	// (0x0009afdf) bg_popup_call_pane_cp08

0xd5d6,	// (0x0009aff6) field_vitu2_entry_pane_g1

0xd5e2,	// (0x0009b002) field_vitu2_entry_pane_g2

0x0002,

0xf922,	// (0x0009d342) field_vitu2_entry_pane_g

0xfe04,	// (0x0008d824) field_vitu2_entry_pane_t1_ParamLimits

0xfe04,	// (0x0008d824) field_vitu2_entry_pane_t1

0x696e,	// (0x0009438e) field_vitu2_entry_pane_t2_ParamLimits

0x696e,	// (0x0009438e) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0009d349) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0009d349) field_vitu2_entry_pane_t

0x698b,	// (0x000943ab) bg_button_pane_cp010_ParamLimits

0x698b,	// (0x000943ab) bg_button_pane_cp010

0xaafb,	// (0x0009851b) cell_vitu2_itu_pane_g1

0x69a7,	// (0x000943c7) cell_vitu2_itu_pane_t1_ParamLimits

0x69a7,	// (0x000943c7) cell_vitu2_itu_pane_t1

0xfe33,	// (0x0008d853) cell_vitu2_itu_pane_t2_ParamLimits

0xfe33,	// (0x0008d853) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x0009d353) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x0009d353) cell_vitu2_itu_pane_t

0x99fa,	// (0x0009741a) bg_button_pane_cp011

0x6a05,	// (0x00094425) cell_vitu2_function_pane_g1

0x99a9,	// (0x000973c9) main_myfav_hc_pane

0x63a6,	// (0x00093dc6) popup_image3_note_pane_ParamLimits

0x63a6,	// (0x00093dc6) popup_image3_note_pane

0x63c2,	// (0x00093de2) popup_image3_tool_bar_pane_ParamLimits

0x63c2,	// (0x00093de2) popup_image3_tool_bar_pane

0xfec1,	// (0x0008d8e1) cell_vitu2_itu_pane_t3_ParamLimits

0xfec1,	// (0x0008d8e1) cell_vitu2_itu_pane_t3

0x99a9,	// (0x000973c9) bg_popup_trans_pane

0xd604,	// (0x0009b024) grid_image3_tool_bar_pane

0xd60e,	// (0x0009b02e) bg_popup_trans_pane_g1

0xaca5,	// (0x000986c5) bg_popup_trans_pane_g2

0xd616,	// (0x0009b036) bg_popup_trans_pane_g3

0xd61e,	// (0x0009b03e) bg_popup_trans_pane_g4

0xd626,	// (0x0009b046) bg_popup_trans_pane_g5

0xd62e,	// (0x0009b04e) bg_popup_trans_pane_g6

0xd636,	// (0x0009b056) bg_popup_trans_pane_g7

0xd63e,	// (0x0009b05e) bg_popup_trans_pane_g8

0xac85,	// (0x000986a5) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0009d35a) bg_popup_trans_pane_g

0xd646,	// (0x0009b066) cell_image3_tool_bar_pane_ParamLimits

0xd646,	// (0x0009b066) cell_image3_tool_bar_pane

0xcbec,	// (0x0009a60c) cell_image3_tool_bar_pane_g1

0x99a9,	// (0x000973c9) bg_popup_trans_pane_cp1

0xd65c,	// (0x0009b07c) popup_image3_note_pane_t1

0xd66a,	// (0x0009b08a) popup_image3_note_pane_t2

0xd678,	// (0x0009b098) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x0009d36d) popup_image3_note_pane_t

0xd688,	// (0x0009b0a8) popup_image3_note_pane_t3_copy1

0x6a19,	// (0x00094439) bg_myfav_hc_instruction_pane_ParamLimits

0x6a19,	// (0x00094439) bg_myfav_hc_instruction_pane

0x6a31,	// (0x00094451) cell_myfav_contact_pane_ParamLimits

0x6a31,	// (0x00094451) cell_myfav_contact_pane

0x6a4d,	// (0x0009446d) cell_myfav_contact_pane_cp1_ParamLimits

0x6a4d,	// (0x0009446d) cell_myfav_contact_pane_cp1

0x6a65,	// (0x00094485) cell_myfav_contact_pane_cp2_ParamLimits

0x6a65,	// (0x00094485) cell_myfav_contact_pane_cp2

0x6a7d,	// (0x0009449d) cell_myfav_contact_pane_cp3_ParamLimits

0x6a7d,	// (0x0009449d) cell_myfav_contact_pane_cp3

0x6a94,	// (0x000944b4) cell_myfav_contact_pane_cp4_ParamLimits

0x6a94,	// (0x000944b4) cell_myfav_contact_pane_cp4

0x6aac,	// (0x000944cc) cell_myfav_contact_pane_cp5_ParamLimits

0x6aac,	// (0x000944cc) cell_myfav_contact_pane_cp5

0x6ac0,	// (0x000944e0) cell_myfav_contact_pane_cp6_ParamLimits

0x6ac0,	// (0x000944e0) cell_myfav_contact_pane_cp6

0x6ad6,	// (0x000944f6) cell_myfav_contact_pane_cp7_ParamLimits

0x6ad6,	// (0x000944f6) cell_myfav_contact_pane_cp7

0xd696,	// (0x0009b0b6) listscroll_gen_pane_cp05

0x6aee,	// (0x0009450e) main_myfav_hc_pane_g1_ParamLimits

0x6aee,	// (0x0009450e) main_myfav_hc_pane_g1

0x6b08,	// (0x00094528) main_myfav_hc_pane_g2_ParamLimits

0x6b08,	// (0x00094528) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x0009d374) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x0009d374) main_myfav_hc_pane_g

0x6b3c,	// (0x0009455c) main_myfav_hc_pane_t1_ParamLimits

0x6b3c,	// (0x0009455c) main_myfav_hc_pane_t1

0xd69f,	// (0x0009b0bf) main_myfav_hc_pane_t2_ParamLimits

0xd69f,	// (0x0009b0bf) main_myfav_hc_pane_t2

0xd6b1,	// (0x0009b0d1) main_myfav_hc_pane_t3_ParamLimits

0xd6b1,	// (0x0009b0d1) main_myfav_hc_pane_t3

0x6b53,	// (0x00094573) main_myfav_hc_pane_t4_ParamLimits

0x6b53,	// (0x00094573) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x0009d37b) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x0009d37b) main_myfav_hc_pane_t

0xcbec,	// (0x0009a60c) bg_myfav_hc_instruction_pane_g1

0xd6c3,	// (0x0009b0e3) cell_myfav_contact_pane_g1_ParamLimits

0xd6c3,	// (0x0009b0e3) cell_myfav_contact_pane_g1

0xd6c3,	// (0x0009b0e3) cell_myfav_contact_pane_g2_ParamLimits

0xd6c3,	// (0x0009b0e3) cell_myfav_contact_pane_g2

0xd6cf,	// (0x0009b0ef) cell_myfav_contact_pane_g3_ParamLimits

0xd6cf,	// (0x0009b0ef) cell_myfav_contact_pane_g3

0xce81,	// (0x0009a8a1) cell_myfav_contact_pane_g4_ParamLimits

0xce81,	// (0x0009a8a1) cell_myfav_contact_pane_g4

0xd6dc,	// (0x0009b0fc) cell_myfav_contact_pane_g5_ParamLimits

0xd6dc,	// (0x0009b0fc) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x0009d386) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x0009d386) cell_myfav_contact_pane_g

0x6b22,	// (0x00094542) main_myfav_hc_pane_g3_ParamLimits

0x6b22,	// (0x00094542) main_myfav_hc_pane_g3

0x0b59,	// (0x0008e579) popup_adpt_find_window

0x6b7d,	// (0x0009459d) afind_page_pane_ParamLimits

0x6b7d,	// (0x0009459d) afind_page_pane

0x6b92,	// (0x000945b2) aid_size_cell_afind_ParamLimits

0x6b92,	// (0x000945b2) aid_size_cell_afind

0x6bb0,	// (0x000945d0) bg_popup_sub_pane_cp09_ParamLimits

0x6bb0,	// (0x000945d0) bg_popup_sub_pane_cp09

0x6bbd,	// (0x000945dd) find_pane_cp01_ParamLimits

0x6bbd,	// (0x000945dd) find_pane_cp01

0xd6e8,	// (0x0009b108) grid_afind_control_pane_ParamLimits

0xd6e8,	// (0x0009b108) grid_afind_control_pane

0x6bca,	// (0x000945ea) grid_afind_pane_ParamLimits

0x6bca,	// (0x000945ea) grid_afind_pane

0x6bec,	// (0x0009460c) cell_afind_pane_ParamLimits

0x6bec,	// (0x0009460c) cell_afind_pane

0xcbec,	// (0x0009a60c) afind_page_pane_g1

0x6c55,	// (0x00094675) afind_page_pane_g2

0x6c5e,	// (0x0009467e) afind_page_pane_g3

0x0002,

0xf971,	// (0x0009d391) afind_page_pane_g

0x6c67,	// (0x00094687) afind_page_pane_t1

0xd6fc,	// (0x0009b11c) cell_afind_grid_control_pane_ParamLimits

0xd6fc,	// (0x0009b11c) cell_afind_grid_control_pane

0xd4f0,	// (0x0009af10) bg_button_pane_cp69_ParamLimits

0xd4f0,	// (0x0009af10) bg_button_pane_cp69

0x6c87,	// (0x000946a7) cell_afind_pane_g1_ParamLimits

0x6c87,	// (0x000946a7) cell_afind_pane_g1

0x6c94,	// (0x000946b4) cell_afind_pane_t1_ParamLimits

0x6c94,	// (0x000946b4) cell_afind_pane_t1

0xa3e5,	// (0x00097e05) bg_button_pane_cp72

0xd70b,	// (0x0009b12b) cell_afind_grid_control_pane_g1

0x3c0a,	// (0x0009162a) aid_image_placing_area_ParamLimits

0x3c0a,	// (0x0009162a) aid_image_placing_area

0xd1b4,	// (0x0009abd4) field_vitu_entry_pane_g1_ParamLimits

0xd1b4,	// (0x0009abd4) field_vitu_entry_pane_g1

0xd1c0,	// (0x0009abe0) field_vitu_entry_pane_g2_ParamLimits

0xd1c0,	// (0x0009abe0) field_vitu_entry_pane_g2

0x0001,

0xf822,	// (0x0009d242) field_vitu_entry_pane_g_ParamLimits

0xf822,	// (0x0009d242) field_vitu_entry_pane_g

0x5dfe,	// (0x0009381e) cell_vitu_itu_pane_g1_ParamLimits

0x5e40,	// (0x00093860) cell_vitu_itu_pane_t3_ParamLimits

0x5e40,	// (0x00093860) cell_vitu_itu_pane_t3

0xd4a0,	// (0x0009aec0) mp4_progress_pane_t1_ParamLimits

0xd4b9,	// (0x0009aed9) mp4_progress_pane_t2_ParamLimits

0xf8b7,	// (0x0009d2d7) mp4_progress_pane_t_ParamLimits

0xd4d2,	// (0x0009aef2) mup_progress_pane_cp04_ParamLimits

0x6b67,	// (0x00094587) main_myfav_hc_pane_t5_ParamLimits

0x6b67,	// (0x00094587) main_myfav_hc_pane_t5

0x0a18,	// (0x0008e438) aid_zoom_text_primary

0x0b59,	// (0x0008e579) popup_adpt_find_window_ParamLimits

0x99fa,	// (0x0009741a) main_cam_set_pane

0x65b1,	// (0x00093fd1) cam4_zoom_pane_ParamLimits

0x65b1,	// (0x00093fd1) cam4_zoom_pane

0x6ca6,	// (0x000946c6) main_cam_set_pane_g1_ParamLimits

0x6ca6,	// (0x000946c6) main_cam_set_pane_g1

0x6cb4,	// (0x000946d4) main_cam_set_pane_g2_ParamLimits

0x6cb4,	// (0x000946d4) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x0009d398) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x0009d398) main_cam_set_pane_g

0x6cd5,	// (0x000946f5) main_cam_set_pane_t1_ParamLimits

0x6cd5,	// (0x000946f5) main_cam_set_pane_t1

0x6cf0,	// (0x00094710) main_cset_listscroll_pane_ParamLimits

0x6cf0,	// (0x00094710) main_cset_listscroll_pane

0x6d14,	// (0x00094734) main_cset_slider_pane_ParamLimits

0x6d14,	// (0x00094734) main_cset_slider_pane

0xd71c,	// (0x0009b13c) main_cset_list_pane_ParamLimits

0xd71c,	// (0x0009b13c) main_cset_list_pane

0xd72c,	// (0x0009b14c) scroll_pane_cp028

0x6d3e,	// (0x0009475e) aid_area_touch_slider

0x6d5a,	// (0x0009477a) cset_slider_pane

0x6d84,	// (0x000947a4) main_cset_slider_pane_g1

0x6d99,	// (0x000947b9) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x0009d39d) main_cset_slider_pane_g

0xd765,	// (0x0009b185) main_cset_slider_pane_t1

0x6e5b,	// (0x0009487b) main_cset_slider_pane_t2

0x6e75,	// (0x00094895) main_cset_slider_pane_t3

0x6e8f,	// (0x000948af) main_cset_slider_pane_t4

0x6ea9,	// (0x000948c9) main_cset_slider_pane_t5

0x6ec7,	// (0x000948e7) main_cset_slider_pane_t6

0x6edc,	// (0x000948fc) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x0009d3c2) main_cset_slider_pane_t

0x6fe8,	// (0x00094a08) cset_list_set_pane_ParamLimits

0x6fe8,	// (0x00094a08) cset_list_set_pane

0x6ffc,	// (0x00094a1c) aid_position_infowindow_above

0x7004,	// (0x00094a24) aid_position_infowindow_below

0x700c,	// (0x00094a2c) cset_list_set_pane_g1_ParamLimits

0x700c,	// (0x00094a2c) cset_list_set_pane_g1

0xff1f,	// (0x0008d93f) cset_list_set_pane_g3_ParamLimits

0xff1f,	// (0x0008d93f) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x0009d3e1) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x0009d3e1) cset_list_set_pane_g

0xff2e,	// (0x0008d94e) cset_list_set_pane_t1_ParamLimits

0xff2e,	// (0x0008d94e) cset_list_set_pane_t1

0x99fa,	// (0x0009741a) list_highlight_pane_cp021_ParamLimits

0x99fa,	// (0x0009741a) list_highlight_pane_cp021

0xb4bc,	// (0x00098edc) cset_slider_pane_g1

0xb4ce,	// (0x00098eee) cset_slider_pane_g2

0xb4c5,	// (0x00098ee5) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x0009d3e6) cset_slider_pane_g

0xab0d,	// (0x0009852d) aid_area_touch_cam4_zoom

0xab15,	// (0x00098535) cam4_zoom_cont_pane

0xab1d,	// (0x0009853d) cam4_zoom_pane_g1

0xab25,	// (0x00098545) cam4_zoom_pane_g2

0x7018,	// (0x00094a38) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0009d3ed) cam4_zoom_pane_g

0xd805,	// (0x0009b225) cam4_zoom_cont_pane_g1

0xd80e,	// (0x0009b22e) cam4_zoom_cont_pane_g2

0xd817,	// (0x0009b237) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0009d3f4) cam4_zoom_cont_pane_g

0x642e,	// (0x00093e4e) call4_image_pane_ParamLimits

0x642e,	// (0x00093e4e) call4_image_pane

0xd4fc,	// (0x0009af1c) call4_windows_conf_pane_ParamLimits

0xd517,	// (0x0009af37) popup_call4_audio_in_window_ParamLimits

0xd517,	// (0x0009af37) popup_call4_audio_in_window

0x99a9,	// (0x000973c9) bg_popup_call2_act_pane_cp02

0xd579,	// (0x0009af99) call4_list_conf_pane

0xcbec,	// (0x0009a60c) call4_image_pane_g1

0xcbec,	// (0x0009a60c) call4_image_pane_g2

0x0001,

0xf6e3,	// (0x0009d103) call4_image_pane_g

0xd820,	// (0x0009b240) list_single_graphic_popup_conf4_pane_ParamLimits

0xd820,	// (0x0009b240) list_single_graphic_popup_conf4_pane

0x99a9,	// (0x000973c9) list_highlight_pane_cp022

0xd835,	// (0x0009b255) list_single_graphic_popup_conf4_pane_g1

0xb1b0,	// (0x00098bd0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0009d3fb) list_single_graphic_popup_conf4_pane_g

0xd83d,	// (0x0009b25d) list_single_graphic_popup_conf4_pane_t1

0x1e30,	// (0x0008f850) popup_vtel_slider_window_ParamLimits

0x1e30,	// (0x0008f850) popup_vtel_slider_window

0xd4de,	// (0x0009aefe) dialer2_ne_pane_t2_ParamLimits

0xd4de,	// (0x0009aefe) dialer2_ne_pane_t2

0x0001,

0xf8bc,	// (0x0009d2dc) dialer2_ne_pane_t_ParamLimits

0xf8bc,	// (0x0009d2dc) dialer2_ne_pane_t

0xc9cb,	// (0x0009a3eb) bg_popup_sub_pane_cp010_ParamLimits

0xc9cb,	// (0x0009a3eb) bg_popup_sub_pane_cp010

0x7020,	// (0x00094a40) popup_vtel_slider_window_g1_ParamLimits

0x7020,	// (0x00094a40) popup_vtel_slider_window_g1

0x7033,	// (0x00094a53) popup_vtel_slider_window_g2_ParamLimits

0x7033,	// (0x00094a53) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0009d400) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0009d400) popup_vtel_slider_window_g

0x7089,	// (0x00094aa9) vtel_slider_pane_ParamLimits

0x7089,	// (0x00094aa9) vtel_slider_pane

0x70ab,	// (0x00094acb) vtel_slider_pane_g1_ParamLimits

0x70ab,	// (0x00094acb) vtel_slider_pane_g1

0x70bf,	// (0x00094adf) vtel_slider_pane_g2_ParamLimits

0x70bf,	// (0x00094adf) vtel_slider_pane_g2

0x70d7,	// (0x00094af7) vtel_slider_pane_g3_ParamLimits

0x70d7,	// (0x00094af7) vtel_slider_pane_g3

0x70ab,	// (0x00094acb) vtel_slider_pane_g4_ParamLimits

0x70ab,	// (0x00094acb) vtel_slider_pane_g4

0x70ed,	// (0x00094b0d) vtel_slider_pane_g5_ParamLimits

0x70ed,	// (0x00094b0d) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0009d409) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0009d409) vtel_slider_pane_g

0x99fa,	// (0x0009741a) main_gallery2_pane

0x67b5,	// (0x000941d5) aid_size_row_itut2_dropdow_list_ParamLimits

0x67b5,	// (0x000941d5) aid_size_row_itut2_dropdow_list

0x6847,	// (0x00094267) grid_vitu2_function_top_pane_ParamLimits

0x6847,	// (0x00094267) grid_vitu2_function_top_pane

0x68ab,	// (0x000942cb) popup_vitu2_dropdown_list_window_ParamLimits

0x68ab,	// (0x000942cb) popup_vitu2_dropdown_list_window

0x68d8,	// (0x000942f8) popup_vitu2_match_list_window

0x7111,	// (0x00094b31) cell_vitu2_function_top_pane_ParamLimits

0x7111,	// (0x00094b31) cell_vitu2_function_top_pane

0x7131,	// (0x00094b51) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7131,	// (0x00094b51) cell_vitu2_function_top_pane_cp01

0x714d,	// (0x00094b6d) cell_vitu2_function_top_wide_pane_ParamLimits

0x714d,	// (0x00094b6d) cell_vitu2_function_top_wide_pane

0x99fa,	// (0x0009741a) bg_button_pane_cp012

0x7169,	// (0x00094b89) cell_vitu2_function_top_pane_g1

0xab2d,	// (0x0009854d) bg_button_pane_cp013_ParamLimits

0xab2d,	// (0x0009854d) bg_button_pane_cp013

0x717d,	// (0x00094b9d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x717d,	// (0x00094b9d) cell_vitu2_function_top_wide_pane_g1

0x99fa,	// (0x0009741a) bg_popup_sub_pane_cp20

0x7195,	// (0x00094bb5) list_vitu2_match_list_pane

0xd60e,	// (0x0009b02e) bg_popup_sub_pane_cp20_g1

0xd616,	// (0x0009b036) bg_popup_sub_pane_cp20_g2

0xaca5,	// (0x000986c5) bg_popup_sub_pane_cp20_g3

0xd61e,	// (0x0009b03e) bg_popup_sub_pane_cp20_g4

0xac85,	// (0x000986a5) bg_popup_sub_pane_cp20_g5

0xd853,	// (0x0009b273) bg_popup_sub_pane_cp20_g6

0xd62e,	// (0x0009b04e) bg_popup_sub_pane_cp20_g7

0xd636,	// (0x0009b056) bg_popup_sub_pane_cp20_g8

0xd63e,	// (0x0009b05e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0009d414) bg_popup_sub_pane_cp20_g

0xab49,	// (0x00098569) list_vitu2_match_list_item_pane_ParamLimits

0xab49,	// (0x00098569) list_vitu2_match_list_item_pane

0xab5b,	// (0x0009857b) list_vitu2_match_list_item_pane_t1

0x99a9,	// (0x000973c9) bg_popup_sub_pane_cp21

0xb0d9,	// (0x00098af9) grid_vitu2_dropdown_list_pane

0x71bf,	// (0x00094bdf) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x71bf,	// (0x00094bdf) cell_vitu2_dropdown_list_char_pane

0x71e2,	// (0x00094c02) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x71e2,	// (0x00094c02) cell_vitu2_dropdown_list_ctrl_pane

0xd85b,	// (0x0009b27b) cell_vitu2_dropdown_list_char_pane_g1

0xd864,	// (0x0009b284) cell_vitu2_dropdown_list_char_pane_g2

0xd86d,	// (0x0009b28d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0009d431) cell_vitu2_dropdown_list_char_pane_g

0x7210,	// (0x00094c30) cell_vitu2_dropdown_list_char_pane_t1

0x721e,	// (0x00094c3e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x721e,	// (0x00094c3e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x722e,	// (0x00094c4e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x722e,	// (0x00094c4e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x723f,	// (0x00094c5f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x723f,	// (0x00094c5f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x724f,	// (0x00094c6f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x724f,	// (0x00094c6f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce1c,	// (0x0009a83c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce1c,	// (0x0009a83c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0009d438) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0009d438) cell_vitu2_dropdown_list_ctrl_pane_g

0x726b,	// (0x00094c8b) aid_size_cell_gallery2_ParamLimits

0x726b,	// (0x00094c8b) aid_size_cell_gallery2

0x7289,	// (0x00094ca9) grid_gallery2_pane_ParamLimits

0x7289,	// (0x00094ca9) grid_gallery2_pane

0x72a3,	// (0x00094cc3) scroll_pane_cp029_ParamLimits

0x72a3,	// (0x00094cc3) scroll_pane_cp029

0x72af,	// (0x00094ccf) cell_gallery2_pane_ParamLimits

0x72af,	// (0x00094ccf) cell_gallery2_pane

0xd876,	// (0x0009b296) cell_gallery2_pane_g2

0x7310,	// (0x00094d30) cell_gallery2_pane_g3

0xd87e,	// (0x0009b29e) cell_gallery2_pane_g4

0xd886,	// (0x0009b2a6) cell_gallery2_pane_g5

0xa389,	// (0x00097da9) grid_highlight_pane_cp10

0x68d8,	// (0x000942f8) popup_vitu2_match_list_window_ParamLimits

0x68ef,	// (0x0009430f) popup_vitu2_query_window_ParamLimits

0x68ef,	// (0x0009430f) popup_vitu2_query_window

0x99a9,	// (0x000973c9) bg_vitu2_candi_button_pane

0xd85b,	// (0x0009b27b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd864,	// (0x0009b284) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd86d,	// (0x0009b28d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xff7b,	// (0x0008d99b) bg_button_pane_cp015

0x7318,	// (0x00094d38) bg_button_pane_cp016

0x732b,	// (0x00094d4b) bg_button_pane_cp017

0xc79b,	// (0x0009a1bb) bg_popup_sub_pane_cp22

0xd88e,	// (0x0009b2ae) popup_vitu2_query_window_g1

0xffb0,	// (0x0008d9d0) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0009d443) popup_vitu2_query_window_g

0xffcf,	// (0x0008d9ef) popup_vitu2_query_window_t1_ParamLimits

0xffcf,	// (0x0008d9ef) popup_vitu2_query_window_t1

0x0004,	// (0x0008da24) popup_vitu2_query_window_t2_ParamLimits

0x0004,	// (0x0008da24) popup_vitu2_query_window_t2

0x0016,	// (0x0008da36) popup_vitu2_query_window_t3_ParamLimits

0x0016,	// (0x0008da36) popup_vitu2_query_window_t3

0x734f,	// (0x00094d6f) popup_vitu2_query_window_t4_ParamLimits

0x734f,	// (0x00094d6f) popup_vitu2_query_window_t4

0x7370,	// (0x00094d90) popup_vitu2_query_window_t5_ParamLimits

0x7370,	// (0x00094d90) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0009d44a) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0009d44a) popup_vitu2_query_window_t

0xd714,	// (0x0009b134) main_cset_text_pane

0x6d3e,	// (0x0009475e) aid_area_touch_slider_ParamLimits

0x6d5a,	// (0x0009477a) cset_slider_pane_ParamLimits

0x6d84,	// (0x000947a4) main_cset_slider_pane_g1_ParamLimits

0x6d99,	// (0x000947b9) main_cset_slider_pane_g2_ParamLimits

0xd735,	// (0x0009b155) main_cset_slider_pane_g3_ParamLimits

0xd735,	// (0x0009b155) main_cset_slider_pane_g3

0x6dae,	// (0x000947ce) main_cset_slider_pane_g4_ParamLimits

0x6dae,	// (0x000947ce) main_cset_slider_pane_g4

0x6dbd,	// (0x000947dd) main_cset_slider_pane_g5_ParamLimits

0x6dbd,	// (0x000947dd) main_cset_slider_pane_g5

0x6dcb,	// (0x000947eb) main_cset_slider_pane_g6_ParamLimits

0x6dcb,	// (0x000947eb) main_cset_slider_pane_g6

0xf97d,	// (0x0009d39d) main_cset_slider_pane_g_ParamLimits

0xd765,	// (0x0009b185) main_cset_slider_pane_t1_ParamLimits

0x6e5b,	// (0x0009487b) main_cset_slider_pane_t2_ParamLimits

0x6e75,	// (0x00094895) main_cset_slider_pane_t3_ParamLimits

0x6e8f,	// (0x000948af) main_cset_slider_pane_t4_ParamLimits

0x6ea9,	// (0x000948c9) main_cset_slider_pane_t5_ParamLimits

0x6ec7,	// (0x000948e7) main_cset_slider_pane_t6_ParamLimits

0x6edc,	// (0x000948fc) main_cset_slider_pane_t7_ParamLimits

0x6f0a,	// (0x0009492a) main_cset_slider_pane_t8_ParamLimits

0x6f0a,	// (0x0009492a) main_cset_slider_pane_t8

0x6f32,	// (0x00094952) main_cset_slider_pane_t9_ParamLimits

0x6f32,	// (0x00094952) main_cset_slider_pane_t9

0x6f5a,	// (0x0009497a) main_cset_slider_pane_t10_ParamLimits

0x6f5a,	// (0x0009497a) main_cset_slider_pane_t10

0x6f82,	// (0x000949a2) main_cset_slider_pane_t11_ParamLimits

0x6f82,	// (0x000949a2) main_cset_slider_pane_t11

0x6fac,	// (0x000949cc) main_cset_slider_pane_t12_ParamLimits

0x6fac,	// (0x000949cc) main_cset_slider_pane_t12

0x6fc9,	// (0x000949e9) main_cset_slider_pane_t13_ParamLimits

0x6fc9,	// (0x000949e9) main_cset_slider_pane_t13

0xf9a2,	// (0x0009d3c2) main_cset_slider_pane_t_ParamLimits

0x99a9,	// (0x000973c9) bg_popup_sub_pane_cp011

0xd89a,	// (0x0009b2ba) main_cset_text_pane_g1

0xd8a2,	// (0x0009b2c2) main_cset_text_pane_t1

0xd8b0,	// (0x0009b2d0) main_cset_text_pane_t2

0xd8be,	// (0x0009b2de) main_cset_text_pane_t3

0xd8cc,	// (0x0009b2ec) main_cset_text_pane_t4

0xd8da,	// (0x0009b2fa) main_cset_text_pane_t5

0xd8e8,	// (0x0009b308) main_cset_text_pane_t6

0xd8f6,	// (0x0009b316) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0009d459) main_cset_text_pane_t

0x99a9,	// (0x000973c9) main_cam4_burst_pane

0x99a9,	// (0x000973c9) main_cam5_pane

0x6c75,	// (0x00094695) bg_button_pane_cp019

0x6c7e,	// (0x0009469e) bg_button_pane_cp020

0xd741,	// (0x0009b161) main_cset_slider_pane_g7_ParamLimits

0xd741,	// (0x0009b161) main_cset_slider_pane_g7

0xd74d,	// (0x0009b16d) main_cset_slider_pane_g8_ParamLimits

0xd74d,	// (0x0009b16d) main_cset_slider_pane_g8

0x6ddf,	// (0x000947ff) main_cset_slider_pane_g9_ParamLimits

0x6ddf,	// (0x000947ff) main_cset_slider_pane_g9

0x6deb,	// (0x0009480b) main_cset_slider_pane_g10_ParamLimits

0x6deb,	// (0x0009480b) main_cset_slider_pane_g10

0x6df7,	// (0x00094817) main_cset_slider_pane_g11_ParamLimits

0x6df7,	// (0x00094817) main_cset_slider_pane_g11

0x6e03,	// (0x00094823) main_cset_slider_pane_g12_ParamLimits

0x6e03,	// (0x00094823) main_cset_slider_pane_g12

0x6e0f,	// (0x0009482f) main_cset_slider_pane_g13_ParamLimits

0x6e0f,	// (0x0009482f) main_cset_slider_pane_g13

0x6e1b,	// (0x0009483b) main_cset_slider_pane_g14_ParamLimits

0x6e1b,	// (0x0009483b) main_cset_slider_pane_g14

0x6e27,	// (0x00094847) main_cset_slider_pane_g15_ParamLimits

0x6e27,	// (0x00094847) main_cset_slider_pane_g15

0xd793,	// (0x0009b1b3) main_cset_slider_pane_t14_ParamLimits

0xd793,	// (0x0009b1b3) main_cset_slider_pane_t14

0xd7cc,	// (0x0009b1ec) main_cset_slider_pane_t15_ParamLimits

0xd7cc,	// (0x0009b1ec) main_cset_slider_pane_t15

0x7391,	// (0x00094db1) aid_cam4_burst_size_cell_ParamLimits

0x7391,	// (0x00094db1) aid_cam4_burst_size_cell

0x73b1,	// (0x00094dd1) grid_cam4_burst_pane_ParamLimits

0x73b1,	// (0x00094dd1) grid_cam4_burst_pane

0x73eb,	// (0x00094e0b) linegrid_cam4_burst_pane_ParamLimits

0x73eb,	// (0x00094e0b) linegrid_cam4_burst_pane

0xd904,	// (0x0009b324) scroll_pane_cp30_ParamLimits

0xd904,	// (0x0009b324) scroll_pane_cp30

0x740d,	// (0x00094e2d) cell_cam4_burst_pane_ParamLimits

0x740d,	// (0x00094e2d) cell_cam4_burst_pane

0xd910,	// (0x0009b330) linegrid_cam4_burst_pane_g1_ParamLimits

0xd910,	// (0x0009b330) linegrid_cam4_burst_pane_g1

0x7462,	// (0x00094e82) linegrid_cam4_burst_pane_g2_ParamLimits

0x7462,	// (0x00094e82) linegrid_cam4_burst_pane_g2

0xd91d,	// (0x0009b33d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd91d,	// (0x0009b33d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0009d468) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009d468) linegrid_cam4_burst_pane_g

0x7473,	// (0x00094e93) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7473,	// (0x00094e93) linegrid_cam4_burst_pane_g3_copy1

0xd92a,	// (0x0009b34a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd92a,	// (0x0009b34a) linegrid_cam4_burst_pane_g4

0x7491,	// (0x00094eb1) linegrid_cam4_burst_pane_g5_ParamLimits

0x7491,	// (0x00094eb1) linegrid_cam4_burst_pane_g5

0x74a2,	// (0x00094ec2) linegrid_cam4_burst_pane_g6_ParamLimits

0x74a2,	// (0x00094ec2) linegrid_cam4_burst_pane_g6

0xd937,	// (0x0009b357) linegrid_cam4_burst_pane_g7_ParamLimits

0xd937,	// (0x0009b357) linegrid_cam4_burst_pane_g7

0x74b9,	// (0x00094ed9) cell_cam4_burst_pane_g1

0xd950,	// (0x0009b370) main_cam5_pane_t1_ParamLimits

0xd950,	// (0x0009b370) main_cam5_pane_t1

0xd962,	// (0x0009b382) main_cam5_pane_t2_ParamLimits

0xd962,	// (0x0009b382) main_cam5_pane_t2

0xd974,	// (0x0009b394) main_cam5_pane_t3_ParamLimits

0xd974,	// (0x0009b394) main_cam5_pane_t3

0xd986,	// (0x0009b3a6) main_cam5_pane_t4_ParamLimits

0xd986,	// (0x0009b3a6) main_cam5_pane_t4

0xd99e,	// (0x0009b3be) main_cam5_pane_t5_ParamLimits

0xd99e,	// (0x0009b3be) main_cam5_pane_t5

0xd9b2,	// (0x0009b3d2) main_cam5_pane_t6_ParamLimits

0xd9b2,	// (0x0009b3d2) main_cam5_pane_t6

0xd9c6,	// (0x0009b3e6) main_cam5_pane_t7_ParamLimits

0xd9c6,	// (0x0009b3e6) main_cam5_pane_t7

0xd9d8,	// (0x0009b3f8) main_cam5_pane_t8_ParamLimits

0xd9d8,	// (0x0009b3f8) main_cam5_pane_t8

0xd9f6,	// (0x0009b416) main_cam5_pane_t9_ParamLimits

0xd9f6,	// (0x0009b416) main_cam5_pane_t9

0xda08,	// (0x0009b428) main_cam5_pane_t10_ParamLimits

0xda08,	// (0x0009b428) main_cam5_pane_t10

0xda1a,	// (0x0009b43a) main_cam5_pane_t11_ParamLimits

0xda1a,	// (0x0009b43a) main_cam5_pane_t11

0xda2e,	// (0x0009b44e) main_cam5_pane_t12_ParamLimits

0xda2e,	// (0x0009b44e) main_cam5_pane_t12

0xda45,	// (0x0009b465) main_cam5_pane_t13_ParamLimits

0xda45,	// (0x0009b465) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0009d474) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0009d474) main_cam5_pane_t

0x0bdc,	// (0x0008e5fc) popup_scut_keymap_window_ParamLimits

0x0bdc,	// (0x0008e5fc) popup_scut_keymap_window

0x74cc,	// (0x00094eec) aid_size_cell_brow_shortcut

0xa389,	// (0x00097da9) bg_popup_window_pane_cp010

0x74d8,	// (0x00094ef8) grid_scut_pane

0x74e4,	// (0x00094f04) cell_scut_pane_ParamLimits

0x74e4,	// (0x00094f04) cell_scut_pane

0x74fd,	// (0x00094f1d) cell_scut_pane_g1

0xda68,	// (0x0009b488) cell_scut_pane_t1

0xda77,	// (0x0009b497) cell_scut_pane_t2

0x7506,	// (0x00094f26) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0009d48f) cell_scut_pane_t

0x52c7,	// (0x00092ce7) main_mup3_pane_g8_ParamLimits

0x52c7,	// (0x00092ce7) main_mup3_pane_g8

0x67d1,	// (0x000941f1) area_vitu2_query_pane_ParamLimits

0x67d1,	// (0x000941f1) area_vitu2_query_pane

0xff8f,	// (0x0008d9af) input_focus_pane_cp08

0xda86,	// (0x0009b4a6) area_vitu2_query_pane_g1

0x0094,	// (0x0008dab4) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0009d496) area_vitu2_query_pane_g

0x7514,	// (0x00094f34) area_vitu2_query_pane_t1_ParamLimits

0x7514,	// (0x00094f34) area_vitu2_query_pane_t1

0x7528,	// (0x00094f48) area_vitu2_query_pane_t2_ParamLimits

0x7528,	// (0x00094f48) area_vitu2_query_pane_t2

0x00a7,	// (0x0008dac7) area_vitu2_query_pane_t3_ParamLimits

0x00a7,	// (0x0008dac7) area_vitu2_query_pane_t3

0x753c,	// (0x00094f5c) area_vitu2_query_pane_t4_ParamLimits

0x753c,	// (0x00094f5c) area_vitu2_query_pane_t4

0x7564,	// (0x00094f84) area_vitu2_query_pane_t5_ParamLimits

0x7564,	// (0x00094f84) area_vitu2_query_pane_t5

0x758c,	// (0x00094fac) area_vitu2_query_pane_t6_ParamLimits

0x758c,	// (0x00094fac) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0009d49b) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0009d49b) area_vitu2_query_pane_t

0x75d8,	// (0x00094ff8) bg_button_pane_cp018

0x75e6,	// (0x00095006) bg_button_pane_cp021

0x00cf,	// (0x0008daef) bg_button_pane_cp022

0x00e0,	// (0x0008db00) input_focus_pane_cp09

0x3193,	// (0x00090bb3) aid_size_touch_mv_arrow_left

0x31bc,	// (0x00090bdc) aid_size_touch_mv_arrow_right

0x6e3f,	// (0x0009485f) main_cset_slider_pane_g16_ParamLimits

0x6e3f,	// (0x0009485f) main_cset_slider_pane_g16

0x6e4d,	// (0x0009486d) main_cset_slider_pane_g17_ParamLimits

0x6e4d,	// (0x0009486d) main_cset_slider_pane_g17

0x74b9,	// (0x00094ed9) cell_cam4_burst_pane_g1_ParamLimits

0x99a9,	// (0x000973c9) compa_mode_pane

0x7043,	// (0x00094a63) popup_vtel_slider_window_g3_ParamLimits

0x7043,	// (0x00094a63) popup_vtel_slider_window_g3

0x705a,	// (0x00094a7a) popup_vtel_slider_window_g4_ParamLimits

0x705a,	// (0x00094a7a) popup_vtel_slider_window_g4

0x7071,	// (0x00094a91) popup_vtel_slider_window_t1_ParamLimits

0x7071,	// (0x00094a91) popup_vtel_slider_window_t1

0x99a9,	// (0x000973c9) main_cl_pane

0xc7c7,	// (0x0009a1e7) popup_imed_adjust2_window_ParamLimits

0xc79b,	// (0x0009a1bb) bg_tb_trans_pane_cp05_ParamLimits

0xd0e9,	// (0x0009ab09) popup_imed_adjust2_window_g1_ParamLimits

0xd0f8,	// (0x0009ab18) popup_imed_adjust2_window_g2_ParamLimits

0xd0f8,	// (0x0009ab18) popup_imed_adjust2_window_g2

0xd104,	// (0x0009ab24) popup_imed_adjust2_window_g3_ParamLimits

0xd104,	// (0x0009ab24) popup_imed_adjust2_window_g3

0x0002,

0xf7e6,	// (0x0009d206) popup_imed_adjust2_window_g_ParamLimits

0xf7e6,	// (0x0009d206) popup_imed_adjust2_window_g

0xd110,	// (0x0009ab30) popup_imed_adjust2_window_t1_ParamLimits

0xd128,	// (0x0009ab48) slider_imed_adjust_pane_ParamLimits

0xd13c,	// (0x0009ab5c) slider_imed_adjust_pane_g1_ParamLimits

0xd14c,	// (0x0009ab6c) slider_imed_adjust_pane_g2_ParamLimits

0xd15c,	// (0x0009ab7c) slider_imed_adjust_pane_g3_ParamLimits

0xd16d,	// (0x0009ab8d) slider_imed_adjust_pane_g4_ParamLimits

0xf7ed,	// (0x0009d20d) slider_imed_adjust_pane_g_ParamLimits

0x6551,	// (0x00093f71) aid_touch_area_cam4_ParamLimits

0x6551,	// (0x00093f71) aid_touch_area_cam4

0xaa0c,	// (0x0009842c) battery_pane_cp01

0x6623,	// (0x00094043) main_camera4_pane_g6_ParamLimits

0x6623,	// (0x00094043) main_camera4_pane_g6

0x664d,	// (0x0009406d) main_camera4_pane_t2_ParamLimits

0x664d,	// (0x0009406d) main_camera4_pane_t2

0x0001,

0xf8f0,	// (0x0009d310) main_camera4_pane_t_ParamLimits

0xf8f0,	// (0x0009d310) main_camera4_pane_t

0x6682,	// (0x000940a2) aid_touch_area_vid4_ParamLimits

0x6682,	// (0x000940a2) aid_touch_area_vid4

0x66d6,	// (0x000940f6) main_video4_pane_g5_ParamLimits

0x66d6,	// (0x000940f6) main_video4_pane_g5

0x66fb,	// (0x0009411b) vid4_progress_pane_ParamLimits

0x66fb,	// (0x0009411b) vid4_progress_pane

0xd759,	// (0x0009b179) main_cset_slider_pane_g18_ParamLimits

0xd759,	// (0x0009b179) main_cset_slider_pane_g18

0xd944,	// (0x0009b364) cell_cam4_burst_pane_g2_ParamLimits

0xd944,	// (0x0009b364) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0009d46f) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0009d46f) cell_cam4_burst_pane_g

0xa15d,	// (0x00097b7d) bg_cl_pane_ParamLimits

0xa15d,	// (0x00097b7d) bg_cl_pane

0x75f2,	// (0x00095012) cl_header_pane_ParamLimits

0x75f2,	// (0x00095012) cl_header_pane

0x7606,	// (0x00095026) cl_listscroll_pane_ParamLimits

0x7606,	// (0x00095026) cl_listscroll_pane

0xda92,	// (0x0009b4b2) bg_cl_pane_g1

0xda9a,	// (0x0009b4ba) bg_cl_pane_g2

0xdaa2,	// (0x0009b4c2) bg_cl_pane_g3

0xdaaa,	// (0x0009b4ca) bg_cl_pane_g4

0xdab2,	// (0x0009b4d2) bg_cl_pane_g5

0xdaba,	// (0x0009b4da) bg_cl_pane_g6

0xdac2,	// (0x0009b4e2) bg_cl_pane_g7

0xdaca,	// (0x0009b4ea) bg_cl_pane_g8

0xdad2,	// (0x0009b4f2) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0009d4aa) bg_cl_pane_g

0x7616,	// (0x00095036) aid_height_cl_leading_ParamLimits

0x7616,	// (0x00095036) aid_height_cl_leading

0x7622,	// (0x00095042) aid_height_cl_text_ParamLimits

0x7622,	// (0x00095042) aid_height_cl_text

0x99fa,	// (0x0009741a) bg_cl_header_pane_ParamLimits

0x99fa,	// (0x0009741a) bg_cl_header_pane

0x7641,	// (0x00095061) cl_header_pane_g1_ParamLimits

0x7641,	// (0x00095061) cl_header_pane_g1

0x7657,	// (0x00095077) cl_header_pane_t1_ParamLimits

0x7657,	// (0x00095077) cl_header_pane_t1

0xdada,	// (0x0009b4fa) cl_list_pane

0xd72c,	// (0x0009b14c) hc_scroll_pane_cp01

0xac85,	// (0x000986a5) bg_cl_header_pane_g1

0xd60e,	// (0x0009b02e) bg_cl_header_pane_g2

0xaca5,	// (0x000986c5) bg_cl_header_pane_g3

0xd61e,	// (0x0009b03e) bg_cl_header_pane_g4

0xd616,	// (0x0009b036) bg_cl_header_pane_g5

0xd853,	// (0x0009b273) bg_cl_header_pane_g6

0xd636,	// (0x0009b056) bg_cl_header_pane_g7

0xd63e,	// (0x0009b05e) bg_cl_header_pane_g8

0xd62e,	// (0x0009b04e) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0009d4bd) bg_cl_header_pane_g

0x7670,	// (0x00095090) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7670,	// (0x00095090) hc_cl_list_double_graphic_heading_pane

0x7683,	// (0x000950a3) hc_cl_list_single_graphic_pane_ParamLimits

0x7683,	// (0x000950a3) hc_cl_list_single_graphic_pane

0x769b,	// (0x000950bb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x769b,	// (0x000950bb) hc_cl_list_single_graphic_pane_g1

0x76a7,	// (0x000950c7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76a7,	// (0x000950c7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0009d4d0) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0009d4d0) hc_cl_list_single_graphic_pane_g

0x76bb,	// (0x000950db) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76bb,	// (0x000950db) hc_cl_list_single_graphic_pane_t1

0x769b,	// (0x000950bb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x769b,	// (0x000950bb) hc_cl_list_double_graphic_heading_pane_g1

0x76d0,	// (0x000950f0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76d0,	// (0x000950f0) hc_cl_list_double_graphic_heading_pane_g2

0x76e4,	// (0x00095104) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76e4,	// (0x00095104) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0009d4d5) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0009d4d5) hc_cl_list_double_graphic_heading_pane_g

0x76f8,	// (0x00095118) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76f8,	// (0x00095118) hc_cl_list_double_graphic_heading_pane_t1

0x770d,	// (0x0009512d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x770d,	// (0x0009512d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0009d4dc) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0009d4dc) hc_cl_list_double_graphic_heading_pane_t

0x7722,	// (0x00095142) vid4_progress_pane_g1

0x7734,	// (0x00095154) vid4_progress_pane_g2

0xa6a9,	// (0x000980c9) vid4_progress_pane_g3

0xab7d,	// (0x0009859d) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0009d4e1) vid4_progress_pane_g

0xab9b,	// (0x000985bb) vid4_progress_pane_t1

0xabb0,	// (0x000985d0) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0009d4ec) vid4_progress_pane_t

0xabdb,	// (0x000985fb) wait_bar_pane_cp07

0xc9d9,	// (0x0009a3f9) blid_firmament_pane_ParamLimits

0xca1c,	// (0x0009a43c) popup_blid_sat_info2_window_g1

0xca40,	// (0x0009a460) popup_blid_sat_info2_window_t3

0xca4e,	// (0x0009a46e) popup_blid_sat_info2_window_t4

0xca5c,	// (0x0009a47c) popup_blid_sat_info2_window_t5

0xca6a,	// (0x0009a48a) popup_blid_sat_info2_window_t6

0xca7a,	// (0x0009a49a) popup_blid_sat_info2_window_t7

0xca88,	// (0x0009a4a8) popup_blid_sat_info2_window_t8

0xca96,	// (0x0009a4b6) popup_blid_sat_info2_window_t9

0xcaa4,	// (0x0009a4c4) popup_blid_sat_info2_window_t10

0xcb6c,	// (0x0009a58c) aid_firma_cardinal_ParamLimits

0xcb80,	// (0x0009a5a0) blid_firmament_pane_t1_ParamLimits

0xcb97,	// (0x0009a5b7) blid_firmament_pane_t2_ParamLimits

0xcbae,	// (0x0009a5ce) blid_firmament_pane_t3_ParamLimits

0xcbc5,	// (0x0009a5e5) blid_firmament_pane_t4_ParamLimits

0xf6da,	// (0x0009d0fa) blid_firmament_pane_t_ParamLimits

0xcbdc,	// (0x0009a5fc) blid_sat_info_pane_ParamLimits

0x99fa,	// (0x0009741a) main_cam_set_pane_ParamLimits

0x5ba8,	// (0x000935c8) aid_size_cell_colour_35_ParamLimits

0x5bc8,	// (0x000935e8) aid_size_cell_colour_112_ParamLimits

0x5be8,	// (0x00093608) aid_size_cell_effect_ParamLimits

0xc79b,	// (0x0009a1bb) bg_tb_trans_pane_cp02_ParamLimits

0xaede,	// (0x000988fe) heading_imed_pane_ParamLimits

0x5c08,	// (0x00093628) listscroll_imed_pane_ParamLimits

0xbdbd,	// (0x000997dd) popup_call2_audio_first_window_g5_ParamLimits

0xbdbd,	// (0x000997dd) popup_call2_audio_first_window_g5

0x61b9,	// (0x00093bd9) aid_size_touch_image3_arrow_left_ParamLimits

0x61b9,	// (0x00093bd9) aid_size_touch_image3_arrow_left

0x61e5,	// (0x00093c05) aid_size_touch_image3_arrow_right_ParamLimits

0x61e5,	// (0x00093c05) aid_size_touch_image3_arrow_right

0xabc6,	// (0x000985e6) vid4_progress_pane_t3

0x5f27,	// (0x00093947) main_hwr_training_symbol_option_pane_ParamLimits

0x5f27,	// (0x00093947) main_hwr_training_symbol_option_pane

0xd3e0,	// (0x0009ae00) popup_hwr_training_preview_window_ParamLimits

0xd3e0,	// (0x0009ae00) popup_hwr_training_preview_window

0x5f47,	// (0x00093967) hwr_training_navi_pane_g5_ParamLimits

0x5f47,	// (0x00093967) hwr_training_navi_pane_g5

0xd5fc,	// (0x0009b01c) popup_char_count_window

0x99fa,	// (0x0009741a) bg_popup_sub_pane_cp20_ParamLimits

0x7195,	// (0x00094bb5) list_vitu2_match_list_pane_ParamLimits

0x71a4,	// (0x00094bc4) vitu2_page_scroll_pane_ParamLimits

0x71a4,	// (0x00094bc4) vitu2_page_scroll_pane

0xdae3,	// (0x0009b503) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdae3,	// (0x0009b503) list_single_hwr_training_symbol_option_pane

0xdaf6,	// (0x0009b516) list_single_hwr_training_symbol_option_pane_g1

0xdafe,	// (0x0009b51e) list_single_hwr_training_symbol_option_pane_t1

0xdb0c,	// (0x0009b52c) bg_button_pane_cp023

0xdb15,	// (0x0009b535) bg_button_pane_cp024

0x7772,	// (0x00095192) vitu2_page_scroll_pane_g1

0x777a,	// (0x0009519a) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0009d4f3) vitu2_page_scroll_pane_g

0x7784,	// (0x000951a4) vitu2_page_scroll_pane_t1

0xdb48,	// (0x0009b568) popup_char_count_window_g1

0xdb51,	// (0x0009b571) popup_char_count_window_g2

0xdb5a,	// (0x0009b57a) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0009d4f8) popup_char_count_window_g

0xdb63,	// (0x0009b583) popup_char_count_window_t1

0x99a9,	// (0x000973c9) main_vded2_pane

0xd0d5,	// (0x0009aaf5) aid_size_cell_imed_line

0xd0df,	// (0x0009aaff) grid_imed_line_width_pane

0xaac6,	// (0x000984e6) vid4_indicators_pane_g4

0xdb71,	// (0x0009b591) cell_imed_line_width_pane_ParamLimits

0xdb71,	// (0x0009b591) cell_imed_line_width_pane

0xdb87,	// (0x0009b5a7) cell_imed_line_width_pane_g1

0xd2d7,	// (0x0009acf7) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0009d4ff) cell_imed_line_width_pane_g

0x7793,	// (0x000951b3) main_vded2_pane_g1_ParamLimits

0x7793,	// (0x000951b3) main_vded2_pane_g1

0x77ae,	// (0x000951ce) main_vded2_pane_g2_ParamLimits

0x77ae,	// (0x000951ce) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0009d504) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0009d504) main_vded2_pane_g

0x77c0,	// (0x000951e0) vded2_slider_pane_ParamLimits

0x77c0,	// (0x000951e0) vded2_slider_pane

0x77d0,	// (0x000951f0) aid_size_touch_vded2_end

0x77da,	// (0x000951fa) aid_size_touch_vded2_playhead

0xdb90,	// (0x0009b5b0) aid_size_touch_vded2_start

0xdb98,	// (0x0009b5b8) vded2_slider_bg_pane

0xdba1,	// (0x0009b5c1) vded2_slider_pane_g1

0xdbaa,	// (0x0009b5ca) vded2_slider_pane_g2

0x77e4,	// (0x00095204) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0009d509) vded2_slider_pane_g

0xdbb2,	// (0x0009b5d2) vded2_slider_bg_pane_g1

0xdbbb,	// (0x0009b5db) vded2_slider_bg_pane_g2

0xdbc4,	// (0x0009b5e4) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0009d510) vded2_slider_bg_pane_g

0x3849,	// (0x00091269) aid_postcard_touch_down_pane_ParamLimits

0x3849,	// (0x00091269) aid_postcard_touch_down_pane

0x3861,	// (0x00091281) aid_postcard_touch_up_pane_ParamLimits

0x3861,	// (0x00091281) aid_postcard_touch_up_pane

0x99a9,	// (0x000973c9) main_blid2_pane

0xc7a9,	// (0x0009a1c9) popup_blid2_search_window

0x99a9,	// (0x000973c9) blid2_gps_pane

0x99a9,	// (0x000973c9) blid2_navig_pane

0x99a9,	// (0x000973c9) blid2_search_pane

0x99a9,	// (0x000973c9) blid2_tripm_pane

0x77ef,	// (0x0009520f) blid2_search_pane_g1_ParamLimits

0x77ef,	// (0x0009520f) blid2_search_pane_g1

0x7802,	// (0x00095222) blid2_search_pane_t1_ParamLimits

0x7802,	// (0x00095222) blid2_search_pane_t1

0x7814,	// (0x00095234) aid_size_cell_blid2_gps_ParamLimits

0x7814,	// (0x00095234) aid_size_cell_blid2_gps

0x782c,	// (0x0009524c) blid2_gps_pane_g1_ParamLimits

0x782c,	// (0x0009524c) blid2_gps_pane_g1

0x7840,	// (0x00095260) grid_blid2_satellite_pane_ParamLimits

0x7840,	// (0x00095260) grid_blid2_satellite_pane

0x7858,	// (0x00095278) blid2_navig_pane_g1_ParamLimits

0x7858,	// (0x00095278) blid2_navig_pane_g1

0x7864,	// (0x00095284) blid2_navig_pane_t1_ParamLimits

0x7864,	// (0x00095284) blid2_navig_pane_t1

0x787f,	// (0x0009529f) blid2_navig_pane_t2_ParamLimits

0x787f,	// (0x0009529f) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0009d517) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0009d517) blid2_navig_pane_t

0x789a,	// (0x000952ba) blid2_navig_ring_pane_ParamLimits

0x789a,	// (0x000952ba) blid2_navig_ring_pane

0x78b5,	// (0x000952d5) blid2_speed_pane_ParamLimits

0x78b5,	// (0x000952d5) blid2_speed_pane

0x78c1,	// (0x000952e1) blid2_tripm_pane_g1_ParamLimits

0x78c1,	// (0x000952e1) blid2_tripm_pane_g1

0x78dc,	// (0x000952fc) blid2_tripm_pane_g2_ParamLimits

0x78dc,	// (0x000952fc) blid2_tripm_pane_g2

0x78f0,	// (0x00095310) blid2_tripm_pane_g3_ParamLimits

0x78f0,	// (0x00095310) blid2_tripm_pane_g3

0x7904,	// (0x00095324) blid2_tripm_pane_g4_ParamLimits

0x7904,	// (0x00095324) blid2_tripm_pane_g4

0x7918,	// (0x00095338) blid2_tripm_pane_g5_ParamLimits

0x7918,	// (0x00095338) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0009d51c) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0009d51c) blid2_tripm_pane_g

0x793e,	// (0x0009535e) blid2_tripm_pane_t1_ParamLimits

0x793e,	// (0x0009535e) blid2_tripm_pane_t1

0x7957,	// (0x00095377) blid2_tripm_pane_t2_ParamLimits

0x7957,	// (0x00095377) blid2_tripm_pane_t2

0x7970,	// (0x00095390) blid2_tripm_pane_t3_ParamLimits

0x7970,	// (0x00095390) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0009d529) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0009d529) blid2_tripm_pane_t

0x79b7,	// (0x000953d7) cell_blid2_satellite_pane_ParamLimits

0x79b7,	// (0x000953d7) cell_blid2_satellite_pane

0x79d5,	// (0x000953f5) cell_blid2_satellite_pane_g1

0xdbcd,	// (0x0009b5ed) cell_blid2_satellite_pane_t1

0xcbec,	// (0x0009a60c) blid2_speed_pane_g1

0xdbdb,	// (0x0009b5fb) blid2_speed_pane_t1

0xdbe9,	// (0x0009b609) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0009d532) blid2_speed_pane_t

0xcbec,	// (0x0009a60c) blid2_navig_ring_pane_g1

0x79de,	// (0x000953fe) blid2_navig_ring_pane_g2

0x79e6,	// (0x00095406) blid2_navig_ring_pane_g3

0x79ee,	// (0x0009540e) blid2_navig_ring_pane_g4

0x79f6,	// (0x00095416) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0009d537) blid2_navig_ring_pane_g

0x99a9,	// (0x000973c9) bg_popup_window_pane_cp011

0xdbf7,	// (0x0009b617) popup_blid2_search_window_g1

0xdbff,	// (0x0009b61f) popup_blid2_search_window_t1

0xdc0d,	// (0x0009b62d) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0009d542) popup_blid2_search_window_t

0xa4df,	// (0x00097eff) main_browser_pane_g1

0xa15d,	// (0x00097b7d) main_browser_pane_ParamLimits

0x99fa,	// (0x0009741a) bg_button_pane_cp011_ParamLimits

0x6a05,	// (0x00094425) cell_vitu2_function_pane_g1_ParamLimits

0xc79b,	// (0x0009a1bb) bg_popup_sub_pane_cp22_ParamLimits

0xff8f,	// (0x0008d9af) input_focus_pane_cp08_ParamLimits

0x733e,	// (0x00094d5e) popup_vitu2_query_button_pane_ParamLimits

0x733e,	// (0x00094d5e) popup_vitu2_query_button_pane

0xffa6,	// (0x0008d9c6) popup_vitu2_query_input_button_pane

0xd88e,	// (0x0009b2ae) popup_vitu2_query_window_g1_ParamLimits

0xffb0,	// (0x0008d9d0) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0009d443) popup_vitu2_query_window_g_ParamLimits

0x99a9,	// (0x000973c9) bg_button_pane_cp026

0x79fe,	// (0x0009541e) popup_vitu2_query_input_button_pane_g1

0x99a9,	// (0x000973c9) bg_button_pane_cp025

0xdc1b,	// (0x0009b63b) popup_vitu2_query_button_pane_t1

0x4f6d,	// (0x0009298d) main_mp3_pane_t6

0x4f7b,	// (0x0009299b) popup_slider_window_cp01

0xaa2a,	// (0x0009844a) cam4_battery_pane

0xaa7f,	// (0x0009849f) cam4_battery_pane_cp02

0xab75,	// (0x00098595) cam4_battery_pane_cp01

0xab75,	// (0x00098595) cam4_battery_pane_cp03

0xcbec,	// (0x0009a60c) cam4_battery_pane_g1

0xdc29,	// (0x0009b649) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0009d547) cam4_battery_pane_g

0xcab2,	// (0x0009a4d2) popup_blid_sat_info2_window_t11

0x3193,	// (0x00090bb3) aid_size_touch_mv_arrow_left_ParamLimits

0x31bc,	// (0x00090bdc) aid_size_touch_mv_arrow_right_ParamLimits

0xb2de,	// (0x00098cfe) navi_pane_g1_ParamLimits

0x31fb,	// (0x00090c1b) navi_pane_g2_ParamLimits

0x3229,	// (0x00090c49) navi_pane_g3_ParamLimits

0xf3ec,	// (0x0009ce0c) navi_pane_g_ParamLimits

0x3283,	// (0x00090ca3) navi_pane_mv_t1_ParamLimits

0x5c14,	// (0x00093634) grid_imed_effect_pane_ParamLimits

0x1d38,	// (0x0008f758) aid_placing_vt_slider_lsc

0xa42a,	// (0x00097e4a) aid_placing_vt_slider_prt

0x99fa,	// (0x0009741a) bg_tb_trans_pane_cp01_ParamLimits

0xcd3c,	// (0x0009a75c) popup_image_details_window_g1_ParamLimits

0xcd4f,	// (0x0009a76f) popup_image_details_window_g2_ParamLimits

0xcd64,	// (0x0009a784) popup_image_details_window_g3_ParamLimits

0xcd64,	// (0x0009a784) popup_image_details_window_g3

0xf71f,	// (0x0009d13f) popup_image_details_window_g_ParamLimits

0xcd78,	// (0x0009a798) popup_image_details_window_t1_ParamLimits

0xcd8a,	// (0x0009a7aa) popup_image_details_window_t2_ParamLimits

0xcda3,	// (0x0009a7c3) popup_image_details_window_t3_ParamLimits

0xcdb7,	// (0x0009a7d7) popup_image_details_window_t4_ParamLimits

0xcdd2,	// (0x0009a7f2) popup_image_details_window_t5_ParamLimits

0xf726,	// (0x0009d146) popup_image_details_window_t_ParamLimits

0x762e,	// (0x0009504e) cl_header_name_pane_ParamLimits

0x762e,	// (0x0009504e) cl_header_name_pane

0x7a06,	// (0x00095426) cl_header_name_pane_t1_ParamLimits

0x7a06,	// (0x00095426) cl_header_name_pane_t1

0x7a27,	// (0x00095447) cl_header_name_pane_t2_ParamLimits

0x7a27,	// (0x00095447) cl_header_name_pane_t2

0x7a69,	// (0x00095489) cl_header_name_pane_t3_ParamLimits

0x7a69,	// (0x00095489) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0009d54c) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0009d54c) cl_header_name_pane_t

0x3254,	// (0x00090c74) navi_pane_mv_g2_ParamLimits

0xd5d6,	// (0x0009aff6) field_vitu2_entry_pane_g1_ParamLimits

0xd5e2,	// (0x0009b002) field_vitu2_entry_pane_g2_ParamLimits

0xd5ee,	// (0x0009b00e) field_vitu2_entry_pane_g3_ParamLimits

0xd5ee,	// (0x0009b00e) field_vitu2_entry_pane_g3

0xf922,	// (0x0009d342) field_vitu2_entry_pane_g_ParamLimits

0xaafb,	// (0x0009851b) cell_vitu2_itu_pane_g1_ParamLimits

0x6999,	// (0x000943b9) cell_vitu2_itu_pane_g2_ParamLimits

0x6999,	// (0x000943b9) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0009d34e) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0009d34e) cell_vitu2_itu_pane_g

0x99fa,	// (0x0009741a) bg_vkb2_func_pane_cp05_ParamLimits

0x99fa,	// (0x0009741a) bg_vkb2_func_pane_cp05

0x99fa,	// (0x0009741a) bg_vkb2_func_pane_cp03

0x99fa,	// (0x0009741a) bg_vkb2_func_pane_cp04

0x99fa,	// (0x0009741a) bg_vkb2_func_pane_cp10_ParamLimits

0x99fa,	// (0x0009741a) bg_vkb2_func_pane_cp10

0x00cf,	// (0x0008daef) bg_vkb2_func_pane_cp08

0x75d8,	// (0x00094ff8) bg_vkb2_func_pane_cp06

0x75e6,	// (0x00095006) bg_vkb2_func_pane_cp07

0xdb1e,	// (0x0009b53e) bg_vkb2_func_pane_cp11_ParamLimits

0xdb1e,	// (0x0009b53e) bg_vkb2_func_pane_cp11

0xdb33,	// (0x0009b553) bg_vkb2_func_pane_cp12_ParamLimits

0xdb33,	// (0x0009b553) bg_vkb2_func_pane_cp12

0x99a9,	// (0x000973c9) bg_vkb2_func_pane_cp09

0xd60e,	// (0x0009b02e) bg_vkb2_func_pane_g1

0xaca5,	// (0x000986c5) bg_vkb2_func_pane_g2

0xd616,	// (0x0009b036) bg_vkb2_func_pane_g3

0xd61e,	// (0x0009b03e) bg_vkb2_func_pane_g4

0xd853,	// (0x0009b273) bg_vkb2_func_pane_g5

0xd636,	// (0x0009b056) bg_vkb2_func_pane_g6

0xd63e,	// (0x0009b05e) bg_vkb2_func_pane_g7

0xd62e,	// (0x0009b04e) bg_vkb2_func_pane_g8

0xac85,	// (0x000986a5) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0009d553) bg_vkb2_func_pane_g

0x792c,	// (0x0009534c) blid2_tripm_pane_g6_ParamLimits

0x792c,	// (0x0009534c) blid2_tripm_pane_g6

0xd498,	// (0x0009aeb8) mp4_progress_pane_g1

0x79a3,	// (0x000953c3) blid2_tripm_values_pane_ParamLimits

0x79a3,	// (0x000953c3) blid2_tripm_values_pane

0x7a9a,	// (0x000954ba) blid2_tripm_values_pane_t1

0x7aa8,	// (0x000954c8) blid2_tripm_values_pane_t2

0x7ab6,	// (0x000954d6) blid2_tripm_values_pane_t3

0x7ac4,	// (0x000954e4) blid2_tripm_values_pane_t4

0x7ad2,	// (0x000954f2) blid2_tripm_values_pane_t5

0x7ae0,	// (0x00095500) blid2_tripm_values_pane_t6

0x7aee,	// (0x0009550e) blid2_tripm_values_pane_t7

0x7afc,	// (0x0009551c) blid2_tripm_values_pane_t8

0x7b0a,	// (0x0009552a) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0009d566) blid2_tripm_values_pane_t

0x1d75,	// (0x0008f795) call_video_pane_t1_ParamLimits

0x1d8f,	// (0x0008f7af) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0009cc8e) call_video_pane_t_ParamLimits

0xfd99,	// (0x0008d7b9) msg_header_pane_g1_ParamLimits

0xb501,	// (0x00098f21) msg_header_pane_g2_ParamLimits

0xb501,	// (0x00098f21) msg_header_pane_g2

0x0001,

0xf48f,	// (0x0009ceaf) msg_header_pane_g_ParamLimits

0xf48f,	// (0x0009ceaf) msg_header_pane_g

0xa15d,	// (0x00097b7d) main_clock2_pane_ParamLimits

0x58fb,	// (0x0009331b) grid_clock2_toolbar_pane_ParamLimits

0x58fb,	// (0x0009331b) grid_clock2_toolbar_pane

0x58fb,	// (0x0009331b) listscroll_clock2_pane_ParamLimits

0x58fb,	// (0x0009331b) listscroll_clock2_pane

0x59f2,	// (0x00093412) main_clock2_pane_t3_ParamLimits

0x59f2,	// (0x00093412) main_clock2_pane_t3

0x5a16,	// (0x00093436) main_clock2_pane_t4_ParamLimits

0x5a16,	// (0x00093436) main_clock2_pane_t4

0xdc33,	// (0x0009b653) cell_clock2_toolbar_pane

0xdc3b,	// (0x0009b65b) cell_clock2_toolbar_pane_cp01

0xdc3b,	// (0x0009b65b) cell_clock2_toolbar_pane_cp02

0xdc43,	// (0x0009b663) cell_clock2_toolbar_pane_cp03

0xdc4b,	// (0x0009b66b) list_clock2_pane

0xb244,	// (0x00098c64) scroll_pane_cp10

0xdc53,	// (0x0009b673) list_single_clock2_pane_ParamLimits

0xdc53,	// (0x0009b673) list_single_clock2_pane

0xa389,	// (0x00097da9) list_highlight_pane_cp08

0xdc60,	// (0x0009b680) list_single_clock2_pane_t1

0xdc6e,	// (0x0009b68e) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0009d579) list_single_clock2_pane_t

0x99a9,	// (0x000973c9) bg_button_pane_cp10

0xdc7c,	// (0x0009b69c) cell_clock2_toolbar_pane_g1

0x37d5,	// (0x000911f5) aid_main_viewer_pane_g1_ParamLimits

0x37d5,	// (0x000911f5) aid_main_viewer_pane_g1

0x37e3,	// (0x00091203) aid_main_viewer_pane_g2_ParamLimits

0x37e3,	// (0x00091203) aid_main_viewer_pane_g2

0x37f1,	// (0x00091211) aid_main_viewer_pane_g3_ParamLimits

0x37f1,	// (0x00091211) aid_main_viewer_pane_g3

0x3800,	// (0x00091220) aid_main_viewer_pane_g4_ParamLimits

0x3800,	// (0x00091220) aid_main_viewer_pane_g4

0x0003,

0xf4a0,	// (0x0009cec0) aid_main_viewer_pane_g_ParamLimits

0xf4a0,	// (0x0009cec0) aid_main_viewer_pane_g

0x4153,	// (0x00091b73) main_calc_pane_ParamLimits

0x4167,	// (0x00091b87) main_dialer2_pane_ParamLimits

0x99a9,	// (0x000973c9) main_cam6_pane

0x99a9,	// (0x000973c9) main_vid6_pane

0x5907,	// (0x00093327) listscroll_gen_pane_cp06_ParamLimits

0x5907,	// (0x00093327) listscroll_gen_pane_cp06

0x5a39,	// (0x00093459) main_clock2_pane_t5_ParamLimits

0x5a39,	// (0x00093459) main_clock2_pane_t5

0x5a99,	// (0x000934b9) aid_call2_pane_cp10_ParamLimits

0x5aab,	// (0x000934cb) aid_call_pane_cp10_ParamLimits

0xb2b3,	// (0x00098cd3) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2b3,	// (0x00098cd3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5abd,	// (0x000934dd) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5abd,	// (0x000934dd) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2b3,	// (0x00098cd3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7db,	// (0x0009d1fb) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ad3,	// (0x000934f3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6166,	// (0x00093b86) cell_dialer2_keypad_pane_g2_ParamLimits

0x6166,	// (0x00093b86) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c1,	// (0x0009d2e1) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c1,	// (0x0009d2e1) cell_dialer2_keypad_pane_g

0x6182,	// (0x00093ba2) cell_dialer2_keypad_pane_t1

0x6d30,	// (0x00094750) main_cset_text2_pane_ParamLimits

0x6d30,	// (0x00094750) main_cset_text2_pane

0xda86,	// (0x0009b4a6) area_vitu2_query_pane_g1_ParamLimits

0x0094,	// (0x0008dab4) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0009d496) area_vitu2_query_pane_g_ParamLimits

0x75b4,	// (0x00094fd4) area_vitu2_query_pane_t7_ParamLimits

0x75b4,	// (0x00094fd4) area_vitu2_query_pane_t7

0x75d8,	// (0x00094ff8) bg_button_pane_cp018_ParamLimits

0x75e6,	// (0x00095006) bg_button_pane_cp021_ParamLimits

0x00cf,	// (0x0008daef) bg_button_pane_cp022_ParamLimits

0x00cf,	// (0x0008daef) bg_vkb2_func_pane_cp08_ParamLimits

0x75d8,	// (0x00094ff8) bg_vkb2_func_pane_cp06_ParamLimits

0x75e6,	// (0x00095006) bg_vkb2_func_pane_cp07_ParamLimits

0x00e0,	// (0x0008db00) input_focus_pane_cp09_ParamLimits

0xabf7,	// (0x00098617) cam6_autofocus_pane_ParamLimits

0xabf7,	// (0x00098617) cam6_autofocus_pane

0x7b18,	// (0x00095538) cam6_image_uncrop_pane_ParamLimits

0x7b18,	// (0x00095538) cam6_image_uncrop_pane

0x7b27,	// (0x00095547) cam6_indi_pane_ParamLimits

0x7b27,	// (0x00095547) cam6_indi_pane

0x7b3d,	// (0x0009555d) cam6_mode_pane_ParamLimits

0x7b3d,	// (0x0009555d) cam6_mode_pane

0x7b4f,	// (0x0009556f) cam6_timer_pane_ParamLimits

0x7b4f,	// (0x0009556f) cam6_timer_pane

0x7b5b,	// (0x0009557b) cam6_zoom_pane_ParamLimits

0x7b5b,	// (0x0009557b) cam6_zoom_pane

0x7b69,	// (0x00095589) cam6_mode_pane_g1_ParamLimits

0x7b69,	// (0x00095589) cam6_mode_pane_g1

0x7b79,	// (0x00095599) cam6_mode_pane_g2_ParamLimits

0x7b79,	// (0x00095599) cam6_mode_pane_g2

0x7b89,	// (0x000955a9) cam6_mode_pane_g3_ParamLimits

0x7b89,	// (0x000955a9) cam6_mode_pane_g3

0x7b99,	// (0x000955b9) cam6_mode_pane_g4_ParamLimits

0x7b99,	// (0x000955b9) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0009d57e) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0009d57e) cam6_mode_pane_g

0xdc84,	// (0x0009b6a4) bg_tb_trans_pane_cp08_ParamLimits

0xdc84,	// (0x0009b6a4) bg_tb_trans_pane_cp08

0xdc92,	// (0x0009b6b2) cam6_battery_pane_ParamLimits

0xdc92,	// (0x0009b6b2) cam6_battery_pane

0xdca8,	// (0x0009b6c8) cam6_indi_pane_g1_ParamLimits

0xdca8,	// (0x0009b6c8) cam6_indi_pane_g1

0xdcba,	// (0x0009b6da) cam6_indi_pane_g2_ParamLimits

0xdcba,	// (0x0009b6da) cam6_indi_pane_g2

0xdccc,	// (0x0009b6ec) cam6_indi_pane_g3_ParamLimits

0xdccc,	// (0x0009b6ec) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0009d587) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0009d587) cam6_indi_pane_g

0xdcde,	// (0x0009b6fe) cam6_indi_pane_t1_ParamLimits

0xdcde,	// (0x0009b6fe) cam6_indi_pane_t1

0x6743,	// (0x00094163) cam6_autofocus_pane_g1

0x674b,	// (0x0009416b) cam6_autofocus_pane_g2

0x6753,	// (0x00094173) cam6_autofocus_pane_g3

0x675b,	// (0x0009417b) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0009d58e) cam6_autofocus_pane_g

0xdd04,	// (0x0009b724) cam6_timer_pane_g1

0xdd0c,	// (0x0009b72c) cam6_timer_pane_t1

0xdd1a,	// (0x0009b73a) cam6_zoom_cont_pane

0xdd22,	// (0x0009b742) cam6_zoom_pane_g1

0xdd2a,	// (0x0009b74a) cam6_zoom_pane_g2

0x7ba9,	// (0x000955c9) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0009d597) cam6_zoom_pane_g

0xcbec,	// (0x0009a60c) cam6_battery_pane_g1

0xcbec,	// (0x0009a60c) cam6_battery_pane_g2

0x0001,

0xf6e3,	// (0x0009d103) cam6_battery_pane_g

0xdd32,	// (0x0009b752) cam6_zoom_cont_pane_g1

0xdd3b,	// (0x0009b75b) cam6_zoom_cont_pane_g2

0xdd44,	// (0x0009b764) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0009d59e) cam6_zoom_cont_pane_g

0x7bc6,	// (0x000955e6) cam6_mode_pane_cp_ParamLimits

0x7bc6,	// (0x000955e6) cam6_mode_pane_cp

0x7b5b,	// (0x0009557b) cam6_zoom_pane_cp_ParamLimits

0x7b5b,	// (0x0009557b) cam6_zoom_pane_cp

0x7bd8,	// (0x000955f8) vid6_image_uncrop_cif_pane_ParamLimits

0x7bd8,	// (0x000955f8) vid6_image_uncrop_cif_pane

0x7be8,	// (0x00095608) vid6_image_uncrop_nhd_pane_ParamLimits

0x7be8,	// (0x00095608) vid6_image_uncrop_nhd_pane

0x7b18,	// (0x00095538) vid6_image_uncrop_vga_pane_ParamLimits

0x7b18,	// (0x00095538) vid6_image_uncrop_vga_pane

0x7bf7,	// (0x00095617) vid6_image_uncrop_wvga_pane_ParamLimits

0x7bf7,	// (0x00095617) vid6_image_uncrop_wvga_pane

0x7c06,	// (0x00095626) vid6_indi_pane_ParamLimits

0x7c06,	// (0x00095626) vid6_indi_pane

0xdc84,	// (0x0009b6a4) bg_tb_trans_pane_cp09_ParamLimits

0xdc84,	// (0x0009b6a4) bg_tb_trans_pane_cp09

0xdd5c,	// (0x0009b77c) cam6_battery_pane_cp_ParamLimits

0xdd5c,	// (0x0009b77c) cam6_battery_pane_cp

0xdd68,	// (0x0009b788) vid6_indi_pane_g1_ParamLimits

0xdd68,	// (0x0009b788) vid6_indi_pane_g1

0xdd7a,	// (0x0009b79a) vid6_indi_pane_g2_ParamLimits

0xdd7a,	// (0x0009b79a) vid6_indi_pane_g2

0xdd8c,	// (0x0009b7ac) vid6_indi_pane_g3_ParamLimits

0xdd8c,	// (0x0009b7ac) vid6_indi_pane_g3

0xdda3,	// (0x0009b7c3) vid6_indi_pane_g4_ParamLimits

0xdda3,	// (0x0009b7c3) vid6_indi_pane_g4

0xddba,	// (0x0009b7da) vid6_indi_pane_g5_ParamLimits

0xddba,	// (0x0009b7da) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0009d5a5) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0009d5a5) vid6_indi_pane_g

0xddd4,	// (0x0009b7f4) vid6_indi_pane_t1_ParamLimits

0xddd4,	// (0x0009b7f4) vid6_indi_pane_t1

0xddea,	// (0x0009b80a) vid6_indi_pane_t2_ParamLimits

0xddea,	// (0x0009b80a) vid6_indi_pane_t2

0xde12,	// (0x0009b832) vid6_indi_pane_t3_ParamLimits

0xde12,	// (0x0009b832) vid6_indi_pane_t3

0xde3a,	// (0x0009b85a) vid6_indi_pane_t4_ParamLimits

0xde3a,	// (0x0009b85a) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0009d5b0) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0009d5b0) vid6_indi_pane_t

0xde5e,	// (0x0009b87e) wait_bar_pane_cp08

0x7c1e,	// (0x0009563e) main_cset_text2_pane_t1_ParamLimits

0x7c1e,	// (0x0009563e) main_cset_text2_pane_t1

0x7bb1,	// (0x000955d1) listscroll_gen_pane_cp06_t1_ParamLimits

0x7bb1,	// (0x000955d1) listscroll_gen_pane_cp06_t1

0x99a9,	// (0x000973c9) main_cam6_set_pane

0xce1c,	// (0x0009a83c) bg_tb_trans_pane_cp06_ParamLimits

0xaa32,	// (0x00098452) cam4_indicators_pane_g1_ParamLimits

0xaa43,	// (0x00098463) cam4_indicators_pane_g2_ParamLimits

0xf8fe,	// (0x0009d31e) cam4_indicators_pane_g_ParamLimits

0xaa5b,	// (0x0009847b) cam4_indicators_pane_t1_ParamLimits

0x99fa,	// (0x0009741a) bg_tb_trans_pane_cp07_ParamLimits

0xaa89,	// (0x000984a9) vid4_indicators_pane_g1_ParamLimits

0xaa9f,	// (0x000984bf) vid4_indicators_pane_g2_ParamLimits

0xaab3,	// (0x000984d3) vid4_indicators_pane_g3_ParamLimits

0xaac6,	// (0x000984e6) vid4_indicators_pane_g4_ParamLimits

0xf910,	// (0x0009d330) vid4_indicators_pane_g_ParamLimits

0xaae4,	// (0x00098504) vid4_indicators_pane_t1_ParamLimits

0x7722,	// (0x00095142) vid4_progress_pane_g1_ParamLimits

0x7734,	// (0x00095154) vid4_progress_pane_g2_ParamLimits

0xa6a9,	// (0x000980c9) vid4_progress_pane_g3_ParamLimits

0xab7d,	// (0x0009859d) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0009d4e1) vid4_progress_pane_g_ParamLimits

0xab9b,	// (0x000985bb) vid4_progress_pane_t1_ParamLimits

0xabb0,	// (0x000985d0) vid4_progress_pane_t2_ParamLimits

0xabc6,	// (0x000985e6) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0009d4ec) vid4_progress_pane_t_ParamLimits

0xabdb,	// (0x000985fb) wait_bar_pane_cp07_ParamLimits

0x7c3c,	// (0x0009565c) main_cam6_set_pane_g2_ParamLimits

0x7c3c,	// (0x0009565c) main_cam6_set_pane_g2

0x7c62,	// (0x00095682) main_cset6_listscroll_pane_ParamLimits

0x7c62,	// (0x00095682) main_cset6_listscroll_pane

0x7c80,	// (0x000956a0) main_cset6_slider_pane_ParamLimits

0x7c80,	// (0x000956a0) main_cset6_slider_pane

0x7c96,	// (0x000956b6) main_cset6_text2_pane_ParamLimits

0x7c96,	// (0x000956b6) main_cset6_text2_pane

0xde6d,	// (0x0009b88d) main_cset6_text_pane

0xde75,	// (0x0009b895) main_cset_list_pane_copy1_ParamLimits

0xde75,	// (0x0009b895) main_cset_list_pane_copy1

0xde85,	// (0x0009b8a5) scroll_pane_cp028_copy1

0x2e10,	// (0x00090830) cset_list_set_pane_copy1

0x7ca4,	// (0x000956c4) aid_position_infowindow_above_copy1

0x7cac,	// (0x000956cc) aid_position_infowindow_below_copy1

0x7cb4,	// (0x000956d4) cset_list_set_pane_g1_copy1

0x0117,	// (0x0008db37) cset_list_set_pane_g3_copy1_ParamLimits

0x0117,	// (0x0008db37) cset_list_set_pane_g3_copy1

0x0126,	// (0x0008db46) cset_list_set_pane_t1_copy1_ParamLimits

0x0126,	// (0x0008db46) cset_list_set_pane_t1_copy1

0x99fa,	// (0x0009741a) list_highlight_pane_cp021_copy1_ParamLimits

0x99fa,	// (0x0009741a) list_highlight_pane_cp021_copy1

0xde8e,	// (0x0009b8ae) cset6_slider_pane_ParamLimits

0xde8e,	// (0x0009b8ae) cset6_slider_pane

0xdeba,	// (0x0009b8da) main_cset6_slider_pane_g1_ParamLimits

0xdeba,	// (0x0009b8da) main_cset6_slider_pane_g1

0x7cbc,	// (0x000956dc) main_cset6_slider_pane_g2_ParamLimits

0x7cbc,	// (0x000956dc) main_cset6_slider_pane_g2

0xdee2,	// (0x0009b902) main_cset6_slider_pane_g3_ParamLimits

0xdee2,	// (0x0009b902) main_cset6_slider_pane_g3

0x7ce4,	// (0x00095704) main_cset6_slider_pane_g4_ParamLimits

0x7ce4,	// (0x00095704) main_cset6_slider_pane_g4

0x7cf0,	// (0x00095710) main_cset6_slider_pane_g5_ParamLimits

0x7cf0,	// (0x00095710) main_cset6_slider_pane_g5

0xd741,	// (0x0009b161) main_cset6_slider_pane_g7_ParamLimits

0xd741,	// (0x0009b161) main_cset6_slider_pane_g7

0xd74d,	// (0x0009b16d) main_cset6_slider_pane_g8_ParamLimits

0xd74d,	// (0x0009b16d) main_cset6_slider_pane_g8

0x6ddf,	// (0x000947ff) main_cset6_slider_pane_g9_ParamLimits

0x6ddf,	// (0x000947ff) main_cset6_slider_pane_g9

0x6deb,	// (0x0009480b) main_cset6_slider_pane_g10_ParamLimits

0x6deb,	// (0x0009480b) main_cset6_slider_pane_g10

0x6df7,	// (0x00094817) main_cset6_slider_pane_g11_ParamLimits

0x6df7,	// (0x00094817) main_cset6_slider_pane_g11

0x6e03,	// (0x00094823) main_cset6_slider_pane_g12_ParamLimits

0x6e03,	// (0x00094823) main_cset6_slider_pane_g12

0x6e0f,	// (0x0009482f) main_cset6_slider_pane_g13_ParamLimits

0x6e0f,	// (0x0009482f) main_cset6_slider_pane_g13

0x6e1b,	// (0x0009483b) main_cset6_slider_pane_g14_ParamLimits

0x6e1b,	// (0x0009483b) main_cset6_slider_pane_g14

0x7cfe,	// (0x0009571e) main_cset6_slider_pane_g15_ParamLimits

0x7cfe,	// (0x0009571e) main_cset6_slider_pane_g15

0x6e3f,	// (0x0009485f) main_cset6_slider_pane_g16_ParamLimits

0x6e3f,	// (0x0009485f) main_cset6_slider_pane_g16

0x6e4d,	// (0x0009486d) main_cset6_slider_pane_g17_ParamLimits

0x6e4d,	// (0x0009486d) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0009d5b9) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0009d5b9) main_cset6_slider_pane_g

0xdeee,	// (0x0009b90e) main_cset6_slider_pane_t1_ParamLimits

0xdeee,	// (0x0009b90e) main_cset6_slider_pane_t1

0x7d2e,	// (0x0009574e) main_cset6_slider_pane_t2_ParamLimits

0x7d2e,	// (0x0009574e) main_cset6_slider_pane_t2

0x7d59,	// (0x00095779) main_cset6_slider_pane_t3_ParamLimits

0x7d59,	// (0x00095779) main_cset6_slider_pane_t3

0x7d84,	// (0x000957a4) main_cset6_slider_pane_t4_ParamLimits

0x7d84,	// (0x000957a4) main_cset6_slider_pane_t4

0x7daf,	// (0x000957cf) main_cset6_slider_pane_t5_ParamLimits

0x7daf,	// (0x000957cf) main_cset6_slider_pane_t5

0xdf2f,	// (0x0009b94f) main_cset6_slider_pane_t7_ParamLimits

0xdf2f,	// (0x0009b94f) main_cset6_slider_pane_t7

0x7ddc,	// (0x000957fc) main_cset6_slider_pane_t8_ParamLimits

0x7ddc,	// (0x000957fc) main_cset6_slider_pane_t8

0x7e00,	// (0x00095820) main_cset6_slider_pane_t9_ParamLimits

0x7e00,	// (0x00095820) main_cset6_slider_pane_t9

0x7e24,	// (0x00095844) main_cset6_slider_pane_t10_ParamLimits

0x7e24,	// (0x00095844) main_cset6_slider_pane_t10

0x7e48,	// (0x00095868) main_cset6_slider_pane_t11_ParamLimits

0x7e48,	// (0x00095868) main_cset6_slider_pane_t11

0xdf65,	// (0x0009b985) main_cset6_slider_pane_t14_ParamLimits

0xdf65,	// (0x0009b985) main_cset6_slider_pane_t14

0xdf9e,	// (0x0009b9be) main_cset6_slider_pane_t15_ParamLimits

0xdf9e,	// (0x0009b9be) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0009d5de) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0009d5de) main_cset6_slider_pane_t

0xd805,	// (0x0009b225) cset_slider_pane_g1_copy1

0xd80e,	// (0x0009b22e) cset_slider_pane_g2_copy1

0xd817,	// (0x0009b237) cset_slider_pane_g3_copy1

0x99a9,	// (0x000973c9) bg_popup_sub_pane_cp011_copy1

0xdfd7,	// (0x0009b9f7) main_cset_text_pane_g1_copy1

0xd8a2,	// (0x0009b2c2) main_cset_text_pane_t1_copy1

0xd8b0,	// (0x0009b2d0) main_cset_text_pane_t2_copy1

0xd8be,	// (0x0009b2de) main_cset_text_pane_t3_copy1

0xd8cc,	// (0x0009b2ec) main_cset_text_pane_t4_copy1

0xd8da,	// (0x0009b2fa) main_cset_text_pane_t5_copy1

0xdfdf,	// (0x0009b9ff) main_cset_text_pane_t6_copy1

0xdfed,	// (0x0009ba0d) main_cset_text_pane_t7_copy1

0x7c1e,	// (0x0009563e) main_cset_text2_pane_t1_copy1

0x99fa,	// (0x0009741a) main_ncimui_pane

0x43f5,	// (0x00091e15) popup_query_ncimui_window_ParamLimits

0x43f5,	// (0x00091e15) popup_query_ncimui_window

0xa77d,	// (0x0009819d) field_cale_ev2_pane_g4_ParamLimits

0xa77d,	// (0x0009819d) field_cale_ev2_pane_g4

0x6038,	// (0x00093a58) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6038,	// (0x00093a58) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89c,	// (0x0009d2bc) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89c,	// (0x0009d2bc) cell_video_dialer_keypad_pane_g

0x6050,	// (0x00093a70) cell_video_dialer_keypad_pane_t1

0x99a9,	// (0x000973c9) bg_popup_window_pane_cp012

0xb130,	// (0x00098b50) heading_pane_cp06

0xe019,	// (0x0009ba39) ncim_query_content_pane

0x99a9,	// (0x000973c9) bg_popup_heading_pane_cp01

0xe021,	// (0x0009ba41) ncim_heading_pane_t1

0xe02f,	// (0x0009ba4f) ncim_indicator_popup_pane

0xe041,	// (0x0009ba61) ncim_query_button_pane

0xe057,	// (0x0009ba77) ncim_query_content_pane_t1

0xe069,	// (0x0009ba89) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x0009d622) ncim_query_content_pane_t

0xe0a3,	// (0x0009bac3) ncim_query_list_pane

0xe0b5,	// (0x0009bad5) ncim_query_popup_pane

0xe02f,	// (0x0009ba4f) ncim_indicator_popup_pane_ParamLimits

0x7f94,	// (0x000959b4) ncim_query_content_pane_g1_ParamLimits

0x7f94,	// (0x000959b4) ncim_query_content_pane_g1

0xe057,	// (0x0009ba77) ncim_query_content_pane_t1_ParamLimits

0xe069,	// (0x0009ba89) ncim_query_content_pane_t2_ParamLimits

0x7fa0,	// (0x000959c0) ncim_query_content_pane_t3_ParamLimits

0x7fa0,	// (0x000959c0) ncim_query_content_pane_t3

0x7fc8,	// (0x000959e8) ncim_query_content_pane_t4_ParamLimits

0x7fc8,	// (0x000959e8) ncim_query_content_pane_t4

0x7ff0,	// (0x00095a10) ncim_query_content_pane_t5_ParamLimits

0x7ff0,	// (0x00095a10) ncim_query_content_pane_t5

0xe07b,	// (0x0009ba9b) ncim_query_content_pane_t6_ParamLimits

0xe07b,	// (0x0009ba9b) ncim_query_content_pane_t6

0xfc02,	// (0x0009d622) ncim_query_content_pane_t_ParamLimits

0xe0a3,	// (0x0009bac3) ncim_query_list_pane_ParamLimits

0xe0b5,	// (0x0009bad5) ncim_query_popup_pane_ParamLimits

0xe0c9,	// (0x0009bae9) wait_bar_pane_cp04

0x99a9,	// (0x000973c9) input_focus_pane_cp011

0xe0d1,	// (0x0009baf1) ncim_query_popup_pane_t1

0xe0df,	// (0x0009baff) ncim_list_query_list_pane_ParamLimits

0xe0df,	// (0x0009baff) ncim_list_query_list_pane

0x99a9,	// (0x000973c9) bg_button_pane_cp027

0xe0f2,	// (0x0009bb12) ncim_query_button_pane_g1

0x99a9,	// (0x000973c9) list_highlight_pane_cp012

0xe0fc,	// (0x0009bb1c) ncim_list_query_list_pane_g1

0xe104,	// (0x0009bb24) ncim_list_query_list_pane_t1

0xaa4f,	// (0x0009846f) cam4_indicators_pane_g3_ParamLimits

0xaa4f,	// (0x0009846f) cam4_indicators_pane_g3

0xaad2,	// (0x000984f2) vid4_indicators_pane_g5_ParamLimits

0xaad2,	// (0x000984f2) vid4_indicators_pane_g5

0xab8c,	// (0x000985ac) vid4_progress_pane_g5_ParamLimits

0xab8c,	// (0x000985ac) vid4_progress_pane_g5

0x7e82,	// (0x000958a2) main_ncimui_pane_g1

0x7ee8,	// (0x00095908) ncimui_group_query_pane_ParamLimits

0x7ee8,	// (0x00095908) ncimui_group_query_pane

0x7f30,	// (0x00095950) ncimui_list_pane_ParamLimits

0x7f30,	// (0x00095950) ncimui_list_pane

0x7f57,	// (0x00095977) ncimui_text_pane_ParamLimits

0x7f57,	// (0x00095977) ncimui_text_pane

0x8018,	// (0x00095a38) ncimui_text_pane_t1_ParamLimits

0x8018,	// (0x00095a38) ncimui_text_pane_t1

0xe112,	// (0x0009bb32) ncimui_list_single_graphic_pane_ParamLimits

0xe112,	// (0x0009bb32) ncimui_list_single_graphic_pane

0x8036,	// (0x00095a56) ncimui_query_pane_ParamLimits

0x8036,	// (0x00095a56) ncimui_query_pane

0x99a9,	// (0x000973c9) list_highlight_pane_cp013

0xe122,	// (0x0009bb42) ncim_list_query_list_pane_t1_copy1

0xe0fc,	// (0x0009bb1c) ncim_list_single_graphic_pane_g1

0xe130,	// (0x0009bb50) ncim_query_button_pane_cp01

0xe13c,	// (0x0009bb5c) ncim_query_entry_pane_ParamLimits

0xe13c,	// (0x0009bb5c) ncim_query_entry_pane

0xe14f,	// (0x0009bb6f) ncimui_query_pane_g1

0xe15b,	// (0x0009bb7b) ncimui_query_pane_t1_ParamLimits

0xe15b,	// (0x0009bb7b) ncimui_query_pane_t1

0x99fa,	// (0x0009741a) input_focus_pane_cp012

0xe174,	// (0x0009bb94) ncim_query_entry_pane_t1

0xa15d,	// (0x00097b7d) main_im_pane_ParamLimits

0x99fa,	// (0x0009741a) main_mobtv_pane_ParamLimits

0x99fa,	// (0x0009741a) main_mobtv_pane

0x7d16,	// (0x00095736) main_cset6_slider_pane_g18_ParamLimits

0x7d16,	// (0x00095736) main_cset6_slider_pane_g18

0x7d22,	// (0x00095742) main_cset6_slider_pane_g19_ParamLimits

0x7d22,	// (0x00095742) main_cset6_slider_pane_g19

0xac05,	// (0x00098625) bg_main_mobtv_pane_ParamLimits

0xac05,	// (0x00098625) bg_main_mobtv_pane

0x8049,	// (0x00095a69) main_mobtv_info_pane

0x8054,	// (0x00095a74) main_mobtv_loading_pane_ParamLimits

0x8054,	// (0x00095a74) main_mobtv_loading_pane

0xe186,	// (0x0009bba6) main_mobtv_pg_channel_list_pane

0xe190,	// (0x0009bbb0) main_mobtv_pg_hdr_pane

0x8061,	// (0x00095a81) main_mobtv_programe_curr_pane_ParamLimits

0x8061,	// (0x00095a81) main_mobtv_programe_curr_pane

0x806e,	// (0x00095a8e) main_mobtv_programe_next_pane_ParamLimits

0x806e,	// (0x00095a8e) main_mobtv_programe_next_pane

0xe199,	// (0x0009bbb9) popup_mobtv_noti_window

0xcbec,	// (0x0009a60c) main_tv_pg_hdr_pane_g1

0xe1a3,	// (0x0009bbc3) main_tv_pg_hdr_pane_g2

0xe1ab,	// (0x0009bbcb) main_tv_pg_hdr_pane_g3

0xe1b3,	// (0x0009bbd3) main_tv_pg_hdr_pane_g4

0xe1bb,	// (0x0009bbdb) main_tv_pg_hdr_pane_g5

0xe1c5,	// (0x0009bbe5) main_tv_pg_hdr_pane_g6

0xe1cf,	// (0x0009bbef) main_tv_pg_hdr_pane_g7

0xe1d9,	// (0x0009bbf9) main_tv_pg_hdr_pane_g8

0xe1e3,	// (0x0009bc03) main_tv_pg_hdr_pane_g9

0xe1ed,	// (0x0009bc0d) main_tv_pg_hdr_pane_g10

0xe1f7,	// (0x0009bc17) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x0009d62f) main_tv_pg_hdr_pane_g

0xe201,	// (0x0009bc21) main_tv_pg_hdr_pane_t1

0xe20f,	// (0x0009bc2f) main_tv_pg_hdr_pane_t2

0xe21d,	// (0x0009bc3d) main_tv_pg_hdr_pane_t3

0xe22d,	// (0x0009bc4d) main_tv_pg_hdr_pane_t4

0xe23d,	// (0x0009bc5d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x0009d646) main_tv_pg_hdr_pane_t

0xe24d,	// (0x0009bc6d) single_mobtv_pg_channel_pane_ParamLimits

0xe24d,	// (0x0009bc6d) single_mobtv_pg_channel_pane

0xe25f,	// (0x0009bc7f) single_mobtv_pg_channel_table_pane

0xe268,	// (0x0009bc88) single_mobtv_pg_channel_thumb_pane

0xe271,	// (0x0009bc91) single_tv_pg_channel_pane_g1

0xe27a,	// (0x0009bc9a) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x0009d651) single_tv_pg_channel_pane_g

0xce1c,	// (0x0009a83c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce1c,	// (0x0009a83c) bg_single_mobtv_pg_channel_thumb_pane

0xe283,	// (0x0009bca3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe283,	// (0x0009bca3) single_mobtv_pg_channel_thumb_pane_g1

0xe291,	// (0x0009bcb1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe291,	// (0x0009bcb1) single_mobtv_pg_channel_thumb_pane_g2

0xe29d,	// (0x0009bcbd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe29d,	// (0x0009bcbd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x0009d656) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x0009d656) single_mobtv_pg_channel_thumb_pane_g

0xe2a9,	// (0x0009bcc9) single_mobtv_pg_channel_thumb_pane_t1

0xe2b7,	// (0x0009bcd7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0009d65d) single_mobtv_pg_channel_thumb_pane_t

0xcbec,	// (0x0009a60c) bg_single_mobtv_pg_channel_table_pane_g1

0xcbec,	// (0x0009a60c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e3,	// (0x0009d103) bg_single_mobtv_pg_channel_table_pane_g

0xe2c5,	// (0x0009bce5) single_mobtv_pg_channel_table_pane_t1

0xe2d3,	// (0x0009bcf3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x0009d662) single_mobtv_pg_channel_table_pane_t

0x8083,	// (0x00095aa3) main_mobtv_info_pane_g1_ParamLimits

0x8083,	// (0x00095aa3) main_mobtv_info_pane_g1

0x80a1,	// (0x00095ac1) main_mobtv_info_pane_t1_ParamLimits

0x80a1,	// (0x00095ac1) main_mobtv_info_pane_t1

0x8119,	// (0x00095b39) main_mobtv_info_pane_t2_ParamLimits

0x8119,	// (0x00095b39) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x0009d66c) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x0009d66c) main_mobtv_info_pane_t

0x81a8,	// (0x00095bc8) wait_bar_pane_cp05

0x81ba,	// (0x00095bda) main_mobtv_loading_pane_g1_ParamLimits

0x81ba,	// (0x00095bda) main_mobtv_loading_pane_g1

0x81cb,	// (0x00095beb) main_mobtv_loading_pane_g2_ParamLimits

0x81cb,	// (0x00095beb) main_mobtv_loading_pane_g2

0x81d7,	// (0x00095bf7) main_mobtv_loading_pane_g3_ParamLimits

0x81d7,	// (0x00095bf7) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x0009d673) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x0009d673) main_mobtv_loading_pane_g

0xe2e1,	// (0x0009bd01) main_mobtv_loading_pane_t1_ParamLimits

0xe2e1,	// (0x0009bd01) main_mobtv_loading_pane_t1

0xe2f9,	// (0x0009bd19) main_mobtv_loading_pane_t2_ParamLimits

0xe2f9,	// (0x0009bd19) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x0009d67a) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x0009d67a) main_mobtv_loading_pane_t

0x81ea,	// (0x00095c0a) wait_bar_pane_cp06_ParamLimits

0x81ea,	// (0x00095c0a) wait_bar_pane_cp06

0xe31d,	// (0x0009bd3d) main_mobtv_programe_curr_pane_t1

0xe32b,	// (0x0009bd4b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x0009d67f) main_mobtv_programe_curr_pane_t

0xe339,	// (0x0009bd59) main_mobtv_programe_next_pane_t1

0xe347,	// (0x0009bd67) main_mobtv_programe_next_pane_t2

0xe355,	// (0x0009bd75) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x0009d684) main_mobtv_programe_next_pane_t

0x99a9,	// (0x000973c9) bg_popup_mobtv_noti_window_pane

0xe363,	// (0x0009bd83) popup_mobtv_noti_window_g1

0xe36b,	// (0x0009bd8b) popup_mobtv_noti_window_t1

0xe379,	// (0x0009bd99) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x0009d68b) popup_mobtv_noti_window_t

0xcbec,	// (0x0009a60c) bg_popup_mobtv_noti_window_pane_g1

0x99a9,	// (0x000973c9) sc_clock_pane

0x99a9,	// (0x000973c9) main_fs_bigclock_pane

0x798d,	// (0x000953ad) blid2_tripm_pane_t4_ParamLimits

0x798d,	// (0x000953ad) blid2_tripm_pane_t4

0x81f9,	// (0x00095c19) sc_clock_pane_g1_ParamLimits

0x81f9,	// (0x00095c19) sc_clock_pane_g1

0x820b,	// (0x00095c2b) sc_clock_pane_t1_ParamLimits

0x820b,	// (0x00095c2b) sc_clock_pane_t1

0x822f,	// (0x00095c4f) sc_clock_pane_t2_ParamLimits

0x822f,	// (0x00095c4f) sc_clock_pane_t2

0x8247,	// (0x00095c67) sc_clock_pane_t3_ParamLimits

0x8247,	// (0x00095c67) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x0009d690) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x0009d690) sc_clock_pane_t

0x8f85,	// (0x000969a5) main_fs_bigclock_indicator_pane_ParamLimits

0x8f85,	// (0x000969a5) main_fs_bigclock_indicator_pane

0x8303,	// (0x00095d23) main_fs_bigclock_pane_g1_ParamLimits

0x8303,	// (0x00095d23) main_fs_bigclock_pane_g1

0x8f91,	// (0x000969b1) main_fs_bigclock_pane_t1_ParamLimits

0x8f91,	// (0x000969b1) main_fs_bigclock_pane_t1

0x8fa3,	// (0x000969c3) main_fs_bigclock_pane_t2_ParamLimits

0x8fa3,	// (0x000969c3) main_fs_bigclock_pane_t2

0x8fb7,	// (0x000969d7) main_fs_bigclock_pane_t3_ParamLimits

0x8fb7,	// (0x000969d7) main_fs_bigclock_pane_t3

0x0002,

0xfe7a,	// (0x0009d89a) main_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009d89a) main_fs_bigclock_pane_t

0xebdd,	// (0x0009c5fd) main_fs_bigclock_indicator_pane_g1

0xe049,	// (0x0009ba69) ncim_query_content_pane_g2_ParamLimits

0xe049,	// (0x0009ba69) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0009d61d) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0009d61d) ncim_query_content_pane_g

0x825e,	// (0x00095c7e) sc_clock_pane_t4_ParamLimits

0x825e,	// (0x00095c7e) sc_clock_pane_t4

0x99fa,	// (0x0009741a) main_radioblah_pane

0xd547,	// (0x0009af67) cell_call4_button_pane_t1_copy1_ParamLimits

0xd547,	// (0x0009af67) cell_call4_button_pane_t1_copy1

0x7e9a,	// (0x000958ba) main_ncimui_pane_t1_ParamLimits

0x7e9a,	// (0x000958ba) main_ncimui_pane_t1

0x7eb4,	// (0x000958d4) main_ncimui_pane_t2_ParamLimits

0x7eb4,	// (0x000958d4) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x0009d616) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x0009d616) main_ncimui_pane_t

0xe4cc,	// (0x0009beec) main_radioblah_anim_pane_ParamLimits

0xe4cc,	// (0x0009beec) main_radioblah_anim_pane

0xe4dd,	// (0x0009befd) main_radioblah_info_pane_ParamLimits

0xe4dd,	// (0x0009befd) main_radioblah_info_pane

0xe4f1,	// (0x0009bf11) main_radioblah_pane_t1_ParamLimits

0xe4f1,	// (0x0009bf11) main_radioblah_pane_t1

0xe50d,	// (0x0009bf2d) main_radioblah_pane_t2_ParamLimits

0xe50d,	// (0x0009bf2d) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x0009d6b1) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x0009d6b1) main_radioblah_pane_t

0x8360,	// (0x00095d80) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8360,	// (0x00095d80) main_radioblah_rocker_ctrl_pane

0xe555,	// (0x0009bf75) main_radioblah_info_pane_t1_ParamLimits

0xe555,	// (0x0009bf75) main_radioblah_info_pane_t1

0x83b8,	// (0x00095dd8) main_radioblah_info_pane_t2_ParamLimits

0x83b8,	// (0x00095dd8) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x0009d6ba) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x0009d6ba) main_radioblah_info_pane_t

0xcbec,	// (0x0009a60c) main_radioblah_rocker_ctrl_pane_g1

0x8468,	// (0x00095e88) main_radioblah_rocker_ctrl_pane_g2

0x8470,	// (0x00095e90) main_radioblah_rocker_ctrl_pane_g3

0x8478,	// (0x00095e98) main_radioblah_rocker_ctrl_pane_g4

0x8480,	// (0x00095ea0) main_radioblah_rocker_ctrl_pane_g5

0x8488,	// (0x00095ea8) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x0009d6c3) main_radioblah_rocker_ctrl_pane_g

0x7c1e,	// (0x0009563e) main_cset_text2_pane_t1_copy1_ParamLimits

0xaa20,	// (0x00098440) cam4_image_uncrop_qvga_pane

0xaa75,	// (0x00098495) vid4_image_uncrop_qcif_pane

0xabf7,	// (0x00098617) cam6_image_uncrop_qvga_pane_ParamLimits

0xabf7,	// (0x00098617) cam6_image_uncrop_qvga_pane

0xdd4c,	// (0x0009b76c) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd4c,	// (0x0009b76c) vid6_image_uncrop_qcif_pane

0x99a9,	// (0x000973c9) bg_popup_preview_window_pane_cp03

0xdffb,	// (0x0009ba1b) list_cset_text2_pane

0xe003,	// (0x0009ba23) main_cset6_text2_pane_g1

0xe00b,	// (0x0009ba2b) main_cset6_text2_pane_t1

0x8490,	// (0x00095eb0) list_cset_text2_pane_t1_ParamLimits

0x8490,	// (0x00095eb0) list_cset_text2_pane_t1

0x99fa,	// (0x0009741a) main_radioblah_pane_ParamLimits

0x8194,	// (0x00095bb4) main_mobtv_info_pane_t3_ParamLimits

0x8194,	// (0x00095bb4) main_mobtv_info_pane_t3

0x834e,	// (0x00095d6e) main_radioblah_pane_g1

0x8388,	// (0x00095da8) main_radioblah_info_pane_g1

0x840d,	// (0x00095e2d) main_radioblah_info_pane_t3_ParamLimits

0x840d,	// (0x00095e2d) main_radioblah_info_pane_t3

0x2d5a,	// (0x0009077a) highlight_cell_cale_month_pane_ParamLimits

0x2d5a,	// (0x0009077a) highlight_cell_cale_month_pane

0x99a9,	// (0x000973c9) main_phob_fisheye_pane

0xcef8,	// (0x0009a918) scroll_pane_cp0031_ParamLimits

0xcef8,	// (0x0009a918) scroll_pane_cp0031

0xde5e,	// (0x0009b87e) wait_bar_pane_cp08_ParamLimits

0x2e10,	// (0x00090830) cset_list_set_pane_copy1_ParamLimits

0xe5b6,	// (0x0009bfd6) highlight_cell_cale_month_pane_g1

0x84a9,	// (0x00095ec9) highlight_cell_cale_month_pane_t1

0xdada,	// (0x0009b4fa) list_gen_pane_cp01

0xd72c,	// (0x0009b14c) scroll_pane_01

0x020a,	// (0x0008dc2a) list_single_double_fisheye_pane

0x0213,	// (0x0008dc33) list_double_fisheye_pane_g1_ParamLimits

0x0213,	// (0x0008dc33) list_double_fisheye_pane_g1

0x021f,	// (0x0008dc3f) list_double_fisheye_pane_g2_ParamLimits

0x021f,	// (0x0008dc3f) list_double_fisheye_pane_g2

0x0233,	// (0x0008dc53) list_double_fisheye_pane_g3_ParamLimits

0x0233,	// (0x0008dc53) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x0009d6d0) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x0009d6d0) list_double_fisheye_pane_g

0x025c,	// (0x0008dc7c) list_double_fisheye_pane_t1_ParamLimits

0x025c,	// (0x0008dc7c) list_double_fisheye_pane_t1

0x0277,	// (0x0008dc97) list_double_fisheye_pane_t2_ParamLimits

0x0277,	// (0x0008dc97) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0009d6db) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0009d6db) list_double_fisheye_pane_t

0x99a9,	// (0x000973c9) main_call5_pane

0x8289,	// (0x00095ca9) sc_swipe_pane_ParamLimits

0x8289,	// (0x00095ca9) sc_swipe_pane

0x84ca,	// (0x00095eea) call5_image_pane_ParamLimits

0x84ca,	// (0x00095eea) call5_image_pane

0x84e7,	// (0x00095f07) call5_swipe_1_pane_ParamLimits

0x84e7,	// (0x00095f07) call5_swipe_1_pane

0x84fa,	// (0x00095f1a) call5_swipe_2_pane_ParamLimits

0x84fa,	// (0x00095f1a) call5_swipe_2_pane

0x8527,	// (0x00095f47) popup_call5_audio_first_window_ParamLimits

0x8527,	// (0x00095f47) popup_call5_audio_first_window

0xce1c,	// (0x0009a83c) call5_swipe_1_pane_g1_ParamLimits

0xce1c,	// (0x0009a83c) call5_swipe_1_pane_g1

0xe5be,	// (0x0009bfde) call5_swipe_1_pane_g2_ParamLimits

0xe5be,	// (0x0009bfde) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x0009d6e0) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x0009d6e0) call5_swipe_1_pane_g

0xe5ca,	// (0x0009bfea) call5_swipe_1_pane_t1_ParamLimits

0xe5ca,	// (0x0009bfea) call5_swipe_1_pane_t1

0xce1c,	// (0x0009a83c) call5_swipe_2_pane_g1_ParamLimits

0xce1c,	// (0x0009a83c) call5_swipe_2_pane_g1

0xe5df,	// (0x0009bfff) call5_swipe_2_pane_g2_ParamLimits

0xe5df,	// (0x0009bfff) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x0009d6e5) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x0009d6e5) call5_swipe_2_pane_g

0xe5eb,	// (0x0009c00b) call5_swipe_2_pane_t1_ParamLimits

0xe5eb,	// (0x0009c00b) call5_swipe_2_pane_t1

0xe600,	// (0x0009c020) sc_swipe_pane_g1_ParamLimits

0xe600,	// (0x0009c020) sc_swipe_pane_g1

0xe60d,	// (0x0009c02d) sc_swipe_pane_g2_ParamLimits

0xe60d,	// (0x0009c02d) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0009d6ea) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0009d6ea) sc_swipe_pane_g

0xe619,	// (0x0009c039) sc_swipe_pane_t1_ParamLimits

0xe619,	// (0x0009c039) sc_swipe_pane_t1

0x99a9,	// (0x000973c9) main_cmail_launcher_pane

0x853c,	// (0x00095f5c) aid_size_cell_cmail_l_ParamLimits

0x853c,	// (0x00095f5c) aid_size_cell_cmail_l

0x8556,	// (0x00095f76) grid_cmail_l_pane_ParamLimits

0x8556,	// (0x00095f76) grid_cmail_l_pane

0x8571,	// (0x00095f91) cell_cmail_l_pane_ParamLimits

0x8571,	// (0x00095f91) cell_cmail_l_pane

0x8599,	// (0x00095fb9) cell_cmail_l_pane_g1_ParamLimits

0x8599,	// (0x00095fb9) cell_cmail_l_pane_g1

0x85a5,	// (0x00095fc5) cell_cmail_l_pane_t1_ParamLimits

0x85a5,	// (0x00095fc5) cell_cmail_l_pane_t1

0xe62e,	// (0x0009c04e) cell_cmail_l_pane_t2_ParamLimits

0xe62e,	// (0x0009c04e) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x0009d6ef) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x0009d6ef) cell_cmail_l_pane_t

0x99fa,	// (0x0009741a) grid_highlight_pane_cp018_ParamLimits

0x99fa,	// (0x0009741a) grid_highlight_pane_cp018

0x0abe,	// (0x0008e4de) main2_pane_ParamLimits

0x0abe,	// (0x0008e4de) main2_pane

0xa236,	// (0x00097c56) popup_sp_fs_action_menu_bg_pane_g1

0xa23e,	// (0x00097c5e) popup_sp_fs_action_menu_bg_pane_g2

0xa246,	// (0x00097c66) popup_sp_fs_action_menu_bg_pane_g3

0xa24e,	// (0x00097c6e) popup_sp_fs_action_menu_bg_pane_g4

0xa256,	// (0x00097c76) popup_sp_fs_action_menu_bg_pane_g5

0xa25e,	// (0x00097c7e) popup_sp_fs_action_menu_bg_pane_g6

0xa266,	// (0x00097c86) popup_sp_fs_action_menu_bg_pane_g7

0xa26e,	// (0x00097c8e) popup_sp_fs_action_menu_bg_pane_g8

0xa276,	// (0x00097c96) popup_sp_fs_action_menu_bg_pane_g9

0xa27e,	// (0x00097c9e) popup_sp_fs_action_menu_bg_pane_g10

0xa27e,	// (0x00097c9e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0009cbaa) popup_sp_fs_action_menu_bg_pane_g

0xfb41,	// (0x0008d561) list_medium_line_x2_t3_g3_g1_ParamLimits

0xfb41,	// (0x0008d561) list_medium_line_x2_t3_g3_g1

0xfb4d,	// (0x0008d56d) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfb4d,	// (0x0008d56d) list_medium_line_x2_t3_g3_g2

0xfb59,	// (0x0008d579) list_medium_line_x2_t3_g3_g3_ParamLimits

0xfb59,	// (0x0008d579) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0009cc58) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0009cc58) list_medium_line_x2_t3_g3_g

0xfb65,	// (0x0008d585) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfb65,	// (0x0008d585) list_medium_line_x2_t3_g3_t1

0xfb7a,	// (0x0008d59a) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfb7a,	// (0x0008d59a) list_medium_line_x2_t3_g3_t2

0xfb8e,	// (0x0008d5ae) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfb8e,	// (0x0008d5ae) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0009cc5f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0009cc5f) list_medium_line_x2_t3_g3_t

0xf048,	// (0x0009ca68) list_medium_line_x2_t3_g2_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x2_t3_g2_g1

0xf054,	// (0x0009ca74) list_medium_line_x2_t3_g2_g2_ParamLimits

0xf054,	// (0x0009ca74) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0009cc66) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0009cc66) list_medium_line_x2_t3_g2_g

0xfba3,	// (0x0008d5c3) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfba3,	// (0x0008d5c3) list_medium_line_x2_t3_g2_t1

0xfbb9,	// (0x0008d5d9) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfbb9,	// (0x0008d5d9) list_medium_line_x2_t3_g2_t2

0xfbcb,	// (0x0008d5eb) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfbcb,	// (0x0008d5eb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0009cc6b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0009cc6b) list_medium_line_x2_t3_g2_t

0xf048,	// (0x0009ca68) list_medium_line_x2_t4_g4_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x2_t4_g4_g1

0xfbe9,	// (0x0008d609) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfbe9,	// (0x0008d609) list_medium_line_x2_t4_g4_g2

0xf060,	// (0x0009ca80) list_medium_line_x2_t4_g4_g3_ParamLimits

0xf060,	// (0x0009ca80) list_medium_line_x2_t4_g4_g3

0xfbf5,	// (0x0008d615) list_medium_line_x2_t4_g4_g4_ParamLimits

0xfbf5,	// (0x0008d615) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0009cc72) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0009cc72) list_medium_line_x2_t4_g4_g

0xfc01,	// (0x0008d621) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfc01,	// (0x0008d621) list_medium_line_x2_t4_g4_t1

0xfc1b,	// (0x0008d63b) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfc1b,	// (0x0008d63b) list_medium_line_x2_t4_g4_t2

0xfc31,	// (0x0008d651) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfc31,	// (0x0008d651) list_medium_line_x2_t4_g4_t3

0xfc46,	// (0x0008d666) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfc46,	// (0x0008d666) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0009cc7b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0009cc7b) list_medium_line_x2_t4_g4_t

0xf048,	// (0x0009ca68) list_medium_line_x2_t2_g4_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x2_t2_g4_g1

0xf06c,	// (0x0009ca8c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf06c,	// (0x0009ca8c) list_medium_line_x2_t2_g4_g2

0xf060,	// (0x0009ca80) list_medium_line_x2_t2_g4_g3_ParamLimits

0xf060,	// (0x0009ca80) list_medium_line_x2_t2_g4_g3

0xf054,	// (0x0009ca74) list_medium_line_x2_t2_g4_g4_ParamLimits

0xf054,	// (0x0009ca74) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0009cce2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0009cce2) list_medium_line_x2_t2_g4_g

0xfc58,	// (0x0008d678) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfc58,	// (0x0008d678) list_medium_line_x2_t2_g4_t1

0xf078,	// (0x0009ca98) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf078,	// (0x0009ca98) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0009cceb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0009cceb) list_medium_line_x2_t2_g4_t

0xf048,	// (0x0009ca68) list_medium_line_x2_t2_g3_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x2_t2_g3_g1

0xf060,	// (0x0009ca80) list_medium_line_x2_t2_g3_g2_ParamLimits

0xf060,	// (0x0009ca80) list_medium_line_x2_t2_g3_g2

0xf054,	// (0x0009ca74) list_medium_line_x2_t2_g3_g3_ParamLimits

0xf054,	// (0x0009ca74) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2d0,	// (0x0009ccf0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2d0,	// (0x0009ccf0) list_medium_line_x2_t2_g3_g

0xfc6d,	// (0x0008d68d) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfc6d,	// (0x0008d68d) list_medium_line_x2_t2_g3_t1

0xf078,	// (0x0009ca98) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf078,	// (0x0009ca98) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d7,	// (0x0009ccf7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d7,	// (0x0009ccf7) list_medium_line_x2_t2_g3_t

0x2eb5,	// (0x000908d5) main_sp_fs_list_pane_ParamLimits

0x2eb5,	// (0x000908d5) main_sp_fs_list_pane

0x2ec1,	// (0x000908e1) sp_fs_scroll_pane_ParamLimits

0x2ec1,	// (0x000908e1) sp_fs_scroll_pane

0xfc82,	// (0x0008d6a2) list_medium_line_x2_t3_t1

0xfc92,	// (0x0008d6b2) list_medium_line_x2_t3_t2

0xfca0,	// (0x0008d6c0) list_medium_line_x2_t3_t3

0x0002,

0xf322,	// (0x0009cd42) list_medium_line_x2_t3_t

0xfcae,	// (0x0008d6ce) list_medium_line_x3_t4_t1

0xfcbe,	// (0x0008d6de) list_medium_line_x3_t4_t2

0xfccc,	// (0x0008d6ec) list_medium_line_x3_t4_t3

0xf08d,	// (0x0009caad) list_medium_line_x3_t4_t4

0x0003,

0xf329,	// (0x0009cd49) list_medium_line_x3_t4_t

0xfcda,	// (0x0008d6fa) list_medium_line_x4_t5_t1

0xfcea,	// (0x0008d70a) list_medium_line_x4_t5_t2

0xf09b,	// (0x0009cabb) list_medium_line_x4_t5_t3

0xfcf8,	// (0x0008d718) list_medium_line_x4_t5_t4

0xf08d,	// (0x0009caad) list_medium_line_x4_t5_t5

0x0004,

0xf332,	// (0x0009cd52) list_medium_line_x4_t5_t

0xf048,	// (0x0009ca68) list_medium_line_t4_g4_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_t4_g4_g1

0xf0a9,	// (0x0009cac9) list_medium_line_t4_g4_g2_ParamLimits

0xf0a9,	// (0x0009cac9) list_medium_line_t4_g4_g2

0xfd06,	// (0x0008d726) list_medium_line_t4_g4_g3_ParamLimits

0xfd06,	// (0x0008d726) list_medium_line_t4_g4_g3

0xf054,	// (0x0009ca74) list_medium_line_t4_g4_g4_ParamLimits

0xf054,	// (0x0009ca74) list_medium_line_t4_g4_g4

0x0003,

0xf33d,	// (0x0009cd5d) list_medium_line_t4_g4_g_ParamLimits

0xf33d,	// (0x0009cd5d) list_medium_line_t4_g4_g

0xfd12,	// (0x0008d732) list_medium_line_t4_g4_t1_ParamLimits

0xfd12,	// (0x0008d732) list_medium_line_t4_g4_t1

0xfd27,	// (0x0008d747) list_medium_line_t4_g4_t2_ParamLimits

0xfd27,	// (0x0008d747) list_medium_line_t4_g4_t2

0xfd3d,	// (0x0008d75d) list_medium_line_t4_g4_t3_ParamLimits

0xfd3d,	// (0x0008d75d) list_medium_line_t4_g4_t3

0xf078,	// (0x0009ca98) list_medium_line_t4_g4_t4_ParamLimits

0xf078,	// (0x0009ca98) list_medium_line_t4_g4_t4

0x0003,

0xf346,	// (0x0009cd66) list_medium_line_t4_g4_t_ParamLimits

0xf346,	// (0x0009cd66) list_medium_line_t4_g4_t

0x2f93,	// (0x000909b3) chi_dic_find_pane_g1

0x417b,	// (0x00091b9b) main_tport_pane

0x7103,	// (0x00094b23) list_medium_line_plain_t1

0x71b3,	// (0x00094bd3) list_medium_line_t2_g2_g1_ParamLimits

0x71b3,	// (0x00094bd3) list_medium_line_t2_g2_g1

0xab69,	// (0x00098589) list_medium_line_t2_g2_g2_ParamLimits

0xab69,	// (0x00098589) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0009d427) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0009d427) list_medium_line_t2_g2_g

0xff43,	// (0x0008d963) list_medium_line_t2_g2_t1_ParamLimits

0xff43,	// (0x0008d963) list_medium_line_t2_g2_t1

0xff5d,	// (0x0008d97d) list_medium_line_t2_g2_t2_ParamLimits

0xff5d,	// (0x0008d97d) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0009d42c) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0009d42c) list_medium_line_t2_g2_t

0x7746,	// (0x00095166) aid_sp_fs_list_icon_a_sm

0xabef,	// (0x0009860f) aid_sp_fs_list_icon_d

0x774e,	// (0x0009516e) aid_sp_fs_text_primary

0x7757,	// (0x00095177) aid_sp_fs_text_secondary

0x7760,	// (0x00095180) list_medium_line

0x7760,	// (0x00095180) list_medium_line_g2

0x7760,	// (0x00095180) list_medium_line_g3

0x7760,	// (0x00095180) list_medium_line_plain

0x7760,	// (0x00095180) list_medium_line_plain_t2

0x7760,	// (0x00095180) list_medium_line_plain_t3

0x7760,	// (0x00095180) list_medium_line_right_icon

0x7760,	// (0x00095180) list_medium_line_right_iconx2

0x7760,	// (0x00095180) list_medium_line_t2

0x7760,	// (0x00095180) list_medium_line_t2_g2

0x7760,	// (0x00095180) list_medium_line_t2_g3

0x7760,	// (0x00095180) list_medium_line_t2_right_icon

0x7760,	// (0x00095180) list_medium_line_t2_right_iconx2

0x7760,	// (0x00095180) list_medium_line_t3

0x7760,	// (0x00095180) list_medium_line_t3_g2

0x7760,	// (0x00095180) list_medium_line_t3_g3

0x7760,	// (0x00095180) list_medium_line_t3_right_iconx2

0x00f1,	// (0x0008db11) list_medium_line_t4_g4

0x00fa,	// (0x0008db1a) list_medium_line_x2

0x00fa,	// (0x0008db1a) list_medium_line_x2_t2_g2

0x00fa,	// (0x0008db1a) list_medium_line_x2_t2_g3

0x00fa,	// (0x0008db1a) list_medium_line_x2_t2_g4

0x00fa,	// (0x0008db1a) list_medium_line_x2_t3

0x00fa,	// (0x0008db1a) list_medium_line_x2_t3_g2

0x00fa,	// (0x0008db1a) list_medium_line_x2_t3_g3

0x00fa,	// (0x0008db1a) list_medium_line_x2_t3_g4

0x00fa,	// (0x0008db1a) list_medium_line_x2_t4_g2

0x00fa,	// (0x0008db1a) list_medium_line_x2_t4_g4

0x7769,	// (0x00095189) list_medium_line_x3

0x7769,	// (0x00095189) list_medium_line_x3_t4

0x7769,	// (0x00095189) list_medium_line_x3_t4_g4

0x00f1,	// (0x0008db11) list_medium_line_x4_t4

0x00f1,	// (0x0008db11) list_medium_line_x4_t4_g7

0x00f1,	// (0x0008db11) list_medium_line_x4_t5

0x0103,	// (0x0008db23) list_single_fs_dyc_pane_ParamLimits

0x0103,	// (0x0008db23) list_single_fs_dyc_pane

0xf048,	// (0x0009ca68) list_medium_line_x4_t4_g7_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x4_t4_g7_g1

0x013b,	// (0x0008db5b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x013b,	// (0x0008db5b) list_medium_line_x4_t4_g7_g2

0x0147,	// (0x0008db67) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0147,	// (0x0008db67) list_medium_line_x4_t4_g7_g3

0x0156,	// (0x0008db76) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0156,	// (0x0008db76) list_medium_line_x4_t4_g7_g4

0x0162,	// (0x0008db82) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0162,	// (0x0008db82) list_medium_line_x4_t4_g7_g5

0x0171,	// (0x0008db91) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0171,	// (0x0008db91) list_medium_line_x4_t4_g7_g6

0x0180,	// (0x0008dba0) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0180,	// (0x0008dba0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0009d5f7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0009d5f7) list_medium_line_x4_t4_g7_g

0x018c,	// (0x0008dbac) list_medium_line_x4_t4_g7_t1_ParamLimits

0x018c,	// (0x0008dbac) list_medium_line_x4_t4_g7_t1

0x01a1,	// (0x0008dbc1) list_medium_line_x4_t4_g7_t2_ParamLimits

0x01a1,	// (0x0008dbc1) list_medium_line_x4_t4_g7_t2

0x01b6,	// (0x0008dbd6) list_medium_line_x4_t4_g7_t3_ParamLimits

0x01b6,	// (0x0008dbd6) list_medium_line_x4_t4_g7_t3

0x01cb,	// (0x0008dbeb) list_medium_line_x4_t4_g7_t4_ParamLimits

0x01cb,	// (0x0008dbeb) list_medium_line_x4_t4_g7_t4

0x01dd,	// (0x0008dbfd) list_medium_line_x4_t4_g7_t5_ParamLimits

0x01dd,	// (0x0008dbfd) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0009d606) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0009d606) list_medium_line_x4_t4_g7_t

0x01ef,	// (0x0008dc0f) list_single_dyc_row_pane_ParamLimits

0x01ef,	// (0x0008dc0f) list_single_dyc_row_pane

0x84b7,	// (0x00095ed7) call5_gesture_pane_ParamLimits

0x84b7,	// (0x00095ed7) call5_gesture_pane

0x850d,	// (0x00095f2d) call5_windows_pane_ParamLimits

0x850d,	// (0x00095f2d) call5_windows_pane

0x85bb,	// (0x00095fdb) call5_swipe_1_pane_cp_ParamLimits

0x85bb,	// (0x00095fdb) call5_swipe_1_pane_cp

0x85c7,	// (0x00095fe7) call5_swipe_2_pane_cp_ParamLimits

0x85c7,	// (0x00095fe7) call5_swipe_2_pane_cp

0xa389,	// (0x00097da9) call5_image_pane_cp

0x85d3,	// (0x00095ff3) popup_call5_audio_first_window_cp_ParamLimits

0x85d3,	// (0x00095ff3) popup_call5_audio_first_window_cp

0xe600,	// (0x0009c020) call5_swipe_1_pane_g1_cp_ParamLimits

0xe600,	// (0x0009c020) call5_swipe_1_pane_g1_cp

0xe640,	// (0x0009c060) call5_swipe_1_pane_g2_cp

0xe619,	// (0x0009c039) call5_swipe_1_pane_t1_cp_ParamLimits

0xe619,	// (0x0009c039) call5_swipe_1_pane_t1_cp

0xe600,	// (0x0009c020) call5_swipe_2_pane_g1_cp_ParamLimits

0xe600,	// (0x0009c020) call5_swipe_2_pane_g1_cp

0xe648,	// (0x0009c068) call5_swipe_2_pane_g2_cp

0xe650,	// (0x0009c070) call5_swipe_2_pane_t1_cp_ParamLimits

0xe650,	// (0x0009c070) call5_swipe_2_pane_t1_cp

0x99fa,	// (0x0009741a) main_sp_fs_email_pane

0xe665,	// (0x0009c085) main_sp_fs_listscroll_pane_te

0x85e1,	// (0x00096001) popup_sp_fs_action_menu_pane_ParamLimits

0x85e1,	// (0x00096001) popup_sp_fs_action_menu_pane

0xcbec,	// (0x0009a60c) bg_sp_fs_ctrlbar_pane_g1

0xd199,	// (0x0009abb9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd1ab,	// (0x0009abcb) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd1a2,	// (0x0009abc2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbec,	// (0x0009a60c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x0009d6f4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9cb,	// (0x0009a3eb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9cb,	// (0x0009a3eb) bg_sp_fs_ctrlbar_ddmenu_pane

0xe66e,	// (0x0009c08e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe66e,	// (0x0009c08e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe67a,	// (0x0009c09a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe67a,	// (0x0009c09a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0009d6fd) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0009d6fd) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe686,	// (0x0009c0a6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe686,	// (0x0009c0a6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xac13,	// (0x00098633) list_medium_line_t2_right_icon_g1

0x0299,	// (0x0008dcb9) list_medium_line_t2_right_icon_t1

0x02a9,	// (0x0008dcc9) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x0009d702) list_medium_line_t2_right_icon_t

0xc79b,	// (0x0009a1bb) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc79b,	// (0x0009a1bb) bg_sp_fs_ctrlbar_pane

0x8674,	// (0x00096094) main_sp_fs_ctrlbar_button_pane_cp01

0x867e,	// (0x0009609e) main_sp_fs_ctrlbar_ddmenu_pane

0xe58f,	// (0x0009bfaf) main_sp_fs_ctrlbar_pane_g1

0xe6d8,	// (0x0009c0f8) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x0009d707) main_sp_fs_ctrlbar_pane_g

0xe6e4,	// (0x0009c104) main_sp_fs_ctrlbar_pane_t1

0x02bb,	// (0x0008dcdb) main_sp_fs_ctrlbar_pane

0x02df,	// (0x0008dcff) main_sp_fs_listscroll_pane_te_cp01

0x02ff,	// (0x0008dd1f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x02ff,	// (0x0008dd1f) popup_sp_fs_action_menu_pane_cp01

0x99fa,	// (0x0009741a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x99fa,	// (0x0009741a) bg_sp_fs_highlight_list_pane_cp01

0x8688,	// (0x000960a8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8688,	// (0x000960a8) sp_fs_action_menu_list_gene_pane_g1

0xe714,	// (0x0009c134) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe714,	// (0x0009c134) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x0009d711) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x0009d711) sp_fs_action_menu_list_gene_pane_g

0x8697,	// (0x000960b7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8697,	// (0x000960b7) sp_fs_action_menu_list_gene_pane_t1

0x86af,	// (0x000960cf) sp_fs_action_menu_list_gene_pane_ParamLimits

0x86af,	// (0x000960cf) sp_fs_action_menu_list_gene_pane

0xe721,	// (0x0009c141) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe721,	// (0x0009c141) popup_sp_fs_action_menu_bg_pane

0x86d2,	// (0x000960f2) sp_fs_action_menu_list_pane_ParamLimits

0x86d2,	// (0x000960f2) sp_fs_action_menu_list_pane

0xe72f,	// (0x0009c14f) sp_fs_scroll_pane_cp01_ParamLimits

0xe72f,	// (0x0009c14f) sp_fs_scroll_pane_cp01

0x0335,	// (0x0008dd55) list_medium_line_plain_t2_t1

0x0345,	// (0x0008dd65) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x0009d716) list_medium_line_plain_t2_t

0x0355,	// (0x0008dd75) list_medium_line_plain_t3_t1

0x0365,	// (0x0008dd85) list_medium_line_plain_t3_t2

0x0373,	// (0x0008dd93) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0009d71b) list_medium_line_plain_t3_t

0xf048,	// (0x0009ca68) list_medium_line_x2_t2_g2_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x2_t2_g2_g1

0xf054,	// (0x0009ca74) list_medium_line_x2_t2_g2_g2_ParamLimits

0xf054,	// (0x0009ca74) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0009cc66) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0009cc66) list_medium_line_x2_t2_g2_g

0xf0b5,	// (0x0009cad5) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf0b5,	// (0x0009cad5) list_medium_line_x2_t2_g2_t1

0xf078,	// (0x0009ca98) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf078,	// (0x0009ca98) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x0009d722) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x0009d722) list_medium_line_x2_t2_g2_t

0xf048,	// (0x0009ca68) list_medium_line_x2_t4_g2_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x2_t4_g2_g1

0x0381,	// (0x0008dda1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0381,	// (0x0008dda1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x0009d727) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x0009d727) list_medium_line_x2_t4_g2_g

0x0393,	// (0x0008ddb3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0393,	// (0x0008ddb3) list_medium_line_x2_t4_g2_t1

0x03ad,	// (0x0008ddcd) list_medium_line_x2_t4_g2_t2_ParamLimits

0x03ad,	// (0x0008ddcd) list_medium_line_x2_t4_g2_t2

0x03c3,	// (0x0008dde3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x03c3,	// (0x0008dde3) list_medium_line_x2_t4_g2_t3

0xf078,	// (0x0009ca98) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf078,	// (0x0009ca98) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0009d72c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0009d72c) list_medium_line_x2_t4_g2_t

0xac1b,	// (0x0009863b) list_medium_line_t3_right_iconx2_g1

0xac13,	// (0x00098633) list_medium_line_t3_right_iconx2_g2

0x03d8,	// (0x0008ddf8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x0009d735) list_medium_line_t3_right_iconx2_g

0x03e2,	// (0x0008de02) list_medium_line_t3_right_iconx2_t1

0x03f2,	// (0x0008de12) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0009d73c) list_medium_line_t3_right_iconx2_t

0xf048,	// (0x0009ca68) list_medium_line_x3_t4_g4_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x3_t4_g4_g1

0xf060,	// (0x0009ca80) list_medium_line_x3_t4_g4_g2_ParamLimits

0xf060,	// (0x0009ca80) list_medium_line_x3_t4_g4_g2

0xf0a9,	// (0x0009cac9) list_medium_line_x3_t4_g4_g3_ParamLimits

0xf0a9,	// (0x0009cac9) list_medium_line_x3_t4_g4_g3

0x0400,	// (0x0008de20) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0400,	// (0x0008de20) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x0009d741) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x0009d741) list_medium_line_x3_t4_g4_g

0x040c,	// (0x0008de2c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x040c,	// (0x0008de2c) list_medium_line_x3_t4_g4_t1

0x0423,	// (0x0008de43) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0423,	// (0x0008de43) list_medium_line_x3_t4_g4_t2

0x043e,	// (0x0008de5e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x043e,	// (0x0008de5e) list_medium_line_x3_t4_g4_t3

0x0453,	// (0x0008de73) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0453,	// (0x0008de73) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0009d74a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0009d74a) list_medium_line_x3_t4_g4_t

0x0470,	// (0x0008de90) list_single_dyc_row_text_pane_t1_ParamLimits

0x0470,	// (0x0008de90) list_single_dyc_row_text_pane_t1

0x04b9,	// (0x0008ded9) list_single_dyc_row_text_pane_t2_ParamLimits

0x04b9,	// (0x0008ded9) list_single_dyc_row_text_pane_t2

0x86f6,	// (0x00096116) list_single_dyc_row_text_pane_t3_ParamLimits

0x86f6,	// (0x00096116) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x0009d753) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x0009d753) list_single_dyc_row_text_pane_t

0x871a,	// (0x0009613a) list_single_dyc_row_pane_g1_ParamLimits

0x871a,	// (0x0009613a) list_single_dyc_row_pane_g1

0x8726,	// (0x00096146) list_single_dyc_row_pane_g2_ParamLimits

0x8726,	// (0x00096146) list_single_dyc_row_pane_g2

0x8732,	// (0x00096152) list_single_dyc_row_pane_g3_ParamLimits

0x8732,	// (0x00096152) list_single_dyc_row_pane_g3

0x873e,	// (0x0009615e) list_single_dyc_row_pane_g4_ParamLimits

0x873e,	// (0x0009615e) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0009d760) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0009d760) list_single_dyc_row_pane_g

0x874a,	// (0x0009616a) list_single_dyc_row_text_pane_ParamLimits

0x874a,	// (0x0009616a) list_single_dyc_row_text_pane

0x99a9,	// (0x000973c9) bg_sp_fs_scroll_pane

0xe755,	// (0x0009c175) thumb_sp_fs_scroll_pane

0x71b3,	// (0x00094bd3) list_medium_line_g1_ParamLimits

0x71b3,	// (0x00094bd3) list_medium_line_g1

0x8769,	// (0x00096189) list_medium_line_t1_ParamLimits

0x8769,	// (0x00096189) list_medium_line_t1

0xf048,	// (0x0009ca68) list_medium_line_x2_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x2_g1

0xf060,	// (0x0009ca80) list_medium_line_x2_g2_ParamLimits

0xf060,	// (0x0009ca80) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0009d769) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0009d769) list_medium_line_x2_g

0x877e,	// (0x0009619e) list_medium_line_x2_t1_ParamLimits

0x877e,	// (0x0009619e) list_medium_line_x2_t1

0xf048,	// (0x0009ca68) list_medium_line_x3_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x3_g1

0xf060,	// (0x0009ca80) list_medium_line_x3_g2_ParamLimits

0xf060,	// (0x0009ca80) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0009d769) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0009d769) list_medium_line_x3_g

0x877e,	// (0x0009619e) list_medium_line_x3_t1_ParamLimits

0x877e,	// (0x0009619e) list_medium_line_x3_t1

0xe75e,	// (0x0009c17e) thumb_sp_fs_scroll_pane_g1

0xe767,	// (0x0009c187) thumb_sp_fs_scroll_pane_g2

0xe770,	// (0x0009c190) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009d76e) thumb_sp_fs_scroll_pane_g

0xe75e,	// (0x0009c17e) bg_sp_fs_scroll_pane_g1

0xe767,	// (0x0009c187) bg_sp_fs_scroll_pane_g2

0xe770,	// (0x0009c190) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009d76e) bg_sp_fs_scroll_pane_g

0xf048,	// (0x0009ca68) list_medium_line_x2_t3_g4_g1_ParamLimits

0xf048,	// (0x0009ca68) list_medium_line_x2_t3_g4_g1

0xf06c,	// (0x0009ca8c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf06c,	// (0x0009ca8c) list_medium_line_x2_t3_g4_g2

0xf060,	// (0x0009ca80) list_medium_line_x2_t3_g4_g3_ParamLimits

0xf060,	// (0x0009ca80) list_medium_line_x2_t3_g4_g3

0xf054,	// (0x0009ca74) list_medium_line_x2_t3_g4_g4_ParamLimits

0xf054,	// (0x0009ca74) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0009cce2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0009cce2) list_medium_line_x2_t3_g4_g

0x05ee,	// (0x0008e00e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x05ee,	// (0x0008e00e) list_medium_line_x2_t3_g4_t1

0x0604,	// (0x0008e024) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0604,	// (0x0008e024) list_medium_line_x2_t3_g4_t2

0xf078,	// (0x0009ca98) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf078,	// (0x0009ca98) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0009d775) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0009d775) list_medium_line_x2_t3_g4_t

0x71b3,	// (0x00094bd3) list_medium_line_g2_g1_ParamLimits

0x71b3,	// (0x00094bd3) list_medium_line_g2_g1

0xab69,	// (0x00098589) list_medium_line_g2_g2_ParamLimits

0xab69,	// (0x00098589) list_medium_line_g2_g2

0x0001,

0xfa07,	// (0x0009d427) list_medium_line_g2_g_ParamLimits

0xfa07,	// (0x0009d427) list_medium_line_g2_g

0x8794,	// (0x000961b4) list_medium_line_g2_t1_ParamLimits

0x8794,	// (0x000961b4) list_medium_line_g2_t1

0x71b3,	// (0x00094bd3) list_medium_line_t3_g2_g1_ParamLimits

0x71b3,	// (0x00094bd3) list_medium_line_t3_g2_g1

0xab69,	// (0x00098589) list_medium_line_t3_g2_g2_ParamLimits

0xab69,	// (0x00098589) list_medium_line_t3_g2_g2

0x0001,

0xfa07,	// (0x0009d427) list_medium_line_t3_g2_g_ParamLimits

0xfa07,	// (0x0009d427) list_medium_line_t3_g2_g

0x061d,	// (0x0008e03d) list_medium_line_t3_g2_t1_ParamLimits

0x061d,	// (0x0008e03d) list_medium_line_t3_g2_t1

0x0634,	// (0x0008e054) list_medium_line_t3_g2_t2_ParamLimits

0x0634,	// (0x0008e054) list_medium_line_t3_g2_t2

0x0649,	// (0x0008e069) list_medium_line_t3_g2_t3_ParamLimits

0x0649,	// (0x0008e069) list_medium_line_t3_g2_t3

0x0002,

0xfd5c,	// (0x0009d77c) list_medium_line_t3_g2_t_ParamLimits

0xfd5c,	// (0x0009d77c) list_medium_line_t3_g2_t

0xac13,	// (0x00098633) list_medium_line_right_icon_g1

0x87a9,	// (0x000961c9) list_medium_line_right_icon_t1

0x71b3,	// (0x00094bd3) list_medium_line_t2_g1_ParamLimits

0x71b3,	// (0x00094bd3) list_medium_line_t2_g1

0x0662,	// (0x0008e082) list_medium_line_t2_t1_ParamLimits

0x0662,	// (0x0008e082) list_medium_line_t2_t1

0x067c,	// (0x0008e09c) list_medium_line_t2_t2_ParamLimits

0x067c,	// (0x0008e09c) list_medium_line_t2_t2

0x0001,

0xfd63,	// (0x0009d783) list_medium_line_t2_t_ParamLimits

0xfd63,	// (0x0009d783) list_medium_line_t2_t

0x71b3,	// (0x00094bd3) list_medium_line_t3_g1_ParamLimits

0x71b3,	// (0x00094bd3) list_medium_line_t3_g1

0x0695,	// (0x0008e0b5) list_medium_line_t3_t1_ParamLimits

0x0695,	// (0x0008e0b5) list_medium_line_t3_t1

0x06af,	// (0x0008e0cf) list_medium_line_t3_t2_ParamLimits

0x06af,	// (0x0008e0cf) list_medium_line_t3_t2

0x06c5,	// (0x0008e0e5) list_medium_line_t3_t3_ParamLimits

0x06c5,	// (0x0008e0e5) list_medium_line_t3_t3

0x0002,

0xfd68,	// (0x0009d788) list_medium_line_t3_t_ParamLimits

0xfd68,	// (0x0009d788) list_medium_line_t3_t

0x71b3,	// (0x00094bd3) list_medium_line_g3_g1_ParamLimits

0x71b3,	// (0x00094bd3) list_medium_line_g3_g1

0xac23,	// (0x00098643) list_medium_line_g3_g2_ParamLimits

0xac23,	// (0x00098643) list_medium_line_g3_g2

0xab69,	// (0x00098589) list_medium_line_g3_g3_ParamLimits

0xab69,	// (0x00098589) list_medium_line_g3_g3

0x0002,

0xfd6f,	// (0x0009d78f) list_medium_line_g3_g_ParamLimits

0xfd6f,	// (0x0009d78f) list_medium_line_g3_g

0x87b7,	// (0x000961d7) list_medium_line_g3_t1_ParamLimits

0x87b7,	// (0x000961d7) list_medium_line_g3_t1

0x71b3,	// (0x00094bd3) list_medium_line_t2_g3_g1_ParamLimits

0x71b3,	// (0x00094bd3) list_medium_line_t2_g3_g1

0xac23,	// (0x00098643) list_medium_line_t2_g3_g2_ParamLimits

0xac23,	// (0x00098643) list_medium_line_t2_g3_g2

0xab69,	// (0x00098589) list_medium_line_t2_g3_g3_ParamLimits

0xab69,	// (0x00098589) list_medium_line_t2_g3_g3

0x0002,

0xfd6f,	// (0x0009d78f) list_medium_line_t2_g3_g_ParamLimits

0xfd6f,	// (0x0009d78f) list_medium_line_t2_g3_g

0x06da,	// (0x0008e0fa) list_medium_line_t2_g3_t1_ParamLimits

0x06da,	// (0x0008e0fa) list_medium_line_t2_g3_t1

0x06f4,	// (0x0008e114) list_medium_line_t2_g3_t2_ParamLimits

0x06f4,	// (0x0008e114) list_medium_line_t2_g3_t2

0x0001,

0xfd76,	// (0x0009d796) list_medium_line_t2_g3_t_ParamLimits

0xfd76,	// (0x0009d796) list_medium_line_t2_g3_t

0x71b3,	// (0x00094bd3) list_medium_line_t3_g3_g1_ParamLimits

0x71b3,	// (0x00094bd3) list_medium_line_t3_g3_g1

0xac23,	// (0x00098643) list_medium_line_t3_g3_g2_ParamLimits

0xac23,	// (0x00098643) list_medium_line_t3_g3_g2

0xab69,	// (0x00098589) list_medium_line_t3_g3_g3_ParamLimits

0xab69,	// (0x00098589) list_medium_line_t3_g3_g3

0x0002,

0xfd6f,	// (0x0009d78f) list_medium_line_t3_g3_g_ParamLimits

0xfd6f,	// (0x0009d78f) list_medium_line_t3_g3_g

0x070e,	// (0x0008e12e) list_medium_line_t3_g3_t1_ParamLimits

0x070e,	// (0x0008e12e) list_medium_line_t3_g3_t1

0x0722,	// (0x0008e142) list_medium_line_t3_g3_t2_ParamLimits

0x0722,	// (0x0008e142) list_medium_line_t3_g3_t2

0x0734,	// (0x0008e154) list_medium_line_t3_g3_t3_ParamLimits

0x0734,	// (0x0008e154) list_medium_line_t3_g3_t3

0x0002,

0xfd7b,	// (0x0009d79b) list_medium_line_t3_g3_t_ParamLimits

0xfd7b,	// (0x0009d79b) list_medium_line_t3_g3_t

0xac1b,	// (0x0009863b) list_medium_line_right_iconx2_g1

0xac13,	// (0x00098633) list_medium_line_right_iconx2_g2

0x0001,

0xfd82,	// (0x0009d7a2) list_medium_line_right_iconx2_g

0xac2f,	// (0x0009864f) list_medium_line_right_iconx2_t1

0xac1b,	// (0x0009863b) list_medium_line_t2_right_iconx2_g1

0xac13,	// (0x00098633) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd82,	// (0x0009d7a2) list_medium_line_t2_right_iconx2_g

0x0748,	// (0x0008e168) list_medium_line_t2_right_iconx2_t1

0x0758,	// (0x0008e178) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd87,	// (0x0009d7a7) list_medium_line_t2_right_iconx2_t

0x076a,	// (0x0008e18a) list_medium_line_x4_t4_t1

0x0778,	// (0x0008e198) list_medium_line_x4_t4_t2

0x0788,	// (0x0008e1a8) list_medium_line_x4_t4_t3

0x0798,	// (0x0008e1b8) list_medium_line_x4_t4_t4

0x0003,

0xfd8c,	// (0x0009d7ac) list_medium_line_x4_t4_t

0x880f,	// (0x0009622f) tport_appsw_pane_ParamLimits

0x880f,	// (0x0009622f) tport_appsw_pane

0x8827,	// (0x00096247) tport_contact_pane_ParamLimits

0x8827,	// (0x00096247) tport_contact_pane

0x883f,	// (0x0009625f) tport_listscroll_pane_ParamLimits

0x883f,	// (0x0009625f) tport_listscroll_pane

0x8859,	// (0x00096279) cell_tport_appsw_pane_ParamLimits

0x8859,	// (0x00096279) cell_tport_appsw_pane

0xd5ee,	// (0x0009b00e) tport_appsw_pane_g1_ParamLimits

0xd5ee,	// (0x0009b00e) tport_appsw_pane_g1

0xe779,	// (0x0009c199) tport_contact_pane_g1

0xe782,	// (0x0009c1a2) tport_contact_pane_t1

0xe790,	// (0x0009c1b0) tport_contact_pane_t2

0x0001,

0xfd95,	// (0x0009d7b5) tport_contact_pane_t

0xe79e,	// (0x0009c1be) list_tport_pane

0xe7a7,	// (0x0009c1c7) scroll_pane_cp_030

0x88ab,	// (0x000962cb) cell_tport_appsw_pane_g1

0x88bb,	// (0x000962db) cell_tport_appsw_pane_t1

0x88c9,	// (0x000962e9) grid_highlight_pane_cp019

0x88d1,	// (0x000962f1) list_tport_double_graphic_pane_ParamLimits

0x88d1,	// (0x000962f1) list_tport_double_graphic_pane

0x99fa,	// (0x0009741a) list_highlight_pane_cp023_ParamLimits

0x99fa,	// (0x0009741a) list_highlight_pane_cp023

0x88de,	// (0x000962fe) list_tport_double_graphic_pane_g1_ParamLimits

0x88de,	// (0x000962fe) list_tport_double_graphic_pane_g1

0x88eb,	// (0x0009630b) list_tport_double_graphic_pane_t1_ParamLimits

0x88eb,	// (0x0009630b) list_tport_double_graphic_pane_t1

0x8900,	// (0x00096320) list_tport_double_graphic_pane_t2_ParamLimits

0x8900,	// (0x00096320) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0009d7c1) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0009d7c1) list_tport_double_graphic_pane_t

0x99a9,	// (0x000973c9) main_cale_note_pane

0x6953,	// (0x00094373) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6953,	// (0x00094373) cell_vitu2_function_top_wide_pane_cp01

0x81a8,	// (0x00095bc8) wait_bar_pane_cp05_ParamLimits

0x99fa,	// (0x0009741a) listscroll_cmail_pane

0xe7b8,	// (0x0009c1d8) list_cmail_pane

0x891c,	// (0x0009633c) list_cmail_body_pane

0xe59b,	// (0x0009bfbb) list_single_cmail_header_caption_pane

0x892f,	// (0x0009634f) list_single_cmail_header_detail_pane_ParamLimits

0x892f,	// (0x0009634f) list_single_cmail_header_detail_pane

0x895a,	// (0x0009637a) list_single_cmail_header_caption_pane_t1

0x07a8,	// (0x0008e1c8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x07a8,	// (0x0008e1c8) list_single_cmail_header_detail_pane_g1

0xac3d,	// (0x0009865d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xac3d,	// (0x0009865d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0009d7c6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0009d7c6) list_single_cmail_header_detail_pane_g

0x896a,	// (0x0009638a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x896a,	// (0x0009638a) list_single_cmail_header_detail_pane_t1

0x89dc,	// (0x000963fc) list_single_cmail_header_editor_pane_bg_ParamLimits

0x89dc,	// (0x000963fc) list_single_cmail_header_editor_pane_bg

0xe27a,	// (0x0009bc9a) list_cmail_body_pane_g1

0xe7e5,	// (0x0009c205) list_cmail_body_pane_t1

0xd60e,	// (0x0009b02e) list_single_cmail_header_editor_pane_bg_g1

0xaca5,	// (0x000986c5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd61e,	// (0x0009b03e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd616,	// (0x0009b036) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd853,	// (0x0009b273) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd63e,	// (0x0009b05e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd62e,	// (0x0009b04e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd636,	// (0x0009b056) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac85,	// (0x000986a5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89f3,	// (0x00096413) calenote_gesture_pane_ParamLimits

0x89f3,	// (0x00096413) calenote_gesture_pane

0x8a13,	// (0x00096433) calenote_window_pane_ParamLimits

0x8a13,	// (0x00096433) calenote_window_pane

0xe7f3,	// (0x0009c213) popup_note_window_cp01

0x8a2f,	// (0x0009644f) calenote_swipe_1_pane_ParamLimits

0x8a2f,	// (0x0009644f) calenote_swipe_1_pane

0x85c7,	// (0x00095fe7) calenote_swipe_2_pane_ParamLimits

0x85c7,	// (0x00095fe7) calenote_swipe_2_pane

0xe600,	// (0x0009c020) calenote_swipe_1_pane_g1_ParamLimits

0xe600,	// (0x0009c020) calenote_swipe_1_pane_g1

0xe60d,	// (0x0009c02d) calenote_swipe_1_pane_g2_ParamLimits

0xe60d,	// (0x0009c02d) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0009d6ea) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0009d6ea) calenote_swipe_1_pane_g

0xe805,	// (0x0009c225) calenote_swipe_1_pane_t1_ParamLimits

0xe805,	// (0x0009c225) calenote_swipe_1_pane_t1

0xe600,	// (0x0009c020) calenote_swipe_2_pane_g1_ParamLimits

0xe600,	// (0x0009c020) calenote_swipe_2_pane_g1

0xe824,	// (0x0009c244) calenote_swipe_2_pane_g2_ParamLimits

0xe824,	// (0x0009c244) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0009d7d2) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0009d7d2) calenote_swipe_2_pane_g

0xe830,	// (0x0009c250) calenote_swipe_2_pane_t1_ParamLimits

0xe830,	// (0x0009c250) calenote_swipe_2_pane_t1

0x99a9,	// (0x000973c9) main_mup_navstr_pane

0x55a2,	// (0x00092fc2) main_mup3_pane_t7_ParamLimits

0x55a2,	// (0x00092fc2) main_mup3_pane_t7

0xa83e,	// (0x0009825e) main_mp4_pane_g6_ParamLimits

0xa83e,	// (0x0009825e) main_mp4_pane_g6

0xa9e2,	// (0x00098402) main_image3_pane_t4_ParamLimits

0xa9e2,	// (0x00098402) main_image3_pane_t4

0x8a44,	// (0x00096464) popup_navstr_preview_pane_ParamLimits

0x8a44,	// (0x00096464) popup_navstr_preview_pane

0x8a54,	// (0x00096474) scroll_navstr_pane_ParamLimits

0x8a54,	// (0x00096474) scroll_navstr_pane

0x99a9,	// (0x000973c9) bg_popup_preview_window_pane_cp04

0xe857,	// (0x0009c277) popup_navstr_preview_pane_t1

0x8a68,	// (0x00096488) scroll_navstr_pane_g1_ParamLimits

0x8a68,	// (0x00096488) scroll_navstr_pane_g1

0x8a7c,	// (0x0009649c) scroll_navstr_pane_t1_ParamLimits

0x8a7c,	// (0x0009649c) scroll_navstr_pane_t1

0xe7fc,	// (0x0009c21c) bg_button_pane_cp014

0xe7fc,	// (0x0009c21c) bg_button_pane_cp030

0x023f,	// (0x0008dc5f) list_double_fisheye_pane_g4_ParamLimits

0x023f,	// (0x0008dc5f) list_double_fisheye_pane_g4

0x024b,	// (0x0008dc6b) list_double_fisheye_pane_g5_ParamLimits

0x024b,	// (0x0008dc6b) list_double_fisheye_pane_g5

0xe7c0,	// (0x0009c1e0) sp_fs_scroll_pane_cp03

0xe58f,	// (0x0009bfaf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6d8,	// (0x0009c0f8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x0009d707) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6e4,	// (0x0009c104) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8912,	// (0x00096332) sp_fs_scroll_pane_cp02

0xa2e9,	// (0x00097d09) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa2e9,	// (0x00097d09) popup_sp_fs_calendar_preview_list_single_pane

0x99a9,	// (0x000973c9) main_cam6_pano_pane

0x99fa,	// (0x0009741a) main_mup3_pane_ParamLimits

0x99a9,	// (0x000973c9) main_phacti_pane

0x807b,	// (0x00095a9b) bg_button_pane_cp11

0x8095,	// (0x00095ab5) main_mobtv_info_pane_g2_ParamLimits

0x8095,	// (0x00095ab5) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x0009d667) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x0009d667) main_mobtv_info_pane_g

0x8270,	// (0x00095c90) sc_clock_pane_t5_ParamLimits

0x8270,	// (0x00095c90) sc_clock_pane_t5

0x834e,	// (0x00095d6e) main_radioblah_pane_g1_ParamLimits

0xe525,	// (0x0009bf45) main_radioblah_pane_t3_ParamLimits

0xe525,	// (0x0009bf45) main_radioblah_pane_t3

0xe53d,	// (0x0009bf5d) main_radioblah_pane_t4_ParamLimits

0xe53d,	// (0x0009bf5d) main_radioblah_pane_t4

0x8376,	// (0x00095d96) main_radioblah_text_pane_ParamLimits

0x8376,	// (0x00095d96) main_radioblah_text_pane

0x8388,	// (0x00095da8) main_radioblah_info_pane_g1_ParamLimits

0x8421,	// (0x00095e41) main_radioblah_info_pane_t4_ParamLimits

0x8421,	// (0x00095e41) main_radioblah_info_pane_t4

0x99fa,	// (0x0009741a) main_sp_fs_calendar_pane

0x8a93,	// (0x000964b3) main_phacti_pane_g1

0x8a9b,	// (0x000964bb) phacti_note_pane_ParamLimits

0x8a9b,	// (0x000964bb) phacti_note_pane

0xe86e,	// (0x0009c28e) phacti_term_pane_ParamLimits

0xe86e,	// (0x0009c28e) phacti_term_pane

0xe883,	// (0x0009c2a3) phacti_note_pane_t1_ParamLimits

0xe883,	// (0x0009c2a3) phacti_note_pane_t1

0x8aaf,	// (0x000964cf) phacti_term_pane_g1

0x8ab7,	// (0x000964d7) phacti_term_pane_t1_ParamLimits

0x8ab7,	// (0x000964d7) phacti_term_pane_t1

0xe89a,	// (0x0009c2ba) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a2,	// (0x0009c2c2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbc,	// (0x0009d7dc) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8aa,	// (0x0009c2ca) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8aa,	// (0x0009c2ca) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c0,	// (0x0009c2e0) aid_popup_sp_fs_bg_corner_pane

0xcbec,	// (0x0009a60c) popup_sp_fs_calendar_preview_bg_pane_g1

0x99a9,	// (0x000973c9) popup_sp_fs_calendar_preview_bg_pane

0xe8c8,	// (0x0009c2e8) popup_sp_fs_calendar_preview_list_pane

0xc79b,	// (0x0009a1bb) bg_main_sp_fs_cale_pane_ParamLimits

0xc79b,	// (0x0009a1bb) bg_main_sp_fs_cale_pane

0x8b47,	// (0x00096567) listscroll_cale_mrui_pane_ParamLimits

0x8b47,	// (0x00096567) listscroll_cale_mrui_pane

0x8b5c,	// (0x0009657c) listscroll_sp_fs_schedule_track_pane

0x8b65,	// (0x00096585) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8b65,	// (0x00096585) main_sp_fs_ctrlbar_pane_cp01

0xe8d0,	// (0x0009c2f0) main_sp_fs_ribbon_pane

0x8b78,	// (0x00096598) popup_sp_fs_cale_preview_window

0x8b8a,	// (0x000965aa) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b8a,	// (0x000965aa) list_single_sp_fs_schedule_track_pane

0x99fa,	// (0x0009741a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x99fa,	// (0x0009741a) bg_sp_fs_highlight_list_pane_cp03

0x8b9e,	// (0x000965be) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8b9e,	// (0x000965be) list_single_sp_fs_schedule_track_pane_g1

0x8baa,	// (0x000965ca) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8baa,	// (0x000965ca) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc1,	// (0x0009d7e1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc1,	// (0x0009d7e1) list_single_sp_fs_schedule_track_pane_g

0x8bb6,	// (0x000965d6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8bb6,	// (0x000965d6) list_single_sp_fs_schedule_track_pane_t1

0x8bd8,	// (0x000965f8) sp_fs_schedule_track_pane_ParamLimits

0x8bd8,	// (0x000965f8) sp_fs_schedule_track_pane

0xe8d8,	// (0x0009c2f8) sp_fs_schedule_track_pane_g1

0xe8e0,	// (0x0009c300) sp_fs_schedule_track_pane_g2

0xe8e8,	// (0x0009c308) sp_fs_schedule_track_pane_g3

0xe8f0,	// (0x0009c310) sp_fs_schedule_track_pane_g4

0xe8f8,	// (0x0009c318) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc6,	// (0x0009d7e6) sp_fs_schedule_track_pane_g

0xd60e,	// (0x0009b02e) bg_sp_fs_schedule_viewer_highlight_g1

0xaca5,	// (0x000986c5) bg_sp_fs_schedule_viewer_highlight_g2

0xd616,	// (0x0009b036) bg_sp_fs_schedule_viewer_highlight_g3

0xd61e,	// (0x0009b03e) bg_sp_fs_schedule_viewer_highlight_g4

0xd853,	// (0x0009b273) bg_sp_fs_schedule_viewer_highlight_g5

0xd62e,	// (0x0009b04e) bg_sp_fs_schedule_viewer_highlight_g6

0xd636,	// (0x0009b056) bg_sp_fs_schedule_viewer_highlight_g7

0xd63e,	// (0x0009b05e) bg_sp_fs_schedule_viewer_highlight_g8

0xac85,	// (0x000986a5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd1,	// (0x0009d7f1) bg_sp_fs_schedule_viewer_highlight_g

0x99a9,	// (0x000973c9) bg_main_sp_fs_ribbon_pane

0x8bed,	// (0x0009660d) main_sp_fs_ribbon_pane_g1

0xe900,	// (0x0009c320) main_sp_fs_ribbon_pane_t1

0x8bf6,	// (0x00096616) main_sp_fs_ribbon_pane_t2

0xe90f,	// (0x0009c32f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde4,	// (0x0009d804) main_sp_fs_ribbon_pane_t

0xe91e,	// (0x0009c33e) main_sp_fs_ribbon_scheduler_pane

0xe926,	// (0x0009c346) bg_main_sp_fs_ribbon_pane_g1

0xe92f,	// (0x0009c34f) bg_main_sp_fs_ribbon_pane_g2

0xe938,	// (0x0009c358) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdeb,	// (0x0009d80b) bg_main_sp_fs_ribbon_pane_g

0xe940,	// (0x0009c360) main_sp_fs_ribbon_scheduler_pane_g1

0xe949,	// (0x0009c369) main_sp_fs_ribbon_scheduler_pane_g2

0xe952,	// (0x0009c372) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf2,	// (0x0009d812) main_sp_fs_ribbon_scheduler_pane_g

0xe95b,	// (0x0009c37b) list_cale_mrui_pane

0x8c05,	// (0x00096625) sp_fs_scroll_pane_cp07_ParamLimits

0x8c05,	// (0x00096625) sp_fs_scroll_pane_cp07

0x8c21,	// (0x00096641) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c21,	// (0x00096641) bg_sp_fs_schedule_viewer_highlight

0xe968,	// (0x0009c388) list_single_sp_fs_schedule_track_pane_cp01

0xe970,	// (0x0009c390) list_sp_fs_schedule_track_pane

0xe978,	// (0x0009c398) sp_fs_scroll_pane_cp06_ParamLimits

0xe978,	// (0x0009c398) sp_fs_scroll_pane_cp06

0xcbec,	// (0x0009a60c) bgmain_sp_fs_calendar_pane_g1

0x07c0,	// (0x0008e1e0) list_single_cale_mrui_pane_ParamLimits

0x07c0,	// (0x0008e1e0) list_single_cale_mrui_pane

0x8c33,	// (0x00096653) list_single_cale_mrui_row_pane_ParamLimits

0x8c33,	// (0x00096653) list_single_cale_mrui_row_pane

0x8c49,	// (0x00096669) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8c49,	// (0x00096669) list_single_cale_mrui_row_pane_g1

0x8c75,	// (0x00096695) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8c75,	// (0x00096695) list_single_cale_mrui_row_pane_t1

0x07d5,	// (0x0008e1f5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x07d5,	// (0x0008e1f5) list_single_cale_mrui_row_pane_t2

0x8c87,	// (0x000966a7) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8c87,	// (0x000966a7) list_single_cale_mrui_row_pane_t3

0x8cb6,	// (0x000966d6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8cb6,	// (0x000966d6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe00,	// (0x0009d820) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe00,	// (0x0009d820) list_single_cale_mrui_row_pane_t

0x083d,	// (0x0008e25d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x083d,	// (0x0008e25d) list_single_cmail_header_editor_pane_bg_cp01

0x0861,	// (0x0008e281) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0861,	// (0x0008e281) list_single_cmail_header_editor_pane_bg_cp02

0x8ce5,	// (0x00096705) main_radioblah_text_pane_t1_ParamLimits

0x8ce5,	// (0x00096705) main_radioblah_text_pane_t1

0xe997,	// (0x0009c3b7) cam6_indi_pane_cp01

0xe99f,	// (0x0009c3bf) cam6_mode_pane_cp01

0xe9a7,	// (0x0009c3c7) cam6_pano_pane

0xe9b0,	// (0x0009c3d0) cam6_zoom_pane_cp01

0xe9ba,	// (0x0009c3da) cam6_pano_image_pane

0xe9c3,	// (0x0009c3e3) cam6_pano_pane_g1

0xe27a,	// (0x0009bc9a) cam6_pano_pane_g2

0xe9cc,	// (0x0009c3ec) cam6_pano_pane_g3

0xe9d5,	// (0x0009c3f5) cam6_pano_pane_g4

0xd186,	// (0x0009aba6) cam6_pano_pane_g5

0xe9de,	// (0x0009c3fe) cam6_pano_pane_g6

0xe9e6,	// (0x0009c406) cam6_pano_pane_g7

0xe9ee,	// (0x0009c40e) cam6_pano_pane_g8

0xe9f7,	// (0x0009c417) cam6_pano_pane_g9

0x0008,

0xfe09,	// (0x0009d829) cam6_pano_pane_g

0x99a9,	// (0x000973c9) main_browser_tag_pane

0xe84f,	// (0x0009c26f) grid_navstr_albumart_pane

0xea02,	// (0x0009c422) cell_navstr_albumart_pane_ParamLimits

0xea02,	// (0x0009c422) cell_navstr_albumart_pane

0xea21,	// (0x0009c441) cell_navstr_albumart_pane_g1

0xc5a8,	// (0x00099fc8) cell_navstr_albumart_pane_g2

0xc5b8,	// (0x00099fd8) cell_navstr_albumart_pane_g3

0xc5b0,	// (0x00099fd0) cell_navstr_albumart_pane_g4

0x0003,

0xfe1c,	// (0x0009d83c) cell_navstr_albumart_pane_g

0x8d00,	// (0x00096720) bt_list_pane_ParamLimits

0x8d00,	// (0x00096720) bt_list_pane

0x8d16,	// (0x00096736) bt_list_pane_t1

0x8d25,	// (0x00096745) bt_list_pane_t2

0x0001,

0xfe25,	// (0x0009d845) bt_list_pane_t

0x99a9,	// (0x000973c9) main_cale_prevew_pane

0x8d34,	// (0x00096754) popup_cale_preview_window_ParamLimits

0x8d34,	// (0x00096754) popup_cale_preview_window

0x99fa,	// (0x0009741a) bg_popup_preview_window_pane_cp05_ParamLimits

0x99fa,	// (0x0009741a) bg_popup_preview_window_pane_cp05

0xea29,	// (0x0009c449) list_cale_preview_pane_ParamLimits

0xea29,	// (0x0009c449) list_cale_preview_pane

0x8d51,	// (0x00096771) list_double_cale_preview_pane_ParamLimits

0x8d51,	// (0x00096771) list_double_cale_preview_pane

0x8d65,	// (0x00096785) list_single_cale_preview_pane_ParamLimits

0x8d65,	// (0x00096785) list_single_cale_preview_pane

0x8d7d,	// (0x0009679d) list_single_cale_preview_pane_g1

0x8d85,	// (0x000967a5) list_single_cale_preview_pane_t1_ParamLimits

0x8d85,	// (0x000967a5) list_single_cale_preview_pane_t1

0x8d9a,	// (0x000967ba) list_double_cale_preview_pane_g1

0x8da2,	// (0x000967c2) list_double_cale_preview_pane_t1_ParamLimits

0x8da2,	// (0x000967c2) list_double_cale_preview_pane_t1

0x8db7,	// (0x000967d7) list_double_cale_preview_pane_t2_ParamLimits

0x8db7,	// (0x000967d7) list_double_cale_preview_pane_t2

0x0001,

0xfe2a,	// (0x0009d84a) list_double_cale_preview_pane_t_ParamLimits

0xfe2a,	// (0x0009d84a) list_double_cale_preview_pane_t

0x99a9,	// (0x000973c9) main_ezdial_pane

0x99fa,	// (0x0009741a) main_sp_fs_email_pane_ParamLimits

0x8627,	// (0x00096047) cmail_ddmenu_btn01_pane_ParamLimits

0x8627,	// (0x00096047) cmail_ddmenu_btn01_pane

0x863a,	// (0x0009605a) cmail_ddmenu_btn02_pane_ParamLimits

0x863a,	// (0x0009605a) cmail_ddmenu_btn02_pane

0x865d,	// (0x0009607d) cmail_ddmenu_btn03_pane_ParamLimits

0x865d,	// (0x0009607d) cmail_ddmenu_btn03_pane

0x02bb,	// (0x0008dcdb) main_sp_fs_ctrlbar_pane_ParamLimits

0x02df,	// (0x0008dcff) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x891c,	// (0x0009633c) list_cmail_body_pane_ParamLimits

0xe7cf,	// (0x0009c1ef) bg_button_pane_cp12

0xe7d8,	// (0x0009c1f8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d8,	// (0x0009c1f8) list_single_cmail_header_detail_pane_g3

0x89b8,	// (0x000963d8) list_single_cmail_header_detail_pane_t2_ParamLimits

0x89b8,	// (0x000963d8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0009d7cd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0009d7cd) list_single_cmail_header_detail_pane_t

0x8acc,	// (0x000964ec) phacti_term_pane_t2_ParamLimits

0x8acc,	// (0x000964ec) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0009d7d7) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0009d7d7) phacti_term_pane_t

0xea35,	// (0x0009c455) aid_size_list_single_double

0x8dcf,	// (0x000967ef) popup_ezdial_listscroll_window

0x8deb,	// (0x0009680b) popup_number_entry_window_cp01

0xa389,	// (0x00097da9) bg_popup_call_pane_cp09

0xea41,	// (0x0009c461) ezdial_list_pane

0xea49,	// (0x0009c469) scroll_pane_cp23

0xc79b,	// (0x0009a1bb) bg_button_pane_cp028_ParamLimits

0xc79b,	// (0x0009a1bb) bg_button_pane_cp028

0x8df9,	// (0x00096819) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8df9,	// (0x00096819) cmail_ddmenu_btn01_pane_g1

0x8e08,	// (0x00096828) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e08,	// (0x00096828) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2f,	// (0x0009d84f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2f,	// (0x0009d84f) cmail_ddmenu_btn01_pane_g

0xea51,	// (0x0009c471) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea51,	// (0x0009c471) cmail_ddmenu_btn01_pane_t1

0xc79b,	// (0x0009a1bb) bg_button_pane_cp029_ParamLimits

0xc79b,	// (0x0009a1bb) bg_button_pane_cp029

0x8e1e,	// (0x0009683e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e1e,	// (0x0009683e) cmail_ddmenu_btn02_pane_g1

0x8e39,	// (0x00096859) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e39,	// (0x00096859) cmail_ddmenu_btn02_pane_t1

0x99fa,	// (0x0009741a) bg_button_pane_cp031_ParamLimits

0x99fa,	// (0x0009741a) bg_button_pane_cp031

0x8e1e,	// (0x0009683e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e1e,	// (0x0009683e) cmail_ddmenu_btn03_pane_g1

0x8e39,	// (0x00096859) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e39,	// (0x00096859) cmail_ddmenu_btn03_pane_t1

0x6182,	// (0x00093ba2) cell_dialer2_keypad_pane_t1_ParamLimits

0x619c,	// (0x00093bbc) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x619c,	// (0x00093bbc) cell_dialer2_keypad_pane_t1_copy1

0x7ee0,	// (0x00095900) ncimui_group_button_pane

0x99fa,	// (0x0009741a) main_sp_fs_calendar_pane_ParamLimits

0xe59b,	// (0x0009bfbb) list_single_cmail_header_caption_pane_ParamLimits

0x8aff,	// (0x0009651f) aid_recal_txt_sm_pane

0x99a9,	// (0x000973c9) mian_recal_day_pane

0x8b78,	// (0x00096598) popup_sp_fs_cale_preview_window_ParamLimits

0xea67,	// (0x0009c487) list_recal_day_pane

0x8e7c,	// (0x0009689c) list_single_recal_day_pane_ParamLimits

0x8e7c,	// (0x0009689c) list_single_recal_day_pane

0xea8e,	// (0x0009c4ae) list_single_recal_day_pane_g1_ParamLimits

0xea8e,	// (0x0009c4ae) list_single_recal_day_pane_g1

0x8e8e,	// (0x000968ae) list_single_recal_day_pane_g2_ParamLimits

0x8e8e,	// (0x000968ae) list_single_recal_day_pane_g2

0x8e9a,	// (0x000968ba) list_single_recal_day_pane_g3_ParamLimits

0x8e9a,	// (0x000968ba) list_single_recal_day_pane_g3

0x087f,	// (0x0008e29f) list_single_recal_day_pane_g4_ParamLimits

0x087f,	// (0x0008e29f) list_single_recal_day_pane_g4

0x8ea6,	// (0x000968c6) list_single_recal_day_pane_g5_ParamLimits

0x8ea6,	// (0x000968c6) list_single_recal_day_pane_g5

0x8eb2,	// (0x000968d2) list_single_recal_day_pane_g6_ParamLimits

0x8eb2,	// (0x000968d2) list_single_recal_day_pane_g6

0x0004,

0xfe3e,	// (0x0009d85e) list_single_recal_day_pane_g_ParamLimits

0xfe3e,	// (0x0009d85e) list_single_recal_day_pane_g

0x8ec6,	// (0x000968e6) list_single_recal_day_pane_t1

0x8ed8,	// (0x000968f8) list_single_recal_day_pane_t2

0x0001,

0xfe49,	// (0x0009d869) list_single_recal_day_pane_t

0x8eea,	// (0x0009690a) ncimui_query_button_pane_ParamLimits

0x8eea,	// (0x0009690a) ncimui_query_button_pane

0x8efa,	// (0x0009691a) ncimui_query_button_pane_t1_ParamLimits

0x8efa,	// (0x0009691a) ncimui_query_button_pane_t1

0xea9a,	// (0x0009c4ba) ncimui_query_button_pane_t2_ParamLimits

0xea9a,	// (0x0009c4ba) ncimui_query_button_pane_t2

0x0001,

0xfe4e,	// (0x0009d86e) ncimui_query_button_pane_t_ParamLimits

0xfe4e,	// (0x0009d86e) ncimui_query_button_pane_t

0x8f0d,	// (0x0009692d) query_button_pane_ParamLimits

0x8f0d,	// (0x0009692d) query_button_pane

0x99a9,	// (0x000973c9) bg_button_pane_cp0028

0xeaad,	// (0x0009c4cd) query_button_pane_t1

0x417b,	// (0x00091b9b) main_tport_pane_ParamLimits

0x87cc,	// (0x000961ec) bg_popup_window_pane_cp01_ParamLimits

0x87cc,	// (0x000961ec) bg_popup_window_pane_cp01

0x87e7,	// (0x00096207) heading_pane_cp08_ParamLimits

0x87e7,	// (0x00096207) heading_pane_cp08

0x87fa,	// (0x0009621a) heading_pane_cp07_ParamLimits

0x87fa,	// (0x0009621a) heading_pane_cp07

0x88ab,	// (0x000962cb) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0009d7ba) cell_tport_appsw_pane_g

0x373b,	// (0x0009115b) input_candi_list_open_g1

0xae59,	// (0x00098879) list_cale_time_pane_g6_ParamLimits

0xae59,	// (0x00098879) list_cale_time_pane_g6

0x4f85,	// (0x000929a5) aid_size_touch_calib_1_ParamLimits

0x4f85,	// (0x000929a5) aid_size_touch_calib_1

0x4f97,	// (0x000929b7) aid_size_touch_calib_2_ParamLimits

0x4f97,	// (0x000929b7) aid_size_touch_calib_2

0x4faf,	// (0x000929cf) aid_size_touch_calib_3_ParamLimits

0x4faf,	// (0x000929cf) aid_size_touch_calib_3

0x4fcd,	// (0x000929ed) aid_size_touch_calib_4_ParamLimits

0x4fcd,	// (0x000929ed) aid_size_touch_calib_4

0x4fe5,	// (0x00092a05) main_touch_calib_button_group_pane_ParamLimits

0x4fe5,	// (0x00092a05) main_touch_calib_button_group_pane

0x4ffd,	// (0x00092a1d) main_touch_calib_pane_g1_ParamLimits

0x500f,	// (0x00092a2f) main_touch_calib_pane_g2_ParamLimits

0x5021,	// (0x00092a41) main_touch_calib_pane_g3_ParamLimits

0x5033,	// (0x00092a53) main_touch_calib_pane_g4_ParamLimits

0xf758,	// (0x0009d178) main_touch_calib_pane_g_ParamLimits

0x5045,	// (0x00092a65) main_touch_calib_pane_t1_ParamLimits

0x505f,	// (0x00092a7f) main_touch_calib_pane_t2_ParamLimits

0x5079,	// (0x00092a99) main_touch_calib_pane_t3_ParamLimits

0x508d,	// (0x00092aad) main_touch_calib_pane_t4_ParamLimits

0x50a3,	// (0x00092ac3) main_touch_calib_pane_t5_ParamLimits

0xf761,	// (0x0009d181) main_touch_calib_pane_t_ParamLimits

0xcf1c,	// (0x0009a93c) list_single_fp_cale_pane_g3_ParamLimits

0xcf1c,	// (0x0009a93c) list_single_fp_cale_pane_g3

0x99fa,	// (0x0009741a) bg_button_pane_cp012_ParamLimits

0x99fa,	// (0x0009741a) bg_vkb2_func_pane_cp03_ParamLimits

0x7169,	// (0x00094b89) cell_vitu2_function_top_pane_g1_ParamLimits

0x99fa,	// (0x0009741a) bg_vkb2_func_pane_cp04_ParamLimits

0x7e6e,	// (0x0009588e) main_ncimui_button_group_pane_ParamLimits

0x7e6e,	// (0x0009588e) main_ncimui_button_group_pane

0x7ece,	// (0x000958ee) main_ncimui_pane_t3_ParamLimits

0x7ece,	// (0x000958ee) main_ncimui_pane_t3

0xe865,	// (0x0009c285) phacti_button_group_pane

0xea35,	// (0x0009c455) aid_size_list_single_double_ParamLimits

0x8dcf,	// (0x000967ef) popup_ezdial_listscroll_window_ParamLimits

0x8deb,	// (0x0009680b) popup_number_entry_window_cp01_ParamLimits

0x8f20,	// (0x00096940) phacti_button_pane_ParamLimits

0x8f20,	// (0x00096940) phacti_button_pane

0x99a9,	// (0x000973c9) bg_button_pane_cp14

0xeabb,	// (0x0009c4db) phacti_button_pane_t1

0x8f31,	// (0x00096951) main_touch_calib_button_pane_ParamLimits

0x8f31,	// (0x00096951) main_touch_calib_button_pane

0xa15d,	// (0x00097b7d) bg_button_pane_cp18_ParamLimits

0xa15d,	// (0x00097b7d) bg_button_pane_cp18

0xeac9,	// (0x0009c4e9) main_touch_calib_button_pane_t1_ParamLimits

0xeac9,	// (0x0009c4e9) main_touch_calib_button_pane_t1

0xeadf,	// (0x0009c4ff) main_touch_calib_button_pane_t2_ParamLimits

0xeadf,	// (0x0009c4ff) main_touch_calib_button_pane_t2

0x0001,

0xfe53,	// (0x0009d873) main_touch_calib_button_pane_t_ParamLimits

0xfe53,	// (0x0009d873) main_touch_calib_button_pane_t

0x99a9,	// (0x000973c9) cell_ncimui_button_pane

0x99a9,	// (0x000973c9) bg_button_pane_cp032

0xeafd,	// (0x0009c51d) cell_ncimui_button_pane_t1

0xa9c0,	// (0x000983e0) image3_infobar_pane_ParamLimits

0xa9c0,	// (0x000983e0) image3_infobar_pane

0x829c,	// (0x00095cbc) fs_bigclock_status_pane_ParamLimits

0x829c,	// (0x00095cbc) fs_bigclock_status_pane

0x82a9,	// (0x00095cc9) main_fs_bigclock_clock_pane_ParamLimits

0x82a9,	// (0x00095cc9) main_fs_bigclock_clock_pane

0x82d3,	// (0x00095cf3) main_fs_bigclock_indi_pane_ParamLimits

0x82d3,	// (0x00095cf3) main_fs_bigclock_indi_pane

0x8311,	// (0x00095d31) main_fs_bigclock_swipe_pane_ParamLimits

0x8311,	// (0x00095d31) main_fs_bigclock_swipe_pane

0x99a9,	// (0x000973c9) main_fs_clock_dumped_data

0xe387,	// (0x0009bda7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe387,	// (0x0009bda7) list_single_fs_bigclock_indicator_pane_g1

0xe3b1,	// (0x0009bdd1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3b1,	// (0x0009bdd1) list_single_fs_bigclock_indicator_pane_g2

0xe3cb,	// (0x0009bdeb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3cb,	// (0x0009bdeb) list_single_fs_bigclock_indicator_pane_g3

0xe3e5,	// (0x0009be05) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3e5,	// (0x0009be05) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x0009d69b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x0009d69b) list_single_fs_bigclock_indicator_pane_g

0xe410,	// (0x0009be30) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe410,	// (0x0009be30) list_single_fs_bigclock_indicator_pane_t1

0xe438,	// (0x0009be58) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe438,	// (0x0009be58) list_single_fs_bigclock_indicator_pane_t2

0xe460,	// (0x0009be80) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe460,	// (0x0009be80) list_single_fs_bigclock_indicator_pane_t3

0xe488,	// (0x0009bea8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe488,	// (0x0009bea8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x0009d6a6) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x0009d6a6) list_single_fs_bigclock_indicator_pane_t

0xeb0b,	// (0x0009c52b) image3_infobar_fav_pane_ParamLimits

0xeb0b,	// (0x0009c52b) image3_infobar_fav_pane

0xeb1b,	// (0x0009c53b) image3_infobar_loc_pane_ParamLimits

0xeb1b,	// (0x0009c53b) image3_infobar_loc_pane

0xeb31,	// (0x0009c551) image3_infobar_time_pane_ParamLimits

0xeb31,	// (0x0009c551) image3_infobar_time_pane

0xcbec,	// (0x0009a60c) image3_infobar_time_pane_g1

0xeb41,	// (0x0009c561) image3_infobar_time_pane_t1

0xcbec,	// (0x0009a60c) image3_infobar_loc_pane_g1

0xeb4f,	// (0x0009c56f) image3_infobar_loc_pane_g2

0x0001,

0xfe58,	// (0x0009d878) image3_infobar_loc_pane_g

0xeb57,	// (0x0009c577) image3_infobar_loc_pane_t1

0xcbec,	// (0x0009a60c) image3_infobar_fav_pane_g1

0xeb65,	// (0x0009c585) image3_infobar_fav_pane_g2

0x0001,

0xfe5d,	// (0x0009d87d) image3_infobar_fav_pane_g

0xeb6d,	// (0x0009c58d) fs_bigclock_status_battery_pane

0xeb76,	// (0x0009c596) fs_bigclock_status_signal_pane

0xeb7f,	// (0x0009c59f) fs_bigclock_status_title_pane

0xeb88,	// (0x0009c5a8) fs_bigclock_status_signal_pane_g1

0xeb91,	// (0x0009c5b1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe62,	// (0x0009d882) fs_bigclock_status_signal_pane_g

0xeb99,	// (0x0009c5b9) fs_bigclock_status_battery_pane_g1

0xeba2,	// (0x0009c5c2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe67,	// (0x0009d887) fs_bigclock_status_battery_pane_g

0xebaa,	// (0x0009c5ca) fs_bigclock_status_title_pane_t1

0xcbec,	// (0x0009a60c) main_fs_bigclock_clock_pane_g1

0xebb8,	// (0x0009c5d8) main_fs_bigclock_clock_pane_g2

0xebc3,	// (0x0009c5e3) main_fs_bigclock_clock_pane_g3

0xebc3,	// (0x0009c5e3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6c,	// (0x0009d88c) main_fs_bigclock_clock_pane_g

0xebcf,	// (0x0009c5ef) main_fs_bigclock_clock_pane_t1

0x8f46,	// (0x00096966) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe75,	// (0x0009d895) main_fs_bigclock_clock_pane_t

0x8f55,	// (0x00096975) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8f55,	// (0x00096975) list_single_fs_bigclock_indicator_pane

0x8f66,	// (0x00096986) list_single_fs_bigclock_pane_ParamLimits

0x8f66,	// (0x00096986) list_single_fs_bigclock_pane

0xebe6,	// (0x0009c606) main_fs_bigclock_indicator_pane_t1

0xebf5,	// (0x0009c615) list_single_fs_bigclock_pane_g1

0xebfd,	// (0x0009c61d) list_single_fs_bigclock_pane_t1

0xcbec,	// (0x0009a60c) main_fs_bigclock_swipe_pane_g1

0xec40,	// (0x0009c660) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe86,	// (0x0009d8a6) main_fs_bigclock_swipe_pane_g

0xec48,	// (0x0009c668) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec48,	// (0x0009c668) main_fs_bigclock_swipe_pane_t1

0x2ecd,	// (0x000908ed) call_type_pane_ParamLimits

0x99a9,	// (0x000973c9) main_btmg_pane

0xac49,	// (0x00098669) list_single_cale_mrui_row_pane_g2_ParamLimits

0xac49,	// (0x00098669) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf9,	// (0x0009d819) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf9,	// (0x0009d819) list_single_cale_mrui_row_pane_g

0x8e6a,	// (0x0009688a) list_recal_vselct_arw_lo_pane

0xea86,	// (0x0009c4a6) list_recal_vselct_arw_up_pane

0x8e72,	// (0x00096892) list_recal_vselct_pane

0x8fc9,	// (0x000969e9) btmg_button_pane

0x8fd3,	// (0x000969f3) main_btmg_pane_g1

0x99a9,	// (0x000973c9) bg_button_pane_cp044

0xec65,	// (0x0009c685) btmg_button_pane_t1

0xc787,	// (0x0009a1a7) aid_listscroll_gen

0x99fa,	// (0x0009741a) main_cntbar_detail_pane

0xe7b0,	// (0x0009c1d0) list_cmail_folder_pane

0xe7c0,	// (0x0009c1e0) sp_fs_scroll_pane_cp03_ParamLimits

0xac55,	// (0x00098675) list_single_fs_dyc_pane_cp01_ParamLimits

0xac55,	// (0x00098675) list_single_fs_dyc_pane_cp01

0xec73,	// (0x0009c693) aid_size_cmail_indent

0x8fdd,	// (0x000969fd) list_single_dyc_row_pane_cp01

0x9016,	// (0x00096a36) cntbar_detail_list_pane_ParamLimits

0x9016,	// (0x00096a36) cntbar_detail_list_pane

0x9068,	// (0x00096a88) main_cntbar_detail_cont_pane_ParamLimits

0x9068,	// (0x00096a88) main_cntbar_detail_cont_pane

0x2ec1,	// (0x000908e1) scroll_pane_cp032_ParamLimits

0x2ec1,	// (0x000908e1) scroll_pane_cp032

0x907c,	// (0x00096a9c) cntbar_detail_list_event_pane_ParamLimits

0x907c,	// (0x00096a9c) cntbar_detail_list_event_pane

0x9028,	// (0x00096a48) cntbar_detail_list_shct_pane

0xacf3,	// (0x00098713) aid_list_gen

0xec7c,	// (0x0009c69c) aid_scroll

0xec85,	// (0x0009c6a5) aid_size_touch_scroll_bar

0x00fa,	// (0x0008db1a) aid_list_double

0xec8e,	// (0x0009c6ae) aid_list_single

0x7760,	// (0x00095180) aid_list_single_lg

0x908c,	// (0x00096aac) aid_list_z_g_a_sm

0xac6f,	// (0x0009868f) aid_list_z_g_d

0x0897,	// (0x0008e2b7) aid_txt_z_prm

0x08a7,	// (0x0008e2c7) aid_txt_z_prm_cp01

0x08b5,	// (0x0008e2d5) aid_txt_z_sec

0x9094,	// (0x00096ab4) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9094,	// (0x00096ab4) main_cntbar_detail_cont_pane_g1

0x90a8,	// (0x00096ac8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x90a8,	// (0x00096ac8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8b,	// (0x0009d8ab) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8b,	// (0x0009d8ab) main_cntbar_detail_cont_pane_g

0xec97,	// (0x0009c6b7) main_cntbar_detail_cont_pane_t1

0xeca5,	// (0x0009c6c5) main_cntbar_detail_cont_pane_t2

0xecb3,	// (0x0009c6d3) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe90,	// (0x0009d8b0) main_cntbar_detail_cont_pane_t

0x90b8,	// (0x00096ad8) cell_cntbar_detail_list_shct_pane_ParamLimits

0x90b8,	// (0x00096ad8) cell_cntbar_detail_list_shct_pane

0xecc1,	// (0x0009c6e1) cntbar_detail_list_shct_pane_g1

0xecca,	// (0x0009c6ea) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe97,	// (0x0009d8b7) cntbar_detail_list_shct_pane_g

0x90ca,	// (0x00096aea) cntbar_detail_list_event_pane_g1_ParamLimits

0x90ca,	// (0x00096aea) cntbar_detail_list_event_pane_g1

0x90d6,	// (0x00096af6) cntbar_detail_list_event_pane_g2_ParamLimits

0x90d6,	// (0x00096af6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9c,	// (0x0009d8bc) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9c,	// (0x0009d8bc) cntbar_detail_list_event_pane_g

0x9144,	// (0x00096b64) cntbar_detail_list_event_pane_t1_ParamLimits

0x9144,	// (0x00096b64) cntbar_detail_list_event_pane_t1

0x9159,	// (0x00096b79) cntbar_detail_list_event_pane_t2_ParamLimits

0x9159,	// (0x00096b79) cntbar_detail_list_event_pane_t2

0x0002,

0xfea9,	// (0x0009d8c9) cntbar_detail_list_event_pane_t_ParamLimits

0xfea9,	// (0x0009d8c9) cntbar_detail_list_event_pane_t

0xcbec,	// (0x0009a60c) cell_cntbar_detail_list_shct_pane_g1

0x3273,	// (0x00090c93) navi_pane_mv_g3

0x99fa,	// (0x0009741a) main_cntbar_detail_pane_ParamLimits

0x99a9,	// (0x000973c9) main_notif_wgt_pane

0xa7d8,	// (0x000981f8) aid_tch_main_mp4_pane_g4

0xa9b6,	// (0x000983d6) popup_slider_window_cp02

0x8e60,	// (0x00096880) list_recal_day_event_pane

0x8fe6,	// (0x00096a06) cntbar_detail_btn_pane_ParamLimits

0x8fe6,	// (0x00096a06) cntbar_detail_btn_pane

0x8ffe,	// (0x00096a1e) cntbar_detail_btn_pane_cp01_ParamLimits

0x8ffe,	// (0x00096a1e) cntbar_detail_btn_pane_cp01

0x9028,	// (0x00096a48) cntbar_detail_list_shct_pane_ParamLimits

0x9038,	// (0x00096a58) cntbar_detail_pane_g1_ParamLimits

0x9038,	// (0x00096a58) cntbar_detail_pane_g1

0x904c,	// (0x00096a6c) cntbar_detail_pane_t1_ParamLimits

0x904c,	// (0x00096a6c) cntbar_detail_pane_t1

0x90e2,	// (0x00096b02) cntbar_detail_list_event_pane_g3_ParamLimits

0x90e2,	// (0x00096b02) cntbar_detail_list_event_pane_g3

0x90fa,	// (0x00096b1a) cntbar_detail_list_event_pane_g4_ParamLimits

0x90fa,	// (0x00096b1a) cntbar_detail_list_event_pane_g4

0x9112,	// (0x00096b32) cntbar_detail_list_event_pane_g5_ParamLimits

0x9112,	// (0x00096b32) cntbar_detail_list_event_pane_g5

0x912a,	// (0x00096b4a) cntbar_detail_list_event_pane_g6_ParamLimits

0x912a,	// (0x00096b4a) cntbar_detail_list_event_pane_g6

0x916e,	// (0x00096b8e) cntbar_detail_list_event_pane_t3_ParamLimits

0x916e,	// (0x00096b8e) cntbar_detail_list_event_pane_t3

0x9180,	// (0x00096ba0) popup_notif_wgt_window_ParamLimits

0x9180,	// (0x00096ba0) popup_notif_wgt_window

0x9199,	// (0x00096bb9) popup_submenu_window_cp01_ParamLimits

0x9199,	// (0x00096bb9) popup_submenu_window_cp01

0xa389,	// (0x00097da9) bg_popup_window_pane_cp10

0xecd3,	// (0x0009c6f3) listscroll_notif_wgt_pane

0xece5,	// (0x0009c705) list_notif_wgt_window

0xecee,	// (0x0009c70e) scroll_pane_cp033

0x91ad,	// (0x00096bcd) list_notif_wgt_row_pane_ParamLimits

0x91ad,	// (0x00096bcd) list_notif_wgt_row_pane

0xecf7,	// (0x0009c717) aid_size_list_notif_wgt_del

0xed04,	// (0x0009c724) list_notif_wgt_row_pane_g1

0xed10,	// (0x0009c730) list_notif_wgt_row_pane_g2

0xed24,	// (0x0009c744) list_notif_wgt_row_pane_g3

0x0002,

0xfeb0,	// (0x0009d8d0) list_notif_wgt_row_pane_g

0xed31,	// (0x0009c751) list_notif_wgt_row_pane_t1

0xed47,	// (0x0009c767) list_notif_wgt_row_pane_t2

0xed59,	// (0x0009c779) list_notif_wgt_row_pane_t3

0x0002,

0xfeb7,	// (0x0009d8d7) list_notif_wgt_row_pane_t

0xd85b,	// (0x0009b27b) list_recal_day_event_pane_g1

0xed6b,	// (0x0009c78b) list_recal_day_event_pane_t1

0x99a9,	// (0x000973c9) bg_button_pane_cp045

0xed7a,	// (0x0009c79a) cntbar_detail_btn_pane_t1

0xc79b,	// (0x0009a1bb) main_callh_pane_ParamLimits

0xc79b,	// (0x0009a1bb) main_callh_pane

0x99a9,	// (0x000973c9) main_coverflow0_pane

0x99a9,	// (0x000973c9) main_wgtman_pane

0x8329,	// (0x00095d49) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8329,	// (0x00095d49) main_fs_bigclock_unlock_btn_pane

0x88a3,	// (0x000962c3) bg_button_pane_cp16

0x88b3,	// (0x000962d3) cell_tport_appsw_pane_g3

0x91bd,	// (0x00096bdd) cf0_flow_pane_ParamLimits

0x91bd,	// (0x00096bdd) cf0_flow_pane

0xed88,	// (0x0009c7a8) listscroll_cf0_pane

0xed93,	// (0x0009c7b3) main_cf0_pane_g1

0x91d2,	// (0x00096bf2) main_cf0_pane_t1_ParamLimits

0x91d2,	// (0x00096bf2) main_cf0_pane_t1

0x91e9,	// (0x00096c09) main_cf0_pane_t2_ParamLimits

0x91e9,	// (0x00096c09) main_cf0_pane_t2

0x0001,

0xfec3,	// (0x0009d8e3) main_cf0_pane_t_ParamLimits

0xfec3,	// (0x0009d8e3) main_cf0_pane_t

0xeda5,	// (0x0009c7c5) scroll_pane_cp11

0x9200,	// (0x00096c20) cf0_flow_pane_g1

0x920c,	// (0x00096c2c) cf0_flow_pane_g2

0x0001,

0xfec8,	// (0x0009d8e8) cf0_flow_pane_g

0x9218,	// (0x00096c38) cf0_flow_pane_t1

0x99a9,	// (0x000973c9) main_call6_pane

0x99a9,	// (0x000973c9) main_calllock_pane

0x922a,	// (0x00096c4a) call6_btn_grp_pane_ParamLimits

0x922a,	// (0x00096c4a) call6_btn_grp_pane

0x9244,	// (0x00096c64) call6_pane_g1_ParamLimits

0x9244,	// (0x00096c64) call6_pane_g1

0x925a,	// (0x00096c7a) popup_call6_1st_window_ParamLimits

0x925a,	// (0x00096c7a) popup_call6_1st_window

0x926b,	// (0x00096c8b) popup_call6_2nd_window_ParamLimits

0x926b,	// (0x00096c8b) popup_call6_2nd_window

0x927c,	// (0x00096c9c) cell_call6_btn_pane_ParamLimits

0x927c,	// (0x00096c9c) cell_call6_btn_pane

0xa389,	// (0x00097da9) bg_popup_call2_in_pane_cp03

0xedb0,	// (0x0009c7d0) popup_call6_1st_window_g1

0xedb8,	// (0x0009c7d8) popup_call6_1st_window_g2

0xedc0,	// (0x0009c7e0) popup_call6_1st_window_g3

0x0002,

0xfecd,	// (0x0009d8ed) popup_call6_1st_window_g

0xedc8,	// (0x0009c7e8) popup_call6_1st_window_t1

0xedd7,	// (0x0009c7f7) popup_call6_1st_window_t2

0xede7,	// (0x0009c807) popup_call6_1st_window_t3

0x0002,

0xfed4,	// (0x0009d8f4) popup_call6_1st_window_t

0xa389,	// (0x00097da9) bg_popup_call2_in_pane_cp04

0xedb0,	// (0x0009c7d0) popup_call6_2nd_window_g1

0xedb8,	// (0x0009c7d8) popup_call6_2nd_window_g2

0xedc0,	// (0x0009c7e0) popup_call6_2nd_window_g3

0x0002,

0xfecd,	// (0x0009d8ed) popup_call6_2nd_window_g

0xedc8,	// (0x0009c7e8) popup_call6_2nd_window_t1

0x99a9,	// (0x000973c9) bg_button_pane_cp15

0xedf7,	// (0x0009c817) cell_call6_btn_pane_g1

0xee00,	// (0x0009c820) cell_call6_btn_pane_t1

0x9290,	// (0x00096cb0) listscroll_wgtman_pane_ParamLimits

0x9290,	// (0x00096cb0) listscroll_wgtman_pane

0x92b1,	// (0x00096cd1) wgtman_btn_pane_ParamLimits

0x92b1,	// (0x00096cd1) wgtman_btn_pane

0xb244,	// (0x00098c64) aid_scroll_copy1

0xee0f,	// (0x0009c82f) list_wgtman_pane

0x92f4,	// (0x00096d14) wgtman_btn_pane_g1_ParamLimits

0x92f4,	// (0x00096d14) wgtman_btn_pane_g1

0x9320,	// (0x00096d40) wgtman_btn_pane_t1_ParamLimits

0x9320,	// (0x00096d40) wgtman_btn_pane_t1

0xee19,	// (0x0009c839) wgtman_btn_pane_t2_ParamLimits

0xee19,	// (0x0009c839) wgtman_btn_pane_t2

0x0001,

0xfedb,	// (0x0009d8fb) wgtman_btn_pane_t_ParamLimits

0xfedb,	// (0x0009d8fb) wgtman_btn_pane_t

0xab49,	// (0x00098569) listrow_wgtman_pane_ParamLimits

0xab49,	// (0x00098569) listrow_wgtman_pane

0x935d,	// (0x00096d7d) listrow_wgtman_pane_g1

0x936a,	// (0x00096d8a) listrow_wgtman_pane_g2

0x0001,

0xfee0,	// (0x0009d900) listrow_wgtman_pane_g

0x08c3,	// (0x0008e2e3) listrow_wgtman_pane_t1

0x08db,	// (0x0008e2fb) listrow_wgtman_pane_t2

0x0001,

0xfee5,	// (0x0009d905) listrow_wgtman_pane_t

0x0901,	// (0x0008e321) wait_bar_pane_cp09

0xee30,	// (0x0009c850) main_calllock_btn_pane

0xee3a,	// (0x0009c85a) main_calllock_pane_g1

0x99a9,	// (0x000973c9) bg_button_pane_cp17

0xee46,	// (0x0009c866) main_calllock_btn_pane_g1

0xee4f,	// (0x0009c86f) main_calllock_btn_pane_t1

0x99a9,	// (0x000973c9) main_dialer3_pane

0x99a9,	// (0x000973c9) main_fmrd2_pane

0xcbec,	// (0x0009a60c) main_fs_bigclock_unlock_btn_pane_g1

0xee66,	// (0x0009c886) main_fs_bigclock_unlock_btn_pane_t1

0x9388,	// (0x00096da8) area_fmrd2_info_pane_ParamLimits

0x9388,	// (0x00096da8) area_fmrd2_info_pane

0x9397,	// (0x00096db7) area_fmrd2_visual_pane_ParamLimits

0x9397,	// (0x00096db7) area_fmrd2_visual_pane

0x93a5,	// (0x00096dc5) fmrd2_indi_pane_ParamLimits

0x93a5,	// (0x00096dc5) fmrd2_indi_pane

0x93b2,	// (0x00096dd2) area_fmrd2_visual_pane_g1

0x93ba,	// (0x00096dda) area_fmrd2_visual_pane_t1

0x93ca,	// (0x00096dea) area_fmrd2_visual_pane_t2

0x93da,	// (0x00096dfa) area_fmrd2_visual_pane_t3

0x0002,

0xfeef,	// (0x0009d90f) area_fmrd2_visual_pane_t

0x93ea,	// (0x00096e0a) area_fmrd2_info_pane_g1

0x93f2,	// (0x00096e12) area_fmrd2_info_pane_t1

0x9402,	// (0x00096e22) area_fmrd2_info_pane_t2

0x9412,	// (0x00096e32) area_fmrd2_info_pane_t3

0x9422,	// (0x00096e42) area_fmrd2_info_pane_t4

0x0003,

0xfef6,	// (0x0009d916) area_fmrd2_info_pane_t

0x9432,	// (0x00096e52) fmrd2_indi_pane_t1

0x9442,	// (0x00096e62) fmrd2_indi_pane_t2

0x9452,	// (0x00096e72) fmrd2_indi_pane_t3

0x0002,

0xfeff,	// (0x0009d91f) fmrd2_indi_pane_t

0xe3f4,	// (0x0009be14) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3f4,	// (0x0009be14) list_single_fs_bigclock_indicator_pane_g5

0xe4a4,	// (0x0009bec4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4a4,	// (0x0009bec4) list_single_fs_bigclock_indicator_pane_t5

0x8ae1,	// (0x00096501) aid_cell_bcale_month_pane_ParamLimits

0x8ae1,	// (0x00096501) aid_cell_bcale_month_pane

0x8b08,	// (0x00096528) bcale_month_pane_ParamLimits

0x8b08,	// (0x00096528) bcale_month_pane

0x8b2a,	// (0x0009654a) bcale_preview_pane_ParamLimits

0x8b2a,	// (0x0009654a) bcale_preview_pane

0xebfd,	// (0x0009c61d) list_single_fs_bigclock_pane_t1_ParamLimits

0xec1c,	// (0x0009c63c) list_single_fs_bigclock_pane_t2_ParamLimits

0xec1c,	// (0x0009c63c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe81,	// (0x0009d8a1) list_single_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0009d8a1) list_single_fs_bigclock_pane_t

0xee5e,	// (0x0009c87e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeea,	// (0x0009d90a) main_fs_bigclock_unlock_btn_pane_g

0x9462,	// (0x00096e82) aid_dia3_key_size_ParamLimits

0x9462,	// (0x00096e82) aid_dia3_key_size

0x9471,	// (0x00096e91) aid_dia3_listrow_size_ParamLimits

0x9471,	// (0x00096e91) aid_dia3_listrow_size

0x9486,	// (0x00096ea6) dia3_keypad_fun_pane_ParamLimits

0x9486,	// (0x00096ea6) dia3_keypad_fun_pane

0x94a2,	// (0x00096ec2) dia3_keypad_num_pane_ParamLimits

0x94a2,	// (0x00096ec2) dia3_keypad_num_pane

0x94bb,	// (0x00096edb) dia3_listscroll_pane_ParamLimits

0x94bb,	// (0x00096edb) dia3_listscroll_pane

0x94ce,	// (0x00096eee) dia3_numentry_pane_ParamLimits

0x94ce,	// (0x00096eee) dia3_numentry_pane

0xee74,	// (0x0009c894) dia3_list_pane

0xee7f,	// (0x0009c89f) scroll_pane_cp12

0x99a9,	// (0x000973c9) bg_dia3_numentry_pane

0x94e2,	// (0x00096f02) dia3_numentry_pane_t1

0x94f1,	// (0x00096f11) cell_dia3_key_num_pane

0x94f9,	// (0x00096f19) cell_dia3_key0_fun_pane_ParamLimits

0x94f9,	// (0x00096f19) cell_dia3_key0_fun_pane

0x950d,	// (0x00096f2d) cell_dia3_key1_fun_pane_ParamLimits

0x950d,	// (0x00096f2d) cell_dia3_key1_fun_pane

0x9525,	// (0x00096f45) dia3_listrow_pane

0xe0f2,	// (0x0009bb12) bg_dia3_numentry_pane_g1

0x99a9,	// (0x000973c9) bg_button_pane_cp21

0xee8a,	// (0x0009c8aa) cell_dia3_key_num_pane_t1

0xee98,	// (0x0009c8b8) cell_dia3_key_num_pane_t2

0xeea7,	// (0x0009c8c7) cell_dia3_key_num_pane_t3

0xeeb6,	// (0x0009c8d6) cell_dia3_key_num_pane_t4

0x0003,

0xff06,	// (0x0009d926) cell_dia3_key_num_pane_t

0x99a9,	// (0x000973c9) bg_button_pane_cp19

0x9537,	// (0x00096f57) cell_dia3_key0_fun_pane_g1

0x99a9,	// (0x000973c9) bg_button_pane_cp20

0x953f,	// (0x00096f5f) cell_dia3_key1_fun_pane_g1

0x9547,	// (0x00096f67) area_left_week_number_pane

0x9555,	// (0x00096f75) area_top_day_name_pane

0x9568,	// (0x00096f88) frame_month_view_pane

0xeec5,	// (0x0009c8e5) grid_month_view_pane

0x957d,	// (0x00096f9d) cell_top_day_name_pane_ParamLimits

0x957d,	// (0x00096f9d) cell_top_day_name_pane

0x95ac,	// (0x00096fcc) cell_area_left_week_number_pane_ParamLimits

0x95ac,	// (0x00096fcc) cell_area_left_week_number_pane

0x95c0,	// (0x00096fe0) cell_month_view_pane_ParamLimits

0x95c0,	// (0x00096fe0) cell_month_view_pane

0xeed3,	// (0x0009c8f3) frm_month_g1

0x95ef,	// (0x0009700f) frm_month_g2

0x9602,	// (0x00097022) frm_month_g3

0x9615,	// (0x00097035) frm_month_g4

0x9628,	// (0x00097048) frm_month_g5

0x963b,	// (0x0009705b) frm_month_g6

0x964e,	// (0x0009706e) frm_month_g7

0xeee0,	// (0x0009c900) frm_month_g8

0x9663,	// (0x00097083) frm_month_g9

0x9673,	// (0x00097093) frm_month_g10

0x9683,	// (0x000970a3) frm_month_g11

0x9693,	// (0x000970b3) frm_month_g12

0x96a5,	// (0x000970c5) frm_month_g13

0x96b9,	// (0x000970d9) frm_month_g14

0x96cd,	// (0x000970ed) frm_month_g15

0x96e1,	// (0x00097101) frm_month_g16

0x000f,

0xff0f,	// (0x0009d92f) frm_month_g

0xeeed,	// (0x0009c90d) cell_top_day_name_pane_t1

0x96f5,	// (0x00097115) cell_area_left_week_number_pane_g1

0x9701,	// (0x00097121) cell_area_left_week_number_pane_t1

0xce1c,	// (0x0009a83c) cell_month_view_pane_g1

0x9714,	// (0x00097134) cell_month_view_pane_t1

0x99a9,	// (0x000973c9) main_fps_pane

0xe6a0,	// (0x0009c0c0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6a0,	// (0x0009c0c0) cmail_ddmenu_btn02_pane_cp1

0xe6bc,	// (0x0009c0dc) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6bc,	// (0x0009c0dc) cmail_ddmenu_btn02_pane_cp2

0x8e2d,	// (0x0009684d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e2d,	// (0x0009684d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe34,	// (0x0009d854) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe34,	// (0x0009d854) cmail_ddmenu_btn02_pane_g

0x8e4e,	// (0x0009686e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8e4e,	// (0x0009686e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe39,	// (0x0009d859) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe39,	// (0x0009d859) cmail_ddmenu_btn02_pane_t

0x9727,	// (0x00097147) fps_text_pane_ParamLimits

0x9727,	// (0x00097147) fps_text_pane

0x973e,	// (0x0009715e) main_fps_pane_g1_ParamLimits

0x973e,	// (0x0009715e) main_fps_pane_g1

0x9756,	// (0x00097176) wait_bar_pane_cp010_ParamLimits

0x9756,	// (0x00097176) wait_bar_pane_cp010

0x9769,	// (0x00097189) fps_text_pane_t1_ParamLimits

0x9769,	// (0x00097189) fps_text_pane_t1

0xd5ab,	// (0x0009afcb) cam4_image_uncrop_pane_g1

0xd5b4,	// (0x0009afd4) cam4_image_uncrop_pane_g2

0x666e,	// (0x0009408e) cam4_image_uncrop_pane_g3

0x6677,	// (0x00094097) cam4_image_uncrop_pane_g4

0x0003,

0xf8f5,	// (0x0009d315) cam4_image_uncrop_pane_g

0x9525,	// (0x00096f45) dia3_listrow_pane_ParamLimits

0x99a9,	// (0x000973c9) main_phob2_pane

0x8872,	// (0x00096292) cell_tport_appsw_pane_cp02_ParamLimits

0x8872,	// (0x00096292) cell_tport_appsw_pane_cp02

0x8886,	// (0x000962a6) cell_tport_appsw_pane_cp03_ParamLimits

0x8886,	// (0x000962a6) cell_tport_appsw_pane_cp03

0x99a9,	// (0x000973c9) phob2_contact_card_pane

0x99a9,	// (0x000973c9) phob2_listscroll_pane

0xef00,	// (0x0009c920) phob2_list_pane

0xef08,	// (0x0009c928) scroll_pane_cp034

0x9781,	// (0x000971a1) phob2_cc_data_pane_ParamLimits

0x9781,	// (0x000971a1) phob2_cc_data_pane

0x97a2,	// (0x000971c2) phob2_cc_listscroll_pane_ParamLimits

0x97a2,	// (0x000971c2) phob2_cc_listscroll_pane

0x97c4,	// (0x000971e4) list_double_large_graphic_phob2_pane_ParamLimits

0x97c4,	// (0x000971e4) list_double_large_graphic_phob2_pane

0x97d8,	// (0x000971f8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x97d8,	// (0x000971f8) list_double_large_graphic_phob2_pane_g1

0x0913,	// (0x0008e333) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0913,	// (0x0008e333) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff30,	// (0x0009d950) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff30,	// (0x0009d950) list_double_large_graphic_phob2_pane_g

0x091f,	// (0x0008e33f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x091f,	// (0x0008e33f) list_double_large_graphic_phob2_pane_t1

0x0934,	// (0x0008e354) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0934,	// (0x0008e354) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff35,	// (0x0009d955) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff35,	// (0x0009d955) list_double_large_graphic_phob2_pane_t

0x99a9,	// (0x000973c9) list_highlight_pane_cp024

0x97ee,	// (0x0009720e) phob2_cc_button_pane

0x97f6,	// (0x00097216) phob2_cc_data_pane_g1_ParamLimits

0x97f6,	// (0x00097216) phob2_cc_data_pane_g1

0x980c,	// (0x0009722c) phob2_cc_data_pane_g2_ParamLimits

0x980c,	// (0x0009722c) phob2_cc_data_pane_g2

0x0001,

0xff3a,	// (0x0009d95a) phob2_cc_data_pane_g_ParamLimits

0xff3a,	// (0x0009d95a) phob2_cc_data_pane_g

0x981c,	// (0x0009723c) phob2_cc_data_pane_t1_ParamLimits

0x981c,	// (0x0009723c) phob2_cc_data_pane_t1

0x9834,	// (0x00097254) phob2_cc_data_pane_t2_ParamLimits

0x9834,	// (0x00097254) phob2_cc_data_pane_t2

0x984e,	// (0x0009726e) phob2_cc_data_pane_t3_ParamLimits

0x984e,	// (0x0009726e) phob2_cc_data_pane_t3

0x0002,

0xff3f,	// (0x0009d95f) phob2_cc_data_pane_t_ParamLimits

0xff3f,	// (0x0009d95f) phob2_cc_data_pane_t

0xef10,	// (0x0009c930) phob2_cc_list_pane_ParamLimits

0xef10,	// (0x0009c930) phob2_cc_list_pane

0xd904,	// (0x0009b324) scroll_pane_cp035_ParamLimits

0xd904,	// (0x0009b324) scroll_pane_cp035

0x99fa,	// (0x0009741a) bg_button_pane_cp033

0xef1c,	// (0x0009c93c) phob2_cc_button_pane_g1

0xef28,	// (0x0009c948) phob2_cc_button_pane_t1

0xef3d,	// (0x0009c95d) phob2_cc_button_pane_t2

0x0001,

0xff46,	// (0x0009d966) phob2_cc_button_pane_t

0x9868,	// (0x00097288) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9868,	// (0x00097288) list_double_large_graphic_phob2_cc_pane

0x987c,	// (0x0009729c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x987c,	// (0x0009729c) list_double_large_graphic_phob2_cc_pane_g1

0x0946,	// (0x0008e366) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0946,	// (0x0008e366) list_double_large_graphic_phob2_cc_pane_g2

0x0952,	// (0x0008e372) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0952,	// (0x0008e372) list_double_large_graphic_phob2_cc_pane_g3

0x095e,	// (0x0008e37e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x095e,	// (0x0008e37e) list_double_large_graphic_phob2_cc_pane_g4

0x096a,	// (0x0008e38a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x096a,	// (0x0008e38a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4b,	// (0x0009d96b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4b,	// (0x0009d96b) list_double_large_graphic_phob2_cc_pane_g

0x0976,	// (0x0008e396) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0976,	// (0x0008e396) list_double_large_graphic_phob2_cc_pane_t1

0x099f,	// (0x0008e3bf) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x099f,	// (0x0008e3bf) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff56,	// (0x0009d976) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff56,	// (0x0009d976) list_double_large_graphic_phob2_cc_pane_t

0xef4f,	// (0x0009c96f) list_highlight_pane_cp025_ParamLimits

0xef4f,	// (0x0009c96f) list_highlight_pane_cp025

0x99fa,	// (0x0009741a) bg_button_pane_cp033_ParamLimits

0xef1c,	// (0x0009c93c) phob2_cc_button_pane_g1_ParamLimits

0xef28,	// (0x0009c948) phob2_cc_button_pane_t1_ParamLimits

0xef3d,	// (0x0009c95d) phob2_cc_button_pane_t2_ParamLimits

0xff46,	// (0x0009d966) phob2_cc_button_pane_t_ParamLimits

0x0c1c,	// (0x0008e63c) popup_wgtman_window

0xd72c,	// (0x0009b14c) scroll_pane_cp038

0x92d6,	// (0x00096cf6) wgtman_btn_pane_cp_01_ParamLimits

0x92d6,	// (0x00096cf6) wgtman_btn_pane_cp_01

0xef5d,	// (0x0009c97d) wgtman_content_pane

0xef66,	// (0x0009c986) wgtman_heading_pane

0x99a9,	// (0x000973c9) bg_heading_pane_cp02

0xef6f,	// (0x0009c98f) wgtman_heading_pane_g1

0xef77,	// (0x0009c997) wgtman_heading_pane_t1

0xef85,	// (0x0009c9a5) scroll_pane_cp036

0xef8d,	// (0x0009c9ad) wgtman_list_pane

0xef95,	// (0x0009c9b5) wgtman_list_pane_t1_ParamLimits

0xef95,	// (0x0009c9b5) wgtman_list_pane_t1

0xaa14,	// (0x00098434) cam4_grid_pane

0xff7b,	// (0x0008d99b) bg_button_pane_cp015_ParamLimits

0x7318,	// (0x00094d38) bg_button_pane_cp016_ParamLimits

0x732b,	// (0x00094d4b) bg_button_pane_cp017_ParamLimits

0xffc3,	// (0x0008d9e3) popup_vitu2_query_window_g3_ParamLimits

0xffc3,	// (0x0008d9e3) popup_vitu2_query_window_g3

0x003e,	// (0x0008da5e) popup_vitu2_query_window_t6_ParamLimits

0x003e,	// (0x0008da5e) popup_vitu2_query_window_t6

0x0069,	// (0x0008da89) popup_vitu2_query_window_t7_ParamLimits

0x0069,	// (0x0008da89) popup_vitu2_query_window_t7

0xd5ab,	// (0x0009afcb) cam4_grid_pane_g1

0xd5b4,	// (0x0009afd4) cam4_grid_pane_g2

0xefaf,	// (0x0009c9cf) cam4_grid_pane_g3

0xefb8,	// (0x0009c9d8) cam4_grid_pane_g4

0x0003,

0xff5b,	// (0x0009d97b) cam4_grid_pane_g

0x1d38,	// (0x0008f758) aid_placing_vt_slider_lsc_ParamLimits

0x2025,	// (0x0008fa45) vidtel_button_pane_ParamLimits

0x2025,	// (0x0008fa45) vidtel_button_pane

0xefc3,	// (0x0009c9e3) bg_button_pane_cp034

0x9888,	// (0x000972a8) vidtel_button_pane_g1

0xefcd,	// (0x0009c9ed) vidtel_button_pane_t1

0xd84b,	// (0x0009b26b) aid_size_vtel_slider_touch

0xd904,	// (0x0009b324) scroll_pane_cp039

0xe130,	// (0x0009bb50) ncim_query_button_pane_cp01_ParamLimits

0xe14f,	// (0x0009bb6f) ncimui_query_pane_g1_ParamLimits

0x99fa,	// (0x0009741a) input_focus_pane_cp012_ParamLimits

0xe174,	// (0x0009bb94) ncim_query_entry_pane_t1_ParamLimits

0xd904,	// (0x0009b324) scroll_pane_cp039_ParamLimits

0x31e5,	// (0x00090c05) navi_pane_bcale_mc_g1

0x31ed,	// (0x00090c0d) navi_pane_bcale_mc_t1

0xe6f9,	// (0x0009c119) main_sp_fs_email_pane_g1

0xe705,	// (0x0009c125) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0009d70c) main_sp_fs_email_pane_g

0xe98a,	// (0x0009c3aa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe98a,	// (0x0009c3aa) list_single_cale_mrui_row_pane_g3

0x088d,	// (0x0008e2ad) list_single_recal_day_pane_g5_event_pane

0x8ebe,	// (0x000968de) list_single_recal_day_pane_g7

0xefdb,	// (0x0009c9fb) list_recal_day_event_pane_cp01

0xefe4,	// (0x0009ca04) list_recal_vselct_arw_lo_pane_cp01

0xefec,	// (0x0009ca0c) list_recal_vselct_arw_up_pane_cp01

0xeff4,	// (0x0009ca14) list_recal_vselct_pane_cp01

0xd85b,	// (0x0009b27b) list_recal_day_event_pane_cp01_g1

0xac77,	// (0x00098697) list_recal_day_event_pane_cp01_t1

0x8ec6,	// (0x000968e6) list_single_recal_day_pane_t1_ParamLimits

0x8ed8,	// (0x000968f8) list_single_recal_day_pane_t2_ParamLimits

0xfe49,	// (0x0009d869) list_single_recal_day_pane_t_ParamLimits

0xa076,	// (0x00097a96) bg_notes_pane_ParamLimits

0xa121,	// (0x00097b41) list_notes_pane_ParamLimits

0x0f69,	// (0x0008e989) scroll_pane_cp06_ParamLimits

0xa15d,	// (0x00097b7d) main_notes_pane_ParamLimits

0x99a9,	// (0x000973c9) main_welc_pane

0x9890,	// (0x000972b0) main_welc_body_pane_ParamLimits

0x9890,	// (0x000972b0) main_welc_body_pane

0x98af,	// (0x000972cf) main_welc_opti_pane_ParamLimits

0x98af,	// (0x000972cf) main_welc_opti_pane

0x98f8,	// (0x00097318) main_welc_pane_t1_ParamLimits

0x98f8,	// (0x00097318) main_welc_pane_t1

0x991a,	// (0x0009733a) main_welc_body_row_pane_ParamLimits

0x991a,	// (0x0009733a) main_welc_body_row_pane

0x992e,	// (0x0009734e) main_welc_opti_row_pane_ParamLimits

0x992e,	// (0x0009734e) main_welc_opti_row_pane

0xeffe,	// (0x0009ca1e) main_welc_opti_row_pane_g1

0xf006,	// (0x0009ca26) main_welc_opti_row_pane_t1

0xf015,	// (0x0009ca35) main_welc_body_row_pane_t1

0xecdd,	// (0x0009c6fd) popup_notif_wgt_heading_pane

0xecf7,	// (0x0009c717) aid_size_list_notif_wgt_del_ParamLimits

0xed04,	// (0x0009c724) list_notif_wgt_row_pane_g1_ParamLimits

0xed10,	// (0x0009c730) list_notif_wgt_row_pane_g2_ParamLimits

0xed24,	// (0x0009c744) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb0,	// (0x0009d8d0) list_notif_wgt_row_pane_g_ParamLimits

0xed31,	// (0x0009c751) list_notif_wgt_row_pane_t1_ParamLimits

0xed47,	// (0x0009c767) list_notif_wgt_row_pane_t2_ParamLimits

0xed59,	// (0x0009c779) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb7,	// (0x0009d8d7) list_notif_wgt_row_pane_t_ParamLimits

0x935d,	// (0x00096d7d) listrow_wgtman_pane_g1_ParamLimits

0x936a,	// (0x00096d8a) listrow_wgtman_pane_g2_ParamLimits

0xfee0,	// (0x0009d900) listrow_wgtman_pane_g_ParamLimits

0x08c3,	// (0x0008e2e3) listrow_wgtman_pane_t1_ParamLimits

0x08db,	// (0x0008e2fb) listrow_wgtman_pane_t2_ParamLimits

0xfee5,	// (0x0009d905) listrow_wgtman_pane_t_ParamLimits

0x0901,	// (0x0008e321) wait_bar_pane_cp09_ParamLimits

0x99a9,	// (0x000973c9) bg_popup_heading_pane_cp02

0xf024,	// (0x0009ca44) popup_notif_wgt_heading_pane_g1

0xf02c,	// (0x0009ca4c) popup_notif_wgt_heading_pane_t1

0x99a9,	// (0x000973c9) main_vids_pane

0x99a9,	// (0x000973c9) vids_listscroll_pane

0x993e,	// (0x0009735e) scroll_pane_cp040

0x99a9,	// (0x000973c9) vids_list_pane

0x9949,	// (0x00097369) vids_list_double_pane_ParamLimits

0x9949,	// (0x00097369) vids_list_double_pane

0x995a,	// (0x0009737a) vids_list_double_pane_g1

0x9963,	// (0x00097383) vids_list_double_pane_t1

0x9973,	// (0x00097393) vids_list_double_pane_t2

0x0001,

0xff69,	// (0x0009d989) vids_list_double_pane_t

0x99fa,	// (0x0009741a) main_ncimui_pane_ParamLimits

0x7e82,	// (0x000958a2) main_ncimui_pane_g1_ParamLimits

0x7e8e,	// (0x000958ae) main_ncimui_pane_g2_ParamLimits

0x7e8e,	// (0x000958ae) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x0009d611) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x0009d611) main_ncimui_pane_g

0x98ce,	// (0x000972ee) main_welc_pane_g1_ParamLimits

0x98ce,	// (0x000972ee) main_welc_pane_g1

0x98e3,	// (0x00097303) main_welc_pane_g2_ParamLimits

0x98e3,	// (0x00097303) main_welc_pane_g2

0x0001,

0xff64,	// (0x0009d984) main_welc_pane_g_ParamLimits

0xff64,	// (0x0009d984) main_welc_pane_g

0xa076,	// (0x00097a96) listscroll_mce_pane_ParamLimits

0x32c5,	// (0x00090ce5) wait_bar_pane_cp10

0xc78f,	// (0x0009a1af) main_cale_day_pane_ParamLimits

0xc78f,	// (0x0009a1af) main_cale_week_pane_ParamLimits

0xa076,	// (0x00097a96) main_messa_pane_ParamLimits

0x592c,	// (0x0009334c) main_clock2_btn_pane_ParamLimits

0x592c,	// (0x0009334c) main_clock2_btn_pane

0xcfa4,	// (0x0009a9c4) main_clock2_btn_pane_cp01_ParamLimits

0xcfa4,	// (0x0009a9c4) main_clock2_btn_pane_cp01

0xe95b,	// (0x0009c37b) list_cale_mrui_pane_ParamLimits

0xed9d,	// (0x0009c7bd) main_cf0_pane_g2

0x0001,

0xfebe,	// (0x0009d8de) main_cf0_pane_g

0x9547,	// (0x00096f67) area_left_week_number_pane_ParamLimits

0x9555,	// (0x00096f75) area_top_day_name_pane_ParamLimits

0x9568,	// (0x00096f88) frame_month_view_pane_ParamLimits

0xeec5,	// (0x0009c8e5) grid_month_view_pane_ParamLimits

0xeed3,	// (0x0009c8f3) frm_month_g1_ParamLimits

0x95ef,	// (0x0009700f) frm_month_g2_ParamLimits

0x9602,	// (0x00097022) frm_month_g3_ParamLimits

0x9615,	// (0x00097035) frm_month_g4_ParamLimits

0x9628,	// (0x00097048) frm_month_g5_ParamLimits

0x963b,	// (0x0009705b) frm_month_g6_ParamLimits

0x964e,	// (0x0009706e) frm_month_g7_ParamLimits

0xeee0,	// (0x0009c900) frm_month_g8_ParamLimits

0x9663,	// (0x00097083) frm_month_g9_ParamLimits

0x9673,	// (0x00097093) frm_month_g10_ParamLimits

0x9683,	// (0x000970a3) frm_month_g11_ParamLimits

0x9693,	// (0x000970b3) frm_month_g12_ParamLimits

0x96a5,	// (0x000970c5) frm_month_g13_ParamLimits

0x96b9,	// (0x000970d9) frm_month_g14_ParamLimits

0x96cd,	// (0x000970ed) frm_month_g15_ParamLimits

0x96e1,	// (0x00097101) frm_month_g16_ParamLimits

0xff0f,	// (0x0009d92f) frm_month_g_ParamLimits

0xeeed,	// (0x0009c90d) cell_top_day_name_pane_t1_ParamLimits

0x96f5,	// (0x00097115) cell_area_left_week_number_pane_g1_ParamLimits

0x9701,	// (0x00097121) cell_area_left_week_number_pane_t1_ParamLimits

0xce1c,	// (0x0009a83c) cell_month_view_pane_g1_ParamLimits

0x9714,	// (0x00097134) cell_month_view_pane_t1_ParamLimits

0xa06e,	// (0x00097a8e) main_clock2_btn_pane_g1

0xf03a,	// (0x0009ca5a) main_clock2_btn_pane_t1

0x99fa,	// (0x0009741a) listscroll_cmail_pane_ParamLimits

0xe6f9,	// (0x0009c119) main_sp_fs_email_pane_g1_ParamLimits

0xe705,	// (0x0009c125) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0009d70c) main_sp_fs_email_pane_g_ParamLimits

0xea67,	// (0x0009c487) list_recal_day_pane_ParamLimits

0xea78,	// (0x0009c498) mian_recal_day_pane_t1

0x052f,	// (0x0008df4f) list_single_dyc_row_text_pane_t4_ParamLimits

0x052f,	// (0x0008df4f) list_single_dyc_row_text_pane_t4

0x0578,	// (0x0008df98) list_single_dyc_row_text_pane_t5_ParamLimits

0x0578,	// (0x0008df98) list_single_dyc_row_text_pane_t5

0x8708,	// (0x00096128) list_single_dyc_row_text_pane_t6_ParamLimits

0x8708,	// (0x00096128) list_single_dyc_row_text_pane_t6

0xae38,	// (0x00098858) aid_mgn_list_cale_time_pane

0x99fa,	// (0x0009741a) main_gallery2_pane_ParamLimits

0xcfb8,	// (0x0009a9d8) main_clock2_pane_cp01_t1

0xcfc8,	// (0x0009a9e8) main_clock2_pane_cp01_t3

0x0001,

0xf7cb,	// (0x0009d1eb) main_clock2_pane_cp01_t

0x13da,	// (0x0008edfa) cale_week_scroll_pane_g16_ParamLimits

0x13da,	// (0x0008edfa) cale_week_scroll_pane_g16

0xa389,	// (0x00097da9) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
