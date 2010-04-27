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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0009ceee };

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
0x0b68,	// (0x0009da56) Screen

0x0b74,	// (0x0009da62) application_window

0x0bcc,	// (0x0009daba) area_bottom_pane_ParamLimits

0x0bcc,	// (0x0009daba) area_bottom_pane

0x0c01,	// (0x0009daef) area_top_pane_ParamLimits

0x0c01,	// (0x0009daef) area_top_pane

0x9c08,	// (0x000a6af6) call_video_uplink_pane_ParamLimits

0x9c08,	// (0x000a6af6) call_video_uplink_pane

0x0c90,	// (0x0009db7e) main_pane_ParamLimits

0x0c90,	// (0x0009db7e) main_pane

0xc86e,	// (0x000a975c) context_pane

0x45da,	// (0x000a14c8) navi_pane

0x45fe,	// (0x000a14ec) popup_cale_events_window_ParamLimits

0x45fe,	// (0x000a14ec) popup_cale_events_window

0xc881,	// (0x000a976f) popup_mup_playback_window

0x4616,	// (0x000a1504) signal_pane

0xa882,	// (0x000a7770) main_browser_pane

0xaa38,	// (0x000a7926) main_burst_pane

0x448c,	// (0x000a137a) main_calc_pane

0xc811,	// (0x000a96ff) main_cale_day_pane

0x13c2,	// (0x0009e2b0) main_cale_month_pane

0xc811,	// (0x000a96ff) main_cale_week_pane

0xaa38,	// (0x000a7926) main_call_pane

0xa039,	// (0x000a6f27) main_call_poc_pane

0xaa38,	// (0x000a7926) main_camera_pane

0xaa38,	// (0x000a7926) main_chi_dic_pane

0xb2b0,	// (0x000a819e) main_clock_pane

0xa039,	// (0x000a6f27) main_fmradio_pane

0xaa38,	// (0x000a7926) main_graph_messa_pane

0xa039,	// (0x000a6f27) main_help_pane

0xa882,	// (0x000a7770) main_im_pane

0xa7bd,	// (0x000a76ab) main_image_pane_ParamLimits

0xa7bd,	// (0x000a76ab) main_image_pane

0xa039,	// (0x000a6f27) main_location2_pane

0xaa38,	// (0x000a7926) main_location_pane

0xa7bd,	// (0x000a76ab) main_messa_pane

0xa039,	// (0x000a6f27) main_mp2_pane

0xaa38,	// (0x000a7926) main_mp_pane

0xa039,	// (0x000a6f27) main_msg_pane

0xa039,	// (0x000a6f27) main_mup_eq_pane

0xa039,	// (0x000a6f27) main_mup_pane

0xa882,	// (0x000a7770) main_notes_pane

0xa039,	// (0x000a6f27) main_pec_pane

0xa039,	// (0x000a6f27) main_phob_pane

0xa039,	// (0x000a6f27) main_pinb_pane

0xa039,	// (0x000a6f27) main_postcard_pane

0xa039,	// (0x000a6f27) main_qdial_pane

0xaa38,	// (0x000a7926) main_skin_pane

0xa039,	// (0x000a6f27) main_smil2_pane

0xaa38,	// (0x000a7926) main_smil_pane

0xaa38,	// (0x000a7926) main_video_pane

0xaa38,	// (0x000a7926) main_video_tele_pane

0xa7bd,	// (0x000a76ab) main_viewer_pane_ParamLimits

0xa7bd,	// (0x000a76ab) main_viewer_pane

0xaa38,	// (0x000a7926) main_vorec_pane

0x44c4,	// (0x000a13b2) popup_blid_sat_info_window_ParamLimits

0x44c4,	// (0x000a13b2) popup_blid_sat_info_window

0x44de,	// (0x000a13cc) popup_dyc_status_message_window_ParamLimits

0x44de,	// (0x000a13cc) popup_dyc_status_message_window

0x44ee,	// (0x000a13dc) popup_grid_large_graphic_window_ParamLimits

0x44ee,	// (0x000a13dc) popup_grid_large_graphic_window

0x4566,	// (0x000a1454) popup_loc_request_window_ParamLimits

0x4566,	// (0x000a1454) popup_loc_request_window

0x45ae,	// (0x000a149c) popup_wml_address_window_ParamLimits

0x45ae,	// (0x000a149c) popup_wml_address_window

0x4364,	// (0x000a1252) call_muted_g1

0x4023,	// (0x000a0f11) popup_call_audio_conf_window_ParamLimits

0x4023,	// (0x000a0f11) popup_call_audio_conf_window

0x4374,	// (0x000a1262) popup_call_audio_first_window_ParamLimits

0x4374,	// (0x000a1262) popup_call_audio_first_window

0x43b4,	// (0x000a12a2) popup_call_audio_in_window_ParamLimits

0x43b4,	// (0x000a12a2) popup_call_audio_in_window

0x43d8,	// (0x000a12c6) popup_call_audio_out_window_ParamLimits

0x43d8,	// (0x000a12c6) popup_call_audio_out_window

0x43fa,	// (0x000a12e8) popup_call_audio_second_window_ParamLimits

0x43fa,	// (0x000a12e8) popup_call_audio_second_window

0x442a,	// (0x000a1318) popup_call_audio_wait_window_ParamLimits

0x442a,	// (0x000a1318) popup_call_audio_wait_window

0x444b,	// (0x000a1339) popup_number_entry_window_ParamLimits

0x444b,	// (0x000a1339) popup_number_entry_window

0x9c26,	// (0x000a6b14) bg_popup_call_pane_cp05_ParamLimits

0x9c26,	// (0x000a6b14) bg_popup_call_pane_cp05

0x9c46,	// (0x000a6b34) popup_number_entry_window_t1

0x9c59,	// (0x000a6b47) popup_number_entry_window_t2

0x9c6b,	// (0x000a6b59) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000abfb8) popup_number_entry_window_t

0x9c7d,	// (0x000a6b6b) text_title_cp2

0x9c90,	// (0x000a6b7e) bg_popup_call_pane_cp_ParamLimits

0x9c90,	// (0x000a6b7e) bg_popup_call_pane_cp

0x9c9e,	// (0x000a6b8c) call_thumbnail_pane

0x9ca6,	// (0x000a6b94) popup_call_audio_in_window_g1_ParamLimits

0x9ca6,	// (0x000a6b94) popup_call_audio_in_window_g1

0x9cb2,	// (0x000a6ba0) popup_call_audio_in_window_g2_ParamLimits

0x9cb2,	// (0x000a6ba0) popup_call_audio_in_window_g2

0x9cbe,	// (0x000a6bac) popup_call_audio_in_window_g3_ParamLimits

0x9cbe,	// (0x000a6bac) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000abfc1) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000abfc1) popup_call_audio_in_window_g

0x9cca,	// (0x000a6bb8) popup_call_audio_in_window_t1_ParamLimits

0x9cca,	// (0x000a6bb8) popup_call_audio_in_window_t1

0x9ce6,	// (0x000a6bd4) popup_call_audio_in_window_t2_ParamLimits

0x9ce6,	// (0x000a6bd4) popup_call_audio_in_window_t2

0x9d02,	// (0x000a6bf0) popup_call_audio_in_window_t3_ParamLimits

0x9d02,	// (0x000a6bf0) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000abfc8) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000abfc8) popup_call_audio_in_window_t

0x9c90,	// (0x000a6b7e) bg_popup_call_pane_cp01_ParamLimits

0x9c90,	// (0x000a6b7e) bg_popup_call_pane_cp01

0x9c9e,	// (0x000a6b8c) call_thumbnail_pane_cp02

0x9d15,	// (0x000a6c03) call_type_pane_cp022

0x9d1d,	// (0x000a6c0b) popup_call_audio_out_window_g1_ParamLimits

0x9d1d,	// (0x000a6c0b) popup_call_audio_out_window_g1

0x9d2f,	// (0x000a6c1d) popup_call_audio_out_window_g2_ParamLimits

0x9d2f,	// (0x000a6c1d) popup_call_audio_out_window_g2

0x9d3b,	// (0x000a6c29) popup_call_audio_out_window_g3_ParamLimits

0x9d3b,	// (0x000a6c29) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000abfcf) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000abfcf) popup_call_audio_out_window_g

0x9d4d,	// (0x000a6c3b) popup_call_audio_out_window_t1_ParamLimits

0x9d4d,	// (0x000a6c3b) popup_call_audio_out_window_t1

0x9d65,	// (0x000a6c53) popup_call_audio_out_window_t2_ParamLimits

0x9d65,	// (0x000a6c53) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000abfd6) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000abfd6) popup_call_audio_out_window_t

0x9d7a,	// (0x000a6c68) bg_popup_call_pane_ParamLimits

0x9d7a,	// (0x000a6c68) bg_popup_call_pane

0x0e94,	// (0x0009dd82) call_thumbnail_pane_cp_ParamLimits

0x0e94,	// (0x0009dd82) call_thumbnail_pane_cp

0x9dfe,	// (0x000a6cec) call_type_pane_cp01_ParamLimits

0x9dfe,	// (0x000a6cec) call_type_pane_cp01

0x9e42,	// (0x000a6d30) popup_call_audio_first_window_g1_ParamLimits

0x9e42,	// (0x000a6d30) popup_call_audio_first_window_g1

0x9e8e,	// (0x000a6d7c) popup_call_audio_first_window_g2_ParamLimits

0x9e8e,	// (0x000a6d7c) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000abfdb) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000abfdb) popup_call_audio_first_window_g

0x9ed2,	// (0x000a6dc0) popup_call_audio_first_window_t1_ParamLimits

0x9ed2,	// (0x000a6dc0) popup_call_audio_first_window_t1

0x9f7e,	// (0x000a6e6c) popup_call_audio_first_window_t4_ParamLimits

0x9f7e,	// (0x000a6e6c) popup_call_audio_first_window_t4

0xa00a,	// (0x000a6ef8) popup_call_audio_first_window_t5_ParamLimits

0xa00a,	// (0x000a6ef8) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000abfe0) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000abfe0) popup_call_audio_first_window_t

0xa039,	// (0x000a6f27) bg_popup_call_pane_cp02

0xa043,	// (0x000a6f31) call_type_pane_cp023

0xa04b,	// (0x000a6f39) popup_call_audio_wait_window_g1

0xa053,	// (0x000a6f41) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000abfe7) popup_call_audio_wait_window_g

0xa05b,	// (0x000a6f49) popup_call_audio_wait_window_t3

0xa069,	// (0x000a6f57) bg_popup_call_pane_cp03_ParamLimits

0xa069,	// (0x000a6f57) bg_popup_call_pane_cp03

0xa0c9,	// (0x000a6fb7) call_thumbnail_pane_cp011_ParamLimits

0xa0c9,	// (0x000a6fb7) call_thumbnail_pane_cp011

0xa0d5,	// (0x000a6fc3) call_type_pane_cp034_ParamLimits

0xa0d5,	// (0x000a6fc3) call_type_pane_cp034

0xa111,	// (0x000a6fff) popup_call_audio_second_window_g1_ParamLimits

0xa111,	// (0x000a6fff) popup_call_audio_second_window_g1

0xa14d,	// (0x000a703b) popup_call_audio_second_window_g2_ParamLimits

0xa14d,	// (0x000a703b) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000abfec) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000abfec) popup_call_audio_second_window_g

0xa189,	// (0x000a7077) popup_call_audio_second_window_t1_ParamLimits

0xa189,	// (0x000a7077) popup_call_audio_second_window_t1

0xa733,	// (0x000a7621) popup_call_audio_second_window_t2_ParamLimits

0xa733,	// (0x000a7621) popup_call_audio_second_window_t2

0xa769,	// (0x000a7657) popup_call_audio_second_window_t3_ParamLimits

0xa769,	// (0x000a7657) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000abff1) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000abff1) popup_call_audio_second_window_t

0xa039,	// (0x000a6f27) bg_popup_call_pane_cp04

0xa79f,	// (0x000a768d) list_conf_pane

0xa7a7,	// (0x000a7695) popup_call_audio_conf_window_t1

0xa7b5,	// (0x000a76a3) call_thumbnail_pane_g1

0xa7bd,	// (0x000a76ab) bg_pinb_pane_ParamLimits

0xa7bd,	// (0x000a76ab) bg_pinb_pane

0xa7cb,	// (0x000a76b9) find_pinb_pane

0xa7d4,	// (0x000a76c2) listscroll_pinb_pane_ParamLimits

0xa7d4,	// (0x000a76c2) listscroll_pinb_pane

0xa7e3,	// (0x000a76d1) pinb_bg_pane_g1

0x0eb8,	// (0x0009dda6) pinb_bg_pane_g2

0x0ec4,	// (0x0009ddb2) pinb_bg_pane_g3

0x0ed0,	// (0x0009ddbe) pinb_bg_pane_g4

0x0edc,	// (0x0009ddca) pinb_bg_pane_g5

0x0ee8,	// (0x0009ddd6) pinb_bg_pane_g6

0x0ef3,	// (0x0009dde1) pinb_bg_pane_g7

0x0efe,	// (0x0009ddec) pinb_bg_pane_g8

0x0f09,	// (0x0009ddf7) pinb_bg_pane_g9

0x0f13,	// (0x0009de01) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000abff8) pinb_bg_pane_g

0x0f30,	// (0x0009de1e) grid_pinb_pane

0x0f3b,	// (0x0009de29) list_pinb_pane

0x0f46,	// (0x0009de34) scroll_pane_cp01_ParamLimits

0x0f46,	// (0x0009de34) scroll_pane_cp01

0xa7ed,	// (0x000a76db) find_pinb_pane_g1_ParamLimits

0xa7ed,	// (0x000a76db) find_pinb_pane_g1

0xa805,	// (0x000a76f3) find_pinb_pane_t1

0xa817,	// (0x000a7705) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000ac012) find_pinb_pane_t

0xa82c,	// (0x000a771a) input_focus_pane_cp01_ParamLimits

0xa82c,	// (0x000a771a) input_focus_pane_cp01

0x0f58,	// (0x0009de46) cell_pinb_pane_ParamLimits

0x0f58,	// (0x0009de46) cell_pinb_pane

0x0f7d,	// (0x0009de6b) cell_pinb_pane_g1_ParamLimits

0x0f7d,	// (0x0009de6b) cell_pinb_pane_g1

0x0f92,	// (0x0009de80) cell_pinb_pane_g2_ParamLimits

0x0f92,	// (0x0009de80) cell_pinb_pane_g2

0xa838,	// (0x000a7726) cell_pinb_pane_g3_ParamLimits

0xa838,	// (0x000a7726) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000ac017) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000ac017) cell_pinb_pane_g

0xa039,	// (0x000a6f27) grid_highlight_pane_cp01

0x0f9e,	// (0x0009de8c) list_pinb_item_pane_ParamLimits

0x0f9e,	// (0x0009de8c) list_pinb_item_pane

0xa039,	// (0x000a6f27) list_highlight_pane_cp02

0x0fbc,	// (0x0009deaa) list_pinb_item_pane_g1_ParamLimits

0x0fbc,	// (0x0009deaa) list_pinb_item_pane_g1

0x0fc9,	// (0x0009deb7) list_pinb_item_pane_g2_ParamLimits

0x0fc9,	// (0x0009deb7) list_pinb_item_pane_g2

0x0fd5,	// (0x0009dec3) list_pinb_item_pane_g3_ParamLimits

0x0fd5,	// (0x0009dec3) list_pinb_item_pane_g3

0x0fe6,	// (0x0009ded4) list_pinb_item_pane_g4_ParamLimits

0x0fe6,	// (0x0009ded4) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000ac01e) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000ac01e) list_pinb_item_pane_g

0x0ff2,	// (0x0009dee0) list_pinb_item_pane_t1_ParamLimits

0x0ff2,	// (0x0009dee0) list_pinb_item_pane_t1

0x1023,	// (0x0009df11) calc_display_pane

0x1041,	// (0x0009df2f) calc_paper_pane

0x105d,	// (0x0009df4b) grid_calc_pane

0xa039,	// (0x000a6f27) bg_list_pane_cp01

0x1089,	// (0x0009df77) clock_g1

0x1091,	// (0x0009df7f) clock_g2

0x0001,

0xf139,	// (0x000ac027) clock_g

0x109b,	// (0x0009df89) clock_t1_ParamLimits

0x109b,	// (0x0009df89) clock_t1

0x10b0,	// (0x0009df9e) clock_t2_ParamLimits

0x10b0,	// (0x0009df9e) clock_t2

0x10c2,	// (0x0009dfb0) clock_t3_ParamLimits

0x10c2,	// (0x0009dfb0) clock_t3

0x10d4,	// (0x0009dfc2) clock_t4_ParamLimits

0x10d4,	// (0x0009dfc2) clock_t4

0x10e6,	// (0x0009dfd4) clock_t5_ParamLimits

0x10e6,	// (0x0009dfd4) clock_t5

0x10fb,	// (0x0009dfe9) clock_t6_ParamLimits

0x10fb,	// (0x0009dfe9) clock_t6

0x110d,	// (0x0009dffb) clock_t7_ParamLimits

0x110d,	// (0x0009dffb) clock_t7

0x111f,	// (0x0009e00d) clock_t8_ParamLimits

0x111f,	// (0x0009e00d) clock_t8

0x1135,	// (0x0009e023) clock_t9_ParamLimits

0x1135,	// (0x0009e023) clock_t9

0x0008,

0xf13e,	// (0x000ac02c) clock_t_ParamLimits

0xf13e,	// (0x000ac02c) clock_t

0xa844,	// (0x000a7732) popup_clock_analogue_window_cp02

0xa844,	// (0x000a7732) popup_clock_digital_window_cp01

0xa84c,	// (0x000a773a) listscroll_help_pane

0xa039,	// (0x000a6f27) phob_pre_status_pane

0xa856,	// (0x000a7744) grid_qdial_pane

0xa7bd,	// (0x000a76ab) listscroll_mce_pane

0xa7bd,	// (0x000a76ab) bg_notes_pane

0xa860,	// (0x000a774e) list_notes_pane

0x114b,	// (0x0009e039) scroll_pane_cp06

0xa86e,	// (0x000a775c) bg_calc_paper_pane

0x1164,	// (0x0009e052) list_calc_pane

0xa882,	// (0x000a7770) bg_calc_display_pane

0x117e,	// (0x0009e06c) calc_display_pane_t1

0x1193,	// (0x0009e081) calc_display_pane_t2

0x11a8,	// (0x0009e096) calc_display_pane_t3

0x0002,

0xf151,	// (0x000ac03f) calc_display_pane_t

0x11ba,	// (0x0009e0a8) cell_calc_pane_ParamLimits

0x11ba,	// (0x0009e0a8) cell_calc_pane

0xa88e,	// (0x000a777c) bg_calc_paper_pane_g1

0xa89a,	// (0x000a7788) bg_calc_paper_pane_g2

0xa8a6,	// (0x000a7794) bg_calc_paper_pane_g3

0xa8b2,	// (0x000a77a0) bg_calc_paper_pane_g4

0xa8be,	// (0x000a77ac) bg_calc_paper_pane_g5

0x11e9,	// (0x0009e0d7) bg_calc_paper_pane_g6

0x11fa,	// (0x0009e0e8) bg_calc_paper_pane_g7

0x120b,	// (0x0009e0f9) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000ac046) bg_calc_paper_pane_g

0x121e,	// (0x0009e10c) calc_bg_paper_pane_g9

0x1231,	// (0x0009e11f) list_calc_item_pane_ParamLimits

0x1231,	// (0x0009e11f) list_calc_item_pane

0xa8ca,	// (0x000a77b8) list_calc_item_pane_g1

0x1252,	// (0x0009e140) list_calc_item_pane_t1_ParamLimits

0x1252,	// (0x0009e140) list_calc_item_pane_t1

0x1264,	// (0x0009e152) list_calc_item_pane_t2_ParamLimits

0x1264,	// (0x0009e152) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000ac057) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000ac057) list_calc_item_pane_t

0xa8d7,	// (0x000a77c5) cell_calc_pane_g1

0xa8e1,	// (0x000a77cf) grid_highlight_pane_cp02

0xa903,	// (0x000a77f1) bg_calc_display_pane_g1

0x1294,	// (0x0009e182) bg_calc_display_pane_g2

0xa90c,	// (0x000a77fa) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000ac061) bg_calc_display_pane_g

0x129e,	// (0x0009e18c) cell_qdial_pane_ParamLimits

0x129e,	// (0x0009e18c) cell_qdial_pane

0x12b4,	// (0x0009e1a2) cell_qdial_pane_g1_ParamLimits

0x12b4,	// (0x0009e1a2) cell_qdial_pane_g1

0x12c1,	// (0x0009e1af) cell_qdial_pane_g2_ParamLimits

0x12c1,	// (0x0009e1af) cell_qdial_pane_g2

0xa915,	// (0x000a7803) cell_qdial_pane_g3_ParamLimits

0xa915,	// (0x000a7803) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000ac068) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000ac068) cell_qdial_pane_g

0x12df,	// (0x0009e1cd) cell_qdial_pane_t1_ParamLimits

0x12df,	// (0x0009e1cd) cell_qdial_pane_t1

0x12f7,	// (0x0009e1e5) cell_qdial_pane_t2_ParamLimits

0x12f7,	// (0x0009e1e5) cell_qdial_pane_t2

0x130a,	// (0x0009e1f8) cell_qdial_pane_t3_ParamLimits

0x130a,	// (0x0009e1f8) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000ac071) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000ac071) cell_qdial_pane_t

0xa039,	// (0x000a6f27) grid_highlight_pane_cp04

0xa921,	// (0x000a780f) thumbnail_qdial_pane_ParamLimits

0xa921,	// (0x000a780f) thumbnail_qdial_pane

0xa97d,	// (0x000a786b) list_help_pane

0xa986,	// (0x000a7874) scroll_pane_cp02

0x131d,	// (0x0009e20b) help_list_pane_t1_ParamLimits

0x131d,	// (0x0009e20b) help_list_pane_t1

0x1344,	// (0x0009e232) bg_notes_pane_g2

0x134c,	// (0x0009e23a) bg_notes_pane_g3

0x1354,	// (0x0009e242) notes_bg_pane_g1

0x135c,	// (0x0009e24a) notes_bg_pane_g4

0x1364,	// (0x0009e252) notes_bg_pane_g5

0x136c,	// (0x0009e25a) notes_bg_pane_g6

0x1374,	// (0x0009e262) notes_bg_pane_g7

0x137c,	// (0x0009e26a) notes_bg_pane_g8

0x1384,	// (0x0009e272) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000ac08f) notes_bg_pane_g

0x138c,	// (0x0009e27a) list_notes_text_pane_ParamLimits

0x138c,	// (0x0009e27a) list_notes_text_pane

0xa98f,	// (0x000a787d) list_notes_text_pane_g1

0x13b4,	// (0x0009e2a2) list_notes_text_pane_t1

0x13c2,	// (0x0009e2b0) listscroll_cale_week_pane

0x13f8,	// (0x0009e2e6) bg_cale_heading_pane

0x1421,	// (0x0009e30f) bg_cale_pane_cp01

0x1443,	// (0x0009e331) cale_week_corner_pane

0x1462,	// (0x0009e350) cale_week_day_heading_pane

0x1490,	// (0x0009e37e) cale_week_scroll_pane_g1

0x14b4,	// (0x0009e3a2) cale_week_scroll_pane_g2

0x14cc,	// (0x0009e3ba) cale_week_scroll_pane_g3

0x14e4,	// (0x0009e3d2) cale_week_scroll_pane_g4

0x14fc,	// (0x0009e3ea) cale_week_scroll_pane_g5

0x1514,	// (0x0009e402) cale_week_scroll_pane_g6

0x1534,	// (0x0009e422) cale_week_scroll_pane_g7

0x1554,	// (0x0009e442) cale_week_scroll_pane_g8

0x1574,	// (0x0009e462) cale_week_scroll_pane_g9

0x1591,	// (0x0009e47f) cale_week_scroll_pane_g10

0x15ae,	// (0x0009e49c) cale_week_scroll_pane_g11

0x15cb,	// (0x0009e4b9) cale_week_scroll_pane_g12

0x15e8,	// (0x0009e4d6) cale_week_scroll_pane_g13

0x160d,	// (0x0009e4fb) cale_week_scroll_pane_g14

0x1636,	// (0x0009e524) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000ac09e) cale_week_scroll_pane_g

0x167f,	// (0x0009e56d) cale_week_time_pane

0x169f,	// (0x0009e58d) grid_cale_week_pane

0xa9bb,	// (0x000a78a9) scroll_pane_cp08

0x16d2,	// (0x0009e5c0) cell_cale_week_pane_ParamLimits

0x16d2,	// (0x0009e5c0) cell_cale_week_pane

0x1762,	// (0x0009e650) cale_week_day_heading_pane_t1

0x17aa,	// (0x0009e698) cale_week_day_heading_pane_t2

0x17f7,	// (0x0009e6e5) cale_week_day_heading_pane_t3

0x1844,	// (0x0009e732) cale_week_day_heading_pane_t4

0x1891,	// (0x0009e77f) cale_week_day_heading_pane_t5

0x18de,	// (0x0009e7cc) cale_week_day_heading_pane_t6

0x192b,	// (0x0009e819) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000ac0bf) cale_week_day_heading_pane_t

0xa9dd,	// (0x000a78cb) bg_cale_side_pane

0x1973,	// (0x0009e861) cale_week_time_pane_t1

0x19b7,	// (0x0009e8a5) cale_week_time_pane_t2

0x19fb,	// (0x0009e8e9) cale_week_time_pane_t3

0x1a3f,	// (0x0009e92d) cale_week_time_pane_t4

0x1a83,	// (0x0009e971) cale_week_time_pane_t5

0x1ac7,	// (0x0009e9b5) cale_week_time_pane_t6

0x1b0b,	// (0x0009e9f9) cale_week_time_pane_t7

0x1b57,	// (0x0009ea45) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000ac0ce) cale_week_time_pane_t

0x1ba5,	// (0x0009ea93) cell_cale_week_pane_g2

0x1bc9,	// (0x0009eab7) cell_cale_week_pane_g3_ParamLimits

0x1bc9,	// (0x0009eab7) cell_cale_week_pane_g3

0xa9eb,	// (0x000a78d9) grid_highlight_pane_cp07

0xa9f3,	// (0x000a78e1) listscroll_gms_pane

0xa9fd,	// (0x000a78eb) grid_gms_pane

0xaa06,	// (0x000a78f4) listscroll_gms_pane_g1

0xaa0e,	// (0x000a78fc) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000ac0df) listscroll_gms_pane_g

0x1be1,	// (0x0009eacf) scroll_pane_cp010

0x1bec,	// (0x0009eada) cell_gms_pane_ParamLimits

0x1bec,	// (0x0009eada) cell_gms_pane

0x1bff,	// (0x0009eaed) cell_gms_pane_g1

0xaa16,	// (0x000a7904) cell_gms_pane_g2

0xaa1e,	// (0x000a790c) cell_gms_pane_g3

0xaa27,	// (0x000a7915) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000ac0e4) cell_gms_pane_g

0xaa30,	// (0x000a791e) grid_highlight_pane_cp09

0x430c,	// (0x000a11fa) phob_pre_status_pane_g1

0x4314,	// (0x000a1202) phob_pre_status_pane_g2

0x431c,	// (0x000a120a) phob_pre_status_pane_g3

0x4324,	// (0x000a1212) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000ac4cf) phob_pre_status_pane_g

0x4334,	// (0x000a1222) phob_pre_status_pane_t1

0x4344,	// (0x000a1232) phob_pre_status_pane_t2

0x4354,	// (0x000a1242) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000ac4da) phob_pre_status_pane_t

0xaa38,	// (0x000a7926) bg_list_pane_cp05

0x1c0f,	// (0x0009eafd) grid_vorec_pane

0x1c1b,	// (0x0009eb09) vorec_t1

0x1c29,	// (0x0009eb17) vorec_t2

0x1c37,	// (0x0009eb25) vorec_t3

0x1c45,	// (0x0009eb33) vorec_t4

0x9baf,	// (0x000a6a9d) vorec_t5

0x9bbd,	// (0x000a6aab) vorec_t6

0x0004,

0xf1ff,	// (0x000ac0ed) vorec_t

0x9bcb,	// (0x000a6ab9) wait_bar_pane_cp01

0x1c61,	// (0x0009eb4f) cell_vorec_pane_ParamLimits

0x1c61,	// (0x0009eb4f) cell_vorec_pane

0x1c76,	// (0x0009eb64) cell_vorec_pane_g1

0xa039,	// (0x000a6f27) grid_highlight_pane_cp05

0x1c8e,	// (0x0009eb7c) cams_zoom_pane

0x1c9a,	// (0x0009eb88) image_vga_pane

0x1ca9,	// (0x0009eb97) main_camera_pane_g1

0x1cb7,	// (0x0009eba5) main_camera_pane_g2

0x1cc3,	// (0x0009ebb1) main_camera_pane_g3

0x1cd1,	// (0x0009ebbf) main_camera_pane_g4

0x1cdf,	// (0x0009ebcd) main_camera_pane_g5

0x1ced,	// (0x0009ebdb) main_camera_pane_g6

0x1cfb,	// (0x0009ebe9) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000ac0f8) main_camera_pane_g

0x1d09,	// (0x0009ebf7) main_camera_pane_t1

0x1d1b,	// (0x0009ec09) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000ac109) main_camera_pane_t

0x1d3e,	// (0x0009ec2c) cams_zoom_pane_cp_ParamLimits

0x1d3e,	// (0x0009ec2c) cams_zoom_pane_cp

0x1d62,	// (0x0009ec50) image_cif_pane_ParamLimits

0x1d62,	// (0x0009ec50) image_cif_pane

0x1d80,	// (0x0009ec6e) image_subqcif_pane

0x1d8a,	// (0x0009ec78) main_video_pane_g1_ParamLimits

0x1d8a,	// (0x0009ec78) main_video_pane_g1

0x1daa,	// (0x0009ec98) main_video_pane_g2_ParamLimits

0x1daa,	// (0x0009ec98) main_video_pane_g2

0x1dda,	// (0x0009ecc8) main_video_pane_g3_ParamLimits

0x1dda,	// (0x0009ecc8) main_video_pane_g3

0x1e03,	// (0x0009ecf1) main_video_pane_g4_ParamLimits

0x1e03,	// (0x0009ecf1) main_video_pane_g4

0x1e2c,	// (0x0009ed1a) main_video_pane_g5_ParamLimits

0x1e2c,	// (0x0009ed1a) main_video_pane_g5

0xaa4c,	// (0x000a793a) main_video_pane_g6_ParamLimits

0xaa4c,	// (0x000a793a) main_video_pane_g6

0x0006,

0xf220,	// (0x000ac10e) main_video_pane_g_ParamLimits

0xf220,	// (0x000ac10e) main_video_pane_g

0x1e4e,	// (0x0009ed3c) main_video_pane_t1_ParamLimits

0x1e4e,	// (0x0009ed3c) main_video_pane_t1

0xaa66,	// (0x000a7954) cams_zoom_pane_g1

0xaa6f,	// (0x000a795d) cams_zoom_pane_g2

0xaa78,	// (0x000a7966) cams_zoom_pane_g3

0xaa81,	// (0x000a796f) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000ac11d) cams_zoom_pane_g

0x1e98,	// (0x0009ed86) grid_cams_pane

0x1ea6,	// (0x0009ed94) linegrid_cams_pane

0x1eb2,	// (0x0009eda0) cell_cams_pane_ParamLimits

0x1eb2,	// (0x0009eda0) cell_cams_pane

0xaa8a,	// (0x000a7978) cams_burst_image_pane

0xaa92,	// (0x000a7980) cell_cams_pane_g1

0xa039,	// (0x000a6f27) grid_highlight_pane_cp03

0xa8d7,	// (0x000a77c5) mp_bg_pane_g1

0xa039,	// (0x000a6f27) bg_list_pane_cp03

0xc734,	// (0x000a9622) bg_mp_pane

0xc73c,	// (0x000a962a) grid_mp_pane

0xc744,	// (0x000a9632) media_player_g1

0xc74e,	// (0x000a963c) media_player_t1

0xc75c,	// (0x000a964a) media_player_t2

0xc76a,	// (0x000a9658) media_player_t3

0xc778,	// (0x000a9666) media_player_t4

0xc786,	// (0x000a9674) media_player_t5

0xc794,	// (0x000a9682) media_player_t6

0xc7a2,	// (0x000a9690) media_player_t7

0x0006,

0xf5cb,	// (0x000ac4b9) media_player_t

0xc7b0,	// (0x000a969e) wait_bar_pane_cp02

0xf5b0,	// (0x000ac49e) main_usb_pane_t

0x4303,	// (0x000a11f1) cell_mp_pane

0xa8d7,	// (0x000a77c5) cell_mp_pane_g1

0xa039,	// (0x000a6f27) grid_highlight_pane_cp06

0xaa9a,	// (0x000a7988) grid_skin_colour_pane

0xaaa2,	// (0x000a7990) list_highlight_pane_cp03

0x1fd7,	// (0x0009eec5) skin_g1

0xaaaa,	// (0x000a7998) skin_t1

0xaab9,	// (0x000a79a7) skin_t2

0x0001,

0xf264,	// (0x000ac152) skin_t

0x1fe1,	// (0x0009eecf) cell_skin_colour_pane_ParamLimits

0x1fe1,	// (0x0009eecf) cell_skin_colour_pane

0xaac7,	// (0x000a79b5) cell_skin_colour_pane_g1

0x2061,	// (0x0009ef4f) call_video_g1_ParamLimits

0x2061,	// (0x0009ef4f) call_video_g1

0x2071,	// (0x0009ef5f) call_video_g2_ParamLimits

0x2071,	// (0x0009ef5f) call_video_g2

0x0001,

0xf269,	// (0x000ac157) call_video_g_ParamLimits

0xf269,	// (0x000ac157) call_video_g

0x20c1,	// (0x0009efaf) call_video_uplink_pane_cp1_ParamLimits

0x20c1,	// (0x0009efaf) call_video_uplink_pane_cp1

0xaad9,	// (0x000a79c7) call_video_uplink_pane_cp2

0x218f,	// (0x0009f07d) video_down_crop_pane_ParamLimits

0x218f,	// (0x0009f07d) video_down_crop_pane

0x2281,	// (0x0009f16f) video_down_pane_ParamLimits

0x2281,	// (0x0009f16f) video_down_pane

0xaae1,	// (0x000a79cf) video_down_subqcif_pane_ParamLimits

0xaae1,	// (0x000a79cf) video_down_subqcif_pane

0xaafb,	// (0x000a79e9) video_down_subqcif_pane_cp_ParamLimits

0xaafb,	// (0x000a79e9) video_down_subqcif_pane_cp

0xab23,	// (0x000a7a11) im_reading_pane_ParamLimits

0xab23,	// (0x000a7a11) im_reading_pane

0x239e,	// (0x0009f28c) im_writing_pane_ParamLimits

0x239e,	// (0x0009f28c) im_writing_pane

0x23bc,	// (0x0009f2aa) im_reading_pane_t1

0xab3d,	// (0x000a7a2b) list_im_pane

0xab4e,	// (0x000a7a3c) scroll_pane_cp07

0x23fe,	// (0x0009f2ec) im_writing_pane_t1_ParamLimits

0x23fe,	// (0x0009f2ec) im_writing_pane_t1

0xab67,	// (0x000a7a55) im_writing_pane_t2_ParamLimits

0xab67,	// (0x000a7a55) im_writing_pane_t2

0x0001,

0xf273,	// (0x000ac161) im_writing_pane_t_ParamLimits

0xf273,	// (0x000ac161) im_writing_pane_t

0xa039,	// (0x000a6f27) input_focus_pane_cp04

0xa039,	// (0x000a6f27) input_focus_pane_cp05

0x2410,	// (0x0009f2fe) list_im_single_pane_ParamLimits

0x2410,	// (0x0009f2fe) list_im_single_pane

0x2429,	// (0x0009f317) list_single_im_pane_t1

0x42c7,	// (0x000a11b5) blid_accuracy_pane

0x42cf,	// (0x000a11bd) blid_compass_pane

0x42d9,	// (0x000a11c7) main_location_t1

0x42e7,	// (0x000a11d5) main_location_t2

0x42f5,	// (0x000a11e3) main_location_t3

0x0002,

0xf5da,	// (0x000ac4c8) main_location_t

0xa039,	// (0x000a6f27) aid_levels_location

0xa8d7,	// (0x000a77c5) blid_accuracy_pane_g1

0xa8d7,	// (0x000a77c5) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000ac1c3) blid_accuracy_pane_g

0xabaf,	// (0x000a7a9d) wml_content_pane

0xabed,	// (0x000a7adb) wml_button_pane_ParamLimits

0xabed,	// (0x000a7adb) wml_button_pane

0x2438,	// (0x0009f326) wml_list_single_large_pane_ParamLimits

0x2438,	// (0x0009f326) wml_list_single_large_pane

0x245a,	// (0x0009f348) wml_list_single_medium_pane_ParamLimits

0x245a,	// (0x0009f348) wml_list_single_medium_pane

0x247d,	// (0x0009f36b) wml_list_single_small_pane_ParamLimits

0x247d,	// (0x0009f36b) wml_list_single_small_pane

0xac01,	// (0x000a7aef) wml_selection_box_pane_ParamLimits

0xac01,	// (0x000a7aef) wml_selection_box_pane

0xac14,	// (0x000a7b02) wml_list_single_pane_t1

0xac23,	// (0x000a7b11) wml_list_single_medium_pane_t1

0xac32,	// (0x000a7b20) wml_list_single_large_pane_t1

0xac41,	// (0x000a7b2f) input_focus_pane_cp02_ParamLimits

0xac41,	// (0x000a7b2f) input_focus_pane_cp02

0xac54,	// (0x000a7b42) wml_selection_box_pane_g1

0xac5d,	// (0x000a7b4b) wml_selection_box_pane_t1_ParamLimits

0xac5d,	// (0x000a7b4b) wml_selection_box_pane_t1

0xa7bd,	// (0x000a76ab) bg_wml_button_pane_ParamLimits

0xa7bd,	// (0x000a76ab) bg_wml_button_pane

0xac81,	// (0x000a7b6f) wml_button_pane_g1

0xac89,	// (0x000a7b77) wml_button_pane_t1

0xac81,	// (0x000a7b6f) wml_button_bg_pane_g1

0xac99,	// (0x000a7b87) wml_button_bg_pane_g2

0xaca1,	// (0x000a7b8f) wml_button_bg_pane_g3

0xaca9,	// (0x000a7b97) wml_button_bg_pane_g4

0xacb1,	// (0x000a7b9f) wml_button_bg_pane_g5

0xacb9,	// (0x000a7ba7) wml_button_bg_pane_g6

0xacc1,	// (0x000a7baf) wml_button_bg_pane_g7

0xacc9,	// (0x000a7bb7) wml_button_bg_pane_g8

0xacd1,	// (0x000a7bbf) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000ac166) wml_button_bg_pane_g

0x24a5,	// (0x0009f393) bg_list_pane_cp02

0xacd9,	// (0x000a7bc7) mce_header_pane_ParamLimits

0xacd9,	// (0x000a7bc7) mce_header_pane

0xacef,	// (0x000a7bdd) mce_icon_pane

0xacef,	// (0x000a7bdd) mce_image_pane

0xacf8,	// (0x000a7be6) mce_text_pane_ParamLimits

0xacf8,	// (0x000a7be6) mce_text_pane

0x24af,	// (0x0009f39d) scroll_pane_cp03

0xabe5,	// (0x000a7ad3) scroll_pane_cp04

0xad0b,	// (0x000a7bf9) scroll_pane_cp05_ParamLimits

0xad0b,	// (0x000a7bf9) scroll_pane_cp05

0x24b9,	// (0x0009f3a7) mce_header_field_pane_ParamLimits

0x24b9,	// (0x0009f3a7) mce_header_field_pane

0x24db,	// (0x0009f3c9) mce_header_field_pane_2_ParamLimits

0x24db,	// (0x0009f3c9) mce_header_field_pane_2

0x24f1,	// (0x0009f3df) mce_header_field_pane_3

0x24f9,	// (0x0009f3e7) list_single_mce_message_pane_ParamLimits

0x24f9,	// (0x0009f3e7) list_single_mce_message_pane

0x2518,	// (0x0009f406) list_single_mce_smart_pane_ParamLimits

0x2518,	// (0x0009f406) list_single_mce_smart_pane

0xad17,	// (0x000a7c05) input_focus_pane_cp03

0xad20,	// (0x000a7c0e) list_header_data_pane

0x2542,	// (0x0009f430) mce_header_field_pane_t1

0x2552,	// (0x0009f440) list_single_mce_header_pane_ParamLimits

0x2552,	// (0x0009f440) list_single_mce_header_pane

0xad28,	// (0x000a7c16) list_single_mce_header_pane_t1

0xad37,	// (0x000a7c25) list_single_mce_message_pane_g1

0xad3f,	// (0x000a7c2d) list_single_mce_message_pane_t1

0x2596,	// (0x0009f484) bg_cale_heading_pane_cp01_ParamLimits

0x2596,	// (0x0009f484) bg_cale_heading_pane_cp01

0xad4d,	// (0x000a7c3b) bg_cale_pane_cp02_ParamLimits

0xad4d,	// (0x000a7c3b) bg_cale_pane_cp02

0x25dd,	// (0x0009f4cb) cale_month_corner_pane

0x25fc,	// (0x0009f4ea) cale_month_day_heading_pane_ParamLimits

0x25fc,	// (0x0009f4ea) cale_month_day_heading_pane

0x2653,	// (0x0009f541) cale_month_pane_g1_ParamLimits

0x2653,	// (0x0009f541) cale_month_pane_g1

0x268f,	// (0x0009f57d) cale_month_pane_g2_ParamLimits

0x268f,	// (0x0009f57d) cale_month_pane_g2

0x26c7,	// (0x0009f5b5) cale_month_pane_g3_ParamLimits

0x26c7,	// (0x0009f5b5) cale_month_pane_g3

0x271b,	// (0x0009f609) cale_month_pane_g4_ParamLimits

0x271b,	// (0x0009f609) cale_month_pane_g4

0x276f,	// (0x0009f65d) cale_month_pane_g5_ParamLimits

0x276f,	// (0x0009f65d) cale_month_pane_g5

0x27c3,	// (0x0009f6b1) cale_month_pane_g6_ParamLimits

0x27c3,	// (0x0009f6b1) cale_month_pane_g6

0x2827,	// (0x0009f715) cale_month_pane_g7_ParamLimits

0x2827,	// (0x0009f715) cale_month_pane_g7

0x288b,	// (0x0009f779) cale_month_pane_g8_ParamLimits

0x288b,	// (0x0009f779) cale_month_pane_g8

0x28ef,	// (0x0009f7dd) cale_month_pane_g9_ParamLimits

0x28ef,	// (0x0009f7dd) cale_month_pane_g9

0x2947,	// (0x0009f835) cale_month_pane_g10_ParamLimits

0x2947,	// (0x0009f835) cale_month_pane_g10

0x2995,	// (0x0009f883) cale_month_pane_g11_ParamLimits

0x2995,	// (0x0009f883) cale_month_pane_g11

0x29e1,	// (0x0009f8cf) cale_month_pane_g12_ParamLimits

0x29e1,	// (0x0009f8cf) cale_month_pane_g12

0x2a31,	// (0x0009f91f) cale_month_pane_g13_ParamLimits

0x2a31,	// (0x0009f91f) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000ac179) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000ac179) cale_month_pane_g

0x2a81,	// (0x0009f96f) cale_month_week_pane

0x2aa1,	// (0x0009f98f) grid_cale_month_pane_ParamLimits

0x2aa1,	// (0x0009f98f) grid_cale_month_pane

0x2aef,	// (0x0009f9dd) cale_month_day_heading_pane_t1

0x2b71,	// (0x0009fa5f) cale_month_day_heading_pane_t2

0x2bfe,	// (0x0009faec) cale_month_day_heading_pane_t3

0x2c8b,	// (0x0009fb79) cale_month_day_heading_pane_t4

0x2d18,	// (0x0009fc06) cale_month_day_heading_pane_t5

0x2dad,	// (0x0009fc9b) cale_month_day_heading_pane_t6

0x2e4a,	// (0x0009fd38) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000ac194) cale_month_day_heading_pane_t

0xa9dd,	// (0x000a78cb) bg_cale_side_pane_cp01

0x2ee7,	// (0x0009fdd5) cale_month_week_pane_t1

0x2f00,	// (0x0009fdee) cale_month_week_pane_t2

0x2f19,	// (0x0009fe07) cale_month_week_pane_t3

0x2f32,	// (0x0009fe20) cale_month_week_pane_t4

0x2f4b,	// (0x0009fe39) cale_month_week_pane_t5

0x2f66,	// (0x0009fe54) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000ac1a3) cale_month_week_pane_t

0x2f87,	// (0x0009fe75) cell_cale_month_pane_ParamLimits

0x2f87,	// (0x0009fe75) cell_cale_month_pane

0x30d3,	// (0x0009ffc1) cell_cale_month_pane_g1

0x30df,	// (0x0009ffcd) cell_cale_month_pane_t1_ParamLimits

0x30df,	// (0x0009ffcd) cell_cale_month_pane_t1

0xa9eb,	// (0x000a78d9) grid_highlight_pane_cp08

0xa8d7,	// (0x000a77c5) main_smil_g1

0x30ff,	// (0x0009ffed) smil_status_pane

0xad8c,	// (0x000a7c7a) smil_text_pane

0xc652,	// (0x000a9540) bg_popup_call3_rect_pane_g8

0xc65a,	// (0x000a9548) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000ac45c) bg_popup_call3_rect_pane_g

0xc8e8,	// (0x000a97d6) smil_status_volume_pane_g1

0x3112,	// (0x000a0000) smil_status_pane_t1

0x46bb,	// (0x000a15a9) volume_smil_pane

0xad96,	// (0x000a7c84) list_smil_text_pane

0x3129,	// (0x000a0017) scroll_pane_cp011

0x3134,	// (0x000a0022) smil_text_list_pane_t1_ParamLimits

0x3134,	// (0x000a0022) smil_text_list_pane_t1

0x3186,	// (0x000a0074) aid_volume_smil_ParamLimits

0x3186,	// (0x000a0074) aid_volume_smil

0xa8d7,	// (0x000a77c5) smil_volume_pane_g1

0xa8d7,	// (0x000a77c5) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000ac1c3) smil_volume_pane_g

0x13c2,	// (0x0009e2b0) listscroll_cale_day_pane

0xada0,	// (0x000a7c8e) bg_cale_pane

0xadb8,	// (0x000a7ca6) list_cale_pane

0xaddb,	// (0x000a7cc9) scroll_pane_cp09

0xadec,	// (0x000a7cda) cale_bg_pane_g1

0xadf4,	// (0x000a7ce2) cale_bg_pane_g2

0xadfc,	// (0x000a7cea) cale_bg_pane_g3

0xae04,	// (0x000a7cf2) cale_bg_pane_g4

0xae0c,	// (0x000a7cfa) cale_bg_pane_g5

0xae14,	// (0x000a7d02) cale_bg_pane_g6

0xae1c,	// (0x000a7d0a) cale_bg_pane_g7

0xae24,	// (0x000a7d12) cale_bg_pane_g8

0xae2c,	// (0x000a7d1a) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000ac1c8) cale_bg_pane_g

0x31a8,	// (0x000a0096) list_cale_time_pane_ParamLimits

0x31a8,	// (0x000a0096) list_cale_time_pane

0xae3c,	// (0x000a7d2a) list_cale_time_pane_g1_ParamLimits

0xae3c,	// (0x000a7d2a) list_cale_time_pane_g1

0xae48,	// (0x000a7d36) list_cale_time_pane_g2_ParamLimits

0xae48,	// (0x000a7d36) list_cale_time_pane_g2

0x31bc,	// (0x000a00aa) list_cale_time_pane_g3_ParamLimits

0x31bc,	// (0x000a00aa) list_cale_time_pane_g3

0x31ca,	// (0x000a00b8) list_cale_time_pane_g4_ParamLimits

0x31ca,	// (0x000a00b8) list_cale_time_pane_g4

0x31d8,	// (0x000a00c6) list_cale_time_pane_g5_ParamLimits

0x31d8,	// (0x000a00c6) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000ac1db) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000ac1db) list_cale_time_pane_g

0xae62,	// (0x000a7d50) list_cale_time_pane_t1_ParamLimits

0xae62,	// (0x000a7d50) list_cale_time_pane_t1

0xae8a,	// (0x000a7d78) list_cale_time_pane_t2_ParamLimits

0xae8a,	// (0x000a7d78) list_cale_time_pane_t2

0x35a1,	// (0x000a048f) aid_blid_cardinal_pane

0x35e3,	// (0x000a04d1) compass_pane_t4

0xaeb2,	// (0x000a7da0) list_cale_time_pane_t4_ParamLimits

0xaeb2,	// (0x000a7da0) list_cale_time_pane_t4

0x35f1,	// (0x000a04df) compass_pane_t5

0x3601,	// (0x000a04ef) compass_pane_t6

0x360f,	// (0x000a04fd) compass_pane_t7

0xb360,	// (0x000a824e) navi_pane_cc_t1

0xb4ad,	// (0x000a839b) aid_phob_thumbnail_center_pane

0x3dc3,	// (0x000a0cb1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000ac1e8) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000ac1e8) list_cale_time_pane_t

0x9c90,	// (0x000a6b7e) bg_popup_window_pane_cp02_ParamLimits

0x9c90,	// (0x000a6b7e) bg_popup_window_pane_cp02

0xaeda,	// (0x000a7dc8) heading_pane_cp01_ParamLimits

0xaeda,	// (0x000a7dc8) heading_pane_cp01

0xaee6,	// (0x000a7dd4) loc_req_pane_ParamLimits

0xaee6,	// (0x000a7dd4) loc_req_pane

0xaef6,	// (0x000a7de4) loc_type_pane_ParamLimits

0xaef6,	// (0x000a7de4) loc_type_pane

0xaf08,	// (0x000a7df6) loc_type_pane_t1_ParamLimits

0xaf08,	// (0x000a7df6) loc_type_pane_t1

0xaf1a,	// (0x000a7e08) loc_type_pane_t2_ParamLimits

0xaf1a,	// (0x000a7e08) loc_type_pane_t2

0xaf2c,	// (0x000a7e1a) loc_type_pane_t3_ParamLimits

0xaf2c,	// (0x000a7e1a) loc_type_pane_t3

0x0002,

0xf301,	// (0x000ac1ef) loc_type_pane_t_ParamLimits

0xf301,	// (0x000ac1ef) loc_type_pane_t

0xaf3e,	// (0x000a7e2c) list_loc_req_pane

0xaf48,	// (0x000a7e36) scroll_pane_cp012

0x31e6,	// (0x000a00d4) list_single_loc_request_popup_menu_pane_ParamLimits

0x31e6,	// (0x000a00d4) list_single_loc_request_popup_menu_pane

0xaf53,	// (0x000a7e41) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf53,	// (0x000a7e41) list_single_loc_request_popup_menu_pane_g1

0xaf5f,	// (0x000a7e4d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf5f,	// (0x000a7e4d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000ac1f6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000ac1f6) list_single_loc_request_popup_menu_pane_g

0xaf6b,	// (0x000a7e59) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf6b,	// (0x000a7e59) list_single_loc_request_popup_menu_pane_t1

0x31f8,	// (0x000a00e6) bg_popup_window_pane_cp03_ParamLimits

0x31f8,	// (0x000a00e6) bg_popup_window_pane_cp03

0x3206,	// (0x000a00f4) heading_loc_req_pane_ParamLimits

0x3206,	// (0x000a00f4) heading_loc_req_pane

0x3212,	// (0x000a0100) popup_dyc_status_message_window_g1_ParamLimits

0x3212,	// (0x000a0100) popup_dyc_status_message_window_g1

0x321e,	// (0x000a010c) popup_dyc_status_message_window_t1_ParamLimits

0x321e,	// (0x000a010c) popup_dyc_status_message_window_t1

0x3230,	// (0x000a011e) popup_dyc_status_message_window_t2_ParamLimits

0x3230,	// (0x000a011e) popup_dyc_status_message_window_t2

0x3242,	// (0x000a0130) popup_dyc_status_message_window_t3_ParamLimits

0x3242,	// (0x000a0130) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000ac1fb) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000ac1fb) popup_dyc_status_message_window_t

0xa039,	// (0x000a6f27) bg_heading_pane_cp01

0xaf81,	// (0x000a7e6f) heading_loc_req_pane_g1

0xaf89,	// (0x000a7e77) heading_loc_req_pane_g2

0xaf91,	// (0x000a7e7f) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000ac202) heading_loc_req_pane_g

0xaf99,	// (0x000a7e87) heading_loc_req_pane_t1

0xafa9,	// (0x000a7e97) bg_popup_sub_pane_cp01_ParamLimits

0xafa9,	// (0x000a7e97) bg_popup_sub_pane_cp01

0xafb7,	// (0x000a7ea5) popup_cale_events_window_g1_ParamLimits

0xafb7,	// (0x000a7ea5) popup_cale_events_window_g1

0xafd7,	// (0x000a7ec5) popup_cale_events_window_g2_ParamLimits

0xafd7,	// (0x000a7ec5) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000ac236) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000ac236) popup_cale_events_window_g

0xaff7,	// (0x000a7ee5) popup_cale_events_window_t1_ParamLimits

0xaff7,	// (0x000a7ee5) popup_cale_events_window_t1

0xb009,	// (0x000a7ef7) popup_cale_events_window_t2_ParamLimits

0xb009,	// (0x000a7ef7) popup_cale_events_window_t2

0xb047,	// (0x000a7f35) popup_cale_events_window_t3_ParamLimits

0xb047,	// (0x000a7f35) popup_cale_events_window_t3

0xb113,	// (0x000a8001) popup_cale_events_window_t4_ParamLimits

0xb113,	// (0x000a8001) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000ac23b) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000ac23b) popup_cale_events_window_t

0x333d,	// (0x000a022b) call_type_pane

0xb149,	// (0x000a8037) popup_call_status_window_g1

0x3349,	// (0x000a0237) popup_call_status_window_g2

0x3355,	// (0x000a0243) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000ac244) popup_call_status_window_g

0xb157,	// (0x000a8045) call_type_pane_g1

0xb160,	// (0x000a804e) call_type_pane_g2

0x0001,

0xf35d,	// (0x000ac24b) call_type_pane_g

0xa039,	// (0x000a6f27) bg_popup_sub_pane_cp02

0xb169,	// (0x000a8057) listscroll_popup_wml_pane

0xb171,	// (0x000a805f) list_wml_pane

0xb17b,	// (0x000a8069) scroll_pane_cp013

0xb186,	// (0x000a8074) list_single_graphic_popup_wml_pane_ParamLimits

0xb186,	// (0x000a8074) list_single_graphic_popup_wml_pane

0xa8d7,	// (0x000a77c5) list_single_graphic_popup_wml_pane_g1

0xb19a,	// (0x000a8088) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000ac250) list_single_graphic_popup_wml_pane_g

0xb1a2,	// (0x000a8090) list_single_graphic_popup_wml_pane_t1

0xb1b8,	// (0x000a80a6) aid_call_pane

0xa7b5,	// (0x000a76a3) popup_clock_analogue_window_g1

0xa7b5,	// (0x000a76a3) popup_clock_analogue_window_g2

0x3361,	// (0x000a024f) popup_clock_analogue_window_g3

0x3361,	// (0x000a024f) popup_clock_analogue_window_g4

0xa8d7,	// (0x000a77c5) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000ac255) popup_clock_analogue_window_g

0x3369,	// (0x000a0257) popup_clock_analogue_window_t1

0x3377,	// (0x000a0265) clock_digital_number_pane_ParamLimits

0x3377,	// (0x000a0265) clock_digital_number_pane

0x3383,	// (0x000a0271) clock_digital_number_pane_cp02_ParamLimits

0x3383,	// (0x000a0271) clock_digital_number_pane_cp02

0x338f,	// (0x000a027d) clock_digital_number_pane_cp03_ParamLimits

0x338f,	// (0x000a027d) clock_digital_number_pane_cp03

0x339b,	// (0x000a0289) clock_digital_number_pane_cp04_ParamLimits

0x339b,	// (0x000a0289) clock_digital_number_pane_cp04

0x33a7,	// (0x000a0295) clock_digital_separator_pane_ParamLimits

0x33a7,	// (0x000a0295) clock_digital_separator_pane

0x33b3,	// (0x000a02a1) popup_clock_digital_window_t1

0xa8d7,	// (0x000a77c5) clock_digital_number_pane_g1

0xa8d7,	// (0x000a77c5) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000ac1c3) clock_digital_number_pane_g

0xa8d7,	// (0x000a77c5) clock_digital_separator_pane_g1

0xa8d7,	// (0x000a77c5) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000ac1c3) clock_digital_separator_pane_g

0xa039,	// (0x000a6f27) bg_popup_window_pane_cp04

0xb1c0,	// (0x000a80ae) heading_pane_cp03

0xb1c8,	// (0x000a80b6) listscroll_popup_gms_pane

0xb1d0,	// (0x000a80be) grid_large_graphic_popup_pane

0xb1da,	// (0x000a80c8) listscroll_popup_gms_pane_g1

0xb1e2,	// (0x000a80d0) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000ac260) listscroll_popup_gms_pane_g

0xabe5,	// (0x000a7ad3) scroll_pane_cp014

0x33d0,	// (0x000a02be) cell_large_graphic_popup_pane_ParamLimits

0x33d0,	// (0x000a02be) cell_large_graphic_popup_pane

0x33ea,	// (0x000a02d8) cell_large_graphic_popup_pane_g1_ParamLimits

0x33ea,	// (0x000a02d8) cell_large_graphic_popup_pane_g1

0xb1ea,	// (0x000a80d8) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1ea,	// (0x000a80d8) cell_large_graphic_popup_pane_g2

0xb1f6,	// (0x000a80e4) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1f6,	// (0x000a80e4) cell_large_graphic_popup_pane_g3

0xb203,	// (0x000a80f1) cell_large_graphic_popup_pane_g4_ParamLimits

0xb203,	// (0x000a80f1) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000ac265) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000ac265) cell_large_graphic_popup_pane_g

0xb213,	// (0x000a8101) grid_highlight_pane_cp010

0xa8d7,	// (0x000a77c5) bg_popup_call_pane_g1

0xb21d,	// (0x000a810b) list_single_graphic_popup_conf_pane_ParamLimits

0xb21d,	// (0x000a810b) list_single_graphic_popup_conf_pane

0xb22f,	// (0x000a811d) list_highlight_pane_cp01

0xb238,	// (0x000a8126) list_single_graphic_popup_conf_pane_g1

0xb240,	// (0x000a812e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000ac26e) list_single_graphic_popup_conf_pane_g

0xb248,	// (0x000a8136) list_single_graphic_popup_conf_pane_t1

0xb256,	// (0x000a8144) linegrid_cams_pane_g1

0x33f6,	// (0x000a02e4) linegrid_cams_pane_g2

0xaa1e,	// (0x000a790c) linegrid_cams_pane_g3

0xb25f,	// (0x000a814d) linegrid_cams_pane_g4

0x33ff,	// (0x000a02ed) linegrid_cams_pane_g5

0x3408,	// (0x000a02f6) linegrid_cams_pane_g6

0xaa27,	// (0x000a7915) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000ac273) linegrid_cams_pane_g

0xb268,	// (0x000a8156) popup_clock_analogue_window

0xb268,	// (0x000a8156) popup_clock_digital_window

0xa039,	// (0x000a6f27) popup_phob_thumbnail_window

0xa8d7,	// (0x000a77c5) call_video_uplink_pane_g1

0xb271,	// (0x000a815f) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000ac282) call_video_uplink_pane_g

0xb279,	// (0x000a8167) video_uplink_pane

0xb281,	// (0x000a816f) mce_image_pane_g1

0x3413,	// (0x000a0301) mce_image_pane_g2

0x341d,	// (0x000a030b) mce_image_pane_g3

0x3427,	// (0x000a0315) mce_image_pane_g4

0x342f,	// (0x000a031d) mce_image_pane_g5

0x0004,

0xf399,	// (0x000ac287) mce_image_pane_g

0xb28b,	// (0x000a8179) control_top_pane_stacon_cp01_ParamLimits

0xb28b,	// (0x000a8179) control_top_pane_stacon_cp01

0xb29f,	// (0x000a818d) uni_indicator_pane_stacon_cp01_ParamLimits

0xb29f,	// (0x000a818d) uni_indicator_pane_stacon_cp01

0xb2b0,	// (0x000a819e) bg_popup_sub_pane_cp03

0x3437,	// (0x000a0325) chi_dic_find_pane

0x343f,	// (0x000a032d) listscroll_chi_dic_pane

0x3448,	// (0x000a0336) main_pane_chidic_g1

0x345b,	// (0x000a0349) chi_dic_find_pane_t1

0xb2ba,	// (0x000a81a8) find_chidic_pane

0xb2c3,	// (0x000a81b1) chi_dic_list_pane_ParamLimits

0xb2c3,	// (0x000a81b1) chi_dic_list_pane

0xb2d4,	// (0x000a81c2) scroll_pane_cp020

0x3469,	// (0x000a0357) find_chidic_pane_t1

0xa039,	// (0x000a6f27) input_focus_pane_cp06

0x3478,	// (0x000a0366) list_chi_dic_pane_ParamLimits

0x3478,	// (0x000a0366) list_chi_dic_pane

0x348d,	// (0x000a037b) list_chi_dic_pane_t1_ParamLimits

0x348d,	// (0x000a037b) list_chi_dic_pane_t1

0xa039,	// (0x000a6f27) list_highlight_pane_cp020

0xb2dc,	// (0x000a81ca) bg_cale_heading_pane_g1

0x34a0,	// (0x000a038e) bg_cale_heading_pane_g2

0x34a8,	// (0x000a0396) bg_cale_heading_pane_g3

0x34b0,	// (0x000a039e) bg_cale_heading_pane_g4

0x34ba,	// (0x000a03a8) bg_cale_heading_pane_g5

0x34c4,	// (0x000a03b2) bg_cale_heading_pane_g6

0x34cc,	// (0x000a03ba) bg_cale_heading_pane_g7

0x34d4,	// (0x000a03c2) bg_cale_heading_pane_g8

0x34de,	// (0x000a03cc) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000ac292) bg_cale_heading_pane_g

0xb2dc,	// (0x000a81ca) bg_cale_side_pane_g1

0x34e8,	// (0x000a03d6) bg_cale_side_pane_g2

0x34f2,	// (0x000a03e0) bg_cale_side_pane_g3

0x34fc,	// (0x000a03ea) bg_cale_side_pane_g4

0x3506,	// (0x000a03f4) bg_cale_side_pane_g5

0x3510,	// (0x000a03fe) bg_cale_side_pane_g6

0x351a,	// (0x000a0408) bg_cale_side_pane_g7

0x3524,	// (0x000a0412) bg_cale_side_pane_g8

0x352c,	// (0x000a041a) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000ac2a5) bg_cale_side_pane_g

0x3534,	// (0x000a0422) popup_call_status_window_ParamLimits

0x3534,	// (0x000a0422) popup_call_status_window

0xb2e4,	// (0x000a81d2) stacon_top_pane

0xb2ec,	// (0x000a81da) status_pane_ParamLimits

0xb2ec,	// (0x000a81da) status_pane

0xb301,	// (0x000a81ef) status_small_pane

0xb309,	// (0x000a81f7) control_pane

0xa039,	// (0x000a6f27) stacon_bottom_pane

0xb311,	// (0x000a81ff) list_single_mce_smart_pane_t1_ParamLimits

0xb311,	// (0x000a81ff) list_single_mce_smart_pane_t1

0xb324,	// (0x000a8212) list_single_mce_smart_pane_t2_ParamLimits

0xb324,	// (0x000a8212) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000ac2b8) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000ac2b8) list_single_mce_smart_pane_t

0x3540,	// (0x000a042e) compass_pane

0x354b,	// (0x000a0439) main_location2_pane_t1

0x3561,	// (0x000a044f) main_location2_pane_t2

0x3577,	// (0x000a0465) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000ac2bd) main_location2_pane_t

0xb343,	// (0x000a8231) compass_pane_g1_ParamLimits

0xb343,	// (0x000a8231) compass_pane_g1

0x35c5,	// (0x000a04b3) compass_pane_t1

0x35d4,	// (0x000a04c2) compass_pane_t2

0x0005,

0xf3d8,	// (0x000ac2c6) compass_pane_t

0x361f,	// (0x000a050d) text_secondary_cp61

0xb357,	// (0x000a8245) navi_pane_cams_g5

0xb37a,	// (0x000a8268) navi_pane_im_t1

0xb388,	// (0x000a8276) navi_pane_mp_g1_ParamLimits

0xb388,	// (0x000a8276) navi_pane_mp_g1

0xb39c,	// (0x000a828a) navi_pane_mp_g2_ParamLimits

0xb39c,	// (0x000a828a) navi_pane_mp_g2

0xb3a8,	// (0x000a8296) navi_pane_mp_g3_ParamLimits

0xb3a8,	// (0x000a8296) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000ac2da) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000ac2da) navi_pane_mp_g

0xb3b4,	// (0x000a82a2) navi_pane_mp_t1

0xb3c2,	// (0x000a82b0) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000ac2e1) navi_pane_mp_t

0xb3fe,	// (0x000a82ec) navi_pane_vt_g1

0xb3b4,	// (0x000a82a2) navi_pane_vt_t1

0xb406,	// (0x000a82f4) navi_slider_pane

0xaa38,	// (0x000a7926) zooming_pane

0xb40e,	// (0x000a82fc) navi_slider_pane_g1

0x3754,	// (0x000a0642) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000ac2e8) navi_slider_pane_g

0xb432,	// (0x000a8320) aid_levels_zoom

0xb43a,	// (0x000a8328) zooming_pane_g1

0xb442,	// (0x000a8330) zooming_pane_g2

0xb442,	// (0x000a8330) zooming_pane_g3

0x0002,

0xf409,	// (0x000ac2f7) zooming_pane_g

0xb44a,	// (0x000a8338) level_10_zoom

0xb453,	// (0x000a8341) level_11_zoom

0xb45c,	// (0x000a834a) level_1_zoom

0xb465,	// (0x000a8353) level_2_zoom

0xb46e,	// (0x000a835c) level_3_zoom

0xb477,	// (0x000a8365) level_4_zoom

0xb480,	// (0x000a836e) level_5_zoom

0xb489,	// (0x000a8377) level_6_zoom

0xb492,	// (0x000a8380) level_7_zoom

0xb49b,	// (0x000a8389) level_8_zoom

0xb4a4,	// (0x000a8392) level_9_zoom

0xb4b5,	// (0x000a83a3) popup_phob_thumbnail_window_g1

0xb4bd,	// (0x000a83ab) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000ac2fe) popup_phob_thumbnail_window_g

0xc7b8,	// (0x000a96a6) level_1_location

0xc7c0,	// (0x000a96ae) level_2_location

0xc7c8,	// (0x000a96b6) level_3_location

0xc7d0,	// (0x000a96be) level_4_location

0xaa38,	// (0x000a7926) level_5_location

0x3766,	// (0x000a0654) mce_icon_pane_g1

0x376e,	// (0x000a065c) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000ac303) mce_icon_pane_g

0x3776,	// (0x000a0664) main_mup_pane_g1_ParamLimits

0x3776,	// (0x000a0664) main_mup_pane_g1

0x378e,	// (0x000a067c) main_mup_pane_g2_ParamLimits

0x378e,	// (0x000a067c) main_mup_pane_g2

0x37aa,	// (0x000a0698) main_mup_pane_g3_ParamLimits

0x37aa,	// (0x000a0698) main_mup_pane_g3

0x37c6,	// (0x000a06b4) main_mup_pane_g4_ParamLimits

0x37c6,	// (0x000a06b4) main_mup_pane_g4

0x37e2,	// (0x000a06d0) main_mup_pane_g5_ParamLimits

0x37e2,	// (0x000a06d0) main_mup_pane_g5

0x3803,	// (0x000a06f1) main_mup_pane_g6_ParamLimits

0x3803,	// (0x000a06f1) main_mup_pane_g6

0x3823,	// (0x000a0711) main_mup_pane_g7_ParamLimits

0x3823,	// (0x000a0711) main_mup_pane_g7

0x3847,	// (0x000a0735) main_mup_pane_g8_ParamLimits

0x3847,	// (0x000a0735) main_mup_pane_g8

0x386b,	// (0x000a0759) main_mup_pane_g9_ParamLimits

0x386b,	// (0x000a0759) main_mup_pane_g9

0x388e,	// (0x000a077c) main_mup_pane_g10_ParamLimits

0x388e,	// (0x000a077c) main_mup_pane_g10

0x38b1,	// (0x000a079f) main_mup_pane_g11_ParamLimits

0x38b1,	// (0x000a079f) main_mup_pane_g11

0x38d1,	// (0x000a07bf) main_mup_pane_g12_ParamLimits

0x38d1,	// (0x000a07bf) main_mup_pane_g12

0x38df,	// (0x000a07cd) main_mup_pane_g13_ParamLimits

0x38df,	// (0x000a07cd) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000ac308) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000ac308) main_mup_pane_g

0x38f5,	// (0x000a07e3) main_mup_pane_t1_ParamLimits

0x38f5,	// (0x000a07e3) main_mup_pane_t1

0x3914,	// (0x000a0802) main_mup_pane_t2_ParamLimits

0x3914,	// (0x000a0802) main_mup_pane_t2

0x392e,	// (0x000a081c) main_mup_pane_t3_ParamLimits

0x392e,	// (0x000a081c) main_mup_pane_t3

0x3948,	// (0x000a0836) main_mup_pane_t4_ParamLimits

0x3948,	// (0x000a0836) main_mup_pane_t4

0x395a,	// (0x000a0848) main_mup_pane_t5_ParamLimits

0x395a,	// (0x000a0848) main_mup_pane_t5

0x396c,	// (0x000a085a) main_mup_pane_t6_ParamLimits

0x396c,	// (0x000a085a) main_mup_pane_t6

0x0005,

0xf435,	// (0x000ac323) main_mup_pane_t_ParamLimits

0xf435,	// (0x000ac323) main_mup_pane_t

0x3982,	// (0x000a0870) mup_progress_pane_ParamLimits

0x3982,	// (0x000a0870) mup_progress_pane

0x398e,	// (0x000a087c) mup_visualizer_pane_ParamLimits

0x398e,	// (0x000a087c) mup_visualizer_pane

0x39cc,	// (0x000a08ba) mup_volume_pane_ParamLimits

0x39cc,	// (0x000a08ba) mup_volume_pane

0xb149,	// (0x000a8037) mup_visualizer_pane_g1_ParamLimits

0xb149,	// (0x000a8037) mup_visualizer_pane_g1

0xb149,	// (0x000a8037) mup_visualizer_pane_g2_ParamLimits

0xb149,	// (0x000a8037) mup_visualizer_pane_g2

0xb343,	// (0x000a8231) mup_visualizer_pane_g3_ParamLimits

0xb343,	// (0x000a8231) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000ac330) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000ac330) mup_visualizer_pane_g

0xa8d7,	// (0x000a77c5) mup_volume_pane_g1

0xb4cd,	// (0x000a83bb) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000ac337) mup_volume_pane_g

0xa8d7,	// (0x000a77c5) mup_progress_pane_g1

0xb4d6,	// (0x000a83c4) mup_progress_pane_g2

0xb4df,	// (0x000a83cd) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000ac33c) mup_progress_pane_g

0xa039,	// (0x000a6f27) bg_popup_window_pane_cp05

0xb4e8,	// (0x000a83d6) heading_pane_cp02_ParamLimits

0xb4e8,	// (0x000a83d6) heading_pane_cp02

0xb504,	// (0x000a83f2) list_popup_blid_pane

0xb50c,	// (0x000a83fa) list_blid_sat_info_pane_ParamLimits

0xb50c,	// (0x000a83fa) list_blid_sat_info_pane

0xb51f,	// (0x000a840d) list_blid_sat_info_pane_g1

0xb527,	// (0x000a8415) list_blid_sat_info_pane_t1

0x3aeb,	// (0x000a09d9) mup_equalizer_pane_ParamLimits

0x3aeb,	// (0x000a09d9) mup_equalizer_pane

0x3b0c,	// (0x000a09fa) mup_equalizer_pane_cp1_ParamLimits

0x3b0c,	// (0x000a09fa) mup_equalizer_pane_cp1

0x3b2d,	// (0x000a0a1b) mup_equalizer_pane_cp2_ParamLimits

0x3b2d,	// (0x000a0a1b) mup_equalizer_pane_cp2

0x3b4e,	// (0x000a0a3c) mup_equalizer_pane_cp3_ParamLimits

0x3b4e,	// (0x000a0a3c) mup_equalizer_pane_cp3

0x3b73,	// (0x000a0a61) mup_equalizer_pane_cp4_ParamLimits

0x3b73,	// (0x000a0a61) mup_equalizer_pane_cp4

0x3b98,	// (0x000a0a86) mup_equalizer_pane_cp5

0x3bb0,	// (0x000a0a9e) mup_equalizer_pane_cp6

0x3bc8,	// (0x000a0ab6) mup_equalizer_pane_cp7

0xc6d2,	// (0x000a95c0) bg_popup_call_poc_act_pane_g9

0xc6da,	// (0x000a95c8) bg_popup_call_poc_act_pane_g10

0xc6e2,	// (0x000a95d0) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7bd,	// (0x000a76ab) mup_scale_pane

0xa8d7,	// (0x000a77c5) mup_scale_pane_g1

0xb535,	// (0x000a8423) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000ac358) mup_scale_pane_g

0xb559,	// (0x000a8447) msg_data_pane

0xb561,	// (0x000a844f) scroll_pane_cp017

0x3bf2,	// (0x000a0ae0) bg_list_pane_cp04_ParamLimits

0x3bf2,	// (0x000a0ae0) bg_list_pane_cp04

0xb569,	// (0x000a8457) msg_data_pane_g1

0x3c12,	// (0x000a0b00) msg_data_pane_g2

0x3c1c,	// (0x000a0b0a) msg_data_pane_g3

0x3c26,	// (0x000a0b14) msg_data_pane_g4

0x3c2e,	// (0x000a0b1c) msg_data_pane_g5

0x3c36,	// (0x000a0b24) msg_data_pane_g6

0x3c3e,	// (0x000a0b2c) msg_data_pane_g7

0x0006,

0xf479,	// (0x000ac367) msg_data_pane_g

0x3c46,	// (0x000a0b34) msg_text_pane_ParamLimits

0x3c46,	// (0x000a0b34) msg_text_pane

0x3c6c,	// (0x000a0b5a) qrid_highlight_pane_cp011_ParamLimits

0x3c6c,	// (0x000a0b5a) qrid_highlight_pane_cp011

0xa039,	// (0x000a6f27) msg_body_pane

0xa039,	// (0x000a6f27) msg_header_pane

0xb57a,	// (0x000a8468) input_focus_pane_cp07

0xa212,	// (0x000a7100) msg_header_pane_t1_ParamLimits

0xa212,	// (0x000a7100) msg_header_pane_t1

0xa224,	// (0x000a7112) msg_header_pane_t2_ParamLimits

0xa224,	// (0x000a7112) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000ac37b) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000ac37b) msg_header_pane_t

0xb58f,	// (0x000a847d) msg_body_pane_g1

0x3c90,	// (0x000a0b7e) msg_body_pane_t1_ParamLimits

0x3c90,	// (0x000a0b7e) msg_body_pane_t1

0xa236,	// (0x000a7124) msg_body_pane_t2_ParamLimits

0xa236,	// (0x000a7124) msg_body_pane_t2

0xa248,	// (0x000a7136) msg_body_pane_t3_ParamLimits

0xa248,	// (0x000a7136) msg_body_pane_t3

0x0002,

0xf492,	// (0x000ac380) msg_body_pane_t_ParamLimits

0xf492,	// (0x000ac380) msg_body_pane_t

0x3d13,	// (0x000a0c01) main_viewer_pane_g1_ParamLimits

0x3d13,	// (0x000a0c01) main_viewer_pane_g1

0x3d1f,	// (0x000a0c0d) main_viewer_pane_g2_ParamLimits

0x3d1f,	// (0x000a0c0d) main_viewer_pane_g2

0x3d2b,	// (0x000a0c19) main_viewer_pane_g3_ParamLimits

0x3d2b,	// (0x000a0c19) main_viewer_pane_g3

0x3d3c,	// (0x000a0c2a) main_viewer_pane_g4_ParamLimits

0x3d3c,	// (0x000a0c2a) main_viewer_pane_g4

0x3d4d,	// (0x000a0c3b) main_viewer_pane_g5_ParamLimits

0x3d4d,	// (0x000a0c3b) main_viewer_pane_g5

0x3d4d,	// (0x000a0c3b) main_viewer_pane_g7_ParamLimits

0x3d4d,	// (0x000a0c3b) main_viewer_pane_g7

0x3d5f,	// (0x000a0c4d) main_viewer_pane_g8_ParamLimits

0x3d5f,	// (0x000a0c4d) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000ac390) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000ac390) main_viewer_pane_g

0xb597,	// (0x000a8485) viewer_content_pane_ParamLimits

0xb597,	// (0x000a8485) viewer_content_pane

0x3d97,	// (0x000a0c85) main_postcard_pane_g1_ParamLimits

0x3d97,	// (0x000a0c85) main_postcard_pane_g1

0x3da5,	// (0x000a0c93) main_postcard_pane_g2_ParamLimits

0x3da5,	// (0x000a0c93) main_postcard_pane_g2

0x3db3,	// (0x000a0ca1) main_postcard_pane_g3_ParamLimits

0x3db3,	// (0x000a0ca1) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000ac3a1) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000ac3a1) main_postcard_pane_g

0x3dc3,	// (0x000a0cb1) main_postcard_pane_g4

0xc8fb,	// (0x000a97e9) smil_status_volume_pane_g2

0x3def,	// (0x000a0cdd) postcard_pane_ParamLimits

0x3def,	// (0x000a0cdd) postcard_pane

0xb149,	// (0x000a8037) postcard_pane_g1_ParamLimits

0xb149,	// (0x000a8037) postcard_pane_g1

0x3e29,	// (0x000a0d17) postcard_pane_g2_ParamLimits

0x3e29,	// (0x000a0d17) postcard_pane_g2

0x3e35,	// (0x000a0d23) postcard_pane_g3_ParamLimits

0x3e35,	// (0x000a0d23) postcard_pane_g3

0xb5a5,	// (0x000a8493) postcard_pane_g4_ParamLimits

0xb5a5,	// (0x000a8493) postcard_pane_g4

0x3e41,	// (0x000a0d2f) postcard_pane_g5_ParamLimits

0x3e41,	// (0x000a0d2f) postcard_pane_g5

0x3e4d,	// (0x000a0d3b) postcard_pane_g6_ParamLimits

0x3e4d,	// (0x000a0d3b) postcard_pane_g6

0xb5b3,	// (0x000a84a1) postcard_pane_g7_ParamLimits

0xb5b3,	// (0x000a84a1) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000ac3ae) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000ac3ae) postcard_pane_g

0x3e5b,	// (0x000a0d49) main_mp2_pane_g1_ParamLimits

0x3e5b,	// (0x000a0d49) main_mp2_pane_g1

0x3e69,	// (0x000a0d57) main_mp2_pane_g2_ParamLimits

0x3e69,	// (0x000a0d57) main_mp2_pane_g2

0x3e75,	// (0x000a0d63) main_mp2_pane_g3_ParamLimits

0x3e75,	// (0x000a0d63) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000ac3bd) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000ac3bd) main_mp2_pane_g

0x3e81,	// (0x000a0d6f) main_mp2_pane_t1_ParamLimits

0x3e81,	// (0x000a0d6f) main_mp2_pane_t1

0x3e98,	// (0x000a0d86) main_mp2_pane_t2_ParamLimits

0x3e98,	// (0x000a0d86) main_mp2_pane_t2

0x3eac,	// (0x000a0d9a) main_mp2_pane_t3_ParamLimits

0x3eac,	// (0x000a0d9a) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000ac3c4) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000ac3c4) main_mp2_pane_t

0xb5c1,	// (0x000a84af) pec_content_pane_ParamLimits

0xb5c1,	// (0x000a84af) pec_content_pane

0xabe5,	// (0x000a7ad3) scroll_pane_cp015

0xb5d3,	// (0x000a84c1) pec_attribute_pane_ParamLimits

0xb5d3,	// (0x000a84c1) pec_attribute_pane

0x3ebe,	// (0x000a0dac) pec_content_pane_g1_ParamLimits

0x3ebe,	// (0x000a0dac) pec_content_pane_g1

0xb5e3,	// (0x000a84d1) pec_content_pane_t1_ParamLimits

0xb5e3,	// (0x000a84d1) pec_content_pane_t1

0xb5f5,	// (0x000a84e3) pec_content_pane_t2_ParamLimits

0xb5f5,	// (0x000a84e3) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000ac3cb) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000ac3cb) pec_content_pane_t

0x3eca,	// (0x000a0db8) list_single_graphic_pane_cp01_ParamLimits

0x3eca,	// (0x000a0db8) list_single_graphic_pane_cp01

0xa7bd,	// (0x000a76ab) bg_popup_sub_pane_cp04

0xb607,	// (0x000a84f5) popup_mup_playback_window_g1

0xb613,	// (0x000a8501) popup_mup_playback_window_t1

0xb628,	// (0x000a8516) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000ac3d0) popup_mup_playback_window_t

0xb65f,	// (0x000a854d) main_image_pane_g1_ParamLimits

0xb65f,	// (0x000a854d) main_image_pane_g1

0xb6a2,	// (0x000a8590) scroll_pane_cp018_ParamLimits

0xb6a2,	// (0x000a8590) scroll_pane_cp018

0xb6ba,	// (0x000a85a8) scroll_pane_cp016_ParamLimits

0xb6ba,	// (0x000a85a8) scroll_pane_cp016

0x3f58,	// (0x000a0e46) smil2_image_pane_ParamLimits

0x3f58,	// (0x000a0e46) smil2_image_pane

0x3f8e,	// (0x000a0e7c) smil2_root_pane_ParamLimits

0x3f8e,	// (0x000a0e7c) smil2_root_pane

0x3fba,	// (0x000a0ea8) smil2_text_pane_ParamLimits

0x3fba,	// (0x000a0ea8) smil2_text_pane

0xa039,	// (0x000a6f27) bg_list_pane_cp06

0xb6f6,	// (0x000a85e4) grid_radio_pane

0xa039,	// (0x000a6f27) bg_popup_window_pane_cp06

0xb700,	// (0x000a85ee) main_fmradio_pane_t1

0xb1c0,	// (0x000a80ae) heading_pane_cp04

0xb70e,	// (0x000a85fc) main_fmradio_pane_t2

0xc6ea,	// (0x000a95d8) popup_cale_lunar_info_window_g1

0xb71c,	// (0x000a860a) main_fmradio_pane_t3

0xc6f2,	// (0x000a95e0) popup_cale_lunar_info_window_g2

0xb72c,	// (0x000a861a) main_fmradio_pane_t4

0x0001,

0xb73a,	// (0x000a8628) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000ac4ab) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000ac3e5) main_fmradio_pane_t

0xb748,	// (0x000a8636) wait_bar_pane_cp03

0xb750,	// (0x000a863e) cell_fmradio_pane_ParamLimits

0xb750,	// (0x000a863e) cell_fmradio_pane

0xb5b3,	// (0x000a84a1) cell_fmradio_pane_g1_ParamLimits

0xb5b3,	// (0x000a84a1) cell_fmradio_pane_g1

0xa039,	// (0x000a6f27) grid_highlight_pane_cp011

0xb765,	// (0x000a8653) poc_content_pane_ParamLimits

0xb765,	// (0x000a8653) poc_content_pane

0xb777,	// (0x000a8665) scroll_pane_cp019

0x3ffa,	// (0x000a0ee8) popup_call_poc_act_window_ParamLimits

0x3ffa,	// (0x000a0ee8) popup_call_poc_act_window

0x4007,	// (0x000a0ef5) popup_call_poc_inact_window_ParamLimits

0x4007,	// (0x000a0ef5) popup_call_poc_inact_window

0xf594,	// (0x000ac482) bg_popup_call_poc_act_pane_g

0xc662,	// (0x000a9550) bg_popup_call_poc_inact_pane_g1

0xc66a,	// (0x000a9558) bg_popup_call_poc_inact_pane_g2

0xb77f,	// (0x000a866d) popup_call_poc_act_window_g2

0xc672,	// (0x000a9560) bg_popup_call_poc_inact_pane_g3

0xc67a,	// (0x000a9568) bg_popup_call_poc_inact_pane_g4

0xc682,	// (0x000a9570) bg_popup_call_poc_inact_pane_g5

0xb787,	// (0x000a8675) popup_call_poc_act_window_t1_ParamLimits

0xb787,	// (0x000a8675) popup_call_poc_act_window_t1

0xb7af,	// (0x000a869d) popup_call_poc_act_window_t2_ParamLimits

0xb7af,	// (0x000a869d) popup_call_poc_act_window_t2

0xb7d7,	// (0x000a86c5) popup_call_poc_act_window_t3_ParamLimits

0xb7d7,	// (0x000a86c5) popup_call_poc_act_window_t3

0xb7ff,	// (0x000a86ed) popup_call_poc_act_window_t4_ParamLimits

0xb7ff,	// (0x000a86ed) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000ac3f0) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000ac3f0) popup_call_poc_act_window_t

0xc68a,	// (0x000a9578) bg_popup_call_poc_inact_pane_g6

0xc692,	// (0x000a9580) bg_popup_call_poc_inact_pane_g7

0xc69a,	// (0x000a9588) bg_popup_call_poc_inact_pane_g8

0xb811,	// (0x000a86ff) popup_call_poc_inact_window_g2

0xc6a2,	// (0x000a9590) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000ac46f) bg_popup_call_poc_inact_pane_g

0xb819,	// (0x000a8707) popup_call_poc_inact_window_t1_ParamLimits

0xb819,	// (0x000a8707) popup_call_poc_inact_window_t1

0xb82e,	// (0x000a871c) popup_call_poc_inact_window_t2_ParamLimits

0xb82e,	// (0x000a871c) popup_call_poc_inact_window_t2

0xb843,	// (0x000a8731) popup_call_poc_inact_window_t3_ParamLimits

0xb843,	// (0x000a8731) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000ac3f9) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000ac3f9) popup_call_poc_inact_window_t

0xc86e,	// (0x000a975c) context_pane_ParamLimits

0x4616,	// (0x000a1504) signal_pane_ParamLimits

0xaa38,	// (0x000a7926) main_call2_pane

0xc85c,	// (0x000a974a) popup_phob_thumbnail2_window_ParamLimits

0xc85c,	// (0x000a974a) popup_phob_thumbnail2_window

0x3cc1,	// (0x000a0baf) aid_hotspot_pointer_arrow_pane

0x3cc9,	// (0x000a0bb7) aid_hotspot_pointer_hand_pane

0x432c,	// (0x000a121a) phob_pre_status_pane_g5

0x1c8e,	// (0x0009eb7c) cams_zoom_pane_ParamLimits

0x1c9a,	// (0x0009eb88) image_vga_pane_ParamLimits

0x1ca9,	// (0x0009eb97) main_camera_pane_g1_ParamLimits

0x1cb7,	// (0x0009eba5) main_camera_pane_g2_ParamLimits

0x1cc3,	// (0x0009ebb1) main_camera_pane_g3_ParamLimits

0x1cd1,	// (0x0009ebbf) main_camera_pane_g4_ParamLimits

0x1cdf,	// (0x0009ebcd) main_camera_pane_g5_ParamLimits

0x1ced,	// (0x0009ebdb) main_camera_pane_g6_ParamLimits

0x1cfb,	// (0x0009ebe9) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000ac0f8) main_camera_pane_g_ParamLimits

0x1d09,	// (0x0009ebf7) main_camera_pane_t1_ParamLimits

0x1d1b,	// (0x0009ec09) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000ac109) main_camera_pane_t_ParamLimits

0xa7bd,	// (0x000a76ab) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7bd,	// (0x000a76ab) bg_popup_preview_window_pane_cp01

0xb858,	// (0x000a8746) popup_phob_thumbnail2_window_g1_ParamLimits

0xb858,	// (0x000a8746) popup_phob_thumbnail2_window_g1

0xa039,	// (0x000a6f27) call2_cli_visual_pane

0x4023,	// (0x000a0f11) popup_call2_audio_conf_window_ParamLimits

0x4023,	// (0x000a0f11) popup_call2_audio_conf_window

0x403c,	// (0x000a0f2a) popup_call2_audio_first_window_ParamLimits

0x403c,	// (0x000a0f2a) popup_call2_audio_first_window

0x40da,	// (0x000a0fc8) popup_call2_audio_in_window_ParamLimits

0x40da,	// (0x000a0fc8) popup_call2_audio_in_window

0x411e,	// (0x000a100c) popup_call2_audio_out_window_ParamLimits

0x411e,	// (0x000a100c) popup_call2_audio_out_window

0x4188,	// (0x000a1076) popup_call2_audio_second_window_ParamLimits

0x4188,	// (0x000a1076) popup_call2_audio_second_window

0x41e6,	// (0x000a10d4) popup_call2_audio_wait_window_ParamLimits

0x41e6,	// (0x000a10d4) popup_call2_audio_wait_window

0xa039,	// (0x000a6f27) bg_popup_call2_act_pane_cp03

0xa79f,	// (0x000a768d) list_conf_pane_cp

0xb864,	// (0x000a8752) popup_call2_audio_conf_window_t1

0xb872,	// (0x000a8760) list_single_graphic_popup_conf2_pane_ParamLimits

0xb872,	// (0x000a8760) list_single_graphic_popup_conf2_pane

0xb22f,	// (0x000a811d) list_highlight_pane_cp04

0xb885,	// (0x000a8773) list_single_graphic_popup_conf2_pane_g1

0xb240,	// (0x000a812e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000ac400) list_single_graphic_popup_conf2_pane_g

0xb88f,	// (0x000a877d) list_single_graphic_popup_conf2_pane_t1

0xb89d,	// (0x000a878b) bg_popup_call2_act_pane_cp01_ParamLimits

0xb89d,	// (0x000a878b) bg_popup_call2_act_pane_cp01

0xb927,	// (0x000a8815) call_type_pane_cp05_ParamLimits

0xb927,	// (0x000a8815) call_type_pane_cp05

0xb97b,	// (0x000a8869) popup_call2_audio_second_window_g1_ParamLimits

0xb97b,	// (0x000a8869) popup_call2_audio_second_window_g1

0xb9cf,	// (0x000a88bd) popup_call2_audio_second_window_g2_ParamLimits

0xb9cf,	// (0x000a88bd) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000ac405) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000ac405) popup_call2_audio_second_window_g

0xba34,	// (0x000a8922) popup_call2_audio_second_window_t1_ParamLimits

0xba34,	// (0x000a8922) popup_call2_audio_second_window_t1

0xbaef,	// (0x000a89dd) popup_call2_audio_second_window_t2_ParamLimits

0xbaef,	// (0x000a89dd) popup_call2_audio_second_window_t2

0xbb42,	// (0x000a8a30) popup_call2_audio_second_window_t3_ParamLimits

0xbb42,	// (0x000a8a30) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000ac40c) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000ac40c) popup_call2_audio_second_window_t

0xa039,	// (0x000a6f27) bg_popup_call2_in_pane_cp02

0xa043,	// (0x000a6f31) call_type_pane_cp04

0xa04b,	// (0x000a6f39) popup_call2_audio_wait_window_g1

0xa053,	// (0x000a6f41) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000abfe7) popup_call2_audio_wait_window_g

0xa05b,	// (0x000a6f49) popup_call2_audio_wait_window_t3

0xbc35,	// (0x000a8b23) bg_popup_call2_act_pane_ParamLimits

0xbc35,	// (0x000a8b23) bg_popup_call2_act_pane

0xbcf5,	// (0x000a8be3) call_type_pane_cp03_ParamLimits

0xbcf5,	// (0x000a8be3) call_type_pane_cp03

0xbd59,	// (0x000a8c47) popup_call2_audio_first_window_g1_ParamLimits

0xbd59,	// (0x000a8c47) popup_call2_audio_first_window_g1

0xbdc9,	// (0x000a8cb7) popup_call2_audio_first_window_g2_ParamLimits

0xbdc9,	// (0x000a8cb7) popup_call2_audio_first_window_g2

0xb149,	// (0x000a8037) popup_call2_audio_first_window_g3_ParamLimits

0xb149,	// (0x000a8037) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000ac415) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000ac415) popup_call2_audio_first_window_g

0xbea7,	// (0x000a8d95) popup_call2_audio_first_window_t1_ParamLimits

0xbea7,	// (0x000a8d95) popup_call2_audio_first_window_t1

0xbfaa,	// (0x000a8e98) popup_call2_audio_first_window_t4_ParamLimits

0xbfaa,	// (0x000a8e98) popup_call2_audio_first_window_t4

0xc08d,	// (0x000a8f7b) popup_call2_audio_first_window_t5_ParamLimits

0xc08d,	// (0x000a8f7b) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000ac420) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000ac420) popup_call2_audio_first_window_t

0xa7b5,	// (0x000a76a3) bg_popup_call2_act_pane_g1

0xc6fc,	// (0x000a95ea) popup_cale_lunar_info_window_t1

0xc70a,	// (0x000a95f8) popup_cale_lunar_info_window_t2

0xc718,	// (0x000a9606) popup_cale_lunar_info_window_t3

0xa039,	// (0x000a6f27) bg_popup_call2_bubble_pane

0xc18e,	// (0x000a907c) bg_popup_call2_in_pane_cp01_ParamLimits

0xc18e,	// (0x000a907c) bg_popup_call2_in_pane_cp01

0x9d15,	// (0x000a6c03) call_type_pane_cp02

0xc1d6,	// (0x000a90c4) popup_call2_audio_out_window_g1_ParamLimits

0xc1d6,	// (0x000a90c4) popup_call2_audio_out_window_g1

0xc202,	// (0x000a90f0) popup_call2_audio_out_window_g2_ParamLimits

0xc202,	// (0x000a90f0) popup_call2_audio_out_window_g2

0xc22a,	// (0x000a9118) popup_call2_audio_out_window_g3_ParamLimits

0xc22a,	// (0x000a9118) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000ac429) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000ac429) popup_call2_audio_out_window_g

0xc265,	// (0x000a9153) popup_call2_audio_out_window_t1_ParamLimits

0xc265,	// (0x000a9153) popup_call2_audio_out_window_t1

0xc2c4,	// (0x000a91b2) popup_call2_audio_out_window_t2_ParamLimits

0xc2c4,	// (0x000a91b2) popup_call2_audio_out_window_t2

0xc318,	// (0x000a9206) popup_call2_audio_out_window_t3_ParamLimits

0xc318,	// (0x000a9206) popup_call2_audio_out_window_t3

0xc32e,	// (0x000a921c) popup_call2_audio_out_window_t4_ParamLimits

0xc32e,	// (0x000a921c) popup_call2_audio_out_window_t4

0xc344,	// (0x000a9232) popup_call2_audio_out_window_t5_ParamLimits

0xc344,	// (0x000a9232) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000ac432) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000ac432) popup_call2_audio_out_window_t

0xc3a8,	// (0x000a9296) bg_popup_call2_in_pane_ParamLimits

0xc3a8,	// (0x000a9296) bg_popup_call2_in_pane

0xc404,	// (0x000a92f2) popup_call2_audio_in_window_g1_ParamLimits

0xc404,	// (0x000a92f2) popup_call2_audio_in_window_g1

0xc43c,	// (0x000a932a) popup_call2_audio_in_window_g2_ParamLimits

0xc43c,	// (0x000a932a) popup_call2_audio_in_window_g2

0xc474,	// (0x000a9362) popup_call2_audio_in_window_g3_ParamLimits

0xc474,	// (0x000a9362) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000ac43f) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000ac43f) popup_call2_audio_in_window_g

0xc4cc,	// (0x000a93ba) popup_call2_audio_in_window_t1_ParamLimits

0xc4cc,	// (0x000a93ba) popup_call2_audio_in_window_t1

0xc54c,	// (0x000a943a) popup_call2_audio_in_window_t2_ParamLimits

0xc54c,	// (0x000a943a) popup_call2_audio_in_window_t2

0xc5cc,	// (0x000a94ba) popup_call2_audio_in_window_t3_ParamLimits

0xc5cc,	// (0x000a94ba) popup_call2_audio_in_window_t3

0xc5e6,	// (0x000a94d4) popup_call2_audio_in_window_t4_ParamLimits

0xc5e6,	// (0x000a94d4) popup_call2_audio_in_window_t4

0xc5f8,	// (0x000a94e6) popup_call2_audio_in_window_t5_ParamLimits

0xc5f8,	// (0x000a94e6) popup_call2_audio_in_window_t5

0xc60d,	// (0x000a94fb) popup_call2_audio_in_window_t6_ParamLimits

0xc60d,	// (0x000a94fb) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000ac448) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000ac448) popup_call2_audio_in_window_t

0xa7b5,	// (0x000a76a3) bg_popup_call2_in_pane_g1

0xc726,	// (0x000a9614) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000ac4b0) popup_cale_lunar_info_window_t

0xa7bd,	// (0x000a76ab) bg_popup_call2_rect_pane_ParamLimits

0xa7bd,	// (0x000a76ab) bg_popup_call2_rect_pane

0xa039,	// (0x000a6f27) call2_cli_visual_graphic_pane

0xa039,	// (0x000a6f27) call2_cli_visual_text_pane

0x46ae,	// (0x000a159c) smil_status_volume_pane_g3

0x0002,

0xa8d7,	// (0x000a77c5) call2_cli_visual_graphic_pane_g1

0xa8d7,	// (0x000a77c5) call2_cli_visual_graphic_pane_g2

0xa8d7,	// (0x000a77c5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000ac455) call2_cli_visual_graphic_pane_g

0xc622,	// (0x000a9510) bg_popup_call2_rect_pane_g1

0xa975,	// (0x000a7863) bg_popup_call2_rect_pane_g2

0xc62a,	// (0x000a9518) bg_popup_call2_rect_pane_g3

0xc632,	// (0x000a9520) bg_popup_call2_rect_pane_g4

0xc63a,	// (0x000a9528) bg_popup_call2_rect_pane_g5

0xc642,	// (0x000a9530) bg_popup_call2_rect_pane_g6

0xc64a,	// (0x000a9538) bg_popup_call2_rect_pane_g7

0xc652,	// (0x000a9540) bg_popup_call2_rect_pane_g8

0xc65a,	// (0x000a9548) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000ac45c) bg_popup_call2_rect_pane_g

0xc662,	// (0x000a9550) bg_popup_call2_bubble_pane_g1

0xc66a,	// (0x000a9558) bg_popup_call2_bubble_pane_g2

0xc672,	// (0x000a9560) bg_popup_call2_bubble_pane_g3

0xc67a,	// (0x000a9568) bg_popup_call2_bubble_pane_g4

0xc682,	// (0x000a9570) bg_popup_call2_bubble_pane_g5

0xc68a,	// (0x000a9578) bg_popup_call2_bubble_pane_g6

0xc692,	// (0x000a9580) bg_popup_call2_bubble_pane_g7

0xc69a,	// (0x000a9588) bg_popup_call2_bubble_pane_g8

0xc6a2,	// (0x000a9590) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000ac46f) bg_popup_call2_bubble_pane_g

0x13de,	// (0x0009e2cc) aid_cale_week_size_cell_pane

0x1d2f,	// (0x0009ec1d) aid_cams_cif_uncrop_pane_ParamLimits

0x1d2f,	// (0x0009ec1d) aid_cams_cif_uncrop_pane

0x1e8c,	// (0x0009ed7a) aid_cams_size_cell_ParamLimits

0x1e8c,	// (0x0009ed7a) aid_cams_size_cell

0x1e98,	// (0x0009ed86) grid_cams_pane_ParamLimits

0x1ea6,	// (0x0009ed94) linegrid_cams_pane_ParamLimits

0x2087,	// (0x0009ef75) call_video_pane_t1

0x20a4,	// (0x0009ef92) call_video_pane_t2

0x0001,

0xf26e,	// (0x000ac15c) call_video_pane_t

0x2570,	// (0x0009f45e) aid_cale_month_size_cell_pane_ParamLimits

0x2570,	// (0x0009f45e) aid_cale_month_size_cell_pane

0xf60b,	// (0x000ac4f9) smil_status_volume_pane_g

0x46bb,	// (0x000a15a9) volume_smil_pane_ParamLimits

0x9be7,	// (0x000a6ad5) aid_popup2_width_pane

0x12d2,	// (0x0009e1c0) cell_qdial_pane_g4_ParamLimits

0x12d2,	// (0x0009e1c0) cell_qdial_pane_g4

0x35a1,	// (0x000a048f) aid_blid_cardinal_pane_ParamLimits

0x35b1,	// (0x000a049f) aid_blid_destination_pane_ParamLimits

0x35b1,	// (0x000a049f) aid_blid_destination_pane

0xa7bd,	// (0x000a76ab) bg_popup_call_poc_act_pane_ParamLimits

0xa7bd,	// (0x000a76ab) bg_popup_call_poc_act_pane

0xa7bd,	// (0x000a76ab) bg_popup_call_poc_inact_pane_ParamLimits

0xa7bd,	// (0x000a76ab) bg_popup_call_poc_inact_pane

0xc6aa,	// (0x000a9598) bg_popup_call_poc_act_pane_g1

0xc6b2,	// (0x000a95a0) bg_popup_call_poc_act_pane_g2

0xc6ba,	// (0x000a95a8) bg_popup_call_poc_act_pane_g3

0xc67a,	// (0x000a9568) bg_popup_call_poc_act_pane_g4

0xc682,	// (0x000a9570) bg_popup_call_poc_act_pane_g5

0xc6c2,	// (0x000a95b0) bg_popup_call_poc_act_pane_g6

0xc692,	// (0x000a9580) bg_popup_call_poc_act_pane_g7

0xc6ca,	// (0x000a95b8) bg_popup_call_poc_act_pane_g8

0xa039,	// (0x000a6f27) main_usb_pane

0xc833,	// (0x000a9721) popup_cale_lunar_info_window

0x23bc,	// (0x0009f2aa) im_reading_pane_t1_ParamLimits

0xab3d,	// (0x000a7a2b) list_im_pane_ParamLimits

0xab4e,	// (0x000a7a3c) scroll_pane_cp07_ParamLimits

0xa039,	// (0x000a6f27) grid_highlight_pane_cp012

0xa7bd,	// (0x000a76ab) mup_scale_pane_ParamLimits

0xb149,	// (0x000a8037) main_usb_pane_g1_ParamLimits

0xb149,	// (0x000a8037) main_usb_pane_g1

0x424f,	// (0x000a113d) main_usb_pane_g2_ParamLimits

0x424f,	// (0x000a113d) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000ac499) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000ac499) main_usb_pane_g

0x425b,	// (0x000a1149) main_usb_pane_t1_ParamLimits

0x425b,	// (0x000a1149) main_usb_pane_t1

0x426d,	// (0x000a115b) main_usb_pane_t2_ParamLimits

0x426d,	// (0x000a115b) main_usb_pane_t2

0x427f,	// (0x000a116d) main_usb_pane_t3_ParamLimits

0x427f,	// (0x000a116d) main_usb_pane_t3

0x4291,	// (0x000a117f) main_usb_pane_t4_ParamLimits

0x4291,	// (0x000a117f) main_usb_pane_t4

0x42a3,	// (0x000a1191) main_usb_pane_t5_ParamLimits

0x42a3,	// (0x000a1191) main_usb_pane_t5

0x42b5,	// (0x000a11a3) main_usb_pane_t6_ParamLimits

0x42b5,	// (0x000a11a3) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000ac49e) main_usb_pane_t_ParamLimits

0x3540,	// (0x000a042e) aid_text_placing

0x354b,	// (0x000a0439) main_location2_pane_t1_ParamLimits

0x3561,	// (0x000a044f) main_location2_pane_t2_ParamLimits

0x3577,	// (0x000a0465) main_location2_pane_t3_ParamLimits

0x358d,	// (0x000a047b) main_location2_pane_t4_ParamLimits

0x358d,	// (0x000a047b) main_location2_pane_t4

0xf3cf,	// (0x000ac2bd) main_location2_pane_t_ParamLimits

0xa7f9,	// (0x000a76e7) find_pinb_pane_g2_ParamLimits

0xa7f9,	// (0x000a76e7) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000ac00d) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000ac00d) find_pinb_pane_g

0xa805,	// (0x000a76f3) find_pinb_pane_t1_ParamLimits

0xa817,	// (0x000a7705) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000ac012) find_pinb_pane_t_ParamLimits

0xa039,	// (0x000a6f27) main_call3_pane

0x2aef,	// (0x0009f9dd) cale_month_day_heading_pane_t1_ParamLimits

0x2b71,	// (0x0009fa5f) cale_month_day_heading_pane_t2_ParamLimits

0x2bfe,	// (0x0009faec) cale_month_day_heading_pane_t3_ParamLimits

0x2c8b,	// (0x0009fb79) cale_month_day_heading_pane_t4_ParamLimits

0x2d18,	// (0x0009fc06) cale_month_day_heading_pane_t5_ParamLimits

0x2dad,	// (0x0009fc9b) cale_month_day_heading_pane_t6_ParamLimits

0x2e4a,	// (0x0009fd38) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000ac194) cale_month_day_heading_pane_t_ParamLimits

0x3120,	// (0x000a000e) smil_status_volume_pane

0x3e0d,	// (0x000a0cfb) postcard_address_pane_ParamLimits

0x3e0d,	// (0x000a0cfb) postcard_address_pane

0x3e1b,	// (0x000a0d09) postcard_message_pane_ParamLimits

0x3e1b,	// (0x000a0d09) postcard_message_pane

0x4225,	// (0x000a1113) call2_cli_visual_pane_t1_ParamLimits

0x4225,	// (0x000a1113) call2_cli_visual_pane_t1

0x481a,	// (0x000a1708) postcard_message_pane_t1_ParamLimits

0x481a,	// (0x000a1708) postcard_message_pane_t1

0x4803,	// (0x000a16f1) postcard_address_pane_t1_ParamLimits

0x4803,	// (0x000a16f1) postcard_address_pane_t1

0x47f4,	// (0x000a16e2) popup_call3_audio_in_window_ParamLimits

0x47f4,	// (0x000a16e2) popup_call3_audio_in_window

0x46d2,	// (0x000a15c0) bg_popup_call3_in_pane_ParamLimits

0x46d2,	// (0x000a15c0) bg_popup_call3_in_pane

0x473a,	// (0x000a1628) popup_call3_audio_in_window_g1_ParamLimits

0x473a,	// (0x000a1628) popup_call3_audio_in_window_g1

0x4752,	// (0x000a1640) popup_call3_audio_in_window_g2_ParamLimits

0x4752,	// (0x000a1640) popup_call3_audio_in_window_g2

0x476a,	// (0x000a1658) popup_call3_audio_in_window_g3_ParamLimits

0x476a,	// (0x000a1658) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000ac500) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000ac500) popup_call3_audio_in_window_g

0x4792,	// (0x000a1680) popup_call3_audio_in_window_t1_ParamLimits

0x4792,	// (0x000a1680) popup_call3_audio_in_window_t1

0x47ba,	// (0x000a16a8) popup_call3_audio_in_window_t2_ParamLimits

0x47ba,	// (0x000a16a8) popup_call3_audio_in_window_t2

0x47e2,	// (0x000a16d0) popup_call3_audio_in_window_t3_ParamLimits

0x47e2,	// (0x000a16d0) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000ac509) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000ac509) popup_call3_audio_in_window_t

0xaa38,	// (0x000a7926) bg_popup_call3_rect_pane

0xc622,	// (0x000a9510) bg_popup_call3_rect_pane_g1

0xa975,	// (0x000a7863) bg_popup_call3_rect_pane_g2

0xc62a,	// (0x000a9518) bg_popup_call3_rect_pane_g3

0xc632,	// (0x000a9520) bg_popup_call3_rect_pane_g4

0xc63a,	// (0x000a9528) bg_popup_call3_rect_pane_g5

0xc642,	// (0x000a9530) bg_popup_call3_rect_pane_g6

0xc64a,	// (0x000a9538) bg_popup_call3_rect_pane_g7

0x39e7,	// (0x000a08d5) mup_visualizer_osc_pane

0xb4c5,	// (0x000a83b3) mup_visualizer_spec_pane

0x46f2,	// (0x000a15e0) call3_video_qcif_pane_ParamLimits

0x46f2,	// (0x000a15e0) call3_video_qcif_pane

0x4704,	// (0x000a15f2) call3_video_qcif_uncrop_pane_ParamLimits

0x4704,	// (0x000a15f2) call3_video_qcif_uncrop_pane

0x4714,	// (0x000a1602) call3_video_subqcif_pane_ParamLimits

0x4714,	// (0x000a1602) call3_video_subqcif_pane

0x4728,	// (0x000a1616) call3_video_subqcif_uncrop_pane_ParamLimits

0x4728,	// (0x000a1616) call3_video_subqcif_uncrop_pane

0x4782,	// (0x000a1670) popup_call3_audio_in_window_g4_ParamLimits

0x4782,	// (0x000a1670) popup_call3_audio_in_window_g4

0x469d,	// (0x000a158b) mup_spec_half_pane

0x46a6,	// (0x000a1594) mup_spec_half_pane_cp

0xc8ce,	// (0x000a97bc) mup_osc_middle_pane

0xc8d7,	// (0x000a97c5) mup_visualizer_osc_pane_g1

0x467d,	// (0x000a156b) mup_spec_bar_pane_ParamLimits

0x467d,	// (0x000a156b) mup_spec_bar_pane

0xc8bb,	// (0x000a97a9) mup_spec_bar_pane_g1

0xc8c5,	// (0x000a97b3) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000ac4f4) mup_spec_bar_pane_g

0x13de,	// (0x0009e2cc) aid_cale_week_size_cell_pane_ParamLimits

0x13f8,	// (0x0009e2e6) bg_cale_heading_pane_ParamLimits

0x1421,	// (0x0009e30f) bg_cale_pane_cp01_ParamLimits

0x1443,	// (0x0009e331) cale_week_corner_pane_ParamLimits

0x1462,	// (0x0009e350) cale_week_day_heading_pane_ParamLimits

0x1490,	// (0x0009e37e) cale_week_scroll_pane_g1_ParamLimits

0x14b4,	// (0x0009e3a2) cale_week_scroll_pane_g2_ParamLimits

0x14cc,	// (0x0009e3ba) cale_week_scroll_pane_g3_ParamLimits

0x14e4,	// (0x0009e3d2) cale_week_scroll_pane_g4_ParamLimits

0x14fc,	// (0x0009e3ea) cale_week_scroll_pane_g5_ParamLimits

0x1514,	// (0x0009e402) cale_week_scroll_pane_g6_ParamLimits

0x1534,	// (0x0009e422) cale_week_scroll_pane_g7_ParamLimits

0x1554,	// (0x0009e442) cale_week_scroll_pane_g8_ParamLimits

0x1574,	// (0x0009e462) cale_week_scroll_pane_g9_ParamLimits

0x1591,	// (0x0009e47f) cale_week_scroll_pane_g10_ParamLimits

0x15ae,	// (0x0009e49c) cale_week_scroll_pane_g11_ParamLimits

0x15cb,	// (0x0009e4b9) cale_week_scroll_pane_g12_ParamLimits

0x15e8,	// (0x0009e4d6) cale_week_scroll_pane_g13_ParamLimits

0x160d,	// (0x0009e4fb) cale_week_scroll_pane_g14_ParamLimits

0x1636,	// (0x0009e524) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000ac09e) cale_week_scroll_pane_g_ParamLimits

0x167f,	// (0x0009e56d) cale_week_time_pane_ParamLimits

0x169f,	// (0x0009e58d) grid_cale_week_pane_ParamLimits

0xa9a9,	// (0x000a7897) listscroll_cale_week_pane_t1

0xa9bb,	// (0x000a78a9) scroll_pane_cp08_ParamLimits

0x25dd,	// (0x0009f4cb) cale_month_corner_pane_ParamLimits

0xad7a,	// (0x000a7c68) cale_month_pane_t1

0x2a81,	// (0x0009f96f) cale_month_week_pane_ParamLimits

0xb149,	// (0x000a8037) popup_call_status_window_g1_ParamLimits

0x3349,	// (0x000a0237) popup_call_status_window_g2_ParamLimits

0x3355,	// (0x000a0243) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000ac244) popup_call_status_window_g_ParamLimits

0xb1b0,	// (0x000a809e) aid_call2_pane

0x3c82,	// (0x000a0b70) msg_header_pane_g1

0x3e0d,	// (0x000a0cfb) postcard_address2_pane_ParamLimits

0x3e0d,	// (0x000a0cfb) postcard_address2_pane

0x3e1b,	// (0x000a0d09) postcard_message2_pane_ParamLimits

0x3e1b,	// (0x000a0d09) postcard_message2_pane

0x4624,	// (0x000a1512) message2_row_pane_ParamLimits

0x4624,	// (0x000a1512) message2_row_pane

0x463e,	// (0x000a152c) address2_row_pane_ParamLimits

0x463e,	// (0x000a152c) address2_row_pane

0xc889,	// (0x000a9777) postcard_message2_row_pane_g1

0xc891,	// (0x000a977f) postcard_message2_row_pane_t1

0xc889,	// (0x000a9777) address2_row_pane_g1

0xc891,	// (0x000a977f) address2_row_pane_t1

0x1c07,	// (0x0009eaf5) aid_size_cell_vorec

0xa039,	// (0x000a6f27) main_rss_pane

0x4651,	// (0x000a153f) rss_list_single_pane_ParamLimits

0x4651,	// (0x000a153f) rss_list_single_pane

0xc89f,	// (0x000a978d) rss_list_single_pane_t1

0xc8ad,	// (0x000a979b) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000ac4ef) rss_list_single_pane_t

0xa039,	// (0x000a6f27) main_camera2_pane

0xa039,	// (0x000a6f27) main_video2_pane

0x487e,	// (0x000a176c) cams_zoom_pane_cp2_ParamLimits

0x487e,	// (0x000a176c) cams_zoom_pane_cp2

0x488a,	// (0x000a1778) image2_vga_pane_ParamLimits

0x488a,	// (0x000a1778) image2_vga_pane

0x4899,	// (0x000a1787) main_camera2_pane_g1_ParamLimits

0x4899,	// (0x000a1787) main_camera2_pane_g1

0x48a5,	// (0x000a1793) main_camera2_pane_g2_ParamLimits

0x48a5,	// (0x000a1793) main_camera2_pane_g2

0x48b1,	// (0x000a179f) main_camera2_pane_g3_ParamLimits

0x48b1,	// (0x000a179f) main_camera2_pane_g3

0x48bd,	// (0x000a17ab) main_camera2_pane_g4_ParamLimits

0x48bd,	// (0x000a17ab) main_camera2_pane_g4

0x48c9,	// (0x000a17b7) main_camera2_pane_g5_ParamLimits

0x48c9,	// (0x000a17b7) main_camera2_pane_g5

0x48d5,	// (0x000a17c3) main_camera2_pane_g6_ParamLimits

0x48d5,	// (0x000a17c3) main_camera2_pane_g6

0x48e1,	// (0x000a17cf) main_camera2_pane_g7_ParamLimits

0x48e1,	// (0x000a17cf) main_camera2_pane_g7

0x48ed,	// (0x000a17db) main_camera2_pane_g8_ParamLimits

0x48ed,	// (0x000a17db) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000ac510) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000ac510) main_camera2_pane_g

0x4905,	// (0x000a17f3) main_camera2_pane_t1_ParamLimits

0x4905,	// (0x000a17f3) main_camera2_pane_t1

0x4917,	// (0x000a1805) main_camera2_pane_t2_ParamLimits

0x4917,	// (0x000a1805) main_camera2_pane_t2

0x4929,	// (0x000a1817) main_camera2_pane_t3_ParamLimits

0x4929,	// (0x000a1817) main_camera2_pane_t3

0x493b,	// (0x000a1829) main_camera2_pane_t4_ParamLimits

0x493b,	// (0x000a1829) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000ac523) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000ac523) main_camera2_pane_t

0x4998,	// (0x000a1886) cams_zoom_pane_cp4_ParamLimits

0x4998,	// (0x000a1886) cams_zoom_pane_cp4

0x49a8,	// (0x000a1896) image2_cif_pane_ParamLimits

0x49a8,	// (0x000a1896) image2_cif_pane

0x49bd,	// (0x000a18ab) image2_subqcif_pane_ParamLimits

0x49bd,	// (0x000a18ab) image2_subqcif_pane

0x49cc,	// (0x000a18ba) main_video2_pane_g1_ParamLimits

0x49cc,	// (0x000a18ba) main_video2_pane_g1

0x49de,	// (0x000a18cc) main_video2_pane_g2_ParamLimits

0x49de,	// (0x000a18cc) main_video2_pane_g2

0x49ee,	// (0x000a18dc) main_video2_pane_g3_ParamLimits

0x49ee,	// (0x000a18dc) main_video2_pane_g3

0x49fe,	// (0x000a18ec) main_video2_pane_g4_ParamLimits

0x49fe,	// (0x000a18ec) main_video2_pane_g4

0x4a0e,	// (0x000a18fc) main_video2_pane_g5_ParamLimits

0x4a0e,	// (0x000a18fc) main_video2_pane_g5

0x4a1e,	// (0x000a190c) main_video2_pane_g6_ParamLimits

0x4a1e,	// (0x000a190c) main_video2_pane_g6

0x0005,

0xf644,	// (0x000ac532) main_video2_pane_g_ParamLimits

0xf644,	// (0x000ac532) main_video2_pane_g

0x4a30,	// (0x000a191e) main_video2_pane_t1_ParamLimits

0x4a30,	// (0x000a191e) main_video2_pane_t1

0x4a4a,	// (0x000a1938) main_video2_pane_t2_ParamLimits

0x4a4a,	// (0x000a1938) main_video2_pane_t2

0x4a70,	// (0x000a195e) main_video2_pane_t3_ParamLimits

0x4a70,	// (0x000a195e) main_video2_pane_t3

0x0002,

0xf651,	// (0x000ac53f) main_video2_pane_t_ParamLimits

0xf651,	// (0x000ac53f) main_video2_pane_t

0x436c,	// (0x000a125a) call_muted_g2

0x0001,

0xf5f3,	// (0x000ac4e1) call_muted_g

0xa039,	// (0x000a6f27) main_mup2_pane

0xc90e,	// (0x000a97fc) main_mup2_pane_g1_ParamLimits

0xc90e,	// (0x000a97fc) main_mup2_pane_g1

0x4a96,	// (0x000a1984) main_mup2_pane_g2_ParamLimits

0x4a96,	// (0x000a1984) main_mup2_pane_g2

0x4d28,	// (0x000a1c16) main_mup_pane_g13_cp1

0x4d30,	// (0x000a1c1e) mup_volume_pane_cp1

0x4ab8,	// (0x000a19a6) main_mup2_pane_g4_ParamLimits

0x4ab8,	// (0x000a19a6) main_mup2_pane_g4

0x4acd,	// (0x000a19bb) main_mup2_pane_g5_ParamLimits

0x4acd,	// (0x000a19bb) main_mup2_pane_g5

0x4ae2,	// (0x000a19d0) main_mup2_pane_g6_ParamLimits

0x4ae2,	// (0x000a19d0) main_mup2_pane_g6

0x4af7,	// (0x000a19e5) main_mup2_pane_g7_ParamLimits

0x4af7,	// (0x000a19e5) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000ac546) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000ac546) main_mup2_pane_g

0x4b13,	// (0x000a1a01) main_mup2_pane_t1_ParamLimits

0x4b13,	// (0x000a1a01) main_mup2_pane_t1

0x4b2a,	// (0x000a1a18) main_mup2_pane_t2_ParamLimits

0x4b2a,	// (0x000a1a18) main_mup2_pane_t2

0x4b41,	// (0x000a1a2f) main_mup2_pane_t3_ParamLimits

0x4b41,	// (0x000a1a2f) main_mup2_pane_t3

0x4b58,	// (0x000a1a46) main_mup2_pane_t4_ParamLimits

0x4b58,	// (0x000a1a46) main_mup2_pane_t4

0x4b72,	// (0x000a1a60) main_mup2_pane_t5_ParamLimits

0x4b72,	// (0x000a1a60) main_mup2_pane_t5

0x4b8c,	// (0x000a1a7a) main_mup2_pane_t6_ParamLimits

0x4b8c,	// (0x000a1a7a) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000ac555) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000ac555) main_mup2_pane_t

0x4bc4,	// (0x000a1ab2) mup2_visualizer_pane_ParamLimits

0x4bc4,	// (0x000a1ab2) mup2_visualizer_pane

0x4bfa,	// (0x000a1ae8) mup_progress_pane_cp_ParamLimits

0x4bfa,	// (0x000a1ae8) mup_progress_pane_cp

0x4d13,	// (0x000a1c01) mup_volume_pane_cp_ParamLimits

0x4d13,	// (0x000a1c01) mup_volume_pane_cp

0x4c13,	// (0x000a1b01) mup2_visualizer_pane_g1_ParamLimits

0x4c13,	// (0x000a1b01) mup2_visualizer_pane_g1

0xc91a,	// (0x000a9808) mup2_visualizer_pane_g2_ParamLimits

0xc91a,	// (0x000a9808) mup2_visualizer_pane_g2

0x4c28,	// (0x000a1b16) mup2_visualizer_pane_g3_ParamLimits

0x4c28,	// (0x000a1b16) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000ac562) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000ac562) mup2_visualizer_pane_g

0xb6ee,	// (0x000a85dc) aid_size_cell_fmradio

0x4482,	// (0x000a1370) aid_height_parent_landcape

0xabcc,	// (0x000a7aba) wml_content_pane_cp

0xabd4,	// (0x000a7ac2) wml_tabs_pane

0xabdd,	// (0x000a7acb) popup_wml_miniature_window

0xabe5,	// (0x000a7ad3) scroll_pane_cp021

0xabf9,	// (0x000a7ae7) wml_content_pane_comp8

0xa039,	// (0x000a6f27) bg_popup_sub_pane_cp05

0xc938,	// (0x000a9826) popup_wml_miniature_window_g1

0xc940,	// (0x000a982e) wml_miniature_view_pane

0x4c36,	// (0x000a1b24) aid_size_wml_view

0x4c3e,	// (0x000a1b2c) wml_miniature_view_pane_g1

0x4c47,	// (0x000a1b35) wml_miniature_view_pane_g2

0x4c50,	// (0x000a1b3e) wml_miniature_view_pane_g3

0x4c58,	// (0x000a1b46) wml_miniature_view_pane_g4

0x4c60,	// (0x000a1b4e) wml_miniature_view_pane_g5

0x4c68,	// (0x000a1b56) wml_miniature_view_pane_g6

0x4c70,	// (0x000a1b5e) wml_miniature_view_pane_g7

0x4c78,	// (0x000a1b66) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000ac569) wml_miniature_view_pane_g

0xc90e,	// (0x000a97fc) background_graphic_ParamLimits

0xc90e,	// (0x000a97fc) background_graphic

0xc948,	// (0x000a9836) wml_tabs_2_pane

0xc951,	// (0x000a983f) wml_tabs_3_pane_ParamLimits

0xc951,	// (0x000a983f) wml_tabs_3_pane

0xc963,	// (0x000a9851) wml_tabs_4_pane_ParamLimits

0xc963,	// (0x000a9851) wml_tabs_4_pane

0xc979,	// (0x000a9867) wml_tabs_5_pane_ParamLimits

0xc979,	// (0x000a9867) wml_tabs_5_pane

0xc993,	// (0x000a9881) wml_tabs_pane_g2_ParamLimits

0xc993,	// (0x000a9881) wml_tabs_pane_g2

0xc9a7,	// (0x000a9895) wml_tabs_pane_g3_ParamLimits

0xc9a7,	// (0x000a9895) wml_tabs_pane_g3

0x4c80,	// (0x000a1b6e) wml_tabs_2_active_pane_ParamLimits

0x4c80,	// (0x000a1b6e) wml_tabs_2_active_pane

0x4c92,	// (0x000a1b80) wml_tabs_2_passive_pane_ParamLimits

0x4c92,	// (0x000a1b80) wml_tabs_2_passive_pane

0x4ca4,	// (0x000a1b92) wml_tabs_3_active_pane_cp_ParamLimits

0x4ca4,	// (0x000a1b92) wml_tabs_3_active_pane_cp

0x4cb7,	// (0x000a1ba5) wml_tabs_3_passive_pane_ParamLimits

0x4cb7,	// (0x000a1ba5) wml_tabs_3_passive_pane

0x4cc8,	// (0x000a1bb6) wml_tabs_3_passive_pane_cp_ParamLimits

0x4cc8,	// (0x000a1bb6) wml_tabs_3_passive_pane_cp

0x4cdd,	// (0x000a1bcb) tabs_4_active_pane

0x4ce5,	// (0x000a1bd3) tabs_4_passive_pane

0x4ced,	// (0x000a1bdb) tabs_4_passive_pane_cp

0x4cf5,	// (0x000a1be3) tabs_4_passive_pane_cp2

0x4247,	// (0x000a1135) aid_height_text

0x39b0,	// (0x000a089e) mup_volume_cont_pane_ParamLimits

0x39b0,	// (0x000a089e) mup_volume_cont_pane

0x0f1e,	// (0x0009de0c) aid_size_cell_pinb

0x0f28,	// (0x0009de16) aid_size_list_pinb

0x4be3,	// (0x000a1ad1) mup2_volume_cont_pane_ParamLimits

0x4be3,	// (0x000a1ad1) mup2_volume_cont_pane

0x4cff,	// (0x000a1bed) mup2_volume_cont_pane_g1_ParamLimits

0x4cff,	// (0x000a1bed) mup2_volume_cont_pane_g1

0x0b80,	// (0x0009da6e) aid_size_cell_touch_ParamLimits

0x0b80,	// (0x0009da6e) aid_size_cell_touch

0x0e08,	// (0x0009dcf6) touch_pane_ParamLimits

0x0e08,	// (0x0009dcf6) touch_pane

0x9bd5,	// (0x000a6ac3) main_rss2_pane

0xc9c4,	// (0x000a98b2) listscroll_rss2_pane

0xc9cd,	// (0x000a98bb) rss2_navigation_pane

0xc9d5,	// (0x000a98c3) list_rss2_pane

0xb2d4,	// (0x000a81c2) scroll_pane_cp22

0xc9dd,	// (0x000a98cb) rss2_navigation_pane_g1

0xc9e6,	// (0x000a98d4) rss2_navigation_pane_g2

0xc9ee,	// (0x000a98dc) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000ac57a) rss2_navigation_pane_g

0xc9f6,	// (0x000a98e4) rss2_navigation_pane_t1

0x4d38,	// (0x000a1c26) rss2_list_single_pane_ParamLimits

0x4d38,	// (0x000a1c26) rss2_list_single_pane

0xca04,	// (0x000a98f2) rss2_list_single_pane_t2

0xca12,	// (0x000a9900) rss2_list_single_pane_t3_ParamLimits

0xca12,	// (0x000a9900) rss2_list_single_pane_t3

0xca2f,	// (0x000a991d) rss2_list_single_pane_t4

0x310a,	// (0x0009fff8) smil_status_pane_g1

0xa25a,	// (0x000a7148) main_image2_pane_ParamLimits

0xa25a,	// (0x000a7148) main_image2_pane

0x48f9,	// (0x000a17e7) main_camera2_pane_g9_ParamLimits

0x48f9,	// (0x000a17e7) main_camera2_pane_g9

0x494d,	// (0x000a183b) main_camera2_pane_t5_ParamLimits

0x494d,	// (0x000a183b) main_camera2_pane_t5

0x495f,	// (0x000a184d) main_camera2_pane_t6_ParamLimits

0x495f,	// (0x000a184d) main_camera2_pane_t6

0x4d5b,	// (0x000a1c49) main_image2_pane_g1_ParamLimits

0x4d5b,	// (0x000a1c49) main_image2_pane_g1

0x3fe4,	// (0x000a0ed2) smil2_video_pane_ParamLimits

0x3fe4,	// (0x000a0ed2) smil2_video_pane

0x0bc4,	// (0x0009dab2) aid_zoom_text_primary_cp

0x9c1c,	// (0x000a6b0a) popup_preview_fixed_window

0xab35,	// (0x000a7a23) im_reading_pane_g1

0x4843,	// (0x000a1731) cams2_bc_adjust_pane_cp_ParamLimits

0x4843,	// (0x000a1731) cams2_bc_adjust_pane_cp

0x498a,	// (0x000a1878) cams2_bc_adjust_pane_ParamLimits

0x498a,	// (0x000a1878) cams2_bc_adjust_pane

0xd1de,	// (0x000aa0cc) cams2_bc_adjust_pane_g1

0x4d67,	// (0x000a1c55) cams2_slider_pane

0x4d70,	// (0x000a1c5e) cams2_slider_pane_g1

0x4d79,	// (0x000a1c67) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000ac581) cams2_slider_pane_g

0x1023,	// (0x0009df11) calc_display_pane_ParamLimits

0x1041,	// (0x0009df2f) calc_paper_pane_ParamLimits

0x105d,	// (0x0009df4b) grid_calc_pane_ParamLimits

0x33b3,	// (0x000a02a1) popup_clock_digital_window_t1_ParamLimits

0xb68b,	// (0x000a8579) main_image_pane_t1

0x1009,	// (0x0009def7) aid_size_cell_calc_ParamLimits

0x1009,	// (0x0009def7) aid_size_cell_calc

0x44b4,	// (0x000a13a2) popup_blid_sat_info2_window_ParamLimits

0x44b4,	// (0x000a13a2) popup_blid_sat_info2_window

0xca45,	// (0x000a9933) aid_size_cell_blid

0xca4d,	// (0x000a993b) bg_popup_window_pane_cp07

0xca70,	// (0x000a995e) grid_popup_blid_pane

0xca7a,	// (0x000a9968) heading_pane_cp05_ParamLimits

0xca7a,	// (0x000a9968) heading_pane_cp05

0xcb44,	// (0x000a9a32) cell_popup_blid_pane_ParamLimits

0xcb44,	// (0x000a9a32) cell_popup_blid_pane

0xcb6e,	// (0x000a9a5c) cell_popup_blid_pane_g1

0xcb76,	// (0x000a9a64) cell_popup_blid_pane_t1

0x4ba9,	// (0x000a1a97) mup2_indicator_pane_ParamLimits

0x4ba9,	// (0x000a1a97) mup2_indicator_pane

0xaa38,	// (0x000a7926) mup2_visualizer_osc_pane

0xc926,	// (0x000a9814) mup2_visualizer_spec_pane_ParamLimits

0xc926,	// (0x000a9814) mup2_visualizer_spec_pane

0x4d93,	// (0x000a1c81) mup2_spec_half_pane

0x4d9c,	// (0x000a1c8a) mup2_spec_half_pane_cp

0x4da6,	// (0x000a1c94) mup2_spec_bar_pane_ParamLimits

0x4da6,	// (0x000a1c94) mup2_spec_bar_pane

0xc8bb,	// (0x000a97a9) mup2_spec_bar_pane_g1

0xc8c5,	// (0x000a97b3) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000ac4f4) mup2_spec_bar_pane_g

0x4dc5,	// (0x000a1cb3) mup2_osc_middle_pane

0xc8d7,	// (0x000a97c5) mup2_visualizer_osc_pane_g1

0x9c46,	// (0x000a6b34) popup_number_entry_window_t1_ParamLimits

0x9c59,	// (0x000a6b47) popup_number_entry_window_t2_ParamLimits

0x9c6b,	// (0x000a6b59) popup_number_entry_window_t3_ParamLimits

0x0e5f,	// (0x0009dd4d) popup_number_entry_window_t5_ParamLimits

0x0e5f,	// (0x0009dd4d) popup_number_entry_window_t5

0xf0ca,	// (0x000abfb8) popup_number_entry_window_t_ParamLimits

0x9c7d,	// (0x000a6b6b) text_title_cp2_ParamLimits

0x3cd1,	// (0x000a0bbf) aid_hotspot_pointer_text2_pane

0x3d6b,	// (0x000a0c59) main_viewer_pane_g9_ParamLimits

0x3d6b,	// (0x000a0c59) main_viewer_pane_g9

0xad7a,	// (0x000a7c68) cale_month_pane_t1_ParamLimits

0xada0,	// (0x000a7c8e) bg_cale_pane_ParamLimits

0xadb8,	// (0x000a7ca6) list_cale_pane_ParamLimits

0xadc9,	// (0x000a7cb7) listscroll_cale_day_pane_t1

0xaddb,	// (0x000a7cc9) scroll_pane_cp09_ParamLimits

0x39ef,	// (0x000a08dd) main_mup_eq_pane_t1_ParamLimits

0x39ef,	// (0x000a08dd) main_mup_eq_pane_t1

0x3a0b,	// (0x000a08f9) main_mup_eq_pane_t2_ParamLimits

0x3a0b,	// (0x000a08f9) main_mup_eq_pane_t2

0x3a27,	// (0x000a0915) main_mup_eq_pane_t3_ParamLimits

0x3a27,	// (0x000a0915) main_mup_eq_pane_t3

0x3a41,	// (0x000a092f) main_mup_eq_pane_t4_ParamLimits

0x3a41,	// (0x000a092f) main_mup_eq_pane_t4

0x3a5b,	// (0x000a0949) main_mup_eq_pane_t5_ParamLimits

0x3a5b,	// (0x000a0949) main_mup_eq_pane_t5

0x3a75,	// (0x000a0963) main_mup_eq_pane_t6_ParamLimits

0x3a75,	// (0x000a0963) main_mup_eq_pane_t6

0x3a8b,	// (0x000a0979) main_mup_eq_pane_t7_ParamLimits

0x3a8b,	// (0x000a0979) main_mup_eq_pane_t7

0x3aa1,	// (0x000a098f) main_mup_eq_pane_t8_ParamLimits

0x3aa1,	// (0x000a098f) main_mup_eq_pane_t8

0x3ab7,	// (0x000a09a5) main_mup_eq_pane_t9_ParamLimits

0x3ab7,	// (0x000a09a5) main_mup_eq_pane_t9

0x3ad3,	// (0x000a09c1) main_mup_eq_pane_t10_ParamLimits

0x3ad3,	// (0x000a09c1) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000ac343) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000ac343) main_mup_eq_pane_t

0x3b98,	// (0x000a0a86) mup_equalizer_pane_cp5_ParamLimits

0x3bb0,	// (0x000a0a9e) mup_equalizer_pane_cp6_ParamLimits

0x3bc8,	// (0x000a0ab6) mup_equalizer_pane_cp7_ParamLimits

0x9bd5,	// (0x000a6ac3) main_gallery_pane

0xc8e0,	// (0x000a97ce) smil2_volume_pane

0xc8e8,	// (0x000a97d6) smil_status_volume_pane_g1_ParamLimits

0xc8fb,	// (0x000a97e9) smil_status_volume_pane_g2_ParamLimits

0x46ae,	// (0x000a159c) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000ac4f9) smil_status_volume_pane_g_ParamLimits

0xca4d,	// (0x000a993b) bg_popup_window_pane_cp07_ParamLimits

0xca5b,	// (0x000a9949) blid_firmament_pane

0x4dce,	// (0x000a1cbc) aid_size_cell_gallery_ParamLimits

0x4dce,	// (0x000a1cbc) aid_size_cell_gallery

0x4ddc,	// (0x000a1cca) grid_gallery_pane_ParamLimits

0x4ddc,	// (0x000a1cca) grid_gallery_pane

0x4dec,	// (0x000a1cda) cell_gallery_pane_ParamLimits

0x4dec,	// (0x000a1cda) cell_gallery_pane

0xcb84,	// (0x000a9a72) bg_cell_gallery_focus_pane_ParamLimits

0xcb84,	// (0x000a9a72) bg_cell_gallery_focus_pane

0xcb96,	// (0x000a9a84) cell_gallery_pane_g1_ParamLimits

0xcb96,	// (0x000a9a84) cell_gallery_pane_g1

0x4e32,	// (0x000a1d20) cell_gallery_pane_g2_ParamLimits

0x4e32,	// (0x000a1d20) cell_gallery_pane_g2

0x4e3f,	// (0x000a1d2d) cell_gallery_pane_g3_ParamLimits

0x4e3f,	// (0x000a1d2d) cell_gallery_pane_g3

0xcba2,	// (0x000a9a90) cell_gallery_pane_g4_ParamLimits

0xcba2,	// (0x000a9a90) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000ac5a7) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000ac5a7) cell_gallery_pane_g

0xcbae,	// (0x000a9a9c) bg_cell_gallery_focus_pane_g1

0xcbb6,	// (0x000a9aa4) bg_cell_gallery_focus_pane_g2

0xcbbe,	// (0x000a9aac) bg_cell_gallery_focus_pane_g3

0xcbc6,	// (0x000a9ab4) bg_cell_gallery_focus_pane_g4

0xcbce,	// (0x000a9abc) bg_cell_gallery_focus_pane_g5

0xcbd6,	// (0x000a9ac4) bg_cell_gallery_focus_pane_g6

0xcbde,	// (0x000a9acc) bg_cell_gallery_focus_pane_g7

0xcbe6,	// (0x000a9ad4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000ac5b0) bg_cell_gallery_focus_pane_g

0xcbee,	// (0x000a9adc) aid_firma_cardinal

0xcc02,	// (0x000a9af0) blid_firmament_pane_t1

0xcc19,	// (0x000a9b07) blid_firmament_pane_t2

0xcc30,	// (0x000a9b1e) blid_firmament_pane_t3

0xcc47,	// (0x000a9b35) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000ac5c1) blid_firmament_pane_t

0xcc5e,	// (0x000a9b4c) blid_sat_info_pane

0xcc6e,	// (0x000a9b5c) blid_sat_info_pane_g1

0xcc6e,	// (0x000a9b5c) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000ac5ca) blid_sat_info_pane_g

0xcc78,	// (0x000a9b66) blid_sat_info_pane_t1

0xcc86,	// (0x000a9b74) smil2_volume_content_pane

0xcc8f,	// (0x000a9b7d) smil2_volume_pane_g1

0xcc97,	// (0x000a9b85) smil2_volume_content_pane_g1

0xcca0,	// (0x000a9b8e) smil2_volume_content_pane_g2

0xcca9,	// (0x000a9b97) smil2_volume_content_pane_g3

0xccb2,	// (0x000a9ba0) smil2_volume_content_pane_g4

0xccbb,	// (0x000a9ba9) smil2_volume_content_pane_g5

0xccc4,	// (0x000a9bb2) smil2_volume_content_pane_g6

0xcccd,	// (0x000a9bbb) smil2_volume_content_pane_g7

0xccd6,	// (0x000a9bc4) smil2_volume_content_pane_g8

0xccdf,	// (0x000a9bcd) smil2_volume_content_pane_g9

0xcce8,	// (0x000a9bd6) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000ac5cf) smil2_volume_content_pane_g

0x1762,	// (0x0009e650) cale_week_day_heading_pane_t1_ParamLimits

0x17aa,	// (0x0009e698) cale_week_day_heading_pane_t2_ParamLimits

0x17f7,	// (0x0009e6e5) cale_week_day_heading_pane_t3_ParamLimits

0x1844,	// (0x0009e732) cale_week_day_heading_pane_t4_ParamLimits

0x1891,	// (0x0009e77f) cale_week_day_heading_pane_t5_ParamLimits

0x18de,	// (0x0009e7cc) cale_week_day_heading_pane_t6_ParamLimits

0x192b,	// (0x0009e819) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000ac0bf) cale_week_day_heading_pane_t_ParamLimits

0xa9dd,	// (0x000a78cb) bg_cale_side_pane_ParamLimits

0x1973,	// (0x0009e861) cale_week_time_pane_t1_ParamLimits

0x19b7,	// (0x0009e8a5) cale_week_time_pane_t2_ParamLimits

0x19fb,	// (0x0009e8e9) cale_week_time_pane_t3_ParamLimits

0x1a3f,	// (0x0009e92d) cale_week_time_pane_t4_ParamLimits

0x1a83,	// (0x0009e971) cale_week_time_pane_t5_ParamLimits

0x1ac7,	// (0x0009e9b5) cale_week_time_pane_t6_ParamLimits

0x1b0b,	// (0x0009e9f9) cale_week_time_pane_t7_ParamLimits

0x1b57,	// (0x0009ea45) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000ac0ce) cale_week_time_pane_t_ParamLimits

0x1ba5,	// (0x0009ea93) cell_cale_week_pane_g2_ParamLimits

0xa9dd,	// (0x000a78cb) bg_cale_side_pane_cp01_ParamLimits

0x2ee7,	// (0x0009fdd5) cale_month_week_pane_t1_ParamLimits

0x2f00,	// (0x0009fdee) cale_month_week_pane_t2_ParamLimits

0x2f19,	// (0x0009fe07) cale_month_week_pane_t3_ParamLimits

0x2f32,	// (0x0009fe20) cale_month_week_pane_t4_ParamLimits

0x2f4b,	// (0x0009fe39) cale_month_week_pane_t5_ParamLimits

0x2f66,	// (0x0009fe54) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000ac1a3) cale_month_week_pane_t_ParamLimits

0x30d3,	// (0x0009ffc1) cell_cale_month_pane_g1_ParamLimits

0x9bd5,	// (0x000a6ac3) main_cale_event_viewer_pane

0x9bd5,	// (0x000a6ac3) listscroll_cale_event_viewer_pane

0xccf1,	// (0x000a9bdf) list_cale_ev_pane

0xccf9,	// (0x000a9be7) scroll_pane_cp023

0x4e4c,	// (0x000a1d3a) field_cale_ev_pane_ParamLimits

0x4e4c,	// (0x000a1d3a) field_cale_ev_pane

0xcd05,	// (0x000a9bf3) field_cale_ev_content_pane_ParamLimits

0xcd05,	// (0x000a9bf3) field_cale_ev_content_pane

0xcd11,	// (0x000a9bff) field_cale_ev_pane_g1_ParamLimits

0xcd11,	// (0x000a9bff) field_cale_ev_pane_g1

0xcd1d,	// (0x000a9c0b) field_cale_ev_pane_g2_ParamLimits

0xcd1d,	// (0x000a9c0b) field_cale_ev_pane_g2

0xcd35,	// (0x000a9c23) field_cale_ev_pane_g3_ParamLimits

0xcd35,	// (0x000a9c23) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000ac5e4) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000ac5e4) field_cale_ev_pane_g

0xcd4d,	// (0x000a9c3b) field_cale_ev_pane_t1_ParamLimits

0xcd4d,	// (0x000a9c3b) field_cale_ev_pane_t1

0x4e70,	// (0x000a1d5e) field_cale_ev_content_pane_t1_ParamLimits

0x4e70,	// (0x000a1d5e) field_cale_ev_content_pane_t1

0xb571,	// (0x000a845f) bg_button_pane_cp01

0x13c2,	// (0x0009e2b0) listscroll_cale_week_pane_ParamLimits

0x13d4,	// (0x0009e2c2) popup_toolbar_window_cp01

0xa9a9,	// (0x000a7897) listscroll_cale_week_pane_t1_ParamLimits

0x13c2,	// (0x0009e2b0) listscroll_cale_day_pane_ParamLimits

0x13d4,	// (0x0009e2c2) popup_toolbar_window_cp02

0xadc9,	// (0x000a7cb7) listscroll_cale_day_pane_t1_ParamLimits

0x13c2,	// (0x0009e2b0) main_cale_month_pane_ParamLimits

0x4598,	// (0x000a1486) popup_toolbar_window_cp03_ParamLimits

0x4598,	// (0x000a1486) popup_toolbar_window_cp03

0x3ef4,	// (0x000a0de2) main_image_pane_g2_ParamLimits

0x3ef4,	// (0x000a0de2) main_image_pane_g2

0x3f00,	// (0x000a0dee) main_image_pane_g3_ParamLimits

0x3f00,	// (0x000a0dee) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000ac3d5) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000ac3d5) main_image_pane_g

0xb68b,	// (0x000a8579) main_image_pane_t1_ParamLimits

0x3f0c,	// (0x000a0dfa) main_image_pane_t2_ParamLimits

0x3f0c,	// (0x000a0dfa) main_image_pane_t2

0x3f1e,	// (0x000a0e0c) main_image_pane_t3_ParamLimits

0x3f1e,	// (0x000a0e0c) main_image_pane_t3

0x3f30,	// (0x000a0e1e) main_image_pane_t4_ParamLimits

0x3f30,	// (0x000a0e1e) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000ac3dc) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000ac3dc) main_image_pane_t

0x3f42,	// (0x000a0e30) popup_image_details_window_cp01

0x3f4c,	// (0x000a0e3a) popup_toobar_trans_pane_cp01_ParamLimits

0x3f4c,	// (0x000a0e3a) popup_toobar_trans_pane_cp01

0x4509,	// (0x000a13f7) popup_image_details_window_ParamLimits

0x4509,	// (0x000a13f7) popup_image_details_window

0xc83f,	// (0x000a972d) popup_image_focus_window

0x4835,	// (0x000a1723) camera2_autofocus_pane_ParamLimits

0x4835,	// (0x000a1723) camera2_autofocus_pane

0x9bd5,	// (0x000a6ac3) bg_popup_sub_pane_cp06

0xcd64,	// (0x000a9c52) popup_image_focus_window_g1

0xcd6c,	// (0x000a9c5a) popup_image_focus_window_g2

0xcd74,	// (0x000a9c62) popup_image_focus_window_g3

0xcd7c,	// (0x000a9c6a) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000ac5eb) popup_image_focus_window_g

0xcd84,	// (0x000a9c72) popup_image_focus_window_t1

0xcd92,	// (0x000a9c80) popup_image_focus_window_t2

0xcda2,	// (0x000a9c90) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000ac5f4) popup_image_focus_window_t

0xcdb0,	// (0x000a9c9e) camera2_autofocus_pane_g1

0xa25a,	// (0x000a7148) bg_tb_trans_pane_cp01

0xcdbe,	// (0x000a9cac) popup_image_details_window_g1

0xcdd1,	// (0x000a9cbf) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000ac606) popup_image_details_window_g

0xcdfa,	// (0x000a9ce8) popup_image_details_window_t1

0xce0c,	// (0x000a9cfa) popup_image_details_window_t2

0xce25,	// (0x000a9d13) popup_image_details_window_t3

0xce39,	// (0x000a9d27) popup_image_details_window_t4

0xce54,	// (0x000a9d42) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000ac60d) popup_image_details_window_t

0xa86e,	// (0x000a775c) bg_calc_paper_pane_ParamLimits

0x115a,	// (0x0009e048) grid_highlight_pane_cp013

0x1164,	// (0x0009e052) list_calc_pane_ParamLimits

0x1176,	// (0x0009e064) scroll_pane_cp024

0xa882,	// (0x000a7770) bg_calc_display_pane_ParamLimits

0x117e,	// (0x0009e06c) calc_display_pane_t1_ParamLimits

0x1193,	// (0x0009e081) calc_display_pane_t2_ParamLimits

0x11a8,	// (0x0009e096) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000ac03f) calc_display_pane_t_ParamLimits

0x127c,	// (0x0009e16a) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000ac05c) cell_calc_pane_g

0x1285,	// (0x0009e173) cell_calc_pane_t1

0xa8e1,	// (0x000a77cf) grid_highlight_pane_cp02_ParamLimits

0xa8f7,	// (0x000a77e5) toolbar_button_pane_cp01_ParamLimits

0xa8f7,	// (0x000a77e5) toolbar_button_pane_cp01

0xb6d0,	// (0x000a85be) temp_image_control_pane_ParamLimits

0xb6d0,	// (0x000a85be) temp_image_control_pane

0xa25a,	// (0x000a7148) main_mp3_pane

0xce6e,	// (0x000a9d5c) temp_image_control_pane_g1_ParamLimits

0xce6e,	// (0x000a9d5c) temp_image_control_pane_g1

0xce7c,	// (0x000a9d6a) temp_image_control_pane_g2_ParamLimits

0xce7c,	// (0x000a9d6a) temp_image_control_pane_g2

0xce8e,	// (0x000a9d7c) temp_image_control_pane_g3_ParamLimits

0xce8e,	// (0x000a9d7c) temp_image_control_pane_g3

0x4ebb,	// (0x000a1da9) temp_image_control_pane_g4_ParamLimits

0x4ebb,	// (0x000a1da9) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000ac618) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000ac618) temp_image_control_pane_g

0xce6e,	// (0x000a9d5c) main_mp3_pane_g1

0x4ecc,	// (0x000a1dba) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000ac621) main_mp3_pane_g

0xced1,	// (0x000a9dbf) main_mp3_pane_t1

0xaa40,	// (0x000a792e) main_camera_pane_g8_ParamLimits

0xaa40,	// (0x000a792e) main_camera_pane_g8

0x1e42,	// (0x0009ed30) main_video_pane_g7_ParamLimits

0x1e42,	// (0x0009ed30) main_video_pane_g7

0x4978,	// (0x000a1866) main_camera2_pane_t7_ParamLimits

0x4978,	// (0x000a1866) main_camera2_pane_t7

0xab8c,	// (0x000a7a7a) scroll_pane_cp025_ParamLimits

0xab8c,	// (0x000a7a7a) scroll_pane_cp025

0xaba0,	// (0x000a7a8e) scroll_pane_cp026_ParamLimits

0xaba0,	// (0x000a7a8e) scroll_pane_cp026

0xabaf,	// (0x000a7a9d) wml_content_pane_ParamLimits

0x9bd5,	// (0x000a6ac3) main_touch_calib_pane

0x4f70,	// (0x000a1e5e) main_touch_calib_pane_g1

0x4f7c,	// (0x000a1e6a) main_touch_calib_pane_g2

0x4f88,	// (0x000a1e76) main_touch_calib_pane_g3

0x4f94,	// (0x000a1e82) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000ac63f) main_touch_calib_pane_g

0x4fa0,	// (0x000a1e8e) main_touch_calib_pane_t1

0x4fb7,	// (0x000a1ea5) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000ac648) main_touch_calib_pane_t

0xb34f,	// (0x000a823d) mup_progress_pane_cp02

0xb36e,	// (0x000a825c) navi_pane_g1

0xb3d0,	// (0x000a82be) navi_pane_mp_t3

0xa25a,	// (0x000a7148) main_mp3_pane_ParamLimits

0x45da,	// (0x000a14c8) navi_pane_ParamLimits

0xce6e,	// (0x000a9d5c) main_mp3_pane_g1_ParamLimits

0x4ecc,	// (0x000a1dba) main_mp3_pane_g2_ParamLimits

0x4ed8,	// (0x000a1dc6) main_mp3_pane_g3_ParamLimits

0x4ed8,	// (0x000a1dc6) main_mp3_pane_g3

0x4ee4,	// (0x000a1dd2) main_mp3_pane_g4_ParamLimits

0x4ee4,	// (0x000a1dd2) main_mp3_pane_g4

0xce9e,	// (0x000a9d8c) main_mp3_pane_g5_ParamLimits

0xce9e,	// (0x000a9d8c) main_mp3_pane_g5

0xceac,	// (0x000a9d9a) main_mp3_pane_g6_ParamLimits

0xceac,	// (0x000a9d9a) main_mp3_pane_g6

0xceb9,	// (0x000a9da7) main_mp3_pane_g7_ParamLimits

0xceb9,	// (0x000a9da7) main_mp3_pane_g7

0xcec5,	// (0x000a9db3) main_mp3_pane_g8_ParamLimits

0xcec5,	// (0x000a9db3) main_mp3_pane_g8

0xf733,	// (0x000ac621) main_mp3_pane_g_ParamLimits

0x4ef0,	// (0x000a1dde) main_mp3_pane_t2

0x4f00,	// (0x000a1dee) main_mp3_pane_t3

0xcedf,	// (0x000a9dcd) main_mp3_pane_t4

0xceed,	// (0x000a9ddb) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000ac632) main_mp3_pane_t

0xcefb,	// (0x000a9de9) mup_progress_pane_cp01

0x0bc4,	// (0x0009dab2) aid_zoom_text_secondary2

0xccf1,	// (0x000a9bdf) list_cale_ev2_pane

0xccf9,	// (0x000a9be7) scroll_pane_cp023_ParamLimits

0xe3fb,	// (0x000ab2e9) field_cale_ev2_pane_ParamLimits

0xe3fb,	// (0x000ab2e9) field_cale_ev2_pane

0x5012,	// (0x000a1f00) field_cale_ev2_pane_g1_ParamLimits

0x5012,	// (0x000a1f00) field_cale_ev2_pane_g1

0x501e,	// (0x000a1f0c) field_cale_ev2_pane_g2_ParamLimits

0x501e,	// (0x000a1f0c) field_cale_ev2_pane_g2

0x5036,	// (0x000a1f24) field_cale_ev2_pane_g3_ParamLimits

0x5036,	// (0x000a1f24) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000ac653) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000ac653) field_cale_ev2_pane_g

0x504e,	// (0x000a1f3c) field_cale_ev2_pane_t1_ParamLimits

0x504e,	// (0x000a1f3c) field_cale_ev2_pane_t1

0x5065,	// (0x000a1f53) field_cale_ev2_pane_t2_ParamLimits

0x5065,	// (0x000a1f53) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000ac65c) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000ac65c) field_cale_ev2_pane_t

0x3dd3,	// (0x000a0cc1) main_postcard_pane_g5_ParamLimits

0x3dd3,	// (0x000a0cc1) main_postcard_pane_g5

0x3de1,	// (0x000a0ccf) main_postcard_pane_g6_ParamLimits

0x3de1,	// (0x000a0ccf) main_postcard_pane_g6

0x1c80,	// (0x0009eb6e) camera2_autofocus_pane_cp_ParamLimits

0x1c80,	// (0x0009eb6e) camera2_autofocus_pane_cp

0xa25a,	// (0x000a7148) main_mup3_pane

0x509a,	// (0x000a1f88) main_mup3_pane_g1_ParamLimits

0x509a,	// (0x000a1f88) main_mup3_pane_g1

0x50bb,	// (0x000a1fa9) main_mup3_pane_g2_ParamLimits

0x50bb,	// (0x000a1fa9) main_mup3_pane_g2

0x5137,	// (0x000a2025) main_mup3_pane_g3_ParamLimits

0x5137,	// (0x000a2025) main_mup3_pane_g3

0x517c,	// (0x000a206a) main_mup3_pane_g4_ParamLimits

0x517c,	// (0x000a206a) main_mup3_pane_g4

0x51bf,	// (0x000a20ad) main_mup3_pane_g5_ParamLimits

0x51bf,	// (0x000a20ad) main_mup3_pane_g5

0x5204,	// (0x000a20f2) main_mup3_pane_g6_ParamLimits

0x5204,	// (0x000a20f2) main_mup3_pane_g6

0xcf03,	// (0x000a9df1) main_mup3_pane_g7_ParamLimits

0xcf03,	// (0x000a9df1) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000ac66c) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000ac66c) main_mup3_pane_g

0x527a,	// (0x000a2168) main_mup3_pane_t1_ParamLimits

0x527a,	// (0x000a2168) main_mup3_pane_t1

0x52e3,	// (0x000a21d1) main_mup3_pane_t2_ParamLimits

0x52e3,	// (0x000a21d1) main_mup3_pane_t2

0x53ac,	// (0x000a229a) main_mup3_pane_t4_ParamLimits

0x53ac,	// (0x000a229a) main_mup3_pane_t4

0x5400,	// (0x000a22ee) main_mup3_pane_t5_ParamLimits

0x5400,	// (0x000a22ee) main_mup3_pane_t5

0x54ae,	// (0x000a239c) main_mup3_pane_t6_ParamLimits

0x54ae,	// (0x000a239c) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000ac67d) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000ac67d) main_mup3_pane_t

0x555a,	// (0x000a2448) mup3_progress_pane_ParamLimits

0x555a,	// (0x000a2448) mup3_progress_pane

0x55d4,	// (0x000a24c2) popup_mup3_control_window_ParamLimits

0x55d4,	// (0x000a24c2) popup_mup3_control_window

0xcf11,	// (0x000a9dff) popup_mup3_text_window

0x55f1,	// (0x000a24df) mup3_progress_pane_t1

0x5610,	// (0x000a24fe) mup3_progress_pane_t2

0xcf19,	// (0x000a9e07) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000ac68a) mup3_progress_pane_t

0xcf36,	// (0x000a9e24) mup_progress_pane_cp03

0x9bd5,	// (0x000a6ac3) bg_tb_trans_pane_cp04

0x562f,	// (0x000a251d) mup3_volume_pane

0x5637,	// (0x000a2525) popup_mup3_control_window_g1

0xdaea,	// (0x000aa9d8) mup3_volume_pane_g1

0xdaf3,	// (0x000aa9e1) mup3_volume_pane_g2

0xdafc,	// (0x000aa9ea) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000ac691) mup3_volume_pane_g

0x9bd5,	// (0x000a6ac3) bg_tb_trans_pane_cp03

0xcf46,	// (0x000a9e34) popup_mup3_text_window_g1

0xcf4e,	// (0x000a9e3c) popup_mup3_text_window_t1

0xa8ca,	// (0x000a77b8) list_calc_item_pane_g1_ParamLimits

0xc9bb,	// (0x000a98a9) mup_volume_pane_cp_g1

0x4fd0,	// (0x000a1ebe) main_touch_calib_pane_t3

0x4fe6,	// (0x000a1ed4) main_touch_calib_pane_t4

0x4ffc,	// (0x000a1eea) main_touch_calib_pane_t5

0x9bdf,	// (0x000a6acd) aid_cell_size_toolbar2

0x9be7,	// (0x000a6ad5) aid_popup3_width_pane

0x0bb4,	// (0x0009daa2) aid_zoom_text_msg_primary

0x1c53,	// (0x0009eb41) vorec_t7

0xa88e,	// (0x000a777c) bg_calc_paper_pane_g1_ParamLimits

0xa89a,	// (0x000a7788) bg_calc_paper_pane_g2_ParamLimits

0xa8a6,	// (0x000a7794) bg_calc_paper_pane_g3_ParamLimits

0xa8b2,	// (0x000a77a0) bg_calc_paper_pane_g4_ParamLimits

0xa8be,	// (0x000a77ac) bg_calc_paper_pane_g5_ParamLimits

0x11e9,	// (0x0009e0d7) bg_calc_paper_pane_g6_ParamLimits

0x11fa,	// (0x0009e0e8) bg_calc_paper_pane_g7_ParamLimits

0x120b,	// (0x0009e0f9) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000ac046) bg_calc_paper_pane_g_ParamLimits

0x121e,	// (0x0009e10c) calc_bg_paper_pane_g9_ParamLimits

0x1d71,	// (0x0009ec5f) image_qvga_pane_ParamLimits

0x1d71,	// (0x0009ec5f) image_qvga_pane

0xa7bd,	// (0x000a76ab) bg_popup_sub_pane_cp04_ParamLimits

0xb607,	// (0x000a84f5) popup_mup_playback_window_g1_ParamLimits

0xb613,	// (0x000a8501) popup_mup_playback_window_t1_ParamLimits

0xb628,	// (0x000a8516) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000ac3d0) popup_mup_playback_window_t_ParamLimits

0x4aa7,	// (0x000a1995) main_mup2_pane_g3_ParamLimits

0x4aa7,	// (0x000a1995) main_mup2_pane_g3

0x212d,	// (0x0009f01b) popup_toolbar_window_cp04

0xba23,	// (0x000a8911) popup_call2_audio_second_window_g3_ParamLimits

0xba23,	// (0x000a8911) popup_call2_audio_second_window_g3

0xbe2d,	// (0x000a8d1b) popup_call2_audio_first_window_g4_ParamLimits

0xbe2d,	// (0x000a8d1b) popup_call2_audio_first_window_g4

0xc4ac,	// (0x000a939a) popup_call2_audio_in_window_g4_ParamLimits

0xc4ac,	// (0x000a939a) popup_call2_audio_in_window_g4

0x3ee7,	// (0x000a0dd5) aid_area_sk_bg_cut_ParamLimits

0x3ee7,	// (0x000a0dd5) aid_area_sk_bg_cut

0xb63d,	// (0x000a852b) aid_area_sk_bg_cut_2_ParamLimits

0xb63d,	// (0x000a852b) aid_area_sk_bg_cut_2

0x4e22,	// (0x000a1d10) aid_placing_details_win

0x4e2a,	// (0x000a1d18) aid_placing_details_win_2

0xcdb0,	// (0x000a9c9e) camera2_autofocus_pane_g1_ParamLimits

0x0d9e,	// (0x0009dc8c) popup_fixed_preview_cale_window_ParamLimits

0x0d9e,	// (0x0009dc8c) popup_fixed_preview_cale_window

0xb417,	// (0x000a8305) navi_slider_pane_g3

0xb420,	// (0x000a830e) navi_slider_pane_g4

0xb429,	// (0x000a8317) navi_slider_pane_g5

0xb417,	// (0x000a8305) navi_slider_pane_g6

0x375d,	// (0x000a064b) navi_slider_pane_g7

0xb53e,	// (0x000a842c) mup_scale_pane_g3

0xb547,	// (0x000a8435) mup_scale_pane_g4

0xb550,	// (0x000a843e) mup_scale_pane_g5

0x3be0,	// (0x000a0ace) mup_scale_pane_g6

0x3be9,	// (0x000a0ad7) mup_scale_pane_g7

0xb417,	// (0x000a8305) cams2_slider_pane_g3

0xca3d,	// (0x000a992b) cams2_slider_pane_g4

0x4d82,	// (0x000a1c70) cams2_slider_pane_g5

0xb417,	// (0x000a8305) cams2_slider_pane_g6

0x4d8a,	// (0x000a1c78) cams2_slider_pane_g7

0xcc6e,	// (0x000a9b5c) camera2_autofocus_pane_cp_g1

0xc811,	// (0x000a96ff) bg_popup_preview_window_pane_cp02_ParamLimits

0xc811,	// (0x000a96ff) bg_popup_preview_window_pane_cp02

0xcf5c,	// (0x000a9e4a) list_fp_cale_pane_ParamLimits

0xcf5c,	// (0x000a9e4a) list_fp_cale_pane

0xcf68,	// (0x000a9e56) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf68,	// (0x000a9e56) popup_fixed_preview_cale_window_t1

0x5640,	// (0x000a252e) popup_fixed_preview_cale_window_t2_ParamLimits

0x5640,	// (0x000a252e) popup_fixed_preview_cale_window_t2

0x5655,	// (0x000a2543) popup_fixed_preview_cale_window_t3_ParamLimits

0x5655,	// (0x000a2543) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000ac698) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000ac698) popup_fixed_preview_cale_window_t

0x566a,	// (0x000a2558) list_single_fp_cale_pane_ParamLimits

0x566a,	// (0x000a2558) list_single_fp_cale_pane

0xcf86,	// (0x000a9e74) list_single_fp_cale_pane_g1_ParamLimits

0xcf86,	// (0x000a9e74) list_single_fp_cale_pane_g1

0xcf92,	// (0x000a9e80) list_single_fp_cale_pane_g2_ParamLimits

0xcf92,	// (0x000a9e80) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000ac69f) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000ac69f) list_single_fp_cale_pane_g

0xcfab,	// (0x000a9e99) list_single_fp_cale_pane_t1_ParamLimits

0xcfab,	// (0x000a9e99) list_single_fp_cale_pane_t1

0xcfbd,	// (0x000a9eab) list_single_fp_cale_pane_t2_ParamLimits

0xcfbd,	// (0x000a9eab) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000ac6a6) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000ac6a6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9bd5,	// (0x000a6ac3) main_dialer_pane

0x567a,	// (0x000a2568) aid_cell_size_keypad

0x5684,	// (0x000a2572) dialer_ne_pane

0x568e,	// (0x000a257c) grid_dialer_command_1_pane

0x5696,	// (0x000a2584) grid_dialer_command_2_pane

0x569e,	// (0x000a258c) grid_dialer_keypad_pane

0x56b2,	// (0x000a25a0) bg_popup_call_pane_cp06_ParamLimits

0x56b2,	// (0x000a25a0) bg_popup_call_pane_cp06

0x56be,	// (0x000a25ac) dialer_ne_clear_pane_ParamLimits

0x56be,	// (0x000a25ac) dialer_ne_clear_pane

0xcff0,	// (0x000a9ede) dialer_ne_pane_g1

0xcff8,	// (0x000a9ee6) dialer_ne_pane_t1_ParamLimits

0xcff8,	// (0x000a9ee6) dialer_ne_pane_t1

0x56ca,	// (0x000a25b8) dialer_ne_pane_t2_ParamLimits

0x56ca,	// (0x000a25b8) dialer_ne_pane_t2

0x56e7,	// (0x000a25d5) dialer_ne_pane_t3_ParamLimits

0x56e7,	// (0x000a25d5) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000ac6ab) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000ac6ab) dialer_ne_pane_t

0x570b,	// (0x000a25f9) dialer_ne_pane_t3_copy1_ParamLimits

0x570b,	// (0x000a25f9) dialer_ne_pane_t3_copy1

0x572f,	// (0x000a261d) cell_dialer_keypad_pane_ParamLimits

0x572f,	// (0x000a261d) cell_dialer_keypad_pane

0x5746,	// (0x000a2634) cell_dialer_command_1_pane_ParamLimits

0x5746,	// (0x000a2634) cell_dialer_command_1_pane

0x575c,	// (0x000a264a) cell_dialer_command_2_pane_ParamLimits

0x575c,	// (0x000a264a) cell_dialer_command_2_pane

0xd00a,	// (0x000a9ef8) bg_button_pane_cp02_ParamLimits

0xd00a,	// (0x000a9ef8) bg_button_pane_cp02

0x576b,	// (0x000a2659) cell_dialer_keypad_pane_g1_ParamLimits

0x576b,	// (0x000a2659) cell_dialer_keypad_pane_g1

0xd00a,	// (0x000a9ef8) bg_button_pane_cp03_ParamLimits

0xd00a,	// (0x000a9ef8) bg_button_pane_cp03

0x5780,	// (0x000a266e) cell_dialer_command_1_pane_g1_ParamLimits

0x5780,	// (0x000a266e) cell_dialer_command_1_pane_g1

0xd016,	// (0x000a9f04) bg_button_pane_cp04

0x5794,	// (0x000a2682) cell_dialer_command_2_pane_g1

0xaa38,	// (0x000a7926) bg_button_pane_cp06

0xd01e,	// (0x000a9f0c) dialer_ne_clear_pane_g1

0x3698,	// (0x000a0586) navi_pane_g2

0x36c6,	// (0x000a05b4) navi_pane_g3

0x0002,

0xf3e5,	// (0x000ac2d3) navi_pane_g

0x36f1,	// (0x000a05df) navi_pane_mv_g2

0x3718,	// (0x000a0606) navi_pane_mv_g5

0x3720,	// (0x000a060e) navi_pane_mv_t1

0xa882,	// (0x000a7770) main_clock2_pane

0x57d2,	// (0x000a26c0) main_clock2_list_pane_ParamLimits

0x57d2,	// (0x000a26c0) main_clock2_list_pane

0x57fc,	// (0x000a26ea) main_clock2_pane_t1_ParamLimits

0x57fc,	// (0x000a26ea) main_clock2_pane_t1

0x581e,	// (0x000a270c) main_clock2_pane_t2_ParamLimits

0x581e,	// (0x000a270c) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000ac6b7) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000ac6b7) main_clock2_pane_t

0x587b,	// (0x000a2769) popup_clock_analogue_window_cp03_ParamLimits

0x587b,	// (0x000a2769) popup_clock_analogue_window_cp03

0x589b,	// (0x000a2789) popup_clock_digital_window_cp02_ParamLimits

0x589b,	// (0x000a2789) popup_clock_digital_window_cp02

0x590c,	// (0x000a27fa) main_clock2_list_single_pane_ParamLimits

0x590c,	// (0x000a27fa) main_clock2_list_single_pane

0xaa38,	// (0x000a7926) list_highlight_pane_cp05

0xd05a,	// (0x000a9f48) main_clock2_list_single_pane_t1

0x212d,	// (0x0009f01b) popup_toolbar_window_cp04_ParamLimits

0x4e8b,	// (0x000a1d79) camera2_autofocus_pane_g2_ParamLimits

0x4e8b,	// (0x000a1d79) camera2_autofocus_pane_g2

0x4e97,	// (0x000a1d85) camera2_autofocus_pane_g3_ParamLimits

0x4e97,	// (0x000a1d85) camera2_autofocus_pane_g3

0x4ea3,	// (0x000a1d91) camera2_autofocus_pane_g4_ParamLimits

0x4ea3,	// (0x000a1d91) camera2_autofocus_pane_g4

0x4eaf,	// (0x000a1d9d) camera2_autofocus_pane_g5_ParamLimits

0x4eaf,	// (0x000a1d9d) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000ac5fb) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000ac5fb) camera2_autofocus_pane_g

0x507a,	// (0x000a1f68) camera2_autofocus_pane_cp_g2

0x5082,	// (0x000a1f70) camera2_autofocus_pane_cp_g3

0x508a,	// (0x000a1f78) camera2_autofocus_pane_cp_g4

0x5092,	// (0x000a1f80) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000ac661) camera2_autofocus_pane_cp_g

0x56aa,	// (0x000a2598) popup_dialer_spcha_window

0x9bd5,	// (0x000a6ac3) bg_popup_sub_pane_cp07

0xd068,	// (0x000a9f56) list_spcha_pane

0xd070,	// (0x000a9f5e) list_single_spcha_pane_ParamLimits

0xd070,	// (0x000a9f5e) list_single_spcha_pane

0x9bd5,	// (0x000a6ac3) list_highlight_pane_cp06

0xd081,	// (0x000a9f6f) list_single_spcha_pane_t1

0xc256,	// (0x000a9144) popup_call2_audio_out_window_g4_ParamLimits

0xc256,	// (0x000a9144) popup_call2_audio_out_window_g4

0x9bd5,	// (0x000a6ac3) main_imed2_pane

0xc849,	// (0x000a9737) popup_imed_adjust2_window

0x4517,	// (0x000a1405) popup_imed_trans_window_ParamLimits

0x4517,	// (0x000a1405) popup_imed_trans_window

0xcaa6,	// (0x000a9994) popup_blid_sat_info2_window_t1

0xcab4,	// (0x000a99a2) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000ac590) popup_blid_sat_info2_window_t

0x59b6,	// (0x000a28a4) aid_size_cell_colour_35

0x59d0,	// (0x000a28be) aid_size_cell_colour_112

0x59e7,	// (0x000a28d5) aid_size_cell_effect

0xa25a,	// (0x000a7148) bg_tb_trans_pane_cp02

0xb081,	// (0x000a7f6f) heading_imed_pane

0x5a01,	// (0x000a28ef) listscroll_imed_pane

0xd08f,	// (0x000a9f7d) heading_imed_pane_g1

0xd097,	// (0x000a9f85) heading_imed_pane_t1

0xd0a5,	// (0x000a9f93) grid_imed_colour_35_pane_ParamLimits

0xd0a5,	// (0x000a9f93) grid_imed_colour_35_pane

0x5a0d,	// (0x000a28fb) grid_imed_effect_pane

0xd0c1,	// (0x000a9faf) list_imed_aspect_pane

0x5a1d,	// (0x000a290b) scroll_pane_cp027_ParamLimits

0x5a1d,	// (0x000a290b) scroll_pane_cp027

0x5a29,	// (0x000a2917) cell_imed_effect_pane_ParamLimits

0x5a29,	// (0x000a2917) cell_imed_effect_pane

0xd0c9,	// (0x000a9fb7) cell_imed_colour_pane_ParamLimits

0xd0c9,	// (0x000a9fb7) cell_imed_colour_pane

0xd113,	// (0x000aa001) cell_imed_colour_pane_g1_ParamLimits

0xd113,	// (0x000aa001) cell_imed_colour_pane_g1

0xd124,	// (0x000aa012) hgihlgiht_grid_pane_cp016_ParamLimits

0xd124,	// (0x000aa012) hgihlgiht_grid_pane_cp016

0x5a45,	// (0x000a2933) cell_imed_effect_pane_g1

0x5a4d,	// (0x000a293b) grid_highlight_pane_cp017

0xd135,	// (0x000aa023) list_imed_single_pane_ParamLimits

0xd135,	// (0x000aa023) list_imed_single_pane

0x9bd5,	// (0x000a6ac3) list_highlight_pane_cp07

0xd149,	// (0x000aa037) list_imed_aspect_pane_comp1_t1

0xc81d,	// (0x000a970b) bg_tb_trans_pane_cp05

0xd16b,	// (0x000aa059) popup_imed_adjust2_window_g1

0xd192,	// (0x000aa080) popup_imed_adjust2_window_t1

0xd1aa,	// (0x000aa098) slider_imed_adjust_pane

0xd1be,	// (0x000aa0ac) slider_imed_adjust_pane_g1

0xd1ce,	// (0x000aa0bc) slider_imed_adjust_pane_g2

0xd1e6,	// (0x000aa0d4) slider_imed_adjust_pane_g3

0xd1f7,	// (0x000aa0e5) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000ac6d4) slider_imed_adjust_pane_g

0x5a56,	// (0x000a2944) aid_size_cell_clipart2

0x5a62,	// (0x000a2950) grid_imed_clipart_pane

0xd208,	// (0x000aa0f6) scroll_pane_cp031

0x5a6c,	// (0x000a295a) cell_imed_clipart_pane_ParamLimits

0x5a6c,	// (0x000a295a) cell_imed_clipart_pane

0x5a8a,	// (0x000a2978) cell_imed_clipart_pane_g1

0x9bd5,	// (0x000a6ac3) grid_highlight_pane_cp014

0x57de,	// (0x000a26cc) main_clock2_pane_g1_ParamLimits

0x57de,	// (0x000a26cc) main_clock2_pane_g1

0x58b7,	// (0x000a27a5) aid_call2_pane_cp10

0x58c9,	// (0x000a27b7) aid_call_pane_cp10

0xb343,	// (0x000a8231) popup_clock_analogue_window_cp10_g1

0xb343,	// (0x000a8231) popup_clock_analogue_window_cp10_g2

0x58db,	// (0x000a27c9) popup_clock_analogue_window_cp10_g3

0x58db,	// (0x000a27c9) popup_clock_analogue_window_cp10_g4

0xb343,	// (0x000a8231) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000ac6c2) popup_clock_analogue_window_cp10_g

0x58ed,	// (0x000a27db) popup_clock_analogue_window_cp10_t1

0x591e,	// (0x000a280c) clock_digital_number_pane_cp10_ParamLimits

0x591e,	// (0x000a280c) clock_digital_number_pane_cp10

0x5936,	// (0x000a2824) clock_digital_number_pane_cp11_ParamLimits

0x5936,	// (0x000a2824) clock_digital_number_pane_cp11

0x594e,	// (0x000a283c) clock_digital_number_pane_cp12_ParamLimits

0x594e,	// (0x000a283c) clock_digital_number_pane_cp12

0x5966,	// (0x000a2854) clock_digital_number_pane_cp13_ParamLimits

0x5966,	// (0x000a2854) clock_digital_number_pane_cp13

0x597e,	// (0x000a286c) clock_digital_separator_pane_cp10_ParamLimits

0x597e,	// (0x000a286c) clock_digital_separator_pane_cp10

0x5996,	// (0x000a2884) popup_clock_digital_window_cp02_t1_ParamLimits

0x5996,	// (0x000a2884) popup_clock_digital_window_cp02_t1

0xa7b5,	// (0x000a76a3) clock_digital_number_pane_cp10_g1

0xa7b5,	// (0x000a76a3) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000ac6dd) clock_digital_number_pane_cp10_g

0xa7b5,	// (0x000a76a3) clock_digital_separator_pane_cp10_g1

0xa7b5,	// (0x000a76a3) clock_digital_separator_pane_g2_cp10

0xb3de,	// (0x000a82cc) navi_pane_vded_g4

0xb3e7,	// (0x000a82d5) navi_pane_vded_g5

0xb3f0,	// (0x000a82de) navi_pane_vded_t1

0x9bd5,	// (0x000a6ac3) main_vded_pane

0x5a93,	// (0x000a2981) main_vded_pane_g1

0x5a9f,	// (0x000a298d) main_vded_pane_g2

0x5aa9,	// (0x000a2997) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000ac6e2) main_vded_pane_g

0x5ab3,	// (0x000a29a1) main_vded_pane_t1

0x5ac1,	// (0x000a29af) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000ac6e9) main_vded_pane_t

0x5acf,	// (0x000a29bd) vded_slider_pane

0x5ad9,	// (0x000a29c7) vded_video_pane

0xd210,	// (0x000aa0fe) vded_video_pane_g1

0x5ae5,	// (0x000a29d3) vded_video_pane_g2

0xcc6e,	// (0x000a9b5c) vded_video_pane_g3

0x0002,

0xf800,	// (0x000ac6ee) vded_video_pane_g

0xd21a,	// (0x000aa108) vded_slider_pane_g1

0xc9bb,	// (0x000a98a9) vded_slider_pane_g2

0xd223,	// (0x000aa111) vded_slider_pane_g3

0xd22c,	// (0x000aa11a) vded_slider_pane_g4

0xd235,	// (0x000aa123) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000ac6f5) vded_slider_pane_g

0x55c8,	// (0x000a24b6) mup3_rocker_pane_ParamLimits

0x55c8,	// (0x000a24b6) mup3_rocker_pane

0x5aee,	// (0x000a29dc) mup3_control_keys_pane_g1

0x5af6,	// (0x000a29e4) mup3_control_keys_pane_g2

0x5afe,	// (0x000a29ec) mup3_control_keys_pane_g3

0x5b06,	// (0x000a29f4) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000ac700) mup3_control_keys_pane_g

0x0dbc,	// (0x0009dcaa) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dbc,	// (0x0009dcaa) popup_toolbar2_fixed_window_cp01

0x55e4,	// (0x000a24d2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55e4,	// (0x000a24d2) popup_toolbar2_fixed_window_cp02

0xbb95,	// (0x000a8a83) popup_call2_audio_second_window_t4_ParamLimits

0xbb95,	// (0x000a8a83) popup_call2_audio_second_window_t4

0xc0c3,	// (0x000a8fb1) popup_call2_audio_first_window_t6_ParamLimits

0xc0c3,	// (0x000a8fb1) popup_call2_audio_first_window_t6

0xc359,	// (0x000a9247) popup_call2_audio_out_window_t6_ParamLimits

0xc359,	// (0x000a9247) popup_call2_audio_out_window_t6

0x9bd5,	// (0x000a6ac3) main_vitu_pane

0x5b16,	// (0x000a2a04) aid_size_cell_itu_ParamLimits

0x5b16,	// (0x000a2a04) aid_size_cell_itu

0x0dee,	// (0x0009dcdc) bg_popup_window_pane_cp08_ParamLimits

0x0dee,	// (0x0009dcdc) bg_popup_window_pane_cp08

0x5b24,	// (0x000a2a12) field_vitu_entry_pane_ParamLimits

0x5b24,	// (0x000a2a12) field_vitu_entry_pane

0x5b33,	// (0x000a2a21) grid_vitu_function_pane_ParamLimits

0x5b33,	// (0x000a2a21) grid_vitu_function_pane

0x5b43,	// (0x000a2a31) grid_vitu_itu_pane_ParamLimits

0x5b43,	// (0x000a2a31) grid_vitu_itu_pane

0x5b53,	// (0x000a2a41) cell_vitu_itu_pane_ParamLimits

0x5b53,	// (0x000a2a41) cell_vitu_itu_pane

0x5b6a,	// (0x000a2a58) cell_vitu_function_pane_ParamLimits

0x5b6a,	// (0x000a2a58) cell_vitu_function_pane

0xa25a,	// (0x000a7148) bg_popup_sub_pane_cp08_ParamLimits

0xa25a,	// (0x000a7148) bg_popup_sub_pane_cp08

0x5b7e,	// (0x000a2a6c) field_vitu_entry_pane_t1_ParamLimits

0x5b7e,	// (0x000a2a6c) field_vitu_entry_pane_t1

0xd256,	// (0x000aa144) field_vitu_entry_pane_t2_ParamLimits

0xd256,	// (0x000aa144) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000ac70e) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000ac70e) field_vitu_entry_pane_t

0xd273,	// (0x000aa161) bg_button_pane_cp05_ParamLimits

0xd273,	// (0x000aa161) bg_button_pane_cp05

0x5b98,	// (0x000a2a86) cell_vitu_itu_pane_g1

0x5bb0,	// (0x000a2a9e) cell_vitu_itu_pane_t1_ParamLimits

0x5bb0,	// (0x000a2a9e) cell_vitu_itu_pane_t1

0x5bc2,	// (0x000a2ab0) cell_vitu_itu_pane_t2_ParamLimits

0x5bc2,	// (0x000a2ab0) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000ac713) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000ac713) cell_vitu_itu_pane_t

0xd281,	// (0x000aa16f) bg_button_pane_cp07

0x5c05,	// (0x000a2af3) cell_vitu_function_pane_g1

0x1081,	// (0x0009df6f) main_calc_pane_g1

0x0ba8,	// (0x0009da96) aid_visual_content_pane

0x9bd5,	// (0x000a6ac3) main_vradio_pane

0x5c0e,	// (0x000a2afc) main_vradio_pane_g1_ParamLimits

0x5c0e,	// (0x000a2afc) main_vradio_pane_g1

0xd28b,	// (0x000aa179) main_vradio_pane_g2_ParamLimits

0xd28b,	// (0x000aa179) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000ac71a) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000ac71a) main_vradio_pane_g

0x5c1c,	// (0x000a2b0a) main_vradio_pane_t1_ParamLimits

0x5c1c,	// (0x000a2b0a) main_vradio_pane_t1

0x5c2e,	// (0x000a2b1c) main_vradio_pane_t2_ParamLimits

0x5c2e,	// (0x000a2b1c) main_vradio_pane_t2

0xd298,	// (0x000aa186) main_vradio_pane_t3_ParamLimits

0xd298,	// (0x000aa186) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000ac71f) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000ac71f) main_vradio_pane_t

0x5c40,	// (0x000a2b2e) vradio_rocker_control_pane_ParamLimits

0x5c40,	// (0x000a2b2e) vradio_rocker_control_pane

0x5c4c,	// (0x000a2b3a) vradio_station_info_pane_ParamLimits

0x5c4c,	// (0x000a2b3a) vradio_station_info_pane

0xd2ac,	// (0x000aa19a) vradio_frequency_info_pane_ParamLimits

0xd2ac,	// (0x000aa19a) vradio_frequency_info_pane

0xcc6e,	// (0x000a9b5c) vradio_station_info_pane_g1

0xd2bb,	// (0x000aa1a9) vradio_station_info_pane_t1_ParamLimits

0xd2bb,	// (0x000aa1a9) vradio_station_info_pane_t1

0xd2dd,	// (0x000aa1cb) vradio_station_info_pane_t2_ParamLimits

0xd2dd,	// (0x000aa1cb) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000ac726) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000ac726) vradio_station_info_pane_t

0xd2ef,	// (0x000aa1dd) vradio_tuning_pane

0xd2f7,	// (0x000aa1e5) vradio_rocker_control_pane_g1

0xd2ff,	// (0x000aa1ed) vradio_rocker_control_pane_g2

0xd307,	// (0x000aa1f5) vradio_rocker_control_pane_g3

0xd30f,	// (0x000aa1fd) vradio_rocker_control_pane_g4

0xd317,	// (0x000aa205) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000ac72b) vradio_rocker_control_pane_g

0x5c59,	// (0x000a2b47) vradio_frequency_info_pane_g1

0xd31f,	// (0x000aa20d) vradio_frequency_info_pane_t1_ParamLimits

0xd31f,	// (0x000aa20d) vradio_frequency_info_pane_t1

0x5c63,	// (0x000a2b51) vradio_tuning_pane_g1

0x5c6e,	// (0x000a2b5c) vradio_tuning_pane_t1

0x9bf3,	// (0x000a6ae1) area_side_right_pane_ParamLimits

0x9bf3,	// (0x000a6ae1) area_side_right_pane

0xc7d8,	// (0x000a96c6) status_small_pane_g1

0xc7e0,	// (0x000a96ce) status_small_pane_g2

0xc7e9,	// (0x000a96d7) status_small_pane_g3

0xc7f2,	// (0x000a96e0) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000ac4e6) status_small_pane_g

0xc7fb,	// (0x000a96e9) status_small_pane_t1

0x9bd5,	// (0x000a6ac3) main_video3_pane

0xd333,	// (0x000aa221) cams_zoom_vslider_pane

0xd33b,	// (0x000aa229) image3_wide_pane_ParamLimits

0xd33b,	// (0x000aa229) image3_wide_pane

0xd355,	// (0x000aa243) image3_wide_small_pane

0xd361,	// (0x000aa24f) main_video3_pane_g1_ParamLimits

0xd361,	// (0x000aa24f) main_video3_pane_g1

0xd37d,	// (0x000aa26b) main_video3_pane_g2_ParamLimits

0xd37d,	// (0x000aa26b) main_video3_pane_g2

0x0001,

0xf848,	// (0x000ac736) main_video3_pane_g_ParamLimits

0xf848,	// (0x000ac736) main_video3_pane_g

0xd399,	// (0x000aa287) main_video3_pane_t1_ParamLimits

0xd399,	// (0x000aa287) main_video3_pane_t1

0xd3c4,	// (0x000aa2b2) main_video3_pane_t2_ParamLimits

0xd3c4,	// (0x000aa2b2) main_video3_pane_t2

0xd3f1,	// (0x000aa2df) main_video3_pane_t3_ParamLimits

0xd3f1,	// (0x000aa2df) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000ac73b) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000ac73b) main_video3_pane_t

0xd41e,	// (0x000aa30c) cams_zoom_vslider_pane_g1

0xd427,	// (0x000aa315) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000ac742) cams_zoom_vslider_pane_g

0xd42f,	// (0x000aa31d) small_slider_vertical_pane

0xcc6e,	// (0x000a9b5c) small_slider_vertical_pane_g1

0xcc6e,	// (0x000a9b5c) small_slider_vertical_pane_g2

0xd437,	// (0x000aa325) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000ac747) small_slider_vertical_pane_g

0x9bd5,	// (0x000a6ac3) main_hwr_training_pane

0xd440,	// (0x000aa32e) hwr_training_instruct_pane_ParamLimits

0xd440,	// (0x000aa32e) hwr_training_instruct_pane

0x5c7d,	// (0x000a2b6b) hwr_training_navi_pane_ParamLimits

0x5c7d,	// (0x000a2b6b) hwr_training_navi_pane

0x5c97,	// (0x000a2b85) hwr_training_write_pane_ParamLimits

0x5c97,	// (0x000a2b85) hwr_training_write_pane

0x9bd5,	// (0x000a6ac3) bg_frame_shadow_pane

0xd477,	// (0x000aa365) hwr_training_write_pane_g1

0xd47f,	// (0x000aa36d) hwr_training_write_pane_g2

0xd487,	// (0x000aa375) hwr_training_write_pane_g3

0xd48f,	// (0x000aa37d) hwr_training_write_pane_g4

0xd497,	// (0x000aa385) hwr_training_write_pane_g5

0xd49f,	// (0x000aa38d) hwr_training_write_pane_g6

0xd4a7,	// (0x000aa395) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000ac74e) hwr_training_write_pane_g

0x5ccf,	// (0x000a2bbd) hwr_training_navi_pane_g1_ParamLimits

0x5ccf,	// (0x000a2bbd) hwr_training_navi_pane_g1

0x5ce1,	// (0x000a2bcf) hwr_training_navi_pane_g2_ParamLimits

0x5ce1,	// (0x000a2bcf) hwr_training_navi_pane_g2

0x5cf3,	// (0x000a2be1) hwr_training_navi_pane_g3_ParamLimits

0x5cf3,	// (0x000a2be1) hwr_training_navi_pane_g3

0x5d03,	// (0x000a2bf1) hwr_training_navi_pane_g4_ParamLimits

0x5d03,	// (0x000a2bf1) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000ac75d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000ac75d) hwr_training_navi_pane_g

0x5d1d,	// (0x000a2c0b) hwr_training_navi_pane_t1

0x5d2b,	// (0x000a2c19) list_single_hwr_training_instruct_pane_ParamLimits

0x5d2b,	// (0x000a2c19) list_single_hwr_training_instruct_pane

0xd4af,	// (0x000aa39d) list_single_hwr_training_instruct_pane_t1

0xcbae,	// (0x000a9a9c) bg_frame_shadow_pane_g1

0xd4be,	// (0x000aa3ac) bg_frame_shadow_pane_g2

0xd4c6,	// (0x000aa3b4) bg_frame_shadow_pane_g3

0xd4ce,	// (0x000aa3bc) bg_frame_shadow_pane_g4

0xd4d6,	// (0x000aa3c4) bg_frame_shadow_pane_g5

0xd4de,	// (0x000aa3cc) bg_frame_shadow_pane_g6

0xd4e6,	// (0x000aa3d4) bg_frame_shadow_pane_g7

0xa94d,	// (0x000a783b) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000ac768) bg_frame_shadow_pane_g

0x9bd5,	// (0x000a6ac3) main_video_tele_dialer_pane

0x5d44,	// (0x000a2c32) aid_size_cell_video_keypad_ParamLimits

0x5d44,	// (0x000a2c32) aid_size_cell_video_keypad

0x5d54,	// (0x000a2c42) grid_video_dialer_keypad_pane_ParamLimits

0x5d54,	// (0x000a2c42) grid_video_dialer_keypad_pane

0x5d86,	// (0x000a2c74) video_down_pane_cp_ParamLimits

0x5d86,	// (0x000a2c74) video_down_pane_cp

0x5dae,	// (0x000a2c9c) cell_video_dialer_keypad_pane_ParamLimits

0x5dae,	// (0x000a2c9c) cell_video_dialer_keypad_pane

0xd4ee,	// (0x000aa3dc) bg_button_pane_cp08_ParamLimits

0xd4ee,	// (0x000aa3dc) bg_button_pane_cp08

0x5dc5,	// (0x000a2cb3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5dc5,	// (0x000a2cb3) cell_video_dialer_keypad_pane_g1

0x55bc,	// (0x000a24aa) mup3_rocker2_pane_ParamLimits

0x55bc,	// (0x000a24aa) mup3_rocker2_pane

0xcc6e,	// (0x000a9b5c) mup3_rocker2_pane_g1

0x4499,	// (0x000a1387) main_dialer2_pane

0x9bd5,	// (0x000a6ac3) main_mp4_pane

0x5e04,	// (0x000a2cf2) main_mp4_pane_g1_ParamLimits

0x5e04,	// (0x000a2cf2) main_mp4_pane_g1

0x5e12,	// (0x000a2d00) main_mp4_pane_g2_ParamLimits

0x5e12,	// (0x000a2d00) main_mp4_pane_g2

0x5e20,	// (0x000a2d0e) main_mp4_pane_g3_ParamLimits

0x5e20,	// (0x000a2d0e) main_mp4_pane_g3

0x5e73,	// (0x000a2d61) main_mp4_pane_g4_ParamLimits

0x5e73,	// (0x000a2d61) main_mp4_pane_g4

0x5e9b,	// (0x000a2d89) main_mp4_pane_g5_ParamLimits

0x5e9b,	// (0x000a2d89) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000ac788) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000ac788) main_mp4_pane_g

0x5eeb,	// (0x000a2dd9) main_mp4_pane_t1_ParamLimits

0x5eeb,	// (0x000a2dd9) main_mp4_pane_t1

0x5f47,	// (0x000a2e35) main_mp4_pane_t2_ParamLimits

0x5f47,	// (0x000a2e35) main_mp4_pane_t2

0xd4fa,	// (0x000aa3e8) main_mp4_pane_t3_ParamLimits

0xd4fa,	// (0x000aa3e8) main_mp4_pane_t3

0x5f99,	// (0x000a2e87) main_mp4_pane_t4_ParamLimits

0x5f99,	// (0x000a2e87) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000ac795) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000ac795) main_mp4_pane_t

0x5fd9,	// (0x000a2ec7) mp4_progress_pane_ParamLimits

0x5fd9,	// (0x000a2ec7) mp4_progress_pane

0x6023,	// (0x000a2f11) mp4_rocker_pane_ParamLimits

0x6023,	// (0x000a2f11) mp4_rocker_pane

0xd522,	// (0x000aa410) mp4_progress_pane_t1

0xd53b,	// (0x000aa429) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000ac79e) mp4_progress_pane_t

0xd554,	// (0x000aa442) mup_progress_pane_cp04

0xdb05,	// (0x000aa9f3) mp4_rocker_pane_g1

0x6045,	// (0x000a2f33) aid_cell_size_keypad2_ParamLimits

0x6045,	// (0x000a2f33) aid_cell_size_keypad2

0x6055,	// (0x000a2f43) dialer2_ne_pane_ParamLimits

0x6055,	// (0x000a2f43) dialer2_ne_pane

0x6061,	// (0x000a2f4f) grid_dialer2_keypad_pane_ParamLimits

0x6061,	// (0x000a2f4f) grid_dialer2_keypad_pane

0xdb0f,	// (0x000aa9fd) bg_popup_call_pane_cp07_ParamLimits

0xdb0f,	// (0x000aa9fd) bg_popup_call_pane_cp07

0x606f,	// (0x000a2f5d) dialer2_ne_pane_t1_ParamLimits

0x606f,	// (0x000a2f5d) dialer2_ne_pane_t1

0x6094,	// (0x000a2f82) cell_dialer2_keypad_pane_ParamLimits

0x6094,	// (0x000a2f82) cell_dialer2_keypad_pane

0xd572,	// (0x000aa460) bg_button_pane_pane_cp04_ParamLimits

0xd572,	// (0x000aa460) bg_button_pane_pane_cp04

0x60ab,	// (0x000a2f99) cell_dialer2_keypad_pane_g1_ParamLimits

0x60ab,	// (0x000a2f99) cell_dialer2_keypad_pane_g1

0x1fff,	// (0x0009eeed) aid_placing_vt_set_content_ParamLimits

0x1fff,	// (0x0009eeed) aid_placing_vt_set_content

0x2027,	// (0x0009ef15) aid_placing_vt_set_title_ParamLimits

0x2027,	// (0x0009ef15) aid_placing_vt_set_title

0x9bd5,	// (0x000a6ac3) main_image3_pane

0x6145,	// (0x000a3033) area_side_right_pane_cp01_ParamLimits

0x6145,	// (0x000a3033) area_side_right_pane_cp01

0x6174,	// (0x000a3062) main_image3_pane_g1_ParamLimits

0x6174,	// (0x000a3062) main_image3_pane_g1

0x6182,	// (0x000a3070) main_image3_pane_g2_ParamLimits

0x6182,	// (0x000a3070) main_image3_pane_g2

0x619b,	// (0x000a3089) main_image3_pane_g3_ParamLimits

0x619b,	// (0x000a3089) main_image3_pane_g3

0x61b4,	// (0x000a30a2) main_image3_pane_g4_ParamLimits

0x61b4,	// (0x000a30a2) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000ac7ad) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000ac7ad) main_image3_pane_g

0x61cd,	// (0x000a30bb) main_image3_pane_t1_ParamLimits

0x61cd,	// (0x000a30bb) main_image3_pane_t1

0x61f2,	// (0x000a30e0) main_image3_pane_t2_ParamLimits

0x61f2,	// (0x000a30e0) main_image3_pane_t2

0x6211,	// (0x000a30ff) main_image3_pane_t3_ParamLimits

0x6211,	// (0x000a30ff) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000ac7b6) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000ac7b6) main_image3_pane_t

0x0dee,	// (0x0009dcdc) grid_sctrl_middle_pane_cp01_ParamLimits

0x0dee,	// (0x0009dcdc) grid_sctrl_middle_pane_cp01

0x6272,	// (0x000a3160) cell_sctrl_middle_pane_cp01_ParamLimits

0x6272,	// (0x000a3160) cell_sctrl_middle_pane_cp01

0x6283,	// (0x000a3171) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6283,	// (0x000a3171) cell_sctrl_middle_pane_cp01_g1

0x9bd5,	// (0x000a6ac3) main_call4_pane

0x6290,	// (0x000a317e) aid_size_button_call4_ParamLimits

0x6290,	// (0x000a317e) aid_size_button_call4

0x62c2,	// (0x000a31b0) call4_windows_pane_ParamLimits

0x62c2,	// (0x000a31b0) call4_windows_pane

0x62de,	// (0x000a31cc) grid_call4_button_pane_ParamLimits

0x62de,	// (0x000a31cc) grid_call4_button_pane

0xd57e,	// (0x000aa46c) call4_windows_conf_pane

0x6302,	// (0x000a31f0) popup_call4_audio_first_window_ParamLimits

0x6302,	// (0x000a31f0) popup_call4_audio_first_window

0x632e,	// (0x000a321c) popup_call4_audio_second_window_ParamLimits

0x632e,	// (0x000a321c) popup_call4_audio_second_window

0xd5bb,	// (0x000aa4a9) popup_call4_audio_wait_window_ParamLimits

0xd5bb,	// (0x000aa4a9) popup_call4_audio_wait_window

0x6342,	// (0x000a3230) cell_call4_button_pane_ParamLimits

0x6342,	// (0x000a3230) cell_call4_button_pane

0x6365,	// (0x000a3253) bg_button_pane_cp09_ParamLimits

0x6365,	// (0x000a3253) bg_button_pane_cp09

0x6371,	// (0x000a325f) cell_call4_button_pane_g1_ParamLimits

0x6371,	// (0x000a325f) cell_call4_button_pane_g1

0x637e,	// (0x000a326c) cell_call4_button_pane_t1_ParamLimits

0x637e,	// (0x000a326c) cell_call4_button_pane_t1

0xd603,	// (0x000aa4f1) popup_call4_audio_conf_window_ParamLimits

0xd603,	// (0x000aa4f1) popup_call4_audio_conf_window

0x55f1,	// (0x000a24df) mup3_progress_pane_t1_ParamLimits

0x5610,	// (0x000a24fe) mup3_progress_pane_t2_ParamLimits

0xcf19,	// (0x000a9e07) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000ac68a) mup3_progress_pane_t_ParamLimits

0xcf36,	// (0x000a9e24) mup_progress_pane_cp03_ParamLimits

0x5b0e,	// (0x000a29fc) mup3_control_keys_pane_g4_copy1

0x6007,	// (0x000a2ef5) mp4_rocker2_pane_ParamLimits

0x6007,	// (0x000a2ef5) mp4_rocker2_pane

0xd61d,	// (0x000aa50b) mp4_rocker2_pane_g1

0xd625,	// (0x000aa513) mp4_rocker2_pane_g2

0x6390,	// (0x000a327e) mp4_rocker2_pane_g3

0x6398,	// (0x000a3286) mp4_rocker2_pane_g4

0x63a0,	// (0x000a328e) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000ac7bf) mp4_rocker2_pane_g

0x9bd5,	// (0x000a6ac3) main_camera4_pane

0x9bd5,	// (0x000a6ac3) main_video4_pane

0x5d62,	// (0x000a2c50) main_video_tele_dialer_pane_t1_ParamLimits

0x5d62,	// (0x000a2c50) main_video_tele_dialer_pane_t1

0x5d74,	// (0x000a2c62) main_video_tele_dialer_pane_t2_ParamLimits

0x5d74,	// (0x000a2c62) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000ac779) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000ac779) main_video_tele_dialer_pane_t

0x63c0,	// (0x000a32ae) cam4_autofocus_pane_ParamLimits

0x63c0,	// (0x000a32ae) cam4_autofocus_pane

0x63d8,	// (0x000a32c6) cam4_image_uncrop_pane_ParamLimits

0x63d8,	// (0x000a32c6) cam4_image_uncrop_pane

0x63f1,	// (0x000a32df) cam4_indicators_pane_ParamLimits

0x63f1,	// (0x000a32df) cam4_indicators_pane

0x640d,	// (0x000a32fb) main_camera4_pane_g1_ParamLimits

0x640d,	// (0x000a32fb) main_camera4_pane_g1

0x6419,	// (0x000a3307) main_camera4_pane_g2_ParamLimits

0x6419,	// (0x000a3307) main_camera4_pane_g2

0x6419,	// (0x000a3307) main_camera4_pane_g3_ParamLimits

0x6419,	// (0x000a3307) main_camera4_pane_g3

0x6425,	// (0x000a3313) main_camera4_pane_g4_ParamLimits

0x6425,	// (0x000a3313) main_camera4_pane_g4

0x6431,	// (0x000a331f) main_camera4_pane_g5_ParamLimits

0x6431,	// (0x000a331f) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000ac7ca) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000ac7ca) main_camera4_pane_g

0x644b,	// (0x000a3339) main_camera4_pane_t1_ParamLimits

0x644b,	// (0x000a3339) main_camera4_pane_t1

0x6495,	// (0x000a3383) bg_tb_trans_pane_cp06

0x64ab,	// (0x000a3399) cam4_indicators_pane_g1

0x64bc,	// (0x000a33aa) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000ac7e5) cam4_indicators_pane_g

0x64d4,	// (0x000a33c2) cam4_indicators_pane_t1

0x64fe,	// (0x000a33ec) main_video4_pane_g1_ParamLimits

0x64fe,	// (0x000a33ec) main_video4_pane_g1

0x650a,	// (0x000a33f8) main_video4_pane_g2_ParamLimits

0x650a,	// (0x000a33f8) main_video4_pane_g2

0x6516,	// (0x000a3404) main_video4_pane_g3_ParamLimits

0x6516,	// (0x000a3404) main_video4_pane_g3

0x6522,	// (0x000a3410) main_video4_pane_g4_ParamLimits

0x6522,	// (0x000a3410) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000ac7ec) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000ac7ec) main_video4_pane_g

0x6544,	// (0x000a3432) vid4_indicators_pane_ParamLimits

0x6544,	// (0x000a3432) vid4_indicators_pane

0x6563,	// (0x000a3451) video4_image_uncrop_cif_pane_ParamLimits

0x6563,	// (0x000a3451) video4_image_uncrop_cif_pane

0x6572,	// (0x000a3460) video4_image_uncrop_nhd_pane_ParamLimits

0x6572,	// (0x000a3460) video4_image_uncrop_nhd_pane

0x63d8,	// (0x000a32c6) video4_image_uncrop_vga_pane_ParamLimits

0x63d8,	// (0x000a32c6) video4_image_uncrop_vga_pane

0x6581,	// (0x000a346f) bg_tb_trans_pane_cp07

0x6599,	// (0x000a3487) vid4_indicators_pane_g1

0x65af,	// (0x000a349d) vid4_indicators_pane_g2

0x65c3,	// (0x000a34b1) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000ac7f7) vid4_indicators_pane_g

0x65f4,	// (0x000a34e2) vid4_indicators_pane_t1

0x660b,	// (0x000a34f9) cam4_autofocus_pane_g1

0x6613,	// (0x000a3501) cam4_autofocus_pane_g2

0x661b,	// (0x000a3509) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000ac802) cam4_autofocus_pane_g

0x6623,	// (0x000a3511) cam4_autofocus_pane_g3_copy1

0x5d92,	// (0x000a2c80) video_down_pane_cp_t1

0x5da0,	// (0x000a2c8e) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000ac77e) video_down_pane_cp_t

0x0dee,	// (0x0009dcdc) popup_vitu2_window_ParamLimits

0x0dee,	// (0x0009dcdc) popup_vitu2_window

0x662b,	// (0x000a3519) aid_size_cell2_itu2_ParamLimits

0x662b,	// (0x000a3519) aid_size_cell2_itu2

0x664d,	// (0x000a353b) aid_size_cell_itu2_ParamLimits

0x664d,	// (0x000a353b) aid_size_cell_itu2

0x6693,	// (0x000a3581) bg_popup_window_pane_cp09_ParamLimits

0x6693,	// (0x000a3581) bg_popup_window_pane_cp09

0x66a1,	// (0x000a358f) field_vitu2_entry_pane_ParamLimits

0x66a1,	// (0x000a358f) field_vitu2_entry_pane

0x66c1,	// (0x000a35af) grid_vitu2_function_pane_ParamLimits

0x66c1,	// (0x000a35af) grid_vitu2_function_pane

0x6705,	// (0x000a35f3) grid_vitu2_itu_pane_ParamLimits

0x6705,	// (0x000a35f3) grid_vitu2_itu_pane

0x6781,	// (0x000a366f) cell_vitu2_itu_pane_ParamLimits

0x6781,	// (0x000a366f) cell_vitu2_itu_pane

0x6798,	// (0x000a3686) cell_vitu2_function_pane_ParamLimits

0x6798,	// (0x000a3686) cell_vitu2_function_pane

0xd62d,	// (0x000aa51b) bg_popup_call_pane_cp08_ParamLimits

0xd62d,	// (0x000aa51b) bg_popup_call_pane_cp08

0xd644,	// (0x000aa532) field_vitu2_entry_pane_g1

0xd664,	// (0x000aa552) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000ac809) field_vitu2_entry_pane_g

0x67dc,	// (0x000a36ca) field_vitu2_entry_pane_t1_ParamLimits

0x67dc,	// (0x000a36ca) field_vitu2_entry_pane_t1

0xa268,	// (0x000a7156) field_vitu2_entry_pane_t2_ParamLimits

0xa268,	// (0x000a7156) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000ac810) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000ac810) field_vitu2_entry_pane_t

0x680a,	// (0x000a36f8) bg_button_pane_cp010_ParamLimits

0x680a,	// (0x000a36f8) bg_button_pane_cp010

0x6818,	// (0x000a3706) cell_vitu2_itu_pane_g1

0x6838,	// (0x000a3726) cell_vitu2_itu_pane_t1_ParamLimits

0x6838,	// (0x000a3726) cell_vitu2_itu_pane_t1

0x0aa0,	// (0x0009d98e) cell_vitu2_itu_pane_t2_ParamLimits

0x0aa0,	// (0x0009d98e) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000ac81a) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000ac81a) cell_vitu2_itu_pane_t

0x6581,	// (0x000a346f) bg_button_pane_cp011

0x6884,	// (0x000a3772) cell_vitu2_function_pane_g1

0x9bd5,	// (0x000a6ac3) main_myfav_hc_pane

0x6253,	// (0x000a3141) popup_image3_note_pane_ParamLimits

0x6253,	// (0x000a3141) popup_image3_note_pane

0x6261,	// (0x000a314f) popup_image3_tool_bar_pane_ParamLimits

0x6261,	// (0x000a314f) popup_image3_tool_bar_pane

0x0b16,	// (0x0009da04) cell_vitu2_itu_pane_t3_ParamLimits

0x0b16,	// (0x0009da04) cell_vitu2_itu_pane_t3

0x9bd5,	// (0x000a6ac3) bg_popup_trans_pane

0xd686,	// (0x000aa574) grid_image3_tool_bar_pane

0xd690,	// (0x000aa57e) bg_popup_trans_pane_g1

0xaca1,	// (0x000a7b8f) bg_popup_trans_pane_g2

0xd698,	// (0x000aa586) bg_popup_trans_pane_g3

0xd6a0,	// (0x000aa58e) bg_popup_trans_pane_g4

0xd6a8,	// (0x000aa596) bg_popup_trans_pane_g5

0xd6b0,	// (0x000aa59e) bg_popup_trans_pane_g6

0xd6b8,	// (0x000aa5a6) bg_popup_trans_pane_g7

0xd6c0,	// (0x000aa5ae) bg_popup_trans_pane_g8

0xac81,	// (0x000a7b6f) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000ac821) bg_popup_trans_pane_g

0xd6c8,	// (0x000aa5b6) cell_image3_tool_bar_pane_ParamLimits

0xd6c8,	// (0x000aa5b6) cell_image3_tool_bar_pane

0xcc6e,	// (0x000a9b5c) cell_image3_tool_bar_pane_g1

0x9bd5,	// (0x000a6ac3) bg_popup_trans_pane_cp1

0xd6de,	// (0x000aa5cc) popup_image3_note_pane_t1

0xd6ec,	// (0x000aa5da) popup_image3_note_pane_t2

0xd6fa,	// (0x000aa5e8) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000ac834) popup_image3_note_pane_t

0xd70a,	// (0x000aa5f8) popup_image3_note_pane_t3_copy1

0x6898,	// (0x000a3786) bg_myfav_hc_instruction_pane_ParamLimits

0x6898,	// (0x000a3786) bg_myfav_hc_instruction_pane

0x68b0,	// (0x000a379e) cell_myfav_contact_pane_ParamLimits

0x68b0,	// (0x000a379e) cell_myfav_contact_pane

0x68ca,	// (0x000a37b8) cell_myfav_contact_pane_cp1_ParamLimits

0x68ca,	// (0x000a37b8) cell_myfav_contact_pane_cp1

0x68e2,	// (0x000a37d0) cell_myfav_contact_pane_cp2_ParamLimits

0x68e2,	// (0x000a37d0) cell_myfav_contact_pane_cp2

0x68fa,	// (0x000a37e8) cell_myfav_contact_pane_cp3_ParamLimits

0x68fa,	// (0x000a37e8) cell_myfav_contact_pane_cp3

0x6911,	// (0x000a37ff) cell_myfav_contact_pane_cp4_ParamLimits

0x6911,	// (0x000a37ff) cell_myfav_contact_pane_cp4

0x6927,	// (0x000a3815) cell_myfav_contact_pane_cp5_ParamLimits

0x6927,	// (0x000a3815) cell_myfav_contact_pane_cp5

0x693b,	// (0x000a3829) cell_myfav_contact_pane_cp6_ParamLimits

0x693b,	// (0x000a3829) cell_myfav_contact_pane_cp6

0x694f,	// (0x000a383d) cell_myfav_contact_pane_cp7_ParamLimits

0x694f,	// (0x000a383d) cell_myfav_contact_pane_cp7

0xd718,	// (0x000aa606) listscroll_gen_pane_cp05

0x6967,	// (0x000a3855) main_myfav_hc_pane_g1_ParamLimits

0x6967,	// (0x000a3855) main_myfav_hc_pane_g1

0x6981,	// (0x000a386f) main_myfav_hc_pane_g2_ParamLimits

0x6981,	// (0x000a386f) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000ac83b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000ac83b) main_myfav_hc_pane_g

0x69b3,	// (0x000a38a1) main_myfav_hc_pane_t1_ParamLimits

0x69b3,	// (0x000a38a1) main_myfav_hc_pane_t1

0xd721,	// (0x000aa60f) main_myfav_hc_pane_t2_ParamLimits

0xd721,	// (0x000aa60f) main_myfav_hc_pane_t2

0xd733,	// (0x000aa621) main_myfav_hc_pane_t3_ParamLimits

0xd733,	// (0x000aa621) main_myfav_hc_pane_t3

0x69ca,	// (0x000a38b8) main_myfav_hc_pane_t4_ParamLimits

0x69ca,	// (0x000a38b8) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000ac842) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000ac842) main_myfav_hc_pane_t

0xcc6e,	// (0x000a9b5c) bg_myfav_hc_instruction_pane_g1

0xd745,	// (0x000aa633) cell_myfav_contact_pane_g1_ParamLimits

0xd745,	// (0x000aa633) cell_myfav_contact_pane_g1

0xd745,	// (0x000aa633) cell_myfav_contact_pane_g2_ParamLimits

0xd745,	// (0x000aa633) cell_myfav_contact_pane_g2

0xd751,	// (0x000aa63f) cell_myfav_contact_pane_g3_ParamLimits

0xd751,	// (0x000aa63f) cell_myfav_contact_pane_g3

0xcf03,	// (0x000a9df1) cell_myfav_contact_pane_g4_ParamLimits

0xcf03,	// (0x000a9df1) cell_myfav_contact_pane_g4

0xd75e,	// (0x000aa64c) cell_myfav_contact_pane_g5_ParamLimits

0xd75e,	// (0x000aa64c) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000ac84d) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000ac84d) cell_myfav_contact_pane_g

0x699b,	// (0x000a3889) main_myfav_hc_pane_g3_ParamLimits

0x699b,	// (0x000a3889) main_myfav_hc_pane_g3

0x0d00,	// (0x0009dbee) popup_adpt_find_window

0x69f4,	// (0x000a38e2) afind_page_pane_ParamLimits

0x69f4,	// (0x000a38e2) afind_page_pane

0x6a01,	// (0x000a38ef) aid_size_cell_afind_ParamLimits

0x6a01,	// (0x000a38ef) aid_size_cell_afind

0x6a1b,	// (0x000a3909) bg_popup_sub_pane_cp09_ParamLimits

0x6a1b,	// (0x000a3909) bg_popup_sub_pane_cp09

0x6a28,	// (0x000a3916) find_pane_cp01_ParamLimits

0x6a28,	// (0x000a3916) find_pane_cp01

0xd76a,	// (0x000aa658) grid_afind_control_pane_ParamLimits

0xd76a,	// (0x000aa658) grid_afind_control_pane

0x6a35,	// (0x000a3923) grid_afind_pane_ParamLimits

0x6a35,	// (0x000a3923) grid_afind_pane

0x6a51,	// (0x000a393f) cell_afind_pane_ParamLimits

0x6a51,	// (0x000a393f) cell_afind_pane

0xcc6e,	// (0x000a9b5c) afind_page_pane_g1

0x6a9b,	// (0x000a3989) afind_page_pane_g2

0x6aa4,	// (0x000a3992) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000ac858) afind_page_pane_g

0x6aad,	// (0x000a399b) afind_page_pane_t1

0xd77e,	// (0x000aa66c) cell_afind_grid_control_pane_ParamLimits

0xd77e,	// (0x000aa66c) cell_afind_grid_control_pane

0xd572,	// (0x000aa460) bg_button_pane_cp69_ParamLimits

0xd572,	// (0x000aa460) bg_button_pane_cp69

0x6acd,	// (0x000a39bb) cell_afind_pane_g1_ParamLimits

0x6acd,	// (0x000a39bb) cell_afind_pane_g1

0x6ada,	// (0x000a39c8) cell_afind_pane_t1_ParamLimits

0x6ada,	// (0x000a39c8) cell_afind_pane_t1

0xaa8a,	// (0x000a7978) bg_button_pane_cp72

0xd78d,	// (0x000aa67b) cell_afind_grid_control_pane_g1

0x4014,	// (0x000a0f02) aid_image_placing_area_ParamLimits

0x4014,	// (0x000a0f02) aid_image_placing_area

0xd23e,	// (0x000aa12c) field_vitu_entry_pane_g1_ParamLimits

0xd23e,	// (0x000aa12c) field_vitu_entry_pane_g1

0xd24a,	// (0x000aa138) field_vitu_entry_pane_g2_ParamLimits

0xd24a,	// (0x000aa138) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000ac709) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000ac709) field_vitu_entry_pane_g

0x5b98,	// (0x000a2a86) cell_vitu_itu_pane_g1_ParamLimits

0x5be8,	// (0x000a2ad6) cell_vitu_itu_pane_t3_ParamLimits

0x5be8,	// (0x000a2ad6) cell_vitu_itu_pane_t3

0xd522,	// (0x000aa410) mp4_progress_pane_t1_ParamLimits

0xd53b,	// (0x000aa429) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000ac79e) mp4_progress_pane_t_ParamLimits

0xd554,	// (0x000aa442) mup_progress_pane_cp04_ParamLimits

0x69de,	// (0x000a38cc) main_myfav_hc_pane_t5_ParamLimits

0x69de,	// (0x000a38cc) main_myfav_hc_pane_t5

0x0bbc,	// (0x0009daaa) aid_zoom_text_primary

0x0d00,	// (0x0009dbee) popup_adpt_find_window_ParamLimits

0xa25a,	// (0x000a7148) main_cam_set_pane

0x63ff,	// (0x000a32ed) cam4_zoom_pane_ParamLimits

0x63ff,	// (0x000a32ed) cam4_zoom_pane

0x6aec,	// (0x000a39da) main_cam_set_pane_g1_ParamLimits

0x6aec,	// (0x000a39da) main_cam_set_pane_g1

0x6afa,	// (0x000a39e8) main_cam_set_pane_g2_ParamLimits

0x6afa,	// (0x000a39e8) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000ac85f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000ac85f) main_cam_set_pane_g

0x6b06,	// (0x000a39f4) main_cam_set_pane_t1_ParamLimits

0x6b06,	// (0x000a39f4) main_cam_set_pane_t1

0x6b22,	// (0x000a3a10) main_cset_listscroll_pane_ParamLimits

0x6b22,	// (0x000a3a10) main_cset_listscroll_pane

0x6b51,	// (0x000a3a3f) main_cset_slider_pane_ParamLimits

0x6b51,	// (0x000a3a3f) main_cset_slider_pane

0xd79e,	// (0x000aa68c) main_cset_list_pane_ParamLimits

0xd79e,	// (0x000aa68c) main_cset_list_pane

0xd7ae,	// (0x000aa69c) scroll_pane_cp028

0x6b72,	// (0x000a3a60) aid_area_touch_slider

0x6b8e,	// (0x000a3a7c) cset_slider_pane

0x6bb8,	// (0x000a3aa6) main_cset_slider_pane_g1

0x6bcd,	// (0x000a3abb) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000ac864) main_cset_slider_pane_g

0xd7e7,	// (0x000aa6d5) main_cset_slider_pane_t1

0x6c89,	// (0x000a3b77) main_cset_slider_pane_t2

0x6ca3,	// (0x000a3b91) main_cset_slider_pane_t3

0x6cbd,	// (0x000a3bab) main_cset_slider_pane_t4

0x6cd7,	// (0x000a3bc5) main_cset_slider_pane_t5

0x6cf1,	// (0x000a3bdf) main_cset_slider_pane_t6

0x6d06,	// (0x000a3bf4) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000ac889) main_cset_slider_pane_t

0x6e0a,	// (0x000a3cf8) cset_list_set_pane_ParamLimits

0x6e0a,	// (0x000a3cf8) cset_list_set_pane

0x6e1b,	// (0x000a3d09) aid_position_infowindow_above

0x6e23,	// (0x000a3d11) aid_position_infowindow_below

0x6e2b,	// (0x000a3d19) cset_list_set_pane_g1_ParamLimits

0x6e2b,	// (0x000a3d19) cset_list_set_pane_g1

0x6e37,	// (0x000a3d25) cset_list_set_pane_g3_ParamLimits

0x6e37,	// (0x000a3d25) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000ac8a8) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000ac8a8) cset_list_set_pane_g

0x6e46,	// (0x000a3d34) cset_list_set_pane_t1_ParamLimits

0x6e46,	// (0x000a3d34) cset_list_set_pane_t1

0xa25a,	// (0x000a7148) list_highlight_pane_cp021_ParamLimits

0xa25a,	// (0x000a7148) list_highlight_pane_cp021

0xb53e,	// (0x000a842c) cset_slider_pane_g1

0xb550,	// (0x000a843e) cset_slider_pane_g2

0xb547,	// (0x000a8435) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000ac8ad) cset_slider_pane_g

0x6e5b,	// (0x000a3d49) aid_area_touch_cam4_zoom

0x6e63,	// (0x000a3d51) cam4_zoom_cont_pane

0x6e6b,	// (0x000a3d59) cam4_zoom_pane_g1

0x6e73,	// (0x000a3d61) cam4_zoom_pane_g2

0x6e7b,	// (0x000a3d69) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000ac8b4) cam4_zoom_pane_g

0x6e83,	// (0x000a3d71) cam4_zoom_cont_pane_g1

0x6e8c,	// (0x000a3d7a) cam4_zoom_cont_pane_g2

0x6e95,	// (0x000a3d83) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000ac8bb) cam4_zoom_cont_pane_g

0x62aa,	// (0x000a3198) call4_image_pane_ParamLimits

0x62aa,	// (0x000a3198) call4_image_pane

0xd57e,	// (0x000aa46c) call4_windows_conf_pane_ParamLimits

0xd599,	// (0x000aa487) popup_call4_audio_in_window_ParamLimits

0xd599,	// (0x000aa487) popup_call4_audio_in_window

0x9bd5,	// (0x000a6ac3) bg_popup_call2_act_pane_cp02

0xd5fb,	// (0x000aa4e9) call4_list_conf_pane

0xcc6e,	// (0x000a9b5c) call4_image_pane_g1

0xcc6e,	// (0x000a9b5c) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000ac5ca) call4_image_pane_g

0xd887,	// (0x000aa775) list_single_graphic_popup_conf4_pane_ParamLimits

0xd887,	// (0x000aa775) list_single_graphic_popup_conf4_pane

0x9bd5,	// (0x000a6ac3) list_highlight_pane_cp022

0xd89c,	// (0x000aa78a) list_single_graphic_popup_conf4_pane_g1

0xb240,	// (0x000a812e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000ac8c2) list_single_graphic_popup_conf4_pane_g

0xd8a4,	// (0x000aa792) list_single_graphic_popup_conf4_pane_t1

0x2181,	// (0x0009f06f) popup_vtel_slider_window_ParamLimits

0x2181,	// (0x0009f06f) popup_vtel_slider_window

0xd560,	// (0x000aa44e) dialer2_ne_pane_t2_ParamLimits

0xd560,	// (0x000aa44e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000ac7a3) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000ac7a3) dialer2_ne_pane_t

0xa25a,	// (0x000a7148) bg_popup_sub_pane_cp010_ParamLimits

0xa25a,	// (0x000a7148) bg_popup_sub_pane_cp010

0x6e9e,	// (0x000a3d8c) popup_vtel_slider_window_g1_ParamLimits

0x6e9e,	// (0x000a3d8c) popup_vtel_slider_window_g1

0x6eaa,	// (0x000a3d98) popup_vtel_slider_window_g2_ParamLimits

0x6eaa,	// (0x000a3d98) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000ac8c7) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000ac8c7) popup_vtel_slider_window_g

0x6ef2,	// (0x000a3de0) vtel_slider_pane_ParamLimits

0x6ef2,	// (0x000a3de0) vtel_slider_pane

0x6f01,	// (0x000a3def) vtel_slider_pane_g1_ParamLimits

0x6f01,	// (0x000a3def) vtel_slider_pane_g1

0x6f0e,	// (0x000a3dfc) vtel_slider_pane_g2_ParamLimits

0x6f0e,	// (0x000a3dfc) vtel_slider_pane_g2

0x6f1b,	// (0x000a3e09) vtel_slider_pane_g3_ParamLimits

0x6f1b,	// (0x000a3e09) vtel_slider_pane_g3

0x6f01,	// (0x000a3def) vtel_slider_pane_g4_ParamLimits

0x6f01,	// (0x000a3def) vtel_slider_pane_g4

0x6f28,	// (0x000a3e16) vtel_slider_pane_g5_ParamLimits

0x6f28,	// (0x000a3e16) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000ac8d0) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000ac8d0) vtel_slider_pane_g

0xa25a,	// (0x000a7148) main_gallery2_pane

0x6673,	// (0x000a3561) aid_size_row_itut2_dropdow_list_ParamLimits

0x6673,	// (0x000a3561) aid_size_row_itut2_dropdow_list

0x66e3,	// (0x000a35d1) grid_vitu2_function_top_pane_ParamLimits

0x66e3,	// (0x000a35d1) grid_vitu2_function_top_pane

0x6739,	// (0x000a3627) popup_vitu2_dropdown_list_window_ParamLimits

0x6739,	// (0x000a3627) popup_vitu2_dropdown_list_window

0x675d,	// (0x000a364b) popup_vitu2_match_list_window

0x6f35,	// (0x000a3e23) cell_vitu2_function_top_pane_ParamLimits

0x6f35,	// (0x000a3e23) cell_vitu2_function_top_pane

0x6f57,	// (0x000a3e45) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f57,	// (0x000a3e45) cell_vitu2_function_top_pane_cp01

0x6f73,	// (0x000a3e61) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f73,	// (0x000a3e61) cell_vitu2_function_top_wide_pane

0x6581,	// (0x000a346f) bg_button_pane_cp012

0x6f8f,	// (0x000a3e7d) cell_vitu2_function_top_pane_g1

0x6fa3,	// (0x000a3e91) bg_button_pane_cp013_ParamLimits

0x6fa3,	// (0x000a3e91) bg_button_pane_cp013

0x6fbf,	// (0x000a3ead) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6fbf,	// (0x000a3ead) cell_vitu2_function_top_wide_pane_g1

0x6fd7,	// (0x000a3ec5) bg_popup_sub_pane_cp20

0x6fe5,	// (0x000a3ed3) list_vitu2_match_list_pane

0xd690,	// (0x000aa57e) bg_popup_sub_pane_cp20_g1

0xd698,	// (0x000aa586) bg_popup_sub_pane_cp20_g2

0xaca1,	// (0x000a7b8f) bg_popup_sub_pane_cp20_g3

0xd6a0,	// (0x000aa58e) bg_popup_sub_pane_cp20_g4

0xac81,	// (0x000a7b6f) bg_popup_sub_pane_cp20_g5

0xd8ba,	// (0x000aa7a8) bg_popup_sub_pane_cp20_g6

0xd6b0,	// (0x000aa59e) bg_popup_sub_pane_cp20_g7

0xd6b8,	// (0x000aa5a6) bg_popup_sub_pane_cp20_g8

0xd6c0,	// (0x000aa5ae) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000ac8db) bg_popup_sub_pane_cp20_g

0x6ffd,	// (0x000a3eeb) list_vitu2_match_list_item_pane_ParamLimits

0x6ffd,	// (0x000a3eeb) list_vitu2_match_list_item_pane

0x700f,	// (0x000a3efd) list_vitu2_match_list_item_pane_t1

0x115a,	// (0x0009e048) bg_popup_sub_pane_cp21

0x704d,	// (0x000a3f3b) grid_vitu2_dropdown_list_pane

0x7055,	// (0x000a3f43) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7055,	// (0x000a3f43) cell_vitu2_dropdown_list_char_pane

0x707a,	// (0x000a3f68) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x707a,	// (0x000a3f68) cell_vitu2_dropdown_list_ctrl_pane

0xd8c2,	// (0x000aa7b0) cell_vitu2_dropdown_list_char_pane_g1

0xd8cb,	// (0x000aa7b9) cell_vitu2_dropdown_list_char_pane_g2

0xd8d4,	// (0x000aa7c2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000ac8f8) cell_vitu2_dropdown_list_char_pane_g

0x70a8,	// (0x000a3f96) cell_vitu2_dropdown_list_char_pane_t1

0x70b6,	// (0x000a3fa4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70b6,	// (0x000a3fa4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70c6,	// (0x000a3fb4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70c6,	// (0x000a3fb4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70d7,	// (0x000a3fc5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70d7,	// (0x000a3fc5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70e7,	// (0x000a3fd5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70e7,	// (0x000a3fd5) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6495,	// (0x000a3383) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6495,	// (0x000a3383) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000ac8ff) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000ac8ff) cell_vitu2_dropdown_list_ctrl_pane_g

0x7100,	// (0x000a3fee) aid_size_cell_gallery2_ParamLimits

0x7100,	// (0x000a3fee) aid_size_cell_gallery2

0x711a,	// (0x000a4008) grid_gallery2_pane_ParamLimits

0x711a,	// (0x000a4008) grid_gallery2_pane

0x5a1d,	// (0x000a290b) scroll_pane_cp029_ParamLimits

0x5a1d,	// (0x000a290b) scroll_pane_cp029

0x7131,	// (0x000a401f) cell_gallery2_pane_ParamLimits

0x7131,	// (0x000a401f) cell_gallery2_pane

0xd8dd,	// (0x000aa7cb) cell_gallery2_pane_g2

0x717d,	// (0x000a406b) cell_gallery2_pane_g3

0xd8e5,	// (0x000aa7d3) cell_gallery2_pane_g4

0xd8ed,	// (0x000aa7db) cell_gallery2_pane_g5

0xaa38,	// (0x000a7926) grid_highlight_pane_cp10

0x675d,	// (0x000a364b) popup_vitu2_match_list_window_ParamLimits

0x6771,	// (0x000a365f) popup_vitu2_query_window_ParamLimits

0x6771,	// (0x000a365f) popup_vitu2_query_window

0x115a,	// (0x0009e048) bg_vitu2_candi_button_pane

0xd8c2,	// (0x000aa7b0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8cb,	// (0x000aa7b9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8d4,	// (0x000aa7c2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7185,	// (0x000a4073) bg_button_pane_cp015

0x7197,	// (0x000a4085) bg_button_pane_cp016

0x71aa,	// (0x000a4098) bg_button_pane_cp017

0xc81d,	// (0x000a970b) bg_popup_sub_pane_cp22

0xd8f5,	// (0x000aa7e3) popup_vitu2_query_window_g1

0x71ef,	// (0x000a40dd) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000ac90a) popup_vitu2_query_window_g

0x720c,	// (0x000a40fa) popup_vitu2_query_window_t1_ParamLimits

0x720c,	// (0x000a40fa) popup_vitu2_query_window_t1

0x723f,	// (0x000a412d) popup_vitu2_query_window_t2_ParamLimits

0x723f,	// (0x000a412d) popup_vitu2_query_window_t2

0x7251,	// (0x000a413f) popup_vitu2_query_window_t3_ParamLimits

0x7251,	// (0x000a413f) popup_vitu2_query_window_t3

0x7279,	// (0x000a4167) popup_vitu2_query_window_t4_ParamLimits

0x7279,	// (0x000a4167) popup_vitu2_query_window_t4

0x729c,	// (0x000a418a) popup_vitu2_query_window_t5_ParamLimits

0x729c,	// (0x000a418a) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000ac911) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000ac911) popup_vitu2_query_window_t

0xd796,	// (0x000aa684) main_cset_text_pane

0x6b72,	// (0x000a3a60) aid_area_touch_slider_ParamLimits

0x6b8e,	// (0x000a3a7c) cset_slider_pane_ParamLimits

0x6bb8,	// (0x000a3aa6) main_cset_slider_pane_g1_ParamLimits

0x6bcd,	// (0x000a3abb) main_cset_slider_pane_g2_ParamLimits

0xd7b7,	// (0x000aa6a5) main_cset_slider_pane_g3_ParamLimits

0xd7b7,	// (0x000aa6a5) main_cset_slider_pane_g3

0x6be2,	// (0x000a3ad0) main_cset_slider_pane_g4_ParamLimits

0x6be2,	// (0x000a3ad0) main_cset_slider_pane_g4

0x6bf1,	// (0x000a3adf) main_cset_slider_pane_g5_ParamLimits

0x6bf1,	// (0x000a3adf) main_cset_slider_pane_g5

0x6bfd,	// (0x000a3aeb) main_cset_slider_pane_g6_ParamLimits

0x6bfd,	// (0x000a3aeb) main_cset_slider_pane_g6

0xf976,	// (0x000ac864) main_cset_slider_pane_g_ParamLimits

0xd7e7,	// (0x000aa6d5) main_cset_slider_pane_t1_ParamLimits

0x6c89,	// (0x000a3b77) main_cset_slider_pane_t2_ParamLimits

0x6ca3,	// (0x000a3b91) main_cset_slider_pane_t3_ParamLimits

0x6cbd,	// (0x000a3bab) main_cset_slider_pane_t4_ParamLimits

0x6cd7,	// (0x000a3bc5) main_cset_slider_pane_t5_ParamLimits

0x6cf1,	// (0x000a3bdf) main_cset_slider_pane_t6_ParamLimits

0x6d06,	// (0x000a3bf4) main_cset_slider_pane_t7_ParamLimits

0x6d30,	// (0x000a3c1e) main_cset_slider_pane_t8_ParamLimits

0x6d30,	// (0x000a3c1e) main_cset_slider_pane_t8

0x6d58,	// (0x000a3c46) main_cset_slider_pane_t9_ParamLimits

0x6d58,	// (0x000a3c46) main_cset_slider_pane_t9

0x6d80,	// (0x000a3c6e) main_cset_slider_pane_t10_ParamLimits

0x6d80,	// (0x000a3c6e) main_cset_slider_pane_t10

0x6da8,	// (0x000a3c96) main_cset_slider_pane_t11_ParamLimits

0x6da8,	// (0x000a3c96) main_cset_slider_pane_t11

0x6dd0,	// (0x000a3cbe) main_cset_slider_pane_t12_ParamLimits

0x6dd0,	// (0x000a3cbe) main_cset_slider_pane_t12

0x6ded,	// (0x000a3cdb) main_cset_slider_pane_t13_ParamLimits

0x6ded,	// (0x000a3cdb) main_cset_slider_pane_t13

0xf99b,	// (0x000ac889) main_cset_slider_pane_t_ParamLimits

0x9bd5,	// (0x000a6ac3) bg_popup_sub_pane_cp011

0xd901,	// (0x000aa7ef) main_cset_text_pane_g1

0xd909,	// (0x000aa7f7) main_cset_text_pane_t1

0xd917,	// (0x000aa805) main_cset_text_pane_t2

0xd925,	// (0x000aa813) main_cset_text_pane_t3

0xd933,	// (0x000aa821) main_cset_text_pane_t4

0xd941,	// (0x000aa82f) main_cset_text_pane_t5

0xd94f,	// (0x000aa83d) main_cset_text_pane_t6

0xd95d,	// (0x000aa84b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000ac920) main_cset_text_pane_t

0x9bd5,	// (0x000a6ac3) main_cam4_burst_pane

0x9bd5,	// (0x000a6ac3) main_cam5_pane

0x6abb,	// (0x000a39a9) bg_button_pane_cp019

0x6ac4,	// (0x000a39b2) bg_button_pane_cp020

0xd7c3,	// (0x000aa6b1) main_cset_slider_pane_g7_ParamLimits

0xd7c3,	// (0x000aa6b1) main_cset_slider_pane_g7

0xd7cf,	// (0x000aa6bd) main_cset_slider_pane_g8_ParamLimits

0xd7cf,	// (0x000aa6bd) main_cset_slider_pane_g8

0x6c11,	// (0x000a3aff) main_cset_slider_pane_g9_ParamLimits

0x6c11,	// (0x000a3aff) main_cset_slider_pane_g9

0x6c1d,	// (0x000a3b0b) main_cset_slider_pane_g10_ParamLimits

0x6c1d,	// (0x000a3b0b) main_cset_slider_pane_g10

0x6c29,	// (0x000a3b17) main_cset_slider_pane_g11_ParamLimits

0x6c29,	// (0x000a3b17) main_cset_slider_pane_g11

0x6c35,	// (0x000a3b23) main_cset_slider_pane_g12_ParamLimits

0x6c35,	// (0x000a3b23) main_cset_slider_pane_g12

0x6c41,	// (0x000a3b2f) main_cset_slider_pane_g13_ParamLimits

0x6c41,	// (0x000a3b2f) main_cset_slider_pane_g13

0x6c4d,	// (0x000a3b3b) main_cset_slider_pane_g14_ParamLimits

0x6c4d,	// (0x000a3b3b) main_cset_slider_pane_g14

0x6c59,	// (0x000a3b47) main_cset_slider_pane_g15_ParamLimits

0x6c59,	// (0x000a3b47) main_cset_slider_pane_g15

0xd815,	// (0x000aa703) main_cset_slider_pane_t14_ParamLimits

0xd815,	// (0x000aa703) main_cset_slider_pane_t14

0xd84e,	// (0x000aa73c) main_cset_slider_pane_t15_ParamLimits

0xd84e,	// (0x000aa73c) main_cset_slider_pane_t15

0x7315,	// (0x000a4203) aid_cam4_burst_size_cell_ParamLimits

0x7315,	// (0x000a4203) aid_cam4_burst_size_cell

0x7331,	// (0x000a421f) grid_cam4_burst_pane_ParamLimits

0x7331,	// (0x000a421f) grid_cam4_burst_pane

0x7363,	// (0x000a4251) linegrid_cam4_burst_pane_ParamLimits

0x7363,	// (0x000a4251) linegrid_cam4_burst_pane

0x7381,	// (0x000a426f) scroll_pane_cp30_ParamLimits

0x7381,	// (0x000a426f) scroll_pane_cp30

0x738d,	// (0x000a427b) cell_cam4_burst_pane_ParamLimits

0x738d,	// (0x000a427b) cell_cam4_burst_pane

0xd96b,	// (0x000aa859) linegrid_cam4_burst_pane_g1_ParamLimits

0xd96b,	// (0x000aa859) linegrid_cam4_burst_pane_g1

0x73cd,	// (0x000a42bb) linegrid_cam4_burst_pane_g2_ParamLimits

0x73cd,	// (0x000a42bb) linegrid_cam4_burst_pane_g2

0xd978,	// (0x000aa866) linegrid_cam4_burst_pane_g3_ParamLimits

0xd978,	// (0x000aa866) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000ac92f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000ac92f) linegrid_cam4_burst_pane_g

0x73de,	// (0x000a42cc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73de,	// (0x000a42cc) linegrid_cam4_burst_pane_g3_copy1

0xd985,	// (0x000aa873) linegrid_cam4_burst_pane_g4_ParamLimits

0xd985,	// (0x000aa873) linegrid_cam4_burst_pane_g4

0x73f8,	// (0x000a42e6) linegrid_cam4_burst_pane_g5_ParamLimits

0x73f8,	// (0x000a42e6) linegrid_cam4_burst_pane_g5

0x7409,	// (0x000a42f7) linegrid_cam4_burst_pane_g6_ParamLimits

0x7409,	// (0x000a42f7) linegrid_cam4_burst_pane_g6

0xd992,	// (0x000aa880) linegrid_cam4_burst_pane_g7_ParamLimits

0xd992,	// (0x000aa880) linegrid_cam4_burst_pane_g7

0x7420,	// (0x000a430e) cell_cam4_burst_pane_g1

0xd9ab,	// (0x000aa899) main_cam5_pane_t1_ParamLimits

0xd9ab,	// (0x000aa899) main_cam5_pane_t1

0xd9bd,	// (0x000aa8ab) main_cam5_pane_t2_ParamLimits

0xd9bd,	// (0x000aa8ab) main_cam5_pane_t2

0xd9cf,	// (0x000aa8bd) main_cam5_pane_t3_ParamLimits

0xd9cf,	// (0x000aa8bd) main_cam5_pane_t3

0xd9e1,	// (0x000aa8cf) main_cam5_pane_t4_ParamLimits

0xd9e1,	// (0x000aa8cf) main_cam5_pane_t4

0xd9f9,	// (0x000aa8e7) main_cam5_pane_t5_ParamLimits

0xd9f9,	// (0x000aa8e7) main_cam5_pane_t5

0xda0d,	// (0x000aa8fb) main_cam5_pane_t6_ParamLimits

0xda0d,	// (0x000aa8fb) main_cam5_pane_t6

0xda21,	// (0x000aa90f) main_cam5_pane_t7_ParamLimits

0xda21,	// (0x000aa90f) main_cam5_pane_t7

0xda33,	// (0x000aa921) main_cam5_pane_t8_ParamLimits

0xda33,	// (0x000aa921) main_cam5_pane_t8

0xda51,	// (0x000aa93f) main_cam5_pane_t9_ParamLimits

0xda51,	// (0x000aa93f) main_cam5_pane_t9

0xda63,	// (0x000aa951) main_cam5_pane_t10_ParamLimits

0xda63,	// (0x000aa951) main_cam5_pane_t10

0xda75,	// (0x000aa963) main_cam5_pane_t11_ParamLimits

0xda75,	// (0x000aa963) main_cam5_pane_t11

0xda89,	// (0x000aa977) main_cam5_pane_t12_ParamLimits

0xda89,	// (0x000aa977) main_cam5_pane_t12

0xdaa0,	// (0x000aa98e) main_cam5_pane_t13_ParamLimits

0xdaa0,	// (0x000aa98e) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000ac93b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000ac93b) main_cam5_pane_t

0x0dad,	// (0x0009dc9b) popup_scut_keymap_window_ParamLimits

0x0dad,	// (0x0009dc9b) popup_scut_keymap_window

0x7433,	// (0x000a4321) aid_size_cell_brow_shortcut

0xaa38,	// (0x000a7926) bg_popup_window_pane_cp010

0x743f,	// (0x000a432d) grid_scut_pane

0x744b,	// (0x000a4339) cell_scut_pane_ParamLimits

0x744b,	// (0x000a4339) cell_scut_pane

0x7466,	// (0x000a4354) cell_scut_pane_g1

0xdb1d,	// (0x000aaa0b) cell_scut_pane_t1

0xdb2c,	// (0x000aaa1a) cell_scut_pane_t2

0x746f,	// (0x000a435d) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000ac956) cell_scut_pane_t

0x5212,	// (0x000a2100) main_mup3_pane_g8_ParamLimits

0x5212,	// (0x000a2100) main_mup3_pane_g8

0x6683,	// (0x000a3571) area_vitu2_query_pane_ParamLimits

0x6683,	// (0x000a3571) area_vitu2_query_pane

0x71bd,	// (0x000a40ab) input_focus_pane_cp08

0xdb3b,	// (0x000aaa29) area_vitu2_query_pane_g1

0x747d,	// (0x000a436b) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000ac95d) area_vitu2_query_pane_g

0x748e,	// (0x000a437c) area_vitu2_query_pane_t1_ParamLimits

0x748e,	// (0x000a437c) area_vitu2_query_pane_t1

0x74a2,	// (0x000a4390) area_vitu2_query_pane_t2_ParamLimits

0x74a2,	// (0x000a4390) area_vitu2_query_pane_t2

0x74b6,	// (0x000a43a4) area_vitu2_query_pane_t3_ParamLimits

0x74b6,	// (0x000a43a4) area_vitu2_query_pane_t3

0xa29f,	// (0x000a718d) area_vitu2_query_pane_t4_ParamLimits

0xa29f,	// (0x000a718d) area_vitu2_query_pane_t4

0xa2c7,	// (0x000a71b5) area_vitu2_query_pane_t5_ParamLimits

0xa2c7,	// (0x000a71b5) area_vitu2_query_pane_t5

0xa2ef,	// (0x000a71dd) area_vitu2_query_pane_t6_ParamLimits

0xa2ef,	// (0x000a71dd) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000ac962) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000ac962) area_vitu2_query_pane_t

0x74de,	// (0x000a43cc) bg_button_pane_cp018

0x74ec,	// (0x000a43da) bg_button_pane_cp021

0x74f8,	// (0x000a43e6) bg_button_pane_cp022

0x7509,	// (0x000a43f7) input_focus_pane_cp09

0x362e,	// (0x000a051c) aid_size_touch_mv_arrow_left

0x3659,	// (0x000a0547) aid_size_touch_mv_arrow_right

0x6c71,	// (0x000a3b5f) main_cset_slider_pane_g16_ParamLimits

0x6c71,	// (0x000a3b5f) main_cset_slider_pane_g16

0x6c7d,	// (0x000a3b6b) main_cset_slider_pane_g17_ParamLimits

0x6c7d,	// (0x000a3b6b) main_cset_slider_pane_g17

0x7420,	// (0x000a430e) cell_cam4_burst_pane_g1_ParamLimits

0x9bd5,	// (0x000a6ac3) compa_mode_pane

0x6eb6,	// (0x000a3da4) popup_vtel_slider_window_g3_ParamLimits

0x6eb6,	// (0x000a3da4) popup_vtel_slider_window_g3

0x6eca,	// (0x000a3db8) popup_vtel_slider_window_g4_ParamLimits

0x6eca,	// (0x000a3db8) popup_vtel_slider_window_g4

0x6ede,	// (0x000a3dcc) popup_vtel_slider_window_t1_ParamLimits

0x6ede,	// (0x000a3dcc) popup_vtel_slider_window_t1

0x9bd5,	// (0x000a6ac3) main_cl_pane

0xc849,	// (0x000a9737) popup_imed_adjust2_window_ParamLimits

0xc81d,	// (0x000a970b) bg_tb_trans_pane_cp05_ParamLimits

0xd16b,	// (0x000aa059) popup_imed_adjust2_window_g1_ParamLimits

0xd17a,	// (0x000aa068) popup_imed_adjust2_window_g2_ParamLimits

0xd17a,	// (0x000aa068) popup_imed_adjust2_window_g2

0xd186,	// (0x000aa074) popup_imed_adjust2_window_g3_ParamLimits

0xd186,	// (0x000aa074) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000ac6cd) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000ac6cd) popup_imed_adjust2_window_g

0xd192,	// (0x000aa080) popup_imed_adjust2_window_t1_ParamLimits

0xd1aa,	// (0x000aa098) slider_imed_adjust_pane_ParamLimits

0xd1be,	// (0x000aa0ac) slider_imed_adjust_pane_g1_ParamLimits

0xd1ce,	// (0x000aa0bc) slider_imed_adjust_pane_g2_ParamLimits

0xd1e6,	// (0x000aa0d4) slider_imed_adjust_pane_g3_ParamLimits

0xd1f7,	// (0x000aa0e5) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000ac6d4) slider_imed_adjust_pane_g_ParamLimits

0x63a8,	// (0x000a3296) aid_touch_area_cam4_ParamLimits

0x63a8,	// (0x000a3296) aid_touch_area_cam4

0x63b8,	// (0x000a32a6) battery_pane_cp01

0x643f,	// (0x000a332d) main_camera4_pane_g6_ParamLimits

0x643f,	// (0x000a332d) main_camera4_pane_g6

0x645d,	// (0x000a334b) main_camera4_pane_t2_ParamLimits

0x645d,	// (0x000a334b) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000ac7d7) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000ac7d7) main_camera4_pane_t

0x64ee,	// (0x000a33dc) aid_touch_area_vid4_ParamLimits

0x64ee,	// (0x000a33dc) aid_touch_area_vid4

0x652e,	// (0x000a341c) main_video4_pane_g5_ParamLimits

0x652e,	// (0x000a341c) main_video4_pane_g5

0x6554,	// (0x000a3442) vid4_progress_pane_ParamLimits

0x6554,	// (0x000a3442) vid4_progress_pane

0xd7db,	// (0x000aa6c9) main_cset_slider_pane_g18_ParamLimits

0xd7db,	// (0x000aa6c9) main_cset_slider_pane_g18

0xd99f,	// (0x000aa88d) cell_cam4_burst_pane_g2_ParamLimits

0xd99f,	// (0x000aa88d) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000ac936) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000ac936) cell_cam4_burst_pane_g

0x751a,	// (0x000a4408) bg_cl_pane_ParamLimits

0x751a,	// (0x000a4408) bg_cl_pane

0x7526,	// (0x000a4414) cl_header_pane_ParamLimits

0x7526,	// (0x000a4414) cl_header_pane

0x7532,	// (0x000a4420) cl_listscroll_pane_ParamLimits

0x7532,	// (0x000a4420) cl_listscroll_pane

0xdb47,	// (0x000aaa35) bg_cl_pane_g1

0xdb4f,	// (0x000aaa3d) bg_cl_pane_g2

0xdb57,	// (0x000aaa45) bg_cl_pane_g3

0xdb5f,	// (0x000aaa4d) bg_cl_pane_g4

0xdb67,	// (0x000aaa55) bg_cl_pane_g5

0xdb6f,	// (0x000aaa5d) bg_cl_pane_g6

0xdb77,	// (0x000aaa65) bg_cl_pane_g7

0xdb7f,	// (0x000aaa6d) bg_cl_pane_g8

0xdb87,	// (0x000aaa75) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000ac971) bg_cl_pane_g

0x753e,	// (0x000a442c) aid_height_cl_leading_ParamLimits

0x753e,	// (0x000a442c) aid_height_cl_leading

0x754a,	// (0x000a4438) aid_height_cl_text_ParamLimits

0x754a,	// (0x000a4438) aid_height_cl_text

0x0dee,	// (0x0009dcdc) bg_cl_header_pane_ParamLimits

0x0dee,	// (0x0009dcdc) bg_cl_header_pane

0x7562,	// (0x000a4450) cl_header_pane_g1_ParamLimits

0x7562,	// (0x000a4450) cl_header_pane_g1

0x756f,	// (0x000a445d) cl_header_pane_t1_ParamLimits

0x756f,	// (0x000a445d) cl_header_pane_t1

0xdb8f,	// (0x000aaa7d) cl_list_pane

0xd7ae,	// (0x000aa69c) hc_scroll_pane_cp01

0xac81,	// (0x000a7b6f) bg_cl_header_pane_g1

0xd690,	// (0x000aa57e) bg_cl_header_pane_g2

0xaca1,	// (0x000a7b8f) bg_cl_header_pane_g3

0xd6a0,	// (0x000aa58e) bg_cl_header_pane_g4

0xd698,	// (0x000aa586) bg_cl_header_pane_g5

0xd8ba,	// (0x000aa7a8) bg_cl_header_pane_g6

0xd6b8,	// (0x000aa5a6) bg_cl_header_pane_g7

0xd6c0,	// (0x000aa5ae) bg_cl_header_pane_g8

0xd6b0,	// (0x000aa59e) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000ac984) bg_cl_header_pane_g

0x7581,	// (0x000a446f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7581,	// (0x000a446f) hc_cl_list_double_graphic_heading_pane

0x7591,	// (0x000a447f) hc_cl_list_single_graphic_pane_ParamLimits

0x7591,	// (0x000a447f) hc_cl_list_single_graphic_pane

0x75a3,	// (0x000a4491) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75a3,	// (0x000a4491) hc_cl_list_single_graphic_pane_g1

0x75af,	// (0x000a449d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75af,	// (0x000a449d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000ac997) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000ac997) hc_cl_list_single_graphic_pane_g

0x75c3,	// (0x000a44b1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75c3,	// (0x000a44b1) hc_cl_list_single_graphic_pane_t1

0x75a3,	// (0x000a4491) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75a3,	// (0x000a4491) hc_cl_list_double_graphic_heading_pane_g1

0x75d8,	// (0x000a44c6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75d8,	// (0x000a44c6) hc_cl_list_double_graphic_heading_pane_g2

0x75ec,	// (0x000a44da) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75ec,	// (0x000a44da) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000ac99c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000ac99c) hc_cl_list_double_graphic_heading_pane_g

0x7600,	// (0x000a44ee) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7600,	// (0x000a44ee) hc_cl_list_double_graphic_heading_pane_t1

0x7615,	// (0x000a4503) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7615,	// (0x000a4503) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000ac9a3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000ac9a3) hc_cl_list_double_graphic_heading_pane_t

0x7632,	// (0x000a4520) vid4_progress_pane_g1

0x7644,	// (0x000a4532) vid4_progress_pane_g2

0x3d5f,	// (0x000a0c4d) vid4_progress_pane_g3

0x7656,	// (0x000a4544) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000ac9a8) vid4_progress_pane_g

0x7674,	// (0x000a4562) vid4_progress_pane_t1

0x7689,	// (0x000a4577) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000ac9b3) vid4_progress_pane_t

0x76b4,	// (0x000a45a2) wait_bar_pane_cp07

0xca5b,	// (0x000a9949) blid_firmament_pane_ParamLimits

0xca9e,	// (0x000a998c) popup_blid_sat_info2_window_g1

0xcac2,	// (0x000a99b0) popup_blid_sat_info2_window_t3

0xcad0,	// (0x000a99be) popup_blid_sat_info2_window_t4

0xcade,	// (0x000a99cc) popup_blid_sat_info2_window_t5

0xcaec,	// (0x000a99da) popup_blid_sat_info2_window_t6

0xcafc,	// (0x000a99ea) popup_blid_sat_info2_window_t7

0xcb0a,	// (0x000a99f8) popup_blid_sat_info2_window_t8

0xcb18,	// (0x000a9a06) popup_blid_sat_info2_window_t9

0xcb26,	// (0x000a9a14) popup_blid_sat_info2_window_t10

0xcbee,	// (0x000a9adc) aid_firma_cardinal_ParamLimits

0xcc02,	// (0x000a9af0) blid_firmament_pane_t1_ParamLimits

0xcc19,	// (0x000a9b07) blid_firmament_pane_t2_ParamLimits

0xcc30,	// (0x000a9b1e) blid_firmament_pane_t3_ParamLimits

0xcc47,	// (0x000a9b35) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000ac5c1) blid_firmament_pane_t_ParamLimits

0xcc5e,	// (0x000a9b4c) blid_sat_info_pane_ParamLimits

0xa25a,	// (0x000a7148) main_cam_set_pane_ParamLimits

0x59b6,	// (0x000a28a4) aid_size_cell_colour_35_ParamLimits

0x59d0,	// (0x000a28be) aid_size_cell_colour_112_ParamLimits

0x59e7,	// (0x000a28d5) aid_size_cell_effect_ParamLimits

0xa25a,	// (0x000a7148) bg_tb_trans_pane_cp02_ParamLimits

0xb081,	// (0x000a7f6f) heading_imed_pane_ParamLimits

0x5a01,	// (0x000a28ef) listscroll_imed_pane_ParamLimits

0xbe3f,	// (0x000a8d2d) popup_call2_audio_first_window_g5_ParamLimits

0xbe3f,	// (0x000a8d2d) popup_call2_audio_first_window_g5

0x6113,	// (0x000a3001) aid_size_touch_image3_arrow_left_ParamLimits

0x6113,	// (0x000a3001) aid_size_touch_image3_arrow_left

0x6129,	// (0x000a3017) aid_size_touch_image3_arrow_right_ParamLimits

0x6129,	// (0x000a3017) aid_size_touch_image3_arrow_right

0x769f,	// (0x000a458d) vid4_progress_pane_t3

0x5caf,	// (0x000a2b9d) main_hwr_training_symbol_option_pane_ParamLimits

0x5caf,	// (0x000a2b9d) main_hwr_training_symbol_option_pane

0xd462,	// (0x000aa350) popup_hwr_training_preview_window_ParamLimits

0xd462,	// (0x000aa350) popup_hwr_training_preview_window

0x5d10,	// (0x000a2bfe) hwr_training_navi_pane_g5_ParamLimits

0x5d10,	// (0x000a2bfe) hwr_training_navi_pane_g5

0xd67e,	// (0x000aa56c) popup_char_count_window

0x6fd7,	// (0x000a3ec5) bg_popup_sub_pane_cp20_ParamLimits

0x6fe5,	// (0x000a3ed3) list_vitu2_match_list_pane_ParamLimits

0x6ff1,	// (0x000a3edf) vitu2_page_scroll_pane_ParamLimits

0x6ff1,	// (0x000a3edf) vitu2_page_scroll_pane

0xdb98,	// (0x000aaa86) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb98,	// (0x000aaa86) list_single_hwr_training_symbol_option_pane

0xdbab,	// (0x000aaa99) list_single_hwr_training_symbol_option_pane_g1

0xdbb3,	// (0x000aaaa1) list_single_hwr_training_symbol_option_pane_t1

0xdbc1,	// (0x000aaaaf) bg_button_pane_cp023

0xdbca,	// (0x000aaab8) bg_button_pane_cp024

0x7700,	// (0x000a45ee) vitu2_page_scroll_pane_g1

0x7708,	// (0x000a45f6) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000ac9ba) vitu2_page_scroll_pane_g

0x7712,	// (0x000a4600) vitu2_page_scroll_pane_t1

0xdbfd,	// (0x000aaaeb) popup_char_count_window_g1

0xdc06,	// (0x000aaaf4) popup_char_count_window_g2

0xdc0f,	// (0x000aaafd) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000ac9bf) popup_char_count_window_g

0xdc18,	// (0x000aab06) popup_char_count_window_t1

0x9bd5,	// (0x000a6ac3) main_vded2_pane

0xd157,	// (0x000aa045) aid_size_cell_imed_line

0xd161,	// (0x000aa04f) grid_imed_line_width_pane

0x65d6,	// (0x000a34c4) vid4_indicators_pane_g4

0xdc26,	// (0x000aab14) cell_imed_line_width_pane_ParamLimits

0xdc26,	// (0x000aab14) cell_imed_line_width_pane

0xdc3c,	// (0x000aab2a) cell_imed_line_width_pane_g1

0xd1de,	// (0x000aa0cc) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000ac9c6) cell_imed_line_width_pane_g

0x7721,	// (0x000a460f) main_vded2_pane_g1_ParamLimits

0x7721,	// (0x000a460f) main_vded2_pane_g1

0x7730,	// (0x000a461e) main_vded2_pane_g2_ParamLimits

0x7730,	// (0x000a461e) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000ac9cb) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000ac9cb) main_vded2_pane_g

0x773e,	// (0x000a462c) vded2_slider_pane_ParamLimits

0x773e,	// (0x000a462c) vded2_slider_pane

0x774b,	// (0x000a4639) aid_size_touch_vded2_end

0x7755,	// (0x000a4643) aid_size_touch_vded2_playhead

0xdc45,	// (0x000aab33) aid_size_touch_vded2_start

0xdc4d,	// (0x000aab3b) vded2_slider_bg_pane

0xdc56,	// (0x000aab44) vded2_slider_pane_g1

0xdc5f,	// (0x000aab4d) vded2_slider_pane_g2

0x775d,	// (0x000a464b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000ac9d0) vded2_slider_pane_g

0xdaea,	// (0x000aa9d8) vded2_slider_bg_pane_g1

0xdaf3,	// (0x000aa9e1) vded2_slider_bg_pane_g2

0xdafc,	// (0x000aa9ea) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x000ac691) vded2_slider_bg_pane_g

0x3d77,	// (0x000a0c65) aid_postcard_touch_down_pane_ParamLimits

0x3d77,	// (0x000a0c65) aid_postcard_touch_down_pane

0x3d87,	// (0x000a0c75) aid_postcard_touch_up_pane_ParamLimits

0x3d87,	// (0x000a0c75) aid_postcard_touch_up_pane

0x9bd5,	// (0x000a6ac3) main_blid2_pane

0xc82b,	// (0x000a9719) popup_blid2_search_window

0x9bd5,	// (0x000a6ac3) blid2_gps_pane

0x9bd5,	// (0x000a6ac3) blid2_navig_pane

0x9bd5,	// (0x000a6ac3) blid2_search_pane

0x9bd5,	// (0x000a6ac3) blid2_tripm_pane

0x7766,	// (0x000a4654) blid2_search_pane_g1_ParamLimits

0x7766,	// (0x000a4654) blid2_search_pane_g1

0x7772,	// (0x000a4660) blid2_search_pane_t1_ParamLimits

0x7772,	// (0x000a4660) blid2_search_pane_t1

0x7784,	// (0x000a4672) aid_size_cell_blid2_gps_ParamLimits

0x7784,	// (0x000a4672) aid_size_cell_blid2_gps

0x7794,	// (0x000a4682) blid2_gps_pane_g1_ParamLimits

0x7794,	// (0x000a4682) blid2_gps_pane_g1

0x77a0,	// (0x000a468e) grid_blid2_satellite_pane_ParamLimits

0x77a0,	// (0x000a468e) grid_blid2_satellite_pane

0x77ae,	// (0x000a469c) blid2_navig_pane_g1_ParamLimits

0x77ae,	// (0x000a469c) blid2_navig_pane_g1

0x77ba,	// (0x000a46a8) blid2_navig_pane_t1_ParamLimits

0x77ba,	// (0x000a46a8) blid2_navig_pane_t1

0x77cc,	// (0x000a46ba) blid2_navig_pane_t2_ParamLimits

0x77cc,	// (0x000a46ba) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x000ac9d7) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x000ac9d7) blid2_navig_pane_t

0x77de,	// (0x000a46cc) blid2_navig_ring_pane_ParamLimits

0x77de,	// (0x000a46cc) blid2_navig_ring_pane

0x77ee,	// (0x000a46dc) blid2_speed_pane_ParamLimits

0x77ee,	// (0x000a46dc) blid2_speed_pane

0x77fa,	// (0x000a46e8) blid2_tripm_pane_g1_ParamLimits

0x77fa,	// (0x000a46e8) blid2_tripm_pane_g1

0x780a,	// (0x000a46f8) blid2_tripm_pane_g2_ParamLimits

0x780a,	// (0x000a46f8) blid2_tripm_pane_g2

0x7816,	// (0x000a4704) blid2_tripm_pane_g3_ParamLimits

0x7816,	// (0x000a4704) blid2_tripm_pane_g3

0x7822,	// (0x000a4710) blid2_tripm_pane_g4_ParamLimits

0x7822,	// (0x000a4710) blid2_tripm_pane_g4

0x782e,	// (0x000a471c) blid2_tripm_pane_g5_ParamLimits

0x782e,	// (0x000a471c) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x000ac9dc) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x000ac9dc) blid2_tripm_pane_g

0x784a,	// (0x000a4738) blid2_tripm_pane_t1_ParamLimits

0x784a,	// (0x000a4738) blid2_tripm_pane_t1

0x785c,	// (0x000a474a) blid2_tripm_pane_t2_ParamLimits

0x785c,	// (0x000a474a) blid2_tripm_pane_t2

0x786e,	// (0x000a475c) blid2_tripm_pane_t3_ParamLimits

0x786e,	// (0x000a475c) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x000ac9e9) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x000ac9e9) blid2_tripm_pane_t

0x78a0,	// (0x000a478e) cell_blid2_satellite_pane_ParamLimits

0x78a0,	// (0x000a478e) cell_blid2_satellite_pane

0x78be,	// (0x000a47ac) cell_blid2_satellite_pane_g1

0xdc67,	// (0x000aab55) cell_blid2_satellite_pane_t1

0xcc6e,	// (0x000a9b5c) blid2_speed_pane_g1

0xdc75,	// (0x000aab63) blid2_speed_pane_t1

0xdc83,	// (0x000aab71) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x000ac9f2) blid2_speed_pane_t

0xcc6e,	// (0x000a9b5c) blid2_navig_ring_pane_g1

0x78c7,	// (0x000a47b5) blid2_navig_ring_pane_g2

0x78cf,	// (0x000a47bd) blid2_navig_ring_pane_g3

0x78d7,	// (0x000a47c5) blid2_navig_ring_pane_g4

0x78df,	// (0x000a47cd) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x000ac9f7) blid2_navig_ring_pane_g

0x9bd5,	// (0x000a6ac3) bg_popup_window_pane_cp011

0xdc91,	// (0x000aab7f) popup_blid2_search_window_g1

0xdc99,	// (0x000aab87) popup_blid2_search_window_t1

0xdca7,	// (0x000aab95) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x000aca02) popup_blid2_search_window_t

0xab84,	// (0x000a7a72) main_browser_pane_g1

0xa882,	// (0x000a7770) main_browser_pane_ParamLimits

0x6581,	// (0x000a346f) bg_button_pane_cp011_ParamLimits

0x6884,	// (0x000a3772) cell_vitu2_function_pane_g1_ParamLimits

0xc81d,	// (0x000a970b) bg_popup_sub_pane_cp22_ParamLimits

0x71bd,	// (0x000a40ab) input_focus_pane_cp08_ParamLimits

0x71d4,	// (0x000a40c2) popup_vitu2_query_button_pane_ParamLimits

0x71d4,	// (0x000a40c2) popup_vitu2_query_button_pane

0x71e5,	// (0x000a40d3) popup_vitu2_query_input_button_pane

0xd8f5,	// (0x000aa7e3) popup_vitu2_query_window_g1_ParamLimits

0x71ef,	// (0x000a40dd) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000ac90a) popup_vitu2_query_window_g_ParamLimits

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp026

0x78e7,	// (0x000a47d5) popup_vitu2_query_input_button_pane_g1

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp025

0xdcb5,	// (0x000aaba3) popup_vitu2_query_button_pane_t1

0x4f10,	// (0x000a1dfe) main_mp3_pane_t6

0x4f20,	// (0x000a1e0e) popup_slider_window_cp01

0x64a3,	// (0x000a3391) cam4_battery_pane

0x658f,	// (0x000a347d) cam4_battery_pane_cp02

0x762a,	// (0x000a4518) cam4_battery_pane_cp01

0x762a,	// (0x000a4518) cam4_battery_pane_cp03

0xdb05,	// (0x000aa9f3) cam4_battery_pane_g1

0xcc6e,	// (0x000a9b5c) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x000aca07) cam4_battery_pane_g

0xcb34,	// (0x000a9a22) popup_blid_sat_info2_window_t11

0x362e,	// (0x000a051c) aid_size_touch_mv_arrow_left_ParamLimits

0x3659,	// (0x000a0547) aid_size_touch_mv_arrow_right_ParamLimits

0xb36e,	// (0x000a825c) navi_pane_g1_ParamLimits

0x3698,	// (0x000a0586) navi_pane_g2_ParamLimits

0x36c6,	// (0x000a05b4) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000ac2d3) navi_pane_g_ParamLimits

0x3720,	// (0x000a060e) navi_pane_mv_t1_ParamLimits

0x5a0d,	// (0x000a28fb) grid_imed_effect_pane_ParamLimits

0x2049,	// (0x0009ef37) aid_placing_vt_slider_lsc

0xaacf,	// (0x000a79bd) aid_placing_vt_slider_prt

0xa25a,	// (0x000a7148) bg_tb_trans_pane_cp01_ParamLimits

0xcdbe,	// (0x000a9cac) popup_image_details_window_g1_ParamLimits

0xcdd1,	// (0x000a9cbf) popup_image_details_window_g2_ParamLimits

0xcde6,	// (0x000a9cd4) popup_image_details_window_g3_ParamLimits

0xcde6,	// (0x000a9cd4) popup_image_details_window_g3

0xf718,	// (0x000ac606) popup_image_details_window_g_ParamLimits

0xcdfa,	// (0x000a9ce8) popup_image_details_window_t1_ParamLimits

0xce0c,	// (0x000a9cfa) popup_image_details_window_t2_ParamLimits

0xce25,	// (0x000a9d13) popup_image_details_window_t3_ParamLimits

0xce39,	// (0x000a9d27) popup_image_details_window_t4_ParamLimits

0xce54,	// (0x000a9d42) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000ac60d) popup_image_details_window_t_ParamLimits

0x7556,	// (0x000a4444) cl_header_name_pane_ParamLimits

0x7556,	// (0x000a4444) cl_header_name_pane

0x78ef,	// (0x000a47dd) cl_header_name_pane_t1_ParamLimits

0x78ef,	// (0x000a47dd) cl_header_name_pane_t1

0x7906,	// (0x000a47f4) cl_header_name_pane_t2_ParamLimits

0x7906,	// (0x000a47f4) cl_header_name_pane_t2

0x7930,	// (0x000a481e) cl_header_name_pane_t3_ParamLimits

0x7930,	// (0x000a481e) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x000aca0c) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x000aca0c) cl_header_name_pane_t

0x36f1,	// (0x000a05df) navi_pane_mv_g2_ParamLimits

0xd644,	// (0x000aa532) field_vitu2_entry_pane_g1_ParamLimits

0xd664,	// (0x000aa552) field_vitu2_entry_pane_g2_ParamLimits

0xd670,	// (0x000aa55e) field_vitu2_entry_pane_g3_ParamLimits

0xd670,	// (0x000aa55e) field_vitu2_entry_pane_g3

0xf91b,	// (0x000ac809) field_vitu2_entry_pane_g_ParamLimits

0x6818,	// (0x000a3706) cell_vitu2_itu_pane_g1_ParamLimits

0x682a,	// (0x000a3718) cell_vitu2_itu_pane_g2_ParamLimits

0x682a,	// (0x000a3718) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000ac815) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000ac815) cell_vitu2_itu_pane_g

0x6581,	// (0x000a346f) bg_vkb2_func_pane_cp05_ParamLimits

0x6581,	// (0x000a346f) bg_vkb2_func_pane_cp05

0x6581,	// (0x000a346f) bg_vkb2_func_pane_cp03

0x6581,	// (0x000a346f) bg_vkb2_func_pane_cp04

0x6581,	// (0x000a346f) bg_vkb2_func_pane_cp10_ParamLimits

0x6581,	// (0x000a346f) bg_vkb2_func_pane_cp10

0x74f8,	// (0x000a43e6) bg_vkb2_func_pane_cp08

0x74de,	// (0x000a43cc) bg_vkb2_func_pane_cp06

0x74ec,	// (0x000a43da) bg_vkb2_func_pane_cp07

0xdbd3,	// (0x000aaac1) bg_vkb2_func_pane_cp11_ParamLimits

0xdbd3,	// (0x000aaac1) bg_vkb2_func_pane_cp11

0xdbe8,	// (0x000aaad6) bg_vkb2_func_pane_cp12_ParamLimits

0xdbe8,	// (0x000aaad6) bg_vkb2_func_pane_cp12

0x9bd5,	// (0x000a6ac3) bg_vkb2_func_pane_cp09

0xd690,	// (0x000aa57e) bg_vkb2_func_pane_g1

0xaca1,	// (0x000a7b8f) bg_vkb2_func_pane_g2

0xd698,	// (0x000aa586) bg_vkb2_func_pane_g3

0xd6a0,	// (0x000aa58e) bg_vkb2_func_pane_g4

0xd8ba,	// (0x000aa7a8) bg_vkb2_func_pane_g5

0xd6b8,	// (0x000aa5a6) bg_vkb2_func_pane_g6

0xd6c0,	// (0x000aa5ae) bg_vkb2_func_pane_g7

0xd6b0,	// (0x000aa59e) bg_vkb2_func_pane_g8

0xac81,	// (0x000a7b6f) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x000aca13) bg_vkb2_func_pane_g

0x783c,	// (0x000a472a) blid2_tripm_pane_g6_ParamLimits

0x783c,	// (0x000a472a) blid2_tripm_pane_g6

0xd51a,	// (0x000aa408) mp4_progress_pane_g1

0x7894,	// (0x000a4782) blid2_tripm_values_pane_ParamLimits

0x7894,	// (0x000a4782) blid2_tripm_values_pane

0x7955,	// (0x000a4843) blid2_tripm_values_pane_t1

0x7963,	// (0x000a4851) blid2_tripm_values_pane_t2

0x7971,	// (0x000a485f) blid2_tripm_values_pane_t3

0x797f,	// (0x000a486d) blid2_tripm_values_pane_t4

0x798d,	// (0x000a487b) blid2_tripm_values_pane_t5

0x799b,	// (0x000a4889) blid2_tripm_values_pane_t6

0x79a9,	// (0x000a4897) blid2_tripm_values_pane_t7

0x79b7,	// (0x000a48a5) blid2_tripm_values_pane_t8

0x79c5,	// (0x000a48b3) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x000aca26) blid2_tripm_values_pane_t

0x2087,	// (0x0009ef75) call_video_pane_t1_ParamLimits

0x20a4,	// (0x0009ef92) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000ac15c) call_video_pane_t_ParamLimits

0x3c82,	// (0x000a0b70) msg_header_pane_g1_ParamLimits

0xb583,	// (0x000a8471) msg_header_pane_g2_ParamLimits

0xb583,	// (0x000a8471) msg_header_pane_g2

0x0001,

0xf488,	// (0x000ac376) msg_header_pane_g_ParamLimits

0xf488,	// (0x000ac376) msg_header_pane_g

0xa882,	// (0x000a7770) main_clock2_pane_ParamLimits

0x579c,	// (0x000a268a) grid_clock2_toolbar_pane_ParamLimits

0x579c,	// (0x000a268a) grid_clock2_toolbar_pane

0x579c,	// (0x000a268a) listscroll_clock2_pane_ParamLimits

0x579c,	// (0x000a268a) listscroll_clock2_pane

0x5844,	// (0x000a2732) main_clock2_pane_t3_ParamLimits

0x5844,	// (0x000a2732) main_clock2_pane_t3

0x5856,	// (0x000a2744) main_clock2_pane_t4_ParamLimits

0x5856,	// (0x000a2744) main_clock2_pane_t4

0xdcc3,	// (0x000aabb1) cell_clock2_toolbar_pane

0xdccb,	// (0x000aabb9) cell_clock2_toolbar_pane_cp01

0xdccb,	// (0x000aabb9) cell_clock2_toolbar_pane_cp02

0xdcd3,	// (0x000aabc1) cell_clock2_toolbar_pane_cp03

0xdcdb,	// (0x000aabc9) list_clock2_pane

0xb2d4,	// (0x000a81c2) scroll_pane_cp10

0xdce3,	// (0x000aabd1) list_single_clock2_pane_ParamLimits

0xdce3,	// (0x000aabd1) list_single_clock2_pane

0xaa38,	// (0x000a7926) list_highlight_pane_cp08

0xdcf0,	// (0x000aabde) list_single_clock2_pane_t1

0xdcfe,	// (0x000aabec) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x000aca39) list_single_clock2_pane_t

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp10

0xdd0c,	// (0x000aabfa) cell_clock2_toolbar_pane_g1

0x3cd9,	// (0x000a0bc7) aid_main_viewer_pane_g1_ParamLimits

0x3cd9,	// (0x000a0bc7) aid_main_viewer_pane_g1

0x3ce5,	// (0x000a0bd3) aid_main_viewer_pane_g2_ParamLimits

0x3ce5,	// (0x000a0bd3) aid_main_viewer_pane_g2

0x3cf1,	// (0x000a0bdf) aid_main_viewer_pane_g3_ParamLimits

0x3cf1,	// (0x000a0bdf) aid_main_viewer_pane_g3

0x3d02,	// (0x000a0bf0) aid_main_viewer_pane_g4_ParamLimits

0x3d02,	// (0x000a0bf0) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000ac387) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000ac387) aid_main_viewer_pane_g

0x448c,	// (0x000a137a) main_calc_pane_ParamLimits

0x4499,	// (0x000a1387) main_dialer2_pane_ParamLimits

0x9bd5,	// (0x000a6ac3) main_cam6_pane

0x9bd5,	// (0x000a6ac3) main_vid6_pane

0x57a8,	// (0x000a2696) listscroll_gen_pane_cp06_ParamLimits

0x57a8,	// (0x000a2696) listscroll_gen_pane_cp06

0x5868,	// (0x000a2756) main_clock2_pane_t5_ParamLimits

0x5868,	// (0x000a2756) main_clock2_pane_t5

0x58b7,	// (0x000a27a5) aid_call2_pane_cp10_ParamLimits

0x58c9,	// (0x000a27b7) aid_call_pane_cp10_ParamLimits

0xb343,	// (0x000a8231) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb343,	// (0x000a8231) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58db,	// (0x000a27c9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58db,	// (0x000a27c9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb343,	// (0x000a8231) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000ac6c2) popup_clock_analogue_window_cp10_g_ParamLimits

0x58ed,	// (0x000a27db) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60c0,	// (0x000a2fae) cell_dialer2_keypad_pane_g2_ParamLimits

0x60c0,	// (0x000a2fae) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000ac7a8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000ac7a8) cell_dialer2_keypad_pane_g

0x60dc,	// (0x000a2fca) cell_dialer2_keypad_pane_t1

0x6b5f,	// (0x000a3a4d) main_cset_text2_pane_ParamLimits

0x6b5f,	// (0x000a3a4d) main_cset_text2_pane

0xdb3b,	// (0x000aaa29) area_vitu2_query_pane_g1_ParamLimits

0x747d,	// (0x000a436b) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000ac95d) area_vitu2_query_pane_g_ParamLimits

0xa317,	// (0x000a7205) area_vitu2_query_pane_t7_ParamLimits

0xa317,	// (0x000a7205) area_vitu2_query_pane_t7

0x74de,	// (0x000a43cc) bg_button_pane_cp018_ParamLimits

0x74ec,	// (0x000a43da) bg_button_pane_cp021_ParamLimits

0x74f8,	// (0x000a43e6) bg_button_pane_cp022_ParamLimits

0x74f8,	// (0x000a43e6) bg_vkb2_func_pane_cp08_ParamLimits

0x74de,	// (0x000a43cc) bg_vkb2_func_pane_cp06_ParamLimits

0x74ec,	// (0x000a43da) bg_vkb2_func_pane_cp07_ParamLimits

0x7509,	// (0x000a43f7) input_focus_pane_cp09_ParamLimits

0x79d3,	// (0x000a48c1) cam6_autofocus_pane_ParamLimits

0x79d3,	// (0x000a48c1) cam6_autofocus_pane

0x79f5,	// (0x000a48e3) cam6_image_uncrop_pane_ParamLimits

0x79f5,	// (0x000a48e3) cam6_image_uncrop_pane

0x7a22,	// (0x000a4910) cam6_indi_pane_ParamLimits

0x7a22,	// (0x000a4910) cam6_indi_pane

0x7a3c,	// (0x000a492a) cam6_mode_pane_ParamLimits

0x7a3c,	// (0x000a492a) cam6_mode_pane

0x7a50,	// (0x000a493e) cam6_timer_pane_ParamLimits

0x7a50,	// (0x000a493e) cam6_timer_pane

0x7a5c,	// (0x000a494a) cam6_zoom_pane_ParamLimits

0x7a5c,	// (0x000a494a) cam6_zoom_pane

0x7a78,	// (0x000a4966) cam6_mode_pane_g1_ParamLimits

0x7a78,	// (0x000a4966) cam6_mode_pane_g1

0x7a84,	// (0x000a4972) cam6_mode_pane_g2_ParamLimits

0x7a84,	// (0x000a4972) cam6_mode_pane_g2

0x7a90,	// (0x000a497e) cam6_mode_pane_g3_ParamLimits

0x7a90,	// (0x000a497e) cam6_mode_pane_g3

0x7a9c,	// (0x000a498a) cam6_mode_pane_g4_ParamLimits

0x7a9c,	// (0x000a498a) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x000aca3e) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x000aca3e) cam6_mode_pane_g

0xdb0f,	// (0x000aa9fd) bg_tb_trans_pane_cp08_ParamLimits

0xdb0f,	// (0x000aa9fd) bg_tb_trans_pane_cp08

0xdd14,	// (0x000aac02) cam6_battery_pane_ParamLimits

0xdd14,	// (0x000aac02) cam6_battery_pane

0xdd2a,	// (0x000aac18) cam6_indi_pane_g1_ParamLimits

0xdd2a,	// (0x000aac18) cam6_indi_pane_g1

0xdd3c,	// (0x000aac2a) cam6_indi_pane_g2_ParamLimits

0xdd3c,	// (0x000aac2a) cam6_indi_pane_g2

0xdd4e,	// (0x000aac3c) cam6_indi_pane_g3_ParamLimits

0xdd4e,	// (0x000aac3c) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x000aca47) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x000aca47) cam6_indi_pane_g

0xdd60,	// (0x000aac4e) cam6_indi_pane_t1_ParamLimits

0xdd60,	// (0x000aac4e) cam6_indi_pane_t1

0x6613,	// (0x000a3501) cam6_autofocus_pane_g1

0x660b,	// (0x000a34f9) cam6_autofocus_pane_g2

0x6623,	// (0x000a3511) cam6_autofocus_pane_g3

0x661b,	// (0x000a3509) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x000aca4e) cam6_autofocus_pane_g

0xdd86,	// (0x000aac74) cam6_timer_pane_g1

0xdd8e,	// (0x000aac7c) cam6_timer_pane_t1

0xdd9c,	// (0x000aac8a) cam6_zoom_cont_pane

0xdda4,	// (0x000aac92) cam6_zoom_pane_g1

0xddac,	// (0x000aac9a) cam6_zoom_pane_g2

0x7aa8,	// (0x000a4996) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x000aca57) cam6_zoom_pane_g

0xcc6e,	// (0x000a9b5c) cam6_battery_pane_g1

0xcc6e,	// (0x000a9b5c) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000ac5ca) cam6_battery_pane_g

0xddb4,	// (0x000aaca2) cam6_zoom_cont_pane_g1

0xddbd,	// (0x000aacab) cam6_zoom_cont_pane_g2

0xddc6,	// (0x000aacb4) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x000aca5e) cam6_zoom_cont_pane_g

0x7ac5,	// (0x000a49b3) cam6_mode_pane_cp_ParamLimits

0x7ac5,	// (0x000a49b3) cam6_mode_pane_cp

0x7ad9,	// (0x000a49c7) cam6_zoom_pane_cp_ParamLimits

0x7ad9,	// (0x000a49c7) cam6_zoom_pane_cp

0x7af5,	// (0x000a49e3) vid6_image_uncrop_cif_pane_ParamLimits

0x7af5,	// (0x000a49e3) vid6_image_uncrop_cif_pane

0x7b21,	// (0x000a4a0f) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b21,	// (0x000a4a0f) vid6_image_uncrop_nhd_pane

0x7b40,	// (0x000a4a2e) vid6_image_uncrop_vga_pane_ParamLimits

0x7b40,	// (0x000a4a2e) vid6_image_uncrop_vga_pane

0x7b5f,	// (0x000a4a4d) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b5f,	// (0x000a4a4d) vid6_image_uncrop_wvga_pane

0x7b7e,	// (0x000a4a6c) vid6_indi_pane_ParamLimits

0x7b7e,	// (0x000a4a6c) vid6_indi_pane

0xdb0f,	// (0x000aa9fd) bg_tb_trans_pane_cp09_ParamLimits

0xdb0f,	// (0x000aa9fd) bg_tb_trans_pane_cp09

0xddde,	// (0x000aaccc) cam6_battery_pane_cp_ParamLimits

0xddde,	// (0x000aaccc) cam6_battery_pane_cp

0xddea,	// (0x000aacd8) vid6_indi_pane_g1_ParamLimits

0xddea,	// (0x000aacd8) vid6_indi_pane_g1

0xddfc,	// (0x000aacea) vid6_indi_pane_g2_ParamLimits

0xddfc,	// (0x000aacea) vid6_indi_pane_g2

0xde0e,	// (0x000aacfc) vid6_indi_pane_g3_ParamLimits

0xde0e,	// (0x000aacfc) vid6_indi_pane_g3

0xde25,	// (0x000aad13) vid6_indi_pane_g4_ParamLimits

0xde25,	// (0x000aad13) vid6_indi_pane_g4

0xde3c,	// (0x000aad2a) vid6_indi_pane_g5_ParamLimits

0xde3c,	// (0x000aad2a) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x000aca65) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x000aca65) vid6_indi_pane_g

0xde56,	// (0x000aad44) vid6_indi_pane_t1_ParamLimits

0xde56,	// (0x000aad44) vid6_indi_pane_t1

0xde6c,	// (0x000aad5a) vid6_indi_pane_t2_ParamLimits

0xde6c,	// (0x000aad5a) vid6_indi_pane_t2

0xde94,	// (0x000aad82) vid6_indi_pane_t3_ParamLimits

0xde94,	// (0x000aad82) vid6_indi_pane_t3

0xdebc,	// (0x000aadaa) vid6_indi_pane_t4_ParamLimits

0xdebc,	// (0x000aadaa) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x000aca70) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x000aca70) vid6_indi_pane_t

0xdee0,	// (0x000aadce) wait_bar_pane_cp08

0x7ba3,	// (0x000a4a91) main_cset_text2_pane_t1_ParamLimits

0x7ba3,	// (0x000a4a91) main_cset_text2_pane_t1

0x7ab0,	// (0x000a499e) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ab0,	// (0x000a499e) listscroll_gen_pane_cp06_t1

0x9bd5,	// (0x000a6ac3) main_cam6_set_pane

0x6495,	// (0x000a3383) bg_tb_trans_pane_cp06_ParamLimits

0x64ab,	// (0x000a3399) cam4_indicators_pane_g1_ParamLimits

0x64bc,	// (0x000a33aa) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000ac7e5) cam4_indicators_pane_g_ParamLimits

0x64d4,	// (0x000a33c2) cam4_indicators_pane_t1_ParamLimits

0x6581,	// (0x000a346f) bg_tb_trans_pane_cp07_ParamLimits

0x6599,	// (0x000a3487) vid4_indicators_pane_g1_ParamLimits

0x65af,	// (0x000a349d) vid4_indicators_pane_g2_ParamLimits

0x65c3,	// (0x000a34b1) vid4_indicators_pane_g3_ParamLimits

0x65d6,	// (0x000a34c4) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000ac7f7) vid4_indicators_pane_g_ParamLimits

0x65f4,	// (0x000a34e2) vid4_indicators_pane_t1_ParamLimits

0x7632,	// (0x000a4520) vid4_progress_pane_g1_ParamLimits

0x7644,	// (0x000a4532) vid4_progress_pane_g2_ParamLimits

0x3d5f,	// (0x000a0c4d) vid4_progress_pane_g3_ParamLimits

0x7656,	// (0x000a4544) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000ac9a8) vid4_progress_pane_g_ParamLimits

0x7674,	// (0x000a4562) vid4_progress_pane_t1_ParamLimits

0x7689,	// (0x000a4577) vid4_progress_pane_t2_ParamLimits

0x769f,	// (0x000a458d) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000ac9b3) vid4_progress_pane_t_ParamLimits

0x76b4,	// (0x000a45a2) wait_bar_pane_cp07_ParamLimits

0x7bca,	// (0x000a4ab8) main_cam6_set_pane_g2_ParamLimits

0x7bca,	// (0x000a4ab8) main_cam6_set_pane_g2

0x7bd6,	// (0x000a4ac4) main_cset6_listscroll_pane_ParamLimits

0x7bd6,	// (0x000a4ac4) main_cset6_listscroll_pane

0x7c03,	// (0x000a4af1) main_cset6_slider_pane_ParamLimits

0x7c03,	// (0x000a4af1) main_cset6_slider_pane

0x7c0f,	// (0x000a4afd) main_cset6_text2_pane_ParamLimits

0x7c0f,	// (0x000a4afd) main_cset6_text2_pane

0xdeef,	// (0x000aaddd) main_cset6_text_pane

0xdef7,	// (0x000aade5) main_cset_list_pane_copy1_ParamLimits

0xdef7,	// (0x000aade5) main_cset_list_pane_copy1

0xdf07,	// (0x000aadf5) scroll_pane_cp028_copy1

0x7c22,	// (0x000a4b10) cset_list_set_pane_copy1

0x7c32,	// (0x000a4b20) aid_position_infowindow_above_copy1

0x7c3a,	// (0x000a4b28) aid_position_infowindow_below_copy1

0x7c42,	// (0x000a4b30) cset_list_set_pane_g1_copy1

0x7c4a,	// (0x000a4b38) cset_list_set_pane_g3_copy1_ParamLimits

0x7c4a,	// (0x000a4b38) cset_list_set_pane_g3_copy1

0x7c59,	// (0x000a4b47) cset_list_set_pane_t1_copy1_ParamLimits

0x7c59,	// (0x000a4b47) cset_list_set_pane_t1_copy1

0xa25a,	// (0x000a7148) list_highlight_pane_cp021_copy1_ParamLimits

0xa25a,	// (0x000a7148) list_highlight_pane_cp021_copy1

0xdf10,	// (0x000aadfe) cset6_slider_pane_ParamLimits

0xdf10,	// (0x000aadfe) cset6_slider_pane

0xdf3c,	// (0x000aae2a) main_cset6_slider_pane_g1_ParamLimits

0xdf3c,	// (0x000aae2a) main_cset6_slider_pane_g1

0x7c6e,	// (0x000a4b5c) main_cset6_slider_pane_g2_ParamLimits

0x7c6e,	// (0x000a4b5c) main_cset6_slider_pane_g2

0xdf64,	// (0x000aae52) main_cset6_slider_pane_g3_ParamLimits

0xdf64,	// (0x000aae52) main_cset6_slider_pane_g3

0x7c96,	// (0x000a4b84) main_cset6_slider_pane_g4_ParamLimits

0x7c96,	// (0x000a4b84) main_cset6_slider_pane_g4

0x7ca2,	// (0x000a4b90) main_cset6_slider_pane_g5_ParamLimits

0x7ca2,	// (0x000a4b90) main_cset6_slider_pane_g5

0xd7c3,	// (0x000aa6b1) main_cset6_slider_pane_g7_ParamLimits

0xd7c3,	// (0x000aa6b1) main_cset6_slider_pane_g7

0xd7cf,	// (0x000aa6bd) main_cset6_slider_pane_g8_ParamLimits

0xd7cf,	// (0x000aa6bd) main_cset6_slider_pane_g8

0x7cae,	// (0x000a4b9c) main_cset6_slider_pane_g9_ParamLimits

0x7cae,	// (0x000a4b9c) main_cset6_slider_pane_g9

0x7cba,	// (0x000a4ba8) main_cset6_slider_pane_g10_ParamLimits

0x7cba,	// (0x000a4ba8) main_cset6_slider_pane_g10

0x7cc6,	// (0x000a4bb4) main_cset6_slider_pane_g11_ParamLimits

0x7cc6,	// (0x000a4bb4) main_cset6_slider_pane_g11

0x7cd2,	// (0x000a4bc0) main_cset6_slider_pane_g12_ParamLimits

0x7cd2,	// (0x000a4bc0) main_cset6_slider_pane_g12

0x7cde,	// (0x000a4bcc) main_cset6_slider_pane_g13_ParamLimits

0x7cde,	// (0x000a4bcc) main_cset6_slider_pane_g13

0x7cea,	// (0x000a4bd8) main_cset6_slider_pane_g14_ParamLimits

0x7cea,	// (0x000a4bd8) main_cset6_slider_pane_g14

0x7cf6,	// (0x000a4be4) main_cset6_slider_pane_g15_ParamLimits

0x7cf6,	// (0x000a4be4) main_cset6_slider_pane_g15

0x7d0e,	// (0x000a4bfc) main_cset6_slider_pane_g16_ParamLimits

0x7d0e,	// (0x000a4bfc) main_cset6_slider_pane_g16

0x7d1a,	// (0x000a4c08) main_cset6_slider_pane_g17_ParamLimits

0x7d1a,	// (0x000a4c08) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x000aca79) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x000aca79) main_cset6_slider_pane_g

0xdf70,	// (0x000aae5e) main_cset6_slider_pane_t1_ParamLimits

0xdf70,	// (0x000aae5e) main_cset6_slider_pane_t1

0x7d3e,	// (0x000a4c2c) main_cset6_slider_pane_t2_ParamLimits

0x7d3e,	// (0x000a4c2c) main_cset6_slider_pane_t2

0x7d69,	// (0x000a4c57) main_cset6_slider_pane_t3_ParamLimits

0x7d69,	// (0x000a4c57) main_cset6_slider_pane_t3

0x7d94,	// (0x000a4c82) main_cset6_slider_pane_t4_ParamLimits

0x7d94,	// (0x000a4c82) main_cset6_slider_pane_t4

0x7dbf,	// (0x000a4cad) main_cset6_slider_pane_t5_ParamLimits

0x7dbf,	// (0x000a4cad) main_cset6_slider_pane_t5

0xdfb1,	// (0x000aae9f) main_cset6_slider_pane_t7_ParamLimits

0xdfb1,	// (0x000aae9f) main_cset6_slider_pane_t7

0x7dea,	// (0x000a4cd8) main_cset6_slider_pane_t8_ParamLimits

0x7dea,	// (0x000a4cd8) main_cset6_slider_pane_t8

0x7e0e,	// (0x000a4cfc) main_cset6_slider_pane_t9_ParamLimits

0x7e0e,	// (0x000a4cfc) main_cset6_slider_pane_t9

0x7e32,	// (0x000a4d20) main_cset6_slider_pane_t10_ParamLimits

0x7e32,	// (0x000a4d20) main_cset6_slider_pane_t10

0x7e56,	// (0x000a4d44) main_cset6_slider_pane_t11_ParamLimits

0x7e56,	// (0x000a4d44) main_cset6_slider_pane_t11

0xdfe7,	// (0x000aaed5) main_cset6_slider_pane_t14_ParamLimits

0xdfe7,	// (0x000aaed5) main_cset6_slider_pane_t14

0xe020,	// (0x000aaf0e) main_cset6_slider_pane_t15_ParamLimits

0xe020,	// (0x000aaf0e) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x000aca9e) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x000aca9e) main_cset6_slider_pane_t

0xdac3,	// (0x000aa9b1) cset_slider_pane_g1_copy1

0xdacc,	// (0x000aa9ba) cset_slider_pane_g2_copy1

0xdad5,	// (0x000aa9c3) cset_slider_pane_g3_copy1

0x9bd5,	// (0x000a6ac3) bg_popup_sub_pane_cp011_copy1

0xe059,	// (0x000aaf47) main_cset_text_pane_g1_copy1

0xd909,	// (0x000aa7f7) main_cset_text_pane_t1_copy1

0xd917,	// (0x000aa805) main_cset_text_pane_t2_copy1

0xd925,	// (0x000aa813) main_cset_text_pane_t3_copy1

0xd933,	// (0x000aa821) main_cset_text_pane_t4_copy1

0xd941,	// (0x000aa82f) main_cset_text_pane_t5_copy1

0xe061,	// (0x000aaf4f) main_cset_text_pane_t6_copy1

0xe06f,	// (0x000aaf5d) main_cset_text_pane_t7_copy1

0x7f49,	// (0x000a4e37) main_cset_text2_pane_t1_copy1

0xa25a,	// (0x000a7148) main_ncimui_pane

0x44de,	// (0x000a13cc) popup_query_ncimui_window_ParamLimits

0x44de,	// (0x000a13cc) popup_query_ncimui_window

0xac75,	// (0x000a7b63) field_cale_ev2_pane_g4_ParamLimits

0xac75,	// (0x000a7b63) field_cale_ev2_pane_g4

0x5dd6,	// (0x000a2cc4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5dd6,	// (0x000a2cc4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000ac783) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000ac783) cell_video_dialer_keypad_pane_g

0x5dee,	// (0x000a2cdc) cell_video_dialer_keypad_pane_t1

0x9bd5,	// (0x000a6ac3) bg_popup_window_pane_cp012

0xb1c0,	// (0x000a80ae) heading_pane_cp06

0xe09b,	// (0x000aaf89) ncim_query_content_pane

0x9bd5,	// (0x000a6ac3) bg_popup_heading_pane_cp01

0xe0a3,	// (0x000aaf91) ncim_heading_pane_t1

0xe0b1,	// (0x000aaf9f) ncim_indicator_popup_pane

0xe0c3,	// (0x000aafb1) ncim_query_button_pane

0xe0d9,	// (0x000aafc7) ncim_query_content_pane_t1

0xe0eb,	// (0x000aafd9) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x000acae2) ncim_query_content_pane_t

0xe125,	// (0x000ab013) ncim_query_list_pane

0xe137,	// (0x000ab025) ncim_query_popup_pane

0xe0b1,	// (0x000aaf9f) ncim_indicator_popup_pane_ParamLimits

0x80a5,	// (0x000a4f93) ncim_query_content_pane_g1_ParamLimits

0x80a5,	// (0x000a4f93) ncim_query_content_pane_g1

0xe0d9,	// (0x000aafc7) ncim_query_content_pane_t1_ParamLimits

0xe0eb,	// (0x000aafd9) ncim_query_content_pane_t2_ParamLimits

0x80b1,	// (0x000a4f9f) ncim_query_content_pane_t3_ParamLimits

0x80b1,	// (0x000a4f9f) ncim_query_content_pane_t3

0x80ce,	// (0x000a4fbc) ncim_query_content_pane_t4_ParamLimits

0x80ce,	// (0x000a4fbc) ncim_query_content_pane_t4

0x80eb,	// (0x000a4fd9) ncim_query_content_pane_t5_ParamLimits

0x80eb,	// (0x000a4fd9) ncim_query_content_pane_t5

0xe0fd,	// (0x000aafeb) ncim_query_content_pane_t6_ParamLimits

0xe0fd,	// (0x000aafeb) ncim_query_content_pane_t6

0xfbf4,	// (0x000acae2) ncim_query_content_pane_t_ParamLimits

0xe125,	// (0x000ab013) ncim_query_list_pane_ParamLimits

0xe137,	// (0x000ab025) ncim_query_popup_pane_ParamLimits

0xe14b,	// (0x000ab039) wait_bar_pane_cp04

0x9bd5,	// (0x000a6ac3) input_focus_pane_cp011

0xe153,	// (0x000ab041) ncim_query_popup_pane_t1

0xe161,	// (0x000ab04f) ncim_list_query_list_pane_ParamLimits

0xe161,	// (0x000ab04f) ncim_list_query_list_pane

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp027

0xe174,	// (0x000ab062) ncim_query_button_pane_g1

0x9bd5,	// (0x000a6ac3) list_highlight_pane_cp012

0xe17e,	// (0x000ab06c) ncim_list_query_list_pane_g1

0xe186,	// (0x000ab074) ncim_list_query_list_pane_t1

0x64c8,	// (0x000a33b6) cam4_indicators_pane_g3_ParamLimits

0x64c8,	// (0x000a33b6) cam4_indicators_pane_g3

0x65e2,	// (0x000a34d0) vid4_indicators_pane_g5_ParamLimits

0x65e2,	// (0x000a34d0) vid4_indicators_pane_g5

0x7665,	// (0x000a4553) vid4_progress_pane_g5_ParamLimits

0x7665,	// (0x000a4553) vid4_progress_pane_g5

0x7f7b,	// (0x000a4e69) main_ncimui_pane_g1

0x7fe7,	// (0x000a4ed5) ncimui_group_query_pane_ParamLimits

0x7fe7,	// (0x000a4ed5) ncimui_group_query_pane

0x8041,	// (0x000a4f2f) ncimui_list_pane_ParamLimits

0x8041,	// (0x000a4f2f) ncimui_list_pane

0x8068,	// (0x000a4f56) ncimui_text_pane_ParamLimits

0x8068,	// (0x000a4f56) ncimui_text_pane

0x8108,	// (0x000a4ff6) ncimui_text_pane_t1_ParamLimits

0x8108,	// (0x000a4ff6) ncimui_text_pane_t1

0xe194,	// (0x000ab082) ncimui_list_single_graphic_pane_ParamLimits

0xe194,	// (0x000ab082) ncimui_list_single_graphic_pane

0x8127,	// (0x000a5015) ncimui_query_pane_ParamLimits

0x8127,	// (0x000a5015) ncimui_query_pane

0x9bd5,	// (0x000a6ac3) list_highlight_pane_cp013

0xe1a4,	// (0x000ab092) ncim_list_query_list_pane_t1_copy1

0xe17e,	// (0x000ab06c) ncim_list_single_graphic_pane_g1

0xe1b2,	// (0x000ab0a0) ncim_query_button_pane_cp01

0xe1be,	// (0x000ab0ac) ncim_query_entry_pane_ParamLimits

0xe1be,	// (0x000ab0ac) ncim_query_entry_pane

0xe1d1,	// (0x000ab0bf) ncimui_query_pane_g1

0xe1dd,	// (0x000ab0cb) ncimui_query_pane_t1_ParamLimits

0xe1dd,	// (0x000ab0cb) ncimui_query_pane_t1

0xa25a,	// (0x000a7148) input_focus_pane_cp012

0xe1f6,	// (0x000ab0e4) ncim_query_entry_pane_t1

0xa882,	// (0x000a7770) main_im_pane_ParamLimits

0xa25a,	// (0x000a7148) main_mobtv_pane_ParamLimits

0xa25a,	// (0x000a7148) main_mobtv_pane

0x7d26,	// (0x000a4c14) main_cset6_slider_pane_g18_ParamLimits

0x7d26,	// (0x000a4c14) main_cset6_slider_pane_g18

0x7d32,	// (0x000a4c20) main_cset6_slider_pane_g19_ParamLimits

0x7d32,	// (0x000a4c20) main_cset6_slider_pane_g19

0xd670,	// (0x000aa55e) bg_main_mobtv_pane_ParamLimits

0xd670,	// (0x000aa55e) bg_main_mobtv_pane

0x813a,	// (0x000a5028) main_mobtv_info_pane

0x8145,	// (0x000a5033) main_mobtv_loading_pane_ParamLimits

0x8145,	// (0x000a5033) main_mobtv_loading_pane

0xe208,	// (0x000ab0f6) main_mobtv_pg_channel_list_pane

0xe212,	// (0x000ab100) main_mobtv_pg_hdr_pane

0x8152,	// (0x000a5040) main_mobtv_programe_curr_pane_ParamLimits

0x8152,	// (0x000a5040) main_mobtv_programe_curr_pane

0x815f,	// (0x000a504d) main_mobtv_programe_next_pane_ParamLimits

0x815f,	// (0x000a504d) main_mobtv_programe_next_pane

0xe21b,	// (0x000ab109) popup_mobtv_noti_window

0xcc6e,	// (0x000a9b5c) main_tv_pg_hdr_pane_g1

0xe225,	// (0x000ab113) main_tv_pg_hdr_pane_g2

0xe22d,	// (0x000ab11b) main_tv_pg_hdr_pane_g3

0xe235,	// (0x000ab123) main_tv_pg_hdr_pane_g4

0xe23d,	// (0x000ab12b) main_tv_pg_hdr_pane_g5

0xe247,	// (0x000ab135) main_tv_pg_hdr_pane_g6

0xe251,	// (0x000ab13f) main_tv_pg_hdr_pane_g7

0xe25b,	// (0x000ab149) main_tv_pg_hdr_pane_g8

0xe265,	// (0x000ab153) main_tv_pg_hdr_pane_g9

0xe26f,	// (0x000ab15d) main_tv_pg_hdr_pane_g10

0xe279,	// (0x000ab167) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x000acaef) main_tv_pg_hdr_pane_g

0xe283,	// (0x000ab171) main_tv_pg_hdr_pane_t1

0xe291,	// (0x000ab17f) main_tv_pg_hdr_pane_t2

0xe29f,	// (0x000ab18d) main_tv_pg_hdr_pane_t3

0xe2af,	// (0x000ab19d) main_tv_pg_hdr_pane_t4

0xe2bf,	// (0x000ab1ad) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x000acb06) main_tv_pg_hdr_pane_t

0xe2cf,	// (0x000ab1bd) single_mobtv_pg_channel_pane_ParamLimits

0xe2cf,	// (0x000ab1bd) single_mobtv_pg_channel_pane

0xe2e1,	// (0x000ab1cf) single_mobtv_pg_channel_table_pane

0xe2ea,	// (0x000ab1d8) single_mobtv_pg_channel_thumb_pane

0xe2f3,	// (0x000ab1e1) single_tv_pg_channel_pane_g1

0xe2fc,	// (0x000ab1ea) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x000acb11) single_tv_pg_channel_pane_g

0xce9e,	// (0x000a9d8c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce9e,	// (0x000a9d8c) bg_single_mobtv_pg_channel_thumb_pane

0xe305,	// (0x000ab1f3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe305,	// (0x000ab1f3) single_mobtv_pg_channel_thumb_pane_g1

0xe313,	// (0x000ab201) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe313,	// (0x000ab201) single_mobtv_pg_channel_thumb_pane_g2

0xe31f,	// (0x000ab20d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe31f,	// (0x000ab20d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x000acb16) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x000acb16) single_mobtv_pg_channel_thumb_pane_g

0xe32b,	// (0x000ab219) single_mobtv_pg_channel_thumb_pane_t1

0xe339,	// (0x000ab227) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x000acb1d) single_mobtv_pg_channel_thumb_pane_t

0xcc6e,	// (0x000a9b5c) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6e,	// (0x000a9b5c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000ac5ca) bg_single_mobtv_pg_channel_table_pane_g

0xe347,	// (0x000ab235) single_mobtv_pg_channel_table_pane_t1

0xe355,	// (0x000ab243) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x000acb22) single_mobtv_pg_channel_table_pane_t

0x8174,	// (0x000a5062) main_mobtv_info_pane_g1_ParamLimits

0x8174,	// (0x000a5062) main_mobtv_info_pane_g1

0x8190,	// (0x000a507e) main_mobtv_info_pane_t1_ParamLimits

0x8190,	// (0x000a507e) main_mobtv_info_pane_t1

0x8208,	// (0x000a50f6) main_mobtv_info_pane_t2_ParamLimits

0x8208,	// (0x000a50f6) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x000acb2c) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x000acb2c) main_mobtv_info_pane_t

0x8299,	// (0x000a5187) wait_bar_pane_cp05

0x82ab,	// (0x000a5199) main_mobtv_loading_pane_g1_ParamLimits

0x82ab,	// (0x000a5199) main_mobtv_loading_pane_g1

0x82b7,	// (0x000a51a5) main_mobtv_loading_pane_g2_ParamLimits

0x82b7,	// (0x000a51a5) main_mobtv_loading_pane_g2

0x82c3,	// (0x000a51b1) main_mobtv_loading_pane_g3_ParamLimits

0x82c3,	// (0x000a51b1) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x000acb33) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x000acb33) main_mobtv_loading_pane_g

0xe363,	// (0x000ab251) main_mobtv_loading_pane_t1_ParamLimits

0xe363,	// (0x000ab251) main_mobtv_loading_pane_t1

0xe37b,	// (0x000ab269) main_mobtv_loading_pane_t2_ParamLimits

0xe37b,	// (0x000ab269) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x000acb3a) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x000acb3a) main_mobtv_loading_pane_t

0x82d1,	// (0x000a51bf) wait_bar_pane_cp06_ParamLimits

0x82d1,	// (0x000a51bf) wait_bar_pane_cp06

0xe39f,	// (0x000ab28d) main_mobtv_programe_curr_pane_t1

0xe3ad,	// (0x000ab29b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x000acb3f) main_mobtv_programe_curr_pane_t

0xe3bb,	// (0x000ab2a9) main_mobtv_programe_next_pane_t1

0xe3c9,	// (0x000ab2b7) main_mobtv_programe_next_pane_t2

0xe3d7,	// (0x000ab2c5) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x000acb44) main_mobtv_programe_next_pane_t

0x9bd5,	// (0x000a6ac3) bg_popup_mobtv_noti_window_pane

0xe3e5,	// (0x000ab2d3) popup_mobtv_noti_window_g1

0xe3ed,	// (0x000ab2db) popup_mobtv_noti_window_t1

0xe416,	// (0x000ab304) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x000acb4b) popup_mobtv_noti_window_t

0xcc6e,	// (0x000a9b5c) bg_popup_mobtv_noti_window_pane_g1

0x9bd5,	// (0x000a6ac3) sc_clock_pane

0x9bd5,	// (0x000a6ac3) main_fs_bigclock_pane

0x7882,	// (0x000a4770) blid2_tripm_pane_t4_ParamLimits

0x7882,	// (0x000a4770) blid2_tripm_pane_t4

0x82dd,	// (0x000a51cb) sc_clock_pane_g1_ParamLimits

0x82dd,	// (0x000a51cb) sc_clock_pane_g1

0x82eb,	// (0x000a51d9) sc_clock_pane_t1_ParamLimits

0x82eb,	// (0x000a51d9) sc_clock_pane_t1

0x8300,	// (0x000a51ee) sc_clock_pane_t2_ParamLimits

0x8300,	// (0x000a51ee) sc_clock_pane_t2

0x8312,	// (0x000a5200) sc_clock_pane_t3_ParamLimits

0x8312,	// (0x000a5200) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x000acb50) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x000acb50) sc_clock_pane_t

0x91bd,	// (0x000a60ab) main_fs_bigclock_indicator_pane_ParamLimits

0x91bd,	// (0x000a60ab) main_fs_bigclock_indicator_pane

0x83a5,	// (0x000a5293) main_fs_bigclock_pane_g1_ParamLimits

0x83a5,	// (0x000a5293) main_fs_bigclock_pane_g1

0x91c9,	// (0x000a60b7) main_fs_bigclock_pane_t1_ParamLimits

0x91c9,	// (0x000a60b7) main_fs_bigclock_pane_t1

0x91db,	// (0x000a60c9) main_fs_bigclock_pane_t2_ParamLimits

0x91db,	// (0x000a60c9) main_fs_bigclock_pane_t2

0x91ef,	// (0x000a60dd) main_fs_bigclock_pane_t3_ParamLimits

0x91ef,	// (0x000a60dd) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x000acd5a) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x000acd5a) main_fs_bigclock_pane_t

0xec5f,	// (0x000abb4d) main_fs_bigclock_indicator_pane_g1

0xe0cb,	// (0x000aafb9) ncim_query_content_pane_g2_ParamLimits

0xe0cb,	// (0x000aafb9) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x000acadd) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x000acadd) ncim_query_content_pane_g

0x8324,	// (0x000a5212) sc_clock_pane_t4_ParamLimits

0x8324,	// (0x000a5212) sc_clock_pane_t4

0xa25a,	// (0x000a7148) main_radioblah_pane

0xd5c9,	// (0x000aa4b7) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5c9,	// (0x000aa4b7) cell_call4_button_pane_t1_copy1

0x7f97,	// (0x000a4e85) main_ncimui_pane_t1_ParamLimits

0x7f97,	// (0x000a4e85) main_ncimui_pane_t1

0x7fb1,	// (0x000a4e9f) main_ncimui_pane_t2_ParamLimits

0x7fb1,	// (0x000a4e9f) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x000acad6) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x000acad6) main_ncimui_pane_t

0xe569,	// (0x000ab457) main_radioblah_anim_pane_ParamLimits

0xe569,	// (0x000ab457) main_radioblah_anim_pane

0xe57a,	// (0x000ab468) main_radioblah_info_pane_ParamLimits

0xe57a,	// (0x000ab468) main_radioblah_info_pane

0xe58e,	// (0x000ab47c) main_radioblah_pane_t1_ParamLimits

0xe58e,	// (0x000ab47c) main_radioblah_pane_t1

0xe5aa,	// (0x000ab498) main_radioblah_pane_t2_ParamLimits

0xe5aa,	// (0x000ab498) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x000acb71) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x000acb71) main_radioblah_pane_t

0x83f7,	// (0x000a52e5) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83f7,	// (0x000a52e5) main_radioblah_rocker_ctrl_pane

0xe5f2,	// (0x000ab4e0) main_radioblah_info_pane_t1_ParamLimits

0xe5f2,	// (0x000ab4e0) main_radioblah_info_pane_t1

0x8440,	// (0x000a532e) main_radioblah_info_pane_t2_ParamLimits

0x8440,	// (0x000a532e) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x000acb7a) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x000acb7a) main_radioblah_info_pane_t

0xcc6e,	// (0x000a9b5c) main_radioblah_rocker_ctrl_pane_g1

0x84f0,	// (0x000a53de) main_radioblah_rocker_ctrl_pane_g2

0x84f8,	// (0x000a53e6) main_radioblah_rocker_ctrl_pane_g3

0x8500,	// (0x000a53ee) main_radioblah_rocker_ctrl_pane_g4

0x8508,	// (0x000a53f6) main_radioblah_rocker_ctrl_pane_g5

0x8510,	// (0x000a53fe) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x000acb83) main_radioblah_rocker_ctrl_pane_g

0x7f49,	// (0x000a4e37) main_cset_text2_pane_t1_copy1_ParamLimits

0x63e7,	// (0x000a32d5) cam4_image_uncrop_qvga_pane

0x653a,	// (0x000a3428) vid4_image_uncrop_qcif_pane

0x7a14,	// (0x000a4902) cam6_image_uncrop_qvga_pane_ParamLimits

0x7a14,	// (0x000a4902) cam6_image_uncrop_qvga_pane

0xddce,	// (0x000aacbc) vid6_image_uncrop_qcif_pane_ParamLimits

0xddce,	// (0x000aacbc) vid6_image_uncrop_qcif_pane

0x9bd5,	// (0x000a6ac3) bg_popup_preview_window_pane_cp03

0xe07d,	// (0x000aaf6b) list_cset_text2_pane

0xe085,	// (0x000aaf73) main_cset6_text2_pane_g1

0xe08d,	// (0x000aaf7b) main_cset6_text2_pane_t1

0x8518,	// (0x000a5406) list_cset_text2_pane_t1_ParamLimits

0x8518,	// (0x000a5406) list_cset_text2_pane_t1

0xa25a,	// (0x000a7148) main_radioblah_pane_ParamLimits

0x8285,	// (0x000a5173) main_mobtv_info_pane_t3_ParamLimits

0x8285,	// (0x000a5173) main_mobtv_info_pane_t3

0x83e5,	// (0x000a52d3) main_radioblah_pane_g1

0x8410,	// (0x000a52fe) main_radioblah_info_pane_g1

0x8495,	// (0x000a5383) main_radioblah_info_pane_t3_ParamLimits

0x8495,	// (0x000a5383) main_radioblah_info_pane_t3

0x3083,	// (0x0009ff71) highlight_cell_cale_month_pane_ParamLimits

0x3083,	// (0x0009ff71) highlight_cell_cale_month_pane

0x9bd5,	// (0x000a6ac3) main_phob_fisheye_pane

0xcf7a,	// (0x000a9e68) scroll_pane_cp0031_ParamLimits

0xcf7a,	// (0x000a9e68) scroll_pane_cp0031

0xdee0,	// (0x000aadce) wait_bar_pane_cp08_ParamLimits

0x7c22,	// (0x000a4b10) cset_list_set_pane_copy1_ParamLimits

0xe62c,	// (0x000ab51a) highlight_cell_cale_month_pane_g1

0x852f,	// (0x000a541d) highlight_cell_cale_month_pane_t1

0xdb8f,	// (0x000aaa7d) list_gen_pane_cp01

0xd7ae,	// (0x000aa69c) scroll_pane_01

0x853d,	// (0x000a542b) list_single_double_fisheye_pane

0x8546,	// (0x000a5434) list_double_fisheye_pane_g1_ParamLimits

0x8546,	// (0x000a5434) list_double_fisheye_pane_g1

0x8552,	// (0x000a5440) list_double_fisheye_pane_g2_ParamLimits

0x8552,	// (0x000a5440) list_double_fisheye_pane_g2

0x8566,	// (0x000a5454) list_double_fisheye_pane_g3_ParamLimits

0x8566,	// (0x000a5454) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x000acb90) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x000acb90) list_double_fisheye_pane_g

0x858f,	// (0x000a547d) list_double_fisheye_pane_t1_ParamLimits

0x858f,	// (0x000a547d) list_double_fisheye_pane_t1

0x85aa,	// (0x000a5498) list_double_fisheye_pane_t2_ParamLimits

0x85aa,	// (0x000a5498) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x000acb9b) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x000acb9b) list_double_fisheye_pane_t

0x9bd5,	// (0x000a6ac3) main_call5_pane

0x834a,	// (0x000a5238) sc_swipe_pane_ParamLimits

0x834a,	// (0x000a5238) sc_swipe_pane

0x85d8,	// (0x000a54c6) call5_image_pane_ParamLimits

0x85d8,	// (0x000a54c6) call5_image_pane

0x85ea,	// (0x000a54d8) call5_swipe_1_pane_ParamLimits

0x85ea,	// (0x000a54d8) call5_swipe_1_pane

0x85f6,	// (0x000a54e4) call5_swipe_2_pane_ParamLimits

0x85f6,	// (0x000a54e4) call5_swipe_2_pane

0x8612,	// (0x000a5500) popup_call5_audio_first_window_ParamLimits

0x8612,	// (0x000a5500) popup_call5_audio_first_window

0xce9e,	// (0x000a9d8c) call5_swipe_1_pane_g1_ParamLimits

0xce9e,	// (0x000a9d8c) call5_swipe_1_pane_g1

0xe634,	// (0x000ab522) call5_swipe_1_pane_g2_ParamLimits

0xe634,	// (0x000ab522) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x000acba0) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x000acba0) call5_swipe_1_pane_g

0xe640,	// (0x000ab52e) call5_swipe_1_pane_t1_ParamLimits

0xe640,	// (0x000ab52e) call5_swipe_1_pane_t1

0xce9e,	// (0x000a9d8c) call5_swipe_2_pane_g1_ParamLimits

0xce9e,	// (0x000a9d8c) call5_swipe_2_pane_g1

0xe655,	// (0x000ab543) call5_swipe_2_pane_g2_ParamLimits

0xe655,	// (0x000ab543) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x000acba5) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x000acba5) call5_swipe_2_pane_g

0xe661,	// (0x000ab54f) call5_swipe_2_pane_t1_ParamLimits

0xe661,	// (0x000ab54f) call5_swipe_2_pane_t1

0xe676,	// (0x000ab564) sc_swipe_pane_g1_ParamLimits

0xe676,	// (0x000ab564) sc_swipe_pane_g1

0xe683,	// (0x000ab571) sc_swipe_pane_g2_ParamLimits

0xe683,	// (0x000ab571) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x000acbaa) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x000acbaa) sc_swipe_pane_g

0xe68f,	// (0x000ab57d) sc_swipe_pane_t1_ParamLimits

0xe68f,	// (0x000ab57d) sc_swipe_pane_t1

0x9bd5,	// (0x000a6ac3) main_cmail_launcher_pane

0x8622,	// (0x000a5510) aid_size_cell_cmail_l_ParamLimits

0x8622,	// (0x000a5510) aid_size_cell_cmail_l

0x8632,	// (0x000a5520) grid_cmail_l_pane_ParamLimits

0x8632,	// (0x000a5520) grid_cmail_l_pane

0x8642,	// (0x000a5530) cell_cmail_l_pane_ParamLimits

0x8642,	// (0x000a5530) cell_cmail_l_pane

0x8658,	// (0x000a5546) cell_cmail_l_pane_g1_ParamLimits

0x8658,	// (0x000a5546) cell_cmail_l_pane_g1

0x8664,	// (0x000a5552) cell_cmail_l_pane_t1_ParamLimits

0x8664,	// (0x000a5552) cell_cmail_l_pane_t1

0xe6a4,	// (0x000ab592) cell_cmail_l_pane_t2_ParamLimits

0xe6a4,	// (0x000ab592) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x000acbaf) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x000acbaf) cell_cmail_l_pane_t

0xa25a,	// (0x000a7148) grid_highlight_pane_cp018_ParamLimits

0xa25a,	// (0x000a7148) grid_highlight_pane_cp018

0x0c65,	// (0x0009db53) main2_pane_ParamLimits

0x0c65,	// (0x0009db53) main2_pane

0xa92d,	// (0x000a781b) popup_sp_fs_action_menu_bg_pane_g1

0xa935,	// (0x000a7823) popup_sp_fs_action_menu_bg_pane_g2

0xa93d,	// (0x000a782b) popup_sp_fs_action_menu_bg_pane_g3

0xa945,	// (0x000a7833) popup_sp_fs_action_menu_bg_pane_g4

0xa94d,	// (0x000a783b) popup_sp_fs_action_menu_bg_pane_g5

0xa955,	// (0x000a7843) popup_sp_fs_action_menu_bg_pane_g6

0xa95d,	// (0x000a784b) popup_sp_fs_action_menu_bg_pane_g7

0xa965,	// (0x000a7853) popup_sp_fs_action_menu_bg_pane_g8

0xa96d,	// (0x000a785b) popup_sp_fs_action_menu_bg_pane_g9

0xa975,	// (0x000a7863) popup_sp_fs_action_menu_bg_pane_g10

0xa975,	// (0x000a7863) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000ac078) popup_sp_fs_action_menu_bg_pane_g

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t3_g3_g1

0x1ed3,	// (0x0009edc1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ed3,	// (0x0009edc1) list_medium_line_x2_t3_g3_g2

0x1edf,	// (0x0009edcd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1edf,	// (0x0009edcd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000ac126) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000ac126) list_medium_line_x2_t3_g3_g

0x1eeb,	// (0x0009edd9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1eeb,	// (0x0009edd9) list_medium_line_x2_t3_g3_t1

0x1f00,	// (0x0009edee) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f00,	// (0x0009edee) list_medium_line_x2_t3_g3_t2

0x1f14,	// (0x0009ee02) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f14,	// (0x0009ee02) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000ac12d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000ac12d) list_medium_line_x2_t3_g3_t

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t3_g2_g1

0x1edf,	// (0x0009edcd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1edf,	// (0x0009edcd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000ac134) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000ac134) list_medium_line_x2_t3_g2_g

0x1f29,	// (0x0009ee17) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f29,	// (0x0009ee17) list_medium_line_x2_t3_g2_t1

0x1f3f,	// (0x0009ee2d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f3f,	// (0x0009ee2d) list_medium_line_x2_t3_g2_t2

0x1f51,	// (0x0009ee3f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f51,	// (0x0009ee3f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000ac139) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000ac139) list_medium_line_x2_t3_g2_t

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t4_g4_g1

0x1f6f,	// (0x0009ee5d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f6f,	// (0x0009ee5d) list_medium_line_x2_t4_g4_g2

0x1ed3,	// (0x0009edc1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ed3,	// (0x0009edc1) list_medium_line_x2_t4_g4_g3

0x1f7b,	// (0x0009ee69) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f7b,	// (0x0009ee69) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000ac140) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000ac140) list_medium_line_x2_t4_g4_g

0x1f87,	// (0x0009ee75) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f87,	// (0x0009ee75) list_medium_line_x2_t4_g4_t1

0x1f9e,	// (0x0009ee8c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1f9e,	// (0x0009ee8c) list_medium_line_x2_t4_g4_t2

0x1fb3,	// (0x0009eea1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1fb3,	// (0x0009eea1) list_medium_line_x2_t4_g4_t3

0x1fc5,	// (0x0009eeb3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1fc5,	// (0x0009eeb3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000ac149) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000ac149) list_medium_line_x2_t4_g4_t

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t2_g4_g1

0x1f6f,	// (0x0009ee5d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f6f,	// (0x0009ee5d) list_medium_line_x2_t2_g4_g2

0x1ed3,	// (0x0009edc1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ed3,	// (0x0009edc1) list_medium_line_x2_t2_g4_g3

0x1edf,	// (0x0009edcd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1edf,	// (0x0009edcd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000ac1b0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000ac1b0) list_medium_line_x2_t2_g4_g

0x30a9,	// (0x0009ff97) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30a9,	// (0x0009ff97) list_medium_line_x2_t2_g4_t1

0x1f14,	// (0x0009ee02) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f14,	// (0x0009ee02) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000ac1b9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000ac1b9) list_medium_line_x2_t2_g4_t

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t2_g3_g1

0x1ed3,	// (0x0009edc1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ed3,	// (0x0009edc1) list_medium_line_x2_t2_g3_g2

0x1edf,	// (0x0009edcd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1edf,	// (0x0009edcd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000ac126) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000ac126) list_medium_line_x2_t2_g3_g

0x30be,	// (0x0009ffac) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30be,	// (0x0009ffac) list_medium_line_x2_t2_g3_t1

0x1f14,	// (0x0009ee02) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f14,	// (0x0009ee02) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000ac1be) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000ac1be) list_medium_line_x2_t2_g3_t

0x3254,	// (0x000a0142) main_sp_fs_list_pane_ParamLimits

0x3254,	// (0x000a0142) main_sp_fs_list_pane

0x3260,	// (0x000a014e) sp_fs_scroll_pane_ParamLimits

0x3260,	// (0x000a014e) sp_fs_scroll_pane

0x326c,	// (0x000a015a) list_medium_line_x2_t3_t1

0x327c,	// (0x000a016a) list_medium_line_x2_t3_t2

0x328a,	// (0x000a0178) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000ac209) list_medium_line_x2_t3_t

0x3298,	// (0x000a0186) list_medium_line_x3_t4_t1

0x32a8,	// (0x000a0196) list_medium_line_x3_t4_t2

0x32b6,	// (0x000a01a4) list_medium_line_x3_t4_t3

0x328a,	// (0x000a0178) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000ac210) list_medium_line_x3_t4_t

0x32c4,	// (0x000a01b2) list_medium_line_x4_t5_t1

0x32d4,	// (0x000a01c2) list_medium_line_x4_t5_t2

0x32b6,	// (0x000a01a4) list_medium_line_x4_t5_t3

0x32e2,	// (0x000a01d0) list_medium_line_x4_t5_t4

0x328a,	// (0x000a0178) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000ac219) list_medium_line_x4_t5_t

0x1ec7,	// (0x0009edb5) list_medium_line_t4_g4_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_t4_g4_g1

0x1f7b,	// (0x0009ee69) list_medium_line_t4_g4_g2_ParamLimits

0x1f7b,	// (0x0009ee69) list_medium_line_t4_g4_g2

0x32f0,	// (0x000a01de) list_medium_line_t4_g4_g3_ParamLimits

0x32f0,	// (0x000a01de) list_medium_line_t4_g4_g3

0x1edf,	// (0x0009edcd) list_medium_line_t4_g4_g4_ParamLimits

0x1edf,	// (0x0009edcd) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000ac224) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000ac224) list_medium_line_t4_g4_g

0x32fc,	// (0x000a01ea) list_medium_line_t4_g4_t1_ParamLimits

0x32fc,	// (0x000a01ea) list_medium_line_t4_g4_t1

0x3311,	// (0x000a01ff) list_medium_line_t4_g4_t2_ParamLimits

0x3311,	// (0x000a01ff) list_medium_line_t4_g4_t2

0x3327,	// (0x000a0215) list_medium_line_t4_g4_t3_ParamLimits

0x3327,	// (0x000a0215) list_medium_line_t4_g4_t3

0x1f14,	// (0x0009ee02) list_medium_line_t4_g4_t4_ParamLimits

0x1f14,	// (0x0009ee02) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000ac22d) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000ac22d) list_medium_line_t4_g4_t

0x3450,	// (0x000a033e) chi_dic_find_pane_g1

0x44a7,	// (0x000a1395) main_tport_pane

0xa285,	// (0x000a7173) list_medium_line_plain_t1

0xa293,	// (0x000a7181) list_medium_line_t2_g2_g1_ParamLimits

0xa293,	// (0x000a7181) list_medium_line_t2_g2_g1

0xb08d,	// (0x000a7f7b) list_medium_line_t2_g2_g2_ParamLimits

0xb08d,	// (0x000a7f7b) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000ac8ee) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000ac8ee) list_medium_line_t2_g2_g

0x701d,	// (0x000a3f0b) list_medium_line_t2_g2_t1_ParamLimits

0x701d,	// (0x000a3f0b) list_medium_line_t2_g2_t1

0x7037,	// (0x000a3f25) list_medium_line_t2_g2_t2_ParamLimits

0x7037,	// (0x000a3f25) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000ac8f3) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000ac8f3) list_medium_line_t2_g2_t

0xa33b,	// (0x000a7229) aid_sp_fs_list_icon_a_sm

0xb099,	// (0x000a7f87) aid_sp_fs_list_icon_d

0xa343,	// (0x000a7231) aid_sp_fs_text_primary

0xa34c,	// (0x000a723a) aid_sp_fs_text_secondary

0x76c8,	// (0x000a45b6) list_medium_line

0x76c8,	// (0x000a45b6) list_medium_line_g2

0x76c8,	// (0x000a45b6) list_medium_line_g3

0x76c8,	// (0x000a45b6) list_medium_line_plain

0x76c8,	// (0x000a45b6) list_medium_line_plain_t2

0x76c8,	// (0x000a45b6) list_medium_line_plain_t3

0x76c8,	// (0x000a45b6) list_medium_line_right_icon

0x76c8,	// (0x000a45b6) list_medium_line_right_iconx2

0x76c8,	// (0x000a45b6) list_medium_line_t2

0x76c8,	// (0x000a45b6) list_medium_line_t2_g2

0x76c8,	// (0x000a45b6) list_medium_line_t2_g3

0x76c8,	// (0x000a45b6) list_medium_line_t2_right_icon

0x76c8,	// (0x000a45b6) list_medium_line_t2_right_iconx2

0x76c8,	// (0x000a45b6) list_medium_line_t3

0x76c8,	// (0x000a45b6) list_medium_line_t3_g2

0x76c8,	// (0x000a45b6) list_medium_line_t3_g3

0x76c8,	// (0x000a45b6) list_medium_line_t3_right_iconx2

0x76d1,	// (0x000a45bf) list_medium_line_t4_g4

0x76da,	// (0x000a45c8) list_medium_line_x2

0x76da,	// (0x000a45c8) list_medium_line_x2_t2_g2

0x76da,	// (0x000a45c8) list_medium_line_x2_t2_g3

0x76da,	// (0x000a45c8) list_medium_line_x2_t2_g4

0x76da,	// (0x000a45c8) list_medium_line_x2_t3

0x76da,	// (0x000a45c8) list_medium_line_x2_t3_g2

0x76da,	// (0x000a45c8) list_medium_line_x2_t3_g3

0x76da,	// (0x000a45c8) list_medium_line_x2_t3_g4

0x76da,	// (0x000a45c8) list_medium_line_x2_t4_g2

0x76da,	// (0x000a45c8) list_medium_line_x2_t4_g4

0x76e3,	// (0x000a45d1) list_medium_line_x3

0x76e3,	// (0x000a45d1) list_medium_line_x3_t4

0x76e3,	// (0x000a45d1) list_medium_line_x3_t4_g4

0x76d1,	// (0x000a45bf) list_medium_line_x4_t4

0x76d1,	// (0x000a45bf) list_medium_line_x4_t4_g7

0x76d1,	// (0x000a45bf) list_medium_line_x4_t5

0x76ec,	// (0x000a45da) list_single_fs_dyc_pane_ParamLimits

0x76ec,	// (0x000a45da) list_single_fs_dyc_pane

0x1ec7,	// (0x0009edb5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x4_t4_g7_g1

0x7e7a,	// (0x000a4d68) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e7a,	// (0x000a4d68) list_medium_line_x4_t4_g7_g2

0x7e86,	// (0x000a4d74) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e86,	// (0x000a4d74) list_medium_line_x4_t4_g7_g3

0x7e95,	// (0x000a4d83) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e95,	// (0x000a4d83) list_medium_line_x4_t4_g7_g4

0x7ea1,	// (0x000a4d8f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ea1,	// (0x000a4d8f) list_medium_line_x4_t4_g7_g5

0x7eb0,	// (0x000a4d9e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7eb0,	// (0x000a4d9e) list_medium_line_x4_t4_g7_g6

0x7ebf,	// (0x000a4dad) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7ebf,	// (0x000a4dad) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x000acab7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x000acab7) list_medium_line_x4_t4_g7_g

0x7ecb,	// (0x000a4db9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ecb,	// (0x000a4db9) list_medium_line_x4_t4_g7_t1

0x7ee0,	// (0x000a4dce) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7ee0,	// (0x000a4dce) list_medium_line_x4_t4_g7_t2

0x7ef5,	// (0x000a4de3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7ef5,	// (0x000a4de3) list_medium_line_x4_t4_g7_t3

0x7f0a,	// (0x000a4df8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f0a,	// (0x000a4df8) list_medium_line_x4_t4_g7_t4

0x7f1c,	// (0x000a4e0a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f1c,	// (0x000a4e0a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x000acac6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x000acac6) list_medium_line_x4_t4_g7_t

0x7f2e,	// (0x000a4e1c) list_single_dyc_row_pane_ParamLimits

0x7f2e,	// (0x000a4e1c) list_single_dyc_row_pane

0x85cc,	// (0x000a54ba) call5_gesture_pane_ParamLimits

0x85cc,	// (0x000a54ba) call5_gesture_pane

0x8602,	// (0x000a54f0) call5_windows_pane_ParamLimits

0x8602,	// (0x000a54f0) call5_windows_pane

0x867a,	// (0x000a5568) call5_swipe_1_pane_cp_ParamLimits

0x867a,	// (0x000a5568) call5_swipe_1_pane_cp

0x8686,	// (0x000a5574) call5_swipe_2_pane_cp_ParamLimits

0x8686,	// (0x000a5574) call5_swipe_2_pane_cp

0xaa38,	// (0x000a7926) call5_image_pane_cp

0x8692,	// (0x000a5580) popup_call5_audio_first_window_cp_ParamLimits

0x8692,	// (0x000a5580) popup_call5_audio_first_window_cp

0xe676,	// (0x000ab564) call5_swipe_1_pane_g1_cp_ParamLimits

0xe676,	// (0x000ab564) call5_swipe_1_pane_g1_cp

0xe6b6,	// (0x000ab5a4) call5_swipe_1_pane_g2_cp

0xe68f,	// (0x000ab57d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe68f,	// (0x000ab57d) call5_swipe_1_pane_t1_cp

0xe676,	// (0x000ab564) call5_swipe_2_pane_g1_cp_ParamLimits

0xe676,	// (0x000ab564) call5_swipe_2_pane_g1_cp

0xe6be,	// (0x000ab5ac) call5_swipe_2_pane_g2_cp

0xe6c6,	// (0x000ab5b4) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6c6,	// (0x000ab5b4) call5_swipe_2_pane_t1_cp

0xa25a,	// (0x000a7148) main_sp_fs_email_pane

0xe6db,	// (0x000ab5c9) main_sp_fs_listscroll_pane_te

0xa355,	// (0x000a7243) popup_sp_fs_action_menu_pane_ParamLimits

0xa355,	// (0x000a7243) popup_sp_fs_action_menu_pane

0xcc6e,	// (0x000a9b5c) bg_sp_fs_ctrlbar_pane_g1

0xd223,	// (0x000aa111) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd235,	// (0x000aa123) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd22c,	// (0x000aa11a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6e,	// (0x000a9b5c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x000acbb4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca4d,	// (0x000a993b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca4d,	// (0x000a993b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6e4,	// (0x000ab5d2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6e4,	// (0x000ab5d2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f0,	// (0x000ab5de) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6f0,	// (0x000ab5de) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x000acbbd) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x000acbbd) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6fc,	// (0x000ab5ea) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6fc,	// (0x000ab5ea) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb0a1,	// (0x000a7f8f) list_medium_line_t2_right_icon_g1

0x86a0,	// (0x000a558e) list_medium_line_t2_right_icon_t1

0x86b0,	// (0x000a559e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x000acbc2) list_medium_line_t2_right_icon_t

0xc81d,	// (0x000a970b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc81d,	// (0x000a970b) bg_sp_fs_ctrlbar_pane

0x8717,	// (0x000a5605) main_sp_fs_ctrlbar_button_pane_cp01

0x871f,	// (0x000a560d) main_sp_fs_ctrlbar_ddmenu_pane

0xe74e,	// (0x000ab63c) main_sp_fs_ctrlbar_pane_g1

0xe75a,	// (0x000ab648) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x000acbc7) main_sp_fs_ctrlbar_pane_g

0xe766,	// (0x000ab654) main_sp_fs_ctrlbar_pane_t1

0x8729,	// (0x000a5617) main_sp_fs_ctrlbar_pane

0x8743,	// (0x000a5631) main_sp_fs_listscroll_pane_te_cp01

0x8754,	// (0x000a5642) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8754,	// (0x000a5642) popup_sp_fs_action_menu_pane_cp01

0xa25a,	// (0x000a7148) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa25a,	// (0x000a7148) bg_sp_fs_highlight_list_pane_cp01

0xa39b,	// (0x000a7289) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa39b,	// (0x000a7289) sp_fs_action_menu_list_gene_pane_g1

0xe796,	// (0x000ab684) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe796,	// (0x000ab684) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x000acbd1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x000acbd1) sp_fs_action_menu_list_gene_pane_g

0xa3aa,	// (0x000a7298) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa3aa,	// (0x000a7298) sp_fs_action_menu_list_gene_pane_t1

0xa3c2,	// (0x000a72b0) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa3c2,	// (0x000a72b0) sp_fs_action_menu_list_gene_pane

0xe7a3,	// (0x000ab691) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7a3,	// (0x000ab691) popup_sp_fs_action_menu_bg_pane

0xa3e5,	// (0x000a72d3) sp_fs_action_menu_list_pane_ParamLimits

0xa3e5,	// (0x000a72d3) sp_fs_action_menu_list_pane

0xe7b1,	// (0x000ab69f) sp_fs_scroll_pane_cp01_ParamLimits

0xe7b1,	// (0x000ab69f) sp_fs_scroll_pane_cp01

0x8782,	// (0x000a5670) list_medium_line_plain_t2_t1

0x8792,	// (0x000a5680) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x000acbd6) list_medium_line_plain_t2_t

0x87a0,	// (0x000a568e) list_medium_line_plain_t3_t1

0x87b0,	// (0x000a569e) list_medium_line_plain_t3_t2

0x87be,	// (0x000a56ac) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x000acbdb) list_medium_line_plain_t3_t

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t2_g2_g1

0x1edf,	// (0x0009edcd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1edf,	// (0x0009edcd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000ac134) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000ac134) list_medium_line_x2_t2_g2_g

0x32fc,	// (0x000a01ea) list_medium_line_x2_t2_g2_t1_ParamLimits

0x32fc,	// (0x000a01ea) list_medium_line_x2_t2_g2_t1

0x1f14,	// (0x0009ee02) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f14,	// (0x0009ee02) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x000acbe2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x000acbe2) list_medium_line_x2_t2_g2_t

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t4_g2_g1

0x87cc,	// (0x000a56ba) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87cc,	// (0x000a56ba) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x000acbe7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x000acbe7) list_medium_line_x2_t4_g2_g

0x87de,	// (0x000a56cc) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87de,	// (0x000a56cc) list_medium_line_x2_t4_g2_t1

0x87f8,	// (0x000a56e6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87f8,	// (0x000a56e6) list_medium_line_x2_t4_g2_t2

0x880e,	// (0x000a56fc) list_medium_line_x2_t4_g2_t3_ParamLimits

0x880e,	// (0x000a56fc) list_medium_line_x2_t4_g2_t3

0x1f14,	// (0x0009ee02) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f14,	// (0x0009ee02) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x000acbec) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x000acbec) list_medium_line_x2_t4_g2_t

0xb0a9,	// (0x000a7f97) list_medium_line_t3_right_iconx2_g1

0xb0a1,	// (0x000a7f8f) list_medium_line_t3_right_iconx2_g2

0x8823,	// (0x000a5711) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x000acbf5) list_medium_line_t3_right_iconx2_g

0x882d,	// (0x000a571b) list_medium_line_t3_right_iconx2_t1

0x883d,	// (0x000a572b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x000acbfc) list_medium_line_t3_right_iconx2_t

0x1ec7,	// (0x0009edb5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x3_t4_g4_g1

0x1ed3,	// (0x0009edc1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ed3,	// (0x0009edc1) list_medium_line_x3_t4_g4_g2

0x1f7b,	// (0x0009ee69) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1f7b,	// (0x0009ee69) list_medium_line_x3_t4_g4_g3

0x884b,	// (0x000a5739) list_medium_line_x3_t4_g4_g4_ParamLimits

0x884b,	// (0x000a5739) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x000acc01) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x000acc01) list_medium_line_x3_t4_g4_g

0x8857,	// (0x000a5745) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8857,	// (0x000a5745) list_medium_line_x3_t4_g4_t1

0x886e,	// (0x000a575c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x886e,	// (0x000a575c) list_medium_line_x3_t4_g4_t2

0x8883,	// (0x000a5771) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8883,	// (0x000a5771) list_medium_line_x3_t4_g4_t3

0x8898,	// (0x000a5786) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8898,	// (0x000a5786) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x000acc0a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x000acc0a) list_medium_line_x3_t4_g4_t

0x88b5,	// (0x000a57a3) list_single_dyc_row_text_pane_t1_ParamLimits

0x88b5,	// (0x000a57a3) list_single_dyc_row_text_pane_t1

0x88f8,	// (0x000a57e6) list_single_dyc_row_text_pane_t2_ParamLimits

0x88f8,	// (0x000a57e6) list_single_dyc_row_text_pane_t2

0xa409,	// (0x000a72f7) list_single_dyc_row_text_pane_t3_ParamLimits

0xa409,	// (0x000a72f7) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x000acc13) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x000acc13) list_single_dyc_row_text_pane_t

0xa42d,	// (0x000a731b) list_single_dyc_row_pane_g1_ParamLimits

0xa42d,	// (0x000a731b) list_single_dyc_row_pane_g1

0xa439,	// (0x000a7327) list_single_dyc_row_pane_g2_ParamLimits

0xa439,	// (0x000a7327) list_single_dyc_row_pane_g2

0xa445,	// (0x000a7333) list_single_dyc_row_pane_g3_ParamLimits

0xa445,	// (0x000a7333) list_single_dyc_row_pane_g3

0xa451,	// (0x000a733f) list_single_dyc_row_pane_g4_ParamLimits

0xa451,	// (0x000a733f) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x000acc20) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x000acc20) list_single_dyc_row_pane_g

0xa45d,	// (0x000a734b) list_single_dyc_row_text_pane_ParamLimits

0xa45d,	// (0x000a734b) list_single_dyc_row_text_pane

0x9bd5,	// (0x000a6ac3) bg_sp_fs_scroll_pane

0xe7d7,	// (0x000ab6c5) thumb_sp_fs_scroll_pane

0xa293,	// (0x000a7181) list_medium_line_g1_ParamLimits

0xa293,	// (0x000a7181) list_medium_line_g1

0xa47c,	// (0x000a736a) list_medium_line_t1_ParamLimits

0xa47c,	// (0x000a736a) list_medium_line_t1

0x1ec7,	// (0x0009edb5) list_medium_line_x2_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x2_g1

0x1ed3,	// (0x0009edc1) list_medium_line_x2_g2_ParamLimits

0x1ed3,	// (0x0009edc1) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x000acc29) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x000acc29) list_medium_line_x2_g

0xa491,	// (0x000a737f) list_medium_line_x2_t1_ParamLimits

0xa491,	// (0x000a737f) list_medium_line_x2_t1

0x1ec7,	// (0x0009edb5) list_medium_line_x3_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x3_g1

0x1ed3,	// (0x0009edc1) list_medium_line_x3_g2_ParamLimits

0x1ed3,	// (0x0009edc1) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x000acc29) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x000acc29) list_medium_line_x3_g

0xa491,	// (0x000a737f) list_medium_line_x3_t1_ParamLimits

0xa491,	// (0x000a737f) list_medium_line_x3_t1

0xe7e0,	// (0x000ab6ce) thumb_sp_fs_scroll_pane_g1

0xe7e9,	// (0x000ab6d7) thumb_sp_fs_scroll_pane_g2

0xe7f2,	// (0x000ab6e0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000acc2e) thumb_sp_fs_scroll_pane_g

0xe7e0,	// (0x000ab6ce) bg_sp_fs_scroll_pane_g1

0xe7e9,	// (0x000ab6d7) bg_sp_fs_scroll_pane_g2

0xe7f2,	// (0x000ab6e0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000acc2e) bg_sp_fs_scroll_pane_g

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ec7,	// (0x0009edb5) list_medium_line_x2_t3_g4_g1

0x1f6f,	// (0x0009ee5d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f6f,	// (0x0009ee5d) list_medium_line_x2_t3_g4_g2

0x1ed3,	// (0x0009edc1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ed3,	// (0x0009edc1) list_medium_line_x2_t3_g4_g3

0x1edf,	// (0x0009edcd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1edf,	// (0x0009edcd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000ac1b0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000ac1b0) list_medium_line_x2_t3_g4_g

0x8a29,	// (0x000a5917) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a29,	// (0x000a5917) list_medium_line_x2_t3_g4_t1

0x8a3f,	// (0x000a592d) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a3f,	// (0x000a592d) list_medium_line_x2_t3_g4_t2

0x1f14,	// (0x0009ee02) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f14,	// (0x0009ee02) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x000acc35) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x000acc35) list_medium_line_x2_t3_g4_t

0xa293,	// (0x000a7181) list_medium_line_g2_g1_ParamLimits

0xa293,	// (0x000a7181) list_medium_line_g2_g1

0xb08d,	// (0x000a7f7b) list_medium_line_g2_g2_ParamLimits

0xb08d,	// (0x000a7f7b) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000ac8ee) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000ac8ee) list_medium_line_g2_g

0xa4a7,	// (0x000a7395) list_medium_line_g2_t1_ParamLimits

0xa4a7,	// (0x000a7395) list_medium_line_g2_t1

0xa293,	// (0x000a7181) list_medium_line_t3_g2_g1_ParamLimits

0xa293,	// (0x000a7181) list_medium_line_t3_g2_g1

0xb08d,	// (0x000a7f7b) list_medium_line_t3_g2_g2_ParamLimits

0xb08d,	// (0x000a7f7b) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000ac8ee) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000ac8ee) list_medium_line_t3_g2_g

0x8a58,	// (0x000a5946) list_medium_line_t3_g2_t1_ParamLimits

0x8a58,	// (0x000a5946) list_medium_line_t3_g2_t1

0x8a72,	// (0x000a5960) list_medium_line_t3_g2_t2_ParamLimits

0x8a72,	// (0x000a5960) list_medium_line_t3_g2_t2

0x8a88,	// (0x000a5976) list_medium_line_t3_g2_t3_ParamLimits

0x8a88,	// (0x000a5976) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x000acc3c) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x000acc3c) list_medium_line_t3_g2_t

0xb0a1,	// (0x000a7f8f) list_medium_line_right_icon_g1

0xa4bc,	// (0x000a73aa) list_medium_line_right_icon_t1

0xa293,	// (0x000a7181) list_medium_line_t2_g1_ParamLimits

0xa293,	// (0x000a7181) list_medium_line_t2_g1

0x8a9f,	// (0x000a598d) list_medium_line_t2_t1_ParamLimits

0x8a9f,	// (0x000a598d) list_medium_line_t2_t1

0x8ab9,	// (0x000a59a7) list_medium_line_t2_t2_ParamLimits

0x8ab9,	// (0x000a59a7) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x000acc43) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x000acc43) list_medium_line_t2_t

0xa293,	// (0x000a7181) list_medium_line_t3_g1_ParamLimits

0xa293,	// (0x000a7181) list_medium_line_t3_g1

0x8ace,	// (0x000a59bc) list_medium_line_t3_t1_ParamLimits

0x8ace,	// (0x000a59bc) list_medium_line_t3_t1

0x8ae5,	// (0x000a59d3) list_medium_line_t3_t2_ParamLimits

0x8ae5,	// (0x000a59d3) list_medium_line_t3_t2

0x8afa,	// (0x000a59e8) list_medium_line_t3_t3_ParamLimits

0x8afa,	// (0x000a59e8) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x000acc48) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x000acc48) list_medium_line_t3_t

0xa293,	// (0x000a7181) list_medium_line_g3_g1_ParamLimits

0xa293,	// (0x000a7181) list_medium_line_g3_g1

0xb0b1,	// (0x000a7f9f) list_medium_line_g3_g2_ParamLimits

0xb0b1,	// (0x000a7f9f) list_medium_line_g3_g2

0xb08d,	// (0x000a7f7b) list_medium_line_g3_g3_ParamLimits

0xb08d,	// (0x000a7f7b) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x000acc4f) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x000acc4f) list_medium_line_g3_g

0xa4ca,	// (0x000a73b8) list_medium_line_g3_t1_ParamLimits

0xa4ca,	// (0x000a73b8) list_medium_line_g3_t1

0xa293,	// (0x000a7181) list_medium_line_t2_g3_g1_ParamLimits

0xa293,	// (0x000a7181) list_medium_line_t2_g3_g1

0xb0b1,	// (0x000a7f9f) list_medium_line_t2_g3_g2_ParamLimits

0xb0b1,	// (0x000a7f9f) list_medium_line_t2_g3_g2

0xb08d,	// (0x000a7f7b) list_medium_line_t2_g3_g3_ParamLimits

0xb08d,	// (0x000a7f7b) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x000acc4f) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x000acc4f) list_medium_line_t2_g3_g

0x8b0c,	// (0x000a59fa) list_medium_line_t2_g3_t1_ParamLimits

0x8b0c,	// (0x000a59fa) list_medium_line_t2_g3_t1

0x8b26,	// (0x000a5a14) list_medium_line_t2_g3_t2_ParamLimits

0x8b26,	// (0x000a5a14) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x000acc56) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x000acc56) list_medium_line_t2_g3_t

0xa293,	// (0x000a7181) list_medium_line_t3_g3_g1_ParamLimits

0xa293,	// (0x000a7181) list_medium_line_t3_g3_g1

0xb0b1,	// (0x000a7f9f) list_medium_line_t3_g3_g2_ParamLimits

0xb0b1,	// (0x000a7f9f) list_medium_line_t3_g3_g2

0xb08d,	// (0x000a7f7b) list_medium_line_t3_g3_g3_ParamLimits

0xb08d,	// (0x000a7f7b) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x000acc4f) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x000acc4f) list_medium_line_t3_g3_g

0x8b3c,	// (0x000a5a2a) list_medium_line_t3_g3_t1_ParamLimits

0x8b3c,	// (0x000a5a2a) list_medium_line_t3_g3_t1

0x8b55,	// (0x000a5a43) list_medium_line_t3_g3_t2_ParamLimits

0x8b55,	// (0x000a5a43) list_medium_line_t3_g3_t2

0x8b6b,	// (0x000a5a59) list_medium_line_t3_g3_t3_ParamLimits

0x8b6b,	// (0x000a5a59) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x000acc5b) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x000acc5b) list_medium_line_t3_g3_t

0xb0a9,	// (0x000a7f97) list_medium_line_right_iconx2_g1

0xb0a1,	// (0x000a7f8f) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x000acc62) list_medium_line_right_iconx2_g

0xb0bd,	// (0x000a7fab) list_medium_line_right_iconx2_t1

0xb0a9,	// (0x000a7f97) list_medium_line_t2_right_iconx2_g1

0xb0a1,	// (0x000a7f8f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x000acc62) list_medium_line_t2_right_iconx2_g

0x8b85,	// (0x000a5a73) list_medium_line_t2_right_iconx2_t1

0x8b95,	// (0x000a5a83) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x000acc67) list_medium_line_t2_right_iconx2_t

0x8ba3,	// (0x000a5a91) list_medium_line_x4_t4_t1

0x8bb1,	// (0x000a5a9f) list_medium_line_x4_t4_t2

0x8bc1,	// (0x000a5aaf) list_medium_line_x4_t4_t3

0x8bd1,	// (0x000a5abf) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x000acc6c) list_medium_line_x4_t4_t

0x8c0b,	// (0x000a5af9) tport_appsw_pane_ParamLimits

0x8c0b,	// (0x000a5af9) tport_appsw_pane

0x8c19,	// (0x000a5b07) tport_contact_pane_ParamLimits

0x8c19,	// (0x000a5b07) tport_contact_pane

0x8c29,	// (0x000a5b17) tport_listscroll_pane_ParamLimits

0x8c29,	// (0x000a5b17) tport_listscroll_pane

0x8c39,	// (0x000a5b27) cell_tport_appsw_pane_ParamLimits

0x8c39,	// (0x000a5b27) cell_tport_appsw_pane

0xcf03,	// (0x000a9df1) tport_appsw_pane_g1_ParamLimits

0xcf03,	// (0x000a9df1) tport_appsw_pane_g1

0xe7fb,	// (0x000ab6e9) tport_contact_pane_g1

0xe804,	// (0x000ab6f2) tport_contact_pane_t1

0xe812,	// (0x000ab700) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x000acc75) tport_contact_pane_t

0xe820,	// (0x000ab70e) list_tport_pane

0xe829,	// (0x000ab717) scroll_pane_cp_030

0x8c6e,	// (0x000a5b5c) cell_tport_appsw_pane_g1

0x8c7e,	// (0x000a5b6c) cell_tport_appsw_pane_t1

0x8c8c,	// (0x000a5b7a) grid_highlight_pane_cp019

0x8c94,	// (0x000a5b82) list_tport_double_graphic_pane_ParamLimits

0x8c94,	// (0x000a5b82) list_tport_double_graphic_pane

0xa25a,	// (0x000a7148) list_highlight_pane_cp023_ParamLimits

0xa25a,	// (0x000a7148) list_highlight_pane_cp023

0x8ca1,	// (0x000a5b8f) list_tport_double_graphic_pane_g1_ParamLimits

0x8ca1,	// (0x000a5b8f) list_tport_double_graphic_pane_g1

0x8cae,	// (0x000a5b9c) list_tport_double_graphic_pane_t1_ParamLimits

0x8cae,	// (0x000a5b9c) list_tport_double_graphic_pane_t1

0x8cc3,	// (0x000a5bb1) list_tport_double_graphic_pane_t2_ParamLimits

0x8cc3,	// (0x000a5bb1) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x000acc81) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x000acc81) list_tport_double_graphic_pane_t

0x9bd5,	// (0x000a6ac3) main_cale_note_pane

0x67c1,	// (0x000a36af) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67c1,	// (0x000a36af) cell_vitu2_function_top_wide_pane_cp01

0x8299,	// (0x000a5187) wait_bar_pane_cp05_ParamLimits

0xa25a,	// (0x000a7148) listscroll_cmail_pane

0xe83a,	// (0x000ab728) list_cmail_pane

0x8cdf,	// (0x000a5bcd) list_cmail_body_pane

0x8cf8,	// (0x000a5be6) list_single_cmail_header_caption_pane

0x8d19,	// (0x000a5c07) list_single_cmail_header_detail_pane_ParamLimits

0x8d19,	// (0x000a5c07) list_single_cmail_header_detail_pane

0x8d4a,	// (0x000a5c38) list_single_cmail_header_caption_pane_t1

0x8d5a,	// (0x000a5c48) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d5a,	// (0x000a5c48) list_single_cmail_header_detail_pane_g1

0xb0cb,	// (0x000a7fb9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb0cb,	// (0x000a7fb9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x000acc86) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x000acc86) list_single_cmail_header_detail_pane_g

0xa4df,	// (0x000a73cd) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa4df,	// (0x000a73cd) list_single_cmail_header_detail_pane_t1

0xa551,	// (0x000a743f) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa551,	// (0x000a743f) list_single_cmail_header_editor_pane_bg

0xe2fc,	// (0x000ab1ea) list_cmail_body_pane_g1

0xe867,	// (0x000ab755) list_cmail_body_pane_t1

0xd690,	// (0x000aa57e) list_single_cmail_header_editor_pane_bg_g1

0xaca1,	// (0x000a7b8f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6a0,	// (0x000aa58e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd698,	// (0x000aa586) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8ba,	// (0x000aa7a8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6c0,	// (0x000aa5ae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6b0,	// (0x000aa59e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6b8,	// (0x000aa5a6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac81,	// (0x000a7b6f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d72,	// (0x000a5c60) calenote_gesture_pane_ParamLimits

0x8d72,	// (0x000a5c60) calenote_gesture_pane

0x8d8c,	// (0x000a5c7a) calenote_window_pane_ParamLimits

0x8d8c,	// (0x000a5c7a) calenote_window_pane

0xe875,	// (0x000ab763) popup_note_window_cp01

0x8da4,	// (0x000a5c92) calenote_swipe_1_pane_ParamLimits

0x8da4,	// (0x000a5c92) calenote_swipe_1_pane

0x8686,	// (0x000a5574) calenote_swipe_2_pane_ParamLimits

0x8686,	// (0x000a5574) calenote_swipe_2_pane

0xe676,	// (0x000ab564) calenote_swipe_1_pane_g1_ParamLimits

0xe676,	// (0x000ab564) calenote_swipe_1_pane_g1

0xe683,	// (0x000ab571) calenote_swipe_1_pane_g2_ParamLimits

0xe683,	// (0x000ab571) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x000acbaa) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x000acbaa) calenote_swipe_1_pane_g

0xe887,	// (0x000ab775) calenote_swipe_1_pane_t1_ParamLimits

0xe887,	// (0x000ab775) calenote_swipe_1_pane_t1

0xe676,	// (0x000ab564) calenote_swipe_2_pane_g1_ParamLimits

0xe676,	// (0x000ab564) calenote_swipe_2_pane_g1

0xe8a6,	// (0x000ab794) calenote_swipe_2_pane_g2_ParamLimits

0xe8a6,	// (0x000ab794) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x000acc92) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x000acc92) calenote_swipe_2_pane_g

0xe8b2,	// (0x000ab7a0) calenote_swipe_2_pane_t1_ParamLimits

0xe8b2,	// (0x000ab7a0) calenote_swipe_2_pane_t1

0x9bd5,	// (0x000a6ac3) main_mup_navstr_pane

0x54c0,	// (0x000a23ae) main_mup3_pane_t7_ParamLimits

0x54c0,	// (0x000a23ae) main_mup3_pane_t7

0x5ec3,	// (0x000a2db1) main_mp4_pane_g6_ParamLimits

0x5ec3,	// (0x000a2db1) main_mp4_pane_g6

0x6241,	// (0x000a312f) main_image3_pane_t4_ParamLimits

0x6241,	// (0x000a312f) main_image3_pane_t4

0x8db7,	// (0x000a5ca5) popup_navstr_preview_pane_ParamLimits

0x8db7,	// (0x000a5ca5) popup_navstr_preview_pane

0x8dc3,	// (0x000a5cb1) scroll_navstr_pane_ParamLimits

0x8dc3,	// (0x000a5cb1) scroll_navstr_pane

0x9bd5,	// (0x000a6ac3) bg_popup_preview_window_pane_cp04

0xe8d9,	// (0x000ab7c7) popup_navstr_preview_pane_t1

0x8dcf,	// (0x000a5cbd) scroll_navstr_pane_g1_ParamLimits

0x8dcf,	// (0x000a5cbd) scroll_navstr_pane_g1

0x8ddc,	// (0x000a5cca) scroll_navstr_pane_t1_ParamLimits

0x8ddc,	// (0x000a5cca) scroll_navstr_pane_t1

0xe87e,	// (0x000ab76c) bg_button_pane_cp014

0xe87e,	// (0x000ab76c) bg_button_pane_cp030

0x8572,	// (0x000a5460) list_double_fisheye_pane_g4_ParamLimits

0x8572,	// (0x000a5460) list_double_fisheye_pane_g4

0x857e,	// (0x000a546c) list_double_fisheye_pane_g5_ParamLimits

0x857e,	// (0x000a546c) list_double_fisheye_pane_g5

0xe842,	// (0x000ab730) sp_fs_scroll_pane_cp03

0xe74e,	// (0x000ab63c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe75a,	// (0x000ab648) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x000acbc7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe766,	// (0x000ab654) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8cd5,	// (0x000a5bc3) sp_fs_scroll_pane_cp02

0xa998,	// (0x000a7886) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa998,	// (0x000a7886) popup_sp_fs_calendar_preview_list_single_pane

0x9bd5,	// (0x000a6ac3) main_cam6_pano_pane

0xa25a,	// (0x000a7148) main_mup3_pane_ParamLimits

0x9bd5,	// (0x000a6ac3) main_phacti_pane

0x816c,	// (0x000a505a) bg_button_pane_cp11

0x8184,	// (0x000a5072) main_mobtv_info_pane_g2_ParamLimits

0x8184,	// (0x000a5072) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x000acb27) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x000acb27) main_mobtv_info_pane_g

0x8336,	// (0x000a5224) sc_clock_pane_t5_ParamLimits

0x8336,	// (0x000a5224) sc_clock_pane_t5

0x83e5,	// (0x000a52d3) main_radioblah_pane_g1_ParamLimits

0xe5c2,	// (0x000ab4b0) main_radioblah_pane_t3_ParamLimits

0xe5c2,	// (0x000ab4b0) main_radioblah_pane_t3

0xe5da,	// (0x000ab4c8) main_radioblah_pane_t4_ParamLimits

0xe5da,	// (0x000ab4c8) main_radioblah_pane_t4

0x8403,	// (0x000a52f1) main_radioblah_text_pane_ParamLimits

0x8403,	// (0x000a52f1) main_radioblah_text_pane

0x8410,	// (0x000a52fe) main_radioblah_info_pane_g1_ParamLimits

0x84a9,	// (0x000a5397) main_radioblah_info_pane_t4_ParamLimits

0x84a9,	// (0x000a5397) main_radioblah_info_pane_t4

0xa25a,	// (0x000a7148) main_sp_fs_calendar_pane

0x8dee,	// (0x000a5cdc) main_phacti_pane_g1

0x8df6,	// (0x000a5ce4) phacti_note_pane_ParamLimits

0x8df6,	// (0x000a5ce4) phacti_note_pane

0xe8f0,	// (0x000ab7de) phacti_term_pane_ParamLimits

0xe8f0,	// (0x000ab7de) phacti_term_pane

0xe905,	// (0x000ab7f3) phacti_note_pane_t1_ParamLimits

0xe905,	// (0x000ab7f3) phacti_note_pane_t1

0xa568,	// (0x000a7456) phacti_term_pane_g1

0xa570,	// (0x000a745e) phacti_term_pane_t1_ParamLimits

0xa570,	// (0x000a745e) phacti_term_pane_t1

0xe91c,	// (0x000ab80a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe924,	// (0x000ab812) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x000acc9c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92c,	// (0x000ab81a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92c,	// (0x000ab81a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe942,	// (0x000ab830) aid_popup_sp_fs_bg_corner_pane

0xcc6e,	// (0x000a9b5c) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bd5,	// (0x000a6ac3) popup_sp_fs_calendar_preview_bg_pane

0xe94a,	// (0x000ab838) popup_sp_fs_calendar_preview_list_pane

0xc81d,	// (0x000a970b) bg_main_sp_fs_cale_pane_ParamLimits

0xc81d,	// (0x000a970b) bg_main_sp_fs_cale_pane

0xa5a3,	// (0x000a7491) listscroll_cale_mrui_pane_ParamLimits

0xa5a3,	// (0x000a7491) listscroll_cale_mrui_pane

0xa5b8,	// (0x000a74a6) listscroll_sp_fs_schedule_track_pane

0xa5c1,	// (0x000a74af) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa5c1,	// (0x000a74af) main_sp_fs_ctrlbar_pane_cp01

0xe952,	// (0x000ab840) main_sp_fs_ribbon_pane

0xa5d4,	// (0x000a74c2) popup_sp_fs_cale_preview_window

0x8e55,	// (0x000a5d43) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e55,	// (0x000a5d43) list_single_sp_fs_schedule_track_pane

0x0dee,	// (0x0009dcdc) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0dee,	// (0x0009dcdc) bg_sp_fs_highlight_list_pane_cp03

0x8e6a,	// (0x000a5d58) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e6a,	// (0x000a5d58) list_single_sp_fs_schedule_track_pane_g1

0x8e76,	// (0x000a5d64) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e76,	// (0x000a5d64) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x000acca1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x000acca1) list_single_sp_fs_schedule_track_pane_g

0x8e82,	// (0x000a5d70) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e82,	// (0x000a5d70) list_single_sp_fs_schedule_track_pane_t1

0x8ea0,	// (0x000a5d8e) sp_fs_schedule_track_pane_ParamLimits

0x8ea0,	// (0x000a5d8e) sp_fs_schedule_track_pane

0xe95a,	// (0x000ab848) sp_fs_schedule_track_pane_g1

0xe962,	// (0x000ab850) sp_fs_schedule_track_pane_g2

0xe96a,	// (0x000ab858) sp_fs_schedule_track_pane_g3

0xe972,	// (0x000ab860) sp_fs_schedule_track_pane_g4

0xe97a,	// (0x000ab868) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x000acca6) sp_fs_schedule_track_pane_g

0xd690,	// (0x000aa57e) bg_sp_fs_schedule_viewer_highlight_g1

0xaca1,	// (0x000a7b8f) bg_sp_fs_schedule_viewer_highlight_g2

0xd698,	// (0x000aa586) bg_sp_fs_schedule_viewer_highlight_g3

0xd6a0,	// (0x000aa58e) bg_sp_fs_schedule_viewer_highlight_g4

0xd8ba,	// (0x000aa7a8) bg_sp_fs_schedule_viewer_highlight_g5

0xd6b0,	// (0x000aa59e) bg_sp_fs_schedule_viewer_highlight_g6

0xd6b8,	// (0x000aa5a6) bg_sp_fs_schedule_viewer_highlight_g7

0xd6c0,	// (0x000aa5ae) bg_sp_fs_schedule_viewer_highlight_g8

0xac81,	// (0x000a7b6f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x000accb1) bg_sp_fs_schedule_viewer_highlight_g

0x9bd5,	// (0x000a6ac3) bg_main_sp_fs_ribbon_pane

0x8eb2,	// (0x000a5da0) main_sp_fs_ribbon_pane_g1

0xe982,	// (0x000ab870) main_sp_fs_ribbon_pane_t1

0x8ebb,	// (0x000a5da9) main_sp_fs_ribbon_pane_t2

0xe991,	// (0x000ab87f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x000accc4) main_sp_fs_ribbon_pane_t

0xe9a0,	// (0x000ab88e) main_sp_fs_ribbon_scheduler_pane

0xe9a8,	// (0x000ab896) bg_main_sp_fs_ribbon_pane_g1

0xe9b1,	// (0x000ab89f) bg_main_sp_fs_ribbon_pane_g2

0xe9ba,	// (0x000ab8a8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x000acccb) bg_main_sp_fs_ribbon_pane_g

0xe9c2,	// (0x000ab8b0) main_sp_fs_ribbon_scheduler_pane_g1

0xe9cb,	// (0x000ab8b9) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d4,	// (0x000ab8c2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x000accd2) main_sp_fs_ribbon_scheduler_pane_g

0xe9dd,	// (0x000ab8cb) list_cale_mrui_pane

0x8eca,	// (0x000a5db8) sp_fs_scroll_pane_cp07_ParamLimits

0x8eca,	// (0x000a5db8) sp_fs_scroll_pane_cp07

0x8ee6,	// (0x000a5dd4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ee6,	// (0x000a5dd4) bg_sp_fs_schedule_viewer_highlight

0xe9ea,	// (0x000ab8d8) list_single_sp_fs_schedule_track_pane_cp01

0xe9f2,	// (0x000ab8e0) list_sp_fs_schedule_track_pane

0xe9fa,	// (0x000ab8e8) sp_fs_scroll_pane_cp06_ParamLimits

0xe9fa,	// (0x000ab8e8) sp_fs_scroll_pane_cp06

0xcc6e,	// (0x000a9b5c) bgmain_sp_fs_calendar_pane_g1

0x8ef3,	// (0x000a5de1) list_single_cale_mrui_pane_ParamLimits

0x8ef3,	// (0x000a5de1) list_single_cale_mrui_pane

0xa5e6,	// (0x000a74d4) list_single_cale_mrui_row_pane_ParamLimits

0xa5e6,	// (0x000a74d4) list_single_cale_mrui_row_pane

0xa5fc,	// (0x000a74ea) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa5fc,	// (0x000a74ea) list_single_cale_mrui_row_pane_g1

0xa628,	// (0x000a7516) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa628,	// (0x000a7516) list_single_cale_mrui_row_pane_t1

0x8f08,	// (0x000a5df6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f08,	// (0x000a5df6) list_single_cale_mrui_row_pane_t2

0xa63a,	// (0x000a7528) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa63a,	// (0x000a7528) list_single_cale_mrui_row_pane_t3

0xa669,	// (0x000a7557) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa669,	// (0x000a7557) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x000acce0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x000acce0) list_single_cale_mrui_row_pane_t

0x8f6e,	// (0x000a5e5c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f6e,	// (0x000a5e5c) list_single_cmail_header_editor_pane_bg_cp01

0x8f92,	// (0x000a5e80) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f92,	// (0x000a5e80) list_single_cmail_header_editor_pane_bg_cp02

0x8fae,	// (0x000a5e9c) main_radioblah_text_pane_t1_ParamLimits

0x8fae,	// (0x000a5e9c) main_radioblah_text_pane_t1

0xea19,	// (0x000ab907) cam6_indi_pane_cp01

0xea21,	// (0x000ab90f) cam6_mode_pane_cp01

0xea29,	// (0x000ab917) cam6_pano_pane

0xea32,	// (0x000ab920) cam6_zoom_pane_cp01

0xea3c,	// (0x000ab92a) cam6_pano_image_pane

0xea45,	// (0x000ab933) cam6_pano_pane_g1

0xe2fc,	// (0x000ab1ea) cam6_pano_pane_g2

0xea4e,	// (0x000ab93c) cam6_pano_pane_g3

0xea57,	// (0x000ab945) cam6_pano_pane_g4

0xd210,	// (0x000aa0fe) cam6_pano_pane_g5

0xea60,	// (0x000ab94e) cam6_pano_pane_g6

0xea68,	// (0x000ab956) cam6_pano_pane_g7

0xea70,	// (0x000ab95e) cam6_pano_pane_g8

0xea79,	// (0x000ab967) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x000acce9) cam6_pano_pane_g

0x9bd5,	// (0x000a6ac3) main_browser_tag_pane

0xe8d1,	// (0x000ab7bf) grid_navstr_albumart_pane

0xea84,	// (0x000ab972) cell_navstr_albumart_pane_ParamLimits

0xea84,	// (0x000ab972) cell_navstr_albumart_pane

0xeaa3,	// (0x000ab991) cell_navstr_albumart_pane_g1

0xc62a,	// (0x000a9518) cell_navstr_albumart_pane_g2

0xc63a,	// (0x000a9528) cell_navstr_albumart_pane_g3

0xc632,	// (0x000a9520) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x000accfc) cell_navstr_albumart_pane_g

0x8fc8,	// (0x000a5eb6) bt_list_pane_ParamLimits

0x8fc8,	// (0x000a5eb6) bt_list_pane

0x8fe1,	// (0x000a5ecf) bt_list_pane_t1

0x8ff0,	// (0x000a5ede) bt_list_pane_t2

0x0001,

0xfe17,	// (0x000acd05) bt_list_pane_t

0x9bd5,	// (0x000a6ac3) main_cale_prevew_pane

0x8fff,	// (0x000a5eed) popup_cale_preview_window_ParamLimits

0x8fff,	// (0x000a5eed) popup_cale_preview_window

0xa25a,	// (0x000a7148) bg_popup_preview_window_pane_cp05_ParamLimits

0xa25a,	// (0x000a7148) bg_popup_preview_window_pane_cp05

0xeaab,	// (0x000ab999) list_cale_preview_pane_ParamLimits

0xeaab,	// (0x000ab999) list_cale_preview_pane

0x901a,	// (0x000a5f08) list_double_cale_preview_pane_ParamLimits

0x901a,	// (0x000a5f08) list_double_cale_preview_pane

0x902e,	// (0x000a5f1c) list_single_cale_preview_pane_ParamLimits

0x902e,	// (0x000a5f1c) list_single_cale_preview_pane

0x9046,	// (0x000a5f34) list_single_cale_preview_pane_g1

0x904e,	// (0x000a5f3c) list_single_cale_preview_pane_t1_ParamLimits

0x904e,	// (0x000a5f3c) list_single_cale_preview_pane_t1

0x9063,	// (0x000a5f51) list_double_cale_preview_pane_g1

0x906b,	// (0x000a5f59) list_double_cale_preview_pane_t1_ParamLimits

0x906b,	// (0x000a5f59) list_double_cale_preview_pane_t1

0x9080,	// (0x000a5f6e) list_double_cale_preview_pane_t2_ParamLimits

0x9080,	// (0x000a5f6e) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x000acd0a) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x000acd0a) list_double_cale_preview_pane_t

0x9bd5,	// (0x000a6ac3) main_ezdial_pane

0xa25a,	// (0x000a7148) main_sp_fs_email_pane_ParamLimits

0x86be,	// (0x000a55ac) cmail_ddmenu_btn01_pane_ParamLimits

0x86be,	// (0x000a55ac) cmail_ddmenu_btn01_pane

0x86db,	// (0x000a55c9) cmail_ddmenu_btn02_pane_ParamLimits

0x86db,	// (0x000a55c9) cmail_ddmenu_btn02_pane

0x86f9,	// (0x000a55e7) cmail_ddmenu_btn03_pane_ParamLimits

0x86f9,	// (0x000a55e7) cmail_ddmenu_btn03_pane

0x8729,	// (0x000a5617) main_sp_fs_ctrlbar_pane_ParamLimits

0x8743,	// (0x000a5631) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cdf,	// (0x000a5bcd) list_cmail_body_pane_ParamLimits

0xe851,	// (0x000ab73f) bg_button_pane_cp12

0xe85a,	// (0x000ab748) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe85a,	// (0x000ab748) list_single_cmail_header_detail_pane_g3

0xa52d,	// (0x000a741b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa52d,	// (0x000a741b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x000acc8d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x000acc8d) list_single_cmail_header_detail_pane_t

0xa585,	// (0x000a7473) phacti_term_pane_t2_ParamLimits

0xa585,	// (0x000a7473) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x000acc97) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x000acc97) phacti_term_pane_t

0xeab7,	// (0x000ab9a5) aid_size_list_single_double

0x9098,	// (0x000a5f86) popup_ezdial_listscroll_window

0x90ba,	// (0x000a5fa8) popup_number_entry_window_cp01

0xaa38,	// (0x000a7926) bg_popup_call_pane_cp09

0xeac3,	// (0x000ab9b1) ezdial_list_pane

0xeacb,	// (0x000ab9b9) scroll_pane_cp23

0xca4d,	// (0x000a993b) bg_button_pane_cp028_ParamLimits

0xca4d,	// (0x000a993b) bg_button_pane_cp028

0x90c8,	// (0x000a5fb6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90c8,	// (0x000a5fb6) cmail_ddmenu_btn01_pane_g1

0x90da,	// (0x000a5fc8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90da,	// (0x000a5fc8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x000acd0f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x000acd0f) cmail_ddmenu_btn01_pane_g

0xead3,	// (0x000ab9c1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead3,	// (0x000ab9c1) cmail_ddmenu_btn01_pane_t1

0xc81d,	// (0x000a970b) bg_button_pane_cp029_ParamLimits

0xc81d,	// (0x000a970b) bg_button_pane_cp029

0x90e6,	// (0x000a5fd4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x90e6,	// (0x000a5fd4) cmail_ddmenu_btn02_pane_g1

0x90fe,	// (0x000a5fec) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x90fe,	// (0x000a5fec) cmail_ddmenu_btn02_pane_t1

0x0dee,	// (0x0009dcdc) bg_button_pane_cp031_ParamLimits

0x0dee,	// (0x0009dcdc) bg_button_pane_cp031

0x90e6,	// (0x000a5fd4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x90e6,	// (0x000a5fd4) cmail_ddmenu_btn03_pane_g1

0x90fe,	// (0x000a5fec) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x90fe,	// (0x000a5fec) cmail_ddmenu_btn03_pane_t1

0x60dc,	// (0x000a2fca) cell_dialer2_keypad_pane_t1_ParamLimits

0x60f6,	// (0x000a2fe4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x60f6,	// (0x000a2fe4) cell_dialer2_keypad_pane_t1_copy1

0x7fdd,	// (0x000a4ecb) ncimui_group_button_pane

0xa25a,	// (0x000a7148) main_sp_fs_calendar_pane_ParamLimits

0x8cf8,	// (0x000a5be6) list_single_cmail_header_caption_pane_ParamLimits

0xa59a,	// (0x000a7488) aid_recal_txt_sm_pane

0x9bd5,	// (0x000a6ac3) mian_recal_day_pane

0xa5d4,	// (0x000a74c2) popup_sp_fs_cale_preview_window_ParamLimits

0xeae9,	// (0x000ab9d7) list_recal_day_pane

0xa6b4,	// (0x000a75a2) list_single_recal_day_pane_ParamLimits

0xa6b4,	// (0x000a75a2) list_single_recal_day_pane

0xeb10,	// (0x000ab9fe) list_single_recal_day_pane_g1_ParamLimits

0xeb10,	// (0x000ab9fe) list_single_recal_day_pane_g1

0xa6c6,	// (0x000a75b4) list_single_recal_day_pane_g2_ParamLimits

0xa6c6,	// (0x000a75b4) list_single_recal_day_pane_g2

0xa6d2,	// (0x000a75c0) list_single_recal_day_pane_g3_ParamLimits

0xa6d2,	// (0x000a75c0) list_single_recal_day_pane_g3

0x9122,	// (0x000a6010) list_single_recal_day_pane_g4_ParamLimits

0x9122,	// (0x000a6010) list_single_recal_day_pane_g4

0xa6de,	// (0x000a75cc) list_single_recal_day_pane_g5_ParamLimits

0xa6de,	// (0x000a75cc) list_single_recal_day_pane_g5

0xa6ea,	// (0x000a75d8) list_single_recal_day_pane_g6_ParamLimits

0xa6ea,	// (0x000a75d8) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x000acd1e) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x000acd1e) list_single_recal_day_pane_g

0xa6fe,	// (0x000a75ec) list_single_recal_day_pane_t1

0xa710,	// (0x000a75fe) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x000acd29) list_single_recal_day_pane_t

0x913a,	// (0x000a6028) ncimui_query_button_pane_ParamLimits

0x913a,	// (0x000a6028) ncimui_query_button_pane

0x914a,	// (0x000a6038) ncimui_query_button_pane_t1_ParamLimits

0x914a,	// (0x000a6038) ncimui_query_button_pane_t1

0xeb1c,	// (0x000aba0a) ncimui_query_button_pane_t2_ParamLimits

0xeb1c,	// (0x000aba0a) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x000acd2e) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x000acd2e) ncimui_query_button_pane_t

0x915d,	// (0x000a604b) query_button_pane_ParamLimits

0x915d,	// (0x000a604b) query_button_pane

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp0028

0xeb2f,	// (0x000aba1d) query_button_pane_t1

0x44a7,	// (0x000a1395) main_tport_pane_ParamLimits

0x8be1,	// (0x000a5acf) bg_popup_window_pane_cp01_ParamLimits

0x8be1,	// (0x000a5acf) bg_popup_window_pane_cp01

0x8bef,	// (0x000a5add) heading_pane_cp08_ParamLimits

0x8bef,	// (0x000a5add) heading_pane_cp08

0x8bfd,	// (0x000a5aeb) heading_pane_cp07_ParamLimits

0x8bfd,	// (0x000a5aeb) heading_pane_cp07

0x8c6e,	// (0x000a5b5c) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x000acc7a) cell_tport_appsw_pane_g

0xa20a,	// (0x000a70f8) input_candi_list_open_g1

0xae55,	// (0x000a7d43) list_cale_time_pane_g6_ParamLimits

0xae55,	// (0x000a7d43) list_cale_time_pane_g6

0x4f2a,	// (0x000a1e18) aid_size_touch_calib_1_ParamLimits

0x4f2a,	// (0x000a1e18) aid_size_touch_calib_1

0x4f36,	// (0x000a1e24) aid_size_touch_calib_2_ParamLimits

0x4f36,	// (0x000a1e24) aid_size_touch_calib_2

0x4f44,	// (0x000a1e32) aid_size_touch_calib_3_ParamLimits

0x4f44,	// (0x000a1e32) aid_size_touch_calib_3

0x4f54,	// (0x000a1e42) aid_size_touch_calib_4_ParamLimits

0x4f54,	// (0x000a1e42) aid_size_touch_calib_4

0x4f62,	// (0x000a1e50) main_touch_calib_button_group_pane_ParamLimits

0x4f62,	// (0x000a1e50) main_touch_calib_button_group_pane

0x4f70,	// (0x000a1e5e) main_touch_calib_pane_g1_ParamLimits

0x4f7c,	// (0x000a1e6a) main_touch_calib_pane_g2_ParamLimits

0x4f88,	// (0x000a1e76) main_touch_calib_pane_g3_ParamLimits

0x4f94,	// (0x000a1e82) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000ac63f) main_touch_calib_pane_g_ParamLimits

0x4fa0,	// (0x000a1e8e) main_touch_calib_pane_t1_ParamLimits

0x4fb7,	// (0x000a1ea5) main_touch_calib_pane_t2_ParamLimits

0x4fd0,	// (0x000a1ebe) main_touch_calib_pane_t3_ParamLimits

0x4fe6,	// (0x000a1ed4) main_touch_calib_pane_t4_ParamLimits

0x4ffc,	// (0x000a1eea) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000ac648) main_touch_calib_pane_t_ParamLimits

0xcf9e,	// (0x000a9e8c) list_single_fp_cale_pane_g3_ParamLimits

0xcf9e,	// (0x000a9e8c) list_single_fp_cale_pane_g3

0x6581,	// (0x000a346f) bg_button_pane_cp012_ParamLimits

0x6581,	// (0x000a346f) bg_vkb2_func_pane_cp03_ParamLimits

0x6f8f,	// (0x000a3e7d) cell_vitu2_function_top_pane_g1_ParamLimits

0x6581,	// (0x000a346f) bg_vkb2_func_pane_cp04_ParamLimits

0x7f63,	// (0x000a4e51) main_ncimui_button_group_pane_ParamLimits

0x7f63,	// (0x000a4e51) main_ncimui_button_group_pane

0x7fcb,	// (0x000a4eb9) main_ncimui_pane_t3_ParamLimits

0x7fcb,	// (0x000a4eb9) main_ncimui_pane_t3

0xe8e7,	// (0x000ab7d5) phacti_button_group_pane

0xeab7,	// (0x000ab9a5) aid_size_list_single_double_ParamLimits

0x9098,	// (0x000a5f86) popup_ezdial_listscroll_window_ParamLimits

0x90ba,	// (0x000a5fa8) popup_number_entry_window_cp01_ParamLimits

0x916a,	// (0x000a6058) phacti_button_pane_ParamLimits

0x916a,	// (0x000a6058) phacti_button_pane

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp14

0xeb3d,	// (0x000aba2b) phacti_button_pane_t1

0x917b,	// (0x000a6069) main_touch_calib_button_pane_ParamLimits

0x917b,	// (0x000a6069) main_touch_calib_button_pane

0xa882,	// (0x000a7770) bg_button_pane_cp18_ParamLimits

0xa882,	// (0x000a7770) bg_button_pane_cp18

0xeb4b,	// (0x000aba39) main_touch_calib_button_pane_t1_ParamLimits

0xeb4b,	// (0x000aba39) main_touch_calib_button_pane_t1

0xeb61,	// (0x000aba4f) main_touch_calib_button_pane_t2_ParamLimits

0xeb61,	// (0x000aba4f) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x000acd33) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x000acd33) main_touch_calib_button_pane_t

0x9bd5,	// (0x000a6ac3) cell_ncimui_button_pane

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp032

0xeb7f,	// (0x000aba6d) cell_ncimui_button_pane_t1

0x6152,	// (0x000a3040) image3_infobar_pane_ParamLimits

0x6152,	// (0x000a3040) image3_infobar_pane

0x8358,	// (0x000a5246) fs_bigclock_status_pane_ParamLimits

0x8358,	// (0x000a5246) fs_bigclock_status_pane

0x8365,	// (0x000a5253) main_fs_bigclock_clock_pane_ParamLimits

0x8365,	// (0x000a5253) main_fs_bigclock_clock_pane

0x8381,	// (0x000a526f) main_fs_bigclock_indi_pane_ParamLimits

0x8381,	// (0x000a526f) main_fs_bigclock_indi_pane

0x83b3,	// (0x000a52a1) main_fs_bigclock_swipe_pane_ParamLimits

0x83b3,	// (0x000a52a1) main_fs_bigclock_swipe_pane

0x9bd5,	// (0x000a6ac3) main_fs_clock_dumped_data

0xe424,	// (0x000ab312) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe424,	// (0x000ab312) list_single_fs_bigclock_indicator_pane_g1

0xe44e,	// (0x000ab33c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe44e,	// (0x000ab33c) list_single_fs_bigclock_indicator_pane_g2

0xe468,	// (0x000ab356) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe468,	// (0x000ab356) list_single_fs_bigclock_indicator_pane_g3

0xe482,	// (0x000ab370) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe482,	// (0x000ab370) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x000acb5b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x000acb5b) list_single_fs_bigclock_indicator_pane_g

0xe4ad,	// (0x000ab39b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4ad,	// (0x000ab39b) list_single_fs_bigclock_indicator_pane_t1

0xe4d5,	// (0x000ab3c3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4d5,	// (0x000ab3c3) list_single_fs_bigclock_indicator_pane_t2

0xe4fd,	// (0x000ab3eb) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4fd,	// (0x000ab3eb) list_single_fs_bigclock_indicator_pane_t3

0xe525,	// (0x000ab413) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe525,	// (0x000ab413) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x000acb66) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x000acb66) list_single_fs_bigclock_indicator_pane_t

0xeb8d,	// (0x000aba7b) image3_infobar_fav_pane_ParamLimits

0xeb8d,	// (0x000aba7b) image3_infobar_fav_pane

0xeb9d,	// (0x000aba8b) image3_infobar_loc_pane_ParamLimits

0xeb9d,	// (0x000aba8b) image3_infobar_loc_pane

0xebb3,	// (0x000abaa1) image3_infobar_time_pane_ParamLimits

0xebb3,	// (0x000abaa1) image3_infobar_time_pane

0xcc6e,	// (0x000a9b5c) image3_infobar_time_pane_g1

0xebc3,	// (0x000abab1) image3_infobar_time_pane_t1

0xcc6e,	// (0x000a9b5c) image3_infobar_loc_pane_g1

0xebd1,	// (0x000ababf) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x000acd38) image3_infobar_loc_pane_g

0xebd9,	// (0x000abac7) image3_infobar_loc_pane_t1

0xcc6e,	// (0x000a9b5c) image3_infobar_fav_pane_g1

0xebe7,	// (0x000abad5) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x000acd3d) image3_infobar_fav_pane_g

0xebef,	// (0x000abadd) fs_bigclock_status_battery_pane

0xebf8,	// (0x000abae6) fs_bigclock_status_signal_pane

0xec01,	// (0x000abaef) fs_bigclock_status_title_pane

0xec0a,	// (0x000abaf8) fs_bigclock_status_signal_pane_g1

0xec13,	// (0x000abb01) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x000acd42) fs_bigclock_status_signal_pane_g

0xec1b,	// (0x000abb09) fs_bigclock_status_battery_pane_g1

0xec24,	// (0x000abb12) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x000acd47) fs_bigclock_status_battery_pane_g

0xec2c,	// (0x000abb1a) fs_bigclock_status_title_pane_t1

0xcc6e,	// (0x000a9b5c) main_fs_bigclock_clock_pane_g1

0xec3a,	// (0x000abb28) main_fs_bigclock_clock_pane_g2

0xec45,	// (0x000abb33) main_fs_bigclock_clock_pane_g3

0xec45,	// (0x000abb33) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x000acd4c) main_fs_bigclock_clock_pane_g

0xec51,	// (0x000abb3f) main_fs_bigclock_clock_pane_t1

0x918b,	// (0x000a6079) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x000acd55) main_fs_bigclock_clock_pane_t

0x919a,	// (0x000a6088) list_single_fs_bigclock_indicator_pane_ParamLimits

0x919a,	// (0x000a6088) list_single_fs_bigclock_indicator_pane

0x91ab,	// (0x000a6099) list_single_fs_bigclock_pane_ParamLimits

0x91ab,	// (0x000a6099) list_single_fs_bigclock_pane

0xec68,	// (0x000abb56) main_fs_bigclock_indicator_pane_t1

0xec77,	// (0x000abb65) list_single_fs_bigclock_pane_g1

0xec7f,	// (0x000abb6d) list_single_fs_bigclock_pane_t1

0xcc6e,	// (0x000a9b5c) main_fs_bigclock_swipe_pane_g1

0xecc2,	// (0x000abbb0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x000acd66) main_fs_bigclock_swipe_pane_g

0xecca,	// (0x000abbb8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecca,	// (0x000abbb8) main_fs_bigclock_swipe_pane_t1

0x333d,	// (0x000a022b) call_type_pane_ParamLimits

0x9bd5,	// (0x000a6ac3) main_btmg_pane

0xb0d7,	// (0x000a7fc5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb0d7,	// (0x000a7fc5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x000accd9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x000accd9) list_single_cale_mrui_row_pane_g

0xa6a2,	// (0x000a7590) list_recal_vselct_arw_lo_pane

0xeb08,	// (0x000ab9f6) list_recal_vselct_arw_up_pane

0xa6aa,	// (0x000a7598) list_recal_vselct_pane

0x9201,	// (0x000a60ef) btmg_button_pane

0x920d,	// (0x000a60fb) main_btmg_pane_g1

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp044

0xece7,	// (0x000abbd5) btmg_button_pane_t1

0xc809,	// (0x000a96f7) aid_listscroll_gen

0xa25a,	// (0x000a7148) main_cntbar_detail_pane

0xe832,	// (0x000ab720) list_cmail_folder_pane

0xe842,	// (0x000ab730) sp_fs_scroll_pane_cp03_ParamLimits

0x9215,	// (0x000a6103) list_single_fs_dyc_pane_cp01_ParamLimits

0x9215,	// (0x000a6103) list_single_fs_dyc_pane_cp01

0xecf5,	// (0x000abbe3) aid_size_cmail_indent

0xa722,	// (0x000a7610) list_single_dyc_row_pane_cp01

0x9252,	// (0x000a6140) cntbar_detail_list_pane_ParamLimits

0x9252,	// (0x000a6140) cntbar_detail_list_pane

0x9292,	// (0x000a6180) main_cntbar_detail_cont_pane_ParamLimits

0x9292,	// (0x000a6180) main_cntbar_detail_cont_pane

0x3260,	// (0x000a014e) scroll_pane_cp032_ParamLimits

0x3260,	// (0x000a014e) scroll_pane_cp032

0x929e,	// (0x000a618c) cntbar_detail_list_event_pane_ParamLimits

0x929e,	// (0x000a618c) cntbar_detail_list_event_pane

0x9260,	// (0x000a614e) cntbar_detail_list_shct_pane

0xacef,	// (0x000a7bdd) aid_list_gen

0xecfe,	// (0x000abbec) aid_scroll

0xed07,	// (0x000abbf5) aid_size_touch_scroll_bar

0x76da,	// (0x000a45c8) aid_list_double

0xed10,	// (0x000abbfe) aid_list_single

0x76c8,	// (0x000a45b6) aid_list_single_lg

0xa72b,	// (0x000a7619) aid_list_z_g_a_sm

0xb0e3,	// (0x000a7fd1) aid_list_z_g_d

0x92ae,	// (0x000a619c) aid_txt_z_prm

0x92bc,	// (0x000a61aa) aid_txt_z_prm_cp01

0x92ca,	// (0x000a61b8) aid_txt_z_sec

0x92d8,	// (0x000a61c6) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92d8,	// (0x000a61c6) main_cntbar_detail_cont_pane_g1

0x92e5,	// (0x000a61d3) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92e5,	// (0x000a61d3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x000acd6b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x000acd6b) main_cntbar_detail_cont_pane_g

0xed19,	// (0x000abc07) main_cntbar_detail_cont_pane_t1

0xed27,	// (0x000abc15) main_cntbar_detail_cont_pane_t2

0xed35,	// (0x000abc23) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x000acd70) main_cntbar_detail_cont_pane_t

0x92f1,	// (0x000a61df) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92f1,	// (0x000a61df) cell_cntbar_detail_list_shct_pane

0xed43,	// (0x000abc31) cntbar_detail_list_shct_pane_g1

0xed4c,	// (0x000abc3a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x000acd77) cntbar_detail_list_shct_pane_g

0x9305,	// (0x000a61f3) cntbar_detail_list_event_pane_g1_ParamLimits

0x9305,	// (0x000a61f3) cntbar_detail_list_event_pane_g1

0x9311,	// (0x000a61ff) cntbar_detail_list_event_pane_g2_ParamLimits

0x9311,	// (0x000a61ff) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x000acd7c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x000acd7c) cntbar_detail_list_event_pane_g

0x937f,	// (0x000a626d) cntbar_detail_list_event_pane_t1_ParamLimits

0x937f,	// (0x000a626d) cntbar_detail_list_event_pane_t1

0x9394,	// (0x000a6282) cntbar_detail_list_event_pane_t2_ParamLimits

0x9394,	// (0x000a6282) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x000acd89) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x000acd89) cntbar_detail_list_event_pane_t

0xcc6e,	// (0x000a9b5c) cell_cntbar_detail_list_shct_pane_g1

0x3710,	// (0x000a05fe) navi_pane_mv_g3

0xa25a,	// (0x000a7148) main_cntbar_detail_pane_ParamLimits

0x9bd5,	// (0x000a6ac3) main_notif_wgt_pane

0x5dfc,	// (0x000a2cea) aid_tch_main_mp4_pane_g4

0x603b,	// (0x000a2f29) popup_slider_window_cp02

0xa698,	// (0x000a7586) list_recal_day_event_pane

0x9232,	// (0x000a6120) cntbar_detail_btn_pane_ParamLimits

0x9232,	// (0x000a6120) cntbar_detail_btn_pane

0x9242,	// (0x000a6130) cntbar_detail_btn_pane_cp01_ParamLimits

0x9242,	// (0x000a6130) cntbar_detail_btn_pane_cp01

0x9260,	// (0x000a614e) cntbar_detail_list_shct_pane_ParamLimits

0x926c,	// (0x000a615a) cntbar_detail_pane_g1_ParamLimits

0x926c,	// (0x000a615a) cntbar_detail_pane_g1

0x927c,	// (0x000a616a) cntbar_detail_pane_t1_ParamLimits

0x927c,	// (0x000a616a) cntbar_detail_pane_t1

0x931d,	// (0x000a620b) cntbar_detail_list_event_pane_g3_ParamLimits

0x931d,	// (0x000a620b) cntbar_detail_list_event_pane_g3

0x9335,	// (0x000a6223) cntbar_detail_list_event_pane_g4_ParamLimits

0x9335,	// (0x000a6223) cntbar_detail_list_event_pane_g4

0x934d,	// (0x000a623b) cntbar_detail_list_event_pane_g5_ParamLimits

0x934d,	// (0x000a623b) cntbar_detail_list_event_pane_g5

0x9365,	// (0x000a6253) cntbar_detail_list_event_pane_g6_ParamLimits

0x9365,	// (0x000a6253) cntbar_detail_list_event_pane_g6

0x93a9,	// (0x000a6297) cntbar_detail_list_event_pane_t3_ParamLimits

0x93a9,	// (0x000a6297) cntbar_detail_list_event_pane_t3

0x93bb,	// (0x000a62a9) popup_notif_wgt_window_ParamLimits

0x93bb,	// (0x000a62a9) popup_notif_wgt_window

0x93cb,	// (0x000a62b9) popup_submenu_window_cp01_ParamLimits

0x93cb,	// (0x000a62b9) popup_submenu_window_cp01

0xaa38,	// (0x000a7926) bg_popup_window_pane_cp10

0xed55,	// (0x000abc43) listscroll_notif_wgt_pane

0xed67,	// (0x000abc55) list_notif_wgt_window

0xed70,	// (0x000abc5e) scroll_pane_cp033

0x93db,	// (0x000a62c9) list_notif_wgt_row_pane_ParamLimits

0x93db,	// (0x000a62c9) list_notif_wgt_row_pane

0xed79,	// (0x000abc67) aid_size_list_notif_wgt_del

0xed86,	// (0x000abc74) list_notif_wgt_row_pane_g1

0xed92,	// (0x000abc80) list_notif_wgt_row_pane_g2

0xeda6,	// (0x000abc94) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x000acd90) list_notif_wgt_row_pane_g

0xedb3,	// (0x000abca1) list_notif_wgt_row_pane_t1

0xedc9,	// (0x000abcb7) list_notif_wgt_row_pane_t2

0xeddb,	// (0x000abcc9) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x000acd97) list_notif_wgt_row_pane_t

0xd8d4,	// (0x000aa7c2) list_recal_day_event_pane_g1

0xeded,	// (0x000abcdb) list_recal_day_event_pane_t1

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp045

0xedfc,	// (0x000abcea) cntbar_detail_btn_pane_t1

0xc81d,	// (0x000a970b) main_callh_pane_ParamLimits

0xc81d,	// (0x000a970b) main_callh_pane

0x9bd5,	// (0x000a6ac3) main_coverflow0_pane

0x9bd5,	// (0x000a6ac3) main_wgtman_pane

0x83cb,	// (0x000a52b9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83cb,	// (0x000a52b9) main_fs_bigclock_unlock_btn_pane

0x8c66,	// (0x000a5b54) bg_button_pane_cp16

0x8c76,	// (0x000a5b64) cell_tport_appsw_pane_g3

0x93ec,	// (0x000a62da) cf0_flow_pane_ParamLimits

0x93ec,	// (0x000a62da) cf0_flow_pane

0xee0a,	// (0x000abcf8) listscroll_cf0_pane

0xee15,	// (0x000abd03) main_cf0_pane_g1

0x93fb,	// (0x000a62e9) main_cf0_pane_t1_ParamLimits

0x93fb,	// (0x000a62e9) main_cf0_pane_t1

0x940f,	// (0x000a62fd) main_cf0_pane_t2_ParamLimits

0x940f,	// (0x000a62fd) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x000acda3) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x000acda3) main_cf0_pane_t

0xee27,	// (0x000abd15) scroll_pane_cp11

0x9423,	// (0x000a6311) cf0_flow_pane_g1

0x942b,	// (0x000a6319) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x000acda8) cf0_flow_pane_g

0x9433,	// (0x000a6321) cf0_flow_pane_t1

0x9bd5,	// (0x000a6ac3) main_call6_pane

0x9bd5,	// (0x000a6ac3) main_calllock_pane

0x9441,	// (0x000a632f) call6_btn_grp_pane_ParamLimits

0x9441,	// (0x000a632f) call6_btn_grp_pane

0x944e,	// (0x000a633c) call6_pane_g1_ParamLimits

0x944e,	// (0x000a633c) call6_pane_g1

0x945e,	// (0x000a634c) popup_call6_1st_window_ParamLimits

0x945e,	// (0x000a634c) popup_call6_1st_window

0x946c,	// (0x000a635a) popup_call6_2nd_window_ParamLimits

0x946c,	// (0x000a635a) popup_call6_2nd_window

0x947a,	// (0x000a6368) cell_call6_btn_pane_ParamLimits

0x947a,	// (0x000a6368) cell_call6_btn_pane

0xaa38,	// (0x000a7926) bg_popup_call2_in_pane_cp03

0xee32,	// (0x000abd20) popup_call6_1st_window_g1

0xee3a,	// (0x000abd28) popup_call6_1st_window_g2

0xee42,	// (0x000abd30) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x000acdad) popup_call6_1st_window_g

0xee4a,	// (0x000abd38) popup_call6_1st_window_t1

0xee59,	// (0x000abd47) popup_call6_1st_window_t2

0xee69,	// (0x000abd57) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x000acdb4) popup_call6_1st_window_t

0xaa38,	// (0x000a7926) bg_popup_call2_in_pane_cp04

0xee32,	// (0x000abd20) popup_call6_2nd_window_g1

0xee3a,	// (0x000abd28) popup_call6_2nd_window_g2

0xee42,	// (0x000abd30) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x000acdad) popup_call6_2nd_window_g

0xee4a,	// (0x000abd38) popup_call6_2nd_window_t1

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp15

0xee79,	// (0x000abd67) cell_call6_btn_pane_g1

0xee82,	// (0x000abd70) cell_call6_btn_pane_t1

0x9489,	// (0x000a6377) listscroll_wgtman_pane_ParamLimits

0x9489,	// (0x000a6377) listscroll_wgtman_pane

0x94a5,	// (0x000a6393) wgtman_btn_pane_ParamLimits

0x94a5,	// (0x000a6393) wgtman_btn_pane

0xb2d4,	// (0x000a81c2) aid_scroll_copy1

0xee91,	// (0x000abd7f) list_wgtman_pane

0x94da,	// (0x000a63c8) wgtman_btn_pane_g1_ParamLimits

0x94da,	// (0x000a63c8) wgtman_btn_pane_g1

0x9502,	// (0x000a63f0) wgtman_btn_pane_t1_ParamLimits

0x9502,	// (0x000a63f0) wgtman_btn_pane_t1

0xee9b,	// (0x000abd89) wgtman_btn_pane_t2_ParamLimits

0xee9b,	// (0x000abd89) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x000acdbb) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x000acdbb) wgtman_btn_pane_t

0x9539,	// (0x000a6427) listrow_wgtman_pane_ParamLimits

0x9539,	// (0x000a6427) listrow_wgtman_pane

0x954d,	// (0x000a643b) listrow_wgtman_pane_g1

0x955a,	// (0x000a6448) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x000acdc0) listrow_wgtman_pane_g

0x9578,	// (0x000a6466) listrow_wgtman_pane_t1

0x9590,	// (0x000a647e) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x000acdc5) listrow_wgtman_pane_t

0x95b6,	// (0x000a64a4) wait_bar_pane_cp09

0xeeb2,	// (0x000abda0) main_calllock_btn_pane

0xeebc,	// (0x000abdaa) main_calllock_pane_g1

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp17

0xeec8,	// (0x000abdb6) main_calllock_btn_pane_g1

0xeed1,	// (0x000abdbf) main_calllock_btn_pane_t1

0x9bd5,	// (0x000a6ac3) main_dialer3_pane

0x9bd5,	// (0x000a6ac3) main_fmrd2_pane

0xcc6e,	// (0x000a9b5c) main_fs_bigclock_unlock_btn_pane_g1

0xeee8,	// (0x000abdd6) main_fs_bigclock_unlock_btn_pane_t1

0x95c8,	// (0x000a64b6) area_fmrd2_info_pane_ParamLimits

0x95c8,	// (0x000a64b6) area_fmrd2_info_pane

0x95d4,	// (0x000a64c2) area_fmrd2_visual_pane_ParamLimits

0x95d4,	// (0x000a64c2) area_fmrd2_visual_pane

0x95e2,	// (0x000a64d0) fmrd2_indi_pane_ParamLimits

0x95e2,	// (0x000a64d0) fmrd2_indi_pane

0x95ef,	// (0x000a64dd) area_fmrd2_visual_pane_g1

0x95f7,	// (0x000a64e5) area_fmrd2_visual_pane_t1

0x9607,	// (0x000a64f5) area_fmrd2_visual_pane_t2

0x9617,	// (0x000a6505) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x000acdcf) area_fmrd2_visual_pane_t

0x9627,	// (0x000a6515) area_fmrd2_info_pane_g1

0x962f,	// (0x000a651d) area_fmrd2_info_pane_t1

0x963f,	// (0x000a652d) area_fmrd2_info_pane_t2

0x964f,	// (0x000a653d) area_fmrd2_info_pane_t3

0x965f,	// (0x000a654d) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x000acdd6) area_fmrd2_info_pane_t

0x966f,	// (0x000a655d) fmrd2_indi_pane_t1

0x967f,	// (0x000a656d) fmrd2_indi_pane_t2

0x968f,	// (0x000a657d) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x000acddf) fmrd2_indi_pane_t

0xe491,	// (0x000ab37f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe491,	// (0x000ab37f) list_single_fs_bigclock_indicator_pane_g5

0xe541,	// (0x000ab42f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe541,	// (0x000ab42f) list_single_fs_bigclock_indicator_pane_t5

0x8e0c,	// (0x000a5cfa) aid_cell_bcale_month_pane_ParamLimits

0x8e0c,	// (0x000a5cfa) aid_cell_bcale_month_pane

0x8e2a,	// (0x000a5d18) bcale_month_pane_ParamLimits

0x8e2a,	// (0x000a5d18) bcale_month_pane

0x8e46,	// (0x000a5d34) bcale_preview_pane_ParamLimits

0x8e46,	// (0x000a5d34) bcale_preview_pane

0xec7f,	// (0x000abb6d) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9e,	// (0x000abb8c) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9e,	// (0x000abb8c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x000acd61) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000acd61) list_single_fs_bigclock_pane_t

0xeee0,	// (0x000abdce) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x000acdca) main_fs_bigclock_unlock_btn_pane_g

0x969f,	// (0x000a658d) aid_dia3_key_size_ParamLimits

0x969f,	// (0x000a658d) aid_dia3_key_size

0x96ab,	// (0x000a6599) aid_dia3_listrow_size_ParamLimits

0x96ab,	// (0x000a6599) aid_dia3_listrow_size

0x96bb,	// (0x000a65a9) dia3_keypad_fun_pane_ParamLimits

0x96bb,	// (0x000a65a9) dia3_keypad_fun_pane

0x96cb,	// (0x000a65b9) dia3_keypad_num_pane_ParamLimits

0x96cb,	// (0x000a65b9) dia3_keypad_num_pane

0x96db,	// (0x000a65c9) dia3_listscroll_pane_ParamLimits

0x96db,	// (0x000a65c9) dia3_listscroll_pane

0x96e9,	// (0x000a65d7) dia3_numentry_pane_ParamLimits

0x96e9,	// (0x000a65d7) dia3_numentry_pane

0xeef6,	// (0x000abde4) dia3_list_pane

0xef01,	// (0x000abdef) scroll_pane_cp12

0x9bd5,	// (0x000a6ac3) bg_dia3_numentry_pane

0x96f7,	// (0x000a65e5) dia3_numentry_pane_t1

0x9706,	// (0x000a65f4) cell_dia3_key_num_pane

0x970e,	// (0x000a65fc) cell_dia3_key0_fun_pane_ParamLimits

0x970e,	// (0x000a65fc) cell_dia3_key0_fun_pane

0x971b,	// (0x000a6609) cell_dia3_key1_fun_pane_ParamLimits

0x971b,	// (0x000a6609) cell_dia3_key1_fun_pane

0x9728,	// (0x000a6616) dia3_listrow_pane

0xe174,	// (0x000ab062) bg_dia3_numentry_pane_g1

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp21

0xef0c,	// (0x000abdfa) cell_dia3_key_num_pane_t1

0xef1a,	// (0x000abe08) cell_dia3_key_num_pane_t2

0xef29,	// (0x000abe17) cell_dia3_key_num_pane_t3

0xef38,	// (0x000abe26) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x000acde6) cell_dia3_key_num_pane_t

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp19

0x9735,	// (0x000a6623) cell_dia3_key0_fun_pane_g1

0x9bd5,	// (0x000a6ac3) bg_button_pane_cp20

0x973d,	// (0x000a662b) cell_dia3_key1_fun_pane_g1

0x9745,	// (0x000a6633) area_left_week_number_pane

0x9758,	// (0x000a6646) area_top_day_name_pane

0x9766,	// (0x000a6654) frame_month_view_pane

0xef47,	// (0x000abe35) grid_month_view_pane

0x977b,	// (0x000a6669) cell_top_day_name_pane_ParamLimits

0x977b,	// (0x000a6669) cell_top_day_name_pane

0x9797,	// (0x000a6685) cell_area_left_week_number_pane_ParamLimits

0x9797,	// (0x000a6685) cell_area_left_week_number_pane

0x97b8,	// (0x000a66a6) cell_month_view_pane_ParamLimits

0x97b8,	// (0x000a66a6) cell_month_view_pane

0xef55,	// (0x000abe43) frm_month_g1

0x97e4,	// (0x000a66d2) frm_month_g2

0x97f5,	// (0x000a66e3) frm_month_g3

0x9806,	// (0x000a66f4) frm_month_g4

0x9817,	// (0x000a6705) frm_month_g5

0x9828,	// (0x000a6716) frm_month_g6

0x983b,	// (0x000a6729) frm_month_g7

0xef62,	// (0x000abe50) frm_month_g8

0x984e,	// (0x000a673c) frm_month_g9

0x985b,	// (0x000a6749) frm_month_g10

0x9868,	// (0x000a6756) frm_month_g11

0x9875,	// (0x000a6763) frm_month_g12

0x9882,	// (0x000a6770) frm_month_g13

0x9891,	// (0x000a677f) frm_month_g14

0x98a0,	// (0x000a678e) frm_month_g15

0x98af,	// (0x000a679d) frm_month_g16

0x000f,

0xff01,	// (0x000acdef) frm_month_g

0xef6f,	// (0x000abe5d) cell_top_day_name_pane_t1

0x98be,	// (0x000a67ac) cell_area_left_week_number_pane_g1

0x98cd,	// (0x000a67bb) cell_area_left_week_number_pane_t1

0xce9e,	// (0x000a9d8c) cell_month_view_pane_g1

0x98e3,	// (0x000a67d1) cell_month_view_pane_t1

0x9bd5,	// (0x000a6ac3) main_fps_pane

0xe716,	// (0x000ab604) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe716,	// (0x000ab604) cmail_ddmenu_btn02_pane_cp1

0xe732,	// (0x000ab620) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe732,	// (0x000ab620) cmail_ddmenu_btn02_pane_cp2

0x90f2,	// (0x000a5fe0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x90f2,	// (0x000a5fe0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x000acd14) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x000acd14) cmail_ddmenu_btn02_pane_g

0x9110,	// (0x000a5ffe) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9110,	// (0x000a5ffe) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x000acd19) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x000acd19) cmail_ddmenu_btn02_pane_t

0x98f9,	// (0x000a67e7) fps_text_pane_ParamLimits

0x98f9,	// (0x000a67e7) fps_text_pane

0x9906,	// (0x000a67f4) main_fps_pane_g1_ParamLimits

0x9906,	// (0x000a67f4) main_fps_pane_g1

0x9912,	// (0x000a6800) wait_bar_pane_cp010_ParamLimits

0x9912,	// (0x000a6800) wait_bar_pane_cp010

0x991e,	// (0x000a680c) fps_text_pane_t1_ParamLimits

0x991e,	// (0x000a680c) fps_text_pane_t1

0x646f,	// (0x000a335d) cam4_image_uncrop_pane_g1

0x6478,	// (0x000a3366) cam4_image_uncrop_pane_g2

0x6481,	// (0x000a336f) cam4_image_uncrop_pane_g3

0x648a,	// (0x000a3378) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000ac7dc) cam4_image_uncrop_pane_g

0x9728,	// (0x000a6616) dia3_listrow_pane_ParamLimits

0x9bd5,	// (0x000a6ac3) main_phob2_pane

0x8c48,	// (0x000a5b36) cell_tport_appsw_pane_cp02_ParamLimits

0x8c48,	// (0x000a5b36) cell_tport_appsw_pane_cp02

0x8c57,	// (0x000a5b45) cell_tport_appsw_pane_cp03_ParamLimits

0x8c57,	// (0x000a5b45) cell_tport_appsw_pane_cp03

0x9bd5,	// (0x000a6ac3) phob2_contact_card_pane

0x9bd5,	// (0x000a6ac3) phob2_listscroll_pane

0xef82,	// (0x000abe70) phob2_list_pane

0xef8a,	// (0x000abe78) scroll_pane_cp034

0x9937,	// (0x000a6825) phob2_cc_data_pane_ParamLimits

0x9937,	// (0x000a6825) phob2_cc_data_pane

0x9953,	// (0x000a6841) phob2_cc_listscroll_pane_ParamLimits

0x9953,	// (0x000a6841) phob2_cc_listscroll_pane

0x996f,	// (0x000a685d) list_double_large_graphic_phob2_pane_ParamLimits

0x996f,	// (0x000a685d) list_double_large_graphic_phob2_pane

0x9987,	// (0x000a6875) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9987,	// (0x000a6875) list_double_large_graphic_phob2_pane_g1

0x999d,	// (0x000a688b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x999d,	// (0x000a688b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x000ace10) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x000ace10) list_double_large_graphic_phob2_pane_g

0x99a9,	// (0x000a6897) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99a9,	// (0x000a6897) list_double_large_graphic_phob2_pane_t1

0x99be,	// (0x000a68ac) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99be,	// (0x000a68ac) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x000ace15) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x000ace15) list_double_large_graphic_phob2_pane_t

0x9bd5,	// (0x000a6ac3) list_highlight_pane_cp024

0x99d0,	// (0x000a68be) phob2_cc_button_pane

0x99d8,	// (0x000a68c6) phob2_cc_data_pane_g1_ParamLimits

0x99d8,	// (0x000a68c6) phob2_cc_data_pane_g1

0x99e4,	// (0x000a68d2) phob2_cc_data_pane_g2_ParamLimits

0x99e4,	// (0x000a68d2) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x000ace1a) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x000ace1a) phob2_cc_data_pane_g

0x99f0,	// (0x000a68de) phob2_cc_data_pane_t1_ParamLimits

0x99f0,	// (0x000a68de) phob2_cc_data_pane_t1

0x9a02,	// (0x000a68f0) phob2_cc_data_pane_t2_ParamLimits

0x9a02,	// (0x000a68f0) phob2_cc_data_pane_t2

0x9a14,	// (0x000a6902) phob2_cc_data_pane_t3_ParamLimits

0x9a14,	// (0x000a6902) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x000ace1f) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x000ace1f) phob2_cc_data_pane_t

0xef92,	// (0x000abe80) phob2_cc_list_pane_ParamLimits

0xef92,	// (0x000abe80) phob2_cc_list_pane

0xdade,	// (0x000aa9cc) scroll_pane_cp035_ParamLimits

0xdade,	// (0x000aa9cc) scroll_pane_cp035

0xa25a,	// (0x000a7148) bg_button_pane_cp033

0xef9e,	// (0x000abe8c) phob2_cc_button_pane_g1

0xefaa,	// (0x000abe98) phob2_cc_button_pane_t1

0xefbf,	// (0x000abead) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x000ace26) phob2_cc_button_pane_t

0x9a26,	// (0x000a6914) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a26,	// (0x000a6914) list_double_large_graphic_phob2_cc_pane

0x9a42,	// (0x000a6930) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a42,	// (0x000a6930) list_double_large_graphic_phob2_cc_pane_g1

0x9a53,	// (0x000a6941) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a53,	// (0x000a6941) list_double_large_graphic_phob2_cc_pane_g2

0x9a62,	// (0x000a6950) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a62,	// (0x000a6950) list_double_large_graphic_phob2_cc_pane_g3

0x9a71,	// (0x000a695f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a71,	// (0x000a695f) list_double_large_graphic_phob2_cc_pane_g4

0x9a82,	// (0x000a6970) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a82,	// (0x000a6970) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x000ace2b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x000ace2b) list_double_large_graphic_phob2_cc_pane_g

0x9a91,	// (0x000a697f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a91,	// (0x000a697f) list_double_large_graphic_phob2_cc_pane_t1

0x9aba,	// (0x000a69a8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9aba,	// (0x000a69a8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x000ace36) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x000ace36) list_double_large_graphic_phob2_cc_pane_t

0xefd1,	// (0x000abebf) list_highlight_pane_cp025_ParamLimits

0xefd1,	// (0x000abebf) list_highlight_pane_cp025

0xa25a,	// (0x000a7148) bg_button_pane_cp033_ParamLimits

0xef9e,	// (0x000abe8c) phob2_cc_button_pane_g1_ParamLimits

0xefaa,	// (0x000abe98) phob2_cc_button_pane_t1_ParamLimits

0xefbf,	// (0x000abead) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x000ace26) phob2_cc_button_pane_t_ParamLimits

0x0dfc,	// (0x0009dcea) popup_wgtman_window

0xd7ae,	// (0x000aa69c) scroll_pane_cp038

0x94c2,	// (0x000a63b0) wgtman_btn_pane_cp_01_ParamLimits

0x94c2,	// (0x000a63b0) wgtman_btn_pane_cp_01

0xefdf,	// (0x000abecd) wgtman_content_pane

0xefe8,	// (0x000abed6) wgtman_heading_pane

0x9bd5,	// (0x000a6ac3) bg_heading_pane_cp02

0xeff1,	// (0x000abedf) wgtman_heading_pane_g1

0xeff9,	// (0x000abee7) wgtman_heading_pane_t1

0xf007,	// (0x000abef5) scroll_pane_cp036

0xf00f,	// (0x000abefd) wgtman_list_pane

0xf017,	// (0x000abf05) wgtman_list_pane_t1_ParamLimits

0xf017,	// (0x000abf05) wgtman_list_pane_t1

0x63cc,	// (0x000a32ba) cam4_grid_pane

0x7185,	// (0x000a4073) bg_button_pane_cp015_ParamLimits

0x7197,	// (0x000a4085) bg_button_pane_cp016_ParamLimits

0x71aa,	// (0x000a4098) bg_button_pane_cp017_ParamLimits

0x7200,	// (0x000a40ee) popup_vitu2_query_window_g3_ParamLimits

0x7200,	// (0x000a40ee) popup_vitu2_query_window_g3

0x72bf,	// (0x000a41ad) popup_vitu2_query_window_t6_ParamLimits

0x72bf,	// (0x000a41ad) popup_vitu2_query_window_t6

0x72ea,	// (0x000a41d8) popup_vitu2_query_window_t7_ParamLimits

0x72ea,	// (0x000a41d8) popup_vitu2_query_window_t7

0xd650,	// (0x000aa53e) cam4_grid_pane_g1

0xd659,	// (0x000aa547) cam4_grid_pane_g2

0xf031,	// (0x000abf1f) cam4_grid_pane_g3

0xf03a,	// (0x000abf28) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x000ace3b) cam4_grid_pane_g

0x2049,	// (0x0009ef37) aid_placing_vt_slider_lsc_ParamLimits

0x237c,	// (0x0009f26a) vidtel_button_pane_ParamLimits

0x237c,	// (0x0009f26a) vidtel_button_pane

0xf045,	// (0x000abf33) bg_button_pane_cp034

0x9ae3,	// (0x000a69d1) vidtel_button_pane_g1

0xf04f,	// (0x000abf3d) vidtel_button_pane_t1

0xd8b2,	// (0x000aa7a0) aid_size_vtel_slider_touch

0xdade,	// (0x000aa9cc) scroll_pane_cp039

0xe1b2,	// (0x000ab0a0) ncim_query_button_pane_cp01_ParamLimits

0xe1d1,	// (0x000ab0bf) ncimui_query_pane_g1_ParamLimits

0xa25a,	// (0x000a7148) input_focus_pane_cp012_ParamLimits

0xe1f6,	// (0x000ab0e4) ncim_query_entry_pane_t1_ParamLimits

0xdade,	// (0x000aa9cc) scroll_pane_cp039_ParamLimits

0x3682,	// (0x000a0570) navi_pane_bcale_mc_g1

0x368a,	// (0x000a0578) navi_pane_bcale_mc_t1

0xe77b,	// (0x000ab669) main_sp_fs_email_pane_g1

0xe787,	// (0x000ab675) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x000acbcc) main_sp_fs_email_pane_g

0xea0c,	// (0x000ab8fa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea0c,	// (0x000ab8fa) list_single_cale_mrui_row_pane_g3

0x9130,	// (0x000a601e) list_single_recal_day_pane_g5_event_pane

0xa6f6,	// (0x000a75e4) list_single_recal_day_pane_g7

0xf05d,	// (0x000abf4b) list_recal_day_event_pane_cp01

0xf066,	// (0x000abf54) list_recal_vselct_arw_lo_pane_cp01

0xf06e,	// (0x000abf5c) list_recal_vselct_arw_up_pane_cp01

0xf076,	// (0x000abf64) list_recal_vselct_pane_cp01

0xd8d4,	// (0x000aa7c2) list_recal_day_event_pane_cp01_g1

0xb0eb,	// (0x000a7fd9) list_recal_day_event_pane_cp01_t1

0xa6fe,	// (0x000a75ec) list_single_recal_day_pane_t1_ParamLimits

0xa710,	// (0x000a75fe) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x000acd29) list_single_recal_day_pane_t_ParamLimits

0xa7bd,	// (0x000a76ab) bg_notes_pane_ParamLimits

0xa860,	// (0x000a774e) list_notes_pane_ParamLimits

0x114b,	// (0x0009e039) scroll_pane_cp06_ParamLimits

0xa882,	// (0x000a7770) main_notes_pane_ParamLimits

0x9bd5,	// (0x000a6ac3) main_welc_pane

0x9aeb,	// (0x000a69d9) main_welc_body_pane_ParamLimits

0x9aeb,	// (0x000a69d9) main_welc_body_pane

0x9b06,	// (0x000a69f4) main_welc_opti_pane_ParamLimits

0x9b06,	// (0x000a69f4) main_welc_opti_pane

0x9b3b,	// (0x000a6a29) main_welc_pane_t1_ParamLimits

0x9b3b,	// (0x000a6a29) main_welc_pane_t1

0xb0f9,	// (0x000a7fe7) main_welc_body_row_pane_ParamLimits

0xb0f9,	// (0x000a7fe7) main_welc_body_row_pane

0x9b59,	// (0x000a6a47) main_welc_opti_row_pane_ParamLimits

0x9b59,	// (0x000a6a47) main_welc_opti_row_pane

0xf080,	// (0x000abf6e) main_welc_opti_row_pane_g1

0xf088,	// (0x000abf76) main_welc_opti_row_pane_t1

0xf097,	// (0x000abf85) main_welc_body_row_pane_t1

0xed5f,	// (0x000abc4d) popup_notif_wgt_heading_pane

0xed79,	// (0x000abc67) aid_size_list_notif_wgt_del_ParamLimits

0xed86,	// (0x000abc74) list_notif_wgt_row_pane_g1_ParamLimits

0xed92,	// (0x000abc80) list_notif_wgt_row_pane_g2_ParamLimits

0xeda6,	// (0x000abc94) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x000acd90) list_notif_wgt_row_pane_g_ParamLimits

0xedb3,	// (0x000abca1) list_notif_wgt_row_pane_t1_ParamLimits

0xedc9,	// (0x000abcb7) list_notif_wgt_row_pane_t2_ParamLimits

0xeddb,	// (0x000abcc9) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x000acd97) list_notif_wgt_row_pane_t_ParamLimits

0x954d,	// (0x000a643b) listrow_wgtman_pane_g1_ParamLimits

0x955a,	// (0x000a6448) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x000acdc0) listrow_wgtman_pane_g_ParamLimits

0x9578,	// (0x000a6466) listrow_wgtman_pane_t1_ParamLimits

0x9590,	// (0x000a647e) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x000acdc5) listrow_wgtman_pane_t_ParamLimits

0x95b6,	// (0x000a64a4) wait_bar_pane_cp09_ParamLimits

0x9bd5,	// (0x000a6ac3) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000abf94) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000abf9c) popup_notif_wgt_heading_pane_t1

0x9bd5,	// (0x000a6ac3) main_vids_pane

0x9bd5,	// (0x000a6ac3) vids_listscroll_pane

0x9b6a,	// (0x000a6a58) scroll_pane_cp040

0x9bd5,	// (0x000a6ac3) vids_list_pane

0x9b75,	// (0x000a6a63) vids_list_double_pane_ParamLimits

0x9b75,	// (0x000a6a63) vids_list_double_pane

0x9b88,	// (0x000a6a76) vids_list_double_pane_g1

0x9b91,	// (0x000a6a7f) vids_list_double_pane_t1

0x9ba1,	// (0x000a6a8f) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x000ace49) vids_list_double_pane_t

0xa25a,	// (0x000a7148) main_ncimui_pane_ParamLimits

0x7f7b,	// (0x000a4e69) main_ncimui_pane_g1_ParamLimits

0x7f89,	// (0x000a4e77) main_ncimui_pane_g2_ParamLimits

0x7f89,	// (0x000a4e77) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x000acad1) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x000acad1) main_ncimui_pane_g

0x9b21,	// (0x000a6a0f) main_welc_pane_g1_ParamLimits

0x9b21,	// (0x000a6a0f) main_welc_pane_g1

0x9b2d,	// (0x000a6a1b) main_welc_pane_g2_ParamLimits

0x9b2d,	// (0x000a6a1b) main_welc_pane_g2

0x0001,

0xff56,	// (0x000ace44) main_welc_pane_g_ParamLimits

0xff56,	// (0x000ace44) main_welc_pane_g

0xa7bd,	// (0x000a76ab) listscroll_mce_pane_ParamLimits

0x374c,	// (0x000a063a) wait_bar_pane_cp10

0xc811,	// (0x000a96ff) main_cale_day_pane_ParamLimits

0xc811,	// (0x000a96ff) main_cale_week_pane_ParamLimits

0xa7bd,	// (0x000a76ab) main_messa_pane_ParamLimits

0x57c6,	// (0x000a26b4) main_clock2_btn_pane_ParamLimits

0x57c6,	// (0x000a26b4) main_clock2_btn_pane

0xd026,	// (0x000a9f14) main_clock2_btn_pane_cp01_ParamLimits

0xd026,	// (0x000a9f14) main_clock2_btn_pane_cp01

0xe9dd,	// (0x000ab8cb) list_cale_mrui_pane_ParamLimits

0xee1f,	// (0x000abd0d) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x000acd9e) main_cf0_pane_g

0x9745,	// (0x000a6633) area_left_week_number_pane_ParamLimits

0x9758,	// (0x000a6646) area_top_day_name_pane_ParamLimits

0x9766,	// (0x000a6654) frame_month_view_pane_ParamLimits

0xef47,	// (0x000abe35) grid_month_view_pane_ParamLimits

0xef55,	// (0x000abe43) frm_month_g1_ParamLimits

0x97e4,	// (0x000a66d2) frm_month_g2_ParamLimits

0x97f5,	// (0x000a66e3) frm_month_g3_ParamLimits

0x9806,	// (0x000a66f4) frm_month_g4_ParamLimits

0x9817,	// (0x000a6705) frm_month_g5_ParamLimits

0x9828,	// (0x000a6716) frm_month_g6_ParamLimits

0x983b,	// (0x000a6729) frm_month_g7_ParamLimits

0xef62,	// (0x000abe50) frm_month_g8_ParamLimits

0x984e,	// (0x000a673c) frm_month_g9_ParamLimits

0x985b,	// (0x000a6749) frm_month_g10_ParamLimits

0x9868,	// (0x000a6756) frm_month_g11_ParamLimits

0x9875,	// (0x000a6763) frm_month_g12_ParamLimits

0x9882,	// (0x000a6770) frm_month_g13_ParamLimits

0x9891,	// (0x000a677f) frm_month_g14_ParamLimits

0x98a0,	// (0x000a678e) frm_month_g15_ParamLimits

0x98af,	// (0x000a679d) frm_month_g16_ParamLimits

0xff01,	// (0x000acdef) frm_month_g_ParamLimits

0xef6f,	// (0x000abe5d) cell_top_day_name_pane_t1_ParamLimits

0x98be,	// (0x000a67ac) cell_area_left_week_number_pane_g1_ParamLimits

0x98cd,	// (0x000a67bb) cell_area_left_week_number_pane_t1_ParamLimits

0xce9e,	// (0x000a9d8c) cell_month_view_pane_g1_ParamLimits

0x98e3,	// (0x000a67d1) cell_month_view_pane_t1_ParamLimits

0xa7b5,	// (0x000a76a3) main_clock2_btn_pane_g1

0xf0bc,	// (0x000abfaa) main_clock2_btn_pane_t1

0xa25a,	// (0x000a7148) listscroll_cmail_pane_ParamLimits

0xe77b,	// (0x000ab669) main_sp_fs_email_pane_g1_ParamLimits

0xe787,	// (0x000ab675) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x000acbcc) main_sp_fs_email_pane_g_ParamLimits

0xeae9,	// (0x000ab9d7) list_recal_day_pane_ParamLimits

0xeafa,	// (0x000ab9e8) mian_recal_day_pane_t1

0x896e,	// (0x000a585c) list_single_dyc_row_text_pane_t4_ParamLimits

0x896e,	// (0x000a585c) list_single_dyc_row_text_pane_t4

0x89b3,	// (0x000a58a1) list_single_dyc_row_text_pane_t5_ParamLimits

0x89b3,	// (0x000a58a1) list_single_dyc_row_text_pane_t5

0xa41b,	// (0x000a7309) list_single_dyc_row_text_pane_t6_ParamLimits

0xa41b,	// (0x000a7309) list_single_dyc_row_text_pane_t6

0xae34,	// (0x000a7d22) aid_mgn_list_cale_time_pane

0xa25a,	// (0x000a7148) main_gallery2_pane_ParamLimits

0xd03a,	// (0x000a9f28) main_clock2_pane_cp01_t1

0xd04a,	// (0x000a9f38) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000ac6b2) main_clock2_pane_cp01_t

0x165f,	// (0x0009e54d) cale_week_scroll_pane_g16_ParamLimits

0x165f,	// (0x0009e54d) cale_week_scroll_pane_g16

0xaa38,	// (0x000a7926) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
