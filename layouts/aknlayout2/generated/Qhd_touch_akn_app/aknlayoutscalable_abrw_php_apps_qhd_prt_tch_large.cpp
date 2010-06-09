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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00092de6 };

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
0x0f77,	// (0x00093d5d) Screen

0x0f83,	// (0x00093d69) application_window

0x0fdf,	// (0x00093dc5) area_bottom_pane_ParamLimits

0x0fdf,	// (0x00093dc5) area_bottom_pane

0x1038,	// (0x00093e1e) area_top_pane_ParamLimits

0x1038,	// (0x00093e1e) area_top_pane

0x109c,	// (0x00093e82) call_video_uplink_pane_ParamLimits

0x109c,	// (0x00093e82) call_video_uplink_pane

0x10db,	// (0x00093ec1) main_pane_ParamLimits

0x10db,	// (0x00093ec1) main_pane

0xd578,	// (0x000a035e) context_pane

0x45e2,	// (0x000973c8) navi_pane

0x4608,	// (0x000973ee) popup_cale_events_window_ParamLimits

0x4608,	// (0x000973ee) popup_cale_events_window

0xd58b,	// (0x000a0371) popup_mup_playback_window

0x4620,	// (0x00097406) signal_pane

0xa3e4,	// (0x0009d1ca) main_browser_pane

0xa5a9,	// (0x0009d38f) main_burst_pane

0x4460,	// (0x00097246) main_calc_pane

0xd55e,	// (0x000a0344) main_cale_day_pane

0x183e,	// (0x00094624) main_cale_month_pane

0xd55e,	// (0x000a0344) main_cale_week_pane

0xa5a9,	// (0x0009d38f) main_call_pane

0xa0c4,	// (0x0009ceaa) main_call_poc_pane

0xa5a9,	// (0x0009d38f) main_camera_pane

0xa5a9,	// (0x0009d38f) main_chi_dic_pane

0xbed1,	// (0x0009ecb7) main_clock_pane

0xa0c4,	// (0x0009ceaa) main_fmradio_pane

0xa5a9,	// (0x0009d38f) main_graph_messa_pane

0xa0c4,	// (0x0009ceaa) main_help_pane

0xa3e4,	// (0x0009d1ca) main_im_pane

0xa31f,	// (0x0009d105) main_image_pane_ParamLimits

0xa31f,	// (0x0009d105) main_image_pane

0xa0c4,	// (0x0009ceaa) main_location2_pane

0xa5a9,	// (0x0009d38f) main_location_pane

0xa31f,	// (0x0009d105) main_messa_pane

0xa0c4,	// (0x0009ceaa) main_mp2_pane

0xa5a9,	// (0x0009d38f) main_mp_pane

0xa0c4,	// (0x0009ceaa) main_msg_pane

0xa0c4,	// (0x0009ceaa) main_mup_eq_pane

0xa0c4,	// (0x0009ceaa) main_mup_pane

0xa3e4,	// (0x0009d1ca) main_notes_pane

0xa0c4,	// (0x0009ceaa) main_pec_pane

0xa0c4,	// (0x0009ceaa) main_phob_pane

0xa0c4,	// (0x0009ceaa) main_pinb_pane

0xa0c4,	// (0x0009ceaa) main_postcard_pane

0xa0c4,	// (0x0009ceaa) main_qdial_pane

0xa5a9,	// (0x0009d38f) main_skin_pane

0xa0c4,	// (0x0009ceaa) main_smil2_pane

0xa5a9,	// (0x0009d38f) main_smil_pane

0xa5a9,	// (0x0009d38f) main_video_pane

0xa5a9,	// (0x0009d38f) main_video_tele_pane

0xa31f,	// (0x0009d105) main_viewer_pane_ParamLimits

0xa31f,	// (0x0009d105) main_viewer_pane

0xa5a9,	// (0x0009d38f) main_vorec_pane

0x44ac,	// (0x00097292) popup_blid_sat_info_window_ParamLimits

0x44ac,	// (0x00097292) popup_blid_sat_info_window

0x44cc,	// (0x000972b2) popup_dyc_status_message_window_ParamLimits

0x44cc,	// (0x000972b2) popup_dyc_status_message_window

0x44dc,	// (0x000972c2) popup_grid_large_graphic_window_ParamLimits

0x44dc,	// (0x000972c2) popup_grid_large_graphic_window

0x456d,	// (0x00097353) popup_loc_request_window_ParamLimits

0x456d,	// (0x00097353) popup_loc_request_window

0x45ba,	// (0x000973a0) popup_wml_address_window_ParamLimits

0x45ba,	// (0x000973a0) popup_wml_address_window

0x4338,	// (0x0009711e) call_muted_g1

0x3ffa,	// (0x00096de0) popup_call_audio_conf_window_ParamLimits

0x3ffa,	// (0x00096de0) popup_call_audio_conf_window

0x4348,	// (0x0009712e) popup_call_audio_first_window_ParamLimits

0x4348,	// (0x0009712e) popup_call_audio_first_window

0x4388,	// (0x0009716e) popup_call_audio_in_window_ParamLimits

0x4388,	// (0x0009716e) popup_call_audio_in_window

0x43ac,	// (0x00097192) popup_call_audio_out_window_ParamLimits

0x43ac,	// (0x00097192) popup_call_audio_out_window

0x43ce,	// (0x000971b4) popup_call_audio_second_window_ParamLimits

0x43ce,	// (0x000971b4) popup_call_audio_second_window

0x43fe,	// (0x000971e4) popup_call_audio_wait_window_ParamLimits

0x43fe,	// (0x000971e4) popup_call_audio_wait_window

0x441f,	// (0x00097205) popup_number_entry_window_ParamLimits

0x441f,	// (0x00097205) popup_number_entry_window

0x9cb1,	// (0x0009ca97) bg_popup_call_pane_cp05_ParamLimits

0x9cb1,	// (0x0009ca97) bg_popup_call_pane_cp05

0x9cd1,	// (0x0009cab7) popup_number_entry_window_t1

0x9ce4,	// (0x0009caca) popup_number_entry_window_t2

0x9cf6,	// (0x0009cadc) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000a1eb0) popup_number_entry_window_t

0x9d08,	// (0x0009caee) text_title_cp2

0x9d1b,	// (0x0009cb01) bg_popup_call_pane_cp_ParamLimits

0x9d1b,	// (0x0009cb01) bg_popup_call_pane_cp

0x9d29,	// (0x0009cb0f) call_thumbnail_pane

0x9d31,	// (0x0009cb17) popup_call_audio_in_window_g1_ParamLimits

0x9d31,	// (0x0009cb17) popup_call_audio_in_window_g1

0x9d3d,	// (0x0009cb23) popup_call_audio_in_window_g2_ParamLimits

0x9d3d,	// (0x0009cb23) popup_call_audio_in_window_g2

0x9d49,	// (0x0009cb2f) popup_call_audio_in_window_g3_ParamLimits

0x9d49,	// (0x0009cb2f) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000a1eb9) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000a1eb9) popup_call_audio_in_window_g

0x9d55,	// (0x0009cb3b) popup_call_audio_in_window_t1_ParamLimits

0x9d55,	// (0x0009cb3b) popup_call_audio_in_window_t1

0x9d71,	// (0x0009cb57) popup_call_audio_in_window_t2_ParamLimits

0x9d71,	// (0x0009cb57) popup_call_audio_in_window_t2

0x9d8d,	// (0x0009cb73) popup_call_audio_in_window_t3_ParamLimits

0x9d8d,	// (0x0009cb73) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000a1ec0) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000a1ec0) popup_call_audio_in_window_t

0x9d1b,	// (0x0009cb01) bg_popup_call_pane_cp01_ParamLimits

0x9d1b,	// (0x0009cb01) bg_popup_call_pane_cp01

0x9d29,	// (0x0009cb0f) call_thumbnail_pane_cp02

0x9da0,	// (0x0009cb86) call_type_pane_cp022

0x9da8,	// (0x0009cb8e) popup_call_audio_out_window_g1_ParamLimits

0x9da8,	// (0x0009cb8e) popup_call_audio_out_window_g1

0x9dba,	// (0x0009cba0) popup_call_audio_out_window_g2_ParamLimits

0x9dba,	// (0x0009cba0) popup_call_audio_out_window_g2

0x9dc6,	// (0x0009cbac) popup_call_audio_out_window_g3_ParamLimits

0x9dc6,	// (0x0009cbac) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000a1ec7) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000a1ec7) popup_call_audio_out_window_g

0x9dd8,	// (0x0009cbbe) popup_call_audio_out_window_t1_ParamLimits

0x9dd8,	// (0x0009cbbe) popup_call_audio_out_window_t1

0x9df0,	// (0x0009cbd6) popup_call_audio_out_window_t2_ParamLimits

0x9df0,	// (0x0009cbd6) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000a1ece) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000a1ece) popup_call_audio_out_window_t

0x9e05,	// (0x0009cbeb) bg_popup_call_pane_ParamLimits

0x9e05,	// (0x0009cbeb) bg_popup_call_pane

0x12f4,	// (0x000940da) call_thumbnail_pane_cp_ParamLimits

0x12f4,	// (0x000940da) call_thumbnail_pane_cp

0x9e89,	// (0x0009cc6f) call_type_pane_cp01_ParamLimits

0x9e89,	// (0x0009cc6f) call_type_pane_cp01

0x9ecd,	// (0x0009ccb3) popup_call_audio_first_window_g1_ParamLimits

0x9ecd,	// (0x0009ccb3) popup_call_audio_first_window_g1

0x9f19,	// (0x0009ccff) popup_call_audio_first_window_g2_ParamLimits

0x9f19,	// (0x0009ccff) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000a1ed3) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000a1ed3) popup_call_audio_first_window_g

0x9f5d,	// (0x0009cd43) popup_call_audio_first_window_t1_ParamLimits

0x9f5d,	// (0x0009cd43) popup_call_audio_first_window_t1

0xa009,	// (0x0009cdef) popup_call_audio_first_window_t4_ParamLimits

0xa009,	// (0x0009cdef) popup_call_audio_first_window_t4

0xa095,	// (0x0009ce7b) popup_call_audio_first_window_t5_ParamLimits

0xa095,	// (0x0009ce7b) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000a1ed8) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000a1ed8) popup_call_audio_first_window_t

0xa0c4,	// (0x0009ceaa) bg_popup_call_pane_cp02

0xa0ce,	// (0x0009ceb4) call_type_pane_cp023

0xa0d6,	// (0x0009cebc) popup_call_audio_wait_window_g1

0xa0de,	// (0x0009cec4) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a1edf) popup_call_audio_wait_window_g

0xa0e6,	// (0x0009cecc) popup_call_audio_wait_window_t3

0xa0f4,	// (0x0009ceda) bg_popup_call_pane_cp03_ParamLimits

0xa0f4,	// (0x0009ceda) bg_popup_call_pane_cp03

0xa154,	// (0x0009cf3a) call_thumbnail_pane_cp011_ParamLimits

0xa154,	// (0x0009cf3a) call_thumbnail_pane_cp011

0xa160,	// (0x0009cf46) call_type_pane_cp034_ParamLimits

0xa160,	// (0x0009cf46) call_type_pane_cp034

0xa19c,	// (0x0009cf82) popup_call_audio_second_window_g1_ParamLimits

0xa19c,	// (0x0009cf82) popup_call_audio_second_window_g1

0xa1d8,	// (0x0009cfbe) popup_call_audio_second_window_g2_ParamLimits

0xa1d8,	// (0x0009cfbe) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000a1ee4) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000a1ee4) popup_call_audio_second_window_g

0xa214,	// (0x0009cffa) popup_call_audio_second_window_t1_ParamLimits

0xa214,	// (0x0009cffa) popup_call_audio_second_window_t1

0xa295,	// (0x0009d07b) popup_call_audio_second_window_t2_ParamLimits

0xa295,	// (0x0009d07b) popup_call_audio_second_window_t2

0xa2cb,	// (0x0009d0b1) popup_call_audio_second_window_t3_ParamLimits

0xa2cb,	// (0x0009d0b1) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000a1ee9) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000a1ee9) popup_call_audio_second_window_t

0xa0c4,	// (0x0009ceaa) bg_popup_call_pane_cp04

0xa301,	// (0x0009d0e7) list_conf_pane

0xa309,	// (0x0009d0ef) popup_call_audio_conf_window_t1

0xa317,	// (0x0009d0fd) call_thumbnail_pane_g1

0xa31f,	// (0x0009d105) bg_pinb_pane_ParamLimits

0xa31f,	// (0x0009d105) bg_pinb_pane

0xa32d,	// (0x0009d113) find_pinb_pane

0xa336,	// (0x0009d11c) listscroll_pinb_pane_ParamLimits

0xa336,	// (0x0009d11c) listscroll_pinb_pane

0xa345,	// (0x0009d12b) pinb_bg_pane_g1

0x1318,	// (0x000940fe) pinb_bg_pane_g2

0x1324,	// (0x0009410a) pinb_bg_pane_g3

0x1330,	// (0x00094116) pinb_bg_pane_g4

0x133c,	// (0x00094122) pinb_bg_pane_g5

0x1348,	// (0x0009412e) pinb_bg_pane_g6

0x1353,	// (0x00094139) pinb_bg_pane_g7

0x135e,	// (0x00094144) pinb_bg_pane_g8

0x1369,	// (0x0009414f) pinb_bg_pane_g9

0x1373,	// (0x00094159) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000a1ef0) pinb_bg_pane_g

0x1390,	// (0x00094176) grid_pinb_pane

0x139b,	// (0x00094181) list_pinb_pane

0x13a6,	// (0x0009418c) scroll_pane_cp01_ParamLimits

0x13a6,	// (0x0009418c) scroll_pane_cp01

0xa34f,	// (0x0009d135) find_pinb_pane_g1_ParamLimits

0xa34f,	// (0x0009d135) find_pinb_pane_g1

0xa367,	// (0x0009d14d) find_pinb_pane_t1

0xa379,	// (0x0009d15f) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000a1f0a) find_pinb_pane_t

0xa38e,	// (0x0009d174) input_focus_pane_cp01_ParamLimits

0xa38e,	// (0x0009d174) input_focus_pane_cp01

0x13b8,	// (0x0009419e) cell_pinb_pane_ParamLimits

0x13b8,	// (0x0009419e) cell_pinb_pane

0x13e0,	// (0x000941c6) cell_pinb_pane_g1_ParamLimits

0x13e0,	// (0x000941c6) cell_pinb_pane_g1

0x13f5,	// (0x000941db) cell_pinb_pane_g2_ParamLimits

0x13f5,	// (0x000941db) cell_pinb_pane_g2

0xa39a,	// (0x0009d180) cell_pinb_pane_g3_ParamLimits

0xa39a,	// (0x0009d180) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000a1f0f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000a1f0f) cell_pinb_pane_g

0xa0c4,	// (0x0009ceaa) grid_highlight_pane_cp01

0x1401,	// (0x000941e7) list_pinb_item_pane_ParamLimits

0x1401,	// (0x000941e7) list_pinb_item_pane

0xa0c4,	// (0x0009ceaa) list_highlight_pane_cp02

0x1427,	// (0x0009420d) list_pinb_item_pane_g1_ParamLimits

0x1427,	// (0x0009420d) list_pinb_item_pane_g1

0x1434,	// (0x0009421a) list_pinb_item_pane_g2_ParamLimits

0x1434,	// (0x0009421a) list_pinb_item_pane_g2

0x1440,	// (0x00094226) list_pinb_item_pane_g3_ParamLimits

0x1440,	// (0x00094226) list_pinb_item_pane_g3

0x1451,	// (0x00094237) list_pinb_item_pane_g4_ParamLimits

0x1451,	// (0x00094237) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000a1f16) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000a1f16) list_pinb_item_pane_g

0x145d,	// (0x00094243) list_pinb_item_pane_t1_ParamLimits

0x145d,	// (0x00094243) list_pinb_item_pane_t1

0x148e,	// (0x00094274) calc_display_pane

0x14ac,	// (0x00094292) calc_paper_pane

0x14c8,	// (0x000942ae) grid_calc_pane

0xa0c4,	// (0x0009ceaa) bg_list_pane_cp01

0x14f4,	// (0x000942da) clock_g1

0x14fc,	// (0x000942e2) clock_g2

0x0001,

0xf139,	// (0x000a1f1f) clock_g

0x1506,	// (0x000942ec) clock_t1_ParamLimits

0x1506,	// (0x000942ec) clock_t1

0x151b,	// (0x00094301) clock_t2_ParamLimits

0x151b,	// (0x00094301) clock_t2

0x152d,	// (0x00094313) clock_t3_ParamLimits

0x152d,	// (0x00094313) clock_t3

0x153f,	// (0x00094325) clock_t4_ParamLimits

0x153f,	// (0x00094325) clock_t4

0x1551,	// (0x00094337) clock_t5_ParamLimits

0x1551,	// (0x00094337) clock_t5

0x1566,	// (0x0009434c) clock_t6_ParamLimits

0x1566,	// (0x0009434c) clock_t6

0x1578,	// (0x0009435e) clock_t7_ParamLimits

0x1578,	// (0x0009435e) clock_t7

0x158a,	// (0x00094370) clock_t8_ParamLimits

0x158a,	// (0x00094370) clock_t8

0x15a0,	// (0x00094386) clock_t9_ParamLimits

0x15a0,	// (0x00094386) clock_t9

0x0008,

0xf13e,	// (0x000a1f24) clock_t_ParamLimits

0xf13e,	// (0x000a1f24) clock_t

0xa3a6,	// (0x0009d18c) popup_clock_analogue_window_cp02

0xa3a6,	// (0x0009d18c) popup_clock_digital_window_cp01

0xa3ae,	// (0x0009d194) listscroll_help_pane

0xa0c4,	// (0x0009ceaa) phob_pre_status_pane

0xa3b8,	// (0x0009d19e) grid_qdial_pane

0xa31f,	// (0x0009d105) listscroll_mce_pane

0xa31f,	// (0x0009d105) bg_notes_pane

0xa3c2,	// (0x0009d1a8) list_notes_pane

0x15b6,	// (0x0009439c) scroll_pane_cp06

0xa3d0,	// (0x0009d1b6) bg_calc_paper_pane

0x15c5,	// (0x000943ab) list_calc_pane

0xa3e4,	// (0x0009d1ca) bg_calc_display_pane

0x15df,	// (0x000943c5) calc_display_pane_t1

0x15f4,	// (0x000943da) calc_display_pane_t2

0x1609,	// (0x000943ef) calc_display_pane_t3

0x0002,

0xf151,	// (0x000a1f37) calc_display_pane_t

0x161b,	// (0x00094401) cell_calc_pane_ParamLimits

0x161b,	// (0x00094401) cell_calc_pane

0xa3f0,	// (0x0009d1d6) bg_calc_paper_pane_g1

0xa3fc,	// (0x0009d1e2) bg_calc_paper_pane_g2

0xa408,	// (0x0009d1ee) bg_calc_paper_pane_g3

0xa414,	// (0x0009d1fa) bg_calc_paper_pane_g4

0xa420,	// (0x0009d206) bg_calc_paper_pane_g5

0x1648,	// (0x0009442e) bg_calc_paper_pane_g6

0x1659,	// (0x0009443f) bg_calc_paper_pane_g7

0x166a,	// (0x00094450) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000a1f3e) bg_calc_paper_pane_g

0x167b,	// (0x00094461) calc_bg_paper_pane_g9

0x168c,	// (0x00094472) list_calc_item_pane_ParamLimits

0x168c,	// (0x00094472) list_calc_item_pane

0xa42c,	// (0x0009d212) list_calc_item_pane_g1

0x16bb,	// (0x000944a1) list_calc_item_pane_t1_ParamLimits

0x16bb,	// (0x000944a1) list_calc_item_pane_t1

0x16cd,	// (0x000944b3) list_calc_item_pane_t2_ParamLimits

0x16cd,	// (0x000944b3) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000a1f4f) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000a1f4f) list_calc_item_pane_t

0xa439,	// (0x0009d21f) cell_calc_pane_g1

0xa443,	// (0x0009d229) grid_highlight_pane_cp02

0x16fd,	// (0x000944e3) bg_calc_display_pane_g1

0x1706,	// (0x000944ec) bg_calc_display_pane_g2

0xd618,	// (0x000a03fe) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000a1f59) bg_calc_display_pane_g

0x1710,	// (0x000944f6) cell_qdial_pane_ParamLimits

0x1710,	// (0x000944f6) cell_qdial_pane

0x1724,	// (0x0009450a) cell_qdial_pane_g1_ParamLimits

0x1724,	// (0x0009450a) cell_qdial_pane_g1

0x1731,	// (0x00094517) cell_qdial_pane_g2_ParamLimits

0x1731,	// (0x00094517) cell_qdial_pane_g2

0xa465,	// (0x0009d24b) cell_qdial_pane_g3_ParamLimits

0xa465,	// (0x0009d24b) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000a1f60) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000a1f60) cell_qdial_pane_g

0x174f,	// (0x00094535) cell_qdial_pane_t1_ParamLimits

0x174f,	// (0x00094535) cell_qdial_pane_t1

0x1767,	// (0x0009454d) cell_qdial_pane_t2_ParamLimits

0x1767,	// (0x0009454d) cell_qdial_pane_t2

0x177a,	// (0x00094560) cell_qdial_pane_t3_ParamLimits

0x177a,	// (0x00094560) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000a1f69) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000a1f69) cell_qdial_pane_t

0xa0c4,	// (0x0009ceaa) grid_highlight_pane_cp04

0xa471,	// (0x0009d257) thumbnail_qdial_pane_ParamLimits

0xa471,	// (0x0009d257) thumbnail_qdial_pane

0xa4cd,	// (0x0009d2b3) list_help_pane

0xa4d6,	// (0x0009d2bc) scroll_pane_cp02

0x178d,	// (0x00094573) help_list_pane_t1_ParamLimits

0x178d,	// (0x00094573) help_list_pane_t1

0x17c0,	// (0x000945a6) bg_notes_pane_g2

0x17c8,	// (0x000945ae) bg_notes_pane_g3

0x17d0,	// (0x000945b6) notes_bg_pane_g1

0x17d8,	// (0x000945be) notes_bg_pane_g4

0x17e0,	// (0x000945c6) notes_bg_pane_g5

0x17e8,	// (0x000945ce) notes_bg_pane_g6

0x17f0,	// (0x000945d6) notes_bg_pane_g7

0x17f8,	// (0x000945de) notes_bg_pane_g8

0x1800,	// (0x000945e6) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000a1f87) notes_bg_pane_g

0x1808,	// (0x000945ee) list_notes_text_pane_ParamLimits

0x1808,	// (0x000945ee) list_notes_text_pane

0xa4df,	// (0x0009d2c5) list_notes_text_pane_g1

0x1830,	// (0x00094616) list_notes_text_pane_t1

0x183e,	// (0x00094624) listscroll_cale_week_pane

0x1863,	// (0x00094649) bg_cale_heading_pane

0xa502,	// (0x0009d2e8) bg_cale_pane_cp01

0x1883,	// (0x00094669) cale_week_corner_pane

0x189d,	// (0x00094683) cale_week_day_heading_pane

0x18bd,	// (0x000946a3) cale_week_scroll_pane_g1

0x18d8,	// (0x000946be) cale_week_scroll_pane_g2

0x18eb,	// (0x000946d1) cale_week_scroll_pane_g3

0x18fe,	// (0x000946e4) cale_week_scroll_pane_g4

0x1911,	// (0x000946f7) cale_week_scroll_pane_g5

0x1924,	// (0x0009470a) cale_week_scroll_pane_g6

0x1937,	// (0x0009471d) cale_week_scroll_pane_g7

0x194c,	// (0x00094732) cale_week_scroll_pane_g8

0x1961,	// (0x00094747) cale_week_scroll_pane_g9

0x1974,	// (0x0009475a) cale_week_scroll_pane_g10

0x1987,	// (0x0009476d) cale_week_scroll_pane_g11

0x199a,	// (0x00094780) cale_week_scroll_pane_g12

0x19b1,	// (0x00094797) cale_week_scroll_pane_g13

0x19cc,	// (0x000947b2) cale_week_scroll_pane_g14

0x19e7,	// (0x000947cd) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000a1f96) cale_week_scroll_pane_g

0x1a17,	// (0x000947fd) cale_week_time_pane

0x1a2c,	// (0x00094812) grid_cale_week_pane

0xa531,	// (0x0009d317) scroll_pane_cp08

0x1a4b,	// (0x00094831) cell_cale_week_pane_ParamLimits

0x1a4b,	// (0x00094831) cell_cale_week_pane

0x1aad,	// (0x00094893) cale_week_day_heading_pane_t1

0x1ac8,	// (0x000948ae) cale_week_day_heading_pane_t2

0x1ae3,	// (0x000948c9) cale_week_day_heading_pane_t3

0x1afe,	// (0x000948e4) cale_week_day_heading_pane_t4

0x1b19,	// (0x000948ff) cale_week_day_heading_pane_t5

0x1b34,	// (0x0009491a) cale_week_day_heading_pane_t6

0x1b4f,	// (0x00094935) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000a1fb7) cale_week_day_heading_pane_t

0xa54e,	// (0x0009d334) bg_cale_side_pane

0x1b6a,	// (0x00094950) cale_week_time_pane_t1

0x1b84,	// (0x0009496a) cale_week_time_pane_t2

0x1b9e,	// (0x00094984) cale_week_time_pane_t3

0x1bb8,	// (0x0009499e) cale_week_time_pane_t4

0x1bd2,	// (0x000949b8) cale_week_time_pane_t5

0x1bec,	// (0x000949d2) cale_week_time_pane_t6

0x1c0a,	// (0x000949f0) cale_week_time_pane_t7

0x1c2c,	// (0x00094a12) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000a1fc6) cale_week_time_pane_t

0x1c50,	// (0x00094a36) cell_cale_week_pane_g2

0x1c74,	// (0x00094a5a) cell_cale_week_pane_g3_ParamLimits

0x1c74,	// (0x00094a5a) cell_cale_week_pane_g3

0xa55c,	// (0x0009d342) grid_highlight_pane_cp07

0xa564,	// (0x0009d34a) listscroll_gms_pane

0xa56e,	// (0x0009d354) grid_gms_pane

0xa577,	// (0x0009d35d) listscroll_gms_pane_g1

0xa57f,	// (0x0009d365) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000a1fd7) listscroll_gms_pane_g

0x1c8c,	// (0x00094a72) scroll_pane_cp010

0x1c97,	// (0x00094a7d) cell_gms_pane_ParamLimits

0x1c97,	// (0x00094a7d) cell_gms_pane

0x1caa,	// (0x00094a90) cell_gms_pane_g1

0xa587,	// (0x0009d36d) cell_gms_pane_g2

0xa58f,	// (0x0009d375) cell_gms_pane_g3

0xa598,	// (0x0009d37e) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000a1fdc) cell_gms_pane_g

0xa5a1,	// (0x0009d387) grid_highlight_pane_cp09

0x42e0,	// (0x000970c6) phob_pre_status_pane_g1

0x42e8,	// (0x000970ce) phob_pre_status_pane_g2

0x42f0,	// (0x000970d6) phob_pre_status_pane_g3

0x42f8,	// (0x000970de) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000a23c7) phob_pre_status_pane_g

0x4308,	// (0x000970ee) phob_pre_status_pane_t1

0x4318,	// (0x000970fe) phob_pre_status_pane_t2

0x4328,	// (0x0009710e) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000a23d2) phob_pre_status_pane_t

0xa5a9,	// (0x0009d38f) bg_list_pane_cp05

0x1cba,	// (0x00094aa0) grid_vorec_pane

0x1cc4,	// (0x00094aaa) vorec_t1

0x1cd2,	// (0x00094ab8) vorec_t2

0x1ce0,	// (0x00094ac6) vorec_t3

0x1cee,	// (0x00094ad4) vorec_t4

0x9c4f,	// (0x0009ca35) vorec_t5

0x9c5d,	// (0x0009ca43) vorec_t6

0x0004,

0xf1ff,	// (0x000a1fe5) vorec_t

0x9c6b,	// (0x0009ca51) wait_bar_pane_cp01

0x1d0a,	// (0x00094af0) cell_vorec_pane_ParamLimits

0x1d0a,	// (0x00094af0) cell_vorec_pane

0x1d1d,	// (0x00094b03) cell_vorec_pane_g1

0xa0c4,	// (0x0009ceaa) grid_highlight_pane_cp05

0x1d37,	// (0x00094b1d) cams_zoom_pane

0x1d43,	// (0x00094b29) image_vga_pane

0x1d52,	// (0x00094b38) main_camera_pane_g1

0x1d60,	// (0x00094b46) main_camera_pane_g2

0x1d6c,	// (0x00094b52) main_camera_pane_g3

0x1d78,	// (0x00094b5e) main_camera_pane_g4

0x1d84,	// (0x00094b6a) main_camera_pane_g5

0x1d90,	// (0x00094b76) main_camera_pane_g6

0x1d9c,	// (0x00094b82) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000a1ff0) main_camera_pane_g

0x1da8,	// (0x00094b8e) main_camera_pane_t1

0x1dba,	// (0x00094ba0) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000a2001) main_camera_pane_t

0x1ddb,	// (0x00094bc1) cams_zoom_pane_cp_ParamLimits

0x1ddb,	// (0x00094bc1) cams_zoom_pane_cp

0x1dff,	// (0x00094be5) image_cif_pane_ParamLimits

0x1dff,	// (0x00094be5) image_cif_pane

0x1e1d,	// (0x00094c03) image_subqcif_pane

0x1e25,	// (0x00094c0b) main_video_pane_g1_ParamLimits

0x1e25,	// (0x00094c0b) main_video_pane_g1

0x1e45,	// (0x00094c2b) main_video_pane_g2_ParamLimits

0x1e45,	// (0x00094c2b) main_video_pane_g2

0x1e75,	// (0x00094c5b) main_video_pane_g3_ParamLimits

0x1e75,	// (0x00094c5b) main_video_pane_g3

0x1e9e,	// (0x00094c84) main_video_pane_g4_ParamLimits

0x1e9e,	// (0x00094c84) main_video_pane_g4

0x1ec7,	// (0x00094cad) main_video_pane_g5_ParamLimits

0x1ec7,	// (0x00094cad) main_video_pane_g5

0xa5bd,	// (0x0009d3a3) main_video_pane_g6_ParamLimits

0xa5bd,	// (0x0009d3a3) main_video_pane_g6

0x0006,

0xf220,	// (0x000a2006) main_video_pane_g_ParamLimits

0xf220,	// (0x000a2006) main_video_pane_g

0x1ee9,	// (0x00094ccf) main_video_pane_t1_ParamLimits

0x1ee9,	// (0x00094ccf) main_video_pane_t1

0xa5d7,	// (0x0009d3bd) cams_zoom_pane_g1

0xa5e0,	// (0x0009d3c6) cams_zoom_pane_g2

0xa5e9,	// (0x0009d3cf) cams_zoom_pane_g3

0xa5f2,	// (0x0009d3d8) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000a2015) cams_zoom_pane_g

0x1f33,	// (0x00094d19) grid_cams_pane

0x1f41,	// (0x00094d27) linegrid_cams_pane

0x1f4f,	// (0x00094d35) cell_cams_pane_ParamLimits

0x1f4f,	// (0x00094d35) cell_cams_pane

0xa5fb,	// (0x0009d3e1) cams_burst_image_pane

0xa603,	// (0x0009d3e9) cell_cams_pane_g1

0xa0c4,	// (0x0009ceaa) grid_highlight_pane_cp03

0xa439,	// (0x0009d21f) mp_bg_pane_g1

0xa0c4,	// (0x0009ceaa) bg_list_pane_cp03

0xd483,	// (0x000a0269) bg_mp_pane

0xd48b,	// (0x000a0271) grid_mp_pane

0xd493,	// (0x000a0279) media_player_g1

0xd49b,	// (0x000a0281) media_player_t1

0xd4a9,	// (0x000a028f) media_player_t2

0xd4b7,	// (0x000a029d) media_player_t3

0xd4c5,	// (0x000a02ab) media_player_t4

0xd4d3,	// (0x000a02b9) media_player_t5

0xd4e1,	// (0x000a02c7) media_player_t6

0xd4ef,	// (0x000a02d5) media_player_t7

0x0006,

0xf5cb,	// (0x000a23b1) media_player_t

0xd4fd,	// (0x000a02e3) wait_bar_pane_cp02

0xf5b0,	// (0x000a2396) main_usb_pane_t

0x42d7,	// (0x000970bd) cell_mp_pane

0xa439,	// (0x0009d21f) cell_mp_pane_g1

0xa0c4,	// (0x0009ceaa) grid_highlight_pane_cp06

0xa60b,	// (0x0009d3f1) grid_skin_colour_pane

0xa613,	// (0x0009d3f9) list_highlight_pane_cp03

0x2059,	// (0x00094e3f) skin_g1

0xa61b,	// (0x0009d401) skin_t1

0xa62a,	// (0x0009d410) skin_t2

0x0001,

0xf264,	// (0x000a204a) skin_t

0x2063,	// (0x00094e49) cell_skin_colour_pane_ParamLimits

0x2063,	// (0x00094e49) cell_skin_colour_pane

0xa638,	// (0x0009d41e) cell_skin_colour_pane_g1

0x20e7,	// (0x00094ecd) call_video_g1_ParamLimits

0x20e7,	// (0x00094ecd) call_video_g1

0x20f7,	// (0x00094edd) call_video_g2_ParamLimits

0x20f7,	// (0x00094edd) call_video_g2

0x0001,

0xf269,	// (0x000a204f) call_video_g_ParamLimits

0xf269,	// (0x000a204f) call_video_g

0x2151,	// (0x00094f37) call_video_uplink_pane_cp1_ParamLimits

0x2151,	// (0x00094f37) call_video_uplink_pane_cp1

0xa64a,	// (0x0009d430) call_video_uplink_pane_cp2

0x221d,	// (0x00095003) video_down_crop_pane_ParamLimits

0x221d,	// (0x00095003) video_down_crop_pane

0x231b,	// (0x00095101) video_down_pane_ParamLimits

0x231b,	// (0x00095101) video_down_pane

0xa652,	// (0x0009d438) video_down_subqcif_pane_ParamLimits

0xa652,	// (0x0009d438) video_down_subqcif_pane

0xa66a,	// (0x0009d450) video_down_subqcif_pane_cp_ParamLimits

0xa66a,	// (0x0009d450) video_down_subqcif_pane_cp

0xa690,	// (0x0009d476) im_reading_pane_ParamLimits

0xa690,	// (0x0009d476) im_reading_pane

0x243b,	// (0x00095221) im_writing_pane_ParamLimits

0x243b,	// (0x00095221) im_writing_pane

0x2459,	// (0x0009523f) im_reading_pane_t1

0xa6aa,	// (0x0009d490) list_im_pane

0xa6bb,	// (0x0009d4a1) scroll_pane_cp07

0x24ad,	// (0x00095293) im_writing_pane_t1_ParamLimits

0x24ad,	// (0x00095293) im_writing_pane_t1

0xa6d4,	// (0x0009d4ba) im_writing_pane_t2_ParamLimits

0xa6d4,	// (0x0009d4ba) im_writing_pane_t2

0x0001,

0xf273,	// (0x000a2059) im_writing_pane_t_ParamLimits

0xf273,	// (0x000a2059) im_writing_pane_t

0xa0c4,	// (0x0009ceaa) input_focus_pane_cp04

0xa0c4,	// (0x0009ceaa) input_focus_pane_cp05

0x24c2,	// (0x000952a8) list_im_single_pane_ParamLimits

0x24c2,	// (0x000952a8) list_im_single_pane

0x24e6,	// (0x000952cc) list_single_im_pane_t1

0x429b,	// (0x00097081) blid_accuracy_pane

0x42a3,	// (0x00097089) blid_compass_pane

0x42ad,	// (0x00097093) main_location_t1

0x42bb,	// (0x000970a1) main_location_t2

0x42c9,	// (0x000970af) main_location_t3

0x0002,

0xf5da,	// (0x000a23c0) main_location_t

0xa0c4,	// (0x0009ceaa) aid_levels_location

0xa439,	// (0x0009d21f) blid_accuracy_pane_g1

0xa439,	// (0x0009d21f) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000a20bb) blid_accuracy_pane_g

0xa71c,	// (0x0009d502) wml_content_pane

0xa75a,	// (0x0009d540) wml_button_pane_ParamLimits

0xa75a,	// (0x0009d540) wml_button_pane

0x24f5,	// (0x000952db) wml_list_single_large_pane_ParamLimits

0x24f5,	// (0x000952db) wml_list_single_large_pane

0x251f,	// (0x00095305) wml_list_single_medium_pane_ParamLimits

0x251f,	// (0x00095305) wml_list_single_medium_pane

0x2550,	// (0x00095336) wml_list_single_small_pane_ParamLimits

0x2550,	// (0x00095336) wml_list_single_small_pane

0xa76e,	// (0x0009d554) wml_selection_box_pane_ParamLimits

0xa76e,	// (0x0009d554) wml_selection_box_pane

0xa781,	// (0x0009d567) wml_list_single_pane_t1

0xa790,	// (0x0009d576) wml_list_single_medium_pane_t1

0xa79f,	// (0x0009d585) wml_list_single_large_pane_t1

0xa7ae,	// (0x0009d594) input_focus_pane_cp02_ParamLimits

0xa7ae,	// (0x0009d594) input_focus_pane_cp02

0xa7c1,	// (0x0009d5a7) wml_selection_box_pane_g1

0xa7ca,	// (0x0009d5b0) wml_selection_box_pane_t1_ParamLimits

0xa7ca,	// (0x0009d5b0) wml_selection_box_pane_t1

0xa31f,	// (0x0009d105) bg_wml_button_pane_ParamLimits

0xa31f,	// (0x0009d105) bg_wml_button_pane

0xa7e2,	// (0x0009d5c8) wml_button_pane_g1

0xa7ea,	// (0x0009d5d0) wml_button_pane_t1

0xa7e2,	// (0x0009d5c8) wml_button_bg_pane_g1

0xb94b,	// (0x0009e731) wml_button_bg_pane_g2

0xb953,	// (0x0009e739) wml_button_bg_pane_g3

0xb95b,	// (0x0009e741) wml_button_bg_pane_g4

0xb963,	// (0x0009e749) wml_button_bg_pane_g5

0xb96b,	// (0x0009e751) wml_button_bg_pane_g6

0xb973,	// (0x0009e759) wml_button_bg_pane_g7

0xb97b,	// (0x0009e761) wml_button_bg_pane_g8

0xb983,	// (0x0009e769) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000a205e) wml_button_bg_pane_g

0x258a,	// (0x00095370) bg_list_pane_cp02

0xb98b,	// (0x0009e771) mce_header_pane_ParamLimits

0xb98b,	// (0x0009e771) mce_header_pane

0xb9a1,	// (0x0009e787) mce_icon_pane

0xb9a1,	// (0x0009e787) mce_image_pane

0xb9aa,	// (0x0009e790) mce_text_pane_ParamLimits

0xb9aa,	// (0x0009e790) mce_text_pane

0x2594,	// (0x0009537a) scroll_pane_cp03

0xa752,	// (0x0009d538) scroll_pane_cp04

0xb9bd,	// (0x0009e7a3) scroll_pane_cp05_ParamLimits

0xb9bd,	// (0x0009e7a3) scroll_pane_cp05

0x259e,	// (0x00095384) mce_header_field_pane_ParamLimits

0x259e,	// (0x00095384) mce_header_field_pane

0x25be,	// (0x000953a4) mce_header_field_pane_2_ParamLimits

0x25be,	// (0x000953a4) mce_header_field_pane_2

0x25d4,	// (0x000953ba) mce_header_field_pane_3

0x25dc,	// (0x000953c2) list_single_mce_message_pane_ParamLimits

0x25dc,	// (0x000953c2) list_single_mce_message_pane

0x2607,	// (0x000953ed) list_single_mce_smart_pane_ParamLimits

0x2607,	// (0x000953ed) list_single_mce_smart_pane

0xb9c9,	// (0x0009e7af) input_focus_pane_cp03

0xb9d2,	// (0x0009e7b8) list_header_data_pane

0x263d,	// (0x00095423) mce_header_field_pane_t1

0x264b,	// (0x00095431) list_single_mce_header_pane_ParamLimits

0x264b,	// (0x00095431) list_single_mce_header_pane

0xb9da,	// (0x0009e7c0) list_single_mce_header_pane_t1

0xb9e9,	// (0x0009e7cf) list_single_mce_message_pane_g1

0xb9f1,	// (0x0009e7d7) list_single_mce_message_pane_t1

0x269d,	// (0x00095483) bg_cale_heading_pane_cp01_ParamLimits

0x269d,	// (0x00095483) bg_cale_heading_pane_cp01

0xb9ff,	// (0x0009e7e5) bg_cale_pane_cp02_ParamLimits

0xb9ff,	// (0x0009e7e5) bg_cale_pane_cp02

0x26eb,	// (0x000954d1) cale_month_corner_pane

0x270a,	// (0x000954f0) cale_month_day_heading_pane_ParamLimits

0x270a,	// (0x000954f0) cale_month_day_heading_pane

0x2770,	// (0x00095556) cale_month_pane_g1_ParamLimits

0x2770,	// (0x00095556) cale_month_pane_g1

0x27b3,	// (0x00095599) cale_month_pane_g2_ParamLimits

0x27b3,	// (0x00095599) cale_month_pane_g2

0x27eb,	// (0x000955d1) cale_month_pane_g3_ParamLimits

0x27eb,	// (0x000955d1) cale_month_pane_g3

0x2837,	// (0x0009561d) cale_month_pane_g4_ParamLimits

0x2837,	// (0x0009561d) cale_month_pane_g4

0x2883,	// (0x00095669) cale_month_pane_g5_ParamLimits

0x2883,	// (0x00095669) cale_month_pane_g5

0x28cf,	// (0x000956b5) cale_month_pane_g6_ParamLimits

0x28cf,	// (0x000956b5) cale_month_pane_g6

0x291b,	// (0x00095701) cale_month_pane_g7_ParamLimits

0x291b,	// (0x00095701) cale_month_pane_g7

0x297f,	// (0x00095765) cale_month_pane_g8_ParamLimits

0x297f,	// (0x00095765) cale_month_pane_g8

0x29e3,	// (0x000957c9) cale_month_pane_g9_ParamLimits

0x29e3,	// (0x000957c9) cale_month_pane_g9

0x2a41,	// (0x00095827) cale_month_pane_g10_ParamLimits

0x2a41,	// (0x00095827) cale_month_pane_g10

0x2a9d,	// (0x00095883) cale_month_pane_g11_ParamLimits

0x2a9d,	// (0x00095883) cale_month_pane_g11

0x2af1,	// (0x000958d7) cale_month_pane_g12_ParamLimits

0x2af1,	// (0x000958d7) cale_month_pane_g12

0x2b47,	// (0x0009592d) cale_month_pane_g13_ParamLimits

0x2b47,	// (0x0009592d) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000a2071) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000a2071) cale_month_pane_g

0x2b9d,	// (0x00095983) cale_month_week_pane

0x2bc1,	// (0x000959a7) grid_cale_month_pane_ParamLimits

0x2bc1,	// (0x000959a7) grid_cale_month_pane

0x2c1a,	// (0x00095a00) cale_month_day_heading_pane_t1

0x2ca0,	// (0x00095a86) cale_month_day_heading_pane_t2

0x2d19,	// (0x00095aff) cale_month_day_heading_pane_t3

0x2d92,	// (0x00095b78) cale_month_day_heading_pane_t4

0x2e0b,	// (0x00095bf1) cale_month_day_heading_pane_t5

0x2e84,	// (0x00095c6a) cale_month_day_heading_pane_t6

0x2efd,	// (0x00095ce3) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000a208c) cale_month_day_heading_pane_t

0xa54e,	// (0x0009d334) bg_cale_side_pane_cp01

0x2f8e,	// (0x00095d74) cale_month_week_pane_t1

0x2fa7,	// (0x00095d8d) cale_month_week_pane_t2

0x2fc0,	// (0x00095da6) cale_month_week_pane_t3

0x2fd9,	// (0x00095dbf) cale_month_week_pane_t4

0x2ff2,	// (0x00095dd8) cale_month_week_pane_t5

0x3013,	// (0x00095df9) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000a209b) cale_month_week_pane_t

0x3034,	// (0x00095e1a) cell_cale_month_pane_ParamLimits

0x3034,	// (0x00095e1a) cell_cale_month_pane

0x3180,	// (0x00095f66) cell_cale_month_pane_g1

0x318c,	// (0x00095f72) cell_cale_month_pane_t1_ParamLimits

0x318c,	// (0x00095f72) cell_cale_month_pane_t1

0xa55c,	// (0x0009d342) grid_highlight_pane_cp08

0xa439,	// (0x0009d21f) main_smil_g1

0x31b8,	// (0x00095f9e) smil_status_pane

0xba3e,	// (0x0009e824) smil_text_pane

0xd3a3,	// (0x000a0189) bg_popup_call3_rect_pane_g8

0xd3ab,	// (0x000a0191) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000a2354) bg_popup_call3_rect_pane_g

0xd5f2,	// (0x000a03d8) smil_status_volume_pane_g1

0xba48,	// (0x0009e82e) smil_status_pane_t1

0x46d3,	// (0x000974b9) volume_smil_pane

0xba5f,	// (0x0009e845) list_smil_text_pane

0x31cb,	// (0x00095fb1) scroll_pane_cp011

0x31d6,	// (0x00095fbc) smil_text_list_pane_t1_ParamLimits

0x31d6,	// (0x00095fbc) smil_text_list_pane_t1

0x324e,	// (0x00096034) aid_volume_smil_ParamLimits

0x324e,	// (0x00096034) aid_volume_smil

0xa439,	// (0x0009d21f) smil_volume_pane_g1

0xa439,	// (0x0009d21f) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000a20bb) smil_volume_pane_g

0x183e,	// (0x00094624) listscroll_cale_day_pane

0xba69,	// (0x0009e84f) bg_cale_pane

0xba81,	// (0x0009e867) list_cale_pane

0xbaa4,	// (0x0009e88a) scroll_pane_cp09

0xbab5,	// (0x0009e89b) cale_bg_pane_g1

0xbabd,	// (0x0009e8a3) cale_bg_pane_g2

0xbac5,	// (0x0009e8ab) cale_bg_pane_g3

0xbacd,	// (0x0009e8b3) cale_bg_pane_g4

0xbad5,	// (0x0009e8bb) cale_bg_pane_g5

0xbadd,	// (0x0009e8c3) cale_bg_pane_g6

0xbae5,	// (0x0009e8cb) cale_bg_pane_g7

0xbaed,	// (0x0009e8d3) cale_bg_pane_g8

0xbaf5,	// (0x0009e8db) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000a20c0) cale_bg_pane_g

0x3278,	// (0x0009605e) list_cale_time_pane_ParamLimits

0x3278,	// (0x0009605e) list_cale_time_pane

0xbafd,	// (0x0009e8e3) list_cale_time_pane_g1_ParamLimits

0xbafd,	// (0x0009e8e3) list_cale_time_pane_g1

0xbb09,	// (0x0009e8ef) list_cale_time_pane_g2_ParamLimits

0xbb09,	// (0x0009e8ef) list_cale_time_pane_g2

0x329a,	// (0x00096080) list_cale_time_pane_g3_ParamLimits

0x329a,	// (0x00096080) list_cale_time_pane_g3

0x32a8,	// (0x0009608e) list_cale_time_pane_g4_ParamLimits

0x32a8,	// (0x0009608e) list_cale_time_pane_g4

0x32b6,	// (0x0009609c) list_cale_time_pane_g5_ParamLimits

0x32b6,	// (0x0009609c) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000a20d3) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000a20d3) list_cale_time_pane_g

0xbb23,	// (0x0009e909) list_cale_time_pane_t1_ParamLimits

0xbb23,	// (0x0009e909) list_cale_time_pane_t1

0xbb4b,	// (0x0009e931) list_cale_time_pane_t2_ParamLimits

0xbb4b,	// (0x0009e931) list_cale_time_pane_t2

0x3658,	// (0x0009643e) aid_blid_cardinal_pane

0x369a,	// (0x00096480) compass_pane_t4

0xbb73,	// (0x0009e959) list_cale_time_pane_t4_ParamLimits

0xbb73,	// (0x0009e959) list_cale_time_pane_t4

0x36a8,	// (0x0009648e) compass_pane_t5

0x36b8,	// (0x0009649e) compass_pane_t6

0x36c6,	// (0x000964ac) compass_pane_t7

0xc03c,	// (0x0009ee22) navi_pane_cc_t1

0xc219,	// (0x0009efff) aid_phob_thumbnail_center_pane

0x3da1,	// (0x00096b87) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000a20e0) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000a20e0) list_cale_time_pane_t

0x9d1b,	// (0x0009cb01) bg_popup_window_pane_cp02_ParamLimits

0x9d1b,	// (0x0009cb01) bg_popup_window_pane_cp02

0xbb9b,	// (0x0009e981) heading_pane_cp01_ParamLimits

0xbb9b,	// (0x0009e981) heading_pane_cp01

0xbba7,	// (0x0009e98d) loc_req_pane_ParamLimits

0xbba7,	// (0x0009e98d) loc_req_pane

0xbbb7,	// (0x0009e99d) loc_type_pane_ParamLimits

0xbbb7,	// (0x0009e99d) loc_type_pane

0xbbc9,	// (0x0009e9af) loc_type_pane_t1_ParamLimits

0xbbc9,	// (0x0009e9af) loc_type_pane_t1

0xbbdb,	// (0x0009e9c1) loc_type_pane_t2_ParamLimits

0xbbdb,	// (0x0009e9c1) loc_type_pane_t2

0xbbed,	// (0x0009e9d3) loc_type_pane_t3_ParamLimits

0xbbed,	// (0x0009e9d3) loc_type_pane_t3

0x0002,

0xf301,	// (0x000a20e7) loc_type_pane_t_ParamLimits

0xf301,	// (0x000a20e7) loc_type_pane_t

0xbbff,	// (0x0009e9e5) list_loc_req_pane

0xbc09,	// (0x0009e9ef) scroll_pane_cp012

0x32c4,	// (0x000960aa) list_single_loc_request_popup_menu_pane_ParamLimits

0x32c4,	// (0x000960aa) list_single_loc_request_popup_menu_pane

0xbc14,	// (0x0009e9fa) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbc14,	// (0x0009e9fa) list_single_loc_request_popup_menu_pane_g1

0xbc20,	// (0x0009ea06) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbc20,	// (0x0009ea06) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000a20ee) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000a20ee) list_single_loc_request_popup_menu_pane_g

0xbc2c,	// (0x0009ea12) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbc2c,	// (0x0009ea12) list_single_loc_request_popup_menu_pane_t1

0x32d6,	// (0x000960bc) bg_popup_window_pane_cp03_ParamLimits

0x32d6,	// (0x000960bc) bg_popup_window_pane_cp03

0x32e4,	// (0x000960ca) heading_loc_req_pane_ParamLimits

0x32e4,	// (0x000960ca) heading_loc_req_pane

0x32f0,	// (0x000960d6) popup_dyc_status_message_window_g1_ParamLimits

0x32f0,	// (0x000960d6) popup_dyc_status_message_window_g1

0x32fc,	// (0x000960e2) popup_dyc_status_message_window_t1_ParamLimits

0x32fc,	// (0x000960e2) popup_dyc_status_message_window_t1

0x330e,	// (0x000960f4) popup_dyc_status_message_window_t2_ParamLimits

0x330e,	// (0x000960f4) popup_dyc_status_message_window_t2

0x3320,	// (0x00096106) popup_dyc_status_message_window_t3_ParamLimits

0x3320,	// (0x00096106) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000a20f3) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000a20f3) popup_dyc_status_message_window_t

0xa0c4,	// (0x0009ceaa) bg_heading_pane_cp01

0xbc42,	// (0x0009ea28) heading_loc_req_pane_g1

0xbc4a,	// (0x0009ea30) heading_loc_req_pane_g2

0xbc52,	// (0x0009ea38) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000a20fa) heading_loc_req_pane_g

0xbc5a,	// (0x0009ea40) heading_loc_req_pane_t1

0xbc69,	// (0x0009ea4f) bg_popup_sub_pane_cp01_ParamLimits

0xbc69,	// (0x0009ea4f) bg_popup_sub_pane_cp01

0xbc77,	// (0x0009ea5d) popup_cale_events_window_g1_ParamLimits

0xbc77,	// (0x0009ea5d) popup_cale_events_window_g1

0xbc97,	// (0x0009ea7d) popup_cale_events_window_g2_ParamLimits

0xbc97,	// (0x0009ea7d) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000a212e) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000a212e) popup_cale_events_window_g

0xbcb7,	// (0x0009ea9d) popup_cale_events_window_t1_ParamLimits

0xbcb7,	// (0x0009ea9d) popup_cale_events_window_t1

0xbcc9,	// (0x0009eaaf) popup_cale_events_window_t2_ParamLimits

0xbcc9,	// (0x0009eaaf) popup_cale_events_window_t2

0xbd07,	// (0x0009eaed) popup_cale_events_window_t3_ParamLimits

0xbd07,	// (0x0009eaed) popup_cale_events_window_t3

0xbd41,	// (0x0009eb27) popup_cale_events_window_t4_ParamLimits

0xbd41,	// (0x0009eb27) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000a2133) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000a2133) popup_cale_events_window_t

0x3425,	// (0x0009620b) call_type_pane

0xbf67,	// (0x0009ed4d) popup_call_status_window_g1

0x3431,	// (0x00096217) popup_call_status_window_g2

0x343d,	// (0x00096223) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000a213c) popup_call_status_window_g

0xbd77,	// (0x0009eb5d) call_type_pane_g1

0xbd80,	// (0x0009eb66) call_type_pane_g2

0x0001,

0xf35d,	// (0x000a2143) call_type_pane_g

0xa0c4,	// (0x0009ceaa) bg_popup_sub_pane_cp02

0xbd89,	// (0x0009eb6f) listscroll_popup_wml_pane

0xbd91,	// (0x0009eb77) list_wml_pane

0xbd9b,	// (0x0009eb81) scroll_pane_cp013

0xbda6,	// (0x0009eb8c) list_single_graphic_popup_wml_pane_ParamLimits

0xbda6,	// (0x0009eb8c) list_single_graphic_popup_wml_pane

0xa439,	// (0x0009d21f) list_single_graphic_popup_wml_pane_g1

0xbdba,	// (0x0009eba0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000a2148) list_single_graphic_popup_wml_pane_g

0xbdc2,	// (0x0009eba8) list_single_graphic_popup_wml_pane_t1

0xbdd8,	// (0x0009ebbe) aid_call_pane

0xa317,	// (0x0009d0fd) popup_clock_analogue_window_g1

0xa317,	// (0x0009d0fd) popup_clock_analogue_window_g2

0x3449,	// (0x0009622f) popup_clock_analogue_window_g3

0x3449,	// (0x0009622f) popup_clock_analogue_window_g4

0xa439,	// (0x0009d21f) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000a214d) popup_clock_analogue_window_g

0x3451,	// (0x00096237) popup_clock_analogue_window_t1

0x345f,	// (0x00096245) clock_digital_number_pane_ParamLimits

0x345f,	// (0x00096245) clock_digital_number_pane

0x346b,	// (0x00096251) clock_digital_number_pane_cp02_ParamLimits

0x346b,	// (0x00096251) clock_digital_number_pane_cp02

0x3477,	// (0x0009625d) clock_digital_number_pane_cp03_ParamLimits

0x3477,	// (0x0009625d) clock_digital_number_pane_cp03

0x3483,	// (0x00096269) clock_digital_number_pane_cp04_ParamLimits

0x3483,	// (0x00096269) clock_digital_number_pane_cp04

0x3493,	// (0x00096279) clock_digital_separator_pane_ParamLimits

0x3493,	// (0x00096279) clock_digital_separator_pane

0x349f,	// (0x00096285) popup_clock_digital_window_t1

0xa439,	// (0x0009d21f) clock_digital_number_pane_g1

0xa439,	// (0x0009d21f) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000a20bb) clock_digital_number_pane_g

0xa439,	// (0x0009d21f) clock_digital_separator_pane_g1

0xa439,	// (0x0009d21f) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000a20bb) clock_digital_separator_pane_g

0xa0c4,	// (0x0009ceaa) bg_popup_window_pane_cp04

0xbde0,	// (0x0009ebc6) heading_pane_cp03

0xbde8,	// (0x0009ebce) listscroll_popup_gms_pane

0xbdf0,	// (0x0009ebd6) grid_large_graphic_popup_pane

0xbdfa,	// (0x0009ebe0) listscroll_popup_gms_pane_g1

0xbe02,	// (0x0009ebe8) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000a2158) listscroll_popup_gms_pane_g

0xa752,	// (0x0009d538) scroll_pane_cp014

0x34bc,	// (0x000962a2) cell_large_graphic_popup_pane_ParamLimits

0x34bc,	// (0x000962a2) cell_large_graphic_popup_pane

0x34d4,	// (0x000962ba) cell_large_graphic_popup_pane_g1_ParamLimits

0x34d4,	// (0x000962ba) cell_large_graphic_popup_pane_g1

0xbe0a,	// (0x0009ebf0) cell_large_graphic_popup_pane_g2_ParamLimits

0xbe0a,	// (0x0009ebf0) cell_large_graphic_popup_pane_g2

0xbe16,	// (0x0009ebfc) cell_large_graphic_popup_pane_g3_ParamLimits

0xbe16,	// (0x0009ebfc) cell_large_graphic_popup_pane_g3

0xbe23,	// (0x0009ec09) cell_large_graphic_popup_pane_g4_ParamLimits

0xbe23,	// (0x0009ec09) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000a215d) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000a215d) cell_large_graphic_popup_pane_g

0xbe33,	// (0x0009ec19) grid_highlight_pane_cp010

0xa439,	// (0x0009d21f) bg_popup_call_pane_g1

0xbe3d,	// (0x0009ec23) list_single_graphic_popup_conf_pane_ParamLimits

0xbe3d,	// (0x0009ec23) list_single_graphic_popup_conf_pane

0xbe50,	// (0x0009ec36) list_highlight_pane_cp01

0xbe59,	// (0x0009ec3f) list_single_graphic_popup_conf_pane_g1

0xbe61,	// (0x0009ec47) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000a2166) list_single_graphic_popup_conf_pane_g

0xbe69,	// (0x0009ec4f) list_single_graphic_popup_conf_pane_t1

0xbe77,	// (0x0009ec5d) linegrid_cams_pane_g1

0x34e0,	// (0x000962c6) linegrid_cams_pane_g2

0xa58f,	// (0x0009d375) linegrid_cams_pane_g3

0xbe80,	// (0x0009ec66) linegrid_cams_pane_g4

0x34e9,	// (0x000962cf) linegrid_cams_pane_g5

0x34f2,	// (0x000962d8) linegrid_cams_pane_g6

0xa598,	// (0x0009d37e) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000a216b) linegrid_cams_pane_g

0xbe89,	// (0x0009ec6f) popup_clock_analogue_window

0xbe89,	// (0x0009ec6f) popup_clock_digital_window

0xa0c4,	// (0x0009ceaa) popup_phob_thumbnail_window

0xa439,	// (0x0009d21f) call_video_uplink_pane_g1

0xbe92,	// (0x0009ec78) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000a217a) call_video_uplink_pane_g

0xbe9a,	// (0x0009ec80) video_uplink_pane

0xbea2,	// (0x0009ec88) mce_image_pane_g1

0x34fb,	// (0x000962e1) mce_image_pane_g2

0x3505,	// (0x000962eb) mce_image_pane_g3

0x350d,	// (0x000962f3) mce_image_pane_g4

0x3515,	// (0x000962fb) mce_image_pane_g5

0x0004,

0xf399,	// (0x000a217f) mce_image_pane_g

0xbeac,	// (0x0009ec92) control_top_pane_stacon_cp01_ParamLimits

0xbeac,	// (0x0009ec92) control_top_pane_stacon_cp01

0xbec0,	// (0x0009eca6) uni_indicator_pane_stacon_cp01_ParamLimits

0xbec0,	// (0x0009eca6) uni_indicator_pane_stacon_cp01

0xbed1,	// (0x0009ecb7) bg_popup_sub_pane_cp03

0xbedb,	// (0x0009ecc1) chi_dic_find_pane

0x351d,	// (0x00096303) listscroll_chi_dic_pane

0xbee3,	// (0x0009ecc9) main_pane_chidic_g1

0xbeeb,	// (0x0009ecd1) chi_dic_find_pane_t1

0xbef9,	// (0x0009ecdf) find_chidic_pane

0xbf02,	// (0x0009ece8) chi_dic_list_pane_ParamLimits

0xbf02,	// (0x0009ece8) chi_dic_list_pane

0xbf13,	// (0x0009ecf9) scroll_pane_cp020

0xbf1b,	// (0x0009ed01) find_chidic_pane_t1

0xa0c4,	// (0x0009ceaa) input_focus_pane_cp06

0x3531,	// (0x00096317) list_chi_dic_pane_ParamLimits

0x3531,	// (0x00096317) list_chi_dic_pane

0x354b,	// (0x00096331) list_chi_dic_pane_t1_ParamLimits

0x354b,	// (0x00096331) list_chi_dic_pane_t1

0xa0c4,	// (0x0009ceaa) list_highlight_pane_cp020

0xbf2a,	// (0x0009ed10) bg_cale_heading_pane_g1

0x355e,	// (0x00096344) bg_cale_heading_pane_g2

0x3566,	// (0x0009634c) bg_cale_heading_pane_g3

0x356e,	// (0x00096354) bg_cale_heading_pane_g4

0x3578,	// (0x0009635e) bg_cale_heading_pane_g5

0x3582,	// (0x00096368) bg_cale_heading_pane_g6

0x358a,	// (0x00096370) bg_cale_heading_pane_g7

0x3592,	// (0x00096378) bg_cale_heading_pane_g8

0x359c,	// (0x00096382) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000a218a) bg_cale_heading_pane_g

0xbf2a,	// (0x0009ed10) bg_cale_side_pane_g1

0x35a6,	// (0x0009638c) bg_cale_side_pane_g2

0x35b0,	// (0x00096396) bg_cale_side_pane_g3

0x35ba,	// (0x000963a0) bg_cale_side_pane_g4

0x35c4,	// (0x000963aa) bg_cale_side_pane_g5

0x35ce,	// (0x000963b4) bg_cale_side_pane_g6

0x35d8,	// (0x000963be) bg_cale_side_pane_g7

0x35e2,	// (0x000963c8) bg_cale_side_pane_g8

0x35ea,	// (0x000963d0) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000a219d) bg_cale_side_pane_g

0x35f2,	// (0x000963d8) popup_call_status_window_ParamLimits

0x35f2,	// (0x000963d8) popup_call_status_window

0xbf32,	// (0x0009ed18) stacon_top_pane

0xbf3a,	// (0x0009ed20) status_pane_ParamLimits

0xbf3a,	// (0x0009ed20) status_pane

0xbf75,	// (0x0009ed5b) status_small_pane

0xbf7d,	// (0x0009ed63) control_pane

0xa0c4,	// (0x0009ceaa) stacon_bottom_pane

0xbf85,	// (0x0009ed6b) list_single_mce_smart_pane_t1_ParamLimits

0xbf85,	// (0x0009ed6b) list_single_mce_smart_pane_t1

0xbf98,	// (0x0009ed7e) list_single_mce_smart_pane_t2_ParamLimits

0xbf98,	// (0x0009ed7e) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000a21b0) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000a21b0) list_single_mce_smart_pane_t

0x35fe,	// (0x000963e4) compass_pane

0x360a,	// (0x000963f0) main_location2_pane_t1

0x361e,	// (0x00096404) main_location2_pane_t2

0x3632,	// (0x00096418) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000a21b5) main_location2_pane_t

0xbfb7,	// (0x0009ed9d) compass_pane_g1_ParamLimits

0xbfb7,	// (0x0009ed9d) compass_pane_g1

0x367c,	// (0x00096462) compass_pane_t1

0x368b,	// (0x00096471) compass_pane_t2

0x0005,

0xf3d8,	// (0x000a21be) compass_pane_t

0x36d6,	// (0x000964bc) text_secondary_cp61

0xc033,	// (0x0009ee19) navi_pane_cams_g5

0xc0af,	// (0x0009ee95) navi_pane_im_t1

0xc0bd,	// (0x0009eea3) navi_pane_mp_g1_ParamLimits

0xc0bd,	// (0x0009eea3) navi_pane_mp_g1

0xc0d1,	// (0x0009eeb7) navi_pane_mp_g2_ParamLimits

0xc0d1,	// (0x0009eeb7) navi_pane_mp_g2

0xc0dd,	// (0x0009eec3) navi_pane_mp_g3_ParamLimits

0xc0dd,	// (0x0009eec3) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000a21d2) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000a21d2) navi_pane_mp_g

0xc0e9,	// (0x0009eecf) navi_pane_mp_t1

0xc0f7,	// (0x0009eedd) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000a21d9) navi_pane_mp_t

0xc162,	// (0x0009ef48) navi_pane_vt_g1

0xc0e9,	// (0x0009eecf) navi_pane_vt_t1

0xc16a,	// (0x0009ef50) navi_slider_pane

0xa5a9,	// (0x0009d38f) zooming_pane

0xc17a,	// (0x0009ef60) navi_slider_pane_g1

0x3711,	// (0x000964f7) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000a21e0) navi_slider_pane_g

0xc19e,	// (0x0009ef84) aid_levels_zoom

0xc1a6,	// (0x0009ef8c) zooming_pane_g1

0xc1ae,	// (0x0009ef94) zooming_pane_g2

0xc1ae,	// (0x0009ef94) zooming_pane_g3

0x0002,

0xf409,	// (0x000a21ef) zooming_pane_g

0xc1b6,	// (0x0009ef9c) level_10_zoom

0xc1bf,	// (0x0009efa5) level_11_zoom

0xc1c8,	// (0x0009efae) level_1_zoom

0xc1d1,	// (0x0009efb7) level_2_zoom

0xc1da,	// (0x0009efc0) level_3_zoom

0xc1e3,	// (0x0009efc9) level_4_zoom

0xc1ec,	// (0x0009efd2) level_5_zoom

0xc1f5,	// (0x0009efdb) level_6_zoom

0xc1fe,	// (0x0009efe4) level_7_zoom

0xc207,	// (0x0009efed) level_8_zoom

0xc210,	// (0x0009eff6) level_9_zoom

0xc221,	// (0x0009f007) popup_phob_thumbnail_window_g1

0xc229,	// (0x0009f00f) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000a21f6) popup_phob_thumbnail_window_g

0xd505,	// (0x000a02eb) level_1_location

0xd50d,	// (0x000a02f3) level_2_location

0xd515,	// (0x000a02fb) level_3_location

0xd51d,	// (0x000a0303) level_4_location

0xa5a9,	// (0x0009d38f) level_5_location

0x3723,	// (0x00096509) mce_icon_pane_g1

0x372b,	// (0x00096511) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000a21fb) mce_icon_pane_g

0x3733,	// (0x00096519) main_mup_pane_g1_ParamLimits

0x3733,	// (0x00096519) main_mup_pane_g1

0x374b,	// (0x00096531) main_mup_pane_g2_ParamLimits

0x374b,	// (0x00096531) main_mup_pane_g2

0x3767,	// (0x0009654d) main_mup_pane_g3_ParamLimits

0x3767,	// (0x0009654d) main_mup_pane_g3

0x3783,	// (0x00096569) main_mup_pane_g4_ParamLimits

0x3783,	// (0x00096569) main_mup_pane_g4

0x379f,	// (0x00096585) main_mup_pane_g5_ParamLimits

0x379f,	// (0x00096585) main_mup_pane_g5

0x37c0,	// (0x000965a6) main_mup_pane_g6_ParamLimits

0x37c0,	// (0x000965a6) main_mup_pane_g6

0x37dc,	// (0x000965c2) main_mup_pane_g7_ParamLimits

0x37dc,	// (0x000965c2) main_mup_pane_g7

0x37f8,	// (0x000965de) main_mup_pane_g8_ParamLimits

0x37f8,	// (0x000965de) main_mup_pane_g8

0x3818,	// (0x000965fe) main_mup_pane_g9_ParamLimits

0x3818,	// (0x000965fe) main_mup_pane_g9

0x3837,	// (0x0009661d) main_mup_pane_g10_ParamLimits

0x3837,	// (0x0009661d) main_mup_pane_g10

0x3856,	// (0x0009663c) main_mup_pane_g11_ParamLimits

0x3856,	// (0x0009663c) main_mup_pane_g11

0x386e,	// (0x00096654) main_mup_pane_g12_ParamLimits

0x386e,	// (0x00096654) main_mup_pane_g12

0x387c,	// (0x00096662) main_mup_pane_g13_ParamLimits

0x387c,	// (0x00096662) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000a2200) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000a2200) main_mup_pane_g

0x3892,	// (0x00096678) main_mup_pane_t1_ParamLimits

0x3892,	// (0x00096678) main_mup_pane_t1

0x38af,	// (0x00096695) main_mup_pane_t2_ParamLimits

0x38af,	// (0x00096695) main_mup_pane_t2

0x38c9,	// (0x000966af) main_mup_pane_t3_ParamLimits

0x38c9,	// (0x000966af) main_mup_pane_t3

0x38e3,	// (0x000966c9) main_mup_pane_t4_ParamLimits

0x38e3,	// (0x000966c9) main_mup_pane_t4

0x38f5,	// (0x000966db) main_mup_pane_t5_ParamLimits

0x38f5,	// (0x000966db) main_mup_pane_t5

0x3907,	// (0x000966ed) main_mup_pane_t6_ParamLimits

0x3907,	// (0x000966ed) main_mup_pane_t6

0x0005,

0xf435,	// (0x000a221b) main_mup_pane_t_ParamLimits

0xf435,	// (0x000a221b) main_mup_pane_t

0x391d,	// (0x00096703) mup_progress_pane_ParamLimits

0x391d,	// (0x00096703) mup_progress_pane

0x3929,	// (0x0009670f) mup_visualizer_pane_ParamLimits

0x3929,	// (0x0009670f) mup_visualizer_pane

0x3963,	// (0x00096749) mup_volume_pane_ParamLimits

0x3963,	// (0x00096749) mup_volume_pane

0xbf67,	// (0x0009ed4d) mup_visualizer_pane_g1_ParamLimits

0xbf67,	// (0x0009ed4d) mup_visualizer_pane_g1

0xbf67,	// (0x0009ed4d) mup_visualizer_pane_g2_ParamLimits

0xbf67,	// (0x0009ed4d) mup_visualizer_pane_g2

0xbfb7,	// (0x0009ed9d) mup_visualizer_pane_g3_ParamLimits

0xbfb7,	// (0x0009ed9d) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000a2228) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000a2228) mup_visualizer_pane_g

0xa439,	// (0x0009d21f) mup_volume_pane_g1

0xc239,	// (0x0009f01f) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000a222f) mup_volume_pane_g

0xa439,	// (0x0009d21f) mup_progress_pane_g1

0xc242,	// (0x0009f028) mup_progress_pane_g2

0xc24b,	// (0x0009f031) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000a2234) mup_progress_pane_g

0xa0c4,	// (0x0009ceaa) bg_popup_window_pane_cp05

0xc254,	// (0x0009f03a) heading_pane_cp02_ParamLimits

0xc254,	// (0x0009f03a) heading_pane_cp02

0xc26e,	// (0x0009f054) list_popup_blid_pane

0xc276,	// (0x0009f05c) list_blid_sat_info_pane_ParamLimits

0xc276,	// (0x0009f05c) list_blid_sat_info_pane

0xc289,	// (0x0009f06f) list_blid_sat_info_pane_g1

0xc291,	// (0x0009f077) list_blid_sat_info_pane_t1

0x3a70,	// (0x00096856) mup_equalizer_pane_ParamLimits

0x3a70,	// (0x00096856) mup_equalizer_pane

0x3a91,	// (0x00096877) mup_equalizer_pane_cp1_ParamLimits

0x3a91,	// (0x00096877) mup_equalizer_pane_cp1

0x3ab2,	// (0x00096898) mup_equalizer_pane_cp2_ParamLimits

0x3ab2,	// (0x00096898) mup_equalizer_pane_cp2

0x3ad3,	// (0x000968b9) mup_equalizer_pane_cp3_ParamLimits

0x3ad3,	// (0x000968b9) mup_equalizer_pane_cp3

0x3af4,	// (0x000968da) mup_equalizer_pane_cp4_ParamLimits

0x3af4,	// (0x000968da) mup_equalizer_pane_cp4

0x3b15,	// (0x000968fb) mup_equalizer_pane_cp5

0x3b2b,	// (0x00096911) mup_equalizer_pane_cp6

0x3b43,	// (0x00096929) mup_equalizer_pane_cp7

0xd423,	// (0x000a0209) bg_popup_call_poc_act_pane_g9

0xd42b,	// (0x000a0211) bg_popup_call_poc_act_pane_g10

0xd433,	// (0x000a0219) bg_popup_call_poc_act_pane_g11

0x000a,

0xa31f,	// (0x0009d105) mup_scale_pane

0xa439,	// (0x0009d21f) mup_scale_pane_g1

0xc29f,	// (0x0009f085) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000a2250) mup_scale_pane_g

0xc2c3,	// (0x0009f0a9) msg_data_pane

0xc2cb,	// (0x0009f0b1) scroll_pane_cp017

0x3b6d,	// (0x00096953) bg_list_pane_cp04_ParamLimits

0x3b6d,	// (0x00096953) bg_list_pane_cp04

0xc2d3,	// (0x0009f0b9) msg_data_pane_g1

0x3b93,	// (0x00096979) msg_data_pane_g2

0x3b9d,	// (0x00096983) msg_data_pane_g3

0x3ba5,	// (0x0009698b) msg_data_pane_g4

0x3bad,	// (0x00096993) msg_data_pane_g5

0x3bb5,	// (0x0009699b) msg_data_pane_g6

0x3bbd,	// (0x000969a3) msg_data_pane_g7

0x0006,

0xf479,	// (0x000a225f) msg_data_pane_g

0x3bc5,	// (0x000969ab) msg_text_pane_ParamLimits

0x3bc5,	// (0x000969ab) msg_text_pane

0x3c0c,	// (0x000969f2) qrid_highlight_pane_cp011_ParamLimits

0x3c0c,	// (0x000969f2) qrid_highlight_pane_cp011

0xa0c4,	// (0x0009ceaa) msg_body_pane

0xa0c4,	// (0x0009ceaa) msg_header_pane

0xc2e4,	// (0x0009f0ca) input_focus_pane_cp07

0x3c32,	// (0x00096a18) msg_header_pane_t1_ParamLimits

0x3c32,	// (0x00096a18) msg_header_pane_t1

0x3c44,	// (0x00096a2a) msg_header_pane_t2_ParamLimits

0x3c44,	// (0x00096a2a) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000a2273) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000a2273) msg_header_pane_t

0xc2f9,	// (0x0009f0df) msg_body_pane_g1

0x3c56,	// (0x00096a3c) msg_body_pane_t1_ParamLimits

0x3c56,	// (0x00096a3c) msg_body_pane_t1

0x3c87,	// (0x00096a6d) msg_body_pane_t2_ParamLimits

0x3c87,	// (0x00096a6d) msg_body_pane_t2

0x3c99,	// (0x00096a7f) msg_body_pane_t3_ParamLimits

0x3c99,	// (0x00096a7f) msg_body_pane_t3

0x0002,

0xf492,	// (0x000a2278) msg_body_pane_t_ParamLimits

0xf492,	// (0x000a2278) msg_body_pane_t

0x3cfd,	// (0x00096ae3) main_viewer_pane_g1_ParamLimits

0x3cfd,	// (0x00096ae3) main_viewer_pane_g1

0x3d09,	// (0x00096aef) main_viewer_pane_g2_ParamLimits

0x3d09,	// (0x00096aef) main_viewer_pane_g2

0x3d15,	// (0x00096afb) main_viewer_pane_g3_ParamLimits

0x3d15,	// (0x00096afb) main_viewer_pane_g3

0x3d26,	// (0x00096b0c) main_viewer_pane_g4_ParamLimits

0x3d26,	// (0x00096b0c) main_viewer_pane_g4

0x3d37,	// (0x00096b1d) main_viewer_pane_g5_ParamLimits

0x3d37,	// (0x00096b1d) main_viewer_pane_g5

0x3d37,	// (0x00096b1d) main_viewer_pane_g7_ParamLimits

0x3d37,	// (0x00096b1d) main_viewer_pane_g7

0xbc14,	// (0x0009e9fa) main_viewer_pane_g8_ParamLimits

0xbc14,	// (0x0009e9fa) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000a2288) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000a2288) main_viewer_pane_g

0xc301,	// (0x0009f0e7) viewer_content_pane_ParamLimits

0xc301,	// (0x0009f0e7) viewer_content_pane

0x3d75,	// (0x00096b5b) main_postcard_pane_g1_ParamLimits

0x3d75,	// (0x00096b5b) main_postcard_pane_g1

0x3d83,	// (0x00096b69) main_postcard_pane_g2_ParamLimits

0x3d83,	// (0x00096b69) main_postcard_pane_g2

0x3d91,	// (0x00096b77) main_postcard_pane_g3_ParamLimits

0x3d91,	// (0x00096b77) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000a2299) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000a2299) main_postcard_pane_g

0x3da1,	// (0x00096b87) main_postcard_pane_g4

0xd605,	// (0x000a03eb) smil_status_volume_pane_g2

0x3dcd,	// (0x00096bb3) postcard_pane_ParamLimits

0x3dcd,	// (0x00096bb3) postcard_pane

0xbf67,	// (0x0009ed4d) postcard_pane_g1_ParamLimits

0xbf67,	// (0x0009ed4d) postcard_pane_g1

0x3dff,	// (0x00096be5) postcard_pane_g2_ParamLimits

0x3dff,	// (0x00096be5) postcard_pane_g2

0x3e0b,	// (0x00096bf1) postcard_pane_g3_ParamLimits

0x3e0b,	// (0x00096bf1) postcard_pane_g3

0xc30f,	// (0x0009f0f5) postcard_pane_g4_ParamLimits

0xc30f,	// (0x0009f0f5) postcard_pane_g4

0x3e17,	// (0x00096bfd) postcard_pane_g5_ParamLimits

0x3e17,	// (0x00096bfd) postcard_pane_g5

0x3e23,	// (0x00096c09) postcard_pane_g6_ParamLimits

0x3e23,	// (0x00096c09) postcard_pane_g6

0xc31d,	// (0x0009f103) postcard_pane_g7_ParamLimits

0xc31d,	// (0x0009f103) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000a22a6) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000a22a6) postcard_pane_g

0x3e2f,	// (0x00096c15) main_mp2_pane_g1_ParamLimits

0x3e2f,	// (0x00096c15) main_mp2_pane_g1

0x3e3b,	// (0x00096c21) main_mp2_pane_g2_ParamLimits

0x3e3b,	// (0x00096c21) main_mp2_pane_g2

0x3e47,	// (0x00096c2d) main_mp2_pane_g3_ParamLimits

0x3e47,	// (0x00096c2d) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000a22b5) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000a22b5) main_mp2_pane_g

0x3e53,	// (0x00096c39) main_mp2_pane_t1_ParamLimits

0x3e53,	// (0x00096c39) main_mp2_pane_t1

0x3e6a,	// (0x00096c50) main_mp2_pane_t2_ParamLimits

0x3e6a,	// (0x00096c50) main_mp2_pane_t2

0x3e7e,	// (0x00096c64) main_mp2_pane_t3_ParamLimits

0x3e7e,	// (0x00096c64) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000a22bc) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000a22bc) main_mp2_pane_t

0xc32b,	// (0x0009f111) pec_content_pane_ParamLimits

0xc32b,	// (0x0009f111) pec_content_pane

0xa752,	// (0x0009d538) scroll_pane_cp015

0xc33d,	// (0x0009f123) pec_attribute_pane_ParamLimits

0xc33d,	// (0x0009f123) pec_attribute_pane

0x3e90,	// (0x00096c76) pec_content_pane_g1_ParamLimits

0x3e90,	// (0x00096c76) pec_content_pane_g1

0xc34d,	// (0x0009f133) pec_content_pane_t1_ParamLimits

0xc34d,	// (0x0009f133) pec_content_pane_t1

0xc35f,	// (0x0009f145) pec_content_pane_t2_ParamLimits

0xc35f,	// (0x0009f145) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000a22c3) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000a22c3) pec_content_pane_t

0x3e9c,	// (0x00096c82) list_single_graphic_pane_cp01_ParamLimits

0x3e9c,	// (0x00096c82) list_single_graphic_pane_cp01

0xa31f,	// (0x0009d105) bg_popup_sub_pane_cp04

0xc371,	// (0x0009f157) popup_mup_playback_window_g1

0xc37d,	// (0x0009f163) popup_mup_playback_window_t1

0xc392,	// (0x0009f178) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000a22c8) popup_mup_playback_window_t

0xc3c9,	// (0x0009f1af) main_image_pane_g1_ParamLimits

0xc3c9,	// (0x0009f1af) main_image_pane_g1

0xc40c,	// (0x0009f1f2) scroll_pane_cp018_ParamLimits

0xc40c,	// (0x0009f1f2) scroll_pane_cp018

0xc424,	// (0x0009f20a) scroll_pane_cp016_ParamLimits

0xc424,	// (0x0009f20a) scroll_pane_cp016

0x3f35,	// (0x00096d1b) smil2_image_pane_ParamLimits

0x3f35,	// (0x00096d1b) smil2_image_pane

0x3f65,	// (0x00096d4b) smil2_root_pane_ParamLimits

0x3f65,	// (0x00096d4b) smil2_root_pane

0x3f91,	// (0x00096d77) smil2_text_pane_ParamLimits

0x3f91,	// (0x00096d77) smil2_text_pane

0xa0c4,	// (0x0009ceaa) bg_list_pane_cp06

0xc460,	// (0x0009f246) grid_radio_pane

0xa0c4,	// (0x0009ceaa) bg_popup_window_pane_cp06

0xc468,	// (0x0009f24e) main_fmradio_pane_t1

0xbde0,	// (0x0009ebc6) heading_pane_cp04

0xc476,	// (0x0009f25c) main_fmradio_pane_t2

0xd43b,	// (0x000a0221) popup_cale_lunar_info_window_g1

0xc484,	// (0x0009f26a) main_fmradio_pane_t3

0xd443,	// (0x000a0229) popup_cale_lunar_info_window_g2

0xc492,	// (0x0009f278) main_fmradio_pane_t4

0x0001,

0xc4a0,	// (0x0009f286) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000a23a3) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000a22dd) main_fmradio_pane_t

0xc4ae,	// (0x0009f294) wait_bar_pane_cp03

0xc4b6,	// (0x0009f29c) cell_fmradio_pane_ParamLimits

0xc4b6,	// (0x0009f29c) cell_fmradio_pane

0xc31d,	// (0x0009f103) cell_fmradio_pane_g1_ParamLimits

0xc31d,	// (0x0009f103) cell_fmradio_pane_g1

0xa0c4,	// (0x0009ceaa) grid_highlight_pane_cp011

0xc4c9,	// (0x0009f2af) poc_content_pane_ParamLimits

0xc4c9,	// (0x0009f2af) poc_content_pane

0xc4db,	// (0x0009f2c1) scroll_pane_cp019

0x3fd1,	// (0x00096db7) popup_call_poc_act_window_ParamLimits

0x3fd1,	// (0x00096db7) popup_call_poc_act_window

0x3fde,	// (0x00096dc4) popup_call_poc_inact_window_ParamLimits

0x3fde,	// (0x00096dc4) popup_call_poc_inact_window

0xf594,	// (0x000a237a) bg_popup_call_poc_act_pane_g

0xd3b3,	// (0x000a0199) bg_popup_call_poc_inact_pane_g1

0xd3bb,	// (0x000a01a1) bg_popup_call_poc_inact_pane_g2

0xc4e3,	// (0x0009f2c9) popup_call_poc_act_window_g2

0xd3c3,	// (0x000a01a9) bg_popup_call_poc_inact_pane_g3

0xd3cb,	// (0x000a01b1) bg_popup_call_poc_inact_pane_g4

0xd3d3,	// (0x000a01b9) bg_popup_call_poc_inact_pane_g5

0xc4eb,	// (0x0009f2d1) popup_call_poc_act_window_t1_ParamLimits

0xc4eb,	// (0x0009f2d1) popup_call_poc_act_window_t1

0xc513,	// (0x0009f2f9) popup_call_poc_act_window_t2_ParamLimits

0xc513,	// (0x0009f2f9) popup_call_poc_act_window_t2

0xc53b,	// (0x0009f321) popup_call_poc_act_window_t3_ParamLimits

0xc53b,	// (0x0009f321) popup_call_poc_act_window_t3

0xc563,	// (0x0009f349) popup_call_poc_act_window_t4_ParamLimits

0xc563,	// (0x0009f349) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000a22e8) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000a22e8) popup_call_poc_act_window_t

0xd3db,	// (0x000a01c1) bg_popup_call_poc_inact_pane_g6

0xd3e3,	// (0x000a01c9) bg_popup_call_poc_inact_pane_g7

0xd3eb,	// (0x000a01d1) bg_popup_call_poc_inact_pane_g8

0xc575,	// (0x0009f35b) popup_call_poc_inact_window_g2

0xd3f3,	// (0x000a01d9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000a2367) bg_popup_call_poc_inact_pane_g

0xc57d,	// (0x0009f363) popup_call_poc_inact_window_t1_ParamLimits

0xc57d,	// (0x0009f363) popup_call_poc_inact_window_t1

0xc592,	// (0x0009f378) popup_call_poc_inact_window_t2_ParamLimits

0xc592,	// (0x0009f378) popup_call_poc_inact_window_t2

0xc5a7,	// (0x0009f38d) popup_call_poc_inact_window_t3_ParamLimits

0xc5a7,	// (0x0009f38d) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000a22f1) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000a22f1) popup_call_poc_inact_window_t

0xd578,	// (0x000a035e) context_pane_ParamLimits

0x4620,	// (0x00097406) signal_pane_ParamLimits

0xa5a9,	// (0x0009d38f) main_call2_pane

0x4593,	// (0x00097379) popup_phob_thumbnail2_window_ParamLimits

0x4593,	// (0x00097379) popup_phob_thumbnail2_window

0x3cab,	// (0x00096a91) aid_hotspot_pointer_arrow_pane

0x3cb3,	// (0x00096a99) aid_hotspot_pointer_hand_pane

0x4300,	// (0x000970e6) phob_pre_status_pane_g5

0x1d37,	// (0x00094b1d) cams_zoom_pane_ParamLimits

0x1d43,	// (0x00094b29) image_vga_pane_ParamLimits

0x1d52,	// (0x00094b38) main_camera_pane_g1_ParamLimits

0x1d60,	// (0x00094b46) main_camera_pane_g2_ParamLimits

0x1d6c,	// (0x00094b52) main_camera_pane_g3_ParamLimits

0x1d78,	// (0x00094b5e) main_camera_pane_g4_ParamLimits

0x1d84,	// (0x00094b6a) main_camera_pane_g5_ParamLimits

0x1d90,	// (0x00094b76) main_camera_pane_g6_ParamLimits

0x1d9c,	// (0x00094b82) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000a1ff0) main_camera_pane_g_ParamLimits

0x1da8,	// (0x00094b8e) main_camera_pane_t1_ParamLimits

0x1dba,	// (0x00094ba0) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000a2001) main_camera_pane_t_ParamLimits

0xa31f,	// (0x0009d105) bg_popup_preview_window_pane_cp01_ParamLimits

0xa31f,	// (0x0009d105) bg_popup_preview_window_pane_cp01

0xc5bc,	// (0x0009f3a2) popup_phob_thumbnail2_window_g1_ParamLimits

0xc5bc,	// (0x0009f3a2) popup_phob_thumbnail2_window_g1

0xa0c4,	// (0x0009ceaa) call2_cli_visual_pane

0x3ffa,	// (0x00096de0) popup_call2_audio_conf_window_ParamLimits

0x3ffa,	// (0x00096de0) popup_call2_audio_conf_window

0x400f,	// (0x00096df5) popup_call2_audio_first_window_ParamLimits

0x400f,	// (0x00096df5) popup_call2_audio_first_window

0x40ad,	// (0x00096e93) popup_call2_audio_in_window_ParamLimits

0x40ad,	// (0x00096e93) popup_call2_audio_in_window

0x40ef,	// (0x00096ed5) popup_call2_audio_out_window_ParamLimits

0x40ef,	// (0x00096ed5) popup_call2_audio_out_window

0x4151,	// (0x00096f37) popup_call2_audio_second_window_ParamLimits

0x4151,	// (0x00096f37) popup_call2_audio_second_window

0x41af,	// (0x00096f95) popup_call2_audio_wait_window_ParamLimits

0x41af,	// (0x00096f95) popup_call2_audio_wait_window

0xa0c4,	// (0x0009ceaa) bg_popup_call2_act_pane_cp03

0xa301,	// (0x0009d0e7) list_conf_pane_cp

0xc5c8,	// (0x0009f3ae) popup_call2_audio_conf_window_t1

0xbe3d,	// (0x0009ec23) list_single_graphic_popup_conf2_pane_ParamLimits

0xbe3d,	// (0x0009ec23) list_single_graphic_popup_conf2_pane

0xbe50,	// (0x0009ec36) list_highlight_pane_cp04

0xc5d6,	// (0x0009f3bc) list_single_graphic_popup_conf2_pane_g1

0xbe61,	// (0x0009ec47) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000a22f8) list_single_graphic_popup_conf2_pane_g

0xc5e0,	// (0x0009f3c6) list_single_graphic_popup_conf2_pane_t1

0xc5ee,	// (0x0009f3d4) bg_popup_call2_act_pane_cp01_ParamLimits

0xc5ee,	// (0x0009f3d4) bg_popup_call2_act_pane_cp01

0xc678,	// (0x0009f45e) call_type_pane_cp05_ParamLimits

0xc678,	// (0x0009f45e) call_type_pane_cp05

0xc6cc,	// (0x0009f4b2) popup_call2_audio_second_window_g1_ParamLimits

0xc6cc,	// (0x0009f4b2) popup_call2_audio_second_window_g1

0xc720,	// (0x0009f506) popup_call2_audio_second_window_g2_ParamLimits

0xc720,	// (0x0009f506) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000a22fd) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000a22fd) popup_call2_audio_second_window_g

0xc785,	// (0x0009f56b) popup_call2_audio_second_window_t1_ParamLimits

0xc785,	// (0x0009f56b) popup_call2_audio_second_window_t1

0xc840,	// (0x0009f626) popup_call2_audio_second_window_t2_ParamLimits

0xc840,	// (0x0009f626) popup_call2_audio_second_window_t2

0xc893,	// (0x0009f679) popup_call2_audio_second_window_t3_ParamLimits

0xc893,	// (0x0009f679) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000a2304) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000a2304) popup_call2_audio_second_window_t

0xa0c4,	// (0x0009ceaa) bg_popup_call2_in_pane_cp02

0xa0ce,	// (0x0009ceb4) call_type_pane_cp04

0xa0d6,	// (0x0009cebc) popup_call2_audio_wait_window_g1

0xa0de,	// (0x0009cec4) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a1edf) popup_call2_audio_wait_window_g

0xa0e6,	// (0x0009cecc) popup_call2_audio_wait_window_t3

0xc986,	// (0x0009f76c) bg_popup_call2_act_pane_ParamLimits

0xc986,	// (0x0009f76c) bg_popup_call2_act_pane

0xca46,	// (0x0009f82c) call_type_pane_cp03_ParamLimits

0xca46,	// (0x0009f82c) call_type_pane_cp03

0xcaaa,	// (0x0009f890) popup_call2_audio_first_window_g1_ParamLimits

0xcaaa,	// (0x0009f890) popup_call2_audio_first_window_g1

0xcb1a,	// (0x0009f900) popup_call2_audio_first_window_g2_ParamLimits

0xcb1a,	// (0x0009f900) popup_call2_audio_first_window_g2

0xbf67,	// (0x0009ed4d) popup_call2_audio_first_window_g3_ParamLimits

0xbf67,	// (0x0009ed4d) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000a230d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000a230d) popup_call2_audio_first_window_g

0xcbf8,	// (0x0009f9de) popup_call2_audio_first_window_t1_ParamLimits

0xcbf8,	// (0x0009f9de) popup_call2_audio_first_window_t1

0xccfb,	// (0x0009fae1) popup_call2_audio_first_window_t4_ParamLimits

0xccfb,	// (0x0009fae1) popup_call2_audio_first_window_t4

0xcdde,	// (0x0009fbc4) popup_call2_audio_first_window_t5_ParamLimits

0xcdde,	// (0x0009fbc4) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000a2318) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000a2318) popup_call2_audio_first_window_t

0xa317,	// (0x0009d0fd) bg_popup_call2_act_pane_g1

0xd44b,	// (0x000a0231) popup_cale_lunar_info_window_t1

0xd459,	// (0x000a023f) popup_cale_lunar_info_window_t2

0xd467,	// (0x000a024d) popup_cale_lunar_info_window_t3

0xa0c4,	// (0x0009ceaa) bg_popup_call2_bubble_pane

0xcedf,	// (0x0009fcc5) bg_popup_call2_in_pane_cp01_ParamLimits

0xcedf,	// (0x0009fcc5) bg_popup_call2_in_pane_cp01

0x9da0,	// (0x0009cb86) call_type_pane_cp02

0xcf27,	// (0x0009fd0d) popup_call2_audio_out_window_g1_ParamLimits

0xcf27,	// (0x0009fd0d) popup_call2_audio_out_window_g1

0xcf53,	// (0x0009fd39) popup_call2_audio_out_window_g2_ParamLimits

0xcf53,	// (0x0009fd39) popup_call2_audio_out_window_g2

0xcf7b,	// (0x0009fd61) popup_call2_audio_out_window_g3_ParamLimits

0xcf7b,	// (0x0009fd61) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000a2321) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000a2321) popup_call2_audio_out_window_g

0xcfb6,	// (0x0009fd9c) popup_call2_audio_out_window_t1_ParamLimits

0xcfb6,	// (0x0009fd9c) popup_call2_audio_out_window_t1

0xd015,	// (0x0009fdfb) popup_call2_audio_out_window_t2_ParamLimits

0xd015,	// (0x0009fdfb) popup_call2_audio_out_window_t2

0xd069,	// (0x0009fe4f) popup_call2_audio_out_window_t3_ParamLimits

0xd069,	// (0x0009fe4f) popup_call2_audio_out_window_t3

0xd07f,	// (0x0009fe65) popup_call2_audio_out_window_t4_ParamLimits

0xd07f,	// (0x0009fe65) popup_call2_audio_out_window_t4

0xd095,	// (0x0009fe7b) popup_call2_audio_out_window_t5_ParamLimits

0xd095,	// (0x0009fe7b) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000a232a) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000a232a) popup_call2_audio_out_window_t

0xd0f9,	// (0x0009fedf) bg_popup_call2_in_pane_ParamLimits

0xd0f9,	// (0x0009fedf) bg_popup_call2_in_pane

0xd155,	// (0x0009ff3b) popup_call2_audio_in_window_g1_ParamLimits

0xd155,	// (0x0009ff3b) popup_call2_audio_in_window_g1

0xd18d,	// (0x0009ff73) popup_call2_audio_in_window_g2_ParamLimits

0xd18d,	// (0x0009ff73) popup_call2_audio_in_window_g2

0xd1c5,	// (0x0009ffab) popup_call2_audio_in_window_g3_ParamLimits

0xd1c5,	// (0x0009ffab) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000a2337) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000a2337) popup_call2_audio_in_window_g

0xd21d,	// (0x000a0003) popup_call2_audio_in_window_t1_ParamLimits

0xd21d,	// (0x000a0003) popup_call2_audio_in_window_t1

0xd29d,	// (0x000a0083) popup_call2_audio_in_window_t2_ParamLimits

0xd29d,	// (0x000a0083) popup_call2_audio_in_window_t2

0xd31d,	// (0x000a0103) popup_call2_audio_in_window_t3_ParamLimits

0xd31d,	// (0x000a0103) popup_call2_audio_in_window_t3

0xd337,	// (0x000a011d) popup_call2_audio_in_window_t4_ParamLimits

0xd337,	// (0x000a011d) popup_call2_audio_in_window_t4

0xd349,	// (0x000a012f) popup_call2_audio_in_window_t5_ParamLimits

0xd349,	// (0x000a012f) popup_call2_audio_in_window_t5

0xd35e,	// (0x000a0144) popup_call2_audio_in_window_t6_ParamLimits

0xd35e,	// (0x000a0144) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000a2340) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000a2340) popup_call2_audio_in_window_t

0xa317,	// (0x0009d0fd) bg_popup_call2_in_pane_g1

0xd475,	// (0x000a025b) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000a23a8) popup_cale_lunar_info_window_t

0xa31f,	// (0x0009d105) bg_popup_call2_rect_pane_ParamLimits

0xa31f,	// (0x0009d105) bg_popup_call2_rect_pane

0xa0c4,	// (0x0009ceaa) call2_cli_visual_graphic_pane

0xa0c4,	// (0x0009ceaa) call2_cli_visual_text_pane

0x46c6,	// (0x000974ac) smil_status_volume_pane_g3

0x0002,

0xa439,	// (0x0009d21f) call2_cli_visual_graphic_pane_g1

0xa439,	// (0x0009d21f) call2_cli_visual_graphic_pane_g2

0xa439,	// (0x0009d21f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000a234d) call2_cli_visual_graphic_pane_g

0xd373,	// (0x000a0159) bg_popup_call2_rect_pane_g1

0xa4c5,	// (0x0009d2ab) bg_popup_call2_rect_pane_g2

0xd37b,	// (0x000a0161) bg_popup_call2_rect_pane_g3

0xd383,	// (0x000a0169) bg_popup_call2_rect_pane_g4

0xd38b,	// (0x000a0171) bg_popup_call2_rect_pane_g5

0xd393,	// (0x000a0179) bg_popup_call2_rect_pane_g6

0xd39b,	// (0x000a0181) bg_popup_call2_rect_pane_g7

0xd3a3,	// (0x000a0189) bg_popup_call2_rect_pane_g8

0xd3ab,	// (0x000a0191) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000a2354) bg_popup_call2_rect_pane_g

0xd3b3,	// (0x000a0199) bg_popup_call2_bubble_pane_g1

0xd3bb,	// (0x000a01a1) bg_popup_call2_bubble_pane_g2

0xd3c3,	// (0x000a01a9) bg_popup_call2_bubble_pane_g3

0xd3cb,	// (0x000a01b1) bg_popup_call2_bubble_pane_g4

0xd3d3,	// (0x000a01b9) bg_popup_call2_bubble_pane_g5

0xd3db,	// (0x000a01c1) bg_popup_call2_bubble_pane_g6

0xd3e3,	// (0x000a01c9) bg_popup_call2_bubble_pane_g7

0xd3eb,	// (0x000a01d1) bg_popup_call2_bubble_pane_g8

0xd3f3,	// (0x000a01d9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000a2367) bg_popup_call2_bubble_pane_g

0x184e,	// (0x00094634) aid_cale_week_size_cell_pane

0x1dcc,	// (0x00094bb2) aid_cams_cif_uncrop_pane_ParamLimits

0x1dcc,	// (0x00094bb2) aid_cams_cif_uncrop_pane

0x1f27,	// (0x00094d0d) aid_cams_size_cell_ParamLimits

0x1f27,	// (0x00094d0d) aid_cams_size_cell

0x1f33,	// (0x00094d19) grid_cams_pane_ParamLimits

0x1f41,	// (0x00094d27) linegrid_cams_pane_ParamLimits

0x210f,	// (0x00094ef5) call_video_pane_t1

0x2130,	// (0x00094f16) call_video_pane_t2

0x0001,

0xf26e,	// (0x000a2054) call_video_pane_t

0x2677,	// (0x0009545d) aid_cale_month_size_cell_pane_ParamLimits

0x2677,	// (0x0009545d) aid_cale_month_size_cell_pane

0xf60b,	// (0x000a23f1) smil_status_volume_pane_g

0x46d3,	// (0x000974b9) volume_smil_pane_ParamLimits

0x0f97,	// (0x00093d7d) aid_popup2_width_pane

0x1742,	// (0x00094528) cell_qdial_pane_g4_ParamLimits

0x1742,	// (0x00094528) cell_qdial_pane_g4

0x3658,	// (0x0009643e) aid_blid_cardinal_pane_ParamLimits

0x3668,	// (0x0009644e) aid_blid_destination_pane_ParamLimits

0x3668,	// (0x0009644e) aid_blid_destination_pane

0xa31f,	// (0x0009d105) bg_popup_call_poc_act_pane_ParamLimits

0xa31f,	// (0x0009d105) bg_popup_call_poc_act_pane

0xa31f,	// (0x0009d105) bg_popup_call_poc_inact_pane_ParamLimits

0xa31f,	// (0x0009d105) bg_popup_call_poc_inact_pane

0xd3fb,	// (0x000a01e1) bg_popup_call_poc_act_pane_g1

0xd403,	// (0x000a01e9) bg_popup_call_poc_act_pane_g2

0xd40b,	// (0x000a01f1) bg_popup_call_poc_act_pane_g3

0xd3cb,	// (0x000a01b1) bg_popup_call_poc_act_pane_g4

0xd3d3,	// (0x000a01b9) bg_popup_call_poc_act_pane_g5

0xd413,	// (0x000a01f9) bg_popup_call_poc_act_pane_g6

0xd3e3,	// (0x000a01c9) bg_popup_call_poc_act_pane_g7

0xd41b,	// (0x000a0201) bg_popup_call_poc_act_pane_g8

0xa0c4,	// (0x0009ceaa) main_usb_pane

0x44c2,	// (0x000972a8) popup_cale_lunar_info_window

0x2459,	// (0x0009523f) im_reading_pane_t1_ParamLimits

0xa6aa,	// (0x0009d490) list_im_pane_ParamLimits

0xa6bb,	// (0x0009d4a1) scroll_pane_cp07_ParamLimits

0xa0c4,	// (0x0009ceaa) grid_highlight_pane_cp012

0xa31f,	// (0x0009d105) mup_scale_pane_ParamLimits

0xbf67,	// (0x0009ed4d) main_usb_pane_g1_ParamLimits

0xbf67,	// (0x0009ed4d) main_usb_pane_g1

0x4223,	// (0x00097009) main_usb_pane_g2_ParamLimits

0x4223,	// (0x00097009) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000a2391) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000a2391) main_usb_pane_g

0x422f,	// (0x00097015) main_usb_pane_t1_ParamLimits

0x422f,	// (0x00097015) main_usb_pane_t1

0x4241,	// (0x00097027) main_usb_pane_t2_ParamLimits

0x4241,	// (0x00097027) main_usb_pane_t2

0x4253,	// (0x00097039) main_usb_pane_t3_ParamLimits

0x4253,	// (0x00097039) main_usb_pane_t3

0x4265,	// (0x0009704b) main_usb_pane_t4_ParamLimits

0x4265,	// (0x0009704b) main_usb_pane_t4

0x4277,	// (0x0009705d) main_usb_pane_t5_ParamLimits

0x4277,	// (0x0009705d) main_usb_pane_t5

0x4289,	// (0x0009706f) main_usb_pane_t6_ParamLimits

0x4289,	// (0x0009706f) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000a2396) main_usb_pane_t_ParamLimits

0x35fe,	// (0x000963e4) aid_text_placing

0x360a,	// (0x000963f0) main_location2_pane_t1_ParamLimits

0x361e,	// (0x00096404) main_location2_pane_t2_ParamLimits

0x3632,	// (0x00096418) main_location2_pane_t3_ParamLimits

0x3646,	// (0x0009642c) main_location2_pane_t4_ParamLimits

0x3646,	// (0x0009642c) main_location2_pane_t4

0xf3cf,	// (0x000a21b5) main_location2_pane_t_ParamLimits

0xa35b,	// (0x0009d141) find_pinb_pane_g2_ParamLimits

0xa35b,	// (0x0009d141) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000a1f05) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000a1f05) find_pinb_pane_g

0xa367,	// (0x0009d14d) find_pinb_pane_t1_ParamLimits

0xa379,	// (0x0009d15f) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000a1f0a) find_pinb_pane_t_ParamLimits

0xa0c4,	// (0x0009ceaa) main_call3_pane

0x2c1a,	// (0x00095a00) cale_month_day_heading_pane_t1_ParamLimits

0x2ca0,	// (0x00095a86) cale_month_day_heading_pane_t2_ParamLimits

0x2d19,	// (0x00095aff) cale_month_day_heading_pane_t3_ParamLimits

0x2d92,	// (0x00095b78) cale_month_day_heading_pane_t4_ParamLimits

0x2e0b,	// (0x00095bf1) cale_month_day_heading_pane_t5_ParamLimits

0x2e84,	// (0x00095c6a) cale_month_day_heading_pane_t6_ParamLimits

0x2efd,	// (0x00095ce3) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000a208c) cale_month_day_heading_pane_t_ParamLimits

0xba56,	// (0x0009e83c) smil_status_volume_pane

0x3de7,	// (0x00096bcd) postcard_address_pane_ParamLimits

0x3de7,	// (0x00096bcd) postcard_address_pane

0x3df3,	// (0x00096bd9) postcard_message_pane_ParamLimits

0x3df3,	// (0x00096bd9) postcard_message_pane

0x41ee,	// (0x00096fd4) call2_cli_visual_pane_t1_ParamLimits

0x41ee,	// (0x00096fd4) call2_cli_visual_pane_t1

0x482a,	// (0x00097610) postcard_message_pane_t1_ParamLimits

0x482a,	// (0x00097610) postcard_message_pane_t1

0x4813,	// (0x000975f9) postcard_address_pane_t1_ParamLimits

0x4813,	// (0x000975f9) postcard_address_pane_t1

0x4804,	// (0x000975ea) popup_call3_audio_in_window_ParamLimits

0x4804,	// (0x000975ea) popup_call3_audio_in_window

0x46e8,	// (0x000974ce) bg_popup_call3_in_pane_ParamLimits

0x46e8,	// (0x000974ce) bg_popup_call3_in_pane

0x474a,	// (0x00097530) popup_call3_audio_in_window_g1_ParamLimits

0x474a,	// (0x00097530) popup_call3_audio_in_window_g1

0x4762,	// (0x00097548) popup_call3_audio_in_window_g2_ParamLimits

0x4762,	// (0x00097548) popup_call3_audio_in_window_g2

0x477a,	// (0x00097560) popup_call3_audio_in_window_g3_ParamLimits

0x477a,	// (0x00097560) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000a23f8) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000a23f8) popup_call3_audio_in_window_g

0x47a2,	// (0x00097588) popup_call3_audio_in_window_t1_ParamLimits

0x47a2,	// (0x00097588) popup_call3_audio_in_window_t1

0x47ca,	// (0x000975b0) popup_call3_audio_in_window_t2_ParamLimits

0x47ca,	// (0x000975b0) popup_call3_audio_in_window_t2

0x47f2,	// (0x000975d8) popup_call3_audio_in_window_t3_ParamLimits

0x47f2,	// (0x000975d8) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000a2401) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000a2401) popup_call3_audio_in_window_t

0xa5a9,	// (0x0009d38f) bg_popup_call3_rect_pane

0xd373,	// (0x000a0159) bg_popup_call3_rect_pane_g1

0xa4c5,	// (0x0009d2ab) bg_popup_call3_rect_pane_g2

0xd37b,	// (0x000a0161) bg_popup_call3_rect_pane_g3

0xd383,	// (0x000a0169) bg_popup_call3_rect_pane_g4

0xd38b,	// (0x000a0171) bg_popup_call3_rect_pane_g5

0xd393,	// (0x000a0179) bg_popup_call3_rect_pane_g6

0xd39b,	// (0x000a0181) bg_popup_call3_rect_pane_g7

0x397e,	// (0x00096764) mup_visualizer_osc_pane

0xc231,	// (0x0009f017) mup_visualizer_spec_pane

0x4708,	// (0x000974ee) call3_video_qcif_pane_ParamLimits

0x4708,	// (0x000974ee) call3_video_qcif_pane

0x471a,	// (0x00097500) call3_video_qcif_uncrop_pane_ParamLimits

0x471a,	// (0x00097500) call3_video_qcif_uncrop_pane

0x4728,	// (0x0009750e) call3_video_subqcif_pane_ParamLimits

0x4728,	// (0x0009750e) call3_video_subqcif_pane

0x473a,	// (0x00097520) call3_video_subqcif_uncrop_pane_ParamLimits

0x473a,	// (0x00097520) call3_video_subqcif_uncrop_pane

0x4792,	// (0x00097578) popup_call3_audio_in_window_g4_ParamLimits

0x4792,	// (0x00097578) popup_call3_audio_in_window_g4

0x46b5,	// (0x0009749b) mup_spec_half_pane

0x46be,	// (0x000974a4) mup_spec_half_pane_cp

0xd5d8,	// (0x000a03be) mup_osc_middle_pane

0xd5e1,	// (0x000a03c7) mup_visualizer_osc_pane_g1

0x4696,	// (0x0009747c) mup_spec_bar_pane_ParamLimits

0x4696,	// (0x0009747c) mup_spec_bar_pane

0xd5c5,	// (0x000a03ab) mup_spec_bar_pane_g1

0xd5cf,	// (0x000a03b5) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000a23ec) mup_spec_bar_pane_g

0x184e,	// (0x00094634) aid_cale_week_size_cell_pane_ParamLimits

0x1863,	// (0x00094649) bg_cale_heading_pane_ParamLimits

0xa502,	// (0x0009d2e8) bg_cale_pane_cp01_ParamLimits

0x1883,	// (0x00094669) cale_week_corner_pane_ParamLimits

0x189d,	// (0x00094683) cale_week_day_heading_pane_ParamLimits

0x18bd,	// (0x000946a3) cale_week_scroll_pane_g1_ParamLimits

0x18d8,	// (0x000946be) cale_week_scroll_pane_g2_ParamLimits

0x18eb,	// (0x000946d1) cale_week_scroll_pane_g3_ParamLimits

0x18fe,	// (0x000946e4) cale_week_scroll_pane_g4_ParamLimits

0x1911,	// (0x000946f7) cale_week_scroll_pane_g5_ParamLimits

0x1924,	// (0x0009470a) cale_week_scroll_pane_g6_ParamLimits

0x1937,	// (0x0009471d) cale_week_scroll_pane_g7_ParamLimits

0x194c,	// (0x00094732) cale_week_scroll_pane_g8_ParamLimits

0x1961,	// (0x00094747) cale_week_scroll_pane_g9_ParamLimits

0x1974,	// (0x0009475a) cale_week_scroll_pane_g10_ParamLimits

0x1987,	// (0x0009476d) cale_week_scroll_pane_g11_ParamLimits

0x199a,	// (0x00094780) cale_week_scroll_pane_g12_ParamLimits

0x19b1,	// (0x00094797) cale_week_scroll_pane_g13_ParamLimits

0x19cc,	// (0x000947b2) cale_week_scroll_pane_g14_ParamLimits

0x19e7,	// (0x000947cd) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000a1f96) cale_week_scroll_pane_g_ParamLimits

0x1a17,	// (0x000947fd) cale_week_time_pane_ParamLimits

0x1a2c,	// (0x00094812) grid_cale_week_pane_ParamLimits

0xa51f,	// (0x0009d305) listscroll_cale_week_pane_t1

0xa531,	// (0x0009d317) scroll_pane_cp08_ParamLimits

0x26eb,	// (0x000954d1) cale_month_corner_pane_ParamLimits

0xba2c,	// (0x0009e812) cale_month_pane_t1

0x2b9d,	// (0x00095983) cale_month_week_pane_ParamLimits

0xbf67,	// (0x0009ed4d) popup_call_status_window_g1_ParamLimits

0x3431,	// (0x00096217) popup_call_status_window_g2_ParamLimits

0x343d,	// (0x00096223) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000a213c) popup_call_status_window_g_ParamLimits

0xbdd0,	// (0x0009ebb6) aid_call2_pane

0x3c26,	// (0x00096a0c) msg_header_pane_g1

0x3de7,	// (0x00096bcd) postcard_address2_pane_ParamLimits

0x3de7,	// (0x00096bcd) postcard_address2_pane

0x3df3,	// (0x00096bd9) postcard_message2_pane_ParamLimits

0x3df3,	// (0x00096bd9) postcard_message2_pane

0x462e,	// (0x00097414) message2_row_pane_ParamLimits

0x462e,	// (0x00097414) message2_row_pane

0x4649,	// (0x0009742f) address2_row_pane_ParamLimits

0x4649,	// (0x0009742f) address2_row_pane

0xd593,	// (0x000a0379) postcard_message2_row_pane_g1

0xd59b,	// (0x000a0381) postcard_message2_row_pane_t1

0xd593,	// (0x000a0379) address2_row_pane_g1

0xd59b,	// (0x000a0381) address2_row_pane_t1

0x1cb2,	// (0x00094a98) aid_size_cell_vorec

0xa0c4,	// (0x0009ceaa) main_rss_pane

0x465c,	// (0x00097442) rss_list_single_pane_ParamLimits

0x465c,	// (0x00097442) rss_list_single_pane

0xd5a9,	// (0x000a038f) rss_list_single_pane_t1

0xd5b7,	// (0x000a039d) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000a23e7) rss_list_single_pane_t

0xa0c4,	// (0x0009ceaa) main_camera2_pane

0xa0c4,	// (0x0009ceaa) main_video2_pane

0x488e,	// (0x00097674) cams_zoom_pane_cp2_ParamLimits

0x488e,	// (0x00097674) cams_zoom_pane_cp2

0x489a,	// (0x00097680) image2_vga_pane_ParamLimits

0x489a,	// (0x00097680) image2_vga_pane

0x48a9,	// (0x0009768f) main_camera2_pane_g1_ParamLimits

0x48a9,	// (0x0009768f) main_camera2_pane_g1

0x48b5,	// (0x0009769b) main_camera2_pane_g2_ParamLimits

0x48b5,	// (0x0009769b) main_camera2_pane_g2

0x48c1,	// (0x000976a7) main_camera2_pane_g3_ParamLimits

0x48c1,	// (0x000976a7) main_camera2_pane_g3

0x48cd,	// (0x000976b3) main_camera2_pane_g4_ParamLimits

0x48cd,	// (0x000976b3) main_camera2_pane_g4

0x48d9,	// (0x000976bf) main_camera2_pane_g5_ParamLimits

0x48d9,	// (0x000976bf) main_camera2_pane_g5

0x48e5,	// (0x000976cb) main_camera2_pane_g6_ParamLimits

0x48e5,	// (0x000976cb) main_camera2_pane_g6

0x48f1,	// (0x000976d7) main_camera2_pane_g7_ParamLimits

0x48f1,	// (0x000976d7) main_camera2_pane_g7

0x48fd,	// (0x000976e3) main_camera2_pane_g8_ParamLimits

0x48fd,	// (0x000976e3) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000a2408) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000a2408) main_camera2_pane_g

0x4915,	// (0x000976fb) main_camera2_pane_t1_ParamLimits

0x4915,	// (0x000976fb) main_camera2_pane_t1

0x4927,	// (0x0009770d) main_camera2_pane_t2_ParamLimits

0x4927,	// (0x0009770d) main_camera2_pane_t2

0x4939,	// (0x0009771f) main_camera2_pane_t3_ParamLimits

0x4939,	// (0x0009771f) main_camera2_pane_t3

0x494b,	// (0x00097731) main_camera2_pane_t4_ParamLimits

0x494b,	// (0x00097731) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000a241b) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000a241b) main_camera2_pane_t

0x49ad,	// (0x00097793) cams_zoom_pane_cp4_ParamLimits

0x49ad,	// (0x00097793) cams_zoom_pane_cp4

0x49bd,	// (0x000977a3) image2_cif_pane_ParamLimits

0x49bd,	// (0x000977a3) image2_cif_pane

0x49d2,	// (0x000977b8) image2_subqcif_pane_ParamLimits

0x49d2,	// (0x000977b8) image2_subqcif_pane

0x49e1,	// (0x000977c7) main_video2_pane_g1_ParamLimits

0x49e1,	// (0x000977c7) main_video2_pane_g1

0x49f3,	// (0x000977d9) main_video2_pane_g2_ParamLimits

0x49f3,	// (0x000977d9) main_video2_pane_g2

0x4a03,	// (0x000977e9) main_video2_pane_g3_ParamLimits

0x4a03,	// (0x000977e9) main_video2_pane_g3

0x4a13,	// (0x000977f9) main_video2_pane_g4_ParamLimits

0x4a13,	// (0x000977f9) main_video2_pane_g4

0x4a23,	// (0x00097809) main_video2_pane_g5_ParamLimits

0x4a23,	// (0x00097809) main_video2_pane_g5

0x4a33,	// (0x00097819) main_video2_pane_g6_ParamLimits

0x4a33,	// (0x00097819) main_video2_pane_g6

0x0005,

0xf644,	// (0x000a242a) main_video2_pane_g_ParamLimits

0xf644,	// (0x000a242a) main_video2_pane_g

0x4a45,	// (0x0009782b) main_video2_pane_t1_ParamLimits

0x4a45,	// (0x0009782b) main_video2_pane_t1

0x4a5f,	// (0x00097845) main_video2_pane_t2_ParamLimits

0x4a5f,	// (0x00097845) main_video2_pane_t2

0x4a85,	// (0x0009786b) main_video2_pane_t3_ParamLimits

0x4a85,	// (0x0009786b) main_video2_pane_t3

0x0002,

0xf651,	// (0x000a2437) main_video2_pane_t_ParamLimits

0xf651,	// (0x000a2437) main_video2_pane_t

0x4340,	// (0x00097126) call_muted_g2

0x0001,

0xf5f3,	// (0x000a23d9) call_muted_g

0xa0c4,	// (0x0009ceaa) main_mup2_pane

0xd621,	// (0x000a0407) main_mup2_pane_g1_ParamLimits

0xd621,	// (0x000a0407) main_mup2_pane_g1

0x4aab,	// (0x00097891) main_mup2_pane_g2_ParamLimits

0x4aab,	// (0x00097891) main_mup2_pane_g2

0x4d2d,	// (0x00097b13) main_mup_pane_g13_cp1

0x4d35,	// (0x00097b1b) mup_volume_pane_cp1

0x4acb,	// (0x000978b1) main_mup2_pane_g4_ParamLimits

0x4acb,	// (0x000978b1) main_mup2_pane_g4

0x4ae0,	// (0x000978c6) main_mup2_pane_g5_ParamLimits

0x4ae0,	// (0x000978c6) main_mup2_pane_g5

0x4af5,	// (0x000978db) main_mup2_pane_g6_ParamLimits

0x4af5,	// (0x000978db) main_mup2_pane_g6

0x4b0a,	// (0x000978f0) main_mup2_pane_g7_ParamLimits

0x4b0a,	// (0x000978f0) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000a243e) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000a243e) main_mup2_pane_g

0x4b26,	// (0x0009790c) main_mup2_pane_t1_ParamLimits

0x4b26,	// (0x0009790c) main_mup2_pane_t1

0x4b3d,	// (0x00097923) main_mup2_pane_t2_ParamLimits

0x4b3d,	// (0x00097923) main_mup2_pane_t2

0x4b54,	// (0x0009793a) main_mup2_pane_t3_ParamLimits

0x4b54,	// (0x0009793a) main_mup2_pane_t3

0x4b6b,	// (0x00097951) main_mup2_pane_t4_ParamLimits

0x4b6b,	// (0x00097951) main_mup2_pane_t4

0x4b85,	// (0x0009796b) main_mup2_pane_t5_ParamLimits

0x4b85,	// (0x0009796b) main_mup2_pane_t5

0x4b9f,	// (0x00097985) main_mup2_pane_t6_ParamLimits

0x4b9f,	// (0x00097985) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000a244d) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000a244d) main_mup2_pane_t

0x4bd7,	// (0x000979bd) mup2_visualizer_pane_ParamLimits

0x4bd7,	// (0x000979bd) mup2_visualizer_pane

0x4c0d,	// (0x000979f3) mup_progress_pane_cp_ParamLimits

0x4c0d,	// (0x000979f3) mup_progress_pane_cp

0x4d18,	// (0x00097afe) mup_volume_pane_cp_ParamLimits

0x4d18,	// (0x00097afe) mup_volume_pane_cp

0x4c24,	// (0x00097a0a) mup2_visualizer_pane_g1_ParamLimits

0x4c24,	// (0x00097a0a) mup2_visualizer_pane_g1

0xd62d,	// (0x000a0413) mup2_visualizer_pane_g2_ParamLimits

0xd62d,	// (0x000a0413) mup2_visualizer_pane_g2

0x4c39,	// (0x00097a1f) mup2_visualizer_pane_g3_ParamLimits

0x4c39,	// (0x00097a1f) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000a245a) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000a245a) mup2_visualizer_pane_g

0xc458,	// (0x0009f23e) aid_size_cell_fmradio

0x4456,	// (0x0009723c) aid_height_parent_landcape

0xa739,	// (0x0009d51f) wml_content_pane_cp

0xa741,	// (0x0009d527) wml_tabs_pane

0xa74a,	// (0x0009d530) popup_wml_miniature_window

0xa752,	// (0x0009d538) scroll_pane_cp021

0xa766,	// (0x0009d54c) wml_content_pane_comp8

0xa0c4,	// (0x0009ceaa) bg_popup_sub_pane_cp05

0xd64b,	// (0x000a0431) popup_wml_miniature_window_g1

0xd653,	// (0x000a0439) wml_miniature_view_pane

0x4c47,	// (0x00097a2d) aid_size_wml_view

0x4c4f,	// (0x00097a35) wml_miniature_view_pane_g1

0x4c58,	// (0x00097a3e) wml_miniature_view_pane_g2

0x4c61,	// (0x00097a47) wml_miniature_view_pane_g3

0x4c69,	// (0x00097a4f) wml_miniature_view_pane_g4

0x4c71,	// (0x00097a57) wml_miniature_view_pane_g5

0x4c79,	// (0x00097a5f) wml_miniature_view_pane_g6

0x4c81,	// (0x00097a67) wml_miniature_view_pane_g7

0x4c89,	// (0x00097a6f) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000a2461) wml_miniature_view_pane_g

0xd621,	// (0x000a0407) background_graphic_ParamLimits

0xd621,	// (0x000a0407) background_graphic

0xd65b,	// (0x000a0441) wml_tabs_2_pane

0xd664,	// (0x000a044a) wml_tabs_3_pane_ParamLimits

0xd664,	// (0x000a044a) wml_tabs_3_pane

0xd676,	// (0x000a045c) wml_tabs_4_pane_ParamLimits

0xd676,	// (0x000a045c) wml_tabs_4_pane

0xd68c,	// (0x000a0472) wml_tabs_5_pane_ParamLimits

0xd68c,	// (0x000a0472) wml_tabs_5_pane

0xd6a6,	// (0x000a048c) wml_tabs_pane_g2_ParamLimits

0xd6a6,	// (0x000a048c) wml_tabs_pane_g2

0xd6ba,	// (0x000a04a0) wml_tabs_pane_g3_ParamLimits

0xd6ba,	// (0x000a04a0) wml_tabs_pane_g3

0x4c91,	// (0x00097a77) wml_tabs_2_active_pane_ParamLimits

0x4c91,	// (0x00097a77) wml_tabs_2_active_pane

0x4ca1,	// (0x00097a87) wml_tabs_2_passive_pane_ParamLimits

0x4ca1,	// (0x00097a87) wml_tabs_2_passive_pane

0x4cb1,	// (0x00097a97) wml_tabs_3_active_pane_cp_ParamLimits

0x4cb1,	// (0x00097a97) wml_tabs_3_active_pane_cp

0x4cc2,	// (0x00097aa8) wml_tabs_3_passive_pane_ParamLimits

0x4cc2,	// (0x00097aa8) wml_tabs_3_passive_pane

0x4cd3,	// (0x00097ab9) wml_tabs_3_passive_pane_cp_ParamLimits

0x4cd3,	// (0x00097ab9) wml_tabs_3_passive_pane_cp

0x4ce4,	// (0x00097aca) tabs_4_active_pane

0x4cec,	// (0x00097ad2) tabs_4_passive_pane

0x4cf4,	// (0x00097ada) tabs_4_passive_pane_cp

0x4cfc,	// (0x00097ae2) tabs_4_passive_pane_cp2

0x421b,	// (0x00097001) aid_height_text

0x394b,	// (0x00096731) mup_volume_cont_pane_ParamLimits

0x394b,	// (0x00096731) mup_volume_cont_pane

0x137e,	// (0x00094164) aid_size_cell_pinb

0x1388,	// (0x0009416e) aid_size_list_pinb

0x4bf6,	// (0x000979dc) mup2_volume_cont_pane_ParamLimits

0x4bf6,	// (0x000979dc) mup2_volume_cont_pane

0x4d04,	// (0x00097aea) mup2_volume_cont_pane_g1_ParamLimits

0x4d04,	// (0x00097aea) mup2_volume_cont_pane_g1

0x0fa3,	// (0x00093d89) aid_size_cell_touch_ParamLimits

0x0fa3,	// (0x00093d89) aid_size_cell_touch

0x1264,	// (0x0009404a) touch_pane_ParamLimits

0x1264,	// (0x0009404a) touch_pane

0x125a,	// (0x00094040) main_rss2_pane

0xd6d7,	// (0x000a04bd) listscroll_rss2_pane

0xd6e0,	// (0x000a04c6) rss2_navigation_pane

0xd6e8,	// (0x000a04ce) list_rss2_pane

0xbf13,	// (0x0009ecf9) scroll_pane_cp22

0xd6f0,	// (0x000a04d6) rss2_navigation_pane_g1

0xd6f9,	// (0x000a04df) rss2_navigation_pane_g2

0xd701,	// (0x000a04e7) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000a2472) rss2_navigation_pane_g

0xd709,	// (0x000a04ef) rss2_navigation_pane_t1

0x4d3d,	// (0x00097b23) rss2_list_single_pane_ParamLimits

0x4d3d,	// (0x00097b23) rss2_list_single_pane

0xd717,	// (0x000a04fd) rss2_list_single_pane_t2

0xd725,	// (0x000a050b) rss2_list_single_pane_t3_ParamLimits

0xd725,	// (0x000a050b) rss2_list_single_pane_t3

0xd742,	// (0x000a0528) rss2_list_single_pane_t4

0x31c3,	// (0x00095fa9) smil_status_pane_g1

0x446d,	// (0x00097253) main_image2_pane_ParamLimits

0x446d,	// (0x00097253) main_image2_pane

0x4909,	// (0x000976ef) main_camera2_pane_g9_ParamLimits

0x4909,	// (0x000976ef) main_camera2_pane_g9

0x495d,	// (0x00097743) main_camera2_pane_t5_ParamLimits

0x495d,	// (0x00097743) main_camera2_pane_t5

0x496f,	// (0x00097755) main_camera2_pane_t6_ParamLimits

0x496f,	// (0x00097755) main_camera2_pane_t6

0x4d6e,	// (0x00097b54) main_image2_pane_g1_ParamLimits

0x4d6e,	// (0x00097b54) main_image2_pane_g1

0x3fbb,	// (0x00096da1) smil2_video_pane_ParamLimits

0x3fbb,	// (0x00096da1) smil2_video_pane

0x0fd7,	// (0x00093dbd) aid_zoom_text_primary_cp

0x11f5,	// (0x00093fdb) popup_preview_fixed_window

0xa6a2,	// (0x0009d488) im_reading_pane_g1

0x4853,	// (0x00097639) cams2_bc_adjust_pane_cp_ParamLimits

0x4853,	// (0x00097639) cams2_bc_adjust_pane_cp

0x499f,	// (0x00097785) cams2_bc_adjust_pane_ParamLimits

0x499f,	// (0x00097785) cams2_bc_adjust_pane

0xedb1,	// (0x000a1b97) cams2_bc_adjust_pane_g1

0x4d7a,	// (0x00097b60) cams2_slider_pane

0x4d83,	// (0x00097b69) cams2_slider_pane_g1

0x4d8c,	// (0x00097b72) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000a2479) cams2_slider_pane_g

0x148e,	// (0x00094274) calc_display_pane_ParamLimits

0x14ac,	// (0x00094292) calc_paper_pane_ParamLimits

0x14c8,	// (0x000942ae) grid_calc_pane_ParamLimits

0x349f,	// (0x00096285) popup_clock_digital_window_t1_ParamLimits

0xc3f5,	// (0x0009f1db) main_image_pane_t1

0x1474,	// (0x0009425a) aid_size_cell_calc_ParamLimits

0x1474,	// (0x0009425a) aid_size_cell_calc

0x449e,	// (0x00097284) popup_blid_sat_info2_window_ParamLimits

0x449e,	// (0x00097284) popup_blid_sat_info2_window

0xd758,	// (0x000a053e) aid_size_cell_blid

0xd760,	// (0x000a0546) bg_popup_window_pane_cp07

0xd783,	// (0x000a0569) grid_popup_blid_pane

0xd78d,	// (0x000a0573) heading_pane_cp05_ParamLimits

0xd78d,	// (0x000a0573) heading_pane_cp05

0xd857,	// (0x000a063d) cell_popup_blid_pane_ParamLimits

0xd857,	// (0x000a063d) cell_popup_blid_pane

0xd87b,	// (0x000a0661) cell_popup_blid_pane_g1

0xd883,	// (0x000a0669) cell_popup_blid_pane_t1

0x4bbc,	// (0x000979a2) mup2_indicator_pane_ParamLimits

0x4bbc,	// (0x000979a2) mup2_indicator_pane

0xa5a9,	// (0x0009d38f) mup2_visualizer_osc_pane

0xd639,	// (0x000a041f) mup2_visualizer_spec_pane_ParamLimits

0xd639,	// (0x000a041f) mup2_visualizer_spec_pane

0x4da6,	// (0x00097b8c) mup2_spec_half_pane

0x4daf,	// (0x00097b95) mup2_spec_half_pane_cp

0x4db9,	// (0x00097b9f) mup2_spec_bar_pane_ParamLimits

0x4db9,	// (0x00097b9f) mup2_spec_bar_pane

0xd5c5,	// (0x000a03ab) mup2_spec_bar_pane_g1

0xd5cf,	// (0x000a03b5) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000a23ec) mup2_spec_bar_pane_g

0x4dd8,	// (0x00097bbe) mup2_osc_middle_pane

0xd5e1,	// (0x000a03c7) mup2_visualizer_osc_pane_g1

0x9cd1,	// (0x0009cab7) popup_number_entry_window_t1_ParamLimits

0x9ce4,	// (0x0009caca) popup_number_entry_window_t2_ParamLimits

0x9cf6,	// (0x0009cadc) popup_number_entry_window_t3_ParamLimits

0x12bb,	// (0x000940a1) popup_number_entry_window_t5_ParamLimits

0x12bb,	// (0x000940a1) popup_number_entry_window_t5

0xf0ca,	// (0x000a1eb0) popup_number_entry_window_t_ParamLimits

0x9d08,	// (0x0009caee) text_title_cp2_ParamLimits

0x3cbb,	// (0x00096aa1) aid_hotspot_pointer_text2_pane

0x3d49,	// (0x00096b2f) main_viewer_pane_g9_ParamLimits

0x3d49,	// (0x00096b2f) main_viewer_pane_g9

0xba2c,	// (0x0009e812) cale_month_pane_t1_ParamLimits

0xba69,	// (0x0009e84f) bg_cale_pane_ParamLimits

0xba81,	// (0x0009e867) list_cale_pane_ParamLimits

0xba92,	// (0x0009e878) listscroll_cale_day_pane_t1

0xbaa4,	// (0x0009e88a) scroll_pane_cp09_ParamLimits

0x3986,	// (0x0009676c) main_mup_eq_pane_t1_ParamLimits

0x3986,	// (0x0009676c) main_mup_eq_pane_t1

0x39a0,	// (0x00096786) main_mup_eq_pane_t2_ParamLimits

0x39a0,	// (0x00096786) main_mup_eq_pane_t2

0x39ba,	// (0x000967a0) main_mup_eq_pane_t3_ParamLimits

0x39ba,	// (0x000967a0) main_mup_eq_pane_t3

0x39d2,	// (0x000967b8) main_mup_eq_pane_t4_ParamLimits

0x39d2,	// (0x000967b8) main_mup_eq_pane_t4

0x39ea,	// (0x000967d0) main_mup_eq_pane_t5_ParamLimits

0x39ea,	// (0x000967d0) main_mup_eq_pane_t5

0x3a02,	// (0x000967e8) main_mup_eq_pane_t6_ParamLimits

0x3a02,	// (0x000967e8) main_mup_eq_pane_t6

0x3a16,	// (0x000967fc) main_mup_eq_pane_t7_ParamLimits

0x3a16,	// (0x000967fc) main_mup_eq_pane_t7

0x3a2a,	// (0x00096810) main_mup_eq_pane_t8_ParamLimits

0x3a2a,	// (0x00096810) main_mup_eq_pane_t8

0x3a40,	// (0x00096826) main_mup_eq_pane_t9_ParamLimits

0x3a40,	// (0x00096826) main_mup_eq_pane_t9

0x3a58,	// (0x0009683e) main_mup_eq_pane_t10_ParamLimits

0x3a58,	// (0x0009683e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000a223b) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000a223b) main_mup_eq_pane_t

0x3b15,	// (0x000968fb) mup_equalizer_pane_cp5_ParamLimits

0x3b2b,	// (0x00096911) mup_equalizer_pane_cp6_ParamLimits

0x3b43,	// (0x00096929) mup_equalizer_pane_cp7_ParamLimits

0x125a,	// (0x00094040) main_gallery_pane

0xd5ea,	// (0x000a03d0) smil2_volume_pane

0xd5f2,	// (0x000a03d8) smil_status_volume_pane_g1_ParamLimits

0xd605,	// (0x000a03eb) smil_status_volume_pane_g2_ParamLimits

0x46c6,	// (0x000974ac) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000a23f1) smil_status_volume_pane_g_ParamLimits

0xd760,	// (0x000a0546) bg_popup_window_pane_cp07_ParamLimits

0xd76e,	// (0x000a0554) blid_firmament_pane

0x4de1,	// (0x00097bc7) aid_size_cell_gallery_ParamLimits

0x4de1,	// (0x00097bc7) aid_size_cell_gallery

0x4def,	// (0x00097bd5) grid_gallery_pane_ParamLimits

0x4def,	// (0x00097bd5) grid_gallery_pane

0x4dff,	// (0x00097be5) cell_gallery_pane_ParamLimits

0x4dff,	// (0x00097be5) cell_gallery_pane

0xd891,	// (0x000a0677) bg_cell_gallery_focus_pane_ParamLimits

0xd891,	// (0x000a0677) bg_cell_gallery_focus_pane

0xd8a3,	// (0x000a0689) cell_gallery_pane_g1_ParamLimits

0xd8a3,	// (0x000a0689) cell_gallery_pane_g1

0x4e4d,	// (0x00097c33) cell_gallery_pane_g2_ParamLimits

0x4e4d,	// (0x00097c33) cell_gallery_pane_g2

0x4e5a,	// (0x00097c40) cell_gallery_pane_g3_ParamLimits

0x4e5a,	// (0x00097c40) cell_gallery_pane_g3

0xd8af,	// (0x000a0695) cell_gallery_pane_g4_ParamLimits

0xd8af,	// (0x000a0695) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000a249f) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000a249f) cell_gallery_pane_g

0xd8bb,	// (0x000a06a1) bg_cell_gallery_focus_pane_g1

0xd8c3,	// (0x000a06a9) bg_cell_gallery_focus_pane_g2

0xd8cb,	// (0x000a06b1) bg_cell_gallery_focus_pane_g3

0xd8d3,	// (0x000a06b9) bg_cell_gallery_focus_pane_g4

0xd8db,	// (0x000a06c1) bg_cell_gallery_focus_pane_g5

0xd8e3,	// (0x000a06c9) bg_cell_gallery_focus_pane_g6

0xd8eb,	// (0x000a06d1) bg_cell_gallery_focus_pane_g7

0xd8f3,	// (0x000a06d9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000a24a8) bg_cell_gallery_focus_pane_g

0xd8fb,	// (0x000a06e1) aid_firma_cardinal

0xd90f,	// (0x000a06f5) blid_firmament_pane_t1

0xd926,	// (0x000a070c) blid_firmament_pane_t2

0xd93d,	// (0x000a0723) blid_firmament_pane_t3

0xd954,	// (0x000a073a) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000a24b9) blid_firmament_pane_t

0xd96b,	// (0x000a0751) blid_sat_info_pane

0xd97b,	// (0x000a0761) blid_sat_info_pane_g1

0xd97b,	// (0x000a0761) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000a24c2) blid_sat_info_pane_g

0xd985,	// (0x000a076b) blid_sat_info_pane_t1

0xd993,	// (0x000a0779) smil2_volume_content_pane

0xd99c,	// (0x000a0782) smil2_volume_pane_g1

0xd618,	// (0x000a03fe) smil2_volume_content_pane_g1

0xd9a4,	// (0x000a078a) smil2_volume_content_pane_g2

0xd9ad,	// (0x000a0793) smil2_volume_content_pane_g3

0xd9b6,	// (0x000a079c) smil2_volume_content_pane_g4

0xd9bf,	// (0x000a07a5) smil2_volume_content_pane_g5

0xd9c8,	// (0x000a07ae) smil2_volume_content_pane_g6

0xd9d1,	// (0x000a07b7) smil2_volume_content_pane_g7

0xd9da,	// (0x000a07c0) smil2_volume_content_pane_g8

0xd9e3,	// (0x000a07c9) smil2_volume_content_pane_g9

0xd9ec,	// (0x000a07d2) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000a24c7) smil2_volume_content_pane_g

0x1aad,	// (0x00094893) cale_week_day_heading_pane_t1_ParamLimits

0x1ac8,	// (0x000948ae) cale_week_day_heading_pane_t2_ParamLimits

0x1ae3,	// (0x000948c9) cale_week_day_heading_pane_t3_ParamLimits

0x1afe,	// (0x000948e4) cale_week_day_heading_pane_t4_ParamLimits

0x1b19,	// (0x000948ff) cale_week_day_heading_pane_t5_ParamLimits

0x1b34,	// (0x0009491a) cale_week_day_heading_pane_t6_ParamLimits

0x1b4f,	// (0x00094935) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000a1fb7) cale_week_day_heading_pane_t_ParamLimits

0xa54e,	// (0x0009d334) bg_cale_side_pane_ParamLimits

0x1b6a,	// (0x00094950) cale_week_time_pane_t1_ParamLimits

0x1b84,	// (0x0009496a) cale_week_time_pane_t2_ParamLimits

0x1b9e,	// (0x00094984) cale_week_time_pane_t3_ParamLimits

0x1bb8,	// (0x0009499e) cale_week_time_pane_t4_ParamLimits

0x1bd2,	// (0x000949b8) cale_week_time_pane_t5_ParamLimits

0x1bec,	// (0x000949d2) cale_week_time_pane_t6_ParamLimits

0x1c0a,	// (0x000949f0) cale_week_time_pane_t7_ParamLimits

0x1c2c,	// (0x00094a12) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000a1fc6) cale_week_time_pane_t_ParamLimits

0x1c50,	// (0x00094a36) cell_cale_week_pane_g2_ParamLimits

0xa54e,	// (0x0009d334) bg_cale_side_pane_cp01_ParamLimits

0x2f8e,	// (0x00095d74) cale_month_week_pane_t1_ParamLimits

0x2fa7,	// (0x00095d8d) cale_month_week_pane_t2_ParamLimits

0x2fc0,	// (0x00095da6) cale_month_week_pane_t3_ParamLimits

0x2fd9,	// (0x00095dbf) cale_month_week_pane_t4_ParamLimits

0x2ff2,	// (0x00095dd8) cale_month_week_pane_t5_ParamLimits

0x3013,	// (0x00095df9) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000a209b) cale_month_week_pane_t_ParamLimits

0x3180,	// (0x00095f66) cell_cale_month_pane_g1_ParamLimits

0x125a,	// (0x00094040) main_cale_event_viewer_pane

0x9ca7,	// (0x0009ca8d) listscroll_cale_event_viewer_pane

0xd9f5,	// (0x000a07db) list_cale_ev_pane

0xd9fd,	// (0x000a07e3) scroll_pane_cp023

0xda09,	// (0x000a07ef) field_cale_ev_pane_ParamLimits

0xda09,	// (0x000a07ef) field_cale_ev_pane

0xda27,	// (0x000a080d) field_cale_ev_content_pane_ParamLimits

0xda27,	// (0x000a080d) field_cale_ev_content_pane

0xda33,	// (0x000a0819) field_cale_ev_pane_g1_ParamLimits

0xda33,	// (0x000a0819) field_cale_ev_pane_g1

0xda3f,	// (0x000a0825) field_cale_ev_pane_g2_ParamLimits

0xda3f,	// (0x000a0825) field_cale_ev_pane_g2

0xda57,	// (0x000a083d) field_cale_ev_pane_g3_ParamLimits

0xda57,	// (0x000a083d) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000a24dc) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000a24dc) field_cale_ev_pane_g

0xda6f,	// (0x000a0855) field_cale_ev_pane_t1_ParamLimits

0xda6f,	// (0x000a0855) field_cale_ev_pane_t1

0xda86,	// (0x000a086c) field_cale_ev_content_pane_t1_ParamLimits

0xda86,	// (0x000a086c) field_cale_ev_content_pane_t1

0xc2db,	// (0x0009f0c1) bg_button_pane_cp01

0x183e,	// (0x00094624) listscroll_cale_week_pane_ParamLimits

0xa4f9,	// (0x0009d2df) popup_toolbar_window_cp01

0xa51f,	// (0x0009d305) listscroll_cale_week_pane_t1_ParamLimits

0x183e,	// (0x00094624) listscroll_cale_day_pane_ParamLimits

0xa4f9,	// (0x0009d2df) popup_toolbar_window_cp02

0xba92,	// (0x0009e878) listscroll_cale_day_pane_t1_ParamLimits

0x183e,	// (0x00094624) main_cale_month_pane_ParamLimits

0x45a5,	// (0x0009738b) popup_toolbar_window_cp03_ParamLimits

0x45a5,	// (0x0009738b) popup_toolbar_window_cp03

0x3ed1,	// (0x00096cb7) main_image_pane_g2_ParamLimits

0x3ed1,	// (0x00096cb7) main_image_pane_g2

0x3edd,	// (0x00096cc3) main_image_pane_g3_ParamLimits

0x3edd,	// (0x00096cc3) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000a22cd) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000a22cd) main_image_pane_g

0xc3f5,	// (0x0009f1db) main_image_pane_t1_ParamLimits

0x3ee9,	// (0x00096ccf) main_image_pane_t2_ParamLimits

0x3ee9,	// (0x00096ccf) main_image_pane_t2

0x3efb,	// (0x00096ce1) main_image_pane_t3_ParamLimits

0x3efb,	// (0x00096ce1) main_image_pane_t3

0x3f0d,	// (0x00096cf3) main_image_pane_t4_ParamLimits

0x3f0d,	// (0x00096cf3) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000a22d4) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000a22d4) main_image_pane_t

0x3f1f,	// (0x00096d05) popup_image_details_window_cp01

0x3f29,	// (0x00096d0f) popup_toobar_trans_pane_cp01_ParamLimits

0x3f29,	// (0x00096d0f) popup_toobar_trans_pane_cp01

0x44f5,	// (0x000972db) popup_image_details_window_ParamLimits

0x44f5,	// (0x000972db) popup_image_details_window

0x4503,	// (0x000972e9) popup_image_focus_window

0x4845,	// (0x0009762b) camera2_autofocus_pane_ParamLimits

0x4845,	// (0x0009762b) camera2_autofocus_pane

0x9ca7,	// (0x0009ca8d) bg_popup_sub_pane_cp06

0xdaa4,	// (0x000a088a) popup_image_focus_window_g1

0xdaac,	// (0x000a0892) popup_image_focus_window_g2

0xdab4,	// (0x000a089a) popup_image_focus_window_g3

0xdabc,	// (0x000a08a2) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000a24e3) popup_image_focus_window_g

0xdac4,	// (0x000a08aa) popup_image_focus_window_t1

0xdad2,	// (0x000a08b8) popup_image_focus_window_t2

0xdae2,	// (0x000a08c8) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000a24ec) popup_image_focus_window_t

0xdaf0,	// (0x000a08d6) camera2_autofocus_pane_g1

0xa7fa,	// (0x0009d5e0) bg_tb_trans_pane_cp01

0xdafe,	// (0x000a08e4) popup_image_details_window_g1

0xdb11,	// (0x000a08f7) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000a24fe) popup_image_details_window_g

0xdb3a,	// (0x000a0920) popup_image_details_window_t1

0xdb4c,	// (0x000a0932) popup_image_details_window_t2

0xdb65,	// (0x000a094b) popup_image_details_window_t3

0xdb79,	// (0x000a095f) popup_image_details_window_t4

0xdb94,	// (0x000a097a) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000a2505) popup_image_details_window_t

0xa3d0,	// (0x0009d1b6) bg_calc_paper_pane_ParamLimits

0x125a,	// (0x00094040) grid_highlight_pane_cp013

0x15c5,	// (0x000943ab) list_calc_pane_ParamLimits

0x15d7,	// (0x000943bd) scroll_pane_cp024

0xa3e4,	// (0x0009d1ca) bg_calc_display_pane_ParamLimits

0x15df,	// (0x000943c5) calc_display_pane_t1_ParamLimits

0x15f4,	// (0x000943da) calc_display_pane_t2_ParamLimits

0x1609,	// (0x000943ef) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000a1f37) calc_display_pane_t_ParamLimits

0x16e5,	// (0x000944cb) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000a1f54) cell_calc_pane_g

0x16ee,	// (0x000944d4) cell_calc_pane_t1

0xa443,	// (0x0009d229) grid_highlight_pane_cp02_ParamLimits

0xa459,	// (0x0009d23f) toolbar_button_pane_cp01_ParamLimits

0xa459,	// (0x0009d23f) toolbar_button_pane_cp01

0xc43a,	// (0x0009f220) temp_image_control_pane_ParamLimits

0xc43a,	// (0x0009f220) temp_image_control_pane

0x446d,	// (0x00097253) main_mp3_pane

0xdbae,	// (0x000a0994) temp_image_control_pane_g1_ParamLimits

0xdbae,	// (0x000a0994) temp_image_control_pane_g1

0xdbbc,	// (0x000a09a2) temp_image_control_pane_g2_ParamLimits

0xdbbc,	// (0x000a09a2) temp_image_control_pane_g2

0xdbce,	// (0x000a09b4) temp_image_control_pane_g3_ParamLimits

0xdbce,	// (0x000a09b4) temp_image_control_pane_g3

0x4e97,	// (0x00097c7d) temp_image_control_pane_g4_ParamLimits

0x4e97,	// (0x00097c7d) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000a2510) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000a2510) temp_image_control_pane_g

0xdbae,	// (0x000a0994) main_mp3_pane_g1

0x4ea8,	// (0x00097c8e) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000a2519) main_mp3_pane_g

0xdc11,	// (0x000a09f7) main_mp3_pane_t1

0xa5b1,	// (0x0009d397) main_camera_pane_g8_ParamLimits

0xa5b1,	// (0x0009d397) main_camera_pane_g8

0x1edd,	// (0x00094cc3) main_video_pane_g7_ParamLimits

0x1edd,	// (0x00094cc3) main_video_pane_g7

0x498d,	// (0x00097773) main_camera2_pane_t7_ParamLimits

0x498d,	// (0x00097773) main_camera2_pane_t7

0xa6f9,	// (0x0009d4df) scroll_pane_cp025_ParamLimits

0xa6f9,	// (0x0009d4df) scroll_pane_cp025

0xa70d,	// (0x0009d4f3) scroll_pane_cp026_ParamLimits

0xa70d,	// (0x0009d4f3) scroll_pane_cp026

0xa71c,	// (0x0009d502) wml_content_pane_ParamLimits

0x125a,	// (0x00094040) main_touch_calib_pane

0x4f4c,	// (0x00097d32) main_touch_calib_pane_g1

0x4f58,	// (0x00097d3e) main_touch_calib_pane_g2

0x4f64,	// (0x00097d4a) main_touch_calib_pane_g3

0x4f70,	// (0x00097d56) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000a2537) main_touch_calib_pane_g

0x4f7c,	// (0x00097d62) main_touch_calib_pane_t1

0x4f95,	// (0x00097d7b) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000a2540) main_touch_calib_pane_t

0xc015,	// (0x0009edfb) mup_progress_pane_cp02

0xc04a,	// (0x0009ee30) navi_pane_g1

0xc105,	// (0x0009eeeb) navi_pane_mp_t3

0x446d,	// (0x00097253) main_mp3_pane_ParamLimits

0x45e2,	// (0x000973c8) navi_pane_ParamLimits

0xdbae,	// (0x000a0994) main_mp3_pane_g1_ParamLimits

0x4ea8,	// (0x00097c8e) main_mp3_pane_g2_ParamLimits

0x4eb4,	// (0x00097c9a) main_mp3_pane_g3_ParamLimits

0x4eb4,	// (0x00097c9a) main_mp3_pane_g3

0x4ec0,	// (0x00097ca6) main_mp3_pane_g4_ParamLimits

0x4ec0,	// (0x00097ca6) main_mp3_pane_g4

0xdbde,	// (0x000a09c4) main_mp3_pane_g5_ParamLimits

0xdbde,	// (0x000a09c4) main_mp3_pane_g5

0xdbec,	// (0x000a09d2) main_mp3_pane_g6_ParamLimits

0xdbec,	// (0x000a09d2) main_mp3_pane_g6

0xdbf9,	// (0x000a09df) main_mp3_pane_g7_ParamLimits

0xdbf9,	// (0x000a09df) main_mp3_pane_g7

0xdc05,	// (0x000a09eb) main_mp3_pane_g8_ParamLimits

0xdc05,	// (0x000a09eb) main_mp3_pane_g8

0xf733,	// (0x000a2519) main_mp3_pane_g_ParamLimits

0x4ecc,	// (0x00097cb2) main_mp3_pane_t2

0x4edc,	// (0x00097cc2) main_mp3_pane_t3

0xdc1f,	// (0x000a0a05) main_mp3_pane_t4

0xdc2d,	// (0x000a0a13) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000a252a) main_mp3_pane_t

0xdc3b,	// (0x000a0a21) mup_progress_pane_cp01

0x0fd7,	// (0x00093dbd) aid_zoom_text_secondary2

0xd9f5,	// (0x000a07db) list_cale_ev2_pane

0xd9fd,	// (0x000a07e3) scroll_pane_cp023_ParamLimits

0x4ff0,	// (0x00097dd6) field_cale_ev2_pane_ParamLimits

0x4ff0,	// (0x00097dd6) field_cale_ev2_pane

0x5019,	// (0x00097dff) field_cale_ev2_pane_g1_ParamLimits

0x5019,	// (0x00097dff) field_cale_ev2_pane_g1

0x5025,	// (0x00097e0b) field_cale_ev2_pane_g2_ParamLimits

0x5025,	// (0x00097e0b) field_cale_ev2_pane_g2

0x503d,	// (0x00097e23) field_cale_ev2_pane_g3_ParamLimits

0x503d,	// (0x00097e23) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000a254b) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000a254b) field_cale_ev2_pane_g

0xdc4f,	// (0x000a0a35) field_cale_ev2_pane_t1_ParamLimits

0xdc4f,	// (0x000a0a35) field_cale_ev2_pane_t1

0xdc66,	// (0x000a0a4c) field_cale_ev2_pane_t2_ParamLimits

0xdc66,	// (0x000a0a4c) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000a2554) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000a2554) field_cale_ev2_pane_t

0x3db1,	// (0x00096b97) main_postcard_pane_g5_ParamLimits

0x3db1,	// (0x00096b97) main_postcard_pane_g5

0x3dbf,	// (0x00096ba5) main_postcard_pane_g6_ParamLimits

0x3dbf,	// (0x00096ba5) main_postcard_pane_g6

0x1d27,	// (0x00094b0d) camera2_autofocus_pane_cp_ParamLimits

0x1d27,	// (0x00094b0d) camera2_autofocus_pane_cp

0x446d,	// (0x00097253) main_mup3_pane

0x5074,	// (0x00097e5a) main_mup3_pane_g1_ParamLimits

0x5074,	// (0x00097e5a) main_mup3_pane_g1

0x5095,	// (0x00097e7b) main_mup3_pane_g2_ParamLimits

0x5095,	// (0x00097e7b) main_mup3_pane_g2

0x510d,	// (0x00097ef3) main_mup3_pane_g3_ParamLimits

0x510d,	// (0x00097ef3) main_mup3_pane_g3

0x5150,	// (0x00097f36) main_mup3_pane_g4_ParamLimits

0x5150,	// (0x00097f36) main_mup3_pane_g4

0x5193,	// (0x00097f79) main_mup3_pane_g5_ParamLimits

0x5193,	// (0x00097f79) main_mup3_pane_g5

0x51d6,	// (0x00097fbc) main_mup3_pane_g6_ParamLimits

0x51d6,	// (0x00097fbc) main_mup3_pane_g6

0xdc9b,	// (0x000a0a81) main_mup3_pane_g7_ParamLimits

0xdc9b,	// (0x000a0a81) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000a2564) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000a2564) main_mup3_pane_g

0x524c,	// (0x00098032) main_mup3_pane_t1_ParamLimits

0x524c,	// (0x00098032) main_mup3_pane_t1

0x52bb,	// (0x000980a1) main_mup3_pane_t2_ParamLimits

0x52bb,	// (0x000980a1) main_mup3_pane_t2

0x5384,	// (0x0009816a) main_mup3_pane_t4_ParamLimits

0x5384,	// (0x0009816a) main_mup3_pane_t4

0x53d2,	// (0x000981b8) main_mup3_pane_t5_ParamLimits

0x53d2,	// (0x000981b8) main_mup3_pane_t5

0x5482,	// (0x00098268) main_mup3_pane_t6_ParamLimits

0x5482,	// (0x00098268) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000a2575) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000a2575) main_mup3_pane_t

0x552e,	// (0x00098314) mup3_progress_pane_ParamLimits

0x552e,	// (0x00098314) mup3_progress_pane

0x55ac,	// (0x00098392) popup_mup3_control_window_ParamLimits

0x55ac,	// (0x00098392) popup_mup3_control_window

0xdca9,	// (0x000a0a8f) popup_mup3_text_window

0x55c5,	// (0x000983ab) mup3_progress_pane_t1

0x55e4,	// (0x000983ca) mup3_progress_pane_t2

0xdcb1,	// (0x000a0a97) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000a2582) mup3_progress_pane_t

0xdcce,	// (0x000a0ab4) mup_progress_pane_cp03

0x9ca7,	// (0x0009ca8d) bg_tb_trans_pane_cp04

0x5603,	// (0x000983e9) mup3_volume_pane

0x560b,	// (0x000983f1) popup_mup3_control_window_g1

0x5614,	// (0x000983fa) mup3_volume_pane_g1

0x561d,	// (0x00098403) mup3_volume_pane_g2

0x5626,	// (0x0009840c) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000a2589) mup3_volume_pane_g

0x9ca7,	// (0x0009ca8d) bg_tb_trans_pane_cp03

0xdcde,	// (0x000a0ac4) popup_mup3_text_window_g1

0xdce6,	// (0x000a0acc) popup_mup3_text_window_t1

0xa42c,	// (0x0009d212) list_calc_item_pane_g1_ParamLimits

0xd6ce,	// (0x000a04b4) mup_volume_pane_cp_g1

0x4fae,	// (0x00097d94) main_touch_calib_pane_t3

0x4fc4,	// (0x00097daa) main_touch_calib_pane_t4

0x4fda,	// (0x00097dc0) main_touch_calib_pane_t5

0x0f8f,	// (0x00093d75) aid_cell_size_toolbar2

0x0f97,	// (0x00093d7d) aid_popup3_width_pane

0x0e9f,	// (0x00093c85) aid_zoom_text_msg_primary

0x1cfc,	// (0x00094ae2) vorec_t7

0xa3f0,	// (0x0009d1d6) bg_calc_paper_pane_g1_ParamLimits

0xa3fc,	// (0x0009d1e2) bg_calc_paper_pane_g2_ParamLimits

0xa408,	// (0x0009d1ee) bg_calc_paper_pane_g3_ParamLimits

0xa414,	// (0x0009d1fa) bg_calc_paper_pane_g4_ParamLimits

0xa420,	// (0x0009d206) bg_calc_paper_pane_g5_ParamLimits

0x1648,	// (0x0009442e) bg_calc_paper_pane_g6_ParamLimits

0x1659,	// (0x0009443f) bg_calc_paper_pane_g7_ParamLimits

0x166a,	// (0x00094450) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000a1f3e) bg_calc_paper_pane_g_ParamLimits

0x167b,	// (0x00094461) calc_bg_paper_pane_g9_ParamLimits

0x1e0e,	// (0x00094bf4) image_qvga_pane_ParamLimits

0x1e0e,	// (0x00094bf4) image_qvga_pane

0xa31f,	// (0x0009d105) bg_popup_sub_pane_cp04_ParamLimits

0xc371,	// (0x0009f157) popup_mup_playback_window_g1_ParamLimits

0xc37d,	// (0x0009f163) popup_mup_playback_window_t1_ParamLimits

0xc392,	// (0x0009f178) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000a22c8) popup_mup_playback_window_t_ParamLimits

0x4abc,	// (0x000978a2) main_mup2_pane_g3_ParamLimits

0x4abc,	// (0x000978a2) main_mup2_pane_g3

0x21bd,	// (0x00094fa3) popup_toolbar_window_cp04

0xc774,	// (0x0009f55a) popup_call2_audio_second_window_g3_ParamLimits

0xc774,	// (0x0009f55a) popup_call2_audio_second_window_g3

0xcb7e,	// (0x0009f964) popup_call2_audio_first_window_g4_ParamLimits

0xcb7e,	// (0x0009f964) popup_call2_audio_first_window_g4

0xd1fd,	// (0x0009ffe3) popup_call2_audio_in_window_g4_ParamLimits

0xd1fd,	// (0x0009ffe3) popup_call2_audio_in_window_g4

0x3ec4,	// (0x00096caa) aid_area_sk_bg_cut_ParamLimits

0x3ec4,	// (0x00096caa) aid_area_sk_bg_cut

0xc3a7,	// (0x0009f18d) aid_area_sk_bg_cut_2_ParamLimits

0xc3a7,	// (0x0009f18d) aid_area_sk_bg_cut_2

0x4e3d,	// (0x00097c23) aid_placing_details_win

0x4e45,	// (0x00097c2b) aid_placing_details_win_2

0xdaf0,	// (0x000a08d6) camera2_autofocus_pane_g1_ParamLimits

0x11e6,	// (0x00093fcc) popup_fixed_preview_cale_window_ParamLimits

0x11e6,	// (0x00093fcc) popup_fixed_preview_cale_window

0xc183,	// (0x0009ef69) navi_slider_pane_g3

0xc18c,	// (0x0009ef72) navi_slider_pane_g4

0xc195,	// (0x0009ef7b) navi_slider_pane_g5

0xc183,	// (0x0009ef69) navi_slider_pane_g6

0x371a,	// (0x00096500) navi_slider_pane_g7

0xc2a8,	// (0x0009f08e) mup_scale_pane_g3

0xc2b1,	// (0x0009f097) mup_scale_pane_g4

0xc2ba,	// (0x0009f0a0) mup_scale_pane_g5

0x3b5b,	// (0x00096941) mup_scale_pane_g6

0x3b64,	// (0x0009694a) mup_scale_pane_g7

0xc183,	// (0x0009ef69) cams2_slider_pane_g3

0xd750,	// (0x000a0536) cams2_slider_pane_g4

0x4d95,	// (0x00097b7b) cams2_slider_pane_g5

0xc183,	// (0x0009ef69) cams2_slider_pane_g6

0x4d9d,	// (0x00097b83) cams2_slider_pane_g7

0xd97b,	// (0x000a0761) camera2_autofocus_pane_cp_g1

0xd55e,	// (0x000a0344) bg_popup_preview_window_pane_cp02_ParamLimits

0xd55e,	// (0x000a0344) bg_popup_preview_window_pane_cp02

0xdcf4,	// (0x000a0ada) list_fp_cale_pane_ParamLimits

0xdcf4,	// (0x000a0ada) list_fp_cale_pane

0xdd00,	// (0x000a0ae6) popup_fixed_preview_cale_window_t1_ParamLimits

0xdd00,	// (0x000a0ae6) popup_fixed_preview_cale_window_t1

0x562f,	// (0x00098415) popup_fixed_preview_cale_window_t2_ParamLimits

0x562f,	// (0x00098415) popup_fixed_preview_cale_window_t2

0x5644,	// (0x0009842a) popup_fixed_preview_cale_window_t3_ParamLimits

0x5644,	// (0x0009842a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000a2590) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000a2590) popup_fixed_preview_cale_window_t

0x5659,	// (0x0009843f) list_single_fp_cale_pane_ParamLimits

0x5659,	// (0x0009843f) list_single_fp_cale_pane

0xdd1e,	// (0x000a0b04) list_single_fp_cale_pane_g1_ParamLimits

0xdd1e,	// (0x000a0b04) list_single_fp_cale_pane_g1

0xdd2a,	// (0x000a0b10) list_single_fp_cale_pane_g2_ParamLimits

0xdd2a,	// (0x000a0b10) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000a2597) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000a2597) list_single_fp_cale_pane_g

0xdd43,	// (0x000a0b29) list_single_fp_cale_pane_t1_ParamLimits

0xdd43,	// (0x000a0b29) list_single_fp_cale_pane_t1

0xdd55,	// (0x000a0b3b) list_single_fp_cale_pane_t2_ParamLimits

0xdd55,	// (0x000a0b3b) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000a259e) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000a259e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x125a,	// (0x00094040) main_dialer_pane

0x566c,	// (0x00098452) aid_cell_size_keypad

0x5676,	// (0x0009845c) dialer_ne_pane

0x5680,	// (0x00098466) grid_dialer_command_1_pane

0x5688,	// (0x0009846e) grid_dialer_command_2_pane

0x5690,	// (0x00098476) grid_dialer_keypad_pane

0x56a2,	// (0x00098488) bg_popup_call_pane_cp06_ParamLimits

0x56a2,	// (0x00098488) bg_popup_call_pane_cp06

0x56ae,	// (0x00098494) dialer_ne_clear_pane_ParamLimits

0x56ae,	// (0x00098494) dialer_ne_clear_pane

0xdd88,	// (0x000a0b6e) dialer_ne_pane_g1

0xdd90,	// (0x000a0b76) dialer_ne_pane_t1_ParamLimits

0xdd90,	// (0x000a0b76) dialer_ne_pane_t1

0x56ba,	// (0x000984a0) dialer_ne_pane_t2_ParamLimits

0x56ba,	// (0x000984a0) dialer_ne_pane_t2

0x56d7,	// (0x000984bd) dialer_ne_pane_t3_ParamLimits

0x56d7,	// (0x000984bd) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000a25a3) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000a25a3) dialer_ne_pane_t

0x56fb,	// (0x000984e1) dialer_ne_pane_t3_copy1_ParamLimits

0x56fb,	// (0x000984e1) dialer_ne_pane_t3_copy1

0x571f,	// (0x00098505) cell_dialer_keypad_pane_ParamLimits

0x571f,	// (0x00098505) cell_dialer_keypad_pane

0x5736,	// (0x0009851c) cell_dialer_command_1_pane_ParamLimits

0x5736,	// (0x0009851c) cell_dialer_command_1_pane

0x574c,	// (0x00098532) cell_dialer_command_2_pane_ParamLimits

0x574c,	// (0x00098532) cell_dialer_command_2_pane

0xdda2,	// (0x000a0b88) bg_button_pane_cp02_ParamLimits

0xdda2,	// (0x000a0b88) bg_button_pane_cp02

0x575b,	// (0x00098541) cell_dialer_keypad_pane_g1_ParamLimits

0x575b,	// (0x00098541) cell_dialer_keypad_pane_g1

0xdda2,	// (0x000a0b88) bg_button_pane_cp03_ParamLimits

0xdda2,	// (0x000a0b88) bg_button_pane_cp03

0x5770,	// (0x00098556) cell_dialer_command_1_pane_g1_ParamLimits

0x5770,	// (0x00098556) cell_dialer_command_1_pane_g1

0xddae,	// (0x000a0b94) bg_button_pane_cp04

0x5784,	// (0x0009856a) cell_dialer_command_2_pane_g1

0xa5a9,	// (0x0009d38f) bg_button_pane_cp06

0xddb6,	// (0x000a0b9c) dialer_ne_clear_pane_g1

0xc056,	// (0x0009ee3c) navi_pane_g2

0xc084,	// (0x0009ee6a) navi_pane_g3

0x0002,

0xf3e5,	// (0x000a21cb) navi_pane_g

0xc113,	// (0x0009eef9) navi_pane_mv_g2

0xc13a,	// (0x0009ef20) navi_pane_mv_g5

0x36e5,	// (0x000964cb) navi_pane_mv_t1

0xa3e4,	// (0x0009d1ca) main_clock2_pane

0x57c4,	// (0x000985aa) main_clock2_list_pane_ParamLimits

0x57c4,	// (0x000985aa) main_clock2_list_pane

0x57ec,	// (0x000985d2) main_clock2_pane_t1_ParamLimits

0x57ec,	// (0x000985d2) main_clock2_pane_t1

0x580e,	// (0x000985f4) main_clock2_pane_t2_ParamLimits

0x580e,	// (0x000985f4) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000a25af) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000a25af) main_clock2_pane_t

0x5869,	// (0x0009864f) popup_clock_analogue_window_cp03_ParamLimits

0x5869,	// (0x0009864f) popup_clock_analogue_window_cp03

0x5887,	// (0x0009866d) popup_clock_digital_window_cp02_ParamLimits

0x5887,	// (0x0009866d) popup_clock_digital_window_cp02

0x58f4,	// (0x000986da) main_clock2_list_single_pane_ParamLimits

0x58f4,	// (0x000986da) main_clock2_list_single_pane

0xa5a9,	// (0x0009d38f) list_highlight_pane_cp05

0xddf4,	// (0x000a0bda) main_clock2_list_single_pane_t1

0x21bd,	// (0x00094fa3) popup_toolbar_window_cp04_ParamLimits

0x4e67,	// (0x00097c4d) camera2_autofocus_pane_g2_ParamLimits

0x4e67,	// (0x00097c4d) camera2_autofocus_pane_g2

0x4e73,	// (0x00097c59) camera2_autofocus_pane_g3_ParamLimits

0x4e73,	// (0x00097c59) camera2_autofocus_pane_g3

0x4e7f,	// (0x00097c65) camera2_autofocus_pane_g4_ParamLimits

0x4e7f,	// (0x00097c65) camera2_autofocus_pane_g4

0x4e8b,	// (0x00097c71) camera2_autofocus_pane_g5_ParamLimits

0x4e8b,	// (0x00097c71) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000a24f3) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000a24f3) camera2_autofocus_pane_g

0xdc7b,	// (0x000a0a61) camera2_autofocus_pane_cp_g2

0xdc83,	// (0x000a0a69) camera2_autofocus_pane_cp_g3

0xdc8b,	// (0x000a0a71) camera2_autofocus_pane_cp_g4

0xdc93,	// (0x000a0a79) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000a2559) camera2_autofocus_pane_cp_g

0x569a,	// (0x00098480) popup_dialer_spcha_window

0x9ca7,	// (0x0009ca8d) bg_popup_sub_pane_cp07

0xde02,	// (0x000a0be8) list_spcha_pane

0xde0a,	// (0x000a0bf0) list_single_spcha_pane_ParamLimits

0xde0a,	// (0x000a0bf0) list_single_spcha_pane

0x9ca7,	// (0x0009ca8d) list_highlight_pane_cp06

0xde1b,	// (0x000a0c01) list_single_spcha_pane_t1

0xcfa7,	// (0x0009fd8d) popup_call2_audio_out_window_g4_ParamLimits

0xcfa7,	// (0x0009fd8d) popup_call2_audio_out_window_g4

0x125a,	// (0x00094040) main_imed2_pane

0x450b,	// (0x000972f1) popup_imed_adjust2_window

0x451e,	// (0x00097304) popup_imed_trans_window_ParamLimits

0x451e,	// (0x00097304) popup_imed_trans_window

0xd7b9,	// (0x000a059f) popup_blid_sat_info2_window_t1

0xd7c7,	// (0x000a05ad) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000a2488) popup_blid_sat_info2_window_t

0x599d,	// (0x00098783) aid_size_cell_colour_35

0x59b7,	// (0x0009879d) aid_size_cell_colour_112

0x59ce,	// (0x000987b4) aid_size_cell_effect

0xa7fa,	// (0x0009d5e0) bg_tb_trans_pane_cp02

0xbf4f,	// (0x0009ed35) heading_imed_pane

0x59e8,	// (0x000987ce) listscroll_imed_pane

0xde29,	// (0x000a0c0f) heading_imed_pane_g1

0xde31,	// (0x000a0c17) heading_imed_pane_t1

0xde3f,	// (0x000a0c25) grid_imed_colour_35_pane_ParamLimits

0xde3f,	// (0x000a0c25) grid_imed_colour_35_pane

0x59f4,	// (0x000987da) grid_imed_effect_pane

0xde56,	// (0x000a0c3c) list_imed_aspect_pane

0x5a04,	// (0x000987ea) scroll_pane_cp027_ParamLimits

0x5a04,	// (0x000987ea) scroll_pane_cp027

0x5a10,	// (0x000987f6) cell_imed_effect_pane_ParamLimits

0x5a10,	// (0x000987f6) cell_imed_effect_pane

0xde5e,	// (0x000a0c44) cell_imed_colour_pane_ParamLimits

0xde5e,	// (0x000a0c44) cell_imed_colour_pane

0xdea0,	// (0x000a0c86) cell_imed_colour_pane_g1_ParamLimits

0xdea0,	// (0x000a0c86) cell_imed_colour_pane_g1

0xdeb1,	// (0x000a0c97) hgihlgiht_grid_pane_cp016_ParamLimits

0xdeb1,	// (0x000a0c97) hgihlgiht_grid_pane_cp016

0x5a28,	// (0x0009880e) cell_imed_effect_pane_g1

0x5a30,	// (0x00098816) grid_highlight_pane_cp017

0xdec2,	// (0x000a0ca8) list_imed_single_pane_ParamLimits

0xdec2,	// (0x000a0ca8) list_imed_single_pane

0x9ca7,	// (0x0009ca8d) list_highlight_pane_cp07

0xded7,	// (0x000a0cbd) list_imed_aspect_pane_comp1_t1

0xd56a,	// (0x000a0350) bg_tb_trans_pane_cp05

0xdef9,	// (0x000a0cdf) popup_imed_adjust2_window_g1

0xdf20,	// (0x000a0d06) popup_imed_adjust2_window_t1

0xdf38,	// (0x000a0d1e) slider_imed_adjust_pane

0xdf4c,	// (0x000a0d32) slider_imed_adjust_pane_g1

0xdf5c,	// (0x000a0d42) slider_imed_adjust_pane_g2

0xdf6c,	// (0x000a0d52) slider_imed_adjust_pane_g3

0xdf7d,	// (0x000a0d63) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000a25cc) slider_imed_adjust_pane_g

0x5a39,	// (0x0009881f) aid_size_cell_clipart2

0x5a45,	// (0x0009882b) grid_imed_clipart_pane

0xdf8e,	// (0x000a0d74) scroll_pane_cp031

0x5a4f,	// (0x00098835) cell_imed_clipart_pane_ParamLimits

0x5a4f,	// (0x00098835) cell_imed_clipart_pane

0x5a71,	// (0x00098857) cell_imed_clipart_pane_g1

0x9ca7,	// (0x0009ca8d) grid_highlight_pane_cp014

0x57d0,	// (0x000985b6) main_clock2_pane_g1_ParamLimits

0x57d0,	// (0x000985b6) main_clock2_pane_g1

0x589f,	// (0x00098685) aid_call2_pane_cp10

0x58b1,	// (0x00098697) aid_call_pane_cp10

0xbfb7,	// (0x0009ed9d) popup_clock_analogue_window_cp10_g1

0xbfb7,	// (0x0009ed9d) popup_clock_analogue_window_cp10_g2

0x58c3,	// (0x000986a9) popup_clock_analogue_window_cp10_g3

0x58c3,	// (0x000986a9) popup_clock_analogue_window_cp10_g4

0xbfb7,	// (0x0009ed9d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000a25ba) popup_clock_analogue_window_cp10_g

0x58d5,	// (0x000986bb) popup_clock_analogue_window_cp10_t1

0x5906,	// (0x000986ec) clock_digital_number_pane_cp10_ParamLimits

0x5906,	// (0x000986ec) clock_digital_number_pane_cp10

0x591e,	// (0x00098704) clock_digital_number_pane_cp11_ParamLimits

0x591e,	// (0x00098704) clock_digital_number_pane_cp11

0x5936,	// (0x0009871c) clock_digital_number_pane_cp12_ParamLimits

0x5936,	// (0x0009871c) clock_digital_number_pane_cp12

0x594e,	// (0x00098734) clock_digital_number_pane_cp13_ParamLimits

0x594e,	// (0x00098734) clock_digital_number_pane_cp13

0x5966,	// (0x0009874c) clock_digital_separator_pane_cp10_ParamLimits

0x5966,	// (0x0009874c) clock_digital_separator_pane_cp10

0x597e,	// (0x00098764) popup_clock_digital_window_cp02_t1_ParamLimits

0x597e,	// (0x00098764) popup_clock_digital_window_cp02_t1

0xa317,	// (0x0009d0fd) clock_digital_number_pane_cp10_g1

0xa317,	// (0x0009d0fd) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000a25d5) clock_digital_number_pane_cp10_g

0xa317,	// (0x0009d0fd) clock_digital_separator_pane_cp10_g1

0xa317,	// (0x0009d0fd) clock_digital_separator_pane_g2_cp10

0xc142,	// (0x0009ef28) navi_pane_vded_g4

0xc14b,	// (0x0009ef31) navi_pane_vded_g5

0xc154,	// (0x0009ef3a) navi_pane_vded_t1

0x125a,	// (0x00094040) main_vded_pane

0x5a7a,	// (0x00098860) main_vded_pane_g1

0x5a86,	// (0x0009886c) main_vded_pane_g2

0x5a90,	// (0x00098876) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000a25da) main_vded_pane_g

0x5a9a,	// (0x00098880) main_vded_pane_t1

0x5aa8,	// (0x0009888e) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000a25e1) main_vded_pane_t

0x5ab6,	// (0x0009889c) vded_slider_pane

0x5ac0,	// (0x000988a6) vded_video_pane

0xdf96,	// (0x000a0d7c) vded_video_pane_g1

0x5aca,	// (0x000988b0) vded_video_pane_g2

0xd97b,	// (0x000a0761) vded_video_pane_g3

0x0002,

0xf800,	// (0x000a25e6) vded_video_pane_g

0xdfa0,	// (0x000a0d86) vded_slider_pane_g1

0xd6ce,	// (0x000a04b4) vded_slider_pane_g2

0xdfa9,	// (0x000a0d8f) vded_slider_pane_g3

0xdfb2,	// (0x000a0d98) vded_slider_pane_g4

0xdfbb,	// (0x000a0da1) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000a25ed) vded_slider_pane_g

0x559e,	// (0x00098384) mup3_rocker_pane_ParamLimits

0x559e,	// (0x00098384) mup3_rocker_pane

0x5ad3,	// (0x000988b9) mup3_control_keys_pane_g1

0x5adb,	// (0x000988c1) mup3_control_keys_pane_g2

0x5ae3,	// (0x000988c9) mup3_control_keys_pane_g3

0x5aeb,	// (0x000988d1) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000a25f8) mup3_control_keys_pane_g

0x120e,	// (0x00093ff4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x120e,	// (0x00093ff4) popup_toolbar2_fixed_window_cp01

0x55b8,	// (0x0009839e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55b8,	// (0x0009839e) popup_toolbar2_fixed_window_cp02

0xc8e6,	// (0x0009f6cc) popup_call2_audio_second_window_t4_ParamLimits

0xc8e6,	// (0x0009f6cc) popup_call2_audio_second_window_t4

0xce14,	// (0x0009fbfa) popup_call2_audio_first_window_t6_ParamLimits

0xce14,	// (0x0009fbfa) popup_call2_audio_first_window_t6

0xd0aa,	// (0x0009fe90) popup_call2_audio_out_window_t6_ParamLimits

0xd0aa,	// (0x0009fe90) popup_call2_audio_out_window_t6

0x125a,	// (0x00094040) main_vitu_pane

0x5afb,	// (0x000988e1) aid_size_cell_itu_ParamLimits

0x5afb,	// (0x000988e1) aid_size_cell_itu

0xeac4,	// (0x000a18aa) bg_popup_window_pane_cp08_ParamLimits

0xeac4,	// (0x000a18aa) bg_popup_window_pane_cp08

0x5b09,	// (0x000988ef) field_vitu_entry_pane_ParamLimits

0x5b09,	// (0x000988ef) field_vitu_entry_pane

0x5b18,	// (0x000988fe) grid_vitu_function_pane_ParamLimits

0x5b18,	// (0x000988fe) grid_vitu_function_pane

0x5b28,	// (0x0009890e) grid_vitu_itu_pane_ParamLimits

0x5b28,	// (0x0009890e) grid_vitu_itu_pane

0x5b38,	// (0x0009891e) cell_vitu_itu_pane_ParamLimits

0x5b38,	// (0x0009891e) cell_vitu_itu_pane

0x5b4d,	// (0x00098933) cell_vitu_function_pane_ParamLimits

0x5b4d,	// (0x00098933) cell_vitu_function_pane

0xa7fa,	// (0x0009d5e0) bg_popup_sub_pane_cp08_ParamLimits

0xa7fa,	// (0x0009d5e0) bg_popup_sub_pane_cp08

0x5b5f,	// (0x00098945) field_vitu_entry_pane_t1_ParamLimits

0x5b5f,	// (0x00098945) field_vitu_entry_pane_t1

0xdfdc,	// (0x000a0dc2) field_vitu_entry_pane_t2_ParamLimits

0xdfdc,	// (0x000a0dc2) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000a2606) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000a2606) field_vitu_entry_pane_t

0xdff9,	// (0x000a0ddf) bg_button_pane_cp05_ParamLimits

0xdff9,	// (0x000a0ddf) bg_button_pane_cp05

0x5b7b,	// (0x00098961) cell_vitu_itu_pane_g1

0x5b93,	// (0x00098979) cell_vitu_itu_pane_t1_ParamLimits

0x5b93,	// (0x00098979) cell_vitu_itu_pane_t1

0x5ba5,	// (0x0009898b) cell_vitu_itu_pane_t2_ParamLimits

0x5ba5,	// (0x0009898b) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000a260b) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000a260b) cell_vitu_itu_pane_t

0xe007,	// (0x000a0ded) bg_button_pane_cp07

0x5bda,	// (0x000989c0) cell_vitu_function_pane_g1

0x14ec,	// (0x000942d2) main_calc_pane_g1

0x0fcb,	// (0x00093db1) aid_visual_content_pane

0x125a,	// (0x00094040) main_vradio_pane

0x5be3,	// (0x000989c9) main_vradio_pane_g1_ParamLimits

0x5be3,	// (0x000989c9) main_vradio_pane_g1

0xe011,	// (0x000a0df7) main_vradio_pane_g2_ParamLimits

0xe011,	// (0x000a0df7) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000a2612) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000a2612) main_vradio_pane_g

0x5bf3,	// (0x000989d9) main_vradio_pane_t1_ParamLimits

0x5bf3,	// (0x000989d9) main_vradio_pane_t1

0x5c05,	// (0x000989eb) main_vradio_pane_t2_ParamLimits

0x5c05,	// (0x000989eb) main_vradio_pane_t2

0xe01e,	// (0x000a0e04) main_vradio_pane_t3_ParamLimits

0xe01e,	// (0x000a0e04) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000a2617) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000a2617) main_vradio_pane_t

0x5c17,	// (0x000989fd) vradio_rocker_control_pane_ParamLimits

0x5c17,	// (0x000989fd) vradio_rocker_control_pane

0x5c23,	// (0x00098a09) vradio_station_info_pane_ParamLimits

0x5c23,	// (0x00098a09) vradio_station_info_pane

0xe032,	// (0x000a0e18) vradio_frequency_info_pane_ParamLimits

0xe032,	// (0x000a0e18) vradio_frequency_info_pane

0xd97b,	// (0x000a0761) vradio_station_info_pane_g1

0xe041,	// (0x000a0e27) vradio_station_info_pane_t1_ParamLimits

0xe041,	// (0x000a0e27) vradio_station_info_pane_t1

0xe063,	// (0x000a0e49) vradio_station_info_pane_t2_ParamLimits

0xe063,	// (0x000a0e49) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000a261e) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000a261e) vradio_station_info_pane_t

0xe075,	// (0x000a0e5b) vradio_tuning_pane

0xe07d,	// (0x000a0e63) vradio_rocker_control_pane_g1

0xe085,	// (0x000a0e6b) vradio_rocker_control_pane_g2

0xe08d,	// (0x000a0e73) vradio_rocker_control_pane_g3

0xe095,	// (0x000a0e7b) vradio_rocker_control_pane_g4

0xe09d,	// (0x000a0e83) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000a2623) vradio_rocker_control_pane_g

0x5c32,	// (0x00098a18) vradio_frequency_info_pane_g1

0xe0a5,	// (0x000a0e8b) vradio_frequency_info_pane_t1_ParamLimits

0xe0a5,	// (0x000a0e8b) vradio_frequency_info_pane_t1

0x5c3c,	// (0x00098a22) vradio_tuning_pane_g1

0x5c45,	// (0x00098a2b) vradio_tuning_pane_t1

0x1014,	// (0x00093dfa) area_side_right_pane_ParamLimits

0x1014,	// (0x00093dfa) area_side_right_pane

0xd525,	// (0x000a030b) status_small_pane_g1

0xd52d,	// (0x000a0313) status_small_pane_g2

0xd536,	// (0x000a031c) status_small_pane_g3

0xd53f,	// (0x000a0325) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000a23de) status_small_pane_g

0xd548,	// (0x000a032e) status_small_pane_t1

0x125a,	// (0x00094040) main_video3_pane

0xe0b9,	// (0x000a0e9f) cams_zoom_vslider_pane

0xe0c1,	// (0x000a0ea7) image3_wide_pane_ParamLimits

0xe0c1,	// (0x000a0ea7) image3_wide_pane

0xe0db,	// (0x000a0ec1) image3_wide_small_pane

0xe0e7,	// (0x000a0ecd) main_video3_pane_g1_ParamLimits

0xe0e7,	// (0x000a0ecd) main_video3_pane_g1

0xe103,	// (0x000a0ee9) main_video3_pane_g2_ParamLimits

0xe103,	// (0x000a0ee9) main_video3_pane_g2

0x0001,

0xf848,	// (0x000a262e) main_video3_pane_g_ParamLimits

0xf848,	// (0x000a262e) main_video3_pane_g

0xe11f,	// (0x000a0f05) main_video3_pane_t1_ParamLimits

0xe11f,	// (0x000a0f05) main_video3_pane_t1

0xe14a,	// (0x000a0f30) main_video3_pane_t2_ParamLimits

0xe14a,	// (0x000a0f30) main_video3_pane_t2

0xe175,	// (0x000a0f5b) main_video3_pane_t3_ParamLimits

0xe175,	// (0x000a0f5b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000a2633) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000a2633) main_video3_pane_t

0xe1a2,	// (0x000a0f88) cams_zoom_vslider_pane_g1

0xe1ab,	// (0x000a0f91) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000a263a) cams_zoom_vslider_pane_g

0xe1b3,	// (0x000a0f99) small_slider_vertical_pane

0xd97b,	// (0x000a0761) small_slider_vertical_pane_g1

0xd97b,	// (0x000a0761) small_slider_vertical_pane_g2

0xe1bb,	// (0x000a0fa1) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000a263f) small_slider_vertical_pane_g

0x125a,	// (0x00094040) main_hwr_training_pane

0xe1c4,	// (0x000a0faa) hwr_training_instruct_pane_ParamLimits

0xe1c4,	// (0x000a0faa) hwr_training_instruct_pane

0x5c54,	// (0x00098a3a) hwr_training_navi_pane_ParamLimits

0x5c54,	// (0x00098a3a) hwr_training_navi_pane

0x5c6e,	// (0x00098a54) hwr_training_write_pane_ParamLimits

0x5c6e,	// (0x00098a54) hwr_training_write_pane

0x9ca7,	// (0x0009ca8d) bg_frame_shadow_pane

0xe1fb,	// (0x000a0fe1) hwr_training_write_pane_g1

0xe203,	// (0x000a0fe9) hwr_training_write_pane_g2

0xe20b,	// (0x000a0ff1) hwr_training_write_pane_g3

0xe213,	// (0x000a0ff9) hwr_training_write_pane_g4

0xe21b,	// (0x000a1001) hwr_training_write_pane_g5

0xe223,	// (0x000a1009) hwr_training_write_pane_g6

0xe22b,	// (0x000a1011) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000a2646) hwr_training_write_pane_g

0x5ca6,	// (0x00098a8c) hwr_training_navi_pane_g1_ParamLimits

0x5ca6,	// (0x00098a8c) hwr_training_navi_pane_g1

0x5cb8,	// (0x00098a9e) hwr_training_navi_pane_g2_ParamLimits

0x5cb8,	// (0x00098a9e) hwr_training_navi_pane_g2

0x5cca,	// (0x00098ab0) hwr_training_navi_pane_g3_ParamLimits

0x5cca,	// (0x00098ab0) hwr_training_navi_pane_g3

0x5cda,	// (0x00098ac0) hwr_training_navi_pane_g4_ParamLimits

0x5cda,	// (0x00098ac0) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000a2655) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000a2655) hwr_training_navi_pane_g

0x5cf4,	// (0x00098ada) hwr_training_navi_pane_t1

0x5d02,	// (0x00098ae8) list_single_hwr_training_instruct_pane_ParamLimits

0x5d02,	// (0x00098ae8) list_single_hwr_training_instruct_pane

0xe233,	// (0x000a1019) list_single_hwr_training_instruct_pane_t1

0xd8bb,	// (0x000a06a1) bg_frame_shadow_pane_g1

0xe242,	// (0x000a1028) bg_frame_shadow_pane_g2

0xe24a,	// (0x000a1030) bg_frame_shadow_pane_g3

0xe252,	// (0x000a1038) bg_frame_shadow_pane_g4

0xe25a,	// (0x000a1040) bg_frame_shadow_pane_g5

0xe262,	// (0x000a1048) bg_frame_shadow_pane_g6

0xe26a,	// (0x000a1050) bg_frame_shadow_pane_g7

0xa49d,	// (0x0009d283) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000a2660) bg_frame_shadow_pane_g

0x125a,	// (0x00094040) main_video_tele_dialer_pane

0x5d27,	// (0x00098b0d) aid_size_cell_video_keypad_ParamLimits

0x5d27,	// (0x00098b0d) aid_size_cell_video_keypad

0x5d37,	// (0x00098b1d) grid_video_dialer_keypad_pane_ParamLimits

0x5d37,	// (0x00098b1d) grid_video_dialer_keypad_pane

0x5d6b,	// (0x00098b51) video_down_pane_cp_ParamLimits

0x5d6b,	// (0x00098b51) video_down_pane_cp

0x5d95,	// (0x00098b7b) cell_video_dialer_keypad_pane_ParamLimits

0x5d95,	// (0x00098b7b) cell_video_dialer_keypad_pane

0xe272,	// (0x000a1058) bg_button_pane_cp08_ParamLimits

0xe272,	// (0x000a1058) bg_button_pane_cp08

0x5daa,	// (0x00098b90) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5daa,	// (0x00098b90) cell_video_dialer_keypad_pane_g1

0x5592,	// (0x00098378) mup3_rocker2_pane_ParamLimits

0x5592,	// (0x00098378) mup3_rocker2_pane

0xd97b,	// (0x000a0761) mup3_rocker2_pane_g1

0x447b,	// (0x00097261) main_dialer2_pane

0x125a,	// (0x00094040) main_mp4_pane

0x5de9,	// (0x00098bcf) main_mp4_pane_g1_ParamLimits

0x5de9,	// (0x00098bcf) main_mp4_pane_g1

0x5df7,	// (0x00098bdd) main_mp4_pane_g2_ParamLimits

0x5df7,	// (0x00098bdd) main_mp4_pane_g2

0x5e05,	// (0x00098beb) main_mp4_pane_g3_ParamLimits

0x5e05,	// (0x00098beb) main_mp4_pane_g3

0x5e4a,	// (0x00098c30) main_mp4_pane_g4_ParamLimits

0x5e4a,	// (0x00098c30) main_mp4_pane_g4

0x5e72,	// (0x00098c58) main_mp4_pane_g5_ParamLimits

0x5e72,	// (0x00098c58) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000a2680) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000a2680) main_mp4_pane_g

0x5ec2,	// (0x00098ca8) main_mp4_pane_t1_ParamLimits

0x5ec2,	// (0x00098ca8) main_mp4_pane_t1

0x5f1e,	// (0x00098d04) main_mp4_pane_t2_ParamLimits

0x5f1e,	// (0x00098d04) main_mp4_pane_t2

0xe27e,	// (0x000a1064) main_mp4_pane_t3_ParamLimits

0xe27e,	// (0x000a1064) main_mp4_pane_t3

0x5f70,	// (0x00098d56) main_mp4_pane_t4_ParamLimits

0x5f70,	// (0x00098d56) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000a268d) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000a268d) main_mp4_pane_t

0x5fb4,	// (0x00098d9a) mp4_progress_pane_ParamLimits

0x5fb4,	// (0x00098d9a) mp4_progress_pane

0x5ffe,	// (0x00098de4) mp4_rocker_pane_ParamLimits

0x5ffe,	// (0x00098de4) mp4_rocker_pane

0xe2a6,	// (0x000a108c) mp4_progress_pane_t1

0xe2bf,	// (0x000a10a5) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000a2696) mp4_progress_pane_t

0xe2d8,	// (0x000a10be) mup_progress_pane_cp04

0xee3f,	// (0x000a1c25) mp4_rocker_pane_g1

0x601e,	// (0x00098e04) aid_cell_size_keypad2_ParamLimits

0x601e,	// (0x00098e04) aid_cell_size_keypad2

0x602e,	// (0x00098e14) dialer2_ne_pane_ParamLimits

0x602e,	// (0x00098e14) dialer2_ne_pane

0x603c,	// (0x00098e22) grid_dialer2_keypad_pane_ParamLimits

0x603c,	// (0x00098e22) grid_dialer2_keypad_pane

0xe8b6,	// (0x000a169c) bg_popup_call_pane_cp07_ParamLimits

0xe8b6,	// (0x000a169c) bg_popup_call_pane_cp07

0x604c,	// (0x00098e32) dialer2_ne_pane_t1_ParamLimits

0x604c,	// (0x00098e32) dialer2_ne_pane_t1

0x6071,	// (0x00098e57) cell_dialer2_keypad_pane_ParamLimits

0x6071,	// (0x00098e57) cell_dialer2_keypad_pane

0xe2f6,	// (0x000a10dc) bg_button_pane_pane_cp04_ParamLimits

0xe2f6,	// (0x000a10dc) bg_button_pane_pane_cp04

0x6086,	// (0x00098e6c) cell_dialer2_keypad_pane_g1_ParamLimits

0x6086,	// (0x00098e6c) cell_dialer2_keypad_pane_g1

0x207f,	// (0x00094e65) aid_placing_vt_set_content_ParamLimits

0x207f,	// (0x00094e65) aid_placing_vt_set_content

0x20ab,	// (0x00094e91) aid_placing_vt_set_title_ParamLimits

0x20ab,	// (0x00094e91) aid_placing_vt_set_title

0x125a,	// (0x00094040) main_image3_pane

0x6120,	// (0x00098f06) area_side_right_pane_cp01_ParamLimits

0x6120,	// (0x00098f06) area_side_right_pane_cp01

0x614d,	// (0x00098f33) main_image3_pane_g1_ParamLimits

0x614d,	// (0x00098f33) main_image3_pane_g1

0x615b,	// (0x00098f41) main_image3_pane_g2_ParamLimits

0x615b,	// (0x00098f41) main_image3_pane_g2

0x6174,	// (0x00098f5a) main_image3_pane_g3_ParamLimits

0x6174,	// (0x00098f5a) main_image3_pane_g3

0x618d,	// (0x00098f73) main_image3_pane_g4_ParamLimits

0x618d,	// (0x00098f73) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000a26a5) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000a26a5) main_image3_pane_g

0x61a6,	// (0x00098f8c) main_image3_pane_t1_ParamLimits

0x61a6,	// (0x00098f8c) main_image3_pane_t1

0x61cb,	// (0x00098fb1) main_image3_pane_t2_ParamLimits

0x61cb,	// (0x00098fb1) main_image3_pane_t2

0x61ea,	// (0x00098fd0) main_image3_pane_t3_ParamLimits

0x61ea,	// (0x00098fd0) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000a26ae) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000a26ae) main_image3_pane_t

0xeac4,	// (0x000a18aa) grid_sctrl_middle_pane_cp01_ParamLimits

0xeac4,	// (0x000a18aa) grid_sctrl_middle_pane_cp01

0x624b,	// (0x00099031) cell_sctrl_middle_pane_cp01_ParamLimits

0x624b,	// (0x00099031) cell_sctrl_middle_pane_cp01

0x625c,	// (0x00099042) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x625c,	// (0x00099042) cell_sctrl_middle_pane_cp01_g1

0x125a,	// (0x00094040) main_call4_pane

0x6269,	// (0x0009904f) aid_size_button_call4_ParamLimits

0x6269,	// (0x0009904f) aid_size_button_call4

0x6299,	// (0x0009907f) call4_windows_pane_ParamLimits

0x6299,	// (0x0009907f) call4_windows_pane

0x62b3,	// (0x00099099) grid_call4_button_pane_ParamLimits

0x62b3,	// (0x00099099) grid_call4_button_pane

0xe302,	// (0x000a10e8) call4_windows_conf_pane

0xe319,	// (0x000a10ff) popup_call4_audio_first_window_ParamLimits

0xe319,	// (0x000a10ff) popup_call4_audio_first_window

0xe361,	// (0x000a1147) popup_call4_audio_second_window_ParamLimits

0xe361,	// (0x000a1147) popup_call4_audio_second_window

0xe37a,	// (0x000a1160) popup_call4_audio_wait_window_ParamLimits

0xe37a,	// (0x000a1160) popup_call4_audio_wait_window

0x62d7,	// (0x000990bd) cell_call4_button_pane_ParamLimits

0x62d7,	// (0x000990bd) cell_call4_button_pane

0x62fc,	// (0x000990e2) bg_button_pane_cp09_ParamLimits

0x62fc,	// (0x000990e2) bg_button_pane_cp09

0x6308,	// (0x000990ee) cell_call4_button_pane_g1_ParamLimits

0x6308,	// (0x000990ee) cell_call4_button_pane_g1

0x6315,	// (0x000990fb) cell_call4_button_pane_t1_ParamLimits

0x6315,	// (0x000990fb) cell_call4_button_pane_t1

0xe390,	// (0x000a1176) popup_call4_audio_conf_window_ParamLimits

0xe390,	// (0x000a1176) popup_call4_audio_conf_window

0x55c5,	// (0x000983ab) mup3_progress_pane_t1_ParamLimits

0x55e4,	// (0x000983ca) mup3_progress_pane_t2_ParamLimits

0xdcb1,	// (0x000a0a97) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000a2582) mup3_progress_pane_t_ParamLimits

0xdcce,	// (0x000a0ab4) mup_progress_pane_cp03_ParamLimits

0x5af3,	// (0x000988d9) mup3_control_keys_pane_g4_copy1

0x5fe2,	// (0x00098dc8) mp4_rocker2_pane_ParamLimits

0x5fe2,	// (0x00098dc8) mp4_rocker2_pane

0xe3a4,	// (0x000a118a) mp4_rocker2_pane_g1

0xe3ac,	// (0x000a1192) mp4_rocker2_pane_g2

0x6359,	// (0x0009913f) mp4_rocker2_pane_g3

0x6361,	// (0x00099147) mp4_rocker2_pane_g4

0x6369,	// (0x0009914f) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000a26b7) mp4_rocker2_pane_g

0x125a,	// (0x00094040) main_camera4_pane

0x125a,	// (0x00094040) main_video4_pane

0x5d47,	// (0x00098b2d) main_video_tele_dialer_pane_t1_ParamLimits

0x5d47,	// (0x00098b2d) main_video_tele_dialer_pane_t1

0x5d59,	// (0x00098b3f) main_video_tele_dialer_pane_t2_ParamLimits

0x5d59,	// (0x00098b3f) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000a2671) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000a2671) main_video_tele_dialer_pane_t

0x6389,	// (0x0009916f) cam4_autofocus_pane_ParamLimits

0x6389,	// (0x0009916f) cam4_autofocus_pane

0x63a3,	// (0x00099189) cam4_image_uncrop_pane_ParamLimits

0x63a3,	// (0x00099189) cam4_image_uncrop_pane

0x63ba,	// (0x000991a0) cam4_indicators_pane_ParamLimits

0x63ba,	// (0x000991a0) cam4_indicators_pane

0x63d6,	// (0x000991bc) main_camera4_pane_g1_ParamLimits

0x63d6,	// (0x000991bc) main_camera4_pane_g1

0x63e2,	// (0x000991c8) main_camera4_pane_g2_ParamLimits

0x63e2,	// (0x000991c8) main_camera4_pane_g2

0x63e2,	// (0x000991c8) main_camera4_pane_g3_ParamLimits

0x63e2,	// (0x000991c8) main_camera4_pane_g3

0x63ee,	// (0x000991d4) main_camera4_pane_g4_ParamLimits

0x63ee,	// (0x000991d4) main_camera4_pane_g4

0x63fa,	// (0x000991e0) main_camera4_pane_g5_ParamLimits

0x63fa,	// (0x000991e0) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000a26c2) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000a26c2) main_camera4_pane_g

0x6414,	// (0x000991fa) main_camera4_pane_t1_ParamLimits

0x6414,	// (0x000991fa) main_camera4_pane_t1

0x645c,	// (0x00099242) bg_tb_trans_pane_cp06

0x6472,	// (0x00099258) cam4_indicators_pane_g1

0x6483,	// (0x00099269) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000a26dd) cam4_indicators_pane_g

0x64a1,	// (0x00099287) cam4_indicators_pane_t1

0x64cb,	// (0x000992b1) main_video4_pane_g1_ParamLimits

0x64cb,	// (0x000992b1) main_video4_pane_g1

0x64d7,	// (0x000992bd) main_video4_pane_g2_ParamLimits

0x64d7,	// (0x000992bd) main_video4_pane_g2

0x64e3,	// (0x000992c9) main_video4_pane_g3_ParamLimits

0x64e3,	// (0x000992c9) main_video4_pane_g3

0x64ef,	// (0x000992d5) main_video4_pane_g4_ParamLimits

0x64ef,	// (0x000992d5) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000a26e4) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000a26e4) main_video4_pane_g

0x650f,	// (0x000992f5) vid4_indicators_pane_ParamLimits

0x650f,	// (0x000992f5) vid4_indicators_pane

0x652e,	// (0x00099314) video4_image_uncrop_cif_pane_ParamLimits

0x652e,	// (0x00099314) video4_image_uncrop_cif_pane

0x653d,	// (0x00099323) video4_image_uncrop_nhd_pane_ParamLimits

0x653d,	// (0x00099323) video4_image_uncrop_nhd_pane

0x63a3,	// (0x00099189) video4_image_uncrop_vga_pane_ParamLimits

0x63a3,	// (0x00099189) video4_image_uncrop_vga_pane

0x446d,	// (0x00097253) bg_tb_trans_pane_cp07

0x6554,	// (0x0009933a) vid4_indicators_pane_g1

0x6568,	// (0x0009934e) vid4_indicators_pane_g2

0x657c,	// (0x00099362) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000a26ef) vid4_indicators_pane_g

0x65ab,	// (0x00099391) vid4_indicators_pane_t1

0x65c2,	// (0x000993a8) cam4_autofocus_pane_g1

0x65ca,	// (0x000993b0) cam4_autofocus_pane_g2

0x65d2,	// (0x000993b8) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000a26fa) cam4_autofocus_pane_g

0x65da,	// (0x000993c0) cam4_autofocus_pane_g3_copy1

0x5d79,	// (0x00098b5f) video_down_pane_cp_t1

0x5d87,	// (0x00098b6d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000a2676) video_down_pane_cp_t

0x1240,	// (0x00094026) popup_vitu2_window_ParamLimits

0x1240,	// (0x00094026) popup_vitu2_window

0x65e2,	// (0x000993c8) aid_size_cell2_itu2_ParamLimits

0x65e2,	// (0x000993c8) aid_size_cell2_itu2

0x6604,	// (0x000993ea) aid_size_cell_itu2_ParamLimits

0x6604,	// (0x000993ea) aid_size_cell_itu2

0x6648,	// (0x0009942e) bg_popup_window_pane_cp09_ParamLimits

0x6648,	// (0x0009942e) bg_popup_window_pane_cp09

0x6656,	// (0x0009943c) field_vitu2_entry_pane_ParamLimits

0x6656,	// (0x0009943c) field_vitu2_entry_pane

0x6676,	// (0x0009945c) grid_vitu2_function_pane_ParamLimits

0x6676,	// (0x0009945c) grid_vitu2_function_pane

0x66ba,	// (0x000994a0) grid_vitu2_itu_pane_ParamLimits

0x66ba,	// (0x000994a0) grid_vitu2_itu_pane

0x6736,	// (0x0009951c) cell_vitu2_itu_pane_ParamLimits

0x6736,	// (0x0009951c) cell_vitu2_itu_pane

0x674f,	// (0x00099535) cell_vitu2_function_pane_ParamLimits

0x674f,	// (0x00099535) cell_vitu2_function_pane

0xe3b4,	// (0x000a119a) bg_popup_call_pane_cp08_ParamLimits

0xe3b4,	// (0x000a119a) bg_popup_call_pane_cp08

0xe3cb,	// (0x000a11b1) field_vitu2_entry_pane_g1

0xe3d7,	// (0x000a11bd) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000a2701) field_vitu2_entry_pane_g

0x6790,	// (0x00099576) field_vitu2_entry_pane_t1_ParamLimits

0x6790,	// (0x00099576) field_vitu2_entry_pane_t1

0xe3f1,	// (0x000a11d7) field_vitu2_entry_pane_t2_ParamLimits

0xe3f1,	// (0x000a11d7) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000a2708) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000a2708) field_vitu2_entry_pane_t

0x67c0,	// (0x000995a6) bg_button_pane_cp010_ParamLimits

0x67c0,	// (0x000995a6) bg_button_pane_cp010

0x67ce,	// (0x000995b4) cell_vitu2_itu_pane_g1

0x67ee,	// (0x000995d4) cell_vitu2_itu_pane_t1_ParamLimits

0x67ee,	// (0x000995d4) cell_vitu2_itu_pane_t1

0x0eaf,	// (0x00093c95) cell_vitu2_itu_pane_t2_ParamLimits

0x0eaf,	// (0x00093c95) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000a2712) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000a2712) cell_vitu2_itu_pane_t

0x446d,	// (0x00097253) bg_button_pane_cp011

0x683a,	// (0x00099620) cell_vitu2_function_pane_g1

0x125a,	// (0x00094040) main_myfav_hc_pane

0x622c,	// (0x00099012) popup_image3_note_pane_ParamLimits

0x622c,	// (0x00099012) popup_image3_note_pane

0x623a,	// (0x00099020) popup_image3_tool_bar_pane_ParamLimits

0x623a,	// (0x00099020) popup_image3_tool_bar_pane

0x0f25,	// (0x00093d0b) cell_vitu2_itu_pane_t3_ParamLimits

0x0f25,	// (0x00093d0b) cell_vitu2_itu_pane_t3

0x9ca7,	// (0x0009ca8d) bg_popup_trans_pane

0xe416,	// (0x000a11fc) grid_image3_tool_bar_pane

0xe420,	// (0x000a1206) bg_popup_trans_pane_g1

0xb953,	// (0x0009e739) bg_popup_trans_pane_g2

0xe428,	// (0x000a120e) bg_popup_trans_pane_g3

0xe430,	// (0x000a1216) bg_popup_trans_pane_g4

0xe438,	// (0x000a121e) bg_popup_trans_pane_g5

0xe440,	// (0x000a1226) bg_popup_trans_pane_g6

0xe448,	// (0x000a122e) bg_popup_trans_pane_g7

0xe450,	// (0x000a1236) bg_popup_trans_pane_g8

0xa7e2,	// (0x0009d5c8) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000a2719) bg_popup_trans_pane_g

0xe458,	// (0x000a123e) cell_image3_tool_bar_pane_ParamLimits

0xe458,	// (0x000a123e) cell_image3_tool_bar_pane

0xd97b,	// (0x000a0761) cell_image3_tool_bar_pane_g1

0x9ca7,	// (0x0009ca8d) bg_popup_trans_pane_cp1

0xe46c,	// (0x000a1252) popup_image3_note_pane_t1

0xe47a,	// (0x000a1260) popup_image3_note_pane_t2

0xe488,	// (0x000a126e) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000a272c) popup_image3_note_pane_t

0xe496,	// (0x000a127c) popup_image3_note_pane_t3_copy1

0x684e,	// (0x00099634) bg_myfav_hc_instruction_pane_ParamLimits

0x684e,	// (0x00099634) bg_myfav_hc_instruction_pane

0x6866,	// (0x0009964c) cell_myfav_contact_pane_ParamLimits

0x6866,	// (0x0009964c) cell_myfav_contact_pane

0x6880,	// (0x00099666) cell_myfav_contact_pane_cp1_ParamLimits

0x6880,	// (0x00099666) cell_myfav_contact_pane_cp1

0x6898,	// (0x0009967e) cell_myfav_contact_pane_cp2_ParamLimits

0x6898,	// (0x0009967e) cell_myfav_contact_pane_cp2

0x68b0,	// (0x00099696) cell_myfav_contact_pane_cp3_ParamLimits

0x68b0,	// (0x00099696) cell_myfav_contact_pane_cp3

0x68c7,	// (0x000996ad) cell_myfav_contact_pane_cp4_ParamLimits

0x68c7,	// (0x000996ad) cell_myfav_contact_pane_cp4

0x68dd,	// (0x000996c3) cell_myfav_contact_pane_cp5_ParamLimits

0x68dd,	// (0x000996c3) cell_myfav_contact_pane_cp5

0x68f1,	// (0x000996d7) cell_myfav_contact_pane_cp6_ParamLimits

0x68f1,	// (0x000996d7) cell_myfav_contact_pane_cp6

0x6905,	// (0x000996eb) cell_myfav_contact_pane_cp7_ParamLimits

0x6905,	// (0x000996eb) cell_myfav_contact_pane_cp7

0xe4a4,	// (0x000a128a) listscroll_gen_pane_cp05

0x691d,	// (0x00099703) main_myfav_hc_pane_g1_ParamLimits

0x691d,	// (0x00099703) main_myfav_hc_pane_g1

0x6933,	// (0x00099719) main_myfav_hc_pane_g2_ParamLimits

0x6933,	// (0x00099719) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000a2733) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000a2733) main_myfav_hc_pane_g

0x6961,	// (0x00099747) main_myfav_hc_pane_t1_ParamLimits

0x6961,	// (0x00099747) main_myfav_hc_pane_t1

0xe4ad,	// (0x000a1293) main_myfav_hc_pane_t2_ParamLimits

0xe4ad,	// (0x000a1293) main_myfav_hc_pane_t2

0xe4bf,	// (0x000a12a5) main_myfav_hc_pane_t3_ParamLimits

0xe4bf,	// (0x000a12a5) main_myfav_hc_pane_t3

0x6978,	// (0x0009975e) main_myfav_hc_pane_t4_ParamLimits

0x6978,	// (0x0009975e) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000a273a) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000a273a) main_myfav_hc_pane_t

0xd97b,	// (0x000a0761) bg_myfav_hc_instruction_pane_g1

0xe4d1,	// (0x000a12b7) cell_myfav_contact_pane_g1_ParamLimits

0xe4d1,	// (0x000a12b7) cell_myfav_contact_pane_g1

0xe4d1,	// (0x000a12b7) cell_myfav_contact_pane_g2_ParamLimits

0xe4d1,	// (0x000a12b7) cell_myfav_contact_pane_g2

0xe4dd,	// (0x000a12c3) cell_myfav_contact_pane_g3_ParamLimits

0xe4dd,	// (0x000a12c3) cell_myfav_contact_pane_g3

0xdc9b,	// (0x000a0a81) cell_myfav_contact_pane_g4_ParamLimits

0xdc9b,	// (0x000a0a81) cell_myfav_contact_pane_g4

0xe4ea,	// (0x000a12d0) cell_myfav_contact_pane_g5_ParamLimits

0xe4ea,	// (0x000a12d0) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000a2745) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000a2745) cell_myfav_contact_pane_g

0x6949,	// (0x0009972f) main_myfav_hc_pane_g3_ParamLimits

0x6949,	// (0x0009972f) main_myfav_hc_pane_g3

0x1149,	// (0x00093f2f) popup_adpt_find_window

0x69a2,	// (0x00099788) afind_page_pane_ParamLimits

0x69a2,	// (0x00099788) afind_page_pane

0x69af,	// (0x00099795) aid_size_cell_afind_ParamLimits

0x69af,	// (0x00099795) aid_size_cell_afind

0x69c9,	// (0x000997af) bg_popup_sub_pane_cp09_ParamLimits

0x69c9,	// (0x000997af) bg_popup_sub_pane_cp09

0x69d6,	// (0x000997bc) find_pane_cp01_ParamLimits

0x69d6,	// (0x000997bc) find_pane_cp01

0xe4f6,	// (0x000a12dc) grid_afind_control_pane_ParamLimits

0xe4f6,	// (0x000a12dc) grid_afind_control_pane

0x69e3,	// (0x000997c9) grid_afind_pane_ParamLimits

0x69e3,	// (0x000997c9) grid_afind_pane

0x69ff,	// (0x000997e5) cell_afind_pane_ParamLimits

0x69ff,	// (0x000997e5) cell_afind_pane

0xd97b,	// (0x000a0761) afind_page_pane_g1

0x6a47,	// (0x0009982d) afind_page_pane_g2

0x6a50,	// (0x00099836) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000a2750) afind_page_pane_g

0x6a59,	// (0x0009983f) afind_page_pane_t1

0xe50a,	// (0x000a12f0) cell_afind_grid_control_pane_ParamLimits

0xe50a,	// (0x000a12f0) cell_afind_grid_control_pane

0xe2f6,	// (0x000a10dc) bg_button_pane_cp69_ParamLimits

0xe2f6,	// (0x000a10dc) bg_button_pane_cp69

0x6a79,	// (0x0009985f) cell_afind_pane_g1_ParamLimits

0x6a79,	// (0x0009985f) cell_afind_pane_g1

0x6a86,	// (0x0009986c) cell_afind_pane_t1_ParamLimits

0x6a86,	// (0x0009986c) cell_afind_pane_t1

0xa5fb,	// (0x0009d3e1) bg_button_pane_cp72

0xe519,	// (0x000a12ff) cell_afind_grid_control_pane_g1

0x3feb,	// (0x00096dd1) aid_image_placing_area_ParamLimits

0x3feb,	// (0x00096dd1) aid_image_placing_area

0xdfc4,	// (0x000a0daa) field_vitu_entry_pane_g1_ParamLimits

0xdfc4,	// (0x000a0daa) field_vitu_entry_pane_g1

0xdfd0,	// (0x000a0db6) field_vitu_entry_pane_g2_ParamLimits

0xdfd0,	// (0x000a0db6) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000a2601) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000a2601) field_vitu_entry_pane_g

0x5b7b,	// (0x00098961) cell_vitu_itu_pane_g1_ParamLimits

0x5bbd,	// (0x000989a3) cell_vitu_itu_pane_t3_ParamLimits

0x5bbd,	// (0x000989a3) cell_vitu_itu_pane_t3

0xe2a6,	// (0x000a108c) mp4_progress_pane_t1_ParamLimits

0xe2bf,	// (0x000a10a5) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000a2696) mp4_progress_pane_t_ParamLimits

0xe2d8,	// (0x000a10be) mup_progress_pane_cp04_ParamLimits

0x698c,	// (0x00099772) main_myfav_hc_pane_t5_ParamLimits

0x698c,	// (0x00099772) main_myfav_hc_pane_t5

0x0ea7,	// (0x00093c8d) aid_zoom_text_primary

0x1149,	// (0x00093f2f) popup_adpt_find_window_ParamLimits

0x446d,	// (0x00097253) main_cam_set_pane

0x63c8,	// (0x000991ae) cam4_zoom_pane_ParamLimits

0x63c8,	// (0x000991ae) cam4_zoom_pane

0x6a98,	// (0x0009987e) main_cam_set_pane_g1_ParamLimits

0x6a98,	// (0x0009987e) main_cam_set_pane_g1

0x6aa6,	// (0x0009988c) main_cam_set_pane_g2_ParamLimits

0x6aa6,	// (0x0009988c) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000a2757) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000a2757) main_cam_set_pane_g

0x6ab2,	// (0x00099898) main_cam_set_pane_t1_ParamLimits

0x6ab2,	// (0x00099898) main_cam_set_pane_t1

0x6ace,	// (0x000998b4) main_cset_listscroll_pane_ParamLimits

0x6ace,	// (0x000998b4) main_cset_listscroll_pane

0x6af9,	// (0x000998df) main_cset_slider_pane_ParamLimits

0x6af9,	// (0x000998df) main_cset_slider_pane

0xe52a,	// (0x000a1310) main_cset_list_pane_ParamLimits

0xe52a,	// (0x000a1310) main_cset_list_pane

0xe53a,	// (0x000a1320) scroll_pane_cp028

0x6b18,	// (0x000998fe) aid_area_touch_slider

0x6b34,	// (0x0009991a) cset_slider_pane

0x6b5e,	// (0x00099944) main_cset_slider_pane_g1

0x6b73,	// (0x00099959) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000a275c) main_cset_slider_pane_g

0xe573,	// (0x000a1359) main_cset_slider_pane_t1

0x6c35,	// (0x00099a1b) main_cset_slider_pane_t2

0x6c4f,	// (0x00099a35) main_cset_slider_pane_t3

0x6c69,	// (0x00099a4f) main_cset_slider_pane_t4

0x6c83,	// (0x00099a69) main_cset_slider_pane_t5

0x6ca1,	// (0x00099a87) main_cset_slider_pane_t6

0x6cb8,	// (0x00099a9e) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000a2781) main_cset_slider_pane_t

0x6dc4,	// (0x00099baa) cset_list_set_pane_ParamLimits

0x6dc4,	// (0x00099baa) cset_list_set_pane

0x6dda,	// (0x00099bc0) aid_position_infowindow_above

0x6de2,	// (0x00099bc8) aid_position_infowindow_below

0xecb3,	// (0x000a1a99) cset_list_set_pane_g1_ParamLimits

0xecb3,	// (0x000a1a99) cset_list_set_pane_g1

0xe613,	// (0x000a13f9) cset_list_set_pane_g3_ParamLimits

0xe613,	// (0x000a13f9) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000a27a0) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000a27a0) cset_list_set_pane_g

0xe622,	// (0x000a1408) cset_list_set_pane_t1_ParamLimits

0xe622,	// (0x000a1408) cset_list_set_pane_t1

0xa7fa,	// (0x0009d5e0) list_highlight_pane_cp021_ParamLimits

0xa7fa,	// (0x0009d5e0) list_highlight_pane_cp021

0xc2a8,	// (0x0009f08e) cset_slider_pane_g1

0xc2ba,	// (0x0009f0a0) cset_slider_pane_g2

0xc2b1,	// (0x0009f097) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000a27a5) cset_slider_pane_g

0x6dea,	// (0x00099bd0) aid_area_touch_cam4_zoom

0x6df2,	// (0x00099bd8) cam4_zoom_cont_pane

0x6dfa,	// (0x00099be0) cam4_zoom_pane_g1

0x6e02,	// (0x00099be8) cam4_zoom_pane_g2

0x6e0a,	// (0x00099bf0) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000a27ac) cam4_zoom_pane_g

0x6e12,	// (0x00099bf8) cam4_zoom_cont_pane_g1

0x6e1b,	// (0x00099c01) cam4_zoom_cont_pane_g2

0x6e24,	// (0x00099c0a) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000a27b3) cam4_zoom_cont_pane_g

0x6283,	// (0x00099069) call4_image_pane_ParamLimits

0x6283,	// (0x00099069) call4_image_pane

0xe302,	// (0x000a10e8) call4_windows_conf_pane_ParamLimits

0xe33f,	// (0x000a1125) popup_call4_audio_in_window_ParamLimits

0xe33f,	// (0x000a1125) popup_call4_audio_in_window

0x9ca7,	// (0x0009ca8d) bg_popup_call2_act_pane_cp02

0xe388,	// (0x000a116e) call4_list_conf_pane

0xd97b,	// (0x000a0761) call4_image_pane_g1

0xd97b,	// (0x000a0761) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000a24c2) call4_image_pane_g

0xe637,	// (0x000a141d) list_single_graphic_popup_conf4_pane_ParamLimits

0xe637,	// (0x000a141d) list_single_graphic_popup_conf4_pane

0x9ca7,	// (0x0009ca8d) list_highlight_pane_cp022

0xe64a,	// (0x000a1430) list_single_graphic_popup_conf4_pane_g1

0xbe61,	// (0x0009ec47) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000a27ba) list_single_graphic_popup_conf4_pane_g

0xe652,	// (0x000a1438) list_single_graphic_popup_conf4_pane_t1

0x220f,	// (0x00094ff5) popup_vtel_slider_window_ParamLimits

0x220f,	// (0x00094ff5) popup_vtel_slider_window

0xe2e4,	// (0x000a10ca) dialer2_ne_pane_t2_ParamLimits

0xe2e4,	// (0x000a10ca) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000a269b) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000a269b) dialer2_ne_pane_t

0xa7fa,	// (0x0009d5e0) bg_popup_sub_pane_cp010_ParamLimits

0xa7fa,	// (0x0009d5e0) bg_popup_sub_pane_cp010

0x6e2d,	// (0x00099c13) popup_vtel_slider_window_g1_ParamLimits

0x6e2d,	// (0x00099c13) popup_vtel_slider_window_g1

0x6e39,	// (0x00099c1f) popup_vtel_slider_window_g2_ParamLimits

0x6e39,	// (0x00099c1f) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000a27bf) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000a27bf) popup_vtel_slider_window_g

0x6e81,	// (0x00099c67) vtel_slider_pane_ParamLimits

0x6e81,	// (0x00099c67) vtel_slider_pane

0x6e90,	// (0x00099c76) vtel_slider_pane_g1_ParamLimits

0x6e90,	// (0x00099c76) vtel_slider_pane_g1

0x6e9d,	// (0x00099c83) vtel_slider_pane_g2_ParamLimits

0x6e9d,	// (0x00099c83) vtel_slider_pane_g2

0x6eaa,	// (0x00099c90) vtel_slider_pane_g3_ParamLimits

0x6eaa,	// (0x00099c90) vtel_slider_pane_g3

0x6e90,	// (0x00099c76) vtel_slider_pane_g4_ParamLimits

0x6e90,	// (0x00099c76) vtel_slider_pane_g4

0x6eb7,	// (0x00099c9d) vtel_slider_pane_g5_ParamLimits

0x6eb7,	// (0x00099c9d) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000a27c8) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000a27c8) vtel_slider_pane_g

0x446d,	// (0x00097253) main_gallery2_pane

0x662a,	// (0x00099410) aid_size_row_itut2_dropdow_list_ParamLimits

0x662a,	// (0x00099410) aid_size_row_itut2_dropdow_list

0x6698,	// (0x0009947e) grid_vitu2_function_top_pane_ParamLimits

0x6698,	// (0x0009947e) grid_vitu2_function_top_pane

0x66f2,	// (0x000994d8) popup_vitu2_dropdown_list_window_ParamLimits

0x66f2,	// (0x000994d8) popup_vitu2_dropdown_list_window

0x6712,	// (0x000994f8) popup_vitu2_match_list_window

0x6ed2,	// (0x00099cb8) cell_vitu2_function_top_pane_ParamLimits

0x6ed2,	// (0x00099cb8) cell_vitu2_function_top_pane

0x6eec,	// (0x00099cd2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6eec,	// (0x00099cd2) cell_vitu2_function_top_pane_cp01

0x6f08,	// (0x00099cee) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f08,	// (0x00099cee) cell_vitu2_function_top_wide_pane

0x446d,	// (0x00097253) bg_button_pane_cp012

0x6f24,	// (0x00099d0a) cell_vitu2_function_top_pane_g1

0x6f38,	// (0x00099d1e) bg_button_pane_cp013_ParamLimits

0x6f38,	// (0x00099d1e) bg_button_pane_cp013

0x6f54,	// (0x00099d3a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f54,	// (0x00099d3a) cell_vitu2_function_top_wide_pane_g1

0x1240,	// (0x00094026) bg_popup_sub_pane_cp20

0x6f6c,	// (0x00099d52) list_vitu2_match_list_pane

0xe420,	// (0x000a1206) bg_popup_sub_pane_cp20_g1

0xe428,	// (0x000a120e) bg_popup_sub_pane_cp20_g2

0xb953,	// (0x0009e739) bg_popup_sub_pane_cp20_g3

0xe430,	// (0x000a1216) bg_popup_sub_pane_cp20_g4

0xa7e2,	// (0x0009d5c8) bg_popup_sub_pane_cp20_g5

0xe668,	// (0x000a144e) bg_popup_sub_pane_cp20_g6

0xe440,	// (0x000a1226) bg_popup_sub_pane_cp20_g7

0xe448,	// (0x000a122e) bg_popup_sub_pane_cp20_g8

0xe450,	// (0x000a1236) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000a27d3) bg_popup_sub_pane_cp20_g

0x6f84,	// (0x00099d6a) list_vitu2_match_list_item_pane_ParamLimits

0x6f84,	// (0x00099d6a) list_vitu2_match_list_item_pane

0x6f96,	// (0x00099d7c) list_vitu2_match_list_item_pane_t1

0x125a,	// (0x00094040) bg_popup_sub_pane_cp21

0x6fec,	// (0x00099dd2) grid_vitu2_dropdown_list_pane

0x6ff4,	// (0x00099dda) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ff4,	// (0x00099dda) cell_vitu2_dropdown_list_char_pane

0x7015,	// (0x00099dfb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7015,	// (0x00099dfb) cell_vitu2_dropdown_list_ctrl_pane

0xe670,	// (0x000a1456) cell_vitu2_dropdown_list_char_pane_g1

0xe679,	// (0x000a145f) cell_vitu2_dropdown_list_char_pane_g2

0xe682,	// (0x000a1468) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000a27f0) cell_vitu2_dropdown_list_char_pane_g

0x7041,	// (0x00099e27) cell_vitu2_dropdown_list_char_pane_t1

0x704f,	// (0x00099e35) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x704f,	// (0x00099e35) cell_vitu2_dropdown_list_ctrl_pane_g1

0x705f,	// (0x00099e45) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x705f,	// (0x00099e45) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7070,	// (0x00099e56) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7070,	// (0x00099e56) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7080,	// (0x00099e66) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7080,	// (0x00099e66) cell_vitu2_dropdown_list_ctrl_pane_g4

0x645c,	// (0x00099242) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x645c,	// (0x00099242) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000a27f7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000a27f7) cell_vitu2_dropdown_list_ctrl_pane_g

0x709c,	// (0x00099e82) aid_size_cell_gallery2_ParamLimits

0x709c,	// (0x00099e82) aid_size_cell_gallery2

0x70b6,	// (0x00099e9c) grid_gallery2_pane_ParamLimits

0x70b6,	// (0x00099e9c) grid_gallery2_pane

0x70cd,	// (0x00099eb3) scroll_pane_cp029_ParamLimits

0x70cd,	// (0x00099eb3) scroll_pane_cp029

0x70dd,	// (0x00099ec3) cell_gallery2_pane_ParamLimits

0x70dd,	// (0x00099ec3) cell_gallery2_pane

0xe68b,	// (0x000a1471) cell_gallery2_pane_g2

0xf0c2,	// (0x000a1ea8) cell_gallery2_pane_g3

0xe6ae,	// (0x000a1494) cell_gallery2_pane_g4

0xe6b6,	// (0x000a149c) cell_gallery2_pane_g5

0xa5a9,	// (0x0009d38f) grid_highlight_pane_cp10

0x6712,	// (0x000994f8) popup_vitu2_match_list_window_ParamLimits

0x6726,	// (0x0009950c) popup_vitu2_query_window_ParamLimits

0x6726,	// (0x0009950c) popup_vitu2_query_window

0x125a,	// (0x00094040) bg_vitu2_candi_button_pane

0xe670,	// (0x000a1456) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe679,	// (0x000a145f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe682,	// (0x000a1468) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7132,	// (0x00099f18) bg_button_pane_cp015

0x7144,	// (0x00099f2a) bg_button_pane_cp016

0x7157,	// (0x00099f3d) bg_button_pane_cp017

0xd56a,	// (0x000a0350) bg_popup_sub_pane_cp22

0xe6be,	// (0x000a14a4) popup_vitu2_query_window_g1

0x719c,	// (0x00099f82) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000a2802) popup_vitu2_query_window_g

0x71b9,	// (0x00099f9f) popup_vitu2_query_window_t1_ParamLimits

0x71b9,	// (0x00099f9f) popup_vitu2_query_window_t1

0x71ec,	// (0x00099fd2) popup_vitu2_query_window_t2_ParamLimits

0x71ec,	// (0x00099fd2) popup_vitu2_query_window_t2

0x71fe,	// (0x00099fe4) popup_vitu2_query_window_t3_ParamLimits

0x71fe,	// (0x00099fe4) popup_vitu2_query_window_t3

0x7226,	// (0x0009a00c) popup_vitu2_query_window_t4_ParamLimits

0x7226,	// (0x0009a00c) popup_vitu2_query_window_t4

0x7247,	// (0x0009a02d) popup_vitu2_query_window_t5_ParamLimits

0x7247,	// (0x0009a02d) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000a2809) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000a2809) popup_vitu2_query_window_t

0xe522,	// (0x000a1308) main_cset_text_pane

0x6b18,	// (0x000998fe) aid_area_touch_slider_ParamLimits

0x6b34,	// (0x0009991a) cset_slider_pane_ParamLimits

0x6b5e,	// (0x00099944) main_cset_slider_pane_g1_ParamLimits

0x6b73,	// (0x00099959) main_cset_slider_pane_g2_ParamLimits

0xe543,	// (0x000a1329) main_cset_slider_pane_g3_ParamLimits

0xe543,	// (0x000a1329) main_cset_slider_pane_g3

0x6b88,	// (0x0009996e) main_cset_slider_pane_g4_ParamLimits

0x6b88,	// (0x0009996e) main_cset_slider_pane_g4

0x6b97,	// (0x0009997d) main_cset_slider_pane_g5_ParamLimits

0x6b97,	// (0x0009997d) main_cset_slider_pane_g5

0x6ba5,	// (0x0009998b) main_cset_slider_pane_g6_ParamLimits

0x6ba5,	// (0x0009998b) main_cset_slider_pane_g6

0xf976,	// (0x000a275c) main_cset_slider_pane_g_ParamLimits

0xe573,	// (0x000a1359) main_cset_slider_pane_t1_ParamLimits

0x6c35,	// (0x00099a1b) main_cset_slider_pane_t2_ParamLimits

0x6c4f,	// (0x00099a35) main_cset_slider_pane_t3_ParamLimits

0x6c69,	// (0x00099a4f) main_cset_slider_pane_t4_ParamLimits

0x6c83,	// (0x00099a69) main_cset_slider_pane_t5_ParamLimits

0x6ca1,	// (0x00099a87) main_cset_slider_pane_t6_ParamLimits

0x6cb8,	// (0x00099a9e) main_cset_slider_pane_t7_ParamLimits

0x6ce6,	// (0x00099acc) main_cset_slider_pane_t8_ParamLimits

0x6ce6,	// (0x00099acc) main_cset_slider_pane_t8

0x6d0e,	// (0x00099af4) main_cset_slider_pane_t9_ParamLimits

0x6d0e,	// (0x00099af4) main_cset_slider_pane_t9

0x6d36,	// (0x00099b1c) main_cset_slider_pane_t10_ParamLimits

0x6d36,	// (0x00099b1c) main_cset_slider_pane_t10

0x6d5e,	// (0x00099b44) main_cset_slider_pane_t11_ParamLimits

0x6d5e,	// (0x00099b44) main_cset_slider_pane_t11

0x6d88,	// (0x00099b6e) main_cset_slider_pane_t12_ParamLimits

0x6d88,	// (0x00099b6e) main_cset_slider_pane_t12

0x6da5,	// (0x00099b8b) main_cset_slider_pane_t13_ParamLimits

0x6da5,	// (0x00099b8b) main_cset_slider_pane_t13

0xf99b,	// (0x000a2781) main_cset_slider_pane_t_ParamLimits

0x9ca7,	// (0x0009ca8d) bg_popup_sub_pane_cp011

0xe6ca,	// (0x000a14b0) main_cset_text_pane_g1

0xe6d2,	// (0x000a14b8) main_cset_text_pane_t1

0xe6e0,	// (0x000a14c6) main_cset_text_pane_t2

0xe6ee,	// (0x000a14d4) main_cset_text_pane_t3

0xe6fc,	// (0x000a14e2) main_cset_text_pane_t4

0xe70a,	// (0x000a14f0) main_cset_text_pane_t5

0xe718,	// (0x000a14fe) main_cset_text_pane_t6

0xe726,	// (0x000a150c) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000a2818) main_cset_text_pane_t

0x125a,	// (0x00094040) main_cam4_burst_pane

0x125a,	// (0x00094040) main_cam5_pane

0x6a67,	// (0x0009984d) bg_button_pane_cp019

0x6a70,	// (0x00099856) bg_button_pane_cp020

0xe54f,	// (0x000a1335) main_cset_slider_pane_g7_ParamLimits

0xe54f,	// (0x000a1335) main_cset_slider_pane_g7

0xe55b,	// (0x000a1341) main_cset_slider_pane_g8_ParamLimits

0xe55b,	// (0x000a1341) main_cset_slider_pane_g8

0x6bb9,	// (0x0009999f) main_cset_slider_pane_g9_ParamLimits

0x6bb9,	// (0x0009999f) main_cset_slider_pane_g9

0x6bc5,	// (0x000999ab) main_cset_slider_pane_g10_ParamLimits

0x6bc5,	// (0x000999ab) main_cset_slider_pane_g10

0x6bd1,	// (0x000999b7) main_cset_slider_pane_g11_ParamLimits

0x6bd1,	// (0x000999b7) main_cset_slider_pane_g11

0x6bdd,	// (0x000999c3) main_cset_slider_pane_g12_ParamLimits

0x6bdd,	// (0x000999c3) main_cset_slider_pane_g12

0x6be9,	// (0x000999cf) main_cset_slider_pane_g13_ParamLimits

0x6be9,	// (0x000999cf) main_cset_slider_pane_g13

0x6bf5,	// (0x000999db) main_cset_slider_pane_g14_ParamLimits

0x6bf5,	// (0x000999db) main_cset_slider_pane_g14

0x6c01,	// (0x000999e7) main_cset_slider_pane_g15_ParamLimits

0x6c01,	// (0x000999e7) main_cset_slider_pane_g15

0xe5a1,	// (0x000a1387) main_cset_slider_pane_t14_ParamLimits

0xe5a1,	// (0x000a1387) main_cset_slider_pane_t14

0xe5da,	// (0x000a13c0) main_cset_slider_pane_t15_ParamLimits

0xe5da,	// (0x000a13c0) main_cset_slider_pane_t15

0x72be,	// (0x0009a0a4) aid_cam4_burst_size_cell_ParamLimits

0x72be,	// (0x0009a0a4) aid_cam4_burst_size_cell

0x72da,	// (0x0009a0c0) grid_cam4_burst_pane_ParamLimits

0x72da,	// (0x0009a0c0) grid_cam4_burst_pane

0x730a,	// (0x0009a0f0) linegrid_cam4_burst_pane_ParamLimits

0x730a,	// (0x0009a0f0) linegrid_cam4_burst_pane

0x732a,	// (0x0009a110) scroll_pane_cp30_ParamLimits

0x732a,	// (0x0009a110) scroll_pane_cp30

0x7336,	// (0x0009a11c) cell_cam4_burst_pane_ParamLimits

0x7336,	// (0x0009a11c) cell_cam4_burst_pane

0xe734,	// (0x000a151a) linegrid_cam4_burst_pane_g1_ParamLimits

0xe734,	// (0x000a151a) linegrid_cam4_burst_pane_g1

0x7372,	// (0x0009a158) linegrid_cam4_burst_pane_g2_ParamLimits

0x7372,	// (0x0009a158) linegrid_cam4_burst_pane_g2

0xe741,	// (0x000a1527) linegrid_cam4_burst_pane_g3_ParamLimits

0xe741,	// (0x000a1527) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000a2827) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000a2827) linegrid_cam4_burst_pane_g

0x7383,	// (0x0009a169) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7383,	// (0x0009a169) linegrid_cam4_burst_pane_g3_copy1

0xe74e,	// (0x000a1534) linegrid_cam4_burst_pane_g4_ParamLimits

0xe74e,	// (0x000a1534) linegrid_cam4_burst_pane_g4

0x739d,	// (0x0009a183) linegrid_cam4_burst_pane_g5_ParamLimits

0x739d,	// (0x0009a183) linegrid_cam4_burst_pane_g5

0x73ae,	// (0x0009a194) linegrid_cam4_burst_pane_g6_ParamLimits

0x73ae,	// (0x0009a194) linegrid_cam4_burst_pane_g6

0xe75b,	// (0x000a1541) linegrid_cam4_burst_pane_g7_ParamLimits

0xe75b,	// (0x000a1541) linegrid_cam4_burst_pane_g7

0x73bf,	// (0x0009a1a5) cell_cam4_burst_pane_g1

0xe774,	// (0x000a155a) main_cam5_pane_t1_ParamLimits

0xe774,	// (0x000a155a) main_cam5_pane_t1

0xe786,	// (0x000a156c) main_cam5_pane_t2_ParamLimits

0xe786,	// (0x000a156c) main_cam5_pane_t2

0xe798,	// (0x000a157e) main_cam5_pane_t3_ParamLimits

0xe798,	// (0x000a157e) main_cam5_pane_t3

0xe7aa,	// (0x000a1590) main_cam5_pane_t4_ParamLimits

0xe7aa,	// (0x000a1590) main_cam5_pane_t4

0xe7c2,	// (0x000a15a8) main_cam5_pane_t5_ParamLimits

0xe7c2,	// (0x000a15a8) main_cam5_pane_t5

0xe7d6,	// (0x000a15bc) main_cam5_pane_t6_ParamLimits

0xe7d6,	// (0x000a15bc) main_cam5_pane_t6

0xe7ea,	// (0x000a15d0) main_cam5_pane_t7_ParamLimits

0xe7ea,	// (0x000a15d0) main_cam5_pane_t7

0xe7fc,	// (0x000a15e2) main_cam5_pane_t8_ParamLimits

0xe7fc,	// (0x000a15e2) main_cam5_pane_t8

0xe818,	// (0x000a15fe) main_cam5_pane_t9_ParamLimits

0xe818,	// (0x000a15fe) main_cam5_pane_t9

0xe82a,	// (0x000a1610) main_cam5_pane_t10_ParamLimits

0xe82a,	// (0x000a1610) main_cam5_pane_t10

0xe83c,	// (0x000a1622) main_cam5_pane_t11_ParamLimits

0xe83c,	// (0x000a1622) main_cam5_pane_t11

0xe84e,	// (0x000a1634) main_cam5_pane_t12_ParamLimits

0xe84e,	// (0x000a1634) main_cam5_pane_t12

0xe863,	// (0x000a1649) main_cam5_pane_t13_ParamLimits

0xe863,	// (0x000a1649) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000a2833) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000a2833) main_cam5_pane_t

0x11ff,	// (0x00093fe5) popup_scut_keymap_window_ParamLimits

0x11ff,	// (0x00093fe5) popup_scut_keymap_window

0x73d2,	// (0x0009a1b8) aid_size_cell_brow_shortcut

0xa5a9,	// (0x0009d38f) bg_popup_window_pane_cp010

0x73de,	// (0x0009a1c4) grid_scut_pane

0x73ea,	// (0x0009a1d0) cell_scut_pane_ParamLimits

0x73ea,	// (0x0009a1d0) cell_scut_pane

0x7401,	// (0x0009a1e7) cell_scut_pane_g1

0xe880,	// (0x000a1666) cell_scut_pane_t1

0xe88f,	// (0x000a1675) cell_scut_pane_t2

0x740a,	// (0x0009a1f0) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000a284e) cell_scut_pane_t

0x51e4,	// (0x00097fca) main_mup3_pane_g8_ParamLimits

0x51e4,	// (0x00097fca) main_mup3_pane_g8

0x6638,	// (0x0009941e) area_vitu2_query_pane_ParamLimits

0x6638,	// (0x0009941e) area_vitu2_query_pane

0x716a,	// (0x00099f50) input_focus_pane_cp08

0xe89e,	// (0x000a1684) area_vitu2_query_pane_g1

0x7418,	// (0x0009a1fe) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000a2855) area_vitu2_query_pane_g

0x7429,	// (0x0009a20f) area_vitu2_query_pane_t1_ParamLimits

0x7429,	// (0x0009a20f) area_vitu2_query_pane_t1

0x743d,	// (0x0009a223) area_vitu2_query_pane_t2_ParamLimits

0x743d,	// (0x0009a223) area_vitu2_query_pane_t2

0x7451,	// (0x0009a237) area_vitu2_query_pane_t3_ParamLimits

0x7451,	// (0x0009a237) area_vitu2_query_pane_t3

0xe8c4,	// (0x000a16aa) area_vitu2_query_pane_t4_ParamLimits

0xe8c4,	// (0x000a16aa) area_vitu2_query_pane_t4

0xe8ec,	// (0x000a16d2) area_vitu2_query_pane_t5_ParamLimits

0xe8ec,	// (0x000a16d2) area_vitu2_query_pane_t5

0xe914,	// (0x000a16fa) area_vitu2_query_pane_t6_ParamLimits

0xe914,	// (0x000a16fa) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000a285a) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000a285a) area_vitu2_query_pane_t

0x7479,	// (0x0009a25f) bg_button_pane_cp018

0x7487,	// (0x0009a26d) bg_button_pane_cp021

0x7493,	// (0x0009a279) bg_button_pane_cp022

0x74a4,	// (0x0009a28a) input_focus_pane_cp09

0xbfc3,	// (0x0009eda9) aid_size_touch_mv_arrow_left

0xbfec,	// (0x0009edd2) aid_size_touch_mv_arrow_right

0x6c19,	// (0x000999ff) main_cset_slider_pane_g16_ParamLimits

0x6c19,	// (0x000999ff) main_cset_slider_pane_g16

0x6c27,	// (0x00099a0d) main_cset_slider_pane_g17_ParamLimits

0x6c27,	// (0x00099a0d) main_cset_slider_pane_g17

0x73bf,	// (0x0009a1a5) cell_cam4_burst_pane_g1_ParamLimits

0x9ca7,	// (0x0009ca8d) compa_mode_pane

0x6e45,	// (0x00099c2b) popup_vtel_slider_window_g3_ParamLimits

0x6e45,	// (0x00099c2b) popup_vtel_slider_window_g3

0x6e59,	// (0x00099c3f) popup_vtel_slider_window_g4_ParamLimits

0x6e59,	// (0x00099c3f) popup_vtel_slider_window_g4

0x6e6d,	// (0x00099c53) popup_vtel_slider_window_t1_ParamLimits

0x6e6d,	// (0x00099c53) popup_vtel_slider_window_t1

0x125a,	// (0x00094040) main_cl_pane

0x450b,	// (0x000972f1) popup_imed_adjust2_window_ParamLimits

0xd56a,	// (0x000a0350) bg_tb_trans_pane_cp05_ParamLimits

0xdef9,	// (0x000a0cdf) popup_imed_adjust2_window_g1_ParamLimits

0xdf08,	// (0x000a0cee) popup_imed_adjust2_window_g2_ParamLimits

0xdf08,	// (0x000a0cee) popup_imed_adjust2_window_g2

0xdf14,	// (0x000a0cfa) popup_imed_adjust2_window_g3_ParamLimits

0xdf14,	// (0x000a0cfa) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000a25c5) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000a25c5) popup_imed_adjust2_window_g

0xdf20,	// (0x000a0d06) popup_imed_adjust2_window_t1_ParamLimits

0xdf38,	// (0x000a0d1e) slider_imed_adjust_pane_ParamLimits

0xdf4c,	// (0x000a0d32) slider_imed_adjust_pane_g1_ParamLimits

0xdf5c,	// (0x000a0d42) slider_imed_adjust_pane_g2_ParamLimits

0xdf6c,	// (0x000a0d52) slider_imed_adjust_pane_g3_ParamLimits

0xdf7d,	// (0x000a0d63) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000a25cc) slider_imed_adjust_pane_g_ParamLimits

0x6371,	// (0x00099157) aid_touch_area_cam4_ParamLimits

0x6371,	// (0x00099157) aid_touch_area_cam4

0x6381,	// (0x00099167) battery_pane_cp01

0x6408,	// (0x000991ee) main_camera4_pane_g6_ParamLimits

0x6408,	// (0x000991ee) main_camera4_pane_g6

0x6426,	// (0x0009920c) main_camera4_pane_t2_ParamLimits

0x6426,	// (0x0009920c) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000a26cf) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000a26cf) main_camera4_pane_t

0x64bb,	// (0x000992a1) aid_touch_area_vid4_ParamLimits

0x64bb,	// (0x000992a1) aid_touch_area_vid4

0x64fb,	// (0x000992e1) main_video4_pane_g5_ParamLimits

0x64fb,	// (0x000992e1) main_video4_pane_g5

0x651f,	// (0x00099305) vid4_progress_pane_ParamLimits

0x651f,	// (0x00099305) vid4_progress_pane

0xe567,	// (0x000a134d) main_cset_slider_pane_g18_ParamLimits

0xe567,	// (0x000a134d) main_cset_slider_pane_g18

0xe768,	// (0x000a154e) cell_cam4_burst_pane_g2_ParamLimits

0xe768,	// (0x000a154e) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000a282e) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000a282e) cell_cam4_burst_pane_g

0x74b5,	// (0x0009a29b) bg_cl_pane_ParamLimits

0x74b5,	// (0x0009a29b) bg_cl_pane

0x74c1,	// (0x0009a2a7) cl_header_pane_ParamLimits

0x74c1,	// (0x0009a2a7) cl_header_pane

0x74cd,	// (0x0009a2b3) cl_listscroll_pane_ParamLimits

0x74cd,	// (0x0009a2b3) cl_listscroll_pane

0xecbf,	// (0x000a1aa5) bg_cl_pane_g1

0xecc7,	// (0x000a1aad) bg_cl_pane_g2

0xeccf,	// (0x000a1ab5) bg_cl_pane_g3

0xecd7,	// (0x000a1abd) bg_cl_pane_g4

0xecdf,	// (0x000a1ac5) bg_cl_pane_g5

0xece7,	// (0x000a1acd) bg_cl_pane_g6

0xecef,	// (0x000a1ad5) bg_cl_pane_g7

0xecf7,	// (0x000a1add) bg_cl_pane_g8

0xecff,	// (0x000a1ae5) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000a2869) bg_cl_pane_g

0x74d9,	// (0x0009a2bf) aid_height_cl_leading_ParamLimits

0x74d9,	// (0x0009a2bf) aid_height_cl_leading

0x74e5,	// (0x0009a2cb) aid_height_cl_text_ParamLimits

0x74e5,	// (0x0009a2cb) aid_height_cl_text

0xeac4,	// (0x000a18aa) bg_cl_header_pane_ParamLimits

0xeac4,	// (0x000a18aa) bg_cl_header_pane

0x74fd,	// (0x0009a2e3) cl_header_pane_g1_ParamLimits

0x74fd,	// (0x0009a2e3) cl_header_pane_g1

0x750a,	// (0x0009a2f0) cl_header_pane_t1_ParamLimits

0x750a,	// (0x0009a2f0) cl_header_pane_t1

0xed07,	// (0x000a1aed) cl_list_pane

0xe53a,	// (0x000a1320) hc_scroll_pane_cp01

0xa7e2,	// (0x0009d5c8) bg_cl_header_pane_g1

0xe420,	// (0x000a1206) bg_cl_header_pane_g2

0xb953,	// (0x0009e739) bg_cl_header_pane_g3

0xe430,	// (0x000a1216) bg_cl_header_pane_g4

0xe428,	// (0x000a120e) bg_cl_header_pane_g5

0xe668,	// (0x000a144e) bg_cl_header_pane_g6

0xe448,	// (0x000a122e) bg_cl_header_pane_g7

0xe450,	// (0x000a1236) bg_cl_header_pane_g8

0xe440,	// (0x000a1226) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000a287c) bg_cl_header_pane_g

0x751c,	// (0x0009a302) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x751c,	// (0x0009a302) hc_cl_list_double_graphic_heading_pane

0x752d,	// (0x0009a313) hc_cl_list_single_graphic_pane_ParamLimits

0x752d,	// (0x0009a313) hc_cl_list_single_graphic_pane

0x7546,	// (0x0009a32c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7546,	// (0x0009a32c) hc_cl_list_single_graphic_pane_g1

0x7552,	// (0x0009a338) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7552,	// (0x0009a338) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000a288f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000a288f) hc_cl_list_single_graphic_pane_g

0x7566,	// (0x0009a34c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7566,	// (0x0009a34c) hc_cl_list_single_graphic_pane_t1

0x7546,	// (0x0009a32c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7546,	// (0x0009a32c) hc_cl_list_double_graphic_heading_pane_g1

0x757b,	// (0x0009a361) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x757b,	// (0x0009a361) hc_cl_list_double_graphic_heading_pane_g2

0x758f,	// (0x0009a375) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x758f,	// (0x0009a375) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000a2894) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000a2894) hc_cl_list_double_graphic_heading_pane_g

0x75a3,	// (0x0009a389) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75a3,	// (0x0009a389) hc_cl_list_double_graphic_heading_pane_t1

0x75b8,	// (0x0009a39e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75b8,	// (0x0009a39e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000a289b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000a289b) hc_cl_list_double_graphic_heading_pane_t

0x75d5,	// (0x0009a3bb) vid4_progress_pane_g1

0x75e5,	// (0x0009a3cb) vid4_progress_pane_g2

0x75f5,	// (0x0009a3db) vid4_progress_pane_g3

0x7607,	// (0x0009a3ed) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000a28a0) vid4_progress_pane_g

0x761f,	// (0x0009a405) vid4_progress_pane_t1

0x7635,	// (0x0009a41b) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000a28ab) vid4_progress_pane_t

0x765f,	// (0x0009a445) wait_bar_pane_cp07

0xd76e,	// (0x000a0554) blid_firmament_pane_ParamLimits

0xd7b1,	// (0x000a0597) popup_blid_sat_info2_window_g1

0xd7d5,	// (0x000a05bb) popup_blid_sat_info2_window_t3

0xd7e3,	// (0x000a05c9) popup_blid_sat_info2_window_t4

0xd7f1,	// (0x000a05d7) popup_blid_sat_info2_window_t5

0xd7ff,	// (0x000a05e5) popup_blid_sat_info2_window_t6

0xd80f,	// (0x000a05f5) popup_blid_sat_info2_window_t7

0xd81d,	// (0x000a0603) popup_blid_sat_info2_window_t8

0xd82b,	// (0x000a0611) popup_blid_sat_info2_window_t9

0xd839,	// (0x000a061f) popup_blid_sat_info2_window_t10

0xd8fb,	// (0x000a06e1) aid_firma_cardinal_ParamLimits

0xd90f,	// (0x000a06f5) blid_firmament_pane_t1_ParamLimits

0xd926,	// (0x000a070c) blid_firmament_pane_t2_ParamLimits

0xd93d,	// (0x000a0723) blid_firmament_pane_t3_ParamLimits

0xd954,	// (0x000a073a) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000a24b9) blid_firmament_pane_t_ParamLimits

0xd96b,	// (0x000a0751) blid_sat_info_pane_ParamLimits

0x446d,	// (0x00097253) main_cam_set_pane_ParamLimits

0x599d,	// (0x00098783) aid_size_cell_colour_35_ParamLimits

0x59b7,	// (0x0009879d) aid_size_cell_colour_112_ParamLimits

0x59ce,	// (0x000987b4) aid_size_cell_effect_ParamLimits

0xa7fa,	// (0x0009d5e0) bg_tb_trans_pane_cp02_ParamLimits

0xbf4f,	// (0x0009ed35) heading_imed_pane_ParamLimits

0x59e8,	// (0x000987ce) listscroll_imed_pane_ParamLimits

0xcb90,	// (0x0009f976) popup_call2_audio_first_window_g5_ParamLimits

0xcb90,	// (0x0009f976) popup_call2_audio_first_window_g5

0x60ee,	// (0x00098ed4) aid_size_touch_image3_arrow_left_ParamLimits

0x60ee,	// (0x00098ed4) aid_size_touch_image3_arrow_left

0x6104,	// (0x00098eea) aid_size_touch_image3_arrow_right_ParamLimits

0x6104,	// (0x00098eea) aid_size_touch_image3_arrow_right

0x764a,	// (0x0009a430) vid4_progress_pane_t3

0x5c86,	// (0x00098a6c) main_hwr_training_symbol_option_pane_ParamLimits

0x5c86,	// (0x00098a6c) main_hwr_training_symbol_option_pane

0xe1e6,	// (0x000a0fcc) popup_hwr_training_preview_window_ParamLimits

0xe1e6,	// (0x000a0fcc) popup_hwr_training_preview_window

0x5ce7,	// (0x00098acd) hwr_training_navi_pane_g5_ParamLimits

0x5ce7,	// (0x00098acd) hwr_training_navi_pane_g5

0xe40e,	// (0x000a11f4) popup_char_count_window

0x1240,	// (0x00094026) bg_popup_sub_pane_cp20_ParamLimits

0x6f6c,	// (0x00099d52) list_vitu2_match_list_pane_ParamLimits

0x6f78,	// (0x00099d5e) vitu2_page_scroll_pane_ParamLimits

0x6f78,	// (0x00099d5e) vitu2_page_scroll_pane

0xed18,	// (0x000a1afe) list_single_hwr_training_symbol_option_pane_ParamLimits

0xed18,	// (0x000a1afe) list_single_hwr_training_symbol_option_pane

0xed2b,	// (0x000a1b11) list_single_hwr_training_symbol_option_pane_g1

0xed33,	// (0x000a1b19) list_single_hwr_training_symbol_option_pane_t1

0xed41,	// (0x000a1b27) bg_button_pane_cp023

0xed4a,	// (0x000a1b30) bg_button_pane_cp024

0x76a1,	// (0x0009a487) vitu2_page_scroll_pane_g1

0x76a9,	// (0x0009a48f) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000a28b2) vitu2_page_scroll_pane_g

0x76b1,	// (0x0009a497) vitu2_page_scroll_pane_t1

0xd6ce,	// (0x000a04b4) popup_char_count_window_g1

0xed7d,	// (0x000a1b63) popup_char_count_window_g2

0xed86,	// (0x000a1b6c) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000a28b7) popup_char_count_window_g

0xed8f,	// (0x000a1b75) popup_char_count_window_t1

0x125a,	// (0x00094040) main_vded2_pane

0xdee5,	// (0x000a0ccb) aid_size_cell_imed_line

0xdeef,	// (0x000a0cd5) grid_imed_line_width_pane

0x658d,	// (0x00099373) vid4_indicators_pane_g4

0xed9d,	// (0x000a1b83) cell_imed_line_width_pane_ParamLimits

0xed9d,	// (0x000a1b83) cell_imed_line_width_pane

0xedb9,	// (0x000a1b9f) cell_imed_line_width_pane_g1

0xedb1,	// (0x000a1b97) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000a28be) cell_imed_line_width_pane_g

0x76c0,	// (0x0009a4a6) main_vded2_pane_g1_ParamLimits

0x76c0,	// (0x0009a4a6) main_vded2_pane_g1

0x76cd,	// (0x0009a4b3) main_vded2_pane_g2_ParamLimits

0x76cd,	// (0x0009a4b3) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000a28c3) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000a28c3) main_vded2_pane_g

0x76db,	// (0x0009a4c1) vded2_slider_pane_ParamLimits

0x76db,	// (0x0009a4c1) vded2_slider_pane

0x76e8,	// (0x0009a4ce) aid_size_touch_vded2_end

0x76f2,	// (0x0009a4d8) aid_size_touch_vded2_playhead

0xedc2,	// (0x000a1ba8) aid_size_touch_vded2_start

0xedca,	// (0x000a1bb0) vded2_slider_bg_pane

0xedd3,	// (0x000a1bb9) vded2_slider_pane_g1

0xeddc,	// (0x000a1bc2) vded2_slider_pane_g2

0x76fa,	// (0x0009a4e0) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000a28c8) vded2_slider_pane_g

0xede4,	// (0x000a1bca) vded2_slider_bg_pane_g1

0xeded,	// (0x000a1bd3) vded2_slider_bg_pane_g2

0xedf6,	// (0x000a1bdc) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000a28cf) vded2_slider_bg_pane_g

0x3d55,	// (0x00096b3b) aid_postcard_touch_down_pane_ParamLimits

0x3d55,	// (0x00096b3b) aid_postcard_touch_down_pane

0x3d65,	// (0x00096b4b) aid_postcard_touch_up_pane_ParamLimits

0x3d65,	// (0x00096b4b) aid_postcard_touch_up_pane

0x125a,	// (0x00094040) main_blid2_pane

0x4496,	// (0x0009727c) popup_blid2_search_window

0x9ca7,	// (0x0009ca8d) blid2_gps_pane

0x9ca7,	// (0x0009ca8d) blid2_navig_pane

0x9ca7,	// (0x0009ca8d) blid2_search_pane

0x9ca7,	// (0x0009ca8d) blid2_tripm_pane

0x7703,	// (0x0009a4e9) blid2_search_pane_g1_ParamLimits

0x7703,	// (0x0009a4e9) blid2_search_pane_g1

0x7713,	// (0x0009a4f9) blid2_search_pane_t1_ParamLimits

0x7713,	// (0x0009a4f9) blid2_search_pane_t1

0x7725,	// (0x0009a50b) aid_size_cell_blid2_gps_ParamLimits

0x7725,	// (0x0009a50b) aid_size_cell_blid2_gps

0x7735,	// (0x0009a51b) blid2_gps_pane_g1_ParamLimits

0x7735,	// (0x0009a51b) blid2_gps_pane_g1

0x7741,	// (0x0009a527) grid_blid2_satellite_pane_ParamLimits

0x7741,	// (0x0009a527) grid_blid2_satellite_pane

0x7751,	// (0x0009a537) blid2_navig_pane_g1_ParamLimits

0x7751,	// (0x0009a537) blid2_navig_pane_g1

0x775d,	// (0x0009a543) blid2_navig_pane_t1_ParamLimits

0x775d,	// (0x0009a543) blid2_navig_pane_t1

0x776f,	// (0x0009a555) blid2_navig_pane_t2_ParamLimits

0x776f,	// (0x0009a555) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000a28d6) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000a28d6) blid2_navig_pane_t

0x7781,	// (0x0009a567) blid2_navig_ring_pane_ParamLimits

0x7781,	// (0x0009a567) blid2_navig_ring_pane

0x7791,	// (0x0009a577) blid2_speed_pane_ParamLimits

0x7791,	// (0x0009a577) blid2_speed_pane

0x779d,	// (0x0009a583) blid2_tripm_pane_g1_ParamLimits

0x779d,	// (0x0009a583) blid2_tripm_pane_g1

0x77ad,	// (0x0009a593) blid2_tripm_pane_g2_ParamLimits

0x77ad,	// (0x0009a593) blid2_tripm_pane_g2

0x77b9,	// (0x0009a59f) blid2_tripm_pane_g3_ParamLimits

0x77b9,	// (0x0009a59f) blid2_tripm_pane_g3

0x77c5,	// (0x0009a5ab) blid2_tripm_pane_g4_ParamLimits

0x77c5,	// (0x0009a5ab) blid2_tripm_pane_g4

0x77d1,	// (0x0009a5b7) blid2_tripm_pane_g5_ParamLimits

0x77d1,	// (0x0009a5b7) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000a28db) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000a28db) blid2_tripm_pane_g

0x77ed,	// (0x0009a5d3) blid2_tripm_pane_t1_ParamLimits

0x77ed,	// (0x0009a5d3) blid2_tripm_pane_t1

0x7801,	// (0x0009a5e7) blid2_tripm_pane_t2_ParamLimits

0x7801,	// (0x0009a5e7) blid2_tripm_pane_t2

0x7813,	// (0x0009a5f9) blid2_tripm_pane_t3_ParamLimits

0x7813,	// (0x0009a5f9) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000a28e8) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000a28e8) blid2_tripm_pane_t

0x7845,	// (0x0009a62b) cell_blid2_satellite_pane_ParamLimits

0x7845,	// (0x0009a62b) cell_blid2_satellite_pane

0x785f,	// (0x0009a645) cell_blid2_satellite_pane_g1

0xedff,	// (0x000a1be5) cell_blid2_satellite_pane_t1

0xd97b,	// (0x000a0761) blid2_speed_pane_g1

0xee0d,	// (0x000a1bf3) blid2_speed_pane_t1

0xee1b,	// (0x000a1c01) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000a28f1) blid2_speed_pane_t

0xd97b,	// (0x000a0761) blid2_navig_ring_pane_g1

0x7868,	// (0x0009a64e) blid2_navig_ring_pane_g2

0x7870,	// (0x0009a656) blid2_navig_ring_pane_g3

0x7878,	// (0x0009a65e) blid2_navig_ring_pane_g4

0x7880,	// (0x0009a666) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000a28f6) blid2_navig_ring_pane_g

0x9ca7,	// (0x0009ca8d) bg_popup_window_pane_cp011

0xee29,	// (0x000a1c0f) popup_blid2_search_window_g1

0xee31,	// (0x000a1c17) popup_blid2_search_window_t1

0xee49,	// (0x000a1c2f) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000a2901) popup_blid2_search_window_t

0xa6f1,	// (0x0009d4d7) main_browser_pane_g1

0xa3e4,	// (0x0009d1ca) main_browser_pane_ParamLimits

0x446d,	// (0x00097253) bg_button_pane_cp011_ParamLimits

0x683a,	// (0x00099620) cell_vitu2_function_pane_g1_ParamLimits

0xd56a,	// (0x000a0350) bg_popup_sub_pane_cp22_ParamLimits

0x716a,	// (0x00099f50) input_focus_pane_cp08_ParamLimits

0x7181,	// (0x00099f67) popup_vitu2_query_button_pane_ParamLimits

0x7181,	// (0x00099f67) popup_vitu2_query_button_pane

0x7192,	// (0x00099f78) popup_vitu2_query_input_button_pane

0xe6be,	// (0x000a14a4) popup_vitu2_query_window_g1_ParamLimits

0x719c,	// (0x00099f82) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000a2802) popup_vitu2_query_window_g_ParamLimits

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp026

0x7888,	// (0x0009a66e) popup_vitu2_query_input_button_pane_g1

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp025

0xee57,	// (0x000a1c3d) popup_vitu2_query_button_pane_t1

0x4eec,	// (0x00097cd2) main_mp3_pane_t6

0x4efc,	// (0x00097ce2) popup_slider_window_cp01

0x646a,	// (0x00099250) cam4_battery_pane

0x654a,	// (0x00099330) cam4_battery_pane_cp02

0x75cd,	// (0x0009a3b3) cam4_battery_pane_cp01

0x75cd,	// (0x0009a3b3) cam4_battery_pane_cp03

0xee3f,	// (0x000a1c25) cam4_battery_pane_g1

0xd97b,	// (0x000a0761) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000a2906) cam4_battery_pane_g

0xd847,	// (0x000a062d) popup_blid_sat_info2_window_t11

0xbfc3,	// (0x0009eda9) aid_size_touch_mv_arrow_left_ParamLimits

0xbfec,	// (0x0009edd2) aid_size_touch_mv_arrow_right_ParamLimits

0xc04a,	// (0x0009ee30) navi_pane_g1_ParamLimits

0xc056,	// (0x0009ee3c) navi_pane_g2_ParamLimits

0xc084,	// (0x0009ee6a) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000a21cb) navi_pane_g_ParamLimits

0x36e5,	// (0x000964cb) navi_pane_mv_t1_ParamLimits

0x59f4,	// (0x000987da) grid_imed_effect_pane_ParamLimits

0x20cf,	// (0x00094eb5) aid_placing_vt_slider_lsc

0xa640,	// (0x0009d426) aid_placing_vt_slider_prt

0xa7fa,	// (0x0009d5e0) bg_tb_trans_pane_cp01_ParamLimits

0xdafe,	// (0x000a08e4) popup_image_details_window_g1_ParamLimits

0xdb11,	// (0x000a08f7) popup_image_details_window_g2_ParamLimits

0xdb26,	// (0x000a090c) popup_image_details_window_g3_ParamLimits

0xdb26,	// (0x000a090c) popup_image_details_window_g3

0xf718,	// (0x000a24fe) popup_image_details_window_g_ParamLimits

0xdb3a,	// (0x000a0920) popup_image_details_window_t1_ParamLimits

0xdb4c,	// (0x000a0932) popup_image_details_window_t2_ParamLimits

0xdb65,	// (0x000a094b) popup_image_details_window_t3_ParamLimits

0xdb79,	// (0x000a095f) popup_image_details_window_t4_ParamLimits

0xdb94,	// (0x000a097a) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000a2505) popup_image_details_window_t_ParamLimits

0x74f1,	// (0x0009a2d7) cl_header_name_pane_ParamLimits

0x74f1,	// (0x0009a2d7) cl_header_name_pane

0x7890,	// (0x0009a676) cl_header_name_pane_t1_ParamLimits

0x7890,	// (0x0009a676) cl_header_name_pane_t1

0x78a7,	// (0x0009a68d) cl_header_name_pane_t2_ParamLimits

0x78a7,	// (0x0009a68d) cl_header_name_pane_t2

0x78d1,	// (0x0009a6b7) cl_header_name_pane_t3_ParamLimits

0x78d1,	// (0x0009a6b7) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000a290b) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000a290b) cl_header_name_pane_t

0xc113,	// (0x0009eef9) navi_pane_mv_g2_ParamLimits

0xe3cb,	// (0x000a11b1) field_vitu2_entry_pane_g1_ParamLimits

0xe3d7,	// (0x000a11bd) field_vitu2_entry_pane_g2_ParamLimits

0xe3e3,	// (0x000a11c9) field_vitu2_entry_pane_g3_ParamLimits

0xe3e3,	// (0x000a11c9) field_vitu2_entry_pane_g3

0xf91b,	// (0x000a2701) field_vitu2_entry_pane_g_ParamLimits

0x67ce,	// (0x000995b4) cell_vitu2_itu_pane_g1_ParamLimits

0x67e0,	// (0x000995c6) cell_vitu2_itu_pane_g2_ParamLimits

0x67e0,	// (0x000995c6) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000a270d) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000a270d) cell_vitu2_itu_pane_g

0x446d,	// (0x00097253) bg_vkb2_func_pane_cp05_ParamLimits

0x446d,	// (0x00097253) bg_vkb2_func_pane_cp05

0x446d,	// (0x00097253) bg_vkb2_func_pane_cp03

0x446d,	// (0x00097253) bg_vkb2_func_pane_cp04

0x446d,	// (0x00097253) bg_vkb2_func_pane_cp10_ParamLimits

0x446d,	// (0x00097253) bg_vkb2_func_pane_cp10

0x7493,	// (0x0009a279) bg_vkb2_func_pane_cp08

0x7479,	// (0x0009a25f) bg_vkb2_func_pane_cp06

0x7487,	// (0x0009a26d) bg_vkb2_func_pane_cp07

0xed53,	// (0x000a1b39) bg_vkb2_func_pane_cp11_ParamLimits

0xed53,	// (0x000a1b39) bg_vkb2_func_pane_cp11

0xed68,	// (0x000a1b4e) bg_vkb2_func_pane_cp12_ParamLimits

0xed68,	// (0x000a1b4e) bg_vkb2_func_pane_cp12

0x9ca7,	// (0x0009ca8d) bg_vkb2_func_pane_cp09

0xe420,	// (0x000a1206) bg_vkb2_func_pane_g1

0xb953,	// (0x0009e739) bg_vkb2_func_pane_g2

0xe428,	// (0x000a120e) bg_vkb2_func_pane_g3

0xe430,	// (0x000a1216) bg_vkb2_func_pane_g4

0xe668,	// (0x000a144e) bg_vkb2_func_pane_g5

0xe448,	// (0x000a122e) bg_vkb2_func_pane_g6

0xe450,	// (0x000a1236) bg_vkb2_func_pane_g7

0xe440,	// (0x000a1226) bg_vkb2_func_pane_g8

0xa7e2,	// (0x0009d5c8) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000a2912) bg_vkb2_func_pane_g

0x77df,	// (0x0009a5c5) blid2_tripm_pane_g6_ParamLimits

0x77df,	// (0x0009a5c5) blid2_tripm_pane_g6

0xe29e,	// (0x000a1084) mp4_progress_pane_g1

0x7839,	// (0x0009a61f) blid2_tripm_values_pane_ParamLimits

0x7839,	// (0x0009a61f) blid2_tripm_values_pane

0x78f6,	// (0x0009a6dc) blid2_tripm_values_pane_t1

0x7904,	// (0x0009a6ea) blid2_tripm_values_pane_t2

0x7912,	// (0x0009a6f8) blid2_tripm_values_pane_t3

0x7920,	// (0x0009a706) blid2_tripm_values_pane_t4

0x792e,	// (0x0009a714) blid2_tripm_values_pane_t5

0x793c,	// (0x0009a722) blid2_tripm_values_pane_t6

0x794a,	// (0x0009a730) blid2_tripm_values_pane_t7

0x7958,	// (0x0009a73e) blid2_tripm_values_pane_t8

0x7966,	// (0x0009a74c) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000a2925) blid2_tripm_values_pane_t

0x210f,	// (0x00094ef5) call_video_pane_t1_ParamLimits

0x2130,	// (0x00094f16) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000a2054) call_video_pane_t_ParamLimits

0x3c26,	// (0x00096a0c) msg_header_pane_g1_ParamLimits

0xc2ed,	// (0x0009f0d3) msg_header_pane_g2_ParamLimits

0xc2ed,	// (0x0009f0d3) msg_header_pane_g2

0x0001,

0xf488,	// (0x000a226e) msg_header_pane_g_ParamLimits

0xf488,	// (0x000a226e) msg_header_pane_g

0xa3e4,	// (0x0009d1ca) main_clock2_pane_ParamLimits

0x578c,	// (0x00098572) grid_clock2_toolbar_pane_ParamLimits

0x578c,	// (0x00098572) grid_clock2_toolbar_pane

0x578c,	// (0x00098572) listscroll_clock2_pane_ParamLimits

0x578c,	// (0x00098572) listscroll_clock2_pane

0x5832,	// (0x00098618) main_clock2_pane_t3_ParamLimits

0x5832,	// (0x00098618) main_clock2_pane_t3

0x5844,	// (0x0009862a) main_clock2_pane_t4_ParamLimits

0x5844,	// (0x0009862a) main_clock2_pane_t4

0xee65,	// (0x000a1c4b) cell_clock2_toolbar_pane

0xee6d,	// (0x000a1c53) cell_clock2_toolbar_pane_cp01

0xee6d,	// (0x000a1c53) cell_clock2_toolbar_pane_cp02

0xee75,	// (0x000a1c5b) cell_clock2_toolbar_pane_cp03

0xee7d,	// (0x000a1c63) list_clock2_pane

0xbf13,	// (0x0009ecf9) scroll_pane_cp10

0xee85,	// (0x000a1c6b) list_single_clock2_pane_ParamLimits

0xee85,	// (0x000a1c6b) list_single_clock2_pane

0xa5a9,	// (0x0009d38f) list_highlight_pane_cp08

0xee92,	// (0x000a1c78) list_single_clock2_pane_t1

0xeea0,	// (0x000a1c86) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000a2938) list_single_clock2_pane_t

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp10

0xeeae,	// (0x000a1c94) cell_clock2_toolbar_pane_g1

0x3cc3,	// (0x00096aa9) aid_main_viewer_pane_g1_ParamLimits

0x3cc3,	// (0x00096aa9) aid_main_viewer_pane_g1

0x3ccf,	// (0x00096ab5) aid_main_viewer_pane_g2_ParamLimits

0x3ccf,	// (0x00096ab5) aid_main_viewer_pane_g2

0x3cdb,	// (0x00096ac1) aid_main_viewer_pane_g3_ParamLimits

0x3cdb,	// (0x00096ac1) aid_main_viewer_pane_g3

0x3cec,	// (0x00096ad2) aid_main_viewer_pane_g4_ParamLimits

0x3cec,	// (0x00096ad2) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000a227f) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000a227f) aid_main_viewer_pane_g

0x4460,	// (0x00097246) main_calc_pane_ParamLimits

0x447b,	// (0x00097261) main_dialer2_pane_ParamLimits

0x125a,	// (0x00094040) main_cam6_pane

0x125a,	// (0x00094040) main_vid6_pane

0x5798,	// (0x0009857e) listscroll_gen_pane_cp06_ParamLimits

0x5798,	// (0x0009857e) listscroll_gen_pane_cp06

0x5856,	// (0x0009863c) main_clock2_pane_t5_ParamLimits

0x5856,	// (0x0009863c) main_clock2_pane_t5

0x589f,	// (0x00098685) aid_call2_pane_cp10_ParamLimits

0x58b1,	// (0x00098697) aid_call_pane_cp10_ParamLimits

0xbfb7,	// (0x0009ed9d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xbfb7,	// (0x0009ed9d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58c3,	// (0x000986a9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58c3,	// (0x000986a9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xbfb7,	// (0x0009ed9d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000a25ba) popup_clock_analogue_window_cp10_g_ParamLimits

0x58d5,	// (0x000986bb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x609b,	// (0x00098e81) cell_dialer2_keypad_pane_g2_ParamLimits

0x609b,	// (0x00098e81) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000a26a0) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000a26a0) cell_dialer2_keypad_pane_g

0x60b7,	// (0x00098e9d) cell_dialer2_keypad_pane_t1

0x6b05,	// (0x000998eb) main_cset_text2_pane_ParamLimits

0x6b05,	// (0x000998eb) main_cset_text2_pane

0xe89e,	// (0x000a1684) area_vitu2_query_pane_g1_ParamLimits

0x7418,	// (0x0009a1fe) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000a2855) area_vitu2_query_pane_g_ParamLimits

0xe93c,	// (0x000a1722) area_vitu2_query_pane_t7_ParamLimits

0xe93c,	// (0x000a1722) area_vitu2_query_pane_t7

0x7479,	// (0x0009a25f) bg_button_pane_cp018_ParamLimits

0x7487,	// (0x0009a26d) bg_button_pane_cp021_ParamLimits

0x7493,	// (0x0009a279) bg_button_pane_cp022_ParamLimits

0x7493,	// (0x0009a279) bg_vkb2_func_pane_cp08_ParamLimits

0x7479,	// (0x0009a25f) bg_vkb2_func_pane_cp06_ParamLimits

0x7487,	// (0x0009a26d) bg_vkb2_func_pane_cp07_ParamLimits

0x74a4,	// (0x0009a28a) input_focus_pane_cp09_ParamLimits

0x7974,	// (0x0009a75a) cam6_autofocus_pane_ParamLimits

0x7974,	// (0x0009a75a) cam6_autofocus_pane

0x7996,	// (0x0009a77c) cam6_image_uncrop_pane_ParamLimits

0x7996,	// (0x0009a77c) cam6_image_uncrop_pane

0x79c3,	// (0x0009a7a9) cam6_indi_pane_ParamLimits

0x79c3,	// (0x0009a7a9) cam6_indi_pane

0x79dd,	// (0x0009a7c3) cam6_mode_pane_ParamLimits

0x79dd,	// (0x0009a7c3) cam6_mode_pane

0x79f1,	// (0x0009a7d7) cam6_timer_pane_ParamLimits

0x79f1,	// (0x0009a7d7) cam6_timer_pane

0x79fd,	// (0x0009a7e3) cam6_zoom_pane_ParamLimits

0x79fd,	// (0x0009a7e3) cam6_zoom_pane

0x7a15,	// (0x0009a7fb) cam6_mode_pane_g1_ParamLimits

0x7a15,	// (0x0009a7fb) cam6_mode_pane_g1

0x7a21,	// (0x0009a807) cam6_mode_pane_g2_ParamLimits

0x7a21,	// (0x0009a807) cam6_mode_pane_g2

0x7a2d,	// (0x0009a813) cam6_mode_pane_g3_ParamLimits

0x7a2d,	// (0x0009a813) cam6_mode_pane_g3

0x7a39,	// (0x0009a81f) cam6_mode_pane_g4_ParamLimits

0x7a39,	// (0x0009a81f) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000a293d) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000a293d) cam6_mode_pane_g

0xe8b6,	// (0x000a169c) bg_tb_trans_pane_cp08_ParamLimits

0xe8b6,	// (0x000a169c) bg_tb_trans_pane_cp08

0xeeb6,	// (0x000a1c9c) cam6_battery_pane_ParamLimits

0xeeb6,	// (0x000a1c9c) cam6_battery_pane

0xeecc,	// (0x000a1cb2) cam6_indi_pane_g1_ParamLimits

0xeecc,	// (0x000a1cb2) cam6_indi_pane_g1

0xeede,	// (0x000a1cc4) cam6_indi_pane_g2_ParamLimits

0xeede,	// (0x000a1cc4) cam6_indi_pane_g2

0xeef0,	// (0x000a1cd6) cam6_indi_pane_g3_ParamLimits

0xeef0,	// (0x000a1cd6) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000a2946) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000a2946) cam6_indi_pane_g

0xef02,	// (0x000a1ce8) cam6_indi_pane_t1_ParamLimits

0xef02,	// (0x000a1ce8) cam6_indi_pane_t1

0x65ca,	// (0x000993b0) cam6_autofocus_pane_g1

0x65c2,	// (0x000993a8) cam6_autofocus_pane_g2

0x65da,	// (0x000993c0) cam6_autofocus_pane_g3

0x65d2,	// (0x000993b8) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000a294d) cam6_autofocus_pane_g

0xef28,	// (0x000a1d0e) cam6_timer_pane_g1

0xef30,	// (0x000a1d16) cam6_timer_pane_t1

0xef3e,	// (0x000a1d24) cam6_zoom_cont_pane

0xef46,	// (0x000a1d2c) cam6_zoom_pane_g1

0xef4e,	// (0x000a1d34) cam6_zoom_pane_g2

0x7a45,	// (0x0009a82b) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000a2956) cam6_zoom_pane_g

0xd97b,	// (0x000a0761) cam6_battery_pane_g1

0xd97b,	// (0x000a0761) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000a24c2) cam6_battery_pane_g

0xef56,	// (0x000a1d3c) cam6_zoom_cont_pane_g1

0xef5f,	// (0x000a1d45) cam6_zoom_cont_pane_g2

0xef68,	// (0x000a1d4e) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000a295d) cam6_zoom_cont_pane_g

0x7a62,	// (0x0009a848) cam6_mode_pane_cp_ParamLimits

0x7a62,	// (0x0009a848) cam6_mode_pane_cp

0x7a76,	// (0x0009a85c) cam6_zoom_pane_cp_ParamLimits

0x7a76,	// (0x0009a85c) cam6_zoom_pane_cp

0x7a8e,	// (0x0009a874) vid6_image_uncrop_cif_pane_ParamLimits

0x7a8e,	// (0x0009a874) vid6_image_uncrop_cif_pane

0x7aba,	// (0x0009a8a0) vid6_image_uncrop_nhd_pane_ParamLimits

0x7aba,	// (0x0009a8a0) vid6_image_uncrop_nhd_pane

0x7ad7,	// (0x0009a8bd) vid6_image_uncrop_vga_pane_ParamLimits

0x7ad7,	// (0x0009a8bd) vid6_image_uncrop_vga_pane

0x7af6,	// (0x0009a8dc) vid6_image_uncrop_wvga_pane_ParamLimits

0x7af6,	// (0x0009a8dc) vid6_image_uncrop_wvga_pane

0x7b13,	// (0x0009a8f9) vid6_indi_pane_ParamLimits

0x7b13,	// (0x0009a8f9) vid6_indi_pane

0xe8b6,	// (0x000a169c) bg_tb_trans_pane_cp09_ParamLimits

0xe8b6,	// (0x000a169c) bg_tb_trans_pane_cp09

0xef80,	// (0x000a1d66) cam6_battery_pane_cp_ParamLimits

0xef80,	// (0x000a1d66) cam6_battery_pane_cp

0xef8c,	// (0x000a1d72) vid6_indi_pane_g1_ParamLimits

0xef8c,	// (0x000a1d72) vid6_indi_pane_g1

0xef9e,	// (0x000a1d84) vid6_indi_pane_g2_ParamLimits

0xef9e,	// (0x000a1d84) vid6_indi_pane_g2

0xefb0,	// (0x000a1d96) vid6_indi_pane_g3_ParamLimits

0xefb0,	// (0x000a1d96) vid6_indi_pane_g3

0xefc5,	// (0x000a1dab) vid6_indi_pane_g4_ParamLimits

0xefc5,	// (0x000a1dab) vid6_indi_pane_g4

0xefda,	// (0x000a1dc0) vid6_indi_pane_g5_ParamLimits

0xefda,	// (0x000a1dc0) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000a2964) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000a2964) vid6_indi_pane_g

0xeff4,	// (0x000a1dda) vid6_indi_pane_t1_ParamLimits

0xeff4,	// (0x000a1dda) vid6_indi_pane_t1

0xf00a,	// (0x000a1df0) vid6_indi_pane_t2_ParamLimits

0xf00a,	// (0x000a1df0) vid6_indi_pane_t2

0xf032,	// (0x000a1e18) vid6_indi_pane_t3_ParamLimits

0xf032,	// (0x000a1e18) vid6_indi_pane_t3

0xf05a,	// (0x000a1e40) vid6_indi_pane_t4_ParamLimits

0xf05a,	// (0x000a1e40) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000a296f) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000a296f) vid6_indi_pane_t

0xa811,	// (0x0009d5f7) wait_bar_pane_cp08

0x7b38,	// (0x0009a91e) main_cset_text2_pane_t1_ParamLimits

0x7b38,	// (0x0009a91e) main_cset_text2_pane_t1

0x7a4d,	// (0x0009a833) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a4d,	// (0x0009a833) listscroll_gen_pane_cp06_t1

0x125a,	// (0x00094040) main_cam6_set_pane

0x645c,	// (0x00099242) bg_tb_trans_pane_cp06_ParamLimits

0x6472,	// (0x00099258) cam4_indicators_pane_g1_ParamLimits

0x6483,	// (0x00099269) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000a26dd) cam4_indicators_pane_g_ParamLimits

0x64a1,	// (0x00099287) cam4_indicators_pane_t1_ParamLimits

0x446d,	// (0x00097253) bg_tb_trans_pane_cp07_ParamLimits

0x6554,	// (0x0009933a) vid4_indicators_pane_g1_ParamLimits

0x6568,	// (0x0009934e) vid4_indicators_pane_g2_ParamLimits

0x657c,	// (0x00099362) vid4_indicators_pane_g3_ParamLimits

0x658d,	// (0x00099373) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000a26ef) vid4_indicators_pane_g_ParamLimits

0x65ab,	// (0x00099391) vid4_indicators_pane_t1_ParamLimits

0x75d5,	// (0x0009a3bb) vid4_progress_pane_g1_ParamLimits

0x75e5,	// (0x0009a3cb) vid4_progress_pane_g2_ParamLimits

0x75f5,	// (0x0009a3db) vid4_progress_pane_g3_ParamLimits

0x7607,	// (0x0009a3ed) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000a28a0) vid4_progress_pane_g_ParamLimits

0x761f,	// (0x0009a405) vid4_progress_pane_t1_ParamLimits

0x7635,	// (0x0009a41b) vid4_progress_pane_t2_ParamLimits

0x764a,	// (0x0009a430) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000a28ab) vid4_progress_pane_t_ParamLimits

0x765f,	// (0x0009a445) wait_bar_pane_cp07_ParamLimits

0x7b6b,	// (0x0009a951) main_cam6_set_pane_g2_ParamLimits

0x7b6b,	// (0x0009a951) main_cam6_set_pane_g2

0x7b77,	// (0x0009a95d) main_cset6_listscroll_pane_ParamLimits

0x7b77,	// (0x0009a95d) main_cset6_listscroll_pane

0x7ba2,	// (0x0009a988) main_cset6_slider_pane_ParamLimits

0x7ba2,	// (0x0009a988) main_cset6_slider_pane

0x7bae,	// (0x0009a994) main_cset6_text2_pane_ParamLimits

0x7bae,	// (0x0009a994) main_cset6_text2_pane

0xa820,	// (0x0009d606) main_cset6_text_pane

0xa828,	// (0x0009d60e) main_cset_list_pane_copy1_ParamLimits

0xa828,	// (0x0009d60e) main_cset_list_pane_copy1

0xa838,	// (0x0009d61e) scroll_pane_cp028_copy1

0x7bc1,	// (0x0009a9a7) cset_list_set_pane_copy1

0x7bd4,	// (0x0009a9ba) aid_position_infowindow_above_copy1

0x7bdc,	// (0x0009a9c2) aid_position_infowindow_below_copy1

0x7be4,	// (0x0009a9ca) cset_list_set_pane_g1_copy1

0xe613,	// (0x000a13f9) cset_list_set_pane_g3_copy1_ParamLimits

0xe613,	// (0x000a13f9) cset_list_set_pane_g3_copy1

0xe622,	// (0x000a1408) cset_list_set_pane_t1_copy1_ParamLimits

0xe622,	// (0x000a1408) cset_list_set_pane_t1_copy1

0xa7fa,	// (0x0009d5e0) list_highlight_pane_cp021_copy1_ParamLimits

0xa7fa,	// (0x0009d5e0) list_highlight_pane_cp021_copy1

0xa841,	// (0x0009d627) cset6_slider_pane_ParamLimits

0xa841,	// (0x0009d627) cset6_slider_pane

0xa86d,	// (0x0009d653) main_cset6_slider_pane_g1_ParamLimits

0xa86d,	// (0x0009d653) main_cset6_slider_pane_g1

0x7bec,	// (0x0009a9d2) main_cset6_slider_pane_g2_ParamLimits

0x7bec,	// (0x0009a9d2) main_cset6_slider_pane_g2

0xa895,	// (0x0009d67b) main_cset6_slider_pane_g3_ParamLimits

0xa895,	// (0x0009d67b) main_cset6_slider_pane_g3

0x7c14,	// (0x0009a9fa) main_cset6_slider_pane_g4_ParamLimits

0x7c14,	// (0x0009a9fa) main_cset6_slider_pane_g4

0x7c20,	// (0x0009aa06) main_cset6_slider_pane_g5_ParamLimits

0x7c20,	// (0x0009aa06) main_cset6_slider_pane_g5

0xe54f,	// (0x000a1335) main_cset6_slider_pane_g7_ParamLimits

0xe54f,	// (0x000a1335) main_cset6_slider_pane_g7

0xe55b,	// (0x000a1341) main_cset6_slider_pane_g8_ParamLimits

0xe55b,	// (0x000a1341) main_cset6_slider_pane_g8

0x7c2e,	// (0x0009aa14) main_cset6_slider_pane_g9_ParamLimits

0x7c2e,	// (0x0009aa14) main_cset6_slider_pane_g9

0x7c3a,	// (0x0009aa20) main_cset6_slider_pane_g10_ParamLimits

0x7c3a,	// (0x0009aa20) main_cset6_slider_pane_g10

0x7c46,	// (0x0009aa2c) main_cset6_slider_pane_g11_ParamLimits

0x7c46,	// (0x0009aa2c) main_cset6_slider_pane_g11

0x7c52,	// (0x0009aa38) main_cset6_slider_pane_g12_ParamLimits

0x7c52,	// (0x0009aa38) main_cset6_slider_pane_g12

0x7c5e,	// (0x0009aa44) main_cset6_slider_pane_g13_ParamLimits

0x7c5e,	// (0x0009aa44) main_cset6_slider_pane_g13

0x7c6a,	// (0x0009aa50) main_cset6_slider_pane_g14_ParamLimits

0x7c6a,	// (0x0009aa50) main_cset6_slider_pane_g14

0x7c76,	// (0x0009aa5c) main_cset6_slider_pane_g15_ParamLimits

0x7c76,	// (0x0009aa5c) main_cset6_slider_pane_g15

0x7c8e,	// (0x0009aa74) main_cset6_slider_pane_g16_ParamLimits

0x7c8e,	// (0x0009aa74) main_cset6_slider_pane_g16

0x7c9c,	// (0x0009aa82) main_cset6_slider_pane_g17_ParamLimits

0x7c9c,	// (0x0009aa82) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000a2978) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000a2978) main_cset6_slider_pane_g

0xa8a1,	// (0x0009d687) main_cset6_slider_pane_t1_ParamLimits

0xa8a1,	// (0x0009d687) main_cset6_slider_pane_t1

0x7cc2,	// (0x0009aaa8) main_cset6_slider_pane_t2_ParamLimits

0x7cc2,	// (0x0009aaa8) main_cset6_slider_pane_t2

0x7ced,	// (0x0009aad3) main_cset6_slider_pane_t3_ParamLimits

0x7ced,	// (0x0009aad3) main_cset6_slider_pane_t3

0x7d18,	// (0x0009aafe) main_cset6_slider_pane_t4_ParamLimits

0x7d18,	// (0x0009aafe) main_cset6_slider_pane_t4

0x7d43,	// (0x0009ab29) main_cset6_slider_pane_t5_ParamLimits

0x7d43,	// (0x0009ab29) main_cset6_slider_pane_t5

0xa8e2,	// (0x0009d6c8) main_cset6_slider_pane_t7_ParamLimits

0xa8e2,	// (0x0009d6c8) main_cset6_slider_pane_t7

0x7d70,	// (0x0009ab56) main_cset6_slider_pane_t8_ParamLimits

0x7d70,	// (0x0009ab56) main_cset6_slider_pane_t8

0x7d94,	// (0x0009ab7a) main_cset6_slider_pane_t9_ParamLimits

0x7d94,	// (0x0009ab7a) main_cset6_slider_pane_t9

0x7db8,	// (0x0009ab9e) main_cset6_slider_pane_t10_ParamLimits

0x7db8,	// (0x0009ab9e) main_cset6_slider_pane_t10

0x7ddc,	// (0x0009abc2) main_cset6_slider_pane_t11_ParamLimits

0x7ddc,	// (0x0009abc2) main_cset6_slider_pane_t11

0xa918,	// (0x0009d6fe) main_cset6_slider_pane_t14_ParamLimits

0xa918,	// (0x0009d6fe) main_cset6_slider_pane_t14

0xa951,	// (0x0009d737) main_cset6_slider_pane_t15_ParamLimits

0xa951,	// (0x0009d737) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000a299d) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000a299d) main_cset6_slider_pane_t

0xe693,	// (0x000a1479) cset_slider_pane_g1_copy1

0xe69c,	// (0x000a1482) cset_slider_pane_g2_copy1

0xe6a5,	// (0x000a148b) cset_slider_pane_g3_copy1

0x9ca7,	// (0x0009ca8d) bg_popup_sub_pane_cp011_copy1

0xa98a,	// (0x0009d770) main_cset_text_pane_g1_copy1

0xe6d2,	// (0x000a14b8) main_cset_text_pane_t1_copy1

0xe6e0,	// (0x000a14c6) main_cset_text_pane_t2_copy1

0xe6ee,	// (0x000a14d4) main_cset_text_pane_t3_copy1

0xe6fc,	// (0x000a14e2) main_cset_text_pane_t4_copy1

0xe70a,	// (0x000a14f0) main_cset_text_pane_t5_copy1

0xa992,	// (0x0009d778) main_cset_text_pane_t6_copy1

0xa9a0,	// (0x0009d786) main_cset_text_pane_t7_copy1

0x7ed8,	// (0x0009acbe) main_cset_text2_pane_t1_copy1

0x446d,	// (0x00097253) main_ncimui_pane

0x44cc,	// (0x000972b2) popup_query_ncimui_window_ParamLimits

0x44cc,	// (0x000972b2) popup_query_ncimui_window

0xdc43,	// (0x000a0a29) field_cale_ev2_pane_g4_ParamLimits

0xdc43,	// (0x000a0a29) field_cale_ev2_pane_g4

0x5dbb,	// (0x00098ba1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5dbb,	// (0x00098ba1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000a267b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000a267b) cell_video_dialer_keypad_pane_g

0x5dd3,	// (0x00098bb9) cell_video_dialer_keypad_pane_t1

0x9ca7,	// (0x0009ca8d) bg_popup_window_pane_cp012

0xbde0,	// (0x0009ebc6) heading_pane_cp06

0xa9cc,	// (0x0009d7b2) ncim_query_content_pane

0x9ca7,	// (0x0009ca8d) bg_popup_heading_pane_cp01

0xa9d4,	// (0x0009d7ba) ncim_heading_pane_t1

0xa9e2,	// (0x0009d7c8) ncim_indicator_popup_pane

0xa9f4,	// (0x0009d7da) ncim_query_button_pane

0xaa08,	// (0x0009d7ee) ncim_query_content_pane_t1

0xaa1a,	// (0x0009d800) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000a29e1) ncim_query_content_pane_t

0xaa54,	// (0x0009d83a) ncim_query_list_pane

0xaa66,	// (0x0009d84c) ncim_query_popup_pane

0xa9e2,	// (0x0009d7c8) ncim_indicator_popup_pane_ParamLimits

0x802b,	// (0x0009ae11) ncim_query_content_pane_g1_ParamLimits

0x802b,	// (0x0009ae11) ncim_query_content_pane_g1

0xaa08,	// (0x0009d7ee) ncim_query_content_pane_t1_ParamLimits

0xaa1a,	// (0x0009d800) ncim_query_content_pane_t2_ParamLimits

0x8037,	// (0x0009ae1d) ncim_query_content_pane_t3_ParamLimits

0x8037,	// (0x0009ae1d) ncim_query_content_pane_t3

0x8054,	// (0x0009ae3a) ncim_query_content_pane_t4_ParamLimits

0x8054,	// (0x0009ae3a) ncim_query_content_pane_t4

0x8071,	// (0x0009ae57) ncim_query_content_pane_t5_ParamLimits

0x8071,	// (0x0009ae57) ncim_query_content_pane_t5

0xaa2c,	// (0x0009d812) ncim_query_content_pane_t6_ParamLimits

0xaa2c,	// (0x0009d812) ncim_query_content_pane_t6

0xfbfb,	// (0x000a29e1) ncim_query_content_pane_t_ParamLimits

0xaa54,	// (0x0009d83a) ncim_query_list_pane_ParamLimits

0xaa66,	// (0x0009d84c) ncim_query_popup_pane_ParamLimits

0xaa7a,	// (0x0009d860) wait_bar_pane_cp04

0x9ca7,	// (0x0009ca8d) input_focus_pane_cp011

0xaa82,	// (0x0009d868) ncim_query_popup_pane_t1

0xaa90,	// (0x0009d876) ncim_list_query_list_pane_ParamLimits

0xaa90,	// (0x0009d876) ncim_list_query_list_pane

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp027

0xaa9d,	// (0x0009d883) ncim_query_button_pane_g1

0x9ca7,	// (0x0009ca8d) list_highlight_pane_cp012

0xaaa7,	// (0x0009d88d) ncim_list_query_list_pane_g1

0xaaaf,	// (0x0009d895) ncim_list_query_list_pane_t1

0x6492,	// (0x00099278) cam4_indicators_pane_g3_ParamLimits

0x6492,	// (0x00099278) cam4_indicators_pane_g3

0x6599,	// (0x0009937f) vid4_indicators_pane_g5_ParamLimits

0x6599,	// (0x0009937f) vid4_indicators_pane_g5

0x7613,	// (0x0009a3f9) vid4_progress_pane_g5_ParamLimits

0x7613,	// (0x0009a3f9) vid4_progress_pane_g5

0x7f17,	// (0x0009acfd) main_ncimui_pane_g1

0x7f7f,	// (0x0009ad65) ncimui_group_query_pane_ParamLimits

0x7f7f,	// (0x0009ad65) ncimui_group_query_pane

0x7fc7,	// (0x0009adad) ncimui_list_pane_ParamLimits

0x7fc7,	// (0x0009adad) ncimui_list_pane

0x7fee,	// (0x0009add4) ncimui_text_pane_ParamLimits

0x7fee,	// (0x0009add4) ncimui_text_pane

0x808e,	// (0x0009ae74) ncimui_text_pane_t1_ParamLimits

0x808e,	// (0x0009ae74) ncimui_text_pane_t1

0xaabd,	// (0x0009d8a3) ncimui_list_single_graphic_pane_ParamLimits

0xaabd,	// (0x0009d8a3) ncimui_list_single_graphic_pane

0x80ad,	// (0x0009ae93) ncimui_query_pane_ParamLimits

0x80ad,	// (0x0009ae93) ncimui_query_pane

0x9ca7,	// (0x0009ca8d) list_highlight_pane_cp013

0xaacd,	// (0x0009d8b3) ncim_list_query_list_pane_t1_copy1

0xaaa7,	// (0x0009d88d) ncim_list_single_graphic_pane_g1

0x80c0,	// (0x0009aea6) ncim_query_button_pane_cp01

0x80cc,	// (0x0009aeb2) ncim_query_entry_pane_ParamLimits

0x80cc,	// (0x0009aeb2) ncim_query_entry_pane

0x80df,	// (0x0009aec5) ncimui_query_pane_g1

0x80eb,	// (0x0009aed1) ncimui_query_pane_t1_ParamLimits

0x80eb,	// (0x0009aed1) ncimui_query_pane_t1

0xa7fa,	// (0x0009d5e0) input_focus_pane_cp012

0xaadb,	// (0x0009d8c1) ncim_query_entry_pane_t1

0xa3e4,	// (0x0009d1ca) main_im_pane_ParamLimits

0x446d,	// (0x00097253) main_mobtv_pane_ParamLimits

0x446d,	// (0x00097253) main_mobtv_pane

0x7caa,	// (0x0009aa90) main_cset6_slider_pane_g18_ParamLimits

0x7caa,	// (0x0009aa90) main_cset6_slider_pane_g18

0x7cb6,	// (0x0009aa9c) main_cset6_slider_pane_g19_ParamLimits

0x7cb6,	// (0x0009aa9c) main_cset6_slider_pane_g19

0xe3e3,	// (0x000a11c9) bg_main_mobtv_pane_ParamLimits

0xe3e3,	// (0x000a11c9) bg_main_mobtv_pane

0x8104,	// (0x0009aeea) main_mobtv_info_pane

0x810f,	// (0x0009aef5) main_mobtv_loading_pane_ParamLimits

0x810f,	// (0x0009aef5) main_mobtv_loading_pane

0xaaed,	// (0x0009d8d3) main_mobtv_pg_channel_list_pane

0xaaf7,	// (0x0009d8dd) main_mobtv_pg_hdr_pane

0x811c,	// (0x0009af02) main_mobtv_programe_curr_pane_ParamLimits

0x811c,	// (0x0009af02) main_mobtv_programe_curr_pane

0x8129,	// (0x0009af0f) main_mobtv_programe_next_pane_ParamLimits

0x8129,	// (0x0009af0f) main_mobtv_programe_next_pane

0xab00,	// (0x0009d8e6) popup_mobtv_noti_window

0xd97b,	// (0x000a0761) main_tv_pg_hdr_pane_g1

0xab08,	// (0x0009d8ee) main_tv_pg_hdr_pane_g2

0xab10,	// (0x0009d8f6) main_tv_pg_hdr_pane_g3

0xab18,	// (0x0009d8fe) main_tv_pg_hdr_pane_g4

0xab20,	// (0x0009d906) main_tv_pg_hdr_pane_g5

0xab2a,	// (0x0009d910) main_tv_pg_hdr_pane_g6

0xab34,	// (0x0009d91a) main_tv_pg_hdr_pane_g7

0xab3e,	// (0x0009d924) main_tv_pg_hdr_pane_g8

0xab48,	// (0x0009d92e) main_tv_pg_hdr_pane_g9

0xab52,	// (0x0009d938) main_tv_pg_hdr_pane_g10

0xab5c,	// (0x0009d942) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000a29ee) main_tv_pg_hdr_pane_g

0xab66,	// (0x0009d94c) main_tv_pg_hdr_pane_t1

0xab74,	// (0x0009d95a) main_tv_pg_hdr_pane_t2

0xab82,	// (0x0009d968) main_tv_pg_hdr_pane_t3

0xab92,	// (0x0009d978) main_tv_pg_hdr_pane_t4

0xaba2,	// (0x0009d988) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000a2a05) main_tv_pg_hdr_pane_t

0xabb2,	// (0x0009d998) single_mobtv_pg_channel_pane_ParamLimits

0xabb2,	// (0x0009d998) single_mobtv_pg_channel_pane

0xabc4,	// (0x0009d9aa) single_mobtv_pg_channel_table_pane

0xabcd,	// (0x0009d9b3) single_mobtv_pg_channel_thumb_pane

0xabd6,	// (0x0009d9bc) single_tv_pg_channel_pane_g1

0xabdf,	// (0x0009d9c5) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000a2a10) single_tv_pg_channel_pane_g

0xdbde,	// (0x000a09c4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xdbde,	// (0x000a09c4) bg_single_mobtv_pg_channel_thumb_pane

0xabe8,	// (0x0009d9ce) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xabe8,	// (0x0009d9ce) single_mobtv_pg_channel_thumb_pane_g1

0xabf6,	// (0x0009d9dc) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xabf6,	// (0x0009d9dc) single_mobtv_pg_channel_thumb_pane_g2

0xac02,	// (0x0009d9e8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xac02,	// (0x0009d9e8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000a2a15) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000a2a15) single_mobtv_pg_channel_thumb_pane_g

0xac0e,	// (0x0009d9f4) single_mobtv_pg_channel_thumb_pane_t1

0xac1c,	// (0x0009da02) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000a2a1c) single_mobtv_pg_channel_thumb_pane_t

0xd97b,	// (0x000a0761) bg_single_mobtv_pg_channel_table_pane_g1

0xd97b,	// (0x000a0761) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000a24c2) bg_single_mobtv_pg_channel_table_pane_g

0xac2a,	// (0x0009da10) single_mobtv_pg_channel_table_pane_t1

0xac38,	// (0x0009da1e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000a2a21) single_mobtv_pg_channel_table_pane_t

0x813e,	// (0x0009af24) main_mobtv_info_pane_g1_ParamLimits

0x813e,	// (0x0009af24) main_mobtv_info_pane_g1

0x815a,	// (0x0009af40) main_mobtv_info_pane_t1_ParamLimits

0x815a,	// (0x0009af40) main_mobtv_info_pane_t1

0x81d2,	// (0x0009afb8) main_mobtv_info_pane_t2_ParamLimits

0x81d2,	// (0x0009afb8) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000a2a2b) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000a2a2b) main_mobtv_info_pane_t

0x8261,	// (0x0009b047) wait_bar_pane_cp05

0x8273,	// (0x0009b059) main_mobtv_loading_pane_g1_ParamLimits

0x8273,	// (0x0009b059) main_mobtv_loading_pane_g1

0x8281,	// (0x0009b067) main_mobtv_loading_pane_g2_ParamLimits

0x8281,	// (0x0009b067) main_mobtv_loading_pane_g2

0x828d,	// (0x0009b073) main_mobtv_loading_pane_g3_ParamLimits

0x828d,	// (0x0009b073) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000a2a32) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000a2a32) main_mobtv_loading_pane_g

0xac46,	// (0x0009da2c) main_mobtv_loading_pane_t1_ParamLimits

0xac46,	// (0x0009da2c) main_mobtv_loading_pane_t1

0xac5e,	// (0x0009da44) main_mobtv_loading_pane_t2_ParamLimits

0xac5e,	// (0x0009da44) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000a2a39) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000a2a39) main_mobtv_loading_pane_t

0x829b,	// (0x0009b081) wait_bar_pane_cp06_ParamLimits

0x829b,	// (0x0009b081) wait_bar_pane_cp06

0xac82,	// (0x0009da68) main_mobtv_programe_curr_pane_t1

0xac90,	// (0x0009da76) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000a2a3e) main_mobtv_programe_curr_pane_t

0xac9e,	// (0x0009da84) main_mobtv_programe_next_pane_t1

0xacac,	// (0x0009da92) main_mobtv_programe_next_pane_t2

0xacba,	// (0x0009daa0) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000a2a43) main_mobtv_programe_next_pane_t

0x9ca7,	// (0x0009ca8d) bg_popup_mobtv_noti_window_pane

0xacc8,	// (0x0009daae) popup_mobtv_noti_window_g1

0xacd0,	// (0x0009dab6) popup_mobtv_noti_window_t1

0xacde,	// (0x0009dac4) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000a2a4a) popup_mobtv_noti_window_t

0xd97b,	// (0x000a0761) bg_popup_mobtv_noti_window_pane_g1

0x125a,	// (0x00094040) sc_clock_pane

0x125a,	// (0x00094040) main_fs_bigclock_pane

0x7827,	// (0x0009a60d) blid2_tripm_pane_t4_ParamLimits

0x7827,	// (0x0009a60d) blid2_tripm_pane_t4

0x82a7,	// (0x0009b08d) sc_clock_pane_g1_ParamLimits

0x82a7,	// (0x0009b08d) sc_clock_pane_g1

0x82b5,	// (0x0009b09b) sc_clock_pane_t1_ParamLimits

0x82b5,	// (0x0009b09b) sc_clock_pane_t1

0x82c8,	// (0x0009b0ae) sc_clock_pane_t2_ParamLimits

0x82c8,	// (0x0009b0ae) sc_clock_pane_t2

0x82da,	// (0x0009b0c0) sc_clock_pane_t3_ParamLimits

0x82da,	// (0x0009b0c0) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000a2a4f) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000a2a4f) sc_clock_pane_t

0x91f8,	// (0x0009bfde) main_fs_bigclock_indicator_pane_ParamLimits

0x91f8,	// (0x0009bfde) main_fs_bigclock_indicator_pane

0x835d,	// (0x0009b143) main_fs_bigclock_pane_g1_ParamLimits

0x835d,	// (0x0009b143) main_fs_bigclock_pane_g1

0x9204,	// (0x0009bfea) main_fs_bigclock_pane_t1_ParamLimits

0x9204,	// (0x0009bfea) main_fs_bigclock_pane_t1

0x9216,	// (0x0009bffc) main_fs_bigclock_pane_t2_ParamLimits

0x9216,	// (0x0009bffc) main_fs_bigclock_pane_t2

0x922a,	// (0x0009c010) main_fs_bigclock_pane_t3_ParamLimits

0x922a,	// (0x0009c010) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000a2c59) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000a2c59) main_fs_bigclock_pane_t

0xb537,	// (0x0009e31d) main_fs_bigclock_indicator_pane_g1

0xa9fc,	// (0x0009d7e2) ncim_query_content_pane_g2_ParamLimits

0xa9fc,	// (0x0009d7e2) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000a29dc) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000a29dc) ncim_query_content_pane_g

0x82ee,	// (0x0009b0d4) sc_clock_pane_t4_ParamLimits

0x82ee,	// (0x0009b0d4) sc_clock_pane_t4

0x446d,	// (0x00097253) main_radioblah_pane

0x6327,	// (0x0009910d) cell_call4_button_pane_t1_copy1_ParamLimits

0x6327,	// (0x0009910d) cell_call4_button_pane_t1_copy1

0x7f31,	// (0x0009ad17) main_ncimui_pane_t1_ParamLimits

0x7f31,	// (0x0009ad17) main_ncimui_pane_t1

0x7f4b,	// (0x0009ad31) main_ncimui_pane_t2_ParamLimits

0x7f4b,	// (0x0009ad31) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000a29d5) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000a29d5) main_ncimui_pane_t

0xae23,	// (0x0009dc09) main_radioblah_anim_pane_ParamLimits

0xae23,	// (0x0009dc09) main_radioblah_anim_pane

0xae34,	// (0x0009dc1a) main_radioblah_info_pane_ParamLimits

0xae34,	// (0x0009dc1a) main_radioblah_info_pane

0xae48,	// (0x0009dc2e) main_radioblah_pane_t1_ParamLimits

0xae48,	// (0x0009dc2e) main_radioblah_pane_t1

0xae64,	// (0x0009dc4a) main_radioblah_pane_t2_ParamLimits

0xae64,	// (0x0009dc4a) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000a2a70) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000a2a70) main_radioblah_pane_t

0x83b3,	// (0x0009b199) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83b3,	// (0x0009b199) main_radioblah_rocker_ctrl_pane

0xaeac,	// (0x0009dc92) main_radioblah_info_pane_t1_ParamLimits

0xaeac,	// (0x0009dc92) main_radioblah_info_pane_t1

0x83f8,	// (0x0009b1de) main_radioblah_info_pane_t2_ParamLimits

0x83f8,	// (0x0009b1de) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000a2a79) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000a2a79) main_radioblah_info_pane_t

0xd97b,	// (0x000a0761) main_radioblah_rocker_ctrl_pane_g1

0x84a8,	// (0x0009b28e) main_radioblah_rocker_ctrl_pane_g2

0x84b0,	// (0x0009b296) main_radioblah_rocker_ctrl_pane_g3

0x84b8,	// (0x0009b29e) main_radioblah_rocker_ctrl_pane_g4

0x84c0,	// (0x0009b2a6) main_radioblah_rocker_ctrl_pane_g5

0x84c8,	// (0x0009b2ae) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000a2a82) main_radioblah_rocker_ctrl_pane_g

0x7ed8,	// (0x0009acbe) main_cset_text2_pane_t1_copy1_ParamLimits

0x63b2,	// (0x00099198) cam4_image_uncrop_qvga_pane

0x6507,	// (0x000992ed) vid4_image_uncrop_qcif_pane

0x79b5,	// (0x0009a79b) cam6_image_uncrop_qvga_pane_ParamLimits

0x79b5,	// (0x0009a79b) cam6_image_uncrop_qvga_pane

0xef70,	// (0x000a1d56) vid6_image_uncrop_qcif_pane_ParamLimits

0xef70,	// (0x000a1d56) vid6_image_uncrop_qcif_pane

0x9ca7,	// (0x0009ca8d) bg_popup_preview_window_pane_cp03

0xa9ae,	// (0x0009d794) list_cset_text2_pane

0xa9b6,	// (0x0009d79c) main_cset6_text2_pane_g1

0xa9be,	// (0x0009d7a4) main_cset6_text2_pane_t1

0x84d0,	// (0x0009b2b6) list_cset_text2_pane_t1_ParamLimits

0x84d0,	// (0x0009b2b6) list_cset_text2_pane_t1

0x446d,	// (0x00097253) main_radioblah_pane_ParamLimits

0x824d,	// (0x0009b033) main_mobtv_info_pane_t3_ParamLimits

0x824d,	// (0x0009b033) main_mobtv_info_pane_t3

0x83a1,	// (0x0009b187) main_radioblah_pane_g1

0x83cc,	// (0x0009b1b2) main_radioblah_info_pane_g1

0x844d,	// (0x0009b233) main_radioblah_info_pane_t3_ParamLimits

0x844d,	// (0x0009b233) main_radioblah_info_pane_t3

0x3130,	// (0x00095f16) highlight_cell_cale_month_pane_ParamLimits

0x3130,	// (0x00095f16) highlight_cell_cale_month_pane

0x125a,	// (0x00094040) main_phob_fisheye_pane

0xdd12,	// (0x000a0af8) scroll_pane_cp0031_ParamLimits

0xdd12,	// (0x000a0af8) scroll_pane_cp0031

0xa811,	// (0x0009d5f7) wait_bar_pane_cp08_ParamLimits

0x7bc1,	// (0x0009a9a7) cset_list_set_pane_copy1_ParamLimits

0xaee6,	// (0x0009dccc) highlight_cell_cale_month_pane_g1

0x84ed,	// (0x0009b2d3) highlight_cell_cale_month_pane_t1

0xed07,	// (0x000a1aed) list_gen_pane_cp01

0xe53a,	// (0x000a1320) scroll_pane_01

0x84fb,	// (0x0009b2e1) list_single_double_fisheye_pane

0x8504,	// (0x0009b2ea) list_double_fisheye_pane_g1_ParamLimits

0x8504,	// (0x0009b2ea) list_double_fisheye_pane_g1

0x8510,	// (0x0009b2f6) list_double_fisheye_pane_g2_ParamLimits

0x8510,	// (0x0009b2f6) list_double_fisheye_pane_g2

0x8524,	// (0x0009b30a) list_double_fisheye_pane_g3_ParamLimits

0x8524,	// (0x0009b30a) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000a2a8f) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000a2a8f) list_double_fisheye_pane_g

0x854d,	// (0x0009b333) list_double_fisheye_pane_t1_ParamLimits

0x854d,	// (0x0009b333) list_double_fisheye_pane_t1

0x8568,	// (0x0009b34e) list_double_fisheye_pane_t2_ParamLimits

0x8568,	// (0x0009b34e) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000a2a9a) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000a2a9a) list_double_fisheye_pane_t

0x125a,	// (0x00094040) main_call5_pane

0x8314,	// (0x0009b0fa) sc_swipe_pane_ParamLimits

0x8314,	// (0x0009b0fa) sc_swipe_pane

0x8596,	// (0x0009b37c) call5_image_pane_ParamLimits

0x8596,	// (0x0009b37c) call5_image_pane

0x85a6,	// (0x0009b38c) call5_swipe_1_pane_ParamLimits

0x85a6,	// (0x0009b38c) call5_swipe_1_pane

0x85b2,	// (0x0009b398) call5_swipe_2_pane_ParamLimits

0x85b2,	// (0x0009b398) call5_swipe_2_pane

0x85cc,	// (0x0009b3b2) popup_call5_audio_first_window_ParamLimits

0x85cc,	// (0x0009b3b2) popup_call5_audio_first_window

0xdbde,	// (0x000a09c4) call5_swipe_1_pane_g1_ParamLimits

0xdbde,	// (0x000a09c4) call5_swipe_1_pane_g1

0xaeee,	// (0x0009dcd4) call5_swipe_1_pane_g2_ParamLimits

0xaeee,	// (0x0009dcd4) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000a2a9f) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000a2a9f) call5_swipe_1_pane_g

0xaefa,	// (0x0009dce0) call5_swipe_1_pane_t1_ParamLimits

0xaefa,	// (0x0009dce0) call5_swipe_1_pane_t1

0xdbde,	// (0x000a09c4) call5_swipe_2_pane_g1_ParamLimits

0xdbde,	// (0x000a09c4) call5_swipe_2_pane_g1

0xaf0f,	// (0x0009dcf5) call5_swipe_2_pane_g2_ParamLimits

0xaf0f,	// (0x0009dcf5) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000a2aa4) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000a2aa4) call5_swipe_2_pane_g

0xaf1b,	// (0x0009dd01) call5_swipe_2_pane_t1_ParamLimits

0xaf1b,	// (0x0009dd01) call5_swipe_2_pane_t1

0xaf30,	// (0x0009dd16) sc_swipe_pane_g1_ParamLimits

0xaf30,	// (0x0009dd16) sc_swipe_pane_g1

0xaf3d,	// (0x0009dd23) sc_swipe_pane_g2_ParamLimits

0xaf3d,	// (0x0009dd23) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000a2aa9) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000a2aa9) sc_swipe_pane_g

0xaf49,	// (0x0009dd2f) sc_swipe_pane_t1_ParamLimits

0xaf49,	// (0x0009dd2f) sc_swipe_pane_t1

0x125a,	// (0x00094040) main_cmail_launcher_pane

0x85da,	// (0x0009b3c0) aid_size_cell_cmail_l_ParamLimits

0x85da,	// (0x0009b3c0) aid_size_cell_cmail_l

0x85e8,	// (0x0009b3ce) grid_cmail_l_pane_ParamLimits

0x85e8,	// (0x0009b3ce) grid_cmail_l_pane

0x85f8,	// (0x0009b3de) cell_cmail_l_pane_ParamLimits

0x85f8,	// (0x0009b3de) cell_cmail_l_pane

0xaf5e,	// (0x0009dd44) cell_cmail_l_pane_g1_ParamLimits

0xaf5e,	// (0x0009dd44) cell_cmail_l_pane_g1

0xaf6a,	// (0x0009dd50) cell_cmail_l_pane_t1_ParamLimits

0xaf6a,	// (0x0009dd50) cell_cmail_l_pane_t1

0xaf80,	// (0x0009dd66) cell_cmail_l_pane_t2_ParamLimits

0xaf80,	// (0x0009dd66) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000a2aae) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000a2aae) cell_cmail_l_pane_t

0xa7fa,	// (0x0009d5e0) grid_highlight_pane_cp018_ParamLimits

0xa7fa,	// (0x0009d5e0) grid_highlight_pane_cp018

0x10b0,	// (0x00093e96) main2_pane_ParamLimits

0x10b0,	// (0x00093e96) main2_pane

0xa47d,	// (0x0009d263) popup_sp_fs_action_menu_bg_pane_g1

0xa485,	// (0x0009d26b) popup_sp_fs_action_menu_bg_pane_g2

0xa48d,	// (0x0009d273) popup_sp_fs_action_menu_bg_pane_g3

0xa495,	// (0x0009d27b) popup_sp_fs_action_menu_bg_pane_g4

0xa49d,	// (0x0009d283) popup_sp_fs_action_menu_bg_pane_g5

0xa4a5,	// (0x0009d28b) popup_sp_fs_action_menu_bg_pane_g6

0xa4ad,	// (0x0009d293) popup_sp_fs_action_menu_bg_pane_g7

0xa4b5,	// (0x0009d29b) popup_sp_fs_action_menu_bg_pane_g8

0xa4bd,	// (0x0009d2a3) popup_sp_fs_action_menu_bg_pane_g9

0xa4c5,	// (0x0009d2ab) popup_sp_fs_action_menu_bg_pane_g10

0xa4c5,	// (0x0009d2ab) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000a1f70) popup_sp_fs_action_menu_bg_pane_g

0x1f62,	// (0x00094d48) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x2_t3_g3_g1

0x1f6e,	// (0x00094d54) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1f6e,	// (0x00094d54) list_medium_line_x2_t3_g3_g2

0x1f7a,	// (0x00094d60) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1f7a,	// (0x00094d60) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000a201e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000a201e) list_medium_line_x2_t3_g3_g

0x1f86,	// (0x00094d6c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1f86,	// (0x00094d6c) list_medium_line_x2_t3_g3_t1

0x1f9b,	// (0x00094d81) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f9b,	// (0x00094d81) list_medium_line_x2_t3_g3_t2

0x1fad,	// (0x00094d93) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1fad,	// (0x00094d93) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000a2025) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000a2025) list_medium_line_x2_t3_g3_t

0x1f62,	// (0x00094d48) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x2_t3_g2_g1

0x1f7a,	// (0x00094d60) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1f7a,	// (0x00094d60) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000a202c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000a202c) list_medium_line_x2_t3_g2_g

0x1fc2,	// (0x00094da8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1fc2,	// (0x00094da8) list_medium_line_x2_t3_g2_t1

0x1fd8,	// (0x00094dbe) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1fd8,	// (0x00094dbe) list_medium_line_x2_t3_g2_t2

0x1fad,	// (0x00094d93) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1fad,	// (0x00094d93) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000a2031) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000a2031) list_medium_line_x2_t3_g2_t

0x1f62,	// (0x00094d48) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x2_t4_g4_g1

0x1fea,	// (0x00094dd0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1fea,	// (0x00094dd0) list_medium_line_x2_t4_g4_g2

0x1f6e,	// (0x00094d54) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1f6e,	// (0x00094d54) list_medium_line_x2_t4_g4_g3

0x1ff6,	// (0x00094ddc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ff6,	// (0x00094ddc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000a2038) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000a2038) list_medium_line_x2_t4_g4_g

0x2002,	// (0x00094de8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2002,	// (0x00094de8) list_medium_line_x2_t4_g4_t1

0x201c,	// (0x00094e02) list_medium_line_x2_t4_g4_t2_ParamLimits

0x201c,	// (0x00094e02) list_medium_line_x2_t4_g4_t2

0x2032,	// (0x00094e18) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2032,	// (0x00094e18) list_medium_line_x2_t4_g4_t3

0x2047,	// (0x00094e2d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2047,	// (0x00094e2d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000a2041) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000a2041) list_medium_line_x2_t4_g4_t

0x1f62,	// (0x00094d48) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x2_t2_g4_g1

0x1fea,	// (0x00094dd0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1fea,	// (0x00094dd0) list_medium_line_x2_t2_g4_g2

0x1f6e,	// (0x00094d54) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1f6e,	// (0x00094d54) list_medium_line_x2_t2_g4_g3

0x1f7a,	// (0x00094d60) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1f7a,	// (0x00094d60) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000a20a8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000a20a8) list_medium_line_x2_t2_g4_g

0x3156,	// (0x00095f3c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3156,	// (0x00095f3c) list_medium_line_x2_t2_g4_t1

0x1fad,	// (0x00094d93) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1fad,	// (0x00094d93) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000a20b1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000a20b1) list_medium_line_x2_t2_g4_t

0x1f62,	// (0x00094d48) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x2_t2_g3_g1

0x1f6e,	// (0x00094d54) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1f6e,	// (0x00094d54) list_medium_line_x2_t2_g3_g2

0x1f7a,	// (0x00094d60) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1f7a,	// (0x00094d60) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000a201e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000a201e) list_medium_line_x2_t2_g3_g

0x316b,	// (0x00095f51) list_medium_line_x2_t2_g3_t1_ParamLimits

0x316b,	// (0x00095f51) list_medium_line_x2_t2_g3_t1

0x1fad,	// (0x00094d93) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1fad,	// (0x00094d93) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000a20b6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000a20b6) list_medium_line_x2_t2_g3_t

0x3332,	// (0x00096118) main_sp_fs_list_pane_ParamLimits

0x3332,	// (0x00096118) main_sp_fs_list_pane

0x333e,	// (0x00096124) sp_fs_scroll_pane_ParamLimits

0x333e,	// (0x00096124) sp_fs_scroll_pane

0x334a,	// (0x00096130) list_medium_line_x2_t3_t1

0x335a,	// (0x00096140) list_medium_line_x2_t3_t2

0x3368,	// (0x0009614e) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000a2101) list_medium_line_x2_t3_t

0x3376,	// (0x0009615c) list_medium_line_x3_t4_t1

0x3386,	// (0x0009616c) list_medium_line_x3_t4_t2

0x3394,	// (0x0009617a) list_medium_line_x3_t4_t3

0x3368,	// (0x0009614e) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000a2108) list_medium_line_x3_t4_t

0x33a2,	// (0x00096188) list_medium_line_x4_t5_t1

0x33b2,	// (0x00096198) list_medium_line_x4_t5_t2

0x3394,	// (0x0009617a) list_medium_line_x4_t5_t3

0x33c0,	// (0x000961a6) list_medium_line_x4_t5_t4

0x3368,	// (0x0009614e) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000a2111) list_medium_line_x4_t5_t

0x1f62,	// (0x00094d48) list_medium_line_t4_g4_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_t4_g4_g1

0x33ce,	// (0x000961b4) list_medium_line_t4_g4_g2_ParamLimits

0x33ce,	// (0x000961b4) list_medium_line_t4_g4_g2

0x33da,	// (0x000961c0) list_medium_line_t4_g4_g3_ParamLimits

0x33da,	// (0x000961c0) list_medium_line_t4_g4_g3

0x1f7a,	// (0x00094d60) list_medium_line_t4_g4_g4_ParamLimits

0x1f7a,	// (0x00094d60) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000a211c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000a211c) list_medium_line_t4_g4_g

0x33e6,	// (0x000961cc) list_medium_line_t4_g4_t1_ParamLimits

0x33e6,	// (0x000961cc) list_medium_line_t4_g4_t1

0x33fb,	// (0x000961e1) list_medium_line_t4_g4_t2_ParamLimits

0x33fb,	// (0x000961e1) list_medium_line_t4_g4_t2

0x3410,	// (0x000961f6) list_medium_line_t4_g4_t3_ParamLimits

0x3410,	// (0x000961f6) list_medium_line_t4_g4_t3

0x1fad,	// (0x00094d93) list_medium_line_t4_g4_t4_ParamLimits

0x1fad,	// (0x00094d93) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000a2125) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000a2125) list_medium_line_t4_g4_t

0x3526,	// (0x0009630c) chi_dic_find_pane_g1

0x4489,	// (0x0009726f) main_tport_pane

0x6ec4,	// (0x00099caa) list_medium_line_plain_t1

0x6fa4,	// (0x00099d8a) list_medium_line_t2_g2_g1_ParamLimits

0x6fa4,	// (0x00099d8a) list_medium_line_t2_g2_g1

0x6fb0,	// (0x00099d96) list_medium_line_t2_g2_g2_ParamLimits

0x6fb0,	// (0x00099d96) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000a27e6) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000a27e6) list_medium_line_t2_g2_g

0x6fbc,	// (0x00099da2) list_medium_line_t2_g2_t1_ParamLimits

0x6fbc,	// (0x00099da2) list_medium_line_t2_g2_t1

0x6fd6,	// (0x00099dbc) list_medium_line_t2_g2_t2_ParamLimits

0x6fd6,	// (0x00099dbc) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000a27eb) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000a27eb) list_medium_line_t2_g2_t

0xe960,	// (0x000a1746) aid_sp_fs_list_icon_a_sm

0xed10,	// (0x000a1af6) aid_sp_fs_list_icon_d

0xa808,	// (0x0009d5ee) aid_sp_fs_text_primary

0xe968,	// (0x000a174e) aid_sp_fs_text_secondary

0x7672,	// (0x0009a458) list_medium_line

0x7672,	// (0x0009a458) list_medium_line_g2

0x7672,	// (0x0009a458) list_medium_line_g3

0x7672,	// (0x0009a458) list_medium_line_plain

0x7672,	// (0x0009a458) list_medium_line_plain_t2

0x7672,	// (0x0009a458) list_medium_line_plain_t3

0x7672,	// (0x0009a458) list_medium_line_right_icon

0x7672,	// (0x0009a458) list_medium_line_right_iconx2

0x7672,	// (0x0009a458) list_medium_line_t2

0x7672,	// (0x0009a458) list_medium_line_t2_g2

0x7672,	// (0x0009a458) list_medium_line_t2_g3

0x7672,	// (0x0009a458) list_medium_line_t2_right_icon

0x7672,	// (0x0009a458) list_medium_line_t2_right_iconx2

0x7672,	// (0x0009a458) list_medium_line_t3

0x7672,	// (0x0009a458) list_medium_line_t3_g2

0x7672,	// (0x0009a458) list_medium_line_t3_g3

0x7672,	// (0x0009a458) list_medium_line_t3_right_iconx2

0x767b,	// (0x0009a461) list_medium_line_t4_g4

0xf07e,	// (0x000a1e64) list_medium_line_x2

0xf07e,	// (0x000a1e64) list_medium_line_x2_t2_g2

0xf07e,	// (0x000a1e64) list_medium_line_x2_t2_g3

0xf07e,	// (0x000a1e64) list_medium_line_x2_t2_g4

0xf07e,	// (0x000a1e64) list_medium_line_x2_t3

0xf07e,	// (0x000a1e64) list_medium_line_x2_t3_g2

0xf07e,	// (0x000a1e64) list_medium_line_x2_t3_g3

0xf07e,	// (0x000a1e64) list_medium_line_x2_t3_g4

0xf07e,	// (0x000a1e64) list_medium_line_x2_t4_g2

0xf07e,	// (0x000a1e64) list_medium_line_x2_t4_g4

0x7684,	// (0x0009a46a) list_medium_line_x3

0x7684,	// (0x0009a46a) list_medium_line_x3_t4

0x7684,	// (0x0009a46a) list_medium_line_x3_t4_g4

0x767b,	// (0x0009a461) list_medium_line_x4_t4

0x767b,	// (0x0009a461) list_medium_line_x4_t4_g7

0x767b,	// (0x0009a461) list_medium_line_x4_t5

0x768d,	// (0x0009a473) list_single_fs_dyc_pane_ParamLimits

0x768d,	// (0x0009a473) list_single_fs_dyc_pane

0x1f62,	// (0x00094d48) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x4_t4_g7_g1

0x7e00,	// (0x0009abe6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e00,	// (0x0009abe6) list_medium_line_x4_t4_g7_g2

0x7e0c,	// (0x0009abf2) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e0c,	// (0x0009abf2) list_medium_line_x4_t4_g7_g3

0x7e1b,	// (0x0009ac01) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e1b,	// (0x0009ac01) list_medium_line_x4_t4_g7_g4

0x7e27,	// (0x0009ac0d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e27,	// (0x0009ac0d) list_medium_line_x4_t4_g7_g5

0x7e36,	// (0x0009ac1c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e36,	// (0x0009ac1c) list_medium_line_x4_t4_g7_g6

0x7e45,	// (0x0009ac2b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e45,	// (0x0009ac2b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000a29b6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000a29b6) list_medium_line_x4_t4_g7_g

0x7e51,	// (0x0009ac37) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e51,	// (0x0009ac37) list_medium_line_x4_t4_g7_t1

0x7e66,	// (0x0009ac4c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e66,	// (0x0009ac4c) list_medium_line_x4_t4_g7_t2

0x7e7b,	// (0x0009ac61) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e7b,	// (0x0009ac61) list_medium_line_x4_t4_g7_t3

0x7e90,	// (0x0009ac76) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e90,	// (0x0009ac76) list_medium_line_x4_t4_g7_t4

0x7ea2,	// (0x0009ac88) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ea2,	// (0x0009ac88) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000a29c5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000a29c5) list_medium_line_x4_t4_g7_t

0x7eb4,	// (0x0009ac9a) list_single_dyc_row_pane_ParamLimits

0x7eb4,	// (0x0009ac9a) list_single_dyc_row_pane

0x858a,	// (0x0009b370) call5_gesture_pane_ParamLimits

0x858a,	// (0x0009b370) call5_gesture_pane

0x85be,	// (0x0009b3a4) call5_windows_pane_ParamLimits

0x85be,	// (0x0009b3a4) call5_windows_pane

0x8611,	// (0x0009b3f7) call5_swipe_1_pane_cp_ParamLimits

0x8611,	// (0x0009b3f7) call5_swipe_1_pane_cp

0x861d,	// (0x0009b403) call5_swipe_2_pane_cp_ParamLimits

0x861d,	// (0x0009b403) call5_swipe_2_pane_cp

0xa5a9,	// (0x0009d38f) call5_image_pane_cp

0x8629,	// (0x0009b40f) popup_call5_audio_first_window_cp_ParamLimits

0x8629,	// (0x0009b40f) popup_call5_audio_first_window_cp

0xaf30,	// (0x0009dd16) call5_swipe_1_pane_g1_cp_ParamLimits

0xaf30,	// (0x0009dd16) call5_swipe_1_pane_g1_cp

0xaf9d,	// (0x0009dd83) call5_swipe_1_pane_g2_cp

0xaf49,	// (0x0009dd2f) call5_swipe_1_pane_t1_cp_ParamLimits

0xaf49,	// (0x0009dd2f) call5_swipe_1_pane_t1_cp

0xaf30,	// (0x0009dd16) call5_swipe_2_pane_g1_cp_ParamLimits

0xaf30,	// (0x0009dd16) call5_swipe_2_pane_g1_cp

0xafa5,	// (0x0009dd8b) call5_swipe_2_pane_g2_cp

0xafad,	// (0x0009dd93) call5_swipe_2_pane_t1_cp_ParamLimits

0xafad,	// (0x0009dd93) call5_swipe_2_pane_t1_cp

0xa7fa,	// (0x0009d5e0) main_sp_fs_email_pane

0xafc2,	// (0x0009dda8) main_sp_fs_listscroll_pane_te

0x8637,	// (0x0009b41d) popup_sp_fs_action_menu_pane_ParamLimits

0x8637,	// (0x0009b41d) popup_sp_fs_action_menu_pane

0xd97b,	// (0x000a0761) bg_sp_fs_ctrlbar_pane_g1

0xafcb,	// (0x0009ddb1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xafd4,	// (0x0009ddba) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xafdd,	// (0x0009ddc3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd97b,	// (0x000a0761) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000a2ab3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd760,	// (0x000a0546) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd760,	// (0x000a0546) bg_sp_fs_ctrlbar_ddmenu_pane

0xafe6,	// (0x0009ddcc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xafe6,	// (0x0009ddcc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xaff2,	// (0x0009ddd8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xaff2,	// (0x0009ddd8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000a2abc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000a2abc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xaffe,	// (0x0009dde4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xaffe,	// (0x0009dde4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x867b,	// (0x0009b461) list_medium_line_t2_right_icon_g1

0x8683,	// (0x0009b469) list_medium_line_t2_right_icon_t1

0x8693,	// (0x0009b479) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000a2ac1) list_medium_line_t2_right_icon_t

0xd56a,	// (0x000a0350) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd56a,	// (0x000a0350) bg_sp_fs_ctrlbar_pane

0x86f8,	// (0x0009b4de) main_sp_fs_ctrlbar_button_pane_cp01

0x8700,	// (0x0009b4e6) main_sp_fs_ctrlbar_ddmenu_pane

0xb050,	// (0x0009de36) main_sp_fs_ctrlbar_pane_g1

0xb05c,	// (0x0009de42) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000a2ac6) main_sp_fs_ctrlbar_pane_g

0xb068,	// (0x0009de4e) main_sp_fs_ctrlbar_pane_t1

0x870a,	// (0x0009b4f0) main_sp_fs_ctrlbar_pane

0x8720,	// (0x0009b506) main_sp_fs_listscroll_pane_te_cp01

0x8731,	// (0x0009b517) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8731,	// (0x0009b517) popup_sp_fs_action_menu_pane_cp01

0xa7fa,	// (0x0009d5e0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa7fa,	// (0x0009d5e0) bg_sp_fs_highlight_list_pane_cp01

0xe971,	// (0x000a1757) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe971,	// (0x000a1757) sp_fs_action_menu_list_gene_pane_g1

0xb098,	// (0x0009de7e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb098,	// (0x0009de7e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000a2ad0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000a2ad0) sp_fs_action_menu_list_gene_pane_g

0xe980,	// (0x000a1766) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe980,	// (0x000a1766) sp_fs_action_menu_list_gene_pane_t1

0xe998,	// (0x000a177e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe998,	// (0x000a177e) sp_fs_action_menu_list_gene_pane

0xb0a5,	// (0x0009de8b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb0a5,	// (0x0009de8b) popup_sp_fs_action_menu_bg_pane

0xe9b9,	// (0x000a179f) sp_fs_action_menu_list_pane_ParamLimits

0xe9b9,	// (0x000a179f) sp_fs_action_menu_list_pane

0xf087,	// (0x000a1e6d) sp_fs_scroll_pane_cp01_ParamLimits

0xf087,	// (0x000a1e6d) sp_fs_scroll_pane_cp01

0x875b,	// (0x0009b541) list_medium_line_plain_t2_t1

0x876b,	// (0x0009b551) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000a2ad5) list_medium_line_plain_t2_t

0x8779,	// (0x0009b55f) list_medium_line_plain_t3_t1

0x8789,	// (0x0009b56f) list_medium_line_plain_t3_t2

0x8797,	// (0x0009b57d) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000a2ada) list_medium_line_plain_t3_t

0x1f62,	// (0x00094d48) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x2_t2_g2_g1

0x1f7a,	// (0x00094d60) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1f7a,	// (0x00094d60) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000a202c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000a202c) list_medium_line_x2_t2_g2_g

0x33e6,	// (0x000961cc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x33e6,	// (0x000961cc) list_medium_line_x2_t2_g2_t1

0x1fad,	// (0x00094d93) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1fad,	// (0x00094d93) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000a2ae1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000a2ae1) list_medium_line_x2_t2_g2_t

0x1f62,	// (0x00094d48) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x2_t4_g2_g1

0x87a5,	// (0x0009b58b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87a5,	// (0x0009b58b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000a2ae6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000a2ae6) list_medium_line_x2_t4_g2_g

0x87b7,	// (0x0009b59d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87b7,	// (0x0009b59d) list_medium_line_x2_t4_g2_t1

0x87d1,	// (0x0009b5b7) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87d1,	// (0x0009b5b7) list_medium_line_x2_t4_g2_t2

0x87e7,	// (0x0009b5cd) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87e7,	// (0x0009b5cd) list_medium_line_x2_t4_g2_t3

0x1fad,	// (0x00094d93) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1fad,	// (0x00094d93) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000a2aeb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000a2aeb) list_medium_line_x2_t4_g2_t

0x87fc,	// (0x0009b5e2) list_medium_line_t3_right_iconx2_g1

0x867b,	// (0x0009b461) list_medium_line_t3_right_iconx2_g2

0x8804,	// (0x0009b5ea) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000a2af4) list_medium_line_t3_right_iconx2_g

0x880c,	// (0x0009b5f2) list_medium_line_t3_right_iconx2_t1

0x881c,	// (0x0009b602) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000a2afb) list_medium_line_t3_right_iconx2_t

0x1f62,	// (0x00094d48) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x3_t4_g4_g1

0x1f6e,	// (0x00094d54) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1f6e,	// (0x00094d54) list_medium_line_x3_t4_g4_g2

0x33ce,	// (0x000961b4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x33ce,	// (0x000961b4) list_medium_line_x3_t4_g4_g3

0x882a,	// (0x0009b610) list_medium_line_x3_t4_g4_g4_ParamLimits

0x882a,	// (0x0009b610) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000a2b00) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000a2b00) list_medium_line_x3_t4_g4_g

0x8836,	// (0x0009b61c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8836,	// (0x0009b61c) list_medium_line_x3_t4_g4_t1

0x884d,	// (0x0009b633) list_medium_line_x3_t4_g4_t2_ParamLimits

0x884d,	// (0x0009b633) list_medium_line_x3_t4_g4_t2

0x33fb,	// (0x000961e1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x33fb,	// (0x000961e1) list_medium_line_x3_t4_g4_t3

0x8862,	// (0x0009b648) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8862,	// (0x0009b648) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000a2b09) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000a2b09) list_medium_line_x3_t4_g4_t

0x887f,	// (0x0009b665) list_single_dyc_row_text_pane_t1_ParamLimits

0x887f,	// (0x0009b665) list_single_dyc_row_text_pane_t1

0x88b6,	// (0x0009b69c) list_single_dyc_row_text_pane_t2_ParamLimits

0x88b6,	// (0x0009b69c) list_single_dyc_row_text_pane_t2

0xe9db,	// (0x000a17c1) list_single_dyc_row_text_pane_t3_ParamLimits

0xe9db,	// (0x000a17c1) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000a2b12) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000a2b12) list_single_dyc_row_text_pane_t

0xe9ff,	// (0x000a17e5) list_single_dyc_row_pane_g1_ParamLimits

0xe9ff,	// (0x000a17e5) list_single_dyc_row_pane_g1

0xea0b,	// (0x000a17f1) list_single_dyc_row_pane_g2_ParamLimits

0xea0b,	// (0x000a17f1) list_single_dyc_row_pane_g2

0xea17,	// (0x000a17fd) list_single_dyc_row_pane_g3_ParamLimits

0xea17,	// (0x000a17fd) list_single_dyc_row_pane_g3

0xea23,	// (0x000a1809) list_single_dyc_row_pane_g4_ParamLimits

0xea23,	// (0x000a1809) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000a2b1f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000a2b1f) list_single_dyc_row_pane_g

0xea2f,	// (0x000a1815) list_single_dyc_row_text_pane_ParamLimits

0xea2f,	// (0x000a1815) list_single_dyc_row_text_pane

0x9ca7,	// (0x0009ca8d) bg_sp_fs_scroll_pane

0xb0b3,	// (0x0009de99) thumb_sp_fs_scroll_pane

0x6fa4,	// (0x00099d8a) list_medium_line_g1_ParamLimits

0x6fa4,	// (0x00099d8a) list_medium_line_g1

0x89d9,	// (0x0009b7bf) list_medium_line_t1_ParamLimits

0x89d9,	// (0x0009b7bf) list_medium_line_t1

0x1f62,	// (0x00094d48) list_medium_line_x2_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x2_g1

0x1f6e,	// (0x00094d54) list_medium_line_x2_g2_ParamLimits

0x1f6e,	// (0x00094d54) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000a2b28) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000a2b28) list_medium_line_x2_g

0xea4e,	// (0x000a1834) list_medium_line_x2_t1_ParamLimits

0xea4e,	// (0x000a1834) list_medium_line_x2_t1

0x1f62,	// (0x00094d48) list_medium_line_x3_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x3_g1

0x1f6e,	// (0x00094d54) list_medium_line_x3_g2_ParamLimits

0x1f6e,	// (0x00094d54) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000a2b28) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000a2b28) list_medium_line_x3_g

0xea4e,	// (0x000a1834) list_medium_line_x3_t1_ParamLimits

0xea4e,	// (0x000a1834) list_medium_line_x3_t1

0xb0bc,	// (0x0009dea2) thumb_sp_fs_scroll_pane_g1

0xb0c5,	// (0x0009deab) thumb_sp_fs_scroll_pane_g2

0xb0ce,	// (0x0009deb4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a2b2d) thumb_sp_fs_scroll_pane_g

0xb0bc,	// (0x0009dea2) bg_sp_fs_scroll_pane_g1

0xb0c5,	// (0x0009deab) bg_sp_fs_scroll_pane_g2

0xb0ce,	// (0x0009deb4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a2b2d) bg_sp_fs_scroll_pane_g

0x1f62,	// (0x00094d48) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1f62,	// (0x00094d48) list_medium_line_x2_t3_g4_g1

0x1fea,	// (0x00094dd0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1fea,	// (0x00094dd0) list_medium_line_x2_t3_g4_g2

0x1f6e,	// (0x00094d54) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1f6e,	// (0x00094d54) list_medium_line_x2_t3_g4_g3

0x1f7a,	// (0x00094d60) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1f7a,	// (0x00094d60) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000a20a8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000a20a8) list_medium_line_x2_t3_g4_g

0x89ee,	// (0x0009b7d4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89ee,	// (0x0009b7d4) list_medium_line_x2_t3_g4_t1

0x8a04,	// (0x0009b7ea) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a04,	// (0x0009b7ea) list_medium_line_x2_t3_g4_t2

0x1fad,	// (0x00094d93) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1fad,	// (0x00094d93) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000a2b34) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000a2b34) list_medium_line_x2_t3_g4_t

0x6fa4,	// (0x00099d8a) list_medium_line_g2_g1_ParamLimits

0x6fa4,	// (0x00099d8a) list_medium_line_g2_g1

0x6fb0,	// (0x00099d96) list_medium_line_g2_g2_ParamLimits

0x6fb0,	// (0x00099d96) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000a27e6) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000a27e6) list_medium_line_g2_g

0x8a1e,	// (0x0009b804) list_medium_line_g2_t1_ParamLimits

0x8a1e,	// (0x0009b804) list_medium_line_g2_t1

0x6fa4,	// (0x00099d8a) list_medium_line_t3_g2_g1_ParamLimits

0x6fa4,	// (0x00099d8a) list_medium_line_t3_g2_g1

0x6fb0,	// (0x00099d96) list_medium_line_t3_g2_g2_ParamLimits

0x6fb0,	// (0x00099d96) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000a27e6) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000a27e6) list_medium_line_t3_g2_g

0x8a33,	// (0x0009b819) list_medium_line_t3_g2_t1_ParamLimits

0x8a33,	// (0x0009b819) list_medium_line_t3_g2_t1

0x8a4d,	// (0x0009b833) list_medium_line_t3_g2_t2_ParamLimits

0x8a4d,	// (0x0009b833) list_medium_line_t3_g2_t2

0x8a63,	// (0x0009b849) list_medium_line_t3_g2_t3_ParamLimits

0x8a63,	// (0x0009b849) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000a2b3b) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000a2b3b) list_medium_line_t3_g2_t

0x867b,	// (0x0009b461) list_medium_line_right_icon_g1

0x8a79,	// (0x0009b85f) list_medium_line_right_icon_t1

0x6fa4,	// (0x00099d8a) list_medium_line_t2_g1_ParamLimits

0x6fa4,	// (0x00099d8a) list_medium_line_t2_g1

0x8a87,	// (0x0009b86d) list_medium_line_t2_t1_ParamLimits

0x8a87,	// (0x0009b86d) list_medium_line_t2_t1

0x8aa1,	// (0x0009b887) list_medium_line_t2_t2_ParamLimits

0x8aa1,	// (0x0009b887) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000a2b42) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000a2b42) list_medium_line_t2_t

0x6fa4,	// (0x00099d8a) list_medium_line_t3_g1_ParamLimits

0x6fa4,	// (0x00099d8a) list_medium_line_t3_g1

0x8ab6,	// (0x0009b89c) list_medium_line_t3_t1_ParamLimits

0x8ab6,	// (0x0009b89c) list_medium_line_t3_t1

0x8ad0,	// (0x0009b8b6) list_medium_line_t3_t2_ParamLimits

0x8ad0,	// (0x0009b8b6) list_medium_line_t3_t2

0x8ae6,	// (0x0009b8cc) list_medium_line_t3_t3_ParamLimits

0x8ae6,	// (0x0009b8cc) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000a2b47) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000a2b47) list_medium_line_t3_t

0x6fa4,	// (0x00099d8a) list_medium_line_g3_g1_ParamLimits

0x6fa4,	// (0x00099d8a) list_medium_line_g3_g1

0x8afb,	// (0x0009b8e1) list_medium_line_g3_g2_ParamLimits

0x8afb,	// (0x0009b8e1) list_medium_line_g3_g2

0x6fb0,	// (0x00099d96) list_medium_line_g3_g3_ParamLimits

0x6fb0,	// (0x00099d96) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000a2b4e) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000a2b4e) list_medium_line_g3_g

0x8b07,	// (0x0009b8ed) list_medium_line_g3_t1_ParamLimits

0x8b07,	// (0x0009b8ed) list_medium_line_g3_t1

0x6fa4,	// (0x00099d8a) list_medium_line_t2_g3_g1_ParamLimits

0x6fa4,	// (0x00099d8a) list_medium_line_t2_g3_g1

0x8afb,	// (0x0009b8e1) list_medium_line_t2_g3_g2_ParamLimits

0x8afb,	// (0x0009b8e1) list_medium_line_t2_g3_g2

0x6fb0,	// (0x00099d96) list_medium_line_t2_g3_g3_ParamLimits

0x6fb0,	// (0x00099d96) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000a2b4e) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000a2b4e) list_medium_line_t2_g3_g

0x8b1c,	// (0x0009b902) list_medium_line_t2_g3_t1_ParamLimits

0x8b1c,	// (0x0009b902) list_medium_line_t2_g3_t1

0x8b36,	// (0x0009b91c) list_medium_line_t2_g3_t2_ParamLimits

0x8b36,	// (0x0009b91c) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000a2b55) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000a2b55) list_medium_line_t2_g3_t

0x6fa4,	// (0x00099d8a) list_medium_line_t3_g3_g1_ParamLimits

0x6fa4,	// (0x00099d8a) list_medium_line_t3_g3_g1

0x8afb,	// (0x0009b8e1) list_medium_line_t3_g3_g2_ParamLimits

0x8afb,	// (0x0009b8e1) list_medium_line_t3_g3_g2

0x6fb0,	// (0x00099d96) list_medium_line_t3_g3_g3_ParamLimits

0x6fb0,	// (0x00099d96) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000a2b4e) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000a2b4e) list_medium_line_t3_g3_g

0x8b4c,	// (0x0009b932) list_medium_line_t3_g3_t1_ParamLimits

0x8b4c,	// (0x0009b932) list_medium_line_t3_g3_t1

0x8b65,	// (0x0009b94b) list_medium_line_t3_g3_t2_ParamLimits

0x8b65,	// (0x0009b94b) list_medium_line_t3_g3_t2

0x8b7b,	// (0x0009b961) list_medium_line_t3_g3_t3_ParamLimits

0x8b7b,	// (0x0009b961) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000a2b5a) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000a2b5a) list_medium_line_t3_g3_t

0x87fc,	// (0x0009b5e2) list_medium_line_right_iconx2_g1

0x867b,	// (0x0009b461) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a2b61) list_medium_line_right_iconx2_g

0x8b91,	// (0x0009b977) list_medium_line_right_iconx2_t1

0x87fc,	// (0x0009b5e2) list_medium_line_t2_right_iconx2_g1

0x867b,	// (0x0009b461) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a2b61) list_medium_line_t2_right_iconx2_g

0x8b9f,	// (0x0009b985) list_medium_line_t2_right_iconx2_t1

0x8baf,	// (0x0009b995) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000a2b66) list_medium_line_t2_right_iconx2_t

0x8bbd,	// (0x0009b9a3) list_medium_line_x4_t4_t1

0x8bcb,	// (0x0009b9b1) list_medium_line_x4_t4_t2

0x8bdb,	// (0x0009b9c1) list_medium_line_x4_t4_t3

0x8beb,	// (0x0009b9d1) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000a2b6b) list_medium_line_x4_t4_t

0x8c25,	// (0x0009ba0b) tport_appsw_pane_ParamLimits

0x8c25,	// (0x0009ba0b) tport_appsw_pane

0x8c33,	// (0x0009ba19) tport_contact_pane_ParamLimits

0x8c33,	// (0x0009ba19) tport_contact_pane

0x8c43,	// (0x0009ba29) tport_listscroll_pane_ParamLimits

0x8c43,	// (0x0009ba29) tport_listscroll_pane

0x8c53,	// (0x0009ba39) cell_tport_appsw_pane_ParamLimits

0x8c53,	// (0x0009ba39) cell_tport_appsw_pane

0xdc9b,	// (0x000a0a81) tport_appsw_pane_g1_ParamLimits

0xdc9b,	// (0x000a0a81) tport_appsw_pane_g1

0xb0d7,	// (0x0009debd) tport_contact_pane_g1

0xaa82,	// (0x0009d868) tport_contact_pane_t1

0xb0e0,	// (0x0009dec6) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000a2b74) tport_contact_pane_t

0xb0ee,	// (0x0009ded4) list_tport_pane

0xb0f7,	// (0x0009dedd) scroll_pane_cp_030

0x8c86,	// (0x0009ba6c) cell_tport_appsw_pane_g1

0x8c96,	// (0x0009ba7c) cell_tport_appsw_pane_t1

0x8ca4,	// (0x0009ba8a) grid_highlight_pane_cp019

0x8cac,	// (0x0009ba92) list_tport_double_graphic_pane_ParamLimits

0x8cac,	// (0x0009ba92) list_tport_double_graphic_pane

0xa7fa,	// (0x0009d5e0) list_highlight_pane_cp023_ParamLimits

0xa7fa,	// (0x0009d5e0) list_highlight_pane_cp023

0x8cbd,	// (0x0009baa3) list_tport_double_graphic_pane_g1_ParamLimits

0x8cbd,	// (0x0009baa3) list_tport_double_graphic_pane_g1

0x8cca,	// (0x0009bab0) list_tport_double_graphic_pane_t1_ParamLimits

0x8cca,	// (0x0009bab0) list_tport_double_graphic_pane_t1

0x8cdf,	// (0x0009bac5) list_tport_double_graphic_pane_t2_ParamLimits

0x8cdf,	// (0x0009bac5) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000a2b80) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000a2b80) list_tport_double_graphic_pane_t

0x9ca7,	// (0x0009ca8d) main_cale_note_pane

0x6776,	// (0x0009955c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6776,	// (0x0009955c) cell_vitu2_function_top_wide_pane_cp01

0x8261,	// (0x0009b047) wait_bar_pane_cp05_ParamLimits

0xa7fa,	// (0x0009d5e0) listscroll_cmail_pane

0xb100,	// (0x0009dee6) list_cmail_pane

0x8cf1,	// (0x0009bad7) list_cmail_body_pane

0x8d18,	// (0x0009bafe) list_single_cmail_header_caption_pane

0x8d43,	// (0x0009bb29) list_single_cmail_header_detail_pane_ParamLimits

0x8d43,	// (0x0009bb29) list_single_cmail_header_detail_pane

0xb110,	// (0x0009def6) list_single_cmail_header_caption_pane_t1

0x8d79,	// (0x0009bb5f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d79,	// (0x0009bb5f) list_single_cmail_header_detail_pane_g1

0xf0ad,	// (0x000a1e93) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0ad,	// (0x000a1e93) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000a2b85) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000a2b85) list_single_cmail_header_detail_pane_g

0xea64,	// (0x000a184a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xea64,	// (0x000a184a) list_single_cmail_header_detail_pane_t1

0xead2,	// (0x000a18b8) list_single_cmail_header_editor_pane_bg_ParamLimits

0xead2,	// (0x000a18b8) list_single_cmail_header_editor_pane_bg

0xabdf,	// (0x0009d9c5) list_cmail_body_pane_g1

0xb134,	// (0x0009df1a) list_cmail_body_pane_t1

0xe420,	// (0x000a1206) list_single_cmail_header_editor_pane_bg_g1

0xb953,	// (0x0009e739) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe430,	// (0x000a1216) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe428,	// (0x000a120e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe668,	// (0x000a144e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe450,	// (0x000a1236) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe440,	// (0x000a1226) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe448,	// (0x000a122e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa7e2,	// (0x0009d5c8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d8f,	// (0x0009bb75) calenote_gesture_pane_ParamLimits

0x8d8f,	// (0x0009bb75) calenote_gesture_pane

0x8da9,	// (0x0009bb8f) calenote_window_pane_ParamLimits

0x8da9,	// (0x0009bb8f) calenote_window_pane

0xb142,	// (0x0009df28) popup_note_window_cp01

0x8dc1,	// (0x0009bba7) calenote_swipe_1_pane_ParamLimits

0x8dc1,	// (0x0009bba7) calenote_swipe_1_pane

0x861d,	// (0x0009b403) calenote_swipe_2_pane_ParamLimits

0x861d,	// (0x0009b403) calenote_swipe_2_pane

0xaf30,	// (0x0009dd16) calenote_swipe_1_pane_g1_ParamLimits

0xaf30,	// (0x0009dd16) calenote_swipe_1_pane_g1

0xaf3d,	// (0x0009dd23) calenote_swipe_1_pane_g2_ParamLimits

0xaf3d,	// (0x0009dd23) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000a2aa9) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000a2aa9) calenote_swipe_1_pane_g

0xb154,	// (0x0009df3a) calenote_swipe_1_pane_t1_ParamLimits

0xb154,	// (0x0009df3a) calenote_swipe_1_pane_t1

0xaf30,	// (0x0009dd16) calenote_swipe_2_pane_g1_ParamLimits

0xaf30,	// (0x0009dd16) calenote_swipe_2_pane_g1

0xb173,	// (0x0009df59) calenote_swipe_2_pane_g2_ParamLimits

0xb173,	// (0x0009df59) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000a2b91) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000a2b91) calenote_swipe_2_pane_g

0xb17f,	// (0x0009df65) calenote_swipe_2_pane_t1_ParamLimits

0xb17f,	// (0x0009df65) calenote_swipe_2_pane_t1

0x9ca7,	// (0x0009ca8d) main_mup_navstr_pane

0x5494,	// (0x0009827a) main_mup3_pane_t7_ParamLimits

0x5494,	// (0x0009827a) main_mup3_pane_t7

0x5e9a,	// (0x00098c80) main_mp4_pane_g6_ParamLimits

0x5e9a,	// (0x00098c80) main_mp4_pane_g6

0x621a,	// (0x00099000) main_image3_pane_t4_ParamLimits

0x621a,	// (0x00099000) main_image3_pane_t4

0x8dd4,	// (0x0009bbba) popup_navstr_preview_pane_ParamLimits

0x8dd4,	// (0x0009bbba) popup_navstr_preview_pane

0x8de0,	// (0x0009bbc6) scroll_navstr_pane_ParamLimits

0x8de0,	// (0x0009bbc6) scroll_navstr_pane

0x9ca7,	// (0x0009ca8d) bg_popup_preview_window_pane_cp04

0xb1a6,	// (0x0009df8c) popup_navstr_preview_pane_t1

0x8dec,	// (0x0009bbd2) scroll_navstr_pane_g1_ParamLimits

0x8dec,	// (0x0009bbd2) scroll_navstr_pane_g1

0x8df9,	// (0x0009bbdf) scroll_navstr_pane_t1_ParamLimits

0x8df9,	// (0x0009bbdf) scroll_navstr_pane_t1

0xb14b,	// (0x0009df31) bg_button_pane_cp014

0xb14b,	// (0x0009df31) bg_button_pane_cp030

0x8530,	// (0x0009b316) list_double_fisheye_pane_g4_ParamLimits

0x8530,	// (0x0009b316) list_double_fisheye_pane_g4

0x853c,	// (0x0009b322) list_double_fisheye_pane_g5_ParamLimits

0x853c,	// (0x0009b322) list_double_fisheye_pane_g5

0xbf5b,	// (0x0009ed41) sp_fs_scroll_pane_cp03

0xb050,	// (0x0009de36) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb05c,	// (0x0009de42) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000a2ac6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb068,	// (0x0009de4e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb108,	// (0x0009deee) sp_fs_scroll_pane_cp02

0xa4e8,	// (0x0009d2ce) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4e8,	// (0x0009d2ce) popup_sp_fs_calendar_preview_list_single_pane

0x9ca7,	// (0x0009ca8d) main_cam6_pano_pane

0x446d,	// (0x00097253) main_mup3_pane_ParamLimits

0x9ca7,	// (0x0009ca8d) main_phacti_pane

0x8136,	// (0x0009af1c) bg_button_pane_cp11

0x814e,	// (0x0009af34) main_mobtv_info_pane_g2_ParamLimits

0x814e,	// (0x0009af34) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000a2a26) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000a2a26) main_mobtv_info_pane_g

0x8300,	// (0x0009b0e6) sc_clock_pane_t5_ParamLimits

0x8300,	// (0x0009b0e6) sc_clock_pane_t5

0x83a1,	// (0x0009b187) main_radioblah_pane_g1_ParamLimits

0xae7c,	// (0x0009dc62) main_radioblah_pane_t3_ParamLimits

0xae7c,	// (0x0009dc62) main_radioblah_pane_t3

0xae94,	// (0x0009dc7a) main_radioblah_pane_t4_ParamLimits

0xae94,	// (0x0009dc7a) main_radioblah_pane_t4

0x83bf,	// (0x0009b1a5) main_radioblah_text_pane_ParamLimits

0x83bf,	// (0x0009b1a5) main_radioblah_text_pane

0x83cc,	// (0x0009b1b2) main_radioblah_info_pane_g1_ParamLimits

0x8461,	// (0x0009b247) main_radioblah_info_pane_t4_ParamLimits

0x8461,	// (0x0009b247) main_radioblah_info_pane_t4

0xa7fa,	// (0x0009d5e0) main_sp_fs_calendar_pane

0x8e0b,	// (0x0009bbf1) main_phacti_pane_g1

0x8e13,	// (0x0009bbf9) phacti_note_pane_ParamLimits

0x8e13,	// (0x0009bbf9) phacti_note_pane

0xb1cf,	// (0x0009dfb5) phacti_term_pane_ParamLimits

0xb1cf,	// (0x0009dfb5) phacti_term_pane

0xb1e4,	// (0x0009dfca) phacti_note_pane_t1_ParamLimits

0xb1e4,	// (0x0009dfca) phacti_note_pane_t1

0xeae9,	// (0x000a18cf) phacti_term_pane_g1

0xeaf1,	// (0x000a18d7) phacti_term_pane_t1_ParamLimits

0xeaf1,	// (0x000a18d7) phacti_term_pane_t1

0xb1fb,	// (0x0009dfe1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa587,	// (0x0009d36d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000a2b9b) popup_sp_fs_calendar_preview_list_single_pane_g

0xb203,	// (0x0009dfe9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb203,	// (0x0009dfe9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb219,	// (0x0009dfff) aid_popup_sp_fs_bg_corner_pane

0xd97b,	// (0x000a0761) popup_sp_fs_calendar_preview_bg_pane_g1

0x9ca7,	// (0x0009ca8d) popup_sp_fs_calendar_preview_bg_pane

0xb221,	// (0x0009e007) popup_sp_fs_calendar_preview_list_pane

0xd56a,	// (0x000a0350) bg_main_sp_fs_cale_pane_ParamLimits

0xd56a,	// (0x000a0350) bg_main_sp_fs_cale_pane

0xeb1b,	// (0x000a1901) listscroll_cale_mrui_pane_ParamLimits

0xeb1b,	// (0x000a1901) listscroll_cale_mrui_pane

0xeb30,	// (0x000a1916) listscroll_sp_fs_schedule_track_pane

0xeb39,	// (0x000a191f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xeb39,	// (0x000a191f) main_sp_fs_ctrlbar_pane_cp01

0xb229,	// (0x0009e00f) main_sp_fs_ribbon_pane

0xeb4c,	// (0x000a1932) popup_sp_fs_cale_preview_window

0x8e76,	// (0x0009bc5c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e76,	// (0x0009bc5c) list_single_sp_fs_schedule_track_pane

0xeac4,	// (0x000a18aa) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeac4,	// (0x000a18aa) bg_sp_fs_highlight_list_pane_cp03

0x8e98,	// (0x0009bc7e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e98,	// (0x0009bc7e) list_single_sp_fs_schedule_track_pane_g1

0x8ea4,	// (0x0009bc8a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ea4,	// (0x0009bc8a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000a2ba0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000a2ba0) list_single_sp_fs_schedule_track_pane_g

0x8eb0,	// (0x0009bc96) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8eb0,	// (0x0009bc96) list_single_sp_fs_schedule_track_pane_t1

0x8ec8,	// (0x0009bcae) sp_fs_schedule_track_pane_ParamLimits

0x8ec8,	// (0x0009bcae) sp_fs_schedule_track_pane

0xb231,	// (0x0009e017) sp_fs_schedule_track_pane_g1

0xb239,	// (0x0009e01f) sp_fs_schedule_track_pane_g2

0xb241,	// (0x0009e027) sp_fs_schedule_track_pane_g3

0xb249,	// (0x0009e02f) sp_fs_schedule_track_pane_g4

0xb251,	// (0x0009e037) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000a2ba5) sp_fs_schedule_track_pane_g

0xe420,	// (0x000a1206) bg_sp_fs_schedule_viewer_highlight_g1

0xb953,	// (0x0009e739) bg_sp_fs_schedule_viewer_highlight_g2

0xe428,	// (0x000a120e) bg_sp_fs_schedule_viewer_highlight_g3

0xe430,	// (0x000a1216) bg_sp_fs_schedule_viewer_highlight_g4

0xe668,	// (0x000a144e) bg_sp_fs_schedule_viewer_highlight_g5

0xe440,	// (0x000a1226) bg_sp_fs_schedule_viewer_highlight_g6

0xe448,	// (0x000a122e) bg_sp_fs_schedule_viewer_highlight_g7

0xe450,	// (0x000a1236) bg_sp_fs_schedule_viewer_highlight_g8

0xa7e2,	// (0x0009d5c8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000a2bb0) bg_sp_fs_schedule_viewer_highlight_g

0x9ca7,	// (0x0009ca8d) bg_main_sp_fs_ribbon_pane

0x8ed8,	// (0x0009bcbe) main_sp_fs_ribbon_pane_g1

0xb259,	// (0x0009e03f) main_sp_fs_ribbon_pane_t1

0x8ee1,	// (0x0009bcc7) main_sp_fs_ribbon_pane_t2

0xb268,	// (0x0009e04e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000a2bc3) main_sp_fs_ribbon_pane_t

0xb277,	// (0x0009e05d) main_sp_fs_ribbon_scheduler_pane

0xb27f,	// (0x0009e065) bg_main_sp_fs_ribbon_pane_g1

0xb288,	// (0x0009e06e) bg_main_sp_fs_ribbon_pane_g2

0xb291,	// (0x0009e077) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000a2bca) bg_main_sp_fs_ribbon_pane_g

0xb299,	// (0x0009e07f) main_sp_fs_ribbon_scheduler_pane_g1

0xb2a2,	// (0x0009e088) main_sp_fs_ribbon_scheduler_pane_g2

0xb2ab,	// (0x0009e091) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000a2bd1) main_sp_fs_ribbon_scheduler_pane_g

0xb2b4,	// (0x0009e09a) list_cale_mrui_pane

0x8ef0,	// (0x0009bcd6) sp_fs_scroll_pane_cp07_ParamLimits

0x8ef0,	// (0x0009bcd6) sp_fs_scroll_pane_cp07

0x8f0c,	// (0x0009bcf2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f0c,	// (0x0009bcf2) bg_sp_fs_schedule_viewer_highlight

0xb2c1,	// (0x0009e0a7) list_single_sp_fs_schedule_track_pane_cp01

0xb2c9,	// (0x0009e0af) list_sp_fs_schedule_track_pane

0xb2d1,	// (0x0009e0b7) sp_fs_scroll_pane_cp06_ParamLimits

0xb2d1,	// (0x0009e0b7) sp_fs_scroll_pane_cp06

0xd97b,	// (0x000a0761) bgmain_sp_fs_calendar_pane_g1

0x8f19,	// (0x0009bcff) list_single_cale_mrui_pane_ParamLimits

0x8f19,	// (0x0009bcff) list_single_cale_mrui_pane

0xeb5e,	// (0x000a1944) list_single_cale_mrui_row_pane_ParamLimits

0xeb5e,	// (0x000a1944) list_single_cale_mrui_row_pane

0xeb6b,	// (0x000a1951) list_single_cale_mrui_row_pane_g1_ParamLimits

0xeb6b,	// (0x000a1951) list_single_cale_mrui_row_pane_g1

0xeba3,	// (0x000a1989) list_single_cale_mrui_row_pane_t1_ParamLimits

0xeba3,	// (0x000a1989) list_single_cale_mrui_row_pane_t1

0x8f46,	// (0x0009bd2c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f46,	// (0x0009bd2c) list_single_cale_mrui_row_pane_t2

0xebb5,	// (0x000a199b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xebb5,	// (0x000a199b) list_single_cale_mrui_row_pane_t3

0xebe4,	// (0x000a19ca) list_single_cale_mrui_row_pane_t4_ParamLimits

0xebe4,	// (0x000a19ca) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000a2bdf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000a2bdf) list_single_cale_mrui_row_pane_t

0x8fac,	// (0x0009bd92) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fac,	// (0x0009bd92) list_single_cmail_header_editor_pane_bg_cp01

0x8fcc,	// (0x0009bdb2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fcc,	// (0x0009bdb2) list_single_cmail_header_editor_pane_bg_cp02

0x8fe8,	// (0x0009bdce) main_radioblah_text_pane_t1_ParamLimits

0x8fe8,	// (0x0009bdce) main_radioblah_text_pane_t1

0xb2f0,	// (0x0009e0d6) cam6_indi_pane_cp01

0xb2f8,	// (0x0009e0de) cam6_mode_pane_cp01

0xb300,	// (0x0009e0e6) cam6_pano_pane

0xb309,	// (0x0009e0ef) cam6_zoom_pane_cp01

0xb311,	// (0x0009e0f7) cam6_pano_image_pane

0xb31c,	// (0x0009e102) cam6_pano_pane_g1

0xabdf,	// (0x0009d9c5) cam6_pano_pane_g2

0xb325,	// (0x0009e10b) cam6_pano_pane_g3

0xb32e,	// (0x0009e114) cam6_pano_pane_g4

0xdf96,	// (0x000a0d7c) cam6_pano_pane_g5

0xb337,	// (0x0009e11d) cam6_pano_pane_g6

0xf0c2,	// (0x000a1ea8) cam6_pano_pane_g7

0xb341,	// (0x0009e127) cam6_pano_pane_g8

0xb34a,	// (0x0009e130) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000a2be8) cam6_pano_pane_g

0x9ca7,	// (0x0009ca8d) main_browser_tag_pane

0xb19e,	// (0x0009df84) grid_navstr_albumart_pane

0xb355,	// (0x0009e13b) cell_navstr_albumart_pane_ParamLimits

0xb355,	// (0x0009e13b) cell_navstr_albumart_pane

0xb375,	// (0x0009e15b) cell_navstr_albumart_pane_g1

0xd37b,	// (0x000a0161) cell_navstr_albumart_pane_g2

0xd38b,	// (0x000a0171) cell_navstr_albumart_pane_g3

0xd383,	// (0x000a0169) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000a2bfb) cell_navstr_albumart_pane_g

0x9003,	// (0x0009bde9) bt_list_pane_ParamLimits

0x9003,	// (0x0009bde9) bt_list_pane

0x9023,	// (0x0009be09) bt_list_pane_t1

0x9032,	// (0x0009be18) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000a2c04) bt_list_pane_t

0x9ca7,	// (0x0009ca8d) main_cale_prevew_pane

0x9041,	// (0x0009be27) popup_cale_preview_window_ParamLimits

0x9041,	// (0x0009be27) popup_cale_preview_window

0xa7fa,	// (0x0009d5e0) bg_popup_preview_window_pane_cp05_ParamLimits

0xa7fa,	// (0x0009d5e0) bg_popup_preview_window_pane_cp05

0xb37d,	// (0x0009e163) list_cale_preview_pane_ParamLimits

0xb37d,	// (0x0009e163) list_cale_preview_pane

0x905a,	// (0x0009be40) list_double_cale_preview_pane_ParamLimits

0x905a,	// (0x0009be40) list_double_cale_preview_pane

0x906c,	// (0x0009be52) list_single_cale_preview_pane_ParamLimits

0x906c,	// (0x0009be52) list_single_cale_preview_pane

0x9082,	// (0x0009be68) list_single_cale_preview_pane_g1

0x908a,	// (0x0009be70) list_single_cale_preview_pane_t1_ParamLimits

0x908a,	// (0x0009be70) list_single_cale_preview_pane_t1

0x909f,	// (0x0009be85) list_double_cale_preview_pane_g1

0x90a7,	// (0x0009be8d) list_double_cale_preview_pane_t1_ParamLimits

0x90a7,	// (0x0009be8d) list_double_cale_preview_pane_t1

0x90bc,	// (0x0009bea2) list_double_cale_preview_pane_t2_ParamLimits

0x90bc,	// (0x0009bea2) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000a2c09) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000a2c09) list_double_cale_preview_pane_t

0x9ca7,	// (0x0009ca8d) main_ezdial_pane

0xa7fa,	// (0x0009d5e0) main_sp_fs_email_pane_ParamLimits

0x86a1,	// (0x0009b487) cmail_ddmenu_btn01_pane_ParamLimits

0x86a1,	// (0x0009b487) cmail_ddmenu_btn01_pane

0x86be,	// (0x0009b4a4) cmail_ddmenu_btn02_pane_ParamLimits

0x86be,	// (0x0009b4a4) cmail_ddmenu_btn02_pane

0x86dc,	// (0x0009b4c2) cmail_ddmenu_btn03_pane_ParamLimits

0x86dc,	// (0x0009b4c2) cmail_ddmenu_btn03_pane

0x870a,	// (0x0009b4f0) main_sp_fs_ctrlbar_pane_ParamLimits

0x8720,	// (0x0009b506) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cf1,	// (0x0009bad7) list_cmail_body_pane_ParamLimits

0xb11e,	// (0x0009df04) bg_button_pane_cp12

0xb127,	// (0x0009df0d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb127,	// (0x0009df0d) list_single_cmail_header_detail_pane_g3

0xeaa0,	// (0x000a1886) list_single_cmail_header_detail_pane_t2_ParamLimits

0xeaa0,	// (0x000a1886) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000a2b8c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000a2b8c) list_single_cmail_header_detail_pane_t

0xeb06,	// (0x000a18ec) phacti_term_pane_t2_ParamLimits

0xeb06,	// (0x000a18ec) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000a2b96) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000a2b96) phacti_term_pane_t

0xb389,	// (0x0009e16f) aid_size_list_single_double

0x90d4,	// (0x0009beba) popup_ezdial_listscroll_window

0x90f5,	// (0x0009bedb) popup_number_entry_window_cp01

0xa5a9,	// (0x0009d38f) bg_popup_call_pane_cp09

0xb395,	// (0x0009e17b) ezdial_list_pane

0xb39d,	// (0x0009e183) scroll_pane_cp23

0xd760,	// (0x000a0546) bg_button_pane_cp028_ParamLimits

0xd760,	// (0x000a0546) bg_button_pane_cp028

0x9103,	// (0x0009bee9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9103,	// (0x0009bee9) cmail_ddmenu_btn01_pane_g1

0x9113,	// (0x0009bef9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9113,	// (0x0009bef9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000a2c0e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000a2c0e) cmail_ddmenu_btn01_pane_g

0xb3a5,	// (0x0009e18b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb3a5,	// (0x0009e18b) cmail_ddmenu_btn01_pane_t1

0xd56a,	// (0x000a0350) bg_button_pane_cp029_ParamLimits

0xd56a,	// (0x000a0350) bg_button_pane_cp029

0x9113,	// (0x0009bef9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9113,	// (0x0009bef9) cmail_ddmenu_btn02_pane_g1

0x912c,	// (0x0009bf12) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x912c,	// (0x0009bf12) cmail_ddmenu_btn02_pane_t1

0xeac4,	// (0x000a18aa) bg_button_pane_cp031_ParamLimits

0xeac4,	// (0x000a18aa) bg_button_pane_cp031

0x9113,	// (0x0009bef9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9113,	// (0x0009bef9) cmail_ddmenu_btn03_pane_g1

0x912c,	// (0x0009bf12) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x912c,	// (0x0009bf12) cmail_ddmenu_btn03_pane_t1

0x60b7,	// (0x00098e9d) cell_dialer2_keypad_pane_t1_ParamLimits

0x60d1,	// (0x00098eb7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x60d1,	// (0x00098eb7) cell_dialer2_keypad_pane_t1_copy1

0x7f77,	// (0x0009ad5d) ncimui_group_button_pane

0xa7fa,	// (0x0009d5e0) main_sp_fs_calendar_pane_ParamLimits

0x8d18,	// (0x0009bafe) list_single_cmail_header_caption_pane_ParamLimits

0xf0b9,	// (0x000a1e9f) aid_recal_txt_sm_pane

0x9ca7,	// (0x0009ca8d) mian_recal_day_pane

0xeb4c,	// (0x000a1932) popup_sp_fs_cale_preview_window_ParamLimits

0xb3ba,	// (0x0009e1a0) list_recal_day_pane

0xec2e,	// (0x000a1a14) list_single_recal_day_pane_ParamLimits

0xec2e,	// (0x000a1a14) list_single_recal_day_pane

0xb3e1,	// (0x0009e1c7) list_single_recal_day_pane_g1_ParamLimits

0xb3e1,	// (0x0009e1c7) list_single_recal_day_pane_g1

0xec40,	// (0x000a1a26) list_single_recal_day_pane_g2_ParamLimits

0xec40,	// (0x000a1a26) list_single_recal_day_pane_g2

0xec4c,	// (0x000a1a32) list_single_recal_day_pane_g3_ParamLimits

0xec4c,	// (0x000a1a32) list_single_recal_day_pane_g3

0x9150,	// (0x0009bf36) list_single_recal_day_pane_g4_ParamLimits

0x9150,	// (0x0009bf36) list_single_recal_day_pane_g4

0xec58,	// (0x000a1a3e) list_single_recal_day_pane_g5_ParamLimits

0xec58,	// (0x000a1a3e) list_single_recal_day_pane_g5

0xec64,	// (0x000a1a4a) list_single_recal_day_pane_g6_ParamLimits

0xec64,	// (0x000a1a4a) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000a2c1d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000a2c1d) list_single_recal_day_pane_g

0xec78,	// (0x000a1a5e) list_single_recal_day_pane_t1

0xec8a,	// (0x000a1a70) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000a2c28) list_single_recal_day_pane_t

0x9168,	// (0x0009bf4e) ncimui_query_button_pane_ParamLimits

0x9168,	// (0x0009bf4e) ncimui_query_button_pane

0x9178,	// (0x0009bf5e) ncimui_query_button_pane_t1_ParamLimits

0x9178,	// (0x0009bf5e) ncimui_query_button_pane_t1

0xb3ed,	// (0x0009e1d3) ncimui_query_button_pane_t2_ParamLimits

0xb3ed,	// (0x0009e1d3) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000a2c2d) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000a2c2d) ncimui_query_button_pane_t

0x918b,	// (0x0009bf71) query_button_pane_ParamLimits

0x918b,	// (0x0009bf71) query_button_pane

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp0028

0xb400,	// (0x0009e1e6) query_button_pane_t1

0x4489,	// (0x0009726f) main_tport_pane_ParamLimits

0x8bfb,	// (0x0009b9e1) bg_popup_window_pane_cp01_ParamLimits

0x8bfb,	// (0x0009b9e1) bg_popup_window_pane_cp01

0x8c09,	// (0x0009b9ef) heading_pane_cp08_ParamLimits

0x8c09,	// (0x0009b9ef) heading_pane_cp08

0x8c17,	// (0x0009b9fd) heading_pane_cp07_ParamLimits

0x8c17,	// (0x0009b9fd) heading_pane_cp07

0x8c86,	// (0x0009ba6c) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000a2b79) cell_tport_appsw_pane_g

0x3b8b,	// (0x00096971) input_candi_list_open_g1

0xbb16,	// (0x0009e8fc) list_cale_time_pane_g6_ParamLimits

0xbb16,	// (0x0009e8fc) list_cale_time_pane_g6

0x4f06,	// (0x00097cec) aid_size_touch_calib_1_ParamLimits

0x4f06,	// (0x00097cec) aid_size_touch_calib_1

0x4f12,	// (0x00097cf8) aid_size_touch_calib_2_ParamLimits

0x4f12,	// (0x00097cf8) aid_size_touch_calib_2

0x4f20,	// (0x00097d06) aid_size_touch_calib_3_ParamLimits

0x4f20,	// (0x00097d06) aid_size_touch_calib_3

0x4f30,	// (0x00097d16) aid_size_touch_calib_4_ParamLimits

0x4f30,	// (0x00097d16) aid_size_touch_calib_4

0x4f3e,	// (0x00097d24) main_touch_calib_button_group_pane_ParamLimits

0x4f3e,	// (0x00097d24) main_touch_calib_button_group_pane

0x4f4c,	// (0x00097d32) main_touch_calib_pane_g1_ParamLimits

0x4f58,	// (0x00097d3e) main_touch_calib_pane_g2_ParamLimits

0x4f64,	// (0x00097d4a) main_touch_calib_pane_g3_ParamLimits

0x4f70,	// (0x00097d56) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000a2537) main_touch_calib_pane_g_ParamLimits

0x4f7c,	// (0x00097d62) main_touch_calib_pane_t1_ParamLimits

0x4f95,	// (0x00097d7b) main_touch_calib_pane_t2_ParamLimits

0x4fae,	// (0x00097d94) main_touch_calib_pane_t3_ParamLimits

0x4fc4,	// (0x00097daa) main_touch_calib_pane_t4_ParamLimits

0x4fda,	// (0x00097dc0) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000a2540) main_touch_calib_pane_t_ParamLimits

0xdd36,	// (0x000a0b1c) list_single_fp_cale_pane_g3_ParamLimits

0xdd36,	// (0x000a0b1c) list_single_fp_cale_pane_g3

0x446d,	// (0x00097253) bg_button_pane_cp012_ParamLimits

0x446d,	// (0x00097253) bg_vkb2_func_pane_cp03_ParamLimits

0x6f24,	// (0x00099d0a) cell_vitu2_function_top_pane_g1_ParamLimits

0x446d,	// (0x00097253) bg_vkb2_func_pane_cp04_ParamLimits

0x7eff,	// (0x0009ace5) main_ncimui_button_group_pane_ParamLimits

0x7eff,	// (0x0009ace5) main_ncimui_button_group_pane

0x7f65,	// (0x0009ad4b) main_ncimui_pane_t3_ParamLimits

0x7f65,	// (0x0009ad4b) main_ncimui_pane_t3

0xb1c6,	// (0x0009dfac) phacti_button_group_pane

0xb389,	// (0x0009e16f) aid_size_list_single_double_ParamLimits

0x90d4,	// (0x0009beba) popup_ezdial_listscroll_window_ParamLimits

0x90f5,	// (0x0009bedb) popup_number_entry_window_cp01_ParamLimits

0x9198,	// (0x0009bf7e) phacti_button_pane_ParamLimits

0x9198,	// (0x0009bf7e) phacti_button_pane

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp14

0xb40e,	// (0x0009e1f4) phacti_button_pane_t1

0x91a9,	// (0x0009bf8f) main_touch_calib_button_pane_ParamLimits

0x91a9,	// (0x0009bf8f) main_touch_calib_button_pane

0xa3e4,	// (0x0009d1ca) bg_button_pane_cp18_ParamLimits

0xa3e4,	// (0x0009d1ca) bg_button_pane_cp18

0xb41c,	// (0x0009e202) main_touch_calib_button_pane_t1_ParamLimits

0xb41c,	// (0x0009e202) main_touch_calib_button_pane_t1

0xb432,	// (0x0009e218) main_touch_calib_button_pane_t2_ParamLimits

0xb432,	// (0x0009e218) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000a2c32) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000a2c32) main_touch_calib_button_pane_t

0x9ca7,	// (0x0009ca8d) cell_ncimui_button_pane

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp032

0xb450,	// (0x0009e236) cell_ncimui_button_pane_t1

0x612d,	// (0x00098f13) image3_infobar_pane_ParamLimits

0x612d,	// (0x00098f13) image3_infobar_pane

0x8322,	// (0x0009b108) fs_bigclock_status_pane_ParamLimits

0x8322,	// (0x0009b108) fs_bigclock_status_pane

0x832f,	// (0x0009b115) main_fs_bigclock_clock_pane_ParamLimits

0x832f,	// (0x0009b115) main_fs_bigclock_clock_pane

0x8343,	// (0x0009b129) main_fs_bigclock_indi_pane_ParamLimits

0x8343,	// (0x0009b129) main_fs_bigclock_indi_pane

0x836b,	// (0x0009b151) main_fs_bigclock_swipe_pane_ParamLimits

0x836b,	// (0x0009b151) main_fs_bigclock_swipe_pane

0x9ca7,	// (0x0009ca8d) main_fs_clock_dumped_data

0xacec,	// (0x0009dad2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xacec,	// (0x0009dad2) list_single_fs_bigclock_indicator_pane_g1

0xad07,	// (0x0009daed) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xad07,	// (0x0009daed) list_single_fs_bigclock_indicator_pane_g2

0xad21,	// (0x0009db07) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xad21,	// (0x0009db07) list_single_fs_bigclock_indicator_pane_g3

0xad3b,	// (0x0009db21) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xad3b,	// (0x0009db21) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000a2a5a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000a2a5a) list_single_fs_bigclock_indicator_pane_g

0xad66,	// (0x0009db4c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xad66,	// (0x0009db4c) list_single_fs_bigclock_indicator_pane_t1

0xad8e,	// (0x0009db74) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xad8e,	// (0x0009db74) list_single_fs_bigclock_indicator_pane_t2

0xadb6,	// (0x0009db9c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xadb6,	// (0x0009db9c) list_single_fs_bigclock_indicator_pane_t3

0xadde,	// (0x0009dbc4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xadde,	// (0x0009dbc4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000a2a65) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000a2a65) list_single_fs_bigclock_indicator_pane_t

0xb45e,	// (0x0009e244) image3_infobar_fav_pane_ParamLimits

0xb45e,	// (0x0009e244) image3_infobar_fav_pane

0xb46e,	// (0x0009e254) image3_infobar_loc_pane_ParamLimits

0xb46e,	// (0x0009e254) image3_infobar_loc_pane

0xb482,	// (0x0009e268) image3_infobar_time_pane_ParamLimits

0xb482,	// (0x0009e268) image3_infobar_time_pane

0xd97b,	// (0x000a0761) image3_infobar_time_pane_g1

0xb492,	// (0x0009e278) image3_infobar_time_pane_t1

0xd97b,	// (0x000a0761) image3_infobar_loc_pane_g1

0xb4a0,	// (0x0009e286) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000a2c37) image3_infobar_loc_pane_g

0xb4a8,	// (0x0009e28e) image3_infobar_loc_pane_t1

0xd97b,	// (0x000a0761) image3_infobar_fav_pane_g1

0xb4b6,	// (0x0009e29c) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000a2c3c) image3_infobar_fav_pane_g

0xb4be,	// (0x0009e2a4) fs_bigclock_status_battery_pane

0xb4c7,	// (0x0009e2ad) fs_bigclock_status_signal_pane

0xb4d0,	// (0x0009e2b6) fs_bigclock_status_title_pane

0xb4d9,	// (0x0009e2bf) fs_bigclock_status_signal_pane_g1

0xb4e2,	// (0x0009e2c8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000a2c41) fs_bigclock_status_signal_pane_g

0xb4ea,	// (0x0009e2d0) fs_bigclock_status_battery_pane_g1

0xb4f3,	// (0x0009e2d9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000a2c46) fs_bigclock_status_battery_pane_g

0xb4fb,	// (0x0009e2e1) fs_bigclock_status_title_pane_t1

0x91b9,	// (0x0009bf9f) main_fs_bigclock_clock_pane_g1

0x91b9,	// (0x0009bf9f) main_fs_bigclock_clock_pane_g2

0x91c6,	// (0x0009bfac) main_fs_bigclock_clock_pane_g3

0x91c6,	// (0x0009bfac) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000a2c4b) main_fs_bigclock_clock_pane_g

0x91d2,	// (0x0009bfb8) main_fs_bigclock_clock_pane_t1

0x91e5,	// (0x0009bfcb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000a2c54) main_fs_bigclock_clock_pane_t

0xb509,	// (0x0009e2ef) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb509,	// (0x0009e2ef) list_single_fs_bigclock_indicator_pane

0xb51a,	// (0x0009e300) list_single_fs_bigclock_pane_ParamLimits

0xb51a,	// (0x0009e300) list_single_fs_bigclock_pane

0xb540,	// (0x0009e326) main_fs_bigclock_indicator_pane_t1

0xb54f,	// (0x0009e335) list_single_fs_bigclock_pane_g1

0xb557,	// (0x0009e33d) list_single_fs_bigclock_pane_t1

0xd97b,	// (0x000a0761) main_fs_bigclock_swipe_pane_g1

0xb59a,	// (0x0009e380) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000a2c65) main_fs_bigclock_swipe_pane_g

0xb5a2,	// (0x0009e388) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb5a2,	// (0x0009e388) main_fs_bigclock_swipe_pane_t1

0x3425,	// (0x0009620b) call_type_pane_ParamLimits

0x9ca7,	// (0x0009ca8d) main_btmg_pane

0xeb97,	// (0x000a197d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeb97,	// (0x000a197d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000a2bd8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000a2bd8) list_single_cale_mrui_row_pane_g

0xec1d,	// (0x000a1a03) list_recal_vselct_arw_lo_pane

0xb3d9,	// (0x0009e1bf) list_recal_vselct_arw_up_pane

0xec25,	// (0x000a1a0b) list_recal_vselct_pane

0x923c,	// (0x0009c022) btmg_button_pane

0x9248,	// (0x0009c02e) main_btmg_pane_g1

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp044

0xb5bf,	// (0x0009e3a5) btmg_button_pane_t1

0xd556,	// (0x000a033c) aid_listscroll_gen

0xa7fa,	// (0x0009d5e0) main_cntbar_detail_pane

0xb100,	// (0x0009dee6) list_cmail_folder_pane

0xbf5b,	// (0x0009ed41) sp_fs_scroll_pane_cp03_ParamLimits

0x9250,	// (0x0009c036) list_single_fs_dyc_pane_cp01_ParamLimits

0x9250,	// (0x0009c036) list_single_fs_dyc_pane_cp01

0xb5cd,	// (0x0009e3b3) aid_size_cmail_indent

0xec9c,	// (0x000a1a82) list_single_dyc_row_pane_cp01

0x9295,	// (0x0009c07b) cntbar_detail_list_pane_ParamLimits

0x9295,	// (0x0009c07b) cntbar_detail_list_pane

0x92cf,	// (0x0009c0b5) main_cntbar_detail_cont_pane_ParamLimits

0x92cf,	// (0x0009c0b5) main_cntbar_detail_cont_pane

0x333e,	// (0x00096124) scroll_pane_cp032_ParamLimits

0x333e,	// (0x00096124) scroll_pane_cp032

0x92db,	// (0x0009c0c1) cntbar_detail_list_event_pane_ParamLimits

0x92db,	// (0x0009c0c1) cntbar_detail_list_event_pane

0x92a1,	// (0x0009c087) cntbar_detail_list_shct_pane

0xb9a1,	// (0x0009e787) aid_list_gen

0xb5d6,	// (0x0009e3bc) aid_scroll

0xb5df,	// (0x0009e3c5) aid_size_touch_scroll_bar

0xf07e,	// (0x000a1e64) aid_list_double

0x92ef,	// (0x0009c0d5) aid_list_single

0x7672,	// (0x0009a458) aid_list_single_lg

0x92f8,	// (0x0009c0de) aid_list_z_g_a_sm

0x9300,	// (0x0009c0e6) aid_list_z_g_d

0x9308,	// (0x0009c0ee) aid_txt_z_prm

0x9316,	// (0x0009c0fc) aid_txt_z_prm_cp01

0x9324,	// (0x0009c10a) aid_txt_z_sec

0x9332,	// (0x0009c118) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9332,	// (0x0009c118) main_cntbar_detail_cont_pane_g1

0x933f,	// (0x0009c125) main_cntbar_detail_cont_pane_g2_ParamLimits

0x933f,	// (0x0009c125) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000a2c6a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000a2c6a) main_cntbar_detail_cont_pane_g

0xb5e8,	// (0x0009e3ce) main_cntbar_detail_cont_pane_t1

0xb5f6,	// (0x0009e3dc) main_cntbar_detail_cont_pane_t2

0xb604,	// (0x0009e3ea) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000a2c6f) main_cntbar_detail_cont_pane_t

0x934b,	// (0x0009c131) cell_cntbar_detail_list_shct_pane_ParamLimits

0x934b,	// (0x0009c131) cell_cntbar_detail_list_shct_pane

0xb612,	// (0x0009e3f8) cntbar_detail_list_shct_pane_g1

0xb61b,	// (0x0009e401) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000a2c76) cntbar_detail_list_shct_pane_g

0x935f,	// (0x0009c145) cntbar_detail_list_event_pane_g1_ParamLimits

0x935f,	// (0x0009c145) cntbar_detail_list_event_pane_g1

0x936b,	// (0x0009c151) cntbar_detail_list_event_pane_g2_ParamLimits

0x936b,	// (0x0009c151) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000a2c7b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000a2c7b) cntbar_detail_list_event_pane_g

0x93d7,	// (0x0009c1bd) cntbar_detail_list_event_pane_t1_ParamLimits

0x93d7,	// (0x0009c1bd) cntbar_detail_list_event_pane_t1

0x93ec,	// (0x0009c1d2) cntbar_detail_list_event_pane_t2_ParamLimits

0x93ec,	// (0x0009c1d2) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000a2c88) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000a2c88) cntbar_detail_list_event_pane_t

0xd97b,	// (0x000a0761) cell_cntbar_detail_list_shct_pane_g1

0xc132,	// (0x0009ef18) navi_pane_mv_g3

0xa7fa,	// (0x0009d5e0) main_cntbar_detail_pane_ParamLimits

0x9ca7,	// (0x0009ca8d) main_notif_wgt_pane

0x5de1,	// (0x00098bc7) aid_tch_main_mp4_pane_g4

0x6016,	// (0x00098dfc) popup_slider_window_cp02

0xec13,	// (0x000a19f9) list_recal_day_event_pane

0x9275,	// (0x0009c05b) cntbar_detail_btn_pane_ParamLimits

0x9275,	// (0x0009c05b) cntbar_detail_btn_pane

0x9285,	// (0x0009c06b) cntbar_detail_btn_pane_cp01_ParamLimits

0x9285,	// (0x0009c06b) cntbar_detail_btn_pane_cp01

0x92a1,	// (0x0009c087) cntbar_detail_list_shct_pane_ParamLimits

0x92ad,	// (0x0009c093) cntbar_detail_pane_g1_ParamLimits

0x92ad,	// (0x0009c093) cntbar_detail_pane_g1

0x92b9,	// (0x0009c09f) cntbar_detail_pane_t1_ParamLimits

0x92b9,	// (0x0009c09f) cntbar_detail_pane_t1

0x9377,	// (0x0009c15d) cntbar_detail_list_event_pane_g3_ParamLimits

0x9377,	// (0x0009c15d) cntbar_detail_list_event_pane_g3

0x938f,	// (0x0009c175) cntbar_detail_list_event_pane_g4_ParamLimits

0x938f,	// (0x0009c175) cntbar_detail_list_event_pane_g4

0x93a7,	// (0x0009c18d) cntbar_detail_list_event_pane_g5_ParamLimits

0x93a7,	// (0x0009c18d) cntbar_detail_list_event_pane_g5

0x93bf,	// (0x0009c1a5) cntbar_detail_list_event_pane_g6_ParamLimits

0x93bf,	// (0x0009c1a5) cntbar_detail_list_event_pane_g6

0x9401,	// (0x0009c1e7) cntbar_detail_list_event_pane_t3_ParamLimits

0x9401,	// (0x0009c1e7) cntbar_detail_list_event_pane_t3

0x9413,	// (0x0009c1f9) popup_notif_wgt_window_ParamLimits

0x9413,	// (0x0009c1f9) popup_notif_wgt_window

0x9423,	// (0x0009c209) popup_submenu_window_cp01_ParamLimits

0x9423,	// (0x0009c209) popup_submenu_window_cp01

0xa5a9,	// (0x0009d38f) bg_popup_window_pane_cp10

0xb624,	// (0x0009e40a) listscroll_notif_wgt_pane

0xb636,	// (0x0009e41c) list_notif_wgt_window

0xb63f,	// (0x0009e425) scroll_pane_cp033

0x9435,	// (0x0009c21b) list_notif_wgt_row_pane_ParamLimits

0x9435,	// (0x0009c21b) list_notif_wgt_row_pane

0xb648,	// (0x0009e42e) aid_size_list_notif_wgt_del

0xb655,	// (0x0009e43b) list_notif_wgt_row_pane_g1

0xb661,	// (0x0009e447) list_notif_wgt_row_pane_g2

0xb670,	// (0x0009e456) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000a2c8f) list_notif_wgt_row_pane_g

0xb67d,	// (0x0009e463) list_notif_wgt_row_pane_t1

0xb693,	// (0x0009e479) list_notif_wgt_row_pane_t2

0xb6a5,	// (0x0009e48b) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000a2c96) list_notif_wgt_row_pane_t

0xe682,	// (0x000a1468) list_recal_day_event_pane_g1

0xb6b7,	// (0x0009e49d) list_recal_day_event_pane_t1

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp045

0x9447,	// (0x0009c22d) cntbar_detail_btn_pane_t1

0xd56a,	// (0x000a0350) main_callh_pane_ParamLimits

0xd56a,	// (0x000a0350) main_callh_pane

0x9ca7,	// (0x0009ca8d) main_coverflow0_pane

0x9ca7,	// (0x0009ca8d) main_wgtman_pane

0x8383,	// (0x0009b169) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8383,	// (0x0009b169) main_fs_bigclock_unlock_btn_pane

0x8c7e,	// (0x0009ba64) bg_button_pane_cp16

0x8c8e,	// (0x0009ba74) cell_tport_appsw_pane_g3

0x9455,	// (0x0009c23b) cf0_flow_pane_ParamLimits

0x9455,	// (0x0009c23b) cf0_flow_pane

0xb6c6,	// (0x0009e4ac) listscroll_cf0_pane

0xb6d1,	// (0x0009e4b7) main_cf0_pane_g1

0x9464,	// (0x0009c24a) main_cf0_pane_t1_ParamLimits

0x9464,	// (0x0009c24a) main_cf0_pane_t1

0x9478,	// (0x0009c25e) main_cf0_pane_t2_ParamLimits

0x9478,	// (0x0009c25e) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000a2ca2) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000a2ca2) main_cf0_pane_t

0xb6e3,	// (0x0009e4c9) scroll_pane_cp11

0x948c,	// (0x0009c272) cf0_flow_pane_g1

0x9494,	// (0x0009c27a) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000a2ca7) cf0_flow_pane_g

0x949c,	// (0x0009c282) cf0_flow_pane_t1

0x9ca7,	// (0x0009ca8d) main_call6_pane

0x9ca7,	// (0x0009ca8d) main_calllock_pane

0x94aa,	// (0x0009c290) call6_btn_grp_pane_ParamLimits

0x94aa,	// (0x0009c290) call6_btn_grp_pane

0x94b9,	// (0x0009c29f) call6_pane_g1_ParamLimits

0x94b9,	// (0x0009c29f) call6_pane_g1

0x94c9,	// (0x0009c2af) popup_call6_1st_window_ParamLimits

0x94c9,	// (0x0009c2af) popup_call6_1st_window

0x94d7,	// (0x0009c2bd) popup_call6_2nd_window_ParamLimits

0x94d7,	// (0x0009c2bd) popup_call6_2nd_window

0x94e5,	// (0x0009c2cb) cell_call6_btn_pane_ParamLimits

0x94e5,	// (0x0009c2cb) cell_call6_btn_pane

0xa5a9,	// (0x0009d38f) bg_popup_call2_in_pane_cp03

0xb6ee,	// (0x0009e4d4) popup_call6_1st_window_g1

0xb6f6,	// (0x0009e4dc) popup_call6_1st_window_g2

0xb6fe,	// (0x0009e4e4) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000a2cac) popup_call6_1st_window_g

0xb706,	// (0x0009e4ec) popup_call6_1st_window_t1

0xb715,	// (0x0009e4fb) popup_call6_1st_window_t2

0xb723,	// (0x0009e509) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000a2cb3) popup_call6_1st_window_t

0xa5a9,	// (0x0009d38f) bg_popup_call2_in_pane_cp04

0xb6ee,	// (0x0009e4d4) popup_call6_2nd_window_g1

0xb6f6,	// (0x0009e4dc) popup_call6_2nd_window_g2

0xb6fe,	// (0x0009e4e4) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000a2cac) popup_call6_2nd_window_g

0xb706,	// (0x0009e4ec) popup_call6_2nd_window_t1

0x125a,	// (0x00094040) bg_button_pane_cp15

0x94f4,	// (0x0009c2da) cell_call6_btn_pane_g1

0x94fd,	// (0x0009c2e3) cell_call6_btn_pane_t1

0x950c,	// (0x0009c2f2) listscroll_wgtman_pane_ParamLimits

0x950c,	// (0x0009c2f2) listscroll_wgtman_pane

0x9528,	// (0x0009c30e) wgtman_btn_pane_ParamLimits

0x9528,	// (0x0009c30e) wgtman_btn_pane

0xbf13,	// (0x0009ecf9) aid_scroll_copy1

0xb731,	// (0x0009e517) list_wgtman_pane

0x955d,	// (0x0009c343) wgtman_btn_pane_g1_ParamLimits

0x955d,	// (0x0009c343) wgtman_btn_pane_g1

0x9585,	// (0x0009c36b) wgtman_btn_pane_t1_ParamLimits

0x9585,	// (0x0009c36b) wgtman_btn_pane_t1

0xb73b,	// (0x0009e521) wgtman_btn_pane_t2_ParamLimits

0xb73b,	// (0x0009e521) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000a2cba) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000a2cba) wgtman_btn_pane_t

0x95bc,	// (0x0009c3a2) listrow_wgtman_pane_ParamLimits

0x95bc,	// (0x0009c3a2) listrow_wgtman_pane

0x95d7,	// (0x0009c3bd) listrow_wgtman_pane_g1

0x95e4,	// (0x0009c3ca) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000a2cbf) listrow_wgtman_pane_g

0x9602,	// (0x0009c3e8) listrow_wgtman_pane_t1

0x961a,	// (0x0009c400) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000a2cc4) listrow_wgtman_pane_t

0x9640,	// (0x0009c426) wait_bar_pane_cp09

0xb752,	// (0x0009e538) main_calllock_btn_pane

0xb75c,	// (0x0009e542) main_calllock_pane_g1

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp17

0xb768,	// (0x0009e54e) main_calllock_btn_pane_g1

0xb771,	// (0x0009e557) main_calllock_btn_pane_t1

0x9ca7,	// (0x0009ca8d) main_dialer3_pane

0x9ca7,	// (0x0009ca8d) main_fmrd2_pane

0xd97b,	// (0x000a0761) main_fs_bigclock_unlock_btn_pane_g1

0x965a,	// (0x0009c440) main_fs_bigclock_unlock_btn_pane_t1

0x9668,	// (0x0009c44e) area_fmrd2_info_pane_ParamLimits

0x9668,	// (0x0009c44e) area_fmrd2_info_pane

0x9676,	// (0x0009c45c) area_fmrd2_visual_pane_ParamLimits

0x9676,	// (0x0009c45c) area_fmrd2_visual_pane

0x9684,	// (0x0009c46a) fmrd2_indi_pane_ParamLimits

0x9684,	// (0x0009c46a) fmrd2_indi_pane

0x9691,	// (0x0009c477) area_fmrd2_visual_pane_g1

0x9699,	// (0x0009c47f) area_fmrd2_visual_pane_t1

0x96a9,	// (0x0009c48f) area_fmrd2_visual_pane_t2

0x96b9,	// (0x0009c49f) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000a2cce) area_fmrd2_visual_pane_t

0x96c9,	// (0x0009c4af) area_fmrd2_info_pane_g1

0x96d1,	// (0x0009c4b7) area_fmrd2_info_pane_t1

0x96e1,	// (0x0009c4c7) area_fmrd2_info_pane_t2

0x96f1,	// (0x0009c4d7) area_fmrd2_info_pane_t3

0x9701,	// (0x0009c4e7) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000a2cd5) area_fmrd2_info_pane_t

0x970f,	// (0x0009c4f5) fmrd2_indi_pane_t1

0x971f,	// (0x0009c505) fmrd2_indi_pane_t2

0x972f,	// (0x0009c515) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000a2cde) fmrd2_indi_pane_t

0xad4a,	// (0x0009db30) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xad4a,	// (0x0009db30) list_single_fs_bigclock_indicator_pane_g5

0xadfb,	// (0x0009dbe1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xadfb,	// (0x0009dbe1) list_single_fs_bigclock_indicator_pane_t5

0x8e29,	// (0x0009bc0f) aid_cell_bcale_month_pane_ParamLimits

0x8e29,	// (0x0009bc0f) aid_cell_bcale_month_pane

0x8e47,	// (0x0009bc2d) bcale_month_pane_ParamLimits

0x8e47,	// (0x0009bc2d) bcale_month_pane

0x8e65,	// (0x0009bc4b) bcale_preview_pane_ParamLimits

0x8e65,	// (0x0009bc4b) bcale_preview_pane

0xb557,	// (0x0009e33d) list_single_fs_bigclock_pane_t1_ParamLimits

0xb576,	// (0x0009e35c) list_single_fs_bigclock_pane_t2_ParamLimits

0xb576,	// (0x0009e35c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000a2c60) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000a2c60) list_single_fs_bigclock_pane_t

0x9652,	// (0x0009c438) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000a2cc9) main_fs_bigclock_unlock_btn_pane_g

0x973d,	// (0x0009c523) aid_dia3_key_size_ParamLimits

0x973d,	// (0x0009c523) aid_dia3_key_size

0x9749,	// (0x0009c52f) aid_dia3_listrow_size_ParamLimits

0x9749,	// (0x0009c52f) aid_dia3_listrow_size

0x9759,	// (0x0009c53f) dia3_keypad_fun_pane_ParamLimits

0x9759,	// (0x0009c53f) dia3_keypad_fun_pane

0x976b,	// (0x0009c551) dia3_keypad_num_pane_ParamLimits

0x976b,	// (0x0009c551) dia3_keypad_num_pane

0x977d,	// (0x0009c563) dia3_listscroll_pane_ParamLimits

0x977d,	// (0x0009c563) dia3_listscroll_pane

0x978b,	// (0x0009c571) dia3_numentry_pane_ParamLimits

0x978b,	// (0x0009c571) dia3_numentry_pane

0xb780,	// (0x0009e566) dia3_list_pane

0xb78b,	// (0x0009e571) scroll_pane_cp12

0x9ca7,	// (0x0009ca8d) bg_dia3_numentry_pane

0x9799,	// (0x0009c57f) dia3_numentry_pane_t1

0x97a8,	// (0x0009c58e) cell_dia3_key_num_pane

0x97b0,	// (0x0009c596) cell_dia3_key0_fun_pane_ParamLimits

0x97b0,	// (0x0009c596) cell_dia3_key0_fun_pane

0x97bd,	// (0x0009c5a3) cell_dia3_key1_fun_pane_ParamLimits

0x97bd,	// (0x0009c5a3) cell_dia3_key1_fun_pane

0x97ca,	// (0x0009c5b0) dia3_listrow_pane

0xaa9d,	// (0x0009d883) bg_dia3_numentry_pane_g1

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp21

0xb796,	// (0x0009e57c) cell_dia3_key_num_pane_t1

0xb7a4,	// (0x0009e58a) cell_dia3_key_num_pane_t2

0xb7b3,	// (0x0009e599) cell_dia3_key_num_pane_t3

0xb7c2,	// (0x0009e5a8) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000a2ce5) cell_dia3_key_num_pane_t

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp19

0x97d7,	// (0x0009c5bd) cell_dia3_key0_fun_pane_g1

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp20

0x97df,	// (0x0009c5c5) cell_dia3_key1_fun_pane_g1

0x97e7,	// (0x0009c5cd) area_left_week_number_pane

0x97fa,	// (0x0009c5e0) area_top_day_name_pane

0x9808,	// (0x0009c5ee) frame_month_view_pane

0xb7d1,	// (0x0009e5b7) grid_month_view_pane

0x981d,	// (0x0009c603) cell_top_day_name_pane_ParamLimits

0x981d,	// (0x0009c603) cell_top_day_name_pane

0x9837,	// (0x0009c61d) cell_area_left_week_number_pane_ParamLimits

0x9837,	// (0x0009c61d) cell_area_left_week_number_pane

0x985a,	// (0x0009c640) cell_month_view_pane_ParamLimits

0x985a,	// (0x0009c640) cell_month_view_pane

0xb7df,	// (0x0009e5c5) frm_month_g1

0x9886,	// (0x0009c66c) frm_month_g2

0x9897,	// (0x0009c67d) frm_month_g3

0x98a8,	// (0x0009c68e) frm_month_g4

0x98b9,	// (0x0009c69f) frm_month_g5

0x98cc,	// (0x0009c6b2) frm_month_g6

0x98df,	// (0x0009c6c5) frm_month_g7

0xb7ec,	// (0x0009e5d2) frm_month_g8

0x98f2,	// (0x0009c6d8) frm_month_g9

0x98ff,	// (0x0009c6e5) frm_month_g10

0x990c,	// (0x0009c6f2) frm_month_g11

0x9919,	// (0x0009c6ff) frm_month_g12

0x9926,	// (0x0009c70c) frm_month_g13

0x9933,	// (0x0009c719) frm_month_g14

0x9942,	// (0x0009c728) frm_month_g15

0x9951,	// (0x0009c737) frm_month_g16

0x000f,

0xff08,	// (0x000a2cee) frm_month_g

0xb7f9,	// (0x0009e5df) cell_top_day_name_pane_t1

0x9960,	// (0x0009c746) cell_area_left_week_number_pane_g1

0x996f,	// (0x0009c755) cell_area_left_week_number_pane_t1

0xdbde,	// (0x000a09c4) cell_month_view_pane_g1

0x9985,	// (0x0009c76b) cell_month_view_pane_t1

0x9ca7,	// (0x0009ca8d) main_fps_pane

0xb018,	// (0x0009ddfe) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb018,	// (0x0009ddfe) cmail_ddmenu_btn02_pane_cp1

0xb034,	// (0x0009de1a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb034,	// (0x0009de1a) cmail_ddmenu_btn02_pane_cp2

0x911f,	// (0x0009bf05) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x911f,	// (0x0009bf05) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000a2c13) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000a2c13) cmail_ddmenu_btn02_pane_g

0x913e,	// (0x0009bf24) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x913e,	// (0x0009bf24) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000a2c18) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000a2c18) cmail_ddmenu_btn02_pane_t

0x999b,	// (0x0009c781) fps_text_pane_ParamLimits

0x999b,	// (0x0009c781) fps_text_pane

0x99a8,	// (0x0009c78e) main_fps_pane_g1_ParamLimits

0x99a8,	// (0x0009c78e) main_fps_pane_g1

0x99b6,	// (0x0009c79c) wait_bar_pane_cp010_ParamLimits

0x99b6,	// (0x0009c79c) wait_bar_pane_cp010

0x99c2,	// (0x0009c7a8) fps_text_pane_t1_ParamLimits

0x99c2,	// (0x0009c7a8) fps_text_pane_t1

0x6438,	// (0x0009921e) cam4_image_uncrop_pane_g1

0x6441,	// (0x00099227) cam4_image_uncrop_pane_g2

0x644a,	// (0x00099230) cam4_image_uncrop_pane_g3

0x6453,	// (0x00099239) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000a26d4) cam4_image_uncrop_pane_g

0x97ca,	// (0x0009c5b0) dia3_listrow_pane_ParamLimits

0x9ca7,	// (0x0009ca8d) main_phob2_pane

0x8c60,	// (0x0009ba46) cell_tport_appsw_pane_cp02_ParamLimits

0x8c60,	// (0x0009ba46) cell_tport_appsw_pane_cp02

0x8c6f,	// (0x0009ba55) cell_tport_appsw_pane_cp03_ParamLimits

0x8c6f,	// (0x0009ba55) cell_tport_appsw_pane_cp03

0x9ca7,	// (0x0009ca8d) phob2_contact_card_pane

0x9ca7,	// (0x0009ca8d) phob2_listscroll_pane

0xb80c,	// (0x0009e5f2) phob2_list_pane

0xb814,	// (0x0009e5fa) scroll_pane_cp034

0x99db,	// (0x0009c7c1) phob2_cc_data_pane_ParamLimits

0x99db,	// (0x0009c7c1) phob2_cc_data_pane

0x99f5,	// (0x0009c7db) phob2_cc_listscroll_pane_ParamLimits

0x99f5,	// (0x0009c7db) phob2_cc_listscroll_pane

0x95bc,	// (0x0009c3a2) list_double_large_graphic_phob2_pane_ParamLimits

0x95bc,	// (0x0009c3a2) list_double_large_graphic_phob2_pane

0x9a0f,	// (0x0009c7f5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a0f,	// (0x0009c7f5) list_double_large_graphic_phob2_pane_g1

0x9a25,	// (0x0009c80b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a25,	// (0x0009c80b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000a2d0f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000a2d0f) list_double_large_graphic_phob2_pane_g

0x9a31,	// (0x0009c817) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a31,	// (0x0009c817) list_double_large_graphic_phob2_pane_t1

0x9a46,	// (0x0009c82c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a46,	// (0x0009c82c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000a2d14) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000a2d14) list_double_large_graphic_phob2_pane_t

0x9ca7,	// (0x0009ca8d) list_highlight_pane_cp024

0x9a58,	// (0x0009c83e) phob2_cc_button_pane

0x9a60,	// (0x0009c846) phob2_cc_data_pane_g1_ParamLimits

0x9a60,	// (0x0009c846) phob2_cc_data_pane_g1

0x9a6c,	// (0x0009c852) phob2_cc_data_pane_g2_ParamLimits

0x9a6c,	// (0x0009c852) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000a2d19) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000a2d19) phob2_cc_data_pane_g

0x9a78,	// (0x0009c85e) phob2_cc_data_pane_t1_ParamLimits

0x9a78,	// (0x0009c85e) phob2_cc_data_pane_t1

0x9a8a,	// (0x0009c870) phob2_cc_data_pane_t2_ParamLimits

0x9a8a,	// (0x0009c870) phob2_cc_data_pane_t2

0x9a9c,	// (0x0009c882) phob2_cc_data_pane_t3_ParamLimits

0x9a9c,	// (0x0009c882) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000a2d1e) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000a2d1e) phob2_cc_data_pane_t

0xb81c,	// (0x0009e602) phob2_cc_list_pane_ParamLimits

0xb81c,	// (0x0009e602) phob2_cc_list_pane

0xe8aa,	// (0x000a1690) scroll_pane_cp035_ParamLimits

0xe8aa,	// (0x000a1690) scroll_pane_cp035

0xa7fa,	// (0x0009d5e0) bg_button_pane_cp033

0xb828,	// (0x0009e60e) phob2_cc_button_pane_g1

0xb834,	// (0x0009e61a) phob2_cc_button_pane_t1

0xb849,	// (0x0009e62f) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000a2d25) phob2_cc_button_pane_t

0x9aae,	// (0x0009c894) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9aae,	// (0x0009c894) list_double_large_graphic_phob2_cc_pane

0x9ad5,	// (0x0009c8bb) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ad5,	// (0x0009c8bb) list_double_large_graphic_phob2_cc_pane_g1

0x9ae6,	// (0x0009c8cc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9ae6,	// (0x0009c8cc) list_double_large_graphic_phob2_cc_pane_g2

0x9af2,	// (0x0009c8d8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9af2,	// (0x0009c8d8) list_double_large_graphic_phob2_cc_pane_g3

0x9afe,	// (0x0009c8e4) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9afe,	// (0x0009c8e4) list_double_large_graphic_phob2_cc_pane_g4

0x9b0a,	// (0x0009c8f0) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b0a,	// (0x0009c8f0) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000a2d2a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000a2d2a) list_double_large_graphic_phob2_cc_pane_g

0x9b16,	// (0x0009c8fc) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b16,	// (0x0009c8fc) list_double_large_graphic_phob2_cc_pane_t1

0x9b3f,	// (0x0009c925) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b3f,	// (0x0009c925) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000a2d35) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000a2d35) list_double_large_graphic_phob2_cc_pane_t

0xb85b,	// (0x0009e641) list_highlight_pane_cp025_ParamLimits

0xb85b,	// (0x0009e641) list_highlight_pane_cp025

0xa7fa,	// (0x0009d5e0) bg_button_pane_cp033_ParamLimits

0xb828,	// (0x0009e60e) phob2_cc_button_pane_g1_ParamLimits

0xb834,	// (0x0009e61a) phob2_cc_button_pane_t1_ParamLimits

0xb849,	// (0x0009e62f) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000a2d25) phob2_cc_button_pane_t_ParamLimits

0x124e,	// (0x00094034) popup_wgtman_window

0xe53a,	// (0x000a1320) scroll_pane_cp038

0x9545,	// (0x0009c32b) wgtman_btn_pane_cp_01_ParamLimits

0x9545,	// (0x0009c32b) wgtman_btn_pane_cp_01

0xb869,	// (0x0009e64f) wgtman_content_pane

0xb872,	// (0x0009e658) wgtman_heading_pane

0x9ca7,	// (0x0009ca8d) bg_heading_pane_cp02

0xb87b,	// (0x0009e661) wgtman_heading_pane_g1

0xb883,	// (0x0009e669) wgtman_heading_pane_t1

0xb891,	// (0x0009e677) scroll_pane_cp036

0xb899,	// (0x0009e67f) wgtman_list_pane

0xb8a1,	// (0x0009e687) wgtman_list_pane_t1_ParamLimits

0xb8a1,	// (0x0009e687) wgtman_list_pane_t1

0x6397,	// (0x0009917d) cam4_grid_pane

0x7132,	// (0x00099f18) bg_button_pane_cp015_ParamLimits

0x7144,	// (0x00099f2a) bg_button_pane_cp016_ParamLimits

0x7157,	// (0x00099f3d) bg_button_pane_cp017_ParamLimits

0x71ad,	// (0x00099f93) popup_vitu2_query_window_g3_ParamLimits

0x71ad,	// (0x00099f93) popup_vitu2_query_window_g3

0x7268,	// (0x0009a04e) popup_vitu2_query_window_t6_ParamLimits

0x7268,	// (0x0009a04e) popup_vitu2_query_window_t6

0x7293,	// (0x0009a079) popup_vitu2_query_window_t7_ParamLimits

0x7293,	// (0x0009a079) popup_vitu2_query_window_t7

0xb1b4,	// (0x0009df9a) cam4_grid_pane_g1

0xb1bd,	// (0x0009dfa3) cam4_grid_pane_g2

0xb8bb,	// (0x0009e6a1) cam4_grid_pane_g3

0xb8c4,	// (0x0009e6aa) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000a2d3a) cam4_grid_pane_g

0x20cf,	// (0x00094eb5) aid_placing_vt_slider_lsc_ParamLimits

0x241b,	// (0x00095201) vidtel_button_pane_ParamLimits

0x241b,	// (0x00095201) vidtel_button_pane

0x9ca7,	// (0x0009ca8d) bg_button_pane_cp034

0xb8cf,	// (0x0009e6b5) vidtel_button_pane_g1

0xb8d7,	// (0x0009e6bd) vidtel_button_pane_t1

0xe660,	// (0x000a1446) aid_size_vtel_slider_touch

0xe8aa,	// (0x000a1690) scroll_pane_cp039

0x80c0,	// (0x0009aea6) ncim_query_button_pane_cp01_ParamLimits

0x80df,	// (0x0009aec5) ncimui_query_pane_g1_ParamLimits

0xa7fa,	// (0x0009d5e0) input_focus_pane_cp012_ParamLimits

0xaadb,	// (0x0009d8c1) ncim_query_entry_pane_t1_ParamLimits

0xe8aa,	// (0x000a1690) scroll_pane_cp039_ParamLimits

0xc01d,	// (0x0009ee03) navi_pane_bcale_mc_g1

0xc025,	// (0x0009ee0b) navi_pane_bcale_mc_t1

0xb07d,	// (0x0009de63) main_sp_fs_email_pane_g1

0xb089,	// (0x0009de6f) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000a2acb) main_sp_fs_email_pane_g

0xb2e3,	// (0x0009e0c9) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb2e3,	// (0x0009e0c9) list_single_cale_mrui_row_pane_g3

0x915e,	// (0x0009bf44) list_single_recal_day_pane_g5_event_pane

0xec70,	// (0x000a1a56) list_single_recal_day_pane_g7

0xb8ed,	// (0x0009e6d3) list_recal_day_event_pane_cp01

0xb8f6,	// (0x0009e6dc) list_recal_vselct_arw_lo_pane_cp01

0xb8fe,	// (0x0009e6e4) list_recal_vselct_arw_up_pane_cp01

0xb906,	// (0x0009e6ec) list_recal_vselct_pane_cp01

0xe682,	// (0x000a1468) list_recal_day_event_pane_cp01_g1

0xeca5,	// (0x000a1a8b) list_recal_day_event_pane_cp01_t1

0xec78,	// (0x000a1a5e) list_single_recal_day_pane_t1_ParamLimits

0xec8a,	// (0x000a1a70) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000a2c28) list_single_recal_day_pane_t_ParamLimits

0xa31f,	// (0x0009d105) bg_notes_pane_ParamLimits

0xa3c2,	// (0x0009d1a8) list_notes_pane_ParamLimits

0x15b6,	// (0x0009439c) scroll_pane_cp06_ParamLimits

0xa3e4,	// (0x0009d1ca) main_notes_pane_ParamLimits

0x9ca7,	// (0x0009ca8d) main_welc_pane

0x9b68,	// (0x0009c94e) main_welc_body_pane_ParamLimits

0x9b68,	// (0x0009c94e) main_welc_body_pane

0x9b82,	// (0x0009c968) main_welc_opti_pane_ParamLimits

0x9b82,	// (0x0009c968) main_welc_opti_pane

0x9bb5,	// (0x0009c99b) main_welc_pane_t1_ParamLimits

0x9bb5,	// (0x0009c99b) main_welc_pane_t1

0x9bcf,	// (0x0009c9b5) main_welc_body_row_pane_ParamLimits

0x9bcf,	// (0x0009c9b5) main_welc_body_row_pane

0xeac4,	// (0x000a18aa) main_welc_opti_row_pane_ParamLimits

0xeac4,	// (0x000a18aa) main_welc_opti_row_pane

0xb910,	// (0x0009e6f6) main_welc_opti_row_pane_g1

0x9bf4,	// (0x0009c9da) main_welc_opti_row_pane_t1

0xb918,	// (0x0009e6fe) main_welc_body_row_pane_t1

0xb62e,	// (0x0009e414) popup_notif_wgt_heading_pane

0xb648,	// (0x0009e42e) aid_size_list_notif_wgt_del_ParamLimits

0xb655,	// (0x0009e43b) list_notif_wgt_row_pane_g1_ParamLimits

0xb661,	// (0x0009e447) list_notif_wgt_row_pane_g2_ParamLimits

0xb670,	// (0x0009e456) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000a2c8f) list_notif_wgt_row_pane_g_ParamLimits

0xb67d,	// (0x0009e463) list_notif_wgt_row_pane_t1_ParamLimits

0xb693,	// (0x0009e479) list_notif_wgt_row_pane_t2_ParamLimits

0xb6a5,	// (0x0009e48b) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000a2c96) list_notif_wgt_row_pane_t_ParamLimits

0x95d7,	// (0x0009c3bd) listrow_wgtman_pane_g1_ParamLimits

0x95e4,	// (0x0009c3ca) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000a2cbf) listrow_wgtman_pane_g_ParamLimits

0x9602,	// (0x0009c3e8) listrow_wgtman_pane_t1_ParamLimits

0x961a,	// (0x0009c400) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000a2cc4) listrow_wgtman_pane_t_ParamLimits

0x9640,	// (0x0009c426) wait_bar_pane_cp09_ParamLimits

0x9ca7,	// (0x0009ca8d) bg_popup_heading_pane_cp02

0xb927,	// (0x0009e70d) popup_notif_wgt_heading_pane_g1

0xb92f,	// (0x0009e715) popup_notif_wgt_heading_pane_t1

0x9ca7,	// (0x0009ca8d) main_vids_pane

0x9ca7,	// (0x0009ca8d) vids_listscroll_pane

0x9c03,	// (0x0009c9e9) scroll_pane_cp040

0x9ca7,	// (0x0009ca8d) vids_list_pane

0x9c0e,	// (0x0009c9f4) vids_list_double_pane_ParamLimits

0x9c0e,	// (0x0009c9f4) vids_list_double_pane

0x9c28,	// (0x0009ca0e) vids_list_double_pane_g1

0x9c31,	// (0x0009ca17) vids_list_double_pane_t1

0x9c41,	// (0x0009ca27) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000a2d48) vids_list_double_pane_t

0x446d,	// (0x00097253) main_ncimui_pane_ParamLimits

0x7f17,	// (0x0009acfd) main_ncimui_pane_g1_ParamLimits

0x7f23,	// (0x0009ad09) main_ncimui_pane_g2_ParamLimits

0x7f23,	// (0x0009ad09) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000a29d0) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000a29d0) main_ncimui_pane_g

0x9b9b,	// (0x0009c981) main_welc_pane_g1_ParamLimits

0x9b9b,	// (0x0009c981) main_welc_pane_g1

0x9ba7,	// (0x0009c98d) main_welc_pane_g2_ParamLimits

0x9ba7,	// (0x0009c98d) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000a2d43) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000a2d43) main_welc_pane_g

0xa31f,	// (0x0009d105) listscroll_mce_pane_ParamLimits

0xc172,	// (0x0009ef58) wait_bar_pane_cp10

0xd55e,	// (0x000a0344) main_cale_day_pane_ParamLimits

0xd55e,	// (0x000a0344) main_cale_week_pane_ParamLimits

0xa31f,	// (0x0009d105) main_messa_pane_ParamLimits

0x57b8,	// (0x0009859e) main_clock2_btn_pane_ParamLimits

0x57b8,	// (0x0009859e) main_clock2_btn_pane

0xddbe,	// (0x000a0ba4) main_clock2_btn_pane_cp01_ParamLimits

0xddbe,	// (0x000a0ba4) main_clock2_btn_pane_cp01

0xb2b4,	// (0x0009e09a) list_cale_mrui_pane_ParamLimits

0xb6db,	// (0x0009e4c1) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000a2c9d) main_cf0_pane_g

0x97e7,	// (0x0009c5cd) area_left_week_number_pane_ParamLimits

0x97fa,	// (0x0009c5e0) area_top_day_name_pane_ParamLimits

0x9808,	// (0x0009c5ee) frame_month_view_pane_ParamLimits

0xb7d1,	// (0x0009e5b7) grid_month_view_pane_ParamLimits

0xb7df,	// (0x0009e5c5) frm_month_g1_ParamLimits

0x9886,	// (0x0009c66c) frm_month_g2_ParamLimits

0x9897,	// (0x0009c67d) frm_month_g3_ParamLimits

0x98a8,	// (0x0009c68e) frm_month_g4_ParamLimits

0x98b9,	// (0x0009c69f) frm_month_g5_ParamLimits

0x98cc,	// (0x0009c6b2) frm_month_g6_ParamLimits

0x98df,	// (0x0009c6c5) frm_month_g7_ParamLimits

0xb7ec,	// (0x0009e5d2) frm_month_g8_ParamLimits

0x98f2,	// (0x0009c6d8) frm_month_g9_ParamLimits

0x98ff,	// (0x0009c6e5) frm_month_g10_ParamLimits

0x990c,	// (0x0009c6f2) frm_month_g11_ParamLimits

0x9919,	// (0x0009c6ff) frm_month_g12_ParamLimits

0x9926,	// (0x0009c70c) frm_month_g13_ParamLimits

0x9933,	// (0x0009c719) frm_month_g14_ParamLimits

0x9942,	// (0x0009c728) frm_month_g15_ParamLimits

0x9951,	// (0x0009c737) frm_month_g16_ParamLimits

0xff08,	// (0x000a2cee) frm_month_g_ParamLimits

0xb7f9,	// (0x0009e5df) cell_top_day_name_pane_t1_ParamLimits

0x9960,	// (0x0009c746) cell_area_left_week_number_pane_g1_ParamLimits

0x996f,	// (0x0009c755) cell_area_left_week_number_pane_t1_ParamLimits

0xdbde,	// (0x000a09c4) cell_month_view_pane_g1_ParamLimits

0x9985,	// (0x0009c76b) cell_month_view_pane_t1_ParamLimits

0xa317,	// (0x0009d0fd) main_clock2_btn_pane_g1

0xb93d,	// (0x0009e723) main_clock2_btn_pane_t1

0xa7fa,	// (0x0009d5e0) listscroll_cmail_pane_ParamLimits

0xb07d,	// (0x0009de63) main_sp_fs_email_pane_g1_ParamLimits

0xb089,	// (0x0009de6f) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000a2acb) main_sp_fs_email_pane_g_ParamLimits

0xb3ba,	// (0x0009e1a0) list_recal_day_pane_ParamLimits

0xb3cb,	// (0x0009e1b1) mian_recal_day_pane_t1

0x892c,	// (0x0009b712) list_single_dyc_row_text_pane_t4_ParamLimits

0x892c,	// (0x0009b712) list_single_dyc_row_text_pane_t4

0x8963,	// (0x0009b749) list_single_dyc_row_text_pane_t5_ParamLimits

0x8963,	// (0x0009b749) list_single_dyc_row_text_pane_t5

0xe9ed,	// (0x000a17d3) list_single_dyc_row_text_pane_t6_ParamLimits

0xe9ed,	// (0x000a17d3) list_single_dyc_row_text_pane_t6

0x3270,	// (0x00096056) aid_mgn_list_cale_time_pane

0x446d,	// (0x00097253) main_gallery2_pane_ParamLimits

0xddd4,	// (0x000a0bba) main_clock2_pane_cp01_t1

0xdde4,	// (0x000a0bca) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000a25aa) main_clock2_pane_cp01_t

0x1a02,	// (0x000947e8) cale_week_scroll_pane_g16_ParamLimits

0x1a02,	// (0x000947e8) cale_week_scroll_pane_g16

0xa5a9,	// (0x0009d38f) vorec_slider_pane

0xb8d7,	// (0x0009e6bd) vidtel_button_pane_t1_ParamLimits

0x91b9,	// (0x0009bf9f) main_fs_bigclock_clock_pane_g1_ParamLimits

0x91b9,	// (0x0009bf9f) main_fs_bigclock_clock_pane_g2_ParamLimits

0x91c6,	// (0x0009bfac) main_fs_bigclock_clock_pane_g3_ParamLimits

0x91c6,	// (0x0009bfac) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x000a2c4b) main_fs_bigclock_clock_pane_g_ParamLimits

0x91d2,	// (0x0009bfb8) main_fs_bigclock_clock_pane_t1_ParamLimits

0x91e5,	// (0x0009bfcb) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x000a2c54) main_fs_bigclock_clock_pane_t_ParamLimits

0x5055,	// (0x00097e3b) main_mup3_lyrics_pane_ParamLimits

0x5055,	// (0x00097e3b) main_mup3_lyrics_pane

0x9c75,	// (0x0009ca5b) main_mup3_lyrics_pane_t1_ParamLimits

0x9c75,	// (0x0009ca5b) main_mup3_lyrics_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
