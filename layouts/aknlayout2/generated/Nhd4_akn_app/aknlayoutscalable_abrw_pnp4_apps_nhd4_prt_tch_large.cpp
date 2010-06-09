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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000990a4 };

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
0x0e4b,	// (0x00099eef) Screen

0x0e57,	// (0x00099efb) application_window

0x0eb3,	// (0x00099f57) area_bottom_pane_ParamLimits

0x0eb3,	// (0x00099f57) area_bottom_pane

0x0f0c,	// (0x00099fb0) area_top_pane_ParamLimits

0x0f0c,	// (0x00099fb0) area_top_pane

0x0f70,	// (0x0009a014) call_video_uplink_pane_ParamLimits

0x0f70,	// (0x0009a014) call_video_uplink_pane

0x0faf,	// (0x0009a053) main_pane_ParamLimits

0x0faf,	// (0x0009a053) main_pane

0xc8fb,	// (0x000a599f) context_pane

0x448c,	// (0x0009d530) navi_pane

0x44b2,	// (0x0009d556) popup_cale_events_window_ParamLimits

0x44b2,	// (0x0009d556) popup_cale_events_window

0xc90e,	// (0x000a59b2) popup_mup_playback_window

0x44ca,	// (0x0009d56e) signal_pane

0xa84c,	// (0x000a38f0) main_browser_pane

0xaa23,	// (0x000a3ac7) main_burst_pane

0x430e,	// (0x0009d3b2) main_calc_pane

0xc8e1,	// (0x000a5985) main_cale_day_pane

0x1700,	// (0x0009a7a4) main_cale_month_pane

0xc8e1,	// (0x000a5985) main_cale_week_pane

0xaa23,	// (0x000a3ac7) main_call_pane

0xa520,	// (0x000a35c4) main_call_poc_pane

0xaa23,	// (0x000a3ac7) main_camera_pane

0xaa23,	// (0x000a3ac7) main_chi_dic_pane

0xb244,	// (0x000a42e8) main_clock_pane

0xa520,	// (0x000a35c4) main_fmradio_pane

0xaa23,	// (0x000a3ac7) main_graph_messa_pane

0xa520,	// (0x000a35c4) main_help_pane

0xa84c,	// (0x000a38f0) main_im_pane

0xa77b,	// (0x000a381f) main_image_pane_ParamLimits

0xa77b,	// (0x000a381f) main_image_pane

0xa520,	// (0x000a35c4) main_location2_pane

0xaa23,	// (0x000a3ac7) main_location_pane

0xa77b,	// (0x000a381f) main_messa_pane

0xa520,	// (0x000a35c4) main_mp2_pane

0xaa23,	// (0x000a3ac7) main_mp_pane

0xa520,	// (0x000a35c4) main_msg_pane

0xa520,	// (0x000a35c4) main_mup_eq_pane

0xa520,	// (0x000a35c4) main_mup_pane

0xa84c,	// (0x000a38f0) main_notes_pane

0xa520,	// (0x000a35c4) main_pec_pane

0xa520,	// (0x000a35c4) main_phob_pane

0xa520,	// (0x000a35c4) main_pinb_pane

0xa520,	// (0x000a35c4) main_postcard_pane

0xa520,	// (0x000a35c4) main_qdial_pane

0xaa23,	// (0x000a3ac7) main_skin_pane

0xa520,	// (0x000a35c4) main_smil2_pane

0xaa23,	// (0x000a3ac7) main_smil_pane

0xaa23,	// (0x000a3ac7) main_video_pane

0xaa23,	// (0x000a3ac7) main_video_tele_pane

0xa77b,	// (0x000a381f) main_viewer_pane_ParamLimits

0xa77b,	// (0x000a381f) main_viewer_pane

0xaa23,	// (0x000a3ac7) main_vorec_pane

0x435a,	// (0x0009d3fe) popup_blid_sat_info_window_ParamLimits

0x435a,	// (0x0009d3fe) popup_blid_sat_info_window

0x437a,	// (0x0009d41e) popup_dyc_status_message_window_ParamLimits

0x437a,	// (0x0009d41e) popup_dyc_status_message_window

0x4388,	// (0x0009d42c) popup_grid_large_graphic_window_ParamLimits

0x4388,	// (0x0009d42c) popup_grid_large_graphic_window

0x4417,	// (0x0009d4bb) popup_loc_request_window_ParamLimits

0x4417,	// (0x0009d4bb) popup_loc_request_window

0x4464,	// (0x0009d508) popup_wml_address_window_ParamLimits

0x4464,	// (0x0009d508) popup_wml_address_window

0x41e6,	// (0x0009d28a) call_muted_g1

0x3ea2,	// (0x0009cf46) popup_call_audio_conf_window_ParamLimits

0x3ea2,	// (0x0009cf46) popup_call_audio_conf_window

0x41f6,	// (0x0009d29a) popup_call_audio_first_window_ParamLimits

0x41f6,	// (0x0009d29a) popup_call_audio_first_window

0x4236,	// (0x0009d2da) popup_call_audio_in_window_ParamLimits

0x4236,	// (0x0009d2da) popup_call_audio_in_window

0x425a,	// (0x0009d2fe) popup_call_audio_out_window_ParamLimits

0x425a,	// (0x0009d2fe) popup_call_audio_out_window

0x427c,	// (0x0009d320) popup_call_audio_second_window_ParamLimits

0x427c,	// (0x0009d320) popup_call_audio_second_window

0x42ac,	// (0x0009d350) popup_call_audio_wait_window_ParamLimits

0x42ac,	// (0x0009d350) popup_call_audio_wait_window

0x42cd,	// (0x0009d371) popup_number_entry_window_ParamLimits

0x42cd,	// (0x0009d371) popup_number_entry_window

0xa07f,	// (0x000a3123) bg_popup_call_pane_cp05_ParamLimits

0xa07f,	// (0x000a3123) bg_popup_call_pane_cp05

0xa09f,	// (0x000a3143) popup_number_entry_window_t1

0xa0b2,	// (0x000a3156) popup_number_entry_window_t2

0xa0c4,	// (0x000a3168) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000a816e) popup_number_entry_window_t

0xa164,	// (0x000a3208) text_title_cp2

0xa177,	// (0x000a321b) bg_popup_call_pane_cp_ParamLimits

0xa177,	// (0x000a321b) bg_popup_call_pane_cp

0xa185,	// (0x000a3229) call_thumbnail_pane

0xa18d,	// (0x000a3231) popup_call_audio_in_window_g1_ParamLimits

0xa18d,	// (0x000a3231) popup_call_audio_in_window_g1

0xa199,	// (0x000a323d) popup_call_audio_in_window_g2_ParamLimits

0xa199,	// (0x000a323d) popup_call_audio_in_window_g2

0xa1a5,	// (0x000a3249) popup_call_audio_in_window_g3_ParamLimits

0xa1a5,	// (0x000a3249) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000a8177) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000a8177) popup_call_audio_in_window_g

0xa1b1,	// (0x000a3255) popup_call_audio_in_window_t1_ParamLimits

0xa1b1,	// (0x000a3255) popup_call_audio_in_window_t1

0xa1cd,	// (0x000a3271) popup_call_audio_in_window_t2_ParamLimits

0xa1cd,	// (0x000a3271) popup_call_audio_in_window_t2

0xa1e9,	// (0x000a328d) popup_call_audio_in_window_t3_ParamLimits

0xa1e9,	// (0x000a328d) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000a817e) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000a817e) popup_call_audio_in_window_t

0xa177,	// (0x000a321b) bg_popup_call_pane_cp01_ParamLimits

0xa177,	// (0x000a321b) bg_popup_call_pane_cp01

0xa185,	// (0x000a3229) call_thumbnail_pane_cp02

0xa1fc,	// (0x000a32a0) call_type_pane_cp022

0xa204,	// (0x000a32a8) popup_call_audio_out_window_g1_ParamLimits

0xa204,	// (0x000a32a8) popup_call_audio_out_window_g1

0xa216,	// (0x000a32ba) popup_call_audio_out_window_g2_ParamLimits

0xa216,	// (0x000a32ba) popup_call_audio_out_window_g2

0xa222,	// (0x000a32c6) popup_call_audio_out_window_g3_ParamLimits

0xa222,	// (0x000a32c6) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000a8185) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000a8185) popup_call_audio_out_window_g

0xa234,	// (0x000a32d8) popup_call_audio_out_window_t1_ParamLimits

0xa234,	// (0x000a32d8) popup_call_audio_out_window_t1

0xa24c,	// (0x000a32f0) popup_call_audio_out_window_t2_ParamLimits

0xa24c,	// (0x000a32f0) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000a818c) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000a818c) popup_call_audio_out_window_t

0xa261,	// (0x000a3305) bg_popup_call_pane_ParamLimits

0xa261,	// (0x000a3305) bg_popup_call_pane

0x11cb,	// (0x0009a26f) call_thumbnail_pane_cp_ParamLimits

0x11cb,	// (0x0009a26f) call_thumbnail_pane_cp

0xa2e5,	// (0x000a3389) call_type_pane_cp01_ParamLimits

0xa2e5,	// (0x000a3389) call_type_pane_cp01

0xa329,	// (0x000a33cd) popup_call_audio_first_window_g1_ParamLimits

0xa329,	// (0x000a33cd) popup_call_audio_first_window_g1

0xa375,	// (0x000a3419) popup_call_audio_first_window_g2_ParamLimits

0xa375,	// (0x000a3419) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000a8191) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000a8191) popup_call_audio_first_window_g

0xa3b9,	// (0x000a345d) popup_call_audio_first_window_t1_ParamLimits

0xa3b9,	// (0x000a345d) popup_call_audio_first_window_t1

0xa465,	// (0x000a3509) popup_call_audio_first_window_t4_ParamLimits

0xa465,	// (0x000a3509) popup_call_audio_first_window_t4

0xa4f1,	// (0x000a3595) popup_call_audio_first_window_t5_ParamLimits

0xa4f1,	// (0x000a3595) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000a8196) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000a8196) popup_call_audio_first_window_t

0xa520,	// (0x000a35c4) bg_popup_call_pane_cp02

0xa52a,	// (0x000a35ce) call_type_pane_cp023

0xa532,	// (0x000a35d6) popup_call_audio_wait_window_g1

0xa53a,	// (0x000a35de) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a819d) popup_call_audio_wait_window_g

0xa542,	// (0x000a35e6) popup_call_audio_wait_window_t3

0xa550,	// (0x000a35f4) bg_popup_call_pane_cp03_ParamLimits

0xa550,	// (0x000a35f4) bg_popup_call_pane_cp03

0xa5b0,	// (0x000a3654) call_thumbnail_pane_cp011_ParamLimits

0xa5b0,	// (0x000a3654) call_thumbnail_pane_cp011

0xa5bc,	// (0x000a3660) call_type_pane_cp034_ParamLimits

0xa5bc,	// (0x000a3660) call_type_pane_cp034

0xa5f8,	// (0x000a369c) popup_call_audio_second_window_g1_ParamLimits

0xa5f8,	// (0x000a369c) popup_call_audio_second_window_g1

0xa634,	// (0x000a36d8) popup_call_audio_second_window_g2_ParamLimits

0xa634,	// (0x000a36d8) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000a81a2) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000a81a2) popup_call_audio_second_window_g

0xa670,	// (0x000a3714) popup_call_audio_second_window_t1_ParamLimits

0xa670,	// (0x000a3714) popup_call_audio_second_window_t1

0xa6f1,	// (0x000a3795) popup_call_audio_second_window_t2_ParamLimits

0xa6f1,	// (0x000a3795) popup_call_audio_second_window_t2

0xa727,	// (0x000a37cb) popup_call_audio_second_window_t3_ParamLimits

0xa727,	// (0x000a37cb) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000a81a7) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000a81a7) popup_call_audio_second_window_t

0xa520,	// (0x000a35c4) bg_popup_call_pane_cp04

0xa75d,	// (0x000a3801) list_conf_pane

0xa765,	// (0x000a3809) popup_call_audio_conf_window_t1

0xa773,	// (0x000a3817) call_thumbnail_pane_g1

0xa77b,	// (0x000a381f) bg_pinb_pane_ParamLimits

0xa77b,	// (0x000a381f) bg_pinb_pane

0xa789,	// (0x000a382d) find_pinb_pane

0xa792,	// (0x000a3836) listscroll_pinb_pane_ParamLimits

0xa792,	// (0x000a3836) listscroll_pinb_pane

0xa7a1,	// (0x000a3845) pinb_bg_pane_g1

0x11ef,	// (0x0009a293) pinb_bg_pane_g2

0x11fb,	// (0x0009a29f) pinb_bg_pane_g3

0x1207,	// (0x0009a2ab) pinb_bg_pane_g4

0x1213,	// (0x0009a2b7) pinb_bg_pane_g5

0x121f,	// (0x0009a2c3) pinb_bg_pane_g6

0x122a,	// (0x0009a2ce) pinb_bg_pane_g7

0x1235,	// (0x0009a2d9) pinb_bg_pane_g8

0x1240,	// (0x0009a2e4) pinb_bg_pane_g9

0x124a,	// (0x0009a2ee) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000a81ae) pinb_bg_pane_g

0x1267,	// (0x0009a30b) grid_pinb_pane

0x1272,	// (0x0009a316) list_pinb_pane

0x127d,	// (0x0009a321) scroll_pane_cp01_ParamLimits

0x127d,	// (0x0009a321) scroll_pane_cp01

0xa7ab,	// (0x000a384f) find_pinb_pane_g1_ParamLimits

0xa7ab,	// (0x000a384f) find_pinb_pane_g1

0xa7c3,	// (0x000a3867) find_pinb_pane_t1

0xa7d5,	// (0x000a3879) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000a81c8) find_pinb_pane_t

0xa7ea,	// (0x000a388e) input_focus_pane_cp01_ParamLimits

0xa7ea,	// (0x000a388e) input_focus_pane_cp01

0x128f,	// (0x0009a333) cell_pinb_pane_ParamLimits

0x128f,	// (0x0009a333) cell_pinb_pane

0x12ba,	// (0x0009a35e) cell_pinb_pane_g1_ParamLimits

0x12ba,	// (0x0009a35e) cell_pinb_pane_g1

0xa7f6,	// (0x000a389a) cell_pinb_pane_g2_ParamLimits

0xa7f6,	// (0x000a389a) cell_pinb_pane_g2

0xa802,	// (0x000a38a6) cell_pinb_pane_g3_ParamLimits

0xa802,	// (0x000a38a6) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000a81cd) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000a81cd) cell_pinb_pane_g

0xa520,	// (0x000a35c4) grid_highlight_pane_cp01

0x12cf,	// (0x0009a373) list_pinb_item_pane_ParamLimits

0x12cf,	// (0x0009a373) list_pinb_item_pane

0xa520,	// (0x000a35c4) list_highlight_pane_cp02

0x12f8,	// (0x0009a39c) list_pinb_item_pane_g1_ParamLimits

0x12f8,	// (0x0009a39c) list_pinb_item_pane_g1

0x1305,	// (0x0009a3a9) list_pinb_item_pane_g2_ParamLimits

0x1305,	// (0x0009a3a9) list_pinb_item_pane_g2

0x1311,	// (0x0009a3b5) list_pinb_item_pane_g3_ParamLimits

0x1311,	// (0x0009a3b5) list_pinb_item_pane_g3

0x1322,	// (0x0009a3c6) list_pinb_item_pane_g4_ParamLimits

0x1322,	// (0x0009a3c6) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000a81d4) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000a81d4) list_pinb_item_pane_g

0x132e,	// (0x0009a3d2) list_pinb_item_pane_t1_ParamLimits

0x132e,	// (0x0009a3d2) list_pinb_item_pane_t1

0x135f,	// (0x0009a403) calc_display_pane

0x137d,	// (0x0009a421) calc_paper_pane

0x1399,	// (0x0009a43d) grid_calc_pane

0xa520,	// (0x000a35c4) bg_list_pane_cp01

0x13c5,	// (0x0009a469) clock_g1

0x13cd,	// (0x0009a471) clock_g2

0x0001,

0xf139,	// (0x000a81dd) clock_g

0x13d7,	// (0x0009a47b) clock_t1_ParamLimits

0x13d7,	// (0x0009a47b) clock_t1

0x13ec,	// (0x0009a490) clock_t2_ParamLimits

0x13ec,	// (0x0009a490) clock_t2

0x13fe,	// (0x0009a4a2) clock_t3_ParamLimits

0x13fe,	// (0x0009a4a2) clock_t3

0x1410,	// (0x0009a4b4) clock_t4_ParamLimits

0x1410,	// (0x0009a4b4) clock_t4

0x1422,	// (0x0009a4c6) clock_t5_ParamLimits

0x1422,	// (0x0009a4c6) clock_t5

0x1437,	// (0x0009a4db) clock_t6_ParamLimits

0x1437,	// (0x0009a4db) clock_t6

0x1449,	// (0x0009a4ed) clock_t7_ParamLimits

0x1449,	// (0x0009a4ed) clock_t7

0x145b,	// (0x0009a4ff) clock_t8_ParamLimits

0x145b,	// (0x0009a4ff) clock_t8

0x1471,	// (0x0009a515) clock_t9_ParamLimits

0x1471,	// (0x0009a515) clock_t9

0x0008,

0xf13e,	// (0x000a81e2) clock_t_ParamLimits

0xf13e,	// (0x000a81e2) clock_t

0xa80e,	// (0x000a38b2) popup_clock_analogue_window_cp02

0xa80e,	// (0x000a38b2) popup_clock_digital_window_cp01

0xa816,	// (0x000a38ba) listscroll_help_pane

0xa520,	// (0x000a35c4) phob_pre_status_pane

0xa820,	// (0x000a38c4) grid_qdial_pane

0xa77b,	// (0x000a381f) listscroll_mce_pane

0xa77b,	// (0x000a381f) bg_notes_pane

0xa82a,	// (0x000a38ce) list_notes_pane

0x1487,	// (0x0009a52b) scroll_pane_cp06

0xa838,	// (0x000a38dc) bg_calc_paper_pane

0x1496,	// (0x0009a53a) list_calc_pane

0xa84c,	// (0x000a38f0) bg_calc_display_pane

0x14b0,	// (0x0009a554) calc_display_pane_t1

0x14c5,	// (0x0009a569) calc_display_pane_t2

0x14da,	// (0x0009a57e) calc_display_pane_t3

0x0002,

0xf151,	// (0x000a81f5) calc_display_pane_t

0x14ec,	// (0x0009a590) cell_calc_pane_ParamLimits

0x14ec,	// (0x0009a590) cell_calc_pane

0xa858,	// (0x000a38fc) bg_calc_paper_pane_g1

0xa864,	// (0x000a3908) bg_calc_paper_pane_g2

0xa870,	// (0x000a3914) bg_calc_paper_pane_g3

0xa87c,	// (0x000a3920) bg_calc_paper_pane_g4

0xa888,	// (0x000a392c) bg_calc_paper_pane_g5

0x1519,	// (0x0009a5bd) bg_calc_paper_pane_g6

0x152a,	// (0x0009a5ce) bg_calc_paper_pane_g7

0x153b,	// (0x0009a5df) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000a81fc) bg_calc_paper_pane_g

0x154c,	// (0x0009a5f0) calc_bg_paper_pane_g9

0x155d,	// (0x0009a601) list_calc_item_pane_ParamLimits

0x155d,	// (0x0009a601) list_calc_item_pane

0xa894,	// (0x000a3938) list_calc_item_pane_g1

0x158d,	// (0x0009a631) list_calc_item_pane_t1_ParamLimits

0x158d,	// (0x0009a631) list_calc_item_pane_t1

0x159f,	// (0x0009a643) list_calc_item_pane_t2_ParamLimits

0x159f,	// (0x0009a643) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000a820d) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000a820d) list_calc_item_pane_t

0xa8a1,	// (0x000a3945) cell_calc_pane_g1

0xa8ab,	// (0x000a394f) grid_highlight_pane_cp02

0xa8cd,	// (0x000a3971) bg_calc_display_pane_g1

0x15cf,	// (0x0009a673) bg_calc_display_pane_g2

0xa8d6,	// (0x000a397a) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000a8217) bg_calc_display_pane_g

0x15d9,	// (0x0009a67d) cell_qdial_pane_ParamLimits

0x15d9,	// (0x0009a67d) cell_qdial_pane

0x15ed,	// (0x0009a691) cell_qdial_pane_g1_ParamLimits

0x15ed,	// (0x0009a691) cell_qdial_pane_g1

0x15fa,	// (0x0009a69e) cell_qdial_pane_g2_ParamLimits

0x15fa,	// (0x0009a69e) cell_qdial_pane_g2

0xa8df,	// (0x000a3983) cell_qdial_pane_g3_ParamLimits

0xa8df,	// (0x000a3983) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000a821e) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000a821e) cell_qdial_pane_g

0x1617,	// (0x0009a6bb) cell_qdial_pane_t1_ParamLimits

0x1617,	// (0x0009a6bb) cell_qdial_pane_t1

0x162f,	// (0x0009a6d3) cell_qdial_pane_t2_ParamLimits

0x162f,	// (0x0009a6d3) cell_qdial_pane_t2

0x1642,	// (0x0009a6e6) cell_qdial_pane_t3_ParamLimits

0x1642,	// (0x0009a6e6) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000a8227) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000a8227) cell_qdial_pane_t

0xa520,	// (0x000a35c4) grid_highlight_pane_cp04

0xa8eb,	// (0x000a398f) thumbnail_qdial_pane_ParamLimits

0xa8eb,	// (0x000a398f) thumbnail_qdial_pane

0xa947,	// (0x000a39eb) list_help_pane

0xa950,	// (0x000a39f4) scroll_pane_cp02

0x1655,	// (0x0009a6f9) help_list_pane_t1_ParamLimits

0x1655,	// (0x0009a6f9) help_list_pane_t1

0x168c,	// (0x0009a730) bg_notes_pane_g2

0x1694,	// (0x0009a738) bg_notes_pane_g3

0x169c,	// (0x0009a740) notes_bg_pane_g1

0x16a4,	// (0x0009a748) notes_bg_pane_g4

0x16ac,	// (0x0009a750) notes_bg_pane_g5

0x16b4,	// (0x0009a758) notes_bg_pane_g6

0x16bc,	// (0x0009a760) notes_bg_pane_g7

0x16c4,	// (0x0009a768) notes_bg_pane_g8

0x16cc,	// (0x0009a770) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000a8245) notes_bg_pane_g

0x16d4,	// (0x0009a778) list_notes_text_pane_ParamLimits

0x16d4,	// (0x0009a778) list_notes_text_pane

0xa959,	// (0x000a39fd) list_notes_text_pane_g1

0x9bb0,	// (0x000a2c54) list_notes_text_pane_t1

0x1700,	// (0x0009a7a4) listscroll_cale_week_pane

0x1725,	// (0x0009a7c9) bg_cale_heading_pane

0xa97c,	// (0x000a3a20) bg_cale_pane_cp01

0x1747,	// (0x0009a7eb) cale_week_corner_pane

0x1761,	// (0x0009a805) cale_week_day_heading_pane

0x1783,	// (0x0009a827) cale_week_scroll_pane_g1

0x17a0,	// (0x0009a844) cale_week_scroll_pane_g2

0x17b3,	// (0x0009a857) cale_week_scroll_pane_g3

0x17c6,	// (0x0009a86a) cale_week_scroll_pane_g4

0x17d9,	// (0x0009a87d) cale_week_scroll_pane_g5

0x17ec,	// (0x0009a890) cale_week_scroll_pane_g6

0x17ff,	// (0x0009a8a3) cale_week_scroll_pane_g7

0x1814,	// (0x0009a8b8) cale_week_scroll_pane_g8

0x1829,	// (0x0009a8cd) cale_week_scroll_pane_g9

0x183c,	// (0x0009a8e0) cale_week_scroll_pane_g10

0x184f,	// (0x0009a8f3) cale_week_scroll_pane_g11

0x1862,	// (0x0009a906) cale_week_scroll_pane_g12

0x1879,	// (0x0009a91d) cale_week_scroll_pane_g13

0x1894,	// (0x0009a938) cale_week_scroll_pane_g14

0x18af,	// (0x0009a953) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000a8254) cale_week_scroll_pane_g

0x18df,	// (0x0009a983) cale_week_time_pane

0x18f4,	// (0x0009a998) grid_cale_week_pane

0xa9ab,	// (0x000a3a4f) scroll_pane_cp08

0x1913,	// (0x0009a9b7) cell_cale_week_pane_ParamLimits

0x1913,	// (0x0009a9b7) cell_cale_week_pane

0x1975,	// (0x0009aa19) cale_week_day_heading_pane_t1

0x1990,	// (0x0009aa34) cale_week_day_heading_pane_t2

0x19ab,	// (0x0009aa4f) cale_week_day_heading_pane_t3

0x19c6,	// (0x0009aa6a) cale_week_day_heading_pane_t4

0x19e1,	// (0x0009aa85) cale_week_day_heading_pane_t5

0x19fc,	// (0x0009aaa0) cale_week_day_heading_pane_t6

0x1a17,	// (0x0009aabb) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000a8275) cale_week_day_heading_pane_t

0xa9c8,	// (0x000a3a6c) bg_cale_side_pane

0x1a32,	// (0x0009aad6) cale_week_time_pane_t1

0x1a4c,	// (0x0009aaf0) cale_week_time_pane_t2

0x1a66,	// (0x0009ab0a) cale_week_time_pane_t3

0x1a80,	// (0x0009ab24) cale_week_time_pane_t4

0x1a9a,	// (0x0009ab3e) cale_week_time_pane_t5

0x1ab4,	// (0x0009ab58) cale_week_time_pane_t6

0x1ad4,	// (0x0009ab78) cale_week_time_pane_t7

0x1af6,	// (0x0009ab9a) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000a8284) cale_week_time_pane_t

0x1b1a,	// (0x0009abbe) cell_cale_week_pane_g2

0x1b3e,	// (0x0009abe2) cell_cale_week_pane_g3_ParamLimits

0x1b3e,	// (0x0009abe2) cell_cale_week_pane_g3

0xa9d6,	// (0x000a3a7a) grid_highlight_pane_cp07

0xa9de,	// (0x000a3a82) listscroll_gms_pane

0xa9e8,	// (0x000a3a8c) grid_gms_pane

0xa9f1,	// (0x000a3a95) listscroll_gms_pane_g1

0xa9f9,	// (0x000a3a9d) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000a8295) listscroll_gms_pane_g

0x1b56,	// (0x0009abfa) scroll_pane_cp010

0x1b61,	// (0x0009ac05) cell_gms_pane_ParamLimits

0x1b61,	// (0x0009ac05) cell_gms_pane

0x1b71,	// (0x0009ac15) cell_gms_pane_g1

0xaa01,	// (0x000a3aa5) cell_gms_pane_g2

0xaa09,	// (0x000a3aad) cell_gms_pane_g3

0xaa12,	// (0x000a3ab6) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000a829a) cell_gms_pane_g

0xaa1b,	// (0x000a3abf) grid_highlight_pane_cp09

0x418e,	// (0x0009d232) phob_pre_status_pane_g1

0x4196,	// (0x0009d23a) phob_pre_status_pane_g2

0x419e,	// (0x0009d242) phob_pre_status_pane_g3

0x41a6,	// (0x0009d24a) phob_pre_status_pane_g4

0x0004,

0xf4af,	// (0x000a8553) phob_pre_status_pane_g

0x41b6,	// (0x0009d25a) phob_pre_status_pane_t1

0x41c6,	// (0x0009d26a) phob_pre_status_pane_t2

0x41d6,	// (0x0009d27a) phob_pre_status_pane_t3

0x0002,

0xf4ba,	// (0x000a855e) phob_pre_status_pane_t

0xaa23,	// (0x000a3ac7) bg_list_pane_cp05

0x1b81,	// (0x0009ac25) grid_vorec_pane

0x1b8b,	// (0x0009ac2f) vorec_t1

0x1b99,	// (0x0009ac3d) vorec_t2

0x1ba7,	// (0x0009ac4b) vorec_t3

0x1bb5,	// (0x0009ac59) vorec_t4

0x9b54,	// (0x000a2bf8) vorec_t5

0x9b62,	// (0x000a2c06) vorec_t6

0x0004,

0xf1ff,	// (0x000a82a3) vorec_t

0x9b70,	// (0x000a2c14) wait_bar_pane_cp01

0x1bd1,	// (0x0009ac75) cell_vorec_pane_ParamLimits

0x1bd1,	// (0x0009ac75) cell_vorec_pane

0x1be4,	// (0x0009ac88) cell_vorec_pane_g1

0xa520,	// (0x000a35c4) grid_highlight_pane_cp05

0x1bfe,	// (0x0009aca2) cams_zoom_pane

0x1c0a,	// (0x0009acae) image_vga_pane

0x1c19,	// (0x0009acbd) main_camera_pane_g1

0x1c27,	// (0x0009accb) main_camera_pane_g2

0x1c33,	// (0x0009acd7) main_camera_pane_g3

0x1c3f,	// (0x0009ace3) main_camera_pane_g4

0x1c4b,	// (0x0009acef) main_camera_pane_g5

0x1c57,	// (0x0009acfb) main_camera_pane_g6

0x1c63,	// (0x0009ad07) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000a82ae) main_camera_pane_g

0x1c6f,	// (0x0009ad13) main_camera_pane_t1

0x1c81,	// (0x0009ad25) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000a82bf) main_camera_pane_t

0x1ca2,	// (0x0009ad46) cams_zoom_pane_cp_ParamLimits

0x1ca2,	// (0x0009ad46) cams_zoom_pane_cp

0x1cc6,	// (0x0009ad6a) image_cif_pane_ParamLimits

0x1cc6,	// (0x0009ad6a) image_cif_pane

0x1ce4,	// (0x0009ad88) image_subqcif_pane

0x1cec,	// (0x0009ad90) main_video_pane_g1_ParamLimits

0x1cec,	// (0x0009ad90) main_video_pane_g1

0x1d0c,	// (0x0009adb0) main_video_pane_g2_ParamLimits

0x1d0c,	// (0x0009adb0) main_video_pane_g2

0x1d3c,	// (0x0009ade0) main_video_pane_g3_ParamLimits

0x1d3c,	// (0x0009ade0) main_video_pane_g3

0x1d65,	// (0x0009ae09) main_video_pane_g4_ParamLimits

0x1d65,	// (0x0009ae09) main_video_pane_g4

0x1d8e,	// (0x0009ae32) main_video_pane_g5_ParamLimits

0x1d8e,	// (0x0009ae32) main_video_pane_g5

0xaa37,	// (0x000a3adb) main_video_pane_g6_ParamLimits

0xaa37,	// (0x000a3adb) main_video_pane_g6

0x0006,

0xf220,	// (0x000a82c4) main_video_pane_g_ParamLimits

0xf220,	// (0x000a82c4) main_video_pane_g

0x1db0,	// (0x0009ae54) main_video_pane_t1_ParamLimits

0x1db0,	// (0x0009ae54) main_video_pane_t1

0xaa51,	// (0x000a3af5) cams_zoom_pane_g1

0xaa5a,	// (0x000a3afe) cams_zoom_pane_g2

0xaa63,	// (0x000a3b07) cams_zoom_pane_g3

0xaa6c,	// (0x000a3b10) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000a82d3) cams_zoom_pane_g

0x1dfa,	// (0x0009ae9e) grid_cams_pane

0x1e08,	// (0x0009aeac) linegrid_cams_pane

0x1e16,	// (0x0009aeba) cell_cams_pane_ParamLimits

0x1e16,	// (0x0009aeba) cell_cams_pane

0xaa75,	// (0x000a3b19) cams_burst_image_pane

0xaa7d,	// (0x000a3b21) cell_cams_pane_g1

0xa520,	// (0x000a35c4) grid_highlight_pane_cp03

0xa8a1,	// (0x000a3945) mp_bg_pane_g1

0xa520,	// (0x000a35c4) bg_list_pane_cp03

0xc806,	// (0x000a58aa) bg_mp_pane

0xc80e,	// (0x000a58b2) grid_mp_pane

0xc816,	// (0x000a58ba) media_player_g1

0xc81e,	// (0x000a58c2) media_player_t1

0xc82c,	// (0x000a58d0) media_player_t2

0xc83a,	// (0x000a58de) media_player_t3

0xc848,	// (0x000a58ec) media_player_t4

0xc856,	// (0x000a58fa) media_player_t5

0xc864,	// (0x000a5908) media_player_t6

0xc872,	// (0x000a5916) media_player_t7

0x0006,

0x0442,	// (0x000994e6) media_player_t

0xc880,	// (0x000a5924) wait_bar_pane_cp02

0xf49b,	// (0x000a853f) main_usb_pane_t

0x4185,	// (0x0009d229) cell_mp_pane

0xa8a1,	// (0x000a3945) cell_mp_pane_g1

0xa520,	// (0x000a35c4) grid_highlight_pane_cp06

0xaa85,	// (0x000a3b29) grid_skin_colour_pane

0xaa8d,	// (0x000a3b31) list_highlight_pane_cp03

0x1f20,	// (0x0009afc4) skin_g1

0xaa95,	// (0x000a3b39) skin_t1

0xaaa4,	// (0x000a3b48) skin_t2

0x0001,

0xf264,	// (0x000a8308) skin_t

0x1f2a,	// (0x0009afce) cell_skin_colour_pane_ParamLimits

0x1f2a,	// (0x0009afce) cell_skin_colour_pane

0xaab2,	// (0x000a3b56) cell_skin_colour_pane_g1

0x1fae,	// (0x0009b052) call_video_g1_ParamLimits

0x1fae,	// (0x0009b052) call_video_g1

0x1fbe,	// (0x0009b062) call_video_g2_ParamLimits

0x1fbe,	// (0x0009b062) call_video_g2

0x0001,

0xf269,	// (0x000a830d) call_video_g_ParamLimits

0xf269,	// (0x000a830d) call_video_g

0x2018,	// (0x0009b0bc) call_video_uplink_pane_cp1_ParamLimits

0x2018,	// (0x0009b0bc) call_video_uplink_pane_cp1

0xaac4,	// (0x000a3b68) call_video_uplink_pane_cp2

0x20e4,	// (0x0009b188) video_down_crop_pane_ParamLimits

0x20e4,	// (0x0009b188) video_down_crop_pane

0x21d6,	// (0x0009b27a) video_down_pane_ParamLimits

0x21d6,	// (0x0009b27a) video_down_pane

0xaacc,	// (0x000a3b70) video_down_subqcif_pane_ParamLimits

0xaacc,	// (0x000a3b70) video_down_subqcif_pane

0xaae4,	// (0x000a3b88) video_down_subqcif_pane_cp_ParamLimits

0xaae4,	// (0x000a3b88) video_down_subqcif_pane_cp

0xab0a,	// (0x000a3bae) im_reading_pane_ParamLimits

0xab0a,	// (0x000a3bae) im_reading_pane

0x22f6,	// (0x0009b39a) im_writing_pane_ParamLimits

0x22f6,	// (0x0009b39a) im_writing_pane

0x2314,	// (0x0009b3b8) im_reading_pane_t1

0xab24,	// (0x000a3bc8) list_im_pane

0xab35,	// (0x000a3bd9) scroll_pane_cp07

0x236c,	// (0x0009b410) im_writing_pane_t1_ParamLimits

0x236c,	// (0x0009b410) im_writing_pane_t1

0xab4e,	// (0x000a3bf2) im_writing_pane_t2_ParamLimits

0xab4e,	// (0x000a3bf2) im_writing_pane_t2

0x0001,

0xf273,	// (0x000a8317) im_writing_pane_t_ParamLimits

0xf273,	// (0x000a8317) im_writing_pane_t

0xa520,	// (0x000a35c4) input_focus_pane_cp04

0xa520,	// (0x000a35c4) input_focus_pane_cp05

0x237e,	// (0x0009b422) list_im_single_pane_ParamLimits

0x237e,	// (0x0009b422) list_im_single_pane

0x23a5,	// (0x0009b449) list_single_im_pane_t1

0x4149,	// (0x0009d1ed) blid_accuracy_pane

0x4151,	// (0x0009d1f5) blid_compass_pane

0x415b,	// (0x0009d1ff) main_location_t1

0x4169,	// (0x0009d20d) main_location_t2

0x4177,	// (0x0009d21b) main_location_t3

0x0002,

0xf4a8,	// (0x000a854c) main_location_t

0xa520,	// (0x000a35c4) aid_levels_location

0xa8a1,	// (0x000a3945) blid_accuracy_pane_g1

0xa8a1,	// (0x000a3945) blid_accuracy_pane_g2

0x0001,

0xf2c2,	// (0x000a8366) blid_accuracy_pane_g

0xabd4,	// (0x000a3c78) wml_content_pane

0xac12,	// (0x000a3cb6) wml_button_pane_ParamLimits

0xac12,	// (0x000a3cb6) wml_button_pane

0x23b4,	// (0x0009b458) wml_list_single_large_pane_ParamLimits

0x23b4,	// (0x0009b458) wml_list_single_large_pane

0x23df,	// (0x0009b483) wml_list_single_medium_pane_ParamLimits

0x23df,	// (0x0009b483) wml_list_single_medium_pane

0x2411,	// (0x0009b4b5) wml_list_single_small_pane_ParamLimits

0x2411,	// (0x0009b4b5) wml_list_single_small_pane

0xac26,	// (0x000a3cca) wml_selection_box_pane_ParamLimits

0xac26,	// (0x000a3cca) wml_selection_box_pane

0xac39,	// (0x000a3cdd) wml_list_single_pane_t1

0xac48,	// (0x000a3cec) wml_list_single_medium_pane_t1

0xac57,	// (0x000a3cfb) wml_list_single_large_pane_t1

0xac66,	// (0x000a3d0a) input_focus_pane_cp02_ParamLimits

0xac66,	// (0x000a3d0a) input_focus_pane_cp02

0xac79,	// (0x000a3d1d) wml_selection_box_pane_g1

0xac82,	// (0x000a3d26) wml_selection_box_pane_t1_ParamLimits

0xac82,	// (0x000a3d26) wml_selection_box_pane_t1

0xa77b,	// (0x000a381f) bg_wml_button_pane_ParamLimits

0xa77b,	// (0x000a381f) bg_wml_button_pane

0xac9a,	// (0x000a3d3e) wml_button_pane_g1

0xaca2,	// (0x000a3d46) wml_button_pane_t1

0xac9a,	// (0x000a3d3e) wml_button_bg_pane_g1

0xacb2,	// (0x000a3d56) wml_button_bg_pane_g2

0xacba,	// (0x000a3d5e) wml_button_bg_pane_g3

0xacc2,	// (0x000a3d66) wml_button_bg_pane_g4

0xacca,	// (0x000a3d6e) wml_button_bg_pane_g5

0xacd2,	// (0x000a3d76) wml_button_bg_pane_g6

0xacda,	// (0x000a3d7e) wml_button_bg_pane_g7

0xace2,	// (0x000a3d86) wml_button_bg_pane_g8

0xacea,	// (0x000a3d8e) wml_button_bg_pane_g9

0x0008,

0x00dc,	// (0x00099180) wml_button_bg_pane_g

0x244e,	// (0x0009b4f2) bg_list_pane_cp02

0xacf2,	// (0x000a3d96) mce_header_pane_ParamLimits

0xacf2,	// (0x000a3d96) mce_header_pane

0xad08,	// (0x000a3dac) mce_icon_pane

0xad08,	// (0x000a3dac) mce_image_pane

0xad11,	// (0x000a3db5) mce_text_pane_ParamLimits

0xad11,	// (0x000a3db5) mce_text_pane

0x2458,	// (0x0009b4fc) scroll_pane_cp03

0xac0a,	// (0x000a3cae) scroll_pane_cp04

0xad24,	// (0x000a3dc8) scroll_pane_cp05_ParamLimits

0xad24,	// (0x000a3dc8) scroll_pane_cp05

0x2462,	// (0x0009b506) mce_header_field_pane_ParamLimits

0x2462,	// (0x0009b506) mce_header_field_pane

0x2482,	// (0x0009b526) mce_header_field_pane_2_ParamLimits

0x2482,	// (0x0009b526) mce_header_field_pane_2

0x2498,	// (0x0009b53c) mce_header_field_pane_3

0x24a0,	// (0x0009b544) list_single_mce_message_pane_ParamLimits

0x24a0,	// (0x0009b544) list_single_mce_message_pane

0x24ce,	// (0x0009b572) list_single_mce_smart_pane_ParamLimits

0x24ce,	// (0x0009b572) list_single_mce_smart_pane

0xad30,	// (0x000a3dd4) input_focus_pane_cp03

0xad39,	// (0x000a3ddd) list_header_data_pane

0x2507,	// (0x0009b5ab) mce_header_field_pane_t1

0x2515,	// (0x0009b5b9) list_single_mce_header_pane_ParamLimits

0x2515,	// (0x0009b5b9) list_single_mce_header_pane

0xad41,	// (0x000a3de5) list_single_mce_header_pane_t1

0xad50,	// (0x000a3df4) list_single_mce_message_pane_g1

0xad58,	// (0x000a3dfc) list_single_mce_message_pane_t1

0x256b,	// (0x0009b60f) bg_cale_heading_pane_cp01_ParamLimits

0x256b,	// (0x0009b60f) bg_cale_heading_pane_cp01

0xad66,	// (0x000a3e0a) bg_cale_pane_cp02_ParamLimits

0xad66,	// (0x000a3e0a) bg_cale_pane_cp02

0x25b9,	// (0x0009b65d) cale_month_corner_pane

0x25d8,	// (0x0009b67c) cale_month_day_heading_pane_ParamLimits

0x25d8,	// (0x0009b67c) cale_month_day_heading_pane

0x263e,	// (0x0009b6e2) cale_month_pane_g1_ParamLimits

0x263e,	// (0x0009b6e2) cale_month_pane_g1

0x2681,	// (0x0009b725) cale_month_pane_g2_ParamLimits

0x2681,	// (0x0009b725) cale_month_pane_g2

0x26bb,	// (0x0009b75f) cale_month_pane_g3_ParamLimits

0x26bb,	// (0x0009b75f) cale_month_pane_g3

0x270b,	// (0x0009b7af) cale_month_pane_g4_ParamLimits

0x270b,	// (0x0009b7af) cale_month_pane_g4

0x275b,	// (0x0009b7ff) cale_month_pane_g5_ParamLimits

0x275b,	// (0x0009b7ff) cale_month_pane_g5

0x27ab,	// (0x0009b84f) cale_month_pane_g6_ParamLimits

0x27ab,	// (0x0009b84f) cale_month_pane_g6

0x27fb,	// (0x0009b89f) cale_month_pane_g7_ParamLimits

0x27fb,	// (0x0009b89f) cale_month_pane_g7

0x2863,	// (0x0009b907) cale_month_pane_g8_ParamLimits

0x2863,	// (0x0009b907) cale_month_pane_g8

0x28cb,	// (0x0009b96f) cale_month_pane_g9_ParamLimits

0x28cb,	// (0x0009b96f) cale_month_pane_g9

0x2929,	// (0x0009b9cd) cale_month_pane_g10_ParamLimits

0x2929,	// (0x0009b9cd) cale_month_pane_g10

0x2987,	// (0x0009ba2b) cale_month_pane_g11_ParamLimits

0x2987,	// (0x0009ba2b) cale_month_pane_g11

0x29db,	// (0x0009ba7f) cale_month_pane_g12_ParamLimits

0x29db,	// (0x0009ba7f) cale_month_pane_g12

0x2a31,	// (0x0009bad5) cale_month_pane_g13_ParamLimits

0x2a31,	// (0x0009bad5) cale_month_pane_g13

0x000c,

0xf278,	// (0x000a831c) cale_month_pane_g_ParamLimits

0xf278,	// (0x000a831c) cale_month_pane_g

0x2a87,	// (0x0009bb2b) cale_month_week_pane

0x2aab,	// (0x0009bb4f) grid_cale_month_pane_ParamLimits

0x2aab,	// (0x0009bb4f) grid_cale_month_pane

0x2b08,	// (0x0009bbac) cale_month_day_heading_pane_t1

0x2b8e,	// (0x0009bc32) cale_month_day_heading_pane_t2

0x2c07,	// (0x0009bcab) cale_month_day_heading_pane_t3

0x2c80,	// (0x0009bd24) cale_month_day_heading_pane_t4

0x2cf9,	// (0x0009bd9d) cale_month_day_heading_pane_t5

0x2d72,	// (0x0009be16) cale_month_day_heading_pane_t6

0x2deb,	// (0x0009be8f) cale_month_day_heading_pane_t7

0x0006,

0xf293,	// (0x000a8337) cale_month_day_heading_pane_t

0xa9c8,	// (0x000a3a6c) bg_cale_side_pane_cp01

0x2e7c,	// (0x0009bf20) cale_month_week_pane_t1

0x2e95,	// (0x0009bf39) cale_month_week_pane_t2

0x2eae,	// (0x0009bf52) cale_month_week_pane_t3

0x2ec7,	// (0x0009bf6b) cale_month_week_pane_t4

0x2ee2,	// (0x0009bf86) cale_month_week_pane_t5

0x2f03,	// (0x0009bfa7) cale_month_week_pane_t6

0x0005,

0xf2a2,	// (0x000a8346) cale_month_week_pane_t

0x2f24,	// (0x0009bfc8) cell_cale_month_pane_ParamLimits

0x2f24,	// (0x0009bfc8) cell_cale_month_pane

0x3074,	// (0x0009c118) cell_cale_month_pane_g1

0x3080,	// (0x0009c124) cell_cale_month_pane_t1_ParamLimits

0x3080,	// (0x0009c124) cell_cale_month_pane_t1

0xa9d6,	// (0x000a3a7a) grid_highlight_pane_cp08

0xa8a1,	// (0x000a3945) main_smil_g1

0x30ac,	// (0x0009c150) smil_status_pane

0xada5,	// (0x000a3e49) smil_text_pane

0xc6e6,	// (0x000a578a) bg_popup_call3_rect_pane_g8

0xc6ee,	// (0x000a5792) bg_popup_call3_rect_pane_g9

0x0008,

0xf483,	// (0x000a8527) bg_popup_call3_rect_pane_g

0xc975,	// (0x000a5a19) smil_status_volume_pane_g1

0xadaf,	// (0x000a3e53) smil_status_pane_t1

0x4580,	// (0x0009d624) volume_smil_pane

0xadc6,	// (0x000a3e6a) list_smil_text_pane

0x30bf,	// (0x0009c163) scroll_pane_cp011

0x30ca,	// (0x0009c16e) smil_text_list_pane_t1_ParamLimits

0x30ca,	// (0x0009c16e) smil_text_list_pane_t1

0x3157,	// (0x0009c1fb) aid_volume_smil_ParamLimits

0x3157,	// (0x0009c1fb) aid_volume_smil

0xa8a1,	// (0x000a3945) smil_volume_pane_g1

0xa8a1,	// (0x000a3945) smil_volume_pane_g2

0x0001,

0xf2c2,	// (0x000a8366) smil_volume_pane_g

0x1700,	// (0x0009a7a4) listscroll_cale_day_pane

0xadd0,	// (0x000a3e74) bg_cale_pane

0xade8,	// (0x000a3e8c) list_cale_pane

0xae0b,	// (0x000a3eaf) scroll_pane_cp09

0xae1c,	// (0x000a3ec0) cale_bg_pane_g1

0xae24,	// (0x000a3ec8) cale_bg_pane_g2

0xae2c,	// (0x000a3ed0) cale_bg_pane_g3

0xae34,	// (0x000a3ed8) cale_bg_pane_g4

0xae3c,	// (0x000a3ee0) cale_bg_pane_g5

0xae44,	// (0x000a3ee8) cale_bg_pane_g6

0xae4c,	// (0x000a3ef0) cale_bg_pane_g7

0xae54,	// (0x000a3ef8) cale_bg_pane_g8

0xae5c,	// (0x000a3f00) cale_bg_pane_g9

0x0008,

0x013e,	// (0x000991e2) cale_bg_pane_g

0x3181,	// (0x0009c225) list_cale_time_pane_ParamLimits

0x3181,	// (0x0009c225) list_cale_time_pane

0xae64,	// (0x000a3f08) list_cale_time_pane_g1_ParamLimits

0xae64,	// (0x000a3f08) list_cale_time_pane_g1

0xae70,	// (0x000a3f14) list_cale_time_pane_g2_ParamLimits

0xae70,	// (0x000a3f14) list_cale_time_pane_g2

0x31a9,	// (0x0009c24d) list_cale_time_pane_g3_ParamLimits

0x31a9,	// (0x0009c24d) list_cale_time_pane_g3

0x31b7,	// (0x0009c25b) list_cale_time_pane_g4_ParamLimits

0x31b7,	// (0x0009c25b) list_cale_time_pane_g4

0x31c5,	// (0x0009c269) list_cale_time_pane_g5_ParamLimits

0x31c5,	// (0x0009c269) list_cale_time_pane_g5

0x0005,

0xf2c7,	// (0x000a836b) list_cale_time_pane_g_ParamLimits

0xf2c7,	// (0x000a836b) list_cale_time_pane_g

0xae8a,	// (0x000a3f2e) list_cale_time_pane_t1_ParamLimits

0xae8a,	// (0x000a3f2e) list_cale_time_pane_t1

0xaeb2,	// (0x000a3f56) list_cale_time_pane_t2_ParamLimits

0xaeb2,	// (0x000a3f56) list_cale_time_pane_t2

0x358d,	// (0x0009c631) aid_blid_cardinal_pane

0x35cf,	// (0x0009c673) compass_pane_t4

0xaeda,	// (0x000a3f7e) list_cale_time_pane_t4_ParamLimits

0xaeda,	// (0x000a3f7e) list_cale_time_pane_t4

0x35dd,	// (0x0009c681) compass_pane_t5

0x35ed,	// (0x0009c691) compass_pane_t6

0x35fb,	// (0x0009c69f) compass_pane_t7

0xb35e,	// (0x000a4402) navi_pane_cc_t1

0xb549,	// (0x000a45ed) aid_phob_thumbnail_center_pane

0x3c4a,	// (0x0009ccee) main_postcard_pane_g4_ParamLimits

0x0002,

0x015e,	// (0x00099202) list_cale_time_pane_t_ParamLimits

0x015e,	// (0x00099202) list_cale_time_pane_t

0xa177,	// (0x000a321b) bg_popup_window_pane_cp02_ParamLimits

0xa177,	// (0x000a321b) bg_popup_window_pane_cp02

0xaf02,	// (0x000a3fa6) heading_pane_cp01_ParamLimits

0xaf02,	// (0x000a3fa6) heading_pane_cp01

0xaf0e,	// (0x000a3fb2) loc_req_pane_ParamLimits

0xaf0e,	// (0x000a3fb2) loc_req_pane

0xaf1e,	// (0x000a3fc2) loc_type_pane_ParamLimits

0xaf1e,	// (0x000a3fc2) loc_type_pane

0xaf30,	// (0x000a3fd4) loc_type_pane_t1_ParamLimits

0xaf30,	// (0x000a3fd4) loc_type_pane_t1

0xaf42,	// (0x000a3fe6) loc_type_pane_t2_ParamLimits

0xaf42,	// (0x000a3fe6) loc_type_pane_t2

0xaf54,	// (0x000a3ff8) loc_type_pane_t3_ParamLimits

0xaf54,	// (0x000a3ff8) loc_type_pane_t3

0x0002,

0x0165,	// (0x00099209) loc_type_pane_t_ParamLimits

0x0165,	// (0x00099209) loc_type_pane_t

0xaf66,	// (0x000a400a) list_loc_req_pane

0xaf70,	// (0x000a4014) scroll_pane_cp012

0x31d3,	// (0x0009c277) list_single_loc_request_popup_menu_pane_ParamLimits

0x31d3,	// (0x0009c277) list_single_loc_request_popup_menu_pane

0xaf7b,	// (0x000a401f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf7b,	// (0x000a401f) list_single_loc_request_popup_menu_pane_g1

0xaf87,	// (0x000a402b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf87,	// (0x000a402b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x016c,	// (0x00099210) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x016c,	// (0x00099210) list_single_loc_request_popup_menu_pane_g

0xaf93,	// (0x000a4037) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf93,	// (0x000a4037) list_single_loc_request_popup_menu_pane_t1

0x31ed,	// (0x0009c291) bg_popup_window_pane_cp03_ParamLimits

0x31ed,	// (0x0009c291) bg_popup_window_pane_cp03

0x31fb,	// (0x0009c29f) heading_loc_req_pane_ParamLimits

0x31fb,	// (0x0009c29f) heading_loc_req_pane

0x3207,	// (0x0009c2ab) popup_dyc_status_message_window_g1_ParamLimits

0x3207,	// (0x0009c2ab) popup_dyc_status_message_window_g1

0x3213,	// (0x0009c2b7) popup_dyc_status_message_window_t1_ParamLimits

0x3213,	// (0x0009c2b7) popup_dyc_status_message_window_t1

0x3225,	// (0x0009c2c9) popup_dyc_status_message_window_t2_ParamLimits

0x3225,	// (0x0009c2c9) popup_dyc_status_message_window_t2

0x3237,	// (0x0009c2db) popup_dyc_status_message_window_t3_ParamLimits

0x3237,	// (0x0009c2db) popup_dyc_status_message_window_t3

0x0002,

0xf2d4,	// (0x000a8378) popup_dyc_status_message_window_t_ParamLimits

0xf2d4,	// (0x000a8378) popup_dyc_status_message_window_t

0xa520,	// (0x000a35c4) bg_heading_pane_cp01

0xafa9,	// (0x000a404d) heading_loc_req_pane_g1

0xafb1,	// (0x000a4055) heading_loc_req_pane_g2

0xafb9,	// (0x000a405d) heading_loc_req_pane_g3

0x0002,

0xf2db,	// (0x000a837f) heading_loc_req_pane_g

0xafc1,	// (0x000a4065) heading_loc_req_pane_t1

0xafdc,	// (0x000a4080) bg_popup_sub_pane_cp01_ParamLimits

0xafdc,	// (0x000a4080) bg_popup_sub_pane_cp01

0xafea,	// (0x000a408e) popup_cale_events_window_g1_ParamLimits

0xafea,	// (0x000a408e) popup_cale_events_window_g1

0xb00a,	// (0x000a40ae) popup_cale_events_window_g2_ParamLimits

0xb00a,	// (0x000a40ae) popup_cale_events_window_g2

0x0001,

0x01ac,	// (0x00099250) popup_cale_events_window_g_ParamLimits

0x01ac,	// (0x00099250) popup_cale_events_window_g

0xb02a,	// (0x000a40ce) popup_cale_events_window_t1_ParamLimits

0xb02a,	// (0x000a40ce) popup_cale_events_window_t1

0xb03c,	// (0x000a40e0) popup_cale_events_window_t2_ParamLimits

0xb03c,	// (0x000a40e0) popup_cale_events_window_t2

0xb07a,	// (0x000a411e) popup_cale_events_window_t3_ParamLimits

0xb07a,	// (0x000a411e) popup_cale_events_window_t3

0xb0b4,	// (0x000a4158) popup_cale_events_window_t4_ParamLimits

0xb0b4,	// (0x000a4158) popup_cale_events_window_t4

0x0003,

0x01b1,	// (0x00099255) popup_cale_events_window_t_ParamLimits

0x01b1,	// (0x00099255) popup_cale_events_window_t

0x3330,	// (0x0009c3d4) call_type_pane

0xb4f3,	// (0x000a4597) popup_call_status_window_g1

0x333c,	// (0x0009c3e0) popup_call_status_window_g2

0x3348,	// (0x0009c3ec) popup_call_status_window_g3

0x0002,

0xf30f,	// (0x000a83b3) popup_call_status_window_g

0xb0ea,	// (0x000a418e) call_type_pane_g1

0xb0f3,	// (0x000a4197) call_type_pane_g2

0x0001,

0x01c1,	// (0x00099265) call_type_pane_g

0xa520,	// (0x000a35c4) bg_popup_sub_pane_cp02

0xb0fc,	// (0x000a41a0) listscroll_popup_wml_pane

0xb104,	// (0x000a41a8) list_wml_pane

0xb10e,	// (0x000a41b2) scroll_pane_cp013

0xb119,	// (0x000a41bd) list_single_graphic_popup_wml_pane_ParamLimits

0xb119,	// (0x000a41bd) list_single_graphic_popup_wml_pane

0xa8a1,	// (0x000a3945) list_single_graphic_popup_wml_pane_g1

0xb12d,	// (0x000a41d1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf316,	// (0x000a83ba) list_single_graphic_popup_wml_pane_g

0xb135,	// (0x000a41d9) list_single_graphic_popup_wml_pane_t1

0xb14b,	// (0x000a41ef) aid_call_pane

0xa773,	// (0x000a3817) popup_clock_analogue_window_g1

0xa773,	// (0x000a3817) popup_clock_analogue_window_g2

0x3354,	// (0x0009c3f8) popup_clock_analogue_window_g3

0x3354,	// (0x0009c3f8) popup_clock_analogue_window_g4

0xa8a1,	// (0x000a3945) popup_clock_analogue_window_g5

0x0004,

0xf31b,	// (0x000a83bf) popup_clock_analogue_window_g

0x335c,	// (0x0009c400) popup_clock_analogue_window_t1

0x336a,	// (0x0009c40e) clock_digital_number_pane_ParamLimits

0x336a,	// (0x0009c40e) clock_digital_number_pane

0x3376,	// (0x0009c41a) clock_digital_number_pane_cp02_ParamLimits

0x3376,	// (0x0009c41a) clock_digital_number_pane_cp02

0x3382,	// (0x0009c426) clock_digital_number_pane_cp03_ParamLimits

0x3382,	// (0x0009c426) clock_digital_number_pane_cp03

0x338e,	// (0x0009c432) clock_digital_number_pane_cp04_ParamLimits

0x338e,	// (0x0009c432) clock_digital_number_pane_cp04

0x339a,	// (0x0009c43e) clock_digital_separator_pane_ParamLimits

0x339a,	// (0x0009c43e) clock_digital_separator_pane

0x33a6,	// (0x0009c44a) popup_clock_digital_window_t1

0xa8a1,	// (0x000a3945) clock_digital_number_pane_g1

0xa8a1,	// (0x000a3945) clock_digital_number_pane_g2

0x0001,

0xf2c2,	// (0x000a8366) clock_digital_number_pane_g

0xa8a1,	// (0x000a3945) clock_digital_separator_pane_g1

0xa8a1,	// (0x000a3945) clock_digital_separator_pane_g2

0x0001,

0xf2c2,	// (0x000a8366) clock_digital_separator_pane_g

0xa520,	// (0x000a35c4) bg_popup_window_pane_cp04

0xb153,	// (0x000a41f7) heading_pane_cp03

0xb15b,	// (0x000a41ff) listscroll_popup_gms_pane

0xb163,	// (0x000a4207) grid_large_graphic_popup_pane

0xb16d,	// (0x000a4211) listscroll_popup_gms_pane_g1

0xb175,	// (0x000a4219) listscroll_popup_gms_pane_g2

0x0001,

0x01d6,	// (0x0009927a) listscroll_popup_gms_pane_g

0xac0a,	// (0x000a3cae) scroll_pane_cp014

0x33c3,	// (0x0009c467) cell_large_graphic_popup_pane_ParamLimits

0x33c3,	// (0x0009c467) cell_large_graphic_popup_pane

0x33db,	// (0x0009c47f) cell_large_graphic_popup_pane_g1_ParamLimits

0x33db,	// (0x0009c47f) cell_large_graphic_popup_pane_g1

0xb17d,	// (0x000a4221) cell_large_graphic_popup_pane_g2_ParamLimits

0xb17d,	// (0x000a4221) cell_large_graphic_popup_pane_g2

0xb189,	// (0x000a422d) cell_large_graphic_popup_pane_g3_ParamLimits

0xb189,	// (0x000a422d) cell_large_graphic_popup_pane_g3

0xb196,	// (0x000a423a) cell_large_graphic_popup_pane_g4_ParamLimits

0xb196,	// (0x000a423a) cell_large_graphic_popup_pane_g4

0x0003,

0xf326,	// (0x000a83ca) cell_large_graphic_popup_pane_g_ParamLimits

0xf326,	// (0x000a83ca) cell_large_graphic_popup_pane_g

0xb1a6,	// (0x000a424a) grid_highlight_pane_cp010

0xa8a1,	// (0x000a3945) bg_popup_call_pane_g1

0xb1b0,	// (0x000a4254) list_single_graphic_popup_conf_pane_ParamLimits

0xb1b0,	// (0x000a4254) list_single_graphic_popup_conf_pane

0xb1c3,	// (0x000a4267) list_highlight_pane_cp01

0xb1cc,	// (0x000a4270) list_single_graphic_popup_conf_pane_g1

0xb1d4,	// (0x000a4278) list_single_graphic_popup_conf_pane_g2

0x0001,

0x01e4,	// (0x00099288) list_single_graphic_popup_conf_pane_g

0xb1dc,	// (0x000a4280) list_single_graphic_popup_conf_pane_t1

0xb1ea,	// (0x000a428e) linegrid_cams_pane_g1

0x33e7,	// (0x0009c48b) linegrid_cams_pane_g2

0xaa09,	// (0x000a3aad) linegrid_cams_pane_g3

0xb1f3,	// (0x000a4297) linegrid_cams_pane_g4

0x33f0,	// (0x0009c494) linegrid_cams_pane_g5

0x33f9,	// (0x0009c49d) linegrid_cams_pane_g6

0xaa12,	// (0x000a3ab6) linegrid_cams_pane_g7

0x0006,

0xf32f,	// (0x000a83d3) linegrid_cams_pane_g

0xb1fc,	// (0x000a42a0) popup_clock_analogue_window

0xb1fc,	// (0x000a42a0) popup_clock_digital_window

0xa520,	// (0x000a35c4) popup_phob_thumbnail_window

0xa8a1,	// (0x000a3945) call_video_uplink_pane_g1

0xb205,	// (0x000a42a9) call_video_uplink_pane_g2

0x0001,

0xf33e,	// (0x000a83e2) call_video_uplink_pane_g

0xb20d,	// (0x000a42b1) video_uplink_pane

0xb215,	// (0x000a42b9) mce_image_pane_g1

0x3402,	// (0x0009c4a6) mce_image_pane_g2

0x340a,	// (0x0009c4ae) mce_image_pane_g3

0x3412,	// (0x0009c4b6) mce_image_pane_g4

0x341a,	// (0x0009c4be) mce_image_pane_g5

0x0004,

0xf343,	// (0x000a83e7) mce_image_pane_g

0xb21f,	// (0x000a42c3) control_top_pane_stacon_cp01_ParamLimits

0xb21f,	// (0x000a42c3) control_top_pane_stacon_cp01

0xb233,	// (0x000a42d7) uni_indicator_pane_stacon_cp01_ParamLimits

0xb233,	// (0x000a42d7) uni_indicator_pane_stacon_cp01

0xb244,	// (0x000a42e8) bg_popup_sub_pane_cp03

0x3422,	// (0x0009c4c6) chi_dic_find_pane

0x342a,	// (0x0009c4ce) listscroll_chi_dic_pane

0x3433,	// (0x0009c4d7) main_pane_chidic_g1

0x3446,	// (0x0009c4ea) chi_dic_find_pane_t1

0xb24e,	// (0x000a42f2) find_chidic_pane

0xb257,	// (0x000a42fb) chi_dic_list_pane_ParamLimits

0xb257,	// (0x000a42fb) chi_dic_list_pane

0xb268,	// (0x000a430c) scroll_pane_cp020

0x3454,	// (0x0009c4f8) find_chidic_pane_t1

0xa520,	// (0x000a35c4) input_focus_pane_cp06

0x3463,	// (0x0009c507) list_chi_dic_pane_ParamLimits

0x3463,	// (0x0009c507) list_chi_dic_pane

0x3480,	// (0x0009c524) list_chi_dic_pane_t1_ParamLimits

0x3480,	// (0x0009c524) list_chi_dic_pane_t1

0xa520,	// (0x000a35c4) list_highlight_pane_cp020

0xb270,	// (0x000a4314) bg_cale_heading_pane_g1

0x3493,	// (0x0009c537) bg_cale_heading_pane_g2

0x349b,	// (0x0009c53f) bg_cale_heading_pane_g3

0x34a3,	// (0x0009c547) bg_cale_heading_pane_g4

0x34ad,	// (0x0009c551) bg_cale_heading_pane_g5

0x34b7,	// (0x0009c55b) bg_cale_heading_pane_g6

0x34bf,	// (0x0009c563) bg_cale_heading_pane_g7

0x34c7,	// (0x0009c56b) bg_cale_heading_pane_g8

0x34d1,	// (0x0009c575) bg_cale_heading_pane_g9

0x0008,

0xf34e,	// (0x000a83f2) bg_cale_heading_pane_g

0xb270,	// (0x000a4314) bg_cale_side_pane_g1

0x34db,	// (0x0009c57f) bg_cale_side_pane_g2

0x34e5,	// (0x0009c589) bg_cale_side_pane_g3

0x34ef,	// (0x0009c593) bg_cale_side_pane_g4

0x34f9,	// (0x0009c59d) bg_cale_side_pane_g5

0x3503,	// (0x0009c5a7) bg_cale_side_pane_g6

0x350d,	// (0x0009c5b1) bg_cale_side_pane_g7

0x3517,	// (0x0009c5bb) bg_cale_side_pane_g8

0x351f,	// (0x0009c5c3) bg_cale_side_pane_g9

0x0008,

0xf361,	// (0x000a8405) bg_cale_side_pane_g

0x3527,	// (0x0009c5cb) popup_call_status_window_ParamLimits

0x3527,	// (0x0009c5cb) popup_call_status_window

0xb278,	// (0x000a431c) stacon_top_pane

0xb280,	// (0x000a4324) status_pane_ParamLimits

0xb280,	// (0x000a4324) status_pane

0xb295,	// (0x000a4339) status_small_pane

0xb29d,	// (0x000a4341) control_pane

0xa520,	// (0x000a35c4) stacon_bottom_pane

0xb2a5,	// (0x000a4349) list_single_mce_smart_pane_t1_ParamLimits

0xb2a5,	// (0x000a4349) list_single_mce_smart_pane_t1

0xb2b8,	// (0x000a435c) list_single_mce_smart_pane_t2_ParamLimits

0xb2b8,	// (0x000a435c) list_single_mce_smart_pane_t2

0x0001,

0x022e,	// (0x000992d2) list_single_mce_smart_pane_t_ParamLimits

0x022e,	// (0x000992d2) list_single_mce_smart_pane_t

0x3533,	// (0x0009c5d7) compass_pane

0x353f,	// (0x0009c5e3) main_location2_pane_t1

0x3553,	// (0x0009c5f7) main_location2_pane_t2

0x3567,	// (0x0009c60b) main_location2_pane_t3

0x0003,

0xf374,	// (0x000a8418) main_location2_pane_t

0xb2d7,	// (0x000a437b) compass_pane_g1_ParamLimits

0xb2d7,	// (0x000a437b) compass_pane_g1

0x35b1,	// (0x0009c655) compass_pane_t1

0x35c0,	// (0x0009c664) compass_pane_t2

0x0005,

0xf37d,	// (0x000a8421) compass_pane_t

0x360b,	// (0x0009c6af) text_secondary_cp61

0xb355,	// (0x000a43f9) navi_pane_cams_g5

0xb3d1,	// (0x000a4475) navi_pane_im_t1

0xb3df,	// (0x000a4483) navi_pane_mp_g1_ParamLimits

0xb3df,	// (0x000a4483) navi_pane_mp_g1

0xb3f3,	// (0x000a4497) navi_pane_mp_g2_ParamLimits

0xb3f3,	// (0x000a4497) navi_pane_mp_g2

0xb3ff,	// (0x000a44a3) navi_pane_mp_g3_ParamLimits

0xb3ff,	// (0x000a44a3) navi_pane_mp_g3

0x0002,

0x0250,	// (0x000992f4) navi_pane_mp_g_ParamLimits

0x0250,	// (0x000992f4) navi_pane_mp_g

0xb40b,	// (0x000a44af) navi_pane_mp_t1

0xb419,	// (0x000a44bd) navi_pane_mp_t2

0x0002,

0x0257,	// (0x000992fb) navi_pane_mp_t

0xb484,	// (0x000a4528) navi_pane_vt_g1

0xb40b,	// (0x000a44af) navi_pane_vt_t1

0xb48c,	// (0x000a4530) navi_slider_pane

0xaa23,	// (0x000a3ac7) zooming_pane

0xb49c,	// (0x000a4540) navi_slider_pane_g1

0x3646,	// (0x0009c6ea) navi_slider_pane_g2

0x0006,

0xf38a,	// (0x000a842e) navi_slider_pane_g

0xb4c0,	// (0x000a4564) aid_levels_zoom

0xb4c8,	// (0x000a456c) zooming_pane_g1

0xb4d0,	// (0x000a4574) zooming_pane_g2

0xb4d0,	// (0x000a4574) zooming_pane_g3

0x0002,

0x026d,	// (0x00099311) zooming_pane_g

0xb4d8,	// (0x000a457c) level_10_zoom

0xb4e1,	// (0x000a4585) level_11_zoom

0xb4ea,	// (0x000a458e) level_1_zoom

0xb501,	// (0x000a45a5) level_2_zoom

0xb50a,	// (0x000a45ae) level_3_zoom

0xb513,	// (0x000a45b7) level_4_zoom

0xb51c,	// (0x000a45c0) level_5_zoom

0xb525,	// (0x000a45c9) level_6_zoom

0xb52e,	// (0x000a45d2) level_7_zoom

0xb537,	// (0x000a45db) level_8_zoom

0xb540,	// (0x000a45e4) level_9_zoom

0xb551,	// (0x000a45f5) popup_phob_thumbnail_window_g1

0xb559,	// (0x000a45fd) popup_phob_thumbnail_window_g2

0x0001,

0x0274,	// (0x00099318) popup_phob_thumbnail_window_g

0xc888,	// (0x000a592c) level_1_location

0xc890,	// (0x000a5934) level_2_location

0xc898,	// (0x000a593c) level_3_location

0xc8a0,	// (0x000a5944) level_4_location

0xaa23,	// (0x000a3ac7) level_5_location

0x3658,	// (0x0009c6fc) mce_icon_pane_g1

0x3660,	// (0x0009c704) mce_icon_pane_g2

0x0001,

0xf399,	// (0x000a843d) mce_icon_pane_g

0x3668,	// (0x0009c70c) main_mup_pane_g1_ParamLimits

0x3668,	// (0x0009c70c) main_mup_pane_g1

0x3680,	// (0x0009c724) main_mup_pane_g2_ParamLimits

0x3680,	// (0x0009c724) main_mup_pane_g2

0x3694,	// (0x0009c738) main_mup_pane_g3_ParamLimits

0x3694,	// (0x0009c738) main_mup_pane_g3

0x36a8,	// (0x0009c74c) main_mup_pane_g4_ParamLimits

0x36a8,	// (0x0009c74c) main_mup_pane_g4

0x36c4,	// (0x0009c768) main_mup_pane_g5_ParamLimits

0x36c4,	// (0x0009c768) main_mup_pane_g5

0x36e5,	// (0x0009c789) main_mup_pane_g6_ParamLimits

0x36e5,	// (0x0009c789) main_mup_pane_g6

0x3701,	// (0x0009c7a5) main_mup_pane_g7_ParamLimits

0x3701,	// (0x0009c7a5) main_mup_pane_g7

0x371d,	// (0x0009c7c1) main_mup_pane_g8_ParamLimits

0x371d,	// (0x0009c7c1) main_mup_pane_g8

0x3739,	// (0x0009c7dd) main_mup_pane_g9_ParamLimits

0x3739,	// (0x0009c7dd) main_mup_pane_g9

0x3758,	// (0x0009c7fc) main_mup_pane_g10_ParamLimits

0x3758,	// (0x0009c7fc) main_mup_pane_g10

0x3777,	// (0x0009c81b) main_mup_pane_g11_ParamLimits

0x3777,	// (0x0009c81b) main_mup_pane_g11

0x378f,	// (0x0009c833) main_mup_pane_g12_ParamLimits

0x378f,	// (0x0009c833) main_mup_pane_g12

0x379d,	// (0x0009c841) main_mup_pane_g13_ParamLimits

0x379d,	// (0x0009c841) main_mup_pane_g13

0x000c,

0xf39e,	// (0x000a8442) main_mup_pane_g_ParamLimits

0xf39e,	// (0x000a8442) main_mup_pane_g

0x37b3,	// (0x0009c857) main_mup_pane_t1_ParamLimits

0x37b3,	// (0x0009c857) main_mup_pane_t1

0x37d0,	// (0x0009c874) main_mup_pane_t2_ParamLimits

0x37d0,	// (0x0009c874) main_mup_pane_t2

0x37ea,	// (0x0009c88e) main_mup_pane_t3_ParamLimits

0x37ea,	// (0x0009c88e) main_mup_pane_t3

0x3804,	// (0x0009c8a8) main_mup_pane_t4_ParamLimits

0x3804,	// (0x0009c8a8) main_mup_pane_t4

0x3816,	// (0x0009c8ba) main_mup_pane_t5_ParamLimits

0x3816,	// (0x0009c8ba) main_mup_pane_t5

0x3828,	// (0x0009c8cc) main_mup_pane_t6_ParamLimits

0x3828,	// (0x0009c8cc) main_mup_pane_t6

0x0005,

0xf3b9,	// (0x000a845d) main_mup_pane_t_ParamLimits

0xf3b9,	// (0x000a845d) main_mup_pane_t

0x383e,	// (0x0009c8e2) mup_progress_pane_ParamLimits

0x383e,	// (0x0009c8e2) mup_progress_pane

0x384a,	// (0x0009c8ee) mup_visualizer_pane_ParamLimits

0x384a,	// (0x0009c8ee) mup_visualizer_pane

0x3888,	// (0x0009c92c) mup_volume_pane_ParamLimits

0x3888,	// (0x0009c92c) mup_volume_pane

0xb4f3,	// (0x000a4597) mup_visualizer_pane_g1_ParamLimits

0xb4f3,	// (0x000a4597) mup_visualizer_pane_g1

0xb4f3,	// (0x000a4597) mup_visualizer_pane_g2_ParamLimits

0xb4f3,	// (0x000a4597) mup_visualizer_pane_g2

0xb2d7,	// (0x000a437b) mup_visualizer_pane_g3_ParamLimits

0xb2d7,	// (0x000a437b) mup_visualizer_pane_g3

0x0002,

0xf3c6,	// (0x000a846a) mup_visualizer_pane_g_ParamLimits

0xf3c6,	// (0x000a846a) mup_visualizer_pane_g

0xa8a1,	// (0x000a3945) mup_volume_pane_g1

0xb569,	// (0x000a460d) mup_volume_pane_g2

0x0001,

0xf3cd,	// (0x000a8471) mup_volume_pane_g

0xa8a1,	// (0x000a3945) mup_progress_pane_g1

0xb572,	// (0x000a4616) mup_progress_pane_g2

0xb57b,	// (0x000a461f) mup_progress_pane_g3

0x0002,

0xf3d2,	// (0x000a8476) mup_progress_pane_g

0xa520,	// (0x000a35c4) bg_popup_window_pane_cp05

0xb584,	// (0x000a4628) heading_pane_cp02_ParamLimits

0xb584,	// (0x000a4628) heading_pane_cp02

0xb59e,	// (0x000a4642) list_popup_blid_pane

0xb5a6,	// (0x000a464a) list_blid_sat_info_pane_ParamLimits

0xb5a6,	// (0x000a464a) list_blid_sat_info_pane

0xb5b9,	// (0x000a465d) list_blid_sat_info_pane_g1

0xb5c1,	// (0x000a4665) list_blid_sat_info_pane_t1

0x3993,	// (0x0009ca37) mup_equalizer_pane_ParamLimits

0x3993,	// (0x0009ca37) mup_equalizer_pane

0x39b4,	// (0x0009ca58) mup_equalizer_pane_cp1_ParamLimits

0x39b4,	// (0x0009ca58) mup_equalizer_pane_cp1

0x39d5,	// (0x0009ca79) mup_equalizer_pane_cp2_ParamLimits

0x39d5,	// (0x0009ca79) mup_equalizer_pane_cp2

0x39f6,	// (0x0009ca9a) mup_equalizer_pane_cp3_ParamLimits

0x39f6,	// (0x0009ca9a) mup_equalizer_pane_cp3

0x3a17,	// (0x0009cabb) mup_equalizer_pane_cp4_ParamLimits

0x3a17,	// (0x0009cabb) mup_equalizer_pane_cp4

0x3a38,	// (0x0009cadc) mup_equalizer_pane_cp5

0x3a4e,	// (0x0009caf2) mup_equalizer_pane_cp6

0x3a66,	// (0x0009cb0a) mup_equalizer_pane_cp7

0xc766,	// (0x000a580a) bg_popup_call_poc_act_pane_g9

0xc76e,	// (0x000a5812) bg_popup_call_poc_act_pane_g10

0xc776,	// (0x000a581a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa77b,	// (0x000a381f) mup_scale_pane

0xa8a1,	// (0x000a3945) mup_scale_pane_g1

0xb5cf,	// (0x000a4673) mup_scale_pane_g2

0x0006,

0xf3ee,	// (0x000a8492) mup_scale_pane_g

0xb5f3,	// (0x000a4697) msg_data_pane

0xb5fb,	// (0x000a469f) scroll_pane_cp017

0x3a90,	// (0x0009cb34) bg_list_pane_cp04_ParamLimits

0x3a90,	// (0x0009cb34) bg_list_pane_cp04

0xb603,	// (0x000a46a7) msg_data_pane_g1

0x3aac,	// (0x0009cb50) msg_data_pane_g2

0x3ab4,	// (0x0009cb58) msg_data_pane_g3

0x3abc,	// (0x0009cb60) msg_data_pane_g4

0x3ac4,	// (0x0009cb68) msg_data_pane_g5

0x3acc,	// (0x0009cb70) msg_data_pane_g6

0x3ad4,	// (0x0009cb78) msg_data_pane_g7

0x0006,

0xf3fd,	// (0x000a84a1) msg_data_pane_g

0x3adc,	// (0x0009cb80) msg_text_pane_ParamLimits

0x3adc,	// (0x0009cb80) msg_text_pane

0x3b2c,	// (0x0009cbd0) qrid_highlight_pane_cp011_ParamLimits

0x3b2c,	// (0x0009cbd0) qrid_highlight_pane_cp011

0xa520,	// (0x000a35c4) msg_body_pane

0xa520,	// (0x000a35c4) msg_header_pane

0xb614,	// (0x000a46b8) input_focus_pane_cp07

0x9bc6,	// (0x000a2c6a) msg_header_pane_t1_ParamLimits

0x9bc6,	// (0x000a2c6a) msg_header_pane_t1

0x9bd8,	// (0x000a2c7c) msg_header_pane_t2_ParamLimits

0x9bd8,	// (0x000a2c7c) msg_header_pane_t2

0x0001,

0xf411,	// (0x000a84b5) msg_header_pane_t_ParamLimits

0xf411,	// (0x000a84b5) msg_header_pane_t

0xb629,	// (0x000a46cd) msg_body_pane_g1

0x9bea,	// (0x000a2c8e) msg_body_pane_t1_ParamLimits

0x9bea,	// (0x000a2c8e) msg_body_pane_t1

0x9c1b,	// (0x000a2cbf) msg_body_pane_t2_ParamLimits

0x9c1b,	// (0x000a2cbf) msg_body_pane_t2

0x9c2d,	// (0x000a2cd1) msg_body_pane_t3_ParamLimits

0x9c2d,	// (0x000a2cd1) msg_body_pane_t3

0x0002,

0xf416,	// (0x000a84ba) msg_body_pane_t_ParamLimits

0xf416,	// (0x000a84ba) msg_body_pane_t

0x3ba6,	// (0x0009cc4a) main_viewer_pane_g1_ParamLimits

0x3ba6,	// (0x0009cc4a) main_viewer_pane_g1

0x3bb2,	// (0x0009cc56) main_viewer_pane_g2_ParamLimits

0x3bb2,	// (0x0009cc56) main_viewer_pane_g2

0x3bbe,	// (0x0009cc62) main_viewer_pane_g3_ParamLimits

0x3bbe,	// (0x0009cc62) main_viewer_pane_g3

0x3bcf,	// (0x0009cc73) main_viewer_pane_g4_ParamLimits

0x3bcf,	// (0x0009cc73) main_viewer_pane_g4

0x3be0,	// (0x0009cc84) main_viewer_pane_g5_ParamLimits

0x3be0,	// (0x0009cc84) main_viewer_pane_g5

0x3be0,	// (0x0009cc84) main_viewer_pane_g7_ParamLimits

0x3be0,	// (0x0009cc84) main_viewer_pane_g7

0xaf7b,	// (0x000a401f) main_viewer_pane_g8_ParamLimits

0xaf7b,	// (0x000a401f) main_viewer_pane_g8

0x0007,

0xf426,	// (0x000a84ca) main_viewer_pane_g_ParamLimits

0xf426,	// (0x000a84ca) main_viewer_pane_g

0xb631,	// (0x000a46d5) viewer_content_pane_ParamLimits

0xb631,	// (0x000a46d5) viewer_content_pane

0x3c1e,	// (0x0009ccc2) main_postcard_pane_g1_ParamLimits

0x3c1e,	// (0x0009ccc2) main_postcard_pane_g1

0x3c2c,	// (0x0009ccd0) main_postcard_pane_g2_ParamLimits

0x3c2c,	// (0x0009ccd0) main_postcard_pane_g2

0x3c3a,	// (0x0009ccde) main_postcard_pane_g3_ParamLimits

0x3c3a,	// (0x0009ccde) main_postcard_pane_g3

0x0005,

0xf437,	// (0x000a84db) main_postcard_pane_g_ParamLimits

0xf437,	// (0x000a84db) main_postcard_pane_g

0x3c4a,	// (0x0009ccee) main_postcard_pane_g4

0xc988,	// (0x000a5a2c) smil_status_volume_pane_g2

0x3c76,	// (0x0009cd1a) postcard_pane_ParamLimits

0x3c76,	// (0x0009cd1a) postcard_pane

0xb4f3,	// (0x000a4597) postcard_pane_g1_ParamLimits

0xb4f3,	// (0x000a4597) postcard_pane_g1

0x3ca8,	// (0x0009cd4c) postcard_pane_g2_ParamLimits

0x3ca8,	// (0x0009cd4c) postcard_pane_g2

0x3cb4,	// (0x0009cd58) postcard_pane_g3_ParamLimits

0x3cb4,	// (0x0009cd58) postcard_pane_g3

0xb63f,	// (0x000a46e3) postcard_pane_g4_ParamLimits

0xb63f,	// (0x000a46e3) postcard_pane_g4

0x3cc0,	// (0x0009cd64) postcard_pane_g5_ParamLimits

0x3cc0,	// (0x0009cd64) postcard_pane_g5

0x3ccc,	// (0x0009cd70) postcard_pane_g6_ParamLimits

0x3ccc,	// (0x0009cd70) postcard_pane_g6

0xb64d,	// (0x000a46f1) postcard_pane_g7_ParamLimits

0xb64d,	// (0x000a46f1) postcard_pane_g7

0x0006,

0xf444,	// (0x000a84e8) postcard_pane_g_ParamLimits

0xf444,	// (0x000a84e8) postcard_pane_g

0x3cd8,	// (0x0009cd7c) main_mp2_pane_g1_ParamLimits

0x3cd8,	// (0x0009cd7c) main_mp2_pane_g1

0x3ce4,	// (0x0009cd88) main_mp2_pane_g2_ParamLimits

0x3ce4,	// (0x0009cd88) main_mp2_pane_g2

0x3cf0,	// (0x0009cd94) main_mp2_pane_g3_ParamLimits

0x3cf0,	// (0x0009cd94) main_mp2_pane_g3

0x0002,

0xf453,	// (0x000a84f7) main_mp2_pane_g_ParamLimits

0xf453,	// (0x000a84f7) main_mp2_pane_g

0x3cfc,	// (0x0009cda0) main_mp2_pane_t1_ParamLimits

0x3cfc,	// (0x0009cda0) main_mp2_pane_t1

0x3d13,	// (0x0009cdb7) main_mp2_pane_t2_ParamLimits

0x3d13,	// (0x0009cdb7) main_mp2_pane_t2

0x3d25,	// (0x0009cdc9) main_mp2_pane_t3_ParamLimits

0x3d25,	// (0x0009cdc9) main_mp2_pane_t3

0x0002,

0xf45a,	// (0x000a84fe) main_mp2_pane_t_ParamLimits

0xf45a,	// (0x000a84fe) main_mp2_pane_t

0xb65b,	// (0x000a46ff) pec_content_pane_ParamLimits

0xb65b,	// (0x000a46ff) pec_content_pane

0xac0a,	// (0x000a3cae) scroll_pane_cp015

0xb66d,	// (0x000a4711) pec_attribute_pane_ParamLimits

0xb66d,	// (0x000a4711) pec_attribute_pane

0x3d37,	// (0x0009cddb) pec_content_pane_g1_ParamLimits

0x3d37,	// (0x0009cddb) pec_content_pane_g1

0xb67d,	// (0x000a4721) pec_content_pane_t1_ParamLimits

0xb67d,	// (0x000a4721) pec_content_pane_t1

0xb68f,	// (0x000a4733) pec_content_pane_t2_ParamLimits

0xb68f,	// (0x000a4733) pec_content_pane_t2

0x0001,

0x0341,	// (0x000993e5) pec_content_pane_t_ParamLimits

0x0341,	// (0x000993e5) pec_content_pane_t

0x3d43,	// (0x0009cde7) list_single_graphic_pane_cp01_ParamLimits

0x3d43,	// (0x0009cde7) list_single_graphic_pane_cp01

0xa77b,	// (0x000a381f) bg_popup_sub_pane_cp04

0xb6a1,	// (0x000a4745) popup_mup_playback_window_g1

0xb6ad,	// (0x000a4751) popup_mup_playback_window_t1

0xb6c2,	// (0x000a4766) popup_mup_playback_window_t2

0x0001,

0x0346,	// (0x000993ea) popup_mup_playback_window_t

0xb6f9,	// (0x000a479d) main_image_pane_g1_ParamLimits

0xb6f9,	// (0x000a479d) main_image_pane_g1

0xb73c,	// (0x000a47e0) scroll_pane_cp018_ParamLimits

0xb73c,	// (0x000a47e0) scroll_pane_cp018

0xb754,	// (0x000a47f8) scroll_pane_cp016_ParamLimits

0xb754,	// (0x000a47f8) scroll_pane_cp016

0x3ddd,	// (0x0009ce81) smil2_image_pane_ParamLimits

0x3ddd,	// (0x0009ce81) smil2_image_pane

0x3e0d,	// (0x0009ceb1) smil2_root_pane_ParamLimits

0x3e0d,	// (0x0009ceb1) smil2_root_pane

0x3e39,	// (0x0009cedd) smil2_text_pane_ParamLimits

0x3e39,	// (0x0009cedd) smil2_text_pane

0xa520,	// (0x000a35c4) bg_list_pane_cp06

0xb790,	// (0x000a4834) grid_radio_pane

0xa520,	// (0x000a35c4) bg_popup_window_pane_cp06

0xb798,	// (0x000a483c) main_fmradio_pane_t1

0xb153,	// (0x000a41f7) heading_pane_cp04

0xb7a6,	// (0x000a484a) main_fmradio_pane_t2

0xc7be,	// (0x000a5862) popup_cale_lunar_info_window_g1

0xb7b4,	// (0x000a4858) main_fmradio_pane_t3

0xc7c6,	// (0x000a586a) popup_cale_lunar_info_window_g2

0xb7c2,	// (0x000a4866) main_fmradio_pane_t4

0x0001,

0xb7d0,	// (0x000a4874) main_fmradio_pane_t5

0x0004,

0x0434,	// (0x000994d8) popup_cale_lunar_info_window_g

0x035b,	// (0x000993ff) main_fmradio_pane_t

0xb7de,	// (0x000a4882) wait_bar_pane_cp03

0xb7e6,	// (0x000a488a) cell_fmradio_pane_ParamLimits

0xb7e6,	// (0x000a488a) cell_fmradio_pane

0xb64d,	// (0x000a46f1) cell_fmradio_pane_g1_ParamLimits

0xb64d,	// (0x000a46f1) cell_fmradio_pane_g1

0xa520,	// (0x000a35c4) grid_highlight_pane_cp011

0xb7f9,	// (0x000a489d) poc_content_pane_ParamLimits

0xb7f9,	// (0x000a489d) poc_content_pane

0xb80b,	// (0x000a48af) scroll_pane_cp019

0x3e79,	// (0x0009cf1d) popup_call_poc_act_window_ParamLimits

0x3e79,	// (0x0009cf1d) popup_call_poc_act_window

0x3e86,	// (0x0009cf2a) popup_call_poc_inact_window_ParamLimits

0x3e86,	// (0x0009cf2a) popup_call_poc_inact_window

0x03f8,	// (0x0009949c) bg_popup_call_poc_act_pane_g

0xc77e,	// (0x000a5822) bg_popup_call_poc_inact_pane_g1

0xc786,	// (0x000a582a) bg_popup_call_poc_inact_pane_g2

0xb813,	// (0x000a48b7) popup_call_poc_act_window_g2

0xc78e,	// (0x000a5832) bg_popup_call_poc_inact_pane_g3

0xc70e,	// (0x000a57b2) bg_popup_call_poc_inact_pane_g4

0xc796,	// (0x000a583a) bg_popup_call_poc_inact_pane_g5

0xb81b,	// (0x000a48bf) popup_call_poc_act_window_t1_ParamLimits

0xb81b,	// (0x000a48bf) popup_call_poc_act_window_t1

0xb843,	// (0x000a48e7) popup_call_poc_act_window_t2_ParamLimits

0xb843,	// (0x000a48e7) popup_call_poc_act_window_t2

0xb86b,	// (0x000a490f) popup_call_poc_act_window_t3_ParamLimits

0xb86b,	// (0x000a490f) popup_call_poc_act_window_t3

0xb893,	// (0x000a4937) popup_call_poc_act_window_t4_ParamLimits

0xb893,	// (0x000a4937) popup_call_poc_act_window_t4

0x0003,

0x0366,	// (0x0009940a) popup_call_poc_act_window_t_ParamLimits

0x0366,	// (0x0009940a) popup_call_poc_act_window_t

0xc79e,	// (0x000a5842) bg_popup_call_poc_inact_pane_g6

0xc7a6,	// (0x000a584a) bg_popup_call_poc_inact_pane_g7

0xc7ae,	// (0x000a5852) bg_popup_call_poc_inact_pane_g8

0xb8a5,	// (0x000a4949) popup_call_poc_inact_window_g2

0xc7b6,	// (0x000a585a) bg_popup_call_poc_inact_pane_g9

0x0008,

0x040f,	// (0x000994b3) bg_popup_call_poc_inact_pane_g

0xb8ad,	// (0x000a4951) popup_call_poc_inact_window_t1_ParamLimits

0xb8ad,	// (0x000a4951) popup_call_poc_inact_window_t1

0xb8c2,	// (0x000a4966) popup_call_poc_inact_window_t2_ParamLimits

0xb8c2,	// (0x000a4966) popup_call_poc_inact_window_t2

0xb8d7,	// (0x000a497b) popup_call_poc_inact_window_t3_ParamLimits

0xb8d7,	// (0x000a497b) popup_call_poc_inact_window_t3

0x0002,

0x036f,	// (0x00099413) popup_call_poc_inact_window_t_ParamLimits

0x036f,	// (0x00099413) popup_call_poc_inact_window_t

0xc8fb,	// (0x000a599f) context_pane_ParamLimits

0x44ca,	// (0x0009d56e) signal_pane_ParamLimits

0xaa23,	// (0x000a3ac7) main_call2_pane

0x443d,	// (0x0009d4e1) popup_phob_thumbnail2_window_ParamLimits

0x443d,	// (0x0009d4e1) popup_phob_thumbnail2_window

0x3b54,	// (0x0009cbf8) aid_hotspot_pointer_arrow_pane

0x3b5c,	// (0x0009cc00) aid_hotspot_pointer_hand_pane

0x41ae,	// (0x0009d252) phob_pre_status_pane_g5

0x1bfe,	// (0x0009aca2) cams_zoom_pane_ParamLimits

0x1c0a,	// (0x0009acae) image_vga_pane_ParamLimits

0x1c19,	// (0x0009acbd) main_camera_pane_g1_ParamLimits

0x1c27,	// (0x0009accb) main_camera_pane_g2_ParamLimits

0x1c33,	// (0x0009acd7) main_camera_pane_g3_ParamLimits

0x1c3f,	// (0x0009ace3) main_camera_pane_g4_ParamLimits

0x1c4b,	// (0x0009acef) main_camera_pane_g5_ParamLimits

0x1c57,	// (0x0009acfb) main_camera_pane_g6_ParamLimits

0x1c63,	// (0x0009ad07) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000a82ae) main_camera_pane_g_ParamLimits

0x1c6f,	// (0x0009ad13) main_camera_pane_t1_ParamLimits

0x1c81,	// (0x0009ad25) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000a82bf) main_camera_pane_t_ParamLimits

0xa77b,	// (0x000a381f) bg_popup_preview_window_pane_cp01_ParamLimits

0xa77b,	// (0x000a381f) bg_popup_preview_window_pane_cp01

0xb8ec,	// (0x000a4990) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ec,	// (0x000a4990) popup_phob_thumbnail2_window_g1

0xa520,	// (0x000a35c4) call2_cli_visual_pane

0x3ea2,	// (0x0009cf46) popup_call2_audio_conf_window_ParamLimits

0x3ea2,	// (0x0009cf46) popup_call2_audio_conf_window

0x3eb7,	// (0x0009cf5b) popup_call2_audio_first_window_ParamLimits

0x3eb7,	// (0x0009cf5b) popup_call2_audio_first_window

0x3f55,	// (0x0009cff9) popup_call2_audio_in_window_ParamLimits

0x3f55,	// (0x0009cff9) popup_call2_audio_in_window

0x3f97,	// (0x0009d03b) popup_call2_audio_out_window_ParamLimits

0x3f97,	// (0x0009d03b) popup_call2_audio_out_window

0x3ff9,	// (0x0009d09d) popup_call2_audio_second_window_ParamLimits

0x3ff9,	// (0x0009d09d) popup_call2_audio_second_window

0x4057,	// (0x0009d0fb) popup_call2_audio_wait_window_ParamLimits

0x4057,	// (0x0009d0fb) popup_call2_audio_wait_window

0xa520,	// (0x000a35c4) bg_popup_call2_act_pane_cp03

0xa75d,	// (0x000a3801) list_conf_pane_cp

0xb8f8,	// (0x000a499c) popup_call2_audio_conf_window_t1

0xb906,	// (0x000a49aa) list_single_graphic_popup_conf2_pane_ParamLimits

0xb906,	// (0x000a49aa) list_single_graphic_popup_conf2_pane

0xb1c3,	// (0x000a4267) list_highlight_pane_cp04

0xb919,	// (0x000a49bd) list_single_graphic_popup_conf2_pane_g1

0xb1d4,	// (0x000a4278) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0376,	// (0x0009941a) list_single_graphic_popup_conf2_pane_g

0xb923,	// (0x000a49c7) list_single_graphic_popup_conf2_pane_t1

0xb931,	// (0x000a49d5) bg_popup_call2_act_pane_cp01_ParamLimits

0xb931,	// (0x000a49d5) bg_popup_call2_act_pane_cp01

0xb9bb,	// (0x000a4a5f) call_type_pane_cp05_ParamLimits

0xb9bb,	// (0x000a4a5f) call_type_pane_cp05

0xba0f,	// (0x000a4ab3) popup_call2_audio_second_window_g1_ParamLimits

0xba0f,	// (0x000a4ab3) popup_call2_audio_second_window_g1

0xba63,	// (0x000a4b07) popup_call2_audio_second_window_g2_ParamLimits

0xba63,	// (0x000a4b07) popup_call2_audio_second_window_g2

0x0002,

0x037b,	// (0x0009941f) popup_call2_audio_second_window_g_ParamLimits

0x037b,	// (0x0009941f) popup_call2_audio_second_window_g

0xbac8,	// (0x000a4b6c) popup_call2_audio_second_window_t1_ParamLimits

0xbac8,	// (0x000a4b6c) popup_call2_audio_second_window_t1

0xbb83,	// (0x000a4c27) popup_call2_audio_second_window_t2_ParamLimits

0xbb83,	// (0x000a4c27) popup_call2_audio_second_window_t2

0xbbd6,	// (0x000a4c7a) popup_call2_audio_second_window_t3_ParamLimits

0xbbd6,	// (0x000a4c7a) popup_call2_audio_second_window_t3

0x0003,

0x0382,	// (0x00099426) popup_call2_audio_second_window_t_ParamLimits

0x0382,	// (0x00099426) popup_call2_audio_second_window_t

0xa520,	// (0x000a35c4) bg_popup_call2_in_pane_cp02

0xa52a,	// (0x000a35ce) call_type_pane_cp04

0xa532,	// (0x000a35d6) popup_call2_audio_wait_window_g1

0xa53a,	// (0x000a35de) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a819d) popup_call2_audio_wait_window_g

0xa542,	// (0x000a35e6) popup_call2_audio_wait_window_t3

0xbcc9,	// (0x000a4d6d) bg_popup_call2_act_pane_ParamLimits

0xbcc9,	// (0x000a4d6d) bg_popup_call2_act_pane

0xbd89,	// (0x000a4e2d) call_type_pane_cp03_ParamLimits

0xbd89,	// (0x000a4e2d) call_type_pane_cp03

0xbded,	// (0x000a4e91) popup_call2_audio_first_window_g1_ParamLimits

0xbded,	// (0x000a4e91) popup_call2_audio_first_window_g1

0xbe5d,	// (0x000a4f01) popup_call2_audio_first_window_g2_ParamLimits

0xbe5d,	// (0x000a4f01) popup_call2_audio_first_window_g2

0xb4f3,	// (0x000a4597) popup_call2_audio_first_window_g3_ParamLimits

0xb4f3,	// (0x000a4597) popup_call2_audio_first_window_g3

0x0004,

0xf471,	// (0x000a8515) popup_call2_audio_first_window_g_ParamLimits

0xf471,	// (0x000a8515) popup_call2_audio_first_window_g

0xbf3b,	// (0x000a4fdf) popup_call2_audio_first_window_t1_ParamLimits

0xbf3b,	// (0x000a4fdf) popup_call2_audio_first_window_t1

0xc03e,	// (0x000a50e2) popup_call2_audio_first_window_t4_ParamLimits

0xc03e,	// (0x000a50e2) popup_call2_audio_first_window_t4

0xc121,	// (0x000a51c5) popup_call2_audio_first_window_t5_ParamLimits

0xc121,	// (0x000a51c5) popup_call2_audio_first_window_t5

0x0003,

0x0396,	// (0x0009943a) popup_call2_audio_first_window_t_ParamLimits

0x0396,	// (0x0009943a) popup_call2_audio_first_window_t

0xa773,	// (0x000a3817) bg_popup_call2_act_pane_g1

0xc7ce,	// (0x000a5872) popup_cale_lunar_info_window_t1

0xc7dc,	// (0x000a5880) popup_cale_lunar_info_window_t2

0xc7ea,	// (0x000a588e) popup_cale_lunar_info_window_t3

0xa520,	// (0x000a35c4) bg_popup_call2_bubble_pane

0xc222,	// (0x000a52c6) bg_popup_call2_in_pane_cp01_ParamLimits

0xc222,	// (0x000a52c6) bg_popup_call2_in_pane_cp01

0xa1fc,	// (0x000a32a0) call_type_pane_cp02

0xc26a,	// (0x000a530e) popup_call2_audio_out_window_g1_ParamLimits

0xc26a,	// (0x000a530e) popup_call2_audio_out_window_g1

0xc296,	// (0x000a533a) popup_call2_audio_out_window_g2_ParamLimits

0xc296,	// (0x000a533a) popup_call2_audio_out_window_g2

0xc2be,	// (0x000a5362) popup_call2_audio_out_window_g3_ParamLimits

0xc2be,	// (0x000a5362) popup_call2_audio_out_window_g3

0x0003,

0x039f,	// (0x00099443) popup_call2_audio_out_window_g_ParamLimits

0x039f,	// (0x00099443) popup_call2_audio_out_window_g

0xc2f9,	// (0x000a539d) popup_call2_audio_out_window_t1_ParamLimits

0xc2f9,	// (0x000a539d) popup_call2_audio_out_window_t1

0xc358,	// (0x000a53fc) popup_call2_audio_out_window_t2_ParamLimits

0xc358,	// (0x000a53fc) popup_call2_audio_out_window_t2

0xc3ac,	// (0x000a5450) popup_call2_audio_out_window_t3_ParamLimits

0xc3ac,	// (0x000a5450) popup_call2_audio_out_window_t3

0xc3c2,	// (0x000a5466) popup_call2_audio_out_window_t4_ParamLimits

0xc3c2,	// (0x000a5466) popup_call2_audio_out_window_t4

0xc3d8,	// (0x000a547c) popup_call2_audio_out_window_t5_ParamLimits

0xc3d8,	// (0x000a547c) popup_call2_audio_out_window_t5

0x0005,

0x03a8,	// (0x0009944c) popup_call2_audio_out_window_t_ParamLimits

0x03a8,	// (0x0009944c) popup_call2_audio_out_window_t

0xc43c,	// (0x000a54e0) bg_popup_call2_in_pane_ParamLimits

0xc43c,	// (0x000a54e0) bg_popup_call2_in_pane

0xc498,	// (0x000a553c) popup_call2_audio_in_window_g1_ParamLimits

0xc498,	// (0x000a553c) popup_call2_audio_in_window_g1

0xc4d0,	// (0x000a5574) popup_call2_audio_in_window_g2_ParamLimits

0xc4d0,	// (0x000a5574) popup_call2_audio_in_window_g2

0xc508,	// (0x000a55ac) popup_call2_audio_in_window_g3_ParamLimits

0xc508,	// (0x000a55ac) popup_call2_audio_in_window_g3

0x0003,

0x03b5,	// (0x00099459) popup_call2_audio_in_window_g_ParamLimits

0x03b5,	// (0x00099459) popup_call2_audio_in_window_g

0xc560,	// (0x000a5604) popup_call2_audio_in_window_t1_ParamLimits

0xc560,	// (0x000a5604) popup_call2_audio_in_window_t1

0xc5e0,	// (0x000a5684) popup_call2_audio_in_window_t2_ParamLimits

0xc5e0,	// (0x000a5684) popup_call2_audio_in_window_t2

0xc660,	// (0x000a5704) popup_call2_audio_in_window_t3_ParamLimits

0xc660,	// (0x000a5704) popup_call2_audio_in_window_t3

0xc67a,	// (0x000a571e) popup_call2_audio_in_window_t4_ParamLimits

0xc67a,	// (0x000a571e) popup_call2_audio_in_window_t4

0xc68c,	// (0x000a5730) popup_call2_audio_in_window_t5_ParamLimits

0xc68c,	// (0x000a5730) popup_call2_audio_in_window_t5

0xc6a1,	// (0x000a5745) popup_call2_audio_in_window_t6_ParamLimits

0xc6a1,	// (0x000a5745) popup_call2_audio_in_window_t6

0x0005,

0x03be,	// (0x00099462) popup_call2_audio_in_window_t_ParamLimits

0x03be,	// (0x00099462) popup_call2_audio_in_window_t

0xa773,	// (0x000a3817) bg_popup_call2_in_pane_g1

0xc7f8,	// (0x000a589c) popup_cale_lunar_info_window_t4

0x0003,

0x0439,	// (0x000994dd) popup_cale_lunar_info_window_t

0xa77b,	// (0x000a381f) bg_popup_call2_rect_pane_ParamLimits

0xa77b,	// (0x000a381f) bg_popup_call2_rect_pane

0xa520,	// (0x000a35c4) call2_cli_visual_graphic_pane

0xa520,	// (0x000a35c4) call2_cli_visual_text_pane

0x4573,	// (0x0009d617) smil_status_volume_pane_g3

0x0002,

0xa8a1,	// (0x000a3945) call2_cli_visual_graphic_pane_g1

0xa8a1,	// (0x000a3945) call2_cli_visual_graphic_pane_g2

0xa8a1,	// (0x000a3945) call2_cli_visual_graphic_pane_g3

0x0002,

0xf47c,	// (0x000a8520) call2_cli_visual_graphic_pane_g

0xc6b6,	// (0x000a575a) bg_popup_call2_rect_pane_g1

0xa93f,	// (0x000a39e3) bg_popup_call2_rect_pane_g2

0xc6be,	// (0x000a5762) bg_popup_call2_rect_pane_g3

0xc6c6,	// (0x000a576a) bg_popup_call2_rect_pane_g4

0xc6ce,	// (0x000a5772) bg_popup_call2_rect_pane_g5

0xc6d6,	// (0x000a577a) bg_popup_call2_rect_pane_g6

0xc6de,	// (0x000a5782) bg_popup_call2_rect_pane_g7

0xc6e6,	// (0x000a578a) bg_popup_call2_rect_pane_g8

0xc6ee,	// (0x000a5792) bg_popup_call2_rect_pane_g9

0x0008,

0xf483,	// (0x000a8527) bg_popup_call2_rect_pane_g

0xc6f6,	// (0x000a579a) bg_popup_call2_bubble_pane_g1

0xc6fe,	// (0x000a57a2) bg_popup_call2_bubble_pane_g2

0xc706,	// (0x000a57aa) bg_popup_call2_bubble_pane_g3

0xc70e,	// (0x000a57b2) bg_popup_call2_bubble_pane_g4

0xc716,	// (0x000a57ba) bg_popup_call2_bubble_pane_g5

0xc71e,	// (0x000a57c2) bg_popup_call2_bubble_pane_g6

0xc726,	// (0x000a57ca) bg_popup_call2_bubble_pane_g7

0xc72e,	// (0x000a57d2) bg_popup_call2_bubble_pane_g8

0xc736,	// (0x000a57da) bg_popup_call2_bubble_pane_g9

0x0008,

0x03e5,	// (0x00099489) bg_popup_call2_bubble_pane_g

0x1710,	// (0x0009a7b4) aid_cale_week_size_cell_pane

0x1c93,	// (0x0009ad37) aid_cams_cif_uncrop_pane_ParamLimits

0x1c93,	// (0x0009ad37) aid_cams_cif_uncrop_pane

0x1dee,	// (0x0009ae92) aid_cams_size_cell_ParamLimits

0x1dee,	// (0x0009ae92) aid_cams_size_cell

0x1dfa,	// (0x0009ae9e) grid_cams_pane_ParamLimits

0x1e08,	// (0x0009aeac) linegrid_cams_pane_ParamLimits

0x1fd6,	// (0x0009b07a) call_video_pane_t1

0x1ff7,	// (0x0009b09b) call_video_pane_t2

0x0001,

0xf26e,	// (0x000a8312) call_video_pane_t

0x2545,	// (0x0009b5e9) aid_cale_month_size_cell_pane_ParamLimits

0x2545,	// (0x0009b5e9) aid_cale_month_size_cell_pane

0xf4c6,	// (0x000a856a) smil_status_volume_pane_g

0x4580,	// (0x0009d624) volume_smil_pane_ParamLimits

0x0e6b,	// (0x00099f0f) aid_popup2_width_pane

0x160a,	// (0x0009a6ae) cell_qdial_pane_g4_ParamLimits

0x160a,	// (0x0009a6ae) cell_qdial_pane_g4

0x358d,	// (0x0009c631) aid_blid_cardinal_pane_ParamLimits

0x359d,	// (0x0009c641) aid_blid_destination_pane_ParamLimits

0x359d,	// (0x0009c641) aid_blid_destination_pane

0xa77b,	// (0x000a381f) bg_popup_call_poc_act_pane_ParamLimits

0xa77b,	// (0x000a381f) bg_popup_call_poc_act_pane

0xa77b,	// (0x000a381f) bg_popup_call_poc_inact_pane_ParamLimits

0xa77b,	// (0x000a381f) bg_popup_call_poc_inact_pane

0xc73e,	// (0x000a57e2) bg_popup_call_poc_act_pane_g1

0xc746,	// (0x000a57ea) bg_popup_call_poc_act_pane_g2

0xc74e,	// (0x000a57f2) bg_popup_call_poc_act_pane_g3

0xc70e,	// (0x000a57b2) bg_popup_call_poc_act_pane_g4

0xc716,	// (0x000a57ba) bg_popup_call_poc_act_pane_g5

0xc756,	// (0x000a57fa) bg_popup_call_poc_act_pane_g6

0xc726,	// (0x000a57ca) bg_popup_call_poc_act_pane_g7

0xc75e,	// (0x000a5802) bg_popup_call_poc_act_pane_g8

0xa520,	// (0x000a35c4) main_usb_pane

0x4370,	// (0x0009d414) popup_cale_lunar_info_window

0x2314,	// (0x0009b3b8) im_reading_pane_t1_ParamLimits

0xab24,	// (0x000a3bc8) list_im_pane_ParamLimits

0xab35,	// (0x000a3bd9) scroll_pane_cp07_ParamLimits

0xa520,	// (0x000a35c4) grid_highlight_pane_cp012

0xa77b,	// (0x000a381f) mup_scale_pane_ParamLimits

0xb4f3,	// (0x000a4597) main_usb_pane_g1_ParamLimits

0xb4f3,	// (0x000a4597) main_usb_pane_g1

0x40d1,	// (0x0009d175) main_usb_pane_g2_ParamLimits

0x40d1,	// (0x0009d175) main_usb_pane_g2

0x0001,

0xf496,	// (0x000a853a) main_usb_pane_g_ParamLimits

0xf496,	// (0x000a853a) main_usb_pane_g

0x40dd,	// (0x0009d181) main_usb_pane_t1_ParamLimits

0x40dd,	// (0x0009d181) main_usb_pane_t1

0x40ef,	// (0x0009d193) main_usb_pane_t2_ParamLimits

0x40ef,	// (0x0009d193) main_usb_pane_t2

0x4101,	// (0x0009d1a5) main_usb_pane_t3_ParamLimits

0x4101,	// (0x0009d1a5) main_usb_pane_t3

0x4113,	// (0x0009d1b7) main_usb_pane_t4_ParamLimits

0x4113,	// (0x0009d1b7) main_usb_pane_t4

0x4125,	// (0x0009d1c9) main_usb_pane_t5_ParamLimits

0x4125,	// (0x0009d1c9) main_usb_pane_t5

0x4137,	// (0x0009d1db) main_usb_pane_t6_ParamLimits

0x4137,	// (0x0009d1db) main_usb_pane_t6

0x0005,

0xf49b,	// (0x000a853f) main_usb_pane_t_ParamLimits

0x3533,	// (0x0009c5d7) aid_text_placing

0x353f,	// (0x0009c5e3) main_location2_pane_t1_ParamLimits

0x3553,	// (0x0009c5f7) main_location2_pane_t2_ParamLimits

0x3567,	// (0x0009c60b) main_location2_pane_t3_ParamLimits

0x357b,	// (0x0009c61f) main_location2_pane_t4_ParamLimits

0x357b,	// (0x0009c61f) main_location2_pane_t4

0xf374,	// (0x000a8418) main_location2_pane_t_ParamLimits

0xa7b7,	// (0x000a385b) find_pinb_pane_g2_ParamLimits

0xa7b7,	// (0x000a385b) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000a81c3) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000a81c3) find_pinb_pane_g

0xa7c3,	// (0x000a3867) find_pinb_pane_t1_ParamLimits

0xa7d5,	// (0x000a3879) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000a81c8) find_pinb_pane_t_ParamLimits

0xa520,	// (0x000a35c4) main_call3_pane

0x2b08,	// (0x0009bbac) cale_month_day_heading_pane_t1_ParamLimits

0x2b8e,	// (0x0009bc32) cale_month_day_heading_pane_t2_ParamLimits

0x2c07,	// (0x0009bcab) cale_month_day_heading_pane_t3_ParamLimits

0x2c80,	// (0x0009bd24) cale_month_day_heading_pane_t4_ParamLimits

0x2cf9,	// (0x0009bd9d) cale_month_day_heading_pane_t5_ParamLimits

0x2d72,	// (0x0009be16) cale_month_day_heading_pane_t6_ParamLimits

0x2deb,	// (0x0009be8f) cale_month_day_heading_pane_t7_ParamLimits

0xf293,	// (0x000a8337) cale_month_day_heading_pane_t_ParamLimits

0xadbd,	// (0x000a3e61) smil_status_volume_pane

0x3c90,	// (0x0009cd34) postcard_address_pane_ParamLimits

0x3c90,	// (0x0009cd34) postcard_address_pane

0x3c9c,	// (0x0009cd40) postcard_message_pane_ParamLimits

0x3c9c,	// (0x0009cd40) postcard_message_pane

0x4096,	// (0x0009d13a) call2_cli_visual_pane_t1_ParamLimits

0x4096,	// (0x0009d13a) call2_cli_visual_pane_t1

0x46d7,	// (0x0009d77b) postcard_message_pane_t1_ParamLimits

0x46d7,	// (0x0009d77b) postcard_message_pane_t1

0x46c0,	// (0x0009d764) postcard_address_pane_t1_ParamLimits

0x46c0,	// (0x0009d764) postcard_address_pane_t1

0x46b1,	// (0x0009d755) popup_call3_audio_in_window_ParamLimits

0x46b1,	// (0x0009d755) popup_call3_audio_in_window

0x4595,	// (0x0009d639) bg_popup_call3_in_pane_ParamLimits

0x4595,	// (0x0009d639) bg_popup_call3_in_pane

0x45f7,	// (0x0009d69b) popup_call3_audio_in_window_g1_ParamLimits

0x45f7,	// (0x0009d69b) popup_call3_audio_in_window_g1

0x460f,	// (0x0009d6b3) popup_call3_audio_in_window_g2_ParamLimits

0x460f,	// (0x0009d6b3) popup_call3_audio_in_window_g2

0x4627,	// (0x0009d6cb) popup_call3_audio_in_window_g3_ParamLimits

0x4627,	// (0x0009d6cb) popup_call3_audio_in_window_g3

0x0003,

0xf4cd,	// (0x000a8571) popup_call3_audio_in_window_g_ParamLimits

0xf4cd,	// (0x000a8571) popup_call3_audio_in_window_g

0x464f,	// (0x0009d6f3) popup_call3_audio_in_window_t1_ParamLimits

0x464f,	// (0x0009d6f3) popup_call3_audio_in_window_t1

0x4677,	// (0x0009d71b) popup_call3_audio_in_window_t2_ParamLimits

0x4677,	// (0x0009d71b) popup_call3_audio_in_window_t2

0x469f,	// (0x0009d743) popup_call3_audio_in_window_t3_ParamLimits

0x469f,	// (0x0009d743) popup_call3_audio_in_window_t3

0x0002,

0xf4d6,	// (0x000a857a) popup_call3_audio_in_window_t_ParamLimits

0xf4d6,	// (0x000a857a) popup_call3_audio_in_window_t

0xaa23,	// (0x000a3ac7) bg_popup_call3_rect_pane

0xc6b6,	// (0x000a575a) bg_popup_call3_rect_pane_g1

0xa93f,	// (0x000a39e3) bg_popup_call3_rect_pane_g2

0xc6be,	// (0x000a5762) bg_popup_call3_rect_pane_g3

0xc6c6,	// (0x000a576a) bg_popup_call3_rect_pane_g4

0xc6ce,	// (0x000a5772) bg_popup_call3_rect_pane_g5

0xc6d6,	// (0x000a577a) bg_popup_call3_rect_pane_g6

0xc6de,	// (0x000a5782) bg_popup_call3_rect_pane_g7

0x38a3,	// (0x0009c947) mup_visualizer_osc_pane

0xb561,	// (0x000a4605) mup_visualizer_spec_pane

0x45b5,	// (0x0009d659) call3_video_qcif_pane_ParamLimits

0x45b5,	// (0x0009d659) call3_video_qcif_pane

0x45c7,	// (0x0009d66b) call3_video_qcif_uncrop_pane_ParamLimits

0x45c7,	// (0x0009d66b) call3_video_qcif_uncrop_pane

0x45d5,	// (0x0009d679) call3_video_subqcif_pane_ParamLimits

0x45d5,	// (0x0009d679) call3_video_subqcif_pane

0x45e7,	// (0x0009d68b) call3_video_subqcif_uncrop_pane_ParamLimits

0x45e7,	// (0x0009d68b) call3_video_subqcif_uncrop_pane

0x463f,	// (0x0009d6e3) popup_call3_audio_in_window_g4_ParamLimits

0x463f,	// (0x0009d6e3) popup_call3_audio_in_window_g4

0x4560,	// (0x0009d604) mup_spec_half_pane

0x4569,	// (0x0009d60d) mup_spec_half_pane_cp

0xc95b,	// (0x000a59ff) mup_osc_middle_pane

0xc964,	// (0x000a5a08) mup_visualizer_osc_pane_g1

0x4541,	// (0x0009d5e5) mup_spec_bar_pane_ParamLimits

0x4541,	// (0x0009d5e5) mup_spec_bar_pane

0xc948,	// (0x000a59ec) mup_spec_bar_pane_g1

0xc952,	// (0x000a59f6) mup_spec_bar_pane_g2

0x0001,

0x047d,	// (0x00099521) mup_spec_bar_pane_g

0x1710,	// (0x0009a7b4) aid_cale_week_size_cell_pane_ParamLimits

0x1725,	// (0x0009a7c9) bg_cale_heading_pane_ParamLimits

0xa97c,	// (0x000a3a20) bg_cale_pane_cp01_ParamLimits

0x1747,	// (0x0009a7eb) cale_week_corner_pane_ParamLimits

0x1761,	// (0x0009a805) cale_week_day_heading_pane_ParamLimits

0x1783,	// (0x0009a827) cale_week_scroll_pane_g1_ParamLimits

0x17a0,	// (0x0009a844) cale_week_scroll_pane_g2_ParamLimits

0x17b3,	// (0x0009a857) cale_week_scroll_pane_g3_ParamLimits

0x17c6,	// (0x0009a86a) cale_week_scroll_pane_g4_ParamLimits

0x17d9,	// (0x0009a87d) cale_week_scroll_pane_g5_ParamLimits

0x17ec,	// (0x0009a890) cale_week_scroll_pane_g6_ParamLimits

0x17ff,	// (0x0009a8a3) cale_week_scroll_pane_g7_ParamLimits

0x1814,	// (0x0009a8b8) cale_week_scroll_pane_g8_ParamLimits

0x1829,	// (0x0009a8cd) cale_week_scroll_pane_g9_ParamLimits

0x183c,	// (0x0009a8e0) cale_week_scroll_pane_g10_ParamLimits

0x184f,	// (0x0009a8f3) cale_week_scroll_pane_g11_ParamLimits

0x1862,	// (0x0009a906) cale_week_scroll_pane_g12_ParamLimits

0x1879,	// (0x0009a91d) cale_week_scroll_pane_g13_ParamLimits

0x1894,	// (0x0009a938) cale_week_scroll_pane_g14_ParamLimits

0x18af,	// (0x0009a953) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000a8254) cale_week_scroll_pane_g_ParamLimits

0x18df,	// (0x0009a983) cale_week_time_pane_ParamLimits

0x18f4,	// (0x0009a998) grid_cale_week_pane_ParamLimits

0xa999,	// (0x000a3a3d) listscroll_cale_week_pane_t1

0xa9ab,	// (0x000a3a4f) scroll_pane_cp08_ParamLimits

0x25b9,	// (0x0009b65d) cale_month_corner_pane_ParamLimits

0xad93,	// (0x000a3e37) cale_month_pane_t1

0x2a87,	// (0x0009bb2b) cale_month_week_pane_ParamLimits

0xb4f3,	// (0x000a4597) popup_call_status_window_g1_ParamLimits

0x333c,	// (0x0009c3e0) popup_call_status_window_g2_ParamLimits

0x3348,	// (0x0009c3ec) popup_call_status_window_g3_ParamLimits

0xf30f,	// (0x000a83b3) popup_call_status_window_g_ParamLimits

0xb143,	// (0x000a41e7) aid_call2_pane

0x3b48,	// (0x0009cbec) msg_header_pane_g1

0x3c90,	// (0x0009cd34) postcard_address2_pane_ParamLimits

0x3c90,	// (0x0009cd34) postcard_address2_pane

0x3c9c,	// (0x0009cd40) postcard_message2_pane_ParamLimits

0x3c9c,	// (0x0009cd40) postcard_message2_pane

0x44d8,	// (0x0009d57c) message2_row_pane_ParamLimits

0x44d8,	// (0x0009d57c) message2_row_pane

0x44f3,	// (0x0009d597) address2_row_pane_ParamLimits

0x44f3,	// (0x0009d597) address2_row_pane

0xc916,	// (0x000a59ba) postcard_message2_row_pane_g1

0xc91e,	// (0x000a59c2) postcard_message2_row_pane_t1

0xc916,	// (0x000a59ba) address2_row_pane_g1

0xc91e,	// (0x000a59c2) address2_row_pane_t1

0x1b79,	// (0x0009ac1d) aid_size_cell_vorec

0xa520,	// (0x000a35c4) main_rss_pane

0x4506,	// (0x0009d5aa) rss_list_single_pane_ParamLimits

0x4506,	// (0x0009d5aa) rss_list_single_pane

0xc92c,	// (0x000a59d0) rss_list_single_pane_t1

0xc93a,	// (0x000a59de) rss_list_single_pane_t2

0x0001,

0x0478,	// (0x0009951c) rss_list_single_pane_t

0xa520,	// (0x000a35c4) main_camera2_pane

0xa520,	// (0x000a35c4) main_video2_pane

0x473b,	// (0x0009d7df) cams_zoom_pane_cp2_ParamLimits

0x473b,	// (0x0009d7df) cams_zoom_pane_cp2

0x4747,	// (0x0009d7eb) image2_vga_pane_ParamLimits

0x4747,	// (0x0009d7eb) image2_vga_pane

0x4756,	// (0x0009d7fa) main_camera2_pane_g1_ParamLimits

0x4756,	// (0x0009d7fa) main_camera2_pane_g1

0x4762,	// (0x0009d806) main_camera2_pane_g2_ParamLimits

0x4762,	// (0x0009d806) main_camera2_pane_g2

0x476e,	// (0x0009d812) main_camera2_pane_g3_ParamLimits

0x476e,	// (0x0009d812) main_camera2_pane_g3

0x477a,	// (0x0009d81e) main_camera2_pane_g4_ParamLimits

0x477a,	// (0x0009d81e) main_camera2_pane_g4

0x4786,	// (0x0009d82a) main_camera2_pane_g5_ParamLimits

0x4786,	// (0x0009d82a) main_camera2_pane_g5

0x4792,	// (0x0009d836) main_camera2_pane_g6_ParamLimits

0x4792,	// (0x0009d836) main_camera2_pane_g6

0x479e,	// (0x0009d842) main_camera2_pane_g7_ParamLimits

0x479e,	// (0x0009d842) main_camera2_pane_g7

0x47aa,	// (0x0009d84e) main_camera2_pane_g8_ParamLimits

0x47aa,	// (0x0009d84e) main_camera2_pane_g8

0x0008,

0xf4dd,	// (0x000a8581) main_camera2_pane_g_ParamLimits

0xf4dd,	// (0x000a8581) main_camera2_pane_g

0x47c2,	// (0x0009d866) main_camera2_pane_t1_ParamLimits

0x47c2,	// (0x0009d866) main_camera2_pane_t1

0x47d4,	// (0x0009d878) main_camera2_pane_t2_ParamLimits

0x47d4,	// (0x0009d878) main_camera2_pane_t2

0x47e6,	// (0x0009d88a) main_camera2_pane_t3_ParamLimits

0x47e6,	// (0x0009d88a) main_camera2_pane_t3

0x47f8,	// (0x0009d89c) main_camera2_pane_t4_ParamLimits

0x47f8,	// (0x0009d89c) main_camera2_pane_t4

0x0006,

0xf4f0,	// (0x000a8594) main_camera2_pane_t_ParamLimits

0xf4f0,	// (0x000a8594) main_camera2_pane_t

0x485a,	// (0x0009d8fe) cams_zoom_pane_cp4_ParamLimits

0x485a,	// (0x0009d8fe) cams_zoom_pane_cp4

0x486a,	// (0x0009d90e) image2_cif_pane_ParamLimits

0x486a,	// (0x0009d90e) image2_cif_pane

0x487f,	// (0x0009d923) image2_subqcif_pane_ParamLimits

0x487f,	// (0x0009d923) image2_subqcif_pane

0x488e,	// (0x0009d932) main_video2_pane_g1_ParamLimits

0x488e,	// (0x0009d932) main_video2_pane_g1

0x48a0,	// (0x0009d944) main_video2_pane_g2_ParamLimits

0x48a0,	// (0x0009d944) main_video2_pane_g2

0x48b0,	// (0x0009d954) main_video2_pane_g3_ParamLimits

0x48b0,	// (0x0009d954) main_video2_pane_g3

0x48c0,	// (0x0009d964) main_video2_pane_g4_ParamLimits

0x48c0,	// (0x0009d964) main_video2_pane_g4

0x48d0,	// (0x0009d974) main_video2_pane_g5_ParamLimits

0x48d0,	// (0x0009d974) main_video2_pane_g5

0x48e0,	// (0x0009d984) main_video2_pane_g6_ParamLimits

0x48e0,	// (0x0009d984) main_video2_pane_g6

0x0005,

0xf4ff,	// (0x000a85a3) main_video2_pane_g_ParamLimits

0xf4ff,	// (0x000a85a3) main_video2_pane_g

0x48f2,	// (0x0009d996) main_video2_pane_t1_ParamLimits

0x48f2,	// (0x0009d996) main_video2_pane_t1

0x490c,	// (0x0009d9b0) main_video2_pane_t2_ParamLimits

0x490c,	// (0x0009d9b0) main_video2_pane_t2

0x4932,	// (0x0009d9d6) main_video2_pane_t3_ParamLimits

0x4932,	// (0x0009d9d6) main_video2_pane_t3

0x0002,

0xf50c,	// (0x000a85b0) main_video2_pane_t_ParamLimits

0xf50c,	// (0x000a85b0) main_video2_pane_t

0x41ee,	// (0x0009d292) call_muted_g2

0x0001,

0xf4c1,	// (0x000a8565) call_muted_g

0xa520,	// (0x000a35c4) main_mup2_pane

0xc99b,	// (0x000a5a3f) main_mup2_pane_g1_ParamLimits

0xc99b,	// (0x000a5a3f) main_mup2_pane_g1

0x4958,	// (0x0009d9fc) main_mup2_pane_g2_ParamLimits

0x4958,	// (0x0009d9fc) main_mup2_pane_g2

0x4bda,	// (0x0009dc7e) main_mup_pane_g13_cp1

0x4be2,	// (0x0009dc86) mup_volume_pane_cp1

0x4978,	// (0x0009da1c) main_mup2_pane_g4_ParamLimits

0x4978,	// (0x0009da1c) main_mup2_pane_g4

0x498d,	// (0x0009da31) main_mup2_pane_g5_ParamLimits

0x498d,	// (0x0009da31) main_mup2_pane_g5

0x49a2,	// (0x0009da46) main_mup2_pane_g6_ParamLimits

0x49a2,	// (0x0009da46) main_mup2_pane_g6

0x49b7,	// (0x0009da5b) main_mup2_pane_g7_ParamLimits

0x49b7,	// (0x0009da5b) main_mup2_pane_g7

0x0006,

0xf513,	// (0x000a85b7) main_mup2_pane_g_ParamLimits

0xf513,	// (0x000a85b7) main_mup2_pane_g

0x49d3,	// (0x0009da77) main_mup2_pane_t1_ParamLimits

0x49d3,	// (0x0009da77) main_mup2_pane_t1

0x49ea,	// (0x0009da8e) main_mup2_pane_t2_ParamLimits

0x49ea,	// (0x0009da8e) main_mup2_pane_t2

0x4a01,	// (0x0009daa5) main_mup2_pane_t3_ParamLimits

0x4a01,	// (0x0009daa5) main_mup2_pane_t3

0x4a18,	// (0x0009dabc) main_mup2_pane_t4_ParamLimits

0x4a18,	// (0x0009dabc) main_mup2_pane_t4

0x4a32,	// (0x0009dad6) main_mup2_pane_t5_ParamLimits

0x4a32,	// (0x0009dad6) main_mup2_pane_t5

0x4a4c,	// (0x0009daf0) main_mup2_pane_t6_ParamLimits

0x4a4c,	// (0x0009daf0) main_mup2_pane_t6

0x0005,

0xf522,	// (0x000a85c6) main_mup2_pane_t_ParamLimits

0xf522,	// (0x000a85c6) main_mup2_pane_t

0x4a84,	// (0x0009db28) mup2_visualizer_pane_ParamLimits

0x4a84,	// (0x0009db28) mup2_visualizer_pane

0x4aba,	// (0x0009db5e) mup_progress_pane_cp_ParamLimits

0x4aba,	// (0x0009db5e) mup_progress_pane_cp

0x4bc5,	// (0x0009dc69) mup_volume_pane_cp_ParamLimits

0x4bc5,	// (0x0009dc69) mup_volume_pane_cp

0x4ad1,	// (0x0009db75) mup2_visualizer_pane_g1_ParamLimits

0x4ad1,	// (0x0009db75) mup2_visualizer_pane_g1

0xc9a7,	// (0x000a5a4b) mup2_visualizer_pane_g2_ParamLimits

0xc9a7,	// (0x000a5a4b) mup2_visualizer_pane_g2

0x4ae6,	// (0x0009db8a) mup2_visualizer_pane_g3_ParamLimits

0x4ae6,	// (0x0009db8a) mup2_visualizer_pane_g3

0x0002,

0xf52f,	// (0x000a85d3) mup2_visualizer_pane_g_ParamLimits

0xf52f,	// (0x000a85d3) mup2_visualizer_pane_g

0xb788,	// (0x000a482c) aid_size_cell_fmradio

0x4304,	// (0x0009d3a8) aid_height_parent_landcape

0xabf1,	// (0x000a3c95) wml_content_pane_cp

0xabf9,	// (0x000a3c9d) wml_tabs_pane

0xac02,	// (0x000a3ca6) popup_wml_miniature_window

0xac0a,	// (0x000a3cae) scroll_pane_cp021

0xac1e,	// (0x000a3cc2) wml_content_pane_comp8

0xa520,	// (0x000a35c4) bg_popup_sub_pane_cp05

0xc9c5,	// (0x000a5a69) popup_wml_miniature_window_g1

0xc9cd,	// (0x000a5a71) wml_miniature_view_pane

0x4af4,	// (0x0009db98) aid_size_wml_view

0x4afc,	// (0x0009dba0) wml_miniature_view_pane_g1

0x4b05,	// (0x0009dba9) wml_miniature_view_pane_g2

0x4b0e,	// (0x0009dbb2) wml_miniature_view_pane_g3

0x4b16,	// (0x0009dbba) wml_miniature_view_pane_g4

0x4b1e,	// (0x0009dbc2) wml_miniature_view_pane_g5

0x4b26,	// (0x0009dbca) wml_miniature_view_pane_g6

0x4b2e,	// (0x0009dbd2) wml_miniature_view_pane_g7

0x4b36,	// (0x0009dbda) wml_miniature_view_pane_g8

0x0007,

0xf536,	// (0x000a85da) wml_miniature_view_pane_g

0xc99b,	// (0x000a5a3f) background_graphic_ParamLimits

0xc99b,	// (0x000a5a3f) background_graphic

0xc9d5,	// (0x000a5a79) wml_tabs_2_pane

0xc9de,	// (0x000a5a82) wml_tabs_3_pane_ParamLimits

0xc9de,	// (0x000a5a82) wml_tabs_3_pane

0xc9f0,	// (0x000a5a94) wml_tabs_4_pane_ParamLimits

0xc9f0,	// (0x000a5a94) wml_tabs_4_pane

0xca06,	// (0x000a5aaa) wml_tabs_5_pane_ParamLimits

0xca06,	// (0x000a5aaa) wml_tabs_5_pane

0xca20,	// (0x000a5ac4) wml_tabs_pane_g2_ParamLimits

0xca20,	// (0x000a5ac4) wml_tabs_pane_g2

0xca34,	// (0x000a5ad8) wml_tabs_pane_g3_ParamLimits

0xca34,	// (0x000a5ad8) wml_tabs_pane_g3

0x4b3e,	// (0x0009dbe2) wml_tabs_2_active_pane_ParamLimits

0x4b3e,	// (0x0009dbe2) wml_tabs_2_active_pane

0x4b4e,	// (0x0009dbf2) wml_tabs_2_passive_pane_ParamLimits

0x4b4e,	// (0x0009dbf2) wml_tabs_2_passive_pane

0x4b5e,	// (0x0009dc02) wml_tabs_3_active_pane_cp_ParamLimits

0x4b5e,	// (0x0009dc02) wml_tabs_3_active_pane_cp

0x4b6f,	// (0x0009dc13) wml_tabs_3_passive_pane_ParamLimits

0x4b6f,	// (0x0009dc13) wml_tabs_3_passive_pane

0x4b80,	// (0x0009dc24) wml_tabs_3_passive_pane_cp_ParamLimits

0x4b80,	// (0x0009dc24) wml_tabs_3_passive_pane_cp

0x4b91,	// (0x0009dc35) tabs_4_active_pane

0x4b99,	// (0x0009dc3d) tabs_4_passive_pane

0x4ba1,	// (0x0009dc45) tabs_4_passive_pane_cp

0x4ba9,	// (0x0009dc4d) tabs_4_passive_pane_cp2

0x40c9,	// (0x0009d16d) aid_height_text

0x386c,	// (0x0009c910) mup_volume_cont_pane_ParamLimits

0x386c,	// (0x0009c910) mup_volume_cont_pane

0x1255,	// (0x0009a2f9) aid_size_cell_pinb

0x125f,	// (0x0009a303) aid_size_list_pinb

0x4aa3,	// (0x0009db47) mup2_volume_cont_pane_ParamLimits

0x4aa3,	// (0x0009db47) mup2_volume_cont_pane

0x4bb1,	// (0x0009dc55) mup2_volume_cont_pane_g1_ParamLimits

0x4bb1,	// (0x0009dc55) mup2_volume_cont_pane_g1

0x0e77,	// (0x00099f1b) aid_size_cell_touch_ParamLimits

0x0e77,	// (0x00099f1b) aid_size_cell_touch

0x1138,	// (0x0009a1dc) touch_pane_ParamLimits

0x1138,	// (0x0009a1dc) touch_pane

0x112e,	// (0x0009a1d2) main_rss2_pane

0xca51,	// (0x000a5af5) listscroll_rss2_pane

0xca5a,	// (0x000a5afe) rss2_navigation_pane

0xca62,	// (0x000a5b06) list_rss2_pane

0xb268,	// (0x000a430c) scroll_pane_cp22

0xca6a,	// (0x000a5b0e) rss2_navigation_pane_g1

0xca73,	// (0x000a5b17) rss2_navigation_pane_g2

0xca7b,	// (0x000a5b1f) rss2_navigation_pane_g3

0x0002,

0xf547,	// (0x000a85eb) rss2_navigation_pane_g

0xca83,	// (0x000a5b27) rss2_navigation_pane_t1

0x4bea,	// (0x0009dc8e) rss2_list_single_pane_ParamLimits

0x4bea,	// (0x0009dc8e) rss2_list_single_pane

0xca91,	// (0x000a5b35) rss2_list_single_pane_t2

0xca9f,	// (0x000a5b43) rss2_list_single_pane_t3_ParamLimits

0xca9f,	// (0x000a5b43) rss2_list_single_pane_t3

0xcabc,	// (0x000a5b60) rss2_list_single_pane_t4

0x30b7,	// (0x0009c15b) smil_status_pane_g1

0x431b,	// (0x0009d3bf) main_image2_pane_ParamLimits

0x431b,	// (0x0009d3bf) main_image2_pane

0x47b6,	// (0x0009d85a) main_camera2_pane_g9_ParamLimits

0x47b6,	// (0x0009d85a) main_camera2_pane_g9

0x480a,	// (0x0009d8ae) main_camera2_pane_t5_ParamLimits

0x480a,	// (0x0009d8ae) main_camera2_pane_t5

0x481c,	// (0x0009d8c0) main_camera2_pane_t6_ParamLimits

0x481c,	// (0x0009d8c0) main_camera2_pane_t6

0x4c1e,	// (0x0009dcc2) main_image2_pane_g1_ParamLimits

0x4c1e,	// (0x0009dcc2) main_image2_pane_g1

0x3e63,	// (0x0009cf07) smil2_video_pane_ParamLimits

0x3e63,	// (0x0009cf07) smil2_video_pane

0x0eab,	// (0x00099f4f) aid_zoom_text_primary_cp

0x10c9,	// (0x0009a16d) popup_preview_fixed_window

0xab1c,	// (0x000a3bc0) im_reading_pane_g1

0x4700,	// (0x0009d7a4) cams2_bc_adjust_pane_cp_ParamLimits

0x4700,	// (0x0009d7a4) cams2_bc_adjust_pane_cp

0x484c,	// (0x0009d8f0) cams2_bc_adjust_pane_ParamLimits

0x484c,	// (0x0009d8f0) cams2_bc_adjust_pane

0xdc26,	// (0x000a6cca) cams2_bc_adjust_pane_g1

0x4c2a,	// (0x0009dcce) cams2_slider_pane

0x4c33,	// (0x0009dcd7) cams2_slider_pane_g1

0x4c3c,	// (0x0009dce0) cams2_slider_pane_g2

0x0006,

0xf54e,	// (0x000a85f2) cams2_slider_pane_g

0x135f,	// (0x0009a403) calc_display_pane_ParamLimits

0x137d,	// (0x0009a421) calc_paper_pane_ParamLimits

0x1399,	// (0x0009a43d) grid_calc_pane_ParamLimits

0x33a6,	// (0x0009c44a) popup_clock_digital_window_t1_ParamLimits

0xb725,	// (0x000a47c9) main_image_pane_t1

0x1345,	// (0x0009a3e9) aid_size_cell_calc_ParamLimits

0x1345,	// (0x0009a3e9) aid_size_cell_calc

0x434c,	// (0x0009d3f0) popup_blid_sat_info2_window_ParamLimits

0x434c,	// (0x0009d3f0) popup_blid_sat_info2_window

0xcad2,	// (0x000a5b76) aid_size_cell_blid

0xcada,	// (0x000a5b7e) bg_popup_window_pane_cp07

0xcb09,	// (0x000a5bad) grid_popup_blid_pane

0xcb13,	// (0x000a5bb7) heading_pane_cp05_ParamLimits

0xcb13,	// (0x000a5bb7) heading_pane_cp05

0xcbdd,	// (0x000a5c81) cell_popup_blid_pane_ParamLimits

0xcbdd,	// (0x000a5c81) cell_popup_blid_pane

0xcc01,	// (0x000a5ca5) cell_popup_blid_pane_g1

0xcc09,	// (0x000a5cad) cell_popup_blid_pane_t1

0x4a69,	// (0x0009db0d) mup2_indicator_pane_ParamLimits

0x4a69,	// (0x0009db0d) mup2_indicator_pane

0xaa23,	// (0x000a3ac7) mup2_visualizer_osc_pane

0xc9b3,	// (0x000a5a57) mup2_visualizer_spec_pane_ParamLimits

0xc9b3,	// (0x000a5a57) mup2_visualizer_spec_pane

0x4c56,	// (0x0009dcfa) mup2_spec_half_pane

0x4c5f,	// (0x0009dd03) mup2_spec_half_pane_cp

0x4c69,	// (0x0009dd0d) mup2_spec_bar_pane_ParamLimits

0x4c69,	// (0x0009dd0d) mup2_spec_bar_pane

0xc948,	// (0x000a59ec) mup2_spec_bar_pane_g1

0xc952,	// (0x000a59f6) mup2_spec_bar_pane_g2

0x0001,

0x047d,	// (0x00099521) mup2_spec_bar_pane_g

0x4c88,	// (0x0009dd2c) mup2_osc_middle_pane

0xc964,	// (0x000a5a08) mup2_visualizer_osc_pane_g1

0xa09f,	// (0x000a3143) popup_number_entry_window_t1_ParamLimits

0xa0b2,	// (0x000a3156) popup_number_entry_window_t2_ParamLimits

0xa0c4,	// (0x000a3168) popup_number_entry_window_t3_ParamLimits

0x118f,	// (0x0009a233) popup_number_entry_window_t5_ParamLimits

0x118f,	// (0x0009a233) popup_number_entry_window_t5

0xf0ca,	// (0x000a816e) popup_number_entry_window_t_ParamLimits

0xa164,	// (0x000a3208) text_title_cp2_ParamLimits

0x3b64,	// (0x0009cc08) aid_hotspot_pointer_text2_pane

0x3bf2,	// (0x0009cc96) main_viewer_pane_g9_ParamLimits

0x3bf2,	// (0x0009cc96) main_viewer_pane_g9

0xad93,	// (0x000a3e37) cale_month_pane_t1_ParamLimits

0xadd0,	// (0x000a3e74) bg_cale_pane_ParamLimits

0xade8,	// (0x000a3e8c) list_cale_pane_ParamLimits

0xadf9,	// (0x000a3e9d) listscroll_cale_day_pane_t1

0xae0b,	// (0x000a3eaf) scroll_pane_cp09_ParamLimits

0x38ab,	// (0x0009c94f) main_mup_eq_pane_t1_ParamLimits

0x38ab,	// (0x0009c94f) main_mup_eq_pane_t1

0x38c5,	// (0x0009c969) main_mup_eq_pane_t2_ParamLimits

0x38c5,	// (0x0009c969) main_mup_eq_pane_t2

0x38dd,	// (0x0009c981) main_mup_eq_pane_t3_ParamLimits

0x38dd,	// (0x0009c981) main_mup_eq_pane_t3

0x38f5,	// (0x0009c999) main_mup_eq_pane_t4_ParamLimits

0x38f5,	// (0x0009c999) main_mup_eq_pane_t4

0x390d,	// (0x0009c9b1) main_mup_eq_pane_t5_ParamLimits

0x390d,	// (0x0009c9b1) main_mup_eq_pane_t5

0x3925,	// (0x0009c9c9) main_mup_eq_pane_t6_ParamLimits

0x3925,	// (0x0009c9c9) main_mup_eq_pane_t6

0x3939,	// (0x0009c9dd) main_mup_eq_pane_t7_ParamLimits

0x3939,	// (0x0009c9dd) main_mup_eq_pane_t7

0x394d,	// (0x0009c9f1) main_mup_eq_pane_t8_ParamLimits

0x394d,	// (0x0009c9f1) main_mup_eq_pane_t8

0x3963,	// (0x0009ca07) main_mup_eq_pane_t9_ParamLimits

0x3963,	// (0x0009ca07) main_mup_eq_pane_t9

0x397b,	// (0x0009ca1f) main_mup_eq_pane_t10_ParamLimits

0x397b,	// (0x0009ca1f) main_mup_eq_pane_t10

0x0009,

0xf3d9,	// (0x000a847d) main_mup_eq_pane_t_ParamLimits

0xf3d9,	// (0x000a847d) main_mup_eq_pane_t

0x3a38,	// (0x0009cadc) mup_equalizer_pane_cp5_ParamLimits

0x3a4e,	// (0x0009caf2) mup_equalizer_pane_cp6_ParamLimits

0x3a66,	// (0x0009cb0a) mup_equalizer_pane_cp7_ParamLimits

0x112e,	// (0x0009a1d2) main_gallery_pane

0xc96d,	// (0x000a5a11) smil2_volume_pane

0xc975,	// (0x000a5a19) smil_status_volume_pane_g1_ParamLimits

0xc988,	// (0x000a5a2c) smil_status_volume_pane_g2_ParamLimits

0x4573,	// (0x0009d617) smil_status_volume_pane_g3_ParamLimits

0xf4c6,	// (0x000a856a) smil_status_volume_pane_g_ParamLimits

0xcada,	// (0x000a5b7e) bg_popup_window_pane_cp07_ParamLimits

0xcaf4,	// (0x000a5b98) blid_firmament_pane

0x4c91,	// (0x0009dd35) aid_size_cell_gallery_ParamLimits

0x4c91,	// (0x0009dd35) aid_size_cell_gallery

0x4c9f,	// (0x0009dd43) grid_gallery_pane_ParamLimits

0x4c9f,	// (0x0009dd43) grid_gallery_pane

0x4caf,	// (0x0009dd53) cell_gallery_pane_ParamLimits

0x4caf,	// (0x0009dd53) cell_gallery_pane

0xcc17,	// (0x000a5cbb) bg_cell_gallery_focus_pane_ParamLimits

0xcc17,	// (0x000a5cbb) bg_cell_gallery_focus_pane

0xcc29,	// (0x000a5ccd) cell_gallery_pane_g1_ParamLimits

0xcc29,	// (0x000a5ccd) cell_gallery_pane_g1

0x4cfd,	// (0x0009dda1) cell_gallery_pane_g2_ParamLimits

0x4cfd,	// (0x0009dda1) cell_gallery_pane_g2

0x4d0a,	// (0x0009ddae) cell_gallery_pane_g3_ParamLimits

0x4d0a,	// (0x0009ddae) cell_gallery_pane_g3

0xcc35,	// (0x000a5cd9) cell_gallery_pane_g4_ParamLimits

0xcc35,	// (0x000a5cd9) cell_gallery_pane_g4

0x0003,

0xf55d,	// (0x000a8601) cell_gallery_pane_g_ParamLimits

0xf55d,	// (0x000a8601) cell_gallery_pane_g

0xcc41,	// (0x000a5ce5) bg_cell_gallery_focus_pane_g1

0xcc49,	// (0x000a5ced) bg_cell_gallery_focus_pane_g2

0xcc51,	// (0x000a5cf5) bg_cell_gallery_focus_pane_g3

0xcc59,	// (0x000a5cfd) bg_cell_gallery_focus_pane_g4

0xcc61,	// (0x000a5d05) bg_cell_gallery_focus_pane_g5

0xcc69,	// (0x000a5d0d) bg_cell_gallery_focus_pane_g6

0xcc71,	// (0x000a5d15) bg_cell_gallery_focus_pane_g7

0xcc79,	// (0x000a5d1d) bg_cell_gallery_focus_pane_g8

0x0007,

0x0539,	// (0x000995dd) bg_cell_gallery_focus_pane_g

0xcc81,	// (0x000a5d25) aid_firma_cardinal

0xcc95,	// (0x000a5d39) blid_firmament_pane_t1

0xccac,	// (0x000a5d50) blid_firmament_pane_t2

0xccc3,	// (0x000a5d67) blid_firmament_pane_t3

0xccda,	// (0x000a5d7e) blid_firmament_pane_t4

0x0003,

0x054a,	// (0x000995ee) blid_firmament_pane_t

0xccf1,	// (0x000a5d95) blid_sat_info_pane

0xcd01,	// (0x000a5da5) blid_sat_info_pane_g1

0xcd01,	// (0x000a5da5) blid_sat_info_pane_g2

0x0001,

0x0553,	// (0x000995f7) blid_sat_info_pane_g

0xcd0b,	// (0x000a5daf) blid_sat_info_pane_t1

0xcd19,	// (0x000a5dbd) smil2_volume_content_pane

0xcd22,	// (0x000a5dc6) smil2_volume_pane_g1

0xcd2a,	// (0x000a5dce) smil2_volume_content_pane_g1

0xcd33,	// (0x000a5dd7) smil2_volume_content_pane_g2

0xcd3c,	// (0x000a5de0) smil2_volume_content_pane_g3

0xcd45,	// (0x000a5de9) smil2_volume_content_pane_g4

0xcd4e,	// (0x000a5df2) smil2_volume_content_pane_g5

0xcd57,	// (0x000a5dfb) smil2_volume_content_pane_g6

0xcd60,	// (0x000a5e04) smil2_volume_content_pane_g7

0xcd69,	// (0x000a5e0d) smil2_volume_content_pane_g8

0xcd72,	// (0x000a5e16) smil2_volume_content_pane_g9

0xcd7b,	// (0x000a5e1f) smil2_volume_content_pane_g10

0x0009,

0x0558,	// (0x000995fc) smil2_volume_content_pane_g

0x1975,	// (0x0009aa19) cale_week_day_heading_pane_t1_ParamLimits

0x1990,	// (0x0009aa34) cale_week_day_heading_pane_t2_ParamLimits

0x19ab,	// (0x0009aa4f) cale_week_day_heading_pane_t3_ParamLimits

0x19c6,	// (0x0009aa6a) cale_week_day_heading_pane_t4_ParamLimits

0x19e1,	// (0x0009aa85) cale_week_day_heading_pane_t5_ParamLimits

0x19fc,	// (0x0009aaa0) cale_week_day_heading_pane_t6_ParamLimits

0x1a17,	// (0x0009aabb) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000a8275) cale_week_day_heading_pane_t_ParamLimits

0xa9c8,	// (0x000a3a6c) bg_cale_side_pane_ParamLimits

0x1a32,	// (0x0009aad6) cale_week_time_pane_t1_ParamLimits

0x1a4c,	// (0x0009aaf0) cale_week_time_pane_t2_ParamLimits

0x1a66,	// (0x0009ab0a) cale_week_time_pane_t3_ParamLimits

0x1a80,	// (0x0009ab24) cale_week_time_pane_t4_ParamLimits

0x1a9a,	// (0x0009ab3e) cale_week_time_pane_t5_ParamLimits

0x1ab4,	// (0x0009ab58) cale_week_time_pane_t6_ParamLimits

0x1ad4,	// (0x0009ab78) cale_week_time_pane_t7_ParamLimits

0x1af6,	// (0x0009ab9a) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000a8284) cale_week_time_pane_t_ParamLimits

0x1b1a,	// (0x0009abbe) cell_cale_week_pane_g2_ParamLimits

0xa9c8,	// (0x000a3a6c) bg_cale_side_pane_cp01_ParamLimits

0x2e7c,	// (0x0009bf20) cale_month_week_pane_t1_ParamLimits

0x2e95,	// (0x0009bf39) cale_month_week_pane_t2_ParamLimits

0x2eae,	// (0x0009bf52) cale_month_week_pane_t3_ParamLimits

0x2ec7,	// (0x0009bf6b) cale_month_week_pane_t4_ParamLimits

0x2ee2,	// (0x0009bf86) cale_month_week_pane_t5_ParamLimits

0x2f03,	// (0x0009bfa7) cale_month_week_pane_t6_ParamLimits

0xf2a2,	// (0x000a8346) cale_month_week_pane_t_ParamLimits

0x3074,	// (0x0009c118) cell_cale_month_pane_g1_ParamLimits

0x112e,	// (0x0009a1d2) main_cale_event_viewer_pane

0xa075,	// (0x000a3119) listscroll_cale_event_viewer_pane

0xcd84,	// (0x000a5e28) list_cale_ev_pane

0xcd8c,	// (0x000a5e30) scroll_pane_cp023

0xcd98,	// (0x000a5e3c) field_cale_ev_pane_ParamLimits

0xcd98,	// (0x000a5e3c) field_cale_ev_pane

0xcdb6,	// (0x000a5e5a) field_cale_ev_content_pane_ParamLimits

0xcdb6,	// (0x000a5e5a) field_cale_ev_content_pane

0xcdc2,	// (0x000a5e66) field_cale_ev_pane_g1_ParamLimits

0xcdc2,	// (0x000a5e66) field_cale_ev_pane_g1

0xcdce,	// (0x000a5e72) field_cale_ev_pane_g2_ParamLimits

0xcdce,	// (0x000a5e72) field_cale_ev_pane_g2

0xcde6,	// (0x000a5e8a) field_cale_ev_pane_g3_ParamLimits

0xcde6,	// (0x000a5e8a) field_cale_ev_pane_g3

0x0002,

0x056d,	// (0x00099611) field_cale_ev_pane_g_ParamLimits

0x056d,	// (0x00099611) field_cale_ev_pane_g

0xcdfe,	// (0x000a5ea2) field_cale_ev_pane_t1_ParamLimits

0xcdfe,	// (0x000a5ea2) field_cale_ev_pane_t1

0xab79,	// (0x000a3c1d) field_cale_ev_content_pane_t1_ParamLimits

0xab79,	// (0x000a3c1d) field_cale_ev_content_pane_t1

0xb60b,	// (0x000a46af) bg_button_pane_cp01

0x1700,	// (0x0009a7a4) listscroll_cale_week_pane_ParamLimits

0xa973,	// (0x000a3a17) popup_toolbar_window_cp01

0xa999,	// (0x000a3a3d) listscroll_cale_week_pane_t1_ParamLimits

0x1700,	// (0x0009a7a4) listscroll_cale_day_pane_ParamLimits

0xa973,	// (0x000a3a17) popup_toolbar_window_cp02

0xadf9,	// (0x000a3e9d) listscroll_cale_day_pane_t1_ParamLimits

0x1700,	// (0x0009a7a4) main_cale_month_pane_ParamLimits

0x444f,	// (0x0009d4f3) popup_toolbar_window_cp03_ParamLimits

0x444f,	// (0x0009d4f3) popup_toolbar_window_cp03

0x3d79,	// (0x0009ce1d) main_image_pane_g2_ParamLimits

0x3d79,	// (0x0009ce1d) main_image_pane_g2

0x3d85,	// (0x0009ce29) main_image_pane_g3_ParamLimits

0x3d85,	// (0x0009ce29) main_image_pane_g3

0x0002,

0xf461,	// (0x000a8505) main_image_pane_g_ParamLimits

0xf461,	// (0x000a8505) main_image_pane_g

0xb725,	// (0x000a47c9) main_image_pane_t1_ParamLimits

0x3d91,	// (0x0009ce35) main_image_pane_t2_ParamLimits

0x3d91,	// (0x0009ce35) main_image_pane_t2

0x3da3,	// (0x0009ce47) main_image_pane_t3_ParamLimits

0x3da3,	// (0x0009ce47) main_image_pane_t3

0x3db5,	// (0x0009ce59) main_image_pane_t4_ParamLimits

0x3db5,	// (0x0009ce59) main_image_pane_t4

0x0003,

0xf468,	// (0x000a850c) main_image_pane_t_ParamLimits

0xf468,	// (0x000a850c) main_image_pane_t

0x3dc7,	// (0x0009ce6b) popup_image_details_window_cp01

0x3dd1,	// (0x0009ce75) popup_toobar_trans_pane_cp01_ParamLimits

0x3dd1,	// (0x0009ce75) popup_toobar_trans_pane_cp01

0x439f,	// (0x0009d443) popup_image_details_window_ParamLimits

0x439f,	// (0x0009d443) popup_image_details_window

0x43ad,	// (0x0009d451) popup_image_focus_window

0x46f2,	// (0x0009d796) camera2_autofocus_pane_ParamLimits

0x46f2,	// (0x0009d796) camera2_autofocus_pane

0xa075,	// (0x000a3119) bg_popup_sub_pane_cp06

0xce15,	// (0x000a5eb9) popup_image_focus_window_g1

0xce1d,	// (0x000a5ec1) popup_image_focus_window_g2

0xce25,	// (0x000a5ec9) popup_image_focus_window_g3

0xce2d,	// (0x000a5ed1) popup_image_focus_window_g4

0x0003,

0x0574,	// (0x00099618) popup_image_focus_window_g

0xce35,	// (0x000a5ed9) popup_image_focus_window_t1

0xce43,	// (0x000a5ee7) popup_image_focus_window_t2

0xce53,	// (0x000a5ef7) popup_image_focus_window_t3

0x0002,

0x057d,	// (0x00099621) popup_image_focus_window_t

0xce61,	// (0x000a5f05) camera2_autofocus_pane_g1

0xab6b,	// (0x000a3c0f) bg_tb_trans_pane_cp01

0xce6f,	// (0x000a5f13) popup_image_details_window_g1

0xce82,	// (0x000a5f26) popup_image_details_window_g2

0x0002,

0x058f,	// (0x00099633) popup_image_details_window_g

0xceab,	// (0x000a5f4f) popup_image_details_window_t1

0xcebd,	// (0x000a5f61) popup_image_details_window_t2

0xced6,	// (0x000a5f7a) popup_image_details_window_t3

0xceea,	// (0x000a5f8e) popup_image_details_window_t4

0xcf05,	// (0x000a5fa9) popup_image_details_window_t5

0x0004,

0x0596,	// (0x0009963a) popup_image_details_window_t

0xa838,	// (0x000a38dc) bg_calc_paper_pane_ParamLimits

0x112e,	// (0x0009a1d2) grid_highlight_pane_cp013

0x1496,	// (0x0009a53a) list_calc_pane_ParamLimits

0x14a8,	// (0x0009a54c) scroll_pane_cp024

0xa84c,	// (0x000a38f0) bg_calc_display_pane_ParamLimits

0x14b0,	// (0x0009a554) calc_display_pane_t1_ParamLimits

0x14c5,	// (0x0009a569) calc_display_pane_t2_ParamLimits

0x14da,	// (0x0009a57e) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000a81f5) calc_display_pane_t_ParamLimits

0x15b7,	// (0x0009a65b) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000a8212) cell_calc_pane_g

0x15c0,	// (0x0009a664) cell_calc_pane_t1

0xa8ab,	// (0x000a394f) grid_highlight_pane_cp02_ParamLimits

0xa8c1,	// (0x000a3965) toolbar_button_pane_cp01_ParamLimits

0xa8c1,	// (0x000a3965) toolbar_button_pane_cp01

0xb76a,	// (0x000a480e) temp_image_control_pane_ParamLimits

0xb76a,	// (0x000a480e) temp_image_control_pane

0x431b,	// (0x0009d3bf) main_mp3_pane

0xcf1f,	// (0x000a5fc3) temp_image_control_pane_g1_ParamLimits

0xcf1f,	// (0x000a5fc3) temp_image_control_pane_g1

0xcf2d,	// (0x000a5fd1) temp_image_control_pane_g2_ParamLimits

0xcf2d,	// (0x000a5fd1) temp_image_control_pane_g2

0xcf3f,	// (0x000a5fe3) temp_image_control_pane_g3_ParamLimits

0xcf3f,	// (0x000a5fe3) temp_image_control_pane_g3

0x4d47,	// (0x0009ddeb) temp_image_control_pane_g4_ParamLimits

0x4d47,	// (0x0009ddeb) temp_image_control_pane_g4

0x0003,

0xf571,	// (0x000a8615) temp_image_control_pane_g_ParamLimits

0xf571,	// (0x000a8615) temp_image_control_pane_g

0xcf1f,	// (0x000a5fc3) main_mp3_pane_g1

0x4d58,	// (0x0009ddfc) main_mp3_pane_g2

0x0007,

0xf57a,	// (0x000a861e) main_mp3_pane_g

0xcf82,	// (0x000a6026) main_mp3_pane_t1

0xaa2b,	// (0x000a3acf) main_camera_pane_g8_ParamLimits

0xaa2b,	// (0x000a3acf) main_camera_pane_g8

0x1da4,	// (0x0009ae48) main_video_pane_g7_ParamLimits

0x1da4,	// (0x0009ae48) main_video_pane_g7

0x483a,	// (0x0009d8de) main_camera2_pane_t7_ParamLimits

0x483a,	// (0x0009d8de) main_camera2_pane_t7

0xabb1,	// (0x000a3c55) scroll_pane_cp025_ParamLimits

0xabb1,	// (0x000a3c55) scroll_pane_cp025

0xabc5,	// (0x000a3c69) scroll_pane_cp026_ParamLimits

0xabc5,	// (0x000a3c69) scroll_pane_cp026

0xabd4,	// (0x000a3c78) wml_content_pane_ParamLimits

0x112e,	// (0x0009a1d2) main_touch_calib_pane

0x4dfc,	// (0x0009dea0) main_touch_calib_pane_g1

0x4e08,	// (0x0009deac) main_touch_calib_pane_g2

0x4e14,	// (0x0009deb8) main_touch_calib_pane_g3

0x4e20,	// (0x0009dec4) main_touch_calib_pane_g4

0x0003,

0xf598,	// (0x000a863c) main_touch_calib_pane_g

0x4e2c,	// (0x0009ded0) main_touch_calib_pane_t1

0x4e45,	// (0x0009dee9) main_touch_calib_pane_t2

0x0004,

0xf5a1,	// (0x000a8645) main_touch_calib_pane_t

0xb337,	// (0x000a43db) mup_progress_pane_cp02

0xb36c,	// (0x000a4410) navi_pane_g1

0xb427,	// (0x000a44cb) navi_pane_mp_t3

0x431b,	// (0x0009d3bf) main_mp3_pane_ParamLimits

0x448c,	// (0x0009d530) navi_pane_ParamLimits

0xcf1f,	// (0x000a5fc3) main_mp3_pane_g1_ParamLimits

0x4d58,	// (0x0009ddfc) main_mp3_pane_g2_ParamLimits

0x4d64,	// (0x0009de08) main_mp3_pane_g3_ParamLimits

0x4d64,	// (0x0009de08) main_mp3_pane_g3

0x4d70,	// (0x0009de14) main_mp3_pane_g4_ParamLimits

0x4d70,	// (0x0009de14) main_mp3_pane_g4

0xcf4f,	// (0x000a5ff3) main_mp3_pane_g5_ParamLimits

0xcf4f,	// (0x000a5ff3) main_mp3_pane_g5

0xcf5d,	// (0x000a6001) main_mp3_pane_g6_ParamLimits

0xcf5d,	// (0x000a6001) main_mp3_pane_g6

0xcf6a,	// (0x000a600e) main_mp3_pane_g7_ParamLimits

0xcf6a,	// (0x000a600e) main_mp3_pane_g7

0xcf76,	// (0x000a601a) main_mp3_pane_g8_ParamLimits

0xcf76,	// (0x000a601a) main_mp3_pane_g8

0xf57a,	// (0x000a861e) main_mp3_pane_g_ParamLimits

0x4d7c,	// (0x0009de20) main_mp3_pane_t2

0x4d8c,	// (0x0009de30) main_mp3_pane_t3

0xcf90,	// (0x000a6034) main_mp3_pane_t4

0xcf9e,	// (0x000a6042) main_mp3_pane_t5

0x0005,

0xf58b,	// (0x000a862f) main_mp3_pane_t

0xcfac,	// (0x000a6050) mup_progress_pane_cp01

0x0eab,	// (0x00099f4f) aid_zoom_text_secondary2

0xcd84,	// (0x000a5e28) list_cale_ev2_pane

0xcd8c,	// (0x000a5e30) scroll_pane_cp023_ParamLimits

0x4ea0,	// (0x0009df44) field_cale_ev2_pane_ParamLimits

0x4ea0,	// (0x0009df44) field_cale_ev2_pane

0x9c3f,	// (0x000a2ce3) field_cale_ev2_pane_g1_ParamLimits

0x9c3f,	// (0x000a2ce3) field_cale_ev2_pane_g1

0x9c4b,	// (0x000a2cef) field_cale_ev2_pane_g2_ParamLimits

0x9c4b,	// (0x000a2cef) field_cale_ev2_pane_g2

0x9c63,	// (0x000a2d07) field_cale_ev2_pane_g3_ParamLimits

0x9c63,	// (0x000a2d07) field_cale_ev2_pane_g3

0x0003,

0xf5ac,	// (0x000a8650) field_cale_ev2_pane_g_ParamLimits

0xf5ac,	// (0x000a8650) field_cale_ev2_pane_g

0x9c87,	// (0x000a2d2b) field_cale_ev2_pane_t1_ParamLimits

0x9c87,	// (0x000a2d2b) field_cale_ev2_pane_t1

0x9c9e,	// (0x000a2d42) field_cale_ev2_pane_t2_ParamLimits

0x9c9e,	// (0x000a2d42) field_cale_ev2_pane_t2

0x0001,

0xf5b5,	// (0x000a8659) field_cale_ev2_pane_t_ParamLimits

0xf5b5,	// (0x000a8659) field_cale_ev2_pane_t

0x3c5a,	// (0x0009ccfe) main_postcard_pane_g5_ParamLimits

0x3c5a,	// (0x0009ccfe) main_postcard_pane_g5

0x3c68,	// (0x0009cd0c) main_postcard_pane_g6_ParamLimits

0x3c68,	// (0x0009cd0c) main_postcard_pane_g6

0x1bee,	// (0x0009ac92) camera2_autofocus_pane_cp_ParamLimits

0x1bee,	// (0x0009ac92) camera2_autofocus_pane_cp

0x431b,	// (0x0009d3bf) main_mup3_pane

0x4f09,	// (0x0009dfad) main_mup3_pane_g1_ParamLimits

0x4f09,	// (0x0009dfad) main_mup3_pane_g1

0x4f2a,	// (0x0009dfce) main_mup3_pane_g2_ParamLimits

0x4f2a,	// (0x0009dfce) main_mup3_pane_g2

0x4fa4,	// (0x0009e048) main_mup3_pane_g3_ParamLimits

0x4fa4,	// (0x0009e048) main_mup3_pane_g3

0x4fe7,	// (0x0009e08b) main_mup3_pane_g4_ParamLimits

0x4fe7,	// (0x0009e08b) main_mup3_pane_g4

0x502a,	// (0x0009e0ce) main_mup3_pane_g5_ParamLimits

0x502a,	// (0x0009e0ce) main_mup3_pane_g5

0x506d,	// (0x0009e111) main_mup3_pane_g6_ParamLimits

0x506d,	// (0x0009e111) main_mup3_pane_g6

0xcfb4,	// (0x000a6058) main_mup3_pane_g7_ParamLimits

0xcfb4,	// (0x000a6058) main_mup3_pane_g7

0x0007,

0xf5c5,	// (0x000a8669) main_mup3_pane_g_ParamLimits

0xf5c5,	// (0x000a8669) main_mup3_pane_g

0x50e3,	// (0x0009e187) main_mup3_pane_t1_ParamLimits

0x50e3,	// (0x0009e187) main_mup3_pane_t1

0x5152,	// (0x0009e1f6) main_mup3_pane_t2_ParamLimits

0x5152,	// (0x0009e1f6) main_mup3_pane_t2

0x521b,	// (0x0009e2bf) main_mup3_pane_t4_ParamLimits

0x521b,	// (0x0009e2bf) main_mup3_pane_t4

0x5269,	// (0x0009e30d) main_mup3_pane_t5_ParamLimits

0x5269,	// (0x0009e30d) main_mup3_pane_t5

0x5319,	// (0x0009e3bd) main_mup3_pane_t6_ParamLimits

0x5319,	// (0x0009e3bd) main_mup3_pane_t6

0x0005,

0xf5d6,	// (0x000a867a) main_mup3_pane_t_ParamLimits

0xf5d6,	// (0x000a867a) main_mup3_pane_t

0x53c5,	// (0x0009e469) mup3_progress_pane_ParamLimits

0x53c5,	// (0x0009e469) mup3_progress_pane

0x5439,	// (0x0009e4dd) popup_mup3_control_window_ParamLimits

0x5439,	// (0x0009e4dd) popup_mup3_control_window

0xcfc2,	// (0x000a6066) popup_mup3_text_window

0x5452,	// (0x0009e4f6) mup3_progress_pane_t1

0x5471,	// (0x0009e515) mup3_progress_pane_t2

0xcfca,	// (0x000a606e) mup3_progress_pane_t3

0x0002,

0xf5e3,	// (0x000a8687) mup3_progress_pane_t

0xcfe7,	// (0x000a608b) mup_progress_pane_cp03

0xa075,	// (0x000a3119) bg_tb_trans_pane_cp04

0x5490,	// (0x0009e534) mup3_volume_pane

0x5498,	// (0x0009e53c) popup_mup3_control_window_g1

0x54a1,	// (0x0009e545) mup3_volume_pane_g1

0x54aa,	// (0x0009e54e) mup3_volume_pane_g2

0x54b3,	// (0x0009e557) mup3_volume_pane_g3

0x0002,

0xf5ea,	// (0x000a868e) mup3_volume_pane_g

0xa075,	// (0x000a3119) bg_tb_trans_pane_cp03

0xcff7,	// (0x000a609b) popup_mup3_text_window_g1

0xcfff,	// (0x000a60a3) popup_mup3_text_window_t1

0xa894,	// (0x000a3938) list_calc_item_pane_g1_ParamLimits

0xca48,	// (0x000a5aec) mup_volume_pane_cp_g1

0x4e5e,	// (0x0009df02) main_touch_calib_pane_t3

0x4e74,	// (0x0009df18) main_touch_calib_pane_t4

0x4e8a,	// (0x0009df2e) main_touch_calib_pane_t5

0x0e63,	// (0x00099f07) aid_cell_size_toolbar2

0x0e6b,	// (0x00099f0f) aid_popup3_width_pane

0x0d73,	// (0x00099e17) aid_zoom_text_msg_primary

0x1bc3,	// (0x0009ac67) vorec_t7

0xa858,	// (0x000a38fc) bg_calc_paper_pane_g1_ParamLimits

0xa864,	// (0x000a3908) bg_calc_paper_pane_g2_ParamLimits

0xa870,	// (0x000a3914) bg_calc_paper_pane_g3_ParamLimits

0xa87c,	// (0x000a3920) bg_calc_paper_pane_g4_ParamLimits

0xa888,	// (0x000a392c) bg_calc_paper_pane_g5_ParamLimits

0x1519,	// (0x0009a5bd) bg_calc_paper_pane_g6_ParamLimits

0x152a,	// (0x0009a5ce) bg_calc_paper_pane_g7_ParamLimits

0x153b,	// (0x0009a5df) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000a81fc) bg_calc_paper_pane_g_ParamLimits

0x154c,	// (0x0009a5f0) calc_bg_paper_pane_g9_ParamLimits

0x1cd5,	// (0x0009ad79) image_qvga_pane_ParamLimits

0x1cd5,	// (0x0009ad79) image_qvga_pane

0xa77b,	// (0x000a381f) bg_popup_sub_pane_cp04_ParamLimits

0xb6a1,	// (0x000a4745) popup_mup_playback_window_g1_ParamLimits

0xb6ad,	// (0x000a4751) popup_mup_playback_window_t1_ParamLimits

0xb6c2,	// (0x000a4766) popup_mup_playback_window_t2_ParamLimits

0x0346,	// (0x000993ea) popup_mup_playback_window_t_ParamLimits

0x4969,	// (0x0009da0d) main_mup2_pane_g3_ParamLimits

0x4969,	// (0x0009da0d) main_mup2_pane_g3

0x2084,	// (0x0009b128) popup_toolbar_window_cp04

0xbab7,	// (0x000a4b5b) popup_call2_audio_second_window_g3_ParamLimits

0xbab7,	// (0x000a4b5b) popup_call2_audio_second_window_g3

0xbec1,	// (0x000a4f65) popup_call2_audio_first_window_g4_ParamLimits

0xbec1,	// (0x000a4f65) popup_call2_audio_first_window_g4

0xc540,	// (0x000a55e4) popup_call2_audio_in_window_g4_ParamLimits

0xc540,	// (0x000a55e4) popup_call2_audio_in_window_g4

0x3d6c,	// (0x0009ce10) aid_area_sk_bg_cut_ParamLimits

0x3d6c,	// (0x0009ce10) aid_area_sk_bg_cut

0xb6d7,	// (0x000a477b) aid_area_sk_bg_cut_2_ParamLimits

0xb6d7,	// (0x000a477b) aid_area_sk_bg_cut_2

0x4ced,	// (0x0009dd91) aid_placing_details_win

0x4cf5,	// (0x0009dd99) aid_placing_details_win_2

0xce61,	// (0x000a5f05) camera2_autofocus_pane_g1_ParamLimits

0x10ba,	// (0x0009a15e) popup_fixed_preview_cale_window_ParamLimits

0x10ba,	// (0x0009a15e) popup_fixed_preview_cale_window

0xb4a5,	// (0x000a4549) navi_slider_pane_g3

0xb4ae,	// (0x000a4552) navi_slider_pane_g4

0xb4b7,	// (0x000a455b) navi_slider_pane_g5

0xb4a5,	// (0x000a4549) navi_slider_pane_g6

0x364f,	// (0x0009c6f3) navi_slider_pane_g7

0xb5d8,	// (0x000a467c) mup_scale_pane_g3

0xb5e1,	// (0x000a4685) mup_scale_pane_g4

0xb5ea,	// (0x000a468e) mup_scale_pane_g5

0x3a7e,	// (0x0009cb22) mup_scale_pane_g6

0x3a87,	// (0x0009cb2b) mup_scale_pane_g7

0xb4a5,	// (0x000a4549) cams2_slider_pane_g3

0xcaca,	// (0x000a5b6e) cams2_slider_pane_g4

0x4c45,	// (0x0009dce9) cams2_slider_pane_g5

0xb4a5,	// (0x000a4549) cams2_slider_pane_g6

0x4c4d,	// (0x0009dcf1) cams2_slider_pane_g7

0xcd01,	// (0x000a5da5) camera2_autofocus_pane_cp_g1

0xc8e1,	// (0x000a5985) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8e1,	// (0x000a5985) bg_popup_preview_window_pane_cp02

0xd00d,	// (0x000a60b1) list_fp_cale_pane_ParamLimits

0xd00d,	// (0x000a60b1) list_fp_cale_pane

0xd019,	// (0x000a60bd) popup_fixed_preview_cale_window_t1_ParamLimits

0xd019,	// (0x000a60bd) popup_fixed_preview_cale_window_t1

0x54bc,	// (0x0009e560) popup_fixed_preview_cale_window_t2_ParamLimits

0x54bc,	// (0x0009e560) popup_fixed_preview_cale_window_t2

0x54d1,	// (0x0009e575) popup_fixed_preview_cale_window_t3_ParamLimits

0x54d1,	// (0x0009e575) popup_fixed_preview_cale_window_t3

0x0002,

0xf5f1,	// (0x000a8695) popup_fixed_preview_cale_window_t_ParamLimits

0xf5f1,	// (0x000a8695) popup_fixed_preview_cale_window_t

0x54e6,	// (0x0009e58a) list_single_fp_cale_pane_ParamLimits

0x54e6,	// (0x0009e58a) list_single_fp_cale_pane

0xd037,	// (0x000a60db) list_single_fp_cale_pane_g1_ParamLimits

0xd037,	// (0x000a60db) list_single_fp_cale_pane_g1

0xd043,	// (0x000a60e7) list_single_fp_cale_pane_g2_ParamLimits

0xd043,	// (0x000a60e7) list_single_fp_cale_pane_g2

0x0002,

0x0628,	// (0x000996cc) list_single_fp_cale_pane_g_ParamLimits

0x0628,	// (0x000996cc) list_single_fp_cale_pane_g

0xd05c,	// (0x000a6100) list_single_fp_cale_pane_t1_ParamLimits

0xd05c,	// (0x000a6100) list_single_fp_cale_pane_t1

0xd06e,	// (0x000a6112) list_single_fp_cale_pane_t2_ParamLimits

0xd06e,	// (0x000a6112) list_single_fp_cale_pane_t2

0x0001,

0x062f,	// (0x000996d3) list_single_fp_cale_pane_t_ParamLimits

0x062f,	// (0x000996d3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x112e,	// (0x0009a1d2) main_dialer_pane

0x54f9,	// (0x0009e59d) aid_cell_size_keypad

0x5503,	// (0x0009e5a7) dialer_ne_pane

0x550d,	// (0x0009e5b1) grid_dialer_command_1_pane

0x5515,	// (0x0009e5b9) grid_dialer_command_2_pane

0x551d,	// (0x0009e5c1) grid_dialer_keypad_pane

0x5531,	// (0x0009e5d5) bg_popup_call_pane_cp06_ParamLimits

0x5531,	// (0x0009e5d5) bg_popup_call_pane_cp06

0x553d,	// (0x0009e5e1) dialer_ne_clear_pane_ParamLimits

0x553d,	// (0x0009e5e1) dialer_ne_clear_pane

0xd0a1,	// (0x000a6145) dialer_ne_pane_g1

0xd0a9,	// (0x000a614d) dialer_ne_pane_t1_ParamLimits

0xd0a9,	// (0x000a614d) dialer_ne_pane_t1

0x5549,	// (0x0009e5ed) dialer_ne_pane_t2_ParamLimits

0x5549,	// (0x0009e5ed) dialer_ne_pane_t2

0x5566,	// (0x0009e60a) dialer_ne_pane_t3_ParamLimits

0x5566,	// (0x0009e60a) dialer_ne_pane_t3

0x0002,

0xf5f8,	// (0x000a869c) dialer_ne_pane_t_ParamLimits

0xf5f8,	// (0x000a869c) dialer_ne_pane_t

0x558a,	// (0x0009e62e) dialer_ne_pane_t3_copy1_ParamLimits

0x558a,	// (0x0009e62e) dialer_ne_pane_t3_copy1

0x55ae,	// (0x0009e652) cell_dialer_keypad_pane_ParamLimits

0x55ae,	// (0x0009e652) cell_dialer_keypad_pane

0x55c5,	// (0x0009e669) cell_dialer_command_1_pane_ParamLimits

0x55c5,	// (0x0009e669) cell_dialer_command_1_pane

0x55db,	// (0x0009e67f) cell_dialer_command_2_pane_ParamLimits

0x55db,	// (0x0009e67f) cell_dialer_command_2_pane

0xd0bb,	// (0x000a615f) bg_button_pane_cp02_ParamLimits

0xd0bb,	// (0x000a615f) bg_button_pane_cp02

0x55ea,	// (0x0009e68e) cell_dialer_keypad_pane_g1_ParamLimits

0x55ea,	// (0x0009e68e) cell_dialer_keypad_pane_g1

0xd0bb,	// (0x000a615f) bg_button_pane_cp03_ParamLimits

0xd0bb,	// (0x000a615f) bg_button_pane_cp03

0x55ff,	// (0x0009e6a3) cell_dialer_command_1_pane_g1_ParamLimits

0x55ff,	// (0x0009e6a3) cell_dialer_command_1_pane_g1

0xd0c7,	// (0x000a616b) bg_button_pane_cp04

0x5613,	// (0x0009e6b7) cell_dialer_command_2_pane_g1

0xaa23,	// (0x000a3ac7) bg_button_pane_cp06

0xd0cf,	// (0x000a6173) dialer_ne_clear_pane_g1

0xb378,	// (0x000a441c) navi_pane_g2

0xb3a6,	// (0x000a444a) navi_pane_g3

0x0002,

0x0249,	// (0x000992ed) navi_pane_g

0xb435,	// (0x000a44d9) navi_pane_mv_g2

0xb45c,	// (0x000a4500) navi_pane_mv_g5

0x361a,	// (0x0009c6be) navi_pane_mv_t1

0xa84c,	// (0x000a38f0) main_clock2_pane

0x5653,	// (0x0009e6f7) main_clock2_list_pane_ParamLimits

0x5653,	// (0x0009e6f7) main_clock2_list_pane

0x567d,	// (0x0009e721) main_clock2_pane_t1_ParamLimits

0x567d,	// (0x0009e721) main_clock2_pane_t1

0x56a1,	// (0x0009e745) main_clock2_pane_t2_ParamLimits

0x56a1,	// (0x0009e745) main_clock2_pane_t2

0x0004,

0xf5ff,	// (0x000a86a3) main_clock2_pane_t_ParamLimits

0xf5ff,	// (0x000a86a3) main_clock2_pane_t

0x56fc,	// (0x0009e7a0) popup_clock_analogue_window_cp03_ParamLimits

0x56fc,	// (0x0009e7a0) popup_clock_analogue_window_cp03

0x571a,	// (0x0009e7be) popup_clock_digital_window_cp02_ParamLimits

0x571a,	// (0x0009e7be) popup_clock_digital_window_cp02

0x5787,	// (0x0009e82b) main_clock2_list_single_pane_ParamLimits

0x5787,	// (0x0009e82b) main_clock2_list_single_pane

0xaa23,	// (0x000a3ac7) list_highlight_pane_cp05

0xd109,	// (0x000a61ad) main_clock2_list_single_pane_t1

0x2084,	// (0x0009b128) popup_toolbar_window_cp04_ParamLimits

0x4d17,	// (0x0009ddbb) camera2_autofocus_pane_g2_ParamLimits

0x4d17,	// (0x0009ddbb) camera2_autofocus_pane_g2

0x4d23,	// (0x0009ddc7) camera2_autofocus_pane_g3_ParamLimits

0x4d23,	// (0x0009ddc7) camera2_autofocus_pane_g3

0x4d2f,	// (0x0009ddd3) camera2_autofocus_pane_g4_ParamLimits

0x4d2f,	// (0x0009ddd3) camera2_autofocus_pane_g4

0x4d3b,	// (0x0009dddf) camera2_autofocus_pane_g5_ParamLimits

0x4d3b,	// (0x0009dddf) camera2_autofocus_pane_g5

0x0004,

0xf566,	// (0x000a860a) camera2_autofocus_pane_g_ParamLimits

0xf566,	// (0x000a860a) camera2_autofocus_pane_g

0x4eca,	// (0x0009df6e) camera2_autofocus_pane_cp_g2

0x4ed2,	// (0x0009df76) camera2_autofocus_pane_cp_g3

0x4eda,	// (0x0009df7e) camera2_autofocus_pane_cp_g4

0x4ee2,	// (0x0009df86) camera2_autofocus_pane_cp_g5

0x0004,

0xf5ba,	// (0x000a865e) camera2_autofocus_pane_cp_g

0x5529,	// (0x0009e5cd) popup_dialer_spcha_window

0xa075,	// (0x000a3119) bg_popup_sub_pane_cp07

0xd117,	// (0x000a61bb) list_spcha_pane

0xd11f,	// (0x000a61c3) list_single_spcha_pane_ParamLimits

0xd11f,	// (0x000a61c3) list_single_spcha_pane

0xa075,	// (0x000a3119) list_highlight_pane_cp06

0xd130,	// (0x000a61d4) list_single_spcha_pane_t1

0xc2ea,	// (0x000a538e) popup_call2_audio_out_window_g4_ParamLimits

0xc2ea,	// (0x000a538e) popup_call2_audio_out_window_g4

0x112e,	// (0x0009a1d2) main_imed2_pane

0x43b5,	// (0x0009d459) popup_imed_adjust2_window

0x43c8,	// (0x0009d46c) popup_imed_trans_window_ParamLimits

0x43c8,	// (0x0009d46c) popup_imed_trans_window

0xcb3f,	// (0x000a5be3) popup_blid_sat_info2_window_t1

0xcb4d,	// (0x000a5bf1) popup_blid_sat_info2_window_t2

0x000a,

0x0519,	// (0x000995bd) popup_blid_sat_info2_window_t

0x5830,	// (0x0009e8d4) aid_size_cell_colour_35

0x584a,	// (0x0009e8ee) aid_size_cell_colour_112

0x5861,	// (0x0009e905) aid_size_cell_effect

0xab6b,	// (0x000a3c0f) bg_tb_trans_pane_cp02

0xafd0,	// (0x000a4074) heading_imed_pane

0x587b,	// (0x0009e91f) listscroll_imed_pane

0xd13e,	// (0x000a61e2) heading_imed_pane_g1

0xd146,	// (0x000a61ea) heading_imed_pane_t1

0xd154,	// (0x000a61f8) grid_imed_colour_35_pane_ParamLimits

0xd154,	// (0x000a61f8) grid_imed_colour_35_pane

0x5887,	// (0x0009e92b) grid_imed_effect_pane

0xd16c,	// (0x000a6210) list_imed_aspect_pane

0x5897,	// (0x0009e93b) scroll_pane_cp027_ParamLimits

0x5897,	// (0x0009e93b) scroll_pane_cp027

0x58a3,	// (0x0009e947) cell_imed_effect_pane_ParamLimits

0x58a3,	// (0x0009e947) cell_imed_effect_pane

0xd174,	// (0x000a6218) cell_imed_colour_pane_ParamLimits

0xd174,	// (0x000a6218) cell_imed_colour_pane

0xd1b6,	// (0x000a625a) cell_imed_colour_pane_g1_ParamLimits

0xd1b6,	// (0x000a625a) cell_imed_colour_pane_g1

0xd1c7,	// (0x000a626b) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1c7,	// (0x000a626b) hgihlgiht_grid_pane_cp016

0x58bb,	// (0x0009e95f) cell_imed_effect_pane_g1

0x58c3,	// (0x0009e967) grid_highlight_pane_cp017

0xd1d8,	// (0x000a627c) list_imed_single_pane_ParamLimits

0xd1d8,	// (0x000a627c) list_imed_single_pane

0xa075,	// (0x000a3119) list_highlight_pane_cp07

0xd1ed,	// (0x000a6291) list_imed_aspect_pane_comp1_t1

0xc8ed,	// (0x000a5991) bg_tb_trans_pane_cp05

0xd20f,	// (0x000a62b3) popup_imed_adjust2_window_g1

0xd236,	// (0x000a62da) popup_imed_adjust2_window_t1

0xd24e,	// (0x000a62f2) slider_imed_adjust_pane

0xd262,	// (0x000a6306) slider_imed_adjust_pane_g1

0xd272,	// (0x000a6316) slider_imed_adjust_pane_g2

0xd282,	// (0x000a6326) slider_imed_adjust_pane_g3

0xd293,	// (0x000a6337) slider_imed_adjust_pane_g4

0x0003,

0x065d,	// (0x00099701) slider_imed_adjust_pane_g

0x58cc,	// (0x0009e970) aid_size_cell_clipart2

0x58d8,	// (0x0009e97c) grid_imed_clipart_pane

0xd2a4,	// (0x000a6348) scroll_pane_cp031

0x58e2,	// (0x0009e986) cell_imed_clipart_pane_ParamLimits

0x58e2,	// (0x0009e986) cell_imed_clipart_pane

0x5905,	// (0x0009e9a9) cell_imed_clipart_pane_g1

0xa075,	// (0x000a3119) grid_highlight_pane_cp014

0x565f,	// (0x0009e703) main_clock2_pane_g1_ParamLimits

0x565f,	// (0x0009e703) main_clock2_pane_g1

0x5732,	// (0x0009e7d6) aid_call2_pane_cp10

0x5744,	// (0x0009e7e8) aid_call_pane_cp10

0xb2d7,	// (0x000a437b) popup_clock_analogue_window_cp10_g1

0xb2d7,	// (0x000a437b) popup_clock_analogue_window_cp10_g2

0x5756,	// (0x0009e7fa) popup_clock_analogue_window_cp10_g3

0x5756,	// (0x0009e7fa) popup_clock_analogue_window_cp10_g4

0xb2d7,	// (0x000a437b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf60a,	// (0x000a86ae) popup_clock_analogue_window_cp10_g

0x5768,	// (0x0009e80c) popup_clock_analogue_window_cp10_t1

0x5799,	// (0x0009e83d) clock_digital_number_pane_cp10_ParamLimits

0x5799,	// (0x0009e83d) clock_digital_number_pane_cp10

0x57b1,	// (0x0009e855) clock_digital_number_pane_cp11_ParamLimits

0x57b1,	// (0x0009e855) clock_digital_number_pane_cp11

0x57c9,	// (0x0009e86d) clock_digital_number_pane_cp12_ParamLimits

0x57c9,	// (0x0009e86d) clock_digital_number_pane_cp12

0x57e1,	// (0x0009e885) clock_digital_number_pane_cp13_ParamLimits

0x57e1,	// (0x0009e885) clock_digital_number_pane_cp13

0x57f9,	// (0x0009e89d) clock_digital_separator_pane_cp10_ParamLimits

0x57f9,	// (0x0009e89d) clock_digital_separator_pane_cp10

0x5811,	// (0x0009e8b5) popup_clock_digital_window_cp02_t1_ParamLimits

0x5811,	// (0x0009e8b5) popup_clock_digital_window_cp02_t1

0xa773,	// (0x000a3817) clock_digital_number_pane_cp10_g1

0xa773,	// (0x000a3817) clock_digital_number_pane_cp10_g2

0x0001,

0xf615,	// (0x000a86b9) clock_digital_number_pane_cp10_g

0xa773,	// (0x000a3817) clock_digital_separator_pane_cp10_g1

0xa773,	// (0x000a3817) clock_digital_separator_pane_g2_cp10

0xb464,	// (0x000a4508) navi_pane_vded_g4

0xb46d,	// (0x000a4511) navi_pane_vded_g5

0xb476,	// (0x000a451a) navi_pane_vded_t1

0x112e,	// (0x0009a1d2) main_vded_pane

0x590e,	// (0x0009e9b2) main_vded_pane_g1

0x591a,	// (0x0009e9be) main_vded_pane_g2

0x5924,	// (0x0009e9c8) main_vded_pane_g3

0x0002,

0xf61a,	// (0x000a86be) main_vded_pane_g

0x592e,	// (0x0009e9d2) main_vded_pane_t1

0x593c,	// (0x0009e9e0) main_vded_pane_t2

0x0001,

0xf621,	// (0x000a86c5) main_vded_pane_t

0x594a,	// (0x0009e9ee) vded_slider_pane

0x5954,	// (0x0009e9f8) vded_video_pane

0xd2ac,	// (0x000a6350) vded_video_pane_g1

0x595e,	// (0x0009ea02) vded_video_pane_g2

0xcd01,	// (0x000a5da5) vded_video_pane_g3

0x0002,

0xf626,	// (0x000a86ca) vded_video_pane_g

0xd2b6,	// (0x000a635a) vded_slider_pane_g1

0xca48,	// (0x000a5aec) vded_slider_pane_g2

0xd2bf,	// (0x000a6363) vded_slider_pane_g3

0xd2c8,	// (0x000a636c) vded_slider_pane_g4

0xd2d1,	// (0x000a6375) vded_slider_pane_g5

0x0004,

0x067e,	// (0x00099722) vded_slider_pane_g

0x542b,	// (0x0009e4cf) mup3_rocker_pane_ParamLimits

0x542b,	// (0x0009e4cf) mup3_rocker_pane

0x5967,	// (0x0009ea0b) mup3_control_keys_pane_g1

0x596f,	// (0x0009ea13) mup3_control_keys_pane_g2

0x5977,	// (0x0009ea1b) mup3_control_keys_pane_g3

0x597f,	// (0x0009ea23) mup3_control_keys_pane_g4

0x0003,

0xf62d,	// (0x000a86d1) mup3_control_keys_pane_g

0x10e2,	// (0x0009a186) popup_toolbar2_fixed_window_cp01_ParamLimits

0x10e2,	// (0x0009a186) popup_toolbar2_fixed_window_cp01

0x5445,	// (0x0009e4e9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5445,	// (0x0009e4e9) popup_toolbar2_fixed_window_cp02

0xbc29,	// (0x000a4ccd) popup_call2_audio_second_window_t4_ParamLimits

0xbc29,	// (0x000a4ccd) popup_call2_audio_second_window_t4

0xc157,	// (0x000a51fb) popup_call2_audio_first_window_t6_ParamLimits

0xc157,	// (0x000a51fb) popup_call2_audio_first_window_t6

0xc3ed,	// (0x000a5491) popup_call2_audio_out_window_t6_ParamLimits

0xc3ed,	// (0x000a5491) popup_call2_audio_out_window_t6

0x112e,	// (0x0009a1d2) main_vitu_pane

0x598f,	// (0x0009ea33) aid_size_cell_itu_ParamLimits

0x598f,	// (0x0009ea33) aid_size_cell_itu

0xdde3,	// (0x000a6e87) bg_popup_window_pane_cp08_ParamLimits

0xdde3,	// (0x000a6e87) bg_popup_window_pane_cp08

0x599d,	// (0x0009ea41) field_vitu_entry_pane_ParamLimits

0x599d,	// (0x0009ea41) field_vitu_entry_pane

0x59ac,	// (0x0009ea50) grid_vitu_function_pane_ParamLimits

0x59ac,	// (0x0009ea50) grid_vitu_function_pane

0x59bc,	// (0x0009ea60) grid_vitu_itu_pane_ParamLimits

0x59bc,	// (0x0009ea60) grid_vitu_itu_pane

0x59cc,	// (0x0009ea70) cell_vitu_itu_pane_ParamLimits

0x59cc,	// (0x0009ea70) cell_vitu_itu_pane

0x59e1,	// (0x0009ea85) cell_vitu_function_pane_ParamLimits

0x59e1,	// (0x0009ea85) cell_vitu_function_pane

0xab6b,	// (0x000a3c0f) bg_popup_sub_pane_cp08_ParamLimits

0xab6b,	// (0x000a3c0f) bg_popup_sub_pane_cp08

0x59f3,	// (0x0009ea97) field_vitu_entry_pane_t1_ParamLimits

0x59f3,	// (0x0009ea97) field_vitu_entry_pane_t1

0xd2f2,	// (0x000a6396) field_vitu_entry_pane_t2_ParamLimits

0xd2f2,	// (0x000a6396) field_vitu_entry_pane_t2

0x0001,

0xf636,	// (0x000a86da) field_vitu_entry_pane_t_ParamLimits

0xf636,	// (0x000a86da) field_vitu_entry_pane_t

0xd30f,	// (0x000a63b3) bg_button_pane_cp05_ParamLimits

0xd30f,	// (0x000a63b3) bg_button_pane_cp05

0x5a10,	// (0x0009eab4) cell_vitu_itu_pane_g1

0x5a28,	// (0x0009eacc) cell_vitu_itu_pane_t1_ParamLimits

0x5a28,	// (0x0009eacc) cell_vitu_itu_pane_t1

0x5a3a,	// (0x0009eade) cell_vitu_itu_pane_t2_ParamLimits

0x5a3a,	// (0x0009eade) cell_vitu_itu_pane_t2

0x0002,

0xf63b,	// (0x000a86df) cell_vitu_itu_pane_t_ParamLimits

0xf63b,	// (0x000a86df) cell_vitu_itu_pane_t

0xd31d,	// (0x000a63c1) bg_button_pane_cp07

0x5a6f,	// (0x0009eb13) cell_vitu_function_pane_g1

0x13bd,	// (0x0009a461) main_calc_pane_g1

0x0e9f,	// (0x00099f43) aid_visual_content_pane

0x112e,	// (0x0009a1d2) main_vradio_pane

0x5a78,	// (0x0009eb1c) main_vradio_pane_g1_ParamLimits

0x5a78,	// (0x0009eb1c) main_vradio_pane_g1

0xd327,	// (0x000a63cb) main_vradio_pane_g2_ParamLimits

0xd327,	// (0x000a63cb) main_vradio_pane_g2

0x0001,

0xf642,	// (0x000a86e6) main_vradio_pane_g_ParamLimits

0xf642,	// (0x000a86e6) main_vradio_pane_g

0x5a88,	// (0x0009eb2c) main_vradio_pane_t1_ParamLimits

0x5a88,	// (0x0009eb2c) main_vradio_pane_t1

0x5a9a,	// (0x0009eb3e) main_vradio_pane_t2_ParamLimits

0x5a9a,	// (0x0009eb3e) main_vradio_pane_t2

0xd334,	// (0x000a63d8) main_vradio_pane_t3_ParamLimits

0xd334,	// (0x000a63d8) main_vradio_pane_t3

0x0002,

0xf647,	// (0x000a86eb) main_vradio_pane_t_ParamLimits

0xf647,	// (0x000a86eb) main_vradio_pane_t

0x5aac,	// (0x0009eb50) vradio_rocker_control_pane_ParamLimits

0x5aac,	// (0x0009eb50) vradio_rocker_control_pane

0x5ab8,	// (0x0009eb5c) vradio_station_info_pane_ParamLimits

0x5ab8,	// (0x0009eb5c) vradio_station_info_pane

0xd348,	// (0x000a63ec) vradio_frequency_info_pane_ParamLimits

0xd348,	// (0x000a63ec) vradio_frequency_info_pane

0xcd01,	// (0x000a5da5) vradio_station_info_pane_g1

0xd357,	// (0x000a63fb) vradio_station_info_pane_t1_ParamLimits

0xd357,	// (0x000a63fb) vradio_station_info_pane_t1

0xd379,	// (0x000a641d) vradio_station_info_pane_t2_ParamLimits

0xd379,	// (0x000a641d) vradio_station_info_pane_t2

0x0001,

0x06af,	// (0x00099753) vradio_station_info_pane_t_ParamLimits

0x06af,	// (0x00099753) vradio_station_info_pane_t

0xd38b,	// (0x000a642f) vradio_tuning_pane

0xd393,	// (0x000a6437) vradio_rocker_control_pane_g1

0xd39b,	// (0x000a643f) vradio_rocker_control_pane_g2

0xd3a3,	// (0x000a6447) vradio_rocker_control_pane_g3

0xd3ab,	// (0x000a644f) vradio_rocker_control_pane_g4

0xd3b3,	// (0x000a6457) vradio_rocker_control_pane_g5

0x0004,

0x06b4,	// (0x00099758) vradio_rocker_control_pane_g

0x5ac7,	// (0x0009eb6b) vradio_frequency_info_pane_g1

0xd3bb,	// (0x000a645f) vradio_frequency_info_pane_t1_ParamLimits

0xd3bb,	// (0x000a645f) vradio_frequency_info_pane_t1

0x5ad1,	// (0x0009eb75) vradio_tuning_pane_g1

0x5ada,	// (0x0009eb7e) vradio_tuning_pane_t1

0x0ee8,	// (0x00099f8c) area_side_right_pane_ParamLimits

0x0ee8,	// (0x00099f8c) area_side_right_pane

0xc8a8,	// (0x000a594c) status_small_pane_g1

0xc8b0,	// (0x000a5954) status_small_pane_g2

0xc8b9,	// (0x000a595d) status_small_pane_g3

0xc8c2,	// (0x000a5966) status_small_pane_g4

0x0003,

0x046f,	// (0x00099513) status_small_pane_g

0xc8cb,	// (0x000a596f) status_small_pane_t1

0x112e,	// (0x0009a1d2) main_video3_pane

0xd3cf,	// (0x000a6473) cams_zoom_vslider_pane

0xd3d7,	// (0x000a647b) image3_wide_pane_ParamLimits

0xd3d7,	// (0x000a647b) image3_wide_pane

0xd3f1,	// (0x000a6495) image3_wide_small_pane

0xd3fd,	// (0x000a64a1) main_video3_pane_g1_ParamLimits

0xd3fd,	// (0x000a64a1) main_video3_pane_g1

0xd419,	// (0x000a64bd) main_video3_pane_g2_ParamLimits

0xd419,	// (0x000a64bd) main_video3_pane_g2

0x0001,

0x06bf,	// (0x00099763) main_video3_pane_g_ParamLimits

0x06bf,	// (0x00099763) main_video3_pane_g

0xd435,	// (0x000a64d9) main_video3_pane_t1_ParamLimits

0xd435,	// (0x000a64d9) main_video3_pane_t1

0xd460,	// (0x000a6504) main_video3_pane_t2_ParamLimits

0xd460,	// (0x000a6504) main_video3_pane_t2

0xd48b,	// (0x000a652f) main_video3_pane_t3_ParamLimits

0xd48b,	// (0x000a652f) main_video3_pane_t3

0x0002,

0x06c4,	// (0x00099768) main_video3_pane_t_ParamLimits

0x06c4,	// (0x00099768) main_video3_pane_t

0xd4b8,	// (0x000a655c) cams_zoom_vslider_pane_g1

0xd4c1,	// (0x000a6565) cams_zoom_vslider_pane_g2

0x0001,

0x06cb,	// (0x0009976f) cams_zoom_vslider_pane_g

0xd4c9,	// (0x000a656d) small_slider_vertical_pane

0xcd01,	// (0x000a5da5) small_slider_vertical_pane_g1

0xcd01,	// (0x000a5da5) small_slider_vertical_pane_g2

0xd4d1,	// (0x000a6575) small_slider_vertical_pane_g3

0x0002,

0x06d0,	// (0x00099774) small_slider_vertical_pane_g

0x112e,	// (0x0009a1d2) main_hwr_training_pane

0xd4da,	// (0x000a657e) hwr_training_instruct_pane_ParamLimits

0xd4da,	// (0x000a657e) hwr_training_instruct_pane

0x5ae9,	// (0x0009eb8d) hwr_training_navi_pane_ParamLimits

0x5ae9,	// (0x0009eb8d) hwr_training_navi_pane

0x5b03,	// (0x0009eba7) hwr_training_write_pane_ParamLimits

0x5b03,	// (0x0009eba7) hwr_training_write_pane

0xa075,	// (0x000a3119) bg_frame_shadow_pane

0xd511,	// (0x000a65b5) hwr_training_write_pane_g1

0xd519,	// (0x000a65bd) hwr_training_write_pane_g2

0xd521,	// (0x000a65c5) hwr_training_write_pane_g3

0xd529,	// (0x000a65cd) hwr_training_write_pane_g4

0xd531,	// (0x000a65d5) hwr_training_write_pane_g5

0xd539,	// (0x000a65dd) hwr_training_write_pane_g6

0xd541,	// (0x000a65e5) hwr_training_write_pane_g7

0x0006,

0x06d7,	// (0x0009977b) hwr_training_write_pane_g

0x5b3b,	// (0x0009ebdf) hwr_training_navi_pane_g1_ParamLimits

0x5b3b,	// (0x0009ebdf) hwr_training_navi_pane_g1

0x5b4d,	// (0x0009ebf1) hwr_training_navi_pane_g2_ParamLimits

0x5b4d,	// (0x0009ebf1) hwr_training_navi_pane_g2

0x5b5f,	// (0x0009ec03) hwr_training_navi_pane_g3_ParamLimits

0x5b5f,	// (0x0009ec03) hwr_training_navi_pane_g3

0x5b6f,	// (0x0009ec13) hwr_training_navi_pane_g4_ParamLimits

0x5b6f,	// (0x0009ec13) hwr_training_navi_pane_g4

0x0004,

0xf64e,	// (0x000a86f2) hwr_training_navi_pane_g_ParamLimits

0xf64e,	// (0x000a86f2) hwr_training_navi_pane_g

0x5b89,	// (0x0009ec2d) hwr_training_navi_pane_t1

0x5b97,	// (0x0009ec3b) list_single_hwr_training_instruct_pane_ParamLimits

0x5b97,	// (0x0009ec3b) list_single_hwr_training_instruct_pane

0xd549,	// (0x000a65ed) list_single_hwr_training_instruct_pane_t1

0xcc41,	// (0x000a5ce5) bg_frame_shadow_pane_g1

0xd558,	// (0x000a65fc) bg_frame_shadow_pane_g2

0xd560,	// (0x000a6604) bg_frame_shadow_pane_g3

0xd568,	// (0x000a660c) bg_frame_shadow_pane_g4

0xd570,	// (0x000a6614) bg_frame_shadow_pane_g5

0xd578,	// (0x000a661c) bg_frame_shadow_pane_g6

0xd580,	// (0x000a6624) bg_frame_shadow_pane_g7

0xa917,	// (0x000a39bb) bg_frame_shadow_pane_g8

0x0007,

0xf659,	// (0x000a86fd) bg_frame_shadow_pane_g

0x112e,	// (0x0009a1d2) main_video_tele_dialer_pane

0x5bc0,	// (0x0009ec64) aid_size_cell_video_keypad_ParamLimits

0x5bc0,	// (0x0009ec64) aid_size_cell_video_keypad

0x5bd0,	// (0x0009ec74) grid_video_dialer_keypad_pane_ParamLimits

0x5bd0,	// (0x0009ec74) grid_video_dialer_keypad_pane

0x5c04,	// (0x0009eca8) video_down_pane_cp_ParamLimits

0x5c04,	// (0x0009eca8) video_down_pane_cp

0x5c2e,	// (0x0009ecd2) cell_video_dialer_keypad_pane_ParamLimits

0x5c2e,	// (0x0009ecd2) cell_video_dialer_keypad_pane

0xd588,	// (0x000a662c) bg_button_pane_cp08_ParamLimits

0xd588,	// (0x000a662c) bg_button_pane_cp08

0x5c43,	// (0x0009ece7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c43,	// (0x0009ece7) cell_video_dialer_keypad_pane_g1

0x541f,	// (0x0009e4c3) mup3_rocker2_pane_ParamLimits

0x541f,	// (0x0009e4c3) mup3_rocker2_pane

0xcd01,	// (0x000a5da5) mup3_rocker2_pane_g1

0x4329,	// (0x0009d3cd) main_dialer2_pane

0x112e,	// (0x0009a1d2) main_mp4_pane

0x5c85,	// (0x0009ed29) main_mp4_pane_g1_ParamLimits

0x5c85,	// (0x0009ed29) main_mp4_pane_g1

0x5c93,	// (0x0009ed37) main_mp4_pane_g2_ParamLimits

0x5c93,	// (0x0009ed37) main_mp4_pane_g2

0x5ca1,	// (0x0009ed45) main_mp4_pane_g3_ParamLimits

0x5ca1,	// (0x0009ed45) main_mp4_pane_g3

0x5ce6,	// (0x0009ed8a) main_mp4_pane_g4_ParamLimits

0x5ce6,	// (0x0009ed8a) main_mp4_pane_g4

0x5d0e,	// (0x0009edb2) main_mp4_pane_g5_ParamLimits

0x5d0e,	// (0x0009edb2) main_mp4_pane_g5

0x0005,

0xf679,	// (0x000a871d) main_mp4_pane_g_ParamLimits

0xf679,	// (0x000a871d) main_mp4_pane_g

0x5d5e,	// (0x0009ee02) main_mp4_pane_t1_ParamLimits

0x5d5e,	// (0x0009ee02) main_mp4_pane_t1

0x5dba,	// (0x0009ee5e) main_mp4_pane_t2_ParamLimits

0x5dba,	// (0x0009ee5e) main_mp4_pane_t2

0xd594,	// (0x000a6638) main_mp4_pane_t3_ParamLimits

0xd594,	// (0x000a6638) main_mp4_pane_t3

0x5e0c,	// (0x0009eeb0) main_mp4_pane_t4_ParamLimits

0x5e0c,	// (0x0009eeb0) main_mp4_pane_t4

0x0003,

0xf686,	// (0x000a872a) main_mp4_pane_t_ParamLimits

0xf686,	// (0x000a872a) main_mp4_pane_t

0x5e50,	// (0x0009eef4) mp4_progress_pane_ParamLimits

0x5e50,	// (0x0009eef4) mp4_progress_pane

0x5e9a,	// (0x0009ef3e) mp4_rocker_pane_ParamLimits

0x5e9a,	// (0x0009ef3e) mp4_rocker_pane

0xd5bc,	// (0x000a6660) mp4_progress_pane_t1

0xd5d5,	// (0x000a6679) mp4_progress_pane_t2

0x0001,

0x0727,	// (0x000997cb) mp4_progress_pane_t

0xd5ee,	// (0x000a6692) mup_progress_pane_cp04

0xdd00,	// (0x000a6da4) mp4_rocker_pane_g1

0x5eba,	// (0x0009ef5e) aid_cell_size_keypad2_ParamLimits

0x5eba,	// (0x0009ef5e) aid_cell_size_keypad2

0x5eca,	// (0x0009ef6e) dialer2_ne_pane_ParamLimits

0x5eca,	// (0x0009ef6e) dialer2_ne_pane

0x5ed8,	// (0x0009ef7c) grid_dialer2_keypad_pane_ParamLimits

0x5ed8,	// (0x0009ef7c) grid_dialer2_keypad_pane

0xdd0a,	// (0x000a6dae) bg_popup_call_pane_cp07_ParamLimits

0xdd0a,	// (0x000a6dae) bg_popup_call_pane_cp07

0x5ee8,	// (0x0009ef8c) dialer2_ne_pane_t1_ParamLimits

0x5ee8,	// (0x0009ef8c) dialer2_ne_pane_t1

0x5f0d,	// (0x0009efb1) cell_dialer2_keypad_pane_ParamLimits

0x5f0d,	// (0x0009efb1) cell_dialer2_keypad_pane

0xd60c,	// (0x000a66b0) bg_button_pane_pane_cp04_ParamLimits

0xd60c,	// (0x000a66b0) bg_button_pane_pane_cp04

0x5f22,	// (0x0009efc6) cell_dialer2_keypad_pane_g1_ParamLimits

0x5f22,	// (0x0009efc6) cell_dialer2_keypad_pane_g1

0x1f46,	// (0x0009afea) aid_placing_vt_set_content_ParamLimits

0x1f46,	// (0x0009afea) aid_placing_vt_set_content

0x1f72,	// (0x0009b016) aid_placing_vt_set_title_ParamLimits

0x1f72,	// (0x0009b016) aid_placing_vt_set_title

0x112e,	// (0x0009a1d2) main_image3_pane

0x5fbc,	// (0x0009f060) area_side_right_pane_cp01_ParamLimits

0x5fbc,	// (0x0009f060) area_side_right_pane_cp01

0x5fe9,	// (0x0009f08d) main_image3_pane_g1_ParamLimits

0x5fe9,	// (0x0009f08d) main_image3_pane_g1

0x5ff7,	// (0x0009f09b) main_image3_pane_g2_ParamLimits

0x5ff7,	// (0x0009f09b) main_image3_pane_g2

0x6010,	// (0x0009f0b4) main_image3_pane_g3_ParamLimits

0x6010,	// (0x0009f0b4) main_image3_pane_g3

0x6029,	// (0x0009f0cd) main_image3_pane_g4_ParamLimits

0x6029,	// (0x0009f0cd) main_image3_pane_g4

0x0003,

0xf699,	// (0x000a873d) main_image3_pane_g_ParamLimits

0xf699,	// (0x000a873d) main_image3_pane_g

0x6042,	// (0x0009f0e6) main_image3_pane_t1_ParamLimits

0x6042,	// (0x0009f0e6) main_image3_pane_t1

0x6067,	// (0x0009f10b) main_image3_pane_t2_ParamLimits

0x6067,	// (0x0009f10b) main_image3_pane_t2

0x6086,	// (0x0009f12a) main_image3_pane_t3_ParamLimits

0x6086,	// (0x0009f12a) main_image3_pane_t3

0x0003,

0xf6a2,	// (0x000a8746) main_image3_pane_t_ParamLimits

0xf6a2,	// (0x000a8746) main_image3_pane_t

0xdde3,	// (0x000a6e87) grid_sctrl_middle_pane_cp01_ParamLimits

0xdde3,	// (0x000a6e87) grid_sctrl_middle_pane_cp01

0x60e7,	// (0x0009f18b) cell_sctrl_middle_pane_cp01_ParamLimits

0x60e7,	// (0x0009f18b) cell_sctrl_middle_pane_cp01

0x60f8,	// (0x0009f19c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x60f8,	// (0x0009f19c) cell_sctrl_middle_pane_cp01_g1

0x112e,	// (0x0009a1d2) main_call4_pane

0x6105,	// (0x0009f1a9) aid_size_button_call4_ParamLimits

0x6105,	// (0x0009f1a9) aid_size_button_call4

0x6135,	// (0x0009f1d9) call4_windows_pane_ParamLimits

0x6135,	// (0x0009f1d9) call4_windows_pane

0x614f,	// (0x0009f1f3) grid_call4_button_pane_ParamLimits

0x614f,	// (0x0009f1f3) grid_call4_button_pane

0xd618,	// (0x000a66bc) call4_windows_conf_pane

0xd62f,	// (0x000a66d3) popup_call4_audio_first_window_ParamLimits

0xd62f,	// (0x000a66d3) popup_call4_audio_first_window

0xd677,	// (0x000a671b) popup_call4_audio_second_window_ParamLimits

0xd677,	// (0x000a671b) popup_call4_audio_second_window

0xd690,	// (0x000a6734) popup_call4_audio_wait_window_ParamLimits

0xd690,	// (0x000a6734) popup_call4_audio_wait_window

0x6173,	// (0x0009f217) cell_call4_button_pane_ParamLimits

0x6173,	// (0x0009f217) cell_call4_button_pane

0x6198,	// (0x0009f23c) bg_button_pane_cp09_ParamLimits

0x6198,	// (0x0009f23c) bg_button_pane_cp09

0x61a4,	// (0x0009f248) cell_call4_button_pane_g1_ParamLimits

0x61a4,	// (0x0009f248) cell_call4_button_pane_g1

0x61b1,	// (0x0009f255) cell_call4_button_pane_t1_ParamLimits

0x61b1,	// (0x0009f255) cell_call4_button_pane_t1

0xd6a6,	// (0x000a674a) popup_call4_audio_conf_window_ParamLimits

0xd6a6,	// (0x000a674a) popup_call4_audio_conf_window

0x5452,	// (0x0009e4f6) mup3_progress_pane_t1_ParamLimits

0x5471,	// (0x0009e515) mup3_progress_pane_t2_ParamLimits

0xcfca,	// (0x000a606e) mup3_progress_pane_t3_ParamLimits

0xf5e3,	// (0x000a8687) mup3_progress_pane_t_ParamLimits

0xcfe7,	// (0x000a608b) mup_progress_pane_cp03_ParamLimits

0x5987,	// (0x0009ea2b) mup3_control_keys_pane_g4_copy1

0x5e7e,	// (0x0009ef22) mp4_rocker2_pane_ParamLimits

0x5e7e,	// (0x0009ef22) mp4_rocker2_pane

0xd6ba,	// (0x000a675e) mp4_rocker2_pane_g1

0xd6c2,	// (0x000a6766) mp4_rocker2_pane_g2

0x61f5,	// (0x0009f299) mp4_rocker2_pane_g3

0x61fd,	// (0x0009f2a1) mp4_rocker2_pane_g4

0x6205,	// (0x0009f2a9) mp4_rocker2_pane_g5

0x0004,

0xf6ab,	// (0x000a874f) mp4_rocker2_pane_g

0x112e,	// (0x0009a1d2) main_camera4_pane

0x112e,	// (0x0009a1d2) main_video4_pane

0x5be0,	// (0x0009ec84) main_video_tele_dialer_pane_t1_ParamLimits

0x5be0,	// (0x0009ec84) main_video_tele_dialer_pane_t1

0x5bf2,	// (0x0009ec96) main_video_tele_dialer_pane_t2_ParamLimits

0x5bf2,	// (0x0009ec96) main_video_tele_dialer_pane_t2

0x0001,

0xf66a,	// (0x000a870e) main_video_tele_dialer_pane_t_ParamLimits

0xf66a,	// (0x000a870e) main_video_tele_dialer_pane_t

0x6225,	// (0x0009f2c9) cam4_autofocus_pane_ParamLimits

0x6225,	// (0x0009f2c9) cam4_autofocus_pane

0x623f,	// (0x0009f2e3) cam4_image_uncrop_pane_ParamLimits

0x623f,	// (0x0009f2e3) cam4_image_uncrop_pane

0x6256,	// (0x0009f2fa) cam4_indicators_pane_ParamLimits

0x6256,	// (0x0009f2fa) cam4_indicators_pane

0x6272,	// (0x0009f316) main_camera4_pane_g1_ParamLimits

0x6272,	// (0x0009f316) main_camera4_pane_g1

0x627e,	// (0x0009f322) main_camera4_pane_g2_ParamLimits

0x627e,	// (0x0009f322) main_camera4_pane_g2

0x627e,	// (0x0009f322) main_camera4_pane_g3_ParamLimits

0x627e,	// (0x0009f322) main_camera4_pane_g3

0x628a,	// (0x0009f32e) main_camera4_pane_g4_ParamLimits

0x628a,	// (0x0009f32e) main_camera4_pane_g4

0x6296,	// (0x0009f33a) main_camera4_pane_g5_ParamLimits

0x6296,	// (0x0009f33a) main_camera4_pane_g5

0x0005,

0xf6b6,	// (0x000a875a) main_camera4_pane_g_ParamLimits

0xf6b6,	// (0x000a875a) main_camera4_pane_g

0x62b0,	// (0x0009f354) main_camera4_pane_t1_ParamLimits

0x62b0,	// (0x0009f354) main_camera4_pane_t1

0x62f8,	// (0x0009f39c) bg_tb_trans_pane_cp06

0x630e,	// (0x0009f3b2) cam4_indicators_pane_g1

0x631f,	// (0x0009f3c3) cam4_indicators_pane_g2

0x0002,

0xf6d1,	// (0x000a8775) cam4_indicators_pane_g

0x6337,	// (0x0009f3db) cam4_indicators_pane_t1

0x6361,	// (0x0009f405) main_video4_pane_g1_ParamLimits

0x6361,	// (0x0009f405) main_video4_pane_g1

0x636d,	// (0x0009f411) main_video4_pane_g2_ParamLimits

0x636d,	// (0x0009f411) main_video4_pane_g2

0x6379,	// (0x0009f41d) main_video4_pane_g3_ParamLimits

0x6379,	// (0x0009f41d) main_video4_pane_g3

0x6385,	// (0x0009f429) main_video4_pane_g4_ParamLimits

0x6385,	// (0x0009f429) main_video4_pane_g4

0x0004,

0xf6d8,	// (0x000a877c) main_video4_pane_g_ParamLimits

0xf6d8,	// (0x000a877c) main_video4_pane_g

0x63a5,	// (0x0009f449) vid4_indicators_pane_ParamLimits

0x63a5,	// (0x0009f449) vid4_indicators_pane

0x63c4,	// (0x0009f468) video4_image_uncrop_cif_pane_ParamLimits

0x63c4,	// (0x0009f468) video4_image_uncrop_cif_pane

0x63d3,	// (0x0009f477) video4_image_uncrop_nhd_pane_ParamLimits

0x63d3,	// (0x0009f477) video4_image_uncrop_nhd_pane

0x623f,	// (0x0009f2e3) video4_image_uncrop_vga_pane_ParamLimits

0x623f,	// (0x0009f2e3) video4_image_uncrop_vga_pane

0x431b,	// (0x0009d3bf) bg_tb_trans_pane_cp07

0x63e8,	// (0x0009f48c) vid4_indicators_pane_g1

0x63fc,	// (0x0009f4a0) vid4_indicators_pane_g2

0x6410,	// (0x0009f4b4) vid4_indicators_pane_g3

0x0004,

0xf6e3,	// (0x000a8787) vid4_indicators_pane_g

0x643d,	// (0x0009f4e1) vid4_indicators_pane_t1

0x6454,	// (0x0009f4f8) cam4_autofocus_pane_g1

0x645c,	// (0x0009f500) cam4_autofocus_pane_g2

0x6464,	// (0x0009f508) cam4_autofocus_pane_g3

0x0002,

0xf6ee,	// (0x000a8792) cam4_autofocus_pane_g

0x646c,	// (0x0009f510) cam4_autofocus_pane_g3_copy1

0x5c12,	// (0x0009ecb6) video_down_pane_cp_t1

0x5c20,	// (0x0009ecc4) video_down_pane_cp_t2

0x0001,

0xf66f,	// (0x000a8713) video_down_pane_cp_t

0x1114,	// (0x0009a1b8) popup_vitu2_window_ParamLimits

0x1114,	// (0x0009a1b8) popup_vitu2_window

0x6474,	// (0x0009f518) aid_size_cell2_itu2_ParamLimits

0x6474,	// (0x0009f518) aid_size_cell2_itu2

0x6496,	// (0x0009f53a) aid_size_cell_itu2_ParamLimits

0x6496,	// (0x0009f53a) aid_size_cell_itu2

0x64da,	// (0x0009f57e) bg_popup_window_pane_cp09_ParamLimits

0x64da,	// (0x0009f57e) bg_popup_window_pane_cp09

0x64e8,	// (0x0009f58c) field_vitu2_entry_pane_ParamLimits

0x64e8,	// (0x0009f58c) field_vitu2_entry_pane

0x6508,	// (0x0009f5ac) grid_vitu2_function_pane_ParamLimits

0x6508,	// (0x0009f5ac) grid_vitu2_function_pane

0x654c,	// (0x0009f5f0) grid_vitu2_itu_pane_ParamLimits

0x654c,	// (0x0009f5f0) grid_vitu2_itu_pane

0x65c6,	// (0x0009f66a) cell_vitu2_itu_pane_ParamLimits

0x65c6,	// (0x0009f66a) cell_vitu2_itu_pane

0x65df,	// (0x0009f683) cell_vitu2_function_pane_ParamLimits

0x65df,	// (0x0009f683) cell_vitu2_function_pane

0xd6ca,	// (0x000a676e) bg_popup_call_pane_cp08_ParamLimits

0xd6ca,	// (0x000a676e) bg_popup_call_pane_cp08

0xd6f3,	// (0x000a6797) field_vitu2_entry_pane_g1

0xd6ff,	// (0x000a67a3) field_vitu2_entry_pane_g2

0x0002,

0x0792,	// (0x00099836) field_vitu2_entry_pane_g

0x6620,	// (0x0009f6c4) field_vitu2_entry_pane_t1_ParamLimits

0x6620,	// (0x0009f6c4) field_vitu2_entry_pane_t1

0x9cb3,	// (0x000a2d57) field_vitu2_entry_pane_t2_ParamLimits

0x9cb3,	// (0x000a2d57) field_vitu2_entry_pane_t2

0x0001,

0xf6f5,	// (0x000a8799) field_vitu2_entry_pane_t_ParamLimits

0xf6f5,	// (0x000a8799) field_vitu2_entry_pane_t

0x6650,	// (0x0009f6f4) bg_button_pane_cp010_ParamLimits

0x6650,	// (0x0009f6f4) bg_button_pane_cp010

0x665e,	// (0x0009f702) cell_vitu2_itu_pane_g1

0x667e,	// (0x0009f722) cell_vitu2_itu_pane_t1_ParamLimits

0x667e,	// (0x0009f722) cell_vitu2_itu_pane_t1

0x0d83,	// (0x00099e27) cell_vitu2_itu_pane_t2_ParamLimits

0x0d83,	// (0x00099e27) cell_vitu2_itu_pane_t2

0x0002,

0xf6ff,	// (0x000a87a3) cell_vitu2_itu_pane_t_ParamLimits

0xf6ff,	// (0x000a87a3) cell_vitu2_itu_pane_t

0x431b,	// (0x0009d3bf) bg_button_pane_cp011

0x66ca,	// (0x0009f76e) cell_vitu2_function_pane_g1

0x112e,	// (0x0009a1d2) main_myfav_hc_pane

0x60c8,	// (0x0009f16c) popup_image3_note_pane_ParamLimits

0x60c8,	// (0x0009f16c) popup_image3_note_pane

0x60d6,	// (0x0009f17a) popup_image3_tool_bar_pane_ParamLimits

0x60d6,	// (0x0009f17a) popup_image3_tool_bar_pane

0x0df9,	// (0x00099e9d) cell_vitu2_itu_pane_t3_ParamLimits

0x0df9,	// (0x00099e9d) cell_vitu2_itu_pane_t3

0xa075,	// (0x000a3119) bg_popup_trans_pane

0xd721,	// (0x000a67c5) grid_image3_tool_bar_pane

0xd72b,	// (0x000a67cf) bg_popup_trans_pane_g1

0xacba,	// (0x000a3d5e) bg_popup_trans_pane_g2

0xd733,	// (0x000a67d7) bg_popup_trans_pane_g3

0xd73b,	// (0x000a67df) bg_popup_trans_pane_g4

0xd743,	// (0x000a67e7) bg_popup_trans_pane_g5

0xd74b,	// (0x000a67ef) bg_popup_trans_pane_g6

0xd753,	// (0x000a67f7) bg_popup_trans_pane_g7

0xd75b,	// (0x000a67ff) bg_popup_trans_pane_g8

0xac9a,	// (0x000a3d3e) bg_popup_trans_pane_g9

0x0008,

0x07aa,	// (0x0009984e) bg_popup_trans_pane_g

0xd763,	// (0x000a6807) cell_image3_tool_bar_pane_ParamLimits

0xd763,	// (0x000a6807) cell_image3_tool_bar_pane

0xcd01,	// (0x000a5da5) cell_image3_tool_bar_pane_g1

0xa075,	// (0x000a3119) bg_popup_trans_pane_cp1

0xd777,	// (0x000a681b) popup_image3_note_pane_t1

0xd785,	// (0x000a6829) popup_image3_note_pane_t2

0xd793,	// (0x000a6837) popup_image3_note_pane_t3

0x0002,

0x07bd,	// (0x00099861) popup_image3_note_pane_t

0xd7a1,	// (0x000a6845) popup_image3_note_pane_t3_copy1

0x66de,	// (0x0009f782) bg_myfav_hc_instruction_pane_ParamLimits

0x66de,	// (0x0009f782) bg_myfav_hc_instruction_pane

0x66f6,	// (0x0009f79a) cell_myfav_contact_pane_ParamLimits

0x66f6,	// (0x0009f79a) cell_myfav_contact_pane

0x6710,	// (0x0009f7b4) cell_myfav_contact_pane_cp1_ParamLimits

0x6710,	// (0x0009f7b4) cell_myfav_contact_pane_cp1

0x6728,	// (0x0009f7cc) cell_myfav_contact_pane_cp2_ParamLimits

0x6728,	// (0x0009f7cc) cell_myfav_contact_pane_cp2

0x6740,	// (0x0009f7e4) cell_myfav_contact_pane_cp3_ParamLimits

0x6740,	// (0x0009f7e4) cell_myfav_contact_pane_cp3

0x6757,	// (0x0009f7fb) cell_myfav_contact_pane_cp4_ParamLimits

0x6757,	// (0x0009f7fb) cell_myfav_contact_pane_cp4

0x676d,	// (0x0009f811) cell_myfav_contact_pane_cp5_ParamLimits

0x676d,	// (0x0009f811) cell_myfav_contact_pane_cp5

0x6781,	// (0x0009f825) cell_myfav_contact_pane_cp6_ParamLimits

0x6781,	// (0x0009f825) cell_myfav_contact_pane_cp6

0x6795,	// (0x0009f839) cell_myfav_contact_pane_cp7_ParamLimits

0x6795,	// (0x0009f839) cell_myfav_contact_pane_cp7

0xd7af,	// (0x000a6853) listscroll_gen_pane_cp05

0x67ad,	// (0x0009f851) main_myfav_hc_pane_g1_ParamLimits

0x67ad,	// (0x0009f851) main_myfav_hc_pane_g1

0x67c3,	// (0x0009f867) main_myfav_hc_pane_g2_ParamLimits

0x67c3,	// (0x0009f867) main_myfav_hc_pane_g2

0x0002,

0xf706,	// (0x000a87aa) main_myfav_hc_pane_g_ParamLimits

0xf706,	// (0x000a87aa) main_myfav_hc_pane_g

0x67f3,	// (0x0009f897) main_myfav_hc_pane_t1_ParamLimits

0x67f3,	// (0x0009f897) main_myfav_hc_pane_t1

0xd7b8,	// (0x000a685c) main_myfav_hc_pane_t2_ParamLimits

0xd7b8,	// (0x000a685c) main_myfav_hc_pane_t2

0xd7ca,	// (0x000a686e) main_myfav_hc_pane_t3_ParamLimits

0xd7ca,	// (0x000a686e) main_myfav_hc_pane_t3

0x680a,	// (0x0009f8ae) main_myfav_hc_pane_t4_ParamLimits

0x680a,	// (0x0009f8ae) main_myfav_hc_pane_t4

0x0004,

0xf70d,	// (0x000a87b1) main_myfav_hc_pane_t_ParamLimits

0xf70d,	// (0x000a87b1) main_myfav_hc_pane_t

0xcd01,	// (0x000a5da5) bg_myfav_hc_instruction_pane_g1

0xd7dc,	// (0x000a6880) cell_myfav_contact_pane_g1_ParamLimits

0xd7dc,	// (0x000a6880) cell_myfav_contact_pane_g1

0xd7dc,	// (0x000a6880) cell_myfav_contact_pane_g2_ParamLimits

0xd7dc,	// (0x000a6880) cell_myfav_contact_pane_g2

0xd7e8,	// (0x000a688c) cell_myfav_contact_pane_g3_ParamLimits

0xd7e8,	// (0x000a688c) cell_myfav_contact_pane_g3

0xcfb4,	// (0x000a6058) cell_myfav_contact_pane_g4_ParamLimits

0xcfb4,	// (0x000a6058) cell_myfav_contact_pane_g4

0xd7f5,	// (0x000a6899) cell_myfav_contact_pane_g5_ParamLimits

0xd7f5,	// (0x000a6899) cell_myfav_contact_pane_g5

0x0004,

0x07d6,	// (0x0009987a) cell_myfav_contact_pane_g_ParamLimits

0x07d6,	// (0x0009987a) cell_myfav_contact_pane_g

0x67db,	// (0x0009f87f) main_myfav_hc_pane_g3_ParamLimits

0x67db,	// (0x0009f87f) main_myfav_hc_pane_g3

0x101d,	// (0x0009a0c1) popup_adpt_find_window

0x6834,	// (0x0009f8d8) afind_page_pane_ParamLimits

0x6834,	// (0x0009f8d8) afind_page_pane

0x6841,	// (0x0009f8e5) aid_size_cell_afind_ParamLimits

0x6841,	// (0x0009f8e5) aid_size_cell_afind

0x685b,	// (0x0009f8ff) bg_popup_sub_pane_cp09_ParamLimits

0x685b,	// (0x0009f8ff) bg_popup_sub_pane_cp09

0x6868,	// (0x0009f90c) find_pane_cp01_ParamLimits

0x6868,	// (0x0009f90c) find_pane_cp01

0xd801,	// (0x000a68a5) grid_afind_control_pane_ParamLimits

0xd801,	// (0x000a68a5) grid_afind_control_pane

0x6875,	// (0x0009f919) grid_afind_pane_ParamLimits

0x6875,	// (0x0009f919) grid_afind_pane

0x688f,	// (0x0009f933) cell_afind_pane_ParamLimits

0x688f,	// (0x0009f933) cell_afind_pane

0xcd01,	// (0x000a5da5) afind_page_pane_g1

0x68d7,	// (0x0009f97b) afind_page_pane_g2

0x68e0,	// (0x0009f984) afind_page_pane_g3

0x0002,

0xf718,	// (0x000a87bc) afind_page_pane_g

0x68e9,	// (0x0009f98d) afind_page_pane_t1

0xd815,	// (0x000a68b9) cell_afind_grid_control_pane_ParamLimits

0xd815,	// (0x000a68b9) cell_afind_grid_control_pane

0xd60c,	// (0x000a66b0) bg_button_pane_cp69_ParamLimits

0xd60c,	// (0x000a66b0) bg_button_pane_cp69

0x6909,	// (0x0009f9ad) cell_afind_pane_g1_ParamLimits

0x6909,	// (0x0009f9ad) cell_afind_pane_g1

0x6916,	// (0x0009f9ba) cell_afind_pane_t1_ParamLimits

0x6916,	// (0x0009f9ba) cell_afind_pane_t1

0xaa75,	// (0x000a3b19) bg_button_pane_cp72

0xd824,	// (0x000a68c8) cell_afind_grid_control_pane_g1

0x3e93,	// (0x0009cf37) aid_image_placing_area_ParamLimits

0x3e93,	// (0x0009cf37) aid_image_placing_area

0xd2da,	// (0x000a637e) field_vitu_entry_pane_g1_ParamLimits

0xd2da,	// (0x000a637e) field_vitu_entry_pane_g1

0xd2e6,	// (0x000a638a) field_vitu_entry_pane_g2_ParamLimits

0xd2e6,	// (0x000a638a) field_vitu_entry_pane_g2

0x0001,

0x0692,	// (0x00099736) field_vitu_entry_pane_g_ParamLimits

0x0692,	// (0x00099736) field_vitu_entry_pane_g

0x5a10,	// (0x0009eab4) cell_vitu_itu_pane_g1_ParamLimits

0x5a52,	// (0x0009eaf6) cell_vitu_itu_pane_t3_ParamLimits

0x5a52,	// (0x0009eaf6) cell_vitu_itu_pane_t3

0xd5bc,	// (0x000a6660) mp4_progress_pane_t1_ParamLimits

0xd5d5,	// (0x000a6679) mp4_progress_pane_t2_ParamLimits

0x0727,	// (0x000997cb) mp4_progress_pane_t_ParamLimits

0xd5ee,	// (0x000a6692) mup_progress_pane_cp04_ParamLimits

0x681e,	// (0x0009f8c2) main_myfav_hc_pane_t5_ParamLimits

0x681e,	// (0x0009f8c2) main_myfav_hc_pane_t5

0x0d7b,	// (0x00099e1f) aid_zoom_text_primary

0x101d,	// (0x0009a0c1) popup_adpt_find_window_ParamLimits

0x431b,	// (0x0009d3bf) main_cam_set_pane

0x6264,	// (0x0009f308) cam4_zoom_pane_ParamLimits

0x6264,	// (0x0009f308) cam4_zoom_pane

0x6928,	// (0x0009f9cc) main_cam_set_pane_g1_ParamLimits

0x6928,	// (0x0009f9cc) main_cam_set_pane_g1

0x6936,	// (0x0009f9da) main_cam_set_pane_g2_ParamLimits

0x6936,	// (0x0009f9da) main_cam_set_pane_g2

0x0001,

0xf71f,	// (0x000a87c3) main_cam_set_pane_g_ParamLimits

0xf71f,	// (0x000a87c3) main_cam_set_pane_g

0x6942,	// (0x0009f9e6) main_cam_set_pane_t1_ParamLimits

0x6942,	// (0x0009f9e6) main_cam_set_pane_t1

0x695e,	// (0x0009fa02) main_cset_listscroll_pane_ParamLimits

0x695e,	// (0x0009fa02) main_cset_listscroll_pane

0x6989,	// (0x0009fa2d) main_cset_slider_pane_ParamLimits

0x6989,	// (0x0009fa2d) main_cset_slider_pane

0xd835,	// (0x000a68d9) main_cset_list_pane_ParamLimits

0xd835,	// (0x000a68d9) main_cset_list_pane

0xd845,	// (0x000a68e9) scroll_pane_cp028

0x69a8,	// (0x0009fa4c) aid_area_touch_slider

0x69c4,	// (0x0009fa68) cset_slider_pane

0x69ee,	// (0x0009fa92) main_cset_slider_pane_g1

0x6a03,	// (0x0009faa7) main_cset_slider_pane_g2

0x0011,

0xf724,	// (0x000a87c8) main_cset_slider_pane_g

0xd87e,	// (0x000a6922) main_cset_slider_pane_t1

0x6ac9,	// (0x0009fb6d) main_cset_slider_pane_t2

0x6ae3,	// (0x0009fb87) main_cset_slider_pane_t3

0x6afd,	// (0x0009fba1) main_cset_slider_pane_t4

0x6b1b,	// (0x0009fbbf) main_cset_slider_pane_t5

0x6b39,	// (0x0009fbdd) main_cset_slider_pane_t6

0x6b50,	// (0x0009fbf4) main_cset_slider_pane_t7

0x000e,

0xf749,	// (0x000a87ed) main_cset_slider_pane_t

0x6c5e,	// (0x0009fd02) cset_list_set_pane_ParamLimits

0x6c5e,	// (0x0009fd02) cset_list_set_pane

0x6c77,	// (0x0009fd1b) aid_position_infowindow_above

0x6c7f,	// (0x0009fd23) aid_position_infowindow_below

0x6c87,	// (0x0009fd2b) cset_list_set_pane_g1_ParamLimits

0x6c87,	// (0x0009fd2b) cset_list_set_pane_g1

0x6c93,	// (0x0009fd37) cset_list_set_pane_g3_ParamLimits

0x6c93,	// (0x0009fd37) cset_list_set_pane_g3

0x0001,

0xf768,	// (0x000a880c) cset_list_set_pane_g_ParamLimits

0xf768,	// (0x000a880c) cset_list_set_pane_g

0x6ca2,	// (0x0009fd46) cset_list_set_pane_t1_ParamLimits

0x6ca2,	// (0x0009fd46) cset_list_set_pane_t1

0xab6b,	// (0x000a3c0f) list_highlight_pane_cp021_ParamLimits

0xab6b,	// (0x000a3c0f) list_highlight_pane_cp021

0xb5d8,	// (0x000a467c) cset_slider_pane_g1

0xb5ea,	// (0x000a468e) cset_slider_pane_g2

0xb5e1,	// (0x000a4685) cset_slider_pane_g3

0x0002,

0x0836,	// (0x000998da) cset_slider_pane_g

0x6cb7,	// (0x0009fd5b) aid_area_touch_cam4_zoom

0x6cbf,	// (0x0009fd63) cam4_zoom_cont_pane

0x6cc7,	// (0x0009fd6b) cam4_zoom_pane_g1

0x6ccf,	// (0x0009fd73) cam4_zoom_pane_g2

0x6cd7,	// (0x0009fd7b) cam4_zoom_pane_g3

0x0002,

0xf76d,	// (0x000a8811) cam4_zoom_pane_g

0x6cdf,	// (0x0009fd83) cam4_zoom_cont_pane_g1

0x6ce8,	// (0x0009fd8c) cam4_zoom_cont_pane_g2

0x6cf1,	// (0x0009fd95) cam4_zoom_cont_pane_g3

0x0002,

0xf774,	// (0x000a8818) cam4_zoom_cont_pane_g

0x611f,	// (0x0009f1c3) call4_image_pane_ParamLimits

0x611f,	// (0x0009f1c3) call4_image_pane

0xd618,	// (0x000a66bc) call4_windows_conf_pane_ParamLimits

0xd655,	// (0x000a66f9) popup_call4_audio_in_window_ParamLimits

0xd655,	// (0x000a66f9) popup_call4_audio_in_window

0xa075,	// (0x000a3119) bg_popup_call2_act_pane_cp02

0xd69e,	// (0x000a6742) call4_list_conf_pane

0xcd01,	// (0x000a5da5) call4_image_pane_g1

0xcd01,	// (0x000a5da5) call4_image_pane_g2

0x0001,

0x0553,	// (0x000995f7) call4_image_pane_g

0xd936,	// (0x000a69da) list_single_graphic_popup_conf4_pane_ParamLimits

0xd936,	// (0x000a69da) list_single_graphic_popup_conf4_pane

0xa075,	// (0x000a3119) list_highlight_pane_cp022

0xd949,	// (0x000a69ed) list_single_graphic_popup_conf4_pane_g1

0xb1d4,	// (0x000a4278) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf77b,	// (0x000a881f) list_single_graphic_popup_conf4_pane_g

0xd951,	// (0x000a69f5) list_single_graphic_popup_conf4_pane_t1

0x20d6,	// (0x0009b17a) popup_vtel_slider_window_ParamLimits

0x20d6,	// (0x0009b17a) popup_vtel_slider_window

0xd5fa,	// (0x000a669e) dialer2_ne_pane_t2_ParamLimits

0xd5fa,	// (0x000a669e) dialer2_ne_pane_t2

0x0001,

0xf68f,	// (0x000a8733) dialer2_ne_pane_t_ParamLimits

0xf68f,	// (0x000a8733) dialer2_ne_pane_t

0xab6b,	// (0x000a3c0f) bg_popup_sub_pane_cp010_ParamLimits

0xab6b,	// (0x000a3c0f) bg_popup_sub_pane_cp010

0x6cfa,	// (0x0009fd9e) popup_vtel_slider_window_g1_ParamLimits

0x6cfa,	// (0x0009fd9e) popup_vtel_slider_window_g1

0x6d06,	// (0x0009fdaa) popup_vtel_slider_window_g2_ParamLimits

0x6d06,	// (0x0009fdaa) popup_vtel_slider_window_g2

0x0003,

0xf780,	// (0x000a8824) popup_vtel_slider_window_g_ParamLimits

0xf780,	// (0x000a8824) popup_vtel_slider_window_g

0x6d4e,	// (0x0009fdf2) vtel_slider_pane_ParamLimits

0x6d4e,	// (0x0009fdf2) vtel_slider_pane

0x6d5d,	// (0x0009fe01) vtel_slider_pane_g1_ParamLimits

0x6d5d,	// (0x0009fe01) vtel_slider_pane_g1

0x6d6a,	// (0x0009fe0e) vtel_slider_pane_g2_ParamLimits

0x6d6a,	// (0x0009fe0e) vtel_slider_pane_g2

0x6d77,	// (0x0009fe1b) vtel_slider_pane_g3_ParamLimits

0x6d77,	// (0x0009fe1b) vtel_slider_pane_g3

0x6d5d,	// (0x0009fe01) vtel_slider_pane_g4_ParamLimits

0x6d5d,	// (0x0009fe01) vtel_slider_pane_g4

0x6d84,	// (0x0009fe28) vtel_slider_pane_g5_ParamLimits

0x6d84,	// (0x0009fe28) vtel_slider_pane_g5

0x0004,

0xf789,	// (0x000a882d) vtel_slider_pane_g_ParamLimits

0xf789,	// (0x000a882d) vtel_slider_pane_g

0x431b,	// (0x0009d3bf) main_gallery2_pane

0x64bc,	// (0x0009f560) aid_size_row_itut2_dropdow_list_ParamLimits

0x64bc,	// (0x0009f560) aid_size_row_itut2_dropdow_list

0x652a,	// (0x0009f5ce) grid_vitu2_function_top_pane_ParamLimits

0x652a,	// (0x0009f5ce) grid_vitu2_function_top_pane

0x6584,	// (0x0009f628) popup_vitu2_dropdown_list_window_ParamLimits

0x6584,	// (0x0009f628) popup_vitu2_dropdown_list_window

0x65a4,	// (0x0009f648) popup_vitu2_match_list_window

0x6d9f,	// (0x0009fe43) cell_vitu2_function_top_pane_ParamLimits

0x6d9f,	// (0x0009fe43) cell_vitu2_function_top_pane

0x6db9,	// (0x0009fe5d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6db9,	// (0x0009fe5d) cell_vitu2_function_top_pane_cp01

0x6dd5,	// (0x0009fe79) cell_vitu2_function_top_wide_pane_ParamLimits

0x6dd5,	// (0x0009fe79) cell_vitu2_function_top_wide_pane

0x431b,	// (0x0009d3bf) bg_button_pane_cp012

0x6df1,	// (0x0009fe95) cell_vitu2_function_top_pane_g1

0x6e05,	// (0x0009fea9) bg_button_pane_cp013_ParamLimits

0x6e05,	// (0x0009fea9) bg_button_pane_cp013

0x6e21,	// (0x0009fec5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e21,	// (0x0009fec5) cell_vitu2_function_top_wide_pane_g1

0x1114,	// (0x0009a1b8) bg_popup_sub_pane_cp20

0x6e39,	// (0x0009fedd) list_vitu2_match_list_pane

0xd72b,	// (0x000a67cf) bg_popup_sub_pane_cp20_g1

0xd733,	// (0x000a67d7) bg_popup_sub_pane_cp20_g2

0xacba,	// (0x000a3d5e) bg_popup_sub_pane_cp20_g3

0xd73b,	// (0x000a67df) bg_popup_sub_pane_cp20_g4

0xac9a,	// (0x000a3d3e) bg_popup_sub_pane_cp20_g5

0xd967,	// (0x000a6a0b) bg_popup_sub_pane_cp20_g6

0xd74b,	// (0x000a67ef) bg_popup_sub_pane_cp20_g7

0xd753,	// (0x000a67f7) bg_popup_sub_pane_cp20_g8

0xd75b,	// (0x000a67ff) bg_popup_sub_pane_cp20_g9

0x0008,

0xf794,	// (0x000a8838) bg_popup_sub_pane_cp20_g

0x6e51,	// (0x0009fef5) list_vitu2_match_list_item_pane_ParamLimits

0x6e51,	// (0x0009fef5) list_vitu2_match_list_item_pane

0x6e63,	// (0x0009ff07) list_vitu2_match_list_item_pane_t1

0x112e,	// (0x0009a1d2) bg_popup_sub_pane_cp21

0x6eb9,	// (0x0009ff5d) grid_vitu2_dropdown_list_pane

0x6ec1,	// (0x0009ff65) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ec1,	// (0x0009ff65) cell_vitu2_dropdown_list_char_pane

0x6ee2,	// (0x0009ff86) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ee2,	// (0x0009ff86) cell_vitu2_dropdown_list_ctrl_pane

0xd96f,	// (0x000a6a13) cell_vitu2_dropdown_list_char_pane_g1

0xd978,	// (0x000a6a1c) cell_vitu2_dropdown_list_char_pane_g2

0xd981,	// (0x000a6a25) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf7b1,	// (0x000a8855) cell_vitu2_dropdown_list_char_pane_g

0x6f0e,	// (0x0009ffb2) cell_vitu2_dropdown_list_char_pane_t1

0x6f1c,	// (0x0009ffc0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f1c,	// (0x0009ffc0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f2c,	// (0x0009ffd0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f2c,	// (0x0009ffd0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f3d,	// (0x0009ffe1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f3d,	// (0x0009ffe1) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f4d,	// (0x0009fff1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f4d,	// (0x0009fff1) cell_vitu2_dropdown_list_ctrl_pane_g4

0x62f8,	// (0x0009f39c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x62f8,	// (0x0009f39c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf7b8,	// (0x000a885c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf7b8,	// (0x000a885c) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f69,	// (0x000a000d) aid_size_cell_gallery2_ParamLimits

0x6f69,	// (0x000a000d) aid_size_cell_gallery2

0x6f83,	// (0x000a0027) grid_gallery2_pane_ParamLimits

0x6f83,	// (0x000a0027) grid_gallery2_pane

0x6f9a,	// (0x000a003e) scroll_pane_cp029_ParamLimits

0x6f9a,	// (0x000a003e) scroll_pane_cp029

0x6faa,	// (0x000a004e) cell_gallery2_pane_ParamLimits

0x6faa,	// (0x000a004e) cell_gallery2_pane

0xd99c,	// (0x000a6a40) cell_gallery2_pane_g2

0x6fff,	// (0x000a00a3) cell_gallery2_pane_g3

0xd9a4,	// (0x000a6a48) cell_gallery2_pane_g4

0xd9ac,	// (0x000a6a50) cell_gallery2_pane_g5

0xaa23,	// (0x000a3ac7) grid_highlight_pane_cp10

0x65a4,	// (0x0009f648) popup_vitu2_match_list_window_ParamLimits

0x65b6,	// (0x0009f65a) popup_vitu2_query_window_ParamLimits

0x65b6,	// (0x0009f65a) popup_vitu2_query_window

0x112e,	// (0x0009a1d2) bg_vitu2_candi_button_pane

0xd96f,	// (0x000a6a13) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd978,	// (0x000a6a1c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd981,	// (0x000a6a25) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7007,	// (0x000a00ab) bg_button_pane_cp015

0x7019,	// (0x000a00bd) bg_button_pane_cp016

0x702c,	// (0x000a00d0) bg_button_pane_cp017

0xc8ed,	// (0x000a5991) bg_popup_sub_pane_cp22

0xd9b4,	// (0x000a6a58) popup_vitu2_query_window_g1

0x7071,	// (0x000a0115) popup_vitu2_query_window_g2

0x0002,

0xf7c3,	// (0x000a8867) popup_vitu2_query_window_g

0x708e,	// (0x000a0132) popup_vitu2_query_window_t1_ParamLimits

0x708e,	// (0x000a0132) popup_vitu2_query_window_t1

0x70c1,	// (0x000a0165) popup_vitu2_query_window_t2_ParamLimits

0x70c1,	// (0x000a0165) popup_vitu2_query_window_t2

0x70d3,	// (0x000a0177) popup_vitu2_query_window_t3_ParamLimits

0x70d3,	// (0x000a0177) popup_vitu2_query_window_t3

0x70fb,	// (0x000a019f) popup_vitu2_query_window_t4_ParamLimits

0x70fb,	// (0x000a019f) popup_vitu2_query_window_t4

0x711c,	// (0x000a01c0) popup_vitu2_query_window_t5_ParamLimits

0x711c,	// (0x000a01c0) popup_vitu2_query_window_t5

0x0006,

0xf7ca,	// (0x000a886e) popup_vitu2_query_window_t_ParamLimits

0xf7ca,	// (0x000a886e) popup_vitu2_query_window_t

0xd82d,	// (0x000a68d1) main_cset_text_pane

0x69a8,	// (0x0009fa4c) aid_area_touch_slider_ParamLimits

0x69c4,	// (0x0009fa68) cset_slider_pane_ParamLimits

0x69ee,	// (0x0009fa92) main_cset_slider_pane_g1_ParamLimits

0x6a03,	// (0x0009faa7) main_cset_slider_pane_g2_ParamLimits

0xd84e,	// (0x000a68f2) main_cset_slider_pane_g3_ParamLimits

0xd84e,	// (0x000a68f2) main_cset_slider_pane_g3

0x6a18,	// (0x0009fabc) main_cset_slider_pane_g4_ParamLimits

0x6a18,	// (0x0009fabc) main_cset_slider_pane_g4

0x6a27,	// (0x0009facb) main_cset_slider_pane_g5_ParamLimits

0x6a27,	// (0x0009facb) main_cset_slider_pane_g5

0x6a35,	// (0x0009fad9) main_cset_slider_pane_g6_ParamLimits

0x6a35,	// (0x0009fad9) main_cset_slider_pane_g6

0xf724,	// (0x000a87c8) main_cset_slider_pane_g_ParamLimits

0xd87e,	// (0x000a6922) main_cset_slider_pane_t1_ParamLimits

0x6ac9,	// (0x0009fb6d) main_cset_slider_pane_t2_ParamLimits

0x6ae3,	// (0x0009fb87) main_cset_slider_pane_t3_ParamLimits

0x6afd,	// (0x0009fba1) main_cset_slider_pane_t4_ParamLimits

0x6b1b,	// (0x0009fbbf) main_cset_slider_pane_t5_ParamLimits

0x6b39,	// (0x0009fbdd) main_cset_slider_pane_t6_ParamLimits

0x6b50,	// (0x0009fbf4) main_cset_slider_pane_t7_ParamLimits

0x6b7e,	// (0x0009fc22) main_cset_slider_pane_t8_ParamLimits

0x6b7e,	// (0x0009fc22) main_cset_slider_pane_t8

0x6ba6,	// (0x0009fc4a) main_cset_slider_pane_t9_ParamLimits

0x6ba6,	// (0x0009fc4a) main_cset_slider_pane_t9

0x6bce,	// (0x0009fc72) main_cset_slider_pane_t10_ParamLimits

0x6bce,	// (0x0009fc72) main_cset_slider_pane_t10

0x6bf6,	// (0x0009fc9a) main_cset_slider_pane_t11_ParamLimits

0x6bf6,	// (0x0009fc9a) main_cset_slider_pane_t11

0x6c20,	// (0x0009fcc4) main_cset_slider_pane_t12_ParamLimits

0x6c20,	// (0x0009fcc4) main_cset_slider_pane_t12

0x6c3f,	// (0x0009fce3) main_cset_slider_pane_t13_ParamLimits

0x6c3f,	// (0x0009fce3) main_cset_slider_pane_t13

0xf749,	// (0x000a87ed) main_cset_slider_pane_t_ParamLimits

0xa075,	// (0x000a3119) bg_popup_sub_pane_cp011

0xd9c0,	// (0x000a6a64) main_cset_text_pane_g1

0xd9c8,	// (0x000a6a6c) main_cset_text_pane_t1

0xd9d6,	// (0x000a6a7a) main_cset_text_pane_t2

0xd9e4,	// (0x000a6a88) main_cset_text_pane_t3

0xd9f2,	// (0x000a6a96) main_cset_text_pane_t4

0xda00,	// (0x000a6aa4) main_cset_text_pane_t5

0xda0e,	// (0x000a6ab2) main_cset_text_pane_t6

0xda1c,	// (0x000a6ac0) main_cset_text_pane_t7

0x0006,

0x08a9,	// (0x0009994d) main_cset_text_pane_t

0x112e,	// (0x0009a1d2) main_cam4_burst_pane

0x112e,	// (0x0009a1d2) main_cam5_pane

0x68f7,	// (0x0009f99b) bg_button_pane_cp019

0x6900,	// (0x0009f9a4) bg_button_pane_cp020

0xd85a,	// (0x000a68fe) main_cset_slider_pane_g7_ParamLimits

0xd85a,	// (0x000a68fe) main_cset_slider_pane_g7

0xd866,	// (0x000a690a) main_cset_slider_pane_g8_ParamLimits

0xd866,	// (0x000a690a) main_cset_slider_pane_g8

0x6a49,	// (0x0009faed) main_cset_slider_pane_g9_ParamLimits

0x6a49,	// (0x0009faed) main_cset_slider_pane_g9

0x6a55,	// (0x0009faf9) main_cset_slider_pane_g10_ParamLimits

0x6a55,	// (0x0009faf9) main_cset_slider_pane_g10

0x6a61,	// (0x0009fb05) main_cset_slider_pane_g11_ParamLimits

0x6a61,	// (0x0009fb05) main_cset_slider_pane_g11

0x6a6d,	// (0x0009fb11) main_cset_slider_pane_g12_ParamLimits

0x6a6d,	// (0x0009fb11) main_cset_slider_pane_g12

0x6a79,	// (0x0009fb1d) main_cset_slider_pane_g13_ParamLimits

0x6a79,	// (0x0009fb1d) main_cset_slider_pane_g13

0x6a87,	// (0x0009fb2b) main_cset_slider_pane_g14_ParamLimits

0x6a87,	// (0x0009fb2b) main_cset_slider_pane_g14

0x6a95,	// (0x0009fb39) main_cset_slider_pane_g15_ParamLimits

0x6a95,	// (0x0009fb39) main_cset_slider_pane_g15

0xd8c4,	// (0x000a6968) main_cset_slider_pane_t14_ParamLimits

0xd8c4,	// (0x000a6968) main_cset_slider_pane_t14

0xd8fd,	// (0x000a69a1) main_cset_slider_pane_t15_ParamLimits

0xd8fd,	// (0x000a69a1) main_cset_slider_pane_t15

0x7193,	// (0x000a0237) aid_cam4_burst_size_cell_ParamLimits

0x7193,	// (0x000a0237) aid_cam4_burst_size_cell

0x71af,	// (0x000a0253) grid_cam4_burst_pane_ParamLimits

0x71af,	// (0x000a0253) grid_cam4_burst_pane

0x71df,	// (0x000a0283) linegrid_cam4_burst_pane_ParamLimits

0x71df,	// (0x000a0283) linegrid_cam4_burst_pane

0x71ff,	// (0x000a02a3) scroll_pane_cp30_ParamLimits

0x71ff,	// (0x000a02a3) scroll_pane_cp30

0x720b,	// (0x000a02af) cell_cam4_burst_pane_ParamLimits

0x720b,	// (0x000a02af) cell_cam4_burst_pane

0xda2a,	// (0x000a6ace) linegrid_cam4_burst_pane_g1_ParamLimits

0xda2a,	// (0x000a6ace) linegrid_cam4_burst_pane_g1

0x7247,	// (0x000a02eb) linegrid_cam4_burst_pane_g2_ParamLimits

0x7247,	// (0x000a02eb) linegrid_cam4_burst_pane_g2

0xda37,	// (0x000a6adb) linegrid_cam4_burst_pane_g3_ParamLimits

0xda37,	// (0x000a6adb) linegrid_cam4_burst_pane_g3

0x0002,

0xf7d9,	// (0x000a887d) linegrid_cam4_burst_pane_g_ParamLimits

0xf7d9,	// (0x000a887d) linegrid_cam4_burst_pane_g

0x7258,	// (0x000a02fc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7258,	// (0x000a02fc) linegrid_cam4_burst_pane_g3_copy1

0xda44,	// (0x000a6ae8) linegrid_cam4_burst_pane_g4_ParamLimits

0xda44,	// (0x000a6ae8) linegrid_cam4_burst_pane_g4

0x7272,	// (0x000a0316) linegrid_cam4_burst_pane_g5_ParamLimits

0x7272,	// (0x000a0316) linegrid_cam4_burst_pane_g5

0x7283,	// (0x000a0327) linegrid_cam4_burst_pane_g6_ParamLimits

0x7283,	// (0x000a0327) linegrid_cam4_burst_pane_g6

0xda51,	// (0x000a6af5) linegrid_cam4_burst_pane_g7_ParamLimits

0xda51,	// (0x000a6af5) linegrid_cam4_burst_pane_g7

0x7294,	// (0x000a0338) cell_cam4_burst_pane_g1

0xda76,	// (0x000a6b1a) main_cam5_pane_t1_ParamLimits

0xda76,	// (0x000a6b1a) main_cam5_pane_t1

0xda88,	// (0x000a6b2c) main_cam5_pane_t2_ParamLimits

0xda88,	// (0x000a6b2c) main_cam5_pane_t2

0xda9a,	// (0x000a6b3e) main_cam5_pane_t3_ParamLimits

0xda9a,	// (0x000a6b3e) main_cam5_pane_t3

0xdaac,	// (0x000a6b50) main_cam5_pane_t4_ParamLimits

0xdaac,	// (0x000a6b50) main_cam5_pane_t4

0xdac4,	// (0x000a6b68) main_cam5_pane_t5_ParamLimits

0xdac4,	// (0x000a6b68) main_cam5_pane_t5

0xdad8,	// (0x000a6b7c) main_cam5_pane_t6_ParamLimits

0xdad8,	// (0x000a6b7c) main_cam5_pane_t6

0xdaec,	// (0x000a6b90) main_cam5_pane_t7_ParamLimits

0xdaec,	// (0x000a6b90) main_cam5_pane_t7

0xdafe,	// (0x000a6ba2) main_cam5_pane_t8_ParamLimits

0xdafe,	// (0x000a6ba2) main_cam5_pane_t8

0xdb1a,	// (0x000a6bbe) main_cam5_pane_t9_ParamLimits

0xdb1a,	// (0x000a6bbe) main_cam5_pane_t9

0xdb2c,	// (0x000a6bd0) main_cam5_pane_t10_ParamLimits

0xdb2c,	// (0x000a6bd0) main_cam5_pane_t10

0xdb3e,	// (0x000a6be2) main_cam5_pane_t11_ParamLimits

0xdb3e,	// (0x000a6be2) main_cam5_pane_t11

0xdb50,	// (0x000a6bf4) main_cam5_pane_t12_ParamLimits

0xdb50,	// (0x000a6bf4) main_cam5_pane_t12

0xdb65,	// (0x000a6c09) main_cam5_pane_t13_ParamLimits

0xdb65,	// (0x000a6c09) main_cam5_pane_t13

0x000c,

0x08c4,	// (0x00099968) main_cam5_pane_t_ParamLimits

0x08c4,	// (0x00099968) main_cam5_pane_t

0x10d3,	// (0x0009a177) popup_scut_keymap_window_ParamLimits

0x10d3,	// (0x0009a177) popup_scut_keymap_window

0x72a7,	// (0x000a034b) aid_size_cell_brow_shortcut

0xaa23,	// (0x000a3ac7) bg_popup_window_pane_cp010

0x72b3,	// (0x000a0357) grid_scut_pane

0x72bf,	// (0x000a0363) cell_scut_pane_ParamLimits

0x72bf,	// (0x000a0363) cell_scut_pane

0x72d6,	// (0x000a037a) cell_scut_pane_g1

0xdb82,	// (0x000a6c26) cell_scut_pane_t1

0xdb91,	// (0x000a6c35) cell_scut_pane_t2

0x72df,	// (0x000a0383) cell_scut_pane_t3

0x0002,

0xf7e5,	// (0x000a8889) cell_scut_pane_t

0x507b,	// (0x0009e11f) main_mup3_pane_g8_ParamLimits

0x507b,	// (0x0009e11f) main_mup3_pane_g8

0x64ca,	// (0x0009f56e) area_vitu2_query_pane_ParamLimits

0x64ca,	// (0x0009f56e) area_vitu2_query_pane

0x703f,	// (0x000a00e3) input_focus_pane_cp08

0xdba0,	// (0x000a6c44) area_vitu2_query_pane_g1

0x72ed,	// (0x000a0391) area_vitu2_query_pane_g2

0x0001,

0xf7ec,	// (0x000a8890) area_vitu2_query_pane_g

0x72fe,	// (0x000a03a2) area_vitu2_query_pane_t1_ParamLimits

0x72fe,	// (0x000a03a2) area_vitu2_query_pane_t1

0x7312,	// (0x000a03b6) area_vitu2_query_pane_t2_ParamLimits

0x7312,	// (0x000a03b6) area_vitu2_query_pane_t2

0x7326,	// (0x000a03ca) area_vitu2_query_pane_t3_ParamLimits

0x7326,	// (0x000a03ca) area_vitu2_query_pane_t3

0x9cd0,	// (0x000a2d74) area_vitu2_query_pane_t4_ParamLimits

0x9cd0,	// (0x000a2d74) area_vitu2_query_pane_t4

0x9cf8,	// (0x000a2d9c) area_vitu2_query_pane_t5_ParamLimits

0x9cf8,	// (0x000a2d9c) area_vitu2_query_pane_t5

0x9d20,	// (0x000a2dc4) area_vitu2_query_pane_t6_ParamLimits

0x9d20,	// (0x000a2dc4) area_vitu2_query_pane_t6

0x0006,

0xf7f1,	// (0x000a8895) area_vitu2_query_pane_t_ParamLimits

0xf7f1,	// (0x000a8895) area_vitu2_query_pane_t

0x734e,	// (0x000a03f2) bg_button_pane_cp018

0x735c,	// (0x000a0400) bg_button_pane_cp021

0x7368,	// (0x000a040c) bg_button_pane_cp022

0x7379,	// (0x000a041d) input_focus_pane_cp09

0xb2e3,	// (0x000a4387) aid_size_touch_mv_arrow_left

0xb30e,	// (0x000a43b2) aid_size_touch_mv_arrow_right

0x6aad,	// (0x0009fb51) main_cset_slider_pane_g16_ParamLimits

0x6aad,	// (0x0009fb51) main_cset_slider_pane_g16

0x6abb,	// (0x0009fb5f) main_cset_slider_pane_g17_ParamLimits

0x6abb,	// (0x0009fb5f) main_cset_slider_pane_g17

0x7294,	// (0x000a0338) cell_cam4_burst_pane_g1_ParamLimits

0xa075,	// (0x000a3119) compa_mode_pane

0x6d12,	// (0x0009fdb6) popup_vtel_slider_window_g3_ParamLimits

0x6d12,	// (0x0009fdb6) popup_vtel_slider_window_g3

0x6d26,	// (0x0009fdca) popup_vtel_slider_window_g4_ParamLimits

0x6d26,	// (0x0009fdca) popup_vtel_slider_window_g4

0x6d3a,	// (0x0009fdde) popup_vtel_slider_window_t1_ParamLimits

0x6d3a,	// (0x0009fdde) popup_vtel_slider_window_t1

0x112e,	// (0x0009a1d2) main_cl_pane

0x43b5,	// (0x0009d459) popup_imed_adjust2_window_ParamLimits

0xc8ed,	// (0x000a5991) bg_tb_trans_pane_cp05_ParamLimits

0xd20f,	// (0x000a62b3) popup_imed_adjust2_window_g1_ParamLimits

0xd21e,	// (0x000a62c2) popup_imed_adjust2_window_g2_ParamLimits

0xd21e,	// (0x000a62c2) popup_imed_adjust2_window_g2

0xd22a,	// (0x000a62ce) popup_imed_adjust2_window_g3_ParamLimits

0xd22a,	// (0x000a62ce) popup_imed_adjust2_window_g3

0x0002,

0x0656,	// (0x000996fa) popup_imed_adjust2_window_g_ParamLimits

0x0656,	// (0x000996fa) popup_imed_adjust2_window_g

0xd236,	// (0x000a62da) popup_imed_adjust2_window_t1_ParamLimits

0xd24e,	// (0x000a62f2) slider_imed_adjust_pane_ParamLimits

0xd262,	// (0x000a6306) slider_imed_adjust_pane_g1_ParamLimits

0xd272,	// (0x000a6316) slider_imed_adjust_pane_g2_ParamLimits

0xd282,	// (0x000a6326) slider_imed_adjust_pane_g3_ParamLimits

0xd293,	// (0x000a6337) slider_imed_adjust_pane_g4_ParamLimits

0x065d,	// (0x00099701) slider_imed_adjust_pane_g_ParamLimits

0x620d,	// (0x0009f2b1) aid_touch_area_cam4_ParamLimits

0x620d,	// (0x0009f2b1) aid_touch_area_cam4

0x621d,	// (0x0009f2c1) battery_pane_cp01

0x62a4,	// (0x0009f348) main_camera4_pane_g6_ParamLimits

0x62a4,	// (0x0009f348) main_camera4_pane_g6

0x62c2,	// (0x0009f366) main_camera4_pane_t2_ParamLimits

0x62c2,	// (0x0009f366) main_camera4_pane_t2

0x0001,

0xf6c3,	// (0x000a8767) main_camera4_pane_t_ParamLimits

0xf6c3,	// (0x000a8767) main_camera4_pane_t

0x6351,	// (0x0009f3f5) aid_touch_area_vid4_ParamLimits

0x6351,	// (0x0009f3f5) aid_touch_area_vid4

0x6391,	// (0x0009f435) main_video4_pane_g5_ParamLimits

0x6391,	// (0x0009f435) main_video4_pane_g5

0x63b5,	// (0x0009f459) vid4_progress_pane_ParamLimits

0x63b5,	// (0x0009f459) vid4_progress_pane

0xd872,	// (0x000a6916) main_cset_slider_pane_g18_ParamLimits

0xd872,	// (0x000a6916) main_cset_slider_pane_g18

0xda5e,	// (0x000a6b02) cell_cam4_burst_pane_g2_ParamLimits

0xda5e,	// (0x000a6b02) cell_cam4_burst_pane_g2

0x0001,

0xf7e0,	// (0x000a8884) cell_cam4_burst_pane_g_ParamLimits

0xf7e0,	// (0x000a8884) cell_cam4_burst_pane_g

0x738a,	// (0x000a042e) bg_cl_pane_ParamLimits

0x738a,	// (0x000a042e) bg_cl_pane

0x7396,	// (0x000a043a) cl_header_pane_ParamLimits

0x7396,	// (0x000a043a) cl_header_pane

0x73a2,	// (0x000a0446) cl_listscroll_pane_ParamLimits

0x73a2,	// (0x000a0446) cl_listscroll_pane

0xdbac,	// (0x000a6c50) bg_cl_pane_g1

0xdbb4,	// (0x000a6c58) bg_cl_pane_g2

0xdbbc,	// (0x000a6c60) bg_cl_pane_g3

0xdbc4,	// (0x000a6c68) bg_cl_pane_g4

0xdbcc,	// (0x000a6c70) bg_cl_pane_g5

0xdbd4,	// (0x000a6c78) bg_cl_pane_g6

0xdbdc,	// (0x000a6c80) bg_cl_pane_g7

0xdbe4,	// (0x000a6c88) bg_cl_pane_g8

0xdbec,	// (0x000a6c90) bg_cl_pane_g9

0x0008,

0x08fa,	// (0x0009999e) bg_cl_pane_g

0x73ae,	// (0x000a0452) aid_height_cl_leading_ParamLimits

0x73ae,	// (0x000a0452) aid_height_cl_leading

0x73ba,	// (0x000a045e) aid_height_cl_text_ParamLimits

0x73ba,	// (0x000a045e) aid_height_cl_text

0xdde3,	// (0x000a6e87) bg_cl_header_pane_ParamLimits

0xdde3,	// (0x000a6e87) bg_cl_header_pane

0x73d2,	// (0x000a0476) cl_header_pane_g1_ParamLimits

0x73d2,	// (0x000a0476) cl_header_pane_g1

0x73df,	// (0x000a0483) cl_header_pane_t1_ParamLimits

0x73df,	// (0x000a0483) cl_header_pane_t1

0xdbf4,	// (0x000a6c98) cl_list_pane

0xd845,	// (0x000a68e9) hc_scroll_pane_cp01

0xac9a,	// (0x000a3d3e) bg_cl_header_pane_g1

0xd72b,	// (0x000a67cf) bg_cl_header_pane_g2

0xacba,	// (0x000a3d5e) bg_cl_header_pane_g3

0xd73b,	// (0x000a67df) bg_cl_header_pane_g4

0xd733,	// (0x000a67d7) bg_cl_header_pane_g5

0xd967,	// (0x000a6a0b) bg_cl_header_pane_g6

0xd753,	// (0x000a67f7) bg_cl_header_pane_g7

0xd75b,	// (0x000a67ff) bg_cl_header_pane_g8

0xd74b,	// (0x000a67ef) bg_cl_header_pane_g9

0x0008,

0xf800,	// (0x000a88a4) bg_cl_header_pane_g

0x73f1,	// (0x000a0495) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x73f1,	// (0x000a0495) hc_cl_list_double_graphic_heading_pane

0x7405,	// (0x000a04a9) hc_cl_list_single_graphic_pane_ParamLimits

0x7405,	// (0x000a04a9) hc_cl_list_single_graphic_pane

0x741f,	// (0x000a04c3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x741f,	// (0x000a04c3) hc_cl_list_single_graphic_pane_g1

0x742b,	// (0x000a04cf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x742b,	// (0x000a04cf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf813,	// (0x000a88b7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf813,	// (0x000a88b7) hc_cl_list_single_graphic_pane_g

0x743f,	// (0x000a04e3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x743f,	// (0x000a04e3) hc_cl_list_single_graphic_pane_t1

0x741f,	// (0x000a04c3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x741f,	// (0x000a04c3) hc_cl_list_double_graphic_heading_pane_g1

0x7454,	// (0x000a04f8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7454,	// (0x000a04f8) hc_cl_list_double_graphic_heading_pane_g2

0x7468,	// (0x000a050c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7468,	// (0x000a050c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf818,	// (0x000a88bc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf818,	// (0x000a88bc) hc_cl_list_double_graphic_heading_pane_g

0x747c,	// (0x000a0520) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x747c,	// (0x000a0520) hc_cl_list_double_graphic_heading_pane_t1

0x7491,	// (0x000a0535) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7491,	// (0x000a0535) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf81f,	// (0x000a88c3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf81f,	// (0x000a88c3) hc_cl_list_double_graphic_heading_pane_t

0x74ae,	// (0x000a0552) vid4_progress_pane_g1

0x74be,	// (0x000a0562) vid4_progress_pane_g2

0x74ce,	// (0x000a0572) vid4_progress_pane_g3

0x74e0,	// (0x000a0584) vid4_progress_pane_g4

0x0004,

0xf824,	// (0x000a88c8) vid4_progress_pane_g

0x74f8,	// (0x000a059c) vid4_progress_pane_t1

0x750e,	// (0x000a05b2) vid4_progress_pane_t2

0x0002,

0xf82f,	// (0x000a88d3) vid4_progress_pane_t

0x7539,	// (0x000a05dd) wait_bar_pane_cp07

0xcaf4,	// (0x000a5b98) blid_firmament_pane_ParamLimits

0xcb37,	// (0x000a5bdb) popup_blid_sat_info2_window_g1

0xcb5b,	// (0x000a5bff) popup_blid_sat_info2_window_t3

0xcb69,	// (0x000a5c0d) popup_blid_sat_info2_window_t4

0xcb77,	// (0x000a5c1b) popup_blid_sat_info2_window_t5

0xcb85,	// (0x000a5c29) popup_blid_sat_info2_window_t6

0xcb95,	// (0x000a5c39) popup_blid_sat_info2_window_t7

0xcba3,	// (0x000a5c47) popup_blid_sat_info2_window_t8

0xcbb1,	// (0x000a5c55) popup_blid_sat_info2_window_t9

0xcbbf,	// (0x000a5c63) popup_blid_sat_info2_window_t10

0xcc81,	// (0x000a5d25) aid_firma_cardinal_ParamLimits

0xcc95,	// (0x000a5d39) blid_firmament_pane_t1_ParamLimits

0xccac,	// (0x000a5d50) blid_firmament_pane_t2_ParamLimits

0xccc3,	// (0x000a5d67) blid_firmament_pane_t3_ParamLimits

0xccda,	// (0x000a5d7e) blid_firmament_pane_t4_ParamLimits

0x054a,	// (0x000995ee) blid_firmament_pane_t_ParamLimits

0xccf1,	// (0x000a5d95) blid_sat_info_pane_ParamLimits

0x431b,	// (0x0009d3bf) main_cam_set_pane_ParamLimits

0x5830,	// (0x0009e8d4) aid_size_cell_colour_35_ParamLimits

0x584a,	// (0x0009e8ee) aid_size_cell_colour_112_ParamLimits

0x5861,	// (0x0009e905) aid_size_cell_effect_ParamLimits

0xab6b,	// (0x000a3c0f) bg_tb_trans_pane_cp02_ParamLimits

0xafd0,	// (0x000a4074) heading_imed_pane_ParamLimits

0x587b,	// (0x0009e91f) listscroll_imed_pane_ParamLimits

0xbed3,	// (0x000a4f77) popup_call2_audio_first_window_g5_ParamLimits

0xbed3,	// (0x000a4f77) popup_call2_audio_first_window_g5

0x5f8a,	// (0x0009f02e) aid_size_touch_image3_arrow_left_ParamLimits

0x5f8a,	// (0x0009f02e) aid_size_touch_image3_arrow_left

0x5fa0,	// (0x0009f044) aid_size_touch_image3_arrow_right_ParamLimits

0x5fa0,	// (0x0009f044) aid_size_touch_image3_arrow_right

0x7523,	// (0x000a05c7) vid4_progress_pane_t3

0x5b1b,	// (0x0009ebbf) main_hwr_training_symbol_option_pane_ParamLimits

0x5b1b,	// (0x0009ebbf) main_hwr_training_symbol_option_pane

0xd4fc,	// (0x000a65a0) popup_hwr_training_preview_window_ParamLimits

0xd4fc,	// (0x000a65a0) popup_hwr_training_preview_window

0x5b7c,	// (0x0009ec20) hwr_training_navi_pane_g5_ParamLimits

0x5b7c,	// (0x0009ec20) hwr_training_navi_pane_g5

0xd719,	// (0x000a67bd) popup_char_count_window

0x1114,	// (0x0009a1b8) bg_popup_sub_pane_cp20_ParamLimits

0x6e39,	// (0x0009fedd) list_vitu2_match_list_pane_ParamLimits

0x6e45,	// (0x0009fee9) vitu2_page_scroll_pane_ParamLimits

0x6e45,	// (0x0009fee9) vitu2_page_scroll_pane

0xdbfd,	// (0x000a6ca1) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbfd,	// (0x000a6ca1) list_single_hwr_training_symbol_option_pane

0xdc10,	// (0x000a6cb4) list_single_hwr_training_symbol_option_pane_g1

0xdc18,	// (0x000a6cbc) list_single_hwr_training_symbol_option_pane_t1

0xdc2e,	// (0x000a6cd2) bg_button_pane_cp023

0xdc37,	// (0x000a6cdb) bg_button_pane_cp024

0x7582,	// (0x000a0626) vitu2_page_scroll_pane_g1

0x758a,	// (0x000a062e) vitu2_page_scroll_pane_g2

0x0001,

0xf836,	// (0x000a88da) vitu2_page_scroll_pane_g

0x7592,	// (0x000a0636) vitu2_page_scroll_pane_t1

0xcd2a,	// (0x000a5dce) popup_char_count_window_g1

0xdc6a,	// (0x000a6d0e) popup_char_count_window_g2

0xdc73,	// (0x000a6d17) popup_char_count_window_g3

0x0002,

0xf83b,	// (0x000a88df) popup_char_count_window_g

0xdc7c,	// (0x000a6d20) popup_char_count_window_t1

0x112e,	// (0x0009a1d2) main_vded2_pane

0xd1fb,	// (0x000a629f) aid_size_cell_imed_line

0xd205,	// (0x000a62a9) grid_imed_line_width_pane

0x6421,	// (0x0009f4c5) vid4_indicators_pane_g4

0xdc8a,	// (0x000a6d2e) cell_imed_line_width_pane_ParamLimits

0xdc8a,	// (0x000a6d2e) cell_imed_line_width_pane

0xdc9e,	// (0x000a6d42) cell_imed_line_width_pane_g1

0xdc26,	// (0x000a6cca) cell_imed_line_width_pane_g2

0x0001,

0xf842,	// (0x000a88e6) cell_imed_line_width_pane_g

0x75a1,	// (0x000a0645) main_vded2_pane_g1_ParamLimits

0x75a1,	// (0x000a0645) main_vded2_pane_g1

0x75ae,	// (0x000a0652) main_vded2_pane_g2_ParamLimits

0x75ae,	// (0x000a0652) main_vded2_pane_g2

0x0001,

0xf847,	// (0x000a88eb) main_vded2_pane_g_ParamLimits

0xf847,	// (0x000a88eb) main_vded2_pane_g

0x75bc,	// (0x000a0660) vded2_slider_pane_ParamLimits

0x75bc,	// (0x000a0660) vded2_slider_pane

0x75c9,	// (0x000a066d) aid_size_touch_vded2_end

0x75d3,	// (0x000a0677) aid_size_touch_vded2_playhead

0xdca7,	// (0x000a6d4b) aid_size_touch_vded2_start

0xdcaf,	// (0x000a6d53) vded2_slider_bg_pane

0xdcb8,	// (0x000a6d5c) vded2_slider_pane_g1

0xdcc1,	// (0x000a6d65) vded2_slider_pane_g2

0x75db,	// (0x000a067f) vded2_slider_pane_g3

0x0002,

0xf84c,	// (0x000a88f0) vded2_slider_pane_g

0xdcc9,	// (0x000a6d6d) vded2_slider_bg_pane_g1

0xdcd2,	// (0x000a6d76) vded2_slider_bg_pane_g2

0xdcdb,	// (0x000a6d7f) vded2_slider_bg_pane_g3

0x0002,

0x0960,	// (0x00099a04) vded2_slider_bg_pane_g

0x3bfe,	// (0x0009cca2) aid_postcard_touch_down_pane_ParamLimits

0x3bfe,	// (0x0009cca2) aid_postcard_touch_down_pane

0x3c0e,	// (0x0009ccb2) aid_postcard_touch_up_pane_ParamLimits

0x3c0e,	// (0x0009ccb2) aid_postcard_touch_up_pane

0x112e,	// (0x0009a1d2) main_blid2_pane

0x4344,	// (0x0009d3e8) popup_blid2_search_window

0xa075,	// (0x000a3119) blid2_gps_pane

0xa075,	// (0x000a3119) blid2_navig_pane

0xa075,	// (0x000a3119) blid2_search_pane

0xa075,	// (0x000a3119) blid2_tripm_pane

0x75e4,	// (0x000a0688) blid2_search_pane_g1_ParamLimits

0x75e4,	// (0x000a0688) blid2_search_pane_g1

0x75f4,	// (0x000a0698) blid2_search_pane_t1_ParamLimits

0x75f4,	// (0x000a0698) blid2_search_pane_t1

0x7606,	// (0x000a06aa) aid_size_cell_blid2_gps_ParamLimits

0x7606,	// (0x000a06aa) aid_size_cell_blid2_gps

0x7616,	// (0x000a06ba) blid2_gps_pane_g1_ParamLimits

0x7616,	// (0x000a06ba) blid2_gps_pane_g1

0x7622,	// (0x000a06c6) grid_blid2_satellite_pane_ParamLimits

0x7622,	// (0x000a06c6) grid_blid2_satellite_pane

0x7632,	// (0x000a06d6) blid2_navig_pane_g1_ParamLimits

0x7632,	// (0x000a06d6) blid2_navig_pane_g1

0x763e,	// (0x000a06e2) blid2_navig_pane_t1_ParamLimits

0x763e,	// (0x000a06e2) blid2_navig_pane_t1

0x7650,	// (0x000a06f4) blid2_navig_pane_t2_ParamLimits

0x7650,	// (0x000a06f4) blid2_navig_pane_t2

0x0001,

0xf853,	// (0x000a88f7) blid2_navig_pane_t_ParamLimits

0xf853,	// (0x000a88f7) blid2_navig_pane_t

0x7662,	// (0x000a0706) blid2_navig_ring_pane_ParamLimits

0x7662,	// (0x000a0706) blid2_navig_ring_pane

0x7672,	// (0x000a0716) blid2_speed_pane_ParamLimits

0x7672,	// (0x000a0716) blid2_speed_pane

0x767e,	// (0x000a0722) blid2_tripm_pane_g1_ParamLimits

0x767e,	// (0x000a0722) blid2_tripm_pane_g1

0x768e,	// (0x000a0732) blid2_tripm_pane_g2_ParamLimits

0x768e,	// (0x000a0732) blid2_tripm_pane_g2

0x769a,	// (0x000a073e) blid2_tripm_pane_g3_ParamLimits

0x769a,	// (0x000a073e) blid2_tripm_pane_g3

0x76a6,	// (0x000a074a) blid2_tripm_pane_g4_ParamLimits

0x76a6,	// (0x000a074a) blid2_tripm_pane_g4

0x76b2,	// (0x000a0756) blid2_tripm_pane_g5_ParamLimits

0x76b2,	// (0x000a0756) blid2_tripm_pane_g5

0x0005,

0xf858,	// (0x000a88fc) blid2_tripm_pane_g_ParamLimits

0xf858,	// (0x000a88fc) blid2_tripm_pane_g

0x76ce,	// (0x000a0772) blid2_tripm_pane_t1_ParamLimits

0x76ce,	// (0x000a0772) blid2_tripm_pane_t1

0x76e2,	// (0x000a0786) blid2_tripm_pane_t2_ParamLimits

0x76e2,	// (0x000a0786) blid2_tripm_pane_t2

0x76f4,	// (0x000a0798) blid2_tripm_pane_t3_ParamLimits

0x76f4,	// (0x000a0798) blid2_tripm_pane_t3

0x0003,

0xf865,	// (0x000a8909) blid2_tripm_pane_t_ParamLimits

0xf865,	// (0x000a8909) blid2_tripm_pane_t

0x7726,	// (0x000a07ca) cell_blid2_satellite_pane_ParamLimits

0x7726,	// (0x000a07ca) cell_blid2_satellite_pane

0x7740,	// (0x000a07e4) cell_blid2_satellite_pane_g1

0xdce4,	// (0x000a6d88) cell_blid2_satellite_pane_t1

0xcd01,	// (0x000a5da5) blid2_speed_pane_g1

0xdcf2,	// (0x000a6d96) blid2_speed_pane_t1

0xdd18,	// (0x000a6dbc) blid2_speed_pane_t2

0x0001,

0xf86e,	// (0x000a8912) blid2_speed_pane_t

0xcd01,	// (0x000a5da5) blid2_navig_ring_pane_g1

0x7749,	// (0x000a07ed) blid2_navig_ring_pane_g2

0x7751,	// (0x000a07f5) blid2_navig_ring_pane_g3

0x7759,	// (0x000a07fd) blid2_navig_ring_pane_g4

0x7761,	// (0x000a0805) blid2_navig_ring_pane_g5

0x0004,

0xf873,	// (0x000a8917) blid2_navig_ring_pane_g

0xa075,	// (0x000a3119) bg_popup_window_pane_cp011

0xdd26,	// (0x000a6dca) popup_blid2_search_window_g1

0xdd2e,	// (0x000a6dd2) popup_blid2_search_window_t1

0xdd3c,	// (0x000a6de0) popup_blid2_search_window_t2

0x0001,

0xf87e,	// (0x000a8922) popup_blid2_search_window_t

0xaba9,	// (0x000a3c4d) main_browser_pane_g1

0xa84c,	// (0x000a38f0) main_browser_pane_ParamLimits

0x431b,	// (0x0009d3bf) bg_button_pane_cp011_ParamLimits

0x66ca,	// (0x0009f76e) cell_vitu2_function_pane_g1_ParamLimits

0xc8ed,	// (0x000a5991) bg_popup_sub_pane_cp22_ParamLimits

0x703f,	// (0x000a00e3) input_focus_pane_cp08_ParamLimits

0x7056,	// (0x000a00fa) popup_vitu2_query_button_pane_ParamLimits

0x7056,	// (0x000a00fa) popup_vitu2_query_button_pane

0x7067,	// (0x000a010b) popup_vitu2_query_input_button_pane

0xd9b4,	// (0x000a6a58) popup_vitu2_query_window_g1_ParamLimits

0x7071,	// (0x000a0115) popup_vitu2_query_window_g2_ParamLimits

0xf7c3,	// (0x000a8867) popup_vitu2_query_window_g_ParamLimits

0xa075,	// (0x000a3119) bg_button_pane_cp026

0x7769,	// (0x000a080d) popup_vitu2_query_input_button_pane_g1

0xa075,	// (0x000a3119) bg_button_pane_cp025

0xdd4a,	// (0x000a6dee) popup_vitu2_query_button_pane_t1

0x4d9c,	// (0x0009de40) main_mp3_pane_t6

0x4dac,	// (0x0009de50) popup_slider_window_cp01

0x6306,	// (0x0009f3aa) cam4_battery_pane

0x63e0,	// (0x0009f484) cam4_battery_pane_cp02

0x74a6,	// (0x000a054a) cam4_battery_pane_cp01

0x74a6,	// (0x000a054a) cam4_battery_pane_cp03

0xdd00,	// (0x000a6da4) cam4_battery_pane_g1

0xcd01,	// (0x000a5da5) cam4_battery_pane_g2

0x0001,

0xf883,	// (0x000a8927) cam4_battery_pane_g

0xcbcd,	// (0x000a5c71) popup_blid_sat_info2_window_t11

0xb2e3,	// (0x000a4387) aid_size_touch_mv_arrow_left_ParamLimits

0xb30e,	// (0x000a43b2) aid_size_touch_mv_arrow_right_ParamLimits

0xb36c,	// (0x000a4410) navi_pane_g1_ParamLimits

0xb378,	// (0x000a441c) navi_pane_g2_ParamLimits

0xb3a6,	// (0x000a444a) navi_pane_g3_ParamLimits

0x0249,	// (0x000992ed) navi_pane_g_ParamLimits

0x361a,	// (0x0009c6be) navi_pane_mv_t1_ParamLimits

0x5887,	// (0x0009e92b) grid_imed_effect_pane_ParamLimits

0x1f96,	// (0x0009b03a) aid_placing_vt_slider_lsc

0xaaba,	// (0x000a3b5e) aid_placing_vt_slider_prt

0xab6b,	// (0x000a3c0f) bg_tb_trans_pane_cp01_ParamLimits

0xce6f,	// (0x000a5f13) popup_image_details_window_g1_ParamLimits

0xce82,	// (0x000a5f26) popup_image_details_window_g2_ParamLimits

0xce97,	// (0x000a5f3b) popup_image_details_window_g3_ParamLimits

0xce97,	// (0x000a5f3b) popup_image_details_window_g3

0x058f,	// (0x00099633) popup_image_details_window_g_ParamLimits

0xceab,	// (0x000a5f4f) popup_image_details_window_t1_ParamLimits

0xcebd,	// (0x000a5f61) popup_image_details_window_t2_ParamLimits

0xced6,	// (0x000a5f7a) popup_image_details_window_t3_ParamLimits

0xceea,	// (0x000a5f8e) popup_image_details_window_t4_ParamLimits

0xcf05,	// (0x000a5fa9) popup_image_details_window_t5_ParamLimits

0x0596,	// (0x0009963a) popup_image_details_window_t_ParamLimits

0x73c6,	// (0x000a046a) cl_header_name_pane_ParamLimits

0x73c6,	// (0x000a046a) cl_header_name_pane

0x7771,	// (0x000a0815) cl_header_name_pane_t1_ParamLimits

0x7771,	// (0x000a0815) cl_header_name_pane_t1

0x7788,	// (0x000a082c) cl_header_name_pane_t2_ParamLimits

0x7788,	// (0x000a082c) cl_header_name_pane_t2

0x77b2,	// (0x000a0856) cl_header_name_pane_t3_ParamLimits

0x77b2,	// (0x000a0856) cl_header_name_pane_t3

0x0002,

0xf888,	// (0x000a892c) cl_header_name_pane_t_ParamLimits

0xf888,	// (0x000a892c) cl_header_name_pane_t

0xb435,	// (0x000a44d9) navi_pane_mv_g2_ParamLimits

0xd6f3,	// (0x000a6797) field_vitu2_entry_pane_g1_ParamLimits

0xd6ff,	// (0x000a67a3) field_vitu2_entry_pane_g2_ParamLimits

0xd70b,	// (0x000a67af) field_vitu2_entry_pane_g3_ParamLimits

0xd70b,	// (0x000a67af) field_vitu2_entry_pane_g3

0x0792,	// (0x00099836) field_vitu2_entry_pane_g_ParamLimits

0x665e,	// (0x0009f702) cell_vitu2_itu_pane_g1_ParamLimits

0x6670,	// (0x0009f714) cell_vitu2_itu_pane_g2_ParamLimits

0x6670,	// (0x0009f714) cell_vitu2_itu_pane_g2

0x0001,

0xf6fa,	// (0x000a879e) cell_vitu2_itu_pane_g_ParamLimits

0xf6fa,	// (0x000a879e) cell_vitu2_itu_pane_g

0x431b,	// (0x0009d3bf) bg_vkb2_func_pane_cp05_ParamLimits

0x431b,	// (0x0009d3bf) bg_vkb2_func_pane_cp05

0x431b,	// (0x0009d3bf) bg_vkb2_func_pane_cp03

0x431b,	// (0x0009d3bf) bg_vkb2_func_pane_cp04

0x431b,	// (0x0009d3bf) bg_vkb2_func_pane_cp10_ParamLimits

0x431b,	// (0x0009d3bf) bg_vkb2_func_pane_cp10

0x7368,	// (0x000a040c) bg_vkb2_func_pane_cp08

0x734e,	// (0x000a03f2) bg_vkb2_func_pane_cp06

0x735c,	// (0x000a0400) bg_vkb2_func_pane_cp07

0xdc40,	// (0x000a6ce4) bg_vkb2_func_pane_cp11_ParamLimits

0xdc40,	// (0x000a6ce4) bg_vkb2_func_pane_cp11

0xdc55,	// (0x000a6cf9) bg_vkb2_func_pane_cp12_ParamLimits

0xdc55,	// (0x000a6cf9) bg_vkb2_func_pane_cp12

0xa075,	// (0x000a3119) bg_vkb2_func_pane_cp09

0xd72b,	// (0x000a67cf) bg_vkb2_func_pane_g1

0xacba,	// (0x000a3d5e) bg_vkb2_func_pane_g2

0xd733,	// (0x000a67d7) bg_vkb2_func_pane_g3

0xd73b,	// (0x000a67df) bg_vkb2_func_pane_g4

0xd967,	// (0x000a6a0b) bg_vkb2_func_pane_g5

0xd753,	// (0x000a67f7) bg_vkb2_func_pane_g6

0xd75b,	// (0x000a67ff) bg_vkb2_func_pane_g7

0xd74b,	// (0x000a67ef) bg_vkb2_func_pane_g8

0xac9a,	// (0x000a3d3e) bg_vkb2_func_pane_g9

0x0008,

0xf88f,	// (0x000a8933) bg_vkb2_func_pane_g

0x76c0,	// (0x000a0764) blid2_tripm_pane_g6_ParamLimits

0x76c0,	// (0x000a0764) blid2_tripm_pane_g6

0xd5b4,	// (0x000a6658) mp4_progress_pane_g1

0x771a,	// (0x000a07be) blid2_tripm_values_pane_ParamLimits

0x771a,	// (0x000a07be) blid2_tripm_values_pane

0x77d7,	// (0x000a087b) blid2_tripm_values_pane_t1

0x77e5,	// (0x000a0889) blid2_tripm_values_pane_t2

0x77f3,	// (0x000a0897) blid2_tripm_values_pane_t3

0x7801,	// (0x000a08a5) blid2_tripm_values_pane_t4

0x780f,	// (0x000a08b3) blid2_tripm_values_pane_t5

0x781d,	// (0x000a08c1) blid2_tripm_values_pane_t6

0x782b,	// (0x000a08cf) blid2_tripm_values_pane_t7

0x7839,	// (0x000a08dd) blid2_tripm_values_pane_t8

0x7847,	// (0x000a08eb) blid2_tripm_values_pane_t9

0x0008,

0xf8a2,	// (0x000a8946) blid2_tripm_values_pane_t

0x1fd6,	// (0x0009b07a) call_video_pane_t1_ParamLimits

0x1ff7,	// (0x0009b09b) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000a8312) call_video_pane_t_ParamLimits

0x3b48,	// (0x0009cbec) msg_header_pane_g1_ParamLimits

0xb61d,	// (0x000a46c1) msg_header_pane_g2_ParamLimits

0xb61d,	// (0x000a46c1) msg_header_pane_g2

0x0001,

0xf40c,	// (0x000a84b0) msg_header_pane_g_ParamLimits

0xf40c,	// (0x000a84b0) msg_header_pane_g

0xa84c,	// (0x000a38f0) main_clock2_pane_ParamLimits

0x561b,	// (0x0009e6bf) grid_clock2_toolbar_pane_ParamLimits

0x561b,	// (0x0009e6bf) grid_clock2_toolbar_pane

0x561b,	// (0x0009e6bf) listscroll_clock2_pane_ParamLimits

0x561b,	// (0x0009e6bf) listscroll_clock2_pane

0x56c5,	// (0x0009e769) main_clock2_pane_t3_ParamLimits

0x56c5,	// (0x0009e769) main_clock2_pane_t3

0x56d7,	// (0x0009e77b) main_clock2_pane_t4_ParamLimits

0x56d7,	// (0x0009e77b) main_clock2_pane_t4

0xdd58,	// (0x000a6dfc) cell_clock2_toolbar_pane

0xdd60,	// (0x000a6e04) cell_clock2_toolbar_pane_cp01

0xdd60,	// (0x000a6e04) cell_clock2_toolbar_pane_cp02

0xdd68,	// (0x000a6e0c) cell_clock2_toolbar_pane_cp03

0xdd70,	// (0x000a6e14) list_clock2_pane

0xb268,	// (0x000a430c) scroll_pane_cp10

0xdd78,	// (0x000a6e1c) list_single_clock2_pane_ParamLimits

0xdd78,	// (0x000a6e1c) list_single_clock2_pane

0xaa23,	// (0x000a3ac7) list_highlight_pane_cp08

0xdd85,	// (0x000a6e29) list_single_clock2_pane_t1

0xdd93,	// (0x000a6e37) list_single_clock2_pane_t2

0x0001,

0xf8b5,	// (0x000a8959) list_single_clock2_pane_t

0xa075,	// (0x000a3119) bg_button_pane_cp10

0xdda1,	// (0x000a6e45) cell_clock2_toolbar_pane_g1

0x3b6c,	// (0x0009cc10) aid_main_viewer_pane_g1_ParamLimits

0x3b6c,	// (0x0009cc10) aid_main_viewer_pane_g1

0x3b78,	// (0x0009cc1c) aid_main_viewer_pane_g2_ParamLimits

0x3b78,	// (0x0009cc1c) aid_main_viewer_pane_g2

0x3b84,	// (0x0009cc28) aid_main_viewer_pane_g3_ParamLimits

0x3b84,	// (0x0009cc28) aid_main_viewer_pane_g3

0x3b95,	// (0x0009cc39) aid_main_viewer_pane_g4_ParamLimits

0x3b95,	// (0x0009cc39) aid_main_viewer_pane_g4

0x0003,

0xf41d,	// (0x000a84c1) aid_main_viewer_pane_g_ParamLimits

0xf41d,	// (0x000a84c1) aid_main_viewer_pane_g

0x430e,	// (0x0009d3b2) main_calc_pane_ParamLimits

0x4329,	// (0x0009d3cd) main_dialer2_pane_ParamLimits

0x112e,	// (0x0009a1d2) main_cam6_pane

0x112e,	// (0x0009a1d2) main_vid6_pane

0x5627,	// (0x0009e6cb) listscroll_gen_pane_cp06_ParamLimits

0x5627,	// (0x0009e6cb) listscroll_gen_pane_cp06

0x56e9,	// (0x0009e78d) main_clock2_pane_t5_ParamLimits

0x56e9,	// (0x0009e78d) main_clock2_pane_t5

0x5732,	// (0x0009e7d6) aid_call2_pane_cp10_ParamLimits

0x5744,	// (0x0009e7e8) aid_call_pane_cp10_ParamLimits

0xb2d7,	// (0x000a437b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2d7,	// (0x000a437b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5756,	// (0x0009e7fa) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5756,	// (0x0009e7fa) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2d7,	// (0x000a437b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf60a,	// (0x000a86ae) popup_clock_analogue_window_cp10_g_ParamLimits

0x5768,	// (0x0009e80c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5f37,	// (0x0009efdb) cell_dialer2_keypad_pane_g2_ParamLimits

0x5f37,	// (0x0009efdb) cell_dialer2_keypad_pane_g2

0x0001,

0xf694,	// (0x000a8738) cell_dialer2_keypad_pane_g_ParamLimits

0xf694,	// (0x000a8738) cell_dialer2_keypad_pane_g

0x5f53,	// (0x0009eff7) cell_dialer2_keypad_pane_t1

0x6995,	// (0x0009fa39) main_cset_text2_pane_ParamLimits

0x6995,	// (0x0009fa39) main_cset_text2_pane

0xdba0,	// (0x000a6c44) area_vitu2_query_pane_g1_ParamLimits

0x72ed,	// (0x000a0391) area_vitu2_query_pane_g2_ParamLimits

0xf7ec,	// (0x000a8890) area_vitu2_query_pane_g_ParamLimits

0x9d48,	// (0x000a2dec) area_vitu2_query_pane_t7_ParamLimits

0x9d48,	// (0x000a2dec) area_vitu2_query_pane_t7

0x734e,	// (0x000a03f2) bg_button_pane_cp018_ParamLimits

0x735c,	// (0x000a0400) bg_button_pane_cp021_ParamLimits

0x7368,	// (0x000a040c) bg_button_pane_cp022_ParamLimits

0x7368,	// (0x000a040c) bg_vkb2_func_pane_cp08_ParamLimits

0x734e,	// (0x000a03f2) bg_vkb2_func_pane_cp06_ParamLimits

0x735c,	// (0x000a0400) bg_vkb2_func_pane_cp07_ParamLimits

0x7379,	// (0x000a041d) input_focus_pane_cp09_ParamLimits

0x7855,	// (0x000a08f9) cam6_autofocus_pane_ParamLimits

0x7855,	// (0x000a08f9) cam6_autofocus_pane

0x7877,	// (0x000a091b) cam6_image_uncrop_pane_ParamLimits

0x7877,	// (0x000a091b) cam6_image_uncrop_pane

0x78a4,	// (0x000a0948) cam6_indi_pane_ParamLimits

0x78a4,	// (0x000a0948) cam6_indi_pane

0x78be,	// (0x000a0962) cam6_mode_pane_ParamLimits

0x78be,	// (0x000a0962) cam6_mode_pane

0x78d2,	// (0x000a0976) cam6_timer_pane_ParamLimits

0x78d2,	// (0x000a0976) cam6_timer_pane

0x78e3,	// (0x000a0987) cam6_zoom_pane_ParamLimits

0x78e3,	// (0x000a0987) cam6_zoom_pane

0x78fb,	// (0x000a099f) cam6_mode_pane_g1_ParamLimits

0x78fb,	// (0x000a099f) cam6_mode_pane_g1

0x7907,	// (0x000a09ab) cam6_mode_pane_g2_ParamLimits

0x7907,	// (0x000a09ab) cam6_mode_pane_g2

0x7913,	// (0x000a09b7) cam6_mode_pane_g3_ParamLimits

0x7913,	// (0x000a09b7) cam6_mode_pane_g3

0x791f,	// (0x000a09c3) cam6_mode_pane_g4_ParamLimits

0x791f,	// (0x000a09c3) cam6_mode_pane_g4

0x0003,

0xf8ba,	// (0x000a895e) cam6_mode_pane_g_ParamLimits

0xf8ba,	// (0x000a895e) cam6_mode_pane_g

0xdd0a,	// (0x000a6dae) bg_tb_trans_pane_cp08_ParamLimits

0xdd0a,	// (0x000a6dae) bg_tb_trans_pane_cp08

0xdda9,	// (0x000a6e4d) cam6_battery_pane_ParamLimits

0xdda9,	// (0x000a6e4d) cam6_battery_pane

0xddbf,	// (0x000a6e63) cam6_indi_pane_g1_ParamLimits

0xddbf,	// (0x000a6e63) cam6_indi_pane_g1

0xddd1,	// (0x000a6e75) cam6_indi_pane_g2_ParamLimits

0xddd1,	// (0x000a6e75) cam6_indi_pane_g2

0xddf1,	// (0x000a6e95) cam6_indi_pane_g3_ParamLimits

0xddf1,	// (0x000a6e95) cam6_indi_pane_g3

0x0002,

0xf8c3,	// (0x000a8967) cam6_indi_pane_g_ParamLimits

0xf8c3,	// (0x000a8967) cam6_indi_pane_g

0xde03,	// (0x000a6ea7) cam6_indi_pane_t1_ParamLimits

0xde03,	// (0x000a6ea7) cam6_indi_pane_t1

0x645c,	// (0x0009f500) cam6_autofocus_pane_g1

0x6454,	// (0x0009f4f8) cam6_autofocus_pane_g2

0x646c,	// (0x0009f510) cam6_autofocus_pane_g3

0x6464,	// (0x0009f508) cam6_autofocus_pane_g4

0x0003,

0xf8ca,	// (0x000a896e) cam6_autofocus_pane_g

0xde29,	// (0x000a6ecd) cam6_timer_pane_g1

0xde31,	// (0x000a6ed5) cam6_timer_pane_t1

0xde3f,	// (0x000a6ee3) cam6_zoom_cont_pane

0xde47,	// (0x000a6eeb) cam6_zoom_pane_g1

0xde4f,	// (0x000a6ef3) cam6_zoom_pane_g2

0x792b,	// (0x000a09cf) cam6_zoom_pane_g3

0x0002,

0xf8d3,	// (0x000a8977) cam6_zoom_pane_g

0xcd01,	// (0x000a5da5) cam6_battery_pane_g1

0xcd01,	// (0x000a5da5) cam6_battery_pane_g2

0x0001,

0x0553,	// (0x000995f7) cam6_battery_pane_g

0xde57,	// (0x000a6efb) cam6_zoom_cont_pane_g1

0xde60,	// (0x000a6f04) cam6_zoom_cont_pane_g2

0xde69,	// (0x000a6f0d) cam6_zoom_cont_pane_g3

0x0002,

0xf8da,	// (0x000a897e) cam6_zoom_cont_pane_g

0x7948,	// (0x000a09ec) cam6_mode_pane_cp_ParamLimits

0x7948,	// (0x000a09ec) cam6_mode_pane_cp

0x795c,	// (0x000a0a00) cam6_zoom_pane_cp_ParamLimits

0x795c,	// (0x000a0a00) cam6_zoom_pane_cp

0x7974,	// (0x000a0a18) vid6_image_uncrop_cif_pane_ParamLimits

0x7974,	// (0x000a0a18) vid6_image_uncrop_cif_pane

0x79a0,	// (0x000a0a44) vid6_image_uncrop_nhd_pane_ParamLimits

0x79a0,	// (0x000a0a44) vid6_image_uncrop_nhd_pane

0x79bd,	// (0x000a0a61) vid6_image_uncrop_vga_pane_ParamLimits

0x79bd,	// (0x000a0a61) vid6_image_uncrop_vga_pane

0x79dc,	// (0x000a0a80) vid6_image_uncrop_wvga_pane_ParamLimits

0x79dc,	// (0x000a0a80) vid6_image_uncrop_wvga_pane

0x79f9,	// (0x000a0a9d) vid6_indi_pane_ParamLimits

0x79f9,	// (0x000a0a9d) vid6_indi_pane

0xdd0a,	// (0x000a6dae) bg_tb_trans_pane_cp09_ParamLimits

0xdd0a,	// (0x000a6dae) bg_tb_trans_pane_cp09

0xde81,	// (0x000a6f25) cam6_battery_pane_cp_ParamLimits

0xde81,	// (0x000a6f25) cam6_battery_pane_cp

0xde8d,	// (0x000a6f31) vid6_indi_pane_g1_ParamLimits

0xde8d,	// (0x000a6f31) vid6_indi_pane_g1

0xde9f,	// (0x000a6f43) vid6_indi_pane_g2_ParamLimits

0xde9f,	// (0x000a6f43) vid6_indi_pane_g2

0xdeb1,	// (0x000a6f55) vid6_indi_pane_g3_ParamLimits

0xdeb1,	// (0x000a6f55) vid6_indi_pane_g3

0xdec6,	// (0x000a6f6a) vid6_indi_pane_g4_ParamLimits

0xdec6,	// (0x000a6f6a) vid6_indi_pane_g4

0xdedb,	// (0x000a6f7f) vid6_indi_pane_g5_ParamLimits

0xdedb,	// (0x000a6f7f) vid6_indi_pane_g5

0x0004,

0xf8e1,	// (0x000a8985) vid6_indi_pane_g_ParamLimits

0xf8e1,	// (0x000a8985) vid6_indi_pane_g

0xdef5,	// (0x000a6f99) vid6_indi_pane_t1_ParamLimits

0xdef5,	// (0x000a6f99) vid6_indi_pane_t1

0xdf0b,	// (0x000a6faf) vid6_indi_pane_t2_ParamLimits

0xdf0b,	// (0x000a6faf) vid6_indi_pane_t2

0xdf33,	// (0x000a6fd7) vid6_indi_pane_t3_ParamLimits

0xdf33,	// (0x000a6fd7) vid6_indi_pane_t3

0xdf5b,	// (0x000a6fff) vid6_indi_pane_t4_ParamLimits

0xdf5b,	// (0x000a6fff) vid6_indi_pane_t4

0x0003,

0x0a00,	// (0x00099aa4) vid6_indi_pane_t_ParamLimits

0x0a00,	// (0x00099aa4) vid6_indi_pane_t

0xdf7f,	// (0x000a7023) wait_bar_pane_cp08

0x7a1c,	// (0x000a0ac0) main_cset_text2_pane_t1_ParamLimits

0x7a1c,	// (0x000a0ac0) main_cset_text2_pane_t1

0x7933,	// (0x000a09d7) listscroll_gen_pane_cp06_t1_ParamLimits

0x7933,	// (0x000a09d7) listscroll_gen_pane_cp06_t1

0x112e,	// (0x0009a1d2) main_cam6_set_pane

0x62f8,	// (0x0009f39c) bg_tb_trans_pane_cp06_ParamLimits

0x630e,	// (0x0009f3b2) cam4_indicators_pane_g1_ParamLimits

0x631f,	// (0x0009f3c3) cam4_indicators_pane_g2_ParamLimits

0xf6d1,	// (0x000a8775) cam4_indicators_pane_g_ParamLimits

0x6337,	// (0x0009f3db) cam4_indicators_pane_t1_ParamLimits

0x431b,	// (0x0009d3bf) bg_tb_trans_pane_cp07_ParamLimits

0x63e8,	// (0x0009f48c) vid4_indicators_pane_g1_ParamLimits

0x63fc,	// (0x0009f4a0) vid4_indicators_pane_g2_ParamLimits

0x6410,	// (0x0009f4b4) vid4_indicators_pane_g3_ParamLimits

0x6421,	// (0x0009f4c5) vid4_indicators_pane_g4_ParamLimits

0xf6e3,	// (0x000a8787) vid4_indicators_pane_g_ParamLimits

0x643d,	// (0x0009f4e1) vid4_indicators_pane_t1_ParamLimits

0x74ae,	// (0x000a0552) vid4_progress_pane_g1_ParamLimits

0x74be,	// (0x000a0562) vid4_progress_pane_g2_ParamLimits

0x74ce,	// (0x000a0572) vid4_progress_pane_g3_ParamLimits

0x74e0,	// (0x000a0584) vid4_progress_pane_g4_ParamLimits

0xf824,	// (0x000a88c8) vid4_progress_pane_g_ParamLimits

0x74f8,	// (0x000a059c) vid4_progress_pane_t1_ParamLimits

0x750e,	// (0x000a05b2) vid4_progress_pane_t2_ParamLimits

0x7523,	// (0x000a05c7) vid4_progress_pane_t3_ParamLimits

0xf82f,	// (0x000a88d3) vid4_progress_pane_t_ParamLimits

0x7539,	// (0x000a05dd) wait_bar_pane_cp07_ParamLimits

0x7a53,	// (0x000a0af7) main_cam6_set_pane_g2_ParamLimits

0x7a53,	// (0x000a0af7) main_cam6_set_pane_g2

0x7a5f,	// (0x000a0b03) main_cset6_listscroll_pane_ParamLimits

0x7a5f,	// (0x000a0b03) main_cset6_listscroll_pane

0x7a8a,	// (0x000a0b2e) main_cset6_slider_pane_ParamLimits

0x7a8a,	// (0x000a0b2e) main_cset6_slider_pane

0x7a96,	// (0x000a0b3a) main_cset6_text2_pane_ParamLimits

0x7a96,	// (0x000a0b3a) main_cset6_text2_pane

0xdf8e,	// (0x000a7032) main_cset6_text_pane

0xdf96,	// (0x000a703a) main_cset_list_pane_copy1_ParamLimits

0xdf96,	// (0x000a703a) main_cset_list_pane_copy1

0xdfa6,	// (0x000a704a) scroll_pane_cp028_copy1

0x7aa9,	// (0x000a0b4d) cset_list_set_pane_copy1

0x7abf,	// (0x000a0b63) aid_position_infowindow_above_copy1

0x7ac7,	// (0x000a0b6b) aid_position_infowindow_below_copy1

0x9e97,	// (0x000a2f3b) cset_list_set_pane_g1_copy1

0x9d74,	// (0x000a2e18) cset_list_set_pane_g3_copy1_ParamLimits

0x9d74,	// (0x000a2e18) cset_list_set_pane_g3_copy1

0x9d83,	// (0x000a2e27) cset_list_set_pane_t1_copy1_ParamLimits

0x9d83,	// (0x000a2e27) cset_list_set_pane_t1_copy1

0xab6b,	// (0x000a3c0f) list_highlight_pane_cp021_copy1_ParamLimits

0xab6b,	// (0x000a3c0f) list_highlight_pane_cp021_copy1

0xdfaf,	// (0x000a7053) cset6_slider_pane_ParamLimits

0xdfaf,	// (0x000a7053) cset6_slider_pane

0xdfdb,	// (0x000a707f) main_cset6_slider_pane_g1_ParamLimits

0xdfdb,	// (0x000a707f) main_cset6_slider_pane_g1

0x7acf,	// (0x000a0b73) main_cset6_slider_pane_g2_ParamLimits

0x7acf,	// (0x000a0b73) main_cset6_slider_pane_g2

0xe003,	// (0x000a70a7) main_cset6_slider_pane_g3_ParamLimits

0xe003,	// (0x000a70a7) main_cset6_slider_pane_g3

0x7af7,	// (0x000a0b9b) main_cset6_slider_pane_g4_ParamLimits

0x7af7,	// (0x000a0b9b) main_cset6_slider_pane_g4

0x7b03,	// (0x000a0ba7) main_cset6_slider_pane_g5_ParamLimits

0x7b03,	// (0x000a0ba7) main_cset6_slider_pane_g5

0xd85a,	// (0x000a68fe) main_cset6_slider_pane_g7_ParamLimits

0xd85a,	// (0x000a68fe) main_cset6_slider_pane_g7

0xd866,	// (0x000a690a) main_cset6_slider_pane_g8_ParamLimits

0xd866,	// (0x000a690a) main_cset6_slider_pane_g8

0x7b11,	// (0x000a0bb5) main_cset6_slider_pane_g9_ParamLimits

0x7b11,	// (0x000a0bb5) main_cset6_slider_pane_g9

0x7b1d,	// (0x000a0bc1) main_cset6_slider_pane_g10_ParamLimits

0x7b1d,	// (0x000a0bc1) main_cset6_slider_pane_g10

0x7b29,	// (0x000a0bcd) main_cset6_slider_pane_g11_ParamLimits

0x7b29,	// (0x000a0bcd) main_cset6_slider_pane_g11

0x7b35,	// (0x000a0bd9) main_cset6_slider_pane_g12_ParamLimits

0x7b35,	// (0x000a0bd9) main_cset6_slider_pane_g12

0xd8ac,	// (0x000a6950) main_cset6_slider_pane_g13_ParamLimits

0xd8ac,	// (0x000a6950) main_cset6_slider_pane_g13

0xd8b8,	// (0x000a695c) main_cset6_slider_pane_g14_ParamLimits

0xd8b8,	// (0x000a695c) main_cset6_slider_pane_g14

0x7b41,	// (0x000a0be5) main_cset6_slider_pane_g15_ParamLimits

0x7b41,	// (0x000a0be5) main_cset6_slider_pane_g15

0x7b59,	// (0x000a0bfd) main_cset6_slider_pane_g16_ParamLimits

0x7b59,	// (0x000a0bfd) main_cset6_slider_pane_g16

0x7b67,	// (0x000a0c0b) main_cset6_slider_pane_g17_ParamLimits

0x7b67,	// (0x000a0c0b) main_cset6_slider_pane_g17

0x0011,

0xf8ec,	// (0x000a8990) main_cset6_slider_pane_g_ParamLimits

0xf8ec,	// (0x000a8990) main_cset6_slider_pane_g

0xe01b,	// (0x000a70bf) main_cset6_slider_pane_t1_ParamLimits

0xe01b,	// (0x000a70bf) main_cset6_slider_pane_t1

0x7b81,	// (0x000a0c25) main_cset6_slider_pane_t2_ParamLimits

0x7b81,	// (0x000a0c25) main_cset6_slider_pane_t2

0x7bac,	// (0x000a0c50) main_cset6_slider_pane_t3_ParamLimits

0x7bac,	// (0x000a0c50) main_cset6_slider_pane_t3

0x7bd7,	// (0x000a0c7b) main_cset6_slider_pane_t4_ParamLimits

0x7bd7,	// (0x000a0c7b) main_cset6_slider_pane_t4

0x7c02,	// (0x000a0ca6) main_cset6_slider_pane_t5_ParamLimits

0x7c02,	// (0x000a0ca6) main_cset6_slider_pane_t5

0xe05c,	// (0x000a7100) main_cset6_slider_pane_t7_ParamLimits

0xe05c,	// (0x000a7100) main_cset6_slider_pane_t7

0x7c2f,	// (0x000a0cd3) main_cset6_slider_pane_t8_ParamLimits

0x7c2f,	// (0x000a0cd3) main_cset6_slider_pane_t8

0x7c53,	// (0x000a0cf7) main_cset6_slider_pane_t9_ParamLimits

0x7c53,	// (0x000a0cf7) main_cset6_slider_pane_t9

0x7c77,	// (0x000a0d1b) main_cset6_slider_pane_t10_ParamLimits

0x7c77,	// (0x000a0d1b) main_cset6_slider_pane_t10

0x7c9b,	// (0x000a0d3f) main_cset6_slider_pane_t11_ParamLimits

0x7c9b,	// (0x000a0d3f) main_cset6_slider_pane_t11

0xe092,	// (0x000a7136) main_cset6_slider_pane_t14_ParamLimits

0xe092,	// (0x000a7136) main_cset6_slider_pane_t14

0xe0cb,	// (0x000a716f) main_cset6_slider_pane_t15_ParamLimits

0xe0cb,	// (0x000a716f) main_cset6_slider_pane_t15

0x000b,

0xf911,	// (0x000a89b5) main_cset6_slider_pane_t_ParamLimits

0xf911,	// (0x000a89b5) main_cset6_slider_pane_t

0xd4d1,	// (0x000a6575) cset_slider_pane_g1_copy1

0xd98a,	// (0x000a6a2e) cset_slider_pane_g2_copy1

0xd993,	// (0x000a6a37) cset_slider_pane_g3_copy1

0xa075,	// (0x000a3119) bg_popup_sub_pane_cp011_copy1

0xe104,	// (0x000a71a8) main_cset_text_pane_g1_copy1

0xd9c8,	// (0x000a6a6c) main_cset_text_pane_t1_copy1

0xd9d6,	// (0x000a6a7a) main_cset_text_pane_t2_copy1

0xd9e4,	// (0x000a6a88) main_cset_text_pane_t3_copy1

0xd9f2,	// (0x000a6a96) main_cset_text_pane_t4_copy1

0xda00,	// (0x000a6aa4) main_cset_text_pane_t5_copy1

0xe10c,	// (0x000a71b0) main_cset_text_pane_t6_copy1

0xe11a,	// (0x000a71be) main_cset_text_pane_t7_copy1

0x7d97,	// (0x000a0e3b) main_cset_text2_pane_t1_copy1

0x431b,	// (0x0009d3bf) main_ncimui_pane

0x437a,	// (0x0009d41e) popup_query_ncimui_window_ParamLimits

0x437a,	// (0x0009d41e) popup_query_ncimui_window

0x9c7b,	// (0x000a2d1f) field_cale_ev2_pane_g4_ParamLimits

0x9c7b,	// (0x000a2d1f) field_cale_ev2_pane_g4

0x5c57,	// (0x0009ecfb) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c57,	// (0x0009ecfb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf674,	// (0x000a8718) cell_video_dialer_keypad_pane_g_ParamLimits

0xf674,	// (0x000a8718) cell_video_dialer_keypad_pane_g

0x5c6f,	// (0x0009ed13) cell_video_dialer_keypad_pane_t1

0xa075,	// (0x000a3119) bg_popup_window_pane_cp012

0xb153,	// (0x000a41f7) heading_pane_cp06

0xe146,	// (0x000a71ea) ncim_query_content_pane

0xa075,	// (0x000a3119) bg_popup_heading_pane_cp01

0xe14e,	// (0x000a71f2) ncim_heading_pane_t1

0xe15c,	// (0x000a7200) ncim_indicator_popup_pane

0xe16e,	// (0x000a7212) ncim_query_button_pane

0xe182,	// (0x000a7226) ncim_query_content_pane_t1

0xe194,	// (0x000a7238) ncim_query_content_pane_t2

0x0005,

0xf955,	// (0x000a89f9) ncim_query_content_pane_t

0xe1ce,	// (0x000a7272) ncim_query_list_pane

0xe1e0,	// (0x000a7284) ncim_query_popup_pane

0xe15c,	// (0x000a7200) ncim_indicator_popup_pane_ParamLimits

0x7eeb,	// (0x000a0f8f) ncim_query_content_pane_g1_ParamLimits

0x7eeb,	// (0x000a0f8f) ncim_query_content_pane_g1

0xe182,	// (0x000a7226) ncim_query_content_pane_t1_ParamLimits

0xe194,	// (0x000a7238) ncim_query_content_pane_t2_ParamLimits

0x7ef7,	// (0x000a0f9b) ncim_query_content_pane_t3_ParamLimits

0x7ef7,	// (0x000a0f9b) ncim_query_content_pane_t3

0x7f14,	// (0x000a0fb8) ncim_query_content_pane_t4_ParamLimits

0x7f14,	// (0x000a0fb8) ncim_query_content_pane_t4

0x7f31,	// (0x000a0fd5) ncim_query_content_pane_t5_ParamLimits

0x7f31,	// (0x000a0fd5) ncim_query_content_pane_t5

0xe1a6,	// (0x000a724a) ncim_query_content_pane_t6_ParamLimits

0xe1a6,	// (0x000a724a) ncim_query_content_pane_t6

0xf955,	// (0x000a89f9) ncim_query_content_pane_t_ParamLimits

0xe1ce,	// (0x000a7272) ncim_query_list_pane_ParamLimits

0xe1e0,	// (0x000a7284) ncim_query_popup_pane_ParamLimits

0xe1f4,	// (0x000a7298) wait_bar_pane_cp04

0xa075,	// (0x000a3119) input_focus_pane_cp011

0xe1fc,	// (0x000a72a0) ncim_query_popup_pane_t1

0xe20a,	// (0x000a72ae) ncim_list_query_list_pane_ParamLimits

0xe20a,	// (0x000a72ae) ncim_list_query_list_pane

0xa075,	// (0x000a3119) bg_button_pane_cp027

0xe217,	// (0x000a72bb) ncim_query_button_pane_g1

0xa075,	// (0x000a3119) list_highlight_pane_cp012

0xe221,	// (0x000a72c5) ncim_list_query_list_pane_g1

0xe229,	// (0x000a72cd) ncim_list_query_list_pane_t1

0x632b,	// (0x0009f3cf) cam4_indicators_pane_g3_ParamLimits

0x632b,	// (0x0009f3cf) cam4_indicators_pane_g3

0x642d,	// (0x0009f4d1) vid4_indicators_pane_g5_ParamLimits

0x642d,	// (0x0009f4d1) vid4_indicators_pane_g5

0x74ec,	// (0x000a0590) vid4_progress_pane_g5_ParamLimits

0x74ec,	// (0x000a0590) vid4_progress_pane_g5

0x7dd7,	// (0x000a0e7b) main_ncimui_pane_g1

0x7e3f,	// (0x000a0ee3) ncimui_group_query_pane_ParamLimits

0x7e3f,	// (0x000a0ee3) ncimui_group_query_pane

0x7e87,	// (0x000a0f2b) ncimui_list_pane_ParamLimits

0x7e87,	// (0x000a0f2b) ncimui_list_pane

0x7eae,	// (0x000a0f52) ncimui_text_pane_ParamLimits

0x7eae,	// (0x000a0f52) ncimui_text_pane

0x7f4e,	// (0x000a0ff2) ncimui_text_pane_t1_ParamLimits

0x7f4e,	// (0x000a0ff2) ncimui_text_pane_t1

0xe237,	// (0x000a72db) ncimui_list_single_graphic_pane_ParamLimits

0xe237,	// (0x000a72db) ncimui_list_single_graphic_pane

0x7f6d,	// (0x000a1011) ncimui_query_pane_ParamLimits

0x7f6d,	// (0x000a1011) ncimui_query_pane

0xa075,	// (0x000a3119) list_highlight_pane_cp013

0xe247,	// (0x000a72eb) ncim_list_query_list_pane_t1_copy1

0xe255,	// (0x000a72f9) ncim_list_single_graphic_pane_g1

0x7f80,	// (0x000a1024) ncim_query_button_pane_cp01

0x7f8c,	// (0x000a1030) ncim_query_entry_pane_ParamLimits

0x7f8c,	// (0x000a1030) ncim_query_entry_pane

0x7f9f,	// (0x000a1043) ncimui_query_pane_g1

0x7fab,	// (0x000a104f) ncimui_query_pane_t1_ParamLimits

0x7fab,	// (0x000a104f) ncimui_query_pane_t1

0xab6b,	// (0x000a3c0f) input_focus_pane_cp012

0xe25d,	// (0x000a7301) ncim_query_entry_pane_t1

0xa84c,	// (0x000a38f0) main_im_pane_ParamLimits

0x431b,	// (0x0009d3bf) main_mobtv_pane_ParamLimits

0x431b,	// (0x0009d3bf) main_mobtv_pane

0x7b75,	// (0x000a0c19) main_cset6_slider_pane_g18_ParamLimits

0x7b75,	// (0x000a0c19) main_cset6_slider_pane_g18

0xe00f,	// (0x000a70b3) main_cset6_slider_pane_g19_ParamLimits

0xe00f,	// (0x000a70b3) main_cset6_slider_pane_g19

0xd70b,	// (0x000a67af) bg_main_mobtv_pane_ParamLimits

0xd70b,	// (0x000a67af) bg_main_mobtv_pane

0x7fc4,	// (0x000a1068) main_mobtv_info_pane

0x7fcf,	// (0x000a1073) main_mobtv_loading_pane_ParamLimits

0x7fcf,	// (0x000a1073) main_mobtv_loading_pane

0xe26f,	// (0x000a7313) main_mobtv_pg_channel_list_pane

0xe279,	// (0x000a731d) main_mobtv_pg_hdr_pane

0x7fdc,	// (0x000a1080) main_mobtv_programe_curr_pane_ParamLimits

0x7fdc,	// (0x000a1080) main_mobtv_programe_curr_pane

0x7fe9,	// (0x000a108d) main_mobtv_programe_next_pane_ParamLimits

0x7fe9,	// (0x000a108d) main_mobtv_programe_next_pane

0xe282,	// (0x000a7326) popup_mobtv_noti_window

0xcd01,	// (0x000a5da5) main_tv_pg_hdr_pane_g1

0xe28a,	// (0x000a732e) main_tv_pg_hdr_pane_g2

0xe292,	// (0x000a7336) main_tv_pg_hdr_pane_g3

0xe29a,	// (0x000a733e) main_tv_pg_hdr_pane_g4

0xe2a2,	// (0x000a7346) main_tv_pg_hdr_pane_g5

0xe2ac,	// (0x000a7350) main_tv_pg_hdr_pane_g6

0xe2b6,	// (0x000a735a) main_tv_pg_hdr_pane_g7

0xe2c0,	// (0x000a7364) main_tv_pg_hdr_pane_g8

0xe2ca,	// (0x000a736e) main_tv_pg_hdr_pane_g9

0xe2d4,	// (0x000a7378) main_tv_pg_hdr_pane_g10

0xe2de,	// (0x000a7382) main_tv_pg_hdr_pane_g11

0x000a,

0x0a7f,	// (0x00099b23) main_tv_pg_hdr_pane_g

0xe2e8,	// (0x000a738c) main_tv_pg_hdr_pane_t1

0xe2f6,	// (0x000a739a) main_tv_pg_hdr_pane_t2

0xe304,	// (0x000a73a8) main_tv_pg_hdr_pane_t3

0xe314,	// (0x000a73b8) main_tv_pg_hdr_pane_t4

0xe324,	// (0x000a73c8) main_tv_pg_hdr_pane_t5

0x0004,

0x0a96,	// (0x00099b3a) main_tv_pg_hdr_pane_t

0xe334,	// (0x000a73d8) single_mobtv_pg_channel_pane_ParamLimits

0xe334,	// (0x000a73d8) single_mobtv_pg_channel_pane

0xe346,	// (0x000a73ea) single_mobtv_pg_channel_table_pane

0xadbd,	// (0x000a3e61) single_mobtv_pg_channel_thumb_pane

0xe34f,	// (0x000a73f3) single_tv_pg_channel_pane_g1

0xe358,	// (0x000a73fc) single_tv_pg_channel_pane_g2

0x0001,

0x0aa1,	// (0x00099b45) single_tv_pg_channel_pane_g

0xcf4f,	// (0x000a5ff3) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf4f,	// (0x000a5ff3) bg_single_mobtv_pg_channel_thumb_pane

0xe361,	// (0x000a7405) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe361,	// (0x000a7405) single_mobtv_pg_channel_thumb_pane_g1

0xe36f,	// (0x000a7413) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe36f,	// (0x000a7413) single_mobtv_pg_channel_thumb_pane_g2

0xe37b,	// (0x000a741f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe37b,	// (0x000a741f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0aa6,	// (0x00099b4a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0aa6,	// (0x00099b4a) single_mobtv_pg_channel_thumb_pane_g

0xe387,	// (0x000a742b) single_mobtv_pg_channel_thumb_pane_t1

0xe395,	// (0x000a7439) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0aad,	// (0x00099b51) single_mobtv_pg_channel_thumb_pane_t

0xcd01,	// (0x000a5da5) bg_single_mobtv_pg_channel_table_pane_g1

0xcd01,	// (0x000a5da5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0553,	// (0x000995f7) bg_single_mobtv_pg_channel_table_pane_g

0xe3a3,	// (0x000a7447) single_mobtv_pg_channel_table_pane_t1

0xe3b1,	// (0x000a7455) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0ab2,	// (0x00099b56) single_mobtv_pg_channel_table_pane_t

0x7ffe,	// (0x000a10a2) main_mobtv_info_pane_g1_ParamLimits

0x7ffe,	// (0x000a10a2) main_mobtv_info_pane_g1

0x801a,	// (0x000a10be) main_mobtv_info_pane_t1_ParamLimits

0x801a,	// (0x000a10be) main_mobtv_info_pane_t1

0x8092,	// (0x000a1136) main_mobtv_info_pane_t2_ParamLimits

0x8092,	// (0x000a1136) main_mobtv_info_pane_t2

0x0002,

0xf967,	// (0x000a8a0b) main_mobtv_info_pane_t_ParamLimits

0xf967,	// (0x000a8a0b) main_mobtv_info_pane_t

0x8121,	// (0x000a11c5) wait_bar_pane_cp05

0x8133,	// (0x000a11d7) main_mobtv_loading_pane_g1_ParamLimits

0x8133,	// (0x000a11d7) main_mobtv_loading_pane_g1

0x8141,	// (0x000a11e5) main_mobtv_loading_pane_g2_ParamLimits

0x8141,	// (0x000a11e5) main_mobtv_loading_pane_g2

0x814d,	// (0x000a11f1) main_mobtv_loading_pane_g3_ParamLimits

0x814d,	// (0x000a11f1) main_mobtv_loading_pane_g3

0x0002,

0xf96e,	// (0x000a8a12) main_mobtv_loading_pane_g_ParamLimits

0xf96e,	// (0x000a8a12) main_mobtv_loading_pane_g

0xe3bf,	// (0x000a7463) main_mobtv_loading_pane_t1_ParamLimits

0xe3bf,	// (0x000a7463) main_mobtv_loading_pane_t1

0xe3d7,	// (0x000a747b) main_mobtv_loading_pane_t2_ParamLimits

0xe3d7,	// (0x000a747b) main_mobtv_loading_pane_t2

0x0001,

0x0aca,	// (0x00099b6e) main_mobtv_loading_pane_t_ParamLimits

0x0aca,	// (0x00099b6e) main_mobtv_loading_pane_t

0x815b,	// (0x000a11ff) wait_bar_pane_cp06_ParamLimits

0x815b,	// (0x000a11ff) wait_bar_pane_cp06

0xe3fb,	// (0x000a749f) main_mobtv_programe_curr_pane_t1

0xe409,	// (0x000a74ad) main_mobtv_programe_curr_pane_t2

0x0001,

0x0acf,	// (0x00099b73) main_mobtv_programe_curr_pane_t

0xe417,	// (0x000a74bb) main_mobtv_programe_next_pane_t1

0xe425,	// (0x000a74c9) main_mobtv_programe_next_pane_t2

0xe433,	// (0x000a74d7) main_mobtv_programe_next_pane_t3

0x0002,

0x0ad4,	// (0x00099b78) main_mobtv_programe_next_pane_t

0xa075,	// (0x000a3119) bg_popup_mobtv_noti_window_pane

0xe441,	// (0x000a74e5) popup_mobtv_noti_window_g1

0xe449,	// (0x000a74ed) popup_mobtv_noti_window_t1

0xe457,	// (0x000a74fb) popup_mobtv_noti_window_t2

0x0001,

0x0adb,	// (0x00099b7f) popup_mobtv_noti_window_t

0xcd01,	// (0x000a5da5) bg_popup_mobtv_noti_window_pane_g1

0x112e,	// (0x0009a1d2) sc_clock_pane

0x112e,	// (0x0009a1d2) main_fs_bigclock_pane

0x7708,	// (0x000a07ac) blid2_tripm_pane_t4_ParamLimits

0x7708,	// (0x000a07ac) blid2_tripm_pane_t4

0x8167,	// (0x000a120b) sc_clock_pane_g1_ParamLimits

0x8167,	// (0x000a120b) sc_clock_pane_g1

0x8175,	// (0x000a1219) sc_clock_pane_t1_ParamLimits

0x8175,	// (0x000a1219) sc_clock_pane_t1

0x8188,	// (0x000a122c) sc_clock_pane_t2_ParamLimits

0x8188,	// (0x000a122c) sc_clock_pane_t2

0x819a,	// (0x000a123e) sc_clock_pane_t3_ParamLimits

0x819a,	// (0x000a123e) sc_clock_pane_t3

0x0004,

0xf975,	// (0x000a8a19) sc_clock_pane_t_ParamLimits

0xf975,	// (0x000a8a19) sc_clock_pane_t

0x90c9,	// (0x000a216d) main_fs_bigclock_indicator_pane_ParamLimits

0x90c9,	// (0x000a216d) main_fs_bigclock_indicator_pane

0x821d,	// (0x000a12c1) main_fs_bigclock_pane_g1_ParamLimits

0x821d,	// (0x000a12c1) main_fs_bigclock_pane_g1

0x90d5,	// (0x000a2179) main_fs_bigclock_pane_t1_ParamLimits

0x90d5,	// (0x000a2179) main_fs_bigclock_pane_t1

0x90e7,	// (0x000a218b) main_fs_bigclock_pane_t2_ParamLimits

0x90e7,	// (0x000a218b) main_fs_bigclock_pane_t2

0x90fb,	// (0x000a219f) main_fs_bigclock_pane_t3_ParamLimits

0x90fb,	// (0x000a219f) main_fs_bigclock_pane_t3

0x0002,

0xfb00,	// (0x000a8ba4) main_fs_bigclock_pane_t_ParamLimits

0xfb00,	// (0x000a8ba4) main_fs_bigclock_pane_t

0xecd0,	// (0x000a7d74) main_fs_bigclock_indicator_pane_g1

0xe176,	// (0x000a721a) ncim_query_content_pane_g2_ParamLimits

0xe176,	// (0x000a721a) ncim_query_content_pane_g2

0x0001,

0xf950,	// (0x000a89f4) ncim_query_content_pane_g_ParamLimits

0xf950,	// (0x000a89f4) ncim_query_content_pane_g

0x81ae,	// (0x000a1252) sc_clock_pane_t4_ParamLimits

0x81ae,	// (0x000a1252) sc_clock_pane_t4

0x431b,	// (0x0009d3bf) main_radioblah_pane

0x61c3,	// (0x0009f267) cell_call4_button_pane_t1_copy1_ParamLimits

0x61c3,	// (0x0009f267) cell_call4_button_pane_t1_copy1

0x7df1,	// (0x000a0e95) main_ncimui_pane_t1_ParamLimits

0x7df1,	// (0x000a0e95) main_ncimui_pane_t1

0x7e0b,	// (0x000a0eaf) main_ncimui_pane_t2_ParamLimits

0x7e0b,	// (0x000a0eaf) main_ncimui_pane_t2

0x0002,

0xf949,	// (0x000a89ed) main_ncimui_pane_t_ParamLimits

0xf949,	// (0x000a89ed) main_ncimui_pane_t

0xe59d,	// (0x000a7641) main_radioblah_anim_pane_ParamLimits

0xe59d,	// (0x000a7641) main_radioblah_anim_pane

0xe5ae,	// (0x000a7652) main_radioblah_info_pane_ParamLimits

0xe5ae,	// (0x000a7652) main_radioblah_info_pane

0xe5c2,	// (0x000a7666) main_radioblah_pane_t1_ParamLimits

0xe5c2,	// (0x000a7666) main_radioblah_pane_t1

0xe5de,	// (0x000a7682) main_radioblah_pane_t2_ParamLimits

0xe5de,	// (0x000a7682) main_radioblah_pane_t2

0x0003,

0x0b01,	// (0x00099ba5) main_radioblah_pane_t_ParamLimits

0x0b01,	// (0x00099ba5) main_radioblah_pane_t

0x8273,	// (0x000a1317) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8273,	// (0x000a1317) main_radioblah_rocker_ctrl_pane

0xe626,	// (0x000a76ca) main_radioblah_info_pane_t1_ParamLimits

0xe626,	// (0x000a76ca) main_radioblah_info_pane_t1

0x82b8,	// (0x000a135c) main_radioblah_info_pane_t2_ParamLimits

0x82b8,	// (0x000a135c) main_radioblah_info_pane_t2

0x0003,

0xf980,	// (0x000a8a24) main_radioblah_info_pane_t_ParamLimits

0xf980,	// (0x000a8a24) main_radioblah_info_pane_t

0xcd01,	// (0x000a5da5) main_radioblah_rocker_ctrl_pane_g1

0x8368,	// (0x000a140c) main_radioblah_rocker_ctrl_pane_g2

0x8370,	// (0x000a1414) main_radioblah_rocker_ctrl_pane_g3

0x8378,	// (0x000a141c) main_radioblah_rocker_ctrl_pane_g4

0x8380,	// (0x000a1424) main_radioblah_rocker_ctrl_pane_g5

0x8388,	// (0x000a142c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf989,	// (0x000a8a2d) main_radioblah_rocker_ctrl_pane_g

0x7d97,	// (0x000a0e3b) main_cset_text2_pane_t1_copy1_ParamLimits

0x624e,	// (0x0009f2f2) cam4_image_uncrop_qvga_pane

0x639d,	// (0x0009f441) vid4_image_uncrop_qcif_pane

0x7896,	// (0x000a093a) cam6_image_uncrop_qvga_pane_ParamLimits

0x7896,	// (0x000a093a) cam6_image_uncrop_qvga_pane

0xde71,	// (0x000a6f15) vid6_image_uncrop_qcif_pane_ParamLimits

0xde71,	// (0x000a6f15) vid6_image_uncrop_qcif_pane

0xa075,	// (0x000a3119) bg_popup_preview_window_pane_cp03

0xe128,	// (0x000a71cc) list_cset_text2_pane

0xe130,	// (0x000a71d4) main_cset6_text2_pane_g1

0xe138,	// (0x000a71dc) main_cset6_text2_pane_t1

0x8390,	// (0x000a1434) list_cset_text2_pane_t1_ParamLimits

0x8390,	// (0x000a1434) list_cset_text2_pane_t1

0x431b,	// (0x0009d3bf) main_radioblah_pane_ParamLimits

0x810d,	// (0x000a11b1) main_mobtv_info_pane_t3_ParamLimits

0x810d,	// (0x000a11b1) main_mobtv_info_pane_t3

0x8261,	// (0x000a1305) main_radioblah_pane_g1

0x828c,	// (0x000a1330) main_radioblah_info_pane_g1

0x830d,	// (0x000a13b1) main_radioblah_info_pane_t3_ParamLimits

0x830d,	// (0x000a13b1) main_radioblah_info_pane_t3

0x3024,	// (0x0009c0c8) highlight_cell_cale_month_pane_ParamLimits

0x3024,	// (0x0009c0c8) highlight_cell_cale_month_pane

0x112e,	// (0x0009a1d2) main_phob_fisheye_pane

0xd02b,	// (0x000a60cf) scroll_pane_cp0031_ParamLimits

0xd02b,	// (0x000a60cf) scroll_pane_cp0031

0xdf7f,	// (0x000a7023) wait_bar_pane_cp08_ParamLimits

0x7aa9,	// (0x000a0b4d) cset_list_set_pane_copy1_ParamLimits

0xe660,	// (0x000a7704) highlight_cell_cale_month_pane_g1

0x83b1,	// (0x000a1455) highlight_cell_cale_month_pane_t1

0xdbf4,	// (0x000a6c98) list_gen_pane_cp01

0xd845,	// (0x000a68e9) scroll_pane_01

0x83bf,	// (0x000a1463) list_single_double_fisheye_pane

0x83c8,	// (0x000a146c) list_double_fisheye_pane_g1_ParamLimits

0x83c8,	// (0x000a146c) list_double_fisheye_pane_g1

0x83d4,	// (0x000a1478) list_double_fisheye_pane_g2_ParamLimits

0x83d4,	// (0x000a1478) list_double_fisheye_pane_g2

0x83e8,	// (0x000a148c) list_double_fisheye_pane_g3_ParamLimits

0x83e8,	// (0x000a148c) list_double_fisheye_pane_g3

0x0004,

0xf996,	// (0x000a8a3a) list_double_fisheye_pane_g_ParamLimits

0xf996,	// (0x000a8a3a) list_double_fisheye_pane_g

0x8411,	// (0x000a14b5) list_double_fisheye_pane_t1_ParamLimits

0x8411,	// (0x000a14b5) list_double_fisheye_pane_t1

0x842c,	// (0x000a14d0) list_double_fisheye_pane_t2_ParamLimits

0x842c,	// (0x000a14d0) list_double_fisheye_pane_t2

0x0001,

0xf9a1,	// (0x000a8a45) list_double_fisheye_pane_t_ParamLimits

0xf9a1,	// (0x000a8a45) list_double_fisheye_pane_t

0x112e,	// (0x0009a1d2) main_call5_pane

0x81d4,	// (0x000a1278) sc_swipe_pane_ParamLimits

0x81d4,	// (0x000a1278) sc_swipe_pane

0x845a,	// (0x000a14fe) call5_image_pane_ParamLimits

0x845a,	// (0x000a14fe) call5_image_pane

0x846a,	// (0x000a150e) call5_swipe_1_pane_ParamLimits

0x846a,	// (0x000a150e) call5_swipe_1_pane

0x8476,	// (0x000a151a) call5_swipe_2_pane_ParamLimits

0x8476,	// (0x000a151a) call5_swipe_2_pane

0x8490,	// (0x000a1534) popup_call5_audio_first_window_ParamLimits

0x8490,	// (0x000a1534) popup_call5_audio_first_window

0xcf4f,	// (0x000a5ff3) call5_swipe_1_pane_g1_ParamLimits

0xcf4f,	// (0x000a5ff3) call5_swipe_1_pane_g1

0xe668,	// (0x000a770c) call5_swipe_1_pane_g2_ParamLimits

0xe668,	// (0x000a770c) call5_swipe_1_pane_g2

0x0001,

0xf9a6,	// (0x000a8a4a) call5_swipe_1_pane_g_ParamLimits

0xf9a6,	// (0x000a8a4a) call5_swipe_1_pane_g

0xe674,	// (0x000a7718) call5_swipe_1_pane_t1_ParamLimits

0xe674,	// (0x000a7718) call5_swipe_1_pane_t1

0xcf4f,	// (0x000a5ff3) call5_swipe_2_pane_g1_ParamLimits

0xcf4f,	// (0x000a5ff3) call5_swipe_2_pane_g1

0xe6a4,	// (0x000a7748) call5_swipe_2_pane_g2_ParamLimits

0xe6a4,	// (0x000a7748) call5_swipe_2_pane_g2

0x0001,

0x0b35,	// (0x00099bd9) call5_swipe_2_pane_g_ParamLimits

0x0b35,	// (0x00099bd9) call5_swipe_2_pane_g

0xe6b0,	// (0x000a7754) call5_swipe_2_pane_t1_ParamLimits

0xe6b0,	// (0x000a7754) call5_swipe_2_pane_t1

0xe6c5,	// (0x000a7769) sc_swipe_pane_g1_ParamLimits

0xe6c5,	// (0x000a7769) sc_swipe_pane_g1

0xe6d2,	// (0x000a7776) sc_swipe_pane_g2_ParamLimits

0xe6d2,	// (0x000a7776) sc_swipe_pane_g2

0x0001,

0x0b3a,	// (0x00099bde) sc_swipe_pane_g_ParamLimits

0x0b3a,	// (0x00099bde) sc_swipe_pane_g

0xe6de,	// (0x000a7782) sc_swipe_pane_t1_ParamLimits

0xe6de,	// (0x000a7782) sc_swipe_pane_t1

0x112e,	// (0x0009a1d2) main_cmail_launcher_pane

0x849e,	// (0x000a1542) aid_size_cell_cmail_l_ParamLimits

0x849e,	// (0x000a1542) aid_size_cell_cmail_l

0x84ac,	// (0x000a1550) grid_cmail_l_pane_ParamLimits

0x84ac,	// (0x000a1550) grid_cmail_l_pane

0x84bc,	// (0x000a1560) cell_cmail_l_pane_ParamLimits

0x84bc,	// (0x000a1560) cell_cmail_l_pane

0xe6f3,	// (0x000a7797) cell_cmail_l_pane_g1_ParamLimits

0xe6f3,	// (0x000a7797) cell_cmail_l_pane_g1

0xe6ff,	// (0x000a77a3) cell_cmail_l_pane_t1_ParamLimits

0xe6ff,	// (0x000a77a3) cell_cmail_l_pane_t1

0xe715,	// (0x000a77b9) cell_cmail_l_pane_t2_ParamLimits

0xe715,	// (0x000a77b9) cell_cmail_l_pane_t2

0x0001,

0x0b3f,	// (0x00099be3) cell_cmail_l_pane_t_ParamLimits

0x0b3f,	// (0x00099be3) cell_cmail_l_pane_t

0xab6b,	// (0x000a3c0f) grid_highlight_pane_cp018_ParamLimits

0xab6b,	// (0x000a3c0f) grid_highlight_pane_cp018

0x0f84,	// (0x0009a028) main2_pane_ParamLimits

0x0f84,	// (0x0009a028) main2_pane

0xa8f7,	// (0x000a399b) popup_sp_fs_action_menu_bg_pane_g1

0xa8ff,	// (0x000a39a3) popup_sp_fs_action_menu_bg_pane_g2

0xa907,	// (0x000a39ab) popup_sp_fs_action_menu_bg_pane_g3

0xa90f,	// (0x000a39b3) popup_sp_fs_action_menu_bg_pane_g4

0xa917,	// (0x000a39bb) popup_sp_fs_action_menu_bg_pane_g5

0xa91f,	// (0x000a39c3) popup_sp_fs_action_menu_bg_pane_g6

0xa927,	// (0x000a39cb) popup_sp_fs_action_menu_bg_pane_g7

0xa92f,	// (0x000a39d3) popup_sp_fs_action_menu_bg_pane_g8

0xa937,	// (0x000a39db) popup_sp_fs_action_menu_bg_pane_g9

0xa93f,	// (0x000a39e3) popup_sp_fs_action_menu_bg_pane_g10

0xa93f,	// (0x000a39e3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000a822e) popup_sp_fs_action_menu_bg_pane_g

0x1e29,	// (0x0009aecd) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x2_t3_g3_g1

0x1e35,	// (0x0009aed9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1e35,	// (0x0009aed9) list_medium_line_x2_t3_g3_g2

0x1e41,	// (0x0009aee5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1e41,	// (0x0009aee5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000a82dc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000a82dc) list_medium_line_x2_t3_g3_g

0x1e4d,	// (0x0009aef1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1e4d,	// (0x0009aef1) list_medium_line_x2_t3_g3_t1

0x1e62,	// (0x0009af06) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1e62,	// (0x0009af06) list_medium_line_x2_t3_g3_t2

0x1e74,	// (0x0009af18) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1e74,	// (0x0009af18) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000a82e3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000a82e3) list_medium_line_x2_t3_g3_t

0x1e29,	// (0x0009aecd) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x2_t3_g2_g1

0x1e41,	// (0x0009aee5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1e41,	// (0x0009aee5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000a82ea) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000a82ea) list_medium_line_x2_t3_g2_g

0x1e89,	// (0x0009af2d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1e89,	// (0x0009af2d) list_medium_line_x2_t3_g2_t1

0x1e9f,	// (0x0009af43) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1e9f,	// (0x0009af43) list_medium_line_x2_t3_g2_t2

0x1e74,	// (0x0009af18) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1e74,	// (0x0009af18) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000a82ef) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000a82ef) list_medium_line_x2_t3_g2_t

0x1e29,	// (0x0009aecd) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x2_t4_g4_g1

0x1eb1,	// (0x0009af55) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1eb1,	// (0x0009af55) list_medium_line_x2_t4_g4_g2

0x1e35,	// (0x0009aed9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1e35,	// (0x0009aed9) list_medium_line_x2_t4_g4_g3

0x1ebd,	// (0x0009af61) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ebd,	// (0x0009af61) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000a82f6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000a82f6) list_medium_line_x2_t4_g4_g

0x1ec9,	// (0x0009af6d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1ec9,	// (0x0009af6d) list_medium_line_x2_t4_g4_t1

0x1ee3,	// (0x0009af87) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1ee3,	// (0x0009af87) list_medium_line_x2_t4_g4_t2

0x1ef9,	// (0x0009af9d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1ef9,	// (0x0009af9d) list_medium_line_x2_t4_g4_t3

0x1f0e,	// (0x0009afb2) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1f0e,	// (0x0009afb2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000a82ff) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000a82ff) list_medium_line_x2_t4_g4_t

0x1e29,	// (0x0009aecd) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x2_t2_g4_g1

0x1eb1,	// (0x0009af55) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1eb1,	// (0x0009af55) list_medium_line_x2_t2_g4_g2

0x1e35,	// (0x0009aed9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1e35,	// (0x0009aed9) list_medium_line_x2_t2_g4_g3

0x1e41,	// (0x0009aee5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1e41,	// (0x0009aee5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2af,	// (0x000a8353) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2af,	// (0x000a8353) list_medium_line_x2_t2_g4_g

0x304a,	// (0x0009c0ee) list_medium_line_x2_t2_g4_t1_ParamLimits

0x304a,	// (0x0009c0ee) list_medium_line_x2_t2_g4_t1

0x1e74,	// (0x0009af18) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1e74,	// (0x0009af18) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b8,	// (0x000a835c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b8,	// (0x000a835c) list_medium_line_x2_t2_g4_t

0x1e29,	// (0x0009aecd) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x2_t2_g3_g1

0x1e35,	// (0x0009aed9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1e35,	// (0x0009aed9) list_medium_line_x2_t2_g3_g2

0x1e41,	// (0x0009aee5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1e41,	// (0x0009aee5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000a82dc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000a82dc) list_medium_line_x2_t2_g3_g

0x305f,	// (0x0009c103) list_medium_line_x2_t2_g3_t1_ParamLimits

0x305f,	// (0x0009c103) list_medium_line_x2_t2_g3_t1

0x1e74,	// (0x0009af18) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1e74,	// (0x0009af18) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2bd,	// (0x000a8361) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2bd,	// (0x000a8361) list_medium_line_x2_t2_g3_t

0x3249,	// (0x0009c2ed) main_sp_fs_list_pane_ParamLimits

0x3249,	// (0x0009c2ed) main_sp_fs_list_pane

0x3255,	// (0x0009c2f9) sp_fs_scroll_pane_ParamLimits

0x3255,	// (0x0009c2f9) sp_fs_scroll_pane

0x3261,	// (0x0009c305) list_medium_line_x2_t3_t1

0x3271,	// (0x0009c315) list_medium_line_x2_t3_t2

0x327f,	// (0x0009c323) list_medium_line_x2_t3_t3

0x0002,

0xf2e2,	// (0x000a8386) list_medium_line_x2_t3_t

0x328d,	// (0x0009c331) list_medium_line_x3_t4_t1

0x329d,	// (0x0009c341) list_medium_line_x3_t4_t2

0x32ab,	// (0x0009c34f) list_medium_line_x3_t4_t3

0x327f,	// (0x0009c323) list_medium_line_x3_t4_t4

0x0003,

0xf2e9,	// (0x000a838d) list_medium_line_x3_t4_t

0x32b9,	// (0x0009c35d) list_medium_line_x4_t5_t1

0x32c9,	// (0x0009c36d) list_medium_line_x4_t5_t2

0x32ab,	// (0x0009c34f) list_medium_line_x4_t5_t3

0x32d7,	// (0x0009c37b) list_medium_line_x4_t5_t4

0x327f,	// (0x0009c323) list_medium_line_x4_t5_t5

0x0004,

0xf2f2,	// (0x000a8396) list_medium_line_x4_t5_t

0x1e29,	// (0x0009aecd) list_medium_line_t4_g4_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_t4_g4_g1

0x1ebd,	// (0x0009af61) list_medium_line_t4_g4_g2_ParamLimits

0x1ebd,	// (0x0009af61) list_medium_line_t4_g4_g2

0x32e5,	// (0x0009c389) list_medium_line_t4_g4_g3_ParamLimits

0x32e5,	// (0x0009c389) list_medium_line_t4_g4_g3

0x1e41,	// (0x0009aee5) list_medium_line_t4_g4_g4_ParamLimits

0x1e41,	// (0x0009aee5) list_medium_line_t4_g4_g4

0x0003,

0xf2fd,	// (0x000a83a1) list_medium_line_t4_g4_g_ParamLimits

0xf2fd,	// (0x000a83a1) list_medium_line_t4_g4_g

0x32f1,	// (0x0009c395) list_medium_line_t4_g4_t1_ParamLimits

0x32f1,	// (0x0009c395) list_medium_line_t4_g4_t1

0x3306,	// (0x0009c3aa) list_medium_line_t4_g4_t2_ParamLimits

0x3306,	// (0x0009c3aa) list_medium_line_t4_g4_t2

0x331b,	// (0x0009c3bf) list_medium_line_t4_g4_t3_ParamLimits

0x331b,	// (0x0009c3bf) list_medium_line_t4_g4_t3

0x1e74,	// (0x0009af18) list_medium_line_t4_g4_t4_ParamLimits

0x1e74,	// (0x0009af18) list_medium_line_t4_g4_t4

0x0003,

0xf306,	// (0x000a83aa) list_medium_line_t4_g4_t_ParamLimits

0xf306,	// (0x000a83aa) list_medium_line_t4_g4_t

0x343b,	// (0x0009c4df) chi_dic_find_pane_g1

0x4337,	// (0x0009d3db) main_tport_pane

0x6d91,	// (0x0009fe35) list_medium_line_plain_t1

0x6e71,	// (0x0009ff15) list_medium_line_t2_g2_g1_ParamLimits

0x6e71,	// (0x0009ff15) list_medium_line_t2_g2_g1

0x6e7d,	// (0x0009ff21) list_medium_line_t2_g2_g2_ParamLimits

0x6e7d,	// (0x0009ff21) list_medium_line_t2_g2_g2

0x0001,

0xf7a7,	// (0x000a884b) list_medium_line_t2_g2_g_ParamLimits

0xf7a7,	// (0x000a884b) list_medium_line_t2_g2_g

0x6e89,	// (0x0009ff2d) list_medium_line_t2_g2_t1_ParamLimits

0x6e89,	// (0x0009ff2d) list_medium_line_t2_g2_t1

0x6ea3,	// (0x0009ff47) list_medium_line_t2_g2_t2_ParamLimits

0x6ea3,	// (0x0009ff47) list_medium_line_t2_g2_t2

0x0001,

0xf7ac,	// (0x000a8850) list_medium_line_t2_g2_t_ParamLimits

0xf7ac,	// (0x000a8850) list_medium_line_t2_g2_t

0x9d6c,	// (0x000a2e10) aid_sp_fs_list_icon_a_sm

0x9e8f,	// (0x000a2f33) aid_sp_fs_list_icon_d

0xab97,	// (0x000a3c3b) aid_sp_fs_text_primary

0xaba0,	// (0x000a3c44) aid_sp_fs_text_secondary

0x754a,	// (0x000a05ee) list_medium_line

0x754a,	// (0x000a05ee) list_medium_line_g2

0x754a,	// (0x000a05ee) list_medium_line_g3

0x754a,	// (0x000a05ee) list_medium_line_plain

0x754a,	// (0x000a05ee) list_medium_line_plain_t2

0x754a,	// (0x000a05ee) list_medium_line_plain_t3

0x754a,	// (0x000a05ee) list_medium_line_right_icon

0x754a,	// (0x000a05ee) list_medium_line_right_iconx2

0x754a,	// (0x000a05ee) list_medium_line_t2

0x754a,	// (0x000a05ee) list_medium_line_t2_g2

0x754a,	// (0x000a05ee) list_medium_line_t2_g3

0x754a,	// (0x000a05ee) list_medium_line_t2_right_icon

0x754a,	// (0x000a05ee) list_medium_line_t2_right_iconx2

0x754a,	// (0x000a05ee) list_medium_line_t3

0x754a,	// (0x000a05ee) list_medium_line_t3_g2

0x754a,	// (0x000a05ee) list_medium_line_t3_g3

0x754a,	// (0x000a05ee) list_medium_line_t3_right_iconx2

0x7553,	// (0x000a05f7) list_medium_line_t4_g4

0x755c,	// (0x000a0600) list_medium_line_x2

0x755c,	// (0x000a0600) list_medium_line_x2_t2_g2

0x755c,	// (0x000a0600) list_medium_line_x2_t2_g3

0x755c,	// (0x000a0600) list_medium_line_x2_t2_g4

0x755c,	// (0x000a0600) list_medium_line_x2_t3

0x755c,	// (0x000a0600) list_medium_line_x2_t3_g2

0x755c,	// (0x000a0600) list_medium_line_x2_t3_g3

0x755c,	// (0x000a0600) list_medium_line_x2_t3_g4

0x755c,	// (0x000a0600) list_medium_line_x2_t4_g2

0x755c,	// (0x000a0600) list_medium_line_x2_t4_g4

0x7565,	// (0x000a0609) list_medium_line_x3

0x7565,	// (0x000a0609) list_medium_line_x3_t4

0x7565,	// (0x000a0609) list_medium_line_x3_t4_g4

0x7553,	// (0x000a05f7) list_medium_line_x4_t4

0x7553,	// (0x000a05f7) list_medium_line_x4_t4_g7

0x7553,	// (0x000a05f7) list_medium_line_x4_t5

0x756e,	// (0x000a0612) list_single_fs_dyc_pane_ParamLimits

0x756e,	// (0x000a0612) list_single_fs_dyc_pane

0x1e29,	// (0x0009aecd) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x4_t4_g7_g1

0x7cc1,	// (0x000a0d65) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7cc1,	// (0x000a0d65) list_medium_line_x4_t4_g7_g2

0x7ccd,	// (0x000a0d71) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ccd,	// (0x000a0d71) list_medium_line_x4_t4_g7_g3

0x7cdc,	// (0x000a0d80) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7cdc,	// (0x000a0d80) list_medium_line_x4_t4_g7_g4

0x7ce8,	// (0x000a0d8c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ce8,	// (0x000a0d8c) list_medium_line_x4_t4_g7_g5

0x7cf7,	// (0x000a0d9b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7cf7,	// (0x000a0d9b) list_medium_line_x4_t4_g7_g6

0x7d06,	// (0x000a0daa) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d06,	// (0x000a0daa) list_medium_line_x4_t4_g7_g7

0x0006,

0xf92a,	// (0x000a89ce) list_medium_line_x4_t4_g7_g_ParamLimits

0xf92a,	// (0x000a89ce) list_medium_line_x4_t4_g7_g

0x7d12,	// (0x000a0db6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d12,	// (0x000a0db6) list_medium_line_x4_t4_g7_t1

0x7d27,	// (0x000a0dcb) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d27,	// (0x000a0dcb) list_medium_line_x4_t4_g7_t2

0x7d3c,	// (0x000a0de0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d3c,	// (0x000a0de0) list_medium_line_x4_t4_g7_t3

0x7d51,	// (0x000a0df5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d51,	// (0x000a0df5) list_medium_line_x4_t4_g7_t4

0x7d63,	// (0x000a0e07) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d63,	// (0x000a0e07) list_medium_line_x4_t4_g7_t5

0x0004,

0xf939,	// (0x000a89dd) list_medium_line_x4_t4_g7_t_ParamLimits

0xf939,	// (0x000a89dd) list_medium_line_x4_t4_g7_t

0x7d75,	// (0x000a0e19) list_single_dyc_row_pane_ParamLimits

0x7d75,	// (0x000a0e19) list_single_dyc_row_pane

0x844e,	// (0x000a14f2) call5_gesture_pane_ParamLimits

0x844e,	// (0x000a14f2) call5_gesture_pane

0x8482,	// (0x000a1526) call5_windows_pane_ParamLimits

0x8482,	// (0x000a1526) call5_windows_pane

0x84d5,	// (0x000a1579) call5_swipe_1_pane_cp_ParamLimits

0x84d5,	// (0x000a1579) call5_swipe_1_pane_cp

0x84e1,	// (0x000a1585) call5_swipe_2_pane_cp_ParamLimits

0x84e1,	// (0x000a1585) call5_swipe_2_pane_cp

0xaa23,	// (0x000a3ac7) call5_image_pane_cp

0x84ed,	// (0x000a1591) popup_call5_audio_first_window_cp_ParamLimits

0x84ed,	// (0x000a1591) popup_call5_audio_first_window_cp

0xe6c5,	// (0x000a7769) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6c5,	// (0x000a7769) call5_swipe_1_pane_g1_cp

0xe732,	// (0x000a77d6) call5_swipe_1_pane_g2_cp

0xe6de,	// (0x000a7782) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6de,	// (0x000a7782) call5_swipe_1_pane_t1_cp

0xe6c5,	// (0x000a7769) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6c5,	// (0x000a7769) call5_swipe_2_pane_g1_cp

0xe73a,	// (0x000a77de) call5_swipe_2_pane_g2_cp

0xe742,	// (0x000a77e6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe742,	// (0x000a77e6) call5_swipe_2_pane_t1_cp

0xab6b,	// (0x000a3c0f) main_sp_fs_email_pane

0xe757,	// (0x000a77fb) main_sp_fs_listscroll_pane_te

0x84fb,	// (0x000a159f) popup_sp_fs_action_menu_pane_ParamLimits

0x84fb,	// (0x000a159f) popup_sp_fs_action_menu_pane

0xcd01,	// (0x000a5da5) bg_sp_fs_ctrlbar_pane_g1

0xe760,	// (0x000a7804) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe769,	// (0x000a780d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe772,	// (0x000a7816) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd01,	// (0x000a5da5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0b44,	// (0x00099be8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcada,	// (0x000a5b7e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcada,	// (0x000a5b7e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe77b,	// (0x000a781f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe77b,	// (0x000a781f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe787,	// (0x000a782b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe787,	// (0x000a782b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0b4d,	// (0x00099bf1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0b4d,	// (0x00099bf1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe793,	// (0x000a7837) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe793,	// (0x000a7837) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x853f,	// (0x000a15e3) list_medium_line_t2_right_icon_g1

0x8547,	// (0x000a15eb) list_medium_line_t2_right_icon_t1

0x8557,	// (0x000a15fb) list_medium_line_t2_right_icon_t2

0x0001,

0xf9ab,	// (0x000a8a4f) list_medium_line_t2_right_icon_t

0xc8ed,	// (0x000a5991) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8ed,	// (0x000a5991) bg_sp_fs_ctrlbar_pane

0x85a8,	// (0x000a164c) main_sp_fs_ctrlbar_button_pane_cp01

0x85b0,	// (0x000a1654) main_sp_fs_ctrlbar_ddmenu_pane

0xe7e5,	// (0x000a7889) main_sp_fs_ctrlbar_pane_g1

0xe7f1,	// (0x000a7895) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0b57,	// (0x00099bfb) main_sp_fs_ctrlbar_pane_g

0xe7fd,	// (0x000a78a1) main_sp_fs_ctrlbar_pane_t1

0x85ba,	// (0x000a165e) main_sp_fs_ctrlbar_pane

0x85d0,	// (0x000a1674) main_sp_fs_listscroll_pane_te_cp01

0x85e1,	// (0x000a1685) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85e1,	// (0x000a1685) popup_sp_fs_action_menu_pane_cp01

0xab6b,	// (0x000a3c0f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xab6b,	// (0x000a3c0f) bg_sp_fs_highlight_list_pane_cp01

0x9d98,	// (0x000a2e3c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9d98,	// (0x000a2e3c) sp_fs_action_menu_list_gene_pane_g1

0xe82d,	// (0x000a78d1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe82d,	// (0x000a78d1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xf9b0,	// (0x000a8a54) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xf9b0,	// (0x000a8a54) sp_fs_action_menu_list_gene_pane_g

0x9da7,	// (0x000a2e4b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9da7,	// (0x000a2e4b) sp_fs_action_menu_list_gene_pane_t1

0x9dbf,	// (0x000a2e63) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9dbf,	// (0x000a2e63) sp_fs_action_menu_list_gene_pane

0xe83a,	// (0x000a78de) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe83a,	// (0x000a78de) popup_sp_fs_action_menu_bg_pane

0x9dde,	// (0x000a2e82) sp_fs_action_menu_list_pane_ParamLimits

0x9dde,	// (0x000a2e82) sp_fs_action_menu_list_pane

0x860b,	// (0x000a16af) sp_fs_scroll_pane_cp01_ParamLimits

0x860b,	// (0x000a16af) sp_fs_scroll_pane_cp01

0x8631,	// (0x000a16d5) list_medium_line_plain_t2_t1

0x8641,	// (0x000a16e5) list_medium_line_plain_t2_t2

0x0001,

0xf9b5,	// (0x000a8a59) list_medium_line_plain_t2_t

0x864f,	// (0x000a16f3) list_medium_line_plain_t3_t1

0x865f,	// (0x000a1703) list_medium_line_plain_t3_t2

0x866d,	// (0x000a1711) list_medium_line_plain_t3_t3

0x0002,

0xf9ba,	// (0x000a8a5e) list_medium_line_plain_t3_t

0x1e29,	// (0x0009aecd) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x2_t2_g2_g1

0x1e41,	// (0x0009aee5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1e41,	// (0x0009aee5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000a82ea) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000a82ea) list_medium_line_x2_t2_g2_g

0x32f1,	// (0x0009c395) list_medium_line_x2_t2_g2_t1_ParamLimits

0x32f1,	// (0x0009c395) list_medium_line_x2_t2_g2_t1

0x1e74,	// (0x0009af18) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1e74,	// (0x0009af18) list_medium_line_x2_t2_g2_t2

0x0001,

0xf9c1,	// (0x000a8a65) list_medium_line_x2_t2_g2_t_ParamLimits

0xf9c1,	// (0x000a8a65) list_medium_line_x2_t2_g2_t

0x1e29,	// (0x0009aecd) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x2_t4_g2_g1

0x867b,	// (0x000a171f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x867b,	// (0x000a171f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf9c6,	// (0x000a8a6a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf9c6,	// (0x000a8a6a) list_medium_line_x2_t4_g2_g

0x868d,	// (0x000a1731) list_medium_line_x2_t4_g2_t1_ParamLimits

0x868d,	// (0x000a1731) list_medium_line_x2_t4_g2_t1

0x86a7,	// (0x000a174b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86a7,	// (0x000a174b) list_medium_line_x2_t4_g2_t2

0x86bd,	// (0x000a1761) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86bd,	// (0x000a1761) list_medium_line_x2_t4_g2_t3

0x1e74,	// (0x0009af18) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1e74,	// (0x0009af18) list_medium_line_x2_t4_g2_t4

0x0003,

0xf9cb,	// (0x000a8a6f) list_medium_line_x2_t4_g2_t_ParamLimits

0xf9cb,	// (0x000a8a6f) list_medium_line_x2_t4_g2_t

0x86d2,	// (0x000a1776) list_medium_line_t3_right_iconx2_g1

0x853f,	// (0x000a15e3) list_medium_line_t3_right_iconx2_g2

0x86da,	// (0x000a177e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf9d4,	// (0x000a8a78) list_medium_line_t3_right_iconx2_g

0x86e2,	// (0x000a1786) list_medium_line_t3_right_iconx2_t1

0x86f2,	// (0x000a1796) list_medium_line_t3_right_iconx2_t2

0x0001,

0xf9db,	// (0x000a8a7f) list_medium_line_t3_right_iconx2_t

0x1e29,	// (0x0009aecd) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x3_t4_g4_g1

0x1e35,	// (0x0009aed9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1e35,	// (0x0009aed9) list_medium_line_x3_t4_g4_g2

0x1ebd,	// (0x0009af61) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ebd,	// (0x0009af61) list_medium_line_x3_t4_g4_g3

0x8700,	// (0x000a17a4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8700,	// (0x000a17a4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf9e0,	// (0x000a8a84) list_medium_line_x3_t4_g4_g_ParamLimits

0xf9e0,	// (0x000a8a84) list_medium_line_x3_t4_g4_g

0x870c,	// (0x000a17b0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x870c,	// (0x000a17b0) list_medium_line_x3_t4_g4_t1

0x8723,	// (0x000a17c7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8723,	// (0x000a17c7) list_medium_line_x3_t4_g4_t2

0x3306,	// (0x0009c3aa) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3306,	// (0x0009c3aa) list_medium_line_x3_t4_g4_t3

0x8738,	// (0x000a17dc) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8738,	// (0x000a17dc) list_medium_line_x3_t4_g4_t4

0x0003,

0xf9e9,	// (0x000a8a8d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf9e9,	// (0x000a8a8d) list_medium_line_x3_t4_g4_t

0x8755,	// (0x000a17f9) list_single_dyc_row_text_pane_t1_ParamLimits

0x8755,	// (0x000a17f9) list_single_dyc_row_text_pane_t1

0x878c,	// (0x000a1830) list_single_dyc_row_text_pane_t2_ParamLimits

0x878c,	// (0x000a1830) list_single_dyc_row_text_pane_t2

0x9dfe,	// (0x000a2ea2) list_single_dyc_row_text_pane_t3_ParamLimits

0x9dfe,	// (0x000a2ea2) list_single_dyc_row_text_pane_t3

0x0005,

0xf9f2,	// (0x000a8a96) list_single_dyc_row_text_pane_t_ParamLimits

0xf9f2,	// (0x000a8a96) list_single_dyc_row_text_pane_t

0x9e22,	// (0x000a2ec6) list_single_dyc_row_pane_g1_ParamLimits

0x9e22,	// (0x000a2ec6) list_single_dyc_row_pane_g1

0x9e2e,	// (0x000a2ed2) list_single_dyc_row_pane_g2_ParamLimits

0x9e2e,	// (0x000a2ed2) list_single_dyc_row_pane_g2

0x9e3a,	// (0x000a2ede) list_single_dyc_row_pane_g3_ParamLimits

0x9e3a,	// (0x000a2ede) list_single_dyc_row_pane_g3

0x9e46,	// (0x000a2eea) list_single_dyc_row_pane_g4_ParamLimits

0x9e46,	// (0x000a2eea) list_single_dyc_row_pane_g4

0x0003,

0xf9ff,	// (0x000a8aa3) list_single_dyc_row_pane_g_ParamLimits

0xf9ff,	// (0x000a8aa3) list_single_dyc_row_pane_g

0x9e52,	// (0x000a2ef6) list_single_dyc_row_text_pane_ParamLimits

0x9e52,	// (0x000a2ef6) list_single_dyc_row_text_pane

0xa075,	// (0x000a3119) bg_sp_fs_scroll_pane

0xe848,	// (0x000a78ec) thumb_sp_fs_scroll_pane

0x6e71,	// (0x0009ff15) list_medium_line_g1_ParamLimits

0x6e71,	// (0x0009ff15) list_medium_line_g1

0x88af,	// (0x000a1953) list_medium_line_t1_ParamLimits

0x88af,	// (0x000a1953) list_medium_line_t1

0x1e29,	// (0x0009aecd) list_medium_line_x2_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x2_g1

0x1e35,	// (0x0009aed9) list_medium_line_x2_g2_ParamLimits

0x1e35,	// (0x0009aed9) list_medium_line_x2_g2

0x0001,

0xfa08,	// (0x000a8aac) list_medium_line_x2_g_ParamLimits

0xfa08,	// (0x000a8aac) list_medium_line_x2_g

0x9e71,	// (0x000a2f15) list_medium_line_x2_t1_ParamLimits

0x9e71,	// (0x000a2f15) list_medium_line_x2_t1

0x1e29,	// (0x0009aecd) list_medium_line_x3_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x3_g1

0x1e35,	// (0x0009aed9) list_medium_line_x3_g2_ParamLimits

0x1e35,	// (0x0009aed9) list_medium_line_x3_g2

0x0001,

0xfa08,	// (0x000a8aac) list_medium_line_x3_g_ParamLimits

0xfa08,	// (0x000a8aac) list_medium_line_x3_g

0x9e71,	// (0x000a2f15) list_medium_line_x3_t1_ParamLimits

0x9e71,	// (0x000a2f15) list_medium_line_x3_t1

0xe851,	// (0x000a78f5) thumb_sp_fs_scroll_pane_g1

0xe85a,	// (0x000a78fe) thumb_sp_fs_scroll_pane_g2

0xe863,	// (0x000a7907) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0bbe,	// (0x00099c62) thumb_sp_fs_scroll_pane_g

0xe851,	// (0x000a78f5) bg_sp_fs_scroll_pane_g1

0xe85a,	// (0x000a78fe) bg_sp_fs_scroll_pane_g2

0xe863,	// (0x000a7907) bg_sp_fs_scroll_pane_g3

0x0002,

0x0bbe,	// (0x00099c62) bg_sp_fs_scroll_pane_g

0x1e29,	// (0x0009aecd) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1e29,	// (0x0009aecd) list_medium_line_x2_t3_g4_g1

0x1eb1,	// (0x0009af55) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1eb1,	// (0x0009af55) list_medium_line_x2_t3_g4_g2

0x1e35,	// (0x0009aed9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1e35,	// (0x0009aed9) list_medium_line_x2_t3_g4_g3

0x1e41,	// (0x0009aee5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1e41,	// (0x0009aee5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2af,	// (0x000a8353) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2af,	// (0x000a8353) list_medium_line_x2_t3_g4_g

0x88c4,	// (0x000a1968) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88c4,	// (0x000a1968) list_medium_line_x2_t3_g4_t1

0x88da,	// (0x000a197e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88da,	// (0x000a197e) list_medium_line_x2_t3_g4_t2

0x1e74,	// (0x0009af18) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1e74,	// (0x0009af18) list_medium_line_x2_t3_g4_t3

0x0002,

0xfa0d,	// (0x000a8ab1) list_medium_line_x2_t3_g4_t_ParamLimits

0xfa0d,	// (0x000a8ab1) list_medium_line_x2_t3_g4_t

0x6e71,	// (0x0009ff15) list_medium_line_g2_g1_ParamLimits

0x6e71,	// (0x0009ff15) list_medium_line_g2_g1

0x6e7d,	// (0x0009ff21) list_medium_line_g2_g2_ParamLimits

0x6e7d,	// (0x0009ff21) list_medium_line_g2_g2

0x0001,

0xf7a7,	// (0x000a884b) list_medium_line_g2_g_ParamLimits

0xf7a7,	// (0x000a884b) list_medium_line_g2_g

0x88f4,	// (0x000a1998) list_medium_line_g2_t1_ParamLimits

0x88f4,	// (0x000a1998) list_medium_line_g2_t1

0x6e71,	// (0x0009ff15) list_medium_line_t3_g2_g1_ParamLimits

0x6e71,	// (0x0009ff15) list_medium_line_t3_g2_g1

0x6e7d,	// (0x0009ff21) list_medium_line_t3_g2_g2_ParamLimits

0x6e7d,	// (0x0009ff21) list_medium_line_t3_g2_g2

0x0001,

0xf7a7,	// (0x000a884b) list_medium_line_t3_g2_g_ParamLimits

0xf7a7,	// (0x000a884b) list_medium_line_t3_g2_g

0x8909,	// (0x000a19ad) list_medium_line_t3_g2_t1_ParamLimits

0x8909,	// (0x000a19ad) list_medium_line_t3_g2_t1

0x8923,	// (0x000a19c7) list_medium_line_t3_g2_t2_ParamLimits

0x8923,	// (0x000a19c7) list_medium_line_t3_g2_t2

0x8939,	// (0x000a19dd) list_medium_line_t3_g2_t3_ParamLimits

0x8939,	// (0x000a19dd) list_medium_line_t3_g2_t3

0x0002,

0xfa14,	// (0x000a8ab8) list_medium_line_t3_g2_t_ParamLimits

0xfa14,	// (0x000a8ab8) list_medium_line_t3_g2_t

0x853f,	// (0x000a15e3) list_medium_line_right_icon_g1

0x894f,	// (0x000a19f3) list_medium_line_right_icon_t1

0x6e71,	// (0x0009ff15) list_medium_line_t2_g1_ParamLimits

0x6e71,	// (0x0009ff15) list_medium_line_t2_g1

0x895d,	// (0x000a1a01) list_medium_line_t2_t1_ParamLimits

0x895d,	// (0x000a1a01) list_medium_line_t2_t1

0x8977,	// (0x000a1a1b) list_medium_line_t2_t2_ParamLimits

0x8977,	// (0x000a1a1b) list_medium_line_t2_t2

0x0001,

0xfa1b,	// (0x000a8abf) list_medium_line_t2_t_ParamLimits

0xfa1b,	// (0x000a8abf) list_medium_line_t2_t

0x6e71,	// (0x0009ff15) list_medium_line_t3_g1_ParamLimits

0x6e71,	// (0x0009ff15) list_medium_line_t3_g1

0x898c,	// (0x000a1a30) list_medium_line_t3_t1_ParamLimits

0x898c,	// (0x000a1a30) list_medium_line_t3_t1

0x89a6,	// (0x000a1a4a) list_medium_line_t3_t2_ParamLimits

0x89a6,	// (0x000a1a4a) list_medium_line_t3_t2

0x89bc,	// (0x000a1a60) list_medium_line_t3_t3_ParamLimits

0x89bc,	// (0x000a1a60) list_medium_line_t3_t3

0x0002,

0xfa20,	// (0x000a8ac4) list_medium_line_t3_t_ParamLimits

0xfa20,	// (0x000a8ac4) list_medium_line_t3_t

0x6e71,	// (0x0009ff15) list_medium_line_g3_g1_ParamLimits

0x6e71,	// (0x0009ff15) list_medium_line_g3_g1

0x89d1,	// (0x000a1a75) list_medium_line_g3_g2_ParamLimits

0x89d1,	// (0x000a1a75) list_medium_line_g3_g2

0x6e7d,	// (0x0009ff21) list_medium_line_g3_g3_ParamLimits

0x6e7d,	// (0x0009ff21) list_medium_line_g3_g3

0x0002,

0xfa27,	// (0x000a8acb) list_medium_line_g3_g_ParamLimits

0xfa27,	// (0x000a8acb) list_medium_line_g3_g

0x89dd,	// (0x000a1a81) list_medium_line_g3_t1_ParamLimits

0x89dd,	// (0x000a1a81) list_medium_line_g3_t1

0x6e71,	// (0x0009ff15) list_medium_line_t2_g3_g1_ParamLimits

0x6e71,	// (0x0009ff15) list_medium_line_t2_g3_g1

0x89d1,	// (0x000a1a75) list_medium_line_t2_g3_g2_ParamLimits

0x89d1,	// (0x000a1a75) list_medium_line_t2_g3_g2

0x6e7d,	// (0x0009ff21) list_medium_line_t2_g3_g3_ParamLimits

0x6e7d,	// (0x0009ff21) list_medium_line_t2_g3_g3

0x0002,

0xfa27,	// (0x000a8acb) list_medium_line_t2_g3_g_ParamLimits

0xfa27,	// (0x000a8acb) list_medium_line_t2_g3_g

0x89f2,	// (0x000a1a96) list_medium_line_t2_g3_t1_ParamLimits

0x89f2,	// (0x000a1a96) list_medium_line_t2_g3_t1

0x8a0c,	// (0x000a1ab0) list_medium_line_t2_g3_t2_ParamLimits

0x8a0c,	// (0x000a1ab0) list_medium_line_t2_g3_t2

0x0001,

0xfa2e,	// (0x000a8ad2) list_medium_line_t2_g3_t_ParamLimits

0xfa2e,	// (0x000a8ad2) list_medium_line_t2_g3_t

0x6e71,	// (0x0009ff15) list_medium_line_t3_g3_g1_ParamLimits

0x6e71,	// (0x0009ff15) list_medium_line_t3_g3_g1

0x89d1,	// (0x000a1a75) list_medium_line_t3_g3_g2_ParamLimits

0x89d1,	// (0x000a1a75) list_medium_line_t3_g3_g2

0x6e7d,	// (0x0009ff21) list_medium_line_t3_g3_g3_ParamLimits

0x6e7d,	// (0x0009ff21) list_medium_line_t3_g3_g3

0x0002,

0xfa27,	// (0x000a8acb) list_medium_line_t3_g3_g_ParamLimits

0xfa27,	// (0x000a8acb) list_medium_line_t3_g3_g

0x8a22,	// (0x000a1ac6) list_medium_line_t3_g3_t1_ParamLimits

0x8a22,	// (0x000a1ac6) list_medium_line_t3_g3_t1

0x8a3b,	// (0x000a1adf) list_medium_line_t3_g3_t2_ParamLimits

0x8a3b,	// (0x000a1adf) list_medium_line_t3_g3_t2

0x8a51,	// (0x000a1af5) list_medium_line_t3_g3_t3_ParamLimits

0x8a51,	// (0x000a1af5) list_medium_line_t3_g3_t3

0x0002,

0xfa33,	// (0x000a8ad7) list_medium_line_t3_g3_t_ParamLimits

0xfa33,	// (0x000a8ad7) list_medium_line_t3_g3_t

0x86d2,	// (0x000a1776) list_medium_line_right_iconx2_g1

0x853f,	// (0x000a15e3) list_medium_line_right_iconx2_g2

0x0001,

0xfa3a,	// (0x000a8ade) list_medium_line_right_iconx2_g

0x9e9f,	// (0x000a2f43) list_medium_line_right_iconx2_t1

0x86d2,	// (0x000a1776) list_medium_line_t2_right_iconx2_g1

0x853f,	// (0x000a15e3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfa3a,	// (0x000a8ade) list_medium_line_t2_right_iconx2_g

0x8a67,	// (0x000a1b0b) list_medium_line_t2_right_iconx2_t1

0x8a77,	// (0x000a1b1b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfa3f,	// (0x000a8ae3) list_medium_line_t2_right_iconx2_t

0x8a85,	// (0x000a1b29) list_medium_line_x4_t4_t1

0x8a93,	// (0x000a1b37) list_medium_line_x4_t4_t2

0x8aa3,	// (0x000a1b47) list_medium_line_x4_t4_t3

0x8ab3,	// (0x000a1b57) list_medium_line_x4_t4_t4

0x0003,

0xfa44,	// (0x000a8ae8) list_medium_line_x4_t4_t

0x8aed,	// (0x000a1b91) tport_appsw_pane_ParamLimits

0x8aed,	// (0x000a1b91) tport_appsw_pane

0x8afb,	// (0x000a1b9f) tport_contact_pane_ParamLimits

0x8afb,	// (0x000a1b9f) tport_contact_pane

0x8b0b,	// (0x000a1baf) tport_listscroll_pane_ParamLimits

0x8b0b,	// (0x000a1baf) tport_listscroll_pane

0x8b1b,	// (0x000a1bbf) cell_tport_appsw_pane_ParamLimits

0x8b1b,	// (0x000a1bbf) cell_tport_appsw_pane

0xcfb4,	// (0x000a6058) tport_appsw_pane_g1_ParamLimits

0xcfb4,	// (0x000a6058) tport_appsw_pane_g1

0xe86c,	// (0x000a7910) tport_contact_pane_g1

0xe875,	// (0x000a7919) tport_contact_pane_t1

0xe883,	// (0x000a7927) tport_contact_pane_t2

0x0001,

0x0c05,	// (0x00099ca9) tport_contact_pane_t

0xe891,	// (0x000a7935) list_tport_pane

0xe89a,	// (0x000a793e) scroll_pane_cp_030

0x8b4e,	// (0x000a1bf2) cell_tport_appsw_pane_g1

0x8b5e,	// (0x000a1c02) cell_tport_appsw_pane_t1

0x8b6c,	// (0x000a1c10) grid_highlight_pane_cp019

0x8b74,	// (0x000a1c18) list_tport_double_graphic_pane_ParamLimits

0x8b74,	// (0x000a1c18) list_tport_double_graphic_pane

0xab6b,	// (0x000a3c0f) list_highlight_pane_cp023_ParamLimits

0xab6b,	// (0x000a3c0f) list_highlight_pane_cp023

0x8b85,	// (0x000a1c29) list_tport_double_graphic_pane_g1_ParamLimits

0x8b85,	// (0x000a1c29) list_tport_double_graphic_pane_g1

0x8b92,	// (0x000a1c36) list_tport_double_graphic_pane_t1_ParamLimits

0x8b92,	// (0x000a1c36) list_tport_double_graphic_pane_t1

0x8ba7,	// (0x000a1c4b) list_tport_double_graphic_pane_t2_ParamLimits

0x8ba7,	// (0x000a1c4b) list_tport_double_graphic_pane_t2

0x0001,

0xfa54,	// (0x000a8af8) list_tport_double_graphic_pane_t_ParamLimits

0xfa54,	// (0x000a8af8) list_tport_double_graphic_pane_t

0xa075,	// (0x000a3119) main_cale_note_pane

0x6606,	// (0x0009f6aa) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6606,	// (0x0009f6aa) cell_vitu2_function_top_wide_pane_cp01

0x8121,	// (0x000a11c5) wait_bar_pane_cp05_ParamLimits

0xab6b,	// (0x000a3c0f) listscroll_cmail_pane

0xe8a3,	// (0x000a7947) list_cmail_pane

0x8bb9,	// (0x000a1c5d) list_cmail_body_pane

0x8be1,	// (0x000a1c85) list_single_cmail_header_caption_pane

0x8c0d,	// (0x000a1cb1) list_single_cmail_header_detail_pane_ParamLimits

0x8c0d,	// (0x000a1cb1) list_single_cmail_header_detail_pane

0xe8b3,	// (0x000a7957) list_single_cmail_header_caption_pane_t1

0x8c46,	// (0x000a1cea) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c46,	// (0x000a1cea) list_single_cmail_header_detail_pane_g1

0x9ead,	// (0x000a2f51) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9ead,	// (0x000a2f51) list_single_cmail_header_detail_pane_g2

0x0002,

0xfa59,	// (0x000a8afd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfa59,	// (0x000a8afd) list_single_cmail_header_detail_pane_g

0x9eb9,	// (0x000a2f5d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9eb9,	// (0x000a2f5d) list_single_cmail_header_detail_pane_t1

0x9f19,	// (0x000a2fbd) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9f19,	// (0x000a2fbd) list_single_cmail_header_editor_pane_bg

0xe358,	// (0x000a73fc) list_cmail_body_pane_g1

0xe8d7,	// (0x000a797b) list_cmail_body_pane_t1

0xd72b,	// (0x000a67cf) list_single_cmail_header_editor_pane_bg_g1

0xacba,	// (0x000a3d5e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd73b,	// (0x000a67df) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd733,	// (0x000a67d7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd967,	// (0x000a6a0b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd75b,	// (0x000a67ff) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd74b,	// (0x000a67ef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd753,	// (0x000a67f7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac9a,	// (0x000a3d3e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c5c,	// (0x000a1d00) calenote_gesture_pane_ParamLimits

0x8c5c,	// (0x000a1d00) calenote_gesture_pane

0x8c76,	// (0x000a1d1a) calenote_window_pane_ParamLimits

0x8c76,	// (0x000a1d1a) calenote_window_pane

0xe8e5,	// (0x000a7989) popup_note_window_cp01

0x8c8e,	// (0x000a1d32) calenote_swipe_1_pane_ParamLimits

0x8c8e,	// (0x000a1d32) calenote_swipe_1_pane

0x84e1,	// (0x000a1585) calenote_swipe_2_pane_ParamLimits

0x84e1,	// (0x000a1585) calenote_swipe_2_pane

0xe6c5,	// (0x000a7769) calenote_swipe_1_pane_g1_ParamLimits

0xe6c5,	// (0x000a7769) calenote_swipe_1_pane_g1

0xe6d2,	// (0x000a7776) calenote_swipe_1_pane_g2_ParamLimits

0xe6d2,	// (0x000a7776) calenote_swipe_1_pane_g2

0x0001,

0x0b3a,	// (0x00099bde) calenote_swipe_1_pane_g_ParamLimits

0x0b3a,	// (0x00099bde) calenote_swipe_1_pane_g

0xe8f7,	// (0x000a799b) calenote_swipe_1_pane_t1_ParamLimits

0xe8f7,	// (0x000a799b) calenote_swipe_1_pane_t1

0xe6c5,	// (0x000a7769) calenote_swipe_2_pane_g1_ParamLimits

0xe6c5,	// (0x000a7769) calenote_swipe_2_pane_g1

0xe916,	// (0x000a79ba) calenote_swipe_2_pane_g2_ParamLimits

0xe916,	// (0x000a79ba) calenote_swipe_2_pane_g2

0x0001,

0x0c22,	// (0x00099cc6) calenote_swipe_2_pane_g_ParamLimits

0x0c22,	// (0x00099cc6) calenote_swipe_2_pane_g

0xe922,	// (0x000a79c6) calenote_swipe_2_pane_t1_ParamLimits

0xe922,	// (0x000a79c6) calenote_swipe_2_pane_t1

0xa075,	// (0x000a3119) main_mup_navstr_pane

0x532b,	// (0x0009e3cf) main_mup3_pane_t7_ParamLimits

0x532b,	// (0x0009e3cf) main_mup3_pane_t7

0x5d36,	// (0x0009edda) main_mp4_pane_g6_ParamLimits

0x5d36,	// (0x0009edda) main_mp4_pane_g6

0x60b6,	// (0x0009f15a) main_image3_pane_t4_ParamLimits

0x60b6,	// (0x0009f15a) main_image3_pane_t4

0x8ca1,	// (0x000a1d45) popup_navstr_preview_pane_ParamLimits

0x8ca1,	// (0x000a1d45) popup_navstr_preview_pane

0x8cad,	// (0x000a1d51) scroll_navstr_pane_ParamLimits

0x8cad,	// (0x000a1d51) scroll_navstr_pane

0xa075,	// (0x000a3119) bg_popup_preview_window_pane_cp04

0xe949,	// (0x000a79ed) popup_navstr_preview_pane_t1

0x8cb9,	// (0x000a1d5d) scroll_navstr_pane_g1_ParamLimits

0x8cb9,	// (0x000a1d5d) scroll_navstr_pane_g1

0x8cc6,	// (0x000a1d6a) scroll_navstr_pane_t1_ParamLimits

0x8cc6,	// (0x000a1d6a) scroll_navstr_pane_t1

0xe8ee,	// (0x000a7992) bg_button_pane_cp014

0xe8ee,	// (0x000a7992) bg_button_pane_cp030

0x83f4,	// (0x000a1498) list_double_fisheye_pane_g4_ParamLimits

0x83f4,	// (0x000a1498) list_double_fisheye_pane_g4

0x8400,	// (0x000a14a4) list_double_fisheye_pane_g5_ParamLimits

0x8400,	// (0x000a14a4) list_double_fisheye_pane_g5

0xcae8,	// (0x000a5b8c) sp_fs_scroll_pane_cp03

0xe7e5,	// (0x000a7889) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7f1,	// (0x000a7895) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0b57,	// (0x00099bfb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7fd,	// (0x000a78a1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8ab,	// (0x000a794f) sp_fs_scroll_pane_cp02

0xa962,	// (0x000a3a06) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa962,	// (0x000a3a06) popup_sp_fs_calendar_preview_list_single_pane

0xa075,	// (0x000a3119) main_cam6_pano_pane

0x431b,	// (0x0009d3bf) main_mup3_pane_ParamLimits

0xa075,	// (0x000a3119) main_phacti_pane

0x7ff6,	// (0x000a109a) bg_button_pane_cp11

0x800e,	// (0x000a10b2) main_mobtv_info_pane_g2_ParamLimits

0x800e,	// (0x000a10b2) main_mobtv_info_pane_g2

0x0001,

0xf962,	// (0x000a8a06) main_mobtv_info_pane_g_ParamLimits

0xf962,	// (0x000a8a06) main_mobtv_info_pane_g

0x81c0,	// (0x000a1264) sc_clock_pane_t5_ParamLimits

0x81c0,	// (0x000a1264) sc_clock_pane_t5

0x8261,	// (0x000a1305) main_radioblah_pane_g1_ParamLimits

0xe5f6,	// (0x000a769a) main_radioblah_pane_t3_ParamLimits

0xe5f6,	// (0x000a769a) main_radioblah_pane_t3

0xe60e,	// (0x000a76b2) main_radioblah_pane_t4_ParamLimits

0xe60e,	// (0x000a76b2) main_radioblah_pane_t4

0x827f,	// (0x000a1323) main_radioblah_text_pane_ParamLimits

0x827f,	// (0x000a1323) main_radioblah_text_pane

0x828c,	// (0x000a1330) main_radioblah_info_pane_g1_ParamLimits

0x8321,	// (0x000a13c5) main_radioblah_info_pane_t4_ParamLimits

0x8321,	// (0x000a13c5) main_radioblah_info_pane_t4

0xab6b,	// (0x000a3c0f) main_sp_fs_calendar_pane

0x8cd8,	// (0x000a1d7c) main_phacti_pane_g1

0x8ce0,	// (0x000a1d84) phacti_note_pane_ParamLimits

0x8ce0,	// (0x000a1d84) phacti_note_pane

0xe960,	// (0x000a7a04) phacti_term_pane_ParamLimits

0xe960,	// (0x000a7a04) phacti_term_pane

0xe975,	// (0x000a7a19) phacti_note_pane_t1_ParamLimits

0xe975,	// (0x000a7a19) phacti_note_pane_t1

0x9f30,	// (0x000a2fd4) phacti_term_pane_g1

0x9f38,	// (0x000a2fdc) phacti_term_pane_t1_ParamLimits

0x9f38,	// (0x000a2fdc) phacti_term_pane_t1

0xe98c,	// (0x000a7a30) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe994,	// (0x000a7a38) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0c2c,	// (0x00099cd0) popup_sp_fs_calendar_preview_list_single_pane_g

0xe99c,	// (0x000a7a40) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe99c,	// (0x000a7a40) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9b2,	// (0x000a7a56) aid_popup_sp_fs_bg_corner_pane

0xcd01,	// (0x000a5da5) popup_sp_fs_calendar_preview_bg_pane_g1

0xa075,	// (0x000a3119) popup_sp_fs_calendar_preview_bg_pane

0x9e87,	// (0x000a2f2b) popup_sp_fs_calendar_preview_list_pane

0xc8ed,	// (0x000a5991) bg_main_sp_fs_cale_pane_ParamLimits

0xc8ed,	// (0x000a5991) bg_main_sp_fs_cale_pane

0x9f6b,	// (0x000a300f) listscroll_cale_mrui_pane_ParamLimits

0x9f6b,	// (0x000a300f) listscroll_cale_mrui_pane

0x9f80,	// (0x000a3024) listscroll_sp_fs_schedule_track_pane

0x9f89,	// (0x000a302d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x9f89,	// (0x000a302d) main_sp_fs_ctrlbar_pane_cp01

0xe9ba,	// (0x000a7a5e) main_sp_fs_ribbon_pane

0x9f9c,	// (0x000a3040) popup_sp_fs_cale_preview_window

0x8d43,	// (0x000a1de7) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d43,	// (0x000a1de7) list_single_sp_fs_schedule_track_pane

0xdde3,	// (0x000a6e87) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdde3,	// (0x000a6e87) bg_sp_fs_highlight_list_pane_cp03

0x8d66,	// (0x000a1e0a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d66,	// (0x000a1e0a) list_single_sp_fs_schedule_track_pane_g1

0x8d72,	// (0x000a1e16) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d72,	// (0x000a1e16) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfa6a,	// (0x000a8b0e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfa6a,	// (0x000a8b0e) list_single_sp_fs_schedule_track_pane_g

0x8d7e,	// (0x000a1e22) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d7e,	// (0x000a1e22) list_single_sp_fs_schedule_track_pane_t1

0x8d96,	// (0x000a1e3a) sp_fs_schedule_track_pane_ParamLimits

0x8d96,	// (0x000a1e3a) sp_fs_schedule_track_pane

0xe9c2,	// (0x000a7a66) sp_fs_schedule_track_pane_g1

0xe9ca,	// (0x000a7a6e) sp_fs_schedule_track_pane_g2

0xe9d2,	// (0x000a7a76) sp_fs_schedule_track_pane_g3

0xe9da,	// (0x000a7a7e) sp_fs_schedule_track_pane_g4

0xe9e2,	// (0x000a7a86) sp_fs_schedule_track_pane_g5

0x0004,

0x0c36,	// (0x00099cda) sp_fs_schedule_track_pane_g

0xd72b,	// (0x000a67cf) bg_sp_fs_schedule_viewer_highlight_g1

0xacba,	// (0x000a3d5e) bg_sp_fs_schedule_viewer_highlight_g2

0xd733,	// (0x000a67d7) bg_sp_fs_schedule_viewer_highlight_g3

0xd73b,	// (0x000a67df) bg_sp_fs_schedule_viewer_highlight_g4

0xd967,	// (0x000a6a0b) bg_sp_fs_schedule_viewer_highlight_g5

0xd74b,	// (0x000a67ef) bg_sp_fs_schedule_viewer_highlight_g6

0xd753,	// (0x000a67f7) bg_sp_fs_schedule_viewer_highlight_g7

0xd75b,	// (0x000a67ff) bg_sp_fs_schedule_viewer_highlight_g8

0xac9a,	// (0x000a3d3e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfa6f,	// (0x000a8b13) bg_sp_fs_schedule_viewer_highlight_g

0xa075,	// (0x000a3119) bg_main_sp_fs_ribbon_pane

0x8da6,	// (0x000a1e4a) main_sp_fs_ribbon_pane_g1

0xe9ea,	// (0x000a7a8e) main_sp_fs_ribbon_pane_t1

0x8daf,	// (0x000a1e53) main_sp_fs_ribbon_pane_t2

0xe9f9,	// (0x000a7a9d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfa82,	// (0x000a8b26) main_sp_fs_ribbon_pane_t

0xea08,	// (0x000a7aac) main_sp_fs_ribbon_scheduler_pane

0xea10,	// (0x000a7ab4) bg_main_sp_fs_ribbon_pane_g1

0xea19,	// (0x000a7abd) bg_main_sp_fs_ribbon_pane_g2

0xea22,	// (0x000a7ac6) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0c5b,	// (0x00099cff) bg_main_sp_fs_ribbon_pane_g

0xea2a,	// (0x000a7ace) main_sp_fs_ribbon_scheduler_pane_g1

0xea33,	// (0x000a7ad7) main_sp_fs_ribbon_scheduler_pane_g2

0xea3c,	// (0x000a7ae0) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0c62,	// (0x00099d06) main_sp_fs_ribbon_scheduler_pane_g

0xea45,	// (0x000a7ae9) list_cale_mrui_pane

0x8dbe,	// (0x000a1e62) sp_fs_scroll_pane_cp07_ParamLimits

0x8dbe,	// (0x000a1e62) sp_fs_scroll_pane_cp07

0x8dda,	// (0x000a1e7e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dda,	// (0x000a1e7e) bg_sp_fs_schedule_viewer_highlight

0xea52,	// (0x000a7af6) list_single_sp_fs_schedule_track_pane_cp01

0xea5a,	// (0x000a7afe) list_sp_fs_schedule_track_pane

0xea62,	// (0x000a7b06) sp_fs_scroll_pane_cp06_ParamLimits

0xea62,	// (0x000a7b06) sp_fs_scroll_pane_cp06

0xcd01,	// (0x000a5da5) bgmain_sp_fs_calendar_pane_g1

0x8de7,	// (0x000a1e8b) list_single_cale_mrui_pane_ParamLimits

0x8de7,	// (0x000a1e8b) list_single_cale_mrui_pane

0x9fae,	// (0x000a3052) list_single_cale_mrui_row_pane_ParamLimits

0x9fae,	// (0x000a3052) list_single_cale_mrui_row_pane

0x9fbb,	// (0x000a305f) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9fbb,	// (0x000a305f) list_single_cale_mrui_row_pane_g1

0x9ff3,	// (0x000a3097) list_single_cale_mrui_row_pane_t1_ParamLimits

0x9ff3,	// (0x000a3097) list_single_cale_mrui_row_pane_t1

0x8e15,	// (0x000a1eb9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e15,	// (0x000a1eb9) list_single_cale_mrui_row_pane_t2

0xa005,	// (0x000a30a9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa005,	// (0x000a30a9) list_single_cale_mrui_row_pane_t3

0xa034,	// (0x000a30d8) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa034,	// (0x000a30d8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfa90,	// (0x000a8b34) list_single_cale_mrui_row_pane_t_ParamLimits

0xfa90,	// (0x000a8b34) list_single_cale_mrui_row_pane_t

0x8e7b,	// (0x000a1f1f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e7b,	// (0x000a1f1f) list_single_cmail_header_editor_pane_bg_cp01

0x8e9b,	// (0x000a1f3f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e9b,	// (0x000a1f3f) list_single_cmail_header_editor_pane_bg_cp02

0x8eb7,	// (0x000a1f5b) main_radioblah_text_pane_t1_ParamLimits

0x8eb7,	// (0x000a1f5b) main_radioblah_text_pane_t1

0xea81,	// (0x000a7b25) cam6_indi_pane_cp01

0xea89,	// (0x000a7b2d) cam6_mode_pane_cp01

0xea91,	// (0x000a7b35) cam6_pano_pane

0xea9a,	// (0x000a7b3e) cam6_zoom_pane_cp01

0xeaa2,	// (0x000a7b46) cam6_pano_image_pane

0xeaad,	// (0x000a7b51) cam6_pano_pane_g1

0xe358,	// (0x000a73fc) cam6_pano_pane_g2

0xeab6,	// (0x000a7b5a) cam6_pano_pane_g3

0xeabf,	// (0x000a7b63) cam6_pano_pane_g4

0xd2ac,	// (0x000a6350) cam6_pano_pane_g5

0xeac8,	// (0x000a7b6c) cam6_pano_pane_g6

0xead2,	// (0x000a7b76) cam6_pano_pane_g7

0xeada,	// (0x000a7b7e) cam6_pano_pane_g8

0xeae3,	// (0x000a7b87) cam6_pano_pane_g9

0x0008,

0xfa99,	// (0x000a8b3d) cam6_pano_pane_g

0xa075,	// (0x000a3119) main_browser_tag_pane

0xe941,	// (0x000a79e5) grid_navstr_albumart_pane

0xeaee,	// (0x000a7b92) cell_navstr_albumart_pane_ParamLimits

0xeaee,	// (0x000a7b92) cell_navstr_albumart_pane

0xeb0e,	// (0x000a7bb2) cell_navstr_albumart_pane_g1

0xc6be,	// (0x000a5762) cell_navstr_albumart_pane_g2

0xc6ce,	// (0x000a5772) cell_navstr_albumart_pane_g3

0xc6c6,	// (0x000a576a) cell_navstr_albumart_pane_g4

0x0003,

0xfaac,	// (0x000a8b50) cell_navstr_albumart_pane_g

0x8ed2,	// (0x000a1f76) bt_list_pane_ParamLimits

0x8ed2,	// (0x000a1f76) bt_list_pane

0x8ef3,	// (0x000a1f97) bt_list_pane_t1

0x8f02,	// (0x000a1fa6) bt_list_pane_t2

0x0001,

0xfab5,	// (0x000a8b59) bt_list_pane_t

0xa075,	// (0x000a3119) main_cale_prevew_pane

0x8f11,	// (0x000a1fb5) popup_cale_preview_window_ParamLimits

0x8f11,	// (0x000a1fb5) popup_cale_preview_window

0xab6b,	// (0x000a3c0f) bg_popup_preview_window_pane_cp05_ParamLimits

0xab6b,	// (0x000a3c0f) bg_popup_preview_window_pane_cp05

0xeb16,	// (0x000a7bba) list_cale_preview_pane_ParamLimits

0xeb16,	// (0x000a7bba) list_cale_preview_pane

0x8f2a,	// (0x000a1fce) list_double_cale_preview_pane_ParamLimits

0x8f2a,	// (0x000a1fce) list_double_cale_preview_pane

0x8f3c,	// (0x000a1fe0) list_single_cale_preview_pane_ParamLimits

0x8f3c,	// (0x000a1fe0) list_single_cale_preview_pane

0x8f50,	// (0x000a1ff4) list_single_cale_preview_pane_g1

0x8f58,	// (0x000a1ffc) list_single_cale_preview_pane_t1_ParamLimits

0x8f58,	// (0x000a1ffc) list_single_cale_preview_pane_t1

0x8f6d,	// (0x000a2011) list_double_cale_preview_pane_g1

0x8f75,	// (0x000a2019) list_double_cale_preview_pane_t1_ParamLimits

0x8f75,	// (0x000a2019) list_double_cale_preview_pane_t1

0x8f8a,	// (0x000a202e) list_double_cale_preview_pane_t2_ParamLimits

0x8f8a,	// (0x000a202e) list_double_cale_preview_pane_t2

0x0001,

0xfaba,	// (0x000a8b5e) list_double_cale_preview_pane_t_ParamLimits

0xfaba,	// (0x000a8b5e) list_double_cale_preview_pane_t

0xa075,	// (0x000a3119) main_ezdial_pane

0xab6b,	// (0x000a3c0f) main_sp_fs_email_pane_ParamLimits

0x8565,	// (0x000a1609) cmail_ddmenu_btn01_pane_ParamLimits

0x8565,	// (0x000a1609) cmail_ddmenu_btn01_pane

0x857a,	// (0x000a161e) cmail_ddmenu_btn02_pane_ParamLimits

0x857a,	// (0x000a161e) cmail_ddmenu_btn02_pane

0x8592,	// (0x000a1636) cmail_ddmenu_btn03_pane_ParamLimits

0x8592,	// (0x000a1636) cmail_ddmenu_btn03_pane

0x85ba,	// (0x000a165e) main_sp_fs_ctrlbar_pane_ParamLimits

0x85d0,	// (0x000a1674) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8bb9,	// (0x000a1c5d) list_cmail_body_pane_ParamLimits

0xe8c1,	// (0x000a7965) bg_button_pane_cp12

0xe8ca,	// (0x000a796e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ca,	// (0x000a796e) list_single_cmail_header_detail_pane_g3

0x9ef5,	// (0x000a2f99) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9ef5,	// (0x000a2f99) list_single_cmail_header_detail_pane_t2

0x0001,

0xfa60,	// (0x000a8b04) list_single_cmail_header_detail_pane_t_ParamLimits

0xfa60,	// (0x000a8b04) list_single_cmail_header_detail_pane_t

0x9f4d,	// (0x000a2ff1) phacti_term_pane_t2_ParamLimits

0x9f4d,	// (0x000a2ff1) phacti_term_pane_t2

0x0001,

0xfa65,	// (0x000a8b09) phacti_term_pane_t_ParamLimits

0xfa65,	// (0x000a8b09) phacti_term_pane_t

0xeb22,	// (0x000a7bc6) aid_size_list_single_double

0x8fa2,	// (0x000a2046) popup_ezdial_listscroll_window

0x8fc6,	// (0x000a206a) popup_number_entry_window_cp01

0xaa23,	// (0x000a3ac7) bg_popup_call_pane_cp09

0xeb2e,	// (0x000a7bd2) ezdial_list_pane

0xeb36,	// (0x000a7bda) scroll_pane_cp23

0xcada,	// (0x000a5b7e) bg_button_pane_cp028_ParamLimits

0xcada,	// (0x000a5b7e) bg_button_pane_cp028

0x8fd4,	// (0x000a2078) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fd4,	// (0x000a2078) cmail_ddmenu_btn01_pane_g1

0x8fe4,	// (0x000a2088) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fe4,	// (0x000a2088) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfabf,	// (0x000a8b63) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfabf,	// (0x000a8b63) cmail_ddmenu_btn01_pane_g

0xeb3e,	// (0x000a7be2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3e,	// (0x000a7be2) cmail_ddmenu_btn01_pane_t1

0xc8ed,	// (0x000a5991) bg_button_pane_cp029_ParamLimits

0xc8ed,	// (0x000a5991) bg_button_pane_cp029

0x8fe4,	// (0x000a2088) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fe4,	// (0x000a2088) cmail_ddmenu_btn02_pane_g1

0x8ffd,	// (0x000a20a1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8ffd,	// (0x000a20a1) cmail_ddmenu_btn02_pane_t1

0xdde3,	// (0x000a6e87) bg_button_pane_cp031_ParamLimits

0xdde3,	// (0x000a6e87) bg_button_pane_cp031

0x8fe4,	// (0x000a2088) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fe4,	// (0x000a2088) cmail_ddmenu_btn03_pane_g1

0x8ffd,	// (0x000a20a1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8ffd,	// (0x000a20a1) cmail_ddmenu_btn03_pane_t1

0x5f53,	// (0x0009eff7) cell_dialer2_keypad_pane_t1_ParamLimits

0x5f6d,	// (0x0009f011) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5f6d,	// (0x0009f011) cell_dialer2_keypad_pane_t1_copy1

0x7e37,	// (0x000a0edb) ncimui_group_button_pane

0xab6b,	// (0x000a3c0f) main_sp_fs_calendar_pane_ParamLimits

0x8be1,	// (0x000a1c85) list_single_cmail_header_caption_pane_ParamLimits

0x9f62,	// (0x000a3006) aid_recal_txt_sm_pane

0xa075,	// (0x000a3119) mian_recal_day_pane

0x9f9c,	// (0x000a3040) popup_sp_fs_cale_preview_window_ParamLimits

0xeb53,	// (0x000a7bf7) list_recal_day_pane

0xa0df,	// (0x000a3183) list_single_recal_day_pane_ParamLimits

0xa0df,	// (0x000a3183) list_single_recal_day_pane

0xeb7a,	// (0x000a7c1e) list_single_recal_day_pane_g1_ParamLimits

0xeb7a,	// (0x000a7c1e) list_single_recal_day_pane_g1

0xa0f1,	// (0x000a3195) list_single_recal_day_pane_g2_ParamLimits

0xa0f1,	// (0x000a3195) list_single_recal_day_pane_g2

0xa0fd,	// (0x000a31a1) list_single_recal_day_pane_g3_ParamLimits

0xa0fd,	// (0x000a31a1) list_single_recal_day_pane_g3

0x9021,	// (0x000a20c5) list_single_recal_day_pane_g4_ParamLimits

0x9021,	// (0x000a20c5) list_single_recal_day_pane_g4

0xa109,	// (0x000a31ad) list_single_recal_day_pane_g5_ParamLimits

0xa109,	// (0x000a31ad) list_single_recal_day_pane_g5

0xa115,	// (0x000a31b9) list_single_recal_day_pane_g6_ParamLimits

0xa115,	// (0x000a31b9) list_single_recal_day_pane_g6

0x0004,

0xface,	// (0x000a8b72) list_single_recal_day_pane_g_ParamLimits

0xface,	// (0x000a8b72) list_single_recal_day_pane_g

0xa129,	// (0x000a31cd) list_single_recal_day_pane_t1

0xa13b,	// (0x000a31df) list_single_recal_day_pane_t2

0x0001,

0xfad9,	// (0x000a8b7d) list_single_recal_day_pane_t

0x9039,	// (0x000a20dd) ncimui_query_button_pane_ParamLimits

0x9039,	// (0x000a20dd) ncimui_query_button_pane

0x9049,	// (0x000a20ed) ncimui_query_button_pane_t1_ParamLimits

0x9049,	// (0x000a20ed) ncimui_query_button_pane_t1

0xeb86,	// (0x000a7c2a) ncimui_query_button_pane_t2_ParamLimits

0xeb86,	// (0x000a7c2a) ncimui_query_button_pane_t2

0x0001,

0xfade,	// (0x000a8b82) ncimui_query_button_pane_t_ParamLimits

0xfade,	// (0x000a8b82) ncimui_query_button_pane_t

0x905c,	// (0x000a2100) query_button_pane_ParamLimits

0x905c,	// (0x000a2100) query_button_pane

0xa075,	// (0x000a3119) bg_button_pane_cp0028

0xeb99,	// (0x000a7c3d) query_button_pane_t1

0x4337,	// (0x0009d3db) main_tport_pane_ParamLimits

0x8ac3,	// (0x000a1b67) bg_popup_window_pane_cp01_ParamLimits

0x8ac3,	// (0x000a1b67) bg_popup_window_pane_cp01

0x8ad1,	// (0x000a1b75) heading_pane_cp08_ParamLimits

0x8ad1,	// (0x000a1b75) heading_pane_cp08

0x8adf,	// (0x000a1b83) heading_pane_cp07_ParamLimits

0x8adf,	// (0x000a1b83) heading_pane_cp07

0x8b4e,	// (0x000a1bf2) cell_tport_appsw_pane_g2

0x0002,

0xfa4d,	// (0x000a8af1) cell_tport_appsw_pane_g

0x9bbe,	// (0x000a2c62) input_candi_list_open_g1

0xae7d,	// (0x000a3f21) list_cale_time_pane_g6_ParamLimits

0xae7d,	// (0x000a3f21) list_cale_time_pane_g6

0x4db6,	// (0x0009de5a) aid_size_touch_calib_1_ParamLimits

0x4db6,	// (0x0009de5a) aid_size_touch_calib_1

0x4dc2,	// (0x0009de66) aid_size_touch_calib_2_ParamLimits

0x4dc2,	// (0x0009de66) aid_size_touch_calib_2

0x4dd0,	// (0x0009de74) aid_size_touch_calib_3_ParamLimits

0x4dd0,	// (0x0009de74) aid_size_touch_calib_3

0x4de0,	// (0x0009de84) aid_size_touch_calib_4_ParamLimits

0x4de0,	// (0x0009de84) aid_size_touch_calib_4

0x4dee,	// (0x0009de92) main_touch_calib_button_group_pane_ParamLimits

0x4dee,	// (0x0009de92) main_touch_calib_button_group_pane

0x4dfc,	// (0x0009dea0) main_touch_calib_pane_g1_ParamLimits

0x4e08,	// (0x0009deac) main_touch_calib_pane_g2_ParamLimits

0x4e14,	// (0x0009deb8) main_touch_calib_pane_g3_ParamLimits

0x4e20,	// (0x0009dec4) main_touch_calib_pane_g4_ParamLimits

0xf598,	// (0x000a863c) main_touch_calib_pane_g_ParamLimits

0x4e2c,	// (0x0009ded0) main_touch_calib_pane_t1_ParamLimits

0x4e45,	// (0x0009dee9) main_touch_calib_pane_t2_ParamLimits

0x4e5e,	// (0x0009df02) main_touch_calib_pane_t3_ParamLimits

0x4e74,	// (0x0009df18) main_touch_calib_pane_t4_ParamLimits

0x4e8a,	// (0x0009df2e) main_touch_calib_pane_t5_ParamLimits

0xf5a1,	// (0x000a8645) main_touch_calib_pane_t_ParamLimits

0xd04f,	// (0x000a60f3) list_single_fp_cale_pane_g3_ParamLimits

0xd04f,	// (0x000a60f3) list_single_fp_cale_pane_g3

0x431b,	// (0x0009d3bf) bg_button_pane_cp012_ParamLimits

0x431b,	// (0x0009d3bf) bg_vkb2_func_pane_cp03_ParamLimits

0x6df1,	// (0x0009fe95) cell_vitu2_function_top_pane_g1_ParamLimits

0x431b,	// (0x0009d3bf) bg_vkb2_func_pane_cp04_ParamLimits

0x7dbf,	// (0x000a0e63) main_ncimui_button_group_pane_ParamLimits

0x7dbf,	// (0x000a0e63) main_ncimui_button_group_pane

0x7e25,	// (0x000a0ec9) main_ncimui_pane_t3_ParamLimits

0x7e25,	// (0x000a0ec9) main_ncimui_pane_t3

0xe957,	// (0x000a79fb) phacti_button_group_pane

0xeb22,	// (0x000a7bc6) aid_size_list_single_double_ParamLimits

0x8fa2,	// (0x000a2046) popup_ezdial_listscroll_window_ParamLimits

0x8fc6,	// (0x000a206a) popup_number_entry_window_cp01_ParamLimits

0x9069,	// (0x000a210d) phacti_button_pane_ParamLimits

0x9069,	// (0x000a210d) phacti_button_pane

0xa075,	// (0x000a3119) bg_button_pane_cp14

0xeba7,	// (0x000a7c4b) phacti_button_pane_t1

0x907a,	// (0x000a211e) main_touch_calib_button_pane_ParamLimits

0x907a,	// (0x000a211e) main_touch_calib_button_pane

0xa84c,	// (0x000a38f0) bg_button_pane_cp18_ParamLimits

0xa84c,	// (0x000a38f0) bg_button_pane_cp18

0xebb5,	// (0x000a7c59) main_touch_calib_button_pane_t1_ParamLimits

0xebb5,	// (0x000a7c59) main_touch_calib_button_pane_t1

0xebcb,	// (0x000a7c6f) main_touch_calib_button_pane_t2_ParamLimits

0xebcb,	// (0x000a7c6f) main_touch_calib_button_pane_t2

0x0001,

0xfae3,	// (0x000a8b87) main_touch_calib_button_pane_t_ParamLimits

0xfae3,	// (0x000a8b87) main_touch_calib_button_pane_t

0xa075,	// (0x000a3119) cell_ncimui_button_pane

0xa075,	// (0x000a3119) bg_button_pane_cp032

0xebe9,	// (0x000a7c8d) cell_ncimui_button_pane_t1

0x5fc9,	// (0x0009f06d) image3_infobar_pane_ParamLimits

0x5fc9,	// (0x0009f06d) image3_infobar_pane

0x81e2,	// (0x000a1286) fs_bigclock_status_pane_ParamLimits

0x81e2,	// (0x000a1286) fs_bigclock_status_pane

0x81ef,	// (0x000a1293) main_fs_bigclock_clock_pane_ParamLimits

0x81ef,	// (0x000a1293) main_fs_bigclock_clock_pane

0x8203,	// (0x000a12a7) main_fs_bigclock_indi_pane_ParamLimits

0x8203,	// (0x000a12a7) main_fs_bigclock_indi_pane

0x822b,	// (0x000a12cf) main_fs_bigclock_swipe_pane_ParamLimits

0x822b,	// (0x000a12cf) main_fs_bigclock_swipe_pane

0xa075,	// (0x000a3119) main_fs_clock_dumped_data

0xe465,	// (0x000a7509) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe465,	// (0x000a7509) list_single_fs_bigclock_indicator_pane_g1

0xe481,	// (0x000a7525) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe481,	// (0x000a7525) list_single_fs_bigclock_indicator_pane_g2

0xe49b,	// (0x000a753f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe49b,	// (0x000a753f) list_single_fs_bigclock_indicator_pane_g3

0xe4b5,	// (0x000a7559) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4b5,	// (0x000a7559) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0aeb,	// (0x00099b8f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0aeb,	// (0x00099b8f) list_single_fs_bigclock_indicator_pane_g

0xe4e0,	// (0x000a7584) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4e0,	// (0x000a7584) list_single_fs_bigclock_indicator_pane_t1

0xe508,	// (0x000a75ac) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe508,	// (0x000a75ac) list_single_fs_bigclock_indicator_pane_t2

0xe530,	// (0x000a75d4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe530,	// (0x000a75d4) list_single_fs_bigclock_indicator_pane_t3

0xe558,	// (0x000a75fc) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe558,	// (0x000a75fc) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0af6,	// (0x00099b9a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0af6,	// (0x00099b9a) list_single_fs_bigclock_indicator_pane_t

0xebf7,	// (0x000a7c9b) image3_infobar_fav_pane_ParamLimits

0xebf7,	// (0x000a7c9b) image3_infobar_fav_pane

0xec07,	// (0x000a7cab) image3_infobar_loc_pane_ParamLimits

0xec07,	// (0x000a7cab) image3_infobar_loc_pane

0xec1b,	// (0x000a7cbf) image3_infobar_time_pane_ParamLimits

0xec1b,	// (0x000a7cbf) image3_infobar_time_pane

0xcd01,	// (0x000a5da5) image3_infobar_time_pane_g1

0xec2b,	// (0x000a7ccf) image3_infobar_time_pane_t1

0xcd01,	// (0x000a5da5) image3_infobar_loc_pane_g1

0xec39,	// (0x000a7cdd) image3_infobar_loc_pane_g2

0x0001,

0x0ca7,	// (0x00099d4b) image3_infobar_loc_pane_g

0xec41,	// (0x000a7ce5) image3_infobar_loc_pane_t1

0xcd01,	// (0x000a5da5) image3_infobar_fav_pane_g1

0xec4f,	// (0x000a7cf3) image3_infobar_fav_pane_g2

0x0001,

0x0cac,	// (0x00099d50) image3_infobar_fav_pane_g

0xec57,	// (0x000a7cfb) fs_bigclock_status_battery_pane

0xec60,	// (0x000a7d04) fs_bigclock_status_signal_pane

0xec69,	// (0x000a7d0d) fs_bigclock_status_title_pane

0xec72,	// (0x000a7d16) fs_bigclock_status_signal_pane_g1

0xec7b,	// (0x000a7d1f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfae8,	// (0x000a8b8c) fs_bigclock_status_signal_pane_g

0xec83,	// (0x000a7d27) fs_bigclock_status_battery_pane_g1

0xec8c,	// (0x000a7d30) fs_bigclock_status_battery_pane_g2

0x0001,

0xfaed,	// (0x000a8b91) fs_bigclock_status_battery_pane_g

0xec94,	// (0x000a7d38) fs_bigclock_status_title_pane_t1

0x908a,	// (0x000a212e) main_fs_bigclock_clock_pane_g1

0x908a,	// (0x000a212e) main_fs_bigclock_clock_pane_g2

0x9097,	// (0x000a213b) main_fs_bigclock_clock_pane_g3

0x9097,	// (0x000a213b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfaf2,	// (0x000a8b96) main_fs_bigclock_clock_pane_g

0x90a3,	// (0x000a2147) main_fs_bigclock_clock_pane_t1

0x90b6,	// (0x000a215a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfafb,	// (0x000a8b9f) main_fs_bigclock_clock_pane_t

0xeca2,	// (0x000a7d46) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeca2,	// (0x000a7d46) list_single_fs_bigclock_indicator_pane

0xecb3,	// (0x000a7d57) list_single_fs_bigclock_pane_ParamLimits

0xecb3,	// (0x000a7d57) list_single_fs_bigclock_pane

0xecd9,	// (0x000a7d7d) main_fs_bigclock_indicator_pane_t1

0xece8,	// (0x000a7d8c) list_single_fs_bigclock_pane_g1

0xecf0,	// (0x000a7d94) list_single_fs_bigclock_pane_t1

0xcd01,	// (0x000a5da5) main_fs_bigclock_swipe_pane_g1

0xed33,	// (0x000a7dd7) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0cc6,	// (0x00099d6a) main_fs_bigclock_swipe_pane_g

0xed3b,	// (0x000a7ddf) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed3b,	// (0x000a7ddf) main_fs_bigclock_swipe_pane_t1

0x3330,	// (0x0009c3d4) call_type_pane_ParamLimits

0xa075,	// (0x000a3119) main_btmg_pane

0x9fe7,	// (0x000a308b) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9fe7,	// (0x000a308b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfa89,	// (0x000a8b2d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfa89,	// (0x000a8b2d) list_single_cale_mrui_row_pane_g

0xa06d,	// (0x000a3111) list_recal_vselct_arw_lo_pane

0xeb72,	// (0x000a7c16) list_recal_vselct_arw_up_pane

0xa0d6,	// (0x000a317a) list_recal_vselct_pane

0x910d,	// (0x000a21b1) btmg_button_pane

0x9119,	// (0x000a21bd) main_btmg_pane_g1

0xa075,	// (0x000a3119) bg_button_pane_cp044

0xed58,	// (0x000a7dfc) btmg_button_pane_t1

0xc8d9,	// (0x000a597d) aid_listscroll_gen

0xab6b,	// (0x000a3c0f) main_cntbar_detail_pane

0xe8a3,	// (0x000a7947) list_cmail_folder_pane

0xcae8,	// (0x000a5b8c) sp_fs_scroll_pane_cp03_ParamLimits

0x9121,	// (0x000a21c5) list_single_fs_dyc_pane_cp01_ParamLimits

0x9121,	// (0x000a21c5) list_single_fs_dyc_pane_cp01

0xed66,	// (0x000a7e0a) aid_size_cmail_indent

0xa14d,	// (0x000a31f1) list_single_dyc_row_pane_cp01

0x9169,	// (0x000a220d) cntbar_detail_list_pane_ParamLimits

0x9169,	// (0x000a220d) cntbar_detail_list_pane

0x91a3,	// (0x000a2247) main_cntbar_detail_cont_pane_ParamLimits

0x91a3,	// (0x000a2247) main_cntbar_detail_cont_pane

0x3255,	// (0x0009c2f9) scroll_pane_cp032_ParamLimits

0x3255,	// (0x0009c2f9) scroll_pane_cp032

0x91af,	// (0x000a2253) cntbar_detail_list_event_pane_ParamLimits

0x91af,	// (0x000a2253) cntbar_detail_list_event_pane

0x9175,	// (0x000a2219) cntbar_detail_list_shct_pane

0xad08,	// (0x000a3dac) aid_list_gen

0xed6f,	// (0x000a7e13) aid_scroll

0xed78,	// (0x000a7e1c) aid_size_touch_scroll_bar

0x755c,	// (0x000a0600) aid_list_double

0x91c3,	// (0x000a2267) aid_list_single

0x754a,	// (0x000a05ee) aid_list_single_lg

0x91cc,	// (0x000a2270) aid_list_z_g_a_sm

0x91d4,	// (0x000a2278) aid_list_z_g_d

0x91dc,	// (0x000a2280) aid_txt_z_prm

0x91ea,	// (0x000a228e) aid_txt_z_prm_cp01

0x91f8,	// (0x000a229c) aid_txt_z_sec

0x9206,	// (0x000a22aa) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9206,	// (0x000a22aa) main_cntbar_detail_cont_pane_g1

0x9213,	// (0x000a22b7) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9213,	// (0x000a22b7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb0c,	// (0x000a8bb0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb0c,	// (0x000a8bb0) main_cntbar_detail_cont_pane_g

0xed81,	// (0x000a7e25) main_cntbar_detail_cont_pane_t1

0xed8f,	// (0x000a7e33) main_cntbar_detail_cont_pane_t2

0xed9d,	// (0x000a7e41) main_cntbar_detail_cont_pane_t3

0x0002,

0xfb11,	// (0x000a8bb5) main_cntbar_detail_cont_pane_t

0x921f,	// (0x000a22c3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x921f,	// (0x000a22c3) cell_cntbar_detail_list_shct_pane

0xedab,	// (0x000a7e4f) cntbar_detail_list_shct_pane_g1

0xedb4,	// (0x000a7e58) cntbar_detail_list_shct_pane_g2

0x0001,

0xfb18,	// (0x000a8bbc) cntbar_detail_list_shct_pane_g

0x9233,	// (0x000a22d7) cntbar_detail_list_event_pane_g1_ParamLimits

0x9233,	// (0x000a22d7) cntbar_detail_list_event_pane_g1

0x923f,	// (0x000a22e3) cntbar_detail_list_event_pane_g2_ParamLimits

0x923f,	// (0x000a22e3) cntbar_detail_list_event_pane_g2

0x0005,

0xfb1d,	// (0x000a8bc1) cntbar_detail_list_event_pane_g_ParamLimits

0xfb1d,	// (0x000a8bc1) cntbar_detail_list_event_pane_g

0x92ab,	// (0x000a234f) cntbar_detail_list_event_pane_t1_ParamLimits

0x92ab,	// (0x000a234f) cntbar_detail_list_event_pane_t1

0x92c0,	// (0x000a2364) cntbar_detail_list_event_pane_t2_ParamLimits

0x92c0,	// (0x000a2364) cntbar_detail_list_event_pane_t2

0x0002,

0xfb2a,	// (0x000a8bce) cntbar_detail_list_event_pane_t_ParamLimits

0xfb2a,	// (0x000a8bce) cntbar_detail_list_event_pane_t

0xcd01,	// (0x000a5da5) cell_cntbar_detail_list_shct_pane_g1

0xb454,	// (0x000a44f8) navi_pane_mv_g3

0xab6b,	// (0x000a3c0f) main_cntbar_detail_pane_ParamLimits

0xa075,	// (0x000a3119) main_notif_wgt_pane

0x5c7d,	// (0x0009ed21) aid_tch_main_mp4_pane_g4

0x5eb2,	// (0x0009ef56) popup_slider_window_cp02

0xa063,	// (0x000a3107) list_recal_day_event_pane

0x9149,	// (0x000a21ed) cntbar_detail_btn_pane_ParamLimits

0x9149,	// (0x000a21ed) cntbar_detail_btn_pane

0x9159,	// (0x000a21fd) cntbar_detail_btn_pane_cp01_ParamLimits

0x9159,	// (0x000a21fd) cntbar_detail_btn_pane_cp01

0x9175,	// (0x000a2219) cntbar_detail_list_shct_pane_ParamLimits

0x9181,	// (0x000a2225) cntbar_detail_pane_g1_ParamLimits

0x9181,	// (0x000a2225) cntbar_detail_pane_g1

0x918d,	// (0x000a2231) cntbar_detail_pane_t1_ParamLimits

0x918d,	// (0x000a2231) cntbar_detail_pane_t1

0x924b,	// (0x000a22ef) cntbar_detail_list_event_pane_g3_ParamLimits

0x924b,	// (0x000a22ef) cntbar_detail_list_event_pane_g3

0x9263,	// (0x000a2307) cntbar_detail_list_event_pane_g4_ParamLimits

0x9263,	// (0x000a2307) cntbar_detail_list_event_pane_g4

0x927b,	// (0x000a231f) cntbar_detail_list_event_pane_g5_ParamLimits

0x927b,	// (0x000a231f) cntbar_detail_list_event_pane_g5

0x9293,	// (0x000a2337) cntbar_detail_list_event_pane_g6_ParamLimits

0x9293,	// (0x000a2337) cntbar_detail_list_event_pane_g6

0x92d5,	// (0x000a2379) cntbar_detail_list_event_pane_t3_ParamLimits

0x92d5,	// (0x000a2379) cntbar_detail_list_event_pane_t3

0x92e7,	// (0x000a238b) popup_notif_wgt_window_ParamLimits

0x92e7,	// (0x000a238b) popup_notif_wgt_window

0x92f7,	// (0x000a239b) popup_submenu_window_cp01_ParamLimits

0x92f7,	// (0x000a239b) popup_submenu_window_cp01

0xaa23,	// (0x000a3ac7) bg_popup_window_pane_cp10

0xedbd,	// (0x000a7e61) listscroll_notif_wgt_pane

0xedcf,	// (0x000a7e73) list_notif_wgt_window

0xedd8,	// (0x000a7e7c) scroll_pane_cp033

0x9305,	// (0x000a23a9) list_notif_wgt_row_pane_ParamLimits

0x9305,	// (0x000a23a9) list_notif_wgt_row_pane

0xede1,	// (0x000a7e85) aid_size_list_notif_wgt_del

0xedee,	// (0x000a7e92) list_notif_wgt_row_pane_g1

0xedfa,	// (0x000a7e9e) list_notif_wgt_row_pane_g2

0xee09,	// (0x000a7ead) list_notif_wgt_row_pane_g3

0x0002,

0xfb31,	// (0x000a8bd5) list_notif_wgt_row_pane_g

0xee16,	// (0x000a7eba) list_notif_wgt_row_pane_t1

0xee2c,	// (0x000a7ed0) list_notif_wgt_row_pane_t2

0xee3e,	// (0x000a7ee2) list_notif_wgt_row_pane_t3

0x0002,

0xfb38,	// (0x000a8bdc) list_notif_wgt_row_pane_t

0xd981,	// (0x000a6a25) list_recal_day_event_pane_g1

0xee50,	// (0x000a7ef4) list_recal_day_event_pane_t1

0xa075,	// (0x000a3119) bg_button_pane_cp045

0x9317,	// (0x000a23bb) cntbar_detail_btn_pane_t1

0xc8ed,	// (0x000a5991) main_callh_pane_ParamLimits

0xc8ed,	// (0x000a5991) main_callh_pane

0xa075,	// (0x000a3119) main_coverflow0_pane

0xa075,	// (0x000a3119) main_wgtman_pane

0x8243,	// (0x000a12e7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8243,	// (0x000a12e7) main_fs_bigclock_unlock_btn_pane

0x8b46,	// (0x000a1bea) bg_button_pane_cp16

0x8b56,	// (0x000a1bfa) cell_tport_appsw_pane_g3

0x9325,	// (0x000a23c9) cf0_flow_pane_ParamLimits

0x9325,	// (0x000a23c9) cf0_flow_pane

0xee5f,	// (0x000a7f03) listscroll_cf0_pane

0xee6a,	// (0x000a7f0e) main_cf0_pane_g1

0x9334,	// (0x000a23d8) main_cf0_pane_t1_ParamLimits

0x9334,	// (0x000a23d8) main_cf0_pane_t1

0x9348,	// (0x000a23ec) main_cf0_pane_t2_ParamLimits

0x9348,	// (0x000a23ec) main_cf0_pane_t2

0x0001,

0xfb44,	// (0x000a8be8) main_cf0_pane_t_ParamLimits

0xfb44,	// (0x000a8be8) main_cf0_pane_t

0xee7c,	// (0x000a7f20) scroll_pane_cp11

0x935c,	// (0x000a2400) cf0_flow_pane_g1

0x9364,	// (0x000a2408) cf0_flow_pane_g2

0x0001,

0xfb49,	// (0x000a8bed) cf0_flow_pane_g

0x936c,	// (0x000a2410) cf0_flow_pane_t1

0xa075,	// (0x000a3119) main_call6_pane

0xa075,	// (0x000a3119) main_calllock_pane

0x937a,	// (0x000a241e) call6_btn_grp_pane_ParamLimits

0x937a,	// (0x000a241e) call6_btn_grp_pane

0x9389,	// (0x000a242d) call6_pane_g1_ParamLimits

0x9389,	// (0x000a242d) call6_pane_g1

0x9399,	// (0x000a243d) popup_call6_1st_window_ParamLimits

0x9399,	// (0x000a243d) popup_call6_1st_window

0x93a7,	// (0x000a244b) popup_call6_2nd_window_ParamLimits

0x93a7,	// (0x000a244b) popup_call6_2nd_window

0x93b5,	// (0x000a2459) cell_call6_btn_pane_ParamLimits

0x93b5,	// (0x000a2459) cell_call6_btn_pane

0xaa23,	// (0x000a3ac7) bg_popup_call2_in_pane_cp03

0xee87,	// (0x000a7f2b) popup_call6_1st_window_g1

0xee8f,	// (0x000a7f33) popup_call6_1st_window_g2

0xee97,	// (0x000a7f3b) popup_call6_1st_window_g3

0x0002,

0xfb4e,	// (0x000a8bf2) popup_call6_1st_window_g

0xee9f,	// (0x000a7f43) popup_call6_1st_window_t1

0xeeae,	// (0x000a7f52) popup_call6_1st_window_t2

0xeebc,	// (0x000a7f60) popup_call6_1st_window_t3

0x0002,

0xfb55,	// (0x000a8bf9) popup_call6_1st_window_t

0xaa23,	// (0x000a3ac7) bg_popup_call2_in_pane_cp04

0xee87,	// (0x000a7f2b) popup_call6_2nd_window_g1

0xee8f,	// (0x000a7f33) popup_call6_2nd_window_g2

0xee97,	// (0x000a7f3b) popup_call6_2nd_window_g3

0x0002,

0xfb4e,	// (0x000a8bf2) popup_call6_2nd_window_g

0xee9f,	// (0x000a7f43) popup_call6_2nd_window_t1

0x112e,	// (0x0009a1d2) bg_button_pane_cp15

0x93c4,	// (0x000a2468) cell_call6_btn_pane_g1

0x93cd,	// (0x000a2471) cell_call6_btn_pane_t1

0x93dc,	// (0x000a2480) listscroll_wgtman_pane_ParamLimits

0x93dc,	// (0x000a2480) listscroll_wgtman_pane

0x93f8,	// (0x000a249c) wgtman_btn_pane_ParamLimits

0x93f8,	// (0x000a249c) wgtman_btn_pane

0xb268,	// (0x000a430c) aid_scroll_copy1

0xeeca,	// (0x000a7f6e) list_wgtman_pane

0x942d,	// (0x000a24d1) wgtman_btn_pane_g1_ParamLimits

0x942d,	// (0x000a24d1) wgtman_btn_pane_g1

0x9455,	// (0x000a24f9) wgtman_btn_pane_t1_ParamLimits

0x9455,	// (0x000a24f9) wgtman_btn_pane_t1

0xeed4,	// (0x000a7f78) wgtman_btn_pane_t2_ParamLimits

0xeed4,	// (0x000a7f78) wgtman_btn_pane_t2

0x0001,

0xfb5c,	// (0x000a8c00) wgtman_btn_pane_t_ParamLimits

0xfb5c,	// (0x000a8c00) wgtman_btn_pane_t

0x948c,	// (0x000a2530) listrow_wgtman_pane_ParamLimits

0x948c,	// (0x000a2530) listrow_wgtman_pane

0x94a8,	// (0x000a254c) listrow_wgtman_pane_g1

0x94b5,	// (0x000a2559) listrow_wgtman_pane_g2

0x0001,

0xfb61,	// (0x000a8c05) listrow_wgtman_pane_g

0x94d3,	// (0x000a2577) listrow_wgtman_pane_t1

0x94eb,	// (0x000a258f) listrow_wgtman_pane_t2

0x0001,

0xfb66,	// (0x000a8c0a) listrow_wgtman_pane_t

0x9511,	// (0x000a25b5) wait_bar_pane_cp09

0xeeeb,	// (0x000a7f8f) main_calllock_btn_pane

0xeef5,	// (0x000a7f99) main_calllock_pane_g1

0xa075,	// (0x000a3119) bg_button_pane_cp17

0xef01,	// (0x000a7fa5) main_calllock_btn_pane_g1

0xef0a,	// (0x000a7fae) main_calllock_btn_pane_t1

0xa075,	// (0x000a3119) main_dialer3_pane

0xa075,	// (0x000a3119) main_fmrd2_pane

0xcd01,	// (0x000a5da5) main_fs_bigclock_unlock_btn_pane_g1

0x952b,	// (0x000a25cf) main_fs_bigclock_unlock_btn_pane_t1

0x9539,	// (0x000a25dd) area_fmrd2_info_pane_ParamLimits

0x9539,	// (0x000a25dd) area_fmrd2_info_pane

0x9547,	// (0x000a25eb) area_fmrd2_visual_pane_ParamLimits

0x9547,	// (0x000a25eb) area_fmrd2_visual_pane

0x9555,	// (0x000a25f9) fmrd2_indi_pane_ParamLimits

0x9555,	// (0x000a25f9) fmrd2_indi_pane

0x9562,	// (0x000a2606) area_fmrd2_visual_pane_g1

0x956a,	// (0x000a260e) area_fmrd2_visual_pane_t1

0x957a,	// (0x000a261e) area_fmrd2_visual_pane_t2

0x958a,	// (0x000a262e) area_fmrd2_visual_pane_t3

0x0002,

0xfb70,	// (0x000a8c14) area_fmrd2_visual_pane_t

0x959a,	// (0x000a263e) area_fmrd2_info_pane_g1

0x95a2,	// (0x000a2646) area_fmrd2_info_pane_t1

0x95b2,	// (0x000a2656) area_fmrd2_info_pane_t2

0x95c2,	// (0x000a2666) area_fmrd2_info_pane_t3

0x95d2,	// (0x000a2676) area_fmrd2_info_pane_t4

0x0003,

0xfb77,	// (0x000a8c1b) area_fmrd2_info_pane_t

0x95e0,	// (0x000a2684) fmrd2_indi_pane_t1

0x95f0,	// (0x000a2694) fmrd2_indi_pane_t2

0x9600,	// (0x000a26a4) fmrd2_indi_pane_t3

0x0002,

0xfb80,	// (0x000a8c24) fmrd2_indi_pane_t

0xe4c4,	// (0x000a7568) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4c4,	// (0x000a7568) list_single_fs_bigclock_indicator_pane_g5

0xe575,	// (0x000a7619) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe575,	// (0x000a7619) list_single_fs_bigclock_indicator_pane_t5

0x8cf6,	// (0x000a1d9a) aid_cell_bcale_month_pane_ParamLimits

0x8cf6,	// (0x000a1d9a) aid_cell_bcale_month_pane

0x8d14,	// (0x000a1db8) bcale_month_pane_ParamLimits

0x8d14,	// (0x000a1db8) bcale_month_pane

0x8d32,	// (0x000a1dd6) bcale_preview_pane_ParamLimits

0x8d32,	// (0x000a1dd6) bcale_preview_pane

0xecf0,	// (0x000a7d94) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0f,	// (0x000a7db3) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0f,	// (0x000a7db3) list_single_fs_bigclock_pane_t2

0x0001,

0xfb07,	// (0x000a8bab) list_single_fs_bigclock_pane_t_ParamLimits

0xfb07,	// (0x000a8bab) list_single_fs_bigclock_pane_t

0x9523,	// (0x000a25c7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfb6b,	// (0x000a8c0f) main_fs_bigclock_unlock_btn_pane_g

0x960e,	// (0x000a26b2) aid_dia3_key_size_ParamLimits

0x960e,	// (0x000a26b2) aid_dia3_key_size

0x961a,	// (0x000a26be) aid_dia3_listrow_size_ParamLimits

0x961a,	// (0x000a26be) aid_dia3_listrow_size

0x962a,	// (0x000a26ce) dia3_keypad_fun_pane_ParamLimits

0x962a,	// (0x000a26ce) dia3_keypad_fun_pane

0x963c,	// (0x000a26e0) dia3_keypad_num_pane_ParamLimits

0x963c,	// (0x000a26e0) dia3_keypad_num_pane

0x964e,	// (0x000a26f2) dia3_listscroll_pane_ParamLimits

0x964e,	// (0x000a26f2) dia3_listscroll_pane

0x965c,	// (0x000a2700) dia3_numentry_pane_ParamLimits

0x965c,	// (0x000a2700) dia3_numentry_pane

0xef19,	// (0x000a7fbd) dia3_list_pane

0xef24,	// (0x000a7fc8) scroll_pane_cp12

0xa075,	// (0x000a3119) bg_dia3_numentry_pane

0x966a,	// (0x000a270e) dia3_numentry_pane_t1

0x9679,	// (0x000a271d) cell_dia3_key_num_pane

0x9681,	// (0x000a2725) cell_dia3_key0_fun_pane_ParamLimits

0x9681,	// (0x000a2725) cell_dia3_key0_fun_pane

0x968e,	// (0x000a2732) cell_dia3_key1_fun_pane_ParamLimits

0x968e,	// (0x000a2732) cell_dia3_key1_fun_pane

0x969b,	// (0x000a273f) dia3_listrow_pane

0xe217,	// (0x000a72bb) bg_dia3_numentry_pane_g1

0xa075,	// (0x000a3119) bg_button_pane_cp21

0xef2f,	// (0x000a7fd3) cell_dia3_key_num_pane_t1

0xef3d,	// (0x000a7fe1) cell_dia3_key_num_pane_t2

0xef4c,	// (0x000a7ff0) cell_dia3_key_num_pane_t3

0xef5b,	// (0x000a7fff) cell_dia3_key_num_pane_t4

0x0003,

0xfb87,	// (0x000a8c2b) cell_dia3_key_num_pane_t

0xa075,	// (0x000a3119) bg_button_pane_cp19

0x96a8,	// (0x000a274c) cell_dia3_key0_fun_pane_g1

0xa075,	// (0x000a3119) bg_button_pane_cp20

0x96b0,	// (0x000a2754) cell_dia3_key1_fun_pane_g1

0x96b8,	// (0x000a275c) area_left_week_number_pane

0x96cb,	// (0x000a276f) area_top_day_name_pane

0x96d9,	// (0x000a277d) frame_month_view_pane

0xef6a,	// (0x000a800e) grid_month_view_pane

0x96ee,	// (0x000a2792) cell_top_day_name_pane_ParamLimits

0x96ee,	// (0x000a2792) cell_top_day_name_pane

0x9708,	// (0x000a27ac) cell_area_left_week_number_pane_ParamLimits

0x9708,	// (0x000a27ac) cell_area_left_week_number_pane

0x972b,	// (0x000a27cf) cell_month_view_pane_ParamLimits

0x972b,	// (0x000a27cf) cell_month_view_pane

0xef78,	// (0x000a801c) frm_month_g1

0x9757,	// (0x000a27fb) frm_month_g2

0x9768,	// (0x000a280c) frm_month_g3

0x9779,	// (0x000a281d) frm_month_g4

0x978a,	// (0x000a282e) frm_month_g5

0x979d,	// (0x000a2841) frm_month_g6

0x97b0,	// (0x000a2854) frm_month_g7

0xef85,	// (0x000a8029) frm_month_g8

0x97c3,	// (0x000a2867) frm_month_g9

0x97d0,	// (0x000a2874) frm_month_g10

0x97dd,	// (0x000a2881) frm_month_g11

0x97ea,	// (0x000a288e) frm_month_g12

0x97f7,	// (0x000a289b) frm_month_g13

0x9804,	// (0x000a28a8) frm_month_g14

0x9813,	// (0x000a28b7) frm_month_g15

0x9822,	// (0x000a28c6) frm_month_g16

0x000f,

0xfb90,	// (0x000a8c34) frm_month_g

0xef92,	// (0x000a8036) cell_top_day_name_pane_t1

0x9831,	// (0x000a28d5) cell_area_left_week_number_pane_g1

0x9840,	// (0x000a28e4) cell_area_left_week_number_pane_t1

0xcf4f,	// (0x000a5ff3) cell_month_view_pane_g1

0x9856,	// (0x000a28fa) cell_month_view_pane_t1

0xa075,	// (0x000a3119) main_fps_pane

0xe7ad,	// (0x000a7851) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7ad,	// (0x000a7851) cmail_ddmenu_btn02_pane_cp1

0xe7c9,	// (0x000a786d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c9,	// (0x000a786d) cmail_ddmenu_btn02_pane_cp2

0x8ff0,	// (0x000a2094) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8ff0,	// (0x000a2094) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfac4,	// (0x000a8b68) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfac4,	// (0x000a8b68) cmail_ddmenu_btn02_pane_g

0x900f,	// (0x000a20b3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x900f,	// (0x000a20b3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfac9,	// (0x000a8b6d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfac9,	// (0x000a8b6d) cmail_ddmenu_btn02_pane_t

0x986c,	// (0x000a2910) fps_text_pane_ParamLimits

0x986c,	// (0x000a2910) fps_text_pane

0x9879,	// (0x000a291d) main_fps_pane_g1_ParamLimits

0x9879,	// (0x000a291d) main_fps_pane_g1

0x9887,	// (0x000a292b) wait_bar_pane_cp010_ParamLimits

0x9887,	// (0x000a292b) wait_bar_pane_cp010

0x9893,	// (0x000a2937) fps_text_pane_t1_ParamLimits

0x9893,	// (0x000a2937) fps_text_pane_t1

0x62d4,	// (0x0009f378) cam4_image_uncrop_pane_g1

0x62dd,	// (0x0009f381) cam4_image_uncrop_pane_g2

0x62e6,	// (0x0009f38a) cam4_image_uncrop_pane_g3

0x62ef,	// (0x0009f393) cam4_image_uncrop_pane_g4

0x0003,

0xf6c8,	// (0x000a876c) cam4_image_uncrop_pane_g

0x969b,	// (0x000a273f) dia3_listrow_pane_ParamLimits

0xa075,	// (0x000a3119) main_phob2_pane

0x8b28,	// (0x000a1bcc) cell_tport_appsw_pane_cp02_ParamLimits

0x8b28,	// (0x000a1bcc) cell_tport_appsw_pane_cp02

0x8b37,	// (0x000a1bdb) cell_tport_appsw_pane_cp03_ParamLimits

0x8b37,	// (0x000a1bdb) cell_tport_appsw_pane_cp03

0xa075,	// (0x000a3119) phob2_contact_card_pane

0xa075,	// (0x000a3119) phob2_listscroll_pane

0xefa5,	// (0x000a8049) phob2_list_pane

0xefad,	// (0x000a8051) scroll_pane_cp034

0x98ac,	// (0x000a2950) phob2_cc_data_pane_ParamLimits

0x98ac,	// (0x000a2950) phob2_cc_data_pane

0x98c6,	// (0x000a296a) phob2_cc_listscroll_pane_ParamLimits

0x98c6,	// (0x000a296a) phob2_cc_listscroll_pane

0x98e0,	// (0x000a2984) list_double_large_graphic_phob2_pane_ParamLimits

0x98e0,	// (0x000a2984) list_double_large_graphic_phob2_pane

0x98ff,	// (0x000a29a3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98ff,	// (0x000a29a3) list_double_large_graphic_phob2_pane_g1

0x9915,	// (0x000a29b9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9915,	// (0x000a29b9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfbb1,	// (0x000a8c55) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfbb1,	// (0x000a8c55) list_double_large_graphic_phob2_pane_g

0x9921,	// (0x000a29c5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9921,	// (0x000a29c5) list_double_large_graphic_phob2_pane_t1

0x9937,	// (0x000a29db) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9937,	// (0x000a29db) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfbb6,	// (0x000a8c5a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfbb6,	// (0x000a8c5a) list_double_large_graphic_phob2_pane_t

0xa075,	// (0x000a3119) list_highlight_pane_cp024

0x994c,	// (0x000a29f0) phob2_cc_button_pane

0x9954,	// (0x000a29f8) phob2_cc_data_pane_g1_ParamLimits

0x9954,	// (0x000a29f8) phob2_cc_data_pane_g1

0x9960,	// (0x000a2a04) phob2_cc_data_pane_g2_ParamLimits

0x9960,	// (0x000a2a04) phob2_cc_data_pane_g2

0x0001,

0xfbbb,	// (0x000a8c5f) phob2_cc_data_pane_g_ParamLimits

0xfbbb,	// (0x000a8c5f) phob2_cc_data_pane_g

0x996c,	// (0x000a2a10) phob2_cc_data_pane_t1_ParamLimits

0x996c,	// (0x000a2a10) phob2_cc_data_pane_t1

0x997e,	// (0x000a2a22) phob2_cc_data_pane_t2_ParamLimits

0x997e,	// (0x000a2a22) phob2_cc_data_pane_t2

0x9990,	// (0x000a2a34) phob2_cc_data_pane_t3_ParamLimits

0x9990,	// (0x000a2a34) phob2_cc_data_pane_t3

0x0002,

0xfbc0,	// (0x000a8c64) phob2_cc_data_pane_t_ParamLimits

0xfbc0,	// (0x000a8c64) phob2_cc_data_pane_t

0xefb5,	// (0x000a8059) phob2_cc_list_pane_ParamLimits

0xefb5,	// (0x000a8059) phob2_cc_list_pane

0xda6a,	// (0x000a6b0e) scroll_pane_cp035_ParamLimits

0xda6a,	// (0x000a6b0e) scroll_pane_cp035

0xab6b,	// (0x000a3c0f) bg_button_pane_cp033

0xefc1,	// (0x000a8065) phob2_cc_button_pane_g1

0xefcd,	// (0x000a8071) phob2_cc_button_pane_t1

0xefe2,	// (0x000a8086) phob2_cc_button_pane_t2

0x0001,

0xfbc7,	// (0x000a8c6b) phob2_cc_button_pane_t

0x99a2,	// (0x000a2a46) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99a2,	// (0x000a2a46) list_double_large_graphic_phob2_cc_pane

0x99cb,	// (0x000a2a6f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99cb,	// (0x000a2a6f) list_double_large_graphic_phob2_cc_pane_g1

0x99dc,	// (0x000a2a80) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99dc,	// (0x000a2a80) list_double_large_graphic_phob2_cc_pane_g2

0x99eb,	// (0x000a2a8f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99eb,	// (0x000a2a8f) list_double_large_graphic_phob2_cc_pane_g3

0x99fa,	// (0x000a2a9e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99fa,	// (0x000a2a9e) list_double_large_graphic_phob2_cc_pane_g4

0x9a0b,	// (0x000a2aaf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a0b,	// (0x000a2aaf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfbcc,	// (0x000a8c70) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfbcc,	// (0x000a8c70) list_double_large_graphic_phob2_cc_pane_g

0x9a1a,	// (0x000a2abe) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a1a,	// (0x000a2abe) list_double_large_graphic_phob2_cc_pane_t1

0x9a43,	// (0x000a2ae7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a43,	// (0x000a2ae7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfbd7,	// (0x000a8c7b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfbd7,	// (0x000a8c7b) list_double_large_graphic_phob2_cc_pane_t

0xeff4,	// (0x000a8098) list_highlight_pane_cp025_ParamLimits

0xeff4,	// (0x000a8098) list_highlight_pane_cp025

0xab6b,	// (0x000a3c0f) bg_button_pane_cp033_ParamLimits

0xefc1,	// (0x000a8065) phob2_cc_button_pane_g1_ParamLimits

0xefcd,	// (0x000a8071) phob2_cc_button_pane_t1_ParamLimits

0xefe2,	// (0x000a8086) phob2_cc_button_pane_t2_ParamLimits

0xfbc7,	// (0x000a8c6b) phob2_cc_button_pane_t_ParamLimits

0x1122,	// (0x0009a1c6) popup_wgtman_window

0xd845,	// (0x000a68e9) scroll_pane_cp038

0x9415,	// (0x000a24b9) wgtman_btn_pane_cp_01_ParamLimits

0x9415,	// (0x000a24b9) wgtman_btn_pane_cp_01

0xf002,	// (0x000a80a6) wgtman_content_pane

0xf00b,	// (0x000a80af) wgtman_heading_pane

0xa075,	// (0x000a3119) bg_heading_pane_cp02

0xf014,	// (0x000a80b8) wgtman_heading_pane_g1

0xf01c,	// (0x000a80c0) wgtman_heading_pane_t1

0xf02a,	// (0x000a80ce) scroll_pane_cp036

0xf032,	// (0x000a80d6) wgtman_list_pane

0xe689,	// (0x000a772d) wgtman_list_pane_t1_ParamLimits

0xe689,	// (0x000a772d) wgtman_list_pane_t1

0x6233,	// (0x0009f2d7) cam4_grid_pane

0x7007,	// (0x000a00ab) bg_button_pane_cp015_ParamLimits

0x7019,	// (0x000a00bd) bg_button_pane_cp016_ParamLimits

0x702c,	// (0x000a00d0) bg_button_pane_cp017_ParamLimits

0x7082,	// (0x000a0126) popup_vitu2_query_window_g3_ParamLimits

0x7082,	// (0x000a0126) popup_vitu2_query_window_g3

0x713d,	// (0x000a01e1) popup_vitu2_query_window_t6_ParamLimits

0x713d,	// (0x000a01e1) popup_vitu2_query_window_t6

0x7168,	// (0x000a020c) popup_vitu2_query_window_t7_ParamLimits

0x7168,	// (0x000a020c) popup_vitu2_query_window_t7

0xd6e1,	// (0x000a6785) cam4_grid_pane_g1

0xd6ea,	// (0x000a678e) cam4_grid_pane_g2

0xf03a,	// (0x000a80de) cam4_grid_pane_g3

0xf043,	// (0x000a80e7) cam4_grid_pane_g4

0x0003,

0xfbdc,	// (0x000a8c80) cam4_grid_pane_g

0x1f96,	// (0x0009b03a) aid_placing_vt_slider_lsc_ParamLimits

0x22d6,	// (0x0009b37a) vidtel_button_pane_ParamLimits

0x22d6,	// (0x0009b37a) vidtel_button_pane

0xa075,	// (0x000a3119) bg_button_pane_cp034

0xf04e,	// (0x000a80f2) vidtel_button_pane_g1

0xf056,	// (0x000a80fa) vidtel_button_pane_t1

0xd95f,	// (0x000a6a03) aid_size_vtel_slider_touch

0xda6a,	// (0x000a6b0e) scroll_pane_cp039

0x7f80,	// (0x000a1024) ncim_query_button_pane_cp01_ParamLimits

0x7f9f,	// (0x000a1043) ncimui_query_pane_g1_ParamLimits

0xab6b,	// (0x000a3c0f) input_focus_pane_cp012_ParamLimits

0xe25d,	// (0x000a7301) ncim_query_entry_pane_t1_ParamLimits

0xda6a,	// (0x000a6b0e) scroll_pane_cp039_ParamLimits

0xb33f,	// (0x000a43e3) navi_pane_bcale_mc_g1

0xb347,	// (0x000a43eb) navi_pane_bcale_mc_t1

0xe812,	// (0x000a78b6) main_sp_fs_email_pane_g1

0xe81e,	// (0x000a78c2) main_sp_fs_email_pane_g2

0x0001,

0x0b5c,	// (0x00099c00) main_sp_fs_email_pane_g

0xea74,	// (0x000a7b18) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea74,	// (0x000a7b18) list_single_cale_mrui_row_pane_g3

0x902f,	// (0x000a20d3) list_single_recal_day_pane_g5_event_pane

0xa121,	// (0x000a31c5) list_single_recal_day_pane_g7

0xf06c,	// (0x000a8110) list_recal_day_event_pane_cp01

0xf075,	// (0x000a8119) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x000a8121) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x000a8129) list_recal_vselct_pane_cp01

0xd981,	// (0x000a6a25) list_recal_day_event_pane_cp01_g1

0xa156,	// (0x000a31fa) list_recal_day_event_pane_cp01_t1

0xa129,	// (0x000a31cd) list_single_recal_day_pane_t1_ParamLimits

0xa13b,	// (0x000a31df) list_single_recal_day_pane_t2_ParamLimits

0xfad9,	// (0x000a8b7d) list_single_recal_day_pane_t_ParamLimits

0xa77b,	// (0x000a381f) bg_notes_pane_ParamLimits

0xa82a,	// (0x000a38ce) list_notes_pane_ParamLimits

0x1487,	// (0x0009a52b) scroll_pane_cp06_ParamLimits

0xa84c,	// (0x000a38f0) main_notes_pane_ParamLimits

0xa075,	// (0x000a3119) main_welc_pane

0x9a6c,	// (0x000a2b10) main_welc_body_pane_ParamLimits

0x9a6c,	// (0x000a2b10) main_welc_body_pane

0x9a85,	// (0x000a2b29) main_welc_opti_pane_ParamLimits

0x9a85,	// (0x000a2b29) main_welc_opti_pane

0x9ab8,	// (0x000a2b5c) main_welc_pane_t1_ParamLimits

0x9ab8,	// (0x000a2b5c) main_welc_pane_t1

0x9ad2,	// (0x000a2b76) main_welc_body_row_pane_ParamLimits

0x9ad2,	// (0x000a2b76) main_welc_body_row_pane

0xdde3,	// (0x000a6e87) main_welc_opti_row_pane_ParamLimits

0xdde3,	// (0x000a6e87) main_welc_opti_row_pane

0xf08f,	// (0x000a8133) main_welc_opti_row_pane_g1

0x9afb,	// (0x000a2b9f) main_welc_opti_row_pane_t1

0xf097,	// (0x000a813b) main_welc_body_row_pane_t1

0xedc7,	// (0x000a7e6b) popup_notif_wgt_heading_pane

0xede1,	// (0x000a7e85) aid_size_list_notif_wgt_del_ParamLimits

0xedee,	// (0x000a7e92) list_notif_wgt_row_pane_g1_ParamLimits

0xedfa,	// (0x000a7e9e) list_notif_wgt_row_pane_g2_ParamLimits

0xee09,	// (0x000a7ead) list_notif_wgt_row_pane_g3_ParamLimits

0xfb31,	// (0x000a8bd5) list_notif_wgt_row_pane_g_ParamLimits

0xee16,	// (0x000a7eba) list_notif_wgt_row_pane_t1_ParamLimits

0xee2c,	// (0x000a7ed0) list_notif_wgt_row_pane_t2_ParamLimits

0xee3e,	// (0x000a7ee2) list_notif_wgt_row_pane_t3_ParamLimits

0xfb38,	// (0x000a8bdc) list_notif_wgt_row_pane_t_ParamLimits

0x94a8,	// (0x000a254c) listrow_wgtman_pane_g1_ParamLimits

0x94b5,	// (0x000a2559) listrow_wgtman_pane_g2_ParamLimits

0xfb61,	// (0x000a8c05) listrow_wgtman_pane_g_ParamLimits

0x94d3,	// (0x000a2577) listrow_wgtman_pane_t1_ParamLimits

0x94eb,	// (0x000a258f) listrow_wgtman_pane_t2_ParamLimits

0xfb66,	// (0x000a8c0a) listrow_wgtman_pane_t_ParamLimits

0x9511,	// (0x000a25b5) wait_bar_pane_cp09_ParamLimits

0xa075,	// (0x000a3119) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000a814a) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000a8152) popup_notif_wgt_heading_pane_t1

0xa075,	// (0x000a3119) main_vids_pane

0xa075,	// (0x000a3119) vids_listscroll_pane

0x9b0a,	// (0x000a2bae) scroll_pane_cp040

0xa075,	// (0x000a3119) vids_list_pane

0x9b15,	// (0x000a2bb9) vids_list_double_pane_ParamLimits

0x9b15,	// (0x000a2bb9) vids_list_double_pane

0x9b2d,	// (0x000a2bd1) vids_list_double_pane_g1

0x9b36,	// (0x000a2bda) vids_list_double_pane_t1

0x9b46,	// (0x000a2bea) vids_list_double_pane_t2

0x0001,

0xfbea,	// (0x000a8c8e) vids_list_double_pane_t

0x431b,	// (0x0009d3bf) main_ncimui_pane_ParamLimits

0x7dd7,	// (0x000a0e7b) main_ncimui_pane_g1_ParamLimits

0x7de3,	// (0x000a0e87) main_ncimui_pane_g2_ParamLimits

0x7de3,	// (0x000a0e87) main_ncimui_pane_g2

0x0001,

0xf944,	// (0x000a89e8) main_ncimui_pane_g_ParamLimits

0xf944,	// (0x000a89e8) main_ncimui_pane_g

0x9a9e,	// (0x000a2b42) main_welc_pane_g1_ParamLimits

0x9a9e,	// (0x000a2b42) main_welc_pane_g1

0x9aaa,	// (0x000a2b4e) main_welc_pane_g2_ParamLimits

0x9aaa,	// (0x000a2b4e) main_welc_pane_g2

0x0001,

0xfbe5,	// (0x000a8c89) main_welc_pane_g_ParamLimits

0xfbe5,	// (0x000a8c89) main_welc_pane_g

0xa77b,	// (0x000a381f) listscroll_mce_pane_ParamLimits

0xb494,	// (0x000a4538) wait_bar_pane_cp10

0xc8e1,	// (0x000a5985) main_cale_day_pane_ParamLimits

0xc8e1,	// (0x000a5985) main_cale_week_pane_ParamLimits

0xa77b,	// (0x000a381f) main_messa_pane_ParamLimits

0x5647,	// (0x0009e6eb) main_clock2_btn_pane_ParamLimits

0x5647,	// (0x0009e6eb) main_clock2_btn_pane

0xd0d7,	// (0x000a617b) main_clock2_btn_pane_cp01_ParamLimits

0xd0d7,	// (0x000a617b) main_clock2_btn_pane_cp01

0xea45,	// (0x000a7ae9) list_cale_mrui_pane_ParamLimits

0xee74,	// (0x000a7f18) main_cf0_pane_g2

0x0001,

0xfb3f,	// (0x000a8be3) main_cf0_pane_g

0x96b8,	// (0x000a275c) area_left_week_number_pane_ParamLimits

0x96cb,	// (0x000a276f) area_top_day_name_pane_ParamLimits

0x96d9,	// (0x000a277d) frame_month_view_pane_ParamLimits

0xef6a,	// (0x000a800e) grid_month_view_pane_ParamLimits

0xef78,	// (0x000a801c) frm_month_g1_ParamLimits

0x9757,	// (0x000a27fb) frm_month_g2_ParamLimits

0x9768,	// (0x000a280c) frm_month_g3_ParamLimits

0x9779,	// (0x000a281d) frm_month_g4_ParamLimits

0x978a,	// (0x000a282e) frm_month_g5_ParamLimits

0x979d,	// (0x000a2841) frm_month_g6_ParamLimits

0x97b0,	// (0x000a2854) frm_month_g7_ParamLimits

0xef85,	// (0x000a8029) frm_month_g8_ParamLimits

0x97c3,	// (0x000a2867) frm_month_g9_ParamLimits

0x97d0,	// (0x000a2874) frm_month_g10_ParamLimits

0x97dd,	// (0x000a2881) frm_month_g11_ParamLimits

0x97ea,	// (0x000a288e) frm_month_g12_ParamLimits

0x97f7,	// (0x000a289b) frm_month_g13_ParamLimits

0x9804,	// (0x000a28a8) frm_month_g14_ParamLimits

0x9813,	// (0x000a28b7) frm_month_g15_ParamLimits

0x9822,	// (0x000a28c6) frm_month_g16_ParamLimits

0xfb90,	// (0x000a8c34) frm_month_g_ParamLimits

0xef92,	// (0x000a8036) cell_top_day_name_pane_t1_ParamLimits

0x9831,	// (0x000a28d5) cell_area_left_week_number_pane_g1_ParamLimits

0x9840,	// (0x000a28e4) cell_area_left_week_number_pane_t1_ParamLimits

0xcf4f,	// (0x000a5ff3) cell_month_view_pane_g1_ParamLimits

0x9856,	// (0x000a28fa) cell_month_view_pane_t1_ParamLimits

0xa773,	// (0x000a3817) main_clock2_btn_pane_g1

0xf0bc,	// (0x000a8160) main_clock2_btn_pane_t1

0xab6b,	// (0x000a3c0f) listscroll_cmail_pane_ParamLimits

0xe812,	// (0x000a78b6) main_sp_fs_email_pane_g1_ParamLimits

0xe81e,	// (0x000a78c2) main_sp_fs_email_pane_g2_ParamLimits

0x0b5c,	// (0x00099c00) main_sp_fs_email_pane_g_ParamLimits

0xeb53,	// (0x000a7bf7) list_recal_day_pane_ParamLimits

0xeb64,	// (0x000a7c08) mian_recal_day_pane_t1

0x8802,	// (0x000a18a6) list_single_dyc_row_text_pane_t4_ParamLimits

0x8802,	// (0x000a18a6) list_single_dyc_row_text_pane_t4

0x8839,	// (0x000a18dd) list_single_dyc_row_text_pane_t5_ParamLimits

0x8839,	// (0x000a18dd) list_single_dyc_row_text_pane_t5

0x9e10,	// (0x000a2eb4) list_single_dyc_row_text_pane_t6_ParamLimits

0x9e10,	// (0x000a2eb4) list_single_dyc_row_text_pane_t6

0x3179,	// (0x0009c21d) aid_mgn_list_cale_time_pane

0x431b,	// (0x0009d3bf) main_gallery2_pane_ParamLimits

0xd0ed,	// (0x000a6191) main_clock2_pane_cp01_t1

0xd0fb,	// (0x000a619f) main_clock2_pane_cp01_t3

0x0001,

0x063b,	// (0x000996df) main_clock2_pane_cp01_t

0x18ca,	// (0x0009a96e) cale_week_scroll_pane_g16_ParamLimits

0x18ca,	// (0x0009a96e) cale_week_scroll_pane_g16

0xaa23,	// (0x000a3ac7) vorec_slider_pane

0xf056,	// (0x000a80fa) vidtel_button_pane_t1_ParamLimits

0x908a,	// (0x000a212e) main_fs_bigclock_clock_pane_g1_ParamLimits

0x908a,	// (0x000a212e) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9097,	// (0x000a213b) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9097,	// (0x000a213b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfaf2,	// (0x000a8b96) main_fs_bigclock_clock_pane_g_ParamLimits

0x90a3,	// (0x000a2147) main_fs_bigclock_clock_pane_t1_ParamLimits

0x90b6,	// (0x000a215a) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfafb,	// (0x000a8b9f) main_fs_bigclock_clock_pane_t_ParamLimits

0x4eea,	// (0x0009df8e) main_mup3_lyrics_pane_ParamLimits

0x4eea,	// (0x0009df8e) main_mup3_lyrics_pane

0x9b7a,	// (0x000a2c1e) main_mup3_lyrics_pane_t1_ParamLimits

0x9b7a,	// (0x000a2c1e) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
