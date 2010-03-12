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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00050b5a };

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
0x3754,	// (0x000542ae) Screen

0x3760,	// (0x000542ba) application_window

0x37bc,	// (0x00054316) area_bottom_pane_ParamLimits

0x37bc,	// (0x00054316) area_bottom_pane

0x3815,	// (0x0005436f) area_top_pane_ParamLimits

0x3815,	// (0x0005436f) area_top_pane

0x3879,	// (0x000543d3) call_video_uplink_pane_ParamLimits

0x3879,	// (0x000543d3) call_video_uplink_pane

0x38b6,	// (0x00054410) main_pane_ParamLimits

0x38b6,	// (0x00054410) main_pane

0xf038,	// (0x0005fb92) context_pane

0x6b09,	// (0x00057663) navi_pane

0x6b29,	// (0x00057683) popup_cale_events_window_ParamLimits

0x6b29,	// (0x00057683) popup_cale_events_window

0xf04b,	// (0x0005fba5) popup_mup_playback_window

0x6b41,	// (0x0005769b) signal_pane

0xc484,	// (0x0005cfde) main_browser_pane

0xdbdf,	// (0x0005e739) main_burst_pane

0x6992,	// (0x000574ec) main_calc_pane

0xdbdf,	// (0x0005e739) main_cale_day_pane

0xc484,	// (0x0005cfde) main_cale_month_pane

0xdbdf,	// (0x0005e739) main_cale_week_pane

0xdbdf,	// (0x0005e739) main_call_pane

0xc112,	// (0x0005cc6c) main_call_poc_pane

0xdbdf,	// (0x0005e739) main_camera_pane

0xdbdf,	// (0x0005e739) main_chi_dic_pane

0xda6e,	// (0x0005e5c8) main_clock_pane

0xc112,	// (0x0005cc6c) main_fmradio_pane

0xdbdf,	// (0x0005e739) main_graph_messa_pane

0xc112,	// (0x0005cc6c) main_help_pane

0xc484,	// (0x0005cfde) main_im_pane

0xc36d,	// (0x0005cec7) main_image_pane_ParamLimits

0xc36d,	// (0x0005cec7) main_image_pane

0xc112,	// (0x0005cc6c) main_location2_pane

0xdbdf,	// (0x0005e739) main_location_pane

0xc112,	// (0x0005cc6c) main_messa_pane

0xc112,	// (0x0005cc6c) main_mp2_pane

0xdbdf,	// (0x0005e739) main_mp_pane

0xc112,	// (0x0005cc6c) main_msg_pane

0xc112,	// (0x0005cc6c) main_mup_eq_pane

0xc112,	// (0x0005cc6c) main_mup_pane

0xc484,	// (0x0005cfde) main_notes_pane

0xc112,	// (0x0005cc6c) main_pec_pane

0xc112,	// (0x0005cc6c) main_phob_pane

0xc112,	// (0x0005cc6c) main_pinb_pane

0xc112,	// (0x0005cc6c) main_postcard_pane

0xc112,	// (0x0005cc6c) main_qdial_pane

0xdbdf,	// (0x0005e739) main_skin_pane

0xc112,	// (0x0005cc6c) main_smil2_pane

0xdbdf,	// (0x0005e739) main_smil_pane

0xdbdf,	// (0x0005e739) main_video_pane

0xdbdf,	// (0x0005e739) main_video_tele_pane

0xc36d,	// (0x0005cec7) main_viewer_pane_ParamLimits

0xc36d,	// (0x0005cec7) main_viewer_pane

0xdbdf,	// (0x0005e739) main_vorec_pane

0x69de,	// (0x00057538) popup_blid_sat_info_window_ParamLimits

0x69de,	// (0x00057538) popup_blid_sat_info_window

0x69fe,	// (0x00057558) popup_dyc_status_message_window_ParamLimits

0x69fe,	// (0x00057558) popup_dyc_status_message_window

0x6a0c,	// (0x00057566) popup_grid_large_graphic_window_ParamLimits

0x6a0c,	// (0x00057566) popup_grid_large_graphic_window

0x6a9b,	// (0x000575f5) popup_loc_request_window_ParamLimits

0x6a9b,	// (0x000575f5) popup_loc_request_window

0x6ae1,	// (0x0005763b) popup_wml_address_window_ParamLimits

0x6ae1,	// (0x0005763b) popup_wml_address_window

0x686a,	// (0x000573c4) call_muted_g1

0x6529,	// (0x00057083) popup_call_audio_conf_window_ParamLimits

0x6529,	// (0x00057083) popup_call_audio_conf_window

0x687a,	// (0x000573d4) popup_call_audio_first_window_ParamLimits

0x687a,	// (0x000573d4) popup_call_audio_first_window

0x68ba,	// (0x00057414) popup_call_audio_in_window_ParamLimits

0x68ba,	// (0x00057414) popup_call_audio_in_window

0x68de,	// (0x00057438) popup_call_audio_out_window_ParamLimits

0x68de,	// (0x00057438) popup_call_audio_out_window

0x6900,	// (0x0005745a) popup_call_audio_second_window_ParamLimits

0x6900,	// (0x0005745a) popup_call_audio_second_window

0x6930,	// (0x0005748a) popup_call_audio_wait_window_ParamLimits

0x6930,	// (0x0005748a) popup_call_audio_wait_window

0x6951,	// (0x000574ab) popup_number_entry_window_ParamLimits

0x6951,	// (0x000574ab) popup_number_entry_window

0xbd01,	// (0x0005c85b) bg_popup_call_pane_cp05_ParamLimits

0xbd01,	// (0x0005c85b) bg_popup_call_pane_cp05

0xbd21,	// (0x0005c87b) popup_number_entry_window_t1

0xbd34,	// (0x0005c88e) popup_number_entry_window_t2

0xbd46,	// (0x0005c8a0) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0005fc32) popup_number_entry_window_t

0xbd58,	// (0x0005c8b2) text_title_cp2

0xbd6b,	// (0x0005c8c5) bg_popup_call_pane_cp_ParamLimits

0xbd6b,	// (0x0005c8c5) bg_popup_call_pane_cp

0xbd79,	// (0x0005c8d3) call_thumbnail_pane

0xbd81,	// (0x0005c8db) popup_call_audio_in_window_g1_ParamLimits

0xbd81,	// (0x0005c8db) popup_call_audio_in_window_g1

0xbd8d,	// (0x0005c8e7) popup_call_audio_in_window_g2_ParamLimits

0xbd8d,	// (0x0005c8e7) popup_call_audio_in_window_g2

0xbd99,	// (0x0005c8f3) popup_call_audio_in_window_g3_ParamLimits

0xbd99,	// (0x0005c8f3) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0005fc3b) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0005fc3b) popup_call_audio_in_window_g

0xbda5,	// (0x0005c8ff) popup_call_audio_in_window_t1_ParamLimits

0xbda5,	// (0x0005c8ff) popup_call_audio_in_window_t1

0xbdc0,	// (0x0005c91a) popup_call_audio_in_window_t2_ParamLimits

0xbdc0,	// (0x0005c91a) popup_call_audio_in_window_t2

0xbddb,	// (0x0005c935) popup_call_audio_in_window_t3_ParamLimits

0xbddb,	// (0x0005c935) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0005fc42) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0005fc42) popup_call_audio_in_window_t

0xbd6b,	// (0x0005c8c5) bg_popup_call_pane_cp01_ParamLimits

0xbd6b,	// (0x0005c8c5) bg_popup_call_pane_cp01

0xbd79,	// (0x0005c8d3) call_thumbnail_pane_cp02

0xbdee,	// (0x0005c948) call_type_pane_cp022

0xbdf6,	// (0x0005c950) popup_call_audio_out_window_g1_ParamLimits

0xbdf6,	// (0x0005c950) popup_call_audio_out_window_g1

0xbe08,	// (0x0005c962) popup_call_audio_out_window_g2_ParamLimits

0xbe08,	// (0x0005c962) popup_call_audio_out_window_g2

0xbe14,	// (0x0005c96e) popup_call_audio_out_window_g3_ParamLimits

0xbe14,	// (0x0005c96e) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0005fc49) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0005fc49) popup_call_audio_out_window_g

0xbe26,	// (0x0005c980) popup_call_audio_out_window_t1_ParamLimits

0xbe26,	// (0x0005c980) popup_call_audio_out_window_t1

0xbe3e,	// (0x0005c998) popup_call_audio_out_window_t2_ParamLimits

0xbe3e,	// (0x0005c998) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0005fc50) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0005fc50) popup_call_audio_out_window_t

0xbe53,	// (0x0005c9ad) bg_popup_call_pane_ParamLimits

0xbe53,	// (0x0005c9ad) bg_popup_call_pane

0x3acb,	// (0x00054625) call_thumbnail_pane_cp_ParamLimits

0x3acb,	// (0x00054625) call_thumbnail_pane_cp

0xbed7,	// (0x0005ca31) call_type_pane_cp01_ParamLimits

0xbed7,	// (0x0005ca31) call_type_pane_cp01

0xbf1b,	// (0x0005ca75) popup_call_audio_first_window_g1_ParamLimits

0xbf1b,	// (0x0005ca75) popup_call_audio_first_window_g1

0xbf67,	// (0x0005cac1) popup_call_audio_first_window_g2_ParamLimits

0xbf67,	// (0x0005cac1) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0005fc55) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0005fc55) popup_call_audio_first_window_g

0xbfab,	// (0x0005cb05) popup_call_audio_first_window_t1_ParamLimits

0xbfab,	// (0x0005cb05) popup_call_audio_first_window_t1

0xc057,	// (0x0005cbb1) popup_call_audio_first_window_t4_ParamLimits

0xc057,	// (0x0005cbb1) popup_call_audio_first_window_t4

0xc0e3,	// (0x0005cc3d) popup_call_audio_first_window_t5_ParamLimits

0xc0e3,	// (0x0005cc3d) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0005fc5a) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0005fc5a) popup_call_audio_first_window_t

0xc112,	// (0x0005cc6c) bg_popup_call_pane_cp02

0xc11c,	// (0x0005cc76) call_type_pane_cp023

0xc124,	// (0x0005cc7e) popup_call_audio_wait_window_g1

0xc12c,	// (0x0005cc86) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0005fc61) popup_call_audio_wait_window_g

0xc134,	// (0x0005cc8e) popup_call_audio_wait_window_t3

0xc142,	// (0x0005cc9c) bg_popup_call_pane_cp03_ParamLimits

0xc142,	// (0x0005cc9c) bg_popup_call_pane_cp03

0xc1a2,	// (0x0005ccfc) call_thumbnail_pane_cp011_ParamLimits

0xc1a2,	// (0x0005ccfc) call_thumbnail_pane_cp011

0xc1ae,	// (0x0005cd08) call_type_pane_cp034_ParamLimits

0xc1ae,	// (0x0005cd08) call_type_pane_cp034

0xc1ea,	// (0x0005cd44) popup_call_audio_second_window_g1_ParamLimits

0xc1ea,	// (0x0005cd44) popup_call_audio_second_window_g1

0xc226,	// (0x0005cd80) popup_call_audio_second_window_g2_ParamLimits

0xc226,	// (0x0005cd80) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0005fc66) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0005fc66) popup_call_audio_second_window_g

0xc262,	// (0x0005cdbc) popup_call_audio_second_window_t1_ParamLimits

0xc262,	// (0x0005cdbc) popup_call_audio_second_window_t1

0xc2e3,	// (0x0005ce3d) popup_call_audio_second_window_t2_ParamLimits

0xc2e3,	// (0x0005ce3d) popup_call_audio_second_window_t2

0xc319,	// (0x0005ce73) popup_call_audio_second_window_t3_ParamLimits

0xc319,	// (0x0005ce73) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0005fc6b) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0005fc6b) popup_call_audio_second_window_t

0xc112,	// (0x0005cc6c) bg_popup_call_pane_cp04

0xc34f,	// (0x0005cea9) list_conf_pane

0xc357,	// (0x0005ceb1) popup_call_audio_conf_window_t1

0xc365,	// (0x0005cebf) call_thumbnail_pane_g1

0xc36d,	// (0x0005cec7) bg_pinb_pane_ParamLimits

0xc36d,	// (0x0005cec7) bg_pinb_pane

0xc37b,	// (0x0005ced5) find_pinb_pane

0xc384,	// (0x0005cede) listscroll_pinb_pane_ParamLimits

0xc384,	// (0x0005cede) listscroll_pinb_pane

0xc393,	// (0x0005ceed) pinb_bg_pane_g1

0x3aef,	// (0x00054649) pinb_bg_pane_g2

0x3afb,	// (0x00054655) pinb_bg_pane_g3

0x3b07,	// (0x00054661) pinb_bg_pane_g4

0x3b13,	// (0x0005466d) pinb_bg_pane_g5

0x3b1f,	// (0x00054679) pinb_bg_pane_g6

0x3b2a,	// (0x00054684) pinb_bg_pane_g7

0x3b35,	// (0x0005468f) pinb_bg_pane_g8

0x3b40,	// (0x0005469a) pinb_bg_pane_g9

0x3b4a,	// (0x000546a4) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0005fc72) pinb_bg_pane_g

0x3b5f,	// (0x000546b9) grid_pinb_pane

0x3b6a,	// (0x000546c4) list_pinb_pane

0x3b75,	// (0x000546cf) scroll_pane_cp01_ParamLimits

0x3b75,	// (0x000546cf) scroll_pane_cp01

0xc3a5,	// (0x0005ceff) find_pinb_pane_g1_ParamLimits

0xc3a5,	// (0x0005ceff) find_pinb_pane_g1

0xc3bd,	// (0x0005cf17) find_pinb_pane_t1

0xc3cf,	// (0x0005cf29) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0005fc8c) find_pinb_pane_t

0xc3e4,	// (0x0005cf3e) input_focus_pane_cp01_ParamLimits

0xc3e4,	// (0x0005cf3e) input_focus_pane_cp01

0x3b87,	// (0x000546e1) cell_pinb_pane_ParamLimits

0x3b87,	// (0x000546e1) cell_pinb_pane

0x3bbb,	// (0x00054715) cell_pinb_pane_g1_ParamLimits

0x3bbb,	// (0x00054715) cell_pinb_pane_g1

0x3bd0,	// (0x0005472a) cell_pinb_pane_g2_ParamLimits

0x3bd0,	// (0x0005472a) cell_pinb_pane_g2

0xc3f0,	// (0x0005cf4a) cell_pinb_pane_g3_ParamLimits

0xc3f0,	// (0x0005cf4a) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0005fc91) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0005fc91) cell_pinb_pane_g

0xc112,	// (0x0005cc6c) grid_highlight_pane_cp01

0x3bdc,	// (0x00054736) list_pinb_item_pane_ParamLimits

0x3bdc,	// (0x00054736) list_pinb_item_pane

0xc112,	// (0x0005cc6c) list_highlight_pane_cp02

0xc3fc,	// (0x0005cf56) list_pinb_item_pane_g1_ParamLimits

0xc3fc,	// (0x0005cf56) list_pinb_item_pane_g1

0xc409,	// (0x0005cf63) list_pinb_item_pane_g2_ParamLimits

0xc409,	// (0x0005cf63) list_pinb_item_pane_g2

0x3c09,	// (0x00054763) list_pinb_item_pane_g3_ParamLimits

0x3c09,	// (0x00054763) list_pinb_item_pane_g3

0xc415,	// (0x0005cf6f) list_pinb_item_pane_g4_ParamLimits

0xc415,	// (0x0005cf6f) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0005fc98) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0005fc98) list_pinb_item_pane_g

0xc421,	// (0x0005cf7b) list_pinb_item_pane_t1_ParamLimits

0xc421,	// (0x0005cf7b) list_pinb_item_pane_t1

0x3c34,	// (0x0005478e) calc_display_pane

0x3c52,	// (0x000547ac) calc_paper_pane

0x3c6e,	// (0x000547c8) grid_calc_pane

0xc112,	// (0x0005cc6c) bg_list_pane_cp01

0x3c9a,	// (0x000547f4) clock_g1

0x3ca2,	// (0x000547fc) clock_g2

0x0001,

0xf147,	// (0x0005fca1) clock_g

0x3cac,	// (0x00054806) clock_t1_ParamLimits

0x3cac,	// (0x00054806) clock_t1

0x3cc1,	// (0x0005481b) clock_t2_ParamLimits

0x3cc1,	// (0x0005481b) clock_t2

0x3cd3,	// (0x0005482d) clock_t3_ParamLimits

0x3cd3,	// (0x0005482d) clock_t3

0x3ce5,	// (0x0005483f) clock_t4_ParamLimits

0x3ce5,	// (0x0005483f) clock_t4

0x3cf7,	// (0x00054851) clock_t5_ParamLimits

0x3cf7,	// (0x00054851) clock_t5

0x3d0c,	// (0x00054866) clock_t6_ParamLimits

0x3d0c,	// (0x00054866) clock_t6

0x3d1e,	// (0x00054878) clock_t7_ParamLimits

0x3d1e,	// (0x00054878) clock_t7

0x3d30,	// (0x0005488a) clock_t8_ParamLimits

0x3d30,	// (0x0005488a) clock_t8

0x3d46,	// (0x000548a0) clock_t9_ParamLimits

0x3d46,	// (0x000548a0) clock_t9

0x0008,

0xf14c,	// (0x0005fca6) clock_t_ParamLimits

0xf14c,	// (0x0005fca6) clock_t

0xc438,	// (0x0005cf92) popup_clock_analogue_window_cp02

0xc438,	// (0x0005cf92) popup_clock_digital_window_cp01

0xc440,	// (0x0005cf9a) listscroll_help_pane

0xc112,	// (0x0005cc6c) phob_pre_status_pane

0xc44a,	// (0x0005cfa4) grid_qdial_pane

0xc112,	// (0x0005cc6c) listscroll_mce_pane

0xc454,	// (0x0005cfae) bg_notes_pane

0xc462,	// (0x0005cfbc) list_notes_pane

0x3d5c,	// (0x000548b6) scroll_pane_cp06

0xc470,	// (0x0005cfca) bg_calc_paper_pane

0x3d6b,	// (0x000548c5) list_calc_pane

0xc484,	// (0x0005cfde) bg_calc_display_pane

0x3d85,	// (0x000548df) calc_display_pane_t1

0x3d9a,	// (0x000548f4) calc_display_pane_t2

0x3daf,	// (0x00054909) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0005fcb9) calc_display_pane_t

0x3dc1,	// (0x0005491b) cell_calc_pane_ParamLimits

0x3dc1,	// (0x0005491b) cell_calc_pane

0xc490,	// (0x0005cfea) bg_calc_paper_pane_g1

0xc49c,	// (0x0005cff6) bg_calc_paper_pane_g2

0xc4a8,	// (0x0005d002) bg_calc_paper_pane_g3

0xc4b4,	// (0x0005d00e) bg_calc_paper_pane_g4

0xc4c0,	// (0x0005d01a) bg_calc_paper_pane_g5

0x3dee,	// (0x00054948) bg_calc_paper_pane_g6

0x3dff,	// (0x00054959) bg_calc_paper_pane_g7

0x3e10,	// (0x0005496a) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0005fcc0) bg_calc_paper_pane_g

0x3e21,	// (0x0005497b) calc_bg_paper_pane_g9

0x3e32,	// (0x0005498c) list_calc_item_pane_ParamLimits

0x3e32,	// (0x0005498c) list_calc_item_pane

0xc4cc,	// (0x0005d026) list_calc_item_pane_g1

0x3e6c,	// (0x000549c6) list_calc_item_pane_t1_ParamLimits

0x3e6c,	// (0x000549c6) list_calc_item_pane_t1

0x3e7e,	// (0x000549d8) list_calc_item_pane_t2_ParamLimits

0x3e7e,	// (0x000549d8) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0005fcd1) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0005fcd1) list_calc_item_pane_t

0xc4d9,	// (0x0005d033) cell_calc_pane_g1

0xc4e3,	// (0x0005d03d) grid_highlight_pane_cp02

0xc505,	// (0x0005d05f) bg_calc_display_pane_g1

0x3eae,	// (0x00054a08) bg_calc_display_pane_g2

0xc50e,	// (0x0005d068) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0005fcdb) bg_calc_display_pane_g

0x3eb8,	// (0x00054a12) cell_qdial_pane_ParamLimits

0x3eb8,	// (0x00054a12) cell_qdial_pane

0x3ecc,	// (0x00054a26) cell_qdial_pane_g1_ParamLimits

0x3ecc,	// (0x00054a26) cell_qdial_pane_g1

0x3ed9,	// (0x00054a33) cell_qdial_pane_g2_ParamLimits

0x3ed9,	// (0x00054a33) cell_qdial_pane_g2

0xc517,	// (0x0005d071) cell_qdial_pane_g3_ParamLimits

0xc517,	// (0x0005d071) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0005fce2) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0005fce2) cell_qdial_pane_g

0x3ef7,	// (0x00054a51) cell_qdial_pane_t1_ParamLimits

0x3ef7,	// (0x00054a51) cell_qdial_pane_t1

0x3f0f,	// (0x00054a69) cell_qdial_pane_t2_ParamLimits

0x3f0f,	// (0x00054a69) cell_qdial_pane_t2

0x3f22,	// (0x00054a7c) cell_qdial_pane_t3_ParamLimits

0x3f22,	// (0x00054a7c) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0005fceb) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0005fceb) cell_qdial_pane_t

0xc112,	// (0x0005cc6c) grid_highlight_pane_cp04

0xc523,	// (0x0005d07d) thumbnail_qdial_pane_ParamLimits

0xc523,	// (0x0005d07d) thumbnail_qdial_pane

0xc57f,	// (0x0005d0d9) list_help_pane

0xc588,	// (0x0005d0e2) scroll_pane_cp02

0x3f35,	// (0x00054a8f) help_list_pane_t1_ParamLimits

0x3f35,	// (0x00054a8f) help_list_pane_t1

0x3f73,	// (0x00054acd) bg_notes_pane_g2

0x3f7b,	// (0x00054ad5) bg_notes_pane_g3

0x3f83,	// (0x00054add) notes_bg_pane_g1

0x3f8b,	// (0x00054ae5) notes_bg_pane_g4

0x3f93,	// (0x00054aed) notes_bg_pane_g5

0x3f9b,	// (0x00054af5) notes_bg_pane_g6

0x3fa3,	// (0x00054afd) notes_bg_pane_g7

0x3fab,	// (0x00054b05) notes_bg_pane_g8

0x3fb3,	// (0x00054b0d) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0005fd09) notes_bg_pane_g

0x3fbb,	// (0x00054b15) list_notes_text_pane_ParamLimits

0x3fbb,	// (0x00054b15) list_notes_text_pane

0xc591,	// (0x0005d0eb) list_notes_text_pane_g1

0x400f,	// (0x00054b69) list_notes_text_pane_t1

0xc484,	// (0x0005cfde) listscroll_cale_week_pane

0x403a,	// (0x00054b94) bg_cale_heading_pane

0xc5ab,	// (0x0005d105) bg_cale_pane_cp01

0x4056,	// (0x00054bb0) cale_week_corner_pane

0x4067,	// (0x00054bc1) cale_week_day_heading_pane

0x4083,	// (0x00054bdd) cale_week_scroll_pane_g1

0x409c,	// (0x00054bf6) cale_week_scroll_pane_g2

0x40ad,	// (0x00054c07) cale_week_scroll_pane_g3

0x40be,	// (0x00054c18) cale_week_scroll_pane_g4

0x40cf,	// (0x00054c29) cale_week_scroll_pane_g5

0x40e0,	// (0x00054c3a) cale_week_scroll_pane_g6

0x40f1,	// (0x00054c4b) cale_week_scroll_pane_g7

0x4104,	// (0x00054c5e) cale_week_scroll_pane_g8

0x4117,	// (0x00054c71) cale_week_scroll_pane_g9

0x4128,	// (0x00054c82) cale_week_scroll_pane_g10

0x4139,	// (0x00054c93) cale_week_scroll_pane_g11

0x414a,	// (0x00054ca4) cale_week_scroll_pane_g12

0x4163,	// (0x00054cbd) cale_week_scroll_pane_g13

0x417c,	// (0x00054cd6) cale_week_scroll_pane_g14

0x4195,	// (0x00054cef) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0005fd18) cale_week_scroll_pane_g

0x41ae,	// (0x00054d08) cale_week_time_pane

0x41c1,	// (0x00054d1b) grid_cale_week_pane

0x41de,	// (0x00054d38) scroll_pane_cp08

0x41f8,	// (0x00054d52) cell_cale_week_pane_ParamLimits

0x41f8,	// (0x00054d52) cell_cale_week_pane

0x4248,	// (0x00054da2) cale_week_day_heading_pane_t1

0x425c,	// (0x00054db6) cale_week_day_heading_pane_t2

0x4270,	// (0x00054dca) cale_week_day_heading_pane_t3

0x4284,	// (0x00054dde) cale_week_day_heading_pane_t4

0x4298,	// (0x00054df2) cale_week_day_heading_pane_t5

0x42ac,	// (0x00054e06) cale_week_day_heading_pane_t6

0x42c0,	// (0x00054e1a) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0005fd37) cale_week_day_heading_pane_t

0xc5d6,	// (0x0005d130) bg_cale_side_pane

0x42d4,	// (0x00054e2e) cale_week_time_pane_t1

0x42ec,	// (0x00054e46) cale_week_time_pane_t2

0x4304,	// (0x00054e5e) cale_week_time_pane_t3

0x431c,	// (0x00054e76) cale_week_time_pane_t4

0x4334,	// (0x00054e8e) cale_week_time_pane_t5

0x434c,	// (0x00054ea6) cale_week_time_pane_t6

0x436c,	// (0x00054ec6) cale_week_time_pane_t7

0x438c,	// (0x00054ee6) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0005fd46) cale_week_time_pane_t

0x43ac,	// (0x00054f06) cell_cale_week_pane_g2

0x43bd,	// (0x00054f17) cell_cale_week_pane_g3_ParamLimits

0x43bd,	// (0x00054f17) cell_cale_week_pane_g3

0xc5e4,	// (0x0005d13e) grid_highlight_pane_cp07

0xc5ec,	// (0x0005d146) listscroll_gms_pane

0xc5f6,	// (0x0005d150) grid_gms_pane

0xc5ff,	// (0x0005d159) listscroll_gms_pane_g1

0xc607,	// (0x0005d161) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0005fd57) listscroll_gms_pane_g

0x43d5,	// (0x00054f2f) scroll_pane_cp010

0x43e0,	// (0x00054f3a) cell_gms_pane_ParamLimits

0x43e0,	// (0x00054f3a) cell_gms_pane

0x43f2,	// (0x00054f4c) cell_gms_pane_g1

0xc60f,	// (0x0005d169) cell_gms_pane_g2

0xc591,	// (0x0005d0eb) cell_gms_pane_g3

0xc617,	// (0x0005d171) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0005fd5c) cell_gms_pane_g

0xc620,	// (0x0005d17a) grid_highlight_pane_cp09

0x6812,	// (0x0005736c) phob_pre_status_pane_g1

0x681a,	// (0x00057374) phob_pre_status_pane_g2

0x6822,	// (0x0005737c) phob_pre_status_pane_g3

0x682a,	// (0x00057384) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0006014b) phob_pre_status_pane_g

0x683a,	// (0x00057394) phob_pre_status_pane_t1

0x684a,	// (0x000573a4) phob_pre_status_pane_t2

0x685a,	// (0x000573b4) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00060156) phob_pre_status_pane_t

0xc112,	// (0x0005cc6c) bg_list_pane_cp05

0x4402,	// (0x00054f5c) grid_vorec_pane

0x440c,	// (0x00054f66) vorec_t1

0x441a,	// (0x00054f74) vorec_t2

0x4428,	// (0x00054f82) vorec_t3

0x4436,	// (0x00054f90) vorec_t4

0x4444,	// (0x00054f9e) vorec_t5

0x4452,	// (0x00054fac) vorec_t6

0x0006,

0xf20b,	// (0x0005fd65) vorec_t

0x446e,	// (0x00054fc8) wait_bar_pane_cp01

0xc628,	// (0x0005d182) cell_vorec_pane_ParamLimits

0xc628,	// (0x0005d182) cell_vorec_pane

0xc63b,	// (0x0005d195) cell_vorec_pane_g1

0xc112,	// (0x0005cc6c) grid_highlight_pane_cp05

0x4486,	// (0x00054fe0) cams_zoom_pane

0x4492,	// (0x00054fec) image_vga_pane

0x44a1,	// (0x00054ffb) main_camera_pane_g1

0x44af,	// (0x00055009) main_camera_pane_g2

0x44bd,	// (0x00055017) main_camera_pane_g3

0x44c9,	// (0x00055023) main_camera_pane_g4

0x44d5,	// (0x0005502f) main_camera_pane_g5

0x44e1,	// (0x0005503b) main_camera_pane_g6

0x44ed,	// (0x00055047) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0005fd74) main_camera_pane_g

0x44f9,	// (0x00055053) main_camera_pane_t1

0x450b,	// (0x00055065) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0005fd85) main_camera_pane_t

0x452c,	// (0x00055086) cams_zoom_pane_cp_ParamLimits

0x452c,	// (0x00055086) cams_zoom_pane_cp

0x4550,	// (0x000550aa) image_cif_pane_ParamLimits

0x4550,	// (0x000550aa) image_cif_pane

0x456e,	// (0x000550c8) image_subqcif_pane

0x4576,	// (0x000550d0) main_video_pane_g1_ParamLimits

0x4576,	// (0x000550d0) main_video_pane_g1

0x4596,	// (0x000550f0) main_video_pane_g2_ParamLimits

0x4596,	// (0x000550f0) main_video_pane_g2

0x45c8,	// (0x00055122) main_video_pane_g3_ParamLimits

0x45c8,	// (0x00055122) main_video_pane_g3

0x45f3,	// (0x0005514d) main_video_pane_g4_ParamLimits

0x45f3,	// (0x0005514d) main_video_pane_g4

0x461e,	// (0x00055178) main_video_pane_g5_ParamLimits

0x461e,	// (0x00055178) main_video_pane_g5

0xc651,	// (0x0005d1ab) main_video_pane_g6_ParamLimits

0xc651,	// (0x0005d1ab) main_video_pane_g6

0x0006,

0xf230,	// (0x0005fd8a) main_video_pane_g_ParamLimits

0xf230,	// (0x0005fd8a) main_video_pane_g

0x4642,	// (0x0005519c) main_video_pane_t1_ParamLimits

0x4642,	// (0x0005519c) main_video_pane_t1

0xc66b,	// (0x0005d1c5) cams_zoom_pane_g1

0xc674,	// (0x0005d1ce) cams_zoom_pane_g2

0xc67d,	// (0x0005d1d7) cams_zoom_pane_g3

0xc686,	// (0x0005d1e0) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0005fd99) cams_zoom_pane_g

0x468c,	// (0x000551e6) grid_cams_pane

0x469a,	// (0x000551f4) linegrid_cams_pane

0x46a8,	// (0x00055202) cell_cams_pane_ParamLimits

0x46a8,	// (0x00055202) cell_cams_pane

0xc68f,	// (0x0005d1e9) cams_burst_image_pane

0xc697,	// (0x0005d1f1) cell_cams_pane_g1

0xc112,	// (0x0005cc6c) grid_highlight_pane_cp03

0xc4d9,	// (0x0005d033) mp_bg_pane_g1

0xc112,	// (0x0005cc6c) bg_list_pane_cp03

0xef4f,	// (0x0005faa9) bg_mp_pane

0xef57,	// (0x0005fab1) grid_mp_pane

0xef5f,	// (0x0005fab9) media_player_g1

0xef67,	// (0x0005fac1) media_player_t1

0xef75,	// (0x0005facf) media_player_t2

0xef83,	// (0x0005fadd) media_player_t3

0xef91,	// (0x0005faeb) media_player_t4

0xef9f,	// (0x0005faf9) media_player_t5

0xefad,	// (0x0005fb07) media_player_t6

0xefbb,	// (0x0005fb15) media_player_t7

0x0006,

0xf5db,	// (0x00060135) media_player_t

0xefc9,	// (0x0005fb23) wait_bar_pane_cp02

0xf5c0,	// (0x0006011a) main_usb_pane_t

0x6809,	// (0x00057363) cell_mp_pane

0xc4d9,	// (0x0005d033) cell_mp_pane_g1

0xc112,	// (0x0005cc6c) grid_highlight_pane_cp06

0xd2d3,	// (0x0005de2d) grid_skin_colour_pane

0xd2db,	// (0x0005de35) list_highlight_pane_cp03

0x470d,	// (0x00055267) skin_g1

0xd2e3,	// (0x0005de3d) skin_t1

0xd2f2,	// (0x0005de4c) skin_t2

0x0001,

0xf274,	// (0x0005fdce) skin_t

0x4717,	// (0x00055271) cell_skin_colour_pane_ParamLimits

0x4717,	// (0x00055271) cell_skin_colour_pane

0xd300,	// (0x0005de5a) cell_skin_colour_pane_g1

0x479b,	// (0x000552f5) call_video_g1_ParamLimits

0x479b,	// (0x000552f5) call_video_g1

0x47ab,	// (0x00055305) call_video_g2_ParamLimits

0x47ab,	// (0x00055305) call_video_g2

0x0001,

0xf279,	// (0x0005fdd3) call_video_g_ParamLimits

0xf279,	// (0x0005fdd3) call_video_g

0x4805,	// (0x0005535f) call_video_uplink_pane_cp1_ParamLimits

0x4805,	// (0x0005535f) call_video_uplink_pane_cp1

0xd312,	// (0x0005de6c) call_video_uplink_pane_cp2

0x48d1,	// (0x0005542b) video_down_crop_pane_ParamLimits

0x48d1,	// (0x0005542b) video_down_crop_pane

0x49c3,	// (0x0005551d) video_down_pane_ParamLimits

0x49c3,	// (0x0005551d) video_down_pane

0xd31a,	// (0x0005de74) video_down_subqcif_pane_ParamLimits

0xd31a,	// (0x0005de74) video_down_subqcif_pane

0xd332,	// (0x0005de8c) video_down_subqcif_pane_cp_ParamLimits

0xd332,	// (0x0005de8c) video_down_subqcif_pane_cp

0xd358,	// (0x0005deb2) im_reading_pane_ParamLimits

0xd358,	// (0x0005deb2) im_reading_pane

0x4ae5,	// (0x0005563f) im_writing_pane_ParamLimits

0x4ae5,	// (0x0005563f) im_writing_pane

0x4b03,	// (0x0005565d) im_reading_pane_t1

0xd372,	// (0x0005decc) list_im_pane

0xd383,	// (0x0005dedd) scroll_pane_cp07

0x4b63,	// (0x000556bd) im_writing_pane_t1_ParamLimits

0x4b63,	// (0x000556bd) im_writing_pane_t1

0xd39c,	// (0x0005def6) im_writing_pane_t2_ParamLimits

0xd39c,	// (0x0005def6) im_writing_pane_t2

0x0001,

0xf283,	// (0x0005fddd) im_writing_pane_t_ParamLimits

0xf283,	// (0x0005fddd) im_writing_pane_t

0xc112,	// (0x0005cc6c) input_focus_pane_cp04

0xc112,	// (0x0005cc6c) input_focus_pane_cp05

0x4b75,	// (0x000556cf) list_im_single_pane_ParamLimits

0x4b75,	// (0x000556cf) list_im_single_pane

0x4ba1,	// (0x000556fb) list_single_im_pane_t1

0x67cd,	// (0x00057327) blid_accuracy_pane

0x67d5,	// (0x0005732f) blid_compass_pane

0x67df,	// (0x00057339) main_location_t1

0x67ed,	// (0x00057347) main_location_t2

0x67fb,	// (0x00057355) main_location_t3

0x0002,

0xf5ea,	// (0x00060144) main_location_t

0xc112,	// (0x0005cc6c) aid_levels_location

0xc4d9,	// (0x0005d033) blid_accuracy_pane_g1

0xc4d9,	// (0x0005d033) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0005fe3f) blid_accuracy_pane_g

0xd3e4,	// (0x0005df3e) wml_content_pane

0xd422,	// (0x0005df7c) wml_button_pane_ParamLimits

0xd422,	// (0x0005df7c) wml_button_pane

0x4bb0,	// (0x0005570a) wml_list_single_large_pane_ParamLimits

0x4bb0,	// (0x0005570a) wml_list_single_large_pane

0x4be2,	// (0x0005573c) wml_list_single_medium_pane_ParamLimits

0x4be2,	// (0x0005573c) wml_list_single_medium_pane

0x4c1b,	// (0x00055775) wml_list_single_small_pane_ParamLimits

0x4c1b,	// (0x00055775) wml_list_single_small_pane

0xd436,	// (0x0005df90) wml_selection_box_pane_ParamLimits

0xd436,	// (0x0005df90) wml_selection_box_pane

0xd449,	// (0x0005dfa3) wml_list_single_pane_t1

0xd458,	// (0x0005dfb2) wml_list_single_medium_pane_t1

0xd467,	// (0x0005dfc1) wml_list_single_large_pane_t1

0xd476,	// (0x0005dfd0) input_focus_pane_cp02_ParamLimits

0xd476,	// (0x0005dfd0) input_focus_pane_cp02

0xd489,	// (0x0005dfe3) wml_selection_box_pane_g1

0xd492,	// (0x0005dfec) wml_selection_box_pane_t1_ParamLimits

0xd492,	// (0x0005dfec) wml_selection_box_pane_t1

0xc36d,	// (0x0005cec7) bg_wml_button_pane_ParamLimits

0xc36d,	// (0x0005cec7) bg_wml_button_pane

0xd4aa,	// (0x0005e004) wml_button_pane_g1

0xd4b2,	// (0x0005e00c) wml_button_pane_t1

0xd4aa,	// (0x0005e004) wml_button_bg_pane_g1

0xd4c2,	// (0x0005e01c) wml_button_bg_pane_g2

0xd4ca,	// (0x0005e024) wml_button_bg_pane_g3

0xd4d2,	// (0x0005e02c) wml_button_bg_pane_g4

0xd4da,	// (0x0005e034) wml_button_bg_pane_g5

0xd4e2,	// (0x0005e03c) wml_button_bg_pane_g6

0xd4ea,	// (0x0005e044) wml_button_bg_pane_g7

0xd4f2,	// (0x0005e04c) wml_button_bg_pane_g8

0xd4fa,	// (0x0005e054) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0005fde2) wml_button_bg_pane_g

0x4c63,	// (0x000557bd) bg_list_pane_cp02

0xd502,	// (0x0005e05c) mce_header_pane_ParamLimits

0xd502,	// (0x0005e05c) mce_header_pane

0xd518,	// (0x0005e072) mce_icon_pane

0xd518,	// (0x0005e072) mce_image_pane

0xd521,	// (0x0005e07b) mce_text_pane_ParamLimits

0xd521,	// (0x0005e07b) mce_text_pane

0x4c6d,	// (0x000557c7) scroll_pane_cp03

0xd41a,	// (0x0005df74) scroll_pane_cp04

0xd534,	// (0x0005e08e) scroll_pane_cp05_ParamLimits

0xd534,	// (0x0005e08e) scroll_pane_cp05

0x4c77,	// (0x000557d1) mce_header_field_pane_ParamLimits

0x4c77,	// (0x000557d1) mce_header_field_pane

0x4c97,	// (0x000557f1) mce_header_field_pane_2_ParamLimits

0x4c97,	// (0x000557f1) mce_header_field_pane_2

0x4cad,	// (0x00055807) mce_header_field_pane_3

0x4cb5,	// (0x0005580f) list_single_mce_message_pane_ParamLimits

0x4cb5,	// (0x0005580f) list_single_mce_message_pane

0x4ce5,	// (0x0005583f) list_single_mce_smart_pane_ParamLimits

0x4ce5,	// (0x0005583f) list_single_mce_smart_pane

0xd540,	// (0x0005e09a) input_focus_pane_cp03

0xd549,	// (0x0005e0a3) list_header_data_pane

0x4d20,	// (0x0005587a) mce_header_field_pane_t1

0x4d30,	// (0x0005588a) list_single_mce_header_pane_ParamLimits

0x4d30,	// (0x0005588a) list_single_mce_header_pane

0xd551,	// (0x0005e0ab) list_single_mce_header_pane_t1

0xd560,	// (0x0005e0ba) list_single_mce_message_pane_g1

0xd568,	// (0x0005e0c2) list_single_mce_message_pane_t1

0x4d82,	// (0x000558dc) bg_cale_heading_pane_cp01_ParamLimits

0x4d82,	// (0x000558dc) bg_cale_heading_pane_cp01

0xd576,	// (0x0005e0d0) bg_cale_pane_cp02_ParamLimits

0xd576,	// (0x0005e0d0) bg_cale_pane_cp02

0x4db5,	// (0x0005590f) cale_month_corner_pane

0x4dcb,	// (0x00055925) cale_month_day_heading_pane_ParamLimits

0x4dcb,	// (0x00055925) cale_month_day_heading_pane

0x4e0e,	// (0x00055968) cale_month_pane_g1_ParamLimits

0x4e0e,	// (0x00055968) cale_month_pane_g1

0x4e3a,	// (0x00055994) cale_month_pane_g2_ParamLimits

0x4e3a,	// (0x00055994) cale_month_pane_g2

0x4e5d,	// (0x000559b7) cale_month_pane_g3_ParamLimits

0x4e5d,	// (0x000559b7) cale_month_pane_g3

0x4e99,	// (0x000559f3) cale_month_pane_g4_ParamLimits

0x4e99,	// (0x000559f3) cale_month_pane_g4

0x4ed5,	// (0x00055a2f) cale_month_pane_g5_ParamLimits

0x4ed5,	// (0x00055a2f) cale_month_pane_g5

0x4f11,	// (0x00055a6b) cale_month_pane_g6_ParamLimits

0x4f11,	// (0x00055a6b) cale_month_pane_g6

0x4f4d,	// (0x00055aa7) cale_month_pane_g7_ParamLimits

0x4f4d,	// (0x00055aa7) cale_month_pane_g7

0x4f99,	// (0x00055af3) cale_month_pane_g8_ParamLimits

0x4f99,	// (0x00055af3) cale_month_pane_g8

0x4fe5,	// (0x00055b3f) cale_month_pane_g9_ParamLimits

0x4fe5,	// (0x00055b3f) cale_month_pane_g9

0x502b,	// (0x00055b85) cale_month_pane_g10_ParamLimits

0x502b,	// (0x00055b85) cale_month_pane_g10

0x5071,	// (0x00055bcb) cale_month_pane_g11_ParamLimits

0x5071,	// (0x00055bcb) cale_month_pane_g11

0x50af,	// (0x00055c09) cale_month_pane_g12_ParamLimits

0x50af,	// (0x00055c09) cale_month_pane_g12

0x50ed,	// (0x00055c47) cale_month_pane_g13_ParamLimits

0x50ed,	// (0x00055c47) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0005fdf5) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0005fdf5) cale_month_pane_g

0x512b,	// (0x00055c85) cale_month_week_pane

0x513e,	// (0x00055c98) grid_cale_month_pane_ParamLimits

0x513e,	// (0x00055c98) grid_cale_month_pane

0x517c,	// (0x00055cd6) cale_month_day_heading_pane_t1

0x51da,	// (0x00055d34) cale_month_day_heading_pane_t2

0x523f,	// (0x00055d99) cale_month_day_heading_pane_t3

0x52a4,	// (0x00055dfe) cale_month_day_heading_pane_t4

0x5309,	// (0x00055e63) cale_month_day_heading_pane_t5

0x536e,	// (0x00055ec8) cale_month_day_heading_pane_t6

0x53db,	// (0x00055f35) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0005fe10) cale_month_day_heading_pane_t

0xc5d6,	// (0x0005d130) bg_cale_side_pane_cp01

0x5450,	// (0x00055faa) cale_month_week_pane_t1

0x5467,	// (0x00055fc1) cale_month_week_pane_t2

0x547e,	// (0x00055fd8) cale_month_week_pane_t3

0x5495,	// (0x00055fef) cale_month_week_pane_t4

0x54ac,	// (0x00056006) cale_month_week_pane_t5

0x54cb,	// (0x00056025) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0005fe1f) cale_month_week_pane_t

0x54ea,	// (0x00056044) cell_cale_month_pane_ParamLimits

0x54ea,	// (0x00056044) cell_cale_month_pane

0x55b8,	// (0x00056112) cell_cale_month_pane_g1

0x55c4,	// (0x0005611e) cell_cale_month_pane_t1_ParamLimits

0x55c4,	// (0x0005611e) cell_cale_month_pane_t1

0xc5e4,	// (0x0005d13e) grid_highlight_pane_cp08

0xc4d9,	// (0x0005d033) main_smil_g1

0x55e0,	// (0x0005613a) smil_status_pane

0xd5d5,	// (0x0005e12f) smil_text_pane

0xee67,	// (0x0005f9c1) bg_popup_call3_rect_pane_g8

0xee6f,	// (0x0005f9c9) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x000600d8) bg_popup_call3_rect_pane_g

0xf0b2,	// (0x0005fc0c) smil_status_volume_pane_g1

0xd5df,	// (0x0005e139) smil_status_pane_t1

0x6c00,	// (0x0005775a) volume_smil_pane

0xd5f6,	// (0x0005e150) list_smil_text_pane

0x55f3,	// (0x0005614d) scroll_pane_cp011

0x55fe,	// (0x00056158) smil_text_list_pane_t1_ParamLimits

0x55fe,	// (0x00056158) smil_text_list_pane_t1

0x56a9,	// (0x00056203) aid_volume_smil_ParamLimits

0x56a9,	// (0x00056203) aid_volume_smil

0xc4d9,	// (0x0005d033) smil_volume_pane_g1

0xc4d9,	// (0x0005d033) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0005fe3f) smil_volume_pane_g

0xc484,	// (0x0005cfde) listscroll_cale_day_pane

0xd600,	// (0x0005e15a) bg_cale_pane

0xd618,	// (0x0005e172) list_cale_pane

0xd629,	// (0x0005e183) scroll_pane_cp09

0xd63a,	// (0x0005e194) cale_bg_pane_g1

0xd642,	// (0x0005e19c) cale_bg_pane_g2

0xd64a,	// (0x0005e1a4) cale_bg_pane_g3

0xd652,	// (0x0005e1ac) cale_bg_pane_g4

0xd65a,	// (0x0005e1b4) cale_bg_pane_g5

0xd662,	// (0x0005e1bc) cale_bg_pane_g6

0xd66a,	// (0x0005e1c4) cale_bg_pane_g7

0xd672,	// (0x0005e1cc) cale_bg_pane_g8

0xd67a,	// (0x0005e1d4) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0005fe44) cale_bg_pane_g

0x56cb,	// (0x00056225) list_cale_time_pane_ParamLimits

0x56cb,	// (0x00056225) list_cale_time_pane

0x56ec,	// (0x00056246) list_cale_time_pane_g1_ParamLimits

0x56ec,	// (0x00056246) list_cale_time_pane_g1

0xd682,	// (0x0005e1dc) list_cale_time_pane_g2_ParamLimits

0xd682,	// (0x0005e1dc) list_cale_time_pane_g2

0x56f8,	// (0x00056252) list_cale_time_pane_g3_ParamLimits

0x56f8,	// (0x00056252) list_cale_time_pane_g3

0x5714,	// (0x0005626e) list_cale_time_pane_g4_ParamLimits

0x5714,	// (0x0005626e) list_cale_time_pane_g4

0x5722,	// (0x0005627c) list_cale_time_pane_g5_ParamLimits

0x5722,	// (0x0005627c) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0005fe57) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0005fe57) list_cale_time_pane_g

0x5730,	// (0x0005628a) list_cale_time_pane_t1_ParamLimits

0x5730,	// (0x0005628a) list_cale_time_pane_t1

0x5758,	// (0x000562b2) list_cale_time_pane_t2_ParamLimits

0x5758,	// (0x000562b2) list_cale_time_pane_t2

0x5ab2,	// (0x0005660c) aid_blid_cardinal_pane

0x5af4,	// (0x0005664e) compass_pane_t4

0x5780,	// (0x000562da) list_cale_time_pane_t4_ParamLimits

0x5780,	// (0x000562da) list_cale_time_pane_t4

0x5b02,	// (0x0005665c) compass_pane_t5

0x5b12,	// (0x0005666c) compass_pane_t6

0x5b20,	// (0x0005667a) compass_pane_t7

0xdb31,	// (0x0005e68b) navi_pane_cc_t1

0xdc94,	// (0x0005e7ee) aid_phob_thumbnail_center_pane

0x62c3,	// (0x00056e1d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0005fe64) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0005fe64) list_cale_time_pane_t

0xbd6b,	// (0x0005c8c5) bg_popup_window_pane_cp02_ParamLimits

0xbd6b,	// (0x0005c8c5) bg_popup_window_pane_cp02

0xd69c,	// (0x0005e1f6) heading_pane_cp01_ParamLimits

0xd69c,	// (0x0005e1f6) heading_pane_cp01

0xd6a8,	// (0x0005e202) loc_req_pane_ParamLimits

0xd6a8,	// (0x0005e202) loc_req_pane

0xd6b8,	// (0x0005e212) loc_type_pane_ParamLimits

0xd6b8,	// (0x0005e212) loc_type_pane

0xd6ca,	// (0x0005e224) loc_type_pane_t1_ParamLimits

0xd6ca,	// (0x0005e224) loc_type_pane_t1

0xd6dc,	// (0x0005e236) loc_type_pane_t2_ParamLimits

0xd6dc,	// (0x0005e236) loc_type_pane_t2

0xd6ee,	// (0x0005e248) loc_type_pane_t3_ParamLimits

0xd6ee,	// (0x0005e248) loc_type_pane_t3

0x0002,

0xf311,	// (0x0005fe6b) loc_type_pane_t_ParamLimits

0xf311,	// (0x0005fe6b) loc_type_pane_t

0xd700,	// (0x0005e25a) list_loc_req_pane

0xd70a,	// (0x0005e264) scroll_pane_cp012

0x57a8,	// (0x00056302) list_single_loc_request_popup_menu_pane_ParamLimits

0x57a8,	// (0x00056302) list_single_loc_request_popup_menu_pane

0xd715,	// (0x0005e26f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd715,	// (0x0005e26f) list_single_loc_request_popup_menu_pane_g1

0xd721,	// (0x0005e27b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd721,	// (0x0005e27b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0005fe72) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0005fe72) list_single_loc_request_popup_menu_pane_g

0xd72d,	// (0x0005e287) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd72d,	// (0x0005e287) list_single_loc_request_popup_menu_pane_t1

0x57ba,	// (0x00056314) bg_popup_window_pane_cp03_ParamLimits

0x57ba,	// (0x00056314) bg_popup_window_pane_cp03

0x57c8,	// (0x00056322) heading_loc_req_pane_ParamLimits

0x57c8,	// (0x00056322) heading_loc_req_pane

0x57d4,	// (0x0005632e) popup_dyc_status_message_window_g1_ParamLimits

0x57d4,	// (0x0005632e) popup_dyc_status_message_window_g1

0x57e0,	// (0x0005633a) popup_dyc_status_message_window_t1_ParamLimits

0x57e0,	// (0x0005633a) popup_dyc_status_message_window_t1

0x57f2,	// (0x0005634c) popup_dyc_status_message_window_t2_ParamLimits

0x57f2,	// (0x0005634c) popup_dyc_status_message_window_t2

0x5804,	// (0x0005635e) popup_dyc_status_message_window_t3_ParamLimits

0x5804,	// (0x0005635e) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0005fe77) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0005fe77) popup_dyc_status_message_window_t

0xc112,	// (0x0005cc6c) bg_heading_pane_cp01

0xd743,	// (0x0005e29d) heading_loc_req_pane_g1

0xd74b,	// (0x0005e2a5) heading_loc_req_pane_g2

0xd753,	// (0x0005e2ad) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0005fe7e) heading_loc_req_pane_g

0xd75b,	// (0x0005e2b5) heading_loc_req_pane_t1

0xd7df,	// (0x0005e339) bg_popup_sub_pane_cp01_ParamLimits

0xd7df,	// (0x0005e339) bg_popup_sub_pane_cp01

0xd7f9,	// (0x0005e353) popup_cale_events_window_g1_ParamLimits

0xd7f9,	// (0x0005e353) popup_cale_events_window_g1

0xd819,	// (0x0005e373) popup_cale_events_window_g2_ParamLimits

0xd819,	// (0x0005e373) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0005feb2) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0005feb2) popup_cale_events_window_g

0xd839,	// (0x0005e393) popup_cale_events_window_t1_ParamLimits

0xd839,	// (0x0005e393) popup_cale_events_window_t1

0xd84b,	// (0x0005e3a5) popup_cale_events_window_t2_ParamLimits

0xd84b,	// (0x0005e3a5) popup_cale_events_window_t2

0xd889,	// (0x0005e3e3) popup_cale_events_window_t3_ParamLimits

0xd889,	// (0x0005e3e3) popup_cale_events_window_t3

0xd8c3,	// (0x0005e41d) popup_cale_events_window_t4_ParamLimits

0xd8c3,	// (0x0005e41d) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0005feb7) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0005feb7) popup_cale_events_window_t

0x5888,	// (0x000563e2) call_type_pane

0xdc02,	// (0x0005e75c) popup_call_status_window_g1

0x5894,	// (0x000563ee) popup_call_status_window_g2

0x58a0,	// (0x000563fa) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0005fec0) popup_call_status_window_g

0xd8f9,	// (0x0005e453) call_type_pane_g1

0xd902,	// (0x0005e45c) call_type_pane_g2

0x0001,

0xf36d,	// (0x0005fec7) call_type_pane_g

0xc112,	// (0x0005cc6c) bg_popup_sub_pane_cp02

0xd90b,	// (0x0005e465) listscroll_popup_wml_pane

0xd913,	// (0x0005e46d) list_wml_pane

0xd91d,	// (0x0005e477) scroll_pane_cp013

0xd928,	// (0x0005e482) list_single_graphic_popup_wml_pane_ParamLimits

0xd928,	// (0x0005e482) list_single_graphic_popup_wml_pane

0xc4d9,	// (0x0005d033) list_single_graphic_popup_wml_pane_g1

0xd93c,	// (0x0005e496) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0005fecc) list_single_graphic_popup_wml_pane_g

0xd944,	// (0x0005e49e) list_single_graphic_popup_wml_pane_t1

0xd95a,	// (0x0005e4b4) aid_call_pane

0xc365,	// (0x0005cebf) popup_clock_analogue_window_g1

0xc365,	// (0x0005cebf) popup_clock_analogue_window_g2

0x58ac,	// (0x00056406) popup_clock_analogue_window_g3

0x58ac,	// (0x00056406) popup_clock_analogue_window_g4

0xc4d9,	// (0x0005d033) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0005fed1) popup_clock_analogue_window_g

0x58b4,	// (0x0005640e) popup_clock_analogue_window_t1

0x58c2,	// (0x0005641c) clock_digital_number_pane_ParamLimits

0x58c2,	// (0x0005641c) clock_digital_number_pane

0x58ce,	// (0x00056428) clock_digital_number_pane_cp02_ParamLimits

0x58ce,	// (0x00056428) clock_digital_number_pane_cp02

0x58da,	// (0x00056434) clock_digital_number_pane_cp03_ParamLimits

0x58da,	// (0x00056434) clock_digital_number_pane_cp03

0x58e6,	// (0x00056440) clock_digital_number_pane_cp04_ParamLimits

0x58e6,	// (0x00056440) clock_digital_number_pane_cp04

0x58f2,	// (0x0005644c) clock_digital_separator_pane_ParamLimits

0x58f2,	// (0x0005644c) clock_digital_separator_pane

0x58fe,	// (0x00056458) popup_clock_digital_window_t1

0xc4d9,	// (0x0005d033) clock_digital_number_pane_g1

0xc4d9,	// (0x0005d033) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0005fe3f) clock_digital_number_pane_g

0xc4d9,	// (0x0005d033) clock_digital_separator_pane_g1

0xc4d9,	// (0x0005d033) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0005fe3f) clock_digital_separator_pane_g

0xc112,	// (0x0005cc6c) bg_popup_window_pane_cp04

0xd962,	// (0x0005e4bc) heading_pane_cp03

0xd96a,	// (0x0005e4c4) listscroll_popup_gms_pane

0xd972,	// (0x0005e4cc) grid_large_graphic_popup_pane

0xd97c,	// (0x0005e4d6) listscroll_popup_gms_pane_g1

0xd984,	// (0x0005e4de) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0005fedc) listscroll_popup_gms_pane_g

0xd41a,	// (0x0005df74) scroll_pane_cp014

0xd98c,	// (0x0005e4e6) cell_large_graphic_popup_pane_ParamLimits

0xd98c,	// (0x0005e4e6) cell_large_graphic_popup_pane

0xd9a4,	// (0x0005e4fe) cell_large_graphic_popup_pane_g1_ParamLimits

0xd9a4,	// (0x0005e4fe) cell_large_graphic_popup_pane_g1

0xd9b0,	// (0x0005e50a) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9b0,	// (0x0005e50a) cell_large_graphic_popup_pane_g2

0xd9bc,	// (0x0005e516) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9bc,	// (0x0005e516) cell_large_graphic_popup_pane_g3

0xd9c9,	// (0x0005e523) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9c9,	// (0x0005e523) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0005fee1) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0005fee1) cell_large_graphic_popup_pane_g

0xd9d9,	// (0x0005e533) grid_highlight_pane_cp010

0xc4d9,	// (0x0005d033) bg_popup_call_pane_g1

0xd9e3,	// (0x0005e53d) list_single_graphic_popup_conf_pane_ParamLimits

0xd9e3,	// (0x0005e53d) list_single_graphic_popup_conf_pane

0xd9f5,	// (0x0005e54f) list_highlight_pane_cp01

0xd9fe,	// (0x0005e558) list_single_graphic_popup_conf_pane_g1

0xda06,	// (0x0005e560) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0005feea) list_single_graphic_popup_conf_pane_g

0xda0e,	// (0x0005e568) list_single_graphic_popup_conf_pane_t1

0xda1c,	// (0x0005e576) linegrid_cams_pane_g1

0x591b,	// (0x00056475) linegrid_cams_pane_g2

0xc591,	// (0x0005d0eb) linegrid_cams_pane_g3

0xda25,	// (0x0005e57f) linegrid_cams_pane_g4

0x5924,	// (0x0005647e) linegrid_cams_pane_g5

0x592d,	// (0x00056487) linegrid_cams_pane_g6

0xc617,	// (0x0005d171) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0005feef) linegrid_cams_pane_g

0xda2e,	// (0x0005e588) popup_clock_analogue_window

0xda2e,	// (0x0005e588) popup_clock_digital_window

0xc112,	// (0x0005cc6c) popup_phob_thumbnail_window

0xc4d9,	// (0x0005d033) call_video_uplink_pane_g1

0xda37,	// (0x0005e591) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0005fefe) call_video_uplink_pane_g

0xc5e4,	// (0x0005d13e) video_uplink_pane

0xda3f,	// (0x0005e599) mce_image_pane_g1

0x5936,	// (0x00056490) mce_image_pane_g2

0x593e,	// (0x00056498) mce_image_pane_g3

0x5946,	// (0x000564a0) mce_image_pane_g4

0x594e,	// (0x000564a8) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0005ff03) mce_image_pane_g

0xda49,	// (0x0005e5a3) control_top_pane_stacon_cp01_ParamLimits

0xda49,	// (0x0005e5a3) control_top_pane_stacon_cp01

0xda5d,	// (0x0005e5b7) uni_indicator_pane_stacon_cp01_ParamLimits

0xda5d,	// (0x0005e5b7) uni_indicator_pane_stacon_cp01

0xda6e,	// (0x0005e5c8) bg_popup_sub_pane_cp03

0x5956,	// (0x000564b0) chi_dic_find_pane

0x595e,	// (0x000564b8) listscroll_chi_dic_pane

0x5967,	// (0x000564c1) main_pane_chidic_g1

0x597a,	// (0x000564d4) chi_dic_find_pane_t1

0xda78,	// (0x0005e5d2) find_chidic_pane

0xda81,	// (0x0005e5db) chi_dic_list_pane_ParamLimits

0xda81,	// (0x0005e5db) chi_dic_list_pane

0xda92,	// (0x0005e5ec) scroll_pane_cp020

0x5988,	// (0x000564e2) find_chidic_pane_t1

0xc112,	// (0x0005cc6c) input_focus_pane_cp06

0x5997,	// (0x000564f1) list_chi_dic_pane_ParamLimits

0x5997,	// (0x000564f1) list_chi_dic_pane

0xda9a,	// (0x0005e5f4) list_chi_dic_pane_t1_ParamLimits

0xda9a,	// (0x0005e5f4) list_chi_dic_pane_t1

0xc112,	// (0x0005cc6c) list_highlight_pane_cp020

0xdaad,	// (0x0005e607) bg_cale_heading_pane_g1

0x59b8,	// (0x00056512) bg_cale_heading_pane_g2

0x59c0,	// (0x0005651a) bg_cale_heading_pane_g3

0x59c8,	// (0x00056522) bg_cale_heading_pane_g4

0x59d2,	// (0x0005652c) bg_cale_heading_pane_g5

0x59dc,	// (0x00056536) bg_cale_heading_pane_g6

0x59e4,	// (0x0005653e) bg_cale_heading_pane_g7

0x59ec,	// (0x00056546) bg_cale_heading_pane_g8

0x59f6,	// (0x00056550) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0005ff0e) bg_cale_heading_pane_g

0xdaad,	// (0x0005e607) bg_cale_side_pane_g1

0x5a00,	// (0x0005655a) bg_cale_side_pane_g2

0x5a0a,	// (0x00056564) bg_cale_side_pane_g3

0x5a14,	// (0x0005656e) bg_cale_side_pane_g4

0x5a1e,	// (0x00056578) bg_cale_side_pane_g5

0x5a28,	// (0x00056582) bg_cale_side_pane_g6

0x5a32,	// (0x0005658c) bg_cale_side_pane_g7

0x5a3c,	// (0x00056596) bg_cale_side_pane_g8

0x5a44,	// (0x0005659e) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0005ff21) bg_cale_side_pane_g

0x5a4c,	// (0x000565a6) popup_call_status_window_ParamLimits

0x5a4c,	// (0x000565a6) popup_call_status_window

0xdab5,	// (0x0005e60f) stacon_top_pane

0xdabd,	// (0x0005e617) status_pane_ParamLimits

0xdabd,	// (0x0005e617) status_pane

0xdad2,	// (0x0005e62c) status_small_pane

0xdada,	// (0x0005e634) control_pane

0xc112,	// (0x0005cc6c) stacon_bottom_pane

0xdae2,	// (0x0005e63c) list_single_mce_smart_pane_t1_ParamLimits

0xdae2,	// (0x0005e63c) list_single_mce_smart_pane_t1

0xdaf5,	// (0x0005e64f) list_single_mce_smart_pane_t2_ParamLimits

0xdaf5,	// (0x0005e64f) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0005ff34) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0005ff34) list_single_mce_smart_pane_t

0x5a58,	// (0x000565b2) compass_pane

0x5a64,	// (0x000565be) main_location2_pane_t1

0x5a78,	// (0x000565d2) main_location2_pane_t2

0x5a8c,	// (0x000565e6) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0005ff39) main_location2_pane_t

0xdb14,	// (0x0005e66e) compass_pane_g1_ParamLimits

0xdb14,	// (0x0005e66e) compass_pane_g1

0x5ad6,	// (0x00056630) compass_pane_t1

0x5ae5,	// (0x0005663f) compass_pane_t2

0x0005,

0xf3e8,	// (0x0005ff42) compass_pane_t

0x5b30,	// (0x0005668a) text_secondary_cp61

0xdb28,	// (0x0005e682) navi_pane_cams_g5

0xdb4b,	// (0x0005e6a5) navi_pane_im_t1

0xdb59,	// (0x0005e6b3) navi_pane_mp_g1_ParamLimits

0xdb59,	// (0x0005e6b3) navi_pane_mp_g1

0xdb6d,	// (0x0005e6c7) navi_pane_mp_g2_ParamLimits

0xdb6d,	// (0x0005e6c7) navi_pane_mp_g2

0xdb79,	// (0x0005e6d3) navi_pane_mp_g3_ParamLimits

0xdb79,	// (0x0005e6d3) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0005ff56) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0005ff56) navi_pane_mp_g

0xdb85,	// (0x0005e6df) navi_pane_mp_t1

0xdb93,	// (0x0005e6ed) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0005ff5d) navi_pane_mp_t

0xdbcf,	// (0x0005e729) navi_pane_vt_g1

0xdb85,	// (0x0005e6df) navi_pane_vt_t1

0xdbd7,	// (0x0005e731) navi_slider_pane

0xdbdf,	// (0x0005e739) zooming_pane

0xdbe7,	// (0x0005e741) navi_slider_pane_g1

0x5c5d,	// (0x000567b7) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0005ff64) navi_slider_pane_g

0xdc19,	// (0x0005e773) aid_levels_zoom

0xdc21,	// (0x0005e77b) zooming_pane_g1

0xdc29,	// (0x0005e783) zooming_pane_g2

0xdc29,	// (0x0005e783) zooming_pane_g3

0x0002,

0xf419,	// (0x0005ff73) zooming_pane_g

0xdc31,	// (0x0005e78b) level_10_zoom

0xdc3a,	// (0x0005e794) level_11_zoom

0xdc43,	// (0x0005e79d) level_1_zoom

0xdc4c,	// (0x0005e7a6) level_2_zoom

0xdc55,	// (0x0005e7af) level_3_zoom

0xdc5e,	// (0x0005e7b8) level_4_zoom

0xdc67,	// (0x0005e7c1) level_5_zoom

0xdc70,	// (0x0005e7ca) level_6_zoom

0xdc79,	// (0x0005e7d3) level_7_zoom

0xdc82,	// (0x0005e7dc) level_8_zoom

0xdc8b,	// (0x0005e7e5) level_9_zoom

0xdc9c,	// (0x0005e7f6) popup_phob_thumbnail_window_g1

0xdca4,	// (0x0005e7fe) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0005ff7a) popup_phob_thumbnail_window_g

0xefd1,	// (0x0005fb2b) level_1_location

0xefd9,	// (0x0005fb33) level_2_location

0xefe1,	// (0x0005fb3b) level_3_location

0xefe9,	// (0x0005fb43) level_4_location

0xdbdf,	// (0x0005e739) level_5_location

0x5c6f,	// (0x000567c9) mce_icon_pane_g1

0x5c77,	// (0x000567d1) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0005ff7f) mce_icon_pane_g

0x5c7f,	// (0x000567d9) main_mup_pane_g1_ParamLimits

0x5c7f,	// (0x000567d9) main_mup_pane_g1

0x5c97,	// (0x000567f1) main_mup_pane_g2_ParamLimits

0x5c97,	// (0x000567f1) main_mup_pane_g2

0x5cb3,	// (0x0005680d) main_mup_pane_g3_ParamLimits

0x5cb3,	// (0x0005680d) main_mup_pane_g3

0x5ccf,	// (0x00056829) main_mup_pane_g4_ParamLimits

0x5ccf,	// (0x00056829) main_mup_pane_g4

0x5ceb,	// (0x00056845) main_mup_pane_g5_ParamLimits

0x5ceb,	// (0x00056845) main_mup_pane_g5

0x5d0c,	// (0x00056866) main_mup_pane_g6_ParamLimits

0x5d0c,	// (0x00056866) main_mup_pane_g6

0x5d28,	// (0x00056882) main_mup_pane_g7_ParamLimits

0x5d28,	// (0x00056882) main_mup_pane_g7

0x5d44,	// (0x0005689e) main_mup_pane_g8_ParamLimits

0x5d44,	// (0x0005689e) main_mup_pane_g8

0x5d60,	// (0x000568ba) main_mup_pane_g9_ParamLimits

0x5d60,	// (0x000568ba) main_mup_pane_g9

0x5d7f,	// (0x000568d9) main_mup_pane_g10_ParamLimits

0x5d7f,	// (0x000568d9) main_mup_pane_g10

0x5d9e,	// (0x000568f8) main_mup_pane_g11_ParamLimits

0x5d9e,	// (0x000568f8) main_mup_pane_g11

0x5db6,	// (0x00056910) main_mup_pane_g12_ParamLimits

0x5db6,	// (0x00056910) main_mup_pane_g12

0x5dc4,	// (0x0005691e) main_mup_pane_g13_ParamLimits

0x5dc4,	// (0x0005691e) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0005ff84) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0005ff84) main_mup_pane_g

0x5dda,	// (0x00056934) main_mup_pane_t1_ParamLimits

0x5dda,	// (0x00056934) main_mup_pane_t1

0x5df7,	// (0x00056951) main_mup_pane_t2_ParamLimits

0x5df7,	// (0x00056951) main_mup_pane_t2

0x5e11,	// (0x0005696b) main_mup_pane_t3_ParamLimits

0x5e11,	// (0x0005696b) main_mup_pane_t3

0x5e2b,	// (0x00056985) main_mup_pane_t4_ParamLimits

0x5e2b,	// (0x00056985) main_mup_pane_t4

0x5e3d,	// (0x00056997) main_mup_pane_t5_ParamLimits

0x5e3d,	// (0x00056997) main_mup_pane_t5

0x5e4f,	// (0x000569a9) main_mup_pane_t6_ParamLimits

0x5e4f,	// (0x000569a9) main_mup_pane_t6

0x0005,

0xf445,	// (0x0005ff9f) main_mup_pane_t_ParamLimits

0xf445,	// (0x0005ff9f) main_mup_pane_t

0x5e65,	// (0x000569bf) mup_progress_pane_ParamLimits

0x5e65,	// (0x000569bf) mup_progress_pane

0x5e71,	// (0x000569cb) mup_visualizer_pane_ParamLimits

0x5e71,	// (0x000569cb) mup_visualizer_pane

0x5eaf,	// (0x00056a09) mup_volume_pane_ParamLimits

0x5eaf,	// (0x00056a09) mup_volume_pane

0xdc02,	// (0x0005e75c) mup_visualizer_pane_g1_ParamLimits

0xdc02,	// (0x0005e75c) mup_visualizer_pane_g1

0xdc02,	// (0x0005e75c) mup_visualizer_pane_g2_ParamLimits

0xdc02,	// (0x0005e75c) mup_visualizer_pane_g2

0xdb14,	// (0x0005e66e) mup_visualizer_pane_g3_ParamLimits

0xdb14,	// (0x0005e66e) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0005ffac) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0005ffac) mup_visualizer_pane_g

0xc4d9,	// (0x0005d033) mup_volume_pane_g1

0xdcb4,	// (0x0005e80e) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0005ffb3) mup_volume_pane_g

0xc4d9,	// (0x0005d033) mup_progress_pane_g1

0xdcbd,	// (0x0005e817) mup_progress_pane_g2

0xdcc6,	// (0x0005e820) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0005ffb8) mup_progress_pane_g

0xc112,	// (0x0005cc6c) bg_popup_window_pane_cp05

0xdccf,	// (0x0005e829) heading_pane_cp02_ParamLimits

0xdccf,	// (0x0005e829) heading_pane_cp02

0xdce9,	// (0x0005e843) list_popup_blid_pane

0xdcf1,	// (0x0005e84b) list_blid_sat_info_pane_ParamLimits

0xdcf1,	// (0x0005e84b) list_blid_sat_info_pane

0xdd04,	// (0x0005e85e) list_blid_sat_info_pane_g1

0xdd0c,	// (0x0005e866) list_blid_sat_info_pane_t1

0x5fba,	// (0x00056b14) mup_equalizer_pane_ParamLimits

0x5fba,	// (0x00056b14) mup_equalizer_pane

0x5fdb,	// (0x00056b35) mup_equalizer_pane_cp1_ParamLimits

0x5fdb,	// (0x00056b35) mup_equalizer_pane_cp1

0x5ffc,	// (0x00056b56) mup_equalizer_pane_cp2_ParamLimits

0x5ffc,	// (0x00056b56) mup_equalizer_pane_cp2

0x601d,	// (0x00056b77) mup_equalizer_pane_cp3_ParamLimits

0x601d,	// (0x00056b77) mup_equalizer_pane_cp3

0x603e,	// (0x00056b98) mup_equalizer_pane_cp4_ParamLimits

0x603e,	// (0x00056b98) mup_equalizer_pane_cp4

0x605f,	// (0x00056bb9) mup_equalizer_pane_cp5

0x6075,	// (0x00056bcf) mup_equalizer_pane_cp6

0x608d,	// (0x00056be7) mup_equalizer_pane_cp7

0xeeef,	// (0x0005fa49) bg_popup_call_poc_act_pane_g9

0xeef7,	// (0x0005fa51) bg_popup_call_poc_act_pane_g10

0xeeff,	// (0x0005fa59) bg_popup_call_poc_act_pane_g11

0x000a,

0xc36d,	// (0x0005cec7) mup_scale_pane

0xc4d9,	// (0x0005d033) mup_scale_pane_g1

0xdd1a,	// (0x0005e874) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0005ffd4) mup_scale_pane_g

0xdd3e,	// (0x0005e898) msg_data_pane

0xdd46,	// (0x0005e8a0) scroll_pane_cp017

0x60b7,	// (0x00056c11) bg_list_pane_cp04_ParamLimits

0x60b7,	// (0x00056c11) bg_list_pane_cp04

0xdd4e,	// (0x0005e8a8) msg_data_pane_g1

0x60d7,	// (0x00056c31) msg_data_pane_g2

0x593e,	// (0x00056498) msg_data_pane_g3

0x60df,	// (0x00056c39) msg_data_pane_g4

0x60e7,	// (0x00056c41) msg_data_pane_g5

0x60ef,	// (0x00056c49) msg_data_pane_g6

0x60f7,	// (0x00056c51) msg_data_pane_g7

0x0006,

0xf489,	// (0x0005ffe3) msg_data_pane_g

0x60ff,	// (0x00056c59) msg_text_pane_ParamLimits

0x60ff,	// (0x00056c59) msg_text_pane

0x6152,	// (0x00056cac) qrid_highlight_pane_cp011_ParamLimits

0x6152,	// (0x00056cac) qrid_highlight_pane_cp011

0xc112,	// (0x0005cc6c) msg_body_pane

0xc112,	// (0x0005cc6c) msg_header_pane

0xdd5f,	// (0x0005e8b9) input_focus_pane_cp07

0x617c,	// (0x00056cd6) msg_header_pane_t1_ParamLimits

0x617c,	// (0x00056cd6) msg_header_pane_t1

0xdd74,	// (0x0005e8ce) msg_header_pane_t2_ParamLimits

0xdd74,	// (0x0005e8ce) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0005fff7) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0005fff7) msg_header_pane_t

0xdd86,	// (0x0005e8e0) msg_body_pane_g1

0x6190,	// (0x00056cea) msg_body_pane_t1_ParamLimits

0x6190,	// (0x00056cea) msg_body_pane_t1

0xdd8e,	// (0x0005e8e8) msg_body_pane_t2_ParamLimits

0xdd8e,	// (0x0005e8e8) msg_body_pane_t2

0xdda0,	// (0x0005e8fa) msg_body_pane_t3_ParamLimits

0xdda0,	// (0x0005e8fa) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0005fffc) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0005fffc) msg_body_pane_t

0x6213,	// (0x00056d6d) main_viewer_pane_g1_ParamLimits

0x6213,	// (0x00056d6d) main_viewer_pane_g1

0x621f,	// (0x00056d79) main_viewer_pane_g2_ParamLimits

0x621f,	// (0x00056d79) main_viewer_pane_g2

0x622b,	// (0x00056d85) main_viewer_pane_g3_ParamLimits

0x622b,	// (0x00056d85) main_viewer_pane_g3

0x623c,	// (0x00056d96) main_viewer_pane_g4_ParamLimits

0x623c,	// (0x00056d96) main_viewer_pane_g4

0x624d,	// (0x00056da7) main_viewer_pane_g5_ParamLimits

0x624d,	// (0x00056da7) main_viewer_pane_g5

0x624d,	// (0x00056da7) main_viewer_pane_g7_ParamLimits

0x624d,	// (0x00056da7) main_viewer_pane_g7

0x625f,	// (0x00056db9) main_viewer_pane_g8_ParamLimits

0x625f,	// (0x00056db9) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0006000c) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0006000c) main_viewer_pane_g

0xddb2,	// (0x0005e90c) viewer_content_pane_ParamLimits

0xddb2,	// (0x0005e90c) viewer_content_pane

0x6297,	// (0x00056df1) main_postcard_pane_g1_ParamLimits

0x6297,	// (0x00056df1) main_postcard_pane_g1

0x62a5,	// (0x00056dff) main_postcard_pane_g2_ParamLimits

0x62a5,	// (0x00056dff) main_postcard_pane_g2

0x62b3,	// (0x00056e0d) main_postcard_pane_g3_ParamLimits

0x62b3,	// (0x00056e0d) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0006001d) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0006001d) main_postcard_pane_g

0x62c3,	// (0x00056e1d) main_postcard_pane_g4

0xf0c5,	// (0x0005fc1f) smil_status_volume_pane_g2

0x62ef,	// (0x00056e49) postcard_pane_ParamLimits

0x62ef,	// (0x00056e49) postcard_pane

0xdc02,	// (0x0005e75c) postcard_pane_g1_ParamLimits

0xdc02,	// (0x0005e75c) postcard_pane_g1

0x6321,	// (0x00056e7b) postcard_pane_g2_ParamLimits

0x6321,	// (0x00056e7b) postcard_pane_g2

0x632d,	// (0x00056e87) postcard_pane_g3_ParamLimits

0x632d,	// (0x00056e87) postcard_pane_g3

0xddc0,	// (0x0005e91a) postcard_pane_g4_ParamLimits

0xddc0,	// (0x0005e91a) postcard_pane_g4

0x6339,	// (0x00056e93) postcard_pane_g5_ParamLimits

0x6339,	// (0x00056e93) postcard_pane_g5

0x6345,	// (0x00056e9f) postcard_pane_g6_ParamLimits

0x6345,	// (0x00056e9f) postcard_pane_g6

0xddce,	// (0x0005e928) postcard_pane_g7_ParamLimits

0xddce,	// (0x0005e928) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0006002a) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0006002a) postcard_pane_g

0x6351,	// (0x00056eab) main_mp2_pane_g1_ParamLimits

0x6351,	// (0x00056eab) main_mp2_pane_g1

0x635d,	// (0x00056eb7) main_mp2_pane_g2_ParamLimits

0x635d,	// (0x00056eb7) main_mp2_pane_g2

0x6369,	// (0x00056ec3) main_mp2_pane_g3_ParamLimits

0x6369,	// (0x00056ec3) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00060039) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00060039) main_mp2_pane_g

0x6375,	// (0x00056ecf) main_mp2_pane_t1_ParamLimits

0x6375,	// (0x00056ecf) main_mp2_pane_t1

0x638c,	// (0x00056ee6) main_mp2_pane_t2_ParamLimits

0x638c,	// (0x00056ee6) main_mp2_pane_t2

0x639e,	// (0x00056ef8) main_mp2_pane_t3_ParamLimits

0x639e,	// (0x00056ef8) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00060040) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00060040) main_mp2_pane_t

0xdddc,	// (0x0005e936) pec_content_pane_ParamLimits

0xdddc,	// (0x0005e936) pec_content_pane

0xd41a,	// (0x0005df74) scroll_pane_cp015

0xddee,	// (0x0005e948) pec_attribute_pane_ParamLimits

0xddee,	// (0x0005e948) pec_attribute_pane

0x63b0,	// (0x00056f0a) pec_content_pane_g1_ParamLimits

0x63b0,	// (0x00056f0a) pec_content_pane_g1

0xddfe,	// (0x0005e958) pec_content_pane_t1_ParamLimits

0xddfe,	// (0x0005e958) pec_content_pane_t1

0xde10,	// (0x0005e96a) pec_content_pane_t2_ParamLimits

0xde10,	// (0x0005e96a) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00060047) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00060047) pec_content_pane_t

0x63bc,	// (0x00056f16) list_single_graphic_pane_cp01_ParamLimits

0x63bc,	// (0x00056f16) list_single_graphic_pane_cp01

0xc36d,	// (0x0005cec7) bg_popup_sub_pane_cp04

0xde22,	// (0x0005e97c) popup_mup_playback_window_g1

0xde2e,	// (0x0005e988) popup_mup_playback_window_t1

0xde43,	// (0x0005e99d) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0006004c) popup_mup_playback_window_t

0xde7a,	// (0x0005e9d4) main_image_pane_g1_ParamLimits

0xde7a,	// (0x0005e9d4) main_image_pane_g1

0xdebd,	// (0x0005ea17) scroll_pane_cp018_ParamLimits

0xdebd,	// (0x0005ea17) scroll_pane_cp018

0xded5,	// (0x0005ea2f) scroll_pane_cp016_ParamLimits

0xded5,	// (0x0005ea2f) scroll_pane_cp016

0x6460,	// (0x00056fba) smil2_image_pane_ParamLimits

0x6460,	// (0x00056fba) smil2_image_pane

0x6494,	// (0x00056fee) smil2_root_pane_ParamLimits

0x6494,	// (0x00056fee) smil2_root_pane

0x64c0,	// (0x0005701a) smil2_text_pane_ParamLimits

0x64c0,	// (0x0005701a) smil2_text_pane

0xc112,	// (0x0005cc6c) bg_list_pane_cp06

0xdf11,	// (0x0005ea6b) grid_radio_pane

0xc112,	// (0x0005cc6c) bg_popup_window_pane_cp06

0xdf19,	// (0x0005ea73) main_fmradio_pane_t1

0xd962,	// (0x0005e4bc) heading_pane_cp04

0xdf27,	// (0x0005ea81) main_fmradio_pane_t2

0xef07,	// (0x0005fa61) popup_cale_lunar_info_window_g1

0xdf35,	// (0x0005ea8f) main_fmradio_pane_t3

0xef0f,	// (0x0005fa69) popup_cale_lunar_info_window_g2

0xdf43,	// (0x0005ea9d) main_fmradio_pane_t4

0x0001,

0xdf51,	// (0x0005eaab) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00060127) popup_cale_lunar_info_window_g

0xf507,	// (0x00060061) main_fmradio_pane_t

0xdf5f,	// (0x0005eab9) wait_bar_pane_cp03

0xdf67,	// (0x0005eac1) cell_fmradio_pane_ParamLimits

0xdf67,	// (0x0005eac1) cell_fmradio_pane

0xddce,	// (0x0005e928) cell_fmradio_pane_g1_ParamLimits

0xddce,	// (0x0005e928) cell_fmradio_pane_g1

0xc112,	// (0x0005cc6c) grid_highlight_pane_cp011

0xdf7a,	// (0x0005ead4) poc_content_pane_ParamLimits

0xdf7a,	// (0x0005ead4) poc_content_pane

0xdf8c,	// (0x0005eae6) scroll_pane_cp019

0x6500,	// (0x0005705a) popup_call_poc_act_window_ParamLimits

0x6500,	// (0x0005705a) popup_call_poc_act_window

0x650d,	// (0x00057067) popup_call_poc_inact_window_ParamLimits

0x650d,	// (0x00057067) popup_call_poc_inact_window

0xf5a4,	// (0x000600fe) bg_popup_call_poc_act_pane_g

0xee77,	// (0x0005f9d1) bg_popup_call_poc_inact_pane_g1

0xee7f,	// (0x0005f9d9) bg_popup_call_poc_inact_pane_g2

0xdf94,	// (0x0005eaee) popup_call_poc_act_window_g2

0xee87,	// (0x0005f9e1) bg_popup_call_poc_inact_pane_g3

0xee8f,	// (0x0005f9e9) bg_popup_call_poc_inact_pane_g4

0xee97,	// (0x0005f9f1) bg_popup_call_poc_inact_pane_g5

0xdf9c,	// (0x0005eaf6) popup_call_poc_act_window_t1_ParamLimits

0xdf9c,	// (0x0005eaf6) popup_call_poc_act_window_t1

0xdfc4,	// (0x0005eb1e) popup_call_poc_act_window_t2_ParamLimits

0xdfc4,	// (0x0005eb1e) popup_call_poc_act_window_t2

0xdfec,	// (0x0005eb46) popup_call_poc_act_window_t3_ParamLimits

0xdfec,	// (0x0005eb46) popup_call_poc_act_window_t3

0xe014,	// (0x0005eb6e) popup_call_poc_act_window_t4_ParamLimits

0xe014,	// (0x0005eb6e) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0006006c) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0006006c) popup_call_poc_act_window_t

0xee9f,	// (0x0005f9f9) bg_popup_call_poc_inact_pane_g6

0xeea7,	// (0x0005fa01) bg_popup_call_poc_inact_pane_g7

0xeeaf,	// (0x0005fa09) bg_popup_call_poc_inact_pane_g8

0xe026,	// (0x0005eb80) popup_call_poc_inact_window_g2

0xeeb7,	// (0x0005fa11) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x000600eb) bg_popup_call_poc_inact_pane_g

0xe02e,	// (0x0005eb88) popup_call_poc_inact_window_t1_ParamLimits

0xe02e,	// (0x0005eb88) popup_call_poc_inact_window_t1

0xe043,	// (0x0005eb9d) popup_call_poc_inact_window_t2_ParamLimits

0xe043,	// (0x0005eb9d) popup_call_poc_inact_window_t2

0xe058,	// (0x0005ebb2) popup_call_poc_inact_window_t3_ParamLimits

0xe058,	// (0x0005ebb2) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00060075) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00060075) popup_call_poc_inact_window_t

0xf038,	// (0x0005fb92) context_pane_ParamLimits

0x6b41,	// (0x0005769b) signal_pane_ParamLimits

0xdbdf,	// (0x0005e739) main_call2_pane

0x6ab9,	// (0x00057613) popup_phob_thumbnail2_window_ParamLimits

0x6ab9,	// (0x00057613) popup_phob_thumbnail2_window

0x61c1,	// (0x00056d1b) aid_hotspot_pointer_arrow_pane

0x61c9,	// (0x00056d23) aid_hotspot_pointer_hand_pane

0x6832,	// (0x0005738c) phob_pre_status_pane_g5

0x4486,	// (0x00054fe0) cams_zoom_pane_ParamLimits

0x4492,	// (0x00054fec) image_vga_pane_ParamLimits

0x44a1,	// (0x00054ffb) main_camera_pane_g1_ParamLimits

0x44af,	// (0x00055009) main_camera_pane_g2_ParamLimits

0x44bd,	// (0x00055017) main_camera_pane_g3_ParamLimits

0x44c9,	// (0x00055023) main_camera_pane_g4_ParamLimits

0x44d5,	// (0x0005502f) main_camera_pane_g5_ParamLimits

0x44e1,	// (0x0005503b) main_camera_pane_g6_ParamLimits

0x44ed,	// (0x00055047) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0005fd74) main_camera_pane_g_ParamLimits

0x44f9,	// (0x00055053) main_camera_pane_t1_ParamLimits

0x450b,	// (0x00055065) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0005fd85) main_camera_pane_t_ParamLimits

0xc36d,	// (0x0005cec7) bg_popup_preview_window_pane_cp01_ParamLimits

0xc36d,	// (0x0005cec7) bg_popup_preview_window_pane_cp01

0xe06d,	// (0x0005ebc7) popup_phob_thumbnail2_window_g1_ParamLimits

0xe06d,	// (0x0005ebc7) popup_phob_thumbnail2_window_g1

0xc112,	// (0x0005cc6c) call2_cli_visual_pane

0x6529,	// (0x00057083) popup_call2_audio_conf_window_ParamLimits

0x6529,	// (0x00057083) popup_call2_audio_conf_window

0x653e,	// (0x00057098) popup_call2_audio_first_window_ParamLimits

0x653e,	// (0x00057098) popup_call2_audio_first_window

0x65dc,	// (0x00057136) popup_call2_audio_in_window_ParamLimits

0x65dc,	// (0x00057136) popup_call2_audio_in_window

0x661e,	// (0x00057178) popup_call2_audio_out_window_ParamLimits

0x661e,	// (0x00057178) popup_call2_audio_out_window

0x6680,	// (0x000571da) popup_call2_audio_second_window_ParamLimits

0x6680,	// (0x000571da) popup_call2_audio_second_window

0x66de,	// (0x00057238) popup_call2_audio_wait_window_ParamLimits

0x66de,	// (0x00057238) popup_call2_audio_wait_window

0xc112,	// (0x0005cc6c) bg_popup_call2_act_pane_cp03

0xc34f,	// (0x0005cea9) list_conf_pane_cp

0xe079,	// (0x0005ebd3) popup_call2_audio_conf_window_t1

0xe087,	// (0x0005ebe1) list_single_graphic_popup_conf2_pane_ParamLimits

0xe087,	// (0x0005ebe1) list_single_graphic_popup_conf2_pane

0xd9f5,	// (0x0005e54f) list_highlight_pane_cp04

0xe09a,	// (0x0005ebf4) list_single_graphic_popup_conf2_pane_g1

0xda06,	// (0x0005e560) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0006007c) list_single_graphic_popup_conf2_pane_g

0xe0a4,	// (0x0005ebfe) list_single_graphic_popup_conf2_pane_t1

0xe0b2,	// (0x0005ec0c) bg_popup_call2_act_pane_cp01_ParamLimits

0xe0b2,	// (0x0005ec0c) bg_popup_call2_act_pane_cp01

0xe13c,	// (0x0005ec96) call_type_pane_cp05_ParamLimits

0xe13c,	// (0x0005ec96) call_type_pane_cp05

0xe190,	// (0x0005ecea) popup_call2_audio_second_window_g1_ParamLimits

0xe190,	// (0x0005ecea) popup_call2_audio_second_window_g1

0xe1e4,	// (0x0005ed3e) popup_call2_audio_second_window_g2_ParamLimits

0xe1e4,	// (0x0005ed3e) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00060081) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00060081) popup_call2_audio_second_window_g

0xe249,	// (0x0005eda3) popup_call2_audio_second_window_t1_ParamLimits

0xe249,	// (0x0005eda3) popup_call2_audio_second_window_t1

0xe304,	// (0x0005ee5e) popup_call2_audio_second_window_t2_ParamLimits

0xe304,	// (0x0005ee5e) popup_call2_audio_second_window_t2

0xe357,	// (0x0005eeb1) popup_call2_audio_second_window_t3_ParamLimits

0xe357,	// (0x0005eeb1) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00060088) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00060088) popup_call2_audio_second_window_t

0xc112,	// (0x0005cc6c) bg_popup_call2_in_pane_cp02

0xc11c,	// (0x0005cc76) call_type_pane_cp04

0xc124,	// (0x0005cc7e) popup_call2_audio_wait_window_g1

0xc12c,	// (0x0005cc86) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0005fc61) popup_call2_audio_wait_window_g

0xc134,	// (0x0005cc8e) popup_call2_audio_wait_window_t3

0xe44a,	// (0x0005efa4) bg_popup_call2_act_pane_ParamLimits

0xe44a,	// (0x0005efa4) bg_popup_call2_act_pane

0xe50a,	// (0x0005f064) call_type_pane_cp03_ParamLimits

0xe50a,	// (0x0005f064) call_type_pane_cp03

0xe56e,	// (0x0005f0c8) popup_call2_audio_first_window_g1_ParamLimits

0xe56e,	// (0x0005f0c8) popup_call2_audio_first_window_g1

0xe5de,	// (0x0005f138) popup_call2_audio_first_window_g2_ParamLimits

0xe5de,	// (0x0005f138) popup_call2_audio_first_window_g2

0xdc02,	// (0x0005e75c) popup_call2_audio_first_window_g3_ParamLimits

0xdc02,	// (0x0005e75c) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00060091) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00060091) popup_call2_audio_first_window_g

0xe6bc,	// (0x0005f216) popup_call2_audio_first_window_t1_ParamLimits

0xe6bc,	// (0x0005f216) popup_call2_audio_first_window_t1

0xe7bf,	// (0x0005f319) popup_call2_audio_first_window_t4_ParamLimits

0xe7bf,	// (0x0005f319) popup_call2_audio_first_window_t4

0xe8a2,	// (0x0005f3fc) popup_call2_audio_first_window_t5_ParamLimits

0xe8a2,	// (0x0005f3fc) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0006009c) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0006009c) popup_call2_audio_first_window_t

0xc365,	// (0x0005cebf) bg_popup_call2_act_pane_g1

0xef17,	// (0x0005fa71) popup_cale_lunar_info_window_t1

0xef25,	// (0x0005fa7f) popup_cale_lunar_info_window_t2

0xef33,	// (0x0005fa8d) popup_cale_lunar_info_window_t3

0xc112,	// (0x0005cc6c) bg_popup_call2_bubble_pane

0xe9a3,	// (0x0005f4fd) bg_popup_call2_in_pane_cp01_ParamLimits

0xe9a3,	// (0x0005f4fd) bg_popup_call2_in_pane_cp01

0xbdee,	// (0x0005c948) call_type_pane_cp02

0xe9eb,	// (0x0005f545) popup_call2_audio_out_window_g1_ParamLimits

0xe9eb,	// (0x0005f545) popup_call2_audio_out_window_g1

0xea17,	// (0x0005f571) popup_call2_audio_out_window_g2_ParamLimits

0xea17,	// (0x0005f571) popup_call2_audio_out_window_g2

0xea3f,	// (0x0005f599) popup_call2_audio_out_window_g3_ParamLimits

0xea3f,	// (0x0005f599) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x000600a5) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x000600a5) popup_call2_audio_out_window_g

0xea7a,	// (0x0005f5d4) popup_call2_audio_out_window_t1_ParamLimits

0xea7a,	// (0x0005f5d4) popup_call2_audio_out_window_t1

0xead9,	// (0x0005f633) popup_call2_audio_out_window_t2_ParamLimits

0xead9,	// (0x0005f633) popup_call2_audio_out_window_t2

0xeb2d,	// (0x0005f687) popup_call2_audio_out_window_t3_ParamLimits

0xeb2d,	// (0x0005f687) popup_call2_audio_out_window_t3

0xeb43,	// (0x0005f69d) popup_call2_audio_out_window_t4_ParamLimits

0xeb43,	// (0x0005f69d) popup_call2_audio_out_window_t4

0xeb59,	// (0x0005f6b3) popup_call2_audio_out_window_t5_ParamLimits

0xeb59,	// (0x0005f6b3) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x000600ae) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x000600ae) popup_call2_audio_out_window_t

0xebbd,	// (0x0005f717) bg_popup_call2_in_pane_ParamLimits

0xebbd,	// (0x0005f717) bg_popup_call2_in_pane

0xec19,	// (0x0005f773) popup_call2_audio_in_window_g1_ParamLimits

0xec19,	// (0x0005f773) popup_call2_audio_in_window_g1

0xec51,	// (0x0005f7ab) popup_call2_audio_in_window_g2_ParamLimits

0xec51,	// (0x0005f7ab) popup_call2_audio_in_window_g2

0xec89,	// (0x0005f7e3) popup_call2_audio_in_window_g3_ParamLimits

0xec89,	// (0x0005f7e3) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x000600bb) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x000600bb) popup_call2_audio_in_window_g

0xece1,	// (0x0005f83b) popup_call2_audio_in_window_t1_ParamLimits

0xece1,	// (0x0005f83b) popup_call2_audio_in_window_t1

0xed61,	// (0x0005f8bb) popup_call2_audio_in_window_t2_ParamLimits

0xed61,	// (0x0005f8bb) popup_call2_audio_in_window_t2

0xede1,	// (0x0005f93b) popup_call2_audio_in_window_t3_ParamLimits

0xede1,	// (0x0005f93b) popup_call2_audio_in_window_t3

0xedfb,	// (0x0005f955) popup_call2_audio_in_window_t4_ParamLimits

0xedfb,	// (0x0005f955) popup_call2_audio_in_window_t4

0xee0d,	// (0x0005f967) popup_call2_audio_in_window_t5_ParamLimits

0xee0d,	// (0x0005f967) popup_call2_audio_in_window_t5

0xee22,	// (0x0005f97c) popup_call2_audio_in_window_t6_ParamLimits

0xee22,	// (0x0005f97c) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x000600c4) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x000600c4) popup_call2_audio_in_window_t

0xc365,	// (0x0005cebf) bg_popup_call2_in_pane_g1

0xef41,	// (0x0005fa9b) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0006012c) popup_cale_lunar_info_window_t

0xc36d,	// (0x0005cec7) bg_popup_call2_rect_pane_ParamLimits

0xc36d,	// (0x0005cec7) bg_popup_call2_rect_pane

0xc112,	// (0x0005cc6c) call2_cli_visual_graphic_pane

0xc112,	// (0x0005cc6c) call2_cli_visual_text_pane

0x6bf3,	// (0x0005774d) smil_status_volume_pane_g3

0x0002,

0xc4d9,	// (0x0005d033) call2_cli_visual_graphic_pane_g1

0xc4d9,	// (0x0005d033) call2_cli_visual_graphic_pane_g2

0xc4d9,	// (0x0005d033) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x000600d1) call2_cli_visual_graphic_pane_g

0xee37,	// (0x0005f991) bg_popup_call2_rect_pane_g1

0xc577,	// (0x0005d0d1) bg_popup_call2_rect_pane_g2

0xee3f,	// (0x0005f999) bg_popup_call2_rect_pane_g3

0xee47,	// (0x0005f9a1) bg_popup_call2_rect_pane_g4

0xee4f,	// (0x0005f9a9) bg_popup_call2_rect_pane_g5

0xee57,	// (0x0005f9b1) bg_popup_call2_rect_pane_g6

0xee5f,	// (0x0005f9b9) bg_popup_call2_rect_pane_g7

0xee67,	// (0x0005f9c1) bg_popup_call2_rect_pane_g8

0xee6f,	// (0x0005f9c9) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x000600d8) bg_popup_call2_rect_pane_g

0xee77,	// (0x0005f9d1) bg_popup_call2_bubble_pane_g1

0xee7f,	// (0x0005f9d9) bg_popup_call2_bubble_pane_g2

0xee87,	// (0x0005f9e1) bg_popup_call2_bubble_pane_g3

0xee8f,	// (0x0005f9e9) bg_popup_call2_bubble_pane_g4

0xee97,	// (0x0005f9f1) bg_popup_call2_bubble_pane_g5

0xee9f,	// (0x0005f9f9) bg_popup_call2_bubble_pane_g6

0xeea7,	// (0x0005fa01) bg_popup_call2_bubble_pane_g7

0xeeaf,	// (0x0005fa09) bg_popup_call2_bubble_pane_g8

0xeeb7,	// (0x0005fa11) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x000600eb) bg_popup_call2_bubble_pane_g

0x4027,	// (0x00054b81) aid_cale_week_size_cell_pane

0x451d,	// (0x00055077) aid_cams_cif_uncrop_pane_ParamLimits

0x451d,	// (0x00055077) aid_cams_cif_uncrop_pane

0x4680,	// (0x000551da) aid_cams_size_cell_ParamLimits

0x4680,	// (0x000551da) aid_cams_size_cell

0x468c,	// (0x000551e6) grid_cams_pane_ParamLimits

0x469a,	// (0x000551f4) linegrid_cams_pane_ParamLimits

0x47c3,	// (0x0005531d) call_video_pane_t1

0x47e4,	// (0x0005533e) call_video_pane_t2

0x0001,

0xf27e,	// (0x0005fdd8) call_video_pane_t

0x4d64,	// (0x000558be) aid_cale_month_size_cell_pane_ParamLimits

0x4d64,	// (0x000558be) aid_cale_month_size_cell_pane

0xf61b,	// (0x00060175) smil_status_volume_pane_g

0x6c00,	// (0x0005775a) volume_smil_pane_ParamLimits

0x3774,	// (0x000542ce) aid_popup2_width_pane

0x3eea,	// (0x00054a44) cell_qdial_pane_g4_ParamLimits

0x3eea,	// (0x00054a44) cell_qdial_pane_g4

0x5ab2,	// (0x0005660c) aid_blid_cardinal_pane_ParamLimits

0x5ac2,	// (0x0005661c) aid_blid_destination_pane_ParamLimits

0x5ac2,	// (0x0005661c) aid_blid_destination_pane

0xc36d,	// (0x0005cec7) bg_popup_call_poc_act_pane_ParamLimits

0xc36d,	// (0x0005cec7) bg_popup_call_poc_act_pane

0xc36d,	// (0x0005cec7) bg_popup_call_poc_inact_pane_ParamLimits

0xc36d,	// (0x0005cec7) bg_popup_call_poc_inact_pane

0xeec7,	// (0x0005fa21) bg_popup_call_poc_act_pane_g1

0xeecf,	// (0x0005fa29) bg_popup_call_poc_act_pane_g2

0xeed7,	// (0x0005fa31) bg_popup_call_poc_act_pane_g3

0xee8f,	// (0x0005f9e9) bg_popup_call_poc_act_pane_g4

0xee97,	// (0x0005f9f1) bg_popup_call_poc_act_pane_g5

0xeedf,	// (0x0005fa39) bg_popup_call_poc_act_pane_g6

0xeea7,	// (0x0005fa01) bg_popup_call_poc_act_pane_g7

0xeee7,	// (0x0005fa41) bg_popup_call_poc_act_pane_g8

0xc112,	// (0x0005cc6c) main_usb_pane

0x69f4,	// (0x0005754e) popup_cale_lunar_info_window

0x4b03,	// (0x0005565d) im_reading_pane_t1_ParamLimits

0xd372,	// (0x0005decc) list_im_pane_ParamLimits

0xd383,	// (0x0005dedd) scroll_pane_cp07_ParamLimits

0xc112,	// (0x0005cc6c) grid_highlight_pane_cp012

0xc36d,	// (0x0005cec7) mup_scale_pane_ParamLimits

0xdc02,	// (0x0005e75c) main_usb_pane_g1_ParamLimits

0xdc02,	// (0x0005e75c) main_usb_pane_g1

0x6755,	// (0x000572af) main_usb_pane_g2_ParamLimits

0x6755,	// (0x000572af) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00060115) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00060115) main_usb_pane_g

0x6761,	// (0x000572bb) main_usb_pane_t1_ParamLimits

0x6761,	// (0x000572bb) main_usb_pane_t1

0x6773,	// (0x000572cd) main_usb_pane_t2_ParamLimits

0x6773,	// (0x000572cd) main_usb_pane_t2

0x6785,	// (0x000572df) main_usb_pane_t3_ParamLimits

0x6785,	// (0x000572df) main_usb_pane_t3

0x6797,	// (0x000572f1) main_usb_pane_t4_ParamLimits

0x6797,	// (0x000572f1) main_usb_pane_t4

0x67a9,	// (0x00057303) main_usb_pane_t5_ParamLimits

0x67a9,	// (0x00057303) main_usb_pane_t5

0x67bb,	// (0x00057315) main_usb_pane_t6_ParamLimits

0x67bb,	// (0x00057315) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0006011a) main_usb_pane_t_ParamLimits

0x5a58,	// (0x000565b2) aid_text_placing

0x5a64,	// (0x000565be) main_location2_pane_t1_ParamLimits

0x5a78,	// (0x000565d2) main_location2_pane_t2_ParamLimits

0x5a8c,	// (0x000565e6) main_location2_pane_t3_ParamLimits

0x5aa0,	// (0x000565fa) main_location2_pane_t4_ParamLimits

0x5aa0,	// (0x000565fa) main_location2_pane_t4

0xf3df,	// (0x0005ff39) main_location2_pane_t_ParamLimits

0xc3b1,	// (0x0005cf0b) find_pinb_pane_g2_ParamLimits

0xc3b1,	// (0x0005cf0b) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0005fc87) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0005fc87) find_pinb_pane_g

0xc3bd,	// (0x0005cf17) find_pinb_pane_t1_ParamLimits

0xc3cf,	// (0x0005cf29) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0005fc8c) find_pinb_pane_t_ParamLimits

0xc112,	// (0x0005cc6c) main_call3_pane

0x517c,	// (0x00055cd6) cale_month_day_heading_pane_t1_ParamLimits

0x51da,	// (0x00055d34) cale_month_day_heading_pane_t2_ParamLimits

0x523f,	// (0x00055d99) cale_month_day_heading_pane_t3_ParamLimits

0x52a4,	// (0x00055dfe) cale_month_day_heading_pane_t4_ParamLimits

0x5309,	// (0x00055e63) cale_month_day_heading_pane_t5_ParamLimits

0x536e,	// (0x00055ec8) cale_month_day_heading_pane_t6_ParamLimits

0x53db,	// (0x00055f35) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0005fe10) cale_month_day_heading_pane_t_ParamLimits

0xd5ed,	// (0x0005e147) smil_status_volume_pane

0x6309,	// (0x00056e63) postcard_address_pane_ParamLimits

0x6309,	// (0x00056e63) postcard_address_pane

0x6315,	// (0x00056e6f) postcard_message_pane_ParamLimits

0x6315,	// (0x00056e6f) postcard_message_pane

0x671d,	// (0x00057277) call2_cli_visual_pane_t1_ParamLimits

0x671d,	// (0x00057277) call2_cli_visual_pane_t1

0x6d53,	// (0x000578ad) postcard_message_pane_t1_ParamLimits

0x6d53,	// (0x000578ad) postcard_message_pane_t1

0x6d3c,	// (0x00057896) postcard_address_pane_t1_ParamLimits

0x6d3c,	// (0x00057896) postcard_address_pane_t1

0x6d2d,	// (0x00057887) popup_call3_audio_in_window_ParamLimits

0x6d2d,	// (0x00057887) popup_call3_audio_in_window

0x6c15,	// (0x0005776f) bg_popup_call3_in_pane_ParamLimits

0x6c15,	// (0x0005776f) bg_popup_call3_in_pane

0x6c73,	// (0x000577cd) popup_call3_audio_in_window_g1_ParamLimits

0x6c73,	// (0x000577cd) popup_call3_audio_in_window_g1

0x6c8b,	// (0x000577e5) popup_call3_audio_in_window_g2_ParamLimits

0x6c8b,	// (0x000577e5) popup_call3_audio_in_window_g2

0x6ca3,	// (0x000577fd) popup_call3_audio_in_window_g3_ParamLimits

0x6ca3,	// (0x000577fd) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0006017c) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0006017c) popup_call3_audio_in_window_g

0x6ccb,	// (0x00057825) popup_call3_audio_in_window_t1_ParamLimits

0x6ccb,	// (0x00057825) popup_call3_audio_in_window_t1

0x6cf3,	// (0x0005784d) popup_call3_audio_in_window_t2_ParamLimits

0x6cf3,	// (0x0005784d) popup_call3_audio_in_window_t2

0x6d1b,	// (0x00057875) popup_call3_audio_in_window_t3_ParamLimits

0x6d1b,	// (0x00057875) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00060185) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00060185) popup_call3_audio_in_window_t

0xdbdf,	// (0x0005e739) bg_popup_call3_rect_pane

0xee37,	// (0x0005f991) bg_popup_call3_rect_pane_g1

0xc577,	// (0x0005d0d1) bg_popup_call3_rect_pane_g2

0xee3f,	// (0x0005f999) bg_popup_call3_rect_pane_g3

0xee47,	// (0x0005f9a1) bg_popup_call3_rect_pane_g4

0xee4f,	// (0x0005f9a9) bg_popup_call3_rect_pane_g5

0xee57,	// (0x0005f9b1) bg_popup_call3_rect_pane_g6

0xee5f,	// (0x0005f9b9) bg_popup_call3_rect_pane_g7

0x5eca,	// (0x00056a24) mup_visualizer_osc_pane

0xdcac,	// (0x0005e806) mup_visualizer_spec_pane

0x6c35,	// (0x0005778f) call3_video_qcif_pane_ParamLimits

0x6c35,	// (0x0005778f) call3_video_qcif_pane

0x6c45,	// (0x0005779f) call3_video_qcif_uncrop_pane_ParamLimits

0x6c45,	// (0x0005779f) call3_video_qcif_uncrop_pane

0x6c51,	// (0x000577ab) call3_video_subqcif_pane_ParamLimits

0x6c51,	// (0x000577ab) call3_video_subqcif_pane

0x6c63,	// (0x000577bd) call3_video_subqcif_uncrop_pane_ParamLimits

0x6c63,	// (0x000577bd) call3_video_subqcif_uncrop_pane

0x6cbb,	// (0x00057815) popup_call3_audio_in_window_g4_ParamLimits

0x6cbb,	// (0x00057815) popup_call3_audio_in_window_g4

0x6be0,	// (0x0005773a) mup_spec_half_pane

0x6be9,	// (0x00057743) mup_spec_half_pane_cp

0xf098,	// (0x0005fbf2) mup_osc_middle_pane

0xf0a1,	// (0x0005fbfb) mup_visualizer_osc_pane_g1

0x6bc1,	// (0x0005771b) mup_spec_bar_pane_ParamLimits

0x6bc1,	// (0x0005771b) mup_spec_bar_pane

0xf085,	// (0x0005fbdf) mup_spec_bar_pane_g1

0xf08f,	// (0x0005fbe9) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00060170) mup_spec_bar_pane_g

0x4027,	// (0x00054b81) aid_cale_week_size_cell_pane_ParamLimits

0x403a,	// (0x00054b94) bg_cale_heading_pane_ParamLimits

0xc5ab,	// (0x0005d105) bg_cale_pane_cp01_ParamLimits

0x4056,	// (0x00054bb0) cale_week_corner_pane_ParamLimits

0x4067,	// (0x00054bc1) cale_week_day_heading_pane_ParamLimits

0x4083,	// (0x00054bdd) cale_week_scroll_pane_g1_ParamLimits

0x409c,	// (0x00054bf6) cale_week_scroll_pane_g2_ParamLimits

0x40ad,	// (0x00054c07) cale_week_scroll_pane_g3_ParamLimits

0x40be,	// (0x00054c18) cale_week_scroll_pane_g4_ParamLimits

0x40cf,	// (0x00054c29) cale_week_scroll_pane_g5_ParamLimits

0x40e0,	// (0x00054c3a) cale_week_scroll_pane_g6_ParamLimits

0x40f1,	// (0x00054c4b) cale_week_scroll_pane_g7_ParamLimits

0x4104,	// (0x00054c5e) cale_week_scroll_pane_g8_ParamLimits

0x4117,	// (0x00054c71) cale_week_scroll_pane_g9_ParamLimits

0x4128,	// (0x00054c82) cale_week_scroll_pane_g10_ParamLimits

0x4139,	// (0x00054c93) cale_week_scroll_pane_g11_ParamLimits

0x414a,	// (0x00054ca4) cale_week_scroll_pane_g12_ParamLimits

0x4163,	// (0x00054cbd) cale_week_scroll_pane_g13_ParamLimits

0x417c,	// (0x00054cd6) cale_week_scroll_pane_g14_ParamLimits

0x4195,	// (0x00054cef) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0005fd18) cale_week_scroll_pane_g_ParamLimits

0x41ae,	// (0x00054d08) cale_week_time_pane_ParamLimits

0x41c1,	// (0x00054d1b) grid_cale_week_pane_ParamLimits

0xc5c4,	// (0x0005d11e) listscroll_cale_week_pane_t1

0x41de,	// (0x00054d38) scroll_pane_cp08_ParamLimits

0x4db5,	// (0x0005590f) cale_month_corner_pane_ParamLimits

0xd599,	// (0x0005e0f3) cale_month_pane_t1

0x512b,	// (0x00055c85) cale_month_week_pane_ParamLimits

0xdc02,	// (0x0005e75c) popup_call_status_window_g1_ParamLimits

0x5894,	// (0x000563ee) popup_call_status_window_g2_ParamLimits

0x58a0,	// (0x000563fa) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0005fec0) popup_call_status_window_g_ParamLimits

0xd952,	// (0x0005e4ac) aid_call2_pane

0x616e,	// (0x00056cc8) msg_header_pane_g1

0x6309,	// (0x00056e63) postcard_address2_pane_ParamLimits

0x6309,	// (0x00056e63) postcard_address2_pane

0x6315,	// (0x00056e6f) postcard_message2_pane_ParamLimits

0x6315,	// (0x00056e6f) postcard_message2_pane

0x6b4f,	// (0x000576a9) message2_row_pane_ParamLimits

0x6b4f,	// (0x000576a9) message2_row_pane

0x6b6c,	// (0x000576c6) address2_row_pane_ParamLimits

0x6b6c,	// (0x000576c6) address2_row_pane

0xf053,	// (0x0005fbad) postcard_message2_row_pane_g1

0xf05b,	// (0x0005fbb5) postcard_message2_row_pane_t1

0xf053,	// (0x0005fbad) address2_row_pane_g1

0xf05b,	// (0x0005fbb5) address2_row_pane_t1

0x43fa,	// (0x00054f54) aid_size_cell_vorec

0xc112,	// (0x0005cc6c) main_rss_pane

0x6b7f,	// (0x000576d9) rss_list_single_pane_ParamLimits

0x6b7f,	// (0x000576d9) rss_list_single_pane

0xf069,	// (0x0005fbc3) rss_list_single_pane_t1

0xf077,	// (0x0005fbd1) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0006016b) rss_list_single_pane_t

0xc112,	// (0x0005cc6c) main_camera2_pane

0xc112,	// (0x0005cc6c) main_video2_pane

0x6db7,	// (0x00057911) cams_zoom_pane_cp2_ParamLimits

0x6db7,	// (0x00057911) cams_zoom_pane_cp2

0x6dc3,	// (0x0005791d) image2_vga_pane_ParamLimits

0x6dc3,	// (0x0005791d) image2_vga_pane

0x6dd2,	// (0x0005792c) main_camera2_pane_g1_ParamLimits

0x6dd2,	// (0x0005792c) main_camera2_pane_g1

0x6dde,	// (0x00057938) main_camera2_pane_g2_ParamLimits

0x6dde,	// (0x00057938) main_camera2_pane_g2

0x6dea,	// (0x00057944) main_camera2_pane_g3_ParamLimits

0x6dea,	// (0x00057944) main_camera2_pane_g3

0x6df6,	// (0x00057950) main_camera2_pane_g4_ParamLimits

0x6df6,	// (0x00057950) main_camera2_pane_g4

0x6e02,	// (0x0005795c) main_camera2_pane_g5_ParamLimits

0x6e02,	// (0x0005795c) main_camera2_pane_g5

0x6e0e,	// (0x00057968) main_camera2_pane_g6_ParamLimits

0x6e0e,	// (0x00057968) main_camera2_pane_g6

0x6e1a,	// (0x00057974) main_camera2_pane_g7_ParamLimits

0x6e1a,	// (0x00057974) main_camera2_pane_g7

0x6e26,	// (0x00057980) main_camera2_pane_g8_ParamLimits

0x6e26,	// (0x00057980) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0006018c) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0006018c) main_camera2_pane_g

0x6e3e,	// (0x00057998) main_camera2_pane_t1_ParamLimits

0x6e3e,	// (0x00057998) main_camera2_pane_t1

0x6e50,	// (0x000579aa) main_camera2_pane_t2_ParamLimits

0x6e50,	// (0x000579aa) main_camera2_pane_t2

0x6e62,	// (0x000579bc) main_camera2_pane_t3_ParamLimits

0x6e62,	// (0x000579bc) main_camera2_pane_t3

0x6e74,	// (0x000579ce) main_camera2_pane_t4_ParamLimits

0x6e74,	// (0x000579ce) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0006019f) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0006019f) main_camera2_pane_t

0x6ed6,	// (0x00057a30) cams_zoom_pane_cp4_ParamLimits

0x6ed6,	// (0x00057a30) cams_zoom_pane_cp4

0x6ee6,	// (0x00057a40) image2_cif_pane_ParamLimits

0x6ee6,	// (0x00057a40) image2_cif_pane

0x6efb,	// (0x00057a55) image2_subqcif_pane_ParamLimits

0x6efb,	// (0x00057a55) image2_subqcif_pane

0x6f0a,	// (0x00057a64) main_video2_pane_g1_ParamLimits

0x6f0a,	// (0x00057a64) main_video2_pane_g1

0x6f1c,	// (0x00057a76) main_video2_pane_g2_ParamLimits

0x6f1c,	// (0x00057a76) main_video2_pane_g2

0x6f2c,	// (0x00057a86) main_video2_pane_g3_ParamLimits

0x6f2c,	// (0x00057a86) main_video2_pane_g3

0x6f3c,	// (0x00057a96) main_video2_pane_g4_ParamLimits

0x6f3c,	// (0x00057a96) main_video2_pane_g4

0x6f4c,	// (0x00057aa6) main_video2_pane_g5_ParamLimits

0x6f4c,	// (0x00057aa6) main_video2_pane_g5

0x6f5c,	// (0x00057ab6) main_video2_pane_g6_ParamLimits

0x6f5c,	// (0x00057ab6) main_video2_pane_g6

0x0005,

0xf654,	// (0x000601ae) main_video2_pane_g_ParamLimits

0xf654,	// (0x000601ae) main_video2_pane_g

0x6f6e,	// (0x00057ac8) main_video2_pane_t1_ParamLimits

0x6f6e,	// (0x00057ac8) main_video2_pane_t1

0x6f88,	// (0x00057ae2) main_video2_pane_t2_ParamLimits

0x6f88,	// (0x00057ae2) main_video2_pane_t2

0x6fae,	// (0x00057b08) main_video2_pane_t3_ParamLimits

0x6fae,	// (0x00057b08) main_video2_pane_t3

0x0002,

0xf661,	// (0x000601bb) main_video2_pane_t_ParamLimits

0xf661,	// (0x000601bb) main_video2_pane_t

0x6872,	// (0x000573cc) call_muted_g2

0x0001,

0xf603,	// (0x0006015d) call_muted_g

0xc112,	// (0x0005cc6c) main_mup2_pane

0x0a0a,	// (0x00051564) main_mup2_pane_g1_ParamLimits

0x0a0a,	// (0x00051564) main_mup2_pane_g1

0x6fd4,	// (0x00057b2e) main_mup2_pane_g2_ParamLimits

0x6fd4,	// (0x00057b2e) main_mup2_pane_g2

0x7256,	// (0x00057db0) main_mup_pane_g13_cp1

0x725e,	// (0x00057db8) mup_volume_pane_cp1

0x6ff4,	// (0x00057b4e) main_mup2_pane_g4_ParamLimits

0x6ff4,	// (0x00057b4e) main_mup2_pane_g4

0x7009,	// (0x00057b63) main_mup2_pane_g5_ParamLimits

0x7009,	// (0x00057b63) main_mup2_pane_g5

0x701e,	// (0x00057b78) main_mup2_pane_g6_ParamLimits

0x701e,	// (0x00057b78) main_mup2_pane_g6

0x7033,	// (0x00057b8d) main_mup2_pane_g7_ParamLimits

0x7033,	// (0x00057b8d) main_mup2_pane_g7

0x0006,

0xf668,	// (0x000601c2) main_mup2_pane_g_ParamLimits

0xf668,	// (0x000601c2) main_mup2_pane_g

0x704f,	// (0x00057ba9) main_mup2_pane_t1_ParamLimits

0x704f,	// (0x00057ba9) main_mup2_pane_t1

0x7066,	// (0x00057bc0) main_mup2_pane_t2_ParamLimits

0x7066,	// (0x00057bc0) main_mup2_pane_t2

0x707d,	// (0x00057bd7) main_mup2_pane_t3_ParamLimits

0x707d,	// (0x00057bd7) main_mup2_pane_t3

0x7094,	// (0x00057bee) main_mup2_pane_t4_ParamLimits

0x7094,	// (0x00057bee) main_mup2_pane_t4

0x70ae,	// (0x00057c08) main_mup2_pane_t5_ParamLimits

0x70ae,	// (0x00057c08) main_mup2_pane_t5

0x70c8,	// (0x00057c22) main_mup2_pane_t6_ParamLimits

0x70c8,	// (0x00057c22) main_mup2_pane_t6

0x0005,

0xf677,	// (0x000601d1) main_mup2_pane_t_ParamLimits

0xf677,	// (0x000601d1) main_mup2_pane_t

0x7100,	// (0x00057c5a) mup2_visualizer_pane_ParamLimits

0x7100,	// (0x00057c5a) mup2_visualizer_pane

0x7136,	// (0x00057c90) mup_progress_pane_cp_ParamLimits

0x7136,	// (0x00057c90) mup_progress_pane_cp

0x7241,	// (0x00057d9b) mup_volume_pane_cp_ParamLimits

0x7241,	// (0x00057d9b) mup_volume_pane_cp

0x714d,	// (0x00057ca7) mup2_visualizer_pane_g1_ParamLimits

0x714d,	// (0x00057ca7) mup2_visualizer_pane_g1

0x09dc,	// (0x00051536) mup2_visualizer_pane_g2_ParamLimits

0x09dc,	// (0x00051536) mup2_visualizer_pane_g2

0x7162,	// (0x00057cbc) mup2_visualizer_pane_g3_ParamLimits

0x7162,	// (0x00057cbc) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x000601de) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x000601de) mup2_visualizer_pane_g

0xdf09,	// (0x0005ea63) aid_size_cell_fmradio

0x6988,	// (0x000574e2) aid_height_parent_landcape

0xd401,	// (0x0005df5b) wml_content_pane_cp

0xd409,	// (0x0005df63) wml_tabs_pane

0xd412,	// (0x0005df6c) popup_wml_miniature_window

0xd41a,	// (0x0005df74) scroll_pane_cp021

0xd42e,	// (0x0005df88) wml_content_pane_comp8

0xc112,	// (0x0005cc6c) bg_popup_sub_pane_cp05

0x09fa,	// (0x00051554) popup_wml_miniature_window_g1

0x0a02,	// (0x0005155c) wml_miniature_view_pane

0x7170,	// (0x00057cca) aid_size_wml_view

0x7178,	// (0x00057cd2) wml_miniature_view_pane_g1

0x7181,	// (0x00057cdb) wml_miniature_view_pane_g2

0x718a,	// (0x00057ce4) wml_miniature_view_pane_g3

0x7192,	// (0x00057cec) wml_miniature_view_pane_g4

0x719a,	// (0x00057cf4) wml_miniature_view_pane_g5

0x71a2,	// (0x00057cfc) wml_miniature_view_pane_g6

0x71aa,	// (0x00057d04) wml_miniature_view_pane_g7

0x71b2,	// (0x00057d0c) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x000601e5) wml_miniature_view_pane_g

0x0a0a,	// (0x00051564) background_graphic_ParamLimits

0x0a0a,	// (0x00051564) background_graphic

0x0a16,	// (0x00051570) wml_tabs_2_pane

0x0a1f,	// (0x00051579) wml_tabs_3_pane_ParamLimits

0x0a1f,	// (0x00051579) wml_tabs_3_pane

0x0a31,	// (0x0005158b) wml_tabs_4_pane_ParamLimits

0x0a31,	// (0x0005158b) wml_tabs_4_pane

0x0a47,	// (0x000515a1) wml_tabs_5_pane_ParamLimits

0x0a47,	// (0x000515a1) wml_tabs_5_pane

0x0a61,	// (0x000515bb) wml_tabs_pane_g2_ParamLimits

0x0a61,	// (0x000515bb) wml_tabs_pane_g2

0x0a75,	// (0x000515cf) wml_tabs_pane_g3_ParamLimits

0x0a75,	// (0x000515cf) wml_tabs_pane_g3

0x71ba,	// (0x00057d14) wml_tabs_2_active_pane_ParamLimits

0x71ba,	// (0x00057d14) wml_tabs_2_active_pane

0x71ca,	// (0x00057d24) wml_tabs_2_passive_pane_ParamLimits

0x71ca,	// (0x00057d24) wml_tabs_2_passive_pane

0x71da,	// (0x00057d34) wml_tabs_3_active_pane_cp_ParamLimits

0x71da,	// (0x00057d34) wml_tabs_3_active_pane_cp

0x71eb,	// (0x00057d45) wml_tabs_3_passive_pane_ParamLimits

0x71eb,	// (0x00057d45) wml_tabs_3_passive_pane

0x71fc,	// (0x00057d56) wml_tabs_3_passive_pane_cp_ParamLimits

0x71fc,	// (0x00057d56) wml_tabs_3_passive_pane_cp

0x720d,	// (0x00057d67) tabs_4_active_pane

0x7215,	// (0x00057d6f) tabs_4_passive_pane

0x721d,	// (0x00057d77) tabs_4_passive_pane_cp

0x7225,	// (0x00057d7f) tabs_4_passive_pane_cp2

0xeebf,	// (0x0005fa19) aid_height_text

0x5e93,	// (0x000569ed) mup_volume_cont_pane_ParamLimits

0x5e93,	// (0x000569ed) mup_volume_cont_pane

0x3b55,	// (0x000546af) aid_size_cell_pinb

0xc39d,	// (0x0005cef7) aid_size_list_pinb

0x711f,	// (0x00057c79) mup2_volume_cont_pane_ParamLimits

0x711f,	// (0x00057c79) mup2_volume_cont_pane

0x722d,	// (0x00057d87) mup2_volume_cont_pane_g1_ParamLimits

0x722d,	// (0x00057d87) mup2_volume_cont_pane_g1

0x3780,	// (0x000542da) aid_size_cell_touch_ParamLimits

0x3780,	// (0x000542da) aid_size_cell_touch

0x3a35,	// (0x0005458f) touch_pane_ParamLimits

0x3a35,	// (0x0005458f) touch_pane

0x3a2b,	// (0x00054585) main_rss2_pane

0x0a92,	// (0x000515ec) listscroll_rss2_pane

0x0a9b,	// (0x000515f5) rss2_navigation_pane

0x0aa3,	// (0x000515fd) list_rss2_pane

0xda92,	// (0x0005e5ec) scroll_pane_cp22

0x0aab,	// (0x00051605) rss2_navigation_pane_g1

0x0ab4,	// (0x0005160e) rss2_navigation_pane_g2

0x0abc,	// (0x00051616) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x000601f6) rss2_navigation_pane_g

0x0ac4,	// (0x0005161e) rss2_navigation_pane_t1

0x7266,	// (0x00057dc0) rss2_list_single_pane_ParamLimits

0x7266,	// (0x00057dc0) rss2_list_single_pane

0x0ad2,	// (0x0005162c) rss2_list_single_pane_t2

0x0ae0,	// (0x0005163a) rss2_list_single_pane_t3_ParamLimits

0x0ae0,	// (0x0005163a) rss2_list_single_pane_t3

0x0afd,	// (0x00051657) rss2_list_single_pane_t4

0x55eb,	// (0x00056145) smil_status_pane_g1

0x699f,	// (0x000574f9) main_image2_pane_ParamLimits

0x699f,	// (0x000574f9) main_image2_pane

0x6e32,	// (0x0005798c) main_camera2_pane_g9_ParamLimits

0x6e32,	// (0x0005798c) main_camera2_pane_g9

0x6e86,	// (0x000579e0) main_camera2_pane_t5_ParamLimits

0x6e86,	// (0x000579e0) main_camera2_pane_t5

0x6e98,	// (0x000579f2) main_camera2_pane_t6_ParamLimits

0x6e98,	// (0x000579f2) main_camera2_pane_t6

0x72a2,	// (0x00057dfc) main_image2_pane_g1_ParamLimits

0x72a2,	// (0x00057dfc) main_image2_pane_g1

0x64ea,	// (0x00057044) smil2_video_pane_ParamLimits

0x64ea,	// (0x00057044) smil2_video_pane

0x3691,	// (0x000541eb) aid_zoom_text_primary_cp

0x39d0,	// (0x0005452a) popup_preview_fixed_window

0xd36a,	// (0x0005dec4) im_reading_pane_g1

0x6d7c,	// (0x000578d6) cams2_bc_adjust_pane_cp_ParamLimits

0x6d7c,	// (0x000578d6) cams2_bc_adjust_pane_cp

0x6ec8,	// (0x00057a22) cams2_bc_adjust_pane_ParamLimits

0x6ec8,	// (0x00057a22) cams2_bc_adjust_pane

0x1dd8,	// (0x00052932) cams2_bc_adjust_pane_g1

0x72ae,	// (0x00057e08) cams2_slider_pane

0x72b7,	// (0x00057e11) cams2_slider_pane_g1

0x72c0,	// (0x00057e1a) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x000601fd) cams2_slider_pane_g

0x3c34,	// (0x0005478e) calc_display_pane_ParamLimits

0x3c52,	// (0x000547ac) calc_paper_pane_ParamLimits

0x3c6e,	// (0x000547c8) grid_calc_pane_ParamLimits

0x58fe,	// (0x00056458) popup_clock_digital_window_t1_ParamLimits

0xdea6,	// (0x0005ea00) main_image_pane_t1

0x3c1a,	// (0x00054774) aid_size_cell_calc_ParamLimits

0x3c1a,	// (0x00054774) aid_size_cell_calc

0x69d0,	// (0x0005752a) popup_blid_sat_info2_window_ParamLimits

0x69d0,	// (0x0005752a) popup_blid_sat_info2_window

0x0b13,	// (0x0005166d) aid_size_cell_blid

0x0b1b,	// (0x00051675) bg_popup_window_pane_cp07

0x0b3e,	// (0x00051698) grid_popup_blid_pane

0x0b48,	// (0x000516a2) heading_pane_cp05_ParamLimits

0x0b48,	// (0x000516a2) heading_pane_cp05

0x0c12,	// (0x0005176c) cell_popup_blid_pane_ParamLimits

0x0c12,	// (0x0005176c) cell_popup_blid_pane

0x0c38,	// (0x00051792) cell_popup_blid_pane_g1

0x0c40,	// (0x0005179a) cell_popup_blid_pane_t1

0x70e5,	// (0x00057c3f) mup2_indicator_pane_ParamLimits

0x70e5,	// (0x00057c3f) mup2_indicator_pane

0xdbdf,	// (0x0005e739) mup2_visualizer_osc_pane

0x09e8,	// (0x00051542) mup2_visualizer_spec_pane_ParamLimits

0x09e8,	// (0x00051542) mup2_visualizer_spec_pane

0x72da,	// (0x00057e34) mup2_spec_half_pane

0x72e3,	// (0x00057e3d) mup2_spec_half_pane_cp

0x72ed,	// (0x00057e47) mup2_spec_bar_pane_ParamLimits

0x72ed,	// (0x00057e47) mup2_spec_bar_pane

0xf085,	// (0x0005fbdf) mup2_spec_bar_pane_g1

0xf08f,	// (0x0005fbe9) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00060170) mup2_spec_bar_pane_g

0x730c,	// (0x00057e66) mup2_osc_middle_pane

0xf0a1,	// (0x0005fbfb) mup2_visualizer_osc_pane_g1

0xbd21,	// (0x0005c87b) popup_number_entry_window_t1_ParamLimits

0xbd34,	// (0x0005c88e) popup_number_entry_window_t2_ParamLimits

0xbd46,	// (0x0005c8a0) popup_number_entry_window_t3_ParamLimits

0x3a8c,	// (0x000545e6) popup_number_entry_window_t5_ParamLimits

0x3a8c,	// (0x000545e6) popup_number_entry_window_t5

0xf0d8,	// (0x0005fc32) popup_number_entry_window_t_ParamLimits

0xbd58,	// (0x0005c8b2) text_title_cp2_ParamLimits

0x61d1,	// (0x00056d2b) aid_hotspot_pointer_text2_pane

0x626b,	// (0x00056dc5) main_viewer_pane_g9_ParamLimits

0x626b,	// (0x00056dc5) main_viewer_pane_g9

0xd599,	// (0x0005e0f3) cale_month_pane_t1_ParamLimits

0xd600,	// (0x0005e15a) bg_cale_pane_ParamLimits

0xd618,	// (0x0005e172) list_cale_pane_ParamLimits

0xc5c4,	// (0x0005d11e) listscroll_cale_day_pane_t1

0xd629,	// (0x0005e183) scroll_pane_cp09_ParamLimits

0x5ed2,	// (0x00056a2c) main_mup_eq_pane_t1_ParamLimits

0x5ed2,	// (0x00056a2c) main_mup_eq_pane_t1

0x5eec,	// (0x00056a46) main_mup_eq_pane_t2_ParamLimits

0x5eec,	// (0x00056a46) main_mup_eq_pane_t2

0x5f04,	// (0x00056a5e) main_mup_eq_pane_t3_ParamLimits

0x5f04,	// (0x00056a5e) main_mup_eq_pane_t3

0x5f1c,	// (0x00056a76) main_mup_eq_pane_t4_ParamLimits

0x5f1c,	// (0x00056a76) main_mup_eq_pane_t4

0x5f34,	// (0x00056a8e) main_mup_eq_pane_t5_ParamLimits

0x5f34,	// (0x00056a8e) main_mup_eq_pane_t5

0x5f4c,	// (0x00056aa6) main_mup_eq_pane_t6_ParamLimits

0x5f4c,	// (0x00056aa6) main_mup_eq_pane_t6

0x5f60,	// (0x00056aba) main_mup_eq_pane_t7_ParamLimits

0x5f60,	// (0x00056aba) main_mup_eq_pane_t7

0x5f74,	// (0x00056ace) main_mup_eq_pane_t8_ParamLimits

0x5f74,	// (0x00056ace) main_mup_eq_pane_t8

0x5f8a,	// (0x00056ae4) main_mup_eq_pane_t9_ParamLimits

0x5f8a,	// (0x00056ae4) main_mup_eq_pane_t9

0x5fa2,	// (0x00056afc) main_mup_eq_pane_t10_ParamLimits

0x5fa2,	// (0x00056afc) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0005ffbf) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0005ffbf) main_mup_eq_pane_t

0x605f,	// (0x00056bb9) mup_equalizer_pane_cp5_ParamLimits

0x6075,	// (0x00056bcf) mup_equalizer_pane_cp6_ParamLimits

0x608d,	// (0x00056be7) mup_equalizer_pane_cp7_ParamLimits

0x3a2b,	// (0x00054585) main_gallery_pane

0xf0aa,	// (0x0005fc04) smil2_volume_pane

0xf0b2,	// (0x0005fc0c) smil_status_volume_pane_g1_ParamLimits

0xf0c5,	// (0x0005fc1f) smil_status_volume_pane_g2_ParamLimits

0x6bf3,	// (0x0005774d) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00060175) smil_status_volume_pane_g_ParamLimits

0x0b1b,	// (0x00051675) bg_popup_window_pane_cp07_ParamLimits

0x0b29,	// (0x00051683) blid_firmament_pane

0x7315,	// (0x00057e6f) aid_size_cell_gallery_ParamLimits

0x7315,	// (0x00057e6f) aid_size_cell_gallery

0x7323,	// (0x00057e7d) grid_gallery_pane_ParamLimits

0x7323,	// (0x00057e7d) grid_gallery_pane

0x7333,	// (0x00057e8d) cell_gallery_pane_ParamLimits

0x7333,	// (0x00057e8d) cell_gallery_pane

0x0c4e,	// (0x000517a8) bg_cell_gallery_focus_pane_ParamLimits

0x0c4e,	// (0x000517a8) bg_cell_gallery_focus_pane

0x0c60,	// (0x000517ba) cell_gallery_pane_g1_ParamLimits

0x0c60,	// (0x000517ba) cell_gallery_pane_g1

0x7381,	// (0x00057edb) cell_gallery_pane_g2_ParamLimits

0x7381,	// (0x00057edb) cell_gallery_pane_g2

0x738e,	// (0x00057ee8) cell_gallery_pane_g3_ParamLimits

0x738e,	// (0x00057ee8) cell_gallery_pane_g3

0x0c6c,	// (0x000517c6) cell_gallery_pane_g4_ParamLimits

0x0c6c,	// (0x000517c6) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00060223) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00060223) cell_gallery_pane_g

0x0c78,	// (0x000517d2) bg_cell_gallery_focus_pane_g1

0x0c80,	// (0x000517da) bg_cell_gallery_focus_pane_g2

0x0c88,	// (0x000517e2) bg_cell_gallery_focus_pane_g3

0x0c90,	// (0x000517ea) bg_cell_gallery_focus_pane_g4

0x0c98,	// (0x000517f2) bg_cell_gallery_focus_pane_g5

0x0ca0,	// (0x000517fa) bg_cell_gallery_focus_pane_g6

0x0ca8,	// (0x00051802) bg_cell_gallery_focus_pane_g7

0x0cb0,	// (0x0005180a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0006022c) bg_cell_gallery_focus_pane_g

0x0cb8,	// (0x00051812) aid_firma_cardinal

0x0ccc,	// (0x00051826) blid_firmament_pane_t1

0x0ce3,	// (0x0005183d) blid_firmament_pane_t2

0x0cfa,	// (0x00051854) blid_firmament_pane_t3

0x0d11,	// (0x0005186b) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0006023d) blid_firmament_pane_t

0x0d28,	// (0x00051882) blid_sat_info_pane

0x0d38,	// (0x00051892) blid_sat_info_pane_g1

0x0d38,	// (0x00051892) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00060246) blid_sat_info_pane_g

0x0d42,	// (0x0005189c) blid_sat_info_pane_t1

0x0d50,	// (0x000518aa) smil2_volume_content_pane

0x0d59,	// (0x000518b3) smil2_volume_pane_g1

0x0d61,	// (0x000518bb) smil2_volume_content_pane_g1

0x0d6a,	// (0x000518c4) smil2_volume_content_pane_g2

0x0d73,	// (0x000518cd) smil2_volume_content_pane_g3

0x0d7c,	// (0x000518d6) smil2_volume_content_pane_g4

0x0d85,	// (0x000518df) smil2_volume_content_pane_g5

0x0d8e,	// (0x000518e8) smil2_volume_content_pane_g6

0x0d97,	// (0x000518f1) smil2_volume_content_pane_g7

0x0da0,	// (0x000518fa) smil2_volume_content_pane_g8

0x0da9,	// (0x00051903) smil2_volume_content_pane_g9

0x0db2,	// (0x0005190c) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0006024b) smil2_volume_content_pane_g

0x4248,	// (0x00054da2) cale_week_day_heading_pane_t1_ParamLimits

0x425c,	// (0x00054db6) cale_week_day_heading_pane_t2_ParamLimits

0x4270,	// (0x00054dca) cale_week_day_heading_pane_t3_ParamLimits

0x4284,	// (0x00054dde) cale_week_day_heading_pane_t4_ParamLimits

0x4298,	// (0x00054df2) cale_week_day_heading_pane_t5_ParamLimits

0x42ac,	// (0x00054e06) cale_week_day_heading_pane_t6_ParamLimits

0x42c0,	// (0x00054e1a) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0005fd37) cale_week_day_heading_pane_t_ParamLimits

0xc5d6,	// (0x0005d130) bg_cale_side_pane_ParamLimits

0x42d4,	// (0x00054e2e) cale_week_time_pane_t1_ParamLimits

0x42ec,	// (0x00054e46) cale_week_time_pane_t2_ParamLimits

0x4304,	// (0x00054e5e) cale_week_time_pane_t3_ParamLimits

0x431c,	// (0x00054e76) cale_week_time_pane_t4_ParamLimits

0x4334,	// (0x00054e8e) cale_week_time_pane_t5_ParamLimits

0x434c,	// (0x00054ea6) cale_week_time_pane_t6_ParamLimits

0x436c,	// (0x00054ec6) cale_week_time_pane_t7_ParamLimits

0x438c,	// (0x00054ee6) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0005fd46) cale_week_time_pane_t_ParamLimits

0x43ac,	// (0x00054f06) cell_cale_week_pane_g2_ParamLimits

0xc5d6,	// (0x0005d130) bg_cale_side_pane_cp01_ParamLimits

0x5450,	// (0x00055faa) cale_month_week_pane_t1_ParamLimits

0x5467,	// (0x00055fc1) cale_month_week_pane_t2_ParamLimits

0x547e,	// (0x00055fd8) cale_month_week_pane_t3_ParamLimits

0x5495,	// (0x00055fef) cale_month_week_pane_t4_ParamLimits

0x54ac,	// (0x00056006) cale_month_week_pane_t5_ParamLimits

0x54cb,	// (0x00056025) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0005fe1f) cale_month_week_pane_t_ParamLimits

0x55b8,	// (0x00056112) cell_cale_month_pane_g1_ParamLimits

0x3a2b,	// (0x00054585) main_cale_event_viewer_pane

0xbcf7,	// (0x0005c851) listscroll_cale_event_viewer_pane

0x0dbb,	// (0x00051915) list_cale_ev_pane

0x0eaf,	// (0x00051a09) scroll_pane_cp023

0x0ebb,	// (0x00051a15) field_cale_ev_pane_ParamLimits

0x0ebb,	// (0x00051a15) field_cale_ev_pane

0x0ed5,	// (0x00051a2f) field_cale_ev_content_pane_ParamLimits

0x0ed5,	// (0x00051a2f) field_cale_ev_content_pane

0x0ee1,	// (0x00051a3b) field_cale_ev_pane_g1_ParamLimits

0x0ee1,	// (0x00051a3b) field_cale_ev_pane_g1

0x0eed,	// (0x00051a47) field_cale_ev_pane_g2_ParamLimits

0x0eed,	// (0x00051a47) field_cale_ev_pane_g2

0x0f05,	// (0x00051a5f) field_cale_ev_pane_g3_ParamLimits

0x0f05,	// (0x00051a5f) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00060260) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00060260) field_cale_ev_pane_g

0x0f1d,	// (0x00051a77) field_cale_ev_pane_t1_ParamLimits

0x0f1d,	// (0x00051a77) field_cale_ev_pane_t1

0x0f34,	// (0x00051a8e) field_cale_ev_content_pane_t1_ParamLimits

0x0f34,	// (0x00051a8e) field_cale_ev_content_pane_t1

0xdd56,	// (0x0005e8b0) bg_button_pane_cp01

0xc484,	// (0x0005cfde) listscroll_cale_week_pane_ParamLimits

0x401d,	// (0x00054b77) popup_toolbar_window_cp01

0xc5c4,	// (0x0005d11e) listscroll_cale_week_pane_t1_ParamLimits

0xc484,	// (0x0005cfde) listscroll_cale_day_pane_ParamLimits

0x401d,	// (0x00054b77) popup_toolbar_window_cp02

0xc5c4,	// (0x0005d11e) listscroll_cale_day_pane_t1_ParamLimits

0xc484,	// (0x0005cfde) main_cale_month_pane_ParamLimits

0x6acb,	// (0x00057625) popup_toolbar_window_cp03_ParamLimits

0x6acb,	// (0x00057625) popup_toolbar_window_cp03

0x63fc,	// (0x00056f56) main_image_pane_g2_ParamLimits

0x63fc,	// (0x00056f56) main_image_pane_g2

0x6408,	// (0x00056f62) main_image_pane_g3_ParamLimits

0x6408,	// (0x00056f62) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00060051) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00060051) main_image_pane_g

0xdea6,	// (0x0005ea00) main_image_pane_t1_ParamLimits

0x6414,	// (0x00056f6e) main_image_pane_t2_ParamLimits

0x6414,	// (0x00056f6e) main_image_pane_t2

0x6426,	// (0x00056f80) main_image_pane_t3_ParamLimits

0x6426,	// (0x00056f80) main_image_pane_t3

0x6438,	// (0x00056f92) main_image_pane_t4_ParamLimits

0x6438,	// (0x00056f92) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00060058) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00060058) main_image_pane_t

0x644a,	// (0x00056fa4) popup_image_details_window_cp01

0x6454,	// (0x00056fae) popup_toobar_trans_pane_cp01_ParamLimits

0x6454,	// (0x00056fae) popup_toobar_trans_pane_cp01

0x6a23,	// (0x0005757d) popup_image_details_window_ParamLimits

0x6a23,	// (0x0005757d) popup_image_details_window

0x6a31,	// (0x0005758b) popup_image_focus_window

0x6d6e,	// (0x000578c8) camera2_autofocus_pane_ParamLimits

0x6d6e,	// (0x000578c8) camera2_autofocus_pane

0xbcf7,	// (0x0005c851) bg_popup_sub_pane_cp06

0x0f51,	// (0x00051aab) popup_image_focus_window_g1

0x0f59,	// (0x00051ab3) popup_image_focus_window_g2

0x0f61,	// (0x00051abb) popup_image_focus_window_g3

0x0f69,	// (0x00051ac3) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00060267) popup_image_focus_window_g

0x0f71,	// (0x00051acb) popup_image_focus_window_t1

0x0f7f,	// (0x00051ad9) popup_image_focus_window_t2

0x0f8f,	// (0x00051ae9) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00060270) popup_image_focus_window_t

0x0f9d,	// (0x00051af7) camera2_autofocus_pane_g1

0xc69f,	// (0x0005d1f9) bg_tb_trans_pane_cp01

0x0fab,	// (0x00051b05) popup_image_details_window_g1

0x0fbe,	// (0x00051b18) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00060282) popup_image_details_window_g

0x0fe7,	// (0x00051b41) popup_image_details_window_t1

0x0ff9,	// (0x00051b53) popup_image_details_window_t2

0x1012,	// (0x00051b6c) popup_image_details_window_t3

0x1026,	// (0x00051b80) popup_image_details_window_t4

0x1041,	// (0x00051b9b) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00060289) popup_image_details_window_t

0xc470,	// (0x0005cfca) bg_calc_paper_pane_ParamLimits

0x3a2b,	// (0x00054585) grid_highlight_pane_cp013

0x3d6b,	// (0x000548c5) list_calc_pane_ParamLimits

0x3d7d,	// (0x000548d7) scroll_pane_cp024

0xc484,	// (0x0005cfde) bg_calc_display_pane_ParamLimits

0x3d85,	// (0x000548df) calc_display_pane_t1_ParamLimits

0x3d9a,	// (0x000548f4) calc_display_pane_t2_ParamLimits

0x3daf,	// (0x00054909) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0005fcb9) calc_display_pane_t_ParamLimits

0x3e96,	// (0x000549f0) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0005fcd6) cell_calc_pane_g

0x3e9f,	// (0x000549f9) cell_calc_pane_t1

0xc4e3,	// (0x0005d03d) grid_highlight_pane_cp02_ParamLimits

0xc4f9,	// (0x0005d053) toolbar_button_pane_cp01_ParamLimits

0xc4f9,	// (0x0005d053) toolbar_button_pane_cp01

0xdeeb,	// (0x0005ea45) temp_image_control_pane_ParamLimits

0xdeeb,	// (0x0005ea45) temp_image_control_pane

0x699f,	// (0x000574f9) main_mp3_pane

0x105b,	// (0x00051bb5) temp_image_control_pane_g1_ParamLimits

0x105b,	// (0x00051bb5) temp_image_control_pane_g1

0x1069,	// (0x00051bc3) temp_image_control_pane_g2_ParamLimits

0x1069,	// (0x00051bc3) temp_image_control_pane_g2

0x107b,	// (0x00051bd5) temp_image_control_pane_g3_ParamLimits

0x107b,	// (0x00051bd5) temp_image_control_pane_g3

0x73cb,	// (0x00057f25) temp_image_control_pane_g4_ParamLimits

0x73cb,	// (0x00057f25) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00060294) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00060294) temp_image_control_pane_g

0x105b,	// (0x00051bb5) main_mp3_pane_g1

0x73dc,	// (0x00057f36) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0006029d) main_mp3_pane_g

0x10be,	// (0x00051c18) main_mp3_pane_t1

0xc645,	// (0x0005d19f) main_camera_pane_g8_ParamLimits

0xc645,	// (0x0005d19f) main_camera_pane_g8

0x4636,	// (0x00055190) main_video_pane_g7_ParamLimits

0x4636,	// (0x00055190) main_video_pane_g7

0x6eb6,	// (0x00057a10) main_camera2_pane_t7_ParamLimits

0x6eb6,	// (0x00057a10) main_camera2_pane_t7

0xd3c1,	// (0x0005df1b) scroll_pane_cp025_ParamLimits

0xd3c1,	// (0x0005df1b) scroll_pane_cp025

0xd3d5,	// (0x0005df2f) scroll_pane_cp026_ParamLimits

0xd3d5,	// (0x0005df2f) scroll_pane_cp026

0xd3e4,	// (0x0005df3e) wml_content_pane_ParamLimits

0x3a2b,	// (0x00054585) main_touch_calib_pane

0x7480,	// (0x00057fda) main_touch_calib_pane_g1

0x748c,	// (0x00057fe6) main_touch_calib_pane_g2

0x7498,	// (0x00057ff2) main_touch_calib_pane_g3

0x74a4,	// (0x00057ffe) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x000602bb) main_touch_calib_pane_g

0x74b0,	// (0x0005800a) main_touch_calib_pane_t1

0x74c7,	// (0x00058021) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x000602c4) main_touch_calib_pane_t

0xdb20,	// (0x0005e67a) mup_progress_pane_cp02

0xdb3f,	// (0x0005e699) navi_pane_g1

0xdba1,	// (0x0005e6fb) navi_pane_mp_t3

0x699f,	// (0x000574f9) main_mp3_pane_ParamLimits

0x6b09,	// (0x00057663) navi_pane_ParamLimits

0x105b,	// (0x00051bb5) main_mp3_pane_g1_ParamLimits

0x73dc,	// (0x00057f36) main_mp3_pane_g2_ParamLimits

0x73e8,	// (0x00057f42) main_mp3_pane_g3_ParamLimits

0x73e8,	// (0x00057f42) main_mp3_pane_g3

0x73f4,	// (0x00057f4e) main_mp3_pane_g4_ParamLimits

0x73f4,	// (0x00057f4e) main_mp3_pane_g4

0x108b,	// (0x00051be5) main_mp3_pane_g5_ParamLimits

0x108b,	// (0x00051be5) main_mp3_pane_g5

0x1099,	// (0x00051bf3) main_mp3_pane_g6_ParamLimits

0x1099,	// (0x00051bf3) main_mp3_pane_g6

0x10a6,	// (0x00051c00) main_mp3_pane_g7_ParamLimits

0x10a6,	// (0x00051c00) main_mp3_pane_g7

0x10b2,	// (0x00051c0c) main_mp3_pane_g8_ParamLimits

0x10b2,	// (0x00051c0c) main_mp3_pane_g8

0xf743,	// (0x0006029d) main_mp3_pane_g_ParamLimits

0x7400,	// (0x00057f5a) main_mp3_pane_t2

0x7410,	// (0x00057f6a) main_mp3_pane_t3

0x10cc,	// (0x00051c26) main_mp3_pane_t4

0x10da,	// (0x00051c34) main_mp3_pane_t5

0x0005,

0xf754,	// (0x000602ae) main_mp3_pane_t

0x10e8,	// (0x00051c42) mup_progress_pane_cp01

0x3691,	// (0x000541eb) aid_zoom_text_secondary2

0x0dbb,	// (0x00051915) list_cale_ev2_pane

0x0eaf,	// (0x00051a09) scroll_pane_cp023_ParamLimits

0x751a,	// (0x00058074) field_cale_ev2_pane_ParamLimits

0x751a,	// (0x00058074) field_cale_ev2_pane

0x006d,	// (0x00050bc7) field_cale_ev2_pane_g1_ParamLimits

0x006d,	// (0x00050bc7) field_cale_ev2_pane_g1

0x0079,	// (0x00050bd3) field_cale_ev2_pane_g2_ParamLimits

0x0079,	// (0x00050bd3) field_cale_ev2_pane_g2

0x0091,	// (0x00050beb) field_cale_ev2_pane_g3_ParamLimits

0x0091,	// (0x00050beb) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x000602cf) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x000602cf) field_cale_ev2_pane_g

0x754e,	// (0x000580a8) field_cale_ev2_pane_t1_ParamLimits

0x754e,	// (0x000580a8) field_cale_ev2_pane_t1

0x7565,	// (0x000580bf) field_cale_ev2_pane_t2_ParamLimits

0x7565,	// (0x000580bf) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x000602d8) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x000602d8) field_cale_ev2_pane_t

0x62d3,	// (0x00056e2d) main_postcard_pane_g5_ParamLimits

0x62d3,	// (0x00056e2d) main_postcard_pane_g5

0x62e1,	// (0x00056e3b) main_postcard_pane_g6_ParamLimits

0x62e1,	// (0x00056e3b) main_postcard_pane_g6

0x4476,	// (0x00054fd0) camera2_autofocus_pane_cp_ParamLimits

0x4476,	// (0x00054fd0) camera2_autofocus_pane_cp

0x699f,	// (0x000574f9) main_mup3_pane

0x759a,	// (0x000580f4) main_mup3_pane_g1_ParamLimits

0x759a,	// (0x000580f4) main_mup3_pane_g1

0x75bb,	// (0x00058115) main_mup3_pane_g2_ParamLimits

0x75bb,	// (0x00058115) main_mup3_pane_g2

0x763a,	// (0x00058194) main_mup3_pane_g3_ParamLimits

0x763a,	// (0x00058194) main_mup3_pane_g3

0x767d,	// (0x000581d7) main_mup3_pane_g4_ParamLimits

0x767d,	// (0x000581d7) main_mup3_pane_g4

0x76c0,	// (0x0005821a) main_mup3_pane_g5_ParamLimits

0x76c0,	// (0x0005821a) main_mup3_pane_g5

0x7705,	// (0x0005825f) main_mup3_pane_g6_ParamLimits

0x7705,	// (0x0005825f) main_mup3_pane_g6

0x10f0,	// (0x00051c4a) main_mup3_pane_g7_ParamLimits

0x10f0,	// (0x00051c4a) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x000602e8) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x000602e8) main_mup3_pane_g

0x777b,	// (0x000582d5) main_mup3_pane_t1_ParamLimits

0x777b,	// (0x000582d5) main_mup3_pane_t1

0x77ea,	// (0x00058344) main_mup3_pane_t2_ParamLimits

0x77ea,	// (0x00058344) main_mup3_pane_t2

0x78b3,	// (0x0005840d) main_mup3_pane_t4_ParamLimits

0x78b3,	// (0x0005840d) main_mup3_pane_t4

0x7907,	// (0x00058461) main_mup3_pane_t5_ParamLimits

0x7907,	// (0x00058461) main_mup3_pane_t5

0x79b7,	// (0x00058511) main_mup3_pane_t6_ParamLimits

0x79b7,	// (0x00058511) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x000602f9) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x000602f9) main_mup3_pane_t

0x7a63,	// (0x000585bd) mup3_progress_pane_ParamLimits

0x7a63,	// (0x000585bd) mup3_progress_pane

0x7ad7,	// (0x00058631) popup_mup3_control_window_ParamLimits

0x7ad7,	// (0x00058631) popup_mup3_control_window

0x10fe,	// (0x00051c58) popup_mup3_text_window

0x7af0,	// (0x0005864a) mup3_progress_pane_t1

0x7b0f,	// (0x00058669) mup3_progress_pane_t2

0x1106,	// (0x00051c60) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00060306) mup3_progress_pane_t

0x1123,	// (0x00051c7d) mup_progress_pane_cp03

0xbcf7,	// (0x0005c851) bg_tb_trans_pane_cp04

0x7b2e,	// (0x00058688) mup3_volume_pane

0x7b36,	// (0x00058690) popup_mup3_control_window_g1

0x7b3f,	// (0x00058699) mup3_volume_pane_g1

0x7b48,	// (0x000586a2) mup3_volume_pane_g2

0x7b51,	// (0x000586ab) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0006030d) mup3_volume_pane_g

0xbcf7,	// (0x0005c851) bg_tb_trans_pane_cp03

0x1133,	// (0x00051c8d) popup_mup3_text_window_g1

0x113b,	// (0x00051c95) popup_mup3_text_window_t1

0xc4cc,	// (0x0005d026) list_calc_item_pane_g1_ParamLimits

0x0a89,	// (0x000515e3) mup_volume_pane_cp_g1

0x74de,	// (0x00058038) main_touch_calib_pane_t3

0x74f2,	// (0x0005804c) main_touch_calib_pane_t4

0x7506,	// (0x00058060) main_touch_calib_pane_t5

0x376c,	// (0x000542c6) aid_cell_size_toolbar2

0x3774,	// (0x000542ce) aid_popup3_width_pane

0x3689,	// (0x000541e3) aid_zoom_text_msg_primary

0x4460,	// (0x00054fba) vorec_t7

0xc490,	// (0x0005cfea) bg_calc_paper_pane_g1_ParamLimits

0xc49c,	// (0x0005cff6) bg_calc_paper_pane_g2_ParamLimits

0xc4a8,	// (0x0005d002) bg_calc_paper_pane_g3_ParamLimits

0xc4b4,	// (0x0005d00e) bg_calc_paper_pane_g4_ParamLimits

0xc4c0,	// (0x0005d01a) bg_calc_paper_pane_g5_ParamLimits

0x3dee,	// (0x00054948) bg_calc_paper_pane_g6_ParamLimits

0x3dff,	// (0x00054959) bg_calc_paper_pane_g7_ParamLimits

0x3e10,	// (0x0005496a) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0005fcc0) bg_calc_paper_pane_g_ParamLimits

0x3e21,	// (0x0005497b) calc_bg_paper_pane_g9_ParamLimits

0x455f,	// (0x000550b9) image_qvga_pane_ParamLimits

0x455f,	// (0x000550b9) image_qvga_pane

0xc36d,	// (0x0005cec7) bg_popup_sub_pane_cp04_ParamLimits

0xde22,	// (0x0005e97c) popup_mup_playback_window_g1_ParamLimits

0xde2e,	// (0x0005e988) popup_mup_playback_window_t1_ParamLimits

0xde43,	// (0x0005e99d) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0006004c) popup_mup_playback_window_t_ParamLimits

0x6fe5,	// (0x00057b3f) main_mup2_pane_g3_ParamLimits

0x6fe5,	// (0x00057b3f) main_mup2_pane_g3

0x4871,	// (0x000553cb) popup_toolbar_window_cp04

0xe238,	// (0x0005ed92) popup_call2_audio_second_window_g3_ParamLimits

0xe238,	// (0x0005ed92) popup_call2_audio_second_window_g3

0xe642,	// (0x0005f19c) popup_call2_audio_first_window_g4_ParamLimits

0xe642,	// (0x0005f19c) popup_call2_audio_first_window_g4

0xecc1,	// (0x0005f81b) popup_call2_audio_in_window_g4_ParamLimits

0xecc1,	// (0x0005f81b) popup_call2_audio_in_window_g4

0x63ef,	// (0x00056f49) aid_area_sk_bg_cut_ParamLimits

0x63ef,	// (0x00056f49) aid_area_sk_bg_cut

0xde58,	// (0x0005e9b2) aid_area_sk_bg_cut_2_ParamLimits

0xde58,	// (0x0005e9b2) aid_area_sk_bg_cut_2

0x7371,	// (0x00057ecb) aid_placing_details_win

0x7379,	// (0x00057ed3) aid_placing_details_win_2

0x0f9d,	// (0x00051af7) camera2_autofocus_pane_g1_ParamLimits

0x39c1,	// (0x0005451b) popup_fixed_preview_cale_window_ParamLimits

0x39c1,	// (0x0005451b) popup_fixed_preview_cale_window

0xdc10,	// (0x0005e76a) navi_slider_pane_g3

0xdbf0,	// (0x0005e74a) navi_slider_pane_g4

0xdbf9,	// (0x0005e753) navi_slider_pane_g5

0xdc10,	// (0x0005e76a) navi_slider_pane_g6

0x5c66,	// (0x000567c0) navi_slider_pane_g7

0xdd23,	// (0x0005e87d) mup_scale_pane_g3

0xdd2c,	// (0x0005e886) mup_scale_pane_g4

0xdd35,	// (0x0005e88f) mup_scale_pane_g5

0x60a5,	// (0x00056bff) mup_scale_pane_g6

0x60ae,	// (0x00056c08) mup_scale_pane_g7

0xdc10,	// (0x0005e76a) cams2_slider_pane_g3

0x0b0b,	// (0x00051665) cams2_slider_pane_g4

0x72c9,	// (0x00057e23) cams2_slider_pane_g5

0xdc10,	// (0x0005e76a) cams2_slider_pane_g6

0x72d1,	// (0x00057e2b) cams2_slider_pane_g7

0x0d38,	// (0x00051892) camera2_autofocus_pane_cp_g1

0x1149,	// (0x00051ca3) bg_popup_preview_window_pane_cp02_ParamLimits

0x1149,	// (0x00051ca3) bg_popup_preview_window_pane_cp02

0x1155,	// (0x00051caf) list_fp_cale_pane_ParamLimits

0x1155,	// (0x00051caf) list_fp_cale_pane

0x1161,	// (0x00051cbb) popup_fixed_preview_cale_window_t1_ParamLimits

0x1161,	// (0x00051cbb) popup_fixed_preview_cale_window_t1

0x7b5a,	// (0x000586b4) popup_fixed_preview_cale_window_t2_ParamLimits

0x7b5a,	// (0x000586b4) popup_fixed_preview_cale_window_t2

0x7b6f,	// (0x000586c9) popup_fixed_preview_cale_window_t3_ParamLimits

0x7b6f,	// (0x000586c9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x00060314) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x00060314) popup_fixed_preview_cale_window_t

0x7b84,	// (0x000586de) list_single_fp_cale_pane_ParamLimits

0x7b84,	// (0x000586de) list_single_fp_cale_pane

0x117f,	// (0x00051cd9) list_single_fp_cale_pane_g1_ParamLimits

0x117f,	// (0x00051cd9) list_single_fp_cale_pane_g1

0x118b,	// (0x00051ce5) list_single_fp_cale_pane_g2_ParamLimits

0x118b,	// (0x00051ce5) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0006031b) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0006031b) list_single_fp_cale_pane_g

0x11a4,	// (0x00051cfe) list_single_fp_cale_pane_t1_ParamLimits

0x11a4,	// (0x00051cfe) list_single_fp_cale_pane_t1

0x11b6,	// (0x00051d10) list_single_fp_cale_pane_t2_ParamLimits

0x11b6,	// (0x00051d10) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x00060322) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x00060322) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3a2b,	// (0x00054585) main_dialer_pane

0x7b99,	// (0x000586f3) aid_cell_size_keypad

0x7ba3,	// (0x000586fd) dialer_ne_pane

0x7bad,	// (0x00058707) grid_dialer_command_1_pane

0x7bb5,	// (0x0005870f) grid_dialer_command_2_pane

0x7bbd,	// (0x00058717) grid_dialer_keypad_pane

0x7bd1,	// (0x0005872b) bg_popup_call_pane_cp06_ParamLimits

0x7bd1,	// (0x0005872b) bg_popup_call_pane_cp06

0x7bdd,	// (0x00058737) dialer_ne_clear_pane_ParamLimits

0x7bdd,	// (0x00058737) dialer_ne_clear_pane

0x11e9,	// (0x00051d43) dialer_ne_pane_g1

0x11f1,	// (0x00051d4b) dialer_ne_pane_t1_ParamLimits

0x11f1,	// (0x00051d4b) dialer_ne_pane_t1

0x7be9,	// (0x00058743) dialer_ne_pane_t2_ParamLimits

0x7be9,	// (0x00058743) dialer_ne_pane_t2

0x7c06,	// (0x00058760) dialer_ne_pane_t3_ParamLimits

0x7c06,	// (0x00058760) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00060327) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00060327) dialer_ne_pane_t

0x7c2a,	// (0x00058784) dialer_ne_pane_t3_copy1_ParamLimits

0x7c2a,	// (0x00058784) dialer_ne_pane_t3_copy1

0x7c4e,	// (0x000587a8) cell_dialer_keypad_pane_ParamLimits

0x7c4e,	// (0x000587a8) cell_dialer_keypad_pane

0x7c65,	// (0x000587bf) cell_dialer_command_1_pane_ParamLimits

0x7c65,	// (0x000587bf) cell_dialer_command_1_pane

0x7c7b,	// (0x000587d5) cell_dialer_command_2_pane_ParamLimits

0x7c7b,	// (0x000587d5) cell_dialer_command_2_pane

0x1203,	// (0x00051d5d) bg_button_pane_cp02_ParamLimits

0x1203,	// (0x00051d5d) bg_button_pane_cp02

0x7c8a,	// (0x000587e4) cell_dialer_keypad_pane_g1_ParamLimits

0x7c8a,	// (0x000587e4) cell_dialer_keypad_pane_g1

0x1203,	// (0x00051d5d) bg_button_pane_cp03_ParamLimits

0x1203,	// (0x00051d5d) bg_button_pane_cp03

0x7c9f,	// (0x000587f9) cell_dialer_command_1_pane_g1_ParamLimits

0x7c9f,	// (0x000587f9) cell_dialer_command_1_pane_g1

0x120f,	// (0x00051d69) bg_button_pane_cp04

0x7cb3,	// (0x0005880d) cell_dialer_command_2_pane_g1

0xdbdf,	// (0x0005e739) bg_button_pane_cp06

0x1217,	// (0x00051d71) dialer_ne_clear_pane_g1

0x5ba9,	// (0x00056703) navi_pane_g2

0x5bd7,	// (0x00056731) navi_pane_g3

0x0002,

0xf3f5,	// (0x0005ff4f) navi_pane_g

0x5c02,	// (0x0005675c) navi_pane_mv_g2

0x5c29,	// (0x00056783) navi_pane_mv_g5

0x5c31,	// (0x0005678b) navi_pane_mv_t1

0xc484,	// (0x0005cfde) main_clock2_pane

0x7ce6,	// (0x00058840) main_clock2_list_pane_ParamLimits

0x7ce6,	// (0x00058840) main_clock2_list_pane

0x7d10,	// (0x0005886a) main_clock2_pane_t1_ParamLimits

0x7d10,	// (0x0005886a) main_clock2_pane_t1

0x7d34,	// (0x0005888e) main_clock2_pane_t2_ParamLimits

0x7d34,	// (0x0005888e) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0006032e) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0006032e) main_clock2_pane_t

0x7d8f,	// (0x000588e9) popup_clock_analogue_window_cp03_ParamLimits

0x7d8f,	// (0x000588e9) popup_clock_analogue_window_cp03

0x7daf,	// (0x00058909) popup_clock_digital_window_cp02_ParamLimits

0x7daf,	// (0x00058909) popup_clock_digital_window_cp02

0x7e24,	// (0x0005897e) main_clock2_list_single_pane_ParamLimits

0x7e24,	// (0x0005897e) main_clock2_list_single_pane

0xdbdf,	// (0x0005e739) list_highlight_pane_cp05

0x121f,	// (0x00051d79) main_clock2_list_single_pane_t1

0x4871,	// (0x000553cb) popup_toolbar_window_cp04_ParamLimits

0x739b,	// (0x00057ef5) camera2_autofocus_pane_g2_ParamLimits

0x739b,	// (0x00057ef5) camera2_autofocus_pane_g2

0x73a7,	// (0x00057f01) camera2_autofocus_pane_g3_ParamLimits

0x73a7,	// (0x00057f01) camera2_autofocus_pane_g3

0x73b3,	// (0x00057f0d) camera2_autofocus_pane_g4_ParamLimits

0x73b3,	// (0x00057f0d) camera2_autofocus_pane_g4

0x73bf,	// (0x00057f19) camera2_autofocus_pane_g5_ParamLimits

0x73bf,	// (0x00057f19) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00060277) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00060277) camera2_autofocus_pane_g

0x757a,	// (0x000580d4) camera2_autofocus_pane_cp_g2

0x7582,	// (0x000580dc) camera2_autofocus_pane_cp_g3

0x758a,	// (0x000580e4) camera2_autofocus_pane_cp_g4

0x7592,	// (0x000580ec) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x000602dd) camera2_autofocus_pane_cp_g

0x7bc9,	// (0x00058723) popup_dialer_spcha_window

0xbcf7,	// (0x0005c851) bg_popup_sub_pane_cp07

0x122d,	// (0x00051d87) list_spcha_pane

0x1235,	// (0x00051d8f) list_single_spcha_pane_ParamLimits

0x1235,	// (0x00051d8f) list_single_spcha_pane

0xbcf7,	// (0x0005c851) list_highlight_pane_cp06

0x1246,	// (0x00051da0) list_single_spcha_pane_t1

0xea6b,	// (0x0005f5c5) popup_call2_audio_out_window_g4_ParamLimits

0xea6b,	// (0x0005f5c5) popup_call2_audio_out_window_g4

0x3a2b,	// (0x00054585) main_imed2_pane

0x6a39,	// (0x00057593) popup_imed_adjust2_window

0x6a4c,	// (0x000575a6) popup_imed_trans_window_ParamLimits

0x6a4c,	// (0x000575a6) popup_imed_trans_window

0x0b74,	// (0x000516ce) popup_blid_sat_info2_window_t1

0x0b82,	// (0x000516dc) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0006020c) popup_blid_sat_info2_window_t

0x7ece,	// (0x00058a28) aid_size_cell_colour_35

0x7ee8,	// (0x00058a42) aid_size_cell_colour_112

0x7eff,	// (0x00058a59) aid_size_cell_effect

0xc69f,	// (0x0005d1f9) bg_tb_trans_pane_cp02

0xd7ed,	// (0x0005e347) heading_imed_pane

0x7f19,	// (0x00058a73) listscroll_imed_pane

0x1254,	// (0x00051dae) heading_imed_pane_g1

0x125c,	// (0x00051db6) heading_imed_pane_t1

0x126a,	// (0x00051dc4) grid_imed_colour_35_pane_ParamLimits

0x126a,	// (0x00051dc4) grid_imed_colour_35_pane

0x7f25,	// (0x00058a7f) grid_imed_effect_pane

0x1285,	// (0x00051ddf) list_imed_aspect_pane

0x7f35,	// (0x00058a8f) scroll_pane_cp027_ParamLimits

0x7f35,	// (0x00058a8f) scroll_pane_cp027

0x7f41,	// (0x00058a9b) cell_imed_effect_pane_ParamLimits

0x7f41,	// (0x00058a9b) cell_imed_effect_pane

0x128d,	// (0x00051de7) cell_imed_colour_pane_ParamLimits

0x128d,	// (0x00051de7) cell_imed_colour_pane

0x12cf,	// (0x00051e29) cell_imed_colour_pane_g1_ParamLimits

0x12cf,	// (0x00051e29) cell_imed_colour_pane_g1

0x12e0,	// (0x00051e3a) hgihlgiht_grid_pane_cp016_ParamLimits

0x12e0,	// (0x00051e3a) hgihlgiht_grid_pane_cp016

0x7f59,	// (0x00058ab3) cell_imed_effect_pane_g1

0x7f61,	// (0x00058abb) grid_highlight_pane_cp017

0x12f1,	// (0x00051e4b) list_imed_single_pane_ParamLimits

0x12f1,	// (0x00051e4b) list_imed_single_pane

0xbcf7,	// (0x0005c851) list_highlight_pane_cp07

0x1308,	// (0x00051e62) list_imed_aspect_pane_comp1_t1

0xf02a,	// (0x0005fb84) bg_tb_trans_pane_cp05

0x132a,	// (0x00051e84) popup_imed_adjust2_window_g1

0x1351,	// (0x00051eab) popup_imed_adjust2_window_t1

0x1369,	// (0x00051ec3) slider_imed_adjust_pane

0x137d,	// (0x00051ed7) slider_imed_adjust_pane_g1

0x138d,	// (0x00051ee7) slider_imed_adjust_pane_g2

0x139d,	// (0x00051ef7) slider_imed_adjust_pane_g3

0x13ae,	// (0x00051f08) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0006034b) slider_imed_adjust_pane_g

0x7f6a,	// (0x00058ac4) aid_size_cell_clipart2

0x7f76,	// (0x00058ad0) grid_imed_clipart_pane

0x13bf,	// (0x00051f19) scroll_pane_cp031

0x7f80,	// (0x00058ada) cell_imed_clipart_pane_ParamLimits

0x7f80,	// (0x00058ada) cell_imed_clipart_pane

0x7fa7,	// (0x00058b01) cell_imed_clipart_pane_g1

0xbcf7,	// (0x0005c851) grid_highlight_pane_cp014

0x7cf2,	// (0x0005884c) main_clock2_pane_g1_ParamLimits

0x7cf2,	// (0x0005884c) main_clock2_pane_g1

0x7dcb,	// (0x00058925) aid_call2_pane_cp10

0x7ddd,	// (0x00058937) aid_call_pane_cp10

0xdb14,	// (0x0005e66e) popup_clock_analogue_window_cp10_g1

0xdb14,	// (0x0005e66e) popup_clock_analogue_window_cp10_g2

0x7def,	// (0x00058949) popup_clock_analogue_window_cp10_g3

0x7def,	// (0x00058949) popup_clock_analogue_window_cp10_g4

0xdb14,	// (0x0005e66e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x00060339) popup_clock_analogue_window_cp10_g

0x7e05,	// (0x0005895f) popup_clock_analogue_window_cp10_t1

0x7e36,	// (0x00058990) clock_digital_number_pane_cp10_ParamLimits

0x7e36,	// (0x00058990) clock_digital_number_pane_cp10

0x7e4e,	// (0x000589a8) clock_digital_number_pane_cp11_ParamLimits

0x7e4e,	// (0x000589a8) clock_digital_number_pane_cp11

0x7e66,	// (0x000589c0) clock_digital_number_pane_cp12_ParamLimits

0x7e66,	// (0x000589c0) clock_digital_number_pane_cp12

0x7e7e,	// (0x000589d8) clock_digital_number_pane_cp13_ParamLimits

0x7e7e,	// (0x000589d8) clock_digital_number_pane_cp13

0x7e96,	// (0x000589f0) clock_digital_separator_pane_cp10_ParamLimits

0x7e96,	// (0x000589f0) clock_digital_separator_pane_cp10

0x7eae,	// (0x00058a08) popup_clock_digital_window_cp02_t1_ParamLimits

0x7eae,	// (0x00058a08) popup_clock_digital_window_cp02_t1

0xc365,	// (0x0005cebf) clock_digital_number_pane_cp10_g1

0xc365,	// (0x0005cebf) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00060354) clock_digital_number_pane_cp10_g

0xc365,	// (0x0005cebf) clock_digital_separator_pane_cp10_g1

0xc365,	// (0x0005cebf) clock_digital_separator_pane_g2_cp10

0xdbaf,	// (0x0005e709) navi_pane_vded_g4

0xdbb8,	// (0x0005e712) navi_pane_vded_g5

0xdbc1,	// (0x0005e71b) navi_pane_vded_t1

0x3a2b,	// (0x00054585) main_vded_pane

0x7fb0,	// (0x00058b0a) main_vded_pane_g1

0x7fbc,	// (0x00058b16) main_vded_pane_g2

0x7fc6,	// (0x00058b20) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x00060359) main_vded_pane_g

0x7fd0,	// (0x00058b2a) main_vded_pane_t1

0x7fde,	// (0x00058b38) main_vded_pane_t2

0x0001,

0xf806,	// (0x00060360) main_vded_pane_t

0x7fec,	// (0x00058b46) vded_slider_pane

0x7ff6,	// (0x00058b50) vded_video_pane

0x13c7,	// (0x00051f21) vded_video_pane_g1

0x8000,	// (0x00058b5a) vded_video_pane_g2

0x0d38,	// (0x00051892) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00060365) vded_video_pane_g

0x13d1,	// (0x00051f2b) vded_slider_pane_g1

0x0a89,	// (0x000515e3) vded_slider_pane_g2

0x13da,	// (0x00051f34) vded_slider_pane_g3

0x13e3,	// (0x00051f3d) vded_slider_pane_g4

0x13ec,	// (0x00051f46) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0006036c) vded_slider_pane_g

0x7ac9,	// (0x00058623) mup3_rocker_pane_ParamLimits

0x7ac9,	// (0x00058623) mup3_rocker_pane

0x8009,	// (0x00058b63) mup3_control_keys_pane_g1

0x8011,	// (0x00058b6b) mup3_control_keys_pane_g2

0x8019,	// (0x00058b73) mup3_control_keys_pane_g3

0x8021,	// (0x00058b7b) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00060377) mup3_control_keys_pane_g

0x39e9,	// (0x00054543) popup_toolbar2_fixed_window_cp01_ParamLimits

0x39e9,	// (0x00054543) popup_toolbar2_fixed_window_cp01

0x7ae3,	// (0x0005863d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7ae3,	// (0x0005863d) popup_toolbar2_fixed_window_cp02

0xe3aa,	// (0x0005ef04) popup_call2_audio_second_window_t4_ParamLimits

0xe3aa,	// (0x0005ef04) popup_call2_audio_second_window_t4

0xe8d8,	// (0x0005f432) popup_call2_audio_first_window_t6_ParamLimits

0xe8d8,	// (0x0005f432) popup_call2_audio_first_window_t6

0xeb6e,	// (0x0005f6c8) popup_call2_audio_out_window_t6_ParamLimits

0xeb6e,	// (0x0005f6c8) popup_call2_audio_out_window_t6

0x3a2b,	// (0x00054585) main_vitu_pane

0x8031,	// (0x00058b8b) aid_size_cell_itu_ParamLimits

0x8031,	// (0x00058b8b) aid_size_cell_itu

0x803f,	// (0x00058b99) bg_popup_window_pane_cp08_ParamLimits

0x803f,	// (0x00058b99) bg_popup_window_pane_cp08

0x804d,	// (0x00058ba7) field_vitu_entry_pane_ParamLimits

0x804d,	// (0x00058ba7) field_vitu_entry_pane

0x805c,	// (0x00058bb6) grid_vitu_function_pane_ParamLimits

0x805c,	// (0x00058bb6) grid_vitu_function_pane

0x806c,	// (0x00058bc6) grid_vitu_itu_pane_ParamLimits

0x806c,	// (0x00058bc6) grid_vitu_itu_pane

0x807c,	// (0x00058bd6) cell_vitu_itu_pane_ParamLimits

0x807c,	// (0x00058bd6) cell_vitu_itu_pane

0x8091,	// (0x00058beb) cell_vitu_function_pane_ParamLimits

0x8091,	// (0x00058beb) cell_vitu_function_pane

0xc69f,	// (0x0005d1f9) bg_popup_sub_pane_cp08_ParamLimits

0xc69f,	// (0x0005d1f9) bg_popup_sub_pane_cp08

0x80a5,	// (0x00058bff) field_vitu_entry_pane_t1_ParamLimits

0x80a5,	// (0x00058bff) field_vitu_entry_pane_t1

0x140d,	// (0x00051f67) field_vitu_entry_pane_t2_ParamLimits

0x140d,	// (0x00051f67) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00060385) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00060385) field_vitu_entry_pane_t

0x142a,	// (0x00051f84) bg_button_pane_cp05_ParamLimits

0x142a,	// (0x00051f84) bg_button_pane_cp05

0x80c3,	// (0x00058c1d) cell_vitu_itu_pane_g1

0x80db,	// (0x00058c35) cell_vitu_itu_pane_t1_ParamLimits

0x80db,	// (0x00058c35) cell_vitu_itu_pane_t1

0x80ed,	// (0x00058c47) cell_vitu_itu_pane_t2_ParamLimits

0x80ed,	// (0x00058c47) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0006038a) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0006038a) cell_vitu_itu_pane_t

0x1438,	// (0x00051f92) bg_button_pane_cp07

0x8122,	// (0x00058c7c) cell_vitu_function_pane_g1

0x3c92,	// (0x000547ec) main_calc_pane_g1

0x37a8,	// (0x00054302) aid_visual_content_pane

0x3a2b,	// (0x00054585) main_vradio_pane

0x812b,	// (0x00058c85) main_vradio_pane_g1_ParamLimits

0x812b,	// (0x00058c85) main_vradio_pane_g1

0x1442,	// (0x00051f9c) main_vradio_pane_g2_ParamLimits

0x1442,	// (0x00051f9c) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00060391) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00060391) main_vradio_pane_g

0x813b,	// (0x00058c95) main_vradio_pane_t1_ParamLimits

0x813b,	// (0x00058c95) main_vradio_pane_t1

0x814d,	// (0x00058ca7) main_vradio_pane_t2_ParamLimits

0x814d,	// (0x00058ca7) main_vradio_pane_t2

0x144f,	// (0x00051fa9) main_vradio_pane_t3_ParamLimits

0x144f,	// (0x00051fa9) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00060396) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00060396) main_vradio_pane_t

0x815f,	// (0x00058cb9) vradio_rocker_control_pane_ParamLimits

0x815f,	// (0x00058cb9) vradio_rocker_control_pane

0x816b,	// (0x00058cc5) vradio_station_info_pane_ParamLimits

0x816b,	// (0x00058cc5) vradio_station_info_pane

0x1463,	// (0x00051fbd) vradio_frequency_info_pane_ParamLimits

0x1463,	// (0x00051fbd) vradio_frequency_info_pane

0x0d38,	// (0x00051892) vradio_station_info_pane_g1

0x1472,	// (0x00051fcc) vradio_station_info_pane_t1_ParamLimits

0x1472,	// (0x00051fcc) vradio_station_info_pane_t1

0x1494,	// (0x00051fee) vradio_station_info_pane_t2_ParamLimits

0x1494,	// (0x00051fee) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0006039d) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0006039d) vradio_station_info_pane_t

0x14a6,	// (0x00052000) vradio_tuning_pane

0x14ae,	// (0x00052008) vradio_rocker_control_pane_g1

0x14b6,	// (0x00052010) vradio_rocker_control_pane_g2

0x14be,	// (0x00052018) vradio_rocker_control_pane_g3

0x14c6,	// (0x00052020) vradio_rocker_control_pane_g4

0x14ce,	// (0x00052028) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x000603a2) vradio_rocker_control_pane_g

0x817a,	// (0x00058cd4) vradio_frequency_info_pane_g1

0x14d6,	// (0x00052030) vradio_frequency_info_pane_t1_ParamLimits

0x14d6,	// (0x00052030) vradio_frequency_info_pane_t1

0x8184,	// (0x00058cde) vradio_tuning_pane_g1

0x818d,	// (0x00058ce7) vradio_tuning_pane_t1

0x37f1,	// (0x0005434b) area_side_right_pane_ParamLimits

0x37f1,	// (0x0005434b) area_side_right_pane

0xeff1,	// (0x0005fb4b) status_small_pane_g1

0xeff9,	// (0x0005fb53) status_small_pane_g2

0xf002,	// (0x0005fb5c) status_small_pane_g3

0xf00b,	// (0x0005fb65) status_small_pane_g4

0x0003,

0xf608,	// (0x00060162) status_small_pane_g

0xf014,	// (0x0005fb6e) status_small_pane_t1

0x3a2b,	// (0x00054585) main_video3_pane

0x14ea,	// (0x00052044) cams_zoom_vslider_pane

0x14f2,	// (0x0005204c) image3_wide_pane_ParamLimits

0x14f2,	// (0x0005204c) image3_wide_pane

0x150c,	// (0x00052066) image3_wide_small_pane

0x1518,	// (0x00052072) main_video3_pane_g1_ParamLimits

0x1518,	// (0x00052072) main_video3_pane_g1

0x1534,	// (0x0005208e) main_video3_pane_g2_ParamLimits

0x1534,	// (0x0005208e) main_video3_pane_g2

0x0001,

0xf853,	// (0x000603ad) main_video3_pane_g_ParamLimits

0xf853,	// (0x000603ad) main_video3_pane_g

0x1550,	// (0x000520aa) main_video3_pane_t1_ParamLimits

0x1550,	// (0x000520aa) main_video3_pane_t1

0x157b,	// (0x000520d5) main_video3_pane_t2_ParamLimits

0x157b,	// (0x000520d5) main_video3_pane_t2

0x15a6,	// (0x00052100) main_video3_pane_t3_ParamLimits

0x15a6,	// (0x00052100) main_video3_pane_t3

0x0002,

0xf858,	// (0x000603b2) main_video3_pane_t_ParamLimits

0xf858,	// (0x000603b2) main_video3_pane_t

0x15d3,	// (0x0005212d) cams_zoom_vslider_pane_g1

0x15dc,	// (0x00052136) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x000603b9) cams_zoom_vslider_pane_g

0x15e4,	// (0x0005213e) small_slider_vertical_pane

0x0d38,	// (0x00051892) small_slider_vertical_pane_g1

0x0d38,	// (0x00051892) small_slider_vertical_pane_g2

0x15ec,	// (0x00052146) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x000603be) small_slider_vertical_pane_g

0x3a2b,	// (0x00054585) main_hwr_training_pane

0x15f5,	// (0x0005214f) hwr_training_instruct_pane_ParamLimits

0x15f5,	// (0x0005214f) hwr_training_instruct_pane

0x819c,	// (0x00058cf6) hwr_training_navi_pane_ParamLimits

0x819c,	// (0x00058cf6) hwr_training_navi_pane

0x81b6,	// (0x00058d10) hwr_training_write_pane_ParamLimits

0x81b6,	// (0x00058d10) hwr_training_write_pane

0xbcf7,	// (0x0005c851) bg_frame_shadow_pane

0x162c,	// (0x00052186) hwr_training_write_pane_g1

0x1634,	// (0x0005218e) hwr_training_write_pane_g2

0x163c,	// (0x00052196) hwr_training_write_pane_g3

0x1644,	// (0x0005219e) hwr_training_write_pane_g4

0x164c,	// (0x000521a6) hwr_training_write_pane_g5

0x1654,	// (0x000521ae) hwr_training_write_pane_g6

0x165c,	// (0x000521b6) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x000603c5) hwr_training_write_pane_g

0x81ee,	// (0x00058d48) hwr_training_navi_pane_g1_ParamLimits

0x81ee,	// (0x00058d48) hwr_training_navi_pane_g1

0x8200,	// (0x00058d5a) hwr_training_navi_pane_g2_ParamLimits

0x8200,	// (0x00058d5a) hwr_training_navi_pane_g2

0x8212,	// (0x00058d6c) hwr_training_navi_pane_g3_ParamLimits

0x8212,	// (0x00058d6c) hwr_training_navi_pane_g3

0x8222,	// (0x00058d7c) hwr_training_navi_pane_g4_ParamLimits

0x8222,	// (0x00058d7c) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x000603d4) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x000603d4) hwr_training_navi_pane_g

0x823c,	// (0x00058d96) hwr_training_navi_pane_t1

0x824a,	// (0x00058da4) list_single_hwr_training_instruct_pane_ParamLimits

0x824a,	// (0x00058da4) list_single_hwr_training_instruct_pane

0x1664,	// (0x000521be) list_single_hwr_training_instruct_pane_t1

0x0c78,	// (0x000517d2) bg_frame_shadow_pane_g1

0x1673,	// (0x000521cd) bg_frame_shadow_pane_g2

0x167b,	// (0x000521d5) bg_frame_shadow_pane_g3

0x1683,	// (0x000521dd) bg_frame_shadow_pane_g4

0x168b,	// (0x000521e5) bg_frame_shadow_pane_g5

0x1693,	// (0x000521ed) bg_frame_shadow_pane_g6

0x169b,	// (0x000521f5) bg_frame_shadow_pane_g7

0xc54f,	// (0x0005d0a9) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x000603df) bg_frame_shadow_pane_g

0x3a2b,	// (0x00054585) main_video_tele_dialer_pane

0x8280,	// (0x00058dda) aid_size_cell_video_keypad_ParamLimits

0x8280,	// (0x00058dda) aid_size_cell_video_keypad

0x8290,	// (0x00058dea) grid_video_dialer_keypad_pane_ParamLimits

0x8290,	// (0x00058dea) grid_video_dialer_keypad_pane

0x82c2,	// (0x00058e1c) video_down_pane_cp_ParamLimits

0x82c2,	// (0x00058e1c) video_down_pane_cp

0x82ea,	// (0x00058e44) cell_video_dialer_keypad_pane_ParamLimits

0x82ea,	// (0x00058e44) cell_video_dialer_keypad_pane

0x16a3,	// (0x000521fd) bg_button_pane_cp08_ParamLimits

0x16a3,	// (0x000521fd) bg_button_pane_cp08

0x82ff,	// (0x00058e59) cell_video_dialer_keypad_pane_g1_ParamLimits

0x82ff,	// (0x00058e59) cell_video_dialer_keypad_pane_g1

0x7abd,	// (0x00058617) mup3_rocker2_pane_ParamLimits

0x7abd,	// (0x00058617) mup3_rocker2_pane

0x0d38,	// (0x00051892) mup3_rocker2_pane_g1

0x69ad,	// (0x00057507) main_dialer2_pane

0x3a2b,	// (0x00054585) main_mp4_pane

0x833e,	// (0x00058e98) main_mp4_pane_g1_ParamLimits

0x833e,	// (0x00058e98) main_mp4_pane_g1

0x834c,	// (0x00058ea6) main_mp4_pane_g2_ParamLimits

0x834c,	// (0x00058ea6) main_mp4_pane_g2

0x835a,	// (0x00058eb4) main_mp4_pane_g3_ParamLimits

0x835a,	// (0x00058eb4) main_mp4_pane_g3

0x839f,	// (0x00058ef9) main_mp4_pane_g4_ParamLimits

0x839f,	// (0x00058ef9) main_mp4_pane_g4

0x83c7,	// (0x00058f21) main_mp4_pane_g5_ParamLimits

0x83c7,	// (0x00058f21) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x000603ff) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x000603ff) main_mp4_pane_g

0x8417,	// (0x00058f71) main_mp4_pane_t1_ParamLimits

0x8417,	// (0x00058f71) main_mp4_pane_t1

0x8473,	// (0x00058fcd) main_mp4_pane_t2_ParamLimits

0x8473,	// (0x00058fcd) main_mp4_pane_t2

0x16af,	// (0x00052209) main_mp4_pane_t3_ParamLimits

0x16af,	// (0x00052209) main_mp4_pane_t3

0x84c5,	// (0x0005901f) main_mp4_pane_t4_ParamLimits

0x84c5,	// (0x0005901f) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0006040c) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0006040c) main_mp4_pane_t

0x8509,	// (0x00059063) mp4_progress_pane_ParamLimits

0x8509,	// (0x00059063) mp4_progress_pane

0x8553,	// (0x000590ad) mp4_rocker_pane_ParamLimits

0x8553,	// (0x000590ad) mp4_rocker_pane

0x16d7,	// (0x00052231) mp4_progress_pane_t1

0x16f0,	// (0x0005224a) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00060415) mp4_progress_pane_t

0x1709,	// (0x00052263) mup_progress_pane_cp04

0x1e79,	// (0x000529d3) mp4_rocker_pane_g1

0x8573,	// (0x000590cd) aid_cell_size_keypad2_ParamLimits

0x8573,	// (0x000590cd) aid_cell_size_keypad2

0x8583,	// (0x000590dd) dialer2_ne_pane_ParamLimits

0x8583,	// (0x000590dd) dialer2_ne_pane

0x8591,	// (0x000590eb) grid_dialer2_keypad_pane_ParamLimits

0x8591,	// (0x000590eb) grid_dialer2_keypad_pane

0x1845,	// (0x0005239f) bg_popup_call_pane_cp07_ParamLimits

0x1845,	// (0x0005239f) bg_popup_call_pane_cp07

0x85a1,	// (0x000590fb) dialer2_ne_pane_t1_ParamLimits

0x85a1,	// (0x000590fb) dialer2_ne_pane_t1

0x85c6,	// (0x00059120) cell_dialer2_keypad_pane_ParamLimits

0x85c6,	// (0x00059120) cell_dialer2_keypad_pane

0x1727,	// (0x00052281) bg_button_pane_pane_cp04_ParamLimits

0x1727,	// (0x00052281) bg_button_pane_pane_cp04

0x85dd,	// (0x00059137) cell_dialer2_keypad_pane_g1_ParamLimits

0x85dd,	// (0x00059137) cell_dialer2_keypad_pane_g1

0x4733,	// (0x0005528d) aid_placing_vt_set_content_ParamLimits

0x4733,	// (0x0005528d) aid_placing_vt_set_content

0x475f,	// (0x000552b9) aid_placing_vt_set_title_ParamLimits

0x475f,	// (0x000552b9) aid_placing_vt_set_title

0x3a2b,	// (0x00054585) main_image3_pane

0x8677,	// (0x000591d1) area_side_right_pane_cp01_ParamLimits

0x8677,	// (0x000591d1) area_side_right_pane_cp01

0x86a4,	// (0x000591fe) main_image3_pane_g1_ParamLimits

0x86a4,	// (0x000591fe) main_image3_pane_g1

0x86b2,	// (0x0005920c) main_image3_pane_g2_ParamLimits

0x86b2,	// (0x0005920c) main_image3_pane_g2

0x86cb,	// (0x00059225) main_image3_pane_g3_ParamLimits

0x86cb,	// (0x00059225) main_image3_pane_g3

0x86e4,	// (0x0005923e) main_image3_pane_g4_ParamLimits

0x86e4,	// (0x0005923e) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x00060424) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x00060424) main_image3_pane_g

0x86fd,	// (0x00059257) main_image3_pane_t1_ParamLimits

0x86fd,	// (0x00059257) main_image3_pane_t1

0x8722,	// (0x0005927c) main_image3_pane_t2_ParamLimits

0x8722,	// (0x0005927c) main_image3_pane_t2

0x8741,	// (0x0005929b) main_image3_pane_t3_ParamLimits

0x8741,	// (0x0005929b) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0006042d) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0006042d) main_image3_pane_t

0x803f,	// (0x00058b99) grid_sctrl_middle_pane_cp01_ParamLimits

0x803f,	// (0x00058b99) grid_sctrl_middle_pane_cp01

0x87a2,	// (0x000592fc) cell_sctrl_middle_pane_cp01_ParamLimits

0x87a2,	// (0x000592fc) cell_sctrl_middle_pane_cp01

0x87b3,	// (0x0005930d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x87b3,	// (0x0005930d) cell_sctrl_middle_pane_cp01_g1

0x3a2b,	// (0x00054585) main_call4_pane

0x87c0,	// (0x0005931a) aid_size_button_call4_ParamLimits

0x87c0,	// (0x0005931a) aid_size_button_call4

0x87f0,	// (0x0005934a) call4_windows_pane_ParamLimits

0x87f0,	// (0x0005934a) call4_windows_pane

0x880a,	// (0x00059364) grid_call4_button_pane_ParamLimits

0x880a,	// (0x00059364) grid_call4_button_pane

0x1733,	// (0x0005228d) call4_windows_conf_pane

0x1748,	// (0x000522a2) popup_call4_audio_first_window_ParamLimits

0x1748,	// (0x000522a2) popup_call4_audio_first_window

0x1794,	// (0x000522ee) popup_call4_audio_second_window_ParamLimits

0x1794,	// (0x000522ee) popup_call4_audio_second_window

0x17a8,	// (0x00052302) popup_call4_audio_wait_window_ParamLimits

0x17a8,	// (0x00052302) popup_call4_audio_wait_window

0x882e,	// (0x00059388) cell_call4_button_pane_ParamLimits

0x882e,	// (0x00059388) cell_call4_button_pane

0x8853,	// (0x000593ad) bg_button_pane_cp09_ParamLimits

0x8853,	// (0x000593ad) bg_button_pane_cp09

0x885f,	// (0x000593b9) cell_call4_button_pane_g1_ParamLimits

0x885f,	// (0x000593b9) cell_call4_button_pane_g1

0x886c,	// (0x000593c6) cell_call4_button_pane_t1_ParamLimits

0x886c,	// (0x000593c6) cell_call4_button_pane_t1

0x17f0,	// (0x0005234a) popup_call4_audio_conf_window_ParamLimits

0x17f0,	// (0x0005234a) popup_call4_audio_conf_window

0x7af0,	// (0x0005864a) mup3_progress_pane_t1_ParamLimits

0x7b0f,	// (0x00058669) mup3_progress_pane_t2_ParamLimits

0x1106,	// (0x00051c60) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00060306) mup3_progress_pane_t_ParamLimits

0x1123,	// (0x00051c7d) mup_progress_pane_cp03_ParamLimits

0x8029,	// (0x00058b83) mup3_control_keys_pane_g4_copy1

0x8537,	// (0x00059091) mp4_rocker2_pane_ParamLimits

0x8537,	// (0x00059091) mp4_rocker2_pane

0x180c,	// (0x00052366) mp4_rocker2_pane_g1

0x1804,	// (0x0005235e) mp4_rocker2_pane_g2

0x887e,	// (0x000593d8) mp4_rocker2_pane_g3

0x8886,	// (0x000593e0) mp4_rocker2_pane_g4

0x888e,	// (0x000593e8) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00060436) mp4_rocker2_pane_g

0x3a2b,	// (0x00054585) main_camera4_pane

0x3a2b,	// (0x00054585) main_video4_pane

0x829e,	// (0x00058df8) main_video_tele_dialer_pane_t1_ParamLimits

0x829e,	// (0x00058df8) main_video_tele_dialer_pane_t1

0x82b0,	// (0x00058e0a) main_video_tele_dialer_pane_t2_ParamLimits

0x82b0,	// (0x00058e0a) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x000603f0) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x000603f0) main_video_tele_dialer_pane_t

0x88ae,	// (0x00059408) cam4_autofocus_pane_ParamLimits

0x88ae,	// (0x00059408) cam4_autofocus_pane

0x88c8,	// (0x00059422) cam4_image_uncrop_pane_ParamLimits

0x88c8,	// (0x00059422) cam4_image_uncrop_pane

0x88df,	// (0x00059439) cam4_indicators_pane_ParamLimits

0x88df,	// (0x00059439) cam4_indicators_pane

0x88fb,	// (0x00059455) main_camera4_pane_g1_ParamLimits

0x88fb,	// (0x00059455) main_camera4_pane_g1

0x8907,	// (0x00059461) main_camera4_pane_g2_ParamLimits

0x8907,	// (0x00059461) main_camera4_pane_g2

0x8907,	// (0x00059461) main_camera4_pane_g3_ParamLimits

0x8907,	// (0x00059461) main_camera4_pane_g3

0x8913,	// (0x0005946d) main_camera4_pane_g4_ParamLimits

0x8913,	// (0x0005946d) main_camera4_pane_g4

0x891f,	// (0x00059479) main_camera4_pane_g5_ParamLimits

0x891f,	// (0x00059479) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00060441) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00060441) main_camera4_pane_g

0x8939,	// (0x00059493) main_camera4_pane_t1_ParamLimits

0x8939,	// (0x00059493) main_camera4_pane_t1

0x8981,	// (0x000594db) bg_tb_trans_pane_cp06

0x8997,	// (0x000594f1) cam4_indicators_pane_g1

0x89a8,	// (0x00059502) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0006045c) cam4_indicators_pane_g

0x89c6,	// (0x00059520) cam4_indicators_pane_t1

0x89f0,	// (0x0005954a) main_video4_pane_g1_ParamLimits

0x89f0,	// (0x0005954a) main_video4_pane_g1

0x89fc,	// (0x00059556) main_video4_pane_g2_ParamLimits

0x89fc,	// (0x00059556) main_video4_pane_g2

0x8a08,	// (0x00059562) main_video4_pane_g3_ParamLimits

0x8a08,	// (0x00059562) main_video4_pane_g3

0x8a14,	// (0x0005956e) main_video4_pane_g4_ParamLimits

0x8a14,	// (0x0005956e) main_video4_pane_g4

0x0004,

0xf909,	// (0x00060463) main_video4_pane_g_ParamLimits

0xf909,	// (0x00060463) main_video4_pane_g

0x8a34,	// (0x0005958e) vid4_indicators_pane_ParamLimits

0x8a34,	// (0x0005958e) vid4_indicators_pane

0x8a51,	// (0x000595ab) video4_image_uncrop_cif_pane_ParamLimits

0x8a51,	// (0x000595ab) video4_image_uncrop_cif_pane

0x8a60,	// (0x000595ba) video4_image_uncrop_nhd_pane_ParamLimits

0x8a60,	// (0x000595ba) video4_image_uncrop_nhd_pane

0x88c8,	// (0x00059422) video4_image_uncrop_vga_pane_ParamLimits

0x88c8,	// (0x00059422) video4_image_uncrop_vga_pane

0x699f,	// (0x000574f9) bg_tb_trans_pane_cp07

0x8a75,	// (0x000595cf) vid4_indicators_pane_g1

0x8a89,	// (0x000595e3) vid4_indicators_pane_g2

0x8a9d,	// (0x000595f7) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0006046e) vid4_indicators_pane_g

0x8aca,	// (0x00059624) vid4_indicators_pane_t1

0x8ae1,	// (0x0005963b) cam4_autofocus_pane_g1

0x8ae9,	// (0x00059643) cam4_autofocus_pane_g2

0x8af1,	// (0x0005964b) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00060479) cam4_autofocus_pane_g

0x8af9,	// (0x00059653) cam4_autofocus_pane_g3_copy1

0x82ce,	// (0x00058e28) video_down_pane_cp_t1

0x82dc,	// (0x00058e36) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x000603f5) video_down_pane_cp_t

0x3a11,	// (0x0005456b) popup_vitu2_window_ParamLimits

0x3a11,	// (0x0005456b) popup_vitu2_window

0x8b01,	// (0x0005965b) aid_size_cell2_itu2_ParamLimits

0x8b01,	// (0x0005965b) aid_size_cell2_itu2

0x8b23,	// (0x0005967d) aid_size_cell_itu2_ParamLimits

0x8b23,	// (0x0005967d) aid_size_cell_itu2

0x8b67,	// (0x000596c1) bg_popup_window_pane_cp09_ParamLimits

0x8b67,	// (0x000596c1) bg_popup_window_pane_cp09

0x8b75,	// (0x000596cf) field_vitu2_entry_pane_ParamLimits

0x8b75,	// (0x000596cf) field_vitu2_entry_pane

0x8b95,	// (0x000596ef) grid_vitu2_function_pane_ParamLimits

0x8b95,	// (0x000596ef) grid_vitu2_function_pane

0x8bd9,	// (0x00059733) grid_vitu2_itu_pane_ParamLimits

0x8bd9,	// (0x00059733) grid_vitu2_itu_pane

0x8c4f,	// (0x000597a9) cell_vitu2_itu_pane_ParamLimits

0x8c4f,	// (0x000597a9) cell_vitu2_itu_pane

0x8c64,	// (0x000597be) cell_vitu2_function_pane_ParamLimits

0x8c64,	// (0x000597be) cell_vitu2_function_pane

0x1814,	// (0x0005236e) bg_popup_call_pane_cp08_ParamLimits

0x1814,	// (0x0005236e) bg_popup_call_pane_cp08

0x182d,	// (0x00052387) field_vitu2_entry_pane_g1

0x1839,	// (0x00052393) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00060480) field_vitu2_entry_pane_g

0x0421,	// (0x00050f7b) field_vitu2_entry_pane_t1_ParamLimits

0x0421,	// (0x00050f7b) field_vitu2_entry_pane_t1

0x0453,	// (0x00050fad) field_vitu2_entry_pane_t2_ParamLimits

0x0453,	// (0x00050fad) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00060487) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00060487) field_vitu2_entry_pane_t

0x8ca5,	// (0x000597ff) bg_button_pane_cp010_ParamLimits

0x8ca5,	// (0x000597ff) bg_button_pane_cp010

0x8cb3,	// (0x0005980d) cell_vitu2_itu_pane_g1

0x8cd1,	// (0x0005982b) cell_vitu2_itu_pane_t1_ParamLimits

0x8cd1,	// (0x0005982b) cell_vitu2_itu_pane_t1

0x3699,	// (0x000541f3) cell_vitu2_itu_pane_t2_ParamLimits

0x3699,	// (0x000541f3) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00060491) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00060491) cell_vitu2_itu_pane_t

0x699f,	// (0x000574f9) bg_button_pane_cp011

0x8d23,	// (0x0005987d) cell_vitu2_function_pane_g1

0x3a2b,	// (0x00054585) main_myfav_hc_pane

0x8783,	// (0x000592dd) popup_image3_note_pane_ParamLimits

0x8783,	// (0x000592dd) popup_image3_note_pane

0x8791,	// (0x000592eb) popup_image3_tool_bar_pane_ParamLimits

0x8791,	// (0x000592eb) popup_image3_tool_bar_pane

0x3707,	// (0x00054261) cell_vitu2_itu_pane_t3_ParamLimits

0x3707,	// (0x00054261) cell_vitu2_itu_pane_t3

0xbcf7,	// (0x0005c851) bg_popup_trans_pane

0x1877,	// (0x000523d1) grid_image3_tool_bar_pane

0x1881,	// (0x000523db) bg_popup_trans_pane_g1

0xd4ca,	// (0x0005e024) bg_popup_trans_pane_g2

0x1889,	// (0x000523e3) bg_popup_trans_pane_g3

0x1891,	// (0x000523eb) bg_popup_trans_pane_g4

0x1899,	// (0x000523f3) bg_popup_trans_pane_g5

0x18a1,	// (0x000523fb) bg_popup_trans_pane_g6

0x18a9,	// (0x00052403) bg_popup_trans_pane_g7

0x18b1,	// (0x0005240b) bg_popup_trans_pane_g8

0xd4aa,	// (0x0005e004) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00060498) bg_popup_trans_pane_g

0x18b9,	// (0x00052413) cell_image3_tool_bar_pane_ParamLimits

0x18b9,	// (0x00052413) cell_image3_tool_bar_pane

0x0d38,	// (0x00051892) cell_image3_tool_bar_pane_g1

0xbcf7,	// (0x0005c851) bg_popup_trans_pane_cp1

0x18cd,	// (0x00052427) popup_image3_note_pane_t1

0x18db,	// (0x00052435) popup_image3_note_pane_t2

0x18e9,	// (0x00052443) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x000604ab) popup_image3_note_pane_t

0x18f7,	// (0x00052451) popup_image3_note_pane_t3_copy1

0x8d37,	// (0x00059891) bg_myfav_hc_instruction_pane_ParamLimits

0x8d37,	// (0x00059891) bg_myfav_hc_instruction_pane

0x8d4f,	// (0x000598a9) cell_myfav_contact_pane_ParamLimits

0x8d4f,	// (0x000598a9) cell_myfav_contact_pane

0x8d69,	// (0x000598c3) cell_myfav_contact_pane_cp1_ParamLimits

0x8d69,	// (0x000598c3) cell_myfav_contact_pane_cp1

0x8d81,	// (0x000598db) cell_myfav_contact_pane_cp2_ParamLimits

0x8d81,	// (0x000598db) cell_myfav_contact_pane_cp2

0x8d99,	// (0x000598f3) cell_myfav_contact_pane_cp3_ParamLimits

0x8d99,	// (0x000598f3) cell_myfav_contact_pane_cp3

0x8db0,	// (0x0005990a) cell_myfav_contact_pane_cp4_ParamLimits

0x8db0,	// (0x0005990a) cell_myfav_contact_pane_cp4

0x8dc6,	// (0x00059920) cell_myfav_contact_pane_cp5_ParamLimits

0x8dc6,	// (0x00059920) cell_myfav_contact_pane_cp5

0x8dda,	// (0x00059934) cell_myfav_contact_pane_cp6_ParamLimits

0x8dda,	// (0x00059934) cell_myfav_contact_pane_cp6

0x8dee,	// (0x00059948) cell_myfav_contact_pane_cp7_ParamLimits

0x8dee,	// (0x00059948) cell_myfav_contact_pane_cp7

0x1905,	// (0x0005245f) listscroll_gen_pane_cp05

0x8e06,	// (0x00059960) main_myfav_hc_pane_g1_ParamLimits

0x8e06,	// (0x00059960) main_myfav_hc_pane_g1

0x8e1e,	// (0x00059978) main_myfav_hc_pane_g2_ParamLimits

0x8e1e,	// (0x00059978) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x000604b2) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x000604b2) main_myfav_hc_pane_g

0x8e4e,	// (0x000599a8) main_myfav_hc_pane_t1_ParamLimits

0x8e4e,	// (0x000599a8) main_myfav_hc_pane_t1

0x190e,	// (0x00052468) main_myfav_hc_pane_t2_ParamLimits

0x190e,	// (0x00052468) main_myfav_hc_pane_t2

0x1920,	// (0x0005247a) main_myfav_hc_pane_t3_ParamLimits

0x1920,	// (0x0005247a) main_myfav_hc_pane_t3

0x8e65,	// (0x000599bf) main_myfav_hc_pane_t4_ParamLimits

0x8e65,	// (0x000599bf) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x000604b9) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x000604b9) main_myfav_hc_pane_t

0x0d38,	// (0x00051892) bg_myfav_hc_instruction_pane_g1

0x1932,	// (0x0005248c) cell_myfav_contact_pane_g1_ParamLimits

0x1932,	// (0x0005248c) cell_myfav_contact_pane_g1

0x1932,	// (0x0005248c) cell_myfav_contact_pane_g2_ParamLimits

0x1932,	// (0x0005248c) cell_myfav_contact_pane_g2

0x193e,	// (0x00052498) cell_myfav_contact_pane_g3_ParamLimits

0x193e,	// (0x00052498) cell_myfav_contact_pane_g3

0x10f0,	// (0x00051c4a) cell_myfav_contact_pane_g4_ParamLimits

0x10f0,	// (0x00051c4a) cell_myfav_contact_pane_g4

0x194b,	// (0x000524a5) cell_myfav_contact_pane_g5_ParamLimits

0x194b,	// (0x000524a5) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x000604c4) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x000604c4) cell_myfav_contact_pane_g

0x8e36,	// (0x00059990) main_myfav_hc_pane_g3_ParamLimits

0x8e36,	// (0x00059990) main_myfav_hc_pane_g3

0x3924,	// (0x0005447e) popup_adpt_find_window

0x8e8f,	// (0x000599e9) afind_page_pane_ParamLimits

0x8e8f,	// (0x000599e9) afind_page_pane

0x8e9c,	// (0x000599f6) aid_size_cell_afind_ParamLimits

0x8e9c,	// (0x000599f6) aid_size_cell_afind

0x8eb6,	// (0x00059a10) bg_popup_sub_pane_cp09_ParamLimits

0x8eb6,	// (0x00059a10) bg_popup_sub_pane_cp09

0x8ec3,	// (0x00059a1d) find_pane_cp01_ParamLimits

0x8ec3,	// (0x00059a1d) find_pane_cp01

0x1957,	// (0x000524b1) grid_afind_control_pane_ParamLimits

0x1957,	// (0x000524b1) grid_afind_control_pane

0x8ed0,	// (0x00059a2a) grid_afind_pane_ParamLimits

0x8ed0,	// (0x00059a2a) grid_afind_pane

0x8eec,	// (0x00059a46) cell_afind_pane_ParamLimits

0x8eec,	// (0x00059a46) cell_afind_pane

0x0d38,	// (0x00051892) afind_page_pane_g1

0x8f34,	// (0x00059a8e) afind_page_pane_g2

0x8f3d,	// (0x00059a97) afind_page_pane_g3

0x0002,

0xf975,	// (0x000604cf) afind_page_pane_g

0x8f46,	// (0x00059aa0) afind_page_pane_t1

0x196b,	// (0x000524c5) cell_afind_grid_control_pane_ParamLimits

0x196b,	// (0x000524c5) cell_afind_grid_control_pane

0x1727,	// (0x00052281) bg_button_pane_cp69_ParamLimits

0x1727,	// (0x00052281) bg_button_pane_cp69

0x8f5d,	// (0x00059ab7) cell_afind_pane_g1_ParamLimits

0x8f5d,	// (0x00059ab7) cell_afind_pane_g1

0x8f6a,	// (0x00059ac4) cell_afind_pane_t1_ParamLimits

0x8f6a,	// (0x00059ac4) cell_afind_pane_t1

0xc68f,	// (0x0005d1e9) bg_button_pane_cp72

0x197a,	// (0x000524d4) cell_afind_grid_control_pane_g1

0x651a,	// (0x00057074) aid_image_placing_area_ParamLimits

0x651a,	// (0x00057074) aid_image_placing_area

0x13f5,	// (0x00051f4f) field_vitu_entry_pane_g1_ParamLimits

0x13f5,	// (0x00051f4f) field_vitu_entry_pane_g1

0x1401,	// (0x00051f5b) field_vitu_entry_pane_g2_ParamLimits

0x1401,	// (0x00051f5b) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00060380) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00060380) field_vitu_entry_pane_g

0x80c3,	// (0x00058c1d) cell_vitu_itu_pane_g1_ParamLimits

0x8105,	// (0x00058c5f) cell_vitu_itu_pane_t3_ParamLimits

0x8105,	// (0x00058c5f) cell_vitu_itu_pane_t3

0x16d7,	// (0x00052231) mp4_progress_pane_t1_ParamLimits

0x16f0,	// (0x0005224a) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00060415) mp4_progress_pane_t_ParamLimits

0x1709,	// (0x00052263) mup_progress_pane_cp04_ParamLimits

0x8e79,	// (0x000599d3) main_myfav_hc_pane_t5_ParamLimits

0x8e79,	// (0x000599d3) main_myfav_hc_pane_t5

0x37b4,	// (0x0005430e) aid_zoom_text_primary

0x3924,	// (0x0005447e) popup_adpt_find_window_ParamLimits

0x699f,	// (0x000574f9) main_cam_set_pane

0x88ed,	// (0x00059447) cam4_zoom_pane_ParamLimits

0x88ed,	// (0x00059447) cam4_zoom_pane

0x8f7c,	// (0x00059ad6) main_cam_set_pane_g1_ParamLimits

0x8f7c,	// (0x00059ad6) main_cam_set_pane_g1

0x8f8a,	// (0x00059ae4) main_cam_set_pane_g2_ParamLimits

0x8f8a,	// (0x00059ae4) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x000604d6) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x000604d6) main_cam_set_pane_g

0x8f96,	// (0x00059af0) main_cam_set_pane_t1_ParamLimits

0x8f96,	// (0x00059af0) main_cam_set_pane_t1

0x8fb2,	// (0x00059b0c) main_cset_listscroll_pane_ParamLimits

0x8fb2,	// (0x00059b0c) main_cset_listscroll_pane

0x8fdd,	// (0x00059b37) main_cset_slider_pane_ParamLimits

0x8fdd,	// (0x00059b37) main_cset_slider_pane

0x198b,	// (0x000524e5) main_cset_list_pane_ParamLimits

0x198b,	// (0x000524e5) main_cset_list_pane

0x199b,	// (0x000524f5) scroll_pane_cp028

0x8ffc,	// (0x00059b56) aid_area_touch_slider

0x9018,	// (0x00059b72) cset_slider_pane

0x9042,	// (0x00059b9c) main_cset_slider_pane_g1

0x9057,	// (0x00059bb1) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x000604db) main_cset_slider_pane_g

0x19d4,	// (0x0005252e) main_cset_slider_pane_t1

0x911f,	// (0x00059c79) main_cset_slider_pane_t2

0x9139,	// (0x00059c93) main_cset_slider_pane_t3

0x9153,	// (0x00059cad) main_cset_slider_pane_t4

0x9171,	// (0x00059ccb) main_cset_slider_pane_t5

0x9193,	// (0x00059ced) main_cset_slider_pane_t6

0x91aa,	// (0x00059d04) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00060500) main_cset_slider_pane_t

0x92b8,	// (0x00059e12) cset_list_set_pane_ParamLimits

0x92b8,	// (0x00059e12) cset_list_set_pane

0x92d5,	// (0x00059e2f) aid_position_infowindow_above

0x92dd,	// (0x00059e37) aid_position_infowindow_below

0x92e5,	// (0x00059e3f) cset_list_set_pane_g1_ParamLimits

0x92e5,	// (0x00059e3f) cset_list_set_pane_g1

0x0582,	// (0x000510dc) cset_list_set_pane_g3_ParamLimits

0x0582,	// (0x000510dc) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0006051f) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0006051f) cset_list_set_pane_g

0x0591,	// (0x000510eb) cset_list_set_pane_t1_ParamLimits

0x0591,	// (0x000510eb) cset_list_set_pane_t1

0xc69f,	// (0x0005d1f9) list_highlight_pane_cp021_ParamLimits

0xc69f,	// (0x0005d1f9) list_highlight_pane_cp021

0xdd23,	// (0x0005e87d) cset_slider_pane_g1

0xdd35,	// (0x0005e88f) cset_slider_pane_g2

0xdd2c,	// (0x0005e886) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x00060524) cset_slider_pane_g

0x92f1,	// (0x00059e4b) aid_area_touch_cam4_zoom

0x92f9,	// (0x00059e53) cam4_zoom_cont_pane

0x9301,	// (0x00059e5b) cam4_zoom_pane_g1

0x9309,	// (0x00059e63) cam4_zoom_pane_g2

0x9311,	// (0x00059e6b) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x0006052b) cam4_zoom_pane_g

0x9319,	// (0x00059e73) cam4_zoom_cont_pane_g1

0x9322,	// (0x00059e7c) cam4_zoom_cont_pane_g2

0x932b,	// (0x00059e85) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x00060532) cam4_zoom_cont_pane_g

0x87da,	// (0x00059334) call4_image_pane_ParamLimits

0x87da,	// (0x00059334) call4_image_pane

0x1733,	// (0x0005228d) call4_windows_conf_pane_ParamLimits

0x1772,	// (0x000522cc) popup_call4_audio_in_window_ParamLimits

0x1772,	// (0x000522cc) popup_call4_audio_in_window

0xbcf7,	// (0x0005c851) bg_popup_call2_act_pane_cp02

0x17e8,	// (0x00052342) call4_list_conf_pane

0x0d38,	// (0x00051892) call4_image_pane_g1

0x0d38,	// (0x00051892) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00060246) call4_image_pane_g

0x1a8f,	// (0x000525e9) list_single_graphic_popup_conf4_pane_ParamLimits

0x1a8f,	// (0x000525e9) list_single_graphic_popup_conf4_pane

0xbcf7,	// (0x0005c851) list_highlight_pane_cp022

0x1aa2,	// (0x000525fc) list_single_graphic_popup_conf4_pane_g1

0xda06,	// (0x0005e560) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x00060539) list_single_graphic_popup_conf4_pane_g

0x1aaa,	// (0x00052604) list_single_graphic_popup_conf4_pane_t1

0x48c3,	// (0x0005541d) popup_vtel_slider_window_ParamLimits

0x48c3,	// (0x0005541d) popup_vtel_slider_window

0x1715,	// (0x0005226f) dialer2_ne_pane_t2_ParamLimits

0x1715,	// (0x0005226f) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0006041a) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0006041a) dialer2_ne_pane_t

0xc69f,	// (0x0005d1f9) bg_popup_sub_pane_cp010_ParamLimits

0xc69f,	// (0x0005d1f9) bg_popup_sub_pane_cp010

0x9334,	// (0x00059e8e) popup_vtel_slider_window_g1_ParamLimits

0x9334,	// (0x00059e8e) popup_vtel_slider_window_g1

0x9340,	// (0x00059e9a) popup_vtel_slider_window_g2_ParamLimits

0x9340,	// (0x00059e9a) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x0006053e) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x0006053e) popup_vtel_slider_window_g

0x9388,	// (0x00059ee2) vtel_slider_pane_ParamLimits

0x9388,	// (0x00059ee2) vtel_slider_pane

0x9397,	// (0x00059ef1) vtel_slider_pane_g1_ParamLimits

0x9397,	// (0x00059ef1) vtel_slider_pane_g1

0x93a4,	// (0x00059efe) vtel_slider_pane_g2_ParamLimits

0x93a4,	// (0x00059efe) vtel_slider_pane_g2

0x93b1,	// (0x00059f0b) vtel_slider_pane_g3_ParamLimits

0x93b1,	// (0x00059f0b) vtel_slider_pane_g3

0x9397,	// (0x00059ef1) vtel_slider_pane_g4_ParamLimits

0x9397,	// (0x00059ef1) vtel_slider_pane_g4

0x93be,	// (0x00059f18) vtel_slider_pane_g5_ParamLimits

0x93be,	// (0x00059f18) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x00060547) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x00060547) vtel_slider_pane_g

0x3a2b,	// (0x00054585) main_gallery2_pane

0x8b49,	// (0x000596a3) aid_size_row_itut2_dropdow_list_ParamLimits

0x8b49,	// (0x000596a3) aid_size_row_itut2_dropdow_list

0x8bb7,	// (0x00059711) grid_vitu2_function_top_pane_ParamLimits

0x8bb7,	// (0x00059711) grid_vitu2_function_top_pane

0x8c0d,	// (0x00059767) popup_vitu2_dropdown_list_window_ParamLimits

0x8c0d,	// (0x00059767) popup_vitu2_dropdown_list_window

0x8c2d,	// (0x00059787) popup_vitu2_match_list_window

0x93cb,	// (0x00059f25) cell_vitu2_function_top_pane_ParamLimits

0x93cb,	// (0x00059f25) cell_vitu2_function_top_pane

0x93eb,	// (0x00059f45) cell_vitu2_function_top_pane_cp01_ParamLimits

0x93eb,	// (0x00059f45) cell_vitu2_function_top_pane_cp01

0x9409,	// (0x00059f63) cell_vitu2_function_top_wide_pane_ParamLimits

0x9409,	// (0x00059f63) cell_vitu2_function_top_wide_pane

0x699f,	// (0x000574f9) bg_button_pane_cp012

0x9427,	// (0x00059f81) cell_vitu2_function_top_pane_g1

0x9436,	// (0x00059f90) bg_button_pane_cp013_ParamLimits

0x9436,	// (0x00059f90) bg_button_pane_cp013

0x9452,	// (0x00059fac) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9452,	// (0x00059fac) cell_vitu2_function_top_wide_pane_g1

0x3a11,	// (0x0005456b) bg_popup_sub_pane_cp20

0x946a,	// (0x00059fc4) list_vitu2_match_list_pane

0x1881,	// (0x000523db) bg_popup_sub_pane_cp20_g1

0x1889,	// (0x000523e3) bg_popup_sub_pane_cp20_g2

0xd4ca,	// (0x0005e024) bg_popup_sub_pane_cp20_g3

0x1891,	// (0x000523eb) bg_popup_sub_pane_cp20_g4

0xd4aa,	// (0x0005e004) bg_popup_sub_pane_cp20_g5

0x1ac0,	// (0x0005261a) bg_popup_sub_pane_cp20_g6

0x18a1,	// (0x000523fb) bg_popup_sub_pane_cp20_g7

0x18a9,	// (0x00052403) bg_popup_sub_pane_cp20_g8

0x18b1,	// (0x0005240b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x00060552) bg_popup_sub_pane_cp20_g

0x9482,	// (0x00059fdc) list_vitu2_match_list_item_pane_ParamLimits

0x9482,	// (0x00059fdc) list_vitu2_match_list_item_pane

0x9494,	// (0x00059fee) list_vitu2_match_list_item_pane_t1

0x3a2b,	// (0x00054585) bg_popup_sub_pane_cp21

0x94d1,	// (0x0005a02b) grid_vitu2_dropdown_list_pane

0x94d9,	// (0x0005a033) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x94d9,	// (0x0005a033) cell_vitu2_dropdown_list_char_pane

0x94fa,	// (0x0005a054) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x94fa,	// (0x0005a054) cell_vitu2_dropdown_list_ctrl_pane

0x1ada,	// (0x00052634) cell_vitu2_dropdown_list_char_pane_g1

0x1ad1,	// (0x0005262b) cell_vitu2_dropdown_list_char_pane_g2

0x1ac8,	// (0x00052622) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x0006056f) cell_vitu2_dropdown_list_char_pane_g

0x9526,	// (0x0005a080) cell_vitu2_dropdown_list_char_pane_t1

0x9534,	// (0x0005a08e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9534,	// (0x0005a08e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9544,	// (0x0005a09e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9544,	// (0x0005a09e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9555,	// (0x0005a0af) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9555,	// (0x0005a0af) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9565,	// (0x0005a0bf) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9565,	// (0x0005a0bf) cell_vitu2_dropdown_list_ctrl_pane_g4

0x8981,	// (0x000594db) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x8981,	// (0x000594db) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00060576) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00060576) cell_vitu2_dropdown_list_ctrl_pane_g

0x9581,	// (0x0005a0db) aid_size_cell_gallery2_ParamLimits

0x9581,	// (0x0005a0db) aid_size_cell_gallery2

0x958f,	// (0x0005a0e9) grid_gallery2_pane_ParamLimits

0x958f,	// (0x0005a0e9) grid_gallery2_pane

0x959e,	// (0x0005a0f8) scroll_pane_cp029_ParamLimits

0x959e,	// (0x0005a0f8) scroll_pane_cp029

0x95aa,	// (0x0005a104) cell_gallery2_pane_ParamLimits

0x95aa,	// (0x0005a104) cell_gallery2_pane

0x1ae3,	// (0x0005263d) cell_gallery2_pane_g2

0x95db,	// (0x0005a135) cell_gallery2_pane_g3

0x1aed,	// (0x00052647) cell_gallery2_pane_g4

0x1af5,	// (0x0005264f) cell_gallery2_pane_g5

0xdbdf,	// (0x0005e739) grid_highlight_pane_cp10

0x8c2d,	// (0x00059787) popup_vitu2_match_list_window_ParamLimits

0x8c3f,	// (0x00059799) popup_vitu2_query_window_ParamLimits

0x8c3f,	// (0x00059799) popup_vitu2_query_window

0x3a2b,	// (0x00054585) bg_vitu2_candi_button_pane

0x1ada,	// (0x00052634) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1ad1,	// (0x0005262b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1ac8,	// (0x00052622) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x95e3,	// (0x0005a13d) bg_button_pane_cp015

0x95f5,	// (0x0005a14f) bg_button_pane_cp016

0x9608,	// (0x0005a162) bg_button_pane_cp017

0xf02a,	// (0x0005fb84) bg_popup_sub_pane_cp22

0x1afd,	// (0x00052657) popup_vitu2_query_window_g1

0x964d,	// (0x0005a1a7) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00060581) popup_vitu2_query_window_g

0x966a,	// (0x0005a1c4) popup_vitu2_query_window_t1_ParamLimits

0x966a,	// (0x0005a1c4) popup_vitu2_query_window_t1

0x969d,	// (0x0005a1f7) popup_vitu2_query_window_t2_ParamLimits

0x969d,	// (0x0005a1f7) popup_vitu2_query_window_t2

0x96af,	// (0x0005a209) popup_vitu2_query_window_t3_ParamLimits

0x96af,	// (0x0005a209) popup_vitu2_query_window_t3

0x96d7,	// (0x0005a231) popup_vitu2_query_window_t4_ParamLimits

0x96d7,	// (0x0005a231) popup_vitu2_query_window_t4

0x96f8,	// (0x0005a252) popup_vitu2_query_window_t5_ParamLimits

0x96f8,	// (0x0005a252) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00060588) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00060588) popup_vitu2_query_window_t

0x1983,	// (0x000524dd) main_cset_text_pane

0x8ffc,	// (0x00059b56) aid_area_touch_slider_ParamLimits

0x9018,	// (0x00059b72) cset_slider_pane_ParamLimits

0x9042,	// (0x00059b9c) main_cset_slider_pane_g1_ParamLimits

0x9057,	// (0x00059bb1) main_cset_slider_pane_g2_ParamLimits

0x19a4,	// (0x000524fe) main_cset_slider_pane_g3_ParamLimits

0x19a4,	// (0x000524fe) main_cset_slider_pane_g3

0x906c,	// (0x00059bc6) main_cset_slider_pane_g4_ParamLimits

0x906c,	// (0x00059bc6) main_cset_slider_pane_g4

0x907b,	// (0x00059bd5) main_cset_slider_pane_g5_ParamLimits

0x907b,	// (0x00059bd5) main_cset_slider_pane_g5

0x9089,	// (0x00059be3) main_cset_slider_pane_g6_ParamLimits

0x9089,	// (0x00059be3) main_cset_slider_pane_g6

0xf981,	// (0x000604db) main_cset_slider_pane_g_ParamLimits

0x19d4,	// (0x0005252e) main_cset_slider_pane_t1_ParamLimits

0x911f,	// (0x00059c79) main_cset_slider_pane_t2_ParamLimits

0x9139,	// (0x00059c93) main_cset_slider_pane_t3_ParamLimits

0x9153,	// (0x00059cad) main_cset_slider_pane_t4_ParamLimits

0x9171,	// (0x00059ccb) main_cset_slider_pane_t5_ParamLimits

0x9193,	// (0x00059ced) main_cset_slider_pane_t6_ParamLimits

0x91aa,	// (0x00059d04) main_cset_slider_pane_t7_ParamLimits

0x91d8,	// (0x00059d32) main_cset_slider_pane_t8_ParamLimits

0x91d8,	// (0x00059d32) main_cset_slider_pane_t8

0x9200,	// (0x00059d5a) main_cset_slider_pane_t9_ParamLimits

0x9200,	// (0x00059d5a) main_cset_slider_pane_t9

0x9228,	// (0x00059d82) main_cset_slider_pane_t10_ParamLimits

0x9228,	// (0x00059d82) main_cset_slider_pane_t10

0x9250,	// (0x00059daa) main_cset_slider_pane_t11_ParamLimits

0x9250,	// (0x00059daa) main_cset_slider_pane_t11

0x927a,	// (0x00059dd4) main_cset_slider_pane_t12_ParamLimits

0x927a,	// (0x00059dd4) main_cset_slider_pane_t12

0x9299,	// (0x00059df3) main_cset_slider_pane_t13_ParamLimits

0x9299,	// (0x00059df3) main_cset_slider_pane_t13

0xf9a6,	// (0x00060500) main_cset_slider_pane_t_ParamLimits

0xbcf7,	// (0x0005c851) bg_popup_sub_pane_cp011

0x1b09,	// (0x00052663) main_cset_text_pane_g1

0x1b11,	// (0x0005266b) main_cset_text_pane_t1

0x1b1f,	// (0x00052679) main_cset_text_pane_t2

0x1b2d,	// (0x00052687) main_cset_text_pane_t3

0x1b3b,	// (0x00052695) main_cset_text_pane_t4

0x1b49,	// (0x000526a3) main_cset_text_pane_t5

0x1b57,	// (0x000526b1) main_cset_text_pane_t6

0x1b65,	// (0x000526bf) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x00060597) main_cset_text_pane_t

0x3a2b,	// (0x00054585) main_cam4_burst_pane

0x3a2b,	// (0x00054585) main_cam5_pane

0xd5ed,	// (0x0005e147) bg_button_pane_cp019

0x8f54,	// (0x00059aae) bg_button_pane_cp020

0x19b0,	// (0x0005250a) main_cset_slider_pane_g7_ParamLimits

0x19b0,	// (0x0005250a) main_cset_slider_pane_g7

0x19bc,	// (0x00052516) main_cset_slider_pane_g8_ParamLimits

0x19bc,	// (0x00052516) main_cset_slider_pane_g8

0x909f,	// (0x00059bf9) main_cset_slider_pane_g9_ParamLimits

0x909f,	// (0x00059bf9) main_cset_slider_pane_g9

0x90ab,	// (0x00059c05) main_cset_slider_pane_g10_ParamLimits

0x90ab,	// (0x00059c05) main_cset_slider_pane_g10

0x90b7,	// (0x00059c11) main_cset_slider_pane_g11_ParamLimits

0x90b7,	// (0x00059c11) main_cset_slider_pane_g11

0x90c3,	// (0x00059c1d) main_cset_slider_pane_g12_ParamLimits

0x90c3,	// (0x00059c1d) main_cset_slider_pane_g12

0x90cf,	// (0x00059c29) main_cset_slider_pane_g13_ParamLimits

0x90cf,	// (0x00059c29) main_cset_slider_pane_g13

0x90dd,	// (0x00059c37) main_cset_slider_pane_g14_ParamLimits

0x90dd,	// (0x00059c37) main_cset_slider_pane_g14

0x90eb,	// (0x00059c45) main_cset_slider_pane_g15_ParamLimits

0x90eb,	// (0x00059c45) main_cset_slider_pane_g15

0x1a02,	// (0x0005255c) main_cset_slider_pane_t14_ParamLimits

0x1a02,	// (0x0005255c) main_cset_slider_pane_t14

0x1a3b,	// (0x00052595) main_cset_slider_pane_t15_ParamLimits

0x1a3b,	// (0x00052595) main_cset_slider_pane_t15

0x976f,	// (0x0005a2c9) aid_cam4_burst_size_cell_ParamLimits

0x976f,	// (0x0005a2c9) aid_cam4_burst_size_cell

0x978b,	// (0x0005a2e5) grid_cam4_burst_pane_ParamLimits

0x978b,	// (0x0005a2e5) grid_cam4_burst_pane

0x97bb,	// (0x0005a315) linegrid_cam4_burst_pane_ParamLimits

0x97bb,	// (0x0005a315) linegrid_cam4_burst_pane

0x97dd,	// (0x0005a337) scroll_pane_cp30_ParamLimits

0x97dd,	// (0x0005a337) scroll_pane_cp30

0x97e9,	// (0x0005a343) cell_cam4_burst_pane_ParamLimits

0x97e9,	// (0x0005a343) cell_cam4_burst_pane

0x1b73,	// (0x000526cd) linegrid_cam4_burst_pane_g1_ParamLimits

0x1b73,	// (0x000526cd) linegrid_cam4_burst_pane_g1

0x9825,	// (0x0005a37f) linegrid_cam4_burst_pane_g2_ParamLimits

0x9825,	// (0x0005a37f) linegrid_cam4_burst_pane_g2

0x1b80,	// (0x000526da) linegrid_cam4_burst_pane_g3_ParamLimits

0x1b80,	// (0x000526da) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x000605a6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x000605a6) linegrid_cam4_burst_pane_g

0x9836,	// (0x0005a390) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9836,	// (0x0005a390) linegrid_cam4_burst_pane_g3_copy1

0x1b8d,	// (0x000526e7) linegrid_cam4_burst_pane_g4_ParamLimits

0x1b8d,	// (0x000526e7) linegrid_cam4_burst_pane_g4

0x9850,	// (0x0005a3aa) linegrid_cam4_burst_pane_g5_ParamLimits

0x9850,	// (0x0005a3aa) linegrid_cam4_burst_pane_g5

0x9861,	// (0x0005a3bb) linegrid_cam4_burst_pane_g6_ParamLimits

0x9861,	// (0x0005a3bb) linegrid_cam4_burst_pane_g6

0x1b9a,	// (0x000526f4) linegrid_cam4_burst_pane_g7_ParamLimits

0x1b9a,	// (0x000526f4) linegrid_cam4_burst_pane_g7

0x9872,	// (0x0005a3cc) cell_cam4_burst_pane_g1

0x1bb3,	// (0x0005270d) main_cam5_pane_t1_ParamLimits

0x1bb3,	// (0x0005270d) main_cam5_pane_t1

0x1bc5,	// (0x0005271f) main_cam5_pane_t2_ParamLimits

0x1bc5,	// (0x0005271f) main_cam5_pane_t2

0x1bd7,	// (0x00052731) main_cam5_pane_t3_ParamLimits

0x1bd7,	// (0x00052731) main_cam5_pane_t3

0x1be9,	// (0x00052743) main_cam5_pane_t4_ParamLimits

0x1be9,	// (0x00052743) main_cam5_pane_t4

0x1bff,	// (0x00052759) main_cam5_pane_t5_ParamLimits

0x1bff,	// (0x00052759) main_cam5_pane_t5

0x1c11,	// (0x0005276b) main_cam5_pane_t6_ParamLimits

0x1c11,	// (0x0005276b) main_cam5_pane_t6

0x1c25,	// (0x0005277f) main_cam5_pane_t7_ParamLimits

0x1c25,	// (0x0005277f) main_cam5_pane_t7

0x1c37,	// (0x00052791) main_cam5_pane_t8_ParamLimits

0x1c37,	// (0x00052791) main_cam5_pane_t8

0x1c53,	// (0x000527ad) main_cam5_pane_t9_ParamLimits

0x1c53,	// (0x000527ad) main_cam5_pane_t9

0x1c65,	// (0x000527bf) main_cam5_pane_t10_ParamLimits

0x1c65,	// (0x000527bf) main_cam5_pane_t10

0x1c77,	// (0x000527d1) main_cam5_pane_t11_ParamLimits

0x1c77,	// (0x000527d1) main_cam5_pane_t11

0x1c89,	// (0x000527e3) main_cam5_pane_t12_ParamLimits

0x1c89,	// (0x000527e3) main_cam5_pane_t12

0x1c9e,	// (0x000527f8) main_cam5_pane_t13_ParamLimits

0x1c9e,	// (0x000527f8) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x000605b2) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x000605b2) main_cam5_pane_t

0x39da,	// (0x00054534) popup_scut_keymap_window_ParamLimits

0x39da,	// (0x00054534) popup_scut_keymap_window

0x9885,	// (0x0005a3df) aid_size_cell_brow_shortcut

0xdbdf,	// (0x0005e739) bg_popup_window_pane_cp010

0x9891,	// (0x0005a3eb) grid_scut_pane

0x989d,	// (0x0005a3f7) cell_scut_pane_ParamLimits

0x989d,	// (0x0005a3f7) cell_scut_pane

0x98b4,	// (0x0005a40e) cell_scut_pane_g1

0x1cbb,	// (0x00052815) cell_scut_pane_t1

0x1cca,	// (0x00052824) cell_scut_pane_t2

0x98bd,	// (0x0005a417) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x000605cd) cell_scut_pane_t

0x7713,	// (0x0005826d) main_mup3_pane_g8_ParamLimits

0x7713,	// (0x0005826d) main_mup3_pane_g8

0x8b57,	// (0x000596b1) area_vitu2_query_pane_ParamLimits

0x8b57,	// (0x000596b1) area_vitu2_query_pane

0x961b,	// (0x0005a175) input_focus_pane_cp08

0x1cd9,	// (0x00052833) area_vitu2_query_pane_g1

0x98cb,	// (0x0005a425) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x000605d4) area_vitu2_query_pane_g

0x98dc,	// (0x0005a436) area_vitu2_query_pane_t1_ParamLimits

0x98dc,	// (0x0005a436) area_vitu2_query_pane_t1

0x98f0,	// (0x0005a44a) area_vitu2_query_pane_t2_ParamLimits

0x98f0,	// (0x0005a44a) area_vitu2_query_pane_t2

0x9904,	// (0x0005a45e) area_vitu2_query_pane_t3_ParamLimits

0x9904,	// (0x0005a45e) area_vitu2_query_pane_t3

0x0496,	// (0x00050ff0) area_vitu2_query_pane_t4_ParamLimits

0x0496,	// (0x00050ff0) area_vitu2_query_pane_t4

0x04be,	// (0x00051018) area_vitu2_query_pane_t5_ParamLimits

0x04be,	// (0x00051018) area_vitu2_query_pane_t5

0x04e6,	// (0x00051040) area_vitu2_query_pane_t6_ParamLimits

0x04e6,	// (0x00051040) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x000605d9) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x000605d9) area_vitu2_query_pane_t

0x992c,	// (0x0005a486) bg_button_pane_cp018

0x993a,	// (0x0005a494) bg_button_pane_cp021

0x9946,	// (0x0005a4a0) bg_button_pane_cp022

0x9957,	// (0x0005a4b1) input_focus_pane_cp09

0x5b3f,	// (0x00056699) aid_size_touch_mv_arrow_left

0x5b6a,	// (0x000566c4) aid_size_touch_mv_arrow_right

0x9103,	// (0x00059c5d) main_cset_slider_pane_g16_ParamLimits

0x9103,	// (0x00059c5d) main_cset_slider_pane_g16

0x9111,	// (0x00059c6b) main_cset_slider_pane_g17_ParamLimits

0x9111,	// (0x00059c6b) main_cset_slider_pane_g17

0x9872,	// (0x0005a3cc) cell_cam4_burst_pane_g1_ParamLimits

0xbcf7,	// (0x0005c851) compa_mode_pane

0x934c,	// (0x00059ea6) popup_vtel_slider_window_g3_ParamLimits

0x934c,	// (0x00059ea6) popup_vtel_slider_window_g3

0x9360,	// (0x00059eba) popup_vtel_slider_window_g4_ParamLimits

0x9360,	// (0x00059eba) popup_vtel_slider_window_g4

0x9374,	// (0x00059ece) popup_vtel_slider_window_t1_ParamLimits

0x9374,	// (0x00059ece) popup_vtel_slider_window_t1

0x3a2b,	// (0x00054585) main_cl_pane

0x6a39,	// (0x00057593) popup_imed_adjust2_window_ParamLimits

0xf02a,	// (0x0005fb84) bg_tb_trans_pane_cp05_ParamLimits

0x132a,	// (0x00051e84) popup_imed_adjust2_window_g1_ParamLimits

0x1339,	// (0x00051e93) popup_imed_adjust2_window_g2_ParamLimits

0x1339,	// (0x00051e93) popup_imed_adjust2_window_g2

0x1345,	// (0x00051e9f) popup_imed_adjust2_window_g3_ParamLimits

0x1345,	// (0x00051e9f) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00060344) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00060344) popup_imed_adjust2_window_g

0x1351,	// (0x00051eab) popup_imed_adjust2_window_t1_ParamLimits

0x1369,	// (0x00051ec3) slider_imed_adjust_pane_ParamLimits

0x137d,	// (0x00051ed7) slider_imed_adjust_pane_g1_ParamLimits

0x138d,	// (0x00051ee7) slider_imed_adjust_pane_g2_ParamLimits

0x139d,	// (0x00051ef7) slider_imed_adjust_pane_g3_ParamLimits

0x13ae,	// (0x00051f08) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0006034b) slider_imed_adjust_pane_g_ParamLimits

0x8896,	// (0x000593f0) aid_touch_area_cam4_ParamLimits

0x8896,	// (0x000593f0) aid_touch_area_cam4

0x88a6,	// (0x00059400) battery_pane_cp01

0x892d,	// (0x00059487) main_camera4_pane_g6_ParamLimits

0x892d,	// (0x00059487) main_camera4_pane_g6

0x894b,	// (0x000594a5) main_camera4_pane_t2_ParamLimits

0x894b,	// (0x000594a5) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0006044e) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0006044e) main_camera4_pane_t

0x89e0,	// (0x0005953a) aid_touch_area_vid4_ParamLimits

0x89e0,	// (0x0005953a) aid_touch_area_vid4

0x8a20,	// (0x0005957a) main_video4_pane_g5_ParamLimits

0x8a20,	// (0x0005957a) main_video4_pane_g5

0x8a42,	// (0x0005959c) vid4_progress_pane_ParamLimits

0x8a42,	// (0x0005959c) vid4_progress_pane

0x19c8,	// (0x00052522) main_cset_slider_pane_g18_ParamLimits

0x19c8,	// (0x00052522) main_cset_slider_pane_g18

0x1ba7,	// (0x00052701) cell_cam4_burst_pane_g2_ParamLimits

0x1ba7,	// (0x00052701) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x000605ad) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x000605ad) cell_cam4_burst_pane_g

0x9968,	// (0x0005a4c2) bg_cl_pane_ParamLimits

0x9968,	// (0x0005a4c2) bg_cl_pane

0x9974,	// (0x0005a4ce) cl_header_pane_ParamLimits

0x9974,	// (0x0005a4ce) cl_header_pane

0x9980,	// (0x0005a4da) cl_listscroll_pane_ParamLimits

0x9980,	// (0x0005a4da) cl_listscroll_pane

0x1ce5,	// (0x0005283f) bg_cl_pane_g1

0x1ced,	// (0x00052847) bg_cl_pane_g2

0x1cf5,	// (0x0005284f) bg_cl_pane_g3

0x1cfd,	// (0x00052857) bg_cl_pane_g4

0x1d05,	// (0x0005285f) bg_cl_pane_g5

0x1d0d,	// (0x00052867) bg_cl_pane_g6

0x1d15,	// (0x0005286f) bg_cl_pane_g7

0x1d1d,	// (0x00052877) bg_cl_pane_g8

0x1d25,	// (0x0005287f) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x000605e8) bg_cl_pane_g

0x998c,	// (0x0005a4e6) aid_height_cl_leading_ParamLimits

0x998c,	// (0x0005a4e6) aid_height_cl_leading

0x9998,	// (0x0005a4f2) aid_height_cl_text_ParamLimits

0x9998,	// (0x0005a4f2) aid_height_cl_text

0x803f,	// (0x00058b99) bg_cl_header_pane_ParamLimits

0x803f,	// (0x00058b99) bg_cl_header_pane

0x99b0,	// (0x0005a50a) cl_header_pane_g1_ParamLimits

0x99b0,	// (0x0005a50a) cl_header_pane_g1

0x99bd,	// (0x0005a517) cl_header_pane_t1_ParamLimits

0x99bd,	// (0x0005a517) cl_header_pane_t1

0x1d2d,	// (0x00052887) cl_list_pane

0x199b,	// (0x000524f5) hc_scroll_pane_cp01

0xd4aa,	// (0x0005e004) bg_cl_header_pane_g1

0x1881,	// (0x000523db) bg_cl_header_pane_g2

0xd4ca,	// (0x0005e024) bg_cl_header_pane_g3

0x1891,	// (0x000523eb) bg_cl_header_pane_g4

0x1889,	// (0x000523e3) bg_cl_header_pane_g5

0x1ac0,	// (0x0005261a) bg_cl_header_pane_g6

0x18a9,	// (0x00052403) bg_cl_header_pane_g7

0x18b1,	// (0x0005240b) bg_cl_header_pane_g8

0x18a1,	// (0x000523fb) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x000605fb) bg_cl_header_pane_g

0x99cf,	// (0x0005a529) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x99cf,	// (0x0005a529) hc_cl_list_double_graphic_heading_pane

0x99e6,	// (0x0005a540) hc_cl_list_single_graphic_pane_ParamLimits

0x99e6,	// (0x0005a540) hc_cl_list_single_graphic_pane

0x9a06,	// (0x0005a560) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9a06,	// (0x0005a560) hc_cl_list_single_graphic_pane_g1

0x9a12,	// (0x0005a56c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9a12,	// (0x0005a56c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0006060e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0006060e) hc_cl_list_single_graphic_pane_g

0x9a26,	// (0x0005a580) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9a26,	// (0x0005a580) hc_cl_list_single_graphic_pane_t1

0x9a06,	// (0x0005a560) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9a06,	// (0x0005a560) hc_cl_list_double_graphic_heading_pane_g1

0x9a3b,	// (0x0005a595) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9a3b,	// (0x0005a595) hc_cl_list_double_graphic_heading_pane_g2

0x9a4f,	// (0x0005a5a9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9a4f,	// (0x0005a5a9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x00060613) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x00060613) hc_cl_list_double_graphic_heading_pane_g

0x9a63,	// (0x0005a5bd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9a63,	// (0x0005a5bd) hc_cl_list_double_graphic_heading_pane_t1

0x9a78,	// (0x0005a5d2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9a78,	// (0x0005a5d2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0006061a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0006061a) hc_cl_list_double_graphic_heading_pane_t

0x9a95,	// (0x0005a5ef) vid4_progress_pane_g1

0x9aa7,	// (0x0005a601) vid4_progress_pane_g2

0xd715,	// (0x0005e26f) vid4_progress_pane_g3

0x9ab9,	// (0x0005a613) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0006061f) vid4_progress_pane_g

0x9ad7,	// (0x0005a631) vid4_progress_pane_t1

0x9aec,	// (0x0005a646) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0006062a) vid4_progress_pane_t

0x9b17,	// (0x0005a671) wait_bar_pane_cp07

0x0b29,	// (0x00051683) blid_firmament_pane_ParamLimits

0x0b6c,	// (0x000516c6) popup_blid_sat_info2_window_g1

0x0b90,	// (0x000516ea) popup_blid_sat_info2_window_t3

0x0b9e,	// (0x000516f8) popup_blid_sat_info2_window_t4

0x0bac,	// (0x00051706) popup_blid_sat_info2_window_t5

0x0bba,	// (0x00051714) popup_blid_sat_info2_window_t6

0x0bca,	// (0x00051724) popup_blid_sat_info2_window_t7

0x0bd8,	// (0x00051732) popup_blid_sat_info2_window_t8

0x0be6,	// (0x00051740) popup_blid_sat_info2_window_t9

0x0bf4,	// (0x0005174e) popup_blid_sat_info2_window_t10

0x0cb8,	// (0x00051812) aid_firma_cardinal_ParamLimits

0x0ccc,	// (0x00051826) blid_firmament_pane_t1_ParamLimits

0x0ce3,	// (0x0005183d) blid_firmament_pane_t2_ParamLimits

0x0cfa,	// (0x00051854) blid_firmament_pane_t3_ParamLimits

0x0d11,	// (0x0005186b) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0006023d) blid_firmament_pane_t_ParamLimits

0x0d28,	// (0x00051882) blid_sat_info_pane_ParamLimits

0x699f,	// (0x000574f9) main_cam_set_pane_ParamLimits

0x7ece,	// (0x00058a28) aid_size_cell_colour_35_ParamLimits

0x7ee8,	// (0x00058a42) aid_size_cell_colour_112_ParamLimits

0x7eff,	// (0x00058a59) aid_size_cell_effect_ParamLimits

0xc69f,	// (0x0005d1f9) bg_tb_trans_pane_cp02_ParamLimits

0xd7ed,	// (0x0005e347) heading_imed_pane_ParamLimits

0x7f19,	// (0x00058a73) listscroll_imed_pane_ParamLimits

0xe654,	// (0x0005f1ae) popup_call2_audio_first_window_g5_ParamLimits

0xe654,	// (0x0005f1ae) popup_call2_audio_first_window_g5

0x8645,	// (0x0005919f) aid_size_touch_image3_arrow_left_ParamLimits

0x8645,	// (0x0005919f) aid_size_touch_image3_arrow_left

0x865b,	// (0x000591b5) aid_size_touch_image3_arrow_right_ParamLimits

0x865b,	// (0x000591b5) aid_size_touch_image3_arrow_right

0x9b02,	// (0x0005a65c) vid4_progress_pane_t3

0x81ce,	// (0x00058d28) main_hwr_training_symbol_option_pane_ParamLimits

0x81ce,	// (0x00058d28) main_hwr_training_symbol_option_pane

0x1617,	// (0x00052171) popup_hwr_training_preview_window_ParamLimits

0x1617,	// (0x00052171) popup_hwr_training_preview_window

0x822f,	// (0x00058d89) hwr_training_navi_pane_g5_ParamLimits

0x822f,	// (0x00058d89) hwr_training_navi_pane_g5

0x186f,	// (0x000523c9) popup_char_count_window

0x3a11,	// (0x0005456b) bg_popup_sub_pane_cp20_ParamLimits

0x946a,	// (0x00059fc4) list_vitu2_match_list_pane_ParamLimits

0x9476,	// (0x00059fd0) vitu2_page_scroll_pane_ParamLimits

0x9476,	// (0x00059fd0) vitu2_page_scroll_pane

0x1d36,	// (0x00052890) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1d36,	// (0x00052890) list_single_hwr_training_symbol_option_pane

0x1d49,	// (0x000528a3) list_single_hwr_training_symbol_option_pane_g1

0x1d51,	// (0x000528ab) list_single_hwr_training_symbol_option_pane_t1

0x1d5f,	// (0x000528b9) bg_button_pane_cp023

0x1d68,	// (0x000528c2) bg_button_pane_cp024

0x9b27,	// (0x0005a681) vitu2_page_scroll_pane_g1

0x9b2f,	// (0x0005a689) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x00060631) vitu2_page_scroll_pane_g

0x9b37,	// (0x0005a691) vitu2_page_scroll_pane_t1

0x0a89,	// (0x000515e3) popup_char_count_window_g1

0x1d9b,	// (0x000528f5) popup_char_count_window_g2

0x1da4,	// (0x000528fe) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x00060636) popup_char_count_window_g

0x1dad,	// (0x00052907) popup_char_count_window_t1

0x3a2b,	// (0x00054585) main_vded2_pane

0x1316,	// (0x00051e70) aid_size_cell_imed_line

0x1320,	// (0x00051e7a) grid_imed_line_width_pane

0x8aae,	// (0x00059608) vid4_indicators_pane_g4

0x1dbb,	// (0x00052915) cell_imed_line_width_pane_ParamLimits

0x1dbb,	// (0x00052915) cell_imed_line_width_pane

0x1dcf,	// (0x00052929) cell_imed_line_width_pane_g1

0x1dd8,	// (0x00052932) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0006063d) cell_imed_line_width_pane_g

0x9b46,	// (0x0005a6a0) main_vded2_pane_g1_ParamLimits

0x9b46,	// (0x0005a6a0) main_vded2_pane_g1

0x9b53,	// (0x0005a6ad) main_vded2_pane_g2_ParamLimits

0x9b53,	// (0x0005a6ad) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x00060642) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x00060642) main_vded2_pane_g

0x9b61,	// (0x0005a6bb) vded2_slider_pane_ParamLimits

0x9b61,	// (0x0005a6bb) vded2_slider_pane

0x9b6e,	// (0x0005a6c8) aid_size_touch_vded2_end

0x9b78,	// (0x0005a6d2) aid_size_touch_vded2_playhead

0x1de0,	// (0x0005293a) aid_size_touch_vded2_start

0x1de8,	// (0x00052942) vded2_slider_bg_pane

0x1df1,	// (0x0005294b) vded2_slider_pane_g1

0x1dfa,	// (0x00052954) vded2_slider_pane_g2

0x9b80,	// (0x0005a6da) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x00060647) vded2_slider_pane_g

0x1e02,	// (0x0005295c) vded2_slider_bg_pane_g1

0x1e0b,	// (0x00052965) vded2_slider_bg_pane_g2

0x1e14,	// (0x0005296e) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x0006064e) vded2_slider_bg_pane_g

0x6277,	// (0x00056dd1) aid_postcard_touch_down_pane_ParamLimits

0x6277,	// (0x00056dd1) aid_postcard_touch_down_pane

0x6287,	// (0x00056de1) aid_postcard_touch_up_pane_ParamLimits

0x6287,	// (0x00056de1) aid_postcard_touch_up_pane

0x3a2b,	// (0x00054585) main_blid2_pane

0x69c8,	// (0x00057522) popup_blid2_search_window

0xbcf7,	// (0x0005c851) blid2_gps_pane

0xbcf7,	// (0x0005c851) blid2_navig_pane

0xbcf7,	// (0x0005c851) blid2_search_pane

0xbcf7,	// (0x0005c851) blid2_tripm_pane

0x9b89,	// (0x0005a6e3) blid2_search_pane_g1_ParamLimits

0x9b89,	// (0x0005a6e3) blid2_search_pane_g1

0x9b99,	// (0x0005a6f3) blid2_search_pane_t1_ParamLimits

0x9b99,	// (0x0005a6f3) blid2_search_pane_t1

0x9bab,	// (0x0005a705) aid_size_cell_blid2_gps_ParamLimits

0x9bab,	// (0x0005a705) aid_size_cell_blid2_gps

0x9bbb,	// (0x0005a715) blid2_gps_pane_g1_ParamLimits

0x9bbb,	// (0x0005a715) blid2_gps_pane_g1

0x9bc7,	// (0x0005a721) grid_blid2_satellite_pane_ParamLimits

0x9bc7,	// (0x0005a721) grid_blid2_satellite_pane

0x9bd7,	// (0x0005a731) blid2_navig_pane_g1_ParamLimits

0x9bd7,	// (0x0005a731) blid2_navig_pane_g1

0x9be3,	// (0x0005a73d) blid2_navig_pane_t1_ParamLimits

0x9be3,	// (0x0005a73d) blid2_navig_pane_t1

0x9bf5,	// (0x0005a74f) blid2_navig_pane_t2_ParamLimits

0x9bf5,	// (0x0005a74f) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x00060655) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x00060655) blid2_navig_pane_t

0x9c07,	// (0x0005a761) blid2_navig_ring_pane_ParamLimits

0x9c07,	// (0x0005a761) blid2_navig_ring_pane

0x9c17,	// (0x0005a771) blid2_speed_pane_ParamLimits

0x9c17,	// (0x0005a771) blid2_speed_pane

0x9c23,	// (0x0005a77d) blid2_tripm_pane_g1_ParamLimits

0x9c23,	// (0x0005a77d) blid2_tripm_pane_g1

0x9c33,	// (0x0005a78d) blid2_tripm_pane_g2_ParamLimits

0x9c33,	// (0x0005a78d) blid2_tripm_pane_g2

0x9c3f,	// (0x0005a799) blid2_tripm_pane_g3_ParamLimits

0x9c3f,	// (0x0005a799) blid2_tripm_pane_g3

0x9c4b,	// (0x0005a7a5) blid2_tripm_pane_g4_ParamLimits

0x9c4b,	// (0x0005a7a5) blid2_tripm_pane_g4

0x9c57,	// (0x0005a7b1) blid2_tripm_pane_g5_ParamLimits

0x9c57,	// (0x0005a7b1) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x0006065a) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x0006065a) blid2_tripm_pane_g

0x9c73,	// (0x0005a7cd) blid2_tripm_pane_t1_ParamLimits

0x9c73,	// (0x0005a7cd) blid2_tripm_pane_t1

0x9c87,	// (0x0005a7e1) blid2_tripm_pane_t2_ParamLimits

0x9c87,	// (0x0005a7e1) blid2_tripm_pane_t2

0x9c9b,	// (0x0005a7f5) blid2_tripm_pane_t3_ParamLimits

0x9c9b,	// (0x0005a7f5) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x00060667) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x00060667) blid2_tripm_pane_t

0x9ccd,	// (0x0005a827) cell_blid2_satellite_pane_ParamLimits

0x9ccd,	// (0x0005a827) cell_blid2_satellite_pane

0x9ce7,	// (0x0005a841) cell_blid2_satellite_pane_g1

0x1e1d,	// (0x00052977) cell_blid2_satellite_pane_t1

0x0d38,	// (0x00051892) blid2_speed_pane_g1

0x1e2b,	// (0x00052985) blid2_speed_pane_t1

0x1e39,	// (0x00052993) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00060670) blid2_speed_pane_t

0x0d38,	// (0x00051892) blid2_navig_ring_pane_g1

0x9cf0,	// (0x0005a84a) blid2_navig_ring_pane_g2

0x9cf8,	// (0x0005a852) blid2_navig_ring_pane_g3

0x9d00,	// (0x0005a85a) blid2_navig_ring_pane_g4

0x9d08,	// (0x0005a862) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x00060675) blid2_navig_ring_pane_g

0xbcf7,	// (0x0005c851) bg_popup_window_pane_cp011

0x1e47,	// (0x000529a1) popup_blid2_search_window_g1

0x1e4f,	// (0x000529a9) popup_blid2_search_window_t1

0x1e5d,	// (0x000529b7) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00060680) popup_blid2_search_window_t

0xd3b9,	// (0x0005df13) main_browser_pane_g1

0xc484,	// (0x0005cfde) main_browser_pane_ParamLimits

0x699f,	// (0x000574f9) bg_button_pane_cp011_ParamLimits

0x8d23,	// (0x0005987d) cell_vitu2_function_pane_g1_ParamLimits

0xf02a,	// (0x0005fb84) bg_popup_sub_pane_cp22_ParamLimits

0x961b,	// (0x0005a175) input_focus_pane_cp08_ParamLimits

0x9632,	// (0x0005a18c) popup_vitu2_query_button_pane_ParamLimits

0x9632,	// (0x0005a18c) popup_vitu2_query_button_pane

0x9643,	// (0x0005a19d) popup_vitu2_query_input_button_pane

0x1afd,	// (0x00052657) popup_vitu2_query_window_g1_ParamLimits

0x964d,	// (0x0005a1a7) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00060581) popup_vitu2_query_window_g_ParamLimits

0xbcf7,	// (0x0005c851) bg_button_pane_cp026

0x9d10,	// (0x0005a86a) popup_vitu2_query_input_button_pane_g1

0xbcf7,	// (0x0005c851) bg_button_pane_cp025

0x1e6b,	// (0x000529c5) popup_vitu2_query_button_pane_t1

0x7420,	// (0x00057f7a) main_mp3_pane_t6

0x7430,	// (0x00057f8a) popup_slider_window_cp01

0x898f,	// (0x000594e9) cam4_battery_pane

0x8a6d,	// (0x000595c7) cam4_battery_pane_cp02

0x9a8d,	// (0x0005a5e7) cam4_battery_pane_cp01

0x9a8d,	// (0x0005a5e7) cam4_battery_pane_cp03

0x1e79,	// (0x000529d3) cam4_battery_pane_g1

0x0d38,	// (0x00051892) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x00060685) cam4_battery_pane_g

0x0c02,	// (0x0005175c) popup_blid_sat_info2_window_t11

0x5b3f,	// (0x00056699) aid_size_touch_mv_arrow_left_ParamLimits

0x5b6a,	// (0x000566c4) aid_size_touch_mv_arrow_right_ParamLimits

0xdb3f,	// (0x0005e699) navi_pane_g1_ParamLimits

0x5ba9,	// (0x00056703) navi_pane_g2_ParamLimits

0x5bd7,	// (0x00056731) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0005ff4f) navi_pane_g_ParamLimits

0x5c31,	// (0x0005678b) navi_pane_mv_t1_ParamLimits

0x7f25,	// (0x00058a7f) grid_imed_effect_pane_ParamLimits

0x4783,	// (0x000552dd) aid_placing_vt_slider_lsc

0xd308,	// (0x0005de62) aid_placing_vt_slider_prt

0xc69f,	// (0x0005d1f9) bg_tb_trans_pane_cp01_ParamLimits

0x0fab,	// (0x00051b05) popup_image_details_window_g1_ParamLimits

0x0fbe,	// (0x00051b18) popup_image_details_window_g2_ParamLimits

0x0fd3,	// (0x00051b2d) popup_image_details_window_g3_ParamLimits

0x0fd3,	// (0x00051b2d) popup_image_details_window_g3

0xf728,	// (0x00060282) popup_image_details_window_g_ParamLimits

0x0fe7,	// (0x00051b41) popup_image_details_window_t1_ParamLimits

0x0ff9,	// (0x00051b53) popup_image_details_window_t2_ParamLimits

0x1012,	// (0x00051b6c) popup_image_details_window_t3_ParamLimits

0x1026,	// (0x00051b80) popup_image_details_window_t4_ParamLimits

0x1041,	// (0x00051b9b) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00060289) popup_image_details_window_t_ParamLimits

0x99a4,	// (0x0005a4fe) cl_header_name_pane_ParamLimits

0x99a4,	// (0x0005a4fe) cl_header_name_pane

0x9d18,	// (0x0005a872) cl_header_name_pane_t1_ParamLimits

0x9d18,	// (0x0005a872) cl_header_name_pane_t1

0x9d2f,	// (0x0005a889) cl_header_name_pane_t2_ParamLimits

0x9d2f,	// (0x0005a889) cl_header_name_pane_t2

0x9d59,	// (0x0005a8b3) cl_header_name_pane_t3_ParamLimits

0x9d59,	// (0x0005a8b3) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0006068a) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0006068a) cl_header_name_pane_t

0x5c02,	// (0x0005675c) navi_pane_mv_g2_ParamLimits

0x182d,	// (0x00052387) field_vitu2_entry_pane_g1_ParamLimits

0x1839,	// (0x00052393) field_vitu2_entry_pane_g2_ParamLimits

0x1861,	// (0x000523bb) field_vitu2_entry_pane_g3_ParamLimits

0x1861,	// (0x000523bb) field_vitu2_entry_pane_g3

0xf926,	// (0x00060480) field_vitu2_entry_pane_g_ParamLimits

0x8cb3,	// (0x0005980d) cell_vitu2_itu_pane_g1_ParamLimits

0x8cc3,	// (0x0005981d) cell_vitu2_itu_pane_g2_ParamLimits

0x8cc3,	// (0x0005981d) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0006048c) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0006048c) cell_vitu2_itu_pane_g

0x699f,	// (0x000574f9) bg_vkb2_func_pane_cp05_ParamLimits

0x699f,	// (0x000574f9) bg_vkb2_func_pane_cp05

0x699f,	// (0x000574f9) bg_vkb2_func_pane_cp03

0x699f,	// (0x000574f9) bg_vkb2_func_pane_cp04

0x699f,	// (0x000574f9) bg_vkb2_func_pane_cp10_ParamLimits

0x699f,	// (0x000574f9) bg_vkb2_func_pane_cp10

0x9946,	// (0x0005a4a0) bg_vkb2_func_pane_cp08

0x992c,	// (0x0005a486) bg_vkb2_func_pane_cp06

0x993a,	// (0x0005a494) bg_vkb2_func_pane_cp07

0x1d71,	// (0x000528cb) bg_vkb2_func_pane_cp11_ParamLimits

0x1d71,	// (0x000528cb) bg_vkb2_func_pane_cp11

0x1d86,	// (0x000528e0) bg_vkb2_func_pane_cp12_ParamLimits

0x1d86,	// (0x000528e0) bg_vkb2_func_pane_cp12

0xbcf7,	// (0x0005c851) bg_vkb2_func_pane_cp09

0x1881,	// (0x000523db) bg_vkb2_func_pane_g1

0xd4ca,	// (0x0005e024) bg_vkb2_func_pane_g2

0x1889,	// (0x000523e3) bg_vkb2_func_pane_g3

0x1891,	// (0x000523eb) bg_vkb2_func_pane_g4

0x1ac0,	// (0x0005261a) bg_vkb2_func_pane_g5

0x18a9,	// (0x00052403) bg_vkb2_func_pane_g6

0x18b1,	// (0x0005240b) bg_vkb2_func_pane_g7

0x18a1,	// (0x000523fb) bg_vkb2_func_pane_g8

0xd4aa,	// (0x0005e004) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00060691) bg_vkb2_func_pane_g

0x9c65,	// (0x0005a7bf) blid2_tripm_pane_g6_ParamLimits

0x9c65,	// (0x0005a7bf) blid2_tripm_pane_g6

0x16cf,	// (0x00052229) mp4_progress_pane_g1

0x9cc1,	// (0x0005a81b) blid2_tripm_values_pane_ParamLimits

0x9cc1,	// (0x0005a81b) blid2_tripm_values_pane

0x9d7e,	// (0x0005a8d8) blid2_tripm_values_pane_t1

0x9d8c,	// (0x0005a8e6) blid2_tripm_values_pane_t2

0x9d9a,	// (0x0005a8f4) blid2_tripm_values_pane_t3

0x9da8,	// (0x0005a902) blid2_tripm_values_pane_t4

0x9db6,	// (0x0005a910) blid2_tripm_values_pane_t5

0x9dc4,	// (0x0005a91e) blid2_tripm_values_pane_t6

0x9dd2,	// (0x0005a92c) blid2_tripm_values_pane_t7

0x9de0,	// (0x0005a93a) blid2_tripm_values_pane_t8

0x9dee,	// (0x0005a948) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x000606a4) blid2_tripm_values_pane_t

0x47c3,	// (0x0005531d) call_video_pane_t1_ParamLimits

0x47e4,	// (0x0005533e) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0005fdd8) call_video_pane_t_ParamLimits

0x616e,	// (0x00056cc8) msg_header_pane_g1_ParamLimits

0xdd68,	// (0x0005e8c2) msg_header_pane_g2_ParamLimits

0xdd68,	// (0x0005e8c2) msg_header_pane_g2

0x0001,

0xf498,	// (0x0005fff2) msg_header_pane_g_ParamLimits

0xf498,	// (0x0005fff2) msg_header_pane_g

0xc484,	// (0x0005cfde) main_clock2_pane_ParamLimits

0x7cbb,	// (0x00058815) grid_clock2_toolbar_pane_ParamLimits

0x7cbb,	// (0x00058815) grid_clock2_toolbar_pane

0x7cbb,	// (0x00058815) listscroll_clock2_pane_ParamLimits

0x7cbb,	// (0x00058815) listscroll_clock2_pane

0x7d58,	// (0x000588b2) main_clock2_pane_t3_ParamLimits

0x7d58,	// (0x000588b2) main_clock2_pane_t3

0x7d6a,	// (0x000588c4) main_clock2_pane_t4_ParamLimits

0x7d6a,	// (0x000588c4) main_clock2_pane_t4

0x1e83,	// (0x000529dd) cell_clock2_toolbar_pane

0x1e8b,	// (0x000529e5) cell_clock2_toolbar_pane_cp01

0x1e8b,	// (0x000529e5) cell_clock2_toolbar_pane_cp02

0x1e93,	// (0x000529ed) cell_clock2_toolbar_pane_cp03

0x1e9b,	// (0x000529f5) list_clock2_pane

0xda92,	// (0x0005e5ec) scroll_pane_cp10

0x1ea3,	// (0x000529fd) list_single_clock2_pane_ParamLimits

0x1ea3,	// (0x000529fd) list_single_clock2_pane

0xdbdf,	// (0x0005e739) list_highlight_pane_cp08

0x1eb0,	// (0x00052a0a) list_single_clock2_pane_t1

0x1ebe,	// (0x00052a18) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x000606b7) list_single_clock2_pane_t

0xbcf7,	// (0x0005c851) bg_button_pane_cp10

0x1ecc,	// (0x00052a26) cell_clock2_toolbar_pane_g1

0x61d9,	// (0x00056d33) aid_main_viewer_pane_g1_ParamLimits

0x61d9,	// (0x00056d33) aid_main_viewer_pane_g1

0x61e5,	// (0x00056d3f) aid_main_viewer_pane_g2_ParamLimits

0x61e5,	// (0x00056d3f) aid_main_viewer_pane_g2

0x61f1,	// (0x00056d4b) aid_main_viewer_pane_g3_ParamLimits

0x61f1,	// (0x00056d4b) aid_main_viewer_pane_g3

0x6202,	// (0x00056d5c) aid_main_viewer_pane_g4_ParamLimits

0x6202,	// (0x00056d5c) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00060003) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00060003) aid_main_viewer_pane_g

0x6992,	// (0x000574ec) main_calc_pane_ParamLimits

0x69ad,	// (0x00057507) main_dialer2_pane_ParamLimits

0x3a2b,	// (0x00054585) main_cam6_pane

0x3a2b,	// (0x00054585) main_vid6_pane

0x7cc7,	// (0x00058821) listscroll_gen_pane_cp06_ParamLimits

0x7cc7,	// (0x00058821) listscroll_gen_pane_cp06

0x7d7c,	// (0x000588d6) main_clock2_pane_t5_ParamLimits

0x7d7c,	// (0x000588d6) main_clock2_pane_t5

0x7dcb,	// (0x00058925) aid_call2_pane_cp10_ParamLimits

0x7ddd,	// (0x00058937) aid_call_pane_cp10_ParamLimits

0xdb14,	// (0x0005e66e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdb14,	// (0x0005e66e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7def,	// (0x00058949) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7def,	// (0x00058949) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdb14,	// (0x0005e66e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x00060339) popup_clock_analogue_window_cp10_g_ParamLimits

0x7e05,	// (0x0005895f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x85f2,	// (0x0005914c) cell_dialer2_keypad_pane_g2_ParamLimits

0x85f2,	// (0x0005914c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0006041f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0006041f) cell_dialer2_keypad_pane_g

0x860e,	// (0x00059168) cell_dialer2_keypad_pane_t1

0x8fe9,	// (0x00059b43) main_cset_text2_pane_ParamLimits

0x8fe9,	// (0x00059b43) main_cset_text2_pane

0x1cd9,	// (0x00052833) area_vitu2_query_pane_g1_ParamLimits

0x98cb,	// (0x0005a425) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x000605d4) area_vitu2_query_pane_g_ParamLimits

0x050e,	// (0x00051068) area_vitu2_query_pane_t7_ParamLimits

0x050e,	// (0x00051068) area_vitu2_query_pane_t7

0x992c,	// (0x0005a486) bg_button_pane_cp018_ParamLimits

0x993a,	// (0x0005a494) bg_button_pane_cp021_ParamLimits

0x9946,	// (0x0005a4a0) bg_button_pane_cp022_ParamLimits

0x9946,	// (0x0005a4a0) bg_vkb2_func_pane_cp08_ParamLimits

0x992c,	// (0x0005a486) bg_vkb2_func_pane_cp06_ParamLimits

0x993a,	// (0x0005a494) bg_vkb2_func_pane_cp07_ParamLimits

0x9957,	// (0x0005a4b1) input_focus_pane_cp09_ParamLimits

0x9dfc,	// (0x0005a956) cam6_autofocus_pane_ParamLimits

0x9dfc,	// (0x0005a956) cam6_autofocus_pane

0x9e1e,	// (0x0005a978) cam6_image_uncrop_pane_ParamLimits

0x9e1e,	// (0x0005a978) cam6_image_uncrop_pane

0x9e4b,	// (0x0005a9a5) cam6_indi_pane_ParamLimits

0x9e4b,	// (0x0005a9a5) cam6_indi_pane

0x9e65,	// (0x0005a9bf) cam6_mode_pane_ParamLimits

0x9e65,	// (0x0005a9bf) cam6_mode_pane

0x9e79,	// (0x0005a9d3) cam6_timer_pane_ParamLimits

0x9e79,	// (0x0005a9d3) cam6_timer_pane

0x9e85,	// (0x0005a9df) cam6_zoom_pane_ParamLimits

0x9e85,	// (0x0005a9df) cam6_zoom_pane

0x9e9d,	// (0x0005a9f7) cam6_mode_pane_g1_ParamLimits

0x9e9d,	// (0x0005a9f7) cam6_mode_pane_g1

0x9ea9,	// (0x0005aa03) cam6_mode_pane_g2_ParamLimits

0x9ea9,	// (0x0005aa03) cam6_mode_pane_g2

0x9eb5,	// (0x0005aa0f) cam6_mode_pane_g3_ParamLimits

0x9eb5,	// (0x0005aa0f) cam6_mode_pane_g3

0x9ec1,	// (0x0005aa1b) cam6_mode_pane_g4_ParamLimits

0x9ec1,	// (0x0005aa1b) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x000606bc) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x000606bc) cam6_mode_pane_g

0x1845,	// (0x0005239f) bg_tb_trans_pane_cp08_ParamLimits

0x1845,	// (0x0005239f) bg_tb_trans_pane_cp08

0x1ed4,	// (0x00052a2e) cam6_battery_pane_ParamLimits

0x1ed4,	// (0x00052a2e) cam6_battery_pane

0x1eea,	// (0x00052a44) cam6_indi_pane_g1_ParamLimits

0x1eea,	// (0x00052a44) cam6_indi_pane_g1

0x1efc,	// (0x00052a56) cam6_indi_pane_g2_ParamLimits

0x1efc,	// (0x00052a56) cam6_indi_pane_g2

0x1f0e,	// (0x00052a68) cam6_indi_pane_g3_ParamLimits

0x1f0e,	// (0x00052a68) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x000606c5) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x000606c5) cam6_indi_pane_g

0x1f20,	// (0x00052a7a) cam6_indi_pane_t1_ParamLimits

0x1f20,	// (0x00052a7a) cam6_indi_pane_t1

0x8ae9,	// (0x00059643) cam6_autofocus_pane_g1

0x8ae1,	// (0x0005963b) cam6_autofocus_pane_g2

0x8af9,	// (0x00059653) cam6_autofocus_pane_g3

0x8af1,	// (0x0005964b) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x000606cc) cam6_autofocus_pane_g

0x1f46,	// (0x00052aa0) cam6_timer_pane_g1

0x1f4e,	// (0x00052aa8) cam6_timer_pane_t1

0x1f5c,	// (0x00052ab6) cam6_zoom_cont_pane

0x1f64,	// (0x00052abe) cam6_zoom_pane_g1

0x1f6c,	// (0x00052ac6) cam6_zoom_pane_g2

0x9ecd,	// (0x0005aa27) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x000606d5) cam6_zoom_pane_g

0x0d38,	// (0x00051892) cam6_battery_pane_g1

0x0d38,	// (0x00051892) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00060246) cam6_battery_pane_g

0x1f74,	// (0x00052ace) cam6_zoom_cont_pane_g1

0x1f7d,	// (0x00052ad7) cam6_zoom_cont_pane_g2

0x1f86,	// (0x00052ae0) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x000606dc) cam6_zoom_cont_pane_g

0x9eea,	// (0x0005aa44) cam6_mode_pane_cp_ParamLimits

0x9eea,	// (0x0005aa44) cam6_mode_pane_cp

0x9efe,	// (0x0005aa58) cam6_zoom_pane_cp_ParamLimits

0x9efe,	// (0x0005aa58) cam6_zoom_pane_cp

0x9f16,	// (0x0005aa70) vid6_image_uncrop_cif_pane_ParamLimits

0x9f16,	// (0x0005aa70) vid6_image_uncrop_cif_pane

0x9f42,	// (0x0005aa9c) vid6_image_uncrop_nhd_pane_ParamLimits

0x9f42,	// (0x0005aa9c) vid6_image_uncrop_nhd_pane

0x9f5f,	// (0x0005aab9) vid6_image_uncrop_vga_pane_ParamLimits

0x9f5f,	// (0x0005aab9) vid6_image_uncrop_vga_pane

0x9f7e,	// (0x0005aad8) vid6_image_uncrop_wvga_pane_ParamLimits

0x9f7e,	// (0x0005aad8) vid6_image_uncrop_wvga_pane

0x9f9b,	// (0x0005aaf5) vid6_indi_pane_ParamLimits

0x9f9b,	// (0x0005aaf5) vid6_indi_pane

0x1845,	// (0x0005239f) bg_tb_trans_pane_cp09_ParamLimits

0x1845,	// (0x0005239f) bg_tb_trans_pane_cp09

0x1f9e,	// (0x00052af8) cam6_battery_pane_cp_ParamLimits

0x1f9e,	// (0x00052af8) cam6_battery_pane_cp

0x1faa,	// (0x00052b04) vid6_indi_pane_g1_ParamLimits

0x1faa,	// (0x00052b04) vid6_indi_pane_g1

0x1fbc,	// (0x00052b16) vid6_indi_pane_g2_ParamLimits

0x1fbc,	// (0x00052b16) vid6_indi_pane_g2

0x1fce,	// (0x00052b28) vid6_indi_pane_g3_ParamLimits

0x1fce,	// (0x00052b28) vid6_indi_pane_g3

0x1fe3,	// (0x00052b3d) vid6_indi_pane_g4_ParamLimits

0x1fe3,	// (0x00052b3d) vid6_indi_pane_g4

0x1ff8,	// (0x00052b52) vid6_indi_pane_g5_ParamLimits

0x1ff8,	// (0x00052b52) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x000606e3) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x000606e3) vid6_indi_pane_g

0x2012,	// (0x00052b6c) vid6_indi_pane_t1_ParamLimits

0x2012,	// (0x00052b6c) vid6_indi_pane_t1

0x2028,	// (0x00052b82) vid6_indi_pane_t2_ParamLimits

0x2028,	// (0x00052b82) vid6_indi_pane_t2

0x2050,	// (0x00052baa) vid6_indi_pane_t3_ParamLimits

0x2050,	// (0x00052baa) vid6_indi_pane_t3

0x2078,	// (0x00052bd2) vid6_indi_pane_t4_ParamLimits

0x2078,	// (0x00052bd2) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x000606ee) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x000606ee) vid6_indi_pane_t

0x209c,	// (0x00052bf6) wait_bar_pane_cp08

0x9fbe,	// (0x0005ab18) main_cset_text2_pane_t1_ParamLimits

0x9fbe,	// (0x0005ab18) main_cset_text2_pane_t1

0x9ed5,	// (0x0005aa2f) listscroll_gen_pane_cp06_t1_ParamLimits

0x9ed5,	// (0x0005aa2f) listscroll_gen_pane_cp06_t1

0x3a2b,	// (0x00054585) main_cam6_set_pane

0x8981,	// (0x000594db) bg_tb_trans_pane_cp06_ParamLimits

0x8997,	// (0x000594f1) cam4_indicators_pane_g1_ParamLimits

0x89a8,	// (0x00059502) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0006045c) cam4_indicators_pane_g_ParamLimits

0x89c6,	// (0x00059520) cam4_indicators_pane_t1_ParamLimits

0x699f,	// (0x000574f9) bg_tb_trans_pane_cp07_ParamLimits

0x8a75,	// (0x000595cf) vid4_indicators_pane_g1_ParamLimits

0x8a89,	// (0x000595e3) vid4_indicators_pane_g2_ParamLimits

0x8a9d,	// (0x000595f7) vid4_indicators_pane_g3_ParamLimits

0x8aae,	// (0x00059608) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0006046e) vid4_indicators_pane_g_ParamLimits

0x8aca,	// (0x00059624) vid4_indicators_pane_t1_ParamLimits

0x9a95,	// (0x0005a5ef) vid4_progress_pane_g1_ParamLimits

0x9aa7,	// (0x0005a601) vid4_progress_pane_g2_ParamLimits

0xd715,	// (0x0005e26f) vid4_progress_pane_g3_ParamLimits

0x9ab9,	// (0x0005a613) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0006061f) vid4_progress_pane_g_ParamLimits

0x9ad7,	// (0x0005a631) vid4_progress_pane_t1_ParamLimits

0x9aec,	// (0x0005a646) vid4_progress_pane_t2_ParamLimits

0x9b02,	// (0x0005a65c) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0006062a) vid4_progress_pane_t_ParamLimits

0x9b17,	// (0x0005a671) wait_bar_pane_cp07_ParamLimits

0x9ffc,	// (0x0005ab56) main_cam6_set_pane_g2_ParamLimits

0x9ffc,	// (0x0005ab56) main_cam6_set_pane_g2

0xa008,	// (0x0005ab62) main_cset6_listscroll_pane_ParamLimits

0xa008,	// (0x0005ab62) main_cset6_listscroll_pane

0xa033,	// (0x0005ab8d) main_cset6_slider_pane_ParamLimits

0xa033,	// (0x0005ab8d) main_cset6_slider_pane

0xa03f,	// (0x0005ab99) main_cset6_text2_pane_ParamLimits

0xa03f,	// (0x0005ab99) main_cset6_text2_pane

0x20ab,	// (0x00052c05) main_cset6_text_pane

0x20b3,	// (0x00052c0d) main_cset_list_pane_copy1_ParamLimits

0x20b3,	// (0x00052c0d) main_cset_list_pane_copy1

0x20c3,	// (0x00052c1d) scroll_pane_cp028_copy1

0xa052,	// (0x0005abac) cset_list_set_pane_copy1

0xa06c,	// (0x0005abc6) aid_position_infowindow_above_copy1

0xa074,	// (0x0005abce) aid_position_infowindow_below_copy1

0x057a,	// (0x000510d4) cset_list_set_pane_g1_copy1

0x0582,	// (0x000510dc) cset_list_set_pane_g3_copy1_ParamLimits

0x0582,	// (0x000510dc) cset_list_set_pane_g3_copy1

0x0591,	// (0x000510eb) cset_list_set_pane_t1_copy1_ParamLimits

0x0591,	// (0x000510eb) cset_list_set_pane_t1_copy1

0xc69f,	// (0x0005d1f9) list_highlight_pane_cp021_copy1_ParamLimits

0xc69f,	// (0x0005d1f9) list_highlight_pane_cp021_copy1

0x20cc,	// (0x00052c26) cset6_slider_pane_ParamLimits

0x20cc,	// (0x00052c26) cset6_slider_pane

0x20f8,	// (0x00052c52) main_cset6_slider_pane_g1_ParamLimits

0x20f8,	// (0x00052c52) main_cset6_slider_pane_g1

0xa07c,	// (0x0005abd6) main_cset6_slider_pane_g2_ParamLimits

0xa07c,	// (0x0005abd6) main_cset6_slider_pane_g2

0x19b0,	// (0x0005250a) main_cset6_slider_pane_g3_ParamLimits

0x19b0,	// (0x0005250a) main_cset6_slider_pane_g3

0xa0a4,	// (0x0005abfe) main_cset6_slider_pane_g4_ParamLimits

0xa0a4,	// (0x0005abfe) main_cset6_slider_pane_g4

0xa0b0,	// (0x0005ac0a) main_cset6_slider_pane_g5_ParamLimits

0xa0b0,	// (0x0005ac0a) main_cset6_slider_pane_g5

0x19b0,	// (0x0005250a) main_cset6_slider_pane_g7_ParamLimits

0x19b0,	// (0x0005250a) main_cset6_slider_pane_g7

0x19bc,	// (0x00052516) main_cset6_slider_pane_g8_ParamLimits

0x19bc,	// (0x00052516) main_cset6_slider_pane_g8

0xa0be,	// (0x0005ac18) main_cset6_slider_pane_g9_ParamLimits

0xa0be,	// (0x0005ac18) main_cset6_slider_pane_g9

0xa0ca,	// (0x0005ac24) main_cset6_slider_pane_g10_ParamLimits

0xa0ca,	// (0x0005ac24) main_cset6_slider_pane_g10

0xa0a4,	// (0x0005abfe) main_cset6_slider_pane_g11_ParamLimits

0xa0a4,	// (0x0005abfe) main_cset6_slider_pane_g11

0xa0d6,	// (0x0005ac30) main_cset6_slider_pane_g12_ParamLimits

0xa0d6,	// (0x0005ac30) main_cset6_slider_pane_g12

0xa0e2,	// (0x0005ac3c) main_cset6_slider_pane_g13_ParamLimits

0xa0e2,	// (0x0005ac3c) main_cset6_slider_pane_g13

0xa0f0,	// (0x0005ac4a) main_cset6_slider_pane_g14_ParamLimits

0xa0f0,	// (0x0005ac4a) main_cset6_slider_pane_g14

0xa0fe,	// (0x0005ac58) main_cset6_slider_pane_g15_ParamLimits

0xa0fe,	// (0x0005ac58) main_cset6_slider_pane_g15

0xa0b0,	// (0x0005ac0a) main_cset6_slider_pane_g16_ParamLimits

0xa0b0,	// (0x0005ac0a) main_cset6_slider_pane_g16

0xa116,	// (0x0005ac70) main_cset6_slider_pane_g17_ParamLimits

0xa116,	// (0x0005ac70) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x000606f7) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x000606f7) main_cset6_slider_pane_g

0x2120,	// (0x00052c7a) main_cset6_slider_pane_t1_ParamLimits

0x2120,	// (0x00052c7a) main_cset6_slider_pane_t1

0xa124,	// (0x0005ac7e) main_cset6_slider_pane_t2_ParamLimits

0xa124,	// (0x0005ac7e) main_cset6_slider_pane_t2

0xa14f,	// (0x0005aca9) main_cset6_slider_pane_t3_ParamLimits

0xa14f,	// (0x0005aca9) main_cset6_slider_pane_t3

0xa17a,	// (0x0005acd4) main_cset6_slider_pane_t4_ParamLimits

0xa17a,	// (0x0005acd4) main_cset6_slider_pane_t4

0xa1a7,	// (0x0005ad01) main_cset6_slider_pane_t5_ParamLimits

0xa1a7,	// (0x0005ad01) main_cset6_slider_pane_t5

0x2161,	// (0x00052cbb) main_cset6_slider_pane_t7_ParamLimits

0x2161,	// (0x00052cbb) main_cset6_slider_pane_t7

0xa1d4,	// (0x0005ad2e) main_cset6_slider_pane_t8_ParamLimits

0xa1d4,	// (0x0005ad2e) main_cset6_slider_pane_t8

0xa1f8,	// (0x0005ad52) main_cset6_slider_pane_t9_ParamLimits

0xa1f8,	// (0x0005ad52) main_cset6_slider_pane_t9

0xa21c,	// (0x0005ad76) main_cset6_slider_pane_t10_ParamLimits

0xa21c,	// (0x0005ad76) main_cset6_slider_pane_t10

0xa240,	// (0x0005ad9a) main_cset6_slider_pane_t11_ParamLimits

0xa240,	// (0x0005ad9a) main_cset6_slider_pane_t11

0x2197,	// (0x00052cf1) main_cset6_slider_pane_t14_ParamLimits

0x2197,	// (0x00052cf1) main_cset6_slider_pane_t14

0x21d0,	// (0x00052d2a) main_cset6_slider_pane_t15_ParamLimits

0x21d0,	// (0x00052d2a) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x0006071c) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x0006071c) main_cset6_slider_pane_t

0x1a74,	// (0x000525ce) cset_slider_pane_g1_copy1

0x1a7d,	// (0x000525d7) cset_slider_pane_g2_copy1

0x1a86,	// (0x000525e0) cset_slider_pane_g3_copy1

0xbcf7,	// (0x0005c851) bg_popup_sub_pane_cp011_copy1

0x2215,	// (0x00052d6f) main_cset_text_pane_g1_copy1

0x1b11,	// (0x0005266b) main_cset_text_pane_t1_copy1

0x1b1f,	// (0x00052679) main_cset_text_pane_t2_copy1

0x1b2d,	// (0x00052687) main_cset_text_pane_t3_copy1

0x1b3b,	// (0x00052695) main_cset_text_pane_t4_copy1

0x1b49,	// (0x000526a3) main_cset_text_pane_t5_copy1

0x221d,	// (0x00052d77) main_cset_text_pane_t6_copy1

0x222b,	// (0x00052d85) main_cset_text_pane_t7_copy1

0xa266,	// (0x0005adc0) main_cset_text2_pane_t1_copy1

0x699f,	// (0x000574f9) main_ncimui_pane

0x69fe,	// (0x00057558) popup_query_ncimui_window_ParamLimits

0x69fe,	// (0x00057558) popup_query_ncimui_window

0x00a9,	// (0x00050c03) field_cale_ev2_pane_g4_ParamLimits

0x00a9,	// (0x00050c03) field_cale_ev2_pane_g4

0x8310,	// (0x00058e6a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8310,	// (0x00058e6a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x000603fa) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x000603fa) cell_video_dialer_keypad_pane_g

0x8328,	// (0x00058e82) cell_video_dialer_keypad_pane_t1

0xbcf7,	// (0x0005c851) bg_popup_window_pane_cp012

0xd962,	// (0x0005e4bc) heading_pane_cp06

0x2257,	// (0x00052db1) ncim_query_content_pane

0xbcf7,	// (0x0005c851) bg_popup_heading_pane_cp01

0x225f,	// (0x00052db9) ncim_heading_pane_t1

0x226d,	// (0x00052dc7) ncim_indicator_popup_pane

0x227f,	// (0x00052dd9) ncim_query_button_pane

0x2293,	// (0x00052ded) ncim_query_content_pane_t1

0x22a5,	// (0x00052dff) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x00060760) ncim_query_content_pane_t

0x22df,	// (0x00052e39) ncim_query_list_pane

0x22f1,	// (0x00052e4b) ncim_query_popup_pane

0x226d,	// (0x00052dc7) ncim_indicator_popup_pane_ParamLimits

0xa3c4,	// (0x0005af1e) ncim_query_content_pane_g1_ParamLimits

0xa3c4,	// (0x0005af1e) ncim_query_content_pane_g1

0x2293,	// (0x00052ded) ncim_query_content_pane_t1_ParamLimits

0x22a5,	// (0x00052dff) ncim_query_content_pane_t2_ParamLimits

0xa3d0,	// (0x0005af2a) ncim_query_content_pane_t3_ParamLimits

0xa3d0,	// (0x0005af2a) ncim_query_content_pane_t3

0xa3ed,	// (0x0005af47) ncim_query_content_pane_t4_ParamLimits

0xa3ed,	// (0x0005af47) ncim_query_content_pane_t4

0xa40a,	// (0x0005af64) ncim_query_content_pane_t5_ParamLimits

0xa40a,	// (0x0005af64) ncim_query_content_pane_t5

0x22b7,	// (0x00052e11) ncim_query_content_pane_t6_ParamLimits

0x22b7,	// (0x00052e11) ncim_query_content_pane_t6

0xfc06,	// (0x00060760) ncim_query_content_pane_t_ParamLimits

0x22df,	// (0x00052e39) ncim_query_list_pane_ParamLimits

0x22f1,	// (0x00052e4b) ncim_query_popup_pane_ParamLimits

0x2305,	// (0x00052e5f) wait_bar_pane_cp04

0xbcf7,	// (0x0005c851) input_focus_pane_cp011

0x230d,	// (0x00052e67) ncim_query_popup_pane_t1

0x231b,	// (0x00052e75) ncim_list_query_list_pane_ParamLimits

0x231b,	// (0x00052e75) ncim_list_query_list_pane

0xbcf7,	// (0x0005c851) bg_button_pane_cp027

0x232e,	// (0x00052e88) ncim_query_button_pane_g1

0xbcf7,	// (0x0005c851) list_highlight_pane_cp012

0x2338,	// (0x00052e92) ncim_list_query_list_pane_g1

0x2340,	// (0x00052e9a) ncim_list_query_list_pane_t1

0x89b7,	// (0x00059511) cam4_indicators_pane_g3_ParamLimits

0x89b7,	// (0x00059511) cam4_indicators_pane_g3

0x8aba,	// (0x00059614) vid4_indicators_pane_g5_ParamLimits

0x8aba,	// (0x00059614) vid4_indicators_pane_g5

0x9ac8,	// (0x0005a622) vid4_progress_pane_g5_ParamLimits

0x9ac8,	// (0x0005a622) vid4_progress_pane_g5

0xa2b0,	// (0x0005ae0a) main_ncimui_pane_g1

0xa318,	// (0x0005ae72) ncimui_group_query_pane_ParamLimits

0xa318,	// (0x0005ae72) ncimui_group_query_pane

0xa360,	// (0x0005aeba) ncimui_list_pane_ParamLimits

0xa360,	// (0x0005aeba) ncimui_list_pane

0xa387,	// (0x0005aee1) ncimui_text_pane_ParamLimits

0xa387,	// (0x0005aee1) ncimui_text_pane

0xa427,	// (0x0005af81) ncimui_text_pane_t1_ParamLimits

0xa427,	// (0x0005af81) ncimui_text_pane_t1

0x234e,	// (0x00052ea8) ncimui_list_single_graphic_pane_ParamLimits

0x234e,	// (0x00052ea8) ncimui_list_single_graphic_pane

0xa446,	// (0x0005afa0) ncimui_query_pane_ParamLimits

0xa446,	// (0x0005afa0) ncimui_query_pane

0xbcf7,	// (0x0005c851) list_highlight_pane_cp013

0x235e,	// (0x00052eb8) ncim_list_query_list_pane_t1_copy1

0x2338,	// (0x00052e92) ncim_list_single_graphic_pane_g1

0x236c,	// (0x00052ec6) ncim_query_button_pane_cp01

0x2378,	// (0x00052ed2) ncim_query_entry_pane_ParamLimits

0x2378,	// (0x00052ed2) ncim_query_entry_pane

0x238b,	// (0x00052ee5) ncimui_query_pane_g1

0x2397,	// (0x00052ef1) ncimui_query_pane_t1_ParamLimits

0x2397,	// (0x00052ef1) ncimui_query_pane_t1

0xc69f,	// (0x0005d1f9) input_focus_pane_cp012

0x23b0,	// (0x00052f0a) ncim_query_entry_pane_t1

0xc484,	// (0x0005cfde) main_im_pane_ParamLimits

0x699f,	// (0x000574f9) main_mobtv_pane_ParamLimits

0x699f,	// (0x000574f9) main_mobtv_pane

0xa0be,	// (0x0005ac18) main_cset6_slider_pane_g18_ParamLimits

0xa0be,	// (0x0005ac18) main_cset6_slider_pane_g18

0xa0e2,	// (0x0005ac3c) main_cset6_slider_pane_g19_ParamLimits

0xa0e2,	// (0x0005ac3c) main_cset6_slider_pane_g19

0x1861,	// (0x000523bb) bg_main_mobtv_pane_ParamLimits

0x1861,	// (0x000523bb) bg_main_mobtv_pane

0xa459,	// (0x0005afb3) main_mobtv_info_pane

0xa464,	// (0x0005afbe) main_mobtv_loading_pane_ParamLimits

0xa464,	// (0x0005afbe) main_mobtv_loading_pane

0x23c2,	// (0x00052f1c) main_mobtv_pg_channel_list_pane

0x23cc,	// (0x00052f26) main_mobtv_pg_hdr_pane

0xa471,	// (0x0005afcb) main_mobtv_programe_curr_pane_ParamLimits

0xa471,	// (0x0005afcb) main_mobtv_programe_curr_pane

0xa47e,	// (0x0005afd8) main_mobtv_programe_next_pane_ParamLimits

0xa47e,	// (0x0005afd8) main_mobtv_programe_next_pane

0x23d5,	// (0x00052f2f) popup_mobtv_noti_window

0x0d38,	// (0x00051892) main_tv_pg_hdr_pane_g1

0x23dd,	// (0x00052f37) main_tv_pg_hdr_pane_g2

0x23e5,	// (0x00052f3f) main_tv_pg_hdr_pane_g3

0x23ed,	// (0x00052f47) main_tv_pg_hdr_pane_g4

0x23f5,	// (0x00052f4f) main_tv_pg_hdr_pane_g5

0x23ff,	// (0x00052f59) main_tv_pg_hdr_pane_g6

0x2409,	// (0x00052f63) main_tv_pg_hdr_pane_g7

0x2413,	// (0x00052f6d) main_tv_pg_hdr_pane_g8

0x241d,	// (0x00052f77) main_tv_pg_hdr_pane_g9

0x2427,	// (0x00052f81) main_tv_pg_hdr_pane_g10

0x2431,	// (0x00052f8b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x0006076d) main_tv_pg_hdr_pane_g

0x243b,	// (0x00052f95) main_tv_pg_hdr_pane_t1

0x2449,	// (0x00052fa3) main_tv_pg_hdr_pane_t2

0x2457,	// (0x00052fb1) main_tv_pg_hdr_pane_t3

0x2467,	// (0x00052fc1) main_tv_pg_hdr_pane_t4

0x2477,	// (0x00052fd1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x00060784) main_tv_pg_hdr_pane_t

0x2487,	// (0x00052fe1) single_mobtv_pg_channel_pane_ParamLimits

0x2487,	// (0x00052fe1) single_mobtv_pg_channel_pane

0x2499,	// (0x00052ff3) single_mobtv_pg_channel_table_pane

0x24a2,	// (0x00052ffc) single_mobtv_pg_channel_thumb_pane

0x24ab,	// (0x00053005) single_tv_pg_channel_pane_g1

0x24b4,	// (0x0005300e) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x0006078f) single_tv_pg_channel_pane_g

0x108b,	// (0x00051be5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x108b,	// (0x00051be5) bg_single_mobtv_pg_channel_thumb_pane

0x24bd,	// (0x00053017) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x24bd,	// (0x00053017) single_mobtv_pg_channel_thumb_pane_g1

0x24cb,	// (0x00053025) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x24cb,	// (0x00053025) single_mobtv_pg_channel_thumb_pane_g2

0x24d7,	// (0x00053031) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x24d7,	// (0x00053031) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x00060794) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x00060794) single_mobtv_pg_channel_thumb_pane_g

0x24e3,	// (0x0005303d) single_mobtv_pg_channel_thumb_pane_t1

0x24f1,	// (0x0005304b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x0006079b) single_mobtv_pg_channel_thumb_pane_t

0x0d38,	// (0x00051892) bg_single_mobtv_pg_channel_table_pane_g1

0x0d38,	// (0x00051892) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00060246) bg_single_mobtv_pg_channel_table_pane_g

0x24ff,	// (0x00053059) single_mobtv_pg_channel_table_pane_t1

0x250d,	// (0x00053067) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x000607a0) single_mobtv_pg_channel_table_pane_t

0xa493,	// (0x0005afed) main_mobtv_info_pane_g1_ParamLimits

0xa493,	// (0x0005afed) main_mobtv_info_pane_g1

0xa4af,	// (0x0005b009) main_mobtv_info_pane_t1_ParamLimits

0xa4af,	// (0x0005b009) main_mobtv_info_pane_t1

0xa527,	// (0x0005b081) main_mobtv_info_pane_t2_ParamLimits

0xa527,	// (0x0005b081) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x000607aa) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x000607aa) main_mobtv_info_pane_t

0xa5b6,	// (0x0005b110) wait_bar_pane_cp05

0xa5c8,	// (0x0005b122) main_mobtv_loading_pane_g1_ParamLimits

0xa5c8,	// (0x0005b122) main_mobtv_loading_pane_g1

0xa5d6,	// (0x0005b130) main_mobtv_loading_pane_g2_ParamLimits

0xa5d6,	// (0x0005b130) main_mobtv_loading_pane_g2

0xa5e2,	// (0x0005b13c) main_mobtv_loading_pane_g3_ParamLimits

0xa5e2,	// (0x0005b13c) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x000607b1) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x000607b1) main_mobtv_loading_pane_g

0x251b,	// (0x00053075) main_mobtv_loading_pane_t1_ParamLimits

0x251b,	// (0x00053075) main_mobtv_loading_pane_t1

0x2533,	// (0x0005308d) main_mobtv_loading_pane_t2_ParamLimits

0x2533,	// (0x0005308d) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x000607b8) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x000607b8) main_mobtv_loading_pane_t

0xa5f0,	// (0x0005b14a) wait_bar_pane_cp06_ParamLimits

0xa5f0,	// (0x0005b14a) wait_bar_pane_cp06

0x2557,	// (0x000530b1) main_mobtv_programe_curr_pane_t1

0x2565,	// (0x000530bf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x000607bd) main_mobtv_programe_curr_pane_t

0x2573,	// (0x000530cd) main_mobtv_programe_next_pane_t1

0x2581,	// (0x000530db) main_mobtv_programe_next_pane_t2

0x258f,	// (0x000530e9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x000607c2) main_mobtv_programe_next_pane_t

0xbcf7,	// (0x0005c851) bg_popup_mobtv_noti_window_pane

0x259d,	// (0x000530f7) popup_mobtv_noti_window_g1

0x25a5,	// (0x000530ff) popup_mobtv_noti_window_t1

0x25b3,	// (0x0005310d) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x000607c9) popup_mobtv_noti_window_t

0x0d38,	// (0x00051892) bg_popup_mobtv_noti_window_pane_g1

0x3a2b,	// (0x00054585) sc_clock_pane

0x3a2b,	// (0x00054585) main_fs_bigclock_pane

0x9caf,	// (0x0005a809) blid2_tripm_pane_t4_ParamLimits

0x9caf,	// (0x0005a809) blid2_tripm_pane_t4

0xa5fc,	// (0x0005b156) sc_clock_pane_g1_ParamLimits

0xa5fc,	// (0x0005b156) sc_clock_pane_g1

0xa60a,	// (0x0005b164) sc_clock_pane_t1_ParamLimits

0xa60a,	// (0x0005b164) sc_clock_pane_t1

0xa61d,	// (0x0005b177) sc_clock_pane_t2_ParamLimits

0xa61d,	// (0x0005b177) sc_clock_pane_t2

0xa62f,	// (0x0005b189) sc_clock_pane_t3_ParamLimits

0xa62f,	// (0x0005b189) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x000607ce) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x000607ce) sc_clock_pane_t

0xb396,	// (0x0005bef0) main_fs_bigclock_indicator_pane_ParamLimits

0xb396,	// (0x0005bef0) main_fs_bigclock_indicator_pane

0xa6bb,	// (0x0005b215) main_fs_bigclock_pane_g1_ParamLimits

0xa6bb,	// (0x0005b215) main_fs_bigclock_pane_g1

0xb3a2,	// (0x0005befc) main_fs_bigclock_pane_t1_ParamLimits

0xb3a2,	// (0x0005befc) main_fs_bigclock_pane_t1

0xb3b4,	// (0x0005bf0e) main_fs_bigclock_pane_t2_ParamLimits

0xb3b4,	// (0x0005bf0e) main_fs_bigclock_pane_t2

0xb3c6,	// (0x0005bf20) main_fs_bigclock_pane_t3_ParamLimits

0xb3c6,	// (0x0005bf20) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x000609d2) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x000609d2) main_fs_bigclock_pane_t

0xcd90,	// (0x0005d8ea) main_fs_bigclock_indicator_pane_g1

0x2287,	// (0x00052de1) ncim_query_content_pane_g2_ParamLimits

0x2287,	// (0x00052de1) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x0006075b) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x0006075b) ncim_query_content_pane_g

0xa643,	// (0x0005b19d) sc_clock_pane_t4_ParamLimits

0xa643,	// (0x0005b19d) sc_clock_pane_t4

0x699f,	// (0x000574f9) main_radioblah_pane

0x17b6,	// (0x00052310) cell_call4_button_pane_t1_copy1_ParamLimits

0x17b6,	// (0x00052310) cell_call4_button_pane_t1_copy1

0xa2ca,	// (0x0005ae24) main_ncimui_pane_t1_ParamLimits

0xa2ca,	// (0x0005ae24) main_ncimui_pane_t1

0xa2e4,	// (0x0005ae3e) main_ncimui_pane_t2_ParamLimits

0xa2e4,	// (0x0005ae3e) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x00060754) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x00060754) main_ncimui_pane_t

0x270e,	// (0x00053268) main_radioblah_anim_pane_ParamLimits

0x270e,	// (0x00053268) main_radioblah_anim_pane

0x271f,	// (0x00053279) main_radioblah_info_pane_ParamLimits

0x271f,	// (0x00053279) main_radioblah_info_pane

0x2733,	// (0x0005328d) main_radioblah_pane_t1_ParamLimits

0x2733,	// (0x0005328d) main_radioblah_pane_t1

0x274f,	// (0x000532a9) main_radioblah_pane_t2_ParamLimits

0x274f,	// (0x000532a9) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x000607ef) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x000607ef) main_radioblah_pane_t

0xa70d,	// (0x0005b267) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa70d,	// (0x0005b267) main_radioblah_rocker_ctrl_pane

0x2797,	// (0x000532f1) main_radioblah_info_pane_t1_ParamLimits

0x2797,	// (0x000532f1) main_radioblah_info_pane_t1

0xa752,	// (0x0005b2ac) main_radioblah_info_pane_t2_ParamLimits

0xa752,	// (0x0005b2ac) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x000607f8) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x000607f8) main_radioblah_info_pane_t

0x0d38,	// (0x00051892) main_radioblah_rocker_ctrl_pane_g1

0xa802,	// (0x0005b35c) main_radioblah_rocker_ctrl_pane_g2

0xa80a,	// (0x0005b364) main_radioblah_rocker_ctrl_pane_g3

0xa812,	// (0x0005b36c) main_radioblah_rocker_ctrl_pane_g4

0xa81a,	// (0x0005b374) main_radioblah_rocker_ctrl_pane_g5

0xa822,	// (0x0005b37c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x00060801) main_radioblah_rocker_ctrl_pane_g

0xa266,	// (0x0005adc0) main_cset_text2_pane_t1_copy1_ParamLimits

0x88d7,	// (0x00059431) cam4_image_uncrop_qvga_pane

0x8a2c,	// (0x00059586) vid4_image_uncrop_qcif_pane

0x9e3d,	// (0x0005a997) cam6_image_uncrop_qvga_pane_ParamLimits

0x9e3d,	// (0x0005a997) cam6_image_uncrop_qvga_pane

0x1f8e,	// (0x00052ae8) vid6_image_uncrop_qcif_pane_ParamLimits

0x1f8e,	// (0x00052ae8) vid6_image_uncrop_qcif_pane

0xbcf7,	// (0x0005c851) bg_popup_preview_window_pane_cp03

0x2239,	// (0x00052d93) list_cset_text2_pane

0x2241,	// (0x00052d9b) main_cset6_text2_pane_g1

0x2249,	// (0x00052da3) main_cset6_text2_pane_t1

0xa82a,	// (0x0005b384) list_cset_text2_pane_t1_ParamLimits

0xa82a,	// (0x0005b384) list_cset_text2_pane_t1

0x699f,	// (0x000574f9) main_radioblah_pane_ParamLimits

0xa5a2,	// (0x0005b0fc) main_mobtv_info_pane_t3_ParamLimits

0xa5a2,	// (0x0005b0fc) main_mobtv_info_pane_t3

0xa6fb,	// (0x0005b255) main_radioblah_pane_g1

0xa726,	// (0x0005b280) main_radioblah_info_pane_g1

0xa7a7,	// (0x0005b301) main_radioblah_info_pane_t3_ParamLimits

0xa7a7,	// (0x0005b301) main_radioblah_info_pane_t3

0x559a,	// (0x000560f4) highlight_cell_cale_month_pane_ParamLimits

0x559a,	// (0x000560f4) highlight_cell_cale_month_pane

0x3a2b,	// (0x00054585) main_phob_fisheye_pane

0x1173,	// (0x00051ccd) scroll_pane_cp0031_ParamLimits

0x1173,	// (0x00051ccd) scroll_pane_cp0031

0x209c,	// (0x00052bf6) wait_bar_pane_cp08_ParamLimits

0xa052,	// (0x0005abac) cset_list_set_pane_copy1_ParamLimits

0x27d1,	// (0x0005332b) highlight_cell_cale_month_pane_g1

0xa855,	// (0x0005b3af) highlight_cell_cale_month_pane_t1

0x1d2d,	// (0x00052887) list_gen_pane_cp01

0x199b,	// (0x000524f5) scroll_pane_01

0xa863,	// (0x0005b3bd) list_single_double_fisheye_pane

0xa86c,	// (0x0005b3c6) list_double_fisheye_pane_g1_ParamLimits

0xa86c,	// (0x0005b3c6) list_double_fisheye_pane_g1

0xa878,	// (0x0005b3d2) list_double_fisheye_pane_g2_ParamLimits

0xa878,	// (0x0005b3d2) list_double_fisheye_pane_g2

0xa88c,	// (0x0005b3e6) list_double_fisheye_pane_g3_ParamLimits

0xa88c,	// (0x0005b3e6) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x0006080e) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x0006080e) list_double_fisheye_pane_g

0xa8b5,	// (0x0005b40f) list_double_fisheye_pane_t1_ParamLimits

0xa8b5,	// (0x0005b40f) list_double_fisheye_pane_t1

0xa8d0,	// (0x0005b42a) list_double_fisheye_pane_t2_ParamLimits

0xa8d0,	// (0x0005b42a) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x00060819) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x00060819) list_double_fisheye_pane_t

0x3a2b,	// (0x00054585) main_call5_pane

0xa669,	// (0x0005b1c3) sc_swipe_pane_ParamLimits

0xa669,	// (0x0005b1c3) sc_swipe_pane

0xa8fe,	// (0x0005b458) call5_image_pane_ParamLimits

0xa8fe,	// (0x0005b458) call5_image_pane

0xa90e,	// (0x0005b468) call5_swipe_1_pane_ParamLimits

0xa90e,	// (0x0005b468) call5_swipe_1_pane

0xa91a,	// (0x0005b474) call5_swipe_2_pane_ParamLimits

0xa91a,	// (0x0005b474) call5_swipe_2_pane

0xa934,	// (0x0005b48e) popup_call5_audio_first_window_ParamLimits

0xa934,	// (0x0005b48e) popup_call5_audio_first_window

0x108b,	// (0x00051be5) call5_swipe_1_pane_g1_ParamLimits

0x108b,	// (0x00051be5) call5_swipe_1_pane_g1

0x27d9,	// (0x00053333) call5_swipe_1_pane_g2_ParamLimits

0x27d9,	// (0x00053333) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x0006081e) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x0006081e) call5_swipe_1_pane_g

0x27e5,	// (0x0005333f) call5_swipe_1_pane_t1_ParamLimits

0x27e5,	// (0x0005333f) call5_swipe_1_pane_t1

0x108b,	// (0x00051be5) call5_swipe_2_pane_g1_ParamLimits

0x108b,	// (0x00051be5) call5_swipe_2_pane_g1

0xc6bf,	// (0x0005d219) call5_swipe_2_pane_g2_ParamLimits

0xc6bf,	// (0x0005d219) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x00060823) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x00060823) call5_swipe_2_pane_g

0xc6cb,	// (0x0005d225) call5_swipe_2_pane_t1_ParamLimits

0xc6cb,	// (0x0005d225) call5_swipe_2_pane_t1

0xc6e0,	// (0x0005d23a) sc_swipe_pane_g1_ParamLimits

0xc6e0,	// (0x0005d23a) sc_swipe_pane_g1

0xc6ed,	// (0x0005d247) sc_swipe_pane_g2_ParamLimits

0xc6ed,	// (0x0005d247) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x00060828) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x00060828) sc_swipe_pane_g

0xc6f9,	// (0x0005d253) sc_swipe_pane_t1_ParamLimits

0xc6f9,	// (0x0005d253) sc_swipe_pane_t1

0x3a2b,	// (0x00054585) main_cmail_launcher_pane

0xa942,	// (0x0005b49c) aid_size_cell_cmail_l_ParamLimits

0xa942,	// (0x0005b49c) aid_size_cell_cmail_l

0xa952,	// (0x0005b4ac) grid_cmail_l_pane_ParamLimits

0xa952,	// (0x0005b4ac) grid_cmail_l_pane

0xa962,	// (0x0005b4bc) cell_cmail_l_pane_ParamLimits

0xa962,	// (0x0005b4bc) cell_cmail_l_pane

0xa976,	// (0x0005b4d0) cell_cmail_l_pane_g1_ParamLimits

0xa976,	// (0x0005b4d0) cell_cmail_l_pane_g1

0xa982,	// (0x0005b4dc) cell_cmail_l_pane_t1_ParamLimits

0xa982,	// (0x0005b4dc) cell_cmail_l_pane_t1

0xc70e,	// (0x0005d268) cell_cmail_l_pane_t2_ParamLimits

0xc70e,	// (0x0005d268) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x0006082d) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x0006082d) cell_cmail_l_pane_t

0xc69f,	// (0x0005d1f9) grid_highlight_pane_cp018_ParamLimits

0xc69f,	// (0x0005d1f9) grid_highlight_pane_cp018

0x388d,	// (0x000543e7) main2_pane_ParamLimits

0x388d,	// (0x000543e7) main2_pane

0xc52f,	// (0x0005d089) popup_sp_fs_action_menu_bg_pane_g1

0xc537,	// (0x0005d091) popup_sp_fs_action_menu_bg_pane_g2

0xc53f,	// (0x0005d099) popup_sp_fs_action_menu_bg_pane_g3

0xc547,	// (0x0005d0a1) popup_sp_fs_action_menu_bg_pane_g4

0xc54f,	// (0x0005d0a9) popup_sp_fs_action_menu_bg_pane_g5

0xc557,	// (0x0005d0b1) popup_sp_fs_action_menu_bg_pane_g6

0xc55f,	// (0x0005d0b9) popup_sp_fs_action_menu_bg_pane_g7

0xc567,	// (0x0005d0c1) popup_sp_fs_action_menu_bg_pane_g8

0xc56f,	// (0x0005d0c9) popup_sp_fs_action_menu_bg_pane_g9

0xc577,	// (0x0005d0d1) popup_sp_fs_action_menu_bg_pane_g10

0xc577,	// (0x0005d0d1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0005fcf2) popup_sp_fs_action_menu_bg_pane_g

0xd233,	// (0x0005dd8d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x2_t3_g3_g1

0xd23f,	// (0x0005dd99) list_medium_line_x2_t3_g3_g2_ParamLimits

0xd23f,	// (0x0005dd99) list_medium_line_x2_t3_g3_g2

0xd24b,	// (0x0005dda5) list_medium_line_x2_t3_g3_g3_ParamLimits

0xd24b,	// (0x0005dda5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0005fda2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0005fda2) list_medium_line_x2_t3_g3_g

0xd257,	// (0x0005ddb1) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd257,	// (0x0005ddb1) list_medium_line_x2_t3_g3_t1

0x46bb,	// (0x00055215) list_medium_line_x2_t3_g3_t2_ParamLimits

0x46bb,	// (0x00055215) list_medium_line_x2_t3_g3_t2

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0005fda9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0005fda9) list_medium_line_x2_t3_g3_t

0xd233,	// (0x0005dd8d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x2_t3_g2_g1

0xd24b,	// (0x0005dda5) list_medium_line_x2_t3_g2_g2_ParamLimits

0xd24b,	// (0x0005dda5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0005fdb0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0005fdb0) list_medium_line_x2_t3_g2_g

0xd281,	// (0x0005dddb) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd281,	// (0x0005dddb) list_medium_line_x2_t3_g2_t1

0xd297,	// (0x0005ddf1) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd297,	// (0x0005ddf1) list_medium_line_x2_t3_g2_t2

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0005fdb5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0005fdb5) list_medium_line_x2_t3_g2_t

0xd233,	// (0x0005dd8d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x2_t4_g4_g1

0xd2a9,	// (0x0005de03) list_medium_line_x2_t4_g4_g2_ParamLimits

0xd2a9,	// (0x0005de03) list_medium_line_x2_t4_g4_g2

0xd23f,	// (0x0005dd99) list_medium_line_x2_t4_g4_g3_ParamLimits

0xd23f,	// (0x0005dd99) list_medium_line_x2_t4_g4_g3

0xd2b5,	// (0x0005de0f) list_medium_line_x2_t4_g4_g4_ParamLimits

0xd2b5,	// (0x0005de0f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0005fdbc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0005fdbc) list_medium_line_x2_t4_g4_g

0x46cf,	// (0x00055229) list_medium_line_x2_t4_g4_t1_ParamLimits

0x46cf,	// (0x00055229) list_medium_line_x2_t4_g4_t1

0x46e6,	// (0x00055240) list_medium_line_x2_t4_g4_t2_ParamLimits

0x46e6,	// (0x00055240) list_medium_line_x2_t4_g4_t2

0x46fb,	// (0x00055255) list_medium_line_x2_t4_g4_t3_ParamLimits

0x46fb,	// (0x00055255) list_medium_line_x2_t4_g4_t3

0xd2c1,	// (0x0005de1b) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd2c1,	// (0x0005de1b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0005fdc5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0005fdc5) list_medium_line_x2_t4_g4_t

0xd233,	// (0x0005dd8d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x2_t2_g4_g1

0xd2a9,	// (0x0005de03) list_medium_line_x2_t2_g4_g2_ParamLimits

0xd2a9,	// (0x0005de03) list_medium_line_x2_t2_g4_g2

0xd23f,	// (0x0005dd99) list_medium_line_x2_t2_g4_g3_ParamLimits

0xd23f,	// (0x0005dd99) list_medium_line_x2_t2_g4_g3

0xd24b,	// (0x0005dda5) list_medium_line_x2_t2_g4_g4_ParamLimits

0xd24b,	// (0x0005dda5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0005fe2c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0005fe2c) list_medium_line_x2_t2_g4_g

0xd5ab,	// (0x0005e105) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd5ab,	// (0x0005e105) list_medium_line_x2_t2_g4_t1

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0005fe35) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0005fe35) list_medium_line_x2_t2_g4_t

0xd233,	// (0x0005dd8d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x2_t2_g3_g1

0xd23f,	// (0x0005dd99) list_medium_line_x2_t2_g3_g2_ParamLimits

0xd23f,	// (0x0005dd99) list_medium_line_x2_t2_g3_g2

0xd24b,	// (0x0005dda5) list_medium_line_x2_t2_g3_g3_ParamLimits

0xd24b,	// (0x0005dda5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0005fda2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0005fda2) list_medium_line_x2_t2_g3_g

0xd5c0,	// (0x0005e11a) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd5c0,	// (0x0005e11a) list_medium_line_x2_t2_g3_t1

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0005fe3a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0005fe3a) list_medium_line_x2_t2_g3_t

0x5816,	// (0x00056370) main_sp_fs_list_pane_ParamLimits

0x5816,	// (0x00056370) main_sp_fs_list_pane

0x5822,	// (0x0005637c) sp_fs_scroll_pane_ParamLimits

0x5822,	// (0x0005637c) sp_fs_scroll_pane

0x582e,	// (0x00056388) list_medium_line_x2_t3_t1

0x583e,	// (0x00056398) list_medium_line_x2_t3_t2

0xd76a,	// (0x0005e2c4) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0005fe85) list_medium_line_x2_t3_t

0x584c,	// (0x000563a6) list_medium_line_x3_t4_t1

0x585c,	// (0x000563b6) list_medium_line_x3_t4_t2

0xd778,	// (0x0005e2d2) list_medium_line_x3_t4_t3

0xd76a,	// (0x0005e2c4) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0005fe8c) list_medium_line_x3_t4_t

0x586a,	// (0x000563c4) list_medium_line_x4_t5_t1

0x587a,	// (0x000563d4) list_medium_line_x4_t5_t2

0xd778,	// (0x0005e2d2) list_medium_line_x4_t5_t3

0xd786,	// (0x0005e2e0) list_medium_line_x4_t5_t4

0xd76a,	// (0x0005e2c4) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0005fe95) list_medium_line_x4_t5_t

0xd233,	// (0x0005dd8d) list_medium_line_t4_g4_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_t4_g4_g1

0xd2b5,	// (0x0005de0f) list_medium_line_t4_g4_g2_ParamLimits

0xd2b5,	// (0x0005de0f) list_medium_line_t4_g4_g2

0xd794,	// (0x0005e2ee) list_medium_line_t4_g4_g3_ParamLimits

0xd794,	// (0x0005e2ee) list_medium_line_t4_g4_g3

0xd24b,	// (0x0005dda5) list_medium_line_t4_g4_g4_ParamLimits

0xd24b,	// (0x0005dda5) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0005fea0) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0005fea0) list_medium_line_t4_g4_g

0xd7a0,	// (0x0005e2fa) list_medium_line_t4_g4_t1_ParamLimits

0xd7a0,	// (0x0005e2fa) list_medium_line_t4_g4_t1

0xd7b5,	// (0x0005e30f) list_medium_line_t4_g4_t2_ParamLimits

0xd7b5,	// (0x0005e30f) list_medium_line_t4_g4_t2

0xd7ca,	// (0x0005e324) list_medium_line_t4_g4_t3_ParamLimits

0xd7ca,	// (0x0005e324) list_medium_line_t4_g4_t3

0xd26c,	// (0x0005ddc6) list_medium_line_t4_g4_t4_ParamLimits

0xd26c,	// (0x0005ddc6) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0005fea9) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0005fea9) list_medium_line_t4_g4_t

0x596f,	// (0x000564c9) chi_dic_find_pane_g1

0x69bb,	// (0x00057515) main_tport_pane

0x0470,	// (0x00050fca) list_medium_line_plain_t1

0x047e,	// (0x00050fd8) list_medium_line_t2_g2_g1_ParamLimits

0x047e,	// (0x00050fd8) list_medium_line_t2_g2_g1

0x048a,	// (0x00050fe4) list_medium_line_t2_g2_g2_ParamLimits

0x048a,	// (0x00050fe4) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x00060565) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x00060565) list_medium_line_t2_g2_g

0x94a2,	// (0x00059ffc) list_medium_line_t2_g2_t1_ParamLimits

0x94a2,	// (0x00059ffc) list_medium_line_t2_g2_t1

0x94bc,	// (0x0005a016) list_medium_line_t2_g2_t2_ParamLimits

0x94bc,	// (0x0005a016) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0006056a) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0006056a) list_medium_line_t2_g2_t

0x0532,	// (0x0005108c) aid_sp_fs_list_icon_a_sm

0x053a,	// (0x00051094) aid_sp_fs_list_icon_d

0xc6ad,	// (0x0005d207) aid_sp_fs_text_primary

0xc6b6,	// (0x0005d210) aid_sp_fs_text_secondary

0x0542,	// (0x0005109c) list_medium_line

0x0542,	// (0x0005109c) list_medium_line_g2

0x0542,	// (0x0005109c) list_medium_line_g3

0x0542,	// (0x0005109c) list_medium_line_plain

0x0542,	// (0x0005109c) list_medium_line_plain_t2

0x0542,	// (0x0005109c) list_medium_line_plain_t3

0x0542,	// (0x0005109c) list_medium_line_right_icon

0x0542,	// (0x0005109c) list_medium_line_right_iconx2

0x0542,	// (0x0005109c) list_medium_line_t2

0x0542,	// (0x0005109c) list_medium_line_t2_g2

0x0542,	// (0x0005109c) list_medium_line_t2_g3

0x0542,	// (0x0005109c) list_medium_line_t2_right_icon

0x0542,	// (0x0005109c) list_medium_line_t2_right_iconx2

0x0542,	// (0x0005109c) list_medium_line_t3

0x0542,	// (0x0005109c) list_medium_line_t3_g2

0x0542,	// (0x0005109c) list_medium_line_t3_g3

0x0542,	// (0x0005109c) list_medium_line_t3_right_iconx2

0x054b,	// (0x000510a5) list_medium_line_t4_g4

0x0554,	// (0x000510ae) list_medium_line_x2

0x0554,	// (0x000510ae) list_medium_line_x2_t2_g2

0x0554,	// (0x000510ae) list_medium_line_x2_t2_g3

0x0554,	// (0x000510ae) list_medium_line_x2_t2_g4

0x0554,	// (0x000510ae) list_medium_line_x2_t3

0x0554,	// (0x000510ae) list_medium_line_x2_t3_g2

0x0554,	// (0x000510ae) list_medium_line_x2_t3_g3

0x0554,	// (0x000510ae) list_medium_line_x2_t3_g4

0x0554,	// (0x000510ae) list_medium_line_x2_t4_g2

0x0554,	// (0x000510ae) list_medium_line_x2_t4_g4

0x055d,	// (0x000510b7) list_medium_line_x3

0x055d,	// (0x000510b7) list_medium_line_x3_t4

0x055d,	// (0x000510b7) list_medium_line_x3_t4_g4

0x054b,	// (0x000510a5) list_medium_line_x4_t4

0x054b,	// (0x000510a5) list_medium_line_x4_t4_g7

0x054b,	// (0x000510a5) list_medium_line_x4_t5

0x0566,	// (0x000510c0) list_single_fs_dyc_pane_ParamLimits

0x0566,	// (0x000510c0) list_single_fs_dyc_pane

0xd233,	// (0x0005dd8d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x4_t4_g7_g1

0x05a6,	// (0x00051100) list_medium_line_x4_t4_g7_g2_ParamLimits

0x05a6,	// (0x00051100) list_medium_line_x4_t4_g7_g2

0x05b2,	// (0x0005110c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x05b2,	// (0x0005110c) list_medium_line_x4_t4_g7_g3

0x05c1,	// (0x0005111b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x05c1,	// (0x0005111b) list_medium_line_x4_t4_g7_g4

0x05cd,	// (0x00051127) list_medium_line_x4_t4_g7_g5_ParamLimits

0x05cd,	// (0x00051127) list_medium_line_x4_t4_g7_g5

0x05dc,	// (0x00051136) list_medium_line_x4_t4_g7_g6_ParamLimits

0x05dc,	// (0x00051136) list_medium_line_x4_t4_g7_g6

0x05eb,	// (0x00051145) list_medium_line_x4_t4_g7_g7_ParamLimits

0x05eb,	// (0x00051145) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x00060735) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x00060735) list_medium_line_x4_t4_g7_g

0x05f7,	// (0x00051151) list_medium_line_x4_t4_g7_t1_ParamLimits

0x05f7,	// (0x00051151) list_medium_line_x4_t4_g7_t1

0x060c,	// (0x00051166) list_medium_line_x4_t4_g7_t2_ParamLimits

0x060c,	// (0x00051166) list_medium_line_x4_t4_g7_t2

0x0621,	// (0x0005117b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0621,	// (0x0005117b) list_medium_line_x4_t4_g7_t3

0x0636,	// (0x00051190) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0636,	// (0x00051190) list_medium_line_x4_t4_g7_t4

0x0648,	// (0x000511a2) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0648,	// (0x000511a2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x00060744) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x00060744) list_medium_line_x4_t4_g7_t

0x065a,	// (0x000511b4) list_single_dyc_row_pane_ParamLimits

0x065a,	// (0x000511b4) list_single_dyc_row_pane

0xa8f2,	// (0x0005b44c) call5_gesture_pane_ParamLimits

0xa8f2,	// (0x0005b44c) call5_gesture_pane

0xa926,	// (0x0005b480) call5_windows_pane_ParamLimits

0xa926,	// (0x0005b480) call5_windows_pane

0xa998,	// (0x0005b4f2) call5_swipe_1_pane_cp_ParamLimits

0xa998,	// (0x0005b4f2) call5_swipe_1_pane_cp

0xa9a4,	// (0x0005b4fe) call5_swipe_2_pane_cp_ParamLimits

0xa9a4,	// (0x0005b4fe) call5_swipe_2_pane_cp

0xdbdf,	// (0x0005e739) call5_image_pane_cp

0xa9b0,	// (0x0005b50a) popup_call5_audio_first_window_cp_ParamLimits

0xa9b0,	// (0x0005b50a) popup_call5_audio_first_window_cp

0xc6e0,	// (0x0005d23a) call5_swipe_1_pane_g1_cp_ParamLimits

0xc6e0,	// (0x0005d23a) call5_swipe_1_pane_g1_cp

0xc720,	// (0x0005d27a) call5_swipe_1_pane_g2_cp

0xc6f9,	// (0x0005d253) call5_swipe_1_pane_t1_cp_ParamLimits

0xc6f9,	// (0x0005d253) call5_swipe_1_pane_t1_cp

0xc6e0,	// (0x0005d23a) call5_swipe_2_pane_g1_cp_ParamLimits

0xc6e0,	// (0x0005d23a) call5_swipe_2_pane_g1_cp

0xc728,	// (0x0005d282) call5_swipe_2_pane_g2_cp

0xc730,	// (0x0005d28a) call5_swipe_2_pane_t1_cp_ParamLimits

0xc730,	// (0x0005d28a) call5_swipe_2_pane_t1_cp

0xc69f,	// (0x0005d1f9) main_sp_fs_email_pane

0xc745,	// (0x0005d29f) main_sp_fs_listscroll_pane_te

0x0677,	// (0x000511d1) popup_sp_fs_action_menu_pane_ParamLimits

0x0677,	// (0x000511d1) popup_sp_fs_action_menu_pane

0x0d38,	// (0x00051892) bg_sp_fs_ctrlbar_pane_g1

0xc74e,	// (0x0005d2a8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc757,	// (0x0005d2b1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc760,	// (0x0005d2ba) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0d38,	// (0x00051892) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x00060832) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0b1b,	// (0x00051675) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0b1b,	// (0x00051675) bg_sp_fs_ctrlbar_ddmenu_pane

0xc769,	// (0x0005d2c3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc769,	// (0x0005d2c3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc775,	// (0x0005d2cf) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc775,	// (0x0005d2cf) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x0006083b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x0006083b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc781,	// (0x0005d2db) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc781,	// (0x0005d2db) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x06b7,	// (0x00051211) list_medium_line_t2_right_icon_g1

0xa9bc,	// (0x0005b516) list_medium_line_t2_right_icon_t1

0xa9cc,	// (0x0005b526) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x00060840) list_medium_line_t2_right_icon_t

0xf02a,	// (0x0005fb84) bg_sp_fs_ctrlbar_pane_ParamLimits

0xf02a,	// (0x0005fb84) bg_sp_fs_ctrlbar_pane

0xaa31,	// (0x0005b58b) main_sp_fs_ctrlbar_button_pane_cp01

0xaa39,	// (0x0005b593) main_sp_fs_ctrlbar_ddmenu_pane

0xc7d3,	// (0x0005d32d) main_sp_fs_ctrlbar_pane_g1

0xc7df,	// (0x0005d339) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x00060845) main_sp_fs_ctrlbar_pane_g

0xc7eb,	// (0x0005d345) main_sp_fs_ctrlbar_pane_t1

0xaa43,	// (0x0005b59d) main_sp_fs_ctrlbar_pane

0xaa5d,	// (0x0005b5b7) main_sp_fs_listscroll_pane_te_cp01

0xaa6e,	// (0x0005b5c8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xaa6e,	// (0x0005b5c8) popup_sp_fs_action_menu_pane_cp01

0xc69f,	// (0x0005d1f9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc69f,	// (0x0005d1f9) bg_sp_fs_highlight_list_pane_cp01

0x06bf,	// (0x00051219) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x06bf,	// (0x00051219) sp_fs_action_menu_list_gene_pane_g1

0xc810,	// (0x0005d36a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc810,	// (0x0005d36a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x0006084f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x0006084f) sp_fs_action_menu_list_gene_pane_g

0x06ce,	// (0x00051228) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x06ce,	// (0x00051228) sp_fs_action_menu_list_gene_pane_t1

0x06e6,	// (0x00051240) sp_fs_action_menu_list_gene_pane_ParamLimits

0x06e6,	// (0x00051240) sp_fs_action_menu_list_gene_pane

0xc81d,	// (0x0005d377) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc81d,	// (0x0005d377) popup_sp_fs_action_menu_bg_pane

0x0703,	// (0x0005125d) sp_fs_action_menu_list_pane_ParamLimits

0x0703,	// (0x0005125d) sp_fs_action_menu_list_pane

0xc82b,	// (0x0005d385) sp_fs_scroll_pane_cp01_ParamLimits

0xc82b,	// (0x0005d385) sp_fs_scroll_pane_cp01

0xaa92,	// (0x0005b5ec) list_medium_line_plain_t2_t1

0xaaa2,	// (0x0005b5fc) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x00060854) list_medium_line_plain_t2_t

0xaab0,	// (0x0005b60a) list_medium_line_plain_t3_t1

0xaac0,	// (0x0005b61a) list_medium_line_plain_t3_t2

0xaace,	// (0x0005b628) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x00060859) list_medium_line_plain_t3_t

0xd233,	// (0x0005dd8d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x2_t2_g2_g1

0xd24b,	// (0x0005dda5) list_medium_line_x2_t2_g2_g2_ParamLimits

0xd24b,	// (0x0005dda5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0005fdb0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0005fdb0) list_medium_line_x2_t2_g2_g

0xd7a0,	// (0x0005e2fa) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd7a0,	// (0x0005e2fa) list_medium_line_x2_t2_g2_t1

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x00060860) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x00060860) list_medium_line_x2_t2_g2_t

0xd233,	// (0x0005dd8d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x2_t4_g2_g1

0x0721,	// (0x0005127b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0721,	// (0x0005127b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x00060865) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x00060865) list_medium_line_x2_t4_g2_g

0xaadc,	// (0x0005b636) list_medium_line_x2_t4_g2_t1_ParamLimits

0xaadc,	// (0x0005b636) list_medium_line_x2_t4_g2_t1

0xaaf6,	// (0x0005b650) list_medium_line_x2_t4_g2_t2_ParamLimits

0xaaf6,	// (0x0005b650) list_medium_line_x2_t4_g2_t2

0xab0b,	// (0x0005b665) list_medium_line_x2_t4_g2_t3_ParamLimits

0xab0b,	// (0x0005b665) list_medium_line_x2_t4_g2_t3

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x0006086a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x0006086a) list_medium_line_x2_t4_g2_t

0x0733,	// (0x0005128d) list_medium_line_t3_right_iconx2_g1

0x06b7,	// (0x00051211) list_medium_line_t3_right_iconx2_g2

0xab20,	// (0x0005b67a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x00060873) list_medium_line_t3_right_iconx2_g

0xab28,	// (0x0005b682) list_medium_line_t3_right_iconx2_t1

0xab38,	// (0x0005b692) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x0006087a) list_medium_line_t3_right_iconx2_t

0xd233,	// (0x0005dd8d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x3_t4_g4_g1

0xd23f,	// (0x0005dd99) list_medium_line_x3_t4_g4_g2_ParamLimits

0xd23f,	// (0x0005dd99) list_medium_line_x3_t4_g4_g2

0xd2b5,	// (0x0005de0f) list_medium_line_x3_t4_g4_g3_ParamLimits

0xd2b5,	// (0x0005de0f) list_medium_line_x3_t4_g4_g3

0x073b,	// (0x00051295) list_medium_line_x3_t4_g4_g4_ParamLimits

0x073b,	// (0x00051295) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x0006087f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x0006087f) list_medium_line_x3_t4_g4_g

0xab46,	// (0x0005b6a0) list_medium_line_x3_t4_g4_t1_ParamLimits

0xab46,	// (0x0005b6a0) list_medium_line_x3_t4_g4_t1

0xab5d,	// (0x0005b6b7) list_medium_line_x3_t4_g4_t2_ParamLimits

0xab5d,	// (0x0005b6b7) list_medium_line_x3_t4_g4_t2

0xd7b5,	// (0x0005e30f) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd7b5,	// (0x0005e30f) list_medium_line_x3_t4_g4_t3

0x0747,	// (0x000512a1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0747,	// (0x000512a1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x00060888) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x00060888) list_medium_line_x3_t4_g4_t

0xab72,	// (0x0005b6cc) list_single_dyc_row_text_pane_t1_ParamLimits

0xab72,	// (0x0005b6cc) list_single_dyc_row_text_pane_t1

0xaba9,	// (0x0005b703) list_single_dyc_row_text_pane_t2_ParamLimits

0xaba9,	// (0x0005b703) list_single_dyc_row_text_pane_t2

0x0764,	// (0x000512be) list_single_dyc_row_text_pane_t3_ParamLimits

0x0764,	// (0x000512be) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x00060891) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x00060891) list_single_dyc_row_text_pane_t

0x0776,	// (0x000512d0) list_single_dyc_row_pane_g1_ParamLimits

0x0776,	// (0x000512d0) list_single_dyc_row_pane_g1

0x0782,	// (0x000512dc) list_single_dyc_row_pane_g2_ParamLimits

0x0782,	// (0x000512dc) list_single_dyc_row_pane_g2

0x078e,	// (0x000512e8) list_single_dyc_row_pane_g3_ParamLimits

0x078e,	// (0x000512e8) list_single_dyc_row_pane_g3

0x079a,	// (0x000512f4) list_single_dyc_row_pane_g4_ParamLimits

0x079a,	// (0x000512f4) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x00060898) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x00060898) list_single_dyc_row_pane_g

0x07a6,	// (0x00051300) list_single_dyc_row_text_pane_ParamLimits

0x07a6,	// (0x00051300) list_single_dyc_row_text_pane

0xbcf7,	// (0x0005c851) bg_sp_fs_scroll_pane

0xc851,	// (0x0005d3ab) thumb_sp_fs_scroll_pane

0x047e,	// (0x00050fd8) list_medium_line_g1_ParamLimits

0x047e,	// (0x00050fd8) list_medium_line_g1

0x07c5,	// (0x0005131f) list_medium_line_t1_ParamLimits

0x07c5,	// (0x0005131f) list_medium_line_t1

0xd233,	// (0x0005dd8d) list_medium_line_x2_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x2_g1

0xd23f,	// (0x0005dd99) list_medium_line_x2_g2_ParamLimits

0xd23f,	// (0x0005dd99) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x000608a1) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x000608a1) list_medium_line_x2_g

0x07da,	// (0x00051334) list_medium_line_x2_t1_ParamLimits

0x07da,	// (0x00051334) list_medium_line_x2_t1

0xd233,	// (0x0005dd8d) list_medium_line_x3_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x3_g1

0xd23f,	// (0x0005dd99) list_medium_line_x3_g2_ParamLimits

0xd23f,	// (0x0005dd99) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x000608a1) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x000608a1) list_medium_line_x3_g

0x07da,	// (0x00051334) list_medium_line_x3_t1_ParamLimits

0x07da,	// (0x00051334) list_medium_line_x3_t1

0xc85a,	// (0x0005d3b4) thumb_sp_fs_scroll_pane_g1

0xc863,	// (0x0005d3bd) thumb_sp_fs_scroll_pane_g2

0xc86c,	// (0x0005d3c6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x000608a6) thumb_sp_fs_scroll_pane_g

0xc85a,	// (0x0005d3b4) bg_sp_fs_scroll_pane_g1

0xc863,	// (0x0005d3bd) bg_sp_fs_scroll_pane_g2

0xc86c,	// (0x0005d3c6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x000608a6) bg_sp_fs_scroll_pane_g

0xd233,	// (0x0005dd8d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd233,	// (0x0005dd8d) list_medium_line_x2_t3_g4_g1

0xd2a9,	// (0x0005de03) list_medium_line_x2_t3_g4_g2_ParamLimits

0xd2a9,	// (0x0005de03) list_medium_line_x2_t3_g4_g2

0xd23f,	// (0x0005dd99) list_medium_line_x2_t3_g4_g3_ParamLimits

0xd23f,	// (0x0005dd99) list_medium_line_x2_t3_g4_g3

0xd24b,	// (0x0005dda5) list_medium_line_x2_t3_g4_g4_ParamLimits

0xd24b,	// (0x0005dda5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0005fe2c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0005fe2c) list_medium_line_x2_t3_g4_g

0xac03,	// (0x0005b75d) list_medium_line_x2_t3_g4_t1_ParamLimits

0xac03,	// (0x0005b75d) list_medium_line_x2_t3_g4_t1

0xac19,	// (0x0005b773) list_medium_line_x2_t3_g4_t2_ParamLimits

0xac19,	// (0x0005b773) list_medium_line_x2_t3_g4_t2

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd26c,	// (0x0005ddc6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x000608ad) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x000608ad) list_medium_line_x2_t3_g4_t

0x047e,	// (0x00050fd8) list_medium_line_g2_g1_ParamLimits

0x047e,	// (0x00050fd8) list_medium_line_g2_g1

0x048a,	// (0x00050fe4) list_medium_line_g2_g2_ParamLimits

0x048a,	// (0x00050fe4) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x00060565) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x00060565) list_medium_line_g2_g

0x07f0,	// (0x0005134a) list_medium_line_g2_t1_ParamLimits

0x07f0,	// (0x0005134a) list_medium_line_g2_t1

0x047e,	// (0x00050fd8) list_medium_line_t3_g2_g1_ParamLimits

0x047e,	// (0x00050fd8) list_medium_line_t3_g2_g1

0x048a,	// (0x00050fe4) list_medium_line_t3_g2_g2_ParamLimits

0x048a,	// (0x00050fe4) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x00060565) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x00060565) list_medium_line_t3_g2_g

0xac32,	// (0x0005b78c) list_medium_line_t3_g2_t1_ParamLimits

0xac32,	// (0x0005b78c) list_medium_line_t3_g2_t1

0xac4c,	// (0x0005b7a6) list_medium_line_t3_g2_t2_ParamLimits

0xac4c,	// (0x0005b7a6) list_medium_line_t3_g2_t2

0xac61,	// (0x0005b7bb) list_medium_line_t3_g2_t3_ParamLimits

0xac61,	// (0x0005b7bb) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x000608b4) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x000608b4) list_medium_line_t3_g2_t

0x06b7,	// (0x00051211) list_medium_line_right_icon_g1

0x0805,	// (0x0005135f) list_medium_line_right_icon_t1

0x047e,	// (0x00050fd8) list_medium_line_t2_g1_ParamLimits

0x047e,	// (0x00050fd8) list_medium_line_t2_g1

0xac77,	// (0x0005b7d1) list_medium_line_t2_t1_ParamLimits

0xac77,	// (0x0005b7d1) list_medium_line_t2_t1

0xac8e,	// (0x0005b7e8) list_medium_line_t2_t2_ParamLimits

0xac8e,	// (0x0005b7e8) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x000608bb) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x000608bb) list_medium_line_t2_t

0x047e,	// (0x00050fd8) list_medium_line_t3_g1_ParamLimits

0x047e,	// (0x00050fd8) list_medium_line_t3_g1

0xaca0,	// (0x0005b7fa) list_medium_line_t3_t1_ParamLimits

0xaca0,	// (0x0005b7fa) list_medium_line_t3_t1

0xacb7,	// (0x0005b811) list_medium_line_t3_t2_ParamLimits

0xacb7,	// (0x0005b811) list_medium_line_t3_t2

0xaccc,	// (0x0005b826) list_medium_line_t3_t3_ParamLimits

0xaccc,	// (0x0005b826) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x000608c0) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x000608c0) list_medium_line_t3_t

0x047e,	// (0x00050fd8) list_medium_line_g3_g1_ParamLimits

0x047e,	// (0x00050fd8) list_medium_line_g3_g1

0x0813,	// (0x0005136d) list_medium_line_g3_g2_ParamLimits

0x0813,	// (0x0005136d) list_medium_line_g3_g2

0x048a,	// (0x00050fe4) list_medium_line_g3_g3_ParamLimits

0x048a,	// (0x00050fe4) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x000608c7) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x000608c7) list_medium_line_g3_g

0x081f,	// (0x00051379) list_medium_line_g3_t1_ParamLimits

0x081f,	// (0x00051379) list_medium_line_g3_t1

0x047e,	// (0x00050fd8) list_medium_line_t2_g3_g1_ParamLimits

0x047e,	// (0x00050fd8) list_medium_line_t2_g3_g1

0x0813,	// (0x0005136d) list_medium_line_t2_g3_g2_ParamLimits

0x0813,	// (0x0005136d) list_medium_line_t2_g3_g2

0x048a,	// (0x00050fe4) list_medium_line_t2_g3_g3_ParamLimits

0x048a,	// (0x00050fe4) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x000608c7) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x000608c7) list_medium_line_t2_g3_g

0xacde,	// (0x0005b838) list_medium_line_t2_g3_t1_ParamLimits

0xacde,	// (0x0005b838) list_medium_line_t2_g3_t1

0xacf8,	// (0x0005b852) list_medium_line_t2_g3_t2_ParamLimits

0xacf8,	// (0x0005b852) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x000608ce) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x000608ce) list_medium_line_t2_g3_t

0x047e,	// (0x00050fd8) list_medium_line_t3_g3_g1_ParamLimits

0x047e,	// (0x00050fd8) list_medium_line_t3_g3_g1

0x0813,	// (0x0005136d) list_medium_line_t3_g3_g2_ParamLimits

0x0813,	// (0x0005136d) list_medium_line_t3_g3_g2

0x048a,	// (0x00050fe4) list_medium_line_t3_g3_g3_ParamLimits

0x048a,	// (0x00050fe4) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x000608c7) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x000608c7) list_medium_line_t3_g3_g

0xad0d,	// (0x0005b867) list_medium_line_t3_g3_t1_ParamLimits

0xad0d,	// (0x0005b867) list_medium_line_t3_g3_t1

0xad26,	// (0x0005b880) list_medium_line_t3_g3_t2_ParamLimits

0xad26,	// (0x0005b880) list_medium_line_t3_g3_t2

0xad3c,	// (0x0005b896) list_medium_line_t3_g3_t3_ParamLimits

0xad3c,	// (0x0005b896) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x000608d3) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x000608d3) list_medium_line_t3_g3_t

0x0733,	// (0x0005128d) list_medium_line_right_iconx2_g1

0x06b7,	// (0x00051211) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x000608da) list_medium_line_right_iconx2_g

0x0834,	// (0x0005138e) list_medium_line_right_iconx2_t1

0x0733,	// (0x0005128d) list_medium_line_t2_right_iconx2_g1

0x06b7,	// (0x00051211) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x000608da) list_medium_line_t2_right_iconx2_g

0xad52,	// (0x0005b8ac) list_medium_line_t2_right_iconx2_t1

0xad62,	// (0x0005b8bc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x000608df) list_medium_line_t2_right_iconx2_t

0x0842,	// (0x0005139c) list_medium_line_x4_t4_t1

0xad70,	// (0x0005b8ca) list_medium_line_x4_t4_t2

0xad80,	// (0x0005b8da) list_medium_line_x4_t4_t3

0xad90,	// (0x0005b8ea) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x000608e4) list_medium_line_x4_t4_t

0xadc9,	// (0x0005b923) tport_appsw_pane_ParamLimits

0xadc9,	// (0x0005b923) tport_appsw_pane

0xadd5,	// (0x0005b92f) tport_contact_pane_ParamLimits

0xadd5,	// (0x0005b92f) tport_contact_pane

0xade5,	// (0x0005b93f) tport_listscroll_pane_ParamLimits

0xade5,	// (0x0005b93f) tport_listscroll_pane

0xadf5,	// (0x0005b94f) cell_tport_appsw_pane_ParamLimits

0xadf5,	// (0x0005b94f) cell_tport_appsw_pane

0x10f0,	// (0x00051c4a) tport_appsw_pane_g1_ParamLimits

0x10f0,	// (0x00051c4a) tport_appsw_pane_g1

0xc875,	// (0x0005d3cf) tport_contact_pane_g1

0xc87e,	// (0x0005d3d8) tport_contact_pane_t1

0xc88c,	// (0x0005d3e6) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x000608ed) tport_contact_pane_t

0xc89a,	// (0x0005d3f4) list_tport_pane

0xc8a3,	// (0x0005d3fd) scroll_pane_cp_030

0xc8b4,	// (0x0005d40e) cell_tport_appsw_pane_g1

0xc8c4,	// (0x0005d41e) cell_tport_appsw_pane_t1

0xbcf7,	// (0x0005c851) grid_highlight_pane_cp019

0xae20,	// (0x0005b97a) list_tport_double_graphic_pane_ParamLimits

0xae20,	// (0x0005b97a) list_tport_double_graphic_pane

0xc69f,	// (0x0005d1f9) list_highlight_pane_cp023_ParamLimits

0xc69f,	// (0x0005d1f9) list_highlight_pane_cp023

0xae33,	// (0x0005b98d) list_tport_double_graphic_pane_g1_ParamLimits

0xae33,	// (0x0005b98d) list_tport_double_graphic_pane_g1

0xae40,	// (0x0005b99a) list_tport_double_graphic_pane_t1_ParamLimits

0xae40,	// (0x0005b99a) list_tport_double_graphic_pane_t1

0xae55,	// (0x0005b9af) list_tport_double_graphic_pane_t2_ParamLimits

0xae55,	// (0x0005b9af) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x000608f9) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x000608f9) list_tport_double_graphic_pane_t

0xbcf7,	// (0x0005c851) main_cale_note_pane

0x8c8b,	// (0x000597e5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8c8b,	// (0x000597e5) cell_vitu2_function_top_wide_pane_cp01

0xa5b6,	// (0x0005b110) wait_bar_pane_cp05_ParamLimits

0xbcf7,	// (0x0005c851) listscroll_cmail_pane

0xc8da,	// (0x0005d434) list_cmail_pane

0xae71,	// (0x0005b9cb) list_cmail_body_pane

0xae95,	// (0x0005b9ef) list_single_cmail_header_caption_pane

0xaec3,	// (0x0005ba1d) list_single_cmail_header_detail_pane_ParamLimits

0xaec3,	// (0x0005ba1d) list_single_cmail_header_detail_pane

0xaefb,	// (0x0005ba55) list_single_cmail_header_caption_pane_t1

0xaf0b,	// (0x0005ba65) list_single_cmail_header_detail_pane_g1_ParamLimits

0xaf0b,	// (0x0005ba65) list_single_cmail_header_detail_pane_g1

0x0850,	// (0x000513aa) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0850,	// (0x000513aa) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x000608fe) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x000608fe) list_single_cmail_header_detail_pane_g

0x085c,	// (0x000513b6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x085c,	// (0x000513b6) list_single_cmail_header_detail_pane_t1

0x088e,	// (0x000513e8) list_single_cmail_header_editor_pane_bg_ParamLimits

0x088e,	// (0x000513e8) list_single_cmail_header_editor_pane_bg

0xc907,	// (0x0005d461) list_cmail_body_pane_g1

0xc910,	// (0x0005d46a) list_cmail_body_pane_t1

0x1881,	// (0x000523db) list_single_cmail_header_editor_pane_bg_g1

0xd4ca,	// (0x0005e024) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1891,	// (0x000523eb) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1889,	// (0x000523e3) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1ac0,	// (0x0005261a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x18b1,	// (0x0005240b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x18a1,	// (0x000523fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x18a9,	// (0x00052403) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd4aa,	// (0x0005e004) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xaf49,	// (0x0005baa3) calenote_gesture_pane_ParamLimits

0xaf49,	// (0x0005baa3) calenote_gesture_pane

0xaf63,	// (0x0005babd) calenote_window_pane_ParamLimits

0xaf63,	// (0x0005babd) calenote_window_pane

0xc91e,	// (0x0005d478) popup_note_window_cp01

0xaf7b,	// (0x0005bad5) calenote_swipe_1_pane_ParamLimits

0xaf7b,	// (0x0005bad5) calenote_swipe_1_pane

0xa9a4,	// (0x0005b4fe) calenote_swipe_2_pane_ParamLimits

0xa9a4,	// (0x0005b4fe) calenote_swipe_2_pane

0xc6e0,	// (0x0005d23a) calenote_swipe_1_pane_g1_ParamLimits

0xc6e0,	// (0x0005d23a) calenote_swipe_1_pane_g1

0xc6ed,	// (0x0005d247) calenote_swipe_1_pane_g2_ParamLimits

0xc6ed,	// (0x0005d247) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00060828) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00060828) calenote_swipe_1_pane_g

0xc930,	// (0x0005d48a) calenote_swipe_1_pane_t1_ParamLimits

0xc930,	// (0x0005d48a) calenote_swipe_1_pane_t1

0xc6e0,	// (0x0005d23a) calenote_swipe_2_pane_g1_ParamLimits

0xc6e0,	// (0x0005d23a) calenote_swipe_2_pane_g1

0xc94f,	// (0x0005d4a9) calenote_swipe_2_pane_g2_ParamLimits

0xc94f,	// (0x0005d4a9) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x0006090a) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x0006090a) calenote_swipe_2_pane_g

0xc95b,	// (0x0005d4b5) calenote_swipe_2_pane_t1_ParamLimits

0xc95b,	// (0x0005d4b5) calenote_swipe_2_pane_t1

0xbcf7,	// (0x0005c851) main_mup_navstr_pane

0x79c9,	// (0x00058523) main_mup3_pane_t7_ParamLimits

0x79c9,	// (0x00058523) main_mup3_pane_t7

0x83ef,	// (0x00058f49) main_mp4_pane_g6_ParamLimits

0x83ef,	// (0x00058f49) main_mp4_pane_g6

0x8771,	// (0x000592cb) main_image3_pane_t4_ParamLimits

0x8771,	// (0x000592cb) main_image3_pane_t4

0xaf8e,	// (0x0005bae8) popup_navstr_preview_pane_ParamLimits

0xaf8e,	// (0x0005bae8) popup_navstr_preview_pane

0xaf9a,	// (0x0005baf4) scroll_navstr_pane_ParamLimits

0xaf9a,	// (0x0005baf4) scroll_navstr_pane

0xbcf7,	// (0x0005c851) bg_popup_preview_window_pane_cp04

0xc982,	// (0x0005d4dc) popup_navstr_preview_pane_t1

0xafa6,	// (0x0005bb00) scroll_navstr_pane_g1_ParamLimits

0xafa6,	// (0x0005bb00) scroll_navstr_pane_g1

0xafb3,	// (0x0005bb0d) scroll_navstr_pane_t1_ParamLimits

0xafb3,	// (0x0005bb0d) scroll_navstr_pane_t1

0xc927,	// (0x0005d481) bg_button_pane_cp014

0xc927,	// (0x0005d481) bg_button_pane_cp030

0xa898,	// (0x0005b3f2) list_double_fisheye_pane_g4_ParamLimits

0xa898,	// (0x0005b3f2) list_double_fisheye_pane_g4

0xa8a4,	// (0x0005b3fe) list_double_fisheye_pane_g5_ParamLimits

0xa8a4,	// (0x0005b3fe) list_double_fisheye_pane_g5

0xc8e2,	// (0x0005d43c) sp_fs_scroll_pane_cp03

0xc7d3,	// (0x0005d32d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc7df,	// (0x0005d339) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x00060845) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc7eb,	// (0x0005d345) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xae67,	// (0x0005b9c1) sp_fs_scroll_pane_cp02

0xc59a,	// (0x0005d0f4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc59a,	// (0x0005d0f4) popup_sp_fs_calendar_preview_list_single_pane

0xbcf7,	// (0x0005c851) main_cam6_pano_pane

0x699f,	// (0x000574f9) main_mup3_pane_ParamLimits

0xbcf7,	// (0x0005c851) main_phacti_pane

0xa48b,	// (0x0005afe5) bg_button_pane_cp11

0xa4a3,	// (0x0005affd) main_mobtv_info_pane_g2_ParamLimits

0xa4a3,	// (0x0005affd) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x000607a5) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x000607a5) main_mobtv_info_pane_g

0xa655,	// (0x0005b1af) sc_clock_pane_t5_ParamLimits

0xa655,	// (0x0005b1af) sc_clock_pane_t5

0xa6fb,	// (0x0005b255) main_radioblah_pane_g1_ParamLimits

0x2767,	// (0x000532c1) main_radioblah_pane_t3_ParamLimits

0x2767,	// (0x000532c1) main_radioblah_pane_t3

0x277f,	// (0x000532d9) main_radioblah_pane_t4_ParamLimits

0x277f,	// (0x000532d9) main_radioblah_pane_t4

0xa719,	// (0x0005b273) main_radioblah_text_pane_ParamLimits

0xa719,	// (0x0005b273) main_radioblah_text_pane

0xa726,	// (0x0005b280) main_radioblah_info_pane_g1_ParamLimits

0xa7bb,	// (0x0005b315) main_radioblah_info_pane_t4_ParamLimits

0xa7bb,	// (0x0005b315) main_radioblah_info_pane_t4

0xc69f,	// (0x0005d1f9) main_sp_fs_calendar_pane

0xafc5,	// (0x0005bb1f) main_phacti_pane_g1

0xafcd,	// (0x0005bb27) phacti_note_pane_ParamLimits

0xafcd,	// (0x0005bb27) phacti_note_pane

0xc999,	// (0x0005d4f3) phacti_term_pane_ParamLimits

0xc999,	// (0x0005d4f3) phacti_term_pane

0xc9ae,	// (0x0005d508) phacti_note_pane_t1_ParamLimits

0xc9ae,	// (0x0005d508) phacti_note_pane_t1

0x08a0,	// (0x000513fa) phacti_term_pane_g1

0x08a8,	// (0x00051402) phacti_term_pane_t1_ParamLimits

0x08a8,	// (0x00051402) phacti_term_pane_t1

0xc9c5,	// (0x0005d51f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc9cd,	// (0x0005d527) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x00060914) popup_sp_fs_calendar_preview_list_single_pane_g

0xc9d5,	// (0x0005d52f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc9d5,	// (0x0005d52f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc9eb,	// (0x0005d545) aid_popup_sp_fs_bg_corner_pane

0x0d38,	// (0x00051892) popup_sp_fs_calendar_preview_bg_pane_g1

0xbcf7,	// (0x0005c851) popup_sp_fs_calendar_preview_bg_pane

0xc9f3,	// (0x0005d54d) popup_sp_fs_calendar_preview_list_pane

0xc69f,	// (0x0005d1f9) bg_main_sp_fs_cale_pane_ParamLimits

0xc69f,	// (0x0005d1f9) bg_main_sp_fs_cale_pane

0x08d2,	// (0x0005142c) listscroll_cale_mrui_pane_ParamLimits

0x08d2,	// (0x0005142c) listscroll_cale_mrui_pane

0x08e6,	// (0x00051440) listscroll_sp_fs_schedule_track_pane

0x08ef,	// (0x00051449) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x08ef,	// (0x00051449) main_sp_fs_ctrlbar_pane_cp01

0xc9fb,	// (0x0005d555) main_sp_fs_ribbon_pane

0xca03,	// (0x0005d55d) popup_sp_fs_cale_preview_window

0xb014,	// (0x0005bb6e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb014,	// (0x0005bb6e) list_single_sp_fs_schedule_track_pane

0x803f,	// (0x00058b99) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x803f,	// (0x00058b99) bg_sp_fs_highlight_list_pane_cp03

0xb03c,	// (0x0005bb96) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb03c,	// (0x0005bb96) list_single_sp_fs_schedule_track_pane_g1

0xb048,	// (0x0005bba2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb048,	// (0x0005bba2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x00060919) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x00060919) list_single_sp_fs_schedule_track_pane_g

0xb054,	// (0x0005bbae) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb054,	// (0x0005bbae) list_single_sp_fs_schedule_track_pane_t1

0xb06c,	// (0x0005bbc6) sp_fs_schedule_track_pane_ParamLimits

0xb06c,	// (0x0005bbc6) sp_fs_schedule_track_pane

0xca15,	// (0x0005d56f) sp_fs_schedule_track_pane_g1

0xca1d,	// (0x0005d577) sp_fs_schedule_track_pane_g2

0xca25,	// (0x0005d57f) sp_fs_schedule_track_pane_g3

0xca2d,	// (0x0005d587) sp_fs_schedule_track_pane_g4

0xca35,	// (0x0005d58f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x0006091e) sp_fs_schedule_track_pane_g

0x1881,	// (0x000523db) bg_sp_fs_schedule_viewer_highlight_g1

0xd4ca,	// (0x0005e024) bg_sp_fs_schedule_viewer_highlight_g2

0x1889,	// (0x000523e3) bg_sp_fs_schedule_viewer_highlight_g3

0x1891,	// (0x000523eb) bg_sp_fs_schedule_viewer_highlight_g4

0x1ac0,	// (0x0005261a) bg_sp_fs_schedule_viewer_highlight_g5

0x18a1,	// (0x000523fb) bg_sp_fs_schedule_viewer_highlight_g6

0x18a9,	// (0x00052403) bg_sp_fs_schedule_viewer_highlight_g7

0x18b1,	// (0x0005240b) bg_sp_fs_schedule_viewer_highlight_g8

0xd4aa,	// (0x0005e004) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x00060929) bg_sp_fs_schedule_viewer_highlight_g

0xbcf7,	// (0x0005c851) bg_main_sp_fs_ribbon_pane

0xb07c,	// (0x0005bbd6) main_sp_fs_ribbon_pane_g1

0xca3d,	// (0x0005d597) main_sp_fs_ribbon_pane_t1

0xb087,	// (0x0005bbe1) main_sp_fs_ribbon_pane_t2

0xca4c,	// (0x0005d5a6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x0006093c) main_sp_fs_ribbon_pane_t

0xca5b,	// (0x0005d5b5) main_sp_fs_ribbon_scheduler_pane

0xca63,	// (0x0005d5bd) bg_main_sp_fs_ribbon_pane_g1

0xca6c,	// (0x0005d5c6) bg_main_sp_fs_ribbon_pane_g2

0xca75,	// (0x0005d5cf) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x00060943) bg_main_sp_fs_ribbon_pane_g

0xca7d,	// (0x0005d5d7) main_sp_fs_ribbon_scheduler_pane_g1

0xca86,	// (0x0005d5e0) main_sp_fs_ribbon_scheduler_pane_g2

0xca8f,	// (0x0005d5e9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x0006094a) main_sp_fs_ribbon_scheduler_pane_g

0xca98,	// (0x0005d5f2) list_cale_mrui_pane

0xb098,	// (0x0005bbf2) sp_fs_scroll_pane_cp07_ParamLimits

0xb098,	// (0x0005bbf2) sp_fs_scroll_pane_cp07

0xb0ae,	// (0x0005bc08) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb0ae,	// (0x0005bc08) bg_sp_fs_schedule_viewer_highlight

0xcaa1,	// (0x0005d5fb) list_single_sp_fs_schedule_track_pane_cp01

0xcaa9,	// (0x0005d603) list_sp_fs_schedule_track_pane

0xcab1,	// (0x0005d60b) sp_fs_scroll_pane_cp06_ParamLimits

0xcab1,	// (0x0005d60b) sp_fs_scroll_pane_cp06

0x0d38,	// (0x00051892) bgmain_sp_fs_calendar_pane_g1

0xb0bb,	// (0x0005bc15) list_single_cale_mrui_pane_ParamLimits

0xb0bb,	// (0x0005bc15) list_single_cale_mrui_pane

0x0900,	// (0x0005145a) list_single_cale_mrui_row_pane_ParamLimits

0x0900,	// (0x0005145a) list_single_cale_mrui_row_pane

0x090d,	// (0x00051467) list_single_cale_mrui_row_pane_g1_ParamLimits

0x090d,	// (0x00051467) list_single_cale_mrui_row_pane_g1

0x0945,	// (0x0005149f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0945,	// (0x0005149f) list_single_cale_mrui_row_pane_t1

0xb0f0,	// (0x0005bc4a) list_single_cale_mrui_row_pane_t2_ParamLimits

0xb0f0,	// (0x0005bc4a) list_single_cale_mrui_row_pane_t2

0x0957,	// (0x000514b1) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0957,	// (0x000514b1) list_single_cale_mrui_row_pane_t3

0x0986,	// (0x000514e0) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0986,	// (0x000514e0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x00060958) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x00060958) list_single_cale_mrui_row_pane_t

0xb156,	// (0x0005bcb0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xb156,	// (0x0005bcb0) list_single_cmail_header_editor_pane_bg_cp01

0xb178,	// (0x0005bcd2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb178,	// (0x0005bcd2) list_single_cmail_header_editor_pane_bg_cp02

0xb194,	// (0x0005bcee) main_radioblah_text_pane_t1_ParamLimits

0xb194,	// (0x0005bcee) main_radioblah_text_pane_t1

0xcad0,	// (0x0005d62a) cam6_indi_pane_cp01

0xcad8,	// (0x0005d632) cam6_mode_pane_cp01

0xcae0,	// (0x0005d63a) cam6_pano_pane

0xcae9,	// (0x0005d643) cam6_zoom_pane_cp01

0xcaf1,	// (0x0005d64b) cam6_pano_image_pane

0xcafc,	// (0x0005d656) cam6_pano_pane_g1

0x24b4,	// (0x0005300e) cam6_pano_pane_g2

0xcb05,	// (0x0005d65f) cam6_pano_pane_g3

0xcb0e,	// (0x0005d668) cam6_pano_pane_g4

0x13c7,	// (0x00051f21) cam6_pano_pane_g5

0xcb17,	// (0x0005d671) cam6_pano_pane_g6

0xcb21,	// (0x0005d67b) cam6_pano_pane_g7

0xcb29,	// (0x0005d683) cam6_pano_pane_g8

0xcb32,	// (0x0005d68c) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x00060961) cam6_pano_pane_g

0xbcf7,	// (0x0005c851) main_browser_tag_pane

0xc97a,	// (0x0005d4d4) grid_navstr_albumart_pane

0xcb3d,	// (0x0005d697) cell_navstr_albumart_pane_ParamLimits

0xcb3d,	// (0x0005d697) cell_navstr_albumart_pane

0xdd4e,	// (0x0005e8a8) cell_navstr_albumart_pane_g1

0xee3f,	// (0x0005f999) cell_navstr_albumart_pane_g2

0xee4f,	// (0x0005f9a9) cell_navstr_albumart_pane_g3

0xee47,	// (0x0005f9a1) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x00060974) cell_navstr_albumart_pane_g

0xb1b1,	// (0x0005bd0b) bt_list_pane_ParamLimits

0xb1b1,	// (0x0005bd0b) bt_list_pane

0xb1d8,	// (0x0005bd32) bt_list_pane_t1

0xb1e7,	// (0x0005bd41) bt_list_pane_t2

0x0001,

0xfe23,	// (0x0006097d) bt_list_pane_t

0xbcf7,	// (0x0005c851) main_cale_prevew_pane

0xb1f6,	// (0x0005bd50) popup_cale_preview_window_ParamLimits

0xb1f6,	// (0x0005bd50) popup_cale_preview_window

0xc69f,	// (0x0005d1f9) bg_popup_preview_window_pane_cp05_ParamLimits

0xc69f,	// (0x0005d1f9) bg_popup_preview_window_pane_cp05

0xcb5f,	// (0x0005d6b9) list_cale_preview_pane_ParamLimits

0xcb5f,	// (0x0005d6b9) list_cale_preview_pane

0xb20d,	// (0x0005bd67) list_double_cale_preview_pane_ParamLimits

0xb20d,	// (0x0005bd67) list_double_cale_preview_pane

0xb21f,	// (0x0005bd79) list_single_cale_preview_pane_ParamLimits

0xb21f,	// (0x0005bd79) list_single_cale_preview_pane

0xb233,	// (0x0005bd8d) list_single_cale_preview_pane_g1

0xb23b,	// (0x0005bd95) list_single_cale_preview_pane_t1_ParamLimits

0xb23b,	// (0x0005bd95) list_single_cale_preview_pane_t1

0xb250,	// (0x0005bdaa) list_double_cale_preview_pane_g1

0xb258,	// (0x0005bdb2) list_double_cale_preview_pane_t1_ParamLimits

0xb258,	// (0x0005bdb2) list_double_cale_preview_pane_t1

0xb26d,	// (0x0005bdc7) list_double_cale_preview_pane_t2_ParamLimits

0xb26d,	// (0x0005bdc7) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x00060982) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x00060982) list_double_cale_preview_pane_t

0xbcf7,	// (0x0005c851) main_ezdial_pane

0xc69f,	// (0x0005d1f9) main_sp_fs_email_pane_ParamLimits

0xa9da,	// (0x0005b534) cmail_ddmenu_btn01_pane_ParamLimits

0xa9da,	// (0x0005b534) cmail_ddmenu_btn01_pane

0xa9f7,	// (0x0005b551) cmail_ddmenu_btn02_pane_ParamLimits

0xa9f7,	// (0x0005b551) cmail_ddmenu_btn02_pane

0xaa15,	// (0x0005b56f) cmail_ddmenu_btn03_pane_ParamLimits

0xaa15,	// (0x0005b56f) cmail_ddmenu_btn03_pane

0xaa43,	// (0x0005b59d) main_sp_fs_ctrlbar_pane_ParamLimits

0xaa5d,	// (0x0005b5b7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xae71,	// (0x0005b9cb) list_cmail_body_pane_ParamLimits

0xc8f1,	// (0x0005d44b) bg_button_pane_cp12

0xc8fa,	// (0x0005d454) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc8fa,	// (0x0005d454) list_single_cmail_header_detail_pane_g3

0xaf23,	// (0x0005ba7d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xaf23,	// (0x0005ba7d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x00060905) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x00060905) list_single_cmail_header_detail_pane_t

0x08bd,	// (0x00051417) phacti_term_pane_t2_ParamLimits

0x08bd,	// (0x00051417) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x0006090f) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x0006090f) phacti_term_pane_t

0xcb6b,	// (0x0005d6c5) aid_size_list_single_double

0xb285,	// (0x0005bddf) popup_ezdial_listscroll_window

0xb2a8,	// (0x0005be02) popup_number_entry_window_cp01

0xdbdf,	// (0x0005e739) bg_popup_call_pane_cp09

0xcb77,	// (0x0005d6d1) ezdial_list_pane

0xcb7f,	// (0x0005d6d9) scroll_pane_cp23

0x0b1b,	// (0x00051675) bg_button_pane_cp028_ParamLimits

0x0b1b,	// (0x00051675) bg_button_pane_cp028

0xb2b6,	// (0x0005be10) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb2b6,	// (0x0005be10) cmail_ddmenu_btn01_pane_g1

0xb2c8,	// (0x0005be22) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb2c8,	// (0x0005be22) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x00060987) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x00060987) cmail_ddmenu_btn01_pane_g

0xcb87,	// (0x0005d6e1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcb87,	// (0x0005d6e1) cmail_ddmenu_btn01_pane_t1

0xf02a,	// (0x0005fb84) bg_button_pane_cp029_ParamLimits

0xf02a,	// (0x0005fb84) bg_button_pane_cp029

0xb2c8,	// (0x0005be22) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb2c8,	// (0x0005be22) cmail_ddmenu_btn02_pane_g1

0xb2e0,	// (0x0005be3a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb2e0,	// (0x0005be3a) cmail_ddmenu_btn02_pane_t1

0x803f,	// (0x00058b99) bg_button_pane_cp031_ParamLimits

0x803f,	// (0x00058b99) bg_button_pane_cp031

0xb2c8,	// (0x0005be22) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb2c8,	// (0x0005be22) cmail_ddmenu_btn03_pane_g1

0xb2e0,	// (0x0005be3a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb2e0,	// (0x0005be3a) cmail_ddmenu_btn03_pane_t1

0x860e,	// (0x00059168) cell_dialer2_keypad_pane_t1_ParamLimits

0x8628,	// (0x00059182) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8628,	// (0x00059182) cell_dialer2_keypad_pane_t1_copy1

0xa310,	// (0x0005ae6a) ncimui_group_button_pane

0xc69f,	// (0x0005d1f9) main_sp_fs_calendar_pane_ParamLimits

0xae95,	// (0x0005b9ef) list_single_cmail_header_caption_pane_ParamLimits

0xc6b6,	// (0x0005d210) aid_recal_txt_sm_pane

0xbcf7,	// (0x0005c851) mian_recal_day_pane

0xca03,	// (0x0005d55d) popup_sp_fs_cale_preview_window_ParamLimits

0xbcf7,	// (0x0005c851) list_recal_day_pane

0xcbb6,	// (0x0005d710) list_single_recal_day_pane_ParamLimits

0xcbb6,	// (0x0005d710) list_single_recal_day_pane

0xcbc8,	// (0x0005d722) list_single_recal_day_pane_g1_ParamLimits

0xcbc8,	// (0x0005d722) list_single_recal_day_pane_g1

0xcbd4,	// (0x0005d72e) list_single_recal_day_pane_g2_ParamLimits

0xcbd4,	// (0x0005d72e) list_single_recal_day_pane_g2

0xcbe4,	// (0x0005d73e) list_single_recal_day_pane_g3_ParamLimits

0xcbe4,	// (0x0005d73e) list_single_recal_day_pane_g3

0xb304,	// (0x0005be5e) list_single_recal_day_pane_g4_ParamLimits

0xb304,	// (0x0005be5e) list_single_recal_day_pane_g4

0xcbf0,	// (0x0005d74a) list_single_recal_day_pane_g5_ParamLimits

0xcbf0,	// (0x0005d74a) list_single_recal_day_pane_g5

0xcc00,	// (0x0005d75a) list_single_recal_day_pane_g6_ParamLimits

0xcc00,	// (0x0005d75a) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x00060996) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x00060996) list_single_recal_day_pane_g

0xcc17,	// (0x0005d771) list_single_recal_day_pane_t1

0xcc29,	// (0x0005d783) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x000609a1) list_single_recal_day_pane_t

0xb324,	// (0x0005be7e) ncimui_query_button_pane_ParamLimits

0xb324,	// (0x0005be7e) ncimui_query_button_pane

0xb334,	// (0x0005be8e) ncimui_query_button_pane_t1_ParamLimits

0xb334,	// (0x0005be8e) ncimui_query_button_pane_t1

0xcc3e,	// (0x0005d798) ncimui_query_button_pane_t2_ParamLimits

0xcc3e,	// (0x0005d798) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x000609a6) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x000609a6) ncimui_query_button_pane_t

0xb347,	// (0x0005bea1) query_button_pane_ParamLimits

0xb347,	// (0x0005bea1) query_button_pane

0xbcf7,	// (0x0005c851) bg_button_pane_cp0028

0xcc51,	// (0x0005d7ab) query_button_pane_t1

0x69bb,	// (0x00057515) main_tport_pane_ParamLimits

0xada0,	// (0x0005b8fa) bg_popup_window_pane_cp01_ParamLimits

0xada0,	// (0x0005b8fa) bg_popup_window_pane_cp01

0xadad,	// (0x0005b907) heading_pane_cp08_ParamLimits

0xadad,	// (0x0005b907) heading_pane_cp08

0xadbb,	// (0x0005b915) heading_pane_cp07_ParamLimits

0xadbb,	// (0x0005b915) heading_pane_cp07

0xc8b4,	// (0x0005d40e) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x000608f2) cell_tport_appsw_pane_g

0x60cf,	// (0x00056c29) input_candi_list_open_g1

0xd68f,	// (0x0005e1e9) list_cale_time_pane_g6_ParamLimits

0xd68f,	// (0x0005e1e9) list_cale_time_pane_g6

0x743a,	// (0x00057f94) aid_size_touch_calib_1_ParamLimits

0x743a,	// (0x00057f94) aid_size_touch_calib_1

0x7446,	// (0x00057fa0) aid_size_touch_calib_2_ParamLimits

0x7446,	// (0x00057fa0) aid_size_touch_calib_2

0x7454,	// (0x00057fae) aid_size_touch_calib_3_ParamLimits

0x7454,	// (0x00057fae) aid_size_touch_calib_3

0x7464,	// (0x00057fbe) aid_size_touch_calib_4_ParamLimits

0x7464,	// (0x00057fbe) aid_size_touch_calib_4

0x7472,	// (0x00057fcc) main_touch_calib_button_group_pane_ParamLimits

0x7472,	// (0x00057fcc) main_touch_calib_button_group_pane

0x7480,	// (0x00057fda) main_touch_calib_pane_g1_ParamLimits

0x748c,	// (0x00057fe6) main_touch_calib_pane_g2_ParamLimits

0x7498,	// (0x00057ff2) main_touch_calib_pane_g3_ParamLimits

0x74a4,	// (0x00057ffe) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x000602bb) main_touch_calib_pane_g_ParamLimits

0x74b0,	// (0x0005800a) main_touch_calib_pane_t1_ParamLimits

0x74c7,	// (0x00058021) main_touch_calib_pane_t2_ParamLimits

0x74de,	// (0x00058038) main_touch_calib_pane_t3_ParamLimits

0x74f2,	// (0x0005804c) main_touch_calib_pane_t4_ParamLimits

0x7506,	// (0x00058060) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x000602c4) main_touch_calib_pane_t_ParamLimits

0x1197,	// (0x00051cf1) list_single_fp_cale_pane_g3_ParamLimits

0x1197,	// (0x00051cf1) list_single_fp_cale_pane_g3

0x699f,	// (0x000574f9) bg_button_pane_cp012_ParamLimits

0x699f,	// (0x000574f9) bg_vkb2_func_pane_cp03_ParamLimits

0x9427,	// (0x00059f81) cell_vitu2_function_top_pane_g1_ParamLimits

0x699f,	// (0x000574f9) bg_vkb2_func_pane_cp04_ParamLimits

0xa298,	// (0x0005adf2) main_ncimui_button_group_pane_ParamLimits

0xa298,	// (0x0005adf2) main_ncimui_button_group_pane

0xa2fe,	// (0x0005ae58) main_ncimui_pane_t3_ParamLimits

0xa2fe,	// (0x0005ae58) main_ncimui_pane_t3

0xc990,	// (0x0005d4ea) phacti_button_group_pane

0xcb6b,	// (0x0005d6c5) aid_size_list_single_double_ParamLimits

0xb285,	// (0x0005bddf) popup_ezdial_listscroll_window_ParamLimits

0xb2a8,	// (0x0005be02) popup_number_entry_window_cp01_ParamLimits

0xb354,	// (0x0005beae) phacti_button_pane_ParamLimits

0xb354,	// (0x0005beae) phacti_button_pane

0xbcf7,	// (0x0005c851) bg_button_pane_cp14

0xcc5f,	// (0x0005d7b9) phacti_button_pane_t1

0xb365,	// (0x0005bebf) main_touch_calib_button_pane_ParamLimits

0xb365,	// (0x0005bebf) main_touch_calib_button_pane

0xc484,	// (0x0005cfde) bg_button_pane_cp18_ParamLimits

0xc484,	// (0x0005cfde) bg_button_pane_cp18

0xcc6d,	// (0x0005d7c7) main_touch_calib_button_pane_t1_ParamLimits

0xcc6d,	// (0x0005d7c7) main_touch_calib_button_pane_t1

0xcc83,	// (0x0005d7dd) main_touch_calib_button_pane_t2_ParamLimits

0xcc83,	// (0x0005d7dd) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x000609ab) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x000609ab) main_touch_calib_button_pane_t

0xbcf7,	// (0x0005c851) cell_ncimui_button_pane

0xbcf7,	// (0x0005c851) bg_button_pane_cp032

0xcca1,	// (0x0005d7fb) cell_ncimui_button_pane_t1

0x8684,	// (0x000591de) image3_infobar_pane_ParamLimits

0x8684,	// (0x000591de) image3_infobar_pane

0xa677,	// (0x0005b1d1) fs_bigclock_status_pane_ParamLimits

0xa677,	// (0x0005b1d1) fs_bigclock_status_pane

0xa684,	// (0x0005b1de) main_fs_bigclock_clock_pane_ParamLimits

0xa684,	// (0x0005b1de) main_fs_bigclock_clock_pane

0xa69a,	// (0x0005b1f4) main_fs_bigclock_indi_pane_ParamLimits

0xa69a,	// (0x0005b1f4) main_fs_bigclock_indi_pane

0xa6c9,	// (0x0005b223) main_fs_bigclock_swipe_pane_ParamLimits

0xa6c9,	// (0x0005b223) main_fs_bigclock_swipe_pane

0xbcf7,	// (0x0005c851) main_fs_clock_dumped_data

0x25c1,	// (0x0005311b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x25c1,	// (0x0005311b) list_single_fs_bigclock_indicator_pane_g1

0x25ea,	// (0x00053144) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x25ea,	// (0x00053144) list_single_fs_bigclock_indicator_pane_g2

0x2604,	// (0x0005315e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2604,	// (0x0005315e) list_single_fs_bigclock_indicator_pane_g3

0x261e,	// (0x00053178) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x261e,	// (0x00053178) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x000607d9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x000607d9) list_single_fs_bigclock_indicator_pane_g

0x2647,	// (0x000531a1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2647,	// (0x000531a1) list_single_fs_bigclock_indicator_pane_t1

0x266f,	// (0x000531c9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x266f,	// (0x000531c9) list_single_fs_bigclock_indicator_pane_t2

0x2697,	// (0x000531f1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2697,	// (0x000531f1) list_single_fs_bigclock_indicator_pane_t3

0x26bf,	// (0x00053219) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x26bf,	// (0x00053219) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x000607e4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x000607e4) list_single_fs_bigclock_indicator_pane_t

0xccaf,	// (0x0005d809) image3_infobar_fav_pane_ParamLimits

0xccaf,	// (0x0005d809) image3_infobar_fav_pane

0xccbf,	// (0x0005d819) image3_infobar_loc_pane_ParamLimits

0xccbf,	// (0x0005d819) image3_infobar_loc_pane

0xccd3,	// (0x0005d82d) image3_infobar_time_pane_ParamLimits

0xccd3,	// (0x0005d82d) image3_infobar_time_pane

0x0d38,	// (0x00051892) image3_infobar_time_pane_g1

0xcce3,	// (0x0005d83d) image3_infobar_time_pane_t1

0x0d38,	// (0x00051892) image3_infobar_loc_pane_g1

0xccf1,	// (0x0005d84b) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x000609b0) image3_infobar_loc_pane_g

0xccf9,	// (0x0005d853) image3_infobar_loc_pane_t1

0x0d38,	// (0x00051892) image3_infobar_fav_pane_g1

0xcd07,	// (0x0005d861) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x000609b5) image3_infobar_fav_pane_g

0xcd0f,	// (0x0005d869) fs_bigclock_status_battery_pane

0xcd18,	// (0x0005d872) fs_bigclock_status_signal_pane

0xcd21,	// (0x0005d87b) fs_bigclock_status_title_pane

0xcd2a,	// (0x0005d884) fs_bigclock_status_signal_pane_g1

0xcd33,	// (0x0005d88d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x000609ba) fs_bigclock_status_signal_pane_g

0xcd3b,	// (0x0005d895) fs_bigclock_status_battery_pane_g1

0xcd44,	// (0x0005d89e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x000609bf) fs_bigclock_status_battery_pane_g

0xcd4c,	// (0x0005d8a6) fs_bigclock_status_title_pane_t1

0x0d38,	// (0x00051892) main_fs_bigclock_clock_pane_g1

0xcd5a,	// (0x0005d8b4) main_fs_bigclock_clock_pane_g2

0xcd5a,	// (0x0005d8b4) main_fs_bigclock_clock_pane_g3

0xcd5a,	// (0x0005d8b4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x000609c4) main_fs_bigclock_clock_pane_g

0xcd62,	// (0x0005d8bc) main_fs_bigclock_clock_pane_t1

0xcd70,	// (0x0005d8ca) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x000609cd) main_fs_bigclock_clock_pane_t

0xcd7f,	// (0x0005d8d9) list_single_fs_bigclock_indicator_pane_ParamLimits

0xcd7f,	// (0x0005d8d9) list_single_fs_bigclock_indicator_pane

0xb375,	// (0x0005becf) list_single_fs_bigclock_pane_ParamLimits

0xb375,	// (0x0005becf) list_single_fs_bigclock_pane

0xcd99,	// (0x0005d8f3) main_fs_bigclock_indicator_pane_t1

0xcda8,	// (0x0005d902) list_single_fs_bigclock_pane_g1

0xcdb0,	// (0x0005d90a) list_single_fs_bigclock_pane_t1

0x0d38,	// (0x00051892) main_fs_bigclock_swipe_pane_g1

0xcdf3,	// (0x0005d94d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x000609de) main_fs_bigclock_swipe_pane_g

0xcdfb,	// (0x0005d955) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xcdfb,	// (0x0005d955) main_fs_bigclock_swipe_pane_t1

0x5888,	// (0x000563e2) call_type_pane_ParamLimits

0xbcf7,	// (0x0005c851) main_btmg_pane

0x0939,	// (0x00051493) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0939,	// (0x00051493) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x00060951) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x00060951) list_single_cale_mrui_row_pane_g

0xcba6,	// (0x0005d700) list_recal_vselct_arw_lo_pane

0xcbae,	// (0x0005d708) list_recal_vselct_arw_up_pane

0xc6ad,	// (0x0005d207) list_recal_vselct_pane

0xb3d8,	// (0x0005bf32) btmg_button_pane

0xb3e4,	// (0x0005bf3e) main_btmg_pane_g1

0xbcf7,	// (0x0005c851) bg_button_pane_cp044

0xce18,	// (0x0005d972) btmg_button_pane_t1

0xf022,	// (0x0005fb7c) aid_listscroll_gen

0xc69f,	// (0x0005d1f9) main_cntbar_detail_pane

0xc8d2,	// (0x0005d42c) list_cmail_folder_pane

0xc8e2,	// (0x0005d43c) sp_fs_scroll_pane_cp03_ParamLimits

0xb3ec,	// (0x0005bf46) list_single_fs_dyc_pane_cp01_ParamLimits

0xb3ec,	// (0x0005bf46) list_single_fs_dyc_pane_cp01

0xce26,	// (0x0005d980) aid_size_cmail_indent

0x09b5,	// (0x0005150f) list_single_dyc_row_pane_cp01

0xb43d,	// (0x0005bf97) cntbar_detail_list_pane_ParamLimits

0xb43d,	// (0x0005bf97) cntbar_detail_list_pane

0xb477,	// (0x0005bfd1) main_cntbar_detail_cont_pane_ParamLimits

0xb477,	// (0x0005bfd1) main_cntbar_detail_cont_pane

0x5822,	// (0x0005637c) scroll_pane_cp032_ParamLimits

0x5822,	// (0x0005637c) scroll_pane_cp032

0xb483,	// (0x0005bfdd) cntbar_detail_list_event_pane_ParamLimits

0xb483,	// (0x0005bfdd) cntbar_detail_list_event_pane

0xb449,	// (0x0005bfa3) cntbar_detail_list_shct_pane

0xd518,	// (0x0005e072) aid_list_gen

0xce2f,	// (0x0005d989) aid_scroll

0xce38,	// (0x0005d992) aid_size_touch_scroll_bar

0xb497,	// (0x0005bff1) aid_list_double

0xce41,	// (0x0005d99b) aid_list_single

0xb4a0,	// (0x0005bffa) aid_list_single_lg

0x09be,	// (0x00051518) aid_list_z_g_a_sm

0x09c6,	// (0x00051520) aid_list_z_g_d

0x09ce,	// (0x00051528) aid_txt_z_prm

0xb4a9,	// (0x0005c003) aid_txt_z_prm_cp01

0xb4b7,	// (0x0005c011) aid_txt_z_sec

0xb4c5,	// (0x0005c01f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb4c5,	// (0x0005c01f) main_cntbar_detail_cont_pane_g1

0xb4d2,	// (0x0005c02c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb4d2,	// (0x0005c02c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x000609e3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x000609e3) main_cntbar_detail_cont_pane_g

0xce4a,	// (0x0005d9a4) main_cntbar_detail_cont_pane_t1

0xce58,	// (0x0005d9b2) main_cntbar_detail_cont_pane_t2

0xce66,	// (0x0005d9c0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x000609e8) main_cntbar_detail_cont_pane_t

0xb4de,	// (0x0005c038) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb4de,	// (0x0005c038) cell_cntbar_detail_list_shct_pane

0xce74,	// (0x0005d9ce) cntbar_detail_list_shct_pane_g1

0xce7d,	// (0x0005d9d7) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x000609ef) cntbar_detail_list_shct_pane_g

0xb4f2,	// (0x0005c04c) cntbar_detail_list_event_pane_g1_ParamLimits

0xb4f2,	// (0x0005c04c) cntbar_detail_list_event_pane_g1

0xb4fe,	// (0x0005c058) cntbar_detail_list_event_pane_g2_ParamLimits

0xb4fe,	// (0x0005c058) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x000609f4) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x000609f4) cntbar_detail_list_event_pane_g

0xb56a,	// (0x0005c0c4) cntbar_detail_list_event_pane_t1_ParamLimits

0xb56a,	// (0x0005c0c4) cntbar_detail_list_event_pane_t1

0xb57f,	// (0x0005c0d9) cntbar_detail_list_event_pane_t2_ParamLimits

0xb57f,	// (0x0005c0d9) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x00060a01) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x00060a01) cntbar_detail_list_event_pane_t

0x0d38,	// (0x00051892) cell_cntbar_detail_list_shct_pane_g1

0x5c21,	// (0x0005677b) navi_pane_mv_g3

0xc69f,	// (0x0005d1f9) main_cntbar_detail_pane_ParamLimits

0xbcf7,	// (0x0005c851) main_notif_wgt_pane

0x8336,	// (0x00058e90) aid_tch_main_mp4_pane_g4

0x856b,	// (0x000590c5) popup_slider_window_cp02

0xcb9c,	// (0x0005d6f6) list_recal_day_event_pane

0xb41d,	// (0x0005bf77) cntbar_detail_btn_pane_ParamLimits

0xb41d,	// (0x0005bf77) cntbar_detail_btn_pane

0xb42d,	// (0x0005bf87) cntbar_detail_btn_pane_cp01_ParamLimits

0xb42d,	// (0x0005bf87) cntbar_detail_btn_pane_cp01

0xb449,	// (0x0005bfa3) cntbar_detail_list_shct_pane_ParamLimits

0xb455,	// (0x0005bfaf) cntbar_detail_pane_g1_ParamLimits

0xb455,	// (0x0005bfaf) cntbar_detail_pane_g1

0xb461,	// (0x0005bfbb) cntbar_detail_pane_t1_ParamLimits

0xb461,	// (0x0005bfbb) cntbar_detail_pane_t1

0xb50a,	// (0x0005c064) cntbar_detail_list_event_pane_g3_ParamLimits

0xb50a,	// (0x0005c064) cntbar_detail_list_event_pane_g3

0xb522,	// (0x0005c07c) cntbar_detail_list_event_pane_g4_ParamLimits

0xb522,	// (0x0005c07c) cntbar_detail_list_event_pane_g4

0xb53a,	// (0x0005c094) cntbar_detail_list_event_pane_g5_ParamLimits

0xb53a,	// (0x0005c094) cntbar_detail_list_event_pane_g5

0xb552,	// (0x0005c0ac) cntbar_detail_list_event_pane_g6_ParamLimits

0xb552,	// (0x0005c0ac) cntbar_detail_list_event_pane_g6

0xb594,	// (0x0005c0ee) cntbar_detail_list_event_pane_t3_ParamLimits

0xb594,	// (0x0005c0ee) cntbar_detail_list_event_pane_t3

0xb5a6,	// (0x0005c100) popup_notif_wgt_window_ParamLimits

0xb5a6,	// (0x0005c100) popup_notif_wgt_window

0xb5b6,	// (0x0005c110) popup_submenu_window_cp01_ParamLimits

0xb5b6,	// (0x0005c110) popup_submenu_window_cp01

0xdbdf,	// (0x0005e739) bg_popup_window_pane_cp10

0xce86,	// (0x0005d9e0) listscroll_notif_wgt_pane

0xce97,	// (0x0005d9f1) list_notif_wgt_window

0xcea0,	// (0x0005d9fa) scroll_pane_cp033

0xb5c4,	// (0x0005c11e) list_notif_wgt_row_pane_ParamLimits

0xb5c4,	// (0x0005c11e) list_notif_wgt_row_pane

0xcea9,	// (0x0005da03) aid_size_list_notif_wgt_del

0xceb6,	// (0x0005da10) list_notif_wgt_row_pane_g1

0xcec2,	// (0x0005da1c) list_notif_wgt_row_pane_g2

0xcece,	// (0x0005da28) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x00060a08) list_notif_wgt_row_pane_g

0xcedb,	// (0x0005da35) list_notif_wgt_row_pane_t1

0xcef0,	// (0x0005da4a) list_notif_wgt_row_pane_t2

0xcf02,	// (0x0005da5c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x00060a0f) list_notif_wgt_row_pane_t

0x1ac8,	// (0x00052622) list_recal_day_event_pane_g1

0xcf14,	// (0x0005da6e) list_recal_day_event_pane_t1

0xbcf7,	// (0x0005c851) bg_button_pane_cp045

0xcf23,	// (0x0005da7d) cntbar_detail_btn_pane_t1

0xf02a,	// (0x0005fb84) main_callh_pane_ParamLimits

0xf02a,	// (0x0005fb84) main_callh_pane

0xbcf7,	// (0x0005c851) main_coverflow0_pane

0xbcf7,	// (0x0005c851) main_wgtman_pane

0xa6e1,	// (0x0005b23b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa6e1,	// (0x0005b23b) main_fs_bigclock_unlock_btn_pane

0xc8ac,	// (0x0005d406) bg_button_pane_cp16

0xc8bc,	// (0x0005d416) cell_tport_appsw_pane_g3

0xb5d8,	// (0x0005c132) cf0_flow_pane_ParamLimits

0xb5d8,	// (0x0005c132) cf0_flow_pane

0xcf31,	// (0x0005da8b) listscroll_cf0_pane

0xcf3c,	// (0x0005da96) main_cf0_pane_g1

0xb5e7,	// (0x0005c141) main_cf0_pane_t1_ParamLimits

0xb5e7,	// (0x0005c141) main_cf0_pane_t1

0xb5fb,	// (0x0005c155) main_cf0_pane_t2_ParamLimits

0xb5fb,	// (0x0005c155) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00060a16) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00060a16) main_cf0_pane_t

0xcf46,	// (0x0005daa0) scroll_pane_cp11

0xb60f,	// (0x0005c169) cf0_flow_pane_g1

0xb617,	// (0x0005c171) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00060a1b) cf0_flow_pane_g

0xb61f,	// (0x0005c179) cf0_flow_pane_t1

0xbcf7,	// (0x0005c851) main_call6_pane

0xbcf7,	// (0x0005c851) main_calllock_pane

0xb62d,	// (0x0005c187) call6_btn_grp_pane_ParamLimits

0xb62d,	// (0x0005c187) call6_btn_grp_pane

0xb63c,	// (0x0005c196) call6_pane_g1_ParamLimits

0xb63c,	// (0x0005c196) call6_pane_g1

0xb64b,	// (0x0005c1a5) popup_call6_1st_window_ParamLimits

0xb64b,	// (0x0005c1a5) popup_call6_1st_window

0xb659,	// (0x0005c1b3) popup_call6_2nd_window_ParamLimits

0xb659,	// (0x0005c1b3) popup_call6_2nd_window

0xb667,	// (0x0005c1c1) cell_call6_btn_pane_ParamLimits

0xb667,	// (0x0005c1c1) cell_call6_btn_pane

0xdbdf,	// (0x0005e739) bg_popup_call2_in_pane_cp03

0xcf51,	// (0x0005daab) popup_call6_1st_window_g1

0xcf59,	// (0x0005dab3) popup_call6_1st_window_g2

0xcf61,	// (0x0005dabb) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00060a20) popup_call6_1st_window_g

0xcf69,	// (0x0005dac3) popup_call6_1st_window_t1

0xcf78,	// (0x0005dad2) popup_call6_1st_window_t2

0xcf88,	// (0x0005dae2) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00060a27) popup_call6_1st_window_t

0xdbdf,	// (0x0005e739) bg_popup_call2_in_pane_cp04

0xcf51,	// (0x0005daab) popup_call6_2nd_window_g1

0xcf59,	// (0x0005dab3) popup_call6_2nd_window_g2

0xcf61,	// (0x0005dabb) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00060a20) popup_call6_2nd_window_g

0xcf69,	// (0x0005dac3) popup_call6_2nd_window_t1

0xbcf7,	// (0x0005c851) bg_button_pane_cp15

0xcf98,	// (0x0005daf2) cell_call6_btn_pane_g1

0xcfa1,	// (0x0005dafb) cell_call6_btn_pane_t1

0xb676,	// (0x0005c1d0) listscroll_wgtman_pane_ParamLimits

0xb676,	// (0x0005c1d0) listscroll_wgtman_pane

0xb694,	// (0x0005c1ee) wgtman_btn_pane_ParamLimits

0xb694,	// (0x0005c1ee) wgtman_btn_pane

0xda92,	// (0x0005e5ec) aid_scroll_copy1

0xcfb0,	// (0x0005db0a) list_wgtman_pane

0xb6c9,	// (0x0005c223) wgtman_btn_pane_g1_ParamLimits

0xb6c9,	// (0x0005c223) wgtman_btn_pane_g1

0xb6f1,	// (0x0005c24b) wgtman_btn_pane_t1_ParamLimits

0xb6f1,	// (0x0005c24b) wgtman_btn_pane_t1

0xcfba,	// (0x0005db14) wgtman_btn_pane_t2_ParamLimits

0xcfba,	// (0x0005db14) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00060a2e) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00060a2e) wgtman_btn_pane_t

0xb728,	// (0x0005c282) listrow_wgtman_pane_ParamLimits

0xb728,	// (0x0005c282) listrow_wgtman_pane

0xb744,	// (0x0005c29e) listrow_wgtman_pane_g1

0xb751,	// (0x0005c2ab) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00060a33) listrow_wgtman_pane_g

0xb76f,	// (0x0005c2c9) listrow_wgtman_pane_t1

0xb787,	// (0x0005c2e1) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00060a38) listrow_wgtman_pane_t

0xb7ad,	// (0x0005c307) wait_bar_pane_cp09

0xcfd1,	// (0x0005db2b) main_calllock_btn_pane

0xcfdb,	// (0x0005db35) main_calllock_pane_g1

0xbcf7,	// (0x0005c851) bg_button_pane_cp17

0xcfe6,	// (0x0005db40) main_calllock_btn_pane_g1

0xcfef,	// (0x0005db49) main_calllock_btn_pane_t1

0xbcf7,	// (0x0005c851) main_dialer3_pane

0xbcf7,	// (0x0005c851) main_fmrd2_pane

0x0d38,	// (0x00051892) main_fs_bigclock_unlock_btn_pane_g1

0xd006,	// (0x0005db60) main_fs_bigclock_unlock_btn_pane_t1

0xb7bf,	// (0x0005c319) area_fmrd2_info_pane_ParamLimits

0xb7bf,	// (0x0005c319) area_fmrd2_info_pane

0xb7cd,	// (0x0005c327) area_fmrd2_visual_pane_ParamLimits

0xb7cd,	// (0x0005c327) area_fmrd2_visual_pane

0xb7db,	// (0x0005c335) fmrd2_indi_pane_ParamLimits

0xb7db,	// (0x0005c335) fmrd2_indi_pane

0xb7e8,	// (0x0005c342) area_fmrd2_visual_pane_g1

0xb7f0,	// (0x0005c34a) area_fmrd2_visual_pane_t1

0xb800,	// (0x0005c35a) area_fmrd2_visual_pane_t2

0xb810,	// (0x0005c36a) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00060a42) area_fmrd2_visual_pane_t

0xb820,	// (0x0005c37a) area_fmrd2_info_pane_g1

0xb828,	// (0x0005c382) area_fmrd2_info_pane_t1

0xb838,	// (0x0005c392) area_fmrd2_info_pane_t2

0xb848,	// (0x0005c3a2) area_fmrd2_info_pane_t3

0xb858,	// (0x0005c3b2) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00060a49) area_fmrd2_info_pane_t

0xb866,	// (0x0005c3c0) fmrd2_indi_pane_t1

0xb876,	// (0x0005c3d0) fmrd2_indi_pane_t2

0xb886,	// (0x0005c3e0) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00060a52) fmrd2_indi_pane_t

0x262d,	// (0x00053187) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x262d,	// (0x00053187) list_single_fs_bigclock_indicator_pane_g5

0x26d4,	// (0x0005322e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x26d4,	// (0x0005322e) list_single_fs_bigclock_indicator_pane_t5

0xafe3,	// (0x0005bb3d) aid_cell_bcale_month_pane_ParamLimits

0xafe3,	// (0x0005bb3d) aid_cell_bcale_month_pane

0xaff3,	// (0x0005bb4d) bcale_month_pane_ParamLimits

0xaff3,	// (0x0005bb4d) bcale_month_pane

0xb003,	// (0x0005bb5d) bcale_preview_pane_ParamLimits

0xb003,	// (0x0005bb5d) bcale_preview_pane

0xcdb0,	// (0x0005d90a) list_single_fs_bigclock_pane_t1_ParamLimits

0xcdcf,	// (0x0005d929) list_single_fs_bigclock_pane_t2_ParamLimits

0xcdcf,	// (0x0005d929) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x000609d9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x000609d9) list_single_fs_bigclock_pane_t

0xcffe,	// (0x0005db58) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00060a3d) main_fs_bigclock_unlock_btn_pane_g

0xb894,	// (0x0005c3ee) aid_dia3_key_size_ParamLimits

0xb894,	// (0x0005c3ee) aid_dia3_key_size

0xb8a0,	// (0x0005c3fa) aid_dia3_listrow_size_ParamLimits

0xb8a0,	// (0x0005c3fa) aid_dia3_listrow_size

0xb8b0,	// (0x0005c40a) dia3_keypad_fun_pane_ParamLimits

0xb8b0,	// (0x0005c40a) dia3_keypad_fun_pane

0xb8c2,	// (0x0005c41c) dia3_keypad_num_pane_ParamLimits

0xb8c2,	// (0x0005c41c) dia3_keypad_num_pane

0xb8d4,	// (0x0005c42e) dia3_listscroll_pane_ParamLimits

0xb8d4,	// (0x0005c42e) dia3_listscroll_pane

0xb8e2,	// (0x0005c43c) dia3_numentry_pane_ParamLimits

0xb8e2,	// (0x0005c43c) dia3_numentry_pane

0xd014,	// (0x0005db6e) dia3_list_pane

0xd01f,	// (0x0005db79) scroll_pane_cp12

0xbcf7,	// (0x0005c851) bg_dia3_numentry_pane

0xb8f0,	// (0x0005c44a) dia3_numentry_pane_t1

0xb8ff,	// (0x0005c459) cell_dia3_key_num_pane

0xb907,	// (0x0005c461) cell_dia3_key0_fun_pane_ParamLimits

0xb907,	// (0x0005c461) cell_dia3_key0_fun_pane

0xb914,	// (0x0005c46e) cell_dia3_key1_fun_pane_ParamLimits

0xb914,	// (0x0005c46e) cell_dia3_key1_fun_pane

0xb921,	// (0x0005c47b) dia3_listrow_pane

0x232e,	// (0x00052e88) bg_dia3_numentry_pane_g1

0xbcf7,	// (0x0005c851) bg_button_pane_cp21

0xd02a,	// (0x0005db84) cell_dia3_key_num_pane_t1

0xd038,	// (0x0005db92) cell_dia3_key_num_pane_t2

0xd047,	// (0x0005dba1) cell_dia3_key_num_pane_t3

0xd056,	// (0x0005dbb0) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00060a59) cell_dia3_key_num_pane_t

0xbcf7,	// (0x0005c851) bg_button_pane_cp19

0xb92e,	// (0x0005c488) cell_dia3_key0_fun_pane_g1

0xbcf7,	// (0x0005c851) bg_button_pane_cp20

0xb936,	// (0x0005c490) cell_dia3_key1_fun_pane_g1

0xb93e,	// (0x0005c498) area_left_week_number_pane

0xb94a,	// (0x0005c4a4) area_top_day_name_pane

0xb956,	// (0x0005c4b0) frame_month_view_pane

0xb962,	// (0x0005c4bc) grid_month_view_pane

0xd065,	// (0x0005dbbf) cell_top_day_name_pane_ParamLimits

0xd065,	// (0x0005dbbf) cell_top_day_name_pane

0xb21f,	// (0x0005bd79) cell_area_left_week_number_pane_ParamLimits

0xb21f,	// (0x0005bd79) cell_area_left_week_number_pane

0xb96e,	// (0x0005c4c8) cell_month_view_pane_ParamLimits

0xb96e,	// (0x0005c4c8) cell_month_view_pane

0xd088,	// (0x0005dbe2) frm_month_g1

0xb98b,	// (0x0005c4e5) frm_month_g2

0xb995,	// (0x0005c4ef) frm_month_g3

0xb99f,	// (0x0005c4f9) frm_month_g4

0xb9a9,	// (0x0005c503) frm_month_g5

0xb9b3,	// (0x0005c50d) frm_month_g6

0xb9bd,	// (0x0005c517) frm_month_g7

0xd091,	// (0x0005dbeb) frm_month_g8

0xd09a,	// (0x0005dbf4) frm_month_g9

0xd0a3,	// (0x0005dbfd) frm_month_g10

0xd0ac,	// (0x0005dc06) frm_month_g11

0xd0b5,	// (0x0005dc0f) frm_month_g12

0xd0be,	// (0x0005dc18) frm_month_g13

0xd0c7,	// (0x0005dc21) frm_month_g14

0xd0d2,	// (0x0005dc2c) frm_month_g15

0xd0dd,	// (0x0005dc37) frm_month_g16

0x000f,

0xff08,	// (0x00060a62) frm_month_g

0xb9c9,	// (0x0005c523) cell_top_day_name_pane_t1

0xb9d8,	// (0x0005c532) cell_area_left_week_number_pane_g1

0xb9e0,	// (0x0005c53a) cell_area_left_week_number_pane_t1

0x0d38,	// (0x00051892) cell_month_view_pane_g1

0xb9ef,	// (0x0005c549) cell_month_view_pane_t1

0xbcf7,	// (0x0005c851) main_fps_pane

0xc79b,	// (0x0005d2f5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc79b,	// (0x0005d2f5) cmail_ddmenu_btn02_pane_cp1

0xc7b7,	// (0x0005d311) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc7b7,	// (0x0005d311) cmail_ddmenu_btn02_pane_cp2

0xb2d4,	// (0x0005be2e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb2d4,	// (0x0005be2e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x0006098c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x0006098c) cmail_ddmenu_btn02_pane_g

0xb2f2,	// (0x0005be4c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb2f2,	// (0x0005be4c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x00060991) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x00060991) cmail_ddmenu_btn02_pane_t

0xb9fe,	// (0x0005c558) fps_text_pane_ParamLimits

0xb9fe,	// (0x0005c558) fps_text_pane

0xba0b,	// (0x0005c565) main_fps_pane_g1_ParamLimits

0xba0b,	// (0x0005c565) main_fps_pane_g1

0xba19,	// (0x0005c573) wait_bar_pane_cp010_ParamLimits

0xba19,	// (0x0005c573) wait_bar_pane_cp010

0xba25,	// (0x0005c57f) fps_text_pane_t1_ParamLimits

0xba25,	// (0x0005c57f) fps_text_pane_t1

0x895d,	// (0x000594b7) cam4_image_uncrop_pane_g1

0x8966,	// (0x000594c0) cam4_image_uncrop_pane_g2

0x896f,	// (0x000594c9) cam4_image_uncrop_pane_g3

0x8978,	// (0x000594d2) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00060453) cam4_image_uncrop_pane_g

0xb921,	// (0x0005c47b) dia3_listrow_pane_ParamLimits

0xbcf7,	// (0x0005c851) main_phob2_pane

0xae02,	// (0x0005b95c) cell_tport_appsw_pane_cp02_ParamLimits

0xae02,	// (0x0005b95c) cell_tport_appsw_pane_cp02

0xae11,	// (0x0005b96b) cell_tport_appsw_pane_cp03_ParamLimits

0xae11,	// (0x0005b96b) cell_tport_appsw_pane_cp03

0xbcf7,	// (0x0005c851) phob2_contact_card_pane

0xbcf7,	// (0x0005c851) phob2_listscroll_pane

0xd0e8,	// (0x0005dc42) phob2_list_pane

0xd0f0,	// (0x0005dc4a) scroll_pane_cp034

0xba3e,	// (0x0005c598) phob2_cc_data_pane_ParamLimits

0xba3e,	// (0x0005c598) phob2_cc_data_pane

0xba58,	// (0x0005c5b2) phob2_cc_listscroll_pane_ParamLimits

0xba58,	// (0x0005c5b2) phob2_cc_listscroll_pane

0xba72,	// (0x0005c5cc) list_double_large_graphic_phob2_pane_ParamLimits

0xba72,	// (0x0005c5cc) list_double_large_graphic_phob2_pane

0xba95,	// (0x0005c5ef) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xba95,	// (0x0005c5ef) list_double_large_graphic_phob2_pane_g1

0xbaa2,	// (0x0005c5fc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xbaa2,	// (0x0005c5fc) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00060a83) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00060a83) list_double_large_graphic_phob2_pane_g

0xbaae,	// (0x0005c608) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xbaae,	// (0x0005c608) list_double_large_graphic_phob2_pane_t1

0xbac3,	// (0x0005c61d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xbac3,	// (0x0005c61d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00060a88) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00060a88) list_double_large_graphic_phob2_pane_t

0xbcf7,	// (0x0005c851) list_highlight_pane_cp024

0xd0f8,	// (0x0005dc52) phob2_cc_button_pane

0xbad5,	// (0x0005c62f) phob2_cc_data_pane_g1_ParamLimits

0xbad5,	// (0x0005c62f) phob2_cc_data_pane_g1

0xbae1,	// (0x0005c63b) phob2_cc_data_pane_g2_ParamLimits

0xbae1,	// (0x0005c63b) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00060a8d) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00060a8d) phob2_cc_data_pane_g

0xbaed,	// (0x0005c647) phob2_cc_data_pane_t1_ParamLimits

0xbaed,	// (0x0005c647) phob2_cc_data_pane_t1

0xbaff,	// (0x0005c659) phob2_cc_data_pane_t2_ParamLimits

0xbaff,	// (0x0005c659) phob2_cc_data_pane_t2

0xbb11,	// (0x0005c66b) phob2_cc_data_pane_t3_ParamLimits

0xbb11,	// (0x0005c66b) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00060a92) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00060a92) phob2_cc_data_pane_t

0xd100,	// (0x0005dc5a) phob2_cc_list_pane_ParamLimits

0xd100,	// (0x0005dc5a) phob2_cc_list_pane

0x2209,	// (0x00052d63) scroll_pane_cp035_ParamLimits

0x2209,	// (0x00052d63) scroll_pane_cp035

0xc69f,	// (0x0005d1f9) bg_button_pane_cp033

0xd10c,	// (0x0005dc66) phob2_cc_button_pane_g1

0xd118,	// (0x0005dc72) phob2_cc_button_pane_t1

0xd12d,	// (0x0005dc87) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00060a99) phob2_cc_button_pane_t

0xbb23,	// (0x0005c67d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbb23,	// (0x0005c67d) list_double_large_graphic_phob2_cc_pane

0xbb53,	// (0x0005c6ad) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbb53,	// (0x0005c6ad) list_double_large_graphic_phob2_cc_pane_g1

0xbb64,	// (0x0005c6be) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xbb64,	// (0x0005c6be) list_double_large_graphic_phob2_cc_pane_g2

0xbb73,	// (0x0005c6cd) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbb73,	// (0x0005c6cd) list_double_large_graphic_phob2_cc_pane_g3

0xbb82,	// (0x0005c6dc) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbb82,	// (0x0005c6dc) list_double_large_graphic_phob2_cc_pane_g4

0xbb93,	// (0x0005c6ed) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbb93,	// (0x0005c6ed) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00060a9e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00060a9e) list_double_large_graphic_phob2_cc_pane_g

0xbba2,	// (0x0005c6fc) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbba2,	// (0x0005c6fc) list_double_large_graphic_phob2_cc_pane_t1

0xbbcb,	// (0x0005c725) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbbcb,	// (0x0005c725) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00060aa9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00060aa9) list_double_large_graphic_phob2_cc_pane_t

0xd13f,	// (0x0005dc99) list_highlight_pane_cp025_ParamLimits

0xd13f,	// (0x0005dc99) list_highlight_pane_cp025

0xc69f,	// (0x0005d1f9) bg_button_pane_cp033_ParamLimits

0xd10c,	// (0x0005dc66) phob2_cc_button_pane_g1_ParamLimits

0xd118,	// (0x0005dc72) phob2_cc_button_pane_t1_ParamLimits

0xd12d,	// (0x0005dc87) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00060a99) phob2_cc_button_pane_t_ParamLimits

0x3a1f,	// (0x00054579) popup_wgtman_window

0x199b,	// (0x000524f5) scroll_pane_cp038

0xb6b1,	// (0x0005c20b) wgtman_btn_pane_cp_01_ParamLimits

0xb6b1,	// (0x0005c20b) wgtman_btn_pane_cp_01

0xd14d,	// (0x0005dca7) wgtman_content_pane

0xd07f,	// (0x0005dbd9) wgtman_heading_pane

0xbcf7,	// (0x0005c851) bg_heading_pane_cp02

0xd156,	// (0x0005dcb0) wgtman_heading_pane_g1

0xd15e,	// (0x0005dcb8) wgtman_heading_pane_t1

0xd16c,	// (0x0005dcc6) scroll_pane_cp036

0xd174,	// (0x0005dcce) wgtman_list_pane

0xd17c,	// (0x0005dcd6) wgtman_list_pane_t1_ParamLimits

0xd17c,	// (0x0005dcd6) wgtman_list_pane_t1

0x88bc,	// (0x00059416) cam4_grid_pane

0x95e3,	// (0x0005a13d) bg_button_pane_cp015_ParamLimits

0x95f5,	// (0x0005a14f) bg_button_pane_cp016_ParamLimits

0x9608,	// (0x0005a162) bg_button_pane_cp017_ParamLimits

0x965e,	// (0x0005a1b8) popup_vitu2_query_window_g3_ParamLimits

0x965e,	// (0x0005a1b8) popup_vitu2_query_window_g3

0x9719,	// (0x0005a273) popup_vitu2_query_window_t6_ParamLimits

0x9719,	// (0x0005a273) popup_vitu2_query_window_t6

0x9744,	// (0x0005a29e) popup_vitu2_query_window_t7_ParamLimits

0x9744,	// (0x0005a29e) popup_vitu2_query_window_t7

0x26fc,	// (0x00053256) cam4_grid_pane_g1

0x2705,	// (0x0005325f) cam4_grid_pane_g2

0xd19a,	// (0x0005dcf4) cam4_grid_pane_g3

0xd1a3,	// (0x0005dcfd) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00060aae) cam4_grid_pane_g

0x4783,	// (0x000552dd) aid_placing_vt_slider_lsc_ParamLimits

0x4ac3,	// (0x0005561d) vidtel_button_pane_ParamLimits

0x4ac3,	// (0x0005561d) vidtel_button_pane

0xd1ae,	// (0x0005dd08) bg_button_pane_cp034

0xbbf4,	// (0x0005c74e) vidtel_button_pane_g1

0xd1b8,	// (0x0005dd12) vidtel_button_pane_t1

0x1ab8,	// (0x00052612) aid_size_vtel_slider_touch

0x2209,	// (0x00052d63) scroll_pane_cp039

0x236c,	// (0x00052ec6) ncim_query_button_pane_cp01_ParamLimits

0x238b,	// (0x00052ee5) ncimui_query_pane_g1_ParamLimits

0xc69f,	// (0x0005d1f9) input_focus_pane_cp012_ParamLimits

0x23b0,	// (0x00052f0a) ncim_query_entry_pane_t1_ParamLimits

0x2209,	// (0x00052d63) scroll_pane_cp039_ParamLimits

0x5b93,	// (0x000566ed) navi_pane_bcale_mc_g1

0x5b9b,	// (0x000566f5) navi_pane_bcale_mc_t1

0xc800,	// (0x0005d35a) main_sp_fs_email_pane_g1

0xc808,	// (0x0005d362) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x0006084a) main_sp_fs_email_pane_g

0xcac3,	// (0x0005d61d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcac3,	// (0x0005d61d) list_single_cale_mrui_row_pane_g3

0xb31a,	// (0x0005be74) list_single_recal_day_pane_g5_event_pane

0xcc0f,	// (0x0005d769) list_single_recal_day_pane_g7

0xd1c6,	// (0x0005dd20) list_recal_day_event_pane_cp01

0xd1cf,	// (0x0005dd29) list_recal_vselct_arw_lo_pane_cp01

0xd1d7,	// (0x0005dd31) list_recal_vselct_arw_up_pane_cp01

0xd1df,	// (0x0005dd39) list_recal_vselct_pane_cp01

0x1ac8,	// (0x00052622) list_recal_day_event_pane_cp01_g1

0xd1e9,	// (0x0005dd43) list_recal_day_event_pane_cp01_t1

0xcc17,	// (0x0005d771) list_single_recal_day_pane_t1_ParamLimits

0xcc29,	// (0x0005d783) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x000609a1) list_single_recal_day_pane_t_ParamLimits

0xc454,	// (0x0005cfae) bg_notes_pane_ParamLimits

0xc462,	// (0x0005cfbc) list_notes_pane_ParamLimits

0x3d5c,	// (0x000548b6) scroll_pane_cp06_ParamLimits

0xc484,	// (0x0005cfde) main_notes_pane_ParamLimits

0xbcf7,	// (0x0005c851) main_welc_pane

0xbbfc,	// (0x0005c756) main_welc_body_pane_ParamLimits

0xbbfc,	// (0x0005c756) main_welc_body_pane

0xbc15,	// (0x0005c76f) main_welc_opti_pane_ParamLimits

0xbc15,	// (0x0005c76f) main_welc_opti_pane

0xbc4a,	// (0x0005c7a4) main_welc_pane_t1_ParamLimits

0xbc4a,	// (0x0005c7a4) main_welc_pane_t1

0xbc68,	// (0x0005c7c2) main_welc_body_row_pane_ParamLimits

0xbc68,	// (0x0005c7c2) main_welc_body_row_pane

0xbc99,	// (0x0005c7f3) main_welc_opti_row_pane_ParamLimits

0xbc99,	// (0x0005c7f3) main_welc_opti_row_pane

0xd1f7,	// (0x0005dd51) main_welc_opti_row_pane_g1

0xd1ff,	// (0x0005dd59) main_welc_opti_row_pane_t1

0xd20e,	// (0x0005dd68) main_welc_body_row_pane_t1

0xce8f,	// (0x0005d9e9) popup_notif_wgt_heading_pane

0xcea9,	// (0x0005da03) aid_size_list_notif_wgt_del_ParamLimits

0xceb6,	// (0x0005da10) list_notif_wgt_row_pane_g1_ParamLimits

0xcec2,	// (0x0005da1c) list_notif_wgt_row_pane_g2_ParamLimits

0xcece,	// (0x0005da28) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x00060a08) list_notif_wgt_row_pane_g_ParamLimits

0xcedb,	// (0x0005da35) list_notif_wgt_row_pane_t1_ParamLimits

0xcef0,	// (0x0005da4a) list_notif_wgt_row_pane_t2_ParamLimits

0xcf02,	// (0x0005da5c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x00060a0f) list_notif_wgt_row_pane_t_ParamLimits

0xb744,	// (0x0005c29e) listrow_wgtman_pane_g1_ParamLimits

0xb751,	// (0x0005c2ab) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00060a33) listrow_wgtman_pane_g_ParamLimits

0xb76f,	// (0x0005c2c9) listrow_wgtman_pane_t1_ParamLimits

0xb787,	// (0x0005c2e1) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00060a38) listrow_wgtman_pane_t_ParamLimits

0xb7ad,	// (0x0005c307) wait_bar_pane_cp09_ParamLimits

0xbcf7,	// (0x0005c851) bg_popup_heading_pane_cp02

0xd21d,	// (0x0005dd77) popup_notif_wgt_heading_pane_g1

0xd225,	// (0x0005dd7f) popup_notif_wgt_heading_pane_t1

0xbcf7,	// (0x0005c851) main_vids_pane

0xbcf7,	// (0x0005c851) vids_listscroll_pane

0xbcaa,	// (0x0005c804) scroll_pane_cp040

0xbcf7,	// (0x0005c851) vids_list_pane

0xbcb5,	// (0x0005c80f) vids_list_double_pane_ParamLimits

0xbcb5,	// (0x0005c80f) vids_list_double_pane

0xbcd0,	// (0x0005c82a) vids_list_double_pane_g1

0xbcd9,	// (0x0005c833) vids_list_double_pane_t1

0xbce9,	// (0x0005c843) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00060abc) vids_list_double_pane_t

0x699f,	// (0x000574f9) main_ncimui_pane_ParamLimits

0xa2b0,	// (0x0005ae0a) main_ncimui_pane_g1_ParamLimits

0xa2bc,	// (0x0005ae16) main_ncimui_pane_g2_ParamLimits

0xa2bc,	// (0x0005ae16) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x0006074f) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x0006074f) main_ncimui_pane_g

0xbc30,	// (0x0005c78a) main_welc_pane_g1_ParamLimits

0xbc30,	// (0x0005c78a) main_welc_pane_g1

0xbc3c,	// (0x0005c796) main_welc_pane_g2_ParamLimits

0xbc3c,	// (0x0005c796) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00060ab7) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00060ab7) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
