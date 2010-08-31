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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00040ade };

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
0x181a,	// (0x000422f8) Screen

0x1826,	// (0x00042304) application_window

0x1862,	// (0x00042340) area_bottom_pane_ParamLimits

0x1862,	// (0x00042340) area_bottom_pane

0x189b,	// (0x00042379) area_top_pane_ParamLimits

0x189b,	// (0x00042379) area_top_pane

0xc8b5,	// (0x0004d393) call_video_uplink_pane_ParamLimits

0xc8b5,	// (0x0004d393) call_video_uplink_pane

0x1910,	// (0x000423ee) main_pane_ParamLimits

0x1910,	// (0x000423ee) main_pane

0xf04c,	// (0x0004fb2a) context_pane

0x4843,	// (0x00045321) navi_pane

0x486b,	// (0x00045349) popup_cale_events_window_ParamLimits

0x486b,	// (0x00045349) popup_cale_events_window

0xf05f,	// (0x0004fb3d) popup_mup_playback_window

0x4883,	// (0x00045361) signal_pane

0xd11a,	// (0x0004dbf8) main_browser_pane

0xdbf9,	// (0x0004e6d7) main_burst_pane

0x4595,	// (0x00045073) main_calc_pane

0xdbf9,	// (0x0004e6d7) main_cale_day_pane

0xd11a,	// (0x0004dbf8) main_cale_month_pane

0xdbf9,	// (0x0004e6d7) main_cale_week_pane

0xdbf9,	// (0x0004e6d7) main_call_pane

0xcde8,	// (0x0004d8c6) main_call_poc_pane

0xdbf9,	// (0x0004e6d7) main_camera_pane

0xdbf9,	// (0x0004e6d7) main_chi_dic_pane

0xda7e,	// (0x0004e55c) main_clock_pane

0xcde8,	// (0x0004d8c6) main_fmradio_pane

0xdbf9,	// (0x0004e6d7) main_graph_messa_pane

0xcde8,	// (0x0004d8c6) main_help_pane

0xd11a,	// (0x0004dbf8) main_im_pane

0xd043,	// (0x0004db21) main_image_pane_ParamLimits

0xd043,	// (0x0004db21) main_image_pane

0xcde8,	// (0x0004d8c6) main_location2_pane

0xdbf9,	// (0x0004e6d7) main_location_pane

0xcde8,	// (0x0004d8c6) main_messa_pane

0xcde8,	// (0x0004d8c6) main_mp2_pane

0xdbf9,	// (0x0004e6d7) main_mp_pane

0xcde8,	// (0x0004d8c6) main_msg_pane

0xcde8,	// (0x0004d8c6) main_mup_eq_pane

0xcde8,	// (0x0004d8c6) main_mup_pane

0xdbf9,	// (0x0004e6d7) main_notes_pane

0xcde8,	// (0x0004d8c6) main_pec_pane

0xcde8,	// (0x0004d8c6) main_phob_pane

0xcde8,	// (0x0004d8c6) main_pinb_pane

0xcde8,	// (0x0004d8c6) main_postcard_pane

0xcde8,	// (0x0004d8c6) main_qdial_pane

0xdbf9,	// (0x0004e6d7) main_skin_pane

0xcde8,	// (0x0004d8c6) main_smil2_pane

0xdbf9,	// (0x0004e6d7) main_smil_pane

0xdbf9,	// (0x0004e6d7) main_video_pane

0xdbf9,	// (0x0004e6d7) main_video_tele_pane

0xd043,	// (0x0004db21) main_viewer_pane_ParamLimits

0xd043,	// (0x0004db21) main_viewer_pane

0xdbf9,	// (0x0004e6d7) main_vorec_pane

0x45e9,	// (0x000450c7) popup_blid_sat_info_window_ParamLimits

0x45e9,	// (0x000450c7) popup_blid_sat_info_window

0x4641,	// (0x0004511f) popup_dyc_status_message_window_ParamLimits

0x4641,	// (0x0004511f) popup_dyc_status_message_window

0x465b,	// (0x00045139) popup_grid_large_graphic_window_ParamLimits

0x465b,	// (0x00045139) popup_grid_large_graphic_window

0x4717,	// (0x000451f5) popup_loc_request_window_ParamLimits

0x4717,	// (0x000451f5) popup_loc_request_window

0x481b,	// (0x000452f9) popup_wml_address_window_ParamLimits

0x481b,	// (0x000452f9) popup_wml_address_window

0x43cf,	// (0x00044ead) call_muted_g1

0x4084,	// (0x00044b62) popup_call_audio_conf_window_ParamLimits

0x4084,	// (0x00044b62) popup_call_audio_conf_window

0x43e3,	// (0x00044ec1) popup_call_audio_first_window_ParamLimits

0x43e3,	// (0x00044ec1) popup_call_audio_first_window

0x4459,	// (0x00044f37) popup_call_audio_in_window_ParamLimits

0x4459,	// (0x00044f37) popup_call_audio_in_window

0x4495,	// (0x00044f73) popup_call_audio_out_window_ParamLimits

0x4495,	// (0x00044f73) popup_call_audio_out_window

0x44cf,	// (0x00044fad) popup_call_audio_second_window_ParamLimits

0x44cf,	// (0x00044fad) popup_call_audio_second_window

0x4525,	// (0x00045003) popup_call_audio_wait_window_ParamLimits

0x4525,	// (0x00045003) popup_call_audio_wait_window

0x455a,	// (0x00045038) popup_number_entry_window_ParamLimits

0x455a,	// (0x00045038) popup_number_entry_window

0xc8d3,	// (0x0004d3b1) bg_popup_call_pane_cp05_ParamLimits

0xc8d3,	// (0x0004d3b1) bg_popup_call_pane_cp05

0xc9f5,	// (0x0004d4d3) popup_number_entry_window_t1

0xca08,	// (0x0004d4e6) popup_number_entry_window_t2

0xca1a,	// (0x0004d4f8) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0004fbca) popup_number_entry_window_t

0xca2c,	// (0x0004d50a) text_title_cp2

0xca3f,	// (0x0004d51d) bg_popup_call_pane_cp_ParamLimits

0xca3f,	// (0x0004d51d) bg_popup_call_pane_cp

0xca4d,	// (0x0004d52b) call_thumbnail_pane

0xca55,	// (0x0004d533) popup_call_audio_in_window_g1_ParamLimits

0xca55,	// (0x0004d533) popup_call_audio_in_window_g1

0xca61,	// (0x0004d53f) popup_call_audio_in_window_g2_ParamLimits

0xca61,	// (0x0004d53f) popup_call_audio_in_window_g2

0xca6d,	// (0x0004d54b) popup_call_audio_in_window_g3_ParamLimits

0xca6d,	// (0x0004d54b) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0004fbd3) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0004fbd3) popup_call_audio_in_window_g

0xca79,	// (0x0004d557) popup_call_audio_in_window_t1_ParamLimits

0xca79,	// (0x0004d557) popup_call_audio_in_window_t1

0xca95,	// (0x0004d573) popup_call_audio_in_window_t2_ParamLimits

0xca95,	// (0x0004d573) popup_call_audio_in_window_t2

0xcab1,	// (0x0004d58f) popup_call_audio_in_window_t3_ParamLimits

0xcab1,	// (0x0004d58f) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0004fbda) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0004fbda) popup_call_audio_in_window_t

0xca3f,	// (0x0004d51d) bg_popup_call_pane_cp01_ParamLimits

0xca3f,	// (0x0004d51d) bg_popup_call_pane_cp01

0xca4d,	// (0x0004d52b) call_thumbnail_pane_cp02

0xcac4,	// (0x0004d5a2) call_type_pane_cp022

0xcacc,	// (0x0004d5aa) popup_call_audio_out_window_g1_ParamLimits

0xcacc,	// (0x0004d5aa) popup_call_audio_out_window_g1

0xcade,	// (0x0004d5bc) popup_call_audio_out_window_g2_ParamLimits

0xcade,	// (0x0004d5bc) popup_call_audio_out_window_g2

0xcaea,	// (0x0004d5c8) popup_call_audio_out_window_g3_ParamLimits

0xcaea,	// (0x0004d5c8) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0004fbe1) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0004fbe1) popup_call_audio_out_window_g

0xcafc,	// (0x0004d5da) popup_call_audio_out_window_t1_ParamLimits

0xcafc,	// (0x0004d5da) popup_call_audio_out_window_t1

0xcb14,	// (0x0004d5f2) popup_call_audio_out_window_t2_ParamLimits

0xcb14,	// (0x0004d5f2) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0004fbe8) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0004fbe8) popup_call_audio_out_window_t

0xcb29,	// (0x0004d607) bg_popup_call_pane_ParamLimits

0xcb29,	// (0x0004d607) bg_popup_call_pane

0x1ac6,	// (0x000425a4) call_thumbnail_pane_cp_ParamLimits

0x1ac6,	// (0x000425a4) call_thumbnail_pane_cp

0xcbad,	// (0x0004d68b) call_type_pane_cp01_ParamLimits

0xcbad,	// (0x0004d68b) call_type_pane_cp01

0xcbf1,	// (0x0004d6cf) popup_call_audio_first_window_g1_ParamLimits

0xcbf1,	// (0x0004d6cf) popup_call_audio_first_window_g1

0xcc3d,	// (0x0004d71b) popup_call_audio_first_window_g2_ParamLimits

0xcc3d,	// (0x0004d71b) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0004fbed) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0004fbed) popup_call_audio_first_window_g

0xcc81,	// (0x0004d75f) popup_call_audio_first_window_t1_ParamLimits

0xcc81,	// (0x0004d75f) popup_call_audio_first_window_t1

0xcd2d,	// (0x0004d80b) popup_call_audio_first_window_t4_ParamLimits

0xcd2d,	// (0x0004d80b) popup_call_audio_first_window_t4

0xcdb9,	// (0x0004d897) popup_call_audio_first_window_t5_ParamLimits

0xcdb9,	// (0x0004d897) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0004fbf2) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0004fbf2) popup_call_audio_first_window_t

0xcde8,	// (0x0004d8c6) bg_popup_call_pane_cp02

0xcdf2,	// (0x0004d8d0) call_type_pane_cp023

0xcdfa,	// (0x0004d8d8) popup_call_audio_wait_window_g1

0xce02,	// (0x0004d8e0) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0004fbf9) popup_call_audio_wait_window_g

0xce0a,	// (0x0004d8e8) popup_call_audio_wait_window_t3

0xce18,	// (0x0004d8f6) bg_popup_call_pane_cp03_ParamLimits

0xce18,	// (0x0004d8f6) bg_popup_call_pane_cp03

0xce78,	// (0x0004d956) call_thumbnail_pane_cp011_ParamLimits

0xce78,	// (0x0004d956) call_thumbnail_pane_cp011

0xce84,	// (0x0004d962) call_type_pane_cp034_ParamLimits

0xce84,	// (0x0004d962) call_type_pane_cp034

0xcec0,	// (0x0004d99e) popup_call_audio_second_window_g1_ParamLimits

0xcec0,	// (0x0004d99e) popup_call_audio_second_window_g1

0xcefc,	// (0x0004d9da) popup_call_audio_second_window_g2_ParamLimits

0xcefc,	// (0x0004d9da) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0004fbfe) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0004fbfe) popup_call_audio_second_window_g

0xcf38,	// (0x0004da16) popup_call_audio_second_window_t1_ParamLimits

0xcf38,	// (0x0004da16) popup_call_audio_second_window_t1

0xcfb9,	// (0x0004da97) popup_call_audio_second_window_t2_ParamLimits

0xcfb9,	// (0x0004da97) popup_call_audio_second_window_t2

0xcfef,	// (0x0004dacd) popup_call_audio_second_window_t3_ParamLimits

0xcfef,	// (0x0004dacd) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0004fc03) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0004fc03) popup_call_audio_second_window_t

0xcde8,	// (0x0004d8c6) bg_popup_call_pane_cp04

0xd025,	// (0x0004db03) list_conf_pane

0xd02d,	// (0x0004db0b) popup_call_audio_conf_window_t1

0xd03b,	// (0x0004db19) call_thumbnail_pane_g1

0xd043,	// (0x0004db21) bg_pinb_pane_ParamLimits

0xd043,	// (0x0004db21) bg_pinb_pane

0xd051,	// (0x0004db2f) find_pinb_pane

0xd05a,	// (0x0004db38) listscroll_pinb_pane_ParamLimits

0xd05a,	// (0x0004db38) listscroll_pinb_pane

0xd069,	// (0x0004db47) pinb_bg_pane_g1

0x1aea,	// (0x000425c8) pinb_bg_pane_g2

0x1af6,	// (0x000425d4) pinb_bg_pane_g3

0x1b02,	// (0x000425e0) pinb_bg_pane_g4

0x1b0e,	// (0x000425ec) pinb_bg_pane_g5

0x1b1a,	// (0x000425f8) pinb_bg_pane_g6

0x1b25,	// (0x00042603) pinb_bg_pane_g7

0x1b30,	// (0x0004260e) pinb_bg_pane_g8

0x1b3b,	// (0x00042619) pinb_bg_pane_g9

0x1b45,	// (0x00042623) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0004fc0a) pinb_bg_pane_g

0x1b62,	// (0x00042640) grid_pinb_pane

0x1b6b,	// (0x00042649) list_pinb_pane

0x1b74,	// (0x00042652) scroll_pane_cp01_ParamLimits

0x1b74,	// (0x00042652) scroll_pane_cp01

0xd073,	// (0x0004db51) find_pinb_pane_g1_ParamLimits

0xd073,	// (0x0004db51) find_pinb_pane_g1

0xd08b,	// (0x0004db69) find_pinb_pane_t1

0xd09d,	// (0x0004db7b) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0004fc24) find_pinb_pane_t

0xd0b2,	// (0x0004db90) input_focus_pane_cp01_ParamLimits

0xd0b2,	// (0x0004db90) input_focus_pane_cp01

0x1b86,	// (0x00042664) cell_pinb_pane_ParamLimits

0x1b86,	// (0x00042664) cell_pinb_pane

0x1baf,	// (0x0004268d) cell_pinb_pane_g1_ParamLimits

0x1baf,	// (0x0004268d) cell_pinb_pane_g1

0x1bbf,	// (0x0004269d) cell_pinb_pane_g2_ParamLimits

0x1bbf,	// (0x0004269d) cell_pinb_pane_g2

0xd0be,	// (0x0004db9c) cell_pinb_pane_g3_ParamLimits

0xd0be,	// (0x0004db9c) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0004fc29) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0004fc29) cell_pinb_pane_g

0xcde8,	// (0x0004d8c6) grid_highlight_pane_cp01

0x1bcb,	// (0x000426a9) list_pinb_item_pane_ParamLimits

0x1bcb,	// (0x000426a9) list_pinb_item_pane

0xcde8,	// (0x0004d8c6) list_highlight_pane_cp02

0x1bdd,	// (0x000426bb) list_pinb_item_pane_g1_ParamLimits

0x1bdd,	// (0x000426bb) list_pinb_item_pane_g1

0xd0ca,	// (0x0004dba8) list_pinb_item_pane_g2_ParamLimits

0xd0ca,	// (0x0004dba8) list_pinb_item_pane_g2

0x1bea,	// (0x000426c8) list_pinb_item_pane_g3_ParamLimits

0x1bea,	// (0x000426c8) list_pinb_item_pane_g3

0x1bfb,	// (0x000426d9) list_pinb_item_pane_g4_ParamLimits

0x1bfb,	// (0x000426d9) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0004fc30) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0004fc30) list_pinb_item_pane_g

0x1c07,	// (0x000426e5) list_pinb_item_pane_t1_ParamLimits

0x1c07,	// (0x000426e5) list_pinb_item_pane_t1

0x1c3c,	// (0x0004271a) calc_display_pane

0x1c64,	// (0x00042742) calc_paper_pane

0x1c87,	// (0x00042765) grid_calc_pane

0xcde8,	// (0x0004d8c6) bg_list_pane_cp01

0x1cb1,	// (0x0004278f) clock_g1

0x1cb9,	// (0x00042797) clock_g2

0x0001,

0xf15b,	// (0x0004fc39) clock_g

0x1cc1,	// (0x0004279f) clock_t1_ParamLimits

0x1cc1,	// (0x0004279f) clock_t1

0x1cd6,	// (0x000427b4) clock_t2_ParamLimits

0x1cd6,	// (0x000427b4) clock_t2

0x1ce8,	// (0x000427c6) clock_t3_ParamLimits

0x1ce8,	// (0x000427c6) clock_t3

0x1cfa,	// (0x000427d8) clock_t4_ParamLimits

0x1cfa,	// (0x000427d8) clock_t4

0x1d0c,	// (0x000427ea) clock_t5_ParamLimits

0x1d0c,	// (0x000427ea) clock_t5

0x1d21,	// (0x000427ff) clock_t6_ParamLimits

0x1d21,	// (0x000427ff) clock_t6

0x1d33,	// (0x00042811) clock_t7_ParamLimits

0x1d33,	// (0x00042811) clock_t7

0x1d45,	// (0x00042823) clock_t8_ParamLimits

0x1d45,	// (0x00042823) clock_t8

0x1d59,	// (0x00042837) clock_t9_ParamLimits

0x1d59,	// (0x00042837) clock_t9

0x0008,

0xf160,	// (0x0004fc3e) clock_t_ParamLimits

0xf160,	// (0x0004fc3e) clock_t

0xd0d6,	// (0x0004dbb4) popup_clock_analogue_window_cp02

0xd0d6,	// (0x0004dbb4) popup_clock_digital_window_cp01

0xd0de,	// (0x0004dbbc) listscroll_help_pane

0xcde8,	// (0x0004d8c6) phob_pre_status_pane

0xd0e8,	// (0x0004dbc6) grid_qdial_pane

0xcde8,	// (0x0004d8c6) listscroll_mce_pane

0xd0f2,	// (0x0004dbd0) bg_notes_pane

0xd0fc,	// (0x0004dbda) list_notes_pane

0x1d6d,	// (0x0004284b) scroll_pane_cp06

0xd106,	// (0x0004dbe4) bg_calc_paper_pane

0xa706,	// (0x0004b1e4) list_calc_pane

0xd11a,	// (0x0004dbf8) bg_calc_display_pane

0x1d78,	// (0x00042856) calc_display_pane_t1

0x1d8a,	// (0x00042868) calc_display_pane_t2

0xa720,	// (0x0004b1fe) calc_display_pane_t3

0x0002,

0xf173,	// (0x0004fc51) calc_display_pane_t

0x1d9c,	// (0x0004287a) cell_calc_pane_ParamLimits

0x1d9c,	// (0x0004287a) cell_calc_pane

0xd126,	// (0x0004dc04) bg_calc_paper_pane_g1

0xd132,	// (0x0004dc10) bg_calc_paper_pane_g2

0xd13e,	// (0x0004dc1c) bg_calc_paper_pane_g3

0xd14a,	// (0x0004dc28) bg_calc_paper_pane_g4

0xd156,	// (0x0004dc34) bg_calc_paper_pane_g5

0x1dd1,	// (0x000428af) bg_calc_paper_pane_g6

0x1de0,	// (0x000428be) bg_calc_paper_pane_g7

0x1def,	// (0x000428cd) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0004fc58) bg_calc_paper_pane_g

0x1e02,	// (0x000428e0) calc_bg_paper_pane_g9

0x1e15,	// (0x000428f3) list_calc_item_pane_ParamLimits

0x1e15,	// (0x000428f3) list_calc_item_pane

0xd162,	// (0x0004dc40) list_calc_item_pane_g1

0xa732,	// (0x0004b210) list_calc_item_pane_t1_ParamLimits

0xa732,	// (0x0004b210) list_calc_item_pane_t1

0x1e28,	// (0x00042906) list_calc_item_pane_t2_ParamLimits

0x1e28,	// (0x00042906) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0004fc69) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0004fc69) list_calc_item_pane_t

0xd16f,	// (0x0004dc4d) cell_calc_pane_g1

0xd179,	// (0x0004dc57) grid_highlight_pane_cp02

0x1e5a,	// (0x00042938) bg_calc_display_pane_g1

0x1e63,	// (0x00042941) bg_calc_display_pane_g2

0x1e6d,	// (0x0004294b) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0004fc73) bg_calc_display_pane_g

0x1e76,	// (0x00042954) cell_qdial_pane_ParamLimits

0x1e76,	// (0x00042954) cell_qdial_pane

0x1e8a,	// (0x00042968) cell_qdial_pane_g1_ParamLimits

0x1e8a,	// (0x00042968) cell_qdial_pane_g1

0x1ea0,	// (0x0004297e) cell_qdial_pane_g2_ParamLimits

0x1ea0,	// (0x0004297e) cell_qdial_pane_g2

0xd19b,	// (0x0004dc79) cell_qdial_pane_g3_ParamLimits

0xd19b,	// (0x0004dc79) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0004fc7a) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0004fc7a) cell_qdial_pane_g

0x1ec7,	// (0x000429a5) cell_qdial_pane_t1_ParamLimits

0x1ec7,	// (0x000429a5) cell_qdial_pane_t1

0x1edf,	// (0x000429bd) cell_qdial_pane_t2_ParamLimits

0x1edf,	// (0x000429bd) cell_qdial_pane_t2

0x1ef2,	// (0x000429d0) cell_qdial_pane_t3_ParamLimits

0x1ef2,	// (0x000429d0) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0004fc83) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0004fc83) cell_qdial_pane_t

0xcde8,	// (0x0004d8c6) grid_highlight_pane_cp04

0xd1a7,	// (0x0004dc85) thumbnail_qdial_pane_ParamLimits

0xd1a7,	// (0x0004dc85) thumbnail_qdial_pane

0xd203,	// (0x0004dce1) list_help_pane

0xd20c,	// (0x0004dcea) scroll_pane_cp02

0x1f05,	// (0x000429e3) help_list_pane_t1_ParamLimits

0x1f05,	// (0x000429e3) help_list_pane_t1

0xa744,	// (0x0004b222) bg_notes_pane_g2

0xa74c,	// (0x0004b22a) bg_notes_pane_g3

0xa754,	// (0x0004b232) notes_bg_pane_g1

0xa75c,	// (0x0004b23a) notes_bg_pane_g4

0xa764,	// (0x0004b242) notes_bg_pane_g5

0xa76c,	// (0x0004b24a) notes_bg_pane_g6

0xa774,	// (0x0004b252) notes_bg_pane_g7

0xa77c,	// (0x0004b25a) notes_bg_pane_g8

0xa784,	// (0x0004b262) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0004fca1) notes_bg_pane_g

0x1f22,	// (0x00042a00) list_notes_text_pane_ParamLimits

0x1f22,	// (0x00042a00) list_notes_text_pane

0xd215,	// (0x0004dcf3) list_notes_text_pane_g1

0x0d53,	// (0x00041831) list_notes_text_pane_t1

0xd11a,	// (0x0004dbf8) listscroll_cale_week_pane

0x1f54,	// (0x00042a32) bg_cale_heading_pane

0xd22f,	// (0x0004dd0d) bg_cale_pane_cp01

0x1f68,	// (0x00042a46) cale_week_corner_pane

0x1f7e,	// (0x00042a5c) cale_week_day_heading_pane

0x1f92,	// (0x00042a70) cale_week_scroll_pane_g1

0x1fa3,	// (0x00042a81) cale_week_scroll_pane_g2

0x1fb4,	// (0x00042a92) cale_week_scroll_pane_g3

0x1fc5,	// (0x00042aa3) cale_week_scroll_pane_g4

0x1fd6,	// (0x00042ab4) cale_week_scroll_pane_g5

0x1fe9,	// (0x00042ac7) cale_week_scroll_pane_g6

0x1ffc,	// (0x00042ada) cale_week_scroll_pane_g7

0x200f,	// (0x00042aed) cale_week_scroll_pane_g8

0x2022,	// (0x00042b00) cale_week_scroll_pane_g9

0x2033,	// (0x00042b11) cale_week_scroll_pane_g10

0x2044,	// (0x00042b22) cale_week_scroll_pane_g11

0x2055,	// (0x00042b33) cale_week_scroll_pane_g12

0x2066,	// (0x00042b44) cale_week_scroll_pane_g13

0x2077,	// (0x00042b55) cale_week_scroll_pane_g14

0x2088,	// (0x00042b66) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0004fcb0) cale_week_scroll_pane_g

0x2099,	// (0x00042b77) cale_week_time_pane

0x20ac,	// (0x00042b8a) grid_cale_week_pane

0x20c1,	// (0x00042b9f) scroll_pane_cp08

0x20db,	// (0x00042bb9) cell_cale_week_pane_ParamLimits

0x20db,	// (0x00042bb9) cell_cale_week_pane

0x211b,	// (0x00042bf9) cale_week_day_heading_pane_t1

0x2148,	// (0x00042c26) cale_week_day_heading_pane_t2

0x2175,	// (0x00042c53) cale_week_day_heading_pane_t3

0x21a2,	// (0x00042c80) cale_week_day_heading_pane_t4

0x21cf,	// (0x00042cad) cale_week_day_heading_pane_t5

0x21fc,	// (0x00042cda) cale_week_day_heading_pane_t6

0x222b,	// (0x00042d09) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0004fccf) cale_week_day_heading_pane_t

0xd25a,	// (0x0004dd38) bg_cale_side_pane

0x2258,	// (0x00042d36) cale_week_time_pane_t1

0x2270,	// (0x00042d4e) cale_week_time_pane_t2

0x2288,	// (0x00042d66) cale_week_time_pane_t3

0x22a0,	// (0x00042d7e) cale_week_time_pane_t4

0x22b8,	// (0x00042d96) cale_week_time_pane_t5

0x22d0,	// (0x00042dae) cale_week_time_pane_t6

0x22e8,	// (0x00042dc6) cale_week_time_pane_t7

0x2300,	// (0x00042dde) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0004fcde) cale_week_time_pane_t

0x2318,	// (0x00042df6) cell_cale_week_pane_g2

0x2331,	// (0x00042e0f) cell_cale_week_pane_g3_ParamLimits

0x2331,	// (0x00042e0f) cell_cale_week_pane_g3

0xd268,	// (0x0004dd46) grid_highlight_pane_cp07

0xd270,	// (0x0004dd4e) listscroll_gms_pane

0xd27a,	// (0x0004dd58) grid_gms_pane

0xd283,	// (0x0004dd61) listscroll_gms_pane_g1

0xd28b,	// (0x0004dd69) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0004fcef) listscroll_gms_pane_g

0x2349,	// (0x00042e27) scroll_pane_cp010

0x2354,	// (0x00042e32) cell_gms_pane_ParamLimits

0x2354,	// (0x00042e32) cell_gms_pane

0x2367,	// (0x00042e45) cell_gms_pane_g1

0xd293,	// (0x0004dd71) cell_gms_pane_g2

0xd29b,	// (0x0004dd79) cell_gms_pane_g3

0xd2a4,	// (0x0004dd82) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0004fcf4) cell_gms_pane_g

0xd2ad,	// (0x0004dd8b) grid_highlight_pane_cp09

0x4379,	// (0x00044e57) phob_pre_status_pane_g1

0x4381,	// (0x00044e5f) phob_pre_status_pane_g2

0x4389,	// (0x00044e67) phob_pre_status_pane_g3

0x4391,	// (0x00044e6f) phob_pre_status_pane_g4

0x0004,

0xf49a,	// (0x0004ff78) phob_pre_status_pane_g

0x43a1,	// (0x00044e7f) phob_pre_status_pane_t1

0x43af,	// (0x00044e8d) phob_pre_status_pane_t2

0x43bf,	// (0x00044e9d) phob_pre_status_pane_t3

0x0002,

0xf4a5,	// (0x0004ff83) phob_pre_status_pane_t

0xcde8,	// (0x0004d8c6) bg_list_pane_cp05

0x2377,	// (0x00042e55) grid_vorec_pane

0xa78c,	// (0x0004b26a) vorec_t1

0xa79a,	// (0x0004b278) vorec_t2

0xa7a8,	// (0x0004b286) vorec_t3

0xa7b6,	// (0x0004b294) vorec_t4

0xa7c4,	// (0x0004b2a2) vorec_t5

0xa7d2,	// (0x0004b2b0) vorec_t6

0x0006,

0xf21f,	// (0x0004fcfd) vorec_t

0xa7ee,	// (0x0004b2cc) wait_bar_pane_cp01

0x237f,	// (0x00042e5d) cell_vorec_pane_ParamLimits

0x237f,	// (0x00042e5d) cell_vorec_pane

0xd2b5,	// (0x0004dd93) cell_vorec_pane_g1

0xcde8,	// (0x0004d8c6) grid_highlight_pane_cp05

0x23aa,	// (0x00042e88) cams_zoom_pane

0x23b9,	// (0x00042e97) image_vga_pane

0x23d3,	// (0x00042eb1) main_camera_pane_g1

0x23e5,	// (0x00042ec3) main_camera_pane_g2

0x23f5,	// (0x00042ed3) main_camera_pane_g3

0x2405,	// (0x00042ee3) main_camera_pane_g4

0x2415,	// (0x00042ef3) main_camera_pane_g5

0x2425,	// (0x00042f03) main_camera_pane_g6

0x2437,	// (0x00042f15) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0004fd0c) main_camera_pane_g

0x2447,	// (0x00042f25) main_camera_pane_t1

0x245d,	// (0x00042f3b) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0004fd1d) main_camera_pane_t

0x2497,	// (0x00042f75) cams_zoom_pane_cp_ParamLimits

0x2497,	// (0x00042f75) cams_zoom_pane_cp

0x24bf,	// (0x00042f9d) image_cif_pane_ParamLimits

0x24bf,	// (0x00042f9d) image_cif_pane

0x24fa,	// (0x00042fd8) image_subqcif_pane

0x2502,	// (0x00042fe0) main_video_pane_g1_ParamLimits

0x2502,	// (0x00042fe0) main_video_pane_g1

0x2526,	// (0x00043004) main_video_pane_g2_ParamLimits

0x2526,	// (0x00043004) main_video_pane_g2

0x255a,	// (0x00043038) main_video_pane_g3_ParamLimits

0x255a,	// (0x00043038) main_video_pane_g3

0x2588,	// (0x00043066) main_video_pane_g4_ParamLimits

0x2588,	// (0x00043066) main_video_pane_g4

0x25b6,	// (0x00043094) main_video_pane_g5_ParamLimits

0x25b6,	// (0x00043094) main_video_pane_g5

0xd2cb,	// (0x0004dda9) main_video_pane_g6_ParamLimits

0xd2cb,	// (0x0004dda9) main_video_pane_g6

0x0006,

0xf244,	// (0x0004fd22) main_video_pane_g_ParamLimits

0xf244,	// (0x0004fd22) main_video_pane_g

0x25e3,	// (0x000430c1) main_video_pane_t1_ParamLimits

0x25e3,	// (0x000430c1) main_video_pane_t1

0xd2e5,	// (0x0004ddc3) cams_zoom_pane_g1

0xd2ee,	// (0x0004ddcc) cams_zoom_pane_g2

0xd2f7,	// (0x0004ddd5) cams_zoom_pane_g3

0xd300,	// (0x0004ddde) cams_zoom_pane_g4

0x0003,

0x003f,	// (0x00040b1d) cams_zoom_pane_g

0x2640,	// (0x0004311e) grid_cams_pane

0x265a,	// (0x00043138) linegrid_cams_pane

0x266e,	// (0x0004314c) cell_cams_pane_ParamLimits

0x266e,	// (0x0004314c) cell_cams_pane

0xd309,	// (0x0004dde7) cams_burst_image_pane

0xd311,	// (0x0004ddef) cell_cams_pane_g1

0xcde8,	// (0x0004d8c6) grid_highlight_pane_cp03

0xd16f,	// (0x0004dc4d) mp_bg_pane_g1

0xcde8,	// (0x0004d8c6) bg_list_pane_cp03

0xef24,	// (0x0004fa02) bg_mp_pane

0xef2c,	// (0x0004fa0a) grid_mp_pane

0xef34,	// (0x0004fa12) media_player_g1

0xef3c,	// (0x0004fa1a) media_player_t1

0xef4a,	// (0x0004fa28) media_player_t2

0xef58,	// (0x0004fa36) media_player_t3

0xef66,	// (0x0004fa44) media_player_t4

0xef74,	// (0x0004fa52) media_player_t5

0xef82,	// (0x0004fa60) media_player_t6

0xef90,	// (0x0004fa6e) media_player_t7

0x0006,

0x03db,	// (0x00040eb9) media_player_t

0xef9e,	// (0x0004fa7c) wait_bar_pane_cp02

0xf486,	// (0x0004ff64) main_usb_pane_t

0x4370,	// (0x00044e4e) cell_mp_pane

0xd16f,	// (0x0004dc4d) cell_mp_pane_g1

0xcde8,	// (0x0004d8c6) grid_highlight_pane_cp06

0xd319,	// (0x0004ddf7) grid_skin_colour_pane

0xd321,	// (0x0004ddff) list_highlight_pane_cp03

0x268e,	// (0x0004316c) skin_g1

0xd329,	// (0x0004de07) skin_t1

0xd338,	// (0x0004de16) skin_t2

0x0001,

0x0074,	// (0x00040b52) skin_t

0x2696,	// (0x00043174) cell_skin_colour_pane_ParamLimits

0x2696,	// (0x00043174) cell_skin_colour_pane

0xd346,	// (0x0004de24) cell_skin_colour_pane_g1

0x270d,	// (0x000431eb) call_video_g1_ParamLimits

0x270d,	// (0x000431eb) call_video_g1

0x2729,	// (0x00043207) call_video_g2_ParamLimits

0x2729,	// (0x00043207) call_video_g2

0x0001,

0xf27f,	// (0x0004fd5d) call_video_g_ParamLimits

0xf27f,	// (0x0004fd5d) call_video_g

0x277b,	// (0x00043259) call_video_uplink_pane_cp1_ParamLimits

0x277b,	// (0x00043259) call_video_uplink_pane_cp1

0xd358,	// (0x0004de36) call_video_uplink_pane_cp2

0x281a,	// (0x000432f8) video_down_crop_pane_ParamLimits

0x281a,	// (0x000432f8) video_down_crop_pane

0x2911,	// (0x000433ef) video_down_pane_ParamLimits

0x2911,	// (0x000433ef) video_down_pane

0xd360,	// (0x0004de3e) video_down_subqcif_pane_ParamLimits

0xd360,	// (0x0004de3e) video_down_subqcif_pane

0xd378,	// (0x0004de56) video_down_subqcif_pane_cp_ParamLimits

0xd378,	// (0x0004de56) video_down_subqcif_pane_cp

0xd39c,	// (0x0004de7a) im_reading_pane_ParamLimits

0xd39c,	// (0x0004de7a) im_reading_pane

0x2a1f,	// (0x000434fd) im_writing_pane_ParamLimits

0x2a1f,	// (0x000434fd) im_writing_pane

0x2a35,	// (0x00043513) im_reading_pane_t1

0xd3b6,	// (0x0004de94) list_im_pane

0xd3c7,	// (0x0004dea5) scroll_pane_cp07

0x2a6e,	// (0x0004354c) im_writing_pane_t1_ParamLimits

0x2a6e,	// (0x0004354c) im_writing_pane_t1

0xd3e0,	// (0x0004debe) im_writing_pane_t2_ParamLimits

0xd3e0,	// (0x0004debe) im_writing_pane_t2

0x0001,

0xf289,	// (0x0004fd67) im_writing_pane_t_ParamLimits

0xf289,	// (0x0004fd67) im_writing_pane_t

0xcde8,	// (0x0004d8c6) input_focus_pane_cp04

0xcde8,	// (0x0004d8c6) input_focus_pane_cp05

0x2a83,	// (0x00043561) list_im_single_pane_ParamLimits

0x2a83,	// (0x00043561) list_im_single_pane

0x2a97,	// (0x00043575) list_single_im_pane_t1

0x4330,	// (0x00044e0e) blid_accuracy_pane

0x4338,	// (0x00044e16) blid_compass_pane

0x4342,	// (0x00044e20) main_location_t1

0x4352,	// (0x00044e30) main_location_t2

0x4362,	// (0x00044e40) main_location_t3

0x0002,

0xf493,	// (0x0004ff71) main_location_t

0xcde8,	// (0x0004d8c6) aid_levels_location

0xd16f,	// (0x0004dc4d) blid_accuracy_pane_g1

0xd16f,	// (0x0004dc4d) blid_accuracy_pane_g2

0x0001,

0x00e5,	// (0x00040bc3) blid_accuracy_pane_g

0xd428,	// (0x0004df06) wml_content_pane

0xd466,	// (0x0004df44) wml_button_pane_ParamLimits

0xd466,	// (0x0004df44) wml_button_pane

0x2aa6,	// (0x00043584) wml_list_single_large_pane_ParamLimits

0x2aa6,	// (0x00043584) wml_list_single_large_pane

0x2abb,	// (0x00043599) wml_list_single_medium_pane_ParamLimits

0x2abb,	// (0x00043599) wml_list_single_medium_pane

0x2ad1,	// (0x000435af) wml_list_single_small_pane_ParamLimits

0x2ad1,	// (0x000435af) wml_list_single_small_pane

0xd47a,	// (0x0004df58) wml_selection_box_pane_ParamLimits

0xd47a,	// (0x0004df58) wml_selection_box_pane

0xd48d,	// (0x0004df6b) wml_list_single_pane_t1

0xd49c,	// (0x0004df7a) wml_list_single_medium_pane_t1

0xd4ab,	// (0x0004df89) wml_list_single_large_pane_t1

0xd4ba,	// (0x0004df98) input_focus_pane_cp02_ParamLimits

0xd4ba,	// (0x0004df98) input_focus_pane_cp02

0xd4cd,	// (0x0004dfab) wml_selection_box_pane_g1

0xd4d6,	// (0x0004dfb4) wml_selection_box_pane_t1_ParamLimits

0xd4d6,	// (0x0004dfb4) wml_selection_box_pane_t1

0xd043,	// (0x0004db21) bg_wml_button_pane_ParamLimits

0xd043,	// (0x0004db21) bg_wml_button_pane

0xd4ee,	// (0x0004dfcc) wml_button_pane_g1

0xd4f6,	// (0x0004dfd4) wml_button_pane_t1

0xd4ee,	// (0x0004dfcc) wml_button_bg_pane_g1

0xd506,	// (0x0004dfe4) wml_button_bg_pane_g2

0xd50e,	// (0x0004dfec) wml_button_bg_pane_g3

0xd516,	// (0x0004dff4) wml_button_bg_pane_g4

0xd51e,	// (0x0004dffc) wml_button_bg_pane_g5

0xd526,	// (0x0004e004) wml_button_bg_pane_g6

0xd52e,	// (0x0004e00c) wml_button_bg_pane_g7

0xd536,	// (0x0004e014) wml_button_bg_pane_g8

0xd53e,	// (0x0004e01c) wml_button_bg_pane_g9

0x0008,

0x0088,	// (0x00040b66) wml_button_bg_pane_g

0x2ae9,	// (0x000435c7) bg_list_pane_cp02

0xd546,	// (0x0004e024) mce_header_pane_ParamLimits

0xd546,	// (0x0004e024) mce_header_pane

0xd55c,	// (0x0004e03a) mce_icon_pane

0xd55c,	// (0x0004e03a) mce_image_pane

0xd565,	// (0x0004e043) mce_text_pane_ParamLimits

0xd565,	// (0x0004e043) mce_text_pane

0x2af1,	// (0x000435cf) scroll_pane_cp03

0xd45e,	// (0x0004df3c) scroll_pane_cp04

0xd578,	// (0x0004e056) scroll_pane_cp05_ParamLimits

0xd578,	// (0x0004e056) scroll_pane_cp05

0x2afb,	// (0x000435d9) mce_header_field_pane_ParamLimits

0x2afb,	// (0x000435d9) mce_header_field_pane

0x2b12,	// (0x000435f0) mce_header_field_pane_2_ParamLimits

0x2b12,	// (0x000435f0) mce_header_field_pane_2

0x2b28,	// (0x00043606) mce_header_field_pane_3

0x2b30,	// (0x0004360e) list_single_mce_message_pane_ParamLimits

0x2b30,	// (0x0004360e) list_single_mce_message_pane

0x2b45,	// (0x00043623) list_single_mce_smart_pane_ParamLimits

0x2b45,	// (0x00043623) list_single_mce_smart_pane

0xd584,	// (0x0004e062) input_focus_pane_cp03

0xd58d,	// (0x0004e06b) list_header_data_pane

0x2b65,	// (0x00043643) mce_header_field_pane_t1

0x2b75,	// (0x00043653) list_single_mce_header_pane_ParamLimits

0x2b75,	// (0x00043653) list_single_mce_header_pane

0xd595,	// (0x0004e073) list_single_mce_header_pane_t1

0xd5a4,	// (0x0004e082) list_single_mce_message_pane_g1

0xd5ac,	// (0x0004e08a) list_single_mce_message_pane_t1

0x2ba7,	// (0x00043685) bg_cale_heading_pane_cp01_ParamLimits

0x2ba7,	// (0x00043685) bg_cale_heading_pane_cp01

0xd5ba,	// (0x0004e098) bg_cale_pane_cp02_ParamLimits

0xd5ba,	// (0x0004e098) bg_cale_pane_cp02

0x2bca,	// (0x000436a8) cale_month_corner_pane

0x2be0,	// (0x000436be) cale_month_day_heading_pane_ParamLimits

0x2be0,	// (0x000436be) cale_month_day_heading_pane

0x2c13,	// (0x000436f1) cale_month_pane_g1_ParamLimits

0x2c13,	// (0x000436f1) cale_month_pane_g1

0x2c2f,	// (0x0004370d) cale_month_pane_g2_ParamLimits

0x2c2f,	// (0x0004370d) cale_month_pane_g2

0x2c4a,	// (0x00043728) cale_month_pane_g3_ParamLimits

0x2c4a,	// (0x00043728) cale_month_pane_g3

0x2c76,	// (0x00043754) cale_month_pane_g4_ParamLimits

0x2c76,	// (0x00043754) cale_month_pane_g4

0x2ca2,	// (0x00043780) cale_month_pane_g5_ParamLimits

0x2ca2,	// (0x00043780) cale_month_pane_g5

0x2cd6,	// (0x000437b4) cale_month_pane_g6_ParamLimits

0x2cd6,	// (0x000437b4) cale_month_pane_g6

0x2d12,	// (0x000437f0) cale_month_pane_g7_ParamLimits

0x2d12,	// (0x000437f0) cale_month_pane_g7

0x2d4e,	// (0x0004382c) cale_month_pane_g8_ParamLimits

0x2d4e,	// (0x0004382c) cale_month_pane_g8

0x2d8a,	// (0x00043868) cale_month_pane_g9_ParamLimits

0x2d8a,	// (0x00043868) cale_month_pane_g9

0x2dc4,	// (0x000438a2) cale_month_pane_g10_ParamLimits

0x2dc4,	// (0x000438a2) cale_month_pane_g10

0x2dfe,	// (0x000438dc) cale_month_pane_g11_ParamLimits

0x2dfe,	// (0x000438dc) cale_month_pane_g11

0x2e38,	// (0x00043916) cale_month_pane_g12_ParamLimits

0x2e38,	// (0x00043916) cale_month_pane_g12

0x2e72,	// (0x00043950) cale_month_pane_g13_ParamLimits

0x2e72,	// (0x00043950) cale_month_pane_g13

0x000c,

0xf28e,	// (0x0004fd6c) cale_month_pane_g_ParamLimits

0xf28e,	// (0x0004fd6c) cale_month_pane_g

0x2eac,	// (0x0004398a) cale_month_week_pane

0x2ebf,	// (0x0004399d) grid_cale_month_pane_ParamLimits

0x2ebf,	// (0x0004399d) grid_cale_month_pane

0x2eed,	// (0x000439cb) cale_month_day_heading_pane_t1

0x2f4b,	// (0x00043a29) cale_month_day_heading_pane_t2

0x2fb0,	// (0x00043a8e) cale_month_day_heading_pane_t3

0x3015,	// (0x00043af3) cale_month_day_heading_pane_t4

0x307a,	// (0x00043b58) cale_month_day_heading_pane_t5

0x30ef,	// (0x00043bcd) cale_month_day_heading_pane_t6

0x3164,	// (0x00043c42) cale_month_day_heading_pane_t7

0x0006,

0xf2a9,	// (0x0004fd87) cale_month_day_heading_pane_t

0xd25a,	// (0x0004dd38) bg_cale_side_pane_cp01

0x31d9,	// (0x00043cb7) cale_month_week_pane_t1

0x31f0,	// (0x00043cce) cale_month_week_pane_t2

0x3207,	// (0x00043ce5) cale_month_week_pane_t3

0x321e,	// (0x00043cfc) cale_month_week_pane_t4

0x3235,	// (0x00043d13) cale_month_week_pane_t5

0x324c,	// (0x00043d2a) cale_month_week_pane_t6

0x0005,

0xf2b8,	// (0x0004fd96) cale_month_week_pane_t

0x3263,	// (0x00043d41) cell_cale_month_pane_ParamLimits

0x3263,	// (0x00043d41) cell_cale_month_pane

0xa8c0,	// (0x0004b39e) cell_cale_month_pane_g1

0x3339,	// (0x00043e17) cell_cale_month_pane_t1_ParamLimits

0x3339,	// (0x00043e17) cell_cale_month_pane_t1

0xd268,	// (0x0004dd46) grid_highlight_pane_cp08

0xd16f,	// (0x0004dc4d) main_smil_g1

0x3355,	// (0x00043e33) smil_status_pane

0xd5ef,	// (0x0004e0cd) smil_text_pane

0xee44,	// (0x0004f922) bg_popup_call3_rect_pane_g8

0xee4c,	// (0x0004f92a) bg_popup_call3_rect_pane_g9

0x0008,

0x037e,	// (0x00040e5c) bg_popup_call3_rect_pane_g

0xf0c6,	// (0x0004fba4) smil_status_volume_pane_g1

0xd5f9,	// (0x0004e0d7) smil_status_pane_t1

0xaa37,	// (0x0004b515) volume_smil_pane

0xd610,	// (0x0004e0ee) list_smil_text_pane

0x3368,	// (0x00043e46) scroll_pane_cp011

0x3373,	// (0x00043e51) smil_text_list_pane_t1_ParamLimits

0x3373,	// (0x00043e51) smil_text_list_pane_t1

0xa8cc,	// (0x0004b3aa) aid_volume_smil_ParamLimits

0xa8cc,	// (0x0004b3aa) aid_volume_smil

0xd16f,	// (0x0004dc4d) smil_volume_pane_g1

0xd16f,	// (0x0004dc4d) smil_volume_pane_g2

0x0001,

0x00e5,	// (0x00040bc3) smil_volume_pane_g

0xd11a,	// (0x0004dbf8) listscroll_cale_day_pane

0xd61a,	// (0x0004e0f8) bg_cale_pane

0xd632,	// (0x0004e110) list_cale_pane

0xd643,	// (0x0004e121) scroll_pane_cp09

0xd654,	// (0x0004e132) cale_bg_pane_g1

0xd65c,	// (0x0004e13a) cale_bg_pane_g2

0xd664,	// (0x0004e142) cale_bg_pane_g3

0xd66c,	// (0x0004e14a) cale_bg_pane_g4

0xd674,	// (0x0004e152) cale_bg_pane_g5

0xd67c,	// (0x0004e15a) cale_bg_pane_g6

0xd684,	// (0x0004e162) cale_bg_pane_g7

0xd68c,	// (0x0004e16a) cale_bg_pane_g8

0xd694,	// (0x0004e172) cale_bg_pane_g9

0x0008,

0x00ea,	// (0x00040bc8) cale_bg_pane_g

0x237f,	// (0x00042e5d) list_cale_time_pane_ParamLimits

0x237f,	// (0x00042e5d) list_cale_time_pane

0xd69c,	// (0x0004e17a) list_cale_time_pane_g1_ParamLimits

0xd69c,	// (0x0004e17a) list_cale_time_pane_g1

0xd6a8,	// (0x0004e186) list_cale_time_pane_g2_ParamLimits

0xd6a8,	// (0x0004e186) list_cale_time_pane_g2

0x33b9,	// (0x00043e97) list_cale_time_pane_g3_ParamLimits

0x33b9,	// (0x00043e97) list_cale_time_pane_g3

0x33c7,	// (0x00043ea5) list_cale_time_pane_g4_ParamLimits

0x33c7,	// (0x00043ea5) list_cale_time_pane_g4

0x33d5,	// (0x00043eb3) list_cale_time_pane_g5_ParamLimits

0x33d5,	// (0x00043eb3) list_cale_time_pane_g5

0x0005,

0xf2d8,	// (0x0004fdb6) list_cale_time_pane_g_ParamLimits

0xf2d8,	// (0x0004fdb6) list_cale_time_pane_g

0xd6c2,	// (0x0004e1a0) list_cale_time_pane_t1_ParamLimits

0xd6c2,	// (0x0004e1a0) list_cale_time_pane_t1

0xd6ea,	// (0x0004e1c8) list_cale_time_pane_t2_ParamLimits

0xd6ea,	// (0x0004e1c8) list_cale_time_pane_t2

0x3677,	// (0x00044155) aid_blid_cardinal_pane

0x36b5,	// (0x00044193) compass_pane_t4

0xd712,	// (0x0004e1f0) list_cale_time_pane_t4_ParamLimits

0xd712,	// (0x0004e1f0) list_cale_time_pane_t4

0x36c3,	// (0x000441a1) compass_pane_t5

0x36d1,	// (0x000441af) compass_pane_t6

0x36df,	// (0x000441bd) compass_pane_t7

0xdb4b,	// (0x0004e629) navi_pane_cc_t1

0xdca0,	// (0x0004e77e) aid_phob_thumbnail_center_pane

0x3d48,	// (0x00044826) main_postcard_pane_g4_ParamLimits

0x0002,

0x010a,	// (0x00040be8) list_cale_time_pane_t_ParamLimits

0x010a,	// (0x00040be8) list_cale_time_pane_t

0xca3f,	// (0x0004d51d) bg_popup_window_pane_cp02_ParamLimits

0xca3f,	// (0x0004d51d) bg_popup_window_pane_cp02

0xd73a,	// (0x0004e218) heading_pane_cp01_ParamLimits

0xd73a,	// (0x0004e218) heading_pane_cp01

0xd746,	// (0x0004e224) loc_req_pane_ParamLimits

0xd746,	// (0x0004e224) loc_req_pane

0xd756,	// (0x0004e234) loc_type_pane_ParamLimits

0xd756,	// (0x0004e234) loc_type_pane

0xd768,	// (0x0004e246) loc_type_pane_t1_ParamLimits

0xd768,	// (0x0004e246) loc_type_pane_t1

0xd77a,	// (0x0004e258) loc_type_pane_t2_ParamLimits

0xd77a,	// (0x0004e258) loc_type_pane_t2

0xd78c,	// (0x0004e26a) loc_type_pane_t3_ParamLimits

0xd78c,	// (0x0004e26a) loc_type_pane_t3

0x0002,

0x0111,	// (0x00040bef) loc_type_pane_t_ParamLimits

0x0111,	// (0x00040bef) loc_type_pane_t

0xd79e,	// (0x0004e27c) list_loc_req_pane

0xd7a8,	// (0x0004e286) scroll_pane_cp012

0x33e3,	// (0x00043ec1) list_single_loc_request_popup_menu_pane_ParamLimits

0x33e3,	// (0x00043ec1) list_single_loc_request_popup_menu_pane

0xd7b3,	// (0x0004e291) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd7b3,	// (0x0004e291) list_single_loc_request_popup_menu_pane_g1

0xd7bf,	// (0x0004e29d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd7bf,	// (0x0004e29d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x0118,	// (0x00040bf6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x0118,	// (0x00040bf6) list_single_loc_request_popup_menu_pane_g

0xd7cb,	// (0x0004e2a9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd7cb,	// (0x0004e2a9) list_single_loc_request_popup_menu_pane_t1

0xd043,	// (0x0004db21) bg_popup_window_pane_cp03_ParamLimits

0xd043,	// (0x0004db21) bg_popup_window_pane_cp03

0xe2d5,	// (0x0004edb3) heading_loc_req_pane_ParamLimits

0xe2d5,	// (0x0004edb3) heading_loc_req_pane

0x33f0,	// (0x00043ece) popup_dyc_status_message_window_g1_ParamLimits

0x33f0,	// (0x00043ece) popup_dyc_status_message_window_g1

0x3404,	// (0x00043ee2) popup_dyc_status_message_window_t1_ParamLimits

0x3404,	// (0x00043ee2) popup_dyc_status_message_window_t1

0x3419,	// (0x00043ef7) popup_dyc_status_message_window_t2_ParamLimits

0x3419,	// (0x00043ef7) popup_dyc_status_message_window_t2

0x342e,	// (0x00043f0c) popup_dyc_status_message_window_t3_ParamLimits

0x342e,	// (0x00043f0c) popup_dyc_status_message_window_t3

0x0002,

0xf2e5,	// (0x0004fdc3) popup_dyc_status_message_window_t_ParamLimits

0xf2e5,	// (0x0004fdc3) popup_dyc_status_message_window_t

0xcde8,	// (0x0004d8c6) bg_heading_pane_cp01

0xd7e1,	// (0x0004e2bf) heading_loc_req_pane_g1

0xd7e9,	// (0x0004e2c7) heading_loc_req_pane_g2

0xd7f1,	// (0x0004e2cf) heading_loc_req_pane_g3

0x0002,

0x0124,	// (0x00040c02) heading_loc_req_pane_g

0xd7f9,	// (0x0004e2d7) heading_loc_req_pane_t1

0xd808,	// (0x0004e2e6) bg_popup_sub_pane_cp01_ParamLimits

0xd808,	// (0x0004e2e6) bg_popup_sub_pane_cp01

0xd816,	// (0x0004e2f4) popup_cale_events_window_g1_ParamLimits

0xd816,	// (0x0004e2f4) popup_cale_events_window_g1

0xd836,	// (0x0004e314) popup_cale_events_window_g2_ParamLimits

0xd836,	// (0x0004e314) popup_cale_events_window_g2

0x0001,

0x0158,	// (0x00040c36) popup_cale_events_window_g_ParamLimits

0x0158,	// (0x00040c36) popup_cale_events_window_g

0xd856,	// (0x0004e334) popup_cale_events_window_t1_ParamLimits

0xd856,	// (0x0004e334) popup_cale_events_window_t1

0xd868,	// (0x0004e346) popup_cale_events_window_t2_ParamLimits

0xd868,	// (0x0004e346) popup_cale_events_window_t2

0xd8a6,	// (0x0004e384) popup_cale_events_window_t3_ParamLimits

0xd8a6,	// (0x0004e384) popup_cale_events_window_t3

0xd8e0,	// (0x0004e3be) popup_cale_events_window_t4_ParamLimits

0xd8e0,	// (0x0004e3be) popup_cale_events_window_t4

0x0003,

0x015d,	// (0x00040c3b) popup_cale_events_window_t_ParamLimits

0x015d,	// (0x00040c3b) popup_cale_events_window_t

0x3462,	// (0x00043f40) call_type_pane

0x3472,	// (0x00043f50) popup_call_status_window_g1

0x3486,	// (0x00043f64) popup_call_status_window_g2

0x349a,	// (0x00043f78) popup_call_status_window_g3

0x0002,

0xf319,	// (0x0004fdf7) popup_call_status_window_g

0xd916,	// (0x0004e3f4) call_type_pane_g1

0xd91f,	// (0x0004e3fd) call_type_pane_g2

0x0001,

0xf320,	// (0x0004fdfe) call_type_pane_g

0xcde8,	// (0x0004d8c6) bg_popup_sub_pane_cp02

0xd928,	// (0x0004e406) listscroll_popup_wml_pane

0xd930,	// (0x0004e40e) list_wml_pane

0xd93a,	// (0x0004e418) scroll_pane_cp013

0xd945,	// (0x0004e423) list_single_graphic_popup_wml_pane_ParamLimits

0xd945,	// (0x0004e423) list_single_graphic_popup_wml_pane

0xd16f,	// (0x0004dc4d) list_single_graphic_popup_wml_pane_g1

0xd959,	// (0x0004e437) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf325,	// (0x0004fe03) list_single_graphic_popup_wml_pane_g

0xd961,	// (0x0004e43f) list_single_graphic_popup_wml_pane_t1

0xd977,	// (0x0004e455) aid_call_pane

0xd03b,	// (0x0004db19) popup_clock_analogue_window_g1

0xd03b,	// (0x0004db19) popup_clock_analogue_window_g2

0xa963,	// (0x0004b441) popup_clock_analogue_window_g3

0xa963,	// (0x0004b441) popup_clock_analogue_window_g4

0xd16f,	// (0x0004dc4d) popup_clock_analogue_window_g5

0x0004,

0xf32a,	// (0x0004fe08) popup_clock_analogue_window_g

0xa96b,	// (0x0004b449) popup_clock_analogue_window_t1

0xa979,	// (0x0004b457) clock_digital_number_pane_ParamLimits

0xa979,	// (0x0004b457) clock_digital_number_pane

0xa985,	// (0x0004b463) clock_digital_number_pane_cp02_ParamLimits

0xa985,	// (0x0004b463) clock_digital_number_pane_cp02

0xa991,	// (0x0004b46f) clock_digital_number_pane_cp03_ParamLimits

0xa991,	// (0x0004b46f) clock_digital_number_pane_cp03

0xa99d,	// (0x0004b47b) clock_digital_number_pane_cp04_ParamLimits

0xa99d,	// (0x0004b47b) clock_digital_number_pane_cp04

0xa9ad,	// (0x0004b48b) clock_digital_separator_pane_ParamLimits

0xa9ad,	// (0x0004b48b) clock_digital_separator_pane

0xa9b9,	// (0x0004b497) popup_clock_digital_window_t1

0xd16f,	// (0x0004dc4d) clock_digital_number_pane_g1

0xd16f,	// (0x0004dc4d) clock_digital_number_pane_g2

0x0001,

0x00e5,	// (0x00040bc3) clock_digital_number_pane_g

0xd16f,	// (0x0004dc4d) clock_digital_separator_pane_g1

0xd16f,	// (0x0004dc4d) clock_digital_separator_pane_g2

0x0001,

0x00e5,	// (0x00040bc3) clock_digital_separator_pane_g

0xcde8,	// (0x0004d8c6) bg_popup_window_pane_cp04

0xd97f,	// (0x0004e45d) heading_pane_cp03

0xd995,	// (0x0004e473) listscroll_popup_gms_pane

0xd99d,	// (0x0004e47b) grid_large_graphic_popup_pane

0xd9a7,	// (0x0004e485) listscroll_popup_gms_pane_g1

0xd9af,	// (0x0004e48d) listscroll_popup_gms_pane_g2

0x0001,

0x0182,	// (0x00040c60) listscroll_popup_gms_pane_g

0xd45e,	// (0x0004df3c) scroll_pane_cp014

0x34a9,	// (0x00043f87) cell_large_graphic_popup_pane_ParamLimits

0x34a9,	// (0x00043f87) cell_large_graphic_popup_pane

0x34c1,	// (0x00043f9f) cell_large_graphic_popup_pane_g1_ParamLimits

0x34c1,	// (0x00043f9f) cell_large_graphic_popup_pane_g1

0xd9b7,	// (0x0004e495) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9b7,	// (0x0004e495) cell_large_graphic_popup_pane_g2

0xd9c3,	// (0x0004e4a1) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9c3,	// (0x0004e4a1) cell_large_graphic_popup_pane_g3

0xd9d0,	// (0x0004e4ae) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9d0,	// (0x0004e4ae) cell_large_graphic_popup_pane_g4

0x0003,

0xf335,	// (0x0004fe13) cell_large_graphic_popup_pane_g_ParamLimits

0xf335,	// (0x0004fe13) cell_large_graphic_popup_pane_g

0xd9e0,	// (0x0004e4be) grid_highlight_pane_cp010

0xd16f,	// (0x0004dc4d) bg_popup_call_pane_g1

0xd9ea,	// (0x0004e4c8) list_single_graphic_popup_conf_pane_ParamLimits

0xd9ea,	// (0x0004e4c8) list_single_graphic_popup_conf_pane

0xd9fd,	// (0x0004e4db) list_highlight_pane_cp01

0xda06,	// (0x0004e4e4) list_single_graphic_popup_conf_pane_g1

0xda0e,	// (0x0004e4ec) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0190,	// (0x00040c6e) list_single_graphic_popup_conf_pane_g

0xda16,	// (0x0004e4f4) list_single_graphic_popup_conf_pane_t1

0xda24,	// (0x0004e502) linegrid_cams_pane_g1

0x34cd,	// (0x00043fab) linegrid_cams_pane_g2

0xd29b,	// (0x0004dd79) linegrid_cams_pane_g3

0xda2d,	// (0x0004e50b) linegrid_cams_pane_g4

0x34d6,	// (0x00043fb4) linegrid_cams_pane_g5

0x34df,	// (0x00043fbd) linegrid_cams_pane_g6

0xd2a4,	// (0x0004dd82) linegrid_cams_pane_g7

0x0006,

0xf33e,	// (0x0004fe1c) linegrid_cams_pane_g

0xda36,	// (0x0004e514) popup_clock_analogue_window

0xda36,	// (0x0004e514) popup_clock_digital_window

0xcde8,	// (0x0004d8c6) popup_phob_thumbnail_window

0xd16f,	// (0x0004dc4d) call_video_uplink_pane_g1

0xda3f,	// (0x0004e51d) call_video_uplink_pane_g2

0x0001,

0x01a4,	// (0x00040c82) call_video_uplink_pane_g

0xda47,	// (0x0004e525) video_uplink_pane

0xda4f,	// (0x0004e52d) mce_image_pane_g1

0x34ea,	// (0x00043fc8) mce_image_pane_g2

0x34f4,	// (0x00043fd2) mce_image_pane_g3

0x34fc,	// (0x00043fda) mce_image_pane_g4

0x3504,	// (0x00043fe2) mce_image_pane_g5

0x0004,

0xf34d,	// (0x0004fe2b) mce_image_pane_g

0xda59,	// (0x0004e537) control_top_pane_stacon_cp01_ParamLimits

0xda59,	// (0x0004e537) control_top_pane_stacon_cp01

0xda6d,	// (0x0004e54b) uni_indicator_pane_stacon_cp01_ParamLimits

0xda6d,	// (0x0004e54b) uni_indicator_pane_stacon_cp01

0xda7e,	// (0x0004e55c) bg_popup_sub_pane_cp03

0x350c,	// (0x00043fea) chi_dic_find_pane

0x3514,	// (0x00043ff2) listscroll_chi_dic_pane

0x351d,	// (0x00043ffb) main_pane_chidic_g1

0xda88,	// (0x0004e566) chi_dic_find_pane_t1

0xda96,	// (0x0004e574) find_chidic_pane

0xda9f,	// (0x0004e57d) chi_dic_list_pane_ParamLimits

0xda9f,	// (0x0004e57d) chi_dic_list_pane

0xdab0,	// (0x0004e58e) scroll_pane_cp020

0xdab8,	// (0x0004e596) find_chidic_pane_t1

0xcde8,	// (0x0004d8c6) input_focus_pane_cp06

0x3530,	// (0x0004400e) list_chi_dic_pane_ParamLimits

0x3530,	// (0x0004400e) list_chi_dic_pane

0x3542,	// (0x00044020) list_chi_dic_pane_t1_ParamLimits

0x3542,	// (0x00044020) list_chi_dic_pane_t1

0xcde8,	// (0x0004d8c6) list_highlight_pane_cp020

0xdac7,	// (0x0004e5a5) bg_cale_heading_pane_g1

0x3555,	// (0x00044033) bg_cale_heading_pane_g2

0x355d,	// (0x0004403b) bg_cale_heading_pane_g3

0x3565,	// (0x00044043) bg_cale_heading_pane_g4

0x356f,	// (0x0004404d) bg_cale_heading_pane_g5

0x3579,	// (0x00044057) bg_cale_heading_pane_g6

0x3581,	// (0x0004405f) bg_cale_heading_pane_g7

0x3589,	// (0x00044067) bg_cale_heading_pane_g8

0x3593,	// (0x00044071) bg_cale_heading_pane_g9

0x0008,

0xf358,	// (0x0004fe36) bg_cale_heading_pane_g

0xdac7,	// (0x0004e5a5) bg_cale_side_pane_g1

0x359d,	// (0x0004407b) bg_cale_side_pane_g2

0x35a5,	// (0x00044083) bg_cale_side_pane_g3

0x35ad,	// (0x0004408b) bg_cale_side_pane_g4

0x35b5,	// (0x00044093) bg_cale_side_pane_g5

0x35bd,	// (0x0004409b) bg_cale_side_pane_g6

0x35c5,	// (0x000440a3) bg_cale_side_pane_g7

0x35cd,	// (0x000440ab) bg_cale_side_pane_g8

0x35d5,	// (0x000440b3) bg_cale_side_pane_g9

0x0008,

0xf36b,	// (0x0004fe49) bg_cale_side_pane_g

0x35dd,	// (0x000440bb) popup_call_status_window_ParamLimits

0x35dd,	// (0x000440bb) popup_call_status_window

0xdacf,	// (0x0004e5ad) stacon_top_pane

0xdad7,	// (0x0004e5b5) status_pane_ParamLimits

0xdad7,	// (0x0004e5b5) status_pane

0xdaec,	// (0x0004e5ca) status_small_pane

0xdaf4,	// (0x0004e5d2) control_pane

0xcde8,	// (0x0004d8c6) stacon_bottom_pane

0xdafc,	// (0x0004e5da) list_single_mce_smart_pane_t1_ParamLimits

0xdafc,	// (0x0004e5da) list_single_mce_smart_pane_t1

0xdb0f,	// (0x0004e5ed) list_single_mce_smart_pane_t2_ParamLimits

0xdb0f,	// (0x0004e5ed) list_single_mce_smart_pane_t2

0x0001,

0x01da,	// (0x00040cb8) list_single_mce_smart_pane_t_ParamLimits

0x01da,	// (0x00040cb8) list_single_mce_smart_pane_t

0x3626,	// (0x00044104) compass_pane

0x362f,	// (0x0004410d) main_location2_pane_t1

0x3641,	// (0x0004411f) main_location2_pane_t2

0x3653,	// (0x00044131) main_location2_pane_t3

0x0003,

0xf37e,	// (0x0004fe5c) main_location2_pane_t

0xdb2e,	// (0x0004e60c) compass_pane_g1_ParamLimits

0xdb2e,	// (0x0004e60c) compass_pane_g1

0x3697,	// (0x00044175) compass_pane_t1

0x36a6,	// (0x00044184) compass_pane_t2

0x0005,

0xf387,	// (0x0004fe65) compass_pane_t

0x36ed,	// (0x000441cb) text_secondary_cp61

0xdb42,	// (0x0004e620) navi_pane_cams_g5

0xdb65,	// (0x0004e643) navi_pane_im_t1

0xdb73,	// (0x0004e651) navi_pane_mp_g1_ParamLimits

0xdb73,	// (0x0004e651) navi_pane_mp_g1

0xdb87,	// (0x0004e665) navi_pane_mp_g2_ParamLimits

0xdb87,	// (0x0004e665) navi_pane_mp_g2

0xdb93,	// (0x0004e671) navi_pane_mp_g3_ParamLimits

0xdb93,	// (0x0004e671) navi_pane_mp_g3

0x0002,

0x01fc,	// (0x00040cda) navi_pane_mp_g_ParamLimits

0x01fc,	// (0x00040cda) navi_pane_mp_g

0xdb9f,	// (0x0004e67d) navi_pane_mp_t1

0xdbad,	// (0x0004e68b) navi_pane_mp_t2

0x0002,

0x0203,	// (0x00040ce1) navi_pane_mp_t

0xdbe9,	// (0x0004e6c7) navi_pane_vt_g1

0xdb9f,	// (0x0004e67d) navi_pane_vt_t1

0xdbf1,	// (0x0004e6cf) navi_slider_pane

0xdbf9,	// (0x0004e6d7) zooming_pane

0xdc01,	// (0x0004e6df) navi_slider_pane_g1

0xa9d6,	// (0x0004b4b4) navi_slider_pane_g2

0x0006,

0xf39b,	// (0x0004fe79) navi_slider_pane_g

0xdc25,	// (0x0004e703) aid_levels_zoom

0xdc2d,	// (0x0004e70b) zooming_pane_g1

0xdc35,	// (0x0004e713) zooming_pane_g2

0xdc35,	// (0x0004e713) zooming_pane_g3

0x0002,

0x0219,	// (0x00040cf7) zooming_pane_g

0xdc3d,	// (0x0004e71b) level_10_zoom

0xdc46,	// (0x0004e724) level_11_zoom

0xdc4f,	// (0x0004e72d) level_1_zoom

0xdc58,	// (0x0004e736) level_2_zoom

0xdc61,	// (0x0004e73f) level_3_zoom

0xdc6a,	// (0x0004e748) level_4_zoom

0xdc73,	// (0x0004e751) level_5_zoom

0xdc7c,	// (0x0004e75a) level_6_zoom

0xdc85,	// (0x0004e763) level_7_zoom

0xdc8e,	// (0x0004e76c) level_8_zoom

0xdc97,	// (0x0004e775) level_9_zoom

0xdca8,	// (0x0004e786) popup_phob_thumbnail_window_g1

0xdcb0,	// (0x0004e78e) popup_phob_thumbnail_window_g2

0x0001,

0x0220,	// (0x00040cfe) popup_phob_thumbnail_window_g

0xefa6,	// (0x0004fa84) level_1_location

0xefae,	// (0x0004fa8c) level_2_location

0xefb6,	// (0x0004fa94) level_3_location

0xefbe,	// (0x0004fa9c) level_4_location

0xdbf9,	// (0x0004e6d7) level_5_location

0x3812,	// (0x000442f0) mce_icon_pane_g1

0x381a,	// (0x000442f8) mce_icon_pane_g2

0x0001,

0xf3aa,	// (0x0004fe88) mce_icon_pane_g

0x3822,	// (0x00044300) main_mup_pane_g1_ParamLimits

0x3822,	// (0x00044300) main_mup_pane_g1

0x3838,	// (0x00044316) main_mup_pane_g2_ParamLimits

0x3838,	// (0x00044316) main_mup_pane_g2

0x3850,	// (0x0004432e) main_mup_pane_g3_ParamLimits

0x3850,	// (0x0004432e) main_mup_pane_g3

0x3868,	// (0x00044346) main_mup_pane_g4_ParamLimits

0x3868,	// (0x00044346) main_mup_pane_g4

0x3880,	// (0x0004435e) main_mup_pane_g5_ParamLimits

0x3880,	// (0x0004435e) main_mup_pane_g5

0x389c,	// (0x0004437a) main_mup_pane_g6_ParamLimits

0x389c,	// (0x0004437a) main_mup_pane_g6

0x38b4,	// (0x00044392) main_mup_pane_g7_ParamLimits

0x38b4,	// (0x00044392) main_mup_pane_g7

0x38cc,	// (0x000443aa) main_mup_pane_g8_ParamLimits

0x38cc,	// (0x000443aa) main_mup_pane_g8

0x38e6,	// (0x000443c4) main_mup_pane_g9_ParamLimits

0x38e6,	// (0x000443c4) main_mup_pane_g9

0x3900,	// (0x000443de) main_mup_pane_g10_ParamLimits

0x3900,	// (0x000443de) main_mup_pane_g10

0x391a,	// (0x000443f8) main_mup_pane_g11_ParamLimits

0x391a,	// (0x000443f8) main_mup_pane_g11

0x392e,	// (0x0004440c) main_mup_pane_g12_ParamLimits

0x392e,	// (0x0004440c) main_mup_pane_g12

0x3944,	// (0x00044422) main_mup_pane_g13_ParamLimits

0x3944,	// (0x00044422) main_mup_pane_g13

0x000c,

0xf3af,	// (0x0004fe8d) main_mup_pane_g_ParamLimits

0xf3af,	// (0x0004fe8d) main_mup_pane_g

0x3958,	// (0x00044436) main_mup_pane_t1_ParamLimits

0x3958,	// (0x00044436) main_mup_pane_t1

0x3972,	// (0x00044450) main_mup_pane_t2_ParamLimits

0x3972,	// (0x00044450) main_mup_pane_t2

0x398a,	// (0x00044468) main_mup_pane_t3_ParamLimits

0x398a,	// (0x00044468) main_mup_pane_t3

0x39a2,	// (0x00044480) main_mup_pane_t4_ParamLimits

0x39a2,	// (0x00044480) main_mup_pane_t4

0x39c0,	// (0x0004449e) main_mup_pane_t5_ParamLimits

0x39c0,	// (0x0004449e) main_mup_pane_t5

0x39d5,	// (0x000444b3) main_mup_pane_t6_ParamLimits

0x39d5,	// (0x000444b3) main_mup_pane_t6

0x0005,

0xf3ca,	// (0x0004fea8) main_mup_pane_t_ParamLimits

0xf3ca,	// (0x0004fea8) main_mup_pane_t

0x39e7,	// (0x000444c5) mup_progress_pane_ParamLimits

0x39e7,	// (0x000444c5) mup_progress_pane

0x39f3,	// (0x000444d1) mup_visualizer_pane_ParamLimits

0x39f3,	// (0x000444d1) mup_visualizer_pane

0x3a23,	// (0x00044501) mup_volume_pane_ParamLimits

0x3a23,	// (0x00044501) mup_volume_pane

0xd987,	// (0x0004e465) mup_visualizer_pane_g1_ParamLimits

0xd987,	// (0x0004e465) mup_visualizer_pane_g1

0xd987,	// (0x0004e465) mup_visualizer_pane_g2_ParamLimits

0xd987,	// (0x0004e465) mup_visualizer_pane_g2

0xdb2e,	// (0x0004e60c) mup_visualizer_pane_g3_ParamLimits

0xdb2e,	// (0x0004e60c) mup_visualizer_pane_g3

0x0002,

0xf3d7,	// (0x0004feb5) mup_visualizer_pane_g_ParamLimits

0xf3d7,	// (0x0004feb5) mup_visualizer_pane_g

0xd16f,	// (0x0004dc4d) mup_volume_pane_g1

0xdcc0,	// (0x0004e79e) mup_volume_pane_g2

0x0001,

0x0259,	// (0x00040d37) mup_volume_pane_g

0xd16f,	// (0x0004dc4d) mup_progress_pane_g1

0xdcc9,	// (0x0004e7a7) mup_progress_pane_g2

0xdcd2,	// (0x0004e7b0) mup_progress_pane_g3

0x0002,

0x025e,	// (0x00040d3c) mup_progress_pane_g

0xcde8,	// (0x0004d8c6) bg_popup_window_pane_cp05

0xdcdb,	// (0x0004e7b9) heading_pane_cp02_ParamLimits

0xdcdb,	// (0x0004e7b9) heading_pane_cp02

0xdcf5,	// (0x0004e7d3) list_popup_blid_pane

0xdcfd,	// (0x0004e7db) list_blid_sat_info_pane_ParamLimits

0xdcfd,	// (0x0004e7db) list_blid_sat_info_pane

0xdd10,	// (0x0004e7ee) list_blid_sat_info_pane_g1

0xdd18,	// (0x0004e7f6) list_blid_sat_info_pane_t1

0x3b39,	// (0x00044617) mup_equalizer_pane_ParamLimits

0x3b39,	// (0x00044617) mup_equalizer_pane

0x3b52,	// (0x00044630) mup_equalizer_pane_cp1_ParamLimits

0x3b52,	// (0x00044630) mup_equalizer_pane_cp1

0x3b6f,	// (0x0004464d) mup_equalizer_pane_cp2_ParamLimits

0x3b6f,	// (0x0004464d) mup_equalizer_pane_cp2

0x3b8c,	// (0x0004466a) mup_equalizer_pane_cp3_ParamLimits

0x3b8c,	// (0x0004466a) mup_equalizer_pane_cp3

0x3bad,	// (0x0004468b) mup_equalizer_pane_cp4_ParamLimits

0x3bad,	// (0x0004468b) mup_equalizer_pane_cp4

0x3bce,	// (0x000446ac) mup_equalizer_pane_cp5

0x3be2,	// (0x000446c0) mup_equalizer_pane_cp6

0x3bf6,	// (0x000446d4) mup_equalizer_pane_cp7

0xeec4,	// (0x0004f9a2) bg_popup_call_poc_act_pane_g9

0xeecc,	// (0x0004f9aa) bg_popup_call_poc_act_pane_g10

0xeed4,	// (0x0004f9b2) bg_popup_call_poc_act_pane_g11

0x000a,

0xd043,	// (0x0004db21) mup_scale_pane

0xd16f,	// (0x0004dc4d) mup_scale_pane_g1

0xdd26,	// (0x0004e804) mup_scale_pane_g2

0x0006,

0xf3f3,	// (0x0004fed1) mup_scale_pane_g

0xdd4a,	// (0x0004e828) msg_data_pane

0xdd52,	// (0x0004e830) scroll_pane_cp017

0x0e14,	// (0x000418f2) bg_list_pane_cp04_ParamLimits

0x0e14,	// (0x000418f2) bg_list_pane_cp04

0xdd5a,	// (0x0004e838) msg_data_pane_g1

0x3c1c,	// (0x000446fa) msg_data_pane_g2

0x3c26,	// (0x00044704) msg_data_pane_g3

0x3c2e,	// (0x0004470c) msg_data_pane_g4

0x3c36,	// (0x00044714) msg_data_pane_g5

0x3c3e,	// (0x0004471c) msg_data_pane_g6

0x3c46,	// (0x00044724) msg_data_pane_g7

0x0006,

0xf402,	// (0x0004fee0) msg_data_pane_g

0x0e34,	// (0x00041912) msg_text_pane_ParamLimits

0x0e34,	// (0x00041912) msg_text_pane

0x3c4e,	// (0x0004472c) qrid_highlight_pane_cp011_ParamLimits

0x3c4e,	// (0x0004472c) qrid_highlight_pane_cp011

0xcde8,	// (0x0004d8c6) msg_body_pane

0xcde8,	// (0x0004d8c6) msg_header_pane

0xdd6b,	// (0x0004e849) input_focus_pane_cp07

0x0e67,	// (0x00041945) msg_header_pane_t1_ParamLimits

0x0e67,	// (0x00041945) msg_header_pane_t1

0x0e7b,	// (0x00041959) msg_header_pane_t2_ParamLimits

0x0e7b,	// (0x00041959) msg_header_pane_t2

0x0001,

0xf416,	// (0x0004fef4) msg_header_pane_t_ParamLimits

0xf416,	// (0x0004fef4) msg_header_pane_t

0xdd80,	// (0x0004e85e) msg_body_pane_g1

0x0e8d,	// (0x0004196b) msg_body_pane_t1_ParamLimits

0x0e8d,	// (0x0004196b) msg_body_pane_t1

0x0ebe,	// (0x0004199c) msg_body_pane_t2_ParamLimits

0x0ebe,	// (0x0004199c) msg_body_pane_t2

0x0ed0,	// (0x000419ae) msg_body_pane_t3_ParamLimits

0x0ed0,	// (0x000419ae) msg_body_pane_t3

0x0002,

0xf41b,	// (0x0004fef9) msg_body_pane_t_ParamLimits

0xf41b,	// (0x0004fef9) msg_body_pane_t

0x3c9e,	// (0x0004477c) main_viewer_pane_g1_ParamLimits

0x3c9e,	// (0x0004477c) main_viewer_pane_g1

0x3cac,	// (0x0004478a) main_viewer_pane_g2_ParamLimits

0x3cac,	// (0x0004478a) main_viewer_pane_g2

0x3cba,	// (0x00044798) main_viewer_pane_g3_ParamLimits

0x3cba,	// (0x00044798) main_viewer_pane_g3

0x3cc9,	// (0x000447a7) main_viewer_pane_g4_ParamLimits

0x3cc9,	// (0x000447a7) main_viewer_pane_g4

0xaa00,	// (0x0004b4de) main_viewer_pane_g5_ParamLimits

0xaa00,	// (0x0004b4de) main_viewer_pane_g5

0xaa00,	// (0x0004b4de) main_viewer_pane_g7_ParamLimits

0xaa00,	// (0x0004b4de) main_viewer_pane_g7

0xaa12,	// (0x0004b4f0) main_viewer_pane_g8_ParamLimits

0xaa12,	// (0x0004b4f0) main_viewer_pane_g8

0x0007,

0xf42b,	// (0x0004ff09) main_viewer_pane_g_ParamLimits

0xf42b,	// (0x0004ff09) main_viewer_pane_g

0xdd88,	// (0x0004e866) viewer_content_pane_ParamLimits

0xdd88,	// (0x0004e866) viewer_content_pane

0x3d05,	// (0x000447e3) main_postcard_pane_g1_ParamLimits

0x3d05,	// (0x000447e3) main_postcard_pane_g1

0x3d1b,	// (0x000447f9) main_postcard_pane_g2_ParamLimits

0x3d1b,	// (0x000447f9) main_postcard_pane_g2

0x3d31,	// (0x0004480f) main_postcard_pane_g3_ParamLimits

0x3d31,	// (0x0004480f) main_postcard_pane_g3

0x0005,

0xf43c,	// (0x0004ff1a) main_postcard_pane_g_ParamLimits

0xf43c,	// (0x0004ff1a) main_postcard_pane_g

0x3d48,	// (0x00044826) main_postcard_pane_g4

0xf0d9,	// (0x0004fbb7) smil_status_volume_pane_g2

0x3d8b,	// (0x00044869) postcard_pane_ParamLimits

0x3d8b,	// (0x00044869) postcard_pane

0xdd96,	// (0x0004e874) postcard_pane_g1_ParamLimits

0xdd96,	// (0x0004e874) postcard_pane_g1

0x3dcd,	// (0x000448ab) postcard_pane_g2_ParamLimits

0x3dcd,	// (0x000448ab) postcard_pane_g2

0x3dd9,	// (0x000448b7) postcard_pane_g3_ParamLimits

0x3dd9,	// (0x000448b7) postcard_pane_g3

0xdda4,	// (0x0004e882) postcard_pane_g4_ParamLimits

0xdda4,	// (0x0004e882) postcard_pane_g4

0x3de5,	// (0x000448c3) postcard_pane_g5_ParamLimits

0x3de5,	// (0x000448c3) postcard_pane_g5

0x3dfa,	// (0x000448d8) postcard_pane_g6_ParamLimits

0x3dfa,	// (0x000448d8) postcard_pane_g6

0xdd96,	// (0x0004e874) postcard_pane_g7_ParamLimits

0xdd96,	// (0x0004e874) postcard_pane_g7

0x0006,

0xf449,	// (0x0004ff27) postcard_pane_g_ParamLimits

0xf449,	// (0x0004ff27) postcard_pane_g

0x3e0e,	// (0x000448ec) main_mp2_pane_g1_ParamLimits

0x3e0e,	// (0x000448ec) main_mp2_pane_g1

0x3e1a,	// (0x000448f8) main_mp2_pane_g2_ParamLimits

0x3e1a,	// (0x000448f8) main_mp2_pane_g2

0x3e26,	// (0x00044904) main_mp2_pane_g3_ParamLimits

0x3e26,	// (0x00044904) main_mp2_pane_g3

0x0002,

0xf458,	// (0x0004ff36) main_mp2_pane_g_ParamLimits

0xf458,	// (0x0004ff36) main_mp2_pane_g

0x3e32,	// (0x00044910) main_mp2_pane_t1_ParamLimits

0x3e32,	// (0x00044910) main_mp2_pane_t1

0x3e47,	// (0x00044925) main_mp2_pane_t2_ParamLimits

0x3e47,	// (0x00044925) main_mp2_pane_t2

0x3e59,	// (0x00044937) main_mp2_pane_t3_ParamLimits

0x3e59,	// (0x00044937) main_mp2_pane_t3

0x0002,

0xf45f,	// (0x0004ff3d) main_mp2_pane_t_ParamLimits

0xf45f,	// (0x0004ff3d) main_mp2_pane_t

0xddb2,	// (0x0004e890) pec_content_pane_ParamLimits

0xddb2,	// (0x0004e890) pec_content_pane

0xd45e,	// (0x0004df3c) scroll_pane_cp015

0xddc4,	// (0x0004e8a2) pec_attribute_pane_ParamLimits

0xddc4,	// (0x0004e8a2) pec_attribute_pane

0x3e6b,	// (0x00044949) pec_content_pane_g1_ParamLimits

0x3e6b,	// (0x00044949) pec_content_pane_g1

0xddd4,	// (0x0004e8b2) pec_content_pane_t1_ParamLimits

0xddd4,	// (0x0004e8b2) pec_content_pane_t1

0xdde6,	// (0x0004e8c4) pec_content_pane_t2_ParamLimits

0xdde6,	// (0x0004e8c4) pec_content_pane_t2

0x0001,

0x02ed,	// (0x00040dcb) pec_content_pane_t_ParamLimits

0x02ed,	// (0x00040dcb) pec_content_pane_t

0x3e77,	// (0x00044955) list_single_graphic_pane_cp01_ParamLimits

0x3e77,	// (0x00044955) list_single_graphic_pane_cp01

0xd043,	// (0x0004db21) bg_popup_sub_pane_cp04

0xddf8,	// (0x0004e8d6) popup_mup_playback_window_g1

0xde04,	// (0x0004e8e2) popup_mup_playback_window_t1

0xde19,	// (0x0004e8f7) popup_mup_playback_window_t2

0x0001,

0x02f2,	// (0x00040dd0) popup_mup_playback_window_t

0xde50,	// (0x0004e92e) main_image_pane_g1_ParamLimits

0xde50,	// (0x0004e92e) main_image_pane_g1

0xde93,	// (0x0004e971) scroll_pane_cp018_ParamLimits

0xde93,	// (0x0004e971) scroll_pane_cp018

0xdeab,	// (0x0004e989) scroll_pane_cp016_ParamLimits

0xdeab,	// (0x0004e989) scroll_pane_cp016

0x3f44,	// (0x00044a22) smil2_image_pane_ParamLimits

0x3f44,	// (0x00044a22) smil2_image_pane

0x3f74,	// (0x00044a52) smil2_root_pane_ParamLimits

0x3f74,	// (0x00044a52) smil2_root_pane

0x3fac,	// (0x00044a8a) smil2_text_pane_ParamLimits

0x3fac,	// (0x00044a8a) smil2_text_pane

0xcde8,	// (0x0004d8c6) bg_list_pane_cp06

0xdee7,	// (0x0004e9c5) grid_radio_pane

0xcde8,	// (0x0004d8c6) bg_popup_window_pane_cp06

0xdeef,	// (0x0004e9cd) main_fmradio_pane_t1

0xd97f,	// (0x0004e45d) heading_pane_cp04

0xdefd,	// (0x0004e9db) main_fmradio_pane_t2

0xeedc,	// (0x0004f9ba) popup_cale_lunar_info_window_g1

0xdf0b,	// (0x0004e9e9) main_fmradio_pane_t3

0xeee4,	// (0x0004f9c2) popup_cale_lunar_info_window_g2

0xdf19,	// (0x0004e9f7) main_fmradio_pane_t4

0x0001,

0xdf27,	// (0x0004ea05) main_fmradio_pane_t5

0x0004,

0x03cd,	// (0x00040eab) popup_cale_lunar_info_window_g

0x0307,	// (0x00040de5) main_fmradio_pane_t

0xdf35,	// (0x0004ea13) wait_bar_pane_cp03

0xdf3d,	// (0x0004ea1b) cell_fmradio_pane_ParamLimits

0xdf3d,	// (0x0004ea1b) cell_fmradio_pane

0xdd96,	// (0x0004e874) cell_fmradio_pane_g1_ParamLimits

0xdd96,	// (0x0004e874) cell_fmradio_pane_g1

0xcde8,	// (0x0004d8c6) grid_highlight_pane_cp011

0xdf50,	// (0x0004ea2e) poc_content_pane_ParamLimits

0xdf50,	// (0x0004ea2e) poc_content_pane

0xdf62,	// (0x0004ea40) scroll_pane_cp019

0x402c,	// (0x00044b0a) popup_call_poc_act_window_ParamLimits

0x402c,	// (0x00044b0a) popup_call_poc_act_window

0x4050,	// (0x00044b2e) popup_call_poc_inact_window_ParamLimits

0x4050,	// (0x00044b2e) popup_call_poc_inact_window

0x03a4,	// (0x00040e82) bg_popup_call_poc_act_pane_g

0xee54,	// (0x0004f932) bg_popup_call_poc_inact_pane_g1

0xee5c,	// (0x0004f93a) bg_popup_call_poc_inact_pane_g2

0xdf6a,	// (0x0004ea48) popup_call_poc_act_window_g2

0xee64,	// (0x0004f942) bg_popup_call_poc_inact_pane_g3

0xee6c,	// (0x0004f94a) bg_popup_call_poc_inact_pane_g4

0xee74,	// (0x0004f952) bg_popup_call_poc_inact_pane_g5

0xdf72,	// (0x0004ea50) popup_call_poc_act_window_t1_ParamLimits

0xdf72,	// (0x0004ea50) popup_call_poc_act_window_t1

0xdf9a,	// (0x0004ea78) popup_call_poc_act_window_t2_ParamLimits

0xdf9a,	// (0x0004ea78) popup_call_poc_act_window_t2

0xdfc2,	// (0x0004eaa0) popup_call_poc_act_window_t3_ParamLimits

0xdfc2,	// (0x0004eaa0) popup_call_poc_act_window_t3

0xdfea,	// (0x0004eac8) popup_call_poc_act_window_t4_ParamLimits

0xdfea,	// (0x0004eac8) popup_call_poc_act_window_t4

0x0003,

0x0312,	// (0x00040df0) popup_call_poc_act_window_t_ParamLimits

0x0312,	// (0x00040df0) popup_call_poc_act_window_t

0xee7c,	// (0x0004f95a) bg_popup_call_poc_inact_pane_g6

0xee84,	// (0x0004f962) bg_popup_call_poc_inact_pane_g7

0xee8c,	// (0x0004f96a) bg_popup_call_poc_inact_pane_g8

0xdffc,	// (0x0004eada) popup_call_poc_inact_window_g2

0xee94,	// (0x0004f972) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0391,	// (0x00040e6f) bg_popup_call_poc_inact_pane_g

0xe004,	// (0x0004eae2) popup_call_poc_inact_window_t1_ParamLimits

0xe004,	// (0x0004eae2) popup_call_poc_inact_window_t1

0xe019,	// (0x0004eaf7) popup_call_poc_inact_window_t2_ParamLimits

0xe019,	// (0x0004eaf7) popup_call_poc_inact_window_t2

0xe02e,	// (0x0004eb0c) popup_call_poc_inact_window_t3_ParamLimits

0xe02e,	// (0x0004eb0c) popup_call_poc_inact_window_t3

0x0002,

0x031b,	// (0x00040df9) popup_call_poc_inact_window_t_ParamLimits

0x031b,	// (0x00040df9) popup_call_poc_inact_window_t

0xf04c,	// (0x0004fb2a) context_pane_ParamLimits

0x4883,	// (0x00045361) signal_pane_ParamLimits

0xdbf9,	// (0x0004e6d7) main_call2_pane

0xf03a,	// (0x0004fb18) popup_phob_thumbnail2_window_ParamLimits

0xf03a,	// (0x0004fb18) popup_phob_thumbnail2_window

0xa9e8,	// (0x0004b4c6) aid_hotspot_pointer_arrow_pane

0xa9f0,	// (0x0004b4ce) aid_hotspot_pointer_hand_pane

0x4399,	// (0x00044e77) phob_pre_status_pane_g5

0x23aa,	// (0x00042e88) cams_zoom_pane_ParamLimits

0x23b9,	// (0x00042e97) image_vga_pane_ParamLimits

0x23d3,	// (0x00042eb1) main_camera_pane_g1_ParamLimits

0x23e5,	// (0x00042ec3) main_camera_pane_g2_ParamLimits

0x23f5,	// (0x00042ed3) main_camera_pane_g3_ParamLimits

0x2405,	// (0x00042ee3) main_camera_pane_g4_ParamLimits

0x2415,	// (0x00042ef3) main_camera_pane_g5_ParamLimits

0x2425,	// (0x00042f03) main_camera_pane_g6_ParamLimits

0x2437,	// (0x00042f15) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0004fd0c) main_camera_pane_g_ParamLimits

0x2447,	// (0x00042f25) main_camera_pane_t1_ParamLimits

0x245d,	// (0x00042f3b) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0004fd1d) main_camera_pane_t_ParamLimits

0xd043,	// (0x0004db21) bg_popup_preview_window_pane_cp01_ParamLimits

0xd043,	// (0x0004db21) bg_popup_preview_window_pane_cp01

0xe043,	// (0x0004eb21) popup_phob_thumbnail2_window_g1_ParamLimits

0xe043,	// (0x0004eb21) popup_phob_thumbnail2_window_g1

0xcde8,	// (0x0004d8c6) call2_cli_visual_pane

0x4084,	// (0x00044b62) popup_call2_audio_conf_window_ParamLimits

0x4084,	// (0x00044b62) popup_call2_audio_conf_window

0x40a4,	// (0x00044b82) popup_call2_audio_first_window_ParamLimits

0x40a4,	// (0x00044b82) popup_call2_audio_first_window

0x413a,	// (0x00044c18) popup_call2_audio_in_window_ParamLimits

0x413a,	// (0x00044c18) popup_call2_audio_in_window

0x4182,	// (0x00044c60) popup_call2_audio_out_window_ParamLimits

0x4182,	// (0x00044c60) popup_call2_audio_out_window

0x41ec,	// (0x00044cca) popup_call2_audio_second_window_ParamLimits

0x41ec,	// (0x00044cca) popup_call2_audio_second_window

0x4252,	// (0x00044d30) popup_call2_audio_wait_window_ParamLimits

0x4252,	// (0x00044d30) popup_call2_audio_wait_window

0xcde8,	// (0x0004d8c6) bg_popup_call2_act_pane_cp03

0xd025,	// (0x0004db03) list_conf_pane_cp

0xe04f,	// (0x0004eb2d) popup_call2_audio_conf_window_t1

0xd9ea,	// (0x0004e4c8) list_single_graphic_popup_conf2_pane_ParamLimits

0xd9ea,	// (0x0004e4c8) list_single_graphic_popup_conf2_pane

0xd9fd,	// (0x0004e4db) list_highlight_pane_cp04

0xe05d,	// (0x0004eb3b) list_single_graphic_popup_conf2_pane_g1

0xda0e,	// (0x0004e4ec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0322,	// (0x00040e00) list_single_graphic_popup_conf2_pane_g

0xe067,	// (0x0004eb45) list_single_graphic_popup_conf2_pane_t1

0xe075,	// (0x0004eb53) bg_popup_call2_act_pane_cp01_ParamLimits

0xe075,	// (0x0004eb53) bg_popup_call2_act_pane_cp01

0xe0ff,	// (0x0004ebdd) call_type_pane_cp05_ParamLimits

0xe0ff,	// (0x0004ebdd) call_type_pane_cp05

0xe153,	// (0x0004ec31) popup_call2_audio_second_window_g1_ParamLimits

0xe153,	// (0x0004ec31) popup_call2_audio_second_window_g1

0xe1a7,	// (0x0004ec85) popup_call2_audio_second_window_g2_ParamLimits

0xe1a7,	// (0x0004ec85) popup_call2_audio_second_window_g2

0x0002,

0x0327,	// (0x00040e05) popup_call2_audio_second_window_g_ParamLimits

0x0327,	// (0x00040e05) popup_call2_audio_second_window_g

0xe20c,	// (0x0004ecea) popup_call2_audio_second_window_t1_ParamLimits

0xe20c,	// (0x0004ecea) popup_call2_audio_second_window_t1

0xe2e1,	// (0x0004edbf) popup_call2_audio_second_window_t2_ParamLimits

0xe2e1,	// (0x0004edbf) popup_call2_audio_second_window_t2

0xe334,	// (0x0004ee12) popup_call2_audio_second_window_t3_ParamLimits

0xe334,	// (0x0004ee12) popup_call2_audio_second_window_t3

0x0003,

0x032e,	// (0x00040e0c) popup_call2_audio_second_window_t_ParamLimits

0x032e,	// (0x00040e0c) popup_call2_audio_second_window_t

0xcde8,	// (0x0004d8c6) bg_popup_call2_in_pane_cp02

0xcdf2,	// (0x0004d8d0) call_type_pane_cp04

0xcdfa,	// (0x0004d8d8) popup_call2_audio_wait_window_g1

0xce02,	// (0x0004d8e0) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0004fbf9) popup_call2_audio_wait_window_g

0xce0a,	// (0x0004d8e8) popup_call2_audio_wait_window_t3

0xe427,	// (0x0004ef05) bg_popup_call2_act_pane_ParamLimits

0xe427,	// (0x0004ef05) bg_popup_call2_act_pane

0xe4e7,	// (0x0004efc5) call_type_pane_cp03_ParamLimits

0xe4e7,	// (0x0004efc5) call_type_pane_cp03

0xe54b,	// (0x0004f029) popup_call2_audio_first_window_g1_ParamLimits

0xe54b,	// (0x0004f029) popup_call2_audio_first_window_g1

0xe5bb,	// (0x0004f099) popup_call2_audio_first_window_g2_ParamLimits

0xe5bb,	// (0x0004f099) popup_call2_audio_first_window_g2

0xd987,	// (0x0004e465) popup_call2_audio_first_window_g3_ParamLimits

0xd987,	// (0x0004e465) popup_call2_audio_first_window_g3

0x0004,

0xf476,	// (0x0004ff54) popup_call2_audio_first_window_g_ParamLimits

0xf476,	// (0x0004ff54) popup_call2_audio_first_window_g

0xe699,	// (0x0004f177) popup_call2_audio_first_window_t1_ParamLimits

0xe699,	// (0x0004f177) popup_call2_audio_first_window_t1

0xe79c,	// (0x0004f27a) popup_call2_audio_first_window_t4_ParamLimits

0xe79c,	// (0x0004f27a) popup_call2_audio_first_window_t4

0xe87f,	// (0x0004f35d) popup_call2_audio_first_window_t5_ParamLimits

0xe87f,	// (0x0004f35d) popup_call2_audio_first_window_t5

0x0003,

0x0342,	// (0x00040e20) popup_call2_audio_first_window_t_ParamLimits

0x0342,	// (0x00040e20) popup_call2_audio_first_window_t

0xd03b,	// (0x0004db19) bg_popup_call2_act_pane_g1

0xeeec,	// (0x0004f9ca) popup_cale_lunar_info_window_t1

0xeefa,	// (0x0004f9d8) popup_cale_lunar_info_window_t2

0xef08,	// (0x0004f9e6) popup_cale_lunar_info_window_t3

0xcde8,	// (0x0004d8c6) bg_popup_call2_bubble_pane

0xe980,	// (0x0004f45e) bg_popup_call2_in_pane_cp01_ParamLimits

0xe980,	// (0x0004f45e) bg_popup_call2_in_pane_cp01

0xcac4,	// (0x0004d5a2) call_type_pane_cp02

0xe9c8,	// (0x0004f4a6) popup_call2_audio_out_window_g1_ParamLimits

0xe9c8,	// (0x0004f4a6) popup_call2_audio_out_window_g1

0xe9f4,	// (0x0004f4d2) popup_call2_audio_out_window_g2_ParamLimits

0xe9f4,	// (0x0004f4d2) popup_call2_audio_out_window_g2

0xea1c,	// (0x0004f4fa) popup_call2_audio_out_window_g3_ParamLimits

0xea1c,	// (0x0004f4fa) popup_call2_audio_out_window_g3

0x0003,

0x034b,	// (0x00040e29) popup_call2_audio_out_window_g_ParamLimits

0x034b,	// (0x00040e29) popup_call2_audio_out_window_g

0xea57,	// (0x0004f535) popup_call2_audio_out_window_t1_ParamLimits

0xea57,	// (0x0004f535) popup_call2_audio_out_window_t1

0xeab6,	// (0x0004f594) popup_call2_audio_out_window_t2_ParamLimits

0xeab6,	// (0x0004f594) popup_call2_audio_out_window_t2

0xeb0a,	// (0x0004f5e8) popup_call2_audio_out_window_t3_ParamLimits

0xeb0a,	// (0x0004f5e8) popup_call2_audio_out_window_t3

0xeb20,	// (0x0004f5fe) popup_call2_audio_out_window_t4_ParamLimits

0xeb20,	// (0x0004f5fe) popup_call2_audio_out_window_t4

0xeb36,	// (0x0004f614) popup_call2_audio_out_window_t5_ParamLimits

0xeb36,	// (0x0004f614) popup_call2_audio_out_window_t5

0x0005,

0x0354,	// (0x00040e32) popup_call2_audio_out_window_t_ParamLimits

0x0354,	// (0x00040e32) popup_call2_audio_out_window_t

0xeb9a,	// (0x0004f678) bg_popup_call2_in_pane_ParamLimits

0xeb9a,	// (0x0004f678) bg_popup_call2_in_pane

0xebf6,	// (0x0004f6d4) popup_call2_audio_in_window_g1_ParamLimits

0xebf6,	// (0x0004f6d4) popup_call2_audio_in_window_g1

0xec2e,	// (0x0004f70c) popup_call2_audio_in_window_g2_ParamLimits

0xec2e,	// (0x0004f70c) popup_call2_audio_in_window_g2

0xec66,	// (0x0004f744) popup_call2_audio_in_window_g3_ParamLimits

0xec66,	// (0x0004f744) popup_call2_audio_in_window_g3

0x0003,

0x0361,	// (0x00040e3f) popup_call2_audio_in_window_g_ParamLimits

0x0361,	// (0x00040e3f) popup_call2_audio_in_window_g

0xecbe,	// (0x0004f79c) popup_call2_audio_in_window_t1_ParamLimits

0xecbe,	// (0x0004f79c) popup_call2_audio_in_window_t1

0xed3e,	// (0x0004f81c) popup_call2_audio_in_window_t2_ParamLimits

0xed3e,	// (0x0004f81c) popup_call2_audio_in_window_t2

0xedbe,	// (0x0004f89c) popup_call2_audio_in_window_t3_ParamLimits

0xedbe,	// (0x0004f89c) popup_call2_audio_in_window_t3

0xedd8,	// (0x0004f8b6) popup_call2_audio_in_window_t4_ParamLimits

0xedd8,	// (0x0004f8b6) popup_call2_audio_in_window_t4

0xedea,	// (0x0004f8c8) popup_call2_audio_in_window_t5_ParamLimits

0xedea,	// (0x0004f8c8) popup_call2_audio_in_window_t5

0xedff,	// (0x0004f8dd) popup_call2_audio_in_window_t6_ParamLimits

0xedff,	// (0x0004f8dd) popup_call2_audio_in_window_t6

0x0005,

0x036a,	// (0x00040e48) popup_call2_audio_in_window_t_ParamLimits

0x036a,	// (0x00040e48) popup_call2_audio_in_window_t

0xd03b,	// (0x0004db19) bg_popup_call2_in_pane_g1

0xef16,	// (0x0004f9f4) popup_cale_lunar_info_window_t4

0x0003,

0x03d2,	// (0x00040eb0) popup_cale_lunar_info_window_t

0xd043,	// (0x0004db21) bg_popup_call2_rect_pane_ParamLimits

0xd043,	// (0x0004db21) bg_popup_call2_rect_pane

0xcde8,	// (0x0004d8c6) call2_cli_visual_graphic_pane

0xcde8,	// (0x0004d8c6) call2_cli_visual_text_pane

0xaa2a,	// (0x0004b508) smil_status_volume_pane_g3

0x0002,

0xd16f,	// (0x0004dc4d) call2_cli_visual_graphic_pane_g1

0xd16f,	// (0x0004dc4d) call2_cli_visual_graphic_pane_g2

0xd16f,	// (0x0004dc4d) call2_cli_visual_graphic_pane_g3

0x0002,

0x0377,	// (0x00040e55) call2_cli_visual_graphic_pane_g

0xee14,	// (0x0004f8f2) bg_popup_call2_rect_pane_g1

0xd1fb,	// (0x0004dcd9) bg_popup_call2_rect_pane_g2

0xee1c,	// (0x0004f8fa) bg_popup_call2_rect_pane_g3

0xee24,	// (0x0004f902) bg_popup_call2_rect_pane_g4

0xee2c,	// (0x0004f90a) bg_popup_call2_rect_pane_g5

0xee34,	// (0x0004f912) bg_popup_call2_rect_pane_g6

0xee3c,	// (0x0004f91a) bg_popup_call2_rect_pane_g7

0xee44,	// (0x0004f922) bg_popup_call2_rect_pane_g8

0xee4c,	// (0x0004f92a) bg_popup_call2_rect_pane_g9

0x0008,

0x037e,	// (0x00040e5c) bg_popup_call2_rect_pane_g

0xee54,	// (0x0004f932) bg_popup_call2_bubble_pane_g1

0xee5c,	// (0x0004f93a) bg_popup_call2_bubble_pane_g2

0xee64,	// (0x0004f942) bg_popup_call2_bubble_pane_g3

0xee6c,	// (0x0004f94a) bg_popup_call2_bubble_pane_g4

0xee74,	// (0x0004f952) bg_popup_call2_bubble_pane_g5

0xee7c,	// (0x0004f95a) bg_popup_call2_bubble_pane_g6

0xee84,	// (0x0004f962) bg_popup_call2_bubble_pane_g7

0xee8c,	// (0x0004f96a) bg_popup_call2_bubble_pane_g8

0xee94,	// (0x0004f972) bg_popup_call2_bubble_pane_g9

0x0008,

0x0391,	// (0x00040e6f) bg_popup_call2_bubble_pane_g

0x1f41,	// (0x00042a1f) aid_cale_week_size_cell_pane

0x2473,	// (0x00042f51) aid_cams_cif_uncrop_pane_ParamLimits

0x2473,	// (0x00042f51) aid_cams_cif_uncrop_pane

0x262c,	// (0x0004310a) aid_cams_size_cell_ParamLimits

0x262c,	// (0x0004310a) aid_cams_size_cell

0x2640,	// (0x0004311e) grid_cams_pane_ParamLimits

0x265a,	// (0x00043138) linegrid_cams_pane_ParamLimits

0x273f,	// (0x0004321d) call_video_pane_t1

0x275d,	// (0x0004323b) call_video_pane_t2

0x0001,

0xf284,	// (0x0004fd62) call_video_pane_t

0x2b89,	// (0x00043667) aid_cale_month_size_cell_pane_ParamLimits

0x2b89,	// (0x00043667) aid_cale_month_size_cell_pane

0xf4b1,	// (0x0004ff8f) smil_status_volume_pane_g

0xaa37,	// (0x0004b515) volume_smil_pane_ParamLimits

0xa6b6,	// (0x0004b194) aid_popup2_width_pane

0x1eb1,	// (0x0004298f) cell_qdial_pane_g4_ParamLimits

0x1eb1,	// (0x0004298f) cell_qdial_pane_g4

0x3677,	// (0x00044155) aid_blid_cardinal_pane_ParamLimits

0x3683,	// (0x00044161) aid_blid_destination_pane_ParamLimits

0x3683,	// (0x00044161) aid_blid_destination_pane

0xd043,	// (0x0004db21) bg_popup_call_poc_act_pane_ParamLimits

0xd043,	// (0x0004db21) bg_popup_call_poc_act_pane

0xd043,	// (0x0004db21) bg_popup_call_poc_inact_pane_ParamLimits

0xd043,	// (0x0004db21) bg_popup_call_poc_inact_pane

0xee9c,	// (0x0004f97a) bg_popup_call_poc_act_pane_g1

0xeea4,	// (0x0004f982) bg_popup_call_poc_act_pane_g2

0xeeac,	// (0x0004f98a) bg_popup_call_poc_act_pane_g3

0xee6c,	// (0x0004f94a) bg_popup_call_poc_act_pane_g4

0xee74,	// (0x0004f952) bg_popup_call_poc_act_pane_g5

0xeeb4,	// (0x0004f992) bg_popup_call_poc_act_pane_g6

0xee84,	// (0x0004f962) bg_popup_call_poc_act_pane_g7

0xeebc,	// (0x0004f99a) bg_popup_call_poc_act_pane_g8

0xcde8,	// (0x0004d8c6) main_usb_pane

0xf015,	// (0x0004faf3) popup_cale_lunar_info_window

0x2a35,	// (0x00043513) im_reading_pane_t1_ParamLimits

0xd3b6,	// (0x0004de94) list_im_pane_ParamLimits

0xd3c7,	// (0x0004dea5) scroll_pane_cp07_ParamLimits

0xcde8,	// (0x0004d8c6) grid_highlight_pane_cp012

0xd043,	// (0x0004db21) mup_scale_pane_ParamLimits

0xdd96,	// (0x0004e874) main_usb_pane_g1_ParamLimits

0xdd96,	// (0x0004e874) main_usb_pane_g1

0x42ae,	// (0x00044d8c) main_usb_pane_g2_ParamLimits

0x42ae,	// (0x00044d8c) main_usb_pane_g2

0x0001,

0xf481,	// (0x0004ff5f) main_usb_pane_g_ParamLimits

0xf481,	// (0x0004ff5f) main_usb_pane_g

0x42c4,	// (0x00044da2) main_usb_pane_t1_ParamLimits

0x42c4,	// (0x00044da2) main_usb_pane_t1

0x42d6,	// (0x00044db4) main_usb_pane_t2_ParamLimits

0x42d6,	// (0x00044db4) main_usb_pane_t2

0x42e8,	// (0x00044dc6) main_usb_pane_t3_ParamLimits

0x42e8,	// (0x00044dc6) main_usb_pane_t3

0x42fa,	// (0x00044dd8) main_usb_pane_t4_ParamLimits

0x42fa,	// (0x00044dd8) main_usb_pane_t4

0x430c,	// (0x00044dea) main_usb_pane_t5_ParamLimits

0x430c,	// (0x00044dea) main_usb_pane_t5

0x431e,	// (0x00044dfc) main_usb_pane_t6_ParamLimits

0x431e,	// (0x00044dfc) main_usb_pane_t6

0x0005,

0xf486,	// (0x0004ff64) main_usb_pane_t_ParamLimits

0x3626,	// (0x00044104) aid_text_placing

0x362f,	// (0x0004410d) main_location2_pane_t1_ParamLimits

0x3641,	// (0x0004411f) main_location2_pane_t2_ParamLimits

0x3653,	// (0x00044131) main_location2_pane_t3_ParamLimits

0x3665,	// (0x00044143) main_location2_pane_t4_ParamLimits

0x3665,	// (0x00044143) main_location2_pane_t4

0xf37e,	// (0x0004fe5c) main_location2_pane_t_ParamLimits

0xd07f,	// (0x0004db5d) find_pinb_pane_g2_ParamLimits

0xd07f,	// (0x0004db5d) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0004fc1f) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0004fc1f) find_pinb_pane_g

0xd08b,	// (0x0004db69) find_pinb_pane_t1_ParamLimits

0xd09d,	// (0x0004db7b) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0004fc24) find_pinb_pane_t_ParamLimits

0xcde8,	// (0x0004d8c6) main_call3_pane

0x2eed,	// (0x000439cb) cale_month_day_heading_pane_t1_ParamLimits

0x2f4b,	// (0x00043a29) cale_month_day_heading_pane_t2_ParamLimits

0x2fb0,	// (0x00043a8e) cale_month_day_heading_pane_t3_ParamLimits

0x3015,	// (0x00043af3) cale_month_day_heading_pane_t4_ParamLimits

0x307a,	// (0x00043b58) cale_month_day_heading_pane_t5_ParamLimits

0x30ef,	// (0x00043bcd) cale_month_day_heading_pane_t6_ParamLimits

0x3164,	// (0x00043c42) cale_month_day_heading_pane_t7_ParamLimits

0xf2a9,	// (0x0004fd87) cale_month_day_heading_pane_t_ParamLimits

0xd607,	// (0x0004e0e5) smil_status_volume_pane

0x3da9,	// (0x00044887) postcard_address_pane_ParamLimits

0x3da9,	// (0x00044887) postcard_address_pane

0x3dbb,	// (0x00044899) postcard_message_pane_ParamLimits

0x3dbb,	// (0x00044899) postcard_message_pane

0x428c,	// (0x00044d6a) call2_cli_visual_pane_t1_ParamLimits

0x428c,	// (0x00044d6a) call2_cli_visual_pane_t1

0x4ab0,	// (0x0004558e) postcard_message_pane_t1_ParamLimits

0x4ab0,	// (0x0004558e) postcard_message_pane_t1

0x4a99,	// (0x00045577) postcard_address_pane_t1_ParamLimits

0x4a99,	// (0x00045577) postcard_address_pane_t1

0x4a85,	// (0x00045563) popup_call3_audio_in_window_ParamLimits

0x4a85,	// (0x00045563) popup_call3_audio_in_window

0x4910,	// (0x000453ee) bg_popup_call3_in_pane_ParamLimits

0x4910,	// (0x000453ee) bg_popup_call3_in_pane

0x4986,	// (0x00045464) popup_call3_audio_in_window_g1_ParamLimits

0x4986,	// (0x00045464) popup_call3_audio_in_window_g1

0x49a6,	// (0x00045484) popup_call3_audio_in_window_g2_ParamLimits

0x49a6,	// (0x00045484) popup_call3_audio_in_window_g2

0x49c6,	// (0x000454a4) popup_call3_audio_in_window_g3_ParamLimits

0x49c6,	// (0x000454a4) popup_call3_audio_in_window_g3

0x0003,

0xf4b8,	// (0x0004ff96) popup_call3_audio_in_window_g_ParamLimits

0xf4b8,	// (0x0004ff96) popup_call3_audio_in_window_g

0x49f7,	// (0x000454d5) popup_call3_audio_in_window_t1_ParamLimits

0x49f7,	// (0x000454d5) popup_call3_audio_in_window_t1

0x4a35,	// (0x00045513) popup_call3_audio_in_window_t2_ParamLimits

0x4a35,	// (0x00045513) popup_call3_audio_in_window_t2

0x4a73,	// (0x00045551) popup_call3_audio_in_window_t3_ParamLimits

0x4a73,	// (0x00045551) popup_call3_audio_in_window_t3

0x0002,

0xf4c1,	// (0x0004ff9f) popup_call3_audio_in_window_t_ParamLimits

0xf4c1,	// (0x0004ff9f) popup_call3_audio_in_window_t

0xdbf9,	// (0x0004e6d7) bg_popup_call3_rect_pane

0xee14,	// (0x0004f8f2) bg_popup_call3_rect_pane_g1

0xd1fb,	// (0x0004dcd9) bg_popup_call3_rect_pane_g2

0xee1c,	// (0x0004f8fa) bg_popup_call3_rect_pane_g3

0xee24,	// (0x0004f902) bg_popup_call3_rect_pane_g4

0xee2c,	// (0x0004f90a) bg_popup_call3_rect_pane_g5

0xee34,	// (0x0004f912) bg_popup_call3_rect_pane_g6

0xee3c,	// (0x0004f91a) bg_popup_call3_rect_pane_g7

0x3a39,	// (0x00044517) mup_visualizer_osc_pane

0xdcb8,	// (0x0004e796) mup_visualizer_spec_pane

0x4940,	// (0x0004541e) call3_video_qcif_pane_ParamLimits

0x4940,	// (0x0004541e) call3_video_qcif_pane

0x4953,	// (0x00045431) call3_video_qcif_uncrop_pane_ParamLimits

0x4953,	// (0x00045431) call3_video_qcif_uncrop_pane

0x4961,	// (0x0004543f) call3_video_subqcif_pane_ParamLimits

0x4961,	// (0x0004543f) call3_video_subqcif_pane

0x4975,	// (0x00045453) call3_video_subqcif_uncrop_pane_ParamLimits

0x4975,	// (0x00045453) call3_video_subqcif_uncrop_pane

0x49e6,	// (0x000454c4) popup_call3_audio_in_window_g4_ParamLimits

0x49e6,	// (0x000454c4) popup_call3_audio_in_window_g4

0x48ff,	// (0x000453dd) mup_spec_half_pane

0x4908,	// (0x000453e6) mup_spec_half_pane_cp

0xf0ac,	// (0x0004fb8a) mup_osc_middle_pane

0xf0b5,	// (0x0004fb93) mup_visualizer_osc_pane_g1

0x48df,	// (0x000453bd) mup_spec_bar_pane_ParamLimits

0x48df,	// (0x000453bd) mup_spec_bar_pane

0xf099,	// (0x0004fb77) mup_spec_bar_pane_g1

0xf0a3,	// (0x0004fb81) mup_spec_bar_pane_g2

0x0001,

0x0416,	// (0x00040ef4) mup_spec_bar_pane_g

0x1f41,	// (0x00042a1f) aid_cale_week_size_cell_pane_ParamLimits

0x1f54,	// (0x00042a32) bg_cale_heading_pane_ParamLimits

0xd22f,	// (0x0004dd0d) bg_cale_pane_cp01_ParamLimits

0x1f68,	// (0x00042a46) cale_week_corner_pane_ParamLimits

0x1f7e,	// (0x00042a5c) cale_week_day_heading_pane_ParamLimits

0x1f92,	// (0x00042a70) cale_week_scroll_pane_g1_ParamLimits

0x1fa3,	// (0x00042a81) cale_week_scroll_pane_g2_ParamLimits

0x1fb4,	// (0x00042a92) cale_week_scroll_pane_g3_ParamLimits

0x1fc5,	// (0x00042aa3) cale_week_scroll_pane_g4_ParamLimits

0x1fd6,	// (0x00042ab4) cale_week_scroll_pane_g5_ParamLimits

0x1fe9,	// (0x00042ac7) cale_week_scroll_pane_g6_ParamLimits

0x1ffc,	// (0x00042ada) cale_week_scroll_pane_g7_ParamLimits

0x200f,	// (0x00042aed) cale_week_scroll_pane_g8_ParamLimits

0x2022,	// (0x00042b00) cale_week_scroll_pane_g9_ParamLimits

0x2033,	// (0x00042b11) cale_week_scroll_pane_g10_ParamLimits

0x2044,	// (0x00042b22) cale_week_scroll_pane_g11_ParamLimits

0x2055,	// (0x00042b33) cale_week_scroll_pane_g12_ParamLimits

0x2066,	// (0x00042b44) cale_week_scroll_pane_g13_ParamLimits

0x2077,	// (0x00042b55) cale_week_scroll_pane_g14_ParamLimits

0x2088,	// (0x00042b66) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0004fcb0) cale_week_scroll_pane_g_ParamLimits

0x2099,	// (0x00042b77) cale_week_time_pane_ParamLimits

0x20ac,	// (0x00042b8a) grid_cale_week_pane_ParamLimits

0xd248,	// (0x0004dd26) listscroll_cale_week_pane_t1

0x20c1,	// (0x00042b9f) scroll_pane_cp08_ParamLimits

0x2bca,	// (0x000436a8) cale_month_corner_pane_ParamLimits

0xd5dd,	// (0x0004e0bb) cale_month_pane_t1

0x2eac,	// (0x0004398a) cale_month_week_pane_ParamLimits

0x3472,	// (0x00043f50) popup_call_status_window_g1_ParamLimits

0x3486,	// (0x00043f64) popup_call_status_window_g2_ParamLimits

0x349a,	// (0x00043f78) popup_call_status_window_g3_ParamLimits

0xf319,	// (0x0004fdf7) popup_call_status_window_g_ParamLimits

0xd96f,	// (0x0004e44d) aid_call2_pane

0x0e59,	// (0x00041937) msg_header_pane_g1

0x3da9,	// (0x00044887) postcard_address2_pane_ParamLimits

0x3da9,	// (0x00044887) postcard_address2_pane

0x3dbb,	// (0x00044899) postcard_message2_pane_ParamLimits

0x3dbb,	// (0x00044899) postcard_message2_pane

0x4891,	// (0x0004536f) message2_row_pane_ParamLimits

0x4891,	// (0x0004536f) message2_row_pane

0x48ad,	// (0x0004538b) address2_row_pane_ParamLimits

0x48ad,	// (0x0004538b) address2_row_pane

0xf067,	// (0x0004fb45) postcard_message2_row_pane_g1

0xf06f,	// (0x0004fb4d) postcard_message2_row_pane_t1

0xf067,	// (0x0004fb45) address2_row_pane_g1

0xf06f,	// (0x0004fb4d) address2_row_pane_t1

0x236f,	// (0x00042e4d) aid_size_cell_vorec

0xcde8,	// (0x0004d8c6) main_rss_pane

0x48c0,	// (0x0004539e) rss_list_single_pane_ParamLimits

0x48c0,	// (0x0004539e) rss_list_single_pane

0xf07d,	// (0x0004fb5b) rss_list_single_pane_t1

0xf08b,	// (0x0004fb69) rss_list_single_pane_t2

0x0001,

0x0411,	// (0x00040eef) rss_list_single_pane_t

0xcde8,	// (0x0004d8c6) main_camera2_pane

0xcde8,	// (0x0004d8c6) main_video2_pane

0x4b29,	// (0x00045607) cams_zoom_pane_cp2_ParamLimits

0x4b29,	// (0x00045607) cams_zoom_pane_cp2

0x4b49,	// (0x00045627) image2_vga_pane_ParamLimits

0x4b49,	// (0x00045627) image2_vga_pane

0x4b9a,	// (0x00045678) main_camera2_pane_g1_ParamLimits

0x4b9a,	// (0x00045678) main_camera2_pane_g1

0x4bba,	// (0x00045698) main_camera2_pane_g2_ParamLimits

0x4bba,	// (0x00045698) main_camera2_pane_g2

0x4bda,	// (0x000456b8) main_camera2_pane_g3_ParamLimits

0x4bda,	// (0x000456b8) main_camera2_pane_g3

0x4bfa,	// (0x000456d8) main_camera2_pane_g4_ParamLimits

0x4bfa,	// (0x000456d8) main_camera2_pane_g4

0x4c1a,	// (0x000456f8) main_camera2_pane_g5_ParamLimits

0x4c1a,	// (0x000456f8) main_camera2_pane_g5

0x4c3a,	// (0x00045718) main_camera2_pane_g6_ParamLimits

0x4c3a,	// (0x00045718) main_camera2_pane_g6

0x4c5a,	// (0x00045738) main_camera2_pane_g7_ParamLimits

0x4c5a,	// (0x00045738) main_camera2_pane_g7

0x4c7a,	// (0x00045758) main_camera2_pane_g8_ParamLimits

0x4c7a,	// (0x00045758) main_camera2_pane_g8

0x0008,

0xf4c8,	// (0x0004ffa6) main_camera2_pane_g_ParamLimits

0xf4c8,	// (0x0004ffa6) main_camera2_pane_g

0x4cba,	// (0x00045798) main_camera2_pane_t1_ParamLimits

0x4cba,	// (0x00045798) main_camera2_pane_t1

0x4cef,	// (0x000457cd) main_camera2_pane_t2_ParamLimits

0x4cef,	// (0x000457cd) main_camera2_pane_t2

0x4d15,	// (0x000457f3) main_camera2_pane_t3_ParamLimits

0x4d15,	// (0x000457f3) main_camera2_pane_t3

0x4d73,	// (0x00045851) main_camera2_pane_t4_ParamLimits

0x4d73,	// (0x00045851) main_camera2_pane_t4

0x0006,

0xf4db,	// (0x0004ffb9) main_camera2_pane_t_ParamLimits

0xf4db,	// (0x0004ffb9) main_camera2_pane_t

0x4e05,	// (0x000458e3) cams_zoom_pane_cp4_ParamLimits

0x4e05,	// (0x000458e3) cams_zoom_pane_cp4

0x4e1b,	// (0x000458f9) image2_cif_pane_ParamLimits

0x4e1b,	// (0x000458f9) image2_cif_pane

0x4e46,	// (0x00045924) image2_subqcif_pane_ParamLimits

0x4e46,	// (0x00045924) image2_subqcif_pane

0x4e60,	// (0x0004593e) main_video2_pane_g1_ParamLimits

0x4e60,	// (0x0004593e) main_video2_pane_g1

0x4e7a,	// (0x00045958) main_video2_pane_g2_ParamLimits

0x4e7a,	// (0x00045958) main_video2_pane_g2

0x4e90,	// (0x0004596e) main_video2_pane_g3_ParamLimits

0x4e90,	// (0x0004596e) main_video2_pane_g3

0x4ea6,	// (0x00045984) main_video2_pane_g4_ParamLimits

0x4ea6,	// (0x00045984) main_video2_pane_g4

0x4ebc,	// (0x0004599a) main_video2_pane_g5_ParamLimits

0x4ebc,	// (0x0004599a) main_video2_pane_g5

0x4ed2,	// (0x000459b0) main_video2_pane_g6_ParamLimits

0x4ed2,	// (0x000459b0) main_video2_pane_g6

0x0005,

0xf4ea,	// (0x0004ffc8) main_video2_pane_g_ParamLimits

0xf4ea,	// (0x0004ffc8) main_video2_pane_g

0x4eec,	// (0x000459ca) main_video2_pane_t1_ParamLimits

0x4eec,	// (0x000459ca) main_video2_pane_t1

0x4f10,	// (0x000459ee) main_video2_pane_t2_ParamLimits

0x4f10,	// (0x000459ee) main_video2_pane_t2

0x4f5e,	// (0x00045a3c) main_video2_pane_t3_ParamLimits

0x4f5e,	// (0x00045a3c) main_video2_pane_t3

0x0002,

0xf4f7,	// (0x0004ffd5) main_video2_pane_t_ParamLimits

0xf4f7,	// (0x0004ffd5) main_video2_pane_t

0x43d9,	// (0x00044eb7) call_muted_g2

0x0001,

0xf4ac,	// (0x0004ff8a) call_muted_g

0xcde8,	// (0x0004d8c6) main_mup2_pane

0x4fa2,	// (0x00045a80) main_mup2_pane_g1_ParamLimits

0x4fa2,	// (0x00045a80) main_mup2_pane_g1

0x4fae,	// (0x00045a8c) main_mup2_pane_g2_ParamLimits

0x4fae,	// (0x00045a8c) main_mup2_pane_g2

0xaaa5,	// (0x0004b583) main_mup_pane_g13_cp1

0xaaad,	// (0x0004b58b) mup_volume_pane_cp1

0x4fca,	// (0x00045aa8) main_mup2_pane_g4_ParamLimits

0x4fca,	// (0x00045aa8) main_mup2_pane_g4

0x4fdc,	// (0x00045aba) main_mup2_pane_g5_ParamLimits

0x4fdc,	// (0x00045aba) main_mup2_pane_g5

0x4fee,	// (0x00045acc) main_mup2_pane_g6_ParamLimits

0x4fee,	// (0x00045acc) main_mup2_pane_g6

0x5000,	// (0x00045ade) main_mup2_pane_g7_ParamLimits

0x5000,	// (0x00045ade) main_mup2_pane_g7

0x0006,

0xf4fe,	// (0x0004ffdc) main_mup2_pane_g_ParamLimits

0xf4fe,	// (0x0004ffdc) main_mup2_pane_g

0x5018,	// (0x00045af6) main_mup2_pane_t1_ParamLimits

0x5018,	// (0x00045af6) main_mup2_pane_t1

0x502e,	// (0x00045b0c) main_mup2_pane_t2_ParamLimits

0x502e,	// (0x00045b0c) main_mup2_pane_t2

0x5044,	// (0x00045b22) main_mup2_pane_t3_ParamLimits

0x5044,	// (0x00045b22) main_mup2_pane_t3

0x505a,	// (0x00045b38) main_mup2_pane_t4_ParamLimits

0x505a,	// (0x00045b38) main_mup2_pane_t4

0x5072,	// (0x00045b50) main_mup2_pane_t5_ParamLimits

0x5072,	// (0x00045b50) main_mup2_pane_t5

0x508a,	// (0x00045b68) main_mup2_pane_t6_ParamLimits

0x508a,	// (0x00045b68) main_mup2_pane_t6

0x0005,

0xf50d,	// (0x0004ffeb) main_mup2_pane_t_ParamLimits

0xf50d,	// (0x0004ffeb) main_mup2_pane_t

0x50ba,	// (0x00045b98) mup2_visualizer_pane_ParamLimits

0x50ba,	// (0x00045b98) mup2_visualizer_pane

0x50e8,	// (0x00045bc6) mup_progress_pane_cp_ParamLimits

0x50e8,	// (0x00045bc6) mup_progress_pane_cp

0xaa90,	// (0x0004b56e) mup_volume_pane_cp_ParamLimits

0xaa90,	// (0x0004b56e) mup_volume_pane_cp

0x50fc,	// (0x00045bda) mup2_visualizer_pane_g1_ParamLimits

0x50fc,	// (0x00045bda) mup2_visualizer_pane_g1

0x5113,	// (0x00045bf1) mup2_visualizer_pane_g2_ParamLimits

0x5113,	// (0x00045bf1) mup2_visualizer_pane_g2

0x511f,	// (0x00045bfd) mup2_visualizer_pane_g3_ParamLimits

0x511f,	// (0x00045bfd) mup2_visualizer_pane_g3

0x0002,

0xf51a,	// (0x0004fff8) mup2_visualizer_pane_g_ParamLimits

0xf51a,	// (0x0004fff8) mup2_visualizer_pane_g

0xdedf,	// (0x0004e9bd) aid_size_cell_fmradio

0x458b,	// (0x00045069) aid_height_parent_landcape

0xd445,	// (0x0004df23) wml_content_pane_cp

0xd44d,	// (0x0004df2b) wml_tabs_pane

0xd456,	// (0x0004df34) popup_wml_miniature_window

0xd45e,	// (0x0004df3c) scroll_pane_cp021

0xd472,	// (0x0004df50) wml_content_pane_comp8

0xcde8,	// (0x0004d8c6) bg_popup_sub_pane_cp05

0x513d,	// (0x00045c1b) popup_wml_miniature_window_g1

0x5145,	// (0x00045c23) wml_miniature_view_pane

0x514d,	// (0x00045c2b) aid_size_wml_view

0x5155,	// (0x00045c33) wml_miniature_view_pane_g1

0x515e,	// (0x00045c3c) wml_miniature_view_pane_g2

0x5167,	// (0x00045c45) wml_miniature_view_pane_g3

0x516f,	// (0x00045c4d) wml_miniature_view_pane_g4

0x5177,	// (0x00045c55) wml_miniature_view_pane_g5

0x517f,	// (0x00045c5d) wml_miniature_view_pane_g6

0x5187,	// (0x00045c65) wml_miniature_view_pane_g7

0x518f,	// (0x00045c6d) wml_miniature_view_pane_g8

0x0007,

0xf521,	// (0x0004ffff) wml_miniature_view_pane_g

0x5197,	// (0x00045c75) background_graphic_ParamLimits

0x5197,	// (0x00045c75) background_graphic

0x51a3,	// (0x00045c81) wml_tabs_2_pane

0x51ac,	// (0x00045c8a) wml_tabs_3_pane_ParamLimits

0x51ac,	// (0x00045c8a) wml_tabs_3_pane

0x51be,	// (0x00045c9c) wml_tabs_4_pane_ParamLimits

0x51be,	// (0x00045c9c) wml_tabs_4_pane

0x51d4,	// (0x00045cb2) wml_tabs_5_pane_ParamLimits

0x51d4,	// (0x00045cb2) wml_tabs_5_pane

0x51ee,	// (0x00045ccc) wml_tabs_pane_g2_ParamLimits

0x51ee,	// (0x00045ccc) wml_tabs_pane_g2

0x5202,	// (0x00045ce0) wml_tabs_pane_g3_ParamLimits

0x5202,	// (0x00045ce0) wml_tabs_pane_g3

0x5216,	// (0x00045cf4) wml_tabs_2_active_pane_ParamLimits

0x5216,	// (0x00045cf4) wml_tabs_2_active_pane

0x522a,	// (0x00045d08) wml_tabs_2_passive_pane_ParamLimits

0x522a,	// (0x00045d08) wml_tabs_2_passive_pane

0x523e,	// (0x00045d1c) wml_tabs_3_active_pane_cp_ParamLimits

0x523e,	// (0x00045d1c) wml_tabs_3_active_pane_cp

0x5253,	// (0x00045d31) wml_tabs_3_passive_pane_ParamLimits

0x5253,	// (0x00045d31) wml_tabs_3_passive_pane

0x5266,	// (0x00045d44) wml_tabs_3_passive_pane_cp_ParamLimits

0x5266,	// (0x00045d44) wml_tabs_3_passive_pane_cp

0x527d,	// (0x00045d5b) tabs_4_active_pane

0x5285,	// (0x00045d63) tabs_4_passive_pane

0x528f,	// (0x00045d6d) tabs_4_passive_pane_cp

0x5297,	// (0x00045d75) tabs_4_passive_pane_cp2

0x42a6,	// (0x00044d84) aid_height_text

0x3a0f,	// (0x000444ed) mup_volume_cont_pane_ParamLimits

0x3a0f,	// (0x000444ed) mup_volume_cont_pane

0x1b50,	// (0x0004262e) aid_size_cell_pinb

0x1b5a,	// (0x00042638) aid_size_list_pinb

0x50d4,	// (0x00045bb2) mup2_volume_cont_pane_ParamLimits

0x50d4,	// (0x00045bb2) mup2_volume_cont_pane

0xaa7c,	// (0x0004b55a) mup2_volume_cont_pane_g1_ParamLimits

0xaa7c,	// (0x0004b55a) mup2_volume_cont_pane_g1

0x1832,	// (0x00042310) aid_size_cell_touch_ParamLimits

0x1832,	// (0x00042310) aid_size_cell_touch

0x1a40,	// (0x0004251e) touch_pane_ParamLimits

0x1a40,	// (0x0004251e) touch_pane

0xa6a4,	// (0x0004b182) main_rss2_pane

0x52aa,	// (0x00045d88) listscroll_rss2_pane

0x52b3,	// (0x00045d91) rss2_navigation_pane

0x52bb,	// (0x00045d99) list_rss2_pane

0xdab0,	// (0x0004e58e) scroll_pane_cp22

0x52c3,	// (0x00045da1) rss2_navigation_pane_g1

0x52cc,	// (0x00045daa) rss2_navigation_pane_g2

0x52d4,	// (0x00045db2) rss2_navigation_pane_g3

0x0002,

0xf532,	// (0x00050010) rss2_navigation_pane_g

0x52dc,	// (0x00045dba) rss2_navigation_pane_t1

0x52ea,	// (0x00045dc8) rss2_list_single_pane_ParamLimits

0x52ea,	// (0x00045dc8) rss2_list_single_pane

0x52ff,	// (0x00045ddd) rss2_list_single_pane_t2

0x530d,	// (0x00045deb) rss2_list_single_pane_t3_ParamLimits

0x530d,	// (0x00045deb) rss2_list_single_pane_t3

0x532a,	// (0x00045e08) rss2_list_single_pane_t4

0x335e,	// (0x00043e3c) smil_status_pane_g1

0xe2c7,	// (0x0004eda5) main_image2_pane_ParamLimits

0xe2c7,	// (0x0004eda5) main_image2_pane

0x4c9a,	// (0x00045778) main_camera2_pane_g9_ParamLimits

0x4c9a,	// (0x00045778) main_camera2_pane_g9

0x4dc8,	// (0x000458a6) main_camera2_pane_t5_ParamLimits

0x4dc8,	// (0x000458a6) main_camera2_pane_t5

0xaa4c,	// (0x0004b52a) main_camera2_pane_t6_ParamLimits

0xaa4c,	// (0x0004b52a) main_camera2_pane_t6

0x5338,	// (0x00045e16) main_image2_pane_g1_ParamLimits

0x5338,	// (0x00045e16) main_image2_pane_g1

0x3fe2,	// (0x00044ac0) smil2_video_pane_ParamLimits

0x3fe2,	// (0x00044ac0) smil2_video_pane

0xa6d2,	// (0x0004b1b0) aid_zoom_text_primary_cp

0xc8c9,	// (0x0004d3a7) popup_preview_fixed_window

0xd3ae,	// (0x0004de8c) im_reading_pane_g1

0x4b11,	// (0x000455ef) cams2_bc_adjust_pane_cp_ParamLimits

0x4b11,	// (0x000455ef) cams2_bc_adjust_pane_cp

0x4df7,	// (0x000458d5) cams2_bc_adjust_pane_ParamLimits

0x4df7,	// (0x000458d5) cams2_bc_adjust_pane

0xaab5,	// (0x0004b593) cams2_bc_adjust_pane_g1

0xaabd,	// (0x0004b59b) cams2_slider_pane

0xaac6,	// (0x0004b5a4) cams2_slider_pane_g1

0xaacf,	// (0x0004b5ad) cams2_slider_pane_g2

0x0006,

0xf539,	// (0x00050017) cams2_slider_pane_g

0x1c3c,	// (0x0004271a) calc_display_pane_ParamLimits

0x1c64,	// (0x00042742) calc_paper_pane_ParamLimits

0x1c87,	// (0x00042765) grid_calc_pane_ParamLimits

0xa9b9,	// (0x0004b497) popup_clock_digital_window_t1_ParamLimits

0xde7c,	// (0x0004e95a) main_image_pane_t1

0x1c1e,	// (0x000426fc) aid_size_cell_calc_ParamLimits

0x1c1e,	// (0x000426fc) aid_size_cell_calc

0x45d1,	// (0x000450af) popup_blid_sat_info2_window_ParamLimits

0x45d1,	// (0x000450af) popup_blid_sat_info2_window

0x5356,	// (0x00045e34) aid_size_cell_blid

0x535e,	// (0x00045e3c) bg_popup_window_pane_cp07

0x5381,	// (0x00045e5f) grid_popup_blid_pane

0x538b,	// (0x00045e69) heading_pane_cp05_ParamLimits

0x538b,	// (0x00045e69) heading_pane_cp05

0x5455,	// (0x00045f33) cell_popup_blid_pane_ParamLimits

0x5455,	// (0x00045f33) cell_popup_blid_pane

0x5479,	// (0x00045f57) cell_popup_blid_pane_g1

0x5481,	// (0x00045f5f) cell_popup_blid_pane_t1

0x50a4,	// (0x00045b82) mup2_indicator_pane_ParamLimits

0x50a4,	// (0x00045b82) mup2_indicator_pane

0xdbf9,	// (0x0004e6d7) mup2_visualizer_osc_pane

0x512b,	// (0x00045c09) mup2_visualizer_spec_pane_ParamLimits

0x512b,	// (0x00045c09) mup2_visualizer_spec_pane

0x548f,	// (0x00045f6d) mup2_spec_half_pane

0x5498,	// (0x00045f76) mup2_spec_half_pane_cp

0x54a0,	// (0x00045f7e) mup2_spec_bar_pane_ParamLimits

0x54a0,	// (0x00045f7e) mup2_spec_bar_pane

0xf099,	// (0x0004fb77) mup2_spec_bar_pane_g1

0xf0a3,	// (0x0004fb81) mup2_spec_bar_pane_g2

0x0001,

0x0416,	// (0x00040ef4) mup2_spec_bar_pane_g

0x54c0,	// (0x00045f9e) mup2_osc_middle_pane

0xf0b5,	// (0x0004fb93) mup2_visualizer_osc_pane_g1

0xc9f5,	// (0x0004d4d3) popup_number_entry_window_t1_ParamLimits

0xca08,	// (0x0004d4e6) popup_number_entry_window_t2_ParamLimits

0xca1a,	// (0x0004d4f8) popup_number_entry_window_t3_ParamLimits

0x1a92,	// (0x00042570) popup_number_entry_window_t5_ParamLimits

0x1a92,	// (0x00042570) popup_number_entry_window_t5

0xf0ec,	// (0x0004fbca) popup_number_entry_window_t_ParamLimits

0xca2c,	// (0x0004d50a) text_title_cp2_ParamLimits

0xa9f8,	// (0x0004b4d6) aid_hotspot_pointer_text2_pane

0xaa1e,	// (0x0004b4fc) main_viewer_pane_g9_ParamLimits

0xaa1e,	// (0x0004b4fc) main_viewer_pane_g9

0xd5dd,	// (0x0004e0bb) cale_month_pane_t1_ParamLimits

0xd61a,	// (0x0004e0f8) bg_cale_pane_ParamLimits

0xd632,	// (0x0004e110) list_cale_pane_ParamLimits

0xd248,	// (0x0004dd26) listscroll_cale_day_pane_t1

0xd643,	// (0x0004e121) scroll_pane_cp09_ParamLimits

0x3a41,	// (0x0004451f) main_mup_eq_pane_t1_ParamLimits

0x3a41,	// (0x0004451f) main_mup_eq_pane_t1

0x3a5b,	// (0x00044539) main_mup_eq_pane_t2_ParamLimits

0x3a5b,	// (0x00044539) main_mup_eq_pane_t2

0x3a75,	// (0x00044553) main_mup_eq_pane_t3_ParamLimits

0x3a75,	// (0x00044553) main_mup_eq_pane_t3

0x3a91,	// (0x0004456f) main_mup_eq_pane_t4_ParamLimits

0x3a91,	// (0x0004456f) main_mup_eq_pane_t4

0x3aad,	// (0x0004458b) main_mup_eq_pane_t5_ParamLimits

0x3aad,	// (0x0004458b) main_mup_eq_pane_t5

0x3ac9,	// (0x000445a7) main_mup_eq_pane_t6_ParamLimits

0x3ac9,	// (0x000445a7) main_mup_eq_pane_t6

0x3add,	// (0x000445bb) main_mup_eq_pane_t7_ParamLimits

0x3add,	// (0x000445bb) main_mup_eq_pane_t7

0x3af1,	// (0x000445cf) main_mup_eq_pane_t8_ParamLimits

0x3af1,	// (0x000445cf) main_mup_eq_pane_t8

0x3b05,	// (0x000445e3) main_mup_eq_pane_t9_ParamLimits

0x3b05,	// (0x000445e3) main_mup_eq_pane_t9

0x3b1f,	// (0x000445fd) main_mup_eq_pane_t10_ParamLimits

0x3b1f,	// (0x000445fd) main_mup_eq_pane_t10

0x0009,

0xf3de,	// (0x0004febc) main_mup_eq_pane_t_ParamLimits

0xf3de,	// (0x0004febc) main_mup_eq_pane_t

0x3bce,	// (0x000446ac) mup_equalizer_pane_cp5_ParamLimits

0x3be2,	// (0x000446c0) mup_equalizer_pane_cp6_ParamLimits

0x3bf6,	// (0x000446d4) mup_equalizer_pane_cp7_ParamLimits

0xa6a4,	// (0x0004b182) main_gallery_pane

0xf0be,	// (0x0004fb9c) smil2_volume_pane

0xf0c6,	// (0x0004fba4) smil_status_volume_pane_g1_ParamLimits

0xf0d9,	// (0x0004fbb7) smil_status_volume_pane_g2_ParamLimits

0xaa2a,	// (0x0004b508) smil_status_volume_pane_g3_ParamLimits

0xf4b1,	// (0x0004ff8f) smil_status_volume_pane_g_ParamLimits

0x535e,	// (0x00045e3c) bg_popup_window_pane_cp07_ParamLimits

0x536c,	// (0x00045e4a) blid_firmament_pane

0x54c9,	// (0x00045fa7) aid_size_cell_gallery_ParamLimits

0x54c9,	// (0x00045fa7) aid_size_cell_gallery

0x54df,	// (0x00045fbd) grid_gallery_pane_ParamLimits

0x54df,	// (0x00045fbd) grid_gallery_pane

0x54f8,	// (0x00045fd6) cell_gallery_pane_ParamLimits

0x54f8,	// (0x00045fd6) cell_gallery_pane

0x5541,	// (0x0004601f) bg_cell_gallery_focus_pane_ParamLimits

0x5541,	// (0x0004601f) bg_cell_gallery_focus_pane

0x5553,	// (0x00046031) cell_gallery_pane_g1_ParamLimits

0x5553,	// (0x00046031) cell_gallery_pane_g1

0x555f,	// (0x0004603d) cell_gallery_pane_g2_ParamLimits

0x555f,	// (0x0004603d) cell_gallery_pane_g2

0x556c,	// (0x0004604a) cell_gallery_pane_g3_ParamLimits

0x556c,	// (0x0004604a) cell_gallery_pane_g3

0x5579,	// (0x00046057) cell_gallery_pane_g4_ParamLimits

0x5579,	// (0x00046057) cell_gallery_pane_g4

0x0003,

0xf55f,	// (0x0005003d) cell_gallery_pane_g_ParamLimits

0xf55f,	// (0x0005003d) cell_gallery_pane_g

0x5585,	// (0x00046063) bg_cell_gallery_focus_pane_g1

0x558d,	// (0x0004606b) bg_cell_gallery_focus_pane_g2

0x5595,	// (0x00046073) bg_cell_gallery_focus_pane_g3

0x559d,	// (0x0004607b) bg_cell_gallery_focus_pane_g4

0x55a5,	// (0x00046083) bg_cell_gallery_focus_pane_g5

0x55ad,	// (0x0004608b) bg_cell_gallery_focus_pane_g6

0x55b5,	// (0x00046093) bg_cell_gallery_focus_pane_g7

0x55bd,	// (0x0004609b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf568,	// (0x00050046) bg_cell_gallery_focus_pane_g

0x55c5,	// (0x000460a3) aid_firma_cardinal

0x55d9,	// (0x000460b7) blid_firmament_pane_t1

0x55f0,	// (0x000460ce) blid_firmament_pane_t2

0x5607,	// (0x000460e5) blid_firmament_pane_t3

0x561e,	// (0x000460fc) blid_firmament_pane_t4

0x0003,

0xf579,	// (0x00050057) blid_firmament_pane_t

0x5635,	// (0x00046113) blid_sat_info_pane

0x5645,	// (0x00046123) blid_sat_info_pane_g1

0x5645,	// (0x00046123) blid_sat_info_pane_g2

0x0001,

0xf582,	// (0x00050060) blid_sat_info_pane_g

0x564f,	// (0x0004612d) blid_sat_info_pane_t1

0x565d,	// (0x0004613b) smil2_volume_content_pane

0x5666,	// (0x00046144) smil2_volume_pane_g1

0x566e,	// (0x0004614c) smil2_volume_content_pane_g1

0x5677,	// (0x00046155) smil2_volume_content_pane_g2

0x5680,	// (0x0004615e) smil2_volume_content_pane_g3

0x5689,	// (0x00046167) smil2_volume_content_pane_g4

0x5692,	// (0x00046170) smil2_volume_content_pane_g5

0x569b,	// (0x00046179) smil2_volume_content_pane_g6

0x56a4,	// (0x00046182) smil2_volume_content_pane_g7

0x56ad,	// (0x0004618b) smil2_volume_content_pane_g8

0x56b6,	// (0x00046194) smil2_volume_content_pane_g9

0x56bf,	// (0x0004619d) smil2_volume_content_pane_g10

0x0009,

0xf587,	// (0x00050065) smil2_volume_content_pane_g

0x211b,	// (0x00042bf9) cale_week_day_heading_pane_t1_ParamLimits

0x2148,	// (0x00042c26) cale_week_day_heading_pane_t2_ParamLimits

0x2175,	// (0x00042c53) cale_week_day_heading_pane_t3_ParamLimits

0x21a2,	// (0x00042c80) cale_week_day_heading_pane_t4_ParamLimits

0x21cf,	// (0x00042cad) cale_week_day_heading_pane_t5_ParamLimits

0x21fc,	// (0x00042cda) cale_week_day_heading_pane_t6_ParamLimits

0x222b,	// (0x00042d09) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0004fccf) cale_week_day_heading_pane_t_ParamLimits

0xd25a,	// (0x0004dd38) bg_cale_side_pane_ParamLimits

0x2258,	// (0x00042d36) cale_week_time_pane_t1_ParamLimits

0x2270,	// (0x00042d4e) cale_week_time_pane_t2_ParamLimits

0x2288,	// (0x00042d66) cale_week_time_pane_t3_ParamLimits

0x22a0,	// (0x00042d7e) cale_week_time_pane_t4_ParamLimits

0x22b8,	// (0x00042d96) cale_week_time_pane_t5_ParamLimits

0x22d0,	// (0x00042dae) cale_week_time_pane_t6_ParamLimits

0x22e8,	// (0x00042dc6) cale_week_time_pane_t7_ParamLimits

0x2300,	// (0x00042dde) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0004fcde) cale_week_time_pane_t_ParamLimits

0x2318,	// (0x00042df6) cell_cale_week_pane_g2_ParamLimits

0xd25a,	// (0x0004dd38) bg_cale_side_pane_cp01_ParamLimits

0x31d9,	// (0x00043cb7) cale_month_week_pane_t1_ParamLimits

0x31f0,	// (0x00043cce) cale_month_week_pane_t2_ParamLimits

0x3207,	// (0x00043ce5) cale_month_week_pane_t3_ParamLimits

0x321e,	// (0x00043cfc) cale_month_week_pane_t4_ParamLimits

0x3235,	// (0x00043d13) cale_month_week_pane_t5_ParamLimits

0x324c,	// (0x00043d2a) cale_month_week_pane_t6_ParamLimits

0xf2b8,	// (0x0004fd96) cale_month_week_pane_t_ParamLimits

0xa8c0,	// (0x0004b39e) cell_cale_month_pane_g1_ParamLimits

0xa6a4,	// (0x0004b182) main_cale_event_viewer_pane

0xa6a4,	// (0x0004b182) listscroll_cale_event_viewer_pane

0x56c8,	// (0x000461a6) list_cale_ev_pane

0x56d0,	// (0x000461ae) scroll_pane_cp023

0x56dc,	// (0x000461ba) field_cale_ev_pane_ParamLimits

0x56dc,	// (0x000461ba) field_cale_ev_pane

0x56fa,	// (0x000461d8) field_cale_ev_content_pane_ParamLimits

0x56fa,	// (0x000461d8) field_cale_ev_content_pane

0x5706,	// (0x000461e4) field_cale_ev_pane_g1_ParamLimits

0x5706,	// (0x000461e4) field_cale_ev_pane_g1

0x5712,	// (0x000461f0) field_cale_ev_pane_g2_ParamLimits

0x5712,	// (0x000461f0) field_cale_ev_pane_g2

0x572a,	// (0x00046208) field_cale_ev_pane_g3_ParamLimits

0x572a,	// (0x00046208) field_cale_ev_pane_g3

0x0002,

0xf59c,	// (0x0005007a) field_cale_ev_pane_g_ParamLimits

0xf59c,	// (0x0005007a) field_cale_ev_pane_g

0x5742,	// (0x00046220) field_cale_ev_pane_t1_ParamLimits

0x5742,	// (0x00046220) field_cale_ev_pane_t1

0x5759,	// (0x00046237) field_cale_ev_content_pane_t1_ParamLimits

0x5759,	// (0x00046237) field_cale_ev_content_pane_t1

0xdd62,	// (0x0004e840) bg_button_pane_cp01

0xd11a,	// (0x0004dbf8) listscroll_cale_week_pane_ParamLimits

0x1f37,	// (0x00042a15) popup_toolbar_window_cp01

0xd248,	// (0x0004dd26) listscroll_cale_week_pane_t1_ParamLimits

0xd11a,	// (0x0004dbf8) listscroll_cale_day_pane_ParamLimits

0x33af,	// (0x00043e8d) popup_toolbar_window_cp02

0xd248,	// (0x0004dd26) listscroll_cale_day_pane_t1_ParamLimits

0xd11a,	// (0x0004dbf8) main_cale_month_pane_ParamLimits

0x4805,	// (0x000452e3) popup_toolbar_window_cp03_ParamLimits

0x4805,	// (0x000452e3) popup_toolbar_window_cp03

0x3eaa,	// (0x00044988) main_image_pane_g2_ParamLimits

0x3eaa,	// (0x00044988) main_image_pane_g2

0x3ebb,	// (0x00044999) main_image_pane_g3_ParamLimits

0x3ebb,	// (0x00044999) main_image_pane_g3

0x0002,

0xf466,	// (0x0004ff44) main_image_pane_g_ParamLimits

0xf466,	// (0x0004ff44) main_image_pane_g

0xde7c,	// (0x0004e95a) main_image_pane_t1_ParamLimits

0x3ecc,	// (0x000449aa) main_image_pane_t2_ParamLimits

0x3ecc,	// (0x000449aa) main_image_pane_t2

0x3ede,	// (0x000449bc) main_image_pane_t3_ParamLimits

0x3ede,	// (0x000449bc) main_image_pane_t3

0x3f06,	// (0x000449e4) main_image_pane_t4_ParamLimits

0x3f06,	// (0x000449e4) main_image_pane_t4

0x0003,

0xf46d,	// (0x0004ff4b) main_image_pane_t_ParamLimits

0xf46d,	// (0x0004ff4b) main_image_pane_t

0x3f26,	// (0x00044a04) popup_image_details_window_cp01

0x3f30,	// (0x00044a0e) popup_toobar_trans_pane_cp01_ParamLimits

0x3f30,	// (0x00044a0e) popup_toobar_trans_pane_cp01

0x46b0,	// (0x0004518e) popup_image_details_window_ParamLimits

0x46b0,	// (0x0004518e) popup_image_details_window

0xf01f,	// (0x0004fafd) popup_image_focus_window

0x4acb,	// (0x000455a9) camera2_autofocus_pane_ParamLimits

0x4acb,	// (0x000455a9) camera2_autofocus_pane

0xa6a4,	// (0x0004b182) bg_popup_sub_pane_cp06

0x5777,	// (0x00046255) popup_image_focus_window_g1

0x577f,	// (0x0004625d) popup_image_focus_window_g2

0x5787,	// (0x00046265) popup_image_focus_window_g3

0x578f,	// (0x0004626d) popup_image_focus_window_g4

0x0003,

0xf5a3,	// (0x00050081) popup_image_focus_window_g

0x5797,	// (0x00046275) popup_image_focus_window_t1

0x57a5,	// (0x00046283) popup_image_focus_window_t2

0x57b5,	// (0x00046293) popup_image_focus_window_t3

0x0002,

0xf5ac,	// (0x0005008a) popup_image_focus_window_t

0x57c3,	// (0x000462a1) camera2_autofocus_pane_g1

0xe2c7,	// (0x0004eda5) bg_tb_trans_pane_cp01

0x5801,	// (0x000462df) popup_image_details_window_g1

0x5814,	// (0x000462f2) popup_image_details_window_g2

0x0002,

0xf5be,	// (0x0005009c) popup_image_details_window_g

0x583d,	// (0x0004631b) popup_image_details_window_t1

0x584f,	// (0x0004632d) popup_image_details_window_t2

0x5868,	// (0x00046346) popup_image_details_window_t3

0x587c,	// (0x0004635a) popup_image_details_window_t4

0x5897,	// (0x00046375) popup_image_details_window_t5

0x0004,

0xf5c5,	// (0x000500a3) popup_image_details_window_t

0xd106,	// (0x0004dbe4) bg_calc_paper_pane_ParamLimits

0xa6a4,	// (0x0004b182) grid_highlight_pane_cp013

0xa706,	// (0x0004b1e4) list_calc_pane_ParamLimits

0xa718,	// (0x0004b1f6) scroll_pane_cp024

0xd11a,	// (0x0004dbf8) bg_calc_display_pane_ParamLimits

0x1d78,	// (0x00042856) calc_display_pane_t1_ParamLimits

0x1d8a,	// (0x00042868) calc_display_pane_t2_ParamLimits

0xa720,	// (0x0004b1fe) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0004fc51) calc_display_pane_t_ParamLimits

0x1e42,	// (0x00042920) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0004fc6e) cell_calc_pane_g

0x1e4b,	// (0x00042929) cell_calc_pane_t1

0xd179,	// (0x0004dc57) grid_highlight_pane_cp02_ParamLimits

0xd18f,	// (0x0004dc6d) toolbar_button_pane_cp01_ParamLimits

0xd18f,	// (0x0004dc6d) toolbar_button_pane_cp01

0xdec1,	// (0x0004e99f) temp_image_control_pane_ParamLimits

0xdec1,	// (0x0004e99f) temp_image_control_pane

0xe2c7,	// (0x0004eda5) main_mp3_pane

0x58b1,	// (0x0004638f) temp_image_control_pane_g1_ParamLimits

0x58b1,	// (0x0004638f) temp_image_control_pane_g1

0x58bf,	// (0x0004639d) temp_image_control_pane_g2_ParamLimits

0x58bf,	// (0x0004639d) temp_image_control_pane_g2

0x58d1,	// (0x000463af) temp_image_control_pane_g3_ParamLimits

0x58d1,	// (0x000463af) temp_image_control_pane_g3

0x58e1,	// (0x000463bf) temp_image_control_pane_g4_ParamLimits

0x58e1,	// (0x000463bf) temp_image_control_pane_g4

0x0003,

0xf5d0,	// (0x000500ae) temp_image_control_pane_g_ParamLimits

0xf5d0,	// (0x000500ae) temp_image_control_pane_g

0x58b1,	// (0x0004638f) main_mp3_pane_g1

0x58f4,	// (0x000463d2) main_mp3_pane_g2

0x0007,

0xf5d9,	// (0x000500b7) main_mp3_pane_g

0x594f,	// (0x0004642d) main_mp3_pane_t1

0xd2bf,	// (0x0004dd9d) main_camera_pane_g8_ParamLimits

0xd2bf,	// (0x0004dd9d) main_camera_pane_g8

0x25d2,	// (0x000430b0) main_video_pane_g7_ParamLimits

0x25d2,	// (0x000430b0) main_video_pane_g7

0xaa6a,	// (0x0004b548) main_camera2_pane_t7_ParamLimits

0xaa6a,	// (0x0004b548) main_camera2_pane_t7

0xd405,	// (0x0004dee3) scroll_pane_cp025_ParamLimits

0xd405,	// (0x0004dee3) scroll_pane_cp025

0xd419,	// (0x0004def7) scroll_pane_cp026_ParamLimits

0xd419,	// (0x0004def7) scroll_pane_cp026

0xd428,	// (0x0004df06) wml_content_pane_ParamLimits

0xa6a4,	// (0x0004b182) main_touch_calib_pane

0x5a23,	// (0x00046501) main_touch_calib_pane_g1

0x5a2f,	// (0x0004650d) main_touch_calib_pane_g2

0x5a3b,	// (0x00046519) main_touch_calib_pane_g3

0x5a47,	// (0x00046525) main_touch_calib_pane_g4

0x0003,

0xf5f7,	// (0x000500d5) main_touch_calib_pane_g

0x5a53,	// (0x00046531) main_touch_calib_pane_t1

0x5a6d,	// (0x0004654b) main_touch_calib_pane_t2

0x0004,

0xf600,	// (0x000500de) main_touch_calib_pane_t

0xdb3a,	// (0x0004e618) mup_progress_pane_cp02

0xdb59,	// (0x0004e637) navi_pane_g1

0xdbbb,	// (0x0004e699) navi_pane_mp_t3

0xe2c7,	// (0x0004eda5) main_mp3_pane_ParamLimits

0x4843,	// (0x00045321) navi_pane_ParamLimits

0x58b1,	// (0x0004638f) main_mp3_pane_g1_ParamLimits

0x58f4,	// (0x000463d2) main_mp3_pane_g2_ParamLimits

0x5902,	// (0x000463e0) main_mp3_pane_g3_ParamLimits

0x5902,	// (0x000463e0) main_mp3_pane_g3

0x5910,	// (0x000463ee) main_mp3_pane_g4_ParamLimits

0x5910,	// (0x000463ee) main_mp3_pane_g4

0x591c,	// (0x000463fa) main_mp3_pane_g5_ParamLimits

0x591c,	// (0x000463fa) main_mp3_pane_g5

0x592a,	// (0x00046408) main_mp3_pane_g6_ParamLimits

0x592a,	// (0x00046408) main_mp3_pane_g6

0x5937,	// (0x00046415) main_mp3_pane_g7_ParamLimits

0x5937,	// (0x00046415) main_mp3_pane_g7

0x5943,	// (0x00046421) main_mp3_pane_g8_ParamLimits

0x5943,	// (0x00046421) main_mp3_pane_g8

0xf5d9,	// (0x000500b7) main_mp3_pane_g_ParamLimits

0x595d,	// (0x0004643b) main_mp3_pane_t2

0x596b,	// (0x00046449) main_mp3_pane_t3

0x5979,	// (0x00046457) main_mp3_pane_t4

0x5987,	// (0x00046465) main_mp3_pane_t5

0x0005,

0xf5ea,	// (0x000500c8) main_mp3_pane_t

0x59a3,	// (0x00046481) mup_progress_pane_cp01

0xa6d2,	// (0x0004b1b0) aid_zoom_text_secondary2

0x56c8,	// (0x000461a6) list_cale_ev2_pane

0x56d0,	// (0x000461ae) scroll_pane_cp023_ParamLimits

0x5ac3,	// (0x000465a1) field_cale_ev2_pane_ParamLimits

0x5ac3,	// (0x000465a1) field_cale_ev2_pane

0xaae9,	// (0x0004b5c7) field_cale_ev2_pane_g1_ParamLimits

0xaae9,	// (0x0004b5c7) field_cale_ev2_pane_g1

0xaaf5,	// (0x0004b5d3) field_cale_ev2_pane_g2_ParamLimits

0xaaf5,	// (0x0004b5d3) field_cale_ev2_pane_g2

0xab0d,	// (0x0004b5eb) field_cale_ev2_pane_g3_ParamLimits

0xab0d,	// (0x0004b5eb) field_cale_ev2_pane_g3

0x0003,

0xf60b,	// (0x000500e9) field_cale_ev2_pane_g_ParamLimits

0xf60b,	// (0x000500e9) field_cale_ev2_pane_g

0x0ee2,	// (0x000419c0) field_cale_ev2_pane_t1_ParamLimits

0x0ee2,	// (0x000419c0) field_cale_ev2_pane_t1

0x0ef9,	// (0x000419d7) field_cale_ev2_pane_t2_ParamLimits

0x0ef9,	// (0x000419d7) field_cale_ev2_pane_t2

0x0001,

0xf614,	// (0x000500f2) field_cale_ev2_pane_t_ParamLimits

0xf614,	// (0x000500f2) field_cale_ev2_pane_t

0x3d5f,	// (0x0004483d) main_postcard_pane_g5_ParamLimits

0x3d5f,	// (0x0004483d) main_postcard_pane_g5

0x3d75,	// (0x00044853) main_postcard_pane_g6_ParamLimits

0x3d75,	// (0x00044853) main_postcard_pane_g6

0x2392,	// (0x00042e70) camera2_autofocus_pane_cp_ParamLimits

0x2392,	// (0x00042e70) camera2_autofocus_pane_cp

0xe2c7,	// (0x0004eda5) main_mup3_pane

0x5b03,	// (0x000465e1) main_mup3_pane_g1_ParamLimits

0x5b03,	// (0x000465e1) main_mup3_pane_g1

0x5b25,	// (0x00046603) main_mup3_pane_g2_ParamLimits

0x5b25,	// (0x00046603) main_mup3_pane_g2

0x5ba3,	// (0x00046681) main_mup3_pane_g3_ParamLimits

0x5ba3,	// (0x00046681) main_mup3_pane_g3

0x5be5,	// (0x000466c3) main_mup3_pane_g4_ParamLimits

0x5be5,	// (0x000466c3) main_mup3_pane_g4

0x5c27,	// (0x00046705) main_mup3_pane_g5_ParamLimits

0x5c27,	// (0x00046705) main_mup3_pane_g5

0x5c69,	// (0x00046747) main_mup3_pane_g6_ParamLimits

0x5c69,	// (0x00046747) main_mup3_pane_g6

0x5c7a,	// (0x00046758) main_mup3_pane_g7_ParamLimits

0x5c7a,	// (0x00046758) main_mup3_pane_g7

0x0007,

0xf624,	// (0x00050102) main_mup3_pane_g_ParamLimits

0xf624,	// (0x00050102) main_mup3_pane_g

0x5cf1,	// (0x000467cf) main_mup3_pane_t1_ParamLimits

0x5cf1,	// (0x000467cf) main_mup3_pane_t1

0x5d61,	// (0x0004683f) main_mup3_pane_t2_ParamLimits

0x5d61,	// (0x0004683f) main_mup3_pane_t2

0x5e31,	// (0x0004690f) main_mup3_pane_t4_ParamLimits

0x5e31,	// (0x0004690f) main_mup3_pane_t4

0x5e87,	// (0x00046965) main_mup3_pane_t5_ParamLimits

0x5e87,	// (0x00046965) main_mup3_pane_t5

0x5f3b,	// (0x00046a19) main_mup3_pane_t6_ParamLimits

0x5f3b,	// (0x00046a19) main_mup3_pane_t6

0x0005,

0xf635,	// (0x00050113) main_mup3_pane_t_ParamLimits

0xf635,	// (0x00050113) main_mup3_pane_t

0x5fef,	// (0x00046acd) mup3_progress_pane_ParamLimits

0x5fef,	// (0x00046acd) mup3_progress_pane

0x6071,	// (0x00046b4f) popup_mup3_control_window_ParamLimits

0x6071,	// (0x00046b4f) popup_mup3_control_window

0x608d,	// (0x00046b6b) popup_mup3_text_window

0x60ab,	// (0x00046b89) mup3_progress_pane_t1

0x60c2,	// (0x00046ba0) mup3_progress_pane_t2

0x60d9,	// (0x00046bb7) mup3_progress_pane_t3

0x0002,

0xf642,	// (0x00050120) mup3_progress_pane_t

0x60f0,	// (0x00046bce) mup_progress_pane_cp03

0xa6a4,	// (0x0004b182) bg_tb_trans_pane_cp04

0x6100,	// (0x00046bde) mup3_volume_pane

0x6108,	// (0x00046be6) popup_mup3_control_window_g1

0x6111,	// (0x00046bef) mup3_volume_pane_g1

0x611a,	// (0x00046bf8) mup3_volume_pane_g2

0x6123,	// (0x00046c01) mup3_volume_pane_g3

0x0002,

0xf649,	// (0x00050127) mup3_volume_pane_g

0xa6a4,	// (0x0004b182) bg_tb_trans_pane_cp03

0x612c,	// (0x00046c0a) popup_mup3_text_window_g1

0x6134,	// (0x00046c12) popup_mup3_text_window_t1

0xd162,	// (0x0004dc40) list_calc_item_pane_g1_ParamLimits

0x52a1,	// (0x00045d7f) mup_volume_pane_cp_g1

0x5a87,	// (0x00046565) main_touch_calib_pane_t3

0x5a9b,	// (0x00046579) main_touch_calib_pane_t4

0x5aaf,	// (0x0004658d) main_touch_calib_pane_t5

0xa6ae,	// (0x0004b18c) aid_cell_size_toolbar2

0xa6b6,	// (0x0004b194) aid_popup3_width_pane

0xa6c2,	// (0x0004b1a0) aid_zoom_text_msg_primary

0xa7e0,	// (0x0004b2be) vorec_t7

0xd126,	// (0x0004dc04) bg_calc_paper_pane_g1_ParamLimits

0xd132,	// (0x0004dc10) bg_calc_paper_pane_g2_ParamLimits

0xd13e,	// (0x0004dc1c) bg_calc_paper_pane_g3_ParamLimits

0xd14a,	// (0x0004dc28) bg_calc_paper_pane_g4_ParamLimits

0xd156,	// (0x0004dc34) bg_calc_paper_pane_g5_ParamLimits

0x1dd1,	// (0x000428af) bg_calc_paper_pane_g6_ParamLimits

0x1de0,	// (0x000428be) bg_calc_paper_pane_g7_ParamLimits

0x1def,	// (0x000428cd) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0004fc58) bg_calc_paper_pane_g_ParamLimits

0x1e02,	// (0x000428e0) calc_bg_paper_pane_g9_ParamLimits

0x24e0,	// (0x00042fbe) image_qvga_pane_ParamLimits

0x24e0,	// (0x00042fbe) image_qvga_pane

0xd043,	// (0x0004db21) bg_popup_sub_pane_cp04_ParamLimits

0xddf8,	// (0x0004e8d6) popup_mup_playback_window_g1_ParamLimits

0xde04,	// (0x0004e8e2) popup_mup_playback_window_t1_ParamLimits

0xde19,	// (0x0004e8f7) popup_mup_playback_window_t2_ParamLimits

0x02f2,	// (0x00040dd0) popup_mup_playback_window_t_ParamLimits

0x4fbe,	// (0x00045a9c) main_mup2_pane_g3_ParamLimits

0x4fbe,	// (0x00045a9c) main_mup2_pane_g3

0x27e0,	// (0x000432be) popup_toolbar_window_cp04

0xe1fb,	// (0x0004ecd9) popup_call2_audio_second_window_g3_ParamLimits

0xe1fb,	// (0x0004ecd9) popup_call2_audio_second_window_g3

0xe61f,	// (0x0004f0fd) popup_call2_audio_first_window_g4_ParamLimits

0xe61f,	// (0x0004f0fd) popup_call2_audio_first_window_g4

0xec9e,	// (0x0004f77c) popup_call2_audio_in_window_g4_ParamLimits

0xec9e,	// (0x0004f77c) popup_call2_audio_in_window_g4

0x3e8c,	// (0x0004496a) aid_area_sk_bg_cut_ParamLimits

0x3e8c,	// (0x0004496a) aid_area_sk_bg_cut

0xde2e,	// (0x0004e90c) aid_area_sk_bg_cut_2_ParamLimits

0xde2e,	// (0x0004e90c) aid_area_sk_bg_cut_2

0x5531,	// (0x0004600f) aid_placing_details_win

0x5539,	// (0x00046017) aid_placing_details_win_2

0x57c3,	// (0x000462a1) camera2_autofocus_pane_g1_ParamLimits

0x19df,	// (0x000424bd) popup_fixed_preview_cale_window_ParamLimits

0x19df,	// (0x000424bd) popup_fixed_preview_cale_window

0xdc0a,	// (0x0004e6e8) navi_slider_pane_g3

0xdc13,	// (0x0004e6f1) navi_slider_pane_g4

0xdc1c,	// (0x0004e6fa) navi_slider_pane_g5

0xdc0a,	// (0x0004e6e8) navi_slider_pane_g6

0xa9df,	// (0x0004b4bd) navi_slider_pane_g7

0xdd2f,	// (0x0004e80d) mup_scale_pane_g3

0xdd38,	// (0x0004e816) mup_scale_pane_g4

0xdd41,	// (0x0004e81f) mup_scale_pane_g5

0x3c0a,	// (0x000446e8) mup_scale_pane_g6

0x3c13,	// (0x000446f1) mup_scale_pane_g7

0xdc0a,	// (0x0004e6e8) cams2_slider_pane_g3

0x534e,	// (0x00045e2c) cams2_slider_pane_g4

0xaad8,	// (0x0004b5b6) cams2_slider_pane_g5

0xdc0a,	// (0x0004e6e8) cams2_slider_pane_g6

0xaae0,	// (0x0004b5be) cams2_slider_pane_g7

0x5645,	// (0x00046123) camera2_autofocus_pane_cp_g1

0x6142,	// (0x00046c20) bg_popup_preview_window_pane_cp02_ParamLimits

0x6142,	// (0x00046c20) bg_popup_preview_window_pane_cp02

0x614e,	// (0x00046c2c) list_fp_cale_pane_ParamLimits

0x614e,	// (0x00046c2c) list_fp_cale_pane

0x615a,	// (0x00046c38) popup_fixed_preview_cale_window_t1_ParamLimits

0x615a,	// (0x00046c38) popup_fixed_preview_cale_window_t1

0x616c,	// (0x00046c4a) popup_fixed_preview_cale_window_t2_ParamLimits

0x616c,	// (0x00046c4a) popup_fixed_preview_cale_window_t2

0x6181,	// (0x00046c5f) popup_fixed_preview_cale_window_t3_ParamLimits

0x6181,	// (0x00046c5f) popup_fixed_preview_cale_window_t3

0x0002,

0xf650,	// (0x0005012e) popup_fixed_preview_cale_window_t_ParamLimits

0xf650,	// (0x0005012e) popup_fixed_preview_cale_window_t

0x61a2,	// (0x00046c80) list_single_fp_cale_pane_ParamLimits

0x61a2,	// (0x00046c80) list_single_fp_cale_pane

0x61b7,	// (0x00046c95) list_single_fp_cale_pane_g1_ParamLimits

0x61b7,	// (0x00046c95) list_single_fp_cale_pane_g1

0x61c3,	// (0x00046ca1) list_single_fp_cale_pane_g2_ParamLimits

0x61c3,	// (0x00046ca1) list_single_fp_cale_pane_g2

0x0002,

0xf657,	// (0x00050135) list_single_fp_cale_pane_g_ParamLimits

0xf657,	// (0x00050135) list_single_fp_cale_pane_g

0x61dc,	// (0x00046cba) list_single_fp_cale_pane_t1_ParamLimits

0x61dc,	// (0x00046cba) list_single_fp_cale_pane_t1

0x61ee,	// (0x00046ccc) list_single_fp_cale_pane_t2_ParamLimits

0x61ee,	// (0x00046ccc) list_single_fp_cale_pane_t2

0x0001,

0xf65e,	// (0x0005013c) list_single_fp_cale_pane_t_ParamLimits

0xf65e,	// (0x0005013c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa6a4,	// (0x0004b182) main_dialer_pane

0x6221,	// (0x00046cff) aid_cell_size_keypad

0x622b,	// (0x00046d09) dialer_ne_pane

0x6233,	// (0x00046d11) grid_dialer_command_1_pane

0x623b,	// (0x00046d19) grid_dialer_command_2_pane

0x6243,	// (0x00046d21) grid_dialer_keypad_pane

0x6255,	// (0x00046d33) bg_popup_call_pane_cp06_ParamLimits

0x6255,	// (0x00046d33) bg_popup_call_pane_cp06

0x6261,	// (0x00046d3f) dialer_ne_clear_pane_ParamLimits

0x6261,	// (0x00046d3f) dialer_ne_clear_pane

0x626d,	// (0x00046d4b) dialer_ne_pane_g1

0x6275,	// (0x00046d53) dialer_ne_pane_t1_ParamLimits

0x6275,	// (0x00046d53) dialer_ne_pane_t1

0x6287,	// (0x00046d65) dialer_ne_pane_t2_ParamLimits

0x6287,	// (0x00046d65) dialer_ne_pane_t2

0x62b1,	// (0x00046d8f) dialer_ne_pane_t3_ParamLimits

0x62b1,	// (0x00046d8f) dialer_ne_pane_t3

0x0002,

0xf663,	// (0x00050141) dialer_ne_pane_t_ParamLimits

0xf663,	// (0x00050141) dialer_ne_pane_t

0x62e1,	// (0x00046dbf) dialer_ne_pane_t3_copy1_ParamLimits

0x62e1,	// (0x00046dbf) dialer_ne_pane_t3_copy1

0x6310,	// (0x00046dee) cell_dialer_keypad_pane_ParamLimits

0x6310,	// (0x00046dee) cell_dialer_keypad_pane

0x6327,	// (0x00046e05) cell_dialer_command_1_pane_ParamLimits

0x6327,	// (0x00046e05) cell_dialer_command_1_pane

0x633d,	// (0x00046e1b) cell_dialer_command_2_pane_ParamLimits

0x633d,	// (0x00046e1b) cell_dialer_command_2_pane

0x634c,	// (0x00046e2a) bg_button_pane_cp02_ParamLimits

0x634c,	// (0x00046e2a) bg_button_pane_cp02

0x6358,	// (0x00046e36) cell_dialer_keypad_pane_g1_ParamLimits

0x6358,	// (0x00046e36) cell_dialer_keypad_pane_g1

0x634c,	// (0x00046e2a) bg_button_pane_cp03_ParamLimits

0x634c,	// (0x00046e2a) bg_button_pane_cp03

0x636c,	// (0x00046e4a) cell_dialer_command_1_pane_g1_ParamLimits

0x636c,	// (0x00046e4a) cell_dialer_command_1_pane_g1

0x6380,	// (0x00046e5e) bg_button_pane_cp04

0x6388,	// (0x00046e66) cell_dialer_command_2_pane_g1

0xdbf9,	// (0x0004e6d7) bg_button_pane_cp06

0x6390,	// (0x00046e6e) dialer_ne_clear_pane_g1

0x374e,	// (0x0004422c) navi_pane_g2

0x377c,	// (0x0004425a) navi_pane_g3

0x0002,

0xf394,	// (0x0004fe72) navi_pane_g

0x37a5,	// (0x00044283) navi_pane_mv_g2

0x37cc,	// (0x000442aa) navi_pane_mv_g5

0x37d4,	// (0x000442b2) navi_pane_mv_t1

0xd11a,	// (0x0004dbf8) main_clock2_pane

0x63c4,	// (0x00046ea2) main_clock2_list_pane_ParamLimits

0x63c4,	// (0x00046ea2) main_clock2_list_pane

0x63fa,	// (0x00046ed8) main_clock2_pane_t1_ParamLimits

0x63fa,	// (0x00046ed8) main_clock2_pane_t1

0x6436,	// (0x00046f14) main_clock2_pane_t2_ParamLimits

0x6436,	// (0x00046f14) main_clock2_pane_t2

0x0004,

0xf66a,	// (0x00050148) main_clock2_pane_t_ParamLimits

0xf66a,	// (0x00050148) main_clock2_pane_t

0x64c0,	// (0x00046f9e) popup_clock_analogue_window_cp03_ParamLimits

0x64c0,	// (0x00046f9e) popup_clock_analogue_window_cp03

0x64e5,	// (0x00046fc3) popup_clock_digital_window_cp02_ParamLimits

0x64e5,	// (0x00046fc3) popup_clock_digital_window_cp02

0x6556,	// (0x00047034) main_clock2_list_single_pane_ParamLimits

0x6556,	// (0x00047034) main_clock2_list_single_pane

0xdbf9,	// (0x0004e6d7) list_highlight_pane_cp05

0x6568,	// (0x00047046) main_clock2_list_single_pane_t1

0x27e0,	// (0x000432be) popup_toolbar_window_cp04_ParamLimits

0x57d1,	// (0x000462af) camera2_autofocus_pane_g2_ParamLimits

0x57d1,	// (0x000462af) camera2_autofocus_pane_g2

0x57dd,	// (0x000462bb) camera2_autofocus_pane_g3_ParamLimits

0x57dd,	// (0x000462bb) camera2_autofocus_pane_g3

0x57e9,	// (0x000462c7) camera2_autofocus_pane_g4_ParamLimits

0x57e9,	// (0x000462c7) camera2_autofocus_pane_g4

0x57f5,	// (0x000462d3) camera2_autofocus_pane_g5_ParamLimits

0x57f5,	// (0x000462d3) camera2_autofocus_pane_g5

0x0004,

0xf5b3,	// (0x00050091) camera2_autofocus_pane_g_ParamLimits

0xf5b3,	// (0x00050091) camera2_autofocus_pane_g

0x5ae3,	// (0x000465c1) camera2_autofocus_pane_cp_g2

0x5aeb,	// (0x000465c9) camera2_autofocus_pane_cp_g3

0x5af3,	// (0x000465d1) camera2_autofocus_pane_cp_g4

0x5afb,	// (0x000465d9) camera2_autofocus_pane_cp_g5

0x0004,

0xf619,	// (0x000500f7) camera2_autofocus_pane_cp_g

0x624d,	// (0x00046d2b) popup_dialer_spcha_window

0xa6a4,	// (0x0004b182) bg_popup_sub_pane_cp07

0x660e,	// (0x000470ec) list_spcha_pane

0x6616,	// (0x000470f4) list_single_spcha_pane_ParamLimits

0x6616,	// (0x000470f4) list_single_spcha_pane

0xa6a4,	// (0x0004b182) list_highlight_pane_cp06

0x6627,	// (0x00047105) list_single_spcha_pane_t1

0xea48,	// (0x0004f526) popup_call2_audio_out_window_g4_ParamLimits

0xea48,	// (0x0004f526) popup_call2_audio_out_window_g4

0xa6a4,	// (0x0004b182) main_imed2_pane

0xf027,	// (0x0004fb05) popup_imed_adjust2_window

0x46c8,	// (0x000451a6) popup_imed_trans_window_ParamLimits

0x46c8,	// (0x000451a6) popup_imed_trans_window

0x53b7,	// (0x00045e95) popup_blid_sat_info2_window_t1

0x53c5,	// (0x00045ea3) popup_blid_sat_info2_window_t2

0x000a,

0xf548,	// (0x00050026) popup_blid_sat_info2_window_t

0x6635,	// (0x00047113) aid_size_cell_colour_35

0x6655,	// (0x00047133) aid_size_cell_colour_112

0x6675,	// (0x00047153) aid_size_cell_effect

0xefff,	// (0x0004fadd) bg_tb_trans_pane_cp02

0xd73a,	// (0x0004e218) heading_imed_pane

0x6695,	// (0x00047173) listscroll_imed_pane

0x66a1,	// (0x0004717f) heading_imed_pane_g1

0x66a9,	// (0x00047187) heading_imed_pane_t1

0x66b7,	// (0x00047195) grid_imed_colour_35_pane_ParamLimits

0x66b7,	// (0x00047195) grid_imed_colour_35_pane

0x66ce,	// (0x000471ac) grid_imed_effect_pane

0x66e4,	// (0x000471c2) list_imed_aspect_pane

0x66ec,	// (0x000471ca) scroll_pane_cp027_ParamLimits

0x66ec,	// (0x000471ca) scroll_pane_cp027

0x66fd,	// (0x000471db) cell_imed_effect_pane_ParamLimits

0x66fd,	// (0x000471db) cell_imed_effect_pane

0x6724,	// (0x00047202) cell_imed_colour_pane_ParamLimits

0x6724,	// (0x00047202) cell_imed_colour_pane

0x6766,	// (0x00047244) cell_imed_colour_pane_g1_ParamLimits

0x6766,	// (0x00047244) cell_imed_colour_pane_g1

0x6777,	// (0x00047255) hgihlgiht_grid_pane_cp016_ParamLimits

0x6777,	// (0x00047255) hgihlgiht_grid_pane_cp016

0x6788,	// (0x00047266) cell_imed_effect_pane_g1

0x6790,	// (0x0004726e) grid_highlight_pane_cp017

0x6799,	// (0x00047277) list_imed_single_pane_ParamLimits

0x6799,	// (0x00047277) list_imed_single_pane

0xa6a4,	// (0x0004b182) list_highlight_pane_cp07

0x67ae,	// (0x0004728c) list_imed_aspect_pane_comp1_t1

0xefff,	// (0x0004fadd) bg_tb_trans_pane_cp05

0x67d0,	// (0x000472ae) popup_imed_adjust2_window_g1

0x67f7,	// (0x000472d5) popup_imed_adjust2_window_t1

0x680f,	// (0x000472ed) slider_imed_adjust_pane

0x6823,	// (0x00047301) slider_imed_adjust_pane_g1

0x6833,	// (0x00047311) slider_imed_adjust_pane_g2

0x6843,	// (0x00047321) slider_imed_adjust_pane_g3

0x6854,	// (0x00047332) slider_imed_adjust_pane_g4

0x0003,

0xf687,	// (0x00050165) slider_imed_adjust_pane_g

0x6865,	// (0x00047343) aid_size_cell_clipart2

0x6871,	// (0x0004734f) grid_imed_clipart_pane

0x687b,	// (0x00047359) scroll_pane_cp031

0x6883,	// (0x00047361) cell_imed_clipart_pane_ParamLimits

0x6883,	// (0x00047361) cell_imed_clipart_pane

0x68a5,	// (0x00047383) cell_imed_clipart_pane_g1

0xa6a4,	// (0x0004b182) grid_highlight_pane_cp014

0x63d9,	// (0x00046eb7) main_clock2_pane_g1_ParamLimits

0x63d9,	// (0x00046eb7) main_clock2_pane_g1

0x6501,	// (0x00046fdf) aid_call2_pane_cp10

0x6513,	// (0x00046ff1) aid_call_pane_cp10

0xdb2e,	// (0x0004e60c) popup_clock_analogue_window_cp10_g1

0xdb2e,	// (0x0004e60c) popup_clock_analogue_window_cp10_g2

0x6525,	// (0x00047003) popup_clock_analogue_window_cp10_g3

0x6525,	// (0x00047003) popup_clock_analogue_window_cp10_g4

0xdb2e,	// (0x0004e60c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf675,	// (0x00050153) popup_clock_analogue_window_cp10_g

0x6537,	// (0x00047015) popup_clock_analogue_window_cp10_t1

0x6576,	// (0x00047054) clock_digital_number_pane_cp10_ParamLimits

0x6576,	// (0x00047054) clock_digital_number_pane_cp10

0x658e,	// (0x0004706c) clock_digital_number_pane_cp11_ParamLimits

0x658e,	// (0x0004706c) clock_digital_number_pane_cp11

0x65a6,	// (0x00047084) clock_digital_number_pane_cp12_ParamLimits

0x65a6,	// (0x00047084) clock_digital_number_pane_cp12

0x65be,	// (0x0004709c) clock_digital_number_pane_cp13_ParamLimits

0x65be,	// (0x0004709c) clock_digital_number_pane_cp13

0x65d6,	// (0x000470b4) clock_digital_separator_pane_cp10_ParamLimits

0x65d6,	// (0x000470b4) clock_digital_separator_pane_cp10

0x65ee,	// (0x000470cc) popup_clock_digital_window_cp02_t1_ParamLimits

0x65ee,	// (0x000470cc) popup_clock_digital_window_cp02_t1

0xd03b,	// (0x0004db19) clock_digital_number_pane_cp10_g1

0xd03b,	// (0x0004db19) clock_digital_number_pane_cp10_g2

0x0001,

0x05fa,	// (0x000410d8) clock_digital_number_pane_cp10_g

0xd03b,	// (0x0004db19) clock_digital_separator_pane_cp10_g1

0xd03b,	// (0x0004db19) clock_digital_separator_pane_g2_cp10

0xdbc9,	// (0x0004e6a7) navi_pane_vded_g4

0xdbd2,	// (0x0004e6b0) navi_pane_vded_g5

0xdbdb,	// (0x0004e6b9) navi_pane_vded_t1

0xa6a4,	// (0x0004b182) main_vded_pane

0x68ae,	// (0x0004738c) main_vded_pane_g1

0x68b8,	// (0x00047396) main_vded_pane_g2

0x68c2,	// (0x000473a0) main_vded_pane_g3

0x0002,

0xf690,	// (0x0005016e) main_vded_pane_g

0x68cc,	// (0x000473aa) main_vded_pane_t1

0x68da,	// (0x000473b8) main_vded_pane_t2

0x0001,

0xf697,	// (0x00050175) main_vded_pane_t

0x68e8,	// (0x000473c6) vded_slider_pane

0x68f0,	// (0x000473ce) vded_video_pane

0x68f8,	// (0x000473d6) vded_video_pane_g1

0x6902,	// (0x000473e0) vded_video_pane_g2

0x5645,	// (0x00046123) vded_video_pane_g3

0x0002,

0xf69c,	// (0x0005017a) vded_video_pane_g

0x690b,	// (0x000473e9) vded_slider_pane_g1

0x52a1,	// (0x00045d7f) vded_slider_pane_g2

0x6914,	// (0x000473f2) vded_slider_pane_g3

0x691d,	// (0x000473fb) vded_slider_pane_g4

0x6926,	// (0x00047404) vded_slider_pane_g5

0x0004,

0xf6a3,	// (0x00050181) vded_slider_pane_g

0x6059,	// (0x00046b37) mup3_rocker_pane_ParamLimits

0x6059,	// (0x00046b37) mup3_rocker_pane

0x692f,	// (0x0004740d) mup3_control_keys_pane_g1

0x6937,	// (0x00047415) mup3_control_keys_pane_g2

0x693f,	// (0x0004741d) mup3_control_keys_pane_g3

0x6947,	// (0x00047425) mup3_control_keys_pane_g4

0x0003,

0xf6ae,	// (0x0005018c) mup3_control_keys_pane_g

0x1a16,	// (0x000424f4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1a16,	// (0x000424f4) popup_toolbar2_fixed_window_cp01

0x6095,	// (0x00046b73) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6095,	// (0x00046b73) popup_toolbar2_fixed_window_cp02

0xe387,	// (0x0004ee65) popup_call2_audio_second_window_t4_ParamLimits

0xe387,	// (0x0004ee65) popup_call2_audio_second_window_t4

0xe8b5,	// (0x0004f393) popup_call2_audio_first_window_t6_ParamLimits

0xe8b5,	// (0x0004f393) popup_call2_audio_first_window_t6

0xeb4b,	// (0x0004f629) popup_call2_audio_out_window_t6_ParamLimits

0xeb4b,	// (0x0004f629) popup_call2_audio_out_window_t6

0xa6a4,	// (0x0004b182) main_vitu_pane

0x6957,	// (0x00047435) aid_size_cell_itu_ParamLimits

0x6957,	// (0x00047435) aid_size_cell_itu

0xe2c7,	// (0x0004eda5) bg_popup_window_pane_cp08_ParamLimits

0xe2c7,	// (0x0004eda5) bg_popup_window_pane_cp08

0x696d,	// (0x0004744b) field_vitu_entry_pane_ParamLimits

0x696d,	// (0x0004744b) field_vitu_entry_pane

0x6984,	// (0x00047462) grid_vitu_function_pane_ParamLimits

0x6984,	// (0x00047462) grid_vitu_function_pane

0x699f,	// (0x0004747d) grid_vitu_itu_pane_ParamLimits

0x699f,	// (0x0004747d) grid_vitu_itu_pane

0x69bd,	// (0x0004749b) cell_vitu_itu_pane_ParamLimits

0x69bd,	// (0x0004749b) cell_vitu_itu_pane

0x69df,	// (0x000474bd) cell_vitu_function_pane_ParamLimits

0x69df,	// (0x000474bd) cell_vitu_function_pane

0xe2c7,	// (0x0004eda5) bg_popup_sub_pane_cp08_ParamLimits

0xe2c7,	// (0x0004eda5) bg_popup_sub_pane_cp08

0x6a10,	// (0x000474ee) field_vitu_entry_pane_t1_ParamLimits

0x6a10,	// (0x000474ee) field_vitu_entry_pane_t1

0x6a2e,	// (0x0004750c) field_vitu_entry_pane_t2_ParamLimits

0x6a2e,	// (0x0004750c) field_vitu_entry_pane_t2

0x0001,

0xf6bc,	// (0x0005019a) field_vitu_entry_pane_t_ParamLimits

0xf6bc,	// (0x0005019a) field_vitu_entry_pane_t

0x6a4b,	// (0x00047529) bg_button_pane_cp05_ParamLimits

0x6a4b,	// (0x00047529) bg_button_pane_cp05

0x6a59,	// (0x00047537) cell_vitu_itu_pane_g1

0x6a71,	// (0x0004754f) cell_vitu_itu_pane_t1_ParamLimits

0x6a71,	// (0x0004754f) cell_vitu_itu_pane_t1

0x6a83,	// (0x00047561) cell_vitu_itu_pane_t2_ParamLimits

0x6a83,	// (0x00047561) cell_vitu_itu_pane_t2

0x0002,

0xf6c1,	// (0x0005019f) cell_vitu_itu_pane_t_ParamLimits

0xf6c1,	// (0x0005019f) cell_vitu_itu_pane_t

0x6ab8,	// (0x00047596) bg_button_pane_cp07

0x6ac2,	// (0x000475a0) cell_vitu_function_pane_g1

0xa6fe,	// (0x0004b1dc) main_calc_pane_g1

0x1856,	// (0x00042334) aid_visual_content_pane

0xa6a4,	// (0x0004b182) main_vradio_pane

0x6acb,	// (0x000475a9) main_vradio_pane_g1_ParamLimits

0x6acb,	// (0x000475a9) main_vradio_pane_g1

0x6ae4,	// (0x000475c2) main_vradio_pane_g2_ParamLimits

0x6ae4,	// (0x000475c2) main_vradio_pane_g2

0x0001,

0xf6c8,	// (0x000501a6) main_vradio_pane_g_ParamLimits

0xf6c8,	// (0x000501a6) main_vradio_pane_g

0x6af1,	// (0x000475cf) main_vradio_pane_t1_ParamLimits

0x6af1,	// (0x000475cf) main_vradio_pane_t1

0x6b06,	// (0x000475e4) main_vradio_pane_t2_ParamLimits

0x6b06,	// (0x000475e4) main_vradio_pane_t2

0x6b1b,	// (0x000475f9) main_vradio_pane_t3_ParamLimits

0x6b1b,	// (0x000475f9) main_vradio_pane_t3

0x0002,

0xf6cd,	// (0x000501ab) main_vradio_pane_t_ParamLimits

0xf6cd,	// (0x000501ab) main_vradio_pane_t

0x6b2f,	// (0x0004760d) vradio_rocker_control_pane_ParamLimits

0x6b2f,	// (0x0004760d) vradio_rocker_control_pane

0x6b41,	// (0x0004761f) vradio_station_info_pane_ParamLimits

0x6b41,	// (0x0004761f) vradio_station_info_pane

0x6b53,	// (0x00047631) vradio_frequency_info_pane_ParamLimits

0x6b53,	// (0x00047631) vradio_frequency_info_pane

0x5645,	// (0x00046123) vradio_station_info_pane_g1

0x6b62,	// (0x00047640) vradio_station_info_pane_t1_ParamLimits

0x6b62,	// (0x00047640) vradio_station_info_pane_t1

0x6b84,	// (0x00047662) vradio_station_info_pane_t2_ParamLimits

0x6b84,	// (0x00047662) vradio_station_info_pane_t2

0x0001,

0xf6d4,	// (0x000501b2) vradio_station_info_pane_t_ParamLimits

0xf6d4,	// (0x000501b2) vradio_station_info_pane_t

0x6b96,	// (0x00047674) vradio_tuning_pane

0x6b9e,	// (0x0004767c) vradio_rocker_control_pane_g1

0x6ba6,	// (0x00047684) vradio_rocker_control_pane_g2

0x6bae,	// (0x0004768c) vradio_rocker_control_pane_g3

0x6bb6,	// (0x00047694) vradio_rocker_control_pane_g4

0x6bbe,	// (0x0004769c) vradio_rocker_control_pane_g5

0x0004,

0xf6d9,	// (0x000501b7) vradio_rocker_control_pane_g

0x6bc6,	// (0x000476a4) vradio_frequency_info_pane_g1

0x6bd0,	// (0x000476ae) vradio_frequency_info_pane_t1_ParamLimits

0x6bd0,	// (0x000476ae) vradio_frequency_info_pane_t1

0x6be4,	// (0x000476c2) vradio_tuning_pane_g1

0x6bef,	// (0x000476cd) vradio_tuning_pane_t1

0xa6da,	// (0x0004b1b8) area_side_right_pane_ParamLimits

0xa6da,	// (0x0004b1b8) area_side_right_pane

0xefc6,	// (0x0004faa4) status_small_pane_g1

0xefce,	// (0x0004faac) status_small_pane_g2

0xefd7,	// (0x0004fab5) status_small_pane_g3

0xefe0,	// (0x0004fabe) status_small_pane_g4

0x0003,

0x0408,	// (0x00040ee6) status_small_pane_g

0xefe9,	// (0x0004fac7) status_small_pane_t1

0xa6a4,	// (0x0004b182) main_video3_pane

0x6bfe,	// (0x000476dc) cams_zoom_vslider_pane

0x6c06,	// (0x000476e4) image3_wide_pane_ParamLimits

0x6c06,	// (0x000476e4) image3_wide_pane

0x6c20,	// (0x000476fe) image3_wide_small_pane

0x6c2c,	// (0x0004770a) main_video3_pane_g1_ParamLimits

0x6c2c,	// (0x0004770a) main_video3_pane_g1

0x6c48,	// (0x00047726) main_video3_pane_g2_ParamLimits

0x6c48,	// (0x00047726) main_video3_pane_g2

0x0001,

0xf6e4,	// (0x000501c2) main_video3_pane_g_ParamLimits

0xf6e4,	// (0x000501c2) main_video3_pane_g

0x6c64,	// (0x00047742) main_video3_pane_t1_ParamLimits

0x6c64,	// (0x00047742) main_video3_pane_t1

0x6c8f,	// (0x0004776d) main_video3_pane_t2_ParamLimits

0x6c8f,	// (0x0004776d) main_video3_pane_t2

0x6cba,	// (0x00047798) main_video3_pane_t3_ParamLimits

0x6cba,	// (0x00047798) main_video3_pane_t3

0x0002,

0xf6e9,	// (0x000501c7) main_video3_pane_t_ParamLimits

0xf6e9,	// (0x000501c7) main_video3_pane_t

0x6ce7,	// (0x000477c5) cams_zoom_vslider_pane_g1

0x6cf0,	// (0x000477ce) cams_zoom_vslider_pane_g2

0x0001,

0xf6f0,	// (0x000501ce) cams_zoom_vslider_pane_g

0x6cf8,	// (0x000477d6) small_slider_vertical_pane

0x5645,	// (0x00046123) small_slider_vertical_pane_g1

0x5645,	// (0x00046123) small_slider_vertical_pane_g2

0x6d00,	// (0x000477de) small_slider_vertical_pane_g3

0x0002,

0xf6f5,	// (0x000501d3) small_slider_vertical_pane_g

0xa6a4,	// (0x0004b182) main_hwr_training_pane

0x6d09,	// (0x000477e7) hwr_training_instruct_pane_ParamLimits

0x6d09,	// (0x000477e7) hwr_training_instruct_pane

0x6d2b,	// (0x00047809) hwr_training_navi_pane_ParamLimits

0x6d2b,	// (0x00047809) hwr_training_navi_pane

0x6d4a,	// (0x00047828) hwr_training_write_pane_ParamLimits

0x6d4a,	// (0x00047828) hwr_training_write_pane

0xa6a4,	// (0x0004b182) bg_frame_shadow_pane

0x6d9a,	// (0x00047878) hwr_training_write_pane_g1

0x6da2,	// (0x00047880) hwr_training_write_pane_g2

0x6daa,	// (0x00047888) hwr_training_write_pane_g3

0x6db2,	// (0x00047890) hwr_training_write_pane_g4

0x6dba,	// (0x00047898) hwr_training_write_pane_g5

0x6dc2,	// (0x000478a0) hwr_training_write_pane_g6

0x6dca,	// (0x000478a8) hwr_training_write_pane_g7

0x0006,

0xf6fc,	// (0x000501da) hwr_training_write_pane_g

0xab31,	// (0x0004b60f) hwr_training_navi_pane_g1_ParamLimits

0xab31,	// (0x0004b60f) hwr_training_navi_pane_g1

0xab43,	// (0x0004b621) hwr_training_navi_pane_g2_ParamLimits

0xab43,	// (0x0004b621) hwr_training_navi_pane_g2

0xab55,	// (0x0004b633) hwr_training_navi_pane_g3_ParamLimits

0xab55,	// (0x0004b633) hwr_training_navi_pane_g3

0xab65,	// (0x0004b643) hwr_training_navi_pane_g4_ParamLimits

0xab65,	// (0x0004b643) hwr_training_navi_pane_g4

0x0004,

0xf70b,	// (0x000501e9) hwr_training_navi_pane_g_ParamLimits

0xf70b,	// (0x000501e9) hwr_training_navi_pane_g

0xab72,	// (0x0004b650) hwr_training_navi_pane_t1

0x6ddf,	// (0x000478bd) list_single_hwr_training_instruct_pane_ParamLimits

0x6ddf,	// (0x000478bd) list_single_hwr_training_instruct_pane

0x6df4,	// (0x000478d2) list_single_hwr_training_instruct_pane_t1

0x5585,	// (0x00046063) bg_frame_shadow_pane_g1

0x6e03,	// (0x000478e1) bg_frame_shadow_pane_g2

0x6e0b,	// (0x000478e9) bg_frame_shadow_pane_g3

0x6e13,	// (0x000478f1) bg_frame_shadow_pane_g4

0x6e1b,	// (0x000478f9) bg_frame_shadow_pane_g5

0x6e23,	// (0x00047901) bg_frame_shadow_pane_g6

0x6e2b,	// (0x00047909) bg_frame_shadow_pane_g7

0xd1d3,	// (0x0004dcb1) bg_frame_shadow_pane_g8

0x0007,

0xf716,	// (0x000501f4) bg_frame_shadow_pane_g

0xa6a4,	// (0x0004b182) main_video_tele_dialer_pane

0x6e33,	// (0x00047911) aid_size_cell_video_keypad_ParamLimits

0x6e33,	// (0x00047911) aid_size_cell_video_keypad

0x6e4d,	// (0x0004792b) grid_video_dialer_keypad_pane_ParamLimits

0x6e4d,	// (0x0004792b) grid_video_dialer_keypad_pane

0x6e97,	// (0x00047975) video_down_pane_cp_ParamLimits

0x6e97,	// (0x00047975) video_down_pane_cp

0x6ec3,	// (0x000479a1) cell_video_dialer_keypad_pane_ParamLimits

0x6ec3,	// (0x000479a1) cell_video_dialer_keypad_pane

0x6ee5,	// (0x000479c3) bg_button_pane_cp08_ParamLimits

0x6ee5,	// (0x000479c3) bg_button_pane_cp08

0x6ef1,	// (0x000479cf) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6ef1,	// (0x000479cf) cell_video_dialer_keypad_pane_g1

0x6043,	// (0x00046b21) mup3_rocker2_pane_ParamLimits

0x6043,	// (0x00046b21) mup3_rocker2_pane

0x5645,	// (0x00046123) mup3_rocker2_pane_g1

0x45a9,	// (0x00045087) main_dialer2_pane

0xa6a4,	// (0x0004b182) main_mp4_pane

0xab88,	// (0x0004b666) main_mp4_pane_g1_ParamLimits

0xab88,	// (0x0004b666) main_mp4_pane_g1

0xab88,	// (0x0004b666) main_mp4_pane_g2_ParamLimits

0xab88,	// (0x0004b666) main_mp4_pane_g2

0x6f2b,	// (0x00047a09) main_mp4_pane_g3_ParamLimits

0x6f2b,	// (0x00047a09) main_mp4_pane_g3

0xab96,	// (0x0004b674) main_mp4_pane_g4_ParamLimits

0xab96,	// (0x0004b674) main_mp4_pane_g4

0xabbe,	// (0x0004b69c) main_mp4_pane_g5_ParamLimits

0xabbe,	// (0x0004b69c) main_mp4_pane_g5

0x0005,

0xf736,	// (0x00050214) main_mp4_pane_g_ParamLimits

0xf736,	// (0x00050214) main_mp4_pane_g

0xac0e,	// (0x0004b6ec) main_mp4_pane_t1_ParamLimits

0xac0e,	// (0x0004b6ec) main_mp4_pane_t1

0xac6a,	// (0x0004b748) main_mp4_pane_t2_ParamLimits

0xac6a,	// (0x0004b748) main_mp4_pane_t2

0x6f67,	// (0x00047a45) main_mp4_pane_t3_ParamLimits

0x6f67,	// (0x00047a45) main_mp4_pane_t3

0xacbc,	// (0x0004b79a) main_mp4_pane_t4_ParamLimits

0xacbc,	// (0x0004b79a) main_mp4_pane_t4

0x0003,

0xf743,	// (0x00050221) main_mp4_pane_t_ParamLimits

0xf743,	// (0x00050221) main_mp4_pane_t

0xad00,	// (0x0004b7de) mp4_progress_pane_ParamLimits

0xad00,	// (0x0004b7de) mp4_progress_pane

0xad4a,	// (0x0004b828) mp4_rocker_pane_ParamLimits

0xad4a,	// (0x0004b828) mp4_rocker_pane

0x6f8f,	// (0x00047a6d) mp4_progress_pane_t1

0x6fa8,	// (0x00047a86) mp4_progress_pane_t2

0x0001,

0xf74c,	// (0x0005022a) mp4_progress_pane_t

0x6fc1,	// (0x00047a9f) mup_progress_pane_cp04

0x5645,	// (0x00046123) mp4_rocker_pane_g1

0x6fcd,	// (0x00047aab) aid_cell_size_keypad2_ParamLimits

0x6fcd,	// (0x00047aab) aid_cell_size_keypad2

0x6fe3,	// (0x00047ac1) dialer2_ne_pane_ParamLimits

0x6fe3,	// (0x00047ac1) dialer2_ne_pane

0x6ffd,	// (0x00047adb) grid_dialer2_keypad_pane_ParamLimits

0x6ffd,	// (0x00047adb) grid_dialer2_keypad_pane

0x535e,	// (0x00045e3c) bg_popup_call_pane_cp07_ParamLimits

0x535e,	// (0x00045e3c) bg_popup_call_pane_cp07

0x7019,	// (0x00047af7) dialer2_ne_pane_t1_ParamLimits

0x7019,	// (0x00047af7) dialer2_ne_pane_t1

0x7066,	// (0x00047b44) cell_dialer2_keypad_pane_ParamLimits

0x7066,	// (0x00047b44) cell_dialer2_keypad_pane

0x7088,	// (0x00047b66) bg_button_pane_pane_cp04_ParamLimits

0x7088,	// (0x00047b66) bg_button_pane_pane_cp04

0x7094,	// (0x00047b72) cell_dialer2_keypad_pane_g1_ParamLimits

0x7094,	// (0x00047b72) cell_dialer2_keypad_pane_g1

0x26b6,	// (0x00043194) aid_placing_vt_set_content_ParamLimits

0x26b6,	// (0x00043194) aid_placing_vt_set_content

0x26dc,	// (0x000431ba) aid_placing_vt_set_title_ParamLimits

0x26dc,	// (0x000431ba) aid_placing_vt_set_title

0xa6a4,	// (0x0004b182) main_image3_pane

0x715a,	// (0x00047c38) area_side_right_pane_cp01_ParamLimits

0x715a,	// (0x00047c38) area_side_right_pane_cp01

0xab88,	// (0x0004b666) main_image3_pane_g1_ParamLimits

0xab88,	// (0x0004b666) main_image3_pane_g1

0x7171,	// (0x00047c4f) main_image3_pane_g2_ParamLimits

0x7171,	// (0x00047c4f) main_image3_pane_g2

0x7199,	// (0x00047c77) main_image3_pane_g3_ParamLimits

0x7199,	// (0x00047c77) main_image3_pane_g3

0x71c3,	// (0x00047ca1) main_image3_pane_g4_ParamLimits

0x71c3,	// (0x00047ca1) main_image3_pane_g4

0x0003,

0xf75b,	// (0x00050239) main_image3_pane_g_ParamLimits

0xf75b,	// (0x00050239) main_image3_pane_g

0x71ed,	// (0x00047ccb) main_image3_pane_t1_ParamLimits

0x71ed,	// (0x00047ccb) main_image3_pane_t1

0x7245,	// (0x00047d23) main_image3_pane_t2_ParamLimits

0x7245,	// (0x00047d23) main_image3_pane_t2

0x7297,	// (0x00047d75) main_image3_pane_t3_ParamLimits

0x7297,	// (0x00047d75) main_image3_pane_t3

0x0003,

0xf764,	// (0x00050242) main_image3_pane_t_ParamLimits

0xf764,	// (0x00050242) main_image3_pane_t

0xe2c7,	// (0x0004eda5) grid_sctrl_middle_pane_cp01_ParamLimits

0xe2c7,	// (0x0004eda5) grid_sctrl_middle_pane_cp01

0x731f,	// (0x00047dfd) cell_sctrl_middle_pane_cp01_ParamLimits

0x731f,	// (0x00047dfd) cell_sctrl_middle_pane_cp01

0x733c,	// (0x00047e1a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x733c,	// (0x00047e1a) cell_sctrl_middle_pane_cp01_g1

0xa6a4,	// (0x0004b182) main_call4_pane

0x7352,	// (0x00047e30) aid_size_button_call4_ParamLimits

0x7352,	// (0x00047e30) aid_size_button_call4

0x7383,	// (0x00047e61) call4_windows_pane_ParamLimits

0x7383,	// (0x00047e61) call4_windows_pane

0x73a3,	// (0x00047e81) grid_call4_button_pane_ParamLimits

0x73a3,	// (0x00047e81) grid_call4_button_pane

0x73d0,	// (0x00047eae) call4_windows_conf_pane

0x73e7,	// (0x00047ec5) popup_call4_audio_first_window_ParamLimits

0x73e7,	// (0x00047ec5) popup_call4_audio_first_window

0x7433,	// (0x00047f11) popup_call4_audio_second_window_ParamLimits

0x7433,	// (0x00047f11) popup_call4_audio_second_window

0x7447,	// (0x00047f25) popup_call4_audio_wait_window_ParamLimits

0x7447,	// (0x00047f25) popup_call4_audio_wait_window

0x7455,	// (0x00047f33) cell_call4_button_pane_ParamLimits

0x7455,	// (0x00047f33) cell_call4_button_pane

0x747e,	// (0x00047f5c) bg_button_pane_cp09_ParamLimits

0x747e,	// (0x00047f5c) bg_button_pane_cp09

0x748a,	// (0x00047f68) cell_call4_button_pane_g1_ParamLimits

0x748a,	// (0x00047f68) cell_call4_button_pane_g1

0x74b0,	// (0x00047f8e) cell_call4_button_pane_t1_ParamLimits

0x74b0,	// (0x00047f8e) cell_call4_button_pane_t1

0x7510,	// (0x00047fee) popup_call4_audio_conf_window_ParamLimits

0x7510,	// (0x00047fee) popup_call4_audio_conf_window

0x60ab,	// (0x00046b89) mup3_progress_pane_t1_ParamLimits

0x60c2,	// (0x00046ba0) mup3_progress_pane_t2_ParamLimits

0x60d9,	// (0x00046bb7) mup3_progress_pane_t3_ParamLimits

0xf642,	// (0x00050120) mup3_progress_pane_t_ParamLimits

0x60f0,	// (0x00046bce) mup_progress_pane_cp03_ParamLimits

0x694f,	// (0x0004742d) mup3_control_keys_pane_g4_copy1

0xad2e,	// (0x0004b80c) mp4_rocker2_pane_ParamLimits

0xad2e,	// (0x0004b80c) mp4_rocker2_pane

0x7524,	// (0x00048002) mp4_rocker2_pane_g1

0x752c,	// (0x0004800a) mp4_rocker2_pane_g2

0xad9c,	// (0x0004b87a) mp4_rocker2_pane_g3

0xada4,	// (0x0004b882) mp4_rocker2_pane_g4

0xadac,	// (0x0004b88a) mp4_rocker2_pane_g5

0x0004,

0xf76d,	// (0x0005024b) mp4_rocker2_pane_g

0xa6a4,	// (0x0004b182) main_camera4_pane

0xa6a4,	// (0x0004b182) main_video4_pane

0x6e65,	// (0x00047943) main_video_tele_dialer_pane_t1_ParamLimits

0x6e65,	// (0x00047943) main_video_tele_dialer_pane_t1

0x6e7e,	// (0x0004795c) main_video_tele_dialer_pane_t2_ParamLimits

0x6e7e,	// (0x0004795c) main_video_tele_dialer_pane_t2

0x0001,

0xf727,	// (0x00050205) main_video_tele_dialer_pane_t_ParamLimits

0xf727,	// (0x00050205) main_video_tele_dialer_pane_t

0x754c,	// (0x0004802a) cam4_autofocus_pane_ParamLimits

0x754c,	// (0x0004802a) cam4_autofocus_pane

0x7562,	// (0x00048040) cam4_image_uncrop_pane_ParamLimits

0x7562,	// (0x00048040) cam4_image_uncrop_pane

0x757c,	// (0x0004805a) cam4_indicators_pane_ParamLimits

0x757c,	// (0x0004805a) cam4_indicators_pane

0x75a7,	// (0x00048085) main_camera4_pane_g1_ParamLimits

0x75a7,	// (0x00048085) main_camera4_pane_g1

0x75ba,	// (0x00048098) main_camera4_pane_g2_ParamLimits

0x75ba,	// (0x00048098) main_camera4_pane_g2

0x75cd,	// (0x000480ab) main_camera4_pane_g3_ParamLimits

0x75cd,	// (0x000480ab) main_camera4_pane_g3

0x75e0,	// (0x000480be) main_camera4_pane_g4_ParamLimits

0x75e0,	// (0x000480be) main_camera4_pane_g4

0x75f3,	// (0x000480d1) main_camera4_pane_g5_ParamLimits

0x75f3,	// (0x000480d1) main_camera4_pane_g5

0x0005,

0xf778,	// (0x00050256) main_camera4_pane_g_ParamLimits

0xf778,	// (0x00050256) main_camera4_pane_g

0x7617,	// (0x000480f5) main_camera4_pane_t1_ParamLimits

0x7617,	// (0x000480f5) main_camera4_pane_t1

0x591c,	// (0x000463fa) bg_tb_trans_pane_cp06

0xadd8,	// (0x0004b8b6) cam4_indicators_pane_g1

0xade9,	// (0x0004b8c7) cam4_indicators_pane_g2

0x0002,

0xf793,	// (0x00050271) cam4_indicators_pane_g

0xae07,	// (0x0004b8e5) cam4_indicators_pane_t1

0x768d,	// (0x0004816b) main_video4_pane_g1_ParamLimits

0x768d,	// (0x0004816b) main_video4_pane_g1

0x76a0,	// (0x0004817e) main_video4_pane_g2_ParamLimits

0x76a0,	// (0x0004817e) main_video4_pane_g2

0x76b4,	// (0x00048192) main_video4_pane_g3_ParamLimits

0x76b4,	// (0x00048192) main_video4_pane_g3

0x76c8,	// (0x000481a6) main_video4_pane_g4_ParamLimits

0x76c8,	// (0x000481a6) main_video4_pane_g4

0x0004,

0xf79a,	// (0x00050278) main_video4_pane_g_ParamLimits

0xf79a,	// (0x00050278) main_video4_pane_g

0x76f0,	// (0x000481ce) vid4_indicators_pane_ParamLimits

0x76f0,	// (0x000481ce) vid4_indicators_pane

0x7720,	// (0x000481fe) video4_image_uncrop_cif_pane_ParamLimits

0x7720,	// (0x000481fe) video4_image_uncrop_cif_pane

0x773a,	// (0x00048218) video4_image_uncrop_nhd_pane_ParamLimits

0x773a,	// (0x00048218) video4_image_uncrop_nhd_pane

0x7562,	// (0x00048040) video4_image_uncrop_vga_pane_ParamLimits

0x7562,	// (0x00048040) video4_image_uncrop_vga_pane

0xae29,	// (0x0004b907) bg_tb_trans_pane_cp07

0x774e,	// (0x0004822c) vid4_indicators_pane_g1

0x775b,	// (0x00048239) vid4_indicators_pane_g2

0x7768,	// (0x00048246) vid4_indicators_pane_g3

0x0004,

0xf7a5,	// (0x00050283) vid4_indicators_pane_g

0x778d,	// (0x0004826b) vid4_indicators_pane_t1

0x779f,	// (0x0004827d) cam4_autofocus_pane_g1

0x77a7,	// (0x00048285) cam4_autofocus_pane_g2

0x77af,	// (0x0004828d) cam4_autofocus_pane_g3

0x0002,

0xf7b0,	// (0x0005028e) cam4_autofocus_pane_g

0x77b7,	// (0x00048295) cam4_autofocus_pane_g3_copy1

0x6ea7,	// (0x00047985) video_down_pane_cp_t1

0x6eb5,	// (0x00047993) video_down_pane_cp_t2

0x0001,

0xf72c,	// (0x0005020a) video_down_pane_cp_t

0xe2c7,	// (0x0004eda5) popup_vitu2_window_ParamLimits

0xe2c7,	// (0x0004eda5) popup_vitu2_window

0x77bf,	// (0x0004829d) aid_size_cell2_itu2_ParamLimits

0x77bf,	// (0x0004829d) aid_size_cell2_itu2

0x77e5,	// (0x000482c3) aid_size_cell_itu2_ParamLimits

0x77e5,	// (0x000482c3) aid_size_cell_itu2

0x7841,	// (0x0004831f) bg_popup_window_pane_cp09_ParamLimits

0x7841,	// (0x0004831f) bg_popup_window_pane_cp09

0x784f,	// (0x0004832d) field_vitu2_entry_pane_ParamLimits

0x784f,	// (0x0004832d) field_vitu2_entry_pane

0x7875,	// (0x00048353) grid_vitu2_function_pane_ParamLimits

0x7875,	// (0x00048353) grid_vitu2_function_pane

0x78c6,	// (0x000483a4) grid_vitu2_itu_pane_ParamLimits

0x78c6,	// (0x000483a4) grid_vitu2_itu_pane

0x7959,	// (0x00048437) cell_vitu2_itu_pane_ParamLimits

0x7959,	// (0x00048437) cell_vitu2_itu_pane

0x797d,	// (0x0004845b) cell_vitu2_function_pane_ParamLimits

0x797d,	// (0x0004845b) cell_vitu2_function_pane

0x79bc,	// (0x0004849a) bg_popup_call_pane_cp08_ParamLimits

0x79bc,	// (0x0004849a) bg_popup_call_pane_cp08

0x79d5,	// (0x000484b3) field_vitu2_entry_pane_g1

0x79e1,	// (0x000484bf) field_vitu2_entry_pane_g2

0x0002,

0xf7b7,	// (0x00050295) field_vitu2_entry_pane_g

0x0f0e,	// (0x000419ec) field_vitu2_entry_pane_t1_ParamLimits

0x0f0e,	// (0x000419ec) field_vitu2_entry_pane_t1

0xae41,	// (0x0004b91f) field_vitu2_entry_pane_t2_ParamLimits

0xae41,	// (0x0004b91f) field_vitu2_entry_pane_t2

0x0001,

0xf7be,	// (0x0005029c) field_vitu2_entry_pane_t_ParamLimits

0xf7be,	// (0x0005029c) field_vitu2_entry_pane_t

0x7a03,	// (0x000484e1) bg_button_pane_cp010_ParamLimits

0x7a03,	// (0x000484e1) bg_button_pane_cp010

0x7a11,	// (0x000484ef) cell_vitu2_itu_pane_g1

0x7a2f,	// (0x0004850d) cell_vitu2_itu_pane_t1_ParamLimits

0x7a2f,	// (0x0004850d) cell_vitu2_itu_pane_t1

0x0f3d,	// (0x00041a1b) cell_vitu2_itu_pane_t2_ParamLimits

0x0f3d,	// (0x00041a1b) cell_vitu2_itu_pane_t2

0x0002,

0xf7c8,	// (0x000502a6) cell_vitu2_itu_pane_t_ParamLimits

0xf7c8,	// (0x000502a6) cell_vitu2_itu_pane_t

0xe2c7,	// (0x0004eda5) bg_button_pane_cp011

0x7a95,	// (0x00048573) cell_vitu2_function_pane_g1

0xa6a4,	// (0x0004b182) main_myfav_hc_pane

0x72e7,	// (0x00047dc5) popup_image3_note_pane_ParamLimits

0x72e7,	// (0x00047dc5) popup_image3_note_pane

0x7303,	// (0x00047de1) popup_image3_tool_bar_pane_ParamLimits

0x7303,	// (0x00047de1) popup_image3_tool_bar_pane

0x0fc1,	// (0x00041a9f) cell_vitu2_itu_pane_t3_ParamLimits

0x0fc1,	// (0x00041a9f) cell_vitu2_itu_pane_t3

0xa6a4,	// (0x0004b182) bg_popup_trans_pane

0x7aa9,	// (0x00048587) grid_image3_tool_bar_pane

0x7ab3,	// (0x00048591) bg_popup_trans_pane_g1

0xd50e,	// (0x0004dfec) bg_popup_trans_pane_g2

0x7abb,	// (0x00048599) bg_popup_trans_pane_g3

0x7ac3,	// (0x000485a1) bg_popup_trans_pane_g4

0x7acb,	// (0x000485a9) bg_popup_trans_pane_g5

0x7ad3,	// (0x000485b1) bg_popup_trans_pane_g6

0x7adb,	// (0x000485b9) bg_popup_trans_pane_g7

0x7ae3,	// (0x000485c1) bg_popup_trans_pane_g8

0xd4ee,	// (0x0004dfcc) bg_popup_trans_pane_g9

0x0008,

0xf7cf,	// (0x000502ad) bg_popup_trans_pane_g

0x7aeb,	// (0x000485c9) cell_image3_tool_bar_pane_ParamLimits

0x7aeb,	// (0x000485c9) cell_image3_tool_bar_pane

0x5645,	// (0x00046123) cell_image3_tool_bar_pane_g1

0xa6a4,	// (0x0004b182) bg_popup_trans_pane_cp1

0x7aff,	// (0x000485dd) popup_image3_note_pane_t1

0x7b0d,	// (0x000485eb) popup_image3_note_pane_t2

0x7b1b,	// (0x000485f9) popup_image3_note_pane_t3

0x0002,

0xf7e2,	// (0x000502c0) popup_image3_note_pane_t

0x7b29,	// (0x00048607) popup_image3_note_pane_t3_copy1

0x7b37,	// (0x00048615) bg_myfav_hc_instruction_pane_ParamLimits

0x7b37,	// (0x00048615) bg_myfav_hc_instruction_pane

0x7b4b,	// (0x00048629) cell_myfav_contact_pane_ParamLimits

0x7b4b,	// (0x00048629) cell_myfav_contact_pane

0x7b69,	// (0x00048647) cell_myfav_contact_pane_cp1_ParamLimits

0x7b69,	// (0x00048647) cell_myfav_contact_pane_cp1

0x7b81,	// (0x0004865f) cell_myfav_contact_pane_cp2_ParamLimits

0x7b81,	// (0x0004865f) cell_myfav_contact_pane_cp2

0x7b99,	// (0x00048677) cell_myfav_contact_pane_cp3_ParamLimits

0x7b99,	// (0x00048677) cell_myfav_contact_pane_cp3

0x7bb0,	// (0x0004868e) cell_myfav_contact_pane_cp4_ParamLimits

0x7bb0,	// (0x0004868e) cell_myfav_contact_pane_cp4

0x7bc8,	// (0x000486a6) cell_myfav_contact_pane_cp5_ParamLimits

0x7bc8,	// (0x000486a6) cell_myfav_contact_pane_cp5

0x7bdc,	// (0x000486ba) cell_myfav_contact_pane_cp6_ParamLimits

0x7bdc,	// (0x000486ba) cell_myfav_contact_pane_cp6

0x7bf2,	// (0x000486d0) cell_myfav_contact_pane_cp7_ParamLimits

0x7bf2,	// (0x000486d0) cell_myfav_contact_pane_cp7

0x7c0c,	// (0x000486ea) listscroll_gen_pane_cp05

0x7c15,	// (0x000486f3) main_myfav_hc_pane_g1_ParamLimits

0x7c15,	// (0x000486f3) main_myfav_hc_pane_g1

0x7c2f,	// (0x0004870d) main_myfav_hc_pane_g2_ParamLimits

0x7c2f,	// (0x0004870d) main_myfav_hc_pane_g2

0x0002,

0xf7e9,	// (0x000502c7) main_myfav_hc_pane_g_ParamLimits

0xf7e9,	// (0x000502c7) main_myfav_hc_pane_g

0x7c61,	// (0x0004873f) main_myfav_hc_pane_t1_ParamLimits

0x7c61,	// (0x0004873f) main_myfav_hc_pane_t1

0x7c78,	// (0x00048756) main_myfav_hc_pane_t2_ParamLimits

0x7c78,	// (0x00048756) main_myfav_hc_pane_t2

0x7c8a,	// (0x00048768) main_myfav_hc_pane_t3_ParamLimits

0x7c8a,	// (0x00048768) main_myfav_hc_pane_t3

0x7c9c,	// (0x0004877a) main_myfav_hc_pane_t4_ParamLimits

0x7c9c,	// (0x0004877a) main_myfav_hc_pane_t4

0x0004,

0xf7f0,	// (0x000502ce) main_myfav_hc_pane_t_ParamLimits

0xf7f0,	// (0x000502ce) main_myfav_hc_pane_t

0x5645,	// (0x00046123) bg_myfav_hc_instruction_pane_g1

0x7cc4,	// (0x000487a2) cell_myfav_contact_pane_g1_ParamLimits

0x7cc4,	// (0x000487a2) cell_myfav_contact_pane_g1

0x7cc4,	// (0x000487a2) cell_myfav_contact_pane_g2_ParamLimits

0x7cc4,	// (0x000487a2) cell_myfav_contact_pane_g2

0x7cd0,	// (0x000487ae) cell_myfav_contact_pane_g3_ParamLimits

0x7cd0,	// (0x000487ae) cell_myfav_contact_pane_g3

0x5c7a,	// (0x00046758) cell_myfav_contact_pane_g4_ParamLimits

0x5c7a,	// (0x00046758) cell_myfav_contact_pane_g4

0x7cdd,	// (0x000487bb) cell_myfav_contact_pane_g5_ParamLimits

0x7cdd,	// (0x000487bb) cell_myfav_contact_pane_g5

0x0004,

0xf7fb,	// (0x000502d9) cell_myfav_contact_pane_g_ParamLimits

0xf7fb,	// (0x000502d9) cell_myfav_contact_pane_g

0x7c49,	// (0x00048727) main_myfav_hc_pane_g3_ParamLimits

0x7c49,	// (0x00048727) main_myfav_hc_pane_g3

0x1978,	// (0x00042456) popup_adpt_find_window

0x7ce9,	// (0x000487c7) afind_page_pane_ParamLimits

0x7ce9,	// (0x000487c7) afind_page_pane

0x7cfe,	// (0x000487dc) aid_size_cell_afind_ParamLimits

0x7cfe,	// (0x000487dc) aid_size_cell_afind

0x7d1c,	// (0x000487fa) bg_popup_sub_pane_cp09_ParamLimits

0x7d1c,	// (0x000487fa) bg_popup_sub_pane_cp09

0x7d29,	// (0x00048807) find_pane_cp01_ParamLimits

0x7d29,	// (0x00048807) find_pane_cp01

0x7d36,	// (0x00048814) grid_afind_control_pane_ParamLimits

0x7d36,	// (0x00048814) grid_afind_control_pane

0x7d4a,	// (0x00048828) grid_afind_pane_ParamLimits

0x7d4a,	// (0x00048828) grid_afind_pane

0x7d6c,	// (0x0004884a) cell_afind_pane_ParamLimits

0x7d6c,	// (0x0004884a) cell_afind_pane

0x5645,	// (0x00046123) afind_page_pane_g1

0x7dcd,	// (0x000488ab) afind_page_pane_g2

0x7dd6,	// (0x000488b4) afind_page_pane_g3

0x0002,

0xf806,	// (0x000502e4) afind_page_pane_g

0x7ddf,	// (0x000488bd) afind_page_pane_t1

0x7dff,	// (0x000488dd) cell_afind_grid_control_pane_ParamLimits

0x7dff,	// (0x000488dd) cell_afind_grid_control_pane

0x7088,	// (0x00047b66) bg_button_pane_cp69_ParamLimits

0x7088,	// (0x00047b66) bg_button_pane_cp69

0x7e0e,	// (0x000488ec) cell_afind_pane_g1_ParamLimits

0x7e0e,	// (0x000488ec) cell_afind_pane_g1

0x7e1b,	// (0x000488f9) cell_afind_pane_t1_ParamLimits

0x7e1b,	// (0x000488f9) cell_afind_pane_t1

0xd309,	// (0x0004dde7) bg_button_pane_cp72

0x7e2d,	// (0x0004890b) cell_afind_grid_control_pane_g1

0x4069,	// (0x00044b47) aid_image_placing_area_ParamLimits

0x4069,	// (0x00044b47) aid_image_placing_area

0x69f8,	// (0x000474d6) field_vitu_entry_pane_g1_ParamLimits

0x69f8,	// (0x000474d6) field_vitu_entry_pane_g1

0x6a04,	// (0x000474e2) field_vitu_entry_pane_g2_ParamLimits

0x6a04,	// (0x000474e2) field_vitu_entry_pane_g2

0x0001,

0xf6b7,	// (0x00050195) field_vitu_entry_pane_g_ParamLimits

0xf6b7,	// (0x00050195) field_vitu_entry_pane_g

0x6a59,	// (0x00047537) cell_vitu_itu_pane_g1_ParamLimits

0x6a9b,	// (0x00047579) cell_vitu_itu_pane_t3_ParamLimits

0x6a9b,	// (0x00047579) cell_vitu_itu_pane_t3

0x6f8f,	// (0x00047a6d) mp4_progress_pane_t1_ParamLimits

0x6fa8,	// (0x00047a86) mp4_progress_pane_t2_ParamLimits

0xf74c,	// (0x0005022a) mp4_progress_pane_t_ParamLimits

0x6fc1,	// (0x00047a9f) mup_progress_pane_cp04_ParamLimits

0x7cb0,	// (0x0004878e) main_myfav_hc_pane_t5_ParamLimits

0x7cb0,	// (0x0004878e) main_myfav_hc_pane_t5

0xa6ca,	// (0x0004b1a8) aid_zoom_text_primary

0x1978,	// (0x00042456) popup_adpt_find_window_ParamLimits

0xe2c7,	// (0x0004eda5) main_cam_set_pane

0x7593,	// (0x00048071) cam4_zoom_pane_ParamLimits

0x7593,	// (0x00048071) cam4_zoom_pane

0x7e36,	// (0x00048914) main_cam_set_pane_g1_ParamLimits

0x7e36,	// (0x00048914) main_cam_set_pane_g1

0x7e44,	// (0x00048922) main_cam_set_pane_g2_ParamLimits

0x7e44,	// (0x00048922) main_cam_set_pane_g2

0x0001,

0xf80d,	// (0x000502eb) main_cam_set_pane_g_ParamLimits

0xf80d,	// (0x000502eb) main_cam_set_pane_g

0x7e65,	// (0x00048943) main_cam_set_pane_t1_ParamLimits

0x7e65,	// (0x00048943) main_cam_set_pane_t1

0x7e80,	// (0x0004895e) main_cset_listscroll_pane_ParamLimits

0x7e80,	// (0x0004895e) main_cset_listscroll_pane

0x7ea0,	// (0x0004897e) main_cset_slider_pane_ParamLimits

0x7ea0,	// (0x0004897e) main_cset_slider_pane

0x7ece,	// (0x000489ac) main_cset_list_pane_ParamLimits

0x7ece,	// (0x000489ac) main_cset_list_pane

0x7ede,	// (0x000489bc) scroll_pane_cp028

0x7ee7,	// (0x000489c5) aid_area_touch_slider

0x7f03,	// (0x000489e1) cset_slider_pane

0x7f2d,	// (0x00048a0b) main_cset_slider_pane_g1

0x7f42,	// (0x00048a20) main_cset_slider_pane_g2

0x0011,

0xf812,	// (0x000502f0) main_cset_slider_pane_g

0x802e,	// (0x00048b0c) main_cset_slider_pane_t1

0x805c,	// (0x00048b3a) main_cset_slider_pane_t2

0x8076,	// (0x00048b54) main_cset_slider_pane_t3

0x8090,	// (0x00048b6e) main_cset_slider_pane_t4

0x80aa,	// (0x00048b88) main_cset_slider_pane_t5

0x80c4,	// (0x00048ba2) main_cset_slider_pane_t6

0x80d9,	// (0x00048bb7) main_cset_slider_pane_t7

0x000e,

0xf837,	// (0x00050315) main_cset_slider_pane_t

0x824f,	// (0x00048d2d) cset_list_set_pane_ParamLimits

0x824f,	// (0x00048d2d) cset_list_set_pane

0x8261,	// (0x00048d3f) aid_position_infowindow_above

0x8269,	// (0x00048d47) aid_position_infowindow_below

0xae5e,	// (0x0004b93c) cset_list_set_pane_g1_ParamLimits

0xae5e,	// (0x0004b93c) cset_list_set_pane_g1

0xae6a,	// (0x0004b948) cset_list_set_pane_g3_ParamLimits

0xae6a,	// (0x0004b948) cset_list_set_pane_g3

0x0001,

0xf856,	// (0x00050334) cset_list_set_pane_g_ParamLimits

0xf856,	// (0x00050334) cset_list_set_pane_g

0x1019,	// (0x00041af7) cset_list_set_pane_t1_ParamLimits

0x1019,	// (0x00041af7) cset_list_set_pane_t1

0xe2c7,	// (0x0004eda5) list_highlight_pane_cp021_ParamLimits

0xe2c7,	// (0x0004eda5) list_highlight_pane_cp021

0xdd2f,	// (0x0004e80d) cset_slider_pane_g1

0xdd41,	// (0x0004e81f) cset_slider_pane_g2

0xdd38,	// (0x0004e816) cset_slider_pane_g3

0x0002,

0x07ca,	// (0x000412a8) cset_slider_pane_g

0xc8f3,	// (0x0004d3d1) aid_area_touch_cam4_zoom

0xc8fb,	// (0x0004d3d9) cam4_zoom_cont_pane

0xc903,	// (0x0004d3e1) cam4_zoom_pane_g1

0xc90b,	// (0x0004d3e9) cam4_zoom_pane_g2

0x8271,	// (0x00048d4f) cam4_zoom_pane_g3

0x0002,

0xf85b,	// (0x00050339) cam4_zoom_pane_g

0xae79,	// (0x0004b957) cam4_zoom_cont_pane_g1

0xae82,	// (0x0004b960) cam4_zoom_cont_pane_g2

0xae8b,	// (0x0004b969) cam4_zoom_cont_pane_g3

0x0002,

0xf862,	// (0x00050340) cam4_zoom_cont_pane_g

0x7370,	// (0x00047e4e) call4_image_pane_ParamLimits

0x7370,	// (0x00047e4e) call4_image_pane

0x73d0,	// (0x00047eae) call4_windows_conf_pane_ParamLimits

0x7411,	// (0x00047eef) popup_call4_audio_in_window_ParamLimits

0x7411,	// (0x00047eef) popup_call4_audio_in_window

0xa6a4,	// (0x0004b182) bg_popup_call2_act_pane_cp02

0x7508,	// (0x00047fe6) call4_list_conf_pane

0x5645,	// (0x00046123) call4_image_pane_g1

0x5645,	// (0x00046123) call4_image_pane_g2

0x0001,

0xf582,	// (0x00050060) call4_image_pane_g

0x8279,	// (0x00048d57) list_single_graphic_popup_conf4_pane_ParamLimits

0x8279,	// (0x00048d57) list_single_graphic_popup_conf4_pane

0xa6a4,	// (0x0004b182) list_highlight_pane_cp022

0x828c,	// (0x00048d6a) list_single_graphic_popup_conf4_pane_g1

0xda0e,	// (0x0004e4ec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf869,	// (0x00050347) list_single_graphic_popup_conf4_pane_g

0x8294,	// (0x00048d72) list_single_graphic_popup_conf4_pane_t1

0x2800,	// (0x000432de) popup_vtel_slider_window_ParamLimits

0x2800,	// (0x000432de) popup_vtel_slider_window

0x7054,	// (0x00047b32) dialer2_ne_pane_t2_ParamLimits

0x7054,	// (0x00047b32) dialer2_ne_pane_t2

0x0001,

0xf751,	// (0x0005022f) dialer2_ne_pane_t_ParamLimits

0xf751,	// (0x0005022f) dialer2_ne_pane_t

0x535e,	// (0x00045e3c) bg_popup_sub_pane_cp010_ParamLimits

0x535e,	// (0x00045e3c) bg_popup_sub_pane_cp010

0x82aa,	// (0x00048d88) popup_vtel_slider_window_g1_ParamLimits

0x82aa,	// (0x00048d88) popup_vtel_slider_window_g1

0x82bd,	// (0x00048d9b) popup_vtel_slider_window_g2_ParamLimits

0x82bd,	// (0x00048d9b) popup_vtel_slider_window_g2

0x0003,

0xf86e,	// (0x0005034c) popup_vtel_slider_window_g_ParamLimits

0xf86e,	// (0x0005034c) popup_vtel_slider_window_g

0x8313,	// (0x00048df1) vtel_slider_pane_ParamLimits

0x8313,	// (0x00048df1) vtel_slider_pane

0x8335,	// (0x00048e13) vtel_slider_pane_g1_ParamLimits

0x8335,	// (0x00048e13) vtel_slider_pane_g1

0x8349,	// (0x00048e27) vtel_slider_pane_g2_ParamLimits

0x8349,	// (0x00048e27) vtel_slider_pane_g2

0x8361,	// (0x00048e3f) vtel_slider_pane_g3_ParamLimits

0x8361,	// (0x00048e3f) vtel_slider_pane_g3

0x8335,	// (0x00048e13) vtel_slider_pane_g4_ParamLimits

0x8335,	// (0x00048e13) vtel_slider_pane_g4

0x8377,	// (0x00048e55) vtel_slider_pane_g5_ParamLimits

0x8377,	// (0x00048e55) vtel_slider_pane_g5

0x0004,

0xf877,	// (0x00050355) vtel_slider_pane_g_ParamLimits

0xf877,	// (0x00050355) vtel_slider_pane_g

0xa6a4,	// (0x0004b182) main_gallery2_pane

0x7811,	// (0x000482ef) aid_size_row_itut2_dropdow_list_ParamLimits

0x7811,	// (0x000482ef) aid_size_row_itut2_dropdow_list

0x789d,	// (0x0004837b) grid_vitu2_function_top_pane_ParamLimits

0x789d,	// (0x0004837b) grid_vitu2_function_top_pane

0x7902,	// (0x000483e0) popup_vitu2_dropdown_list_window_ParamLimits

0x7902,	// (0x000483e0) popup_vitu2_dropdown_list_window

0x792b,	// (0x00048409) popup_vitu2_match_list_window

0x838d,	// (0x00048e6b) cell_vitu2_function_top_pane_ParamLimits

0x838d,	// (0x00048e6b) cell_vitu2_function_top_pane

0x83ab,	// (0x00048e89) cell_vitu2_function_top_pane_cp01_ParamLimits

0x83ab,	// (0x00048e89) cell_vitu2_function_top_pane_cp01

0x83c9,	// (0x00048ea7) cell_vitu2_function_top_wide_pane_ParamLimits

0x83c9,	// (0x00048ea7) cell_vitu2_function_top_wide_pane

0xe2c7,	// (0x0004eda5) bg_button_pane_cp012

0x83e7,	// (0x00048ec5) cell_vitu2_function_top_pane_g1

0xc913,	// (0x0004d3f1) bg_button_pane_cp013_ParamLimits

0xc913,	// (0x0004d3f1) bg_button_pane_cp013

0x83fb,	// (0x00048ed9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x83fb,	// (0x00048ed9) cell_vitu2_function_top_wide_pane_g1

0xe2c7,	// (0x0004eda5) bg_popup_sub_pane_cp20

0x8413,	// (0x00048ef1) list_vitu2_match_list_pane

0x7ab3,	// (0x00048591) bg_popup_sub_pane_cp20_g1

0x7abb,	// (0x00048599) bg_popup_sub_pane_cp20_g2

0xd50e,	// (0x0004dfec) bg_popup_sub_pane_cp20_g3

0x7ac3,	// (0x000485a1) bg_popup_sub_pane_cp20_g4

0xd4ee,	// (0x0004dfcc) bg_popup_sub_pane_cp20_g5

0x8431,	// (0x00048f0f) bg_popup_sub_pane_cp20_g6

0x7ad3,	// (0x000485b1) bg_popup_sub_pane_cp20_g7

0x7adb,	// (0x000485b9) bg_popup_sub_pane_cp20_g8

0x7ae3,	// (0x000485c1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf882,	// (0x00050360) bg_popup_sub_pane_cp20_g

0xc92f,	// (0x0004d40d) list_vitu2_match_list_item_pane_ParamLimits

0xc92f,	// (0x0004d40d) list_vitu2_match_list_item_pane

0xc941,	// (0x0004d41f) list_vitu2_match_list_item_pane_t1

0xa6a4,	// (0x0004b182) bg_popup_sub_pane_cp21

0xd928,	// (0x0004e406) grid_vitu2_dropdown_list_pane

0x8439,	// (0x00048f17) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8439,	// (0x00048f17) cell_vitu2_dropdown_list_char_pane

0x845a,	// (0x00048f38) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x845a,	// (0x00048f38) cell_vitu2_dropdown_list_ctrl_pane

0x8486,	// (0x00048f64) cell_vitu2_dropdown_list_char_pane_g1

0x848f,	// (0x00048f6d) cell_vitu2_dropdown_list_char_pane_g2

0x8498,	// (0x00048f76) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf89f,	// (0x0005037d) cell_vitu2_dropdown_list_char_pane_g

0x84a1,	// (0x00048f7f) cell_vitu2_dropdown_list_char_pane_t1

0x84af,	// (0x00048f8d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x84af,	// (0x00048f8d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x84bc,	// (0x00048f9a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x84bc,	// (0x00048f9a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x84c9,	// (0x00048fa7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x84c9,	// (0x00048fa7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x84d6,	// (0x00048fb4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x84d6,	// (0x00048fb4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x591c,	// (0x000463fa) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x591c,	// (0x000463fa) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8a6,	// (0x00050384) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8a6,	// (0x00050384) cell_vitu2_dropdown_list_ctrl_pane_g

0x84f2,	// (0x00048fd0) aid_size_cell_gallery2_ParamLimits

0x84f2,	// (0x00048fd0) aid_size_cell_gallery2

0x8508,	// (0x00048fe6) grid_gallery2_pane_ParamLimits

0x8508,	// (0x00048fe6) grid_gallery2_pane

0x851c,	// (0x00048ffa) scroll_pane_cp029_ParamLimits

0x851c,	// (0x00048ffa) scroll_pane_cp029

0x8528,	// (0x00049006) cell_gallery2_pane_ParamLimits

0x8528,	// (0x00049006) cell_gallery2_pane

0x855e,	// (0x0004903c) cell_gallery2_pane_g2

0x8568,	// (0x00049046) cell_gallery2_pane_g3

0x8570,	// (0x0004904e) cell_gallery2_pane_g4

0x8578,	// (0x00049056) cell_gallery2_pane_g5

0xdbf9,	// (0x0004e6d7) grid_highlight_pane_cp10

0x792b,	// (0x00048409) popup_vitu2_match_list_window_ParamLimits

0x7942,	// (0x00048420) popup_vitu2_query_window_ParamLimits

0x7942,	// (0x00048420) popup_vitu2_query_window

0xa6a4,	// (0x0004b182) bg_vitu2_candi_button_pane

0x8486,	// (0x00048f64) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x848f,	// (0x00048f6d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x8498,	// (0x00048f76) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x1063,	// (0x00041b41) bg_button_pane_cp015

0x8580,	// (0x0004905e) bg_button_pane_cp016

0x8593,	// (0x00049071) bg_button_pane_cp017

0xefff,	// (0x0004fadd) bg_popup_sub_pane_cp22

0x85b7,	// (0x00049095) popup_vitu2_query_window_g1

0x1096,	// (0x00041b74) popup_vitu2_query_window_g2

0x0002,

0xf8b1,	// (0x0005038f) popup_vitu2_query_window_g

0x10b5,	// (0x00041b93) popup_vitu2_query_window_t1_ParamLimits

0x10b5,	// (0x00041b93) popup_vitu2_query_window_t1

0x10ea,	// (0x00041bc8) popup_vitu2_query_window_t2_ParamLimits

0x10ea,	// (0x00041bc8) popup_vitu2_query_window_t2

0x10fc,	// (0x00041bda) popup_vitu2_query_window_t3_ParamLimits

0x10fc,	// (0x00041bda) popup_vitu2_query_window_t3

0x85c3,	// (0x000490a1) popup_vitu2_query_window_t4_ParamLimits

0x85c3,	// (0x000490a1) popup_vitu2_query_window_t4

0x85e4,	// (0x000490c2) popup_vitu2_query_window_t5_ParamLimits

0x85e4,	// (0x000490c2) popup_vitu2_query_window_t5

0x0006,

0xf8b8,	// (0x00050396) popup_vitu2_query_window_t_ParamLimits

0xf8b8,	// (0x00050396) popup_vitu2_query_window_t

0x7ec6,	// (0x000489a4) main_cset_text_pane

0x7ee7,	// (0x000489c5) aid_area_touch_slider_ParamLimits

0x7f03,	// (0x000489e1) cset_slider_pane_ParamLimits

0x7f2d,	// (0x00048a0b) main_cset_slider_pane_g1_ParamLimits

0x7f42,	// (0x00048a20) main_cset_slider_pane_g2_ParamLimits

0x7f57,	// (0x00048a35) main_cset_slider_pane_g3_ParamLimits

0x7f57,	// (0x00048a35) main_cset_slider_pane_g3

0x7f63,	// (0x00048a41) main_cset_slider_pane_g4_ParamLimits

0x7f63,	// (0x00048a41) main_cset_slider_pane_g4

0x7f72,	// (0x00048a50) main_cset_slider_pane_g5_ParamLimits

0x7f72,	// (0x00048a50) main_cset_slider_pane_g5

0x7f7e,	// (0x00048a5c) main_cset_slider_pane_g6_ParamLimits

0x7f7e,	// (0x00048a5c) main_cset_slider_pane_g6

0xf812,	// (0x000502f0) main_cset_slider_pane_g_ParamLimits

0x802e,	// (0x00048b0c) main_cset_slider_pane_t1_ParamLimits

0x805c,	// (0x00048b3a) main_cset_slider_pane_t2_ParamLimits

0x8076,	// (0x00048b54) main_cset_slider_pane_t3_ParamLimits

0x8090,	// (0x00048b6e) main_cset_slider_pane_t4_ParamLimits

0x80aa,	// (0x00048b88) main_cset_slider_pane_t5_ParamLimits

0x80c4,	// (0x00048ba2) main_cset_slider_pane_t6_ParamLimits

0x80d9,	// (0x00048bb7) main_cset_slider_pane_t7_ParamLimits

0x8103,	// (0x00048be1) main_cset_slider_pane_t8_ParamLimits

0x8103,	// (0x00048be1) main_cset_slider_pane_t8

0x812b,	// (0x00048c09) main_cset_slider_pane_t9_ParamLimits

0x812b,	// (0x00048c09) main_cset_slider_pane_t9

0x8153,	// (0x00048c31) main_cset_slider_pane_t10_ParamLimits

0x8153,	// (0x00048c31) main_cset_slider_pane_t10

0x817b,	// (0x00048c59) main_cset_slider_pane_t11_ParamLimits

0x817b,	// (0x00048c59) main_cset_slider_pane_t11

0x81a3,	// (0x00048c81) main_cset_slider_pane_t12_ParamLimits

0x81a3,	// (0x00048c81) main_cset_slider_pane_t12

0x81c0,	// (0x00048c9e) main_cset_slider_pane_t13_ParamLimits

0x81c0,	// (0x00048c9e) main_cset_slider_pane_t13

0xf837,	// (0x00050315) main_cset_slider_pane_t_ParamLimits

0xa6a4,	// (0x0004b182) bg_popup_sub_pane_cp011

0x8605,	// (0x000490e3) main_cset_text_pane_g1

0x860d,	// (0x000490eb) main_cset_text_pane_t1

0x861b,	// (0x000490f9) main_cset_text_pane_t2

0x8629,	// (0x00049107) main_cset_text_pane_t3

0x8637,	// (0x00049115) main_cset_text_pane_t4

0x8645,	// (0x00049123) main_cset_text_pane_t5

0x8653,	// (0x00049131) main_cset_text_pane_t6

0x8661,	// (0x0004913f) main_cset_text_pane_t7

0x0006,

0xf8c7,	// (0x000503a5) main_cset_text_pane_t

0xa6a4,	// (0x0004b182) main_cam4_burst_pane

0xa6a4,	// (0x0004b182) main_cam5_pane

0x7ded,	// (0x000488cb) bg_button_pane_cp019

0x7df6,	// (0x000488d4) bg_button_pane_cp020

0x7f92,	// (0x00048a70) main_cset_slider_pane_g7_ParamLimits

0x7f92,	// (0x00048a70) main_cset_slider_pane_g7

0x7f9e,	// (0x00048a7c) main_cset_slider_pane_g8_ParamLimits

0x7f9e,	// (0x00048a7c) main_cset_slider_pane_g8

0x7faa,	// (0x00048a88) main_cset_slider_pane_g9_ParamLimits

0x7faa,	// (0x00048a88) main_cset_slider_pane_g9

0x7fb6,	// (0x00048a94) main_cset_slider_pane_g10_ParamLimits

0x7fb6,	// (0x00048a94) main_cset_slider_pane_g10

0x7fc2,	// (0x00048aa0) main_cset_slider_pane_g11_ParamLimits

0x7fc2,	// (0x00048aa0) main_cset_slider_pane_g11

0x7fce,	// (0x00048aac) main_cset_slider_pane_g12_ParamLimits

0x7fce,	// (0x00048aac) main_cset_slider_pane_g12

0x7fda,	// (0x00048ab8) main_cset_slider_pane_g13_ParamLimits

0x7fda,	// (0x00048ab8) main_cset_slider_pane_g13

0x7fe6,	// (0x00048ac4) main_cset_slider_pane_g14_ParamLimits

0x7fe6,	// (0x00048ac4) main_cset_slider_pane_g14

0x7ff2,	// (0x00048ad0) main_cset_slider_pane_g15_ParamLimits

0x7ff2,	// (0x00048ad0) main_cset_slider_pane_g15

0x81dd,	// (0x00048cbb) main_cset_slider_pane_t14_ParamLimits

0x81dd,	// (0x00048cbb) main_cset_slider_pane_t14

0x8216,	// (0x00048cf4) main_cset_slider_pane_t15_ParamLimits

0x8216,	// (0x00048cf4) main_cset_slider_pane_t15

0x866f,	// (0x0004914d) aid_cam4_burst_size_cell_ParamLimits

0x866f,	// (0x0004914d) aid_cam4_burst_size_cell

0x868f,	// (0x0004916d) grid_cam4_burst_pane_ParamLimits

0x868f,	// (0x0004916d) grid_cam4_burst_pane

0x86c7,	// (0x000491a5) linegrid_cam4_burst_pane_ParamLimits

0x86c7,	// (0x000491a5) linegrid_cam4_burst_pane

0x86eb,	// (0x000491c9) scroll_pane_cp30_ParamLimits

0x86eb,	// (0x000491c9) scroll_pane_cp30

0x86f7,	// (0x000491d5) cell_cam4_burst_pane_ParamLimits

0x86f7,	// (0x000491d5) cell_cam4_burst_pane

0x8744,	// (0x00049222) linegrid_cam4_burst_pane_g1_ParamLimits

0x8744,	// (0x00049222) linegrid_cam4_burst_pane_g1

0x8751,	// (0x0004922f) linegrid_cam4_burst_pane_g2_ParamLimits

0x8751,	// (0x0004922f) linegrid_cam4_burst_pane_g2

0x8762,	// (0x00049240) linegrid_cam4_burst_pane_g3_ParamLimits

0x8762,	// (0x00049240) linegrid_cam4_burst_pane_g3

0x0002,

0xf8d6,	// (0x000503b4) linegrid_cam4_burst_pane_g_ParamLimits

0xf8d6,	// (0x000503b4) linegrid_cam4_burst_pane_g

0x876f,	// (0x0004924d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x876f,	// (0x0004924d) linegrid_cam4_burst_pane_g3_copy1

0x8789,	// (0x00049267) linegrid_cam4_burst_pane_g4_ParamLimits

0x8789,	// (0x00049267) linegrid_cam4_burst_pane_g4

0x8796,	// (0x00049274) linegrid_cam4_burst_pane_g5_ParamLimits

0x8796,	// (0x00049274) linegrid_cam4_burst_pane_g5

0x87a7,	// (0x00049285) linegrid_cam4_burst_pane_g6_ParamLimits

0x87a7,	// (0x00049285) linegrid_cam4_burst_pane_g6

0x87be,	// (0x0004929c) linegrid_cam4_burst_pane_g7_ParamLimits

0x87be,	// (0x0004929c) linegrid_cam4_burst_pane_g7

0x87cb,	// (0x000492a9) cell_cam4_burst_pane_g1

0x87ea,	// (0x000492c8) main_cam5_pane_t1_ParamLimits

0x87ea,	// (0x000492c8) main_cam5_pane_t1

0x87fc,	// (0x000492da) main_cam5_pane_t2_ParamLimits

0x87fc,	// (0x000492da) main_cam5_pane_t2

0x880e,	// (0x000492ec) main_cam5_pane_t3_ParamLimits

0x880e,	// (0x000492ec) main_cam5_pane_t3

0x8820,	// (0x000492fe) main_cam5_pane_t4_ParamLimits

0x8820,	// (0x000492fe) main_cam5_pane_t4

0x8838,	// (0x00049316) main_cam5_pane_t5_ParamLimits

0x8838,	// (0x00049316) main_cam5_pane_t5

0x884c,	// (0x0004932a) main_cam5_pane_t6_ParamLimits

0x884c,	// (0x0004932a) main_cam5_pane_t6

0x8860,	// (0x0004933e) main_cam5_pane_t7_ParamLimits

0x8860,	// (0x0004933e) main_cam5_pane_t7

0x8872,	// (0x00049350) main_cam5_pane_t8_ParamLimits

0x8872,	// (0x00049350) main_cam5_pane_t8

0x888e,	// (0x0004936c) main_cam5_pane_t9_ParamLimits

0x888e,	// (0x0004936c) main_cam5_pane_t9

0x88a0,	// (0x0004937e) main_cam5_pane_t10_ParamLimits

0x88a0,	// (0x0004937e) main_cam5_pane_t10

0x88b2,	// (0x00049390) main_cam5_pane_t11_ParamLimits

0x88b2,	// (0x00049390) main_cam5_pane_t11

0x88c4,	// (0x000493a2) main_cam5_pane_t12_ParamLimits

0x88c4,	// (0x000493a2) main_cam5_pane_t12

0x88d9,	// (0x000493b7) main_cam5_pane_t13_ParamLimits

0x88d9,	// (0x000493b7) main_cam5_pane_t13

0x000c,

0xf8e2,	// (0x000503c0) main_cam5_pane_t_ParamLimits

0xf8e2,	// (0x000503c0) main_cam5_pane_t

0x19fa,	// (0x000424d8) popup_scut_keymap_window_ParamLimits

0x19fa,	// (0x000424d8) popup_scut_keymap_window

0x88f6,	// (0x000493d4) aid_size_cell_brow_shortcut

0xdbf9,	// (0x0004e6d7) bg_popup_window_pane_cp010

0x8902,	// (0x000493e0) grid_scut_pane

0x890e,	// (0x000493ec) cell_scut_pane_ParamLimits

0x890e,	// (0x000493ec) cell_scut_pane

0x8925,	// (0x00049403) cell_scut_pane_g1

0x892e,	// (0x0004940c) cell_scut_pane_t1

0x893d,	// (0x0004941b) cell_scut_pane_t2

0x894c,	// (0x0004942a) cell_scut_pane_t3

0x0002,

0xf8fd,	// (0x000503db) cell_scut_pane_t

0x5c88,	// (0x00046766) main_mup3_pane_g8_ParamLimits

0x5c88,	// (0x00046766) main_mup3_pane_g8

0x7829,	// (0x00048307) area_vitu2_query_pane_ParamLimits

0x7829,	// (0x00048307) area_vitu2_query_pane

0x1075,	// (0x00041b53) input_focus_pane_cp08

0x895a,	// (0x00049438) area_vitu2_query_pane_g1

0x117a,	// (0x00041c58) area_vitu2_query_pane_g2

0x0001,

0xf904,	// (0x000503e2) area_vitu2_query_pane_g

0x8966,	// (0x00049444) area_vitu2_query_pane_t1_ParamLimits

0x8966,	// (0x00049444) area_vitu2_query_pane_t1

0x897a,	// (0x00049458) area_vitu2_query_pane_t2_ParamLimits

0x897a,	// (0x00049458) area_vitu2_query_pane_t2

0x118b,	// (0x00041c69) area_vitu2_query_pane_t3_ParamLimits

0x118b,	// (0x00041c69) area_vitu2_query_pane_t3

0xaeba,	// (0x0004b998) area_vitu2_query_pane_t4_ParamLimits

0xaeba,	// (0x0004b998) area_vitu2_query_pane_t4

0xaee2,	// (0x0004b9c0) area_vitu2_query_pane_t5_ParamLimits

0xaee2,	// (0x0004b9c0) area_vitu2_query_pane_t5

0xaf0a,	// (0x0004b9e8) area_vitu2_query_pane_t6_ParamLimits

0xaf0a,	// (0x0004b9e8) area_vitu2_query_pane_t6

0x0006,

0xf909,	// (0x000503e7) area_vitu2_query_pane_t_ParamLimits

0xf909,	// (0x000503e7) area_vitu2_query_pane_t

0x898e,	// (0x0004946c) bg_button_pane_cp018

0x899c,	// (0x0004947a) bg_button_pane_cp021

0x11b3,	// (0x00041c91) bg_button_pane_cp022

0x11c2,	// (0x00041ca0) input_focus_pane_cp09

0x36fc,	// (0x000441da) aid_size_touch_mv_arrow_left

0x3725,	// (0x00044203) aid_size_touch_mv_arrow_right

0x800a,	// (0x00048ae8) main_cset_slider_pane_g16_ParamLimits

0x800a,	// (0x00048ae8) main_cset_slider_pane_g16

0x8016,	// (0x00048af4) main_cset_slider_pane_g17_ParamLimits

0x8016,	// (0x00048af4) main_cset_slider_pane_g17

0x87cb,	// (0x000492a9) cell_cam4_burst_pane_g1_ParamLimits

0xa6a4,	// (0x0004b182) compa_mode_pane

0x82cd,	// (0x00048dab) popup_vtel_slider_window_g3_ParamLimits

0x82cd,	// (0x00048dab) popup_vtel_slider_window_g3

0x82e4,	// (0x00048dc2) popup_vtel_slider_window_g4_ParamLimits

0x82e4,	// (0x00048dc2) popup_vtel_slider_window_g4

0x82fb,	// (0x00048dd9) popup_vtel_slider_window_t1_ParamLimits

0x82fb,	// (0x00048dd9) popup_vtel_slider_window_t1

0xa6a4,	// (0x0004b182) main_cl_pane

0xf027,	// (0x0004fb05) popup_imed_adjust2_window_ParamLimits

0xefff,	// (0x0004fadd) bg_tb_trans_pane_cp05_ParamLimits

0x67d0,	// (0x000472ae) popup_imed_adjust2_window_g1_ParamLimits

0x67df,	// (0x000472bd) popup_imed_adjust2_window_g2_ParamLimits

0x67df,	// (0x000472bd) popup_imed_adjust2_window_g2

0x67eb,	// (0x000472c9) popup_imed_adjust2_window_g3_ParamLimits

0x67eb,	// (0x000472c9) popup_imed_adjust2_window_g3

0x0002,

0xf680,	// (0x0005015e) popup_imed_adjust2_window_g_ParamLimits

0xf680,	// (0x0005015e) popup_imed_adjust2_window_g

0x67f7,	// (0x000472d5) popup_imed_adjust2_window_t1_ParamLimits

0x680f,	// (0x000472ed) slider_imed_adjust_pane_ParamLimits

0x6823,	// (0x00047301) slider_imed_adjust_pane_g1_ParamLimits

0x6833,	// (0x00047311) slider_imed_adjust_pane_g2_ParamLimits

0x6843,	// (0x00047321) slider_imed_adjust_pane_g3_ParamLimits

0x6854,	// (0x00047332) slider_imed_adjust_pane_g4_ParamLimits

0xf687,	// (0x00050165) slider_imed_adjust_pane_g_ParamLimits

0x7534,	// (0x00048012) aid_touch_area_cam4_ParamLimits

0x7534,	// (0x00048012) aid_touch_area_cam4

0xadb4,	// (0x0004b892) battery_pane_cp01

0x7604,	// (0x000480e2) main_camera4_pane_g6_ParamLimits

0x7604,	// (0x000480e2) main_camera4_pane_g6

0x762e,	// (0x0004810c) main_camera4_pane_t2_ParamLimits

0x762e,	// (0x0004810c) main_camera4_pane_t2

0x0001,

0xf785,	// (0x00050263) main_camera4_pane_t_ParamLimits

0xf785,	// (0x00050263) main_camera4_pane_t

0x7675,	// (0x00048153) aid_touch_area_vid4_ParamLimits

0x7675,	// (0x00048153) aid_touch_area_vid4

0x76dc,	// (0x000481ba) main_video4_pane_g5_ParamLimits

0x76dc,	// (0x000481ba) main_video4_pane_g5

0x7707,	// (0x000481e5) vid4_progress_pane_ParamLimits

0x7707,	// (0x000481e5) vid4_progress_pane

0x8022,	// (0x00048b00) main_cset_slider_pane_g18_ParamLimits

0x8022,	// (0x00048b00) main_cset_slider_pane_g18

0x87de,	// (0x000492bc) cell_cam4_burst_pane_g2_ParamLimits

0x87de,	// (0x000492bc) cell_cam4_burst_pane_g2

0x0001,

0xf8dd,	// (0x000503bb) cell_cam4_burst_pane_g_ParamLimits

0xf8dd,	// (0x000503bb) cell_cam4_burst_pane_g

0xd11a,	// (0x0004dbf8) bg_cl_pane_ParamLimits

0xd11a,	// (0x0004dbf8) bg_cl_pane

0x89a8,	// (0x00049486) cl_header_pane_ParamLimits

0x89a8,	// (0x00049486) cl_header_pane

0x89bc,	// (0x0004949a) cl_listscroll_pane_ParamLimits

0x89bc,	// (0x0004949a) cl_listscroll_pane

0x89cc,	// (0x000494aa) bg_cl_pane_g1

0x89d4,	// (0x000494b2) bg_cl_pane_g2

0x89dc,	// (0x000494ba) bg_cl_pane_g3

0x89e4,	// (0x000494c2) bg_cl_pane_g4

0x89ec,	// (0x000494ca) bg_cl_pane_g5

0x89f4,	// (0x000494d2) bg_cl_pane_g6

0x89fc,	// (0x000494da) bg_cl_pane_g7

0x8a04,	// (0x000494e2) bg_cl_pane_g8

0x8a0c,	// (0x000494ea) bg_cl_pane_g9

0x0008,

0xf918,	// (0x000503f6) bg_cl_pane_g

0x8a14,	// (0x000494f2) aid_height_cl_leading_ParamLimits

0x8a14,	// (0x000494f2) aid_height_cl_leading

0x8a20,	// (0x000494fe) aid_height_cl_text_ParamLimits

0x8a20,	// (0x000494fe) aid_height_cl_text

0xe2c7,	// (0x0004eda5) bg_cl_header_pane_ParamLimits

0xe2c7,	// (0x0004eda5) bg_cl_header_pane

0x8a3f,	// (0x0004951d) cl_header_pane_g1_ParamLimits

0x8a3f,	// (0x0004951d) cl_header_pane_g1

0x8a55,	// (0x00049533) cl_header_pane_t1_ParamLimits

0x8a55,	// (0x00049533) cl_header_pane_t1

0x8a6e,	// (0x0004954c) cl_list_pane

0x7ede,	// (0x000489bc) hc_scroll_pane_cp01

0xd4ee,	// (0x0004dfcc) bg_cl_header_pane_g1

0x7ab3,	// (0x00048591) bg_cl_header_pane_g2

0xd50e,	// (0x0004dfec) bg_cl_header_pane_g3

0x7ac3,	// (0x000485a1) bg_cl_header_pane_g4

0x7abb,	// (0x00048599) bg_cl_header_pane_g5

0x8431,	// (0x00048f0f) bg_cl_header_pane_g6

0x7adb,	// (0x000485b9) bg_cl_header_pane_g7

0x7ae3,	// (0x000485c1) bg_cl_header_pane_g8

0x7ad3,	// (0x000485b1) bg_cl_header_pane_g9

0x0008,

0xf92b,	// (0x00050409) bg_cl_header_pane_g

0x8a77,	// (0x00049555) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8a77,	// (0x00049555) hc_cl_list_double_graphic_heading_pane

0x8a88,	// (0x00049566) hc_cl_list_single_graphic_pane_ParamLimits

0x8a88,	// (0x00049566) hc_cl_list_single_graphic_pane

0x8a9e,	// (0x0004957c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8a9e,	// (0x0004957c) hc_cl_list_single_graphic_pane_g1

0x8aaa,	// (0x00049588) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8aaa,	// (0x00049588) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf93e,	// (0x0005041c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf93e,	// (0x0005041c) hc_cl_list_single_graphic_pane_g

0x8abe,	// (0x0004959c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8abe,	// (0x0004959c) hc_cl_list_single_graphic_pane_t1

0x8a9e,	// (0x0004957c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8a9e,	// (0x0004957c) hc_cl_list_double_graphic_heading_pane_g1

0x8ad3,	// (0x000495b1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8ad3,	// (0x000495b1) hc_cl_list_double_graphic_heading_pane_g2

0x8ae7,	// (0x000495c5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8ae7,	// (0x000495c5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf943,	// (0x00050421) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf943,	// (0x00050421) hc_cl_list_double_graphic_heading_pane_g

0x8afb,	// (0x000495d9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8afb,	// (0x000495d9) hc_cl_list_double_graphic_heading_pane_t1

0x8b10,	// (0x000495ee) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8b10,	// (0x000495ee) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf94a,	// (0x00050428) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf94a,	// (0x00050428) hc_cl_list_double_graphic_heading_pane_t

0xc957,	// (0x0004d435) vid4_progress_pane_g1

0xc967,	// (0x0004d445) vid4_progress_pane_g2

0xaa12,	// (0x0004b4f0) vid4_progress_pane_g3

0xc977,	// (0x0004d455) vid4_progress_pane_g4

0x0004,

0xf94f,	// (0x0005042d) vid4_progress_pane_g

0xc995,	// (0x0004d473) vid4_progress_pane_t1

0xc9aa,	// (0x0004d488) vid4_progress_pane_t2

0x0002,

0xf95a,	// (0x00050438) vid4_progress_pane_t

0xc9d5,	// (0x0004d4b3) wait_bar_pane_cp07

0x536c,	// (0x00045e4a) blid_firmament_pane_ParamLimits

0x53af,	// (0x00045e8d) popup_blid_sat_info2_window_g1

0x53d3,	// (0x00045eb1) popup_blid_sat_info2_window_t3

0x53e1,	// (0x00045ebf) popup_blid_sat_info2_window_t4

0x53ef,	// (0x00045ecd) popup_blid_sat_info2_window_t5

0x53fd,	// (0x00045edb) popup_blid_sat_info2_window_t6

0x540d,	// (0x00045eeb) popup_blid_sat_info2_window_t7

0x541b,	// (0x00045ef9) popup_blid_sat_info2_window_t8

0x5429,	// (0x00045f07) popup_blid_sat_info2_window_t9

0x5437,	// (0x00045f15) popup_blid_sat_info2_window_t10

0x55c5,	// (0x000460a3) aid_firma_cardinal_ParamLimits

0x55d9,	// (0x000460b7) blid_firmament_pane_t1_ParamLimits

0x55f0,	// (0x000460ce) blid_firmament_pane_t2_ParamLimits

0x5607,	// (0x000460e5) blid_firmament_pane_t3_ParamLimits

0x561e,	// (0x000460fc) blid_firmament_pane_t4_ParamLimits

0xf579,	// (0x00050057) blid_firmament_pane_t_ParamLimits

0x5635,	// (0x00046113) blid_sat_info_pane_ParamLimits

0xe2c7,	// (0x0004eda5) main_cam_set_pane_ParamLimits

0x6635,	// (0x00047113) aid_size_cell_colour_35_ParamLimits

0x6655,	// (0x00047133) aid_size_cell_colour_112_ParamLimits

0x6675,	// (0x00047153) aid_size_cell_effect_ParamLimits

0xefff,	// (0x0004fadd) bg_tb_trans_pane_cp02_ParamLimits

0xd73a,	// (0x0004e218) heading_imed_pane_ParamLimits

0x6695,	// (0x00047173) listscroll_imed_pane_ParamLimits

0xe631,	// (0x0004f10f) popup_call2_audio_first_window_g5_ParamLimits

0xe631,	// (0x0004f10f) popup_call2_audio_first_window_g5

0x70fc,	// (0x00047bda) aid_size_touch_image3_arrow_left_ParamLimits

0x70fc,	// (0x00047bda) aid_size_touch_image3_arrow_left

0x7128,	// (0x00047c06) aid_size_touch_image3_arrow_right_ParamLimits

0x7128,	// (0x00047c06) aid_size_touch_image3_arrow_right

0xc9c0,	// (0x0004d49e) vid4_progress_pane_t3

0x6d65,	// (0x00047843) main_hwr_training_symbol_option_pane_ParamLimits

0x6d65,	// (0x00047843) main_hwr_training_symbol_option_pane

0x6d85,	// (0x00047863) popup_hwr_training_preview_window_ParamLimits

0x6d85,	// (0x00047863) popup_hwr_training_preview_window

0x6dd2,	// (0x000478b0) hwr_training_navi_pane_g5_ParamLimits

0x6dd2,	// (0x000478b0) hwr_training_navi_pane_g5

0x79fb,	// (0x000484d9) popup_char_count_window

0xe2c7,	// (0x0004eda5) bg_popup_sub_pane_cp20_ParamLimits

0x8413,	// (0x00048ef1) list_vitu2_match_list_pane_ParamLimits

0x8422,	// (0x00048f00) vitu2_page_scroll_pane_ParamLimits

0x8422,	// (0x00048f00) vitu2_page_scroll_pane

0x8b25,	// (0x00049603) list_single_hwr_training_symbol_option_pane_ParamLimits

0x8b25,	// (0x00049603) list_single_hwr_training_symbol_option_pane

0x8b38,	// (0x00049616) list_single_hwr_training_symbol_option_pane_g1

0x8b40,	// (0x0004961e) list_single_hwr_training_symbol_option_pane_t1

0x8b4e,	// (0x0004962c) bg_button_pane_cp023

0x8b57,	// (0x00049635) bg_button_pane_cp024

0x8b60,	// (0x0004963e) vitu2_page_scroll_pane_g1

0x8b68,	// (0x00049646) vitu2_page_scroll_pane_g2

0x0001,

0xf961,	// (0x0005043f) vitu2_page_scroll_pane_g

0x8b70,	// (0x0004964e) vitu2_page_scroll_pane_t1

0xafda,	// (0x0004bab8) popup_char_count_window_g1

0xafe3,	// (0x0004bac1) popup_char_count_window_g2

0xafec,	// (0x0004baca) popup_char_count_window_g3

0x0002,

0xf966,	// (0x00050444) popup_char_count_window_g

0xaff5,	// (0x0004bad3) popup_char_count_window_t1

0xa6a4,	// (0x0004b182) main_vded2_pane

0x67bc,	// (0x0004729a) aid_size_cell_imed_line

0x67c6,	// (0x000472a4) grid_imed_line_width_pane

0x7775,	// (0x00048253) vid4_indicators_pane_g4

0xb003,	// (0x0004bae1) cell_imed_line_width_pane_ParamLimits

0xb003,	// (0x0004bae1) cell_imed_line_width_pane

0xb017,	// (0x0004baf5) cell_imed_line_width_pane_g1

0x8b7f,	// (0x0004965d) cell_imed_line_width_pane_g2

0x0001,

0xf96d,	// (0x0005044b) cell_imed_line_width_pane_g

0x8b87,	// (0x00049665) main_vded2_pane_g1_ParamLimits

0x8b87,	// (0x00049665) main_vded2_pane_g1

0x8b9d,	// (0x0004967b) main_vded2_pane_g2_ParamLimits

0x8b9d,	// (0x0004967b) main_vded2_pane_g2

0x0001,

0xf972,	// (0x00050450) main_vded2_pane_g_ParamLimits

0xf972,	// (0x00050450) main_vded2_pane_g

0x8baf,	// (0x0004968d) vded2_slider_pane_ParamLimits

0x8baf,	// (0x0004968d) vded2_slider_pane

0x8bbf,	// (0x0004969d) aid_size_touch_vded2_end

0x8bc9,	// (0x000496a7) aid_size_touch_vded2_playhead

0xb020,	// (0x0004bafe) aid_size_touch_vded2_start

0xb028,	// (0x0004bb06) vded2_slider_bg_pane

0xb031,	// (0x0004bb0f) vded2_slider_pane_g1

0xb03a,	// (0x0004bb18) vded2_slider_pane_g2

0x8bd3,	// (0x000496b1) vded2_slider_pane_g3

0x0002,

0xf977,	// (0x00050455) vded2_slider_pane_g

0xb042,	// (0x0004bb20) vded2_slider_bg_pane_g1

0xb04b,	// (0x0004bb29) vded2_slider_bg_pane_g2

0xb054,	// (0x0004bb32) vded2_slider_bg_pane_g3

0x0002,

0xf97e,	// (0x0005045c) vded2_slider_bg_pane_g

0x3cd8,	// (0x000447b6) aid_postcard_touch_down_pane_ParamLimits

0x3cd8,	// (0x000447b6) aid_postcard_touch_down_pane

0x3cee,	// (0x000447cc) aid_postcard_touch_up_pane_ParamLimits

0x3cee,	// (0x000447cc) aid_postcard_touch_up_pane

0xa6a4,	// (0x0004b182) main_blid2_pane

0xf00d,	// (0x0004faeb) popup_blid2_search_window

0xa6a4,	// (0x0004b182) blid2_gps_pane

0xa6a4,	// (0x0004b182) blid2_navig_pane

0xa6a4,	// (0x0004b182) blid2_search_pane

0xa6a4,	// (0x0004b182) blid2_tripm_pane

0x8bde,	// (0x000496bc) blid2_search_pane_g1_ParamLimits

0x8bde,	// (0x000496bc) blid2_search_pane_g1

0x8bf8,	// (0x000496d6) blid2_search_pane_t1_ParamLimits

0x8bf8,	// (0x000496d6) blid2_search_pane_t1

0x8c0a,	// (0x000496e8) aid_size_cell_blid2_gps_ParamLimits

0x8c0a,	// (0x000496e8) aid_size_cell_blid2_gps

0x8c22,	// (0x00049700) blid2_gps_pane_g1_ParamLimits

0x8c22,	// (0x00049700) blid2_gps_pane_g1

0x8c36,	// (0x00049714) grid_blid2_satellite_pane_ParamLimits

0x8c36,	// (0x00049714) grid_blid2_satellite_pane

0x8c50,	// (0x0004972e) blid2_navig_pane_g1_ParamLimits

0x8c50,	// (0x0004972e) blid2_navig_pane_g1

0x8c5c,	// (0x0004973a) blid2_navig_pane_t1_ParamLimits

0x8c5c,	// (0x0004973a) blid2_navig_pane_t1

0x8c77,	// (0x00049755) blid2_navig_pane_t2_ParamLimits

0x8c77,	// (0x00049755) blid2_navig_pane_t2

0x0001,

0xf985,	// (0x00050463) blid2_navig_pane_t_ParamLimits

0xf985,	// (0x00050463) blid2_navig_pane_t

0x8c92,	// (0x00049770) blid2_navig_ring_pane_ParamLimits

0x8c92,	// (0x00049770) blid2_navig_ring_pane

0x8cab,	// (0x00049789) blid2_speed_pane_ParamLimits

0x8cab,	// (0x00049789) blid2_speed_pane

0x8cb7,	// (0x00049795) blid2_tripm_pane_g1_ParamLimits

0x8cb7,	// (0x00049795) blid2_tripm_pane_g1

0x8cd0,	// (0x000497ae) blid2_tripm_pane_g2_ParamLimits

0x8cd0,	// (0x000497ae) blid2_tripm_pane_g2

0x8ce4,	// (0x000497c2) blid2_tripm_pane_g3_ParamLimits

0x8ce4,	// (0x000497c2) blid2_tripm_pane_g3

0x8cf8,	// (0x000497d6) blid2_tripm_pane_g4_ParamLimits

0x8cf8,	// (0x000497d6) blid2_tripm_pane_g4

0x8d0c,	// (0x000497ea) blid2_tripm_pane_g5_ParamLimits

0x8d0c,	// (0x000497ea) blid2_tripm_pane_g5

0x0005,

0xf98a,	// (0x00050468) blid2_tripm_pane_g_ParamLimits

0xf98a,	// (0x00050468) blid2_tripm_pane_g

0x8d32,	// (0x00049810) blid2_tripm_pane_t1_ParamLimits

0x8d32,	// (0x00049810) blid2_tripm_pane_t1

0x8d4d,	// (0x0004982b) blid2_tripm_pane_t2_ParamLimits

0x8d4d,	// (0x0004982b) blid2_tripm_pane_t2

0x8d66,	// (0x00049844) blid2_tripm_pane_t3_ParamLimits

0x8d66,	// (0x00049844) blid2_tripm_pane_t3

0x0003,

0xf997,	// (0x00050475) blid2_tripm_pane_t_ParamLimits

0xf997,	// (0x00050475) blid2_tripm_pane_t

0x8dad,	// (0x0004988b) cell_blid2_satellite_pane_ParamLimits

0x8dad,	// (0x0004988b) cell_blid2_satellite_pane

0x8dcb,	// (0x000498a9) cell_blid2_satellite_pane_g1

0xb05d,	// (0x0004bb3b) cell_blid2_satellite_pane_t1

0x5645,	// (0x00046123) blid2_speed_pane_g1

0xb06b,	// (0x0004bb49) blid2_speed_pane_t1

0xb079,	// (0x0004bb57) blid2_speed_pane_t2

0x0001,

0xf9a0,	// (0x0005047e) blid2_speed_pane_t

0x5645,	// (0x00046123) blid2_navig_ring_pane_g1

0x8dd4,	// (0x000498b2) blid2_navig_ring_pane_g2

0x8ddc,	// (0x000498ba) blid2_navig_ring_pane_g3

0x8de4,	// (0x000498c2) blid2_navig_ring_pane_g4

0x8dec,	// (0x000498ca) blid2_navig_ring_pane_g5

0x0004,

0xf9a5,	// (0x00050483) blid2_navig_ring_pane_g

0xa6a4,	// (0x0004b182) bg_popup_window_pane_cp011

0xb087,	// (0x0004bb65) popup_blid2_search_window_g1

0xb08f,	// (0x0004bb6d) popup_blid2_search_window_t1

0xb09d,	// (0x0004bb7b) popup_blid2_search_window_t2

0x0001,

0xf9b0,	// (0x0005048e) popup_blid2_search_window_t

0xd3fd,	// (0x0004dedb) main_browser_pane_g1

0xd11a,	// (0x0004dbf8) main_browser_pane_ParamLimits

0xe2c7,	// (0x0004eda5) bg_button_pane_cp011_ParamLimits

0x7a95,	// (0x00048573) cell_vitu2_function_pane_g1_ParamLimits

0xefff,	// (0x0004fadd) bg_popup_sub_pane_cp22_ParamLimits

0x1075,	// (0x00041b53) input_focus_pane_cp08_ParamLimits

0x85a6,	// (0x00049084) popup_vitu2_query_button_pane_ParamLimits

0x85a6,	// (0x00049084) popup_vitu2_query_button_pane

0x108c,	// (0x00041b6a) popup_vitu2_query_input_button_pane

0x85b7,	// (0x00049095) popup_vitu2_query_window_g1_ParamLimits

0x1096,	// (0x00041b74) popup_vitu2_query_window_g2_ParamLimits

0xf8b1,	// (0x0005038f) popup_vitu2_query_window_g_ParamLimits

0xa6a4,	// (0x0004b182) bg_button_pane_cp026

0x8df4,	// (0x000498d2) popup_vitu2_query_input_button_pane_g1

0xa6a4,	// (0x0004b182) bg_button_pane_cp025

0xb0ab,	// (0x0004bb89) popup_vitu2_query_button_pane_t1

0x5995,	// (0x00046473) main_mp3_pane_t6

0x59ab,	// (0x00046489) popup_slider_window_cp01

0xadd0,	// (0x0004b8ae) cam4_battery_pane

0xae37,	// (0x0004b915) cam4_battery_pane_cp02

0xc94f,	// (0x0004d42d) cam4_battery_pane_cp01

0xc94f,	// (0x0004d42d) cam4_battery_pane_cp03

0x5645,	// (0x00046123) cam4_battery_pane_g1

0x8dfc,	// (0x000498da) cam4_battery_pane_g2

0x0001,

0xf9b5,	// (0x00050493) cam4_battery_pane_g

0x5445,	// (0x00045f23) popup_blid_sat_info2_window_t11

0x36fc,	// (0x000441da) aid_size_touch_mv_arrow_left_ParamLimits

0x3725,	// (0x00044203) aid_size_touch_mv_arrow_right_ParamLimits

0xdb59,	// (0x0004e637) navi_pane_g1_ParamLimits

0x374e,	// (0x0004422c) navi_pane_g2_ParamLimits

0x377c,	// (0x0004425a) navi_pane_g3_ParamLimits

0xf394,	// (0x0004fe72) navi_pane_g_ParamLimits

0x37d4,	// (0x000442b2) navi_pane_mv_t1_ParamLimits

0x66ce,	// (0x000471ac) grid_imed_effect_pane_ParamLimits

0x26fd,	// (0x000431db) aid_placing_vt_slider_lsc

0xd34e,	// (0x0004de2c) aid_placing_vt_slider_prt

0xe2c7,	// (0x0004eda5) bg_tb_trans_pane_cp01_ParamLimits

0x5801,	// (0x000462df) popup_image_details_window_g1_ParamLimits

0x5814,	// (0x000462f2) popup_image_details_window_g2_ParamLimits

0x5829,	// (0x00046307) popup_image_details_window_g3_ParamLimits

0x5829,	// (0x00046307) popup_image_details_window_g3

0xf5be,	// (0x0005009c) popup_image_details_window_g_ParamLimits

0x583d,	// (0x0004631b) popup_image_details_window_t1_ParamLimits

0x584f,	// (0x0004632d) popup_image_details_window_t2_ParamLimits

0x5868,	// (0x00046346) popup_image_details_window_t3_ParamLimits

0x587c,	// (0x0004635a) popup_image_details_window_t4_ParamLimits

0x5897,	// (0x00046375) popup_image_details_window_t5_ParamLimits

0xf5c5,	// (0x000500a3) popup_image_details_window_t_ParamLimits

0x8a2c,	// (0x0004950a) cl_header_name_pane_ParamLimits

0x8a2c,	// (0x0004950a) cl_header_name_pane

0x8e06,	// (0x000498e4) cl_header_name_pane_t1_ParamLimits

0x8e06,	// (0x000498e4) cl_header_name_pane_t1

0x8e27,	// (0x00049905) cl_header_name_pane_t2_ParamLimits

0x8e27,	// (0x00049905) cl_header_name_pane_t2

0x8e69,	// (0x00049947) cl_header_name_pane_t3_ParamLimits

0x8e69,	// (0x00049947) cl_header_name_pane_t3

0x0002,

0xf9ba,	// (0x00050498) cl_header_name_pane_t_ParamLimits

0xf9ba,	// (0x00050498) cl_header_name_pane_t

0x37a5,	// (0x00044283) navi_pane_mv_g2_ParamLimits

0x79d5,	// (0x000484b3) field_vitu2_entry_pane_g1_ParamLimits

0x79e1,	// (0x000484bf) field_vitu2_entry_pane_g2_ParamLimits

0x79ed,	// (0x000484cb) field_vitu2_entry_pane_g3_ParamLimits

0x79ed,	// (0x000484cb) field_vitu2_entry_pane_g3

0xf7b7,	// (0x00050295) field_vitu2_entry_pane_g_ParamLimits

0x7a11,	// (0x000484ef) cell_vitu2_itu_pane_g1_ParamLimits

0x7a21,	// (0x000484ff) cell_vitu2_itu_pane_g2_ParamLimits

0x7a21,	// (0x000484ff) cell_vitu2_itu_pane_g2

0x0001,

0xf7c3,	// (0x000502a1) cell_vitu2_itu_pane_g_ParamLimits

0xf7c3,	// (0x000502a1) cell_vitu2_itu_pane_g

0xe2c7,	// (0x0004eda5) bg_vkb2_func_pane_cp05_ParamLimits

0xe2c7,	// (0x0004eda5) bg_vkb2_func_pane_cp05

0xe2c7,	// (0x0004eda5) bg_vkb2_func_pane_cp03

0xe2c7,	// (0x0004eda5) bg_vkb2_func_pane_cp04

0xe2c7,	// (0x0004eda5) bg_vkb2_func_pane_cp10_ParamLimits

0xe2c7,	// (0x0004eda5) bg_vkb2_func_pane_cp10

0x11b3,	// (0x00041c91) bg_vkb2_func_pane_cp08

0x898e,	// (0x0004946c) bg_vkb2_func_pane_cp06

0x899c,	// (0x0004947a) bg_vkb2_func_pane_cp07

0xafb0,	// (0x0004ba8e) bg_vkb2_func_pane_cp11_ParamLimits

0xafb0,	// (0x0004ba8e) bg_vkb2_func_pane_cp11

0xafc5,	// (0x0004baa3) bg_vkb2_func_pane_cp12_ParamLimits

0xafc5,	// (0x0004baa3) bg_vkb2_func_pane_cp12

0xa6a4,	// (0x0004b182) bg_vkb2_func_pane_cp09

0x7ab3,	// (0x00048591) bg_vkb2_func_pane_g1

0xd50e,	// (0x0004dfec) bg_vkb2_func_pane_g2

0x7abb,	// (0x00048599) bg_vkb2_func_pane_g3

0x7ac3,	// (0x000485a1) bg_vkb2_func_pane_g4

0x8431,	// (0x00048f0f) bg_vkb2_func_pane_g5

0x7adb,	// (0x000485b9) bg_vkb2_func_pane_g6

0x7ae3,	// (0x000485c1) bg_vkb2_func_pane_g7

0x7ad3,	// (0x000485b1) bg_vkb2_func_pane_g8

0xd4ee,	// (0x0004dfcc) bg_vkb2_func_pane_g9

0x0008,

0xf9c1,	// (0x0005049f) bg_vkb2_func_pane_g

0x8d20,	// (0x000497fe) blid2_tripm_pane_g6_ParamLimits

0x8d20,	// (0x000497fe) blid2_tripm_pane_g6

0x6f87,	// (0x00047a65) mp4_progress_pane_g1

0x8d99,	// (0x00049877) blid2_tripm_values_pane_ParamLimits

0x8d99,	// (0x00049877) blid2_tripm_values_pane

0x8e9a,	// (0x00049978) blid2_tripm_values_pane_t1

0x8ea8,	// (0x00049986) blid2_tripm_values_pane_t2

0x8eb6,	// (0x00049994) blid2_tripm_values_pane_t3

0x8ec4,	// (0x000499a2) blid2_tripm_values_pane_t4

0x8ed2,	// (0x000499b0) blid2_tripm_values_pane_t5

0x8ee0,	// (0x000499be) blid2_tripm_values_pane_t6

0x8eee,	// (0x000499cc) blid2_tripm_values_pane_t7

0x8efc,	// (0x000499da) blid2_tripm_values_pane_t8

0x8f0a,	// (0x000499e8) blid2_tripm_values_pane_t9

0x0008,

0xf9d4,	// (0x000504b2) blid2_tripm_values_pane_t

0x273f,	// (0x0004321d) call_video_pane_t1_ParamLimits

0x275d,	// (0x0004323b) call_video_pane_t2_ParamLimits

0xf284,	// (0x0004fd62) call_video_pane_t_ParamLimits

0x0e59,	// (0x00041937) msg_header_pane_g1_ParamLimits

0xdd74,	// (0x0004e852) msg_header_pane_g2_ParamLimits

0xdd74,	// (0x0004e852) msg_header_pane_g2

0x0001,

0xf411,	// (0x0004feef) msg_header_pane_g_ParamLimits

0xf411,	// (0x0004feef) msg_header_pane_g

0xd11a,	// (0x0004dbf8) main_clock2_pane_ParamLimits

0x6398,	// (0x00046e76) grid_clock2_toolbar_pane_ParamLimits

0x6398,	// (0x00046e76) grid_clock2_toolbar_pane

0x6398,	// (0x00046e76) listscroll_clock2_pane_ParamLimits

0x6398,	// (0x00046e76) listscroll_clock2_pane

0x6474,	// (0x00046f52) main_clock2_pane_t3_ParamLimits

0x6474,	// (0x00046f52) main_clock2_pane_t3

0x648f,	// (0x00046f6d) main_clock2_pane_t4_ParamLimits

0x648f,	// (0x00046f6d) main_clock2_pane_t4

0xb0b9,	// (0x0004bb97) cell_clock2_toolbar_pane

0xb0c1,	// (0x0004bb9f) cell_clock2_toolbar_pane_cp01

0xb0c1,	// (0x0004bb9f) cell_clock2_toolbar_pane_cp02

0xb0c9,	// (0x0004bba7) cell_clock2_toolbar_pane_cp03

0xb0d1,	// (0x0004bbaf) list_clock2_pane

0xdab0,	// (0x0004e58e) scroll_pane_cp10

0xb0d9,	// (0x0004bbb7) list_single_clock2_pane_ParamLimits

0xb0d9,	// (0x0004bbb7) list_single_clock2_pane

0xdbf9,	// (0x0004e6d7) list_highlight_pane_cp08

0xb0e6,	// (0x0004bbc4) list_single_clock2_pane_t1

0xb0f4,	// (0x0004bbd2) list_single_clock2_pane_t2

0x0001,

0xf9e7,	// (0x000504c5) list_single_clock2_pane_t

0xa6a4,	// (0x0004b182) bg_button_pane_cp10

0xb102,	// (0x0004bbe0) cell_clock2_toolbar_pane_g1

0x3c64,	// (0x00044742) aid_main_viewer_pane_g1_ParamLimits

0x3c64,	// (0x00044742) aid_main_viewer_pane_g1

0x3c72,	// (0x00044750) aid_main_viewer_pane_g2_ParamLimits

0x3c72,	// (0x00044750) aid_main_viewer_pane_g2

0x3c80,	// (0x0004475e) aid_main_viewer_pane_g3_ParamLimits

0x3c80,	// (0x0004475e) aid_main_viewer_pane_g3

0x3c8f,	// (0x0004476d) aid_main_viewer_pane_g4_ParamLimits

0x3c8f,	// (0x0004476d) aid_main_viewer_pane_g4

0x0003,

0xf422,	// (0x0004ff00) aid_main_viewer_pane_g_ParamLimits

0xf422,	// (0x0004ff00) aid_main_viewer_pane_g

0x4595,	// (0x00045073) main_calc_pane_ParamLimits

0x45a9,	// (0x00045087) main_dialer2_pane_ParamLimits

0xa6a4,	// (0x0004b182) main_cam6_pane

0xa6a4,	// (0x0004b182) main_vid6_pane

0x63a4,	// (0x00046e82) listscroll_gen_pane_cp06_ParamLimits

0x63a4,	// (0x00046e82) listscroll_gen_pane_cp06

0x64aa,	// (0x00046f88) main_clock2_pane_t5_ParamLimits

0x64aa,	// (0x00046f88) main_clock2_pane_t5

0x6501,	// (0x00046fdf) aid_call2_pane_cp10_ParamLimits

0x6513,	// (0x00046ff1) aid_call_pane_cp10_ParamLimits

0xdb2e,	// (0x0004e60c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdb2e,	// (0x0004e60c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6525,	// (0x00047003) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6525,	// (0x00047003) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdb2e,	// (0x0004e60c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf675,	// (0x00050153) popup_clock_analogue_window_cp10_g_ParamLimits

0x6537,	// (0x00047015) popup_clock_analogue_window_cp10_t1_ParamLimits

0x70a9,	// (0x00047b87) cell_dialer2_keypad_pane_g2_ParamLimits

0x70a9,	// (0x00047b87) cell_dialer2_keypad_pane_g2

0x0001,

0xf756,	// (0x00050234) cell_dialer2_keypad_pane_g_ParamLimits

0xf756,	// (0x00050234) cell_dialer2_keypad_pane_g

0x70c5,	// (0x00047ba3) cell_dialer2_keypad_pane_t1

0x7eb8,	// (0x00048996) main_cset_text2_pane_ParamLimits

0x7eb8,	// (0x00048996) main_cset_text2_pane

0x895a,	// (0x00049438) area_vitu2_query_pane_g1_ParamLimits

0x117a,	// (0x00041c58) area_vitu2_query_pane_g2_ParamLimits

0xf904,	// (0x000503e2) area_vitu2_query_pane_g_ParamLimits

0xaf32,	// (0x0004ba10) area_vitu2_query_pane_t7_ParamLimits

0xaf32,	// (0x0004ba10) area_vitu2_query_pane_t7

0x898e,	// (0x0004946c) bg_button_pane_cp018_ParamLimits

0x899c,	// (0x0004947a) bg_button_pane_cp021_ParamLimits

0x11b3,	// (0x00041c91) bg_button_pane_cp022_ParamLimits

0x11b3,	// (0x00041c91) bg_vkb2_func_pane_cp08_ParamLimits

0x898e,	// (0x0004946c) bg_vkb2_func_pane_cp06_ParamLimits

0x899c,	// (0x0004947a) bg_vkb2_func_pane_cp07_ParamLimits

0x11c2,	// (0x00041ca0) input_focus_pane_cp09_ParamLimits

0xc9e7,	// (0x0004d4c5) cam6_autofocus_pane_ParamLimits

0xc9e7,	// (0x0004d4c5) cam6_autofocus_pane

0x8f18,	// (0x000499f6) cam6_image_uncrop_pane_ParamLimits

0x8f18,	// (0x000499f6) cam6_image_uncrop_pane

0x8f27,	// (0x00049a05) cam6_indi_pane_ParamLimits

0x8f27,	// (0x00049a05) cam6_indi_pane

0x8f3d,	// (0x00049a1b) cam6_mode_pane_ParamLimits

0x8f3d,	// (0x00049a1b) cam6_mode_pane

0x8f4f,	// (0x00049a2d) cam6_timer_pane_ParamLimits

0x8f4f,	// (0x00049a2d) cam6_timer_pane

0x8f5b,	// (0x00049a39) cam6_zoom_pane_ParamLimits

0x8f5b,	// (0x00049a39) cam6_zoom_pane

0x8f67,	// (0x00049a45) cam6_mode_pane_g1_ParamLimits

0x8f67,	// (0x00049a45) cam6_mode_pane_g1

0x8f77,	// (0x00049a55) cam6_mode_pane_g2_ParamLimits

0x8f77,	// (0x00049a55) cam6_mode_pane_g2

0x8f87,	// (0x00049a65) cam6_mode_pane_g3_ParamLimits

0x8f87,	// (0x00049a65) cam6_mode_pane_g3

0x8f97,	// (0x00049a75) cam6_mode_pane_g4_ParamLimits

0x8f97,	// (0x00049a75) cam6_mode_pane_g4

0x0003,

0xf9ec,	// (0x000504ca) cam6_mode_pane_g_ParamLimits

0xf9ec,	// (0x000504ca) cam6_mode_pane_g

0xb10a,	// (0x0004bbe8) bg_tb_trans_pane_cp08_ParamLimits

0xb10a,	// (0x0004bbe8) bg_tb_trans_pane_cp08

0xb118,	// (0x0004bbf6) cam6_battery_pane_ParamLimits

0xb118,	// (0x0004bbf6) cam6_battery_pane

0xb12e,	// (0x0004bc0c) cam6_indi_pane_g1_ParamLimits

0xb12e,	// (0x0004bc0c) cam6_indi_pane_g1

0xb140,	// (0x0004bc1e) cam6_indi_pane_g2_ParamLimits

0xb140,	// (0x0004bc1e) cam6_indi_pane_g2

0xb152,	// (0x0004bc30) cam6_indi_pane_g3_ParamLimits

0xb152,	// (0x0004bc30) cam6_indi_pane_g3

0x0002,

0xf9f5,	// (0x000504d3) cam6_indi_pane_g_ParamLimits

0xf9f5,	// (0x000504d3) cam6_indi_pane_g

0xb164,	// (0x0004bc42) cam6_indi_pane_t1_ParamLimits

0xb164,	// (0x0004bc42) cam6_indi_pane_t1

0x8fa7,	// (0x00049a85) cam6_autofocus_pane_g1

0x8faf,	// (0x00049a8d) cam6_autofocus_pane_g2

0x8fb7,	// (0x00049a95) cam6_autofocus_pane_g3

0x8fbf,	// (0x00049a9d) cam6_autofocus_pane_g4

0x0003,

0xf9fc,	// (0x000504da) cam6_autofocus_pane_g

0xb18a,	// (0x0004bc68) cam6_timer_pane_g1

0xb192,	// (0x0004bc70) cam6_timer_pane_t1

0xb1a0,	// (0x0004bc7e) cam6_zoom_cont_pane

0xb1a8,	// (0x0004bc86) cam6_zoom_pane_g1

0xb1b0,	// (0x0004bc8e) cam6_zoom_pane_g2

0x8fc7,	// (0x00049aa5) cam6_zoom_pane_g3

0x0002,

0xfa05,	// (0x000504e3) cam6_zoom_pane_g

0x5645,	// (0x00046123) cam6_battery_pane_g1

0x5645,	// (0x00046123) cam6_battery_pane_g2

0x0001,

0xf582,	// (0x00050060) cam6_battery_pane_g

0xb1b8,	// (0x0004bc96) cam6_zoom_cont_pane_g1

0xb1c1,	// (0x0004bc9f) cam6_zoom_cont_pane_g2

0xb1ca,	// (0x0004bca8) cam6_zoom_cont_pane_g3

0x0002,

0xfa0c,	// (0x000504ea) cam6_zoom_cont_pane_g

0x8fe4,	// (0x00049ac2) cam6_mode_pane_cp_ParamLimits

0x8fe4,	// (0x00049ac2) cam6_mode_pane_cp

0x8f5b,	// (0x00049a39) cam6_zoom_pane_cp_ParamLimits

0x8f5b,	// (0x00049a39) cam6_zoom_pane_cp

0x8ff6,	// (0x00049ad4) vid6_image_uncrop_cif_pane_ParamLimits

0x8ff6,	// (0x00049ad4) vid6_image_uncrop_cif_pane

0x9006,	// (0x00049ae4) vid6_image_uncrop_nhd_pane_ParamLimits

0x9006,	// (0x00049ae4) vid6_image_uncrop_nhd_pane

0x8f18,	// (0x000499f6) vid6_image_uncrop_vga_pane_ParamLimits

0x8f18,	// (0x000499f6) vid6_image_uncrop_vga_pane

0x9015,	// (0x00049af3) vid6_image_uncrop_wvga_pane_ParamLimits

0x9015,	// (0x00049af3) vid6_image_uncrop_wvga_pane

0x9024,	// (0x00049b02) vid6_indi_pane_ParamLimits

0x9024,	// (0x00049b02) vid6_indi_pane

0xb10a,	// (0x0004bbe8) bg_tb_trans_pane_cp09_ParamLimits

0xb10a,	// (0x0004bbe8) bg_tb_trans_pane_cp09

0xb1e2,	// (0x0004bcc0) cam6_battery_pane_cp_ParamLimits

0xb1e2,	// (0x0004bcc0) cam6_battery_pane_cp

0xb1ee,	// (0x0004bccc) vid6_indi_pane_g1_ParamLimits

0xb1ee,	// (0x0004bccc) vid6_indi_pane_g1

0xb200,	// (0x0004bcde) vid6_indi_pane_g2_ParamLimits

0xb200,	// (0x0004bcde) vid6_indi_pane_g2

0xb212,	// (0x0004bcf0) vid6_indi_pane_g3_ParamLimits

0xb212,	// (0x0004bcf0) vid6_indi_pane_g3

0xb227,	// (0x0004bd05) vid6_indi_pane_g4_ParamLimits

0xb227,	// (0x0004bd05) vid6_indi_pane_g4

0xb23c,	// (0x0004bd1a) vid6_indi_pane_g5_ParamLimits

0xb23c,	// (0x0004bd1a) vid6_indi_pane_g5

0x0004,

0xfa13,	// (0x000504f1) vid6_indi_pane_g_ParamLimits

0xfa13,	// (0x000504f1) vid6_indi_pane_g

0xb256,	// (0x0004bd34) vid6_indi_pane_t1_ParamLimits

0xb256,	// (0x0004bd34) vid6_indi_pane_t1

0xb26c,	// (0x0004bd4a) vid6_indi_pane_t2_ParamLimits

0xb26c,	// (0x0004bd4a) vid6_indi_pane_t2

0xb294,	// (0x0004bd72) vid6_indi_pane_t3_ParamLimits

0xb294,	// (0x0004bd72) vid6_indi_pane_t3

0xb2bc,	// (0x0004bd9a) vid6_indi_pane_t4_ParamLimits

0xb2bc,	// (0x0004bd9a) vid6_indi_pane_t4

0x0003,

0xfa1e,	// (0x000504fc) vid6_indi_pane_t_ParamLimits

0xfa1e,	// (0x000504fc) vid6_indi_pane_t

0xb2e0,	// (0x0004bdbe) wait_bar_pane_cp08

0x903c,	// (0x00049b1a) main_cset_text2_pane_t1_ParamLimits

0x903c,	// (0x00049b1a) main_cset_text2_pane_t1

0x8fcf,	// (0x00049aad) listscroll_gen_pane_cp06_t1_ParamLimits

0x8fcf,	// (0x00049aad) listscroll_gen_pane_cp06_t1

0xa6a4,	// (0x0004b182) main_cam6_set_pane

0x591c,	// (0x000463fa) bg_tb_trans_pane_cp06_ParamLimits

0xadd8,	// (0x0004b8b6) cam4_indicators_pane_g1_ParamLimits

0xade9,	// (0x0004b8c7) cam4_indicators_pane_g2_ParamLimits

0xf793,	// (0x00050271) cam4_indicators_pane_g_ParamLimits

0xae07,	// (0x0004b8e5) cam4_indicators_pane_t1_ParamLimits

0xae29,	// (0x0004b907) bg_tb_trans_pane_cp07_ParamLimits

0x774e,	// (0x0004822c) vid4_indicators_pane_g1_ParamLimits

0x775b,	// (0x00048239) vid4_indicators_pane_g2_ParamLimits

0x7768,	// (0x00048246) vid4_indicators_pane_g3_ParamLimits

0x7775,	// (0x00048253) vid4_indicators_pane_g4_ParamLimits

0xf7a5,	// (0x00050283) vid4_indicators_pane_g_ParamLimits

0x778d,	// (0x0004826b) vid4_indicators_pane_t1_ParamLimits

0xc957,	// (0x0004d435) vid4_progress_pane_g1_ParamLimits

0xc967,	// (0x0004d445) vid4_progress_pane_g2_ParamLimits

0xaa12,	// (0x0004b4f0) vid4_progress_pane_g3_ParamLimits

0xc977,	// (0x0004d455) vid4_progress_pane_g4_ParamLimits

0xf94f,	// (0x0005042d) vid4_progress_pane_g_ParamLimits

0xc995,	// (0x0004d473) vid4_progress_pane_t1_ParamLimits

0xc9aa,	// (0x0004d488) vid4_progress_pane_t2_ParamLimits

0xc9c0,	// (0x0004d49e) vid4_progress_pane_t3_ParamLimits

0xf95a,	// (0x00050438) vid4_progress_pane_t_ParamLimits

0xc9d5,	// (0x0004d4b3) wait_bar_pane_cp07_ParamLimits

0x9059,	// (0x00049b37) main_cam6_set_pane_g2_ParamLimits

0x9059,	// (0x00049b37) main_cam6_set_pane_g2

0x907d,	// (0x00049b5b) main_cset6_listscroll_pane_ParamLimits

0x907d,	// (0x00049b5b) main_cset6_listscroll_pane

0x909d,	// (0x00049b7b) main_cset6_slider_pane_ParamLimits

0x909d,	// (0x00049b7b) main_cset6_slider_pane

0x90b3,	// (0x00049b91) main_cset6_text2_pane_ParamLimits

0x90b3,	// (0x00049b91) main_cset6_text2_pane

0xb2ef,	// (0x0004bdcd) main_cset6_text_pane

0xb2f7,	// (0x0004bdd5) main_cset_list_pane_copy1_ParamLimits

0xb2f7,	// (0x0004bdd5) main_cset_list_pane_copy1

0xb307,	// (0x0004bde5) scroll_pane_cp028_copy1

0x90c1,	// (0x00049b9f) cset_list_set_pane_copy1

0x90d2,	// (0x00049bb0) aid_position_infowindow_above_copy1

0x90da,	// (0x00049bb8) aid_position_infowindow_below_copy1

0x11d1,	// (0x00041caf) cset_list_set_pane_g1_copy1

0x11d9,	// (0x00041cb7) cset_list_set_pane_g3_copy1_ParamLimits

0x11d9,	// (0x00041cb7) cset_list_set_pane_g3_copy1

0x11e8,	// (0x00041cc6) cset_list_set_pane_t1_copy1_ParamLimits

0x11e8,	// (0x00041cc6) cset_list_set_pane_t1_copy1

0xe2c7,	// (0x0004eda5) list_highlight_pane_cp021_copy1_ParamLimits

0xe2c7,	// (0x0004eda5) list_highlight_pane_cp021_copy1

0xb310,	// (0x0004bdee) cset6_slider_pane_ParamLimits

0xb310,	// (0x0004bdee) cset6_slider_pane

0xb33c,	// (0x0004be1a) main_cset6_slider_pane_g1_ParamLimits

0xb33c,	// (0x0004be1a) main_cset6_slider_pane_g1

0x90e2,	// (0x00049bc0) main_cset6_slider_pane_g2_ParamLimits

0x90e2,	// (0x00049bc0) main_cset6_slider_pane_g2

0xb364,	// (0x0004be42) main_cset6_slider_pane_g3_ParamLimits

0xb364,	// (0x0004be42) main_cset6_slider_pane_g3

0x910a,	// (0x00049be8) main_cset6_slider_pane_g4_ParamLimits

0x910a,	// (0x00049be8) main_cset6_slider_pane_g4

0x9116,	// (0x00049bf4) main_cset6_slider_pane_g5_ParamLimits

0x9116,	// (0x00049bf4) main_cset6_slider_pane_g5

0x7f92,	// (0x00048a70) main_cset6_slider_pane_g7_ParamLimits

0x7f92,	// (0x00048a70) main_cset6_slider_pane_g7

0x7f9e,	// (0x00048a7c) main_cset6_slider_pane_g8_ParamLimits

0x7f9e,	// (0x00048a7c) main_cset6_slider_pane_g8

0x7faa,	// (0x00048a88) main_cset6_slider_pane_g9_ParamLimits

0x7faa,	// (0x00048a88) main_cset6_slider_pane_g9

0x7fb6,	// (0x00048a94) main_cset6_slider_pane_g10_ParamLimits

0x7fb6,	// (0x00048a94) main_cset6_slider_pane_g10

0x7fc2,	// (0x00048aa0) main_cset6_slider_pane_g11_ParamLimits

0x7fc2,	// (0x00048aa0) main_cset6_slider_pane_g11

0x7fce,	// (0x00048aac) main_cset6_slider_pane_g12_ParamLimits

0x7fce,	// (0x00048aac) main_cset6_slider_pane_g12

0x7fda,	// (0x00048ab8) main_cset6_slider_pane_g13_ParamLimits

0x7fda,	// (0x00048ab8) main_cset6_slider_pane_g13

0x7fe6,	// (0x00048ac4) main_cset6_slider_pane_g14_ParamLimits

0x7fe6,	// (0x00048ac4) main_cset6_slider_pane_g14

0x9122,	// (0x00049c00) main_cset6_slider_pane_g15_ParamLimits

0x9122,	// (0x00049c00) main_cset6_slider_pane_g15

0x800a,	// (0x00048ae8) main_cset6_slider_pane_g16_ParamLimits

0x800a,	// (0x00048ae8) main_cset6_slider_pane_g16

0x8016,	// (0x00048af4) main_cset6_slider_pane_g17_ParamLimits

0x8016,	// (0x00048af4) main_cset6_slider_pane_g17

0x0011,

0xfa27,	// (0x00050505) main_cset6_slider_pane_g_ParamLimits

0xfa27,	// (0x00050505) main_cset6_slider_pane_g

0xb370,	// (0x0004be4e) main_cset6_slider_pane_t1_ParamLimits

0xb370,	// (0x0004be4e) main_cset6_slider_pane_t1

0x9152,	// (0x00049c30) main_cset6_slider_pane_t2_ParamLimits

0x9152,	// (0x00049c30) main_cset6_slider_pane_t2

0x917d,	// (0x00049c5b) main_cset6_slider_pane_t3_ParamLimits

0x917d,	// (0x00049c5b) main_cset6_slider_pane_t3

0x91a8,	// (0x00049c86) main_cset6_slider_pane_t4_ParamLimits

0x91a8,	// (0x00049c86) main_cset6_slider_pane_t4

0x91d3,	// (0x00049cb1) main_cset6_slider_pane_t5_ParamLimits

0x91d3,	// (0x00049cb1) main_cset6_slider_pane_t5

0xb3b1,	// (0x0004be8f) main_cset6_slider_pane_t7_ParamLimits

0xb3b1,	// (0x0004be8f) main_cset6_slider_pane_t7

0x91fe,	// (0x00049cdc) main_cset6_slider_pane_t8_ParamLimits

0x91fe,	// (0x00049cdc) main_cset6_slider_pane_t8

0x9222,	// (0x00049d00) main_cset6_slider_pane_t9_ParamLimits

0x9222,	// (0x00049d00) main_cset6_slider_pane_t9

0x9246,	// (0x00049d24) main_cset6_slider_pane_t10_ParamLimits

0x9246,	// (0x00049d24) main_cset6_slider_pane_t10

0x926a,	// (0x00049d48) main_cset6_slider_pane_t11_ParamLimits

0x926a,	// (0x00049d48) main_cset6_slider_pane_t11

0xb3e7,	// (0x0004bec5) main_cset6_slider_pane_t14_ParamLimits

0xb3e7,	// (0x0004bec5) main_cset6_slider_pane_t14

0xb420,	// (0x0004befe) main_cset6_slider_pane_t15_ParamLimits

0xb420,	// (0x0004befe) main_cset6_slider_pane_t15

0x000b,

0xfa4c,	// (0x0005052a) main_cset6_slider_pane_t_ParamLimits

0xfa4c,	// (0x0005052a) main_cset6_slider_pane_t

0xae79,	// (0x0004b957) cset_slider_pane_g1_copy1

0xae82,	// (0x0004b960) cset_slider_pane_g2_copy1

0xae8b,	// (0x0004b969) cset_slider_pane_g3_copy1

0xa6a4,	// (0x0004b182) bg_popup_sub_pane_cp011_copy1

0x8605,	// (0x000490e3) main_cset_text_pane_g1_copy1

0x860d,	// (0x000490eb) main_cset_text_pane_t1_copy1

0x861b,	// (0x000490f9) main_cset_text_pane_t2_copy1

0x8629,	// (0x00049107) main_cset_text_pane_t3_copy1

0x8637,	// (0x00049115) main_cset_text_pane_t4_copy1

0x8645,	// (0x00049123) main_cset_text_pane_t5_copy1

0x8653,	// (0x00049131) main_cset_text_pane_t6_copy1

0x8661,	// (0x0004913f) main_cset_text_pane_t7_copy1

0x928e,	// (0x00049d6c) main_cset_text2_pane_t1_copy1

0xa6a4,	// (0x0004b182) main_ncimui_pane

0x47eb,	// (0x000452c9) popup_query_ncimui_window_ParamLimits

0x47eb,	// (0x000452c9) popup_query_ncimui_window

0xab25,	// (0x0004b603) field_cale_ev2_pane_g4_ParamLimits

0xab25,	// (0x0004b603) field_cale_ev2_pane_g4

0x6f05,	// (0x000479e3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6f05,	// (0x000479e3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf731,	// (0x0005020f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf731,	// (0x0005020f) cell_video_dialer_keypad_pane_g

0x6f1d,	// (0x000479fb) cell_video_dialer_keypad_pane_t1

0xa6a4,	// (0x0004b182) bg_popup_window_pane_cp012

0xd97f,	// (0x0004e45d) heading_pane_cp06

0xb548,	// (0x0004c026) ncim_query_content_pane

0xa6a4,	// (0x0004b182) bg_popup_heading_pane_cp01

0xb550,	// (0x0004c02e) ncim_heading_pane_t1

0xb55e,	// (0x0004c03c) ncim_indicator_popup_pane

0xb570,	// (0x0004c04e) ncim_query_button_pane

0xb584,	// (0x0004c062) ncim_query_content_pane_t1

0xb596,	// (0x0004c074) ncim_query_content_pane_t2

0x0005,

0xfa8b,	// (0x00050569) ncim_query_content_pane_t

0xb5d0,	// (0x0004c0ae) ncim_query_list_pane

0xb5e2,	// (0x0004c0c0) ncim_query_popup_pane

0xb55e,	// (0x0004c03c) ncim_indicator_popup_pane_ParamLimits

0x93a3,	// (0x00049e81) ncim_query_content_pane_g1_ParamLimits

0x93a3,	// (0x00049e81) ncim_query_content_pane_g1

0xb584,	// (0x0004c062) ncim_query_content_pane_t1_ParamLimits

0xb596,	// (0x0004c074) ncim_query_content_pane_t2_ParamLimits

0x93af,	// (0x00049e8d) ncim_query_content_pane_t3_ParamLimits

0x93af,	// (0x00049e8d) ncim_query_content_pane_t3

0x93d7,	// (0x00049eb5) ncim_query_content_pane_t4_ParamLimits

0x93d7,	// (0x00049eb5) ncim_query_content_pane_t4

0x93ff,	// (0x00049edd) ncim_query_content_pane_t5_ParamLimits

0x93ff,	// (0x00049edd) ncim_query_content_pane_t5

0xb5a8,	// (0x0004c086) ncim_query_content_pane_t6_ParamLimits

0xb5a8,	// (0x0004c086) ncim_query_content_pane_t6

0xfa8b,	// (0x00050569) ncim_query_content_pane_t_ParamLimits

0xb5d0,	// (0x0004c0ae) ncim_query_list_pane_ParamLimits

0xb5e2,	// (0x0004c0c0) ncim_query_popup_pane_ParamLimits

0xb5f6,	// (0x0004c0d4) wait_bar_pane_cp04

0xa6a4,	// (0x0004b182) input_focus_pane_cp011

0xb5fe,	// (0x0004c0dc) ncim_query_popup_pane_t1

0xb60c,	// (0x0004c0ea) ncim_list_query_list_pane_ParamLimits

0xb60c,	// (0x0004c0ea) ncim_list_query_list_pane

0xa6a4,	// (0x0004b182) bg_button_pane_cp027

0xb619,	// (0x0004c0f7) ncim_query_button_pane_g1

0xa6a4,	// (0x0004b182) list_highlight_pane_cp012

0xb623,	// (0x0004c101) ncim_list_query_list_pane_g1

0xb62b,	// (0x0004c109) ncim_list_query_list_pane_t1

0xadf8,	// (0x0004b8d6) cam4_indicators_pane_g3_ParamLimits

0xadf8,	// (0x0004b8d6) cam4_indicators_pane_g3

0x7781,	// (0x0004825f) vid4_indicators_pane_g5_ParamLimits

0x7781,	// (0x0004825f) vid4_indicators_pane_g5

0xc986,	// (0x0004d464) vid4_progress_pane_g5_ParamLimits

0xc986,	// (0x0004d464) vid4_progress_pane_g5

0x92bc,	// (0x00049d9a) main_ncimui_pane_g1

0x9312,	// (0x00049df0) ncimui_group_query_pane_ParamLimits

0x9312,	// (0x00049df0) ncimui_group_query_pane

0x934e,	// (0x00049e2c) ncimui_list_pane_ParamLimits

0x934e,	// (0x00049e2c) ncimui_list_pane

0x936f,	// (0x00049e4d) ncimui_text_pane_ParamLimits

0x936f,	// (0x00049e4d) ncimui_text_pane

0x9427,	// (0x00049f05) ncimui_text_pane_t1_ParamLimits

0x9427,	// (0x00049f05) ncimui_text_pane_t1

0xb639,	// (0x0004c117) ncimui_list_single_graphic_pane_ParamLimits

0xb639,	// (0x0004c117) ncimui_list_single_graphic_pane

0x9445,	// (0x00049f23) ncimui_query_pane_ParamLimits

0x9445,	// (0x00049f23) ncimui_query_pane

0xa6a4,	// (0x0004b182) list_highlight_pane_cp013

0xb649,	// (0x0004c127) ncim_list_query_list_pane_t1_copy1

0xb623,	// (0x0004c101) ncim_list_single_graphic_pane_g1

0xb657,	// (0x0004c135) ncim_query_button_pane_cp01

0xb663,	// (0x0004c141) ncim_query_entry_pane_ParamLimits

0xb663,	// (0x0004c141) ncim_query_entry_pane

0xb676,	// (0x0004c154) ncimui_query_pane_g1

0xb682,	// (0x0004c160) ncimui_query_pane_t1_ParamLimits

0xb682,	// (0x0004c160) ncimui_query_pane_t1

0xe2c7,	// (0x0004eda5) input_focus_pane_cp012

0xb69b,	// (0x0004c179) ncim_query_entry_pane_t1

0xd11a,	// (0x0004dbf8) main_im_pane_ParamLimits

0xe2c7,	// (0x0004eda5) main_mobtv_pane_ParamLimits

0xe2c7,	// (0x0004eda5) main_mobtv_pane

0x913a,	// (0x00049c18) main_cset6_slider_pane_g18_ParamLimits

0x913a,	// (0x00049c18) main_cset6_slider_pane_g18

0x9146,	// (0x00049c24) main_cset6_slider_pane_g19_ParamLimits

0x9146,	// (0x00049c24) main_cset6_slider_pane_g19

0xb6ad,	// (0x0004c18b) bg_main_mobtv_pane_ParamLimits

0xb6ad,	// (0x0004c18b) bg_main_mobtv_pane

0x9458,	// (0x00049f36) main_mobtv_info_pane

0x9461,	// (0x00049f3f) main_mobtv_loading_pane_ParamLimits

0x9461,	// (0x00049f3f) main_mobtv_loading_pane

0xb6bb,	// (0x0004c199) main_mobtv_pg_channel_list_pane

0xb6c5,	// (0x0004c1a3) main_mobtv_pg_hdr_pane

0x946e,	// (0x00049f4c) main_mobtv_programe_curr_pane_ParamLimits

0x946e,	// (0x00049f4c) main_mobtv_programe_curr_pane

0x947b,	// (0x00049f59) main_mobtv_programe_next_pane_ParamLimits

0x947b,	// (0x00049f59) main_mobtv_programe_next_pane

0xb6ce,	// (0x0004c1ac) popup_mobtv_noti_window

0x5645,	// (0x00046123) main_tv_pg_hdr_pane_g1

0xb6d6,	// (0x0004c1b4) main_tv_pg_hdr_pane_g2

0xb6de,	// (0x0004c1bc) main_tv_pg_hdr_pane_g3

0xb6e6,	// (0x0004c1c4) main_tv_pg_hdr_pane_g4

0xb6ee,	// (0x0004c1cc) main_tv_pg_hdr_pane_g5

0xb6f8,	// (0x0004c1d6) main_tv_pg_hdr_pane_g6

0xb702,	// (0x0004c1e0) main_tv_pg_hdr_pane_g7

0xb70c,	// (0x0004c1ea) main_tv_pg_hdr_pane_g8

0xb716,	// (0x0004c1f4) main_tv_pg_hdr_pane_g9

0xb720,	// (0x0004c1fe) main_tv_pg_hdr_pane_g10

0xb72a,	// (0x0004c208) main_tv_pg_hdr_pane_g11

0x000a,

0xfa98,	// (0x00050576) main_tv_pg_hdr_pane_g

0xb734,	// (0x0004c212) main_tv_pg_hdr_pane_t1

0xb742,	// (0x0004c220) main_tv_pg_hdr_pane_t2

0xb750,	// (0x0004c22e) main_tv_pg_hdr_pane_t3

0xb760,	// (0x0004c23e) main_tv_pg_hdr_pane_t4

0xb770,	// (0x0004c24e) main_tv_pg_hdr_pane_t5

0x0004,

0xfaaf,	// (0x0005058d) main_tv_pg_hdr_pane_t

0xb780,	// (0x0004c25e) single_mobtv_pg_channel_pane_ParamLimits

0xb780,	// (0x0004c25e) single_mobtv_pg_channel_pane

0xb792,	// (0x0004c270) single_mobtv_pg_channel_table_pane

0xb79b,	// (0x0004c279) single_mobtv_pg_channel_thumb_pane

0xb7a4,	// (0x0004c282) single_tv_pg_channel_pane_g1

0xb7ad,	// (0x0004c28b) single_tv_pg_channel_pane_g2

0x0001,

0xfaba,	// (0x00050598) single_tv_pg_channel_pane_g

0x591c,	// (0x000463fa) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x591c,	// (0x000463fa) bg_single_mobtv_pg_channel_thumb_pane

0xb7b6,	// (0x0004c294) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xb7b6,	// (0x0004c294) single_mobtv_pg_channel_thumb_pane_g1

0xb7c4,	// (0x0004c2a2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xb7c4,	// (0x0004c2a2) single_mobtv_pg_channel_thumb_pane_g2

0xb7d0,	// (0x0004c2ae) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xb7d0,	// (0x0004c2ae) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfabf,	// (0x0005059d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfabf,	// (0x0005059d) single_mobtv_pg_channel_thumb_pane_g

0xb7dc,	// (0x0004c2ba) single_mobtv_pg_channel_thumb_pane_t1

0xb7ea,	// (0x0004c2c8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfac6,	// (0x000505a4) single_mobtv_pg_channel_thumb_pane_t

0x5645,	// (0x00046123) bg_single_mobtv_pg_channel_table_pane_g1

0x5645,	// (0x00046123) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf582,	// (0x00050060) bg_single_mobtv_pg_channel_table_pane_g

0xb7f8,	// (0x0004c2d6) single_mobtv_pg_channel_table_pane_t1

0xb806,	// (0x0004c2e4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfacb,	// (0x000505a9) single_mobtv_pg_channel_table_pane_t

0x9490,	// (0x00049f6e) main_mobtv_info_pane_g1_ParamLimits

0x9490,	// (0x00049f6e) main_mobtv_info_pane_g1

0x94ae,	// (0x00049f8c) main_mobtv_info_pane_t1_ParamLimits

0x94ae,	// (0x00049f8c) main_mobtv_info_pane_t1

0x9526,	// (0x0004a004) main_mobtv_info_pane_t2_ParamLimits

0x9526,	// (0x0004a004) main_mobtv_info_pane_t2

0x0002,

0xfad5,	// (0x000505b3) main_mobtv_info_pane_t_ParamLimits

0xfad5,	// (0x000505b3) main_mobtv_info_pane_t

0x95b5,	// (0x0004a093) wait_bar_pane_cp05

0x95c7,	// (0x0004a0a5) main_mobtv_loading_pane_g1_ParamLimits

0x95c7,	// (0x0004a0a5) main_mobtv_loading_pane_g1

0x95da,	// (0x0004a0b8) main_mobtv_loading_pane_g2_ParamLimits

0x95da,	// (0x0004a0b8) main_mobtv_loading_pane_g2

0x95e6,	// (0x0004a0c4) main_mobtv_loading_pane_g3_ParamLimits

0x95e6,	// (0x0004a0c4) main_mobtv_loading_pane_g3

0x0002,

0xfadc,	// (0x000505ba) main_mobtv_loading_pane_g_ParamLimits

0xfadc,	// (0x000505ba) main_mobtv_loading_pane_g

0xb814,	// (0x0004c2f2) main_mobtv_loading_pane_t1_ParamLimits

0xb814,	// (0x0004c2f2) main_mobtv_loading_pane_t1

0xb82c,	// (0x0004c30a) main_mobtv_loading_pane_t2_ParamLimits

0xb82c,	// (0x0004c30a) main_mobtv_loading_pane_t2

0x0001,

0xfae3,	// (0x000505c1) main_mobtv_loading_pane_t_ParamLimits

0xfae3,	// (0x000505c1) main_mobtv_loading_pane_t

0x95f9,	// (0x0004a0d7) wait_bar_pane_cp06_ParamLimits

0x95f9,	// (0x0004a0d7) wait_bar_pane_cp06

0xb850,	// (0x0004c32e) main_mobtv_programe_curr_pane_t1

0xb85e,	// (0x0004c33c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfae8,	// (0x000505c6) main_mobtv_programe_curr_pane_t

0xb86c,	// (0x0004c34a) main_mobtv_programe_next_pane_t1

0xb87a,	// (0x0004c358) main_mobtv_programe_next_pane_t2

0xb888,	// (0x0004c366) main_mobtv_programe_next_pane_t3

0x0002,

0xfaed,	// (0x000505cb) main_mobtv_programe_next_pane_t

0xa6a4,	// (0x0004b182) bg_popup_mobtv_noti_window_pane

0xb896,	// (0x0004c374) popup_mobtv_noti_window_g1

0xb89e,	// (0x0004c37c) popup_mobtv_noti_window_t1

0xb8ac,	// (0x0004c38a) popup_mobtv_noti_window_t2

0x0001,

0xfaf4,	// (0x000505d2) popup_mobtv_noti_window_t

0x5645,	// (0x00046123) bg_popup_mobtv_noti_window_pane_g1

0xa6a4,	// (0x0004b182) sc_clock_pane

0xa6a4,	// (0x0004b182) main_fs_bigclock_pane

0x8d83,	// (0x00049861) blid2_tripm_pane_t4_ParamLimits

0x8d83,	// (0x00049861) blid2_tripm_pane_t4

0x9608,	// (0x0004a0e6) sc_clock_pane_g1_ParamLimits

0x9608,	// (0x0004a0e6) sc_clock_pane_g1

0x961a,	// (0x0004a0f8) sc_clock_pane_t1_ParamLimits

0x961a,	// (0x0004a0f8) sc_clock_pane_t1

0x963c,	// (0x0004a11a) sc_clock_pane_t2_ParamLimits

0x963c,	// (0x0004a11a) sc_clock_pane_t2

0x9654,	// (0x0004a132) sc_clock_pane_t3_ParamLimits

0x9654,	// (0x0004a132) sc_clock_pane_t3

0x0004,

0xfaf9,	// (0x000505d7) sc_clock_pane_t_ParamLimits

0xfaf9,	// (0x000505d7) sc_clock_pane_t

0x9eda,	// (0x0004a9b8) main_fs_bigclock_indicator_pane_ParamLimits

0x9eda,	// (0x0004a9b8) main_fs_bigclock_indicator_pane

0x58b1,	// (0x0004638f) main_fs_bigclock_pane_g1_ParamLimits

0x58b1,	// (0x0004638f) main_fs_bigclock_pane_g1

0x9ee6,	// (0x0004a9c4) main_fs_bigclock_pane_t1_ParamLimits

0x9ee6,	// (0x0004a9c4) main_fs_bigclock_pane_t1

0x9ef8,	// (0x0004a9d6) main_fs_bigclock_pane_t2_ParamLimits

0x9ef8,	// (0x0004a9d6) main_fs_bigclock_pane_t2

0x9f0c,	// (0x0004a9ea) main_fs_bigclock_pane_t3_ParamLimits

0x9f0c,	// (0x0004a9ea) main_fs_bigclock_pane_t3

0x0002,

0xfcf8,	// (0x000507d6) main_fs_bigclock_pane_t_ParamLimits

0xfcf8,	// (0x000507d6) main_fs_bigclock_pane_t

0xc49e,	// (0x0004cf7c) main_fs_bigclock_indicator_pane_g1

0xb578,	// (0x0004c056) ncim_query_content_pane_g2_ParamLimits

0xb578,	// (0x0004c056) ncim_query_content_pane_g2

0x0001,

0xfa86,	// (0x00050564) ncim_query_content_pane_g_ParamLimits

0xfa86,	// (0x00050564) ncim_query_content_pane_g

0x966b,	// (0x0004a149) sc_clock_pane_t4_ParamLimits

0x966b,	// (0x0004a149) sc_clock_pane_t4

0xe2c7,	// (0x0004eda5) main_radioblah_pane

0x74d6,	// (0x00047fb4) cell_call4_button_pane_t1_copy1_ParamLimits

0x74d6,	// (0x00047fb4) cell_call4_button_pane_t1_copy1

0x92c4,	// (0x00049da2) main_ncimui_pane_t1_ParamLimits

0x92c4,	// (0x00049da2) main_ncimui_pane_t1

0x92de,	// (0x00049dbc) main_ncimui_pane_t2_ParamLimits

0x92de,	// (0x00049dbc) main_ncimui_pane_t2

0x0002,

0xfa7f,	// (0x0005055d) main_ncimui_pane_t_ParamLimits

0xfa7f,	// (0x0005055d) main_ncimui_pane_t

0xb9da,	// (0x0004c4b8) main_radioblah_anim_pane_ParamLimits

0xb9da,	// (0x0004c4b8) main_radioblah_anim_pane

0xb9eb,	// (0x0004c4c9) main_radioblah_info_pane_ParamLimits

0xb9eb,	// (0x0004c4c9) main_radioblah_info_pane

0xb9ff,	// (0x0004c4dd) main_radioblah_pane_t1_ParamLimits

0xb9ff,	// (0x0004c4dd) main_radioblah_pane_t1

0xba1b,	// (0x0004c4f9) main_radioblah_pane_t2_ParamLimits

0xba1b,	// (0x0004c4f9) main_radioblah_pane_t2

0x0003,

0xfb1a,	// (0x000505f8) main_radioblah_pane_t_ParamLimits

0xfb1a,	// (0x000505f8) main_radioblah_pane_t

0x9714,	// (0x0004a1f2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9714,	// (0x0004a1f2) main_radioblah_rocker_ctrl_pane

0xba63,	// (0x0004c541) main_radioblah_info_pane_t1_ParamLimits

0xba63,	// (0x0004c541) main_radioblah_info_pane_t1

0x976c,	// (0x0004a24a) main_radioblah_info_pane_t2_ParamLimits

0x976c,	// (0x0004a24a) main_radioblah_info_pane_t2

0x0003,

0xfb23,	// (0x00050601) main_radioblah_info_pane_t_ParamLimits

0xfb23,	// (0x00050601) main_radioblah_info_pane_t

0x5645,	// (0x00046123) main_radioblah_rocker_ctrl_pane_g1

0x981c,	// (0x0004a2fa) main_radioblah_rocker_ctrl_pane_g2

0x9824,	// (0x0004a302) main_radioblah_rocker_ctrl_pane_g3

0x982c,	// (0x0004a30a) main_radioblah_rocker_ctrl_pane_g4

0x9834,	// (0x0004a312) main_radioblah_rocker_ctrl_pane_g5

0x983c,	// (0x0004a31a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb2c,	// (0x0005060a) main_radioblah_rocker_ctrl_pane_g

0x928e,	// (0x00049d6c) main_cset_text2_pane_t1_copy1_ParamLimits

0xadc8,	// (0x0004b8a6) cam4_image_uncrop_qvga_pane

0xae21,	// (0x0004b8ff) vid4_image_uncrop_qcif_pane

0xc9e7,	// (0x0004d4c5) cam6_image_uncrop_qvga_pane_ParamLimits

0xc9e7,	// (0x0004d4c5) cam6_image_uncrop_qvga_pane

0xb1d2,	// (0x0004bcb0) vid6_image_uncrop_qcif_pane_ParamLimits

0xb1d2,	// (0x0004bcb0) vid6_image_uncrop_qcif_pane

0xa6a4,	// (0x0004b182) bg_popup_preview_window_pane_cp03

0xb52a,	// (0x0004c008) list_cset_text2_pane

0xb532,	// (0x0004c010) main_cset6_text2_pane_g1

0xb53a,	// (0x0004c018) main_cset6_text2_pane_t1

0x9844,	// (0x0004a322) list_cset_text2_pane_t1_ParamLimits

0x9844,	// (0x0004a322) list_cset_text2_pane_t1

0xe2c7,	// (0x0004eda5) main_radioblah_pane_ParamLimits

0x95a1,	// (0x0004a07f) main_mobtv_info_pane_t3_ParamLimits

0x95a1,	// (0x0004a07f) main_mobtv_info_pane_t3

0x9702,	// (0x0004a1e0) main_radioblah_pane_g1

0x973c,	// (0x0004a21a) main_radioblah_info_pane_g1

0x97c1,	// (0x0004a29f) main_radioblah_info_pane_t3_ParamLimits

0x97c1,	// (0x0004a29f) main_radioblah_info_pane_t3

0x331b,	// (0x00043df9) highlight_cell_cale_month_pane_ParamLimits

0x331b,	// (0x00043df9) highlight_cell_cale_month_pane

0xa6a4,	// (0x0004b182) main_phob_fisheye_pane

0x6196,	// (0x00046c74) scroll_pane_cp0031_ParamLimits

0x6196,	// (0x00046c74) scroll_pane_cp0031

0xb2e0,	// (0x0004bdbe) wait_bar_pane_cp08_ParamLimits

0x90c1,	// (0x00049b9f) cset_list_set_pane_copy1_ParamLimits

0xba9d,	// (0x0004c57b) highlight_cell_cale_month_pane_g1

0x985d,	// (0x0004a33b) highlight_cell_cale_month_pane_t1

0x8a6e,	// (0x0004954c) list_gen_pane_cp01

0x7ede,	// (0x000489bc) scroll_pane_01

0xbaa5,	// (0x0004c583) list_single_double_fisheye_pane

0x11fd,	// (0x00041cdb) list_double_fisheye_pane_g1_ParamLimits

0x11fd,	// (0x00041cdb) list_double_fisheye_pane_g1

0x1209,	// (0x00041ce7) list_double_fisheye_pane_g2_ParamLimits

0x1209,	// (0x00041ce7) list_double_fisheye_pane_g2

0x986b,	// (0x0004a349) list_double_fisheye_pane_g3_ParamLimits

0x986b,	// (0x0004a349) list_double_fisheye_pane_g3

0x0004,

0xfb39,	// (0x00050617) list_double_fisheye_pane_g_ParamLimits

0xfb39,	// (0x00050617) list_double_fisheye_pane_g

0x123a,	// (0x00041d18) list_double_fisheye_pane_t1_ParamLimits

0x123a,	// (0x00041d18) list_double_fisheye_pane_t1

0x1255,	// (0x00041d33) list_double_fisheye_pane_t2_ParamLimits

0x1255,	// (0x00041d33) list_double_fisheye_pane_t2

0x0001,

0xfb44,	// (0x00050622) list_double_fisheye_pane_t_ParamLimits

0xfb44,	// (0x00050622) list_double_fisheye_pane_t

0xa6a4,	// (0x0004b182) main_call5_pane

0x9696,	// (0x0004a174) sc_swipe_pane_ParamLimits

0x9696,	// (0x0004a174) sc_swipe_pane

0x988a,	// (0x0004a368) call5_image_pane_ParamLimits

0x988a,	// (0x0004a368) call5_image_pane

0x98a7,	// (0x0004a385) call5_swipe_1_pane_ParamLimits

0x98a7,	// (0x0004a385) call5_swipe_1_pane

0x98ba,	// (0x0004a398) call5_swipe_2_pane_ParamLimits

0x98ba,	// (0x0004a398) call5_swipe_2_pane

0x98e5,	// (0x0004a3c3) popup_call5_audio_first_window_ParamLimits

0x98e5,	// (0x0004a3c3) popup_call5_audio_first_window

0x591c,	// (0x000463fa) call5_swipe_1_pane_g1_ParamLimits

0x591c,	// (0x000463fa) call5_swipe_1_pane_g1

0xbaae,	// (0x0004c58c) call5_swipe_1_pane_g2_ParamLimits

0xbaae,	// (0x0004c58c) call5_swipe_1_pane_g2

0x0001,

0xfb49,	// (0x00050627) call5_swipe_1_pane_g_ParamLimits

0xfb49,	// (0x00050627) call5_swipe_1_pane_g

0xbaba,	// (0x0004c598) call5_swipe_1_pane_t1_ParamLimits

0xbaba,	// (0x0004c598) call5_swipe_1_pane_t1

0x591c,	// (0x000463fa) call5_swipe_2_pane_g1_ParamLimits

0x591c,	// (0x000463fa) call5_swipe_2_pane_g1

0xbacf,	// (0x0004c5ad) call5_swipe_2_pane_g2_ParamLimits

0xbacf,	// (0x0004c5ad) call5_swipe_2_pane_g2

0x0001,

0xfb4e,	// (0x0005062c) call5_swipe_2_pane_g_ParamLimits

0xfb4e,	// (0x0005062c) call5_swipe_2_pane_g

0xbadb,	// (0x0004c5b9) call5_swipe_2_pane_t1_ParamLimits

0xbadb,	// (0x0004c5b9) call5_swipe_2_pane_t1

0xbaf0,	// (0x0004c5ce) sc_swipe_pane_g1_ParamLimits

0xbaf0,	// (0x0004c5ce) sc_swipe_pane_g1

0xbafd,	// (0x0004c5db) sc_swipe_pane_g2_ParamLimits

0xbafd,	// (0x0004c5db) sc_swipe_pane_g2

0x0001,

0xfb53,	// (0x00050631) sc_swipe_pane_g_ParamLimits

0xfb53,	// (0x00050631) sc_swipe_pane_g

0xbb09,	// (0x0004c5e7) sc_swipe_pane_t1_ParamLimits

0xbb09,	// (0x0004c5e7) sc_swipe_pane_t1

0xa6a4,	// (0x0004b182) main_cmail_launcher_pane

0x98f6,	// (0x0004a3d4) aid_size_cell_cmail_l_ParamLimits

0x98f6,	// (0x0004a3d4) aid_size_cell_cmail_l

0x9910,	// (0x0004a3ee) grid_cmail_l_pane_ParamLimits

0x9910,	// (0x0004a3ee) grid_cmail_l_pane

0x992b,	// (0x0004a409) cell_cmail_l_pane_ParamLimits

0x992b,	// (0x0004a409) cell_cmail_l_pane

0x9951,	// (0x0004a42f) cell_cmail_l_pane_g1_ParamLimits

0x9951,	// (0x0004a42f) cell_cmail_l_pane_g1

0x995d,	// (0x0004a43b) cell_cmail_l_pane_t1_ParamLimits

0x995d,	// (0x0004a43b) cell_cmail_l_pane_t1

0xbb1e,	// (0x0004c5fc) cell_cmail_l_pane_t2_ParamLimits

0xbb1e,	// (0x0004c5fc) cell_cmail_l_pane_t2

0x0001,

0xfb58,	// (0x00050636) cell_cmail_l_pane_t_ParamLimits

0xfb58,	// (0x00050636) cell_cmail_l_pane_t

0xe2c7,	// (0x0004eda5) grid_highlight_pane_cp018_ParamLimits

0xe2c7,	// (0x0004eda5) grid_highlight_pane_cp018

0x18f8,	// (0x000423d6) main2_pane_ParamLimits

0x18f8,	// (0x000423d6) main2_pane

0xd1b3,	// (0x0004dc91) popup_sp_fs_action_menu_bg_pane_g1

0xd1bb,	// (0x0004dc99) popup_sp_fs_action_menu_bg_pane_g2

0xd1c3,	// (0x0004dca1) popup_sp_fs_action_menu_bg_pane_g3

0xd1cb,	// (0x0004dca9) popup_sp_fs_action_menu_bg_pane_g4

0xd1d3,	// (0x0004dcb1) popup_sp_fs_action_menu_bg_pane_g5

0xd1db,	// (0x0004dcb9) popup_sp_fs_action_menu_bg_pane_g6

0xd1e3,	// (0x0004dcc1) popup_sp_fs_action_menu_bg_pane_g7

0xd1eb,	// (0x0004dcc9) popup_sp_fs_action_menu_bg_pane_g8

0xd1f3,	// (0x0004dcd1) popup_sp_fs_action_menu_bg_pane_g9

0xd1fb,	// (0x0004dcd9) popup_sp_fs_action_menu_bg_pane_g10

0xd1fb,	// (0x0004dcd9) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0004fc8a) popup_sp_fs_action_menu_bg_pane_g

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t3_g3_g1

0xa802,	// (0x0004b2e0) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa802,	// (0x0004b2e0) list_medium_line_x2_t3_g3_g2

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t3_g3_g3

0x0002,

0xf253,	// (0x0004fd31) list_medium_line_x2_t3_g3_g_ParamLimits

0xf253,	// (0x0004fd31) list_medium_line_x2_t3_g3_g

0xa81a,	// (0x0004b2f8) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa81a,	// (0x0004b2f8) list_medium_line_x2_t3_g3_t1

0x0d61,	// (0x0004183f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d61,	// (0x0004183f) list_medium_line_x2_t3_g3_t2

0xa82f,	// (0x0004b30d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa82f,	// (0x0004b30d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25a,	// (0x0004fd38) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25a,	// (0x0004fd38) list_medium_line_x2_t3_g3_t

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t3_g2_g1

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t3_g2_g2

0x0001,

0xf261,	// (0x0004fd3f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf261,	// (0x0004fd3f) list_medium_line_x2_t3_g2_g

0xa844,	// (0x0004b322) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa844,	// (0x0004b322) list_medium_line_x2_t3_g2_t1

0xa85a,	// (0x0004b338) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa85a,	// (0x0004b338) list_medium_line_x2_t3_g2_t2

0xa82f,	// (0x0004b30d) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa82f,	// (0x0004b30d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf266,	// (0x0004fd44) list_medium_line_x2_t3_g2_t_ParamLimits

0xf266,	// (0x0004fd44) list_medium_line_x2_t3_g2_t

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t4_g4_g1

0xa86c,	// (0x0004b34a) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa86c,	// (0x0004b34a) list_medium_line_x2_t4_g4_g2

0xa802,	// (0x0004b2e0) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa802,	// (0x0004b2e0) list_medium_line_x2_t4_g4_g3

0xa878,	// (0x0004b356) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa878,	// (0x0004b356) list_medium_line_x2_t4_g4_g4

0x0003,

0xf26d,	// (0x0004fd4b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf26d,	// (0x0004fd4b) list_medium_line_x2_t4_g4_g

0x0d75,	// (0x00041853) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d75,	// (0x00041853) list_medium_line_x2_t4_g4_t1

0x0d8f,	// (0x0004186d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d8f,	// (0x0004186d) list_medium_line_x2_t4_g4_t2

0x0da5,	// (0x00041883) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0da5,	// (0x00041883) list_medium_line_x2_t4_g4_t3

0xa884,	// (0x0004b362) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa884,	// (0x0004b362) list_medium_line_x2_t4_g4_t4

0x0003,

0xf276,	// (0x0004fd54) list_medium_line_x2_t4_g4_t_ParamLimits

0xf276,	// (0x0004fd54) list_medium_line_x2_t4_g4_t

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t2_g4_g1

0xa86c,	// (0x0004b34a) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa86c,	// (0x0004b34a) list_medium_line_x2_t2_g4_g2

0xa802,	// (0x0004b2e0) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa802,	// (0x0004b2e0) list_medium_line_x2_t2_g4_g3

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c5,	// (0x0004fda3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c5,	// (0x0004fda3) list_medium_line_x2_t2_g4_g

0xa896,	// (0x0004b374) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa896,	// (0x0004b374) list_medium_line_x2_t2_g4_t1

0xa82f,	// (0x0004b30d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa82f,	// (0x0004b30d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ce,	// (0x0004fdac) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ce,	// (0x0004fdac) list_medium_line_x2_t2_g4_t

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t2_g3_g1

0xa802,	// (0x0004b2e0) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa802,	// (0x0004b2e0) list_medium_line_x2_t2_g3_g2

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t2_g3_g3

0x0002,

0xf253,	// (0x0004fd31) list_medium_line_x2_t2_g3_g_ParamLimits

0xf253,	// (0x0004fd31) list_medium_line_x2_t2_g3_g

0xa8ab,	// (0x0004b389) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa8ab,	// (0x0004b389) list_medium_line_x2_t2_g3_t1

0xa82f,	// (0x0004b30d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa82f,	// (0x0004b30d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d3,	// (0x0004fdb1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d3,	// (0x0004fdb1) list_medium_line_x2_t2_g3_t

0x344a,	// (0x00043f28) main_sp_fs_list_pane_ParamLimits

0x344a,	// (0x00043f28) main_sp_fs_list_pane

0x3456,	// (0x00043f34) sp_fs_scroll_pane_ParamLimits

0x3456,	// (0x00043f34) sp_fs_scroll_pane

0x0dba,	// (0x00041898) list_medium_line_x2_t3_t1

0x0dca,	// (0x000418a8) list_medium_line_x2_t3_t2

0xa8ee,	// (0x0004b3cc) list_medium_line_x2_t3_t3

0x0002,

0xf2ec,	// (0x0004fdca) list_medium_line_x2_t3_t

0x0dd8,	// (0x000418b6) list_medium_line_x3_t4_t1

0x0de8,	// (0x000418c6) list_medium_line_x3_t4_t2

0xa8fc,	// (0x0004b3da) list_medium_line_x3_t4_t3

0xa8ee,	// (0x0004b3cc) list_medium_line_x3_t4_t4

0x0003,

0xf2f3,	// (0x0004fdd1) list_medium_line_x3_t4_t

0x0df6,	// (0x000418d4) list_medium_line_x4_t5_t1

0x0e06,	// (0x000418e4) list_medium_line_x4_t5_t2

0xa8fc,	// (0x0004b3da) list_medium_line_x4_t5_t3

0xa90a,	// (0x0004b3e8) list_medium_line_x4_t5_t4

0xa8ee,	// (0x0004b3cc) list_medium_line_x4_t5_t5

0x0004,

0xf2fc,	// (0x0004fdda) list_medium_line_x4_t5_t

0xa7f6,	// (0x0004b2d4) list_medium_line_t4_g4_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_t4_g4_g1

0xa878,	// (0x0004b356) list_medium_line_t4_g4_g2_ParamLimits

0xa878,	// (0x0004b356) list_medium_line_t4_g4_g2

0xa918,	// (0x0004b3f6) list_medium_line_t4_g4_g3_ParamLimits

0xa918,	// (0x0004b3f6) list_medium_line_t4_g4_g3

0xa80e,	// (0x0004b2ec) list_medium_line_t4_g4_g4_ParamLimits

0xa80e,	// (0x0004b2ec) list_medium_line_t4_g4_g4

0x0003,

0xf307,	// (0x0004fde5) list_medium_line_t4_g4_g_ParamLimits

0xf307,	// (0x0004fde5) list_medium_line_t4_g4_g

0xa924,	// (0x0004b402) list_medium_line_t4_g4_t1_ParamLimits

0xa924,	// (0x0004b402) list_medium_line_t4_g4_t1

0xa939,	// (0x0004b417) list_medium_line_t4_g4_t2_ParamLimits

0xa939,	// (0x0004b417) list_medium_line_t4_g4_t2

0xa94e,	// (0x0004b42c) list_medium_line_t4_g4_t3_ParamLimits

0xa94e,	// (0x0004b42c) list_medium_line_t4_g4_t3

0xa82f,	// (0x0004b30d) list_medium_line_t4_g4_t4_ParamLimits

0xa82f,	// (0x0004b30d) list_medium_line_t4_g4_t4

0x0003,

0xf310,	// (0x0004fdee) list_medium_line_t4_g4_t_ParamLimits

0xf310,	// (0x0004fdee) list_medium_line_t4_g4_t

0x3525,	// (0x00044003) chi_dic_find_pane_g1

0x45bd,	// (0x0004509b) main_tport_pane

0xae94,	// (0x0004b972) list_medium_line_plain_t1

0xaea2,	// (0x0004b980) list_medium_line_t2_g2_g1_ParamLimits

0xaea2,	// (0x0004b980) list_medium_line_t2_g2_g1

0xaeae,	// (0x0004b98c) list_medium_line_t2_g2_g2_ParamLimits

0xaeae,	// (0x0004b98c) list_medium_line_t2_g2_g2

0x0001,

0xf895,	// (0x00050373) list_medium_line_t2_g2_g_ParamLimits

0xf895,	// (0x00050373) list_medium_line_t2_g2_g

0x102e,	// (0x00041b0c) list_medium_line_t2_g2_t1_ParamLimits

0x102e,	// (0x00041b0c) list_medium_line_t2_g2_t1

0x1048,	// (0x00041b26) list_medium_line_t2_g2_t2_ParamLimits

0x1048,	// (0x00041b26) list_medium_line_t2_g2_t2

0x0001,

0xf89a,	// (0x00050378) list_medium_line_t2_g2_t_ParamLimits

0xf89a,	// (0x00050378) list_medium_line_t2_g2_t

0xaf56,	// (0x0004ba34) aid_sp_fs_list_icon_a_sm

0xaf5e,	// (0x0004ba3c) aid_sp_fs_list_icon_d

0xaf66,	// (0x0004ba44) aid_sp_fs_text_primary

0xaf6f,	// (0x0004ba4d) aid_sp_fs_text_secondary

0xaf78,	// (0x0004ba56) list_medium_line

0xaf78,	// (0x0004ba56) list_medium_line_g2

0xaf78,	// (0x0004ba56) list_medium_line_g3

0xaf78,	// (0x0004ba56) list_medium_line_plain

0xaf78,	// (0x0004ba56) list_medium_line_plain_t2

0xaf78,	// (0x0004ba56) list_medium_line_plain_t3

0xaf78,	// (0x0004ba56) list_medium_line_right_icon

0xaf78,	// (0x0004ba56) list_medium_line_right_iconx2

0xaf78,	// (0x0004ba56) list_medium_line_t2

0xaf78,	// (0x0004ba56) list_medium_line_t2_g2

0xaf78,	// (0x0004ba56) list_medium_line_t2_g3

0xaf78,	// (0x0004ba56) list_medium_line_t2_right_icon

0xaf78,	// (0x0004ba56) list_medium_line_t2_right_iconx2

0xaf78,	// (0x0004ba56) list_medium_line_t3

0xaf78,	// (0x0004ba56) list_medium_line_t3_g2

0xaf78,	// (0x0004ba56) list_medium_line_t3_g3

0xaf78,	// (0x0004ba56) list_medium_line_t3_right_iconx2

0xaf81,	// (0x0004ba5f) list_medium_line_t4_g4

0xaf8a,	// (0x0004ba68) list_medium_line_x2

0xaf8a,	// (0x0004ba68) list_medium_line_x2_t2_g2

0xaf8a,	// (0x0004ba68) list_medium_line_x2_t2_g3

0xaf8a,	// (0x0004ba68) list_medium_line_x2_t2_g4

0xaf8a,	// (0x0004ba68) list_medium_line_x2_t3

0xaf8a,	// (0x0004ba68) list_medium_line_x2_t3_g2

0xaf8a,	// (0x0004ba68) list_medium_line_x2_t3_g3

0xaf8a,	// (0x0004ba68) list_medium_line_x2_t3_g4

0xaf8a,	// (0x0004ba68) list_medium_line_x2_t4_g2

0xaf8a,	// (0x0004ba68) list_medium_line_x2_t4_g4

0xaf93,	// (0x0004ba71) list_medium_line_x3

0xaf93,	// (0x0004ba71) list_medium_line_x3_t4

0xaf93,	// (0x0004ba71) list_medium_line_x3_t4_g4

0xaf81,	// (0x0004ba5f) list_medium_line_x4_t4

0xaf81,	// (0x0004ba5f) list_medium_line_x4_t4_g7

0xaf81,	// (0x0004ba5f) list_medium_line_x4_t5

0xaf9c,	// (0x0004ba7a) list_single_fs_dyc_pane_ParamLimits

0xaf9c,	// (0x0004ba7a) list_single_fs_dyc_pane

0xa7f6,	// (0x0004b2d4) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x4_t4_g7_g1

0xb459,	// (0x0004bf37) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb459,	// (0x0004bf37) list_medium_line_x4_t4_g7_g2

0xb465,	// (0x0004bf43) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb465,	// (0x0004bf43) list_medium_line_x4_t4_g7_g3

0xb474,	// (0x0004bf52) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb474,	// (0x0004bf52) list_medium_line_x4_t4_g7_g4

0xb480,	// (0x0004bf5e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb480,	// (0x0004bf5e) list_medium_line_x4_t4_g7_g5

0xb48f,	// (0x0004bf6d) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb48f,	// (0x0004bf6d) list_medium_line_x4_t4_g7_g6

0xb49e,	// (0x0004bf7c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb49e,	// (0x0004bf7c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa65,	// (0x00050543) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa65,	// (0x00050543) list_medium_line_x4_t4_g7_g

0xb4aa,	// (0x0004bf88) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb4aa,	// (0x0004bf88) list_medium_line_x4_t4_g7_t1

0xb4bf,	// (0x0004bf9d) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb4bf,	// (0x0004bf9d) list_medium_line_x4_t4_g7_t2

0xb4d4,	// (0x0004bfb2) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb4d4,	// (0x0004bfb2) list_medium_line_x4_t4_g7_t3

0xb4e9,	// (0x0004bfc7) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb4e9,	// (0x0004bfc7) list_medium_line_x4_t4_g7_t4

0xb4fb,	// (0x0004bfd9) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb4fb,	// (0x0004bfd9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa74,	// (0x00050552) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa74,	// (0x00050552) list_medium_line_x4_t4_g7_t

0xb50d,	// (0x0004bfeb) list_single_dyc_row_pane_ParamLimits

0xb50d,	// (0x0004bfeb) list_single_dyc_row_pane

0x9877,	// (0x0004a355) call5_gesture_pane_ParamLimits

0x9877,	// (0x0004a355) call5_gesture_pane

0x98cd,	// (0x0004a3ab) call5_windows_pane_ParamLimits

0x98cd,	// (0x0004a3ab) call5_windows_pane

0x9973,	// (0x0004a451) call5_swipe_1_pane_cp_ParamLimits

0x9973,	// (0x0004a451) call5_swipe_1_pane_cp

0x997f,	// (0x0004a45d) call5_swipe_2_pane_cp_ParamLimits

0x997f,	// (0x0004a45d) call5_swipe_2_pane_cp

0xdbf9,	// (0x0004e6d7) call5_image_pane_cp

0x998b,	// (0x0004a469) popup_call5_audio_first_window_cp_ParamLimits

0x998b,	// (0x0004a469) popup_call5_audio_first_window_cp

0xbaf0,	// (0x0004c5ce) call5_swipe_1_pane_g1_cp_ParamLimits

0xbaf0,	// (0x0004c5ce) call5_swipe_1_pane_g1_cp

0xbb30,	// (0x0004c60e) call5_swipe_1_pane_g2_cp

0xbb09,	// (0x0004c5e7) call5_swipe_1_pane_t1_cp_ParamLimits

0xbb09,	// (0x0004c5e7) call5_swipe_1_pane_t1_cp

0xbaf0,	// (0x0004c5ce) call5_swipe_2_pane_g1_cp_ParamLimits

0xbaf0,	// (0x0004c5ce) call5_swipe_2_pane_g1_cp

0xbb38,	// (0x0004c616) call5_swipe_2_pane_g2_cp

0xbb40,	// (0x0004c61e) call5_swipe_2_pane_t1_cp_ParamLimits

0xbb40,	// (0x0004c61e) call5_swipe_2_pane_t1_cp

0xe2c7,	// (0x0004eda5) main_sp_fs_email_pane

0xbb55,	// (0x0004c633) main_sp_fs_listscroll_pane_te

0xbb5e,	// (0x0004c63c) popup_sp_fs_action_menu_pane_ParamLimits

0xbb5e,	// (0x0004c63c) popup_sp_fs_action_menu_pane

0x5645,	// (0x00046123) bg_sp_fs_ctrlbar_pane_g1

0xbba2,	// (0x0004c680) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xbbab,	// (0x0004c689) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbbb4,	// (0x0004c692) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x5645,	// (0x00046123) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb5d,	// (0x0005063b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x535e,	// (0x00045e3c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x535e,	// (0x00045e3c) bg_sp_fs_ctrlbar_ddmenu_pane

0xbbbd,	// (0x0004c69b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xbbbd,	// (0x0004c69b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xbbc9,	// (0x0004c6a7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xbbc9,	// (0x0004c6a7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb66,	// (0x00050644) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb66,	// (0x00050644) main_sp_fs_ctrlbar_ddmenu_pane_g

0xbbd5,	// (0x0004c6b3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xbbd5,	// (0x0004c6b3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbbef,	// (0x0004c6cd) list_medium_line_t2_right_icon_g1

0x1277,	// (0x00041d55) list_medium_line_t2_right_icon_t1

0x1287,	// (0x00041d65) list_medium_line_t2_right_icon_t2

0x0001,

0xfb6b,	// (0x00050649) list_medium_line_t2_right_icon_t

0xefff,	// (0x0004fadd) bg_sp_fs_ctrlbar_pane_ParamLimits

0xefff,	// (0x0004fadd) bg_sp_fs_ctrlbar_pane

0x99e1,	// (0x0004a4bf) main_sp_fs_ctrlbar_button_pane_cp01

0x99eb,	// (0x0004a4c9) main_sp_fs_ctrlbar_ddmenu_pane

0xbc2f,	// (0x0004c70d) main_sp_fs_ctrlbar_pane_g1

0xbc3b,	// (0x0004c719) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfb70,	// (0x0005064e) main_sp_fs_ctrlbar_pane_g

0xbc47,	// (0x0004c725) main_sp_fs_ctrlbar_pane_t1

0x1299,	// (0x00041d77) main_sp_fs_ctrlbar_pane

0x12bd,	// (0x00041d9b) main_sp_fs_listscroll_pane_te_cp01

0x12dd,	// (0x00041dbb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x12dd,	// (0x00041dbb) popup_sp_fs_action_menu_pane_cp01

0xe2c7,	// (0x0004eda5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe2c7,	// (0x0004eda5) bg_sp_fs_highlight_list_pane_cp01

0xbc5c,	// (0x0004c73a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xbc5c,	// (0x0004c73a) sp_fs_action_menu_list_gene_pane_g1

0xbc6b,	// (0x0004c749) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xbc6b,	// (0x0004c749) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb75,	// (0x00050653) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb75,	// (0x00050653) sp_fs_action_menu_list_gene_pane_g

0xbc78,	// (0x0004c756) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xbc78,	// (0x0004c756) sp_fs_action_menu_list_gene_pane_t1

0xbc90,	// (0x0004c76e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xbc90,	// (0x0004c76e) sp_fs_action_menu_list_gene_pane

0xbcaf,	// (0x0004c78d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xbcaf,	// (0x0004c78d) popup_sp_fs_action_menu_bg_pane

0xbcbd,	// (0x0004c79b) sp_fs_action_menu_list_pane_ParamLimits

0xbcbd,	// (0x0004c79b) sp_fs_action_menu_list_pane

0xbcdd,	// (0x0004c7bb) sp_fs_scroll_pane_cp01_ParamLimits

0xbcdd,	// (0x0004c7bb) sp_fs_scroll_pane_cp01

0x12f7,	// (0x00041dd5) list_medium_line_plain_t2_t1

0x1307,	// (0x00041de5) list_medium_line_plain_t2_t2

0x0001,

0xfb7a,	// (0x00050658) list_medium_line_plain_t2_t

0x1317,	// (0x00041df5) list_medium_line_plain_t3_t1

0x1327,	// (0x00041e05) list_medium_line_plain_t3_t2

0x1335,	// (0x00041e13) list_medium_line_plain_t3_t3

0x0002,

0xfb7f,	// (0x0005065d) list_medium_line_plain_t3_t

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t2_g2_g1

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t2_g2_g2

0x0001,

0xf261,	// (0x0004fd3f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf261,	// (0x0004fd3f) list_medium_line_x2_t2_g2_g

0xa924,	// (0x0004b402) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa924,	// (0x0004b402) list_medium_line_x2_t2_g2_t1

0xa82f,	// (0x0004b30d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa82f,	// (0x0004b30d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfb86,	// (0x00050664) list_medium_line_x2_t2_g2_t_ParamLimits

0xfb86,	// (0x00050664) list_medium_line_x2_t2_g2_t

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t4_g2_g1

0xbd03,	// (0x0004c7e1) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbd03,	// (0x0004c7e1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfb8b,	// (0x00050669) list_medium_line_x2_t4_g2_g_ParamLimits

0xfb8b,	// (0x00050669) list_medium_line_x2_t4_g2_g

0x1343,	// (0x00041e21) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1343,	// (0x00041e21) list_medium_line_x2_t4_g2_t1

0x135a,	// (0x00041e38) list_medium_line_x2_t4_g2_t2_ParamLimits

0x135a,	// (0x00041e38) list_medium_line_x2_t4_g2_t2

0x136f,	// (0x00041e4d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x136f,	// (0x00041e4d) list_medium_line_x2_t4_g2_t3

0xa82f,	// (0x0004b30d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa82f,	// (0x0004b30d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfb90,	// (0x0005066e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfb90,	// (0x0005066e) list_medium_line_x2_t4_g2_t

0xbd15,	// (0x0004c7f3) list_medium_line_t3_right_iconx2_g1

0xbbef,	// (0x0004c6cd) list_medium_line_t3_right_iconx2_g2

0x1381,	// (0x00041e5f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfb99,	// (0x00050677) list_medium_line_t3_right_iconx2_g

0x138b,	// (0x00041e69) list_medium_line_t3_right_iconx2_t1

0x139b,	// (0x00041e79) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfba0,	// (0x0005067e) list_medium_line_t3_right_iconx2_t

0xa7f6,	// (0x0004b2d4) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x3_t4_g4_g1

0xa802,	// (0x0004b2e0) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa802,	// (0x0004b2e0) list_medium_line_x3_t4_g4_g2

0xa878,	// (0x0004b356) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa878,	// (0x0004b356) list_medium_line_x3_t4_g4_g3

0xbd1d,	// (0x0004c7fb) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbd1d,	// (0x0004c7fb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfba5,	// (0x00050683) list_medium_line_x3_t4_g4_g_ParamLimits

0xfba5,	// (0x00050683) list_medium_line_x3_t4_g4_g

0x13a9,	// (0x00041e87) list_medium_line_x3_t4_g4_t1_ParamLimits

0x13a9,	// (0x00041e87) list_medium_line_x3_t4_g4_t1

0x13c0,	// (0x00041e9e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x13c0,	// (0x00041e9e) list_medium_line_x3_t4_g4_t2

0xa939,	// (0x0004b417) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa939,	// (0x0004b417) list_medium_line_x3_t4_g4_t3

0xbd29,	// (0x0004c807) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbd29,	// (0x0004c807) list_medium_line_x3_t4_g4_t4

0x0003,

0xfbae,	// (0x0005068c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfbae,	// (0x0005068c) list_medium_line_x3_t4_g4_t

0x13db,	// (0x00041eb9) list_single_dyc_row_text_pane_t1_ParamLimits

0x13db,	// (0x00041eb9) list_single_dyc_row_text_pane_t1

0x1424,	// (0x00041f02) list_single_dyc_row_text_pane_t2_ParamLimits

0x1424,	// (0x00041f02) list_single_dyc_row_text_pane_t2

0xbd46,	// (0x0004c824) list_single_dyc_row_text_pane_t3_ParamLimits

0xbd46,	// (0x0004c824) list_single_dyc_row_text_pane_t3

0x0002,

0xfbb7,	// (0x00050695) list_single_dyc_row_text_pane_t_ParamLimits

0xfbb7,	// (0x00050695) list_single_dyc_row_text_pane_t

0xbd58,	// (0x0004c836) list_single_dyc_row_pane_g1_ParamLimits

0xbd58,	// (0x0004c836) list_single_dyc_row_pane_g1

0xbd64,	// (0x0004c842) list_single_dyc_row_pane_g2_ParamLimits

0xbd64,	// (0x0004c842) list_single_dyc_row_pane_g2

0xbd70,	// (0x0004c84e) list_single_dyc_row_pane_g3_ParamLimits

0xbd70,	// (0x0004c84e) list_single_dyc_row_pane_g3

0xbd7c,	// (0x0004c85a) list_single_dyc_row_pane_g4_ParamLimits

0xbd7c,	// (0x0004c85a) list_single_dyc_row_pane_g4

0x0003,

0xfbbe,	// (0x0005069c) list_single_dyc_row_pane_g_ParamLimits

0xfbbe,	// (0x0005069c) list_single_dyc_row_pane_g

0xbd88,	// (0x0004c866) list_single_dyc_row_text_pane_ParamLimits

0xbd88,	// (0x0004c866) list_single_dyc_row_text_pane

0xa6a4,	// (0x0004b182) bg_sp_fs_scroll_pane

0xbda7,	// (0x0004c885) thumb_sp_fs_scroll_pane

0xaea2,	// (0x0004b980) list_medium_line_g1_ParamLimits

0xaea2,	// (0x0004b980) list_medium_line_g1

0xbdb0,	// (0x0004c88e) list_medium_line_t1_ParamLimits

0xbdb0,	// (0x0004c88e) list_medium_line_t1

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_g1

0xa802,	// (0x0004b2e0) list_medium_line_x2_g2_ParamLimits

0xa802,	// (0x0004b2e0) list_medium_line_x2_g2

0x0001,

0xfbc7,	// (0x000506a5) list_medium_line_x2_g_ParamLimits

0xfbc7,	// (0x000506a5) list_medium_line_x2_g

0xbdc5,	// (0x0004c8a3) list_medium_line_x2_t1_ParamLimits

0xbdc5,	// (0x0004c8a3) list_medium_line_x2_t1

0xa7f6,	// (0x0004b2d4) list_medium_line_x3_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x3_g1

0xa802,	// (0x0004b2e0) list_medium_line_x3_g2_ParamLimits

0xa802,	// (0x0004b2e0) list_medium_line_x3_g2

0x0001,

0xfbc7,	// (0x000506a5) list_medium_line_x3_g_ParamLimits

0xfbc7,	// (0x000506a5) list_medium_line_x3_g

0xbdc5,	// (0x0004c8a3) list_medium_line_x3_t1_ParamLimits

0xbdc5,	// (0x0004c8a3) list_medium_line_x3_t1

0xbddb,	// (0x0004c8b9) thumb_sp_fs_scroll_pane_g1

0xbde4,	// (0x0004c8c2) thumb_sp_fs_scroll_pane_g2

0xbded,	// (0x0004c8cb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbcc,	// (0x000506aa) thumb_sp_fs_scroll_pane_g

0xbddb,	// (0x0004c8b9) bg_sp_fs_scroll_pane_g1

0xbde4,	// (0x0004c8c2) bg_sp_fs_scroll_pane_g2

0xbded,	// (0x0004c8cb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbcc,	// (0x000506aa) bg_sp_fs_scroll_pane_g

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa7f6,	// (0x0004b2d4) list_medium_line_x2_t3_g4_g1

0xa86c,	// (0x0004b34a) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa86c,	// (0x0004b34a) list_medium_line_x2_t3_g4_g2

0xa802,	// (0x0004b2e0) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa802,	// (0x0004b2e0) list_medium_line_x2_t3_g4_g3

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa80e,	// (0x0004b2ec) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c5,	// (0x0004fda3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c5,	// (0x0004fda3) list_medium_line_x2_t3_g4_g

0x147e,	// (0x00041f5c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x147e,	// (0x00041f5c) list_medium_line_x2_t3_g4_t1

0x1498,	// (0x00041f76) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1498,	// (0x00041f76) list_medium_line_x2_t3_g4_t2

0xa82f,	// (0x0004b30d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa82f,	// (0x0004b30d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfbd3,	// (0x000506b1) list_medium_line_x2_t3_g4_t_ParamLimits

0xfbd3,	// (0x000506b1) list_medium_line_x2_t3_g4_t

0xaea2,	// (0x0004b980) list_medium_line_g2_g1_ParamLimits

0xaea2,	// (0x0004b980) list_medium_line_g2_g1

0xaeae,	// (0x0004b98c) list_medium_line_g2_g2_ParamLimits

0xaeae,	// (0x0004b98c) list_medium_line_g2_g2

0x0001,

0xf895,	// (0x00050373) list_medium_line_g2_g_ParamLimits

0xf895,	// (0x00050373) list_medium_line_g2_g

0xbdf6,	// (0x0004c8d4) list_medium_line_g2_t1_ParamLimits

0xbdf6,	// (0x0004c8d4) list_medium_line_g2_t1

0xaea2,	// (0x0004b980) list_medium_line_t3_g2_g1_ParamLimits

0xaea2,	// (0x0004b980) list_medium_line_t3_g2_g1

0xaeae,	// (0x0004b98c) list_medium_line_t3_g2_g2_ParamLimits

0xaeae,	// (0x0004b98c) list_medium_line_t3_g2_g2

0x0001,

0xf895,	// (0x00050373) list_medium_line_t3_g2_g_ParamLimits

0xf895,	// (0x00050373) list_medium_line_t3_g2_g

0x14b2,	// (0x00041f90) list_medium_line_t3_g2_t1_ParamLimits

0x14b2,	// (0x00041f90) list_medium_line_t3_g2_t1

0x14cc,	// (0x00041faa) list_medium_line_t3_g2_t2_ParamLimits

0x14cc,	// (0x00041faa) list_medium_line_t3_g2_t2

0x14e1,	// (0x00041fbf) list_medium_line_t3_g2_t3_ParamLimits

0x14e1,	// (0x00041fbf) list_medium_line_t3_g2_t3

0x0002,

0xfbda,	// (0x000506b8) list_medium_line_t3_g2_t_ParamLimits

0xfbda,	// (0x000506b8) list_medium_line_t3_g2_t

0xbbef,	// (0x0004c6cd) list_medium_line_right_icon_g1

0xbe0b,	// (0x0004c8e9) list_medium_line_right_icon_t1

0xaea2,	// (0x0004b980) list_medium_line_t2_g1_ParamLimits

0xaea2,	// (0x0004b980) list_medium_line_t2_g1

0x14fb,	// (0x00041fd9) list_medium_line_t2_t1_ParamLimits

0x14fb,	// (0x00041fd9) list_medium_line_t2_t1

0x1515,	// (0x00041ff3) list_medium_line_t2_t2_ParamLimits

0x1515,	// (0x00041ff3) list_medium_line_t2_t2

0x0001,

0xfbe1,	// (0x000506bf) list_medium_line_t2_t_ParamLimits

0xfbe1,	// (0x000506bf) list_medium_line_t2_t

0xaea2,	// (0x0004b980) list_medium_line_t3_g1_ParamLimits

0xaea2,	// (0x0004b980) list_medium_line_t3_g1

0x152e,	// (0x0004200c) list_medium_line_t3_t1_ParamLimits

0x152e,	// (0x0004200c) list_medium_line_t3_t1

0x1545,	// (0x00042023) list_medium_line_t3_t2_ParamLimits

0x1545,	// (0x00042023) list_medium_line_t3_t2

0x155a,	// (0x00042038) list_medium_line_t3_t3_ParamLimits

0x155a,	// (0x00042038) list_medium_line_t3_t3

0x0002,

0xfbe6,	// (0x000506c4) list_medium_line_t3_t_ParamLimits

0xfbe6,	// (0x000506c4) list_medium_line_t3_t

0xaea2,	// (0x0004b980) list_medium_line_g3_g1_ParamLimits

0xaea2,	// (0x0004b980) list_medium_line_g3_g1

0xbe19,	// (0x0004c8f7) list_medium_line_g3_g2_ParamLimits

0xbe19,	// (0x0004c8f7) list_medium_line_g3_g2

0xaeae,	// (0x0004b98c) list_medium_line_g3_g3_ParamLimits

0xaeae,	// (0x0004b98c) list_medium_line_g3_g3

0x0002,

0xfbed,	// (0x000506cb) list_medium_line_g3_g_ParamLimits

0xfbed,	// (0x000506cb) list_medium_line_g3_g

0xbe25,	// (0x0004c903) list_medium_line_g3_t1_ParamLimits

0xbe25,	// (0x0004c903) list_medium_line_g3_t1

0xaea2,	// (0x0004b980) list_medium_line_t2_g3_g1_ParamLimits

0xaea2,	// (0x0004b980) list_medium_line_t2_g3_g1

0xbe19,	// (0x0004c8f7) list_medium_line_t2_g3_g2_ParamLimits

0xbe19,	// (0x0004c8f7) list_medium_line_t2_g3_g2

0xaeae,	// (0x0004b98c) list_medium_line_t2_g3_g3_ParamLimits

0xaeae,	// (0x0004b98c) list_medium_line_t2_g3_g3

0x0002,

0xfbed,	// (0x000506cb) list_medium_line_t2_g3_g_ParamLimits

0xfbed,	// (0x000506cb) list_medium_line_t2_g3_g

0x156c,	// (0x0004204a) list_medium_line_t2_g3_t1_ParamLimits

0x156c,	// (0x0004204a) list_medium_line_t2_g3_t1

0x1586,	// (0x00042064) list_medium_line_t2_g3_t2_ParamLimits

0x1586,	// (0x00042064) list_medium_line_t2_g3_t2

0x0001,

0xfbf4,	// (0x000506d2) list_medium_line_t2_g3_t_ParamLimits

0xfbf4,	// (0x000506d2) list_medium_line_t2_g3_t

0xaea2,	// (0x0004b980) list_medium_line_t3_g3_g1_ParamLimits

0xaea2,	// (0x0004b980) list_medium_line_t3_g3_g1

0xbe19,	// (0x0004c8f7) list_medium_line_t3_g3_g2_ParamLimits

0xbe19,	// (0x0004c8f7) list_medium_line_t3_g3_g2

0xaeae,	// (0x0004b98c) list_medium_line_t3_g3_g3_ParamLimits

0xaeae,	// (0x0004b98c) list_medium_line_t3_g3_g3

0x0002,

0xfbed,	// (0x000506cb) list_medium_line_t3_g3_g_ParamLimits

0xfbed,	// (0x000506cb) list_medium_line_t3_g3_g

0x15a1,	// (0x0004207f) list_medium_line_t3_g3_t1_ParamLimits

0x15a1,	// (0x0004207f) list_medium_line_t3_g3_t1

0x15b5,	// (0x00042093) list_medium_line_t3_g3_t2_ParamLimits

0x15b5,	// (0x00042093) list_medium_line_t3_g3_t2

0x15c7,	// (0x000420a5) list_medium_line_t3_g3_t3_ParamLimits

0x15c7,	// (0x000420a5) list_medium_line_t3_g3_t3

0x0002,

0xfbf9,	// (0x000506d7) list_medium_line_t3_g3_t_ParamLimits

0xfbf9,	// (0x000506d7) list_medium_line_t3_g3_t

0xbd15,	// (0x0004c7f3) list_medium_line_right_iconx2_g1

0xbbef,	// (0x0004c6cd) list_medium_line_right_iconx2_g2

0x0001,

0xfc00,	// (0x000506de) list_medium_line_right_iconx2_g

0xbe3a,	// (0x0004c918) list_medium_line_right_iconx2_t1

0xbd15,	// (0x0004c7f3) list_medium_line_t2_right_iconx2_g1

0xbbef,	// (0x0004c6cd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfc00,	// (0x000506de) list_medium_line_t2_right_iconx2_g

0x15db,	// (0x000420b9) list_medium_line_t2_right_iconx2_t1

0x15eb,	// (0x000420c9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc05,	// (0x000506e3) list_medium_line_t2_right_iconx2_t

0xbe48,	// (0x0004c926) list_medium_line_x4_t4_t1

0x15fd,	// (0x000420db) list_medium_line_x4_t4_t2

0x160d,	// (0x000420eb) list_medium_line_x4_t4_t3

0x161d,	// (0x000420fb) list_medium_line_x4_t4_t4

0x0003,

0xfc0a,	// (0x000506e8) list_medium_line_x4_t4_t

0x9a38,	// (0x0004a516) tport_appsw_pane_ParamLimits

0x9a38,	// (0x0004a516) tport_appsw_pane

0x9a49,	// (0x0004a527) tport_contact_pane_ParamLimits

0x9a49,	// (0x0004a527) tport_contact_pane

0x9a62,	// (0x0004a540) tport_listscroll_pane_ParamLimits

0x9a62,	// (0x0004a540) tport_listscroll_pane

0x9a7d,	// (0x0004a55b) cell_tport_appsw_pane_ParamLimits

0x9a7d,	// (0x0004a55b) cell_tport_appsw_pane

0x79ed,	// (0x000484cb) tport_appsw_pane_g1_ParamLimits

0x79ed,	// (0x000484cb) tport_appsw_pane_g1

0xbe56,	// (0x0004c934) tport_contact_pane_g1

0xb5fe,	// (0x0004c0dc) tport_contact_pane_t1

0xbe5f,	// (0x0004c93d) tport_contact_pane_t2

0x0001,

0xfc13,	// (0x000506f1) tport_contact_pane_t

0xbe6d,	// (0x0004c94b) list_tport_pane

0xbe76,	// (0x0004c954) scroll_pane_cp_030

0xbe87,	// (0x0004c965) cell_tport_appsw_pane_g1

0xbe97,	// (0x0004c975) cell_tport_appsw_pane_t1

0xa6a4,	// (0x0004b182) grid_highlight_pane_cp019

0x9abd,	// (0x0004a59b) list_tport_double_graphic_pane_ParamLimits

0x9abd,	// (0x0004a59b) list_tport_double_graphic_pane

0xe2c7,	// (0x0004eda5) list_highlight_pane_cp023_ParamLimits

0xe2c7,	// (0x0004eda5) list_highlight_pane_cp023

0x9aca,	// (0x0004a5a8) list_tport_double_graphic_pane_g1_ParamLimits

0x9aca,	// (0x0004a5a8) list_tport_double_graphic_pane_g1

0x9ad7,	// (0x0004a5b5) list_tport_double_graphic_pane_t1_ParamLimits

0x9ad7,	// (0x0004a5b5) list_tport_double_graphic_pane_t1

0x9aec,	// (0x0004a5ca) list_tport_double_graphic_pane_t2_ParamLimits

0x9aec,	// (0x0004a5ca) list_tport_double_graphic_pane_t2

0x0001,

0xfc1f,	// (0x000506fd) list_tport_double_graphic_pane_t_ParamLimits

0xfc1f,	// (0x000506fd) list_tport_double_graphic_pane_t

0xa6a4,	// (0x0004b182) main_cale_note_pane

0x79a2,	// (0x00048480) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x79a2,	// (0x00048480) cell_vitu2_function_top_wide_pane_cp01

0x95b5,	// (0x0004a093) wait_bar_pane_cp05_ParamLimits

0xa6a4,	// (0x0004b182) listscroll_cmail_pane

0xbead,	// (0x0004c98b) list_cmail_pane

0x8279,	// (0x00048d57) list_cmail_body_pane

0x9b08,	// (0x0004a5e6) list_single_cmail_header_caption_pane

0x9b1e,	// (0x0004a5fc) list_single_cmail_header_detail_pane_ParamLimits

0x9b1e,	// (0x0004a5fc) list_single_cmail_header_detail_pane

0x9b47,	// (0x0004a625) list_single_cmail_header_caption_pane_t1

0x162d,	// (0x0004210b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x162d,	// (0x0004210b) list_single_cmail_header_detail_pane_g1

0xbece,	// (0x0004c9ac) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbece,	// (0x0004c9ac) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc24,	// (0x00050702) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc24,	// (0x00050702) list_single_cmail_header_detail_pane_g

0xbee7,	// (0x0004c9c5) list_single_cmail_header_detail_pane_t1_ParamLimits

0xbee7,	// (0x0004c9c5) list_single_cmail_header_detail_pane_t1

0xbf1d,	// (0x0004c9fb) list_single_cmail_header_editor_pane_bg_ParamLimits

0xbf1d,	// (0x0004c9fb) list_single_cmail_header_editor_pane_bg

0xb7ad,	// (0x0004c28b) list_cmail_body_pane_g1

0xbf2f,	// (0x0004ca0d) list_cmail_body_pane_t1

0x7ab3,	// (0x00048591) list_single_cmail_header_editor_pane_bg_g1

0xd50e,	// (0x0004dfec) list_single_cmail_header_editor_pane_bg_g1_copy1

0x7ac3,	// (0x000485a1) list_single_cmail_header_editor_pane_bg_g1_copy2

0x7abb,	// (0x00048599) list_single_cmail_header_editor_pane_bg_g1_copy3

0x8431,	// (0x00048f0f) list_single_cmail_header_editor_pane_bg_g1_copy4

0x7ae3,	// (0x000485c1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x7ad3,	// (0x000485b1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x7adb,	// (0x000485b9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd4ee,	// (0x0004dfcc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9b57,	// (0x0004a635) calenote_gesture_pane_ParamLimits

0x9b57,	// (0x0004a635) calenote_gesture_pane

0x9b77,	// (0x0004a655) calenote_window_pane_ParamLimits

0x9b77,	// (0x0004a655) calenote_window_pane

0xbf3d,	// (0x0004ca1b) popup_note_window_cp01

0x9b93,	// (0x0004a671) calenote_swipe_1_pane_ParamLimits

0x9b93,	// (0x0004a671) calenote_swipe_1_pane

0x997f,	// (0x0004a45d) calenote_swipe_2_pane_ParamLimits

0x997f,	// (0x0004a45d) calenote_swipe_2_pane

0xbaf0,	// (0x0004c5ce) calenote_swipe_1_pane_g1_ParamLimits

0xbaf0,	// (0x0004c5ce) calenote_swipe_1_pane_g1

0xbafd,	// (0x0004c5db) calenote_swipe_1_pane_g2_ParamLimits

0xbafd,	// (0x0004c5db) calenote_swipe_1_pane_g2

0x0001,

0xfb53,	// (0x00050631) calenote_swipe_1_pane_g_ParamLimits

0xfb53,	// (0x00050631) calenote_swipe_1_pane_g

0xbf4f,	// (0x0004ca2d) calenote_swipe_1_pane_t1_ParamLimits

0xbf4f,	// (0x0004ca2d) calenote_swipe_1_pane_t1

0xbaf0,	// (0x0004c5ce) calenote_swipe_2_pane_g1_ParamLimits

0xbaf0,	// (0x0004c5ce) calenote_swipe_2_pane_g1

0xbf6e,	// (0x0004ca4c) calenote_swipe_2_pane_g2_ParamLimits

0xbf6e,	// (0x0004ca4c) calenote_swipe_2_pane_g2

0x0001,

0xfc30,	// (0x0005070e) calenote_swipe_2_pane_g_ParamLimits

0xfc30,	// (0x0005070e) calenote_swipe_2_pane_g

0xbf7a,	// (0x0004ca58) calenote_swipe_2_pane_t1_ParamLimits

0xbf7a,	// (0x0004ca58) calenote_swipe_2_pane_t1

0xa6a4,	// (0x0004b182) main_mup_navstr_pane

0x5f4d,	// (0x00046a2b) main_mup3_pane_t7_ParamLimits

0x5f4d,	// (0x00046a2b) main_mup3_pane_t7

0xabe6,	// (0x0004b6c4) main_mp4_pane_g6_ParamLimits

0xabe6,	// (0x0004b6c4) main_mp4_pane_g6

0xad8a,	// (0x0004b868) main_image3_pane_t4_ParamLimits

0xad8a,	// (0x0004b868) main_image3_pane_t4

0x9ba8,	// (0x0004a686) popup_navstr_preview_pane_ParamLimits

0x9ba8,	// (0x0004a686) popup_navstr_preview_pane

0x9bbc,	// (0x0004a69a) scroll_navstr_pane_ParamLimits

0x9bbc,	// (0x0004a69a) scroll_navstr_pane

0xa6a4,	// (0x0004b182) bg_popup_preview_window_pane_cp04

0xbfa1,	// (0x0004ca7f) popup_navstr_preview_pane_t1

0x9bd0,	// (0x0004a6ae) scroll_navstr_pane_g1_ParamLimits

0x9bd0,	// (0x0004a6ae) scroll_navstr_pane_g1

0x9be4,	// (0x0004a6c2) scroll_navstr_pane_t1_ParamLimits

0x9be4,	// (0x0004a6c2) scroll_navstr_pane_t1

0xbf46,	// (0x0004ca24) bg_button_pane_cp014

0xbf46,	// (0x0004ca24) bg_button_pane_cp030

0x121d,	// (0x00041cfb) list_double_fisheye_pane_g4_ParamLimits

0x121d,	// (0x00041cfb) list_double_fisheye_pane_g4

0x1229,	// (0x00041d07) list_double_fisheye_pane_g5_ParamLimits

0x1229,	// (0x00041d07) list_double_fisheye_pane_g5

0xbeb5,	// (0x0004c993) sp_fs_scroll_pane_cp03

0xbc2f,	// (0x0004c70d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xbc3b,	// (0x0004c719) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb70,	// (0x0005064e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xbc47,	// (0x0004c725) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9afe,	// (0x0004a5dc) sp_fs_scroll_pane_cp02

0xd21e,	// (0x0004dcfc) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd21e,	// (0x0004dcfc) popup_sp_fs_calendar_preview_list_single_pane

0xa6a4,	// (0x0004b182) main_cam6_pano_pane

0xe2c7,	// (0x0004eda5) main_mup3_pane_ParamLimits

0xa6a4,	// (0x0004b182) main_phacti_pane

0x9488,	// (0x00049f66) bg_button_pane_cp11

0x94a2,	// (0x00049f80) main_mobtv_info_pane_g2_ParamLimits

0x94a2,	// (0x00049f80) main_mobtv_info_pane_g2

0x0001,

0xfad0,	// (0x000505ae) main_mobtv_info_pane_g_ParamLimits

0xfad0,	// (0x000505ae) main_mobtv_info_pane_g

0x967d,	// (0x0004a15b) sc_clock_pane_t5_ParamLimits

0x967d,	// (0x0004a15b) sc_clock_pane_t5

0x9702,	// (0x0004a1e0) main_radioblah_pane_g1_ParamLimits

0xba33,	// (0x0004c511) main_radioblah_pane_t3_ParamLimits

0xba33,	// (0x0004c511) main_radioblah_pane_t3

0xba4b,	// (0x0004c529) main_radioblah_pane_t4_ParamLimits

0xba4b,	// (0x0004c529) main_radioblah_pane_t4

0x972a,	// (0x0004a208) main_radioblah_text_pane_ParamLimits

0x972a,	// (0x0004a208) main_radioblah_text_pane

0x973c,	// (0x0004a21a) main_radioblah_info_pane_g1_ParamLimits

0x97d5,	// (0x0004a2b3) main_radioblah_info_pane_t4_ParamLimits

0x97d5,	// (0x0004a2b3) main_radioblah_info_pane_t4

0xe2c7,	// (0x0004eda5) main_sp_fs_calendar_pane

0x9bfb,	// (0x0004a6d9) main_phacti_pane_g1

0x9c03,	// (0x0004a6e1) phacti_note_pane_ParamLimits

0x9c03,	// (0x0004a6e1) phacti_note_pane

0xbfb8,	// (0x0004ca96) phacti_term_pane_ParamLimits

0xbfb8,	// (0x0004ca96) phacti_term_pane

0xbfcd,	// (0x0004caab) phacti_note_pane_t1_ParamLimits

0xbfcd,	// (0x0004caab) phacti_note_pane_t1

0xbfe4,	// (0x0004cac2) phacti_term_pane_g1

0xbfec,	// (0x0004caca) phacti_term_pane_t1_ParamLimits

0xbfec,	// (0x0004caca) phacti_term_pane_t1

0xc016,	// (0x0004caf4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd311,	// (0x0004ddef) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc3a,	// (0x00050718) popup_sp_fs_calendar_preview_list_single_pane_g

0xc01e,	// (0x0004cafc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc01e,	// (0x0004cafc) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc033,	// (0x0004cb11) aid_popup_sp_fs_bg_corner_pane

0x5645,	// (0x00046123) popup_sp_fs_calendar_preview_bg_pane_g1

0xa6a4,	// (0x0004b182) popup_sp_fs_calendar_preview_bg_pane

0xc03b,	// (0x0004cb19) popup_sp_fs_calendar_preview_list_pane

0xe2c7,	// (0x0004eda5) bg_main_sp_fs_cale_pane_ParamLimits

0xe2c7,	// (0x0004eda5) bg_main_sp_fs_cale_pane

0xc043,	// (0x0004cb21) listscroll_cale_mrui_pane_ParamLimits

0xc043,	// (0x0004cb21) listscroll_cale_mrui_pane

0xc057,	// (0x0004cb35) listscroll_sp_fs_schedule_track_pane

0xc060,	// (0x0004cb3e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc060,	// (0x0004cb3e) main_sp_fs_ctrlbar_pane_cp01

0xc071,	// (0x0004cb4f) main_sp_fs_ribbon_pane

0xc079,	// (0x0004cb57) popup_sp_fs_cale_preview_window

0x9c5a,	// (0x0004a738) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9c5a,	// (0x0004a738) list_single_sp_fs_schedule_track_pane

0xe2c7,	// (0x0004eda5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe2c7,	// (0x0004eda5) bg_sp_fs_highlight_list_pane_cp03

0x9c6c,	// (0x0004a74a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9c6c,	// (0x0004a74a) list_single_sp_fs_schedule_track_pane_g1

0x9c78,	// (0x0004a756) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9c78,	// (0x0004a756) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc3f,	// (0x0005071d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc3f,	// (0x0005071d) list_single_sp_fs_schedule_track_pane_g

0x9c84,	// (0x0004a762) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9c84,	// (0x0004a762) list_single_sp_fs_schedule_track_pane_t1

0x9c9e,	// (0x0004a77c) sp_fs_schedule_track_pane_ParamLimits

0x9c9e,	// (0x0004a77c) sp_fs_schedule_track_pane

0xc08b,	// (0x0004cb69) sp_fs_schedule_track_pane_g1

0xc093,	// (0x0004cb71) sp_fs_schedule_track_pane_g2

0xc09b,	// (0x0004cb79) sp_fs_schedule_track_pane_g3

0xc0a3,	// (0x0004cb81) sp_fs_schedule_track_pane_g4

0xc0ab,	// (0x0004cb89) sp_fs_schedule_track_pane_g5

0x0004,

0xfc44,	// (0x00050722) sp_fs_schedule_track_pane_g

0x7ab3,	// (0x00048591) bg_sp_fs_schedule_viewer_highlight_g1

0xd50e,	// (0x0004dfec) bg_sp_fs_schedule_viewer_highlight_g2

0x7abb,	// (0x00048599) bg_sp_fs_schedule_viewer_highlight_g3

0x7ac3,	// (0x000485a1) bg_sp_fs_schedule_viewer_highlight_g4

0x8431,	// (0x00048f0f) bg_sp_fs_schedule_viewer_highlight_g5

0x7ad3,	// (0x000485b1) bg_sp_fs_schedule_viewer_highlight_g6

0x7adb,	// (0x000485b9) bg_sp_fs_schedule_viewer_highlight_g7

0x7ae3,	// (0x000485c1) bg_sp_fs_schedule_viewer_highlight_g8

0xd4ee,	// (0x0004dfcc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc4f,	// (0x0005072d) bg_sp_fs_schedule_viewer_highlight_g

0xa6a4,	// (0x0004b182) bg_main_sp_fs_ribbon_pane

0x9caf,	// (0x0004a78d) main_sp_fs_ribbon_pane_g1

0xc0b3,	// (0x0004cb91) main_sp_fs_ribbon_pane_t1

0x9cb8,	// (0x0004a796) main_sp_fs_ribbon_pane_t2

0xc0c2,	// (0x0004cba0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc62,	// (0x00050740) main_sp_fs_ribbon_pane_t

0xc0d1,	// (0x0004cbaf) main_sp_fs_ribbon_scheduler_pane

0xc0d9,	// (0x0004cbb7) bg_main_sp_fs_ribbon_pane_g1

0xc0e2,	// (0x0004cbc0) bg_main_sp_fs_ribbon_pane_g2

0xc0eb,	// (0x0004cbc9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc69,	// (0x00050747) bg_main_sp_fs_ribbon_pane_g

0xc0f3,	// (0x0004cbd1) main_sp_fs_ribbon_scheduler_pane_g1

0xc0fc,	// (0x0004cbda) main_sp_fs_ribbon_scheduler_pane_g2

0xc105,	// (0x0004cbe3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc70,	// (0x0005074e) main_sp_fs_ribbon_scheduler_pane_g

0xc10e,	// (0x0004cbec) list_cale_mrui_pane

0x9cc7,	// (0x0004a7a5) sp_fs_scroll_pane_cp07_ParamLimits

0x9cc7,	// (0x0004a7a5) sp_fs_scroll_pane_cp07

0x9cdb,	// (0x0004a7b9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9cdb,	// (0x0004a7b9) bg_sp_fs_schedule_viewer_highlight

0xc117,	// (0x0004cbf5) list_single_sp_fs_schedule_track_pane_cp01

0xc11f,	// (0x0004cbfd) list_sp_fs_schedule_track_pane

0xc127,	// (0x0004cc05) sp_fs_scroll_pane_cp06_ParamLimits

0xc127,	// (0x0004cc05) sp_fs_scroll_pane_cp06

0x5645,	// (0x00046123) bgmain_sp_fs_calendar_pane_g1

0x166b,	// (0x00042149) list_single_cale_mrui_pane_ParamLimits

0x166b,	// (0x00042149) list_single_cale_mrui_pane

0xc139,	// (0x0004cc17) list_single_cale_mrui_row_pane_ParamLimits

0xc139,	// (0x0004cc17) list_single_cale_mrui_row_pane

0xc146,	// (0x0004cc24) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc146,	// (0x0004cc24) list_single_cale_mrui_row_pane_g1

0xc17e,	// (0x0004cc5c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc17e,	// (0x0004cc5c) list_single_cale_mrui_row_pane_t1

0x168b,	// (0x00042169) list_single_cale_mrui_row_pane_t2_ParamLimits

0x168b,	// (0x00042169) list_single_cale_mrui_row_pane_t2

0xc190,	// (0x0004cc6e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc190,	// (0x0004cc6e) list_single_cale_mrui_row_pane_t3

0xc1bf,	// (0x0004cc9d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc1bf,	// (0x0004cc9d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc7c,	// (0x0005075a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc7c,	// (0x0005075a) list_single_cale_mrui_row_pane_t

0x16f3,	// (0x000421d1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x16f3,	// (0x000421d1) list_single_cmail_header_editor_pane_bg_cp01

0x1719,	// (0x000421f7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1719,	// (0x000421f7) list_single_cmail_header_editor_pane_bg_cp02

0x9ceb,	// (0x0004a7c9) main_radioblah_text_pane_t1_ParamLimits

0x9ceb,	// (0x0004a7c9) main_radioblah_text_pane_t1

0xc1ee,	// (0x0004cccc) cam6_indi_pane_cp01

0xc1f6,	// (0x0004ccd4) cam6_mode_pane_cp01

0xc1fe,	// (0x0004ccdc) cam6_pano_pane

0xc207,	// (0x0004cce5) cam6_zoom_pane_cp01

0xc20f,	// (0x0004cced) cam6_pano_image_pane

0xc21a,	// (0x0004ccf8) cam6_pano_pane_g1

0xb7ad,	// (0x0004c28b) cam6_pano_pane_g2

0xc223,	// (0x0004cd01) cam6_pano_pane_g3

0xc22c,	// (0x0004cd0a) cam6_pano_pane_g4

0x68f8,	// (0x000473d6) cam6_pano_pane_g5

0xc235,	// (0x0004cd13) cam6_pano_pane_g6

0xc23f,	// (0x0004cd1d) cam6_pano_pane_g7

0xc247,	// (0x0004cd25) cam6_pano_pane_g8

0xc250,	// (0x0004cd2e) cam6_pano_pane_g9

0x0008,

0xfc85,	// (0x00050763) cam6_pano_pane_g

0xa6a4,	// (0x0004b182) main_browser_tag_pane

0xbf99,	// (0x0004ca77) grid_navstr_albumart_pane

0xc25b,	// (0x0004cd39) cell_navstr_albumart_pane_ParamLimits

0xc25b,	// (0x0004cd39) cell_navstr_albumart_pane

0xc27e,	// (0x0004cd5c) cell_navstr_albumart_pane_g1

0xee1c,	// (0x0004f8fa) cell_navstr_albumart_pane_g2

0xee2c,	// (0x0004f90a) cell_navstr_albumart_pane_g3

0xee24,	// (0x0004f902) cell_navstr_albumart_pane_g4

0x0003,

0xfc98,	// (0x00050776) cell_navstr_albumart_pane_g

0x9d05,	// (0x0004a7e3) bt_list_pane_ParamLimits

0x9d05,	// (0x0004a7e3) bt_list_pane

0x9d19,	// (0x0004a7f7) bt_list_pane_t1

0x9d28,	// (0x0004a806) bt_list_pane_t2

0x0001,

0xfca1,	// (0x0005077f) bt_list_pane_t

0xa6a4,	// (0x0004b182) main_cale_prevew_pane

0x9d37,	// (0x0004a815) popup_cale_preview_window_ParamLimits

0x9d37,	// (0x0004a815) popup_cale_preview_window

0xe2c7,	// (0x0004eda5) bg_popup_preview_window_pane_cp05_ParamLimits

0xe2c7,	// (0x0004eda5) bg_popup_preview_window_pane_cp05

0xc286,	// (0x0004cd64) list_cale_preview_pane_ParamLimits

0xc286,	// (0x0004cd64) list_cale_preview_pane

0x9d52,	// (0x0004a830) list_double_cale_preview_pane_ParamLimits

0x9d52,	// (0x0004a830) list_double_cale_preview_pane

0x9d64,	// (0x0004a842) list_single_cale_preview_pane_ParamLimits

0x9d64,	// (0x0004a842) list_single_cale_preview_pane

0x9d7a,	// (0x0004a858) list_single_cale_preview_pane_g1

0x9d82,	// (0x0004a860) list_single_cale_preview_pane_t1_ParamLimits

0x9d82,	// (0x0004a860) list_single_cale_preview_pane_t1

0x9d97,	// (0x0004a875) list_double_cale_preview_pane_g1

0x9d9f,	// (0x0004a87d) list_double_cale_preview_pane_t1_ParamLimits

0x9d9f,	// (0x0004a87d) list_double_cale_preview_pane_t1

0x9db4,	// (0x0004a892) list_double_cale_preview_pane_t2_ParamLimits

0x9db4,	// (0x0004a892) list_double_cale_preview_pane_t2

0x0001,

0xfca6,	// (0x00050784) list_double_cale_preview_pane_t_ParamLimits

0xfca6,	// (0x00050784) list_double_cale_preview_pane_t

0xa6a4,	// (0x0004b182) main_ezdial_pane

0xe2c7,	// (0x0004eda5) main_sp_fs_email_pane_ParamLimits

0x9999,	// (0x0004a477) cmail_ddmenu_btn01_pane_ParamLimits

0x9999,	// (0x0004a477) cmail_ddmenu_btn01_pane

0x99ac,	// (0x0004a48a) cmail_ddmenu_btn02_pane_ParamLimits

0x99ac,	// (0x0004a48a) cmail_ddmenu_btn02_pane

0x99cf,	// (0x0004a4ad) cmail_ddmenu_btn03_pane_ParamLimits

0x99cf,	// (0x0004a4ad) cmail_ddmenu_btn03_pane

0x1299,	// (0x00041d77) main_sp_fs_ctrlbar_pane_ParamLimits

0x12bd,	// (0x00041d9b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8279,	// (0x00048d57) list_cmail_body_pane_ParamLimits

0xbec5,	// (0x0004c9a3) bg_button_pane_cp12

0xbeda,	// (0x0004c9b8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xbeda,	// (0x0004c9b8) list_single_cmail_header_detail_pane_g3

0x1645,	// (0x00042123) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1645,	// (0x00042123) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc2b,	// (0x00050709) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc2b,	// (0x00050709) list_single_cmail_header_detail_pane_t

0xc001,	// (0x0004cadf) phacti_term_pane_t2_ParamLimits

0xc001,	// (0x0004cadf) phacti_term_pane_t2

0x0001,

0xfc35,	// (0x00050713) phacti_term_pane_t_ParamLimits

0xfc35,	// (0x00050713) phacti_term_pane_t

0xc292,	// (0x0004cd70) aid_size_list_single_double

0x9dcc,	// (0x0004a8aa) popup_ezdial_listscroll_window

0x9de8,	// (0x0004a8c6) popup_number_entry_window_cp01

0xdbf9,	// (0x0004e6d7) bg_popup_call_pane_cp09

0xc29e,	// (0x0004cd7c) ezdial_list_pane

0xc2a6,	// (0x0004cd84) scroll_pane_cp23

0xefff,	// (0x0004fadd) bg_button_pane_cp028_ParamLimits

0xefff,	// (0x0004fadd) bg_button_pane_cp028

0x9df6,	// (0x0004a8d4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9df6,	// (0x0004a8d4) cmail_ddmenu_btn01_pane_g1

0x9e02,	// (0x0004a8e0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9e02,	// (0x0004a8e0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcab,	// (0x00050789) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcab,	// (0x00050789) cmail_ddmenu_btn01_pane_g

0xc2ae,	// (0x0004cd8c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc2ae,	// (0x0004cd8c) cmail_ddmenu_btn01_pane_t1

0xefff,	// (0x0004fadd) bg_button_pane_cp029_ParamLimits

0xefff,	// (0x0004fadd) bg_button_pane_cp029

0x9e0e,	// (0x0004a8ec) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9e0e,	// (0x0004a8ec) cmail_ddmenu_btn02_pane_g1

0x9e26,	// (0x0004a904) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9e26,	// (0x0004a904) cmail_ddmenu_btn02_pane_t1

0xe2c7,	// (0x0004eda5) bg_button_pane_cp031_ParamLimits

0xe2c7,	// (0x0004eda5) bg_button_pane_cp031

0x9e0e,	// (0x0004a8ec) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9e0e,	// (0x0004a8ec) cmail_ddmenu_btn03_pane_g1

0x9e26,	// (0x0004a904) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9e26,	// (0x0004a904) cmail_ddmenu_btn03_pane_t1

0x70c5,	// (0x00047ba3) cell_dialer2_keypad_pane_t1_ParamLimits

0x70df,	// (0x00047bbd) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x70df,	// (0x00047bbd) cell_dialer2_keypad_pane_t1_copy1

0x930a,	// (0x00049de8) ncimui_group_button_pane

0xe2c7,	// (0x0004eda5) main_sp_fs_calendar_pane_ParamLimits

0x9b08,	// (0x0004a5e6) list_single_cmail_header_caption_pane_ParamLimits

0xaf6f,	// (0x0004ba4d) aid_recal_txt_sm_pane

0xa6a4,	// (0x0004b182) mian_recal_day_pane

0xc079,	// (0x0004cb57) popup_sp_fs_cale_preview_window_ParamLimits

0xa6a4,	// (0x0004b182) list_recal_day_pane

0xc2dc,	// (0x0004cdba) list_single_recal_day_pane_ParamLimits

0xc2dc,	// (0x0004cdba) list_single_recal_day_pane

0xc2ee,	// (0x0004cdcc) list_single_recal_day_pane_g1_ParamLimits

0xc2ee,	// (0x0004cdcc) list_single_recal_day_pane_g1

0xc2fa,	// (0x0004cdd8) list_single_recal_day_pane_g2_ParamLimits

0xc2fa,	// (0x0004cdd8) list_single_recal_day_pane_g2

0xc309,	// (0x0004cde7) list_single_recal_day_pane_g3_ParamLimits

0xc309,	// (0x0004cde7) list_single_recal_day_pane_g3

0x9e4a,	// (0x0004a928) list_single_recal_day_pane_g4_ParamLimits

0x9e4a,	// (0x0004a928) list_single_recal_day_pane_g4

0xc315,	// (0x0004cdf3) list_single_recal_day_pane_g5_ParamLimits

0xc315,	// (0x0004cdf3) list_single_recal_day_pane_g5

0xc324,	// (0x0004ce02) list_single_recal_day_pane_g6_ParamLimits

0xc324,	// (0x0004ce02) list_single_recal_day_pane_g6

0x0005,

0xfcba,	// (0x00050798) list_single_recal_day_pane_g_ParamLimits

0xfcba,	// (0x00050798) list_single_recal_day_pane_g

0xc330,	// (0x0004ce0e) list_single_recal_day_pane_t1

0xc33e,	// (0x0004ce1c) list_single_recal_day_pane_t2

0x0001,

0xfcc7,	// (0x000507a5) list_single_recal_day_pane_t

0x9e5d,	// (0x0004a93b) ncimui_query_button_pane_ParamLimits

0x9e5d,	// (0x0004a93b) ncimui_query_button_pane

0x9e6d,	// (0x0004a94b) ncimui_query_button_pane_t1_ParamLimits

0x9e6d,	// (0x0004a94b) ncimui_query_button_pane_t1

0xc34c,	// (0x0004ce2a) ncimui_query_button_pane_t2_ParamLimits

0xc34c,	// (0x0004ce2a) ncimui_query_button_pane_t2

0x0001,

0xfccc,	// (0x000507aa) ncimui_query_button_pane_t_ParamLimits

0xfccc,	// (0x000507aa) ncimui_query_button_pane_t

0x9e80,	// (0x0004a95e) query_button_pane_ParamLimits

0x9e80,	// (0x0004a95e) query_button_pane

0xa6a4,	// (0x0004b182) bg_button_pane_cp0028

0xc35f,	// (0x0004ce3d) query_button_pane_t1

0x45bd,	// (0x0004509b) main_tport_pane_ParamLimits

0x99f5,	// (0x0004a4d3) bg_popup_window_pane_cp01_ParamLimits

0x99f5,	// (0x0004a4d3) bg_popup_window_pane_cp01

0x9a0f,	// (0x0004a4ed) heading_pane_cp08_ParamLimits

0x9a0f,	// (0x0004a4ed) heading_pane_cp08

0x9a23,	// (0x0004a501) heading_pane_cp07_ParamLimits

0x9a23,	// (0x0004a501) heading_pane_cp07

0xbe87,	// (0x0004c965) cell_tport_appsw_pane_g2

0x0002,

0xfc18,	// (0x000506f6) cell_tport_appsw_pane_g

0x0e2c,	// (0x0004190a) input_candi_list_open_g1

0xd6b5,	// (0x0004e193) list_cale_time_pane_g6_ParamLimits

0xd6b5,	// (0x0004e193) list_cale_time_pane_g6

0x59b5,	// (0x00046493) aid_size_touch_calib_1_ParamLimits

0x59b5,	// (0x00046493) aid_size_touch_calib_1

0x59c1,	// (0x0004649f) aid_size_touch_calib_2_ParamLimits

0x59c1,	// (0x0004649f) aid_size_touch_calib_2

0x59d7,	// (0x000464b5) aid_size_touch_calib_3_ParamLimits

0x59d7,	// (0x000464b5) aid_size_touch_calib_3

0x59f5,	// (0x000464d3) aid_size_touch_calib_4_ParamLimits

0x59f5,	// (0x000464d3) aid_size_touch_calib_4

0x5a0b,	// (0x000464e9) main_touch_calib_button_group_pane_ParamLimits

0x5a0b,	// (0x000464e9) main_touch_calib_button_group_pane

0x5a23,	// (0x00046501) main_touch_calib_pane_g1_ParamLimits

0x5a2f,	// (0x0004650d) main_touch_calib_pane_g2_ParamLimits

0x5a3b,	// (0x00046519) main_touch_calib_pane_g3_ParamLimits

0x5a47,	// (0x00046525) main_touch_calib_pane_g4_ParamLimits

0xf5f7,	// (0x000500d5) main_touch_calib_pane_g_ParamLimits

0x5a53,	// (0x00046531) main_touch_calib_pane_t1_ParamLimits

0x5a6d,	// (0x0004654b) main_touch_calib_pane_t2_ParamLimits

0x5a87,	// (0x00046565) main_touch_calib_pane_t3_ParamLimits

0x5a9b,	// (0x00046579) main_touch_calib_pane_t4_ParamLimits

0x5aaf,	// (0x0004658d) main_touch_calib_pane_t5_ParamLimits

0xf600,	// (0x000500de) main_touch_calib_pane_t_ParamLimits

0x61cf,	// (0x00046cad) list_single_fp_cale_pane_g3_ParamLimits

0x61cf,	// (0x00046cad) list_single_fp_cale_pane_g3

0xe2c7,	// (0x0004eda5) bg_button_pane_cp012_ParamLimits

0xe2c7,	// (0x0004eda5) bg_vkb2_func_pane_cp03_ParamLimits

0x83e7,	// (0x00048ec5) cell_vitu2_function_top_pane_g1_ParamLimits

0xe2c7,	// (0x0004eda5) bg_vkb2_func_pane_cp04_ParamLimits

0x92aa,	// (0x00049d88) main_ncimui_button_group_pane_ParamLimits

0x92aa,	// (0x00049d88) main_ncimui_button_group_pane

0x92f8,	// (0x00049dd6) main_ncimui_pane_t3_ParamLimits

0x92f8,	// (0x00049dd6) main_ncimui_pane_t3

0xbfaf,	// (0x0004ca8d) phacti_button_group_pane

0xc292,	// (0x0004cd70) aid_size_list_single_double_ParamLimits

0x9dcc,	// (0x0004a8aa) popup_ezdial_listscroll_window_ParamLimits

0x9de8,	// (0x0004a8c6) popup_number_entry_window_cp01_ParamLimits

0x9e93,	// (0x0004a971) phacti_button_pane_ParamLimits

0x9e93,	// (0x0004a971) phacti_button_pane

0xa6a4,	// (0x0004b182) bg_button_pane_cp14

0xc36d,	// (0x0004ce4b) phacti_button_pane_t1

0x9ea4,	// (0x0004a982) main_touch_calib_button_pane_ParamLimits

0x9ea4,	// (0x0004a982) main_touch_calib_button_pane

0xd11a,	// (0x0004dbf8) bg_button_pane_cp18_ParamLimits

0xd11a,	// (0x0004dbf8) bg_button_pane_cp18

0xc37b,	// (0x0004ce59) main_touch_calib_button_pane_t1_ParamLimits

0xc37b,	// (0x0004ce59) main_touch_calib_button_pane_t1

0xc391,	// (0x0004ce6f) main_touch_calib_button_pane_t2_ParamLimits

0xc391,	// (0x0004ce6f) main_touch_calib_button_pane_t2

0x0001,

0xfcd1,	// (0x000507af) main_touch_calib_button_pane_t_ParamLimits

0xfcd1,	// (0x000507af) main_touch_calib_button_pane_t

0xa6a4,	// (0x0004b182) cell_ncimui_button_pane

0xa6a4,	// (0x0004b182) bg_button_pane_cp032

0xc3af,	// (0x0004ce8d) cell_ncimui_button_pane_t1

0xad6a,	// (0x0004b848) image3_infobar_pane_ParamLimits

0xad6a,	// (0x0004b848) image3_infobar_pane

0x96a9,	// (0x0004a187) fs_bigclock_status_pane_ParamLimits

0x96a9,	// (0x0004a187) fs_bigclock_status_pane

0x96b6,	// (0x0004a194) main_fs_bigclock_clock_pane_ParamLimits

0x96b6,	// (0x0004a194) main_fs_bigclock_clock_pane

0x96c9,	// (0x0004a1a7) main_fs_bigclock_indi_pane_ParamLimits

0x96c9,	// (0x0004a1a7) main_fs_bigclock_indi_pane

0x96e1,	// (0x0004a1bf) main_fs_bigclock_swipe_pane_ParamLimits

0x96e1,	// (0x0004a1bf) main_fs_bigclock_swipe_pane

0xa6a4,	// (0x0004b182) main_fs_clock_dumped_data

0xb8ba,	// (0x0004c398) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb8ba,	// (0x0004c398) list_single_fs_bigclock_indicator_pane_g1

0xb8d6,	// (0x0004c3b4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb8d6,	// (0x0004c3b4) list_single_fs_bigclock_indicator_pane_g2

0xb8f0,	// (0x0004c3ce) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb8f0,	// (0x0004c3ce) list_single_fs_bigclock_indicator_pane_g3

0xb90a,	// (0x0004c3e8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb90a,	// (0x0004c3e8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb04,	// (0x000505e2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb04,	// (0x000505e2) list_single_fs_bigclock_indicator_pane_g

0xb930,	// (0x0004c40e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb930,	// (0x0004c40e) list_single_fs_bigclock_indicator_pane_t1

0xb958,	// (0x0004c436) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb958,	// (0x0004c436) list_single_fs_bigclock_indicator_pane_t2

0xb980,	// (0x0004c45e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb980,	// (0x0004c45e) list_single_fs_bigclock_indicator_pane_t3

0xb9a8,	// (0x0004c486) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb9a8,	// (0x0004c486) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb0f,	// (0x000505ed) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb0f,	// (0x000505ed) list_single_fs_bigclock_indicator_pane_t

0xc3bd,	// (0x0004ce9b) image3_infobar_fav_pane_ParamLimits

0xc3bd,	// (0x0004ce9b) image3_infobar_fav_pane

0xc3cd,	// (0x0004ceab) image3_infobar_loc_pane_ParamLimits

0xc3cd,	// (0x0004ceab) image3_infobar_loc_pane

0xc3e1,	// (0x0004cebf) image3_infobar_time_pane_ParamLimits

0xc3e1,	// (0x0004cebf) image3_infobar_time_pane

0x5645,	// (0x00046123) image3_infobar_time_pane_g1

0xc3f1,	// (0x0004cecf) image3_infobar_time_pane_t1

0x5645,	// (0x00046123) image3_infobar_loc_pane_g1

0xc3ff,	// (0x0004cedd) image3_infobar_loc_pane_g2

0x0001,

0xfcd6,	// (0x000507b4) image3_infobar_loc_pane_g

0xc407,	// (0x0004cee5) image3_infobar_loc_pane_t1

0x5645,	// (0x00046123) image3_infobar_fav_pane_g1

0xc415,	// (0x0004cef3) image3_infobar_fav_pane_g2

0x0001,

0xfcdb,	// (0x000507b9) image3_infobar_fav_pane_g

0xc41d,	// (0x0004cefb) fs_bigclock_status_battery_pane

0xc426,	// (0x0004cf04) fs_bigclock_status_signal_pane

0xc42f,	// (0x0004cf0d) fs_bigclock_status_title_pane

0xc438,	// (0x0004cf16) fs_bigclock_status_signal_pane_g1

0xc441,	// (0x0004cf1f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfce0,	// (0x000507be) fs_bigclock_status_signal_pane_g

0xc449,	// (0x0004cf27) fs_bigclock_status_battery_pane_g1

0xc452,	// (0x0004cf30) fs_bigclock_status_battery_pane_g2

0x0001,

0xfce5,	// (0x000507c3) fs_bigclock_status_battery_pane_g

0xc45a,	// (0x0004cf38) fs_bigclock_status_title_pane_t1

0x5645,	// (0x00046123) main_fs_bigclock_clock_pane_g1

0xc468,	// (0x0004cf46) main_fs_bigclock_clock_pane_g2

0xc468,	// (0x0004cf46) main_fs_bigclock_clock_pane_g3

0xc468,	// (0x0004cf46) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcea,	// (0x000507c8) main_fs_bigclock_clock_pane_g

0xc470,	// (0x0004cf4e) main_fs_bigclock_clock_pane_t1

0xc47e,	// (0x0004cf5c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcf3,	// (0x000507d1) main_fs_bigclock_clock_pane_t

0xc48d,	// (0x0004cf6b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc48d,	// (0x0004cf6b) list_single_fs_bigclock_indicator_pane

0x9eb9,	// (0x0004a997) list_single_fs_bigclock_pane_ParamLimits

0x9eb9,	// (0x0004a997) list_single_fs_bigclock_pane

0xc4a7,	// (0x0004cf85) main_fs_bigclock_indicator_pane_t1

0xc4b6,	// (0x0004cf94) list_single_fs_bigclock_pane_g1

0xc4be,	// (0x0004cf9c) list_single_fs_bigclock_pane_t1

0x5645,	// (0x00046123) main_fs_bigclock_swipe_pane_g1

0xc4fc,	// (0x0004cfda) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd04,	// (0x000507e2) main_fs_bigclock_swipe_pane_g

0xc504,	// (0x0004cfe2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc504,	// (0x0004cfe2) main_fs_bigclock_swipe_pane_t1

0x3462,	// (0x00043f40) call_type_pane_ParamLimits

0xa6a4,	// (0x0004b182) main_btmg_pane

0xc172,	// (0x0004cc50) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc172,	// (0x0004cc50) list_single_cale_mrui_row_pane_g2

0x0001,

0xfc77,	// (0x00050755) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc77,	// (0x00050755) list_single_cale_mrui_row_pane_g

0xc2cc,	// (0x0004cdaa) list_recal_vselct_arw_lo_pane

0xc2d4,	// (0x0004cdb2) list_recal_vselct_arw_up_pane

0xaf66,	// (0x0004ba44) list_recal_vselct_pane

0xc521,	// (0x0004cfff) btmg_button_pane

0x9f1e,	// (0x0004a9fc) main_btmg_pane_g1

0xa6a4,	// (0x0004b182) bg_button_pane_cp044

0xc52b,	// (0x0004d009) btmg_button_pane_t1

0xeff7,	// (0x0004fad5) aid_listscroll_gen

0xe2c7,	// (0x0004eda5) main_cntbar_detail_pane

0xbea5,	// (0x0004c983) list_cmail_folder_pane

0xbeb5,	// (0x0004c993) sp_fs_scroll_pane_cp03_ParamLimits

0x1739,	// (0x00042217) list_single_fs_dyc_pane_cp01_ParamLimits

0x1739,	// (0x00042217) list_single_fs_dyc_pane_cp01

0xc539,	// (0x0004d017) aid_size_cmail_indent

0xc542,	// (0x0004d020) list_single_dyc_row_pane_cp01

0x9f54,	// (0x0004aa32) cntbar_detail_list_pane_ParamLimits

0x9f54,	// (0x0004aa32) cntbar_detail_list_pane

0x9fa0,	// (0x0004aa7e) main_cntbar_detail_cont_pane_ParamLimits

0x9fa0,	// (0x0004aa7e) main_cntbar_detail_cont_pane

0x3456,	// (0x00043f34) scroll_pane_cp032_ParamLimits

0x3456,	// (0x00043f34) scroll_pane_cp032

0x9fb4,	// (0x0004aa92) cntbar_detail_list_event_pane_ParamLimits

0x9fb4,	// (0x0004aa92) cntbar_detail_list_event_pane

0x9f64,	// (0x0004aa42) cntbar_detail_list_shct_pane

0xd55c,	// (0x0004e03a) aid_list_gen

0xc54b,	// (0x0004d029) aid_scroll

0xc554,	// (0x0004d032) aid_size_touch_scroll_bar

0x9fc4,	// (0x0004aaa2) aid_list_double

0xc55d,	// (0x0004d03b) aid_list_single

0x174f,	// (0x0004222d) aid_list_single_lg

0xc566,	// (0x0004d044) aid_list_z_g_a_sm

0xc56e,	// (0x0004d04c) aid_list_z_g_d

0xc576,	// (0x0004d054) aid_txt_z_prm

0x1758,	// (0x00042236) aid_txt_z_prm_cp01

0x1766,	// (0x00042244) aid_txt_z_sec

0x9fcd,	// (0x0004aaab) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9fcd,	// (0x0004aaab) main_cntbar_detail_cont_pane_g1

0x9fe1,	// (0x0004aabf) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9fe1,	// (0x0004aabf) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd09,	// (0x000507e7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd09,	// (0x000507e7) main_cntbar_detail_cont_pane_g

0xc584,	// (0x0004d062) main_cntbar_detail_cont_pane_t1

0xc592,	// (0x0004d070) main_cntbar_detail_cont_pane_t2

0xc5a0,	// (0x0004d07e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd0e,	// (0x000507ec) main_cntbar_detail_cont_pane_t

0x9ff1,	// (0x0004aacf) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9ff1,	// (0x0004aacf) cell_cntbar_detail_list_shct_pane

0xc5ae,	// (0x0004d08c) cntbar_detail_list_shct_pane_g1

0xc5b7,	// (0x0004d095) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd15,	// (0x000507f3) cntbar_detail_list_shct_pane_g

0xa005,	// (0x0004aae3) cntbar_detail_list_event_pane_g1_ParamLimits

0xa005,	// (0x0004aae3) cntbar_detail_list_event_pane_g1

0xa011,	// (0x0004aaef) cntbar_detail_list_event_pane_g2_ParamLimits

0xa011,	// (0x0004aaef) cntbar_detail_list_event_pane_g2

0x0005,

0xfd1a,	// (0x000507f8) cntbar_detail_list_event_pane_g_ParamLimits

0xfd1a,	// (0x000507f8) cntbar_detail_list_event_pane_g

0xa07d,	// (0x0004ab5b) cntbar_detail_list_event_pane_t1_ParamLimits

0xa07d,	// (0x0004ab5b) cntbar_detail_list_event_pane_t1

0xa092,	// (0x0004ab70) cntbar_detail_list_event_pane_t2_ParamLimits

0xa092,	// (0x0004ab70) cntbar_detail_list_event_pane_t2

0x0002,

0xfd27,	// (0x00050805) cntbar_detail_list_event_pane_t_ParamLimits

0xfd27,	// (0x00050805) cntbar_detail_list_event_pane_t

0x5645,	// (0x00046123) cell_cntbar_detail_list_shct_pane_g1

0x37c4,	// (0x000442a2) navi_pane_mv_g3

0xe2c7,	// (0x0004eda5) main_cntbar_detail_pane_ParamLimits

0xa6a4,	// (0x0004b182) main_notif_wgt_pane

0xab80,	// (0x0004b65e) aid_tch_main_mp4_pane_g4

0xad62,	// (0x0004b840) popup_slider_window_cp02

0xc2c3,	// (0x0004cda1) list_recal_day_event_pane

0x9f28,	// (0x0004aa06) cntbar_detail_btn_pane_ParamLimits

0x9f28,	// (0x0004aa06) cntbar_detail_btn_pane

0x9f3e,	// (0x0004aa1c) cntbar_detail_btn_pane_cp01_ParamLimits

0x9f3e,	// (0x0004aa1c) cntbar_detail_btn_pane_cp01

0x9f64,	// (0x0004aa42) cntbar_detail_list_shct_pane_ParamLimits

0x9f74,	// (0x0004aa52) cntbar_detail_pane_g1_ParamLimits

0x9f74,	// (0x0004aa52) cntbar_detail_pane_g1

0x9f84,	// (0x0004aa62) cntbar_detail_pane_t1_ParamLimits

0x9f84,	// (0x0004aa62) cntbar_detail_pane_t1

0xa01d,	// (0x0004aafb) cntbar_detail_list_event_pane_g3_ParamLimits

0xa01d,	// (0x0004aafb) cntbar_detail_list_event_pane_g3

0xa035,	// (0x0004ab13) cntbar_detail_list_event_pane_g4_ParamLimits

0xa035,	// (0x0004ab13) cntbar_detail_list_event_pane_g4

0xa04d,	// (0x0004ab2b) cntbar_detail_list_event_pane_g5_ParamLimits

0xa04d,	// (0x0004ab2b) cntbar_detail_list_event_pane_g5

0xa065,	// (0x0004ab43) cntbar_detail_list_event_pane_g6_ParamLimits

0xa065,	// (0x0004ab43) cntbar_detail_list_event_pane_g6

0xa0a7,	// (0x0004ab85) cntbar_detail_list_event_pane_t3_ParamLimits

0xa0a7,	// (0x0004ab85) cntbar_detail_list_event_pane_t3

0xa0b9,	// (0x0004ab97) popup_notif_wgt_window_ParamLimits

0xa0b9,	// (0x0004ab97) popup_notif_wgt_window

0xa0d2,	// (0x0004abb0) popup_submenu_window_cp01_ParamLimits

0xa0d2,	// (0x0004abb0) popup_submenu_window_cp01

0xdbf9,	// (0x0004e6d7) bg_popup_window_pane_cp10

0xc5c0,	// (0x0004d09e) listscroll_notif_wgt_pane

0xc5ca,	// (0x0004d0a8) list_notif_wgt_window

0xc5d3,	// (0x0004d0b1) scroll_pane_cp033

0xc5dc,	// (0x0004d0ba) list_notif_wgt_row_pane_ParamLimits

0xc5dc,	// (0x0004d0ba) list_notif_wgt_row_pane

0xc5ee,	// (0x0004d0cc) aid_size_list_notif_wgt_del

0xc5f7,	// (0x0004d0d5) list_notif_wgt_row_pane_g1

0xc5ff,	// (0x0004d0dd) list_notif_wgt_row_pane_g2

0xc607,	// (0x0004d0e5) list_notif_wgt_row_pane_g3

0x0002,

0xfd2e,	// (0x0005080c) list_notif_wgt_row_pane_g

0xc610,	// (0x0004d0ee) list_notif_wgt_row_pane_t1

0xc61e,	// (0x0004d0fc) list_notif_wgt_row_pane_t2

0xc62c,	// (0x0004d10a) list_notif_wgt_row_pane_t3

0x0002,

0xfd35,	// (0x00050813) list_notif_wgt_row_pane_t

0x8486,	// (0x00048f64) list_recal_day_event_pane_g1

0xc63a,	// (0x0004d118) list_recal_day_event_pane_t1

0xa6a4,	// (0x0004b182) bg_button_pane_cp045

0xc649,	// (0x0004d127) cntbar_detail_btn_pane_t1

0xefff,	// (0x0004fadd) main_callh_pane_ParamLimits

0xefff,	// (0x0004fadd) main_callh_pane

0xa6a4,	// (0x0004b182) main_coverflow0_pane

0xa6a4,	// (0x0004b182) main_wgtman_pane

0x96ef,	// (0x0004a1cd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x96ef,	// (0x0004a1cd) main_fs_bigclock_unlock_btn_pane

0xbe7f,	// (0x0004c95d) bg_button_pane_cp16

0xbe8f,	// (0x0004c96d) cell_tport_appsw_pane_g3

0xa0e4,	// (0x0004abc2) cf0_flow_pane_ParamLimits

0xa0e4,	// (0x0004abc2) cf0_flow_pane

0xc657,	// (0x0004d135) listscroll_cf0_pane

0xc660,	// (0x0004d13e) main_cf0_pane_g1

0xa0f9,	// (0x0004abd7) main_cf0_pane_t1_ParamLimits

0xa0f9,	// (0x0004abd7) main_cf0_pane_t1

0xa110,	// (0x0004abee) main_cf0_pane_t2_ParamLimits

0xa110,	// (0x0004abee) main_cf0_pane_t2

0x0001,

0xfd3c,	// (0x0005081a) main_cf0_pane_t_ParamLimits

0xfd3c,	// (0x0005081a) main_cf0_pane_t

0xc66a,	// (0x0004d148) scroll_pane_cp11

0xa127,	// (0x0004ac05) cf0_flow_pane_g1

0xa12f,	// (0x0004ac0d) cf0_flow_pane_g2

0x0001,

0xfd41,	// (0x0005081f) cf0_flow_pane_g

0xa137,	// (0x0004ac15) cf0_flow_pane_t1

0xa6a4,	// (0x0004b182) main_call6_pane

0xa6a4,	// (0x0004b182) main_calllock_pane

0xa145,	// (0x0004ac23) call6_btn_grp_pane_ParamLimits

0xa145,	// (0x0004ac23) call6_btn_grp_pane

0xa15f,	// (0x0004ac3d) call6_pane_g1_ParamLimits

0xa15f,	// (0x0004ac3d) call6_pane_g1

0xa174,	// (0x0004ac52) popup_call6_1st_window_ParamLimits

0xa174,	// (0x0004ac52) popup_call6_1st_window

0xa185,	// (0x0004ac63) popup_call6_2nd_window_ParamLimits

0xa185,	// (0x0004ac63) popup_call6_2nd_window

0xa196,	// (0x0004ac74) cell_call6_btn_pane_ParamLimits

0xa196,	// (0x0004ac74) cell_call6_btn_pane

0xdbf9,	// (0x0004e6d7) bg_popup_call2_in_pane_cp03

0xc675,	// (0x0004d153) popup_call6_1st_window_g1

0xc67d,	// (0x0004d15b) popup_call6_1st_window_g2

0xc685,	// (0x0004d163) popup_call6_1st_window_g3

0x0002,

0xfd46,	// (0x00050824) popup_call6_1st_window_g

0xc68d,	// (0x0004d16b) popup_call6_1st_window_t1

0xc69c,	// (0x0004d17a) popup_call6_1st_window_t2

0xc6ac,	// (0x0004d18a) popup_call6_1st_window_t3

0x0002,

0xfd4d,	// (0x0005082b) popup_call6_1st_window_t

0xdbf9,	// (0x0004e6d7) bg_popup_call2_in_pane_cp04

0xc675,	// (0x0004d153) popup_call6_2nd_window_g1

0xc67d,	// (0x0004d15b) popup_call6_2nd_window_g2

0xc685,	// (0x0004d163) popup_call6_2nd_window_g3

0x0002,

0xfd46,	// (0x00050824) popup_call6_2nd_window_g

0xc68d,	// (0x0004d16b) popup_call6_2nd_window_t1

0xa6a4,	// (0x0004b182) bg_button_pane_cp15

0xc6bc,	// (0x0004d19a) cell_call6_btn_pane_g1

0xc6c5,	// (0x0004d1a3) cell_call6_btn_pane_t1

0xa1aa,	// (0x0004ac88) listscroll_wgtman_pane_ParamLimits

0xa1aa,	// (0x0004ac88) listscroll_wgtman_pane

0xa1cd,	// (0x0004acab) wgtman_btn_pane_ParamLimits

0xa1cd,	// (0x0004acab) wgtman_btn_pane

0xdab0,	// (0x0004e58e) aid_scroll_copy1

0xc6d4,	// (0x0004d1b2) list_wgtman_pane

0xa210,	// (0x0004acee) wgtman_btn_pane_g1_ParamLimits

0xa210,	// (0x0004acee) wgtman_btn_pane_g1

0xa23c,	// (0x0004ad1a) wgtman_btn_pane_t1_ParamLimits

0xa23c,	// (0x0004ad1a) wgtman_btn_pane_t1

0xc6de,	// (0x0004d1bc) wgtman_btn_pane_t2_ParamLimits

0xc6de,	// (0x0004d1bc) wgtman_btn_pane_t2

0x0001,

0xfd54,	// (0x00050832) wgtman_btn_pane_t_ParamLimits

0xfd54,	// (0x00050832) wgtman_btn_pane_t

0xa279,	// (0x0004ad57) listrow_wgtman_pane_ParamLimits

0xa279,	// (0x0004ad57) listrow_wgtman_pane

0xa28b,	// (0x0004ad69) listrow_wgtman_pane_g1

0xa294,	// (0x0004ad72) listrow_wgtman_pane_g2

0x0001,

0xfd59,	// (0x00050837) listrow_wgtman_pane_g

0x1774,	// (0x00042252) listrow_wgtman_pane_t1

0x1782,	// (0x00042260) listrow_wgtman_pane_t2

0x0001,

0xfd5e,	// (0x0005083c) listrow_wgtman_pane_t

0x1790,	// (0x0004226e) wait_bar_pane_cp09

0xc6f5,	// (0x0004d1d3) main_calllock_btn_pane

0xc6ff,	// (0x0004d1dd) main_calllock_pane_g1

0xa6a4,	// (0x0004b182) bg_button_pane_cp17

0xc70b,	// (0x0004d1e9) main_calllock_btn_pane_g1

0xc714,	// (0x0004d1f2) main_calllock_btn_pane_t1

0xa6a4,	// (0x0004b182) main_dialer3_pane

0xa6a4,	// (0x0004b182) main_fmrd2_pane

0x5645,	// (0x00046123) main_fs_bigclock_unlock_btn_pane_g1

0xc72b,	// (0x0004d209) main_fs_bigclock_unlock_btn_pane_t1

0xa29e,	// (0x0004ad7c) area_fmrd2_info_pane_ParamLimits

0xa29e,	// (0x0004ad7c) area_fmrd2_info_pane

0xa2af,	// (0x0004ad8d) area_fmrd2_visual_pane_ParamLimits

0xa2af,	// (0x0004ad8d) area_fmrd2_visual_pane

0xa2bd,	// (0x0004ad9b) fmrd2_indi_pane_ParamLimits

0xa2bd,	// (0x0004ad9b) fmrd2_indi_pane

0xa2ca,	// (0x0004ada8) area_fmrd2_visual_pane_g1

0xa2d2,	// (0x0004adb0) area_fmrd2_visual_pane_t1

0xa2e2,	// (0x0004adc0) area_fmrd2_visual_pane_t2

0xa2f2,	// (0x0004add0) area_fmrd2_visual_pane_t3

0x0002,

0xfd68,	// (0x00050846) area_fmrd2_visual_pane_t

0xa302,	// (0x0004ade0) area_fmrd2_info_pane_g1

0xa30a,	// (0x0004ade8) area_fmrd2_info_pane_t1

0xa31a,	// (0x0004adf8) area_fmrd2_info_pane_t2

0xa32a,	// (0x0004ae08) area_fmrd2_info_pane_t3

0xa33a,	// (0x0004ae18) area_fmrd2_info_pane_t4

0x0003,

0xfd6f,	// (0x0005084d) area_fmrd2_info_pane_t

0xa348,	// (0x0004ae26) fmrd2_indi_pane_t1

0xa358,	// (0x0004ae36) fmrd2_indi_pane_t2

0xa368,	// (0x0004ae46) fmrd2_indi_pane_t3

0x0002,

0xfd78,	// (0x00050856) fmrd2_indi_pane_t

0xb919,	// (0x0004c3f7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb919,	// (0x0004c3f7) list_single_fs_bigclock_indicator_pane_g5

0xb9bd,	// (0x0004c49b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb9bd,	// (0x0004c49b) list_single_fs_bigclock_indicator_pane_t5

0x9c17,	// (0x0004a6f5) aid_cell_bcale_month_pane_ParamLimits

0x9c17,	// (0x0004a6f5) aid_cell_bcale_month_pane

0x9c29,	// (0x0004a707) bcale_month_pane_ParamLimits

0x9c29,	// (0x0004a707) bcale_month_pane

0x9c41,	// (0x0004a71f) bcale_preview_pane_ParamLimits

0x9c41,	// (0x0004a71f) bcale_preview_pane

0xc4be,	// (0x0004cf9c) list_single_fs_bigclock_pane_t1_ParamLimits

0xc4d8,	// (0x0004cfb6) list_single_fs_bigclock_pane_t2_ParamLimits

0xc4d8,	// (0x0004cfb6) list_single_fs_bigclock_pane_t2

0x0001,

0xfcff,	// (0x000507dd) list_single_fs_bigclock_pane_t_ParamLimits

0xfcff,	// (0x000507dd) list_single_fs_bigclock_pane_t

0xc723,	// (0x0004d201) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd63,	// (0x00050841) main_fs_bigclock_unlock_btn_pane_g

0xa378,	// (0x0004ae56) aid_dia3_key_size_ParamLimits

0xa378,	// (0x0004ae56) aid_dia3_key_size

0xa387,	// (0x0004ae65) aid_dia3_listrow_size_ParamLimits

0xa387,	// (0x0004ae65) aid_dia3_listrow_size

0xa39c,	// (0x0004ae7a) dia3_keypad_fun_pane_ParamLimits

0xa39c,	// (0x0004ae7a) dia3_keypad_fun_pane

0xa3b8,	// (0x0004ae96) dia3_keypad_num_pane_ParamLimits

0xa3b8,	// (0x0004ae96) dia3_keypad_num_pane

0xa3d3,	// (0x0004aeb1) dia3_listscroll_pane_ParamLimits

0xa3d3,	// (0x0004aeb1) dia3_listscroll_pane

0xa3e6,	// (0x0004aec4) dia3_numentry_pane_ParamLimits

0xa3e6,	// (0x0004aec4) dia3_numentry_pane

0xc739,	// (0x0004d217) dia3_list_pane

0xc744,	// (0x0004d222) scroll_pane_cp12

0xa6a4,	// (0x0004b182) bg_dia3_numentry_pane

0xa3fa,	// (0x0004aed8) dia3_numentry_pane_t1

0xa409,	// (0x0004aee7) cell_dia3_key_num_pane

0xa411,	// (0x0004aeef) cell_dia3_key0_fun_pane_ParamLimits

0xa411,	// (0x0004aeef) cell_dia3_key0_fun_pane

0xa425,	// (0x0004af03) cell_dia3_key1_fun_pane_ParamLimits

0xa425,	// (0x0004af03) cell_dia3_key1_fun_pane

0xa43d,	// (0x0004af1b) dia3_listrow_pane

0xb619,	// (0x0004c0f7) bg_dia3_numentry_pane_g1

0xa6a4,	// (0x0004b182) bg_button_pane_cp21

0xc74f,	// (0x0004d22d) cell_dia3_key_num_pane_t1

0xc75d,	// (0x0004d23b) cell_dia3_key_num_pane_t2

0xc76c,	// (0x0004d24a) cell_dia3_key_num_pane_t3

0xc77b,	// (0x0004d259) cell_dia3_key_num_pane_t4

0x0003,

0xfd7f,	// (0x0005085d) cell_dia3_key_num_pane_t

0xa6a4,	// (0x0004b182) bg_button_pane_cp19

0xa44f,	// (0x0004af2d) cell_dia3_key0_fun_pane_g1

0xa6a4,	// (0x0004b182) bg_button_pane_cp20

0xa457,	// (0x0004af35) cell_dia3_key1_fun_pane_g1

0xa45f,	// (0x0004af3d) area_left_week_number_pane

0xa468,	// (0x0004af46) area_top_day_name_pane

0xa471,	// (0x0004af4f) frame_month_view_pane

0xa479,	// (0x0004af57) grid_month_view_pane

0xa483,	// (0x0004af61) cell_top_day_name_pane_ParamLimits

0xa483,	// (0x0004af61) cell_top_day_name_pane

0xa499,	// (0x0004af77) cell_area_left_week_number_pane_ParamLimits

0xa499,	// (0x0004af77) cell_area_left_week_number_pane

0xa4ad,	// (0x0004af8b) cell_month_view_pane_ParamLimits

0xa4ad,	// (0x0004af8b) cell_month_view_pane

0xc78a,	// (0x0004d268) frm_month_g1

0xa4c8,	// (0x0004afa6) frm_month_g2

0xa4d0,	// (0x0004afae) frm_month_g3

0xa4d8,	// (0x0004afb6) frm_month_g4

0xa4e0,	// (0x0004afbe) frm_month_g5

0xa4e8,	// (0x0004afc6) frm_month_g6

0xa4f0,	// (0x0004afce) frm_month_g7

0xc793,	// (0x0004d271) frm_month_g8

0xa4f8,	// (0x0004afd6) frm_month_g9

0xa501,	// (0x0004afdf) frm_month_g10

0xa50a,	// (0x0004afe8) frm_month_g11

0xa513,	// (0x0004aff1) frm_month_g12

0xa51c,	// (0x0004affa) frm_month_g13

0xa525,	// (0x0004b003) frm_month_g14

0xa52e,	// (0x0004b00c) frm_month_g15

0xa537,	// (0x0004b015) frm_month_g16

0x000f,

0xfd88,	// (0x00050866) frm_month_g

0xa540,	// (0x0004b01e) cell_top_day_name_pane_t1

0xa54f,	// (0x0004b02d) cell_area_left_week_number_pane_g1

0xa540,	// (0x0004b01e) cell_area_left_week_number_pane_t1

0x5645,	// (0x00046123) cell_month_view_pane_g1

0xa557,	// (0x0004b035) cell_month_view_pane_t1

0xa6a4,	// (0x0004b182) main_fps_pane

0xbbf7,	// (0x0004c6d5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xbbf7,	// (0x0004c6d5) cmail_ddmenu_btn02_pane_cp1

0xbc13,	// (0x0004c6f1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xbc13,	// (0x0004c6f1) cmail_ddmenu_btn02_pane_cp2

0x9e1a,	// (0x0004a8f8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9e1a,	// (0x0004a8f8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcb0,	// (0x0005078e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcb0,	// (0x0005078e) cmail_ddmenu_btn02_pane_g

0x9e38,	// (0x0004a916) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9e38,	// (0x0004a916) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcb5,	// (0x00050793) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcb5,	// (0x00050793) cmail_ddmenu_btn02_pane_t

0xa566,	// (0x0004b044) fps_text_pane_ParamLimits

0xa566,	// (0x0004b044) fps_text_pane

0xa57d,	// (0x0004b05b) main_fps_pane_g1_ParamLimits

0xa57d,	// (0x0004b05b) main_fps_pane_g1

0xa597,	// (0x0004b075) wait_bar_pane_cp010_ParamLimits

0xa597,	// (0x0004b075) wait_bar_pane_cp010

0xa5a8,	// (0x0004b086) fps_text_pane_t1_ParamLimits

0xa5a8,	// (0x0004b086) fps_text_pane_t1

0x764f,	// (0x0004812d) cam4_image_uncrop_pane_g1

0x7658,	// (0x00048136) cam4_image_uncrop_pane_g2

0x7661,	// (0x0004813f) cam4_image_uncrop_pane_g3

0x766a,	// (0x00048148) cam4_image_uncrop_pane_g4

0x0003,

0xf78a,	// (0x00050268) cam4_image_uncrop_pane_g

0xa43d,	// (0x0004af1b) dia3_listrow_pane_ParamLimits

0xa6a4,	// (0x0004b182) main_phob2_pane

0x9a8e,	// (0x0004a56c) cell_tport_appsw_pane_cp02_ParamLimits

0x9a8e,	// (0x0004a56c) cell_tport_appsw_pane_cp02

0x9aa2,	// (0x0004a580) cell_tport_appsw_pane_cp03_ParamLimits

0x9aa2,	// (0x0004a580) cell_tport_appsw_pane_cp03

0xa6a4,	// (0x0004b182) phob2_contact_card_pane

0xa6a4,	// (0x0004b182) phob2_listscroll_pane

0xc79c,	// (0x0004d27a) phob2_list_pane

0xc7a4,	// (0x0004d282) scroll_pane_cp034

0xa5c0,	// (0x0004b09e) phob2_cc_data_pane_ParamLimits

0xa5c0,	// (0x0004b09e) phob2_cc_data_pane

0xa5df,	// (0x0004b0bd) phob2_cc_listscroll_pane_ParamLimits

0xa5df,	// (0x0004b0bd) phob2_cc_listscroll_pane

0xa5fd,	// (0x0004b0db) list_double_large_graphic_phob2_pane_ParamLimits

0xa5fd,	// (0x0004b0db) list_double_large_graphic_phob2_pane

0xc7ac,	// (0x0004d28a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc7ac,	// (0x0004d28a) list_double_large_graphic_phob2_pane_g1

0xc7b9,	// (0x0004d297) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xc7b9,	// (0x0004d297) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfda9,	// (0x00050887) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfda9,	// (0x00050887) list_double_large_graphic_phob2_pane_g

0xc7c5,	// (0x0004d2a3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xc7c5,	// (0x0004d2a3) list_double_large_graphic_phob2_pane_t1

0xc7da,	// (0x0004d2b8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xc7da,	// (0x0004d2b8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdae,	// (0x0005088c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdae,	// (0x0005088c) list_double_large_graphic_phob2_pane_t

0xa6a4,	// (0x0004b182) list_highlight_pane_cp024

0xc7ec,	// (0x0004d2ca) phob2_cc_button_pane

0xa60f,	// (0x0004b0ed) phob2_cc_data_pane_g1_ParamLimits

0xa60f,	// (0x0004b0ed) phob2_cc_data_pane_g1

0xa624,	// (0x0004b102) phob2_cc_data_pane_g2_ParamLimits

0xa624,	// (0x0004b102) phob2_cc_data_pane_g2

0x0001,

0xfdb3,	// (0x00050891) phob2_cc_data_pane_g_ParamLimits

0xfdb3,	// (0x00050891) phob2_cc_data_pane_g

0xa636,	// (0x0004b114) phob2_cc_data_pane_t1_ParamLimits

0xa636,	// (0x0004b114) phob2_cc_data_pane_t1

0xa64e,	// (0x0004b12c) phob2_cc_data_pane_t2_ParamLimits

0xa64e,	// (0x0004b12c) phob2_cc_data_pane_t2

0xa666,	// (0x0004b144) phob2_cc_data_pane_t3_ParamLimits

0xa666,	// (0x0004b144) phob2_cc_data_pane_t3

0x0002,

0xfdb8,	// (0x00050896) phob2_cc_data_pane_t_ParamLimits

0xfdb8,	// (0x00050896) phob2_cc_data_pane_t

0xc7f4,	// (0x0004d2d2) phob2_cc_list_pane_ParamLimits

0xc7f4,	// (0x0004d2d2) phob2_cc_list_pane

0x86eb,	// (0x000491c9) scroll_pane_cp035_ParamLimits

0x86eb,	// (0x000491c9) scroll_pane_cp035

0xe2c7,	// (0x0004eda5) bg_button_pane_cp033

0xc800,	// (0x0004d2de) phob2_cc_button_pane_g1

0xc80c,	// (0x0004d2ea) phob2_cc_button_pane_t1

0xc821,	// (0x0004d2ff) phob2_cc_button_pane_t2

0x0001,

0xfdbf,	// (0x0005089d) phob2_cc_button_pane_t

0xa67e,	// (0x0004b15c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa67e,	// (0x0004b15c) list_double_large_graphic_phob2_cc_pane

0xa690,	// (0x0004b16e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa690,	// (0x0004b16e) list_double_large_graphic_phob2_cc_pane_g1

0x1798,	// (0x00042276) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1798,	// (0x00042276) list_double_large_graphic_phob2_cc_pane_g2

0x17a4,	// (0x00042282) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x17a4,	// (0x00042282) list_double_large_graphic_phob2_cc_pane_g3

0x17b0,	// (0x0004228e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x17b0,	// (0x0004228e) list_double_large_graphic_phob2_cc_pane_g4

0x17bc,	// (0x0004229a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x17bc,	// (0x0004229a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc4,	// (0x000508a2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc4,	// (0x000508a2) list_double_large_graphic_phob2_cc_pane_g

0x17c8,	// (0x000422a6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x17c8,	// (0x000422a6) list_double_large_graphic_phob2_cc_pane_t1

0x17f1,	// (0x000422cf) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x17f1,	// (0x000422cf) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdcf,	// (0x000508ad) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdcf,	// (0x000508ad) list_double_large_graphic_phob2_cc_pane_t

0xc833,	// (0x0004d311) list_highlight_pane_cp025_ParamLimits

0xc833,	// (0x0004d311) list_highlight_pane_cp025

0xe2c7,	// (0x0004eda5) bg_button_pane_cp033_ParamLimits

0xc800,	// (0x0004d2de) phob2_cc_button_pane_g1_ParamLimits

0xc80c,	// (0x0004d2ea) phob2_cc_button_pane_t1_ParamLimits

0xc821,	// (0x0004d2ff) phob2_cc_button_pane_t2_ParamLimits

0xfdbf,	// (0x0005089d) phob2_cc_button_pane_t_ParamLimits

0x1a34,	// (0x00042512) popup_wgtman_window

0x7ede,	// (0x000489bc) scroll_pane_cp038

0xa1f2,	// (0x0004acd0) wgtman_btn_pane_cp_01_ParamLimits

0xa1f2,	// (0x0004acd0) wgtman_btn_pane_cp_01

0xc841,	// (0x0004d31f) wgtman_content_pane

0xc84a,	// (0x0004d328) wgtman_heading_pane

0xa6a4,	// (0x0004b182) bg_heading_pane_cp02

0xc853,	// (0x0004d331) wgtman_heading_pane_g1

0xc85b,	// (0x0004d339) wgtman_heading_pane_t1

0xc869,	// (0x0004d347) scroll_pane_cp036

0xc871,	// (0x0004d34f) wgtman_list_pane

0xc879,	// (0x0004d357) wgtman_list_pane_t1_ParamLimits

0xc879,	// (0x0004d357) wgtman_list_pane_t1

0xadbc,	// (0x0004b89a) cam4_grid_pane

0x1063,	// (0x00041b41) bg_button_pane_cp015_ParamLimits

0x8580,	// (0x0004905e) bg_button_pane_cp016_ParamLimits

0x8593,	// (0x00049071) bg_button_pane_cp017_ParamLimits

0x10a9,	// (0x00041b87) popup_vitu2_query_window_g3_ParamLimits

0x10a9,	// (0x00041b87) popup_vitu2_query_window_g3

0x1124,	// (0x00041c02) popup_vitu2_query_window_t6_ParamLimits

0x1124,	// (0x00041c02) popup_vitu2_query_window_t6

0x114f,	// (0x00041c2d) popup_vitu2_query_window_t7_ParamLimits

0x114f,	// (0x00041c2d) popup_vitu2_query_window_t7

0x764f,	// (0x0004812d) cam4_grid_pane_g1

0x7658,	// (0x00048136) cam4_grid_pane_g2

0xc893,	// (0x0004d371) cam4_grid_pane_g3

0xc89c,	// (0x0004d37a) cam4_grid_pane_g4

0x0003,

0xfdd4,	// (0x000508b2) cam4_grid_pane_g

0x26fd,	// (0x000431db) aid_placing_vt_slider_lsc_ParamLimits

0x2a08,	// (0x000434e6) vidtel_button_pane_ParamLimits

0x2a08,	// (0x000434e6) vidtel_button_pane

0xa6a4,	// (0x0004b182) bg_button_pane_cp034

0xa69c,	// (0x0004b17a) vidtel_button_pane_g1

0xc8a7,	// (0x0004d385) vidtel_button_pane_t1

0x82a2,	// (0x00048d80) aid_size_vtel_slider_touch

0x86eb,	// (0x000491c9) scroll_pane_cp039

0xb657,	// (0x0004c135) ncim_query_button_pane_cp01_ParamLimits

0xb676,	// (0x0004c154) ncimui_query_pane_g1_ParamLimits

0xe2c7,	// (0x0004eda5) input_focus_pane_cp012_ParamLimits

0xb69b,	// (0x0004c179) ncim_query_entry_pane_t1_ParamLimits

0x86eb,	// (0x000491c9) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
