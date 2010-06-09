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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0009cece };

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
0x0b6a,	// (0x0009da38) Screen

0x0b76,	// (0x0009da44) application_window

0x0bce,	// (0x0009da9c) area_bottom_pane_ParamLimits

0x0bce,	// (0x0009da9c) area_bottom_pane

0x0c03,	// (0x0009dad1) area_top_pane_ParamLimits

0x0c03,	// (0x0009dad1) area_top_pane

0x9c20,	// (0x000a6aee) call_video_uplink_pane_ParamLimits

0x9c20,	// (0x000a6aee) call_video_uplink_pane

0x0c92,	// (0x0009db60) main_pane_ParamLimits

0x0c92,	// (0x0009db60) main_pane

0xc886,	// (0x000a9754) context_pane

0x45dc,	// (0x000a14aa) navi_pane

0x4600,	// (0x000a14ce) popup_cale_events_window_ParamLimits

0x4600,	// (0x000a14ce) popup_cale_events_window

0xc899,	// (0x000a9767) popup_mup_playback_window

0x4618,	// (0x000a14e6) signal_pane

0xa89a,	// (0x000a7768) main_browser_pane

0xaa50,	// (0x000a791e) main_burst_pane

0x448e,	// (0x000a135c) main_calc_pane

0xc829,	// (0x000a96f7) main_cale_day_pane

0x13c4,	// (0x0009e292) main_cale_month_pane

0xc829,	// (0x000a96f7) main_cale_week_pane

0xaa50,	// (0x000a791e) main_call_pane

0xa051,	// (0x000a6f1f) main_call_poc_pane

0xaa50,	// (0x000a791e) main_camera_pane

0xaa50,	// (0x000a791e) main_chi_dic_pane

0xb2c8,	// (0x000a8196) main_clock_pane

0xa051,	// (0x000a6f1f) main_fmradio_pane

0xaa50,	// (0x000a791e) main_graph_messa_pane

0xa051,	// (0x000a6f1f) main_help_pane

0xa89a,	// (0x000a7768) main_im_pane

0xa7d5,	// (0x000a76a3) main_image_pane_ParamLimits

0xa7d5,	// (0x000a76a3) main_image_pane

0xa051,	// (0x000a6f1f) main_location2_pane

0xaa50,	// (0x000a791e) main_location_pane

0xa7d5,	// (0x000a76a3) main_messa_pane

0xa051,	// (0x000a6f1f) main_mp2_pane

0xaa50,	// (0x000a791e) main_mp_pane

0xa051,	// (0x000a6f1f) main_msg_pane

0xa051,	// (0x000a6f1f) main_mup_eq_pane

0xa051,	// (0x000a6f1f) main_mup_pane

0xa89a,	// (0x000a7768) main_notes_pane

0xa051,	// (0x000a6f1f) main_pec_pane

0xa051,	// (0x000a6f1f) main_phob_pane

0xa051,	// (0x000a6f1f) main_pinb_pane

0xa051,	// (0x000a6f1f) main_postcard_pane

0xa051,	// (0x000a6f1f) main_qdial_pane

0xaa50,	// (0x000a791e) main_skin_pane

0xa051,	// (0x000a6f1f) main_smil2_pane

0xaa50,	// (0x000a791e) main_smil_pane

0xaa50,	// (0x000a791e) main_video_pane

0xaa50,	// (0x000a791e) main_video_tele_pane

0xa7d5,	// (0x000a76a3) main_viewer_pane_ParamLimits

0xa7d5,	// (0x000a76a3) main_viewer_pane

0xaa50,	// (0x000a791e) main_vorec_pane

0x44c6,	// (0x000a1394) popup_blid_sat_info_window_ParamLimits

0x44c6,	// (0x000a1394) popup_blid_sat_info_window

0x44e0,	// (0x000a13ae) popup_dyc_status_message_window_ParamLimits

0x44e0,	// (0x000a13ae) popup_dyc_status_message_window

0x44f0,	// (0x000a13be) popup_grid_large_graphic_window_ParamLimits

0x44f0,	// (0x000a13be) popup_grid_large_graphic_window

0x4568,	// (0x000a1436) popup_loc_request_window_ParamLimits

0x4568,	// (0x000a1436) popup_loc_request_window

0x45b0,	// (0x000a147e) popup_wml_address_window_ParamLimits

0x45b0,	// (0x000a147e) popup_wml_address_window

0x4366,	// (0x000a1234) call_muted_g1

0x4025,	// (0x000a0ef3) popup_call_audio_conf_window_ParamLimits

0x4025,	// (0x000a0ef3) popup_call_audio_conf_window

0x4376,	// (0x000a1244) popup_call_audio_first_window_ParamLimits

0x4376,	// (0x000a1244) popup_call_audio_first_window

0x43b6,	// (0x000a1284) popup_call_audio_in_window_ParamLimits

0x43b6,	// (0x000a1284) popup_call_audio_in_window

0x43da,	// (0x000a12a8) popup_call_audio_out_window_ParamLimits

0x43da,	// (0x000a12a8) popup_call_audio_out_window

0x43fc,	// (0x000a12ca) popup_call_audio_second_window_ParamLimits

0x43fc,	// (0x000a12ca) popup_call_audio_second_window

0x442c,	// (0x000a12fa) popup_call_audio_wait_window_ParamLimits

0x442c,	// (0x000a12fa) popup_call_audio_wait_window

0x444d,	// (0x000a131b) popup_number_entry_window_ParamLimits

0x444d,	// (0x000a131b) popup_number_entry_window

0x9c3e,	// (0x000a6b0c) bg_popup_call_pane_cp05_ParamLimits

0x9c3e,	// (0x000a6b0c) bg_popup_call_pane_cp05

0x9c5e,	// (0x000a6b2c) popup_number_entry_window_t1

0x9c71,	// (0x000a6b3f) popup_number_entry_window_t2

0x9c83,	// (0x000a6b51) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000abf98) popup_number_entry_window_t

0x9c95,	// (0x000a6b63) text_title_cp2

0x9ca8,	// (0x000a6b76) bg_popup_call_pane_cp_ParamLimits

0x9ca8,	// (0x000a6b76) bg_popup_call_pane_cp

0x9cb6,	// (0x000a6b84) call_thumbnail_pane

0x9cbe,	// (0x000a6b8c) popup_call_audio_in_window_g1_ParamLimits

0x9cbe,	// (0x000a6b8c) popup_call_audio_in_window_g1

0x9cca,	// (0x000a6b98) popup_call_audio_in_window_g2_ParamLimits

0x9cca,	// (0x000a6b98) popup_call_audio_in_window_g2

0x9cd6,	// (0x000a6ba4) popup_call_audio_in_window_g3_ParamLimits

0x9cd6,	// (0x000a6ba4) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000abfa1) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000abfa1) popup_call_audio_in_window_g

0x9ce2,	// (0x000a6bb0) popup_call_audio_in_window_t1_ParamLimits

0x9ce2,	// (0x000a6bb0) popup_call_audio_in_window_t1

0x9cfe,	// (0x000a6bcc) popup_call_audio_in_window_t2_ParamLimits

0x9cfe,	// (0x000a6bcc) popup_call_audio_in_window_t2

0x9d1a,	// (0x000a6be8) popup_call_audio_in_window_t3_ParamLimits

0x9d1a,	// (0x000a6be8) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000abfa8) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000abfa8) popup_call_audio_in_window_t

0x9ca8,	// (0x000a6b76) bg_popup_call_pane_cp01_ParamLimits

0x9ca8,	// (0x000a6b76) bg_popup_call_pane_cp01

0x9cb6,	// (0x000a6b84) call_thumbnail_pane_cp02

0x9d2d,	// (0x000a6bfb) call_type_pane_cp022

0x9d35,	// (0x000a6c03) popup_call_audio_out_window_g1_ParamLimits

0x9d35,	// (0x000a6c03) popup_call_audio_out_window_g1

0x9d47,	// (0x000a6c15) popup_call_audio_out_window_g2_ParamLimits

0x9d47,	// (0x000a6c15) popup_call_audio_out_window_g2

0x9d53,	// (0x000a6c21) popup_call_audio_out_window_g3_ParamLimits

0x9d53,	// (0x000a6c21) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000abfaf) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000abfaf) popup_call_audio_out_window_g

0x9d65,	// (0x000a6c33) popup_call_audio_out_window_t1_ParamLimits

0x9d65,	// (0x000a6c33) popup_call_audio_out_window_t1

0x9d7d,	// (0x000a6c4b) popup_call_audio_out_window_t2_ParamLimits

0x9d7d,	// (0x000a6c4b) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000abfb6) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000abfb6) popup_call_audio_out_window_t

0x9d92,	// (0x000a6c60) bg_popup_call_pane_ParamLimits

0x9d92,	// (0x000a6c60) bg_popup_call_pane

0x0e96,	// (0x0009dd64) call_thumbnail_pane_cp_ParamLimits

0x0e96,	// (0x0009dd64) call_thumbnail_pane_cp

0x9e16,	// (0x000a6ce4) call_type_pane_cp01_ParamLimits

0x9e16,	// (0x000a6ce4) call_type_pane_cp01

0x9e5a,	// (0x000a6d28) popup_call_audio_first_window_g1_ParamLimits

0x9e5a,	// (0x000a6d28) popup_call_audio_first_window_g1

0x9ea6,	// (0x000a6d74) popup_call_audio_first_window_g2_ParamLimits

0x9ea6,	// (0x000a6d74) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000abfbb) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000abfbb) popup_call_audio_first_window_g

0x9eea,	// (0x000a6db8) popup_call_audio_first_window_t1_ParamLimits

0x9eea,	// (0x000a6db8) popup_call_audio_first_window_t1

0x9f96,	// (0x000a6e64) popup_call_audio_first_window_t4_ParamLimits

0x9f96,	// (0x000a6e64) popup_call_audio_first_window_t4

0xa022,	// (0x000a6ef0) popup_call_audio_first_window_t5_ParamLimits

0xa022,	// (0x000a6ef0) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000abfc0) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000abfc0) popup_call_audio_first_window_t

0xa051,	// (0x000a6f1f) bg_popup_call_pane_cp02

0xa05b,	// (0x000a6f29) call_type_pane_cp023

0xa063,	// (0x000a6f31) popup_call_audio_wait_window_g1

0xa06b,	// (0x000a6f39) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000abfc7) popup_call_audio_wait_window_g

0xa073,	// (0x000a6f41) popup_call_audio_wait_window_t3

0xa081,	// (0x000a6f4f) bg_popup_call_pane_cp03_ParamLimits

0xa081,	// (0x000a6f4f) bg_popup_call_pane_cp03

0xa0e1,	// (0x000a6faf) call_thumbnail_pane_cp011_ParamLimits

0xa0e1,	// (0x000a6faf) call_thumbnail_pane_cp011

0xa0ed,	// (0x000a6fbb) call_type_pane_cp034_ParamLimits

0xa0ed,	// (0x000a6fbb) call_type_pane_cp034

0xa129,	// (0x000a6ff7) popup_call_audio_second_window_g1_ParamLimits

0xa129,	// (0x000a6ff7) popup_call_audio_second_window_g1

0xa165,	// (0x000a7033) popup_call_audio_second_window_g2_ParamLimits

0xa165,	// (0x000a7033) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000abfcc) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000abfcc) popup_call_audio_second_window_g

0xa1a1,	// (0x000a706f) popup_call_audio_second_window_t1_ParamLimits

0xa1a1,	// (0x000a706f) popup_call_audio_second_window_t1

0xa74b,	// (0x000a7619) popup_call_audio_second_window_t2_ParamLimits

0xa74b,	// (0x000a7619) popup_call_audio_second_window_t2

0xa781,	// (0x000a764f) popup_call_audio_second_window_t3_ParamLimits

0xa781,	// (0x000a764f) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000abfd1) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000abfd1) popup_call_audio_second_window_t

0xa051,	// (0x000a6f1f) bg_popup_call_pane_cp04

0xa7b7,	// (0x000a7685) list_conf_pane

0xa7bf,	// (0x000a768d) popup_call_audio_conf_window_t1

0xa7cd,	// (0x000a769b) call_thumbnail_pane_g1

0xa7d5,	// (0x000a76a3) bg_pinb_pane_ParamLimits

0xa7d5,	// (0x000a76a3) bg_pinb_pane

0xa7e3,	// (0x000a76b1) find_pinb_pane

0xa7ec,	// (0x000a76ba) listscroll_pinb_pane_ParamLimits

0xa7ec,	// (0x000a76ba) listscroll_pinb_pane

0xa7fb,	// (0x000a76c9) pinb_bg_pane_g1

0x0eba,	// (0x0009dd88) pinb_bg_pane_g2

0x0ec6,	// (0x0009dd94) pinb_bg_pane_g3

0x0ed2,	// (0x0009dda0) pinb_bg_pane_g4

0x0ede,	// (0x0009ddac) pinb_bg_pane_g5

0x0eea,	// (0x0009ddb8) pinb_bg_pane_g6

0x0ef5,	// (0x0009ddc3) pinb_bg_pane_g7

0x0f00,	// (0x0009ddce) pinb_bg_pane_g8

0x0f0b,	// (0x0009ddd9) pinb_bg_pane_g9

0x0f15,	// (0x0009dde3) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000abfd8) pinb_bg_pane_g

0x0f32,	// (0x0009de00) grid_pinb_pane

0x0f3d,	// (0x0009de0b) list_pinb_pane

0x0f48,	// (0x0009de16) scroll_pane_cp01_ParamLimits

0x0f48,	// (0x0009de16) scroll_pane_cp01

0xa805,	// (0x000a76d3) find_pinb_pane_g1_ParamLimits

0xa805,	// (0x000a76d3) find_pinb_pane_g1

0xa81d,	// (0x000a76eb) find_pinb_pane_t1

0xa82f,	// (0x000a76fd) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000abff2) find_pinb_pane_t

0xa844,	// (0x000a7712) input_focus_pane_cp01_ParamLimits

0xa844,	// (0x000a7712) input_focus_pane_cp01

0x0f5a,	// (0x0009de28) cell_pinb_pane_ParamLimits

0x0f5a,	// (0x0009de28) cell_pinb_pane

0x0f7f,	// (0x0009de4d) cell_pinb_pane_g1_ParamLimits

0x0f7f,	// (0x0009de4d) cell_pinb_pane_g1

0x0f94,	// (0x0009de62) cell_pinb_pane_g2_ParamLimits

0x0f94,	// (0x0009de62) cell_pinb_pane_g2

0xa850,	// (0x000a771e) cell_pinb_pane_g3_ParamLimits

0xa850,	// (0x000a771e) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000abff7) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000abff7) cell_pinb_pane_g

0xa051,	// (0x000a6f1f) grid_highlight_pane_cp01

0x0fa0,	// (0x0009de6e) list_pinb_item_pane_ParamLimits

0x0fa0,	// (0x0009de6e) list_pinb_item_pane

0xa051,	// (0x000a6f1f) list_highlight_pane_cp02

0x0fbe,	// (0x0009de8c) list_pinb_item_pane_g1_ParamLimits

0x0fbe,	// (0x0009de8c) list_pinb_item_pane_g1

0x0fcb,	// (0x0009de99) list_pinb_item_pane_g2_ParamLimits

0x0fcb,	// (0x0009de99) list_pinb_item_pane_g2

0x0fd7,	// (0x0009dea5) list_pinb_item_pane_g3_ParamLimits

0x0fd7,	// (0x0009dea5) list_pinb_item_pane_g3

0x0fe8,	// (0x0009deb6) list_pinb_item_pane_g4_ParamLimits

0x0fe8,	// (0x0009deb6) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000abffe) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000abffe) list_pinb_item_pane_g

0x0ff4,	// (0x0009dec2) list_pinb_item_pane_t1_ParamLimits

0x0ff4,	// (0x0009dec2) list_pinb_item_pane_t1

0x1025,	// (0x0009def3) calc_display_pane

0x1043,	// (0x0009df11) calc_paper_pane

0x105f,	// (0x0009df2d) grid_calc_pane

0xa051,	// (0x000a6f1f) bg_list_pane_cp01

0x108b,	// (0x0009df59) clock_g1

0x1093,	// (0x0009df61) clock_g2

0x0001,

0xf139,	// (0x000ac007) clock_g

0x109d,	// (0x0009df6b) clock_t1_ParamLimits

0x109d,	// (0x0009df6b) clock_t1

0x10b2,	// (0x0009df80) clock_t2_ParamLimits

0x10b2,	// (0x0009df80) clock_t2

0x10c4,	// (0x0009df92) clock_t3_ParamLimits

0x10c4,	// (0x0009df92) clock_t3

0x10d6,	// (0x0009dfa4) clock_t4_ParamLimits

0x10d6,	// (0x0009dfa4) clock_t4

0x10e8,	// (0x0009dfb6) clock_t5_ParamLimits

0x10e8,	// (0x0009dfb6) clock_t5

0x10fd,	// (0x0009dfcb) clock_t6_ParamLimits

0x10fd,	// (0x0009dfcb) clock_t6

0x110f,	// (0x0009dfdd) clock_t7_ParamLimits

0x110f,	// (0x0009dfdd) clock_t7

0x1121,	// (0x0009dfef) clock_t8_ParamLimits

0x1121,	// (0x0009dfef) clock_t8

0x1137,	// (0x0009e005) clock_t9_ParamLimits

0x1137,	// (0x0009e005) clock_t9

0x0008,

0xf13e,	// (0x000ac00c) clock_t_ParamLimits

0xf13e,	// (0x000ac00c) clock_t

0xa85c,	// (0x000a772a) popup_clock_analogue_window_cp02

0xa85c,	// (0x000a772a) popup_clock_digital_window_cp01

0xa864,	// (0x000a7732) listscroll_help_pane

0xa051,	// (0x000a6f1f) phob_pre_status_pane

0xa86e,	// (0x000a773c) grid_qdial_pane

0xa7d5,	// (0x000a76a3) listscroll_mce_pane

0xa7d5,	// (0x000a76a3) bg_notes_pane

0xa878,	// (0x000a7746) list_notes_pane

0x114d,	// (0x0009e01b) scroll_pane_cp06

0xa886,	// (0x000a7754) bg_calc_paper_pane

0x1166,	// (0x0009e034) list_calc_pane

0xa89a,	// (0x000a7768) bg_calc_display_pane

0x1180,	// (0x0009e04e) calc_display_pane_t1

0x1195,	// (0x0009e063) calc_display_pane_t2

0x11aa,	// (0x0009e078) calc_display_pane_t3

0x0002,

0xf151,	// (0x000ac01f) calc_display_pane_t

0x11bc,	// (0x0009e08a) cell_calc_pane_ParamLimits

0x11bc,	// (0x0009e08a) cell_calc_pane

0xa8a6,	// (0x000a7774) bg_calc_paper_pane_g1

0xa8b2,	// (0x000a7780) bg_calc_paper_pane_g2

0xa8be,	// (0x000a778c) bg_calc_paper_pane_g3

0xa8ca,	// (0x000a7798) bg_calc_paper_pane_g4

0xa8d6,	// (0x000a77a4) bg_calc_paper_pane_g5

0x11eb,	// (0x0009e0b9) bg_calc_paper_pane_g6

0x11fc,	// (0x0009e0ca) bg_calc_paper_pane_g7

0x120d,	// (0x0009e0db) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000ac026) bg_calc_paper_pane_g

0x1220,	// (0x0009e0ee) calc_bg_paper_pane_g9

0x1233,	// (0x0009e101) list_calc_item_pane_ParamLimits

0x1233,	// (0x0009e101) list_calc_item_pane

0xa8e2,	// (0x000a77b0) list_calc_item_pane_g1

0x1254,	// (0x0009e122) list_calc_item_pane_t1_ParamLimits

0x1254,	// (0x0009e122) list_calc_item_pane_t1

0x1266,	// (0x0009e134) list_calc_item_pane_t2_ParamLimits

0x1266,	// (0x0009e134) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000ac037) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000ac037) list_calc_item_pane_t

0xa8ef,	// (0x000a77bd) cell_calc_pane_g1

0xa8f9,	// (0x000a77c7) grid_highlight_pane_cp02

0xa91b,	// (0x000a77e9) bg_calc_display_pane_g1

0x1296,	// (0x0009e164) bg_calc_display_pane_g2

0xa924,	// (0x000a77f2) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000ac041) bg_calc_display_pane_g

0x12a0,	// (0x0009e16e) cell_qdial_pane_ParamLimits

0x12a0,	// (0x0009e16e) cell_qdial_pane

0x12b6,	// (0x0009e184) cell_qdial_pane_g1_ParamLimits

0x12b6,	// (0x0009e184) cell_qdial_pane_g1

0x12c3,	// (0x0009e191) cell_qdial_pane_g2_ParamLimits

0x12c3,	// (0x0009e191) cell_qdial_pane_g2

0xa92d,	// (0x000a77fb) cell_qdial_pane_g3_ParamLimits

0xa92d,	// (0x000a77fb) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000ac048) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000ac048) cell_qdial_pane_g

0x12e1,	// (0x0009e1af) cell_qdial_pane_t1_ParamLimits

0x12e1,	// (0x0009e1af) cell_qdial_pane_t1

0x12f9,	// (0x0009e1c7) cell_qdial_pane_t2_ParamLimits

0x12f9,	// (0x0009e1c7) cell_qdial_pane_t2

0x130c,	// (0x0009e1da) cell_qdial_pane_t3_ParamLimits

0x130c,	// (0x0009e1da) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000ac051) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000ac051) cell_qdial_pane_t

0xa051,	// (0x000a6f1f) grid_highlight_pane_cp04

0xa939,	// (0x000a7807) thumbnail_qdial_pane_ParamLimits

0xa939,	// (0x000a7807) thumbnail_qdial_pane

0xa995,	// (0x000a7863) list_help_pane

0xa99e,	// (0x000a786c) scroll_pane_cp02

0x131f,	// (0x0009e1ed) help_list_pane_t1_ParamLimits

0x131f,	// (0x0009e1ed) help_list_pane_t1

0x1346,	// (0x0009e214) bg_notes_pane_g2

0x134e,	// (0x0009e21c) bg_notes_pane_g3

0x1356,	// (0x0009e224) notes_bg_pane_g1

0x135e,	// (0x0009e22c) notes_bg_pane_g4

0x1366,	// (0x0009e234) notes_bg_pane_g5

0x136e,	// (0x0009e23c) notes_bg_pane_g6

0x1376,	// (0x0009e244) notes_bg_pane_g7

0x137e,	// (0x0009e24c) notes_bg_pane_g8

0x1386,	// (0x0009e254) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000ac06f) notes_bg_pane_g

0x138e,	// (0x0009e25c) list_notes_text_pane_ParamLimits

0x138e,	// (0x0009e25c) list_notes_text_pane

0xa9a7,	// (0x000a7875) list_notes_text_pane_g1

0x13b6,	// (0x0009e284) list_notes_text_pane_t1

0x13c4,	// (0x0009e292) listscroll_cale_week_pane

0x13fa,	// (0x0009e2c8) bg_cale_heading_pane

0x1423,	// (0x0009e2f1) bg_cale_pane_cp01

0x1445,	// (0x0009e313) cale_week_corner_pane

0x1464,	// (0x0009e332) cale_week_day_heading_pane

0x1492,	// (0x0009e360) cale_week_scroll_pane_g1

0x14b6,	// (0x0009e384) cale_week_scroll_pane_g2

0x14ce,	// (0x0009e39c) cale_week_scroll_pane_g3

0x14e6,	// (0x0009e3b4) cale_week_scroll_pane_g4

0x14fe,	// (0x0009e3cc) cale_week_scroll_pane_g5

0x1516,	// (0x0009e3e4) cale_week_scroll_pane_g6

0x1536,	// (0x0009e404) cale_week_scroll_pane_g7

0x1556,	// (0x0009e424) cale_week_scroll_pane_g8

0x1576,	// (0x0009e444) cale_week_scroll_pane_g9

0x1593,	// (0x0009e461) cale_week_scroll_pane_g10

0x15b0,	// (0x0009e47e) cale_week_scroll_pane_g11

0x15cd,	// (0x0009e49b) cale_week_scroll_pane_g12

0x15ea,	// (0x0009e4b8) cale_week_scroll_pane_g13

0x160f,	// (0x0009e4dd) cale_week_scroll_pane_g14

0x1638,	// (0x0009e506) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000ac07e) cale_week_scroll_pane_g

0x1681,	// (0x0009e54f) cale_week_time_pane

0x16a1,	// (0x0009e56f) grid_cale_week_pane

0xa9d3,	// (0x000a78a1) scroll_pane_cp08

0x16d4,	// (0x0009e5a2) cell_cale_week_pane_ParamLimits

0x16d4,	// (0x0009e5a2) cell_cale_week_pane

0x1764,	// (0x0009e632) cale_week_day_heading_pane_t1

0x17ac,	// (0x0009e67a) cale_week_day_heading_pane_t2

0x17f9,	// (0x0009e6c7) cale_week_day_heading_pane_t3

0x1846,	// (0x0009e714) cale_week_day_heading_pane_t4

0x1893,	// (0x0009e761) cale_week_day_heading_pane_t5

0x18e0,	// (0x0009e7ae) cale_week_day_heading_pane_t6

0x192d,	// (0x0009e7fb) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000ac09f) cale_week_day_heading_pane_t

0xa9f5,	// (0x000a78c3) bg_cale_side_pane

0x1975,	// (0x0009e843) cale_week_time_pane_t1

0x19b9,	// (0x0009e887) cale_week_time_pane_t2

0x19fd,	// (0x0009e8cb) cale_week_time_pane_t3

0x1a41,	// (0x0009e90f) cale_week_time_pane_t4

0x1a85,	// (0x0009e953) cale_week_time_pane_t5

0x1ac9,	// (0x0009e997) cale_week_time_pane_t6

0x1b0d,	// (0x0009e9db) cale_week_time_pane_t7

0x1b59,	// (0x0009ea27) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000ac0ae) cale_week_time_pane_t

0x1ba7,	// (0x0009ea75) cell_cale_week_pane_g2

0x1bcb,	// (0x0009ea99) cell_cale_week_pane_g3_ParamLimits

0x1bcb,	// (0x0009ea99) cell_cale_week_pane_g3

0xaa03,	// (0x000a78d1) grid_highlight_pane_cp07

0xaa0b,	// (0x000a78d9) listscroll_gms_pane

0xaa15,	// (0x000a78e3) grid_gms_pane

0xaa1e,	// (0x000a78ec) listscroll_gms_pane_g1

0xaa26,	// (0x000a78f4) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000ac0bf) listscroll_gms_pane_g

0x1be3,	// (0x0009eab1) scroll_pane_cp010

0x1bee,	// (0x0009eabc) cell_gms_pane_ParamLimits

0x1bee,	// (0x0009eabc) cell_gms_pane

0x1c01,	// (0x0009eacf) cell_gms_pane_g1

0xaa2e,	// (0x000a78fc) cell_gms_pane_g2

0xaa36,	// (0x000a7904) cell_gms_pane_g3

0xaa3f,	// (0x000a790d) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000ac0c4) cell_gms_pane_g

0xaa48,	// (0x000a7916) grid_highlight_pane_cp09

0x430e,	// (0x000a11dc) phob_pre_status_pane_g1

0x4316,	// (0x000a11e4) phob_pre_status_pane_g2

0x431e,	// (0x000a11ec) phob_pre_status_pane_g3

0x4326,	// (0x000a11f4) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000ac4af) phob_pre_status_pane_g

0x4336,	// (0x000a1204) phob_pre_status_pane_t1

0x4346,	// (0x000a1214) phob_pre_status_pane_t2

0x4356,	// (0x000a1224) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000ac4ba) phob_pre_status_pane_t

0xaa50,	// (0x000a791e) bg_list_pane_cp05

0x1c11,	// (0x0009eadf) grid_vorec_pane

0x1c1d,	// (0x0009eaeb) vorec_t1

0x1c2b,	// (0x0009eaf9) vorec_t2

0x1c39,	// (0x0009eb07) vorec_t3

0x1c47,	// (0x0009eb15) vorec_t4

0x9bc7,	// (0x000a6a95) vorec_t5

0x9bd5,	// (0x000a6aa3) vorec_t6

0x0004,

0xf1ff,	// (0x000ac0cd) vorec_t

0x9be3,	// (0x000a6ab1) wait_bar_pane_cp01

0x1c63,	// (0x0009eb31) cell_vorec_pane_ParamLimits

0x1c63,	// (0x0009eb31) cell_vorec_pane

0x1c78,	// (0x0009eb46) cell_vorec_pane_g1

0xa051,	// (0x000a6f1f) grid_highlight_pane_cp05

0x1c90,	// (0x0009eb5e) cams_zoom_pane

0x1c9c,	// (0x0009eb6a) image_vga_pane

0x1cab,	// (0x0009eb79) main_camera_pane_g1

0x1cb9,	// (0x0009eb87) main_camera_pane_g2

0x1cc5,	// (0x0009eb93) main_camera_pane_g3

0x1cd3,	// (0x0009eba1) main_camera_pane_g4

0x1ce1,	// (0x0009ebaf) main_camera_pane_g5

0x1cef,	// (0x0009ebbd) main_camera_pane_g6

0x1cfd,	// (0x0009ebcb) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000ac0d8) main_camera_pane_g

0x1d0b,	// (0x0009ebd9) main_camera_pane_t1

0x1d1d,	// (0x0009ebeb) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000ac0e9) main_camera_pane_t

0x1d40,	// (0x0009ec0e) cams_zoom_pane_cp_ParamLimits

0x1d40,	// (0x0009ec0e) cams_zoom_pane_cp

0x1d64,	// (0x0009ec32) image_cif_pane_ParamLimits

0x1d64,	// (0x0009ec32) image_cif_pane

0x1d82,	// (0x0009ec50) image_subqcif_pane

0x1d8c,	// (0x0009ec5a) main_video_pane_g1_ParamLimits

0x1d8c,	// (0x0009ec5a) main_video_pane_g1

0x1dac,	// (0x0009ec7a) main_video_pane_g2_ParamLimits

0x1dac,	// (0x0009ec7a) main_video_pane_g2

0x1ddc,	// (0x0009ecaa) main_video_pane_g3_ParamLimits

0x1ddc,	// (0x0009ecaa) main_video_pane_g3

0x1e05,	// (0x0009ecd3) main_video_pane_g4_ParamLimits

0x1e05,	// (0x0009ecd3) main_video_pane_g4

0x1e2e,	// (0x0009ecfc) main_video_pane_g5_ParamLimits

0x1e2e,	// (0x0009ecfc) main_video_pane_g5

0xaa64,	// (0x000a7932) main_video_pane_g6_ParamLimits

0xaa64,	// (0x000a7932) main_video_pane_g6

0x0006,

0xf220,	// (0x000ac0ee) main_video_pane_g_ParamLimits

0xf220,	// (0x000ac0ee) main_video_pane_g

0x1e50,	// (0x0009ed1e) main_video_pane_t1_ParamLimits

0x1e50,	// (0x0009ed1e) main_video_pane_t1

0xaa7e,	// (0x000a794c) cams_zoom_pane_g1

0xaa87,	// (0x000a7955) cams_zoom_pane_g2

0xaa90,	// (0x000a795e) cams_zoom_pane_g3

0xaa99,	// (0x000a7967) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000ac0fd) cams_zoom_pane_g

0x1e9a,	// (0x0009ed68) grid_cams_pane

0x1ea8,	// (0x0009ed76) linegrid_cams_pane

0x1eb4,	// (0x0009ed82) cell_cams_pane_ParamLimits

0x1eb4,	// (0x0009ed82) cell_cams_pane

0xaaa2,	// (0x000a7970) cams_burst_image_pane

0xaaaa,	// (0x000a7978) cell_cams_pane_g1

0xa051,	// (0x000a6f1f) grid_highlight_pane_cp03

0xa8ef,	// (0x000a77bd) mp_bg_pane_g1

0xa051,	// (0x000a6f1f) bg_list_pane_cp03

0xc74c,	// (0x000a961a) bg_mp_pane

0xc754,	// (0x000a9622) grid_mp_pane

0xc75c,	// (0x000a962a) media_player_g1

0xc766,	// (0x000a9634) media_player_t1

0xc774,	// (0x000a9642) media_player_t2

0xc782,	// (0x000a9650) media_player_t3

0xc790,	// (0x000a965e) media_player_t4

0xc79e,	// (0x000a966c) media_player_t5

0xc7ac,	// (0x000a967a) media_player_t6

0xc7ba,	// (0x000a9688) media_player_t7

0x0006,

0xf5cb,	// (0x000ac499) media_player_t

0xc7c8,	// (0x000a9696) wait_bar_pane_cp02

0xf5b0,	// (0x000ac47e) main_usb_pane_t

0x4305,	// (0x000a11d3) cell_mp_pane

0xa8ef,	// (0x000a77bd) cell_mp_pane_g1

0xa051,	// (0x000a6f1f) grid_highlight_pane_cp06

0xaab2,	// (0x000a7980) grid_skin_colour_pane

0xaaba,	// (0x000a7988) list_highlight_pane_cp03

0x1fd9,	// (0x0009eea7) skin_g1

0xaac2,	// (0x000a7990) skin_t1

0xaad1,	// (0x000a799f) skin_t2

0x0001,

0xf264,	// (0x000ac132) skin_t

0x1fe3,	// (0x0009eeb1) cell_skin_colour_pane_ParamLimits

0x1fe3,	// (0x0009eeb1) cell_skin_colour_pane

0xaadf,	// (0x000a79ad) cell_skin_colour_pane_g1

0x2063,	// (0x0009ef31) call_video_g1_ParamLimits

0x2063,	// (0x0009ef31) call_video_g1

0x2073,	// (0x0009ef41) call_video_g2_ParamLimits

0x2073,	// (0x0009ef41) call_video_g2

0x0001,

0xf269,	// (0x000ac137) call_video_g_ParamLimits

0xf269,	// (0x000ac137) call_video_g

0x20c3,	// (0x0009ef91) call_video_uplink_pane_cp1_ParamLimits

0x20c3,	// (0x0009ef91) call_video_uplink_pane_cp1

0xaaf1,	// (0x000a79bf) call_video_uplink_pane_cp2

0x2191,	// (0x0009f05f) video_down_crop_pane_ParamLimits

0x2191,	// (0x0009f05f) video_down_crop_pane

0x2283,	// (0x0009f151) video_down_pane_ParamLimits

0x2283,	// (0x0009f151) video_down_pane

0xaaf9,	// (0x000a79c7) video_down_subqcif_pane_ParamLimits

0xaaf9,	// (0x000a79c7) video_down_subqcif_pane

0xab13,	// (0x000a79e1) video_down_subqcif_pane_cp_ParamLimits

0xab13,	// (0x000a79e1) video_down_subqcif_pane_cp

0xab3b,	// (0x000a7a09) im_reading_pane_ParamLimits

0xab3b,	// (0x000a7a09) im_reading_pane

0x23a0,	// (0x0009f26e) im_writing_pane_ParamLimits

0x23a0,	// (0x0009f26e) im_writing_pane

0x23be,	// (0x0009f28c) im_reading_pane_t1

0xab55,	// (0x000a7a23) list_im_pane

0xab66,	// (0x000a7a34) scroll_pane_cp07

0x2400,	// (0x0009f2ce) im_writing_pane_t1_ParamLimits

0x2400,	// (0x0009f2ce) im_writing_pane_t1

0xab7f,	// (0x000a7a4d) im_writing_pane_t2_ParamLimits

0xab7f,	// (0x000a7a4d) im_writing_pane_t2

0x0001,

0xf273,	// (0x000ac141) im_writing_pane_t_ParamLimits

0xf273,	// (0x000ac141) im_writing_pane_t

0xa051,	// (0x000a6f1f) input_focus_pane_cp04

0xa051,	// (0x000a6f1f) input_focus_pane_cp05

0x2412,	// (0x0009f2e0) list_im_single_pane_ParamLimits

0x2412,	// (0x0009f2e0) list_im_single_pane

0x242b,	// (0x0009f2f9) list_single_im_pane_t1

0x42c9,	// (0x000a1197) blid_accuracy_pane

0x42d1,	// (0x000a119f) blid_compass_pane

0x42db,	// (0x000a11a9) main_location_t1

0x42e9,	// (0x000a11b7) main_location_t2

0x42f7,	// (0x000a11c5) main_location_t3

0x0002,

0xf5da,	// (0x000ac4a8) main_location_t

0xa051,	// (0x000a6f1f) aid_levels_location

0xa8ef,	// (0x000a77bd) blid_accuracy_pane_g1

0xa8ef,	// (0x000a77bd) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000ac1a3) blid_accuracy_pane_g

0xabc7,	// (0x000a7a95) wml_content_pane

0xac05,	// (0x000a7ad3) wml_button_pane_ParamLimits

0xac05,	// (0x000a7ad3) wml_button_pane

0x243a,	// (0x0009f308) wml_list_single_large_pane_ParamLimits

0x243a,	// (0x0009f308) wml_list_single_large_pane

0x245c,	// (0x0009f32a) wml_list_single_medium_pane_ParamLimits

0x245c,	// (0x0009f32a) wml_list_single_medium_pane

0x247f,	// (0x0009f34d) wml_list_single_small_pane_ParamLimits

0x247f,	// (0x0009f34d) wml_list_single_small_pane

0xac19,	// (0x000a7ae7) wml_selection_box_pane_ParamLimits

0xac19,	// (0x000a7ae7) wml_selection_box_pane

0xac2c,	// (0x000a7afa) wml_list_single_pane_t1

0xac3b,	// (0x000a7b09) wml_list_single_medium_pane_t1

0xac4a,	// (0x000a7b18) wml_list_single_large_pane_t1

0xac59,	// (0x000a7b27) input_focus_pane_cp02_ParamLimits

0xac59,	// (0x000a7b27) input_focus_pane_cp02

0xac6c,	// (0x000a7b3a) wml_selection_box_pane_g1

0xac75,	// (0x000a7b43) wml_selection_box_pane_t1_ParamLimits

0xac75,	// (0x000a7b43) wml_selection_box_pane_t1

0xa7d5,	// (0x000a76a3) bg_wml_button_pane_ParamLimits

0xa7d5,	// (0x000a76a3) bg_wml_button_pane

0xac99,	// (0x000a7b67) wml_button_pane_g1

0xaca1,	// (0x000a7b6f) wml_button_pane_t1

0xac99,	// (0x000a7b67) wml_button_bg_pane_g1

0xacb1,	// (0x000a7b7f) wml_button_bg_pane_g2

0xacb9,	// (0x000a7b87) wml_button_bg_pane_g3

0xacc1,	// (0x000a7b8f) wml_button_bg_pane_g4

0xacc9,	// (0x000a7b97) wml_button_bg_pane_g5

0xacd1,	// (0x000a7b9f) wml_button_bg_pane_g6

0xacd9,	// (0x000a7ba7) wml_button_bg_pane_g7

0xace1,	// (0x000a7baf) wml_button_bg_pane_g8

0xace9,	// (0x000a7bb7) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000ac146) wml_button_bg_pane_g

0x24a7,	// (0x0009f375) bg_list_pane_cp02

0xacf1,	// (0x000a7bbf) mce_header_pane_ParamLimits

0xacf1,	// (0x000a7bbf) mce_header_pane

0xad07,	// (0x000a7bd5) mce_icon_pane

0xad07,	// (0x000a7bd5) mce_image_pane

0xad10,	// (0x000a7bde) mce_text_pane_ParamLimits

0xad10,	// (0x000a7bde) mce_text_pane

0x24b1,	// (0x0009f37f) scroll_pane_cp03

0xabfd,	// (0x000a7acb) scroll_pane_cp04

0xad23,	// (0x000a7bf1) scroll_pane_cp05_ParamLimits

0xad23,	// (0x000a7bf1) scroll_pane_cp05

0x24bb,	// (0x0009f389) mce_header_field_pane_ParamLimits

0x24bb,	// (0x0009f389) mce_header_field_pane

0x24dd,	// (0x0009f3ab) mce_header_field_pane_2_ParamLimits

0x24dd,	// (0x0009f3ab) mce_header_field_pane_2

0x24f3,	// (0x0009f3c1) mce_header_field_pane_3

0x24fb,	// (0x0009f3c9) list_single_mce_message_pane_ParamLimits

0x24fb,	// (0x0009f3c9) list_single_mce_message_pane

0x251a,	// (0x0009f3e8) list_single_mce_smart_pane_ParamLimits

0x251a,	// (0x0009f3e8) list_single_mce_smart_pane

0xad2f,	// (0x000a7bfd) input_focus_pane_cp03

0xad38,	// (0x000a7c06) list_header_data_pane

0x2544,	// (0x0009f412) mce_header_field_pane_t1

0x2554,	// (0x0009f422) list_single_mce_header_pane_ParamLimits

0x2554,	// (0x0009f422) list_single_mce_header_pane

0xad40,	// (0x000a7c0e) list_single_mce_header_pane_t1

0xad4f,	// (0x000a7c1d) list_single_mce_message_pane_g1

0xad57,	// (0x000a7c25) list_single_mce_message_pane_t1

0x2598,	// (0x0009f466) bg_cale_heading_pane_cp01_ParamLimits

0x2598,	// (0x0009f466) bg_cale_heading_pane_cp01

0xad65,	// (0x000a7c33) bg_cale_pane_cp02_ParamLimits

0xad65,	// (0x000a7c33) bg_cale_pane_cp02

0x25df,	// (0x0009f4ad) cale_month_corner_pane

0x25fe,	// (0x0009f4cc) cale_month_day_heading_pane_ParamLimits

0x25fe,	// (0x0009f4cc) cale_month_day_heading_pane

0x2655,	// (0x0009f523) cale_month_pane_g1_ParamLimits

0x2655,	// (0x0009f523) cale_month_pane_g1

0x2691,	// (0x0009f55f) cale_month_pane_g2_ParamLimits

0x2691,	// (0x0009f55f) cale_month_pane_g2

0x26c9,	// (0x0009f597) cale_month_pane_g3_ParamLimits

0x26c9,	// (0x0009f597) cale_month_pane_g3

0x271d,	// (0x0009f5eb) cale_month_pane_g4_ParamLimits

0x271d,	// (0x0009f5eb) cale_month_pane_g4

0x2771,	// (0x0009f63f) cale_month_pane_g5_ParamLimits

0x2771,	// (0x0009f63f) cale_month_pane_g5

0x27c5,	// (0x0009f693) cale_month_pane_g6_ParamLimits

0x27c5,	// (0x0009f693) cale_month_pane_g6

0x2829,	// (0x0009f6f7) cale_month_pane_g7_ParamLimits

0x2829,	// (0x0009f6f7) cale_month_pane_g7

0x288d,	// (0x0009f75b) cale_month_pane_g8_ParamLimits

0x288d,	// (0x0009f75b) cale_month_pane_g8

0x28f1,	// (0x0009f7bf) cale_month_pane_g9_ParamLimits

0x28f1,	// (0x0009f7bf) cale_month_pane_g9

0x2949,	// (0x0009f817) cale_month_pane_g10_ParamLimits

0x2949,	// (0x0009f817) cale_month_pane_g10

0x2997,	// (0x0009f865) cale_month_pane_g11_ParamLimits

0x2997,	// (0x0009f865) cale_month_pane_g11

0x29e3,	// (0x0009f8b1) cale_month_pane_g12_ParamLimits

0x29e3,	// (0x0009f8b1) cale_month_pane_g12

0x2a33,	// (0x0009f901) cale_month_pane_g13_ParamLimits

0x2a33,	// (0x0009f901) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000ac159) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000ac159) cale_month_pane_g

0x2a83,	// (0x0009f951) cale_month_week_pane

0x2aa3,	// (0x0009f971) grid_cale_month_pane_ParamLimits

0x2aa3,	// (0x0009f971) grid_cale_month_pane

0x2af1,	// (0x0009f9bf) cale_month_day_heading_pane_t1

0x2b73,	// (0x0009fa41) cale_month_day_heading_pane_t2

0x2c00,	// (0x0009face) cale_month_day_heading_pane_t3

0x2c8d,	// (0x0009fb5b) cale_month_day_heading_pane_t4

0x2d1a,	// (0x0009fbe8) cale_month_day_heading_pane_t5

0x2daf,	// (0x0009fc7d) cale_month_day_heading_pane_t6

0x2e4c,	// (0x0009fd1a) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000ac174) cale_month_day_heading_pane_t

0xa9f5,	// (0x000a78c3) bg_cale_side_pane_cp01

0x2ee9,	// (0x0009fdb7) cale_month_week_pane_t1

0x2f02,	// (0x0009fdd0) cale_month_week_pane_t2

0x2f1b,	// (0x0009fde9) cale_month_week_pane_t3

0x2f34,	// (0x0009fe02) cale_month_week_pane_t4

0x2f4d,	// (0x0009fe1b) cale_month_week_pane_t5

0x2f68,	// (0x0009fe36) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000ac183) cale_month_week_pane_t

0x2f89,	// (0x0009fe57) cell_cale_month_pane_ParamLimits

0x2f89,	// (0x0009fe57) cell_cale_month_pane

0x30d5,	// (0x0009ffa3) cell_cale_month_pane_g1

0x30e1,	// (0x0009ffaf) cell_cale_month_pane_t1_ParamLimits

0x30e1,	// (0x0009ffaf) cell_cale_month_pane_t1

0xaa03,	// (0x000a78d1) grid_highlight_pane_cp08

0xa8ef,	// (0x000a77bd) main_smil_g1

0x3101,	// (0x0009ffcf) smil_status_pane

0xada4,	// (0x000a7c72) smil_text_pane

0xc66a,	// (0x000a9538) bg_popup_call3_rect_pane_g8

0xc672,	// (0x000a9540) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000ac43c) bg_popup_call3_rect_pane_g

0xc900,	// (0x000a97ce) smil_status_volume_pane_g1

0x3114,	// (0x0009ffe2) smil_status_pane_t1

0x46bd,	// (0x000a158b) volume_smil_pane

0xadae,	// (0x000a7c7c) list_smil_text_pane

0x312b,	// (0x0009fff9) scroll_pane_cp011

0x3136,	// (0x000a0004) smil_text_list_pane_t1_ParamLimits

0x3136,	// (0x000a0004) smil_text_list_pane_t1

0x3188,	// (0x000a0056) aid_volume_smil_ParamLimits

0x3188,	// (0x000a0056) aid_volume_smil

0xa8ef,	// (0x000a77bd) smil_volume_pane_g1

0xa8ef,	// (0x000a77bd) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000ac1a3) smil_volume_pane_g

0x13c4,	// (0x0009e292) listscroll_cale_day_pane

0xadb8,	// (0x000a7c86) bg_cale_pane

0xadd0,	// (0x000a7c9e) list_cale_pane

0xadf3,	// (0x000a7cc1) scroll_pane_cp09

0xae04,	// (0x000a7cd2) cale_bg_pane_g1

0xae0c,	// (0x000a7cda) cale_bg_pane_g2

0xae14,	// (0x000a7ce2) cale_bg_pane_g3

0xae1c,	// (0x000a7cea) cale_bg_pane_g4

0xae24,	// (0x000a7cf2) cale_bg_pane_g5

0xae2c,	// (0x000a7cfa) cale_bg_pane_g6

0xae34,	// (0x000a7d02) cale_bg_pane_g7

0xae3c,	// (0x000a7d0a) cale_bg_pane_g8

0xae44,	// (0x000a7d12) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000ac1a8) cale_bg_pane_g

0x31aa,	// (0x000a0078) list_cale_time_pane_ParamLimits

0x31aa,	// (0x000a0078) list_cale_time_pane

0xae54,	// (0x000a7d22) list_cale_time_pane_g1_ParamLimits

0xae54,	// (0x000a7d22) list_cale_time_pane_g1

0xae60,	// (0x000a7d2e) list_cale_time_pane_g2_ParamLimits

0xae60,	// (0x000a7d2e) list_cale_time_pane_g2

0x31be,	// (0x000a008c) list_cale_time_pane_g3_ParamLimits

0x31be,	// (0x000a008c) list_cale_time_pane_g3

0x31cc,	// (0x000a009a) list_cale_time_pane_g4_ParamLimits

0x31cc,	// (0x000a009a) list_cale_time_pane_g4

0x31da,	// (0x000a00a8) list_cale_time_pane_g5_ParamLimits

0x31da,	// (0x000a00a8) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000ac1bb) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000ac1bb) list_cale_time_pane_g

0xae7a,	// (0x000a7d48) list_cale_time_pane_t1_ParamLimits

0xae7a,	// (0x000a7d48) list_cale_time_pane_t1

0xaea2,	// (0x000a7d70) list_cale_time_pane_t2_ParamLimits

0xaea2,	// (0x000a7d70) list_cale_time_pane_t2

0x35a3,	// (0x000a0471) aid_blid_cardinal_pane

0x35e5,	// (0x000a04b3) compass_pane_t4

0xaeca,	// (0x000a7d98) list_cale_time_pane_t4_ParamLimits

0xaeca,	// (0x000a7d98) list_cale_time_pane_t4

0x35f3,	// (0x000a04c1) compass_pane_t5

0x3603,	// (0x000a04d1) compass_pane_t6

0x3611,	// (0x000a04df) compass_pane_t7

0xb378,	// (0x000a8246) navi_pane_cc_t1

0xb4c5,	// (0x000a8393) aid_phob_thumbnail_center_pane

0x3dc5,	// (0x000a0c93) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000ac1c8) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000ac1c8) list_cale_time_pane_t

0x9ca8,	// (0x000a6b76) bg_popup_window_pane_cp02_ParamLimits

0x9ca8,	// (0x000a6b76) bg_popup_window_pane_cp02

0xaef2,	// (0x000a7dc0) heading_pane_cp01_ParamLimits

0xaef2,	// (0x000a7dc0) heading_pane_cp01

0xaefe,	// (0x000a7dcc) loc_req_pane_ParamLimits

0xaefe,	// (0x000a7dcc) loc_req_pane

0xaf0e,	// (0x000a7ddc) loc_type_pane_ParamLimits

0xaf0e,	// (0x000a7ddc) loc_type_pane

0xaf20,	// (0x000a7dee) loc_type_pane_t1_ParamLimits

0xaf20,	// (0x000a7dee) loc_type_pane_t1

0xaf32,	// (0x000a7e00) loc_type_pane_t2_ParamLimits

0xaf32,	// (0x000a7e00) loc_type_pane_t2

0xaf44,	// (0x000a7e12) loc_type_pane_t3_ParamLimits

0xaf44,	// (0x000a7e12) loc_type_pane_t3

0x0002,

0xf301,	// (0x000ac1cf) loc_type_pane_t_ParamLimits

0xf301,	// (0x000ac1cf) loc_type_pane_t

0xaf56,	// (0x000a7e24) list_loc_req_pane

0xaf60,	// (0x000a7e2e) scroll_pane_cp012

0x31e8,	// (0x000a00b6) list_single_loc_request_popup_menu_pane_ParamLimits

0x31e8,	// (0x000a00b6) list_single_loc_request_popup_menu_pane

0xaf6b,	// (0x000a7e39) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf6b,	// (0x000a7e39) list_single_loc_request_popup_menu_pane_g1

0xaf77,	// (0x000a7e45) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf77,	// (0x000a7e45) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000ac1d6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000ac1d6) list_single_loc_request_popup_menu_pane_g

0xaf83,	// (0x000a7e51) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf83,	// (0x000a7e51) list_single_loc_request_popup_menu_pane_t1

0x31fa,	// (0x000a00c8) bg_popup_window_pane_cp03_ParamLimits

0x31fa,	// (0x000a00c8) bg_popup_window_pane_cp03

0x3208,	// (0x000a00d6) heading_loc_req_pane_ParamLimits

0x3208,	// (0x000a00d6) heading_loc_req_pane

0x3214,	// (0x000a00e2) popup_dyc_status_message_window_g1_ParamLimits

0x3214,	// (0x000a00e2) popup_dyc_status_message_window_g1

0x3220,	// (0x000a00ee) popup_dyc_status_message_window_t1_ParamLimits

0x3220,	// (0x000a00ee) popup_dyc_status_message_window_t1

0x3232,	// (0x000a0100) popup_dyc_status_message_window_t2_ParamLimits

0x3232,	// (0x000a0100) popup_dyc_status_message_window_t2

0x3244,	// (0x000a0112) popup_dyc_status_message_window_t3_ParamLimits

0x3244,	// (0x000a0112) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000ac1db) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000ac1db) popup_dyc_status_message_window_t

0xa051,	// (0x000a6f1f) bg_heading_pane_cp01

0xaf99,	// (0x000a7e67) heading_loc_req_pane_g1

0xafa1,	// (0x000a7e6f) heading_loc_req_pane_g2

0xafa9,	// (0x000a7e77) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000ac1e2) heading_loc_req_pane_g

0xafb1,	// (0x000a7e7f) heading_loc_req_pane_t1

0xafc1,	// (0x000a7e8f) bg_popup_sub_pane_cp01_ParamLimits

0xafc1,	// (0x000a7e8f) bg_popup_sub_pane_cp01

0xafcf,	// (0x000a7e9d) popup_cale_events_window_g1_ParamLimits

0xafcf,	// (0x000a7e9d) popup_cale_events_window_g1

0xafef,	// (0x000a7ebd) popup_cale_events_window_g2_ParamLimits

0xafef,	// (0x000a7ebd) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000ac216) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000ac216) popup_cale_events_window_g

0xb00f,	// (0x000a7edd) popup_cale_events_window_t1_ParamLimits

0xb00f,	// (0x000a7edd) popup_cale_events_window_t1

0xb021,	// (0x000a7eef) popup_cale_events_window_t2_ParamLimits

0xb021,	// (0x000a7eef) popup_cale_events_window_t2

0xb05f,	// (0x000a7f2d) popup_cale_events_window_t3_ParamLimits

0xb05f,	// (0x000a7f2d) popup_cale_events_window_t3

0xb12b,	// (0x000a7ff9) popup_cale_events_window_t4_ParamLimits

0xb12b,	// (0x000a7ff9) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000ac21b) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000ac21b) popup_cale_events_window_t

0x333f,	// (0x000a020d) call_type_pane

0xb161,	// (0x000a802f) popup_call_status_window_g1

0x334b,	// (0x000a0219) popup_call_status_window_g2

0x3357,	// (0x000a0225) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000ac224) popup_call_status_window_g

0xb16f,	// (0x000a803d) call_type_pane_g1

0xb178,	// (0x000a8046) call_type_pane_g2

0x0001,

0xf35d,	// (0x000ac22b) call_type_pane_g

0xa051,	// (0x000a6f1f) bg_popup_sub_pane_cp02

0xb181,	// (0x000a804f) listscroll_popup_wml_pane

0xb189,	// (0x000a8057) list_wml_pane

0xb193,	// (0x000a8061) scroll_pane_cp013

0xb19e,	// (0x000a806c) list_single_graphic_popup_wml_pane_ParamLimits

0xb19e,	// (0x000a806c) list_single_graphic_popup_wml_pane

0xa8ef,	// (0x000a77bd) list_single_graphic_popup_wml_pane_g1

0xb1b2,	// (0x000a8080) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000ac230) list_single_graphic_popup_wml_pane_g

0xb1ba,	// (0x000a8088) list_single_graphic_popup_wml_pane_t1

0xb1d0,	// (0x000a809e) aid_call_pane

0xa7cd,	// (0x000a769b) popup_clock_analogue_window_g1

0xa7cd,	// (0x000a769b) popup_clock_analogue_window_g2

0x3363,	// (0x000a0231) popup_clock_analogue_window_g3

0x3363,	// (0x000a0231) popup_clock_analogue_window_g4

0xa8ef,	// (0x000a77bd) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000ac235) popup_clock_analogue_window_g

0x336b,	// (0x000a0239) popup_clock_analogue_window_t1

0x3379,	// (0x000a0247) clock_digital_number_pane_ParamLimits

0x3379,	// (0x000a0247) clock_digital_number_pane

0x3385,	// (0x000a0253) clock_digital_number_pane_cp02_ParamLimits

0x3385,	// (0x000a0253) clock_digital_number_pane_cp02

0x3391,	// (0x000a025f) clock_digital_number_pane_cp03_ParamLimits

0x3391,	// (0x000a025f) clock_digital_number_pane_cp03

0x339d,	// (0x000a026b) clock_digital_number_pane_cp04_ParamLimits

0x339d,	// (0x000a026b) clock_digital_number_pane_cp04

0x33a9,	// (0x000a0277) clock_digital_separator_pane_ParamLimits

0x33a9,	// (0x000a0277) clock_digital_separator_pane

0x33b5,	// (0x000a0283) popup_clock_digital_window_t1

0xa8ef,	// (0x000a77bd) clock_digital_number_pane_g1

0xa8ef,	// (0x000a77bd) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000ac1a3) clock_digital_number_pane_g

0xa8ef,	// (0x000a77bd) clock_digital_separator_pane_g1

0xa8ef,	// (0x000a77bd) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000ac1a3) clock_digital_separator_pane_g

0xa051,	// (0x000a6f1f) bg_popup_window_pane_cp04

0xb1d8,	// (0x000a80a6) heading_pane_cp03

0xb1e0,	// (0x000a80ae) listscroll_popup_gms_pane

0xb1e8,	// (0x000a80b6) grid_large_graphic_popup_pane

0xb1f2,	// (0x000a80c0) listscroll_popup_gms_pane_g1

0xb1fa,	// (0x000a80c8) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000ac240) listscroll_popup_gms_pane_g

0xabfd,	// (0x000a7acb) scroll_pane_cp014

0x33d2,	// (0x000a02a0) cell_large_graphic_popup_pane_ParamLimits

0x33d2,	// (0x000a02a0) cell_large_graphic_popup_pane

0x33ec,	// (0x000a02ba) cell_large_graphic_popup_pane_g1_ParamLimits

0x33ec,	// (0x000a02ba) cell_large_graphic_popup_pane_g1

0xb202,	// (0x000a80d0) cell_large_graphic_popup_pane_g2_ParamLimits

0xb202,	// (0x000a80d0) cell_large_graphic_popup_pane_g2

0xb20e,	// (0x000a80dc) cell_large_graphic_popup_pane_g3_ParamLimits

0xb20e,	// (0x000a80dc) cell_large_graphic_popup_pane_g3

0xb21b,	// (0x000a80e9) cell_large_graphic_popup_pane_g4_ParamLimits

0xb21b,	// (0x000a80e9) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000ac245) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000ac245) cell_large_graphic_popup_pane_g

0xb22b,	// (0x000a80f9) grid_highlight_pane_cp010

0xa8ef,	// (0x000a77bd) bg_popup_call_pane_g1

0xb235,	// (0x000a8103) list_single_graphic_popup_conf_pane_ParamLimits

0xb235,	// (0x000a8103) list_single_graphic_popup_conf_pane

0xb247,	// (0x000a8115) list_highlight_pane_cp01

0xb250,	// (0x000a811e) list_single_graphic_popup_conf_pane_g1

0xb258,	// (0x000a8126) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000ac24e) list_single_graphic_popup_conf_pane_g

0xb260,	// (0x000a812e) list_single_graphic_popup_conf_pane_t1

0xb26e,	// (0x000a813c) linegrid_cams_pane_g1

0x33f8,	// (0x000a02c6) linegrid_cams_pane_g2

0xaa36,	// (0x000a7904) linegrid_cams_pane_g3

0xb277,	// (0x000a8145) linegrid_cams_pane_g4

0x3401,	// (0x000a02cf) linegrid_cams_pane_g5

0x340a,	// (0x000a02d8) linegrid_cams_pane_g6

0xaa3f,	// (0x000a790d) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000ac253) linegrid_cams_pane_g

0xb280,	// (0x000a814e) popup_clock_analogue_window

0xb280,	// (0x000a814e) popup_clock_digital_window

0xa051,	// (0x000a6f1f) popup_phob_thumbnail_window

0xa8ef,	// (0x000a77bd) call_video_uplink_pane_g1

0xb289,	// (0x000a8157) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000ac262) call_video_uplink_pane_g

0xb291,	// (0x000a815f) video_uplink_pane

0xb299,	// (0x000a8167) mce_image_pane_g1

0x3415,	// (0x000a02e3) mce_image_pane_g2

0x341f,	// (0x000a02ed) mce_image_pane_g3

0x3429,	// (0x000a02f7) mce_image_pane_g4

0x3431,	// (0x000a02ff) mce_image_pane_g5

0x0004,

0xf399,	// (0x000ac267) mce_image_pane_g

0xb2a3,	// (0x000a8171) control_top_pane_stacon_cp01_ParamLimits

0xb2a3,	// (0x000a8171) control_top_pane_stacon_cp01

0xb2b7,	// (0x000a8185) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2b7,	// (0x000a8185) uni_indicator_pane_stacon_cp01

0xb2c8,	// (0x000a8196) bg_popup_sub_pane_cp03

0x3439,	// (0x000a0307) chi_dic_find_pane

0x3441,	// (0x000a030f) listscroll_chi_dic_pane

0x344a,	// (0x000a0318) main_pane_chidic_g1

0x345d,	// (0x000a032b) chi_dic_find_pane_t1

0xb2d2,	// (0x000a81a0) find_chidic_pane

0xb2db,	// (0x000a81a9) chi_dic_list_pane_ParamLimits

0xb2db,	// (0x000a81a9) chi_dic_list_pane

0xb2ec,	// (0x000a81ba) scroll_pane_cp020

0x346b,	// (0x000a0339) find_chidic_pane_t1

0xa051,	// (0x000a6f1f) input_focus_pane_cp06

0x347a,	// (0x000a0348) list_chi_dic_pane_ParamLimits

0x347a,	// (0x000a0348) list_chi_dic_pane

0x348f,	// (0x000a035d) list_chi_dic_pane_t1_ParamLimits

0x348f,	// (0x000a035d) list_chi_dic_pane_t1

0xa051,	// (0x000a6f1f) list_highlight_pane_cp020

0xb2f4,	// (0x000a81c2) bg_cale_heading_pane_g1

0x34a2,	// (0x000a0370) bg_cale_heading_pane_g2

0x34aa,	// (0x000a0378) bg_cale_heading_pane_g3

0x34b2,	// (0x000a0380) bg_cale_heading_pane_g4

0x34bc,	// (0x000a038a) bg_cale_heading_pane_g5

0x34c6,	// (0x000a0394) bg_cale_heading_pane_g6

0x34ce,	// (0x000a039c) bg_cale_heading_pane_g7

0x34d6,	// (0x000a03a4) bg_cale_heading_pane_g8

0x34e0,	// (0x000a03ae) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000ac272) bg_cale_heading_pane_g

0xb2f4,	// (0x000a81c2) bg_cale_side_pane_g1

0x34ea,	// (0x000a03b8) bg_cale_side_pane_g2

0x34f4,	// (0x000a03c2) bg_cale_side_pane_g3

0x34fe,	// (0x000a03cc) bg_cale_side_pane_g4

0x3508,	// (0x000a03d6) bg_cale_side_pane_g5

0x3512,	// (0x000a03e0) bg_cale_side_pane_g6

0x351c,	// (0x000a03ea) bg_cale_side_pane_g7

0x3526,	// (0x000a03f4) bg_cale_side_pane_g8

0x352e,	// (0x000a03fc) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000ac285) bg_cale_side_pane_g

0x3536,	// (0x000a0404) popup_call_status_window_ParamLimits

0x3536,	// (0x000a0404) popup_call_status_window

0xb2fc,	// (0x000a81ca) stacon_top_pane

0xb304,	// (0x000a81d2) status_pane_ParamLimits

0xb304,	// (0x000a81d2) status_pane

0xb319,	// (0x000a81e7) status_small_pane

0xb321,	// (0x000a81ef) control_pane

0xa051,	// (0x000a6f1f) stacon_bottom_pane

0xb329,	// (0x000a81f7) list_single_mce_smart_pane_t1_ParamLimits

0xb329,	// (0x000a81f7) list_single_mce_smart_pane_t1

0xb33c,	// (0x000a820a) list_single_mce_smart_pane_t2_ParamLimits

0xb33c,	// (0x000a820a) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000ac298) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000ac298) list_single_mce_smart_pane_t

0x3542,	// (0x000a0410) compass_pane

0x354d,	// (0x000a041b) main_location2_pane_t1

0x3563,	// (0x000a0431) main_location2_pane_t2

0x3579,	// (0x000a0447) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000ac29d) main_location2_pane_t

0xb35b,	// (0x000a8229) compass_pane_g1_ParamLimits

0xb35b,	// (0x000a8229) compass_pane_g1

0x35c7,	// (0x000a0495) compass_pane_t1

0x35d6,	// (0x000a04a4) compass_pane_t2

0x0005,

0xf3d8,	// (0x000ac2a6) compass_pane_t

0x3621,	// (0x000a04ef) text_secondary_cp61

0xb36f,	// (0x000a823d) navi_pane_cams_g5

0xb392,	// (0x000a8260) navi_pane_im_t1

0xb3a0,	// (0x000a826e) navi_pane_mp_g1_ParamLimits

0xb3a0,	// (0x000a826e) navi_pane_mp_g1

0xb3b4,	// (0x000a8282) navi_pane_mp_g2_ParamLimits

0xb3b4,	// (0x000a8282) navi_pane_mp_g2

0xb3c0,	// (0x000a828e) navi_pane_mp_g3_ParamLimits

0xb3c0,	// (0x000a828e) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000ac2ba) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000ac2ba) navi_pane_mp_g

0xb3cc,	// (0x000a829a) navi_pane_mp_t1

0xb3da,	// (0x000a82a8) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000ac2c1) navi_pane_mp_t

0xb416,	// (0x000a82e4) navi_pane_vt_g1

0xb3cc,	// (0x000a829a) navi_pane_vt_t1

0xb41e,	// (0x000a82ec) navi_slider_pane

0xaa50,	// (0x000a791e) zooming_pane

0xb426,	// (0x000a82f4) navi_slider_pane_g1

0x3756,	// (0x000a0624) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000ac2c8) navi_slider_pane_g

0xb44a,	// (0x000a8318) aid_levels_zoom

0xb452,	// (0x000a8320) zooming_pane_g1

0xb45a,	// (0x000a8328) zooming_pane_g2

0xb45a,	// (0x000a8328) zooming_pane_g3

0x0002,

0xf409,	// (0x000ac2d7) zooming_pane_g

0xb462,	// (0x000a8330) level_10_zoom

0xb46b,	// (0x000a8339) level_11_zoom

0xb474,	// (0x000a8342) level_1_zoom

0xb47d,	// (0x000a834b) level_2_zoom

0xb486,	// (0x000a8354) level_3_zoom

0xb48f,	// (0x000a835d) level_4_zoom

0xb498,	// (0x000a8366) level_5_zoom

0xb4a1,	// (0x000a836f) level_6_zoom

0xb4aa,	// (0x000a8378) level_7_zoom

0xb4b3,	// (0x000a8381) level_8_zoom

0xb4bc,	// (0x000a838a) level_9_zoom

0xb4cd,	// (0x000a839b) popup_phob_thumbnail_window_g1

0xb4d5,	// (0x000a83a3) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000ac2de) popup_phob_thumbnail_window_g

0xc7d0,	// (0x000a969e) level_1_location

0xc7d8,	// (0x000a96a6) level_2_location

0xc7e0,	// (0x000a96ae) level_3_location

0xc7e8,	// (0x000a96b6) level_4_location

0xaa50,	// (0x000a791e) level_5_location

0x3768,	// (0x000a0636) mce_icon_pane_g1

0x3770,	// (0x000a063e) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000ac2e3) mce_icon_pane_g

0x3778,	// (0x000a0646) main_mup_pane_g1_ParamLimits

0x3778,	// (0x000a0646) main_mup_pane_g1

0x3790,	// (0x000a065e) main_mup_pane_g2_ParamLimits

0x3790,	// (0x000a065e) main_mup_pane_g2

0x37ac,	// (0x000a067a) main_mup_pane_g3_ParamLimits

0x37ac,	// (0x000a067a) main_mup_pane_g3

0x37c8,	// (0x000a0696) main_mup_pane_g4_ParamLimits

0x37c8,	// (0x000a0696) main_mup_pane_g4

0x37e4,	// (0x000a06b2) main_mup_pane_g5_ParamLimits

0x37e4,	// (0x000a06b2) main_mup_pane_g5

0x3805,	// (0x000a06d3) main_mup_pane_g6_ParamLimits

0x3805,	// (0x000a06d3) main_mup_pane_g6

0x3825,	// (0x000a06f3) main_mup_pane_g7_ParamLimits

0x3825,	// (0x000a06f3) main_mup_pane_g7

0x3849,	// (0x000a0717) main_mup_pane_g8_ParamLimits

0x3849,	// (0x000a0717) main_mup_pane_g8

0x386d,	// (0x000a073b) main_mup_pane_g9_ParamLimits

0x386d,	// (0x000a073b) main_mup_pane_g9

0x3890,	// (0x000a075e) main_mup_pane_g10_ParamLimits

0x3890,	// (0x000a075e) main_mup_pane_g10

0x38b3,	// (0x000a0781) main_mup_pane_g11_ParamLimits

0x38b3,	// (0x000a0781) main_mup_pane_g11

0x38d3,	// (0x000a07a1) main_mup_pane_g12_ParamLimits

0x38d3,	// (0x000a07a1) main_mup_pane_g12

0x38e1,	// (0x000a07af) main_mup_pane_g13_ParamLimits

0x38e1,	// (0x000a07af) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000ac2e8) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000ac2e8) main_mup_pane_g

0x38f7,	// (0x000a07c5) main_mup_pane_t1_ParamLimits

0x38f7,	// (0x000a07c5) main_mup_pane_t1

0x3916,	// (0x000a07e4) main_mup_pane_t2_ParamLimits

0x3916,	// (0x000a07e4) main_mup_pane_t2

0x3930,	// (0x000a07fe) main_mup_pane_t3_ParamLimits

0x3930,	// (0x000a07fe) main_mup_pane_t3

0x394a,	// (0x000a0818) main_mup_pane_t4_ParamLimits

0x394a,	// (0x000a0818) main_mup_pane_t4

0x395c,	// (0x000a082a) main_mup_pane_t5_ParamLimits

0x395c,	// (0x000a082a) main_mup_pane_t5

0x396e,	// (0x000a083c) main_mup_pane_t6_ParamLimits

0x396e,	// (0x000a083c) main_mup_pane_t6

0x0005,

0xf435,	// (0x000ac303) main_mup_pane_t_ParamLimits

0xf435,	// (0x000ac303) main_mup_pane_t

0x3984,	// (0x000a0852) mup_progress_pane_ParamLimits

0x3984,	// (0x000a0852) mup_progress_pane

0x3990,	// (0x000a085e) mup_visualizer_pane_ParamLimits

0x3990,	// (0x000a085e) mup_visualizer_pane

0x39ce,	// (0x000a089c) mup_volume_pane_ParamLimits

0x39ce,	// (0x000a089c) mup_volume_pane

0xb161,	// (0x000a802f) mup_visualizer_pane_g1_ParamLimits

0xb161,	// (0x000a802f) mup_visualizer_pane_g1

0xb161,	// (0x000a802f) mup_visualizer_pane_g2_ParamLimits

0xb161,	// (0x000a802f) mup_visualizer_pane_g2

0xb35b,	// (0x000a8229) mup_visualizer_pane_g3_ParamLimits

0xb35b,	// (0x000a8229) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000ac310) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000ac310) mup_visualizer_pane_g

0xa8ef,	// (0x000a77bd) mup_volume_pane_g1

0xb4e5,	// (0x000a83b3) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000ac317) mup_volume_pane_g

0xa8ef,	// (0x000a77bd) mup_progress_pane_g1

0xb4ee,	// (0x000a83bc) mup_progress_pane_g2

0xb4f7,	// (0x000a83c5) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000ac31c) mup_progress_pane_g

0xa051,	// (0x000a6f1f) bg_popup_window_pane_cp05

0xb500,	// (0x000a83ce) heading_pane_cp02_ParamLimits

0xb500,	// (0x000a83ce) heading_pane_cp02

0xb51c,	// (0x000a83ea) list_popup_blid_pane

0xb524,	// (0x000a83f2) list_blid_sat_info_pane_ParamLimits

0xb524,	// (0x000a83f2) list_blid_sat_info_pane

0xb537,	// (0x000a8405) list_blid_sat_info_pane_g1

0xb53f,	// (0x000a840d) list_blid_sat_info_pane_t1

0x3aed,	// (0x000a09bb) mup_equalizer_pane_ParamLimits

0x3aed,	// (0x000a09bb) mup_equalizer_pane

0x3b0e,	// (0x000a09dc) mup_equalizer_pane_cp1_ParamLimits

0x3b0e,	// (0x000a09dc) mup_equalizer_pane_cp1

0x3b2f,	// (0x000a09fd) mup_equalizer_pane_cp2_ParamLimits

0x3b2f,	// (0x000a09fd) mup_equalizer_pane_cp2

0x3b50,	// (0x000a0a1e) mup_equalizer_pane_cp3_ParamLimits

0x3b50,	// (0x000a0a1e) mup_equalizer_pane_cp3

0x3b75,	// (0x000a0a43) mup_equalizer_pane_cp4_ParamLimits

0x3b75,	// (0x000a0a43) mup_equalizer_pane_cp4

0x3b9a,	// (0x000a0a68) mup_equalizer_pane_cp5

0x3bb2,	// (0x000a0a80) mup_equalizer_pane_cp6

0x3bca,	// (0x000a0a98) mup_equalizer_pane_cp7

0xc6ea,	// (0x000a95b8) bg_popup_call_poc_act_pane_g9

0xc6f2,	// (0x000a95c0) bg_popup_call_poc_act_pane_g10

0xc6fa,	// (0x000a95c8) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7d5,	// (0x000a76a3) mup_scale_pane

0xa8ef,	// (0x000a77bd) mup_scale_pane_g1

0xb54d,	// (0x000a841b) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000ac338) mup_scale_pane_g

0xb571,	// (0x000a843f) msg_data_pane

0xb579,	// (0x000a8447) scroll_pane_cp017

0x3bf4,	// (0x000a0ac2) bg_list_pane_cp04_ParamLimits

0x3bf4,	// (0x000a0ac2) bg_list_pane_cp04

0xb581,	// (0x000a844f) msg_data_pane_g1

0x3c14,	// (0x000a0ae2) msg_data_pane_g2

0x3c1e,	// (0x000a0aec) msg_data_pane_g3

0x3c28,	// (0x000a0af6) msg_data_pane_g4

0x3c30,	// (0x000a0afe) msg_data_pane_g5

0x3c38,	// (0x000a0b06) msg_data_pane_g6

0x3c40,	// (0x000a0b0e) msg_data_pane_g7

0x0006,

0xf479,	// (0x000ac347) msg_data_pane_g

0x3c48,	// (0x000a0b16) msg_text_pane_ParamLimits

0x3c48,	// (0x000a0b16) msg_text_pane

0x3c6e,	// (0x000a0b3c) qrid_highlight_pane_cp011_ParamLimits

0x3c6e,	// (0x000a0b3c) qrid_highlight_pane_cp011

0xa051,	// (0x000a6f1f) msg_body_pane

0xa051,	// (0x000a6f1f) msg_header_pane

0xb592,	// (0x000a8460) input_focus_pane_cp07

0xa22a,	// (0x000a70f8) msg_header_pane_t1_ParamLimits

0xa22a,	// (0x000a70f8) msg_header_pane_t1

0xa23c,	// (0x000a710a) msg_header_pane_t2_ParamLimits

0xa23c,	// (0x000a710a) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000ac35b) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000ac35b) msg_header_pane_t

0xb5a7,	// (0x000a8475) msg_body_pane_g1

0x3c92,	// (0x000a0b60) msg_body_pane_t1_ParamLimits

0x3c92,	// (0x000a0b60) msg_body_pane_t1

0xa24e,	// (0x000a711c) msg_body_pane_t2_ParamLimits

0xa24e,	// (0x000a711c) msg_body_pane_t2

0xa260,	// (0x000a712e) msg_body_pane_t3_ParamLimits

0xa260,	// (0x000a712e) msg_body_pane_t3

0x0002,

0xf492,	// (0x000ac360) msg_body_pane_t_ParamLimits

0xf492,	// (0x000ac360) msg_body_pane_t

0x3d15,	// (0x000a0be3) main_viewer_pane_g1_ParamLimits

0x3d15,	// (0x000a0be3) main_viewer_pane_g1

0x3d21,	// (0x000a0bef) main_viewer_pane_g2_ParamLimits

0x3d21,	// (0x000a0bef) main_viewer_pane_g2

0x3d2d,	// (0x000a0bfb) main_viewer_pane_g3_ParamLimits

0x3d2d,	// (0x000a0bfb) main_viewer_pane_g3

0x3d3e,	// (0x000a0c0c) main_viewer_pane_g4_ParamLimits

0x3d3e,	// (0x000a0c0c) main_viewer_pane_g4

0x3d4f,	// (0x000a0c1d) main_viewer_pane_g5_ParamLimits

0x3d4f,	// (0x000a0c1d) main_viewer_pane_g5

0x3d4f,	// (0x000a0c1d) main_viewer_pane_g7_ParamLimits

0x3d4f,	// (0x000a0c1d) main_viewer_pane_g7

0x3d61,	// (0x000a0c2f) main_viewer_pane_g8_ParamLimits

0x3d61,	// (0x000a0c2f) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000ac370) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000ac370) main_viewer_pane_g

0xb5af,	// (0x000a847d) viewer_content_pane_ParamLimits

0xb5af,	// (0x000a847d) viewer_content_pane

0x3d99,	// (0x000a0c67) main_postcard_pane_g1_ParamLimits

0x3d99,	// (0x000a0c67) main_postcard_pane_g1

0x3da7,	// (0x000a0c75) main_postcard_pane_g2_ParamLimits

0x3da7,	// (0x000a0c75) main_postcard_pane_g2

0x3db5,	// (0x000a0c83) main_postcard_pane_g3_ParamLimits

0x3db5,	// (0x000a0c83) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000ac381) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000ac381) main_postcard_pane_g

0x3dc5,	// (0x000a0c93) main_postcard_pane_g4

0xc913,	// (0x000a97e1) smil_status_volume_pane_g2

0x3df1,	// (0x000a0cbf) postcard_pane_ParamLimits

0x3df1,	// (0x000a0cbf) postcard_pane

0xb161,	// (0x000a802f) postcard_pane_g1_ParamLimits

0xb161,	// (0x000a802f) postcard_pane_g1

0x3e2b,	// (0x000a0cf9) postcard_pane_g2_ParamLimits

0x3e2b,	// (0x000a0cf9) postcard_pane_g2

0x3e37,	// (0x000a0d05) postcard_pane_g3_ParamLimits

0x3e37,	// (0x000a0d05) postcard_pane_g3

0xb5bd,	// (0x000a848b) postcard_pane_g4_ParamLimits

0xb5bd,	// (0x000a848b) postcard_pane_g4

0x3e43,	// (0x000a0d11) postcard_pane_g5_ParamLimits

0x3e43,	// (0x000a0d11) postcard_pane_g5

0x3e4f,	// (0x000a0d1d) postcard_pane_g6_ParamLimits

0x3e4f,	// (0x000a0d1d) postcard_pane_g6

0xb5cb,	// (0x000a8499) postcard_pane_g7_ParamLimits

0xb5cb,	// (0x000a8499) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000ac38e) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000ac38e) postcard_pane_g

0x3e5d,	// (0x000a0d2b) main_mp2_pane_g1_ParamLimits

0x3e5d,	// (0x000a0d2b) main_mp2_pane_g1

0x3e6b,	// (0x000a0d39) main_mp2_pane_g2_ParamLimits

0x3e6b,	// (0x000a0d39) main_mp2_pane_g2

0x3e77,	// (0x000a0d45) main_mp2_pane_g3_ParamLimits

0x3e77,	// (0x000a0d45) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000ac39d) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000ac39d) main_mp2_pane_g

0x3e83,	// (0x000a0d51) main_mp2_pane_t1_ParamLimits

0x3e83,	// (0x000a0d51) main_mp2_pane_t1

0x3e9a,	// (0x000a0d68) main_mp2_pane_t2_ParamLimits

0x3e9a,	// (0x000a0d68) main_mp2_pane_t2

0x3eae,	// (0x000a0d7c) main_mp2_pane_t3_ParamLimits

0x3eae,	// (0x000a0d7c) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000ac3a4) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000ac3a4) main_mp2_pane_t

0xb5d9,	// (0x000a84a7) pec_content_pane_ParamLimits

0xb5d9,	// (0x000a84a7) pec_content_pane

0xabfd,	// (0x000a7acb) scroll_pane_cp015

0xb5eb,	// (0x000a84b9) pec_attribute_pane_ParamLimits

0xb5eb,	// (0x000a84b9) pec_attribute_pane

0x3ec0,	// (0x000a0d8e) pec_content_pane_g1_ParamLimits

0x3ec0,	// (0x000a0d8e) pec_content_pane_g1

0xb5fb,	// (0x000a84c9) pec_content_pane_t1_ParamLimits

0xb5fb,	// (0x000a84c9) pec_content_pane_t1

0xb60d,	// (0x000a84db) pec_content_pane_t2_ParamLimits

0xb60d,	// (0x000a84db) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000ac3ab) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000ac3ab) pec_content_pane_t

0x3ecc,	// (0x000a0d9a) list_single_graphic_pane_cp01_ParamLimits

0x3ecc,	// (0x000a0d9a) list_single_graphic_pane_cp01

0xa7d5,	// (0x000a76a3) bg_popup_sub_pane_cp04

0xb61f,	// (0x000a84ed) popup_mup_playback_window_g1

0xb62b,	// (0x000a84f9) popup_mup_playback_window_t1

0xb640,	// (0x000a850e) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000ac3b0) popup_mup_playback_window_t

0xb677,	// (0x000a8545) main_image_pane_g1_ParamLimits

0xb677,	// (0x000a8545) main_image_pane_g1

0xb6ba,	// (0x000a8588) scroll_pane_cp018_ParamLimits

0xb6ba,	// (0x000a8588) scroll_pane_cp018

0xb6d2,	// (0x000a85a0) scroll_pane_cp016_ParamLimits

0xb6d2,	// (0x000a85a0) scroll_pane_cp016

0x3f5a,	// (0x000a0e28) smil2_image_pane_ParamLimits

0x3f5a,	// (0x000a0e28) smil2_image_pane

0x3f90,	// (0x000a0e5e) smil2_root_pane_ParamLimits

0x3f90,	// (0x000a0e5e) smil2_root_pane

0x3fbc,	// (0x000a0e8a) smil2_text_pane_ParamLimits

0x3fbc,	// (0x000a0e8a) smil2_text_pane

0xa051,	// (0x000a6f1f) bg_list_pane_cp06

0xb70e,	// (0x000a85dc) grid_radio_pane

0xa051,	// (0x000a6f1f) bg_popup_window_pane_cp06

0xb718,	// (0x000a85e6) main_fmradio_pane_t1

0xb1d8,	// (0x000a80a6) heading_pane_cp04

0xb726,	// (0x000a85f4) main_fmradio_pane_t2

0xc702,	// (0x000a95d0) popup_cale_lunar_info_window_g1

0xb734,	// (0x000a8602) main_fmradio_pane_t3

0xc70a,	// (0x000a95d8) popup_cale_lunar_info_window_g2

0xb744,	// (0x000a8612) main_fmradio_pane_t4

0x0001,

0xb752,	// (0x000a8620) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000ac48b) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000ac3c5) main_fmradio_pane_t

0xb760,	// (0x000a862e) wait_bar_pane_cp03

0xb768,	// (0x000a8636) cell_fmradio_pane_ParamLimits

0xb768,	// (0x000a8636) cell_fmradio_pane

0xb5cb,	// (0x000a8499) cell_fmradio_pane_g1_ParamLimits

0xb5cb,	// (0x000a8499) cell_fmradio_pane_g1

0xa051,	// (0x000a6f1f) grid_highlight_pane_cp011

0xb77d,	// (0x000a864b) poc_content_pane_ParamLimits

0xb77d,	// (0x000a864b) poc_content_pane

0xb78f,	// (0x000a865d) scroll_pane_cp019

0x3ffc,	// (0x000a0eca) popup_call_poc_act_window_ParamLimits

0x3ffc,	// (0x000a0eca) popup_call_poc_act_window

0x4009,	// (0x000a0ed7) popup_call_poc_inact_window_ParamLimits

0x4009,	// (0x000a0ed7) popup_call_poc_inact_window

0xf594,	// (0x000ac462) bg_popup_call_poc_act_pane_g

0xc67a,	// (0x000a9548) bg_popup_call_poc_inact_pane_g1

0xc682,	// (0x000a9550) bg_popup_call_poc_inact_pane_g2

0xb797,	// (0x000a8665) popup_call_poc_act_window_g2

0xc68a,	// (0x000a9558) bg_popup_call_poc_inact_pane_g3

0xc692,	// (0x000a9560) bg_popup_call_poc_inact_pane_g4

0xc69a,	// (0x000a9568) bg_popup_call_poc_inact_pane_g5

0xb79f,	// (0x000a866d) popup_call_poc_act_window_t1_ParamLimits

0xb79f,	// (0x000a866d) popup_call_poc_act_window_t1

0xb7c7,	// (0x000a8695) popup_call_poc_act_window_t2_ParamLimits

0xb7c7,	// (0x000a8695) popup_call_poc_act_window_t2

0xb7ef,	// (0x000a86bd) popup_call_poc_act_window_t3_ParamLimits

0xb7ef,	// (0x000a86bd) popup_call_poc_act_window_t3

0xb817,	// (0x000a86e5) popup_call_poc_act_window_t4_ParamLimits

0xb817,	// (0x000a86e5) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000ac3d0) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000ac3d0) popup_call_poc_act_window_t

0xc6a2,	// (0x000a9570) bg_popup_call_poc_inact_pane_g6

0xc6aa,	// (0x000a9578) bg_popup_call_poc_inact_pane_g7

0xc6b2,	// (0x000a9580) bg_popup_call_poc_inact_pane_g8

0xb829,	// (0x000a86f7) popup_call_poc_inact_window_g2

0xc6ba,	// (0x000a9588) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000ac44f) bg_popup_call_poc_inact_pane_g

0xb831,	// (0x000a86ff) popup_call_poc_inact_window_t1_ParamLimits

0xb831,	// (0x000a86ff) popup_call_poc_inact_window_t1

0xb846,	// (0x000a8714) popup_call_poc_inact_window_t2_ParamLimits

0xb846,	// (0x000a8714) popup_call_poc_inact_window_t2

0xb85b,	// (0x000a8729) popup_call_poc_inact_window_t3_ParamLimits

0xb85b,	// (0x000a8729) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000ac3d9) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000ac3d9) popup_call_poc_inact_window_t

0xc886,	// (0x000a9754) context_pane_ParamLimits

0x4618,	// (0x000a14e6) signal_pane_ParamLimits

0xaa50,	// (0x000a791e) main_call2_pane

0xc874,	// (0x000a9742) popup_phob_thumbnail2_window_ParamLimits

0xc874,	// (0x000a9742) popup_phob_thumbnail2_window

0x3cc3,	// (0x000a0b91) aid_hotspot_pointer_arrow_pane

0x3ccb,	// (0x000a0b99) aid_hotspot_pointer_hand_pane

0x432e,	// (0x000a11fc) phob_pre_status_pane_g5

0x1c90,	// (0x0009eb5e) cams_zoom_pane_ParamLimits

0x1c9c,	// (0x0009eb6a) image_vga_pane_ParamLimits

0x1cab,	// (0x0009eb79) main_camera_pane_g1_ParamLimits

0x1cb9,	// (0x0009eb87) main_camera_pane_g2_ParamLimits

0x1cc5,	// (0x0009eb93) main_camera_pane_g3_ParamLimits

0x1cd3,	// (0x0009eba1) main_camera_pane_g4_ParamLimits

0x1ce1,	// (0x0009ebaf) main_camera_pane_g5_ParamLimits

0x1cef,	// (0x0009ebbd) main_camera_pane_g6_ParamLimits

0x1cfd,	// (0x0009ebcb) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000ac0d8) main_camera_pane_g_ParamLimits

0x1d0b,	// (0x0009ebd9) main_camera_pane_t1_ParamLimits

0x1d1d,	// (0x0009ebeb) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000ac0e9) main_camera_pane_t_ParamLimits

0xa7d5,	// (0x000a76a3) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7d5,	// (0x000a76a3) bg_popup_preview_window_pane_cp01

0xb870,	// (0x000a873e) popup_phob_thumbnail2_window_g1_ParamLimits

0xb870,	// (0x000a873e) popup_phob_thumbnail2_window_g1

0xa051,	// (0x000a6f1f) call2_cli_visual_pane

0x4025,	// (0x000a0ef3) popup_call2_audio_conf_window_ParamLimits

0x4025,	// (0x000a0ef3) popup_call2_audio_conf_window

0x403e,	// (0x000a0f0c) popup_call2_audio_first_window_ParamLimits

0x403e,	// (0x000a0f0c) popup_call2_audio_first_window

0x40dc,	// (0x000a0faa) popup_call2_audio_in_window_ParamLimits

0x40dc,	// (0x000a0faa) popup_call2_audio_in_window

0x4120,	// (0x000a0fee) popup_call2_audio_out_window_ParamLimits

0x4120,	// (0x000a0fee) popup_call2_audio_out_window

0x418a,	// (0x000a1058) popup_call2_audio_second_window_ParamLimits

0x418a,	// (0x000a1058) popup_call2_audio_second_window

0x41e8,	// (0x000a10b6) popup_call2_audio_wait_window_ParamLimits

0x41e8,	// (0x000a10b6) popup_call2_audio_wait_window

0xa051,	// (0x000a6f1f) bg_popup_call2_act_pane_cp03

0xa7b7,	// (0x000a7685) list_conf_pane_cp

0xb87c,	// (0x000a874a) popup_call2_audio_conf_window_t1

0xb88a,	// (0x000a8758) list_single_graphic_popup_conf2_pane_ParamLimits

0xb88a,	// (0x000a8758) list_single_graphic_popup_conf2_pane

0xb247,	// (0x000a8115) list_highlight_pane_cp04

0xb89d,	// (0x000a876b) list_single_graphic_popup_conf2_pane_g1

0xb258,	// (0x000a8126) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000ac3e0) list_single_graphic_popup_conf2_pane_g

0xb8a7,	// (0x000a8775) list_single_graphic_popup_conf2_pane_t1

0xb8b5,	// (0x000a8783) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8b5,	// (0x000a8783) bg_popup_call2_act_pane_cp01

0xb93f,	// (0x000a880d) call_type_pane_cp05_ParamLimits

0xb93f,	// (0x000a880d) call_type_pane_cp05

0xb993,	// (0x000a8861) popup_call2_audio_second_window_g1_ParamLimits

0xb993,	// (0x000a8861) popup_call2_audio_second_window_g1

0xb9e7,	// (0x000a88b5) popup_call2_audio_second_window_g2_ParamLimits

0xb9e7,	// (0x000a88b5) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000ac3e5) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000ac3e5) popup_call2_audio_second_window_g

0xba4c,	// (0x000a891a) popup_call2_audio_second_window_t1_ParamLimits

0xba4c,	// (0x000a891a) popup_call2_audio_second_window_t1

0xbb07,	// (0x000a89d5) popup_call2_audio_second_window_t2_ParamLimits

0xbb07,	// (0x000a89d5) popup_call2_audio_second_window_t2

0xbb5a,	// (0x000a8a28) popup_call2_audio_second_window_t3_ParamLimits

0xbb5a,	// (0x000a8a28) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000ac3ec) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000ac3ec) popup_call2_audio_second_window_t

0xa051,	// (0x000a6f1f) bg_popup_call2_in_pane_cp02

0xa05b,	// (0x000a6f29) call_type_pane_cp04

0xa063,	// (0x000a6f31) popup_call2_audio_wait_window_g1

0xa06b,	// (0x000a6f39) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000abfc7) popup_call2_audio_wait_window_g

0xa073,	// (0x000a6f41) popup_call2_audio_wait_window_t3

0xbc4d,	// (0x000a8b1b) bg_popup_call2_act_pane_ParamLimits

0xbc4d,	// (0x000a8b1b) bg_popup_call2_act_pane

0xbd0d,	// (0x000a8bdb) call_type_pane_cp03_ParamLimits

0xbd0d,	// (0x000a8bdb) call_type_pane_cp03

0xbd71,	// (0x000a8c3f) popup_call2_audio_first_window_g1_ParamLimits

0xbd71,	// (0x000a8c3f) popup_call2_audio_first_window_g1

0xbde1,	// (0x000a8caf) popup_call2_audio_first_window_g2_ParamLimits

0xbde1,	// (0x000a8caf) popup_call2_audio_first_window_g2

0xb161,	// (0x000a802f) popup_call2_audio_first_window_g3_ParamLimits

0xb161,	// (0x000a802f) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000ac3f5) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000ac3f5) popup_call2_audio_first_window_g

0xbebf,	// (0x000a8d8d) popup_call2_audio_first_window_t1_ParamLimits

0xbebf,	// (0x000a8d8d) popup_call2_audio_first_window_t1

0xbfc2,	// (0x000a8e90) popup_call2_audio_first_window_t4_ParamLimits

0xbfc2,	// (0x000a8e90) popup_call2_audio_first_window_t4

0xc0a5,	// (0x000a8f73) popup_call2_audio_first_window_t5_ParamLimits

0xc0a5,	// (0x000a8f73) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000ac400) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000ac400) popup_call2_audio_first_window_t

0xa7cd,	// (0x000a769b) bg_popup_call2_act_pane_g1

0xc714,	// (0x000a95e2) popup_cale_lunar_info_window_t1

0xc722,	// (0x000a95f0) popup_cale_lunar_info_window_t2

0xc730,	// (0x000a95fe) popup_cale_lunar_info_window_t3

0xa051,	// (0x000a6f1f) bg_popup_call2_bubble_pane

0xc1a6,	// (0x000a9074) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1a6,	// (0x000a9074) bg_popup_call2_in_pane_cp01

0x9d2d,	// (0x000a6bfb) call_type_pane_cp02

0xc1ee,	// (0x000a90bc) popup_call2_audio_out_window_g1_ParamLimits

0xc1ee,	// (0x000a90bc) popup_call2_audio_out_window_g1

0xc21a,	// (0x000a90e8) popup_call2_audio_out_window_g2_ParamLimits

0xc21a,	// (0x000a90e8) popup_call2_audio_out_window_g2

0xc242,	// (0x000a9110) popup_call2_audio_out_window_g3_ParamLimits

0xc242,	// (0x000a9110) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000ac409) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000ac409) popup_call2_audio_out_window_g

0xc27d,	// (0x000a914b) popup_call2_audio_out_window_t1_ParamLimits

0xc27d,	// (0x000a914b) popup_call2_audio_out_window_t1

0xc2dc,	// (0x000a91aa) popup_call2_audio_out_window_t2_ParamLimits

0xc2dc,	// (0x000a91aa) popup_call2_audio_out_window_t2

0xc330,	// (0x000a91fe) popup_call2_audio_out_window_t3_ParamLimits

0xc330,	// (0x000a91fe) popup_call2_audio_out_window_t3

0xc346,	// (0x000a9214) popup_call2_audio_out_window_t4_ParamLimits

0xc346,	// (0x000a9214) popup_call2_audio_out_window_t4

0xc35c,	// (0x000a922a) popup_call2_audio_out_window_t5_ParamLimits

0xc35c,	// (0x000a922a) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000ac412) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000ac412) popup_call2_audio_out_window_t

0xc3c0,	// (0x000a928e) bg_popup_call2_in_pane_ParamLimits

0xc3c0,	// (0x000a928e) bg_popup_call2_in_pane

0xc41c,	// (0x000a92ea) popup_call2_audio_in_window_g1_ParamLimits

0xc41c,	// (0x000a92ea) popup_call2_audio_in_window_g1

0xc454,	// (0x000a9322) popup_call2_audio_in_window_g2_ParamLimits

0xc454,	// (0x000a9322) popup_call2_audio_in_window_g2

0xc48c,	// (0x000a935a) popup_call2_audio_in_window_g3_ParamLimits

0xc48c,	// (0x000a935a) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000ac41f) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000ac41f) popup_call2_audio_in_window_g

0xc4e4,	// (0x000a93b2) popup_call2_audio_in_window_t1_ParamLimits

0xc4e4,	// (0x000a93b2) popup_call2_audio_in_window_t1

0xc564,	// (0x000a9432) popup_call2_audio_in_window_t2_ParamLimits

0xc564,	// (0x000a9432) popup_call2_audio_in_window_t2

0xc5e4,	// (0x000a94b2) popup_call2_audio_in_window_t3_ParamLimits

0xc5e4,	// (0x000a94b2) popup_call2_audio_in_window_t3

0xc5fe,	// (0x000a94cc) popup_call2_audio_in_window_t4_ParamLimits

0xc5fe,	// (0x000a94cc) popup_call2_audio_in_window_t4

0xc610,	// (0x000a94de) popup_call2_audio_in_window_t5_ParamLimits

0xc610,	// (0x000a94de) popup_call2_audio_in_window_t5

0xc625,	// (0x000a94f3) popup_call2_audio_in_window_t6_ParamLimits

0xc625,	// (0x000a94f3) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000ac428) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000ac428) popup_call2_audio_in_window_t

0xa7cd,	// (0x000a769b) bg_popup_call2_in_pane_g1

0xc73e,	// (0x000a960c) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000ac490) popup_cale_lunar_info_window_t

0xa7d5,	// (0x000a76a3) bg_popup_call2_rect_pane_ParamLimits

0xa7d5,	// (0x000a76a3) bg_popup_call2_rect_pane

0xa051,	// (0x000a6f1f) call2_cli_visual_graphic_pane

0xa051,	// (0x000a6f1f) call2_cli_visual_text_pane

0x46b0,	// (0x000a157e) smil_status_volume_pane_g3

0x0002,

0xa8ef,	// (0x000a77bd) call2_cli_visual_graphic_pane_g1

0xa8ef,	// (0x000a77bd) call2_cli_visual_graphic_pane_g2

0xa8ef,	// (0x000a77bd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000ac435) call2_cli_visual_graphic_pane_g

0xc63a,	// (0x000a9508) bg_popup_call2_rect_pane_g1

0xa98d,	// (0x000a785b) bg_popup_call2_rect_pane_g2

0xc642,	// (0x000a9510) bg_popup_call2_rect_pane_g3

0xc64a,	// (0x000a9518) bg_popup_call2_rect_pane_g4

0xc652,	// (0x000a9520) bg_popup_call2_rect_pane_g5

0xc65a,	// (0x000a9528) bg_popup_call2_rect_pane_g6

0xc662,	// (0x000a9530) bg_popup_call2_rect_pane_g7

0xc66a,	// (0x000a9538) bg_popup_call2_rect_pane_g8

0xc672,	// (0x000a9540) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000ac43c) bg_popup_call2_rect_pane_g

0xc67a,	// (0x000a9548) bg_popup_call2_bubble_pane_g1

0xc682,	// (0x000a9550) bg_popup_call2_bubble_pane_g2

0xc68a,	// (0x000a9558) bg_popup_call2_bubble_pane_g3

0xc692,	// (0x000a9560) bg_popup_call2_bubble_pane_g4

0xc69a,	// (0x000a9568) bg_popup_call2_bubble_pane_g5

0xc6a2,	// (0x000a9570) bg_popup_call2_bubble_pane_g6

0xc6aa,	// (0x000a9578) bg_popup_call2_bubble_pane_g7

0xc6b2,	// (0x000a9580) bg_popup_call2_bubble_pane_g8

0xc6ba,	// (0x000a9588) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000ac44f) bg_popup_call2_bubble_pane_g

0x13e0,	// (0x0009e2ae) aid_cale_week_size_cell_pane

0x1d31,	// (0x0009ebff) aid_cams_cif_uncrop_pane_ParamLimits

0x1d31,	// (0x0009ebff) aid_cams_cif_uncrop_pane

0x1e8e,	// (0x0009ed5c) aid_cams_size_cell_ParamLimits

0x1e8e,	// (0x0009ed5c) aid_cams_size_cell

0x1e9a,	// (0x0009ed68) grid_cams_pane_ParamLimits

0x1ea8,	// (0x0009ed76) linegrid_cams_pane_ParamLimits

0x2089,	// (0x0009ef57) call_video_pane_t1

0x20a6,	// (0x0009ef74) call_video_pane_t2

0x0001,

0xf26e,	// (0x000ac13c) call_video_pane_t

0x2572,	// (0x0009f440) aid_cale_month_size_cell_pane_ParamLimits

0x2572,	// (0x0009f440) aid_cale_month_size_cell_pane

0xf60b,	// (0x000ac4d9) smil_status_volume_pane_g

0x46bd,	// (0x000a158b) volume_smil_pane_ParamLimits

0x9bff,	// (0x000a6acd) aid_popup2_width_pane

0x12d4,	// (0x0009e1a2) cell_qdial_pane_g4_ParamLimits

0x12d4,	// (0x0009e1a2) cell_qdial_pane_g4

0x35a3,	// (0x000a0471) aid_blid_cardinal_pane_ParamLimits

0x35b3,	// (0x000a0481) aid_blid_destination_pane_ParamLimits

0x35b3,	// (0x000a0481) aid_blid_destination_pane

0xa7d5,	// (0x000a76a3) bg_popup_call_poc_act_pane_ParamLimits

0xa7d5,	// (0x000a76a3) bg_popup_call_poc_act_pane

0xa7d5,	// (0x000a76a3) bg_popup_call_poc_inact_pane_ParamLimits

0xa7d5,	// (0x000a76a3) bg_popup_call_poc_inact_pane

0xc6c2,	// (0x000a9590) bg_popup_call_poc_act_pane_g1

0xc6ca,	// (0x000a9598) bg_popup_call_poc_act_pane_g2

0xc6d2,	// (0x000a95a0) bg_popup_call_poc_act_pane_g3

0xc692,	// (0x000a9560) bg_popup_call_poc_act_pane_g4

0xc69a,	// (0x000a9568) bg_popup_call_poc_act_pane_g5

0xc6da,	// (0x000a95a8) bg_popup_call_poc_act_pane_g6

0xc6aa,	// (0x000a9578) bg_popup_call_poc_act_pane_g7

0xc6e2,	// (0x000a95b0) bg_popup_call_poc_act_pane_g8

0xa051,	// (0x000a6f1f) main_usb_pane

0xc84b,	// (0x000a9719) popup_cale_lunar_info_window

0x23be,	// (0x0009f28c) im_reading_pane_t1_ParamLimits

0xab55,	// (0x000a7a23) list_im_pane_ParamLimits

0xab66,	// (0x000a7a34) scroll_pane_cp07_ParamLimits

0xa051,	// (0x000a6f1f) grid_highlight_pane_cp012

0xa7d5,	// (0x000a76a3) mup_scale_pane_ParamLimits

0xb161,	// (0x000a802f) main_usb_pane_g1_ParamLimits

0xb161,	// (0x000a802f) main_usb_pane_g1

0x4251,	// (0x000a111f) main_usb_pane_g2_ParamLimits

0x4251,	// (0x000a111f) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000ac479) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000ac479) main_usb_pane_g

0x425d,	// (0x000a112b) main_usb_pane_t1_ParamLimits

0x425d,	// (0x000a112b) main_usb_pane_t1

0x426f,	// (0x000a113d) main_usb_pane_t2_ParamLimits

0x426f,	// (0x000a113d) main_usb_pane_t2

0x4281,	// (0x000a114f) main_usb_pane_t3_ParamLimits

0x4281,	// (0x000a114f) main_usb_pane_t3

0x4293,	// (0x000a1161) main_usb_pane_t4_ParamLimits

0x4293,	// (0x000a1161) main_usb_pane_t4

0x42a5,	// (0x000a1173) main_usb_pane_t5_ParamLimits

0x42a5,	// (0x000a1173) main_usb_pane_t5

0x42b7,	// (0x000a1185) main_usb_pane_t6_ParamLimits

0x42b7,	// (0x000a1185) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000ac47e) main_usb_pane_t_ParamLimits

0x3542,	// (0x000a0410) aid_text_placing

0x354d,	// (0x000a041b) main_location2_pane_t1_ParamLimits

0x3563,	// (0x000a0431) main_location2_pane_t2_ParamLimits

0x3579,	// (0x000a0447) main_location2_pane_t3_ParamLimits

0x358f,	// (0x000a045d) main_location2_pane_t4_ParamLimits

0x358f,	// (0x000a045d) main_location2_pane_t4

0xf3cf,	// (0x000ac29d) main_location2_pane_t_ParamLimits

0xa811,	// (0x000a76df) find_pinb_pane_g2_ParamLimits

0xa811,	// (0x000a76df) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000abfed) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000abfed) find_pinb_pane_g

0xa81d,	// (0x000a76eb) find_pinb_pane_t1_ParamLimits

0xa82f,	// (0x000a76fd) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000abff2) find_pinb_pane_t_ParamLimits

0xa051,	// (0x000a6f1f) main_call3_pane

0x2af1,	// (0x0009f9bf) cale_month_day_heading_pane_t1_ParamLimits

0x2b73,	// (0x0009fa41) cale_month_day_heading_pane_t2_ParamLimits

0x2c00,	// (0x0009face) cale_month_day_heading_pane_t3_ParamLimits

0x2c8d,	// (0x0009fb5b) cale_month_day_heading_pane_t4_ParamLimits

0x2d1a,	// (0x0009fbe8) cale_month_day_heading_pane_t5_ParamLimits

0x2daf,	// (0x0009fc7d) cale_month_day_heading_pane_t6_ParamLimits

0x2e4c,	// (0x0009fd1a) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000ac174) cale_month_day_heading_pane_t_ParamLimits

0x3122,	// (0x0009fff0) smil_status_volume_pane

0x3e0f,	// (0x000a0cdd) postcard_address_pane_ParamLimits

0x3e0f,	// (0x000a0cdd) postcard_address_pane

0x3e1d,	// (0x000a0ceb) postcard_message_pane_ParamLimits

0x3e1d,	// (0x000a0ceb) postcard_message_pane

0x4227,	// (0x000a10f5) call2_cli_visual_pane_t1_ParamLimits

0x4227,	// (0x000a10f5) call2_cli_visual_pane_t1

0x481c,	// (0x000a16ea) postcard_message_pane_t1_ParamLimits

0x481c,	// (0x000a16ea) postcard_message_pane_t1

0x4805,	// (0x000a16d3) postcard_address_pane_t1_ParamLimits

0x4805,	// (0x000a16d3) postcard_address_pane_t1

0x47f6,	// (0x000a16c4) popup_call3_audio_in_window_ParamLimits

0x47f6,	// (0x000a16c4) popup_call3_audio_in_window

0x46d4,	// (0x000a15a2) bg_popup_call3_in_pane_ParamLimits

0x46d4,	// (0x000a15a2) bg_popup_call3_in_pane

0x473c,	// (0x000a160a) popup_call3_audio_in_window_g1_ParamLimits

0x473c,	// (0x000a160a) popup_call3_audio_in_window_g1

0x4754,	// (0x000a1622) popup_call3_audio_in_window_g2_ParamLimits

0x4754,	// (0x000a1622) popup_call3_audio_in_window_g2

0x476c,	// (0x000a163a) popup_call3_audio_in_window_g3_ParamLimits

0x476c,	// (0x000a163a) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000ac4e0) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000ac4e0) popup_call3_audio_in_window_g

0x4794,	// (0x000a1662) popup_call3_audio_in_window_t1_ParamLimits

0x4794,	// (0x000a1662) popup_call3_audio_in_window_t1

0x47bc,	// (0x000a168a) popup_call3_audio_in_window_t2_ParamLimits

0x47bc,	// (0x000a168a) popup_call3_audio_in_window_t2

0x47e4,	// (0x000a16b2) popup_call3_audio_in_window_t3_ParamLimits

0x47e4,	// (0x000a16b2) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000ac4e9) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000ac4e9) popup_call3_audio_in_window_t

0xaa50,	// (0x000a791e) bg_popup_call3_rect_pane

0xc63a,	// (0x000a9508) bg_popup_call3_rect_pane_g1

0xa98d,	// (0x000a785b) bg_popup_call3_rect_pane_g2

0xc642,	// (0x000a9510) bg_popup_call3_rect_pane_g3

0xc64a,	// (0x000a9518) bg_popup_call3_rect_pane_g4

0xc652,	// (0x000a9520) bg_popup_call3_rect_pane_g5

0xc65a,	// (0x000a9528) bg_popup_call3_rect_pane_g6

0xc662,	// (0x000a9530) bg_popup_call3_rect_pane_g7

0x39e9,	// (0x000a08b7) mup_visualizer_osc_pane

0xb4dd,	// (0x000a83ab) mup_visualizer_spec_pane

0x46f4,	// (0x000a15c2) call3_video_qcif_pane_ParamLimits

0x46f4,	// (0x000a15c2) call3_video_qcif_pane

0x4706,	// (0x000a15d4) call3_video_qcif_uncrop_pane_ParamLimits

0x4706,	// (0x000a15d4) call3_video_qcif_uncrop_pane

0x4716,	// (0x000a15e4) call3_video_subqcif_pane_ParamLimits

0x4716,	// (0x000a15e4) call3_video_subqcif_pane

0x472a,	// (0x000a15f8) call3_video_subqcif_uncrop_pane_ParamLimits

0x472a,	// (0x000a15f8) call3_video_subqcif_uncrop_pane

0x4784,	// (0x000a1652) popup_call3_audio_in_window_g4_ParamLimits

0x4784,	// (0x000a1652) popup_call3_audio_in_window_g4

0x469f,	// (0x000a156d) mup_spec_half_pane

0x46a8,	// (0x000a1576) mup_spec_half_pane_cp

0xc8e6,	// (0x000a97b4) mup_osc_middle_pane

0xc8ef,	// (0x000a97bd) mup_visualizer_osc_pane_g1

0x467f,	// (0x000a154d) mup_spec_bar_pane_ParamLimits

0x467f,	// (0x000a154d) mup_spec_bar_pane

0xc8d3,	// (0x000a97a1) mup_spec_bar_pane_g1

0xc8dd,	// (0x000a97ab) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000ac4d4) mup_spec_bar_pane_g

0x13e0,	// (0x0009e2ae) aid_cale_week_size_cell_pane_ParamLimits

0x13fa,	// (0x0009e2c8) bg_cale_heading_pane_ParamLimits

0x1423,	// (0x0009e2f1) bg_cale_pane_cp01_ParamLimits

0x1445,	// (0x0009e313) cale_week_corner_pane_ParamLimits

0x1464,	// (0x0009e332) cale_week_day_heading_pane_ParamLimits

0x1492,	// (0x0009e360) cale_week_scroll_pane_g1_ParamLimits

0x14b6,	// (0x0009e384) cale_week_scroll_pane_g2_ParamLimits

0x14ce,	// (0x0009e39c) cale_week_scroll_pane_g3_ParamLimits

0x14e6,	// (0x0009e3b4) cale_week_scroll_pane_g4_ParamLimits

0x14fe,	// (0x0009e3cc) cale_week_scroll_pane_g5_ParamLimits

0x1516,	// (0x0009e3e4) cale_week_scroll_pane_g6_ParamLimits

0x1536,	// (0x0009e404) cale_week_scroll_pane_g7_ParamLimits

0x1556,	// (0x0009e424) cale_week_scroll_pane_g8_ParamLimits

0x1576,	// (0x0009e444) cale_week_scroll_pane_g9_ParamLimits

0x1593,	// (0x0009e461) cale_week_scroll_pane_g10_ParamLimits

0x15b0,	// (0x0009e47e) cale_week_scroll_pane_g11_ParamLimits

0x15cd,	// (0x0009e49b) cale_week_scroll_pane_g12_ParamLimits

0x15ea,	// (0x0009e4b8) cale_week_scroll_pane_g13_ParamLimits

0x160f,	// (0x0009e4dd) cale_week_scroll_pane_g14_ParamLimits

0x1638,	// (0x0009e506) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000ac07e) cale_week_scroll_pane_g_ParamLimits

0x1681,	// (0x0009e54f) cale_week_time_pane_ParamLimits

0x16a1,	// (0x0009e56f) grid_cale_week_pane_ParamLimits

0xa9c1,	// (0x000a788f) listscroll_cale_week_pane_t1

0xa9d3,	// (0x000a78a1) scroll_pane_cp08_ParamLimits

0x25df,	// (0x0009f4ad) cale_month_corner_pane_ParamLimits

0xad92,	// (0x000a7c60) cale_month_pane_t1

0x2a83,	// (0x0009f951) cale_month_week_pane_ParamLimits

0xb161,	// (0x000a802f) popup_call_status_window_g1_ParamLimits

0x334b,	// (0x000a0219) popup_call_status_window_g2_ParamLimits

0x3357,	// (0x000a0225) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000ac224) popup_call_status_window_g_ParamLimits

0xb1c8,	// (0x000a8096) aid_call2_pane

0x3c84,	// (0x000a0b52) msg_header_pane_g1

0x3e0f,	// (0x000a0cdd) postcard_address2_pane_ParamLimits

0x3e0f,	// (0x000a0cdd) postcard_address2_pane

0x3e1d,	// (0x000a0ceb) postcard_message2_pane_ParamLimits

0x3e1d,	// (0x000a0ceb) postcard_message2_pane

0x4626,	// (0x000a14f4) message2_row_pane_ParamLimits

0x4626,	// (0x000a14f4) message2_row_pane

0x4640,	// (0x000a150e) address2_row_pane_ParamLimits

0x4640,	// (0x000a150e) address2_row_pane

0xc8a1,	// (0x000a976f) postcard_message2_row_pane_g1

0xc8a9,	// (0x000a9777) postcard_message2_row_pane_t1

0xc8a1,	// (0x000a976f) address2_row_pane_g1

0xc8a9,	// (0x000a9777) address2_row_pane_t1

0x1c09,	// (0x0009ead7) aid_size_cell_vorec

0xa051,	// (0x000a6f1f) main_rss_pane

0x4653,	// (0x000a1521) rss_list_single_pane_ParamLimits

0x4653,	// (0x000a1521) rss_list_single_pane

0xc8b7,	// (0x000a9785) rss_list_single_pane_t1

0xc8c5,	// (0x000a9793) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000ac4cf) rss_list_single_pane_t

0xa051,	// (0x000a6f1f) main_camera2_pane

0xa051,	// (0x000a6f1f) main_video2_pane

0x4880,	// (0x000a174e) cams_zoom_pane_cp2_ParamLimits

0x4880,	// (0x000a174e) cams_zoom_pane_cp2

0x488c,	// (0x000a175a) image2_vga_pane_ParamLimits

0x488c,	// (0x000a175a) image2_vga_pane

0x489b,	// (0x000a1769) main_camera2_pane_g1_ParamLimits

0x489b,	// (0x000a1769) main_camera2_pane_g1

0x48a7,	// (0x000a1775) main_camera2_pane_g2_ParamLimits

0x48a7,	// (0x000a1775) main_camera2_pane_g2

0x48b3,	// (0x000a1781) main_camera2_pane_g3_ParamLimits

0x48b3,	// (0x000a1781) main_camera2_pane_g3

0x48bf,	// (0x000a178d) main_camera2_pane_g4_ParamLimits

0x48bf,	// (0x000a178d) main_camera2_pane_g4

0x48cb,	// (0x000a1799) main_camera2_pane_g5_ParamLimits

0x48cb,	// (0x000a1799) main_camera2_pane_g5

0x48d7,	// (0x000a17a5) main_camera2_pane_g6_ParamLimits

0x48d7,	// (0x000a17a5) main_camera2_pane_g6

0x48e3,	// (0x000a17b1) main_camera2_pane_g7_ParamLimits

0x48e3,	// (0x000a17b1) main_camera2_pane_g7

0x48ef,	// (0x000a17bd) main_camera2_pane_g8_ParamLimits

0x48ef,	// (0x000a17bd) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000ac4f0) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000ac4f0) main_camera2_pane_g

0x4907,	// (0x000a17d5) main_camera2_pane_t1_ParamLimits

0x4907,	// (0x000a17d5) main_camera2_pane_t1

0x4919,	// (0x000a17e7) main_camera2_pane_t2_ParamLimits

0x4919,	// (0x000a17e7) main_camera2_pane_t2

0x492b,	// (0x000a17f9) main_camera2_pane_t3_ParamLimits

0x492b,	// (0x000a17f9) main_camera2_pane_t3

0x493d,	// (0x000a180b) main_camera2_pane_t4_ParamLimits

0x493d,	// (0x000a180b) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000ac503) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000ac503) main_camera2_pane_t

0x499a,	// (0x000a1868) cams_zoom_pane_cp4_ParamLimits

0x499a,	// (0x000a1868) cams_zoom_pane_cp4

0x49aa,	// (0x000a1878) image2_cif_pane_ParamLimits

0x49aa,	// (0x000a1878) image2_cif_pane

0x49bf,	// (0x000a188d) image2_subqcif_pane_ParamLimits

0x49bf,	// (0x000a188d) image2_subqcif_pane

0x49ce,	// (0x000a189c) main_video2_pane_g1_ParamLimits

0x49ce,	// (0x000a189c) main_video2_pane_g1

0x49e0,	// (0x000a18ae) main_video2_pane_g2_ParamLimits

0x49e0,	// (0x000a18ae) main_video2_pane_g2

0x49f0,	// (0x000a18be) main_video2_pane_g3_ParamLimits

0x49f0,	// (0x000a18be) main_video2_pane_g3

0x4a00,	// (0x000a18ce) main_video2_pane_g4_ParamLimits

0x4a00,	// (0x000a18ce) main_video2_pane_g4

0x4a10,	// (0x000a18de) main_video2_pane_g5_ParamLimits

0x4a10,	// (0x000a18de) main_video2_pane_g5

0x4a20,	// (0x000a18ee) main_video2_pane_g6_ParamLimits

0x4a20,	// (0x000a18ee) main_video2_pane_g6

0x0005,

0xf644,	// (0x000ac512) main_video2_pane_g_ParamLimits

0xf644,	// (0x000ac512) main_video2_pane_g

0x4a32,	// (0x000a1900) main_video2_pane_t1_ParamLimits

0x4a32,	// (0x000a1900) main_video2_pane_t1

0x4a4c,	// (0x000a191a) main_video2_pane_t2_ParamLimits

0x4a4c,	// (0x000a191a) main_video2_pane_t2

0x4a72,	// (0x000a1940) main_video2_pane_t3_ParamLimits

0x4a72,	// (0x000a1940) main_video2_pane_t3

0x0002,

0xf651,	// (0x000ac51f) main_video2_pane_t_ParamLimits

0xf651,	// (0x000ac51f) main_video2_pane_t

0x436e,	// (0x000a123c) call_muted_g2

0x0001,

0xf5f3,	// (0x000ac4c1) call_muted_g

0xa051,	// (0x000a6f1f) main_mup2_pane

0xc926,	// (0x000a97f4) main_mup2_pane_g1_ParamLimits

0xc926,	// (0x000a97f4) main_mup2_pane_g1

0x4a98,	// (0x000a1966) main_mup2_pane_g2_ParamLimits

0x4a98,	// (0x000a1966) main_mup2_pane_g2

0x4d2a,	// (0x000a1bf8) main_mup_pane_g13_cp1

0x4d32,	// (0x000a1c00) mup_volume_pane_cp1

0x4aba,	// (0x000a1988) main_mup2_pane_g4_ParamLimits

0x4aba,	// (0x000a1988) main_mup2_pane_g4

0x4acf,	// (0x000a199d) main_mup2_pane_g5_ParamLimits

0x4acf,	// (0x000a199d) main_mup2_pane_g5

0x4ae4,	// (0x000a19b2) main_mup2_pane_g6_ParamLimits

0x4ae4,	// (0x000a19b2) main_mup2_pane_g6

0x4af9,	// (0x000a19c7) main_mup2_pane_g7_ParamLimits

0x4af9,	// (0x000a19c7) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000ac526) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000ac526) main_mup2_pane_g

0x4b15,	// (0x000a19e3) main_mup2_pane_t1_ParamLimits

0x4b15,	// (0x000a19e3) main_mup2_pane_t1

0x4b2c,	// (0x000a19fa) main_mup2_pane_t2_ParamLimits

0x4b2c,	// (0x000a19fa) main_mup2_pane_t2

0x4b43,	// (0x000a1a11) main_mup2_pane_t3_ParamLimits

0x4b43,	// (0x000a1a11) main_mup2_pane_t3

0x4b5a,	// (0x000a1a28) main_mup2_pane_t4_ParamLimits

0x4b5a,	// (0x000a1a28) main_mup2_pane_t4

0x4b74,	// (0x000a1a42) main_mup2_pane_t5_ParamLimits

0x4b74,	// (0x000a1a42) main_mup2_pane_t5

0x4b8e,	// (0x000a1a5c) main_mup2_pane_t6_ParamLimits

0x4b8e,	// (0x000a1a5c) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000ac535) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000ac535) main_mup2_pane_t

0x4bc6,	// (0x000a1a94) mup2_visualizer_pane_ParamLimits

0x4bc6,	// (0x000a1a94) mup2_visualizer_pane

0x4bfc,	// (0x000a1aca) mup_progress_pane_cp_ParamLimits

0x4bfc,	// (0x000a1aca) mup_progress_pane_cp

0x4d15,	// (0x000a1be3) mup_volume_pane_cp_ParamLimits

0x4d15,	// (0x000a1be3) mup_volume_pane_cp

0x4c15,	// (0x000a1ae3) mup2_visualizer_pane_g1_ParamLimits

0x4c15,	// (0x000a1ae3) mup2_visualizer_pane_g1

0xc932,	// (0x000a9800) mup2_visualizer_pane_g2_ParamLimits

0xc932,	// (0x000a9800) mup2_visualizer_pane_g2

0x4c2a,	// (0x000a1af8) mup2_visualizer_pane_g3_ParamLimits

0x4c2a,	// (0x000a1af8) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000ac542) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000ac542) mup2_visualizer_pane_g

0xb706,	// (0x000a85d4) aid_size_cell_fmradio

0x4484,	// (0x000a1352) aid_height_parent_landcape

0xabe4,	// (0x000a7ab2) wml_content_pane_cp

0xabec,	// (0x000a7aba) wml_tabs_pane

0xabf5,	// (0x000a7ac3) popup_wml_miniature_window

0xabfd,	// (0x000a7acb) scroll_pane_cp021

0xac11,	// (0x000a7adf) wml_content_pane_comp8

0xa051,	// (0x000a6f1f) bg_popup_sub_pane_cp05

0xc950,	// (0x000a981e) popup_wml_miniature_window_g1

0xc958,	// (0x000a9826) wml_miniature_view_pane

0x4c38,	// (0x000a1b06) aid_size_wml_view

0x4c40,	// (0x000a1b0e) wml_miniature_view_pane_g1

0x4c49,	// (0x000a1b17) wml_miniature_view_pane_g2

0x4c52,	// (0x000a1b20) wml_miniature_view_pane_g3

0x4c5a,	// (0x000a1b28) wml_miniature_view_pane_g4

0x4c62,	// (0x000a1b30) wml_miniature_view_pane_g5

0x4c6a,	// (0x000a1b38) wml_miniature_view_pane_g6

0x4c72,	// (0x000a1b40) wml_miniature_view_pane_g7

0x4c7a,	// (0x000a1b48) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000ac549) wml_miniature_view_pane_g

0xc926,	// (0x000a97f4) background_graphic_ParamLimits

0xc926,	// (0x000a97f4) background_graphic

0xc960,	// (0x000a982e) wml_tabs_2_pane

0xc969,	// (0x000a9837) wml_tabs_3_pane_ParamLimits

0xc969,	// (0x000a9837) wml_tabs_3_pane

0xc97b,	// (0x000a9849) wml_tabs_4_pane_ParamLimits

0xc97b,	// (0x000a9849) wml_tabs_4_pane

0xc991,	// (0x000a985f) wml_tabs_5_pane_ParamLimits

0xc991,	// (0x000a985f) wml_tabs_5_pane

0xc9ab,	// (0x000a9879) wml_tabs_pane_g2_ParamLimits

0xc9ab,	// (0x000a9879) wml_tabs_pane_g2

0xc9bf,	// (0x000a988d) wml_tabs_pane_g3_ParamLimits

0xc9bf,	// (0x000a988d) wml_tabs_pane_g3

0x4c82,	// (0x000a1b50) wml_tabs_2_active_pane_ParamLimits

0x4c82,	// (0x000a1b50) wml_tabs_2_active_pane

0x4c94,	// (0x000a1b62) wml_tabs_2_passive_pane_ParamLimits

0x4c94,	// (0x000a1b62) wml_tabs_2_passive_pane

0x4ca6,	// (0x000a1b74) wml_tabs_3_active_pane_cp_ParamLimits

0x4ca6,	// (0x000a1b74) wml_tabs_3_active_pane_cp

0x4cb9,	// (0x000a1b87) wml_tabs_3_passive_pane_ParamLimits

0x4cb9,	// (0x000a1b87) wml_tabs_3_passive_pane

0x4cca,	// (0x000a1b98) wml_tabs_3_passive_pane_cp_ParamLimits

0x4cca,	// (0x000a1b98) wml_tabs_3_passive_pane_cp

0x4cdf,	// (0x000a1bad) tabs_4_active_pane

0x4ce7,	// (0x000a1bb5) tabs_4_passive_pane

0x4cef,	// (0x000a1bbd) tabs_4_passive_pane_cp

0x4cf7,	// (0x000a1bc5) tabs_4_passive_pane_cp2

0x4249,	// (0x000a1117) aid_height_text

0x39b2,	// (0x000a0880) mup_volume_cont_pane_ParamLimits

0x39b2,	// (0x000a0880) mup_volume_cont_pane

0x0f20,	// (0x0009ddee) aid_size_cell_pinb

0x0f2a,	// (0x0009ddf8) aid_size_list_pinb

0x4be5,	// (0x000a1ab3) mup2_volume_cont_pane_ParamLimits

0x4be5,	// (0x000a1ab3) mup2_volume_cont_pane

0x4d01,	// (0x000a1bcf) mup2_volume_cont_pane_g1_ParamLimits

0x4d01,	// (0x000a1bcf) mup2_volume_cont_pane_g1

0x0b82,	// (0x0009da50) aid_size_cell_touch_ParamLimits

0x0b82,	// (0x0009da50) aid_size_cell_touch

0x0e0a,	// (0x0009dcd8) touch_pane_ParamLimits

0x0e0a,	// (0x0009dcd8) touch_pane

0x9bed,	// (0x000a6abb) main_rss2_pane

0xc9dc,	// (0x000a98aa) listscroll_rss2_pane

0xc9e5,	// (0x000a98b3) rss2_navigation_pane

0xc9ed,	// (0x000a98bb) list_rss2_pane

0xb2ec,	// (0x000a81ba) scroll_pane_cp22

0xc9f5,	// (0x000a98c3) rss2_navigation_pane_g1

0xc9fe,	// (0x000a98cc) rss2_navigation_pane_g2

0xca06,	// (0x000a98d4) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000ac55a) rss2_navigation_pane_g

0xca0e,	// (0x000a98dc) rss2_navigation_pane_t1

0x4d3a,	// (0x000a1c08) rss2_list_single_pane_ParamLimits

0x4d3a,	// (0x000a1c08) rss2_list_single_pane

0xca1c,	// (0x000a98ea) rss2_list_single_pane_t2

0xca2a,	// (0x000a98f8) rss2_list_single_pane_t3_ParamLimits

0xca2a,	// (0x000a98f8) rss2_list_single_pane_t3

0xca47,	// (0x000a9915) rss2_list_single_pane_t4

0x310c,	// (0x0009ffda) smil_status_pane_g1

0xa272,	// (0x000a7140) main_image2_pane_ParamLimits

0xa272,	// (0x000a7140) main_image2_pane

0x48fb,	// (0x000a17c9) main_camera2_pane_g9_ParamLimits

0x48fb,	// (0x000a17c9) main_camera2_pane_g9

0x494f,	// (0x000a181d) main_camera2_pane_t5_ParamLimits

0x494f,	// (0x000a181d) main_camera2_pane_t5

0x4961,	// (0x000a182f) main_camera2_pane_t6_ParamLimits

0x4961,	// (0x000a182f) main_camera2_pane_t6

0x4d5d,	// (0x000a1c2b) main_image2_pane_g1_ParamLimits

0x4d5d,	// (0x000a1c2b) main_image2_pane_g1

0x3fe6,	// (0x000a0eb4) smil2_video_pane_ParamLimits

0x3fe6,	// (0x000a0eb4) smil2_video_pane

0x0bc6,	// (0x0009da94) aid_zoom_text_primary_cp

0x9c34,	// (0x000a6b02) popup_preview_fixed_window

0xab4d,	// (0x000a7a1b) im_reading_pane_g1

0x4845,	// (0x000a1713) cams2_bc_adjust_pane_cp_ParamLimits

0x4845,	// (0x000a1713) cams2_bc_adjust_pane_cp

0x498c,	// (0x000a185a) cams2_bc_adjust_pane_ParamLimits

0x498c,	// (0x000a185a) cams2_bc_adjust_pane

0xd12b,	// (0x000a9ff9) cams2_bc_adjust_pane_g1

0x4d69,	// (0x000a1c37) cams2_slider_pane

0x4d72,	// (0x000a1c40) cams2_slider_pane_g1

0x4d7b,	// (0x000a1c49) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000ac561) cams2_slider_pane_g

0x1025,	// (0x0009def3) calc_display_pane_ParamLimits

0x1043,	// (0x0009df11) calc_paper_pane_ParamLimits

0x105f,	// (0x0009df2d) grid_calc_pane_ParamLimits

0x33b5,	// (0x000a0283) popup_clock_digital_window_t1_ParamLimits

0xb6a3,	// (0x000a8571) main_image_pane_t1

0x100b,	// (0x0009ded9) aid_size_cell_calc_ParamLimits

0x100b,	// (0x0009ded9) aid_size_cell_calc

0x44b6,	// (0x000a1384) popup_blid_sat_info2_window_ParamLimits

0x44b6,	// (0x000a1384) popup_blid_sat_info2_window

0xca5d,	// (0x000a992b) aid_size_cell_blid

0xca65,	// (0x000a9933) bg_popup_window_pane_cp07

0xca88,	// (0x000a9956) grid_popup_blid_pane

0xca92,	// (0x000a9960) heading_pane_cp05_ParamLimits

0xca92,	// (0x000a9960) heading_pane_cp05

0xcb5c,	// (0x000a9a2a) cell_popup_blid_pane_ParamLimits

0xcb5c,	// (0x000a9a2a) cell_popup_blid_pane

0xcb86,	// (0x000a9a54) cell_popup_blid_pane_g1

0xcb8e,	// (0x000a9a5c) cell_popup_blid_pane_t1

0x4bab,	// (0x000a1a79) mup2_indicator_pane_ParamLimits

0x4bab,	// (0x000a1a79) mup2_indicator_pane

0xaa50,	// (0x000a791e) mup2_visualizer_osc_pane

0xc93e,	// (0x000a980c) mup2_visualizer_spec_pane_ParamLimits

0xc93e,	// (0x000a980c) mup2_visualizer_spec_pane

0x4d95,	// (0x000a1c63) mup2_spec_half_pane

0x4d9e,	// (0x000a1c6c) mup2_spec_half_pane_cp

0x4da8,	// (0x000a1c76) mup2_spec_bar_pane_ParamLimits

0x4da8,	// (0x000a1c76) mup2_spec_bar_pane

0xc8d3,	// (0x000a97a1) mup2_spec_bar_pane_g1

0xc8dd,	// (0x000a97ab) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000ac4d4) mup2_spec_bar_pane_g

0x4dc7,	// (0x000a1c95) mup2_osc_middle_pane

0xc8ef,	// (0x000a97bd) mup2_visualizer_osc_pane_g1

0x9c5e,	// (0x000a6b2c) popup_number_entry_window_t1_ParamLimits

0x9c71,	// (0x000a6b3f) popup_number_entry_window_t2_ParamLimits

0x9c83,	// (0x000a6b51) popup_number_entry_window_t3_ParamLimits

0x0e61,	// (0x0009dd2f) popup_number_entry_window_t5_ParamLimits

0x0e61,	// (0x0009dd2f) popup_number_entry_window_t5

0xf0ca,	// (0x000abf98) popup_number_entry_window_t_ParamLimits

0x9c95,	// (0x000a6b63) text_title_cp2_ParamLimits

0x3cd3,	// (0x000a0ba1) aid_hotspot_pointer_text2_pane

0x3d6d,	// (0x000a0c3b) main_viewer_pane_g9_ParamLimits

0x3d6d,	// (0x000a0c3b) main_viewer_pane_g9

0xad92,	// (0x000a7c60) cale_month_pane_t1_ParamLimits

0xadb8,	// (0x000a7c86) bg_cale_pane_ParamLimits

0xadd0,	// (0x000a7c9e) list_cale_pane_ParamLimits

0xade1,	// (0x000a7caf) listscroll_cale_day_pane_t1

0xadf3,	// (0x000a7cc1) scroll_pane_cp09_ParamLimits

0x39f1,	// (0x000a08bf) main_mup_eq_pane_t1_ParamLimits

0x39f1,	// (0x000a08bf) main_mup_eq_pane_t1

0x3a0d,	// (0x000a08db) main_mup_eq_pane_t2_ParamLimits

0x3a0d,	// (0x000a08db) main_mup_eq_pane_t2

0x3a29,	// (0x000a08f7) main_mup_eq_pane_t3_ParamLimits

0x3a29,	// (0x000a08f7) main_mup_eq_pane_t3

0x3a43,	// (0x000a0911) main_mup_eq_pane_t4_ParamLimits

0x3a43,	// (0x000a0911) main_mup_eq_pane_t4

0x3a5d,	// (0x000a092b) main_mup_eq_pane_t5_ParamLimits

0x3a5d,	// (0x000a092b) main_mup_eq_pane_t5

0x3a77,	// (0x000a0945) main_mup_eq_pane_t6_ParamLimits

0x3a77,	// (0x000a0945) main_mup_eq_pane_t6

0x3a8d,	// (0x000a095b) main_mup_eq_pane_t7_ParamLimits

0x3a8d,	// (0x000a095b) main_mup_eq_pane_t7

0x3aa3,	// (0x000a0971) main_mup_eq_pane_t8_ParamLimits

0x3aa3,	// (0x000a0971) main_mup_eq_pane_t8

0x3ab9,	// (0x000a0987) main_mup_eq_pane_t9_ParamLimits

0x3ab9,	// (0x000a0987) main_mup_eq_pane_t9

0x3ad5,	// (0x000a09a3) main_mup_eq_pane_t10_ParamLimits

0x3ad5,	// (0x000a09a3) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000ac323) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000ac323) main_mup_eq_pane_t

0x3b9a,	// (0x000a0a68) mup_equalizer_pane_cp5_ParamLimits

0x3bb2,	// (0x000a0a80) mup_equalizer_pane_cp6_ParamLimits

0x3bca,	// (0x000a0a98) mup_equalizer_pane_cp7_ParamLimits

0x9bed,	// (0x000a6abb) main_gallery_pane

0xc8f8,	// (0x000a97c6) smil2_volume_pane

0xc900,	// (0x000a97ce) smil_status_volume_pane_g1_ParamLimits

0xc913,	// (0x000a97e1) smil_status_volume_pane_g2_ParamLimits

0x46b0,	// (0x000a157e) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000ac4d9) smil_status_volume_pane_g_ParamLimits

0xca65,	// (0x000a9933) bg_popup_window_pane_cp07_ParamLimits

0xca73,	// (0x000a9941) blid_firmament_pane

0x4dd0,	// (0x000a1c9e) aid_size_cell_gallery_ParamLimits

0x4dd0,	// (0x000a1c9e) aid_size_cell_gallery

0x4dde,	// (0x000a1cac) grid_gallery_pane_ParamLimits

0x4dde,	// (0x000a1cac) grid_gallery_pane

0x4dee,	// (0x000a1cbc) cell_gallery_pane_ParamLimits

0x4dee,	// (0x000a1cbc) cell_gallery_pane

0xcb9c,	// (0x000a9a6a) bg_cell_gallery_focus_pane_ParamLimits

0xcb9c,	// (0x000a9a6a) bg_cell_gallery_focus_pane

0xcbae,	// (0x000a9a7c) cell_gallery_pane_g1_ParamLimits

0xcbae,	// (0x000a9a7c) cell_gallery_pane_g1

0x4e34,	// (0x000a1d02) cell_gallery_pane_g2_ParamLimits

0x4e34,	// (0x000a1d02) cell_gallery_pane_g2

0x4e41,	// (0x000a1d0f) cell_gallery_pane_g3_ParamLimits

0x4e41,	// (0x000a1d0f) cell_gallery_pane_g3

0xcbba,	// (0x000a9a88) cell_gallery_pane_g4_ParamLimits

0xcbba,	// (0x000a9a88) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000ac587) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000ac587) cell_gallery_pane_g

0xcbc6,	// (0x000a9a94) bg_cell_gallery_focus_pane_g1

0xcbce,	// (0x000a9a9c) bg_cell_gallery_focus_pane_g2

0xcbd6,	// (0x000a9aa4) bg_cell_gallery_focus_pane_g3

0xcbde,	// (0x000a9aac) bg_cell_gallery_focus_pane_g4

0xcbe6,	// (0x000a9ab4) bg_cell_gallery_focus_pane_g5

0xcbee,	// (0x000a9abc) bg_cell_gallery_focus_pane_g6

0xcbf6,	// (0x000a9ac4) bg_cell_gallery_focus_pane_g7

0xcbfe,	// (0x000a9acc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000ac590) bg_cell_gallery_focus_pane_g

0xcc06,	// (0x000a9ad4) aid_firma_cardinal

0xcc1a,	// (0x000a9ae8) blid_firmament_pane_t1

0xcc31,	// (0x000a9aff) blid_firmament_pane_t2

0xcc48,	// (0x000a9b16) blid_firmament_pane_t3

0xcc5f,	// (0x000a9b2d) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000ac5a1) blid_firmament_pane_t

0xcc76,	// (0x000a9b44) blid_sat_info_pane

0xcc86,	// (0x000a9b54) blid_sat_info_pane_g1

0xcc86,	// (0x000a9b54) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000ac5aa) blid_sat_info_pane_g

0xcc90,	// (0x000a9b5e) blid_sat_info_pane_t1

0xcc9e,	// (0x000a9b6c) smil2_volume_content_pane

0xcca7,	// (0x000a9b75) smil2_volume_pane_g1

0xccaf,	// (0x000a9b7d) smil2_volume_content_pane_g1

0xccb8,	// (0x000a9b86) smil2_volume_content_pane_g2

0xccc1,	// (0x000a9b8f) smil2_volume_content_pane_g3

0xccca,	// (0x000a9b98) smil2_volume_content_pane_g4

0xccd3,	// (0x000a9ba1) smil2_volume_content_pane_g5

0xccdc,	// (0x000a9baa) smil2_volume_content_pane_g6

0xcce5,	// (0x000a9bb3) smil2_volume_content_pane_g7

0xccee,	// (0x000a9bbc) smil2_volume_content_pane_g8

0xccf7,	// (0x000a9bc5) smil2_volume_content_pane_g9

0xcd00,	// (0x000a9bce) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000ac5af) smil2_volume_content_pane_g

0x1764,	// (0x0009e632) cale_week_day_heading_pane_t1_ParamLimits

0x17ac,	// (0x0009e67a) cale_week_day_heading_pane_t2_ParamLimits

0x17f9,	// (0x0009e6c7) cale_week_day_heading_pane_t3_ParamLimits

0x1846,	// (0x0009e714) cale_week_day_heading_pane_t4_ParamLimits

0x1893,	// (0x0009e761) cale_week_day_heading_pane_t5_ParamLimits

0x18e0,	// (0x0009e7ae) cale_week_day_heading_pane_t6_ParamLimits

0x192d,	// (0x0009e7fb) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000ac09f) cale_week_day_heading_pane_t_ParamLimits

0xa9f5,	// (0x000a78c3) bg_cale_side_pane_ParamLimits

0x1975,	// (0x0009e843) cale_week_time_pane_t1_ParamLimits

0x19b9,	// (0x0009e887) cale_week_time_pane_t2_ParamLimits

0x19fd,	// (0x0009e8cb) cale_week_time_pane_t3_ParamLimits

0x1a41,	// (0x0009e90f) cale_week_time_pane_t4_ParamLimits

0x1a85,	// (0x0009e953) cale_week_time_pane_t5_ParamLimits

0x1ac9,	// (0x0009e997) cale_week_time_pane_t6_ParamLimits

0x1b0d,	// (0x0009e9db) cale_week_time_pane_t7_ParamLimits

0x1b59,	// (0x0009ea27) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000ac0ae) cale_week_time_pane_t_ParamLimits

0x1ba7,	// (0x0009ea75) cell_cale_week_pane_g2_ParamLimits

0xa9f5,	// (0x000a78c3) bg_cale_side_pane_cp01_ParamLimits

0x2ee9,	// (0x0009fdb7) cale_month_week_pane_t1_ParamLimits

0x2f02,	// (0x0009fdd0) cale_month_week_pane_t2_ParamLimits

0x2f1b,	// (0x0009fde9) cale_month_week_pane_t3_ParamLimits

0x2f34,	// (0x0009fe02) cale_month_week_pane_t4_ParamLimits

0x2f4d,	// (0x0009fe1b) cale_month_week_pane_t5_ParamLimits

0x2f68,	// (0x0009fe36) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000ac183) cale_month_week_pane_t_ParamLimits

0x30d5,	// (0x0009ffa3) cell_cale_month_pane_g1_ParamLimits

0x9bed,	// (0x000a6abb) main_cale_event_viewer_pane

0x9bed,	// (0x000a6abb) listscroll_cale_event_viewer_pane

0xcd09,	// (0x000a9bd7) list_cale_ev_pane

0xcd11,	// (0x000a9bdf) scroll_pane_cp023

0x4e4e,	// (0x000a1d1c) field_cale_ev_pane_ParamLimits

0x4e4e,	// (0x000a1d1c) field_cale_ev_pane

0xcd1d,	// (0x000a9beb) field_cale_ev_content_pane_ParamLimits

0xcd1d,	// (0x000a9beb) field_cale_ev_content_pane

0xcd29,	// (0x000a9bf7) field_cale_ev_pane_g1_ParamLimits

0xcd29,	// (0x000a9bf7) field_cale_ev_pane_g1

0xcd35,	// (0x000a9c03) field_cale_ev_pane_g2_ParamLimits

0xcd35,	// (0x000a9c03) field_cale_ev_pane_g2

0xcd4d,	// (0x000a9c1b) field_cale_ev_pane_g3_ParamLimits

0xcd4d,	// (0x000a9c1b) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000ac5c4) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000ac5c4) field_cale_ev_pane_g

0xcd65,	// (0x000a9c33) field_cale_ev_pane_t1_ParamLimits

0xcd65,	// (0x000a9c33) field_cale_ev_pane_t1

0x4e72,	// (0x000a1d40) field_cale_ev_content_pane_t1_ParamLimits

0x4e72,	// (0x000a1d40) field_cale_ev_content_pane_t1

0xb589,	// (0x000a8457) bg_button_pane_cp01

0x13c4,	// (0x0009e292) listscroll_cale_week_pane_ParamLimits

0x13d6,	// (0x0009e2a4) popup_toolbar_window_cp01

0xa9c1,	// (0x000a788f) listscroll_cale_week_pane_t1_ParamLimits

0x13c4,	// (0x0009e292) listscroll_cale_day_pane_ParamLimits

0x13d6,	// (0x0009e2a4) popup_toolbar_window_cp02

0xade1,	// (0x000a7caf) listscroll_cale_day_pane_t1_ParamLimits

0x13c4,	// (0x0009e292) main_cale_month_pane_ParamLimits

0x459a,	// (0x000a1468) popup_toolbar_window_cp03_ParamLimits

0x459a,	// (0x000a1468) popup_toolbar_window_cp03

0x3ef6,	// (0x000a0dc4) main_image_pane_g2_ParamLimits

0x3ef6,	// (0x000a0dc4) main_image_pane_g2

0x3f02,	// (0x000a0dd0) main_image_pane_g3_ParamLimits

0x3f02,	// (0x000a0dd0) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000ac3b5) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000ac3b5) main_image_pane_g

0xb6a3,	// (0x000a8571) main_image_pane_t1_ParamLimits

0x3f0e,	// (0x000a0ddc) main_image_pane_t2_ParamLimits

0x3f0e,	// (0x000a0ddc) main_image_pane_t2

0x3f20,	// (0x000a0dee) main_image_pane_t3_ParamLimits

0x3f20,	// (0x000a0dee) main_image_pane_t3

0x3f32,	// (0x000a0e00) main_image_pane_t4_ParamLimits

0x3f32,	// (0x000a0e00) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000ac3bc) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000ac3bc) main_image_pane_t

0x3f44,	// (0x000a0e12) popup_image_details_window_cp01

0x3f4e,	// (0x000a0e1c) popup_toobar_trans_pane_cp01_ParamLimits

0x3f4e,	// (0x000a0e1c) popup_toobar_trans_pane_cp01

0x450b,	// (0x000a13d9) popup_image_details_window_ParamLimits

0x450b,	// (0x000a13d9) popup_image_details_window

0xc857,	// (0x000a9725) popup_image_focus_window

0x4837,	// (0x000a1705) camera2_autofocus_pane_ParamLimits

0x4837,	// (0x000a1705) camera2_autofocus_pane

0x9bed,	// (0x000a6abb) bg_popup_sub_pane_cp06

0xcd7c,	// (0x000a9c4a) popup_image_focus_window_g1

0xcd84,	// (0x000a9c52) popup_image_focus_window_g2

0xcd8c,	// (0x000a9c5a) popup_image_focus_window_g3

0xcd94,	// (0x000a9c62) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000ac5cb) popup_image_focus_window_g

0xcd9c,	// (0x000a9c6a) popup_image_focus_window_t1

0xcdaa,	// (0x000a9c78) popup_image_focus_window_t2

0xcdba,	// (0x000a9c88) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000ac5d4) popup_image_focus_window_t

0xcdc8,	// (0x000a9c96) camera2_autofocus_pane_g1

0xa272,	// (0x000a7140) bg_tb_trans_pane_cp01

0xcdd6,	// (0x000a9ca4) popup_image_details_window_g1

0xcde9,	// (0x000a9cb7) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000ac5e6) popup_image_details_window_g

0xce12,	// (0x000a9ce0) popup_image_details_window_t1

0xce24,	// (0x000a9cf2) popup_image_details_window_t2

0xce3d,	// (0x000a9d0b) popup_image_details_window_t3

0xce51,	// (0x000a9d1f) popup_image_details_window_t4

0xce6c,	// (0x000a9d3a) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000ac5ed) popup_image_details_window_t

0xa886,	// (0x000a7754) bg_calc_paper_pane_ParamLimits

0x115c,	// (0x0009e02a) grid_highlight_pane_cp013

0x1166,	// (0x0009e034) list_calc_pane_ParamLimits

0x1178,	// (0x0009e046) scroll_pane_cp024

0xa89a,	// (0x000a7768) bg_calc_display_pane_ParamLimits

0x1180,	// (0x0009e04e) calc_display_pane_t1_ParamLimits

0x1195,	// (0x0009e063) calc_display_pane_t2_ParamLimits

0x11aa,	// (0x0009e078) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000ac01f) calc_display_pane_t_ParamLimits

0x127e,	// (0x0009e14c) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000ac03c) cell_calc_pane_g

0x1287,	// (0x0009e155) cell_calc_pane_t1

0xa8f9,	// (0x000a77c7) grid_highlight_pane_cp02_ParamLimits

0xa90f,	// (0x000a77dd) toolbar_button_pane_cp01_ParamLimits

0xa90f,	// (0x000a77dd) toolbar_button_pane_cp01

0xb6e8,	// (0x000a85b6) temp_image_control_pane_ParamLimits

0xb6e8,	// (0x000a85b6) temp_image_control_pane

0xa272,	// (0x000a7140) main_mp3_pane

0xce86,	// (0x000a9d54) temp_image_control_pane_g1_ParamLimits

0xce86,	// (0x000a9d54) temp_image_control_pane_g1

0xce94,	// (0x000a9d62) temp_image_control_pane_g2_ParamLimits

0xce94,	// (0x000a9d62) temp_image_control_pane_g2

0xcea6,	// (0x000a9d74) temp_image_control_pane_g3_ParamLimits

0xcea6,	// (0x000a9d74) temp_image_control_pane_g3

0x4ebd,	// (0x000a1d8b) temp_image_control_pane_g4_ParamLimits

0x4ebd,	// (0x000a1d8b) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000ac5f8) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000ac5f8) temp_image_control_pane_g

0xce86,	// (0x000a9d54) main_mp3_pane_g1

0x4ece,	// (0x000a1d9c) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000ac601) main_mp3_pane_g

0xcee9,	// (0x000a9db7) main_mp3_pane_t1

0xaa58,	// (0x000a7926) main_camera_pane_g8_ParamLimits

0xaa58,	// (0x000a7926) main_camera_pane_g8

0x1e44,	// (0x0009ed12) main_video_pane_g7_ParamLimits

0x1e44,	// (0x0009ed12) main_video_pane_g7

0x497a,	// (0x000a1848) main_camera2_pane_t7_ParamLimits

0x497a,	// (0x000a1848) main_camera2_pane_t7

0xaba4,	// (0x000a7a72) scroll_pane_cp025_ParamLimits

0xaba4,	// (0x000a7a72) scroll_pane_cp025

0xabb8,	// (0x000a7a86) scroll_pane_cp026_ParamLimits

0xabb8,	// (0x000a7a86) scroll_pane_cp026

0xabc7,	// (0x000a7a95) wml_content_pane_ParamLimits

0x9bed,	// (0x000a6abb) main_touch_calib_pane

0x4f72,	// (0x000a1e40) main_touch_calib_pane_g1

0x4f7e,	// (0x000a1e4c) main_touch_calib_pane_g2

0x4f8a,	// (0x000a1e58) main_touch_calib_pane_g3

0x4f96,	// (0x000a1e64) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000ac61f) main_touch_calib_pane_g

0x4fa2,	// (0x000a1e70) main_touch_calib_pane_t1

0x4fb9,	// (0x000a1e87) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000ac628) main_touch_calib_pane_t

0xb367,	// (0x000a8235) mup_progress_pane_cp02

0xb386,	// (0x000a8254) navi_pane_g1

0xb3e8,	// (0x000a82b6) navi_pane_mp_t3

0xa272,	// (0x000a7140) main_mp3_pane_ParamLimits

0x45dc,	// (0x000a14aa) navi_pane_ParamLimits

0xce86,	// (0x000a9d54) main_mp3_pane_g1_ParamLimits

0x4ece,	// (0x000a1d9c) main_mp3_pane_g2_ParamLimits

0x4eda,	// (0x000a1da8) main_mp3_pane_g3_ParamLimits

0x4eda,	// (0x000a1da8) main_mp3_pane_g3

0x4ee6,	// (0x000a1db4) main_mp3_pane_g4_ParamLimits

0x4ee6,	// (0x000a1db4) main_mp3_pane_g4

0xceb6,	// (0x000a9d84) main_mp3_pane_g5_ParamLimits

0xceb6,	// (0x000a9d84) main_mp3_pane_g5

0xcec4,	// (0x000a9d92) main_mp3_pane_g6_ParamLimits

0xcec4,	// (0x000a9d92) main_mp3_pane_g6

0xced1,	// (0x000a9d9f) main_mp3_pane_g7_ParamLimits

0xced1,	// (0x000a9d9f) main_mp3_pane_g7

0xcedd,	// (0x000a9dab) main_mp3_pane_g8_ParamLimits

0xcedd,	// (0x000a9dab) main_mp3_pane_g8

0xf733,	// (0x000ac601) main_mp3_pane_g_ParamLimits

0x4ef2,	// (0x000a1dc0) main_mp3_pane_t2

0x4f02,	// (0x000a1dd0) main_mp3_pane_t3

0xcef7,	// (0x000a9dc5) main_mp3_pane_t4

0xcf05,	// (0x000a9dd3) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000ac612) main_mp3_pane_t

0xcf13,	// (0x000a9de1) mup_progress_pane_cp01

0x0bc6,	// (0x0009da94) aid_zoom_text_secondary2

0xcd09,	// (0x000a9bd7) list_cale_ev2_pane

0xcd11,	// (0x000a9bdf) scroll_pane_cp023_ParamLimits

0xe35f,	// (0x000ab22d) field_cale_ev2_pane_ParamLimits

0xe35f,	// (0x000ab22d) field_cale_ev2_pane

0x5014,	// (0x000a1ee2) field_cale_ev2_pane_g1_ParamLimits

0x5014,	// (0x000a1ee2) field_cale_ev2_pane_g1

0x5020,	// (0x000a1eee) field_cale_ev2_pane_g2_ParamLimits

0x5020,	// (0x000a1eee) field_cale_ev2_pane_g2

0x5038,	// (0x000a1f06) field_cale_ev2_pane_g3_ParamLimits

0x5038,	// (0x000a1f06) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000ac633) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000ac633) field_cale_ev2_pane_g

0x5050,	// (0x000a1f1e) field_cale_ev2_pane_t1_ParamLimits

0x5050,	// (0x000a1f1e) field_cale_ev2_pane_t1

0x5067,	// (0x000a1f35) field_cale_ev2_pane_t2_ParamLimits

0x5067,	// (0x000a1f35) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000ac63c) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000ac63c) field_cale_ev2_pane_t

0x3dd5,	// (0x000a0ca3) main_postcard_pane_g5_ParamLimits

0x3dd5,	// (0x000a0ca3) main_postcard_pane_g5

0x3de3,	// (0x000a0cb1) main_postcard_pane_g6_ParamLimits

0x3de3,	// (0x000a0cb1) main_postcard_pane_g6

0x1c82,	// (0x0009eb50) camera2_autofocus_pane_cp_ParamLimits

0x1c82,	// (0x0009eb50) camera2_autofocus_pane_cp

0xa272,	// (0x000a7140) main_mup3_pane

0x509c,	// (0x000a1f6a) main_mup3_pane_g1_ParamLimits

0x509c,	// (0x000a1f6a) main_mup3_pane_g1

0x50bd,	// (0x000a1f8b) main_mup3_pane_g2_ParamLimits

0x50bd,	// (0x000a1f8b) main_mup3_pane_g2

0x5137,	// (0x000a2005) main_mup3_pane_g3_ParamLimits

0x5137,	// (0x000a2005) main_mup3_pane_g3

0x517c,	// (0x000a204a) main_mup3_pane_g4_ParamLimits

0x517c,	// (0x000a204a) main_mup3_pane_g4

0x51bf,	// (0x000a208d) main_mup3_pane_g5_ParamLimits

0x51bf,	// (0x000a208d) main_mup3_pane_g5

0x5204,	// (0x000a20d2) main_mup3_pane_g6_ParamLimits

0x5204,	// (0x000a20d2) main_mup3_pane_g6

0xcf1b,	// (0x000a9de9) main_mup3_pane_g7_ParamLimits

0xcf1b,	// (0x000a9de9) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000ac64c) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000ac64c) main_mup3_pane_g

0x527a,	// (0x000a2148) main_mup3_pane_t1_ParamLimits

0x527a,	// (0x000a2148) main_mup3_pane_t1

0x52e3,	// (0x000a21b1) main_mup3_pane_t2_ParamLimits

0x52e3,	// (0x000a21b1) main_mup3_pane_t2

0x53ac,	// (0x000a227a) main_mup3_pane_t4_ParamLimits

0x53ac,	// (0x000a227a) main_mup3_pane_t4

0x5400,	// (0x000a22ce) main_mup3_pane_t5_ParamLimits

0x5400,	// (0x000a22ce) main_mup3_pane_t5

0x54ae,	// (0x000a237c) main_mup3_pane_t6_ParamLimits

0x54ae,	// (0x000a237c) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000ac65d) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000ac65d) main_mup3_pane_t

0x555a,	// (0x000a2428) mup3_progress_pane_ParamLimits

0x555a,	// (0x000a2428) mup3_progress_pane

0x55d4,	// (0x000a24a2) popup_mup3_control_window_ParamLimits

0x55d4,	// (0x000a24a2) popup_mup3_control_window

0xcf29,	// (0x000a9df7) popup_mup3_text_window

0x55f1,	// (0x000a24bf) mup3_progress_pane_t1

0x5610,	// (0x000a24de) mup3_progress_pane_t2

0xcf31,	// (0x000a9dff) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000ac66a) mup3_progress_pane_t

0xcf4e,	// (0x000a9e1c) mup_progress_pane_cp03

0x9bed,	// (0x000a6abb) bg_tb_trans_pane_cp04

0x562f,	// (0x000a24fd) mup3_volume_pane

0x5637,	// (0x000a2505) popup_mup3_control_window_g1

0xda38,	// (0x000aa906) mup3_volume_pane_g1

0xda41,	// (0x000aa90f) mup3_volume_pane_g2

0xda4a,	// (0x000aa918) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000ac671) mup3_volume_pane_g

0x9bed,	// (0x000a6abb) bg_tb_trans_pane_cp03

0xcf5e,	// (0x000a9e2c) popup_mup3_text_window_g1

0xcf66,	// (0x000a9e34) popup_mup3_text_window_t1

0xa8e2,	// (0x000a77b0) list_calc_item_pane_g1_ParamLimits

0xc9d3,	// (0x000a98a1) mup_volume_pane_cp_g1

0x4fd2,	// (0x000a1ea0) main_touch_calib_pane_t3

0x4fe8,	// (0x000a1eb6) main_touch_calib_pane_t4

0x4ffe,	// (0x000a1ecc) main_touch_calib_pane_t5

0x9bf7,	// (0x000a6ac5) aid_cell_size_toolbar2

0x9bff,	// (0x000a6acd) aid_popup3_width_pane

0x0bb6,	// (0x0009da84) aid_zoom_text_msg_primary

0x1c55,	// (0x0009eb23) vorec_t7

0xa8a6,	// (0x000a7774) bg_calc_paper_pane_g1_ParamLimits

0xa8b2,	// (0x000a7780) bg_calc_paper_pane_g2_ParamLimits

0xa8be,	// (0x000a778c) bg_calc_paper_pane_g3_ParamLimits

0xa8ca,	// (0x000a7798) bg_calc_paper_pane_g4_ParamLimits

0xa8d6,	// (0x000a77a4) bg_calc_paper_pane_g5_ParamLimits

0x11eb,	// (0x0009e0b9) bg_calc_paper_pane_g6_ParamLimits

0x11fc,	// (0x0009e0ca) bg_calc_paper_pane_g7_ParamLimits

0x120d,	// (0x0009e0db) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000ac026) bg_calc_paper_pane_g_ParamLimits

0x1220,	// (0x0009e0ee) calc_bg_paper_pane_g9_ParamLimits

0x1d73,	// (0x0009ec41) image_qvga_pane_ParamLimits

0x1d73,	// (0x0009ec41) image_qvga_pane

0xa7d5,	// (0x000a76a3) bg_popup_sub_pane_cp04_ParamLimits

0xb61f,	// (0x000a84ed) popup_mup_playback_window_g1_ParamLimits

0xb62b,	// (0x000a84f9) popup_mup_playback_window_t1_ParamLimits

0xb640,	// (0x000a850e) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000ac3b0) popup_mup_playback_window_t_ParamLimits

0x4aa9,	// (0x000a1977) main_mup2_pane_g3_ParamLimits

0x4aa9,	// (0x000a1977) main_mup2_pane_g3

0x212f,	// (0x0009effd) popup_toolbar_window_cp04

0xba3b,	// (0x000a8909) popup_call2_audio_second_window_g3_ParamLimits

0xba3b,	// (0x000a8909) popup_call2_audio_second_window_g3

0xbe45,	// (0x000a8d13) popup_call2_audio_first_window_g4_ParamLimits

0xbe45,	// (0x000a8d13) popup_call2_audio_first_window_g4

0xc4c4,	// (0x000a9392) popup_call2_audio_in_window_g4_ParamLimits

0xc4c4,	// (0x000a9392) popup_call2_audio_in_window_g4

0x3ee9,	// (0x000a0db7) aid_area_sk_bg_cut_ParamLimits

0x3ee9,	// (0x000a0db7) aid_area_sk_bg_cut

0xb655,	// (0x000a8523) aid_area_sk_bg_cut_2_ParamLimits

0xb655,	// (0x000a8523) aid_area_sk_bg_cut_2

0x4e24,	// (0x000a1cf2) aid_placing_details_win

0x4e2c,	// (0x000a1cfa) aid_placing_details_win_2

0xcdc8,	// (0x000a9c96) camera2_autofocus_pane_g1_ParamLimits

0x0da0,	// (0x0009dc6e) popup_fixed_preview_cale_window_ParamLimits

0x0da0,	// (0x0009dc6e) popup_fixed_preview_cale_window

0xb42f,	// (0x000a82fd) navi_slider_pane_g3

0xb438,	// (0x000a8306) navi_slider_pane_g4

0xb441,	// (0x000a830f) navi_slider_pane_g5

0xb42f,	// (0x000a82fd) navi_slider_pane_g6

0x375f,	// (0x000a062d) navi_slider_pane_g7

0xb556,	// (0x000a8424) mup_scale_pane_g3

0xb55f,	// (0x000a842d) mup_scale_pane_g4

0xb568,	// (0x000a8436) mup_scale_pane_g5

0x3be2,	// (0x000a0ab0) mup_scale_pane_g6

0x3beb,	// (0x000a0ab9) mup_scale_pane_g7

0xb42f,	// (0x000a82fd) cams2_slider_pane_g3

0xca55,	// (0x000a9923) cams2_slider_pane_g4

0x4d84,	// (0x000a1c52) cams2_slider_pane_g5

0xb42f,	// (0x000a82fd) cams2_slider_pane_g6

0x4d8c,	// (0x000a1c5a) cams2_slider_pane_g7

0xcc86,	// (0x000a9b54) camera2_autofocus_pane_cp_g1

0xc829,	// (0x000a96f7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc829,	// (0x000a96f7) bg_popup_preview_window_pane_cp02

0xcf74,	// (0x000a9e42) list_fp_cale_pane_ParamLimits

0xcf74,	// (0x000a9e42) list_fp_cale_pane

0xcf80,	// (0x000a9e4e) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf80,	// (0x000a9e4e) popup_fixed_preview_cale_window_t1

0x5640,	// (0x000a250e) popup_fixed_preview_cale_window_t2_ParamLimits

0x5640,	// (0x000a250e) popup_fixed_preview_cale_window_t2

0x5655,	// (0x000a2523) popup_fixed_preview_cale_window_t3_ParamLimits

0x5655,	// (0x000a2523) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000ac678) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000ac678) popup_fixed_preview_cale_window_t

0x566a,	// (0x000a2538) list_single_fp_cale_pane_ParamLimits

0x566a,	// (0x000a2538) list_single_fp_cale_pane

0xcf9e,	// (0x000a9e6c) list_single_fp_cale_pane_g1_ParamLimits

0xcf9e,	// (0x000a9e6c) list_single_fp_cale_pane_g1

0xcfaa,	// (0x000a9e78) list_single_fp_cale_pane_g2_ParamLimits

0xcfaa,	// (0x000a9e78) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000ac67f) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000ac67f) list_single_fp_cale_pane_g

0xcfc3,	// (0x000a9e91) list_single_fp_cale_pane_t1_ParamLimits

0xcfc3,	// (0x000a9e91) list_single_fp_cale_pane_t1

0xcfd5,	// (0x000a9ea3) list_single_fp_cale_pane_t2_ParamLimits

0xcfd5,	// (0x000a9ea3) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000ac686) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000ac686) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9bed,	// (0x000a6abb) main_dialer_pane

0x567a,	// (0x000a2548) aid_cell_size_keypad

0x5684,	// (0x000a2552) dialer_ne_pane

0x568e,	// (0x000a255c) grid_dialer_command_1_pane

0x5696,	// (0x000a2564) grid_dialer_command_2_pane

0x569e,	// (0x000a256c) grid_dialer_keypad_pane

0x56b2,	// (0x000a2580) bg_popup_call_pane_cp06_ParamLimits

0x56b2,	// (0x000a2580) bg_popup_call_pane_cp06

0x56be,	// (0x000a258c) dialer_ne_clear_pane_ParamLimits

0x56be,	// (0x000a258c) dialer_ne_clear_pane

0xd008,	// (0x000a9ed6) dialer_ne_pane_g1

0xd010,	// (0x000a9ede) dialer_ne_pane_t1_ParamLimits

0xd010,	// (0x000a9ede) dialer_ne_pane_t1

0x56ca,	// (0x000a2598) dialer_ne_pane_t2_ParamLimits

0x56ca,	// (0x000a2598) dialer_ne_pane_t2

0x56e7,	// (0x000a25b5) dialer_ne_pane_t3_ParamLimits

0x56e7,	// (0x000a25b5) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000ac68b) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000ac68b) dialer_ne_pane_t

0x570b,	// (0x000a25d9) dialer_ne_pane_t3_copy1_ParamLimits

0x570b,	// (0x000a25d9) dialer_ne_pane_t3_copy1

0x572f,	// (0x000a25fd) cell_dialer_keypad_pane_ParamLimits

0x572f,	// (0x000a25fd) cell_dialer_keypad_pane

0x5746,	// (0x000a2614) cell_dialer_command_1_pane_ParamLimits

0x5746,	// (0x000a2614) cell_dialer_command_1_pane

0x575c,	// (0x000a262a) cell_dialer_command_2_pane_ParamLimits

0x575c,	// (0x000a262a) cell_dialer_command_2_pane

0xd022,	// (0x000a9ef0) bg_button_pane_cp02_ParamLimits

0xd022,	// (0x000a9ef0) bg_button_pane_cp02

0x576b,	// (0x000a2639) cell_dialer_keypad_pane_g1_ParamLimits

0x576b,	// (0x000a2639) cell_dialer_keypad_pane_g1

0xd022,	// (0x000a9ef0) bg_button_pane_cp03_ParamLimits

0xd022,	// (0x000a9ef0) bg_button_pane_cp03

0x5780,	// (0x000a264e) cell_dialer_command_1_pane_g1_ParamLimits

0x5780,	// (0x000a264e) cell_dialer_command_1_pane_g1

0xd02e,	// (0x000a9efc) bg_button_pane_cp04

0x5794,	// (0x000a2662) cell_dialer_command_2_pane_g1

0xaa50,	// (0x000a791e) bg_button_pane_cp06

0xd036,	// (0x000a9f04) dialer_ne_clear_pane_g1

0x369a,	// (0x000a0568) navi_pane_g2

0x36c8,	// (0x000a0596) navi_pane_g3

0x0002,

0xf3e5,	// (0x000ac2b3) navi_pane_g

0x36f3,	// (0x000a05c1) navi_pane_mv_g2

0x371a,	// (0x000a05e8) navi_pane_mv_g5

0x3722,	// (0x000a05f0) navi_pane_mv_t1

0xa89a,	// (0x000a7768) main_clock2_pane

0x57d2,	// (0x000a26a0) main_clock2_list_pane_ParamLimits

0x57d2,	// (0x000a26a0) main_clock2_list_pane

0x57fc,	// (0x000a26ca) main_clock2_pane_t1_ParamLimits

0x57fc,	// (0x000a26ca) main_clock2_pane_t1

0x581e,	// (0x000a26ec) main_clock2_pane_t2_ParamLimits

0x581e,	// (0x000a26ec) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000ac697) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000ac697) main_clock2_pane_t

0x587b,	// (0x000a2749) popup_clock_analogue_window_cp03_ParamLimits

0x587b,	// (0x000a2749) popup_clock_analogue_window_cp03

0x589b,	// (0x000a2769) popup_clock_digital_window_cp02_ParamLimits

0x589b,	// (0x000a2769) popup_clock_digital_window_cp02

0x590c,	// (0x000a27da) main_clock2_list_single_pane_ParamLimits

0x590c,	// (0x000a27da) main_clock2_list_single_pane

0xaa50,	// (0x000a791e) list_highlight_pane_cp05

0xd072,	// (0x000a9f40) main_clock2_list_single_pane_t1

0x212f,	// (0x0009effd) popup_toolbar_window_cp04_ParamLimits

0x4e8d,	// (0x000a1d5b) camera2_autofocus_pane_g2_ParamLimits

0x4e8d,	// (0x000a1d5b) camera2_autofocus_pane_g2

0x4e99,	// (0x000a1d67) camera2_autofocus_pane_g3_ParamLimits

0x4e99,	// (0x000a1d67) camera2_autofocus_pane_g3

0x4ea5,	// (0x000a1d73) camera2_autofocus_pane_g4_ParamLimits

0x4ea5,	// (0x000a1d73) camera2_autofocus_pane_g4

0x4eb1,	// (0x000a1d7f) camera2_autofocus_pane_g5_ParamLimits

0x4eb1,	// (0x000a1d7f) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000ac5db) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000ac5db) camera2_autofocus_pane_g

0x507c,	// (0x000a1f4a) camera2_autofocus_pane_cp_g2

0x5084,	// (0x000a1f52) camera2_autofocus_pane_cp_g3

0x508c,	// (0x000a1f5a) camera2_autofocus_pane_cp_g4

0x5094,	// (0x000a1f62) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000ac641) camera2_autofocus_pane_cp_g

0x56aa,	// (0x000a2578) popup_dialer_spcha_window

0x9bed,	// (0x000a6abb) bg_popup_sub_pane_cp07

0xd080,	// (0x000a9f4e) list_spcha_pane

0xd088,	// (0x000a9f56) list_single_spcha_pane_ParamLimits

0xd088,	// (0x000a9f56) list_single_spcha_pane

0x9bed,	// (0x000a6abb) list_highlight_pane_cp06

0xd099,	// (0x000a9f67) list_single_spcha_pane_t1

0xc26e,	// (0x000a913c) popup_call2_audio_out_window_g4_ParamLimits

0xc26e,	// (0x000a913c) popup_call2_audio_out_window_g4

0x9bed,	// (0x000a6abb) main_imed2_pane

0xc861,	// (0x000a972f) popup_imed_adjust2_window

0x4519,	// (0x000a13e7) popup_imed_trans_window_ParamLimits

0x4519,	// (0x000a13e7) popup_imed_trans_window

0xcabe,	// (0x000a998c) popup_blid_sat_info2_window_t1

0xcacc,	// (0x000a999a) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000ac570) popup_blid_sat_info2_window_t

0x59b6,	// (0x000a2884) aid_size_cell_colour_35

0x59d0,	// (0x000a289e) aid_size_cell_colour_112

0x59e7,	// (0x000a28b5) aid_size_cell_effect

0xa272,	// (0x000a7140) bg_tb_trans_pane_cp02

0xb099,	// (0x000a7f67) heading_imed_pane

0x5a01,	// (0x000a28cf) listscroll_imed_pane

0xd0a7,	// (0x000a9f75) heading_imed_pane_g1

0xd0af,	// (0x000a9f7d) heading_imed_pane_t1

0xd0bd,	// (0x000a9f8b) grid_imed_colour_35_pane_ParamLimits

0xd0bd,	// (0x000a9f8b) grid_imed_colour_35_pane

0x5a0d,	// (0x000a28db) grid_imed_effect_pane

0xd0d9,	// (0x000a9fa7) list_imed_aspect_pane

0x5a1d,	// (0x000a28eb) scroll_pane_cp027_ParamLimits

0x5a1d,	// (0x000a28eb) scroll_pane_cp027

0x5a29,	// (0x000a28f7) cell_imed_effect_pane_ParamLimits

0x5a29,	// (0x000a28f7) cell_imed_effect_pane

0xd0e1,	// (0x000a9faf) cell_imed_colour_pane_ParamLimits

0xd0e1,	// (0x000a9faf) cell_imed_colour_pane

0xd133,	// (0x000aa001) cell_imed_colour_pane_g1_ParamLimits

0xd133,	// (0x000aa001) cell_imed_colour_pane_g1

0xd144,	// (0x000aa012) hgihlgiht_grid_pane_cp016_ParamLimits

0xd144,	// (0x000aa012) hgihlgiht_grid_pane_cp016

0x5a45,	// (0x000a2913) cell_imed_effect_pane_g1

0x5a4d,	// (0x000a291b) grid_highlight_pane_cp017

0xd155,	// (0x000aa023) list_imed_single_pane_ParamLimits

0xd155,	// (0x000aa023) list_imed_single_pane

0x9bed,	// (0x000a6abb) list_highlight_pane_cp07

0xd169,	// (0x000aa037) list_imed_aspect_pane_comp1_t1

0xc835,	// (0x000a9703) bg_tb_trans_pane_cp05

0xd18b,	// (0x000aa059) popup_imed_adjust2_window_g1

0xd1b2,	// (0x000aa080) popup_imed_adjust2_window_t1

0xd1ca,	// (0x000aa098) slider_imed_adjust_pane

0xd1de,	// (0x000aa0ac) slider_imed_adjust_pane_g1

0xd1ee,	// (0x000aa0bc) slider_imed_adjust_pane_g2

0xd1fe,	// (0x000aa0cc) slider_imed_adjust_pane_g3

0xd20f,	// (0x000aa0dd) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000ac6b4) slider_imed_adjust_pane_g

0x5a56,	// (0x000a2924) aid_size_cell_clipart2

0x5a62,	// (0x000a2930) grid_imed_clipart_pane

0xd220,	// (0x000aa0ee) scroll_pane_cp031

0x5a6c,	// (0x000a293a) cell_imed_clipart_pane_ParamLimits

0x5a6c,	// (0x000a293a) cell_imed_clipart_pane

0x5a8a,	// (0x000a2958) cell_imed_clipart_pane_g1

0x9bed,	// (0x000a6abb) grid_highlight_pane_cp014

0x57de,	// (0x000a26ac) main_clock2_pane_g1_ParamLimits

0x57de,	// (0x000a26ac) main_clock2_pane_g1

0x58b7,	// (0x000a2785) aid_call2_pane_cp10

0x58c9,	// (0x000a2797) aid_call_pane_cp10

0xb35b,	// (0x000a8229) popup_clock_analogue_window_cp10_g1

0xb35b,	// (0x000a8229) popup_clock_analogue_window_cp10_g2

0x58db,	// (0x000a27a9) popup_clock_analogue_window_cp10_g3

0x58db,	// (0x000a27a9) popup_clock_analogue_window_cp10_g4

0xb35b,	// (0x000a8229) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000ac6a2) popup_clock_analogue_window_cp10_g

0x58ed,	// (0x000a27bb) popup_clock_analogue_window_cp10_t1

0x591e,	// (0x000a27ec) clock_digital_number_pane_cp10_ParamLimits

0x591e,	// (0x000a27ec) clock_digital_number_pane_cp10

0x5936,	// (0x000a2804) clock_digital_number_pane_cp11_ParamLimits

0x5936,	// (0x000a2804) clock_digital_number_pane_cp11

0x594e,	// (0x000a281c) clock_digital_number_pane_cp12_ParamLimits

0x594e,	// (0x000a281c) clock_digital_number_pane_cp12

0x5966,	// (0x000a2834) clock_digital_number_pane_cp13_ParamLimits

0x5966,	// (0x000a2834) clock_digital_number_pane_cp13

0x597e,	// (0x000a284c) clock_digital_separator_pane_cp10_ParamLimits

0x597e,	// (0x000a284c) clock_digital_separator_pane_cp10

0x5996,	// (0x000a2864) popup_clock_digital_window_cp02_t1_ParamLimits

0x5996,	// (0x000a2864) popup_clock_digital_window_cp02_t1

0xa7cd,	// (0x000a769b) clock_digital_number_pane_cp10_g1

0xa7cd,	// (0x000a769b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000ac6bd) clock_digital_number_pane_cp10_g

0xa7cd,	// (0x000a769b) clock_digital_separator_pane_cp10_g1

0xa7cd,	// (0x000a769b) clock_digital_separator_pane_g2_cp10

0xb3f6,	// (0x000a82c4) navi_pane_vded_g4

0xb3ff,	// (0x000a82cd) navi_pane_vded_g5

0xb408,	// (0x000a82d6) navi_pane_vded_t1

0x9bed,	// (0x000a6abb) main_vded_pane

0x5a93,	// (0x000a2961) main_vded_pane_g1

0x5a9f,	// (0x000a296d) main_vded_pane_g2

0x5aa9,	// (0x000a2977) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000ac6c2) main_vded_pane_g

0x5ab3,	// (0x000a2981) main_vded_pane_t1

0x5ac1,	// (0x000a298f) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000ac6c9) main_vded_pane_t

0x5acf,	// (0x000a299d) vded_slider_pane

0x5ad9,	// (0x000a29a7) vded_video_pane

0xd228,	// (0x000aa0f6) vded_video_pane_g1

0x5ae5,	// (0x000a29b3) vded_video_pane_g2

0xcc86,	// (0x000a9b54) vded_video_pane_g3

0x0002,

0xf800,	// (0x000ac6ce) vded_video_pane_g

0xd232,	// (0x000aa100) vded_slider_pane_g1

0xc9d3,	// (0x000a98a1) vded_slider_pane_g2

0xd23b,	// (0x000aa109) vded_slider_pane_g3

0xd244,	// (0x000aa112) vded_slider_pane_g4

0xd24d,	// (0x000aa11b) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000ac6d5) vded_slider_pane_g

0x55c8,	// (0x000a2496) mup3_rocker_pane_ParamLimits

0x55c8,	// (0x000a2496) mup3_rocker_pane

0x5aee,	// (0x000a29bc) mup3_control_keys_pane_g1

0x5af6,	// (0x000a29c4) mup3_control_keys_pane_g2

0x5afe,	// (0x000a29cc) mup3_control_keys_pane_g3

0x5b06,	// (0x000a29d4) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000ac6e0) mup3_control_keys_pane_g

0x0dbe,	// (0x0009dc8c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dbe,	// (0x0009dc8c) popup_toolbar2_fixed_window_cp01

0x55e4,	// (0x000a24b2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55e4,	// (0x000a24b2) popup_toolbar2_fixed_window_cp02

0xbbad,	// (0x000a8a7b) popup_call2_audio_second_window_t4_ParamLimits

0xbbad,	// (0x000a8a7b) popup_call2_audio_second_window_t4

0xc0db,	// (0x000a8fa9) popup_call2_audio_first_window_t6_ParamLimits

0xc0db,	// (0x000a8fa9) popup_call2_audio_first_window_t6

0xc371,	// (0x000a923f) popup_call2_audio_out_window_t6_ParamLimits

0xc371,	// (0x000a923f) popup_call2_audio_out_window_t6

0x9bed,	// (0x000a6abb) main_vitu_pane

0x5b16,	// (0x000a29e4) aid_size_cell_itu_ParamLimits

0x5b16,	// (0x000a29e4) aid_size_cell_itu

0x0df0,	// (0x0009dcbe) bg_popup_window_pane_cp08_ParamLimits

0x0df0,	// (0x0009dcbe) bg_popup_window_pane_cp08

0x5b24,	// (0x000a29f2) field_vitu_entry_pane_ParamLimits

0x5b24,	// (0x000a29f2) field_vitu_entry_pane

0x5b33,	// (0x000a2a01) grid_vitu_function_pane_ParamLimits

0x5b33,	// (0x000a2a01) grid_vitu_function_pane

0x5b43,	// (0x000a2a11) grid_vitu_itu_pane_ParamLimits

0x5b43,	// (0x000a2a11) grid_vitu_itu_pane

0x5b53,	// (0x000a2a21) cell_vitu_itu_pane_ParamLimits

0x5b53,	// (0x000a2a21) cell_vitu_itu_pane

0x5b6a,	// (0x000a2a38) cell_vitu_function_pane_ParamLimits

0x5b6a,	// (0x000a2a38) cell_vitu_function_pane

0xa272,	// (0x000a7140) bg_popup_sub_pane_cp08_ParamLimits

0xa272,	// (0x000a7140) bg_popup_sub_pane_cp08

0x5b7e,	// (0x000a2a4c) field_vitu_entry_pane_t1_ParamLimits

0x5b7e,	// (0x000a2a4c) field_vitu_entry_pane_t1

0xd26e,	// (0x000aa13c) field_vitu_entry_pane_t2_ParamLimits

0xd26e,	// (0x000aa13c) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000ac6ee) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000ac6ee) field_vitu_entry_pane_t

0xd28b,	// (0x000aa159) bg_button_pane_cp05_ParamLimits

0xd28b,	// (0x000aa159) bg_button_pane_cp05

0x5b98,	// (0x000a2a66) cell_vitu_itu_pane_g1

0x5bb0,	// (0x000a2a7e) cell_vitu_itu_pane_t1_ParamLimits

0x5bb0,	// (0x000a2a7e) cell_vitu_itu_pane_t1

0x5bc2,	// (0x000a2a90) cell_vitu_itu_pane_t2_ParamLimits

0x5bc2,	// (0x000a2a90) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000ac6f3) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000ac6f3) cell_vitu_itu_pane_t

0xd299,	// (0x000aa167) bg_button_pane_cp07

0x5c05,	// (0x000a2ad3) cell_vitu_function_pane_g1

0x1083,	// (0x0009df51) main_calc_pane_g1

0x0baa,	// (0x0009da78) aid_visual_content_pane

0x9bed,	// (0x000a6abb) main_vradio_pane

0x5c0e,	// (0x000a2adc) main_vradio_pane_g1_ParamLimits

0x5c0e,	// (0x000a2adc) main_vradio_pane_g1

0xd2a3,	// (0x000aa171) main_vradio_pane_g2_ParamLimits

0xd2a3,	// (0x000aa171) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000ac6fa) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000ac6fa) main_vradio_pane_g

0x5c1c,	// (0x000a2aea) main_vradio_pane_t1_ParamLimits

0x5c1c,	// (0x000a2aea) main_vradio_pane_t1

0x5c2e,	// (0x000a2afc) main_vradio_pane_t2_ParamLimits

0x5c2e,	// (0x000a2afc) main_vradio_pane_t2

0xd2b0,	// (0x000aa17e) main_vradio_pane_t3_ParamLimits

0xd2b0,	// (0x000aa17e) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000ac6ff) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000ac6ff) main_vradio_pane_t

0x5c40,	// (0x000a2b0e) vradio_rocker_control_pane_ParamLimits

0x5c40,	// (0x000a2b0e) vradio_rocker_control_pane

0x5c4c,	// (0x000a2b1a) vradio_station_info_pane_ParamLimits

0x5c4c,	// (0x000a2b1a) vradio_station_info_pane

0xd2c4,	// (0x000aa192) vradio_frequency_info_pane_ParamLimits

0xd2c4,	// (0x000aa192) vradio_frequency_info_pane

0xcc86,	// (0x000a9b54) vradio_station_info_pane_g1

0xd2d3,	// (0x000aa1a1) vradio_station_info_pane_t1_ParamLimits

0xd2d3,	// (0x000aa1a1) vradio_station_info_pane_t1

0xd2f5,	// (0x000aa1c3) vradio_station_info_pane_t2_ParamLimits

0xd2f5,	// (0x000aa1c3) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000ac706) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000ac706) vradio_station_info_pane_t

0xd307,	// (0x000aa1d5) vradio_tuning_pane

0xd30f,	// (0x000aa1dd) vradio_rocker_control_pane_g1

0xd317,	// (0x000aa1e5) vradio_rocker_control_pane_g2

0xd31f,	// (0x000aa1ed) vradio_rocker_control_pane_g3

0xd327,	// (0x000aa1f5) vradio_rocker_control_pane_g4

0xd32f,	// (0x000aa1fd) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000ac70b) vradio_rocker_control_pane_g

0x5c59,	// (0x000a2b27) vradio_frequency_info_pane_g1

0xd337,	// (0x000aa205) vradio_frequency_info_pane_t1_ParamLimits

0xd337,	// (0x000aa205) vradio_frequency_info_pane_t1

0x5c63,	// (0x000a2b31) vradio_tuning_pane_g1

0x5c6e,	// (0x000a2b3c) vradio_tuning_pane_t1

0x9c0b,	// (0x000a6ad9) area_side_right_pane_ParamLimits

0x9c0b,	// (0x000a6ad9) area_side_right_pane

0xc7f0,	// (0x000a96be) status_small_pane_g1

0xc7f8,	// (0x000a96c6) status_small_pane_g2

0xc801,	// (0x000a96cf) status_small_pane_g3

0xc80a,	// (0x000a96d8) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000ac4c6) status_small_pane_g

0xc813,	// (0x000a96e1) status_small_pane_t1

0x9bed,	// (0x000a6abb) main_video3_pane

0xd34b,	// (0x000aa219) cams_zoom_vslider_pane

0xd353,	// (0x000aa221) image3_wide_pane_ParamLimits

0xd353,	// (0x000aa221) image3_wide_pane

0xd36d,	// (0x000aa23b) image3_wide_small_pane

0xd379,	// (0x000aa247) main_video3_pane_g1_ParamLimits

0xd379,	// (0x000aa247) main_video3_pane_g1

0xd395,	// (0x000aa263) main_video3_pane_g2_ParamLimits

0xd395,	// (0x000aa263) main_video3_pane_g2

0x0001,

0xf848,	// (0x000ac716) main_video3_pane_g_ParamLimits

0xf848,	// (0x000ac716) main_video3_pane_g

0xd3b1,	// (0x000aa27f) main_video3_pane_t1_ParamLimits

0xd3b1,	// (0x000aa27f) main_video3_pane_t1

0xd3dc,	// (0x000aa2aa) main_video3_pane_t2_ParamLimits

0xd3dc,	// (0x000aa2aa) main_video3_pane_t2

0xd409,	// (0x000aa2d7) main_video3_pane_t3_ParamLimits

0xd409,	// (0x000aa2d7) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000ac71b) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000ac71b) main_video3_pane_t

0xd436,	// (0x000aa304) cams_zoom_vslider_pane_g1

0xd43f,	// (0x000aa30d) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000ac722) cams_zoom_vslider_pane_g

0xd447,	// (0x000aa315) small_slider_vertical_pane

0xcc86,	// (0x000a9b54) small_slider_vertical_pane_g1

0xcc86,	// (0x000a9b54) small_slider_vertical_pane_g2

0xd44f,	// (0x000aa31d) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000ac727) small_slider_vertical_pane_g

0x9bed,	// (0x000a6abb) main_hwr_training_pane

0xd458,	// (0x000aa326) hwr_training_instruct_pane_ParamLimits

0xd458,	// (0x000aa326) hwr_training_instruct_pane

0x5c7d,	// (0x000a2b4b) hwr_training_navi_pane_ParamLimits

0x5c7d,	// (0x000a2b4b) hwr_training_navi_pane

0x5c97,	// (0x000a2b65) hwr_training_write_pane_ParamLimits

0x5c97,	// (0x000a2b65) hwr_training_write_pane

0x9bed,	// (0x000a6abb) bg_frame_shadow_pane

0xd48f,	// (0x000aa35d) hwr_training_write_pane_g1

0xd497,	// (0x000aa365) hwr_training_write_pane_g2

0xd49f,	// (0x000aa36d) hwr_training_write_pane_g3

0xd4a7,	// (0x000aa375) hwr_training_write_pane_g4

0xd4af,	// (0x000aa37d) hwr_training_write_pane_g5

0xd4b7,	// (0x000aa385) hwr_training_write_pane_g6

0xd4bf,	// (0x000aa38d) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000ac72e) hwr_training_write_pane_g

0x5ccf,	// (0x000a2b9d) hwr_training_navi_pane_g1_ParamLimits

0x5ccf,	// (0x000a2b9d) hwr_training_navi_pane_g1

0x5ce1,	// (0x000a2baf) hwr_training_navi_pane_g2_ParamLimits

0x5ce1,	// (0x000a2baf) hwr_training_navi_pane_g2

0x5cf3,	// (0x000a2bc1) hwr_training_navi_pane_g3_ParamLimits

0x5cf3,	// (0x000a2bc1) hwr_training_navi_pane_g3

0x5d03,	// (0x000a2bd1) hwr_training_navi_pane_g4_ParamLimits

0x5d03,	// (0x000a2bd1) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000ac73d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000ac73d) hwr_training_navi_pane_g

0x5d1d,	// (0x000a2beb) hwr_training_navi_pane_t1

0x5d2b,	// (0x000a2bf9) list_single_hwr_training_instruct_pane_ParamLimits

0x5d2b,	// (0x000a2bf9) list_single_hwr_training_instruct_pane

0xd4c7,	// (0x000aa395) list_single_hwr_training_instruct_pane_t1

0xcbc6,	// (0x000a9a94) bg_frame_shadow_pane_g1

0xd4d6,	// (0x000aa3a4) bg_frame_shadow_pane_g2

0xd4de,	// (0x000aa3ac) bg_frame_shadow_pane_g3

0xd4e6,	// (0x000aa3b4) bg_frame_shadow_pane_g4

0xd4ee,	// (0x000aa3bc) bg_frame_shadow_pane_g5

0xd4f6,	// (0x000aa3c4) bg_frame_shadow_pane_g6

0xd4fe,	// (0x000aa3cc) bg_frame_shadow_pane_g7

0xa965,	// (0x000a7833) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000ac748) bg_frame_shadow_pane_g

0x9bed,	// (0x000a6abb) main_video_tele_dialer_pane

0x5d44,	// (0x000a2c12) aid_size_cell_video_keypad_ParamLimits

0x5d44,	// (0x000a2c12) aid_size_cell_video_keypad

0x5d54,	// (0x000a2c22) grid_video_dialer_keypad_pane_ParamLimits

0x5d54,	// (0x000a2c22) grid_video_dialer_keypad_pane

0x5d86,	// (0x000a2c54) video_down_pane_cp_ParamLimits

0x5d86,	// (0x000a2c54) video_down_pane_cp

0x5dae,	// (0x000a2c7c) cell_video_dialer_keypad_pane_ParamLimits

0x5dae,	// (0x000a2c7c) cell_video_dialer_keypad_pane

0xd506,	// (0x000aa3d4) bg_button_pane_cp08_ParamLimits

0xd506,	// (0x000aa3d4) bg_button_pane_cp08

0x5dc5,	// (0x000a2c93) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5dc5,	// (0x000a2c93) cell_video_dialer_keypad_pane_g1

0x55bc,	// (0x000a248a) mup3_rocker2_pane_ParamLimits

0x55bc,	// (0x000a248a) mup3_rocker2_pane

0xcc86,	// (0x000a9b54) mup3_rocker2_pane_g1

0x449b,	// (0x000a1369) main_dialer2_pane

0x9bed,	// (0x000a6abb) main_mp4_pane

0x5e04,	// (0x000a2cd2) main_mp4_pane_g1_ParamLimits

0x5e04,	// (0x000a2cd2) main_mp4_pane_g1

0x5e12,	// (0x000a2ce0) main_mp4_pane_g2_ParamLimits

0x5e12,	// (0x000a2ce0) main_mp4_pane_g2

0x5e20,	// (0x000a2cee) main_mp4_pane_g3_ParamLimits

0x5e20,	// (0x000a2cee) main_mp4_pane_g3

0x5e73,	// (0x000a2d41) main_mp4_pane_g4_ParamLimits

0x5e73,	// (0x000a2d41) main_mp4_pane_g4

0x5e9b,	// (0x000a2d69) main_mp4_pane_g5_ParamLimits

0x5e9b,	// (0x000a2d69) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000ac768) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000ac768) main_mp4_pane_g

0x5eeb,	// (0x000a2db9) main_mp4_pane_t1_ParamLimits

0x5eeb,	// (0x000a2db9) main_mp4_pane_t1

0x5f47,	// (0x000a2e15) main_mp4_pane_t2_ParamLimits

0x5f47,	// (0x000a2e15) main_mp4_pane_t2

0xd512,	// (0x000aa3e0) main_mp4_pane_t3_ParamLimits

0xd512,	// (0x000aa3e0) main_mp4_pane_t3

0x5f99,	// (0x000a2e67) main_mp4_pane_t4_ParamLimits

0x5f99,	// (0x000a2e67) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000ac775) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000ac775) main_mp4_pane_t

0x5fd9,	// (0x000a2ea7) mp4_progress_pane_ParamLimits

0x5fd9,	// (0x000a2ea7) mp4_progress_pane

0x6023,	// (0x000a2ef1) mp4_rocker_pane_ParamLimits

0x6023,	// (0x000a2ef1) mp4_rocker_pane

0xd53a,	// (0x000aa408) mp4_progress_pane_t1

0xd553,	// (0x000aa421) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000ac77e) mp4_progress_pane_t

0xd56c,	// (0x000aa43a) mup_progress_pane_cp04

0xda53,	// (0x000aa921) mp4_rocker_pane_g1

0x6045,	// (0x000a2f13) aid_cell_size_keypad2_ParamLimits

0x6045,	// (0x000a2f13) aid_cell_size_keypad2

0x6055,	// (0x000a2f23) dialer2_ne_pane_ParamLimits

0x6055,	// (0x000a2f23) dialer2_ne_pane

0x6061,	// (0x000a2f2f) grid_dialer2_keypad_pane_ParamLimits

0x6061,	// (0x000a2f2f) grid_dialer2_keypad_pane

0xda5d,	// (0x000aa92b) bg_popup_call_pane_cp07_ParamLimits

0xda5d,	// (0x000aa92b) bg_popup_call_pane_cp07

0x606f,	// (0x000a2f3d) dialer2_ne_pane_t1_ParamLimits

0x606f,	// (0x000a2f3d) dialer2_ne_pane_t1

0x6094,	// (0x000a2f62) cell_dialer2_keypad_pane_ParamLimits

0x6094,	// (0x000a2f62) cell_dialer2_keypad_pane

0xd58a,	// (0x000aa458) bg_button_pane_pane_cp04_ParamLimits

0xd58a,	// (0x000aa458) bg_button_pane_pane_cp04

0x60ab,	// (0x000a2f79) cell_dialer2_keypad_pane_g1_ParamLimits

0x60ab,	// (0x000a2f79) cell_dialer2_keypad_pane_g1

0x2001,	// (0x0009eecf) aid_placing_vt_set_content_ParamLimits

0x2001,	// (0x0009eecf) aid_placing_vt_set_content

0x2029,	// (0x0009eef7) aid_placing_vt_set_title_ParamLimits

0x2029,	// (0x0009eef7) aid_placing_vt_set_title

0x9bed,	// (0x000a6abb) main_image3_pane

0x6145,	// (0x000a3013) area_side_right_pane_cp01_ParamLimits

0x6145,	// (0x000a3013) area_side_right_pane_cp01

0x6174,	// (0x000a3042) main_image3_pane_g1_ParamLimits

0x6174,	// (0x000a3042) main_image3_pane_g1

0x6182,	// (0x000a3050) main_image3_pane_g2_ParamLimits

0x6182,	// (0x000a3050) main_image3_pane_g2

0x619b,	// (0x000a3069) main_image3_pane_g3_ParamLimits

0x619b,	// (0x000a3069) main_image3_pane_g3

0x61b4,	// (0x000a3082) main_image3_pane_g4_ParamLimits

0x61b4,	// (0x000a3082) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000ac78d) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000ac78d) main_image3_pane_g

0x61cd,	// (0x000a309b) main_image3_pane_t1_ParamLimits

0x61cd,	// (0x000a309b) main_image3_pane_t1

0x61f2,	// (0x000a30c0) main_image3_pane_t2_ParamLimits

0x61f2,	// (0x000a30c0) main_image3_pane_t2

0x6211,	// (0x000a30df) main_image3_pane_t3_ParamLimits

0x6211,	// (0x000a30df) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000ac796) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000ac796) main_image3_pane_t

0x0df0,	// (0x0009dcbe) grid_sctrl_middle_pane_cp01_ParamLimits

0x0df0,	// (0x0009dcbe) grid_sctrl_middle_pane_cp01

0x6272,	// (0x000a3140) cell_sctrl_middle_pane_cp01_ParamLimits

0x6272,	// (0x000a3140) cell_sctrl_middle_pane_cp01

0x6283,	// (0x000a3151) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6283,	// (0x000a3151) cell_sctrl_middle_pane_cp01_g1

0x9bed,	// (0x000a6abb) main_call4_pane

0x6290,	// (0x000a315e) aid_size_button_call4_ParamLimits

0x6290,	// (0x000a315e) aid_size_button_call4

0x62c2,	// (0x000a3190) call4_windows_pane_ParamLimits

0x62c2,	// (0x000a3190) call4_windows_pane

0x62de,	// (0x000a31ac) grid_call4_button_pane_ParamLimits

0x62de,	// (0x000a31ac) grid_call4_button_pane

0xd596,	// (0x000aa464) call4_windows_conf_pane

0x6302,	// (0x000a31d0) popup_call4_audio_first_window_ParamLimits

0x6302,	// (0x000a31d0) popup_call4_audio_first_window

0x632e,	// (0x000a31fc) popup_call4_audio_second_window_ParamLimits

0x632e,	// (0x000a31fc) popup_call4_audio_second_window

0xd5d3,	// (0x000aa4a1) popup_call4_audio_wait_window_ParamLimits

0xd5d3,	// (0x000aa4a1) popup_call4_audio_wait_window

0x6342,	// (0x000a3210) cell_call4_button_pane_ParamLimits

0x6342,	// (0x000a3210) cell_call4_button_pane

0x6365,	// (0x000a3233) bg_button_pane_cp09_ParamLimits

0x6365,	// (0x000a3233) bg_button_pane_cp09

0x6371,	// (0x000a323f) cell_call4_button_pane_g1_ParamLimits

0x6371,	// (0x000a323f) cell_call4_button_pane_g1

0x637e,	// (0x000a324c) cell_call4_button_pane_t1_ParamLimits

0x637e,	// (0x000a324c) cell_call4_button_pane_t1

0xd61b,	// (0x000aa4e9) popup_call4_audio_conf_window_ParamLimits

0xd61b,	// (0x000aa4e9) popup_call4_audio_conf_window

0x55f1,	// (0x000a24bf) mup3_progress_pane_t1_ParamLimits

0x5610,	// (0x000a24de) mup3_progress_pane_t2_ParamLimits

0xcf31,	// (0x000a9dff) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000ac66a) mup3_progress_pane_t_ParamLimits

0xcf4e,	// (0x000a9e1c) mup_progress_pane_cp03_ParamLimits

0x5b0e,	// (0x000a29dc) mup3_control_keys_pane_g4_copy1

0x6007,	// (0x000a2ed5) mp4_rocker2_pane_ParamLimits

0x6007,	// (0x000a2ed5) mp4_rocker2_pane

0xd635,	// (0x000aa503) mp4_rocker2_pane_g1

0xd63d,	// (0x000aa50b) mp4_rocker2_pane_g2

0x6390,	// (0x000a325e) mp4_rocker2_pane_g3

0x6398,	// (0x000a3266) mp4_rocker2_pane_g4

0x63a0,	// (0x000a326e) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000ac79f) mp4_rocker2_pane_g

0x9bed,	// (0x000a6abb) main_camera4_pane

0x9bed,	// (0x000a6abb) main_video4_pane

0x5d62,	// (0x000a2c30) main_video_tele_dialer_pane_t1_ParamLimits

0x5d62,	// (0x000a2c30) main_video_tele_dialer_pane_t1

0x5d74,	// (0x000a2c42) main_video_tele_dialer_pane_t2_ParamLimits

0x5d74,	// (0x000a2c42) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000ac759) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000ac759) main_video_tele_dialer_pane_t

0x63c0,	// (0x000a328e) cam4_autofocus_pane_ParamLimits

0x63c0,	// (0x000a328e) cam4_autofocus_pane

0x63d8,	// (0x000a32a6) cam4_image_uncrop_pane_ParamLimits

0x63d8,	// (0x000a32a6) cam4_image_uncrop_pane

0x63f1,	// (0x000a32bf) cam4_indicators_pane_ParamLimits

0x63f1,	// (0x000a32bf) cam4_indicators_pane

0x640d,	// (0x000a32db) main_camera4_pane_g1_ParamLimits

0x640d,	// (0x000a32db) main_camera4_pane_g1

0x6419,	// (0x000a32e7) main_camera4_pane_g2_ParamLimits

0x6419,	// (0x000a32e7) main_camera4_pane_g2

0x6419,	// (0x000a32e7) main_camera4_pane_g3_ParamLimits

0x6419,	// (0x000a32e7) main_camera4_pane_g3

0x6425,	// (0x000a32f3) main_camera4_pane_g4_ParamLimits

0x6425,	// (0x000a32f3) main_camera4_pane_g4

0x6431,	// (0x000a32ff) main_camera4_pane_g5_ParamLimits

0x6431,	// (0x000a32ff) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000ac7aa) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000ac7aa) main_camera4_pane_g

0x644b,	// (0x000a3319) main_camera4_pane_t1_ParamLimits

0x644b,	// (0x000a3319) main_camera4_pane_t1

0x6495,	// (0x000a3363) bg_tb_trans_pane_cp06

0x64ab,	// (0x000a3379) cam4_indicators_pane_g1

0x64bc,	// (0x000a338a) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000ac7c5) cam4_indicators_pane_g

0x64d4,	// (0x000a33a2) cam4_indicators_pane_t1

0x64fe,	// (0x000a33cc) main_video4_pane_g1_ParamLimits

0x64fe,	// (0x000a33cc) main_video4_pane_g1

0x650a,	// (0x000a33d8) main_video4_pane_g2_ParamLimits

0x650a,	// (0x000a33d8) main_video4_pane_g2

0x6516,	// (0x000a33e4) main_video4_pane_g3_ParamLimits

0x6516,	// (0x000a33e4) main_video4_pane_g3

0x6522,	// (0x000a33f0) main_video4_pane_g4_ParamLimits

0x6522,	// (0x000a33f0) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000ac7cc) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000ac7cc) main_video4_pane_g

0x6544,	// (0x000a3412) vid4_indicators_pane_ParamLimits

0x6544,	// (0x000a3412) vid4_indicators_pane

0x6563,	// (0x000a3431) video4_image_uncrop_cif_pane_ParamLimits

0x6563,	// (0x000a3431) video4_image_uncrop_cif_pane

0x6572,	// (0x000a3440) video4_image_uncrop_nhd_pane_ParamLimits

0x6572,	// (0x000a3440) video4_image_uncrop_nhd_pane

0x63d8,	// (0x000a32a6) video4_image_uncrop_vga_pane_ParamLimits

0x63d8,	// (0x000a32a6) video4_image_uncrop_vga_pane

0x6581,	// (0x000a344f) bg_tb_trans_pane_cp07

0x6599,	// (0x000a3467) vid4_indicators_pane_g1

0x65af,	// (0x000a347d) vid4_indicators_pane_g2

0x65c3,	// (0x000a3491) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000ac7d7) vid4_indicators_pane_g

0x65f4,	// (0x000a34c2) vid4_indicators_pane_t1

0x660b,	// (0x000a34d9) cam4_autofocus_pane_g1

0x6613,	// (0x000a34e1) cam4_autofocus_pane_g2

0x661b,	// (0x000a34e9) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000ac7e2) cam4_autofocus_pane_g

0x6623,	// (0x000a34f1) cam4_autofocus_pane_g3_copy1

0x5d92,	// (0x000a2c60) video_down_pane_cp_t1

0x5da0,	// (0x000a2c6e) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000ac75e) video_down_pane_cp_t

0x0df0,	// (0x0009dcbe) popup_vitu2_window_ParamLimits

0x0df0,	// (0x0009dcbe) popup_vitu2_window

0x662b,	// (0x000a34f9) aid_size_cell2_itu2_ParamLimits

0x662b,	// (0x000a34f9) aid_size_cell2_itu2

0x664d,	// (0x000a351b) aid_size_cell_itu2_ParamLimits

0x664d,	// (0x000a351b) aid_size_cell_itu2

0x6693,	// (0x000a3561) bg_popup_window_pane_cp09_ParamLimits

0x6693,	// (0x000a3561) bg_popup_window_pane_cp09

0x66a1,	// (0x000a356f) field_vitu2_entry_pane_ParamLimits

0x66a1,	// (0x000a356f) field_vitu2_entry_pane

0x66c1,	// (0x000a358f) grid_vitu2_function_pane_ParamLimits

0x66c1,	// (0x000a358f) grid_vitu2_function_pane

0x6705,	// (0x000a35d3) grid_vitu2_itu_pane_ParamLimits

0x6705,	// (0x000a35d3) grid_vitu2_itu_pane

0x6781,	// (0x000a364f) cell_vitu2_itu_pane_ParamLimits

0x6781,	// (0x000a364f) cell_vitu2_itu_pane

0x6798,	// (0x000a3666) cell_vitu2_function_pane_ParamLimits

0x6798,	// (0x000a3666) cell_vitu2_function_pane

0xd645,	// (0x000aa513) bg_popup_call_pane_cp08_ParamLimits

0xd645,	// (0x000aa513) bg_popup_call_pane_cp08

0xd65c,	// (0x000aa52a) field_vitu2_entry_pane_g1

0xd668,	// (0x000aa536) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000ac7e9) field_vitu2_entry_pane_g

0x67dc,	// (0x000a36aa) field_vitu2_entry_pane_t1_ParamLimits

0x67dc,	// (0x000a36aa) field_vitu2_entry_pane_t1

0xa280,	// (0x000a714e) field_vitu2_entry_pane_t2_ParamLimits

0xa280,	// (0x000a714e) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000ac7f0) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000ac7f0) field_vitu2_entry_pane_t

0x680a,	// (0x000a36d8) bg_button_pane_cp010_ParamLimits

0x680a,	// (0x000a36d8) bg_button_pane_cp010

0x6818,	// (0x000a36e6) cell_vitu2_itu_pane_g1

0x6838,	// (0x000a3706) cell_vitu2_itu_pane_t1_ParamLimits

0x6838,	// (0x000a3706) cell_vitu2_itu_pane_t1

0x0aa2,	// (0x0009d970) cell_vitu2_itu_pane_t2_ParamLimits

0x0aa2,	// (0x0009d970) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000ac7fa) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000ac7fa) cell_vitu2_itu_pane_t

0x6581,	// (0x000a344f) bg_button_pane_cp011

0x6884,	// (0x000a3752) cell_vitu2_function_pane_g1

0x9bed,	// (0x000a6abb) main_myfav_hc_pane

0x6253,	// (0x000a3121) popup_image3_note_pane_ParamLimits

0x6253,	// (0x000a3121) popup_image3_note_pane

0x6261,	// (0x000a312f) popup_image3_tool_bar_pane_ParamLimits

0x6261,	// (0x000a312f) popup_image3_tool_bar_pane

0x0b18,	// (0x0009d9e6) cell_vitu2_itu_pane_t3_ParamLimits

0x0b18,	// (0x0009d9e6) cell_vitu2_itu_pane_t3

0x9bed,	// (0x000a6abb) bg_popup_trans_pane

0xd68a,	// (0x000aa558) grid_image3_tool_bar_pane

0xd694,	// (0x000aa562) bg_popup_trans_pane_g1

0xacb9,	// (0x000a7b87) bg_popup_trans_pane_g2

0xd69c,	// (0x000aa56a) bg_popup_trans_pane_g3

0xd6a4,	// (0x000aa572) bg_popup_trans_pane_g4

0xd6ac,	// (0x000aa57a) bg_popup_trans_pane_g5

0xd6b4,	// (0x000aa582) bg_popup_trans_pane_g6

0xd6bc,	// (0x000aa58a) bg_popup_trans_pane_g7

0xd6c4,	// (0x000aa592) bg_popup_trans_pane_g8

0xac99,	// (0x000a7b67) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000ac801) bg_popup_trans_pane_g

0xd6cc,	// (0x000aa59a) cell_image3_tool_bar_pane_ParamLimits

0xd6cc,	// (0x000aa59a) cell_image3_tool_bar_pane

0xcc86,	// (0x000a9b54) cell_image3_tool_bar_pane_g1

0x9bed,	// (0x000a6abb) bg_popup_trans_pane_cp1

0xd6e2,	// (0x000aa5b0) popup_image3_note_pane_t1

0xd6f0,	// (0x000aa5be) popup_image3_note_pane_t2

0xd6fe,	// (0x000aa5cc) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000ac814) popup_image3_note_pane_t

0xd70e,	// (0x000aa5dc) popup_image3_note_pane_t3_copy1

0x6898,	// (0x000a3766) bg_myfav_hc_instruction_pane_ParamLimits

0x6898,	// (0x000a3766) bg_myfav_hc_instruction_pane

0x68b0,	// (0x000a377e) cell_myfav_contact_pane_ParamLimits

0x68b0,	// (0x000a377e) cell_myfav_contact_pane

0x68ca,	// (0x000a3798) cell_myfav_contact_pane_cp1_ParamLimits

0x68ca,	// (0x000a3798) cell_myfav_contact_pane_cp1

0x68e2,	// (0x000a37b0) cell_myfav_contact_pane_cp2_ParamLimits

0x68e2,	// (0x000a37b0) cell_myfav_contact_pane_cp2

0x68fa,	// (0x000a37c8) cell_myfav_contact_pane_cp3_ParamLimits

0x68fa,	// (0x000a37c8) cell_myfav_contact_pane_cp3

0x6911,	// (0x000a37df) cell_myfav_contact_pane_cp4_ParamLimits

0x6911,	// (0x000a37df) cell_myfav_contact_pane_cp4

0x6927,	// (0x000a37f5) cell_myfav_contact_pane_cp5_ParamLimits

0x6927,	// (0x000a37f5) cell_myfav_contact_pane_cp5

0x693b,	// (0x000a3809) cell_myfav_contact_pane_cp6_ParamLimits

0x693b,	// (0x000a3809) cell_myfav_contact_pane_cp6

0x694f,	// (0x000a381d) cell_myfav_contact_pane_cp7_ParamLimits

0x694f,	// (0x000a381d) cell_myfav_contact_pane_cp7

0xd71c,	// (0x000aa5ea) listscroll_gen_pane_cp05

0x6967,	// (0x000a3835) main_myfav_hc_pane_g1_ParamLimits

0x6967,	// (0x000a3835) main_myfav_hc_pane_g1

0x6981,	// (0x000a384f) main_myfav_hc_pane_g2_ParamLimits

0x6981,	// (0x000a384f) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000ac81b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000ac81b) main_myfav_hc_pane_g

0x69b3,	// (0x000a3881) main_myfav_hc_pane_t1_ParamLimits

0x69b3,	// (0x000a3881) main_myfav_hc_pane_t1

0xd725,	// (0x000aa5f3) main_myfav_hc_pane_t2_ParamLimits

0xd725,	// (0x000aa5f3) main_myfav_hc_pane_t2

0xd737,	// (0x000aa605) main_myfav_hc_pane_t3_ParamLimits

0xd737,	// (0x000aa605) main_myfav_hc_pane_t3

0x69ca,	// (0x000a3898) main_myfav_hc_pane_t4_ParamLimits

0x69ca,	// (0x000a3898) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000ac822) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000ac822) main_myfav_hc_pane_t

0xcc86,	// (0x000a9b54) bg_myfav_hc_instruction_pane_g1

0xd749,	// (0x000aa617) cell_myfav_contact_pane_g1_ParamLimits

0xd749,	// (0x000aa617) cell_myfav_contact_pane_g1

0xd749,	// (0x000aa617) cell_myfav_contact_pane_g2_ParamLimits

0xd749,	// (0x000aa617) cell_myfav_contact_pane_g2

0xd755,	// (0x000aa623) cell_myfav_contact_pane_g3_ParamLimits

0xd755,	// (0x000aa623) cell_myfav_contact_pane_g3

0xcf1b,	// (0x000a9de9) cell_myfav_contact_pane_g4_ParamLimits

0xcf1b,	// (0x000a9de9) cell_myfav_contact_pane_g4

0xd762,	// (0x000aa630) cell_myfav_contact_pane_g5_ParamLimits

0xd762,	// (0x000aa630) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000ac82d) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000ac82d) cell_myfav_contact_pane_g

0x699b,	// (0x000a3869) main_myfav_hc_pane_g3_ParamLimits

0x699b,	// (0x000a3869) main_myfav_hc_pane_g3

0x0d02,	// (0x0009dbd0) popup_adpt_find_window

0x69f4,	// (0x000a38c2) afind_page_pane_ParamLimits

0x69f4,	// (0x000a38c2) afind_page_pane

0x6a01,	// (0x000a38cf) aid_size_cell_afind_ParamLimits

0x6a01,	// (0x000a38cf) aid_size_cell_afind

0x6a1b,	// (0x000a38e9) bg_popup_sub_pane_cp09_ParamLimits

0x6a1b,	// (0x000a38e9) bg_popup_sub_pane_cp09

0x6a28,	// (0x000a38f6) find_pane_cp01_ParamLimits

0x6a28,	// (0x000a38f6) find_pane_cp01

0xd76e,	// (0x000aa63c) grid_afind_control_pane_ParamLimits

0xd76e,	// (0x000aa63c) grid_afind_control_pane

0x6a35,	// (0x000a3903) grid_afind_pane_ParamLimits

0x6a35,	// (0x000a3903) grid_afind_pane

0x6a51,	// (0x000a391f) cell_afind_pane_ParamLimits

0x6a51,	// (0x000a391f) cell_afind_pane

0xcc86,	// (0x000a9b54) afind_page_pane_g1

0x6a9b,	// (0x000a3969) afind_page_pane_g2

0x6aa4,	// (0x000a3972) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000ac838) afind_page_pane_g

0x6aad,	// (0x000a397b) afind_page_pane_t1

0xd782,	// (0x000aa650) cell_afind_grid_control_pane_ParamLimits

0xd782,	// (0x000aa650) cell_afind_grid_control_pane

0xd58a,	// (0x000aa458) bg_button_pane_cp69_ParamLimits

0xd58a,	// (0x000aa458) bg_button_pane_cp69

0x6acd,	// (0x000a399b) cell_afind_pane_g1_ParamLimits

0x6acd,	// (0x000a399b) cell_afind_pane_g1

0x6ada,	// (0x000a39a8) cell_afind_pane_t1_ParamLimits

0x6ada,	// (0x000a39a8) cell_afind_pane_t1

0xaaa2,	// (0x000a7970) bg_button_pane_cp72

0xd791,	// (0x000aa65f) cell_afind_grid_control_pane_g1

0x4016,	// (0x000a0ee4) aid_image_placing_area_ParamLimits

0x4016,	// (0x000a0ee4) aid_image_placing_area

0xd256,	// (0x000aa124) field_vitu_entry_pane_g1_ParamLimits

0xd256,	// (0x000aa124) field_vitu_entry_pane_g1

0xd262,	// (0x000aa130) field_vitu_entry_pane_g2_ParamLimits

0xd262,	// (0x000aa130) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000ac6e9) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000ac6e9) field_vitu_entry_pane_g

0x5b98,	// (0x000a2a66) cell_vitu_itu_pane_g1_ParamLimits

0x5be8,	// (0x000a2ab6) cell_vitu_itu_pane_t3_ParamLimits

0x5be8,	// (0x000a2ab6) cell_vitu_itu_pane_t3

0xd53a,	// (0x000aa408) mp4_progress_pane_t1_ParamLimits

0xd553,	// (0x000aa421) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000ac77e) mp4_progress_pane_t_ParamLimits

0xd56c,	// (0x000aa43a) mup_progress_pane_cp04_ParamLimits

0x69de,	// (0x000a38ac) main_myfav_hc_pane_t5_ParamLimits

0x69de,	// (0x000a38ac) main_myfav_hc_pane_t5

0x0bbe,	// (0x0009da8c) aid_zoom_text_primary

0x0d02,	// (0x0009dbd0) popup_adpt_find_window_ParamLimits

0xa272,	// (0x000a7140) main_cam_set_pane

0x63ff,	// (0x000a32cd) cam4_zoom_pane_ParamLimits

0x63ff,	// (0x000a32cd) cam4_zoom_pane

0x6aec,	// (0x000a39ba) main_cam_set_pane_g1_ParamLimits

0x6aec,	// (0x000a39ba) main_cam_set_pane_g1

0x6afa,	// (0x000a39c8) main_cam_set_pane_g2_ParamLimits

0x6afa,	// (0x000a39c8) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000ac83f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000ac83f) main_cam_set_pane_g

0x6b06,	// (0x000a39d4) main_cam_set_pane_t1_ParamLimits

0x6b06,	// (0x000a39d4) main_cam_set_pane_t1

0x6b22,	// (0x000a39f0) main_cset_listscroll_pane_ParamLimits

0x6b22,	// (0x000a39f0) main_cset_listscroll_pane

0x6b51,	// (0x000a3a1f) main_cset_slider_pane_ParamLimits

0x6b51,	// (0x000a3a1f) main_cset_slider_pane

0xd7a2,	// (0x000aa670) main_cset_list_pane_ParamLimits

0xd7a2,	// (0x000aa670) main_cset_list_pane

0xd7b2,	// (0x000aa680) scroll_pane_cp028

0x6b72,	// (0x000a3a40) aid_area_touch_slider

0x6b8e,	// (0x000a3a5c) cset_slider_pane

0x6bb8,	// (0x000a3a86) main_cset_slider_pane_g1

0x6bcd,	// (0x000a3a9b) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000ac844) main_cset_slider_pane_g

0xd7eb,	// (0x000aa6b9) main_cset_slider_pane_t1

0x6c89,	// (0x000a3b57) main_cset_slider_pane_t2

0x6ca3,	// (0x000a3b71) main_cset_slider_pane_t3

0x6cbd,	// (0x000a3b8b) main_cset_slider_pane_t4

0x6cd7,	// (0x000a3ba5) main_cset_slider_pane_t5

0x6cf1,	// (0x000a3bbf) main_cset_slider_pane_t6

0x6d06,	// (0x000a3bd4) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000ac869) main_cset_slider_pane_t

0x6e0a,	// (0x000a3cd8) cset_list_set_pane_ParamLimits

0x6e0a,	// (0x000a3cd8) cset_list_set_pane

0x6e1b,	// (0x000a3ce9) aid_position_infowindow_above

0x6e23,	// (0x000a3cf1) aid_position_infowindow_below

0x6e2b,	// (0x000a3cf9) cset_list_set_pane_g1_ParamLimits

0x6e2b,	// (0x000a3cf9) cset_list_set_pane_g1

0x6e37,	// (0x000a3d05) cset_list_set_pane_g3_ParamLimits

0x6e37,	// (0x000a3d05) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000ac888) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000ac888) cset_list_set_pane_g

0x6e46,	// (0x000a3d14) cset_list_set_pane_t1_ParamLimits

0x6e46,	// (0x000a3d14) cset_list_set_pane_t1

0xa272,	// (0x000a7140) list_highlight_pane_cp021_ParamLimits

0xa272,	// (0x000a7140) list_highlight_pane_cp021

0xb556,	// (0x000a8424) cset_slider_pane_g1

0xb568,	// (0x000a8436) cset_slider_pane_g2

0xb55f,	// (0x000a842d) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000ac88d) cset_slider_pane_g

0x6e5b,	// (0x000a3d29) aid_area_touch_cam4_zoom

0x6e63,	// (0x000a3d31) cam4_zoom_cont_pane

0x6e6b,	// (0x000a3d39) cam4_zoom_pane_g1

0x6e73,	// (0x000a3d41) cam4_zoom_pane_g2

0x6e7b,	// (0x000a3d49) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000ac894) cam4_zoom_pane_g

0x6e83,	// (0x000a3d51) cam4_zoom_cont_pane_g1

0x6e8c,	// (0x000a3d5a) cam4_zoom_cont_pane_g2

0x6e95,	// (0x000a3d63) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000ac89b) cam4_zoom_cont_pane_g

0x62aa,	// (0x000a3178) call4_image_pane_ParamLimits

0x62aa,	// (0x000a3178) call4_image_pane

0xd596,	// (0x000aa464) call4_windows_conf_pane_ParamLimits

0xd5b1,	// (0x000aa47f) popup_call4_audio_in_window_ParamLimits

0xd5b1,	// (0x000aa47f) popup_call4_audio_in_window

0x9bed,	// (0x000a6abb) bg_popup_call2_act_pane_cp02

0xd613,	// (0x000aa4e1) call4_list_conf_pane

0xcc86,	// (0x000a9b54) call4_image_pane_g1

0xcc86,	// (0x000a9b54) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000ac5aa) call4_image_pane_g

0xd88b,	// (0x000aa759) list_single_graphic_popup_conf4_pane_ParamLimits

0xd88b,	// (0x000aa759) list_single_graphic_popup_conf4_pane

0x9bed,	// (0x000a6abb) list_highlight_pane_cp022

0xd8a0,	// (0x000aa76e) list_single_graphic_popup_conf4_pane_g1

0xb258,	// (0x000a8126) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000ac8a2) list_single_graphic_popup_conf4_pane_g

0xd8a8,	// (0x000aa776) list_single_graphic_popup_conf4_pane_t1

0x2183,	// (0x0009f051) popup_vtel_slider_window_ParamLimits

0x2183,	// (0x0009f051) popup_vtel_slider_window

0xd578,	// (0x000aa446) dialer2_ne_pane_t2_ParamLimits

0xd578,	// (0x000aa446) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000ac783) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000ac783) dialer2_ne_pane_t

0xa272,	// (0x000a7140) bg_popup_sub_pane_cp010_ParamLimits

0xa272,	// (0x000a7140) bg_popup_sub_pane_cp010

0x6e9e,	// (0x000a3d6c) popup_vtel_slider_window_g1_ParamLimits

0x6e9e,	// (0x000a3d6c) popup_vtel_slider_window_g1

0x6eaa,	// (0x000a3d78) popup_vtel_slider_window_g2_ParamLimits

0x6eaa,	// (0x000a3d78) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000ac8a7) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000ac8a7) popup_vtel_slider_window_g

0x6ef2,	// (0x000a3dc0) vtel_slider_pane_ParamLimits

0x6ef2,	// (0x000a3dc0) vtel_slider_pane

0x6f01,	// (0x000a3dcf) vtel_slider_pane_g1_ParamLimits

0x6f01,	// (0x000a3dcf) vtel_slider_pane_g1

0x6f0e,	// (0x000a3ddc) vtel_slider_pane_g2_ParamLimits

0x6f0e,	// (0x000a3ddc) vtel_slider_pane_g2

0x6f1b,	// (0x000a3de9) vtel_slider_pane_g3_ParamLimits

0x6f1b,	// (0x000a3de9) vtel_slider_pane_g3

0x6f01,	// (0x000a3dcf) vtel_slider_pane_g4_ParamLimits

0x6f01,	// (0x000a3dcf) vtel_slider_pane_g4

0x6f28,	// (0x000a3df6) vtel_slider_pane_g5_ParamLimits

0x6f28,	// (0x000a3df6) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000ac8b0) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000ac8b0) vtel_slider_pane_g

0xa272,	// (0x000a7140) main_gallery2_pane

0x6673,	// (0x000a3541) aid_size_row_itut2_dropdow_list_ParamLimits

0x6673,	// (0x000a3541) aid_size_row_itut2_dropdow_list

0x66e3,	// (0x000a35b1) grid_vitu2_function_top_pane_ParamLimits

0x66e3,	// (0x000a35b1) grid_vitu2_function_top_pane

0x6739,	// (0x000a3607) popup_vitu2_dropdown_list_window_ParamLimits

0x6739,	// (0x000a3607) popup_vitu2_dropdown_list_window

0x675d,	// (0x000a362b) popup_vitu2_match_list_window

0x6f35,	// (0x000a3e03) cell_vitu2_function_top_pane_ParamLimits

0x6f35,	// (0x000a3e03) cell_vitu2_function_top_pane

0x6f57,	// (0x000a3e25) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f57,	// (0x000a3e25) cell_vitu2_function_top_pane_cp01

0x6f73,	// (0x000a3e41) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f73,	// (0x000a3e41) cell_vitu2_function_top_wide_pane

0x6581,	// (0x000a344f) bg_button_pane_cp012

0x6f8f,	// (0x000a3e5d) cell_vitu2_function_top_pane_g1

0x6fa3,	// (0x000a3e71) bg_button_pane_cp013_ParamLimits

0x6fa3,	// (0x000a3e71) bg_button_pane_cp013

0x6fbf,	// (0x000a3e8d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6fbf,	// (0x000a3e8d) cell_vitu2_function_top_wide_pane_g1

0x6fd7,	// (0x000a3ea5) bg_popup_sub_pane_cp20

0x6fe5,	// (0x000a3eb3) list_vitu2_match_list_pane

0xd694,	// (0x000aa562) bg_popup_sub_pane_cp20_g1

0xd69c,	// (0x000aa56a) bg_popup_sub_pane_cp20_g2

0xacb9,	// (0x000a7b87) bg_popup_sub_pane_cp20_g3

0xd6a4,	// (0x000aa572) bg_popup_sub_pane_cp20_g4

0xac99,	// (0x000a7b67) bg_popup_sub_pane_cp20_g5

0xd8be,	// (0x000aa78c) bg_popup_sub_pane_cp20_g6

0xd6b4,	// (0x000aa582) bg_popup_sub_pane_cp20_g7

0xd6bc,	// (0x000aa58a) bg_popup_sub_pane_cp20_g8

0xd6c4,	// (0x000aa592) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000ac8bb) bg_popup_sub_pane_cp20_g

0x6ffd,	// (0x000a3ecb) list_vitu2_match_list_item_pane_ParamLimits

0x6ffd,	// (0x000a3ecb) list_vitu2_match_list_item_pane

0x700f,	// (0x000a3edd) list_vitu2_match_list_item_pane_t1

0x115c,	// (0x0009e02a) bg_popup_sub_pane_cp21

0x704d,	// (0x000a3f1b) grid_vitu2_dropdown_list_pane

0x7055,	// (0x000a3f23) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7055,	// (0x000a3f23) cell_vitu2_dropdown_list_char_pane

0x707a,	// (0x000a3f48) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x707a,	// (0x000a3f48) cell_vitu2_dropdown_list_ctrl_pane

0xd8c6,	// (0x000aa794) cell_vitu2_dropdown_list_char_pane_g1

0xd8cf,	// (0x000aa79d) cell_vitu2_dropdown_list_char_pane_g2

0xd8d8,	// (0x000aa7a6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000ac8d8) cell_vitu2_dropdown_list_char_pane_g

0x70a8,	// (0x000a3f76) cell_vitu2_dropdown_list_char_pane_t1

0x70b6,	// (0x000a3f84) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70b6,	// (0x000a3f84) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70c6,	// (0x000a3f94) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70c6,	// (0x000a3f94) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70d7,	// (0x000a3fa5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70d7,	// (0x000a3fa5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70e7,	// (0x000a3fb5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70e7,	// (0x000a3fb5) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6495,	// (0x000a3363) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6495,	// (0x000a3363) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000ac8df) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000ac8df) cell_vitu2_dropdown_list_ctrl_pane_g

0x7100,	// (0x000a3fce) aid_size_cell_gallery2_ParamLimits

0x7100,	// (0x000a3fce) aid_size_cell_gallery2

0x711a,	// (0x000a3fe8) grid_gallery2_pane_ParamLimits

0x711a,	// (0x000a3fe8) grid_gallery2_pane

0x5a1d,	// (0x000a28eb) scroll_pane_cp029_ParamLimits

0x5a1d,	// (0x000a28eb) scroll_pane_cp029

0x7131,	// (0x000a3fff) cell_gallery2_pane_ParamLimits

0x7131,	// (0x000a3fff) cell_gallery2_pane

0xd8e1,	// (0x000aa7af) cell_gallery2_pane_g2

0x717d,	// (0x000a404b) cell_gallery2_pane_g3

0xd8e9,	// (0x000aa7b7) cell_gallery2_pane_g4

0xd8f1,	// (0x000aa7bf) cell_gallery2_pane_g5

0xaa50,	// (0x000a791e) grid_highlight_pane_cp10

0x675d,	// (0x000a362b) popup_vitu2_match_list_window_ParamLimits

0x6771,	// (0x000a363f) popup_vitu2_query_window_ParamLimits

0x6771,	// (0x000a363f) popup_vitu2_query_window

0x115c,	// (0x0009e02a) bg_vitu2_candi_button_pane

0xd8c6,	// (0x000aa794) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8cf,	// (0x000aa79d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8d8,	// (0x000aa7a6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7185,	// (0x000a4053) bg_button_pane_cp015

0x7197,	// (0x000a4065) bg_button_pane_cp016

0x71aa,	// (0x000a4078) bg_button_pane_cp017

0xc835,	// (0x000a9703) bg_popup_sub_pane_cp22

0xd8f9,	// (0x000aa7c7) popup_vitu2_query_window_g1

0x71ef,	// (0x000a40bd) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000ac8ea) popup_vitu2_query_window_g

0x720c,	// (0x000a40da) popup_vitu2_query_window_t1_ParamLimits

0x720c,	// (0x000a40da) popup_vitu2_query_window_t1

0x723f,	// (0x000a410d) popup_vitu2_query_window_t2_ParamLimits

0x723f,	// (0x000a410d) popup_vitu2_query_window_t2

0x7251,	// (0x000a411f) popup_vitu2_query_window_t3_ParamLimits

0x7251,	// (0x000a411f) popup_vitu2_query_window_t3

0x7279,	// (0x000a4147) popup_vitu2_query_window_t4_ParamLimits

0x7279,	// (0x000a4147) popup_vitu2_query_window_t4

0x729c,	// (0x000a416a) popup_vitu2_query_window_t5_ParamLimits

0x729c,	// (0x000a416a) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000ac8f1) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000ac8f1) popup_vitu2_query_window_t

0xd79a,	// (0x000aa668) main_cset_text_pane

0x6b72,	// (0x000a3a40) aid_area_touch_slider_ParamLimits

0x6b8e,	// (0x000a3a5c) cset_slider_pane_ParamLimits

0x6bb8,	// (0x000a3a86) main_cset_slider_pane_g1_ParamLimits

0x6bcd,	// (0x000a3a9b) main_cset_slider_pane_g2_ParamLimits

0xd7bb,	// (0x000aa689) main_cset_slider_pane_g3_ParamLimits

0xd7bb,	// (0x000aa689) main_cset_slider_pane_g3

0x6be2,	// (0x000a3ab0) main_cset_slider_pane_g4_ParamLimits

0x6be2,	// (0x000a3ab0) main_cset_slider_pane_g4

0x6bf1,	// (0x000a3abf) main_cset_slider_pane_g5_ParamLimits

0x6bf1,	// (0x000a3abf) main_cset_slider_pane_g5

0x6bfd,	// (0x000a3acb) main_cset_slider_pane_g6_ParamLimits

0x6bfd,	// (0x000a3acb) main_cset_slider_pane_g6

0xf976,	// (0x000ac844) main_cset_slider_pane_g_ParamLimits

0xd7eb,	// (0x000aa6b9) main_cset_slider_pane_t1_ParamLimits

0x6c89,	// (0x000a3b57) main_cset_slider_pane_t2_ParamLimits

0x6ca3,	// (0x000a3b71) main_cset_slider_pane_t3_ParamLimits

0x6cbd,	// (0x000a3b8b) main_cset_slider_pane_t4_ParamLimits

0x6cd7,	// (0x000a3ba5) main_cset_slider_pane_t5_ParamLimits

0x6cf1,	// (0x000a3bbf) main_cset_slider_pane_t6_ParamLimits

0x6d06,	// (0x000a3bd4) main_cset_slider_pane_t7_ParamLimits

0x6d30,	// (0x000a3bfe) main_cset_slider_pane_t8_ParamLimits

0x6d30,	// (0x000a3bfe) main_cset_slider_pane_t8

0x6d58,	// (0x000a3c26) main_cset_slider_pane_t9_ParamLimits

0x6d58,	// (0x000a3c26) main_cset_slider_pane_t9

0x6d80,	// (0x000a3c4e) main_cset_slider_pane_t10_ParamLimits

0x6d80,	// (0x000a3c4e) main_cset_slider_pane_t10

0x6da8,	// (0x000a3c76) main_cset_slider_pane_t11_ParamLimits

0x6da8,	// (0x000a3c76) main_cset_slider_pane_t11

0x6dd0,	// (0x000a3c9e) main_cset_slider_pane_t12_ParamLimits

0x6dd0,	// (0x000a3c9e) main_cset_slider_pane_t12

0x6ded,	// (0x000a3cbb) main_cset_slider_pane_t13_ParamLimits

0x6ded,	// (0x000a3cbb) main_cset_slider_pane_t13

0xf99b,	// (0x000ac869) main_cset_slider_pane_t_ParamLimits

0x9bed,	// (0x000a6abb) bg_popup_sub_pane_cp011

0xd905,	// (0x000aa7d3) main_cset_text_pane_g1

0xd90d,	// (0x000aa7db) main_cset_text_pane_t1

0xd91b,	// (0x000aa7e9) main_cset_text_pane_t2

0xd929,	// (0x000aa7f7) main_cset_text_pane_t3

0xd937,	// (0x000aa805) main_cset_text_pane_t4

0xd945,	// (0x000aa813) main_cset_text_pane_t5

0xd953,	// (0x000aa821) main_cset_text_pane_t6

0xd961,	// (0x000aa82f) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000ac900) main_cset_text_pane_t

0x9bed,	// (0x000a6abb) main_cam4_burst_pane

0x9bed,	// (0x000a6abb) main_cam5_pane

0x6abb,	// (0x000a3989) bg_button_pane_cp019

0x6ac4,	// (0x000a3992) bg_button_pane_cp020

0xd7c7,	// (0x000aa695) main_cset_slider_pane_g7_ParamLimits

0xd7c7,	// (0x000aa695) main_cset_slider_pane_g7

0xd7d3,	// (0x000aa6a1) main_cset_slider_pane_g8_ParamLimits

0xd7d3,	// (0x000aa6a1) main_cset_slider_pane_g8

0x6c11,	// (0x000a3adf) main_cset_slider_pane_g9_ParamLimits

0x6c11,	// (0x000a3adf) main_cset_slider_pane_g9

0x6c1d,	// (0x000a3aeb) main_cset_slider_pane_g10_ParamLimits

0x6c1d,	// (0x000a3aeb) main_cset_slider_pane_g10

0x6c29,	// (0x000a3af7) main_cset_slider_pane_g11_ParamLimits

0x6c29,	// (0x000a3af7) main_cset_slider_pane_g11

0x6c35,	// (0x000a3b03) main_cset_slider_pane_g12_ParamLimits

0x6c35,	// (0x000a3b03) main_cset_slider_pane_g12

0x6c41,	// (0x000a3b0f) main_cset_slider_pane_g13_ParamLimits

0x6c41,	// (0x000a3b0f) main_cset_slider_pane_g13

0x6c4d,	// (0x000a3b1b) main_cset_slider_pane_g14_ParamLimits

0x6c4d,	// (0x000a3b1b) main_cset_slider_pane_g14

0x6c59,	// (0x000a3b27) main_cset_slider_pane_g15_ParamLimits

0x6c59,	// (0x000a3b27) main_cset_slider_pane_g15

0xd819,	// (0x000aa6e7) main_cset_slider_pane_t14_ParamLimits

0xd819,	// (0x000aa6e7) main_cset_slider_pane_t14

0xd852,	// (0x000aa720) main_cset_slider_pane_t15_ParamLimits

0xd852,	// (0x000aa720) main_cset_slider_pane_t15

0x7315,	// (0x000a41e3) aid_cam4_burst_size_cell_ParamLimits

0x7315,	// (0x000a41e3) aid_cam4_burst_size_cell

0x7331,	// (0x000a41ff) grid_cam4_burst_pane_ParamLimits

0x7331,	// (0x000a41ff) grid_cam4_burst_pane

0x7363,	// (0x000a4231) linegrid_cam4_burst_pane_ParamLimits

0x7363,	// (0x000a4231) linegrid_cam4_burst_pane

0x7381,	// (0x000a424f) scroll_pane_cp30_ParamLimits

0x7381,	// (0x000a424f) scroll_pane_cp30

0x738d,	// (0x000a425b) cell_cam4_burst_pane_ParamLimits

0x738d,	// (0x000a425b) cell_cam4_burst_pane

0xd96f,	// (0x000aa83d) linegrid_cam4_burst_pane_g1_ParamLimits

0xd96f,	// (0x000aa83d) linegrid_cam4_burst_pane_g1

0x73cd,	// (0x000a429b) linegrid_cam4_burst_pane_g2_ParamLimits

0x73cd,	// (0x000a429b) linegrid_cam4_burst_pane_g2

0xd97c,	// (0x000aa84a) linegrid_cam4_burst_pane_g3_ParamLimits

0xd97c,	// (0x000aa84a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000ac90f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000ac90f) linegrid_cam4_burst_pane_g

0x73de,	// (0x000a42ac) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73de,	// (0x000a42ac) linegrid_cam4_burst_pane_g3_copy1

0xd989,	// (0x000aa857) linegrid_cam4_burst_pane_g4_ParamLimits

0xd989,	// (0x000aa857) linegrid_cam4_burst_pane_g4

0x73f8,	// (0x000a42c6) linegrid_cam4_burst_pane_g5_ParamLimits

0x73f8,	// (0x000a42c6) linegrid_cam4_burst_pane_g5

0x7409,	// (0x000a42d7) linegrid_cam4_burst_pane_g6_ParamLimits

0x7409,	// (0x000a42d7) linegrid_cam4_burst_pane_g6

0xd996,	// (0x000aa864) linegrid_cam4_burst_pane_g7_ParamLimits

0xd996,	// (0x000aa864) linegrid_cam4_burst_pane_g7

0x7420,	// (0x000a42ee) cell_cam4_burst_pane_g1

0xd9af,	// (0x000aa87d) main_cam5_pane_t1_ParamLimits

0xd9af,	// (0x000aa87d) main_cam5_pane_t1

0xd9c1,	// (0x000aa88f) main_cam5_pane_t2_ParamLimits

0xd9c1,	// (0x000aa88f) main_cam5_pane_t2

0xd9d3,	// (0x000aa8a1) main_cam5_pane_t3_ParamLimits

0xd9d3,	// (0x000aa8a1) main_cam5_pane_t3

0xd9e5,	// (0x000aa8b3) main_cam5_pane_t4_ParamLimits

0xd9e5,	// (0x000aa8b3) main_cam5_pane_t4

0xda6b,	// (0x000aa939) main_cam5_pane_t5_ParamLimits

0xda6b,	// (0x000aa939) main_cam5_pane_t5

0xda7f,	// (0x000aa94d) main_cam5_pane_t6_ParamLimits

0xda7f,	// (0x000aa94d) main_cam5_pane_t6

0xda93,	// (0x000aa961) main_cam5_pane_t7_ParamLimits

0xda93,	// (0x000aa961) main_cam5_pane_t7

0xdaa5,	// (0x000aa973) main_cam5_pane_t8_ParamLimits

0xdaa5,	// (0x000aa973) main_cam5_pane_t8

0xdac3,	// (0x000aa991) main_cam5_pane_t9_ParamLimits

0xdac3,	// (0x000aa991) main_cam5_pane_t9

0xdad5,	// (0x000aa9a3) main_cam5_pane_t10_ParamLimits

0xdad5,	// (0x000aa9a3) main_cam5_pane_t10

0xdae7,	// (0x000aa9b5) main_cam5_pane_t11_ParamLimits

0xdae7,	// (0x000aa9b5) main_cam5_pane_t11

0xdafb,	// (0x000aa9c9) main_cam5_pane_t12_ParamLimits

0xdafb,	// (0x000aa9c9) main_cam5_pane_t12

0xdb12,	// (0x000aa9e0) main_cam5_pane_t13_ParamLimits

0xdb12,	// (0x000aa9e0) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000ac91b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000ac91b) main_cam5_pane_t

0x0daf,	// (0x0009dc7d) popup_scut_keymap_window_ParamLimits

0x0daf,	// (0x0009dc7d) popup_scut_keymap_window

0x7433,	// (0x000a4301) aid_size_cell_brow_shortcut

0xaa50,	// (0x000a791e) bg_popup_window_pane_cp010

0x743f,	// (0x000a430d) grid_scut_pane

0x744b,	// (0x000a4319) cell_scut_pane_ParamLimits

0x744b,	// (0x000a4319) cell_scut_pane

0x7466,	// (0x000a4334) cell_scut_pane_g1

0xdb35,	// (0x000aaa03) cell_scut_pane_t1

0xdb44,	// (0x000aaa12) cell_scut_pane_t2

0x746f,	// (0x000a433d) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000ac936) cell_scut_pane_t

0x5212,	// (0x000a20e0) main_mup3_pane_g8_ParamLimits

0x5212,	// (0x000a20e0) main_mup3_pane_g8

0x6683,	// (0x000a3551) area_vitu2_query_pane_ParamLimits

0x6683,	// (0x000a3551) area_vitu2_query_pane

0x71bd,	// (0x000a408b) input_focus_pane_cp08

0xdb53,	// (0x000aaa21) area_vitu2_query_pane_g1

0x747d,	// (0x000a434b) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000ac93d) area_vitu2_query_pane_g

0x748e,	// (0x000a435c) area_vitu2_query_pane_t1_ParamLimits

0x748e,	// (0x000a435c) area_vitu2_query_pane_t1

0x74a2,	// (0x000a4370) area_vitu2_query_pane_t2_ParamLimits

0x74a2,	// (0x000a4370) area_vitu2_query_pane_t2

0x74b6,	// (0x000a4384) area_vitu2_query_pane_t3_ParamLimits

0x74b6,	// (0x000a4384) area_vitu2_query_pane_t3

0xa2b7,	// (0x000a7185) area_vitu2_query_pane_t4_ParamLimits

0xa2b7,	// (0x000a7185) area_vitu2_query_pane_t4

0xa2df,	// (0x000a71ad) area_vitu2_query_pane_t5_ParamLimits

0xa2df,	// (0x000a71ad) area_vitu2_query_pane_t5

0xa307,	// (0x000a71d5) area_vitu2_query_pane_t6_ParamLimits

0xa307,	// (0x000a71d5) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000ac942) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000ac942) area_vitu2_query_pane_t

0x74de,	// (0x000a43ac) bg_button_pane_cp018

0x74ec,	// (0x000a43ba) bg_button_pane_cp021

0x74f8,	// (0x000a43c6) bg_button_pane_cp022

0x7509,	// (0x000a43d7) input_focus_pane_cp09

0x3630,	// (0x000a04fe) aid_size_touch_mv_arrow_left

0x365b,	// (0x000a0529) aid_size_touch_mv_arrow_right

0x6c71,	// (0x000a3b3f) main_cset_slider_pane_g16_ParamLimits

0x6c71,	// (0x000a3b3f) main_cset_slider_pane_g16

0x6c7d,	// (0x000a3b4b) main_cset_slider_pane_g17_ParamLimits

0x6c7d,	// (0x000a3b4b) main_cset_slider_pane_g17

0x7420,	// (0x000a42ee) cell_cam4_burst_pane_g1_ParamLimits

0x9bed,	// (0x000a6abb) compa_mode_pane

0x6eb6,	// (0x000a3d84) popup_vtel_slider_window_g3_ParamLimits

0x6eb6,	// (0x000a3d84) popup_vtel_slider_window_g3

0x6eca,	// (0x000a3d98) popup_vtel_slider_window_g4_ParamLimits

0x6eca,	// (0x000a3d98) popup_vtel_slider_window_g4

0x6ede,	// (0x000a3dac) popup_vtel_slider_window_t1_ParamLimits

0x6ede,	// (0x000a3dac) popup_vtel_slider_window_t1

0x9bed,	// (0x000a6abb) main_cl_pane

0xc861,	// (0x000a972f) popup_imed_adjust2_window_ParamLimits

0xc835,	// (0x000a9703) bg_tb_trans_pane_cp05_ParamLimits

0xd18b,	// (0x000aa059) popup_imed_adjust2_window_g1_ParamLimits

0xd19a,	// (0x000aa068) popup_imed_adjust2_window_g2_ParamLimits

0xd19a,	// (0x000aa068) popup_imed_adjust2_window_g2

0xd1a6,	// (0x000aa074) popup_imed_adjust2_window_g3_ParamLimits

0xd1a6,	// (0x000aa074) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000ac6ad) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000ac6ad) popup_imed_adjust2_window_g

0xd1b2,	// (0x000aa080) popup_imed_adjust2_window_t1_ParamLimits

0xd1ca,	// (0x000aa098) slider_imed_adjust_pane_ParamLimits

0xd1de,	// (0x000aa0ac) slider_imed_adjust_pane_g1_ParamLimits

0xd1ee,	// (0x000aa0bc) slider_imed_adjust_pane_g2_ParamLimits

0xd1fe,	// (0x000aa0cc) slider_imed_adjust_pane_g3_ParamLimits

0xd20f,	// (0x000aa0dd) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000ac6b4) slider_imed_adjust_pane_g_ParamLimits

0x63a8,	// (0x000a3276) aid_touch_area_cam4_ParamLimits

0x63a8,	// (0x000a3276) aid_touch_area_cam4

0x63b8,	// (0x000a3286) battery_pane_cp01

0x643f,	// (0x000a330d) main_camera4_pane_g6_ParamLimits

0x643f,	// (0x000a330d) main_camera4_pane_g6

0x645d,	// (0x000a332b) main_camera4_pane_t2_ParamLimits

0x645d,	// (0x000a332b) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000ac7b7) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000ac7b7) main_camera4_pane_t

0x64ee,	// (0x000a33bc) aid_touch_area_vid4_ParamLimits

0x64ee,	// (0x000a33bc) aid_touch_area_vid4

0x652e,	// (0x000a33fc) main_video4_pane_g5_ParamLimits

0x652e,	// (0x000a33fc) main_video4_pane_g5

0x6554,	// (0x000a3422) vid4_progress_pane_ParamLimits

0x6554,	// (0x000a3422) vid4_progress_pane

0xd7df,	// (0x000aa6ad) main_cset_slider_pane_g18_ParamLimits

0xd7df,	// (0x000aa6ad) main_cset_slider_pane_g18

0xd9a3,	// (0x000aa871) cell_cam4_burst_pane_g2_ParamLimits

0xd9a3,	// (0x000aa871) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000ac916) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000ac916) cell_cam4_burst_pane_g

0x751a,	// (0x000a43e8) bg_cl_pane_ParamLimits

0x751a,	// (0x000a43e8) bg_cl_pane

0x7526,	// (0x000a43f4) cl_header_pane_ParamLimits

0x7526,	// (0x000a43f4) cl_header_pane

0x7532,	// (0x000a4400) cl_listscroll_pane_ParamLimits

0x7532,	// (0x000a4400) cl_listscroll_pane

0xdb5f,	// (0x000aaa2d) bg_cl_pane_g1

0xdb67,	// (0x000aaa35) bg_cl_pane_g2

0xdb6f,	// (0x000aaa3d) bg_cl_pane_g3

0xdb77,	// (0x000aaa45) bg_cl_pane_g4

0xdb7f,	// (0x000aaa4d) bg_cl_pane_g5

0xdb87,	// (0x000aaa55) bg_cl_pane_g6

0xdb8f,	// (0x000aaa5d) bg_cl_pane_g7

0xdb97,	// (0x000aaa65) bg_cl_pane_g8

0xdb9f,	// (0x000aaa6d) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000ac951) bg_cl_pane_g

0x753e,	// (0x000a440c) aid_height_cl_leading_ParamLimits

0x753e,	// (0x000a440c) aid_height_cl_leading

0x754a,	// (0x000a4418) aid_height_cl_text_ParamLimits

0x754a,	// (0x000a4418) aid_height_cl_text

0x0df0,	// (0x0009dcbe) bg_cl_header_pane_ParamLimits

0x0df0,	// (0x0009dcbe) bg_cl_header_pane

0x7562,	// (0x000a4430) cl_header_pane_g1_ParamLimits

0x7562,	// (0x000a4430) cl_header_pane_g1

0x756f,	// (0x000a443d) cl_header_pane_t1_ParamLimits

0x756f,	// (0x000a443d) cl_header_pane_t1

0xdba7,	// (0x000aaa75) cl_list_pane

0xd7b2,	// (0x000aa680) hc_scroll_pane_cp01

0xac99,	// (0x000a7b67) bg_cl_header_pane_g1

0xd694,	// (0x000aa562) bg_cl_header_pane_g2

0xacb9,	// (0x000a7b87) bg_cl_header_pane_g3

0xd6a4,	// (0x000aa572) bg_cl_header_pane_g4

0xd69c,	// (0x000aa56a) bg_cl_header_pane_g5

0xd8be,	// (0x000aa78c) bg_cl_header_pane_g6

0xd6bc,	// (0x000aa58a) bg_cl_header_pane_g7

0xd6c4,	// (0x000aa592) bg_cl_header_pane_g8

0xd6b4,	// (0x000aa582) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000ac964) bg_cl_header_pane_g

0x7581,	// (0x000a444f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7581,	// (0x000a444f) hc_cl_list_double_graphic_heading_pane

0x7591,	// (0x000a445f) hc_cl_list_single_graphic_pane_ParamLimits

0x7591,	// (0x000a445f) hc_cl_list_single_graphic_pane

0x75a3,	// (0x000a4471) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75a3,	// (0x000a4471) hc_cl_list_single_graphic_pane_g1

0x75af,	// (0x000a447d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75af,	// (0x000a447d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000ac977) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000ac977) hc_cl_list_single_graphic_pane_g

0x75c3,	// (0x000a4491) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75c3,	// (0x000a4491) hc_cl_list_single_graphic_pane_t1

0x75a3,	// (0x000a4471) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75a3,	// (0x000a4471) hc_cl_list_double_graphic_heading_pane_g1

0x75d8,	// (0x000a44a6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75d8,	// (0x000a44a6) hc_cl_list_double_graphic_heading_pane_g2

0x75ec,	// (0x000a44ba) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75ec,	// (0x000a44ba) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000ac97c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000ac97c) hc_cl_list_double_graphic_heading_pane_g

0x7600,	// (0x000a44ce) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7600,	// (0x000a44ce) hc_cl_list_double_graphic_heading_pane_t1

0x7615,	// (0x000a44e3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7615,	// (0x000a44e3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000ac983) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000ac983) hc_cl_list_double_graphic_heading_pane_t

0x7632,	// (0x000a4500) vid4_progress_pane_g1

0x7644,	// (0x000a4512) vid4_progress_pane_g2

0x3d61,	// (0x000a0c2f) vid4_progress_pane_g3

0x7656,	// (0x000a4524) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000ac988) vid4_progress_pane_g

0x7674,	// (0x000a4542) vid4_progress_pane_t1

0x7689,	// (0x000a4557) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000ac993) vid4_progress_pane_t

0x76b4,	// (0x000a4582) wait_bar_pane_cp07

0xca73,	// (0x000a9941) blid_firmament_pane_ParamLimits

0xcab6,	// (0x000a9984) popup_blid_sat_info2_window_g1

0xcada,	// (0x000a99a8) popup_blid_sat_info2_window_t3

0xcae8,	// (0x000a99b6) popup_blid_sat_info2_window_t4

0xcaf6,	// (0x000a99c4) popup_blid_sat_info2_window_t5

0xcb04,	// (0x000a99d2) popup_blid_sat_info2_window_t6

0xcb14,	// (0x000a99e2) popup_blid_sat_info2_window_t7

0xcb22,	// (0x000a99f0) popup_blid_sat_info2_window_t8

0xcb30,	// (0x000a99fe) popup_blid_sat_info2_window_t9

0xcb3e,	// (0x000a9a0c) popup_blid_sat_info2_window_t10

0xcc06,	// (0x000a9ad4) aid_firma_cardinal_ParamLimits

0xcc1a,	// (0x000a9ae8) blid_firmament_pane_t1_ParamLimits

0xcc31,	// (0x000a9aff) blid_firmament_pane_t2_ParamLimits

0xcc48,	// (0x000a9b16) blid_firmament_pane_t3_ParamLimits

0xcc5f,	// (0x000a9b2d) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000ac5a1) blid_firmament_pane_t_ParamLimits

0xcc76,	// (0x000a9b44) blid_sat_info_pane_ParamLimits

0xa272,	// (0x000a7140) main_cam_set_pane_ParamLimits

0x59b6,	// (0x000a2884) aid_size_cell_colour_35_ParamLimits

0x59d0,	// (0x000a289e) aid_size_cell_colour_112_ParamLimits

0x59e7,	// (0x000a28b5) aid_size_cell_effect_ParamLimits

0xa272,	// (0x000a7140) bg_tb_trans_pane_cp02_ParamLimits

0xb099,	// (0x000a7f67) heading_imed_pane_ParamLimits

0x5a01,	// (0x000a28cf) listscroll_imed_pane_ParamLimits

0xbe57,	// (0x000a8d25) popup_call2_audio_first_window_g5_ParamLimits

0xbe57,	// (0x000a8d25) popup_call2_audio_first_window_g5

0x6113,	// (0x000a2fe1) aid_size_touch_image3_arrow_left_ParamLimits

0x6113,	// (0x000a2fe1) aid_size_touch_image3_arrow_left

0x6129,	// (0x000a2ff7) aid_size_touch_image3_arrow_right_ParamLimits

0x6129,	// (0x000a2ff7) aid_size_touch_image3_arrow_right

0x769f,	// (0x000a456d) vid4_progress_pane_t3

0x5caf,	// (0x000a2b7d) main_hwr_training_symbol_option_pane_ParamLimits

0x5caf,	// (0x000a2b7d) main_hwr_training_symbol_option_pane

0xd47a,	// (0x000aa348) popup_hwr_training_preview_window_ParamLimits

0xd47a,	// (0x000aa348) popup_hwr_training_preview_window

0x5d10,	// (0x000a2bde) hwr_training_navi_pane_g5_ParamLimits

0x5d10,	// (0x000a2bde) hwr_training_navi_pane_g5

0xd682,	// (0x000aa550) popup_char_count_window

0x6fd7,	// (0x000a3ea5) bg_popup_sub_pane_cp20_ParamLimits

0x6fe5,	// (0x000a3eb3) list_vitu2_match_list_pane_ParamLimits

0x6ff1,	// (0x000a3ebf) vitu2_page_scroll_pane_ParamLimits

0x6ff1,	// (0x000a3ebf) vitu2_page_scroll_pane

0xdbb0,	// (0x000aaa7e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbb0,	// (0x000aaa7e) list_single_hwr_training_symbol_option_pane

0xdbc3,	// (0x000aaa91) list_single_hwr_training_symbol_option_pane_g1

0xdbcb,	// (0x000aaa99) list_single_hwr_training_symbol_option_pane_t1

0xdbd9,	// (0x000aaaa7) bg_button_pane_cp023

0xdbe2,	// (0x000aaab0) bg_button_pane_cp024

0x7700,	// (0x000a45ce) vitu2_page_scroll_pane_g1

0x7708,	// (0x000a45d6) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000ac99a) vitu2_page_scroll_pane_g

0x7712,	// (0x000a45e0) vitu2_page_scroll_pane_t1

0xdc15,	// (0x000aaae3) popup_char_count_window_g1

0xdc1e,	// (0x000aaaec) popup_char_count_window_g2

0xdc27,	// (0x000aaaf5) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000ac99f) popup_char_count_window_g

0xdc30,	// (0x000aaafe) popup_char_count_window_t1

0x9bed,	// (0x000a6abb) main_vded2_pane

0xd177,	// (0x000aa045) aid_size_cell_imed_line

0xd181,	// (0x000aa04f) grid_imed_line_width_pane

0x65d6,	// (0x000a34a4) vid4_indicators_pane_g4

0xdc3e,	// (0x000aab0c) cell_imed_line_width_pane_ParamLimits

0xdc3e,	// (0x000aab0c) cell_imed_line_width_pane

0xdc54,	// (0x000aab22) cell_imed_line_width_pane_g1

0xd12b,	// (0x000a9ff9) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000ac9a6) cell_imed_line_width_pane_g

0x7721,	// (0x000a45ef) main_vded2_pane_g1_ParamLimits

0x7721,	// (0x000a45ef) main_vded2_pane_g1

0x7730,	// (0x000a45fe) main_vded2_pane_g2_ParamLimits

0x7730,	// (0x000a45fe) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000ac9ab) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000ac9ab) main_vded2_pane_g

0x773e,	// (0x000a460c) vded2_slider_pane_ParamLimits

0x773e,	// (0x000a460c) vded2_slider_pane

0x774b,	// (0x000a4619) aid_size_touch_vded2_end

0x7755,	// (0x000a4623) aid_size_touch_vded2_playhead

0xdc5d,	// (0x000aab2b) aid_size_touch_vded2_start

0xdc65,	// (0x000aab33) vded2_slider_bg_pane

0xdc6e,	// (0x000aab3c) vded2_slider_pane_g1

0xdc77,	// (0x000aab45) vded2_slider_pane_g2

0x775d,	// (0x000a462b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000ac9b0) vded2_slider_pane_g

0xda38,	// (0x000aa906) vded2_slider_bg_pane_g1

0xda41,	// (0x000aa90f) vded2_slider_bg_pane_g2

0xda4a,	// (0x000aa918) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x000ac671) vded2_slider_bg_pane_g

0x3d79,	// (0x000a0c47) aid_postcard_touch_down_pane_ParamLimits

0x3d79,	// (0x000a0c47) aid_postcard_touch_down_pane

0x3d89,	// (0x000a0c57) aid_postcard_touch_up_pane_ParamLimits

0x3d89,	// (0x000a0c57) aid_postcard_touch_up_pane

0x9bed,	// (0x000a6abb) main_blid2_pane

0xc843,	// (0x000a9711) popup_blid2_search_window

0x9bed,	// (0x000a6abb) blid2_gps_pane

0x9bed,	// (0x000a6abb) blid2_navig_pane

0x9bed,	// (0x000a6abb) blid2_search_pane

0x9bed,	// (0x000a6abb) blid2_tripm_pane

0x7766,	// (0x000a4634) blid2_search_pane_g1_ParamLimits

0x7766,	// (0x000a4634) blid2_search_pane_g1

0x7772,	// (0x000a4640) blid2_search_pane_t1_ParamLimits

0x7772,	// (0x000a4640) blid2_search_pane_t1

0x7784,	// (0x000a4652) aid_size_cell_blid2_gps_ParamLimits

0x7784,	// (0x000a4652) aid_size_cell_blid2_gps

0x7794,	// (0x000a4662) blid2_gps_pane_g1_ParamLimits

0x7794,	// (0x000a4662) blid2_gps_pane_g1

0x77a0,	// (0x000a466e) grid_blid2_satellite_pane_ParamLimits

0x77a0,	// (0x000a466e) grid_blid2_satellite_pane

0x77ae,	// (0x000a467c) blid2_navig_pane_g1_ParamLimits

0x77ae,	// (0x000a467c) blid2_navig_pane_g1

0x77ba,	// (0x000a4688) blid2_navig_pane_t1_ParamLimits

0x77ba,	// (0x000a4688) blid2_navig_pane_t1

0x77cc,	// (0x000a469a) blid2_navig_pane_t2_ParamLimits

0x77cc,	// (0x000a469a) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x000ac9b7) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x000ac9b7) blid2_navig_pane_t

0x77de,	// (0x000a46ac) blid2_navig_ring_pane_ParamLimits

0x77de,	// (0x000a46ac) blid2_navig_ring_pane

0x77ee,	// (0x000a46bc) blid2_speed_pane_ParamLimits

0x77ee,	// (0x000a46bc) blid2_speed_pane

0x77fa,	// (0x000a46c8) blid2_tripm_pane_g1_ParamLimits

0x77fa,	// (0x000a46c8) blid2_tripm_pane_g1

0x780a,	// (0x000a46d8) blid2_tripm_pane_g2_ParamLimits

0x780a,	// (0x000a46d8) blid2_tripm_pane_g2

0x7816,	// (0x000a46e4) blid2_tripm_pane_g3_ParamLimits

0x7816,	// (0x000a46e4) blid2_tripm_pane_g3

0x7822,	// (0x000a46f0) blid2_tripm_pane_g4_ParamLimits

0x7822,	// (0x000a46f0) blid2_tripm_pane_g4

0x782e,	// (0x000a46fc) blid2_tripm_pane_g5_ParamLimits

0x782e,	// (0x000a46fc) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x000ac9bc) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x000ac9bc) blid2_tripm_pane_g

0x784a,	// (0x000a4718) blid2_tripm_pane_t1_ParamLimits

0x784a,	// (0x000a4718) blid2_tripm_pane_t1

0x785c,	// (0x000a472a) blid2_tripm_pane_t2_ParamLimits

0x785c,	// (0x000a472a) blid2_tripm_pane_t2

0x786e,	// (0x000a473c) blid2_tripm_pane_t3_ParamLimits

0x786e,	// (0x000a473c) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x000ac9c9) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x000ac9c9) blid2_tripm_pane_t

0x78a0,	// (0x000a476e) cell_blid2_satellite_pane_ParamLimits

0x78a0,	// (0x000a476e) cell_blid2_satellite_pane

0x78be,	// (0x000a478c) cell_blid2_satellite_pane_g1

0xdc7f,	// (0x000aab4d) cell_blid2_satellite_pane_t1

0xcc86,	// (0x000a9b54) blid2_speed_pane_g1

0xdc8d,	// (0x000aab5b) blid2_speed_pane_t1

0xdc9b,	// (0x000aab69) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x000ac9d2) blid2_speed_pane_t

0xcc86,	// (0x000a9b54) blid2_navig_ring_pane_g1

0x78c7,	// (0x000a4795) blid2_navig_ring_pane_g2

0x78cf,	// (0x000a479d) blid2_navig_ring_pane_g3

0x78d7,	// (0x000a47a5) blid2_navig_ring_pane_g4

0x78df,	// (0x000a47ad) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x000ac9d7) blid2_navig_ring_pane_g

0x9bed,	// (0x000a6abb) bg_popup_window_pane_cp011

0xdca9,	// (0x000aab77) popup_blid2_search_window_g1

0xdcb1,	// (0x000aab7f) popup_blid2_search_window_t1

0xdcbf,	// (0x000aab8d) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x000ac9e2) popup_blid2_search_window_t

0xab9c,	// (0x000a7a6a) main_browser_pane_g1

0xa89a,	// (0x000a7768) main_browser_pane_ParamLimits

0x6581,	// (0x000a344f) bg_button_pane_cp011_ParamLimits

0x6884,	// (0x000a3752) cell_vitu2_function_pane_g1_ParamLimits

0xc835,	// (0x000a9703) bg_popup_sub_pane_cp22_ParamLimits

0x71bd,	// (0x000a408b) input_focus_pane_cp08_ParamLimits

0x71d4,	// (0x000a40a2) popup_vitu2_query_button_pane_ParamLimits

0x71d4,	// (0x000a40a2) popup_vitu2_query_button_pane

0x71e5,	// (0x000a40b3) popup_vitu2_query_input_button_pane

0xd8f9,	// (0x000aa7c7) popup_vitu2_query_window_g1_ParamLimits

0x71ef,	// (0x000a40bd) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000ac8ea) popup_vitu2_query_window_g_ParamLimits

0x9bed,	// (0x000a6abb) bg_button_pane_cp026

0x78e7,	// (0x000a47b5) popup_vitu2_query_input_button_pane_g1

0x9bed,	// (0x000a6abb) bg_button_pane_cp025

0xdccd,	// (0x000aab9b) popup_vitu2_query_button_pane_t1

0x4f12,	// (0x000a1de0) main_mp3_pane_t6

0x4f22,	// (0x000a1df0) popup_slider_window_cp01

0x64a3,	// (0x000a3371) cam4_battery_pane

0x658f,	// (0x000a345d) cam4_battery_pane_cp02

0x762a,	// (0x000a44f8) cam4_battery_pane_cp01

0x762a,	// (0x000a44f8) cam4_battery_pane_cp03

0xda53,	// (0x000aa921) cam4_battery_pane_g1

0xcc86,	// (0x000a9b54) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x000ac9e7) cam4_battery_pane_g

0xcb4c,	// (0x000a9a1a) popup_blid_sat_info2_window_t11

0x3630,	// (0x000a04fe) aid_size_touch_mv_arrow_left_ParamLimits

0x365b,	// (0x000a0529) aid_size_touch_mv_arrow_right_ParamLimits

0xb386,	// (0x000a8254) navi_pane_g1_ParamLimits

0x369a,	// (0x000a0568) navi_pane_g2_ParamLimits

0x36c8,	// (0x000a0596) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000ac2b3) navi_pane_g_ParamLimits

0x3722,	// (0x000a05f0) navi_pane_mv_t1_ParamLimits

0x5a0d,	// (0x000a28db) grid_imed_effect_pane_ParamLimits

0x204b,	// (0x0009ef19) aid_placing_vt_slider_lsc

0xaae7,	// (0x000a79b5) aid_placing_vt_slider_prt

0xa272,	// (0x000a7140) bg_tb_trans_pane_cp01_ParamLimits

0xcdd6,	// (0x000a9ca4) popup_image_details_window_g1_ParamLimits

0xcde9,	// (0x000a9cb7) popup_image_details_window_g2_ParamLimits

0xcdfe,	// (0x000a9ccc) popup_image_details_window_g3_ParamLimits

0xcdfe,	// (0x000a9ccc) popup_image_details_window_g3

0xf718,	// (0x000ac5e6) popup_image_details_window_g_ParamLimits

0xce12,	// (0x000a9ce0) popup_image_details_window_t1_ParamLimits

0xce24,	// (0x000a9cf2) popup_image_details_window_t2_ParamLimits

0xce3d,	// (0x000a9d0b) popup_image_details_window_t3_ParamLimits

0xce51,	// (0x000a9d1f) popup_image_details_window_t4_ParamLimits

0xce6c,	// (0x000a9d3a) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000ac5ed) popup_image_details_window_t_ParamLimits

0x7556,	// (0x000a4424) cl_header_name_pane_ParamLimits

0x7556,	// (0x000a4424) cl_header_name_pane

0x78ef,	// (0x000a47bd) cl_header_name_pane_t1_ParamLimits

0x78ef,	// (0x000a47bd) cl_header_name_pane_t1

0x7906,	// (0x000a47d4) cl_header_name_pane_t2_ParamLimits

0x7906,	// (0x000a47d4) cl_header_name_pane_t2

0x7930,	// (0x000a47fe) cl_header_name_pane_t3_ParamLimits

0x7930,	// (0x000a47fe) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x000ac9ec) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x000ac9ec) cl_header_name_pane_t

0x36f3,	// (0x000a05c1) navi_pane_mv_g2_ParamLimits

0xd65c,	// (0x000aa52a) field_vitu2_entry_pane_g1_ParamLimits

0xd668,	// (0x000aa536) field_vitu2_entry_pane_g2_ParamLimits

0xd674,	// (0x000aa542) field_vitu2_entry_pane_g3_ParamLimits

0xd674,	// (0x000aa542) field_vitu2_entry_pane_g3

0xf91b,	// (0x000ac7e9) field_vitu2_entry_pane_g_ParamLimits

0x6818,	// (0x000a36e6) cell_vitu2_itu_pane_g1_ParamLimits

0x682a,	// (0x000a36f8) cell_vitu2_itu_pane_g2_ParamLimits

0x682a,	// (0x000a36f8) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000ac7f5) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000ac7f5) cell_vitu2_itu_pane_g

0x6581,	// (0x000a344f) bg_vkb2_func_pane_cp05_ParamLimits

0x6581,	// (0x000a344f) bg_vkb2_func_pane_cp05

0x6581,	// (0x000a344f) bg_vkb2_func_pane_cp03

0x6581,	// (0x000a344f) bg_vkb2_func_pane_cp04

0x6581,	// (0x000a344f) bg_vkb2_func_pane_cp10_ParamLimits

0x6581,	// (0x000a344f) bg_vkb2_func_pane_cp10

0x74f8,	// (0x000a43c6) bg_vkb2_func_pane_cp08

0x74de,	// (0x000a43ac) bg_vkb2_func_pane_cp06

0x74ec,	// (0x000a43ba) bg_vkb2_func_pane_cp07

0xdbeb,	// (0x000aaab9) bg_vkb2_func_pane_cp11_ParamLimits

0xdbeb,	// (0x000aaab9) bg_vkb2_func_pane_cp11

0xdc00,	// (0x000aaace) bg_vkb2_func_pane_cp12_ParamLimits

0xdc00,	// (0x000aaace) bg_vkb2_func_pane_cp12

0x9bed,	// (0x000a6abb) bg_vkb2_func_pane_cp09

0xd694,	// (0x000aa562) bg_vkb2_func_pane_g1

0xacb9,	// (0x000a7b87) bg_vkb2_func_pane_g2

0xd69c,	// (0x000aa56a) bg_vkb2_func_pane_g3

0xd6a4,	// (0x000aa572) bg_vkb2_func_pane_g4

0xd8be,	// (0x000aa78c) bg_vkb2_func_pane_g5

0xd6bc,	// (0x000aa58a) bg_vkb2_func_pane_g6

0xd6c4,	// (0x000aa592) bg_vkb2_func_pane_g7

0xd6b4,	// (0x000aa582) bg_vkb2_func_pane_g8

0xac99,	// (0x000a7b67) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x000ac9f3) bg_vkb2_func_pane_g

0x783c,	// (0x000a470a) blid2_tripm_pane_g6_ParamLimits

0x783c,	// (0x000a470a) blid2_tripm_pane_g6

0xd532,	// (0x000aa400) mp4_progress_pane_g1

0x7894,	// (0x000a4762) blid2_tripm_values_pane_ParamLimits

0x7894,	// (0x000a4762) blid2_tripm_values_pane

0x7955,	// (0x000a4823) blid2_tripm_values_pane_t1

0x7963,	// (0x000a4831) blid2_tripm_values_pane_t2

0x7971,	// (0x000a483f) blid2_tripm_values_pane_t3

0x797f,	// (0x000a484d) blid2_tripm_values_pane_t4

0x798d,	// (0x000a485b) blid2_tripm_values_pane_t5

0x799b,	// (0x000a4869) blid2_tripm_values_pane_t6

0x79a9,	// (0x000a4877) blid2_tripm_values_pane_t7

0x79b7,	// (0x000a4885) blid2_tripm_values_pane_t8

0x79c5,	// (0x000a4893) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x000aca06) blid2_tripm_values_pane_t

0x2089,	// (0x0009ef57) call_video_pane_t1_ParamLimits

0x20a6,	// (0x0009ef74) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000ac13c) call_video_pane_t_ParamLimits

0x3c84,	// (0x000a0b52) msg_header_pane_g1_ParamLimits

0xb59b,	// (0x000a8469) msg_header_pane_g2_ParamLimits

0xb59b,	// (0x000a8469) msg_header_pane_g2

0x0001,

0xf488,	// (0x000ac356) msg_header_pane_g_ParamLimits

0xf488,	// (0x000ac356) msg_header_pane_g

0xa89a,	// (0x000a7768) main_clock2_pane_ParamLimits

0x579c,	// (0x000a266a) grid_clock2_toolbar_pane_ParamLimits

0x579c,	// (0x000a266a) grid_clock2_toolbar_pane

0x579c,	// (0x000a266a) listscroll_clock2_pane_ParamLimits

0x579c,	// (0x000a266a) listscroll_clock2_pane

0x5844,	// (0x000a2712) main_clock2_pane_t3_ParamLimits

0x5844,	// (0x000a2712) main_clock2_pane_t3

0x5856,	// (0x000a2724) main_clock2_pane_t4_ParamLimits

0x5856,	// (0x000a2724) main_clock2_pane_t4

0xdcdb,	// (0x000aaba9) cell_clock2_toolbar_pane

0xdce3,	// (0x000aabb1) cell_clock2_toolbar_pane_cp01

0xdce3,	// (0x000aabb1) cell_clock2_toolbar_pane_cp02

0xdceb,	// (0x000aabb9) cell_clock2_toolbar_pane_cp03

0xdcf3,	// (0x000aabc1) list_clock2_pane

0xb2ec,	// (0x000a81ba) scroll_pane_cp10

0xdcfb,	// (0x000aabc9) list_single_clock2_pane_ParamLimits

0xdcfb,	// (0x000aabc9) list_single_clock2_pane

0xaa50,	// (0x000a791e) list_highlight_pane_cp08

0xdd08,	// (0x000aabd6) list_single_clock2_pane_t1

0xdd16,	// (0x000aabe4) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x000aca19) list_single_clock2_pane_t

0x9bed,	// (0x000a6abb) bg_button_pane_cp10

0xdd24,	// (0x000aabf2) cell_clock2_toolbar_pane_g1

0x3cdb,	// (0x000a0ba9) aid_main_viewer_pane_g1_ParamLimits

0x3cdb,	// (0x000a0ba9) aid_main_viewer_pane_g1

0x3ce7,	// (0x000a0bb5) aid_main_viewer_pane_g2_ParamLimits

0x3ce7,	// (0x000a0bb5) aid_main_viewer_pane_g2

0x3cf3,	// (0x000a0bc1) aid_main_viewer_pane_g3_ParamLimits

0x3cf3,	// (0x000a0bc1) aid_main_viewer_pane_g3

0x3d04,	// (0x000a0bd2) aid_main_viewer_pane_g4_ParamLimits

0x3d04,	// (0x000a0bd2) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000ac367) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000ac367) aid_main_viewer_pane_g

0x448e,	// (0x000a135c) main_calc_pane_ParamLimits

0x449b,	// (0x000a1369) main_dialer2_pane_ParamLimits

0x9bed,	// (0x000a6abb) main_cam6_pane

0x9bed,	// (0x000a6abb) main_vid6_pane

0x57a8,	// (0x000a2676) listscroll_gen_pane_cp06_ParamLimits

0x57a8,	// (0x000a2676) listscroll_gen_pane_cp06

0x5868,	// (0x000a2736) main_clock2_pane_t5_ParamLimits

0x5868,	// (0x000a2736) main_clock2_pane_t5

0x58b7,	// (0x000a2785) aid_call2_pane_cp10_ParamLimits

0x58c9,	// (0x000a2797) aid_call_pane_cp10_ParamLimits

0xb35b,	// (0x000a8229) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb35b,	// (0x000a8229) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58db,	// (0x000a27a9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58db,	// (0x000a27a9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb35b,	// (0x000a8229) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000ac6a2) popup_clock_analogue_window_cp10_g_ParamLimits

0x58ed,	// (0x000a27bb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60c0,	// (0x000a2f8e) cell_dialer2_keypad_pane_g2_ParamLimits

0x60c0,	// (0x000a2f8e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000ac788) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000ac788) cell_dialer2_keypad_pane_g

0x60dc,	// (0x000a2faa) cell_dialer2_keypad_pane_t1

0x6b5f,	// (0x000a3a2d) main_cset_text2_pane_ParamLimits

0x6b5f,	// (0x000a3a2d) main_cset_text2_pane

0xdb53,	// (0x000aaa21) area_vitu2_query_pane_g1_ParamLimits

0x747d,	// (0x000a434b) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000ac93d) area_vitu2_query_pane_g_ParamLimits

0xa32f,	// (0x000a71fd) area_vitu2_query_pane_t7_ParamLimits

0xa32f,	// (0x000a71fd) area_vitu2_query_pane_t7

0x74de,	// (0x000a43ac) bg_button_pane_cp018_ParamLimits

0x74ec,	// (0x000a43ba) bg_button_pane_cp021_ParamLimits

0x74f8,	// (0x000a43c6) bg_button_pane_cp022_ParamLimits

0x74f8,	// (0x000a43c6) bg_vkb2_func_pane_cp08_ParamLimits

0x74de,	// (0x000a43ac) bg_vkb2_func_pane_cp06_ParamLimits

0x74ec,	// (0x000a43ba) bg_vkb2_func_pane_cp07_ParamLimits

0x7509,	// (0x000a43d7) input_focus_pane_cp09_ParamLimits

0x79d3,	// (0x000a48a1) cam6_autofocus_pane_ParamLimits

0x79d3,	// (0x000a48a1) cam6_autofocus_pane

0x79f5,	// (0x000a48c3) cam6_image_uncrop_pane_ParamLimits

0x79f5,	// (0x000a48c3) cam6_image_uncrop_pane

0x7a22,	// (0x000a48f0) cam6_indi_pane_ParamLimits

0x7a22,	// (0x000a48f0) cam6_indi_pane

0x7a3c,	// (0x000a490a) cam6_mode_pane_ParamLimits

0x7a3c,	// (0x000a490a) cam6_mode_pane

0x7a50,	// (0x000a491e) cam6_timer_pane_ParamLimits

0x7a50,	// (0x000a491e) cam6_timer_pane

0x7a5c,	// (0x000a492a) cam6_zoom_pane_ParamLimits

0x7a5c,	// (0x000a492a) cam6_zoom_pane

0x7a78,	// (0x000a4946) cam6_mode_pane_g1_ParamLimits

0x7a78,	// (0x000a4946) cam6_mode_pane_g1

0x7a84,	// (0x000a4952) cam6_mode_pane_g2_ParamLimits

0x7a84,	// (0x000a4952) cam6_mode_pane_g2

0x7a90,	// (0x000a495e) cam6_mode_pane_g3_ParamLimits

0x7a90,	// (0x000a495e) cam6_mode_pane_g3

0x7a9c,	// (0x000a496a) cam6_mode_pane_g4_ParamLimits

0x7a9c,	// (0x000a496a) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x000aca1e) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x000aca1e) cam6_mode_pane_g

0xda5d,	// (0x000aa92b) bg_tb_trans_pane_cp08_ParamLimits

0xda5d,	// (0x000aa92b) bg_tb_trans_pane_cp08

0xdd2c,	// (0x000aabfa) cam6_battery_pane_ParamLimits

0xdd2c,	// (0x000aabfa) cam6_battery_pane

0xdd42,	// (0x000aac10) cam6_indi_pane_g1_ParamLimits

0xdd42,	// (0x000aac10) cam6_indi_pane_g1

0xdd54,	// (0x000aac22) cam6_indi_pane_g2_ParamLimits

0xdd54,	// (0x000aac22) cam6_indi_pane_g2

0xdd66,	// (0x000aac34) cam6_indi_pane_g3_ParamLimits

0xdd66,	// (0x000aac34) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x000aca27) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x000aca27) cam6_indi_pane_g

0xdd78,	// (0x000aac46) cam6_indi_pane_t1_ParamLimits

0xdd78,	// (0x000aac46) cam6_indi_pane_t1

0x6613,	// (0x000a34e1) cam6_autofocus_pane_g1

0x660b,	// (0x000a34d9) cam6_autofocus_pane_g2

0x6623,	// (0x000a34f1) cam6_autofocus_pane_g3

0x661b,	// (0x000a34e9) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x000aca2e) cam6_autofocus_pane_g

0xdd9e,	// (0x000aac6c) cam6_timer_pane_g1

0xdda6,	// (0x000aac74) cam6_timer_pane_t1

0xddb4,	// (0x000aac82) cam6_zoom_cont_pane

0xddbc,	// (0x000aac8a) cam6_zoom_pane_g1

0xddc4,	// (0x000aac92) cam6_zoom_pane_g2

0x7aa8,	// (0x000a4976) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x000aca37) cam6_zoom_pane_g

0xcc86,	// (0x000a9b54) cam6_battery_pane_g1

0xcc86,	// (0x000a9b54) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000ac5aa) cam6_battery_pane_g

0xddcc,	// (0x000aac9a) cam6_zoom_cont_pane_g1

0xddd5,	// (0x000aaca3) cam6_zoom_cont_pane_g2

0xddde,	// (0x000aacac) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x000aca3e) cam6_zoom_cont_pane_g

0x7ac5,	// (0x000a4993) cam6_mode_pane_cp_ParamLimits

0x7ac5,	// (0x000a4993) cam6_mode_pane_cp

0x7ad9,	// (0x000a49a7) cam6_zoom_pane_cp_ParamLimits

0x7ad9,	// (0x000a49a7) cam6_zoom_pane_cp

0x7af5,	// (0x000a49c3) vid6_image_uncrop_cif_pane_ParamLimits

0x7af5,	// (0x000a49c3) vid6_image_uncrop_cif_pane

0x7b21,	// (0x000a49ef) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b21,	// (0x000a49ef) vid6_image_uncrop_nhd_pane

0x7b40,	// (0x000a4a0e) vid6_image_uncrop_vga_pane_ParamLimits

0x7b40,	// (0x000a4a0e) vid6_image_uncrop_vga_pane

0x7b5f,	// (0x000a4a2d) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b5f,	// (0x000a4a2d) vid6_image_uncrop_wvga_pane

0x7b7e,	// (0x000a4a4c) vid6_indi_pane_ParamLimits

0x7b7e,	// (0x000a4a4c) vid6_indi_pane

0xda5d,	// (0x000aa92b) bg_tb_trans_pane_cp09_ParamLimits

0xda5d,	// (0x000aa92b) bg_tb_trans_pane_cp09

0xddf6,	// (0x000aacc4) cam6_battery_pane_cp_ParamLimits

0xddf6,	// (0x000aacc4) cam6_battery_pane_cp

0xde02,	// (0x000aacd0) vid6_indi_pane_g1_ParamLimits

0xde02,	// (0x000aacd0) vid6_indi_pane_g1

0xde14,	// (0x000aace2) vid6_indi_pane_g2_ParamLimits

0xde14,	// (0x000aace2) vid6_indi_pane_g2

0xde26,	// (0x000aacf4) vid6_indi_pane_g3_ParamLimits

0xde26,	// (0x000aacf4) vid6_indi_pane_g3

0xde3d,	// (0x000aad0b) vid6_indi_pane_g4_ParamLimits

0xde3d,	// (0x000aad0b) vid6_indi_pane_g4

0xde54,	// (0x000aad22) vid6_indi_pane_g5_ParamLimits

0xde54,	// (0x000aad22) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x000aca45) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x000aca45) vid6_indi_pane_g

0xde6e,	// (0x000aad3c) vid6_indi_pane_t1_ParamLimits

0xde6e,	// (0x000aad3c) vid6_indi_pane_t1

0xde84,	// (0x000aad52) vid6_indi_pane_t2_ParamLimits

0xde84,	// (0x000aad52) vid6_indi_pane_t2

0xdeac,	// (0x000aad7a) vid6_indi_pane_t3_ParamLimits

0xdeac,	// (0x000aad7a) vid6_indi_pane_t3

0xded4,	// (0x000aada2) vid6_indi_pane_t4_ParamLimits

0xded4,	// (0x000aada2) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x000aca50) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x000aca50) vid6_indi_pane_t

0xdef8,	// (0x000aadc6) wait_bar_pane_cp08

0x7ba3,	// (0x000a4a71) main_cset_text2_pane_t1_ParamLimits

0x7ba3,	// (0x000a4a71) main_cset_text2_pane_t1

0x7ab0,	// (0x000a497e) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ab0,	// (0x000a497e) listscroll_gen_pane_cp06_t1

0x9bed,	// (0x000a6abb) main_cam6_set_pane

0x6495,	// (0x000a3363) bg_tb_trans_pane_cp06_ParamLimits

0x64ab,	// (0x000a3379) cam4_indicators_pane_g1_ParamLimits

0x64bc,	// (0x000a338a) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000ac7c5) cam4_indicators_pane_g_ParamLimits

0x64d4,	// (0x000a33a2) cam4_indicators_pane_t1_ParamLimits

0x6581,	// (0x000a344f) bg_tb_trans_pane_cp07_ParamLimits

0x6599,	// (0x000a3467) vid4_indicators_pane_g1_ParamLimits

0x65af,	// (0x000a347d) vid4_indicators_pane_g2_ParamLimits

0x65c3,	// (0x000a3491) vid4_indicators_pane_g3_ParamLimits

0x65d6,	// (0x000a34a4) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000ac7d7) vid4_indicators_pane_g_ParamLimits

0x65f4,	// (0x000a34c2) vid4_indicators_pane_t1_ParamLimits

0x7632,	// (0x000a4500) vid4_progress_pane_g1_ParamLimits

0x7644,	// (0x000a4512) vid4_progress_pane_g2_ParamLimits

0x3d61,	// (0x000a0c2f) vid4_progress_pane_g3_ParamLimits

0x7656,	// (0x000a4524) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000ac988) vid4_progress_pane_g_ParamLimits

0x7674,	// (0x000a4542) vid4_progress_pane_t1_ParamLimits

0x7689,	// (0x000a4557) vid4_progress_pane_t2_ParamLimits

0x769f,	// (0x000a456d) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000ac993) vid4_progress_pane_t_ParamLimits

0x76b4,	// (0x000a4582) wait_bar_pane_cp07_ParamLimits

0x7bca,	// (0x000a4a98) main_cam6_set_pane_g2_ParamLimits

0x7bca,	// (0x000a4a98) main_cam6_set_pane_g2

0x7bd6,	// (0x000a4aa4) main_cset6_listscroll_pane_ParamLimits

0x7bd6,	// (0x000a4aa4) main_cset6_listscroll_pane

0x7c03,	// (0x000a4ad1) main_cset6_slider_pane_ParamLimits

0x7c03,	// (0x000a4ad1) main_cset6_slider_pane

0x7c0f,	// (0x000a4add) main_cset6_text2_pane_ParamLimits

0x7c0f,	// (0x000a4add) main_cset6_text2_pane

0xdf07,	// (0x000aadd5) main_cset6_text_pane

0xdf0f,	// (0x000aaddd) main_cset_list_pane_copy1_ParamLimits

0xdf0f,	// (0x000aaddd) main_cset_list_pane_copy1

0xdf1f,	// (0x000aaded) scroll_pane_cp028_copy1

0x7c22,	// (0x000a4af0) cset_list_set_pane_copy1

0x7c32,	// (0x000a4b00) aid_position_infowindow_above_copy1

0x7c3a,	// (0x000a4b08) aid_position_infowindow_below_copy1

0x7c42,	// (0x000a4b10) cset_list_set_pane_g1_copy1

0x7c4a,	// (0x000a4b18) cset_list_set_pane_g3_copy1_ParamLimits

0x7c4a,	// (0x000a4b18) cset_list_set_pane_g3_copy1

0x7c59,	// (0x000a4b27) cset_list_set_pane_t1_copy1_ParamLimits

0x7c59,	// (0x000a4b27) cset_list_set_pane_t1_copy1

0xa272,	// (0x000a7140) list_highlight_pane_cp021_copy1_ParamLimits

0xa272,	// (0x000a7140) list_highlight_pane_cp021_copy1

0xdf28,	// (0x000aadf6) cset6_slider_pane_ParamLimits

0xdf28,	// (0x000aadf6) cset6_slider_pane

0xdf54,	// (0x000aae22) main_cset6_slider_pane_g1_ParamLimits

0xdf54,	// (0x000aae22) main_cset6_slider_pane_g1

0x7c6e,	// (0x000a4b3c) main_cset6_slider_pane_g2_ParamLimits

0x7c6e,	// (0x000a4b3c) main_cset6_slider_pane_g2

0xdf7c,	// (0x000aae4a) main_cset6_slider_pane_g3_ParamLimits

0xdf7c,	// (0x000aae4a) main_cset6_slider_pane_g3

0x7c96,	// (0x000a4b64) main_cset6_slider_pane_g4_ParamLimits

0x7c96,	// (0x000a4b64) main_cset6_slider_pane_g4

0x7ca2,	// (0x000a4b70) main_cset6_slider_pane_g5_ParamLimits

0x7ca2,	// (0x000a4b70) main_cset6_slider_pane_g5

0xd7c7,	// (0x000aa695) main_cset6_slider_pane_g7_ParamLimits

0xd7c7,	// (0x000aa695) main_cset6_slider_pane_g7

0xd7d3,	// (0x000aa6a1) main_cset6_slider_pane_g8_ParamLimits

0xd7d3,	// (0x000aa6a1) main_cset6_slider_pane_g8

0x7cae,	// (0x000a4b7c) main_cset6_slider_pane_g9_ParamLimits

0x7cae,	// (0x000a4b7c) main_cset6_slider_pane_g9

0x7cba,	// (0x000a4b88) main_cset6_slider_pane_g10_ParamLimits

0x7cba,	// (0x000a4b88) main_cset6_slider_pane_g10

0x7cc6,	// (0x000a4b94) main_cset6_slider_pane_g11_ParamLimits

0x7cc6,	// (0x000a4b94) main_cset6_slider_pane_g11

0x7cd2,	// (0x000a4ba0) main_cset6_slider_pane_g12_ParamLimits

0x7cd2,	// (0x000a4ba0) main_cset6_slider_pane_g12

0x7cde,	// (0x000a4bac) main_cset6_slider_pane_g13_ParamLimits

0x7cde,	// (0x000a4bac) main_cset6_slider_pane_g13

0x7cea,	// (0x000a4bb8) main_cset6_slider_pane_g14_ParamLimits

0x7cea,	// (0x000a4bb8) main_cset6_slider_pane_g14

0x7cf6,	// (0x000a4bc4) main_cset6_slider_pane_g15_ParamLimits

0x7cf6,	// (0x000a4bc4) main_cset6_slider_pane_g15

0x7d0e,	// (0x000a4bdc) main_cset6_slider_pane_g16_ParamLimits

0x7d0e,	// (0x000a4bdc) main_cset6_slider_pane_g16

0x7d1a,	// (0x000a4be8) main_cset6_slider_pane_g17_ParamLimits

0x7d1a,	// (0x000a4be8) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x000aca59) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x000aca59) main_cset6_slider_pane_g

0xdf88,	// (0x000aae56) main_cset6_slider_pane_t1_ParamLimits

0xdf88,	// (0x000aae56) main_cset6_slider_pane_t1

0x7d3e,	// (0x000a4c0c) main_cset6_slider_pane_t2_ParamLimits

0x7d3e,	// (0x000a4c0c) main_cset6_slider_pane_t2

0x7d69,	// (0x000a4c37) main_cset6_slider_pane_t3_ParamLimits

0x7d69,	// (0x000a4c37) main_cset6_slider_pane_t3

0x7d94,	// (0x000a4c62) main_cset6_slider_pane_t4_ParamLimits

0x7d94,	// (0x000a4c62) main_cset6_slider_pane_t4

0x7dbf,	// (0x000a4c8d) main_cset6_slider_pane_t5_ParamLimits

0x7dbf,	// (0x000a4c8d) main_cset6_slider_pane_t5

0xdfc9,	// (0x000aae97) main_cset6_slider_pane_t7_ParamLimits

0xdfc9,	// (0x000aae97) main_cset6_slider_pane_t7

0x7dea,	// (0x000a4cb8) main_cset6_slider_pane_t8_ParamLimits

0x7dea,	// (0x000a4cb8) main_cset6_slider_pane_t8

0x7e0e,	// (0x000a4cdc) main_cset6_slider_pane_t9_ParamLimits

0x7e0e,	// (0x000a4cdc) main_cset6_slider_pane_t9

0x7e32,	// (0x000a4d00) main_cset6_slider_pane_t10_ParamLimits

0x7e32,	// (0x000a4d00) main_cset6_slider_pane_t10

0x7e56,	// (0x000a4d24) main_cset6_slider_pane_t11_ParamLimits

0x7e56,	// (0x000a4d24) main_cset6_slider_pane_t11

0xdfff,	// (0x000aaecd) main_cset6_slider_pane_t14_ParamLimits

0xdfff,	// (0x000aaecd) main_cset6_slider_pane_t14

0xe038,	// (0x000aaf06) main_cset6_slider_pane_t15_ParamLimits

0xe038,	// (0x000aaf06) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x000aca7e) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x000aca7e) main_cset6_slider_pane_t

0xd9fd,	// (0x000aa8cb) cset_slider_pane_g1_copy1

0xda06,	// (0x000aa8d4) cset_slider_pane_g2_copy1

0xda0f,	// (0x000aa8dd) cset_slider_pane_g3_copy1

0x9bed,	// (0x000a6abb) bg_popup_sub_pane_cp011_copy1

0xe071,	// (0x000aaf3f) main_cset_text_pane_g1_copy1

0xd90d,	// (0x000aa7db) main_cset_text_pane_t1_copy1

0xd91b,	// (0x000aa7e9) main_cset_text_pane_t2_copy1

0xd929,	// (0x000aa7f7) main_cset_text_pane_t3_copy1

0xd937,	// (0x000aa805) main_cset_text_pane_t4_copy1

0xd945,	// (0x000aa813) main_cset_text_pane_t5_copy1

0xe079,	// (0x000aaf47) main_cset_text_pane_t6_copy1

0xe087,	// (0x000aaf55) main_cset_text_pane_t7_copy1

0x7f49,	// (0x000a4e17) main_cset_text2_pane_t1_copy1

0xa272,	// (0x000a7140) main_ncimui_pane

0x44e0,	// (0x000a13ae) popup_query_ncimui_window_ParamLimits

0x44e0,	// (0x000a13ae) popup_query_ncimui_window

0xac8d,	// (0x000a7b5b) field_cale_ev2_pane_g4_ParamLimits

0xac8d,	// (0x000a7b5b) field_cale_ev2_pane_g4

0x5dd6,	// (0x000a2ca4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5dd6,	// (0x000a2ca4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000ac763) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000ac763) cell_video_dialer_keypad_pane_g

0x5dee,	// (0x000a2cbc) cell_video_dialer_keypad_pane_t1

0x9bed,	// (0x000a6abb) bg_popup_window_pane_cp012

0xb1d8,	// (0x000a80a6) heading_pane_cp06

0xe0b3,	// (0x000aaf81) ncim_query_content_pane

0x9bed,	// (0x000a6abb) bg_popup_heading_pane_cp01

0xe0bb,	// (0x000aaf89) ncim_heading_pane_t1

0xe0c9,	// (0x000aaf97) ncim_indicator_popup_pane

0xe0db,	// (0x000aafa9) ncim_query_button_pane

0xe0f1,	// (0x000aafbf) ncim_query_content_pane_t1

0xe103,	// (0x000aafd1) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x000acac2) ncim_query_content_pane_t

0xe13d,	// (0x000ab00b) ncim_query_list_pane

0xe14f,	// (0x000ab01d) ncim_query_popup_pane

0xe0c9,	// (0x000aaf97) ncim_indicator_popup_pane_ParamLimits

0x80a5,	// (0x000a4f73) ncim_query_content_pane_g1_ParamLimits

0x80a5,	// (0x000a4f73) ncim_query_content_pane_g1

0xe0f1,	// (0x000aafbf) ncim_query_content_pane_t1_ParamLimits

0xe103,	// (0x000aafd1) ncim_query_content_pane_t2_ParamLimits

0x80b1,	// (0x000a4f7f) ncim_query_content_pane_t3_ParamLimits

0x80b1,	// (0x000a4f7f) ncim_query_content_pane_t3

0x80ce,	// (0x000a4f9c) ncim_query_content_pane_t4_ParamLimits

0x80ce,	// (0x000a4f9c) ncim_query_content_pane_t4

0x80eb,	// (0x000a4fb9) ncim_query_content_pane_t5_ParamLimits

0x80eb,	// (0x000a4fb9) ncim_query_content_pane_t5

0xe115,	// (0x000aafe3) ncim_query_content_pane_t6_ParamLimits

0xe115,	// (0x000aafe3) ncim_query_content_pane_t6

0xfbf4,	// (0x000acac2) ncim_query_content_pane_t_ParamLimits

0xe13d,	// (0x000ab00b) ncim_query_list_pane_ParamLimits

0xe14f,	// (0x000ab01d) ncim_query_popup_pane_ParamLimits

0xe163,	// (0x000ab031) wait_bar_pane_cp04

0x9bed,	// (0x000a6abb) input_focus_pane_cp011

0xe16b,	// (0x000ab039) ncim_query_popup_pane_t1

0xe179,	// (0x000ab047) ncim_list_query_list_pane_ParamLimits

0xe179,	// (0x000ab047) ncim_list_query_list_pane

0x9bed,	// (0x000a6abb) bg_button_pane_cp027

0xe18c,	// (0x000ab05a) ncim_query_button_pane_g1

0x9bed,	// (0x000a6abb) list_highlight_pane_cp012

0xe196,	// (0x000ab064) ncim_list_query_list_pane_g1

0xe19e,	// (0x000ab06c) ncim_list_query_list_pane_t1

0x64c8,	// (0x000a3396) cam4_indicators_pane_g3_ParamLimits

0x64c8,	// (0x000a3396) cam4_indicators_pane_g3

0x65e2,	// (0x000a34b0) vid4_indicators_pane_g5_ParamLimits

0x65e2,	// (0x000a34b0) vid4_indicators_pane_g5

0x7665,	// (0x000a4533) vid4_progress_pane_g5_ParamLimits

0x7665,	// (0x000a4533) vid4_progress_pane_g5

0x7f7b,	// (0x000a4e49) main_ncimui_pane_g1

0x7fe7,	// (0x000a4eb5) ncimui_group_query_pane_ParamLimits

0x7fe7,	// (0x000a4eb5) ncimui_group_query_pane

0x8041,	// (0x000a4f0f) ncimui_list_pane_ParamLimits

0x8041,	// (0x000a4f0f) ncimui_list_pane

0x8068,	// (0x000a4f36) ncimui_text_pane_ParamLimits

0x8068,	// (0x000a4f36) ncimui_text_pane

0x8108,	// (0x000a4fd6) ncimui_text_pane_t1_ParamLimits

0x8108,	// (0x000a4fd6) ncimui_text_pane_t1

0xe1ac,	// (0x000ab07a) ncimui_list_single_graphic_pane_ParamLimits

0xe1ac,	// (0x000ab07a) ncimui_list_single_graphic_pane

0x8127,	// (0x000a4ff5) ncimui_query_pane_ParamLimits

0x8127,	// (0x000a4ff5) ncimui_query_pane

0x9bed,	// (0x000a6abb) list_highlight_pane_cp013

0xe1bc,	// (0x000ab08a) ncim_list_query_list_pane_t1_copy1

0xe196,	// (0x000ab064) ncim_list_single_graphic_pane_g1

0xe1ca,	// (0x000ab098) ncim_query_button_pane_cp01

0xe1d6,	// (0x000ab0a4) ncim_query_entry_pane_ParamLimits

0xe1d6,	// (0x000ab0a4) ncim_query_entry_pane

0xe1e9,	// (0x000ab0b7) ncimui_query_pane_g1

0xe1f5,	// (0x000ab0c3) ncimui_query_pane_t1_ParamLimits

0xe1f5,	// (0x000ab0c3) ncimui_query_pane_t1

0xa272,	// (0x000a7140) input_focus_pane_cp012

0xe20e,	// (0x000ab0dc) ncim_query_entry_pane_t1

0xa89a,	// (0x000a7768) main_im_pane_ParamLimits

0xa272,	// (0x000a7140) main_mobtv_pane_ParamLimits

0xa272,	// (0x000a7140) main_mobtv_pane

0x7d26,	// (0x000a4bf4) main_cset6_slider_pane_g18_ParamLimits

0x7d26,	// (0x000a4bf4) main_cset6_slider_pane_g18

0x7d32,	// (0x000a4c00) main_cset6_slider_pane_g19_ParamLimits

0x7d32,	// (0x000a4c00) main_cset6_slider_pane_g19

0xd674,	// (0x000aa542) bg_main_mobtv_pane_ParamLimits

0xd674,	// (0x000aa542) bg_main_mobtv_pane

0x813a,	// (0x000a5008) main_mobtv_info_pane

0x8145,	// (0x000a5013) main_mobtv_loading_pane_ParamLimits

0x8145,	// (0x000a5013) main_mobtv_loading_pane

0xe220,	// (0x000ab0ee) main_mobtv_pg_channel_list_pane

0xe22a,	// (0x000ab0f8) main_mobtv_pg_hdr_pane

0x8152,	// (0x000a5020) main_mobtv_programe_curr_pane_ParamLimits

0x8152,	// (0x000a5020) main_mobtv_programe_curr_pane

0x815f,	// (0x000a502d) main_mobtv_programe_next_pane_ParamLimits

0x815f,	// (0x000a502d) main_mobtv_programe_next_pane

0xe233,	// (0x000ab101) popup_mobtv_noti_window

0xcc86,	// (0x000a9b54) main_tv_pg_hdr_pane_g1

0xe23d,	// (0x000ab10b) main_tv_pg_hdr_pane_g2

0xe245,	// (0x000ab113) main_tv_pg_hdr_pane_g3

0xe24d,	// (0x000ab11b) main_tv_pg_hdr_pane_g4

0xe255,	// (0x000ab123) main_tv_pg_hdr_pane_g5

0xe25f,	// (0x000ab12d) main_tv_pg_hdr_pane_g6

0xe269,	// (0x000ab137) main_tv_pg_hdr_pane_g7

0xe273,	// (0x000ab141) main_tv_pg_hdr_pane_g8

0xe27d,	// (0x000ab14b) main_tv_pg_hdr_pane_g9

0xe287,	// (0x000ab155) main_tv_pg_hdr_pane_g10

0xe291,	// (0x000ab15f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x000acacf) main_tv_pg_hdr_pane_g

0xe29b,	// (0x000ab169) main_tv_pg_hdr_pane_t1

0xe2a9,	// (0x000ab177) main_tv_pg_hdr_pane_t2

0xe2b7,	// (0x000ab185) main_tv_pg_hdr_pane_t3

0xe2c7,	// (0x000ab195) main_tv_pg_hdr_pane_t4

0xe2d7,	// (0x000ab1a5) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x000acae6) main_tv_pg_hdr_pane_t

0xe2e7,	// (0x000ab1b5) single_mobtv_pg_channel_pane_ParamLimits

0xe2e7,	// (0x000ab1b5) single_mobtv_pg_channel_pane

0xe2f9,	// (0x000ab1c7) single_mobtv_pg_channel_table_pane

0xe302,	// (0x000ab1d0) single_mobtv_pg_channel_thumb_pane

0xe30b,	// (0x000ab1d9) single_tv_pg_channel_pane_g1

0xe314,	// (0x000ab1e2) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x000acaf1) single_tv_pg_channel_pane_g

0xceb6,	// (0x000a9d84) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceb6,	// (0x000a9d84) bg_single_mobtv_pg_channel_thumb_pane

0xe31d,	// (0x000ab1eb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe31d,	// (0x000ab1eb) single_mobtv_pg_channel_thumb_pane_g1

0xe32b,	// (0x000ab1f9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe32b,	// (0x000ab1f9) single_mobtv_pg_channel_thumb_pane_g2

0xe337,	// (0x000ab205) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe337,	// (0x000ab205) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x000acaf6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x000acaf6) single_mobtv_pg_channel_thumb_pane_g

0xe343,	// (0x000ab211) single_mobtv_pg_channel_thumb_pane_t1

0xe351,	// (0x000ab21f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x000acafd) single_mobtv_pg_channel_thumb_pane_t

0xcc86,	// (0x000a9b54) bg_single_mobtv_pg_channel_table_pane_g1

0xcc86,	// (0x000a9b54) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000ac5aa) bg_single_mobtv_pg_channel_table_pane_g

0xe37a,	// (0x000ab248) single_mobtv_pg_channel_table_pane_t1

0xe388,	// (0x000ab256) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x000acb02) single_mobtv_pg_channel_table_pane_t

0x8174,	// (0x000a5042) main_mobtv_info_pane_g1_ParamLimits

0x8174,	// (0x000a5042) main_mobtv_info_pane_g1

0x8190,	// (0x000a505e) main_mobtv_info_pane_t1_ParamLimits

0x8190,	// (0x000a505e) main_mobtv_info_pane_t1

0x8208,	// (0x000a50d6) main_mobtv_info_pane_t2_ParamLimits

0x8208,	// (0x000a50d6) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x000acb0c) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x000acb0c) main_mobtv_info_pane_t

0x8299,	// (0x000a5167) wait_bar_pane_cp05

0x82ab,	// (0x000a5179) main_mobtv_loading_pane_g1_ParamLimits

0x82ab,	// (0x000a5179) main_mobtv_loading_pane_g1

0x82b7,	// (0x000a5185) main_mobtv_loading_pane_g2_ParamLimits

0x82b7,	// (0x000a5185) main_mobtv_loading_pane_g2

0x82c3,	// (0x000a5191) main_mobtv_loading_pane_g3_ParamLimits

0x82c3,	// (0x000a5191) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x000acb13) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x000acb13) main_mobtv_loading_pane_g

0xe396,	// (0x000ab264) main_mobtv_loading_pane_t1_ParamLimits

0xe396,	// (0x000ab264) main_mobtv_loading_pane_t1

0xe3ae,	// (0x000ab27c) main_mobtv_loading_pane_t2_ParamLimits

0xe3ae,	// (0x000ab27c) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x000acb1a) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x000acb1a) main_mobtv_loading_pane_t

0x82d1,	// (0x000a519f) wait_bar_pane_cp06_ParamLimits

0x82d1,	// (0x000a519f) wait_bar_pane_cp06

0xe3d2,	// (0x000ab2a0) main_mobtv_programe_curr_pane_t1

0xe3e0,	// (0x000ab2ae) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x000acb1f) main_mobtv_programe_curr_pane_t

0xe3ee,	// (0x000ab2bc) main_mobtv_programe_next_pane_t1

0xe3fc,	// (0x000ab2ca) main_mobtv_programe_next_pane_t2

0xe40a,	// (0x000ab2d8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x000acb24) main_mobtv_programe_next_pane_t

0x9bed,	// (0x000a6abb) bg_popup_mobtv_noti_window_pane

0xe418,	// (0x000ab2e6) popup_mobtv_noti_window_g1

0xe420,	// (0x000ab2ee) popup_mobtv_noti_window_t1

0xe42e,	// (0x000ab2fc) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x000acb2b) popup_mobtv_noti_window_t

0xcc86,	// (0x000a9b54) bg_popup_mobtv_noti_window_pane_g1

0x9bed,	// (0x000a6abb) sc_clock_pane

0x9bed,	// (0x000a6abb) main_fs_bigclock_pane

0x7882,	// (0x000a4750) blid2_tripm_pane_t4_ParamLimits

0x7882,	// (0x000a4750) blid2_tripm_pane_t4

0x82dd,	// (0x000a51ab) sc_clock_pane_g1_ParamLimits

0x82dd,	// (0x000a51ab) sc_clock_pane_g1

0x82eb,	// (0x000a51b9) sc_clock_pane_t1_ParamLimits

0x82eb,	// (0x000a51b9) sc_clock_pane_t1

0x8300,	// (0x000a51ce) sc_clock_pane_t2_ParamLimits

0x8300,	// (0x000a51ce) sc_clock_pane_t2

0x8312,	// (0x000a51e0) sc_clock_pane_t3_ParamLimits

0x8312,	// (0x000a51e0) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x000acb30) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x000acb30) sc_clock_pane_t

0x91bd,	// (0x000a608b) main_fs_bigclock_indicator_pane_ParamLimits

0x91bd,	// (0x000a608b) main_fs_bigclock_indicator_pane

0x83a5,	// (0x000a5273) main_fs_bigclock_pane_g1_ParamLimits

0x83a5,	// (0x000a5273) main_fs_bigclock_pane_g1

0x91c9,	// (0x000a6097) main_fs_bigclock_pane_t1_ParamLimits

0x91c9,	// (0x000a6097) main_fs_bigclock_pane_t1

0x91db,	// (0x000a60a9) main_fs_bigclock_pane_t2_ParamLimits

0x91db,	// (0x000a60a9) main_fs_bigclock_pane_t2

0x91ef,	// (0x000a60bd) main_fs_bigclock_pane_t3_ParamLimits

0x91ef,	// (0x000a60bd) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x000acd3a) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x000acd3a) main_fs_bigclock_pane_t

0xec77,	// (0x000abb45) main_fs_bigclock_indicator_pane_g1

0xe0e3,	// (0x000aafb1) ncim_query_content_pane_g2_ParamLimits

0xe0e3,	// (0x000aafb1) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x000acabd) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x000acabd) ncim_query_content_pane_g

0x8324,	// (0x000a51f2) sc_clock_pane_t4_ParamLimits

0x8324,	// (0x000a51f2) sc_clock_pane_t4

0xa272,	// (0x000a7140) main_radioblah_pane

0xd5e1,	// (0x000aa4af) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5e1,	// (0x000aa4af) cell_call4_button_pane_t1_copy1

0x7f97,	// (0x000a4e65) main_ncimui_pane_t1_ParamLimits

0x7f97,	// (0x000a4e65) main_ncimui_pane_t1

0x7fb1,	// (0x000a4e7f) main_ncimui_pane_t2_ParamLimits

0x7fb1,	// (0x000a4e7f) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x000acab6) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x000acab6) main_ncimui_pane_t

0xe581,	// (0x000ab44f) main_radioblah_anim_pane_ParamLimits

0xe581,	// (0x000ab44f) main_radioblah_anim_pane

0xe592,	// (0x000ab460) main_radioblah_info_pane_ParamLimits

0xe592,	// (0x000ab460) main_radioblah_info_pane

0xe5a6,	// (0x000ab474) main_radioblah_pane_t1_ParamLimits

0xe5a6,	// (0x000ab474) main_radioblah_pane_t1

0xe5c2,	// (0x000ab490) main_radioblah_pane_t2_ParamLimits

0xe5c2,	// (0x000ab490) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x000acb51) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x000acb51) main_radioblah_pane_t

0x83f7,	// (0x000a52c5) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83f7,	// (0x000a52c5) main_radioblah_rocker_ctrl_pane

0xe60a,	// (0x000ab4d8) main_radioblah_info_pane_t1_ParamLimits

0xe60a,	// (0x000ab4d8) main_radioblah_info_pane_t1

0x8440,	// (0x000a530e) main_radioblah_info_pane_t2_ParamLimits

0x8440,	// (0x000a530e) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x000acb5a) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x000acb5a) main_radioblah_info_pane_t

0xcc86,	// (0x000a9b54) main_radioblah_rocker_ctrl_pane_g1

0x84f0,	// (0x000a53be) main_radioblah_rocker_ctrl_pane_g2

0x84f8,	// (0x000a53c6) main_radioblah_rocker_ctrl_pane_g3

0x8500,	// (0x000a53ce) main_radioblah_rocker_ctrl_pane_g4

0x8508,	// (0x000a53d6) main_radioblah_rocker_ctrl_pane_g5

0x8510,	// (0x000a53de) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x000acb63) main_radioblah_rocker_ctrl_pane_g

0x7f49,	// (0x000a4e17) main_cset_text2_pane_t1_copy1_ParamLimits

0x63e7,	// (0x000a32b5) cam4_image_uncrop_qvga_pane

0x653a,	// (0x000a3408) vid4_image_uncrop_qcif_pane

0x7a14,	// (0x000a48e2) cam6_image_uncrop_qvga_pane_ParamLimits

0x7a14,	// (0x000a48e2) cam6_image_uncrop_qvga_pane

0xdde6,	// (0x000aacb4) vid6_image_uncrop_qcif_pane_ParamLimits

0xdde6,	// (0x000aacb4) vid6_image_uncrop_qcif_pane

0x9bed,	// (0x000a6abb) bg_popup_preview_window_pane_cp03

0xe095,	// (0x000aaf63) list_cset_text2_pane

0xe09d,	// (0x000aaf6b) main_cset6_text2_pane_g1

0xe0a5,	// (0x000aaf73) main_cset6_text2_pane_t1

0x8518,	// (0x000a53e6) list_cset_text2_pane_t1_ParamLimits

0x8518,	// (0x000a53e6) list_cset_text2_pane_t1

0xa272,	// (0x000a7140) main_radioblah_pane_ParamLimits

0x8285,	// (0x000a5153) main_mobtv_info_pane_t3_ParamLimits

0x8285,	// (0x000a5153) main_mobtv_info_pane_t3

0x83e5,	// (0x000a52b3) main_radioblah_pane_g1

0x8410,	// (0x000a52de) main_radioblah_info_pane_g1

0x8495,	// (0x000a5363) main_radioblah_info_pane_t3_ParamLimits

0x8495,	// (0x000a5363) main_radioblah_info_pane_t3

0x3085,	// (0x0009ff53) highlight_cell_cale_month_pane_ParamLimits

0x3085,	// (0x0009ff53) highlight_cell_cale_month_pane

0x9bed,	// (0x000a6abb) main_phob_fisheye_pane

0xcf92,	// (0x000a9e60) scroll_pane_cp0031_ParamLimits

0xcf92,	// (0x000a9e60) scroll_pane_cp0031

0xdef8,	// (0x000aadc6) wait_bar_pane_cp08_ParamLimits

0x7c22,	// (0x000a4af0) cset_list_set_pane_copy1_ParamLimits

0xe644,	// (0x000ab512) highlight_cell_cale_month_pane_g1

0x852f,	// (0x000a53fd) highlight_cell_cale_month_pane_t1

0xdba7,	// (0x000aaa75) list_gen_pane_cp01

0xd7b2,	// (0x000aa680) scroll_pane_01

0x853d,	// (0x000a540b) list_single_double_fisheye_pane

0x8546,	// (0x000a5414) list_double_fisheye_pane_g1_ParamLimits

0x8546,	// (0x000a5414) list_double_fisheye_pane_g1

0x8552,	// (0x000a5420) list_double_fisheye_pane_g2_ParamLimits

0x8552,	// (0x000a5420) list_double_fisheye_pane_g2

0x8566,	// (0x000a5434) list_double_fisheye_pane_g3_ParamLimits

0x8566,	// (0x000a5434) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x000acb70) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x000acb70) list_double_fisheye_pane_g

0x858f,	// (0x000a545d) list_double_fisheye_pane_t1_ParamLimits

0x858f,	// (0x000a545d) list_double_fisheye_pane_t1

0x85aa,	// (0x000a5478) list_double_fisheye_pane_t2_ParamLimits

0x85aa,	// (0x000a5478) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x000acb7b) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x000acb7b) list_double_fisheye_pane_t

0x9bed,	// (0x000a6abb) main_call5_pane

0x834a,	// (0x000a5218) sc_swipe_pane_ParamLimits

0x834a,	// (0x000a5218) sc_swipe_pane

0x85d8,	// (0x000a54a6) call5_image_pane_ParamLimits

0x85d8,	// (0x000a54a6) call5_image_pane

0x85ea,	// (0x000a54b8) call5_swipe_1_pane_ParamLimits

0x85ea,	// (0x000a54b8) call5_swipe_1_pane

0x85f6,	// (0x000a54c4) call5_swipe_2_pane_ParamLimits

0x85f6,	// (0x000a54c4) call5_swipe_2_pane

0x8612,	// (0x000a54e0) popup_call5_audio_first_window_ParamLimits

0x8612,	// (0x000a54e0) popup_call5_audio_first_window

0xceb6,	// (0x000a9d84) call5_swipe_1_pane_g1_ParamLimits

0xceb6,	// (0x000a9d84) call5_swipe_1_pane_g1

0xe64c,	// (0x000ab51a) call5_swipe_1_pane_g2_ParamLimits

0xe64c,	// (0x000ab51a) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x000acb80) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x000acb80) call5_swipe_1_pane_g

0xe658,	// (0x000ab526) call5_swipe_1_pane_t1_ParamLimits

0xe658,	// (0x000ab526) call5_swipe_1_pane_t1

0xceb6,	// (0x000a9d84) call5_swipe_2_pane_g1_ParamLimits

0xceb6,	// (0x000a9d84) call5_swipe_2_pane_g1

0xe66d,	// (0x000ab53b) call5_swipe_2_pane_g2_ParamLimits

0xe66d,	// (0x000ab53b) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x000acb85) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x000acb85) call5_swipe_2_pane_g

0xe679,	// (0x000ab547) call5_swipe_2_pane_t1_ParamLimits

0xe679,	// (0x000ab547) call5_swipe_2_pane_t1

0xe68e,	// (0x000ab55c) sc_swipe_pane_g1_ParamLimits

0xe68e,	// (0x000ab55c) sc_swipe_pane_g1

0xe69b,	// (0x000ab569) sc_swipe_pane_g2_ParamLimits

0xe69b,	// (0x000ab569) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x000acb8a) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x000acb8a) sc_swipe_pane_g

0xe6a7,	// (0x000ab575) sc_swipe_pane_t1_ParamLimits

0xe6a7,	// (0x000ab575) sc_swipe_pane_t1

0x9bed,	// (0x000a6abb) main_cmail_launcher_pane

0x8622,	// (0x000a54f0) aid_size_cell_cmail_l_ParamLimits

0x8622,	// (0x000a54f0) aid_size_cell_cmail_l

0x8632,	// (0x000a5500) grid_cmail_l_pane_ParamLimits

0x8632,	// (0x000a5500) grid_cmail_l_pane

0x8642,	// (0x000a5510) cell_cmail_l_pane_ParamLimits

0x8642,	// (0x000a5510) cell_cmail_l_pane

0x8658,	// (0x000a5526) cell_cmail_l_pane_g1_ParamLimits

0x8658,	// (0x000a5526) cell_cmail_l_pane_g1

0x8664,	// (0x000a5532) cell_cmail_l_pane_t1_ParamLimits

0x8664,	// (0x000a5532) cell_cmail_l_pane_t1

0xe6bc,	// (0x000ab58a) cell_cmail_l_pane_t2_ParamLimits

0xe6bc,	// (0x000ab58a) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x000acb8f) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x000acb8f) cell_cmail_l_pane_t

0xa272,	// (0x000a7140) grid_highlight_pane_cp018_ParamLimits

0xa272,	// (0x000a7140) grid_highlight_pane_cp018

0x0c67,	// (0x0009db35) main2_pane_ParamLimits

0x0c67,	// (0x0009db35) main2_pane

0xa945,	// (0x000a7813) popup_sp_fs_action_menu_bg_pane_g1

0xa94d,	// (0x000a781b) popup_sp_fs_action_menu_bg_pane_g2

0xa955,	// (0x000a7823) popup_sp_fs_action_menu_bg_pane_g3

0xa95d,	// (0x000a782b) popup_sp_fs_action_menu_bg_pane_g4

0xa965,	// (0x000a7833) popup_sp_fs_action_menu_bg_pane_g5

0xa96d,	// (0x000a783b) popup_sp_fs_action_menu_bg_pane_g6

0xa975,	// (0x000a7843) popup_sp_fs_action_menu_bg_pane_g7

0xa97d,	// (0x000a784b) popup_sp_fs_action_menu_bg_pane_g8

0xa985,	// (0x000a7853) popup_sp_fs_action_menu_bg_pane_g9

0xa98d,	// (0x000a785b) popup_sp_fs_action_menu_bg_pane_g10

0xa98d,	// (0x000a785b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000ac058) popup_sp_fs_action_menu_bg_pane_g

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t3_g3_g1

0x1ed5,	// (0x0009eda3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ed5,	// (0x0009eda3) list_medium_line_x2_t3_g3_g2

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000ac106) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000ac106) list_medium_line_x2_t3_g3_g

0x1eed,	// (0x0009edbb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1eed,	// (0x0009edbb) list_medium_line_x2_t3_g3_t1

0x1f02,	// (0x0009edd0) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f02,	// (0x0009edd0) list_medium_line_x2_t3_g3_t2

0x1f16,	// (0x0009ede4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f16,	// (0x0009ede4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000ac10d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000ac10d) list_medium_line_x2_t3_g3_t

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t3_g2_g1

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000ac114) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000ac114) list_medium_line_x2_t3_g2_g

0x1f2b,	// (0x0009edf9) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f2b,	// (0x0009edf9) list_medium_line_x2_t3_g2_t1

0x1f41,	// (0x0009ee0f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f41,	// (0x0009ee0f) list_medium_line_x2_t3_g2_t2

0x1f53,	// (0x0009ee21) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f53,	// (0x0009ee21) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000ac119) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000ac119) list_medium_line_x2_t3_g2_t

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t4_g4_g1

0x1f71,	// (0x0009ee3f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f71,	// (0x0009ee3f) list_medium_line_x2_t4_g4_g2

0x1ed5,	// (0x0009eda3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ed5,	// (0x0009eda3) list_medium_line_x2_t4_g4_g3

0x1f7d,	// (0x0009ee4b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f7d,	// (0x0009ee4b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000ac120) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000ac120) list_medium_line_x2_t4_g4_g

0x1f89,	// (0x0009ee57) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f89,	// (0x0009ee57) list_medium_line_x2_t4_g4_t1

0x1fa0,	// (0x0009ee6e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1fa0,	// (0x0009ee6e) list_medium_line_x2_t4_g4_t2

0x1fb5,	// (0x0009ee83) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1fb5,	// (0x0009ee83) list_medium_line_x2_t4_g4_t3

0x1fc7,	// (0x0009ee95) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1fc7,	// (0x0009ee95) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000ac129) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000ac129) list_medium_line_x2_t4_g4_t

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t2_g4_g1

0x1f71,	// (0x0009ee3f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f71,	// (0x0009ee3f) list_medium_line_x2_t2_g4_g2

0x1ed5,	// (0x0009eda3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ed5,	// (0x0009eda3) list_medium_line_x2_t2_g4_g3

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000ac190) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000ac190) list_medium_line_x2_t2_g4_g

0x30ab,	// (0x0009ff79) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30ab,	// (0x0009ff79) list_medium_line_x2_t2_g4_t1

0x1f16,	// (0x0009ede4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f16,	// (0x0009ede4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000ac199) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000ac199) list_medium_line_x2_t2_g4_t

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t2_g3_g1

0x1ed5,	// (0x0009eda3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ed5,	// (0x0009eda3) list_medium_line_x2_t2_g3_g2

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000ac106) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000ac106) list_medium_line_x2_t2_g3_g

0x30c0,	// (0x0009ff8e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30c0,	// (0x0009ff8e) list_medium_line_x2_t2_g3_t1

0x1f16,	// (0x0009ede4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f16,	// (0x0009ede4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000ac19e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000ac19e) list_medium_line_x2_t2_g3_t

0x3256,	// (0x000a0124) main_sp_fs_list_pane_ParamLimits

0x3256,	// (0x000a0124) main_sp_fs_list_pane

0x3262,	// (0x000a0130) sp_fs_scroll_pane_ParamLimits

0x3262,	// (0x000a0130) sp_fs_scroll_pane

0x326e,	// (0x000a013c) list_medium_line_x2_t3_t1

0x327e,	// (0x000a014c) list_medium_line_x2_t3_t2

0x328c,	// (0x000a015a) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000ac1e9) list_medium_line_x2_t3_t

0x329a,	// (0x000a0168) list_medium_line_x3_t4_t1

0x32aa,	// (0x000a0178) list_medium_line_x3_t4_t2

0x32b8,	// (0x000a0186) list_medium_line_x3_t4_t3

0x328c,	// (0x000a015a) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000ac1f0) list_medium_line_x3_t4_t

0x32c6,	// (0x000a0194) list_medium_line_x4_t5_t1

0x32d6,	// (0x000a01a4) list_medium_line_x4_t5_t2

0x32b8,	// (0x000a0186) list_medium_line_x4_t5_t3

0x32e4,	// (0x000a01b2) list_medium_line_x4_t5_t4

0x328c,	// (0x000a015a) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000ac1f9) list_medium_line_x4_t5_t

0x1ec9,	// (0x0009ed97) list_medium_line_t4_g4_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_t4_g4_g1

0x1f7d,	// (0x0009ee4b) list_medium_line_t4_g4_g2_ParamLimits

0x1f7d,	// (0x0009ee4b) list_medium_line_t4_g4_g2

0x32f2,	// (0x000a01c0) list_medium_line_t4_g4_g3_ParamLimits

0x32f2,	// (0x000a01c0) list_medium_line_t4_g4_g3

0x1ee1,	// (0x0009edaf) list_medium_line_t4_g4_g4_ParamLimits

0x1ee1,	// (0x0009edaf) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000ac204) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000ac204) list_medium_line_t4_g4_g

0x32fe,	// (0x000a01cc) list_medium_line_t4_g4_t1_ParamLimits

0x32fe,	// (0x000a01cc) list_medium_line_t4_g4_t1

0x3313,	// (0x000a01e1) list_medium_line_t4_g4_t2_ParamLimits

0x3313,	// (0x000a01e1) list_medium_line_t4_g4_t2

0x3329,	// (0x000a01f7) list_medium_line_t4_g4_t3_ParamLimits

0x3329,	// (0x000a01f7) list_medium_line_t4_g4_t3

0x1f16,	// (0x0009ede4) list_medium_line_t4_g4_t4_ParamLimits

0x1f16,	// (0x0009ede4) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000ac20d) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000ac20d) list_medium_line_t4_g4_t

0x3452,	// (0x000a0320) chi_dic_find_pane_g1

0x44a9,	// (0x000a1377) main_tport_pane

0xa29d,	// (0x000a716b) list_medium_line_plain_t1

0xa2ab,	// (0x000a7179) list_medium_line_t2_g2_g1_ParamLimits

0xa2ab,	// (0x000a7179) list_medium_line_t2_g2_g1

0xb0a5,	// (0x000a7f73) list_medium_line_t2_g2_g2_ParamLimits

0xb0a5,	// (0x000a7f73) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000ac8ce) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000ac8ce) list_medium_line_t2_g2_g

0x701d,	// (0x000a3eeb) list_medium_line_t2_g2_t1_ParamLimits

0x701d,	// (0x000a3eeb) list_medium_line_t2_g2_t1

0x7037,	// (0x000a3f05) list_medium_line_t2_g2_t2_ParamLimits

0x7037,	// (0x000a3f05) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000ac8d3) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000ac8d3) list_medium_line_t2_g2_t

0xa353,	// (0x000a7221) aid_sp_fs_list_icon_a_sm

0xb0b1,	// (0x000a7f7f) aid_sp_fs_list_icon_d

0xa35b,	// (0x000a7229) aid_sp_fs_text_primary

0xa364,	// (0x000a7232) aid_sp_fs_text_secondary

0x76c8,	// (0x000a4596) list_medium_line

0x76c8,	// (0x000a4596) list_medium_line_g2

0x76c8,	// (0x000a4596) list_medium_line_g3

0x76c8,	// (0x000a4596) list_medium_line_plain

0x76c8,	// (0x000a4596) list_medium_line_plain_t2

0x76c8,	// (0x000a4596) list_medium_line_plain_t3

0x76c8,	// (0x000a4596) list_medium_line_right_icon

0x76c8,	// (0x000a4596) list_medium_line_right_iconx2

0x76c8,	// (0x000a4596) list_medium_line_t2

0x76c8,	// (0x000a4596) list_medium_line_t2_g2

0x76c8,	// (0x000a4596) list_medium_line_t2_g3

0x76c8,	// (0x000a4596) list_medium_line_t2_right_icon

0x76c8,	// (0x000a4596) list_medium_line_t2_right_iconx2

0x76c8,	// (0x000a4596) list_medium_line_t3

0x76c8,	// (0x000a4596) list_medium_line_t3_g2

0x76c8,	// (0x000a4596) list_medium_line_t3_g3

0x76c8,	// (0x000a4596) list_medium_line_t3_right_iconx2

0x76d1,	// (0x000a459f) list_medium_line_t4_g4

0x76da,	// (0x000a45a8) list_medium_line_x2

0x76da,	// (0x000a45a8) list_medium_line_x2_t2_g2

0x76da,	// (0x000a45a8) list_medium_line_x2_t2_g3

0x76da,	// (0x000a45a8) list_medium_line_x2_t2_g4

0x76da,	// (0x000a45a8) list_medium_line_x2_t3

0x76da,	// (0x000a45a8) list_medium_line_x2_t3_g2

0x76da,	// (0x000a45a8) list_medium_line_x2_t3_g3

0x76da,	// (0x000a45a8) list_medium_line_x2_t3_g4

0x76da,	// (0x000a45a8) list_medium_line_x2_t4_g2

0x76da,	// (0x000a45a8) list_medium_line_x2_t4_g4

0x76e3,	// (0x000a45b1) list_medium_line_x3

0x76e3,	// (0x000a45b1) list_medium_line_x3_t4

0x76e3,	// (0x000a45b1) list_medium_line_x3_t4_g4

0x76d1,	// (0x000a459f) list_medium_line_x4_t4

0x76d1,	// (0x000a459f) list_medium_line_x4_t4_g7

0x76d1,	// (0x000a459f) list_medium_line_x4_t5

0x76ec,	// (0x000a45ba) list_single_fs_dyc_pane_ParamLimits

0x76ec,	// (0x000a45ba) list_single_fs_dyc_pane

0x1ec9,	// (0x0009ed97) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x4_t4_g7_g1

0x7e7a,	// (0x000a4d48) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e7a,	// (0x000a4d48) list_medium_line_x4_t4_g7_g2

0x7e86,	// (0x000a4d54) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e86,	// (0x000a4d54) list_medium_line_x4_t4_g7_g3

0x7e95,	// (0x000a4d63) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e95,	// (0x000a4d63) list_medium_line_x4_t4_g7_g4

0x7ea1,	// (0x000a4d6f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ea1,	// (0x000a4d6f) list_medium_line_x4_t4_g7_g5

0x7eb0,	// (0x000a4d7e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7eb0,	// (0x000a4d7e) list_medium_line_x4_t4_g7_g6

0x7ebf,	// (0x000a4d8d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7ebf,	// (0x000a4d8d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x000aca97) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x000aca97) list_medium_line_x4_t4_g7_g

0x7ecb,	// (0x000a4d99) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ecb,	// (0x000a4d99) list_medium_line_x4_t4_g7_t1

0x7ee0,	// (0x000a4dae) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7ee0,	// (0x000a4dae) list_medium_line_x4_t4_g7_t2

0x7ef5,	// (0x000a4dc3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7ef5,	// (0x000a4dc3) list_medium_line_x4_t4_g7_t3

0x7f0a,	// (0x000a4dd8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f0a,	// (0x000a4dd8) list_medium_line_x4_t4_g7_t4

0x7f1c,	// (0x000a4dea) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f1c,	// (0x000a4dea) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x000acaa6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x000acaa6) list_medium_line_x4_t4_g7_t

0x7f2e,	// (0x000a4dfc) list_single_dyc_row_pane_ParamLimits

0x7f2e,	// (0x000a4dfc) list_single_dyc_row_pane

0x85cc,	// (0x000a549a) call5_gesture_pane_ParamLimits

0x85cc,	// (0x000a549a) call5_gesture_pane

0x8602,	// (0x000a54d0) call5_windows_pane_ParamLimits

0x8602,	// (0x000a54d0) call5_windows_pane

0x867a,	// (0x000a5548) call5_swipe_1_pane_cp_ParamLimits

0x867a,	// (0x000a5548) call5_swipe_1_pane_cp

0x8686,	// (0x000a5554) call5_swipe_2_pane_cp_ParamLimits

0x8686,	// (0x000a5554) call5_swipe_2_pane_cp

0xaa50,	// (0x000a791e) call5_image_pane_cp

0x8692,	// (0x000a5560) popup_call5_audio_first_window_cp_ParamLimits

0x8692,	// (0x000a5560) popup_call5_audio_first_window_cp

0xe68e,	// (0x000ab55c) call5_swipe_1_pane_g1_cp_ParamLimits

0xe68e,	// (0x000ab55c) call5_swipe_1_pane_g1_cp

0xe6ce,	// (0x000ab59c) call5_swipe_1_pane_g2_cp

0xe6a7,	// (0x000ab575) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6a7,	// (0x000ab575) call5_swipe_1_pane_t1_cp

0xe68e,	// (0x000ab55c) call5_swipe_2_pane_g1_cp_ParamLimits

0xe68e,	// (0x000ab55c) call5_swipe_2_pane_g1_cp

0xe6d6,	// (0x000ab5a4) call5_swipe_2_pane_g2_cp

0xe6de,	// (0x000ab5ac) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6de,	// (0x000ab5ac) call5_swipe_2_pane_t1_cp

0xa272,	// (0x000a7140) main_sp_fs_email_pane

0xe6f3,	// (0x000ab5c1) main_sp_fs_listscroll_pane_te

0xa36d,	// (0x000a723b) popup_sp_fs_action_menu_pane_ParamLimits

0xa36d,	// (0x000a723b) popup_sp_fs_action_menu_pane

0xcc86,	// (0x000a9b54) bg_sp_fs_ctrlbar_pane_g1

0xd23b,	// (0x000aa109) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd24d,	// (0x000aa11b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd244,	// (0x000aa112) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc86,	// (0x000a9b54) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x000acb94) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca65,	// (0x000a9933) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca65,	// (0x000a9933) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6fc,	// (0x000ab5ca) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6fc,	// (0x000ab5ca) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe708,	// (0x000ab5d6) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe708,	// (0x000ab5d6) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x000acb9d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x000acb9d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe714,	// (0x000ab5e2) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe714,	// (0x000ab5e2) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb0b9,	// (0x000a7f87) list_medium_line_t2_right_icon_g1

0x86a0,	// (0x000a556e) list_medium_line_t2_right_icon_t1

0x86b0,	// (0x000a557e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x000acba2) list_medium_line_t2_right_icon_t

0xc835,	// (0x000a9703) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc835,	// (0x000a9703) bg_sp_fs_ctrlbar_pane

0x8717,	// (0x000a55e5) main_sp_fs_ctrlbar_button_pane_cp01

0x871f,	// (0x000a55ed) main_sp_fs_ctrlbar_ddmenu_pane

0xe766,	// (0x000ab634) main_sp_fs_ctrlbar_pane_g1

0xe772,	// (0x000ab640) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x000acba7) main_sp_fs_ctrlbar_pane_g

0xe77e,	// (0x000ab64c) main_sp_fs_ctrlbar_pane_t1

0x8729,	// (0x000a55f7) main_sp_fs_ctrlbar_pane

0x8743,	// (0x000a5611) main_sp_fs_listscroll_pane_te_cp01

0x8754,	// (0x000a5622) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8754,	// (0x000a5622) popup_sp_fs_action_menu_pane_cp01

0xa272,	// (0x000a7140) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa272,	// (0x000a7140) bg_sp_fs_highlight_list_pane_cp01

0xa3b3,	// (0x000a7281) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa3b3,	// (0x000a7281) sp_fs_action_menu_list_gene_pane_g1

0xe7ae,	// (0x000ab67c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7ae,	// (0x000ab67c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x000acbb1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x000acbb1) sp_fs_action_menu_list_gene_pane_g

0xa3c2,	// (0x000a7290) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa3c2,	// (0x000a7290) sp_fs_action_menu_list_gene_pane_t1

0xa3da,	// (0x000a72a8) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa3da,	// (0x000a72a8) sp_fs_action_menu_list_gene_pane

0xe7bb,	// (0x000ab689) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7bb,	// (0x000ab689) popup_sp_fs_action_menu_bg_pane

0xa3fd,	// (0x000a72cb) sp_fs_action_menu_list_pane_ParamLimits

0xa3fd,	// (0x000a72cb) sp_fs_action_menu_list_pane

0xe7c9,	// (0x000ab697) sp_fs_scroll_pane_cp01_ParamLimits

0xe7c9,	// (0x000ab697) sp_fs_scroll_pane_cp01

0x8782,	// (0x000a5650) list_medium_line_plain_t2_t1

0x8792,	// (0x000a5660) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x000acbb6) list_medium_line_plain_t2_t

0x87a0,	// (0x000a566e) list_medium_line_plain_t3_t1

0x87b0,	// (0x000a567e) list_medium_line_plain_t3_t2

0x87be,	// (0x000a568c) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x000acbbb) list_medium_line_plain_t3_t

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t2_g2_g1

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000ac114) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000ac114) list_medium_line_x2_t2_g2_g

0x32fe,	// (0x000a01cc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x32fe,	// (0x000a01cc) list_medium_line_x2_t2_g2_t1

0x1f16,	// (0x0009ede4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f16,	// (0x0009ede4) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x000acbc2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x000acbc2) list_medium_line_x2_t2_g2_t

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t4_g2_g1

0x87cc,	// (0x000a569a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87cc,	// (0x000a569a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x000acbc7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x000acbc7) list_medium_line_x2_t4_g2_g

0x87de,	// (0x000a56ac) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87de,	// (0x000a56ac) list_medium_line_x2_t4_g2_t1

0x87f8,	// (0x000a56c6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87f8,	// (0x000a56c6) list_medium_line_x2_t4_g2_t2

0x880e,	// (0x000a56dc) list_medium_line_x2_t4_g2_t3_ParamLimits

0x880e,	// (0x000a56dc) list_medium_line_x2_t4_g2_t3

0x1f16,	// (0x0009ede4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f16,	// (0x0009ede4) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x000acbcc) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x000acbcc) list_medium_line_x2_t4_g2_t

0xb0c1,	// (0x000a7f8f) list_medium_line_t3_right_iconx2_g1

0xb0b9,	// (0x000a7f87) list_medium_line_t3_right_iconx2_g2

0x8823,	// (0x000a56f1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x000acbd5) list_medium_line_t3_right_iconx2_g

0x882d,	// (0x000a56fb) list_medium_line_t3_right_iconx2_t1

0x883d,	// (0x000a570b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x000acbdc) list_medium_line_t3_right_iconx2_t

0x1ec9,	// (0x0009ed97) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x3_t4_g4_g1

0x1ed5,	// (0x0009eda3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ed5,	// (0x0009eda3) list_medium_line_x3_t4_g4_g2

0x1f7d,	// (0x0009ee4b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1f7d,	// (0x0009ee4b) list_medium_line_x3_t4_g4_g3

0x884b,	// (0x000a5719) list_medium_line_x3_t4_g4_g4_ParamLimits

0x884b,	// (0x000a5719) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x000acbe1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x000acbe1) list_medium_line_x3_t4_g4_g

0x8857,	// (0x000a5725) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8857,	// (0x000a5725) list_medium_line_x3_t4_g4_t1

0x886e,	// (0x000a573c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x886e,	// (0x000a573c) list_medium_line_x3_t4_g4_t2

0x8883,	// (0x000a5751) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8883,	// (0x000a5751) list_medium_line_x3_t4_g4_t3

0x8898,	// (0x000a5766) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8898,	// (0x000a5766) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x000acbea) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x000acbea) list_medium_line_x3_t4_g4_t

0x88b5,	// (0x000a5783) list_single_dyc_row_text_pane_t1_ParamLimits

0x88b5,	// (0x000a5783) list_single_dyc_row_text_pane_t1

0x88f8,	// (0x000a57c6) list_single_dyc_row_text_pane_t2_ParamLimits

0x88f8,	// (0x000a57c6) list_single_dyc_row_text_pane_t2

0xa421,	// (0x000a72ef) list_single_dyc_row_text_pane_t3_ParamLimits

0xa421,	// (0x000a72ef) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x000acbf3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x000acbf3) list_single_dyc_row_text_pane_t

0xa445,	// (0x000a7313) list_single_dyc_row_pane_g1_ParamLimits

0xa445,	// (0x000a7313) list_single_dyc_row_pane_g1

0xa451,	// (0x000a731f) list_single_dyc_row_pane_g2_ParamLimits

0xa451,	// (0x000a731f) list_single_dyc_row_pane_g2

0xa45d,	// (0x000a732b) list_single_dyc_row_pane_g3_ParamLimits

0xa45d,	// (0x000a732b) list_single_dyc_row_pane_g3

0xa469,	// (0x000a7337) list_single_dyc_row_pane_g4_ParamLimits

0xa469,	// (0x000a7337) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x000acc00) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x000acc00) list_single_dyc_row_pane_g

0xa475,	// (0x000a7343) list_single_dyc_row_text_pane_ParamLimits

0xa475,	// (0x000a7343) list_single_dyc_row_text_pane

0x9bed,	// (0x000a6abb) bg_sp_fs_scroll_pane

0xe7ef,	// (0x000ab6bd) thumb_sp_fs_scroll_pane

0xa2ab,	// (0x000a7179) list_medium_line_g1_ParamLimits

0xa2ab,	// (0x000a7179) list_medium_line_g1

0xa494,	// (0x000a7362) list_medium_line_t1_ParamLimits

0xa494,	// (0x000a7362) list_medium_line_t1

0x1ec9,	// (0x0009ed97) list_medium_line_x2_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x2_g1

0x1ed5,	// (0x0009eda3) list_medium_line_x2_g2_ParamLimits

0x1ed5,	// (0x0009eda3) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x000acc09) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x000acc09) list_medium_line_x2_g

0xa4a9,	// (0x000a7377) list_medium_line_x2_t1_ParamLimits

0xa4a9,	// (0x000a7377) list_medium_line_x2_t1

0x1ec9,	// (0x0009ed97) list_medium_line_x3_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x3_g1

0x1ed5,	// (0x0009eda3) list_medium_line_x3_g2_ParamLimits

0x1ed5,	// (0x0009eda3) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x000acc09) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x000acc09) list_medium_line_x3_g

0xa4a9,	// (0x000a7377) list_medium_line_x3_t1_ParamLimits

0xa4a9,	// (0x000a7377) list_medium_line_x3_t1

0xe7f8,	// (0x000ab6c6) thumb_sp_fs_scroll_pane_g1

0xe801,	// (0x000ab6cf) thumb_sp_fs_scroll_pane_g2

0xe80a,	// (0x000ab6d8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000acc0e) thumb_sp_fs_scroll_pane_g

0xe7f8,	// (0x000ab6c6) bg_sp_fs_scroll_pane_g1

0xe801,	// (0x000ab6cf) bg_sp_fs_scroll_pane_g2

0xe80a,	// (0x000ab6d8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000acc0e) bg_sp_fs_scroll_pane_g

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ec9,	// (0x0009ed97) list_medium_line_x2_t3_g4_g1

0x1f71,	// (0x0009ee3f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f71,	// (0x0009ee3f) list_medium_line_x2_t3_g4_g2

0x1ed5,	// (0x0009eda3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ed5,	// (0x0009eda3) list_medium_line_x2_t3_g4_g3

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1ee1,	// (0x0009edaf) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000ac190) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000ac190) list_medium_line_x2_t3_g4_g

0x8a29,	// (0x000a58f7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a29,	// (0x000a58f7) list_medium_line_x2_t3_g4_t1

0x8a3f,	// (0x000a590d) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a3f,	// (0x000a590d) list_medium_line_x2_t3_g4_t2

0x1f16,	// (0x0009ede4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f16,	// (0x0009ede4) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x000acc15) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x000acc15) list_medium_line_x2_t3_g4_t

0xa2ab,	// (0x000a7179) list_medium_line_g2_g1_ParamLimits

0xa2ab,	// (0x000a7179) list_medium_line_g2_g1

0xb0a5,	// (0x000a7f73) list_medium_line_g2_g2_ParamLimits

0xb0a5,	// (0x000a7f73) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000ac8ce) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000ac8ce) list_medium_line_g2_g

0xa4bf,	// (0x000a738d) list_medium_line_g2_t1_ParamLimits

0xa4bf,	// (0x000a738d) list_medium_line_g2_t1

0xa2ab,	// (0x000a7179) list_medium_line_t3_g2_g1_ParamLimits

0xa2ab,	// (0x000a7179) list_medium_line_t3_g2_g1

0xb0a5,	// (0x000a7f73) list_medium_line_t3_g2_g2_ParamLimits

0xb0a5,	// (0x000a7f73) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000ac8ce) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000ac8ce) list_medium_line_t3_g2_g

0x8a58,	// (0x000a5926) list_medium_line_t3_g2_t1_ParamLimits

0x8a58,	// (0x000a5926) list_medium_line_t3_g2_t1

0x8a72,	// (0x000a5940) list_medium_line_t3_g2_t2_ParamLimits

0x8a72,	// (0x000a5940) list_medium_line_t3_g2_t2

0x8a88,	// (0x000a5956) list_medium_line_t3_g2_t3_ParamLimits

0x8a88,	// (0x000a5956) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x000acc1c) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x000acc1c) list_medium_line_t3_g2_t

0xb0b9,	// (0x000a7f87) list_medium_line_right_icon_g1

0xa4d4,	// (0x000a73a2) list_medium_line_right_icon_t1

0xa2ab,	// (0x000a7179) list_medium_line_t2_g1_ParamLimits

0xa2ab,	// (0x000a7179) list_medium_line_t2_g1

0x8a9f,	// (0x000a596d) list_medium_line_t2_t1_ParamLimits

0x8a9f,	// (0x000a596d) list_medium_line_t2_t1

0x8ab9,	// (0x000a5987) list_medium_line_t2_t2_ParamLimits

0x8ab9,	// (0x000a5987) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x000acc23) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x000acc23) list_medium_line_t2_t

0xa2ab,	// (0x000a7179) list_medium_line_t3_g1_ParamLimits

0xa2ab,	// (0x000a7179) list_medium_line_t3_g1

0x8ace,	// (0x000a599c) list_medium_line_t3_t1_ParamLimits

0x8ace,	// (0x000a599c) list_medium_line_t3_t1

0x8ae5,	// (0x000a59b3) list_medium_line_t3_t2_ParamLimits

0x8ae5,	// (0x000a59b3) list_medium_line_t3_t2

0x8afa,	// (0x000a59c8) list_medium_line_t3_t3_ParamLimits

0x8afa,	// (0x000a59c8) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x000acc28) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x000acc28) list_medium_line_t3_t

0xa2ab,	// (0x000a7179) list_medium_line_g3_g1_ParamLimits

0xa2ab,	// (0x000a7179) list_medium_line_g3_g1

0xb0c9,	// (0x000a7f97) list_medium_line_g3_g2_ParamLimits

0xb0c9,	// (0x000a7f97) list_medium_line_g3_g2

0xb0a5,	// (0x000a7f73) list_medium_line_g3_g3_ParamLimits

0xb0a5,	// (0x000a7f73) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x000acc2f) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x000acc2f) list_medium_line_g3_g

0xa4e2,	// (0x000a73b0) list_medium_line_g3_t1_ParamLimits

0xa4e2,	// (0x000a73b0) list_medium_line_g3_t1

0xa2ab,	// (0x000a7179) list_medium_line_t2_g3_g1_ParamLimits

0xa2ab,	// (0x000a7179) list_medium_line_t2_g3_g1

0xb0c9,	// (0x000a7f97) list_medium_line_t2_g3_g2_ParamLimits

0xb0c9,	// (0x000a7f97) list_medium_line_t2_g3_g2

0xb0a5,	// (0x000a7f73) list_medium_line_t2_g3_g3_ParamLimits

0xb0a5,	// (0x000a7f73) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x000acc2f) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x000acc2f) list_medium_line_t2_g3_g

0x8b0c,	// (0x000a59da) list_medium_line_t2_g3_t1_ParamLimits

0x8b0c,	// (0x000a59da) list_medium_line_t2_g3_t1

0x8b26,	// (0x000a59f4) list_medium_line_t2_g3_t2_ParamLimits

0x8b26,	// (0x000a59f4) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x000acc36) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x000acc36) list_medium_line_t2_g3_t

0xa2ab,	// (0x000a7179) list_medium_line_t3_g3_g1_ParamLimits

0xa2ab,	// (0x000a7179) list_medium_line_t3_g3_g1

0xb0c9,	// (0x000a7f97) list_medium_line_t3_g3_g2_ParamLimits

0xb0c9,	// (0x000a7f97) list_medium_line_t3_g3_g2

0xb0a5,	// (0x000a7f73) list_medium_line_t3_g3_g3_ParamLimits

0xb0a5,	// (0x000a7f73) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x000acc2f) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x000acc2f) list_medium_line_t3_g3_g

0x8b3c,	// (0x000a5a0a) list_medium_line_t3_g3_t1_ParamLimits

0x8b3c,	// (0x000a5a0a) list_medium_line_t3_g3_t1

0x8b55,	// (0x000a5a23) list_medium_line_t3_g3_t2_ParamLimits

0x8b55,	// (0x000a5a23) list_medium_line_t3_g3_t2

0x8b6b,	// (0x000a5a39) list_medium_line_t3_g3_t3_ParamLimits

0x8b6b,	// (0x000a5a39) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x000acc3b) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x000acc3b) list_medium_line_t3_g3_t

0xb0c1,	// (0x000a7f8f) list_medium_line_right_iconx2_g1

0xb0b9,	// (0x000a7f87) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x000acc42) list_medium_line_right_iconx2_g

0xb0d5,	// (0x000a7fa3) list_medium_line_right_iconx2_t1

0xb0c1,	// (0x000a7f8f) list_medium_line_t2_right_iconx2_g1

0xb0b9,	// (0x000a7f87) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x000acc42) list_medium_line_t2_right_iconx2_g

0x8b85,	// (0x000a5a53) list_medium_line_t2_right_iconx2_t1

0x8b95,	// (0x000a5a63) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x000acc47) list_medium_line_t2_right_iconx2_t

0x8ba3,	// (0x000a5a71) list_medium_line_x4_t4_t1

0x8bb1,	// (0x000a5a7f) list_medium_line_x4_t4_t2

0x8bc1,	// (0x000a5a8f) list_medium_line_x4_t4_t3

0x8bd1,	// (0x000a5a9f) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x000acc4c) list_medium_line_x4_t4_t

0x8c0b,	// (0x000a5ad9) tport_appsw_pane_ParamLimits

0x8c0b,	// (0x000a5ad9) tport_appsw_pane

0x8c19,	// (0x000a5ae7) tport_contact_pane_ParamLimits

0x8c19,	// (0x000a5ae7) tport_contact_pane

0x8c29,	// (0x000a5af7) tport_listscroll_pane_ParamLimits

0x8c29,	// (0x000a5af7) tport_listscroll_pane

0x8c39,	// (0x000a5b07) cell_tport_appsw_pane_ParamLimits

0x8c39,	// (0x000a5b07) cell_tport_appsw_pane

0xcf1b,	// (0x000a9de9) tport_appsw_pane_g1_ParamLimits

0xcf1b,	// (0x000a9de9) tport_appsw_pane_g1

0xe813,	// (0x000ab6e1) tport_contact_pane_g1

0xe81c,	// (0x000ab6ea) tport_contact_pane_t1

0xe82a,	// (0x000ab6f8) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x000acc55) tport_contact_pane_t

0xe838,	// (0x000ab706) list_tport_pane

0xe841,	// (0x000ab70f) scroll_pane_cp_030

0x8c6e,	// (0x000a5b3c) cell_tport_appsw_pane_g1

0x8c7e,	// (0x000a5b4c) cell_tport_appsw_pane_t1

0x8c8c,	// (0x000a5b5a) grid_highlight_pane_cp019

0x8c94,	// (0x000a5b62) list_tport_double_graphic_pane_ParamLimits

0x8c94,	// (0x000a5b62) list_tport_double_graphic_pane

0xa272,	// (0x000a7140) list_highlight_pane_cp023_ParamLimits

0xa272,	// (0x000a7140) list_highlight_pane_cp023

0x8ca1,	// (0x000a5b6f) list_tport_double_graphic_pane_g1_ParamLimits

0x8ca1,	// (0x000a5b6f) list_tport_double_graphic_pane_g1

0x8cae,	// (0x000a5b7c) list_tport_double_graphic_pane_t1_ParamLimits

0x8cae,	// (0x000a5b7c) list_tport_double_graphic_pane_t1

0x8cc3,	// (0x000a5b91) list_tport_double_graphic_pane_t2_ParamLimits

0x8cc3,	// (0x000a5b91) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x000acc61) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x000acc61) list_tport_double_graphic_pane_t

0x9bed,	// (0x000a6abb) main_cale_note_pane

0x67c1,	// (0x000a368f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67c1,	// (0x000a368f) cell_vitu2_function_top_wide_pane_cp01

0x8299,	// (0x000a5167) wait_bar_pane_cp05_ParamLimits

0xa272,	// (0x000a7140) listscroll_cmail_pane

0xe852,	// (0x000ab720) list_cmail_pane

0x8cdf,	// (0x000a5bad) list_cmail_body_pane

0x8cf8,	// (0x000a5bc6) list_single_cmail_header_caption_pane

0x8d19,	// (0x000a5be7) list_single_cmail_header_detail_pane_ParamLimits

0x8d19,	// (0x000a5be7) list_single_cmail_header_detail_pane

0x8d4a,	// (0x000a5c18) list_single_cmail_header_caption_pane_t1

0x8d5a,	// (0x000a5c28) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d5a,	// (0x000a5c28) list_single_cmail_header_detail_pane_g1

0xb0e3,	// (0x000a7fb1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb0e3,	// (0x000a7fb1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x000acc66) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x000acc66) list_single_cmail_header_detail_pane_g

0xa4f7,	// (0x000a73c5) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa4f7,	// (0x000a73c5) list_single_cmail_header_detail_pane_t1

0xa569,	// (0x000a7437) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa569,	// (0x000a7437) list_single_cmail_header_editor_pane_bg

0xe314,	// (0x000ab1e2) list_cmail_body_pane_g1

0xe87f,	// (0x000ab74d) list_cmail_body_pane_t1

0xd694,	// (0x000aa562) list_single_cmail_header_editor_pane_bg_g1

0xacb9,	// (0x000a7b87) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6a4,	// (0x000aa572) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd69c,	// (0x000aa56a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8be,	// (0x000aa78c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6c4,	// (0x000aa592) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6b4,	// (0x000aa582) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6bc,	// (0x000aa58a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac99,	// (0x000a7b67) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d72,	// (0x000a5c40) calenote_gesture_pane_ParamLimits

0x8d72,	// (0x000a5c40) calenote_gesture_pane

0x8d8c,	// (0x000a5c5a) calenote_window_pane_ParamLimits

0x8d8c,	// (0x000a5c5a) calenote_window_pane

0xe88d,	// (0x000ab75b) popup_note_window_cp01

0x8da4,	// (0x000a5c72) calenote_swipe_1_pane_ParamLimits

0x8da4,	// (0x000a5c72) calenote_swipe_1_pane

0x8686,	// (0x000a5554) calenote_swipe_2_pane_ParamLimits

0x8686,	// (0x000a5554) calenote_swipe_2_pane

0xe68e,	// (0x000ab55c) calenote_swipe_1_pane_g1_ParamLimits

0xe68e,	// (0x000ab55c) calenote_swipe_1_pane_g1

0xe69b,	// (0x000ab569) calenote_swipe_1_pane_g2_ParamLimits

0xe69b,	// (0x000ab569) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x000acb8a) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x000acb8a) calenote_swipe_1_pane_g

0xe89f,	// (0x000ab76d) calenote_swipe_1_pane_t1_ParamLimits

0xe89f,	// (0x000ab76d) calenote_swipe_1_pane_t1

0xe68e,	// (0x000ab55c) calenote_swipe_2_pane_g1_ParamLimits

0xe68e,	// (0x000ab55c) calenote_swipe_2_pane_g1

0xe8be,	// (0x000ab78c) calenote_swipe_2_pane_g2_ParamLimits

0xe8be,	// (0x000ab78c) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x000acc72) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x000acc72) calenote_swipe_2_pane_g

0xe8ca,	// (0x000ab798) calenote_swipe_2_pane_t1_ParamLimits

0xe8ca,	// (0x000ab798) calenote_swipe_2_pane_t1

0x9bed,	// (0x000a6abb) main_mup_navstr_pane

0x54c0,	// (0x000a238e) main_mup3_pane_t7_ParamLimits

0x54c0,	// (0x000a238e) main_mup3_pane_t7

0x5ec3,	// (0x000a2d91) main_mp4_pane_g6_ParamLimits

0x5ec3,	// (0x000a2d91) main_mp4_pane_g6

0x6241,	// (0x000a310f) main_image3_pane_t4_ParamLimits

0x6241,	// (0x000a310f) main_image3_pane_t4

0x8db7,	// (0x000a5c85) popup_navstr_preview_pane_ParamLimits

0x8db7,	// (0x000a5c85) popup_navstr_preview_pane

0x8dc3,	// (0x000a5c91) scroll_navstr_pane_ParamLimits

0x8dc3,	// (0x000a5c91) scroll_navstr_pane

0x9bed,	// (0x000a6abb) bg_popup_preview_window_pane_cp04

0xe8f1,	// (0x000ab7bf) popup_navstr_preview_pane_t1

0x8dcf,	// (0x000a5c9d) scroll_navstr_pane_g1_ParamLimits

0x8dcf,	// (0x000a5c9d) scroll_navstr_pane_g1

0x8ddc,	// (0x000a5caa) scroll_navstr_pane_t1_ParamLimits

0x8ddc,	// (0x000a5caa) scroll_navstr_pane_t1

0xe896,	// (0x000ab764) bg_button_pane_cp014

0xe896,	// (0x000ab764) bg_button_pane_cp030

0x8572,	// (0x000a5440) list_double_fisheye_pane_g4_ParamLimits

0x8572,	// (0x000a5440) list_double_fisheye_pane_g4

0x857e,	// (0x000a544c) list_double_fisheye_pane_g5_ParamLimits

0x857e,	// (0x000a544c) list_double_fisheye_pane_g5

0xe85a,	// (0x000ab728) sp_fs_scroll_pane_cp03

0xe766,	// (0x000ab634) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe772,	// (0x000ab640) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x000acba7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe77e,	// (0x000ab64c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8cd5,	// (0x000a5ba3) sp_fs_scroll_pane_cp02

0xa9b0,	// (0x000a787e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9b0,	// (0x000a787e) popup_sp_fs_calendar_preview_list_single_pane

0x9bed,	// (0x000a6abb) main_cam6_pano_pane

0xa272,	// (0x000a7140) main_mup3_pane_ParamLimits

0x9bed,	// (0x000a6abb) main_phacti_pane

0x816c,	// (0x000a503a) bg_button_pane_cp11

0x8184,	// (0x000a5052) main_mobtv_info_pane_g2_ParamLimits

0x8184,	// (0x000a5052) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x000acb07) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x000acb07) main_mobtv_info_pane_g

0x8336,	// (0x000a5204) sc_clock_pane_t5_ParamLimits

0x8336,	// (0x000a5204) sc_clock_pane_t5

0x83e5,	// (0x000a52b3) main_radioblah_pane_g1_ParamLimits

0xe5da,	// (0x000ab4a8) main_radioblah_pane_t3_ParamLimits

0xe5da,	// (0x000ab4a8) main_radioblah_pane_t3

0xe5f2,	// (0x000ab4c0) main_radioblah_pane_t4_ParamLimits

0xe5f2,	// (0x000ab4c0) main_radioblah_pane_t4

0x8403,	// (0x000a52d1) main_radioblah_text_pane_ParamLimits

0x8403,	// (0x000a52d1) main_radioblah_text_pane

0x8410,	// (0x000a52de) main_radioblah_info_pane_g1_ParamLimits

0x84a9,	// (0x000a5377) main_radioblah_info_pane_t4_ParamLimits

0x84a9,	// (0x000a5377) main_radioblah_info_pane_t4

0xa272,	// (0x000a7140) main_sp_fs_calendar_pane

0x8dee,	// (0x000a5cbc) main_phacti_pane_g1

0x8df6,	// (0x000a5cc4) phacti_note_pane_ParamLimits

0x8df6,	// (0x000a5cc4) phacti_note_pane

0xe908,	// (0x000ab7d6) phacti_term_pane_ParamLimits

0xe908,	// (0x000ab7d6) phacti_term_pane

0xe91d,	// (0x000ab7eb) phacti_note_pane_t1_ParamLimits

0xe91d,	// (0x000ab7eb) phacti_note_pane_t1

0xa580,	// (0x000a744e) phacti_term_pane_g1

0xa588,	// (0x000a7456) phacti_term_pane_t1_ParamLimits

0xa588,	// (0x000a7456) phacti_term_pane_t1

0xe934,	// (0x000ab802) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe93c,	// (0x000ab80a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x000acc7c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe944,	// (0x000ab812) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe944,	// (0x000ab812) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe95a,	// (0x000ab828) aid_popup_sp_fs_bg_corner_pane

0xcc86,	// (0x000a9b54) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bed,	// (0x000a6abb) popup_sp_fs_calendar_preview_bg_pane

0xe962,	// (0x000ab830) popup_sp_fs_calendar_preview_list_pane

0xc835,	// (0x000a9703) bg_main_sp_fs_cale_pane_ParamLimits

0xc835,	// (0x000a9703) bg_main_sp_fs_cale_pane

0xa5bb,	// (0x000a7489) listscroll_cale_mrui_pane_ParamLimits

0xa5bb,	// (0x000a7489) listscroll_cale_mrui_pane

0xa5d0,	// (0x000a749e) listscroll_sp_fs_schedule_track_pane

0xa5d9,	// (0x000a74a7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa5d9,	// (0x000a74a7) main_sp_fs_ctrlbar_pane_cp01

0xe96a,	// (0x000ab838) main_sp_fs_ribbon_pane

0xa5ec,	// (0x000a74ba) popup_sp_fs_cale_preview_window

0x8e55,	// (0x000a5d23) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e55,	// (0x000a5d23) list_single_sp_fs_schedule_track_pane

0x0df0,	// (0x0009dcbe) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0df0,	// (0x0009dcbe) bg_sp_fs_highlight_list_pane_cp03

0x8e6a,	// (0x000a5d38) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e6a,	// (0x000a5d38) list_single_sp_fs_schedule_track_pane_g1

0x8e76,	// (0x000a5d44) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e76,	// (0x000a5d44) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x000acc81) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x000acc81) list_single_sp_fs_schedule_track_pane_g

0x8e82,	// (0x000a5d50) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e82,	// (0x000a5d50) list_single_sp_fs_schedule_track_pane_t1

0x8ea0,	// (0x000a5d6e) sp_fs_schedule_track_pane_ParamLimits

0x8ea0,	// (0x000a5d6e) sp_fs_schedule_track_pane

0xe972,	// (0x000ab840) sp_fs_schedule_track_pane_g1

0xe97a,	// (0x000ab848) sp_fs_schedule_track_pane_g2

0xe982,	// (0x000ab850) sp_fs_schedule_track_pane_g3

0xe98a,	// (0x000ab858) sp_fs_schedule_track_pane_g4

0xe992,	// (0x000ab860) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x000acc86) sp_fs_schedule_track_pane_g

0xd694,	// (0x000aa562) bg_sp_fs_schedule_viewer_highlight_g1

0xacb9,	// (0x000a7b87) bg_sp_fs_schedule_viewer_highlight_g2

0xd69c,	// (0x000aa56a) bg_sp_fs_schedule_viewer_highlight_g3

0xd6a4,	// (0x000aa572) bg_sp_fs_schedule_viewer_highlight_g4

0xd8be,	// (0x000aa78c) bg_sp_fs_schedule_viewer_highlight_g5

0xd6b4,	// (0x000aa582) bg_sp_fs_schedule_viewer_highlight_g6

0xd6bc,	// (0x000aa58a) bg_sp_fs_schedule_viewer_highlight_g7

0xd6c4,	// (0x000aa592) bg_sp_fs_schedule_viewer_highlight_g8

0xac99,	// (0x000a7b67) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x000acc91) bg_sp_fs_schedule_viewer_highlight_g

0x9bed,	// (0x000a6abb) bg_main_sp_fs_ribbon_pane

0x8eb2,	// (0x000a5d80) main_sp_fs_ribbon_pane_g1

0xe99a,	// (0x000ab868) main_sp_fs_ribbon_pane_t1

0x8ebb,	// (0x000a5d89) main_sp_fs_ribbon_pane_t2

0xe9a9,	// (0x000ab877) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x000acca4) main_sp_fs_ribbon_pane_t

0xe9b8,	// (0x000ab886) main_sp_fs_ribbon_scheduler_pane

0xe9c0,	// (0x000ab88e) bg_main_sp_fs_ribbon_pane_g1

0xe9c9,	// (0x000ab897) bg_main_sp_fs_ribbon_pane_g2

0xe9d2,	// (0x000ab8a0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x000accab) bg_main_sp_fs_ribbon_pane_g

0xe9da,	// (0x000ab8a8) main_sp_fs_ribbon_scheduler_pane_g1

0xe9e3,	// (0x000ab8b1) main_sp_fs_ribbon_scheduler_pane_g2

0xe9ec,	// (0x000ab8ba) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x000accb2) main_sp_fs_ribbon_scheduler_pane_g

0xe9f5,	// (0x000ab8c3) list_cale_mrui_pane

0x8eca,	// (0x000a5d98) sp_fs_scroll_pane_cp07_ParamLimits

0x8eca,	// (0x000a5d98) sp_fs_scroll_pane_cp07

0x8ee6,	// (0x000a5db4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ee6,	// (0x000a5db4) bg_sp_fs_schedule_viewer_highlight

0xea02,	// (0x000ab8d0) list_single_sp_fs_schedule_track_pane_cp01

0xea0a,	// (0x000ab8d8) list_sp_fs_schedule_track_pane

0xea12,	// (0x000ab8e0) sp_fs_scroll_pane_cp06_ParamLimits

0xea12,	// (0x000ab8e0) sp_fs_scroll_pane_cp06

0xcc86,	// (0x000a9b54) bgmain_sp_fs_calendar_pane_g1

0x8ef3,	// (0x000a5dc1) list_single_cale_mrui_pane_ParamLimits

0x8ef3,	// (0x000a5dc1) list_single_cale_mrui_pane

0xa5fe,	// (0x000a74cc) list_single_cale_mrui_row_pane_ParamLimits

0xa5fe,	// (0x000a74cc) list_single_cale_mrui_row_pane

0xa614,	// (0x000a74e2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa614,	// (0x000a74e2) list_single_cale_mrui_row_pane_g1

0xa640,	// (0x000a750e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa640,	// (0x000a750e) list_single_cale_mrui_row_pane_t1

0x8f08,	// (0x000a5dd6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f08,	// (0x000a5dd6) list_single_cale_mrui_row_pane_t2

0xa652,	// (0x000a7520) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa652,	// (0x000a7520) list_single_cale_mrui_row_pane_t3

0xa681,	// (0x000a754f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa681,	// (0x000a754f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x000accc0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x000accc0) list_single_cale_mrui_row_pane_t

0x8f6e,	// (0x000a5e3c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f6e,	// (0x000a5e3c) list_single_cmail_header_editor_pane_bg_cp01

0x8f92,	// (0x000a5e60) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f92,	// (0x000a5e60) list_single_cmail_header_editor_pane_bg_cp02

0x8fae,	// (0x000a5e7c) main_radioblah_text_pane_t1_ParamLimits

0x8fae,	// (0x000a5e7c) main_radioblah_text_pane_t1

0xea31,	// (0x000ab8ff) cam6_indi_pane_cp01

0xea39,	// (0x000ab907) cam6_mode_pane_cp01

0xea41,	// (0x000ab90f) cam6_pano_pane

0xea4a,	// (0x000ab918) cam6_zoom_pane_cp01

0xea54,	// (0x000ab922) cam6_pano_image_pane

0xea5d,	// (0x000ab92b) cam6_pano_pane_g1

0xe314,	// (0x000ab1e2) cam6_pano_pane_g2

0xea66,	// (0x000ab934) cam6_pano_pane_g3

0xea6f,	// (0x000ab93d) cam6_pano_pane_g4

0xd228,	// (0x000aa0f6) cam6_pano_pane_g5

0xea78,	// (0x000ab946) cam6_pano_pane_g6

0xea80,	// (0x000ab94e) cam6_pano_pane_g7

0xea88,	// (0x000ab956) cam6_pano_pane_g8

0xea91,	// (0x000ab95f) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x000accc9) cam6_pano_pane_g

0x9bed,	// (0x000a6abb) main_browser_tag_pane

0xe8e9,	// (0x000ab7b7) grid_navstr_albumart_pane

0xea9c,	// (0x000ab96a) cell_navstr_albumart_pane_ParamLimits

0xea9c,	// (0x000ab96a) cell_navstr_albumart_pane

0xeabb,	// (0x000ab989) cell_navstr_albumart_pane_g1

0xc642,	// (0x000a9510) cell_navstr_albumart_pane_g2

0xc652,	// (0x000a9520) cell_navstr_albumart_pane_g3

0xc64a,	// (0x000a9518) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x000accdc) cell_navstr_albumart_pane_g

0x8fc8,	// (0x000a5e96) bt_list_pane_ParamLimits

0x8fc8,	// (0x000a5e96) bt_list_pane

0x8fe1,	// (0x000a5eaf) bt_list_pane_t1

0x8ff0,	// (0x000a5ebe) bt_list_pane_t2

0x0001,

0xfe17,	// (0x000acce5) bt_list_pane_t

0x9bed,	// (0x000a6abb) main_cale_prevew_pane

0x8fff,	// (0x000a5ecd) popup_cale_preview_window_ParamLimits

0x8fff,	// (0x000a5ecd) popup_cale_preview_window

0xa272,	// (0x000a7140) bg_popup_preview_window_pane_cp05_ParamLimits

0xa272,	// (0x000a7140) bg_popup_preview_window_pane_cp05

0xeac3,	// (0x000ab991) list_cale_preview_pane_ParamLimits

0xeac3,	// (0x000ab991) list_cale_preview_pane

0x901a,	// (0x000a5ee8) list_double_cale_preview_pane_ParamLimits

0x901a,	// (0x000a5ee8) list_double_cale_preview_pane

0x902e,	// (0x000a5efc) list_single_cale_preview_pane_ParamLimits

0x902e,	// (0x000a5efc) list_single_cale_preview_pane

0x9046,	// (0x000a5f14) list_single_cale_preview_pane_g1

0x904e,	// (0x000a5f1c) list_single_cale_preview_pane_t1_ParamLimits

0x904e,	// (0x000a5f1c) list_single_cale_preview_pane_t1

0x9063,	// (0x000a5f31) list_double_cale_preview_pane_g1

0x906b,	// (0x000a5f39) list_double_cale_preview_pane_t1_ParamLimits

0x906b,	// (0x000a5f39) list_double_cale_preview_pane_t1

0x9080,	// (0x000a5f4e) list_double_cale_preview_pane_t2_ParamLimits

0x9080,	// (0x000a5f4e) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x000accea) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x000accea) list_double_cale_preview_pane_t

0x9bed,	// (0x000a6abb) main_ezdial_pane

0xa272,	// (0x000a7140) main_sp_fs_email_pane_ParamLimits

0x86be,	// (0x000a558c) cmail_ddmenu_btn01_pane_ParamLimits

0x86be,	// (0x000a558c) cmail_ddmenu_btn01_pane

0x86db,	// (0x000a55a9) cmail_ddmenu_btn02_pane_ParamLimits

0x86db,	// (0x000a55a9) cmail_ddmenu_btn02_pane

0x86f9,	// (0x000a55c7) cmail_ddmenu_btn03_pane_ParamLimits

0x86f9,	// (0x000a55c7) cmail_ddmenu_btn03_pane

0x8729,	// (0x000a55f7) main_sp_fs_ctrlbar_pane_ParamLimits

0x8743,	// (0x000a5611) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cdf,	// (0x000a5bad) list_cmail_body_pane_ParamLimits

0xe869,	// (0x000ab737) bg_button_pane_cp12

0xe872,	// (0x000ab740) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe872,	// (0x000ab740) list_single_cmail_header_detail_pane_g3

0xa545,	// (0x000a7413) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa545,	// (0x000a7413) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x000acc6d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x000acc6d) list_single_cmail_header_detail_pane_t

0xa59d,	// (0x000a746b) phacti_term_pane_t2_ParamLimits

0xa59d,	// (0x000a746b) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x000acc77) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x000acc77) phacti_term_pane_t

0xeacf,	// (0x000ab99d) aid_size_list_single_double

0x9098,	// (0x000a5f66) popup_ezdial_listscroll_window

0x90ba,	// (0x000a5f88) popup_number_entry_window_cp01

0xaa50,	// (0x000a791e) bg_popup_call_pane_cp09

0xeadb,	// (0x000ab9a9) ezdial_list_pane

0xeae3,	// (0x000ab9b1) scroll_pane_cp23

0xca65,	// (0x000a9933) bg_button_pane_cp028_ParamLimits

0xca65,	// (0x000a9933) bg_button_pane_cp028

0x90c8,	// (0x000a5f96) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90c8,	// (0x000a5f96) cmail_ddmenu_btn01_pane_g1

0x90da,	// (0x000a5fa8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90da,	// (0x000a5fa8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x000accef) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x000accef) cmail_ddmenu_btn01_pane_g

0xeaeb,	// (0x000ab9b9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaeb,	// (0x000ab9b9) cmail_ddmenu_btn01_pane_t1

0xc835,	// (0x000a9703) bg_button_pane_cp029_ParamLimits

0xc835,	// (0x000a9703) bg_button_pane_cp029

0x90e6,	// (0x000a5fb4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x90e6,	// (0x000a5fb4) cmail_ddmenu_btn02_pane_g1

0x90fe,	// (0x000a5fcc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x90fe,	// (0x000a5fcc) cmail_ddmenu_btn02_pane_t1

0x0df0,	// (0x0009dcbe) bg_button_pane_cp031_ParamLimits

0x0df0,	// (0x0009dcbe) bg_button_pane_cp031

0x90e6,	// (0x000a5fb4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x90e6,	// (0x000a5fb4) cmail_ddmenu_btn03_pane_g1

0x90fe,	// (0x000a5fcc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x90fe,	// (0x000a5fcc) cmail_ddmenu_btn03_pane_t1

0x60dc,	// (0x000a2faa) cell_dialer2_keypad_pane_t1_ParamLimits

0x60f6,	// (0x000a2fc4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x60f6,	// (0x000a2fc4) cell_dialer2_keypad_pane_t1_copy1

0x7fdd,	// (0x000a4eab) ncimui_group_button_pane

0xa272,	// (0x000a7140) main_sp_fs_calendar_pane_ParamLimits

0x8cf8,	// (0x000a5bc6) list_single_cmail_header_caption_pane_ParamLimits

0xa5b2,	// (0x000a7480) aid_recal_txt_sm_pane

0x9bed,	// (0x000a6abb) mian_recal_day_pane

0xa5ec,	// (0x000a74ba) popup_sp_fs_cale_preview_window_ParamLimits

0xeb01,	// (0x000ab9cf) list_recal_day_pane

0xa6cc,	// (0x000a759a) list_single_recal_day_pane_ParamLimits

0xa6cc,	// (0x000a759a) list_single_recal_day_pane

0xeb28,	// (0x000ab9f6) list_single_recal_day_pane_g1_ParamLimits

0xeb28,	// (0x000ab9f6) list_single_recal_day_pane_g1

0xa6de,	// (0x000a75ac) list_single_recal_day_pane_g2_ParamLimits

0xa6de,	// (0x000a75ac) list_single_recal_day_pane_g2

0xa6ea,	// (0x000a75b8) list_single_recal_day_pane_g3_ParamLimits

0xa6ea,	// (0x000a75b8) list_single_recal_day_pane_g3

0x9122,	// (0x000a5ff0) list_single_recal_day_pane_g4_ParamLimits

0x9122,	// (0x000a5ff0) list_single_recal_day_pane_g4

0xa6f6,	// (0x000a75c4) list_single_recal_day_pane_g5_ParamLimits

0xa6f6,	// (0x000a75c4) list_single_recal_day_pane_g5

0xa702,	// (0x000a75d0) list_single_recal_day_pane_g6_ParamLimits

0xa702,	// (0x000a75d0) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x000accfe) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x000accfe) list_single_recal_day_pane_g

0xa716,	// (0x000a75e4) list_single_recal_day_pane_t1

0xa728,	// (0x000a75f6) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x000acd09) list_single_recal_day_pane_t

0x913a,	// (0x000a6008) ncimui_query_button_pane_ParamLimits

0x913a,	// (0x000a6008) ncimui_query_button_pane

0x914a,	// (0x000a6018) ncimui_query_button_pane_t1_ParamLimits

0x914a,	// (0x000a6018) ncimui_query_button_pane_t1

0xeb34,	// (0x000aba02) ncimui_query_button_pane_t2_ParamLimits

0xeb34,	// (0x000aba02) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x000acd0e) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x000acd0e) ncimui_query_button_pane_t

0x915d,	// (0x000a602b) query_button_pane_ParamLimits

0x915d,	// (0x000a602b) query_button_pane

0x9bed,	// (0x000a6abb) bg_button_pane_cp0028

0xeb47,	// (0x000aba15) query_button_pane_t1

0x44a9,	// (0x000a1377) main_tport_pane_ParamLimits

0x8be1,	// (0x000a5aaf) bg_popup_window_pane_cp01_ParamLimits

0x8be1,	// (0x000a5aaf) bg_popup_window_pane_cp01

0x8bef,	// (0x000a5abd) heading_pane_cp08_ParamLimits

0x8bef,	// (0x000a5abd) heading_pane_cp08

0x8bfd,	// (0x000a5acb) heading_pane_cp07_ParamLimits

0x8bfd,	// (0x000a5acb) heading_pane_cp07

0x8c6e,	// (0x000a5b3c) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x000acc5a) cell_tport_appsw_pane_g

0xa222,	// (0x000a70f0) input_candi_list_open_g1

0xae6d,	// (0x000a7d3b) list_cale_time_pane_g6_ParamLimits

0xae6d,	// (0x000a7d3b) list_cale_time_pane_g6

0x4f2c,	// (0x000a1dfa) aid_size_touch_calib_1_ParamLimits

0x4f2c,	// (0x000a1dfa) aid_size_touch_calib_1

0x4f38,	// (0x000a1e06) aid_size_touch_calib_2_ParamLimits

0x4f38,	// (0x000a1e06) aid_size_touch_calib_2

0x4f46,	// (0x000a1e14) aid_size_touch_calib_3_ParamLimits

0x4f46,	// (0x000a1e14) aid_size_touch_calib_3

0x4f56,	// (0x000a1e24) aid_size_touch_calib_4_ParamLimits

0x4f56,	// (0x000a1e24) aid_size_touch_calib_4

0x4f64,	// (0x000a1e32) main_touch_calib_button_group_pane_ParamLimits

0x4f64,	// (0x000a1e32) main_touch_calib_button_group_pane

0x4f72,	// (0x000a1e40) main_touch_calib_pane_g1_ParamLimits

0x4f7e,	// (0x000a1e4c) main_touch_calib_pane_g2_ParamLimits

0x4f8a,	// (0x000a1e58) main_touch_calib_pane_g3_ParamLimits

0x4f96,	// (0x000a1e64) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000ac61f) main_touch_calib_pane_g_ParamLimits

0x4fa2,	// (0x000a1e70) main_touch_calib_pane_t1_ParamLimits

0x4fb9,	// (0x000a1e87) main_touch_calib_pane_t2_ParamLimits

0x4fd2,	// (0x000a1ea0) main_touch_calib_pane_t3_ParamLimits

0x4fe8,	// (0x000a1eb6) main_touch_calib_pane_t4_ParamLimits

0x4ffe,	// (0x000a1ecc) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000ac628) main_touch_calib_pane_t_ParamLimits

0xcfb6,	// (0x000a9e84) list_single_fp_cale_pane_g3_ParamLimits

0xcfb6,	// (0x000a9e84) list_single_fp_cale_pane_g3

0x6581,	// (0x000a344f) bg_button_pane_cp012_ParamLimits

0x6581,	// (0x000a344f) bg_vkb2_func_pane_cp03_ParamLimits

0x6f8f,	// (0x000a3e5d) cell_vitu2_function_top_pane_g1_ParamLimits

0x6581,	// (0x000a344f) bg_vkb2_func_pane_cp04_ParamLimits

0x7f63,	// (0x000a4e31) main_ncimui_button_group_pane_ParamLimits

0x7f63,	// (0x000a4e31) main_ncimui_button_group_pane

0x7fcb,	// (0x000a4e99) main_ncimui_pane_t3_ParamLimits

0x7fcb,	// (0x000a4e99) main_ncimui_pane_t3

0xe8ff,	// (0x000ab7cd) phacti_button_group_pane

0xeacf,	// (0x000ab99d) aid_size_list_single_double_ParamLimits

0x9098,	// (0x000a5f66) popup_ezdial_listscroll_window_ParamLimits

0x90ba,	// (0x000a5f88) popup_number_entry_window_cp01_ParamLimits

0x916a,	// (0x000a6038) phacti_button_pane_ParamLimits

0x916a,	// (0x000a6038) phacti_button_pane

0x9bed,	// (0x000a6abb) bg_button_pane_cp14

0xeb55,	// (0x000aba23) phacti_button_pane_t1

0x917b,	// (0x000a6049) main_touch_calib_button_pane_ParamLimits

0x917b,	// (0x000a6049) main_touch_calib_button_pane

0xa89a,	// (0x000a7768) bg_button_pane_cp18_ParamLimits

0xa89a,	// (0x000a7768) bg_button_pane_cp18

0xeb63,	// (0x000aba31) main_touch_calib_button_pane_t1_ParamLimits

0xeb63,	// (0x000aba31) main_touch_calib_button_pane_t1

0xeb79,	// (0x000aba47) main_touch_calib_button_pane_t2_ParamLimits

0xeb79,	// (0x000aba47) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x000acd13) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x000acd13) main_touch_calib_button_pane_t

0x9bed,	// (0x000a6abb) cell_ncimui_button_pane

0x9bed,	// (0x000a6abb) bg_button_pane_cp032

0xeb97,	// (0x000aba65) cell_ncimui_button_pane_t1

0x6152,	// (0x000a3020) image3_infobar_pane_ParamLimits

0x6152,	// (0x000a3020) image3_infobar_pane

0x8358,	// (0x000a5226) fs_bigclock_status_pane_ParamLimits

0x8358,	// (0x000a5226) fs_bigclock_status_pane

0x8365,	// (0x000a5233) main_fs_bigclock_clock_pane_ParamLimits

0x8365,	// (0x000a5233) main_fs_bigclock_clock_pane

0x8381,	// (0x000a524f) main_fs_bigclock_indi_pane_ParamLimits

0x8381,	// (0x000a524f) main_fs_bigclock_indi_pane

0x83b3,	// (0x000a5281) main_fs_bigclock_swipe_pane_ParamLimits

0x83b3,	// (0x000a5281) main_fs_bigclock_swipe_pane

0x9bed,	// (0x000a6abb) main_fs_clock_dumped_data

0xe43c,	// (0x000ab30a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe43c,	// (0x000ab30a) list_single_fs_bigclock_indicator_pane_g1

0xe466,	// (0x000ab334) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe466,	// (0x000ab334) list_single_fs_bigclock_indicator_pane_g2

0xe480,	// (0x000ab34e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe480,	// (0x000ab34e) list_single_fs_bigclock_indicator_pane_g3

0xe49a,	// (0x000ab368) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe49a,	// (0x000ab368) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x000acb3b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x000acb3b) list_single_fs_bigclock_indicator_pane_g

0xe4c5,	// (0x000ab393) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4c5,	// (0x000ab393) list_single_fs_bigclock_indicator_pane_t1

0xe4ed,	// (0x000ab3bb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ed,	// (0x000ab3bb) list_single_fs_bigclock_indicator_pane_t2

0xe515,	// (0x000ab3e3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe515,	// (0x000ab3e3) list_single_fs_bigclock_indicator_pane_t3

0xe53d,	// (0x000ab40b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe53d,	// (0x000ab40b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x000acb46) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x000acb46) list_single_fs_bigclock_indicator_pane_t

0xeba5,	// (0x000aba73) image3_infobar_fav_pane_ParamLimits

0xeba5,	// (0x000aba73) image3_infobar_fav_pane

0xebb5,	// (0x000aba83) image3_infobar_loc_pane_ParamLimits

0xebb5,	// (0x000aba83) image3_infobar_loc_pane

0xebcb,	// (0x000aba99) image3_infobar_time_pane_ParamLimits

0xebcb,	// (0x000aba99) image3_infobar_time_pane

0xcc86,	// (0x000a9b54) image3_infobar_time_pane_g1

0xebdb,	// (0x000abaa9) image3_infobar_time_pane_t1

0xcc86,	// (0x000a9b54) image3_infobar_loc_pane_g1

0xebe9,	// (0x000abab7) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x000acd18) image3_infobar_loc_pane_g

0xebf1,	// (0x000ababf) image3_infobar_loc_pane_t1

0xcc86,	// (0x000a9b54) image3_infobar_fav_pane_g1

0xebff,	// (0x000abacd) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x000acd1d) image3_infobar_fav_pane_g

0xec07,	// (0x000abad5) fs_bigclock_status_battery_pane

0xec10,	// (0x000abade) fs_bigclock_status_signal_pane

0xec19,	// (0x000abae7) fs_bigclock_status_title_pane

0xec22,	// (0x000abaf0) fs_bigclock_status_signal_pane_g1

0xec2b,	// (0x000abaf9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x000acd22) fs_bigclock_status_signal_pane_g

0xec33,	// (0x000abb01) fs_bigclock_status_battery_pane_g1

0xec3c,	// (0x000abb0a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x000acd27) fs_bigclock_status_battery_pane_g

0xec44,	// (0x000abb12) fs_bigclock_status_title_pane_t1

0xcc86,	// (0x000a9b54) main_fs_bigclock_clock_pane_g1

0xec52,	// (0x000abb20) main_fs_bigclock_clock_pane_g2

0xec5d,	// (0x000abb2b) main_fs_bigclock_clock_pane_g3

0xec5d,	// (0x000abb2b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x000acd2c) main_fs_bigclock_clock_pane_g

0xec69,	// (0x000abb37) main_fs_bigclock_clock_pane_t1

0x918b,	// (0x000a6059) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x000acd35) main_fs_bigclock_clock_pane_t

0x919a,	// (0x000a6068) list_single_fs_bigclock_indicator_pane_ParamLimits

0x919a,	// (0x000a6068) list_single_fs_bigclock_indicator_pane

0x91ab,	// (0x000a6079) list_single_fs_bigclock_pane_ParamLimits

0x91ab,	// (0x000a6079) list_single_fs_bigclock_pane

0xec80,	// (0x000abb4e) main_fs_bigclock_indicator_pane_t1

0xec8f,	// (0x000abb5d) list_single_fs_bigclock_pane_g1

0xec97,	// (0x000abb65) list_single_fs_bigclock_pane_t1

0xcc86,	// (0x000a9b54) main_fs_bigclock_swipe_pane_g1

0xecda,	// (0x000abba8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x000acd46) main_fs_bigclock_swipe_pane_g

0xece2,	// (0x000abbb0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xece2,	// (0x000abbb0) main_fs_bigclock_swipe_pane_t1

0x333f,	// (0x000a020d) call_type_pane_ParamLimits

0x9bed,	// (0x000a6abb) main_btmg_pane

0xb0ef,	// (0x000a7fbd) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb0ef,	// (0x000a7fbd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x000accb9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x000accb9) list_single_cale_mrui_row_pane_g

0xa6ba,	// (0x000a7588) list_recal_vselct_arw_lo_pane

0xeb20,	// (0x000ab9ee) list_recal_vselct_arw_up_pane

0xa6c2,	// (0x000a7590) list_recal_vselct_pane

0x9201,	// (0x000a60cf) btmg_button_pane

0x920d,	// (0x000a60db) main_btmg_pane_g1

0x9bed,	// (0x000a6abb) bg_button_pane_cp044

0xecff,	// (0x000abbcd) btmg_button_pane_t1

0xc821,	// (0x000a96ef) aid_listscroll_gen

0xa272,	// (0x000a7140) main_cntbar_detail_pane

0xe84a,	// (0x000ab718) list_cmail_folder_pane

0xe85a,	// (0x000ab728) sp_fs_scroll_pane_cp03_ParamLimits

0x9215,	// (0x000a60e3) list_single_fs_dyc_pane_cp01_ParamLimits

0x9215,	// (0x000a60e3) list_single_fs_dyc_pane_cp01

0xed0d,	// (0x000abbdb) aid_size_cmail_indent

0xa73a,	// (0x000a7608) list_single_dyc_row_pane_cp01

0x9252,	// (0x000a6120) cntbar_detail_list_pane_ParamLimits

0x9252,	// (0x000a6120) cntbar_detail_list_pane

0x9292,	// (0x000a6160) main_cntbar_detail_cont_pane_ParamLimits

0x9292,	// (0x000a6160) main_cntbar_detail_cont_pane

0x3262,	// (0x000a0130) scroll_pane_cp032_ParamLimits

0x3262,	// (0x000a0130) scroll_pane_cp032

0x929e,	// (0x000a616c) cntbar_detail_list_event_pane_ParamLimits

0x929e,	// (0x000a616c) cntbar_detail_list_event_pane

0x9260,	// (0x000a612e) cntbar_detail_list_shct_pane

0xad07,	// (0x000a7bd5) aid_list_gen

0xed16,	// (0x000abbe4) aid_scroll

0xed1f,	// (0x000abbed) aid_size_touch_scroll_bar

0x76da,	// (0x000a45a8) aid_list_double

0xed28,	// (0x000abbf6) aid_list_single

0x76c8,	// (0x000a4596) aid_list_single_lg

0xa743,	// (0x000a7611) aid_list_z_g_a_sm

0xb0fb,	// (0x000a7fc9) aid_list_z_g_d

0x92ae,	// (0x000a617c) aid_txt_z_prm

0x92be,	// (0x000a618c) aid_txt_z_prm_cp01

0x92cc,	// (0x000a619a) aid_txt_z_sec

0x92da,	// (0x000a61a8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92da,	// (0x000a61a8) main_cntbar_detail_cont_pane_g1

0x92e7,	// (0x000a61b5) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92e7,	// (0x000a61b5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x000acd4b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x000acd4b) main_cntbar_detail_cont_pane_g

0xed31,	// (0x000abbff) main_cntbar_detail_cont_pane_t1

0xed3f,	// (0x000abc0d) main_cntbar_detail_cont_pane_t2

0xed4d,	// (0x000abc1b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x000acd50) main_cntbar_detail_cont_pane_t

0x92f3,	// (0x000a61c1) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92f3,	// (0x000a61c1) cell_cntbar_detail_list_shct_pane

0xed5b,	// (0x000abc29) cntbar_detail_list_shct_pane_g1

0xed64,	// (0x000abc32) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x000acd57) cntbar_detail_list_shct_pane_g

0x9307,	// (0x000a61d5) cntbar_detail_list_event_pane_g1_ParamLimits

0x9307,	// (0x000a61d5) cntbar_detail_list_event_pane_g1

0x9313,	// (0x000a61e1) cntbar_detail_list_event_pane_g2_ParamLimits

0x9313,	// (0x000a61e1) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x000acd5c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x000acd5c) cntbar_detail_list_event_pane_g

0x9381,	// (0x000a624f) cntbar_detail_list_event_pane_t1_ParamLimits

0x9381,	// (0x000a624f) cntbar_detail_list_event_pane_t1

0x9396,	// (0x000a6264) cntbar_detail_list_event_pane_t2_ParamLimits

0x9396,	// (0x000a6264) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x000acd69) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x000acd69) cntbar_detail_list_event_pane_t

0xcc86,	// (0x000a9b54) cell_cntbar_detail_list_shct_pane_g1

0x3712,	// (0x000a05e0) navi_pane_mv_g3

0xa272,	// (0x000a7140) main_cntbar_detail_pane_ParamLimits

0x9bed,	// (0x000a6abb) main_notif_wgt_pane

0x5dfc,	// (0x000a2cca) aid_tch_main_mp4_pane_g4

0x603b,	// (0x000a2f09) popup_slider_window_cp02

0xa6b0,	// (0x000a757e) list_recal_day_event_pane

0x9232,	// (0x000a6100) cntbar_detail_btn_pane_ParamLimits

0x9232,	// (0x000a6100) cntbar_detail_btn_pane

0x9242,	// (0x000a6110) cntbar_detail_btn_pane_cp01_ParamLimits

0x9242,	// (0x000a6110) cntbar_detail_btn_pane_cp01

0x9260,	// (0x000a612e) cntbar_detail_list_shct_pane_ParamLimits

0x926c,	// (0x000a613a) cntbar_detail_pane_g1_ParamLimits

0x926c,	// (0x000a613a) cntbar_detail_pane_g1

0x927c,	// (0x000a614a) cntbar_detail_pane_t1_ParamLimits

0x927c,	// (0x000a614a) cntbar_detail_pane_t1

0x931f,	// (0x000a61ed) cntbar_detail_list_event_pane_g3_ParamLimits

0x931f,	// (0x000a61ed) cntbar_detail_list_event_pane_g3

0x9337,	// (0x000a6205) cntbar_detail_list_event_pane_g4_ParamLimits

0x9337,	// (0x000a6205) cntbar_detail_list_event_pane_g4

0x934f,	// (0x000a621d) cntbar_detail_list_event_pane_g5_ParamLimits

0x934f,	// (0x000a621d) cntbar_detail_list_event_pane_g5

0x9367,	// (0x000a6235) cntbar_detail_list_event_pane_g6_ParamLimits

0x9367,	// (0x000a6235) cntbar_detail_list_event_pane_g6

0x93ab,	// (0x000a6279) cntbar_detail_list_event_pane_t3_ParamLimits

0x93ab,	// (0x000a6279) cntbar_detail_list_event_pane_t3

0x93bd,	// (0x000a628b) popup_notif_wgt_window_ParamLimits

0x93bd,	// (0x000a628b) popup_notif_wgt_window

0x93cd,	// (0x000a629b) popup_submenu_window_cp01_ParamLimits

0x93cd,	// (0x000a629b) popup_submenu_window_cp01

0xaa50,	// (0x000a791e) bg_popup_window_pane_cp10

0xed6d,	// (0x000abc3b) listscroll_notif_wgt_pane

0xed7f,	// (0x000abc4d) list_notif_wgt_window

0xed88,	// (0x000abc56) scroll_pane_cp033

0x93dd,	// (0x000a62ab) list_notif_wgt_row_pane_ParamLimits

0x93dd,	// (0x000a62ab) list_notif_wgt_row_pane

0xed91,	// (0x000abc5f) aid_size_list_notif_wgt_del

0xed9e,	// (0x000abc6c) list_notif_wgt_row_pane_g1

0xedaa,	// (0x000abc78) list_notif_wgt_row_pane_g2

0xedbe,	// (0x000abc8c) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x000acd70) list_notif_wgt_row_pane_g

0xedcb,	// (0x000abc99) list_notif_wgt_row_pane_t1

0xede1,	// (0x000abcaf) list_notif_wgt_row_pane_t2

0xedf3,	// (0x000abcc1) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x000acd77) list_notif_wgt_row_pane_t

0xd8d8,	// (0x000aa7a6) list_recal_day_event_pane_g1

0xee05,	// (0x000abcd3) list_recal_day_event_pane_t1

0x9bed,	// (0x000a6abb) bg_button_pane_cp045

0xee14,	// (0x000abce2) cntbar_detail_btn_pane_t1

0xc835,	// (0x000a9703) main_callh_pane_ParamLimits

0xc835,	// (0x000a9703) main_callh_pane

0x9bed,	// (0x000a6abb) main_coverflow0_pane

0x9bed,	// (0x000a6abb) main_wgtman_pane

0x83cb,	// (0x000a5299) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83cb,	// (0x000a5299) main_fs_bigclock_unlock_btn_pane

0x8c66,	// (0x000a5b34) bg_button_pane_cp16

0x8c76,	// (0x000a5b44) cell_tport_appsw_pane_g3

0x93ee,	// (0x000a62bc) cf0_flow_pane_ParamLimits

0x93ee,	// (0x000a62bc) cf0_flow_pane

0xee22,	// (0x000abcf0) listscroll_cf0_pane

0xee2d,	// (0x000abcfb) main_cf0_pane_g1

0x93fd,	// (0x000a62cb) main_cf0_pane_t1_ParamLimits

0x93fd,	// (0x000a62cb) main_cf0_pane_t1

0x9411,	// (0x000a62df) main_cf0_pane_t2_ParamLimits

0x9411,	// (0x000a62df) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x000acd83) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x000acd83) main_cf0_pane_t

0xee3f,	// (0x000abd0d) scroll_pane_cp11

0x9425,	// (0x000a62f3) cf0_flow_pane_g1

0x942d,	// (0x000a62fb) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x000acd88) cf0_flow_pane_g

0x9435,	// (0x000a6303) cf0_flow_pane_t1

0x9bed,	// (0x000a6abb) main_call6_pane

0x9bed,	// (0x000a6abb) main_calllock_pane

0x9443,	// (0x000a6311) call6_btn_grp_pane_ParamLimits

0x9443,	// (0x000a6311) call6_btn_grp_pane

0x9450,	// (0x000a631e) call6_pane_g1_ParamLimits

0x9450,	// (0x000a631e) call6_pane_g1

0x9460,	// (0x000a632e) popup_call6_1st_window_ParamLimits

0x9460,	// (0x000a632e) popup_call6_1st_window

0x946e,	// (0x000a633c) popup_call6_2nd_window_ParamLimits

0x946e,	// (0x000a633c) popup_call6_2nd_window

0x947c,	// (0x000a634a) cell_call6_btn_pane_ParamLimits

0x947c,	// (0x000a634a) cell_call6_btn_pane

0xaa50,	// (0x000a791e) bg_popup_call2_in_pane_cp03

0xee4a,	// (0x000abd18) popup_call6_1st_window_g1

0xee52,	// (0x000abd20) popup_call6_1st_window_g2

0xee5a,	// (0x000abd28) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x000acd8d) popup_call6_1st_window_g

0xee62,	// (0x000abd30) popup_call6_1st_window_t1

0xee71,	// (0x000abd3f) popup_call6_1st_window_t2

0xee81,	// (0x000abd4f) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x000acd94) popup_call6_1st_window_t

0xaa50,	// (0x000a791e) bg_popup_call2_in_pane_cp04

0xee4a,	// (0x000abd18) popup_call6_2nd_window_g1

0xee52,	// (0x000abd20) popup_call6_2nd_window_g2

0xee5a,	// (0x000abd28) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x000acd8d) popup_call6_2nd_window_g

0xee62,	// (0x000abd30) popup_call6_2nd_window_t1

0x9bed,	// (0x000a6abb) bg_button_pane_cp15

0xee91,	// (0x000abd5f) cell_call6_btn_pane_g1

0xee9a,	// (0x000abd68) cell_call6_btn_pane_t1

0x948b,	// (0x000a6359) listscroll_wgtman_pane_ParamLimits

0x948b,	// (0x000a6359) listscroll_wgtman_pane

0x94a7,	// (0x000a6375) wgtman_btn_pane_ParamLimits

0x94a7,	// (0x000a6375) wgtman_btn_pane

0xb2ec,	// (0x000a81ba) aid_scroll_copy1

0xeea9,	// (0x000abd77) list_wgtman_pane

0x94dc,	// (0x000a63aa) wgtman_btn_pane_g1_ParamLimits

0x94dc,	// (0x000a63aa) wgtman_btn_pane_g1

0x9504,	// (0x000a63d2) wgtman_btn_pane_t1_ParamLimits

0x9504,	// (0x000a63d2) wgtman_btn_pane_t1

0xeeb3,	// (0x000abd81) wgtman_btn_pane_t2_ParamLimits

0xeeb3,	// (0x000abd81) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x000acd9b) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x000acd9b) wgtman_btn_pane_t

0x953b,	// (0x000a6409) listrow_wgtman_pane_ParamLimits

0x953b,	// (0x000a6409) listrow_wgtman_pane

0x954f,	// (0x000a641d) listrow_wgtman_pane_g1

0x955c,	// (0x000a642a) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x000acda0) listrow_wgtman_pane_g

0x957a,	// (0x000a6448) listrow_wgtman_pane_t1

0x9592,	// (0x000a6460) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x000acda5) listrow_wgtman_pane_t

0x95b8,	// (0x000a6486) wait_bar_pane_cp09

0xeeca,	// (0x000abd98) main_calllock_btn_pane

0xeed4,	// (0x000abda2) main_calllock_pane_g1

0x9bed,	// (0x000a6abb) bg_button_pane_cp17

0xeee0,	// (0x000abdae) main_calllock_btn_pane_g1

0xeee9,	// (0x000abdb7) main_calllock_btn_pane_t1

0x9bed,	// (0x000a6abb) main_dialer3_pane

0x9bed,	// (0x000a6abb) main_fmrd2_pane

0xcc86,	// (0x000a9b54) main_fs_bigclock_unlock_btn_pane_g1

0xef00,	// (0x000abdce) main_fs_bigclock_unlock_btn_pane_t1

0x95ca,	// (0x000a6498) area_fmrd2_info_pane_ParamLimits

0x95ca,	// (0x000a6498) area_fmrd2_info_pane

0x95d6,	// (0x000a64a4) area_fmrd2_visual_pane_ParamLimits

0x95d6,	// (0x000a64a4) area_fmrd2_visual_pane

0x95e4,	// (0x000a64b2) fmrd2_indi_pane_ParamLimits

0x95e4,	// (0x000a64b2) fmrd2_indi_pane

0x95f1,	// (0x000a64bf) area_fmrd2_visual_pane_g1

0x95f9,	// (0x000a64c7) area_fmrd2_visual_pane_t1

0x9609,	// (0x000a64d7) area_fmrd2_visual_pane_t2

0x9619,	// (0x000a64e7) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x000acdaf) area_fmrd2_visual_pane_t

0x9629,	// (0x000a64f7) area_fmrd2_info_pane_g1

0x9631,	// (0x000a64ff) area_fmrd2_info_pane_t1

0x9641,	// (0x000a650f) area_fmrd2_info_pane_t2

0x9651,	// (0x000a651f) area_fmrd2_info_pane_t3

0x9661,	// (0x000a652f) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x000acdb6) area_fmrd2_info_pane_t

0x9671,	// (0x000a653f) fmrd2_indi_pane_t1

0x9681,	// (0x000a654f) fmrd2_indi_pane_t2

0x9691,	// (0x000a655f) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x000acdbf) fmrd2_indi_pane_t

0xe4a9,	// (0x000ab377) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4a9,	// (0x000ab377) list_single_fs_bigclock_indicator_pane_g5

0xe559,	// (0x000ab427) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe559,	// (0x000ab427) list_single_fs_bigclock_indicator_pane_t5

0x8e0c,	// (0x000a5cda) aid_cell_bcale_month_pane_ParamLimits

0x8e0c,	// (0x000a5cda) aid_cell_bcale_month_pane

0x8e2a,	// (0x000a5cf8) bcale_month_pane_ParamLimits

0x8e2a,	// (0x000a5cf8) bcale_month_pane

0x8e46,	// (0x000a5d14) bcale_preview_pane_ParamLimits

0x8e46,	// (0x000a5d14) bcale_preview_pane

0xec97,	// (0x000abb65) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb6,	// (0x000abb84) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb6,	// (0x000abb84) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x000acd41) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000acd41) list_single_fs_bigclock_pane_t

0xeef8,	// (0x000abdc6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x000acdaa) main_fs_bigclock_unlock_btn_pane_g

0x96a1,	// (0x000a656f) aid_dia3_key_size_ParamLimits

0x96a1,	// (0x000a656f) aid_dia3_key_size

0x96ad,	// (0x000a657b) aid_dia3_listrow_size_ParamLimits

0x96ad,	// (0x000a657b) aid_dia3_listrow_size

0x96bd,	// (0x000a658b) dia3_keypad_fun_pane_ParamLimits

0x96bd,	// (0x000a658b) dia3_keypad_fun_pane

0x96cd,	// (0x000a659b) dia3_keypad_num_pane_ParamLimits

0x96cd,	// (0x000a659b) dia3_keypad_num_pane

0x96dd,	// (0x000a65ab) dia3_listscroll_pane_ParamLimits

0x96dd,	// (0x000a65ab) dia3_listscroll_pane

0x96eb,	// (0x000a65b9) dia3_numentry_pane_ParamLimits

0x96eb,	// (0x000a65b9) dia3_numentry_pane

0xef0e,	// (0x000abddc) dia3_list_pane

0xef19,	// (0x000abde7) scroll_pane_cp12

0x9bed,	// (0x000a6abb) bg_dia3_numentry_pane

0x96f9,	// (0x000a65c7) dia3_numentry_pane_t1

0x9708,	// (0x000a65d6) cell_dia3_key_num_pane

0x9710,	// (0x000a65de) cell_dia3_key0_fun_pane_ParamLimits

0x9710,	// (0x000a65de) cell_dia3_key0_fun_pane

0x971d,	// (0x000a65eb) cell_dia3_key1_fun_pane_ParamLimits

0x971d,	// (0x000a65eb) cell_dia3_key1_fun_pane

0x972a,	// (0x000a65f8) dia3_listrow_pane

0xe18c,	// (0x000ab05a) bg_dia3_numentry_pane_g1

0x9bed,	// (0x000a6abb) bg_button_pane_cp21

0xef24,	// (0x000abdf2) cell_dia3_key_num_pane_t1

0xef32,	// (0x000abe00) cell_dia3_key_num_pane_t2

0xef41,	// (0x000abe0f) cell_dia3_key_num_pane_t3

0xef50,	// (0x000abe1e) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x000acdc6) cell_dia3_key_num_pane_t

0x9bed,	// (0x000a6abb) bg_button_pane_cp19

0x9737,	// (0x000a6605) cell_dia3_key0_fun_pane_g1

0x9bed,	// (0x000a6abb) bg_button_pane_cp20

0x973f,	// (0x000a660d) cell_dia3_key1_fun_pane_g1

0x9747,	// (0x000a6615) area_left_week_number_pane

0x975a,	// (0x000a6628) area_top_day_name_pane

0x9768,	// (0x000a6636) frame_month_view_pane

0xef5f,	// (0x000abe2d) grid_month_view_pane

0x977d,	// (0x000a664b) cell_top_day_name_pane_ParamLimits

0x977d,	// (0x000a664b) cell_top_day_name_pane

0x9799,	// (0x000a6667) cell_area_left_week_number_pane_ParamLimits

0x9799,	// (0x000a6667) cell_area_left_week_number_pane

0x97ba,	// (0x000a6688) cell_month_view_pane_ParamLimits

0x97ba,	// (0x000a6688) cell_month_view_pane

0xef6d,	// (0x000abe3b) frm_month_g1

0x97e6,	// (0x000a66b4) frm_month_g2

0x97f7,	// (0x000a66c5) frm_month_g3

0x9808,	// (0x000a66d6) frm_month_g4

0x9819,	// (0x000a66e7) frm_month_g5

0x982a,	// (0x000a66f8) frm_month_g6

0x983d,	// (0x000a670b) frm_month_g7

0xef7a,	// (0x000abe48) frm_month_g8

0x9850,	// (0x000a671e) frm_month_g9

0x985d,	// (0x000a672b) frm_month_g10

0x986a,	// (0x000a6738) frm_month_g11

0x9877,	// (0x000a6745) frm_month_g12

0x9884,	// (0x000a6752) frm_month_g13

0x9893,	// (0x000a6761) frm_month_g14

0x98a2,	// (0x000a6770) frm_month_g15

0x98b1,	// (0x000a677f) frm_month_g16

0x000f,

0xff01,	// (0x000acdcf) frm_month_g

0xef87,	// (0x000abe55) cell_top_day_name_pane_t1

0x98c0,	// (0x000a678e) cell_area_left_week_number_pane_g1

0x98cf,	// (0x000a679d) cell_area_left_week_number_pane_t1

0xceb6,	// (0x000a9d84) cell_month_view_pane_g1

0x98e5,	// (0x000a67b3) cell_month_view_pane_t1

0x9bed,	// (0x000a6abb) main_fps_pane

0xe72e,	// (0x000ab5fc) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe72e,	// (0x000ab5fc) cmail_ddmenu_btn02_pane_cp1

0xe74a,	// (0x000ab618) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe74a,	// (0x000ab618) cmail_ddmenu_btn02_pane_cp2

0x90f2,	// (0x000a5fc0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x90f2,	// (0x000a5fc0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x000accf4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x000accf4) cmail_ddmenu_btn02_pane_g

0x9110,	// (0x000a5fde) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9110,	// (0x000a5fde) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x000accf9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x000accf9) cmail_ddmenu_btn02_pane_t

0x98fb,	// (0x000a67c9) fps_text_pane_ParamLimits

0x98fb,	// (0x000a67c9) fps_text_pane

0x9908,	// (0x000a67d6) main_fps_pane_g1_ParamLimits

0x9908,	// (0x000a67d6) main_fps_pane_g1

0x9914,	// (0x000a67e2) wait_bar_pane_cp010_ParamLimits

0x9914,	// (0x000a67e2) wait_bar_pane_cp010

0x9920,	// (0x000a67ee) fps_text_pane_t1_ParamLimits

0x9920,	// (0x000a67ee) fps_text_pane_t1

0x646f,	// (0x000a333d) cam4_image_uncrop_pane_g1

0x6478,	// (0x000a3346) cam4_image_uncrop_pane_g2

0x6481,	// (0x000a334f) cam4_image_uncrop_pane_g3

0x648a,	// (0x000a3358) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000ac7bc) cam4_image_uncrop_pane_g

0x972a,	// (0x000a65f8) dia3_listrow_pane_ParamLimits

0x9bed,	// (0x000a6abb) main_phob2_pane

0x8c48,	// (0x000a5b16) cell_tport_appsw_pane_cp02_ParamLimits

0x8c48,	// (0x000a5b16) cell_tport_appsw_pane_cp02

0x8c57,	// (0x000a5b25) cell_tport_appsw_pane_cp03_ParamLimits

0x8c57,	// (0x000a5b25) cell_tport_appsw_pane_cp03

0x9bed,	// (0x000a6abb) phob2_contact_card_pane

0x9bed,	// (0x000a6abb) phob2_listscroll_pane

0xef9a,	// (0x000abe68) phob2_list_pane

0xefa2,	// (0x000abe70) scroll_pane_cp034

0x9939,	// (0x000a6807) phob2_cc_data_pane_ParamLimits

0x9939,	// (0x000a6807) phob2_cc_data_pane

0x9955,	// (0x000a6823) phob2_cc_listscroll_pane_ParamLimits

0x9955,	// (0x000a6823) phob2_cc_listscroll_pane

0x9971,	// (0x000a683f) list_double_large_graphic_phob2_pane_ParamLimits

0x9971,	// (0x000a683f) list_double_large_graphic_phob2_pane

0x9989,	// (0x000a6857) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9989,	// (0x000a6857) list_double_large_graphic_phob2_pane_g1

0x999f,	// (0x000a686d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x999f,	// (0x000a686d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x000acdf0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x000acdf0) list_double_large_graphic_phob2_pane_g

0x99ab,	// (0x000a6879) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99ab,	// (0x000a6879) list_double_large_graphic_phob2_pane_t1

0x99c0,	// (0x000a688e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99c0,	// (0x000a688e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x000acdf5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x000acdf5) list_double_large_graphic_phob2_pane_t

0x9bed,	// (0x000a6abb) list_highlight_pane_cp024

0x99d2,	// (0x000a68a0) phob2_cc_button_pane

0x99da,	// (0x000a68a8) phob2_cc_data_pane_g1_ParamLimits

0x99da,	// (0x000a68a8) phob2_cc_data_pane_g1

0x99e6,	// (0x000a68b4) phob2_cc_data_pane_g2_ParamLimits

0x99e6,	// (0x000a68b4) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x000acdfa) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x000acdfa) phob2_cc_data_pane_g

0x99f2,	// (0x000a68c0) phob2_cc_data_pane_t1_ParamLimits

0x99f2,	// (0x000a68c0) phob2_cc_data_pane_t1

0x9a04,	// (0x000a68d2) phob2_cc_data_pane_t2_ParamLimits

0x9a04,	// (0x000a68d2) phob2_cc_data_pane_t2

0x9a16,	// (0x000a68e4) phob2_cc_data_pane_t3_ParamLimits

0x9a16,	// (0x000a68e4) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x000acdff) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x000acdff) phob2_cc_data_pane_t

0xefaa,	// (0x000abe78) phob2_cc_list_pane_ParamLimits

0xefaa,	// (0x000abe78) phob2_cc_list_pane

0xda18,	// (0x000aa8e6) scroll_pane_cp035_ParamLimits

0xda18,	// (0x000aa8e6) scroll_pane_cp035

0xa272,	// (0x000a7140) bg_button_pane_cp033

0xefb6,	// (0x000abe84) phob2_cc_button_pane_g1

0xefc2,	// (0x000abe90) phob2_cc_button_pane_t1

0xefd7,	// (0x000abea5) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x000ace06) phob2_cc_button_pane_t

0x9a28,	// (0x000a68f6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a28,	// (0x000a68f6) list_double_large_graphic_phob2_cc_pane

0x9a44,	// (0x000a6912) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a44,	// (0x000a6912) list_double_large_graphic_phob2_cc_pane_g1

0x9a55,	// (0x000a6923) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a55,	// (0x000a6923) list_double_large_graphic_phob2_cc_pane_g2

0x9a64,	// (0x000a6932) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a64,	// (0x000a6932) list_double_large_graphic_phob2_cc_pane_g3

0x9a73,	// (0x000a6941) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a73,	// (0x000a6941) list_double_large_graphic_phob2_cc_pane_g4

0x9a84,	// (0x000a6952) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a84,	// (0x000a6952) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x000ace0b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x000ace0b) list_double_large_graphic_phob2_cc_pane_g

0x9a93,	// (0x000a6961) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a93,	// (0x000a6961) list_double_large_graphic_phob2_cc_pane_t1

0x9abc,	// (0x000a698a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9abc,	// (0x000a698a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x000ace16) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x000ace16) list_double_large_graphic_phob2_cc_pane_t

0xefe9,	// (0x000abeb7) list_highlight_pane_cp025_ParamLimits

0xefe9,	// (0x000abeb7) list_highlight_pane_cp025

0xa272,	// (0x000a7140) bg_button_pane_cp033_ParamLimits

0xefb6,	// (0x000abe84) phob2_cc_button_pane_g1_ParamLimits

0xefc2,	// (0x000abe90) phob2_cc_button_pane_t1_ParamLimits

0xefd7,	// (0x000abea5) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x000ace06) phob2_cc_button_pane_t_ParamLimits

0x0dfe,	// (0x0009dccc) popup_wgtman_window

0xd7b2,	// (0x000aa680) scroll_pane_cp038

0x94c4,	// (0x000a6392) wgtman_btn_pane_cp_01_ParamLimits

0x94c4,	// (0x000a6392) wgtman_btn_pane_cp_01

0xeff7,	// (0x000abec5) wgtman_content_pane

0xf000,	// (0x000abece) wgtman_heading_pane

0x9bed,	// (0x000a6abb) bg_heading_pane_cp02

0xf009,	// (0x000abed7) wgtman_heading_pane_g1

0xf011,	// (0x000abedf) wgtman_heading_pane_t1

0xf01f,	// (0x000abeed) scroll_pane_cp036

0xf027,	// (0x000abef5) wgtman_list_pane

0xf02f,	// (0x000abefd) wgtman_list_pane_t1_ParamLimits

0xf02f,	// (0x000abefd) wgtman_list_pane_t1

0x63cc,	// (0x000a329a) cam4_grid_pane

0x7185,	// (0x000a4053) bg_button_pane_cp015_ParamLimits

0x7197,	// (0x000a4065) bg_button_pane_cp016_ParamLimits

0x71aa,	// (0x000a4078) bg_button_pane_cp017_ParamLimits

0x7200,	// (0x000a40ce) popup_vitu2_query_window_g3_ParamLimits

0x7200,	// (0x000a40ce) popup_vitu2_query_window_g3

0x72bf,	// (0x000a418d) popup_vitu2_query_window_t6_ParamLimits

0x72bf,	// (0x000a418d) popup_vitu2_query_window_t6

0x72ea,	// (0x000a41b8) popup_vitu2_query_window_t7_ParamLimits

0x72ea,	// (0x000a41b8) popup_vitu2_query_window_t7

0xda24,	// (0x000aa8f2) cam4_grid_pane_g1

0xda2d,	// (0x000aa8fb) cam4_grid_pane_g2

0xf049,	// (0x000abf17) cam4_grid_pane_g3

0xf052,	// (0x000abf20) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x000ace1b) cam4_grid_pane_g

0x204b,	// (0x0009ef19) aid_placing_vt_slider_lsc_ParamLimits

0x237e,	// (0x0009f24c) vidtel_button_pane_ParamLimits

0x237e,	// (0x0009f24c) vidtel_button_pane

0x9bed,	// (0x000a6abb) bg_button_pane_cp034

0x9ae5,	// (0x000a69b3) vidtel_button_pane_g1

0x9aed,	// (0x000a69bb) vidtel_button_pane_t1

0xd8b6,	// (0x000aa784) aid_size_vtel_slider_touch

0xda18,	// (0x000aa8e6) scroll_pane_cp039

0xe1ca,	// (0x000ab098) ncim_query_button_pane_cp01_ParamLimits

0xe1e9,	// (0x000ab0b7) ncimui_query_pane_g1_ParamLimits

0xa272,	// (0x000a7140) input_focus_pane_cp012_ParamLimits

0xe20e,	// (0x000ab0dc) ncim_query_entry_pane_t1_ParamLimits

0xda18,	// (0x000aa8e6) scroll_pane_cp039_ParamLimits

0x3684,	// (0x000a0552) navi_pane_bcale_mc_g1

0x368c,	// (0x000a055a) navi_pane_bcale_mc_t1

0xe793,	// (0x000ab661) main_sp_fs_email_pane_g1

0xe79f,	// (0x000ab66d) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x000acbac) main_sp_fs_email_pane_g

0xea24,	// (0x000ab8f2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea24,	// (0x000ab8f2) list_single_cale_mrui_row_pane_g3

0x9130,	// (0x000a5ffe) list_single_recal_day_pane_g5_event_pane

0xa70e,	// (0x000a75dc) list_single_recal_day_pane_g7

0xf05d,	// (0x000abf2b) list_recal_day_event_pane_cp01

0xf066,	// (0x000abf34) list_recal_vselct_arw_lo_pane_cp01

0xf06e,	// (0x000abf3c) list_recal_vselct_arw_up_pane_cp01

0xf076,	// (0x000abf44) list_recal_vselct_pane_cp01

0xd8d8,	// (0x000aa7a6) list_recal_day_event_pane_cp01_g1

0xb103,	// (0x000a7fd1) list_recal_day_event_pane_cp01_t1

0xa716,	// (0x000a75e4) list_single_recal_day_pane_t1_ParamLimits

0xa728,	// (0x000a75f6) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x000acd09) list_single_recal_day_pane_t_ParamLimits

0xa7d5,	// (0x000a76a3) bg_notes_pane_ParamLimits

0xa878,	// (0x000a7746) list_notes_pane_ParamLimits

0x114d,	// (0x0009e01b) scroll_pane_cp06_ParamLimits

0xa89a,	// (0x000a7768) main_notes_pane_ParamLimits

0x9bed,	// (0x000a6abb) main_welc_pane

0x9b03,	// (0x000a69d1) main_welc_body_pane_ParamLimits

0x9b03,	// (0x000a69d1) main_welc_body_pane

0x9b1e,	// (0x000a69ec) main_welc_opti_pane_ParamLimits

0x9b1e,	// (0x000a69ec) main_welc_opti_pane

0x9b53,	// (0x000a6a21) main_welc_pane_t1_ParamLimits

0x9b53,	// (0x000a6a21) main_welc_pane_t1

0xb111,	// (0x000a7fdf) main_welc_body_row_pane_ParamLimits

0xb111,	// (0x000a7fdf) main_welc_body_row_pane

0x9b71,	// (0x000a6a3f) main_welc_opti_row_pane_ParamLimits

0x9b71,	// (0x000a6a3f) main_welc_opti_row_pane

0xf080,	// (0x000abf4e) main_welc_opti_row_pane_g1

0xf088,	// (0x000abf56) main_welc_opti_row_pane_t1

0xf097,	// (0x000abf65) main_welc_body_row_pane_t1

0xed77,	// (0x000abc45) popup_notif_wgt_heading_pane

0xed91,	// (0x000abc5f) aid_size_list_notif_wgt_del_ParamLimits

0xed9e,	// (0x000abc6c) list_notif_wgt_row_pane_g1_ParamLimits

0xedaa,	// (0x000abc78) list_notif_wgt_row_pane_g2_ParamLimits

0xedbe,	// (0x000abc8c) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x000acd70) list_notif_wgt_row_pane_g_ParamLimits

0xedcb,	// (0x000abc99) list_notif_wgt_row_pane_t1_ParamLimits

0xede1,	// (0x000abcaf) list_notif_wgt_row_pane_t2_ParamLimits

0xedf3,	// (0x000abcc1) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x000acd77) list_notif_wgt_row_pane_t_ParamLimits

0x954f,	// (0x000a641d) listrow_wgtman_pane_g1_ParamLimits

0x955c,	// (0x000a642a) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x000acda0) listrow_wgtman_pane_g_ParamLimits

0x957a,	// (0x000a6448) listrow_wgtman_pane_t1_ParamLimits

0x9592,	// (0x000a6460) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x000acda5) listrow_wgtman_pane_t_ParamLimits

0x95b8,	// (0x000a6486) wait_bar_pane_cp09_ParamLimits

0x9bed,	// (0x000a6abb) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000abf74) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000abf7c) popup_notif_wgt_heading_pane_t1

0x9bed,	// (0x000a6abb) main_vids_pane

0x9bed,	// (0x000a6abb) vids_listscroll_pane

0x9b82,	// (0x000a6a50) scroll_pane_cp040

0x9bed,	// (0x000a6abb) vids_list_pane

0x9b8d,	// (0x000a6a5b) vids_list_double_pane_ParamLimits

0x9b8d,	// (0x000a6a5b) vids_list_double_pane

0x9ba0,	// (0x000a6a6e) vids_list_double_pane_g1

0x9ba9,	// (0x000a6a77) vids_list_double_pane_t1

0x9bb9,	// (0x000a6a87) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x000ace29) vids_list_double_pane_t

0xa272,	// (0x000a7140) main_ncimui_pane_ParamLimits

0x7f7b,	// (0x000a4e49) main_ncimui_pane_g1_ParamLimits

0x7f89,	// (0x000a4e57) main_ncimui_pane_g2_ParamLimits

0x7f89,	// (0x000a4e57) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x000acab1) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x000acab1) main_ncimui_pane_g

0x9b39,	// (0x000a6a07) main_welc_pane_g1_ParamLimits

0x9b39,	// (0x000a6a07) main_welc_pane_g1

0x9b45,	// (0x000a6a13) main_welc_pane_g2_ParamLimits

0x9b45,	// (0x000a6a13) main_welc_pane_g2

0x0001,

0xff56,	// (0x000ace24) main_welc_pane_g_ParamLimits

0xff56,	// (0x000ace24) main_welc_pane_g

0xa7d5,	// (0x000a76a3) listscroll_mce_pane_ParamLimits

0x374e,	// (0x000a061c) wait_bar_pane_cp10

0xc829,	// (0x000a96f7) main_cale_day_pane_ParamLimits

0xc829,	// (0x000a96f7) main_cale_week_pane_ParamLimits

0xa7d5,	// (0x000a76a3) main_messa_pane_ParamLimits

0x57c6,	// (0x000a2694) main_clock2_btn_pane_ParamLimits

0x57c6,	// (0x000a2694) main_clock2_btn_pane

0xd03e,	// (0x000a9f0c) main_clock2_btn_pane_cp01_ParamLimits

0xd03e,	// (0x000a9f0c) main_clock2_btn_pane_cp01

0xe9f5,	// (0x000ab8c3) list_cale_mrui_pane_ParamLimits

0xee37,	// (0x000abd05) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x000acd7e) main_cf0_pane_g

0x9747,	// (0x000a6615) area_left_week_number_pane_ParamLimits

0x975a,	// (0x000a6628) area_top_day_name_pane_ParamLimits

0x9768,	// (0x000a6636) frame_month_view_pane_ParamLimits

0xef5f,	// (0x000abe2d) grid_month_view_pane_ParamLimits

0xef6d,	// (0x000abe3b) frm_month_g1_ParamLimits

0x97e6,	// (0x000a66b4) frm_month_g2_ParamLimits

0x97f7,	// (0x000a66c5) frm_month_g3_ParamLimits

0x9808,	// (0x000a66d6) frm_month_g4_ParamLimits

0x9819,	// (0x000a66e7) frm_month_g5_ParamLimits

0x982a,	// (0x000a66f8) frm_month_g6_ParamLimits

0x983d,	// (0x000a670b) frm_month_g7_ParamLimits

0xef7a,	// (0x000abe48) frm_month_g8_ParamLimits

0x9850,	// (0x000a671e) frm_month_g9_ParamLimits

0x985d,	// (0x000a672b) frm_month_g10_ParamLimits

0x986a,	// (0x000a6738) frm_month_g11_ParamLimits

0x9877,	// (0x000a6745) frm_month_g12_ParamLimits

0x9884,	// (0x000a6752) frm_month_g13_ParamLimits

0x9893,	// (0x000a6761) frm_month_g14_ParamLimits

0x98a2,	// (0x000a6770) frm_month_g15_ParamLimits

0x98b1,	// (0x000a677f) frm_month_g16_ParamLimits

0xff01,	// (0x000acdcf) frm_month_g_ParamLimits

0xef87,	// (0x000abe55) cell_top_day_name_pane_t1_ParamLimits

0x98c0,	// (0x000a678e) cell_area_left_week_number_pane_g1_ParamLimits

0x98cf,	// (0x000a679d) cell_area_left_week_number_pane_t1_ParamLimits

0xceb6,	// (0x000a9d84) cell_month_view_pane_g1_ParamLimits

0x98e5,	// (0x000a67b3) cell_month_view_pane_t1_ParamLimits

0xa7cd,	// (0x000a769b) main_clock2_btn_pane_g1

0xf0bc,	// (0x000abf8a) main_clock2_btn_pane_t1

0xa272,	// (0x000a7140) listscroll_cmail_pane_ParamLimits

0xe793,	// (0x000ab661) main_sp_fs_email_pane_g1_ParamLimits

0xe79f,	// (0x000ab66d) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x000acbac) main_sp_fs_email_pane_g_ParamLimits

0xeb01,	// (0x000ab9cf) list_recal_day_pane_ParamLimits

0xeb12,	// (0x000ab9e0) mian_recal_day_pane_t1

0x896e,	// (0x000a583c) list_single_dyc_row_text_pane_t4_ParamLimits

0x896e,	// (0x000a583c) list_single_dyc_row_text_pane_t4

0x89b3,	// (0x000a5881) list_single_dyc_row_text_pane_t5_ParamLimits

0x89b3,	// (0x000a5881) list_single_dyc_row_text_pane_t5

0xa433,	// (0x000a7301) list_single_dyc_row_text_pane_t6_ParamLimits

0xa433,	// (0x000a7301) list_single_dyc_row_text_pane_t6

0xae4c,	// (0x000a7d1a) aid_mgn_list_cale_time_pane

0xa272,	// (0x000a7140) main_gallery2_pane_ParamLimits

0xd052,	// (0x000a9f20) main_clock2_pane_cp01_t1

0xd062,	// (0x000a9f30) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000ac692) main_clock2_pane_cp01_t

0x1661,	// (0x0009e52f) cale_week_scroll_pane_g16_ParamLimits

0x1661,	// (0x0009e52f) cale_week_scroll_pane_g16

0xaa50,	// (0x000a791e) vorec_slider_pane

0x9aed,	// (0x000a69bb) vidtel_button_pane_t1_ParamLimits

0xcc86,	// (0x000a9b54) main_fs_bigclock_clock_pane_g1_ParamLimits

0xec52,	// (0x000abb20) main_fs_bigclock_clock_pane_g2_ParamLimits

0xec5d,	// (0x000abb2b) main_fs_bigclock_clock_pane_g3_ParamLimits

0xec5d,	// (0x000abb2b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe5e,	// (0x000acd2c) main_fs_bigclock_clock_pane_g_ParamLimits

0xec69,	// (0x000abb37) main_fs_bigclock_clock_pane_t1_ParamLimits

0x918b,	// (0x000a6059) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe67,	// (0x000acd35) main_fs_bigclock_clock_pane_t_ParamLimits

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_g1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_g2_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_g3_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_g4_ParamLimits_sig*,
	&ParameterLimitsTableLV,
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_fs_bigclock_clock_pane_t2_ParamLimits_sig*,
	&ParameterLimitsTableLV,
	0, // AknLayoutScalable_Apps::Tmain_mup3_lyrics_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_mup3_lyrics_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_mup3_lyrics_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tmain_mup3_lyrics_pane_t1_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
