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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00093df9 };

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
0x0881,	// (0x0009467a) Screen

0x088d,	// (0x00094686) application_window

0x08c9,	// (0x000946c2) area_bottom_pane_ParamLimits

0x08c9,	// (0x000946c2) area_bottom_pane

0x0902,	// (0x000946fb) area_top_pane_ParamLimits

0x0902,	// (0x000946fb) area_top_pane

0x9afe,	// (0x0009d8f7) call_video_uplink_pane_ParamLimits

0x9afe,	// (0x0009d8f7) call_video_uplink_pane

0x0990,	// (0x00094789) main_pane_ParamLimits

0x0990,	// (0x00094789) main_pane

0xaf1b,	// (0x0009ed14) context_pane

0x36c1,	// (0x000974ba) navi_pane

0x36f3,	// (0x000974ec) popup_cale_events_window_ParamLimits

0x36f3,	// (0x000974ec) popup_cale_events_window

0xaf2e,	// (0x0009ed27) popup_mup_playback_window

0x370b,	// (0x00097504) signal_pane

0xe3d8,	// (0x000a21d1) main_browser_pane

0xe5f0,	// (0x000a23e9) main_burst_pane

0x3421,	// (0x0009721a) main_calc_pane

0xaebb,	// (0x0009ecb4) main_cale_day_pane

0x0dc9,	// (0x00094bc2) main_cale_month_pane

0xaebb,	// (0x0009ecb4) main_cale_week_pane

0xe5f0,	// (0x000a23e9) main_call_pane

0xe058,	// (0x000a1e51) main_call_poc_pane

0xe5f0,	// (0x000a23e9) main_camera_pane

0xe5f0,	// (0x000a23e9) main_chi_dic_pane

0xed61,	// (0x000a2b5a) main_clock_pane

0xe058,	// (0x000a1e51) main_fmradio_pane

0xe5f0,	// (0x000a23e9) main_graph_messa_pane

0xe058,	// (0x000a1e51) main_help_pane

0xe3d8,	// (0x000a21d1) main_im_pane

0xe2c1,	// (0x000a20ba) main_image_pane_ParamLimits

0xe2c1,	// (0x000a20ba) main_image_pane

0xe058,	// (0x000a1e51) main_location2_pane

0xe5f0,	// (0x000a23e9) main_location_pane

0xe2c1,	// (0x000a20ba) main_messa_pane

0xe058,	// (0x000a1e51) main_mp2_pane

0xe5f0,	// (0x000a23e9) main_mp_pane

0xe058,	// (0x000a1e51) main_msg_pane

0xe058,	// (0x000a1e51) main_mup_eq_pane

0xe058,	// (0x000a1e51) main_mup_pane

0xe3d8,	// (0x000a21d1) main_notes_pane

0xe058,	// (0x000a1e51) main_pec_pane

0xe058,	// (0x000a1e51) main_phob_pane

0xe058,	// (0x000a1e51) main_pinb_pane

0xe058,	// (0x000a1e51) main_postcard_pane

0xe058,	// (0x000a1e51) main_qdial_pane

0xe5f0,	// (0x000a23e9) main_skin_pane

0xe058,	// (0x000a1e51) main_smil2_pane

0xe5f0,	// (0x000a23e9) main_smil_pane

0xe5f0,	// (0x000a23e9) main_video_pane

0xe5f0,	// (0x000a23e9) main_video_tele_pane

0xe2c1,	// (0x000a20ba) main_viewer_pane_ParamLimits

0xe2c1,	// (0x000a20ba) main_viewer_pane

0xe5f0,	// (0x000a23e9) main_vorec_pane

0x3475,	// (0x0009726e) popup_blid_sat_info_window_ParamLimits

0x3475,	// (0x0009726e) popup_blid_sat_info_window

0x34cd,	// (0x000972c6) popup_dyc_status_message_window_ParamLimits

0x34cd,	// (0x000972c6) popup_dyc_status_message_window

0x34e7,	// (0x000972e0) popup_grid_large_graphic_window_ParamLimits

0x34e7,	// (0x000972e0) popup_grid_large_graphic_window

0x35a3,	// (0x0009739c) popup_loc_request_window_ParamLimits

0x35a3,	// (0x0009739c) popup_loc_request_window

0x3699,	// (0x00097492) popup_wml_address_window_ParamLimits

0x3699,	// (0x00097492) popup_wml_address_window

0x325b,	// (0x00097054) call_muted_g1

0x2f51,	// (0x00096d4a) popup_call_audio_conf_window_ParamLimits

0x2f51,	// (0x00096d4a) popup_call_audio_conf_window

0x326f,	// (0x00097068) popup_call_audio_first_window_ParamLimits

0x326f,	// (0x00097068) popup_call_audio_first_window

0x32e5,	// (0x000970de) popup_call_audio_in_window_ParamLimits

0x32e5,	// (0x000970de) popup_call_audio_in_window

0x3321,	// (0x0009711a) popup_call_audio_out_window_ParamLimits

0x3321,	// (0x0009711a) popup_call_audio_out_window

0x335b,	// (0x00097154) popup_call_audio_second_window_ParamLimits

0x335b,	// (0x00097154) popup_call_audio_second_window

0x33b1,	// (0x000971aa) popup_call_audio_wait_window_ParamLimits

0x33b1,	// (0x000971aa) popup_call_audio_wait_window

0x33e6,	// (0x000971df) popup_number_entry_window_ParamLimits

0x33e6,	// (0x000971df) popup_number_entry_window

0xd6e7,	// (0x000a14e0) bg_popup_call_pane_cp05_ParamLimits

0xd6e7,	// (0x000a14e0) bg_popup_call_pane_cp05

0xd707,	// (0x000a1500) popup_number_entry_window_t1

0xd71a,	// (0x000a1513) popup_number_entry_window_t2

0xd72c,	// (0x000a1525) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x000a2e16) popup_number_entry_window_t

0xd73e,	// (0x000a1537) text_title_cp2

0xd751,	// (0x000a154a) bg_popup_call_pane_cp_ParamLimits

0xd751,	// (0x000a154a) bg_popup_call_pane_cp

0xdcbd,	// (0x000a1ab6) call_thumbnail_pane

0xdcc5,	// (0x000a1abe) popup_call_audio_in_window_g1_ParamLimits

0xdcc5,	// (0x000a1abe) popup_call_audio_in_window_g1

0xdcd1,	// (0x000a1aca) popup_call_audio_in_window_g2_ParamLimits

0xdcd1,	// (0x000a1aca) popup_call_audio_in_window_g2

0xdcdd,	// (0x000a1ad6) popup_call_audio_in_window_g3_ParamLimits

0xdcdd,	// (0x000a1ad6) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x000a2e1f) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x000a2e1f) popup_call_audio_in_window_g

0xdce9,	// (0x000a1ae2) popup_call_audio_in_window_t1_ParamLimits

0xdce9,	// (0x000a1ae2) popup_call_audio_in_window_t1

0xdd05,	// (0x000a1afe) popup_call_audio_in_window_t2_ParamLimits

0xdd05,	// (0x000a1afe) popup_call_audio_in_window_t2

0xdd21,	// (0x000a1b1a) popup_call_audio_in_window_t3_ParamLimits

0xdd21,	// (0x000a1b1a) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x000a2e26) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x000a2e26) popup_call_audio_in_window_t

0xd751,	// (0x000a154a) bg_popup_call_pane_cp01_ParamLimits

0xd751,	// (0x000a154a) bg_popup_call_pane_cp01

0xdcbd,	// (0x000a1ab6) call_thumbnail_pane_cp02

0xdd34,	// (0x000a1b2d) call_type_pane_cp022

0xdd3c,	// (0x000a1b35) popup_call_audio_out_window_g1_ParamLimits

0xdd3c,	// (0x000a1b35) popup_call_audio_out_window_g1

0xdd4e,	// (0x000a1b47) popup_call_audio_out_window_g2_ParamLimits

0xdd4e,	// (0x000a1b47) popup_call_audio_out_window_g2

0xdd5a,	// (0x000a1b53) popup_call_audio_out_window_g3_ParamLimits

0xdd5a,	// (0x000a1b53) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x000a2e2d) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x000a2e2d) popup_call_audio_out_window_g

0xdd6c,	// (0x000a1b65) popup_call_audio_out_window_t1_ParamLimits

0xdd6c,	// (0x000a1b65) popup_call_audio_out_window_t1

0xdd84,	// (0x000a1b7d) popup_call_audio_out_window_t2_ParamLimits

0xdd84,	// (0x000a1b7d) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x000a2e34) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x000a2e34) popup_call_audio_out_window_t

0xdd99,	// (0x000a1b92) bg_popup_call_pane_ParamLimits

0xdd99,	// (0x000a1b92) bg_popup_call_pane

0x0b4b,	// (0x00094944) call_thumbnail_pane_cp_ParamLimits

0x0b4b,	// (0x00094944) call_thumbnail_pane_cp

0xde1d,	// (0x000a1c16) call_type_pane_cp01_ParamLimits

0xde1d,	// (0x000a1c16) call_type_pane_cp01

0xde61,	// (0x000a1c5a) popup_call_audio_first_window_g1_ParamLimits

0xde61,	// (0x000a1c5a) popup_call_audio_first_window_g1

0xdead,	// (0x000a1ca6) popup_call_audio_first_window_g2_ParamLimits

0xdead,	// (0x000a1ca6) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x000a2e39) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x000a2e39) popup_call_audio_first_window_g

0xdef1,	// (0x000a1cea) popup_call_audio_first_window_t1_ParamLimits

0xdef1,	// (0x000a1cea) popup_call_audio_first_window_t1

0xdf9d,	// (0x000a1d96) popup_call_audio_first_window_t4_ParamLimits

0xdf9d,	// (0x000a1d96) popup_call_audio_first_window_t4

0xe029,	// (0x000a1e22) popup_call_audio_first_window_t5_ParamLimits

0xe029,	// (0x000a1e22) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x000a2e3e) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x000a2e3e) popup_call_audio_first_window_t

0xe058,	// (0x000a1e51) bg_popup_call_pane_cp02

0xe062,	// (0x000a1e5b) call_type_pane_cp023

0xe06a,	// (0x000a1e63) popup_call_audio_wait_window_g1

0xe072,	// (0x000a1e6b) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x000a2e45) popup_call_audio_wait_window_g

0xe07a,	// (0x000a1e73) popup_call_audio_wait_window_t3

0xe088,	// (0x000a1e81) bg_popup_call_pane_cp03_ParamLimits

0xe088,	// (0x000a1e81) bg_popup_call_pane_cp03

0xe0e8,	// (0x000a1ee1) call_thumbnail_pane_cp011_ParamLimits

0xe0e8,	// (0x000a1ee1) call_thumbnail_pane_cp011

0xe0f4,	// (0x000a1eed) call_type_pane_cp034_ParamLimits

0xe0f4,	// (0x000a1eed) call_type_pane_cp034

0xe130,	// (0x000a1f29) popup_call_audio_second_window_g1_ParamLimits

0xe130,	// (0x000a1f29) popup_call_audio_second_window_g1

0xe16c,	// (0x000a1f65) popup_call_audio_second_window_g2_ParamLimits

0xe16c,	// (0x000a1f65) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x000a2e4a) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x000a2e4a) popup_call_audio_second_window_g

0xe1a8,	// (0x000a1fa1) popup_call_audio_second_window_t1_ParamLimits

0xe1a8,	// (0x000a1fa1) popup_call_audio_second_window_t1

0xe229,	// (0x000a2022) popup_call_audio_second_window_t2_ParamLimits

0xe229,	// (0x000a2022) popup_call_audio_second_window_t2

0xe25f,	// (0x000a2058) popup_call_audio_second_window_t3_ParamLimits

0xe25f,	// (0x000a2058) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x000a2e4f) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x000a2e4f) popup_call_audio_second_window_t

0xe058,	// (0x000a1e51) bg_popup_call_pane_cp04

0xe2a3,	// (0x000a209c) list_conf_pane

0xe2ab,	// (0x000a20a4) popup_call_audio_conf_window_t1

0xe2b9,	// (0x000a20b2) call_thumbnail_pane_g1

0xe2c1,	// (0x000a20ba) bg_pinb_pane_ParamLimits

0xe2c1,	// (0x000a20ba) bg_pinb_pane

0xe2cf,	// (0x000a20c8) find_pinb_pane

0xe2c1,	// (0x000a20ba) listscroll_pinb_pane_ParamLimits

0xe2c1,	// (0x000a20ba) listscroll_pinb_pane

0xe2d9,	// (0x000a20d2) pinb_bg_pane_g1

0xe2d9,	// (0x000a20d2) pinb_bg_pane_g2

0xe2d9,	// (0x000a20d2) pinb_bg_pane_g3

0xe2d9,	// (0x000a20d2) pinb_bg_pane_g4

0xe2d9,	// (0x000a20d2) pinb_bg_pane_g5

0xe2d9,	// (0x000a20d2) pinb_bg_pane_g6

0xe2d9,	// (0x000a20d2) pinb_bg_pane_g7

0xe2d9,	// (0x000a20d2) pinb_bg_pane_g8

0xe2d9,	// (0x000a20d2) pinb_bg_pane_g9

0xe2d9,	// (0x000a20d2) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x000a2e56) pinb_bg_pane_g

0xd6dd,	// (0x000a14d6) grid_pinb_pane

0xd6dd,	// (0x000a14d6) list_pinb_pane

0xe295,	// (0x000a208e) scroll_pane_cp01_ParamLimits

0xe295,	// (0x000a208e) scroll_pane_cp01

0xe2e3,	// (0x000a20dc) find_pinb_pane_g1_ParamLimits

0xe2e3,	// (0x000a20dc) find_pinb_pane_g1

0xe2fb,	// (0x000a20f4) find_pinb_pane_t1

0xe30d,	// (0x000a2106) find_pinb_pane_t2

0x0001,

0xf077,	// (0x000a2e70) find_pinb_pane_t

0xe322,	// (0x000a211b) input_focus_pane_cp01_ParamLimits

0xe322,	// (0x000a211b) input_focus_pane_cp01

0xe32e,	// (0x000a2127) cell_pinb_pane_ParamLimits

0xe32e,	// (0x000a2127) cell_pinb_pane

0xe33c,	// (0x000a2135) cell_pinb_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) cell_pinb_pane_g1

0xe34a,	// (0x000a2143) cell_pinb_pane_g2_ParamLimits

0xe34a,	// (0x000a2143) cell_pinb_pane_g2

0xe34a,	// (0x000a2143) cell_pinb_pane_g3_ParamLimits

0xe34a,	// (0x000a2143) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x000a2e75) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x000a2e75) cell_pinb_pane_g

0xe058,	// (0x000a1e51) grid_highlight_pane_cp01

0xe32e,	// (0x000a2127) list_pinb_item_pane_ParamLimits

0xe32e,	// (0x000a2127) list_pinb_item_pane

0xd6dd,	// (0x000a14d6) list_highlight_pane_cp02

0xe358,	// (0x000a2151) list_pinb_item_pane_g1_ParamLimits

0xe358,	// (0x000a2151) list_pinb_item_pane_g1

0xe34a,	// (0x000a2143) list_pinb_item_pane_g2_ParamLimits

0xe34a,	// (0x000a2143) list_pinb_item_pane_g2

0xe33c,	// (0x000a2135) list_pinb_item_pane_g3_ParamLimits

0xe33c,	// (0x000a2135) list_pinb_item_pane_g3

0xe34a,	// (0x000a2143) list_pinb_item_pane_g4_ParamLimits

0xe34a,	// (0x000a2143) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x000a2e7c) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x000a2e7c) list_pinb_item_pane_g

0xe366,	// (0x000a215f) list_pinb_item_pane_t1_ParamLimits

0xe366,	// (0x000a215f) list_pinb_item_pane_t1

0x0b8d,	// (0x00094986) calc_display_pane

0x0bb2,	// (0x000949ab) calc_paper_pane

0x0bd5,	// (0x000949ce) grid_calc_pane

0xd6dd,	// (0x000a14d6) bg_list_pane_cp01

0xe37a,	// (0x000a2173) clock_g1

0xe37a,	// (0x000a2173) clock_g2

0x0001,

0xf08c,	// (0x000a2e85) clock_g

0xe384,	// (0x000a217d) clock_t1_ParamLimits

0xe384,	// (0x000a217d) clock_t1

0xe398,	// (0x000a2191) clock_t2_ParamLimits

0xe398,	// (0x000a2191) clock_t2

0xe398,	// (0x000a2191) clock_t3_ParamLimits

0xe398,	// (0x000a2191) clock_t3

0xe398,	// (0x000a2191) clock_t4_ParamLimits

0xe398,	// (0x000a2191) clock_t4

0xe384,	// (0x000a217d) clock_t5_ParamLimits

0xe384,	// (0x000a217d) clock_t5

0xe398,	// (0x000a2191) clock_t6_ParamLimits

0xe398,	// (0x000a2191) clock_t6

0xe398,	// (0x000a2191) clock_t7_ParamLimits

0xe398,	// (0x000a2191) clock_t7

0xe398,	// (0x000a2191) clock_t8_ParamLimits

0xe398,	// (0x000a2191) clock_t8

0xe398,	// (0x000a2191) clock_t9_ParamLimits

0xe398,	// (0x000a2191) clock_t9

0x0008,

0xf091,	// (0x000a2e8a) clock_t_ParamLimits

0xf091,	// (0x000a2e8a) clock_t

0xd6dd,	// (0x000a14d6) popup_clock_analogue_window_cp02

0xd6dd,	// (0x000a14d6) popup_clock_digital_window_cp01

0xe058,	// (0x000a1e51) listscroll_help_pane

0xe058,	// (0x000a1e51) phob_pre_status_pane

0xe3ac,	// (0x000a21a5) grid_qdial_pane

0xe2c1,	// (0x000a20ba) listscroll_mce_pane

0xe2c1,	// (0x000a20ba) bg_notes_pane

0xe3b6,	// (0x000a21af) list_notes_pane

0x0c03,	// (0x000949fc) scroll_pane_cp06

0xe3c4,	// (0x000a21bd) bg_calc_paper_pane

0x9b3c,	// (0x0009d935) list_calc_pane

0xe3d8,	// (0x000a21d1) bg_calc_display_pane

0x0c17,	// (0x00094a10) calc_display_pane_t1

0x0c2c,	// (0x00094a25) calc_display_pane_t2

0x9b56,	// (0x0009d94f) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x000a2e9d) calc_display_pane_t

0x0c41,	// (0x00094a3a) cell_calc_pane_ParamLimits

0x0c41,	// (0x00094a3a) cell_calc_pane

0xe3e4,	// (0x000a21dd) bg_calc_paper_pane_g1

0xe3f0,	// (0x000a21e9) bg_calc_paper_pane_g2

0xe3fc,	// (0x000a21f5) bg_calc_paper_pane_g3

0xe408,	// (0x000a2201) bg_calc_paper_pane_g4

0xe414,	// (0x000a220d) bg_calc_paper_pane_g5

0x0c76,	// (0x00094a6f) bg_calc_paper_pane_g6

0x0c85,	// (0x00094a7e) bg_calc_paper_pane_g7

0x0c94,	// (0x00094a8d) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x000a2ea4) bg_calc_paper_pane_g

0x0ca7,	// (0x00094aa0) calc_bg_paper_pane_g9

0x0cba,	// (0x00094ab3) list_calc_item_pane_ParamLimits

0x0cba,	// (0x00094ab3) list_calc_item_pane

0xe420,	// (0x000a2219) list_calc_item_pane_g1

0x9b68,	// (0x0009d961) list_calc_item_pane_t1_ParamLimits

0x9b68,	// (0x0009d961) list_calc_item_pane_t1

0x0cd2,	// (0x00094acb) list_calc_item_pane_t2_ParamLimits

0x0cd2,	// (0x00094acb) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x000a2eb5) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x000a2eb5) list_calc_item_pane_t

0xe2d9,	// (0x000a20d2) cell_calc_pane_g1

0xe42d,	// (0x000a2226) grid_highlight_pane_cp02

0x0d04,	// (0x00094afd) bg_calc_display_pane_g1

0x0d0d,	// (0x00094b06) bg_calc_display_pane_g2

0xe44f,	// (0x000a2248) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x000a2ebf) bg_calc_display_pane_g

0x0d17,	// (0x00094b10) cell_qdial_pane_ParamLimits

0x0d17,	// (0x00094b10) cell_qdial_pane

0x0d2b,	// (0x00094b24) cell_qdial_pane_g1_ParamLimits

0x0d2b,	// (0x00094b24) cell_qdial_pane_g1

0x0d41,	// (0x00094b3a) cell_qdial_pane_g2_ParamLimits

0x0d41,	// (0x00094b3a) cell_qdial_pane_g2

0xe458,	// (0x000a2251) cell_qdial_pane_g3_ParamLimits

0xe458,	// (0x000a2251) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x000a2ec6) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x000a2ec6) cell_qdial_pane_g

0x0d68,	// (0x00094b61) cell_qdial_pane_t1_ParamLimits

0x0d68,	// (0x00094b61) cell_qdial_pane_t1

0x0d80,	// (0x00094b79) cell_qdial_pane_t2_ParamLimits

0x0d80,	// (0x00094b79) cell_qdial_pane_t2

0x0d93,	// (0x00094b8c) cell_qdial_pane_t3_ParamLimits

0x0d93,	// (0x00094b8c) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x000a2ecf) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x000a2ecf) cell_qdial_pane_t

0xe058,	// (0x000a1e51) grid_highlight_pane_cp04

0xe464,	// (0x000a225d) thumbnail_qdial_pane_ParamLimits

0xe464,	// (0x000a225d) thumbnail_qdial_pane

0xe4c0,	// (0x000a22b9) list_help_pane

0xe4c9,	// (0x000a22c2) scroll_pane_cp02

0xe4d2,	// (0x000a22cb) help_list_pane_t1_ParamLimits

0xe4d2,	// (0x000a22cb) help_list_pane_t1

0xe4f0,	// (0x000a22e9) bg_notes_pane_g2

0xe4f8,	// (0x000a22f1) bg_notes_pane_g3

0xe500,	// (0x000a22f9) notes_bg_pane_g1

0xe508,	// (0x000a2301) notes_bg_pane_g4

0xe510,	// (0x000a2309) notes_bg_pane_g5

0xe518,	// (0x000a2311) notes_bg_pane_g6

0xe520,	// (0x000a2319) notes_bg_pane_g7

0xe528,	// (0x000a2321) notes_bg_pane_g8

0xe530,	// (0x000a2329) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x000a2eed) notes_bg_pane_g

0x0da6,	// (0x00094b9f) list_notes_text_pane_ParamLimits

0x0da6,	// (0x00094b9f) list_notes_text_pane

0xe538,	// (0x000a2331) list_notes_text_pane_g1

0x0dbb,	// (0x00094bb4) list_notes_text_pane_t1

0x0dc9,	// (0x00094bc2) listscroll_cale_week_pane

0x0df5,	// (0x00094bee) bg_cale_heading_pane

0xe552,	// (0x000a234b) bg_cale_pane_cp01

0x0e0d,	// (0x00094c06) cale_week_corner_pane

0x0e2c,	// (0x00094c25) cale_week_day_heading_pane

0x0e49,	// (0x00094c42) cale_week_scroll_pane_g1

0x0e5c,	// (0x00094c55) cale_week_scroll_pane_g2

0x0e74,	// (0x00094c6d) cale_week_scroll_pane_g3

0x0e8c,	// (0x00094c85) cale_week_scroll_pane_g4

0x0ea4,	// (0x00094c9d) cale_week_scroll_pane_g5

0x0ec4,	// (0x00094cbd) cale_week_scroll_pane_g6

0x0ee4,	// (0x00094cdd) cale_week_scroll_pane_g7

0x0f04,	// (0x00094cfd) cale_week_scroll_pane_g8

0x0f28,	// (0x00094d21) cale_week_scroll_pane_g9

0x0f40,	// (0x00094d39) cale_week_scroll_pane_g10

0x0f58,	// (0x00094d51) cale_week_scroll_pane_g11

0x0f70,	// (0x00094d69) cale_week_scroll_pane_g12

0x0f88,	// (0x00094d81) cale_week_scroll_pane_g13

0x0f88,	// (0x00094d81) cale_week_scroll_pane_g14

0x0f88,	// (0x00094d81) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x000a2efc) cale_week_scroll_pane_g

0x0fc4,	// (0x00094dbd) cale_week_time_pane

0x0fe8,	// (0x00094de1) grid_cale_week_pane

0xe581,	// (0x000a237a) scroll_pane_cp08

0x100e,	// (0x00094e07) cell_cale_week_pane_ParamLimits

0x100e,	// (0x00094e07) cell_cale_week_pane

0x109c,	// (0x00094e95) cale_week_day_heading_pane_t1

0x10c6,	// (0x00094ebf) cale_week_day_heading_pane_t2

0x10f5,	// (0x00094eee) cale_week_day_heading_pane_t3

0x1124,	// (0x00094f1d) cale_week_day_heading_pane_t4

0x1153,	// (0x00094f4c) cale_week_day_heading_pane_t5

0x118a,	// (0x00094f83) cale_week_day_heading_pane_t6

0x11c1,	// (0x00094fba) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x000a2f1d) cale_week_day_heading_pane_t

0xe59e,	// (0x000a2397) bg_cale_side_pane

0x11eb,	// (0x00094fe4) cale_week_time_pane_t1

0x1205,	// (0x00094ffe) cale_week_time_pane_t2

0x121f,	// (0x00095018) cale_week_time_pane_t3

0x1239,	// (0x00095032) cale_week_time_pane_t4

0x1253,	// (0x0009504c) cale_week_time_pane_t5

0x126d,	// (0x00095066) cale_week_time_pane_t6

0x1287,	// (0x00095080) cale_week_time_pane_t7

0x12a1,	// (0x0009509a) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x000a2f2c) cale_week_time_pane_t

0x12bb,	// (0x000950b4) cell_cale_week_pane_g2

0x12da,	// (0x000950d3) cell_cale_week_pane_g3_ParamLimits

0x12da,	// (0x000950d3) cell_cale_week_pane_g3

0xe5ac,	// (0x000a23a5) grid_highlight_pane_cp07

0xe5b4,	// (0x000a23ad) listscroll_gms_pane

0xe5be,	// (0x000a23b7) grid_gms_pane

0xe5c7,	// (0x000a23c0) listscroll_gms_pane_g1

0xe5cf,	// (0x000a23c8) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x000a2f3d) listscroll_gms_pane_g

0x12f2,	// (0x000950eb) scroll_pane_cp010

0x12fd,	// (0x000950f6) cell_gms_pane_ParamLimits

0x12fd,	// (0x000950f6) cell_gms_pane

0x1310,	// (0x00095109) cell_gms_pane_g1

0xe5d7,	// (0x000a23d0) cell_gms_pane_g2

0xe538,	// (0x000a2331) cell_gms_pane_g3

0xe5df,	// (0x000a23d8) cell_gms_pane_g4

0x0003,

0xf149,	// (0x000a2f42) cell_gms_pane_g

0xe5e8,	// (0x000a23e1) grid_highlight_pane_cp09

0x31e3,	// (0x00096fdc) phob_pre_status_pane_g1

0x31eb,	// (0x00096fe4) phob_pre_status_pane_g2

0x31f3,	// (0x00096fec) phob_pre_status_pane_g3

0x31fb,	// (0x00096ff4) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x000a32de) phob_pre_status_pane_g

0x320b,	// (0x00097004) phob_pre_status_pane_t1

0x3219,	// (0x00097012) phob_pre_status_pane_t2

0x3229,	// (0x00097022) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x000a32e9) phob_pre_status_pane_t

0xe5f0,	// (0x000a23e9) bg_list_pane_cp05

0x1320,	// (0x00095119) grid_vorec_pane

0x1328,	// (0x00095121) vorec_t1

0x1336,	// (0x0009512f) vorec_t2

0x1344,	// (0x0009513d) vorec_t3

0x1352,	// (0x0009514b) vorec_t4

0xd0e7,	// (0x000a0ee0) vorec_t5

0x8c30,	// (0x0009ca29) vorec_t6

0x0004,

0xf152,	// (0x000a2f4b) vorec_t

0x8c3e,	// (0x0009ca37) wait_bar_pane_cp01

0x136e,	// (0x00095167) cell_vorec_pane_ParamLimits

0x136e,	// (0x00095167) cell_vorec_pane

0x9b83,	// (0x0009d97c) cell_vorec_pane_g1

0xe058,	// (0x000a1e51) grid_highlight_pane_cp05

0xe295,	// (0x000a208e) cams_zoom_pane

0xe295,	// (0x000a208e) image_vga_pane

0xe33c,	// (0x000a2135) main_camera_pane_g1

0xe33c,	// (0x000a2135) main_camera_pane_g2

0xe33c,	// (0x000a2135) main_camera_pane_g3

0xe33c,	// (0x000a2135) main_camera_pane_g4

0xe33c,	// (0x000a2135) main_camera_pane_g5

0xe33c,	// (0x000a2135) main_camera_pane_g6

0xe33c,	// (0x000a2135) main_camera_pane_g7

0x0007,

0xf15d,	// (0x000a2f56) main_camera_pane_g

0xe384,	// (0x000a217d) main_camera_pane_t1

0xe384,	// (0x000a217d) main_camera_pane_t2

0x0001,

0xf16e,	// (0x000a2f67) main_camera_pane_t

0x1395,	// (0x0009518e) cams_zoom_pane_cp_ParamLimits

0x1395,	// (0x0009518e) cams_zoom_pane_cp

0x13c9,	// (0x000951c2) image_cif_pane_ParamLimits

0x13c9,	// (0x000951c2) image_cif_pane

0xd6dd,	// (0x000a14d6) image_subqcif_pane

0x13db,	// (0x000951d4) main_video_pane_g1_ParamLimits

0x13db,	// (0x000951d4) main_video_pane_g1

0x1409,	// (0x00095202) main_video_pane_g2_ParamLimits

0x1409,	// (0x00095202) main_video_pane_g2

0x1443,	// (0x0009523c) main_video_pane_g3_ParamLimits

0x1443,	// (0x0009523c) main_video_pane_g3

0x1443,	// (0x0009523c) main_video_pane_g4_ParamLimits

0x1443,	// (0x0009523c) main_video_pane_g4

0x1477,	// (0x00095270) main_video_pane_g5_ParamLimits

0x1477,	// (0x00095270) main_video_pane_g5

0xe5f8,	// (0x000a23f1) main_video_pane_g6_ParamLimits

0xe5f8,	// (0x000a23f1) main_video_pane_g6

0x0006,

0xf173,	// (0x000a2f6c) main_video_pane_g_ParamLimits

0xf173,	// (0x000a2f6c) main_video_pane_g

0x1493,	// (0x0009528c) main_video_pane_t1_ParamLimits

0x1493,	// (0x0009528c) main_video_pane_t1

0xe37a,	// (0x000a2173) cams_zoom_pane_g1

0xe37a,	// (0x000a2173) cams_zoom_pane_g2

0xe37a,	// (0x000a2173) cams_zoom_pane_g3

0xe37a,	// (0x000a2173) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x000a2f7b) cams_zoom_pane_g

0xe295,	// (0x000a208e) grid_cams_pane

0xe295,	// (0x000a208e) linegrid_cams_pane

0x14d7,	// (0x000952d0) cell_cams_pane_ParamLimits

0x14d7,	// (0x000952d0) cell_cams_pane

0xd6dd,	// (0x000a14d6) cams_burst_image_pane

0xe37a,	// (0x000a2173) cell_cams_pane_g1

0xd6dd,	// (0x000a14d6) grid_highlight_pane_cp03

0xe2d9,	// (0x000a20d2) mp_bg_pane_g1

0xd6dd,	// (0x000a14d6) bg_list_pane_cp03

0xd6dd,	// (0x000a14d6) bg_mp_pane

0xd6dd,	// (0x000a14d6) grid_mp_pane

0xe37a,	// (0x000a2173) media_player_g1

0xeaf6,	// (0x000a28ef) media_player_t1

0xeaf6,	// (0x000a28ef) media_player_t2

0xeaf6,	// (0x000a28ef) media_player_t3

0xeaf6,	// (0x000a28ef) media_player_t4

0xeaf6,	// (0x000a28ef) media_player_t5

0xeaf6,	// (0x000a28ef) media_player_t6

0xeaf6,	// (0x000a28ef) media_player_t7

0x0006,

0xf4cf,	// (0x000a32c8) media_player_t

0xd6dd,	// (0x000a14d6) wait_bar_pane_cp02

0xf4b4,	// (0x000a32ad) main_usb_pane_t

0xed61,	// (0x000a2b5a) cell_mp_pane

0xe2d9,	// (0x000a20d2) cell_mp_pane_g1

0xe058,	// (0x000a1e51) grid_highlight_pane_cp06

0xe612,	// (0x000a240b) grid_skin_colour_pane

0xe61a,	// (0x000a2413) list_highlight_pane_cp03

0x14ec,	// (0x000952e5) skin_g1

0xe622,	// (0x000a241b) skin_t1

0xe631,	// (0x000a242a) skin_t2

0x0001,

0xf1b0,	// (0x000a2fa9) skin_t

0x14f4,	// (0x000952ed) cell_skin_colour_pane_ParamLimits

0x14f4,	// (0x000952ed) cell_skin_colour_pane

0xe63f,	// (0x000a2438) cell_skin_colour_pane_g1

0x156d,	// (0x00095366) call_video_g1_ParamLimits

0x156d,	// (0x00095366) call_video_g1

0x1589,	// (0x00095382) call_video_g2_ParamLimits

0x1589,	// (0x00095382) call_video_g2

0x0001,

0xf1b5,	// (0x000a2fae) call_video_g_ParamLimits

0xf1b5,	// (0x000a2fae) call_video_g

0x15db,	// (0x000953d4) call_video_uplink_pane_cp1_ParamLimits

0x15db,	// (0x000953d4) call_video_uplink_pane_cp1

0xe651,	// (0x000a244a) call_video_uplink_pane_cp2

0x167a,	// (0x00095473) video_down_crop_pane_ParamLimits

0x167a,	// (0x00095473) video_down_crop_pane

0x1771,	// (0x0009556a) video_down_pane_ParamLimits

0x1771,	// (0x0009556a) video_down_pane

0xe659,	// (0x000a2452) video_down_subqcif_pane_ParamLimits

0xe659,	// (0x000a2452) video_down_subqcif_pane

0xe671,	// (0x000a246a) video_down_subqcif_pane_cp_ParamLimits

0xe671,	// (0x000a246a) video_down_subqcif_pane_cp

0xe697,	// (0x000a2490) im_reading_pane_ParamLimits

0xe697,	// (0x000a2490) im_reading_pane

0x1881,	// (0x0009567a) im_writing_pane_ParamLimits

0x1881,	// (0x0009567a) im_writing_pane

0x1897,	// (0x00095690) im_reading_pane_t1

0xe6b1,	// (0x000a24aa) list_im_pane

0xe6c2,	// (0x000a24bb) scroll_pane_cp07

0x18d0,	// (0x000956c9) im_writing_pane_t1_ParamLimits

0x18d0,	// (0x000956c9) im_writing_pane_t1

0xe6db,	// (0x000a24d4) im_writing_pane_t2_ParamLimits

0xe6db,	// (0x000a24d4) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x000a2fb8) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x000a2fb8) im_writing_pane_t

0xe058,	// (0x000a1e51) input_focus_pane_cp04

0xe058,	// (0x000a1e51) input_focus_pane_cp05

0x18e5,	// (0x000956de) list_im_single_pane_ParamLimits

0x18e5,	// (0x000956de) list_im_single_pane

0x18f9,	// (0x000956f2) list_single_im_pane_t1

0xe5f0,	// (0x000a23e9) blid_accuracy_pane

0xe5f0,	// (0x000a23e9) blid_compass_pane

0xae6b,	// (0x0009ec64) main_location_t1

0xae6b,	// (0x0009ec64) main_location_t2

0xae6b,	// (0x0009ec64) main_location_t3

0x0002,

0xf4de,	// (0x000a32d7) main_location_t

0xe058,	// (0x000a1e51) aid_levels_location

0xe2d9,	// (0x000a20d2) blid_accuracy_pane_g1

0xe2d9,	// (0x000a20d2) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x000a3007) blid_accuracy_pane_g

0xe723,	// (0x000a251c) wml_content_pane

0xe761,	// (0x000a255a) wml_button_pane_ParamLimits

0xe761,	// (0x000a255a) wml_button_pane

0x1908,	// (0x00095701) wml_list_single_large_pane_ParamLimits

0x1908,	// (0x00095701) wml_list_single_large_pane

0x191d,	// (0x00095716) wml_list_single_medium_pane_ParamLimits

0x191d,	// (0x00095716) wml_list_single_medium_pane

0x1933,	// (0x0009572c) wml_list_single_small_pane_ParamLimits

0x1933,	// (0x0009572c) wml_list_single_small_pane

0xe775,	// (0x000a256e) wml_selection_box_pane_ParamLimits

0xe775,	// (0x000a256e) wml_selection_box_pane

0xe788,	// (0x000a2581) wml_list_single_pane_t1

0xe797,	// (0x000a2590) wml_list_single_medium_pane_t1

0xe7a6,	// (0x000a259f) wml_list_single_large_pane_t1

0xe7b5,	// (0x000a25ae) input_focus_pane_cp02_ParamLimits

0xe7b5,	// (0x000a25ae) input_focus_pane_cp02

0xe7c8,	// (0x000a25c1) wml_selection_box_pane_g1

0xe7d1,	// (0x000a25ca) wml_selection_box_pane_t1_ParamLimits

0xe7d1,	// (0x000a25ca) wml_selection_box_pane_t1

0xe2c1,	// (0x000a20ba) bg_wml_button_pane_ParamLimits

0xe2c1,	// (0x000a20ba) bg_wml_button_pane

0xe7e9,	// (0x000a25e2) wml_button_pane_g1

0xe7f1,	// (0x000a25ea) wml_button_pane_t1

0xe7e9,	// (0x000a25e2) wml_button_bg_pane_g1

0xe801,	// (0x000a25fa) wml_button_bg_pane_g2

0xe809,	// (0x000a2602) wml_button_bg_pane_g3

0xe811,	// (0x000a260a) wml_button_bg_pane_g4

0xe819,	// (0x000a2612) wml_button_bg_pane_g5

0xe821,	// (0x000a261a) wml_button_bg_pane_g6

0xe829,	// (0x000a2622) wml_button_bg_pane_g7

0xe831,	// (0x000a262a) wml_button_bg_pane_g8

0xe839,	// (0x000a2632) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x000a2fbd) wml_button_bg_pane_g

0x194b,	// (0x00095744) bg_list_pane_cp02

0xe841,	// (0x000a263a) mce_header_pane_ParamLimits

0xe841,	// (0x000a263a) mce_header_pane

0xe857,	// (0x000a2650) mce_icon_pane

0xe857,	// (0x000a2650) mce_image_pane

0xe860,	// (0x000a2659) mce_text_pane_ParamLimits

0xe860,	// (0x000a2659) mce_text_pane

0x1953,	// (0x0009574c) scroll_pane_cp03

0xe759,	// (0x000a2552) scroll_pane_cp04

0xe873,	// (0x000a266c) scroll_pane_cp05_ParamLimits

0xe873,	// (0x000a266c) scroll_pane_cp05

0x195d,	// (0x00095756) mce_header_field_pane_ParamLimits

0x195d,	// (0x00095756) mce_header_field_pane

0x1974,	// (0x0009576d) mce_header_field_pane_2_ParamLimits

0x1974,	// (0x0009576d) mce_header_field_pane_2

0x198a,	// (0x00095783) mce_header_field_pane_3

0x1992,	// (0x0009578b) list_single_mce_message_pane_ParamLimits

0x1992,	// (0x0009578b) list_single_mce_message_pane

0x19a7,	// (0x000957a0) list_single_mce_smart_pane_ParamLimits

0x19a7,	// (0x000957a0) list_single_mce_smart_pane

0xe888,	// (0x000a2681) input_focus_pane_cp03

0xe891,	// (0x000a268a) list_header_data_pane

0x19c7,	// (0x000957c0) mce_header_field_pane_t1

0x19d7,	// (0x000957d0) list_single_mce_header_pane_ParamLimits

0x19d7,	// (0x000957d0) list_single_mce_header_pane

0xe899,	// (0x000a2692) list_single_mce_header_pane_t1

0xe8a8,	// (0x000a26a1) list_single_mce_message_pane_g1

0xe8b0,	// (0x000a26a9) list_single_mce_message_pane_t1

0x1a11,	// (0x0009580a) bg_cale_heading_pane_cp01_ParamLimits

0x1a11,	// (0x0009580a) bg_cale_heading_pane_cp01

0xe8be,	// (0x000a26b7) bg_cale_pane_cp02_ParamLimits

0xe8be,	// (0x000a26b7) bg_cale_pane_cp02

0x1a4b,	// (0x00095844) cale_month_corner_pane

0x1a6a,	// (0x00095863) cale_month_day_heading_pane_ParamLimits

0x1a6a,	// (0x00095863) cale_month_day_heading_pane

0x1abc,	// (0x000958b5) cale_month_pane_g1_ParamLimits

0x1abc,	// (0x000958b5) cale_month_pane_g1

0x1aeb,	// (0x000958e4) cale_month_pane_g2_ParamLimits

0x1aeb,	// (0x000958e4) cale_month_pane_g2

0x1b1b,	// (0x00095914) cale_month_pane_g3_ParamLimits

0x1b1b,	// (0x00095914) cale_month_pane_g3

0x1b57,	// (0x00095950) cale_month_pane_g4_ParamLimits

0x1b57,	// (0x00095950) cale_month_pane_g4

0x1b93,	// (0x0009598c) cale_month_pane_g5_ParamLimits

0x1b93,	// (0x0009598c) cale_month_pane_g5

0x1bdb,	// (0x000959d4) cale_month_pane_g6_ParamLimits

0x1bdb,	// (0x000959d4) cale_month_pane_g6

0x1c27,	// (0x00095a20) cale_month_pane_g7_ParamLimits

0x1c27,	// (0x00095a20) cale_month_pane_g7

0x1c7b,	// (0x00095a74) cale_month_pane_g8_ParamLimits

0x1c7b,	// (0x00095a74) cale_month_pane_g8

0x1ccf,	// (0x00095ac8) cale_month_pane_g9_ParamLimits

0x1ccf,	// (0x00095ac8) cale_month_pane_g9

0x1d21,	// (0x00095b1a) cale_month_pane_g10_ParamLimits

0x1d21,	// (0x00095b1a) cale_month_pane_g10

0x1d73,	// (0x00095b6c) cale_month_pane_g11_ParamLimits

0x1d73,	// (0x00095b6c) cale_month_pane_g11

0x1dc5,	// (0x00095bbe) cale_month_pane_g12_ParamLimits

0x1dc5,	// (0x00095bbe) cale_month_pane_g12

0x1e17,	// (0x00095c10) cale_month_pane_g13_ParamLimits

0x1e17,	// (0x00095c10) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x000a2fd0) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x000a2fd0) cale_month_pane_g

0x1e69,	// (0x00095c62) cale_month_week_pane

0x1e8d,	// (0x00095c86) grid_cale_month_pane_ParamLimits

0x1e8d,	// (0x00095c86) grid_cale_month_pane

0x1ed6,	// (0x00095ccf) cale_month_day_heading_pane_t1

0x1f5c,	// (0x00095d55) cale_month_day_heading_pane_t2

0x1fd5,	// (0x00095dce) cale_month_day_heading_pane_t3

0x204e,	// (0x00095e47) cale_month_day_heading_pane_t4

0x20cf,	// (0x00095ec8) cale_month_day_heading_pane_t5

0x2158,	// (0x00095f51) cale_month_day_heading_pane_t6

0x21e1,	// (0x00095fda) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x000a2feb) cale_month_day_heading_pane_t

0xe59e,	// (0x000a2397) bg_cale_side_pane_cp01

0x2272,	// (0x0009606b) cale_month_week_pane_t1

0x228b,	// (0x00096084) cale_month_week_pane_t2

0x22a4,	// (0x0009609d) cale_month_week_pane_t3

0x22bd,	// (0x000960b6) cale_month_week_pane_t4

0x22d6,	// (0x000960cf) cale_month_week_pane_t5

0x22ef,	// (0x000960e8) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x000a2ffa) cale_month_week_pane_t

0x2308,	// (0x00096101) cell_cale_month_pane_ParamLimits

0x2308,	// (0x00096101) cell_cale_month_pane

0x9b8d,	// (0x0009d986) cell_cale_month_pane_g1

0x2436,	// (0x0009622f) cell_cale_month_pane_t1_ParamLimits

0x2436,	// (0x0009622f) cell_cale_month_pane_t1

0xe5ac,	// (0x000a23a5) grid_highlight_pane_cp08

0xe2d9,	// (0x000a20d2) main_smil_g1

0x2462,	// (0x0009625b) smil_status_pane

0xe8fd,	// (0x000a26f6) smil_text_pane

0xe530,	// (0x000a2329) bg_popup_call3_rect_pane_g8

0xe528,	// (0x000a2321) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x000a300c) bg_popup_call3_rect_pane_g

0xaf90,	// (0x0009ed89) smil_status_volume_pane_g1

0xe907,	// (0x000a2700) smil_status_pane_t1

0xafc3,	// (0x0009edbc) volume_smil_pane

0xe91e,	// (0x000a2717) list_smil_text_pane

0x2475,	// (0x0009626e) scroll_pane_cp011

0x2480,	// (0x00096279) smil_text_list_pane_t1_ParamLimits

0x2480,	// (0x00096279) smil_text_list_pane_t1

0x9b99,	// (0x0009d992) aid_volume_smil_ParamLimits

0x9b99,	// (0x0009d992) aid_volume_smil

0xe2d9,	// (0x000a20d2) smil_volume_pane_g1

0xe2d9,	// (0x000a20d2) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x000a3007) smil_volume_pane_g

0x24bc,	// (0x000962b5) listscroll_cale_day_pane

0xe928,	// (0x000a2721) bg_cale_pane

0xe940,	// (0x000a2739) list_cale_pane

0xe963,	// (0x000a275c) scroll_pane_cp09

0xe500,	// (0x000a22f9) cale_bg_pane_g1

0xe4f8,	// (0x000a22f1) cale_bg_pane_g2

0xe4f0,	// (0x000a22e9) cale_bg_pane_g3

0xe510,	// (0x000a2309) cale_bg_pane_g4

0xe508,	// (0x000a2301) cale_bg_pane_g5

0xe518,	// (0x000a2311) cale_bg_pane_g6

0xe520,	// (0x000a2319) cale_bg_pane_g7

0xe530,	// (0x000a2329) cale_bg_pane_g8

0xe528,	// (0x000a2321) cale_bg_pane_g9

0x0008,

0xf213,	// (0x000a300c) cale_bg_pane_g

0x24ce,	// (0x000962c7) list_cale_time_pane_ParamLimits

0x24ce,	// (0x000962c7) list_cale_time_pane

0xe97c,	// (0x000a2775) list_cale_time_pane_g1_ParamLimits

0xe97c,	// (0x000a2775) list_cale_time_pane_g1

0xe988,	// (0x000a2781) list_cale_time_pane_g2_ParamLimits

0xe988,	// (0x000a2781) list_cale_time_pane_g2

0x24e3,	// (0x000962dc) list_cale_time_pane_g3_ParamLimits

0x24e3,	// (0x000962dc) list_cale_time_pane_g3

0x24f1,	// (0x000962ea) list_cale_time_pane_g4_ParamLimits

0x24f1,	// (0x000962ea) list_cale_time_pane_g4

0x24ff,	// (0x000962f8) list_cale_time_pane_g5_ParamLimits

0x24ff,	// (0x000962f8) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x000a301f) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x000a301f) list_cale_time_pane_g

0xe9a2,	// (0x000a279b) list_cale_time_pane_t1_ParamLimits

0xe9a2,	// (0x000a279b) list_cale_time_pane_t1

0xe9ca,	// (0x000a27c3) list_cale_time_pane_t2_ParamLimits

0xe9ca,	// (0x000a27c3) list_cale_time_pane_t2

0x2761,	// (0x0009655a) aid_blid_cardinal_pane

0x279f,	// (0x00096598) compass_pane_t4

0xe9f2,	// (0x000a27eb) list_cale_time_pane_t4_ParamLimits

0xe9f2,	// (0x000a27eb) list_cale_time_pane_t4

0x27ad,	// (0x000965a6) compass_pane_t5

0x27bb,	// (0x000965b4) compass_pane_t6

0x27c9,	// (0x000965c2) compass_pane_t7

0xeea6,	// (0x000a2c9f) navi_pane_cc_t1

0x9cc7,	// (0x0009dac0) aid_phob_thumbnail_center_pane

0x2c36,	// (0x00096a2f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x000a302c) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x000a302c) list_cale_time_pane_t

0xd751,	// (0x000a154a) bg_popup_window_pane_cp02_ParamLimits

0xd751,	// (0x000a154a) bg_popup_window_pane_cp02

0xea1a,	// (0x000a2813) heading_pane_cp01_ParamLimits

0xea1a,	// (0x000a2813) heading_pane_cp01

0xea26,	// (0x000a281f) loc_req_pane_ParamLimits

0xea26,	// (0x000a281f) loc_req_pane

0xea38,	// (0x000a2831) loc_type_pane_ParamLimits

0xea38,	// (0x000a2831) loc_type_pane

0xea4a,	// (0x000a2843) loc_type_pane_t1_ParamLimits

0xea4a,	// (0x000a2843) loc_type_pane_t1

0xea5c,	// (0x000a2855) loc_type_pane_t2_ParamLimits

0xea5c,	// (0x000a2855) loc_type_pane_t2

0xea6e,	// (0x000a2867) loc_type_pane_t3_ParamLimits

0xea6e,	// (0x000a2867) loc_type_pane_t3

0x0002,

0xf23a,	// (0x000a3033) loc_type_pane_t_ParamLimits

0xf23a,	// (0x000a3033) loc_type_pane_t

0xea80,	// (0x000a2879) list_loc_req_pane

0xea8a,	// (0x000a2883) scroll_pane_cp012

0x250d,	// (0x00096306) list_single_loc_request_popup_menu_pane_ParamLimits

0x250d,	// (0x00096306) list_single_loc_request_popup_menu_pane

0xea95,	// (0x000a288e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xea95,	// (0x000a288e) list_single_loc_request_popup_menu_pane_g1

0xeaa1,	// (0x000a289a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xeaa1,	// (0x000a289a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x000a303a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x000a303a) list_single_loc_request_popup_menu_pane_g

0xeaad,	// (0x000a28a6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xeaad,	// (0x000a28a6) list_single_loc_request_popup_menu_pane_t1

0xe2c1,	// (0x000a20ba) bg_popup_window_pane_cp03_ParamLimits

0xe2c1,	// (0x000a20ba) bg_popup_window_pane_cp03

0xeac3,	// (0x000a28bc) heading_loc_req_pane_ParamLimits

0xeac3,	// (0x000a28bc) heading_loc_req_pane

0x251a,	// (0x00096313) popup_dyc_status_message_window_g1_ParamLimits

0x251a,	// (0x00096313) popup_dyc_status_message_window_g1

0x252e,	// (0x00096327) popup_dyc_status_message_window_t1_ParamLimits

0x252e,	// (0x00096327) popup_dyc_status_message_window_t1

0x2543,	// (0x0009633c) popup_dyc_status_message_window_t2_ParamLimits

0x2543,	// (0x0009633c) popup_dyc_status_message_window_t2

0x2558,	// (0x00096351) popup_dyc_status_message_window_t3_ParamLimits

0x2558,	// (0x00096351) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x000a303f) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x000a303f) popup_dyc_status_message_window_t

0xe058,	// (0x000a1e51) bg_heading_pane_cp01

0xeacf,	// (0x000a28c8) heading_loc_req_pane_g1

0xead7,	// (0x000a28d0) heading_loc_req_pane_g2

0xeadf,	// (0x000a28d8) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x000a3046) heading_loc_req_pane_g

0xeae7,	// (0x000a28e0) heading_loc_req_pane_t1

0xeb06,	// (0x000a28ff) bg_popup_sub_pane_cp01_ParamLimits

0xeb06,	// (0x000a28ff) bg_popup_sub_pane_cp01

0xeb14,	// (0x000a290d) popup_cale_events_window_g1_ParamLimits

0xeb14,	// (0x000a290d) popup_cale_events_window_g1

0xeb34,	// (0x000a292d) popup_cale_events_window_g2_ParamLimits

0xeb34,	// (0x000a292d) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x000a3068) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x000a3068) popup_cale_events_window_g

0xeb54,	// (0x000a294d) popup_cale_events_window_t1_ParamLimits

0xeb54,	// (0x000a294d) popup_cale_events_window_t1

0xeb66,	// (0x000a295f) popup_cale_events_window_t2_ParamLimits

0xeb66,	// (0x000a295f) popup_cale_events_window_t2

0xeba4,	// (0x000a299d) popup_cale_events_window_t3_ParamLimits

0xeba4,	// (0x000a299d) popup_cale_events_window_t3

0xebde,	// (0x000a29d7) popup_cale_events_window_t4_ParamLimits

0xebde,	// (0x000a29d7) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x000a306d) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x000a306d) popup_cale_events_window_t

0x2580,	// (0x00096379) call_type_pane

0x2590,	// (0x00096389) popup_call_status_window_g1

0x25a4,	// (0x0009639d) popup_call_status_window_g2

0x25b8,	// (0x000963b1) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x000a3076) popup_call_status_window_g

0xec14,	// (0x000a2a0d) call_type_pane_g1

0xec1d,	// (0x000a2a16) call_type_pane_g2

0x0001,

0xf284,	// (0x000a307d) call_type_pane_g

0xe058,	// (0x000a1e51) bg_popup_sub_pane_cp02

0xec26,	// (0x000a2a1f) listscroll_popup_wml_pane

0xec2e,	// (0x000a2a27) list_wml_pane

0xec38,	// (0x000a2a31) scroll_pane_cp013

0xec43,	// (0x000a2a3c) list_single_graphic_popup_wml_pane_ParamLimits

0xec43,	// (0x000a2a3c) list_single_graphic_popup_wml_pane

0xe2d9,	// (0x000a20d2) list_single_graphic_popup_wml_pane_g1

0xec57,	// (0x000a2a50) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x000a3082) list_single_graphic_popup_wml_pane_g

0xec5f,	// (0x000a2a58) list_single_graphic_popup_wml_pane_t1

0xec75,	// (0x000a2a6e) aid_call_pane

0xe2b9,	// (0x000a20b2) popup_clock_analogue_window_g1

0xe2b9,	// (0x000a20b2) popup_clock_analogue_window_g2

0x9bc7,	// (0x0009d9c0) popup_clock_analogue_window_g3

0x9bc7,	// (0x0009d9c0) popup_clock_analogue_window_g4

0xe2d9,	// (0x000a20d2) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x000a3087) popup_clock_analogue_window_g

0x9bcf,	// (0x0009d9c8) popup_clock_analogue_window_t1

0x9bdd,	// (0x0009d9d6) clock_digital_number_pane_ParamLimits

0x9bdd,	// (0x0009d9d6) clock_digital_number_pane

0x9be9,	// (0x0009d9e2) clock_digital_number_pane_cp02_ParamLimits

0x9be9,	// (0x0009d9e2) clock_digital_number_pane_cp02

0x9bf5,	// (0x0009d9ee) clock_digital_number_pane_cp03_ParamLimits

0x9bf5,	// (0x0009d9ee) clock_digital_number_pane_cp03

0x9c01,	// (0x0009d9fa) clock_digital_number_pane_cp04_ParamLimits

0x9c01,	// (0x0009d9fa) clock_digital_number_pane_cp04

0x9c11,	// (0x0009da0a) clock_digital_separator_pane_ParamLimits

0x9c11,	// (0x0009da0a) clock_digital_separator_pane

0x9c1d,	// (0x0009da16) popup_clock_digital_window_t1

0xe2d9,	// (0x000a20d2) clock_digital_number_pane_g1

0xe2d9,	// (0x000a20d2) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x000a3007) clock_digital_number_pane_g

0xe2d9,	// (0x000a20d2) clock_digital_separator_pane_g1

0xe2d9,	// (0x000a20d2) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x000a3007) clock_digital_separator_pane_g

0xe058,	// (0x000a1e51) bg_popup_window_pane_cp04

0xec7d,	// (0x000a2a76) heading_pane_cp03

0xe5f0,	// (0x000a23e9) listscroll_popup_gms_pane

0xe058,	// (0x000a1e51) grid_large_graphic_popup_pane

0xec85,	// (0x000a2a7e) listscroll_popup_gms_pane_g1

0xec8e,	// (0x000a2a87) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x000a3092) listscroll_popup_gms_pane_g

0xec97,	// (0x000a2a90) scroll_pane_cp014

0xe32e,	// (0x000a2127) cell_large_graphic_popup_pane_ParamLimits

0xe32e,	// (0x000a2127) cell_large_graphic_popup_pane

0xe33c,	// (0x000a2135) cell_large_graphic_popup_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) cell_large_graphic_popup_pane_g1

0xeca0,	// (0x000a2a99) cell_large_graphic_popup_pane_g2_ParamLimits

0xeca0,	// (0x000a2a99) cell_large_graphic_popup_pane_g2

0xecae,	// (0x000a2aa7) cell_large_graphic_popup_pane_g3_ParamLimits

0xecae,	// (0x000a2aa7) cell_large_graphic_popup_pane_g3

0xecbc,	// (0x000a2ab5) cell_large_graphic_popup_pane_g4_ParamLimits

0xecbc,	// (0x000a2ab5) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x000a3097) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x000a3097) cell_large_graphic_popup_pane_g

0xe058,	// (0x000a1e51) grid_highlight_pane_cp010

0xe2d9,	// (0x000a20d2) bg_popup_call_pane_g1

0xeccd,	// (0x000a2ac6) list_single_graphic_popup_conf_pane_ParamLimits

0xeccd,	// (0x000a2ac6) list_single_graphic_popup_conf_pane

0xece0,	// (0x000a2ad9) list_highlight_pane_cp01

0xece9,	// (0x000a2ae2) list_single_graphic_popup_conf_pane_g1

0xecf1,	// (0x000a2aea) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x000a30a0) list_single_graphic_popup_conf_pane_g

0xecf9,	// (0x000a2af2) list_single_graphic_popup_conf_pane_t1

0xed07,	// (0x000a2b00) linegrid_cams_pane_g1

0x25c7,	// (0x000963c0) linegrid_cams_pane_g2

0xe538,	// (0x000a2331) linegrid_cams_pane_g3

0xed10,	// (0x000a2b09) linegrid_cams_pane_g4

0x25d0,	// (0x000963c9) linegrid_cams_pane_g5

0x25d9,	// (0x000963d2) linegrid_cams_pane_g6

0xe5df,	// (0x000a23d8) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x000a30a5) linegrid_cams_pane_g

0xed19,	// (0x000a2b12) popup_clock_analogue_window

0xed19,	// (0x000a2b12) popup_clock_digital_window

0xe058,	// (0x000a1e51) popup_phob_thumbnail_window

0xe2d9,	// (0x000a20d2) call_video_uplink_pane_g1

0xed22,	// (0x000a2b1b) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x000a30b4) call_video_uplink_pane_g

0xed2a,	// (0x000a2b23) video_uplink_pane

0xed32,	// (0x000a2b2b) mce_image_pane_g1

0x25e4,	// (0x000963dd) mce_image_pane_g2

0x25ee,	// (0x000963e7) mce_image_pane_g3

0x25f6,	// (0x000963ef) mce_image_pane_g4

0x25fe,	// (0x000963f7) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x000a30b9) mce_image_pane_g

0xed3c,	// (0x000a2b35) control_top_pane_stacon_cp01_ParamLimits

0xed3c,	// (0x000a2b35) control_top_pane_stacon_cp01

0xed50,	// (0x000a2b49) uni_indicator_pane_stacon_cp01_ParamLimits

0xed50,	// (0x000a2b49) uni_indicator_pane_stacon_cp01

0xed61,	// (0x000a2b5a) bg_popup_sub_pane_cp03

0xed6b,	// (0x000a2b64) chi_dic_find_pane

0x2606,	// (0x000963ff) listscroll_chi_dic_pane

0xed73,	// (0x000a2b6c) main_pane_chidic_g1

0xed7b,	// (0x000a2b74) chi_dic_find_pane_t1

0xed89,	// (0x000a2b82) find_chidic_pane

0xed92,	// (0x000a2b8b) chi_dic_list_pane_ParamLimits

0xed92,	// (0x000a2b8b) chi_dic_list_pane

0xeda3,	// (0x000a2b9c) scroll_pane_cp020

0xedab,	// (0x000a2ba4) find_chidic_pane_t1

0xe058,	// (0x000a1e51) input_focus_pane_cp06

0x261a,	// (0x00096413) list_chi_dic_pane_ParamLimits

0x261a,	// (0x00096413) list_chi_dic_pane

0x262c,	// (0x00096425) list_chi_dic_pane_t1_ParamLimits

0x262c,	// (0x00096425) list_chi_dic_pane_t1

0xe058,	// (0x000a1e51) list_highlight_pane_cp020

0xedba,	// (0x000a2bb3) bg_cale_heading_pane_g1

0x263f,	// (0x00096438) bg_cale_heading_pane_g2

0x2647,	// (0x00096440) bg_cale_heading_pane_g3

0x264f,	// (0x00096448) bg_cale_heading_pane_g4

0x2659,	// (0x00096452) bg_cale_heading_pane_g5

0x2663,	// (0x0009645c) bg_cale_heading_pane_g6

0x266b,	// (0x00096464) bg_cale_heading_pane_g7

0x2673,	// (0x0009646c) bg_cale_heading_pane_g8

0x267d,	// (0x00096476) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x000a30c4) bg_cale_heading_pane_g

0xedba,	// (0x000a2bb3) bg_cale_side_pane_g1

0x2687,	// (0x00096480) bg_cale_side_pane_g2

0x268f,	// (0x00096488) bg_cale_side_pane_g3

0x2697,	// (0x00096490) bg_cale_side_pane_g4

0x269f,	// (0x00096498) bg_cale_side_pane_g5

0x26a7,	// (0x000964a0) bg_cale_side_pane_g6

0x26af,	// (0x000964a8) bg_cale_side_pane_g7

0x26b7,	// (0x000964b0) bg_cale_side_pane_g8

0x26bf,	// (0x000964b8) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x000a30d7) bg_cale_side_pane_g

0x26c7,	// (0x000964c0) popup_call_status_window_ParamLimits

0x26c7,	// (0x000964c0) popup_call_status_window

0xedc2,	// (0x000a2bbb) stacon_top_pane

0xedca,	// (0x000a2bc3) status_pane_ParamLimits

0xedca,	// (0x000a2bc3) status_pane

0xeddf,	// (0x000a2bd8) status_small_pane

0xede7,	// (0x000a2be0) control_pane

0xe058,	// (0x000a1e51) stacon_bottom_pane

0xedef,	// (0x000a2be8) list_single_mce_smart_pane_t1_ParamLimits

0xedef,	// (0x000a2be8) list_single_mce_smart_pane_t1

0xee02,	// (0x000a2bfb) list_single_mce_smart_pane_t2_ParamLimits

0xee02,	// (0x000a2bfb) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x000a30ea) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x000a30ea) list_single_mce_smart_pane_t

0x2710,	// (0x00096509) compass_pane

0x2719,	// (0x00096512) main_location2_pane_t1

0x272b,	// (0x00096524) main_location2_pane_t2

0x273d,	// (0x00096536) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x000a30ef) main_location2_pane_t

0xee21,	// (0x000a2c1a) compass_pane_g1_ParamLimits

0xee21,	// (0x000a2c1a) compass_pane_g1

0x2781,	// (0x0009657a) compass_pane_t1

0x2790,	// (0x00096589) compass_pane_t2

0x0005,

0xf2ff,	// (0x000a30f8) compass_pane_t

0x27d7,	// (0x000965d0) text_secondary_cp61

0xee9d,	// (0x000a2c96) navi_pane_cams_g5

0xef19,	// (0x000a2d12) navi_pane_im_t1

0xef27,	// (0x000a2d20) navi_pane_mp_g1_ParamLimits

0xef27,	// (0x000a2d20) navi_pane_mp_g1

0xef3b,	// (0x000a2d34) navi_pane_mp_g2_ParamLimits

0xef3b,	// (0x000a2d34) navi_pane_mp_g2

0xef47,	// (0x000a2d40) navi_pane_mp_g3_ParamLimits

0xef47,	// (0x000a2d40) navi_pane_mp_g3

0x0002,

0xf313,	// (0x000a310c) navi_pane_mp_g_ParamLimits

0xf313,	// (0x000a310c) navi_pane_mp_g

0xef53,	// (0x000a2d4c) navi_pane_mp_t1

0xef61,	// (0x000a2d5a) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x000a3113) navi_pane_mp_t

0xefcc,	// (0x000a2dc5) navi_pane_vt_g1

0xef53,	// (0x000a2d4c) navi_pane_vt_t1

0xefd4,	// (0x000a2dcd) navi_slider_pane

0xe5f0,	// (0x000a23e9) zooming_pane

0xefe4,	// (0x000a2ddd) navi_slider_pane_g1

0x9c3a,	// (0x0009da33) navi_slider_pane_g2

0x0006,

0xf321,	// (0x000a311a) navi_slider_pane_g

0x9c4c,	// (0x0009da45) aid_levels_zoom

0x9c54,	// (0x0009da4d) zooming_pane_g1

0x9c5c,	// (0x0009da55) zooming_pane_g2

0x9c5c,	// (0x0009da55) zooming_pane_g3

0x0002,

0xf330,	// (0x000a3129) zooming_pane_g

0x9c64,	// (0x0009da5d) level_10_zoom

0x9c6d,	// (0x0009da66) level_11_zoom

0x9c76,	// (0x0009da6f) level_1_zoom

0x9c7f,	// (0x0009da78) level_2_zoom

0x9c88,	// (0x0009da81) level_3_zoom

0x9c91,	// (0x0009da8a) level_4_zoom

0x9c9a,	// (0x0009da93) level_5_zoom

0x9ca3,	// (0x0009da9c) level_6_zoom

0x9cac,	// (0x0009daa5) level_7_zoom

0x9cb5,	// (0x0009daae) level_8_zoom

0x9cbe,	// (0x0009dab7) level_9_zoom

0x9ccf,	// (0x0009dac8) popup_phob_thumbnail_window_g1

0x9cd7,	// (0x0009dad0) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x000a3130) popup_phob_thumbnail_window_g

0x3239,	// (0x00097032) level_1_location

0x3241,	// (0x0009703a) level_2_location

0x3249,	// (0x00097042) level_3_location

0x3251,	// (0x0009704a) level_4_location

0xe5f0,	// (0x000a23e9) level_5_location

0x2828,	// (0x00096621) mce_icon_pane_g1

0x2832,	// (0x0009662b) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x000a3135) mce_icon_pane_g

0x9cdf,	// (0x0009dad8) main_mup_pane_g1_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g1

0x9cdf,	// (0x0009dad8) main_mup_pane_g2_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g2

0x9cdf,	// (0x0009dad8) main_mup_pane_g3_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g3

0x9cdf,	// (0x0009dad8) main_mup_pane_g4_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g4

0x9cdf,	// (0x0009dad8) main_mup_pane_g5_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g5

0x9cdf,	// (0x0009dad8) main_mup_pane_g6_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g6

0x9cdf,	// (0x0009dad8) main_mup_pane_g7_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g7

0x9cdf,	// (0x0009dad8) main_mup_pane_g8_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g8

0x9cdf,	// (0x0009dad8) main_mup_pane_g9_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g9

0x9cdf,	// (0x0009dad8) main_mup_pane_g10_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g10

0x9cdf,	// (0x0009dad8) main_mup_pane_g11_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g11

0xe33c,	// (0x000a2135) main_mup_pane_g12_ParamLimits

0xe33c,	// (0x000a2135) main_mup_pane_g12

0x9cdf,	// (0x0009dad8) main_mup_pane_g13_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup_pane_g13

0x000c,

0xf341,	// (0x000a313a) main_mup_pane_g_ParamLimits

0xf341,	// (0x000a313a) main_mup_pane_g

0x9ced,	// (0x0009dae6) main_mup_pane_t1_ParamLimits

0x9ced,	// (0x0009dae6) main_mup_pane_t1

0x9ced,	// (0x0009dae6) main_mup_pane_t2_ParamLimits

0x9ced,	// (0x0009dae6) main_mup_pane_t2

0x9ced,	// (0x0009dae6) main_mup_pane_t3_ParamLimits

0x9ced,	// (0x0009dae6) main_mup_pane_t3

0xe384,	// (0x000a217d) main_mup_pane_t4_ParamLimits

0xe384,	// (0x000a217d) main_mup_pane_t4

0xe384,	// (0x000a217d) main_mup_pane_t5_ParamLimits

0xe384,	// (0x000a217d) main_mup_pane_t5

0xe398,	// (0x000a2191) main_mup_pane_t6_ParamLimits

0xe398,	// (0x000a2191) main_mup_pane_t6

0x0005,

0xf35c,	// (0x000a3155) main_mup_pane_t_ParamLimits

0xf35c,	// (0x000a3155) main_mup_pane_t

0xe32e,	// (0x000a2127) mup_progress_pane_ParamLimits

0xe32e,	// (0x000a2127) mup_progress_pane

0x9d01,	// (0x0009dafa) mup_visualizer_pane_ParamLimits

0x9d01,	// (0x0009dafa) mup_visualizer_pane

0x9d01,	// (0x0009dafa) mup_volume_pane_ParamLimits

0x9d01,	// (0x0009dafa) mup_volume_pane

0xe34a,	// (0x000a2143) mup_visualizer_pane_g1_ParamLimits

0xe34a,	// (0x000a2143) mup_visualizer_pane_g1

0x9d0f,	// (0x0009db08) mup_visualizer_pane_g2_ParamLimits

0x9d0f,	// (0x0009db08) mup_visualizer_pane_g2

0xe33c,	// (0x000a2135) mup_visualizer_pane_g3_ParamLimits

0xe33c,	// (0x000a2135) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x000a3162) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x000a3162) mup_visualizer_pane_g

0xe37a,	// (0x000a2173) mup_volume_pane_g1

0xe37a,	// (0x000a2173) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x000a2e85) mup_volume_pane_g

0xe37a,	// (0x000a2173) mup_progress_pane_g1

0xe37a,	// (0x000a2173) mup_progress_pane_g2

0xe37a,	// (0x000a2173) mup_progress_pane_g3

0x0002,

0xf370,	// (0x000a3169) mup_progress_pane_g

0xe058,	// (0x000a1e51) bg_popup_window_pane_cp05

0x9d1d,	// (0x0009db16) heading_pane_cp02_ParamLimits

0x9d1d,	// (0x0009db16) heading_pane_cp02

0x9d37,	// (0x0009db30) list_popup_blid_pane

0x9d3f,	// (0x0009db38) list_blid_sat_info_pane_ParamLimits

0x9d3f,	// (0x0009db38) list_blid_sat_info_pane

0x9d52,	// (0x0009db4b) list_blid_sat_info_pane_g1

0x9d5a,	// (0x0009db53) list_blid_sat_info_pane_t1

0x2932,	// (0x0009672b) mup_equalizer_pane_ParamLimits

0x2932,	// (0x0009672b) mup_equalizer_pane

0x294b,	// (0x00096744) mup_equalizer_pane_cp1_ParamLimits

0x294b,	// (0x00096744) mup_equalizer_pane_cp1

0x2968,	// (0x00096761) mup_equalizer_pane_cp2_ParamLimits

0x2968,	// (0x00096761) mup_equalizer_pane_cp2

0x2985,	// (0x0009677e) mup_equalizer_pane_cp3_ParamLimits

0x2985,	// (0x0009677e) mup_equalizer_pane_cp3

0x29a6,	// (0x0009679f) mup_equalizer_pane_cp4_ParamLimits

0x29a6,	// (0x0009679f) mup_equalizer_pane_cp4

0x29c7,	// (0x000967c0) mup_equalizer_pane_cp5

0x29db,	// (0x000967d4) mup_equalizer_pane_cp6

0x29ef,	// (0x000967e8) mup_equalizer_pane_cp7

0xae0b,	// (0x0009ec04) bg_popup_call_poc_act_pane_g9

0xae13,	// (0x0009ec0c) bg_popup_call_poc_act_pane_g10

0xae1b,	// (0x0009ec14) bg_popup_call_poc_act_pane_g11

0x000a,

0xe2c1,	// (0x000a20ba) mup_scale_pane

0xe2d9,	// (0x000a20d2) mup_scale_pane_g1

0x9d68,	// (0x0009db61) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x000a3185) mup_scale_pane_g

0x9d8c,	// (0x0009db85) msg_data_pane

0x9d94,	// (0x0009db8d) scroll_pane_cp017

0x2a15,	// (0x0009680e) bg_list_pane_cp04_ParamLimits

0x2a15,	// (0x0009680e) bg_list_pane_cp04

0x9d9c,	// (0x0009db95) msg_data_pane_g1

0x2a3b,	// (0x00096834) msg_data_pane_g2

0x2a45,	// (0x0009683e) msg_data_pane_g3

0x2a4d,	// (0x00096846) msg_data_pane_g4

0x2a55,	// (0x0009684e) msg_data_pane_g5

0x2a5d,	// (0x00096856) msg_data_pane_g6

0x2a65,	// (0x0009685e) msg_data_pane_g7

0x0006,

0xf39b,	// (0x000a3194) msg_data_pane_g

0x2a6d,	// (0x00096866) msg_text_pane_ParamLimits

0x2a6d,	// (0x00096866) msg_text_pane

0x2a9d,	// (0x00096896) qrid_highlight_pane_cp011_ParamLimits

0x2a9d,	// (0x00096896) qrid_highlight_pane_cp011

0xe058,	// (0x000a1e51) msg_body_pane

0xe2c1,	// (0x000a20ba) msg_header_pane

0xf008,	// (0x000a2e01) input_focus_pane_cp07

0x2ac1,	// (0x000968ba) msg_header_pane_t1_ParamLimits

0x2ac1,	// (0x000968ba) msg_header_pane_t1

0x2add,	// (0x000968d6) msg_header_pane_t2_ParamLimits

0x2add,	// (0x000968d6) msg_header_pane_t2

0x0001,

0xf3af,	// (0x000a31a8) msg_header_pane_t_ParamLimits

0xf3af,	// (0x000a31a8) msg_header_pane_t

0x9dc4,	// (0x0009dbbd) msg_body_pane_g1

0x2afd,	// (0x000968f6) msg_body_pane_t1_ParamLimits

0x2afd,	// (0x000968f6) msg_body_pane_t1

0x2b2e,	// (0x00096927) msg_body_pane_t2_ParamLimits

0x2b2e,	// (0x00096927) msg_body_pane_t2

0x2b40,	// (0x00096939) msg_body_pane_t3_ParamLimits

0x2b40,	// (0x00096939) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x000a31ad) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x000a31ad) msg_body_pane_t

0x2b8c,	// (0x00096985) main_viewer_pane_g1_ParamLimits

0x2b8c,	// (0x00096985) main_viewer_pane_g1

0x2b9a,	// (0x00096993) main_viewer_pane_g2_ParamLimits

0x2b9a,	// (0x00096993) main_viewer_pane_g2

0x2ba8,	// (0x000969a1) main_viewer_pane_g3_ParamLimits

0x2ba8,	// (0x000969a1) main_viewer_pane_g3

0x2bb7,	// (0x000969b0) main_viewer_pane_g4_ParamLimits

0x2bb7,	// (0x000969b0) main_viewer_pane_g4

0x9de4,	// (0x0009dbdd) main_viewer_pane_g5_ParamLimits

0x9de4,	// (0x0009dbdd) main_viewer_pane_g5

0x9de4,	// (0x0009dbdd) main_viewer_pane_g7_ParamLimits

0x9de4,	// (0x0009dbdd) main_viewer_pane_g7

0xea95,	// (0x000a288e) main_viewer_pane_g8_ParamLimits

0xea95,	// (0x000a288e) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x000a31bd) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x000a31bd) main_viewer_pane_g

0x9e02,	// (0x0009dbfb) viewer_content_pane_ParamLimits

0x9e02,	// (0x0009dbfb) viewer_content_pane

0x2bf3,	// (0x000969ec) main_postcard_pane_g1_ParamLimits

0x2bf3,	// (0x000969ec) main_postcard_pane_g1

0x2c09,	// (0x00096a02) main_postcard_pane_g2_ParamLimits

0x2c09,	// (0x00096a02) main_postcard_pane_g2

0x2c1f,	// (0x00096a18) main_postcard_pane_g3_ParamLimits

0x2c1f,	// (0x00096a18) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x000a31ce) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x000a31ce) main_postcard_pane_g

0x2c36,	// (0x00096a2f) main_postcard_pane_g4

0xafa3,	// (0x0009ed9c) smil_status_volume_pane_g2

0x2c79,	// (0x00096a72) postcard_pane_ParamLimits

0x2c79,	// (0x00096a72) postcard_pane

0x9e10,	// (0x0009dc09) postcard_pane_g1_ParamLimits

0x9e10,	// (0x0009dc09) postcard_pane_g1

0x2cbb,	// (0x00096ab4) postcard_pane_g2_ParamLimits

0x2cbb,	// (0x00096ab4) postcard_pane_g2

0x2cc7,	// (0x00096ac0) postcard_pane_g3_ParamLimits

0x2cc7,	// (0x00096ac0) postcard_pane_g3

0x9e1e,	// (0x0009dc17) postcard_pane_g4_ParamLimits

0x9e1e,	// (0x0009dc17) postcard_pane_g4

0x2cd3,	// (0x00096acc) postcard_pane_g5_ParamLimits

0x2cd3,	// (0x00096acc) postcard_pane_g5

0x2ce8,	// (0x00096ae1) postcard_pane_g6_ParamLimits

0x2ce8,	// (0x00096ae1) postcard_pane_g6

0x9e10,	// (0x0009dc09) postcard_pane_g7_ParamLimits

0x9e10,	// (0x0009dc09) postcard_pane_g7

0x0006,

0xf3e2,	// (0x000a31db) postcard_pane_g_ParamLimits

0xf3e2,	// (0x000a31db) postcard_pane_g

0x2cfc,	// (0x00096af5) main_mp2_pane_g1_ParamLimits

0x2cfc,	// (0x00096af5) main_mp2_pane_g1

0x2d08,	// (0x00096b01) main_mp2_pane_g2_ParamLimits

0x2d08,	// (0x00096b01) main_mp2_pane_g2

0x2d14,	// (0x00096b0d) main_mp2_pane_g3_ParamLimits

0x2d14,	// (0x00096b0d) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x000a31ea) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x000a31ea) main_mp2_pane_g

0x2d20,	// (0x00096b19) main_mp2_pane_t1_ParamLimits

0x2d20,	// (0x00096b19) main_mp2_pane_t1

0x2d35,	// (0x00096b2e) main_mp2_pane_t2_ParamLimits

0x2d35,	// (0x00096b2e) main_mp2_pane_t2

0x2d47,	// (0x00096b40) main_mp2_pane_t3_ParamLimits

0x2d47,	// (0x00096b40) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x000a31f1) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x000a31f1) main_mp2_pane_t

0xe295,	// (0x000a208e) pec_content_pane_ParamLimits

0xe295,	// (0x000a208e) pec_content_pane

0xd6dd,	// (0x000a14d6) scroll_pane_cp015

0x9d01,	// (0x0009dafa) pec_attribute_pane_ParamLimits

0x9d01,	// (0x0009dafa) pec_attribute_pane

0xe33c,	// (0x000a2135) pec_content_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) pec_content_pane_g1

0x9e2c,	// (0x0009dc25) pec_content_pane_t1_ParamLimits

0x9e2c,	// (0x0009dc25) pec_content_pane_t1

0x9e40,	// (0x0009dc39) pec_content_pane_t2_ParamLimits

0x9e40,	// (0x0009dc39) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x000a31f8) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x000a31f8) pec_content_pane_t

0xe32e,	// (0x000a2127) list_single_graphic_pane_cp01_ParamLimits

0xe32e,	// (0x000a2127) list_single_graphic_pane_cp01

0xe2c1,	// (0x000a20ba) bg_popup_sub_pane_cp04

0x9e54,	// (0x0009dc4d) popup_mup_playback_window_g1

0x9e60,	// (0x0009dc59) popup_mup_playback_window_t1

0x9e75,	// (0x0009dc6e) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x000a31fd) popup_mup_playback_window_t

0x9eac,	// (0x0009dca5) main_image_pane_g1_ParamLimits

0x9eac,	// (0x0009dca5) main_image_pane_g1

0x9eef,	// (0x0009dce8) scroll_pane_cp018_ParamLimits

0x9eef,	// (0x0009dce8) scroll_pane_cp018

0x9f07,	// (0x0009dd00) scroll_pane_cp016_ParamLimits

0x9f07,	// (0x0009dd00) scroll_pane_cp016

0x2e11,	// (0x00096c0a) smil2_image_pane_ParamLimits

0x2e11,	// (0x00096c0a) smil2_image_pane

0x2e41,	// (0x00096c3a) smil2_root_pane_ParamLimits

0x2e41,	// (0x00096c3a) smil2_root_pane

0x2e79,	// (0x00096c72) smil2_text_pane_ParamLimits

0x2e79,	// (0x00096c72) smil2_text_pane

0xd6dd,	// (0x000a14d6) bg_list_pane_cp06

0xd6dd,	// (0x000a14d6) grid_radio_pane

0xe058,	// (0x000a1e51) bg_popup_window_pane_cp06

0xeaf6,	// (0x000a28ef) main_fmradio_pane_t1

0xec7d,	// (0x000a2a76) heading_pane_cp04

0xeaf6,	// (0x000a28ef) main_fmradio_pane_t2

0xae23,	// (0x0009ec1c) popup_cale_lunar_info_window_g1

0xeaf6,	// (0x000a28ef) main_fmradio_pane_t3

0xae2b,	// (0x0009ec24) popup_cale_lunar_info_window_g2

0xeaf6,	// (0x000a28ef) main_fmradio_pane_t4

0x0001,

0xeaf6,	// (0x000a28ef) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x000a32ba) popup_cale_lunar_info_window_g

0xf264,	// (0x000a305d) main_fmradio_pane_t

0xd6dd,	// (0x000a14d6) wait_bar_pane_cp03

0xe32e,	// (0x000a2127) cell_fmradio_pane_ParamLimits

0xe32e,	// (0x000a2127) cell_fmradio_pane

0xe33c,	// (0x000a2135) cell_fmradio_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) cell_fmradio_pane_g1

0xd6dd,	// (0x000a14d6) grid_highlight_pane_cp011

0x9f3b,	// (0x0009dd34) poc_content_pane_ParamLimits

0x9f3b,	// (0x0009dd34) poc_content_pane

0x9f4d,	// (0x0009dd46) scroll_pane_cp019

0x2ef9,	// (0x00096cf2) popup_call_poc_act_window_ParamLimits

0x2ef9,	// (0x00096cf2) popup_call_poc_act_window

0x2f1d,	// (0x00096d16) popup_call_poc_inact_window_ParamLimits

0x2f1d,	// (0x00096d16) popup_call_poc_inact_window

0xf49d,	// (0x000a3296) bg_popup_call_poc_act_pane_g

0xad9b,	// (0x0009eb94) bg_popup_call_poc_inact_pane_g1

0xada3,	// (0x0009eb9c) bg_popup_call_poc_inact_pane_g2

0x9f55,	// (0x0009dd4e) popup_call_poc_act_window_g2

0xadab,	// (0x0009eba4) bg_popup_call_poc_inact_pane_g3

0xadb3,	// (0x0009ebac) bg_popup_call_poc_inact_pane_g4

0xadbb,	// (0x0009ebb4) bg_popup_call_poc_inact_pane_g5

0x9f5d,	// (0x0009dd56) popup_call_poc_act_window_t1_ParamLimits

0x9f5d,	// (0x0009dd56) popup_call_poc_act_window_t1

0x9f85,	// (0x0009dd7e) popup_call_poc_act_window_t2_ParamLimits

0x9f85,	// (0x0009dd7e) popup_call_poc_act_window_t2

0x9fad,	// (0x0009dda6) popup_call_poc_act_window_t3_ParamLimits

0x9fad,	// (0x0009dda6) popup_call_poc_act_window_t3

0x9fd5,	// (0x0009ddce) popup_call_poc_act_window_t4_ParamLimits

0x9fd5,	// (0x0009ddce) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x000a3212) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x000a3212) popup_call_poc_act_window_t

0xadc3,	// (0x0009ebbc) bg_popup_call_poc_inact_pane_g6

0xadcb,	// (0x0009ebc4) bg_popup_call_poc_inact_pane_g7

0xadd3,	// (0x0009ebcc) bg_popup_call_poc_inact_pane_g8

0x9fe7,	// (0x0009dde0) popup_call_poc_inact_window_g2

0xaddb,	// (0x0009ebd4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x000a3283) bg_popup_call_poc_inact_pane_g

0x9fef,	// (0x0009dde8) popup_call_poc_inact_window_t1_ParamLimits

0x9fef,	// (0x0009dde8) popup_call_poc_inact_window_t1

0xa004,	// (0x0009ddfd) popup_call_poc_inact_window_t2_ParamLimits

0xa004,	// (0x0009ddfd) popup_call_poc_inact_window_t2

0xa019,	// (0x0009de12) popup_call_poc_inact_window_t3_ParamLimits

0xa019,	// (0x0009de12) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x000a321b) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x000a321b) popup_call_poc_inact_window_t

0xaf1b,	// (0x0009ed14) context_pane_ParamLimits

0x370b,	// (0x00097504) signal_pane_ParamLimits

0xe5f0,	// (0x000a23e9) main_call2_pane

0xaef4,	// (0x0009eced) popup_phob_thumbnail2_window_ParamLimits

0xaef4,	// (0x0009eced) popup_phob_thumbnail2_window

0x9dcc,	// (0x0009dbc5) aid_hotspot_pointer_arrow_pane

0x9dd4,	// (0x0009dbcd) aid_hotspot_pointer_hand_pane

0x3203,	// (0x00096ffc) phob_pre_status_pane_g5

0xe295,	// (0x000a208e) cams_zoom_pane_ParamLimits

0xe295,	// (0x000a208e) image_vga_pane_ParamLimits

0xe33c,	// (0x000a2135) main_camera_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) main_camera_pane_g2_ParamLimits

0xe33c,	// (0x000a2135) main_camera_pane_g3_ParamLimits

0xe33c,	// (0x000a2135) main_camera_pane_g4_ParamLimits

0xe33c,	// (0x000a2135) main_camera_pane_g5_ParamLimits

0xe33c,	// (0x000a2135) main_camera_pane_g6_ParamLimits

0xe33c,	// (0x000a2135) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x000a2f56) main_camera_pane_g_ParamLimits

0xe384,	// (0x000a217d) main_camera_pane_t1_ParamLimits

0xe384,	// (0x000a217d) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x000a2f67) main_camera_pane_t_ParamLimits

0xe2c1,	// (0x000a20ba) bg_popup_preview_window_pane_cp01_ParamLimits

0xe2c1,	// (0x000a20ba) bg_popup_preview_window_pane_cp01

0xa02e,	// (0x0009de27) popup_phob_thumbnail2_window_g1_ParamLimits

0xa02e,	// (0x0009de27) popup_phob_thumbnail2_window_g1

0xe058,	// (0x000a1e51) call2_cli_visual_pane

0x2f51,	// (0x00096d4a) popup_call2_audio_conf_window_ParamLimits

0x2f51,	// (0x00096d4a) popup_call2_audio_conf_window

0x2f71,	// (0x00096d6a) popup_call2_audio_first_window_ParamLimits

0x2f71,	// (0x00096d6a) popup_call2_audio_first_window

0x3007,	// (0x00096e00) popup_call2_audio_in_window_ParamLimits

0x3007,	// (0x00096e00) popup_call2_audio_in_window

0x304f,	// (0x00096e48) popup_call2_audio_out_window_ParamLimits

0x304f,	// (0x00096e48) popup_call2_audio_out_window

0x30b9,	// (0x00096eb2) popup_call2_audio_second_window_ParamLimits

0x30b9,	// (0x00096eb2) popup_call2_audio_second_window

0x311f,	// (0x00096f18) popup_call2_audio_wait_window_ParamLimits

0x311f,	// (0x00096f18) popup_call2_audio_wait_window

0xe058,	// (0x000a1e51) bg_popup_call2_act_pane_cp03

0xe2a3,	// (0x000a209c) list_conf_pane_cp

0xa03a,	// (0x0009de33) popup_call2_audio_conf_window_t1

0xeccd,	// (0x000a2ac6) list_single_graphic_popup_conf2_pane_ParamLimits

0xeccd,	// (0x000a2ac6) list_single_graphic_popup_conf2_pane

0xece0,	// (0x000a2ad9) list_highlight_pane_cp04

0xa048,	// (0x0009de41) list_single_graphic_popup_conf2_pane_g1

0xecf1,	// (0x000a2aea) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x000a3222) list_single_graphic_popup_conf2_pane_g

0xa052,	// (0x0009de4b) list_single_graphic_popup_conf2_pane_t1

0xa060,	// (0x0009de59) bg_popup_call2_act_pane_cp01_ParamLimits

0xa060,	// (0x0009de59) bg_popup_call2_act_pane_cp01

0xa0ea,	// (0x0009dee3) call_type_pane_cp05_ParamLimits

0xa0ea,	// (0x0009dee3) call_type_pane_cp05

0xa13e,	// (0x0009df37) popup_call2_audio_second_window_g1_ParamLimits

0xa13e,	// (0x0009df37) popup_call2_audio_second_window_g1

0xa192,	// (0x0009df8b) popup_call2_audio_second_window_g2_ParamLimits

0xa192,	// (0x0009df8b) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x000a3227) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x000a3227) popup_call2_audio_second_window_g

0xa1f7,	// (0x0009dff0) popup_call2_audio_second_window_t1_ParamLimits

0xa1f7,	// (0x0009dff0) popup_call2_audio_second_window_t1

0xa2b2,	// (0x0009e0ab) popup_call2_audio_second_window_t2_ParamLimits

0xa2b2,	// (0x0009e0ab) popup_call2_audio_second_window_t2

0xa305,	// (0x0009e0fe) popup_call2_audio_second_window_t3_ParamLimits

0xa305,	// (0x0009e0fe) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x000a322e) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x000a322e) popup_call2_audio_second_window_t

0xe058,	// (0x000a1e51) bg_popup_call2_in_pane_cp02

0xe062,	// (0x000a1e5b) call_type_pane_cp04

0x3159,	// (0x00096f52) popup_call2_audio_wait_window_g1

0x3161,	// (0x00096f5a) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x000a3237) popup_call2_audio_wait_window_g

0xe07a,	// (0x000a1e73) popup_call2_audio_wait_window_t3

0xa3f8,	// (0x0009e1f1) bg_popup_call2_act_pane_ParamLimits

0xa3f8,	// (0x0009e1f1) bg_popup_call2_act_pane

0xa4b8,	// (0x0009e2b1) call_type_pane_cp03_ParamLimits

0xa4b8,	// (0x0009e2b1) call_type_pane_cp03

0xa51c,	// (0x0009e315) popup_call2_audio_first_window_g1_ParamLimits

0xa51c,	// (0x0009e315) popup_call2_audio_first_window_g1

0xa58c,	// (0x0009e385) popup_call2_audio_first_window_g2_ParamLimits

0xa58c,	// (0x0009e385) popup_call2_audio_first_window_g2

0xa5f0,	// (0x0009e3e9) popup_call2_audio_first_window_g3_ParamLimits

0xa5f0,	// (0x0009e3e9) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x000a323c) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x000a323c) popup_call2_audio_first_window_g

0xa678,	// (0x0009e471) popup_call2_audio_first_window_t1_ParamLimits

0xa678,	// (0x0009e471) popup_call2_audio_first_window_t1

0xa77b,	// (0x0009e574) popup_call2_audio_first_window_t4_ParamLimits

0xa77b,	// (0x0009e574) popup_call2_audio_first_window_t4

0xa85e,	// (0x0009e657) popup_call2_audio_first_window_t5_ParamLimits

0xa85e,	// (0x0009e657) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x000a3247) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x000a3247) popup_call2_audio_first_window_t

0xe2b9,	// (0x000a20b2) bg_popup_call2_act_pane_g1

0xae33,	// (0x0009ec2c) popup_cale_lunar_info_window_t1

0xae41,	// (0x0009ec3a) popup_cale_lunar_info_window_t2

0xae4f,	// (0x0009ec48) popup_cale_lunar_info_window_t3

0xe058,	// (0x000a1e51) bg_popup_call2_bubble_pane

0xa95f,	// (0x0009e758) bg_popup_call2_in_pane_cp01_ParamLimits

0xa95f,	// (0x0009e758) bg_popup_call2_in_pane_cp01

0xdd34,	// (0x000a1b2d) call_type_pane_cp02

0x3169,	// (0x00096f62) popup_call2_audio_out_window_g1_ParamLimits

0x3169,	// (0x00096f62) popup_call2_audio_out_window_g1

0xa9a7,	// (0x0009e7a0) popup_call2_audio_out_window_g2_ParamLimits

0xa9a7,	// (0x0009e7a0) popup_call2_audio_out_window_g2

0x3195,	// (0x00096f8e) popup_call2_audio_out_window_g3_ParamLimits

0x3195,	// (0x00096f8e) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x000a3250) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x000a3250) popup_call2_audio_out_window_g

0xa9de,	// (0x0009e7d7) popup_call2_audio_out_window_t1_ParamLimits

0xa9de,	// (0x0009e7d7) popup_call2_audio_out_window_t1

0xaa3d,	// (0x0009e836) popup_call2_audio_out_window_t2_ParamLimits

0xaa3d,	// (0x0009e836) popup_call2_audio_out_window_t2

0xaa91,	// (0x0009e88a) popup_call2_audio_out_window_t3_ParamLimits

0xaa91,	// (0x0009e88a) popup_call2_audio_out_window_t3

0xaaa7,	// (0x0009e8a0) popup_call2_audio_out_window_t4_ParamLimits

0xaaa7,	// (0x0009e8a0) popup_call2_audio_out_window_t4

0xaabd,	// (0x0009e8b6) popup_call2_audio_out_window_t5_ParamLimits

0xaabd,	// (0x0009e8b6) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x000a3259) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x000a3259) popup_call2_audio_out_window_t

0xab21,	// (0x0009e91a) bg_popup_call2_in_pane_ParamLimits

0xab21,	// (0x0009e91a) bg_popup_call2_in_pane

0xab7d,	// (0x0009e976) popup_call2_audio_in_window_g1_ParamLimits

0xab7d,	// (0x0009e976) popup_call2_audio_in_window_g1

0xabb5,	// (0x0009e9ae) popup_call2_audio_in_window_g2_ParamLimits

0xabb5,	// (0x0009e9ae) popup_call2_audio_in_window_g2

0xabed,	// (0x0009e9e6) popup_call2_audio_in_window_g3_ParamLimits

0xabed,	// (0x0009e9e6) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x000a3266) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x000a3266) popup_call2_audio_in_window_g

0xac45,	// (0x0009ea3e) popup_call2_audio_in_window_t1_ParamLimits

0xac45,	// (0x0009ea3e) popup_call2_audio_in_window_t1

0xacc5,	// (0x0009eabe) popup_call2_audio_in_window_t2_ParamLimits

0xacc5,	// (0x0009eabe) popup_call2_audio_in_window_t2

0xad45,	// (0x0009eb3e) popup_call2_audio_in_window_t3_ParamLimits

0xad45,	// (0x0009eb3e) popup_call2_audio_in_window_t3

0xad5f,	// (0x0009eb58) popup_call2_audio_in_window_t4_ParamLimits

0xad5f,	// (0x0009eb58) popup_call2_audio_in_window_t4

0xad71,	// (0x0009eb6a) popup_call2_audio_in_window_t5_ParamLimits

0xad71,	// (0x0009eb6a) popup_call2_audio_in_window_t5

0xad86,	// (0x0009eb7f) popup_call2_audio_in_window_t6_ParamLimits

0xad86,	// (0x0009eb7f) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x000a326f) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x000a326f) popup_call2_audio_in_window_t

0xe2b9,	// (0x000a20b2) bg_popup_call2_in_pane_g1

0xae5d,	// (0x0009ec56) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x000a32bf) popup_cale_lunar_info_window_t

0xe2c1,	// (0x000a20ba) bg_popup_call2_rect_pane_ParamLimits

0xe2c1,	// (0x000a20ba) bg_popup_call2_rect_pane

0xe058,	// (0x000a1e51) call2_cli_visual_graphic_pane

0xe058,	// (0x000a1e51) call2_cli_visual_text_pane

0xafb6,	// (0x0009edaf) smil_status_volume_pane_g3

0x0002,

0xe2d9,	// (0x000a20d2) call2_cli_visual_graphic_pane_g1

0xe2d9,	// (0x000a20d2) call2_cli_visual_graphic_pane_g2

0xe2d9,	// (0x000a20d2) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x000a327c) call2_cli_visual_graphic_pane_g

0xe500,	// (0x000a22f9) bg_popup_call2_rect_pane_g1

0xe4f8,	// (0x000a22f1) bg_popup_call2_rect_pane_g2

0xe4f0,	// (0x000a22e9) bg_popup_call2_rect_pane_g3

0xe510,	// (0x000a2309) bg_popup_call2_rect_pane_g4

0xe508,	// (0x000a2301) bg_popup_call2_rect_pane_g5

0xe518,	// (0x000a2311) bg_popup_call2_rect_pane_g6

0xe520,	// (0x000a2319) bg_popup_call2_rect_pane_g7

0xe530,	// (0x000a2329) bg_popup_call2_rect_pane_g8

0xe528,	// (0x000a2321) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x000a300c) bg_popup_call2_rect_pane_g

0xad9b,	// (0x0009eb94) bg_popup_call2_bubble_pane_g1

0xada3,	// (0x0009eb9c) bg_popup_call2_bubble_pane_g2

0xadab,	// (0x0009eba4) bg_popup_call2_bubble_pane_g3

0xadb3,	// (0x0009ebac) bg_popup_call2_bubble_pane_g4

0xadbb,	// (0x0009ebb4) bg_popup_call2_bubble_pane_g5

0xadc3,	// (0x0009ebbc) bg_popup_call2_bubble_pane_g6

0xadcb,	// (0x0009ebc4) bg_popup_call2_bubble_pane_g7

0xadd3,	// (0x0009ebcc) bg_popup_call2_bubble_pane_g8

0xaddb,	// (0x0009ebd4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x000a3283) bg_popup_call2_bubble_pane_g

0x0ddb,	// (0x00094bd4) aid_cale_week_size_cell_pane

0x1381,	// (0x0009517a) aid_cams_cif_uncrop_pane_ParamLimits

0x1381,	// (0x0009517a) aid_cams_cif_uncrop_pane

0xe295,	// (0x000a208e) aid_cams_size_cell_ParamLimits

0xe295,	// (0x000a208e) aid_cams_size_cell

0xe295,	// (0x000a208e) grid_cams_pane_ParamLimits

0xe295,	// (0x000a208e) linegrid_cams_pane_ParamLimits

0x159f,	// (0x00095398) call_video_pane_t1

0x15bd,	// (0x000953b6) call_video_pane_t2

0x0001,

0xf1ba,	// (0x000a2fb3) call_video_pane_t

0x19eb,	// (0x000957e4) aid_cale_month_size_cell_pane_ParamLimits

0x19eb,	// (0x000957e4) aid_cale_month_size_cell_pane

0xf50a,	// (0x000a3303) smil_status_volume_pane_g

0xafc3,	// (0x0009edbc) volume_smil_pane_ParamLimits

0x9ab7,	// (0x0009d8b0) aid_popup2_width_pane

0x0d52,	// (0x00094b4b) cell_qdial_pane_g4_ParamLimits

0x0d52,	// (0x00094b4b) cell_qdial_pane_g4

0x2761,	// (0x0009655a) aid_blid_cardinal_pane_ParamLimits

0x276d,	// (0x00096566) aid_blid_destination_pane_ParamLimits

0x276d,	// (0x00096566) aid_blid_destination_pane

0xe2c1,	// (0x000a20ba) bg_popup_call_poc_act_pane_ParamLimits

0xe2c1,	// (0x000a20ba) bg_popup_call_poc_act_pane

0xe2c1,	// (0x000a20ba) bg_popup_call_poc_inact_pane_ParamLimits

0xe2c1,	// (0x000a20ba) bg_popup_call_poc_inact_pane

0xade3,	// (0x0009ebdc) bg_popup_call_poc_act_pane_g1

0xadeb,	// (0x0009ebe4) bg_popup_call_poc_act_pane_g2

0xadf3,	// (0x0009ebec) bg_popup_call_poc_act_pane_g3

0xadb3,	// (0x0009ebac) bg_popup_call_poc_act_pane_g4

0xadbb,	// (0x0009ebb4) bg_popup_call_poc_act_pane_g5

0xadfb,	// (0x0009ebf4) bg_popup_call_poc_act_pane_g6

0xadcb,	// (0x0009ebc4) bg_popup_call_poc_act_pane_g7

0xae03,	// (0x0009ebfc) bg_popup_call_poc_act_pane_g8

0xe058,	// (0x000a1e51) main_usb_pane

0xaecf,	// (0x0009ecc8) popup_cale_lunar_info_window

0x1897,	// (0x00095690) im_reading_pane_t1_ParamLimits

0xe6b1,	// (0x000a24aa) list_im_pane_ParamLimits

0xe6c2,	// (0x000a24bb) scroll_pane_cp07_ParamLimits

0xe058,	// (0x000a1e51) grid_highlight_pane_cp012

0xe2c1,	// (0x000a20ba) mup_scale_pane_ParamLimits

0xe33c,	// (0x000a2135) main_usb_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) main_usb_pane_g1

0xe33c,	// (0x000a2135) main_usb_pane_g2_ParamLimits

0xe33c,	// (0x000a2135) main_usb_pane_g2

0x0001,

0xf199,	// (0x000a2f92) main_usb_pane_g_ParamLimits

0xf199,	// (0x000a2f92) main_usb_pane_g

0xe384,	// (0x000a217d) main_usb_pane_t1_ParamLimits

0xe384,	// (0x000a217d) main_usb_pane_t1

0xe384,	// (0x000a217d) main_usb_pane_t2_ParamLimits

0xe384,	// (0x000a217d) main_usb_pane_t2

0xe384,	// (0x000a217d) main_usb_pane_t3_ParamLimits

0xe384,	// (0x000a217d) main_usb_pane_t3

0xe384,	// (0x000a217d) main_usb_pane_t4_ParamLimits

0xe384,	// (0x000a217d) main_usb_pane_t4

0xe384,	// (0x000a217d) main_usb_pane_t5_ParamLimits

0xe384,	// (0x000a217d) main_usb_pane_t5

0xe384,	// (0x000a217d) main_usb_pane_t6_ParamLimits

0xe384,	// (0x000a217d) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x000a32ad) main_usb_pane_t_ParamLimits

0x2710,	// (0x00096509) aid_text_placing

0x2719,	// (0x00096512) main_location2_pane_t1_ParamLimits

0x272b,	// (0x00096524) main_location2_pane_t2_ParamLimits

0x273d,	// (0x00096536) main_location2_pane_t3_ParamLimits

0x274f,	// (0x00096548) main_location2_pane_t4_ParamLimits

0x274f,	// (0x00096548) main_location2_pane_t4

0xf2f6,	// (0x000a30ef) main_location2_pane_t_ParamLimits

0xe2ef,	// (0x000a20e8) find_pinb_pane_g2_ParamLimits

0xe2ef,	// (0x000a20e8) find_pinb_pane_g2

0x0001,

0xf072,	// (0x000a2e6b) find_pinb_pane_g_ParamLimits

0xf072,	// (0x000a2e6b) find_pinb_pane_g

0xe2fb,	// (0x000a20f4) find_pinb_pane_t1_ParamLimits

0xe30d,	// (0x000a2106) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x000a2e70) find_pinb_pane_t_ParamLimits

0xe058,	// (0x000a1e51) main_call3_pane

0x1ed6,	// (0x00095ccf) cale_month_day_heading_pane_t1_ParamLimits

0x1f5c,	// (0x00095d55) cale_month_day_heading_pane_t2_ParamLimits

0x1fd5,	// (0x00095dce) cale_month_day_heading_pane_t3_ParamLimits

0x204e,	// (0x00095e47) cale_month_day_heading_pane_t4_ParamLimits

0x20cf,	// (0x00095ec8) cale_month_day_heading_pane_t5_ParamLimits

0x2158,	// (0x00095f51) cale_month_day_heading_pane_t6_ParamLimits

0x21e1,	// (0x00095fda) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x000a2feb) cale_month_day_heading_pane_t_ParamLimits

0xe915,	// (0x000a270e) smil_status_volume_pane

0x2c97,	// (0x00096a90) postcard_address_pane_ParamLimits

0x2c97,	// (0x00096a90) postcard_address_pane

0x2ca9,	// (0x00096aa2) postcard_message_pane_ParamLimits

0x2ca9,	// (0x00096aa2) postcard_message_pane

0x31c1,	// (0x00096fba) call2_cli_visual_pane_t1_ParamLimits

0x31c1,	// (0x00096fba) call2_cli_visual_pane_t1

0xaff0,	// (0x0009ede9) postcard_message_pane_t1_ParamLimits

0xaff0,	// (0x0009ede9) postcard_message_pane_t1

0xafd8,	// (0x0009edd1) postcard_address_pane_t1_ParamLimits

0xafd8,	// (0x0009edd1) postcard_address_pane_t1

0x38bd,	// (0x000976b6) popup_call3_audio_in_window_ParamLimits

0x38bd,	// (0x000976b6) popup_call3_audio_in_window

0x3748,	// (0x00097541) bg_popup_call3_in_pane_ParamLimits

0x3748,	// (0x00097541) bg_popup_call3_in_pane

0x37be,	// (0x000975b7) popup_call3_audio_in_window_g1_ParamLimits

0x37be,	// (0x000975b7) popup_call3_audio_in_window_g1

0x37de,	// (0x000975d7) popup_call3_audio_in_window_g2_ParamLimits

0x37de,	// (0x000975d7) popup_call3_audio_in_window_g2

0x37fe,	// (0x000975f7) popup_call3_audio_in_window_g3_ParamLimits

0x37fe,	// (0x000975f7) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x000a330a) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x000a330a) popup_call3_audio_in_window_g

0x382f,	// (0x00097628) popup_call3_audio_in_window_t1_ParamLimits

0x382f,	// (0x00097628) popup_call3_audio_in_window_t1

0x386d,	// (0x00097666) popup_call3_audio_in_window_t2_ParamLimits

0x386d,	// (0x00097666) popup_call3_audio_in_window_t2

0x38ab,	// (0x000976a4) popup_call3_audio_in_window_t3_ParamLimits

0x38ab,	// (0x000976a4) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x000a3313) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x000a3313) popup_call3_audio_in_window_t

0xe5f0,	// (0x000a23e9) bg_popup_call3_rect_pane

0xe500,	// (0x000a22f9) bg_popup_call3_rect_pane_g1

0xe4f8,	// (0x000a22f1) bg_popup_call3_rect_pane_g2

0xe4f0,	// (0x000a22e9) bg_popup_call3_rect_pane_g3

0xe510,	// (0x000a2309) bg_popup_call3_rect_pane_g4

0xe508,	// (0x000a2301) bg_popup_call3_rect_pane_g5

0xe518,	// (0x000a2311) bg_popup_call3_rect_pane_g6

0xe520,	// (0x000a2319) bg_popup_call3_rect_pane_g7

0xd6dd,	// (0x000a14d6) mup_visualizer_osc_pane

0xd6dd,	// (0x000a14d6) mup_visualizer_spec_pane

0x3778,	// (0x00097571) call3_video_qcif_pane_ParamLimits

0x3778,	// (0x00097571) call3_video_qcif_pane

0x378b,	// (0x00097584) call3_video_qcif_uncrop_pane_ParamLimits

0x378b,	// (0x00097584) call3_video_qcif_uncrop_pane

0x3799,	// (0x00097592) call3_video_subqcif_pane_ParamLimits

0x3799,	// (0x00097592) call3_video_subqcif_pane

0x37ad,	// (0x000975a6) call3_video_subqcif_uncrop_pane_ParamLimits

0x37ad,	// (0x000975a6) call3_video_subqcif_uncrop_pane

0x381e,	// (0x00097617) popup_call3_audio_in_window_g4_ParamLimits

0x381e,	// (0x00097617) popup_call3_audio_in_window_g4

0xd6dd,	// (0x000a14d6) mup_spec_half_pane

0xd6dd,	// (0x000a14d6) mup_spec_half_pane_cp

0xd6dd,	// (0x000a14d6) mup_osc_middle_pane

0xe37a,	// (0x000a2173) mup_visualizer_osc_pane_g1

0xaf69,	// (0x0009ed62) mup_spec_bar_pane_ParamLimits

0xaf69,	// (0x0009ed62) mup_spec_bar_pane

0xe37a,	// (0x000a2173) mup_spec_bar_pane_g1

0xe37a,	// (0x000a2173) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x000a2e85) mup_spec_bar_pane_g

0x0ddb,	// (0x00094bd4) aid_cale_week_size_cell_pane_ParamLimits

0x0df5,	// (0x00094bee) bg_cale_heading_pane_ParamLimits

0xe552,	// (0x000a234b) bg_cale_pane_cp01_ParamLimits

0x0e0d,	// (0x00094c06) cale_week_corner_pane_ParamLimits

0x0e2c,	// (0x00094c25) cale_week_day_heading_pane_ParamLimits

0x0e49,	// (0x00094c42) cale_week_scroll_pane_g1_ParamLimits

0x0e5c,	// (0x00094c55) cale_week_scroll_pane_g2_ParamLimits

0x0e74,	// (0x00094c6d) cale_week_scroll_pane_g3_ParamLimits

0x0e8c,	// (0x00094c85) cale_week_scroll_pane_g4_ParamLimits

0x0ea4,	// (0x00094c9d) cale_week_scroll_pane_g5_ParamLimits

0x0ec4,	// (0x00094cbd) cale_week_scroll_pane_g6_ParamLimits

0x0ee4,	// (0x00094cdd) cale_week_scroll_pane_g7_ParamLimits

0x0f04,	// (0x00094cfd) cale_week_scroll_pane_g8_ParamLimits

0x0f28,	// (0x00094d21) cale_week_scroll_pane_g9_ParamLimits

0x0f40,	// (0x00094d39) cale_week_scroll_pane_g10_ParamLimits

0x0f58,	// (0x00094d51) cale_week_scroll_pane_g11_ParamLimits

0x0f70,	// (0x00094d69) cale_week_scroll_pane_g12_ParamLimits

0x0f88,	// (0x00094d81) cale_week_scroll_pane_g13_ParamLimits

0x0f88,	// (0x00094d81) cale_week_scroll_pane_g14_ParamLimits

0x0f88,	// (0x00094d81) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x000a2efc) cale_week_scroll_pane_g_ParamLimits

0x0fc4,	// (0x00094dbd) cale_week_time_pane_ParamLimits

0x0fe8,	// (0x00094de1) grid_cale_week_pane_ParamLimits

0xe56f,	// (0x000a2368) listscroll_cale_week_pane_t1

0xe581,	// (0x000a237a) scroll_pane_cp08_ParamLimits

0x1a4b,	// (0x00095844) cale_month_corner_pane_ParamLimits

0xe8eb,	// (0x000a26e4) cale_month_pane_t1

0x1e69,	// (0x00095c62) cale_month_week_pane_ParamLimits

0x2590,	// (0x00096389) popup_call_status_window_g1_ParamLimits

0x25a4,	// (0x0009639d) popup_call_status_window_g2_ParamLimits

0x25b8,	// (0x000963b1) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x000a3076) popup_call_status_window_g_ParamLimits

0xec6d,	// (0x000a2a66) aid_call2_pane

0x2ab3,	// (0x000968ac) msg_header_pane_g1

0x2c97,	// (0x00096a90) postcard_address2_pane_ParamLimits

0x2c97,	// (0x00096a90) postcard_address2_pane

0x2ca9,	// (0x00096aa2) postcard_message2_pane_ParamLimits

0x2ca9,	// (0x00096aa2) postcard_message2_pane

0x3719,	// (0x00097512) message2_row_pane_ParamLimits

0x3719,	// (0x00097512) message2_row_pane

0x3735,	// (0x0009752e) address2_row_pane_ParamLimits

0x3735,	// (0x0009752e) address2_row_pane

0xaf36,	// (0x0009ed2f) postcard_message2_row_pane_g1

0xaf3e,	// (0x0009ed37) postcard_message2_row_pane_t1

0xaf36,	// (0x0009ed2f) address2_row_pane_g1

0xaf3e,	// (0x0009ed37) address2_row_pane_t1

0x1318,	// (0x00095111) aid_size_cell_vorec

0xe058,	// (0x000a1e51) main_rss_pane

0xaf4c,	// (0x0009ed45) rss_list_single_pane_ParamLimits

0xaf4c,	// (0x0009ed45) rss_list_single_pane

0xaf5a,	// (0x0009ed53) rss_list_single_pane_t1

0xaf5a,	// (0x0009ed53) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x000a32fe) rss_list_single_pane_t

0xe058,	// (0x000a1e51) main_camera2_pane

0xe058,	// (0x000a1e51) main_video2_pane

0xb00c,	// (0x0009ee05) cams_zoom_pane_cp2_ParamLimits

0xb00c,	// (0x0009ee05) cams_zoom_pane_cp2

0xb00c,	// (0x0009ee05) image2_vga_pane_ParamLimits

0xb00c,	// (0x0009ee05) image2_vga_pane

0xb01a,	// (0x0009ee13) main_camera2_pane_g1_ParamLimits

0xb01a,	// (0x0009ee13) main_camera2_pane_g1

0xb01a,	// (0x0009ee13) main_camera2_pane_g2_ParamLimits

0xb01a,	// (0x0009ee13) main_camera2_pane_g2

0xb01a,	// (0x0009ee13) main_camera2_pane_g3_ParamLimits

0xb01a,	// (0x0009ee13) main_camera2_pane_g3

0xb01a,	// (0x0009ee13) main_camera2_pane_g4_ParamLimits

0xb01a,	// (0x0009ee13) main_camera2_pane_g4

0xb01a,	// (0x0009ee13) main_camera2_pane_g5_ParamLimits

0xb01a,	// (0x0009ee13) main_camera2_pane_g5

0xb01a,	// (0x0009ee13) main_camera2_pane_g6_ParamLimits

0xb01a,	// (0x0009ee13) main_camera2_pane_g6

0xb01a,	// (0x0009ee13) main_camera2_pane_g7_ParamLimits

0xb01a,	// (0x0009ee13) main_camera2_pane_g7

0xb01a,	// (0x0009ee13) main_camera2_pane_g8_ParamLimits

0xb01a,	// (0x0009ee13) main_camera2_pane_g8

0x0008,

0xf521,	// (0x000a331a) main_camera2_pane_g_ParamLimits

0xf521,	// (0x000a331a) main_camera2_pane_g

0x38df,	// (0x000976d8) main_camera2_pane_t1_ParamLimits

0x38df,	// (0x000976d8) main_camera2_pane_t1

0x38df,	// (0x000976d8) main_camera2_pane_t2_ParamLimits

0x38df,	// (0x000976d8) main_camera2_pane_t2

0x38df,	// (0x000976d8) main_camera2_pane_t3_ParamLimits

0x38df,	// (0x000976d8) main_camera2_pane_t3

0x38df,	// (0x000976d8) main_camera2_pane_t4_ParamLimits

0x38df,	// (0x000976d8) main_camera2_pane_t4

0x0006,

0xf534,	// (0x000a332d) main_camera2_pane_t_ParamLimits

0xf534,	// (0x000a332d) main_camera2_pane_t

0xb05e,	// (0x0009ee57) cams_zoom_pane_cp4_ParamLimits

0xb05e,	// (0x0009ee57) cams_zoom_pane_cp4

0x38f3,	// (0x000976ec) image2_cif_pane_ParamLimits

0x38f3,	// (0x000976ec) image2_cif_pane

0x9b1c,	// (0x0009d915) image2_subqcif_pane_ParamLimits

0x9b1c,	// (0x0009d915) image2_subqcif_pane

0x3901,	// (0x000976fa) main_video2_pane_g1_ParamLimits

0x3901,	// (0x000976fa) main_video2_pane_g1

0x3901,	// (0x000976fa) main_video2_pane_g2_ParamLimits

0x3901,	// (0x000976fa) main_video2_pane_g2

0x3901,	// (0x000976fa) main_video2_pane_g3_ParamLimits

0x3901,	// (0x000976fa) main_video2_pane_g3

0x3901,	// (0x000976fa) main_video2_pane_g4_ParamLimits

0x3901,	// (0x000976fa) main_video2_pane_g4

0x3901,	// (0x000976fa) main_video2_pane_g5_ParamLimits

0x3901,	// (0x000976fa) main_video2_pane_g5

0x3901,	// (0x000976fa) main_video2_pane_g6_ParamLimits

0x3901,	// (0x000976fa) main_video2_pane_g6

0x0005,

0xf543,	// (0x000a333c) main_video2_pane_g_ParamLimits

0xf543,	// (0x000a333c) main_video2_pane_g

0x390f,	// (0x00097708) main_video2_pane_t1_ParamLimits

0x390f,	// (0x00097708) main_video2_pane_t1

0x390f,	// (0x00097708) main_video2_pane_t2_ParamLimits

0x390f,	// (0x00097708) main_video2_pane_t2

0x390f,	// (0x00097708) main_video2_pane_t3_ParamLimits

0x390f,	// (0x00097708) main_video2_pane_t3

0x0002,

0xf550,	// (0x000a3349) main_video2_pane_t_ParamLimits

0xf550,	// (0x000a3349) main_video2_pane_t

0x3265,	// (0x0009705e) call_muted_g2

0x0001,

0xf4f7,	// (0x000a32f0) call_muted_g

0xe058,	// (0x000a1e51) main_mup2_pane

0x9cdf,	// (0x0009dad8) main_mup2_pane_g1_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup2_pane_g1

0x9cdf,	// (0x0009dad8) main_mup2_pane_g2_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup2_pane_g2

0xb156,	// (0x0009ef4f) main_mup_pane_g13_cp1

0x9b2a,	// (0x0009d923) mup_volume_pane_cp1

0x9cdf,	// (0x0009dad8) main_mup2_pane_g4_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup2_pane_g4

0x9cdf,	// (0x0009dad8) main_mup2_pane_g5_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup2_pane_g5

0x9cdf,	// (0x0009dad8) main_mup2_pane_g6_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup2_pane_g6

0x9cdf,	// (0x0009dad8) main_mup2_pane_g7_ParamLimits

0x9cdf,	// (0x0009dad8) main_mup2_pane_g7

0x0006,

0xf557,	// (0x000a3350) main_mup2_pane_g_ParamLimits

0xf557,	// (0x000a3350) main_mup2_pane_g

0x9ced,	// (0x0009dae6) main_mup2_pane_t1_ParamLimits

0x9ced,	// (0x0009dae6) main_mup2_pane_t1

0x9ced,	// (0x0009dae6) main_mup2_pane_t2_ParamLimits

0x9ced,	// (0x0009dae6) main_mup2_pane_t2

0x9ced,	// (0x0009dae6) main_mup2_pane_t3_ParamLimits

0x9ced,	// (0x0009dae6) main_mup2_pane_t3

0x9ced,	// (0x0009dae6) main_mup2_pane_t4_ParamLimits

0x9ced,	// (0x0009dae6) main_mup2_pane_t4

0x9ced,	// (0x0009dae6) main_mup2_pane_t5_ParamLimits

0x9ced,	// (0x0009dae6) main_mup2_pane_t5

0x9ced,	// (0x0009dae6) main_mup2_pane_t6_ParamLimits

0x9ced,	// (0x0009dae6) main_mup2_pane_t6

0x0005,

0xf566,	// (0x000a335f) main_mup2_pane_t_ParamLimits

0xf566,	// (0x000a335f) main_mup2_pane_t

0x9d01,	// (0x0009dafa) mup2_visualizer_pane_ParamLimits

0x9d01,	// (0x0009dafa) mup2_visualizer_pane

0x9d01,	// (0x0009dafa) mup_progress_pane_cp_ParamLimits

0x9d01,	// (0x0009dafa) mup_progress_pane_cp

0xb137,	// (0x0009ef30) mup_volume_pane_cp_ParamLimits

0xb137,	// (0x0009ef30) mup_volume_pane_cp

0xe33c,	// (0x000a2135) mup2_visualizer_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) mup2_visualizer_pane_g1

0xe34a,	// (0x000a2143) mup2_visualizer_pane_g2_ParamLimits

0xe34a,	// (0x000a2143) mup2_visualizer_pane_g2

0xe34a,	// (0x000a2143) mup2_visualizer_pane_g3_ParamLimits

0xe34a,	// (0x000a2143) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x000a2e75) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x000a2e75) mup2_visualizer_pane_g

0xd6dd,	// (0x000a14d6) aid_size_cell_fmradio

0x3417,	// (0x00097210) aid_height_parent_landcape

0xe740,	// (0x000a2539) wml_content_pane_cp

0xe748,	// (0x000a2541) wml_tabs_pane

0xe751,	// (0x000a254a) popup_wml_miniature_window

0xe759,	// (0x000a2552) scroll_pane_cp021

0xe76d,	// (0x000a2566) wml_content_pane_comp8

0xe058,	// (0x000a1e51) bg_popup_sub_pane_cp05

0xb082,	// (0x0009ee7b) popup_wml_miniature_window_g1

0xb08a,	// (0x0009ee83) wml_miniature_view_pane

0x3923,	// (0x0009771c) aid_size_wml_view

0x392b,	// (0x00097724) wml_miniature_view_pane_g1

0x3934,	// (0x0009772d) wml_miniature_view_pane_g2

0x393d,	// (0x00097736) wml_miniature_view_pane_g3

0x3945,	// (0x0009773e) wml_miniature_view_pane_g4

0x394d,	// (0x00097746) wml_miniature_view_pane_g5

0x3955,	// (0x0009774e) wml_miniature_view_pane_g6

0x395d,	// (0x00097756) wml_miniature_view_pane_g7

0x3965,	// (0x0009775e) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x000a336c) wml_miniature_view_pane_g

0xb092,	// (0x0009ee8b) background_graphic_ParamLimits

0xb092,	// (0x0009ee8b) background_graphic

0xb09e,	// (0x0009ee97) wml_tabs_2_pane

0xb0a7,	// (0x0009eea0) wml_tabs_3_pane_ParamLimits

0xb0a7,	// (0x0009eea0) wml_tabs_3_pane

0xb0b9,	// (0x0009eeb2) wml_tabs_4_pane_ParamLimits

0xb0b9,	// (0x0009eeb2) wml_tabs_4_pane

0xb0cf,	// (0x0009eec8) wml_tabs_5_pane_ParamLimits

0xb0cf,	// (0x0009eec8) wml_tabs_5_pane

0xb0e9,	// (0x0009eee2) wml_tabs_pane_g2_ParamLimits

0xb0e9,	// (0x0009eee2) wml_tabs_pane_g2

0xb0fe,	// (0x0009eef7) wml_tabs_pane_g3_ParamLimits

0xb0fe,	// (0x0009eef7) wml_tabs_pane_g3

0xb113,	// (0x0009ef0c) wml_tabs_2_active_pane_ParamLimits

0xb113,	// (0x0009ef0c) wml_tabs_2_active_pane

0xb113,	// (0x0009ef0c) wml_tabs_2_passive_pane_ParamLimits

0xb113,	// (0x0009ef0c) wml_tabs_2_passive_pane

0x396d,	// (0x00097766) wml_tabs_3_active_pane_cp_ParamLimits

0x396d,	// (0x00097766) wml_tabs_3_active_pane_cp

0x3982,	// (0x0009777b) wml_tabs_3_passive_pane_ParamLimits

0x3982,	// (0x0009777b) wml_tabs_3_passive_pane

0x3995,	// (0x0009778e) wml_tabs_3_passive_pane_cp_ParamLimits

0x3995,	// (0x0009778e) wml_tabs_3_passive_pane_cp

0x39ac,	// (0x000977a5) tabs_4_active_pane

0x39b4,	// (0x000977ad) tabs_4_passive_pane

0x39be,	// (0x000977b7) tabs_4_passive_pane_cp

0x39c6,	// (0x000977bf) tabs_4_passive_pane_cp2

0x31db,	// (0x00096fd4) aid_height_text

0x9d01,	// (0x0009dafa) mup_volume_cont_pane_ParamLimits

0x9d01,	// (0x0009dafa) mup_volume_cont_pane

0xd6dd,	// (0x000a14d6) aid_size_cell_pinb

0xd6dd,	// (0x000a14d6) aid_size_list_pinb

0x9d01,	// (0x0009dafa) mup2_volume_cont_pane_ParamLimits

0x9d01,	// (0x0009dafa) mup2_volume_cont_pane

0xb121,	// (0x0009ef1a) mup2_volume_cont_pane_g1_ParamLimits

0xb121,	// (0x0009ef1a) mup2_volume_cont_pane_g1

0x0899,	// (0x00094692) aid_size_cell_touch_ParamLimits

0x0899,	// (0x00094692) aid_size_cell_touch

0x0ac5,	// (0x000948be) touch_pane_ParamLimits

0x0ac5,	// (0x000948be) touch_pane

0x9b2a,	// (0x0009d923) main_rss2_pane

0xb160,	// (0x0009ef59) listscroll_rss2_pane

0xb169,	// (0x0009ef62) rss2_navigation_pane

0xb171,	// (0x0009ef6a) list_rss2_pane

0xeda3,	// (0x000a2b9c) scroll_pane_cp22

0xb179,	// (0x0009ef72) rss2_navigation_pane_g1

0xb182,	// (0x0009ef7b) rss2_navigation_pane_g2

0xb18a,	// (0x0009ef83) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x000a337d) rss2_navigation_pane_g

0xb192,	// (0x0009ef8b) rss2_navigation_pane_t1

0x39d0,	// (0x000977c9) rss2_list_single_pane_ParamLimits

0x39d0,	// (0x000977c9) rss2_list_single_pane

0xb1a0,	// (0x0009ef99) rss2_list_single_pane_t2

0xb1ae,	// (0x0009efa7) rss2_list_single_pane_t3_ParamLimits

0xb1ae,	// (0x0009efa7) rss2_list_single_pane_t3

0xb1cb,	// (0x0009efc4) rss2_list_single_pane_t4

0x246b,	// (0x00096264) smil_status_pane_g1

0x9b1c,	// (0x0009d915) main_image2_pane_ParamLimits

0x9b1c,	// (0x0009d915) main_image2_pane

0xb01a,	// (0x0009ee13) main_camera2_pane_g9_ParamLimits

0xb01a,	// (0x0009ee13) main_camera2_pane_g9

0x38df,	// (0x000976d8) main_camera2_pane_t5_ParamLimits

0x38df,	// (0x000976d8) main_camera2_pane_t5

0xb028,	// (0x0009ee21) main_camera2_pane_t6_ParamLimits

0xb028,	// (0x0009ee21) main_camera2_pane_t6

0x39e5,	// (0x000977de) main_image2_pane_g1_ParamLimits

0x39e5,	// (0x000977de) main_image2_pane_g1

0x2eaf,	// (0x00096ca8) smil2_video_pane_ParamLimits

0x2eaf,	// (0x00096ca8) smil2_video_pane

0x9ad3,	// (0x0009d8cc) aid_zoom_text_primary_cp

0x9b12,	// (0x0009d90b) popup_preview_fixed_window

0xe6a9,	// (0x000a24a2) im_reading_pane_g1

0x38d1,	// (0x000976ca) cams2_bc_adjust_pane_cp_ParamLimits

0x38d1,	// (0x000976ca) cams2_bc_adjust_pane_cp

0xb050,	// (0x0009ee49) cams2_bc_adjust_pane_ParamLimits

0xb050,	// (0x0009ee49) cams2_bc_adjust_pane

0xb156,	// (0x0009ef4f) cams2_bc_adjust_pane_g1

0x9b2a,	// (0x0009d923) cams2_slider_pane

0xb156,	// (0x0009ef4f) cams2_slider_pane_g1

0xb156,	// (0x0009ef4f) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x000a3384) cams2_slider_pane_g

0x0b8d,	// (0x00094986) calc_display_pane_ParamLimits

0x0bb2,	// (0x000949ab) calc_paper_pane_ParamLimits

0x0bd5,	// (0x000949ce) grid_calc_pane_ParamLimits

0x9c1d,	// (0x0009da16) popup_clock_digital_window_t1_ParamLimits

0x9ed8,	// (0x0009dcd1) main_image_pane_t1

0x0b6f,	// (0x00094968) aid_size_cell_calc_ParamLimits

0x0b6f,	// (0x00094968) aid_size_cell_calc

0x345d,	// (0x00097256) popup_blid_sat_info2_window_ParamLimits

0x345d,	// (0x00097256) popup_blid_sat_info2_window

0xb1d9,	// (0x0009efd2) aid_size_cell_blid

0xb1e1,	// (0x0009efda) bg_popup_window_pane_cp07

0xb204,	// (0x0009effd) grid_popup_blid_pane

0xb20e,	// (0x0009f007) heading_pane_cp05_ParamLimits

0xb20e,	// (0x0009f007) heading_pane_cp05

0xb2d8,	// (0x0009f0d1) cell_popup_blid_pane_ParamLimits

0xb2d8,	// (0x0009f0d1) cell_popup_blid_pane

0xb2fc,	// (0x0009f0f5) cell_popup_blid_pane_g1

0xb304,	// (0x0009f0fd) cell_popup_blid_pane_t1

0x9d01,	// (0x0009dafa) mup2_indicator_pane_ParamLimits

0x9d01,	// (0x0009dafa) mup2_indicator_pane

0xd6dd,	// (0x000a14d6) mup2_visualizer_osc_pane

0xb06c,	// (0x0009ee65) mup2_visualizer_spec_pane_ParamLimits

0xb06c,	// (0x0009ee65) mup2_visualizer_spec_pane

0xd6dd,	// (0x000a14d6) mup2_spec_half_pane

0xd6dd,	// (0x000a14d6) mup2_spec_half_pane_cp

0xb312,	// (0x0009f10b) mup2_spec_bar_pane_ParamLimits

0xb312,	// (0x0009f10b) mup2_spec_bar_pane

0xe37a,	// (0x000a2173) mup2_spec_bar_pane_g1

0xb331,	// (0x0009f12a) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x000a33aa) mup2_spec_bar_pane_g

0xd6dd,	// (0x000a14d6) mup2_osc_middle_pane

0xe37a,	// (0x000a2173) mup2_visualizer_osc_pane_g1

0xd707,	// (0x000a1500) popup_number_entry_window_t1_ParamLimits

0xd71a,	// (0x000a1513) popup_number_entry_window_t2_ParamLimits

0xd72c,	// (0x000a1525) popup_number_entry_window_t3_ParamLimits

0x0b17,	// (0x00094910) popup_number_entry_window_t5_ParamLimits

0x0b17,	// (0x00094910) popup_number_entry_window_t5

0xf01d,	// (0x000a2e16) popup_number_entry_window_t_ParamLimits

0xd73e,	// (0x000a1537) text_title_cp2_ParamLimits

0x9ddc,	// (0x0009dbd5) aid_hotspot_pointer_text2_pane

0x9df6,	// (0x0009dbef) main_viewer_pane_g9_ParamLimits

0x9df6,	// (0x0009dbef) main_viewer_pane_g9

0xe8eb,	// (0x000a26e4) cale_month_pane_t1_ParamLimits

0xe928,	// (0x000a2721) bg_cale_pane_ParamLimits

0xe940,	// (0x000a2739) list_cale_pane_ParamLimits

0xe951,	// (0x000a274a) listscroll_cale_day_pane_t1

0xe963,	// (0x000a275c) scroll_pane_cp09_ParamLimits

0x283a,	// (0x00096633) main_mup_eq_pane_t1_ParamLimits

0x283a,	// (0x00096633) main_mup_eq_pane_t1

0x2854,	// (0x0009664d) main_mup_eq_pane_t2_ParamLimits

0x2854,	// (0x0009664d) main_mup_eq_pane_t2

0x286e,	// (0x00096667) main_mup_eq_pane_t3_ParamLimits

0x286e,	// (0x00096667) main_mup_eq_pane_t3

0x288a,	// (0x00096683) main_mup_eq_pane_t4_ParamLimits

0x288a,	// (0x00096683) main_mup_eq_pane_t4

0x28a6,	// (0x0009669f) main_mup_eq_pane_t5_ParamLimits

0x28a6,	// (0x0009669f) main_mup_eq_pane_t5

0x28c2,	// (0x000966bb) main_mup_eq_pane_t6_ParamLimits

0x28c2,	// (0x000966bb) main_mup_eq_pane_t6

0x28d6,	// (0x000966cf) main_mup_eq_pane_t7_ParamLimits

0x28d6,	// (0x000966cf) main_mup_eq_pane_t7

0x28ea,	// (0x000966e3) main_mup_eq_pane_t8_ParamLimits

0x28ea,	// (0x000966e3) main_mup_eq_pane_t8

0x28fe,	// (0x000966f7) main_mup_eq_pane_t9_ParamLimits

0x28fe,	// (0x000966f7) main_mup_eq_pane_t9

0x2918,	// (0x00096711) main_mup_eq_pane_t10_ParamLimits

0x2918,	// (0x00096711) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x000a3170) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x000a3170) main_mup_eq_pane_t

0x29c7,	// (0x000967c0) mup_equalizer_pane_cp5_ParamLimits

0x29db,	// (0x000967d4) mup_equalizer_pane_cp6_ParamLimits

0x29ef,	// (0x000967e8) mup_equalizer_pane_cp7_ParamLimits

0x9b2a,	// (0x0009d923) main_gallery_pane

0xaf88,	// (0x0009ed81) smil2_volume_pane

0xaf90,	// (0x0009ed89) smil_status_volume_pane_g1_ParamLimits

0xafa3,	// (0x0009ed9c) smil_status_volume_pane_g2_ParamLimits

0xafb6,	// (0x0009edaf) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x000a3303) smil_status_volume_pane_g_ParamLimits

0xb1e1,	// (0x0009efda) bg_popup_window_pane_cp07_ParamLimits

0xb1ef,	// (0x0009efe8) blid_firmament_pane

0xe295,	// (0x000a208e) aid_size_cell_gallery_ParamLimits

0xe295,	// (0x000a208e) aid_size_cell_gallery

0xe295,	// (0x000a208e) grid_gallery_pane_ParamLimits

0xe295,	// (0x000a208e) grid_gallery_pane

0xb1e1,	// (0x0009efda) cell_gallery_pane_ParamLimits

0xb1e1,	// (0x0009efda) cell_gallery_pane

0xe295,	// (0x000a208e) bg_cell_gallery_focus_pane_ParamLimits

0xe295,	// (0x000a208e) bg_cell_gallery_focus_pane

0xe33c,	// (0x000a2135) cell_gallery_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) cell_gallery_pane_g1

0xe33c,	// (0x000a2135) cell_gallery_pane_g2_ParamLimits

0xe33c,	// (0x000a2135) cell_gallery_pane_g2

0xe33c,	// (0x000a2135) cell_gallery_pane_g3_ParamLimits

0xe33c,	// (0x000a2135) cell_gallery_pane_g3

0xe34a,	// (0x000a2143) cell_gallery_pane_g4_ParamLimits

0xe34a,	// (0x000a2143) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x000a33af) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x000a33af) cell_gallery_pane_g

0xb33b,	// (0x0009f134) bg_cell_gallery_focus_pane_g1

0xb343,	// (0x0009f13c) bg_cell_gallery_focus_pane_g2

0xb34b,	// (0x0009f144) bg_cell_gallery_focus_pane_g3

0xb353,	// (0x0009f14c) bg_cell_gallery_focus_pane_g4

0xb35b,	// (0x0009f154) bg_cell_gallery_focus_pane_g5

0xb363,	// (0x0009f15c) bg_cell_gallery_focus_pane_g6

0xb36b,	// (0x0009f164) bg_cell_gallery_focus_pane_g7

0xb373,	// (0x0009f16c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x000a33b8) bg_cell_gallery_focus_pane_g

0xb37b,	// (0x0009f174) aid_firma_cardinal

0xb38f,	// (0x0009f188) blid_firmament_pane_t1

0xb3a6,	// (0x0009f19f) blid_firmament_pane_t2

0xb3bd,	// (0x0009f1b6) blid_firmament_pane_t3

0xb3d4,	// (0x0009f1cd) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x000a33c9) blid_firmament_pane_t

0xb3eb,	// (0x0009f1e4) blid_sat_info_pane

0xe37a,	// (0x000a2173) blid_sat_info_pane_g1

0xe37a,	// (0x000a2173) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x000a2e85) blid_sat_info_pane_g

0xb3fb,	// (0x0009f1f4) blid_sat_info_pane_t1

0xb409,	// (0x0009f202) smil2_volume_content_pane

0xb412,	// (0x0009f20b) smil2_volume_pane_g1

0xe44f,	// (0x000a2248) smil2_volume_content_pane_g1

0xb41a,	// (0x0009f213) smil2_volume_content_pane_g2

0xb423,	// (0x0009f21c) smil2_volume_content_pane_g3

0xb42c,	// (0x0009f225) smil2_volume_content_pane_g4

0xb435,	// (0x0009f22e) smil2_volume_content_pane_g5

0xb43e,	// (0x0009f237) smil2_volume_content_pane_g6

0xb447,	// (0x0009f240) smil2_volume_content_pane_g7

0xb450,	// (0x0009f249) smil2_volume_content_pane_g8

0xb459,	// (0x0009f252) smil2_volume_content_pane_g9

0xb462,	// (0x0009f25b) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x000a33d2) smil2_volume_content_pane_g

0x109c,	// (0x00094e95) cale_week_day_heading_pane_t1_ParamLimits

0x10c6,	// (0x00094ebf) cale_week_day_heading_pane_t2_ParamLimits

0x10f5,	// (0x00094eee) cale_week_day_heading_pane_t3_ParamLimits

0x1124,	// (0x00094f1d) cale_week_day_heading_pane_t4_ParamLimits

0x1153,	// (0x00094f4c) cale_week_day_heading_pane_t5_ParamLimits

0x118a,	// (0x00094f83) cale_week_day_heading_pane_t6_ParamLimits

0x11c1,	// (0x00094fba) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x000a2f1d) cale_week_day_heading_pane_t_ParamLimits

0xe59e,	// (0x000a2397) bg_cale_side_pane_ParamLimits

0x11eb,	// (0x00094fe4) cale_week_time_pane_t1_ParamLimits

0x1205,	// (0x00094ffe) cale_week_time_pane_t2_ParamLimits

0x121f,	// (0x00095018) cale_week_time_pane_t3_ParamLimits

0x1239,	// (0x00095032) cale_week_time_pane_t4_ParamLimits

0x1253,	// (0x0009504c) cale_week_time_pane_t5_ParamLimits

0x126d,	// (0x00095066) cale_week_time_pane_t6_ParamLimits

0x1287,	// (0x00095080) cale_week_time_pane_t7_ParamLimits

0x12a1,	// (0x0009509a) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x000a2f2c) cale_week_time_pane_t_ParamLimits

0x12bb,	// (0x000950b4) cell_cale_week_pane_g2_ParamLimits

0xe59e,	// (0x000a2397) bg_cale_side_pane_cp01_ParamLimits

0x2272,	// (0x0009606b) cale_month_week_pane_t1_ParamLimits

0x228b,	// (0x00096084) cale_month_week_pane_t2_ParamLimits

0x22a4,	// (0x0009609d) cale_month_week_pane_t3_ParamLimits

0x22bd,	// (0x000960b6) cale_month_week_pane_t4_ParamLimits

0x22d6,	// (0x000960cf) cale_month_week_pane_t5_ParamLimits

0x22ef,	// (0x000960e8) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x000a2ffa) cale_month_week_pane_t_ParamLimits

0x9b8d,	// (0x0009d986) cell_cale_month_pane_g1_ParamLimits

0x9b2a,	// (0x0009d923) main_cale_event_viewer_pane

0xd6dd,	// (0x000a14d6) listscroll_cale_event_viewer_pane

0xb46b,	// (0x0009f264) list_cale_ev_pane

0xb473,	// (0x0009f26c) scroll_pane_cp023

0xb47f,	// (0x0009f278) field_cale_ev_pane_ParamLimits

0xb47f,	// (0x0009f278) field_cale_ev_pane

0xb49d,	// (0x0009f296) field_cale_ev_content_pane_ParamLimits

0xb49d,	// (0x0009f296) field_cale_ev_content_pane

0xb4a9,	// (0x0009f2a2) field_cale_ev_pane_g1_ParamLimits

0xb4a9,	// (0x0009f2a2) field_cale_ev_pane_g1

0xb4b5,	// (0x0009f2ae) field_cale_ev_pane_g2_ParamLimits

0xb4b5,	// (0x0009f2ae) field_cale_ev_pane_g2

0xb4cd,	// (0x0009f2c6) field_cale_ev_pane_g3_ParamLimits

0xb4cd,	// (0x0009f2c6) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x000a33e7) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x000a33e7) field_cale_ev_pane_g

0xb4e5,	// (0x0009f2de) field_cale_ev_pane_t1_ParamLimits

0xb4e5,	// (0x0009f2de) field_cale_ev_pane_t1

0xe4d2,	// (0x000a22cb) field_cale_ev_content_pane_t1_ParamLimits

0xe4d2,	// (0x000a22cb) field_cale_ev_content_pane_t1

0x9da4,	// (0x0009db9d) bg_button_pane_cp01

0x0dc9,	// (0x00094bc2) listscroll_cale_week_pane_ParamLimits

0x9b7a,	// (0x0009d973) popup_toolbar_window_cp01

0xe56f,	// (0x000a2368) listscroll_cale_week_pane_t1_ParamLimits

0x24bc,	// (0x000962b5) listscroll_cale_day_pane_ParamLimits

0xe87f,	// (0x000a2678) popup_toolbar_window_cp02

0xe951,	// (0x000a274a) listscroll_cale_day_pane_t1_ParamLimits

0x0dc9,	// (0x00094bc2) main_cale_month_pane_ParamLimits

0xaf06,	// (0x0009ecff) popup_toolbar_window_cp03_ParamLimits

0xaf06,	// (0x0009ecff) popup_toolbar_window_cp03

0x2d77,	// (0x00096b70) main_image_pane_g2_ParamLimits

0x2d77,	// (0x00096b70) main_image_pane_g2

0x2d88,	// (0x00096b81) main_image_pane_g3_ParamLimits

0x2d88,	// (0x00096b81) main_image_pane_g3

0x0002,

0xf409,	// (0x000a3202) main_image_pane_g_ParamLimits

0xf409,	// (0x000a3202) main_image_pane_g

0x9ed8,	// (0x0009dcd1) main_image_pane_t1_ParamLimits

0x2d99,	// (0x00096b92) main_image_pane_t2_ParamLimits

0x2d99,	// (0x00096b92) main_image_pane_t2

0x2dab,	// (0x00096ba4) main_image_pane_t3_ParamLimits

0x2dab,	// (0x00096ba4) main_image_pane_t3

0x2dd3,	// (0x00096bcc) main_image_pane_t4_ParamLimits

0x2dd3,	// (0x00096bcc) main_image_pane_t4

0x0003,

0xf410,	// (0x000a3209) main_image_pane_t_ParamLimits

0xf410,	// (0x000a3209) main_image_pane_t

0x2df3,	// (0x00096bec) popup_image_details_window_cp01

0x2dfd,	// (0x00096bf6) popup_toobar_trans_pane_cp01_ParamLimits

0x2dfd,	// (0x00096bf6) popup_toobar_trans_pane_cp01

0x353c,	// (0x00097335) popup_image_details_window_ParamLimits

0x353c,	// (0x00097335) popup_image_details_window

0xaed9,	// (0x0009ecd2) popup_image_focus_window

0xb00c,	// (0x0009ee05) camera2_autofocus_pane_ParamLimits

0xb00c,	// (0x0009ee05) camera2_autofocus_pane

0xd6dd,	// (0x000a14d6) bg_popup_sub_pane_cp06

0xb4fc,	// (0x0009f2f5) popup_image_focus_window_g1

0xb504,	// (0x0009f2fd) popup_image_focus_window_g2

0xb50c,	// (0x0009f305) popup_image_focus_window_g3

0xb514,	// (0x0009f30d) popup_image_focus_window_g4

0x0003,

0xf5f5,	// (0x000a33ee) popup_image_focus_window_g

0xb51c,	// (0x0009f315) popup_image_focus_window_t1

0xb52a,	// (0x0009f323) popup_image_focus_window_t2

0xb53a,	// (0x0009f333) popup_image_focus_window_t3

0x0002,

0xf5fe,	// (0x000a33f7) popup_image_focus_window_t

0xe33c,	// (0x000a2135) camera2_autofocus_pane_g1

0xe295,	// (0x000a208e) bg_tb_trans_pane_cp01

0xb548,	// (0x0009f341) popup_image_details_window_g1

0xb55b,	// (0x0009f354) popup_image_details_window_g2

0x0002,

0xf605,	// (0x000a33fe) popup_image_details_window_g

0xb584,	// (0x0009f37d) popup_image_details_window_t1

0xb596,	// (0x0009f38f) popup_image_details_window_t2

0xb5af,	// (0x0009f3a8) popup_image_details_window_t3

0xb5c3,	// (0x0009f3bc) popup_image_details_window_t4

0xb5de,	// (0x0009f3d7) popup_image_details_window_t5

0x0004,

0xf60c,	// (0x000a3405) popup_image_details_window_t

0xe3c4,	// (0x000a21bd) bg_calc_paper_pane_ParamLimits

0x9b2a,	// (0x0009d923) grid_highlight_pane_cp013

0x9b3c,	// (0x0009d935) list_calc_pane_ParamLimits

0x9b4e,	// (0x0009d947) scroll_pane_cp024

0xe3d8,	// (0x000a21d1) bg_calc_display_pane_ParamLimits

0x0c17,	// (0x00094a10) calc_display_pane_t1_ParamLimits

0x0c2c,	// (0x00094a25) calc_display_pane_t2_ParamLimits

0x9b56,	// (0x0009d94f) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x000a2e9d) calc_display_pane_t_ParamLimits

0x0cec,	// (0x00094ae5) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x000a2eba) cell_calc_pane_g

0x0cf5,	// (0x00094aee) cell_calc_pane_t1

0xe42d,	// (0x000a2226) grid_highlight_pane_cp02_ParamLimits

0xe443,	// (0x000a223c) toolbar_button_pane_cp01_ParamLimits

0xe443,	// (0x000a223c) toolbar_button_pane_cp01

0x9f1d,	// (0x0009dd16) temp_image_control_pane_ParamLimits

0x9f1d,	// (0x0009dd16) temp_image_control_pane

0x9b1c,	// (0x0009d915) main_mp3_pane

0xb5f8,	// (0x0009f3f1) temp_image_control_pane_g1_ParamLimits

0xb5f8,	// (0x0009f3f1) temp_image_control_pane_g1

0xb606,	// (0x0009f3ff) temp_image_control_pane_g2_ParamLimits

0xb606,	// (0x0009f3ff) temp_image_control_pane_g2

0xb618,	// (0x0009f411) temp_image_control_pane_g3_ParamLimits

0xb618,	// (0x0009f411) temp_image_control_pane_g3

0x39fb,	// (0x000977f4) temp_image_control_pane_g4_ParamLimits

0x39fb,	// (0x000977f4) temp_image_control_pane_g4

0x0003,

0xf617,	// (0x000a3410) temp_image_control_pane_g_ParamLimits

0xf617,	// (0x000a3410) temp_image_control_pane_g

0xb5f8,	// (0x0009f3f1) main_mp3_pane_g1

0x3a0e,	// (0x00097807) main_mp3_pane_g2

0x0007,

0xf620,	// (0x000a3419) main_mp3_pane_g

0xb64d,	// (0x0009f446) main_mp3_pane_t1

0xe34a,	// (0x000a2143) main_camera_pane_g8_ParamLimits

0xe34a,	// (0x000a2143) main_camera_pane_g8

0x1485,	// (0x0009527e) main_video_pane_g7_ParamLimits

0x1485,	// (0x0009527e) main_video_pane_g7

0xb03c,	// (0x0009ee35) main_camera2_pane_t7_ParamLimits

0xb03c,	// (0x0009ee35) main_camera2_pane_t7

0xe700,	// (0x000a24f9) scroll_pane_cp025_ParamLimits

0xe700,	// (0x000a24f9) scroll_pane_cp025

0xe714,	// (0x000a250d) scroll_pane_cp026_ParamLimits

0xe714,	// (0x000a250d) scroll_pane_cp026

0xe723,	// (0x000a251c) wml_content_pane_ParamLimits

0x9b2a,	// (0x0009d923) main_touch_calib_pane

0x3ae2,	// (0x000978db) main_touch_calib_pane_g1

0x3af4,	// (0x000978ed) main_touch_calib_pane_g2

0x3b06,	// (0x000978ff) main_touch_calib_pane_g3

0x3b18,	// (0x00097911) main_touch_calib_pane_g4

0x0003,

0xf63e,	// (0x000a3437) main_touch_calib_pane_g

0x3b2a,	// (0x00097923) main_touch_calib_pane_t1

0x3b44,	// (0x0009793d) main_touch_calib_pane_t2

0x0004,

0xf647,	// (0x000a3440) main_touch_calib_pane_t

0xee7f,	// (0x000a2c78) mup_progress_pane_cp02

0xeeb4,	// (0x000a2cad) navi_pane_g1

0xef6f,	// (0x000a2d68) navi_pane_mp_t3

0x9b1c,	// (0x0009d915) main_mp3_pane_ParamLimits

0x36c1,	// (0x000974ba) navi_pane_ParamLimits

0xb5f8,	// (0x0009f3f1) main_mp3_pane_g1_ParamLimits

0x3a0e,	// (0x00097807) main_mp3_pane_g2_ParamLimits

0x3a1c,	// (0x00097815) main_mp3_pane_g3_ParamLimits

0x3a1c,	// (0x00097815) main_mp3_pane_g3

0x3a2a,	// (0x00097823) main_mp3_pane_g4_ParamLimits

0x3a2a,	// (0x00097823) main_mp3_pane_g4

0xe33c,	// (0x000a2135) main_mp3_pane_g5_ParamLimits

0xe33c,	// (0x000a2135) main_mp3_pane_g5

0xb628,	// (0x0009f421) main_mp3_pane_g6_ParamLimits

0xb628,	// (0x0009f421) main_mp3_pane_g6

0xb635,	// (0x0009f42e) main_mp3_pane_g7_ParamLimits

0xb635,	// (0x0009f42e) main_mp3_pane_g7

0xb641,	// (0x0009f43a) main_mp3_pane_g8_ParamLimits

0xb641,	// (0x0009f43a) main_mp3_pane_g8

0xf620,	// (0x000a3419) main_mp3_pane_g_ParamLimits

0x3a36,	// (0x0009782f) main_mp3_pane_t2

0x3a44,	// (0x0009783d) main_mp3_pane_t3

0xb65b,	// (0x0009f454) main_mp3_pane_t4

0xb669,	// (0x0009f462) main_mp3_pane_t5

0x0005,

0xf631,	// (0x000a342a) main_mp3_pane_t

0xb677,	// (0x0009f470) mup_progress_pane_cp01

0xaeb3,	// (0x0009ecac) aid_zoom_text_secondary2

0xb46b,	// (0x0009f264) list_cale_ev2_pane

0xb473,	// (0x0009f26c) scroll_pane_cp023_ParamLimits

0x3b9a,	// (0x00097993) field_cale_ev2_pane_ParamLimits

0x3b9a,	// (0x00097993) field_cale_ev2_pane

0x3bba,	// (0x000979b3) field_cale_ev2_pane_g1_ParamLimits

0x3bba,	// (0x000979b3) field_cale_ev2_pane_g1

0x3bc6,	// (0x000979bf) field_cale_ev2_pane_g2_ParamLimits

0x3bc6,	// (0x000979bf) field_cale_ev2_pane_g2

0x3bde,	// (0x000979d7) field_cale_ev2_pane_g3_ParamLimits

0x3bde,	// (0x000979d7) field_cale_ev2_pane_g3

0x0003,

0xf652,	// (0x000a344b) field_cale_ev2_pane_g_ParamLimits

0xf652,	// (0x000a344b) field_cale_ev2_pane_g

0x3c02,	// (0x000979fb) field_cale_ev2_pane_t1_ParamLimits

0x3c02,	// (0x000979fb) field_cale_ev2_pane_t1

0x3c19,	// (0x00097a12) field_cale_ev2_pane_t2_ParamLimits

0x3c19,	// (0x00097a12) field_cale_ev2_pane_t2

0x0001,

0xf65b,	// (0x000a3454) field_cale_ev2_pane_t_ParamLimits

0xf65b,	// (0x000a3454) field_cale_ev2_pane_t

0x2c4d,	// (0x00096a46) main_postcard_pane_g5_ParamLimits

0x2c4d,	// (0x00096a46) main_postcard_pane_g5

0x2c63,	// (0x00096a5c) main_postcard_pane_g6_ParamLimits

0x2c63,	// (0x00096a5c) main_postcard_pane_g6

0xe295,	// (0x000a208e) camera2_autofocus_pane_cp_ParamLimits

0xe295,	// (0x000a208e) camera2_autofocus_pane_cp

0x9b1c,	// (0x0009d915) main_mup3_pane

0x3c72,	// (0x00097a6b) main_mup3_pane_g1_ParamLimits

0x3c72,	// (0x00097a6b) main_mup3_pane_g1

0x3cc4,	// (0x00097abd) main_mup3_pane_g2_ParamLimits

0x3cc4,	// (0x00097abd) main_mup3_pane_g2

0x3d2c,	// (0x00097b25) main_mup3_pane_g3_ParamLimits

0x3d2c,	// (0x00097b25) main_mup3_pane_g3

0x3d90,	// (0x00097b89) main_mup3_pane_g4_ParamLimits

0x3d90,	// (0x00097b89) main_mup3_pane_g4

0x3df4,	// (0x00097bed) main_mup3_pane_g5_ParamLimits

0x3df4,	// (0x00097bed) main_mup3_pane_g5

0xb67f,	// (0x0009f478) main_mup3_pane_g6_ParamLimits

0xb67f,	// (0x0009f478) main_mup3_pane_g6

0xe34a,	// (0x000a2143) main_mup3_pane_g7_ParamLimits

0xe34a,	// (0x000a2143) main_mup3_pane_g7

0x0007,

0xf66b,	// (0x000a3464) main_mup3_pane_g_ParamLimits

0xf66b,	// (0x000a3464) main_mup3_pane_g

0x3ec1,	// (0x00097cba) main_mup3_pane_t1_ParamLimits

0x3ec1,	// (0x00097cba) main_mup3_pane_t1

0x3faf,	// (0x00097da8) main_mup3_pane_t2_ParamLimits

0x3faf,	// (0x00097da8) main_mup3_pane_t2

0x409d,	// (0x00097e96) main_mup3_pane_t4_ParamLimits

0x409d,	// (0x00097e96) main_mup3_pane_t4

0x40af,	// (0x00097ea8) main_mup3_pane_t5_ParamLimits

0x40af,	// (0x00097ea8) main_mup3_pane_t5

0x4181,	// (0x00097f7a) main_mup3_pane_t6_ParamLimits

0x4181,	// (0x00097f7a) main_mup3_pane_t6

0x0005,

0xf67c,	// (0x000a3475) main_mup3_pane_t_ParamLimits

0xf67c,	// (0x000a3475) main_mup3_pane_t

0x4229,	// (0x00098022) mup3_progress_pane_ParamLimits

0x4229,	// (0x00098022) mup3_progress_pane

0x4291,	// (0x0009808a) popup_mup3_control_window_ParamLimits

0x4291,	// (0x0009808a) popup_mup3_control_window

0xb697,	// (0x0009f490) popup_mup3_text_window

0x42a9,	// (0x000980a2) mup3_progress_pane_t1

0x42c8,	// (0x000980c1) mup3_progress_pane_t2

0xb69f,	// (0x0009f498) mup3_progress_pane_t3

0x0002,

0xf689,	// (0x000a3482) mup3_progress_pane_t

0xb6bc,	// (0x0009f4b5) mup_progress_pane_cp03

0xb6cc,	// (0x0009f4c5) bg_tb_trans_pane_cp04

0xb6cc,	// (0x0009f4c5) mup3_volume_pane

0xb6d4,	// (0x0009f4cd) popup_mup3_control_window_g1

0xb6d4,	// (0x0009f4cd) mup3_volume_pane_g1

0xb6d4,	// (0x0009f4cd) mup3_volume_pane_g2

0xb6d4,	// (0x0009f4cd) mup3_volume_pane_g3

0x0002,

0xf690,	// (0x000a3489) mup3_volume_pane_g

0xd6dd,	// (0x000a14d6) bg_tb_trans_pane_cp03

0xb6dc,	// (0x0009f4d5) popup_mup3_text_window_g1

0xb6e4,	// (0x0009f4dd) popup_mup3_text_window_t1

0xe420,	// (0x000a2219) list_calc_item_pane_g1_ParamLimits

0xb14d,	// (0x0009ef46) mup_volume_pane_cp_g1

0x3b5e,	// (0x00097957) main_touch_calib_pane_t3

0x3b72,	// (0x0009796b) main_touch_calib_pane_t4

0x3b86,	// (0x0009797f) main_touch_calib_pane_t5

0x9aaf,	// (0x0009d8a8) aid_cell_size_toolbar2

0x9ab7,	// (0x0009d8b0) aid_popup3_width_pane

0x9ac3,	// (0x0009d8bc) aid_zoom_text_msg_primary

0x1360,	// (0x00095159) vorec_t7

0xe3e4,	// (0x000a21dd) bg_calc_paper_pane_g1_ParamLimits

0xe3f0,	// (0x000a21e9) bg_calc_paper_pane_g2_ParamLimits

0xe3fc,	// (0x000a21f5) bg_calc_paper_pane_g3_ParamLimits

0xe408,	// (0x000a2201) bg_calc_paper_pane_g4_ParamLimits

0xe414,	// (0x000a220d) bg_calc_paper_pane_g5_ParamLimits

0x0c76,	// (0x00094a6f) bg_calc_paper_pane_g6_ParamLimits

0x0c85,	// (0x00094a7e) bg_calc_paper_pane_g7_ParamLimits

0x0c94,	// (0x00094a8d) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x000a2ea4) bg_calc_paper_pane_g_ParamLimits

0x0ca7,	// (0x00094aa0) calc_bg_paper_pane_g9_ParamLimits

0xe295,	// (0x000a208e) image_qvga_pane_ParamLimits

0xe295,	// (0x000a208e) image_qvga_pane

0xe2c1,	// (0x000a20ba) bg_popup_sub_pane_cp04_ParamLimits

0x9e54,	// (0x0009dc4d) popup_mup_playback_window_g1_ParamLimits

0x9e60,	// (0x0009dc59) popup_mup_playback_window_t1_ParamLimits

0x9e75,	// (0x0009dc6e) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x000a31fd) popup_mup_playback_window_t_ParamLimits

0xe34a,	// (0x000a2143) main_mup2_pane_g3_ParamLimits

0xe34a,	// (0x000a2143) main_mup2_pane_g3

0x1640,	// (0x00095439) popup_toolbar_window_cp04

0xa1e6,	// (0x0009dfdf) popup_call2_audio_second_window_g3_ParamLimits

0xa1e6,	// (0x0009dfdf) popup_call2_audio_second_window_g3

0xa5fe,	// (0x0009e3f7) popup_call2_audio_first_window_g4_ParamLimits

0xa5fe,	// (0x0009e3f7) popup_call2_audio_first_window_g4

0xac25,	// (0x0009ea1e) popup_call2_audio_in_window_g4_ParamLimits

0xac25,	// (0x0009ea1e) popup_call2_audio_in_window_g4

0x2d59,	// (0x00096b52) aid_area_sk_bg_cut_ParamLimits

0x2d59,	// (0x00096b52) aid_area_sk_bg_cut

0x9e8a,	// (0x0009dc83) aid_area_sk_bg_cut_2_ParamLimits

0x9e8a,	// (0x0009dc83) aid_area_sk_bg_cut_2

0xd6dd,	// (0x000a14d6) aid_placing_details_win

0xd6dd,	// (0x000a14d6) aid_placing_details_win_2

0xe33c,	// (0x000a2135) camera2_autofocus_pane_g1_ParamLimits

0x0a5e,	// (0x00094857) popup_fixed_preview_cale_window_ParamLimits

0x0a5e,	// (0x00094857) popup_fixed_preview_cale_window

0xefed,	// (0x000a2de6) navi_slider_pane_g3

0xeff6,	// (0x000a2def) navi_slider_pane_g4

0xefff,	// (0x000a2df8) navi_slider_pane_g5

0xefed,	// (0x000a2de6) navi_slider_pane_g6

0x9c43,	// (0x0009da3c) navi_slider_pane_g7

0x9d71,	// (0x0009db6a) mup_scale_pane_g3

0x9d7a,	// (0x0009db73) mup_scale_pane_g4

0x9d83,	// (0x0009db7c) mup_scale_pane_g5

0x2a03,	// (0x000967fc) mup_scale_pane_g6

0x2a0c,	// (0x00096805) mup_scale_pane_g7

0xb156,	// (0x0009ef4f) cams2_slider_pane_g3

0xb156,	// (0x0009ef4f) cams2_slider_pane_g4

0xb156,	// (0x0009ef4f) cams2_slider_pane_g5

0xb156,	// (0x0009ef4f) cams2_slider_pane_g6

0xb156,	// (0x0009ef4f) cams2_slider_pane_g7

0xe37a,	// (0x000a2173) camera2_autofocus_pane_cp_g1

0xaebb,	// (0x0009ecb4) bg_popup_preview_window_pane_cp02_ParamLimits

0xaebb,	// (0x0009ecb4) bg_popup_preview_window_pane_cp02

0xb6f2,	// (0x0009f4eb) list_fp_cale_pane_ParamLimits

0xb6f2,	// (0x0009f4eb) list_fp_cale_pane

0xb6fe,	// (0x0009f4f7) popup_fixed_preview_cale_window_t1_ParamLimits

0xb6fe,	// (0x0009f4f7) popup_fixed_preview_cale_window_t1

0x42e7,	// (0x000980e0) popup_fixed_preview_cale_window_t2_ParamLimits

0x42e7,	// (0x000980e0) popup_fixed_preview_cale_window_t2

0x42fc,	// (0x000980f5) popup_fixed_preview_cale_window_t3_ParamLimits

0x42fc,	// (0x000980f5) popup_fixed_preview_cale_window_t3

0x0002,

0xf697,	// (0x000a3490) popup_fixed_preview_cale_window_t_ParamLimits

0xf697,	// (0x000a3490) popup_fixed_preview_cale_window_t

0x4311,	// (0x0009810a) list_single_fp_cale_pane_ParamLimits

0x4311,	// (0x0009810a) list_single_fp_cale_pane

0xb71c,	// (0x0009f515) list_single_fp_cale_pane_g1_ParamLimits

0xb71c,	// (0x0009f515) list_single_fp_cale_pane_g1

0xb728,	// (0x0009f521) list_single_fp_cale_pane_g2_ParamLimits

0xb728,	// (0x0009f521) list_single_fp_cale_pane_g2

0x0002,

0xf69e,	// (0x000a3497) list_single_fp_cale_pane_g_ParamLimits

0xf69e,	// (0x000a3497) list_single_fp_cale_pane_g

0xb741,	// (0x0009f53a) list_single_fp_cale_pane_t1_ParamLimits

0xb741,	// (0x0009f53a) list_single_fp_cale_pane_t1

0xb753,	// (0x0009f54c) list_single_fp_cale_pane_t2_ParamLimits

0xb753,	// (0x0009f54c) list_single_fp_cale_pane_t2

0x0001,

0xf6a5,	// (0x000a349e) list_single_fp_cale_pane_t_ParamLimits

0xf6a5,	// (0x000a349e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9b2a,	// (0x0009d923) main_dialer_pane

0xd6dd,	// (0x000a14d6) aid_cell_size_keypad

0xd6dd,	// (0x000a14d6) dialer_ne_pane

0xd6dd,	// (0x000a14d6) grid_dialer_command_1_pane

0xd6dd,	// (0x000a14d6) grid_dialer_command_2_pane

0xd6dd,	// (0x000a14d6) grid_dialer_keypad_pane

0x4326,	// (0x0009811f) bg_popup_call_pane_cp06_ParamLimits

0x4326,	// (0x0009811f) bg_popup_call_pane_cp06

0x4326,	// (0x0009811f) dialer_ne_clear_pane_ParamLimits

0x4326,	// (0x0009811f) dialer_ne_clear_pane

0xe37a,	// (0x000a2173) dialer_ne_pane_g1

0xe398,	// (0x000a2191) dialer_ne_pane_t1_ParamLimits

0xe398,	// (0x000a2191) dialer_ne_pane_t1

0x4334,	// (0x0009812d) dialer_ne_pane_t2_ParamLimits

0x4334,	// (0x0009812d) dialer_ne_pane_t2

0x435c,	// (0x00098155) dialer_ne_pane_t3_ParamLimits

0x435c,	// (0x00098155) dialer_ne_pane_t3

0x0002,

0xf6aa,	// (0x000a34a3) dialer_ne_pane_t_ParamLimits

0xf6aa,	// (0x000a34a3) dialer_ne_pane_t

0x435c,	// (0x00098155) dialer_ne_pane_t3_copy1_ParamLimits

0x435c,	// (0x00098155) dialer_ne_pane_t3_copy1

0xb786,	// (0x0009f57f) cell_dialer_keypad_pane_ParamLimits

0xb786,	// (0x0009f57f) cell_dialer_keypad_pane

0xe295,	// (0x000a208e) cell_dialer_command_1_pane_ParamLimits

0xe295,	// (0x000a208e) cell_dialer_command_1_pane

0xb79d,	// (0x0009f596) cell_dialer_command_2_pane_ParamLimits

0xb79d,	// (0x0009f596) cell_dialer_command_2_pane

0xe295,	// (0x000a208e) bg_button_pane_cp02_ParamLimits

0xe295,	// (0x000a208e) bg_button_pane_cp02

0xe33c,	// (0x000a2135) cell_dialer_keypad_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) cell_dialer_keypad_pane_g1

0xe295,	// (0x000a208e) bg_button_pane_cp03_ParamLimits

0xe295,	// (0x000a208e) bg_button_pane_cp03

0xe33c,	// (0x000a2135) cell_dialer_command_1_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) cell_dialer_command_1_pane_g1

0xd6dd,	// (0x000a14d6) bg_button_pane_cp04

0xe37a,	// (0x000a2173) cell_dialer_command_2_pane_g1

0xd6dd,	// (0x000a14d6) bg_button_pane_cp06

0xe37a,	// (0x000a2173) dialer_ne_clear_pane_g1

0xeec0,	// (0x000a2cb9) navi_pane_g2

0xeeee,	// (0x000a2ce7) navi_pane_g3

0x0002,

0xf30c,	// (0x000a3105) navi_pane_g

0xef7d,	// (0x000a2d76) navi_pane_mv_g2

0xefa4,	// (0x000a2d9d) navi_pane_mv_g5

0x27e6,	// (0x000965df) navi_pane_mv_t1

0xe3d8,	// (0x000a21d1) main_clock2_pane

0xe295,	// (0x000a208e) main_clock2_list_pane_ParamLimits

0xe295,	// (0x000a208e) main_clock2_list_pane

0x43f2,	// (0x000981eb) main_clock2_pane_t1_ParamLimits

0x43f2,	// (0x000981eb) main_clock2_pane_t1

0x442d,	// (0x00098226) main_clock2_pane_t2_ParamLimits

0x442d,	// (0x00098226) main_clock2_pane_t2

0x0004,

0xf6b6,	// (0x000a34af) main_clock2_pane_t_ParamLimits

0xf6b6,	// (0x000a34af) main_clock2_pane_t

0x44cd,	// (0x000982c6) popup_clock_analogue_window_cp03_ParamLimits

0x44cd,	// (0x000982c6) popup_clock_analogue_window_cp03

0x44f2,	// (0x000982eb) popup_clock_digital_window_cp02_ParamLimits

0x44f2,	// (0x000982eb) popup_clock_digital_window_cp02

0x456b,	// (0x00098364) main_clock2_list_single_pane_ParamLimits

0x456b,	// (0x00098364) main_clock2_list_single_pane

0xe5f0,	// (0x000a23e9) list_highlight_pane_cp05

0xb7e2,	// (0x0009f5db) main_clock2_list_single_pane_t1

0x1640,	// (0x00095439) popup_toolbar_window_cp04_ParamLimits

0xe34a,	// (0x000a2143) camera2_autofocus_pane_g2_ParamLimits

0xe34a,	// (0x000a2143) camera2_autofocus_pane_g2

0xe34a,	// (0x000a2143) camera2_autofocus_pane_g3_ParamLimits

0xe34a,	// (0x000a2143) camera2_autofocus_pane_g3

0xe34a,	// (0x000a2143) camera2_autofocus_pane_g4_ParamLimits

0xe34a,	// (0x000a2143) camera2_autofocus_pane_g4

0xe34a,	// (0x000a2143) camera2_autofocus_pane_g5_ParamLimits

0xe34a,	// (0x000a2143) camera2_autofocus_pane_g5

0x0004,

0x0012,	// (0x00093e0b) camera2_autofocus_pane_g_ParamLimits

0x0012,	// (0x00093e0b) camera2_autofocus_pane_g

0x3c2e,	// (0x00097a27) camera2_autofocus_pane_cp_g2

0x3c36,	// (0x00097a2f) camera2_autofocus_pane_cp_g3

0x3c3e,	// (0x00097a37) camera2_autofocus_pane_cp_g4

0x3c46,	// (0x00097a3f) camera2_autofocus_pane_cp_g5

0x0004,

0xf660,	// (0x000a3459) camera2_autofocus_pane_cp_g

0xd6dd,	// (0x000a14d6) popup_dialer_spcha_window

0xd6dd,	// (0x000a14d6) bg_popup_sub_pane_cp07

0xd6dd,	// (0x000a14d6) list_spcha_pane

0xb7f0,	// (0x0009f5e9) list_single_spcha_pane_ParamLimits

0xb7f0,	// (0x0009f5e9) list_single_spcha_pane

0xd6dd,	// (0x000a14d6) list_highlight_pane_cp06

0xeaf6,	// (0x000a28ef) list_single_spcha_pane_t1

0xa9cf,	// (0x0009e7c8) popup_call2_audio_out_window_g4_ParamLimits

0xa9cf,	// (0x0009e7c8) popup_call2_audio_out_window_g4

0x9b2a,	// (0x0009d923) main_imed2_pane

0xaee1,	// (0x0009ecda) popup_imed_adjust2_window

0x3554,	// (0x0009734d) popup_imed_trans_window_ParamLimits

0x3554,	// (0x0009734d) popup_imed_trans_window

0xb23a,	// (0x0009f033) popup_blid_sat_info2_window_t1

0xb248,	// (0x0009f041) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x000a3393) popup_blid_sat_info2_window_t

0x461c,	// (0x00098415) aid_size_cell_colour_35

0x463c,	// (0x00098435) aid_size_cell_colour_112

0x465c,	// (0x00098455) aid_size_cell_effect

0x9d01,	// (0x0009dafa) bg_tb_trans_pane_cp02

0x467c,	// (0x00098475) heading_imed_pane

0x4688,	// (0x00098481) listscroll_imed_pane

0xb802,	// (0x0009f5fb) heading_imed_pane_g1

0xb80a,	// (0x0009f603) heading_imed_pane_t1

0xb818,	// (0x0009f611) grid_imed_colour_35_pane_ParamLimits

0xb818,	// (0x0009f611) grid_imed_colour_35_pane

0x4694,	// (0x0009848d) grid_imed_effect_pane

0xb82f,	// (0x0009f628) list_imed_aspect_pane

0x46aa,	// (0x000984a3) scroll_pane_cp027_ParamLimits

0x46aa,	// (0x000984a3) scroll_pane_cp027

0x46bb,	// (0x000984b4) cell_imed_effect_pane_ParamLimits

0x46bb,	// (0x000984b4) cell_imed_effect_pane

0xb837,	// (0x0009f630) cell_imed_colour_pane_ParamLimits

0xb837,	// (0x0009f630) cell_imed_colour_pane

0xb879,	// (0x0009f672) cell_imed_colour_pane_g1_ParamLimits

0xb879,	// (0x0009f672) cell_imed_colour_pane_g1

0xb88a,	// (0x0009f683) hgihlgiht_grid_pane_cp016_ParamLimits

0xb88a,	// (0x0009f683) hgihlgiht_grid_pane_cp016

0x46e2,	// (0x000984db) cell_imed_effect_pane_g1

0x46ea,	// (0x000984e3) grid_highlight_pane_cp017

0xb89b,	// (0x0009f694) list_imed_single_pane_ParamLimits

0xb89b,	// (0x0009f694) list_imed_single_pane

0xd6dd,	// (0x000a14d6) list_highlight_pane_cp07

0xb8b0,	// (0x0009f6a9) list_imed_aspect_pane_comp1_t1

0x9d01,	// (0x0009dafa) bg_tb_trans_pane_cp05

0xb8d2,	// (0x0009f6cb) popup_imed_adjust2_window_g1

0xb8f9,	// (0x0009f6f2) popup_imed_adjust2_window_t1

0xb911,	// (0x0009f70a) slider_imed_adjust_pane

0xb925,	// (0x0009f71e) slider_imed_adjust_pane_g1

0xb935,	// (0x0009f72e) slider_imed_adjust_pane_g2

0xb945,	// (0x0009f73e) slider_imed_adjust_pane_g3

0xb956,	// (0x0009f74f) slider_imed_adjust_pane_g4

0x0003,

0xf6d3,	// (0x000a34cc) slider_imed_adjust_pane_g

0x46f3,	// (0x000984ec) aid_size_cell_clipart2

0x46ff,	// (0x000984f8) grid_imed_clipart_pane

0x9d94,	// (0x0009db8d) scroll_pane_cp031

0x4709,	// (0x00098502) cell_imed_clipart_pane_ParamLimits

0x4709,	// (0x00098502) cell_imed_clipart_pane

0x472b,	// (0x00098524) cell_imed_clipart_pane_g1

0xd6dd,	// (0x000a14d6) grid_highlight_pane_cp014

0x43ce,	// (0x000981c7) main_clock2_pane_g1_ParamLimits

0x43ce,	// (0x000981c7) main_clock2_pane_g1

0x4512,	// (0x0009830b) aid_call2_pane_cp10

0x4524,	// (0x0009831d) aid_call_pane_cp10

0xee21,	// (0x000a2c1a) popup_clock_analogue_window_cp10_g1

0xee21,	// (0x000a2c1a) popup_clock_analogue_window_cp10_g2

0x4536,	// (0x0009832f) popup_clock_analogue_window_cp10_g3

0x4536,	// (0x0009832f) popup_clock_analogue_window_cp10_g4

0xee21,	// (0x000a2c1a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6c1,	// (0x000a34ba) popup_clock_analogue_window_cp10_g

0x454c,	// (0x00098345) popup_clock_analogue_window_cp10_t1

0x457d,	// (0x00098376) clock_digital_number_pane_cp10_ParamLimits

0x457d,	// (0x00098376) clock_digital_number_pane_cp10

0x4595,	// (0x0009838e) clock_digital_number_pane_cp11_ParamLimits

0x4595,	// (0x0009838e) clock_digital_number_pane_cp11

0x45ad,	// (0x000983a6) clock_digital_number_pane_cp12_ParamLimits

0x45ad,	// (0x000983a6) clock_digital_number_pane_cp12

0x45c7,	// (0x000983c0) clock_digital_number_pane_cp13_ParamLimits

0x45c7,	// (0x000983c0) clock_digital_number_pane_cp13

0x45e1,	// (0x000983da) clock_digital_separator_pane_cp10_ParamLimits

0x45e1,	// (0x000983da) clock_digital_separator_pane_cp10

0x45fb,	// (0x000983f4) popup_clock_digital_window_cp02_t1_ParamLimits

0x45fb,	// (0x000983f4) popup_clock_digital_window_cp02_t1

0xe2b9,	// (0x000a20b2) clock_digital_number_pane_cp10_g1

0xe2b9,	// (0x000a20b2) clock_digital_number_pane_cp10_g2

0x0001,

0x00f4,	// (0x00093eed) clock_digital_number_pane_cp10_g

0xe2b9,	// (0x000a20b2) clock_digital_separator_pane_cp10_g1

0xe2b9,	// (0x000a20b2) clock_digital_separator_pane_g2_cp10

0xefac,	// (0x000a2da5) navi_pane_vded_g4

0xefb5,	// (0x000a2dae) navi_pane_vded_g5

0xefbe,	// (0x000a2db7) navi_pane_vded_t1

0x9b2a,	// (0x0009d923) main_vded_pane

0x4734,	// (0x0009852d) main_vded_pane_g1

0x473e,	// (0x00098537) main_vded_pane_g2

0x4748,	// (0x00098541) main_vded_pane_g3

0x0002,

0xf6dc,	// (0x000a34d5) main_vded_pane_g

0x4752,	// (0x0009854b) main_vded_pane_t1

0x4760,	// (0x00098559) main_vded_pane_t2

0x0001,

0xf6e3,	// (0x000a34dc) main_vded_pane_t

0x476e,	// (0x00098567) vded_slider_pane

0x4776,	// (0x0009856f) vded_video_pane

0xb967,	// (0x0009f760) vded_video_pane_g1

0x477e,	// (0x00098577) vded_video_pane_g2

0xe37a,	// (0x000a2173) vded_video_pane_g3

0x0002,

0xf6e8,	// (0x000a34e1) vded_video_pane_g

0xb971,	// (0x0009f76a) vded_slider_pane_g1

0xb14d,	// (0x0009ef46) vded_slider_pane_g2

0xb97a,	// (0x0009f773) vded_slider_pane_g3

0xb983,	// (0x0009f77c) vded_slider_pane_g4

0xb98c,	// (0x0009f785) vded_slider_pane_g5

0x0004,

0xf6ef,	// (0x000a34e8) vded_slider_pane_g

0xb68b,	// (0x0009f484) mup3_rocker_pane_ParamLimits

0xb68b,	// (0x0009f484) mup3_rocker_pane

0xb6d4,	// (0x0009f4cd) mup3_control_keys_pane_g1

0xb995,	// (0x0009f78e) mup3_control_keys_pane_g2

0xb6d4,	// (0x0009f4cd) mup3_control_keys_pane_g3

0xb99d,	// (0x0009f796) mup3_control_keys_pane_g4

0x0003,

0xf6fa,	// (0x000a34f3) mup3_control_keys_pane_g

0x0a95,	// (0x0009488e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0a95,	// (0x0009488e) popup_toolbar2_fixed_window_cp01

0xb68b,	// (0x0009f484) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb68b,	// (0x0009f484) popup_toolbar2_fixed_window_cp02

0xa358,	// (0x0009e151) popup_call2_audio_second_window_t4_ParamLimits

0xa358,	// (0x0009e151) popup_call2_audio_second_window_t4

0xa894,	// (0x0009e68d) popup_call2_audio_first_window_t6_ParamLimits

0xa894,	// (0x0009e68d) popup_call2_audio_first_window_t6

0xaad2,	// (0x0009e8cb) popup_call2_audio_out_window_t6_ParamLimits

0xaad2,	// (0x0009e8cb) popup_call2_audio_out_window_t6

0x9b2a,	// (0x0009d923) main_vitu_pane

0xe295,	// (0x000a208e) aid_size_cell_itu_ParamLimits

0xe295,	// (0x000a208e) aid_size_cell_itu

0xe295,	// (0x000a208e) bg_popup_window_pane_cp08_ParamLimits

0xe295,	// (0x000a208e) bg_popup_window_pane_cp08

0xe295,	// (0x000a208e) field_vitu_entry_pane_ParamLimits

0xe295,	// (0x000a208e) field_vitu_entry_pane

0xe295,	// (0x000a208e) grid_vitu_function_pane_ParamLimits

0xe295,	// (0x000a208e) grid_vitu_function_pane

0xe295,	// (0x000a208e) grid_vitu_itu_pane_ParamLimits

0xe295,	// (0x000a208e) grid_vitu_itu_pane

0xe295,	// (0x000a208e) cell_vitu_itu_pane_ParamLimits

0xe295,	// (0x000a208e) cell_vitu_itu_pane

0xe295,	// (0x000a208e) cell_vitu_function_pane_ParamLimits

0xe295,	// (0x000a208e) cell_vitu_function_pane

0xe295,	// (0x000a208e) bg_popup_sub_pane_cp08_ParamLimits

0xe295,	// (0x000a208e) bg_popup_sub_pane_cp08

0xe384,	// (0x000a217d) field_vitu_entry_pane_t1_ParamLimits

0xe384,	// (0x000a217d) field_vitu_entry_pane_t1

0xb9a5,	// (0x0009f79e) field_vitu_entry_pane_t2_ParamLimits

0xb9a5,	// (0x0009f79e) field_vitu_entry_pane_t2

0x0001,

0xf703,	// (0x000a34fc) field_vitu_entry_pane_t_ParamLimits

0xf703,	// (0x000a34fc) field_vitu_entry_pane_t

0xb1e1,	// (0x0009efda) bg_button_pane_cp05_ParamLimits

0xb1e1,	// (0x0009efda) bg_button_pane_cp05

0xb9c2,	// (0x0009f7bb) cell_vitu_itu_pane_g1

0x9ced,	// (0x0009dae6) cell_vitu_itu_pane_t1_ParamLimits

0x9ced,	// (0x0009dae6) cell_vitu_itu_pane_t1

0x9ced,	// (0x0009dae6) cell_vitu_itu_pane_t2_ParamLimits

0x9ced,	// (0x0009dae6) cell_vitu_itu_pane_t2

0x0002,

0xf708,	// (0x000a3501) cell_vitu_itu_pane_t_ParamLimits

0xf708,	// (0x000a3501) cell_vitu_itu_pane_t

0xd6dd,	// (0x000a14d6) bg_button_pane_cp07

0xe37a,	// (0x000a2173) cell_vitu_function_pane_g1

0x9b34,	// (0x0009d92d) main_calc_pane_g1

0x08bd,	// (0x000946b6) aid_visual_content_pane

0x9b2a,	// (0x0009d923) main_vradio_pane

0xe33c,	// (0x000a2135) main_vradio_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) main_vradio_pane_g1

0xe34a,	// (0x000a2143) main_vradio_pane_g2_ParamLimits

0xe34a,	// (0x000a2143) main_vradio_pane_g2

0x0001,

0x05b3,	// (0x000943ac) main_vradio_pane_g_ParamLimits

0x05b3,	// (0x000943ac) main_vradio_pane_g

0xe384,	// (0x000a217d) main_vradio_pane_t1_ParamLimits

0xe384,	// (0x000a217d) main_vradio_pane_t1

0xe384,	// (0x000a217d) main_vradio_pane_t2_ParamLimits

0xe384,	// (0x000a217d) main_vradio_pane_t2

0xe398,	// (0x000a2191) main_vradio_pane_t3_ParamLimits

0xe398,	// (0x000a2191) main_vradio_pane_t3

0x0002,

0xf70f,	// (0x000a3508) main_vradio_pane_t_ParamLimits

0xf70f,	// (0x000a3508) main_vradio_pane_t

0xe295,	// (0x000a208e) vradio_rocker_control_pane_ParamLimits

0xe295,	// (0x000a208e) vradio_rocker_control_pane

0xe295,	// (0x000a208e) vradio_station_info_pane_ParamLimits

0xe295,	// (0x000a208e) vradio_station_info_pane

0xe295,	// (0x000a208e) vradio_frequency_info_pane_ParamLimits

0xe295,	// (0x000a208e) vradio_frequency_info_pane

0xe37a,	// (0x000a2173) vradio_station_info_pane_g1

0x9ced,	// (0x0009dae6) vradio_station_info_pane_t1_ParamLimits

0x9ced,	// (0x0009dae6) vradio_station_info_pane_t1

0xe398,	// (0x000a2191) vradio_station_info_pane_t2_ParamLimits

0xe398,	// (0x000a2191) vradio_station_info_pane_t2

0x0001,

0xf716,	// (0x000a350f) vradio_station_info_pane_t_ParamLimits

0xf716,	// (0x000a350f) vradio_station_info_pane_t

0xd6dd,	// (0x000a14d6) vradio_tuning_pane

0x4787,	// (0x00098580) vradio_rocker_control_pane_g1

0xb9de,	// (0x0009f7d7) vradio_rocker_control_pane_g2

0x4791,	// (0x0009858a) vradio_rocker_control_pane_g3

0x479b,	// (0x00098594) vradio_rocker_control_pane_g4

0x47a5,	// (0x0009859e) vradio_rocker_control_pane_g5

0x0004,

0xf71b,	// (0x000a3514) vradio_rocker_control_pane_g

0xe37a,	// (0x000a2173) vradio_frequency_info_pane_g1

0xe384,	// (0x000a217d) vradio_frequency_info_pane_t1_ParamLimits

0xe384,	// (0x000a217d) vradio_frequency_info_pane_t1

0x47af,	// (0x000985a8) vradio_tuning_pane_g1

0x47bc,	// (0x000985b5) vradio_tuning_pane_t1

0x9adb,	// (0x0009d8d4) area_side_right_pane_ParamLimits

0x9adb,	// (0x0009d8d4) area_side_right_pane

0xae7a,	// (0x0009ec73) status_small_pane_g1

0xae82,	// (0x0009ec7b) status_small_pane_g2

0xae8b,	// (0x0009ec84) status_small_pane_g3

0xae94,	// (0x0009ec8d) status_small_pane_g4

0x0003,

0xf4fc,	// (0x000a32f5) status_small_pane_g

0xae9d,	// (0x0009ec96) status_small_pane_t1

0x9b2a,	// (0x0009d923) main_video3_pane

0xd6dd,	// (0x000a14d6) cams_zoom_vslider_pane

0xb9e6,	// (0x0009f7df) image3_wide_pane_ParamLimits

0xb9e6,	// (0x0009f7df) image3_wide_pane

0xd6dd,	// (0x000a14d6) image3_wide_small_pane

0xba00,	// (0x0009f7f9) main_video3_pane_g1_ParamLimits

0xba00,	// (0x0009f7f9) main_video3_pane_g1

0xba00,	// (0x0009f7f9) main_video3_pane_g2_ParamLimits

0xba00,	// (0x0009f7f9) main_video3_pane_g2

0x0001,

0xf726,	// (0x000a351f) main_video3_pane_g_ParamLimits

0xf726,	// (0x000a351f) main_video3_pane_g

0xba1e,	// (0x0009f817) main_video3_pane_t1_ParamLimits

0xba1e,	// (0x0009f817) main_video3_pane_t1

0xba1e,	// (0x0009f817) main_video3_pane_t2_ParamLimits

0xba1e,	// (0x0009f817) main_video3_pane_t2

0xba1e,	// (0x0009f817) main_video3_pane_t3_ParamLimits

0xba1e,	// (0x0009f817) main_video3_pane_t3

0x0002,

0xf72b,	// (0x000a3524) main_video3_pane_t_ParamLimits

0xf72b,	// (0x000a3524) main_video3_pane_t

0xe37a,	// (0x000a2173) cams_zoom_vslider_pane_g1

0xe37a,	// (0x000a2173) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x000a2e85) cams_zoom_vslider_pane_g

0xd6dd,	// (0x000a14d6) small_slider_vertical_pane

0xe37a,	// (0x000a2173) small_slider_vertical_pane_g1

0xe37a,	// (0x000a2173) small_slider_vertical_pane_g2

0xba45,	// (0x0009f83e) small_slider_vertical_pane_g3

0x0002,

0xf732,	// (0x000a352b) small_slider_vertical_pane_g

0x9b2a,	// (0x0009d923) main_hwr_training_pane

0xba4e,	// (0x0009f847) hwr_training_instruct_pane_ParamLimits

0xba4e,	// (0x0009f847) hwr_training_instruct_pane

0x47cb,	// (0x000985c4) hwr_training_navi_pane_ParamLimits

0x47cb,	// (0x000985c4) hwr_training_navi_pane

0x47ea,	// (0x000985e3) hwr_training_write_pane_ParamLimits

0x47ea,	// (0x000985e3) hwr_training_write_pane

0xd6dd,	// (0x000a14d6) bg_frame_shadow_pane

0xba85,	// (0x0009f87e) hwr_training_write_pane_g1

0xba8d,	// (0x0009f886) hwr_training_write_pane_g2

0xba95,	// (0x0009f88e) hwr_training_write_pane_g3

0xba9d,	// (0x0009f896) hwr_training_write_pane_g4

0xbaa5,	// (0x0009f89e) hwr_training_write_pane_g5

0xbaad,	// (0x0009f8a6) hwr_training_write_pane_g6

0xbab5,	// (0x0009f8ae) hwr_training_write_pane_g7

0x0006,

0xf739,	// (0x000a3532) hwr_training_write_pane_g

0xbabd,	// (0x0009f8b6) hwr_training_navi_pane_g1_ParamLimits

0xbabd,	// (0x0009f8b6) hwr_training_navi_pane_g1

0xbacf,	// (0x0009f8c8) hwr_training_navi_pane_g2_ParamLimits

0xbacf,	// (0x0009f8c8) hwr_training_navi_pane_g2

0xbae1,	// (0x0009f8da) hwr_training_navi_pane_g3_ParamLimits

0xbae1,	// (0x0009f8da) hwr_training_navi_pane_g3

0xbaf1,	// (0x0009f8ea) hwr_training_navi_pane_g4_ParamLimits

0xbaf1,	// (0x0009f8ea) hwr_training_navi_pane_g4

0x0004,

0xf748,	// (0x000a3541) hwr_training_navi_pane_g_ParamLimits

0xf748,	// (0x000a3541) hwr_training_navi_pane_g

0xbafe,	// (0x0009f8f7) hwr_training_navi_pane_t1

0x4832,	// (0x0009862b) list_single_hwr_training_instruct_pane_ParamLimits

0x4832,	// (0x0009862b) list_single_hwr_training_instruct_pane

0xbb0c,	// (0x0009f905) list_single_hwr_training_instruct_pane_t1

0xb33b,	// (0x0009f134) bg_frame_shadow_pane_g1

0xbb1b,	// (0x0009f914) bg_frame_shadow_pane_g2

0xbb23,	// (0x0009f91c) bg_frame_shadow_pane_g3

0xbb2b,	// (0x0009f924) bg_frame_shadow_pane_g4

0xbb33,	// (0x0009f92c) bg_frame_shadow_pane_g5

0xbb3b,	// (0x0009f934) bg_frame_shadow_pane_g6

0xbb43,	// (0x0009f93c) bg_frame_shadow_pane_g7

0xe490,	// (0x000a2289) bg_frame_shadow_pane_g8

0x0007,

0xf753,	// (0x000a354c) bg_frame_shadow_pane_g

0x9b2a,	// (0x0009d923) main_video_tele_dialer_pane

0x4847,	// (0x00098640) aid_size_cell_video_keypad_ParamLimits

0x4847,	// (0x00098640) aid_size_cell_video_keypad

0x4861,	// (0x0009865a) grid_video_dialer_keypad_pane_ParamLimits

0x4861,	// (0x0009865a) grid_video_dialer_keypad_pane

0x48ad,	// (0x000986a6) video_down_pane_cp_ParamLimits

0x48ad,	// (0x000986a6) video_down_pane_cp

0x48df,	// (0x000986d8) cell_video_dialer_keypad_pane_ParamLimits

0x48df,	// (0x000986d8) cell_video_dialer_keypad_pane

0xbb4b,	// (0x0009f944) bg_button_pane_cp08_ParamLimits

0xbb4b,	// (0x0009f944) bg_button_pane_cp08

0x4901,	// (0x000986fa) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4901,	// (0x000986fa) cell_video_dialer_keypad_pane_g1

0xb68b,	// (0x0009f484) mup3_rocker2_pane_ParamLimits

0xb68b,	// (0x0009f484) mup3_rocker2_pane

0xe37a,	// (0x000a2173) mup3_rocker2_pane_g1

0x3435,	// (0x0009722e) main_dialer2_pane

0x9b2a,	// (0x0009d923) main_mp4_pane

0xbb75,	// (0x0009f96e) main_mp4_pane_g1_ParamLimits

0xbb75,	// (0x0009f96e) main_mp4_pane_g1

0xbb75,	// (0x0009f96e) main_mp4_pane_g2_ParamLimits

0xbb75,	// (0x0009f96e) main_mp4_pane_g2

0x4938,	// (0x00098731) main_mp4_pane_g3_ParamLimits

0x4938,	// (0x00098731) main_mp4_pane_g3

0xbb93,	// (0x0009f98c) main_mp4_pane_g4_ParamLimits

0xbb93,	// (0x0009f98c) main_mp4_pane_g4

0xbbbb,	// (0x0009f9b4) main_mp4_pane_g5_ParamLimits

0xbbbb,	// (0x0009f9b4) main_mp4_pane_g5

0x0007,

0xf773,	// (0x000a356c) main_mp4_pane_g_ParamLimits

0xf773,	// (0x000a356c) main_mp4_pane_g

0xbc23,	// (0x0009fa1c) main_mp4_pane_t1_ParamLimits

0xbc23,	// (0x0009fa1c) main_mp4_pane_t1

0xbc85,	// (0x0009fa7e) main_mp4_pane_t2_ParamLimits

0xbc85,	// (0x0009fa7e) main_mp4_pane_t2

0xbce9,	// (0x0009fae2) main_mp4_pane_t3_ParamLimits

0xbce9,	// (0x0009fae2) main_mp4_pane_t3

0xbd47,	// (0x0009fb40) main_mp4_pane_t4_ParamLimits

0xbd47,	// (0x0009fb40) main_mp4_pane_t4

0x0003,

0xf784,	// (0x000a357d) main_mp4_pane_t_ParamLimits

0xf784,	// (0x000a357d) main_mp4_pane_t

0xbda5,	// (0x0009fb9e) mp4_progress_pane_ParamLimits

0xbda5,	// (0x0009fb9e) mp4_progress_pane

0xbdd9,	// (0x0009fbd2) mp4_rocker_pane_ParamLimits

0xbdd9,	// (0x0009fbd2) mp4_rocker_pane

0xcb17,	// (0x000a0910) mp4_progress_pane_t1

0xcb36,	// (0x000a092f) mp4_progress_pane_t2

0x0001,

0xf78d,	// (0x000a3586) mp4_progress_pane_t

0xcb55,	// (0x000a094e) mup_progress_pane_cp04

0xb156,	// (0x0009ef4f) mp4_rocker_pane_g1

0x9b1c,	// (0x0009d915) aid_cell_size_keypad2_ParamLimits

0x9b1c,	// (0x0009d915) aid_cell_size_keypad2

0x9b1c,	// (0x0009d915) dialer2_ne_pane_ParamLimits

0x9b1c,	// (0x0009d915) dialer2_ne_pane

0x9b1c,	// (0x0009d915) grid_dialer2_keypad_pane_ParamLimits

0x9b1c,	// (0x0009d915) grid_dialer2_keypad_pane

0xb1e1,	// (0x0009efda) bg_popup_call_pane_cp07_ParamLimits

0xb1e1,	// (0x0009efda) bg_popup_call_pane_cp07

0x4968,	// (0x00098761) dialer2_ne_pane_t1_ParamLimits

0x4968,	// (0x00098761) dialer2_ne_pane_t1

0x49a6,	// (0x0009879f) cell_dialer2_keypad_pane_ParamLimits

0x49a6,	// (0x0009879f) cell_dialer2_keypad_pane

0xb1e1,	// (0x0009efda) bg_button_pane_pane_cp04_ParamLimits

0xb1e1,	// (0x0009efda) bg_button_pane_pane_cp04

0xe33c,	// (0x000a2135) cell_dialer2_keypad_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) cell_dialer2_keypad_pane_g1

0x1514,	// (0x0009530d) aid_placing_vt_set_content_ParamLimits

0x1514,	// (0x0009530d) aid_placing_vt_set_content

0x153c,	// (0x00095335) aid_placing_vt_set_title_ParamLimits

0x153c,	// (0x00095335) aid_placing_vt_set_title

0x9b2a,	// (0x0009d923) main_image3_pane

0x4a1b,	// (0x00098814) area_side_right_pane_cp01_ParamLimits

0x4a1b,	// (0x00098814) area_side_right_pane_cp01

0x4a32,	// (0x0009882b) main_image3_pane_g1_ParamLimits

0x4a32,	// (0x0009882b) main_image3_pane_g1

0x4a40,	// (0x00098839) main_image3_pane_g2_ParamLimits

0x4a40,	// (0x00098839) main_image3_pane_g2

0x4a68,	// (0x00098861) main_image3_pane_g3_ParamLimits

0x4a68,	// (0x00098861) main_image3_pane_g3

0x4a92,	// (0x0009888b) main_image3_pane_g4_ParamLimits

0x4a92,	// (0x0009888b) main_image3_pane_g4

0x0003,

0xf79c,	// (0x000a3595) main_image3_pane_g_ParamLimits

0xf79c,	// (0x000a3595) main_image3_pane_g

0x4abc,	// (0x000988b5) main_image3_pane_t1_ParamLimits

0x4abc,	// (0x000988b5) main_image3_pane_t1

0x4b14,	// (0x0009890d) main_image3_pane_t2_ParamLimits

0x4b14,	// (0x0009890d) main_image3_pane_t2

0x4b66,	// (0x0009895f) main_image3_pane_t3_ParamLimits

0x4b66,	// (0x0009895f) main_image3_pane_t3

0x0003,

0xf7a5,	// (0x000a359e) main_image3_pane_t_ParamLimits

0xf7a5,	// (0x000a359e) main_image3_pane_t

0xe295,	// (0x000a208e) grid_sctrl_middle_pane_cp01_ParamLimits

0xe295,	// (0x000a208e) grid_sctrl_middle_pane_cp01

0x4bee,	// (0x000989e7) cell_sctrl_middle_pane_cp01_ParamLimits

0x4bee,	// (0x000989e7) cell_sctrl_middle_pane_cp01

0x4c0b,	// (0x00098a04) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4c0b,	// (0x00098a04) cell_sctrl_middle_pane_cp01_g1

0x9b2a,	// (0x0009d923) main_call4_pane

0x4c21,	// (0x00098a1a) aid_size_button_call4_ParamLimits

0x4c21,	// (0x00098a1a) aid_size_button_call4

0x4c54,	// (0x00098a4d) call4_windows_pane_ParamLimits

0x4c54,	// (0x00098a4d) call4_windows_pane

0x4c73,	// (0x00098a6c) grid_call4_button_pane_ParamLimits

0x4c73,	// (0x00098a6c) grid_call4_button_pane

0x4ca6,	// (0x00098a9f) call4_windows_conf_pane

0x4cbd,	// (0x00098ab6) popup_call4_audio_first_window_ParamLimits

0x4cbd,	// (0x00098ab6) popup_call4_audio_first_window

0x4d0d,	// (0x00098b06) popup_call4_audio_second_window_ParamLimits

0x4d0d,	// (0x00098b06) popup_call4_audio_second_window

0x4d24,	// (0x00098b1d) popup_call4_audio_wait_window_ParamLimits

0x4d24,	// (0x00098b1d) popup_call4_audio_wait_window

0x4d32,	// (0x00098b2b) cell_call4_button_pane_ParamLimits

0x4d32,	// (0x00098b2b) cell_call4_button_pane

0x4d57,	// (0x00098b50) bg_button_pane_cp09_ParamLimits

0x4d57,	// (0x00098b50) bg_button_pane_cp09

0x4d63,	// (0x00098b5c) cell_call4_button_pane_g1_ParamLimits

0x4d63,	// (0x00098b5c) cell_call4_button_pane_g1

0x4d89,	// (0x00098b82) cell_call4_button_pane_t1_ParamLimits

0x4d89,	// (0x00098b82) cell_call4_button_pane_t1

0xcb9e,	// (0x000a0997) popup_call4_audio_conf_window_ParamLimits

0xcb9e,	// (0x000a0997) popup_call4_audio_conf_window

0x42a9,	// (0x000980a2) mup3_progress_pane_t1_ParamLimits

0x42c8,	// (0x000980c1) mup3_progress_pane_t2_ParamLimits

0xb69f,	// (0x0009f498) mup3_progress_pane_t3_ParamLimits

0xf689,	// (0x000a3482) mup3_progress_pane_t_ParamLimits

0xb6bc,	// (0x0009f4b5) mup_progress_pane_cp03_ParamLimits

0xb6d4,	// (0x0009f4cd) mup3_control_keys_pane_g4_copy1

0xbdd9,	// (0x0009fbd2) mp4_rocker2_pane_ParamLimits

0xbdd9,	// (0x0009fbd2) mp4_rocker2_pane

0xb995,	// (0x0009f78e) mp4_rocker2_pane_g1

0xb995,	// (0x0009f78e) mp4_rocker2_pane_g2

0xb995,	// (0x0009f78e) mp4_rocker2_pane_g3

0xb995,	// (0x0009f78e) mp4_rocker2_pane_g4

0xb995,	// (0x0009f78e) mp4_rocker2_pane_g5

0x0004,

0xf7ae,	// (0x000a35a7) mp4_rocker2_pane_g

0x9b2a,	// (0x0009d923) main_camera4_pane

0x9b2a,	// (0x0009d923) main_video4_pane

0x487b,	// (0x00098674) main_video_tele_dialer_pane_t1_ParamLimits

0x487b,	// (0x00098674) main_video_tele_dialer_pane_t1

0x4894,	// (0x0009868d) main_video_tele_dialer_pane_t2_ParamLimits

0x4894,	// (0x0009868d) main_video_tele_dialer_pane_t2

0x0001,

0xf764,	// (0x000a355d) main_video_tele_dialer_pane_t_ParamLimits

0xf764,	// (0x000a355d) main_video_tele_dialer_pane_t

0x4dc7,	// (0x00098bc0) cam4_autofocus_pane_ParamLimits

0x4dc7,	// (0x00098bc0) cam4_autofocus_pane

0x4ddd,	// (0x00098bd6) cam4_image_uncrop_pane_ParamLimits

0x4ddd,	// (0x00098bd6) cam4_image_uncrop_pane

0x4df7,	// (0x00098bf0) cam4_indicators_pane_ParamLimits

0x4df7,	// (0x00098bf0) cam4_indicators_pane

0x4e22,	// (0x00098c1b) main_camera4_pane_g1_ParamLimits

0x4e22,	// (0x00098c1b) main_camera4_pane_g1

0x4e34,	// (0x00098c2d) main_camera4_pane_g2_ParamLimits

0x4e34,	// (0x00098c2d) main_camera4_pane_g2

0x4e47,	// (0x00098c40) main_camera4_pane_g3_ParamLimits

0x4e47,	// (0x00098c40) main_camera4_pane_g3

0x4e5a,	// (0x00098c53) main_camera4_pane_g4_ParamLimits

0x4e5a,	// (0x00098c53) main_camera4_pane_g4

0x4e6d,	// (0x00098c66) main_camera4_pane_g5_ParamLimits

0x4e6d,	// (0x00098c66) main_camera4_pane_g5

0x0005,

0xf7b9,	// (0x000a35b2) main_camera4_pane_g_ParamLimits

0xf7b9,	// (0x000a35b2) main_camera4_pane_g

0x4e91,	// (0x00098c8a) main_camera4_pane_t1_ParamLimits

0x4e91,	// (0x00098c8a) main_camera4_pane_t1

0x4eef,	// (0x00098ce8) bg_tb_trans_pane_cp06

0xbe75,	// (0x0009fc6e) cam4_indicators_pane_g1

0xbe86,	// (0x0009fc7f) cam4_indicators_pane_g2

0x0002,

0xf7d4,	// (0x000a35cd) cam4_indicators_pane_g

0xbea4,	// (0x0009fc9d) cam4_indicators_pane_t1

0x4f15,	// (0x00098d0e) main_video4_pane_g1_ParamLimits

0x4f15,	// (0x00098d0e) main_video4_pane_g1

0x4f24,	// (0x00098d1d) main_video4_pane_g2_ParamLimits

0x4f24,	// (0x00098d1d) main_video4_pane_g2

0x4f33,	// (0x00098d2c) main_video4_pane_g3_ParamLimits

0x4f33,	// (0x00098d2c) main_video4_pane_g3

0x4f42,	// (0x00098d3b) main_video4_pane_g4_ParamLimits

0x4f42,	// (0x00098d3b) main_video4_pane_g4

0x0004,

0xf7db,	// (0x000a35d4) main_video4_pane_g_ParamLimits

0xf7db,	// (0x000a35d4) main_video4_pane_g

0x4f60,	// (0x00098d59) vid4_indicators_pane_ParamLimits

0x4f60,	// (0x00098d59) vid4_indicators_pane

0x4f8e,	// (0x00098d87) video4_image_uncrop_cif_pane_ParamLimits

0x4f8e,	// (0x00098d87) video4_image_uncrop_cif_pane

0x4fa8,	// (0x00098da1) video4_image_uncrop_nhd_pane_ParamLimits

0x4fa8,	// (0x00098da1) video4_image_uncrop_nhd_pane

0x4ddd,	// (0x00098bd6) video4_image_uncrop_vga_pane_ParamLimits

0x4ddd,	// (0x00098bd6) video4_image_uncrop_vga_pane

0x9b1c,	// (0x0009d915) bg_tb_trans_pane_cp07

0xbed0,	// (0x0009fcc9) vid4_indicators_pane_g1

0xbee4,	// (0x0009fcdd) vid4_indicators_pane_g2

0xbef8,	// (0x0009fcf1) vid4_indicators_pane_g3

0x0004,

0xf7e6,	// (0x000a35df) vid4_indicators_pane_g

0xbf27,	// (0x0009fd20) vid4_indicators_pane_t1

0x4fbc,	// (0x00098db5) cam4_autofocus_pane_g1

0x4fc4,	// (0x00098dbd) cam4_autofocus_pane_g2

0x4fcc,	// (0x00098dc5) cam4_autofocus_pane_g3

0x0002,

0xf7f1,	// (0x000a35ea) cam4_autofocus_pane_g

0x4fd4,	// (0x00098dcd) cam4_autofocus_pane_g3_copy1

0x48c3,	// (0x000986bc) video_down_pane_cp_t1

0x48d1,	// (0x000986ca) video_down_pane_cp_t2

0x0001,

0xf769,	// (0x000a3562) video_down_pane_cp_t

0x9b1c,	// (0x0009d915) popup_vitu2_window_ParamLimits

0x9b1c,	// (0x0009d915) popup_vitu2_window

0x4fdc,	// (0x00098dd5) aid_size_cell2_itu2_ParamLimits

0x4fdc,	// (0x00098dd5) aid_size_cell2_itu2

0x5002,	// (0x00098dfb) aid_size_cell_itu2_ParamLimits

0x5002,	// (0x00098dfb) aid_size_cell_itu2

0x505e,	// (0x00098e57) bg_popup_window_pane_cp09_ParamLimits

0x505e,	// (0x00098e57) bg_popup_window_pane_cp09

0x506c,	// (0x00098e65) field_vitu2_entry_pane_ParamLimits

0x506c,	// (0x00098e65) field_vitu2_entry_pane

0x5092,	// (0x00098e8b) grid_vitu2_function_pane_ParamLimits

0x5092,	// (0x00098e8b) grid_vitu2_function_pane

0x50e3,	// (0x00098edc) grid_vitu2_itu_pane_ParamLimits

0x50e3,	// (0x00098edc) grid_vitu2_itu_pane

0x5179,	// (0x00098f72) cell_vitu2_itu_pane_ParamLimits

0x5179,	// (0x00098f72) cell_vitu2_itu_pane

0x51a5,	// (0x00098f9e) cell_vitu2_function_pane_ParamLimits

0x51a5,	// (0x00098f9e) cell_vitu2_function_pane

0xcbb2,	// (0x000a09ab) bg_popup_call_pane_cp08_ParamLimits

0xcbb2,	// (0x000a09ab) bg_popup_call_pane_cp08

0xcbc9,	// (0x000a09c2) field_vitu2_entry_pane_g1

0xcbd5,	// (0x000a09ce) field_vitu2_entry_pane_g2

0x0002,

0xf7f8,	// (0x000a35f1) field_vitu2_entry_pane_g

0x51e4,	// (0x00098fdd) field_vitu2_entry_pane_t1_ParamLimits

0x51e4,	// (0x00098fdd) field_vitu2_entry_pane_t1

0xcbe1,	// (0x000a09da) field_vitu2_entry_pane_t2_ParamLimits

0xcbe1,	// (0x000a09da) field_vitu2_entry_pane_t2

0x0001,

0xf7ff,	// (0x000a35f8) field_vitu2_entry_pane_t_ParamLimits

0xf7ff,	// (0x000a35f8) field_vitu2_entry_pane_t

0x5213,	// (0x0009900c) bg_button_pane_cp010_ParamLimits

0x5213,	// (0x0009900c) bg_button_pane_cp010

0x5221,	// (0x0009901a) cell_vitu2_itu_pane_g1

0x5247,	// (0x00099040) cell_vitu2_itu_pane_t1_ParamLimits

0x5247,	// (0x00099040) cell_vitu2_itu_pane_t1

0x52a5,	// (0x0009909e) cell_vitu2_itu_pane_t2_ParamLimits

0x52a5,	// (0x0009909e) cell_vitu2_itu_pane_t2

0x0002,

0xf809,	// (0x000a3602) cell_vitu2_itu_pane_t_ParamLimits

0xf809,	// (0x000a3602) cell_vitu2_itu_pane_t

0x9b1c,	// (0x0009d915) bg_button_pane_cp011

0x5391,	// (0x0009918a) cell_vitu2_function_pane_g1

0x9b2a,	// (0x0009d923) main_myfav_hc_pane

0x4bb6,	// (0x000989af) popup_image3_note_pane_ParamLimits

0x4bb6,	// (0x000989af) popup_image3_note_pane

0x4bd2,	// (0x000989cb) popup_image3_tool_bar_pane_ParamLimits

0x4bd2,	// (0x000989cb) popup_image3_tool_bar_pane

0x5333,	// (0x0009912c) cell_vitu2_itu_pane_t3_ParamLimits

0x5333,	// (0x0009912c) cell_vitu2_itu_pane_t3

0xd6dd,	// (0x000a14d6) bg_popup_trans_pane

0xcc06,	// (0x000a09ff) grid_image3_tool_bar_pane

0xcc10,	// (0x000a0a09) bg_popup_trans_pane_g1

0xe809,	// (0x000a2602) bg_popup_trans_pane_g2

0xcc18,	// (0x000a0a11) bg_popup_trans_pane_g3

0xcc20,	// (0x000a0a19) bg_popup_trans_pane_g4

0xcc28,	// (0x000a0a21) bg_popup_trans_pane_g5

0xcc30,	// (0x000a0a29) bg_popup_trans_pane_g6

0xcc38,	// (0x000a0a31) bg_popup_trans_pane_g7

0xcc40,	// (0x000a0a39) bg_popup_trans_pane_g8

0xe7e9,	// (0x000a25e2) bg_popup_trans_pane_g9

0x0008,

0xf810,	// (0x000a3609) bg_popup_trans_pane_g

0xcc48,	// (0x000a0a41) cell_image3_tool_bar_pane_ParamLimits

0xcc48,	// (0x000a0a41) cell_image3_tool_bar_pane

0xe37a,	// (0x000a2173) cell_image3_tool_bar_pane_g1

0xd6dd,	// (0x000a14d6) bg_popup_trans_pane_cp1

0xcc5c,	// (0x000a0a55) popup_image3_note_pane_t1

0xcc6a,	// (0x000a0a63) popup_image3_note_pane_t2

0xcc78,	// (0x000a0a71) popup_image3_note_pane_t3

0x0002,

0xf823,	// (0x000a361c) popup_image3_note_pane_t

0xcc86,	// (0x000a0a7f) popup_image3_note_pane_t3_copy1

0x53a5,	// (0x0009919e) bg_myfav_hc_instruction_pane_ParamLimits

0x53a5,	// (0x0009919e) bg_myfav_hc_instruction_pane

0x53b9,	// (0x000991b2) cell_myfav_contact_pane_ParamLimits

0x53b9,	// (0x000991b2) cell_myfav_contact_pane

0x53d7,	// (0x000991d0) cell_myfav_contact_pane_cp1_ParamLimits

0x53d7,	// (0x000991d0) cell_myfav_contact_pane_cp1

0x53ef,	// (0x000991e8) cell_myfav_contact_pane_cp2_ParamLimits

0x53ef,	// (0x000991e8) cell_myfav_contact_pane_cp2

0x5407,	// (0x00099200) cell_myfav_contact_pane_cp3_ParamLimits

0x5407,	// (0x00099200) cell_myfav_contact_pane_cp3

0x541e,	// (0x00099217) cell_myfav_contact_pane_cp4_ParamLimits

0x541e,	// (0x00099217) cell_myfav_contact_pane_cp4

0x5436,	// (0x0009922f) cell_myfav_contact_pane_cp5_ParamLimits

0x5436,	// (0x0009922f) cell_myfav_contact_pane_cp5

0x544a,	// (0x00099243) cell_myfav_contact_pane_cp6_ParamLimits

0x544a,	// (0x00099243) cell_myfav_contact_pane_cp6

0x5460,	// (0x00099259) cell_myfav_contact_pane_cp7_ParamLimits

0x5460,	// (0x00099259) cell_myfav_contact_pane_cp7

0xcc94,	// (0x000a0a8d) listscroll_gen_pane_cp05

0x547a,	// (0x00099273) main_myfav_hc_pane_g1_ParamLimits

0x547a,	// (0x00099273) main_myfav_hc_pane_g1

0x5494,	// (0x0009928d) main_myfav_hc_pane_g2_ParamLimits

0x5494,	// (0x0009928d) main_myfav_hc_pane_g2

0x0002,

0xf82a,	// (0x000a3623) main_myfav_hc_pane_g_ParamLimits

0xf82a,	// (0x000a3623) main_myfav_hc_pane_g

0x54c6,	// (0x000992bf) main_myfav_hc_pane_t1_ParamLimits

0x54c6,	// (0x000992bf) main_myfav_hc_pane_t1

0xcc9d,	// (0x000a0a96) main_myfav_hc_pane_t2_ParamLimits

0xcc9d,	// (0x000a0a96) main_myfav_hc_pane_t2

0xccaf,	// (0x000a0aa8) main_myfav_hc_pane_t3_ParamLimits

0xccaf,	// (0x000a0aa8) main_myfav_hc_pane_t3

0x54dd,	// (0x000992d6) main_myfav_hc_pane_t4_ParamLimits

0x54dd,	// (0x000992d6) main_myfav_hc_pane_t4

0x0004,

0xf831,	// (0x000a362a) main_myfav_hc_pane_t_ParamLimits

0xf831,	// (0x000a362a) main_myfav_hc_pane_t

0xe37a,	// (0x000a2173) bg_myfav_hc_instruction_pane_g1

0xccc1,	// (0x000a0aba) cell_myfav_contact_pane_g1_ParamLimits

0xccc1,	// (0x000a0aba) cell_myfav_contact_pane_g1

0xccc1,	// (0x000a0aba) cell_myfav_contact_pane_g2_ParamLimits

0xccc1,	// (0x000a0aba) cell_myfav_contact_pane_g2

0xcccd,	// (0x000a0ac6) cell_myfav_contact_pane_g3_ParamLimits

0xcccd,	// (0x000a0ac6) cell_myfav_contact_pane_g3

0xe34a,	// (0x000a2143) cell_myfav_contact_pane_g4_ParamLimits

0xe34a,	// (0x000a2143) cell_myfav_contact_pane_g4

0xccda,	// (0x000a0ad3) cell_myfav_contact_pane_g5_ParamLimits

0xccda,	// (0x000a0ad3) cell_myfav_contact_pane_g5

0x0004,

0xf83c,	// (0x000a3635) cell_myfav_contact_pane_g_ParamLimits

0xf83c,	// (0x000a3635) cell_myfav_contact_pane_g

0x54ae,	// (0x000992a7) main_myfav_hc_pane_g3_ParamLimits

0x54ae,	// (0x000992a7) main_myfav_hc_pane_g3

0x09f8,	// (0x000947f1) popup_adpt_find_window

0x5505,	// (0x000992fe) afind_page_pane_ParamLimits

0x5505,	// (0x000992fe) afind_page_pane

0x551a,	// (0x00099313) aid_size_cell_afind_ParamLimits

0x551a,	// (0x00099313) aid_size_cell_afind

0x5538,	// (0x00099331) bg_popup_sub_pane_cp09_ParamLimits

0x5538,	// (0x00099331) bg_popup_sub_pane_cp09

0x5545,	// (0x0009933e) find_pane_cp01_ParamLimits

0x5545,	// (0x0009933e) find_pane_cp01

0xcce6,	// (0x000a0adf) grid_afind_control_pane_ParamLimits

0xcce6,	// (0x000a0adf) grid_afind_control_pane

0x5552,	// (0x0009934b) grid_afind_pane_ParamLimits

0x5552,	// (0x0009934b) grid_afind_pane

0x5574,	// (0x0009936d) cell_afind_pane_ParamLimits

0x5574,	// (0x0009936d) cell_afind_pane

0xe37a,	// (0x000a2173) afind_page_pane_g1

0x55db,	// (0x000993d4) afind_page_pane_g2

0x55e3,	// (0x000993dc) afind_page_pane_g3

0x0002,

0xf847,	// (0x000a3640) afind_page_pane_g

0x55eb,	// (0x000993e4) afind_page_pane_t1

0xcd0c,	// (0x000a0b05) cell_afind_grid_control_pane_ParamLimits

0xcd0c,	// (0x000a0b05) cell_afind_grid_control_pane

0xcd1b,	// (0x000a0b14) bg_button_pane_cp69_ParamLimits

0xcd1b,	// (0x000a0b14) bg_button_pane_cp69

0x55f9,	// (0x000993f2) cell_afind_pane_g1_ParamLimits

0x55f9,	// (0x000993f2) cell_afind_pane_g1

0x5606,	// (0x000993ff) cell_afind_pane_t1_ParamLimits

0x5606,	// (0x000993ff) cell_afind_pane_t1

0xcd27,	// (0x000a0b20) bg_button_pane_cp72

0xcd2f,	// (0x000a0b28) cell_afind_grid_control_pane_g1

0x2f36,	// (0x00096d2f) aid_image_placing_area_ParamLimits

0x2f36,	// (0x00096d2f) aid_image_placing_area

0xe33c,	// (0x000a2135) field_vitu_entry_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) field_vitu_entry_pane_g1

0xe33c,	// (0x000a2135) field_vitu_entry_pane_g2_ParamLimits

0xe33c,	// (0x000a2135) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x000a2f92) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x000a2f92) field_vitu_entry_pane_g

0xb9c2,	// (0x0009f7bb) cell_vitu_itu_pane_g1_ParamLimits

0xb9a5,	// (0x0009f79e) cell_vitu_itu_pane_t3_ParamLimits

0xb9a5,	// (0x0009f79e) cell_vitu_itu_pane_t3

0xcb17,	// (0x000a0910) mp4_progress_pane_t1_ParamLimits

0xcb36,	// (0x000a092f) mp4_progress_pane_t2_ParamLimits

0xf78d,	// (0x000a3586) mp4_progress_pane_t_ParamLimits

0xcb55,	// (0x000a094e) mup_progress_pane_cp04_ParamLimits

0x54f1,	// (0x000992ea) main_myfav_hc_pane_t5_ParamLimits

0x54f1,	// (0x000992ea) main_myfav_hc_pane_t5

0x9acb,	// (0x0009d8c4) aid_zoom_text_primary

0x09f8,	// (0x000947f1) popup_adpt_find_window_ParamLimits

0x9b1c,	// (0x0009d915) main_cam_set_pane

0x4e0e,	// (0x00098c07) cam4_zoom_pane_ParamLimits

0x4e0e,	// (0x00098c07) cam4_zoom_pane

0x5618,	// (0x00099411) main_cam_set_pane_g1_ParamLimits

0x5618,	// (0x00099411) main_cam_set_pane_g1

0x5626,	// (0x0009941f) main_cam_set_pane_g2_ParamLimits

0x5626,	// (0x0009941f) main_cam_set_pane_g2

0x0001,

0xf84e,	// (0x000a3647) main_cam_set_pane_g_ParamLimits

0xf84e,	// (0x000a3647) main_cam_set_pane_g

0x5647,	// (0x00099440) main_cam_set_pane_t1_ParamLimits

0x5647,	// (0x00099440) main_cam_set_pane_t1

0x5662,	// (0x0009945b) main_cset_listscroll_pane_ParamLimits

0x5662,	// (0x0009945b) main_cset_listscroll_pane

0x5688,	// (0x00099481) main_cset_slider_pane_ParamLimits

0x5688,	// (0x00099481) main_cset_slider_pane

0xcd40,	// (0x000a0b39) main_cset_list_pane_ParamLimits

0xcd40,	// (0x000a0b39) main_cset_list_pane

0xcd50,	// (0x000a0b49) scroll_pane_cp028

0x56ae,	// (0x000994a7) aid_area_touch_slider

0x56ca,	// (0x000994c3) cset_slider_pane

0x56ed,	// (0x000994e6) main_cset_slider_pane_g1

0x5702,	// (0x000994fb) main_cset_slider_pane_g2

0x0011,

0xf853,	// (0x000a364c) main_cset_slider_pane_g

0xcd89,	// (0x000a0b82) main_cset_slider_pane_t1

0x57be,	// (0x000995b7) main_cset_slider_pane_t2

0x57d8,	// (0x000995d1) main_cset_slider_pane_t3

0x57f2,	// (0x000995eb) main_cset_slider_pane_t4

0x580c,	// (0x00099605) main_cset_slider_pane_t5

0x5826,	// (0x0009961f) main_cset_slider_pane_t6

0x583b,	// (0x00099634) main_cset_slider_pane_t7

0x000e,

0xf878,	// (0x000a3671) main_cset_slider_pane_t

0x593f,	// (0x00099738) cset_list_set_pane_ParamLimits

0x593f,	// (0x00099738) cset_list_set_pane

0xce23,	// (0x000a0c1c) aid_position_infowindow_above

0xce2b,	// (0x000a0c24) aid_position_infowindow_below

0x5951,	// (0x0009974a) cset_list_set_pane_g1_ParamLimits

0x5951,	// (0x0009974a) cset_list_set_pane_g1

0x595d,	// (0x00099756) cset_list_set_pane_g3_ParamLimits

0x595d,	// (0x00099756) cset_list_set_pane_g3

0x0001,

0xf897,	// (0x000a3690) cset_list_set_pane_g_ParamLimits

0xf897,	// (0x000a3690) cset_list_set_pane_g

0x596c,	// (0x00099765) cset_list_set_pane_t1_ParamLimits

0x596c,	// (0x00099765) cset_list_set_pane_t1

0xe295,	// (0x000a208e) list_highlight_pane_cp021_ParamLimits

0xe295,	// (0x000a208e) list_highlight_pane_cp021

0x9d71,	// (0x0009db6a) cset_slider_pane_g1

0x9d83,	// (0x0009db7c) cset_slider_pane_g2

0x9d7a,	// (0x0009db73) cset_slider_pane_g3

0x0002,

0xf89c,	// (0x000a3695) cset_slider_pane_g

0xbf3e,	// (0x0009fd37) aid_area_touch_cam4_zoom

0xbf46,	// (0x0009fd3f) cam4_zoom_cont_pane

0xbf4e,	// (0x0009fd47) cam4_zoom_pane_g1

0xbf56,	// (0x0009fd4f) cam4_zoom_pane_g2

0x5981,	// (0x0009977a) cam4_zoom_pane_g3

0x0002,

0xf8a3,	// (0x000a369c) cam4_zoom_pane_g

0xbf5e,	// (0x0009fd57) cam4_zoom_cont_pane_g1

0xbf67,	// (0x0009fd60) cam4_zoom_cont_pane_g2

0xbf70,	// (0x0009fd69) cam4_zoom_cont_pane_g3

0x0002,

0xf8aa,	// (0x000a36a3) cam4_zoom_cont_pane_g

0x4c3f,	// (0x00098a38) call4_image_pane_ParamLimits

0x4c3f,	// (0x00098a38) call4_image_pane

0x4ca6,	// (0x00098a9f) call4_windows_conf_pane_ParamLimits

0x4ceb,	// (0x00098ae4) popup_call4_audio_in_window_ParamLimits

0x4ceb,	// (0x00098ae4) popup_call4_audio_in_window

0xd6dd,	// (0x000a14d6) bg_popup_call2_act_pane_cp02

0xcb96,	// (0x000a098f) call4_list_conf_pane

0xe37a,	// (0x000a2173) call4_image_pane_g1

0xe37a,	// (0x000a2173) call4_image_pane_g2

0x0001,

0xf08c,	// (0x000a2e85) call4_image_pane_g

0xce33,	// (0x000a0c2c) list_single_graphic_popup_conf4_pane_ParamLimits

0xce33,	// (0x000a0c2c) list_single_graphic_popup_conf4_pane

0xd6dd,	// (0x000a14d6) list_highlight_pane_cp022

0xce46,	// (0x000a0c3f) list_single_graphic_popup_conf4_pane_g1

0xecf1,	// (0x000a2aea) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8b1,	// (0x000a36aa) list_single_graphic_popup_conf4_pane_g

0xce4e,	// (0x000a0c47) list_single_graphic_popup_conf4_pane_t1

0x1660,	// (0x00095459) popup_vtel_slider_window_ParamLimits

0x1660,	// (0x00095459) popup_vtel_slider_window

0xcb68,	// (0x000a0961) dialer2_ne_pane_t2_ParamLimits

0xcb68,	// (0x000a0961) dialer2_ne_pane_t2

0x0001,

0xf792,	// (0x000a358b) dialer2_ne_pane_t_ParamLimits

0xf792,	// (0x000a358b) dialer2_ne_pane_t

0xb1e1,	// (0x0009efda) bg_popup_sub_pane_cp010_ParamLimits

0xb1e1,	// (0x0009efda) bg_popup_sub_pane_cp010

0x5989,	// (0x00099782) popup_vtel_slider_window_g1_ParamLimits

0x5989,	// (0x00099782) popup_vtel_slider_window_g1

0x599c,	// (0x00099795) popup_vtel_slider_window_g2_ParamLimits

0x599c,	// (0x00099795) popup_vtel_slider_window_g2

0x0003,

0xf8b6,	// (0x000a36af) popup_vtel_slider_window_g_ParamLimits

0xf8b6,	// (0x000a36af) popup_vtel_slider_window_g

0x59f2,	// (0x000997eb) vtel_slider_pane_ParamLimits

0x59f2,	// (0x000997eb) vtel_slider_pane

0x5a14,	// (0x0009980d) vtel_slider_pane_g1_ParamLimits

0x5a14,	// (0x0009980d) vtel_slider_pane_g1

0x5a28,	// (0x00099821) vtel_slider_pane_g2_ParamLimits

0x5a28,	// (0x00099821) vtel_slider_pane_g2

0x5a40,	// (0x00099839) vtel_slider_pane_g3_ParamLimits

0x5a40,	// (0x00099839) vtel_slider_pane_g3

0x5a14,	// (0x0009980d) vtel_slider_pane_g4_ParamLimits

0x5a14,	// (0x0009980d) vtel_slider_pane_g4

0x5a56,	// (0x0009984f) vtel_slider_pane_g5_ParamLimits

0x5a56,	// (0x0009984f) vtel_slider_pane_g5

0x0004,

0xf8bf,	// (0x000a36b8) vtel_slider_pane_g_ParamLimits

0xf8bf,	// (0x000a36b8) vtel_slider_pane_g

0x9b1c,	// (0x0009d915) main_gallery2_pane

0x502e,	// (0x00098e27) aid_size_row_itut2_dropdow_list_ParamLimits

0x502e,	// (0x00098e27) aid_size_row_itut2_dropdow_list

0x50ba,	// (0x00098eb3) grid_vitu2_function_top_pane_ParamLimits

0x50ba,	// (0x00098eb3) grid_vitu2_function_top_pane

0x5124,	// (0x00098f1d) popup_vitu2_dropdown_list_window_ParamLimits

0x5124,	// (0x00098f1d) popup_vitu2_dropdown_list_window

0x514b,	// (0x00098f44) popup_vitu2_match_list_window

0x5a6c,	// (0x00099865) cell_vitu2_function_top_pane_ParamLimits

0x5a6c,	// (0x00099865) cell_vitu2_function_top_pane

0x5a84,	// (0x0009987d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5a84,	// (0x0009987d) cell_vitu2_function_top_pane_cp01

0x5aa0,	// (0x00099899) cell_vitu2_function_top_wide_pane_ParamLimits

0x5aa0,	// (0x00099899) cell_vitu2_function_top_wide_pane

0x9b1c,	// (0x0009d915) bg_button_pane_cp012

0x5abe,	// (0x000998b7) cell_vitu2_function_top_pane_g1

0xbf79,	// (0x0009fd72) bg_button_pane_cp013_ParamLimits

0xbf79,	// (0x0009fd72) bg_button_pane_cp013

0x5ad2,	// (0x000998cb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5ad2,	// (0x000998cb) cell_vitu2_function_top_wide_pane_g1

0x9b1c,	// (0x0009d915) bg_popup_sub_pane_cp20

0x5aea,	// (0x000998e3) list_vitu2_match_list_pane

0xcc10,	// (0x000a0a09) bg_popup_sub_pane_cp20_g1

0xcc18,	// (0x000a0a11) bg_popup_sub_pane_cp20_g2

0xe809,	// (0x000a2602) bg_popup_sub_pane_cp20_g3

0xcc20,	// (0x000a0a19) bg_popup_sub_pane_cp20_g4

0xe7e9,	// (0x000a25e2) bg_popup_sub_pane_cp20_g5

0xce64,	// (0x000a0c5d) bg_popup_sub_pane_cp20_g6

0xcc30,	// (0x000a0a29) bg_popup_sub_pane_cp20_g7

0xcc38,	// (0x000a0a31) bg_popup_sub_pane_cp20_g8

0xcc40,	// (0x000a0a39) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8ca,	// (0x000a36c3) bg_popup_sub_pane_cp20_g

0xbf95,	// (0x0009fd8e) list_vitu2_match_list_item_pane_ParamLimits

0xbf95,	// (0x0009fd8e) list_vitu2_match_list_item_pane

0xbfa7,	// (0x0009fda0) list_vitu2_match_list_item_pane_t1

0x9b2a,	// (0x0009d923) bg_popup_sub_pane_cp21

0xe5f0,	// (0x000a23e9) grid_vitu2_dropdown_list_pane

0x5b02,	// (0x000998fb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5b02,	// (0x000998fb) cell_vitu2_dropdown_list_char_pane

0x5b22,	// (0x0009991b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5b22,	// (0x0009991b) cell_vitu2_dropdown_list_ctrl_pane

0xce6c,	// (0x000a0c65) cell_vitu2_dropdown_list_char_pane_g1

0xce75,	// (0x000a0c6e) cell_vitu2_dropdown_list_char_pane_g2

0xce7e,	// (0x000a0c77) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8dd,	// (0x000a36d6) cell_vitu2_dropdown_list_char_pane_g

0x5b4a,	// (0x00099943) cell_vitu2_dropdown_list_char_pane_t1

0x5b58,	// (0x00099951) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5b58,	// (0x00099951) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5b65,	// (0x0009995e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5b65,	// (0x0009995e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5b72,	// (0x0009996b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5b72,	// (0x0009996b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5b7f,	// (0x00099978) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5b7f,	// (0x00099978) cell_vitu2_dropdown_list_ctrl_pane_g4

0x4eef,	// (0x00098ce8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x4eef,	// (0x00098ce8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8e4,	// (0x000a36dd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8e4,	// (0x000a36dd) cell_vitu2_dropdown_list_ctrl_pane_g

0x5b9b,	// (0x00099994) aid_size_cell_gallery2_ParamLimits

0x5b9b,	// (0x00099994) aid_size_cell_gallery2

0x5bb9,	// (0x000999b2) grid_gallery2_pane_ParamLimits

0x5bb9,	// (0x000999b2) grid_gallery2_pane

0x5bd3,	// (0x000999cc) scroll_pane_cp029_ParamLimits

0x5bd3,	// (0x000999cc) scroll_pane_cp029

0x5be4,	// (0x000999dd) cell_gallery2_pane_ParamLimits

0x5be4,	// (0x000999dd) cell_gallery2_pane

0xce87,	// (0x000a0c80) cell_gallery2_pane_g2

0x5c43,	// (0x00099a3c) cell_gallery2_pane_g3

0xce8f,	// (0x000a0c88) cell_gallery2_pane_g4

0xce97,	// (0x000a0c90) cell_gallery2_pane_g5

0xe5f0,	// (0x000a23e9) grid_highlight_pane_cp10

0x514b,	// (0x00098f44) popup_vitu2_match_list_window_ParamLimits

0x5160,	// (0x00098f59) popup_vitu2_query_window_ParamLimits

0x5160,	// (0x00098f59) popup_vitu2_query_window

0x9b2a,	// (0x0009d923) bg_vitu2_candi_button_pane

0xce6c,	// (0x000a0c65) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xce75,	// (0x000a0c6e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xce7e,	// (0x000a0c77) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5c4b,	// (0x00099a44) bg_button_pane_cp015

0x5c5c,	// (0x00099a55) bg_button_pane_cp016

0x5c68,	// (0x00099a61) bg_button_pane_cp017

0x9d01,	// (0x0009dafa) bg_popup_sub_pane_cp22

0xce9f,	// (0x000a0c98) popup_vitu2_query_window_g1

0x5ca6,	// (0x00099a9f) popup_vitu2_query_window_g2

0x0002,

0xf8ef,	// (0x000a36e8) popup_vitu2_query_window_g

0x5cc8,	// (0x00099ac1) popup_vitu2_query_window_t1_ParamLimits

0x5cc8,	// (0x00099ac1) popup_vitu2_query_window_t1

0x5cfb,	// (0x00099af4) popup_vitu2_query_window_t2_ParamLimits

0x5cfb,	// (0x00099af4) popup_vitu2_query_window_t2

0x5d0d,	// (0x00099b06) popup_vitu2_query_window_t3_ParamLimits

0x5d0d,	// (0x00099b06) popup_vitu2_query_window_t3

0x5d35,	// (0x00099b2e) popup_vitu2_query_window_t4_ParamLimits

0x5d35,	// (0x00099b2e) popup_vitu2_query_window_t4

0x5d49,	// (0x00099b42) popup_vitu2_query_window_t5_ParamLimits

0x5d49,	// (0x00099b42) popup_vitu2_query_window_t5

0x0006,

0xf8f6,	// (0x000a36ef) popup_vitu2_query_window_t_ParamLimits

0xf8f6,	// (0x000a36ef) popup_vitu2_query_window_t

0xcd38,	// (0x000a0b31) main_cset_text_pane

0x56ae,	// (0x000994a7) aid_area_touch_slider_ParamLimits

0x56ca,	// (0x000994c3) cset_slider_pane_ParamLimits

0x56ed,	// (0x000994e6) main_cset_slider_pane_g1_ParamLimits

0x5702,	// (0x000994fb) main_cset_slider_pane_g2_ParamLimits

0xcd59,	// (0x000a0b52) main_cset_slider_pane_g3_ParamLimits

0xcd59,	// (0x000a0b52) main_cset_slider_pane_g3

0x5717,	// (0x00099510) main_cset_slider_pane_g4_ParamLimits

0x5717,	// (0x00099510) main_cset_slider_pane_g4

0x5726,	// (0x0009951f) main_cset_slider_pane_g5_ParamLimits

0x5726,	// (0x0009951f) main_cset_slider_pane_g5

0x5732,	// (0x0009952b) main_cset_slider_pane_g6_ParamLimits

0x5732,	// (0x0009952b) main_cset_slider_pane_g6

0xf853,	// (0x000a364c) main_cset_slider_pane_g_ParamLimits

0xcd89,	// (0x000a0b82) main_cset_slider_pane_t1_ParamLimits

0x57be,	// (0x000995b7) main_cset_slider_pane_t2_ParamLimits

0x57d8,	// (0x000995d1) main_cset_slider_pane_t3_ParamLimits

0x57f2,	// (0x000995eb) main_cset_slider_pane_t4_ParamLimits

0x580c,	// (0x00099605) main_cset_slider_pane_t5_ParamLimits

0x5826,	// (0x0009961f) main_cset_slider_pane_t6_ParamLimits

0x583b,	// (0x00099634) main_cset_slider_pane_t7_ParamLimits

0x5865,	// (0x0009965e) main_cset_slider_pane_t8_ParamLimits

0x5865,	// (0x0009965e) main_cset_slider_pane_t8

0x588d,	// (0x00099686) main_cset_slider_pane_t9_ParamLimits

0x588d,	// (0x00099686) main_cset_slider_pane_t9

0x58b5,	// (0x000996ae) main_cset_slider_pane_t10_ParamLimits

0x58b5,	// (0x000996ae) main_cset_slider_pane_t10

0x58dd,	// (0x000996d6) main_cset_slider_pane_t11_ParamLimits

0x58dd,	// (0x000996d6) main_cset_slider_pane_t11

0x5905,	// (0x000996fe) main_cset_slider_pane_t12_ParamLimits

0x5905,	// (0x000996fe) main_cset_slider_pane_t12

0x5922,	// (0x0009971b) main_cset_slider_pane_t13_ParamLimits

0x5922,	// (0x0009971b) main_cset_slider_pane_t13

0xf878,	// (0x000a3671) main_cset_slider_pane_t_ParamLimits

0xd6dd,	// (0x000a14d6) bg_popup_sub_pane_cp011

0xceab,	// (0x000a0ca4) main_cset_text_pane_g1

0xceb3,	// (0x000a0cac) main_cset_text_pane_t1

0xcec1,	// (0x000a0cba) main_cset_text_pane_t2

0xcecf,	// (0x000a0cc8) main_cset_text_pane_t3

0xcedd,	// (0x000a0cd6) main_cset_text_pane_t4

0xceeb,	// (0x000a0ce4) main_cset_text_pane_t5

0xcef9,	// (0x000a0cf2) main_cset_text_pane_t6

0xcf07,	// (0x000a0d00) main_cset_text_pane_t7

0x0006,

0xf905,	// (0x000a36fe) main_cset_text_pane_t

0x9b2a,	// (0x0009d923) main_cam4_burst_pane

0x9b2a,	// (0x0009d923) main_cam5_pane

0xccfa,	// (0x000a0af3) bg_button_pane_cp019

0xcd03,	// (0x000a0afc) bg_button_pane_cp020

0xcd65,	// (0x000a0b5e) main_cset_slider_pane_g7_ParamLimits

0xcd65,	// (0x000a0b5e) main_cset_slider_pane_g7

0xcd71,	// (0x000a0b6a) main_cset_slider_pane_g8_ParamLimits

0xcd71,	// (0x000a0b6a) main_cset_slider_pane_g8

0x5746,	// (0x0009953f) main_cset_slider_pane_g9_ParamLimits

0x5746,	// (0x0009953f) main_cset_slider_pane_g9

0x5752,	// (0x0009954b) main_cset_slider_pane_g10_ParamLimits

0x5752,	// (0x0009954b) main_cset_slider_pane_g10

0x575e,	// (0x00099557) main_cset_slider_pane_g11_ParamLimits

0x575e,	// (0x00099557) main_cset_slider_pane_g11

0x576a,	// (0x00099563) main_cset_slider_pane_g12_ParamLimits

0x576a,	// (0x00099563) main_cset_slider_pane_g12

0x5776,	// (0x0009956f) main_cset_slider_pane_g13_ParamLimits

0x5776,	// (0x0009956f) main_cset_slider_pane_g13

0x5782,	// (0x0009957b) main_cset_slider_pane_g14_ParamLimits

0x5782,	// (0x0009957b) main_cset_slider_pane_g14

0x578e,	// (0x00099587) main_cset_slider_pane_g15_ParamLimits

0x578e,	// (0x00099587) main_cset_slider_pane_g15

0xcdb1,	// (0x000a0baa) main_cset_slider_pane_t14_ParamLimits

0xcdb1,	// (0x000a0baa) main_cset_slider_pane_t14

0xcdea,	// (0x000a0be3) main_cset_slider_pane_t15_ParamLimits

0xcdea,	// (0x000a0be3) main_cset_slider_pane_t15

0x5db3,	// (0x00099bac) aid_cam4_burst_size_cell_ParamLimits

0x5db3,	// (0x00099bac) aid_cam4_burst_size_cell

0x5dd3,	// (0x00099bcc) grid_cam4_burst_pane_ParamLimits

0x5dd3,	// (0x00099bcc) grid_cam4_burst_pane

0x5e0b,	// (0x00099c04) linegrid_cam4_burst_pane_ParamLimits

0x5e0b,	// (0x00099c04) linegrid_cam4_burst_pane

0xd75f,	// (0x000a1558) scroll_pane_cp30_ParamLimits

0xd75f,	// (0x000a1558) scroll_pane_cp30

0x5e2f,	// (0x00099c28) cell_cam4_burst_pane_ParamLimits

0x5e2f,	// (0x00099c28) cell_cam4_burst_pane

0xcf15,	// (0x000a0d0e) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf15,	// (0x000a0d0e) linegrid_cam4_burst_pane_g1

0x5e7c,	// (0x00099c75) linegrid_cam4_burst_pane_g2_ParamLimits

0x5e7c,	// (0x00099c75) linegrid_cam4_burst_pane_g2

0xcf22,	// (0x000a0d1b) linegrid_cam4_burst_pane_g3_ParamLimits

0xcf22,	// (0x000a0d1b) linegrid_cam4_burst_pane_g3

0x0002,

0xf914,	// (0x000a370d) linegrid_cam4_burst_pane_g_ParamLimits

0xf914,	// (0x000a370d) linegrid_cam4_burst_pane_g

0x5e8d,	// (0x00099c86) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5e8d,	// (0x00099c86) linegrid_cam4_burst_pane_g3_copy1

0xcf2f,	// (0x000a0d28) linegrid_cam4_burst_pane_g4_ParamLimits

0xcf2f,	// (0x000a0d28) linegrid_cam4_burst_pane_g4

0x5ea7,	// (0x00099ca0) linegrid_cam4_burst_pane_g5_ParamLimits

0x5ea7,	// (0x00099ca0) linegrid_cam4_burst_pane_g5

0x5eb8,	// (0x00099cb1) linegrid_cam4_burst_pane_g6_ParamLimits

0x5eb8,	// (0x00099cb1) linegrid_cam4_burst_pane_g6

0xcf3c,	// (0x000a0d35) linegrid_cam4_burst_pane_g7_ParamLimits

0xcf3c,	// (0x000a0d35) linegrid_cam4_burst_pane_g7

0x5ecf,	// (0x00099cc8) cell_cam4_burst_pane_g1

0xcf55,	// (0x000a0d4e) main_cam5_pane_t1_ParamLimits

0xcf55,	// (0x000a0d4e) main_cam5_pane_t1

0xcf67,	// (0x000a0d60) main_cam5_pane_t2_ParamLimits

0xcf67,	// (0x000a0d60) main_cam5_pane_t2

0xcf79,	// (0x000a0d72) main_cam5_pane_t3_ParamLimits

0xcf79,	// (0x000a0d72) main_cam5_pane_t3

0xcf8b,	// (0x000a0d84) main_cam5_pane_t4_ParamLimits

0xcf8b,	// (0x000a0d84) main_cam5_pane_t4

0xcfa3,	// (0x000a0d9c) main_cam5_pane_t5_ParamLimits

0xcfa3,	// (0x000a0d9c) main_cam5_pane_t5

0xcfb7,	// (0x000a0db0) main_cam5_pane_t6_ParamLimits

0xcfb7,	// (0x000a0db0) main_cam5_pane_t6

0xcfcb,	// (0x000a0dc4) main_cam5_pane_t7_ParamLimits

0xcfcb,	// (0x000a0dc4) main_cam5_pane_t7

0xcfdd,	// (0x000a0dd6) main_cam5_pane_t8_ParamLimits

0xcfdd,	// (0x000a0dd6) main_cam5_pane_t8

0xcff9,	// (0x000a0df2) main_cam5_pane_t9_ParamLimits

0xcff9,	// (0x000a0df2) main_cam5_pane_t9

0xd00b,	// (0x000a0e04) main_cam5_pane_t10_ParamLimits

0xd00b,	// (0x000a0e04) main_cam5_pane_t10

0xd01d,	// (0x000a0e16) main_cam5_pane_t11_ParamLimits

0xd01d,	// (0x000a0e16) main_cam5_pane_t11

0xd02f,	// (0x000a0e28) main_cam5_pane_t12_ParamLimits

0xd02f,	// (0x000a0e28) main_cam5_pane_t12

0xd044,	// (0x000a0e3d) main_cam5_pane_t13_ParamLimits

0xd044,	// (0x000a0e3d) main_cam5_pane_t13

0x000c,

0xf920,	// (0x000a3719) main_cam5_pane_t_ParamLimits

0xf920,	// (0x000a3719) main_cam5_pane_t

0x0a79,	// (0x00094872) popup_scut_keymap_window_ParamLimits

0x0a79,	// (0x00094872) popup_scut_keymap_window

0x5ee2,	// (0x00099cdb) aid_size_cell_brow_shortcut

0xe5f0,	// (0x000a23e9) bg_popup_window_pane_cp010

0x5eee,	// (0x00099ce7) grid_scut_pane

0x5efa,	// (0x00099cf3) cell_scut_pane_ParamLimits

0x5efa,	// (0x00099cf3) cell_scut_pane

0x5f11,	// (0x00099d0a) cell_scut_pane_g1

0xd061,	// (0x000a0e5a) cell_scut_pane_t1

0xd070,	// (0x000a0e69) cell_scut_pane_t2

0x5f1a,	// (0x00099d13) cell_scut_pane_t3

0x0002,

0xf93b,	// (0x000a3734) cell_scut_pane_t

0x3e58,	// (0x00097c51) main_mup3_pane_g8_ParamLimits

0x3e58,	// (0x00097c51) main_mup3_pane_g8

0x5046,	// (0x00098e3f) area_vitu2_query_pane_ParamLimits

0x5046,	// (0x00098e3f) area_vitu2_query_pane

0x5c74,	// (0x00099a6d) input_focus_pane_cp08

0xd07f,	// (0x000a0e78) area_vitu2_query_pane_g1

0x5f28,	// (0x00099d21) area_vitu2_query_pane_g2

0x0001,

0xf942,	// (0x000a373b) area_vitu2_query_pane_g

0x5f37,	// (0x00099d30) area_vitu2_query_pane_t1_ParamLimits

0x5f37,	// (0x00099d30) area_vitu2_query_pane_t1

0x5f4b,	// (0x00099d44) area_vitu2_query_pane_t2_ParamLimits

0x5f4b,	// (0x00099d44) area_vitu2_query_pane_t2

0x5f5f,	// (0x00099d58) area_vitu2_query_pane_t3_ParamLimits

0x5f5f,	// (0x00099d58) area_vitu2_query_pane_t3

0xd08b,	// (0x000a0e84) area_vitu2_query_pane_t4_ParamLimits

0xd08b,	// (0x000a0e84) area_vitu2_query_pane_t4

0xd0f5,	// (0x000a0eee) area_vitu2_query_pane_t5_ParamLimits

0xd0f5,	// (0x000a0eee) area_vitu2_query_pane_t5

0xd11d,	// (0x000a0f16) area_vitu2_query_pane_t6_ParamLimits

0xd11d,	// (0x000a0f16) area_vitu2_query_pane_t6

0x0006,

0xf947,	// (0x000a3740) area_vitu2_query_pane_t_ParamLimits

0xf947,	// (0x000a3740) area_vitu2_query_pane_t

0x5f87,	// (0x00099d80) bg_button_pane_cp018

0x5f93,	// (0x00099d8c) bg_button_pane_cp021

0x5f9f,	// (0x00099d98) bg_button_pane_cp022

0x5fbe,	// (0x00099db7) input_focus_pane_cp09

0xee2d,	// (0x000a2c26) aid_size_touch_mv_arrow_left

0xee56,	// (0x000a2c4f) aid_size_touch_mv_arrow_right

0x57a6,	// (0x0009959f) main_cset_slider_pane_g16_ParamLimits

0x57a6,	// (0x0009959f) main_cset_slider_pane_g16

0x57b2,	// (0x000995ab) main_cset_slider_pane_g17_ParamLimits

0x57b2,	// (0x000995ab) main_cset_slider_pane_g17

0x5ecf,	// (0x00099cc8) cell_cam4_burst_pane_g1_ParamLimits

0xd6dd,	// (0x000a14d6) compa_mode_pane

0x59ac,	// (0x000997a5) popup_vtel_slider_window_g3_ParamLimits

0x59ac,	// (0x000997a5) popup_vtel_slider_window_g3

0x59c3,	// (0x000997bc) popup_vtel_slider_window_g4_ParamLimits

0x59c3,	// (0x000997bc) popup_vtel_slider_window_g4

0x59da,	// (0x000997d3) popup_vtel_slider_window_t1_ParamLimits

0x59da,	// (0x000997d3) popup_vtel_slider_window_t1

0x9b2a,	// (0x0009d923) main_cl_pane

0xaee1,	// (0x0009ecda) popup_imed_adjust2_window_ParamLimits

0x9d01,	// (0x0009dafa) bg_tb_trans_pane_cp05_ParamLimits

0xb8d2,	// (0x0009f6cb) popup_imed_adjust2_window_g1_ParamLimits

0xb8e1,	// (0x0009f6da) popup_imed_adjust2_window_g2_ParamLimits

0xb8e1,	// (0x0009f6da) popup_imed_adjust2_window_g2

0xb8ed,	// (0x0009f6e6) popup_imed_adjust2_window_g3_ParamLimits

0xb8ed,	// (0x0009f6e6) popup_imed_adjust2_window_g3

0x0002,

0xf6cc,	// (0x000a34c5) popup_imed_adjust2_window_g_ParamLimits

0xf6cc,	// (0x000a34c5) popup_imed_adjust2_window_g

0xb8f9,	// (0x0009f6f2) popup_imed_adjust2_window_t1_ParamLimits

0xb911,	// (0x0009f70a) slider_imed_adjust_pane_ParamLimits

0xb925,	// (0x0009f71e) slider_imed_adjust_pane_g1_ParamLimits

0xb935,	// (0x0009f72e) slider_imed_adjust_pane_g2_ParamLimits

0xb945,	// (0x0009f73e) slider_imed_adjust_pane_g3_ParamLimits

0xb956,	// (0x0009f74f) slider_imed_adjust_pane_g4_ParamLimits

0xf6d3,	// (0x000a34cc) slider_imed_adjust_pane_g_ParamLimits

0x4daf,	// (0x00098ba8) aid_touch_area_cam4_ParamLimits

0x4daf,	// (0x00098ba8) aid_touch_area_cam4

0xbe51,	// (0x0009fc4a) battery_pane_cp01

0x4e7e,	// (0x00098c77) main_camera4_pane_g6_ParamLimits

0x4e7e,	// (0x00098c77) main_camera4_pane_g6

0x4ea8,	// (0x00098ca1) main_camera4_pane_t2_ParamLimits

0x4ea8,	// (0x00098ca1) main_camera4_pane_t2

0x0001,

0xf7c6,	// (0x000a35bf) main_camera4_pane_t_ParamLimits

0xf7c6,	// (0x000a35bf) main_camera4_pane_t

0x4efd,	// (0x00098cf6) aid_touch_area_vid4_ParamLimits

0x4efd,	// (0x00098cf6) aid_touch_area_vid4

0x4f51,	// (0x00098d4a) main_video4_pane_g5_ParamLimits

0x4f51,	// (0x00098d4a) main_video4_pane_g5

0x4f76,	// (0x00098d6f) vid4_progress_pane_ParamLimits

0x4f76,	// (0x00098d6f) vid4_progress_pane

0xcd7d,	// (0x000a0b76) main_cset_slider_pane_g18_ParamLimits

0xcd7d,	// (0x000a0b76) main_cset_slider_pane_g18

0xcf49,	// (0x000a0d42) cell_cam4_burst_pane_g2_ParamLimits

0xcf49,	// (0x000a0d42) cell_cam4_burst_pane_g2

0x0001,

0xf91b,	// (0x000a3714) cell_cam4_burst_pane_g_ParamLimits

0xf91b,	// (0x000a3714) cell_cam4_burst_pane_g

0xe3d8,	// (0x000a21d1) bg_cl_pane_ParamLimits

0xe3d8,	// (0x000a21d1) bg_cl_pane

0x5fce,	// (0x00099dc7) cl_header_pane_ParamLimits

0x5fce,	// (0x00099dc7) cl_header_pane

0x5fe2,	// (0x00099ddb) cl_listscroll_pane_ParamLimits

0x5fe2,	// (0x00099ddb) cl_listscroll_pane

0xd169,	// (0x000a0f62) bg_cl_pane_g1

0xd171,	// (0x000a0f6a) bg_cl_pane_g2

0xd179,	// (0x000a0f72) bg_cl_pane_g3

0xd181,	// (0x000a0f7a) bg_cl_pane_g4

0xd189,	// (0x000a0f82) bg_cl_pane_g5

0xd191,	// (0x000a0f8a) bg_cl_pane_g6

0xd199,	// (0x000a0f92) bg_cl_pane_g7

0xd1a1,	// (0x000a0f9a) bg_cl_pane_g8

0xd1a9,	// (0x000a0fa2) bg_cl_pane_g9

0x0008,

0x0373,	// (0x0009416c) bg_cl_pane_g

0x5ff2,	// (0x00099deb) aid_height_cl_leading_ParamLimits

0x5ff2,	// (0x00099deb) aid_height_cl_leading

0x5ffe,	// (0x00099df7) aid_height_cl_text_ParamLimits

0x5ffe,	// (0x00099df7) aid_height_cl_text

0xe295,	// (0x000a208e) bg_cl_header_pane_ParamLimits

0xe295,	// (0x000a208e) bg_cl_header_pane

0x601d,	// (0x00099e16) cl_header_pane_g1_ParamLimits

0x601d,	// (0x00099e16) cl_header_pane_g1

0x6033,	// (0x00099e2c) cl_header_pane_t1_ParamLimits

0x6033,	// (0x00099e2c) cl_header_pane_t1

0xd1b1,	// (0x000a0faa) cl_list_pane

0xcd50,	// (0x000a0b49) hc_scroll_pane_cp01

0xe7e9,	// (0x000a25e2) bg_cl_header_pane_g1

0xcc10,	// (0x000a0a09) bg_cl_header_pane_g2

0xe809,	// (0x000a2602) bg_cl_header_pane_g3

0xcc20,	// (0x000a0a19) bg_cl_header_pane_g4

0xcc18,	// (0x000a0a11) bg_cl_header_pane_g5

0xce64,	// (0x000a0c5d) bg_cl_header_pane_g6

0xcc38,	// (0x000a0a31) bg_cl_header_pane_g7

0xcc40,	// (0x000a0a39) bg_cl_header_pane_g8

0xcc30,	// (0x000a0a29) bg_cl_header_pane_g9

0x0008,

0xf956,	// (0x000a374f) bg_cl_header_pane_g

0x604c,	// (0x00099e45) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x604c,	// (0x00099e45) hc_cl_list_double_graphic_heading_pane

0x605d,	// (0x00099e56) hc_cl_list_single_graphic_pane_ParamLimits

0x605d,	// (0x00099e56) hc_cl_list_single_graphic_pane

0x6073,	// (0x00099e6c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6073,	// (0x00099e6c) hc_cl_list_single_graphic_pane_g1

0x607f,	// (0x00099e78) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x607f,	// (0x00099e78) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf969,	// (0x000a3762) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf969,	// (0x000a3762) hc_cl_list_single_graphic_pane_g

0x6093,	// (0x00099e8c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6093,	// (0x00099e8c) hc_cl_list_single_graphic_pane_t1

0x6073,	// (0x00099e6c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6073,	// (0x00099e6c) hc_cl_list_double_graphic_heading_pane_g1

0x60a8,	// (0x00099ea1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x60a8,	// (0x00099ea1) hc_cl_list_double_graphic_heading_pane_g2

0x60bc,	// (0x00099eb5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x60bc,	// (0x00099eb5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf96e,	// (0x000a3767) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf96e,	// (0x000a3767) hc_cl_list_double_graphic_heading_pane_g

0x60d0,	// (0x00099ec9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x60d0,	// (0x00099ec9) hc_cl_list_double_graphic_heading_pane_t1

0x60e5,	// (0x00099ede) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x60e5,	// (0x00099ede) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf975,	// (0x000a376e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf975,	// (0x000a376e) hc_cl_list_double_graphic_heading_pane_t

0xbfbd,	// (0x0009fdb6) vid4_progress_pane_g1

0xbfcd,	// (0x0009fdc6) vid4_progress_pane_g2

0x60fa,	// (0x00099ef3) vid4_progress_pane_g3

0xbfdd,	// (0x0009fdd6) vid4_progress_pane_g4

0x0004,

0xf97a,	// (0x000a3773) vid4_progress_pane_g

0x610c,	// (0x00099f05) vid4_progress_pane_t1

0xbff5,	// (0x0009fdee) vid4_progress_pane_t2

0x0002,

0xf985,	// (0x000a377e) vid4_progress_pane_t

0x6124,	// (0x00099f1d) wait_bar_pane_cp07

0xb1ef,	// (0x0009efe8) blid_firmament_pane_ParamLimits

0xb232,	// (0x0009f02b) popup_blid_sat_info2_window_g1

0xb256,	// (0x0009f04f) popup_blid_sat_info2_window_t3

0xb264,	// (0x0009f05d) popup_blid_sat_info2_window_t4

0xb272,	// (0x0009f06b) popup_blid_sat_info2_window_t5

0xb280,	// (0x0009f079) popup_blid_sat_info2_window_t6

0xb290,	// (0x0009f089) popup_blid_sat_info2_window_t7

0xb29e,	// (0x0009f097) popup_blid_sat_info2_window_t8

0xb2ac,	// (0x0009f0a5) popup_blid_sat_info2_window_t9

0xb2ba,	// (0x0009f0b3) popup_blid_sat_info2_window_t10

0xb37b,	// (0x0009f174) aid_firma_cardinal_ParamLimits

0xb38f,	// (0x0009f188) blid_firmament_pane_t1_ParamLimits

0xb3a6,	// (0x0009f19f) blid_firmament_pane_t2_ParamLimits

0xb3bd,	// (0x0009f1b6) blid_firmament_pane_t3_ParamLimits

0xb3d4,	// (0x0009f1cd) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x000a33c9) blid_firmament_pane_t_ParamLimits

0xb3eb,	// (0x0009f1e4) blid_sat_info_pane_ParamLimits

0x9b1c,	// (0x0009d915) main_cam_set_pane_ParamLimits

0x461c,	// (0x00098415) aid_size_cell_colour_35_ParamLimits

0x463c,	// (0x00098435) aid_size_cell_colour_112_ParamLimits

0x465c,	// (0x00098455) aid_size_cell_effect_ParamLimits

0x9d01,	// (0x0009dafa) bg_tb_trans_pane_cp02_ParamLimits

0x467c,	// (0x00098475) heading_imed_pane_ParamLimits

0x4688,	// (0x00098481) listscroll_imed_pane_ParamLimits

0xa610,	// (0x0009e409) popup_call2_audio_first_window_g5_ParamLimits

0xa610,	// (0x0009e409) popup_call2_audio_first_window_g5

0x49bd,	// (0x000987b6) aid_size_touch_image3_arrow_left_ParamLimits

0x49bd,	// (0x000987b6) aid_size_touch_image3_arrow_left

0x49e9,	// (0x000987e2) aid_size_touch_image3_arrow_right_ParamLimits

0x49e9,	// (0x000987e2) aid_size_touch_image3_arrow_right

0xc00a,	// (0x0009fe03) vid4_progress_pane_t3

0x4805,	// (0x000985fe) main_hwr_training_symbol_option_pane_ParamLimits

0x4805,	// (0x000985fe) main_hwr_training_symbol_option_pane

0xba70,	// (0x0009f869) popup_hwr_training_preview_window_ParamLimits

0xba70,	// (0x0009f869) popup_hwr_training_preview_window

0x4825,	// (0x0009861e) hwr_training_navi_pane_g5_ParamLimits

0x4825,	// (0x0009861e) hwr_training_navi_pane_g5

0xcbfe,	// (0x000a09f7) popup_char_count_window

0x9b1c,	// (0x0009d915) bg_popup_sub_pane_cp20_ParamLimits

0x5aea,	// (0x000998e3) list_vitu2_match_list_pane_ParamLimits

0x5af6,	// (0x000998ef) vitu2_page_scroll_pane_ParamLimits

0x5af6,	// (0x000998ef) vitu2_page_scroll_pane

0xd1ba,	// (0x000a0fb3) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd1ba,	// (0x000a0fb3) list_single_hwr_training_symbol_option_pane

0xd1cd,	// (0x000a0fc6) list_single_hwr_training_symbol_option_pane_g1

0xd1d5,	// (0x000a0fce) list_single_hwr_training_symbol_option_pane_t1

0xd1e3,	// (0x000a0fdc) bg_button_pane_cp023

0xd1ec,	// (0x000a0fe5) bg_button_pane_cp024

0xd21f,	// (0x000a1018) vitu2_page_scroll_pane_g1

0xd227,	// (0x000a1020) vitu2_page_scroll_pane_g2

0x0001,

0x03bc,	// (0x000941b5) vitu2_page_scroll_pane_g

0xd22f,	// (0x000a1028) vitu2_page_scroll_pane_t1

0xb14d,	// (0x0009ef46) popup_char_count_window_g1

0xd23e,	// (0x000a1037) popup_char_count_window_g2

0xd247,	// (0x000a1040) popup_char_count_window_g3

0x0002,

0xf98c,	// (0x000a3785) popup_char_count_window_g

0xd250,	// (0x000a1049) popup_char_count_window_t1

0x9b2a,	// (0x0009d923) main_vded2_pane

0xb8be,	// (0x0009f6b7) aid_size_cell_imed_line

0xb8c8,	// (0x0009f6c1) grid_imed_line_width_pane

0xbf09,	// (0x0009fd02) vid4_indicators_pane_g4

0xd25e,	// (0x000a1057) cell_imed_line_width_pane_ParamLimits

0xd25e,	// (0x000a1057) cell_imed_line_width_pane

0xd272,	// (0x000a106b) cell_imed_line_width_pane_g1

0xd27b,	// (0x000a1074) cell_imed_line_width_pane_g2

0x0001,

0x03c8,	// (0x000941c1) cell_imed_line_width_pane_g

0x6165,	// (0x00099f5e) main_vded2_pane_g1_ParamLimits

0x6165,	// (0x00099f5e) main_vded2_pane_g1

0x617b,	// (0x00099f74) main_vded2_pane_g2_ParamLimits

0x617b,	// (0x00099f74) main_vded2_pane_g2

0x0001,

0xf993,	// (0x000a378c) main_vded2_pane_g_ParamLimits

0xf993,	// (0x000a378c) main_vded2_pane_g

0x618d,	// (0x00099f86) vded2_slider_pane_ParamLimits

0x618d,	// (0x00099f86) vded2_slider_pane

0x619d,	// (0x00099f96) aid_size_touch_vded2_end

0x61a7,	// (0x00099fa0) aid_size_touch_vded2_playhead

0xd283,	// (0x000a107c) aid_size_touch_vded2_start

0xd28b,	// (0x000a1084) vded2_slider_bg_pane

0xd294,	// (0x000a108d) vded2_slider_pane_g1

0xd29d,	// (0x000a1096) vded2_slider_pane_g2

0x61b1,	// (0x00099faa) vded2_slider_pane_g3

0x0002,

0xf998,	// (0x000a3791) vded2_slider_pane_g

0xd2a5,	// (0x000a109e) vded2_slider_bg_pane_g1

0xd2ae,	// (0x000a10a7) vded2_slider_bg_pane_g2

0xd2b7,	// (0x000a10b0) vded2_slider_bg_pane_g3

0x0002,

0x03d9,	// (0x000941d2) vded2_slider_bg_pane_g

0x2bc6,	// (0x000969bf) aid_postcard_touch_down_pane_ParamLimits

0x2bc6,	// (0x000969bf) aid_postcard_touch_down_pane

0x2bdc,	// (0x000969d5) aid_postcard_touch_up_pane_ParamLimits

0x2bdc,	// (0x000969d5) aid_postcard_touch_up_pane

0x9b2a,	// (0x0009d923) main_blid2_pane

0xaec7,	// (0x0009ecc0) popup_blid2_search_window

0xd6dd,	// (0x000a14d6) blid2_gps_pane

0xd6dd,	// (0x000a14d6) blid2_navig_pane

0xd6dd,	// (0x000a14d6) blid2_search_pane

0xd6dd,	// (0x000a14d6) blid2_tripm_pane

0x61bc,	// (0x00099fb5) blid2_search_pane_g1_ParamLimits

0x61bc,	// (0x00099fb5) blid2_search_pane_g1

0x61d6,	// (0x00099fcf) blid2_search_pane_t1_ParamLimits

0x61d6,	// (0x00099fcf) blid2_search_pane_t1

0x61e8,	// (0x00099fe1) aid_size_cell_blid2_gps_ParamLimits

0x61e8,	// (0x00099fe1) aid_size_cell_blid2_gps

0x6200,	// (0x00099ff9) blid2_gps_pane_g1_ParamLimits

0x6200,	// (0x00099ff9) blid2_gps_pane_g1

0x6214,	// (0x0009a00d) grid_blid2_satellite_pane_ParamLimits

0x6214,	// (0x0009a00d) grid_blid2_satellite_pane

0x622e,	// (0x0009a027) blid2_navig_pane_g1_ParamLimits

0x622e,	// (0x0009a027) blid2_navig_pane_g1

0x623a,	// (0x0009a033) blid2_navig_pane_t1_ParamLimits

0x623a,	// (0x0009a033) blid2_navig_pane_t1

0x6255,	// (0x0009a04e) blid2_navig_pane_t2_ParamLimits

0x6255,	// (0x0009a04e) blid2_navig_pane_t2

0x0001,

0xf99f,	// (0x000a3798) blid2_navig_pane_t_ParamLimits

0xf99f,	// (0x000a3798) blid2_navig_pane_t

0x6270,	// (0x0009a069) blid2_navig_ring_pane_ParamLimits

0x6270,	// (0x0009a069) blid2_navig_ring_pane

0x6289,	// (0x0009a082) blid2_speed_pane_ParamLimits

0x6289,	// (0x0009a082) blid2_speed_pane

0x6295,	// (0x0009a08e) blid2_tripm_pane_g1_ParamLimits

0x6295,	// (0x0009a08e) blid2_tripm_pane_g1

0x62ae,	// (0x0009a0a7) blid2_tripm_pane_g2_ParamLimits

0x62ae,	// (0x0009a0a7) blid2_tripm_pane_g2

0x62c2,	// (0x0009a0bb) blid2_tripm_pane_g3_ParamLimits

0x62c2,	// (0x0009a0bb) blid2_tripm_pane_g3

0x62d6,	// (0x0009a0cf) blid2_tripm_pane_g4_ParamLimits

0x62d6,	// (0x0009a0cf) blid2_tripm_pane_g4

0x62ea,	// (0x0009a0e3) blid2_tripm_pane_g5_ParamLimits

0x62ea,	// (0x0009a0e3) blid2_tripm_pane_g5

0x0005,

0xf9a4,	// (0x000a379d) blid2_tripm_pane_g_ParamLimits

0xf9a4,	// (0x000a379d) blid2_tripm_pane_g

0x6310,	// (0x0009a109) blid2_tripm_pane_t1_ParamLimits

0x6310,	// (0x0009a109) blid2_tripm_pane_t1

0x632b,	// (0x0009a124) blid2_tripm_pane_t2_ParamLimits

0x632b,	// (0x0009a124) blid2_tripm_pane_t2

0x6344,	// (0x0009a13d) blid2_tripm_pane_t3_ParamLimits

0x6344,	// (0x0009a13d) blid2_tripm_pane_t3

0x0003,

0xf9b1,	// (0x000a37aa) blid2_tripm_pane_t_ParamLimits

0xf9b1,	// (0x000a37aa) blid2_tripm_pane_t

0x638b,	// (0x0009a184) cell_blid2_satellite_pane_ParamLimits

0x638b,	// (0x0009a184) cell_blid2_satellite_pane

0x63a9,	// (0x0009a1a2) cell_blid2_satellite_pane_g1

0xd2c0,	// (0x000a10b9) cell_blid2_satellite_pane_t1

0xe37a,	// (0x000a2173) blid2_speed_pane_g1

0xd2ce,	// (0x000a10c7) blid2_speed_pane_t1

0xd2dc,	// (0x000a10d5) blid2_speed_pane_t2

0x0001,

0x03fb,	// (0x000941f4) blid2_speed_pane_t

0xe37a,	// (0x000a2173) blid2_navig_ring_pane_g1

0x63b2,	// (0x0009a1ab) blid2_navig_ring_pane_g2

0x63ba,	// (0x0009a1b3) blid2_navig_ring_pane_g3

0x63c2,	// (0x0009a1bb) blid2_navig_ring_pane_g4

0x63ca,	// (0x0009a1c3) blid2_navig_ring_pane_g5

0x0004,

0xf9ba,	// (0x000a37b3) blid2_navig_ring_pane_g

0xd6dd,	// (0x000a14d6) bg_popup_window_pane_cp011

0xd2ea,	// (0x000a10e3) popup_blid2_search_window_g1

0xd2f2,	// (0x000a10eb) popup_blid2_search_window_t1

0xd300,	// (0x000a10f9) popup_blid2_search_window_t2

0x0001,

0x040b,	// (0x00094204) popup_blid2_search_window_t

0xe6f8,	// (0x000a24f1) main_browser_pane_g1

0xe3d8,	// (0x000a21d1) main_browser_pane_ParamLimits

0x9b1c,	// (0x0009d915) bg_button_pane_cp011_ParamLimits

0x5391,	// (0x0009918a) cell_vitu2_function_pane_g1_ParamLimits

0x9d01,	// (0x0009dafa) bg_popup_sub_pane_cp22_ParamLimits

0x5c74,	// (0x00099a6d) input_focus_pane_cp08_ParamLimits

0x5c8f,	// (0x00099a88) popup_vitu2_query_button_pane_ParamLimits

0x5c8f,	// (0x00099a88) popup_vitu2_query_button_pane

0x5c9e,	// (0x00099a97) popup_vitu2_query_input_button_pane

0xce9f,	// (0x000a0c98) popup_vitu2_query_window_g1_ParamLimits

0x5ca6,	// (0x00099a9f) popup_vitu2_query_window_g2_ParamLimits

0xf8ef,	// (0x000a36e8) popup_vitu2_query_window_g_ParamLimits

0xd6dd,	// (0x000a14d6) bg_button_pane_cp026

0x63d2,	// (0x0009a1cb) popup_vitu2_query_input_button_pane_g1

0xd6dd,	// (0x000a14d6) bg_button_pane_cp025

0xd30e,	// (0x000a1107) popup_vitu2_query_button_pane_t1

0x3a52,	// (0x0009784b) main_mp3_pane_t6

0x3a60,	// (0x00097859) popup_slider_window_cp01

0xbe6d,	// (0x0009fc66) cam4_battery_pane

0xbec6,	// (0x0009fcbf) cam4_battery_pane_cp02

0xbfb5,	// (0x0009fdae) cam4_battery_pane_cp01

0xbfb5,	// (0x0009fdae) cam4_battery_pane_cp03

0xb156,	// (0x0009ef4f) cam4_battery_pane_g1

0xe37a,	// (0x000a2173) cam4_battery_pane_g2

0x0001,

0xf9c5,	// (0x000a37be) cam4_battery_pane_g

0xb2c8,	// (0x0009f0c1) popup_blid_sat_info2_window_t11

0xee2d,	// (0x000a2c26) aid_size_touch_mv_arrow_left_ParamLimits

0xee56,	// (0x000a2c4f) aid_size_touch_mv_arrow_right_ParamLimits

0xeeb4,	// (0x000a2cad) navi_pane_g1_ParamLimits

0xeec0,	// (0x000a2cb9) navi_pane_g2_ParamLimits

0xeeee,	// (0x000a2ce7) navi_pane_g3_ParamLimits

0xf30c,	// (0x000a3105) navi_pane_g_ParamLimits

0x27e6,	// (0x000965df) navi_pane_mv_t1_ParamLimits

0x4694,	// (0x0009848d) grid_imed_effect_pane_ParamLimits

0x155d,	// (0x00095356) aid_placing_vt_slider_lsc

0xe647,	// (0x000a2440) aid_placing_vt_slider_prt

0xe295,	// (0x000a208e) bg_tb_trans_pane_cp01_ParamLimits

0xb548,	// (0x0009f341) popup_image_details_window_g1_ParamLimits

0xb55b,	// (0x0009f354) popup_image_details_window_g2_ParamLimits

0xb570,	// (0x0009f369) popup_image_details_window_g3_ParamLimits

0xb570,	// (0x0009f369) popup_image_details_window_g3

0xf605,	// (0x000a33fe) popup_image_details_window_g_ParamLimits

0xb584,	// (0x0009f37d) popup_image_details_window_t1_ParamLimits

0xb596,	// (0x0009f38f) popup_image_details_window_t2_ParamLimits

0xb5af,	// (0x0009f3a8) popup_image_details_window_t3_ParamLimits

0xb5c3,	// (0x0009f3bc) popup_image_details_window_t4_ParamLimits

0xb5de,	// (0x0009f3d7) popup_image_details_window_t5_ParamLimits

0xf60c,	// (0x000a3405) popup_image_details_window_t_ParamLimits

0x600a,	// (0x00099e03) cl_header_name_pane_ParamLimits

0x600a,	// (0x00099e03) cl_header_name_pane

0x63da,	// (0x0009a1d3) cl_header_name_pane_t1_ParamLimits

0x63da,	// (0x0009a1d3) cl_header_name_pane_t1

0x63fb,	// (0x0009a1f4) cl_header_name_pane_t2_ParamLimits

0x63fb,	// (0x0009a1f4) cl_header_name_pane_t2

0x643d,	// (0x0009a236) cl_header_name_pane_t3_ParamLimits

0x643d,	// (0x0009a236) cl_header_name_pane_t3

0x0002,

0xf9ca,	// (0x000a37c3) cl_header_name_pane_t_ParamLimits

0xf9ca,	// (0x000a37c3) cl_header_name_pane_t

0xef7d,	// (0x000a2d76) navi_pane_mv_g2_ParamLimits

0xcbc9,	// (0x000a09c2) field_vitu2_entry_pane_g1_ParamLimits

0xcbd5,	// (0x000a09ce) field_vitu2_entry_pane_g2_ParamLimits

0x9cdf,	// (0x0009dad8) field_vitu2_entry_pane_g3_ParamLimits

0x9cdf,	// (0x0009dad8) field_vitu2_entry_pane_g3

0xf7f8,	// (0x000a35f1) field_vitu2_entry_pane_g_ParamLimits

0x5221,	// (0x0009901a) cell_vitu2_itu_pane_g1_ParamLimits

0x5239,	// (0x00099032) cell_vitu2_itu_pane_g2_ParamLimits

0x5239,	// (0x00099032) cell_vitu2_itu_pane_g2

0x0001,

0xf804,	// (0x000a35fd) cell_vitu2_itu_pane_g_ParamLimits

0xf804,	// (0x000a35fd) cell_vitu2_itu_pane_g

0x9b1c,	// (0x0009d915) bg_vkb2_func_pane_cp05_ParamLimits

0x9b1c,	// (0x0009d915) bg_vkb2_func_pane_cp05

0x9b1c,	// (0x0009d915) bg_vkb2_func_pane_cp03

0x9b1c,	// (0x0009d915) bg_vkb2_func_pane_cp04

0x9b1c,	// (0x0009d915) bg_vkb2_func_pane_cp10_ParamLimits

0x9b1c,	// (0x0009d915) bg_vkb2_func_pane_cp10

0x5fae,	// (0x00099da7) bg_vkb2_func_pane_cp08

0x5f87,	// (0x00099d80) bg_vkb2_func_pane_cp06

0x5f93,	// (0x00099d8c) bg_vkb2_func_pane_cp07

0xd1f5,	// (0x000a0fee) bg_vkb2_func_pane_cp11_ParamLimits

0xd1f5,	// (0x000a0fee) bg_vkb2_func_pane_cp11

0xd20a,	// (0x000a1003) bg_vkb2_func_pane_cp12_ParamLimits

0xd20a,	// (0x000a1003) bg_vkb2_func_pane_cp12

0xd6dd,	// (0x000a14d6) bg_vkb2_func_pane_cp09

0xcc10,	// (0x000a0a09) bg_vkb2_func_pane_g1

0xe809,	// (0x000a2602) bg_vkb2_func_pane_g2

0xcc18,	// (0x000a0a11) bg_vkb2_func_pane_g3

0xcc20,	// (0x000a0a19) bg_vkb2_func_pane_g4

0xce64,	// (0x000a0c5d) bg_vkb2_func_pane_g5

0xcc38,	// (0x000a0a31) bg_vkb2_func_pane_g6

0xcc40,	// (0x000a0a39) bg_vkb2_func_pane_g7

0xcc30,	// (0x000a0a29) bg_vkb2_func_pane_g8

0xe7e9,	// (0x000a25e2) bg_vkb2_func_pane_g9

0x0008,

0xf9d1,	// (0x000a37ca) bg_vkb2_func_pane_g

0x62fe,	// (0x0009a0f7) blid2_tripm_pane_g6_ParamLimits

0x62fe,	// (0x0009a0f7) blid2_tripm_pane_g6

0xcb0f,	// (0x000a0908) mp4_progress_pane_g1

0x6377,	// (0x0009a170) blid2_tripm_values_pane_ParamLimits

0x6377,	// (0x0009a170) blid2_tripm_values_pane

0x646e,	// (0x0009a267) blid2_tripm_values_pane_t1

0x647c,	// (0x0009a275) blid2_tripm_values_pane_t2

0x648a,	// (0x0009a283) blid2_tripm_values_pane_t3

0x6498,	// (0x0009a291) blid2_tripm_values_pane_t4

0x64a6,	// (0x0009a29f) blid2_tripm_values_pane_t5

0x64b4,	// (0x0009a2ad) blid2_tripm_values_pane_t6

0x64c2,	// (0x0009a2bb) blid2_tripm_values_pane_t7

0x64d0,	// (0x0009a2c9) blid2_tripm_values_pane_t8

0x64de,	// (0x0009a2d7) blid2_tripm_values_pane_t9

0x0008,

0xf9e4,	// (0x000a37dd) blid2_tripm_values_pane_t

0x159f,	// (0x00095398) call_video_pane_t1_ParamLimits

0x15bd,	// (0x000953b6) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x000a2fb3) call_video_pane_t_ParamLimits

0x2ab3,	// (0x000968ac) msg_header_pane_g1_ParamLimits

0x9db8,	// (0x0009dbb1) msg_header_pane_g2_ParamLimits

0x9db8,	// (0x0009dbb1) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x000a31a3) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x000a31a3) msg_header_pane_g

0xe3d8,	// (0x000a21d1) main_clock2_pane_ParamLimits

0x4389,	// (0x00098182) grid_clock2_toolbar_pane_ParamLimits

0x4389,	// (0x00098182) grid_clock2_toolbar_pane

0x4389,	// (0x00098182) listscroll_clock2_pane_ParamLimits

0x4389,	// (0x00098182) listscroll_clock2_pane

0x446d,	// (0x00098266) main_clock2_pane_t3_ParamLimits

0x446d,	// (0x00098266) main_clock2_pane_t3

0x4491,	// (0x0009828a) main_clock2_pane_t4_ParamLimits

0x4491,	// (0x0009828a) main_clock2_pane_t4

0xd31c,	// (0x000a1115) cell_clock2_toolbar_pane

0xd324,	// (0x000a111d) cell_clock2_toolbar_pane_cp01

0xd324,	// (0x000a111d) cell_clock2_toolbar_pane_cp02

0xd32c,	// (0x000a1125) cell_clock2_toolbar_pane_cp03

0xd334,	// (0x000a112d) list_clock2_pane

0xeda3,	// (0x000a2b9c) scroll_pane_cp10

0xd33c,	// (0x000a1135) list_single_clock2_pane_ParamLimits

0xd33c,	// (0x000a1135) list_single_clock2_pane

0xe5f0,	// (0x000a23e9) list_highlight_pane_cp08

0xd349,	// (0x000a1142) list_single_clock2_pane_t1

0xd357,	// (0x000a1150) list_single_clock2_pane_t2

0x0001,

0x0442,	// (0x0009423b) list_single_clock2_pane_t

0xd6dd,	// (0x000a14d6) bg_button_pane_cp10

0xd365,	// (0x000a115e) cell_clock2_toolbar_pane_g1

0x2b52,	// (0x0009694b) aid_main_viewer_pane_g1_ParamLimits

0x2b52,	// (0x0009694b) aid_main_viewer_pane_g1

0x2b60,	// (0x00096959) aid_main_viewer_pane_g2_ParamLimits

0x2b60,	// (0x00096959) aid_main_viewer_pane_g2

0x2b6e,	// (0x00096967) aid_main_viewer_pane_g3_ParamLimits

0x2b6e,	// (0x00096967) aid_main_viewer_pane_g3

0x2b7d,	// (0x00096976) aid_main_viewer_pane_g4_ParamLimits

0x2b7d,	// (0x00096976) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x000a31b4) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x000a31b4) aid_main_viewer_pane_g

0x3421,	// (0x0009721a) main_calc_pane_ParamLimits

0x3435,	// (0x0009722e) main_dialer2_pane_ParamLimits

0x9b2a,	// (0x0009d923) main_cam6_pane

0x9b2a,	// (0x0009d923) main_vid6_pane

0x4395,	// (0x0009818e) listscroll_gen_pane_cp06_ParamLimits

0x4395,	// (0x0009818e) listscroll_gen_pane_cp06

0x44b4,	// (0x000982ad) main_clock2_pane_t5_ParamLimits

0x44b4,	// (0x000982ad) main_clock2_pane_t5

0x4512,	// (0x0009830b) aid_call2_pane_cp10_ParamLimits

0x4524,	// (0x0009831d) aid_call_pane_cp10_ParamLimits

0xee21,	// (0x000a2c1a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xee21,	// (0x000a2c1a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4536,	// (0x0009832f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4536,	// (0x0009832f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xee21,	// (0x000a2c1a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6c1,	// (0x000a34ba) popup_clock_analogue_window_cp10_g_ParamLimits

0x454c,	// (0x00098345) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcb7a,	// (0x000a0973) cell_dialer2_keypad_pane_g2_ParamLimits

0xcb7a,	// (0x000a0973) cell_dialer2_keypad_pane_g2

0x0001,

0xf797,	// (0x000a3590) cell_dialer2_keypad_pane_g_ParamLimits

0xf797,	// (0x000a3590) cell_dialer2_keypad_pane_g

0xe384,	// (0x000a217d) cell_dialer2_keypad_pane_t1

0x56a0,	// (0x00099499) main_cset_text2_pane_ParamLimits

0x56a0,	// (0x00099499) main_cset_text2_pane

0xd07f,	// (0x000a0e78) area_vitu2_query_pane_g1_ParamLimits

0x5f28,	// (0x00099d21) area_vitu2_query_pane_g2_ParamLimits

0xf942,	// (0x000a373b) area_vitu2_query_pane_g_ParamLimits

0xd145,	// (0x000a0f3e) area_vitu2_query_pane_t7_ParamLimits

0xd145,	// (0x000a0f3e) area_vitu2_query_pane_t7

0x5f87,	// (0x00099d80) bg_button_pane_cp018_ParamLimits

0x5f93,	// (0x00099d8c) bg_button_pane_cp021_ParamLimits

0x5f9f,	// (0x00099d98) bg_button_pane_cp022_ParamLimits

0x5fae,	// (0x00099da7) bg_vkb2_func_pane_cp08_ParamLimits

0x5f87,	// (0x00099d80) bg_vkb2_func_pane_cp06_ParamLimits

0x5f93,	// (0x00099d8c) bg_vkb2_func_pane_cp07_ParamLimits

0x5fbe,	// (0x00099db7) input_focus_pane_cp09_ParamLimits

0x64ec,	// (0x0009a2e5) cam6_autofocus_pane_ParamLimits

0x64ec,	// (0x0009a2e5) cam6_autofocus_pane

0x64f8,	// (0x0009a2f1) cam6_image_uncrop_pane_ParamLimits

0x64f8,	// (0x0009a2f1) cam6_image_uncrop_pane

0x6508,	// (0x0009a301) cam6_indi_pane_ParamLimits

0x6508,	// (0x0009a301) cam6_indi_pane

0x651e,	// (0x0009a317) cam6_mode_pane_ParamLimits

0x651e,	// (0x0009a317) cam6_mode_pane

0x6530,	// (0x0009a329) cam6_timer_pane_ParamLimits

0x6530,	// (0x0009a329) cam6_timer_pane

0x653c,	// (0x0009a335) cam6_zoom_pane_ParamLimits

0x653c,	// (0x0009a335) cam6_zoom_pane

0x6549,	// (0x0009a342) cam6_mode_pane_g1_ParamLimits

0x6549,	// (0x0009a342) cam6_mode_pane_g1

0x6559,	// (0x0009a352) cam6_mode_pane_g2_ParamLimits

0x6559,	// (0x0009a352) cam6_mode_pane_g2

0x6569,	// (0x0009a362) cam6_mode_pane_g3_ParamLimits

0x6569,	// (0x0009a362) cam6_mode_pane_g3

0x6579,	// (0x0009a372) cam6_mode_pane_g4_ParamLimits

0x6579,	// (0x0009a372) cam6_mode_pane_g4

0x0003,

0xf9f7,	// (0x000a37f0) cam6_mode_pane_g_ParamLimits

0xf9f7,	// (0x000a37f0) cam6_mode_pane_g

0xd0c1,	// (0x000a0eba) bg_tb_trans_pane_cp08_ParamLimits

0xd0c1,	// (0x000a0eba) bg_tb_trans_pane_cp08

0xd36d,	// (0x000a1166) cam6_battery_pane_ParamLimits

0xd36d,	// (0x000a1166) cam6_battery_pane

0xd383,	// (0x000a117c) cam6_indi_pane_g1_ParamLimits

0xd383,	// (0x000a117c) cam6_indi_pane_g1

0xd395,	// (0x000a118e) cam6_indi_pane_g2_ParamLimits

0xd395,	// (0x000a118e) cam6_indi_pane_g2

0xd3a7,	// (0x000a11a0) cam6_indi_pane_g3_ParamLimits

0xd3a7,	// (0x000a11a0) cam6_indi_pane_g3

0x0002,

0x0450,	// (0x00094249) cam6_indi_pane_g_ParamLimits

0x0450,	// (0x00094249) cam6_indi_pane_g

0xd3b9,	// (0x000a11b2) cam6_indi_pane_t1_ParamLimits

0xd3b9,	// (0x000a11b2) cam6_indi_pane_t1

0x4fc4,	// (0x00098dbd) cam6_autofocus_pane_g1

0x4fbc,	// (0x00098db5) cam6_autofocus_pane_g2

0x4fd4,	// (0x00098dcd) cam6_autofocus_pane_g3

0x4fcc,	// (0x00098dc5) cam6_autofocus_pane_g4

0x0003,

0xfa00,	// (0x000a37f9) cam6_autofocus_pane_g

0xd3df,	// (0x000a11d8) cam6_timer_pane_g1

0xd3e7,	// (0x000a11e0) cam6_timer_pane_t1

0xd3f5,	// (0x000a11ee) cam6_zoom_cont_pane

0xd3fd,	// (0x000a11f6) cam6_zoom_pane_g1

0xd406,	// (0x000a11ff) cam6_zoom_pane_g2

0x6589,	// (0x0009a382) cam6_zoom_pane_g3

0x0002,

0xfa09,	// (0x000a3802) cam6_zoom_pane_g

0xe37a,	// (0x000a2173) cam6_battery_pane_g1

0xe37a,	// (0x000a2173) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x000a2e85) cam6_battery_pane_g

0xd3fd,	// (0x000a11f6) cam6_zoom_cont_pane_g1

0xd406,	// (0x000a11ff) cam6_zoom_cont_pane_g2

0xd40f,	// (0x000a1208) cam6_zoom_cont_pane_g3

0x0002,

0x0467,	// (0x00094260) cam6_zoom_cont_pane_g

0x65a4,	// (0x0009a39d) cam6_mode_pane_cp_ParamLimits

0x65a4,	// (0x0009a39d) cam6_mode_pane_cp

0x65b6,	// (0x0009a3af) cam6_zoom_pane_cp_ParamLimits

0x65b6,	// (0x0009a3af) cam6_zoom_pane_cp

0x65c2,	// (0x0009a3bb) vid6_image_uncrop_cif_pane_ParamLimits

0x65c2,	// (0x0009a3bb) vid6_image_uncrop_cif_pane

0x65d2,	// (0x0009a3cb) vid6_image_uncrop_nhd_pane_ParamLimits

0x65d2,	// (0x0009a3cb) vid6_image_uncrop_nhd_pane

0x65e1,	// (0x0009a3da) vid6_image_uncrop_vga_pane_ParamLimits

0x65e1,	// (0x0009a3da) vid6_image_uncrop_vga_pane

0x65f0,	// (0x0009a3e9) vid6_image_uncrop_wvga_pane_ParamLimits

0x65f0,	// (0x0009a3e9) vid6_image_uncrop_wvga_pane

0x65ff,	// (0x0009a3f8) vid6_indi_pane_ParamLimits

0x65ff,	// (0x0009a3f8) vid6_indi_pane

0xd0c1,	// (0x000a0eba) bg_tb_trans_pane_cp09_ParamLimits

0xd0c1,	// (0x000a0eba) bg_tb_trans_pane_cp09

0xd427,	// (0x000a1220) cam6_battery_pane_cp_ParamLimits

0xd427,	// (0x000a1220) cam6_battery_pane_cp

0xd433,	// (0x000a122c) vid6_indi_pane_g1_ParamLimits

0xd433,	// (0x000a122c) vid6_indi_pane_g1

0xd445,	// (0x000a123e) vid6_indi_pane_g2_ParamLimits

0xd445,	// (0x000a123e) vid6_indi_pane_g2

0xd457,	// (0x000a1250) vid6_indi_pane_g3_ParamLimits

0xd457,	// (0x000a1250) vid6_indi_pane_g3

0xd46c,	// (0x000a1265) vid6_indi_pane_g4_ParamLimits

0xd46c,	// (0x000a1265) vid6_indi_pane_g4

0xd481,	// (0x000a127a) vid6_indi_pane_g5_ParamLimits

0xd481,	// (0x000a127a) vid6_indi_pane_g5

0x0004,

0x046e,	// (0x00094267) vid6_indi_pane_g_ParamLimits

0x046e,	// (0x00094267) vid6_indi_pane_g

0xd49b,	// (0x000a1294) vid6_indi_pane_t1_ParamLimits

0xd49b,	// (0x000a1294) vid6_indi_pane_t1

0xd4b1,	// (0x000a12aa) vid6_indi_pane_t2_ParamLimits

0xd4b1,	// (0x000a12aa) vid6_indi_pane_t2

0xd4d9,	// (0x000a12d2) vid6_indi_pane_t3_ParamLimits

0xd4d9,	// (0x000a12d2) vid6_indi_pane_t3

0xd501,	// (0x000a12fa) vid6_indi_pane_t4_ParamLimits

0xd501,	// (0x000a12fa) vid6_indi_pane_t4

0x0003,

0x0479,	// (0x00094272) vid6_indi_pane_t_ParamLimits

0x0479,	// (0x00094272) vid6_indi_pane_t

0xd525,	// (0x000a131e) wait_bar_pane_cp08

0x6617,	// (0x0009a410) main_cset_text2_pane_t1_ParamLimits

0x6617,	// (0x0009a410) main_cset_text2_pane_t1

0x6592,	// (0x0009a38b) listscroll_gen_pane_cp06_t1_ParamLimits

0x6592,	// (0x0009a38b) listscroll_gen_pane_cp06_t1

0x9b2a,	// (0x0009d923) main_cam6_set_pane

0x4eef,	// (0x00098ce8) bg_tb_trans_pane_cp06_ParamLimits

0xbe75,	// (0x0009fc6e) cam4_indicators_pane_g1_ParamLimits

0xbe86,	// (0x0009fc7f) cam4_indicators_pane_g2_ParamLimits

0xf7d4,	// (0x000a35cd) cam4_indicators_pane_g_ParamLimits

0xbea4,	// (0x0009fc9d) cam4_indicators_pane_t1_ParamLimits

0x9b1c,	// (0x0009d915) bg_tb_trans_pane_cp07_ParamLimits

0xbed0,	// (0x0009fcc9) vid4_indicators_pane_g1_ParamLimits

0xbee4,	// (0x0009fcdd) vid4_indicators_pane_g2_ParamLimits

0xbef8,	// (0x0009fcf1) vid4_indicators_pane_g3_ParamLimits

0xbf09,	// (0x0009fd02) vid4_indicators_pane_g4_ParamLimits

0xf7e6,	// (0x000a35df) vid4_indicators_pane_g_ParamLimits

0xbf27,	// (0x0009fd20) vid4_indicators_pane_t1_ParamLimits

0xbfbd,	// (0x0009fdb6) vid4_progress_pane_g1_ParamLimits

0xbfcd,	// (0x0009fdc6) vid4_progress_pane_g2_ParamLimits

0x60fa,	// (0x00099ef3) vid4_progress_pane_g3_ParamLimits

0xbfdd,	// (0x0009fdd6) vid4_progress_pane_g4_ParamLimits

0xf97a,	// (0x000a3773) vid4_progress_pane_g_ParamLimits

0x610c,	// (0x00099f05) vid4_progress_pane_t1_ParamLimits

0xbff5,	// (0x0009fdee) vid4_progress_pane_t2_ParamLimits

0xc00a,	// (0x0009fe03) vid4_progress_pane_t3_ParamLimits

0xf985,	// (0x000a377e) vid4_progress_pane_t_ParamLimits

0x6124,	// (0x00099f1d) wait_bar_pane_cp07_ParamLimits

0x6634,	// (0x0009a42d) main_cam6_set_pane_g2_ParamLimits

0x6634,	// (0x0009a42d) main_cam6_set_pane_g2

0x6658,	// (0x0009a451) main_cset6_listscroll_pane_ParamLimits

0x6658,	// (0x0009a451) main_cset6_listscroll_pane

0x6678,	// (0x0009a471) main_cset6_slider_pane_ParamLimits

0x6678,	// (0x0009a471) main_cset6_slider_pane

0x668e,	// (0x0009a487) main_cset6_text2_pane_ParamLimits

0x668e,	// (0x0009a487) main_cset6_text2_pane

0xd534,	// (0x000a132d) main_cset6_text_pane

0xd53c,	// (0x000a1335) main_cset_list_pane_copy1_ParamLimits

0xd53c,	// (0x000a1335) main_cset_list_pane_copy1

0xd54c,	// (0x000a1345) scroll_pane_cp028_copy1

0x669c,	// (0x0009a495) cset_list_set_pane_copy1

0x66ad,	// (0x0009a4a6) aid_position_infowindow_above_copy1

0x66b5,	// (0x0009a4ae) aid_position_infowindow_below_copy1

0x66bd,	// (0x0009a4b6) cset_list_set_pane_g1_copy1

0x66c5,	// (0x0009a4be) cset_list_set_pane_g3_copy1_ParamLimits

0x66c5,	// (0x0009a4be) cset_list_set_pane_g3_copy1

0x66d4,	// (0x0009a4cd) cset_list_set_pane_t1_copy1_ParamLimits

0x66d4,	// (0x0009a4cd) cset_list_set_pane_t1_copy1

0xe295,	// (0x000a208e) list_highlight_pane_cp021_copy1_ParamLimits

0xe295,	// (0x000a208e) list_highlight_pane_cp021_copy1

0xd555,	// (0x000a134e) cset6_slider_pane_ParamLimits

0xd555,	// (0x000a134e) cset6_slider_pane

0xd581,	// (0x000a137a) main_cset6_slider_pane_g1_ParamLimits

0xd581,	// (0x000a137a) main_cset6_slider_pane_g1

0x66e9,	// (0x0009a4e2) main_cset6_slider_pane_g2_ParamLimits

0x66e9,	// (0x0009a4e2) main_cset6_slider_pane_g2

0xd5a9,	// (0x000a13a2) main_cset6_slider_pane_g3_ParamLimits

0xd5a9,	// (0x000a13a2) main_cset6_slider_pane_g3

0x6711,	// (0x0009a50a) main_cset6_slider_pane_g4_ParamLimits

0x6711,	// (0x0009a50a) main_cset6_slider_pane_g4

0x671d,	// (0x0009a516) main_cset6_slider_pane_g5_ParamLimits

0x671d,	// (0x0009a516) main_cset6_slider_pane_g5

0xcd65,	// (0x000a0b5e) main_cset6_slider_pane_g7_ParamLimits

0xcd65,	// (0x000a0b5e) main_cset6_slider_pane_g7

0xcd71,	// (0x000a0b6a) main_cset6_slider_pane_g8_ParamLimits

0xcd71,	// (0x000a0b6a) main_cset6_slider_pane_g8

0x5746,	// (0x0009953f) main_cset6_slider_pane_g9_ParamLimits

0x5746,	// (0x0009953f) main_cset6_slider_pane_g9

0x5752,	// (0x0009954b) main_cset6_slider_pane_g10_ParamLimits

0x5752,	// (0x0009954b) main_cset6_slider_pane_g10

0x575e,	// (0x00099557) main_cset6_slider_pane_g11_ParamLimits

0x575e,	// (0x00099557) main_cset6_slider_pane_g11

0x576a,	// (0x00099563) main_cset6_slider_pane_g12_ParamLimits

0x576a,	// (0x00099563) main_cset6_slider_pane_g12

0x5776,	// (0x0009956f) main_cset6_slider_pane_g13_ParamLimits

0x5776,	// (0x0009956f) main_cset6_slider_pane_g13

0x5782,	// (0x0009957b) main_cset6_slider_pane_g14_ParamLimits

0x5782,	// (0x0009957b) main_cset6_slider_pane_g14

0x6729,	// (0x0009a522) main_cset6_slider_pane_g15_ParamLimits

0x6729,	// (0x0009a522) main_cset6_slider_pane_g15

0x57a6,	// (0x0009959f) main_cset6_slider_pane_g16_ParamLimits

0x57a6,	// (0x0009959f) main_cset6_slider_pane_g16

0x57b2,	// (0x000995ab) main_cset6_slider_pane_g17_ParamLimits

0x57b2,	// (0x000995ab) main_cset6_slider_pane_g17

0x0011,

0xfa10,	// (0x000a3809) main_cset6_slider_pane_g_ParamLimits

0xfa10,	// (0x000a3809) main_cset6_slider_pane_g

0xd5b5,	// (0x000a13ae) main_cset6_slider_pane_t1_ParamLimits

0xd5b5,	// (0x000a13ae) main_cset6_slider_pane_t1

0x6759,	// (0x0009a552) main_cset6_slider_pane_t2_ParamLimits

0x6759,	// (0x0009a552) main_cset6_slider_pane_t2

0x6784,	// (0x0009a57d) main_cset6_slider_pane_t3_ParamLimits

0x6784,	// (0x0009a57d) main_cset6_slider_pane_t3

0x67af,	// (0x0009a5a8) main_cset6_slider_pane_t4_ParamLimits

0x67af,	// (0x0009a5a8) main_cset6_slider_pane_t4

0x67da,	// (0x0009a5d3) main_cset6_slider_pane_t5_ParamLimits

0x67da,	// (0x0009a5d3) main_cset6_slider_pane_t5

0xd5f6,	// (0x000a13ef) main_cset6_slider_pane_t7_ParamLimits

0xd5f6,	// (0x000a13ef) main_cset6_slider_pane_t7

0x6805,	// (0x0009a5fe) main_cset6_slider_pane_t8_ParamLimits

0x6805,	// (0x0009a5fe) main_cset6_slider_pane_t8

0x6829,	// (0x0009a622) main_cset6_slider_pane_t9_ParamLimits

0x6829,	// (0x0009a622) main_cset6_slider_pane_t9

0x684d,	// (0x0009a646) main_cset6_slider_pane_t10_ParamLimits

0x684d,	// (0x0009a646) main_cset6_slider_pane_t10

0x6871,	// (0x0009a66a) main_cset6_slider_pane_t11_ParamLimits

0x6871,	// (0x0009a66a) main_cset6_slider_pane_t11

0xd62c,	// (0x000a1425) main_cset6_slider_pane_t14_ParamLimits

0xd62c,	// (0x000a1425) main_cset6_slider_pane_t14

0xd665,	// (0x000a145e) main_cset6_slider_pane_t15_ParamLimits

0xd665,	// (0x000a145e) main_cset6_slider_pane_t15

0x000b,

0xfa35,	// (0x000a382e) main_cset6_slider_pane_t_ParamLimits

0xfa35,	// (0x000a382e) main_cset6_slider_pane_t

0xd69e,	// (0x000a1497) cset_slider_pane_g1_copy1

0xd6a7,	// (0x000a14a0) cset_slider_pane_g2_copy1

0xd6b0,	// (0x000a14a9) cset_slider_pane_g3_copy1

0xd6dd,	// (0x000a14d6) bg_popup_sub_pane_cp011_copy1

0xd6b9,	// (0x000a14b2) main_cset_text_pane_g1_copy1

0xceb3,	// (0x000a0cac) main_cset_text_pane_t1_copy1

0xcec1,	// (0x000a0cba) main_cset_text_pane_t2_copy1

0xcecf,	// (0x000a0cc8) main_cset_text_pane_t3_copy1

0xcedd,	// (0x000a0cd6) main_cset_text_pane_t4_copy1

0xceeb,	// (0x000a0ce4) main_cset_text_pane_t5_copy1

0xd6c1,	// (0x000a14ba) main_cset_text_pane_t6_copy1

0xd6cf,	// (0x000a14c8) main_cset_text_pane_t7_copy1

0x6617,	// (0x0009a410) main_cset_text2_pane_t1_copy1

0x9b1c,	// (0x0009d915) main_ncimui_pane

0x367f,	// (0x00097478) popup_query_ncimui_window_ParamLimits

0x367f,	// (0x00097478) popup_query_ncimui_window

0x3bf6,	// (0x000979ef) field_cale_ev2_pane_g4_ParamLimits

0x3bf6,	// (0x000979ef) field_cale_ev2_pane_g4

0x4912,	// (0x0009870b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4912,	// (0x0009870b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf76e,	// (0x000a3567) cell_video_dialer_keypad_pane_g_ParamLimits

0xf76e,	// (0x000a3567) cell_video_dialer_keypad_pane_g

0x492a,	// (0x00098723) cell_video_dialer_keypad_pane_t1

0xd6dd,	// (0x000a14d6) bg_popup_window_pane_cp012

0xec7d,	// (0x000a2a76) heading_pane_cp06

0xd789,	// (0x000a1582) ncim_query_content_pane

0xd6dd,	// (0x000a14d6) bg_popup_heading_pane_cp01

0xd791,	// (0x000a158a) ncim_heading_pane_t1

0xd79f,	// (0x000a1598) ncim_indicator_popup_pane

0xd7b1,	// (0x000a15aa) ncim_query_button_pane

0xd7c5,	// (0x000a15be) ncim_query_content_pane_t1

0xd7d7,	// (0x000a15d0) ncim_query_content_pane_t2

0x0005,

0xfa5f,	// (0x000a3858) ncim_query_content_pane_t

0xd811,	// (0x000a160a) ncim_query_list_pane

0xd823,	// (0x000a161c) ncim_query_popup_pane

0xd79f,	// (0x000a1598) ncim_indicator_popup_pane_ParamLimits

0x69db,	// (0x0009a7d4) ncim_query_content_pane_g1_ParamLimits

0x69db,	// (0x0009a7d4) ncim_query_content_pane_g1

0xd7c5,	// (0x000a15be) ncim_query_content_pane_t1_ParamLimits

0xd7d7,	// (0x000a15d0) ncim_query_content_pane_t2_ParamLimits

0x69e7,	// (0x0009a7e0) ncim_query_content_pane_t3_ParamLimits

0x69e7,	// (0x0009a7e0) ncim_query_content_pane_t3

0x6a0f,	// (0x0009a808) ncim_query_content_pane_t4_ParamLimits

0x6a0f,	// (0x0009a808) ncim_query_content_pane_t4

0x6a37,	// (0x0009a830) ncim_query_content_pane_t5_ParamLimits

0x6a37,	// (0x0009a830) ncim_query_content_pane_t5

0xd7e9,	// (0x000a15e2) ncim_query_content_pane_t6_ParamLimits

0xd7e9,	// (0x000a15e2) ncim_query_content_pane_t6

0xfa5f,	// (0x000a3858) ncim_query_content_pane_t_ParamLimits

0xd811,	// (0x000a160a) ncim_query_list_pane_ParamLimits

0xd823,	// (0x000a161c) ncim_query_popup_pane_ParamLimits

0xd837,	// (0x000a1630) wait_bar_pane_cp04

0xd6dd,	// (0x000a14d6) input_focus_pane_cp011

0xd83f,	// (0x000a1638) ncim_query_popup_pane_t1

0xd84d,	// (0x000a1646) ncim_list_query_list_pane_ParamLimits

0xd84d,	// (0x000a1646) ncim_list_query_list_pane

0xd6dd,	// (0x000a14d6) bg_button_pane_cp027

0xd85a,	// (0x000a1653) ncim_query_button_pane_g1

0xd6dd,	// (0x000a14d6) list_highlight_pane_cp012

0xd864,	// (0x000a165d) ncim_list_query_list_pane_g1

0xd86c,	// (0x000a1665) ncim_list_query_list_pane_t1

0xbe95,	// (0x0009fc8e) cam4_indicators_pane_g3_ParamLimits

0xbe95,	// (0x0009fc8e) cam4_indicators_pane_g3

0xbf15,	// (0x0009fd0e) vid4_indicators_pane_g5_ParamLimits

0xbf15,	// (0x0009fd0e) vid4_indicators_pane_g5

0xbfe9,	// (0x0009fde2) vid4_progress_pane_g5_ParamLimits

0xbfe9,	// (0x0009fde2) vid4_progress_pane_g5

0x68c6,	// (0x0009a6bf) main_ncimui_pane_g1

0x692f,	// (0x0009a728) ncimui_group_query_pane_ParamLimits

0x692f,	// (0x0009a728) ncimui_group_query_pane

0x6977,	// (0x0009a770) ncimui_list_pane_ParamLimits

0x6977,	// (0x0009a770) ncimui_list_pane

0x699e,	// (0x0009a797) ncimui_text_pane_ParamLimits

0x699e,	// (0x0009a797) ncimui_text_pane

0x6a5f,	// (0x0009a858) ncimui_text_pane_t1_ParamLimits

0x6a5f,	// (0x0009a858) ncimui_text_pane_t1

0xd87a,	// (0x000a1673) ncimui_list_single_graphic_pane_ParamLimits

0xd87a,	// (0x000a1673) ncimui_list_single_graphic_pane

0x6a7d,	// (0x0009a876) ncimui_query_pane_ParamLimits

0x6a7d,	// (0x0009a876) ncimui_query_pane

0xd6dd,	// (0x000a14d6) list_highlight_pane_cp013

0xd88a,	// (0x000a1683) ncim_list_query_list_pane_t1_copy1

0xd864,	// (0x000a165d) ncim_list_single_graphic_pane_g1

0x6a90,	// (0x0009a889) ncim_query_button_pane_cp01

0x6a9c,	// (0x0009a895) ncim_query_entry_pane_ParamLimits

0x6a9c,	// (0x0009a895) ncim_query_entry_pane

0x6aaf,	// (0x0009a8a8) ncimui_query_pane_g1

0x6abb,	// (0x0009a8b4) ncimui_query_pane_t1_ParamLimits

0x6abb,	// (0x0009a8b4) ncimui_query_pane_t1

0xe295,	// (0x000a208e) input_focus_pane_cp012

0xd898,	// (0x000a1691) ncim_query_entry_pane_t1

0xe3d8,	// (0x000a21d1) main_im_pane_ParamLimits

0x9b1c,	// (0x0009d915) main_mobtv_pane_ParamLimits

0x9b1c,	// (0x0009d915) main_mobtv_pane

0x6741,	// (0x0009a53a) main_cset6_slider_pane_g18_ParamLimits

0x6741,	// (0x0009a53a) main_cset6_slider_pane_g18

0x674d,	// (0x0009a546) main_cset6_slider_pane_g19_ParamLimits

0x674d,	// (0x0009a546) main_cset6_slider_pane_g19

0xe358,	// (0x000a2151) bg_main_mobtv_pane_ParamLimits

0xe358,	// (0x000a2151) bg_main_mobtv_pane

0x6ad4,	// (0x0009a8cd) main_mobtv_info_pane

0x6add,	// (0x0009a8d6) main_mobtv_loading_pane_ParamLimits

0x6add,	// (0x0009a8d6) main_mobtv_loading_pane

0xd8aa,	// (0x000a16a3) main_mobtv_pg_channel_list_pane

0xd8b4,	// (0x000a16ad) main_mobtv_pg_hdr_pane

0x6aea,	// (0x0009a8e3) main_mobtv_programe_curr_pane_ParamLimits

0x6aea,	// (0x0009a8e3) main_mobtv_programe_curr_pane

0x6af7,	// (0x0009a8f0) main_mobtv_programe_next_pane_ParamLimits

0x6af7,	// (0x0009a8f0) main_mobtv_programe_next_pane

0xd8bd,	// (0x000a16b6) popup_mobtv_noti_window

0xe37a,	// (0x000a2173) main_tv_pg_hdr_pane_g1

0xd8c5,	// (0x000a16be) main_tv_pg_hdr_pane_g2

0xd8cd,	// (0x000a16c6) main_tv_pg_hdr_pane_g3

0xd8d5,	// (0x000a16ce) main_tv_pg_hdr_pane_g4

0xd8dd,	// (0x000a16d6) main_tv_pg_hdr_pane_g5

0xd8e7,	// (0x000a16e0) main_tv_pg_hdr_pane_g6

0xd8f1,	// (0x000a16ea) main_tv_pg_hdr_pane_g7

0xd8fb,	// (0x000a16f4) main_tv_pg_hdr_pane_g8

0xd905,	// (0x000a16fe) main_tv_pg_hdr_pane_g9

0xd90f,	// (0x000a1708) main_tv_pg_hdr_pane_g10

0xd919,	// (0x000a1712) main_tv_pg_hdr_pane_g11

0x000a,

0xfa6c,	// (0x000a3865) main_tv_pg_hdr_pane_g

0xd923,	// (0x000a171c) main_tv_pg_hdr_pane_t1

0xd931,	// (0x000a172a) main_tv_pg_hdr_pane_t2

0xd93f,	// (0x000a1738) main_tv_pg_hdr_pane_t3

0xd94f,	// (0x000a1748) main_tv_pg_hdr_pane_t4

0xd95f,	// (0x000a1758) main_tv_pg_hdr_pane_t5

0x0004,

0xfa83,	// (0x000a387c) main_tv_pg_hdr_pane_t

0xd96f,	// (0x000a1768) single_mobtv_pg_channel_pane_ParamLimits

0xd96f,	// (0x000a1768) single_mobtv_pg_channel_pane

0xd981,	// (0x000a177a) single_mobtv_pg_channel_table_pane

0xd98a,	// (0x000a1783) single_mobtv_pg_channel_thumb_pane

0xd993,	// (0x000a178c) single_tv_pg_channel_pane_g1

0xd99c,	// (0x000a1795) single_tv_pg_channel_pane_g2

0x0001,

0xfa8e,	// (0x000a3887) single_tv_pg_channel_pane_g

0xe33c,	// (0x000a2135) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe33c,	// (0x000a2135) bg_single_mobtv_pg_channel_thumb_pane

0xd9a5,	// (0x000a179e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd9a5,	// (0x000a179e) single_mobtv_pg_channel_thumb_pane_g1

0xd9b3,	// (0x000a17ac) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd9b3,	// (0x000a17ac) single_mobtv_pg_channel_thumb_pane_g2

0xd9bf,	// (0x000a17b8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd9bf,	// (0x000a17b8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfa93,	// (0x000a388c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfa93,	// (0x000a388c) single_mobtv_pg_channel_thumb_pane_g

0xd9cb,	// (0x000a17c4) single_mobtv_pg_channel_thumb_pane_t1

0xd9d9,	// (0x000a17d2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfa9a,	// (0x000a3893) single_mobtv_pg_channel_thumb_pane_t

0xe37a,	// (0x000a2173) bg_single_mobtv_pg_channel_table_pane_g1

0xe37a,	// (0x000a2173) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x000a2e85) bg_single_mobtv_pg_channel_table_pane_g

0xd9e7,	// (0x000a17e0) single_mobtv_pg_channel_table_pane_t1

0xd9f5,	// (0x000a17ee) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfa9f,	// (0x000a3898) single_mobtv_pg_channel_table_pane_t

0x6b0c,	// (0x0009a905) main_mobtv_info_pane_g1_ParamLimits

0x6b0c,	// (0x0009a905) main_mobtv_info_pane_g1

0x6b2a,	// (0x0009a923) main_mobtv_info_pane_t1_ParamLimits

0x6b2a,	// (0x0009a923) main_mobtv_info_pane_t1

0x6ba2,	// (0x0009a99b) main_mobtv_info_pane_t2_ParamLimits

0x6ba2,	// (0x0009a99b) main_mobtv_info_pane_t2

0x0002,

0xfaa9,	// (0x000a38a2) main_mobtv_info_pane_t_ParamLimits

0xfaa9,	// (0x000a38a2) main_mobtv_info_pane_t

0x6c31,	// (0x0009aa2a) wait_bar_pane_cp05

0x6c43,	// (0x0009aa3c) main_mobtv_loading_pane_g1_ParamLimits

0x6c43,	// (0x0009aa3c) main_mobtv_loading_pane_g1

0x6c56,	// (0x0009aa4f) main_mobtv_loading_pane_g2_ParamLimits

0x6c56,	// (0x0009aa4f) main_mobtv_loading_pane_g2

0x6c62,	// (0x0009aa5b) main_mobtv_loading_pane_g3_ParamLimits

0x6c62,	// (0x0009aa5b) main_mobtv_loading_pane_g3

0x0002,

0xfab0,	// (0x000a38a9) main_mobtv_loading_pane_g_ParamLimits

0xfab0,	// (0x000a38a9) main_mobtv_loading_pane_g

0xda03,	// (0x000a17fc) main_mobtv_loading_pane_t1_ParamLimits

0xda03,	// (0x000a17fc) main_mobtv_loading_pane_t1

0xda1b,	// (0x000a1814) main_mobtv_loading_pane_t2_ParamLimits

0xda1b,	// (0x000a1814) main_mobtv_loading_pane_t2

0x0001,

0xfab7,	// (0x000a38b0) main_mobtv_loading_pane_t_ParamLimits

0xfab7,	// (0x000a38b0) main_mobtv_loading_pane_t

0x6c75,	// (0x0009aa6e) wait_bar_pane_cp06_ParamLimits

0x6c75,	// (0x0009aa6e) wait_bar_pane_cp06

0xda3f,	// (0x000a1838) main_mobtv_programe_curr_pane_t1

0xda4d,	// (0x000a1846) main_mobtv_programe_curr_pane_t2

0x0001,

0xfabc,	// (0x000a38b5) main_mobtv_programe_curr_pane_t

0xda5b,	// (0x000a1854) main_mobtv_programe_next_pane_t1

0xda69,	// (0x000a1862) main_mobtv_programe_next_pane_t2

0xda77,	// (0x000a1870) main_mobtv_programe_next_pane_t3

0x0002,

0xfac1,	// (0x000a38ba) main_mobtv_programe_next_pane_t

0xd6dd,	// (0x000a14d6) bg_popup_mobtv_noti_window_pane

0xda85,	// (0x000a187e) popup_mobtv_noti_window_g1

0xda8d,	// (0x000a1886) popup_mobtv_noti_window_t1

0xda9b,	// (0x000a1894) popup_mobtv_noti_window_t2

0x0001,

0xfac8,	// (0x000a38c1) popup_mobtv_noti_window_t

0xe37a,	// (0x000a2173) bg_popup_mobtv_noti_window_pane_g1

0x9b2a,	// (0x0009d923) sc_clock_pane

0x9b2a,	// (0x0009d923) main_fs_bigclock_pane

0x6361,	// (0x0009a15a) blid2_tripm_pane_t4_ParamLimits

0x6361,	// (0x0009a15a) blid2_tripm_pane_t4

0xe33c,	// (0x000a2135) sc_clock_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) sc_clock_pane_g1

0xe384,	// (0x000a217d) sc_clock_pane_t1_ParamLimits

0xe384,	// (0x000a217d) sc_clock_pane_t1

0xe384,	// (0x000a217d) sc_clock_pane_t2_ParamLimits

0xe384,	// (0x000a217d) sc_clock_pane_t2

0xe384,	// (0x000a217d) sc_clock_pane_t3_ParamLimits

0xe384,	// (0x000a217d) sc_clock_pane_t3

0x0004,

0xfacd,	// (0x000a38c6) sc_clock_pane_t_ParamLimits

0xfacd,	// (0x000a38c6) sc_clock_pane_t

0x8046,	// (0x0009be3f) main_fs_bigclock_indicator_pane_ParamLimits

0x8046,	// (0x0009be3f) main_fs_bigclock_indicator_pane

0x6cd3,	// (0x0009aacc) main_fs_bigclock_pane_g1_ParamLimits

0x6cd3,	// (0x0009aacc) main_fs_bigclock_pane_g1

0x8052,	// (0x0009be4b) main_fs_bigclock_pane_t1_ParamLimits

0x8052,	// (0x0009be4b) main_fs_bigclock_pane_t1

0x8064,	// (0x0009be5d) main_fs_bigclock_pane_t2_ParamLimits

0x8064,	// (0x0009be5d) main_fs_bigclock_pane_t2

0x8078,	// (0x0009be71) main_fs_bigclock_pane_t3_ParamLimits

0x8078,	// (0x0009be71) main_fs_bigclock_pane_t3

0x0002,

0xfc49,	// (0x000a3a42) main_fs_bigclock_pane_t_ParamLimits

0xfc49,	// (0x000a3a42) main_fs_bigclock_pane_t

0xc094,	// (0x0009fe8d) main_fs_bigclock_indicator_pane_g1

0xd7b9,	// (0x000a15b2) ncim_query_content_pane_g2_ParamLimits

0xd7b9,	// (0x000a15b2) ncim_query_content_pane_g2

0x0001,

0xfa5a,	// (0x000a3853) ncim_query_content_pane_g_ParamLimits

0xfa5a,	// (0x000a3853) ncim_query_content_pane_g

0xe384,	// (0x000a217d) sc_clock_pane_t4_ParamLimits

0xe384,	// (0x000a217d) sc_clock_pane_t4

0x9b1c,	// (0x0009d915) main_radioblah_pane

0xbe1f,	// (0x0009fc18) cell_call4_button_pane_t1_copy1_ParamLimits

0xbe1f,	// (0x0009fc18) cell_call4_button_pane_t1_copy1

0x68de,	// (0x0009a6d7) main_ncimui_pane_t1_ParamLimits

0x68de,	// (0x0009a6d7) main_ncimui_pane_t1

0x68f8,	// (0x0009a6f1) main_ncimui_pane_t2_ParamLimits

0x68f8,	// (0x0009a6f1) main_ncimui_pane_t2

0x0002,

0xfa53,	// (0x000a384c) main_ncimui_pane_t_ParamLimits

0xfa53,	// (0x000a384c) main_ncimui_pane_t

0x9d01,	// (0x0009dafa) main_radioblah_anim_pane_ParamLimits

0x9d01,	// (0x0009dafa) main_radioblah_anim_pane

0x9d01,	// (0x0009dafa) main_radioblah_info_pane_ParamLimits

0x9d01,	// (0x0009dafa) main_radioblah_info_pane

0x9ced,	// (0x0009dae6) main_radioblah_pane_t1_ParamLimits

0x9ced,	// (0x0009dae6) main_radioblah_pane_t1

0x9ced,	// (0x0009dae6) main_radioblah_pane_t2_ParamLimits

0x9ced,	// (0x0009dae6) main_radioblah_pane_t2

0x0003,

0xfaee,	// (0x000a38e7) main_radioblah_pane_t_ParamLimits

0xfaee,	// (0x000a38e7) main_radioblah_pane_t

0xe295,	// (0x000a208e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xe295,	// (0x000a208e) main_radioblah_rocker_ctrl_pane

0xdc10,	// (0x000a1a09) main_radioblah_info_pane_t1_ParamLimits

0xdc10,	// (0x000a1a09) main_radioblah_info_pane_t1

0xdc24,	// (0x000a1a1d) main_radioblah_info_pane_t2_ParamLimits

0xdc24,	// (0x000a1a1d) main_radioblah_info_pane_t2

0x0003,

0xfaf7,	// (0x000a38f0) main_radioblah_info_pane_t_ParamLimits

0xfaf7,	// (0x000a38f0) main_radioblah_info_pane_t

0xe37a,	// (0x000a2173) main_radioblah_rocker_ctrl_pane_g1

0xe37a,	// (0x000a2173) main_radioblah_rocker_ctrl_pane_g2

0xe37a,	// (0x000a2173) main_radioblah_rocker_ctrl_pane_g3

0xe37a,	// (0x000a2173) main_radioblah_rocker_ctrl_pane_g4

0xe37a,	// (0x000a2173) main_radioblah_rocker_ctrl_pane_g5

0xe37a,	// (0x000a2173) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x058c,	// (0x00094385) main_radioblah_rocker_ctrl_pane_g

0x6617,	// (0x0009a410) main_cset_text2_pane_t1_copy1_ParamLimits

0xbe65,	// (0x0009fc5e) cam4_image_uncrop_qvga_pane

0xbebe,	// (0x0009fcb7) vid4_image_uncrop_qcif_pane

0xd0b3,	// (0x000a0eac) cam6_image_uncrop_qvga_pane_ParamLimits

0xd0b3,	// (0x000a0eac) cam6_image_uncrop_qvga_pane

0xd417,	// (0x000a1210) vid6_image_uncrop_qcif_pane_ParamLimits

0xd417,	// (0x000a1210) vid6_image_uncrop_qcif_pane

0xd6dd,	// (0x000a14d6) bg_popup_preview_window_pane_cp03

0xd76b,	// (0x000a1564) list_cset_text2_pane

0xd773,	// (0x000a156c) main_cset6_text2_pane_g1

0xd77b,	// (0x000a1574) main_cset6_text2_pane_t1

0x6d20,	// (0x0009ab19) list_cset_text2_pane_t1_ParamLimits

0x6d20,	// (0x0009ab19) list_cset_text2_pane_t1

0x9b1c,	// (0x0009d915) main_radioblah_pane_ParamLimits

0x6c1d,	// (0x0009aa16) main_mobtv_info_pane_t3_ParamLimits

0x6c1d,	// (0x0009aa16) main_mobtv_info_pane_t3

0x9cdf,	// (0x0009dad8) main_radioblah_pane_g1

0xdbe0,	// (0x000a19d9) main_radioblah_info_pane_g1

0xe398,	// (0x000a2191) main_radioblah_info_pane_t3_ParamLimits

0xe398,	// (0x000a2191) main_radioblah_info_pane_t3

0x2410,	// (0x00096209) highlight_cell_cale_month_pane_ParamLimits

0x2410,	// (0x00096209) highlight_cell_cale_month_pane

0x9b2a,	// (0x0009d923) main_phob_fisheye_pane

0xb710,	// (0x0009f509) scroll_pane_cp0031_ParamLimits

0xb710,	// (0x0009f509) scroll_pane_cp0031

0xd525,	// (0x000a131e) wait_bar_pane_cp08_ParamLimits

0x669c,	// (0x0009a495) cset_list_set_pane_copy1_ParamLimits

0xdc73,	// (0x000a1a6c) highlight_cell_cale_month_pane_g1

0x6d39,	// (0x0009ab32) highlight_cell_cale_month_pane_t1

0xd1b1,	// (0x000a0faa) list_gen_pane_cp01

0xcd50,	// (0x000a0b49) scroll_pane_01

0x6d47,	// (0x0009ab40) list_single_double_fisheye_pane

0x6d50,	// (0x0009ab49) list_double_fisheye_pane_g1_ParamLimits

0x6d50,	// (0x0009ab49) list_double_fisheye_pane_g1

0x6d5c,	// (0x0009ab55) list_double_fisheye_pane_g2_ParamLimits

0x6d5c,	// (0x0009ab55) list_double_fisheye_pane_g2

0x6d70,	// (0x0009ab69) list_double_fisheye_pane_g3_ParamLimits

0x6d70,	// (0x0009ab69) list_double_fisheye_pane_g3

0x0004,

0xfb00,	// (0x000a38f9) list_double_fisheye_pane_g_ParamLimits

0xfb00,	// (0x000a38f9) list_double_fisheye_pane_g

0x6d99,	// (0x0009ab92) list_double_fisheye_pane_t1_ParamLimits

0x6d99,	// (0x0009ab92) list_double_fisheye_pane_t1

0x6db4,	// (0x0009abad) list_double_fisheye_pane_t2_ParamLimits

0x6db4,	// (0x0009abad) list_double_fisheye_pane_t2

0x0001,

0xfb0b,	// (0x000a3904) list_double_fisheye_pane_t_ParamLimits

0xfb0b,	// (0x000a3904) list_double_fisheye_pane_t

0x9b2a,	// (0x0009d923) main_call5_pane

0xe295,	// (0x000a208e) sc_swipe_pane_ParamLimits

0xe295,	// (0x000a208e) sc_swipe_pane

0x6de9,	// (0x0009abe2) call5_image_pane_ParamLimits

0x6de9,	// (0x0009abe2) call5_image_pane

0x6e06,	// (0x0009abff) call5_swipe_1_pane_ParamLimits

0x6e06,	// (0x0009abff) call5_swipe_1_pane

0x6e19,	// (0x0009ac12) call5_swipe_2_pane_ParamLimits

0x6e19,	// (0x0009ac12) call5_swipe_2_pane

0x6e44,	// (0x0009ac3d) popup_call5_audio_first_window_ParamLimits

0x6e44,	// (0x0009ac3d) popup_call5_audio_first_window

0xe33c,	// (0x000a2135) call5_swipe_1_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) call5_swipe_1_pane_g1

0xdc7b,	// (0x000a1a74) call5_swipe_1_pane_g2_ParamLimits

0xdc7b,	// (0x000a1a74) call5_swipe_1_pane_g2

0x0001,

0xfb10,	// (0x000a3909) call5_swipe_1_pane_g_ParamLimits

0xfb10,	// (0x000a3909) call5_swipe_1_pane_g

0xdc87,	// (0x000a1a80) call5_swipe_1_pane_t1_ParamLimits

0xdc87,	// (0x000a1a80) call5_swipe_1_pane_t1

0xe33c,	// (0x000a2135) call5_swipe_2_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) call5_swipe_2_pane_g1

0xdc9c,	// (0x000a1a95) call5_swipe_2_pane_g2_ParamLimits

0xdc9c,	// (0x000a1a95) call5_swipe_2_pane_g2

0x0001,

0xfb15,	// (0x000a390e) call5_swipe_2_pane_g_ParamLimits

0xfb15,	// (0x000a390e) call5_swipe_2_pane_g

0xdca8,	// (0x000a1aa1) call5_swipe_2_pane_t1_ParamLimits

0xdca8,	// (0x000a1aa1) call5_swipe_2_pane_t1

0xe33c,	// (0x000a2135) sc_swipe_pane_g1_ParamLimits

0xe33c,	// (0x000a2135) sc_swipe_pane_g1

0xe34a,	// (0x000a2143) sc_swipe_pane_g2_ParamLimits

0xe34a,	// (0x000a2143) sc_swipe_pane_g2

0x0001,

0x05b3,	// (0x000943ac) sc_swipe_pane_g_ParamLimits

0x05b3,	// (0x000943ac) sc_swipe_pane_g

0xe384,	// (0x000a217d) sc_swipe_pane_t1_ParamLimits

0xe384,	// (0x000a217d) sc_swipe_pane_t1

0x9b2a,	// (0x0009d923) main_cmail_launcher_pane

0x6e55,	// (0x0009ac4e) aid_size_cell_cmail_l_ParamLimits

0x6e55,	// (0x0009ac4e) aid_size_cell_cmail_l

0x6e63,	// (0x0009ac5c) grid_cmail_l_pane_ParamLimits

0x6e63,	// (0x0009ac5c) grid_cmail_l_pane

0x6e7d,	// (0x0009ac76) cell_cmail_l_pane_ParamLimits

0x6e7d,	// (0x0009ac76) cell_cmail_l_pane

0x6e97,	// (0x0009ac90) cell_cmail_l_pane_g1_ParamLimits

0x6e97,	// (0x0009ac90) cell_cmail_l_pane_g1

0x6ea3,	// (0x0009ac9c) cell_cmail_l_pane_t1_ParamLimits

0x6ea3,	// (0x0009ac9c) cell_cmail_l_pane_t1

0x6eb9,	// (0x0009acb2) cell_cmail_l_pane_t2_ParamLimits

0x6eb9,	// (0x0009acb2) cell_cmail_l_pane_t2

0x0001,

0xfb1a,	// (0x000a3913) cell_cmail_l_pane_t_ParamLimits

0xfb1a,	// (0x000a3913) cell_cmail_l_pane_t

0xe295,	// (0x000a208e) grid_highlight_pane_cp018_ParamLimits

0xe295,	// (0x000a208e) grid_highlight_pane_cp018

0x095f,	// (0x00094758) main2_pane_ParamLimits

0x095f,	// (0x00094758) main2_pane

0xe470,	// (0x000a2269) popup_sp_fs_action_menu_bg_pane_g1

0xe478,	// (0x000a2271) popup_sp_fs_action_menu_bg_pane_g2

0xe480,	// (0x000a2279) popup_sp_fs_action_menu_bg_pane_g3

0xe488,	// (0x000a2281) popup_sp_fs_action_menu_bg_pane_g4

0xe490,	// (0x000a2289) popup_sp_fs_action_menu_bg_pane_g5

0xe498,	// (0x000a2291) popup_sp_fs_action_menu_bg_pane_g6

0xe4a0,	// (0x000a2299) popup_sp_fs_action_menu_bg_pane_g7

0xe4a8,	// (0x000a22a1) popup_sp_fs_action_menu_bg_pane_g8

0xe4b0,	// (0x000a22a9) popup_sp_fs_action_menu_bg_pane_g9

0xe4b8,	// (0x000a22b1) popup_sp_fs_action_menu_bg_pane_g10

0xe4b8,	// (0x000a22b1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x000a2ed6) popup_sp_fs_action_menu_bg_pane_g

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g3_g1

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g3_g2

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x000a2f84) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x000a2f84) list_medium_line_x2_t3_g3_g

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g3_t1

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g3_t2

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x000a2f8b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x000a2f8b) list_medium_line_x2_t3_g3_t

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g2_g1

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x000a2f92) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x000a2f92) list_medium_line_x2_t3_g2_g

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g2_t1

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g2_t2

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x000a2f8b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x000a2f8b) list_medium_line_x2_t3_g2_t

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g4_g1

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g4_g2

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g4_g3

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x000a2f97) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x000a2f97) list_medium_line_x2_t4_g4_g

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g4_t1

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g4_t2

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g4_t3

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x000a2fa0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x000a2fa0) list_medium_line_x2_t4_g4_t

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g4_g1

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g4_g2

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g4_g3

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x000a2f97) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x000a2f97) list_medium_line_x2_t2_g4_g

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g4_t1

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x000a2f67) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x000a2f67) list_medium_line_x2_t2_g4_t

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g3_g1

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g3_g2

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x000a2f84) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x000a2f84) list_medium_line_x2_t2_g3_g

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g3_t1

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x000a2f67) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x000a2f67) list_medium_line_x2_t2_g3_t

0x2574,	// (0x0009636d) main_sp_fs_list_pane_ParamLimits

0x2574,	// (0x0009636d) main_sp_fs_list_pane

0x9bbb,	// (0x0009d9b4) sp_fs_scroll_pane_ParamLimits

0x9bbb,	// (0x0009d9b4) sp_fs_scroll_pane

0xeaf6,	// (0x000a28ef) list_medium_line_x2_t3_t1

0xeaf6,	// (0x000a28ef) list_medium_line_x2_t3_t2

0xeaf6,	// (0x000a28ef) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x000a304d) list_medium_line_x2_t3_t

0xeaf6,	// (0x000a28ef) list_medium_line_x3_t4_t1

0xeaf6,	// (0x000a28ef) list_medium_line_x3_t4_t2

0xeaf6,	// (0x000a28ef) list_medium_line_x3_t4_t3

0xeaf6,	// (0x000a28ef) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x000a3054) list_medium_line_x3_t4_t

0xeaf6,	// (0x000a28ef) list_medium_line_x4_t5_t1

0xeaf6,	// (0x000a28ef) list_medium_line_x4_t5_t2

0xeaf6,	// (0x000a28ef) list_medium_line_x4_t5_t3

0xeaf6,	// (0x000a28ef) list_medium_line_x4_t5_t4

0xeaf6,	// (0x000a28ef) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x000a305d) list_medium_line_x4_t5_t

0xe33c,	// (0x000a2135) list_medium_line_t4_g4_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t4_g4_g1

0xe33c,	// (0x000a2135) list_medium_line_t4_g4_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t4_g4_g2

0xe33c,	// (0x000a2135) list_medium_line_t4_g4_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t4_g4_g3

0xe33c,	// (0x000a2135) list_medium_line_t4_g4_g4_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x000a2f97) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x000a2f97) list_medium_line_t4_g4_g

0xe384,	// (0x000a217d) list_medium_line_t4_g4_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t4_g4_t1

0xe384,	// (0x000a217d) list_medium_line_t4_g4_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t4_g4_t2

0xe384,	// (0x000a217d) list_medium_line_t4_g4_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t4_g4_t3

0xe384,	// (0x000a217d) list_medium_line_t4_g4_t4_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x000a2fa0) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x000a2fa0) list_medium_line_t4_g4_t

0x260f,	// (0x00096408) chi_dic_find_pane_g1

0x3449,	// (0x00097242) main_tport_pane

0xeaf6,	// (0x000a28ef) list_medium_line_plain_t1

0xe33c,	// (0x000a2135) list_medium_line_t2_g2_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t2_g2_g1

0xe33c,	// (0x000a2135) list_medium_line_t2_g2_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x000a2f92) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x000a2f92) list_medium_line_t2_g2_g

0xe384,	// (0x000a217d) list_medium_line_t2_g2_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t2_g2_t1

0xe384,	// (0x000a217d) list_medium_line_t2_g2_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x000a2f67) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x000a2f67) list_medium_line_t2_g2_t

0x6137,	// (0x00099f30) aid_sp_fs_list_icon_a_sm

0xc01f,	// (0x0009fe18) aid_sp_fs_list_icon_d

0x613f,	// (0x00099f38) aid_sp_fs_text_primary

0x6148,	// (0x00099f41) aid_sp_fs_text_secondary

0xd6dd,	// (0x000a14d6) list_medium_line

0xd6dd,	// (0x000a14d6) list_medium_line_g2

0xd6dd,	// (0x000a14d6) list_medium_line_g3

0xd6dd,	// (0x000a14d6) list_medium_line_plain

0xd6dd,	// (0x000a14d6) list_medium_line_plain_t2

0xd6dd,	// (0x000a14d6) list_medium_line_plain_t3

0xd6dd,	// (0x000a14d6) list_medium_line_right_icon

0xd6dd,	// (0x000a14d6) list_medium_line_right_iconx2

0xd6dd,	// (0x000a14d6) list_medium_line_t2

0xd6dd,	// (0x000a14d6) list_medium_line_t2_g2

0xd6dd,	// (0x000a14d6) list_medium_line_t2_g3

0xd6dd,	// (0x000a14d6) list_medium_line_t2_right_icon

0xd6dd,	// (0x000a14d6) list_medium_line_t2_right_iconx2

0xd6dd,	// (0x000a14d6) list_medium_line_t3

0xd6dd,	// (0x000a14d6) list_medium_line_t3_g2

0xd6dd,	// (0x000a14d6) list_medium_line_t3_g3

0xd6dd,	// (0x000a14d6) list_medium_line_t3_right_iconx2

0xd6dd,	// (0x000a14d6) list_medium_line_t4_g4

0xd6dd,	// (0x000a14d6) list_medium_line_x2

0xd6dd,	// (0x000a14d6) list_medium_line_x2_t2_g2

0xd6dd,	// (0x000a14d6) list_medium_line_x2_t2_g3

0xd6dd,	// (0x000a14d6) list_medium_line_x2_t2_g4

0xd6dd,	// (0x000a14d6) list_medium_line_x2_t3

0xd6dd,	// (0x000a14d6) list_medium_line_x2_t3_g2

0xd6dd,	// (0x000a14d6) list_medium_line_x2_t3_g3

0xd6dd,	// (0x000a14d6) list_medium_line_x2_t3_g4

0xd6dd,	// (0x000a14d6) list_medium_line_x2_t4_g2

0xd6dd,	// (0x000a14d6) list_medium_line_x2_t4_g4

0xd6dd,	// (0x000a14d6) list_medium_line_x3

0xd6dd,	// (0x000a14d6) list_medium_line_x3_t4

0xd6dd,	// (0x000a14d6) list_medium_line_x3_t4_g4

0xd6dd,	// (0x000a14d6) list_medium_line_x4_t4

0xd6dd,	// (0x000a14d6) list_medium_line_x4_t4_g7

0xd6dd,	// (0x000a14d6) list_medium_line_x4_t5

0x6151,	// (0x00099f4a) list_single_fs_dyc_pane_ParamLimits

0x6151,	// (0x00099f4a) list_single_fs_dyc_pane

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g1

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g2

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g3

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g4

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g5

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x4_t4_g7_g6

0xe34a,	// (0x000a2143) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe34a,	// (0x000a2143) list_medium_line_x4_t4_g7_g7

0x0006,

0x04c0,	// (0x000942b9) list_medium_line_x4_t4_g7_g_ParamLimits

0x04c0,	// (0x000942b9) list_medium_line_x4_t4_g7_g

0xe384,	// (0x000a217d) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x4_t4_g7_t1

0xe384,	// (0x000a217d) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x4_t4_g7_t2

0xe384,	// (0x000a217d) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x4_t4_g7_t3

0xe398,	// (0x000a2191) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe398,	// (0x000a2191) list_medium_line_x4_t4_g7_t4

0xe398,	// (0x000a2191) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe398,	// (0x000a2191) list_medium_line_x4_t4_g7_t5

0x0004,

0x04cf,	// (0x000942c8) list_medium_line_x4_t4_g7_t_ParamLimits

0x04cf,	// (0x000942c8) list_medium_line_x4_t4_g7_t

0x6895,	// (0x0009a68e) list_single_dyc_row_pane_ParamLimits

0x6895,	// (0x0009a68e) list_single_dyc_row_pane

0x6dd6,	// (0x0009abcf) call5_gesture_pane_ParamLimits

0x6dd6,	// (0x0009abcf) call5_gesture_pane

0x6e2c,	// (0x0009ac25) call5_windows_pane_ParamLimits

0x6e2c,	// (0x0009ac25) call5_windows_pane

0x6ed6,	// (0x0009accf) call5_swipe_1_pane_cp_ParamLimits

0x6ed6,	// (0x0009accf) call5_swipe_1_pane_cp

0x6ee2,	// (0x0009acdb) call5_swipe_2_pane_cp_ParamLimits

0x6ee2,	// (0x0009acdb) call5_swipe_2_pane_cp

0xe5f0,	// (0x000a23e9) call5_image_pane_cp

0x6eee,	// (0x0009ace7) popup_call5_audio_first_window_cp_ParamLimits

0x6eee,	// (0x0009ace7) popup_call5_audio_first_window_cp

0x6efc,	// (0x0009acf5) call5_swipe_1_pane_g1_cp_ParamLimits

0x6efc,	// (0x0009acf5) call5_swipe_1_pane_g1_cp

0x6f09,	// (0x0009ad02) call5_swipe_1_pane_g2_cp

0x6f11,	// (0x0009ad0a) call5_swipe_1_pane_t1_cp_ParamLimits

0x6f11,	// (0x0009ad0a) call5_swipe_1_pane_t1_cp

0x6efc,	// (0x0009acf5) call5_swipe_2_pane_g1_cp_ParamLimits

0x6efc,	// (0x0009acf5) call5_swipe_2_pane_g1_cp

0x6f26,	// (0x0009ad1f) call5_swipe_2_pane_g2_cp

0x6f2e,	// (0x0009ad27) call5_swipe_2_pane_t1_cp_ParamLimits

0x6f2e,	// (0x0009ad27) call5_swipe_2_pane_t1_cp

0xe295,	// (0x000a208e) main_sp_fs_email_pane

0x6f43,	// (0x0009ad3c) main_sp_fs_listscroll_pane_te

0xc027,	// (0x0009fe20) popup_sp_fs_action_menu_pane_ParamLimits

0xc027,	// (0x0009fe20) popup_sp_fs_action_menu_pane

0xe37a,	// (0x000a2173) bg_sp_fs_ctrlbar_pane_g1

0x6f4c,	// (0x0009ad45) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x6f55,	// (0x0009ad4e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x6f5e,	// (0x0009ad57) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe37a,	// (0x000a2173) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb1f,	// (0x000a3918) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb1e1,	// (0x0009efda) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb1e1,	// (0x0009efda) bg_sp_fs_ctrlbar_ddmenu_pane

0x6f67,	// (0x0009ad60) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x6f67,	// (0x0009ad60) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x6f73,	// (0x0009ad6c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x6f73,	// (0x0009ad6c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb28,	// (0x000a3921) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb28,	// (0x000a3921) main_sp_fs_ctrlbar_ddmenu_pane_g

0x6f7f,	// (0x0009ad78) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x6f7f,	// (0x0009ad78) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe37a,	// (0x000a2173) list_medium_line_t2_right_icon_g1

0xeaf6,	// (0x000a28ef) list_medium_line_t2_right_icon_t1

0xeaf6,	// (0x000a28ef) list_medium_line_t2_right_icon_t2

0x0001,

0xfb2d,	// (0x000a3926) list_medium_line_t2_right_icon_t

0x9d01,	// (0x0009dafa) bg_sp_fs_ctrlbar_pane_ParamLimits

0x9d01,	// (0x0009dafa) bg_sp_fs_ctrlbar_pane

0x7019,	// (0x0009ae12) main_sp_fs_ctrlbar_button_pane_cp01

0x7023,	// (0x0009ae1c) main_sp_fs_ctrlbar_ddmenu_pane

0x702d,	// (0x0009ae26) main_sp_fs_ctrlbar_pane_g1

0x7039,	// (0x0009ae32) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb32,	// (0x000a392b) main_sp_fs_ctrlbar_pane_g

0x7079,	// (0x0009ae72) main_sp_fs_ctrlbar_pane_t1

0x70b8,	// (0x0009aeb1) main_sp_fs_ctrlbar_pane

0x70f7,	// (0x0009aef0) main_sp_fs_listscroll_pane_te_cp01

0x7121,	// (0x0009af1a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7121,	// (0x0009af1a) popup_sp_fs_action_menu_pane_cp01

0xe295,	// (0x000a208e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe295,	// (0x000a208e) bg_sp_fs_highlight_list_pane_cp01

0x7146,	// (0x0009af3f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7146,	// (0x0009af3f) sp_fs_action_menu_list_gene_pane_g1

0x7155,	// (0x0009af4e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x7155,	// (0x0009af4e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb40,	// (0x000a3939) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb40,	// (0x000a3939) sp_fs_action_menu_list_gene_pane_g

0x7162,	// (0x0009af5b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7162,	// (0x0009af5b) sp_fs_action_menu_list_gene_pane_t1

0x717a,	// (0x0009af73) sp_fs_action_menu_list_gene_pane_ParamLimits

0x717a,	// (0x0009af73) sp_fs_action_menu_list_gene_pane

0x719b,	// (0x0009af94) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x719b,	// (0x0009af94) popup_sp_fs_action_menu_bg_pane

0x71a9,	// (0x0009afa2) sp_fs_action_menu_list_pane_ParamLimits

0x71a9,	// (0x0009afa2) sp_fs_action_menu_list_pane

0x71cb,	// (0x0009afc4) sp_fs_scroll_pane_cp01_ParamLimits

0x71cb,	// (0x0009afc4) sp_fs_scroll_pane_cp01

0xeaf6,	// (0x000a28ef) list_medium_line_plain_t2_t1

0xeaf6,	// (0x000a28ef) list_medium_line_plain_t2_t2

0x0001,

0xfb2d,	// (0x000a3926) list_medium_line_plain_t2_t

0xeaf6,	// (0x000a28ef) list_medium_line_plain_t3_t1

0xeaf6,	// (0x000a28ef) list_medium_line_plain_t3_t2

0xeaf6,	// (0x000a28ef) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x000a304d) list_medium_line_plain_t3_t

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g2_g1

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x000a2f92) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x000a2f92) list_medium_line_x2_t2_g2_g

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g2_t1

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x000a2f67) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x000a2f67) list_medium_line_x2_t2_g2_t

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g2_g1

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x000a2f92) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x000a2f92) list_medium_line_x2_t4_g2_g

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g2_t1

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g2_t2

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g2_t3

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x000a2fa0) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x000a2fa0) list_medium_line_x2_t4_g2_t

0xe37a,	// (0x000a2173) list_medium_line_t3_right_iconx2_g1

0xe37a,	// (0x000a2173) list_medium_line_t3_right_iconx2_g2

0xe37a,	// (0x000a2173) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x000a3169) list_medium_line_t3_right_iconx2_g

0xeaf6,	// (0x000a28ef) list_medium_line_t3_right_iconx2_t1

0xeaf6,	// (0x000a28ef) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb2d,	// (0x000a3926) list_medium_line_t3_right_iconx2_t

0xe33c,	// (0x000a2135) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x3_t4_g4_g1

0xe33c,	// (0x000a2135) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x3_t4_g4_g2

0xe33c,	// (0x000a2135) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x3_t4_g4_g3

0xe33c,	// (0x000a2135) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x000a2f97) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x000a2f97) list_medium_line_x3_t4_g4_g

0xe384,	// (0x000a217d) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x3_t4_g4_t1

0xe384,	// (0x000a217d) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x3_t4_g4_t2

0xe384,	// (0x000a217d) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x3_t4_g4_t3

0xe384,	// (0x000a217d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x000a2fa0) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x000a2fa0) list_medium_line_x3_t4_g4_t

0x71f1,	// (0x0009afea) list_single_dyc_row_text_pane_t1_ParamLimits

0x71f1,	// (0x0009afea) list_single_dyc_row_text_pane_t1

0x723a,	// (0x0009b033) list_single_dyc_row_text_pane_t2_ParamLimits

0x723a,	// (0x0009b033) list_single_dyc_row_text_pane_t2

0x72b0,	// (0x0009b0a9) list_single_dyc_row_text_pane_t3_ParamLimits

0x72b0,	// (0x0009b0a9) list_single_dyc_row_text_pane_t3

0x0005,

0xfb45,	// (0x000a393e) list_single_dyc_row_text_pane_t_ParamLimits

0xfb45,	// (0x000a393e) list_single_dyc_row_text_pane_t

0x7393,	// (0x0009b18c) list_single_dyc_row_pane_g1_ParamLimits

0x7393,	// (0x0009b18c) list_single_dyc_row_pane_g1

0x739f,	// (0x0009b198) list_single_dyc_row_pane_g2_ParamLimits

0x739f,	// (0x0009b198) list_single_dyc_row_pane_g2

0x73ab,	// (0x0009b1a4) list_single_dyc_row_pane_g3_ParamLimits

0x73ab,	// (0x0009b1a4) list_single_dyc_row_pane_g3

0x73be,	// (0x0009b1b7) list_single_dyc_row_pane_g4_ParamLimits

0x73be,	// (0x0009b1b7) list_single_dyc_row_pane_g4

0x0006,

0xfb52,	// (0x000a394b) list_single_dyc_row_pane_g_ParamLimits

0xfb52,	// (0x000a394b) list_single_dyc_row_pane_g

0x7410,	// (0x0009b209) list_single_dyc_row_text_pane_ParamLimits

0x7410,	// (0x0009b209) list_single_dyc_row_text_pane

0xd6dd,	// (0x000a14d6) bg_sp_fs_scroll_pane

0x7435,	// (0x0009b22e) thumb_sp_fs_scroll_pane

0xe33c,	// (0x000a2135) list_medium_line_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_g1

0xe384,	// (0x000a217d) list_medium_line_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t1

0xe33c,	// (0x000a2135) list_medium_line_x2_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_g1

0xe33c,	// (0x000a2135) list_medium_line_x2_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x000a2f92) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x000a2f92) list_medium_line_x2_g

0xe384,	// (0x000a217d) list_medium_line_x2_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t1

0xe33c,	// (0x000a2135) list_medium_line_x3_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x3_g1

0x4eef,	// (0x00098ce8) list_medium_line_x3_g2_ParamLimits

0x4eef,	// (0x00098ce8) list_medium_line_x3_g2

0x0001,

0xfb61,	// (0x000a395a) list_medium_line_x3_g_ParamLimits

0xfb61,	// (0x000a395a) list_medium_line_x3_g

0x743e,	// (0x0009b237) list_medium_line_x3_t1_ParamLimits

0x743e,	// (0x0009b237) list_medium_line_x3_t1

0x7452,	// (0x0009b24b) thumb_sp_fs_scroll_pane_g1

0x745b,	// (0x0009b254) thumb_sp_fs_scroll_pane_g2

0x7464,	// (0x0009b25d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfb66,	// (0x000a395f) thumb_sp_fs_scroll_pane_g

0x7452,	// (0x0009b24b) bg_sp_fs_scroll_pane_g1

0x745b,	// (0x0009b254) bg_sp_fs_scroll_pane_g2

0x7464,	// (0x0009b25d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfb66,	// (0x000a395f) bg_sp_fs_scroll_pane_g

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g4_g1

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g4_g2

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g4_g3

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x000a2f97) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x000a2f97) list_medium_line_x2_t3_g4_g

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g4_t1

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g4_t2

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x000a2f8b) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x000a2f8b) list_medium_line_x2_t3_g4_t

0xe33c,	// (0x000a2135) list_medium_line_g2_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_g2_g1

0xe33c,	// (0x000a2135) list_medium_line_g2_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x000a2f92) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x000a2f92) list_medium_line_g2_g

0xe384,	// (0x000a217d) list_medium_line_g2_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_g2_t1

0xe33c,	// (0x000a2135) list_medium_line_t3_g2_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t3_g2_g1

0xe33c,	// (0x000a2135) list_medium_line_t3_g2_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x000a2f92) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x000a2f92) list_medium_line_t3_g2_g

0xe384,	// (0x000a217d) list_medium_line_t3_g2_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t3_g2_t1

0xe384,	// (0x000a217d) list_medium_line_t3_g2_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t3_g2_t2

0xe384,	// (0x000a217d) list_medium_line_t3_g2_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x000a2f8b) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x000a2f8b) list_medium_line_t3_g2_t

0xe37a,	// (0x000a2173) list_medium_line_right_icon_g1

0xeaf6,	// (0x000a28ef) list_medium_line_right_icon_t1

0xe33c,	// (0x000a2135) list_medium_line_t2_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t2_g1

0xe384,	// (0x000a217d) list_medium_line_t2_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t2_t1

0xe384,	// (0x000a217d) list_medium_line_t2_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x000a2f67) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x000a2f67) list_medium_line_t2_t

0xe33c,	// (0x000a2135) list_medium_line_t3_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t3_g1

0xe384,	// (0x000a217d) list_medium_line_t3_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t3_t1

0xe384,	// (0x000a217d) list_medium_line_t3_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t3_t2

0xe384,	// (0x000a217d) list_medium_line_t3_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x000a2f8b) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x000a2f8b) list_medium_line_t3_t

0xe33c,	// (0x000a2135) list_medium_line_g3_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_g3_g1

0xe33c,	// (0x000a2135) list_medium_line_g3_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_g3_g2

0xe33c,	// (0x000a2135) list_medium_line_g3_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x000a2f84) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x000a2f84) list_medium_line_g3_g

0xe384,	// (0x000a217d) list_medium_line_g3_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_g3_t1

0xe33c,	// (0x000a2135) list_medium_line_t2_g3_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t2_g3_g1

0xe33c,	// (0x000a2135) list_medium_line_t2_g3_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t2_g3_g2

0xe33c,	// (0x000a2135) list_medium_line_t2_g3_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x000a2f84) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x000a2f84) list_medium_line_t2_g3_g

0xe384,	// (0x000a217d) list_medium_line_t2_g3_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t2_g3_t1

0xe384,	// (0x000a217d) list_medium_line_t2_g3_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x000a2f67) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x000a2f67) list_medium_line_t2_g3_t

0xe33c,	// (0x000a2135) list_medium_line_t3_g3_g1_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t3_g3_g1

0xe33c,	// (0x000a2135) list_medium_line_t3_g3_g2_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t3_g3_g2

0xe33c,	// (0x000a2135) list_medium_line_t3_g3_g3_ParamLimits

0xe33c,	// (0x000a2135) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x000a2f84) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x000a2f84) list_medium_line_t3_g3_g

0xe384,	// (0x000a217d) list_medium_line_t3_g3_t1_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t3_g3_t1

0xe384,	// (0x000a217d) list_medium_line_t3_g3_t2_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t3_g3_t2

0xe384,	// (0x000a217d) list_medium_line_t3_g3_t3_ParamLimits

0xe384,	// (0x000a217d) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x000a2f8b) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x000a2f8b) list_medium_line_t3_g3_t

0xe37a,	// (0x000a2173) list_medium_line_right_iconx2_g1

0xe37a,	// (0x000a2173) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x000a2e85) list_medium_line_right_iconx2_g

0xeaf6,	// (0x000a28ef) list_medium_line_right_iconx2_t1

0xe37a,	// (0x000a2173) list_medium_line_t2_right_iconx2_g1

0xe37a,	// (0x000a2173) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x000a2e85) list_medium_line_t2_right_iconx2_g

0xeaf6,	// (0x000a28ef) list_medium_line_t2_right_iconx2_t1

0xeaf6,	// (0x000a28ef) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb2d,	// (0x000a3926) list_medium_line_t2_right_iconx2_t

0xeaf6,	// (0x000a28ef) list_medium_line_x4_t4_t1

0xeaf6,	// (0x000a28ef) list_medium_line_x4_t4_t2

0xeaf6,	// (0x000a28ef) list_medium_line_x4_t4_t3

0xeaf6,	// (0x000a28ef) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x000a3054) list_medium_line_x4_t4_t

0x74b0,	// (0x0009b2a9) tport_appsw_pane_ParamLimits

0x74b0,	// (0x0009b2a9) tport_appsw_pane

0x74c8,	// (0x0009b2c1) tport_contact_pane_ParamLimits

0x74c8,	// (0x0009b2c1) tport_contact_pane

0x74e0,	// (0x0009b2d9) tport_listscroll_pane_ParamLimits

0x74e0,	// (0x0009b2d9) tport_listscroll_pane

0x74fa,	// (0x0009b2f3) cell_tport_appsw_pane_ParamLimits

0x74fa,	// (0x0009b2f3) cell_tport_appsw_pane

0x9cdf,	// (0x0009dad8) tport_appsw_pane_g1_ParamLimits

0x9cdf,	// (0x0009dad8) tport_appsw_pane_g1

0x753a,	// (0x0009b333) tport_contact_pane_g1

0xd83f,	// (0x000a1638) tport_contact_pane_t1

0x7543,	// (0x0009b33c) tport_contact_pane_t2

0x0001,

0xfb6d,	// (0x000a3966) tport_contact_pane_t

0x7551,	// (0x0009b34a) list_tport_pane

0x755a,	// (0x0009b353) scroll_pane_cp_030

0x756b,	// (0x0009b364) cell_tport_appsw_pane_g1

0x757b,	// (0x0009b374) cell_tport_appsw_pane_t1

0x7589,	// (0x0009b382) grid_highlight_pane_cp019

0x7591,	// (0x0009b38a) list_tport_double_graphic_pane_ParamLimits

0x7591,	// (0x0009b38a) list_tport_double_graphic_pane

0xe295,	// (0x000a208e) list_highlight_pane_cp023_ParamLimits

0xe295,	// (0x000a208e) list_highlight_pane_cp023

0x759e,	// (0x0009b397) list_tport_double_graphic_pane_g1_ParamLimits

0x759e,	// (0x0009b397) list_tport_double_graphic_pane_g1

0x75ab,	// (0x0009b3a4) list_tport_double_graphic_pane_t1_ParamLimits

0x75ab,	// (0x0009b3a4) list_tport_double_graphic_pane_t1

0x75c0,	// (0x0009b3b9) list_tport_double_graphic_pane_t2_ParamLimits

0x75c0,	// (0x0009b3b9) list_tport_double_graphic_pane_t2

0x0001,

0xfb79,	// (0x000a3972) list_tport_double_graphic_pane_t_ParamLimits

0xfb79,	// (0x000a3972) list_tport_double_graphic_pane_t

0xd6dd,	// (0x000a14d6) main_cale_note_pane

0x51ca,	// (0x00098fc3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x51ca,	// (0x00098fc3) cell_vitu2_function_top_wide_pane_cp01

0x6c31,	// (0x0009aa2a) wait_bar_pane_cp05_ParamLimits

0xe295,	// (0x000a208e) listscroll_cmail_pane

0x75da,	// (0x0009b3d3) list_cmail_pane

0x75f1,	// (0x0009b3ea) list_cmail_body_pane

0x7606,	// (0x0009b3ff) list_single_cmail_header_caption_pane

0x761c,	// (0x0009b415) list_single_cmail_header_detail_pane_ParamLimits

0x761c,	// (0x0009b415) list_single_cmail_header_detail_pane

0x7649,	// (0x0009b442) list_single_cmail_header_caption_pane_t1

0x7660,	// (0x0009b459) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7660,	// (0x0009b459) list_single_cmail_header_detail_pane_g1

0xc06b,	// (0x0009fe64) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc06b,	// (0x0009fe64) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb7e,	// (0x000a3977) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb7e,	// (0x000a3977) list_single_cmail_header_detail_pane_g

0x7685,	// (0x0009b47e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7685,	// (0x0009b47e) list_single_cmail_header_detail_pane_t1

0x76e7,	// (0x0009b4e0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x76e7,	// (0x0009b4e0) list_single_cmail_header_editor_pane_bg

0xd99c,	// (0x000a1795) list_cmail_body_pane_g1

0x7700,	// (0x0009b4f9) list_cmail_body_pane_t1

0xcc10,	// (0x000a0a09) list_single_cmail_header_editor_pane_bg_g1

0xe809,	// (0x000a2602) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcc20,	// (0x000a0a19) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcc18,	// (0x000a0a11) list_single_cmail_header_editor_pane_bg_g1_copy3

0xce64,	// (0x000a0c5d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcc40,	// (0x000a0a39) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcc30,	// (0x000a0a29) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcc38,	// (0x000a0a31) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe7e9,	// (0x000a25e2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x770e,	// (0x0009b507) calenote_gesture_pane_ParamLimits

0x770e,	// (0x0009b507) calenote_gesture_pane

0x772e,	// (0x0009b527) calenote_window_pane_ParamLimits

0x772e,	// (0x0009b527) calenote_window_pane

0x774a,	// (0x0009b543) popup_note_window_cp01

0x7753,	// (0x0009b54c) calenote_swipe_1_pane_ParamLimits

0x7753,	// (0x0009b54c) calenote_swipe_1_pane

0x6ee2,	// (0x0009acdb) calenote_swipe_2_pane_ParamLimits

0x6ee2,	// (0x0009acdb) calenote_swipe_2_pane

0x6efc,	// (0x0009acf5) calenote_swipe_1_pane_g1_ParamLimits

0x6efc,	// (0x0009acf5) calenote_swipe_1_pane_g1

0x7771,	// (0x0009b56a) calenote_swipe_1_pane_g2_ParamLimits

0x7771,	// (0x0009b56a) calenote_swipe_1_pane_g2

0x0001,

0xfb8a,	// (0x000a3983) calenote_swipe_1_pane_g_ParamLimits

0xfb8a,	// (0x000a3983) calenote_swipe_1_pane_g

0x777d,	// (0x0009b576) calenote_swipe_1_pane_t1_ParamLimits

0x777d,	// (0x0009b576) calenote_swipe_1_pane_t1

0x6efc,	// (0x0009acf5) calenote_swipe_2_pane_g1_ParamLimits

0x6efc,	// (0x0009acf5) calenote_swipe_2_pane_g1

0x779c,	// (0x0009b595) calenote_swipe_2_pane_g2_ParamLimits

0x779c,	// (0x0009b595) calenote_swipe_2_pane_g2

0x0001,

0xfb8f,	// (0x000a3988) calenote_swipe_2_pane_g_ParamLimits

0xfb8f,	// (0x000a3988) calenote_swipe_2_pane_g

0x77a8,	// (0x0009b5a1) calenote_swipe_2_pane_t1_ParamLimits

0x77a8,	// (0x0009b5a1) calenote_swipe_2_pane_t1

0xd6dd,	// (0x000a14d6) main_mup_navstr_pane

0x4193,	// (0x00097f8c) main_mup3_pane_t7_ParamLimits

0x4193,	// (0x00097f8c) main_mup3_pane_t7

0xbbe3,	// (0x0009f9dc) main_mp4_pane_g6_ParamLimits

0xbbe3,	// (0x0009f9dc) main_mp4_pane_g6

0xbe0d,	// (0x0009fc06) main_image3_pane_t4_ParamLimits

0xbe0d,	// (0x0009fc06) main_image3_pane_t4

0x77cf,	// (0x0009b5c8) popup_navstr_preview_pane_ParamLimits

0x77cf,	// (0x0009b5c8) popup_navstr_preview_pane

0x77e3,	// (0x0009b5dc) scroll_navstr_pane_ParamLimits

0x77e3,	// (0x0009b5dc) scroll_navstr_pane

0xd6dd,	// (0x000a14d6) bg_popup_preview_window_pane_cp04

0x77f7,	// (0x0009b5f0) popup_navstr_preview_pane_t1

0x7805,	// (0x0009b5fe) scroll_navstr_pane_g1_ParamLimits

0x7805,	// (0x0009b5fe) scroll_navstr_pane_g1

0x7819,	// (0x0009b612) scroll_navstr_pane_t1_ParamLimits

0x7819,	// (0x0009b612) scroll_navstr_pane_t1

0x7768,	// (0x0009b561) bg_button_pane_cp014

0x7768,	// (0x0009b561) bg_button_pane_cp030

0x6d7c,	// (0x0009ab75) list_double_fisheye_pane_g4_ParamLimits

0x6d7c,	// (0x0009ab75) list_double_fisheye_pane_g4

0x6d88,	// (0x0009ab81) list_double_fisheye_pane_g5_ParamLimits

0x6d88,	// (0x0009ab81) list_double_fisheye_pane_g5

0x9bbb,	// (0x0009d9b4) sp_fs_scroll_pane_cp03

0x702d,	// (0x0009ae26) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x7039,	// (0x0009ae32) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb32,	// (0x000a392b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7079,	// (0x0009ae72) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x75e9,	// (0x0009b3e2) sp_fs_scroll_pane_cp02

0xe541,	// (0x000a233a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe541,	// (0x000a233a) popup_sp_fs_calendar_preview_list_single_pane

0xd6dd,	// (0x000a14d6) main_cam6_pano_pane

0x9b1c,	// (0x0009d915) main_mup3_pane_ParamLimits

0xd6dd,	// (0x000a14d6) main_phacti_pane

0x6b04,	// (0x0009a8fd) bg_button_pane_cp11

0x6b1e,	// (0x0009a917) main_mobtv_info_pane_g2_ParamLimits

0x6b1e,	// (0x0009a917) main_mobtv_info_pane_g2

0x0001,

0xfaa4,	// (0x000a389d) main_mobtv_info_pane_g_ParamLimits

0xfaa4,	// (0x000a389d) main_mobtv_info_pane_g

0xe384,	// (0x000a217d) sc_clock_pane_t5_ParamLimits

0xe384,	// (0x000a217d) sc_clock_pane_t5

0x9cdf,	// (0x0009dad8) main_radioblah_pane_g1_ParamLimits

0x9ced,	// (0x0009dae6) main_radioblah_pane_t3_ParamLimits

0x9ced,	// (0x0009dae6) main_radioblah_pane_t3

0x9ced,	// (0x0009dae6) main_radioblah_pane_t4_ParamLimits

0x9ced,	// (0x0009dae6) main_radioblah_pane_t4

0xe295,	// (0x000a208e) main_radioblah_text_pane_ParamLimits

0xe295,	// (0x000a208e) main_radioblah_text_pane

0xdbe0,	// (0x000a19d9) main_radioblah_info_pane_g1_ParamLimits

0xdc38,	// (0x000a1a31) main_radioblah_info_pane_t4_ParamLimits

0xdc38,	// (0x000a1a31) main_radioblah_info_pane_t4

0xe295,	// (0x000a208e) main_sp_fs_calendar_pane

0x7830,	// (0x0009b629) main_phacti_pane_g1

0x7841,	// (0x0009b63a) phacti_note_pane_ParamLimits

0x7841,	// (0x0009b63a) phacti_note_pane

0x7855,	// (0x0009b64e) phacti_term_pane_ParamLimits

0x7855,	// (0x0009b64e) phacti_term_pane

0x786a,	// (0x0009b663) phacti_note_pane_t1_ParamLimits

0x786a,	// (0x0009b663) phacti_note_pane_t1

0x7881,	// (0x0009b67a) phacti_term_pane_g1

0x7889,	// (0x0009b682) phacti_term_pane_t1_ParamLimits

0x7889,	// (0x0009b682) phacti_term_pane_t1

0x78b3,	// (0x0009b6ac) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe5d7,	// (0x000a23d0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb99,	// (0x000a3992) popup_sp_fs_calendar_preview_list_single_pane_g

0x78bb,	// (0x0009b6b4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x78bb,	// (0x0009b6b4) popup_sp_fs_calendar_preview_list_single_pane_t1

0x78d1,	// (0x0009b6ca) aid_popup_sp_fs_bg_corner_pane

0xe37a,	// (0x000a2173) popup_sp_fs_calendar_preview_bg_pane_g1

0xd6dd,	// (0x000a14d6) popup_sp_fs_calendar_preview_bg_pane

0x78d9,	// (0x0009b6d2) popup_sp_fs_calendar_preview_list_pane

0x78f6,	// (0x0009b6ef) bg_main_sp_fs_cale_pane_ParamLimits

0x78f6,	// (0x0009b6ef) bg_main_sp_fs_cale_pane

0x790e,	// (0x0009b707) listscroll_cale_mrui_pane_ParamLimits

0x790e,	// (0x0009b707) listscroll_cale_mrui_pane

0xb6cc,	// (0x0009f4c5) listscroll_sp_fs_schedule_track_pane

0x7926,	// (0x0009b71f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7926,	// (0x0009b71f) main_sp_fs_ctrlbar_pane_cp01

0xb6cc,	// (0x0009f4c5) main_sp_fs_ribbon_pane

0x793c,	// (0x0009b735) popup_sp_fs_cale_preview_window

0x794e,	// (0x0009b747) list_single_sp_fs_schedule_track_pane_ParamLimits

0x794e,	// (0x0009b747) list_single_sp_fs_schedule_track_pane

0xb68b,	// (0x0009f484) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb68b,	// (0x0009f484) bg_sp_fs_highlight_list_pane_cp03

0xb67f,	// (0x0009f478) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb67f,	// (0x0009f478) list_single_sp_fs_schedule_track_pane_g1

0xb67f,	// (0x0009f478) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb67f,	// (0x0009f478) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb9e,	// (0x000a3997) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb9e,	// (0x000a3997) list_single_sp_fs_schedule_track_pane_g

0x795a,	// (0x0009b753) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x795a,	// (0x0009b753) list_single_sp_fs_schedule_track_pane_t1

0x796c,	// (0x0009b765) sp_fs_schedule_track_pane_ParamLimits

0x796c,	// (0x0009b765) sp_fs_schedule_track_pane

0xb6d4,	// (0x0009f4cd) sp_fs_schedule_track_pane_g1

0xb6d4,	// (0x0009f4cd) sp_fs_schedule_track_pane_g2

0xb6d4,	// (0x0009f4cd) sp_fs_schedule_track_pane_g3

0xb6d4,	// (0x0009f4cd) sp_fs_schedule_track_pane_g4

0xb6d4,	// (0x0009f4cd) sp_fs_schedule_track_pane_g5

0x0004,

0xfba3,	// (0x000a399c) sp_fs_schedule_track_pane_g

0xb6d4,	// (0x0009f4cd) bg_sp_fs_schedule_viewer_highlight_g1

0xb6d4,	// (0x0009f4cd) bg_sp_fs_schedule_viewer_highlight_g2

0xb6d4,	// (0x0009f4cd) bg_sp_fs_schedule_viewer_highlight_g3

0xb6d4,	// (0x0009f4cd) bg_sp_fs_schedule_viewer_highlight_g4

0xb6d4,	// (0x0009f4cd) bg_sp_fs_schedule_viewer_highlight_g5

0xb6d4,	// (0x0009f4cd) bg_sp_fs_schedule_viewer_highlight_g6

0xb6d4,	// (0x0009f4cd) bg_sp_fs_schedule_viewer_highlight_g7

0xb6d4,	// (0x0009f4cd) bg_sp_fs_schedule_viewer_highlight_g8

0xb6d4,	// (0x0009f4cd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfbae,	// (0x000a39a7) bg_sp_fs_schedule_viewer_highlight_g

0xb6cc,	// (0x0009f4c5) bg_main_sp_fs_ribbon_pane

0xb6d4,	// (0x0009f4cd) main_sp_fs_ribbon_pane_g1

0x7978,	// (0x0009b771) main_sp_fs_ribbon_pane_t1

0x7978,	// (0x0009b771) main_sp_fs_ribbon_pane_t2

0x7978,	// (0x0009b771) main_sp_fs_ribbon_pane_t3

0x0002,

0xfbc1,	// (0x000a39ba) main_sp_fs_ribbon_pane_t

0xb6cc,	// (0x0009f4c5) main_sp_fs_ribbon_scheduler_pane

0xb6d4,	// (0x0009f4cd) bg_main_sp_fs_ribbon_pane_g1

0xb6d4,	// (0x0009f4cd) bg_main_sp_fs_ribbon_pane_g2

0xb6d4,	// (0x0009f4cd) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf690,	// (0x000a3489) bg_main_sp_fs_ribbon_pane_g

0xb6d4,	// (0x0009f4cd) main_sp_fs_ribbon_scheduler_pane_g1

0xb6d4,	// (0x0009f4cd) main_sp_fs_ribbon_scheduler_pane_g2

0xb6d4,	// (0x0009f4cd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf690,	// (0x000a3489) main_sp_fs_ribbon_scheduler_pane_g

0x7986,	// (0x0009b77f) list_cale_mrui_pane

0x7993,	// (0x0009b78c) sp_fs_scroll_pane_cp07_ParamLimits

0x7993,	// (0x0009b78c) sp_fs_scroll_pane_cp07

0xb68b,	// (0x0009f484) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb68b,	// (0x0009f484) bg_sp_fs_schedule_viewer_highlight

0xb6cc,	// (0x0009f4c5) list_single_sp_fs_schedule_track_pane_cp01

0xb6cc,	// (0x0009f4c5) list_sp_fs_schedule_track_pane

0x79af,	// (0x0009b7a8) sp_fs_scroll_pane_cp06_ParamLimits

0x79af,	// (0x0009b7a8) sp_fs_scroll_pane_cp06

0xe37a,	// (0x000a2173) bgmain_sp_fs_calendar_pane_g1

0x79c3,	// (0x0009b7bc) list_single_cale_mrui_pane_ParamLimits

0x79c3,	// (0x0009b7bc) list_single_cale_mrui_pane

0x79e3,	// (0x0009b7dc) list_single_cale_mrui_row_pane_ParamLimits

0x79e3,	// (0x0009b7dc) list_single_cale_mrui_row_pane

0x79f0,	// (0x0009b7e9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x79f0,	// (0x0009b7e9) list_single_cale_mrui_row_pane_g1

0x7a35,	// (0x0009b82e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7a35,	// (0x0009b82e) list_single_cale_mrui_row_pane_t1

0x7a47,	// (0x0009b840) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7a47,	// (0x0009b840) list_single_cale_mrui_row_pane_t2

0x7aaf,	// (0x0009b8a8) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7aaf,	// (0x0009b8a8) list_single_cale_mrui_row_pane_t3

0x7ade,	// (0x0009b8d7) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7ade,	// (0x0009b8d7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfbcf,	// (0x000a39c8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfbcf,	// (0x000a39c8) list_single_cale_mrui_row_pane_t

0x7b0d,	// (0x0009b906) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7b0d,	// (0x0009b906) list_single_cmail_header_editor_pane_bg_cp01

0x7b3b,	// (0x0009b934) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7b3b,	// (0x0009b934) list_single_cmail_header_editor_pane_bg_cp02

0x7b5b,	// (0x0009b954) main_radioblah_text_pane_t1_ParamLimits

0x7b5b,	// (0x0009b954) main_radioblah_text_pane_t1

0x7b75,	// (0x0009b96e) cam6_indi_pane_cp01

0x7b7d,	// (0x0009b976) cam6_mode_pane_cp01

0x7b85,	// (0x0009b97e) cam6_pano_pane

0x7b8e,	// (0x0009b987) cam6_zoom_pane_cp01

0x7b96,	// (0x0009b98f) cam6_pano_image_pane

0x7ba1,	// (0x0009b99a) cam6_pano_pane_g1

0xd99c,	// (0x000a1795) cam6_pano_pane_g2

0x7baa,	// (0x0009b9a3) cam6_pano_pane_g3

0x7bb3,	// (0x0009b9ac) cam6_pano_pane_g4

0xb967,	// (0x0009f760) cam6_pano_pane_g5

0x7bbc,	// (0x0009b9b5) cam6_pano_pane_g6

0x7bc6,	// (0x0009b9bf) cam6_pano_pane_g7

0x7bce,	// (0x0009b9c7) cam6_pano_pane_g8

0x7bd7,	// (0x0009b9d0) cam6_pano_pane_g9

0x0008,

0xfbd8,	// (0x000a39d1) cam6_pano_pane_g

0xd6dd,	// (0x000a14d6) main_browser_tag_pane

0x77c7,	// (0x0009b5c0) grid_navstr_albumart_pane

0x7be2,	// (0x0009b9db) cell_navstr_albumart_pane_ParamLimits

0x7be2,	// (0x0009b9db) cell_navstr_albumart_pane

0x7c02,	// (0x0009b9fb) cell_navstr_albumart_pane_g1

0x7c0a,	// (0x0009ba03) cell_navstr_albumart_pane_g2

0x7c12,	// (0x0009ba0b) cell_navstr_albumart_pane_g3

0x7c1a,	// (0x0009ba13) cell_navstr_albumart_pane_g4

0x0003,

0xfbeb,	// (0x000a39e4) cell_navstr_albumart_pane_g

0x7c22,	// (0x0009ba1b) bt_list_pane_ParamLimits

0x7c22,	// (0x0009ba1b) bt_list_pane

0x7c36,	// (0x0009ba2f) bt_list_pane_t1

0x7c45,	// (0x0009ba3e) bt_list_pane_t2

0x0001,

0xfbf4,	// (0x000a39ed) bt_list_pane_t

0xd6dd,	// (0x000a14d6) main_cale_prevew_pane

0x7c54,	// (0x0009ba4d) popup_cale_preview_window_ParamLimits

0x7c54,	// (0x0009ba4d) popup_cale_preview_window

0xe295,	// (0x000a208e) bg_popup_preview_window_pane_cp05_ParamLimits

0xe295,	// (0x000a208e) bg_popup_preview_window_pane_cp05

0x7c6f,	// (0x0009ba68) list_cale_preview_pane_ParamLimits

0x7c6f,	// (0x0009ba68) list_cale_preview_pane

0x7c7b,	// (0x0009ba74) list_double_cale_preview_pane_ParamLimits

0x7c7b,	// (0x0009ba74) list_double_cale_preview_pane

0x7c8d,	// (0x0009ba86) list_single_cale_preview_pane_ParamLimits

0x7c8d,	// (0x0009ba86) list_single_cale_preview_pane

0x7ca3,	// (0x0009ba9c) list_single_cale_preview_pane_g1

0x7cab,	// (0x0009baa4) list_single_cale_preview_pane_t1_ParamLimits

0x7cab,	// (0x0009baa4) list_single_cale_preview_pane_t1

0x7cc0,	// (0x0009bab9) list_double_cale_preview_pane_g1

0x7cc8,	// (0x0009bac1) list_double_cale_preview_pane_t1_ParamLimits

0x7cc8,	// (0x0009bac1) list_double_cale_preview_pane_t1

0x7cdd,	// (0x0009bad6) list_double_cale_preview_pane_t2_ParamLimits

0x7cdd,	// (0x0009bad6) list_double_cale_preview_pane_t2

0x0001,

0xfbf9,	// (0x000a39f2) list_double_cale_preview_pane_t_ParamLimits

0xfbf9,	// (0x000a39f2) list_double_cale_preview_pane_t

0xd6dd,	// (0x000a14d6) main_ezdial_pane

0xe295,	// (0x000a208e) main_sp_fs_email_pane_ParamLimits

0x6f99,	// (0x0009ad92) cmail_ddmenu_btn01_pane_ParamLimits

0x6f99,	// (0x0009ad92) cmail_ddmenu_btn01_pane

0x6fac,	// (0x0009ada5) cmail_ddmenu_btn02_pane_ParamLimits

0x6fac,	// (0x0009ada5) cmail_ddmenu_btn02_pane

0x7007,	// (0x0009ae00) cmail_ddmenu_btn03_pane_ParamLimits

0x7007,	// (0x0009ae00) cmail_ddmenu_btn03_pane

0x70b8,	// (0x0009aeb1) main_sp_fs_ctrlbar_pane_ParamLimits

0x70f7,	// (0x0009aef0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x75f1,	// (0x0009b3ea) list_cmail_body_pane_ParamLimits

0x7657,	// (0x0009b450) bg_button_pane_cp12

0x7678,	// (0x0009b471) list_single_cmail_header_detail_pane_g3_ParamLimits

0x7678,	// (0x0009b471) list_single_cmail_header_detail_pane_g3

0x76c3,	// (0x0009b4bc) list_single_cmail_header_detail_pane_t2_ParamLimits

0x76c3,	// (0x0009b4bc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb85,	// (0x000a397e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb85,	// (0x000a397e) list_single_cmail_header_detail_pane_t

0x789e,	// (0x0009b697) phacti_term_pane_t2_ParamLimits

0x789e,	// (0x0009b697) phacti_term_pane_t2

0x0001,

0xfb94,	// (0x000a398d) phacti_term_pane_t_ParamLimits

0xfb94,	// (0x000a398d) phacti_term_pane_t

0x7cf5,	// (0x0009baee) aid_size_list_single_double

0x7d01,	// (0x0009bafa) popup_ezdial_listscroll_window

0x7d18,	// (0x0009bb11) popup_number_entry_window_cp01

0xe5f0,	// (0x000a23e9) bg_popup_call_pane_cp09

0x7d25,	// (0x0009bb1e) ezdial_list_pane

0x7d2d,	// (0x0009bb26) scroll_pane_cp23

0x9d01,	// (0x0009dafa) bg_button_pane_cp028_ParamLimits

0x9d01,	// (0x0009dafa) bg_button_pane_cp028

0x7d35,	// (0x0009bb2e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7d35,	// (0x0009bb2e) cmail_ddmenu_btn01_pane_g1

0x7d41,	// (0x0009bb3a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7d41,	// (0x0009bb3a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfbfe,	// (0x000a39f7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfbfe,	// (0x000a39f7) cmail_ddmenu_btn01_pane_g

0x7d55,	// (0x0009bb4e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x7d55,	// (0x0009bb4e) cmail_ddmenu_btn01_pane_t1

0x9d01,	// (0x0009dafa) bg_button_pane_cp029_ParamLimits

0x9d01,	// (0x0009dafa) bg_button_pane_cp029

0x7d6b,	// (0x0009bb64) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7d6b,	// (0x0009bb64) cmail_ddmenu_btn02_pane_g1

0x7d83,	// (0x0009bb7c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7d83,	// (0x0009bb7c) cmail_ddmenu_btn02_pane_t1

0xe295,	// (0x000a208e) bg_button_pane_cp031_ParamLimits

0xe295,	// (0x000a208e) bg_button_pane_cp031

0x7d6b,	// (0x0009bb64) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7d6b,	// (0x0009bb64) cmail_ddmenu_btn03_pane_g1

0x7d83,	// (0x0009bb7c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7d83,	// (0x0009bb7c) cmail_ddmenu_btn03_pane_t1

0xe384,	// (0x000a217d) cell_dialer2_keypad_pane_t1_ParamLimits

0xb9a5,	// (0x0009f79e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb9a5,	// (0x0009f79e) cell_dialer2_keypad_pane_t1_copy1

0x6927,	// (0x0009a720) ncimui_group_button_pane

0xe295,	// (0x000a208e) main_sp_fs_calendar_pane_ParamLimits

0x7606,	// (0x0009b3ff) list_single_cmail_header_caption_pane_ParamLimits

0x78ed,	// (0x0009b6e6) aid_recal_txt_sm_pane

0xd6dd,	// (0x000a14d6) mian_recal_day_pane

0x793c,	// (0x0009b735) popup_sp_fs_cale_preview_window_ParamLimits

0x7da7,	// (0x0009bba0) list_recal_day_pane

0x7de9,	// (0x0009bbe2) list_single_recal_day_pane_ParamLimits

0x7de9,	// (0x0009bbe2) list_single_recal_day_pane

0x7dfb,	// (0x0009bbf4) list_single_recal_day_pane_g1_ParamLimits

0x7dfb,	// (0x0009bbf4) list_single_recal_day_pane_g1

0x7e07,	// (0x0009bc00) list_single_recal_day_pane_g2_ParamLimits

0x7e07,	// (0x0009bc00) list_single_recal_day_pane_g2

0x7e13,	// (0x0009bc0c) list_single_recal_day_pane_g3_ParamLimits

0x7e13,	// (0x0009bc0c) list_single_recal_day_pane_g3

0x7e1f,	// (0x0009bc18) list_single_recal_day_pane_g4_ParamLimits

0x7e1f,	// (0x0009bc18) list_single_recal_day_pane_g4

0x7e2d,	// (0x0009bc26) list_single_recal_day_pane_g5_ParamLimits

0x7e2d,	// (0x0009bc26) list_single_recal_day_pane_g5

0x7e43,	// (0x0009bc3c) list_single_recal_day_pane_g6_ParamLimits

0x7e43,	// (0x0009bc3c) list_single_recal_day_pane_g6

0x0004,

0xfc0d,	// (0x000a3a06) list_single_recal_day_pane_g_ParamLimits

0xfc0d,	// (0x000a3a06) list_single_recal_day_pane_g

0x7e57,	// (0x0009bc50) list_single_recal_day_pane_t1

0x7e69,	// (0x0009bc62) list_single_recal_day_pane_t2

0x0001,

0xfc18,	// (0x000a3a11) list_single_recal_day_pane_t

0x7e7b,	// (0x0009bc74) ncimui_query_button_pane_ParamLimits

0x7e7b,	// (0x0009bc74) ncimui_query_button_pane

0x7e8b,	// (0x0009bc84) ncimui_query_button_pane_t1_ParamLimits

0x7e8b,	// (0x0009bc84) ncimui_query_button_pane_t1

0x7e9e,	// (0x0009bc97) ncimui_query_button_pane_t2_ParamLimits

0x7e9e,	// (0x0009bc97) ncimui_query_button_pane_t2

0x0001,

0xfc1d,	// (0x000a3a16) ncimui_query_button_pane_t_ParamLimits

0xfc1d,	// (0x000a3a16) ncimui_query_button_pane_t

0x7eb1,	// (0x0009bcaa) query_button_pane_ParamLimits

0x7eb1,	// (0x0009bcaa) query_button_pane

0xd6dd,	// (0x000a14d6) bg_button_pane_cp0028

0x7ec4,	// (0x0009bcbd) query_button_pane_t1

0x3449,	// (0x00097242) main_tport_pane_ParamLimits

0x746d,	// (0x0009b266) bg_popup_window_pane_cp01_ParamLimits

0x746d,	// (0x0009b266) bg_popup_window_pane_cp01

0x7488,	// (0x0009b281) heading_pane_cp08_ParamLimits

0x7488,	// (0x0009b281) heading_pane_cp08

0x749b,	// (0x0009b294) heading_pane_cp07_ParamLimits

0x749b,	// (0x0009b294) heading_pane_cp07

0x756b,	// (0x0009b364) cell_tport_appsw_pane_g2

0x0002,

0xfb72,	// (0x000a396b) cell_tport_appsw_pane_g

0x2a33,	// (0x0009682c) input_candi_list_open_g1

0xe995,	// (0x000a278e) list_cale_time_pane_g6_ParamLimits

0xe995,	// (0x000a278e) list_cale_time_pane_g6

0x3a6a,	// (0x00097863) aid_size_touch_calib_1_ParamLimits

0x3a6a,	// (0x00097863) aid_size_touch_calib_1

0x3a7c,	// (0x00097875) aid_size_touch_calib_2_ParamLimits

0x3a7c,	// (0x00097875) aid_size_touch_calib_2

0x3a94,	// (0x0009788d) aid_size_touch_calib_3_ParamLimits

0x3a94,	// (0x0009788d) aid_size_touch_calib_3

0x3ab2,	// (0x000978ab) aid_size_touch_calib_4_ParamLimits

0x3ab2,	// (0x000978ab) aid_size_touch_calib_4

0x3aca,	// (0x000978c3) main_touch_calib_button_group_pane_ParamLimits

0x3aca,	// (0x000978c3) main_touch_calib_button_group_pane

0x3ae2,	// (0x000978db) main_touch_calib_pane_g1_ParamLimits

0x3af4,	// (0x000978ed) main_touch_calib_pane_g2_ParamLimits

0x3b06,	// (0x000978ff) main_touch_calib_pane_g3_ParamLimits

0x3b18,	// (0x00097911) main_touch_calib_pane_g4_ParamLimits

0xf63e,	// (0x000a3437) main_touch_calib_pane_g_ParamLimits

0x3b2a,	// (0x00097923) main_touch_calib_pane_t1_ParamLimits

0x3b44,	// (0x0009793d) main_touch_calib_pane_t2_ParamLimits

0x3b5e,	// (0x00097957) main_touch_calib_pane_t3_ParamLimits

0x3b72,	// (0x0009796b) main_touch_calib_pane_t4_ParamLimits

0x3b86,	// (0x0009797f) main_touch_calib_pane_t5_ParamLimits

0xf647,	// (0x000a3440) main_touch_calib_pane_t_ParamLimits

0xb734,	// (0x0009f52d) list_single_fp_cale_pane_g3_ParamLimits

0xb734,	// (0x0009f52d) list_single_fp_cale_pane_g3

0x9b1c,	// (0x0009d915) bg_button_pane_cp012_ParamLimits

0x9b1c,	// (0x0009d915) bg_vkb2_func_pane_cp03_ParamLimits

0x5abe,	// (0x000998b7) cell_vitu2_function_top_pane_g1_ParamLimits

0x9b1c,	// (0x0009d915) bg_vkb2_func_pane_cp04_ParamLimits

0x68b2,	// (0x0009a6ab) main_ncimui_button_group_pane_ParamLimits

0x68b2,	// (0x0009a6ab) main_ncimui_button_group_pane

0x6912,	// (0x0009a70b) main_ncimui_pane_t3_ParamLimits

0x6912,	// (0x0009a70b) main_ncimui_pane_t3

0x7838,	// (0x0009b631) phacti_button_group_pane

0x7cf5,	// (0x0009baee) aid_size_list_single_double_ParamLimits

0x7d01,	// (0x0009bafa) popup_ezdial_listscroll_window_ParamLimits

0x7d18,	// (0x0009bb11) popup_number_entry_window_cp01_ParamLimits

0x7ed2,	// (0x0009bccb) phacti_button_pane_ParamLimits

0x7ed2,	// (0x0009bccb) phacti_button_pane

0xd6dd,	// (0x000a14d6) bg_button_pane_cp14

0x7ee3,	// (0x0009bcdc) phacti_button_pane_t1

0x7ef1,	// (0x0009bcea) main_touch_calib_button_pane_ParamLimits

0x7ef1,	// (0x0009bcea) main_touch_calib_button_pane

0xe3d8,	// (0x000a21d1) bg_button_pane_cp18_ParamLimits

0xe3d8,	// (0x000a21d1) bg_button_pane_cp18

0x7f06,	// (0x0009bcff) main_touch_calib_button_pane_t1_ParamLimits

0x7f06,	// (0x0009bcff) main_touch_calib_button_pane_t1

0x7f1c,	// (0x0009bd15) main_touch_calib_button_pane_t2_ParamLimits

0x7f1c,	// (0x0009bd15) main_touch_calib_button_pane_t2

0x0001,

0xfc22,	// (0x000a3a1b) main_touch_calib_button_pane_t_ParamLimits

0xfc22,	// (0x000a3a1b) main_touch_calib_button_pane_t

0xd6dd,	// (0x000a14d6) cell_ncimui_button_pane

0xd6dd,	// (0x000a14d6) bg_button_pane_cp032

0x7f3a,	// (0x0009bd33) cell_ncimui_button_pane_t1

0xbded,	// (0x0009fbe6) image3_infobar_pane_ParamLimits

0xbded,	// (0x0009fbe6) image3_infobar_pane

0x6c84,	// (0x0009aa7d) fs_bigclock_status_pane_ParamLimits

0x6c84,	// (0x0009aa7d) fs_bigclock_status_pane

0x6c91,	// (0x0009aa8a) main_fs_bigclock_clock_pane_ParamLimits

0x6c91,	// (0x0009aa8a) main_fs_bigclock_clock_pane

0x6caf,	// (0x0009aaa8) main_fs_bigclock_indi_pane_ParamLimits

0x6caf,	// (0x0009aaa8) main_fs_bigclock_indi_pane

0x6ce1,	// (0x0009aada) main_fs_bigclock_swipe_pane_ParamLimits

0x6ce1,	// (0x0009aada) main_fs_bigclock_swipe_pane

0xd6dd,	// (0x000a14d6) main_fs_clock_dumped_data

0xdaa9,	// (0x000a18a2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdaa9,	// (0x000a18a2) list_single_fs_bigclock_indicator_pane_g1

0xdac4,	// (0x000a18bd) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdac4,	// (0x000a18bd) list_single_fs_bigclock_indicator_pane_g2

0xdade,	// (0x000a18d7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdade,	// (0x000a18d7) list_single_fs_bigclock_indicator_pane_g3

0xdaf8,	// (0x000a18f1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdaf8,	// (0x000a18f1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfad8,	// (0x000a38d1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfad8,	// (0x000a38d1) list_single_fs_bigclock_indicator_pane_g

0xdb23,	// (0x000a191c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdb23,	// (0x000a191c) list_single_fs_bigclock_indicator_pane_t1

0xdb4b,	// (0x000a1944) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdb4b,	// (0x000a1944) list_single_fs_bigclock_indicator_pane_t2

0xdb73,	// (0x000a196c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdb73,	// (0x000a196c) list_single_fs_bigclock_indicator_pane_t3

0xdb9b,	// (0x000a1994) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdb9b,	// (0x000a1994) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfae3,	// (0x000a38dc) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfae3,	// (0x000a38dc) list_single_fs_bigclock_indicator_pane_t

0x7f48,	// (0x0009bd41) image3_infobar_fav_pane_ParamLimits

0x7f48,	// (0x0009bd41) image3_infobar_fav_pane

0x7f58,	// (0x0009bd51) image3_infobar_loc_pane_ParamLimits

0x7f58,	// (0x0009bd51) image3_infobar_loc_pane

0x7f6c,	// (0x0009bd65) image3_infobar_time_pane_ParamLimits

0x7f6c,	// (0x0009bd65) image3_infobar_time_pane

0xe37a,	// (0x000a2173) image3_infobar_time_pane_g1

0x7f7c,	// (0x0009bd75) image3_infobar_time_pane_t1

0xe37a,	// (0x000a2173) image3_infobar_loc_pane_g1

0x7f8a,	// (0x0009bd83) image3_infobar_loc_pane_g2

0x0001,

0xfc27,	// (0x000a3a20) image3_infobar_loc_pane_g

0x7f92,	// (0x0009bd8b) image3_infobar_loc_pane_t1

0xe37a,	// (0x000a2173) image3_infobar_fav_pane_g1

0x7fa0,	// (0x0009bd99) image3_infobar_fav_pane_g2

0x0001,

0xfc2c,	// (0x000a3a25) image3_infobar_fav_pane_g

0x7fa8,	// (0x0009bda1) fs_bigclock_status_battery_pane

0x7fb1,	// (0x0009bdaa) fs_bigclock_status_signal_pane

0x7fba,	// (0x0009bdb3) fs_bigclock_status_title_pane

0x7fc3,	// (0x0009bdbc) fs_bigclock_status_signal_pane_g1

0x7fcc,	// (0x0009bdc5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc31,	// (0x000a3a2a) fs_bigclock_status_signal_pane_g

0x7fd4,	// (0x0009bdcd) fs_bigclock_status_battery_pane_g1

0x7fdd,	// (0x0009bdd6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc36,	// (0x000a3a2f) fs_bigclock_status_battery_pane_g

0x7fe5,	// (0x0009bdde) fs_bigclock_status_title_pane_t1

0x7ff3,	// (0x0009bdec) main_fs_bigclock_clock_pane_g1

0x7ff3,	// (0x0009bdec) main_fs_bigclock_clock_pane_g2

0x7ff3,	// (0x0009bdec) main_fs_bigclock_clock_pane_g3

0x7ff3,	// (0x0009bdec) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc3b,	// (0x000a3a34) main_fs_bigclock_clock_pane_g

0x8006,	// (0x0009bdff) main_fs_bigclock_clock_pane_t1

0x801f,	// (0x0009be18) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc44,	// (0x000a3a3d) main_fs_bigclock_clock_pane_t

0x8035,	// (0x0009be2e) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8035,	// (0x0009be2e) list_single_fs_bigclock_indicator_pane

0xc077,	// (0x0009fe70) list_single_fs_bigclock_pane_ParamLimits

0xc077,	// (0x0009fe70) list_single_fs_bigclock_pane

0xc09d,	// (0x0009fe96) main_fs_bigclock_indicator_pane_t1

0xc0ac,	// (0x0009fea5) list_single_fs_bigclock_pane_g1

0xc0b4,	// (0x0009fead) list_single_fs_bigclock_pane_t1

0xe37a,	// (0x000a2173) main_fs_bigclock_swipe_pane_g1

0xc0f7,	// (0x0009fef0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc55,	// (0x000a3a4e) main_fs_bigclock_swipe_pane_g

0xc0ff,	// (0x0009fef8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc0ff,	// (0x0009fef8) main_fs_bigclock_swipe_pane_t1

0x2580,	// (0x00096379) call_type_pane_ParamLimits

0xd6dd,	// (0x000a14d6) main_btmg_pane

0x7a1c,	// (0x0009b815) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7a1c,	// (0x0009b815) list_single_cale_mrui_row_pane_g2

0x0002,

0xfbc8,	// (0x000a39c1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfbc8,	// (0x000a39c1) list_single_cale_mrui_row_pane_g

0x7dd0,	// (0x0009bbc9) list_recal_vselct_arw_lo_pane

0x7dd8,	// (0x0009bbd1) list_recal_vselct_arw_up_pane

0x7de0,	// (0x0009bbd9) list_recal_vselct_pane

0x808a,	// (0x0009be83) btmg_button_pane

0x8094,	// (0x0009be8d) main_btmg_pane_g1

0xd6dd,	// (0x000a14d6) bg_button_pane_cp044

0xc11c,	// (0x0009ff15) btmg_button_pane_t1

0xaeab,	// (0x0009eca4) aid_listscroll_gen

0xe295,	// (0x000a208e) main_cntbar_detail_pane

0x75d2,	// (0x0009b3cb) list_cmail_folder_pane

0x9bbb,	// (0x0009d9b4) sp_fs_scroll_pane_cp03_ParamLimits

0x809e,	// (0x0009be97) list_single_fs_dyc_pane_cp01_ParamLimits

0x809e,	// (0x0009be97) list_single_fs_dyc_pane_cp01

0xc12a,	// (0x0009ff23) aid_size_cmail_indent

0xc133,	// (0x0009ff2c) list_single_dyc_row_pane_cp01

0x80df,	// (0x0009bed8) cntbar_detail_list_pane_ParamLimits

0x80df,	// (0x0009bed8) cntbar_detail_list_pane

0x812b,	// (0x0009bf24) main_cntbar_detail_cont_pane_ParamLimits

0x812b,	// (0x0009bf24) main_cntbar_detail_cont_pane

0x9bbb,	// (0x0009d9b4) scroll_pane_cp032_ParamLimits

0x9bbb,	// (0x0009d9b4) scroll_pane_cp032

0x813f,	// (0x0009bf38) cntbar_detail_list_event_pane_ParamLimits

0x813f,	// (0x0009bf38) cntbar_detail_list_event_pane

0x80ef,	// (0x0009bee8) cntbar_detail_list_shct_pane

0xe857,	// (0x000a2650) aid_list_gen

0xc13c,	// (0x0009ff35) aid_scroll

0xc145,	// (0x0009ff3e) aid_size_touch_scroll_bar

0x6d47,	// (0x0009ab40) aid_list_double

0xc14e,	// (0x0009ff47) aid_list_single

0xc14e,	// (0x0009ff47) aid_list_single_lg

0xc157,	// (0x0009ff50) aid_list_z_g_a_sm

0xc15f,	// (0x0009ff58) aid_list_z_g_d

0xc167,	// (0x0009ff60) aid_txt_z_prm

0x814f,	// (0x0009bf48) aid_txt_z_prm_cp01

0x815d,	// (0x0009bf56) aid_txt_z_sec

0x816b,	// (0x0009bf64) main_cntbar_detail_cont_pane_g1_ParamLimits

0x816b,	// (0x0009bf64) main_cntbar_detail_cont_pane_g1

0x817f,	// (0x0009bf78) main_cntbar_detail_cont_pane_g2_ParamLimits

0x817f,	// (0x0009bf78) main_cntbar_detail_cont_pane_g2

0x0001,

0xfc5a,	// (0x000a3a53) main_cntbar_detail_cont_pane_g_ParamLimits

0xfc5a,	// (0x000a3a53) main_cntbar_detail_cont_pane_g

0xc175,	// (0x0009ff6e) main_cntbar_detail_cont_pane_t1

0xc183,	// (0x0009ff7c) main_cntbar_detail_cont_pane_t2

0xc191,	// (0x0009ff8a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfc5f,	// (0x000a3a58) main_cntbar_detail_cont_pane_t

0x818f,	// (0x0009bf88) cell_cntbar_detail_list_shct_pane_ParamLimits

0x818f,	// (0x0009bf88) cell_cntbar_detail_list_shct_pane

0xc19f,	// (0x0009ff98) cntbar_detail_list_shct_pane_g1

0xc1a8,	// (0x0009ffa1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc66,	// (0x000a3a5f) cntbar_detail_list_shct_pane_g

0x81a3,	// (0x0009bf9c) cntbar_detail_list_event_pane_g1_ParamLimits

0x81a3,	// (0x0009bf9c) cntbar_detail_list_event_pane_g1

0x81af,	// (0x0009bfa8) cntbar_detail_list_event_pane_g2_ParamLimits

0x81af,	// (0x0009bfa8) cntbar_detail_list_event_pane_g2

0x0005,

0xfc6b,	// (0x000a3a64) cntbar_detail_list_event_pane_g_ParamLimits

0xfc6b,	// (0x000a3a64) cntbar_detail_list_event_pane_g

0x821b,	// (0x0009c014) cntbar_detail_list_event_pane_t1_ParamLimits

0x821b,	// (0x0009c014) cntbar_detail_list_event_pane_t1

0x8230,	// (0x0009c029) cntbar_detail_list_event_pane_t2_ParamLimits

0x8230,	// (0x0009c029) cntbar_detail_list_event_pane_t2

0x0002,

0xfc78,	// (0x000a3a71) cntbar_detail_list_event_pane_t_ParamLimits

0xfc78,	// (0x000a3a71) cntbar_detail_list_event_pane_t

0xe37a,	// (0x000a2173) cell_cntbar_detail_list_shct_pane_g1

0xef9c,	// (0x000a2d95) navi_pane_mv_g3

0xe295,	// (0x000a208e) main_cntbar_detail_pane_ParamLimits

0xd6dd,	// (0x000a14d6) main_notif_wgt_pane

0xbb6d,	// (0x0009f966) aid_tch_main_mp4_pane_g4

0xbde5,	// (0x0009fbde) popup_slider_window_cp02

0x7dc6,	// (0x0009bbbf) list_recal_day_event_pane

0x80b3,	// (0x0009beac) cntbar_detail_btn_pane_ParamLimits

0x80b3,	// (0x0009beac) cntbar_detail_btn_pane

0x80c9,	// (0x0009bec2) cntbar_detail_btn_pane_cp01_ParamLimits

0x80c9,	// (0x0009bec2) cntbar_detail_btn_pane_cp01

0x80ef,	// (0x0009bee8) cntbar_detail_list_shct_pane_ParamLimits

0x80ff,	// (0x0009bef8) cntbar_detail_pane_g1_ParamLimits

0x80ff,	// (0x0009bef8) cntbar_detail_pane_g1

0x810f,	// (0x0009bf08) cntbar_detail_pane_t1_ParamLimits

0x810f,	// (0x0009bf08) cntbar_detail_pane_t1

0x81bb,	// (0x0009bfb4) cntbar_detail_list_event_pane_g3_ParamLimits

0x81bb,	// (0x0009bfb4) cntbar_detail_list_event_pane_g3

0x81d3,	// (0x0009bfcc) cntbar_detail_list_event_pane_g4_ParamLimits

0x81d3,	// (0x0009bfcc) cntbar_detail_list_event_pane_g4

0x81eb,	// (0x0009bfe4) cntbar_detail_list_event_pane_g5_ParamLimits

0x81eb,	// (0x0009bfe4) cntbar_detail_list_event_pane_g5

0x8203,	// (0x0009bffc) cntbar_detail_list_event_pane_g6_ParamLimits

0x8203,	// (0x0009bffc) cntbar_detail_list_event_pane_g6

0x8245,	// (0x0009c03e) cntbar_detail_list_event_pane_t3_ParamLimits

0x8245,	// (0x0009c03e) cntbar_detail_list_event_pane_t3

0x8257,	// (0x0009c050) popup_notif_wgt_window_ParamLimits

0x8257,	// (0x0009c050) popup_notif_wgt_window

0x8270,	// (0x0009c069) popup_submenu_window_cp01_ParamLimits

0x8270,	// (0x0009c069) popup_submenu_window_cp01

0xe5f0,	// (0x000a23e9) bg_popup_window_pane_cp10

0xc1b1,	// (0x0009ffaa) listscroll_notif_wgt_pane

0xc1c3,	// (0x0009ffbc) list_notif_wgt_window

0xc1cc,	// (0x0009ffc5) scroll_pane_cp033

0x8286,	// (0x0009c07f) list_notif_wgt_row_pane_ParamLimits

0x8286,	// (0x0009c07f) list_notif_wgt_row_pane

0xc1d5,	// (0x0009ffce) aid_size_list_notif_wgt_del

0xc1e2,	// (0x0009ffdb) list_notif_wgt_row_pane_g1

0xc1ee,	// (0x0009ffe7) list_notif_wgt_row_pane_g2

0xc1fd,	// (0x0009fff6) list_notif_wgt_row_pane_g3

0x0002,

0xfc7f,	// (0x000a3a78) list_notif_wgt_row_pane_g

0xc20a,	// (0x000a0003) list_notif_wgt_row_pane_t1

0xc220,	// (0x000a0019) list_notif_wgt_row_pane_t2

0xc232,	// (0x000a002b) list_notif_wgt_row_pane_t3

0x0002,

0xfc86,	// (0x000a3a7f) list_notif_wgt_row_pane_t

0xce7e,	// (0x000a0c77) list_recal_day_event_pane_g1

0xc244,	// (0x000a003d) list_recal_day_event_pane_t1

0xd6dd,	// (0x000a14d6) bg_button_pane_cp045

0xc253,	// (0x000a004c) cntbar_detail_btn_pane_t1

0x9d01,	// (0x0009dafa) main_callh_pane_ParamLimits

0x9d01,	// (0x0009dafa) main_callh_pane

0xd6dd,	// (0x000a14d6) main_coverflow0_pane

0xd6dd,	// (0x000a14d6) main_wgtman_pane

0x6cf9,	// (0x0009aaf2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6cf9,	// (0x0009aaf2) main_fs_bigclock_unlock_btn_pane

0x7563,	// (0x0009b35c) bg_button_pane_cp16

0x7573,	// (0x0009b36c) cell_tport_appsw_pane_g3

0x8296,	// (0x0009c08f) cf0_flow_pane_ParamLimits

0x8296,	// (0x0009c08f) cf0_flow_pane

0xc261,	// (0x000a005a) listscroll_cf0_pane

0xc26c,	// (0x000a0065) main_cf0_pane_g1

0x82ab,	// (0x0009c0a4) main_cf0_pane_t1_ParamLimits

0x82ab,	// (0x0009c0a4) main_cf0_pane_t1

0x82c2,	// (0x0009c0bb) main_cf0_pane_t2_ParamLimits

0x82c2,	// (0x0009c0bb) main_cf0_pane_t2

0x0001,

0xfc92,	// (0x000a3a8b) main_cf0_pane_t_ParamLimits

0xfc92,	// (0x000a3a8b) main_cf0_pane_t

0xc27e,	// (0x000a0077) scroll_pane_cp11

0x82d9,	// (0x0009c0d2) cf0_flow_pane_g1

0x82e1,	// (0x0009c0da) cf0_flow_pane_g2

0x0001,

0xfc97,	// (0x000a3a90) cf0_flow_pane_g

0x82e9,	// (0x0009c0e2) cf0_flow_pane_t1

0xd6dd,	// (0x000a14d6) main_call6_pane

0xd6dd,	// (0x000a14d6) main_calllock_pane

0x82f7,	// (0x0009c0f0) call6_btn_grp_pane_ParamLimits

0x82f7,	// (0x0009c0f0) call6_btn_grp_pane

0x8311,	// (0x0009c10a) call6_pane_g1_ParamLimits

0x8311,	// (0x0009c10a) call6_pane_g1

0x8327,	// (0x0009c120) popup_call6_1st_window_ParamLimits

0x8327,	// (0x0009c120) popup_call6_1st_window

0x8338,	// (0x0009c131) popup_call6_2nd_window_ParamLimits

0x8338,	// (0x0009c131) popup_call6_2nd_window

0x8349,	// (0x0009c142) cell_call6_btn_pane_ParamLimits

0x8349,	// (0x0009c142) cell_call6_btn_pane

0xe5f0,	// (0x000a23e9) bg_popup_call2_in_pane_cp03

0xc289,	// (0x000a0082) popup_call6_1st_window_g1

0xc291,	// (0x000a008a) popup_call6_1st_window_g2

0xc299,	// (0x000a0092) popup_call6_1st_window_g3

0x0002,

0xfc9c,	// (0x000a3a95) popup_call6_1st_window_g

0xc2a1,	// (0x000a009a) popup_call6_1st_window_t1

0xc2b0,	// (0x000a00a9) popup_call6_1st_window_t2

0xc2be,	// (0x000a00b7) popup_call6_1st_window_t3

0x0002,

0xfca3,	// (0x000a3a9c) popup_call6_1st_window_t

0xe5f0,	// (0x000a23e9) bg_popup_call2_in_pane_cp04

0xc2cc,	// (0x000a00c5) popup_call6_2nd_window_g1

0xc2d4,	// (0x000a00cd) popup_call6_2nd_window_g2

0xc2dc,	// (0x000a00d5) popup_call6_2nd_window_g3

0x0002,

0xfcaa,	// (0x000a3aa3) popup_call6_2nd_window_g

0xc2e4,	// (0x000a00dd) popup_call6_2nd_window_t1

0x9b2a,	// (0x0009d923) bg_button_pane_cp15

0xd0cf,	// (0x000a0ec8) cell_call6_btn_pane_g1

0xd0d8,	// (0x000a0ed1) cell_call6_btn_pane_t1

0x835c,	// (0x0009c155) listscroll_wgtman_pane_ParamLimits

0x835c,	// (0x0009c155) listscroll_wgtman_pane

0x837d,	// (0x0009c176) wgtman_btn_pane_ParamLimits

0x837d,	// (0x0009c176) wgtman_btn_pane

0xeda3,	// (0x000a2b9c) aid_scroll_copy1

0xc2f3,	// (0x000a00ec) list_wgtman_pane

0x83c0,	// (0x0009c1b9) wgtman_btn_pane_g1_ParamLimits

0x83c0,	// (0x0009c1b9) wgtman_btn_pane_g1

0x83ec,	// (0x0009c1e5) wgtman_btn_pane_t1_ParamLimits

0x83ec,	// (0x0009c1e5) wgtman_btn_pane_t1

0xc2fd,	// (0x000a00f6) wgtman_btn_pane_t2_ParamLimits

0xc2fd,	// (0x000a00f6) wgtman_btn_pane_t2

0x0001,

0xfcb1,	// (0x000a3aaa) wgtman_btn_pane_t_ParamLimits

0xfcb1,	// (0x000a3aaa) wgtman_btn_pane_t

0x8429,	// (0x0009c222) listrow_wgtman_pane_ParamLimits

0x8429,	// (0x0009c222) listrow_wgtman_pane

0x843b,	// (0x0009c234) listrow_wgtman_pane_g1

0x8448,	// (0x0009c241) listrow_wgtman_pane_g2

0x0001,

0xfcb6,	// (0x000a3aaf) listrow_wgtman_pane_g

0x8466,	// (0x0009c25f) listrow_wgtman_pane_t1

0x847e,	// (0x0009c277) listrow_wgtman_pane_t2

0x0001,

0xfcbb,	// (0x000a3ab4) listrow_wgtman_pane_t

0x84a4,	// (0x0009c29d) wait_bar_pane_cp09

0xc314,	// (0x000a010d) main_calllock_btn_pane

0xc31e,	// (0x000a0117) main_calllock_pane_g1

0xd6dd,	// (0x000a14d6) bg_button_pane_cp17

0xc326,	// (0x000a011f) main_calllock_btn_pane_g1

0xc32f,	// (0x000a0128) main_calllock_btn_pane_t1

0xd6dd,	// (0x000a14d6) main_dialer3_pane

0xd6dd,	// (0x000a14d6) main_fmrd2_pane

0xe37a,	// (0x000a2173) main_fs_bigclock_unlock_btn_pane_g1

0x84be,	// (0x0009c2b7) main_fs_bigclock_unlock_btn_pane_t1

0x84cc,	// (0x0009c2c5) area_fmrd2_info_pane_ParamLimits

0x84cc,	// (0x0009c2c5) area_fmrd2_info_pane

0x84dd,	// (0x0009c2d6) area_fmrd2_visual_pane_ParamLimits

0x84dd,	// (0x0009c2d6) area_fmrd2_visual_pane

0x84eb,	// (0x0009c2e4) fmrd2_indi_pane_ParamLimits

0x84eb,	// (0x0009c2e4) fmrd2_indi_pane

0x84f8,	// (0x0009c2f1) area_fmrd2_visual_pane_g1

0x8500,	// (0x0009c2f9) area_fmrd2_visual_pane_t1

0x8510,	// (0x0009c309) area_fmrd2_visual_pane_t2

0x8520,	// (0x0009c319) area_fmrd2_visual_pane_t3

0x0002,

0xfcc5,	// (0x000a3abe) area_fmrd2_visual_pane_t

0x8530,	// (0x0009c329) area_fmrd2_info_pane_g1

0x8538,	// (0x0009c331) area_fmrd2_info_pane_t1

0x8548,	// (0x0009c341) area_fmrd2_info_pane_t2

0x8558,	// (0x0009c351) area_fmrd2_info_pane_t3

0x8568,	// (0x0009c361) area_fmrd2_info_pane_t4

0x0003,

0xfccc,	// (0x000a3ac5) area_fmrd2_info_pane_t

0x8576,	// (0x0009c36f) fmrd2_indi_pane_t1

0x8586,	// (0x0009c37f) fmrd2_indi_pane_t2

0x8596,	// (0x0009c38f) fmrd2_indi_pane_t3

0x0002,

0xfcd5,	// (0x000a3ace) fmrd2_indi_pane_t

0xdb07,	// (0x000a1900) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb07,	// (0x000a1900) list_single_fs_bigclock_indicator_pane_g5

0xdbb8,	// (0x000a19b1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdbb8,	// (0x000a19b1) list_single_fs_bigclock_indicator_pane_t5

0x78e1,	// (0x0009b6da) aid_cell_bcale_month_pane_ParamLimits

0x78e1,	// (0x0009b6da) aid_cell_bcale_month_pane

0x78e1,	// (0x0009b6da) bcale_month_pane_ParamLimits

0x78e1,	// (0x0009b6da) bcale_month_pane

0xb68b,	// (0x0009f484) bcale_preview_pane_ParamLimits

0xb68b,	// (0x0009f484) bcale_preview_pane

0xc0b4,	// (0x0009fead) list_single_fs_bigclock_pane_t1_ParamLimits

0xc0d3,	// (0x0009fecc) list_single_fs_bigclock_pane_t2_ParamLimits

0xc0d3,	// (0x0009fecc) list_single_fs_bigclock_pane_t2

0x0001,

0xfc50,	// (0x000a3a49) list_single_fs_bigclock_pane_t_ParamLimits

0xfc50,	// (0x000a3a49) list_single_fs_bigclock_pane_t

0x84b6,	// (0x0009c2af) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfcc0,	// (0x000a3ab9) main_fs_bigclock_unlock_btn_pane_g

0x85a6,	// (0x0009c39f) aid_dia3_key_size_ParamLimits

0x85a6,	// (0x0009c39f) aid_dia3_key_size

0x85b5,	// (0x0009c3ae) aid_dia3_listrow_size_ParamLimits

0x85b5,	// (0x0009c3ae) aid_dia3_listrow_size

0x85ca,	// (0x0009c3c3) dia3_keypad_fun_pane_ParamLimits

0x85ca,	// (0x0009c3c3) dia3_keypad_fun_pane

0x85e6,	// (0x0009c3df) dia3_keypad_num_pane_ParamLimits

0x85e6,	// (0x0009c3df) dia3_keypad_num_pane

0x8601,	// (0x0009c3fa) dia3_listscroll_pane_ParamLimits

0x8601,	// (0x0009c3fa) dia3_listscroll_pane

0x8614,	// (0x0009c40d) dia3_numentry_pane_ParamLimits

0x8614,	// (0x0009c40d) dia3_numentry_pane

0xc33e,	// (0x000a0137) dia3_list_pane

0xc349,	// (0x000a0142) scroll_pane_cp12

0xd6dd,	// (0x000a14d6) bg_dia3_numentry_pane

0x862c,	// (0x0009c425) dia3_numentry_pane_t1

0x863b,	// (0x0009c434) cell_dia3_key_num_pane

0x8643,	// (0x0009c43c) cell_dia3_key0_fun_pane_ParamLimits

0x8643,	// (0x0009c43c) cell_dia3_key0_fun_pane

0x8657,	// (0x0009c450) cell_dia3_key1_fun_pane_ParamLimits

0x8657,	// (0x0009c450) cell_dia3_key1_fun_pane

0x866f,	// (0x0009c468) dia3_listrow_pane

0xd85a,	// (0x000a1653) bg_dia3_numentry_pane_g1

0xd6dd,	// (0x000a14d6) bg_button_pane_cp21

0xc354,	// (0x000a014d) cell_dia3_key_num_pane_t1

0xc362,	// (0x000a015b) cell_dia3_key_num_pane_t2

0xc371,	// (0x000a016a) cell_dia3_key_num_pane_t3

0xc380,	// (0x000a0179) cell_dia3_key_num_pane_t4

0x0003,

0xfcdc,	// (0x000a3ad5) cell_dia3_key_num_pane_t

0xd6dd,	// (0x000a14d6) bg_button_pane_cp19

0x8681,	// (0x0009c47a) cell_dia3_key0_fun_pane_g1

0xd6dd,	// (0x000a14d6) bg_button_pane_cp20

0x8689,	// (0x0009c482) cell_dia3_key1_fun_pane_g1

0xb68b,	// (0x0009f484) area_left_week_number_pane

0xb68b,	// (0x0009f484) area_top_day_name_pane

0xb68b,	// (0x0009f484) frame_month_view_pane

0xb68b,	// (0x0009f484) grid_month_view_pane

0xb68b,	// (0x0009f484) cell_top_day_name_pane_ParamLimits

0xb68b,	// (0x0009f484) cell_top_day_name_pane

0xb68b,	// (0x0009f484) cell_area_left_week_number_pane_ParamLimits

0xb68b,	// (0x0009f484) cell_area_left_week_number_pane

0xb68b,	// (0x0009f484) cell_month_view_pane_ParamLimits

0xb68b,	// (0x0009f484) cell_month_view_pane

0xb67f,	// (0x0009f478) frm_month_g1

0xb67f,	// (0x0009f478) frm_month_g2

0xb67f,	// (0x0009f478) frm_month_g3

0xb67f,	// (0x0009f478) frm_month_g4

0xb67f,	// (0x0009f478) frm_month_g5

0xb67f,	// (0x0009f478) frm_month_g6

0xb67f,	// (0x0009f478) frm_month_g7

0xb67f,	// (0x0009f478) frm_month_g8

0xb67f,	// (0x0009f478) frm_month_g9

0xb67f,	// (0x0009f478) frm_month_g10

0xb67f,	// (0x0009f478) frm_month_g11

0xb67f,	// (0x0009f478) frm_month_g12

0xb67f,	// (0x0009f478) frm_month_g13

0xb67f,	// (0x0009f478) frm_month_g14

0xb67f,	// (0x0009f478) frm_month_g15

0xb67f,	// (0x0009f478) frm_month_g16

0x000f,

0xfce5,	// (0x000a3ade) frm_month_g

0xc38f,	// (0x000a0188) cell_top_day_name_pane_t1

0xb67f,	// (0x0009f478) cell_area_left_week_number_pane_g1

0xc38f,	// (0x000a0188) cell_area_left_week_number_pane_t1

0xb67f,	// (0x0009f478) cell_month_view_pane_g1

0xc38f,	// (0x000a0188) cell_month_view_pane_t1

0xd6dd,	// (0x000a14d6) main_fps_pane

0x6fcf,	// (0x0009adc8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x6fcf,	// (0x0009adc8) cmail_ddmenu_btn02_pane_cp1

0x6feb,	// (0x0009ade4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x6feb,	// (0x0009ade4) cmail_ddmenu_btn02_pane_cp2

0x7d77,	// (0x0009bb70) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7d77,	// (0x0009bb70) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc03,	// (0x000a39fc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc03,	// (0x000a39fc) cmail_ddmenu_btn02_pane_g

0x7d95,	// (0x0009bb8e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7d95,	// (0x0009bb8e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc08,	// (0x000a3a01) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc08,	// (0x000a3a01) cmail_ddmenu_btn02_pane_t

0x8691,	// (0x0009c48a) fps_text_pane_ParamLimits

0x8691,	// (0x0009c48a) fps_text_pane

0x86a8,	// (0x0009c4a1) main_fps_pane_g1_ParamLimits

0x86a8,	// (0x0009c4a1) main_fps_pane_g1

0x86c2,	// (0x0009c4bb) wait_bar_pane_cp010_ParamLimits

0x86c2,	// (0x0009c4bb) wait_bar_pane_cp010

0x86d3,	// (0x0009c4cc) fps_text_pane_t1_ParamLimits

0x86d3,	// (0x0009c4cc) fps_text_pane_t1

0x4ec9,	// (0x00098cc2) cam4_image_uncrop_pane_g1

0x4ed2,	// (0x00098ccb) cam4_image_uncrop_pane_g2

0x4edb,	// (0x00098cd4) cam4_image_uncrop_pane_g3

0x4ee4,	// (0x00098cdd) cam4_image_uncrop_pane_g4

0x0003,

0xf7cb,	// (0x000a35c4) cam4_image_uncrop_pane_g

0x866f,	// (0x0009c468) dia3_listrow_pane_ParamLimits

0xd6dd,	// (0x000a14d6) main_phob2_pane

0x750b,	// (0x0009b304) cell_tport_appsw_pane_cp02_ParamLimits

0x750b,	// (0x0009b304) cell_tport_appsw_pane_cp02

0x751f,	// (0x0009b318) cell_tport_appsw_pane_cp03_ParamLimits

0x751f,	// (0x0009b318) cell_tport_appsw_pane_cp03

0xd6dd,	// (0x000a14d6) phob2_contact_card_pane

0xd6dd,	// (0x000a14d6) phob2_listscroll_pane

0xc3a1,	// (0x000a019a) phob2_list_pane

0x7d2d,	// (0x0009bb26) scroll_pane_cp034

0x86eb,	// (0x0009c4e4) phob2_cc_data_pane_ParamLimits

0x86eb,	// (0x0009c4e4) phob2_cc_data_pane

0x870a,	// (0x0009c503) phob2_cc_listscroll_pane_ParamLimits

0x870a,	// (0x0009c503) phob2_cc_listscroll_pane

0x8728,	// (0x0009c521) list_double_large_graphic_phob2_pane_ParamLimits

0x8728,	// (0x0009c521) list_double_large_graphic_phob2_pane

0x8747,	// (0x0009c540) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8747,	// (0x0009c540) list_double_large_graphic_phob2_pane_g1

0x8759,	// (0x0009c552) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8759,	// (0x0009c552) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd06,	// (0x000a3aff) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd06,	// (0x000a3aff) list_double_large_graphic_phob2_pane_g

0x878d,	// (0x0009c586) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x878d,	// (0x0009c586) list_double_large_graphic_phob2_pane_t1

0x87b1,	// (0x0009c5aa) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x87b1,	// (0x0009c5aa) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd0f,	// (0x000a3b08) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd0f,	// (0x000a3b08) list_double_large_graphic_phob2_pane_t

0xe295,	// (0x000a208e) list_highlight_pane_cp024

0xc3a9,	// (0x000a01a2) phob2_cc_button_pane

0x87d2,	// (0x0009c5cb) phob2_cc_data_pane_g1_ParamLimits

0x87d2,	// (0x0009c5cb) phob2_cc_data_pane_g1

0x87e9,	// (0x0009c5e2) phob2_cc_data_pane_g2_ParamLimits

0x87e9,	// (0x0009c5e2) phob2_cc_data_pane_g2

0x0001,

0xfd14,	// (0x000a3b0d) phob2_cc_data_pane_g_ParamLimits

0xfd14,	// (0x000a3b0d) phob2_cc_data_pane_g

0x87fb,	// (0x0009c5f4) phob2_cc_data_pane_t1_ParamLimits

0x87fb,	// (0x0009c5f4) phob2_cc_data_pane_t1

0x8813,	// (0x0009c60c) phob2_cc_data_pane_t2_ParamLimits

0x8813,	// (0x0009c60c) phob2_cc_data_pane_t2

0x882b,	// (0x0009c624) phob2_cc_data_pane_t3_ParamLimits

0x882b,	// (0x0009c624) phob2_cc_data_pane_t3

0x0002,

0xfd19,	// (0x000a3b12) phob2_cc_data_pane_t_ParamLimits

0xfd19,	// (0x000a3b12) phob2_cc_data_pane_t

0xc3b1,	// (0x000a01aa) phob2_cc_list_pane_ParamLimits

0xc3b1,	// (0x000a01aa) phob2_cc_list_pane

0xd75f,	// (0x000a1558) scroll_pane_cp035_ParamLimits

0xd75f,	// (0x000a1558) scroll_pane_cp035

0xe295,	// (0x000a208e) bg_button_pane_cp033

0xc3bd,	// (0x000a01b6) phob2_cc_button_pane_g1

0xc3c9,	// (0x000a01c2) phob2_cc_button_pane_t1

0xc3de,	// (0x000a01d7) phob2_cc_button_pane_t2

0x0001,

0xfd20,	// (0x000a3b19) phob2_cc_button_pane_t

0x8843,	// (0x0009c63c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8843,	// (0x0009c63c) list_double_large_graphic_phob2_cc_pane

0x8873,	// (0x0009c66c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8873,	// (0x0009c66c) list_double_large_graphic_phob2_cc_pane_g1

0x887f,	// (0x0009c678) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x887f,	// (0x0009c678) list_double_large_graphic_phob2_cc_pane_g2

0x888b,	// (0x0009c684) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x888b,	// (0x0009c684) list_double_large_graphic_phob2_cc_pane_g3

0x8897,	// (0x0009c690) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8897,	// (0x0009c690) list_double_large_graphic_phob2_cc_pane_g4

0x88a3,	// (0x0009c69c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x88a3,	// (0x0009c69c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd25,	// (0x000a3b1e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd25,	// (0x000a3b1e) list_double_large_graphic_phob2_cc_pane_g

0x88af,	// (0x0009c6a8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x88af,	// (0x0009c6a8) list_double_large_graphic_phob2_cc_pane_t1

0x88d8,	// (0x0009c6d1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x88d8,	// (0x0009c6d1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd30,	// (0x000a3b29) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd30,	// (0x000a3b29) list_double_large_graphic_phob2_cc_pane_t

0xc3f0,	// (0x000a01e9) list_highlight_pane_cp025_ParamLimits

0xc3f0,	// (0x000a01e9) list_highlight_pane_cp025

0xe295,	// (0x000a208e) bg_button_pane_cp033_ParamLimits

0xc3bd,	// (0x000a01b6) phob2_cc_button_pane_g1_ParamLimits

0xc3c9,	// (0x000a01c2) phob2_cc_button_pane_t1_ParamLimits

0xc3de,	// (0x000a01d7) phob2_cc_button_pane_t2_ParamLimits

0xfd20,	// (0x000a3b19) phob2_cc_button_pane_t_ParamLimits

0x0ab9,	// (0x000948b2) popup_wgtman_window

0xcd50,	// (0x000a0b49) scroll_pane_cp038

0x83a2,	// (0x0009c19b) wgtman_btn_pane_cp_01_ParamLimits

0x83a2,	// (0x0009c19b) wgtman_btn_pane_cp_01

0xc3fe,	// (0x000a01f7) wgtman_content_pane

0xc407,	// (0x000a0200) wgtman_heading_pane

0xd6dd,	// (0x000a14d6) bg_heading_pane_cp02

0xc410,	// (0x000a0209) wgtman_heading_pane_g1

0xc418,	// (0x000a0211) wgtman_heading_pane_t1

0xc426,	// (0x000a021f) scroll_pane_cp036

0xc42e,	// (0x000a0227) wgtman_list_pane

0xc436,	// (0x000a022f) wgtman_list_pane_t1_ParamLimits

0xc436,	// (0x000a022f) wgtman_list_pane_t1

0xbe59,	// (0x0009fc52) cam4_grid_pane

0x5c4b,	// (0x00099a44) bg_button_pane_cp015_ParamLimits

0x5c5c,	// (0x00099a55) bg_button_pane_cp016_ParamLimits

0x5c68,	// (0x00099a61) bg_button_pane_cp017_ParamLimits

0x5cbc,	// (0x00099ab5) popup_vitu2_query_window_g3_ParamLimits

0x5cbc,	// (0x00099ab5) popup_vitu2_query_window_g3

0x5d5d,	// (0x00099b56) popup_vitu2_query_window_t6_ParamLimits

0x5d5d,	// (0x00099b56) popup_vitu2_query_window_t6

0x5d88,	// (0x00099b81) popup_vitu2_query_window_t7_ParamLimits

0x5d88,	// (0x00099b81) popup_vitu2_query_window_t7

0x4ec9,	// (0x00098cc2) cam4_grid_pane_g1

0x4ed2,	// (0x00098ccb) cam4_grid_pane_g2

0xc450,	// (0x000a0249) cam4_grid_pane_g3

0xc459,	// (0x000a0252) cam4_grid_pane_g4

0x0003,

0xfd35,	// (0x000a3b2e) cam4_grid_pane_g

0x155d,	// (0x00095356) aid_placing_vt_slider_lsc_ParamLimits

0x1868,	// (0x00095661) vidtel_button_pane_ParamLimits

0x1868,	// (0x00095661) vidtel_button_pane

0xd6dd,	// (0x000a14d6) bg_button_pane_cp034

0xc464,	// (0x000a025d) vidtel_button_pane_g1

0xc46c,	// (0x000a0265) vidtel_button_pane_t1

0xce5c,	// (0x000a0c55) aid_size_vtel_slider_touch

0xd75f,	// (0x000a1558) scroll_pane_cp039

0x6a90,	// (0x0009a889) ncim_query_button_pane_cp01_ParamLimits

0x6aaf,	// (0x0009a8a8) ncimui_query_pane_g1_ParamLimits

0xe295,	// (0x000a208e) input_focus_pane_cp012_ParamLimits

0xd898,	// (0x000a1691) ncim_query_entry_pane_t1_ParamLimits

0xd75f,	// (0x000a1558) scroll_pane_cp039_ParamLimits

0xee87,	// (0x000a2c80) navi_pane_bcale_mc_g1

0xee8f,	// (0x000a2c88) navi_pane_bcale_mc_t1

0x70dc,	// (0x0009aed5) main_sp_fs_email_pane_g1

0x70e8,	// (0x0009aee1) main_sp_fs_email_pane_g2

0x0001,

0xfb3b,	// (0x000a3934) main_sp_fs_email_pane_g

0x7a28,	// (0x0009b821) list_single_cale_mrui_row_pane_g3_ParamLimits

0x7a28,	// (0x0009b821) list_single_cale_mrui_row_pane_g3

0x7e39,	// (0x0009bc32) list_single_recal_day_pane_g5_event_pane

0x7e4f,	// (0x0009bc48) list_single_recal_day_pane_g7

0xc482,	// (0x000a027b) list_recal_day_event_pane_cp01

0xc48b,	// (0x000a0284) list_recal_vselct_arw_lo_pane_cp01

0xc493,	// (0x000a028c) list_recal_vselct_arw_up_pane_cp01

0xc49b,	// (0x000a0294) list_recal_vselct_pane_cp01

0xce7e,	// (0x000a0c77) list_recal_day_event_pane_cp01_g1

0xc4a5,	// (0x000a029e) list_recal_day_event_pane_cp01_t1

0x7e57,	// (0x0009bc50) list_single_recal_day_pane_t1_ParamLimits

0x7e69,	// (0x0009bc62) list_single_recal_day_pane_t2_ParamLimits

0xfc18,	// (0x000a3a11) list_single_recal_day_pane_t_ParamLimits

0xe2c1,	// (0x000a20ba) bg_notes_pane_ParamLimits

0xe3b6,	// (0x000a21af) list_notes_pane_ParamLimits

0x0c03,	// (0x000949fc) scroll_pane_cp06_ParamLimits

0xe3d8,	// (0x000a21d1) main_notes_pane_ParamLimits

0xe295,	// (0x000a208e) main_welc_pane

0x893a,	// (0x0009c733) main_welc_body_pane_ParamLimits

0x893a,	// (0x0009c733) main_welc_body_pane

0x8958,	// (0x0009c751) main_welc_opti_pane_ParamLimits

0x8958,	// (0x0009c751) main_welc_opti_pane

0x89c8,	// (0x0009c7c1) main_welc_pane_t1_ParamLimits

0x89c8,	// (0x0009c7c1) main_welc_pane_t1

0x8bc8,	// (0x0009c9c1) main_welc_body_row_pane_ParamLimits

0x8bc8,	// (0x0009c9c1) main_welc_body_row_pane

0xe32e,	// (0x000a2127) main_welc_opti_row_pane_ParamLimits

0xe32e,	// (0x000a2127) main_welc_opti_row_pane

0xc4bb,	// (0x000a02b4) main_welc_opti_row_pane_g1

0x8bdc,	// (0x0009c9d5) main_welc_opti_row_pane_t1

0xc4c3,	// (0x000a02bc) main_welc_body_row_pane_t1

0xc1bb,	// (0x0009ffb4) popup_notif_wgt_heading_pane

0xc1d5,	// (0x0009ffce) aid_size_list_notif_wgt_del_ParamLimits

0xc1e2,	// (0x0009ffdb) list_notif_wgt_row_pane_g1_ParamLimits

0xc1ee,	// (0x0009ffe7) list_notif_wgt_row_pane_g2_ParamLimits

0xc1fd,	// (0x0009fff6) list_notif_wgt_row_pane_g3_ParamLimits

0xfc7f,	// (0x000a3a78) list_notif_wgt_row_pane_g_ParamLimits

0xc20a,	// (0x000a0003) list_notif_wgt_row_pane_t1_ParamLimits

0xc220,	// (0x000a0019) list_notif_wgt_row_pane_t2_ParamLimits

0xc232,	// (0x000a002b) list_notif_wgt_row_pane_t3_ParamLimits

0xfc86,	// (0x000a3a7f) list_notif_wgt_row_pane_t_ParamLimits

0x843b,	// (0x0009c234) listrow_wgtman_pane_g1_ParamLimits

0x8448,	// (0x0009c241) listrow_wgtman_pane_g2_ParamLimits

0xfcb6,	// (0x000a3aaf) listrow_wgtman_pane_g_ParamLimits

0x8466,	// (0x0009c25f) listrow_wgtman_pane_t1_ParamLimits

0x847e,	// (0x0009c277) listrow_wgtman_pane_t2_ParamLimits

0xfcbb,	// (0x000a3ab4) listrow_wgtman_pane_t_ParamLimits

0x84a4,	// (0x0009c29d) wait_bar_pane_cp09_ParamLimits

0xd6dd,	// (0x000a14d6) bg_popup_heading_pane_cp02

0xc4d2,	// (0x000a02cb) popup_notif_wgt_heading_pane_g1

0xc4da,	// (0x000a02d3) popup_notif_wgt_heading_pane_t1

0xd6dd,	// (0x000a14d6) main_vids_pane

0xd6dd,	// (0x000a14d6) vids_listscroll_pane

0x8beb,	// (0x0009c9e4) scroll_pane_cp040

0xd6dd,	// (0x000a14d6) vids_list_pane

0x8bf6,	// (0x0009c9ef) vids_list_double_pane_ParamLimits

0x8bf6,	// (0x0009c9ef) vids_list_double_pane

0x8c07,	// (0x0009ca00) vids_list_double_pane_g1

0x8c10,	// (0x0009ca09) vids_list_double_pane_t1

0x8c20,	// (0x0009ca19) vids_list_double_pane_t2

0x0001,

0xfd54,	// (0x000a3b4d) vids_list_double_pane_t

0x9b1c,	// (0x0009d915) main_ncimui_pane_ParamLimits

0x68c6,	// (0x0009a6bf) main_ncimui_pane_g1_ParamLimits

0x68d2,	// (0x0009a6cb) main_ncimui_pane_g2_ParamLimits

0x68d2,	// (0x0009a6cb) main_ncimui_pane_g2

0x0001,

0xfa4e,	// (0x000a3847) main_ncimui_pane_g_ParamLimits

0xfa4e,	// (0x000a3847) main_ncimui_pane_g

0x8973,	// (0x0009c76c) main_welc_pane_g1_ParamLimits

0x8973,	// (0x0009c76c) main_welc_pane_g1

0x8988,	// (0x0009c781) main_welc_pane_g2_ParamLimits

0x8988,	// (0x0009c781) main_welc_pane_g2

0x0003,

0xfd3e,	// (0x000a3b37) main_welc_pane_g_ParamLimits

0xfd3e,	// (0x000a3b37) main_welc_pane_g

0xe2c1,	// (0x000a20ba) listscroll_mce_pane_ParamLimits

0xefdc,	// (0x000a2dd5) wait_bar_pane_cp10

0xaebb,	// (0x0009ecb4) main_cale_day_pane_ParamLimits

0xaebb,	// (0x0009ecb4) main_cale_week_pane_ParamLimits

0xe2c1,	// (0x000a20ba) main_messa_pane_ParamLimits

0x43ba,	// (0x000981b3) main_clock2_btn_pane_ParamLimits

0x43ba,	// (0x000981b3) main_clock2_btn_pane

0xb7ae,	// (0x0009f5a7) main_clock2_btn_pane_cp01_ParamLimits

0xb7ae,	// (0x0009f5a7) main_clock2_btn_pane_cp01

0x7986,	// (0x0009b77f) list_cale_mrui_pane_ParamLimits

0xc276,	// (0x000a006f) main_cf0_pane_g2

0x0001,

0xfc8d,	// (0x000a3a86) main_cf0_pane_g

0xb68b,	// (0x0009f484) area_left_week_number_pane_ParamLimits

0xb68b,	// (0x0009f484) area_top_day_name_pane_ParamLimits

0xb68b,	// (0x0009f484) frame_month_view_pane_ParamLimits

0xb68b,	// (0x0009f484) grid_month_view_pane_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g1_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g2_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g3_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g4_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g5_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g6_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g7_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g8_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g9_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g10_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g11_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g12_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g13_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g14_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g15_ParamLimits

0xb67f,	// (0x0009f478) frm_month_g16_ParamLimits

0xfce5,	// (0x000a3ade) frm_month_g_ParamLimits

0xc38f,	// (0x000a0188) cell_top_day_name_pane_t1_ParamLimits

0xb67f,	// (0x0009f478) cell_area_left_week_number_pane_g1_ParamLimits

0xc38f,	// (0x000a0188) cell_area_left_week_number_pane_t1_ParamLimits

0xb67f,	// (0x0009f478) cell_month_view_pane_g1_ParamLimits

0xc38f,	// (0x000a0188) cell_month_view_pane_t1_ParamLimits

0xe2b9,	// (0x000a20b2) main_clock2_btn_pane_g1

0xc4e8,	// (0x000a02e1) main_clock2_btn_pane_t1

0xe295,	// (0x000a208e) listscroll_cmail_pane_ParamLimits

0x70dc,	// (0x0009aed5) main_sp_fs_email_pane_g1_ParamLimits

0x70e8,	// (0x0009aee1) main_sp_fs_email_pane_g2_ParamLimits

0xfb3b,	// (0x000a3934) main_sp_fs_email_pane_g_ParamLimits

0x7da7,	// (0x0009bba0) list_recal_day_pane_ParamLimits

0x7db8,	// (0x0009bbb1) mian_recal_day_pane_t1

0x72c2,	// (0x0009b0bb) list_single_dyc_row_text_pane_t4_ParamLimits

0x72c2,	// (0x0009b0bb) list_single_dyc_row_text_pane_t4

0x730b,	// (0x0009b104) list_single_dyc_row_text_pane_t5_ParamLimits

0x730b,	// (0x0009b104) list_single_dyc_row_text_pane_t5

0x7381,	// (0x0009b17a) list_single_dyc_row_text_pane_t6_ParamLimits

0x7381,	// (0x0009b17a) list_single_dyc_row_text_pane_t6

0xe974,	// (0x000a276d) aid_mgn_list_cale_time_pane

0x9b1c,	// (0x0009d915) main_gallery2_pane_ParamLimits

0xb7c4,	// (0x0009f5bd) main_clock2_pane_cp01_t1

0xb7d4,	// (0x0009f5cd) main_clock2_pane_cp01_t3

0x0001,

0xf6b1,	// (0x000a34aa) main_clock2_pane_cp01_t

0x0fa0,	// (0x00094d99) cale_week_scroll_pane_g16_ParamLimits

0x0fa0,	// (0x00094d99) cale_week_scroll_pane_g16

0xe5f0,	// (0x000a23e9) vorec_slider_pane

0xc46c,	// (0x000a0265) vidtel_button_pane_t1_ParamLimits

0x7ff3,	// (0x0009bdec) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7ff3,	// (0x0009bdec) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7ff3,	// (0x0009bdec) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7ff3,	// (0x0009bdec) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc3b,	// (0x000a3a34) main_fs_bigclock_clock_pane_g_ParamLimits

0x8006,	// (0x0009bdff) main_fs_bigclock_clock_pane_t1_ParamLimits

0x801f,	// (0x0009be18) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc44,	// (0x000a3a3d) main_fs_bigclock_clock_pane_t_ParamLimits

0x3c4e,	// (0x00097a47) main_mup3_lyrics_pane_ParamLimits

0x3c4e,	// (0x00097a47) main_mup3_lyrics_pane

0x8c48,	// (0x0009ca41) main_mup3_lyrics_pane_t1_ParamLimits

0x8c48,	// (0x0009ca41) main_mup3_lyrics_pane_t1

0xbb57,	// (0x0009f950) aid_main_mp4_pane_t1_area

0xbb61,	// (0x0009f95a) aid_main_mp4_pane_t2_area

0xbc0b,	// (0x0009fa04) main_mp4_pane_g7_ParamLimits

0xbc0b,	// (0x0009fa04) main_mp4_pane_g7

0xbc17,	// (0x0009fa10) main_mp4_pane_g8_ParamLimits

0xbc17,	// (0x0009fa10) main_mp4_pane_g8

0x4c9c,	// (0x00098a95) aid_call6_pane_g1_size

0x885d,	// (0x0009c656) list_double_large_graphic_phob2_other_pane_ParamLimits

0x885d,	// (0x0009c656) list_double_large_graphic_phob2_other_pane

0xe500,	// (0x000a22f9) list_double_large_graphic_phob2_other_pane_g1

0xd6dd,	// (0x000a14d6) list_highlight_pane_cp026

0xe295,	// (0x000a208e) main_welc_pane_ParamLimits

0x7045,	// (0x0009ae3e) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7045,	// (0x0009ae3e) main_sp_fs_ctrlbar_pane_g3

0x705f,	// (0x0009ae58) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x705f,	// (0x0009ae58) main_sp_fs_ctrlbar_pane_g4

0x7093,	// (0x0009ae8c) toolbar2_fixed_button_pane_cp01

0x709e,	// (0x0009ae97) toolbar2_fixed_button_pane_cp02

0x70ab,	// (0x0009aea4) toolbar2_fixed_button_pane_cp03

0x8914,	// (0x0009c70d) list_welc_entry_pane_ParamLimits

0x8914,	// (0x0009c70d) list_welc_entry_pane

0x899d,	// (0x0009c796) main_welc_pane_g3_ParamLimits

0x899d,	// (0x0009c796) main_welc_pane_g3

0x89e6,	// (0x0009c7df) main_welc_pane_t2_ParamLimits

0x89e6,	// (0x0009c7df) main_welc_pane_t2

0x8a01,	// (0x0009c7fa) main_welc_pane_t3_ParamLimits

0x8a01,	// (0x0009c7fa) main_welc_pane_t3

0x0005,

0xfd47,	// (0x000a3b40) main_welc_pane_t_ParamLimits

0xfd47,	// (0x000a3b40) main_welc_pane_t

0x8b39,	// (0x0009c932) welc_button_pane_ParamLimits

0x8b39,	// (0x0009c932) welc_button_pane

0x8bb3,	// (0x0009c9ac) welc_service_logo_pane_ParamLimits

0x8bb3,	// (0x0009c9ac) welc_service_logo_pane

0x8c64,	// (0x0009ca5d) list_single_welc_entry_pane_ParamLimits

0x8c64,	// (0x0009ca5d) list_single_welc_entry_pane

0x8c75,	// (0x0009ca6e) list_single_welc_entry_pane_g1

0x8c7d,	// (0x0009ca76) list_single_welc_entry_pane_t1

0x8c8b,	// (0x0009ca84) list_single_welc_entry_pane_t2

0x0001,

0xfd59,	// (0x000a3b52) list_single_welc_entry_pane_t

0xd6dd,	// (0x000a14d6) bg_button_pane_cp035

0x8c99,	// (0x0009ca92) welc_button_pane_t1

0xc4f6,	// (0x000a02ef) welc_service_logo_pane_g1

0xc4ff,	// (0x000a02f8) welc_service_logo_pane_g2

0x0001,

0xfd5e,	// (0x000a3b57) welc_service_logo_pane_g

0x9b2a,	// (0x0009d923) main_int_radio_pane

0xe44f,	// (0x000a2248) list_single_fs_dyc_pane_g1

0x8768,	// (0x0009c561) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8768,	// (0x0009c561) list_double_large_graphic_phob2_pane_g3

0x877a,	// (0x0009c573) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x877a,	// (0x0009c573) list_double_large_graphic_phob2_pane_g4

0x8ca7,	// (0x0009caa0) main_int_radio1_pane_ParamLimits

0x8ca7,	// (0x0009caa0) main_int_radio1_pane

0xc508,	// (0x000a0301) find_pane_cp02

0x8cc4,	// (0x0009cabd) input_focus_pane_cp12_ParamLimits

0x8cc4,	// (0x0009cabd) input_focus_pane_cp12

0x8cd4,	// (0x0009cacd) input_focus_pane_cp13_ParamLimits

0x8cd4,	// (0x0009cacd) input_focus_pane_cp13

0x8ce8,	// (0x0009cae1) input_focus_pane_cp14_ParamLimits

0x8ce8,	// (0x0009cae1) input_focus_pane_cp14

0xc511,	// (0x000a030a) int_radio1_listscroll_pane

0x8cfc,	// (0x0009caf5) main_int_radio1_pane_g1_ParamLimits

0x8cfc,	// (0x0009caf5) main_int_radio1_pane_g1

0x8d14,	// (0x0009cb0d) main_int_radio1_pane_t1_ParamLimits

0x8d14,	// (0x0009cb0d) main_int_radio1_pane_t1

0x8d2f,	// (0x0009cb28) main_int_radio1_pane_t2_ParamLimits

0x8d2f,	// (0x0009cb28) main_int_radio1_pane_t2

0x8d4a,	// (0x0009cb43) main_int_radio1_pane_t3_ParamLimits

0x8d4a,	// (0x0009cb43) main_int_radio1_pane_t3

0x8d65,	// (0x0009cb5e) main_int_radio1_pane_t4_ParamLimits

0x8d65,	// (0x0009cb5e) main_int_radio1_pane_t4

0xc51b,	// (0x000a0314) main_int_radio1_pane_t5_ParamLimits

0xc51b,	// (0x000a0314) main_int_radio1_pane_t5

0x8d77,	// (0x0009cb70) main_int_radio1_pane_t6_ParamLimits

0x8d77,	// (0x0009cb70) main_int_radio1_pane_t6

0x8d8c,	// (0x0009cb85) main_int_radio1_pane_t7_ParamLimits

0x8d8c,	// (0x0009cb85) main_int_radio1_pane_t7

0x8da1,	// (0x0009cb9a) main_int_radio1_pane_t8_ParamLimits

0x8da1,	// (0x0009cb9a) main_int_radio1_pane_t8

0x8dc0,	// (0x0009cbb9) main_int_radio1_pane_t9_ParamLimits

0x8dc0,	// (0x0009cbb9) main_int_radio1_pane_t9

0x8dd2,	// (0x0009cbcb) main_int_radio1_pane_t10_ParamLimits

0x8dd2,	// (0x0009cbcb) main_int_radio1_pane_t10

0x8df8,	// (0x0009cbf1) main_int_radio1_pane_t11_ParamLimits

0x8df8,	// (0x0009cbf1) main_int_radio1_pane_t11

0x8e1e,	// (0x0009cc17) main_int_radio1_pane_t12_ParamLimits

0x8e1e,	// (0x0009cc17) main_int_radio1_pane_t12

0x000b,

0xfd63,	// (0x000a3b5c) main_int_radio1_pane_t_ParamLimits

0xfd63,	// (0x000a3b5c) main_int_radio1_pane_t

0xc52d,	// (0x000a0326) int_radio_list_pane

0x7d2d,	// (0x0009bb26) scroll_pane_cp037

0xc535,	// (0x000a032e) list_double_large_graphic_int_radio_pane_ParamLimits

0xc535,	// (0x000a032e) list_double_large_graphic_int_radio_pane

0xc54d,	// (0x000a0346) list_double_large_graphic_int_radio_pane_g1

0xc556,	// (0x000a034f) list_double_large_graphic_int_radio_pane_t1

0xc564,	// (0x000a035d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfd7c,	// (0x000a3b75) list_double_large_graphic_int_radio_pane_t

0xd6dd,	// (0x000a14d6) list_highlight_pane_cp027

0xc4b3,	// (0x000a02ac) main_button_pane_4

0x89b0,	// (0x0009c7a9) main_welc_pane_g4_ParamLimits

0x89b0,	// (0x0009c7a9) main_welc_pane_g4

0x8a1a,	// (0x0009c813) main_welc_pane_t4_ParamLimits

0x8a1a,	// (0x0009c813) main_welc_pane_t4

0x8a35,	// (0x0009c82e) main_welc_pane_t5_ParamLimits

0x8a35,	// (0x0009c82e) main_welc_pane_t5

0x8a76,	// (0x0009c86f) main_welc_pane_t6_ParamLimits

0x8a76,	// (0x0009c86f) main_welc_pane_t6

0x8b50,	// (0x0009c949) welc_button_pane_2_ParamLimits

0x8b50,	// (0x0009c949) welc_button_pane_2

0x8b6c,	// (0x0009c965) welc_button_pane_3_ParamLimits

0x8b6c,	// (0x0009c965) welc_button_pane_3

0xc4b3,	// (0x000a02ac) welc_button_pane_4

0x8b8b,	// (0x0009c984) welc_button_pane_5_ParamLimits

0x8b8b,	// (0x0009c984) welc_button_pane_5

0x08bd,	// (0x000946b6) main_popup_welc_pane

0xc58a,	// (0x000a0383) main_welc_sk_g3

0xc594,	// (0x000a038d) main_welc_sk_g4

0xc59e,	// (0x000a0397) main_welc_sk_t3

0xc5ae,	// (0x000a03a7) main_welc_sk_t4

0xc5be,	// (0x000a03b7) popup_welc_pane_t4

0xc5cc,	// (0x000a03c5) popup_welc_pane_t5

0xc5da,	// (0x000a03d3) popup_welc_pane_t6

0x9b2a,	// (0x0009d923) main_acti_pane

0xd6dd,	// (0x000a14d6) main_sso_pane

0x8e30,	// (0x0009cc29) sso_body_pane_ParamLimits

0x8e30,	// (0x0009cc29) sso_body_pane

0x8e50,	// (0x0009cc49) sso_logo_pane_ParamLimits

0x8e50,	// (0x0009cc49) sso_logo_pane

0x8e89,	// (0x0009cc82) sso_sk_pane_ParamLimits

0x8e89,	// (0x0009cc82) sso_sk_pane

0xc618,	// (0x000a0411) main_sso_logo_pane_g1

0x8e9b,	// (0x0009cc94) sso_sk_pane_t1_ParamLimits

0x8e9b,	// (0x0009cc94) sso_sk_pane_t1

0x8eb5,	// (0x0009ccae) sso_sk_pane_t2_ParamLimits

0x8eb5,	// (0x0009ccae) sso_sk_pane_t2

0x0001,

0xfd81,	// (0x000a3b7a) sso_sk_pane_t_ParamLimits

0xfd81,	// (0x000a3b7a) sso_sk_pane_t

0xc621,	// (0x000a041a) aid_sso_gap

0xc62a,	// (0x000a0423) aid_sso_txt1

0xc634,	// (0x000a042d) aid_sso_txt2

0xc63e,	// (0x000a0437) aid_sso_txt3

0x0002,

0xfd86,	// (0x000a3b7f) aid_sso_txt

0xc648,	// (0x000a0441) aid_sso_widget

0x8f1f,	// (0x0009cd18) sso_btn_pane_ParamLimits

0x8f1f,	// (0x0009cd18) sso_btn_pane

0x8fb3,	// (0x0009cdac) sso_option_pane_ParamLimits

0x8fb3,	// (0x0009cdac) sso_option_pane

0x9067,	// (0x0009ce60) sso_query_pane_ParamLimits

0x9067,	// (0x0009ce60) sso_query_pane

0x90bd,	// (0x0009ceb6) sso_query_pane_cp01_ParamLimits

0x90bd,	// (0x0009ceb6) sso_query_pane_cp01

0x9115,	// (0x0009cf0e) sso_t_hdr_pane_ParamLimits

0x9115,	// (0x0009cf0e) sso_t_hdr_pane

0x913f,	// (0x0009cf38) sso_t_nml_pane_ParamLimits

0x913f,	// (0x0009cf38) sso_t_nml_pane

0x9195,	// (0x0009cf8e) sso_t_sub_pane

0x8e5d,	// (0x0009cc56) sso_popup_window_ParamLimits

0x8e5d,	// (0x0009cc56) sso_popup_window

0x8ecb,	// (0x0009ccc4) sso_apps_pane_ParamLimits

0x8ecb,	// (0x0009ccc4) sso_apps_pane

0x8ef5,	// (0x0009ccee) sso_body_pane_g1

0x8eff,	// (0x0009ccf8) sso_body_pane_t1

0x8f0f,	// (0x0009cd08) sso_body_pane_t2

0x0001,

0xfd8d,	// (0x000a3b86) sso_body_pane_t

0x8f6b,	// (0x0009cd64) sso_btn_pane_cp01_ParamLimits

0x8f6b,	// (0x0009cd64) sso_btn_pane_cp01

0x903b,	// (0x0009ce34) sso_prog_pane_ParamLimits

0x903b,	// (0x0009ce34) sso_prog_pane

0x91c4,	// (0x0009cfbd) sso_t_hdr_pane_t1_ParamLimits

0x91c4,	// (0x0009cfbd) sso_t_hdr_pane_t1

0xc652,	// (0x000a044b) input_focus_pane_cp10_ParamLimits

0xc652,	// (0x000a044b) input_focus_pane_cp10

0xc666,	// (0x000a045f) sso_query_pane_t1_ParamLimits

0xc666,	// (0x000a045f) sso_query_pane_t1

0xc679,	// (0x000a0472) sso_query_pane_t2_ParamLimits

0xc679,	// (0x000a0472) sso_query_pane_t2

0xc692,	// (0x000a048b) sso_query_pane_t3_ParamLimits

0xc692,	// (0x000a048b) sso_query_pane_t3

0xc6bc,	// (0x000a04b5) sso_query_pane_t4_ParamLimits

0xc6bc,	// (0x000a04b5) sso_query_pane_t4

0x0003,

0xfd92,	// (0x000a3b8b) sso_query_pane_t_ParamLimits

0xfd92,	// (0x000a3b8b) sso_query_pane_t

0xc14e,	// (0x0009ff47) bg_button_pane_cp22

0xc572,	// (0x000a036b) sso_btn_pane_t1

0x91d7,	// (0x0009cfd0) sso_t_nml_pane_t1_ParamLimits

0x91d7,	// (0x0009cfd0) sso_t_nml_pane_t1

0xc6e0,	// (0x000a04d9) sso_option_row_pane_ParamLimits

0xc6e0,	// (0x000a04d9) sso_option_row_pane

0xc6ed,	// (0x000a04e6) sso_t_sub_pane_t1_ParamLimits

0xc6ed,	// (0x000a04e6) sso_t_sub_pane_t1

0xe295,	// (0x000a208e) bg_popup_window_pane_cp11_ParamLimits

0xe295,	// (0x000a208e) bg_popup_window_pane_cp11

0xc70a,	// (0x000a0503) popup_sk_window_cp01_ParamLimits

0xc70a,	// (0x000a0503) popup_sk_window_cp01

0xc717,	// (0x000a0510) sso_popup_body_pane_ParamLimits

0xc717,	// (0x000a0510) sso_popup_body_pane

0xc724,	// (0x000a051d) scroll_pane_cp21_ParamLimits

0xc724,	// (0x000a051d) scroll_pane_cp21

0xc731,	// (0x000a052a) sso_popup_body_t_pane_ParamLimits

0xc731,	// (0x000a052a) sso_popup_body_t_pane

0xc73e,	// (0x000a0537) sso_popup_body_t_hdr_pane_ParamLimits

0xc73e,	// (0x000a0537) sso_popup_body_t_hdr_pane

0x91f2,	// (0x0009cfeb) sso_popup_body_t_nml_pane_ParamLimits

0x91f2,	// (0x0009cfeb) sso_popup_body_t_nml_pane

0x9219,	// (0x0009d012) sso_popup_body_t_sub_pane_ParamLimits

0x9219,	// (0x0009d012) sso_popup_body_t_sub_pane

0xc750,	// (0x000a0549) sso_popup_body_t_hdr_pane_t1

0x923c,	// (0x0009d035) sso_popup_body_t_nml_pane_t1_ParamLimits

0x923c,	// (0x0009d035) sso_popup_body_t_nml_pane_t1

0xc760,	// (0x000a0559) sso_popup_body_t_sub_pane_t1_ParamLimits

0xc760,	// (0x000a0559) sso_popup_body_t_sub_pane_t1

0xe37a,	// (0x000a2173) sso_prog_pane_g1

0x9274,	// (0x0009d06d) sso_apps_pane_comp1_ParamLimits

0x9274,	// (0x0009d06d) sso_apps_pane_comp1

0xc785,	// (0x000a057e) sso_apps_pane_comp1_g1

0xc78d,	// (0x000a0586) sso_apps_pane_comp1_t1

0xc7a9,	// (0x000a05a2) sso_option_row_pane_g1

0xc7c1,	// (0x000a05ba) sso_option_row_pane_t1

0x75da,	// (0x0009b3d3) list_cmail_pane_ParamLimits

0xd6dd,	// (0x000a14d6) main_call7_pane

0x8901,	// (0x0009c6fa) bg_welc_area_ParamLimits

0x8901,	// (0x0009c6fa) bg_welc_area

0x8ab4,	// (0x0009c8ad) sso_t_hdr_pane_a_t1_ParamLimits

0x8ab4,	// (0x0009c8ad) sso_t_hdr_pane_a_t1

0x8acf,	// (0x0009c8c8) sso_t_nml_pane_a_t1_ParamLimits

0x8acf,	// (0x0009c8c8) sso_t_nml_pane_a_t1

0x8afe,	// (0x0009c8f7) sso_t_sub_pane_a_t1_ParamLimits

0x8afe,	// (0x0009c8f7) sso_t_sub_pane_a_t1

0x8ba1,	// (0x0009c99a) welc_button_pane_cp01_ParamLimits

0x8ba1,	// (0x0009c99a) welc_button_pane_cp01

0xc572,	// (0x000a036b) sso_btn_pane_t1_copy1

0xc581,	// (0x000a037a) welc_button_pane_2_comp1

0xc5e8,	// (0x000a03e1) sso_t_hdr_pane_p_t1

0xc5f8,	// (0x000a03f1) sso_t_nml_pane_p_t1

0xc608,	// (0x000a0401) sso_t_sub_pane_p_t1

0xd6dd,	// (0x000a14d6) main_att_pane

0xd6dd,	// (0x000a14d6) main_vod_pane

0x9195,	// (0x0009cf8e) sso_t_sub_pane_ParamLimits

0xc79b,	// (0x000a0594) input_focus_pane_cp10_t1

0xc7c1,	// (0x000a05ba) sso_option_row_pane_t1_ParamLimits

0x928e,	// (0x0009d087) main_att_body_pane_ParamLimits

0x928e,	// (0x0009d087) main_att_body_pane

0x92a4,	// (0x0009d09d) att_btn_emg_pane_ParamLimits

0x92a4,	// (0x0009d09d) att_btn_emg_pane

0x92c3,	// (0x0009d0bc) att_btn_pane_ParamLimits

0x92c3,	// (0x0009d0bc) att_btn_pane

0x9332,	// (0x0009d12b) att_btn_pane_cp01_ParamLimits

0x9332,	// (0x0009d12b) att_btn_pane_cp01

0x9372,	// (0x0009d16b) att_li_srv_pane_ParamLimits

0x9372,	// (0x0009d16b) att_li_srv_pane

0x938f,	// (0x0009d188) att_opt_pane_ParamLimits

0x938f,	// (0x0009d188) att_opt_pane

0x93d9,	// (0x0009d1d2) att_query_pane_ParamLimits

0x93d9,	// (0x0009d1d2) att_query_pane

0x9452,	// (0x0009d24b) att_query_pane_cp01_ParamLimits

0x9452,	// (0x0009d24b) att_query_pane_cp01

0x949e,	// (0x0009d297) att_t_hdr_pane_ParamLimits

0x949e,	// (0x0009d297) att_t_hdr_pane

0x950a,	// (0x0009d303) att_t_nml_pane_ParamLimits

0x950a,	// (0x0009d303) att_t_nml_pane

0x957a,	// (0x0009d373) att_t_nml_pane_cp01_ParamLimits

0x957a,	// (0x0009d373) att_t_nml_pane_cp01

0x95a8,	// (0x0009d3a1) att_t_nmlb_pane_ParamLimits

0x95a8,	// (0x0009d3a1) att_t_nmlb_pane

0x9615,	// (0x0009d40e) att_term_pane_ParamLimits

0x9615,	// (0x0009d40e) att_term_pane

0x965f,	// (0x0009d458) main_att_body_pane_g1_ParamLimits

0x965f,	// (0x0009d458) main_att_body_pane_g1

0xc7dd,	// (0x000a05d6) att_t_hdr_pane_t1_ParamLimits

0xc7dd,	// (0x000a05d6) att_t_hdr_pane_t1

0xc7f6,	// (0x000a05ef) att_t_nml_pane_t1_ParamLimits

0xc7f6,	// (0x000a05ef) att_t_nml_pane_t1

0xc81b,	// (0x000a0614) att_btn_pane_t1

0xc14e,	// (0x0009ff47) bg_button_pane_cp23

0x968b,	// (0x0009d484) att_li_srv_row_pane_ParamLimits

0x968b,	// (0x0009d484) att_li_srv_row_pane

0xc82a,	// (0x000a0623) att_t_nmlb_pane_t1_ParamLimits

0xc82a,	// (0x000a0623) att_t_nmlb_pane_t1

0xc846,	// (0x000a063f) att_query_pane_t1

0xc855,	// (0x000a064e) att_query_pane_t2

0xc864,	// (0x000a065d) att_query_pane_t3

0x0002,

0xfda0,	// (0x000a3b99) att_query_pane_t

0xc873,	// (0x000a066c) input_focus_pane_cp11

0xc87c,	// (0x000a0675) att_term_pane_t1_ParamLimits

0xc87c,	// (0x000a0675) att_term_pane_t1

0xd6dd,	// (0x000a14d6) att_opt_row_pane

0xc899,	// (0x000a0692) att_opt_row_pane_g1

0xc8a1,	// (0x000a069a) att_opt_row_pane_t1_ParamLimits

0xc8a1,	// (0x000a069a) att_opt_row_pane_t1

0x969b,	// (0x0009d494) att_li_srv_row_pane_g1

0x96a3,	// (0x0009d49c) att_li_srv_row_pane_t1_ParamLimits

0x96a3,	// (0x0009d49c) att_li_srv_row_pane_t1

0x96a3,	// (0x0009d49c) att_li_srv_row_pane_t2_ParamLimits

0x96a3,	// (0x0009d49c) att_li_srv_row_pane_t2

0x0001,

0xfda7,	// (0x000a3ba0) att_li_srv_row_pane_t_ParamLimits

0xfda7,	// (0x000a3ba0) att_li_srv_row_pane_t

0xc8ba,	// (0x000a06b3) att_btn_close_pane_g1

0xd6dd,	// (0x000a14d6) bg_button_pane_cp24

0x96b8,	// (0x0009d4b1) main_vod_body_pane_ParamLimits

0x96b8,	// (0x0009d4b1) main_vod_body_pane

0x96cc,	// (0x0009d4c5) main_vod_body_pane_g1_ParamLimits

0x96cc,	// (0x0009d4c5) main_vod_body_pane_g1

0x9700,	// (0x0009d4f9) scroll_pane_cp24_ParamLimits

0x9700,	// (0x0009d4f9) scroll_pane_cp24

0x974e,	// (0x0009d547) vod_btn_pane_ParamLimits

0x974e,	// (0x0009d547) vod_btn_pane

0x9794,	// (0x0009d58d) vod_det_pane_ParamLimits

0x9794,	// (0x0009d58d) vod_det_pane

0x97c4,	// (0x0009d5bd) vod_logo_g1_ParamLimits

0x97c4,	// (0x0009d5bd) vod_logo_g1

0x9802,	// (0x0009d5fb) vod_opt_pane_ParamLimits

0x9802,	// (0x0009d5fb) vod_opt_pane

0x9835,	// (0x0009d62e) vod_opt_pane_cp01_ParamLimits

0x9835,	// (0x0009d62e) vod_opt_pane_cp01

0x9861,	// (0x0009d65a) vod_query_pane_ParamLimits

0x9861,	// (0x0009d65a) vod_query_pane

0x988c,	// (0x0009d685) vod_query_pane_cp01_ParamLimits

0x988c,	// (0x0009d685) vod_query_pane_cp01

0x9898,	// (0x0009d691) vod_t_nml_pane_ParamLimits

0x9898,	// (0x0009d691) vod_t_nml_pane

0x9945,	// (0x0009d73e) vod_t_nml_pane_cp01_ParamLimits

0x9945,	// (0x0009d73e) vod_t_nml_pane_cp01

0x9981,	// (0x0009d77a) vod_t_sub_pane_ParamLimits

0x9981,	// (0x0009d77a) vod_t_sub_pane

0x99b2,	// (0x0009d7ab) vod_t_sub_pane_cp01_ParamLimits

0x99b2,	// (0x0009d7ab) vod_t_sub_pane_cp01

0xc873,	// (0x000a066c) vod_query_field_pane

0xc8c2,	// (0x000a06bb) vod_query_pane_t1

0xc8d1,	// (0x000a06ca) bg_button_pane_cp25

0xc572,	// (0x000a036b) sso_btn_pane_t1_copy2

0x99de,	// (0x0009d7d7) vod_t_nml_pane_t1_ParamLimits

0x99de,	// (0x0009d7d7) vod_t_nml_pane_t1

0xc8da,	// (0x000a06d3) vod_opt_row_pane_ParamLimits

0xc8da,	// (0x000a06d3) vod_opt_row_pane

0xc8ec,	// (0x000a06e5) vod_t_sub_pane_t1_ParamLimits

0xc8ec,	// (0x000a06e5) vod_t_sub_pane_t1

0xc905,	// (0x000a06fe) vod_det_cell_pane_ParamLimits

0xc905,	// (0x000a06fe) vod_det_cell_pane

0xd6dd,	// (0x000a14d6) input_focus_pane_cp15

0xc916,	// (0x000a070f) vod_query_field_pane_t1

0xc924,	// (0x000a071d) vod_opt_row_pane_g1_ParamLimits

0xc924,	// (0x000a071d) vod_opt_row_pane_g1

0xc930,	// (0x000a0729) vod_opt_row_pane_t1_ParamLimits

0xc930,	// (0x000a0729) vod_opt_row_pane_t1

0xc950,	// (0x000a0749) vod_det_cell_field_pane

0xc959,	// (0x000a0752) vod_det_cell_pane_g1

0xc961,	// (0x000a075a) vod_det_cell_pane_t1

0xd6dd,	// (0x000a14d6) input_focus_pane_cp16

0xc970,	// (0x000a0769) vod_det_cell_field_pane_t1

0x9a0f,	// (0x0009d808) call7_btn_grp_pane_ParamLimits

0x9a0f,	// (0x0009d808) call7_btn_grp_pane

0x9a29,	// (0x0009d822) call7_bubble_pane_ParamLimits

0x9a29,	// (0x0009d822) call7_bubble_pane

0x9a40,	// (0x0009d839) cell_call7_btn_pane_ParamLimits

0x9a40,	// (0x0009d839) cell_call7_btn_pane

0x9a53,	// (0x0009d84c) call7_pane_g1_ParamLimits

0x9a53,	// (0x0009d84c) call7_pane_g1

0x9a62,	// (0x0009d85b) call7_windows_conf_pane_ParamLimits

0x9a62,	// (0x0009d85b) call7_windows_conf_pane

0x9a7c,	// (0x0009d875) popup_call7_1st_window_ParamLimits

0x9a7c,	// (0x0009d875) popup_call7_1st_window

0x9a8d,	// (0x0009d886) popup_call7_2nd_window_ParamLimits

0x9a8d,	// (0x0009d886) popup_call7_2nd_window

0x9a9e,	// (0x0009d897) popup_call7_3rd_window_ParamLimits

0x9a9e,	// (0x0009d897) popup_call7_3rd_window

0xd6dd,	// (0x000a14d6) bg_button_pane_cp26

0xc326,	// (0x000a011f) cell_call7_btn_pane_g1

0xc97e,	// (0x000a0777) cell_call7_btn_pane_t1

0xd6dd,	// (0x000a14d6) bg_popup_window_pane_cp12

0xc98d,	// (0x000a0786) popup_call7_1st_window_g1

0xc995,	// (0x000a078e) popup_call7_1st_window_g2

0xc99d,	// (0x000a0796) popup_call7_1st_window_g3

0x0002,

0xfdac,	// (0x000a3ba5) popup_call7_1st_window_g

0xc9a5,	// (0x000a079e) popup_call7_1st_window_t1

0xc9b4,	// (0x000a07ad) popup_call7_1st_window_t2

0xc9c2,	// (0x000a07bb) popup_call7_1st_window_t3

0x0002,

0xfdb3,	// (0x000a3bac) popup_call7_1st_window_t

0xd6dd,	// (0x000a14d6) bg_popup_window_pane_cp13

0xc9d0,	// (0x000a07c9) popup_call7_2nd_window_g1

0xc9d8,	// (0x000a07d1) popup_call7_2nd_window_g2

0xc9e0,	// (0x000a07d9) popup_call7_2nd_window_g3

0x0002,

0xfdba,	// (0x000a3bb3) popup_call7_2nd_window_g

0xc9e8,	// (0x000a07e1) popup_call7_2nd_window_t1

0xd6dd,	// (0x000a14d6) bg_popup_window_pane_cp14

0xc9f7,	// (0x000a07f0) call7_list_conf_pane

0xc9ff,	// (0x000a07f8) call7_list_conf_row_pane_ParamLimits

0xc9ff,	// (0x000a07f8) call7_list_conf_row_pane

0xca12,	// (0x000a080b) call7_list_conf_row_pane_g1

0xca1a,	// (0x000a0813) call7_list_conf_row_pane_g2

0x0001,

0xfdc1,	// (0x000a3bba) call7_list_conf_row_pane_g

0xca22,	// (0x000a081b) call7_list_conf_row_pane_t1

0xd6dd,	// (0x000a14d6) list_highlight_pane_cp22

0x9007,	// (0x0009ce00) sso_option_pane_cp01_ParamLimits

0x9007,	// (0x0009ce00) sso_option_pane_cp01

0xe2c1,	// (0x000a20ba) msg_header_pane_ParamLimits

0x9da4,	// (0x0009db9d) bg_button_pane_cp01_ParamLimits

0xf008,	// (0x000a2e01) input_focus_pane_cp07_ParamLimits

0x7117,	// (0x0009af10) popup_email_progress_window

0xe37a,	// (0x000a2173) popup_email_progress_window_g1

0xca30,	// (0x000a0829) popup_email_progress_window_g2

0x0001,

0xfdc6,	// (0x000a3bbf) popup_email_progress_window_g

0xca38,	// (0x000a0831) popup_email_progress_window_t1

0xd6dd,	// (0x000a14d6) cmail_conv_pane

0x73d4,	// (0x0009b1cd) list_single_dyc_row_pane_g5_ParamLimits

0x73d4,	// (0x0009b1cd) list_single_dyc_row_pane_g5

0x73e0,	// (0x0009b1d9) list_single_dyc_row_pane_g6_ParamLimits

0x73e0,	// (0x0009b1d9) list_single_dyc_row_pane_g6

0x73f8,	// (0x0009b1f1) list_single_dyc_row_pane_g7_ParamLimits

0x73f8,	// (0x0009b1f1) list_single_dyc_row_pane_g7

0x892e,	// (0x0009c727) main_button_pane_5_ParamLimits

0x892e,	// (0x0009c727) main_button_pane_5

0x8e44,	// (0x0009cc3d) sso_emg_call_btn_pane_ParamLimits

0x8e44,	// (0x0009cc3d) sso_emg_call_btn_pane

0x91aa,	// (0x0009cfa3) sso_t_sub_pane_cp01_ParamLimits

0x91aa,	// (0x0009cfa3) sso_t_sub_pane_cp01

0xc7a9,	// (0x000a05a2) sso_option_row_pane_g1_ParamLimits

0xc7b5,	// (0x000a05ae) sso_option_row_pane_g2_ParamLimits

0xc7b5,	// (0x000a05ae) sso_option_row_pane_g2

0x0001,

0xfd9b,	// (0x000a3b94) sso_option_row_pane_g_ParamLimits

0xfd9b,	// (0x000a3b94) sso_option_row_pane_g

0x9350,	// (0x0009d149) att_btn_pane_cp02_ParamLimits

0x9350,	// (0x0009d149) att_btn_pane_cp02

0xca46,	// (0x000a083f) cmail_conv_hdr_pane

0xca4f,	// (0x000a0848) list_cmail_conv_pane

0xca59,	// (0x000a0852) scroll_pane_cp31

0xca61,	// (0x000a085a) cmail_conv_hdr_pane_t1

0xca6f,	// (0x000a0868) cmail_conv_hdr_pane_t2

0x0001,

0xfdcb,	// (0x000a3bc4) cmail_conv_hdr_pane_t

0xca7d,	// (0x000a0876) bubble_cmail_conv_pane_ParamLimits

0xca7d,	// (0x000a0876) bubble_cmail_conv_pane

0xca95,	// (0x000a088e) aid_size_colorization_pane

0xe5f0,	// (0x000a23e9) bg_bubble_cmail_conv_pane

0xca9d,	// (0x000a0896) body_bubble_cmail_conv_pane

0xcaa5,	// (0x000a089e) bubble_cmail_conv_pane_g1

0xcaad,	// (0x000a08a6) bubble_cmail_conv_pane_g2

0xcab5,	// (0x000a08ae) bubble_cmail_conv_pane_g3

0x0002,

0xfdd0,	// (0x000a3bc9) bubble_cmail_conv_pane_g

0xcabd,	// (0x000a08b6) bubble_cmail_conv_pane_t1

0xcacb,	// (0x000a08c4) bg_bubble_cmail_conv_pane_g1

0xcad4,	// (0x000a08cd) bg_bubble_cmail_conv_pane_g2

0xcadd,	// (0x000a08d6) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfdd7,	// (0x000a3bd0) bg_bubble_cmail_conv_pane_g

0xcae6,	// (0x000a08df) body_bubble_cmail_conv_pane_t1_ParamLimits

0xcae6,	// (0x000a08df) body_bubble_cmail_conv_pane_t1

0xcafd,	// (0x000a08f6) body_bubble_cmail_conv_pane_t2_ParamLimits

0xcafd,	// (0x000a08f6) body_bubble_cmail_conv_pane_t2

0x0001,

0xfdde,	// (0x000a3bd7) body_bubble_cmail_conv_pane_t_ParamLimits

0xfdde,	// (0x000a3bd7) body_bubble_cmail_conv_pane_t

0xe295,	// (0x000a208e) list_highlight_pane_cp024_ParamLimits
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
