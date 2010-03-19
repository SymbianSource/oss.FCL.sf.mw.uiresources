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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004c4fc };

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
0x5c2c,	// (0x00052128) Screen

0x5c38,	// (0x00052134) application_window

0x5c78,	// (0x00052174) area_bottom_pane_ParamLimits

0x5c78,	// (0x00052174) area_bottom_pane

0x5cad,	// (0x000521a9) area_top_pane_ParamLimits

0x5cad,	// (0x000521a9) area_top_pane

0x042a,	// (0x0004c926) call_video_uplink_pane_ParamLimits

0x042a,	// (0x0004c926) call_video_uplink_pane

0x5d3a,	// (0x00052236) main_pane_ParamLimits

0x5d3a,	// (0x00052236) main_pane

0x41ff,	// (0x000506fb) context_pane

0x8f1d,	// (0x00055419) navi_pane

0x8f41,	// (0x0005543d) popup_cale_events_window_ParamLimits

0x8f41,	// (0x0005543d) popup_cale_events_window

0x4212,	// (0x0005070e) popup_mup_playback_window

0x8f59,	// (0x00055455) signal_pane

0x232b,	// (0x0004e827) main_browser_pane

0x2d7f,	// (0x0004f27b) main_burst_pane

0x8dcf,	// (0x000552cb) main_calc_pane

0x2d7f,	// (0x0004f27b) main_cale_day_pane

0x232b,	// (0x0004e827) main_cale_month_pane

0x2d7f,	// (0x0004f27b) main_cale_week_pane

0x2d7f,	// (0x0004f27b) main_call_pane

0x2005,	// (0x0004e501) main_call_poc_pane

0x2d7f,	// (0x0004f27b) main_camera_pane

0x2d7f,	// (0x0004f27b) main_chi_dic_pane

0x2c21,	// (0x0004f11d) main_clock_pane

0x2005,	// (0x0004e501) main_fmradio_pane

0x2d7f,	// (0x0004f27b) main_graph_messa_pane

0x2005,	// (0x0004e501) main_help_pane

0x232b,	// (0x0004e827) main_im_pane

0x2260,	// (0x0004e75c) main_image_pane_ParamLimits

0x2260,	// (0x0004e75c) main_image_pane

0x2005,	// (0x0004e501) main_location2_pane

0x2d7f,	// (0x0004f27b) main_location_pane

0x2005,	// (0x0004e501) main_messa_pane

0x2005,	// (0x0004e501) main_mp2_pane

0x2d7f,	// (0x0004f27b) main_mp_pane

0x2005,	// (0x0004e501) main_msg_pane

0x2005,	// (0x0004e501) main_mup_eq_pane

0x2005,	// (0x0004e501) main_mup_pane

0x2d7f,	// (0x0004f27b) main_notes_pane

0x2005,	// (0x0004e501) main_pec_pane

0x2005,	// (0x0004e501) main_phob_pane

0x2005,	// (0x0004e501) main_pinb_pane

0x2005,	// (0x0004e501) main_postcard_pane

0x2005,	// (0x0004e501) main_qdial_pane

0x2d7f,	// (0x0004f27b) main_skin_pane

0x2005,	// (0x0004e501) main_smil2_pane

0x2d7f,	// (0x0004f27b) main_smil_pane

0x2d7f,	// (0x0004f27b) main_video_pane

0x2d7f,	// (0x0004f27b) main_video_tele_pane

0x2260,	// (0x0004e75c) main_viewer_pane_ParamLimits

0x2260,	// (0x0004e75c) main_viewer_pane

0x2d7f,	// (0x0004f27b) main_vorec_pane

0x8e07,	// (0x00055303) popup_blid_sat_info_window_ParamLimits

0x8e07,	// (0x00055303) popup_blid_sat_info_window

0x8e21,	// (0x0005531d) popup_dyc_status_message_window_ParamLimits

0x8e21,	// (0x0005531d) popup_dyc_status_message_window

0x8e31,	// (0x0005532d) popup_grid_large_graphic_window_ParamLimits

0x8e31,	// (0x0005532d) popup_grid_large_graphic_window

0x8ea9,	// (0x000553a5) popup_loc_request_window_ParamLimits

0x8ea9,	// (0x000553a5) popup_loc_request_window

0x8ef1,	// (0x000553ed) popup_wml_address_window_ParamLimits

0x8ef1,	// (0x000553ed) popup_wml_address_window

0x8ca7,	// (0x000551a3) call_muted_g1

0x8963,	// (0x00054e5f) popup_call_audio_conf_window_ParamLimits

0x8963,	// (0x00054e5f) popup_call_audio_conf_window

0x8cb7,	// (0x000551b3) popup_call_audio_first_window_ParamLimits

0x8cb7,	// (0x000551b3) popup_call_audio_first_window

0x8cf7,	// (0x000551f3) popup_call_audio_in_window_ParamLimits

0x8cf7,	// (0x000551f3) popup_call_audio_in_window

0x8d1b,	// (0x00055217) popup_call_audio_out_window_ParamLimits

0x8d1b,	// (0x00055217) popup_call_audio_out_window

0x8d3d,	// (0x00055239) popup_call_audio_second_window_ParamLimits

0x8d3d,	// (0x00055239) popup_call_audio_second_window

0x8d6d,	// (0x00055269) popup_call_audio_wait_window_ParamLimits

0x8d6d,	// (0x00055269) popup_call_audio_wait_window

0x8d8e,	// (0x0005528a) popup_number_entry_window_ParamLimits

0x8d8e,	// (0x0005528a) popup_number_entry_window

0x0456,	// (0x0004c952) bg_popup_call_pane_cp05_ParamLimits

0x0456,	// (0x0004c952) bg_popup_call_pane_cp05

0x0476,	// (0x0004c972) popup_number_entry_window_t1

0x0489,	// (0x0004c985) popup_number_entry_window_t2

0x049b,	// (0x0004c997) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0005b5e8) popup_number_entry_window_t

0x04ad,	// (0x0004c9a9) text_title_cp2

0x04c0,	// (0x0004c9bc) bg_popup_call_pane_cp_ParamLimits

0x04c0,	// (0x0004c9bc) bg_popup_call_pane_cp

0x04ce,	// (0x0004c9ca) call_thumbnail_pane

0x04d6,	// (0x0004c9d2) popup_call_audio_in_window_g1_ParamLimits

0x04d6,	// (0x0004c9d2) popup_call_audio_in_window_g1

0x04e2,	// (0x0004c9de) popup_call_audio_in_window_g2_ParamLimits

0x04e2,	// (0x0004c9de) popup_call_audio_in_window_g2

0x04ee,	// (0x0004c9ea) popup_call_audio_in_window_g3_ParamLimits

0x04ee,	// (0x0004c9ea) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0005b5f1) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0005b5f1) popup_call_audio_in_window_g

0x04fa,	// (0x0004c9f6) popup_call_audio_in_window_t1_ParamLimits

0x04fa,	// (0x0004c9f6) popup_call_audio_in_window_t1

0x0516,	// (0x0004ca12) popup_call_audio_in_window_t2_ParamLimits

0x0516,	// (0x0004ca12) popup_call_audio_in_window_t2

0x1cce,	// (0x0004e1ca) popup_call_audio_in_window_t3_ParamLimits

0x1cce,	// (0x0004e1ca) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0005b5f8) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0005b5f8) popup_call_audio_in_window_t

0x04c0,	// (0x0004c9bc) bg_popup_call_pane_cp01_ParamLimits

0x04c0,	// (0x0004c9bc) bg_popup_call_pane_cp01

0x04ce,	// (0x0004c9ca) call_thumbnail_pane_cp02

0x1ce1,	// (0x0004e1dd) call_type_pane_cp022

0x1ce9,	// (0x0004e1e5) popup_call_audio_out_window_g1_ParamLimits

0x1ce9,	// (0x0004e1e5) popup_call_audio_out_window_g1

0x1cfb,	// (0x0004e1f7) popup_call_audio_out_window_g2_ParamLimits

0x1cfb,	// (0x0004e1f7) popup_call_audio_out_window_g2

0x1d07,	// (0x0004e203) popup_call_audio_out_window_g3_ParamLimits

0x1d07,	// (0x0004e203) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0005b5ff) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0005b5ff) popup_call_audio_out_window_g

0x1d19,	// (0x0004e215) popup_call_audio_out_window_t1_ParamLimits

0x1d19,	// (0x0004e215) popup_call_audio_out_window_t1

0x1d31,	// (0x0004e22d) popup_call_audio_out_window_t2_ParamLimits

0x1d31,	// (0x0004e22d) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0005b606) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0005b606) popup_call_audio_out_window_t

0x1d46,	// (0x0004e242) bg_popup_call_pane_ParamLimits

0x1d46,	// (0x0004e242) bg_popup_call_pane

0x5f2e,	// (0x0005242a) call_thumbnail_pane_cp_ParamLimits

0x5f2e,	// (0x0005242a) call_thumbnail_pane_cp

0x1dca,	// (0x0004e2c6) call_type_pane_cp01_ParamLimits

0x1dca,	// (0x0004e2c6) call_type_pane_cp01

0x1e0e,	// (0x0004e30a) popup_call_audio_first_window_g1_ParamLimits

0x1e0e,	// (0x0004e30a) popup_call_audio_first_window_g1

0x1e5a,	// (0x0004e356) popup_call_audio_first_window_g2_ParamLimits

0x1e5a,	// (0x0004e356) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0005b60b) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0005b60b) popup_call_audio_first_window_g

0x1e9e,	// (0x0004e39a) popup_call_audio_first_window_t1_ParamLimits

0x1e9e,	// (0x0004e39a) popup_call_audio_first_window_t1

0x1f4a,	// (0x0004e446) popup_call_audio_first_window_t4_ParamLimits

0x1f4a,	// (0x0004e446) popup_call_audio_first_window_t4

0x1fd6,	// (0x0004e4d2) popup_call_audio_first_window_t5_ParamLimits

0x1fd6,	// (0x0004e4d2) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0005b610) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0005b610) popup_call_audio_first_window_t

0x2005,	// (0x0004e501) bg_popup_call_pane_cp02

0x200f,	// (0x0004e50b) call_type_pane_cp023

0x2017,	// (0x0004e513) popup_call_audio_wait_window_g1

0x201f,	// (0x0004e51b) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005b617) popup_call_audio_wait_window_g

0x2027,	// (0x0004e523) popup_call_audio_wait_window_t3

0x2035,	// (0x0004e531) bg_popup_call_pane_cp03_ParamLimits

0x2035,	// (0x0004e531) bg_popup_call_pane_cp03

0x2095,	// (0x0004e591) call_thumbnail_pane_cp011_ParamLimits

0x2095,	// (0x0004e591) call_thumbnail_pane_cp011

0x20a1,	// (0x0004e59d) call_type_pane_cp034_ParamLimits

0x20a1,	// (0x0004e59d) call_type_pane_cp034

0x20dd,	// (0x0004e5d9) popup_call_audio_second_window_g1_ParamLimits

0x20dd,	// (0x0004e5d9) popup_call_audio_second_window_g1

0x2119,	// (0x0004e615) popup_call_audio_second_window_g2_ParamLimits

0x2119,	// (0x0004e615) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0005b61c) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0005b61c) popup_call_audio_second_window_g

0x2155,	// (0x0004e651) popup_call_audio_second_window_t1_ParamLimits

0x2155,	// (0x0004e651) popup_call_audio_second_window_t1

0x21d6,	// (0x0004e6d2) popup_call_audio_second_window_t2_ParamLimits

0x21d6,	// (0x0004e6d2) popup_call_audio_second_window_t2

0x220c,	// (0x0004e708) popup_call_audio_second_window_t3_ParamLimits

0x220c,	// (0x0004e708) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0005b621) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0005b621) popup_call_audio_second_window_t

0x2005,	// (0x0004e501) bg_popup_call_pane_cp04

0x2242,	// (0x0004e73e) list_conf_pane

0x224a,	// (0x0004e746) popup_call_audio_conf_window_t1

0x2258,	// (0x0004e754) call_thumbnail_pane_g1

0x2260,	// (0x0004e75c) bg_pinb_pane_ParamLimits

0x2260,	// (0x0004e75c) bg_pinb_pane

0x226e,	// (0x0004e76a) find_pinb_pane

0x2277,	// (0x0004e773) listscroll_pinb_pane_ParamLimits

0x2277,	// (0x0004e773) listscroll_pinb_pane

0x2286,	// (0x0004e782) pinb_bg_pane_g1

0x5f52,	// (0x0005244e) pinb_bg_pane_g2

0x5f5e,	// (0x0005245a) pinb_bg_pane_g3

0x5f6a,	// (0x00052466) pinb_bg_pane_g4

0x5f76,	// (0x00052472) pinb_bg_pane_g5

0x5f82,	// (0x0005247e) pinb_bg_pane_g6

0x5f8d,	// (0x00052489) pinb_bg_pane_g7

0x5f98,	// (0x00052494) pinb_bg_pane_g8

0x5fa3,	// (0x0005249f) pinb_bg_pane_g9

0x5fad,	// (0x000524a9) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0005b628) pinb_bg_pane_g

0x5fca,	// (0x000524c6) grid_pinb_pane

0x5fd5,	// (0x000524d1) list_pinb_pane

0x5fe0,	// (0x000524dc) scroll_pane_cp01_ParamLimits

0x5fe0,	// (0x000524dc) scroll_pane_cp01

0x2290,	// (0x0004e78c) find_pinb_pane_g1_ParamLimits

0x2290,	// (0x0004e78c) find_pinb_pane_g1

0x22a8,	// (0x0004e7a4) find_pinb_pane_t1

0x22ba,	// (0x0004e7b6) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0005b642) find_pinb_pane_t

0x22cf,	// (0x0004e7cb) input_focus_pane_cp01_ParamLimits

0x22cf,	// (0x0004e7cb) input_focus_pane_cp01

0x5ff2,	// (0x000524ee) cell_pinb_pane_ParamLimits

0x5ff2,	// (0x000524ee) cell_pinb_pane

0x6012,	// (0x0005250e) cell_pinb_pane_g1_ParamLimits

0x6012,	// (0x0005250e) cell_pinb_pane_g1

0x6027,	// (0x00052523) cell_pinb_pane_g2_ParamLimits

0x6027,	// (0x00052523) cell_pinb_pane_g2

0x22db,	// (0x0004e7d7) cell_pinb_pane_g3_ParamLimits

0x22db,	// (0x0004e7d7) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0005b647) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0005b647) cell_pinb_pane_g

0x2005,	// (0x0004e501) grid_highlight_pane_cp01

0x6033,	// (0x0005252f) list_pinb_item_pane_ParamLimits

0x6033,	// (0x0005252f) list_pinb_item_pane

0x2005,	// (0x0004e501) list_highlight_pane_cp02

0x604e,	// (0x0005254a) list_pinb_item_pane_g1_ParamLimits

0x604e,	// (0x0005254a) list_pinb_item_pane_g1

0x605b,	// (0x00052557) list_pinb_item_pane_g2_ParamLimits

0x605b,	// (0x00052557) list_pinb_item_pane_g2

0x6067,	// (0x00052563) list_pinb_item_pane_g3_ParamLimits

0x6067,	// (0x00052563) list_pinb_item_pane_g3

0x6078,	// (0x00052574) list_pinb_item_pane_g4_ParamLimits

0x6078,	// (0x00052574) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0005b64e) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0005b64e) list_pinb_item_pane_g

0x6084,	// (0x00052580) list_pinb_item_pane_t1_ParamLimits

0x6084,	// (0x00052580) list_pinb_item_pane_t1

0x60b5,	// (0x000525b1) calc_display_pane

0x60d3,	// (0x000525cf) calc_paper_pane

0x60ef,	// (0x000525eb) grid_calc_pane

0x2005,	// (0x0004e501) bg_list_pane_cp01

0x611b,	// (0x00052617) clock_g1

0x6123,	// (0x0005261f) clock_g2

0x0001,

0xf15b,	// (0x0005b657) clock_g

0x612d,	// (0x00052629) clock_t1_ParamLimits

0x612d,	// (0x00052629) clock_t1

0x6142,	// (0x0005263e) clock_t2_ParamLimits

0x6142,	// (0x0005263e) clock_t2

0x6154,	// (0x00052650) clock_t3_ParamLimits

0x6154,	// (0x00052650) clock_t3

0x6166,	// (0x00052662) clock_t4_ParamLimits

0x6166,	// (0x00052662) clock_t4

0x6178,	// (0x00052674) clock_t5_ParamLimits

0x6178,	// (0x00052674) clock_t5

0x618d,	// (0x00052689) clock_t6_ParamLimits

0x618d,	// (0x00052689) clock_t6

0x619f,	// (0x0005269b) clock_t7_ParamLimits

0x619f,	// (0x0005269b) clock_t7

0x61b1,	// (0x000526ad) clock_t8_ParamLimits

0x61b1,	// (0x000526ad) clock_t8

0x61c7,	// (0x000526c3) clock_t9_ParamLimits

0x61c7,	// (0x000526c3) clock_t9

0x0008,

0xf160,	// (0x0005b65c) clock_t_ParamLimits

0xf160,	// (0x0005b65c) clock_t

0x22e7,	// (0x0004e7e3) popup_clock_analogue_window_cp02

0x22e7,	// (0x0004e7e3) popup_clock_digital_window_cp01

0x22ef,	// (0x0004e7eb) listscroll_help_pane

0x2005,	// (0x0004e501) phob_pre_status_pane

0x22f9,	// (0x0004e7f5) grid_qdial_pane

0x2005,	// (0x0004e501) listscroll_mce_pane

0x2303,	// (0x0004e7ff) bg_notes_pane

0x230d,	// (0x0004e809) list_notes_pane

0x61dd,	// (0x000526d9) scroll_pane_cp06

0x2317,	// (0x0004e813) bg_calc_paper_pane

0x61f2,	// (0x000526ee) list_calc_pane

0x232b,	// (0x0004e827) bg_calc_display_pane

0x620c,	// (0x00052708) calc_display_pane_t1

0x6221,	// (0x0005271d) calc_display_pane_t2

0x6236,	// (0x00052732) calc_display_pane_t3

0x0002,

0xf173,	// (0x0005b66f) calc_display_pane_t

0x6248,	// (0x00052744) cell_calc_pane_ParamLimits

0x6248,	// (0x00052744) cell_calc_pane

0x2337,	// (0x0004e833) bg_calc_paper_pane_g1

0x234f,	// (0x0004e84b) bg_calc_paper_pane_g2

0x2343,	// (0x0004e83f) bg_calc_paper_pane_g3

0x2367,	// (0x0004e863) bg_calc_paper_pane_g4

0x235b,	// (0x0004e857) bg_calc_paper_pane_g5

0x6277,	// (0x00052773) bg_calc_paper_pane_g6

0x6288,	// (0x00052784) bg_calc_paper_pane_g7

0x6299,	// (0x00052795) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0005b676) bg_calc_paper_pane_g

0x62aa,	// (0x000527a6) calc_bg_paper_pane_g9

0x62bb,	// (0x000527b7) list_calc_item_pane_ParamLimits

0x62bb,	// (0x000527b7) list_calc_item_pane

0x2373,	// (0x0004e86f) list_calc_item_pane_g1

0x62df,	// (0x000527db) list_calc_item_pane_t1_ParamLimits

0x62df,	// (0x000527db) list_calc_item_pane_t1

0x62f1,	// (0x000527ed) list_calc_item_pane_t2_ParamLimits

0x62f1,	// (0x000527ed) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0005b687) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0005b687) list_calc_item_pane_t

0x2380,	// (0x0004e87c) cell_calc_pane_g1

0x238a,	// (0x0004e886) grid_highlight_pane_cp02

0x23b5,	// (0x0004e8b1) bg_calc_display_pane_g1

0x6321,	// (0x0005281d) bg_calc_display_pane_g2

0x23ac,	// (0x0004e8a8) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0005b691) bg_calc_display_pane_g

0x632b,	// (0x00052827) cell_qdial_pane_ParamLimits

0x632b,	// (0x00052827) cell_qdial_pane

0x6341,	// (0x0005283d) cell_qdial_pane_g1_ParamLimits

0x6341,	// (0x0005283d) cell_qdial_pane_g1

0x634e,	// (0x0005284a) cell_qdial_pane_g2_ParamLimits

0x634e,	// (0x0005284a) cell_qdial_pane_g2

0x23be,	// (0x0004e8ba) cell_qdial_pane_g3_ParamLimits

0x23be,	// (0x0004e8ba) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0005b698) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0005b698) cell_qdial_pane_g

0x636c,	// (0x00052868) cell_qdial_pane_t1_ParamLimits

0x636c,	// (0x00052868) cell_qdial_pane_t1

0x6384,	// (0x00052880) cell_qdial_pane_t2_ParamLimits

0x6384,	// (0x00052880) cell_qdial_pane_t2

0x6397,	// (0x00052893) cell_qdial_pane_t3_ParamLimits

0x6397,	// (0x00052893) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0005b6a1) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0005b6a1) cell_qdial_pane_t

0x2005,	// (0x0004e501) grid_highlight_pane_cp04

0x23ca,	// (0x0004e8c6) thumbnail_qdial_pane_ParamLimits

0x23ca,	// (0x0004e8c6) thumbnail_qdial_pane

0x2426,	// (0x0004e922) list_help_pane

0x242f,	// (0x0004e92b) scroll_pane_cp02

0x63aa,	// (0x000528a6) help_list_pane_t1_ParamLimits

0x63aa,	// (0x000528a6) help_list_pane_t1

0x63d4,	// (0x000528d0) bg_notes_pane_g2

0x63dc,	// (0x000528d8) bg_notes_pane_g3

0x63e4,	// (0x000528e0) notes_bg_pane_g1

0x63ec,	// (0x000528e8) notes_bg_pane_g4

0x63f4,	// (0x000528f0) notes_bg_pane_g5

0x63fc,	// (0x000528f8) notes_bg_pane_g6

0x6404,	// (0x00052900) notes_bg_pane_g7

0x640c,	// (0x00052908) notes_bg_pane_g8

0x6414,	// (0x00052910) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0005b6bf) notes_bg_pane_g

0x641c,	// (0x00052918) list_notes_text_pane_ParamLimits

0x641c,	// (0x00052918) list_notes_text_pane

0x2438,	// (0x0004e934) list_notes_text_pane_g1

0x05ca,	// (0x0004cac6) list_notes_text_pane_t1

0x232b,	// (0x0004e827) listscroll_cale_week_pane

0x6456,	// (0x00052952) bg_cale_heading_pane

0x2452,	// (0x0004e94e) bg_cale_pane_cp01

0x646a,	// (0x00052966) cale_week_corner_pane

0x6480,	// (0x0005297c) cale_week_day_heading_pane

0x6494,	// (0x00052990) cale_week_scroll_pane_g1

0x64a5,	// (0x000529a1) cale_week_scroll_pane_g2

0x64b6,	// (0x000529b2) cale_week_scroll_pane_g3

0x64c7,	// (0x000529c3) cale_week_scroll_pane_g4

0x64d8,	// (0x000529d4) cale_week_scroll_pane_g5

0x64e9,	// (0x000529e5) cale_week_scroll_pane_g6

0x64fc,	// (0x000529f8) cale_week_scroll_pane_g7

0x650f,	// (0x00052a0b) cale_week_scroll_pane_g8

0x6522,	// (0x00052a1e) cale_week_scroll_pane_g9

0x6533,	// (0x00052a2f) cale_week_scroll_pane_g10

0x6544,	// (0x00052a40) cale_week_scroll_pane_g11

0x6555,	// (0x00052a51) cale_week_scroll_pane_g12

0x6566,	// (0x00052a62) cale_week_scroll_pane_g13

0x6577,	// (0x00052a73) cale_week_scroll_pane_g14

0x6588,	// (0x00052a84) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0005b6ce) cale_week_scroll_pane_g

0x6599,	// (0x00052a95) cale_week_time_pane

0x65ac,	// (0x00052aa8) grid_cale_week_pane

0x65c1,	// (0x00052abd) scroll_pane_cp08

0x65db,	// (0x00052ad7) cell_cale_week_pane_ParamLimits

0x65db,	// (0x00052ad7) cell_cale_week_pane

0x6619,	// (0x00052b15) cale_week_day_heading_pane_t1

0x6646,	// (0x00052b42) cale_week_day_heading_pane_t2

0x6673,	// (0x00052b6f) cale_week_day_heading_pane_t3

0x66a0,	// (0x00052b9c) cale_week_day_heading_pane_t4

0x66cd,	// (0x00052bc9) cale_week_day_heading_pane_t5

0x66fa,	// (0x00052bf6) cale_week_day_heading_pane_t6

0x6727,	// (0x00052c23) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0005b6ed) cale_week_day_heading_pane_t

0x247d,	// (0x0004e979) bg_cale_side_pane

0x6754,	// (0x00052c50) cale_week_time_pane_t1

0x6780,	// (0x00052c7c) cale_week_time_pane_t2

0x67ac,	// (0x00052ca8) cale_week_time_pane_t3

0x67d8,	// (0x00052cd4) cale_week_time_pane_t4

0x6804,	// (0x00052d00) cale_week_time_pane_t5

0x6830,	// (0x00052d2c) cale_week_time_pane_t6

0x685c,	// (0x00052d58) cale_week_time_pane_t7

0x6888,	// (0x00052d84) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0005b6fc) cale_week_time_pane_t

0x68b4,	// (0x00052db0) cell_cale_week_pane_g2

0x68cd,	// (0x00052dc9) cell_cale_week_pane_g3_ParamLimits

0x68cd,	// (0x00052dc9) cell_cale_week_pane_g3

0x248b,	// (0x0004e987) grid_highlight_pane_cp07

0x2493,	// (0x0004e98f) listscroll_gms_pane

0x249d,	// (0x0004e999) grid_gms_pane

0x24a6,	// (0x0004e9a2) listscroll_gms_pane_g1

0x24ae,	// (0x0004e9aa) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0005b70d) listscroll_gms_pane_g

0x68e5,	// (0x00052de1) scroll_pane_cp010

0x68f0,	// (0x00052dec) cell_gms_pane_ParamLimits

0x68f0,	// (0x00052dec) cell_gms_pane

0x6903,	// (0x00052dff) cell_gms_pane_g1

0x24b6,	// (0x0004e9b2) cell_gms_pane_g2

0x24be,	// (0x0004e9ba) cell_gms_pane_g3

0x24c7,	// (0x0004e9c3) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0005b712) cell_gms_pane_g

0x24d0,	// (0x0004e9cc) grid_highlight_pane_cp09

0x8c4f,	// (0x0005514b) phob_pre_status_pane_g1

0x8c57,	// (0x00055153) phob_pre_status_pane_g2

0x8c5f,	// (0x0005515b) phob_pre_status_pane_g3

0x8c67,	// (0x00055163) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0005bb01) phob_pre_status_pane_g

0x8c77,	// (0x00055173) phob_pre_status_pane_t1

0x8c87,	// (0x00055183) phob_pre_status_pane_t2

0x8c97,	// (0x00055193) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0005bb0c) phob_pre_status_pane_t

0x2005,	// (0x0004e501) bg_list_pane_cp05

0x6913,	// (0x00052e0f) grid_vorec_pane

0x691d,	// (0x00052e19) vorec_t1

0x692b,	// (0x00052e27) vorec_t2

0x6939,	// (0x00052e35) vorec_t3

0x6947,	// (0x00052e43) vorec_t4

0x6955,	// (0x00052e51) vorec_t5

0x6963,	// (0x00052e5f) vorec_t6

0x0006,

0xf21f,	// (0x0005b71b) vorec_t

0x697f,	// (0x00052e7b) wait_bar_pane_cp01

0x6987,	// (0x00052e83) cell_vorec_pane_ParamLimits

0x6987,	// (0x00052e83) cell_vorec_pane

0x24d8,	// (0x0004e9d4) cell_vorec_pane_g1

0x2005,	// (0x0004e501) grid_highlight_pane_cp05

0x69ac,	// (0x00052ea8) cams_zoom_pane

0x69b8,	// (0x00052eb4) image_vga_pane

0x69c7,	// (0x00052ec3) main_camera_pane_g1

0x69d5,	// (0x00052ed1) main_camera_pane_g2

0x69e1,	// (0x00052edd) main_camera_pane_g3

0x69ef,	// (0x00052eeb) main_camera_pane_g4

0x69fd,	// (0x00052ef9) main_camera_pane_g5

0x6a0b,	// (0x00052f07) main_camera_pane_g6

0x6a19,	// (0x00052f15) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0005b72a) main_camera_pane_g

0x6a27,	// (0x00052f23) main_camera_pane_t1

0x6a39,	// (0x00052f35) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0005b73b) main_camera_pane_t

0x6a5c,	// (0x00052f58) cams_zoom_pane_cp_ParamLimits

0x6a5c,	// (0x00052f58) cams_zoom_pane_cp

0x6a80,	// (0x00052f7c) image_cif_pane_ParamLimits

0x6a80,	// (0x00052f7c) image_cif_pane

0x6a9e,	// (0x00052f9a) image_subqcif_pane

0x6aa8,	// (0x00052fa4) main_video_pane_g1_ParamLimits

0x6aa8,	// (0x00052fa4) main_video_pane_g1

0x6ac8,	// (0x00052fc4) main_video_pane_g2_ParamLimits

0x6ac8,	// (0x00052fc4) main_video_pane_g2

0x6af8,	// (0x00052ff4) main_video_pane_g3_ParamLimits

0x6af8,	// (0x00052ff4) main_video_pane_g3

0x6b21,	// (0x0005301d) main_video_pane_g4_ParamLimits

0x6b21,	// (0x0005301d) main_video_pane_g4

0x6b4a,	// (0x00053046) main_video_pane_g5_ParamLimits

0x6b4a,	// (0x00053046) main_video_pane_g5

0x24ee,	// (0x0004e9ea) main_video_pane_g6_ParamLimits

0x24ee,	// (0x0004e9ea) main_video_pane_g6

0x0006,

0xf244,	// (0x0005b740) main_video_pane_g_ParamLimits

0xf244,	// (0x0005b740) main_video_pane_g

0x6b6c,	// (0x00053068) main_video_pane_t1_ParamLimits

0x6b6c,	// (0x00053068) main_video_pane_t1

0x2508,	// (0x0004ea04) cams_zoom_pane_g1

0x2511,	// (0x0004ea0d) cams_zoom_pane_g2

0x251a,	// (0x0004ea16) cams_zoom_pane_g3

0x2523,	// (0x0004ea1f) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0005b74f) cams_zoom_pane_g

0x6bb6,	// (0x000530b2) grid_cams_pane

0x6bc4,	// (0x000530c0) linegrid_cams_pane

0x6bd2,	// (0x000530ce) cell_cams_pane_ParamLimits

0x6bd2,	// (0x000530ce) cell_cams_pane

0x252c,	// (0x0004ea28) cams_burst_image_pane

0x2534,	// (0x0004ea30) cell_cams_pane_g1

0x2005,	// (0x0004e501) grid_highlight_pane_cp03

0x2380,	// (0x0004e87c) mp_bg_pane_g1

0x2005,	// (0x0004e501) bg_list_pane_cp03

0x40d1,	// (0x000505cd) bg_mp_pane

0x40d9,	// (0x000505d5) grid_mp_pane

0x40e1,	// (0x000505dd) media_player_g1

0x40eb,	// (0x000505e7) media_player_t1

0x40f9,	// (0x000505f5) media_player_t2

0x4107,	// (0x00050603) media_player_t3

0x4115,	// (0x00050611) media_player_t4

0x4123,	// (0x0005061f) media_player_t5

0x4131,	// (0x0005062d) media_player_t6

0x413f,	// (0x0005063b) media_player_t7

0x0006,

0xf5ef,	// (0x0005baeb) media_player_t

0x414d,	// (0x00050649) wait_bar_pane_cp02

0xf5d4,	// (0x0005bad0) main_usb_pane_t

0x8c46,	// (0x00055142) cell_mp_pane

0x2380,	// (0x0004e87c) cell_mp_pane_g1

0x2005,	// (0x0004e501) grid_highlight_pane_cp06

0x253c,	// (0x0004ea38) grid_skin_colour_pane

0x2544,	// (0x0004ea40) list_highlight_pane_cp03

0x6c40,	// (0x0005313c) skin_g1

0x254c,	// (0x0004ea48) skin_t1

0x255b,	// (0x0004ea57) skin_t2

0x0001,

0xf288,	// (0x0005b784) skin_t

0x6c4a,	// (0x00053146) cell_skin_colour_pane_ParamLimits

0x6c4a,	// (0x00053146) cell_skin_colour_pane

0x2569,	// (0x0004ea65) cell_skin_colour_pane_g1

0x6cca,	// (0x000531c6) call_video_g1_ParamLimits

0x6cca,	// (0x000531c6) call_video_g1

0x6cda,	// (0x000531d6) call_video_g2_ParamLimits

0x6cda,	// (0x000531d6) call_video_g2

0x0001,

0xf28d,	// (0x0005b789) call_video_g_ParamLimits

0xf28d,	// (0x0005b789) call_video_g

0x6d2a,	// (0x00053226) call_video_uplink_pane_cp1_ParamLimits

0x6d2a,	// (0x00053226) call_video_uplink_pane_cp1

0x257b,	// (0x0004ea77) call_video_uplink_pane_cp2

0x6df8,	// (0x000532f4) video_down_crop_pane_ParamLimits

0x6df8,	// (0x000532f4) video_down_crop_pane

0x6eea,	// (0x000533e6) video_down_pane_ParamLimits

0x6eea,	// (0x000533e6) video_down_pane

0x2583,	// (0x0004ea7f) video_down_subqcif_pane_ParamLimits

0x2583,	// (0x0004ea7f) video_down_subqcif_pane

0x259d,	// (0x0004ea99) video_down_subqcif_pane_cp_ParamLimits

0x259d,	// (0x0004ea99) video_down_subqcif_pane_cp

0x25c3,	// (0x0004eabf) im_reading_pane_ParamLimits

0x25c3,	// (0x0004eabf) im_reading_pane

0x7007,	// (0x00053503) im_writing_pane_ParamLimits

0x7007,	// (0x00053503) im_writing_pane

0x7025,	// (0x00053521) im_reading_pane_t1

0x25dd,	// (0x0004ead9) list_im_pane

0x25ee,	// (0x0004eaea) scroll_pane_cp07

0x706d,	// (0x00053569) im_writing_pane_t1_ParamLimits

0x706d,	// (0x00053569) im_writing_pane_t1

0x2607,	// (0x0004eb03) im_writing_pane_t2_ParamLimits

0x2607,	// (0x0004eb03) im_writing_pane_t2

0x0001,

0xf297,	// (0x0005b793) im_writing_pane_t_ParamLimits

0xf297,	// (0x0005b793) im_writing_pane_t

0x2005,	// (0x0004e501) input_focus_pane_cp04

0x2005,	// (0x0004e501) input_focus_pane_cp05

0x707f,	// (0x0005357b) list_im_single_pane_ParamLimits

0x707f,	// (0x0005357b) list_im_single_pane

0x709b,	// (0x00053597) list_single_im_pane_t1

0x8c0a,	// (0x00055106) blid_accuracy_pane

0x8c12,	// (0x0005510e) blid_compass_pane

0x8c1c,	// (0x00055118) main_location_t1

0x8c2a,	// (0x00055126) main_location_t2

0x8c38,	// (0x00055134) main_location_t3

0x0002,

0xf5fe,	// (0x0005bafa) main_location_t

0x2005,	// (0x0004e501) aid_levels_location

0x2380,	// (0x0004e87c) blid_accuracy_pane_g1

0x2380,	// (0x0004e87c) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0005b7f5) blid_accuracy_pane_g

0x264f,	// (0x0004eb4b) wml_content_pane

0x268d,	// (0x0004eb89) wml_button_pane_ParamLimits

0x268d,	// (0x0004eb89) wml_button_pane

0x70aa,	// (0x000535a6) wml_list_single_large_pane_ParamLimits

0x70aa,	// (0x000535a6) wml_list_single_large_pane

0x70cc,	// (0x000535c8) wml_list_single_medium_pane_ParamLimits

0x70cc,	// (0x000535c8) wml_list_single_medium_pane

0x70f2,	// (0x000535ee) wml_list_single_small_pane_ParamLimits

0x70f2,	// (0x000535ee) wml_list_single_small_pane

0x26a1,	// (0x0004eb9d) wml_selection_box_pane_ParamLimits

0x26a1,	// (0x0004eb9d) wml_selection_box_pane

0x26b4,	// (0x0004ebb0) wml_list_single_pane_t1

0x26c3,	// (0x0004ebbf) wml_list_single_medium_pane_t1

0x26d2,	// (0x0004ebce) wml_list_single_large_pane_t1

0x26e1,	// (0x0004ebdd) input_focus_pane_cp02_ParamLimits

0x26e1,	// (0x0004ebdd) input_focus_pane_cp02

0x26f4,	// (0x0004ebf0) wml_selection_box_pane_g1

0x26fd,	// (0x0004ebf9) wml_selection_box_pane_t1_ParamLimits

0x26fd,	// (0x0004ebf9) wml_selection_box_pane_t1

0x2260,	// (0x0004e75c) bg_wml_button_pane_ParamLimits

0x2260,	// (0x0004e75c) bg_wml_button_pane

0x2715,	// (0x0004ec11) wml_button_pane_g1

0x271d,	// (0x0004ec19) wml_button_pane_t1

0x2715,	// (0x0004ec11) wml_button_bg_pane_g1

0x272d,	// (0x0004ec29) wml_button_bg_pane_g2

0x2735,	// (0x0004ec31) wml_button_bg_pane_g3

0x273d,	// (0x0004ec39) wml_button_bg_pane_g4

0x2745,	// (0x0004ec41) wml_button_bg_pane_g5

0x274d,	// (0x0004ec49) wml_button_bg_pane_g6

0x2755,	// (0x0004ec51) wml_button_bg_pane_g7

0x275d,	// (0x0004ec59) wml_button_bg_pane_g8

0x2765,	// (0x0004ec61) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0005b798) wml_button_bg_pane_g

0x711d,	// (0x00053619) bg_list_pane_cp02

0x276d,	// (0x0004ec69) mce_header_pane_ParamLimits

0x276d,	// (0x0004ec69) mce_header_pane

0x2783,	// (0x0004ec7f) mce_icon_pane

0x2783,	// (0x0004ec7f) mce_image_pane

0x278c,	// (0x0004ec88) mce_text_pane_ParamLimits

0x278c,	// (0x0004ec88) mce_text_pane

0x7127,	// (0x00053623) scroll_pane_cp03

0x2685,	// (0x0004eb81) scroll_pane_cp04

0x279f,	// (0x0004ec9b) scroll_pane_cp05_ParamLimits

0x279f,	// (0x0004ec9b) scroll_pane_cp05

0x7131,	// (0x0005362d) mce_header_field_pane_ParamLimits

0x7131,	// (0x0005362d) mce_header_field_pane

0x7153,	// (0x0005364f) mce_header_field_pane_2_ParamLimits

0x7153,	// (0x0005364f) mce_header_field_pane_2

0x7169,	// (0x00053665) mce_header_field_pane_3

0x7171,	// (0x0005366d) list_single_mce_message_pane_ParamLimits

0x7171,	// (0x0005366d) list_single_mce_message_pane

0x7190,	// (0x0005368c) list_single_mce_smart_pane_ParamLimits

0x7190,	// (0x0005368c) list_single_mce_smart_pane

0x27ab,	// (0x0004eca7) input_focus_pane_cp03

0x27b4,	// (0x0004ecb0) list_header_data_pane

0x71ba,	// (0x000536b6) mce_header_field_pane_t1

0x71ca,	// (0x000536c6) list_single_mce_header_pane_ParamLimits

0x71ca,	// (0x000536c6) list_single_mce_header_pane

0x27bc,	// (0x0004ecb8) list_single_mce_header_pane_t1

0x27cb,	// (0x0004ecc7) list_single_mce_message_pane_g1

0x27d3,	// (0x0004eccf) list_single_mce_message_pane_t1

0x7206,	// (0x00053702) bg_cale_heading_pane_cp01_ParamLimits

0x7206,	// (0x00053702) bg_cale_heading_pane_cp01

0x27e1,	// (0x0004ecdd) bg_cale_pane_cp02_ParamLimits

0x27e1,	// (0x0004ecdd) bg_cale_pane_cp02

0x7229,	// (0x00053725) cale_month_corner_pane

0x723f,	// (0x0005373b) cale_month_day_heading_pane_ParamLimits

0x723f,	// (0x0005373b) cale_month_day_heading_pane

0x7272,	// (0x0005376e) cale_month_pane_g1_ParamLimits

0x7272,	// (0x0005376e) cale_month_pane_g1

0x728e,	// (0x0005378a) cale_month_pane_g2_ParamLimits

0x728e,	// (0x0005378a) cale_month_pane_g2

0x72a9,	// (0x000537a5) cale_month_pane_g3_ParamLimits

0x72a9,	// (0x000537a5) cale_month_pane_g3

0x72d5,	// (0x000537d1) cale_month_pane_g4_ParamLimits

0x72d5,	// (0x000537d1) cale_month_pane_g4

0x7301,	// (0x000537fd) cale_month_pane_g5_ParamLimits

0x7301,	// (0x000537fd) cale_month_pane_g5

0x732d,	// (0x00053829) cale_month_pane_g6_ParamLimits

0x732d,	// (0x00053829) cale_month_pane_g6

0x7369,	// (0x00053865) cale_month_pane_g7_ParamLimits

0x7369,	// (0x00053865) cale_month_pane_g7

0x73a5,	// (0x000538a1) cale_month_pane_g8_ParamLimits

0x73a5,	// (0x000538a1) cale_month_pane_g8

0x73e1,	// (0x000538dd) cale_month_pane_g9_ParamLimits

0x73e1,	// (0x000538dd) cale_month_pane_g9

0x741b,	// (0x00053917) cale_month_pane_g10_ParamLimits

0x741b,	// (0x00053917) cale_month_pane_g10

0x7455,	// (0x00053951) cale_month_pane_g11_ParamLimits

0x7455,	// (0x00053951) cale_month_pane_g11

0x748f,	// (0x0005398b) cale_month_pane_g12_ParamLimits

0x748f,	// (0x0005398b) cale_month_pane_g12

0x74c9,	// (0x000539c5) cale_month_pane_g13_ParamLimits

0x74c9,	// (0x000539c5) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0005b7ab) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0005b7ab) cale_month_pane_g

0x7503,	// (0x000539ff) cale_month_week_pane

0x7516,	// (0x00053a12) grid_cale_month_pane_ParamLimits

0x7516,	// (0x00053a12) grid_cale_month_pane

0x7544,	// (0x00053a40) cale_month_day_heading_pane_t1

0x75a2,	// (0x00053a9e) cale_month_day_heading_pane_t2

0x7607,	// (0x00053b03) cale_month_day_heading_pane_t3

0x766c,	// (0x00053b68) cale_month_day_heading_pane_t4

0x76d1,	// (0x00053bcd) cale_month_day_heading_pane_t5

0x773e,	// (0x00053c3a) cale_month_day_heading_pane_t6

0x77b3,	// (0x00053caf) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0005b7c6) cale_month_day_heading_pane_t

0x247d,	// (0x0004e979) bg_cale_side_pane_cp01

0x7828,	// (0x00053d24) cale_month_week_pane_t1

0x7853,	// (0x00053d4f) cale_month_week_pane_t2

0x787e,	// (0x00053d7a) cale_month_week_pane_t3

0x78a9,	// (0x00053da5) cale_month_week_pane_t4

0x78d4,	// (0x00053dd0) cale_month_week_pane_t5

0x78ff,	// (0x00053dfb) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0005b7d5) cale_month_week_pane_t

0x792a,	// (0x00053e26) cell_cale_month_pane_ParamLimits

0x792a,	// (0x00053e26) cell_cale_month_pane

0x79f8,	// (0x00053ef4) cell_cale_month_pane_g1

0x7a04,	// (0x00053f00) cell_cale_month_pane_t1_ParamLimits

0x7a04,	// (0x00053f00) cell_cale_month_pane_t1

0x248b,	// (0x0004e987) grid_highlight_pane_cp08

0x2380,	// (0x0004e87c) main_smil_g1

0x7a20,	// (0x00053f1c) smil_status_pane

0x2816,	// (0x0004ed12) smil_text_pane

0x3fef,	// (0x000504eb) bg_popup_call3_rect_pane_g8

0x3ff7,	// (0x000504f3) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0005ba8e) bg_popup_call3_rect_pane_g

0x429f,	// (0x0005079b) smil_status_volume_pane_g1

0x2820,	// (0x0004ed1c) smil_status_pane_t1

0x8feb,	// (0x000554e7) volume_smil_pane

0x2837,	// (0x0004ed33) list_smil_text_pane

0x7a33,	// (0x00053f2f) scroll_pane_cp011

0x7a3e,	// (0x00053f3a) smil_text_list_pane_t1_ParamLimits

0x7a3e,	// (0x00053f3a) smil_text_list_pane_t1

0x7aa2,	// (0x00053f9e) aid_volume_smil_ParamLimits

0x7aa2,	// (0x00053f9e) aid_volume_smil

0x2380,	// (0x0004e87c) smil_volume_pane_g1

0x2380,	// (0x0004e87c) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0005b7f5) smil_volume_pane_g

0x232b,	// (0x0004e827) listscroll_cale_day_pane

0x2841,	// (0x0004ed3d) bg_cale_pane

0x2859,	// (0x0004ed55) list_cale_pane

0x286a,	// (0x0004ed66) scroll_pane_cp09

0x287b,	// (0x0004ed77) cale_bg_pane_g1

0x2883,	// (0x0004ed7f) cale_bg_pane_g2

0x288b,	// (0x0004ed87) cale_bg_pane_g3

0x2893,	// (0x0004ed8f) cale_bg_pane_g4

0x289b,	// (0x0004ed97) cale_bg_pane_g5

0x28a3,	// (0x0004ed9f) cale_bg_pane_g6

0x28ab,	// (0x0004eda7) cale_bg_pane_g7

0x28b3,	// (0x0004edaf) cale_bg_pane_g8

0x28bb,	// (0x0004edb7) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0005b7fa) cale_bg_pane_g

0x7ac4,	// (0x00053fc0) list_cale_time_pane_ParamLimits

0x7ac4,	// (0x00053fc0) list_cale_time_pane

0x7adc,	// (0x00053fd8) list_cale_time_pane_g1_ParamLimits

0x7adc,	// (0x00053fd8) list_cale_time_pane_g1

0x28c3,	// (0x0004edbf) list_cale_time_pane_g2_ParamLimits

0x28c3,	// (0x0004edbf) list_cale_time_pane_g2

0x7ae8,	// (0x00053fe4) list_cale_time_pane_g3_ParamLimits

0x7ae8,	// (0x00053fe4) list_cale_time_pane_g3

0x7af6,	// (0x00053ff2) list_cale_time_pane_g4_ParamLimits

0x7af6,	// (0x00053ff2) list_cale_time_pane_g4

0x7b04,	// (0x00054000) list_cale_time_pane_g5_ParamLimits

0x7b04,	// (0x00054000) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0005b80d) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0005b80d) list_cale_time_pane_g

0x7b12,	// (0x0005400e) list_cale_time_pane_t1_ParamLimits

0x7b12,	// (0x0005400e) list_cale_time_pane_t1

0x7b3a,	// (0x00054036) list_cale_time_pane_t2_ParamLimits

0x7b3a,	// (0x00054036) list_cale_time_pane_t2

0x7ea9,	// (0x000543a5) aid_blid_cardinal_pane

0x7eeb,	// (0x000543e7) compass_pane_t4

0x7b62,	// (0x0005405e) list_cale_time_pane_t4_ParamLimits

0x7b62,	// (0x0005405e) list_cale_time_pane_t4

0x7ef9,	// (0x000543f5) compass_pane_t5

0x7f09,	// (0x00054405) compass_pane_t6

0x7f17,	// (0x00054413) compass_pane_t7

0x2cd1,	// (0x0004f1cd) navi_pane_cc_t1

0x2e26,	// (0x0004f322) aid_phob_thumbnail_center_pane

0x8700,	// (0x00054bfc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0005b81a) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0005b81a) list_cale_time_pane_t

0x04c0,	// (0x0004c9bc) bg_popup_window_pane_cp02_ParamLimits

0x04c0,	// (0x0004c9bc) bg_popup_window_pane_cp02

0x28dd,	// (0x0004edd9) heading_pane_cp01_ParamLimits

0x28dd,	// (0x0004edd9) heading_pane_cp01

0x28e9,	// (0x0004ede5) loc_req_pane_ParamLimits

0x28e9,	// (0x0004ede5) loc_req_pane

0x28f9,	// (0x0004edf5) loc_type_pane_ParamLimits

0x28f9,	// (0x0004edf5) loc_type_pane

0x290b,	// (0x0004ee07) loc_type_pane_t1_ParamLimits

0x290b,	// (0x0004ee07) loc_type_pane_t1

0x291d,	// (0x0004ee19) loc_type_pane_t2_ParamLimits

0x291d,	// (0x0004ee19) loc_type_pane_t2

0x292f,	// (0x0004ee2b) loc_type_pane_t3_ParamLimits

0x292f,	// (0x0004ee2b) loc_type_pane_t3

0x0002,

0xf325,	// (0x0005b821) loc_type_pane_t_ParamLimits

0xf325,	// (0x0005b821) loc_type_pane_t

0x2941,	// (0x0004ee3d) list_loc_req_pane

0x294b,	// (0x0004ee47) scroll_pane_cp012

0x7b8a,	// (0x00054086) list_single_loc_request_popup_menu_pane_ParamLimits

0x7b8a,	// (0x00054086) list_single_loc_request_popup_menu_pane

0x2956,	// (0x0004ee52) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2956,	// (0x0004ee52) list_single_loc_request_popup_menu_pane_g1

0x2962,	// (0x0004ee5e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2962,	// (0x0004ee5e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0005b828) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0005b828) list_single_loc_request_popup_menu_pane_g

0x296e,	// (0x0004ee6a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x296e,	// (0x0004ee6a) list_single_loc_request_popup_menu_pane_t1

0x7b9c,	// (0x00054098) bg_popup_window_pane_cp03_ParamLimits

0x7b9c,	// (0x00054098) bg_popup_window_pane_cp03

0x7baa,	// (0x000540a6) heading_loc_req_pane_ParamLimits

0x7baa,	// (0x000540a6) heading_loc_req_pane

0x7bb6,	// (0x000540b2) popup_dyc_status_message_window_g1_ParamLimits

0x7bb6,	// (0x000540b2) popup_dyc_status_message_window_g1

0x7bc2,	// (0x000540be) popup_dyc_status_message_window_t1_ParamLimits

0x7bc2,	// (0x000540be) popup_dyc_status_message_window_t1

0x7bd4,	// (0x000540d0) popup_dyc_status_message_window_t2_ParamLimits

0x7bd4,	// (0x000540d0) popup_dyc_status_message_window_t2

0x7be6,	// (0x000540e2) popup_dyc_status_message_window_t3_ParamLimits

0x7be6,	// (0x000540e2) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0005b82d) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0005b82d) popup_dyc_status_message_window_t

0x2005,	// (0x0004e501) bg_heading_pane_cp01

0x2984,	// (0x0004ee80) heading_loc_req_pane_g1

0x298c,	// (0x0004ee88) heading_loc_req_pane_g2

0x2994,	// (0x0004ee90) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0005b834) heading_loc_req_pane_g

0x299c,	// (0x0004ee98) heading_loc_req_pane_t1

0x29ac,	// (0x0004eea8) bg_popup_sub_pane_cp01_ParamLimits

0x29ac,	// (0x0004eea8) bg_popup_sub_pane_cp01

0x29ba,	// (0x0004eeb6) popup_cale_events_window_g1_ParamLimits

0x29ba,	// (0x0004eeb6) popup_cale_events_window_g1

0x29da,	// (0x0004eed6) popup_cale_events_window_g2_ParamLimits

0x29da,	// (0x0004eed6) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0005b868) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0005b868) popup_cale_events_window_g

0x29fa,	// (0x0004eef6) popup_cale_events_window_t1_ParamLimits

0x29fa,	// (0x0004eef6) popup_cale_events_window_t1

0x2a0c,	// (0x0004ef08) popup_cale_events_window_t2_ParamLimits

0x2a0c,	// (0x0004ef08) popup_cale_events_window_t2

0x2a4a,	// (0x0004ef46) popup_cale_events_window_t3_ParamLimits

0x2a4a,	// (0x0004ef46) popup_cale_events_window_t3

0x2a84,	// (0x0004ef80) popup_cale_events_window_t4_ParamLimits

0x2a84,	// (0x0004ef80) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0005b86d) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0005b86d) popup_cale_events_window_t

0x7c6a,	// (0x00054166) call_type_pane

0x2b76,	// (0x0004f072) popup_call_status_window_g1

0x7c76,	// (0x00054172) popup_call_status_window_g2

0x7c82,	// (0x0005417e) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0005b876) popup_call_status_window_g

0x2aba,	// (0x0004efb6) call_type_pane_g1

0x2ac3,	// (0x0004efbf) call_type_pane_g2

0x0001,

0xf381,	// (0x0005b87d) call_type_pane_g

0x2005,	// (0x0004e501) bg_popup_sub_pane_cp02

0x2acc,	// (0x0004efc8) listscroll_popup_wml_pane

0x2ad4,	// (0x0004efd0) list_wml_pane

0x2ade,	// (0x0004efda) scroll_pane_cp013

0x2ae9,	// (0x0004efe5) list_single_graphic_popup_wml_pane_ParamLimits

0x2ae9,	// (0x0004efe5) list_single_graphic_popup_wml_pane

0x2380,	// (0x0004e87c) list_single_graphic_popup_wml_pane_g1

0x2afd,	// (0x0004eff9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0005b882) list_single_graphic_popup_wml_pane_g

0x2b05,	// (0x0004f001) list_single_graphic_popup_wml_pane_t1

0x2b13,	// (0x0004f00f) aid_call_pane

0x2258,	// (0x0004e754) popup_clock_analogue_window_g1

0x2258,	// (0x0004e754) popup_clock_analogue_window_g2

0x7c8e,	// (0x0005418a) popup_clock_analogue_window_g3

0x7c8e,	// (0x0005418a) popup_clock_analogue_window_g4

0x2380,	// (0x0004e87c) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0005b887) popup_clock_analogue_window_g

0x7c96,	// (0x00054192) popup_clock_analogue_window_t1

0x7ca4,	// (0x000541a0) clock_digital_number_pane_ParamLimits

0x7ca4,	// (0x000541a0) clock_digital_number_pane

0x7cb0,	// (0x000541ac) clock_digital_number_pane_cp02_ParamLimits

0x7cb0,	// (0x000541ac) clock_digital_number_pane_cp02

0x7cbc,	// (0x000541b8) clock_digital_number_pane_cp03_ParamLimits

0x7cbc,	// (0x000541b8) clock_digital_number_pane_cp03

0x7cc8,	// (0x000541c4) clock_digital_number_pane_cp04_ParamLimits

0x7cc8,	// (0x000541c4) clock_digital_number_pane_cp04

0x7cd4,	// (0x000541d0) clock_digital_separator_pane_ParamLimits

0x7cd4,	// (0x000541d0) clock_digital_separator_pane

0x7ce0,	// (0x000541dc) popup_clock_digital_window_t1

0x2380,	// (0x0004e87c) clock_digital_number_pane_g1

0x2380,	// (0x0004e87c) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0005b7f5) clock_digital_number_pane_g

0x2380,	// (0x0004e87c) clock_digital_separator_pane_g1

0x2380,	// (0x0004e87c) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0005b7f5) clock_digital_separator_pane_g

0x2005,	// (0x0004e501) bg_popup_window_pane_cp04

0x2b23,	// (0x0004f01f) heading_pane_cp03

0x2b2b,	// (0x0004f027) listscroll_popup_gms_pane

0x2b33,	// (0x0004f02f) grid_large_graphic_popup_pane

0x2b3d,	// (0x0004f039) listscroll_popup_gms_pane_g1

0x2b45,	// (0x0004f041) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0005b892) listscroll_popup_gms_pane_g

0x2685,	// (0x0004eb81) scroll_pane_cp014

0x7cfd,	// (0x000541f9) cell_large_graphic_popup_pane_ParamLimits

0x7cfd,	// (0x000541f9) cell_large_graphic_popup_pane

0x7d17,	// (0x00054213) cell_large_graphic_popup_pane_g1_ParamLimits

0x7d17,	// (0x00054213) cell_large_graphic_popup_pane_g1

0x2b4d,	// (0x0004f049) cell_large_graphic_popup_pane_g2_ParamLimits

0x2b4d,	// (0x0004f049) cell_large_graphic_popup_pane_g2

0x2b59,	// (0x0004f055) cell_large_graphic_popup_pane_g3_ParamLimits

0x2b59,	// (0x0004f055) cell_large_graphic_popup_pane_g3

0x2b66,	// (0x0004f062) cell_large_graphic_popup_pane_g4_ParamLimits

0x2b66,	// (0x0004f062) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0005b897) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0005b897) cell_large_graphic_popup_pane_g

0x2b84,	// (0x0004f080) grid_highlight_pane_cp010

0x2380,	// (0x0004e87c) bg_popup_call_pane_g1

0x2b8e,	// (0x0004f08a) list_single_graphic_popup_conf_pane_ParamLimits

0x2b8e,	// (0x0004f08a) list_single_graphic_popup_conf_pane

0x2ba0,	// (0x0004f09c) list_highlight_pane_cp01

0x2ba9,	// (0x0004f0a5) list_single_graphic_popup_conf_pane_g1

0x2bb1,	// (0x0004f0ad) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0005b8a0) list_single_graphic_popup_conf_pane_g

0x2bb9,	// (0x0004f0b5) list_single_graphic_popup_conf_pane_t1

0x2bc7,	// (0x0004f0c3) linegrid_cams_pane_g1

0x7d23,	// (0x0005421f) linegrid_cams_pane_g2

0x24be,	// (0x0004e9ba) linegrid_cams_pane_g3

0x2bd0,	// (0x0004f0cc) linegrid_cams_pane_g4

0x7d2c,	// (0x00054228) linegrid_cams_pane_g5

0x7d35,	// (0x00054231) linegrid_cams_pane_g6

0x24c7,	// (0x0004e9c3) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0005b8a5) linegrid_cams_pane_g

0x2bd9,	// (0x0004f0d5) popup_clock_analogue_window

0x2bd9,	// (0x0004f0d5) popup_clock_digital_window

0x2005,	// (0x0004e501) popup_phob_thumbnail_window

0x2380,	// (0x0004e87c) call_video_uplink_pane_g1

0x2be2,	// (0x0004f0de) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0005b8b4) call_video_uplink_pane_g

0x2bea,	// (0x0004f0e6) video_uplink_pane

0x2bf2,	// (0x0004f0ee) mce_image_pane_g1

0x7d40,	// (0x0005423c) mce_image_pane_g2

0x7d4a,	// (0x00054246) mce_image_pane_g3

0x7d54,	// (0x00054250) mce_image_pane_g4

0x7d5c,	// (0x00054258) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0005b8b9) mce_image_pane_g

0x2bfc,	// (0x0004f0f8) control_top_pane_stacon_cp01_ParamLimits

0x2bfc,	// (0x0004f0f8) control_top_pane_stacon_cp01

0x2c10,	// (0x0004f10c) uni_indicator_pane_stacon_cp01_ParamLimits

0x2c10,	// (0x0004f10c) uni_indicator_pane_stacon_cp01

0x2c21,	// (0x0004f11d) bg_popup_sub_pane_cp03

0x7d64,	// (0x00054260) chi_dic_find_pane

0x7d6c,	// (0x00054268) listscroll_chi_dic_pane

0x7d75,	// (0x00054271) main_pane_chidic_g1

0x7d88,	// (0x00054284) chi_dic_find_pane_t1

0x2c2b,	// (0x0004f127) find_chidic_pane

0x2c34,	// (0x0004f130) chi_dic_list_pane_ParamLimits

0x2c34,	// (0x0004f130) chi_dic_list_pane

0x2c45,	// (0x0004f141) scroll_pane_cp020

0x7d96,	// (0x00054292) find_chidic_pane_t1

0x2005,	// (0x0004e501) input_focus_pane_cp06

0x7da5,	// (0x000542a1) list_chi_dic_pane_ParamLimits

0x7da5,	// (0x000542a1) list_chi_dic_pane

0x7dbd,	// (0x000542b9) list_chi_dic_pane_t1_ParamLimits

0x7dbd,	// (0x000542b9) list_chi_dic_pane_t1

0x2005,	// (0x0004e501) list_highlight_pane_cp020

0x2c4d,	// (0x0004f149) bg_cale_heading_pane_g1

0x7dd0,	// (0x000542cc) bg_cale_heading_pane_g2

0x7dd8,	// (0x000542d4) bg_cale_heading_pane_g3

0x7de0,	// (0x000542dc) bg_cale_heading_pane_g4

0x7dea,	// (0x000542e6) bg_cale_heading_pane_g5

0x7df4,	// (0x000542f0) bg_cale_heading_pane_g6

0x7dfc,	// (0x000542f8) bg_cale_heading_pane_g7

0x7e04,	// (0x00054300) bg_cale_heading_pane_g8

0x7e0e,	// (0x0005430a) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0005b8c4) bg_cale_heading_pane_g

0x2c4d,	// (0x0004f149) bg_cale_side_pane_g1

0x7e18,	// (0x00054314) bg_cale_side_pane_g2

0x7e20,	// (0x0005431c) bg_cale_side_pane_g3

0x7e28,	// (0x00054324) bg_cale_side_pane_g4

0x7e30,	// (0x0005432c) bg_cale_side_pane_g5

0x7e38,	// (0x00054334) bg_cale_side_pane_g6

0x7e40,	// (0x0005433c) bg_cale_side_pane_g7

0x7e48,	// (0x00054344) bg_cale_side_pane_g8

0x7e50,	// (0x0005434c) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0005b8d7) bg_cale_side_pane_g

0x7e58,	// (0x00054354) popup_call_status_window_ParamLimits

0x7e58,	// (0x00054354) popup_call_status_window

0x2c55,	// (0x0004f151) stacon_top_pane

0x2c5d,	// (0x0004f159) status_pane_ParamLimits

0x2c5d,	// (0x0004f159) status_pane

0x2c72,	// (0x0004f16e) status_small_pane

0x2c7a,	// (0x0004f176) control_pane

0x2005,	// (0x0004e501) stacon_bottom_pane

0x2c82,	// (0x0004f17e) list_single_mce_smart_pane_t1_ParamLimits

0x2c82,	// (0x0004f17e) list_single_mce_smart_pane_t1

0x2c95,	// (0x0004f191) list_single_mce_smart_pane_t2_ParamLimits

0x2c95,	// (0x0004f191) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0005b8ea) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0005b8ea) list_single_mce_smart_pane_t

0x7e64,	// (0x00054360) compass_pane

0x7e6f,	// (0x0005436b) main_location2_pane_t1

0x7e83,	// (0x0005437f) main_location2_pane_t2

0x7e83,	// (0x0005437f) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0005b8ef) main_location2_pane_t

0x2cb4,	// (0x0004f1b0) compass_pane_g1_ParamLimits

0x2cb4,	// (0x0004f1b0) compass_pane_g1

0x7ecd,	// (0x000543c9) compass_pane_t1

0x7edc,	// (0x000543d8) compass_pane_t2

0x0005,

0xf3fc,	// (0x0005b8f8) compass_pane_t

0x7f27,	// (0x00054423) text_secondary_cp61

0x2cc8,	// (0x0004f1c4) navi_pane_cams_g5

0x2ceb,	// (0x0004f1e7) navi_pane_im_t1

0x2cf9,	// (0x0004f1f5) navi_pane_mp_g1_ParamLimits

0x2cf9,	// (0x0004f1f5) navi_pane_mp_g1

0x2d0d,	// (0x0004f209) navi_pane_mp_g2_ParamLimits

0x2d0d,	// (0x0004f209) navi_pane_mp_g2

0x2d19,	// (0x0004f215) navi_pane_mp_g3_ParamLimits

0x2d19,	// (0x0004f215) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0005b90c) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0005b90c) navi_pane_mp_g

0x2d25,	// (0x0004f221) navi_pane_mp_t1

0x2d33,	// (0x0004f22f) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0005b913) navi_pane_mp_t

0x2d6f,	// (0x0004f26b) navi_pane_vt_g1

0x2d25,	// (0x0004f221) navi_pane_vt_t1

0x2d77,	// (0x0004f273) navi_slider_pane

0x2d7f,	// (0x0004f27b) zooming_pane

0x2d87,	// (0x0004f283) navi_slider_pane_g1

0x803e,	// (0x0005453a) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0005b91a) navi_slider_pane_g

0x2dab,	// (0x0004f2a7) aid_levels_zoom

0x2db3,	// (0x0004f2af) zooming_pane_g1

0x2dbb,	// (0x0004f2b7) zooming_pane_g2

0x2dbb,	// (0x0004f2b7) zooming_pane_g3

0x0002,

0xf42d,	// (0x0005b929) zooming_pane_g

0x2dc3,	// (0x0004f2bf) level_10_zoom

0x2dcc,	// (0x0004f2c8) level_11_zoom

0x2dd5,	// (0x0004f2d1) level_1_zoom

0x2dde,	// (0x0004f2da) level_2_zoom

0x2de7,	// (0x0004f2e3) level_3_zoom

0x2df0,	// (0x0004f2ec) level_4_zoom

0x2df9,	// (0x0004f2f5) level_5_zoom

0x2e02,	// (0x0004f2fe) level_6_zoom

0x2e0b,	// (0x0004f307) level_7_zoom

0x2e14,	// (0x0004f310) level_8_zoom

0x2e1d,	// (0x0004f319) level_9_zoom

0x2e2e,	// (0x0004f32a) popup_phob_thumbnail_window_g1

0x2e36,	// (0x0004f332) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0005b930) popup_phob_thumbnail_window_g

0x4155,	// (0x00050651) level_1_location

0x415d,	// (0x00050659) level_2_location

0x4165,	// (0x00050661) level_3_location

0x416d,	// (0x00050669) level_4_location

0x2d7f,	// (0x0004f27b) level_5_location

0x8050,	// (0x0005454c) mce_icon_pane_g1

0x8058,	// (0x00054554) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0005b935) mce_icon_pane_g

0x8060,	// (0x0005455c) main_mup_pane_g1_ParamLimits

0x8060,	// (0x0005455c) main_mup_pane_g1

0x8078,	// (0x00054574) main_mup_pane_g2_ParamLimits

0x8078,	// (0x00054574) main_mup_pane_g2

0x8094,	// (0x00054590) main_mup_pane_g3_ParamLimits

0x8094,	// (0x00054590) main_mup_pane_g3

0x80b0,	// (0x000545ac) main_mup_pane_g4_ParamLimits

0x80b0,	// (0x000545ac) main_mup_pane_g4

0x80c4,	// (0x000545c0) main_mup_pane_g5_ParamLimits

0x80c4,	// (0x000545c0) main_mup_pane_g5

0x80e5,	// (0x000545e1) main_mup_pane_g6_ParamLimits

0x80e5,	// (0x000545e1) main_mup_pane_g6

0x8105,	// (0x00054601) main_mup_pane_g7_ParamLimits

0x8105,	// (0x00054601) main_mup_pane_g7

0x8129,	// (0x00054625) main_mup_pane_g8_ParamLimits

0x8129,	// (0x00054625) main_mup_pane_g8

0x814d,	// (0x00054649) main_mup_pane_g9_ParamLimits

0x814d,	// (0x00054649) main_mup_pane_g9

0x8170,	// (0x0005466c) main_mup_pane_g10_ParamLimits

0x8170,	// (0x0005466c) main_mup_pane_g10

0x8193,	// (0x0005468f) main_mup_pane_g11_ParamLimits

0x8193,	// (0x0005468f) main_mup_pane_g11

0x81b3,	// (0x000546af) main_mup_pane_g12_ParamLimits

0x81b3,	// (0x000546af) main_mup_pane_g12

0x81c1,	// (0x000546bd) main_mup_pane_g13_ParamLimits

0x81c1,	// (0x000546bd) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0005b93a) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0005b93a) main_mup_pane_g

0x81d7,	// (0x000546d3) main_mup_pane_t1_ParamLimits

0x81d7,	// (0x000546d3) main_mup_pane_t1

0x81f6,	// (0x000546f2) main_mup_pane_t2_ParamLimits

0x81f6,	// (0x000546f2) main_mup_pane_t2

0x8210,	// (0x0005470c) main_mup_pane_t3_ParamLimits

0x8210,	// (0x0005470c) main_mup_pane_t3

0x822a,	// (0x00054726) main_mup_pane_t4_ParamLimits

0x822a,	// (0x00054726) main_mup_pane_t4

0x823c,	// (0x00054738) main_mup_pane_t5_ParamLimits

0x823c,	// (0x00054738) main_mup_pane_t5

0x824e,	// (0x0005474a) main_mup_pane_t6_ParamLimits

0x824e,	// (0x0005474a) main_mup_pane_t6

0x0005,

0xf459,	// (0x0005b955) main_mup_pane_t_ParamLimits

0xf459,	// (0x0005b955) main_mup_pane_t

0x8264,	// (0x00054760) mup_progress_pane_ParamLimits

0x8264,	// (0x00054760) mup_progress_pane

0x8270,	// (0x0005476c) mup_visualizer_pane_ParamLimits

0x8270,	// (0x0005476c) mup_visualizer_pane

0x82ae,	// (0x000547aa) mup_volume_pane_ParamLimits

0x82ae,	// (0x000547aa) mup_volume_pane

0x2b76,	// (0x0004f072) mup_visualizer_pane_g1_ParamLimits

0x2b76,	// (0x0004f072) mup_visualizer_pane_g1

0x2b76,	// (0x0004f072) mup_visualizer_pane_g2_ParamLimits

0x2b76,	// (0x0004f072) mup_visualizer_pane_g2

0x2cb4,	// (0x0004f1b0) mup_visualizer_pane_g3_ParamLimits

0x2cb4,	// (0x0004f1b0) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0005b962) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0005b962) mup_visualizer_pane_g

0x2380,	// (0x0004e87c) mup_volume_pane_g1

0x2e46,	// (0x0004f342) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0005b969) mup_volume_pane_g

0x2380,	// (0x0004e87c) mup_progress_pane_g1

0x2e4f,	// (0x0004f34b) mup_progress_pane_g2

0x2e58,	// (0x0004f354) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0005b96e) mup_progress_pane_g

0x2005,	// (0x0004e501) bg_popup_window_pane_cp05

0x2e61,	// (0x0004f35d) heading_pane_cp02_ParamLimits

0x2e61,	// (0x0004f35d) heading_pane_cp02

0x2e7d,	// (0x0004f379) list_popup_blid_pane

0x2e85,	// (0x0004f381) list_blid_sat_info_pane_ParamLimits

0x2e85,	// (0x0004f381) list_blid_sat_info_pane

0x2e98,	// (0x0004f394) list_blid_sat_info_pane_g1

0x2ea0,	// (0x0004f39c) list_blid_sat_info_pane_t1

0x83cd,	// (0x000548c9) mup_equalizer_pane_ParamLimits

0x83cd,	// (0x000548c9) mup_equalizer_pane

0x83ee,	// (0x000548ea) mup_equalizer_pane_cp1_ParamLimits

0x83ee,	// (0x000548ea) mup_equalizer_pane_cp1

0x840f,	// (0x0005490b) mup_equalizer_pane_cp2_ParamLimits

0x840f,	// (0x0005490b) mup_equalizer_pane_cp2

0x8430,	// (0x0005492c) mup_equalizer_pane_cp3_ParamLimits

0x8430,	// (0x0005492c) mup_equalizer_pane_cp3

0x8455,	// (0x00054951) mup_equalizer_pane_cp4_ParamLimits

0x8455,	// (0x00054951) mup_equalizer_pane_cp4

0x847a,	// (0x00054976) mup_equalizer_pane_cp5

0x8492,	// (0x0005498e) mup_equalizer_pane_cp6

0x84aa,	// (0x000549a6) mup_equalizer_pane_cp7

0x406f,	// (0x0005056b) bg_popup_call_poc_act_pane_g9

0x4077,	// (0x00050573) bg_popup_call_poc_act_pane_g10

0x407f,	// (0x0005057b) bg_popup_call_poc_act_pane_g11

0x000a,

0x2260,	// (0x0004e75c) mup_scale_pane

0x2380,	// (0x0004e87c) mup_scale_pane_g1

0x2eae,	// (0x0004f3aa) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0005b98a) mup_scale_pane_g

0x2ed2,	// (0x0004f3ce) msg_data_pane

0x2eda,	// (0x0004f3d6) scroll_pane_cp017

0x84d4,	// (0x000549d0) bg_list_pane_cp04_ParamLimits

0x84d4,	// (0x000549d0) bg_list_pane_cp04

0x2ee2,	// (0x0004f3de) msg_data_pane_g1

0x84fa,	// (0x000549f6) msg_data_pane_g2

0x8504,	// (0x00054a00) msg_data_pane_g3

0x850e,	// (0x00054a0a) msg_data_pane_g4

0x8516,	// (0x00054a12) msg_data_pane_g5

0x851e,	// (0x00054a1a) msg_data_pane_g6

0x8526,	// (0x00054a22) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0005b999) msg_data_pane_g

0x852e,	// (0x00054a2a) msg_text_pane_ParamLimits

0x852e,	// (0x00054a2a) msg_text_pane

0x855f,	// (0x00054a5b) qrid_highlight_pane_cp011_ParamLimits

0x855f,	// (0x00054a5b) qrid_highlight_pane_cp011

0x2005,	// (0x0004e501) msg_body_pane

0x2005,	// (0x0004e501) msg_header_pane

0x2ef3,	// (0x0004f3ef) input_focus_pane_cp07

0x8583,	// (0x00054a7f) msg_header_pane_t1_ParamLimits

0x8583,	// (0x00054a7f) msg_header_pane_t1

0x8597,	// (0x00054a93) msg_header_pane_t2_ParamLimits

0x8597,	// (0x00054a93) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0005b9ad) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0005b9ad) msg_header_pane_t

0x2f08,	// (0x0004f404) msg_body_pane_g1

0x85a9,	// (0x00054aa5) msg_body_pane_t1_ParamLimits

0x85a9,	// (0x00054aa5) msg_body_pane_t1

0x85da,	// (0x00054ad6) msg_body_pane_t2_ParamLimits

0x85da,	// (0x00054ad6) msg_body_pane_t2

0x85ec,	// (0x00054ae8) msg_body_pane_t3_ParamLimits

0x85ec,	// (0x00054ae8) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0005b9b2) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0005b9b2) msg_body_pane_t

0x8650,	// (0x00054b4c) main_viewer_pane_g1_ParamLimits

0x8650,	// (0x00054b4c) main_viewer_pane_g1

0x865c,	// (0x00054b58) main_viewer_pane_g2_ParamLimits

0x865c,	// (0x00054b58) main_viewer_pane_g2

0x8668,	// (0x00054b64) main_viewer_pane_g3_ParamLimits

0x8668,	// (0x00054b64) main_viewer_pane_g3

0x8679,	// (0x00054b75) main_viewer_pane_g4_ParamLimits

0x8679,	// (0x00054b75) main_viewer_pane_g4

0x868a,	// (0x00054b86) main_viewer_pane_g5_ParamLimits

0x868a,	// (0x00054b86) main_viewer_pane_g5

0x868a,	// (0x00054b86) main_viewer_pane_g7_ParamLimits

0x868a,	// (0x00054b86) main_viewer_pane_g7

0x869c,	// (0x00054b98) main_viewer_pane_g8_ParamLimits

0x869c,	// (0x00054b98) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0005b9c2) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0005b9c2) main_viewer_pane_g

0x2f10,	// (0x0004f40c) viewer_content_pane_ParamLimits

0x2f10,	// (0x0004f40c) viewer_content_pane

0x86d4,	// (0x00054bd0) main_postcard_pane_g1_ParamLimits

0x86d4,	// (0x00054bd0) main_postcard_pane_g1

0x86e2,	// (0x00054bde) main_postcard_pane_g2_ParamLimits

0x86e2,	// (0x00054bde) main_postcard_pane_g2

0x86f0,	// (0x00054bec) main_postcard_pane_g3_ParamLimits

0x86f0,	// (0x00054bec) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0005b9d3) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0005b9d3) main_postcard_pane_g

0x8700,	// (0x00054bfc) main_postcard_pane_g4

0x428c,	// (0x00050788) smil_status_volume_pane_g2

0x872c,	// (0x00054c28) postcard_pane_ParamLimits

0x872c,	// (0x00054c28) postcard_pane

0x2b76,	// (0x0004f072) postcard_pane_g1_ParamLimits

0x2b76,	// (0x0004f072) postcard_pane_g1

0x8766,	// (0x00054c62) postcard_pane_g2_ParamLimits

0x8766,	// (0x00054c62) postcard_pane_g2

0x8772,	// (0x00054c6e) postcard_pane_g3_ParamLimits

0x8772,	// (0x00054c6e) postcard_pane_g3

0x2f1e,	// (0x0004f41a) postcard_pane_g4_ParamLimits

0x2f1e,	// (0x0004f41a) postcard_pane_g4

0x877e,	// (0x00054c7a) postcard_pane_g5_ParamLimits

0x877e,	// (0x00054c7a) postcard_pane_g5

0x878a,	// (0x00054c86) postcard_pane_g6_ParamLimits

0x878a,	// (0x00054c86) postcard_pane_g6

0x2f2c,	// (0x0004f428) postcard_pane_g7_ParamLimits

0x2f2c,	// (0x0004f428) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0005b9e0) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0005b9e0) postcard_pane_g

0x8798,	// (0x00054c94) main_mp2_pane_g1_ParamLimits

0x8798,	// (0x00054c94) main_mp2_pane_g1

0x87a6,	// (0x00054ca2) main_mp2_pane_g2_ParamLimits

0x87a6,	// (0x00054ca2) main_mp2_pane_g2

0x87b2,	// (0x00054cae) main_mp2_pane_g3_ParamLimits

0x87b2,	// (0x00054cae) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0005b9ef) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0005b9ef) main_mp2_pane_g

0x87be,	// (0x00054cba) main_mp2_pane_t1_ParamLimits

0x87be,	// (0x00054cba) main_mp2_pane_t1

0x87d5,	// (0x00054cd1) main_mp2_pane_t2_ParamLimits

0x87d5,	// (0x00054cd1) main_mp2_pane_t2

0x87e9,	// (0x00054ce5) main_mp2_pane_t3_ParamLimits

0x87e9,	// (0x00054ce5) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0005b9f6) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0005b9f6) main_mp2_pane_t

0x2f3a,	// (0x0004f436) pec_content_pane_ParamLimits

0x2f3a,	// (0x0004f436) pec_content_pane

0x2685,	// (0x0004eb81) scroll_pane_cp015

0x2f4c,	// (0x0004f448) pec_attribute_pane_ParamLimits

0x2f4c,	// (0x0004f448) pec_attribute_pane

0x87fb,	// (0x00054cf7) pec_content_pane_g1_ParamLimits

0x87fb,	// (0x00054cf7) pec_content_pane_g1

0x2f5c,	// (0x0004f458) pec_content_pane_t1_ParamLimits

0x2f5c,	// (0x0004f458) pec_content_pane_t1

0x2f6e,	// (0x0004f46a) pec_content_pane_t2_ParamLimits

0x2f6e,	// (0x0004f46a) pec_content_pane_t2

0x0001,

0xf501,	// (0x0005b9fd) pec_content_pane_t_ParamLimits

0xf501,	// (0x0005b9fd) pec_content_pane_t

0x8807,	// (0x00054d03) list_single_graphic_pane_cp01_ParamLimits

0x8807,	// (0x00054d03) list_single_graphic_pane_cp01

0x2260,	// (0x0004e75c) bg_popup_sub_pane_cp04

0x2f80,	// (0x0004f47c) popup_mup_playback_window_g1

0x2f8c,	// (0x0004f488) popup_mup_playback_window_t1

0x2fa1,	// (0x0004f49d) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0005ba02) popup_mup_playback_window_t

0x2fd8,	// (0x0004f4d4) main_image_pane_g1_ParamLimits

0x2fd8,	// (0x0004f4d4) main_image_pane_g1

0x301b,	// (0x0004f517) scroll_pane_cp018_ParamLimits

0x301b,	// (0x0004f517) scroll_pane_cp018

0x3033,	// (0x0004f52f) scroll_pane_cp016_ParamLimits

0x3033,	// (0x0004f52f) scroll_pane_cp016

0x8898,	// (0x00054d94) smil2_image_pane_ParamLimits

0x8898,	// (0x00054d94) smil2_image_pane

0x88ce,	// (0x00054dca) smil2_root_pane_ParamLimits

0x88ce,	// (0x00054dca) smil2_root_pane

0x88fa,	// (0x00054df6) smil2_text_pane_ParamLimits

0x88fa,	// (0x00054df6) smil2_text_pane

0x2005,	// (0x0004e501) bg_list_pane_cp06

0x306f,	// (0x0004f56b) grid_radio_pane

0x2005,	// (0x0004e501) bg_popup_window_pane_cp06

0x3079,	// (0x0004f575) main_fmradio_pane_t1

0x2b23,	// (0x0004f01f) heading_pane_cp04

0x3087,	// (0x0004f583) main_fmradio_pane_t2

0x4087,	// (0x00050583) popup_cale_lunar_info_window_g1

0x3095,	// (0x0004f591) main_fmradio_pane_t3

0x408f,	// (0x0005058b) popup_cale_lunar_info_window_g2

0x30a5,	// (0x0004f5a1) main_fmradio_pane_t4

0x0001,

0x30b3,	// (0x0004f5af) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0005badd) popup_cale_lunar_info_window_g

0xf51b,	// (0x0005ba17) main_fmradio_pane_t

0x30c1,	// (0x0004f5bd) wait_bar_pane_cp03

0x30c9,	// (0x0004f5c5) cell_fmradio_pane_ParamLimits

0x30c9,	// (0x0004f5c5) cell_fmradio_pane

0x2f2c,	// (0x0004f428) cell_fmradio_pane_g1_ParamLimits

0x2f2c,	// (0x0004f428) cell_fmradio_pane_g1

0x2005,	// (0x0004e501) grid_highlight_pane_cp011

0x30de,	// (0x0004f5da) poc_content_pane_ParamLimits

0x30de,	// (0x0004f5da) poc_content_pane

0x30f0,	// (0x0004f5ec) scroll_pane_cp019

0x893a,	// (0x00054e36) popup_call_poc_act_window_ParamLimits

0x893a,	// (0x00054e36) popup_call_poc_act_window

0x8947,	// (0x00054e43) popup_call_poc_inact_window_ParamLimits

0x8947,	// (0x00054e43) popup_call_poc_inact_window

0xf5b8,	// (0x0005bab4) bg_popup_call_poc_act_pane_g

0x3fff,	// (0x000504fb) bg_popup_call_poc_inact_pane_g1

0x4007,	// (0x00050503) bg_popup_call_poc_inact_pane_g2

0x30f8,	// (0x0004f5f4) popup_call_poc_act_window_g2

0x400f,	// (0x0005050b) bg_popup_call_poc_inact_pane_g3

0x4017,	// (0x00050513) bg_popup_call_poc_inact_pane_g4

0x401f,	// (0x0005051b) bg_popup_call_poc_inact_pane_g5

0x3100,	// (0x0004f5fc) popup_call_poc_act_window_t1_ParamLimits

0x3100,	// (0x0004f5fc) popup_call_poc_act_window_t1

0x3128,	// (0x0004f624) popup_call_poc_act_window_t2_ParamLimits

0x3128,	// (0x0004f624) popup_call_poc_act_window_t2

0x3150,	// (0x0004f64c) popup_call_poc_act_window_t3_ParamLimits

0x3150,	// (0x0004f64c) popup_call_poc_act_window_t3

0x3178,	// (0x0004f674) popup_call_poc_act_window_t4_ParamLimits

0x3178,	// (0x0004f674) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0005ba22) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0005ba22) popup_call_poc_act_window_t

0x4027,	// (0x00050523) bg_popup_call_poc_inact_pane_g6

0x402f,	// (0x0005052b) bg_popup_call_poc_inact_pane_g7

0x4037,	// (0x00050533) bg_popup_call_poc_inact_pane_g8

0x318a,	// (0x0004f686) popup_call_poc_inact_window_g2

0x403f,	// (0x0005053b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0005baa1) bg_popup_call_poc_inact_pane_g

0x3192,	// (0x0004f68e) popup_call_poc_inact_window_t1_ParamLimits

0x3192,	// (0x0004f68e) popup_call_poc_inact_window_t1

0x31a7,	// (0x0004f6a3) popup_call_poc_inact_window_t2_ParamLimits

0x31a7,	// (0x0004f6a3) popup_call_poc_inact_window_t2

0x31bc,	// (0x0004f6b8) popup_call_poc_inact_window_t3_ParamLimits

0x31bc,	// (0x0004f6b8) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0005ba2b) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0005ba2b) popup_call_poc_inact_window_t

0x41ff,	// (0x000506fb) context_pane_ParamLimits

0x8f59,	// (0x00055455) signal_pane_ParamLimits

0x2d7f,	// (0x0004f27b) main_call2_pane

0x41ed,	// (0x000506e9) popup_phob_thumbnail2_window_ParamLimits

0x41ed,	// (0x000506e9) popup_phob_thumbnail2_window

0x85fe,	// (0x00054afa) aid_hotspot_pointer_arrow_pane

0x8606,	// (0x00054b02) aid_hotspot_pointer_hand_pane

0x8c6f,	// (0x0005516b) phob_pre_status_pane_g5

0x69ac,	// (0x00052ea8) cams_zoom_pane_ParamLimits

0x69b8,	// (0x00052eb4) image_vga_pane_ParamLimits

0x69c7,	// (0x00052ec3) main_camera_pane_g1_ParamLimits

0x69d5,	// (0x00052ed1) main_camera_pane_g2_ParamLimits

0x69e1,	// (0x00052edd) main_camera_pane_g3_ParamLimits

0x69ef,	// (0x00052eeb) main_camera_pane_g4_ParamLimits

0x69fd,	// (0x00052ef9) main_camera_pane_g5_ParamLimits

0x6a0b,	// (0x00052f07) main_camera_pane_g6_ParamLimits

0x6a19,	// (0x00052f15) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0005b72a) main_camera_pane_g_ParamLimits

0x6a27,	// (0x00052f23) main_camera_pane_t1_ParamLimits

0x6a39,	// (0x00052f35) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0005b73b) main_camera_pane_t_ParamLimits

0x2260,	// (0x0004e75c) bg_popup_preview_window_pane_cp01_ParamLimits

0x2260,	// (0x0004e75c) bg_popup_preview_window_pane_cp01

0x31d1,	// (0x0004f6cd) popup_phob_thumbnail2_window_g1_ParamLimits

0x31d1,	// (0x0004f6cd) popup_phob_thumbnail2_window_g1

0x2005,	// (0x0004e501) call2_cli_visual_pane

0x8963,	// (0x00054e5f) popup_call2_audio_conf_window_ParamLimits

0x8963,	// (0x00054e5f) popup_call2_audio_conf_window

0x897c,	// (0x00054e78) popup_call2_audio_first_window_ParamLimits

0x897c,	// (0x00054e78) popup_call2_audio_first_window

0x8a1a,	// (0x00054f16) popup_call2_audio_in_window_ParamLimits

0x8a1a,	// (0x00054f16) popup_call2_audio_in_window

0x8a5e,	// (0x00054f5a) popup_call2_audio_out_window_ParamLimits

0x8a5e,	// (0x00054f5a) popup_call2_audio_out_window

0x8ac8,	// (0x00054fc4) popup_call2_audio_second_window_ParamLimits

0x8ac8,	// (0x00054fc4) popup_call2_audio_second_window

0x8b26,	// (0x00055022) popup_call2_audio_wait_window_ParamLimits

0x8b26,	// (0x00055022) popup_call2_audio_wait_window

0x2005,	// (0x0004e501) bg_popup_call2_act_pane_cp03

0x2242,	// (0x0004e73e) list_conf_pane_cp

0x31dd,	// (0x0004f6d9) popup_call2_audio_conf_window_t1

0x31eb,	// (0x0004f6e7) list_single_graphic_popup_conf2_pane_ParamLimits

0x31eb,	// (0x0004f6e7) list_single_graphic_popup_conf2_pane

0x2ba0,	// (0x0004f09c) list_highlight_pane_cp04

0x31fe,	// (0x0004f6fa) list_single_graphic_popup_conf2_pane_g1

0x2bb1,	// (0x0004f0ad) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0005ba32) list_single_graphic_popup_conf2_pane_g

0x3208,	// (0x0004f704) list_single_graphic_popup_conf2_pane_t1

0x3216,	// (0x0004f712) bg_popup_call2_act_pane_cp01_ParamLimits

0x3216,	// (0x0004f712) bg_popup_call2_act_pane_cp01

0x32a0,	// (0x0004f79c) call_type_pane_cp05_ParamLimits

0x32a0,	// (0x0004f79c) call_type_pane_cp05

0x3300,	// (0x0004f7fc) popup_call2_audio_second_window_g1_ParamLimits

0x3300,	// (0x0004f7fc) popup_call2_audio_second_window_g1

0x3354,	// (0x0004f850) popup_call2_audio_second_window_g2_ParamLimits

0x3354,	// (0x0004f850) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0005ba37) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0005ba37) popup_call2_audio_second_window_g

0x33b9,	// (0x0004f8b5) popup_call2_audio_second_window_t1_ParamLimits

0x33b9,	// (0x0004f8b5) popup_call2_audio_second_window_t1

0x3474,	// (0x0004f970) popup_call2_audio_second_window_t2_ParamLimits

0x3474,	// (0x0004f970) popup_call2_audio_second_window_t2

0x34c7,	// (0x0004f9c3) popup_call2_audio_second_window_t3_ParamLimits

0x34c7,	// (0x0004f9c3) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0005ba3e) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0005ba3e) popup_call2_audio_second_window_t

0x2005,	// (0x0004e501) bg_popup_call2_in_pane_cp02

0x200f,	// (0x0004e50b) call_type_pane_cp04

0x2017,	// (0x0004e513) popup_call2_audio_wait_window_g1

0x201f,	// (0x0004e51b) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005b617) popup_call2_audio_wait_window_g

0x2027,	// (0x0004e523) popup_call2_audio_wait_window_t3

0x35ba,	// (0x0004fab6) bg_popup_call2_act_pane_ParamLimits

0x35ba,	// (0x0004fab6) bg_popup_call2_act_pane

0x367a,	// (0x0004fb76) call_type_pane_cp03_ParamLimits

0x367a,	// (0x0004fb76) call_type_pane_cp03

0x36f6,	// (0x0004fbf2) popup_call2_audio_first_window_g1_ParamLimits

0x36f6,	// (0x0004fbf2) popup_call2_audio_first_window_g1

0x3766,	// (0x0004fc62) popup_call2_audio_first_window_g2_ParamLimits

0x3766,	// (0x0004fc62) popup_call2_audio_first_window_g2

0x2b76,	// (0x0004f072) popup_call2_audio_first_window_g3_ParamLimits

0x2b76,	// (0x0004f072) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0005ba47) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0005ba47) popup_call2_audio_first_window_g

0x3844,	// (0x0004fd40) popup_call2_audio_first_window_t1_ParamLimits

0x3844,	// (0x0004fd40) popup_call2_audio_first_window_t1

0x3947,	// (0x0004fe43) popup_call2_audio_first_window_t4_ParamLimits

0x3947,	// (0x0004fe43) popup_call2_audio_first_window_t4

0x3a2a,	// (0x0004ff26) popup_call2_audio_first_window_t5_ParamLimits

0x3a2a,	// (0x0004ff26) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0005ba52) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0005ba52) popup_call2_audio_first_window_t

0x2258,	// (0x0004e754) bg_popup_call2_act_pane_g1

0x4099,	// (0x00050595) popup_cale_lunar_info_window_t1

0x40a7,	// (0x000505a3) popup_cale_lunar_info_window_t2

0x40b5,	// (0x000505b1) popup_cale_lunar_info_window_t3

0x2005,	// (0x0004e501) bg_popup_call2_bubble_pane

0x3b2b,	// (0x00050027) bg_popup_call2_in_pane_cp01_ParamLimits

0x3b2b,	// (0x00050027) bg_popup_call2_in_pane_cp01

0x1ce1,	// (0x0004e1dd) call_type_pane_cp02

0x3b73,	// (0x0005006f) popup_call2_audio_out_window_g1_ParamLimits

0x3b73,	// (0x0005006f) popup_call2_audio_out_window_g1

0x3b9f,	// (0x0005009b) popup_call2_audio_out_window_g2_ParamLimits

0x3b9f,	// (0x0005009b) popup_call2_audio_out_window_g2

0x3bc7,	// (0x000500c3) popup_call2_audio_out_window_g3_ParamLimits

0x3bc7,	// (0x000500c3) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0005ba5b) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0005ba5b) popup_call2_audio_out_window_g

0x3c02,	// (0x000500fe) popup_call2_audio_out_window_t1_ParamLimits

0x3c02,	// (0x000500fe) popup_call2_audio_out_window_t1

0x3c61,	// (0x0005015d) popup_call2_audio_out_window_t2_ParamLimits

0x3c61,	// (0x0005015d) popup_call2_audio_out_window_t2

0x3cb5,	// (0x000501b1) popup_call2_audio_out_window_t3_ParamLimits

0x3cb5,	// (0x000501b1) popup_call2_audio_out_window_t3

0x3ccb,	// (0x000501c7) popup_call2_audio_out_window_t4_ParamLimits

0x3ccb,	// (0x000501c7) popup_call2_audio_out_window_t4

0x3ce1,	// (0x000501dd) popup_call2_audio_out_window_t5_ParamLimits

0x3ce1,	// (0x000501dd) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0005ba64) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0005ba64) popup_call2_audio_out_window_t

0x3d45,	// (0x00050241) bg_popup_call2_in_pane_ParamLimits

0x3d45,	// (0x00050241) bg_popup_call2_in_pane

0x3da1,	// (0x0005029d) popup_call2_audio_in_window_g1_ParamLimits

0x3da1,	// (0x0005029d) popup_call2_audio_in_window_g1

0x3dd9,	// (0x000502d5) popup_call2_audio_in_window_g2_ParamLimits

0x3dd9,	// (0x000502d5) popup_call2_audio_in_window_g2

0x3e11,	// (0x0005030d) popup_call2_audio_in_window_g3_ParamLimits

0x3e11,	// (0x0005030d) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0005ba71) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0005ba71) popup_call2_audio_in_window_g

0x3e69,	// (0x00050365) popup_call2_audio_in_window_t1_ParamLimits

0x3e69,	// (0x00050365) popup_call2_audio_in_window_t1

0x3ee9,	// (0x000503e5) popup_call2_audio_in_window_t2_ParamLimits

0x3ee9,	// (0x000503e5) popup_call2_audio_in_window_t2

0x3f69,	// (0x00050465) popup_call2_audio_in_window_t3_ParamLimits

0x3f69,	// (0x00050465) popup_call2_audio_in_window_t3

0x3f83,	// (0x0005047f) popup_call2_audio_in_window_t4_ParamLimits

0x3f83,	// (0x0005047f) popup_call2_audio_in_window_t4

0x3f95,	// (0x00050491) popup_call2_audio_in_window_t5_ParamLimits

0x3f95,	// (0x00050491) popup_call2_audio_in_window_t5

0x3faa,	// (0x000504a6) popup_call2_audio_in_window_t6_ParamLimits

0x3faa,	// (0x000504a6) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0005ba7a) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0005ba7a) popup_call2_audio_in_window_t

0x2258,	// (0x0004e754) bg_popup_call2_in_pane_g1

0x40c3,	// (0x000505bf) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0005bae2) popup_cale_lunar_info_window_t

0x2260,	// (0x0004e75c) bg_popup_call2_rect_pane_ParamLimits

0x2260,	// (0x0004e75c) bg_popup_call2_rect_pane

0x2005,	// (0x0004e501) call2_cli_visual_graphic_pane

0x2005,	// (0x0004e501) call2_cli_visual_text_pane

0x8fde,	// (0x000554da) smil_status_volume_pane_g3

0x0002,

0x2380,	// (0x0004e87c) call2_cli_visual_graphic_pane_g1

0x2380,	// (0x0004e87c) call2_cli_visual_graphic_pane_g2

0x2380,	// (0x0004e87c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0005ba87) call2_cli_visual_graphic_pane_g

0x3fbf,	// (0x000504bb) bg_popup_call2_rect_pane_g1

0x241e,	// (0x0004e91a) bg_popup_call2_rect_pane_g2

0x3fc7,	// (0x000504c3) bg_popup_call2_rect_pane_g3

0x3fcf,	// (0x000504cb) bg_popup_call2_rect_pane_g4

0x3fd7,	// (0x000504d3) bg_popup_call2_rect_pane_g5

0x3fdf,	// (0x000504db) bg_popup_call2_rect_pane_g6

0x3fe7,	// (0x000504e3) bg_popup_call2_rect_pane_g7

0x3fef,	// (0x000504eb) bg_popup_call2_rect_pane_g8

0x3ff7,	// (0x000504f3) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0005ba8e) bg_popup_call2_rect_pane_g

0x3fff,	// (0x000504fb) bg_popup_call2_bubble_pane_g1

0x4007,	// (0x00050503) bg_popup_call2_bubble_pane_g2

0x400f,	// (0x0005050b) bg_popup_call2_bubble_pane_g3

0x4017,	// (0x00050513) bg_popup_call2_bubble_pane_g4

0x401f,	// (0x0005051b) bg_popup_call2_bubble_pane_g5

0x4027,	// (0x00050523) bg_popup_call2_bubble_pane_g6

0x402f,	// (0x0005052b) bg_popup_call2_bubble_pane_g7

0x4037,	// (0x00050533) bg_popup_call2_bubble_pane_g8

0x403f,	// (0x0005053b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0005baa1) bg_popup_call2_bubble_pane_g

0x6443,	// (0x0005293f) aid_cale_week_size_cell_pane

0x6a4d,	// (0x00052f49) aid_cams_cif_uncrop_pane_ParamLimits

0x6a4d,	// (0x00052f49) aid_cams_cif_uncrop_pane

0x6baa,	// (0x000530a6) aid_cams_size_cell_ParamLimits

0x6baa,	// (0x000530a6) aid_cams_size_cell

0x6bb6,	// (0x000530b2) grid_cams_pane_ParamLimits

0x6bc4,	// (0x000530c0) linegrid_cams_pane_ParamLimits

0x6cf0,	// (0x000531ec) call_video_pane_t1

0x6d0d,	// (0x00053209) call_video_pane_t2

0x0001,

0xf292,	// (0x0005b78e) call_video_pane_t

0x71e8,	// (0x000536e4) aid_cale_month_size_cell_pane_ParamLimits

0x71e8,	// (0x000536e4) aid_cale_month_size_cell_pane

0xf62f,	// (0x0005bb2b) smil_status_volume_pane_g

0x8feb,	// (0x000554e7) volume_smil_pane_ParamLimits

0x03e1,	// (0x0004c8dd) aid_popup2_width_pane

0x635f,	// (0x0005285b) cell_qdial_pane_g4_ParamLimits

0x635f,	// (0x0005285b) cell_qdial_pane_g4

0x7ea9,	// (0x000543a5) aid_blid_cardinal_pane_ParamLimits

0x7eb9,	// (0x000543b5) aid_blid_destination_pane_ParamLimits

0x7eb9,	// (0x000543b5) aid_blid_destination_pane

0x2260,	// (0x0004e75c) bg_popup_call_poc_act_pane_ParamLimits

0x2260,	// (0x0004e75c) bg_popup_call_poc_act_pane

0x2260,	// (0x0004e75c) bg_popup_call_poc_inact_pane_ParamLimits

0x2260,	// (0x0004e75c) bg_popup_call_poc_inact_pane

0x4047,	// (0x00050543) bg_popup_call_poc_act_pane_g1

0x404f,	// (0x0005054b) bg_popup_call_poc_act_pane_g2

0x4057,	// (0x00050553) bg_popup_call_poc_act_pane_g3

0x4017,	// (0x00050513) bg_popup_call_poc_act_pane_g4

0x401f,	// (0x0005051b) bg_popup_call_poc_act_pane_g5

0x405f,	// (0x0005055b) bg_popup_call_poc_act_pane_g6

0x402f,	// (0x0005052b) bg_popup_call_poc_act_pane_g7

0x4067,	// (0x00050563) bg_popup_call_poc_act_pane_g8

0x2005,	// (0x0004e501) main_usb_pane

0x41c4,	// (0x000506c0) popup_cale_lunar_info_window

0x7025,	// (0x00053521) im_reading_pane_t1_ParamLimits

0x25dd,	// (0x0004ead9) list_im_pane_ParamLimits

0x25ee,	// (0x0004eaea) scroll_pane_cp07_ParamLimits

0x2005,	// (0x0004e501) grid_highlight_pane_cp012

0x2260,	// (0x0004e75c) mup_scale_pane_ParamLimits

0x2b76,	// (0x0004f072) main_usb_pane_g1_ParamLimits

0x2b76,	// (0x0004f072) main_usb_pane_g1

0x8b92,	// (0x0005508e) main_usb_pane_g2_ParamLimits

0x8b92,	// (0x0005508e) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0005bacb) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0005bacb) main_usb_pane_g

0x8b9e,	// (0x0005509a) main_usb_pane_t1_ParamLimits

0x8b9e,	// (0x0005509a) main_usb_pane_t1

0x8bb0,	// (0x000550ac) main_usb_pane_t2_ParamLimits

0x8bb0,	// (0x000550ac) main_usb_pane_t2

0x8bc2,	// (0x000550be) main_usb_pane_t3_ParamLimits

0x8bc2,	// (0x000550be) main_usb_pane_t3

0x8bd4,	// (0x000550d0) main_usb_pane_t4_ParamLimits

0x8bd4,	// (0x000550d0) main_usb_pane_t4

0x8be6,	// (0x000550e2) main_usb_pane_t5_ParamLimits

0x8be6,	// (0x000550e2) main_usb_pane_t5

0x8bf8,	// (0x000550f4) main_usb_pane_t6_ParamLimits

0x8bf8,	// (0x000550f4) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0005bad0) main_usb_pane_t_ParamLimits

0x7e64,	// (0x00054360) aid_text_placing

0x7e6f,	// (0x0005436b) main_location2_pane_t1_ParamLimits

0x7e83,	// (0x0005437f) main_location2_pane_t2_ParamLimits

0x7e83,	// (0x0005437f) main_location2_pane_t3_ParamLimits

0x7e97,	// (0x00054393) main_location2_pane_t4_ParamLimits

0x7e97,	// (0x00054393) main_location2_pane_t4

0xf3f3,	// (0x0005b8ef) main_location2_pane_t_ParamLimits

0x229c,	// (0x0004e798) find_pinb_pane_g2_ParamLimits

0x229c,	// (0x0004e798) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0005b63d) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0005b63d) find_pinb_pane_g

0x22a8,	// (0x0004e7a4) find_pinb_pane_t1_ParamLimits

0x22ba,	// (0x0004e7b6) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0005b642) find_pinb_pane_t_ParamLimits

0x2005,	// (0x0004e501) main_call3_pane

0x7544,	// (0x00053a40) cale_month_day_heading_pane_t1_ParamLimits

0x75a2,	// (0x00053a9e) cale_month_day_heading_pane_t2_ParamLimits

0x7607,	// (0x00053b03) cale_month_day_heading_pane_t3_ParamLimits

0x766c,	// (0x00053b68) cale_month_day_heading_pane_t4_ParamLimits

0x76d1,	// (0x00053bcd) cale_month_day_heading_pane_t5_ParamLimits

0x773e,	// (0x00053c3a) cale_month_day_heading_pane_t6_ParamLimits

0x77b3,	// (0x00053caf) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0005b7c6) cale_month_day_heading_pane_t_ParamLimits

0x282e,	// (0x0004ed2a) smil_status_volume_pane

0x874a,	// (0x00054c46) postcard_address_pane_ParamLimits

0x874a,	// (0x00054c46) postcard_address_pane

0x8758,	// (0x00054c54) postcard_message_pane_ParamLimits

0x8758,	// (0x00054c54) postcard_message_pane

0x8b65,	// (0x00055061) call2_cli_visual_pane_t1_ParamLimits

0x8b65,	// (0x00055061) call2_cli_visual_pane_t1

0x9131,	// (0x0005562d) postcard_message_pane_t1_ParamLimits

0x9131,	// (0x0005562d) postcard_message_pane_t1

0x42b2,	// (0x000507ae) postcard_address_pane_t1_ParamLimits

0x42b2,	// (0x000507ae) postcard_address_pane_t1

0x9122,	// (0x0005561e) popup_call3_audio_in_window_ParamLimits

0x9122,	// (0x0005561e) popup_call3_audio_in_window

0x9000,	// (0x000554fc) bg_popup_call3_in_pane_ParamLimits

0x9000,	// (0x000554fc) bg_popup_call3_in_pane

0x9068,	// (0x00055564) popup_call3_audio_in_window_g1_ParamLimits

0x9068,	// (0x00055564) popup_call3_audio_in_window_g1

0x9080,	// (0x0005557c) popup_call3_audio_in_window_g2_ParamLimits

0x9080,	// (0x0005557c) popup_call3_audio_in_window_g2

0x9098,	// (0x00055594) popup_call3_audio_in_window_g3_ParamLimits

0x9098,	// (0x00055594) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0005bb32) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0005bb32) popup_call3_audio_in_window_g

0x90c0,	// (0x000555bc) popup_call3_audio_in_window_t1_ParamLimits

0x90c0,	// (0x000555bc) popup_call3_audio_in_window_t1

0x90e8,	// (0x000555e4) popup_call3_audio_in_window_t2_ParamLimits

0x90e8,	// (0x000555e4) popup_call3_audio_in_window_t2

0x9110,	// (0x0005560c) popup_call3_audio_in_window_t3_ParamLimits

0x9110,	// (0x0005560c) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0005bb3b) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0005bb3b) popup_call3_audio_in_window_t

0x2d7f,	// (0x0004f27b) bg_popup_call3_rect_pane

0x3fbf,	// (0x000504bb) bg_popup_call3_rect_pane_g1

0x241e,	// (0x0004e91a) bg_popup_call3_rect_pane_g2

0x3fc7,	// (0x000504c3) bg_popup_call3_rect_pane_g3

0x3fcf,	// (0x000504cb) bg_popup_call3_rect_pane_g4

0x3fd7,	// (0x000504d3) bg_popup_call3_rect_pane_g5

0x3fdf,	// (0x000504db) bg_popup_call3_rect_pane_g6

0x3fe7,	// (0x000504e3) bg_popup_call3_rect_pane_g7

0x82c9,	// (0x000547c5) mup_visualizer_osc_pane

0x2e3e,	// (0x0004f33a) mup_visualizer_spec_pane

0x9020,	// (0x0005551c) call3_video_qcif_pane_ParamLimits

0x9020,	// (0x0005551c) call3_video_qcif_pane

0x9032,	// (0x0005552e) call3_video_qcif_uncrop_pane_ParamLimits

0x9032,	// (0x0005552e) call3_video_qcif_uncrop_pane

0x9042,	// (0x0005553e) call3_video_subqcif_pane_ParamLimits

0x9042,	// (0x0005553e) call3_video_subqcif_pane

0x9056,	// (0x00055552) call3_video_subqcif_uncrop_pane_ParamLimits

0x9056,	// (0x00055552) call3_video_subqcif_uncrop_pane

0x90b0,	// (0x000555ac) popup_call3_audio_in_window_g4_ParamLimits

0x90b0,	// (0x000555ac) popup_call3_audio_in_window_g4

0x8fcd,	// (0x000554c9) mup_spec_half_pane

0x8fd6,	// (0x000554d2) mup_spec_half_pane_cp

0x4272,	// (0x0005076e) mup_osc_middle_pane

0x427b,	// (0x00050777) mup_visualizer_osc_pane_g1

0x8fad,	// (0x000554a9) mup_spec_bar_pane_ParamLimits

0x8fad,	// (0x000554a9) mup_spec_bar_pane

0x425f,	// (0x0005075b) mup_spec_bar_pane_g1

0x4269,	// (0x00050765) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0005bb26) mup_spec_bar_pane_g

0x6443,	// (0x0005293f) aid_cale_week_size_cell_pane_ParamLimits

0x6456,	// (0x00052952) bg_cale_heading_pane_ParamLimits

0x2452,	// (0x0004e94e) bg_cale_pane_cp01_ParamLimits

0x646a,	// (0x00052966) cale_week_corner_pane_ParamLimits

0x6480,	// (0x0005297c) cale_week_day_heading_pane_ParamLimits

0x6494,	// (0x00052990) cale_week_scroll_pane_g1_ParamLimits

0x64a5,	// (0x000529a1) cale_week_scroll_pane_g2_ParamLimits

0x64b6,	// (0x000529b2) cale_week_scroll_pane_g3_ParamLimits

0x64c7,	// (0x000529c3) cale_week_scroll_pane_g4_ParamLimits

0x64d8,	// (0x000529d4) cale_week_scroll_pane_g5_ParamLimits

0x64e9,	// (0x000529e5) cale_week_scroll_pane_g6_ParamLimits

0x64fc,	// (0x000529f8) cale_week_scroll_pane_g7_ParamLimits

0x650f,	// (0x00052a0b) cale_week_scroll_pane_g8_ParamLimits

0x6522,	// (0x00052a1e) cale_week_scroll_pane_g9_ParamLimits

0x6533,	// (0x00052a2f) cale_week_scroll_pane_g10_ParamLimits

0x6544,	// (0x00052a40) cale_week_scroll_pane_g11_ParamLimits

0x6555,	// (0x00052a51) cale_week_scroll_pane_g12_ParamLimits

0x6566,	// (0x00052a62) cale_week_scroll_pane_g13_ParamLimits

0x6577,	// (0x00052a73) cale_week_scroll_pane_g14_ParamLimits

0x6588,	// (0x00052a84) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0005b6ce) cale_week_scroll_pane_g_ParamLimits

0x6599,	// (0x00052a95) cale_week_time_pane_ParamLimits

0x65ac,	// (0x00052aa8) grid_cale_week_pane_ParamLimits

0x246b,	// (0x0004e967) listscroll_cale_week_pane_t1

0x65c1,	// (0x00052abd) scroll_pane_cp08_ParamLimits

0x7229,	// (0x00053725) cale_month_corner_pane_ParamLimits

0x2804,	// (0x0004ed00) cale_month_pane_t1

0x7503,	// (0x000539ff) cale_month_week_pane_ParamLimits

0x2b76,	// (0x0004f072) popup_call_status_window_g1_ParamLimits

0x7c76,	// (0x00054172) popup_call_status_window_g2_ParamLimits

0x7c82,	// (0x0005417e) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0005b876) popup_call_status_window_g_ParamLimits

0x2b1b,	// (0x0004f017) aid_call2_pane

0x8575,	// (0x00054a71) msg_header_pane_g1

0x874a,	// (0x00054c46) postcard_address2_pane_ParamLimits

0x874a,	// (0x00054c46) postcard_address2_pane

0x8758,	// (0x00054c54) postcard_message2_pane_ParamLimits

0x8758,	// (0x00054c54) postcard_message2_pane

0x8f67,	// (0x00055463) message2_row_pane_ParamLimits

0x8f67,	// (0x00055463) message2_row_pane

0x421a,	// (0x00050716) address2_row_pane_ParamLimits

0x421a,	// (0x00050716) address2_row_pane

0x422d,	// (0x00050729) postcard_message2_row_pane_g1

0x4235,	// (0x00050731) postcard_message2_row_pane_t1

0x422d,	// (0x00050729) address2_row_pane_g1

0x4235,	// (0x00050731) address2_row_pane_t1

0x690b,	// (0x00052e07) aid_size_cell_vorec

0x2005,	// (0x0004e501) main_rss_pane

0x8f81,	// (0x0005547d) rss_list_single_pane_ParamLimits

0x8f81,	// (0x0005547d) rss_list_single_pane

0x4243,	// (0x0005073f) rss_list_single_pane_t1

0x4251,	// (0x0005074d) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0005bb21) rss_list_single_pane_t

0x2005,	// (0x0004e501) main_camera2_pane

0x2005,	// (0x0004e501) main_video2_pane

0x9195,	// (0x00055691) cams_zoom_pane_cp2_ParamLimits

0x9195,	// (0x00055691) cams_zoom_pane_cp2

0x91a1,	// (0x0005569d) image2_vga_pane_ParamLimits

0x91a1,	// (0x0005569d) image2_vga_pane

0x91b0,	// (0x000556ac) main_camera2_pane_g1_ParamLimits

0x91b0,	// (0x000556ac) main_camera2_pane_g1

0x91bc,	// (0x000556b8) main_camera2_pane_g2_ParamLimits

0x91bc,	// (0x000556b8) main_camera2_pane_g2

0x91c8,	// (0x000556c4) main_camera2_pane_g3_ParamLimits

0x91c8,	// (0x000556c4) main_camera2_pane_g3

0x91d4,	// (0x000556d0) main_camera2_pane_g4_ParamLimits

0x91d4,	// (0x000556d0) main_camera2_pane_g4

0x91e0,	// (0x000556dc) main_camera2_pane_g5_ParamLimits

0x91e0,	// (0x000556dc) main_camera2_pane_g5

0x91ec,	// (0x000556e8) main_camera2_pane_g6_ParamLimits

0x91ec,	// (0x000556e8) main_camera2_pane_g6

0x91f8,	// (0x000556f4) main_camera2_pane_g7_ParamLimits

0x91f8,	// (0x000556f4) main_camera2_pane_g7

0x9204,	// (0x00055700) main_camera2_pane_g8_ParamLimits

0x9204,	// (0x00055700) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0005bb42) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0005bb42) main_camera2_pane_g

0x921c,	// (0x00055718) main_camera2_pane_t1_ParamLimits

0x921c,	// (0x00055718) main_camera2_pane_t1

0x922e,	// (0x0005572a) main_camera2_pane_t2_ParamLimits

0x922e,	// (0x0005572a) main_camera2_pane_t2

0x9240,	// (0x0005573c) main_camera2_pane_t3_ParamLimits

0x9240,	// (0x0005573c) main_camera2_pane_t3

0x9252,	// (0x0005574e) main_camera2_pane_t4_ParamLimits

0x9252,	// (0x0005574e) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0005bb55) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0005bb55) main_camera2_pane_t

0x92af,	// (0x000557ab) cams_zoom_pane_cp4_ParamLimits

0x92af,	// (0x000557ab) cams_zoom_pane_cp4

0x92bf,	// (0x000557bb) image2_cif_pane_ParamLimits

0x92bf,	// (0x000557bb) image2_cif_pane

0x92d4,	// (0x000557d0) image2_subqcif_pane_ParamLimits

0x92d4,	// (0x000557d0) image2_subqcif_pane

0x92e3,	// (0x000557df) main_video2_pane_g1_ParamLimits

0x92e3,	// (0x000557df) main_video2_pane_g1

0x92f5,	// (0x000557f1) main_video2_pane_g2_ParamLimits

0x92f5,	// (0x000557f1) main_video2_pane_g2

0x9305,	// (0x00055801) main_video2_pane_g3_ParamLimits

0x9305,	// (0x00055801) main_video2_pane_g3

0x9315,	// (0x00055811) main_video2_pane_g4_ParamLimits

0x9315,	// (0x00055811) main_video2_pane_g4

0x9325,	// (0x00055821) main_video2_pane_g5_ParamLimits

0x9325,	// (0x00055821) main_video2_pane_g5

0x9335,	// (0x00055831) main_video2_pane_g6_ParamLimits

0x9335,	// (0x00055831) main_video2_pane_g6

0x0005,

0xf668,	// (0x0005bb64) main_video2_pane_g_ParamLimits

0xf668,	// (0x0005bb64) main_video2_pane_g

0x9347,	// (0x00055843) main_video2_pane_t1_ParamLimits

0x9347,	// (0x00055843) main_video2_pane_t1

0x9361,	// (0x0005585d) main_video2_pane_t2_ParamLimits

0x9361,	// (0x0005585d) main_video2_pane_t2

0x9387,	// (0x00055883) main_video2_pane_t3_ParamLimits

0x9387,	// (0x00055883) main_video2_pane_t3

0x0002,

0xf675,	// (0x0005bb71) main_video2_pane_t_ParamLimits

0xf675,	// (0x0005bb71) main_video2_pane_t

0x8caf,	// (0x000551ab) call_muted_g2

0x0001,

0xf617,	// (0x0005bb13) call_muted_g

0x2005,	// (0x0004e501) main_mup2_pane

0x42f7,	// (0x000507f3) main_mup2_pane_g1_ParamLimits

0x42f7,	// (0x000507f3) main_mup2_pane_g1

0x93ad,	// (0x000558a9) main_mup2_pane_g2_ParamLimits

0x93ad,	// (0x000558a9) main_mup2_pane_g2

0x963f,	// (0x00055b3b) main_mup_pane_g13_cp1

0x9647,	// (0x00055b43) mup_volume_pane_cp1

0x93cf,	// (0x000558cb) main_mup2_pane_g4_ParamLimits

0x93cf,	// (0x000558cb) main_mup2_pane_g4

0x93e4,	// (0x000558e0) main_mup2_pane_g5_ParamLimits

0x93e4,	// (0x000558e0) main_mup2_pane_g5

0x93f9,	// (0x000558f5) main_mup2_pane_g6_ParamLimits

0x93f9,	// (0x000558f5) main_mup2_pane_g6

0x940e,	// (0x0005590a) main_mup2_pane_g7_ParamLimits

0x940e,	// (0x0005590a) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0005bb78) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0005bb78) main_mup2_pane_g

0x942a,	// (0x00055926) main_mup2_pane_t1_ParamLimits

0x942a,	// (0x00055926) main_mup2_pane_t1

0x9441,	// (0x0005593d) main_mup2_pane_t2_ParamLimits

0x9441,	// (0x0005593d) main_mup2_pane_t2

0x9458,	// (0x00055954) main_mup2_pane_t3_ParamLimits

0x9458,	// (0x00055954) main_mup2_pane_t3

0x946f,	// (0x0005596b) main_mup2_pane_t4_ParamLimits

0x946f,	// (0x0005596b) main_mup2_pane_t4

0x9489,	// (0x00055985) main_mup2_pane_t5_ParamLimits

0x9489,	// (0x00055985) main_mup2_pane_t5

0x94a3,	// (0x0005599f) main_mup2_pane_t6_ParamLimits

0x94a3,	// (0x0005599f) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0005bb87) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0005bb87) main_mup2_pane_t

0x94db,	// (0x000559d7) mup2_visualizer_pane_ParamLimits

0x94db,	// (0x000559d7) mup2_visualizer_pane

0x9511,	// (0x00055a0d) mup_progress_pane_cp_ParamLimits

0x9511,	// (0x00055a0d) mup_progress_pane_cp

0x962a,	// (0x00055b26) mup_volume_pane_cp_ParamLimits

0x962a,	// (0x00055b26) mup_volume_pane_cp

0x952a,	// (0x00055a26) mup2_visualizer_pane_g1_ParamLimits

0x952a,	// (0x00055a26) mup2_visualizer_pane_g1

0x42c9,	// (0x000507c5) mup2_visualizer_pane_g2_ParamLimits

0x42c9,	// (0x000507c5) mup2_visualizer_pane_g2

0x953f,	// (0x00055a3b) mup2_visualizer_pane_g3_ParamLimits

0x953f,	// (0x00055a3b) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0005bb94) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0005bb94) mup2_visualizer_pane_g

0x3067,	// (0x0004f563) aid_size_cell_fmradio

0x8dc5,	// (0x000552c1) aid_height_parent_landcape

0x266c,	// (0x0004eb68) wml_content_pane_cp

0x2674,	// (0x0004eb70) wml_tabs_pane

0x267d,	// (0x0004eb79) popup_wml_miniature_window

0x2685,	// (0x0004eb81) scroll_pane_cp021

0x2699,	// (0x0004eb95) wml_content_pane_comp8

0x2005,	// (0x0004e501) bg_popup_sub_pane_cp05

0x42e7,	// (0x000507e3) popup_wml_miniature_window_g1

0x42ef,	// (0x000507eb) wml_miniature_view_pane

0x954d,	// (0x00055a49) aid_size_wml_view

0x9555,	// (0x00055a51) wml_miniature_view_pane_g1

0x955e,	// (0x00055a5a) wml_miniature_view_pane_g2

0x9567,	// (0x00055a63) wml_miniature_view_pane_g3

0x956f,	// (0x00055a6b) wml_miniature_view_pane_g4

0x9577,	// (0x00055a73) wml_miniature_view_pane_g5

0x957f,	// (0x00055a7b) wml_miniature_view_pane_g6

0x9587,	// (0x00055a83) wml_miniature_view_pane_g7

0x958f,	// (0x00055a8b) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0005bb9b) wml_miniature_view_pane_g

0x42f7,	// (0x000507f3) background_graphic_ParamLimits

0x42f7,	// (0x000507f3) background_graphic

0x4303,	// (0x000507ff) wml_tabs_2_pane

0x430c,	// (0x00050808) wml_tabs_3_pane_ParamLimits

0x430c,	// (0x00050808) wml_tabs_3_pane

0x431e,	// (0x0005081a) wml_tabs_4_pane_ParamLimits

0x431e,	// (0x0005081a) wml_tabs_4_pane

0x4334,	// (0x00050830) wml_tabs_5_pane_ParamLimits

0x4334,	// (0x00050830) wml_tabs_5_pane

0x434e,	// (0x0005084a) wml_tabs_pane_g2_ParamLimits

0x434e,	// (0x0005084a) wml_tabs_pane_g2

0x4362,	// (0x0005085e) wml_tabs_pane_g3_ParamLimits

0x4362,	// (0x0005085e) wml_tabs_pane_g3

0x9597,	// (0x00055a93) wml_tabs_2_active_pane_ParamLimits

0x9597,	// (0x00055a93) wml_tabs_2_active_pane

0x95a9,	// (0x00055aa5) wml_tabs_2_passive_pane_ParamLimits

0x95a9,	// (0x00055aa5) wml_tabs_2_passive_pane

0x95bb,	// (0x00055ab7) wml_tabs_3_active_pane_cp_ParamLimits

0x95bb,	// (0x00055ab7) wml_tabs_3_active_pane_cp

0x95ce,	// (0x00055aca) wml_tabs_3_passive_pane_ParamLimits

0x95ce,	// (0x00055aca) wml_tabs_3_passive_pane

0x95df,	// (0x00055adb) wml_tabs_3_passive_pane_cp_ParamLimits

0x95df,	// (0x00055adb) wml_tabs_3_passive_pane_cp

0x95f4,	// (0x00055af0) tabs_4_active_pane

0x95fc,	// (0x00055af8) tabs_4_passive_pane

0x9604,	// (0x00055b00) tabs_4_passive_pane_cp

0x960c,	// (0x00055b08) tabs_4_passive_pane_cp2

0x8b8a,	// (0x00055086) aid_height_text

0x8292,	// (0x0005478e) mup_volume_cont_pane_ParamLimits

0x8292,	// (0x0005478e) mup_volume_cont_pane

0x5fb8,	// (0x000524b4) aid_size_cell_pinb

0x5fc2,	// (0x000524be) aid_size_list_pinb

0x94fa,	// (0x000559f6) mup2_volume_cont_pane_ParamLimits

0x94fa,	// (0x000559f6) mup2_volume_cont_pane

0x9616,	// (0x00055b12) mup2_volume_cont_pane_g1_ParamLimits

0x9616,	// (0x00055b12) mup2_volume_cont_pane_g1

0x5c44,	// (0x00052140) aid_size_cell_touch_ParamLimits

0x5c44,	// (0x00052140) aid_size_cell_touch

0x5e9f,	// (0x0005239b) touch_pane_ParamLimits

0x5e9f,	// (0x0005239b) touch_pane

0x03cf,	// (0x0004c8cb) main_rss2_pane

0x437f,	// (0x0005087b) listscroll_rss2_pane

0x4388,	// (0x00050884) rss2_navigation_pane

0x4390,	// (0x0005088c) list_rss2_pane

0x2c45,	// (0x0004f141) scroll_pane_cp22

0x4398,	// (0x00050894) rss2_navigation_pane_g1

0x43a1,	// (0x0005089d) rss2_navigation_pane_g2

0x43a9,	// (0x000508a5) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0005bbac) rss2_navigation_pane_g

0x43b1,	// (0x000508ad) rss2_navigation_pane_t1

0x964f,	// (0x00055b4b) rss2_list_single_pane_ParamLimits

0x964f,	// (0x00055b4b) rss2_list_single_pane

0x43bf,	// (0x000508bb) rss2_list_single_pane_t2

0x43cd,	// (0x000508c9) rss2_list_single_pane_t3_ParamLimits

0x43cd,	// (0x000508c9) rss2_list_single_pane_t3

0x43ea,	// (0x000508e6) rss2_list_single_pane_t4

0x7a2b,	// (0x00053f27) smil_status_pane_g1

0x0448,	// (0x0004c944) main_image2_pane_ParamLimits

0x0448,	// (0x0004c944) main_image2_pane

0x9210,	// (0x0005570c) main_camera2_pane_g9_ParamLimits

0x9210,	// (0x0005570c) main_camera2_pane_g9

0x9264,	// (0x00055760) main_camera2_pane_t5_ParamLimits

0x9264,	// (0x00055760) main_camera2_pane_t5

0x9276,	// (0x00055772) main_camera2_pane_t6_ParamLimits

0x9276,	// (0x00055772) main_camera2_pane_t6

0x9675,	// (0x00055b71) main_image2_pane_g1_ParamLimits

0x9675,	// (0x00055b71) main_image2_pane_g1

0x8924,	// (0x00054e20) smil2_video_pane_ParamLimits

0x8924,	// (0x00054e20) smil2_video_pane

0x03fd,	// (0x0004c8f9) aid_zoom_text_primary_cp

0x043e,	// (0x0004c93a) popup_preview_fixed_window

0x25d5,	// (0x0004ead1) im_reading_pane_g1

0x915a,	// (0x00055656) cams2_bc_adjust_pane_cp_ParamLimits

0x915a,	// (0x00055656) cams2_bc_adjust_pane_cp

0x92a1,	// (0x0005579d) cams2_bc_adjust_pane_ParamLimits

0x92a1,	// (0x0005579d) cams2_bc_adjust_pane

0x4629,	// (0x00050b25) cams2_bc_adjust_pane_g1

0x9681,	// (0x00055b7d) cams2_slider_pane

0x968a,	// (0x00055b86) cams2_slider_pane_g1

0x9693,	// (0x00055b8f) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0005bbb3) cams2_slider_pane_g

0x60b5,	// (0x000525b1) calc_display_pane_ParamLimits

0x60d3,	// (0x000525cf) calc_paper_pane_ParamLimits

0x60ef,	// (0x000525eb) grid_calc_pane_ParamLimits

0x7ce0,	// (0x000541dc) popup_clock_digital_window_t1_ParamLimits

0x3004,	// (0x0004f500) main_image_pane_t1

0x609b,	// (0x00052597) aid_size_cell_calc_ParamLimits

0x609b,	// (0x00052597) aid_size_cell_calc

0x8df7,	// (0x000552f3) popup_blid_sat_info2_window_ParamLimits

0x8df7,	// (0x000552f3) popup_blid_sat_info2_window

0x4400,	// (0x000508fc) aid_size_cell_blid

0x4408,	// (0x00050904) bg_popup_window_pane_cp07

0x442b,	// (0x00050927) grid_popup_blid_pane

0x4435,	// (0x00050931) heading_pane_cp05_ParamLimits

0x4435,	// (0x00050931) heading_pane_cp05

0x44ff,	// (0x000509fb) cell_popup_blid_pane_ParamLimits

0x44ff,	// (0x000509fb) cell_popup_blid_pane

0x4529,	// (0x00050a25) cell_popup_blid_pane_g1

0x4531,	// (0x00050a2d) cell_popup_blid_pane_t1

0x94c0,	// (0x000559bc) mup2_indicator_pane_ParamLimits

0x94c0,	// (0x000559bc) mup2_indicator_pane

0x2d7f,	// (0x0004f27b) mup2_visualizer_osc_pane

0x42d5,	// (0x000507d1) mup2_visualizer_spec_pane_ParamLimits

0x42d5,	// (0x000507d1) mup2_visualizer_spec_pane

0x96ad,	// (0x00055ba9) mup2_spec_half_pane

0x96b6,	// (0x00055bb2) mup2_spec_half_pane_cp

0x96c0,	// (0x00055bbc) mup2_spec_bar_pane_ParamLimits

0x96c0,	// (0x00055bbc) mup2_spec_bar_pane

0x425f,	// (0x0005075b) mup2_spec_bar_pane_g1

0x4269,	// (0x00050765) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0005bb26) mup2_spec_bar_pane_g

0x96df,	// (0x00055bdb) mup2_osc_middle_pane

0x427b,	// (0x00050777) mup2_visualizer_osc_pane_g1

0x0476,	// (0x0004c972) popup_number_entry_window_t1_ParamLimits

0x0489,	// (0x0004c985) popup_number_entry_window_t2_ParamLimits

0x049b,	// (0x0004c997) popup_number_entry_window_t3_ParamLimits

0x5ef6,	// (0x000523f2) popup_number_entry_window_t5_ParamLimits

0x5ef6,	// (0x000523f2) popup_number_entry_window_t5

0xf0ec,	// (0x0005b5e8) popup_number_entry_window_t_ParamLimits

0x04ad,	// (0x0004c9a9) text_title_cp2_ParamLimits

0x860e,	// (0x00054b0a) aid_hotspot_pointer_text2_pane

0x86a8,	// (0x00054ba4) main_viewer_pane_g9_ParamLimits

0x86a8,	// (0x00054ba4) main_viewer_pane_g9

0x2804,	// (0x0004ed00) cale_month_pane_t1_ParamLimits

0x2841,	// (0x0004ed3d) bg_cale_pane_ParamLimits

0x2859,	// (0x0004ed55) list_cale_pane_ParamLimits

0x246b,	// (0x0004e967) listscroll_cale_day_pane_t1

0x286a,	// (0x0004ed66) scroll_pane_cp09_ParamLimits

0x82d1,	// (0x000547cd) main_mup_eq_pane_t1_ParamLimits

0x82d1,	// (0x000547cd) main_mup_eq_pane_t1

0x82ed,	// (0x000547e9) main_mup_eq_pane_t2_ParamLimits

0x82ed,	// (0x000547e9) main_mup_eq_pane_t2

0x8309,	// (0x00054805) main_mup_eq_pane_t3_ParamLimits

0x8309,	// (0x00054805) main_mup_eq_pane_t3

0x8323,	// (0x0005481f) main_mup_eq_pane_t4_ParamLimits

0x8323,	// (0x0005481f) main_mup_eq_pane_t4

0x833d,	// (0x00054839) main_mup_eq_pane_t5_ParamLimits

0x833d,	// (0x00054839) main_mup_eq_pane_t5

0x8357,	// (0x00054853) main_mup_eq_pane_t6_ParamLimits

0x8357,	// (0x00054853) main_mup_eq_pane_t6

0x836d,	// (0x00054869) main_mup_eq_pane_t7_ParamLimits

0x836d,	// (0x00054869) main_mup_eq_pane_t7

0x8383,	// (0x0005487f) main_mup_eq_pane_t8_ParamLimits

0x8383,	// (0x0005487f) main_mup_eq_pane_t8

0x8399,	// (0x00054895) main_mup_eq_pane_t9_ParamLimits

0x8399,	// (0x00054895) main_mup_eq_pane_t9

0x83b5,	// (0x000548b1) main_mup_eq_pane_t10_ParamLimits

0x83b5,	// (0x000548b1) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0005b975) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0005b975) main_mup_eq_pane_t

0x847a,	// (0x00054976) mup_equalizer_pane_cp5_ParamLimits

0x8492,	// (0x0005498e) mup_equalizer_pane_cp6_ParamLimits

0x84aa,	// (0x000549a6) mup_equalizer_pane_cp7_ParamLimits

0x03cf,	// (0x0004c8cb) main_gallery_pane

0x4284,	// (0x00050780) smil2_volume_pane

0x429f,	// (0x0005079b) smil_status_volume_pane_g1_ParamLimits

0x428c,	// (0x00050788) smil_status_volume_pane_g2_ParamLimits

0x8fde,	// (0x000554da) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0005bb2b) smil_status_volume_pane_g_ParamLimits

0x4408,	// (0x00050904) bg_popup_window_pane_cp07_ParamLimits

0x4416,	// (0x00050912) blid_firmament_pane

0x96e8,	// (0x00055be4) aid_size_cell_gallery_ParamLimits

0x96e8,	// (0x00055be4) aid_size_cell_gallery

0x96f6,	// (0x00055bf2) grid_gallery_pane_ParamLimits

0x96f6,	// (0x00055bf2) grid_gallery_pane

0x9706,	// (0x00055c02) cell_gallery_pane_ParamLimits

0x9706,	// (0x00055c02) cell_gallery_pane

0x453f,	// (0x00050a3b) bg_cell_gallery_focus_pane_ParamLimits

0x453f,	// (0x00050a3b) bg_cell_gallery_focus_pane

0x4551,	// (0x00050a4d) cell_gallery_pane_g1_ParamLimits

0x4551,	// (0x00050a4d) cell_gallery_pane_g1

0x9754,	// (0x00055c50) cell_gallery_pane_g2_ParamLimits

0x9754,	// (0x00055c50) cell_gallery_pane_g2

0x9761,	// (0x00055c5d) cell_gallery_pane_g3_ParamLimits

0x9761,	// (0x00055c5d) cell_gallery_pane_g3

0x455d,	// (0x00050a59) cell_gallery_pane_g4_ParamLimits

0x455d,	// (0x00050a59) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0005bbd9) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0005bbd9) cell_gallery_pane_g

0x4569,	// (0x00050a65) bg_cell_gallery_focus_pane_g1

0x4571,	// (0x00050a6d) bg_cell_gallery_focus_pane_g2

0x4579,	// (0x00050a75) bg_cell_gallery_focus_pane_g3

0x4581,	// (0x00050a7d) bg_cell_gallery_focus_pane_g4

0x4589,	// (0x00050a85) bg_cell_gallery_focus_pane_g5

0x4591,	// (0x00050a8d) bg_cell_gallery_focus_pane_g6

0x4599,	// (0x00050a95) bg_cell_gallery_focus_pane_g7

0x45a1,	// (0x00050a9d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0005bbe2) bg_cell_gallery_focus_pane_g

0x45a9,	// (0x00050aa5) aid_firma_cardinal

0x45bd,	// (0x00050ab9) blid_firmament_pane_t1

0x45d4,	// (0x00050ad0) blid_firmament_pane_t2

0x45eb,	// (0x00050ae7) blid_firmament_pane_t3

0x4602,	// (0x00050afe) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0005bbf3) blid_firmament_pane_t

0x4619,	// (0x00050b15) blid_sat_info_pane

0x4631,	// (0x00050b2d) blid_sat_info_pane_g1

0x4631,	// (0x00050b2d) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0005bbfc) blid_sat_info_pane_g

0x463b,	// (0x00050b37) blid_sat_info_pane_t1

0x4649,	// (0x00050b45) smil2_volume_content_pane

0x4652,	// (0x00050b4e) smil2_volume_pane_g1

0x465a,	// (0x00050b56) smil2_volume_content_pane_g1

0x4663,	// (0x00050b5f) smil2_volume_content_pane_g2

0x466c,	// (0x00050b68) smil2_volume_content_pane_g3

0x4675,	// (0x00050b71) smil2_volume_content_pane_g4

0x467e,	// (0x00050b7a) smil2_volume_content_pane_g5

0x4687,	// (0x00050b83) smil2_volume_content_pane_g6

0x4690,	// (0x00050b8c) smil2_volume_content_pane_g7

0x4699,	// (0x00050b95) smil2_volume_content_pane_g8

0x46a2,	// (0x00050b9e) smil2_volume_content_pane_g9

0x46ab,	// (0x00050ba7) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0005bc01) smil2_volume_content_pane_g

0x6619,	// (0x00052b15) cale_week_day_heading_pane_t1_ParamLimits

0x6646,	// (0x00052b42) cale_week_day_heading_pane_t2_ParamLimits

0x6673,	// (0x00052b6f) cale_week_day_heading_pane_t3_ParamLimits

0x66a0,	// (0x00052b9c) cale_week_day_heading_pane_t4_ParamLimits

0x66cd,	// (0x00052bc9) cale_week_day_heading_pane_t5_ParamLimits

0x66fa,	// (0x00052bf6) cale_week_day_heading_pane_t6_ParamLimits

0x6727,	// (0x00052c23) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0005b6ed) cale_week_day_heading_pane_t_ParamLimits

0x247d,	// (0x0004e979) bg_cale_side_pane_ParamLimits

0x6754,	// (0x00052c50) cale_week_time_pane_t1_ParamLimits

0x6780,	// (0x00052c7c) cale_week_time_pane_t2_ParamLimits

0x67ac,	// (0x00052ca8) cale_week_time_pane_t3_ParamLimits

0x67d8,	// (0x00052cd4) cale_week_time_pane_t4_ParamLimits

0x6804,	// (0x00052d00) cale_week_time_pane_t5_ParamLimits

0x6830,	// (0x00052d2c) cale_week_time_pane_t6_ParamLimits

0x685c,	// (0x00052d58) cale_week_time_pane_t7_ParamLimits

0x6888,	// (0x00052d84) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0005b6fc) cale_week_time_pane_t_ParamLimits

0x68b4,	// (0x00052db0) cell_cale_week_pane_g2_ParamLimits

0x247d,	// (0x0004e979) bg_cale_side_pane_cp01_ParamLimits

0x7828,	// (0x00053d24) cale_month_week_pane_t1_ParamLimits

0x7853,	// (0x00053d4f) cale_month_week_pane_t2_ParamLimits

0x787e,	// (0x00053d7a) cale_month_week_pane_t3_ParamLimits

0x78a9,	// (0x00053da5) cale_month_week_pane_t4_ParamLimits

0x78d4,	// (0x00053dd0) cale_month_week_pane_t5_ParamLimits

0x78ff,	// (0x00053dfb) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0005b7d5) cale_month_week_pane_t_ParamLimits

0x79f8,	// (0x00053ef4) cell_cale_month_pane_g1_ParamLimits

0x03cf,	// (0x0004c8cb) main_cale_event_viewer_pane

0x03cf,	// (0x0004c8cb) listscroll_cale_event_viewer_pane

0x46b4,	// (0x00050bb0) list_cale_ev_pane

0x46bc,	// (0x00050bb8) scroll_pane_cp023

0x976e,	// (0x00055c6a) field_cale_ev_pane_ParamLimits

0x976e,	// (0x00055c6a) field_cale_ev_pane

0x46c8,	// (0x00050bc4) field_cale_ev_content_pane_ParamLimits

0x46c8,	// (0x00050bc4) field_cale_ev_content_pane

0x46d4,	// (0x00050bd0) field_cale_ev_pane_g1_ParamLimits

0x46d4,	// (0x00050bd0) field_cale_ev_pane_g1

0x46e0,	// (0x00050bdc) field_cale_ev_pane_g2_ParamLimits

0x46e0,	// (0x00050bdc) field_cale_ev_pane_g2

0x46f8,	// (0x00050bf4) field_cale_ev_pane_g3_ParamLimits

0x46f8,	// (0x00050bf4) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0005bc16) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0005bc16) field_cale_ev_pane_g

0x4710,	// (0x00050c0c) field_cale_ev_pane_t1_ParamLimits

0x4710,	// (0x00050c0c) field_cale_ev_pane_t1

0x9792,	// (0x00055c8e) field_cale_ev_content_pane_t1_ParamLimits

0x9792,	// (0x00055c8e) field_cale_ev_content_pane_t1

0x2eea,	// (0x0004f3e6) bg_button_pane_cp01

0x232b,	// (0x0004e827) listscroll_cale_week_pane_ParamLimits

0x6439,	// (0x00052935) popup_toolbar_window_cp01

0x246b,	// (0x0004e967) listscroll_cale_week_pane_t1_ParamLimits

0x232b,	// (0x0004e827) listscroll_cale_day_pane_ParamLimits

0x6439,	// (0x00052935) popup_toolbar_window_cp02

0x246b,	// (0x0004e967) listscroll_cale_day_pane_t1_ParamLimits

0x232b,	// (0x0004e827) main_cale_month_pane_ParamLimits

0x8edb,	// (0x000553d7) popup_toolbar_window_cp03_ParamLimits

0x8edb,	// (0x000553d7) popup_toolbar_window_cp03

0x8834,	// (0x00054d30) main_image_pane_g2_ParamLimits

0x8834,	// (0x00054d30) main_image_pane_g2

0x8840,	// (0x00054d3c) main_image_pane_g3_ParamLimits

0x8840,	// (0x00054d3c) main_image_pane_g3

0x0002,

0xf50b,	// (0x0005ba07) main_image_pane_g_ParamLimits

0xf50b,	// (0x0005ba07) main_image_pane_g

0x3004,	// (0x0004f500) main_image_pane_t1_ParamLimits

0x884c,	// (0x00054d48) main_image_pane_t2_ParamLimits

0x884c,	// (0x00054d48) main_image_pane_t2

0x885e,	// (0x00054d5a) main_image_pane_t3_ParamLimits

0x885e,	// (0x00054d5a) main_image_pane_t3

0x8870,	// (0x00054d6c) main_image_pane_t4_ParamLimits

0x8870,	// (0x00054d6c) main_image_pane_t4

0x0003,

0xf512,	// (0x0005ba0e) main_image_pane_t_ParamLimits

0xf512,	// (0x0005ba0e) main_image_pane_t

0x8882,	// (0x00054d7e) popup_image_details_window_cp01

0x888c,	// (0x00054d88) popup_toobar_trans_pane_cp01_ParamLimits

0x888c,	// (0x00054d88) popup_toobar_trans_pane_cp01

0x8e4c,	// (0x00055348) popup_image_details_window_ParamLimits

0x8e4c,	// (0x00055348) popup_image_details_window

0x41d0,	// (0x000506cc) popup_image_focus_window

0x914c,	// (0x00055648) camera2_autofocus_pane_ParamLimits

0x914c,	// (0x00055648) camera2_autofocus_pane

0x03cf,	// (0x0004c8cb) bg_popup_sub_pane_cp06

0x4727,	// (0x00050c23) popup_image_focus_window_g1

0x472f,	// (0x00050c2b) popup_image_focus_window_g2

0x4737,	// (0x00050c33) popup_image_focus_window_g3

0x473f,	// (0x00050c3b) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0005bc1d) popup_image_focus_window_g

0x4747,	// (0x00050c43) popup_image_focus_window_t1

0x4755,	// (0x00050c51) popup_image_focus_window_t2

0x4765,	// (0x00050c61) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0005bc26) popup_image_focus_window_t

0x4773,	// (0x00050c6f) camera2_autofocus_pane_g1

0x0448,	// (0x0004c944) bg_tb_trans_pane_cp01

0x4781,	// (0x00050c7d) popup_image_details_window_g1

0x4794,	// (0x00050c90) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0005bc38) popup_image_details_window_g

0x47bd,	// (0x00050cb9) popup_image_details_window_t1

0x47cf,	// (0x00050ccb) popup_image_details_window_t2

0x47e8,	// (0x00050ce4) popup_image_details_window_t3

0x47fc,	// (0x00050cf8) popup_image_details_window_t4

0x4817,	// (0x00050d13) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0005bc3f) popup_image_details_window_t

0x2317,	// (0x0004e813) bg_calc_paper_pane_ParamLimits

0x61e8,	// (0x000526e4) grid_highlight_pane_cp013

0x61f2,	// (0x000526ee) list_calc_pane_ParamLimits

0x6204,	// (0x00052700) scroll_pane_cp024

0x232b,	// (0x0004e827) bg_calc_display_pane_ParamLimits

0x620c,	// (0x00052708) calc_display_pane_t1_ParamLimits

0x6221,	// (0x0005271d) calc_display_pane_t2_ParamLimits

0x6236,	// (0x00052732) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0005b66f) calc_display_pane_t_ParamLimits

0x6309,	// (0x00052805) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0005b68c) cell_calc_pane_g

0x6312,	// (0x0005280e) cell_calc_pane_t1

0x238a,	// (0x0004e886) grid_highlight_pane_cp02_ParamLimits

0x23a0,	// (0x0004e89c) toolbar_button_pane_cp01_ParamLimits

0x23a0,	// (0x0004e89c) toolbar_button_pane_cp01

0x3049,	// (0x0004f545) temp_image_control_pane_ParamLimits

0x3049,	// (0x0004f545) temp_image_control_pane

0x0448,	// (0x0004c944) main_mp3_pane

0x4831,	// (0x00050d2d) temp_image_control_pane_g1_ParamLimits

0x4831,	// (0x00050d2d) temp_image_control_pane_g1

0x483f,	// (0x00050d3b) temp_image_control_pane_g2_ParamLimits

0x483f,	// (0x00050d3b) temp_image_control_pane_g2

0x4851,	// (0x00050d4d) temp_image_control_pane_g3_ParamLimits

0x4851,	// (0x00050d4d) temp_image_control_pane_g3

0x97e0,	// (0x00055cdc) temp_image_control_pane_g4_ParamLimits

0x97e0,	// (0x00055cdc) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0005bc4a) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0005bc4a) temp_image_control_pane_g

0x4831,	// (0x00050d2d) main_mp3_pane_g1

0x97f1,	// (0x00055ced) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0005bc53) main_mp3_pane_g

0x4894,	// (0x00050d90) main_mp3_pane_t1

0x24e2,	// (0x0004e9de) main_camera_pane_g8_ParamLimits

0x24e2,	// (0x0004e9de) main_camera_pane_g8

0x6b60,	// (0x0005305c) main_video_pane_g7_ParamLimits

0x6b60,	// (0x0005305c) main_video_pane_g7

0x928f,	// (0x0005578b) main_camera2_pane_t7_ParamLimits

0x928f,	// (0x0005578b) main_camera2_pane_t7

0x262c,	// (0x0004eb28) scroll_pane_cp025_ParamLimits

0x262c,	// (0x0004eb28) scroll_pane_cp025

0x2640,	// (0x0004eb3c) scroll_pane_cp026_ParamLimits

0x2640,	// (0x0004eb3c) scroll_pane_cp026

0x264f,	// (0x0004eb4b) wml_content_pane_ParamLimits

0x03cf,	// (0x0004c8cb) main_touch_calib_pane

0x9895,	// (0x00055d91) main_touch_calib_pane_g1

0x98a1,	// (0x00055d9d) main_touch_calib_pane_g2

0x98ad,	// (0x00055da9) main_touch_calib_pane_g3

0x98b9,	// (0x00055db5) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0005bc71) main_touch_calib_pane_g

0x98c5,	// (0x00055dc1) main_touch_calib_pane_t1

0x98dc,	// (0x00055dd8) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0005bc7a) main_touch_calib_pane_t

0x2cc0,	// (0x0004f1bc) mup_progress_pane_cp02

0x2cdf,	// (0x0004f1db) navi_pane_g1

0x2d41,	// (0x0004f23d) navi_pane_mp_t3

0x0448,	// (0x0004c944) main_mp3_pane_ParamLimits

0x8f1d,	// (0x00055419) navi_pane_ParamLimits

0x4831,	// (0x00050d2d) main_mp3_pane_g1_ParamLimits

0x97f1,	// (0x00055ced) main_mp3_pane_g2_ParamLimits

0x97fd,	// (0x00055cf9) main_mp3_pane_g3_ParamLimits

0x97fd,	// (0x00055cf9) main_mp3_pane_g3

0x9809,	// (0x00055d05) main_mp3_pane_g4_ParamLimits

0x9809,	// (0x00055d05) main_mp3_pane_g4

0x4861,	// (0x00050d5d) main_mp3_pane_g5_ParamLimits

0x4861,	// (0x00050d5d) main_mp3_pane_g5

0x486f,	// (0x00050d6b) main_mp3_pane_g6_ParamLimits

0x486f,	// (0x00050d6b) main_mp3_pane_g6

0x487c,	// (0x00050d78) main_mp3_pane_g7_ParamLimits

0x487c,	// (0x00050d78) main_mp3_pane_g7

0x4888,	// (0x00050d84) main_mp3_pane_g8_ParamLimits

0x4888,	// (0x00050d84) main_mp3_pane_g8

0xf757,	// (0x0005bc53) main_mp3_pane_g_ParamLimits

0x9815,	// (0x00055d11) main_mp3_pane_t2

0x9825,	// (0x00055d21) main_mp3_pane_t3

0x48a2,	// (0x00050d9e) main_mp3_pane_t4

0x48b0,	// (0x00050dac) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0005bc64) main_mp3_pane_t

0x48be,	// (0x00050dba) mup_progress_pane_cp01

0x03fd,	// (0x0004c8f9) aid_zoom_text_secondary2

0x46b4,	// (0x00050bb0) list_cale_ev2_pane

0x46bc,	// (0x00050bb8) scroll_pane_cp023_ParamLimits

0x9933,	// (0x00055e2f) field_cale_ev2_pane_ParamLimits

0x9933,	// (0x00055e2f) field_cale_ev2_pane

0x094c,	// (0x0004ce48) field_cale_ev2_pane_g1_ParamLimits

0x094c,	// (0x0004ce48) field_cale_ev2_pane_g1

0x0958,	// (0x0004ce54) field_cale_ev2_pane_g2_ParamLimits

0x0958,	// (0x0004ce54) field_cale_ev2_pane_g2

0x0970,	// (0x0004ce6c) field_cale_ev2_pane_g3_ParamLimits

0x0970,	// (0x0004ce6c) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0005bc85) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0005bc85) field_cale_ev2_pane_g

0x0994,	// (0x0004ce90) field_cale_ev2_pane_t1_ParamLimits

0x0994,	// (0x0004ce90) field_cale_ev2_pane_t1

0x09ab,	// (0x0004cea7) field_cale_ev2_pane_t2_ParamLimits

0x09ab,	// (0x0004cea7) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0005bc8e) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0005bc8e) field_cale_ev2_pane_t

0x8710,	// (0x00054c0c) main_postcard_pane_g5_ParamLimits

0x8710,	// (0x00054c0c) main_postcard_pane_g5

0x871e,	// (0x00054c1a) main_postcard_pane_g6_ParamLimits

0x871e,	// (0x00054c1a) main_postcard_pane_g6

0x699e,	// (0x00052e9a) camera2_autofocus_pane_cp_ParamLimits

0x699e,	// (0x00052e9a) camera2_autofocus_pane_cp

0x0448,	// (0x0004c944) main_mup3_pane

0x9971,	// (0x00055e6d) main_mup3_pane_g1_ParamLimits

0x9971,	// (0x00055e6d) main_mup3_pane_g1

0x9992,	// (0x00055e8e) main_mup3_pane_g2_ParamLimits

0x9992,	// (0x00055e8e) main_mup3_pane_g2

0x9a0e,	// (0x00055f0a) main_mup3_pane_g3_ParamLimits

0x9a0e,	// (0x00055f0a) main_mup3_pane_g3

0x9a4f,	// (0x00055f4b) main_mup3_pane_g4_ParamLimits

0x9a4f,	// (0x00055f4b) main_mup3_pane_g4

0x9a90,	// (0x00055f8c) main_mup3_pane_g5_ParamLimits

0x9a90,	// (0x00055f8c) main_mup3_pane_g5

0x9ad1,	// (0x00055fcd) main_mup3_pane_g6_ParamLimits

0x9ad1,	// (0x00055fcd) main_mup3_pane_g6

0x48c6,	// (0x00050dc2) main_mup3_pane_g7_ParamLimits

0x48c6,	// (0x00050dc2) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0005bc9e) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0005bc9e) main_mup3_pane_g

0x9b43,	// (0x0005603f) main_mup3_pane_t1_ParamLimits

0x9b43,	// (0x0005603f) main_mup3_pane_t1

0x9bb6,	// (0x000560b2) main_mup3_pane_t2_ParamLimits

0x9bb6,	// (0x000560b2) main_mup3_pane_t2

0x9c83,	// (0x0005617f) main_mup3_pane_t4_ParamLimits

0x9c83,	// (0x0005617f) main_mup3_pane_t4

0x9cd7,	// (0x000561d3) main_mup3_pane_t5_ParamLimits

0x9cd7,	// (0x000561d3) main_mup3_pane_t5

0x9d83,	// (0x0005627f) main_mup3_pane_t6_ParamLimits

0x9d83,	// (0x0005627f) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0005bcaf) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0005bcaf) main_mup3_pane_t

0x9e2b,	// (0x00056327) mup3_progress_pane_ParamLimits

0x9e2b,	// (0x00056327) mup3_progress_pane

0x9e96,	// (0x00056392) popup_mup3_control_window_ParamLimits

0x9e96,	// (0x00056392) popup_mup3_control_window

0x48d4,	// (0x00050dd0) popup_mup3_text_window

0x9eb3,	// (0x000563af) mup3_progress_pane_t1

0x9eca,	// (0x000563c6) mup3_progress_pane_t2

0x48dc,	// (0x00050dd8) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0005bcbc) mup3_progress_pane_t

0x48f3,	// (0x00050def) mup_progress_pane_cp03

0x03cf,	// (0x0004c8cb) bg_tb_trans_pane_cp04

0x9ee1,	// (0x000563dd) mup3_volume_pane

0x9ee9,	// (0x000563e5) popup_mup3_control_window_g1

0xde44,	// (0x0005a340) mup3_volume_pane_g1

0xde4d,	// (0x0005a349) mup3_volume_pane_g2

0xde56,	// (0x0005a352) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0005bcc3) mup3_volume_pane_g

0x03cf,	// (0x0004c8cb) bg_tb_trans_pane_cp03

0x4903,	// (0x00050dff) popup_mup3_text_window_g1

0x490b,	// (0x00050e07) popup_mup3_text_window_t1

0x2373,	// (0x0004e86f) list_calc_item_pane_g1_ParamLimits

0x4376,	// (0x00050872) mup_volume_pane_cp_g1

0x98f3,	// (0x00055def) main_touch_calib_pane_t3

0x9907,	// (0x00055e03) main_touch_calib_pane_t4

0x991d,	// (0x00055e19) main_touch_calib_pane_t5

0x03d9,	// (0x0004c8d5) aid_cell_size_toolbar2

0x03e1,	// (0x0004c8dd) aid_popup3_width_pane

0x03ed,	// (0x0004c8e9) aid_zoom_text_msg_primary

0x6971,	// (0x00052e6d) vorec_t7

0x2337,	// (0x0004e833) bg_calc_paper_pane_g1_ParamLimits

0x234f,	// (0x0004e84b) bg_calc_paper_pane_g2_ParamLimits

0x2343,	// (0x0004e83f) bg_calc_paper_pane_g3_ParamLimits

0x2367,	// (0x0004e863) bg_calc_paper_pane_g4_ParamLimits

0x235b,	// (0x0004e857) bg_calc_paper_pane_g5_ParamLimits

0x6277,	// (0x00052773) bg_calc_paper_pane_g6_ParamLimits

0x6288,	// (0x00052784) bg_calc_paper_pane_g7_ParamLimits

0x6299,	// (0x00052795) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0005b676) bg_calc_paper_pane_g_ParamLimits

0x62aa,	// (0x000527a6) calc_bg_paper_pane_g9_ParamLimits

0x6a8f,	// (0x00052f8b) image_qvga_pane_ParamLimits

0x6a8f,	// (0x00052f8b) image_qvga_pane

0x2260,	// (0x0004e75c) bg_popup_sub_pane_cp04_ParamLimits

0x2f80,	// (0x0004f47c) popup_mup_playback_window_g1_ParamLimits

0x2f8c,	// (0x0004f488) popup_mup_playback_window_t1_ParamLimits

0x2fa1,	// (0x0004f49d) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0005ba02) popup_mup_playback_window_t_ParamLimits

0x93be,	// (0x000558ba) main_mup2_pane_g3_ParamLimits

0x93be,	// (0x000558ba) main_mup2_pane_g3

0x6d96,	// (0x00053292) popup_toolbar_window_cp04

0x33a8,	// (0x0004f8a4) popup_call2_audio_second_window_g3_ParamLimits

0x33a8,	// (0x0004f8a4) popup_call2_audio_second_window_g3

0x37ca,	// (0x0004fcc6) popup_call2_audio_first_window_g4_ParamLimits

0x37ca,	// (0x0004fcc6) popup_call2_audio_first_window_g4

0x3e49,	// (0x00050345) popup_call2_audio_in_window_g4_ParamLimits

0x3e49,	// (0x00050345) popup_call2_audio_in_window_g4

0x8827,	// (0x00054d23) aid_area_sk_bg_cut_ParamLimits

0x8827,	// (0x00054d23) aid_area_sk_bg_cut

0x2fb6,	// (0x0004f4b2) aid_area_sk_bg_cut_2_ParamLimits

0x2fb6,	// (0x0004f4b2) aid_area_sk_bg_cut_2

0x9744,	// (0x00055c40) aid_placing_details_win

0x974c,	// (0x00055c48) aid_placing_details_win_2

0x4773,	// (0x00050c6f) camera2_autofocus_pane_g1_ParamLimits

0x5e4d,	// (0x00052349) popup_fixed_preview_cale_window_ParamLimits

0x5e4d,	// (0x00052349) popup_fixed_preview_cale_window

0x2da2,	// (0x0004f29e) navi_slider_pane_g3

0x2d99,	// (0x0004f295) navi_slider_pane_g4

0x2d90,	// (0x0004f28c) navi_slider_pane_g5

0x2da2,	// (0x0004f29e) navi_slider_pane_g6

0x8047,	// (0x00054543) navi_slider_pane_g7

0x2eb7,	// (0x0004f3b3) mup_scale_pane_g3

0x2ec0,	// (0x0004f3bc) mup_scale_pane_g4

0x2ec9,	// (0x0004f3c5) mup_scale_pane_g5

0x84c2,	// (0x000549be) mup_scale_pane_g6

0x84cb,	// (0x000549c7) mup_scale_pane_g7

0x2da2,	// (0x0004f29e) cams2_slider_pane_g3

0x43f8,	// (0x000508f4) cams2_slider_pane_g4

0x969c,	// (0x00055b98) cams2_slider_pane_g5

0x2da2,	// (0x0004f29e) cams2_slider_pane_g6

0x96a4,	// (0x00055ba0) cams2_slider_pane_g7

0x4631,	// (0x00050b2d) camera2_autofocus_pane_cp_g1

0x4919,	// (0x00050e15) bg_popup_preview_window_pane_cp02_ParamLimits

0x4919,	// (0x00050e15) bg_popup_preview_window_pane_cp02

0x4925,	// (0x00050e21) list_fp_cale_pane_ParamLimits

0x4925,	// (0x00050e21) list_fp_cale_pane

0x4931,	// (0x00050e2d) popup_fixed_preview_cale_window_t1_ParamLimits

0x4931,	// (0x00050e2d) popup_fixed_preview_cale_window_t1

0x9ef2,	// (0x000563ee) popup_fixed_preview_cale_window_t2_ParamLimits

0x9ef2,	// (0x000563ee) popup_fixed_preview_cale_window_t2

0x9f07,	// (0x00056403) popup_fixed_preview_cale_window_t3_ParamLimits

0x9f07,	// (0x00056403) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0005bcca) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0005bcca) popup_fixed_preview_cale_window_t

0x9f1c,	// (0x00056418) list_single_fp_cale_pane_ParamLimits

0x9f1c,	// (0x00056418) list_single_fp_cale_pane

0x494f,	// (0x00050e4b) list_single_fp_cale_pane_g1_ParamLimits

0x494f,	// (0x00050e4b) list_single_fp_cale_pane_g1

0x495b,	// (0x00050e57) list_single_fp_cale_pane_g2_ParamLimits

0x495b,	// (0x00050e57) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0005bcd1) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0005bcd1) list_single_fp_cale_pane_g

0x4974,	// (0x00050e70) list_single_fp_cale_pane_t1_ParamLimits

0x4974,	// (0x00050e70) list_single_fp_cale_pane_t1

0x4986,	// (0x00050e82) list_single_fp_cale_pane_t2_ParamLimits

0x4986,	// (0x00050e82) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0005bcd8) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0005bcd8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x03cf,	// (0x0004c8cb) main_dialer_pane

0x9f2c,	// (0x00056428) aid_cell_size_keypad

0x9f36,	// (0x00056432) dialer_ne_pane

0x9f40,	// (0x0005643c) grid_dialer_command_1_pane

0x9f48,	// (0x00056444) grid_dialer_command_2_pane

0x9f50,	// (0x0005644c) grid_dialer_keypad_pane

0x9f64,	// (0x00056460) bg_popup_call_pane_cp06_ParamLimits

0x9f64,	// (0x00056460) bg_popup_call_pane_cp06

0x9f70,	// (0x0005646c) dialer_ne_clear_pane_ParamLimits

0x9f70,	// (0x0005646c) dialer_ne_clear_pane

0x49b9,	// (0x00050eb5) dialer_ne_pane_g1

0x49c1,	// (0x00050ebd) dialer_ne_pane_t1_ParamLimits

0x49c1,	// (0x00050ebd) dialer_ne_pane_t1

0x9f7c,	// (0x00056478) dialer_ne_pane_t2_ParamLimits

0x9f7c,	// (0x00056478) dialer_ne_pane_t2

0x9f99,	// (0x00056495) dialer_ne_pane_t3_ParamLimits

0x9f99,	// (0x00056495) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0005bcdd) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0005bcdd) dialer_ne_pane_t

0x9fbd,	// (0x000564b9) dialer_ne_pane_t3_copy1_ParamLimits

0x9fbd,	// (0x000564b9) dialer_ne_pane_t3_copy1

0x9fe1,	// (0x000564dd) cell_dialer_keypad_pane_ParamLimits

0x9fe1,	// (0x000564dd) cell_dialer_keypad_pane

0x9ff8,	// (0x000564f4) cell_dialer_command_1_pane_ParamLimits

0x9ff8,	// (0x000564f4) cell_dialer_command_1_pane

0xa00e,	// (0x0005650a) cell_dialer_command_2_pane_ParamLimits

0xa00e,	// (0x0005650a) cell_dialer_command_2_pane

0x49d3,	// (0x00050ecf) bg_button_pane_cp02_ParamLimits

0x49d3,	// (0x00050ecf) bg_button_pane_cp02

0xa01d,	// (0x00056519) cell_dialer_keypad_pane_g1_ParamLimits

0xa01d,	// (0x00056519) cell_dialer_keypad_pane_g1

0x49d3,	// (0x00050ecf) bg_button_pane_cp03_ParamLimits

0x49d3,	// (0x00050ecf) bg_button_pane_cp03

0xa031,	// (0x0005652d) cell_dialer_command_1_pane_g1_ParamLimits

0xa031,	// (0x0005652d) cell_dialer_command_1_pane_g1

0x49df,	// (0x00050edb) bg_button_pane_cp04

0xa045,	// (0x00056541) cell_dialer_command_2_pane_g1

0x2d7f,	// (0x0004f27b) bg_button_pane_cp06

0x49e7,	// (0x00050ee3) dialer_ne_clear_pane_g1

0x7f8a,	// (0x00054486) navi_pane_g2

0x7fb8,	// (0x000544b4) navi_pane_g3

0x0002,

0xf409,	// (0x0005b905) navi_pane_g

0x7fe3,	// (0x000544df) navi_pane_mv_g2

0x800a,	// (0x00054506) navi_pane_mv_g5

0x8012,	// (0x0005450e) navi_pane_mv_t1

0x232b,	// (0x0004e827) main_clock2_pane

0xa07b,	// (0x00056577) main_clock2_list_pane_ParamLimits

0xa07b,	// (0x00056577) main_clock2_list_pane

0xa0a5,	// (0x000565a1) main_clock2_pane_t1_ParamLimits

0xa0a5,	// (0x000565a1) main_clock2_pane_t1

0xa0d3,	// (0x000565cf) main_clock2_pane_t2_ParamLimits

0xa0d3,	// (0x000565cf) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0005bce4) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0005bce4) main_clock2_pane_t

0xa13c,	// (0x00056638) popup_clock_analogue_window_cp03_ParamLimits

0xa13c,	// (0x00056638) popup_clock_analogue_window_cp03

0xa15c,	// (0x00056658) popup_clock_digital_window_cp02_ParamLimits

0xa15c,	// (0x00056658) popup_clock_digital_window_cp02

0xa1cd,	// (0x000566c9) main_clock2_list_single_pane_ParamLimits

0xa1cd,	// (0x000566c9) main_clock2_list_single_pane

0x2d7f,	// (0x0004f27b) list_highlight_pane_cp05

0x49ef,	// (0x00050eeb) main_clock2_list_single_pane_t1

0x6d96,	// (0x00053292) popup_toolbar_window_cp04_ParamLimits

0x97b0,	// (0x00055cac) camera2_autofocus_pane_g2_ParamLimits

0x97b0,	// (0x00055cac) camera2_autofocus_pane_g2

0x97bc,	// (0x00055cb8) camera2_autofocus_pane_g3_ParamLimits

0x97bc,	// (0x00055cb8) camera2_autofocus_pane_g3

0x97c8,	// (0x00055cc4) camera2_autofocus_pane_g4_ParamLimits

0x97c8,	// (0x00055cc4) camera2_autofocus_pane_g4

0x97d4,	// (0x00055cd0) camera2_autofocus_pane_g5_ParamLimits

0x97d4,	// (0x00055cd0) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0005bc2d) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0005bc2d) camera2_autofocus_pane_g

0x9951,	// (0x00055e4d) camera2_autofocus_pane_cp_g2

0x9959,	// (0x00055e55) camera2_autofocus_pane_cp_g3

0x9961,	// (0x00055e5d) camera2_autofocus_pane_cp_g4

0x9969,	// (0x00055e65) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0005bc93) camera2_autofocus_pane_cp_g

0x9f5c,	// (0x00056458) popup_dialer_spcha_window

0x03cf,	// (0x0004c8cb) bg_popup_sub_pane_cp07

0x49fd,	// (0x00050ef9) list_spcha_pane

0x4a05,	// (0x00050f01) list_single_spcha_pane_ParamLimits

0x4a05,	// (0x00050f01) list_single_spcha_pane

0x03cf,	// (0x0004c8cb) list_highlight_pane_cp06

0x4a16,	// (0x00050f12) list_single_spcha_pane_t1

0x3bf3,	// (0x000500ef) popup_call2_audio_out_window_g4_ParamLimits

0x3bf3,	// (0x000500ef) popup_call2_audio_out_window_g4

0x03cf,	// (0x0004c8cb) main_imed2_pane

0x41da,	// (0x000506d6) popup_imed_adjust2_window

0x8e5a,	// (0x00055356) popup_imed_trans_window_ParamLimits

0x8e5a,	// (0x00055356) popup_imed_trans_window

0x4461,	// (0x0005095d) popup_blid_sat_info2_window_t1

0x446f,	// (0x0005096b) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0005bbc2) popup_blid_sat_info2_window_t

0xa277,	// (0x00056773) aid_size_cell_colour_35

0xa291,	// (0x0005678d) aid_size_cell_colour_112

0xa2a8,	// (0x000567a4) aid_size_cell_effect

0x0448,	// (0x0004c944) bg_tb_trans_pane_cp02

0x32f4,	// (0x0004f7f0) heading_imed_pane

0xa2c2,	// (0x000567be) listscroll_imed_pane

0x4a24,	// (0x00050f20) heading_imed_pane_g1

0x4a2c,	// (0x00050f28) heading_imed_pane_t1

0x4a3a,	// (0x00050f36) grid_imed_colour_35_pane_ParamLimits

0x4a3a,	// (0x00050f36) grid_imed_colour_35_pane

0xa2ce,	// (0x000567ca) grid_imed_effect_pane

0x4a56,	// (0x00050f52) list_imed_aspect_pane

0xa2de,	// (0x000567da) scroll_pane_cp027_ParamLimits

0xa2de,	// (0x000567da) scroll_pane_cp027

0xa2ea,	// (0x000567e6) cell_imed_effect_pane_ParamLimits

0xa2ea,	// (0x000567e6) cell_imed_effect_pane

0x4a5e,	// (0x00050f5a) cell_imed_colour_pane_ParamLimits

0x4a5e,	// (0x00050f5a) cell_imed_colour_pane

0x4aa8,	// (0x00050fa4) cell_imed_colour_pane_g1_ParamLimits

0x4aa8,	// (0x00050fa4) cell_imed_colour_pane_g1

0x4ab9,	// (0x00050fb5) hgihlgiht_grid_pane_cp016_ParamLimits

0x4ab9,	// (0x00050fb5) hgihlgiht_grid_pane_cp016

0xa306,	// (0x00056802) cell_imed_effect_pane_g1

0xa30e,	// (0x0005680a) grid_highlight_pane_cp017

0x4aca,	// (0x00050fc6) list_imed_single_pane_ParamLimits

0x4aca,	// (0x00050fc6) list_imed_single_pane

0x03cf,	// (0x0004c8cb) list_highlight_pane_cp07

0x4ade,	// (0x00050fda) list_imed_aspect_pane_comp1_t1

0x41ae,	// (0x000506aa) bg_tb_trans_pane_cp05

0x4b00,	// (0x00050ffc) popup_imed_adjust2_window_g1

0x4b27,	// (0x00051023) popup_imed_adjust2_window_t1

0x4b3f,	// (0x0005103b) slider_imed_adjust_pane

0x4b53,	// (0x0005104f) slider_imed_adjust_pane_g1

0x4b63,	// (0x0005105f) slider_imed_adjust_pane_g2

0x4b73,	// (0x0005106f) slider_imed_adjust_pane_g3

0x4b84,	// (0x00051080) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0005bd01) slider_imed_adjust_pane_g

0xa317,	// (0x00056813) aid_size_cell_clipart2

0xa323,	// (0x0005681f) grid_imed_clipart_pane

0x4b95,	// (0x00051091) scroll_pane_cp031

0xa32d,	// (0x00056829) cell_imed_clipart_pane_ParamLimits

0xa32d,	// (0x00056829) cell_imed_clipart_pane

0xa34b,	// (0x00056847) cell_imed_clipart_pane_g1

0x03cf,	// (0x0004c8cb) grid_highlight_pane_cp014

0xa087,	// (0x00056583) main_clock2_pane_g1_ParamLimits

0xa087,	// (0x00056583) main_clock2_pane_g1

0xa178,	// (0x00056674) aid_call2_pane_cp10

0xa18a,	// (0x00056686) aid_call_pane_cp10

0x2cb4,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g1

0x2cb4,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g2

0xa19c,	// (0x00056698) popup_clock_analogue_window_cp10_g3

0xa19c,	// (0x00056698) popup_clock_analogue_window_cp10_g4

0x2cb4,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0005bcef) popup_clock_analogue_window_cp10_g

0xa1ae,	// (0x000566aa) popup_clock_analogue_window_cp10_t1

0xa1df,	// (0x000566db) clock_digital_number_pane_cp10_ParamLimits

0xa1df,	// (0x000566db) clock_digital_number_pane_cp10

0xa1f7,	// (0x000566f3) clock_digital_number_pane_cp11_ParamLimits

0xa1f7,	// (0x000566f3) clock_digital_number_pane_cp11

0xa20f,	// (0x0005670b) clock_digital_number_pane_cp12_ParamLimits

0xa20f,	// (0x0005670b) clock_digital_number_pane_cp12

0xa227,	// (0x00056723) clock_digital_number_pane_cp13_ParamLimits

0xa227,	// (0x00056723) clock_digital_number_pane_cp13

0xa23f,	// (0x0005673b) clock_digital_separator_pane_cp10_ParamLimits

0xa23f,	// (0x0005673b) clock_digital_separator_pane_cp10

0xa257,	// (0x00056753) popup_clock_digital_window_cp02_t1_ParamLimits

0xa257,	// (0x00056753) popup_clock_digital_window_cp02_t1

0x2258,	// (0x0004e754) clock_digital_number_pane_cp10_g1

0x2258,	// (0x0004e754) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0005bd0a) clock_digital_number_pane_cp10_g

0x2258,	// (0x0004e754) clock_digital_separator_pane_cp10_g1

0x2258,	// (0x0004e754) clock_digital_separator_pane_g2_cp10

0x2d4f,	// (0x0004f24b) navi_pane_vded_g4

0x2d58,	// (0x0004f254) navi_pane_vded_g5

0x2d61,	// (0x0004f25d) navi_pane_vded_t1

0x03cf,	// (0x0004c8cb) main_vded_pane

0xa354,	// (0x00056850) main_vded_pane_g1

0xa360,	// (0x0005685c) main_vded_pane_g2

0xa36a,	// (0x00056866) main_vded_pane_g3

0x0002,

0xf813,	// (0x0005bd0f) main_vded_pane_g

0xa374,	// (0x00056870) main_vded_pane_t1

0xa382,	// (0x0005687e) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0005bd16) main_vded_pane_t

0xa390,	// (0x0005688c) vded_slider_pane

0xa39a,	// (0x00056896) vded_video_pane

0x4b9d,	// (0x00051099) vded_video_pane_g1

0xa3a6,	// (0x000568a2) vded_video_pane_g2

0x4631,	// (0x00050b2d) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0005bd1b) vded_video_pane_g

0x4ba7,	// (0x000510a3) vded_slider_pane_g1

0x4376,	// (0x00050872) vded_slider_pane_g2

0x4bb0,	// (0x000510ac) vded_slider_pane_g3

0x4bb9,	// (0x000510b5) vded_slider_pane_g4

0x4bc2,	// (0x000510be) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0005bd22) vded_slider_pane_g

0x9e8a,	// (0x00056386) mup3_rocker_pane_ParamLimits

0x9e8a,	// (0x00056386) mup3_rocker_pane

0xa3af,	// (0x000568ab) mup3_control_keys_pane_g1

0xa3b7,	// (0x000568b3) mup3_control_keys_pane_g2

0xa3bf,	// (0x000568bb) mup3_control_keys_pane_g3

0xa3c7,	// (0x000568c3) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0005bd2d) mup3_control_keys_pane_g

0x5e6b,	// (0x00052367) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5e6b,	// (0x00052367) popup_toolbar2_fixed_window_cp01

0x9ea6,	// (0x000563a2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9ea6,	// (0x000563a2) popup_toolbar2_fixed_window_cp02

0x351a,	// (0x0004fa16) popup_call2_audio_second_window_t4_ParamLimits

0x351a,	// (0x0004fa16) popup_call2_audio_second_window_t4

0x3a60,	// (0x0004ff5c) popup_call2_audio_first_window_t6_ParamLimits

0x3a60,	// (0x0004ff5c) popup_call2_audio_first_window_t6

0x3cf6,	// (0x000501f2) popup_call2_audio_out_window_t6_ParamLimits

0x3cf6,	// (0x000501f2) popup_call2_audio_out_window_t6

0x03cf,	// (0x0004c8cb) main_vitu_pane

0xa3d7,	// (0x000568d3) aid_size_cell_itu_ParamLimits

0xa3d7,	// (0x000568d3) aid_size_cell_itu

0x0c90,	// (0x0004d18c) bg_popup_window_pane_cp08_ParamLimits

0x0c90,	// (0x0004d18c) bg_popup_window_pane_cp08

0xa3e5,	// (0x000568e1) field_vitu_entry_pane_ParamLimits

0xa3e5,	// (0x000568e1) field_vitu_entry_pane

0xa3f4,	// (0x000568f0) grid_vitu_function_pane_ParamLimits

0xa3f4,	// (0x000568f0) grid_vitu_function_pane

0xa404,	// (0x00056900) grid_vitu_itu_pane_ParamLimits

0xa404,	// (0x00056900) grid_vitu_itu_pane

0xa414,	// (0x00056910) cell_vitu_itu_pane_ParamLimits

0xa414,	// (0x00056910) cell_vitu_itu_pane

0xa42b,	// (0x00056927) cell_vitu_function_pane_ParamLimits

0xa42b,	// (0x00056927) cell_vitu_function_pane

0x0448,	// (0x0004c944) bg_popup_sub_pane_cp08_ParamLimits

0x0448,	// (0x0004c944) bg_popup_sub_pane_cp08

0xa43f,	// (0x0005693b) field_vitu_entry_pane_t1_ParamLimits

0xa43f,	// (0x0005693b) field_vitu_entry_pane_t1

0x4be3,	// (0x000510df) field_vitu_entry_pane_t2_ParamLimits

0x4be3,	// (0x000510df) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0005bd3b) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0005bd3b) field_vitu_entry_pane_t

0x4c00,	// (0x000510fc) bg_button_pane_cp05_ParamLimits

0x4c00,	// (0x000510fc) bg_button_pane_cp05

0xa459,	// (0x00056955) cell_vitu_itu_pane_g1

0xa471,	// (0x0005696d) cell_vitu_itu_pane_t1_ParamLimits

0xa471,	// (0x0005696d) cell_vitu_itu_pane_t1

0xa483,	// (0x0005697f) cell_vitu_itu_pane_t2_ParamLimits

0xa483,	// (0x0005697f) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0005bd40) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0005bd40) cell_vitu_itu_pane_t

0x4c0e,	// (0x0005110a) bg_button_pane_cp07

0xa4b8,	// (0x000569b4) cell_vitu_function_pane_g1

0x6113,	// (0x0005260f) main_calc_pane_g1

0x5c6c,	// (0x00052168) aid_visual_content_pane

0x03cf,	// (0x0004c8cb) main_vradio_pane

0xa4c1,	// (0x000569bd) main_vradio_pane_g1_ParamLimits

0xa4c1,	// (0x000569bd) main_vradio_pane_g1

0x4c18,	// (0x00051114) main_vradio_pane_g2_ParamLimits

0x4c18,	// (0x00051114) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0005bd47) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0005bd47) main_vradio_pane_g

0xa4cf,	// (0x000569cb) main_vradio_pane_t1_ParamLimits

0xa4cf,	// (0x000569cb) main_vradio_pane_t1

0xa4e1,	// (0x000569dd) main_vradio_pane_t2_ParamLimits

0xa4e1,	// (0x000569dd) main_vradio_pane_t2

0x4c25,	// (0x00051121) main_vradio_pane_t3_ParamLimits

0x4c25,	// (0x00051121) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0005bd4c) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0005bd4c) main_vradio_pane_t

0xa4f3,	// (0x000569ef) vradio_rocker_control_pane_ParamLimits

0xa4f3,	// (0x000569ef) vradio_rocker_control_pane

0xa4ff,	// (0x000569fb) vradio_station_info_pane_ParamLimits

0xa4ff,	// (0x000569fb) vradio_station_info_pane

0x4c39,	// (0x00051135) vradio_frequency_info_pane_ParamLimits

0x4c39,	// (0x00051135) vradio_frequency_info_pane

0x4631,	// (0x00050b2d) vradio_station_info_pane_g1

0x4c48,	// (0x00051144) vradio_station_info_pane_t1_ParamLimits

0x4c48,	// (0x00051144) vradio_station_info_pane_t1

0x4c6a,	// (0x00051166) vradio_station_info_pane_t2_ParamLimits

0x4c6a,	// (0x00051166) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0005bd53) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0005bd53) vradio_station_info_pane_t

0x4c7c,	// (0x00051178) vradio_tuning_pane

0x4c84,	// (0x00051180) vradio_rocker_control_pane_g1

0x4c8c,	// (0x00051188) vradio_rocker_control_pane_g2

0x4c94,	// (0x00051190) vradio_rocker_control_pane_g3

0x4c9c,	// (0x00051198) vradio_rocker_control_pane_g4

0x4ca4,	// (0x000511a0) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0005bd58) vradio_rocker_control_pane_g

0xa50c,	// (0x00056a08) vradio_frequency_info_pane_g1

0x4cac,	// (0x000511a8) vradio_frequency_info_pane_t1_ParamLimits

0x4cac,	// (0x000511a8) vradio_frequency_info_pane_t1

0xa516,	// (0x00056a12) vradio_tuning_pane_g1

0xa521,	// (0x00056a1d) vradio_tuning_pane_t1

0x0405,	// (0x0004c901) area_side_right_pane_ParamLimits

0x0405,	// (0x0004c901) area_side_right_pane

0x4175,	// (0x00050671) status_small_pane_g1

0x417d,	// (0x00050679) status_small_pane_g2

0x4186,	// (0x00050682) status_small_pane_g3

0x418f,	// (0x0005068b) status_small_pane_g4

0x0003,

0xf61c,	// (0x0005bb18) status_small_pane_g

0x4198,	// (0x00050694) status_small_pane_t1

0x03cf,	// (0x0004c8cb) main_video3_pane

0x4cc0,	// (0x000511bc) cams_zoom_vslider_pane

0x4cc8,	// (0x000511c4) image3_wide_pane_ParamLimits

0x4cc8,	// (0x000511c4) image3_wide_pane

0x4ce2,	// (0x000511de) image3_wide_small_pane

0x4cee,	// (0x000511ea) main_video3_pane_g1_ParamLimits

0x4cee,	// (0x000511ea) main_video3_pane_g1

0x4d0a,	// (0x00051206) main_video3_pane_g2_ParamLimits

0x4d0a,	// (0x00051206) main_video3_pane_g2

0x0001,

0xf867,	// (0x0005bd63) main_video3_pane_g_ParamLimits

0xf867,	// (0x0005bd63) main_video3_pane_g

0x4d26,	// (0x00051222) main_video3_pane_t1_ParamLimits

0x4d26,	// (0x00051222) main_video3_pane_t1

0x4d51,	// (0x0005124d) main_video3_pane_t2_ParamLimits

0x4d51,	// (0x0005124d) main_video3_pane_t2

0x4d7e,	// (0x0005127a) main_video3_pane_t3_ParamLimits

0x4d7e,	// (0x0005127a) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0005bd68) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0005bd68) main_video3_pane_t

0x4dab,	// (0x000512a7) cams_zoom_vslider_pane_g1

0x4db4,	// (0x000512b0) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0005bd6f) cams_zoom_vslider_pane_g

0x4dbc,	// (0x000512b8) small_slider_vertical_pane

0x4631,	// (0x00050b2d) small_slider_vertical_pane_g1

0x4631,	// (0x00050b2d) small_slider_vertical_pane_g2

0x4dc4,	// (0x000512c0) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0005bd74) small_slider_vertical_pane_g

0x03cf,	// (0x0004c8cb) main_hwr_training_pane

0x4dcd,	// (0x000512c9) hwr_training_instruct_pane_ParamLimits

0x4dcd,	// (0x000512c9) hwr_training_instruct_pane

0xa530,	// (0x00056a2c) hwr_training_navi_pane_ParamLimits

0xa530,	// (0x00056a2c) hwr_training_navi_pane

0xa54a,	// (0x00056a46) hwr_training_write_pane_ParamLimits

0xa54a,	// (0x00056a46) hwr_training_write_pane

0x03cf,	// (0x0004c8cb) bg_frame_shadow_pane

0x4e04,	// (0x00051300) hwr_training_write_pane_g1

0x4e0c,	// (0x00051308) hwr_training_write_pane_g2

0x4e14,	// (0x00051310) hwr_training_write_pane_g3

0x4e1c,	// (0x00051318) hwr_training_write_pane_g4

0x4e24,	// (0x00051320) hwr_training_write_pane_g5

0x4e2c,	// (0x00051328) hwr_training_write_pane_g6

0x4e34,	// (0x00051330) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0005bd7b) hwr_training_write_pane_g

0xa582,	// (0x00056a7e) hwr_training_navi_pane_g1_ParamLimits

0xa582,	// (0x00056a7e) hwr_training_navi_pane_g1

0xa594,	// (0x00056a90) hwr_training_navi_pane_g2_ParamLimits

0xa594,	// (0x00056a90) hwr_training_navi_pane_g2

0xa5a6,	// (0x00056aa2) hwr_training_navi_pane_g3_ParamLimits

0xa5a6,	// (0x00056aa2) hwr_training_navi_pane_g3

0xa5b6,	// (0x00056ab2) hwr_training_navi_pane_g4_ParamLimits

0xa5b6,	// (0x00056ab2) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0005bd8a) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0005bd8a) hwr_training_navi_pane_g

0xa5d0,	// (0x00056acc) hwr_training_navi_pane_t1

0xa5de,	// (0x00056ada) list_single_hwr_training_instruct_pane_ParamLimits

0xa5de,	// (0x00056ada) list_single_hwr_training_instruct_pane

0x4e3c,	// (0x00051338) list_single_hwr_training_instruct_pane_t1

0x4569,	// (0x00050a65) bg_frame_shadow_pane_g1

0x4e4b,	// (0x00051347) bg_frame_shadow_pane_g2

0x4e53,	// (0x0005134f) bg_frame_shadow_pane_g3

0x4e5b,	// (0x00051357) bg_frame_shadow_pane_g4

0x4e63,	// (0x0005135f) bg_frame_shadow_pane_g5

0x4e6b,	// (0x00051367) bg_frame_shadow_pane_g6

0x4e73,	// (0x0005136f) bg_frame_shadow_pane_g7

0x23f6,	// (0x0004e8f2) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0005bd95) bg_frame_shadow_pane_g

0x03cf,	// (0x0004c8cb) main_video_tele_dialer_pane

0xa5fd,	// (0x00056af9) aid_size_cell_video_keypad_ParamLimits

0xa5fd,	// (0x00056af9) aid_size_cell_video_keypad

0xa60d,	// (0x00056b09) grid_video_dialer_keypad_pane_ParamLimits

0xa60d,	// (0x00056b09) grid_video_dialer_keypad_pane

0xa641,	// (0x00056b3d) video_down_pane_cp_ParamLimits

0xa641,	// (0x00056b3d) video_down_pane_cp

0xa66b,	// (0x00056b67) cell_video_dialer_keypad_pane_ParamLimits

0xa66b,	// (0x00056b67) cell_video_dialer_keypad_pane

0x4e7b,	// (0x00051377) bg_button_pane_cp08_ParamLimits

0x4e7b,	// (0x00051377) bg_button_pane_cp08

0xa682,	// (0x00056b7e) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa682,	// (0x00056b7e) cell_video_dialer_keypad_pane_g1

0x9e7e,	// (0x0005637a) mup3_rocker2_pane_ParamLimits

0x9e7e,	// (0x0005637a) mup3_rocker2_pane

0x4631,	// (0x00050b2d) mup3_rocker2_pane_g1

0x8ddc,	// (0x000552d8) main_dialer2_pane

0x03cf,	// (0x0004c8cb) main_mp4_pane

0xa6c5,	// (0x00056bc1) main_mp4_pane_g1_ParamLimits

0xa6c5,	// (0x00056bc1) main_mp4_pane_g1

0xa6d3,	// (0x00056bcf) main_mp4_pane_g2_ParamLimits

0xa6d3,	// (0x00056bcf) main_mp4_pane_g2

0xa6e1,	// (0x00056bdd) main_mp4_pane_g3_ParamLimits

0xa6e1,	// (0x00056bdd) main_mp4_pane_g3

0xa734,	// (0x00056c30) main_mp4_pane_g4_ParamLimits

0xa734,	// (0x00056c30) main_mp4_pane_g4

0xa74e,	// (0x00056c4a) main_mp4_pane_g5_ParamLimits

0xa74e,	// (0x00056c4a) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0005bdb5) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0005bdb5) main_mp4_pane_g

0xa782,	// (0x00056c7e) main_mp4_pane_t1_ParamLimits

0xa782,	// (0x00056c7e) main_mp4_pane_t1

0xa7de,	// (0x00056cda) main_mp4_pane_t2_ParamLimits

0xa7de,	// (0x00056cda) main_mp4_pane_t2

0xde5f,	// (0x0005a35b) main_mp4_pane_t3_ParamLimits

0xde5f,	// (0x0005a35b) main_mp4_pane_t3

0xa830,	// (0x00056d2c) main_mp4_pane_t4_ParamLimits

0xa830,	// (0x00056d2c) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0005bdc2) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0005bdc2) main_mp4_pane_t

0xa870,	// (0x00056d6c) mp4_progress_pane_ParamLimits

0xa870,	// (0x00056d6c) mp4_progress_pane

0xa8ba,	// (0x00056db6) mp4_rocker_pane_ParamLimits

0xa8ba,	// (0x00056db6) mp4_rocker_pane

0xde87,	// (0x0005a383) mp4_progress_pane_t1

0xdea0,	// (0x0005a39c) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0005bdcb) mp4_progress_pane_t

0xdeb9,	// (0x0005a3b5) mup_progress_pane_cp04

0xdec5,	// (0x0005a3c1) mp4_rocker_pane_g1

0xa8dc,	// (0x00056dd8) aid_cell_size_keypad2_ParamLimits

0xa8dc,	// (0x00056dd8) aid_cell_size_keypad2

0xa8ec,	// (0x00056de8) dialer2_ne_pane_ParamLimits

0xa8ec,	// (0x00056de8) dialer2_ne_pane

0xa8f8,	// (0x00056df4) grid_dialer2_keypad_pane_ParamLimits

0xa8f8,	// (0x00056df4) grid_dialer2_keypad_pane

0xdecf,	// (0x0005a3cb) bg_popup_call_pane_cp07_ParamLimits

0xdecf,	// (0x0005a3cb) bg_popup_call_pane_cp07

0xa906,	// (0x00056e02) dialer2_ne_pane_t1_ParamLimits

0xa906,	// (0x00056e02) dialer2_ne_pane_t1

0xa92b,	// (0x00056e27) cell_dialer2_keypad_pane_ParamLimits

0xa92b,	// (0x00056e27) cell_dialer2_keypad_pane

0xdeef,	// (0x0005a3eb) bg_button_pane_pane_cp04_ParamLimits

0xdeef,	// (0x0005a3eb) bg_button_pane_pane_cp04

0xa942,	// (0x00056e3e) cell_dialer2_keypad_pane_g1_ParamLimits

0xa942,	// (0x00056e3e) cell_dialer2_keypad_pane_g1

0x6c68,	// (0x00053164) aid_placing_vt_set_content_ParamLimits

0x6c68,	// (0x00053164) aid_placing_vt_set_content

0x6c90,	// (0x0005318c) aid_placing_vt_set_title_ParamLimits

0x6c90,	// (0x0005318c) aid_placing_vt_set_title

0x03cf,	// (0x0004c8cb) main_image3_pane

0xa9dc,	// (0x00056ed8) area_side_right_pane_cp01_ParamLimits

0xa9dc,	// (0x00056ed8) area_side_right_pane_cp01

0xaa0b,	// (0x00056f07) main_image3_pane_g1_ParamLimits

0xaa0b,	// (0x00056f07) main_image3_pane_g1

0xaa19,	// (0x00056f15) main_image3_pane_g2_ParamLimits

0xaa19,	// (0x00056f15) main_image3_pane_g2

0xaa32,	// (0x00056f2e) main_image3_pane_g3_ParamLimits

0xaa32,	// (0x00056f2e) main_image3_pane_g3

0xaa4b,	// (0x00056f47) main_image3_pane_g4_ParamLimits

0xaa4b,	// (0x00056f47) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0005bdda) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0005bdda) main_image3_pane_g

0xaa64,	// (0x00056f60) main_image3_pane_t1_ParamLimits

0xaa64,	// (0x00056f60) main_image3_pane_t1

0xaa89,	// (0x00056f85) main_image3_pane_t2_ParamLimits

0xaa89,	// (0x00056f85) main_image3_pane_t2

0xaaa8,	// (0x00056fa4) main_image3_pane_t3_ParamLimits

0xaaa8,	// (0x00056fa4) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0005bde3) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0005bde3) main_image3_pane_t

0x0c90,	// (0x0004d18c) grid_sctrl_middle_pane_cp01_ParamLimits

0x0c90,	// (0x0004d18c) grid_sctrl_middle_pane_cp01

0xab09,	// (0x00057005) cell_sctrl_middle_pane_cp01_ParamLimits

0xab09,	// (0x00057005) cell_sctrl_middle_pane_cp01

0xab1a,	// (0x00057016) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xab1a,	// (0x00057016) cell_sctrl_middle_pane_cp01_g1

0x03cf,	// (0x0004c8cb) main_call4_pane

0xab27,	// (0x00057023) aid_size_button_call4_ParamLimits

0xab27,	// (0x00057023) aid_size_button_call4

0xab59,	// (0x00057055) call4_windows_pane_ParamLimits

0xab59,	// (0x00057055) call4_windows_pane

0xab75,	// (0x00057071) grid_call4_button_pane_ParamLimits

0xab75,	// (0x00057071) grid_call4_button_pane

0xdefb,	// (0x0005a3f7) call4_windows_conf_pane

0xdf16,	// (0x0005a412) popup_call4_audio_first_window_ParamLimits

0xdf16,	// (0x0005a412) popup_call4_audio_first_window

0xdf64,	// (0x0005a460) popup_call4_audio_second_window_ParamLimits

0xdf64,	// (0x0005a460) popup_call4_audio_second_window

0xdf7a,	// (0x0005a476) popup_call4_audio_wait_window_ParamLimits

0xdf7a,	// (0x0005a476) popup_call4_audio_wait_window

0xab99,	// (0x00057095) cell_call4_button_pane_ParamLimits

0xab99,	// (0x00057095) cell_call4_button_pane

0xabbc,	// (0x000570b8) bg_button_pane_cp09_ParamLimits

0xabbc,	// (0x000570b8) bg_button_pane_cp09

0xabc8,	// (0x000570c4) cell_call4_button_pane_g1_ParamLimits

0xabc8,	// (0x000570c4) cell_call4_button_pane_g1

0xabd5,	// (0x000570d1) cell_call4_button_pane_t1_ParamLimits

0xabd5,	// (0x000570d1) cell_call4_button_pane_t1

0xdfc2,	// (0x0005a4be) popup_call4_audio_conf_window_ParamLimits

0xdfc2,	// (0x0005a4be) popup_call4_audio_conf_window

0x9eb3,	// (0x000563af) mup3_progress_pane_t1_ParamLimits

0x9eca,	// (0x000563c6) mup3_progress_pane_t2_ParamLimits

0x48dc,	// (0x00050dd8) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0005bcbc) mup3_progress_pane_t_ParamLimits

0x48f3,	// (0x00050def) mup_progress_pane_cp03_ParamLimits

0xa3cf,	// (0x000568cb) mup3_control_keys_pane_g4_copy1

0xa89e,	// (0x00056d9a) mp4_rocker2_pane_ParamLimits

0xa89e,	// (0x00056d9a) mp4_rocker2_pane

0xdfdc,	// (0x0005a4d8) mp4_rocker2_pane_g1

0xdfe4,	// (0x0005a4e0) mp4_rocker2_pane_g2

0xabe7,	// (0x000570e3) mp4_rocker2_pane_g3

0xabef,	// (0x000570eb) mp4_rocker2_pane_g4

0xabf7,	// (0x000570f3) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0005bdec) mp4_rocker2_pane_g

0x03cf,	// (0x0004c8cb) main_camera4_pane

0x03cf,	// (0x0004c8cb) main_video4_pane

0xa61d,	// (0x00056b19) main_video_tele_dialer_pane_t1_ParamLimits

0xa61d,	// (0x00056b19) main_video_tele_dialer_pane_t1

0xa62f,	// (0x00056b2b) main_video_tele_dialer_pane_t2_ParamLimits

0xa62f,	// (0x00056b2b) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0005bda6) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0005bda6) main_video_tele_dialer_pane_t

0xac17,	// (0x00057113) cam4_autofocus_pane_ParamLimits

0xac17,	// (0x00057113) cam4_autofocus_pane

0xac2f,	// (0x0005712b) cam4_image_uncrop_pane_ParamLimits

0xac2f,	// (0x0005712b) cam4_image_uncrop_pane

0xac48,	// (0x00057144) cam4_indicators_pane_ParamLimits

0xac48,	// (0x00057144) cam4_indicators_pane

0xac64,	// (0x00057160) main_camera4_pane_g1_ParamLimits

0xac64,	// (0x00057160) main_camera4_pane_g1

0xac70,	// (0x0005716c) main_camera4_pane_g2_ParamLimits

0xac70,	// (0x0005716c) main_camera4_pane_g2

0xac70,	// (0x0005716c) main_camera4_pane_g3_ParamLimits

0xac70,	// (0x0005716c) main_camera4_pane_g3

0xac7c,	// (0x00057178) main_camera4_pane_g4_ParamLimits

0xac7c,	// (0x00057178) main_camera4_pane_g4

0xac88,	// (0x00057184) main_camera4_pane_g5_ParamLimits

0xac88,	// (0x00057184) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0005bdf7) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0005bdf7) main_camera4_pane_g

0xaca2,	// (0x0005719e) main_camera4_pane_t1_ParamLimits

0xaca2,	// (0x0005719e) main_camera4_pane_t1

0xacec,	// (0x000571e8) bg_tb_trans_pane_cp06

0xad02,	// (0x000571fe) cam4_indicators_pane_g1

0xad0f,	// (0x0005720b) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0005be12) cam4_indicators_pane_g

0xad2f,	// (0x0005722b) cam4_indicators_pane_t1

0xad59,	// (0x00057255) main_video4_pane_g1_ParamLimits

0xad59,	// (0x00057255) main_video4_pane_g1

0xad65,	// (0x00057261) main_video4_pane_g2_ParamLimits

0xad65,	// (0x00057261) main_video4_pane_g2

0xad71,	// (0x0005726d) main_video4_pane_g3_ParamLimits

0xad71,	// (0x0005726d) main_video4_pane_g3

0xad7d,	// (0x00057279) main_video4_pane_g4_ParamLimits

0xad7d,	// (0x00057279) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0005be19) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0005be19) main_video4_pane_g

0xad9f,	// (0x0005729b) vid4_indicators_pane_ParamLimits

0xad9f,	// (0x0005729b) vid4_indicators_pane

0xadbd,	// (0x000572b9) video4_image_uncrop_cif_pane_ParamLimits

0xadbd,	// (0x000572b9) video4_image_uncrop_cif_pane

0xadcc,	// (0x000572c8) video4_image_uncrop_nhd_pane_ParamLimits

0xadcc,	// (0x000572c8) video4_image_uncrop_nhd_pane

0xac2f,	// (0x0005712b) video4_image_uncrop_vga_pane_ParamLimits

0xac2f,	// (0x0005712b) video4_image_uncrop_vga_pane

0xaddb,	// (0x000572d7) bg_tb_trans_pane_cp07

0xad02,	// (0x000571fe) vid4_indicators_pane_g1

0xadf3,	// (0x000572ef) vid4_indicators_pane_g2

0xae00,	// (0x000572fc) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0005be24) vid4_indicators_pane_g

0xae2d,	// (0x00057329) vid4_indicators_pane_t1

0xae47,	// (0x00057343) cam4_autofocus_pane_g1

0xae4f,	// (0x0005734b) cam4_autofocus_pane_g2

0xae57,	// (0x00057353) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0005be2f) cam4_autofocus_pane_g

0xae5f,	// (0x0005735b) cam4_autofocus_pane_g3_copy1

0xa64f,	// (0x00056b4b) video_down_pane_cp_t1

0xa65d,	// (0x00056b59) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0005bdab) video_down_pane_cp_t

0x0c90,	// (0x0004d18c) popup_vitu2_window_ParamLimits

0x0c90,	// (0x0004d18c) popup_vitu2_window

0xae67,	// (0x00057363) aid_size_cell2_itu2_ParamLimits

0xae67,	// (0x00057363) aid_size_cell2_itu2

0xae89,	// (0x00057385) aid_size_cell_itu2_ParamLimits

0xae89,	// (0x00057385) aid_size_cell_itu2

0xaecd,	// (0x000573c9) bg_popup_window_pane_cp09_ParamLimits

0xaecd,	// (0x000573c9) bg_popup_window_pane_cp09

0xaedb,	// (0x000573d7) field_vitu2_entry_pane_ParamLimits

0xaedb,	// (0x000573d7) field_vitu2_entry_pane

0xaefb,	// (0x000573f7) grid_vitu2_function_pane_ParamLimits

0xaefb,	// (0x000573f7) grid_vitu2_function_pane

0xaf3f,	// (0x0005743b) grid_vitu2_itu_pane_ParamLimits

0xaf3f,	// (0x0005743b) grid_vitu2_itu_pane

0xafb3,	// (0x000574af) cell_vitu2_itu_pane_ParamLimits

0xafb3,	// (0x000574af) cell_vitu2_itu_pane

0xafca,	// (0x000574c6) cell_vitu2_function_pane_ParamLimits

0xafca,	// (0x000574c6) cell_vitu2_function_pane

0xdfec,	// (0x0005a4e8) bg_popup_call_pane_cp08_ParamLimits

0xdfec,	// (0x0005a4e8) bg_popup_call_pane_cp08

0xe005,	// (0x0005a501) field_vitu2_entry_pane_g1

0xe011,	// (0x0005a50d) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0005be36) field_vitu2_entry_pane_g

0x0ca8,	// (0x0004d1a4) field_vitu2_entry_pane_t1_ParamLimits

0x0ca8,	// (0x0004d1a4) field_vitu2_entry_pane_t1

0x0cc5,	// (0x0004d1c1) field_vitu2_entry_pane_t2_ParamLimits

0x0cc5,	// (0x0004d1c1) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0005be3d) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0005be3d) field_vitu2_entry_pane_t

0xb00e,	// (0x0005750a) bg_button_pane_cp010_ParamLimits

0xb00e,	// (0x0005750a) bg_button_pane_cp010

0xb01c,	// (0x00057518) cell_vitu2_itu_pane_g1

0xb03a,	// (0x00057536) cell_vitu2_itu_pane_t1_ParamLimits

0xb03a,	// (0x00057536) cell_vitu2_itu_pane_t1

0x5b71,	// (0x0005206d) cell_vitu2_itu_pane_t2_ParamLimits

0x5b71,	// (0x0005206d) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0005be47) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0005be47) cell_vitu2_itu_pane_t

0xaddb,	// (0x000572d7) bg_button_pane_cp011

0xb08c,	// (0x00057588) cell_vitu2_function_pane_g1

0x03cf,	// (0x0004c8cb) main_myfav_hc_pane

0xaaea,	// (0x00056fe6) popup_image3_note_pane_ParamLimits

0xaaea,	// (0x00056fe6) popup_image3_note_pane

0xaaf8,	// (0x00056ff4) popup_image3_tool_bar_pane_ParamLimits

0xaaf8,	// (0x00056ff4) popup_image3_tool_bar_pane

0x5bdf,	// (0x000520db) cell_vitu2_itu_pane_t3_ParamLimits

0x5bdf,	// (0x000520db) cell_vitu2_itu_pane_t3

0x03cf,	// (0x0004c8cb) bg_popup_trans_pane

0xe033,	// (0x0005a52f) grid_image3_tool_bar_pane

0xe03d,	// (0x0005a539) bg_popup_trans_pane_g1

0x2735,	// (0x0004ec31) bg_popup_trans_pane_g2

0xe045,	// (0x0005a541) bg_popup_trans_pane_g3

0xe04d,	// (0x0005a549) bg_popup_trans_pane_g4

0xe055,	// (0x0005a551) bg_popup_trans_pane_g5

0xe05d,	// (0x0005a559) bg_popup_trans_pane_g6

0xe065,	// (0x0005a561) bg_popup_trans_pane_g7

0xe06d,	// (0x0005a569) bg_popup_trans_pane_g8

0x2715,	// (0x0004ec11) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0005be4e) bg_popup_trans_pane_g

0xe075,	// (0x0005a571) cell_image3_tool_bar_pane_ParamLimits

0xe075,	// (0x0005a571) cell_image3_tool_bar_pane

0x4631,	// (0x00050b2d) cell_image3_tool_bar_pane_g1

0x03cf,	// (0x0004c8cb) bg_popup_trans_pane_cp1

0xe08b,	// (0x0005a587) popup_image3_note_pane_t1

0xe099,	// (0x0005a595) popup_image3_note_pane_t2

0xe0a7,	// (0x0005a5a3) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0005be61) popup_image3_note_pane_t

0xe0b7,	// (0x0005a5b3) popup_image3_note_pane_t3_copy1

0xb0a0,	// (0x0005759c) bg_myfav_hc_instruction_pane_ParamLimits

0xb0a0,	// (0x0005759c) bg_myfav_hc_instruction_pane

0xb0b8,	// (0x000575b4) cell_myfav_contact_pane_ParamLimits

0xb0b8,	// (0x000575b4) cell_myfav_contact_pane

0xb0d2,	// (0x000575ce) cell_myfav_contact_pane_cp1_ParamLimits

0xb0d2,	// (0x000575ce) cell_myfav_contact_pane_cp1

0xb0ea,	// (0x000575e6) cell_myfav_contact_pane_cp2_ParamLimits

0xb0ea,	// (0x000575e6) cell_myfav_contact_pane_cp2

0xb102,	// (0x000575fe) cell_myfav_contact_pane_cp3_ParamLimits

0xb102,	// (0x000575fe) cell_myfav_contact_pane_cp3

0xb119,	// (0x00057615) cell_myfav_contact_pane_cp4_ParamLimits

0xb119,	// (0x00057615) cell_myfav_contact_pane_cp4

0xb12f,	// (0x0005762b) cell_myfav_contact_pane_cp5_ParamLimits

0xb12f,	// (0x0005762b) cell_myfav_contact_pane_cp5

0xb143,	// (0x0005763f) cell_myfav_contact_pane_cp6_ParamLimits

0xb143,	// (0x0005763f) cell_myfav_contact_pane_cp6

0xb157,	// (0x00057653) cell_myfav_contact_pane_cp7_ParamLimits

0xb157,	// (0x00057653) cell_myfav_contact_pane_cp7

0xe0c5,	// (0x0005a5c1) listscroll_gen_pane_cp05

0xb16f,	// (0x0005766b) main_myfav_hc_pane_g1_ParamLimits

0xb16f,	// (0x0005766b) main_myfav_hc_pane_g1

0xb189,	// (0x00057685) main_myfav_hc_pane_g2_ParamLimits

0xb189,	// (0x00057685) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0005be68) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0005be68) main_myfav_hc_pane_g

0xb1bb,	// (0x000576b7) main_myfav_hc_pane_t1_ParamLimits

0xb1bb,	// (0x000576b7) main_myfav_hc_pane_t1

0xe0ce,	// (0x0005a5ca) main_myfav_hc_pane_t2_ParamLimits

0xe0ce,	// (0x0005a5ca) main_myfav_hc_pane_t2

0xe0e0,	// (0x0005a5dc) main_myfav_hc_pane_t3_ParamLimits

0xe0e0,	// (0x0005a5dc) main_myfav_hc_pane_t3

0xb1d2,	// (0x000576ce) main_myfav_hc_pane_t4_ParamLimits

0xb1d2,	// (0x000576ce) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0005be6f) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0005be6f) main_myfav_hc_pane_t

0x4631,	// (0x00050b2d) bg_myfav_hc_instruction_pane_g1

0xe0f2,	// (0x0005a5ee) cell_myfav_contact_pane_g1_ParamLimits

0xe0f2,	// (0x0005a5ee) cell_myfav_contact_pane_g1

0xe0f2,	// (0x0005a5ee) cell_myfav_contact_pane_g2_ParamLimits

0xe0f2,	// (0x0005a5ee) cell_myfav_contact_pane_g2

0xe0fe,	// (0x0005a5fa) cell_myfav_contact_pane_g3_ParamLimits

0xe0fe,	// (0x0005a5fa) cell_myfav_contact_pane_g3

0x48c6,	// (0x00050dc2) cell_myfav_contact_pane_g4_ParamLimits

0x48c6,	// (0x00050dc2) cell_myfav_contact_pane_g4

0xe10b,	// (0x0005a607) cell_myfav_contact_pane_g5_ParamLimits

0xe10b,	// (0x0005a607) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0005be7a) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0005be7a) cell_myfav_contact_pane_g

0xb1a3,	// (0x0005769f) main_myfav_hc_pane_g3_ParamLimits

0xb1a3,	// (0x0005769f) main_myfav_hc_pane_g3

0x5dae,	// (0x000522aa) popup_adpt_find_window

0xb1fc,	// (0x000576f8) afind_page_pane_ParamLimits

0xb1fc,	// (0x000576f8) afind_page_pane

0xb209,	// (0x00057705) aid_size_cell_afind_ParamLimits

0xb209,	// (0x00057705) aid_size_cell_afind

0xb223,	// (0x0005771f) bg_popup_sub_pane_cp09_ParamLimits

0xb223,	// (0x0005771f) bg_popup_sub_pane_cp09

0xb230,	// (0x0005772c) find_pane_cp01_ParamLimits

0xb230,	// (0x0005772c) find_pane_cp01

0xe117,	// (0x0005a613) grid_afind_control_pane_ParamLimits

0xe117,	// (0x0005a613) grid_afind_control_pane

0xb23d,	// (0x00057739) grid_afind_pane_ParamLimits

0xb23d,	// (0x00057739) grid_afind_pane

0xb259,	// (0x00057755) cell_afind_pane_ParamLimits

0xb259,	// (0x00057755) cell_afind_pane

0x4631,	// (0x00050b2d) afind_page_pane_g1

0xb2a5,	// (0x000577a1) afind_page_pane_g2

0xb2ae,	// (0x000577aa) afind_page_pane_g3

0x0002,

0xf989,	// (0x0005be85) afind_page_pane_g

0xb2b7,	// (0x000577b3) afind_page_pane_t1

0xe12b,	// (0x0005a627) cell_afind_grid_control_pane_ParamLimits

0xe12b,	// (0x0005a627) cell_afind_grid_control_pane

0xdeef,	// (0x0005a3eb) bg_button_pane_cp69_ParamLimits

0xdeef,	// (0x0005a3eb) bg_button_pane_cp69

0xb2d7,	// (0x000577d3) cell_afind_pane_g1_ParamLimits

0xb2d7,	// (0x000577d3) cell_afind_pane_g1

0xb2e4,	// (0x000577e0) cell_afind_pane_t1_ParamLimits

0xb2e4,	// (0x000577e0) cell_afind_pane_t1

0x252c,	// (0x0004ea28) bg_button_pane_cp72

0xe13a,	// (0x0005a636) cell_afind_grid_control_pane_g1

0x8954,	// (0x00054e50) aid_image_placing_area_ParamLimits

0x8954,	// (0x00054e50) aid_image_placing_area

0x4bcb,	// (0x000510c7) field_vitu_entry_pane_g1_ParamLimits

0x4bcb,	// (0x000510c7) field_vitu_entry_pane_g1

0x4bd7,	// (0x000510d3) field_vitu_entry_pane_g2_ParamLimits

0x4bd7,	// (0x000510d3) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0005bd36) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0005bd36) field_vitu_entry_pane_g

0xa459,	// (0x00056955) cell_vitu_itu_pane_g1_ParamLimits

0xa49b,	// (0x00056997) cell_vitu_itu_pane_t3_ParamLimits

0xa49b,	// (0x00056997) cell_vitu_itu_pane_t3

0xde87,	// (0x0005a383) mp4_progress_pane_t1_ParamLimits

0xdea0,	// (0x0005a39c) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0005bdcb) mp4_progress_pane_t_ParamLimits

0xdeb9,	// (0x0005a3b5) mup_progress_pane_cp04_ParamLimits

0xb1e6,	// (0x000576e2) main_myfav_hc_pane_t5_ParamLimits

0xb1e6,	// (0x000576e2) main_myfav_hc_pane_t5

0x03f5,	// (0x0004c8f1) aid_zoom_text_primary

0x5dae,	// (0x000522aa) popup_adpt_find_window_ParamLimits

0x0448,	// (0x0004c944) main_cam_set_pane

0xac56,	// (0x00057152) cam4_zoom_pane_ParamLimits

0xac56,	// (0x00057152) cam4_zoom_pane

0xb2f6,	// (0x000577f2) main_cam_set_pane_g1_ParamLimits

0xb2f6,	// (0x000577f2) main_cam_set_pane_g1

0xb304,	// (0x00057800) main_cam_set_pane_g2_ParamLimits

0xb304,	// (0x00057800) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0005be8c) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0005be8c) main_cam_set_pane_g

0xb310,	// (0x0005780c) main_cam_set_pane_t1_ParamLimits

0xb310,	// (0x0005780c) main_cam_set_pane_t1

0xb32c,	// (0x00057828) main_cset_listscroll_pane_ParamLimits

0xb32c,	// (0x00057828) main_cset_listscroll_pane

0xb35b,	// (0x00057857) main_cset_slider_pane_ParamLimits

0xb35b,	// (0x00057857) main_cset_slider_pane

0xe14b,	// (0x0005a647) main_cset_list_pane_ParamLimits

0xe14b,	// (0x0005a647) main_cset_list_pane

0xe15b,	// (0x0005a657) scroll_pane_cp028

0xb37c,	// (0x00057878) aid_area_touch_slider

0xb398,	// (0x00057894) cset_slider_pane

0xb3c2,	// (0x000578be) main_cset_slider_pane_g1

0xb3d7,	// (0x000578d3) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0005be91) main_cset_slider_pane_g

0xe194,	// (0x0005a690) main_cset_slider_pane_t1

0xb493,	// (0x0005798f) main_cset_slider_pane_t2

0xb4ad,	// (0x000579a9) main_cset_slider_pane_t3

0xb4c7,	// (0x000579c3) main_cset_slider_pane_t4

0xb4e1,	// (0x000579dd) main_cset_slider_pane_t5

0xb4fd,	// (0x000579f9) main_cset_slider_pane_t6

0xb512,	// (0x00057a0e) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0005beb6) main_cset_slider_pane_t

0xb616,	// (0x00057b12) cset_list_set_pane_ParamLimits

0xb616,	// (0x00057b12) cset_list_set_pane

0xb627,	// (0x00057b23) aid_position_infowindow_above

0xb62f,	// (0x00057b2b) aid_position_infowindow_below

0x0ce2,	// (0x0004d1de) cset_list_set_pane_g1_ParamLimits

0x0ce2,	// (0x0004d1de) cset_list_set_pane_g1

0x0f29,	// (0x0004d425) cset_list_set_pane_g3_ParamLimits

0x0f29,	// (0x0004d425) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0005bed5) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0005bed5) cset_list_set_pane_g

0x0cee,	// (0x0004d1ea) cset_list_set_pane_t1_ParamLimits

0x0cee,	// (0x0004d1ea) cset_list_set_pane_t1

0x0448,	// (0x0004c944) list_highlight_pane_cp021_ParamLimits

0x0448,	// (0x0004c944) list_highlight_pane_cp021

0x2eb7,	// (0x0004f3b3) cset_slider_pane_g1

0x2ec9,	// (0x0004f3c5) cset_slider_pane_g2

0x2ec0,	// (0x0004f3bc) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0005beda) cset_slider_pane_g

0xb637,	// (0x00057b33) aid_area_touch_cam4_zoom

0xb63f,	// (0x00057b3b) cam4_zoom_cont_pane

0xb647,	// (0x00057b43) cam4_zoom_pane_g1

0xb64f,	// (0x00057b4b) cam4_zoom_pane_g2

0xb657,	// (0x00057b53) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0005bee1) cam4_zoom_pane_g

0xb65f,	// (0x00057b5b) cam4_zoom_cont_pane_g1

0xb668,	// (0x00057b64) cam4_zoom_cont_pane_g2

0xb671,	// (0x00057b6d) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0005bee8) cam4_zoom_cont_pane_g

0xab41,	// (0x0005703d) call4_image_pane_ParamLimits

0xab41,	// (0x0005703d) call4_image_pane

0xdefb,	// (0x0005a3f7) call4_windows_conf_pane_ParamLimits

0xdf42,	// (0x0005a43e) popup_call4_audio_in_window_ParamLimits

0xdf42,	// (0x0005a43e) popup_call4_audio_in_window

0x03cf,	// (0x0004c8cb) bg_popup_call2_act_pane_cp02

0xdfba,	// (0x0005a4b6) call4_list_conf_pane

0x4631,	// (0x00050b2d) call4_image_pane_g1

0x4631,	// (0x00050b2d) call4_image_pane_g2

0x0001,

0xf700,	// (0x0005bbfc) call4_image_pane_g

0xe234,	// (0x0005a730) list_single_graphic_popup_conf4_pane_ParamLimits

0xe234,	// (0x0005a730) list_single_graphic_popup_conf4_pane

0x03cf,	// (0x0004c8cb) list_highlight_pane_cp022

0xe249,	// (0x0005a745) list_single_graphic_popup_conf4_pane_g1

0x2bb1,	// (0x0004f0ad) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0005beef) list_single_graphic_popup_conf4_pane_g

0xe251,	// (0x0005a74d) list_single_graphic_popup_conf4_pane_t1

0x6dea,	// (0x000532e6) popup_vtel_slider_window_ParamLimits

0x6dea,	// (0x000532e6) popup_vtel_slider_window

0xdedd,	// (0x0005a3d9) dialer2_ne_pane_t2_ParamLimits

0xdedd,	// (0x0005a3d9) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0005bdd0) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0005bdd0) dialer2_ne_pane_t

0x0448,	// (0x0004c944) bg_popup_sub_pane_cp010_ParamLimits

0x0448,	// (0x0004c944) bg_popup_sub_pane_cp010

0xb67a,	// (0x00057b76) popup_vtel_slider_window_g1_ParamLimits

0xb67a,	// (0x00057b76) popup_vtel_slider_window_g1

0xb686,	// (0x00057b82) popup_vtel_slider_window_g2_ParamLimits

0xb686,	// (0x00057b82) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0005bef4) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0005bef4) popup_vtel_slider_window_g

0xb6ce,	// (0x00057bca) vtel_slider_pane_ParamLimits

0xb6ce,	// (0x00057bca) vtel_slider_pane

0xb6dd,	// (0x00057bd9) vtel_slider_pane_g1_ParamLimits

0xb6dd,	// (0x00057bd9) vtel_slider_pane_g1

0xb6ea,	// (0x00057be6) vtel_slider_pane_g2_ParamLimits

0xb6ea,	// (0x00057be6) vtel_slider_pane_g2

0xb6f7,	// (0x00057bf3) vtel_slider_pane_g3_ParamLimits

0xb6f7,	// (0x00057bf3) vtel_slider_pane_g3

0xb6dd,	// (0x00057bd9) vtel_slider_pane_g4_ParamLimits

0xb6dd,	// (0x00057bd9) vtel_slider_pane_g4

0xb704,	// (0x00057c00) vtel_slider_pane_g5_ParamLimits

0xb704,	// (0x00057c00) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0005befd) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0005befd) vtel_slider_pane_g

0x03cf,	// (0x0004c8cb) main_gallery2_pane

0xaeaf,	// (0x000573ab) aid_size_row_itut2_dropdow_list_ParamLimits

0xaeaf,	// (0x000573ab) aid_size_row_itut2_dropdow_list

0xaf1d,	// (0x00057419) grid_vitu2_function_top_pane_ParamLimits

0xaf1d,	// (0x00057419) grid_vitu2_function_top_pane

0xaf6f,	// (0x0005746b) popup_vitu2_dropdown_list_window_ParamLimits

0xaf6f,	// (0x0005746b) popup_vitu2_dropdown_list_window

0xaf8f,	// (0x0005748b) popup_vitu2_match_list_window

0xb711,	// (0x00057c0d) cell_vitu2_function_top_pane_ParamLimits

0xb711,	// (0x00057c0d) cell_vitu2_function_top_pane

0xb731,	// (0x00057c2d) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb731,	// (0x00057c2d) cell_vitu2_function_top_pane_cp01

0xb74f,	// (0x00057c4b) cell_vitu2_function_top_wide_pane_ParamLimits

0xb74f,	// (0x00057c4b) cell_vitu2_function_top_wide_pane

0xaddb,	// (0x000572d7) bg_button_pane_cp012

0xb76d,	// (0x00057c69) cell_vitu2_function_top_pane_g1

0xb77c,	// (0x00057c78) bg_button_pane_cp013_ParamLimits

0xb77c,	// (0x00057c78) bg_button_pane_cp013

0xb798,	// (0x00057c94) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb798,	// (0x00057c94) cell_vitu2_function_top_wide_pane_g1

0xb7b0,	// (0x00057cac) bg_popup_sub_pane_cp20

0xb7be,	// (0x00057cba) list_vitu2_match_list_pane

0xe03d,	// (0x0005a539) bg_popup_sub_pane_cp20_g1

0xe045,	// (0x0005a541) bg_popup_sub_pane_cp20_g2

0x2735,	// (0x0004ec31) bg_popup_sub_pane_cp20_g3

0xe04d,	// (0x0005a549) bg_popup_sub_pane_cp20_g4

0x2715,	// (0x0004ec11) bg_popup_sub_pane_cp20_g5

0xe267,	// (0x0005a763) bg_popup_sub_pane_cp20_g6

0xe05d,	// (0x0005a559) bg_popup_sub_pane_cp20_g7

0xe065,	// (0x0005a561) bg_popup_sub_pane_cp20_g8

0xe06d,	// (0x0005a569) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0005bf08) bg_popup_sub_pane_cp20_g

0xb7d6,	// (0x00057cd2) list_vitu2_match_list_item_pane_ParamLimits

0xb7d6,	// (0x00057cd2) list_vitu2_match_list_item_pane

0xb7e8,	// (0x00057ce4) list_vitu2_match_list_item_pane_t1

0x61e8,	// (0x000526e4) bg_popup_sub_pane_cp21

0xb822,	// (0x00057d1e) grid_vitu2_dropdown_list_pane

0xb82a,	// (0x00057d26) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb82a,	// (0x00057d26) cell_vitu2_dropdown_list_char_pane

0xb84f,	// (0x00057d4b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb84f,	// (0x00057d4b) cell_vitu2_dropdown_list_ctrl_pane

0xe26f,	// (0x0005a76b) cell_vitu2_dropdown_list_char_pane_g1

0xe278,	// (0x0005a774) cell_vitu2_dropdown_list_char_pane_g2

0xe281,	// (0x0005a77d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0005bf25) cell_vitu2_dropdown_list_char_pane_g

0xb87d,	// (0x00057d79) cell_vitu2_dropdown_list_char_pane_t1

0xb88b,	// (0x00057d87) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb88b,	// (0x00057d87) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb89b,	// (0x00057d97) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb89b,	// (0x00057d97) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb8ac,	// (0x00057da8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb8ac,	// (0x00057da8) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb8bc,	// (0x00057db8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb8bc,	// (0x00057db8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xacec,	// (0x000571e8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xacec,	// (0x000571e8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0005bf2c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0005bf2c) cell_vitu2_dropdown_list_ctrl_pane_g

0xb8d5,	// (0x00057dd1) aid_size_cell_gallery2_ParamLimits

0xb8d5,	// (0x00057dd1) aid_size_cell_gallery2

0xb8e3,	// (0x00057ddf) grid_gallery2_pane_ParamLimits

0xb8e3,	// (0x00057ddf) grid_gallery2_pane

0xb8f2,	// (0x00057dee) scroll_pane_cp029_ParamLimits

0xb8f2,	// (0x00057dee) scroll_pane_cp029

0xb8fe,	// (0x00057dfa) cell_gallery2_pane_ParamLimits

0xb8fe,	// (0x00057dfa) cell_gallery2_pane

0xe28a,	// (0x0005a786) cell_gallery2_pane_g2

0xb928,	// (0x00057e24) cell_gallery2_pane_g3

0xe294,	// (0x0005a790) cell_gallery2_pane_g4

0xe29c,	// (0x0005a798) cell_gallery2_pane_g5

0x2d7f,	// (0x0004f27b) grid_highlight_pane_cp10

0xaf8f,	// (0x0005748b) popup_vitu2_match_list_window_ParamLimits

0xafa3,	// (0x0005749f) popup_vitu2_query_window_ParamLimits

0xafa3,	// (0x0005749f) popup_vitu2_query_window

0x61e8,	// (0x000526e4) bg_vitu2_candi_button_pane

0xe26f,	// (0x0005a76b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe278,	// (0x0005a774) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe281,	// (0x0005a77d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb930,	// (0x00057e2c) bg_button_pane_cp015

0xb942,	// (0x00057e3e) bg_button_pane_cp016

0xb955,	// (0x00057e51) bg_button_pane_cp017

0x41ae,	// (0x000506aa) bg_popup_sub_pane_cp22

0xe2a4,	// (0x0005a7a0) popup_vitu2_query_window_g1

0xb99a,	// (0x00057e96) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0005bf37) popup_vitu2_query_window_g

0xb9b7,	// (0x00057eb3) popup_vitu2_query_window_t1_ParamLimits

0xb9b7,	// (0x00057eb3) popup_vitu2_query_window_t1

0xb9ea,	// (0x00057ee6) popup_vitu2_query_window_t2_ParamLimits

0xb9ea,	// (0x00057ee6) popup_vitu2_query_window_t2

0xb9fc,	// (0x00057ef8) popup_vitu2_query_window_t3_ParamLimits

0xb9fc,	// (0x00057ef8) popup_vitu2_query_window_t3

0xba24,	// (0x00057f20) popup_vitu2_query_window_t4_ParamLimits

0xba24,	// (0x00057f20) popup_vitu2_query_window_t4

0xba47,	// (0x00057f43) popup_vitu2_query_window_t5_ParamLimits

0xba47,	// (0x00057f43) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0005bf3e) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0005bf3e) popup_vitu2_query_window_t

0xe143,	// (0x0005a63f) main_cset_text_pane

0xb37c,	// (0x00057878) aid_area_touch_slider_ParamLimits

0xb398,	// (0x00057894) cset_slider_pane_ParamLimits

0xb3c2,	// (0x000578be) main_cset_slider_pane_g1_ParamLimits

0xb3d7,	// (0x000578d3) main_cset_slider_pane_g2_ParamLimits

0xe164,	// (0x0005a660) main_cset_slider_pane_g3_ParamLimits

0xe164,	// (0x0005a660) main_cset_slider_pane_g3

0xb3ec,	// (0x000578e8) main_cset_slider_pane_g4_ParamLimits

0xb3ec,	// (0x000578e8) main_cset_slider_pane_g4

0xb3fb,	// (0x000578f7) main_cset_slider_pane_g5_ParamLimits

0xb3fb,	// (0x000578f7) main_cset_slider_pane_g5

0xb407,	// (0x00057903) main_cset_slider_pane_g6_ParamLimits

0xb407,	// (0x00057903) main_cset_slider_pane_g6

0xf995,	// (0x0005be91) main_cset_slider_pane_g_ParamLimits

0xe194,	// (0x0005a690) main_cset_slider_pane_t1_ParamLimits

0xb493,	// (0x0005798f) main_cset_slider_pane_t2_ParamLimits

0xb4ad,	// (0x000579a9) main_cset_slider_pane_t3_ParamLimits

0xb4c7,	// (0x000579c3) main_cset_slider_pane_t4_ParamLimits

0xb4e1,	// (0x000579dd) main_cset_slider_pane_t5_ParamLimits

0xb4fd,	// (0x000579f9) main_cset_slider_pane_t6_ParamLimits

0xb512,	// (0x00057a0e) main_cset_slider_pane_t7_ParamLimits

0xb53c,	// (0x00057a38) main_cset_slider_pane_t8_ParamLimits

0xb53c,	// (0x00057a38) main_cset_slider_pane_t8

0xb564,	// (0x00057a60) main_cset_slider_pane_t9_ParamLimits

0xb564,	// (0x00057a60) main_cset_slider_pane_t9

0xb58c,	// (0x00057a88) main_cset_slider_pane_t10_ParamLimits

0xb58c,	// (0x00057a88) main_cset_slider_pane_t10

0xb5b4,	// (0x00057ab0) main_cset_slider_pane_t11_ParamLimits

0xb5b4,	// (0x00057ab0) main_cset_slider_pane_t11

0xb5dc,	// (0x00057ad8) main_cset_slider_pane_t12_ParamLimits

0xb5dc,	// (0x00057ad8) main_cset_slider_pane_t12

0xb5f9,	// (0x00057af5) main_cset_slider_pane_t13_ParamLimits

0xb5f9,	// (0x00057af5) main_cset_slider_pane_t13

0xf9ba,	// (0x0005beb6) main_cset_slider_pane_t_ParamLimits

0x03cf,	// (0x0004c8cb) bg_popup_sub_pane_cp011

0xe2b0,	// (0x0005a7ac) main_cset_text_pane_g1

0xe2b8,	// (0x0005a7b4) main_cset_text_pane_t1

0xe2c6,	// (0x0005a7c2) main_cset_text_pane_t2

0xe2d4,	// (0x0005a7d0) main_cset_text_pane_t3

0xe2e2,	// (0x0005a7de) main_cset_text_pane_t4

0xe2f0,	// (0x0005a7ec) main_cset_text_pane_t5

0xe2fe,	// (0x0005a7fa) main_cset_text_pane_t6

0xe30c,	// (0x0005a808) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0005bf4d) main_cset_text_pane_t

0x03cf,	// (0x0004c8cb) main_cam4_burst_pane

0x03cf,	// (0x0004c8cb) main_cam5_pane

0xb2c5,	// (0x000577c1) bg_button_pane_cp019

0xb2ce,	// (0x000577ca) bg_button_pane_cp020

0xe170,	// (0x0005a66c) main_cset_slider_pane_g7_ParamLimits

0xe170,	// (0x0005a66c) main_cset_slider_pane_g7

0xe17c,	// (0x0005a678) main_cset_slider_pane_g8_ParamLimits

0xe17c,	// (0x0005a678) main_cset_slider_pane_g8

0xb41b,	// (0x00057917) main_cset_slider_pane_g9_ParamLimits

0xb41b,	// (0x00057917) main_cset_slider_pane_g9

0xb427,	// (0x00057923) main_cset_slider_pane_g10_ParamLimits

0xb427,	// (0x00057923) main_cset_slider_pane_g10

0xb433,	// (0x0005792f) main_cset_slider_pane_g11_ParamLimits

0xb433,	// (0x0005792f) main_cset_slider_pane_g11

0xb43f,	// (0x0005793b) main_cset_slider_pane_g12_ParamLimits

0xb43f,	// (0x0005793b) main_cset_slider_pane_g12

0xb44b,	// (0x00057947) main_cset_slider_pane_g13_ParamLimits

0xb44b,	// (0x00057947) main_cset_slider_pane_g13

0xb457,	// (0x00057953) main_cset_slider_pane_g14_ParamLimits

0xb457,	// (0x00057953) main_cset_slider_pane_g14

0xb463,	// (0x0005795f) main_cset_slider_pane_g15_ParamLimits

0xb463,	// (0x0005795f) main_cset_slider_pane_g15

0xe1c2,	// (0x0005a6be) main_cset_slider_pane_t14_ParamLimits

0xe1c2,	// (0x0005a6be) main_cset_slider_pane_t14

0xe1fb,	// (0x0005a6f7) main_cset_slider_pane_t15_ParamLimits

0xe1fb,	// (0x0005a6f7) main_cset_slider_pane_t15

0xbac0,	// (0x00057fbc) aid_cam4_burst_size_cell_ParamLimits

0xbac0,	// (0x00057fbc) aid_cam4_burst_size_cell

0xbadc,	// (0x00057fd8) grid_cam4_burst_pane_ParamLimits

0xbadc,	// (0x00057fd8) grid_cam4_burst_pane

0xbb0e,	// (0x0005800a) linegrid_cam4_burst_pane_ParamLimits

0xbb0e,	// (0x0005800a) linegrid_cam4_burst_pane

0xbb2e,	// (0x0005802a) scroll_pane_cp30_ParamLimits

0xbb2e,	// (0x0005802a) scroll_pane_cp30

0xbb3a,	// (0x00058036) cell_cam4_burst_pane_ParamLimits

0xbb3a,	// (0x00058036) cell_cam4_burst_pane

0xe31a,	// (0x0005a816) linegrid_cam4_burst_pane_g1_ParamLimits

0xe31a,	// (0x0005a816) linegrid_cam4_burst_pane_g1

0xbb7a,	// (0x00058076) linegrid_cam4_burst_pane_g2_ParamLimits

0xbb7a,	// (0x00058076) linegrid_cam4_burst_pane_g2

0xe327,	// (0x0005a823) linegrid_cam4_burst_pane_g3_ParamLimits

0xe327,	// (0x0005a823) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0005bf5c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0005bf5c) linegrid_cam4_burst_pane_g

0xbb8b,	// (0x00058087) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbb8b,	// (0x00058087) linegrid_cam4_burst_pane_g3_copy1

0xe334,	// (0x0005a830) linegrid_cam4_burst_pane_g4_ParamLimits

0xe334,	// (0x0005a830) linegrid_cam4_burst_pane_g4

0xbba5,	// (0x000580a1) linegrid_cam4_burst_pane_g5_ParamLimits

0xbba5,	// (0x000580a1) linegrid_cam4_burst_pane_g5

0xbbb6,	// (0x000580b2) linegrid_cam4_burst_pane_g6_ParamLimits

0xbbb6,	// (0x000580b2) linegrid_cam4_burst_pane_g6

0xe341,	// (0x0005a83d) linegrid_cam4_burst_pane_g7_ParamLimits

0xe341,	// (0x0005a83d) linegrid_cam4_burst_pane_g7

0xbbcd,	// (0x000580c9) cell_cam4_burst_pane_g1

0xe35a,	// (0x0005a856) main_cam5_pane_t1_ParamLimits

0xe35a,	// (0x0005a856) main_cam5_pane_t1

0xe36c,	// (0x0005a868) main_cam5_pane_t2_ParamLimits

0xe36c,	// (0x0005a868) main_cam5_pane_t2

0xe37e,	// (0x0005a87a) main_cam5_pane_t3_ParamLimits

0xe37e,	// (0x0005a87a) main_cam5_pane_t3

0xe390,	// (0x0005a88c) main_cam5_pane_t4_ParamLimits

0xe390,	// (0x0005a88c) main_cam5_pane_t4

0xe3a8,	// (0x0005a8a4) main_cam5_pane_t5_ParamLimits

0xe3a8,	// (0x0005a8a4) main_cam5_pane_t5

0xe3bc,	// (0x0005a8b8) main_cam5_pane_t6_ParamLimits

0xe3bc,	// (0x0005a8b8) main_cam5_pane_t6

0xe3d0,	// (0x0005a8cc) main_cam5_pane_t7_ParamLimits

0xe3d0,	// (0x0005a8cc) main_cam5_pane_t7

0xe3e2,	// (0x0005a8de) main_cam5_pane_t8_ParamLimits

0xe3e2,	// (0x0005a8de) main_cam5_pane_t8

0xe400,	// (0x0005a8fc) main_cam5_pane_t9_ParamLimits

0xe400,	// (0x0005a8fc) main_cam5_pane_t9

0xe412,	// (0x0005a90e) main_cam5_pane_t10_ParamLimits

0xe412,	// (0x0005a90e) main_cam5_pane_t10

0xe424,	// (0x0005a920) main_cam5_pane_t11_ParamLimits

0xe424,	// (0x0005a920) main_cam5_pane_t11

0xe438,	// (0x0005a934) main_cam5_pane_t12_ParamLimits

0xe438,	// (0x0005a934) main_cam5_pane_t12

0xe44f,	// (0x0005a94b) main_cam5_pane_t13_ParamLimits

0xe44f,	// (0x0005a94b) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0005bf68) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0005bf68) main_cam5_pane_t

0x5e5c,	// (0x00052358) popup_scut_keymap_window_ParamLimits

0x5e5c,	// (0x00052358) popup_scut_keymap_window

0xbbe0,	// (0x000580dc) aid_size_cell_brow_shortcut

0x2d7f,	// (0x0004f27b) bg_popup_window_pane_cp010

0xbbec,	// (0x000580e8) grid_scut_pane

0xbbf8,	// (0x000580f4) cell_scut_pane_ParamLimits

0xbbf8,	// (0x000580f4) cell_scut_pane

0xbc13,	// (0x0005810f) cell_scut_pane_g1

0xe472,	// (0x0005a96e) cell_scut_pane_t1

0xe481,	// (0x0005a97d) cell_scut_pane_t2

0xbc1c,	// (0x00058118) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0005bf83) cell_scut_pane_t

0x9adf,	// (0x00055fdb) main_mup3_pane_g8_ParamLimits

0x9adf,	// (0x00055fdb) main_mup3_pane_g8

0xaebd,	// (0x000573b9) area_vitu2_query_pane_ParamLimits

0xaebd,	// (0x000573b9) area_vitu2_query_pane

0xb968,	// (0x00057e64) input_focus_pane_cp08

0xe490,	// (0x0005a98c) area_vitu2_query_pane_g1

0xbc2a,	// (0x00058126) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0005bf8a) area_vitu2_query_pane_g

0xbc3b,	// (0x00058137) area_vitu2_query_pane_t1_ParamLimits

0xbc3b,	// (0x00058137) area_vitu2_query_pane_t1

0xbc4f,	// (0x0005814b) area_vitu2_query_pane_t2_ParamLimits

0xbc4f,	// (0x0005814b) area_vitu2_query_pane_t2

0xbc63,	// (0x0005815f) area_vitu2_query_pane_t3_ParamLimits

0xbc63,	// (0x0005815f) area_vitu2_query_pane_t3

0x0d85,	// (0x0004d281) area_vitu2_query_pane_t4_ParamLimits

0x0d85,	// (0x0004d281) area_vitu2_query_pane_t4

0x0dad,	// (0x0004d2a9) area_vitu2_query_pane_t5_ParamLimits

0x0dad,	// (0x0004d2a9) area_vitu2_query_pane_t5

0x0dd5,	// (0x0004d2d1) area_vitu2_query_pane_t6_ParamLimits

0x0dd5,	// (0x0004d2d1) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0005bf8f) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0005bf8f) area_vitu2_query_pane_t

0xbc8b,	// (0x00058187) bg_button_pane_cp018

0xbc99,	// (0x00058195) bg_button_pane_cp021

0xbca5,	// (0x000581a1) bg_button_pane_cp022

0xbcb6,	// (0x000581b2) input_focus_pane_cp09

0x7f36,	// (0x00054432) aid_size_touch_mv_arrow_left

0x7f61,	// (0x0005445d) aid_size_touch_mv_arrow_right

0xb47b,	// (0x00057977) main_cset_slider_pane_g16_ParamLimits

0xb47b,	// (0x00057977) main_cset_slider_pane_g16

0xb487,	// (0x00057983) main_cset_slider_pane_g17_ParamLimits

0xb487,	// (0x00057983) main_cset_slider_pane_g17

0xbbcd,	// (0x000580c9) cell_cam4_burst_pane_g1_ParamLimits

0x03cf,	// (0x0004c8cb) compa_mode_pane

0xb692,	// (0x00057b8e) popup_vtel_slider_window_g3_ParamLimits

0xb692,	// (0x00057b8e) popup_vtel_slider_window_g3

0xb6a6,	// (0x00057ba2) popup_vtel_slider_window_g4_ParamLimits

0xb6a6,	// (0x00057ba2) popup_vtel_slider_window_g4

0xb6ba,	// (0x00057bb6) popup_vtel_slider_window_t1_ParamLimits

0xb6ba,	// (0x00057bb6) popup_vtel_slider_window_t1

0x03cf,	// (0x0004c8cb) main_cl_pane

0x41da,	// (0x000506d6) popup_imed_adjust2_window_ParamLimits

0x41ae,	// (0x000506aa) bg_tb_trans_pane_cp05_ParamLimits

0x4b00,	// (0x00050ffc) popup_imed_adjust2_window_g1_ParamLimits

0x4b0f,	// (0x0005100b) popup_imed_adjust2_window_g2_ParamLimits

0x4b0f,	// (0x0005100b) popup_imed_adjust2_window_g2

0x4b1b,	// (0x00051017) popup_imed_adjust2_window_g3_ParamLimits

0x4b1b,	// (0x00051017) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0005bcfa) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0005bcfa) popup_imed_adjust2_window_g

0x4b27,	// (0x00051023) popup_imed_adjust2_window_t1_ParamLimits

0x4b3f,	// (0x0005103b) slider_imed_adjust_pane_ParamLimits

0x4b53,	// (0x0005104f) slider_imed_adjust_pane_g1_ParamLimits

0x4b63,	// (0x0005105f) slider_imed_adjust_pane_g2_ParamLimits

0x4b73,	// (0x0005106f) slider_imed_adjust_pane_g3_ParamLimits

0x4b84,	// (0x00051080) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0005bd01) slider_imed_adjust_pane_g_ParamLimits

0xabff,	// (0x000570fb) aid_touch_area_cam4_ParamLimits

0xabff,	// (0x000570fb) aid_touch_area_cam4

0xac0f,	// (0x0005710b) battery_pane_cp01

0xac96,	// (0x00057192) main_camera4_pane_g6_ParamLimits

0xac96,	// (0x00057192) main_camera4_pane_g6

0xacb4,	// (0x000571b0) main_camera4_pane_t2_ParamLimits

0xacb4,	// (0x000571b0) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0005be04) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0005be04) main_camera4_pane_t

0xad49,	// (0x00057245) aid_touch_area_vid4_ParamLimits

0xad49,	// (0x00057245) aid_touch_area_vid4

0xad89,	// (0x00057285) main_video4_pane_g5_ParamLimits

0xad89,	// (0x00057285) main_video4_pane_g5

0xadad,	// (0x000572a9) vid4_progress_pane_ParamLimits

0xadad,	// (0x000572a9) vid4_progress_pane

0xe188,	// (0x0005a684) main_cset_slider_pane_g18_ParamLimits

0xe188,	// (0x0005a684) main_cset_slider_pane_g18

0xe34e,	// (0x0005a84a) cell_cam4_burst_pane_g2_ParamLimits

0xe34e,	// (0x0005a84a) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0005bf63) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0005bf63) cell_cam4_burst_pane_g

0xbcc7,	// (0x000581c3) bg_cl_pane_ParamLimits

0xbcc7,	// (0x000581c3) bg_cl_pane

0xbcd3,	// (0x000581cf) cl_header_pane_ParamLimits

0xbcd3,	// (0x000581cf) cl_header_pane

0xbcdf,	// (0x000581db) cl_listscroll_pane_ParamLimits

0xbcdf,	// (0x000581db) cl_listscroll_pane

0xe49c,	// (0x0005a998) bg_cl_pane_g1

0xe4a4,	// (0x0005a9a0) bg_cl_pane_g2

0xe4ac,	// (0x0005a9a8) bg_cl_pane_g3

0xe4b4,	// (0x0005a9b0) bg_cl_pane_g4

0xe4bc,	// (0x0005a9b8) bg_cl_pane_g5

0xe4c4,	// (0x0005a9c0) bg_cl_pane_g6

0xe4cc,	// (0x0005a9c8) bg_cl_pane_g7

0xe4d4,	// (0x0005a9d0) bg_cl_pane_g8

0xe4dc,	// (0x0005a9d8) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0005bf9e) bg_cl_pane_g

0xbceb,	// (0x000581e7) aid_height_cl_leading_ParamLimits

0xbceb,	// (0x000581e7) aid_height_cl_leading

0xbcf7,	// (0x000581f3) aid_height_cl_text_ParamLimits

0xbcf7,	// (0x000581f3) aid_height_cl_text

0x0c90,	// (0x0004d18c) bg_cl_header_pane_ParamLimits

0x0c90,	// (0x0004d18c) bg_cl_header_pane

0xbd0f,	// (0x0005820b) cl_header_pane_g1_ParamLimits

0xbd0f,	// (0x0005820b) cl_header_pane_g1

0xbd1c,	// (0x00058218) cl_header_pane_t1_ParamLimits

0xbd1c,	// (0x00058218) cl_header_pane_t1

0xe4e4,	// (0x0005a9e0) cl_list_pane

0xe15b,	// (0x0005a657) hc_scroll_pane_cp01

0x2715,	// (0x0004ec11) bg_cl_header_pane_g1

0xe03d,	// (0x0005a539) bg_cl_header_pane_g2

0x2735,	// (0x0004ec31) bg_cl_header_pane_g3

0xe04d,	// (0x0005a549) bg_cl_header_pane_g4

0xe045,	// (0x0005a541) bg_cl_header_pane_g5

0xe267,	// (0x0005a763) bg_cl_header_pane_g6

0xe065,	// (0x0005a561) bg_cl_header_pane_g7

0xe06d,	// (0x0005a569) bg_cl_header_pane_g8

0xe05d,	// (0x0005a559) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0005bfb1) bg_cl_header_pane_g

0xbd2e,	// (0x0005822a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbd2e,	// (0x0005822a) hc_cl_list_double_graphic_heading_pane

0x0d4d,	// (0x0004d249) hc_cl_list_single_graphic_pane_ParamLimits

0x0d4d,	// (0x0004d249) hc_cl_list_single_graphic_pane

0xbd3e,	// (0x0005823a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbd3e,	// (0x0005823a) hc_cl_list_single_graphic_pane_g1

0xbd4a,	// (0x00058246) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbd4a,	// (0x00058246) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0005bfc4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0005bfc4) hc_cl_list_single_graphic_pane_g

0xbd5e,	// (0x0005825a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbd5e,	// (0x0005825a) hc_cl_list_single_graphic_pane_t1

0xbd3e,	// (0x0005823a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbd3e,	// (0x0005823a) hc_cl_list_double_graphic_heading_pane_g1

0xbd73,	// (0x0005826f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbd73,	// (0x0005826f) hc_cl_list_double_graphic_heading_pane_g2

0xbd87,	// (0x00058283) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbd87,	// (0x00058283) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0005bfc9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0005bfc9) hc_cl_list_double_graphic_heading_pane_g

0xbd9b,	// (0x00058297) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbd9b,	// (0x00058297) hc_cl_list_double_graphic_heading_pane_t1

0xbdb0,	// (0x000582ac) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbdb0,	// (0x000582ac) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0005bfd0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0005bfd0) hc_cl_list_double_graphic_heading_pane_t

0xbdd7,	// (0x000582d3) vid4_progress_pane_g1

0xbde3,	// (0x000582df) vid4_progress_pane_g2

0xbdef,	// (0x000582eb) vid4_progress_pane_g3

0xbdfe,	// (0x000582fa) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0005bfd5) vid4_progress_pane_g

0xbe1c,	// (0x00058318) vid4_progress_pane_t1

0xbe32,	// (0x0005832e) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0005bfe0) vid4_progress_pane_t

0xbe5d,	// (0x00058359) wait_bar_pane_cp07

0x4416,	// (0x00050912) blid_firmament_pane_ParamLimits

0x4459,	// (0x00050955) popup_blid_sat_info2_window_g1

0x447d,	// (0x00050979) popup_blid_sat_info2_window_t3

0x448b,	// (0x00050987) popup_blid_sat_info2_window_t4

0x4499,	// (0x00050995) popup_blid_sat_info2_window_t5

0x44a7,	// (0x000509a3) popup_blid_sat_info2_window_t6

0x44b7,	// (0x000509b3) popup_blid_sat_info2_window_t7

0x44c5,	// (0x000509c1) popup_blid_sat_info2_window_t8

0x44d3,	// (0x000509cf) popup_blid_sat_info2_window_t9

0x44e1,	// (0x000509dd) popup_blid_sat_info2_window_t10

0x45a9,	// (0x00050aa5) aid_firma_cardinal_ParamLimits

0x45bd,	// (0x00050ab9) blid_firmament_pane_t1_ParamLimits

0x45d4,	// (0x00050ad0) blid_firmament_pane_t2_ParamLimits

0x45eb,	// (0x00050ae7) blid_firmament_pane_t3_ParamLimits

0x4602,	// (0x00050afe) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0005bbf3) blid_firmament_pane_t_ParamLimits

0x4619,	// (0x00050b15) blid_sat_info_pane_ParamLimits

0x0448,	// (0x0004c944) main_cam_set_pane_ParamLimits

0xa277,	// (0x00056773) aid_size_cell_colour_35_ParamLimits

0xa291,	// (0x0005678d) aid_size_cell_colour_112_ParamLimits

0xa2a8,	// (0x000567a4) aid_size_cell_effect_ParamLimits

0x0448,	// (0x0004c944) bg_tb_trans_pane_cp02_ParamLimits

0x32f4,	// (0x0004f7f0) heading_imed_pane_ParamLimits

0xa2c2,	// (0x000567be) listscroll_imed_pane_ParamLimits

0x37dc,	// (0x0004fcd8) popup_call2_audio_first_window_g5_ParamLimits

0x37dc,	// (0x0004fcd8) popup_call2_audio_first_window_g5

0xa9aa,	// (0x00056ea6) aid_size_touch_image3_arrow_left_ParamLimits

0xa9aa,	// (0x00056ea6) aid_size_touch_image3_arrow_left

0xa9c0,	// (0x00056ebc) aid_size_touch_image3_arrow_right_ParamLimits

0xa9c0,	// (0x00056ebc) aid_size_touch_image3_arrow_right

0xbe48,	// (0x00058344) vid4_progress_pane_t3

0xa562,	// (0x00056a5e) main_hwr_training_symbol_option_pane_ParamLimits

0xa562,	// (0x00056a5e) main_hwr_training_symbol_option_pane

0x4def,	// (0x000512eb) popup_hwr_training_preview_window_ParamLimits

0x4def,	// (0x000512eb) popup_hwr_training_preview_window

0xa5c3,	// (0x00056abf) hwr_training_navi_pane_g5_ParamLimits

0xa5c3,	// (0x00056abf) hwr_training_navi_pane_g5

0xe02b,	// (0x0005a527) popup_char_count_window

0xb7b0,	// (0x00057cac) bg_popup_sub_pane_cp20_ParamLimits

0xb7be,	// (0x00057cba) list_vitu2_match_list_pane_ParamLimits

0xb7ca,	// (0x00057cc6) vitu2_page_scroll_pane_ParamLimits

0xb7ca,	// (0x00057cc6) vitu2_page_scroll_pane

0xe4ed,	// (0x0005a9e9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe4ed,	// (0x0005a9e9) list_single_hwr_training_symbol_option_pane

0xe500,	// (0x0005a9fc) list_single_hwr_training_symbol_option_pane_g1

0xe508,	// (0x0005aa04) list_single_hwr_training_symbol_option_pane_t1

0xe516,	// (0x0005aa12) bg_button_pane_cp023

0xe51f,	// (0x0005aa1b) bg_button_pane_cp024

0xbe6f,	// (0x0005836b) vitu2_page_scroll_pane_g1

0xbe77,	// (0x00058373) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0005bfe7) vitu2_page_scroll_pane_g

0xbe81,	// (0x0005837d) vitu2_page_scroll_pane_t1

0x4376,	// (0x00050872) popup_char_count_window_g1

0xe552,	// (0x0005aa4e) popup_char_count_window_g2

0xe55b,	// (0x0005aa57) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0005bfec) popup_char_count_window_g

0xe564,	// (0x0005aa60) popup_char_count_window_t1

0x03cf,	// (0x0004c8cb) main_vded2_pane

0x4aec,	// (0x00050fe8) aid_size_cell_imed_line

0x4af6,	// (0x00050ff2) grid_imed_line_width_pane

0xae11,	// (0x0005730d) vid4_indicators_pane_g4

0xe572,	// (0x0005aa6e) cell_imed_line_width_pane_ParamLimits

0xe572,	// (0x0005aa6e) cell_imed_line_width_pane

0xe588,	// (0x0005aa84) cell_imed_line_width_pane_g1

0x4629,	// (0x00050b25) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0005bff3) cell_imed_line_width_pane_g

0xbe90,	// (0x0005838c) main_vded2_pane_g1_ParamLimits

0xbe90,	// (0x0005838c) main_vded2_pane_g1

0xbe9f,	// (0x0005839b) main_vded2_pane_g2_ParamLimits

0xbe9f,	// (0x0005839b) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0005bff8) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0005bff8) main_vded2_pane_g

0xbead,	// (0x000583a9) vded2_slider_pane_ParamLimits

0xbead,	// (0x000583a9) vded2_slider_pane

0xbeba,	// (0x000583b6) aid_size_touch_vded2_end

0xbec4,	// (0x000583c0) aid_size_touch_vded2_playhead

0xe591,	// (0x0005aa8d) aid_size_touch_vded2_start

0xe599,	// (0x0005aa95) vded2_slider_bg_pane

0xe5a2,	// (0x0005aa9e) vded2_slider_pane_g1

0xe5ab,	// (0x0005aaa7) vded2_slider_pane_g2

0xbecc,	// (0x000583c8) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0005bffd) vded2_slider_pane_g

0xde44,	// (0x0005a340) vded2_slider_bg_pane_g1

0xde4d,	// (0x0005a349) vded2_slider_bg_pane_g2

0xde56,	// (0x0005a352) vded2_slider_bg_pane_g3

0x0002,

0xf7c7,	// (0x0005bcc3) vded2_slider_bg_pane_g

0x86b4,	// (0x00054bb0) aid_postcard_touch_down_pane_ParamLimits

0x86b4,	// (0x00054bb0) aid_postcard_touch_down_pane

0x86c4,	// (0x00054bc0) aid_postcard_touch_up_pane_ParamLimits

0x86c4,	// (0x00054bc0) aid_postcard_touch_up_pane

0x03cf,	// (0x0004c8cb) main_blid2_pane

0x41bc,	// (0x000506b8) popup_blid2_search_window

0x03cf,	// (0x0004c8cb) blid2_gps_pane

0x03cf,	// (0x0004c8cb) blid2_navig_pane

0x03cf,	// (0x0004c8cb) blid2_search_pane

0x03cf,	// (0x0004c8cb) blid2_tripm_pane

0xbed5,	// (0x000583d1) blid2_search_pane_g1_ParamLimits

0xbed5,	// (0x000583d1) blid2_search_pane_g1

0xbee5,	// (0x000583e1) blid2_search_pane_t1_ParamLimits

0xbee5,	// (0x000583e1) blid2_search_pane_t1

0xbef7,	// (0x000583f3) aid_size_cell_blid2_gps_ParamLimits

0xbef7,	// (0x000583f3) aid_size_cell_blid2_gps

0xbf07,	// (0x00058403) blid2_gps_pane_g1_ParamLimits

0xbf07,	// (0x00058403) blid2_gps_pane_g1

0xbf13,	// (0x0005840f) grid_blid2_satellite_pane_ParamLimits

0xbf13,	// (0x0005840f) grid_blid2_satellite_pane

0xbf21,	// (0x0005841d) blid2_navig_pane_g1_ParamLimits

0xbf21,	// (0x0005841d) blid2_navig_pane_g1

0xbf2d,	// (0x00058429) blid2_navig_pane_t1_ParamLimits

0xbf2d,	// (0x00058429) blid2_navig_pane_t1

0xbf3f,	// (0x0005843b) blid2_navig_pane_t2_ParamLimits

0xbf3f,	// (0x0005843b) blid2_navig_pane_t2

0x0001,

0xfb08,	// (0x0005c004) blid2_navig_pane_t_ParamLimits

0xfb08,	// (0x0005c004) blid2_navig_pane_t

0xbf51,	// (0x0005844d) blid2_navig_ring_pane_ParamLimits

0xbf51,	// (0x0005844d) blid2_navig_ring_pane

0xbf61,	// (0x0005845d) blid2_speed_pane_ParamLimits

0xbf61,	// (0x0005845d) blid2_speed_pane

0xbf6d,	// (0x00058469) blid2_tripm_pane_g1_ParamLimits

0xbf6d,	// (0x00058469) blid2_tripm_pane_g1

0xbf7d,	// (0x00058479) blid2_tripm_pane_g2_ParamLimits

0xbf7d,	// (0x00058479) blid2_tripm_pane_g2

0xbf89,	// (0x00058485) blid2_tripm_pane_g3_ParamLimits

0xbf89,	// (0x00058485) blid2_tripm_pane_g3

0xbf95,	// (0x00058491) blid2_tripm_pane_g4_ParamLimits

0xbf95,	// (0x00058491) blid2_tripm_pane_g4

0xbfa1,	// (0x0005849d) blid2_tripm_pane_g5_ParamLimits

0xbfa1,	// (0x0005849d) blid2_tripm_pane_g5

0x0005,

0xfb0d,	// (0x0005c009) blid2_tripm_pane_g_ParamLimits

0xfb0d,	// (0x0005c009) blid2_tripm_pane_g

0xbfbd,	// (0x000584b9) blid2_tripm_pane_t1_ParamLimits

0xbfbd,	// (0x000584b9) blid2_tripm_pane_t1

0xbfd1,	// (0x000584cd) blid2_tripm_pane_t2_ParamLimits

0xbfd1,	// (0x000584cd) blid2_tripm_pane_t2

0xbfe3,	// (0x000584df) blid2_tripm_pane_t3_ParamLimits

0xbfe3,	// (0x000584df) blid2_tripm_pane_t3

0x0003,

0xfb1a,	// (0x0005c016) blid2_tripm_pane_t_ParamLimits

0xfb1a,	// (0x0005c016) blid2_tripm_pane_t

0xc015,	// (0x00058511) cell_blid2_satellite_pane_ParamLimits

0xc015,	// (0x00058511) cell_blid2_satellite_pane

0xc033,	// (0x0005852f) cell_blid2_satellite_pane_g1

0xe5b3,	// (0x0005aaaf) cell_blid2_satellite_pane_t1

0x4631,	// (0x00050b2d) blid2_speed_pane_g1

0xe5c1,	// (0x0005aabd) blid2_speed_pane_t1

0xe5cf,	// (0x0005aacb) blid2_speed_pane_t2

0x0001,

0xfb23,	// (0x0005c01f) blid2_speed_pane_t

0x4631,	// (0x00050b2d) blid2_navig_ring_pane_g1

0xc03c,	// (0x00058538) blid2_navig_ring_pane_g2

0xc044,	// (0x00058540) blid2_navig_ring_pane_g3

0xc04c,	// (0x00058548) blid2_navig_ring_pane_g4

0xc054,	// (0x00058550) blid2_navig_ring_pane_g5

0x0004,

0xfb28,	// (0x0005c024) blid2_navig_ring_pane_g

0x03cf,	// (0x0004c8cb) bg_popup_window_pane_cp011

0xe5dd,	// (0x0005aad9) popup_blid2_search_window_g1

0xe5e5,	// (0x0005aae1) popup_blid2_search_window_t1

0xe5f3,	// (0x0005aaef) popup_blid2_search_window_t2

0x0001,

0xfb33,	// (0x0005c02f) popup_blid2_search_window_t

0x2624,	// (0x0004eb20) main_browser_pane_g1

0x232b,	// (0x0004e827) main_browser_pane_ParamLimits

0xaddb,	// (0x000572d7) bg_button_pane_cp011_ParamLimits

0xb08c,	// (0x00057588) cell_vitu2_function_pane_g1_ParamLimits

0x41ae,	// (0x000506aa) bg_popup_sub_pane_cp22_ParamLimits

0xb968,	// (0x00057e64) input_focus_pane_cp08_ParamLimits

0xb97f,	// (0x00057e7b) popup_vitu2_query_button_pane_ParamLimits

0xb97f,	// (0x00057e7b) popup_vitu2_query_button_pane

0xb990,	// (0x00057e8c) popup_vitu2_query_input_button_pane

0xe2a4,	// (0x0005a7a0) popup_vitu2_query_window_g1_ParamLimits

0xb99a,	// (0x00057e96) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0005bf37) popup_vitu2_query_window_g_ParamLimits

0x03cf,	// (0x0004c8cb) bg_button_pane_cp026

0xc05c,	// (0x00058558) popup_vitu2_query_input_button_pane_g1

0x03cf,	// (0x0004c8cb) bg_button_pane_cp025

0xe601,	// (0x0005aafd) popup_vitu2_query_button_pane_t1

0x9835,	// (0x00055d31) main_mp3_pane_t6

0x9845,	// (0x00055d41) popup_slider_window_cp01

0xacfa,	// (0x000571f6) cam4_battery_pane

0xade9,	// (0x000572e5) cam4_battery_pane_cp02

0xbdc5,	// (0x000582c1) cam4_battery_pane_cp01

0xbdcf,	// (0x000582cb) cam4_battery_pane_cp03

0xdec5,	// (0x0005a3c1) cam4_battery_pane_g1

0x4631,	// (0x00050b2d) cam4_battery_pane_g2

0x0001,

0xfb38,	// (0x0005c034) cam4_battery_pane_g

0x44ef,	// (0x000509eb) popup_blid_sat_info2_window_t11

0x7f36,	// (0x00054432) aid_size_touch_mv_arrow_left_ParamLimits

0x7f61,	// (0x0005445d) aid_size_touch_mv_arrow_right_ParamLimits

0x2cdf,	// (0x0004f1db) navi_pane_g1_ParamLimits

0x7f8a,	// (0x00054486) navi_pane_g2_ParamLimits

0x7fb8,	// (0x000544b4) navi_pane_g3_ParamLimits

0xf409,	// (0x0005b905) navi_pane_g_ParamLimits

0x8012,	// (0x0005450e) navi_pane_mv_t1_ParamLimits

0xa2ce,	// (0x000567ca) grid_imed_effect_pane_ParamLimits

0x6cb2,	// (0x000531ae) aid_placing_vt_slider_lsc

0x2571,	// (0x0004ea6d) aid_placing_vt_slider_prt

0x0448,	// (0x0004c944) bg_tb_trans_pane_cp01_ParamLimits

0x4781,	// (0x00050c7d) popup_image_details_window_g1_ParamLimits

0x4794,	// (0x00050c90) popup_image_details_window_g2_ParamLimits

0x47a9,	// (0x00050ca5) popup_image_details_window_g3_ParamLimits

0x47a9,	// (0x00050ca5) popup_image_details_window_g3

0xf73c,	// (0x0005bc38) popup_image_details_window_g_ParamLimits

0x47bd,	// (0x00050cb9) popup_image_details_window_t1_ParamLimits

0x47cf,	// (0x00050ccb) popup_image_details_window_t2_ParamLimits

0x47e8,	// (0x00050ce4) popup_image_details_window_t3_ParamLimits

0x47fc,	// (0x00050cf8) popup_image_details_window_t4_ParamLimits

0x4817,	// (0x00050d13) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0005bc3f) popup_image_details_window_t_ParamLimits

0xbd03,	// (0x000581ff) cl_header_name_pane_ParamLimits

0xbd03,	// (0x000581ff) cl_header_name_pane

0xc064,	// (0x00058560) cl_header_name_pane_t1_ParamLimits

0xc064,	// (0x00058560) cl_header_name_pane_t1

0xc07b,	// (0x00058577) cl_header_name_pane_t2_ParamLimits

0xc07b,	// (0x00058577) cl_header_name_pane_t2

0xc0a5,	// (0x000585a1) cl_header_name_pane_t3_ParamLimits

0xc0a5,	// (0x000585a1) cl_header_name_pane_t3

0x0002,

0xfb3d,	// (0x0005c039) cl_header_name_pane_t_ParamLimits

0xfb3d,	// (0x0005c039) cl_header_name_pane_t

0x7fe3,	// (0x000544df) navi_pane_mv_g2_ParamLimits

0xe005,	// (0x0005a501) field_vitu2_entry_pane_g1_ParamLimits

0xe011,	// (0x0005a50d) field_vitu2_entry_pane_g2_ParamLimits

0xe01d,	// (0x0005a519) field_vitu2_entry_pane_g3_ParamLimits

0xe01d,	// (0x0005a519) field_vitu2_entry_pane_g3

0xf93a,	// (0x0005be36) field_vitu2_entry_pane_g_ParamLimits

0xb01c,	// (0x00057518) cell_vitu2_itu_pane_g1_ParamLimits

0xb02c,	// (0x00057528) cell_vitu2_itu_pane_g2_ParamLimits

0xb02c,	// (0x00057528) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0005be42) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0005be42) cell_vitu2_itu_pane_g

0xaddb,	// (0x000572d7) bg_vkb2_func_pane_cp05_ParamLimits

0xaddb,	// (0x000572d7) bg_vkb2_func_pane_cp05

0xaddb,	// (0x000572d7) bg_vkb2_func_pane_cp03

0xaddb,	// (0x000572d7) bg_vkb2_func_pane_cp04

0xaddb,	// (0x000572d7) bg_vkb2_func_pane_cp10_ParamLimits

0xaddb,	// (0x000572d7) bg_vkb2_func_pane_cp10

0xbca5,	// (0x000581a1) bg_vkb2_func_pane_cp08

0xbc8b,	// (0x00058187) bg_vkb2_func_pane_cp06

0xbc99,	// (0x00058195) bg_vkb2_func_pane_cp07

0xe528,	// (0x0005aa24) bg_vkb2_func_pane_cp11_ParamLimits

0xe528,	// (0x0005aa24) bg_vkb2_func_pane_cp11

0xe53d,	// (0x0005aa39) bg_vkb2_func_pane_cp12_ParamLimits

0xe53d,	// (0x0005aa39) bg_vkb2_func_pane_cp12

0x03cf,	// (0x0004c8cb) bg_vkb2_func_pane_cp09

0xe03d,	// (0x0005a539) bg_vkb2_func_pane_g1

0x2735,	// (0x0004ec31) bg_vkb2_func_pane_g2

0xe045,	// (0x0005a541) bg_vkb2_func_pane_g3

0xe04d,	// (0x0005a549) bg_vkb2_func_pane_g4

0xe267,	// (0x0005a763) bg_vkb2_func_pane_g5

0xe065,	// (0x0005a561) bg_vkb2_func_pane_g6

0xe06d,	// (0x0005a569) bg_vkb2_func_pane_g7

0xe05d,	// (0x0005a559) bg_vkb2_func_pane_g8

0x2715,	// (0x0004ec11) bg_vkb2_func_pane_g9

0x0008,

0xfb44,	// (0x0005c040) bg_vkb2_func_pane_g

0xbfaf,	// (0x000584ab) blid2_tripm_pane_g6_ParamLimits

0xbfaf,	// (0x000584ab) blid2_tripm_pane_g6

0xde7f,	// (0x0005a37b) mp4_progress_pane_g1

0xc009,	// (0x00058505) blid2_tripm_values_pane_ParamLimits

0xc009,	// (0x00058505) blid2_tripm_values_pane

0xc0ca,	// (0x000585c6) blid2_tripm_values_pane_t1

0xc0d8,	// (0x000585d4) blid2_tripm_values_pane_t2

0xc0e6,	// (0x000585e2) blid2_tripm_values_pane_t3

0xc0f4,	// (0x000585f0) blid2_tripm_values_pane_t4

0xc102,	// (0x000585fe) blid2_tripm_values_pane_t5

0xc110,	// (0x0005860c) blid2_tripm_values_pane_t6

0xc11e,	// (0x0005861a) blid2_tripm_values_pane_t7

0xc12c,	// (0x00058628) blid2_tripm_values_pane_t8

0xc13a,	// (0x00058636) blid2_tripm_values_pane_t9

0x0008,

0xfb57,	// (0x0005c053) blid2_tripm_values_pane_t

0x6cf0,	// (0x000531ec) call_video_pane_t1_ParamLimits

0x6d0d,	// (0x00053209) call_video_pane_t2_ParamLimits

0xf292,	// (0x0005b78e) call_video_pane_t_ParamLimits

0x8575,	// (0x00054a71) msg_header_pane_g1_ParamLimits

0x2efc,	// (0x0004f3f8) msg_header_pane_g2_ParamLimits

0x2efc,	// (0x0004f3f8) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0005b9a8) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0005b9a8) msg_header_pane_g

0x232b,	// (0x0004e827) main_clock2_pane_ParamLimits

0xa04d,	// (0x00056549) grid_clock2_toolbar_pane_ParamLimits

0xa04d,	// (0x00056549) grid_clock2_toolbar_pane

0xa04d,	// (0x00056549) listscroll_clock2_pane_ParamLimits

0xa04d,	// (0x00056549) listscroll_clock2_pane

0xa105,	// (0x00056601) main_clock2_pane_t3_ParamLimits

0xa105,	// (0x00056601) main_clock2_pane_t3

0xa117,	// (0x00056613) main_clock2_pane_t4_ParamLimits

0xa117,	// (0x00056613) main_clock2_pane_t4

0xe60f,	// (0x0005ab0b) cell_clock2_toolbar_pane

0xe617,	// (0x0005ab13) cell_clock2_toolbar_pane_cp01

0xe617,	// (0x0005ab13) cell_clock2_toolbar_pane_cp02

0xe61f,	// (0x0005ab1b) cell_clock2_toolbar_pane_cp03

0xe627,	// (0x0005ab23) list_clock2_pane

0x2c45,	// (0x0004f141) scroll_pane_cp10

0xe62f,	// (0x0005ab2b) list_single_clock2_pane_ParamLimits

0xe62f,	// (0x0005ab2b) list_single_clock2_pane

0x2d7f,	// (0x0004f27b) list_highlight_pane_cp08

0xe63c,	// (0x0005ab38) list_single_clock2_pane_t1

0xe64a,	// (0x0005ab46) list_single_clock2_pane_t2

0x0001,

0xfb6a,	// (0x0005c066) list_single_clock2_pane_t

0x03cf,	// (0x0004c8cb) bg_button_pane_cp10

0xe658,	// (0x0005ab54) cell_clock2_toolbar_pane_g1

0x8616,	// (0x00054b12) aid_main_viewer_pane_g1_ParamLimits

0x8616,	// (0x00054b12) aid_main_viewer_pane_g1

0x8622,	// (0x00054b1e) aid_main_viewer_pane_g2_ParamLimits

0x8622,	// (0x00054b1e) aid_main_viewer_pane_g2

0x862e,	// (0x00054b2a) aid_main_viewer_pane_g3_ParamLimits

0x862e,	// (0x00054b2a) aid_main_viewer_pane_g3

0x863f,	// (0x00054b3b) aid_main_viewer_pane_g4_ParamLimits

0x863f,	// (0x00054b3b) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0005b9b9) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0005b9b9) aid_main_viewer_pane_g

0x8dcf,	// (0x000552cb) main_calc_pane_ParamLimits

0x8ddc,	// (0x000552d8) main_dialer2_pane_ParamLimits

0x03cf,	// (0x0004c8cb) main_cam6_pane

0x03cf,	// (0x0004c8cb) main_vid6_pane

0xa059,	// (0x00056555) listscroll_gen_pane_cp06_ParamLimits

0xa059,	// (0x00056555) listscroll_gen_pane_cp06

0xa129,	// (0x00056625) main_clock2_pane_t5_ParamLimits

0xa129,	// (0x00056625) main_clock2_pane_t5

0xa178,	// (0x00056674) aid_call2_pane_cp10_ParamLimits

0xa18a,	// (0x00056686) aid_call_pane_cp10_ParamLimits

0x2cb4,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2cb4,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa19c,	// (0x00056698) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa19c,	// (0x00056698) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2cb4,	// (0x0004f1b0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0005bcef) popup_clock_analogue_window_cp10_g_ParamLimits

0xa1ae,	// (0x000566aa) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa957,	// (0x00056e53) cell_dialer2_keypad_pane_g2_ParamLimits

0xa957,	// (0x00056e53) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0005bdd5) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0005bdd5) cell_dialer2_keypad_pane_g

0xa973,	// (0x00056e6f) cell_dialer2_keypad_pane_t1

0xb369,	// (0x00057865) main_cset_text2_pane_ParamLimits

0xb369,	// (0x00057865) main_cset_text2_pane

0xe490,	// (0x0005a98c) area_vitu2_query_pane_g1_ParamLimits

0xbc2a,	// (0x00058126) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0005bf8a) area_vitu2_query_pane_g_ParamLimits

0x0dfd,	// (0x0004d2f9) area_vitu2_query_pane_t7_ParamLimits

0x0dfd,	// (0x0004d2f9) area_vitu2_query_pane_t7

0xbc8b,	// (0x00058187) bg_button_pane_cp018_ParamLimits

0xbc99,	// (0x00058195) bg_button_pane_cp021_ParamLimits

0xbca5,	// (0x000581a1) bg_button_pane_cp022_ParamLimits

0xbca5,	// (0x000581a1) bg_vkb2_func_pane_cp08_ParamLimits

0xbc8b,	// (0x00058187) bg_vkb2_func_pane_cp06_ParamLimits

0xbc99,	// (0x00058195) bg_vkb2_func_pane_cp07_ParamLimits

0xbcb6,	// (0x000581b2) input_focus_pane_cp09_ParamLimits

0xc148,	// (0x00058644) cam6_autofocus_pane_ParamLimits

0xc148,	// (0x00058644) cam6_autofocus_pane

0xc16a,	// (0x00058666) cam6_image_uncrop_pane_ParamLimits

0xc16a,	// (0x00058666) cam6_image_uncrop_pane

0xc197,	// (0x00058693) cam6_indi_pane_ParamLimits

0xc197,	// (0x00058693) cam6_indi_pane

0xc1b1,	// (0x000586ad) cam6_mode_pane_ParamLimits

0xc1b1,	// (0x000586ad) cam6_mode_pane

0xc1c5,	// (0x000586c1) cam6_timer_pane_ParamLimits

0xc1c5,	// (0x000586c1) cam6_timer_pane

0xc1d1,	// (0x000586cd) cam6_zoom_pane_ParamLimits

0xc1d1,	// (0x000586cd) cam6_zoom_pane

0xc1ef,	// (0x000586eb) cam6_mode_pane_g1_ParamLimits

0xc1ef,	// (0x000586eb) cam6_mode_pane_g1

0xc1fb,	// (0x000586f7) cam6_mode_pane_g2_ParamLimits

0xc1fb,	// (0x000586f7) cam6_mode_pane_g2

0xc207,	// (0x00058703) cam6_mode_pane_g3_ParamLimits

0xc207,	// (0x00058703) cam6_mode_pane_g3

0xc213,	// (0x0005870f) cam6_mode_pane_g4_ParamLimits

0xc213,	// (0x0005870f) cam6_mode_pane_g4

0x0003,

0xfb6f,	// (0x0005c06b) cam6_mode_pane_g_ParamLimits

0xfb6f,	// (0x0005c06b) cam6_mode_pane_g

0xdecf,	// (0x0005a3cb) bg_tb_trans_pane_cp08_ParamLimits

0xdecf,	// (0x0005a3cb) bg_tb_trans_pane_cp08

0xe660,	// (0x0005ab5c) cam6_battery_pane_ParamLimits

0xe660,	// (0x0005ab5c) cam6_battery_pane

0xe676,	// (0x0005ab72) cam6_indi_pane_g1_ParamLimits

0xe676,	// (0x0005ab72) cam6_indi_pane_g1

0xe688,	// (0x0005ab84) cam6_indi_pane_g2_ParamLimits

0xe688,	// (0x0005ab84) cam6_indi_pane_g2

0xe69a,	// (0x0005ab96) cam6_indi_pane_g3_ParamLimits

0xe69a,	// (0x0005ab96) cam6_indi_pane_g3

0x0002,

0xfb78,	// (0x0005c074) cam6_indi_pane_g_ParamLimits

0xfb78,	// (0x0005c074) cam6_indi_pane_g

0xe6ac,	// (0x0005aba8) cam6_indi_pane_t1_ParamLimits

0xe6ac,	// (0x0005aba8) cam6_indi_pane_t1

0xae4f,	// (0x0005734b) cam6_autofocus_pane_g1

0xae47,	// (0x00057343) cam6_autofocus_pane_g2

0xae5f,	// (0x0005735b) cam6_autofocus_pane_g3

0xae57,	// (0x00057353) cam6_autofocus_pane_g4

0x0003,

0xfb7f,	// (0x0005c07b) cam6_autofocus_pane_g

0xe6d2,	// (0x0005abce) cam6_timer_pane_g1

0xe6da,	// (0x0005abd6) cam6_timer_pane_t1

0xe6e8,	// (0x0005abe4) cam6_zoom_cont_pane

0xe6f0,	// (0x0005abec) cam6_zoom_pane_g1

0xe6f8,	// (0x0005abf4) cam6_zoom_pane_g2

0xc21f,	// (0x0005871b) cam6_zoom_pane_g3

0x0002,

0xfb88,	// (0x0005c084) cam6_zoom_pane_g

0x4631,	// (0x00050b2d) cam6_battery_pane_g1

0x4631,	// (0x00050b2d) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0005bbfc) cam6_battery_pane_g

0xe700,	// (0x0005abfc) cam6_zoom_cont_pane_g1

0xe709,	// (0x0005ac05) cam6_zoom_cont_pane_g2

0xe712,	// (0x0005ac0e) cam6_zoom_cont_pane_g3

0x0002,

0xfb8f,	// (0x0005c08b) cam6_zoom_cont_pane_g

0xc23c,	// (0x00058738) cam6_mode_pane_cp_ParamLimits

0xc23c,	// (0x00058738) cam6_mode_pane_cp

0xc250,	// (0x0005874c) cam6_zoom_pane_cp_ParamLimits

0xc250,	// (0x0005874c) cam6_zoom_pane_cp

0xc26e,	// (0x0005876a) vid6_image_uncrop_cif_pane_ParamLimits

0xc26e,	// (0x0005876a) vid6_image_uncrop_cif_pane

0xc29a,	// (0x00058796) vid6_image_uncrop_nhd_pane_ParamLimits

0xc29a,	// (0x00058796) vid6_image_uncrop_nhd_pane

0xc2b9,	// (0x000587b5) vid6_image_uncrop_vga_pane_ParamLimits

0xc2b9,	// (0x000587b5) vid6_image_uncrop_vga_pane

0xc2d8,	// (0x000587d4) vid6_image_uncrop_wvga_pane_ParamLimits

0xc2d8,	// (0x000587d4) vid6_image_uncrop_wvga_pane

0xc2f7,	// (0x000587f3) vid6_indi_pane_ParamLimits

0xc2f7,	// (0x000587f3) vid6_indi_pane

0xdecf,	// (0x0005a3cb) bg_tb_trans_pane_cp09_ParamLimits

0xdecf,	// (0x0005a3cb) bg_tb_trans_pane_cp09

0xe72a,	// (0x0005ac26) cam6_battery_pane_cp_ParamLimits

0xe72a,	// (0x0005ac26) cam6_battery_pane_cp

0xe736,	// (0x0005ac32) vid6_indi_pane_g1_ParamLimits

0xe736,	// (0x0005ac32) vid6_indi_pane_g1

0xe748,	// (0x0005ac44) vid6_indi_pane_g2_ParamLimits

0xe748,	// (0x0005ac44) vid6_indi_pane_g2

0xe75a,	// (0x0005ac56) vid6_indi_pane_g3_ParamLimits

0xe75a,	// (0x0005ac56) vid6_indi_pane_g3

0xe771,	// (0x0005ac6d) vid6_indi_pane_g4_ParamLimits

0xe771,	// (0x0005ac6d) vid6_indi_pane_g4

0xe788,	// (0x0005ac84) vid6_indi_pane_g5_ParamLimits

0xe788,	// (0x0005ac84) vid6_indi_pane_g5

0x0004,

0xfb96,	// (0x0005c092) vid6_indi_pane_g_ParamLimits

0xfb96,	// (0x0005c092) vid6_indi_pane_g

0xe7a2,	// (0x0005ac9e) vid6_indi_pane_t1_ParamLimits

0xe7a2,	// (0x0005ac9e) vid6_indi_pane_t1

0xe7b8,	// (0x0005acb4) vid6_indi_pane_t2_ParamLimits

0xe7b8,	// (0x0005acb4) vid6_indi_pane_t2

0xe7e0,	// (0x0005acdc) vid6_indi_pane_t3_ParamLimits

0xe7e0,	// (0x0005acdc) vid6_indi_pane_t3

0xe808,	// (0x0005ad04) vid6_indi_pane_t4_ParamLimits

0xe808,	// (0x0005ad04) vid6_indi_pane_t4

0x0003,

0xfba1,	// (0x0005c09d) vid6_indi_pane_t_ParamLimits

0xfba1,	// (0x0005c09d) vid6_indi_pane_t

0xe82c,	// (0x0005ad28) wait_bar_pane_cp08

0xc31c,	// (0x00058818) main_cset_text2_pane_t1_ParamLimits

0xc31c,	// (0x00058818) main_cset_text2_pane_t1

0xc227,	// (0x00058723) listscroll_gen_pane_cp06_t1_ParamLimits

0xc227,	// (0x00058723) listscroll_gen_pane_cp06_t1

0x03cf,	// (0x0004c8cb) main_cam6_set_pane

0xacec,	// (0x000571e8) bg_tb_trans_pane_cp06_ParamLimits

0xad02,	// (0x000571fe) cam4_indicators_pane_g1_ParamLimits

0xad0f,	// (0x0005720b) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0005be12) cam4_indicators_pane_g_ParamLimits

0xad2f,	// (0x0005722b) cam4_indicators_pane_t1_ParamLimits

0xaddb,	// (0x000572d7) bg_tb_trans_pane_cp07_ParamLimits

0xad02,	// (0x000571fe) vid4_indicators_pane_g1_ParamLimits

0xadf3,	// (0x000572ef) vid4_indicators_pane_g2_ParamLimits

0xae00,	// (0x000572fc) vid4_indicators_pane_g3_ParamLimits

0xae11,	// (0x0005730d) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0005be24) vid4_indicators_pane_g_ParamLimits

0xae2d,	// (0x00057329) vid4_indicators_pane_t1_ParamLimits

0xbdd7,	// (0x000582d3) vid4_progress_pane_g1_ParamLimits

0xbde3,	// (0x000582df) vid4_progress_pane_g2_ParamLimits

0xbdef,	// (0x000582eb) vid4_progress_pane_g3_ParamLimits

0xbdfe,	// (0x000582fa) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0005bfd5) vid4_progress_pane_g_ParamLimits

0xbe1c,	// (0x00058318) vid4_progress_pane_t1_ParamLimits

0xbe32,	// (0x0005832e) vid4_progress_pane_t2_ParamLimits

0xbe48,	// (0x00058344) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0005bfe0) vid4_progress_pane_t_ParamLimits

0xbe5d,	// (0x00058359) wait_bar_pane_cp07_ParamLimits

0xc343,	// (0x0005883f) main_cam6_set_pane_g2_ParamLimits

0xc343,	// (0x0005883f) main_cam6_set_pane_g2

0xc34f,	// (0x0005884b) main_cset6_listscroll_pane_ParamLimits

0xc34f,	// (0x0005884b) main_cset6_listscroll_pane

0xc37c,	// (0x00058878) main_cset6_slider_pane_ParamLimits

0xc37c,	// (0x00058878) main_cset6_slider_pane

0xc388,	// (0x00058884) main_cset6_text2_pane_ParamLimits

0xc388,	// (0x00058884) main_cset6_text2_pane

0xe83b,	// (0x0005ad37) main_cset6_text_pane

0xe843,	// (0x0005ad3f) main_cset_list_pane_copy1_ParamLimits

0xe843,	// (0x0005ad3f) main_cset_list_pane_copy1

0xe853,	// (0x0005ad4f) scroll_pane_cp028_copy1

0xc39b,	// (0x00058897) cset_list_set_pane_copy1

0xc3ab,	// (0x000588a7) aid_position_infowindow_above_copy1

0xc3b3,	// (0x000588af) aid_position_infowindow_below_copy1

0xc3bb,	// (0x000588b7) cset_list_set_pane_g1_copy1

0xc3c3,	// (0x000588bf) cset_list_set_pane_g3_copy1_ParamLimits

0xc3c3,	// (0x000588bf) cset_list_set_pane_g3_copy1

0xc3d2,	// (0x000588ce) cset_list_set_pane_t1_copy1_ParamLimits

0xc3d2,	// (0x000588ce) cset_list_set_pane_t1_copy1

0x0448,	// (0x0004c944) list_highlight_pane_cp021_copy1_ParamLimits

0x0448,	// (0x0004c944) list_highlight_pane_cp021_copy1

0xe85c,	// (0x0005ad58) cset6_slider_pane_ParamLimits

0xe85c,	// (0x0005ad58) cset6_slider_pane

0xe888,	// (0x0005ad84) main_cset6_slider_pane_g1_ParamLimits

0xe888,	// (0x0005ad84) main_cset6_slider_pane_g1

0xc3e7,	// (0x000588e3) main_cset6_slider_pane_g2_ParamLimits

0xc3e7,	// (0x000588e3) main_cset6_slider_pane_g2

0xe8b0,	// (0x0005adac) main_cset6_slider_pane_g3_ParamLimits

0xe8b0,	// (0x0005adac) main_cset6_slider_pane_g3

0xc40f,	// (0x0005890b) main_cset6_slider_pane_g4_ParamLimits

0xc40f,	// (0x0005890b) main_cset6_slider_pane_g4

0xc41b,	// (0x00058917) main_cset6_slider_pane_g5_ParamLimits

0xc41b,	// (0x00058917) main_cset6_slider_pane_g5

0xe170,	// (0x0005a66c) main_cset6_slider_pane_g7_ParamLimits

0xe170,	// (0x0005a66c) main_cset6_slider_pane_g7

0xe17c,	// (0x0005a678) main_cset6_slider_pane_g8_ParamLimits

0xe17c,	// (0x0005a678) main_cset6_slider_pane_g8

0xc427,	// (0x00058923) main_cset6_slider_pane_g9_ParamLimits

0xc427,	// (0x00058923) main_cset6_slider_pane_g9

0xc433,	// (0x0005892f) main_cset6_slider_pane_g10_ParamLimits

0xc433,	// (0x0005892f) main_cset6_slider_pane_g10

0xc43f,	// (0x0005893b) main_cset6_slider_pane_g11_ParamLimits

0xc43f,	// (0x0005893b) main_cset6_slider_pane_g11

0xc44b,	// (0x00058947) main_cset6_slider_pane_g12_ParamLimits

0xc44b,	// (0x00058947) main_cset6_slider_pane_g12

0xc457,	// (0x00058953) main_cset6_slider_pane_g13_ParamLimits

0xc457,	// (0x00058953) main_cset6_slider_pane_g13

0xc463,	// (0x0005895f) main_cset6_slider_pane_g14_ParamLimits

0xc463,	// (0x0005895f) main_cset6_slider_pane_g14

0xc46f,	// (0x0005896b) main_cset6_slider_pane_g15_ParamLimits

0xc46f,	// (0x0005896b) main_cset6_slider_pane_g15

0xc487,	// (0x00058983) main_cset6_slider_pane_g16_ParamLimits

0xc487,	// (0x00058983) main_cset6_slider_pane_g16

0xc493,	// (0x0005898f) main_cset6_slider_pane_g17_ParamLimits

0xc493,	// (0x0005898f) main_cset6_slider_pane_g17

0x0011,

0xfbaa,	// (0x0005c0a6) main_cset6_slider_pane_g_ParamLimits

0xfbaa,	// (0x0005c0a6) main_cset6_slider_pane_g

0xe8bc,	// (0x0005adb8) main_cset6_slider_pane_t1_ParamLimits

0xe8bc,	// (0x0005adb8) main_cset6_slider_pane_t1

0xc4b7,	// (0x000589b3) main_cset6_slider_pane_t2_ParamLimits

0xc4b7,	// (0x000589b3) main_cset6_slider_pane_t2

0xc4e2,	// (0x000589de) main_cset6_slider_pane_t3_ParamLimits

0xc4e2,	// (0x000589de) main_cset6_slider_pane_t3

0xc50d,	// (0x00058a09) main_cset6_slider_pane_t4_ParamLimits

0xc50d,	// (0x00058a09) main_cset6_slider_pane_t4

0xc538,	// (0x00058a34) main_cset6_slider_pane_t5_ParamLimits

0xc538,	// (0x00058a34) main_cset6_slider_pane_t5

0xe8fd,	// (0x0005adf9) main_cset6_slider_pane_t7_ParamLimits

0xe8fd,	// (0x0005adf9) main_cset6_slider_pane_t7

0xc563,	// (0x00058a5f) main_cset6_slider_pane_t8_ParamLimits

0xc563,	// (0x00058a5f) main_cset6_slider_pane_t8

0xc587,	// (0x00058a83) main_cset6_slider_pane_t9_ParamLimits

0xc587,	// (0x00058a83) main_cset6_slider_pane_t9

0xc5ab,	// (0x00058aa7) main_cset6_slider_pane_t10_ParamLimits

0xc5ab,	// (0x00058aa7) main_cset6_slider_pane_t10

0xc5cf,	// (0x00058acb) main_cset6_slider_pane_t11_ParamLimits

0xc5cf,	// (0x00058acb) main_cset6_slider_pane_t11

0xe933,	// (0x0005ae2f) main_cset6_slider_pane_t14_ParamLimits

0xe933,	// (0x0005ae2f) main_cset6_slider_pane_t14

0xe96c,	// (0x0005ae68) main_cset6_slider_pane_t15_ParamLimits

0xe96c,	// (0x0005ae68) main_cset6_slider_pane_t15

0x000b,

0xfbcf,	// (0x0005c0cb) main_cset6_slider_pane_t_ParamLimits

0xfbcf,	// (0x0005c0cb) main_cset6_slider_pane_t

0xe9a5,	// (0x0005aea1) cset_slider_pane_g1_copy1

0xe9ae,	// (0x0005aeaa) cset_slider_pane_g2_copy1

0xe9b7,	// (0x0005aeb3) cset_slider_pane_g3_copy1

0x03cf,	// (0x0004c8cb) bg_popup_sub_pane_cp011_copy1

0xe2b0,	// (0x0005a7ac) main_cset_text_pane_g1_copy1

0xe2b8,	// (0x0005a7b4) main_cset_text_pane_t1_copy1

0xe2c6,	// (0x0005a7c2) main_cset_text_pane_t2_copy1

0xe2d4,	// (0x0005a7d0) main_cset_text_pane_t3_copy1

0xe2e2,	// (0x0005a7de) main_cset_text_pane_t4_copy1

0xe2f0,	// (0x0005a7ec) main_cset_text_pane_t5_copy1

0xe2fe,	// (0x0005a7fa) main_cset_text_pane_t6_copy1

0xe30c,	// (0x0005a808) main_cset_text_pane_t7_copy1

0xc5f3,	// (0x00058aef) main_cset_text2_pane_t1_copy1

0x03cf,	// (0x0004c8cb) main_ncimui_pane

0x8e21,	// (0x0005531d) popup_query_ncimui_window_ParamLimits

0x8e21,	// (0x0005531d) popup_query_ncimui_window

0x0988,	// (0x0004ce84) field_cale_ev2_pane_g4_ParamLimits

0x0988,	// (0x0004ce84) field_cale_ev2_pane_g4

0xa697,	// (0x00056b93) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa697,	// (0x00056b93) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0005bdb0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0005bdb0) cell_video_dialer_keypad_pane_g

0xa6af,	// (0x00056bab) cell_video_dialer_keypad_pane_t1

0x03cf,	// (0x0004c8cb) bg_popup_window_pane_cp012

0x2b23,	// (0x0004f01f) heading_pane_cp06

0xe9ea,	// (0x0005aee6) ncim_query_content_pane

0x03cf,	// (0x0004c8cb) bg_popup_heading_pane_cp01

0xe9f2,	// (0x0005aeee) ncim_heading_pane_t1

0xea00,	// (0x0005aefc) ncim_indicator_popup_pane

0xea12,	// (0x0005af0e) ncim_query_button_pane

0xea28,	// (0x0005af24) ncim_query_content_pane_t1

0xea3a,	// (0x0005af36) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0005c10a) ncim_query_content_pane_t

0xea74,	// (0x0005af70) ncim_query_list_pane

0xea86,	// (0x0005af82) ncim_query_popup_pane

0xea00,	// (0x0005aefc) ncim_indicator_popup_pane_ParamLimits

0xc71e,	// (0x00058c1a) ncim_query_content_pane_g1_ParamLimits

0xc71e,	// (0x00058c1a) ncim_query_content_pane_g1

0xea28,	// (0x0005af24) ncim_query_content_pane_t1_ParamLimits

0xea3a,	// (0x0005af36) ncim_query_content_pane_t2_ParamLimits

0xc72a,	// (0x00058c26) ncim_query_content_pane_t3_ParamLimits

0xc72a,	// (0x00058c26) ncim_query_content_pane_t3

0xc747,	// (0x00058c43) ncim_query_content_pane_t4_ParamLimits

0xc747,	// (0x00058c43) ncim_query_content_pane_t4

0xc764,	// (0x00058c60) ncim_query_content_pane_t5_ParamLimits

0xc764,	// (0x00058c60) ncim_query_content_pane_t5

0xea4c,	// (0x0005af48) ncim_query_content_pane_t6_ParamLimits

0xea4c,	// (0x0005af48) ncim_query_content_pane_t6

0xfc0e,	// (0x0005c10a) ncim_query_content_pane_t_ParamLimits

0xea74,	// (0x0005af70) ncim_query_list_pane_ParamLimits

0xea86,	// (0x0005af82) ncim_query_popup_pane_ParamLimits

0xea9a,	// (0x0005af96) wait_bar_pane_cp04

0x03cf,	// (0x0004c8cb) input_focus_pane_cp011

0xeaa2,	// (0x0005af9e) ncim_query_popup_pane_t1

0xeab0,	// (0x0005afac) ncim_list_query_list_pane_ParamLimits

0xeab0,	// (0x0005afac) ncim_list_query_list_pane

0x03cf,	// (0x0004c8cb) bg_button_pane_cp027

0xeac3,	// (0x0005afbf) ncim_query_button_pane_g1

0x03cf,	// (0x0004c8cb) list_highlight_pane_cp012

0xeacd,	// (0x0005afc9) ncim_list_query_list_pane_g1

0xead5,	// (0x0005afd1) ncim_list_query_list_pane_t1

0xad1f,	// (0x0005721b) cam4_indicators_pane_g3_ParamLimits

0xad1f,	// (0x0005721b) cam4_indicators_pane_g3

0xae1d,	// (0x00057319) vid4_indicators_pane_g5_ParamLimits

0xae1d,	// (0x00057319) vid4_indicators_pane_g5

0xbe0d,	// (0x00058309) vid4_progress_pane_g5_ParamLimits

0xbe0d,	// (0x00058309) vid4_progress_pane_g5

0xc625,	// (0x00058b21) main_ncimui_pane_g1

0xc67f,	// (0x00058b7b) ncimui_group_query_pane_ParamLimits

0xc67f,	// (0x00058b7b) ncimui_group_query_pane

0xc6c9,	// (0x00058bc5) ncimui_list_pane_ParamLimits

0xc6c9,	// (0x00058bc5) ncimui_list_pane

0xc6ea,	// (0x00058be6) ncimui_text_pane_ParamLimits

0xc6ea,	// (0x00058be6) ncimui_text_pane

0xc781,	// (0x00058c7d) ncimui_text_pane_t1_ParamLimits

0xc781,	// (0x00058c7d) ncimui_text_pane_t1

0xeae3,	// (0x0005afdf) ncimui_list_single_graphic_pane_ParamLimits

0xeae3,	// (0x0005afdf) ncimui_list_single_graphic_pane

0xc7a0,	// (0x00058c9c) ncimui_query_pane_ParamLimits

0xc7a0,	// (0x00058c9c) ncimui_query_pane

0x03cf,	// (0x0004c8cb) list_highlight_pane_cp013

0xeaf3,	// (0x0005afef) ncim_list_query_list_pane_t1_copy1

0xeacd,	// (0x0005afc9) ncim_list_single_graphic_pane_g1

0xeb01,	// (0x0005affd) ncim_query_button_pane_cp01

0xeb0d,	// (0x0005b009) ncim_query_entry_pane_ParamLimits

0xeb0d,	// (0x0005b009) ncim_query_entry_pane

0xeb20,	// (0x0005b01c) ncimui_query_pane_g1

0xeb2c,	// (0x0005b028) ncimui_query_pane_t1_ParamLimits

0xeb2c,	// (0x0005b028) ncimui_query_pane_t1

0x0448,	// (0x0004c944) input_focus_pane_cp012

0xeb45,	// (0x0005b041) ncim_query_entry_pane_t1

0x232b,	// (0x0004e827) main_im_pane_ParamLimits

0x0448,	// (0x0004c944) main_mobtv_pane_ParamLimits

0x0448,	// (0x0004c944) main_mobtv_pane

0xc49f,	// (0x0005899b) main_cset6_slider_pane_g18_ParamLimits

0xc49f,	// (0x0005899b) main_cset6_slider_pane_g18

0xc4ab,	// (0x000589a7) main_cset6_slider_pane_g19_ParamLimits

0xc4ab,	// (0x000589a7) main_cset6_slider_pane_g19

0xe01d,	// (0x0005a519) bg_main_mobtv_pane_ParamLimits

0xe01d,	// (0x0005a519) bg_main_mobtv_pane

0xc7b3,	// (0x00058caf) main_mobtv_info_pane

0xc7be,	// (0x00058cba) main_mobtv_loading_pane_ParamLimits

0xc7be,	// (0x00058cba) main_mobtv_loading_pane

0xeb57,	// (0x0005b053) main_mobtv_pg_channel_list_pane

0xeb61,	// (0x0005b05d) main_mobtv_pg_hdr_pane

0xc7cb,	// (0x00058cc7) main_mobtv_programe_curr_pane_ParamLimits

0xc7cb,	// (0x00058cc7) main_mobtv_programe_curr_pane

0xc7d8,	// (0x00058cd4) main_mobtv_programe_next_pane_ParamLimits

0xc7d8,	// (0x00058cd4) main_mobtv_programe_next_pane

0xeb6a,	// (0x0005b066) popup_mobtv_noti_window

0x4631,	// (0x00050b2d) main_tv_pg_hdr_pane_g1

0xeb74,	// (0x0005b070) main_tv_pg_hdr_pane_g2

0xeb7c,	// (0x0005b078) main_tv_pg_hdr_pane_g3

0xeb84,	// (0x0005b080) main_tv_pg_hdr_pane_g4

0xeb8c,	// (0x0005b088) main_tv_pg_hdr_pane_g5

0xeb96,	// (0x0005b092) main_tv_pg_hdr_pane_g6

0xeba0,	// (0x0005b09c) main_tv_pg_hdr_pane_g7

0xebaa,	// (0x0005b0a6) main_tv_pg_hdr_pane_g8

0xebb4,	// (0x0005b0b0) main_tv_pg_hdr_pane_g9

0xebbe,	// (0x0005b0ba) main_tv_pg_hdr_pane_g10

0xebc8,	// (0x0005b0c4) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0005c117) main_tv_pg_hdr_pane_g

0xebd2,	// (0x0005b0ce) main_tv_pg_hdr_pane_t1

0xebe0,	// (0x0005b0dc) main_tv_pg_hdr_pane_t2

0xebee,	// (0x0005b0ea) main_tv_pg_hdr_pane_t3

0xebfe,	// (0x0005b0fa) main_tv_pg_hdr_pane_t4

0xec0e,	// (0x0005b10a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0005c12e) main_tv_pg_hdr_pane_t

0xec1e,	// (0x0005b11a) single_mobtv_pg_channel_pane_ParamLimits

0xec1e,	// (0x0005b11a) single_mobtv_pg_channel_pane

0xec30,	// (0x0005b12c) single_mobtv_pg_channel_table_pane

0xec39,	// (0x0005b135) single_mobtv_pg_channel_thumb_pane

0xec42,	// (0x0005b13e) single_tv_pg_channel_pane_g1

0xec4b,	// (0x0005b147) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0005c139) single_tv_pg_channel_pane_g

0x4861,	// (0x00050d5d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x4861,	// (0x00050d5d) bg_single_mobtv_pg_channel_thumb_pane

0xec54,	// (0x0005b150) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xec54,	// (0x0005b150) single_mobtv_pg_channel_thumb_pane_g1

0xec62,	// (0x0005b15e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xec62,	// (0x0005b15e) single_mobtv_pg_channel_thumb_pane_g2

0xec6e,	// (0x0005b16a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xec6e,	// (0x0005b16a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0005c13e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0005c13e) single_mobtv_pg_channel_thumb_pane_g

0xec7a,	// (0x0005b176) single_mobtv_pg_channel_thumb_pane_t1

0xec88,	// (0x0005b184) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0005c145) single_mobtv_pg_channel_thumb_pane_t

0x4631,	// (0x00050b2d) bg_single_mobtv_pg_channel_table_pane_g1

0x4631,	// (0x00050b2d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0005bbfc) bg_single_mobtv_pg_channel_table_pane_g

0xec96,	// (0x0005b192) single_mobtv_pg_channel_table_pane_t1

0xeca4,	// (0x0005b1a0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0005c14a) single_mobtv_pg_channel_table_pane_t

0xc7ed,	// (0x00058ce9) main_mobtv_info_pane_g1_ParamLimits

0xc7ed,	// (0x00058ce9) main_mobtv_info_pane_g1

0xc809,	// (0x00058d05) main_mobtv_info_pane_t1_ParamLimits

0xc809,	// (0x00058d05) main_mobtv_info_pane_t1

0xc881,	// (0x00058d7d) main_mobtv_info_pane_t2_ParamLimits

0xc881,	// (0x00058d7d) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0005c154) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0005c154) main_mobtv_info_pane_t

0xc914,	// (0x00058e10) wait_bar_pane_cp05

0xc926,	// (0x00058e22) main_mobtv_loading_pane_g1_ParamLimits

0xc926,	// (0x00058e22) main_mobtv_loading_pane_g1

0xc932,	// (0x00058e2e) main_mobtv_loading_pane_g2_ParamLimits

0xc932,	// (0x00058e2e) main_mobtv_loading_pane_g2

0xc93e,	// (0x00058e3a) main_mobtv_loading_pane_g3_ParamLimits

0xc93e,	// (0x00058e3a) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0005c15b) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0005c15b) main_mobtv_loading_pane_g

0xecc6,	// (0x0005b1c2) main_mobtv_loading_pane_t1_ParamLimits

0xecc6,	// (0x0005b1c2) main_mobtv_loading_pane_t1

0xecde,	// (0x0005b1da) main_mobtv_loading_pane_t2_ParamLimits

0xecde,	// (0x0005b1da) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0005c162) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0005c162) main_mobtv_loading_pane_t

0xc94c,	// (0x00058e48) wait_bar_pane_cp06_ParamLimits

0xc94c,	// (0x00058e48) wait_bar_pane_cp06

0xed02,	// (0x0005b1fe) main_mobtv_programe_curr_pane_t1

0xed10,	// (0x0005b20c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0005c167) main_mobtv_programe_curr_pane_t

0xed1e,	// (0x0005b21a) main_mobtv_programe_next_pane_t1

0xed2c,	// (0x0005b228) main_mobtv_programe_next_pane_t2

0xed3a,	// (0x0005b236) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0005c16c) main_mobtv_programe_next_pane_t

0x03cf,	// (0x0004c8cb) bg_popup_mobtv_noti_window_pane

0xed48,	// (0x0005b244) popup_mobtv_noti_window_g1

0xed50,	// (0x0005b24c) popup_mobtv_noti_window_t1

0xed5e,	// (0x0005b25a) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0005c173) popup_mobtv_noti_window_t

0x4631,	// (0x00050b2d) bg_popup_mobtv_noti_window_pane_g1

0x03cf,	// (0x0004c8cb) sc_clock_pane

0x03cf,	// (0x0004c8cb) main_fs_bigclock_pane

0xbff7,	// (0x000584f3) blid2_tripm_pane_t4_ParamLimits

0xbff7,	// (0x000584f3) blid2_tripm_pane_t4

0xc958,	// (0x00058e54) sc_clock_pane_g1_ParamLimits

0xc958,	// (0x00058e54) sc_clock_pane_g1

0xc966,	// (0x00058e62) sc_clock_pane_t1_ParamLimits

0xc966,	// (0x00058e62) sc_clock_pane_t1

0xc97b,	// (0x00058e77) sc_clock_pane_t2_ParamLimits

0xc97b,	// (0x00058e77) sc_clock_pane_t2

0xc98d,	// (0x00058e89) sc_clock_pane_t3_ParamLimits

0xc98d,	// (0x00058e89) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0005c178) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0005c178) sc_clock_pane_t

0xd67c,	// (0x00059b78) main_fs_bigclock_indicator_pane_ParamLimits

0xd67c,	// (0x00059b78) main_fs_bigclock_indicator_pane

0xca14,	// (0x00058f10) main_fs_bigclock_pane_g1_ParamLimits

0xca14,	// (0x00058f10) main_fs_bigclock_pane_g1

0xd688,	// (0x00059b84) main_fs_bigclock_pane_t1_ParamLimits

0xd688,	// (0x00059b84) main_fs_bigclock_pane_t1

0xd69a,	// (0x00059b96) main_fs_bigclock_pane_t2_ParamLimits

0xd69a,	// (0x00059b96) main_fs_bigclock_pane_t2

0xd6ae,	// (0x00059baa) main_fs_bigclock_pane_t3_ParamLimits

0xd6ae,	// (0x00059baa) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x0005c377) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x0005c377) main_fs_bigclock_pane_t

0x18b6,	// (0x0004ddb2) main_fs_bigclock_indicator_pane_g1

0xea1a,	// (0x0005af16) ncim_query_content_pane_g2_ParamLimits

0xea1a,	// (0x0005af16) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0005c105) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0005c105) ncim_query_content_pane_g

0xc99f,	// (0x00058e9b) sc_clock_pane_t4_ParamLimits

0xc99f,	// (0x00058e9b) sc_clock_pane_t4

0x0448,	// (0x0004c944) main_radioblah_pane

0xdf88,	// (0x0005a484) cell_call4_button_pane_t1_copy1_ParamLimits

0xdf88,	// (0x0005a484) cell_call4_button_pane_t1_copy1

0xc62f,	// (0x00058b2b) main_ncimui_pane_t1_ParamLimits

0xc62f,	// (0x00058b2b) main_ncimui_pane_t1

0xc649,	// (0x00058b45) main_ncimui_pane_t2_ParamLimits

0xc649,	// (0x00058b45) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0005c0fe) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0005c0fe) main_ncimui_pane_t

0xee96,	// (0x0005b392) main_radioblah_anim_pane_ParamLimits

0xee96,	// (0x0005b392) main_radioblah_anim_pane

0xeea7,	// (0x0005b3a3) main_radioblah_info_pane_ParamLimits

0xeea7,	// (0x0005b3a3) main_radioblah_info_pane

0xeebb,	// (0x0005b3b7) main_radioblah_pane_t1_ParamLimits

0xeebb,	// (0x0005b3b7) main_radioblah_pane_t1

0xeed7,	// (0x0005b3d3) main_radioblah_pane_t2_ParamLimits

0xeed7,	// (0x0005b3d3) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0005c199) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0005c199) main_radioblah_pane_t

0xca68,	// (0x00058f64) main_radioblah_rocker_ctrl_pane_ParamLimits

0xca68,	// (0x00058f64) main_radioblah_rocker_ctrl_pane

0xef1f,	// (0x0005b41b) main_radioblah_info_pane_t1_ParamLimits

0xef1f,	// (0x0005b41b) main_radioblah_info_pane_t1

0xcab1,	// (0x00058fad) main_radioblah_info_pane_t2_ParamLimits

0xcab1,	// (0x00058fad) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0005c1a2) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0005c1a2) main_radioblah_info_pane_t

0x4631,	// (0x00050b2d) main_radioblah_rocker_ctrl_pane_g1

0xcb61,	// (0x0005905d) main_radioblah_rocker_ctrl_pane_g2

0xcb69,	// (0x00059065) main_radioblah_rocker_ctrl_pane_g3

0xcb71,	// (0x0005906d) main_radioblah_rocker_ctrl_pane_g4

0xcb79,	// (0x00059075) main_radioblah_rocker_ctrl_pane_g5

0xcb81,	// (0x0005907d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0005c1ab) main_radioblah_rocker_ctrl_pane_g

0xc5f3,	// (0x00058aef) main_cset_text2_pane_t1_copy1_ParamLimits

0xac3e,	// (0x0005713a) cam4_image_uncrop_qvga_pane

0xad95,	// (0x00057291) vid4_image_uncrop_qcif_pane

0xc189,	// (0x00058685) cam6_image_uncrop_qvga_pane_ParamLimits

0xc189,	// (0x00058685) cam6_image_uncrop_qvga_pane

0xe71a,	// (0x0005ac16) vid6_image_uncrop_qcif_pane_ParamLimits

0xe71a,	// (0x0005ac16) vid6_image_uncrop_qcif_pane

0x03cf,	// (0x0004c8cb) bg_popup_preview_window_pane_cp03

0xe9c0,	// (0x0005aebc) list_cset_text2_pane

0xe9c8,	// (0x0005aec4) main_cset6_text2_pane_g1

0xe9d0,	// (0x0005aecc) main_cset6_text2_pane_t1

0xcb89,	// (0x00059085) list_cset_text2_pane_t1_ParamLimits

0xcb89,	// (0x00059085) list_cset_text2_pane_t1

0x0448,	// (0x0004c944) main_radioblah_pane_ParamLimits

0xc900,	// (0x00058dfc) main_mobtv_info_pane_t3_ParamLimits

0xc900,	// (0x00058dfc) main_mobtv_info_pane_t3

0xca56,	// (0x00058f52) main_radioblah_pane_g1

0xca81,	// (0x00058f7d) main_radioblah_info_pane_g1

0xcb06,	// (0x00059002) main_radioblah_info_pane_t3_ParamLimits

0xcb06,	// (0x00059002) main_radioblah_info_pane_t3

0x79da,	// (0x00053ed6) highlight_cell_cale_month_pane_ParamLimits

0x79da,	// (0x00053ed6) highlight_cell_cale_month_pane

0x03cf,	// (0x0004c8cb) main_phob_fisheye_pane

0x4943,	// (0x00050e3f) scroll_pane_cp0031_ParamLimits

0x4943,	// (0x00050e3f) scroll_pane_cp0031

0xe82c,	// (0x0005ad28) wait_bar_pane_cp08_ParamLimits

0xc39b,	// (0x00058897) cset_list_set_pane_copy1_ParamLimits

0xef59,	// (0x0005b455) highlight_cell_cale_month_pane_g1

0xcba2,	// (0x0005909e) highlight_cell_cale_month_pane_t1

0xe4e4,	// (0x0005a9e0) list_gen_pane_cp01

0xe15b,	// (0x0005a657) scroll_pane_01

0x0ef5,	// (0x0004d3f1) list_single_double_fisheye_pane

0xcbb0,	// (0x000590ac) list_double_fisheye_pane_g1_ParamLimits

0xcbb0,	// (0x000590ac) list_double_fisheye_pane_g1

0xcbbc,	// (0x000590b8) list_double_fisheye_pane_g2_ParamLimits

0xcbbc,	// (0x000590b8) list_double_fisheye_pane_g2

0xcbd0,	// (0x000590cc) list_double_fisheye_pane_g3_ParamLimits

0xcbd0,	// (0x000590cc) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0005c1b8) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0005c1b8) list_double_fisheye_pane_g

0xcbf9,	// (0x000590f5) list_double_fisheye_pane_t1_ParamLimits

0xcbf9,	// (0x000590f5) list_double_fisheye_pane_t1

0xcc14,	// (0x00059110) list_double_fisheye_pane_t2_ParamLimits

0xcc14,	// (0x00059110) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0005c1c3) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0005c1c3) list_double_fisheye_pane_t

0x03cf,	// (0x0004c8cb) main_call5_pane

0xc9c5,	// (0x00058ec1) sc_swipe_pane_ParamLimits

0xc9c5,	// (0x00058ec1) sc_swipe_pane

0xcc42,	// (0x0005913e) call5_image_pane_ParamLimits

0xcc42,	// (0x0005913e) call5_image_pane

0xcc54,	// (0x00059150) call5_swipe_1_pane_ParamLimits

0xcc54,	// (0x00059150) call5_swipe_1_pane

0xcc60,	// (0x0005915c) call5_swipe_2_pane_ParamLimits

0xcc60,	// (0x0005915c) call5_swipe_2_pane

0xcc7c,	// (0x00059178) popup_call5_audio_first_window_ParamLimits

0xcc7c,	// (0x00059178) popup_call5_audio_first_window

0x4861,	// (0x00050d5d) call5_swipe_1_pane_g1_ParamLimits

0x4861,	// (0x00050d5d) call5_swipe_1_pane_g1

0xef61,	// (0x0005b45d) call5_swipe_1_pane_g2_ParamLimits

0xef61,	// (0x0005b45d) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0005c1c8) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0005c1c8) call5_swipe_1_pane_g

0xef6d,	// (0x0005b469) call5_swipe_1_pane_t1_ParamLimits

0xef6d,	// (0x0005b469) call5_swipe_1_pane_t1

0x4861,	// (0x00050d5d) call5_swipe_2_pane_g1_ParamLimits

0x4861,	// (0x00050d5d) call5_swipe_2_pane_g1

0xef82,	// (0x0005b47e) call5_swipe_2_pane_g2_ParamLimits

0xef82,	// (0x0005b47e) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0005c1cd) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0005c1cd) call5_swipe_2_pane_g

0xef8e,	// (0x0005b48a) call5_swipe_2_pane_t1_ParamLimits

0xef8e,	// (0x0005b48a) call5_swipe_2_pane_t1

0xefa3,	// (0x0005b49f) sc_swipe_pane_g1_ParamLimits

0xefa3,	// (0x0005b49f) sc_swipe_pane_g1

0xefb0,	// (0x0005b4ac) sc_swipe_pane_g2_ParamLimits

0xefb0,	// (0x0005b4ac) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0005c1d2) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0005c1d2) sc_swipe_pane_g

0xefbc,	// (0x0005b4b8) sc_swipe_pane_t1_ParamLimits

0xefbc,	// (0x0005b4b8) sc_swipe_pane_t1

0x03cf,	// (0x0004c8cb) main_cmail_launcher_pane

0xcc8c,	// (0x00059188) aid_size_cell_cmail_l_ParamLimits

0xcc8c,	// (0x00059188) aid_size_cell_cmail_l

0xcc9c,	// (0x00059198) grid_cmail_l_pane_ParamLimits

0xcc9c,	// (0x00059198) grid_cmail_l_pane

0xccac,	// (0x000591a8) cell_cmail_l_pane_ParamLimits

0xccac,	// (0x000591a8) cell_cmail_l_pane

0xccc2,	// (0x000591be) cell_cmail_l_pane_g1_ParamLimits

0xccc2,	// (0x000591be) cell_cmail_l_pane_g1

0xccce,	// (0x000591ca) cell_cmail_l_pane_t1_ParamLimits

0xccce,	// (0x000591ca) cell_cmail_l_pane_t1

0xefd1,	// (0x0005b4cd) cell_cmail_l_pane_t2_ParamLimits

0xefd1,	// (0x0005b4cd) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0005c1d7) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0005c1d7) cell_cmail_l_pane_t

0x0448,	// (0x0004c944) grid_highlight_pane_cp018_ParamLimits

0x0448,	// (0x0004c944) grid_highlight_pane_cp018

0x5d11,	// (0x0005220d) main2_pane_ParamLimits

0x5d11,	// (0x0005220d) main2_pane

0x23d6,	// (0x0004e8d2) popup_sp_fs_action_menu_bg_pane_g1

0x23de,	// (0x0004e8da) popup_sp_fs_action_menu_bg_pane_g2

0x23e6,	// (0x0004e8e2) popup_sp_fs_action_menu_bg_pane_g3

0x23ee,	// (0x0004e8ea) popup_sp_fs_action_menu_bg_pane_g4

0x23f6,	// (0x0004e8f2) popup_sp_fs_action_menu_bg_pane_g5

0x23fe,	// (0x0004e8fa) popup_sp_fs_action_menu_bg_pane_g6

0x2406,	// (0x0004e902) popup_sp_fs_action_menu_bg_pane_g7

0x240e,	// (0x0004e90a) popup_sp_fs_action_menu_bg_pane_g8

0x2416,	// (0x0004e912) popup_sp_fs_action_menu_bg_pane_g9

0x241e,	// (0x0004e91a) popup_sp_fs_action_menu_bg_pane_g10

0x241e,	// (0x0004e91a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0005b6a8) popup_sp_fs_action_menu_bg_pane_g

0x0642,	// (0x0004cb3e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x2_t3_g3_g1

0x064e,	// (0x0004cb4a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x064e,	// (0x0004cb4a) list_medium_line_x2_t3_g3_g2

0x065a,	// (0x0004cb56) list_medium_line_x2_t3_g3_g3_ParamLimits

0x065a,	// (0x0004cb56) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0005b758) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0005b758) list_medium_line_x2_t3_g3_g

0x0666,	// (0x0004cb62) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0666,	// (0x0004cb62) list_medium_line_x2_t3_g3_t1

0x6be7,	// (0x000530e3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6be7,	// (0x000530e3) list_medium_line_x2_t3_g3_t2

0x067b,	// (0x0004cb77) list_medium_line_x2_t3_g3_t3_ParamLimits

0x067b,	// (0x0004cb77) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0005b75f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0005b75f) list_medium_line_x2_t3_g3_t

0x0642,	// (0x0004cb3e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x2_t3_g2_g1

0x065a,	// (0x0004cb56) list_medium_line_x2_t3_g2_g2_ParamLimits

0x065a,	// (0x0004cb56) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0005b766) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0005b766) list_medium_line_x2_t3_g2_g

0x0690,	// (0x0004cb8c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0690,	// (0x0004cb8c) list_medium_line_x2_t3_g2_t1

0x06a6,	// (0x0004cba2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x06a6,	// (0x0004cba2) list_medium_line_x2_t3_g2_t2

0x06b8,	// (0x0004cbb4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x06b8,	// (0x0004cbb4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0005b76b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0005b76b) list_medium_line_x2_t3_g2_t

0x0642,	// (0x0004cb3e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x2_t4_g4_g1

0x06d6,	// (0x0004cbd2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x06d6,	// (0x0004cbd2) list_medium_line_x2_t4_g4_g2

0x064e,	// (0x0004cb4a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x064e,	// (0x0004cb4a) list_medium_line_x2_t4_g4_g3

0x06e2,	// (0x0004cbde) list_medium_line_x2_t4_g4_g4_ParamLimits

0x06e2,	// (0x0004cbde) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0005b772) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0005b772) list_medium_line_x2_t4_g4_g

0x6bfb,	// (0x000530f7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6bfb,	// (0x000530f7) list_medium_line_x2_t4_g4_t1

0x6c15,	// (0x00053111) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6c15,	// (0x00053111) list_medium_line_x2_t4_g4_t2

0x6c2b,	// (0x00053127) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6c2b,	// (0x00053127) list_medium_line_x2_t4_g4_t3

0x06ee,	// (0x0004cbea) list_medium_line_x2_t4_g4_t4_ParamLimits

0x06ee,	// (0x0004cbea) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0005b77b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0005b77b) list_medium_line_x2_t4_g4_t

0x0642,	// (0x0004cb3e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x2_t2_g4_g1

0x06d6,	// (0x0004cbd2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x06d6,	// (0x0004cbd2) list_medium_line_x2_t2_g4_g2

0x064e,	// (0x0004cb4a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x064e,	// (0x0004cb4a) list_medium_line_x2_t2_g4_g3

0x065a,	// (0x0004cb56) list_medium_line_x2_t2_g4_g4_ParamLimits

0x065a,	// (0x0004cb56) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0005b7e2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0005b7e2) list_medium_line_x2_t2_g4_g

0x0700,	// (0x0004cbfc) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0700,	// (0x0004cbfc) list_medium_line_x2_t2_g4_t1

0x067b,	// (0x0004cb77) list_medium_line_x2_t2_g4_t2_ParamLimits

0x067b,	// (0x0004cb77) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0005b7eb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0005b7eb) list_medium_line_x2_t2_g4_t

0x0642,	// (0x0004cb3e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x2_t2_g3_g1

0x064e,	// (0x0004cb4a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x064e,	// (0x0004cb4a) list_medium_line_x2_t2_g3_g2

0x065a,	// (0x0004cb56) list_medium_line_x2_t2_g3_g3_ParamLimits

0x065a,	// (0x0004cb56) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0005b758) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0005b758) list_medium_line_x2_t2_g3_g

0x0715,	// (0x0004cc11) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0715,	// (0x0004cc11) list_medium_line_x2_t2_g3_t1

0x067b,	// (0x0004cb77) list_medium_line_x2_t2_g3_t2_ParamLimits

0x067b,	// (0x0004cb77) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0005b7f0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0005b7f0) list_medium_line_x2_t2_g3_t

0x7bf8,	// (0x000540f4) main_sp_fs_list_pane_ParamLimits

0x7bf8,	// (0x000540f4) main_sp_fs_list_pane

0x7c04,	// (0x00054100) sp_fs_scroll_pane_ParamLimits

0x7c04,	// (0x00054100) sp_fs_scroll_pane

0x7c10,	// (0x0005410c) list_medium_line_x2_t3_t1

0x7c20,	// (0x0005411c) list_medium_line_x2_t3_t2

0x0758,	// (0x0004cc54) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0005b83b) list_medium_line_x2_t3_t

0x7c2e,	// (0x0005412a) list_medium_line_x3_t4_t1

0x7c3e,	// (0x0005413a) list_medium_line_x3_t4_t2

0x0766,	// (0x0004cc62) list_medium_line_x3_t4_t3

0x0758,	// (0x0004cc54) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0005b842) list_medium_line_x3_t4_t

0x7c4c,	// (0x00054148) list_medium_line_x4_t5_t1

0x7c5c,	// (0x00054158) list_medium_line_x4_t5_t2

0x0766,	// (0x0004cc62) list_medium_line_x4_t5_t3

0x0774,	// (0x0004cc70) list_medium_line_x4_t5_t4

0x0758,	// (0x0004cc54) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0005b84b) list_medium_line_x4_t5_t

0x0642,	// (0x0004cb3e) list_medium_line_t4_g4_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_t4_g4_g1

0x06e2,	// (0x0004cbde) list_medium_line_t4_g4_g2_ParamLimits

0x06e2,	// (0x0004cbde) list_medium_line_t4_g4_g2

0x0782,	// (0x0004cc7e) list_medium_line_t4_g4_g3_ParamLimits

0x0782,	// (0x0004cc7e) list_medium_line_t4_g4_g3

0x065a,	// (0x0004cb56) list_medium_line_t4_g4_g4_ParamLimits

0x065a,	// (0x0004cb56) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0005b856) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0005b856) list_medium_line_t4_g4_g

0x078e,	// (0x0004cc8a) list_medium_line_t4_g4_t1_ParamLimits

0x078e,	// (0x0004cc8a) list_medium_line_t4_g4_t1

0x07a3,	// (0x0004cc9f) list_medium_line_t4_g4_t2_ParamLimits

0x07a3,	// (0x0004cc9f) list_medium_line_t4_g4_t2

0x07b9,	// (0x0004ccb5) list_medium_line_t4_g4_t3_ParamLimits

0x07b9,	// (0x0004ccb5) list_medium_line_t4_g4_t3

0x067b,	// (0x0004cb77) list_medium_line_t4_g4_t4_ParamLimits

0x067b,	// (0x0004cb77) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0005b85f) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0005b85f) list_medium_line_t4_g4_t

0x7d7d,	// (0x00054279) chi_dic_find_pane_g1

0x8dea,	// (0x000552e6) main_tport_pane

0x0d23,	// (0x0004d21f) list_medium_line_plain_t1

0x0d6d,	// (0x0004d269) list_medium_line_t2_g2_g1_ParamLimits

0x0d6d,	// (0x0004d269) list_medium_line_t2_g2_g1

0x0d79,	// (0x0004d275) list_medium_line_t2_g2_g2_ParamLimits

0x0d79,	// (0x0004d275) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0005bf1b) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0005bf1b) list_medium_line_t2_g2_g

0xb7f6,	// (0x00057cf2) list_medium_line_t2_g2_t1_ParamLimits

0xb7f6,	// (0x00057cf2) list_medium_line_t2_g2_t1

0xb80d,	// (0x00057d09) list_medium_line_t2_g2_t2_ParamLimits

0xb80d,	// (0x00057d09) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0005bf20) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0005bf20) list_medium_line_t2_g2_t

0x0ec1,	// (0x0004d3bd) aid_sp_fs_list_icon_a_sm

0x0ec9,	// (0x0004d3c5) aid_sp_fs_list_icon_d

0x0ed1,	// (0x0004d3cd) aid_sp_fs_text_primary

0x0eda,	// (0x0004d3d6) aid_sp_fs_text_secondary

0x0ee3,	// (0x0004d3df) list_medium_line

0x0ee3,	// (0x0004d3df) list_medium_line_g2

0x0ee3,	// (0x0004d3df) list_medium_line_g3

0x0ee3,	// (0x0004d3df) list_medium_line_plain

0x0ee3,	// (0x0004d3df) list_medium_line_plain_t2

0x0ee3,	// (0x0004d3df) list_medium_line_plain_t3

0x0ee3,	// (0x0004d3df) list_medium_line_right_icon

0x0ee3,	// (0x0004d3df) list_medium_line_right_iconx2

0x0ee3,	// (0x0004d3df) list_medium_line_t2

0x0ee3,	// (0x0004d3df) list_medium_line_t2_g2

0x0ee3,	// (0x0004d3df) list_medium_line_t2_g3

0x0ee3,	// (0x0004d3df) list_medium_line_t2_right_icon

0x0ee3,	// (0x0004d3df) list_medium_line_t2_right_iconx2

0x0ee3,	// (0x0004d3df) list_medium_line_t3

0x0ee3,	// (0x0004d3df) list_medium_line_t3_g2

0x0ee3,	// (0x0004d3df) list_medium_line_t3_g3

0x0ee3,	// (0x0004d3df) list_medium_line_t3_right_iconx2

0x0eec,	// (0x0004d3e8) list_medium_line_t4_g4

0x0ef5,	// (0x0004d3f1) list_medium_line_x2

0x0ef5,	// (0x0004d3f1) list_medium_line_x2_t2_g2

0x0ef5,	// (0x0004d3f1) list_medium_line_x2_t2_g3

0x0ef5,	// (0x0004d3f1) list_medium_line_x2_t2_g4

0x0ef5,	// (0x0004d3f1) list_medium_line_x2_t3

0x0ef5,	// (0x0004d3f1) list_medium_line_x2_t3_g2

0x0ef5,	// (0x0004d3f1) list_medium_line_x2_t3_g3

0x0ef5,	// (0x0004d3f1) list_medium_line_x2_t3_g4

0x0ef5,	// (0x0004d3f1) list_medium_line_x2_t4_g2

0x0ef5,	// (0x0004d3f1) list_medium_line_x2_t4_g4

0x0efe,	// (0x0004d3fa) list_medium_line_x3

0x0efe,	// (0x0004d3fa) list_medium_line_x3_t4

0x0efe,	// (0x0004d3fa) list_medium_line_x3_t4_g4

0x0eec,	// (0x0004d3e8) list_medium_line_x4_t4

0x0eec,	// (0x0004d3e8) list_medium_line_x4_t4_g7

0x0eec,	// (0x0004d3e8) list_medium_line_x4_t5

0x0f07,	// (0x0004d403) list_single_fs_dyc_pane_ParamLimits

0x0f07,	// (0x0004d403) list_single_fs_dyc_pane

0x0642,	// (0x0004cb3e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x4_t4_g7_g1

0x0f38,	// (0x0004d434) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0f38,	// (0x0004d434) list_medium_line_x4_t4_g7_g2

0x0f44,	// (0x0004d440) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0f44,	// (0x0004d440) list_medium_line_x4_t4_g7_g3

0x0f53,	// (0x0004d44f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0f53,	// (0x0004d44f) list_medium_line_x4_t4_g7_g4

0x0f5f,	// (0x0004d45b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0f5f,	// (0x0004d45b) list_medium_line_x4_t4_g7_g5

0x0f6e,	// (0x0004d46a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0f6e,	// (0x0004d46a) list_medium_line_x4_t4_g7_g6

0x0f7d,	// (0x0004d479) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0f7d,	// (0x0004d479) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe8,	// (0x0005c0e4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe8,	// (0x0005c0e4) list_medium_line_x4_t4_g7_g

0x0f89,	// (0x0004d485) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0f89,	// (0x0004d485) list_medium_line_x4_t4_g7_t1

0x0f9e,	// (0x0004d49a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0f9e,	// (0x0004d49a) list_medium_line_x4_t4_g7_t2

0x0fb3,	// (0x0004d4af) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0fb3,	// (0x0004d4af) list_medium_line_x4_t4_g7_t3

0x0fc8,	// (0x0004d4c4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0fc8,	// (0x0004d4c4) list_medium_line_x4_t4_g7_t4

0x0fda,	// (0x0004d4d6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0fda,	// (0x0004d4d6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf7,	// (0x0005c0f3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf7,	// (0x0005c0f3) list_medium_line_x4_t4_g7_t

0x0fec,	// (0x0004d4e8) list_single_dyc_row_pane_ParamLimits

0x0fec,	// (0x0004d4e8) list_single_dyc_row_pane

0xcc36,	// (0x00059132) call5_gesture_pane_ParamLimits

0xcc36,	// (0x00059132) call5_gesture_pane

0xcc6c,	// (0x00059168) call5_windows_pane_ParamLimits

0xcc6c,	// (0x00059168) call5_windows_pane

0xcce4,	// (0x000591e0) call5_swipe_1_pane_cp_ParamLimits

0xcce4,	// (0x000591e0) call5_swipe_1_pane_cp

0xccf0,	// (0x000591ec) call5_swipe_2_pane_cp_ParamLimits

0xccf0,	// (0x000591ec) call5_swipe_2_pane_cp

0x2d7f,	// (0x0004f27b) call5_image_pane_cp

0xccfc,	// (0x000591f8) popup_call5_audio_first_window_cp_ParamLimits

0xccfc,	// (0x000591f8) popup_call5_audio_first_window_cp

0xefa3,	// (0x0005b49f) call5_swipe_1_pane_g1_cp_ParamLimits

0xefa3,	// (0x0005b49f) call5_swipe_1_pane_g1_cp

0xefe3,	// (0x0005b4df) call5_swipe_1_pane_g2_cp

0xefbc,	// (0x0005b4b8) call5_swipe_1_pane_t1_cp_ParamLimits

0xefbc,	// (0x0005b4b8) call5_swipe_1_pane_t1_cp

0xefa3,	// (0x0005b49f) call5_swipe_2_pane_g1_cp_ParamLimits

0xefa3,	// (0x0005b49f) call5_swipe_2_pane_g1_cp

0xefeb,	// (0x0005b4e7) call5_swipe_2_pane_g2_cp

0xeff3,	// (0x0005b4ef) call5_swipe_2_pane_t1_cp_ParamLimits

0xeff3,	// (0x0005b4ef) call5_swipe_2_pane_t1_cp

0x0448,	// (0x0004c944) main_sp_fs_email_pane

0xf008,	// (0x0005b504) main_sp_fs_listscroll_pane_te

0x1009,	// (0x0004d505) popup_sp_fs_action_menu_pane_ParamLimits

0x1009,	// (0x0004d505) popup_sp_fs_action_menu_pane

0x4631,	// (0x00050b2d) bg_sp_fs_ctrlbar_pane_g1

0xf011,	// (0x0005b50d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xf01a,	// (0x0005b516) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xf023,	// (0x0005b51f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x4631,	// (0x00050b2d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0005c1dc) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4408,	// (0x00050904) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4408,	// (0x00050904) bg_sp_fs_ctrlbar_ddmenu_pane

0xf02c,	// (0x0005b528) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xf02c,	// (0x0005b528) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf038,	// (0x0005b534) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf038,	// (0x0005b534) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0005c1e5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0005c1e5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xf044,	// (0x0005b540) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xf044,	// (0x0005b540) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x104f,	// (0x0004d54b) list_medium_line_t2_right_icon_g1

0xcd0a,	// (0x00059206) list_medium_line_t2_right_icon_t1

0xcd1a,	// (0x00059216) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0005c1ea) list_medium_line_t2_right_icon_t

0x41ae,	// (0x000506aa) bg_sp_fs_ctrlbar_pane_ParamLimits

0x41ae,	// (0x000506aa) bg_sp_fs_ctrlbar_pane

0xcd7f,	// (0x0005927b) main_sp_fs_ctrlbar_button_pane_cp01

0xcd87,	// (0x00059283) main_sp_fs_ctrlbar_ddmenu_pane

0xf098,	// (0x0005b594) main_sp_fs_ctrlbar_pane_g1

0xf0a4,	// (0x0005b5a0) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0005c1ef) main_sp_fs_ctrlbar_pane_g

0xf0b0,	// (0x0005b5ac) main_sp_fs_ctrlbar_pane_t1

0xcd91,	// (0x0005928d) main_sp_fs_ctrlbar_pane

0xcdad,	// (0x000592a9) main_sp_fs_listscroll_pane_te_cp01

0xcdbe,	// (0x000592ba) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcdbe,	// (0x000592ba) popup_sp_fs_action_menu_pane_cp01

0x0448,	// (0x0004c944) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0448,	// (0x0004c944) bg_sp_fs_highlight_list_pane_cp01

0x1057,	// (0x0004d553) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1057,	// (0x0004d553) sp_fs_action_menu_list_gene_pane_g1

0xf0c5,	// (0x0005b5c1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf0c5,	// (0x0005b5c1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x0005c1f4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x0005c1f4) sp_fs_action_menu_list_gene_pane_g

0x1066,	// (0x0004d562) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1066,	// (0x0004d562) sp_fs_action_menu_list_gene_pane_t1

0x107e,	// (0x0004d57a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x107e,	// (0x0004d57a) sp_fs_action_menu_list_gene_pane

0x10a1,	// (0x0004d59d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x10a1,	// (0x0004d59d) popup_sp_fs_action_menu_bg_pane

0x10af,	// (0x0004d5ab) sp_fs_action_menu_list_pane_ParamLimits

0x10af,	// (0x0004d5ab) sp_fs_action_menu_list_pane

0x10d3,	// (0x0004d5cf) sp_fs_scroll_pane_cp01_ParamLimits

0x10d3,	// (0x0004d5cf) sp_fs_scroll_pane_cp01

0xcdd8,	// (0x000592d4) list_medium_line_plain_t2_t1

0xcde8,	// (0x000592e4) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x0005c1f9) list_medium_line_plain_t2_t

0xcdf6,	// (0x000592f2) list_medium_line_plain_t3_t1

0xce06,	// (0x00059302) list_medium_line_plain_t3_t2

0xce14,	// (0x00059310) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x0005c1fe) list_medium_line_plain_t3_t

0x0642,	// (0x0004cb3e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x2_t2_g2_g1

0x065a,	// (0x0004cb56) list_medium_line_x2_t2_g2_g2_ParamLimits

0x065a,	// (0x0004cb56) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0005b766) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0005b766) list_medium_line_x2_t2_g2_g

0x078e,	// (0x0004cc8a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x078e,	// (0x0004cc8a) list_medium_line_x2_t2_g2_t1

0x067b,	// (0x0004cb77) list_medium_line_x2_t2_g2_t2_ParamLimits

0x067b,	// (0x0004cb77) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x0005c205) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x0005c205) list_medium_line_x2_t2_g2_t

0x0642,	// (0x0004cb3e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x2_t4_g2_g1

0x10f9,	// (0x0004d5f5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x10f9,	// (0x0004d5f5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x0005c20a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x0005c20a) list_medium_line_x2_t4_g2_g

0xce22,	// (0x0005931e) list_medium_line_x2_t4_g2_t1_ParamLimits

0xce22,	// (0x0005931e) list_medium_line_x2_t4_g2_t1

0xce3c,	// (0x00059338) list_medium_line_x2_t4_g2_t2_ParamLimits

0xce3c,	// (0x00059338) list_medium_line_x2_t4_g2_t2

0xce52,	// (0x0005934e) list_medium_line_x2_t4_g2_t3_ParamLimits

0xce52,	// (0x0005934e) list_medium_line_x2_t4_g2_t3

0x067b,	// (0x0004cb77) list_medium_line_x2_t4_g2_t4_ParamLimits

0x067b,	// (0x0004cb77) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0005c20f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0005c20f) list_medium_line_x2_t4_g2_t

0x110b,	// (0x0004d607) list_medium_line_t3_right_iconx2_g1

0x104f,	// (0x0004d54b) list_medium_line_t3_right_iconx2_g2

0xce67,	// (0x00059363) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0005c218) list_medium_line_t3_right_iconx2_g

0xce71,	// (0x0005936d) list_medium_line_t3_right_iconx2_t1

0xce81,	// (0x0005937d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0005c21f) list_medium_line_t3_right_iconx2_t

0x0642,	// (0x0004cb3e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x3_t4_g4_g1

0x064e,	// (0x0004cb4a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x064e,	// (0x0004cb4a) list_medium_line_x3_t4_g4_g2

0x06e2,	// (0x0004cbde) list_medium_line_x3_t4_g4_g3_ParamLimits

0x06e2,	// (0x0004cbde) list_medium_line_x3_t4_g4_g3

0x1113,	// (0x0004d60f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1113,	// (0x0004d60f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0005c224) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0005c224) list_medium_line_x3_t4_g4_g

0xce8f,	// (0x0005938b) list_medium_line_x3_t4_g4_t1_ParamLimits

0xce8f,	// (0x0005938b) list_medium_line_x3_t4_g4_t1

0xcea6,	// (0x000593a2) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcea6,	// (0x000593a2) list_medium_line_x3_t4_g4_t2

0x111f,	// (0x0004d61b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x111f,	// (0x0004d61b) list_medium_line_x3_t4_g4_t3

0x1134,	// (0x0004d630) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1134,	// (0x0004d630) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0005c22d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0005c22d) list_medium_line_x3_t4_g4_t

0xcebb,	// (0x000593b7) list_single_dyc_row_text_pane_t1_ParamLimits

0xcebb,	// (0x000593b7) list_single_dyc_row_text_pane_t1

0xcef8,	// (0x000593f4) list_single_dyc_row_text_pane_t2_ParamLimits

0xcef8,	// (0x000593f4) list_single_dyc_row_text_pane_t2

0x1151,	// (0x0004d64d) list_single_dyc_row_text_pane_t3_ParamLimits

0x1151,	// (0x0004d64d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x0005c236) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0005c236) list_single_dyc_row_text_pane_t

0x1163,	// (0x0004d65f) list_single_dyc_row_pane_g1_ParamLimits

0x1163,	// (0x0004d65f) list_single_dyc_row_pane_g1

0x116f,	// (0x0004d66b) list_single_dyc_row_pane_g2_ParamLimits

0x116f,	// (0x0004d66b) list_single_dyc_row_pane_g2

0x117b,	// (0x0004d677) list_single_dyc_row_pane_g3_ParamLimits

0x117b,	// (0x0004d677) list_single_dyc_row_pane_g3

0x1187,	// (0x0004d683) list_single_dyc_row_pane_g4_ParamLimits

0x1187,	// (0x0004d683) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x0005c23d) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x0005c23d) list_single_dyc_row_pane_g

0x1193,	// (0x0004d68f) list_single_dyc_row_text_pane_ParamLimits

0x1193,	// (0x0004d68f) list_single_dyc_row_text_pane

0x03cf,	// (0x0004c8cb) bg_sp_fs_scroll_pane

0x11b2,	// (0x0004d6ae) thumb_sp_fs_scroll_pane

0x0d6d,	// (0x0004d269) list_medium_line_g1_ParamLimits

0x0d6d,	// (0x0004d269) list_medium_line_g1

0x11bb,	// (0x0004d6b7) list_medium_line_t1_ParamLimits

0x11bb,	// (0x0004d6b7) list_medium_line_t1

0x0642,	// (0x0004cb3e) list_medium_line_x2_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x2_g1

0x064e,	// (0x0004cb4a) list_medium_line_x2_g2_ParamLimits

0x064e,	// (0x0004cb4a) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x0005c246) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x0005c246) list_medium_line_x2_g

0x11d0,	// (0x0004d6cc) list_medium_line_x2_t1_ParamLimits

0x11d0,	// (0x0004d6cc) list_medium_line_x2_t1

0x0642,	// (0x0004cb3e) list_medium_line_x3_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x3_g1

0x064e,	// (0x0004cb4a) list_medium_line_x3_g2_ParamLimits

0x064e,	// (0x0004cb4a) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x0005c246) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x0005c246) list_medium_line_x3_g

0x11d0,	// (0x0004d6cc) list_medium_line_x3_t1_ParamLimits

0x11d0,	// (0x0004d6cc) list_medium_line_x3_t1

0x11e6,	// (0x0004d6e2) thumb_sp_fs_scroll_pane_g1

0x11ef,	// (0x0004d6eb) thumb_sp_fs_scroll_pane_g2

0x11f8,	// (0x0004d6f4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0005c24b) thumb_sp_fs_scroll_pane_g

0x11e6,	// (0x0004d6e2) bg_sp_fs_scroll_pane_g1

0x11ef,	// (0x0004d6eb) bg_sp_fs_scroll_pane_g2

0x11f8,	// (0x0004d6f4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0005c24b) bg_sp_fs_scroll_pane_g

0x0642,	// (0x0004cb3e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0642,	// (0x0004cb3e) list_medium_line_x2_t3_g4_g1

0x06d6,	// (0x0004cbd2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x06d6,	// (0x0004cbd2) list_medium_line_x2_t3_g4_g2

0x064e,	// (0x0004cb4a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x064e,	// (0x0004cb4a) list_medium_line_x2_t3_g4_g3

0x065a,	// (0x0004cb56) list_medium_line_x2_t3_g4_g4_ParamLimits

0x065a,	// (0x0004cb56) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0005b7e2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0005b7e2) list_medium_line_x2_t3_g4_g

0xcf52,	// (0x0005944e) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcf52,	// (0x0005944e) list_medium_line_x2_t3_g4_t1

0xcf68,	// (0x00059464) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcf68,	// (0x00059464) list_medium_line_x2_t3_g4_t2

0x067b,	// (0x0004cb77) list_medium_line_x2_t3_g4_t3_ParamLimits

0x067b,	// (0x0004cb77) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x0005c252) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x0005c252) list_medium_line_x2_t3_g4_t

0x0d6d,	// (0x0004d269) list_medium_line_g2_g1_ParamLimits

0x0d6d,	// (0x0004d269) list_medium_line_g2_g1

0x0d79,	// (0x0004d275) list_medium_line_g2_g2_ParamLimits

0x0d79,	// (0x0004d275) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0005bf1b) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0005bf1b) list_medium_line_g2_g

0x1201,	// (0x0004d6fd) list_medium_line_g2_t1_ParamLimits

0x1201,	// (0x0004d6fd) list_medium_line_g2_t1

0x0d6d,	// (0x0004d269) list_medium_line_t3_g2_g1_ParamLimits

0x0d6d,	// (0x0004d269) list_medium_line_t3_g2_g1

0x0d79,	// (0x0004d275) list_medium_line_t3_g2_g2_ParamLimits

0x0d79,	// (0x0004d275) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0005bf1b) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0005bf1b) list_medium_line_t3_g2_g

0xcf81,	// (0x0005947d) list_medium_line_t3_g2_t1_ParamLimits

0xcf81,	// (0x0005947d) list_medium_line_t3_g2_t1

0xcf98,	// (0x00059494) list_medium_line_t3_g2_t2_ParamLimits

0xcf98,	// (0x00059494) list_medium_line_t3_g2_t2

0xcfad,	// (0x000594a9) list_medium_line_t3_g2_t3_ParamLimits

0xcfad,	// (0x000594a9) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x0005c259) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x0005c259) list_medium_line_t3_g2_t

0x104f,	// (0x0004d54b) list_medium_line_right_icon_g1

0x1216,	// (0x0004d712) list_medium_line_right_icon_t1

0x0d6d,	// (0x0004d269) list_medium_line_t2_g1_ParamLimits

0x0d6d,	// (0x0004d269) list_medium_line_t2_g1

0xcfc6,	// (0x000594c2) list_medium_line_t2_t1_ParamLimits

0xcfc6,	// (0x000594c2) list_medium_line_t2_t1

0xcfe0,	// (0x000594dc) list_medium_line_t2_t2_ParamLimits

0xcfe0,	// (0x000594dc) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x0005c260) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x0005c260) list_medium_line_t2_t

0x0d6d,	// (0x0004d269) list_medium_line_t3_g1_ParamLimits

0x0d6d,	// (0x0004d269) list_medium_line_t3_g1

0xcff5,	// (0x000594f1) list_medium_line_t3_t1_ParamLimits

0xcff5,	// (0x000594f1) list_medium_line_t3_t1

0xd00f,	// (0x0005950b) list_medium_line_t3_t2_ParamLimits

0xd00f,	// (0x0005950b) list_medium_line_t3_t2

0xd025,	// (0x00059521) list_medium_line_t3_t3_ParamLimits

0xd025,	// (0x00059521) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x0005c265) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x0005c265) list_medium_line_t3_t

0x0d6d,	// (0x0004d269) list_medium_line_g3_g1_ParamLimits

0x0d6d,	// (0x0004d269) list_medium_line_g3_g1

0x1224,	// (0x0004d720) list_medium_line_g3_g2_ParamLimits

0x1224,	// (0x0004d720) list_medium_line_g3_g2

0x0d79,	// (0x0004d275) list_medium_line_g3_g3_ParamLimits

0x0d79,	// (0x0004d275) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x0005c26c) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x0005c26c) list_medium_line_g3_g

0x1230,	// (0x0004d72c) list_medium_line_g3_t1_ParamLimits

0x1230,	// (0x0004d72c) list_medium_line_g3_t1

0x0d6d,	// (0x0004d269) list_medium_line_t2_g3_g1_ParamLimits

0x0d6d,	// (0x0004d269) list_medium_line_t2_g3_g1

0x1224,	// (0x0004d720) list_medium_line_t2_g3_g2_ParamLimits

0x1224,	// (0x0004d720) list_medium_line_t2_g3_g2

0x0d79,	// (0x0004d275) list_medium_line_t2_g3_g3_ParamLimits

0x0d79,	// (0x0004d275) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x0005c26c) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x0005c26c) list_medium_line_t2_g3_g

0xd03a,	// (0x00059536) list_medium_line_t2_g3_t1_ParamLimits

0xd03a,	// (0x00059536) list_medium_line_t2_g3_t1

0xd051,	// (0x0005954d) list_medium_line_t2_g3_t2_ParamLimits

0xd051,	// (0x0005954d) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x0005c273) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x0005c273) list_medium_line_t2_g3_t

0x0d6d,	// (0x0004d269) list_medium_line_t3_g3_g1_ParamLimits

0x0d6d,	// (0x0004d269) list_medium_line_t3_g3_g1

0x1224,	// (0x0004d720) list_medium_line_t3_g3_g2_ParamLimits

0x1224,	// (0x0004d720) list_medium_line_t3_g3_g2

0x0d79,	// (0x0004d275) list_medium_line_t3_g3_g3_ParamLimits

0x0d79,	// (0x0004d275) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x0005c26c) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x0005c26c) list_medium_line_t3_g3_g

0xd066,	// (0x00059562) list_medium_line_t3_g3_t1_ParamLimits

0xd066,	// (0x00059562) list_medium_line_t3_g3_t1

0xd07a,	// (0x00059576) list_medium_line_t3_g3_t2_ParamLimits

0xd07a,	// (0x00059576) list_medium_line_t3_g3_t2

0xd08c,	// (0x00059588) list_medium_line_t3_g3_t3_ParamLimits

0xd08c,	// (0x00059588) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x0005c278) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x0005c278) list_medium_line_t3_g3_t

0x110b,	// (0x0004d607) list_medium_line_right_iconx2_g1

0x104f,	// (0x0004d54b) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x0005c27f) list_medium_line_right_iconx2_g

0x1245,	// (0x0004d741) list_medium_line_right_iconx2_t1

0x110b,	// (0x0004d607) list_medium_line_t2_right_iconx2_g1

0x104f,	// (0x0004d54b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x0005c27f) list_medium_line_t2_right_iconx2_g

0xd0a0,	// (0x0005959c) list_medium_line_t2_right_iconx2_t1

0xd0b0,	// (0x000595ac) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x0005c284) list_medium_line_t2_right_iconx2_t

0x1253,	// (0x0004d74f) list_medium_line_x4_t4_t1

0xd0be,	// (0x000595ba) list_medium_line_x4_t4_t2

0xd0ce,	// (0x000595ca) list_medium_line_x4_t4_t3

0xd0de,	// (0x000595da) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x0005c289) list_medium_line_x4_t4_t

0xd117,	// (0x00059613) tport_appsw_pane_ParamLimits

0xd117,	// (0x00059613) tport_appsw_pane

0xd125,	// (0x00059621) tport_contact_pane_ParamLimits

0xd125,	// (0x00059621) tport_contact_pane

0xd133,	// (0x0005962f) tport_listscroll_pane_ParamLimits

0xd133,	// (0x0005962f) tport_listscroll_pane

0xd141,	// (0x0005963d) cell_tport_appsw_pane_ParamLimits

0xd141,	// (0x0005963d) cell_tport_appsw_pane

0x48c6,	// (0x00050dc2) tport_appsw_pane_g1_ParamLimits

0x48c6,	// (0x00050dc2) tport_appsw_pane_g1

0x1261,	// (0x0004d75d) tport_contact_pane_g1

0x126a,	// (0x0004d766) tport_contact_pane_t1

0x1278,	// (0x0004d774) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x0005c292) tport_contact_pane_t

0x1286,	// (0x0004d782) list_tport_pane

0x128f,	// (0x0004d78b) scroll_pane_cp_030

0xd16c,	// (0x00059668) cell_tport_appsw_pane_g1

0x12a8,	// (0x0004d7a4) cell_tport_appsw_pane_t1

0x03cf,	// (0x0004c8cb) grid_highlight_pane_cp019

0xd17c,	// (0x00059678) list_tport_double_graphic_pane_ParamLimits

0xd17c,	// (0x00059678) list_tport_double_graphic_pane

0x0448,	// (0x0004c944) list_highlight_pane_cp023_ParamLimits

0x0448,	// (0x0004c944) list_highlight_pane_cp023

0xd18d,	// (0x00059689) list_tport_double_graphic_pane_g1_ParamLimits

0xd18d,	// (0x00059689) list_tport_double_graphic_pane_g1

0xd19a,	// (0x00059696) list_tport_double_graphic_pane_t1_ParamLimits

0xd19a,	// (0x00059696) list_tport_double_graphic_pane_t1

0xd1af,	// (0x000596ab) list_tport_double_graphic_pane_t2_ParamLimits

0xd1af,	// (0x000596ab) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x0005c29e) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x0005c29e) list_tport_double_graphic_pane_t

0x03cf,	// (0x0004c8cb) main_cale_note_pane

0xaff3,	// (0x000574ef) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaff3,	// (0x000574ef) cell_vitu2_function_top_wide_pane_cp01

0xc914,	// (0x00058e10) wait_bar_pane_cp05_ParamLimits

0x03cf,	// (0x0004c8cb) listscroll_cmail_pane

0x12be,	// (0x0004d7ba) list_cmail_pane

0xd1cb,	// (0x000596c7) list_cmail_body_pane

0xd1e0,	// (0x000596dc) list_single_cmail_header_caption_pane

0xd1fa,	// (0x000596f6) list_single_cmail_header_detail_pane_ParamLimits

0xd1fa,	// (0x000596f6) list_single_cmail_header_detail_pane

0xd229,	// (0x00059725) list_single_cmail_header_caption_pane_t1

0xd239,	// (0x00059735) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd239,	// (0x00059735) list_single_cmail_header_detail_pane_g1

0x12de,	// (0x0004d7da) list_single_cmail_header_detail_pane_g2_ParamLimits

0x12de,	// (0x0004d7da) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x0005c2a3) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x0005c2a3) list_single_cmail_header_detail_pane_g

0x12f7,	// (0x0004d7f3) list_single_cmail_header_detail_pane_t1_ParamLimits

0x12f7,	// (0x0004d7f3) list_single_cmail_header_detail_pane_t1

0x1335,	// (0x0004d831) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1335,	// (0x0004d831) list_single_cmail_header_editor_pane_bg

0xec4b,	// (0x0005b147) list_cmail_body_pane_g1

0x1347,	// (0x0004d843) list_cmail_body_pane_t1

0xe03d,	// (0x0005a539) list_single_cmail_header_editor_pane_bg_g1

0x2735,	// (0x0004ec31) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe04d,	// (0x0005a549) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe045,	// (0x0005a541) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe267,	// (0x0005a763) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe06d,	// (0x0005a569) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe05d,	// (0x0005a559) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe065,	// (0x0005a561) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2715,	// (0x0004ec11) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd277,	// (0x00059773) calenote_gesture_pane_ParamLimits

0xd277,	// (0x00059773) calenote_gesture_pane

0xd291,	// (0x0005978d) calenote_window_pane_ParamLimits

0xd291,	// (0x0005978d) calenote_window_pane

0x1355,	// (0x0004d851) popup_note_window_cp01

0xd2a9,	// (0x000597a5) calenote_swipe_1_pane_ParamLimits

0xd2a9,	// (0x000597a5) calenote_swipe_1_pane

0xccf0,	// (0x000591ec) calenote_swipe_2_pane_ParamLimits

0xccf0,	// (0x000591ec) calenote_swipe_2_pane

0xefa3,	// (0x0005b49f) calenote_swipe_1_pane_g1_ParamLimits

0xefa3,	// (0x0005b49f) calenote_swipe_1_pane_g1

0xefb0,	// (0x0005b4ac) calenote_swipe_1_pane_g2_ParamLimits

0xefb0,	// (0x0005b4ac) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0005c1d2) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0005c1d2) calenote_swipe_1_pane_g

0x1367,	// (0x0004d863) calenote_swipe_1_pane_t1_ParamLimits

0x1367,	// (0x0004d863) calenote_swipe_1_pane_t1

0xefa3,	// (0x0005b49f) calenote_swipe_2_pane_g1_ParamLimits

0xefa3,	// (0x0005b49f) calenote_swipe_2_pane_g1

0x1386,	// (0x0004d882) calenote_swipe_2_pane_g2_ParamLimits

0x1386,	// (0x0004d882) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x0005c2af) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x0005c2af) calenote_swipe_2_pane_g

0x1392,	// (0x0004d88e) calenote_swipe_2_pane_t1_ParamLimits

0x1392,	// (0x0004d88e) calenote_swipe_2_pane_t1

0x03cf,	// (0x0004c8cb) main_mup_navstr_pane

0x9d95,	// (0x00056291) main_mup3_pane_t7_ParamLimits

0x9d95,	// (0x00056291) main_mup3_pane_t7

0xa768,	// (0x00056c64) main_mp4_pane_g6_ParamLimits

0xa768,	// (0x00056c64) main_mp4_pane_g6

0xaad8,	// (0x00056fd4) main_image3_pane_t4_ParamLimits

0xaad8,	// (0x00056fd4) main_image3_pane_t4

0xd2bc,	// (0x000597b8) popup_navstr_preview_pane_ParamLimits

0xd2bc,	// (0x000597b8) popup_navstr_preview_pane

0xd2c8,	// (0x000597c4) scroll_navstr_pane_ParamLimits

0xd2c8,	// (0x000597c4) scroll_navstr_pane

0x03cf,	// (0x0004c8cb) bg_popup_preview_window_pane_cp04

0x13b9,	// (0x0004d8b5) popup_navstr_preview_pane_t1

0xd2d4,	// (0x000597d0) scroll_navstr_pane_g1_ParamLimits

0xd2d4,	// (0x000597d0) scroll_navstr_pane_g1

0xd2e1,	// (0x000597dd) scroll_navstr_pane_t1_ParamLimits

0xd2e1,	// (0x000597dd) scroll_navstr_pane_t1

0x135e,	// (0x0004d85a) bg_button_pane_cp014

0x135e,	// (0x0004d85a) bg_button_pane_cp030

0xcbdc,	// (0x000590d8) list_double_fisheye_pane_g4_ParamLimits

0xcbdc,	// (0x000590d8) list_double_fisheye_pane_g4

0xcbe8,	// (0x000590e4) list_double_fisheye_pane_g5_ParamLimits

0xcbe8,	// (0x000590e4) list_double_fisheye_pane_g5

0x12c6,	// (0x0004d7c2) sp_fs_scroll_pane_cp03

0xf098,	// (0x0005b594) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf0a4,	// (0x0005b5a0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0005c1ef) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf0b0,	// (0x0005b5ac) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd1c1,	// (0x000596bd) sp_fs_scroll_pane_cp02

0x2441,	// (0x0004e93d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2441,	// (0x0004e93d) popup_sp_fs_calendar_preview_list_single_pane

0x03cf,	// (0x0004c8cb) main_cam6_pano_pane

0x0448,	// (0x0004c944) main_mup3_pane_ParamLimits

0x03cf,	// (0x0004c8cb) main_phacti_pane

0xc7e5,	// (0x00058ce1) bg_button_pane_cp11

0xc7fd,	// (0x00058cf9) main_mobtv_info_pane_g2_ParamLimits

0xc7fd,	// (0x00058cf9) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0005c14f) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0005c14f) main_mobtv_info_pane_g

0xc9b1,	// (0x00058ead) sc_clock_pane_t5_ParamLimits

0xc9b1,	// (0x00058ead) sc_clock_pane_t5

0xca56,	// (0x00058f52) main_radioblah_pane_g1_ParamLimits

0xeeef,	// (0x0005b3eb) main_radioblah_pane_t3_ParamLimits

0xeeef,	// (0x0005b3eb) main_radioblah_pane_t3

0xef07,	// (0x0005b403) main_radioblah_pane_t4_ParamLimits

0xef07,	// (0x0005b403) main_radioblah_pane_t4

0xca74,	// (0x00058f70) main_radioblah_text_pane_ParamLimits

0xca74,	// (0x00058f70) main_radioblah_text_pane

0xca81,	// (0x00058f7d) main_radioblah_info_pane_g1_ParamLimits

0xcb1a,	// (0x00059016) main_radioblah_info_pane_t4_ParamLimits

0xcb1a,	// (0x00059016) main_radioblah_info_pane_t4

0x0448,	// (0x0004c944) main_sp_fs_calendar_pane

0xd2f3,	// (0x000597ef) main_phacti_pane_g1

0xd2fb,	// (0x000597f7) phacti_note_pane_ParamLimits

0xd2fb,	// (0x000597f7) phacti_note_pane

0x13d0,	// (0x0004d8cc) phacti_term_pane_ParamLimits

0x13d0,	// (0x0004d8cc) phacti_term_pane

0x13e5,	// (0x0004d8e1) phacti_note_pane_t1_ParamLimits

0x13e5,	// (0x0004d8e1) phacti_note_pane_t1

0x13fc,	// (0x0004d8f8) phacti_term_pane_g1

0x1404,	// (0x0004d900) phacti_term_pane_t1_ParamLimits

0x1404,	// (0x0004d900) phacti_term_pane_t1

0x142e,	// (0x0004d92a) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1436,	// (0x0004d932) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x0005c2b9) popup_sp_fs_calendar_preview_list_single_pane_g

0x143e,	// (0x0004d93a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x143e,	// (0x0004d93a) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1454,	// (0x0004d950) aid_popup_sp_fs_bg_corner_pane

0x4631,	// (0x00050b2d) popup_sp_fs_calendar_preview_bg_pane_g1

0x03cf,	// (0x0004c8cb) popup_sp_fs_calendar_preview_bg_pane

0x145c,	// (0x0004d958) popup_sp_fs_calendar_preview_list_pane

0x0448,	// (0x0004c944) bg_main_sp_fs_cale_pane_ParamLimits

0x0448,	// (0x0004c944) bg_main_sp_fs_cale_pane

0x1464,	// (0x0004d960) listscroll_cale_mrui_pane_ParamLimits

0x1464,	// (0x0004d960) listscroll_cale_mrui_pane

0x1478,	// (0x0004d974) listscroll_sp_fs_schedule_track_pane

0x1481,	// (0x0004d97d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1481,	// (0x0004d97d) main_sp_fs_ctrlbar_pane_cp01

0x1492,	// (0x0004d98e) main_sp_fs_ribbon_pane

0x149a,	// (0x0004d996) popup_sp_fs_cale_preview_window

0xd33a,	// (0x00059836) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd33a,	// (0x00059836) list_single_sp_fs_schedule_track_pane

0x0c90,	// (0x0004d18c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0c90,	// (0x0004d18c) bg_sp_fs_highlight_list_pane_cp03

0xd34c,	// (0x00059848) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd34c,	// (0x00059848) list_single_sp_fs_schedule_track_pane_g1

0xd358,	// (0x00059854) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd358,	// (0x00059854) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x0005c2be) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x0005c2be) list_single_sp_fs_schedule_track_pane_g

0xd364,	// (0x00059860) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd364,	// (0x00059860) list_single_sp_fs_schedule_track_pane_t1

0xd382,	// (0x0005987e) sp_fs_schedule_track_pane_ParamLimits

0xd382,	// (0x0005987e) sp_fs_schedule_track_pane

0x14ac,	// (0x0004d9a8) sp_fs_schedule_track_pane_g1

0x14b4,	// (0x0004d9b0) sp_fs_schedule_track_pane_g2

0x14bc,	// (0x0004d9b8) sp_fs_schedule_track_pane_g3

0x14c4,	// (0x0004d9c0) sp_fs_schedule_track_pane_g4

0x14cc,	// (0x0004d9c8) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x0005c2c3) sp_fs_schedule_track_pane_g

0xe03d,	// (0x0005a539) bg_sp_fs_schedule_viewer_highlight_g1

0x2735,	// (0x0004ec31) bg_sp_fs_schedule_viewer_highlight_g2

0xe045,	// (0x0005a541) bg_sp_fs_schedule_viewer_highlight_g3

0xe04d,	// (0x0005a549) bg_sp_fs_schedule_viewer_highlight_g4

0xe267,	// (0x0005a763) bg_sp_fs_schedule_viewer_highlight_g5

0xe05d,	// (0x0005a559) bg_sp_fs_schedule_viewer_highlight_g6

0xe065,	// (0x0005a561) bg_sp_fs_schedule_viewer_highlight_g7

0xe06d,	// (0x0005a569) bg_sp_fs_schedule_viewer_highlight_g8

0x2715,	// (0x0004ec11) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x0005c2ce) bg_sp_fs_schedule_viewer_highlight_g

0x03cf,	// (0x0004c8cb) bg_main_sp_fs_ribbon_pane

0xd394,	// (0x00059890) main_sp_fs_ribbon_pane_g1

0x14d4,	// (0x0004d9d0) main_sp_fs_ribbon_pane_t1

0xd39d,	// (0x00059899) main_sp_fs_ribbon_pane_t2

0x14e3,	// (0x0004d9df) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x0005c2e1) main_sp_fs_ribbon_pane_t

0x14f2,	// (0x0004d9ee) main_sp_fs_ribbon_scheduler_pane

0x14fa,	// (0x0004d9f6) bg_main_sp_fs_ribbon_pane_g1

0x1503,	// (0x0004d9ff) bg_main_sp_fs_ribbon_pane_g2

0x150c,	// (0x0004da08) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x0005c2e8) bg_main_sp_fs_ribbon_pane_g

0x1514,	// (0x0004da10) main_sp_fs_ribbon_scheduler_pane_g1

0x151d,	// (0x0004da19) main_sp_fs_ribbon_scheduler_pane_g2

0x1526,	// (0x0004da22) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x0005c2ef) main_sp_fs_ribbon_scheduler_pane_g

0x152f,	// (0x0004da2b) list_cale_mrui_pane

0xd3ac,	// (0x000598a8) sp_fs_scroll_pane_cp07_ParamLimits

0xd3ac,	// (0x000598a8) sp_fs_scroll_pane_cp07

0xd3c2,	// (0x000598be) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd3c2,	// (0x000598be) bg_sp_fs_schedule_viewer_highlight

0x1538,	// (0x0004da34) list_single_sp_fs_schedule_track_pane_cp01

0x1540,	// (0x0004da3c) list_sp_fs_schedule_track_pane

0x1548,	// (0x0004da44) sp_fs_scroll_pane_cp06_ParamLimits

0x1548,	// (0x0004da44) sp_fs_scroll_pane_cp06

0x4631,	// (0x00050b2d) bgmain_sp_fs_calendar_pane_g1

0xd3cf,	// (0x000598cb) list_single_cale_mrui_pane_ParamLimits

0xd3cf,	// (0x000598cb) list_single_cale_mrui_pane

0x155a,	// (0x0004da56) list_single_cale_mrui_row_pane_ParamLimits

0x155a,	// (0x0004da56) list_single_cale_mrui_row_pane

0x1567,	// (0x0004da63) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1567,	// (0x0004da63) list_single_cale_mrui_row_pane_g1

0x159f,	// (0x0004da9b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x159f,	// (0x0004da9b) list_single_cale_mrui_row_pane_t1

0xd3f1,	// (0x000598ed) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd3f1,	// (0x000598ed) list_single_cale_mrui_row_pane_t2

0x15b1,	// (0x0004daad) list_single_cale_mrui_row_pane_t3_ParamLimits

0x15b1,	// (0x0004daad) list_single_cale_mrui_row_pane_t3

0x15e0,	// (0x0004dadc) list_single_cale_mrui_row_pane_t4_ParamLimits

0x15e0,	// (0x0004dadc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdff,	// (0x0005c2fb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdff,	// (0x0005c2fb) list_single_cale_mrui_row_pane_t

0xd457,	// (0x00059953) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd457,	// (0x00059953) list_single_cmail_header_editor_pane_bg_cp01

0xd47b,	// (0x00059977) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd47b,	// (0x00059977) list_single_cmail_header_editor_pane_bg_cp02

0xd497,	// (0x00059993) main_radioblah_text_pane_t1_ParamLimits

0xd497,	// (0x00059993) main_radioblah_text_pane_t1

0x160f,	// (0x0004db0b) cam6_indi_pane_cp01

0x1617,	// (0x0004db13) cam6_mode_pane_cp01

0x161f,	// (0x0004db1b) cam6_pano_pane

0x1628,	// (0x0004db24) cam6_zoom_pane_cp01

0x1632,	// (0x0004db2e) cam6_pano_image_pane

0x163b,	// (0x0004db37) cam6_pano_pane_g1

0xec4b,	// (0x0005b147) cam6_pano_pane_g2

0x1644,	// (0x0004db40) cam6_pano_pane_g3

0x164d,	// (0x0004db49) cam6_pano_pane_g4

0x4b9d,	// (0x00051099) cam6_pano_pane_g5

0x1656,	// (0x0004db52) cam6_pano_pane_g6

0x165e,	// (0x0004db5a) cam6_pano_pane_g7

0x1666,	// (0x0004db62) cam6_pano_pane_g8

0x166f,	// (0x0004db6b) cam6_pano_pane_g9

0x0008,

0xfe08,	// (0x0005c304) cam6_pano_pane_g

0x03cf,	// (0x0004c8cb) main_browser_tag_pane

0x13b1,	// (0x0004d8ad) grid_navstr_albumart_pane

0x167a,	// (0x0004db76) cell_navstr_albumart_pane_ParamLimits

0x167a,	// (0x0004db76) cell_navstr_albumart_pane

0x1696,	// (0x0004db92) cell_navstr_albumart_pane_g1

0x3fc7,	// (0x000504c3) cell_navstr_albumart_pane_g2

0x3fd7,	// (0x000504d3) cell_navstr_albumart_pane_g3

0x3fcf,	// (0x000504cb) cell_navstr_albumart_pane_g4

0x0003,

0xfe1b,	// (0x0005c317) cell_navstr_albumart_pane_g

0xd4b2,	// (0x000599ae) bt_list_pane_ParamLimits

0xd4b2,	// (0x000599ae) bt_list_pane

0xd4cb,	// (0x000599c7) bt_list_pane_t1

0xd4da,	// (0x000599d6) bt_list_pane_t2

0x0001,

0xfe24,	// (0x0005c320) bt_list_pane_t

0x03cf,	// (0x0004c8cb) main_cale_prevew_pane

0xd4e9,	// (0x000599e5) popup_cale_preview_window_ParamLimits

0xd4e9,	// (0x000599e5) popup_cale_preview_window

0x0448,	// (0x0004c944) bg_popup_preview_window_pane_cp05_ParamLimits

0x0448,	// (0x0004c944) bg_popup_preview_window_pane_cp05

0x169e,	// (0x0004db9a) list_cale_preview_pane_ParamLimits

0x169e,	// (0x0004db9a) list_cale_preview_pane

0xd504,	// (0x00059a00) list_double_cale_preview_pane_ParamLimits

0xd504,	// (0x00059a00) list_double_cale_preview_pane

0xd518,	// (0x00059a14) list_single_cale_preview_pane_ParamLimits

0xd518,	// (0x00059a14) list_single_cale_preview_pane

0xd530,	// (0x00059a2c) list_single_cale_preview_pane_g1

0xd538,	// (0x00059a34) list_single_cale_preview_pane_t1_ParamLimits

0xd538,	// (0x00059a34) list_single_cale_preview_pane_t1

0xd54d,	// (0x00059a49) list_double_cale_preview_pane_g1

0xd555,	// (0x00059a51) list_double_cale_preview_pane_t1_ParamLimits

0xd555,	// (0x00059a51) list_double_cale_preview_pane_t1

0xd56a,	// (0x00059a66) list_double_cale_preview_pane_t2_ParamLimits

0xd56a,	// (0x00059a66) list_double_cale_preview_pane_t2

0x0001,

0xfe29,	// (0x0005c325) list_double_cale_preview_pane_t_ParamLimits

0xfe29,	// (0x0005c325) list_double_cale_preview_pane_t

0x03cf,	// (0x0004c8cb) main_ezdial_pane

0x0448,	// (0x0004c944) main_sp_fs_email_pane_ParamLimits

0xcd28,	// (0x00059224) cmail_ddmenu_btn01_pane_ParamLimits

0xcd28,	// (0x00059224) cmail_ddmenu_btn01_pane

0xcd45,	// (0x00059241) cmail_ddmenu_btn02_pane_ParamLimits

0xcd45,	// (0x00059241) cmail_ddmenu_btn02_pane

0xcd63,	// (0x0005925f) cmail_ddmenu_btn03_pane_ParamLimits

0xcd63,	// (0x0005925f) cmail_ddmenu_btn03_pane

0xcd91,	// (0x0005928d) main_sp_fs_ctrlbar_pane_ParamLimits

0xcdad,	// (0x000592a9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd1cb,	// (0x000596c7) list_cmail_body_pane_ParamLimits

0x12d5,	// (0x0004d7d1) bg_button_pane_cp12

0x12ea,	// (0x0004d7e6) list_single_cmail_header_detail_pane_g3_ParamLimits

0x12ea,	// (0x0004d7e6) list_single_cmail_header_detail_pane_g3

0xd251,	// (0x0005974d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd251,	// (0x0005974d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x0005c2aa) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x0005c2aa) list_single_cmail_header_detail_pane_t

0x1419,	// (0x0004d915) phacti_term_pane_t2_ParamLimits

0x1419,	// (0x0004d915) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x0005c2b4) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x0005c2b4) phacti_term_pane_t

0x16aa,	// (0x0004dba6) aid_size_list_single_double

0xd582,	// (0x00059a7e) popup_ezdial_listscroll_window

0xd5a2,	// (0x00059a9e) popup_number_entry_window_cp01

0x2d7f,	// (0x0004f27b) bg_popup_call_pane_cp09

0x16b6,	// (0x0004dbb2) ezdial_list_pane

0x16be,	// (0x0004dbba) scroll_pane_cp23

0x4408,	// (0x00050904) bg_button_pane_cp028_ParamLimits

0x4408,	// (0x00050904) bg_button_pane_cp028

0xd5b0,	// (0x00059aac) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd5b0,	// (0x00059aac) cmail_ddmenu_btn01_pane_g1

0xd5c0,	// (0x00059abc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd5c0,	// (0x00059abc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2e,	// (0x0005c32a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2e,	// (0x0005c32a) cmail_ddmenu_btn01_pane_g

0x16c6,	// (0x0004dbc2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x16c6,	// (0x0004dbc2) cmail_ddmenu_btn01_pane_t1

0x41ae,	// (0x000506aa) bg_button_pane_cp029_ParamLimits

0x41ae,	// (0x000506aa) bg_button_pane_cp029

0xd5c0,	// (0x00059abc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd5c0,	// (0x00059abc) cmail_ddmenu_btn02_pane_g1

0xd5d8,	// (0x00059ad4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd5d8,	// (0x00059ad4) cmail_ddmenu_btn02_pane_t1

0x0c90,	// (0x0004d18c) bg_button_pane_cp031_ParamLimits

0x0c90,	// (0x0004d18c) bg_button_pane_cp031

0xd5c0,	// (0x00059abc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd5c0,	// (0x00059abc) cmail_ddmenu_btn03_pane_g1

0xd5d8,	// (0x00059ad4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd5d8,	// (0x00059ad4) cmail_ddmenu_btn03_pane_t1

0xa973,	// (0x00056e6f) cell_dialer2_keypad_pane_t1_ParamLimits

0xa98d,	// (0x00056e89) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa98d,	// (0x00056e89) cell_dialer2_keypad_pane_t1_copy1

0xc675,	// (0x00058b71) ncimui_group_button_pane

0x0448,	// (0x0004c944) main_sp_fs_calendar_pane_ParamLimits

0xd1e0,	// (0x000596dc) list_single_cmail_header_caption_pane_ParamLimits

0x0eda,	// (0x0004d3d6) aid_recal_txt_sm_pane

0x03cf,	// (0x0004c8cb) mian_recal_day_pane

0x149a,	// (0x0004d996) popup_sp_fs_cale_preview_window_ParamLimits

0x03cf,	// (0x0004c8cb) list_recal_day_pane

0x16f4,	// (0x0004dbf0) list_single_recal_day_pane_ParamLimits

0x16f4,	// (0x0004dbf0) list_single_recal_day_pane

0x1706,	// (0x0004dc02) list_single_recal_day_pane_g1_ParamLimits

0x1706,	// (0x0004dc02) list_single_recal_day_pane_g1

0x1712,	// (0x0004dc0e) list_single_recal_day_pane_g2_ParamLimits

0x1712,	// (0x0004dc0e) list_single_recal_day_pane_g2

0x171e,	// (0x0004dc1a) list_single_recal_day_pane_g3_ParamLimits

0x171e,	// (0x0004dc1a) list_single_recal_day_pane_g3

0xd5fc,	// (0x00059af8) list_single_recal_day_pane_g4_ParamLimits

0xd5fc,	// (0x00059af8) list_single_recal_day_pane_g4

0x172a,	// (0x0004dc26) list_single_recal_day_pane_g5_ParamLimits

0x172a,	// (0x0004dc26) list_single_recal_day_pane_g5

0x1736,	// (0x0004dc32) list_single_recal_day_pane_g6_ParamLimits

0x1736,	// (0x0004dc32) list_single_recal_day_pane_g6

0x0005,

0xfe3d,	// (0x0005c339) list_single_recal_day_pane_g_ParamLimits

0xfe3d,	// (0x0005c339) list_single_recal_day_pane_g

0x1742,	// (0x0004dc3e) list_single_recal_day_pane_t1

0x1750,	// (0x0004dc4c) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x0005c346) list_single_recal_day_pane_t

0xd60a,	// (0x00059b06) ncimui_query_button_pane_ParamLimits

0xd60a,	// (0x00059b06) ncimui_query_button_pane

0xd61a,	// (0x00059b16) ncimui_query_button_pane_t1_ParamLimits

0xd61a,	// (0x00059b16) ncimui_query_button_pane_t1

0x175e,	// (0x0004dc5a) ncimui_query_button_pane_t2_ParamLimits

0x175e,	// (0x0004dc5a) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x0005c34b) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x0005c34b) ncimui_query_button_pane_t

0xd62d,	// (0x00059b29) query_button_pane_ParamLimits

0xd62d,	// (0x00059b29) query_button_pane

0x03cf,	// (0x0004c8cb) bg_button_pane_cp0028

0x1771,	// (0x0004dc6d) query_button_pane_t1

0x8dea,	// (0x000552e6) main_tport_pane_ParamLimits

0xd0ee,	// (0x000595ea) bg_popup_window_pane_cp01_ParamLimits

0xd0ee,	// (0x000595ea) bg_popup_window_pane_cp01

0xd0fb,	// (0x000595f7) heading_pane_cp08_ParamLimits

0xd0fb,	// (0x000595f7) heading_pane_cp08

0xd109,	// (0x00059605) heading_pane_cp07_ParamLimits

0xd109,	// (0x00059605) heading_pane_cp07

0x12a0,	// (0x0004d79c) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x0005c297) cell_tport_appsw_pane_g

0x84f2,	// (0x000549ee) input_candi_list_open_g1

0x28d0,	// (0x0004edcc) list_cale_time_pane_g6_ParamLimits

0x28d0,	// (0x0004edcc) list_cale_time_pane_g6

0x984f,	// (0x00055d4b) aid_size_touch_calib_1_ParamLimits

0x984f,	// (0x00055d4b) aid_size_touch_calib_1

0x985b,	// (0x00055d57) aid_size_touch_calib_2_ParamLimits

0x985b,	// (0x00055d57) aid_size_touch_calib_2

0x9869,	// (0x00055d65) aid_size_touch_calib_3_ParamLimits

0x9869,	// (0x00055d65) aid_size_touch_calib_3

0x9879,	// (0x00055d75) aid_size_touch_calib_4_ParamLimits

0x9879,	// (0x00055d75) aid_size_touch_calib_4

0x9887,	// (0x00055d83) main_touch_calib_button_group_pane_ParamLimits

0x9887,	// (0x00055d83) main_touch_calib_button_group_pane

0x9895,	// (0x00055d91) main_touch_calib_pane_g1_ParamLimits

0x98a1,	// (0x00055d9d) main_touch_calib_pane_g2_ParamLimits

0x98ad,	// (0x00055da9) main_touch_calib_pane_g3_ParamLimits

0x98b9,	// (0x00055db5) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0005bc71) main_touch_calib_pane_g_ParamLimits

0x98c5,	// (0x00055dc1) main_touch_calib_pane_t1_ParamLimits

0x98dc,	// (0x00055dd8) main_touch_calib_pane_t2_ParamLimits

0x98f3,	// (0x00055def) main_touch_calib_pane_t3_ParamLimits

0x9907,	// (0x00055e03) main_touch_calib_pane_t4_ParamLimits

0x991d,	// (0x00055e19) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0005bc7a) main_touch_calib_pane_t_ParamLimits

0x4967,	// (0x00050e63) list_single_fp_cale_pane_g3_ParamLimits

0x4967,	// (0x00050e63) list_single_fp_cale_pane_g3

0xaddb,	// (0x000572d7) bg_button_pane_cp012_ParamLimits

0xaddb,	// (0x000572d7) bg_vkb2_func_pane_cp03_ParamLimits

0xb76d,	// (0x00057c69) cell_vitu2_function_top_pane_g1_ParamLimits

0xaddb,	// (0x000572d7) bg_vkb2_func_pane_cp04_ParamLimits

0xc611,	// (0x00058b0d) main_ncimui_button_group_pane_ParamLimits

0xc611,	// (0x00058b0d) main_ncimui_button_group_pane

0xc663,	// (0x00058b5f) main_ncimui_pane_t3_ParamLimits

0xc663,	// (0x00058b5f) main_ncimui_pane_t3

0x13c7,	// (0x0004d8c3) phacti_button_group_pane

0x16aa,	// (0x0004dba6) aid_size_list_single_double_ParamLimits

0xd582,	// (0x00059a7e) popup_ezdial_listscroll_window_ParamLimits

0xd5a2,	// (0x00059a9e) popup_number_entry_window_cp01_ParamLimits

0xd63a,	// (0x00059b36) phacti_button_pane_ParamLimits

0xd63a,	// (0x00059b36) phacti_button_pane

0x03cf,	// (0x0004c8cb) bg_button_pane_cp14

0x177f,	// (0x0004dc7b) phacti_button_pane_t1

0xd64b,	// (0x00059b47) main_touch_calib_button_pane_ParamLimits

0xd64b,	// (0x00059b47) main_touch_calib_button_pane

0x232b,	// (0x0004e827) bg_button_pane_cp18_ParamLimits

0x232b,	// (0x0004e827) bg_button_pane_cp18

0x178d,	// (0x0004dc89) main_touch_calib_button_pane_t1_ParamLimits

0x178d,	// (0x0004dc89) main_touch_calib_button_pane_t1

0x17a3,	// (0x0004dc9f) main_touch_calib_button_pane_t2_ParamLimits

0x17a3,	// (0x0004dc9f) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x0005c350) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x0005c350) main_touch_calib_button_pane_t

0x03cf,	// (0x0004c8cb) cell_ncimui_button_pane

0x03cf,	// (0x0004c8cb) bg_button_pane_cp032

0x17c1,	// (0x0004dcbd) cell_ncimui_button_pane_t1

0xa9e9,	// (0x00056ee5) image3_infobar_pane_ParamLimits

0xa9e9,	// (0x00056ee5) image3_infobar_pane

0xc9d3,	// (0x00058ecf) fs_bigclock_status_pane_ParamLimits

0xc9d3,	// (0x00058ecf) fs_bigclock_status_pane

0xc9e0,	// (0x00058edc) main_fs_bigclock_clock_pane_ParamLimits

0xc9e0,	// (0x00058edc) main_fs_bigclock_clock_pane

0xc9f0,	// (0x00058eec) main_fs_bigclock_indi_pane_ParamLimits

0xc9f0,	// (0x00058eec) main_fs_bigclock_indi_pane

0xca22,	// (0x00058f1e) main_fs_bigclock_swipe_pane_ParamLimits

0xca22,	// (0x00058f1e) main_fs_bigclock_swipe_pane

0x03cf,	// (0x0004c8cb) main_fs_clock_dumped_data

0xed6c,	// (0x0005b268) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xed6c,	// (0x0005b268) list_single_fs_bigclock_indicator_pane_g1

0xed8c,	// (0x0005b288) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xed8c,	// (0x0005b288) list_single_fs_bigclock_indicator_pane_g2

0xeda6,	// (0x0005b2a2) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xeda6,	// (0x0005b2a2) list_single_fs_bigclock_indicator_pane_g3

0xedc2,	// (0x0005b2be) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xedc2,	// (0x0005b2be) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0005c183) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0005c183) list_single_fs_bigclock_indicator_pane_g

0xede8,	// (0x0005b2e4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xede8,	// (0x0005b2e4) list_single_fs_bigclock_indicator_pane_t1

0xee10,	// (0x0005b30c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xee10,	// (0x0005b30c) list_single_fs_bigclock_indicator_pane_t2

0xee38,	// (0x0005b334) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xee38,	// (0x0005b334) list_single_fs_bigclock_indicator_pane_t3

0xee62,	// (0x0005b35e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xee62,	// (0x0005b35e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0005c18e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0005c18e) list_single_fs_bigclock_indicator_pane_t

0x17cf,	// (0x0004dccb) image3_infobar_fav_pane_ParamLimits

0x17cf,	// (0x0004dccb) image3_infobar_fav_pane

0x17df,	// (0x0004dcdb) image3_infobar_loc_pane_ParamLimits

0x17df,	// (0x0004dcdb) image3_infobar_loc_pane

0x17f5,	// (0x0004dcf1) image3_infobar_time_pane_ParamLimits

0x17f5,	// (0x0004dcf1) image3_infobar_time_pane

0x4631,	// (0x00050b2d) image3_infobar_time_pane_g1

0x1805,	// (0x0004dd01) image3_infobar_time_pane_t1

0x4631,	// (0x00050b2d) image3_infobar_loc_pane_g1

0x1813,	// (0x0004dd0f) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x0005c355) image3_infobar_loc_pane_g

0x181b,	// (0x0004dd17) image3_infobar_loc_pane_t1

0x4631,	// (0x00050b2d) image3_infobar_fav_pane_g1

0x1829,	// (0x0004dd25) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x0005c35a) image3_infobar_fav_pane_g

0x1831,	// (0x0004dd2d) fs_bigclock_status_battery_pane

0x183a,	// (0x0004dd36) fs_bigclock_status_signal_pane

0x1843,	// (0x0004dd3f) fs_bigclock_status_title_pane

0x184c,	// (0x0004dd48) fs_bigclock_status_signal_pane_g1

0x1855,	// (0x0004dd51) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x0005c35f) fs_bigclock_status_signal_pane_g

0x185d,	// (0x0004dd59) fs_bigclock_status_battery_pane_g1

0x1866,	// (0x0004dd62) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x0005c364) fs_bigclock_status_battery_pane_g

0x186e,	// (0x0004dd6a) fs_bigclock_status_title_pane_t1

0x4631,	// (0x00050b2d) main_fs_bigclock_clock_pane_g1

0x187c,	// (0x0004dd78) main_fs_bigclock_clock_pane_g2

0x187c,	// (0x0004dd78) main_fs_bigclock_clock_pane_g3

0x187c,	// (0x0004dd78) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x0005c369) main_fs_bigclock_clock_pane_g

0x1888,	// (0x0004dd84) main_fs_bigclock_clock_pane_t1

0x1896,	// (0x0004dd92) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x0005c372) main_fs_bigclock_clock_pane_t

0x18a5,	// (0x0004dda1) list_single_fs_bigclock_indicator_pane_ParamLimits

0x18a5,	// (0x0004dda1) list_single_fs_bigclock_indicator_pane

0xd65d,	// (0x00059b59) list_single_fs_bigclock_pane_ParamLimits

0xd65d,	// (0x00059b59) list_single_fs_bigclock_pane

0x18bf,	// (0x0004ddbb) main_fs_bigclock_indicator_pane_t1

0x18ce,	// (0x0004ddca) list_single_fs_bigclock_pane_g1

0x18d6,	// (0x0004ddd2) list_single_fs_bigclock_pane_t1

0x4631,	// (0x00050b2d) main_fs_bigclock_swipe_pane_g1

0x1914,	// (0x0004de10) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x0005c383) main_fs_bigclock_swipe_pane_g

0x191c,	// (0x0004de18) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x191c,	// (0x0004de18) main_fs_bigclock_swipe_pane_t1

0x7c6a,	// (0x00054166) call_type_pane_ParamLimits

0x03cf,	// (0x0004c8cb) main_btmg_pane

0x1593,	// (0x0004da8f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1593,	// (0x0004da8f) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfa,	// (0x0005c2f6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x0005c2f6) list_single_cale_mrui_row_pane_g

0x16e4,	// (0x0004dbe0) list_recal_vselct_arw_lo_pane

0x16ec,	// (0x0004dbe8) list_recal_vselct_arw_up_pane

0x0ed1,	// (0x0004d3cd) list_recal_vselct_pane

0x1939,	// (0x0004de35) btmg_button_pane

0xd6c0,	// (0x00059bbc) main_btmg_pane_g1

0x03cf,	// (0x0004c8cb) bg_button_pane_cp044

0x1943,	// (0x0004de3f) btmg_button_pane_t1

0x41a6,	// (0x000506a2) aid_listscroll_gen

0x0448,	// (0x0004c944) main_cntbar_detail_pane

0x12b6,	// (0x0004d7b2) list_cmail_folder_pane

0x12c6,	// (0x0004d7c2) sp_fs_scroll_pane_cp03_ParamLimits

0x36de,	// (0x0004fbda) list_single_fs_dyc_pane_cp01_ParamLimits

0x36de,	// (0x0004fbda) list_single_fs_dyc_pane_cp01

0x1951,	// (0x0004de4d) aid_size_cmail_indent

0x195a,	// (0x0004de56) list_single_dyc_row_pane_cp01

0xd6e8,	// (0x00059be4) cntbar_detail_list_pane_ParamLimits

0xd6e8,	// (0x00059be4) cntbar_detail_list_pane

0xd728,	// (0x00059c24) main_cntbar_detail_cont_pane_ParamLimits

0xd728,	// (0x00059c24) main_cntbar_detail_cont_pane

0x7c04,	// (0x00054100) scroll_pane_cp032_ParamLimits

0x7c04,	// (0x00054100) scroll_pane_cp032

0xd734,	// (0x00059c30) cntbar_detail_list_event_pane_ParamLimits

0xd734,	// (0x00059c30) cntbar_detail_list_event_pane

0xd6f6,	// (0x00059bf2) cntbar_detail_list_shct_pane

0x2783,	// (0x0004ec7f) aid_list_gen

0x1963,	// (0x0004de5f) aid_scroll

0x196c,	// (0x0004de68) aid_size_touch_scroll_bar

0xd744,	// (0x00059c40) aid_list_double

0x197e,	// (0x0004de7a) aid_list_single

0xe516,	// (0x0005aa12) aid_list_single_lg

0x1987,	// (0x0004de83) aid_list_z_g_a_sm

0x198f,	// (0x0004de8b) aid_list_z_g_d

0x1997,	// (0x0004de93) aid_txt_z_prm

0xd74d,	// (0x00059c49) aid_txt_z_prm_cp01

0xd75b,	// (0x00059c57) aid_txt_z_sec

0xd769,	// (0x00059c65) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd769,	// (0x00059c65) main_cntbar_detail_cont_pane_g1

0xd776,	// (0x00059c72) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd776,	// (0x00059c72) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x0005c388) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x0005c388) main_cntbar_detail_cont_pane_g

0x19a5,	// (0x0004dea1) main_cntbar_detail_cont_pane_t1

0x19b3,	// (0x0004deaf) main_cntbar_detail_cont_pane_t2

0x19c1,	// (0x0004debd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x0005c38d) main_cntbar_detail_cont_pane_t

0xd782,	// (0x00059c7e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd782,	// (0x00059c7e) cell_cntbar_detail_list_shct_pane

0x19cf,	// (0x0004decb) cntbar_detail_list_shct_pane_g1

0x19d8,	// (0x0004ded4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x0005c394) cntbar_detail_list_shct_pane_g

0xd796,	// (0x00059c92) cntbar_detail_list_event_pane_g1_ParamLimits

0xd796,	// (0x00059c92) cntbar_detail_list_event_pane_g1

0xd7a2,	// (0x00059c9e) cntbar_detail_list_event_pane_g2_ParamLimits

0xd7a2,	// (0x00059c9e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x0005c399) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x0005c399) cntbar_detail_list_event_pane_g

0xd810,	// (0x00059d0c) cntbar_detail_list_event_pane_t1_ParamLimits

0xd810,	// (0x00059d0c) cntbar_detail_list_event_pane_t1

0xd825,	// (0x00059d21) cntbar_detail_list_event_pane_t2_ParamLimits

0xd825,	// (0x00059d21) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x0005c3a6) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x0005c3a6) cntbar_detail_list_event_pane_t

0x4631,	// (0x00050b2d) cell_cntbar_detail_list_shct_pane_g1

0x8002,	// (0x000544fe) navi_pane_mv_g3

0x0448,	// (0x0004c944) main_cntbar_detail_pane_ParamLimits

0x03cf,	// (0x0004c8cb) main_notif_wgt_pane

0xa6bd,	// (0x00056bb9) aid_tch_main_mp4_pane_g4

0xa8d2,	// (0x00056dce) popup_slider_window_cp02

0x16db,	// (0x0004dbd7) list_recal_day_event_pane

0xd6c8,	// (0x00059bc4) cntbar_detail_btn_pane_ParamLimits

0xd6c8,	// (0x00059bc4) cntbar_detail_btn_pane

0xd6d8,	// (0x00059bd4) cntbar_detail_btn_pane_cp01_ParamLimits

0xd6d8,	// (0x00059bd4) cntbar_detail_btn_pane_cp01

0xd6f6,	// (0x00059bf2) cntbar_detail_list_shct_pane_ParamLimits

0xd702,	// (0x00059bfe) cntbar_detail_pane_g1_ParamLimits

0xd702,	// (0x00059bfe) cntbar_detail_pane_g1

0xd712,	// (0x00059c0e) cntbar_detail_pane_t1_ParamLimits

0xd712,	// (0x00059c0e) cntbar_detail_pane_t1

0xd7ae,	// (0x00059caa) cntbar_detail_list_event_pane_g3_ParamLimits

0xd7ae,	// (0x00059caa) cntbar_detail_list_event_pane_g3

0xd7c6,	// (0x00059cc2) cntbar_detail_list_event_pane_g4_ParamLimits

0xd7c6,	// (0x00059cc2) cntbar_detail_list_event_pane_g4

0xd7de,	// (0x00059cda) cntbar_detail_list_event_pane_g5_ParamLimits

0xd7de,	// (0x00059cda) cntbar_detail_list_event_pane_g5

0xd7f6,	// (0x00059cf2) cntbar_detail_list_event_pane_g6_ParamLimits

0xd7f6,	// (0x00059cf2) cntbar_detail_list_event_pane_g6

0xd83a,	// (0x00059d36) cntbar_detail_list_event_pane_t3_ParamLimits

0xd83a,	// (0x00059d36) cntbar_detail_list_event_pane_t3

0xd84c,	// (0x00059d48) popup_notif_wgt_window_ParamLimits

0xd84c,	// (0x00059d48) popup_notif_wgt_window

0xd85c,	// (0x00059d58) popup_submenu_window_cp01_ParamLimits

0xd85c,	// (0x00059d58) popup_submenu_window_cp01

0x2d7f,	// (0x0004f27b) bg_popup_window_pane_cp10

0x19e1,	// (0x0004dedd) listscroll_notif_wgt_pane

0x19eb,	// (0x0004dee7) list_notif_wgt_window

0x19f4,	// (0x0004def0) scroll_pane_cp033

0x19fd,	// (0x0004def9) list_notif_wgt_row_pane_ParamLimits

0x19fd,	// (0x0004def9) list_notif_wgt_row_pane

0x1a11,	// (0x0004df0d) aid_size_list_notif_wgt_del

0x1a1a,	// (0x0004df16) list_notif_wgt_row_pane_g1

0x1a22,	// (0x0004df1e) list_notif_wgt_row_pane_g2

0x1a2a,	// (0x0004df26) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x0005c3ad) list_notif_wgt_row_pane_g

0x1a33,	// (0x0004df2f) list_notif_wgt_row_pane_t1

0x1a41,	// (0x0004df3d) list_notif_wgt_row_pane_t2

0x1a4f,	// (0x0004df4b) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x0005c3b4) list_notif_wgt_row_pane_t

0xe281,	// (0x0005a77d) list_recal_day_event_pane_g1

0x1a5d,	// (0x0004df59) list_recal_day_event_pane_t1

0x03cf,	// (0x0004c8cb) bg_button_pane_cp045

0x1a6c,	// (0x0004df68) cntbar_detail_btn_pane_t1

0x41ae,	// (0x000506aa) main_callh_pane_ParamLimits

0x41ae,	// (0x000506aa) main_callh_pane

0x03cf,	// (0x0004c8cb) main_coverflow0_pane

0x03cf,	// (0x0004c8cb) main_wgtman_pane

0xca3a,	// (0x00058f36) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xca3a,	// (0x00058f36) main_fs_bigclock_unlock_btn_pane

0x1298,	// (0x0004d794) bg_button_pane_cp16

0xd174,	// (0x00059670) cell_tport_appsw_pane_g3

0xd86a,	// (0x00059d66) cf0_flow_pane_ParamLimits

0xd86a,	// (0x00059d66) cf0_flow_pane

0x1a7a,	// (0x0004df76) listscroll_cf0_pane

0x1a83,	// (0x0004df7f) main_cf0_pane_g1

0xd879,	// (0x00059d75) main_cf0_pane_t1_ParamLimits

0xd879,	// (0x00059d75) main_cf0_pane_t1

0xd88d,	// (0x00059d89) main_cf0_pane_t2_ParamLimits

0xd88d,	// (0x00059d89) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x0005c3bb) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x0005c3bb) main_cf0_pane_t

0x1a8d,	// (0x0004df89) scroll_pane_cp11

0xd8a1,	// (0x00059d9d) cf0_flow_pane_g1

0xd8a9,	// (0x00059da5) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x0005c3c0) cf0_flow_pane_g

0xd8b1,	// (0x00059dad) cf0_flow_pane_t1

0x03cf,	// (0x0004c8cb) main_call6_pane

0x03cf,	// (0x0004c8cb) main_calllock_pane

0xd8bf,	// (0x00059dbb) call6_btn_grp_pane_ParamLimits

0xd8bf,	// (0x00059dbb) call6_btn_grp_pane

0xd8ce,	// (0x00059dca) call6_pane_g1_ParamLimits

0xd8ce,	// (0x00059dca) call6_pane_g1

0xd8de,	// (0x00059dda) popup_call6_1st_window_ParamLimits

0xd8de,	// (0x00059dda) popup_call6_1st_window

0xd8ec,	// (0x00059de8) popup_call6_2nd_window_ParamLimits

0xd8ec,	// (0x00059de8) popup_call6_2nd_window

0xd8fa,	// (0x00059df6) cell_call6_btn_pane_ParamLimits

0xd8fa,	// (0x00059df6) cell_call6_btn_pane

0x2d7f,	// (0x0004f27b) bg_popup_call2_in_pane_cp03

0x1a98,	// (0x0004df94) popup_call6_1st_window_g1

0x1aa0,	// (0x0004df9c) popup_call6_1st_window_g2

0x1aa8,	// (0x0004dfa4) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x0005c3c5) popup_call6_1st_window_g

0x1ab0,	// (0x0004dfac) popup_call6_1st_window_t1

0x1abf,	// (0x0004dfbb) popup_call6_1st_window_t2

0x1acf,	// (0x0004dfcb) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x0005c3cc) popup_call6_1st_window_t

0x2d7f,	// (0x0004f27b) bg_popup_call2_in_pane_cp04

0x1a98,	// (0x0004df94) popup_call6_2nd_window_g1

0x1aa0,	// (0x0004df9c) popup_call6_2nd_window_g2

0x1aa8,	// (0x0004dfa4) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x0005c3c5) popup_call6_2nd_window_g

0x1ab0,	// (0x0004dfac) popup_call6_2nd_window_t1

0x03cf,	// (0x0004c8cb) bg_button_pane_cp15

0x1adf,	// (0x0004dfdb) cell_call6_btn_pane_g1

0x1ae8,	// (0x0004dfe4) cell_call6_btn_pane_t1

0xd909,	// (0x00059e05) listscroll_wgtman_pane_ParamLimits

0xd909,	// (0x00059e05) listscroll_wgtman_pane

0xd927,	// (0x00059e23) wgtman_btn_pane_ParamLimits

0xd927,	// (0x00059e23) wgtman_btn_pane

0x2c45,	// (0x0004f141) aid_scroll_copy1

0x1af7,	// (0x0004dff3) list_wgtman_pane

0xd95c,	// (0x00059e58) wgtman_btn_pane_g1_ParamLimits

0xd95c,	// (0x00059e58) wgtman_btn_pane_g1

0xd984,	// (0x00059e80) wgtman_btn_pane_t1_ParamLimits

0xd984,	// (0x00059e80) wgtman_btn_pane_t1

0x1b01,	// (0x0004dffd) wgtman_btn_pane_t2_ParamLimits

0x1b01,	// (0x0004dffd) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x0005c3d3) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x0005c3d3) wgtman_btn_pane_t

0x1b18,	// (0x0004e014) listrow_wgtman_pane_ParamLimits

0x1b18,	// (0x0004e014) listrow_wgtman_pane

0x1b2c,	// (0x0004e028) listrow_wgtman_pane_g1

0xd9bb,	// (0x00059eb7) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x0005c3d8) listrow_wgtman_pane_g

0x1b35,	// (0x0004e031) listrow_wgtman_pane_t1

0x1b43,	// (0x0004e03f) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x0005c3dd) listrow_wgtman_pane_t

0x1b51,	// (0x0004e04d) wait_bar_pane_cp09

0x1b59,	// (0x0004e055) main_calllock_btn_pane

0x1b63,	// (0x0004e05f) main_calllock_pane_g1

0x03cf,	// (0x0004c8cb) bg_button_pane_cp17

0x1b6f,	// (0x0004e06b) main_calllock_btn_pane_g1

0x1b78,	// (0x0004e074) main_calllock_btn_pane_t1

0x03cf,	// (0x0004c8cb) main_dialer3_pane

0x03cf,	// (0x0004c8cb) main_fmrd2_pane

0x4631,	// (0x00050b2d) main_fs_bigclock_unlock_btn_pane_g1

0x1b8f,	// (0x0004e08b) main_fs_bigclock_unlock_btn_pane_t1

0xd9c5,	// (0x00059ec1) area_fmrd2_info_pane_ParamLimits

0xd9c5,	// (0x00059ec1) area_fmrd2_info_pane

0xd9d3,	// (0x00059ecf) area_fmrd2_visual_pane_ParamLimits

0xd9d3,	// (0x00059ecf) area_fmrd2_visual_pane

0xd9e1,	// (0x00059edd) fmrd2_indi_pane_ParamLimits

0xd9e1,	// (0x00059edd) fmrd2_indi_pane

0xd9ee,	// (0x00059eea) area_fmrd2_visual_pane_g1

0xd9f6,	// (0x00059ef2) area_fmrd2_visual_pane_t1

0xda06,	// (0x00059f02) area_fmrd2_visual_pane_t2

0xda16,	// (0x00059f12) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x0005c3e7) area_fmrd2_visual_pane_t

0xda26,	// (0x00059f22) area_fmrd2_info_pane_g1

0xda2e,	// (0x00059f2a) area_fmrd2_info_pane_t1

0xda3e,	// (0x00059f3a) area_fmrd2_info_pane_t2

0xda4e,	// (0x00059f4a) area_fmrd2_info_pane_t3

0xda5e,	// (0x00059f5a) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x0005c3ee) area_fmrd2_info_pane_t

0xda6e,	// (0x00059f6a) fmrd2_indi_pane_t1

0xda7e,	// (0x00059f7a) fmrd2_indi_pane_t2

0xda8e,	// (0x00059f8a) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x0005c3f7) fmrd2_indi_pane_t

0xedd1,	// (0x0005b2cd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xedd1,	// (0x0005b2cd) list_single_fs_bigclock_indicator_pane_g5

0xee77,	// (0x0005b373) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xee77,	// (0x0005b373) list_single_fs_bigclock_indicator_pane_t5

0xd311,	// (0x0005980d) aid_cell_bcale_month_pane_ParamLimits

0xd311,	// (0x0005980d) aid_cell_bcale_month_pane

0xd31d,	// (0x00059819) bcale_month_pane_ParamLimits

0xd31d,	// (0x00059819) bcale_month_pane

0xd32b,	// (0x00059827) bcale_preview_pane_ParamLimits

0xd32b,	// (0x00059827) bcale_preview_pane

0x18d6,	// (0x0004ddd2) list_single_fs_bigclock_pane_t1_ParamLimits

0x18f0,	// (0x0004ddec) list_single_fs_bigclock_pane_t2_ParamLimits

0x18f0,	// (0x0004ddec) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x0005c37e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0005c37e) list_single_fs_bigclock_pane_t

0x1b87,	// (0x0004e083) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x0005c3e2) main_fs_bigclock_unlock_btn_pane_g

0xda9e,	// (0x00059f9a) aid_dia3_key_size_ParamLimits

0xda9e,	// (0x00059f9a) aid_dia3_key_size

0xdaaa,	// (0x00059fa6) aid_dia3_listrow_size_ParamLimits

0xdaaa,	// (0x00059fa6) aid_dia3_listrow_size

0xdab8,	// (0x00059fb4) dia3_keypad_fun_pane_ParamLimits

0xdab8,	// (0x00059fb4) dia3_keypad_fun_pane

0xdac8,	// (0x00059fc4) dia3_keypad_num_pane_ParamLimits

0xdac8,	// (0x00059fc4) dia3_keypad_num_pane

0xdad8,	// (0x00059fd4) dia3_listscroll_pane_ParamLimits

0xdad8,	// (0x00059fd4) dia3_listscroll_pane

0xdae8,	// (0x00059fe4) dia3_numentry_pane_ParamLimits

0xdae8,	// (0x00059fe4) dia3_numentry_pane

0x1b9d,	// (0x0004e099) dia3_list_pane

0x1ba8,	// (0x0004e0a4) scroll_pane_cp12

0x03cf,	// (0x0004c8cb) bg_dia3_numentry_pane

0x1bb3,	// (0x0004e0af) dia3_numentry_pane_t1

0xdaf8,	// (0x00059ff4) cell_dia3_key_num_pane

0xdb00,	// (0x00059ffc) cell_dia3_key0_fun_pane_ParamLimits

0xdb00,	// (0x00059ffc) cell_dia3_key0_fun_pane

0xdb0d,	// (0x0005a009) cell_dia3_key1_fun_pane_ParamLimits

0xdb0d,	// (0x0005a009) cell_dia3_key1_fun_pane

0xdb1a,	// (0x0005a016) dia3_listrow_pane

0xeac3,	// (0x0005afbf) bg_dia3_numentry_pane_g1

0x03cf,	// (0x0004c8cb) bg_button_pane_cp21

0x1bc2,	// (0x0004e0be) cell_dia3_key_num_pane_t1

0x1bd0,	// (0x0004e0cc) cell_dia3_key_num_pane_t2

0x1bdf,	// (0x0004e0db) cell_dia3_key_num_pane_t3

0x1bee,	// (0x0004e0ea) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x0005c3fe) cell_dia3_key_num_pane_t

0x03cf,	// (0x0004c8cb) bg_button_pane_cp19

0xdb27,	// (0x0005a023) cell_dia3_key0_fun_pane_g1

0x03cf,	// (0x0004c8cb) bg_button_pane_cp20

0xdb2f,	// (0x0005a02b) cell_dia3_key1_fun_pane_g1

0xdb37,	// (0x0005a033) area_left_week_number_pane

0xdb40,	// (0x0005a03c) area_top_day_name_pane

0xdb49,	// (0x0005a045) frame_month_view_pane

0xdb53,	// (0x0005a04f) grid_month_view_pane

0xdb5d,	// (0x0005a059) cell_top_day_name_pane_ParamLimits

0xdb5d,	// (0x0005a059) cell_top_day_name_pane

0xdb79,	// (0x0005a075) cell_area_left_week_number_pane_ParamLimits

0xdb79,	// (0x0005a075) cell_area_left_week_number_pane

0xdb8d,	// (0x0005a089) cell_month_view_pane_ParamLimits

0xdb8d,	// (0x0005a089) cell_month_view_pane

0x1bfd,	// (0x0004e0f9) frm_month_g1

0xdbac,	// (0x0005a0a8) frm_month_g2

0xdbb6,	// (0x0005a0b2) frm_month_g3

0xdbc0,	// (0x0005a0bc) frm_month_g4

0xdbca,	// (0x0005a0c6) frm_month_g5

0xdbd4,	// (0x0005a0d0) frm_month_g6

0xdbde,	// (0x0005a0da) frm_month_g7

0x1c06,	// (0x0004e102) frm_month_g8

0xdbe8,	// (0x0005a0e4) frm_month_g9

0xdbf1,	// (0x0005a0ed) frm_month_g10

0xdbfa,	// (0x0005a0f6) frm_month_g11

0xdc03,	// (0x0005a0ff) frm_month_g12

0xdc0c,	// (0x0005a108) frm_month_g13

0xdc17,	// (0x0005a113) frm_month_g14

0xdc22,	// (0x0005a11e) frm_month_g15

0xdc2d,	// (0x0005a129) frm_month_g16

0x000f,

0xff0b,	// (0x0005c407) frm_month_g

0xdc38,	// (0x0005a134) cell_top_day_name_pane_t1

0xdc47,	// (0x0005a143) cell_area_left_week_number_pane_g1

0xdc38,	// (0x0005a134) cell_area_left_week_number_pane_t1

0x4631,	// (0x00050b2d) cell_month_view_pane_g1

0xdc4f,	// (0x0005a14b) cell_month_view_pane_t1

0x03cf,	// (0x0004c8cb) main_fps_pane

0xf05e,	// (0x0005b55a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf05e,	// (0x0005b55a) cmail_ddmenu_btn02_pane_cp1

0xf07a,	// (0x0005b576) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf07a,	// (0x0005b576) cmail_ddmenu_btn02_pane_cp2

0xd5cc,	// (0x00059ac8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd5cc,	// (0x00059ac8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe33,	// (0x0005c32f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe33,	// (0x0005c32f) cmail_ddmenu_btn02_pane_g

0xd5ea,	// (0x00059ae6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd5ea,	// (0x00059ae6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe38,	// (0x0005c334) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe38,	// (0x0005c334) cmail_ddmenu_btn02_pane_t

0xdc5e,	// (0x0005a15a) fps_text_pane_ParamLimits

0xdc5e,	// (0x0005a15a) fps_text_pane

0xdc6b,	// (0x0005a167) main_fps_pane_g1_ParamLimits

0xdc6b,	// (0x0005a167) main_fps_pane_g1

0xdc77,	// (0x0005a173) wait_bar_pane_cp010_ParamLimits

0xdc77,	// (0x0005a173) wait_bar_pane_cp010

0xdc83,	// (0x0005a17f) fps_text_pane_t1_ParamLimits

0xdc83,	// (0x0005a17f) fps_text_pane_t1

0xacc6,	// (0x000571c2) cam4_image_uncrop_pane_g1

0xaccf,	// (0x000571cb) cam4_image_uncrop_pane_g2

0xacd8,	// (0x000571d4) cam4_image_uncrop_pane_g3

0xace1,	// (0x000571dd) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0005be09) cam4_image_uncrop_pane_g

0xdb1a,	// (0x0005a016) dia3_listrow_pane_ParamLimits

0x03cf,	// (0x0004c8cb) main_phob2_pane

0xd14e,	// (0x0005964a) cell_tport_appsw_pane_cp02_ParamLimits

0xd14e,	// (0x0005964a) cell_tport_appsw_pane_cp02

0xd15d,	// (0x00059659) cell_tport_appsw_pane_cp03_ParamLimits

0xd15d,	// (0x00059659) cell_tport_appsw_pane_cp03

0x03cf,	// (0x0004c8cb) phob2_contact_card_pane

0x03cf,	// (0x0004c8cb) phob2_listscroll_pane

0x1c0f,	// (0x0004e10b) phob2_list_pane

0x1c17,	// (0x0004e113) scroll_pane_cp034

0xdc9c,	// (0x0005a198) phob2_cc_data_pane_ParamLimits

0xdc9c,	// (0x0005a198) phob2_cc_data_pane

0xdcb8,	// (0x0005a1b4) phob2_cc_listscroll_pane_ParamLimits

0xdcb8,	// (0x0005a1b4) phob2_cc_listscroll_pane

0xdcd4,	// (0x0005a1d0) list_double_large_graphic_phob2_pane_ParamLimits

0xdcd4,	// (0x0005a1d0) list_double_large_graphic_phob2_pane

0xdcee,	// (0x0005a1ea) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdcee,	// (0x0005a1ea) list_double_large_graphic_phob2_pane_g1

0xdcfb,	// (0x0005a1f7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdcfb,	// (0x0005a1f7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x0005c428) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x0005c428) list_double_large_graphic_phob2_pane_g

0xdd07,	// (0x0005a203) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xdd07,	// (0x0005a203) list_double_large_graphic_phob2_pane_t1

0xdd1c,	// (0x0005a218) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xdd1c,	// (0x0005a218) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x0005c42d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x0005c42d) list_double_large_graphic_phob2_pane_t

0x03cf,	// (0x0004c8cb) list_highlight_pane_cp024

0x1c1f,	// (0x0004e11b) phob2_cc_button_pane

0xdd2e,	// (0x0005a22a) phob2_cc_data_pane_g1_ParamLimits

0xdd2e,	// (0x0005a22a) phob2_cc_data_pane_g1

0xdd3a,	// (0x0005a236) phob2_cc_data_pane_g2_ParamLimits

0xdd3a,	// (0x0005a236) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x0005c432) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x0005c432) phob2_cc_data_pane_g

0xdd46,	// (0x0005a242) phob2_cc_data_pane_t1_ParamLimits

0xdd46,	// (0x0005a242) phob2_cc_data_pane_t1

0xdd58,	// (0x0005a254) phob2_cc_data_pane_t2_ParamLimits

0xdd58,	// (0x0005a254) phob2_cc_data_pane_t2

0xdd6a,	// (0x0005a266) phob2_cc_data_pane_t3_ParamLimits

0xdd6a,	// (0x0005a266) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x0005c437) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x0005c437) phob2_cc_data_pane_t

0x1c27,	// (0x0004e123) phob2_cc_list_pane_ParamLimits

0x1c27,	// (0x0004e123) phob2_cc_list_pane

0xe9de,	// (0x0005aeda) scroll_pane_cp035_ParamLimits

0xe9de,	// (0x0005aeda) scroll_pane_cp035

0x0448,	// (0x0004c944) bg_button_pane_cp033

0x1c33,	// (0x0004e12f) phob2_cc_button_pane_g1

0x1c3f,	// (0x0004e13b) phob2_cc_button_pane_t1

0x1c54,	// (0x0004e150) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x0005c43e) phob2_cc_button_pane_t

0xdd7c,	// (0x0005a278) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdd7c,	// (0x0005a278) list_double_large_graphic_phob2_cc_pane

0xdd9b,	// (0x0005a297) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdd9b,	// (0x0005a297) list_double_large_graphic_phob2_cc_pane_g1

0xddac,	// (0x0005a2a8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xddac,	// (0x0005a2a8) list_double_large_graphic_phob2_cc_pane_g2

0xddbb,	// (0x0005a2b7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xddbb,	// (0x0005a2b7) list_double_large_graphic_phob2_cc_pane_g3

0xddca,	// (0x0005a2c6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xddca,	// (0x0005a2c6) list_double_large_graphic_phob2_cc_pane_g4

0xdddb,	// (0x0005a2d7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdddb,	// (0x0005a2d7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x0005c443) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x0005c443) list_double_large_graphic_phob2_cc_pane_g

0xddea,	// (0x0005a2e6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xddea,	// (0x0005a2e6) list_double_large_graphic_phob2_cc_pane_t1

0xde13,	// (0x0005a30f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xde13,	// (0x0005a30f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x0005c44e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x0005c44e) list_double_large_graphic_phob2_cc_pane_t

0x1c66,	// (0x0004e162) list_highlight_pane_cp025_ParamLimits

0x1c66,	// (0x0004e162) list_highlight_pane_cp025

0x0448,	// (0x0004c944) bg_button_pane_cp033_ParamLimits

0x1c33,	// (0x0004e12f) phob2_cc_button_pane_g1_ParamLimits

0x1c3f,	// (0x0004e13b) phob2_cc_button_pane_t1_ParamLimits

0x1c54,	// (0x0004e150) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x0005c43e) phob2_cc_button_pane_t_ParamLimits

0x5e93,	// (0x0005238f) popup_wgtman_window

0xe15b,	// (0x0005a657) scroll_pane_cp038

0xd944,	// (0x00059e40) wgtman_btn_pane_cp_01_ParamLimits

0xd944,	// (0x00059e40) wgtman_btn_pane_cp_01

0x1c74,	// (0x0004e170) wgtman_content_pane

0x1c7d,	// (0x0004e179) wgtman_heading_pane

0x03cf,	// (0x0004c8cb) bg_heading_pane_cp02

0x1c86,	// (0x0004e182) wgtman_heading_pane_g1

0x1c8e,	// (0x0004e18a) wgtman_heading_pane_t1

0x1c9c,	// (0x0004e198) scroll_pane_cp036

0x1ca4,	// (0x0004e1a0) wgtman_list_pane

0xf0d2,	// (0x0005b5ce) wgtman_list_pane_t1_ParamLimits

0xf0d2,	// (0x0005b5ce) wgtman_list_pane_t1

0xac23,	// (0x0005711f) cam4_grid_pane

0xb930,	// (0x00057e2c) bg_button_pane_cp015_ParamLimits

0xb942,	// (0x00057e3e) bg_button_pane_cp016_ParamLimits

0xb955,	// (0x00057e51) bg_button_pane_cp017_ParamLimits

0xb9ab,	// (0x00057ea7) popup_vitu2_query_window_g3_ParamLimits

0xb9ab,	// (0x00057ea7) popup_vitu2_query_window_g3

0xba6a,	// (0x00057f66) popup_vitu2_query_window_t6_ParamLimits

0xba6a,	// (0x00057f66) popup_vitu2_query_window_t6

0xba95,	// (0x00057f91) popup_vitu2_query_window_t7_ParamLimits

0xba95,	// (0x00057f91) popup_vitu2_query_window_t7

0xecb2,	// (0x0005b1ae) cam4_grid_pane_g1

0xecbb,	// (0x0005b1b7) cam4_grid_pane_g2

0x1cac,	// (0x0004e1a8) cam4_grid_pane_g3

0x1cb5,	// (0x0004e1b1) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x0005c453) cam4_grid_pane_g

0x6cb2,	// (0x000531ae) aid_placing_vt_slider_lsc_ParamLimits

0x6fe5,	// (0x000534e1) vidtel_button_pane_ParamLimits

0x6fe5,	// (0x000534e1) vidtel_button_pane

0x03cf,	// (0x0004c8cb) bg_button_pane_cp034

0xde3c,	// (0x0005a338) vidtel_button_pane_g1

0x1cc0,	// (0x0004e1bc) vidtel_button_pane_t1

0xe25f,	// (0x0005a75b) aid_size_vtel_slider_touch

0xe9de,	// (0x0005aeda) scroll_pane_cp039

0xeb01,	// (0x0005affd) ncim_query_button_pane_cp01_ParamLimits

0xeb20,	// (0x0005b01c) ncimui_query_pane_g1_ParamLimits

0x0448,	// (0x0004c944) input_focus_pane_cp012_ParamLimits

0xeb45,	// (0x0005b041) ncim_query_entry_pane_t1_ParamLimits

0xe9de,	// (0x0005aeda) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
