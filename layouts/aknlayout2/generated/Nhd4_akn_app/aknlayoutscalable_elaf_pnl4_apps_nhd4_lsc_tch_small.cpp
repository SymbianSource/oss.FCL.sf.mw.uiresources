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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004427c };

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
0x147f,	// (0x000456fb) Screen

0x148b,	// (0x00045707) application_window

0x14d1,	// (0x0004574d) area_bottom_pane_ParamLimits

0x14d1,	// (0x0004574d) area_bottom_pane

0x150a,	// (0x00045786) area_top_pane_ParamLimits

0x150a,	// (0x00045786) area_top_pane

0xa78f,	// (0x0004ea0b) call_video_uplink_pane_ParamLimits

0xa78f,	// (0x0004ea0b) call_video_uplink_pane

0x157f,	// (0x000457fb) main_pane_ParamLimits

0x157f,	// (0x000457fb) main_pane

0xc7ec,	// (0x00050a68) context_pane

0x4e4e,	// (0x000490ca) navi_pane

0x4e76,	// (0x000490f2) popup_cale_events_window_ParamLimits

0x4e76,	// (0x000490f2) popup_cale_events_window

0xc7ff,	// (0x00050a7b) popup_mup_playback_window

0x4e8e,	// (0x0004910a) signal_pane

0x215a,	// (0x000463d6) main_browser_pane

0xb300,	// (0x0004f57c) main_burst_pane

0x4bae,	// (0x00048e2a) main_calc_pane

0xb300,	// (0x0004f57c) main_cale_day_pane

0x215a,	// (0x000463d6) main_cale_month_pane

0xb300,	// (0x0004f57c) main_cale_week_pane

0xb300,	// (0x0004f57c) main_call_pane

0x1b7a,	// (0x00045df6) main_call_poc_pane

0xb300,	// (0x0004f57c) main_camera_pane

0xb300,	// (0x0004f57c) main_chi_dic_pane

0xb18f,	// (0x0004f40b) main_clock_pane

0x1b7a,	// (0x00045df6) main_fmradio_pane

0xb300,	// (0x0004f57c) main_graph_messa_pane

0x1b7a,	// (0x00045df6) main_help_pane

0x215a,	// (0x000463d6) main_im_pane

0x1dd5,	// (0x00046051) main_image_pane_ParamLimits

0x1dd5,	// (0x00046051) main_image_pane

0x1b7a,	// (0x00045df6) main_location2_pane

0xb300,	// (0x0004f57c) main_location_pane

0x1b7a,	// (0x00045df6) main_messa_pane

0x1b7a,	// (0x00045df6) main_mp2_pane

0xb300,	// (0x0004f57c) main_mp_pane

0x1b7a,	// (0x00045df6) main_msg_pane

0x1b7a,	// (0x00045df6) main_mup_eq_pane

0x1b7a,	// (0x00045df6) main_mup_pane

0x215a,	// (0x000463d6) main_notes_pane

0x1b7a,	// (0x00045df6) main_pec_pane

0x1b7a,	// (0x00045df6) main_phob_pane

0x1b7a,	// (0x00045df6) main_pinb_pane

0x1b7a,	// (0x00045df6) main_postcard_pane

0x1b7a,	// (0x00045df6) main_qdial_pane

0xb300,	// (0x0004f57c) main_skin_pane

0x1b7a,	// (0x00045df6) main_smil2_pane

0xb300,	// (0x0004f57c) main_smil_pane

0xb300,	// (0x0004f57c) main_video_pane

0xb300,	// (0x0004f57c) main_video_tele_pane

0x1dd5,	// (0x00046051) main_viewer_pane_ParamLimits

0x1dd5,	// (0x00046051) main_viewer_pane

0xb300,	// (0x0004f57c) main_vorec_pane

0x4c02,	// (0x00048e7e) popup_blid_sat_info_window_ParamLimits

0x4c02,	// (0x00048e7e) popup_blid_sat_info_window

0x4c5a,	// (0x00048ed6) popup_dyc_status_message_window_ParamLimits

0x4c5a,	// (0x00048ed6) popup_dyc_status_message_window

0x4c72,	// (0x00048eee) popup_grid_large_graphic_window_ParamLimits

0x4c72,	// (0x00048eee) popup_grid_large_graphic_window

0x4d28,	// (0x00048fa4) popup_loc_request_window_ParamLimits

0x4d28,	// (0x00048fa4) popup_loc_request_window

0x4e26,	// (0x000490a2) popup_wml_address_window_ParamLimits

0x4e26,	// (0x000490a2) popup_wml_address_window

0x49e8,	// (0x00048c64) call_muted_g1

0x46a0,	// (0x0004891c) popup_call_audio_conf_window_ParamLimits

0x46a0,	// (0x0004891c) popup_call_audio_conf_window

0x49fc,	// (0x00048c78) popup_call_audio_first_window_ParamLimits

0x49fc,	// (0x00048c78) popup_call_audio_first_window

0x4a72,	// (0x00048cee) popup_call_audio_in_window_ParamLimits

0x4a72,	// (0x00048cee) popup_call_audio_in_window

0x4aae,	// (0x00048d2a) popup_call_audio_out_window_ParamLimits

0x4aae,	// (0x00048d2a) popup_call_audio_out_window

0x4ae8,	// (0x00048d64) popup_call_audio_second_window_ParamLimits

0x4ae8,	// (0x00048d64) popup_call_audio_second_window

0x4b3e,	// (0x00048dba) popup_call_audio_wait_window_ParamLimits

0x4b3e,	// (0x00048dba) popup_call_audio_wait_window

0x4b73,	// (0x00048def) popup_number_entry_window_ParamLimits

0x4b73,	// (0x00048def) popup_number_entry_window

0x170f,	// (0x0004598b) bg_popup_call_pane_cp05_ParamLimits

0x170f,	// (0x0004598b) bg_popup_call_pane_cp05

0x172f,	// (0x000459ab) popup_number_entry_window_t1

0x1742,	// (0x000459be) popup_number_entry_window_t2

0x1754,	// (0x000459d0) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00053354) popup_number_entry_window_t

0x179c,	// (0x00045a18) text_title_cp2

0x17af,	// (0x00045a2b) bg_popup_call_pane_cp_ParamLimits

0x17af,	// (0x00045a2b) bg_popup_call_pane_cp

0x17bd,	// (0x00045a39) call_thumbnail_pane

0x17c5,	// (0x00045a41) popup_call_audio_in_window_g1_ParamLimits

0x17c5,	// (0x00045a41) popup_call_audio_in_window_g1

0x17d1,	// (0x00045a4d) popup_call_audio_in_window_g2_ParamLimits

0x17d1,	// (0x00045a4d) popup_call_audio_in_window_g2

0x17dd,	// (0x00045a59) popup_call_audio_in_window_g3_ParamLimits

0x17dd,	// (0x00045a59) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0005335d) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0005335d) popup_call_audio_in_window_g

0x17e9,	// (0x00045a65) popup_call_audio_in_window_t1_ParamLimits

0x17e9,	// (0x00045a65) popup_call_audio_in_window_t1

0x1804,	// (0x00045a80) popup_call_audio_in_window_t2_ParamLimits

0x1804,	// (0x00045a80) popup_call_audio_in_window_t2

0x181f,	// (0x00045a9b) popup_call_audio_in_window_t3_ParamLimits

0x181f,	// (0x00045a9b) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00053364) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00053364) popup_call_audio_in_window_t

0x17af,	// (0x00045a2b) bg_popup_call_pane_cp01_ParamLimits

0x17af,	// (0x00045a2b) bg_popup_call_pane_cp01

0x17bd,	// (0x00045a39) call_thumbnail_pane_cp02

0x1832,	// (0x00045aae) call_type_pane_cp022

0x183a,	// (0x00045ab6) popup_call_audio_out_window_g1_ParamLimits

0x183a,	// (0x00045ab6) popup_call_audio_out_window_g1

0x184c,	// (0x00045ac8) popup_call_audio_out_window_g2_ParamLimits

0x184c,	// (0x00045ac8) popup_call_audio_out_window_g2

0x1858,	// (0x00045ad4) popup_call_audio_out_window_g3_ParamLimits

0x1858,	// (0x00045ad4) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0005336b) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0005336b) popup_call_audio_out_window_g

0x186a,	// (0x00045ae6) popup_call_audio_out_window_t1_ParamLimits

0x186a,	// (0x00045ae6) popup_call_audio_out_window_t1

0x1882,	// (0x00045afe) popup_call_audio_out_window_t2_ParamLimits

0x1882,	// (0x00045afe) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00053372) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00053372) popup_call_audio_out_window_t

0x1897,	// (0x00045b13) bg_popup_call_pane_ParamLimits

0x1897,	// (0x00045b13) bg_popup_call_pane

0x191b,	// (0x00045b97) call_thumbnail_pane_cp_ParamLimits

0x191b,	// (0x00045b97) call_thumbnail_pane_cp

0x193f,	// (0x00045bbb) call_type_pane_cp01_ParamLimits

0x193f,	// (0x00045bbb) call_type_pane_cp01

0x1983,	// (0x00045bff) popup_call_audio_first_window_g1_ParamLimits

0x1983,	// (0x00045bff) popup_call_audio_first_window_g1

0x19cf,	// (0x00045c4b) popup_call_audio_first_window_g2_ParamLimits

0x19cf,	// (0x00045c4b) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00053377) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00053377) popup_call_audio_first_window_g

0x1a13,	// (0x00045c8f) popup_call_audio_first_window_t1_ParamLimits

0x1a13,	// (0x00045c8f) popup_call_audio_first_window_t1

0x1abf,	// (0x00045d3b) popup_call_audio_first_window_t4_ParamLimits

0x1abf,	// (0x00045d3b) popup_call_audio_first_window_t4

0x1b4b,	// (0x00045dc7) popup_call_audio_first_window_t5_ParamLimits

0x1b4b,	// (0x00045dc7) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0005337c) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0005337c) popup_call_audio_first_window_t

0x1b7a,	// (0x00045df6) bg_popup_call_pane_cp02

0x1b84,	// (0x00045e00) call_type_pane_cp023

0x1b8c,	// (0x00045e08) popup_call_audio_wait_window_g1

0x1b94,	// (0x00045e10) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00053383) popup_call_audio_wait_window_g

0x1b9c,	// (0x00045e18) popup_call_audio_wait_window_t3

0x1baa,	// (0x00045e26) bg_popup_call_pane_cp03_ParamLimits

0x1baa,	// (0x00045e26) bg_popup_call_pane_cp03

0x1c0a,	// (0x00045e86) call_thumbnail_pane_cp011_ParamLimits

0x1c0a,	// (0x00045e86) call_thumbnail_pane_cp011

0x1c16,	// (0x00045e92) call_type_pane_cp034_ParamLimits

0x1c16,	// (0x00045e92) call_type_pane_cp034

0x1c52,	// (0x00045ece) popup_call_audio_second_window_g1_ParamLimits

0x1c52,	// (0x00045ece) popup_call_audio_second_window_g1

0x1c8e,	// (0x00045f0a) popup_call_audio_second_window_g2_ParamLimits

0x1c8e,	// (0x00045f0a) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00053388) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00053388) popup_call_audio_second_window_g

0x1cca,	// (0x00045f46) popup_call_audio_second_window_t1_ParamLimits

0x1cca,	// (0x00045f46) popup_call_audio_second_window_t1

0x1d4b,	// (0x00045fc7) popup_call_audio_second_window_t2_ParamLimits

0x1d4b,	// (0x00045fc7) popup_call_audio_second_window_t2

0x1d81,	// (0x00045ffd) popup_call_audio_second_window_t3_ParamLimits

0x1d81,	// (0x00045ffd) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0005338d) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0005338d) popup_call_audio_second_window_t

0x1b7a,	// (0x00045df6) bg_popup_call_pane_cp04

0x1db7,	// (0x00046033) list_conf_pane

0x1dbf,	// (0x0004603b) popup_call_audio_conf_window_t1

0x1dcd,	// (0x00046049) call_thumbnail_pane_g1

0x1dd5,	// (0x00046051) bg_pinb_pane_ParamLimits

0x1dd5,	// (0x00046051) bg_pinb_pane

0x1de3,	// (0x0004605f) find_pinb_pane

0x1dec,	// (0x00046068) listscroll_pinb_pane_ParamLimits

0x1dec,	// (0x00046068) listscroll_pinb_pane

0x1dfb,	// (0x00046077) pinb_bg_pane_g1

0x1e05,	// (0x00046081) pinb_bg_pane_g2

0x1e11,	// (0x0004608d) pinb_bg_pane_g3

0x1e1d,	// (0x00046099) pinb_bg_pane_g4

0x1e29,	// (0x000460a5) pinb_bg_pane_g5

0x1e35,	// (0x000460b1) pinb_bg_pane_g6

0x1e40,	// (0x000460bc) pinb_bg_pane_g7

0x1e4b,	// (0x000460c7) pinb_bg_pane_g8

0x1e56,	// (0x000460d2) pinb_bg_pane_g9

0x1e60,	// (0x000460dc) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00053394) pinb_bg_pane_g

0x1e7d,	// (0x000460f9) grid_pinb_pane

0x1e86,	// (0x00046102) list_pinb_pane

0x1e8f,	// (0x0004610b) scroll_pane_cp01_ParamLimits

0x1e8f,	// (0x0004610b) scroll_pane_cp01

0x1ea1,	// (0x0004611d) find_pinb_pane_g1_ParamLimits

0x1ea1,	// (0x0004611d) find_pinb_pane_g1

0x1eb9,	// (0x00046135) find_pinb_pane_t1

0x1ecb,	// (0x00046147) find_pinb_pane_t2

0x0001,

0xf132,	// (0x000533ae) find_pinb_pane_t

0x1ee0,	// (0x0004615c) input_focus_pane_cp01_ParamLimits

0x1ee0,	// (0x0004615c) input_focus_pane_cp01

0x1eec,	// (0x00046168) cell_pinb_pane_ParamLimits

0x1eec,	// (0x00046168) cell_pinb_pane

0x1f1e,	// (0x0004619a) cell_pinb_pane_g1_ParamLimits

0x1f1e,	// (0x0004619a) cell_pinb_pane_g1

0x1f2e,	// (0x000461aa) cell_pinb_pane_g2_ParamLimits

0x1f2e,	// (0x000461aa) cell_pinb_pane_g2

0x1f3a,	// (0x000461b6) cell_pinb_pane_g3_ParamLimits

0x1f3a,	// (0x000461b6) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x000533b3) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x000533b3) cell_pinb_pane_g

0x1b7a,	// (0x00045df6) grid_highlight_pane_cp01

0x1f46,	// (0x000461c2) list_pinb_item_pane_ParamLimits

0x1f46,	// (0x000461c2) list_pinb_item_pane

0x1b7a,	// (0x00045df6) list_highlight_pane_cp02

0x1f5a,	// (0x000461d6) list_pinb_item_pane_g1_ParamLimits

0x1f5a,	// (0x000461d6) list_pinb_item_pane_g1

0x1f67,	// (0x000461e3) list_pinb_item_pane_g2_ParamLimits

0x1f67,	// (0x000461e3) list_pinb_item_pane_g2

0x1f73,	// (0x000461ef) list_pinb_item_pane_g3_ParamLimits

0x1f73,	// (0x000461ef) list_pinb_item_pane_g3

0x1f84,	// (0x00046200) list_pinb_item_pane_g4_ParamLimits

0x1f84,	// (0x00046200) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x000533ba) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x000533ba) list_pinb_item_pane_g

0x1f90,	// (0x0004620c) list_pinb_item_pane_t1_ParamLimits

0x1f90,	// (0x0004620c) list_pinb_item_pane_t1

0x1fc5,	// (0x00046241) calc_display_pane

0x1fed,	// (0x00046269) calc_paper_pane

0x2010,	// (0x0004628c) grid_calc_pane

0x1b7a,	// (0x00045df6) bg_list_pane_cp01

0x203e,	// (0x000462ba) clock_g1

0x2046,	// (0x000462c2) clock_g2

0x0001,

0xf147,	// (0x000533c3) clock_g

0x204e,	// (0x000462ca) clock_t1_ParamLimits

0x204e,	// (0x000462ca) clock_t1

0x2063,	// (0x000462df) clock_t2_ParamLimits

0x2063,	// (0x000462df) clock_t2

0x2075,	// (0x000462f1) clock_t3_ParamLimits

0x2075,	// (0x000462f1) clock_t3

0x2087,	// (0x00046303) clock_t4_ParamLimits

0x2087,	// (0x00046303) clock_t4

0x2099,	// (0x00046315) clock_t5_ParamLimits

0x2099,	// (0x00046315) clock_t5

0x20ae,	// (0x0004632a) clock_t6_ParamLimits

0x20ae,	// (0x0004632a) clock_t6

0x20c0,	// (0x0004633c) clock_t7_ParamLimits

0x20c0,	// (0x0004633c) clock_t7

0x20d2,	// (0x0004634e) clock_t8_ParamLimits

0x20d2,	// (0x0004634e) clock_t8

0x20e6,	// (0x00046362) clock_t9_ParamLimits

0x20e6,	// (0x00046362) clock_t9

0x0008,

0xf14c,	// (0x000533c8) clock_t_ParamLimits

0xf14c,	// (0x000533c8) clock_t

0x20fa,	// (0x00046376) popup_clock_analogue_window_cp02

0x20fa,	// (0x00046376) popup_clock_digital_window_cp01

0x2102,	// (0x0004637e) listscroll_help_pane

0x1b7a,	// (0x00045df6) phob_pre_status_pane

0x210c,	// (0x00046388) grid_qdial_pane

0x1b7a,	// (0x00045df6) listscroll_mce_pane

0x2116,	// (0x00046392) bg_notes_pane

0x2124,	// (0x000463a0) list_notes_pane

0x2132,	// (0x000463ae) scroll_pane_cp06

0x2146,	// (0x000463c2) bg_calc_paper_pane

0xa7b5,	// (0x0004ea31) list_calc_pane

0x215a,	// (0x000463d6) bg_calc_display_pane

0x2166,	// (0x000463e2) calc_display_pane_t1

0x2178,	// (0x000463f4) calc_display_pane_t2

0xa7cf,	// (0x0004ea4b) calc_display_pane_t3

0x0002,

0xf15f,	// (0x000533db) calc_display_pane_t

0x218a,	// (0x00046406) cell_calc_pane_ParamLimits

0x218a,	// (0x00046406) cell_calc_pane

0x21c1,	// (0x0004643d) bg_calc_paper_pane_g1

0x21cd,	// (0x00046449) bg_calc_paper_pane_g2

0x21d9,	// (0x00046455) bg_calc_paper_pane_g3

0x21e5,	// (0x00046461) bg_calc_paper_pane_g4

0x21f1,	// (0x0004646d) bg_calc_paper_pane_g5

0x21fd,	// (0x00046479) bg_calc_paper_pane_g6

0x220e,	// (0x0004648a) bg_calc_paper_pane_g7

0x221f,	// (0x0004649b) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x000533e2) bg_calc_paper_pane_g

0x2232,	// (0x000464ae) calc_bg_paper_pane_g9

0x2245,	// (0x000464c1) list_calc_item_pane_ParamLimits

0x2245,	// (0x000464c1) list_calc_item_pane

0x225d,	// (0x000464d9) list_calc_item_pane_g1

0xa7e1,	// (0x0004ea5d) list_calc_item_pane_t1_ParamLimits

0xa7e1,	// (0x0004ea5d) list_calc_item_pane_t1

0x226a,	// (0x000464e6) list_calc_item_pane_t2_ParamLimits

0x226a,	// (0x000464e6) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x000533f3) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x000533f3) list_calc_item_pane_t

0x2284,	// (0x00046500) cell_calc_pane_g1

0x22a6,	// (0x00046522) grid_highlight_pane_cp02

0x22c8,	// (0x00046544) bg_calc_display_pane_g1

0xa7f3,	// (0x0004ea6f) bg_calc_display_pane_g2

0x22d1,	// (0x0004654d) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x000533fd) bg_calc_display_pane_g

0x22da,	// (0x00046556) cell_qdial_pane_ParamLimits

0x22da,	// (0x00046556) cell_qdial_pane

0x22ee,	// (0x0004656a) cell_qdial_pane_g1_ParamLimits

0x22ee,	// (0x0004656a) cell_qdial_pane_g1

0x2304,	// (0x00046580) cell_qdial_pane_g2_ParamLimits

0x2304,	// (0x00046580) cell_qdial_pane_g2

0x2315,	// (0x00046591) cell_qdial_pane_g3_ParamLimits

0x2315,	// (0x00046591) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00053404) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00053404) cell_qdial_pane_g

0x2337,	// (0x000465b3) cell_qdial_pane_t1_ParamLimits

0x2337,	// (0x000465b3) cell_qdial_pane_t1

0x234f,	// (0x000465cb) cell_qdial_pane_t2_ParamLimits

0x234f,	// (0x000465cb) cell_qdial_pane_t2

0x2362,	// (0x000465de) cell_qdial_pane_t3_ParamLimits

0x2362,	// (0x000465de) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0005340d) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0005340d) cell_qdial_pane_t

0x1b7a,	// (0x00045df6) grid_highlight_pane_cp04

0x2375,	// (0x000465f1) thumbnail_qdial_pane_ParamLimits

0x2375,	// (0x000465f1) thumbnail_qdial_pane

0x23d1,	// (0x0004664d) list_help_pane

0x23da,	// (0x00046656) scroll_pane_cp02

0x23e3,	// (0x0004665f) help_list_pane_t1_ParamLimits

0x23e3,	// (0x0004665f) help_list_pane_t1

0xa7fd,	// (0x0004ea79) bg_notes_pane_g2

0xa805,	// (0x0004ea81) bg_notes_pane_g3

0xa80d,	// (0x0004ea89) notes_bg_pane_g1

0xa815,	// (0x0004ea91) notes_bg_pane_g4

0xa81d,	// (0x0004ea99) notes_bg_pane_g5

0xa825,	// (0x0004eaa1) notes_bg_pane_g6

0xa82d,	// (0x0004eaa9) notes_bg_pane_g7

0xa835,	// (0x0004eab1) notes_bg_pane_g8

0xa83d,	// (0x0004eab9) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0005342b) notes_bg_pane_g

0x2403,	// (0x0004667f) list_notes_text_pane_ParamLimits

0x2403,	// (0x0004667f) list_notes_text_pane

0x241a,	// (0x00046696) list_notes_text_pane_g1

0x09c5,	// (0x00044c41) list_notes_text_pane_t1

0x215a,	// (0x000463d6) listscroll_cale_week_pane

0x2451,	// (0x000466cd) bg_cale_heading_pane

0x2469,	// (0x000466e5) bg_cale_pane_cp01

0x2482,	// (0x000466fe) cale_week_corner_pane

0x2493,	// (0x0004670f) cale_week_day_heading_pane

0x24ab,	// (0x00046727) cale_week_scroll_pane_g1

0x24c0,	// (0x0004673c) cale_week_scroll_pane_g2

0x24d1,	// (0x0004674d) cale_week_scroll_pane_g3

0x24e2,	// (0x0004675e) cale_week_scroll_pane_g4

0x24f3,	// (0x0004676f) cale_week_scroll_pane_g5

0x2506,	// (0x00046782) cale_week_scroll_pane_g6

0x2519,	// (0x00046795) cale_week_scroll_pane_g7

0x252c,	// (0x000467a8) cale_week_scroll_pane_g8

0x253f,	// (0x000467bb) cale_week_scroll_pane_g9

0x2550,	// (0x000467cc) cale_week_scroll_pane_g10

0x2561,	// (0x000467dd) cale_week_scroll_pane_g11

0x2572,	// (0x000467ee) cale_week_scroll_pane_g12

0x2583,	// (0x000467ff) cale_week_scroll_pane_g13

0x2594,	// (0x00046810) cale_week_scroll_pane_g14

0x25a5,	// (0x00046821) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0005343a) cale_week_scroll_pane_g

0x25ba,	// (0x00046836) cale_week_time_pane

0x25cd,	// (0x00046849) grid_cale_week_pane

0x25f4,	// (0x00046870) scroll_pane_cp08

0x260e,	// (0x0004688a) cell_cale_week_pane_ParamLimits

0x260e,	// (0x0004688a) cell_cale_week_pane

0x264e,	// (0x000468ca) cale_week_day_heading_pane_t1

0x2662,	// (0x000468de) cale_week_day_heading_pane_t2

0x2676,	// (0x000468f2) cale_week_day_heading_pane_t3

0x268a,	// (0x00046906) cale_week_day_heading_pane_t4

0x269e,	// (0x0004691a) cale_week_day_heading_pane_t5

0x26b2,	// (0x0004692e) cale_week_day_heading_pane_t6

0x26c8,	// (0x00046944) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00053459) cale_week_day_heading_pane_t

0x26dc,	// (0x00046958) bg_cale_side_pane

0x26ea,	// (0x00046966) cale_week_time_pane_t1

0x2702,	// (0x0004697e) cale_week_time_pane_t2

0x271a,	// (0x00046996) cale_week_time_pane_t3

0x2732,	// (0x000469ae) cale_week_time_pane_t4

0x274a,	// (0x000469c6) cale_week_time_pane_t5

0x2762,	// (0x000469de) cale_week_time_pane_t6

0x277a,	// (0x000469f6) cale_week_time_pane_t7

0x2792,	// (0x00046a0e) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00053468) cale_week_time_pane_t

0x27aa,	// (0x00046a26) cell_cale_week_pane_g2

0x27c3,	// (0x00046a3f) cell_cale_week_pane_g3_ParamLimits

0x27c3,	// (0x00046a3f) cell_cale_week_pane_g3

0x27db,	// (0x00046a57) grid_highlight_pane_cp07

0x27e3,	// (0x00046a5f) listscroll_gms_pane

0x27ed,	// (0x00046a69) grid_gms_pane

0x27f6,	// (0x00046a72) listscroll_gms_pane_g1

0x27fe,	// (0x00046a7a) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00053479) listscroll_gms_pane_g

0x2806,	// (0x00046a82) scroll_pane_cp010

0x2811,	// (0x00046a8d) cell_gms_pane_ParamLimits

0x2811,	// (0x00046a8d) cell_gms_pane

0x2823,	// (0x00046a9f) cell_gms_pane_g1

0x282b,	// (0x00046aa7) cell_gms_pane_g2

0x241a,	// (0x00046696) cell_gms_pane_g3

0x2833,	// (0x00046aaf) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0005347e) cell_gms_pane_g

0x283c,	// (0x00046ab8) grid_highlight_pane_cp09

0x4990,	// (0x00048c0c) phob_pre_status_pane_g1

0x4998,	// (0x00048c14) phob_pre_status_pane_g2

0x49a0,	// (0x00048c1c) phob_pre_status_pane_g3

0x49a8,	// (0x00048c24) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0005386d) phob_pre_status_pane_g

0x49ba,	// (0x00048c36) phob_pre_status_pane_t1

0x49c8,	// (0x00048c44) phob_pre_status_pane_t2

0x49d8,	// (0x00048c54) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00053878) phob_pre_status_pane_t

0x1b7a,	// (0x00045df6) bg_list_pane_cp05

0x2844,	// (0x00046ac0) grid_vorec_pane

0xa84d,	// (0x0004eac9) vorec_t1

0xa85b,	// (0x0004ead7) vorec_t2

0xa869,	// (0x0004eae5) vorec_t3

0xa877,	// (0x0004eaf3) vorec_t4

0xa885,	// (0x0004eb01) vorec_t5

0xa893,	// (0x0004eb0f) vorec_t6

0x0006,

0xf20b,	// (0x00053487) vorec_t

0xa8af,	// (0x0004eb2b) wait_bar_pane_cp01

0x284e,	// (0x00046aca) cell_vorec_pane_ParamLimits

0x284e,	// (0x00046aca) cell_vorec_pane

0x2861,	// (0x00046add) cell_vorec_pane_g1

0x1b7a,	// (0x00045df6) grid_highlight_pane_cp05

0x2883,	// (0x00046aff) cams_zoom_pane

0x2892,	// (0x00046b0e) image_vga_pane

0x28ac,	// (0x00046b28) main_camera_pane_g1

0x28be,	// (0x00046b3a) main_camera_pane_g2

0x28d0,	// (0x00046b4c) main_camera_pane_g3

0x28e2,	// (0x00046b5e) main_camera_pane_g4

0x28f4,	// (0x00046b70) main_camera_pane_g5

0x2906,	// (0x00046b82) main_camera_pane_g6

0x2918,	// (0x00046b94) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00053496) main_camera_pane_g

0x2936,	// (0x00046bb2) main_camera_pane_t1

0x294c,	// (0x00046bc8) main_camera_pane_t2

0x0001,

0xf22b,	// (0x000534a7) main_camera_pane_t

0x2988,	// (0x00046c04) cams_zoom_pane_cp_ParamLimits

0x2988,	// (0x00046c04) cams_zoom_pane_cp

0x29b0,	// (0x00046c2c) image_cif_pane_ParamLimits

0x29b0,	// (0x00046c2c) image_cif_pane

0x29eb,	// (0x00046c67) image_subqcif_pane

0x29f3,	// (0x00046c6f) main_video_pane_g1_ParamLimits

0x29f3,	// (0x00046c6f) main_video_pane_g1

0x2a17,	// (0x00046c93) main_video_pane_g2_ParamLimits

0x2a17,	// (0x00046c93) main_video_pane_g2

0x2a4d,	// (0x00046cc9) main_video_pane_g3_ParamLimits

0x2a4d,	// (0x00046cc9) main_video_pane_g3

0x2a7d,	// (0x00046cf9) main_video_pane_g4_ParamLimits

0x2a7d,	// (0x00046cf9) main_video_pane_g4

0x2aad,	// (0x00046d29) main_video_pane_g5_ParamLimits

0x2aad,	// (0x00046d29) main_video_pane_g5

0x2ac7,	// (0x00046d43) main_video_pane_g6_ParamLimits

0x2ac7,	// (0x00046d43) main_video_pane_g6

0x0006,

0xf230,	// (0x000534ac) main_video_pane_g_ParamLimits

0xf230,	// (0x000534ac) main_video_pane_g

0x2af2,	// (0x00046d6e) main_video_pane_t1_ParamLimits

0x2af2,	// (0x00046d6e) main_video_pane_t1

0x2b3b,	// (0x00046db7) cams_zoom_pane_g1

0x2b44,	// (0x00046dc0) cams_zoom_pane_g2

0x2b4d,	// (0x00046dc9) cams_zoom_pane_g3

0x2b56,	// (0x00046dd2) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x000534bb) cams_zoom_pane_g

0x2b73,	// (0x00046def) grid_cams_pane

0x2b8d,	// (0x00046e09) linegrid_cams_pane

0x2ba0,	// (0x00046e1c) cell_cams_pane_ParamLimits

0x2ba0,	// (0x00046e1c) cell_cams_pane

0x2bc0,	// (0x00046e3c) cams_burst_image_pane

0x2bc8,	// (0x00046e44) cell_cams_pane_g1

0x1b7a,	// (0x00045df6) grid_highlight_pane_cp03

0x2284,	// (0x00046500) mp_bg_pane_g1

0x1b7a,	// (0x00045df6) bg_list_pane_cp03

0xc6c4,	// (0x00050940) bg_mp_pane

0xc6cc,	// (0x00050948) grid_mp_pane

0xc6d4,	// (0x00050950) media_player_g1

0xc6dc,	// (0x00050958) media_player_t1

0xc6ea,	// (0x00050966) media_player_t2

0xc6f8,	// (0x00050974) media_player_t3

0xc706,	// (0x00050982) media_player_t4

0xc714,	// (0x00050990) media_player_t5

0xc722,	// (0x0005099e) media_player_t6

0xc730,	// (0x000509ac) media_player_t7

0x0006,

0xf5db,	// (0x00053857) media_player_t

0xc73e,	// (0x000509ba) wait_bar_pane_cp02

0xf5c0,	// (0x0005383c) main_usb_pane_t

0x4987,	// (0x00048c03) cell_mp_pane

0x2284,	// (0x00046500) cell_mp_pane_g1

0x1b7a,	// (0x00045df6) grid_highlight_pane_cp06

0xa957,	// (0x0004ebd3) grid_skin_colour_pane

0xa95f,	// (0x0004ebdb) list_highlight_pane_cp03

0x2bd0,	// (0x00046e4c) skin_g1

0xa967,	// (0x0004ebe3) skin_t1

0xa976,	// (0x0004ebf2) skin_t2

0x0001,

0xf274,	// (0x000534f0) skin_t

0x2bd8,	// (0x00046e54) cell_skin_colour_pane_ParamLimits

0x2bd8,	// (0x00046e54) cell_skin_colour_pane

0xa984,	// (0x0004ec00) cell_skin_colour_pane_g1

0x2c51,	// (0x00046ecd) call_video_g1_ParamLimits

0x2c51,	// (0x00046ecd) call_video_g1

0x2c6d,	// (0x00046ee9) call_video_g2_ParamLimits

0x2c6d,	// (0x00046ee9) call_video_g2

0x0001,

0xf279,	// (0x000534f5) call_video_g_ParamLimits

0xf279,	// (0x000534f5) call_video_g

0x2cbf,	// (0x00046f3b) call_video_uplink_pane_cp1_ParamLimits

0x2cbf,	// (0x00046f3b) call_video_uplink_pane_cp1

0xa996,	// (0x0004ec12) call_video_uplink_pane_cp2

0x2d5e,	// (0x00046fda) video_down_crop_pane_ParamLimits

0x2d5e,	// (0x00046fda) video_down_crop_pane

0x2e47,	// (0x000470c3) video_down_pane_ParamLimits

0x2e47,	// (0x000470c3) video_down_pane

0xa99e,	// (0x0004ec1a) video_down_subqcif_pane_ParamLimits

0xa99e,	// (0x0004ec1a) video_down_subqcif_pane

0xa9b6,	// (0x0004ec32) video_down_subqcif_pane_cp_ParamLimits

0xa9b6,	// (0x0004ec32) video_down_subqcif_pane_cp

0xa9dc,	// (0x0004ec58) im_reading_pane_ParamLimits

0xa9dc,	// (0x0004ec58) im_reading_pane

0x2f55,	// (0x000471d1) im_writing_pane_ParamLimits

0x2f55,	// (0x000471d1) im_writing_pane

0x2f6b,	// (0x000471e7) im_reading_pane_t1

0xa9f6,	// (0x0004ec72) list_im_pane

0xaa07,	// (0x0004ec83) scroll_pane_cp07

0x2fa7,	// (0x00047223) im_writing_pane_t1_ParamLimits

0x2fa7,	// (0x00047223) im_writing_pane_t1

0xaa20,	// (0x0004ec9c) im_writing_pane_t2_ParamLimits

0xaa20,	// (0x0004ec9c) im_writing_pane_t2

0x0001,

0xf283,	// (0x000534ff) im_writing_pane_t_ParamLimits

0xf283,	// (0x000534ff) im_writing_pane_t

0x1b7a,	// (0x00045df6) input_focus_pane_cp04

0x1b7a,	// (0x00045df6) input_focus_pane_cp05

0x2fbc,	// (0x00047238) list_im_single_pane_ParamLimits

0x2fbc,	// (0x00047238) list_im_single_pane

0x2fd2,	// (0x0004724e) list_single_im_pane_t1

0x4947,	// (0x00048bc3) blid_accuracy_pane

0x494f,	// (0x00048bcb) blid_compass_pane

0x4959,	// (0x00048bd5) main_location_t1

0x4969,	// (0x00048be5) main_location_t2

0x4979,	// (0x00048bf5) main_location_t3

0x0002,

0xf5ea,	// (0x00053866) main_location_t

0x1b7a,	// (0x00045df6) aid_levels_location

0x2284,	// (0x00046500) blid_accuracy_pane_g1

0x2284,	// (0x00046500) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00053561) blid_accuracy_pane_g

0xaa68,	// (0x0004ece4) wml_content_pane

0xaaa6,	// (0x0004ed22) wml_button_pane_ParamLimits

0xaaa6,	// (0x0004ed22) wml_button_pane

0x2fe1,	// (0x0004725d) wml_list_single_large_pane_ParamLimits

0x2fe1,	// (0x0004725d) wml_list_single_large_pane

0x2ff8,	// (0x00047274) wml_list_single_medium_pane_ParamLimits

0x2ff8,	// (0x00047274) wml_list_single_medium_pane

0x3010,	// (0x0004728c) wml_list_single_small_pane_ParamLimits

0x3010,	// (0x0004728c) wml_list_single_small_pane

0xaaba,	// (0x0004ed36) wml_selection_box_pane_ParamLimits

0xaaba,	// (0x0004ed36) wml_selection_box_pane

0xaacd,	// (0x0004ed49) wml_list_single_pane_t1

0xaadc,	// (0x0004ed58) wml_list_single_medium_pane_t1

0xaaeb,	// (0x0004ed67) wml_list_single_large_pane_t1

0xaafa,	// (0x0004ed76) input_focus_pane_cp02_ParamLimits

0xaafa,	// (0x0004ed76) input_focus_pane_cp02

0xab0d,	// (0x0004ed89) wml_selection_box_pane_g1

0xab16,	// (0x0004ed92) wml_selection_box_pane_t1_ParamLimits

0xab16,	// (0x0004ed92) wml_selection_box_pane_t1

0x1dd5,	// (0x00046051) bg_wml_button_pane_ParamLimits

0x1dd5,	// (0x00046051) bg_wml_button_pane

0xab2e,	// (0x0004edaa) wml_button_pane_g1

0xab36,	// (0x0004edb2) wml_button_pane_t1

0xab2e,	// (0x0004edaa) wml_button_bg_pane_g1

0xab46,	// (0x0004edc2) wml_button_bg_pane_g2

0xab4e,	// (0x0004edca) wml_button_bg_pane_g3

0xab56,	// (0x0004edd2) wml_button_bg_pane_g4

0xab5e,	// (0x0004edda) wml_button_bg_pane_g5

0xab66,	// (0x0004ede2) wml_button_bg_pane_g6

0xab6e,	// (0x0004edea) wml_button_bg_pane_g7

0xab76,	// (0x0004edf2) wml_button_bg_pane_g8

0xab7e,	// (0x0004edfa) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00053504) wml_button_bg_pane_g

0x302e,	// (0x000472aa) bg_list_pane_cp02

0xab86,	// (0x0004ee02) mce_header_pane_ParamLimits

0xab86,	// (0x0004ee02) mce_header_pane

0xab9c,	// (0x0004ee18) mce_icon_pane

0xab9c,	// (0x0004ee18) mce_image_pane

0xaba5,	// (0x0004ee21) mce_text_pane_ParamLimits

0xaba5,	// (0x0004ee21) mce_text_pane

0x3036,	// (0x000472b2) scroll_pane_cp03

0xaa9e,	// (0x0004ed1a) scroll_pane_cp04

0xabb8,	// (0x0004ee34) scroll_pane_cp05_ParamLimits

0xabb8,	// (0x0004ee34) scroll_pane_cp05

0x3040,	// (0x000472bc) mce_header_field_pane_ParamLimits

0x3040,	// (0x000472bc) mce_header_field_pane

0x3057,	// (0x000472d3) mce_header_field_pane_2_ParamLimits

0x3057,	// (0x000472d3) mce_header_field_pane_2

0x306d,	// (0x000472e9) mce_header_field_pane_3

0x3075,	// (0x000472f1) list_single_mce_message_pane_ParamLimits

0x3075,	// (0x000472f1) list_single_mce_message_pane

0x308d,	// (0x00047309) list_single_mce_smart_pane_ParamLimits

0x308d,	// (0x00047309) list_single_mce_smart_pane

0xabc4,	// (0x0004ee40) input_focus_pane_cp03

0xabcd,	// (0x0004ee49) list_header_data_pane

0x30b0,	// (0x0004732c) mce_header_field_pane_t1

0x30c0,	// (0x0004733c) list_single_mce_header_pane_ParamLimits

0x30c0,	// (0x0004733c) list_single_mce_header_pane

0xabd5,	// (0x0004ee51) list_single_mce_header_pane_t1

0xabe4,	// (0x0004ee60) list_single_mce_message_pane_g1

0xabec,	// (0x0004ee68) list_single_mce_message_pane_t1

0x30f2,	// (0x0004736e) bg_cale_heading_pane_cp01_ParamLimits

0x30f2,	// (0x0004736e) bg_cale_heading_pane_cp01

0xabfa,	// (0x0004ee76) bg_cale_pane_cp02_ParamLimits

0xabfa,	// (0x0004ee76) bg_cale_pane_cp02

0x3115,	// (0x00047391) cale_month_corner_pane

0x312b,	// (0x000473a7) cale_month_day_heading_pane_ParamLimits

0x312b,	// (0x000473a7) cale_month_day_heading_pane

0x315e,	// (0x000473da) cale_month_pane_g1_ParamLimits

0x315e,	// (0x000473da) cale_month_pane_g1

0x317a,	// (0x000473f6) cale_month_pane_g2_ParamLimits

0x317a,	// (0x000473f6) cale_month_pane_g2

0x3195,	// (0x00047411) cale_month_pane_g3_ParamLimits

0x3195,	// (0x00047411) cale_month_pane_g3

0x31c1,	// (0x0004743d) cale_month_pane_g4_ParamLimits

0x31c1,	// (0x0004743d) cale_month_pane_g4

0x31ed,	// (0x00047469) cale_month_pane_g5_ParamLimits

0x31ed,	// (0x00047469) cale_month_pane_g5

0x3221,	// (0x0004749d) cale_month_pane_g6_ParamLimits

0x3221,	// (0x0004749d) cale_month_pane_g6

0x325d,	// (0x000474d9) cale_month_pane_g7_ParamLimits

0x325d,	// (0x000474d9) cale_month_pane_g7

0x3299,	// (0x00047515) cale_month_pane_g8_ParamLimits

0x3299,	// (0x00047515) cale_month_pane_g8

0x32d5,	// (0x00047551) cale_month_pane_g9_ParamLimits

0x32d5,	// (0x00047551) cale_month_pane_g9

0x330f,	// (0x0004758b) cale_month_pane_g10_ParamLimits

0x330f,	// (0x0004758b) cale_month_pane_g10

0x3349,	// (0x000475c5) cale_month_pane_g11_ParamLimits

0x3349,	// (0x000475c5) cale_month_pane_g11

0x3383,	// (0x000475ff) cale_month_pane_g12_ParamLimits

0x3383,	// (0x000475ff) cale_month_pane_g12

0x33bd,	// (0x00047639) cale_month_pane_g13_ParamLimits

0x33bd,	// (0x00047639) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00053517) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00053517) cale_month_pane_g

0x33f7,	// (0x00047673) cale_month_week_pane

0x340a,	// (0x00047686) grid_cale_month_pane_ParamLimits

0x340a,	// (0x00047686) grid_cale_month_pane

0x3438,	// (0x000476b4) cale_month_day_heading_pane_t1

0x3496,	// (0x00047712) cale_month_day_heading_pane_t2

0x34fb,	// (0x00047777) cale_month_day_heading_pane_t3

0x3560,	// (0x000477dc) cale_month_day_heading_pane_t4

0x35c5,	// (0x00047841) cale_month_day_heading_pane_t5

0x363a,	// (0x000478b6) cale_month_day_heading_pane_t6

0x36af,	// (0x0004792b) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00053532) cale_month_day_heading_pane_t

0x26dc,	// (0x00046958) bg_cale_side_pane_cp01

0x3724,	// (0x000479a0) cale_month_week_pane_t1

0x373b,	// (0x000479b7) cale_month_week_pane_t2

0x3752,	// (0x000479ce) cale_month_week_pane_t3

0x3769,	// (0x000479e5) cale_month_week_pane_t4

0x3780,	// (0x000479fc) cale_month_week_pane_t5

0x3797,	// (0x00047a13) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00053541) cale_month_week_pane_t

0x37ae,	// (0x00047a2a) cell_cale_month_pane_ParamLimits

0x37ae,	// (0x00047a2a) cell_cale_month_pane

0xac59,	// (0x0004eed5) cell_cale_month_pane_g1

0x3884,	// (0x00047b00) cell_cale_month_pane_t1_ParamLimits

0x3884,	// (0x00047b00) cell_cale_month_pane_t1

0x27db,	// (0x00046a57) grid_highlight_pane_cp08

0x2284,	// (0x00046500) main_smil_g1

0x38a0,	// (0x00047b1c) smil_status_pane

0xac65,	// (0x0004eee1) smil_text_pane

0xc5dc,	// (0x00050858) bg_popup_call3_rect_pane_g8

0xc5e4,	// (0x00050860) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x000537fa) bg_popup_call3_rect_pane_g

0xc866,	// (0x00050ae2) smil_status_volume_pane_g1

0xac6f,	// (0x0004eeeb) smil_status_pane_t1

0xc899,	// (0x00050b15) volume_smil_pane

0xac86,	// (0x0004ef02) list_smil_text_pane

0x38b5,	// (0x00047b31) scroll_pane_cp011

0x38c0,	// (0x00047b3c) smil_text_list_pane_t1_ParamLimits

0x38c0,	// (0x00047b3c) smil_text_list_pane_t1

0xac90,	// (0x0004ef0c) aid_volume_smil_ParamLimits

0xac90,	// (0x0004ef0c) aid_volume_smil

0x2284,	// (0x00046500) smil_volume_pane_g1

0x2284,	// (0x00046500) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00053561) smil_volume_pane_g

0x215a,	// (0x000463d6) listscroll_cale_day_pane

0xacb2,	// (0x0004ef2e) bg_cale_pane

0xacca,	// (0x0004ef46) list_cale_pane

0xacdb,	// (0x0004ef57) scroll_pane_cp09

0xacec,	// (0x0004ef68) cale_bg_pane_g1

0xacf4,	// (0x0004ef70) cale_bg_pane_g2

0xacfc,	// (0x0004ef78) cale_bg_pane_g3

0xad04,	// (0x0004ef80) cale_bg_pane_g4

0xad0c,	// (0x0004ef88) cale_bg_pane_g5

0xad14,	// (0x0004ef90) cale_bg_pane_g6

0xad1c,	// (0x0004ef98) cale_bg_pane_g7

0xad24,	// (0x0004efa0) cale_bg_pane_g8

0xad2c,	// (0x0004efa8) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00053566) cale_bg_pane_g

0x3914,	// (0x00047b90) list_cale_time_pane_ParamLimits

0x3914,	// (0x00047b90) list_cale_time_pane

0x3929,	// (0x00047ba5) list_cale_time_pane_g1_ParamLimits

0x3929,	// (0x00047ba5) list_cale_time_pane_g1

0xad34,	// (0x0004efb0) list_cale_time_pane_g2_ParamLimits

0xad34,	// (0x0004efb0) list_cale_time_pane_g2

0x3935,	// (0x00047bb1) list_cale_time_pane_g3_ParamLimits

0x3935,	// (0x00047bb1) list_cale_time_pane_g3

0x3951,	// (0x00047bcd) list_cale_time_pane_g4_ParamLimits

0x3951,	// (0x00047bcd) list_cale_time_pane_g4

0x395f,	// (0x00047bdb) list_cale_time_pane_g5_ParamLimits

0x395f,	// (0x00047bdb) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00053579) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00053579) list_cale_time_pane_g

0x396d,	// (0x00047be9) list_cale_time_pane_t1_ParamLimits

0x396d,	// (0x00047be9) list_cale_time_pane_t1

0x3995,	// (0x00047c11) list_cale_time_pane_t2_ParamLimits

0x3995,	// (0x00047c11) list_cale_time_pane_t2

0x3c68,	// (0x00047ee4) aid_blid_cardinal_pane

0x3ca6,	// (0x00047f22) compass_pane_t4

0x39bd,	// (0x00047c39) list_cale_time_pane_t4_ParamLimits

0x39bd,	// (0x00047c39) list_cale_time_pane_t4

0x3cb4,	// (0x00047f30) compass_pane_t5

0x3cc2,	// (0x00047f3e) compass_pane_t6

0x3cd0,	// (0x00047f4c) compass_pane_t7

0xb252,	// (0x0004f4ce) navi_pane_cc_t1

0xb3b9,	// (0x0004f635) aid_phob_thumbnail_center_pane

0x435b,	// (0x000485d7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00053586) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00053586) list_cale_time_pane_t

0x17af,	// (0x00045a2b) bg_popup_window_pane_cp02_ParamLimits

0x17af,	// (0x00045a2b) bg_popup_window_pane_cp02

0xad4e,	// (0x0004efca) heading_pane_cp01_ParamLimits

0xad4e,	// (0x0004efca) heading_pane_cp01

0xad5a,	// (0x0004efd6) loc_req_pane_ParamLimits

0xad5a,	// (0x0004efd6) loc_req_pane

0xad6a,	// (0x0004efe6) loc_type_pane_ParamLimits

0xad6a,	// (0x0004efe6) loc_type_pane

0xad7c,	// (0x0004eff8) loc_type_pane_t1_ParamLimits

0xad7c,	// (0x0004eff8) loc_type_pane_t1

0xad8e,	// (0x0004f00a) loc_type_pane_t2_ParamLimits

0xad8e,	// (0x0004f00a) loc_type_pane_t2

0xada0,	// (0x0004f01c) loc_type_pane_t3_ParamLimits

0xada0,	// (0x0004f01c) loc_type_pane_t3

0x0002,

0xf311,	// (0x0005358d) loc_type_pane_t_ParamLimits

0xf311,	// (0x0005358d) loc_type_pane_t

0xadb2,	// (0x0004f02e) list_loc_req_pane

0xadbc,	// (0x0004f038) scroll_pane_cp012

0x39e5,	// (0x00047c61) list_single_loc_request_popup_menu_pane_ParamLimits

0x39e5,	// (0x00047c61) list_single_loc_request_popup_menu_pane

0xadc7,	// (0x0004f043) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xadc7,	// (0x0004f043) list_single_loc_request_popup_menu_pane_g1

0xadd3,	// (0x0004f04f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xadd3,	// (0x0004f04f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00053594) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00053594) list_single_loc_request_popup_menu_pane_g

0xaddf,	// (0x0004f05b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaddf,	// (0x0004f05b) list_single_loc_request_popup_menu_pane_t1

0x1dd5,	// (0x00046051) bg_popup_window_pane_cp03_ParamLimits

0x1dd5,	// (0x00046051) bg_popup_window_pane_cp03

0xadf5,	// (0x0004f071) heading_loc_req_pane_ParamLimits

0xadf5,	// (0x0004f071) heading_loc_req_pane

0x39f2,	// (0x00047c6e) popup_dyc_status_message_window_g1_ParamLimits

0x39f2,	// (0x00047c6e) popup_dyc_status_message_window_g1

0x3a06,	// (0x00047c82) popup_dyc_status_message_window_t1_ParamLimits

0x3a06,	// (0x00047c82) popup_dyc_status_message_window_t1

0x3a1b,	// (0x00047c97) popup_dyc_status_message_window_t2_ParamLimits

0x3a1b,	// (0x00047c97) popup_dyc_status_message_window_t2

0x3a30,	// (0x00047cac) popup_dyc_status_message_window_t3_ParamLimits

0x3a30,	// (0x00047cac) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00053599) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00053599) popup_dyc_status_message_window_t

0x1b7a,	// (0x00045df6) bg_heading_pane_cp01

0xae01,	// (0x0004f07d) heading_loc_req_pane_g1

0xae09,	// (0x0004f085) heading_loc_req_pane_g2

0xae11,	// (0x0004f08d) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x000535a0) heading_loc_req_pane_g

0xae19,	// (0x0004f095) heading_loc_req_pane_t1

0xae9d,	// (0x0004f119) bg_popup_sub_pane_cp01_ParamLimits

0xae9d,	// (0x0004f119) bg_popup_sub_pane_cp01

0xaeab,	// (0x0004f127) popup_cale_events_window_g1_ParamLimits

0xaeab,	// (0x0004f127) popup_cale_events_window_g1

0xaecb,	// (0x0004f147) popup_cale_events_window_g2_ParamLimits

0xaecb,	// (0x0004f147) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x000535d4) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x000535d4) popup_cale_events_window_g

0xaeeb,	// (0x0004f167) popup_cale_events_window_t1_ParamLimits

0xaeeb,	// (0x0004f167) popup_cale_events_window_t1

0xaefd,	// (0x0004f179) popup_cale_events_window_t2_ParamLimits

0xaefd,	// (0x0004f179) popup_cale_events_window_t2

0xaf3b,	// (0x0004f1b7) popup_cale_events_window_t3_ParamLimits

0xaf3b,	// (0x0004f1b7) popup_cale_events_window_t3

0xaf75,	// (0x0004f1f1) popup_cale_events_window_t4_ParamLimits

0xaf75,	// (0x0004f1f1) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x000535d9) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x000535d9) popup_cale_events_window_t

0x3a64,	// (0x00047ce0) call_type_pane

0x3a74,	// (0x00047cf0) popup_call_status_window_g1

0x3a88,	// (0x00047d04) popup_call_status_window_g2

0x3a9c,	// (0x00047d18) popup_call_status_window_g3

0x0002,

0xf366,	// (0x000535e2) popup_call_status_window_g

0xafab,	// (0x0004f227) call_type_pane_g1

0xafb4,	// (0x0004f230) call_type_pane_g2

0x0001,

0xf36d,	// (0x000535e9) call_type_pane_g

0x1b7a,	// (0x00045df6) bg_popup_sub_pane_cp02

0xafbd,	// (0x0004f239) listscroll_popup_wml_pane

0xafc5,	// (0x0004f241) list_wml_pane

0xafcf,	// (0x0004f24b) scroll_pane_cp013

0xafda,	// (0x0004f256) list_single_graphic_popup_wml_pane_ParamLimits

0xafda,	// (0x0004f256) list_single_graphic_popup_wml_pane

0x2284,	// (0x00046500) list_single_graphic_popup_wml_pane_g1

0xafee,	// (0x0004f26a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x000535ee) list_single_graphic_popup_wml_pane_g

0xaff6,	// (0x0004f272) list_single_graphic_popup_wml_pane_t1

0xb00c,	// (0x0004f288) aid_call_pane

0x1dcd,	// (0x00046049) popup_clock_analogue_window_g1

0x1dcd,	// (0x00046049) popup_clock_analogue_window_g2

0xb014,	// (0x0004f290) popup_clock_analogue_window_g3

0xb014,	// (0x0004f290) popup_clock_analogue_window_g4

0x2284,	// (0x00046500) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x000535f3) popup_clock_analogue_window_g

0xb01c,	// (0x0004f298) popup_clock_analogue_window_t1

0xb02a,	// (0x0004f2a6) clock_digital_number_pane_ParamLimits

0xb02a,	// (0x0004f2a6) clock_digital_number_pane

0xb036,	// (0x0004f2b2) clock_digital_number_pane_cp02_ParamLimits

0xb036,	// (0x0004f2b2) clock_digital_number_pane_cp02

0xb042,	// (0x0004f2be) clock_digital_number_pane_cp03_ParamLimits

0xb042,	// (0x0004f2be) clock_digital_number_pane_cp03

0xb04e,	// (0x0004f2ca) clock_digital_number_pane_cp04_ParamLimits

0xb04e,	// (0x0004f2ca) clock_digital_number_pane_cp04

0xb05a,	// (0x0004f2d6) clock_digital_separator_pane_ParamLimits

0xb05a,	// (0x0004f2d6) clock_digital_separator_pane

0xb066,	// (0x0004f2e2) popup_clock_digital_window_t1

0x2284,	// (0x00046500) clock_digital_number_pane_g1

0x2284,	// (0x00046500) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00053561) clock_digital_number_pane_g

0x2284,	// (0x00046500) clock_digital_separator_pane_g1

0x2284,	// (0x00046500) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00053561) clock_digital_separator_pane_g

0x1b7a,	// (0x00045df6) bg_popup_window_pane_cp04

0xb083,	// (0x0004f2ff) heading_pane_cp03

0xb08b,	// (0x0004f307) listscroll_popup_gms_pane

0xb093,	// (0x0004f30f) grid_large_graphic_popup_pane

0xb09d,	// (0x0004f319) listscroll_popup_gms_pane_g1

0xb0a5,	// (0x0004f321) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x000535fe) listscroll_popup_gms_pane_g

0xaa9e,	// (0x0004ed1a) scroll_pane_cp014

0xb0ad,	// (0x0004f329) cell_large_graphic_popup_pane_ParamLimits

0xb0ad,	// (0x0004f329) cell_large_graphic_popup_pane

0xb0c5,	// (0x0004f341) cell_large_graphic_popup_pane_g1_ParamLimits

0xb0c5,	// (0x0004f341) cell_large_graphic_popup_pane_g1

0xb0d1,	// (0x0004f34d) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0d1,	// (0x0004f34d) cell_large_graphic_popup_pane_g2

0xb0dd,	// (0x0004f359) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0dd,	// (0x0004f359) cell_large_graphic_popup_pane_g3

0xb0ea,	// (0x0004f366) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0ea,	// (0x0004f366) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00053603) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00053603) cell_large_graphic_popup_pane_g

0xb0fa,	// (0x0004f376) grid_highlight_pane_cp010

0x2284,	// (0x00046500) bg_popup_call_pane_g1

0xb104,	// (0x0004f380) list_single_graphic_popup_conf_pane_ParamLimits

0xb104,	// (0x0004f380) list_single_graphic_popup_conf_pane

0xb116,	// (0x0004f392) list_highlight_pane_cp01

0xb11f,	// (0x0004f39b) list_single_graphic_popup_conf_pane_g1

0xb127,	// (0x0004f3a3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0005360c) list_single_graphic_popup_conf_pane_g

0xb12f,	// (0x0004f3ab) list_single_graphic_popup_conf_pane_t1

0xb13d,	// (0x0004f3b9) linegrid_cams_pane_g1

0x3aac,	// (0x00047d28) linegrid_cams_pane_g2

0x241a,	// (0x00046696) linegrid_cams_pane_g3

0xb146,	// (0x0004f3c2) linegrid_cams_pane_g4

0x3ab5,	// (0x00047d31) linegrid_cams_pane_g5

0x3abe,	// (0x00047d3a) linegrid_cams_pane_g6

0x2833,	// (0x00046aaf) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00053611) linegrid_cams_pane_g

0xb14f,	// (0x0004f3cb) popup_clock_analogue_window

0xb14f,	// (0x0004f3cb) popup_clock_digital_window

0x1b7a,	// (0x00045df6) popup_phob_thumbnail_window

0x2284,	// (0x00046500) call_video_uplink_pane_g1

0xb158,	// (0x0004f3d4) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00053620) call_video_uplink_pane_g

0x27db,	// (0x00046a57) video_uplink_pane

0xb160,	// (0x0004f3dc) mce_image_pane_g1

0x3ac9,	// (0x00047d45) mce_image_pane_g2

0x3ad1,	// (0x00047d4d) mce_image_pane_g3

0x3ad9,	// (0x00047d55) mce_image_pane_g4

0x3ae1,	// (0x00047d5d) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00053625) mce_image_pane_g

0xb16a,	// (0x0004f3e6) control_top_pane_stacon_cp01_ParamLimits

0xb16a,	// (0x0004f3e6) control_top_pane_stacon_cp01

0xb17e,	// (0x0004f3fa) uni_indicator_pane_stacon_cp01_ParamLimits

0xb17e,	// (0x0004f3fa) uni_indicator_pane_stacon_cp01

0xb18f,	// (0x0004f40b) bg_popup_sub_pane_cp03

0x3ae9,	// (0x00047d65) chi_dic_find_pane

0x3af1,	// (0x00047d6d) listscroll_chi_dic_pane

0x3afa,	// (0x00047d76) main_pane_chidic_g1

0x3b0d,	// (0x00047d89) chi_dic_find_pane_t1

0xb199,	// (0x0004f415) find_chidic_pane

0xb1a2,	// (0x0004f41e) chi_dic_list_pane_ParamLimits

0xb1a2,	// (0x0004f41e) chi_dic_list_pane

0xb1b3,	// (0x0004f42f) scroll_pane_cp020

0x3b1b,	// (0x00047d97) find_chidic_pane_t1

0x1b7a,	// (0x00045df6) input_focus_pane_cp06

0x3b2a,	// (0x00047da6) list_chi_dic_pane_ParamLimits

0x3b2a,	// (0x00047da6) list_chi_dic_pane

0xb1bb,	// (0x0004f437) list_chi_dic_pane_t1_ParamLimits

0xb1bb,	// (0x0004f437) list_chi_dic_pane_t1

0x1b7a,	// (0x00045df6) list_highlight_pane_cp020

0xb1ce,	// (0x0004f44a) bg_cale_heading_pane_g1

0x3b3e,	// (0x00047dba) bg_cale_heading_pane_g2

0x3b46,	// (0x00047dc2) bg_cale_heading_pane_g3

0x3b4e,	// (0x00047dca) bg_cale_heading_pane_g4

0x3b58,	// (0x00047dd4) bg_cale_heading_pane_g5

0x3b62,	// (0x00047dde) bg_cale_heading_pane_g6

0x3b6a,	// (0x00047de6) bg_cale_heading_pane_g7

0x3b72,	// (0x00047dee) bg_cale_heading_pane_g8

0x3b7c,	// (0x00047df8) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x00053630) bg_cale_heading_pane_g

0xb1ce,	// (0x0004f44a) bg_cale_side_pane_g1

0x3b86,	// (0x00047e02) bg_cale_side_pane_g2

0x3b8e,	// (0x00047e0a) bg_cale_side_pane_g3

0x3b96,	// (0x00047e12) bg_cale_side_pane_g4

0x3b9e,	// (0x00047e1a) bg_cale_side_pane_g5

0x3ba6,	// (0x00047e22) bg_cale_side_pane_g6

0x3bae,	// (0x00047e2a) bg_cale_side_pane_g7

0x3bb6,	// (0x00047e32) bg_cale_side_pane_g8

0x3bbe,	// (0x00047e3a) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00053643) bg_cale_side_pane_g

0x3bc6,	// (0x00047e42) popup_call_status_window_ParamLimits

0x3bc6,	// (0x00047e42) popup_call_status_window

0xb1d6,	// (0x0004f452) stacon_top_pane

0xb1de,	// (0x0004f45a) status_pane_ParamLimits

0xb1de,	// (0x0004f45a) status_pane

0xb1f3,	// (0x0004f46f) status_small_pane

0xb1fb,	// (0x0004f477) control_pane

0x1b7a,	// (0x00045df6) stacon_bottom_pane

0xb203,	// (0x0004f47f) list_single_mce_smart_pane_t1_ParamLimits

0xb203,	// (0x0004f47f) list_single_mce_smart_pane_t1

0xb216,	// (0x0004f492) list_single_mce_smart_pane_t2_ParamLimits

0xb216,	// (0x0004f492) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00053656) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00053656) list_single_mce_smart_pane_t

0x3c0d,	// (0x00047e89) compass_pane

0x3c16,	// (0x00047e92) main_location2_pane_t1

0x3c2a,	// (0x00047ea6) main_location2_pane_t2

0x3c3e,	// (0x00047eba) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0005365b) main_location2_pane_t

0xb235,	// (0x0004f4b1) compass_pane_g1_ParamLimits

0xb235,	// (0x0004f4b1) compass_pane_g1

0x3c88,	// (0x00047f04) compass_pane_t1

0x3c97,	// (0x00047f13) compass_pane_t2

0x0005,

0xf3e8,	// (0x00053664) compass_pane_t

0x3cde,	// (0x00047f5a) text_secondary_cp61

0xb249,	// (0x0004f4c5) navi_pane_cams_g5

0xb26c,	// (0x0004f4e8) navi_pane_im_t1

0xb27a,	// (0x0004f4f6) navi_pane_mp_g1_ParamLimits

0xb27a,	// (0x0004f4f6) navi_pane_mp_g1

0xb28e,	// (0x0004f50a) navi_pane_mp_g2_ParamLimits

0xb28e,	// (0x0004f50a) navi_pane_mp_g2

0xb29a,	// (0x0004f516) navi_pane_mp_g3_ParamLimits

0xb29a,	// (0x0004f516) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00053678) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00053678) navi_pane_mp_g

0xb2a6,	// (0x0004f522) navi_pane_mp_t1

0xb2b4,	// (0x0004f530) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0005367f) navi_pane_mp_t

0xb2f0,	// (0x0004f56c) navi_pane_vt_g1

0xb2a6,	// (0x0004f522) navi_pane_vt_t1

0xb2f8,	// (0x0004f574) navi_slider_pane

0xb300,	// (0x0004f57c) zooming_pane

0xb308,	// (0x0004f584) navi_slider_pane_g1

0xb311,	// (0x0004f58d) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00053686) navi_slider_pane_g

0xb33e,	// (0x0004f5ba) aid_levels_zoom

0xb346,	// (0x0004f5c2) zooming_pane_g1

0xb34e,	// (0x0004f5ca) zooming_pane_g2

0xb34e,	// (0x0004f5ca) zooming_pane_g3

0x0002,

0xf419,	// (0x00053695) zooming_pane_g

0xb356,	// (0x0004f5d2) level_10_zoom

0xb35f,	// (0x0004f5db) level_11_zoom

0xb368,	// (0x0004f5e4) level_1_zoom

0xb371,	// (0x0004f5ed) level_2_zoom

0xb37a,	// (0x0004f5f6) level_3_zoom

0xb383,	// (0x0004f5ff) level_4_zoom

0xb38c,	// (0x0004f608) level_5_zoom

0xb395,	// (0x0004f611) level_6_zoom

0xb39e,	// (0x0004f61a) level_7_zoom

0xb3a7,	// (0x0004f623) level_8_zoom

0xb3b0,	// (0x0004f62c) level_9_zoom

0xb3c1,	// (0x0004f63d) popup_phob_thumbnail_window_g1

0xb3c9,	// (0x0004f645) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0005369c) popup_phob_thumbnail_window_g

0xc746,	// (0x000509c2) level_1_location

0xc74e,	// (0x000509ca) level_2_location

0xc756,	// (0x000509d2) level_3_location

0xc75e,	// (0x000509da) level_4_location

0xb300,	// (0x0004f57c) level_5_location

0x3e1d,	// (0x00048099) mce_icon_pane_g1

0x3e25,	// (0x000480a1) mce_icon_pane_g2

0x0001,

0xf425,	// (0x000536a1) mce_icon_pane_g

0x3e2d,	// (0x000480a9) main_mup_pane_g1_ParamLimits

0x3e2d,	// (0x000480a9) main_mup_pane_g1

0x3e43,	// (0x000480bf) main_mup_pane_g2_ParamLimits

0x3e43,	// (0x000480bf) main_mup_pane_g2

0x3e5b,	// (0x000480d7) main_mup_pane_g3_ParamLimits

0x3e5b,	// (0x000480d7) main_mup_pane_g3

0x3e73,	// (0x000480ef) main_mup_pane_g4_ParamLimits

0x3e73,	// (0x000480ef) main_mup_pane_g4

0x3e8b,	// (0x00048107) main_mup_pane_g5_ParamLimits

0x3e8b,	// (0x00048107) main_mup_pane_g5

0x3ea7,	// (0x00048123) main_mup_pane_g6_ParamLimits

0x3ea7,	// (0x00048123) main_mup_pane_g6

0x3ebf,	// (0x0004813b) main_mup_pane_g7_ParamLimits

0x3ebf,	// (0x0004813b) main_mup_pane_g7

0x3ed7,	// (0x00048153) main_mup_pane_g8_ParamLimits

0x3ed7,	// (0x00048153) main_mup_pane_g8

0x3eef,	// (0x0004816b) main_mup_pane_g9_ParamLimits

0x3eef,	// (0x0004816b) main_mup_pane_g9

0x3f09,	// (0x00048185) main_mup_pane_g10_ParamLimits

0x3f09,	// (0x00048185) main_mup_pane_g10

0x3f23,	// (0x0004819f) main_mup_pane_g11_ParamLimits

0x3f23,	// (0x0004819f) main_mup_pane_g11

0x3f37,	// (0x000481b3) main_mup_pane_g12_ParamLimits

0x3f37,	// (0x000481b3) main_mup_pane_g12

0x3f4d,	// (0x000481c9) main_mup_pane_g13_ParamLimits

0x3f4d,	// (0x000481c9) main_mup_pane_g13

0x000c,

0xf42a,	// (0x000536a6) main_mup_pane_g_ParamLimits

0xf42a,	// (0x000536a6) main_mup_pane_g

0x3f61,	// (0x000481dd) main_mup_pane_t1_ParamLimits

0x3f61,	// (0x000481dd) main_mup_pane_t1

0x3f7b,	// (0x000481f7) main_mup_pane_t2_ParamLimits

0x3f7b,	// (0x000481f7) main_mup_pane_t2

0x3f93,	// (0x0004820f) main_mup_pane_t3_ParamLimits

0x3f93,	// (0x0004820f) main_mup_pane_t3

0x3fab,	// (0x00048227) main_mup_pane_t4_ParamLimits

0x3fab,	// (0x00048227) main_mup_pane_t4

0x3fc9,	// (0x00048245) main_mup_pane_t5_ParamLimits

0x3fc9,	// (0x00048245) main_mup_pane_t5

0x3fde,	// (0x0004825a) main_mup_pane_t6_ParamLimits

0x3fde,	// (0x0004825a) main_mup_pane_t6

0x0005,

0xf445,	// (0x000536c1) main_mup_pane_t_ParamLimits

0xf445,	// (0x000536c1) main_mup_pane_t

0x3ff0,	// (0x0004826c) mup_progress_pane_ParamLimits

0x3ff0,	// (0x0004826c) mup_progress_pane

0x3ffc,	// (0x00048278) mup_visualizer_pane_ParamLimits

0x3ffc,	// (0x00048278) mup_visualizer_pane

0x4030,	// (0x000482ac) mup_volume_pane_ParamLimits

0x4030,	// (0x000482ac) mup_volume_pane

0xb3d1,	// (0x0004f64d) mup_visualizer_pane_g1_ParamLimits

0xb3d1,	// (0x0004f64d) mup_visualizer_pane_g1

0xb3d1,	// (0x0004f64d) mup_visualizer_pane_g2_ParamLimits

0xb3d1,	// (0x0004f64d) mup_visualizer_pane_g2

0xb235,	// (0x0004f4b1) mup_visualizer_pane_g3_ParamLimits

0xb235,	// (0x0004f4b1) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x000536ce) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x000536ce) mup_visualizer_pane_g

0x2284,	// (0x00046500) mup_volume_pane_g1

0xb3e7,	// (0x0004f663) mup_volume_pane_g2

0x0001,

0xf459,	// (0x000536d5) mup_volume_pane_g

0x2284,	// (0x00046500) mup_progress_pane_g1

0xb3f0,	// (0x0004f66c) mup_progress_pane_g2

0xb3f9,	// (0x0004f675) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x000536da) mup_progress_pane_g

0x1b7a,	// (0x00045df6) bg_popup_window_pane_cp05

0xb402,	// (0x0004f67e) heading_pane_cp02_ParamLimits

0xb402,	// (0x0004f67e) heading_pane_cp02

0xb41c,	// (0x0004f698) list_popup_blid_pane

0xb424,	// (0x0004f6a0) list_blid_sat_info_pane_ParamLimits

0xb424,	// (0x0004f6a0) list_blid_sat_info_pane

0xb437,	// (0x0004f6b3) list_blid_sat_info_pane_g1

0xb43f,	// (0x0004f6bb) list_blid_sat_info_pane_t1

0x4156,	// (0x000483d2) mup_equalizer_pane_ParamLimits

0x4156,	// (0x000483d2) mup_equalizer_pane

0x416f,	// (0x000483eb) mup_equalizer_pane_cp1_ParamLimits

0x416f,	// (0x000483eb) mup_equalizer_pane_cp1

0x418c,	// (0x00048408) mup_equalizer_pane_cp2_ParamLimits

0x418c,	// (0x00048408) mup_equalizer_pane_cp2

0x41a9,	// (0x00048425) mup_equalizer_pane_cp3_ParamLimits

0x41a9,	// (0x00048425) mup_equalizer_pane_cp3

0x41ca,	// (0x00048446) mup_equalizer_pane_cp4_ParamLimits

0x41ca,	// (0x00048446) mup_equalizer_pane_cp4

0x41eb,	// (0x00048467) mup_equalizer_pane_cp5

0x41ff,	// (0x0004847b) mup_equalizer_pane_cp6

0x4213,	// (0x0004848f) mup_equalizer_pane_cp7

0xc664,	// (0x000508e0) bg_popup_call_poc_act_pane_g9

0xc66c,	// (0x000508e8) bg_popup_call_poc_act_pane_g10

0xc674,	// (0x000508f0) bg_popup_call_poc_act_pane_g11

0x000a,

0x1dd5,	// (0x00046051) mup_scale_pane

0x2284,	// (0x00046500) mup_scale_pane_g1

0xb44d,	// (0x0004f6c9) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x000536f6) mup_scale_pane_g

0xb471,	// (0x0004f6ed) msg_data_pane

0xb479,	// (0x0004f6f5) scroll_pane_cp017

0x0a85,	// (0x00044d01) bg_list_pane_cp04_ParamLimits

0x0a85,	// (0x00044d01) bg_list_pane_cp04

0xb481,	// (0x0004f6fd) msg_data_pane_g1

0x4239,	// (0x000484b5) msg_data_pane_g2

0x3ad1,	// (0x00047d4d) msg_data_pane_g3

0x4241,	// (0x000484bd) msg_data_pane_g4

0x4249,	// (0x000484c5) msg_data_pane_g5

0x4251,	// (0x000484cd) msg_data_pane_g6

0x4259,	// (0x000484d5) msg_data_pane_g7

0x0006,

0xf489,	// (0x00053705) msg_data_pane_g

0x0aa5,	// (0x00044d21) msg_text_pane_ParamLimits

0x0aa5,	// (0x00044d21) msg_text_pane

0x4261,	// (0x000484dd) qrid_highlight_pane_cp011_ParamLimits

0x4261,	// (0x000484dd) qrid_highlight_pane_cp011

0x1b7a,	// (0x00045df6) msg_body_pane

0x1b7a,	// (0x00045df6) msg_header_pane

0xb492,	// (0x0004f70e) input_focus_pane_cp07

0x0ade,	// (0x00044d5a) msg_header_pane_t1_ParamLimits

0x0ade,	// (0x00044d5a) msg_header_pane_t1

0xb4a7,	// (0x0004f723) msg_header_pane_t2_ParamLimits

0xb4a7,	// (0x0004f723) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00053719) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00053719) msg_header_pane_t

0xb4b9,	// (0x0004f735) msg_body_pane_g1

0x0af2,	// (0x00044d6e) msg_body_pane_t1_ParamLimits

0x0af2,	// (0x00044d6e) msg_body_pane_t1

0xb4c1,	// (0x0004f73d) msg_body_pane_t2_ParamLimits

0xb4c1,	// (0x0004f73d) msg_body_pane_t2

0xb4d3,	// (0x0004f74f) msg_body_pane_t3_ParamLimits

0xb4d3,	// (0x0004f74f) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0005371e) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0005371e) msg_body_pane_t

0x42b1,	// (0x0004852d) main_viewer_pane_g1_ParamLimits

0x42b1,	// (0x0004852d) main_viewer_pane_g1

0x42bf,	// (0x0004853b) main_viewer_pane_g2_ParamLimits

0x42bf,	// (0x0004853b) main_viewer_pane_g2

0x42cd,	// (0x00048549) main_viewer_pane_g3_ParamLimits

0x42cd,	// (0x00048549) main_viewer_pane_g3

0x42dc,	// (0x00048558) main_viewer_pane_g4_ParamLimits

0x42dc,	// (0x00048558) main_viewer_pane_g4

0xb4fd,	// (0x0004f779) main_viewer_pane_g5_ParamLimits

0xb4fd,	// (0x0004f779) main_viewer_pane_g5

0xb4fd,	// (0x0004f779) main_viewer_pane_g7_ParamLimits

0xb4fd,	// (0x0004f779) main_viewer_pane_g7

0xb50f,	// (0x0004f78b) main_viewer_pane_g8_ParamLimits

0xb50f,	// (0x0004f78b) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0005372e) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0005372e) main_viewer_pane_g

0xb527,	// (0x0004f7a3) viewer_content_pane_ParamLimits

0xb527,	// (0x0004f7a3) viewer_content_pane

0x4318,	// (0x00048594) main_postcard_pane_g1_ParamLimits

0x4318,	// (0x00048594) main_postcard_pane_g1

0x432e,	// (0x000485aa) main_postcard_pane_g2_ParamLimits

0x432e,	// (0x000485aa) main_postcard_pane_g2

0x4344,	// (0x000485c0) main_postcard_pane_g3_ParamLimits

0x4344,	// (0x000485c0) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0005373f) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0005373f) main_postcard_pane_g

0x435b,	// (0x000485d7) main_postcard_pane_g4

0xc879,	// (0x00050af5) smil_status_volume_pane_g2

0x439e,	// (0x0004861a) postcard_pane_ParamLimits

0x439e,	// (0x0004861a) postcard_pane

0xb535,	// (0x0004f7b1) postcard_pane_g1_ParamLimits

0xb535,	// (0x0004f7b1) postcard_pane_g1

0x43e0,	// (0x0004865c) postcard_pane_g2_ParamLimits

0x43e0,	// (0x0004865c) postcard_pane_g2

0x43ec,	// (0x00048668) postcard_pane_g3_ParamLimits

0x43ec,	// (0x00048668) postcard_pane_g3

0xb543,	// (0x0004f7bf) postcard_pane_g4_ParamLimits

0xb543,	// (0x0004f7bf) postcard_pane_g4

0x43f8,	// (0x00048674) postcard_pane_g5_ParamLimits

0x43f8,	// (0x00048674) postcard_pane_g5

0x440d,	// (0x00048689) postcard_pane_g6_ParamLimits

0x440d,	// (0x00048689) postcard_pane_g6

0xb535,	// (0x0004f7b1) postcard_pane_g7_ParamLimits

0xb535,	// (0x0004f7b1) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0005374c) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0005374c) postcard_pane_g

0x4421,	// (0x0004869d) main_mp2_pane_g1_ParamLimits

0x4421,	// (0x0004869d) main_mp2_pane_g1

0x442d,	// (0x000486a9) main_mp2_pane_g2_ParamLimits

0x442d,	// (0x000486a9) main_mp2_pane_g2

0x4439,	// (0x000486b5) main_mp2_pane_g3_ParamLimits

0x4439,	// (0x000486b5) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0005375b) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0005375b) main_mp2_pane_g

0x4445,	// (0x000486c1) main_mp2_pane_t1_ParamLimits

0x4445,	// (0x000486c1) main_mp2_pane_t1

0x445a,	// (0x000486d6) main_mp2_pane_t2_ParamLimits

0x445a,	// (0x000486d6) main_mp2_pane_t2

0x446c,	// (0x000486e8) main_mp2_pane_t3_ParamLimits

0x446c,	// (0x000486e8) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00053762) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00053762) main_mp2_pane_t

0xb551,	// (0x0004f7cd) pec_content_pane_ParamLimits

0xb551,	// (0x0004f7cd) pec_content_pane

0xaa9e,	// (0x0004ed1a) scroll_pane_cp015

0xb563,	// (0x0004f7df) pec_attribute_pane_ParamLimits

0xb563,	// (0x0004f7df) pec_attribute_pane

0x447e,	// (0x000486fa) pec_content_pane_g1_ParamLimits

0x447e,	// (0x000486fa) pec_content_pane_g1

0xb573,	// (0x0004f7ef) pec_content_pane_t1_ParamLimits

0xb573,	// (0x0004f7ef) pec_content_pane_t1

0xb585,	// (0x0004f801) pec_content_pane_t2_ParamLimits

0xb585,	// (0x0004f801) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00053769) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00053769) pec_content_pane_t

0x448c,	// (0x00048708) list_single_graphic_pane_cp01_ParamLimits

0x448c,	// (0x00048708) list_single_graphic_pane_cp01

0x1dd5,	// (0x00046051) bg_popup_sub_pane_cp04

0xb597,	// (0x0004f813) popup_mup_playback_window_g1

0xb5a3,	// (0x0004f81f) popup_mup_playback_window_t1

0xb5b8,	// (0x0004f834) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0005376e) popup_mup_playback_window_t

0xb5ef,	// (0x0004f86b) main_image_pane_g1_ParamLimits

0xb5ef,	// (0x0004f86b) main_image_pane_g1

0xb632,	// (0x0004f8ae) scroll_pane_cp018_ParamLimits

0xb632,	// (0x0004f8ae) scroll_pane_cp018

0xb64a,	// (0x0004f8c6) scroll_pane_cp016_ParamLimits

0xb64a,	// (0x0004f8c6) scroll_pane_cp016

0x455c,	// (0x000487d8) smil2_image_pane_ParamLimits

0x455c,	// (0x000487d8) smil2_image_pane

0x4590,	// (0x0004880c) smil2_root_pane_ParamLimits

0x4590,	// (0x0004880c) smil2_root_pane

0x45c8,	// (0x00048844) smil2_text_pane_ParamLimits

0x45c8,	// (0x00048844) smil2_text_pane

0x1b7a,	// (0x00045df6) bg_list_pane_cp06

0xb686,	// (0x0004f902) grid_radio_pane

0x1b7a,	// (0x00045df6) bg_popup_window_pane_cp06

0xb68e,	// (0x0004f90a) main_fmradio_pane_t1

0xb083,	// (0x0004f2ff) heading_pane_cp04

0xb69c,	// (0x0004f918) main_fmradio_pane_t2

0xc67c,	// (0x000508f8) popup_cale_lunar_info_window_g1

0xb6aa,	// (0x0004f926) main_fmradio_pane_t3

0xc684,	// (0x00050900) popup_cale_lunar_info_window_g2

0xb6b8,	// (0x0004f934) main_fmradio_pane_t4

0x0001,

0xb6c6,	// (0x0004f942) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00053849) popup_cale_lunar_info_window_g

0xf507,	// (0x00053783) main_fmradio_pane_t

0xb6d4,	// (0x0004f950) wait_bar_pane_cp03

0xb6dc,	// (0x0004f958) cell_fmradio_pane_ParamLimits

0xb6dc,	// (0x0004f958) cell_fmradio_pane

0xb535,	// (0x0004f7b1) cell_fmradio_pane_g1_ParamLimits

0xb535,	// (0x0004f7b1) cell_fmradio_pane_g1

0x1b7a,	// (0x00045df6) grid_highlight_pane_cp011

0xb6ef,	// (0x0004f96b) poc_content_pane_ParamLimits

0xb6ef,	// (0x0004f96b) poc_content_pane

0xb701,	// (0x0004f97d) scroll_pane_cp019

0x4648,	// (0x000488c4) popup_call_poc_act_window_ParamLimits

0x4648,	// (0x000488c4) popup_call_poc_act_window

0x466c,	// (0x000488e8) popup_call_poc_inact_window_ParamLimits

0x466c,	// (0x000488e8) popup_call_poc_inact_window

0xf5a4,	// (0x00053820) bg_popup_call_poc_act_pane_g

0xc5ec,	// (0x00050868) bg_popup_call_poc_inact_pane_g1

0xc5f4,	// (0x00050870) bg_popup_call_poc_inact_pane_g2

0xb709,	// (0x0004f985) popup_call_poc_act_window_g2

0xc5fc,	// (0x00050878) bg_popup_call_poc_inact_pane_g3

0xc604,	// (0x00050880) bg_popup_call_poc_inact_pane_g4

0xc60c,	// (0x00050888) bg_popup_call_poc_inact_pane_g5

0xb711,	// (0x0004f98d) popup_call_poc_act_window_t1_ParamLimits

0xb711,	// (0x0004f98d) popup_call_poc_act_window_t1

0xb739,	// (0x0004f9b5) popup_call_poc_act_window_t2_ParamLimits

0xb739,	// (0x0004f9b5) popup_call_poc_act_window_t2

0xb761,	// (0x0004f9dd) popup_call_poc_act_window_t3_ParamLimits

0xb761,	// (0x0004f9dd) popup_call_poc_act_window_t3

0xb789,	// (0x0004fa05) popup_call_poc_act_window_t4_ParamLimits

0xb789,	// (0x0004fa05) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0005378e) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0005378e) popup_call_poc_act_window_t

0xc614,	// (0x00050890) bg_popup_call_poc_inact_pane_g6

0xc61c,	// (0x00050898) bg_popup_call_poc_inact_pane_g7

0xc624,	// (0x000508a0) bg_popup_call_poc_inact_pane_g8

0xb79b,	// (0x0004fa17) popup_call_poc_inact_window_g2

0xc62c,	// (0x000508a8) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0005380d) bg_popup_call_poc_inact_pane_g

0xb7a3,	// (0x0004fa1f) popup_call_poc_inact_window_t1_ParamLimits

0xb7a3,	// (0x0004fa1f) popup_call_poc_inact_window_t1

0xb7b8,	// (0x0004fa34) popup_call_poc_inact_window_t2_ParamLimits

0xb7b8,	// (0x0004fa34) popup_call_poc_inact_window_t2

0xb7cd,	// (0x0004fa49) popup_call_poc_inact_window_t3_ParamLimits

0xb7cd,	// (0x0004fa49) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00053797) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00053797) popup_call_poc_inact_window_t

0xc7ec,	// (0x00050a68) context_pane_ParamLimits

0x4e8e,	// (0x0004910a) signal_pane_ParamLimits

0xb300,	// (0x0004f57c) main_call2_pane

0xc7da,	// (0x00050a56) popup_phob_thumbnail2_window_ParamLimits

0xc7da,	// (0x00050a56) popup_phob_thumbnail2_window

0xb4e5,	// (0x0004f761) aid_hotspot_pointer_arrow_pane

0xb4ed,	// (0x0004f769) aid_hotspot_pointer_hand_pane

0x49b2,	// (0x00048c2e) phob_pre_status_pane_g5

0x2883,	// (0x00046aff) cams_zoom_pane_ParamLimits

0x2892,	// (0x00046b0e) image_vga_pane_ParamLimits

0x28ac,	// (0x00046b28) main_camera_pane_g1_ParamLimits

0x28be,	// (0x00046b3a) main_camera_pane_g2_ParamLimits

0x28d0,	// (0x00046b4c) main_camera_pane_g3_ParamLimits

0x28e2,	// (0x00046b5e) main_camera_pane_g4_ParamLimits

0x28f4,	// (0x00046b70) main_camera_pane_g5_ParamLimits

0x2906,	// (0x00046b82) main_camera_pane_g6_ParamLimits

0x2918,	// (0x00046b94) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00053496) main_camera_pane_g_ParamLimits

0x2936,	// (0x00046bb2) main_camera_pane_t1_ParamLimits

0x294c,	// (0x00046bc8) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x000534a7) main_camera_pane_t_ParamLimits

0x1dd5,	// (0x00046051) bg_popup_preview_window_pane_cp01_ParamLimits

0x1dd5,	// (0x00046051) bg_popup_preview_window_pane_cp01

0xb7e2,	// (0x0004fa5e) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e2,	// (0x0004fa5e) popup_phob_thumbnail2_window_g1

0x1b7a,	// (0x00045df6) call2_cli_visual_pane

0x46a0,	// (0x0004891c) popup_call2_audio_conf_window_ParamLimits

0x46a0,	// (0x0004891c) popup_call2_audio_conf_window

0x46c0,	// (0x0004893c) popup_call2_audio_first_window_ParamLimits

0x46c0,	// (0x0004893c) popup_call2_audio_first_window

0x4756,	// (0x000489d2) popup_call2_audio_in_window_ParamLimits

0x4756,	// (0x000489d2) popup_call2_audio_in_window

0x479e,	// (0x00048a1a) popup_call2_audio_out_window_ParamLimits

0x479e,	// (0x00048a1a) popup_call2_audio_out_window

0x4808,	// (0x00048a84) popup_call2_audio_second_window_ParamLimits

0x4808,	// (0x00048a84) popup_call2_audio_second_window

0x486e,	// (0x00048aea) popup_call2_audio_wait_window_ParamLimits

0x486e,	// (0x00048aea) popup_call2_audio_wait_window

0x1b7a,	// (0x00045df6) bg_popup_call2_act_pane_cp03

0x1db7,	// (0x00046033) list_conf_pane_cp

0xb7ee,	// (0x0004fa6a) popup_call2_audio_conf_window_t1

0xb7fc,	// (0x0004fa78) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fc,	// (0x0004fa78) list_single_graphic_popup_conf2_pane

0xb116,	// (0x0004f392) list_highlight_pane_cp04

0xb80f,	// (0x0004fa8b) list_single_graphic_popup_conf2_pane_g1

0xb127,	// (0x0004f3a3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0005379e) list_single_graphic_popup_conf2_pane_g

0xb819,	// (0x0004fa95) list_single_graphic_popup_conf2_pane_t1

0xb827,	// (0x0004faa3) bg_popup_call2_act_pane_cp01_ParamLimits

0xb827,	// (0x0004faa3) bg_popup_call2_act_pane_cp01

0xb8b1,	// (0x0004fb2d) call_type_pane_cp05_ParamLimits

0xb8b1,	// (0x0004fb2d) call_type_pane_cp05

0xb905,	// (0x0004fb81) popup_call2_audio_second_window_g1_ParamLimits

0xb905,	// (0x0004fb81) popup_call2_audio_second_window_g1

0xb959,	// (0x0004fbd5) popup_call2_audio_second_window_g2_ParamLimits

0xb959,	// (0x0004fbd5) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x000537a3) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x000537a3) popup_call2_audio_second_window_g

0xb9be,	// (0x0004fc3a) popup_call2_audio_second_window_t1_ParamLimits

0xb9be,	// (0x0004fc3a) popup_call2_audio_second_window_t1

0xba79,	// (0x0004fcf5) popup_call2_audio_second_window_t2_ParamLimits

0xba79,	// (0x0004fcf5) popup_call2_audio_second_window_t2

0xbacc,	// (0x0004fd48) popup_call2_audio_second_window_t3_ParamLimits

0xbacc,	// (0x0004fd48) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x000537aa) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x000537aa) popup_call2_audio_second_window_t

0x1b7a,	// (0x00045df6) bg_popup_call2_in_pane_cp02

0x1b84,	// (0x00045e00) call_type_pane_cp04

0x1b8c,	// (0x00045e08) popup_call2_audio_wait_window_g1

0x1b94,	// (0x00045e10) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00053383) popup_call2_audio_wait_window_g

0x1b9c,	// (0x00045e18) popup_call2_audio_wait_window_t3

0xbbbf,	// (0x0004fe3b) bg_popup_call2_act_pane_ParamLimits

0xbbbf,	// (0x0004fe3b) bg_popup_call2_act_pane

0xbc7f,	// (0x0004fefb) call_type_pane_cp03_ParamLimits

0xbc7f,	// (0x0004fefb) call_type_pane_cp03

0xbce3,	// (0x0004ff5f) popup_call2_audio_first_window_g1_ParamLimits

0xbce3,	// (0x0004ff5f) popup_call2_audio_first_window_g1

0xbd53,	// (0x0004ffcf) popup_call2_audio_first_window_g2_ParamLimits

0xbd53,	// (0x0004ffcf) popup_call2_audio_first_window_g2

0xb3d1,	// (0x0004f64d) popup_call2_audio_first_window_g3_ParamLimits

0xb3d1,	// (0x0004f64d) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x000537b3) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x000537b3) popup_call2_audio_first_window_g

0xbe31,	// (0x000500ad) popup_call2_audio_first_window_t1_ParamLimits

0xbe31,	// (0x000500ad) popup_call2_audio_first_window_t1

0xbf34,	// (0x000501b0) popup_call2_audio_first_window_t4_ParamLimits

0xbf34,	// (0x000501b0) popup_call2_audio_first_window_t4

0xc017,	// (0x00050293) popup_call2_audio_first_window_t5_ParamLimits

0xc017,	// (0x00050293) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x000537be) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x000537be) popup_call2_audio_first_window_t

0x1dcd,	// (0x00046049) bg_popup_call2_act_pane_g1

0xc68c,	// (0x00050908) popup_cale_lunar_info_window_t1

0xc69a,	// (0x00050916) popup_cale_lunar_info_window_t2

0xc6a8,	// (0x00050924) popup_cale_lunar_info_window_t3

0x1b7a,	// (0x00045df6) bg_popup_call2_bubble_pane

0xc118,	// (0x00050394) bg_popup_call2_in_pane_cp01_ParamLimits

0xc118,	// (0x00050394) bg_popup_call2_in_pane_cp01

0x1832,	// (0x00045aae) call_type_pane_cp02

0xc160,	// (0x000503dc) popup_call2_audio_out_window_g1_ParamLimits

0xc160,	// (0x000503dc) popup_call2_audio_out_window_g1

0xc18c,	// (0x00050408) popup_call2_audio_out_window_g2_ParamLimits

0xc18c,	// (0x00050408) popup_call2_audio_out_window_g2

0xc1b4,	// (0x00050430) popup_call2_audio_out_window_g3_ParamLimits

0xc1b4,	// (0x00050430) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x000537c7) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x000537c7) popup_call2_audio_out_window_g

0xc1ef,	// (0x0005046b) popup_call2_audio_out_window_t1_ParamLimits

0xc1ef,	// (0x0005046b) popup_call2_audio_out_window_t1

0xc24e,	// (0x000504ca) popup_call2_audio_out_window_t2_ParamLimits

0xc24e,	// (0x000504ca) popup_call2_audio_out_window_t2

0xc2a2,	// (0x0005051e) popup_call2_audio_out_window_t3_ParamLimits

0xc2a2,	// (0x0005051e) popup_call2_audio_out_window_t3

0xc2b8,	// (0x00050534) popup_call2_audio_out_window_t4_ParamLimits

0xc2b8,	// (0x00050534) popup_call2_audio_out_window_t4

0xc2ce,	// (0x0005054a) popup_call2_audio_out_window_t5_ParamLimits

0xc2ce,	// (0x0005054a) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x000537d0) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x000537d0) popup_call2_audio_out_window_t

0xc332,	// (0x000505ae) bg_popup_call2_in_pane_ParamLimits

0xc332,	// (0x000505ae) bg_popup_call2_in_pane

0xc38e,	// (0x0005060a) popup_call2_audio_in_window_g1_ParamLimits

0xc38e,	// (0x0005060a) popup_call2_audio_in_window_g1

0xc3c6,	// (0x00050642) popup_call2_audio_in_window_g2_ParamLimits

0xc3c6,	// (0x00050642) popup_call2_audio_in_window_g2

0xc3fe,	// (0x0005067a) popup_call2_audio_in_window_g3_ParamLimits

0xc3fe,	// (0x0005067a) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x000537dd) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x000537dd) popup_call2_audio_in_window_g

0xc456,	// (0x000506d2) popup_call2_audio_in_window_t1_ParamLimits

0xc456,	// (0x000506d2) popup_call2_audio_in_window_t1

0xc4d6,	// (0x00050752) popup_call2_audio_in_window_t2_ParamLimits

0xc4d6,	// (0x00050752) popup_call2_audio_in_window_t2

0xc556,	// (0x000507d2) popup_call2_audio_in_window_t3_ParamLimits

0xc556,	// (0x000507d2) popup_call2_audio_in_window_t3

0xc570,	// (0x000507ec) popup_call2_audio_in_window_t4_ParamLimits

0xc570,	// (0x000507ec) popup_call2_audio_in_window_t4

0xc582,	// (0x000507fe) popup_call2_audio_in_window_t5_ParamLimits

0xc582,	// (0x000507fe) popup_call2_audio_in_window_t5

0xc597,	// (0x00050813) popup_call2_audio_in_window_t6_ParamLimits

0xc597,	// (0x00050813) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x000537e6) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x000537e6) popup_call2_audio_in_window_t

0x1dcd,	// (0x00046049) bg_popup_call2_in_pane_g1

0xc6b6,	// (0x00050932) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0005384e) popup_cale_lunar_info_window_t

0x1dd5,	// (0x00046051) bg_popup_call2_rect_pane_ParamLimits

0x1dd5,	// (0x00046051) bg_popup_call2_rect_pane

0x1b7a,	// (0x00045df6) call2_cli_visual_graphic_pane

0x1b7a,	// (0x00045df6) call2_cli_visual_text_pane

0xc88c,	// (0x00050b08) smil_status_volume_pane_g3

0x0002,

0x2284,	// (0x00046500) call2_cli_visual_graphic_pane_g1

0x2284,	// (0x00046500) call2_cli_visual_graphic_pane_g2

0x2284,	// (0x00046500) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x000537f3) call2_cli_visual_graphic_pane_g

0xc5ac,	// (0x00050828) bg_popup_call2_rect_pane_g1

0x23c9,	// (0x00046645) bg_popup_call2_rect_pane_g2

0xc5b4,	// (0x00050830) bg_popup_call2_rect_pane_g3

0xc5bc,	// (0x00050838) bg_popup_call2_rect_pane_g4

0xc5c4,	// (0x00050840) bg_popup_call2_rect_pane_g5

0xc5cc,	// (0x00050848) bg_popup_call2_rect_pane_g6

0xc5d4,	// (0x00050850) bg_popup_call2_rect_pane_g7

0xc5dc,	// (0x00050858) bg_popup_call2_rect_pane_g8

0xc5e4,	// (0x00050860) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x000537fa) bg_popup_call2_rect_pane_g

0xc5ec,	// (0x00050868) bg_popup_call2_bubble_pane_g1

0xc5f4,	// (0x00050870) bg_popup_call2_bubble_pane_g2

0xc5fc,	// (0x00050878) bg_popup_call2_bubble_pane_g3

0xc604,	// (0x00050880) bg_popup_call2_bubble_pane_g4

0xc60c,	// (0x00050888) bg_popup_call2_bubble_pane_g5

0xc614,	// (0x00050890) bg_popup_call2_bubble_pane_g6

0xc61c,	// (0x00050898) bg_popup_call2_bubble_pane_g7

0xc624,	// (0x000508a0) bg_popup_call2_bubble_pane_g8

0xc62c,	// (0x000508a8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0005380d) bg_popup_call2_bubble_pane_g

0x243e,	// (0x000466ba) aid_cale_week_size_cell_pane

0x2964,	// (0x00046be0) aid_cams_cif_uncrop_pane_ParamLimits

0x2964,	// (0x00046be0) aid_cams_cif_uncrop_pane

0x2b5f,	// (0x00046ddb) aid_cams_size_cell_ParamLimits

0x2b5f,	// (0x00046ddb) aid_cams_size_cell

0x2b73,	// (0x00046def) grid_cams_pane_ParamLimits

0x2b8d,	// (0x00046e09) linegrid_cams_pane_ParamLimits

0x2c83,	// (0x00046eff) call_video_pane_t1

0x2ca1,	// (0x00046f1d) call_video_pane_t2

0x0001,

0xf27e,	// (0x000534fa) call_video_pane_t

0x30d4,	// (0x00047350) aid_cale_month_size_cell_pane_ParamLimits

0x30d4,	// (0x00047350) aid_cale_month_size_cell_pane

0xf61b,	// (0x00053897) smil_status_volume_pane_g

0xc899,	// (0x00050b15) volume_smil_pane_ParamLimits

0xa747,	// (0x0004e9c3) aid_popup2_width_pane

0x2321,	// (0x0004659d) cell_qdial_pane_g4_ParamLimits

0x2321,	// (0x0004659d) cell_qdial_pane_g4

0x3c68,	// (0x00047ee4) aid_blid_cardinal_pane_ParamLimits

0x3c74,	// (0x00047ef0) aid_blid_destination_pane_ParamLimits

0x3c74,	// (0x00047ef0) aid_blid_destination_pane

0x1dd5,	// (0x00046051) bg_popup_call_poc_act_pane_ParamLimits

0x1dd5,	// (0x00046051) bg_popup_call_poc_act_pane

0x1dd5,	// (0x00046051) bg_popup_call_poc_inact_pane_ParamLimits

0x1dd5,	// (0x00046051) bg_popup_call_poc_inact_pane

0xc63c,	// (0x000508b8) bg_popup_call_poc_act_pane_g1

0xc644,	// (0x000508c0) bg_popup_call_poc_act_pane_g2

0xc64c,	// (0x000508c8) bg_popup_call_poc_act_pane_g3

0xc604,	// (0x00050880) bg_popup_call_poc_act_pane_g4

0xc60c,	// (0x00050888) bg_popup_call_poc_act_pane_g5

0xc654,	// (0x000508d0) bg_popup_call_poc_act_pane_g6

0xc61c,	// (0x00050898) bg_popup_call_poc_act_pane_g7

0xc65c,	// (0x000508d8) bg_popup_call_poc_act_pane_g8

0x1b7a,	// (0x00045df6) main_usb_pane

0xc7b5,	// (0x00050a31) popup_cale_lunar_info_window

0x2f6b,	// (0x000471e7) im_reading_pane_t1_ParamLimits

0xa9f6,	// (0x0004ec72) list_im_pane_ParamLimits

0xaa07,	// (0x0004ec83) scroll_pane_cp07_ParamLimits

0x1b7a,	// (0x00045df6) grid_highlight_pane_cp012

0x1dd5,	// (0x00046051) mup_scale_pane_ParamLimits

0xb535,	// (0x0004f7b1) main_usb_pane_g1_ParamLimits

0xb535,	// (0x0004f7b1) main_usb_pane_g1

0x48c5,	// (0x00048b41) main_usb_pane_g2_ParamLimits

0x48c5,	// (0x00048b41) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00053837) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00053837) main_usb_pane_g

0x48db,	// (0x00048b57) main_usb_pane_t1_ParamLimits

0x48db,	// (0x00048b57) main_usb_pane_t1

0x48ed,	// (0x00048b69) main_usb_pane_t2_ParamLimits

0x48ed,	// (0x00048b69) main_usb_pane_t2

0x48ff,	// (0x00048b7b) main_usb_pane_t3_ParamLimits

0x48ff,	// (0x00048b7b) main_usb_pane_t3

0x4911,	// (0x00048b8d) main_usb_pane_t4_ParamLimits

0x4911,	// (0x00048b8d) main_usb_pane_t4

0x4923,	// (0x00048b9f) main_usb_pane_t5_ParamLimits

0x4923,	// (0x00048b9f) main_usb_pane_t5

0x4935,	// (0x00048bb1) main_usb_pane_t6_ParamLimits

0x4935,	// (0x00048bb1) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0005383c) main_usb_pane_t_ParamLimits

0x3c0d,	// (0x00047e89) aid_text_placing

0x3c16,	// (0x00047e92) main_location2_pane_t1_ParamLimits

0x3c2a,	// (0x00047ea6) main_location2_pane_t2_ParamLimits

0x3c3e,	// (0x00047eba) main_location2_pane_t3_ParamLimits

0x3c54,	// (0x00047ed0) main_location2_pane_t4_ParamLimits

0x3c54,	// (0x00047ed0) main_location2_pane_t4

0xf3df,	// (0x0005365b) main_location2_pane_t_ParamLimits

0x1ead,	// (0x00046129) find_pinb_pane_g2_ParamLimits

0x1ead,	// (0x00046129) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x000533a9) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x000533a9) find_pinb_pane_g

0x1eb9,	// (0x00046135) find_pinb_pane_t1_ParamLimits

0x1ecb,	// (0x00046147) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x000533ae) find_pinb_pane_t_ParamLimits

0x1b7a,	// (0x00045df6) main_call3_pane

0x3438,	// (0x000476b4) cale_month_day_heading_pane_t1_ParamLimits

0x3496,	// (0x00047712) cale_month_day_heading_pane_t2_ParamLimits

0x34fb,	// (0x00047777) cale_month_day_heading_pane_t3_ParamLimits

0x3560,	// (0x000477dc) cale_month_day_heading_pane_t4_ParamLimits

0x35c5,	// (0x00047841) cale_month_day_heading_pane_t5_ParamLimits

0x363a,	// (0x000478b6) cale_month_day_heading_pane_t6_ParamLimits

0x36af,	// (0x0004792b) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00053532) cale_month_day_heading_pane_t_ParamLimits

0xac7d,	// (0x0004eef9) smil_status_volume_pane

0x43bc,	// (0x00048638) postcard_address_pane_ParamLimits

0x43bc,	// (0x00048638) postcard_address_pane

0x43ce,	// (0x0004864a) postcard_message_pane_ParamLimits

0x43ce,	// (0x0004864a) postcard_message_pane

0x48a8,	// (0x00048b24) call2_cli_visual_pane_t1_ParamLimits

0x48a8,	// (0x00048b24) call2_cli_visual_pane_t1

0x50bc,	// (0x00049338) postcard_message_pane_t1_ParamLimits

0x50bc,	// (0x00049338) postcard_message_pane_t1

0x50a5,	// (0x00049321) postcard_address_pane_t1_ParamLimits

0x50a5,	// (0x00049321) postcard_address_pane_t1

0x5091,	// (0x0004930d) popup_call3_audio_in_window_ParamLimits

0x5091,	// (0x0004930d) popup_call3_audio_in_window

0x4f20,	// (0x0004919c) bg_popup_call3_in_pane_ParamLimits

0x4f20,	// (0x0004919c) bg_popup_call3_in_pane

0x4f92,	// (0x0004920e) popup_call3_audio_in_window_g1_ParamLimits

0x4f92,	// (0x0004920e) popup_call3_audio_in_window_g1

0x4fb2,	// (0x0004922e) popup_call3_audio_in_window_g2_ParamLimits

0x4fb2,	// (0x0004922e) popup_call3_audio_in_window_g2

0x4fd2,	// (0x0004924e) popup_call3_audio_in_window_g3_ParamLimits

0x4fd2,	// (0x0004924e) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0005389e) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0005389e) popup_call3_audio_in_window_g

0x5003,	// (0x0004927f) popup_call3_audio_in_window_t1_ParamLimits

0x5003,	// (0x0004927f) popup_call3_audio_in_window_t1

0x5041,	// (0x000492bd) popup_call3_audio_in_window_t2_ParamLimits

0x5041,	// (0x000492bd) popup_call3_audio_in_window_t2

0x507f,	// (0x000492fb) popup_call3_audio_in_window_t3_ParamLimits

0x507f,	// (0x000492fb) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x000538a7) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x000538a7) popup_call3_audio_in_window_t

0xb300,	// (0x0004f57c) bg_popup_call3_rect_pane

0xc5ac,	// (0x00050828) bg_popup_call3_rect_pane_g1

0x23c9,	// (0x00046645) bg_popup_call3_rect_pane_g2

0xc5b4,	// (0x00050830) bg_popup_call3_rect_pane_g3

0xc5bc,	// (0x00050838) bg_popup_call3_rect_pane_g4

0xc5c4,	// (0x00050840) bg_popup_call3_rect_pane_g5

0xc5cc,	// (0x00050848) bg_popup_call3_rect_pane_g6

0xc5d4,	// (0x00050850) bg_popup_call3_rect_pane_g7

0x4046,	// (0x000482c2) mup_visualizer_osc_pane

0xb3df,	// (0x0004f65b) mup_visualizer_spec_pane

0x4f50,	// (0x000491cc) call3_video_qcif_pane_ParamLimits

0x4f50,	// (0x000491cc) call3_video_qcif_pane

0x4f61,	// (0x000491dd) call3_video_qcif_uncrop_pane_ParamLimits

0x4f61,	// (0x000491dd) call3_video_qcif_uncrop_pane

0x4f6d,	// (0x000491e9) call3_video_subqcif_pane_ParamLimits

0x4f6d,	// (0x000491e9) call3_video_subqcif_pane

0x4f81,	// (0x000491fd) call3_video_subqcif_uncrop_pane_ParamLimits

0x4f81,	// (0x000491fd) call3_video_subqcif_uncrop_pane

0x4ff2,	// (0x0004926e) popup_call3_audio_in_window_g4_ParamLimits

0x4ff2,	// (0x0004926e) popup_call3_audio_in_window_g4

0x4f0f,	// (0x0004918b) mup_spec_half_pane

0x4f18,	// (0x00049194) mup_spec_half_pane_cp

0xc84c,	// (0x00050ac8) mup_osc_middle_pane

0xc855,	// (0x00050ad1) mup_visualizer_osc_pane_g1

0x4eef,	// (0x0004916b) mup_spec_bar_pane_ParamLimits

0x4eef,	// (0x0004916b) mup_spec_bar_pane

0xc839,	// (0x00050ab5) mup_spec_bar_pane_g1

0xc843,	// (0x00050abf) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00053892) mup_spec_bar_pane_g

0x243e,	// (0x000466ba) aid_cale_week_size_cell_pane_ParamLimits

0x2451,	// (0x000466cd) bg_cale_heading_pane_ParamLimits

0x2469,	// (0x000466e5) bg_cale_pane_cp01_ParamLimits

0x2482,	// (0x000466fe) cale_week_corner_pane_ParamLimits

0x2493,	// (0x0004670f) cale_week_day_heading_pane_ParamLimits

0x24ab,	// (0x00046727) cale_week_scroll_pane_g1_ParamLimits

0x24c0,	// (0x0004673c) cale_week_scroll_pane_g2_ParamLimits

0x24d1,	// (0x0004674d) cale_week_scroll_pane_g3_ParamLimits

0x24e2,	// (0x0004675e) cale_week_scroll_pane_g4_ParamLimits

0x24f3,	// (0x0004676f) cale_week_scroll_pane_g5_ParamLimits

0x2506,	// (0x00046782) cale_week_scroll_pane_g6_ParamLimits

0x2519,	// (0x00046795) cale_week_scroll_pane_g7_ParamLimits

0x252c,	// (0x000467a8) cale_week_scroll_pane_g8_ParamLimits

0x253f,	// (0x000467bb) cale_week_scroll_pane_g9_ParamLimits

0x2550,	// (0x000467cc) cale_week_scroll_pane_g10_ParamLimits

0x2561,	// (0x000467dd) cale_week_scroll_pane_g11_ParamLimits

0x2572,	// (0x000467ee) cale_week_scroll_pane_g12_ParamLimits

0x2583,	// (0x000467ff) cale_week_scroll_pane_g13_ParamLimits

0x2594,	// (0x00046810) cale_week_scroll_pane_g14_ParamLimits

0x25a5,	// (0x00046821) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0005343a) cale_week_scroll_pane_g_ParamLimits

0x25ba,	// (0x00046836) cale_week_time_pane_ParamLimits

0x25cd,	// (0x00046849) grid_cale_week_pane_ParamLimits

0x25e2,	// (0x0004685e) listscroll_cale_week_pane_t1

0x25f4,	// (0x00046870) scroll_pane_cp08_ParamLimits

0x3115,	// (0x00047391) cale_month_corner_pane_ParamLimits

0xac1d,	// (0x0004ee99) cale_month_pane_t1

0x33f7,	// (0x00047673) cale_month_week_pane_ParamLimits

0x3a74,	// (0x00047cf0) popup_call_status_window_g1_ParamLimits

0x3a88,	// (0x00047d04) popup_call_status_window_g2_ParamLimits

0x3a9c,	// (0x00047d18) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x000535e2) popup_call_status_window_g_ParamLimits

0xb004,	// (0x0004f280) aid_call2_pane

0x0ad0,	// (0x00044d4c) msg_header_pane_g1

0x43bc,	// (0x00048638) postcard_address2_pane_ParamLimits

0x43bc,	// (0x00048638) postcard_address2_pane

0x43ce,	// (0x0004864a) postcard_message2_pane_ParamLimits

0x43ce,	// (0x0004864a) postcard_message2_pane

0x4e9c,	// (0x00049118) message2_row_pane_ParamLimits

0x4e9c,	// (0x00049118) message2_row_pane

0x4ebb,	// (0x00049137) address2_row_pane_ParamLimits

0x4ebb,	// (0x00049137) address2_row_pane

0xc807,	// (0x00050a83) postcard_message2_row_pane_g1

0xc80f,	// (0x00050a8b) postcard_message2_row_pane_t1

0xc807,	// (0x00050a83) address2_row_pane_g1

0xc80f,	// (0x00050a8b) address2_row_pane_t1

0xa845,	// (0x0004eac1) aid_size_cell_vorec

0x1b7a,	// (0x00045df6) main_rss_pane

0x4ece,	// (0x0004914a) rss_list_single_pane_ParamLimits

0x4ece,	// (0x0004914a) rss_list_single_pane

0xc81d,	// (0x00050a99) rss_list_single_pane_t1

0xc82b,	// (0x00050aa7) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0005388d) rss_list_single_pane_t

0x1b7a,	// (0x00045df6) main_camera2_pane

0x1b7a,	// (0x00045df6) main_video2_pane

0x5135,	// (0x000493b1) cams_zoom_pane_cp2_ParamLimits

0x5135,	// (0x000493b1) cams_zoom_pane_cp2

0x5155,	// (0x000493d1) image2_vga_pane_ParamLimits

0x5155,	// (0x000493d1) image2_vga_pane

0x51a6,	// (0x00049422) main_camera2_pane_g1_ParamLimits

0x51a6,	// (0x00049422) main_camera2_pane_g1

0x51c6,	// (0x00049442) main_camera2_pane_g2_ParamLimits

0x51c6,	// (0x00049442) main_camera2_pane_g2

0x51e6,	// (0x00049462) main_camera2_pane_g3_ParamLimits

0x51e6,	// (0x00049462) main_camera2_pane_g3

0x5206,	// (0x00049482) main_camera2_pane_g4_ParamLimits

0x5206,	// (0x00049482) main_camera2_pane_g4

0x5226,	// (0x000494a2) main_camera2_pane_g5_ParamLimits

0x5226,	// (0x000494a2) main_camera2_pane_g5

0x5246,	// (0x000494c2) main_camera2_pane_g6_ParamLimits

0x5246,	// (0x000494c2) main_camera2_pane_g6

0x5266,	// (0x000494e2) main_camera2_pane_g7_ParamLimits

0x5266,	// (0x000494e2) main_camera2_pane_g7

0x5286,	// (0x00049502) main_camera2_pane_g8_ParamLimits

0x5286,	// (0x00049502) main_camera2_pane_g8

0x0008,

0xf632,	// (0x000538ae) main_camera2_pane_g_ParamLimits

0xf632,	// (0x000538ae) main_camera2_pane_g

0x52c6,	// (0x00049542) main_camera2_pane_t1_ParamLimits

0x52c6,	// (0x00049542) main_camera2_pane_t1

0x52fb,	// (0x00049577) main_camera2_pane_t2_ParamLimits

0x52fb,	// (0x00049577) main_camera2_pane_t2

0x5321,	// (0x0004959d) main_camera2_pane_t3_ParamLimits

0x5321,	// (0x0004959d) main_camera2_pane_t3

0x537f,	// (0x000495fb) main_camera2_pane_t4_ParamLimits

0x537f,	// (0x000495fb) main_camera2_pane_t4

0x0006,

0xf645,	// (0x000538c1) main_camera2_pane_t_ParamLimits

0xf645,	// (0x000538c1) main_camera2_pane_t

0x5411,	// (0x0004968d) cams_zoom_pane_cp4_ParamLimits

0x5411,	// (0x0004968d) cams_zoom_pane_cp4

0x5427,	// (0x000496a3) image2_cif_pane_ParamLimits

0x5427,	// (0x000496a3) image2_cif_pane

0x5452,	// (0x000496ce) image2_subqcif_pane_ParamLimits

0x5452,	// (0x000496ce) image2_subqcif_pane

0x546c,	// (0x000496e8) main_video2_pane_g1_ParamLimits

0x546c,	// (0x000496e8) main_video2_pane_g1

0x5486,	// (0x00049702) main_video2_pane_g2_ParamLimits

0x5486,	// (0x00049702) main_video2_pane_g2

0x549c,	// (0x00049718) main_video2_pane_g3_ParamLimits

0x549c,	// (0x00049718) main_video2_pane_g3

0x54b2,	// (0x0004972e) main_video2_pane_g4_ParamLimits

0x54b2,	// (0x0004972e) main_video2_pane_g4

0x54c8,	// (0x00049744) main_video2_pane_g5_ParamLimits

0x54c8,	// (0x00049744) main_video2_pane_g5

0x54de,	// (0x0004975a) main_video2_pane_g6_ParamLimits

0x54de,	// (0x0004975a) main_video2_pane_g6

0x0005,

0xf654,	// (0x000538d0) main_video2_pane_g_ParamLimits

0xf654,	// (0x000538d0) main_video2_pane_g

0x54f8,	// (0x00049774) main_video2_pane_t1_ParamLimits

0x54f8,	// (0x00049774) main_video2_pane_t1

0x551c,	// (0x00049798) main_video2_pane_t2_ParamLimits

0x551c,	// (0x00049798) main_video2_pane_t2

0x556a,	// (0x000497e6) main_video2_pane_t3_ParamLimits

0x556a,	// (0x000497e6) main_video2_pane_t3

0x0002,

0xf661,	// (0x000538dd) main_video2_pane_t_ParamLimits

0xf661,	// (0x000538dd) main_video2_pane_t

0x49f2,	// (0x00048c6e) call_muted_g2

0x0001,

0xf603,	// (0x0005387f) call_muted_g

0x1b7a,	// (0x00045df6) main_mup2_pane

0x55b2,	// (0x0004982e) main_mup2_pane_g1_ParamLimits

0x55b2,	// (0x0004982e) main_mup2_pane_g1

0x55be,	// (0x0004983a) main_mup2_pane_g2_ParamLimits

0x55be,	// (0x0004983a) main_mup2_pane_g2

0xc907,	// (0x00050b83) main_mup_pane_g13_cp1

0xc90f,	// (0x00050b8b) mup_volume_pane_cp1

0x55da,	// (0x00049856) main_mup2_pane_g4_ParamLimits

0x55da,	// (0x00049856) main_mup2_pane_g4

0x55ec,	// (0x00049868) main_mup2_pane_g5_ParamLimits

0x55ec,	// (0x00049868) main_mup2_pane_g5

0x55fe,	// (0x0004987a) main_mup2_pane_g6_ParamLimits

0x55fe,	// (0x0004987a) main_mup2_pane_g6

0x5610,	// (0x0004988c) main_mup2_pane_g7_ParamLimits

0x5610,	// (0x0004988c) main_mup2_pane_g7

0x0006,

0xf668,	// (0x000538e4) main_mup2_pane_g_ParamLimits

0xf668,	// (0x000538e4) main_mup2_pane_g

0x5628,	// (0x000498a4) main_mup2_pane_t1_ParamLimits

0x5628,	// (0x000498a4) main_mup2_pane_t1

0x563e,	// (0x000498ba) main_mup2_pane_t2_ParamLimits

0x563e,	// (0x000498ba) main_mup2_pane_t2

0x5654,	// (0x000498d0) main_mup2_pane_t3_ParamLimits

0x5654,	// (0x000498d0) main_mup2_pane_t3

0x566a,	// (0x000498e6) main_mup2_pane_t4_ParamLimits

0x566a,	// (0x000498e6) main_mup2_pane_t4

0x5682,	// (0x000498fe) main_mup2_pane_t5_ParamLimits

0x5682,	// (0x000498fe) main_mup2_pane_t5

0x569a,	// (0x00049916) main_mup2_pane_t6_ParamLimits

0x569a,	// (0x00049916) main_mup2_pane_t6

0x0005,

0xf677,	// (0x000538f3) main_mup2_pane_t_ParamLimits

0xf677,	// (0x000538f3) main_mup2_pane_t

0x56ca,	// (0x00049946) mup2_visualizer_pane_ParamLimits

0x56ca,	// (0x00049946) mup2_visualizer_pane

0x56f8,	// (0x00049974) mup_progress_pane_cp_ParamLimits

0x56f8,	// (0x00049974) mup_progress_pane_cp

0xc8f2,	// (0x00050b6e) mup_volume_pane_cp_ParamLimits

0xc8f2,	// (0x00050b6e) mup_volume_pane_cp

0x570c,	// (0x00049988) mup2_visualizer_pane_g1_ParamLimits

0x570c,	// (0x00049988) mup2_visualizer_pane_g1

0xd2ba,	// (0x00051536) mup2_visualizer_pane_g2_ParamLimits

0xd2ba,	// (0x00051536) mup2_visualizer_pane_g2

0x5723,	// (0x0004999f) mup2_visualizer_pane_g3_ParamLimits

0x5723,	// (0x0004999f) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x00053900) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x00053900) mup2_visualizer_pane_g

0xb67e,	// (0x0004f8fa) aid_size_cell_fmradio

0x4ba4,	// (0x00048e20) aid_height_parent_landcape

0xaa85,	// (0x0004ed01) wml_content_pane_cp

0xaa8d,	// (0x0004ed09) wml_tabs_pane

0xaa96,	// (0x0004ed12) popup_wml_miniature_window

0xaa9e,	// (0x0004ed1a) scroll_pane_cp021

0xaab2,	// (0x0004ed2e) wml_content_pane_comp8

0x1b7a,	// (0x00045df6) bg_popup_sub_pane_cp05

0xd2d8,	// (0x00051554) popup_wml_miniature_window_g1

0xd2e0,	// (0x0005155c) wml_miniature_view_pane

0x572f,	// (0x000499ab) aid_size_wml_view

0x5737,	// (0x000499b3) wml_miniature_view_pane_g1

0x5740,	// (0x000499bc) wml_miniature_view_pane_g2

0x5749,	// (0x000499c5) wml_miniature_view_pane_g3

0x5751,	// (0x000499cd) wml_miniature_view_pane_g4

0x5759,	// (0x000499d5) wml_miniature_view_pane_g5

0x5761,	// (0x000499dd) wml_miniature_view_pane_g6

0x5769,	// (0x000499e5) wml_miniature_view_pane_g7

0x5771,	// (0x000499ed) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x00053907) wml_miniature_view_pane_g

0xd2e8,	// (0x00051564) background_graphic_ParamLimits

0xd2e8,	// (0x00051564) background_graphic

0xd2f4,	// (0x00051570) wml_tabs_2_pane

0xd2fd,	// (0x00051579) wml_tabs_3_pane_ParamLimits

0xd2fd,	// (0x00051579) wml_tabs_3_pane

0xd30f,	// (0x0005158b) wml_tabs_4_pane_ParamLimits

0xd30f,	// (0x0005158b) wml_tabs_4_pane

0xd325,	// (0x000515a1) wml_tabs_5_pane_ParamLimits

0xd325,	// (0x000515a1) wml_tabs_5_pane

0xd33f,	// (0x000515bb) wml_tabs_pane_g2_ParamLimits

0xd33f,	// (0x000515bb) wml_tabs_pane_g2

0xd353,	// (0x000515cf) wml_tabs_pane_g3_ParamLimits

0xd353,	// (0x000515cf) wml_tabs_pane_g3

0x5779,	// (0x000499f5) wml_tabs_2_active_pane_ParamLimits

0x5779,	// (0x000499f5) wml_tabs_2_active_pane

0x578d,	// (0x00049a09) wml_tabs_2_passive_pane_ParamLimits

0x578d,	// (0x00049a09) wml_tabs_2_passive_pane

0x57a1,	// (0x00049a1d) wml_tabs_3_active_pane_cp_ParamLimits

0x57a1,	// (0x00049a1d) wml_tabs_3_active_pane_cp

0x57b6,	// (0x00049a32) wml_tabs_3_passive_pane_ParamLimits

0x57b6,	// (0x00049a32) wml_tabs_3_passive_pane

0x57c9,	// (0x00049a45) wml_tabs_3_passive_pane_cp_ParamLimits

0x57c9,	// (0x00049a45) wml_tabs_3_passive_pane_cp

0x57e0,	// (0x00049a5c) tabs_4_active_pane

0x57e8,	// (0x00049a64) tabs_4_passive_pane

0x57f2,	// (0x00049a6e) tabs_4_passive_pane_cp

0x57fa,	// (0x00049a76) tabs_4_passive_pane_cp2

0xc634,	// (0x000508b0) aid_height_text

0x4018,	// (0x00048294) mup_volume_cont_pane_ParamLimits

0x4018,	// (0x00048294) mup_volume_cont_pane

0x1e6b,	// (0x000460e7) aid_size_cell_pinb

0x1e75,	// (0x000460f1) aid_size_list_pinb

0x56e4,	// (0x00049960) mup2_volume_cont_pane_ParamLimits

0x56e4,	// (0x00049960) mup2_volume_cont_pane

0xc8de,	// (0x00050b5a) mup2_volume_cont_pane_g1_ParamLimits

0xc8de,	// (0x00050b5a) mup2_volume_cont_pane_g1

0x14a1,	// (0x0004571d) aid_size_cell_touch_ParamLimits

0x14a1,	// (0x0004571d) aid_size_cell_touch

0x16bd,	// (0x00045939) touch_pane_ParamLimits

0x16bd,	// (0x00045939) touch_pane

0x1497,	// (0x00045713) main_rss2_pane

0xd370,	// (0x000515ec) listscroll_rss2_pane

0xd379,	// (0x000515f5) rss2_navigation_pane

0xd381,	// (0x000515fd) list_rss2_pane

0xb1b3,	// (0x0004f42f) scroll_pane_cp22

0xd389,	// (0x00051605) rss2_navigation_pane_g1

0xd392,	// (0x0005160e) rss2_navigation_pane_g2

0xd39a,	// (0x00051616) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00053918) rss2_navigation_pane_g

0xd3a2,	// (0x0005161e) rss2_navigation_pane_t1

0x5804,	// (0x00049a80) rss2_list_single_pane_ParamLimits

0x5804,	// (0x00049a80) rss2_list_single_pane

0xd3b0,	// (0x0005162c) rss2_list_single_pane_t2

0xd3be,	// (0x0005163a) rss2_list_single_pane_t3_ParamLimits

0xd3be,	// (0x0005163a) rss2_list_single_pane_t3

0xd3db,	// (0x00051657) rss2_list_single_pane_t4

0x38ab,	// (0x00047b27) smil_status_pane_g1

0x16a3,	// (0x0004591f) main_image2_pane_ParamLimits

0x16a3,	// (0x0004591f) main_image2_pane

0x52a6,	// (0x00049522) main_camera2_pane_g9_ParamLimits

0x52a6,	// (0x00049522) main_camera2_pane_g9

0x53d4,	// (0x00049650) main_camera2_pane_t5_ParamLimits

0x53d4,	// (0x00049650) main_camera2_pane_t5

0xc8ae,	// (0x00050b2a) main_camera2_pane_t6_ParamLimits

0xc8ae,	// (0x00050b2a) main_camera2_pane_t6

0x581c,	// (0x00049a98) main_image2_pane_g1_ParamLimits

0x581c,	// (0x00049a98) main_image2_pane_g1

0x45fe,	// (0x0004887a) smil2_video_pane_ParamLimits

0x45fe,	// (0x0004887a) smil2_video_pane

0xa763,	// (0x0004e9df) aid_zoom_text_primary_cp

0xa7a3,	// (0x0004ea1f) popup_preview_fixed_window

0xa9ee,	// (0x0004ec6a) im_reading_pane_g1

0x511d,	// (0x00049399) cams2_bc_adjust_pane_cp_ParamLimits

0x511d,	// (0x00049399) cams2_bc_adjust_pane_cp

0x5403,	// (0x0004967f) cams2_bc_adjust_pane_ParamLimits

0x5403,	// (0x0004967f) cams2_bc_adjust_pane

0xc917,	// (0x00050b93) cams2_bc_adjust_pane_g1

0xc91f,	// (0x00050b9b) cams2_slider_pane

0xc928,	// (0x00050ba4) cams2_slider_pane_g1

0xc931,	// (0x00050bad) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0005391f) cams2_slider_pane_g

0x1fc5,	// (0x00046241) calc_display_pane_ParamLimits

0x1fed,	// (0x00046269) calc_paper_pane_ParamLimits

0x2010,	// (0x0004628c) grid_calc_pane_ParamLimits

0xb066,	// (0x0004f2e2) popup_clock_digital_window_t1_ParamLimits

0xb61b,	// (0x0004f897) main_image_pane_t1

0x1fa7,	// (0x00046223) aid_size_cell_calc_ParamLimits

0x1fa7,	// (0x00046223) aid_size_cell_calc

0x4bea,	// (0x00048e66) popup_blid_sat_info2_window_ParamLimits

0x4bea,	// (0x00048e66) popup_blid_sat_info2_window

0xd3f1,	// (0x0005166d) aid_size_cell_blid

0xd3f9,	// (0x00051675) bg_popup_window_pane_cp07

0xd41c,	// (0x00051698) grid_popup_blid_pane

0xd426,	// (0x000516a2) heading_pane_cp05_ParamLimits

0xd426,	// (0x000516a2) heading_pane_cp05

0xd4f0,	// (0x0005176c) cell_popup_blid_pane_ParamLimits

0xd4f0,	// (0x0005176c) cell_popup_blid_pane

0xd516,	// (0x00051792) cell_popup_blid_pane_g1

0xd51e,	// (0x0005179a) cell_popup_blid_pane_t1

0x56b4,	// (0x00049930) mup2_indicator_pane_ParamLimits

0x56b4,	// (0x00049930) mup2_indicator_pane

0xb300,	// (0x0004f57c) mup2_visualizer_osc_pane

0xd2c6,	// (0x00051542) mup2_visualizer_spec_pane_ParamLimits

0xd2c6,	// (0x00051542) mup2_visualizer_spec_pane

0x5832,	// (0x00049aae) mup2_spec_half_pane

0x583b,	// (0x00049ab7) mup2_spec_half_pane_cp

0x5843,	// (0x00049abf) mup2_spec_bar_pane_ParamLimits

0x5843,	// (0x00049abf) mup2_spec_bar_pane

0xc839,	// (0x00050ab5) mup2_spec_bar_pane_g1

0xc843,	// (0x00050abf) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00053892) mup2_spec_bar_pane_g

0x5863,	// (0x00049adf) mup2_osc_middle_pane

0xc855,	// (0x00050ad1) mup2_visualizer_osc_pane_g1

0x172f,	// (0x000459ab) popup_number_entry_window_t1_ParamLimits

0x1742,	// (0x000459be) popup_number_entry_window_t2_ParamLimits

0x1754,	// (0x000459d0) popup_number_entry_window_t3_ParamLimits

0x1766,	// (0x000459e2) popup_number_entry_window_t5_ParamLimits

0x1766,	// (0x000459e2) popup_number_entry_window_t5

0xf0d8,	// (0x00053354) popup_number_entry_window_t_ParamLimits

0x179c,	// (0x00045a18) text_title_cp2_ParamLimits

0xb4f5,	// (0x0004f771) aid_hotspot_pointer_text2_pane

0xb51b,	// (0x0004f797) main_viewer_pane_g9_ParamLimits

0xb51b,	// (0x0004f797) main_viewer_pane_g9

0xac1d,	// (0x0004ee99) cale_month_pane_t1_ParamLimits

0xacb2,	// (0x0004ef2e) bg_cale_pane_ParamLimits

0xacca,	// (0x0004ef46) list_cale_pane_ParamLimits

0x25e2,	// (0x0004685e) listscroll_cale_day_pane_t1

0xacdb,	// (0x0004ef57) scroll_pane_cp09_ParamLimits

0x404e,	// (0x000482ca) main_mup_eq_pane_t1_ParamLimits

0x404e,	// (0x000482ca) main_mup_eq_pane_t1

0x406a,	// (0x000482e6) main_mup_eq_pane_t2_ParamLimits

0x406a,	// (0x000482e6) main_mup_eq_pane_t2

0x4086,	// (0x00048302) main_mup_eq_pane_t3_ParamLimits

0x4086,	// (0x00048302) main_mup_eq_pane_t3

0x40a4,	// (0x00048320) main_mup_eq_pane_t4_ParamLimits

0x40a4,	// (0x00048320) main_mup_eq_pane_t4

0x40c2,	// (0x0004833e) main_mup_eq_pane_t5_ParamLimits

0x40c2,	// (0x0004833e) main_mup_eq_pane_t5

0x40e0,	// (0x0004835c) main_mup_eq_pane_t6_ParamLimits

0x40e0,	// (0x0004835c) main_mup_eq_pane_t6

0x40f6,	// (0x00048372) main_mup_eq_pane_t7_ParamLimits

0x40f6,	// (0x00048372) main_mup_eq_pane_t7

0x410c,	// (0x00048388) main_mup_eq_pane_t8_ParamLimits

0x410c,	// (0x00048388) main_mup_eq_pane_t8

0x4122,	// (0x0004839e) main_mup_eq_pane_t9_ParamLimits

0x4122,	// (0x0004839e) main_mup_eq_pane_t9

0x413c,	// (0x000483b8) main_mup_eq_pane_t10_ParamLimits

0x413c,	// (0x000483b8) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x000536e1) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x000536e1) main_mup_eq_pane_t

0x41eb,	// (0x00048467) mup_equalizer_pane_cp5_ParamLimits

0x41ff,	// (0x0004847b) mup_equalizer_pane_cp6_ParamLimits

0x4213,	// (0x0004848f) mup_equalizer_pane_cp7_ParamLimits

0x1497,	// (0x00045713) main_gallery_pane

0xc85e,	// (0x00050ada) smil2_volume_pane

0xc866,	// (0x00050ae2) smil_status_volume_pane_g1_ParamLimits

0xc879,	// (0x00050af5) smil_status_volume_pane_g2_ParamLimits

0xc88c,	// (0x00050b08) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00053897) smil_status_volume_pane_g_ParamLimits

0xd3f9,	// (0x00051675) bg_popup_window_pane_cp07_ParamLimits

0xd407,	// (0x00051683) blid_firmament_pane

0x586c,	// (0x00049ae8) aid_size_cell_gallery_ParamLimits

0x586c,	// (0x00049ae8) aid_size_cell_gallery

0x5882,	// (0x00049afe) grid_gallery_pane_ParamLimits

0x5882,	// (0x00049afe) grid_gallery_pane

0x589b,	// (0x00049b17) cell_gallery_pane_ParamLimits

0x589b,	// (0x00049b17) cell_gallery_pane

0xd52c,	// (0x000517a8) bg_cell_gallery_focus_pane_ParamLimits

0xd52c,	// (0x000517a8) bg_cell_gallery_focus_pane

0xd53e,	// (0x000517ba) cell_gallery_pane_g1_ParamLimits

0xd53e,	// (0x000517ba) cell_gallery_pane_g1

0x58e4,	// (0x00049b60) cell_gallery_pane_g2_ParamLimits

0x58e4,	// (0x00049b60) cell_gallery_pane_g2

0x58f1,	// (0x00049b6d) cell_gallery_pane_g3_ParamLimits

0x58f1,	// (0x00049b6d) cell_gallery_pane_g3

0xd54a,	// (0x000517c6) cell_gallery_pane_g4_ParamLimits

0xd54a,	// (0x000517c6) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00053945) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00053945) cell_gallery_pane_g

0xd556,	// (0x000517d2) bg_cell_gallery_focus_pane_g1

0xd55e,	// (0x000517da) bg_cell_gallery_focus_pane_g2

0xd566,	// (0x000517e2) bg_cell_gallery_focus_pane_g3

0xd56e,	// (0x000517ea) bg_cell_gallery_focus_pane_g4

0xd576,	// (0x000517f2) bg_cell_gallery_focus_pane_g5

0xd57e,	// (0x000517fa) bg_cell_gallery_focus_pane_g6

0xd586,	// (0x00051802) bg_cell_gallery_focus_pane_g7

0xd58e,	// (0x0005180a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0005394e) bg_cell_gallery_focus_pane_g

0xd596,	// (0x00051812) aid_firma_cardinal

0xd5aa,	// (0x00051826) blid_firmament_pane_t1

0xd5c1,	// (0x0005183d) blid_firmament_pane_t2

0xd5d8,	// (0x00051854) blid_firmament_pane_t3

0xd5ef,	// (0x0005186b) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0005395f) blid_firmament_pane_t

0xd606,	// (0x00051882) blid_sat_info_pane

0xd616,	// (0x00051892) blid_sat_info_pane_g1

0xd616,	// (0x00051892) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00053968) blid_sat_info_pane_g

0xd620,	// (0x0005189c) blid_sat_info_pane_t1

0xd62e,	// (0x000518aa) smil2_volume_content_pane

0xd637,	// (0x000518b3) smil2_volume_pane_g1

0xd63f,	// (0x000518bb) smil2_volume_content_pane_g1

0xd648,	// (0x000518c4) smil2_volume_content_pane_g2

0xd651,	// (0x000518cd) smil2_volume_content_pane_g3

0xd65a,	// (0x000518d6) smil2_volume_content_pane_g4

0xd663,	// (0x000518df) smil2_volume_content_pane_g5

0xd66c,	// (0x000518e8) smil2_volume_content_pane_g6

0xd675,	// (0x000518f1) smil2_volume_content_pane_g7

0xd67e,	// (0x000518fa) smil2_volume_content_pane_g8

0xd687,	// (0x00051903) smil2_volume_content_pane_g9

0xd690,	// (0x0005190c) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0005396d) smil2_volume_content_pane_g

0x264e,	// (0x000468ca) cale_week_day_heading_pane_t1_ParamLimits

0x2662,	// (0x000468de) cale_week_day_heading_pane_t2_ParamLimits

0x2676,	// (0x000468f2) cale_week_day_heading_pane_t3_ParamLimits

0x268a,	// (0x00046906) cale_week_day_heading_pane_t4_ParamLimits

0x269e,	// (0x0004691a) cale_week_day_heading_pane_t5_ParamLimits

0x26b2,	// (0x0004692e) cale_week_day_heading_pane_t6_ParamLimits

0x26c8,	// (0x00046944) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00053459) cale_week_day_heading_pane_t_ParamLimits

0x26dc,	// (0x00046958) bg_cale_side_pane_ParamLimits

0x26ea,	// (0x00046966) cale_week_time_pane_t1_ParamLimits

0x2702,	// (0x0004697e) cale_week_time_pane_t2_ParamLimits

0x271a,	// (0x00046996) cale_week_time_pane_t3_ParamLimits

0x2732,	// (0x000469ae) cale_week_time_pane_t4_ParamLimits

0x274a,	// (0x000469c6) cale_week_time_pane_t5_ParamLimits

0x2762,	// (0x000469de) cale_week_time_pane_t6_ParamLimits

0x277a,	// (0x000469f6) cale_week_time_pane_t7_ParamLimits

0x2792,	// (0x00046a0e) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00053468) cale_week_time_pane_t_ParamLimits

0x27aa,	// (0x00046a26) cell_cale_week_pane_g2_ParamLimits

0x26dc,	// (0x00046958) bg_cale_side_pane_cp01_ParamLimits

0x3724,	// (0x000479a0) cale_month_week_pane_t1_ParamLimits

0x373b,	// (0x000479b7) cale_month_week_pane_t2_ParamLimits

0x3752,	// (0x000479ce) cale_month_week_pane_t3_ParamLimits

0x3769,	// (0x000479e5) cale_month_week_pane_t4_ParamLimits

0x3780,	// (0x000479fc) cale_month_week_pane_t5_ParamLimits

0x3797,	// (0x00047a13) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00053541) cale_month_week_pane_t_ParamLimits

0xac59,	// (0x0004eed5) cell_cale_month_pane_g1_ParamLimits

0x1497,	// (0x00045713) main_cale_event_viewer_pane

0x1497,	// (0x00045713) listscroll_cale_event_viewer_pane

0xd699,	// (0x00051915) list_cale_ev_pane

0xd78d,	// (0x00051a09) scroll_pane_cp023

0xd799,	// (0x00051a15) field_cale_ev_pane_ParamLimits

0xd799,	// (0x00051a15) field_cale_ev_pane

0xd7b3,	// (0x00051a2f) field_cale_ev_content_pane_ParamLimits

0xd7b3,	// (0x00051a2f) field_cale_ev_content_pane

0xd7bf,	// (0x00051a3b) field_cale_ev_pane_g1_ParamLimits

0xd7bf,	// (0x00051a3b) field_cale_ev_pane_g1

0xd7cb,	// (0x00051a47) field_cale_ev_pane_g2_ParamLimits

0xd7cb,	// (0x00051a47) field_cale_ev_pane_g2

0xd7e3,	// (0x00051a5f) field_cale_ev_pane_g3_ParamLimits

0xd7e3,	// (0x00051a5f) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00053982) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00053982) field_cale_ev_pane_g

0xd7fb,	// (0x00051a77) field_cale_ev_pane_t1_ParamLimits

0xd7fb,	// (0x00051a77) field_cale_ev_pane_t1

0xd812,	// (0x00051a8e) field_cale_ev_content_pane_t1_ParamLimits

0xd812,	// (0x00051a8e) field_cale_ev_content_pane_t1

0xb489,	// (0x0004f705) bg_button_pane_cp01

0x215a,	// (0x000463d6) listscroll_cale_week_pane_ParamLimits

0x2434,	// (0x000466b0) popup_toolbar_window_cp01

0x25e2,	// (0x0004685e) listscroll_cale_week_pane_t1_ParamLimits

0x215a,	// (0x000463d6) listscroll_cale_day_pane_ParamLimits

0x390a,	// (0x00047b86) popup_toolbar_window_cp02

0x25e2,	// (0x0004685e) listscroll_cale_day_pane_t1_ParamLimits

0x215a,	// (0x000463d6) main_cale_month_pane_ParamLimits

0x4e10,	// (0x0004908c) popup_toolbar_window_cp03_ParamLimits

0x4e10,	// (0x0004908c) popup_toolbar_window_cp03

0x44c2,	// (0x0004873e) main_image_pane_g2_ParamLimits

0x44c2,	// (0x0004873e) main_image_pane_g2

0x44d3,	// (0x0004874f) main_image_pane_g3_ParamLimits

0x44d3,	// (0x0004874f) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00053773) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00053773) main_image_pane_g

0xb61b,	// (0x0004f897) main_image_pane_t1_ParamLimits

0x44e4,	// (0x00048760) main_image_pane_t2_ParamLimits

0x44e4,	// (0x00048760) main_image_pane_t2

0x44f6,	// (0x00048772) main_image_pane_t3_ParamLimits

0x44f6,	// (0x00048772) main_image_pane_t3

0x451e,	// (0x0004879a) main_image_pane_t4_ParamLimits

0x451e,	// (0x0004879a) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0005377a) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0005377a) main_image_pane_t

0x453e,	// (0x000487ba) popup_image_details_window_cp01

0x4548,	// (0x000487c4) popup_toobar_trans_pane_cp01_ParamLimits

0x4548,	// (0x000487c4) popup_toobar_trans_pane_cp01

0x4cc1,	// (0x00048f3d) popup_image_details_window_ParamLimits

0x4cc1,	// (0x00048f3d) popup_image_details_window

0xc7bf,	// (0x00050a3b) popup_image_focus_window

0x50d7,	// (0x00049353) camera2_autofocus_pane_ParamLimits

0x50d7,	// (0x00049353) camera2_autofocus_pane

0x1497,	// (0x00045713) bg_popup_sub_pane_cp06

0xd82f,	// (0x00051aab) popup_image_focus_window_g1

0xd837,	// (0x00051ab3) popup_image_focus_window_g2

0xd83f,	// (0x00051abb) popup_image_focus_window_g3

0xd847,	// (0x00051ac3) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00053989) popup_image_focus_window_g

0xd84f,	// (0x00051acb) popup_image_focus_window_t1

0xd85d,	// (0x00051ad9) popup_image_focus_window_t2

0xd86d,	// (0x00051ae9) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00053992) popup_image_focus_window_t

0xd87b,	// (0x00051af7) camera2_autofocus_pane_g1

0x16a3,	// (0x0004591f) bg_tb_trans_pane_cp01

0xd889,	// (0x00051b05) popup_image_details_window_g1

0xd89c,	// (0x00051b18) popup_image_details_window_g2

0x0002,

0xf728,	// (0x000539a4) popup_image_details_window_g

0xd8c5,	// (0x00051b41) popup_image_details_window_t1

0xd8d7,	// (0x00051b53) popup_image_details_window_t2

0xd8f0,	// (0x00051b6c) popup_image_details_window_t3

0xd904,	// (0x00051b80) popup_image_details_window_t4

0xd91f,	// (0x00051b9b) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x000539ab) popup_image_details_window_t

0x2146,	// (0x000463c2) bg_calc_paper_pane_ParamLimits

0x1497,	// (0x00045713) grid_highlight_pane_cp013

0xa7b5,	// (0x0004ea31) list_calc_pane_ParamLimits

0xa7c7,	// (0x0004ea43) scroll_pane_cp024

0x215a,	// (0x000463d6) bg_calc_display_pane_ParamLimits

0x2166,	// (0x000463e2) calc_display_pane_t1_ParamLimits

0x2178,	// (0x000463f4) calc_display_pane_t2_ParamLimits

0xa7cf,	// (0x0004ea4b) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x000533db) calc_display_pane_t_ParamLimits

0x228e,	// (0x0004650a) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x000533f8) cell_calc_pane_g

0x2297,	// (0x00046513) cell_calc_pane_t1

0x22a6,	// (0x00046522) grid_highlight_pane_cp02_ParamLimits

0x22bc,	// (0x00046538) toolbar_button_pane_cp01_ParamLimits

0x22bc,	// (0x00046538) toolbar_button_pane_cp01

0xb660,	// (0x0004f8dc) temp_image_control_pane_ParamLimits

0xb660,	// (0x0004f8dc) temp_image_control_pane

0x16a3,	// (0x0004591f) main_mp3_pane

0xd939,	// (0x00051bb5) temp_image_control_pane_g1_ParamLimits

0xd939,	// (0x00051bb5) temp_image_control_pane_g1

0xd947,	// (0x00051bc3) temp_image_control_pane_g2_ParamLimits

0xd947,	// (0x00051bc3) temp_image_control_pane_g2

0xd959,	// (0x00051bd5) temp_image_control_pane_g3_ParamLimits

0xd959,	// (0x00051bd5) temp_image_control_pane_g3

0x592e,	// (0x00049baa) temp_image_control_pane_g4_ParamLimits

0x592e,	// (0x00049baa) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x000539b6) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x000539b6) temp_image_control_pane_g

0xd939,	// (0x00051bb5) main_mp3_pane_g1

0x5941,	// (0x00049bbd) main_mp3_pane_g2

0x0007,

0xf743,	// (0x000539bf) main_mp3_pane_g

0xd99c,	// (0x00051c18) main_mp3_pane_t1

0x292a,	// (0x00046ba6) main_camera_pane_g8_ParamLimits

0x292a,	// (0x00046ba6) main_camera_pane_g8

0x2ae1,	// (0x00046d5d) main_video_pane_g7_ParamLimits

0x2ae1,	// (0x00046d5d) main_video_pane_g7

0xc8cc,	// (0x00050b48) main_camera2_pane_t7_ParamLimits

0xc8cc,	// (0x00050b48) main_camera2_pane_t7

0xaa45,	// (0x0004ecc1) scroll_pane_cp025_ParamLimits

0xaa45,	// (0x0004ecc1) scroll_pane_cp025

0xaa59,	// (0x0004ecd5) scroll_pane_cp026_ParamLimits

0xaa59,	// (0x0004ecd5) scroll_pane_cp026

0xaa68,	// (0x0004ece4) wml_content_pane_ParamLimits

0x1497,	// (0x00045713) main_touch_calib_pane

0x5a0d,	// (0x00049c89) main_touch_calib_pane_g1

0x5a19,	// (0x00049c95) main_touch_calib_pane_g2

0x5a25,	// (0x00049ca1) main_touch_calib_pane_g3

0x5a31,	// (0x00049cad) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x000539dd) main_touch_calib_pane_g

0x5a3d,	// (0x00049cb9) main_touch_calib_pane_t1

0x5a57,	// (0x00049cd3) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x000539e6) main_touch_calib_pane_t

0xb241,	// (0x0004f4bd) mup_progress_pane_cp02

0xb260,	// (0x0004f4dc) navi_pane_g1

0xb2c2,	// (0x0004f53e) navi_pane_mp_t3

0x16a3,	// (0x0004591f) main_mp3_pane_ParamLimits

0x4e4e,	// (0x000490ca) navi_pane_ParamLimits

0xd939,	// (0x00051bb5) main_mp3_pane_g1_ParamLimits

0x5941,	// (0x00049bbd) main_mp3_pane_g2_ParamLimits

0x594f,	// (0x00049bcb) main_mp3_pane_g3_ParamLimits

0x594f,	// (0x00049bcb) main_mp3_pane_g3

0x595d,	// (0x00049bd9) main_mp3_pane_g4_ParamLimits

0x595d,	// (0x00049bd9) main_mp3_pane_g4

0xd969,	// (0x00051be5) main_mp3_pane_g5_ParamLimits

0xd969,	// (0x00051be5) main_mp3_pane_g5

0xd977,	// (0x00051bf3) main_mp3_pane_g6_ParamLimits

0xd977,	// (0x00051bf3) main_mp3_pane_g6

0xd984,	// (0x00051c00) main_mp3_pane_g7_ParamLimits

0xd984,	// (0x00051c00) main_mp3_pane_g7

0xd990,	// (0x00051c0c) main_mp3_pane_g8_ParamLimits

0xd990,	// (0x00051c0c) main_mp3_pane_g8

0xf743,	// (0x000539bf) main_mp3_pane_g_ParamLimits

0x596b,	// (0x00049be7) main_mp3_pane_t2

0x5979,	// (0x00049bf5) main_mp3_pane_t3

0xd9aa,	// (0x00051c26) main_mp3_pane_t4

0xd9b8,	// (0x00051c34) main_mp3_pane_t5

0x0005,

0xf754,	// (0x000539d0) main_mp3_pane_t

0xd9c6,	// (0x00051c42) mup_progress_pane_cp01

0xa763,	// (0x0004e9df) aid_zoom_text_secondary2

0xd699,	// (0x00051915) list_cale_ev2_pane

0xd78d,	// (0x00051a09) scroll_pane_cp023_ParamLimits

0x5aad,	// (0x00049d29) field_cale_ev2_pane_ParamLimits

0x5aad,	// (0x00049d29) field_cale_ev2_pane

0xc94b,	// (0x00050bc7) field_cale_ev2_pane_g1_ParamLimits

0xc94b,	// (0x00050bc7) field_cale_ev2_pane_g1

0xc957,	// (0x00050bd3) field_cale_ev2_pane_g2_ParamLimits

0xc957,	// (0x00050bd3) field_cale_ev2_pane_g2

0xc96f,	// (0x00050beb) field_cale_ev2_pane_g3_ParamLimits

0xc96f,	// (0x00050beb) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x000539f1) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x000539f1) field_cale_ev2_pane_g

0x0b23,	// (0x00044d9f) field_cale_ev2_pane_t1_ParamLimits

0x0b23,	// (0x00044d9f) field_cale_ev2_pane_t1

0x0b3a,	// (0x00044db6) field_cale_ev2_pane_t2_ParamLimits

0x0b3a,	// (0x00044db6) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x000539fa) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x000539fa) field_cale_ev2_pane_t

0x4372,	// (0x000485ee) main_postcard_pane_g5_ParamLimits

0x4372,	// (0x000485ee) main_postcard_pane_g5

0x4388,	// (0x00048604) main_postcard_pane_g6_ParamLimits

0x4388,	// (0x00048604) main_postcard_pane_g6

0x286b,	// (0x00046ae7) camera2_autofocus_pane_cp_ParamLimits

0x286b,	// (0x00046ae7) camera2_autofocus_pane_cp

0x16a3,	// (0x0004591f) main_mup3_pane

0x5af3,	// (0x00049d6f) main_mup3_pane_g1_ParamLimits

0x5af3,	// (0x00049d6f) main_mup3_pane_g1

0x5b15,	// (0x00049d91) main_mup3_pane_g2_ParamLimits

0x5b15,	// (0x00049d91) main_mup3_pane_g2

0x5b9a,	// (0x00049e16) main_mup3_pane_g3_ParamLimits

0x5b9a,	// (0x00049e16) main_mup3_pane_g3

0x5be0,	// (0x00049e5c) main_mup3_pane_g4_ParamLimits

0x5be0,	// (0x00049e5c) main_mup3_pane_g4

0x5c26,	// (0x00049ea2) main_mup3_pane_g5_ParamLimits

0x5c26,	// (0x00049ea2) main_mup3_pane_g5

0x5c6e,	// (0x00049eea) main_mup3_pane_g6_ParamLimits

0x5c6e,	// (0x00049eea) main_mup3_pane_g6

0xd9ce,	// (0x00051c4a) main_mup3_pane_g7_ParamLimits

0xd9ce,	// (0x00051c4a) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x00053a0a) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x00053a0a) main_mup3_pane_g

0x5cee,	// (0x00049f6a) main_mup3_pane_t1_ParamLimits

0x5cee,	// (0x00049f6a) main_mup3_pane_t1

0x5d62,	// (0x00049fde) main_mup3_pane_t2_ParamLimits

0x5d62,	// (0x00049fde) main_mup3_pane_t2

0x5e36,	// (0x0004a0b2) main_mup3_pane_t4_ParamLimits

0x5e36,	// (0x0004a0b2) main_mup3_pane_t4

0x5e94,	// (0x0004a110) main_mup3_pane_t5_ParamLimits

0x5e94,	// (0x0004a110) main_mup3_pane_t5

0x5f50,	// (0x0004a1cc) main_mup3_pane_t6_ParamLimits

0x5f50,	// (0x0004a1cc) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00053a1b) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00053a1b) main_mup3_pane_t

0x6008,	// (0x0004a284) mup3_progress_pane_ParamLimits

0x6008,	// (0x0004a284) mup3_progress_pane

0x6094,	// (0x0004a310) popup_mup3_control_window_ParamLimits

0x6094,	// (0x0004a310) popup_mup3_control_window

0xd9dc,	// (0x00051c58) popup_mup3_text_window

0x60c6,	// (0x0004a342) mup3_progress_pane_t1

0x60e5,	// (0x0004a361) mup3_progress_pane_t2

0xd9e4,	// (0x00051c60) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00053a28) mup3_progress_pane_t

0xda01,	// (0x00051c7d) mup_progress_pane_cp03

0x1497,	// (0x00045713) bg_tb_trans_pane_cp04

0x6104,	// (0x0004a380) mup3_volume_pane

0x610c,	// (0x0004a388) popup_mup3_control_window_g1

0x6115,	// (0x0004a391) mup3_volume_pane_g1

0x611e,	// (0x0004a39a) mup3_volume_pane_g2

0x6127,	// (0x0004a3a3) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x00053a2f) mup3_volume_pane_g

0x1497,	// (0x00045713) bg_tb_trans_pane_cp03

0xda11,	// (0x00051c8d) popup_mup3_text_window_g1

0xda19,	// (0x00051c95) popup_mup3_text_window_t1

0x225d,	// (0x000464d9) list_calc_item_pane_g1_ParamLimits

0xd367,	// (0x000515e3) mup_volume_pane_cp_g1

0x5a71,	// (0x00049ced) main_touch_calib_pane_t3

0x5a85,	// (0x00049d01) main_touch_calib_pane_t4

0x5a99,	// (0x00049d15) main_touch_calib_pane_t5

0xa73f,	// (0x0004e9bb) aid_cell_size_toolbar2

0xa747,	// (0x0004e9c3) aid_popup3_width_pane

0xa753,	// (0x0004e9cf) aid_zoom_text_msg_primary

0xa8a1,	// (0x0004eb1d) vorec_t7

0x21c1,	// (0x0004643d) bg_calc_paper_pane_g1_ParamLimits

0x21cd,	// (0x00046449) bg_calc_paper_pane_g2_ParamLimits

0x21d9,	// (0x00046455) bg_calc_paper_pane_g3_ParamLimits

0x21e5,	// (0x00046461) bg_calc_paper_pane_g4_ParamLimits

0x21f1,	// (0x0004646d) bg_calc_paper_pane_g5_ParamLimits

0x21fd,	// (0x00046479) bg_calc_paper_pane_g6_ParamLimits

0x220e,	// (0x0004648a) bg_calc_paper_pane_g7_ParamLimits

0x221f,	// (0x0004649b) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x000533e2) bg_calc_paper_pane_g_ParamLimits

0x2232,	// (0x000464ae) calc_bg_paper_pane_g9_ParamLimits

0x29d1,	// (0x00046c4d) image_qvga_pane_ParamLimits

0x29d1,	// (0x00046c4d) image_qvga_pane

0x1dd5,	// (0x00046051) bg_popup_sub_pane_cp04_ParamLimits

0xb597,	// (0x0004f813) popup_mup_playback_window_g1_ParamLimits

0xb5a3,	// (0x0004f81f) popup_mup_playback_window_t1_ParamLimits

0xb5b8,	// (0x0004f834) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0005376e) popup_mup_playback_window_t_ParamLimits

0x55ce,	// (0x0004984a) main_mup2_pane_g3_ParamLimits

0x55ce,	// (0x0004984a) main_mup2_pane_g3

0x2d24,	// (0x00046fa0) popup_toolbar_window_cp04

0xb9ad,	// (0x0004fc29) popup_call2_audio_second_window_g3_ParamLimits

0xb9ad,	// (0x0004fc29) popup_call2_audio_second_window_g3

0xbdb7,	// (0x00050033) popup_call2_audio_first_window_g4_ParamLimits

0xbdb7,	// (0x00050033) popup_call2_audio_first_window_g4

0xc436,	// (0x000506b2) popup_call2_audio_in_window_g4_ParamLimits

0xc436,	// (0x000506b2) popup_call2_audio_in_window_g4

0x44a4,	// (0x00048720) aid_area_sk_bg_cut_ParamLimits

0x44a4,	// (0x00048720) aid_area_sk_bg_cut

0xb5cd,	// (0x0004f849) aid_area_sk_bg_cut_2_ParamLimits

0xb5cd,	// (0x0004f849) aid_area_sk_bg_cut_2

0x58d4,	// (0x00049b50) aid_placing_details_win

0x58dc,	// (0x00049b58) aid_placing_details_win_2

0xd87b,	// (0x00051af7) camera2_autofocus_pane_g1_ParamLimits

0x164e,	// (0x000458ca) popup_fixed_preview_cale_window_ParamLimits

0x164e,	// (0x000458ca) popup_fixed_preview_cale_window

0xb31a,	// (0x0004f596) navi_slider_pane_g3

0xb323,	// (0x0004f59f) navi_slider_pane_g4

0xb32c,	// (0x0004f5a8) navi_slider_pane_g5

0xb31a,	// (0x0004f596) navi_slider_pane_g6

0xb335,	// (0x0004f5b1) navi_slider_pane_g7

0xb456,	// (0x0004f6d2) mup_scale_pane_g3

0xb45f,	// (0x0004f6db) mup_scale_pane_g4

0xb468,	// (0x0004f6e4) mup_scale_pane_g5

0x4227,	// (0x000484a3) mup_scale_pane_g6

0x4230,	// (0x000484ac) mup_scale_pane_g7

0xb31a,	// (0x0004f596) cams2_slider_pane_g3

0xd3e9,	// (0x00051665) cams2_slider_pane_g4

0xc93a,	// (0x00050bb6) cams2_slider_pane_g5

0xb31a,	// (0x0004f596) cams2_slider_pane_g6

0xc942,	// (0x00050bbe) cams2_slider_pane_g7

0xd616,	// (0x00051892) camera2_autofocus_pane_cp_g1

0xda27,	// (0x00051ca3) bg_popup_preview_window_pane_cp02_ParamLimits

0xda27,	// (0x00051ca3) bg_popup_preview_window_pane_cp02

0xda33,	// (0x00051caf) list_fp_cale_pane_ParamLimits

0xda33,	// (0x00051caf) list_fp_cale_pane

0xda3f,	// (0x00051cbb) popup_fixed_preview_cale_window_t1_ParamLimits

0xda3f,	// (0x00051cbb) popup_fixed_preview_cale_window_t1

0x6130,	// (0x0004a3ac) popup_fixed_preview_cale_window_t2_ParamLimits

0x6130,	// (0x0004a3ac) popup_fixed_preview_cale_window_t2

0x6145,	// (0x0004a3c1) popup_fixed_preview_cale_window_t3_ParamLimits

0x6145,	// (0x0004a3c1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x00053a36) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x00053a36) popup_fixed_preview_cale_window_t

0x615a,	// (0x0004a3d6) list_single_fp_cale_pane_ParamLimits

0x615a,	// (0x0004a3d6) list_single_fp_cale_pane

0xda5d,	// (0x00051cd9) list_single_fp_cale_pane_g1_ParamLimits

0xda5d,	// (0x00051cd9) list_single_fp_cale_pane_g1

0xda69,	// (0x00051ce5) list_single_fp_cale_pane_g2_ParamLimits

0xda69,	// (0x00051ce5) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x00053a3d) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x00053a3d) list_single_fp_cale_pane_g

0xda82,	// (0x00051cfe) list_single_fp_cale_pane_t1_ParamLimits

0xda82,	// (0x00051cfe) list_single_fp_cale_pane_t1

0xda94,	// (0x00051d10) list_single_fp_cale_pane_t2_ParamLimits

0xda94,	// (0x00051d10) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x00053a44) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x00053a44) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1497,	// (0x00045713) main_dialer_pane

0x6172,	// (0x0004a3ee) aid_cell_size_keypad

0x617c,	// (0x0004a3f8) dialer_ne_pane

0x6184,	// (0x0004a400) grid_dialer_command_1_pane

0x618c,	// (0x0004a408) grid_dialer_command_2_pane

0x6194,	// (0x0004a410) grid_dialer_keypad_pane

0x61a6,	// (0x0004a422) bg_popup_call_pane_cp06_ParamLimits

0x61a6,	// (0x0004a422) bg_popup_call_pane_cp06

0x61b2,	// (0x0004a42e) dialer_ne_clear_pane_ParamLimits

0x61b2,	// (0x0004a42e) dialer_ne_clear_pane

0xdac7,	// (0x00051d43) dialer_ne_pane_g1

0xdacf,	// (0x00051d4b) dialer_ne_pane_t1_ParamLimits

0xdacf,	// (0x00051d4b) dialer_ne_pane_t1

0x61be,	// (0x0004a43a) dialer_ne_pane_t2_ParamLimits

0x61be,	// (0x0004a43a) dialer_ne_pane_t2

0x61e8,	// (0x0004a464) dialer_ne_pane_t3_ParamLimits

0x61e8,	// (0x0004a464) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00053a49) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00053a49) dialer_ne_pane_t

0x6218,	// (0x0004a494) dialer_ne_pane_t3_copy1_ParamLimits

0x6218,	// (0x0004a494) dialer_ne_pane_t3_copy1

0x6247,	// (0x0004a4c3) cell_dialer_keypad_pane_ParamLimits

0x6247,	// (0x0004a4c3) cell_dialer_keypad_pane

0x625e,	// (0x0004a4da) cell_dialer_command_1_pane_ParamLimits

0x625e,	// (0x0004a4da) cell_dialer_command_1_pane

0x6274,	// (0x0004a4f0) cell_dialer_command_2_pane_ParamLimits

0x6274,	// (0x0004a4f0) cell_dialer_command_2_pane

0xdae1,	// (0x00051d5d) bg_button_pane_cp02_ParamLimits

0xdae1,	// (0x00051d5d) bg_button_pane_cp02

0x6283,	// (0x0004a4ff) cell_dialer_keypad_pane_g1_ParamLimits

0x6283,	// (0x0004a4ff) cell_dialer_keypad_pane_g1

0xdae1,	// (0x00051d5d) bg_button_pane_cp03_ParamLimits

0xdae1,	// (0x00051d5d) bg_button_pane_cp03

0x6298,	// (0x0004a514) cell_dialer_command_1_pane_g1_ParamLimits

0x6298,	// (0x0004a514) cell_dialer_command_1_pane_g1

0xdaed,	// (0x00051d69) bg_button_pane_cp04

0x62ac,	// (0x0004a528) cell_dialer_command_2_pane_g1

0xb300,	// (0x0004f57c) bg_button_pane_cp06

0xdaf5,	// (0x00051d71) dialer_ne_clear_pane_g1

0x3d55,	// (0x00047fd1) navi_pane_g2

0x3d83,	// (0x00047fff) navi_pane_g3

0x0002,

0xf3f5,	// (0x00053671) navi_pane_g

0x3dac,	// (0x00048028) navi_pane_mv_g2

0x3dd3,	// (0x0004804f) navi_pane_mv_g5

0x3ddb,	// (0x00048057) navi_pane_mv_t1

0x215a,	// (0x000463d6) main_clock2_pane

0x62e6,	// (0x0004a562) main_clock2_list_pane_ParamLimits

0x62e6,	// (0x0004a562) main_clock2_list_pane

0x6320,	// (0x0004a59c) main_clock2_pane_t1_ParamLimits

0x6320,	// (0x0004a59c) main_clock2_pane_t1

0x635e,	// (0x0004a5da) main_clock2_pane_t2_ParamLimits

0x635e,	// (0x0004a5da) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x00053a50) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x00053a50) main_clock2_pane_t

0x63fb,	// (0x0004a677) popup_clock_analogue_window_cp03_ParamLimits

0x63fb,	// (0x0004a677) popup_clock_analogue_window_cp03

0x6422,	// (0x0004a69e) popup_clock_digital_window_cp02_ParamLimits

0x6422,	// (0x0004a69e) popup_clock_digital_window_cp02

0x6497,	// (0x0004a713) main_clock2_list_single_pane_ParamLimits

0x6497,	// (0x0004a713) main_clock2_list_single_pane

0xb300,	// (0x0004f57c) list_highlight_pane_cp05

0xdafd,	// (0x00051d79) main_clock2_list_single_pane_t1

0x2d24,	// (0x00046fa0) popup_toolbar_window_cp04_ParamLimits

0x58fe,	// (0x00049b7a) camera2_autofocus_pane_g2_ParamLimits

0x58fe,	// (0x00049b7a) camera2_autofocus_pane_g2

0x590a,	// (0x00049b86) camera2_autofocus_pane_g3_ParamLimits

0x590a,	// (0x00049b86) camera2_autofocus_pane_g3

0x5916,	// (0x00049b92) camera2_autofocus_pane_g4_ParamLimits

0x5916,	// (0x00049b92) camera2_autofocus_pane_g4

0x5922,	// (0x00049b9e) camera2_autofocus_pane_g5_ParamLimits

0x5922,	// (0x00049b9e) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00053999) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00053999) camera2_autofocus_pane_g

0x5ad3,	// (0x00049d4f) camera2_autofocus_pane_cp_g2

0x5adb,	// (0x00049d57) camera2_autofocus_pane_cp_g3

0x5ae3,	// (0x00049d5f) camera2_autofocus_pane_cp_g4

0x5aeb,	// (0x00049d67) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x000539ff) camera2_autofocus_pane_cp_g

0x619e,	// (0x0004a41a) popup_dialer_spcha_window

0x1497,	// (0x00045713) bg_popup_sub_pane_cp07

0xdb0b,	// (0x00051d87) list_spcha_pane

0xdb13,	// (0x00051d8f) list_single_spcha_pane_ParamLimits

0xdb13,	// (0x00051d8f) list_single_spcha_pane

0x1497,	// (0x00045713) list_highlight_pane_cp06

0xdb24,	// (0x00051da0) list_single_spcha_pane_t1

0xc1e0,	// (0x0005045c) popup_call2_audio_out_window_g4_ParamLimits

0xc1e0,	// (0x0005045c) popup_call2_audio_out_window_g4

0x1497,	// (0x00045713) main_imed2_pane

0xc7c7,	// (0x00050a43) popup_imed_adjust2_window

0x4cd9,	// (0x00048f55) popup_imed_trans_window_ParamLimits

0x4cd9,	// (0x00048f55) popup_imed_trans_window

0xd452,	// (0x000516ce) popup_blid_sat_info2_window_t1

0xd460,	// (0x000516dc) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0005392e) popup_blid_sat_info2_window_t

0x653f,	// (0x0004a7bb) aid_size_cell_colour_35

0x655f,	// (0x0004a7db) aid_size_cell_colour_112

0x657f,	// (0x0004a7fb) aid_size_cell_effect

0xc79f,	// (0x00050a1b) bg_tb_trans_pane_cp02

0xad4e,	// (0x0004efca) heading_imed_pane

0x659f,	// (0x0004a81b) listscroll_imed_pane

0xdb32,	// (0x00051dae) heading_imed_pane_g1

0xdb3a,	// (0x00051db6) heading_imed_pane_t1

0xdb48,	// (0x00051dc4) grid_imed_colour_35_pane_ParamLimits

0xdb48,	// (0x00051dc4) grid_imed_colour_35_pane

0x65ab,	// (0x0004a827) grid_imed_effect_pane

0xdb63,	// (0x00051ddf) list_imed_aspect_pane

0x65c0,	// (0x0004a83c) scroll_pane_cp027_ParamLimits

0x65c0,	// (0x0004a83c) scroll_pane_cp027

0x65d1,	// (0x0004a84d) cell_imed_effect_pane_ParamLimits

0x65d1,	// (0x0004a84d) cell_imed_effect_pane

0xdb6b,	// (0x00051de7) cell_imed_colour_pane_ParamLimits

0xdb6b,	// (0x00051de7) cell_imed_colour_pane

0xdbad,	// (0x00051e29) cell_imed_colour_pane_g1_ParamLimits

0xdbad,	// (0x00051e29) cell_imed_colour_pane_g1

0xdbbe,	// (0x00051e3a) hgihlgiht_grid_pane_cp016_ParamLimits

0xdbbe,	// (0x00051e3a) hgihlgiht_grid_pane_cp016

0x65f8,	// (0x0004a874) cell_imed_effect_pane_g1

0x6600,	// (0x0004a87c) grid_highlight_pane_cp017

0xdbcf,	// (0x00051e4b) list_imed_single_pane_ParamLimits

0xdbcf,	// (0x00051e4b) list_imed_single_pane

0x1497,	// (0x00045713) list_highlight_pane_cp07

0xdbe6,	// (0x00051e62) list_imed_aspect_pane_comp1_t1

0xc79f,	// (0x00050a1b) bg_tb_trans_pane_cp05

0xdc08,	// (0x00051e84) popup_imed_adjust2_window_g1

0xdc2f,	// (0x00051eab) popup_imed_adjust2_window_t1

0xdc47,	// (0x00051ec3) slider_imed_adjust_pane

0xdc5b,	// (0x00051ed7) slider_imed_adjust_pane_g1

0xdc6b,	// (0x00051ee7) slider_imed_adjust_pane_g2

0xdc7b,	// (0x00051ef7) slider_imed_adjust_pane_g3

0xdc8c,	// (0x00051f08) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x00053a6d) slider_imed_adjust_pane_g

0x6609,	// (0x0004a885) aid_size_cell_clipart2

0x6615,	// (0x0004a891) grid_imed_clipart_pane

0xdc9d,	// (0x00051f19) scroll_pane_cp031

0x661f,	// (0x0004a89b) cell_imed_clipart_pane_ParamLimits

0x661f,	// (0x0004a89b) cell_imed_clipart_pane

0x6646,	// (0x0004a8c2) cell_imed_clipart_pane_g1

0x1497,	// (0x00045713) grid_highlight_pane_cp014

0x62fb,	// (0x0004a577) main_clock2_pane_g1_ParamLimits

0x62fb,	// (0x0004a577) main_clock2_pane_g1

0x6442,	// (0x0004a6be) aid_call2_pane_cp10

0x6454,	// (0x0004a6d0) aid_call_pane_cp10

0xb235,	// (0x0004f4b1) popup_clock_analogue_window_cp10_g1

0xb235,	// (0x0004f4b1) popup_clock_analogue_window_cp10_g2

0x6466,	// (0x0004a6e2) popup_clock_analogue_window_cp10_g3

0x6466,	// (0x0004a6e2) popup_clock_analogue_window_cp10_g4

0xb235,	// (0x0004f4b1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x00053a5b) popup_clock_analogue_window_cp10_g

0x6478,	// (0x0004a6f4) popup_clock_analogue_window_cp10_t1

0x64a9,	// (0x0004a725) clock_digital_number_pane_cp10_ParamLimits

0x64a9,	// (0x0004a725) clock_digital_number_pane_cp10

0x64c1,	// (0x0004a73d) clock_digital_number_pane_cp11_ParamLimits

0x64c1,	// (0x0004a73d) clock_digital_number_pane_cp11

0x64d9,	// (0x0004a755) clock_digital_number_pane_cp12_ParamLimits

0x64d9,	// (0x0004a755) clock_digital_number_pane_cp12

0x64f1,	// (0x0004a76d) clock_digital_number_pane_cp13_ParamLimits

0x64f1,	// (0x0004a76d) clock_digital_number_pane_cp13

0x6509,	// (0x0004a785) clock_digital_separator_pane_cp10_ParamLimits

0x6509,	// (0x0004a785) clock_digital_separator_pane_cp10

0x6521,	// (0x0004a79d) popup_clock_digital_window_cp02_t1_ParamLimits

0x6521,	// (0x0004a79d) popup_clock_digital_window_cp02_t1

0x1dcd,	// (0x00046049) clock_digital_number_pane_cp10_g1

0x1dcd,	// (0x00046049) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00053a76) clock_digital_number_pane_cp10_g

0x1dcd,	// (0x00046049) clock_digital_separator_pane_cp10_g1

0x1dcd,	// (0x00046049) clock_digital_separator_pane_g2_cp10

0xb2d0,	// (0x0004f54c) navi_pane_vded_g4

0xb2d9,	// (0x0004f555) navi_pane_vded_g5

0xb2e2,	// (0x0004f55e) navi_pane_vded_t1

0x1497,	// (0x00045713) main_vded_pane

0x664f,	// (0x0004a8cb) main_vded_pane_g1

0x665b,	// (0x0004a8d7) main_vded_pane_g2

0x6665,	// (0x0004a8e1) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x00053a7b) main_vded_pane_g

0x666f,	// (0x0004a8eb) main_vded_pane_t1

0x667d,	// (0x0004a8f9) main_vded_pane_t2

0x0001,

0xf806,	// (0x00053a82) main_vded_pane_t

0x668b,	// (0x0004a907) vded_slider_pane

0x6695,	// (0x0004a911) vded_video_pane

0xdca5,	// (0x00051f21) vded_video_pane_g1

0x669f,	// (0x0004a91b) vded_video_pane_g2

0xd616,	// (0x00051892) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00053a87) vded_video_pane_g

0xdcaf,	// (0x00051f2b) vded_slider_pane_g1

0xd367,	// (0x000515e3) vded_slider_pane_g2

0xdcb8,	// (0x00051f34) vded_slider_pane_g3

0xdcc1,	// (0x00051f3d) vded_slider_pane_g4

0xdcca,	// (0x00051f46) vded_slider_pane_g5

0x0004,

0xf812,	// (0x00053a8e) vded_slider_pane_g

0x607c,	// (0x0004a2f8) mup3_rocker_pane_ParamLimits

0x607c,	// (0x0004a2f8) mup3_rocker_pane

0x66a8,	// (0x0004a924) mup3_control_keys_pane_g1

0x66b0,	// (0x0004a92c) mup3_control_keys_pane_g2

0x66b8,	// (0x0004a934) mup3_control_keys_pane_g3

0x66c0,	// (0x0004a93c) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00053a99) mup3_control_keys_pane_g

0x1685,	// (0x00045901) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1685,	// (0x00045901) popup_toolbar2_fixed_window_cp01

0x60b0,	// (0x0004a32c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x60b0,	// (0x0004a32c) popup_toolbar2_fixed_window_cp02

0xbb1f,	// (0x0004fd9b) popup_call2_audio_second_window_t4_ParamLimits

0xbb1f,	// (0x0004fd9b) popup_call2_audio_second_window_t4

0xc04d,	// (0x000502c9) popup_call2_audio_first_window_t6_ParamLimits

0xc04d,	// (0x000502c9) popup_call2_audio_first_window_t6

0xc2e3,	// (0x0005055f) popup_call2_audio_out_window_t6_ParamLimits

0xc2e3,	// (0x0005055f) popup_call2_audio_out_window_t6

0x1497,	// (0x00045713) main_vitu_pane

0x66d0,	// (0x0004a94c) aid_size_cell_itu_ParamLimits

0x66d0,	// (0x0004a94c) aid_size_cell_itu

0x16a3,	// (0x0004591f) bg_popup_window_pane_cp08_ParamLimits

0x16a3,	// (0x0004591f) bg_popup_window_pane_cp08

0x66e6,	// (0x0004a962) field_vitu_entry_pane_ParamLimits

0x66e6,	// (0x0004a962) field_vitu_entry_pane

0x66fd,	// (0x0004a979) grid_vitu_function_pane_ParamLimits

0x66fd,	// (0x0004a979) grid_vitu_function_pane

0x6718,	// (0x0004a994) grid_vitu_itu_pane_ParamLimits

0x6718,	// (0x0004a994) grid_vitu_itu_pane

0x6736,	// (0x0004a9b2) cell_vitu_itu_pane_ParamLimits

0x6736,	// (0x0004a9b2) cell_vitu_itu_pane

0x675a,	// (0x0004a9d6) cell_vitu_function_pane_ParamLimits

0x675a,	// (0x0004a9d6) cell_vitu_function_pane

0x16a3,	// (0x0004591f) bg_popup_sub_pane_cp08_ParamLimits

0x16a3,	// (0x0004591f) bg_popup_sub_pane_cp08

0x6775,	// (0x0004a9f1) field_vitu_entry_pane_t1_ParamLimits

0x6775,	// (0x0004a9f1) field_vitu_entry_pane_t1

0xdceb,	// (0x00051f67) field_vitu_entry_pane_t2_ParamLimits

0xdceb,	// (0x00051f67) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00053aa7) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00053aa7) field_vitu_entry_pane_t

0xdd08,	// (0x00051f84) bg_button_pane_cp05_ParamLimits

0xdd08,	// (0x00051f84) bg_button_pane_cp05

0x6795,	// (0x0004aa11) cell_vitu_itu_pane_g1

0x67ad,	// (0x0004aa29) cell_vitu_itu_pane_t1_ParamLimits

0x67ad,	// (0x0004aa29) cell_vitu_itu_pane_t1

0x67bf,	// (0x0004aa3b) cell_vitu_itu_pane_t2_ParamLimits

0x67bf,	// (0x0004aa3b) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x00053aac) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x00053aac) cell_vitu_itu_pane_t

0xdd16,	// (0x00051f92) bg_button_pane_cp07

0x67f4,	// (0x0004aa70) cell_vitu_function_pane_g1

0xa7ad,	// (0x0004ea29) main_calc_pane_g1

0x14c5,	// (0x00045741) aid_visual_content_pane

0x1497,	// (0x00045713) main_vradio_pane

0x67fd,	// (0x0004aa79) main_vradio_pane_g1_ParamLimits

0x67fd,	// (0x0004aa79) main_vradio_pane_g1

0xdd20,	// (0x00051f9c) main_vradio_pane_g2_ParamLimits

0xdd20,	// (0x00051f9c) main_vradio_pane_g2

0x0001,

0xf837,	// (0x00053ab3) main_vradio_pane_g_ParamLimits

0xf837,	// (0x00053ab3) main_vradio_pane_g

0x6816,	// (0x0004aa92) main_vradio_pane_t1_ParamLimits

0x6816,	// (0x0004aa92) main_vradio_pane_t1

0x682b,	// (0x0004aaa7) main_vradio_pane_t2_ParamLimits

0x682b,	// (0x0004aaa7) main_vradio_pane_t2

0xdd2d,	// (0x00051fa9) main_vradio_pane_t3_ParamLimits

0xdd2d,	// (0x00051fa9) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x00053ab8) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x00053ab8) main_vradio_pane_t

0x6840,	// (0x0004aabc) vradio_rocker_control_pane_ParamLimits

0x6840,	// (0x0004aabc) vradio_rocker_control_pane

0x6852,	// (0x0004aace) vradio_station_info_pane_ParamLimits

0x6852,	// (0x0004aace) vradio_station_info_pane

0xdd41,	// (0x00051fbd) vradio_frequency_info_pane_ParamLimits

0xdd41,	// (0x00051fbd) vradio_frequency_info_pane

0xd616,	// (0x00051892) vradio_station_info_pane_g1

0xdd50,	// (0x00051fcc) vradio_station_info_pane_t1_ParamLimits

0xdd50,	// (0x00051fcc) vradio_station_info_pane_t1

0xdd72,	// (0x00051fee) vradio_station_info_pane_t2_ParamLimits

0xdd72,	// (0x00051fee) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x00053abf) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x00053abf) vradio_station_info_pane_t

0xdd84,	// (0x00052000) vradio_tuning_pane

0xdd8c,	// (0x00052008) vradio_rocker_control_pane_g1

0xdd94,	// (0x00052010) vradio_rocker_control_pane_g2

0xdd9c,	// (0x00052018) vradio_rocker_control_pane_g3

0xdda4,	// (0x00052020) vradio_rocker_control_pane_g4

0xddac,	// (0x00052028) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x00053ac4) vradio_rocker_control_pane_g

0x6864,	// (0x0004aae0) vradio_frequency_info_pane_g1

0xddb4,	// (0x00052030) vradio_frequency_info_pane_t1_ParamLimits

0xddb4,	// (0x00052030) vradio_frequency_info_pane_t1

0x686e,	// (0x0004aaea) vradio_tuning_pane_g1

0x6879,	// (0x0004aaf5) vradio_tuning_pane_t1

0xa76b,	// (0x0004e9e7) area_side_right_pane_ParamLimits

0xa76b,	// (0x0004e9e7) area_side_right_pane

0xc766,	// (0x000509e2) status_small_pane_g1

0xc76e,	// (0x000509ea) status_small_pane_g2

0xc777,	// (0x000509f3) status_small_pane_g3

0xc780,	// (0x000509fc) status_small_pane_g4

0x0003,

0xf608,	// (0x00053884) status_small_pane_g

0xc789,	// (0x00050a05) status_small_pane_t1

0x1497,	// (0x00045713) main_video3_pane

0xddc8,	// (0x00052044) cams_zoom_vslider_pane

0xddd0,	// (0x0005204c) image3_wide_pane_ParamLimits

0xddd0,	// (0x0005204c) image3_wide_pane

0xddea,	// (0x00052066) image3_wide_small_pane

0xddf6,	// (0x00052072) main_video3_pane_g1_ParamLimits

0xddf6,	// (0x00052072) main_video3_pane_g1

0xde12,	// (0x0005208e) main_video3_pane_g2_ParamLimits

0xde12,	// (0x0005208e) main_video3_pane_g2

0x0001,

0xf853,	// (0x00053acf) main_video3_pane_g_ParamLimits

0xf853,	// (0x00053acf) main_video3_pane_g

0xde2e,	// (0x000520aa) main_video3_pane_t1_ParamLimits

0xde2e,	// (0x000520aa) main_video3_pane_t1

0xde59,	// (0x000520d5) main_video3_pane_t2_ParamLimits

0xde59,	// (0x000520d5) main_video3_pane_t2

0xde84,	// (0x00052100) main_video3_pane_t3_ParamLimits

0xde84,	// (0x00052100) main_video3_pane_t3

0x0002,

0xf858,	// (0x00053ad4) main_video3_pane_t_ParamLimits

0xf858,	// (0x00053ad4) main_video3_pane_t

0xdeb1,	// (0x0005212d) cams_zoom_vslider_pane_g1

0xdeba,	// (0x00052136) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x00053adb) cams_zoom_vslider_pane_g

0xdec2,	// (0x0005213e) small_slider_vertical_pane

0xd616,	// (0x00051892) small_slider_vertical_pane_g1

0xd616,	// (0x00051892) small_slider_vertical_pane_g2

0xdeca,	// (0x00052146) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x00053ae0) small_slider_vertical_pane_g

0x1497,	// (0x00045713) main_hwr_training_pane

0xded3,	// (0x0005214f) hwr_training_instruct_pane_ParamLimits

0xded3,	// (0x0005214f) hwr_training_instruct_pane

0x6888,	// (0x0004ab04) hwr_training_navi_pane_ParamLimits

0x6888,	// (0x0004ab04) hwr_training_navi_pane

0x68a7,	// (0x0004ab23) hwr_training_write_pane_ParamLimits

0x68a7,	// (0x0004ab23) hwr_training_write_pane

0x1497,	// (0x00045713) bg_frame_shadow_pane

0xdf0a,	// (0x00052186) hwr_training_write_pane_g1

0xdf12,	// (0x0005218e) hwr_training_write_pane_g2

0xdf1a,	// (0x00052196) hwr_training_write_pane_g3

0xdf22,	// (0x0005219e) hwr_training_write_pane_g4

0xdf2a,	// (0x000521a6) hwr_training_write_pane_g5

0xdf32,	// (0x000521ae) hwr_training_write_pane_g6

0xdf3a,	// (0x000521b6) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x00053ae7) hwr_training_write_pane_g

0xc993,	// (0x00050c0f) hwr_training_navi_pane_g1_ParamLimits

0xc993,	// (0x00050c0f) hwr_training_navi_pane_g1

0xc9a5,	// (0x00050c21) hwr_training_navi_pane_g2_ParamLimits

0xc9a5,	// (0x00050c21) hwr_training_navi_pane_g2

0xc9b7,	// (0x00050c33) hwr_training_navi_pane_g3_ParamLimits

0xc9b7,	// (0x00050c33) hwr_training_navi_pane_g3

0xc9c7,	// (0x00050c43) hwr_training_navi_pane_g4_ParamLimits

0xc9c7,	// (0x00050c43) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x00053af6) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x00053af6) hwr_training_navi_pane_g

0xc9d4,	// (0x00050c50) hwr_training_navi_pane_t1

0x68f1,	// (0x0004ab6d) list_single_hwr_training_instruct_pane_ParamLimits

0x68f1,	// (0x0004ab6d) list_single_hwr_training_instruct_pane

0xdf42,	// (0x000521be) list_single_hwr_training_instruct_pane_t1

0xd556,	// (0x000517d2) bg_frame_shadow_pane_g1

0xdf51,	// (0x000521cd) bg_frame_shadow_pane_g2

0xdf59,	// (0x000521d5) bg_frame_shadow_pane_g3

0xdf61,	// (0x000521dd) bg_frame_shadow_pane_g4

0xdf69,	// (0x000521e5) bg_frame_shadow_pane_g5

0xdf71,	// (0x000521ed) bg_frame_shadow_pane_g6

0xdf79,	// (0x000521f5) bg_frame_shadow_pane_g7

0x23a1,	// (0x0004661d) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x00053b01) bg_frame_shadow_pane_g

0x1497,	// (0x00045713) main_video_tele_dialer_pane

0x690e,	// (0x0004ab8a) aid_size_cell_video_keypad_ParamLimits

0x690e,	// (0x0004ab8a) aid_size_cell_video_keypad

0x6928,	// (0x0004aba4) grid_video_dialer_keypad_pane_ParamLimits

0x6928,	// (0x0004aba4) grid_video_dialer_keypad_pane

0x6974,	// (0x0004abf0) video_down_pane_cp_ParamLimits

0x6974,	// (0x0004abf0) video_down_pane_cp

0x69a4,	// (0x0004ac20) cell_video_dialer_keypad_pane_ParamLimits

0x69a4,	// (0x0004ac20) cell_video_dialer_keypad_pane

0xdf81,	// (0x000521fd) bg_button_pane_cp08_ParamLimits

0xdf81,	// (0x000521fd) bg_button_pane_cp08

0x69c6,	// (0x0004ac42) cell_video_dialer_keypad_pane_g1_ParamLimits

0x69c6,	// (0x0004ac42) cell_video_dialer_keypad_pane_g1

0x6066,	// (0x0004a2e2) mup3_rocker2_pane_ParamLimits

0x6066,	// (0x0004a2e2) mup3_rocker2_pane

0xd616,	// (0x00051892) mup3_rocker2_pane_g1

0x4bc2,	// (0x00048e3e) main_dialer2_pane

0x1497,	// (0x00045713) main_mp4_pane

0xc9ea,	// (0x00050c66) main_mp4_pane_g1_ParamLimits

0xc9ea,	// (0x00050c66) main_mp4_pane_g1

0xc9ea,	// (0x00050c66) main_mp4_pane_g2_ParamLimits

0xc9ea,	// (0x00050c66) main_mp4_pane_g2

0x6a01,	// (0x0004ac7d) main_mp4_pane_g3_ParamLimits

0x6a01,	// (0x0004ac7d) main_mp4_pane_g3

0xc9f8,	// (0x00050c74) main_mp4_pane_g4_ParamLimits

0xc9f8,	// (0x00050c74) main_mp4_pane_g4

0xca20,	// (0x00050c9c) main_mp4_pane_g5_ParamLimits

0xca20,	// (0x00050c9c) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00053b21) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00053b21) main_mp4_pane_g

0xca70,	// (0x00050cec) main_mp4_pane_t1_ParamLimits

0xca70,	// (0x00050cec) main_mp4_pane_t1

0xcacc,	// (0x00050d48) main_mp4_pane_t2_ParamLimits

0xcacc,	// (0x00050d48) main_mp4_pane_t2

0xdf8d,	// (0x00052209) main_mp4_pane_t3_ParamLimits

0xdf8d,	// (0x00052209) main_mp4_pane_t3

0xcb1e,	// (0x00050d9a) main_mp4_pane_t4_ParamLimits

0xcb1e,	// (0x00050d9a) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x00053b2e) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x00053b2e) main_mp4_pane_t

0xcb62,	// (0x00050dde) mp4_progress_pane_ParamLimits

0xcb62,	// (0x00050dde) mp4_progress_pane

0xcbac,	// (0x00050e28) mp4_rocker_pane_ParamLimits

0xcbac,	// (0x00050e28) mp4_rocker_pane

0xdfb5,	// (0x00052231) mp4_progress_pane_t1

0xdfce,	// (0x0005224a) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00053b37) mp4_progress_pane_t

0xdfe7,	// (0x00052263) mup_progress_pane_cp04

0xd616,	// (0x00051892) mp4_rocker_pane_g1

0x6a3d,	// (0x0004acb9) aid_cell_size_keypad2_ParamLimits

0x6a3d,	// (0x0004acb9) aid_cell_size_keypad2

0x6a53,	// (0x0004accf) dialer2_ne_pane_ParamLimits

0x6a53,	// (0x0004accf) dialer2_ne_pane

0x6a6d,	// (0x0004ace9) grid_dialer2_keypad_pane_ParamLimits

0x6a6d,	// (0x0004ace9) grid_dialer2_keypad_pane

0xd3f9,	// (0x00051675) bg_popup_call_pane_cp07_ParamLimits

0xd3f9,	// (0x00051675) bg_popup_call_pane_cp07

0x6a8b,	// (0x0004ad07) dialer2_ne_pane_t1_ParamLimits

0x6a8b,	// (0x0004ad07) dialer2_ne_pane_t1

0x6aca,	// (0x0004ad46) cell_dialer2_keypad_pane_ParamLimits

0x6aca,	// (0x0004ad46) cell_dialer2_keypad_pane

0xe005,	// (0x00052281) bg_button_pane_pane_cp04_ParamLimits

0xe005,	// (0x00052281) bg_button_pane_pane_cp04

0x6aee,	// (0x0004ad6a) cell_dialer2_keypad_pane_g1_ParamLimits

0x6aee,	// (0x0004ad6a) cell_dialer2_keypad_pane_g1

0x2bf8,	// (0x00046e74) aid_placing_vt_set_content_ParamLimits

0x2bf8,	// (0x00046e74) aid_placing_vt_set_content

0x2c20,	// (0x00046e9c) aid_placing_vt_set_title_ParamLimits

0x2c20,	// (0x00046e9c) aid_placing_vt_set_title

0x1497,	// (0x00045713) main_image3_pane

0x6bb4,	// (0x0004ae30) area_side_right_pane_cp01_ParamLimits

0x6bb4,	// (0x0004ae30) area_side_right_pane_cp01

0xc9ea,	// (0x00050c66) main_image3_pane_g1_ParamLimits

0xc9ea,	// (0x00050c66) main_image3_pane_g1

0x6bcb,	// (0x0004ae47) main_image3_pane_g2_ParamLimits

0x6bcb,	// (0x0004ae47) main_image3_pane_g2

0x6bf3,	// (0x0004ae6f) main_image3_pane_g3_ParamLimits

0x6bf3,	// (0x0004ae6f) main_image3_pane_g3

0x6c1d,	// (0x0004ae99) main_image3_pane_g4_ParamLimits

0x6c1d,	// (0x0004ae99) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x00053b46) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x00053b46) main_image3_pane_g

0x6c47,	// (0x0004aec3) main_image3_pane_t1_ParamLimits

0x6c47,	// (0x0004aec3) main_image3_pane_t1

0x6c9f,	// (0x0004af1b) main_image3_pane_t2_ParamLimits

0x6c9f,	// (0x0004af1b) main_image3_pane_t2

0x6cf1,	// (0x0004af6d) main_image3_pane_t3_ParamLimits

0x6cf1,	// (0x0004af6d) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x00053b4f) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x00053b4f) main_image3_pane_t

0x16a3,	// (0x0004591f) grid_sctrl_middle_pane_cp01_ParamLimits

0x16a3,	// (0x0004591f) grid_sctrl_middle_pane_cp01

0x6d79,	// (0x0004aff5) cell_sctrl_middle_pane_cp01_ParamLimits

0x6d79,	// (0x0004aff5) cell_sctrl_middle_pane_cp01

0x6d96,	// (0x0004b012) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6d96,	// (0x0004b012) cell_sctrl_middle_pane_cp01_g1

0x1497,	// (0x00045713) main_call4_pane

0x6dac,	// (0x0004b028) aid_size_button_call4_ParamLimits

0x6dac,	// (0x0004b028) aid_size_button_call4

0x6ddd,	// (0x0004b059) call4_windows_pane_ParamLimits

0x6ddd,	// (0x0004b059) call4_windows_pane

0x6dfd,	// (0x0004b079) grid_call4_button_pane_ParamLimits

0x6dfd,	// (0x0004b079) grid_call4_button_pane

0xe011,	// (0x0005228d) call4_windows_conf_pane

0xe026,	// (0x000522a2) popup_call4_audio_first_window_ParamLimits

0xe026,	// (0x000522a2) popup_call4_audio_first_window

0xe072,	// (0x000522ee) popup_call4_audio_second_window_ParamLimits

0xe072,	// (0x000522ee) popup_call4_audio_second_window

0xe086,	// (0x00052302) popup_call4_audio_wait_window_ParamLimits

0xe086,	// (0x00052302) popup_call4_audio_wait_window

0x6e2a,	// (0x0004b0a6) cell_call4_button_pane_ParamLimits

0x6e2a,	// (0x0004b0a6) cell_call4_button_pane

0x6e53,	// (0x0004b0cf) bg_button_pane_cp09_ParamLimits

0x6e53,	// (0x0004b0cf) bg_button_pane_cp09

0x6e5f,	// (0x0004b0db) cell_call4_button_pane_g1_ParamLimits

0x6e5f,	// (0x0004b0db) cell_call4_button_pane_g1

0x6e85,	// (0x0004b101) cell_call4_button_pane_t1_ParamLimits

0x6e85,	// (0x0004b101) cell_call4_button_pane_t1

0xe0ce,	// (0x0005234a) popup_call4_audio_conf_window_ParamLimits

0xe0ce,	// (0x0005234a) popup_call4_audio_conf_window

0x60c6,	// (0x0004a342) mup3_progress_pane_t1_ParamLimits

0x60e5,	// (0x0004a361) mup3_progress_pane_t2_ParamLimits

0xd9e4,	// (0x00051c60) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00053a28) mup3_progress_pane_t_ParamLimits

0xda01,	// (0x00051c7d) mup_progress_pane_cp03_ParamLimits

0x66c8,	// (0x0004a944) mup3_control_keys_pane_g4_copy1

0xcb90,	// (0x00050e0c) mp4_rocker2_pane_ParamLimits

0xcb90,	// (0x00050e0c) mp4_rocker2_pane

0xe0e2,	// (0x0005235e) mp4_rocker2_pane_g1

0xe0ea,	// (0x00052366) mp4_rocker2_pane_g2

0xcbfe,	// (0x00050e7a) mp4_rocker2_pane_g3

0xcc06,	// (0x00050e82) mp4_rocker2_pane_g4

0xcc0e,	// (0x00050e8a) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00053b58) mp4_rocker2_pane_g

0x1497,	// (0x00045713) main_camera4_pane

0x1497,	// (0x00045713) main_video4_pane

0x6942,	// (0x0004abbe) main_video_tele_dialer_pane_t1_ParamLimits

0x6942,	// (0x0004abbe) main_video_tele_dialer_pane_t1

0x695b,	// (0x0004abd7) main_video_tele_dialer_pane_t2_ParamLimits

0x695b,	// (0x0004abd7) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00053b12) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00053b12) main_video_tele_dialer_pane_t

0x6ec7,	// (0x0004b143) cam4_autofocus_pane_ParamLimits

0x6ec7,	// (0x0004b143) cam4_autofocus_pane

0x6edd,	// (0x0004b159) cam4_image_uncrop_pane_ParamLimits

0x6edd,	// (0x0004b159) cam4_image_uncrop_pane

0x6ef7,	// (0x0004b173) cam4_indicators_pane_ParamLimits

0x6ef7,	// (0x0004b173) cam4_indicators_pane

0x6f22,	// (0x0004b19e) main_camera4_pane_g1_ParamLimits

0x6f22,	// (0x0004b19e) main_camera4_pane_g1

0x6f34,	// (0x0004b1b0) main_camera4_pane_g2_ParamLimits

0x6f34,	// (0x0004b1b0) main_camera4_pane_g2

0x6f47,	// (0x0004b1c3) main_camera4_pane_g3_ParamLimits

0x6f47,	// (0x0004b1c3) main_camera4_pane_g3

0x6f5a,	// (0x0004b1d6) main_camera4_pane_g4_ParamLimits

0x6f5a,	// (0x0004b1d6) main_camera4_pane_g4

0x6f6d,	// (0x0004b1e9) main_camera4_pane_g5_ParamLimits

0x6f6d,	// (0x0004b1e9) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00053b63) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00053b63) main_camera4_pane_g

0x6f91,	// (0x0004b20d) main_camera4_pane_t1_ParamLimits

0x6f91,	// (0x0004b20d) main_camera4_pane_t1

0xd969,	// (0x00051be5) bg_tb_trans_pane_cp06

0xcc3a,	// (0x00050eb6) cam4_indicators_pane_g1

0xcc4b,	// (0x00050ec7) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x00053b7e) cam4_indicators_pane_g

0xcc69,	// (0x00050ee5) cam4_indicators_pane_t1

0x6ff5,	// (0x0004b271) main_video4_pane_g1_ParamLimits

0x6ff5,	// (0x0004b271) main_video4_pane_g1

0x7004,	// (0x0004b280) main_video4_pane_g2_ParamLimits

0x7004,	// (0x0004b280) main_video4_pane_g2

0x7013,	// (0x0004b28f) main_video4_pane_g3_ParamLimits

0x7013,	// (0x0004b28f) main_video4_pane_g3

0x7022,	// (0x0004b29e) main_video4_pane_g4_ParamLimits

0x7022,	// (0x0004b29e) main_video4_pane_g4

0x0004,

0xf909,	// (0x00053b85) main_video4_pane_g_ParamLimits

0xf909,	// (0x00053b85) main_video4_pane_g

0x7040,	// (0x0004b2bc) vid4_indicators_pane_ParamLimits

0x7040,	// (0x0004b2bc) vid4_indicators_pane

0x7070,	// (0x0004b2ec) video4_image_uncrop_cif_pane_ParamLimits

0x7070,	// (0x0004b2ec) video4_image_uncrop_cif_pane

0x708a,	// (0x0004b306) video4_image_uncrop_nhd_pane_ParamLimits

0x708a,	// (0x0004b306) video4_image_uncrop_nhd_pane

0x6edd,	// (0x0004b159) video4_image_uncrop_vga_pane_ParamLimits

0x6edd,	// (0x0004b159) video4_image_uncrop_vga_pane

0x16a3,	// (0x0004591f) bg_tb_trans_pane_cp07

0xcc93,	// (0x00050f0f) vid4_indicators_pane_g1

0xcca7,	// (0x00050f23) vid4_indicators_pane_g2

0xccbb,	// (0x00050f37) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00053b90) vid4_indicators_pane_g

0xcce8,	// (0x00050f64) vid4_indicators_pane_t1

0x709e,	// (0x0004b31a) cam4_autofocus_pane_g1

0x70a6,	// (0x0004b322) cam4_autofocus_pane_g2

0x70ae,	// (0x0004b32a) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00053b9b) cam4_autofocus_pane_g

0x70b6,	// (0x0004b332) cam4_autofocus_pane_g3_copy1

0x6988,	// (0x0004ac04) video_down_pane_cp_t1

0x6996,	// (0x0004ac12) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00053b17) video_down_pane_cp_t

0x16a3,	// (0x0004591f) popup_vitu2_window_ParamLimits

0x16a3,	// (0x0004591f) popup_vitu2_window

0x70be,	// (0x0004b33a) aid_size_cell2_itu2_ParamLimits

0x70be,	// (0x0004b33a) aid_size_cell2_itu2

0x70e4,	// (0x0004b360) aid_size_cell_itu2_ParamLimits

0x70e4,	// (0x0004b360) aid_size_cell_itu2

0x7140,	// (0x0004b3bc) bg_popup_window_pane_cp09_ParamLimits

0x7140,	// (0x0004b3bc) bg_popup_window_pane_cp09

0x714e,	// (0x0004b3ca) field_vitu2_entry_pane_ParamLimits

0x714e,	// (0x0004b3ca) field_vitu2_entry_pane

0x7174,	// (0x0004b3f0) grid_vitu2_function_pane_ParamLimits

0x7174,	// (0x0004b3f0) grid_vitu2_function_pane

0x71c5,	// (0x0004b441) grid_vitu2_itu_pane_ParamLimits

0x71c5,	// (0x0004b441) grid_vitu2_itu_pane

0x7256,	// (0x0004b4d2) cell_vitu2_itu_pane_ParamLimits

0x7256,	// (0x0004b4d2) cell_vitu2_itu_pane

0x727a,	// (0x0004b4f6) cell_vitu2_function_pane_ParamLimits

0x727a,	// (0x0004b4f6) cell_vitu2_function_pane

0xe0f2,	// (0x0005236e) bg_popup_call_pane_cp08_ParamLimits

0xe0f2,	// (0x0005236e) bg_popup_call_pane_cp08

0xe10b,	// (0x00052387) field_vitu2_entry_pane_g1

0xe117,	// (0x00052393) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00053ba2) field_vitu2_entry_pane_g

0xccff,	// (0x00050f7b) field_vitu2_entry_pane_t1_ParamLimits

0xccff,	// (0x00050f7b) field_vitu2_entry_pane_t1

0xcd31,	// (0x00050fad) field_vitu2_entry_pane_t2_ParamLimits

0xcd31,	// (0x00050fad) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00053ba9) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00053ba9) field_vitu2_entry_pane_t

0x72b9,	// (0x0004b535) bg_button_pane_cp010_ParamLimits

0x72b9,	// (0x0004b535) bg_button_pane_cp010

0x72c7,	// (0x0004b543) cell_vitu2_itu_pane_g1

0x72e5,	// (0x0004b561) cell_vitu2_itu_pane_t1_ParamLimits

0x72e5,	// (0x0004b561) cell_vitu2_itu_pane_t1

0x0b4f,	// (0x00044dcb) cell_vitu2_itu_pane_t2_ParamLimits

0x0b4f,	// (0x00044dcb) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00053bb3) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00053bb3) cell_vitu2_itu_pane_t

0x16a3,	// (0x0004591f) bg_button_pane_cp011

0x734b,	// (0x0004b5c7) cell_vitu2_function_pane_g1

0x1497,	// (0x00045713) main_myfav_hc_pane

0x6d41,	// (0x0004afbd) popup_image3_note_pane_ParamLimits

0x6d41,	// (0x0004afbd) popup_image3_note_pane

0x6d5d,	// (0x0004afd9) popup_image3_tool_bar_pane_ParamLimits

0x6d5d,	// (0x0004afd9) popup_image3_tool_bar_pane

0x0bd3,	// (0x00044e4f) cell_vitu2_itu_pane_t3_ParamLimits

0x0bd3,	// (0x00044e4f) cell_vitu2_itu_pane_t3

0x1497,	// (0x00045713) bg_popup_trans_pane

0xe155,	// (0x000523d1) grid_image3_tool_bar_pane

0xe15f,	// (0x000523db) bg_popup_trans_pane_g1

0xab4e,	// (0x0004edca) bg_popup_trans_pane_g2

0xe167,	// (0x000523e3) bg_popup_trans_pane_g3

0xe16f,	// (0x000523eb) bg_popup_trans_pane_g4

0xe177,	// (0x000523f3) bg_popup_trans_pane_g5

0xe17f,	// (0x000523fb) bg_popup_trans_pane_g6

0xe187,	// (0x00052403) bg_popup_trans_pane_g7

0xe18f,	// (0x0005240b) bg_popup_trans_pane_g8

0xab2e,	// (0x0004edaa) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00053bba) bg_popup_trans_pane_g

0xe197,	// (0x00052413) cell_image3_tool_bar_pane_ParamLimits

0xe197,	// (0x00052413) cell_image3_tool_bar_pane

0xd616,	// (0x00051892) cell_image3_tool_bar_pane_g1

0x1497,	// (0x00045713) bg_popup_trans_pane_cp1

0xe1ab,	// (0x00052427) popup_image3_note_pane_t1

0xe1b9,	// (0x00052435) popup_image3_note_pane_t2

0xe1c7,	// (0x00052443) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x00053bcd) popup_image3_note_pane_t

0xe1d5,	// (0x00052451) popup_image3_note_pane_t3_copy1

0x735f,	// (0x0004b5db) bg_myfav_hc_instruction_pane_ParamLimits

0x735f,	// (0x0004b5db) bg_myfav_hc_instruction_pane

0x7375,	// (0x0004b5f1) cell_myfav_contact_pane_ParamLimits

0x7375,	// (0x0004b5f1) cell_myfav_contact_pane

0x7391,	// (0x0004b60d) cell_myfav_contact_pane_cp1_ParamLimits

0x7391,	// (0x0004b60d) cell_myfav_contact_pane_cp1

0x73a9,	// (0x0004b625) cell_myfav_contact_pane_cp2_ParamLimits

0x73a9,	// (0x0004b625) cell_myfav_contact_pane_cp2

0x73c1,	// (0x0004b63d) cell_myfav_contact_pane_cp3_ParamLimits

0x73c1,	// (0x0004b63d) cell_myfav_contact_pane_cp3

0x73d8,	// (0x0004b654) cell_myfav_contact_pane_cp4_ParamLimits

0x73d8,	// (0x0004b654) cell_myfav_contact_pane_cp4

0x73f0,	// (0x0004b66c) cell_myfav_contact_pane_cp5_ParamLimits

0x73f0,	// (0x0004b66c) cell_myfav_contact_pane_cp5

0x7404,	// (0x0004b680) cell_myfav_contact_pane_cp6_ParamLimits

0x7404,	// (0x0004b680) cell_myfav_contact_pane_cp6

0x741a,	// (0x0004b696) cell_myfav_contact_pane_cp7_ParamLimits

0x741a,	// (0x0004b696) cell_myfav_contact_pane_cp7

0xe1e3,	// (0x0005245f) listscroll_gen_pane_cp05

0x7434,	// (0x0004b6b0) main_myfav_hc_pane_g1_ParamLimits

0x7434,	// (0x0004b6b0) main_myfav_hc_pane_g1

0x744e,	// (0x0004b6ca) main_myfav_hc_pane_g2_ParamLimits

0x744e,	// (0x0004b6ca) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00053bd4) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00053bd4) main_myfav_hc_pane_g

0x7480,	// (0x0004b6fc) main_myfav_hc_pane_t1_ParamLimits

0x7480,	// (0x0004b6fc) main_myfav_hc_pane_t1

0xe1ec,	// (0x00052468) main_myfav_hc_pane_t2_ParamLimits

0xe1ec,	// (0x00052468) main_myfav_hc_pane_t2

0xe1fe,	// (0x0005247a) main_myfav_hc_pane_t3_ParamLimits

0xe1fe,	// (0x0005247a) main_myfav_hc_pane_t3

0x7497,	// (0x0004b713) main_myfav_hc_pane_t4_ParamLimits

0x7497,	// (0x0004b713) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x00053bdb) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x00053bdb) main_myfav_hc_pane_t

0xd616,	// (0x00051892) bg_myfav_hc_instruction_pane_g1

0xe210,	// (0x0005248c) cell_myfav_contact_pane_g1_ParamLimits

0xe210,	// (0x0005248c) cell_myfav_contact_pane_g1

0xe210,	// (0x0005248c) cell_myfav_contact_pane_g2_ParamLimits

0xe210,	// (0x0005248c) cell_myfav_contact_pane_g2

0xe21c,	// (0x00052498) cell_myfav_contact_pane_g3_ParamLimits

0xe21c,	// (0x00052498) cell_myfav_contact_pane_g3

0xd9ce,	// (0x00051c4a) cell_myfav_contact_pane_g4_ParamLimits

0xd9ce,	// (0x00051c4a) cell_myfav_contact_pane_g4

0xe229,	// (0x000524a5) cell_myfav_contact_pane_g5_ParamLimits

0xe229,	// (0x000524a5) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x00053be6) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x00053be6) cell_myfav_contact_pane_g

0x7468,	// (0x0004b6e4) main_myfav_hc_pane_g3_ParamLimits

0x7468,	// (0x0004b6e4) main_myfav_hc_pane_g3

0x15e7,	// (0x00045863) popup_adpt_find_window

0x74bf,	// (0x0004b73b) afind_page_pane_ParamLimits

0x74bf,	// (0x0004b73b) afind_page_pane

0x74d4,	// (0x0004b750) aid_size_cell_afind_ParamLimits

0x74d4,	// (0x0004b750) aid_size_cell_afind

0x74f2,	// (0x0004b76e) bg_popup_sub_pane_cp09_ParamLimits

0x74f2,	// (0x0004b76e) bg_popup_sub_pane_cp09

0x74ff,	// (0x0004b77b) find_pane_cp01_ParamLimits

0x74ff,	// (0x0004b77b) find_pane_cp01

0xe235,	// (0x000524b1) grid_afind_control_pane_ParamLimits

0xe235,	// (0x000524b1) grid_afind_control_pane

0x750c,	// (0x0004b788) grid_afind_pane_ParamLimits

0x750c,	// (0x0004b788) grid_afind_pane

0x752e,	// (0x0004b7aa) cell_afind_pane_ParamLimits

0x752e,	// (0x0004b7aa) cell_afind_pane

0xd616,	// (0x00051892) afind_page_pane_g1

0x758f,	// (0x0004b80b) afind_page_pane_g2

0x7598,	// (0x0004b814) afind_page_pane_g3

0x0002,

0xf975,	// (0x00053bf1) afind_page_pane_g

0x75a1,	// (0x0004b81d) afind_page_pane_t1

0xe249,	// (0x000524c5) cell_afind_grid_control_pane_ParamLimits

0xe249,	// (0x000524c5) cell_afind_grid_control_pane

0xe005,	// (0x00052281) bg_button_pane_cp69_ParamLimits

0xe005,	// (0x00052281) bg_button_pane_cp69

0x75c1,	// (0x0004b83d) cell_afind_pane_g1_ParamLimits

0x75c1,	// (0x0004b83d) cell_afind_pane_g1

0x75ce,	// (0x0004b84a) cell_afind_pane_t1_ParamLimits

0x75ce,	// (0x0004b84a) cell_afind_pane_t1

0x2bc0,	// (0x00046e3c) bg_button_pane_cp72

0xe258,	// (0x000524d4) cell_afind_grid_control_pane_g1

0x4685,	// (0x00048901) aid_image_placing_area_ParamLimits

0x4685,	// (0x00048901) aid_image_placing_area

0xdcd3,	// (0x00051f4f) field_vitu_entry_pane_g1_ParamLimits

0xdcd3,	// (0x00051f4f) field_vitu_entry_pane_g1

0xdcdf,	// (0x00051f5b) field_vitu_entry_pane_g2_ParamLimits

0xdcdf,	// (0x00051f5b) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00053aa2) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00053aa2) field_vitu_entry_pane_g

0x6795,	// (0x0004aa11) cell_vitu_itu_pane_g1_ParamLimits

0x67d7,	// (0x0004aa53) cell_vitu_itu_pane_t3_ParamLimits

0x67d7,	// (0x0004aa53) cell_vitu_itu_pane_t3

0xdfb5,	// (0x00052231) mp4_progress_pane_t1_ParamLimits

0xdfce,	// (0x0005224a) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00053b37) mp4_progress_pane_t_ParamLimits

0xdfe7,	// (0x00052263) mup_progress_pane_cp04_ParamLimits

0x74ab,	// (0x0004b727) main_myfav_hc_pane_t5_ParamLimits

0x74ab,	// (0x0004b727) main_myfav_hc_pane_t5

0xa75b,	// (0x0004e9d7) aid_zoom_text_primary

0x15e7,	// (0x00045863) popup_adpt_find_window_ParamLimits

0x16a3,	// (0x0004591f) main_cam_set_pane

0x6f0e,	// (0x0004b18a) cam4_zoom_pane_ParamLimits

0x6f0e,	// (0x0004b18a) cam4_zoom_pane

0x75e0,	// (0x0004b85c) main_cam_set_pane_g1_ParamLimits

0x75e0,	// (0x0004b85c) main_cam_set_pane_g1

0x75ee,	// (0x0004b86a) main_cam_set_pane_g2_ParamLimits

0x75ee,	// (0x0004b86a) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00053bf8) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00053bf8) main_cam_set_pane_g

0x760f,	// (0x0004b88b) main_cam_set_pane_t1_ParamLimits

0x760f,	// (0x0004b88b) main_cam_set_pane_t1

0x762a,	// (0x0004b8a6) main_cset_listscroll_pane_ParamLimits

0x762a,	// (0x0004b8a6) main_cset_listscroll_pane

0x764a,	// (0x0004b8c6) main_cset_slider_pane_ParamLimits

0x764a,	// (0x0004b8c6) main_cset_slider_pane

0xe269,	// (0x000524e5) main_cset_list_pane_ParamLimits

0xe269,	// (0x000524e5) main_cset_list_pane

0xe279,	// (0x000524f5) scroll_pane_cp028

0x7670,	// (0x0004b8ec) aid_area_touch_slider

0x768c,	// (0x0004b908) cset_slider_pane

0x76b6,	// (0x0004b932) main_cset_slider_pane_g1

0x76cb,	// (0x0004b947) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00053bfd) main_cset_slider_pane_g

0xe2b2,	// (0x0005252e) main_cset_slider_pane_t1

0x7787,	// (0x0004ba03) main_cset_slider_pane_t2

0x77a1,	// (0x0004ba1d) main_cset_slider_pane_t3

0x77bb,	// (0x0004ba37) main_cset_slider_pane_t4

0x77d5,	// (0x0004ba51) main_cset_slider_pane_t5

0x77f1,	// (0x0004ba6d) main_cset_slider_pane_t6

0x7806,	// (0x0004ba82) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00053c22) main_cset_slider_pane_t

0x790a,	// (0x0004bb86) cset_list_set_pane_ParamLimits

0x790a,	// (0x0004bb86) cset_list_set_pane

0x791e,	// (0x0004bb9a) aid_position_infowindow_above

0x7926,	// (0x0004bba2) aid_position_infowindow_below

0x0c2b,	// (0x00044ea7) cset_list_set_pane_g1_ParamLimits

0x0c2b,	// (0x00044ea7) cset_list_set_pane_g1

0x0c37,	// (0x00044eb3) cset_list_set_pane_g3_ParamLimits

0x0c37,	// (0x00044eb3) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x00053c41) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x00053c41) cset_list_set_pane_g

0x0c46,	// (0x00044ec2) cset_list_set_pane_t1_ParamLimits

0x0c46,	// (0x00044ec2) cset_list_set_pane_t1

0x16a3,	// (0x0004591f) list_highlight_pane_cp021_ParamLimits

0x16a3,	// (0x0004591f) list_highlight_pane_cp021

0xb456,	// (0x0004f6d2) cset_slider_pane_g1

0xb468,	// (0x0004f6e4) cset_slider_pane_g2

0xb45f,	// (0x0004f6db) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x00053c46) cset_slider_pane_g

0xd6a1,	// (0x0005191d) aid_area_touch_cam4_zoom

0xd6a9,	// (0x00051925) cam4_zoom_cont_pane

0xd6b1,	// (0x0005192d) cam4_zoom_pane_g1

0xd6b9,	// (0x00051935) cam4_zoom_pane_g2

0x792e,	// (0x0004bbaa) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x00053c4d) cam4_zoom_pane_g

0xe352,	// (0x000525ce) cam4_zoom_cont_pane_g1

0xe35b,	// (0x000525d7) cam4_zoom_cont_pane_g2

0xe364,	// (0x000525e0) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x00053c54) cam4_zoom_cont_pane_g

0x6dca,	// (0x0004b046) call4_image_pane_ParamLimits

0x6dca,	// (0x0004b046) call4_image_pane

0xe011,	// (0x0005228d) call4_windows_conf_pane_ParamLimits

0xe050,	// (0x000522cc) popup_call4_audio_in_window_ParamLimits

0xe050,	// (0x000522cc) popup_call4_audio_in_window

0x1497,	// (0x00045713) bg_popup_call2_act_pane_cp02

0xe0c6,	// (0x00052342) call4_list_conf_pane

0xd616,	// (0x00051892) call4_image_pane_g1

0xd616,	// (0x00051892) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00053968) call4_image_pane_g

0xe36d,	// (0x000525e9) list_single_graphic_popup_conf4_pane_ParamLimits

0xe36d,	// (0x000525e9) list_single_graphic_popup_conf4_pane

0x1497,	// (0x00045713) list_highlight_pane_cp022

0xe380,	// (0x000525fc) list_single_graphic_popup_conf4_pane_g1

0xb127,	// (0x0004f3a3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x00053c5b) list_single_graphic_popup_conf4_pane_g

0xe388,	// (0x00052604) list_single_graphic_popup_conf4_pane_t1

0x2d44,	// (0x00046fc0) popup_vtel_slider_window_ParamLimits

0x2d44,	// (0x00046fc0) popup_vtel_slider_window

0xdff3,	// (0x0005226f) dialer2_ne_pane_t2_ParamLimits

0xdff3,	// (0x0005226f) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x00053b3c) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x00053b3c) dialer2_ne_pane_t

0xd3f9,	// (0x00051675) bg_popup_sub_pane_cp010_ParamLimits

0xd3f9,	// (0x00051675) bg_popup_sub_pane_cp010

0x7936,	// (0x0004bbb2) popup_vtel_slider_window_g1_ParamLimits

0x7936,	// (0x0004bbb2) popup_vtel_slider_window_g1

0x7949,	// (0x0004bbc5) popup_vtel_slider_window_g2_ParamLimits

0x7949,	// (0x0004bbc5) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x00053c60) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x00053c60) popup_vtel_slider_window_g

0x799f,	// (0x0004bc1b) vtel_slider_pane_ParamLimits

0x799f,	// (0x0004bc1b) vtel_slider_pane

0x79c1,	// (0x0004bc3d) vtel_slider_pane_g1_ParamLimits

0x79c1,	// (0x0004bc3d) vtel_slider_pane_g1

0x79d5,	// (0x0004bc51) vtel_slider_pane_g2_ParamLimits

0x79d5,	// (0x0004bc51) vtel_slider_pane_g2

0x79ed,	// (0x0004bc69) vtel_slider_pane_g3_ParamLimits

0x79ed,	// (0x0004bc69) vtel_slider_pane_g3

0x79c1,	// (0x0004bc3d) vtel_slider_pane_g4_ParamLimits

0x79c1,	// (0x0004bc3d) vtel_slider_pane_g4

0x7a03,	// (0x0004bc7f) vtel_slider_pane_g5_ParamLimits

0x7a03,	// (0x0004bc7f) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x00053c69) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x00053c69) vtel_slider_pane_g

0x1497,	// (0x00045713) main_gallery2_pane

0x7110,	// (0x0004b38c) aid_size_row_itut2_dropdow_list_ParamLimits

0x7110,	// (0x0004b38c) aid_size_row_itut2_dropdow_list

0x719c,	// (0x0004b418) grid_vitu2_function_top_pane_ParamLimits

0x719c,	// (0x0004b418) grid_vitu2_function_top_pane

0x7201,	// (0x0004b47d) popup_vitu2_dropdown_list_window_ParamLimits

0x7201,	// (0x0004b47d) popup_vitu2_dropdown_list_window

0x722a,	// (0x0004b4a6) popup_vitu2_match_list_window

0x7a19,	// (0x0004bc95) cell_vitu2_function_top_pane_ParamLimits

0x7a19,	// (0x0004bc95) cell_vitu2_function_top_pane

0x7a37,	// (0x0004bcb3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7a37,	// (0x0004bcb3) cell_vitu2_function_top_pane_cp01

0x7a55,	// (0x0004bcd1) cell_vitu2_function_top_wide_pane_ParamLimits

0x7a55,	// (0x0004bcd1) cell_vitu2_function_top_wide_pane

0x16a3,	// (0x0004591f) bg_button_pane_cp012

0x7a73,	// (0x0004bcef) cell_vitu2_function_top_pane_g1

0xd6c1,	// (0x0005193d) bg_button_pane_cp013_ParamLimits

0xd6c1,	// (0x0005193d) bg_button_pane_cp013

0x7a87,	// (0x0004bd03) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7a87,	// (0x0004bd03) cell_vitu2_function_top_wide_pane_g1

0x16a3,	// (0x0004591f) bg_popup_sub_pane_cp20

0x7a9f,	// (0x0004bd1b) list_vitu2_match_list_pane

0xe15f,	// (0x000523db) bg_popup_sub_pane_cp20_g1

0xe167,	// (0x000523e3) bg_popup_sub_pane_cp20_g2

0xab4e,	// (0x0004edca) bg_popup_sub_pane_cp20_g3

0xe16f,	// (0x000523eb) bg_popup_sub_pane_cp20_g4

0xab2e,	// (0x0004edaa) bg_popup_sub_pane_cp20_g5

0xe39e,	// (0x0005261a) bg_popup_sub_pane_cp20_g6

0xe17f,	// (0x000523fb) bg_popup_sub_pane_cp20_g7

0xe187,	// (0x00052403) bg_popup_sub_pane_cp20_g8

0xe18f,	// (0x0005240b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x00053c74) bg_popup_sub_pane_cp20_g

0xd6dd,	// (0x00051959) list_vitu2_match_list_item_pane_ParamLimits

0xd6dd,	// (0x00051959) list_vitu2_match_list_item_pane

0xd6ef,	// (0x0005196b) list_vitu2_match_list_item_pane_t1

0x1497,	// (0x00045713) bg_popup_sub_pane_cp21

0xafbd,	// (0x0004f239) grid_vitu2_dropdown_list_pane

0x7abd,	// (0x0004bd39) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7abd,	// (0x0004bd39) cell_vitu2_dropdown_list_char_pane

0x7ade,	// (0x0004bd5a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7ade,	// (0x0004bd5a) cell_vitu2_dropdown_list_ctrl_pane

0xe3a6,	// (0x00052622) cell_vitu2_dropdown_list_char_pane_g1

0xe3af,	// (0x0005262b) cell_vitu2_dropdown_list_char_pane_g2

0xe3b8,	// (0x00052634) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00053c91) cell_vitu2_dropdown_list_char_pane_g

0x7b0a,	// (0x0004bd86) cell_vitu2_dropdown_list_char_pane_t1

0x7b18,	// (0x0004bd94) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7b18,	// (0x0004bd94) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7b28,	// (0x0004bda4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7b28,	// (0x0004bda4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7b39,	// (0x0004bdb5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7b39,	// (0x0004bdb5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7b49,	// (0x0004bdc5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7b49,	// (0x0004bdc5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd969,	// (0x00051be5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd969,	// (0x00051be5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00053c98) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00053c98) cell_vitu2_dropdown_list_ctrl_pane_g

0x7b65,	// (0x0004bde1) aid_size_cell_gallery2_ParamLimits

0x7b65,	// (0x0004bde1) aid_size_cell_gallery2

0x7b7b,	// (0x0004bdf7) grid_gallery2_pane_ParamLimits

0x7b7b,	// (0x0004bdf7) grid_gallery2_pane

0x7b8f,	// (0x0004be0b) scroll_pane_cp029_ParamLimits

0x7b8f,	// (0x0004be0b) scroll_pane_cp029

0x7b9b,	// (0x0004be17) cell_gallery2_pane_ParamLimits

0x7b9b,	// (0x0004be17) cell_gallery2_pane

0xe3c1,	// (0x0005263d) cell_gallery2_pane_g2

0x7bd1,	// (0x0004be4d) cell_gallery2_pane_g3

0xe3cb,	// (0x00052647) cell_gallery2_pane_g4

0xe3d3,	// (0x0005264f) cell_gallery2_pane_g5

0xb300,	// (0x0004f57c) grid_highlight_pane_cp10

0x722a,	// (0x0004b4a6) popup_vitu2_match_list_window_ParamLimits

0x723f,	// (0x0004b4bb) popup_vitu2_query_window_ParamLimits

0x723f,	// (0x0004b4bb) popup_vitu2_query_window

0x1497,	// (0x00045713) bg_vitu2_candi_button_pane

0xe3a6,	// (0x00052622) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe3af,	// (0x0005262b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe3b8,	// (0x00052634) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0c90,	// (0x00044f0c) bg_button_pane_cp015

0x7bd9,	// (0x0004be55) bg_button_pane_cp016

0x7bec,	// (0x0004be68) bg_button_pane_cp017

0xc79f,	// (0x00050a1b) bg_popup_sub_pane_cp22

0xe3db,	// (0x00052657) popup_vitu2_query_window_g1

0x0cc5,	// (0x00044f41) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00053ca3) popup_vitu2_query_window_g

0x0ce4,	// (0x00044f60) popup_vitu2_query_window_t1_ParamLimits

0x0ce4,	// (0x00044f60) popup_vitu2_query_window_t1

0x0d19,	// (0x00044f95) popup_vitu2_query_window_t2_ParamLimits

0x0d19,	// (0x00044f95) popup_vitu2_query_window_t2

0x0d2b,	// (0x00044fa7) popup_vitu2_query_window_t3_ParamLimits

0x0d2b,	// (0x00044fa7) popup_vitu2_query_window_t3

0x7c10,	// (0x0004be8c) popup_vitu2_query_window_t4_ParamLimits

0x7c10,	// (0x0004be8c) popup_vitu2_query_window_t4

0x7c31,	// (0x0004bead) popup_vitu2_query_window_t5_ParamLimits

0x7c31,	// (0x0004bead) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00053caa) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00053caa) popup_vitu2_query_window_t

0xe261,	// (0x000524dd) main_cset_text_pane

0x7670,	// (0x0004b8ec) aid_area_touch_slider_ParamLimits

0x768c,	// (0x0004b908) cset_slider_pane_ParamLimits

0x76b6,	// (0x0004b932) main_cset_slider_pane_g1_ParamLimits

0x76cb,	// (0x0004b947) main_cset_slider_pane_g2_ParamLimits

0xe282,	// (0x000524fe) main_cset_slider_pane_g3_ParamLimits

0xe282,	// (0x000524fe) main_cset_slider_pane_g3

0x76e0,	// (0x0004b95c) main_cset_slider_pane_g4_ParamLimits

0x76e0,	// (0x0004b95c) main_cset_slider_pane_g4

0x76ef,	// (0x0004b96b) main_cset_slider_pane_g5_ParamLimits

0x76ef,	// (0x0004b96b) main_cset_slider_pane_g5

0x76fb,	// (0x0004b977) main_cset_slider_pane_g6_ParamLimits

0x76fb,	// (0x0004b977) main_cset_slider_pane_g6

0xf981,	// (0x00053bfd) main_cset_slider_pane_g_ParamLimits

0xe2b2,	// (0x0005252e) main_cset_slider_pane_t1_ParamLimits

0x7787,	// (0x0004ba03) main_cset_slider_pane_t2_ParamLimits

0x77a1,	// (0x0004ba1d) main_cset_slider_pane_t3_ParamLimits

0x77bb,	// (0x0004ba37) main_cset_slider_pane_t4_ParamLimits

0x77d5,	// (0x0004ba51) main_cset_slider_pane_t5_ParamLimits

0x77f1,	// (0x0004ba6d) main_cset_slider_pane_t6_ParamLimits

0x7806,	// (0x0004ba82) main_cset_slider_pane_t7_ParamLimits

0x7830,	// (0x0004baac) main_cset_slider_pane_t8_ParamLimits

0x7830,	// (0x0004baac) main_cset_slider_pane_t8

0x7858,	// (0x0004bad4) main_cset_slider_pane_t9_ParamLimits

0x7858,	// (0x0004bad4) main_cset_slider_pane_t9

0x7880,	// (0x0004bafc) main_cset_slider_pane_t10_ParamLimits

0x7880,	// (0x0004bafc) main_cset_slider_pane_t10

0x78a8,	// (0x0004bb24) main_cset_slider_pane_t11_ParamLimits

0x78a8,	// (0x0004bb24) main_cset_slider_pane_t11

0x78d0,	// (0x0004bb4c) main_cset_slider_pane_t12_ParamLimits

0x78d0,	// (0x0004bb4c) main_cset_slider_pane_t12

0x78ed,	// (0x0004bb69) main_cset_slider_pane_t13_ParamLimits

0x78ed,	// (0x0004bb69) main_cset_slider_pane_t13

0xf9a6,	// (0x00053c22) main_cset_slider_pane_t_ParamLimits

0x1497,	// (0x00045713) bg_popup_sub_pane_cp011

0xe3e7,	// (0x00052663) main_cset_text_pane_g1

0xe3ef,	// (0x0005266b) main_cset_text_pane_t1

0xe3fd,	// (0x00052679) main_cset_text_pane_t2

0xe40b,	// (0x00052687) main_cset_text_pane_t3

0xe419,	// (0x00052695) main_cset_text_pane_t4

0xe427,	// (0x000526a3) main_cset_text_pane_t5

0xe435,	// (0x000526b1) main_cset_text_pane_t6

0xe443,	// (0x000526bf) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x00053cb9) main_cset_text_pane_t

0x1497,	// (0x00045713) main_cam4_burst_pane

0x1497,	// (0x00045713) main_cam5_pane

0x75af,	// (0x0004b82b) bg_button_pane_cp019

0x75b8,	// (0x0004b834) bg_button_pane_cp020

0xe28e,	// (0x0005250a) main_cset_slider_pane_g7_ParamLimits

0xe28e,	// (0x0005250a) main_cset_slider_pane_g7

0xe29a,	// (0x00052516) main_cset_slider_pane_g8_ParamLimits

0xe29a,	// (0x00052516) main_cset_slider_pane_g8

0x770f,	// (0x0004b98b) main_cset_slider_pane_g9_ParamLimits

0x770f,	// (0x0004b98b) main_cset_slider_pane_g9

0x771b,	// (0x0004b997) main_cset_slider_pane_g10_ParamLimits

0x771b,	// (0x0004b997) main_cset_slider_pane_g10

0x7727,	// (0x0004b9a3) main_cset_slider_pane_g11_ParamLimits

0x7727,	// (0x0004b9a3) main_cset_slider_pane_g11

0x7733,	// (0x0004b9af) main_cset_slider_pane_g12_ParamLimits

0x7733,	// (0x0004b9af) main_cset_slider_pane_g12

0x773f,	// (0x0004b9bb) main_cset_slider_pane_g13_ParamLimits

0x773f,	// (0x0004b9bb) main_cset_slider_pane_g13

0x774b,	// (0x0004b9c7) main_cset_slider_pane_g14_ParamLimits

0x774b,	// (0x0004b9c7) main_cset_slider_pane_g14

0x7757,	// (0x0004b9d3) main_cset_slider_pane_g15_ParamLimits

0x7757,	// (0x0004b9d3) main_cset_slider_pane_g15

0xe2e0,	// (0x0005255c) main_cset_slider_pane_t14_ParamLimits

0xe2e0,	// (0x0005255c) main_cset_slider_pane_t14

0xe319,	// (0x00052595) main_cset_slider_pane_t15_ParamLimits

0xe319,	// (0x00052595) main_cset_slider_pane_t15

0x7c52,	// (0x0004bece) aid_cam4_burst_size_cell_ParamLimits

0x7c52,	// (0x0004bece) aid_cam4_burst_size_cell

0x7c72,	// (0x0004beee) grid_cam4_burst_pane_ParamLimits

0x7c72,	// (0x0004beee) grid_cam4_burst_pane

0x7caa,	// (0x0004bf26) linegrid_cam4_burst_pane_ParamLimits

0x7caa,	// (0x0004bf26) linegrid_cam4_burst_pane

0xeae7,	// (0x00052d63) scroll_pane_cp30_ParamLimits

0xeae7,	// (0x00052d63) scroll_pane_cp30

0x7cd0,	// (0x0004bf4c) cell_cam4_burst_pane_ParamLimits

0x7cd0,	// (0x0004bf4c) cell_cam4_burst_pane

0xe451,	// (0x000526cd) linegrid_cam4_burst_pane_g1_ParamLimits

0xe451,	// (0x000526cd) linegrid_cam4_burst_pane_g1

0x7d1d,	// (0x0004bf99) linegrid_cam4_burst_pane_g2_ParamLimits

0x7d1d,	// (0x0004bf99) linegrid_cam4_burst_pane_g2

0xe45e,	// (0x000526da) linegrid_cam4_burst_pane_g3_ParamLimits

0xe45e,	// (0x000526da) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x00053cc8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x00053cc8) linegrid_cam4_burst_pane_g

0x7d2e,	// (0x0004bfaa) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7d2e,	// (0x0004bfaa) linegrid_cam4_burst_pane_g3_copy1

0xe46b,	// (0x000526e7) linegrid_cam4_burst_pane_g4_ParamLimits

0xe46b,	// (0x000526e7) linegrid_cam4_burst_pane_g4

0x7d48,	// (0x0004bfc4) linegrid_cam4_burst_pane_g5_ParamLimits

0x7d48,	// (0x0004bfc4) linegrid_cam4_burst_pane_g5

0x7d59,	// (0x0004bfd5) linegrid_cam4_burst_pane_g6_ParamLimits

0x7d59,	// (0x0004bfd5) linegrid_cam4_burst_pane_g6

0xe478,	// (0x000526f4) linegrid_cam4_burst_pane_g7_ParamLimits

0xe478,	// (0x000526f4) linegrid_cam4_burst_pane_g7

0x7d70,	// (0x0004bfec) cell_cam4_burst_pane_g1

0xe491,	// (0x0005270d) main_cam5_pane_t1_ParamLimits

0xe491,	// (0x0005270d) main_cam5_pane_t1

0xe4a3,	// (0x0005271f) main_cam5_pane_t2_ParamLimits

0xe4a3,	// (0x0005271f) main_cam5_pane_t2

0xe4b5,	// (0x00052731) main_cam5_pane_t3_ParamLimits

0xe4b5,	// (0x00052731) main_cam5_pane_t3

0xe4c7,	// (0x00052743) main_cam5_pane_t4_ParamLimits

0xe4c7,	// (0x00052743) main_cam5_pane_t4

0xe4dd,	// (0x00052759) main_cam5_pane_t5_ParamLimits

0xe4dd,	// (0x00052759) main_cam5_pane_t5

0xe4ef,	// (0x0005276b) main_cam5_pane_t6_ParamLimits

0xe4ef,	// (0x0005276b) main_cam5_pane_t6

0xe503,	// (0x0005277f) main_cam5_pane_t7_ParamLimits

0xe503,	// (0x0005277f) main_cam5_pane_t7

0xe515,	// (0x00052791) main_cam5_pane_t8_ParamLimits

0xe515,	// (0x00052791) main_cam5_pane_t8

0xe531,	// (0x000527ad) main_cam5_pane_t9_ParamLimits

0xe531,	// (0x000527ad) main_cam5_pane_t9

0xe543,	// (0x000527bf) main_cam5_pane_t10_ParamLimits

0xe543,	// (0x000527bf) main_cam5_pane_t10

0xe555,	// (0x000527d1) main_cam5_pane_t11_ParamLimits

0xe555,	// (0x000527d1) main_cam5_pane_t11

0xe567,	// (0x000527e3) main_cam5_pane_t12_ParamLimits

0xe567,	// (0x000527e3) main_cam5_pane_t12

0xe57c,	// (0x000527f8) main_cam5_pane_t13_ParamLimits

0xe57c,	// (0x000527f8) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00053cd4) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00053cd4) main_cam5_pane_t

0x1669,	// (0x000458e5) popup_scut_keymap_window_ParamLimits

0x1669,	// (0x000458e5) popup_scut_keymap_window

0x7d85,	// (0x0004c001) aid_size_cell_brow_shortcut

0xb300,	// (0x0004f57c) bg_popup_window_pane_cp010

0x7d91,	// (0x0004c00d) grid_scut_pane

0x7d9d,	// (0x0004c019) cell_scut_pane_ParamLimits

0x7d9d,	// (0x0004c019) cell_scut_pane

0x7db4,	// (0x0004c030) cell_scut_pane_g1

0xe599,	// (0x00052815) cell_scut_pane_t1

0xe5a8,	// (0x00052824) cell_scut_pane_t2

0x7dbd,	// (0x0004c039) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00053cef) cell_scut_pane_t

0x5c81,	// (0x00049efd) main_mup3_pane_g8_ParamLimits

0x5c81,	// (0x00049efd) main_mup3_pane_g8

0x7128,	// (0x0004b3a4) area_vitu2_query_pane_ParamLimits

0x7128,	// (0x0004b3a4) area_vitu2_query_pane

0x0ca4,	// (0x00044f20) input_focus_pane_cp08

0xe5b7,	// (0x00052833) area_vitu2_query_pane_g1

0x0da9,	// (0x00045025) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x00053cf6) area_vitu2_query_pane_g

0x7dcb,	// (0x0004c047) area_vitu2_query_pane_t1_ParamLimits

0x7dcb,	// (0x0004c047) area_vitu2_query_pane_t1

0x7ddf,	// (0x0004c05b) area_vitu2_query_pane_t2_ParamLimits

0x7ddf,	// (0x0004c05b) area_vitu2_query_pane_t2

0x0dba,	// (0x00045036) area_vitu2_query_pane_t3_ParamLimits

0x0dba,	// (0x00045036) area_vitu2_query_pane_t3

0xcd74,	// (0x00050ff0) area_vitu2_query_pane_t4_ParamLimits

0xcd74,	// (0x00050ff0) area_vitu2_query_pane_t4

0xcd9c,	// (0x00051018) area_vitu2_query_pane_t5_ParamLimits

0xcd9c,	// (0x00051018) area_vitu2_query_pane_t5

0xcdc4,	// (0x00051040) area_vitu2_query_pane_t6_ParamLimits

0xcdc4,	// (0x00051040) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x00053cfb) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x00053cfb) area_vitu2_query_pane_t

0x7df3,	// (0x0004c06f) bg_button_pane_cp018

0x7e01,	// (0x0004c07d) bg_button_pane_cp021

0x0de2,	// (0x0004505e) bg_button_pane_cp022

0x0df3,	// (0x0004506f) input_focus_pane_cp09

0x3ced,	// (0x00047f69) aid_size_touch_mv_arrow_left

0x3d16,	// (0x00047f92) aid_size_touch_mv_arrow_right

0x776f,	// (0x0004b9eb) main_cset_slider_pane_g16_ParamLimits

0x776f,	// (0x0004b9eb) main_cset_slider_pane_g16

0x777b,	// (0x0004b9f7) main_cset_slider_pane_g17_ParamLimits

0x777b,	// (0x0004b9f7) main_cset_slider_pane_g17

0x7d70,	// (0x0004bfec) cell_cam4_burst_pane_g1_ParamLimits

0x1497,	// (0x00045713) compa_mode_pane

0x7959,	// (0x0004bbd5) popup_vtel_slider_window_g3_ParamLimits

0x7959,	// (0x0004bbd5) popup_vtel_slider_window_g3

0x7970,	// (0x0004bbec) popup_vtel_slider_window_g4_ParamLimits

0x7970,	// (0x0004bbec) popup_vtel_slider_window_g4

0x7987,	// (0x0004bc03) popup_vtel_slider_window_t1_ParamLimits

0x7987,	// (0x0004bc03) popup_vtel_slider_window_t1

0x1497,	// (0x00045713) main_cl_pane

0xc7c7,	// (0x00050a43) popup_imed_adjust2_window_ParamLimits

0xc79f,	// (0x00050a1b) bg_tb_trans_pane_cp05_ParamLimits

0xdc08,	// (0x00051e84) popup_imed_adjust2_window_g1_ParamLimits

0xdc17,	// (0x00051e93) popup_imed_adjust2_window_g2_ParamLimits

0xdc17,	// (0x00051e93) popup_imed_adjust2_window_g2

0xdc23,	// (0x00051e9f) popup_imed_adjust2_window_g3_ParamLimits

0xdc23,	// (0x00051e9f) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00053a66) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00053a66) popup_imed_adjust2_window_g

0xdc2f,	// (0x00051eab) popup_imed_adjust2_window_t1_ParamLimits

0xdc47,	// (0x00051ec3) slider_imed_adjust_pane_ParamLimits

0xdc5b,	// (0x00051ed7) slider_imed_adjust_pane_g1_ParamLimits

0xdc6b,	// (0x00051ee7) slider_imed_adjust_pane_g2_ParamLimits

0xdc7b,	// (0x00051ef7) slider_imed_adjust_pane_g3_ParamLimits

0xdc8c,	// (0x00051f08) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x00053a6d) slider_imed_adjust_pane_g_ParamLimits

0x6eaf,	// (0x0004b12b) aid_touch_area_cam4_ParamLimits

0x6eaf,	// (0x0004b12b) aid_touch_area_cam4

0xcc16,	// (0x00050e92) battery_pane_cp01

0x6f7e,	// (0x0004b1fa) main_camera4_pane_g6_ParamLimits

0x6f7e,	// (0x0004b1fa) main_camera4_pane_g6

0x6fa8,	// (0x0004b224) main_camera4_pane_t2_ParamLimits

0x6fa8,	// (0x0004b224) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x00053b70) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x00053b70) main_camera4_pane_t

0x6fdd,	// (0x0004b259) aid_touch_area_vid4_ParamLimits

0x6fdd,	// (0x0004b259) aid_touch_area_vid4

0x7031,	// (0x0004b2ad) main_video4_pane_g5_ParamLimits

0x7031,	// (0x0004b2ad) main_video4_pane_g5

0x7056,	// (0x0004b2d2) vid4_progress_pane_ParamLimits

0x7056,	// (0x0004b2d2) vid4_progress_pane

0xe2a6,	// (0x00052522) main_cset_slider_pane_g18_ParamLimits

0xe2a6,	// (0x00052522) main_cset_slider_pane_g18

0xe485,	// (0x00052701) cell_cam4_burst_pane_g2_ParamLimits

0xe485,	// (0x00052701) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00053ccf) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00053ccf) cell_cam4_burst_pane_g

0x215a,	// (0x000463d6) bg_cl_pane_ParamLimits

0x215a,	// (0x000463d6) bg_cl_pane

0x7e0d,	// (0x0004c089) cl_header_pane_ParamLimits

0x7e0d,	// (0x0004c089) cl_header_pane

0x7e21,	// (0x0004c09d) cl_listscroll_pane_ParamLimits

0x7e21,	// (0x0004c09d) cl_listscroll_pane

0xe5c3,	// (0x0005283f) bg_cl_pane_g1

0xe5cb,	// (0x00052847) bg_cl_pane_g2

0xe5d3,	// (0x0005284f) bg_cl_pane_g3

0xe5db,	// (0x00052857) bg_cl_pane_g4

0xe5e3,	// (0x0005285f) bg_cl_pane_g5

0xe5eb,	// (0x00052867) bg_cl_pane_g6

0xe5f3,	// (0x0005286f) bg_cl_pane_g7

0xe5fb,	// (0x00052877) bg_cl_pane_g8

0xe603,	// (0x0005287f) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00053d0a) bg_cl_pane_g

0x7e31,	// (0x0004c0ad) aid_height_cl_leading_ParamLimits

0x7e31,	// (0x0004c0ad) aid_height_cl_leading

0x7e3d,	// (0x0004c0b9) aid_height_cl_text_ParamLimits

0x7e3d,	// (0x0004c0b9) aid_height_cl_text

0x16a3,	// (0x0004591f) bg_cl_header_pane_ParamLimits

0x16a3,	// (0x0004591f) bg_cl_header_pane

0x7e5c,	// (0x0004c0d8) cl_header_pane_g1_ParamLimits

0x7e5c,	// (0x0004c0d8) cl_header_pane_g1

0x7e72,	// (0x0004c0ee) cl_header_pane_t1_ParamLimits

0x7e72,	// (0x0004c0ee) cl_header_pane_t1

0xe60b,	// (0x00052887) cl_list_pane

0xe279,	// (0x000524f5) hc_scroll_pane_cp01

0xab2e,	// (0x0004edaa) bg_cl_header_pane_g1

0xe15f,	// (0x000523db) bg_cl_header_pane_g2

0xab4e,	// (0x0004edca) bg_cl_header_pane_g3

0xe16f,	// (0x000523eb) bg_cl_header_pane_g4

0xe167,	// (0x000523e3) bg_cl_header_pane_g5

0xe39e,	// (0x0005261a) bg_cl_header_pane_g6

0xe187,	// (0x00052403) bg_cl_header_pane_g7

0xe18f,	// (0x0005240b) bg_cl_header_pane_g8

0xe17f,	// (0x000523fb) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x00053d1d) bg_cl_header_pane_g

0x7e8b,	// (0x0004c107) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7e8b,	// (0x0004c107) hc_cl_list_double_graphic_heading_pane

0x7e9f,	// (0x0004c11b) hc_cl_list_single_graphic_pane_ParamLimits

0x7e9f,	// (0x0004c11b) hc_cl_list_single_graphic_pane

0x7eb9,	// (0x0004c135) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7eb9,	// (0x0004c135) hc_cl_list_single_graphic_pane_g1

0x7ec5,	// (0x0004c141) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7ec5,	// (0x0004c141) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x00053d30) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x00053d30) hc_cl_list_single_graphic_pane_g

0x7ed9,	// (0x0004c155) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7ed9,	// (0x0004c155) hc_cl_list_single_graphic_pane_t1

0x7eb9,	// (0x0004c135) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7eb9,	// (0x0004c135) hc_cl_list_double_graphic_heading_pane_g1

0x7eee,	// (0x0004c16a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7eee,	// (0x0004c16a) hc_cl_list_double_graphic_heading_pane_g2

0x7f02,	// (0x0004c17e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7f02,	// (0x0004c17e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x00053d35) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x00053d35) hc_cl_list_double_graphic_heading_pane_g

0x7f16,	// (0x0004c192) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7f16,	// (0x0004c192) hc_cl_list_double_graphic_heading_pane_t1

0x7f2b,	// (0x0004c1a7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7f2b,	// (0x0004c1a7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x00053d3c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x00053d3c) hc_cl_list_double_graphic_heading_pane_t

0x7f40,	// (0x0004c1bc) vid4_progress_pane_g1

0x7f52,	// (0x0004c1ce) vid4_progress_pane_g2

0xd705,	// (0x00051981) vid4_progress_pane_g3

0xd711,	// (0x0005198d) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x00053d41) vid4_progress_pane_g

0xd72f,	// (0x000519ab) vid4_progress_pane_t1

0xd744,	// (0x000519c0) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x00053d4c) vid4_progress_pane_t

0xd76f,	// (0x000519eb) wait_bar_pane_cp07

0xd407,	// (0x00051683) blid_firmament_pane_ParamLimits

0xd44a,	// (0x000516c6) popup_blid_sat_info2_window_g1

0xd46e,	// (0x000516ea) popup_blid_sat_info2_window_t3

0xd47c,	// (0x000516f8) popup_blid_sat_info2_window_t4

0xd48a,	// (0x00051706) popup_blid_sat_info2_window_t5

0xd498,	// (0x00051714) popup_blid_sat_info2_window_t6

0xd4a8,	// (0x00051724) popup_blid_sat_info2_window_t7

0xd4b6,	// (0x00051732) popup_blid_sat_info2_window_t8

0xd4c4,	// (0x00051740) popup_blid_sat_info2_window_t9

0xd4d2,	// (0x0005174e) popup_blid_sat_info2_window_t10

0xd596,	// (0x00051812) aid_firma_cardinal_ParamLimits

0xd5aa,	// (0x00051826) blid_firmament_pane_t1_ParamLimits

0xd5c1,	// (0x0005183d) blid_firmament_pane_t2_ParamLimits

0xd5d8,	// (0x00051854) blid_firmament_pane_t3_ParamLimits

0xd5ef,	// (0x0005186b) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0005395f) blid_firmament_pane_t_ParamLimits

0xd606,	// (0x00051882) blid_sat_info_pane_ParamLimits

0x16a3,	// (0x0004591f) main_cam_set_pane_ParamLimits

0x653f,	// (0x0004a7bb) aid_size_cell_colour_35_ParamLimits

0x655f,	// (0x0004a7db) aid_size_cell_colour_112_ParamLimits

0x657f,	// (0x0004a7fb) aid_size_cell_effect_ParamLimits

0xc79f,	// (0x00050a1b) bg_tb_trans_pane_cp02_ParamLimits

0xad4e,	// (0x0004efca) heading_imed_pane_ParamLimits

0x659f,	// (0x0004a81b) listscroll_imed_pane_ParamLimits

0xbdc9,	// (0x00050045) popup_call2_audio_first_window_g5_ParamLimits

0xbdc9,	// (0x00050045) popup_call2_audio_first_window_g5

0x6b56,	// (0x0004add2) aid_size_touch_image3_arrow_left_ParamLimits

0x6b56,	// (0x0004add2) aid_size_touch_image3_arrow_left

0x6b82,	// (0x0004adfe) aid_size_touch_image3_arrow_right_ParamLimits

0x6b82,	// (0x0004adfe) aid_size_touch_image3_arrow_right

0xd75a,	// (0x000519d6) vid4_progress_pane_t3

0x68c2,	// (0x0004ab3e) main_hwr_training_symbol_option_pane_ParamLimits

0x68c2,	// (0x0004ab3e) main_hwr_training_symbol_option_pane

0xdef5,	// (0x00052171) popup_hwr_training_preview_window_ParamLimits

0xdef5,	// (0x00052171) popup_hwr_training_preview_window

0x68e2,	// (0x0004ab5e) hwr_training_navi_pane_g5_ParamLimits

0x68e2,	// (0x0004ab5e) hwr_training_navi_pane_g5

0xe14d,	// (0x000523c9) popup_char_count_window

0x16a3,	// (0x0004591f) bg_popup_sub_pane_cp20_ParamLimits

0x7a9f,	// (0x0004bd1b) list_vitu2_match_list_pane_ParamLimits

0x7aae,	// (0x0004bd2a) vitu2_page_scroll_pane_ParamLimits

0x7aae,	// (0x0004bd2a) vitu2_page_scroll_pane

0xe614,	// (0x00052890) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe614,	// (0x00052890) list_single_hwr_training_symbol_option_pane

0xe627,	// (0x000528a3) list_single_hwr_training_symbol_option_pane_g1

0xe62f,	// (0x000528ab) list_single_hwr_training_symbol_option_pane_t1

0xe63d,	// (0x000528b9) bg_button_pane_cp023

0xe646,	// (0x000528c2) bg_button_pane_cp024

0x7f76,	// (0x0004c1f2) vitu2_page_scroll_pane_g1

0x7f7e,	// (0x0004c1fa) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x00053d53) vitu2_page_scroll_pane_g

0x7f86,	// (0x0004c202) vitu2_page_scroll_pane_t1

0xd367,	// (0x000515e3) popup_char_count_window_g1

0xe679,	// (0x000528f5) popup_char_count_window_g2

0xe682,	// (0x000528fe) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x00053d58) popup_char_count_window_g

0xe68b,	// (0x00052907) popup_char_count_window_t1

0x1497,	// (0x00045713) main_vded2_pane

0xdbf4,	// (0x00051e70) aid_size_cell_imed_line

0xdbfe,	// (0x00051e7a) grid_imed_line_width_pane

0xcccc,	// (0x00050f48) vid4_indicators_pane_g4

0xe699,	// (0x00052915) cell_imed_line_width_pane_ParamLimits

0xe699,	// (0x00052915) cell_imed_line_width_pane

0xe6ad,	// (0x00052929) cell_imed_line_width_pane_g1

0xe6b6,	// (0x00052932) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x00053d5f) cell_imed_line_width_pane_g

0x7f95,	// (0x0004c211) main_vded2_pane_g1_ParamLimits

0x7f95,	// (0x0004c211) main_vded2_pane_g1

0x7fad,	// (0x0004c229) main_vded2_pane_g2_ParamLimits

0x7fad,	// (0x0004c229) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x00053d64) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x00053d64) main_vded2_pane_g

0x7fbf,	// (0x0004c23b) vded2_slider_pane_ParamLimits

0x7fbf,	// (0x0004c23b) vded2_slider_pane

0x7fcf,	// (0x0004c24b) aid_size_touch_vded2_end

0x7fd9,	// (0x0004c255) aid_size_touch_vded2_playhead

0xe6be,	// (0x0005293a) aid_size_touch_vded2_start

0xe6c6,	// (0x00052942) vded2_slider_bg_pane

0xe6cf,	// (0x0005294b) vded2_slider_pane_g1

0xe6d8,	// (0x00052954) vded2_slider_pane_g2

0x7fe3,	// (0x0004c25f) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x00053d69) vded2_slider_pane_g

0xe6e0,	// (0x0005295c) vded2_slider_bg_pane_g1

0xe6e9,	// (0x00052965) vded2_slider_bg_pane_g2

0xe6f2,	// (0x0005296e) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x00053d70) vded2_slider_bg_pane_g

0x42eb,	// (0x00048567) aid_postcard_touch_down_pane_ParamLimits

0x42eb,	// (0x00048567) aid_postcard_touch_down_pane

0x4301,	// (0x0004857d) aid_postcard_touch_up_pane_ParamLimits

0x4301,	// (0x0004857d) aid_postcard_touch_up_pane

0x1497,	// (0x00045713) main_blid2_pane

0xc7ad,	// (0x00050a29) popup_blid2_search_window

0x1497,	// (0x00045713) blid2_gps_pane

0x1497,	// (0x00045713) blid2_navig_pane

0x1497,	// (0x00045713) blid2_search_pane

0x1497,	// (0x00045713) blid2_tripm_pane

0x7fee,	// (0x0004c26a) blid2_search_pane_g1_ParamLimits

0x7fee,	// (0x0004c26a) blid2_search_pane_g1

0x8006,	// (0x0004c282) blid2_search_pane_t1_ParamLimits

0x8006,	// (0x0004c282) blid2_search_pane_t1

0x8018,	// (0x0004c294) aid_size_cell_blid2_gps_ParamLimits

0x8018,	// (0x0004c294) aid_size_cell_blid2_gps

0x8030,	// (0x0004c2ac) blid2_gps_pane_g1_ParamLimits

0x8030,	// (0x0004c2ac) blid2_gps_pane_g1

0x8044,	// (0x0004c2c0) grid_blid2_satellite_pane_ParamLimits

0x8044,	// (0x0004c2c0) grid_blid2_satellite_pane

0x805e,	// (0x0004c2da) blid2_navig_pane_g1_ParamLimits

0x805e,	// (0x0004c2da) blid2_navig_pane_g1

0x806a,	// (0x0004c2e6) blid2_navig_pane_t1_ParamLimits

0x806a,	// (0x0004c2e6) blid2_navig_pane_t1

0x8085,	// (0x0004c301) blid2_navig_pane_t2_ParamLimits

0x8085,	// (0x0004c301) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x00053d77) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x00053d77) blid2_navig_pane_t

0x80a0,	// (0x0004c31c) blid2_navig_ring_pane_ParamLimits

0x80a0,	// (0x0004c31c) blid2_navig_ring_pane

0x80b9,	// (0x0004c335) blid2_speed_pane_ParamLimits

0x80b9,	// (0x0004c335) blid2_speed_pane

0x80c5,	// (0x0004c341) blid2_tripm_pane_g1_ParamLimits

0x80c5,	// (0x0004c341) blid2_tripm_pane_g1

0x80e0,	// (0x0004c35c) blid2_tripm_pane_g2_ParamLimits

0x80e0,	// (0x0004c35c) blid2_tripm_pane_g2

0x80f4,	// (0x0004c370) blid2_tripm_pane_g3_ParamLimits

0x80f4,	// (0x0004c370) blid2_tripm_pane_g3

0x8108,	// (0x0004c384) blid2_tripm_pane_g4_ParamLimits

0x8108,	// (0x0004c384) blid2_tripm_pane_g4

0x811c,	// (0x0004c398) blid2_tripm_pane_g5_ParamLimits

0x811c,	// (0x0004c398) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x00053d7c) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x00053d7c) blid2_tripm_pane_g

0x8142,	// (0x0004c3be) blid2_tripm_pane_t1_ParamLimits

0x8142,	// (0x0004c3be) blid2_tripm_pane_t1

0x815d,	// (0x0004c3d9) blid2_tripm_pane_t2_ParamLimits

0x815d,	// (0x0004c3d9) blid2_tripm_pane_t2

0x8178,	// (0x0004c3f4) blid2_tripm_pane_t3_ParamLimits

0x8178,	// (0x0004c3f4) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x00053d89) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x00053d89) blid2_tripm_pane_t

0x81bf,	// (0x0004c43b) cell_blid2_satellite_pane_ParamLimits

0x81bf,	// (0x0004c43b) cell_blid2_satellite_pane

0x81dd,	// (0x0004c459) cell_blid2_satellite_pane_g1

0xe6fb,	// (0x00052977) cell_blid2_satellite_pane_t1

0xd616,	// (0x00051892) blid2_speed_pane_g1

0xe709,	// (0x00052985) blid2_speed_pane_t1

0xe717,	// (0x00052993) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00053d92) blid2_speed_pane_t

0xd616,	// (0x00051892) blid2_navig_ring_pane_g1

0x81e6,	// (0x0004c462) blid2_navig_ring_pane_g2

0x81ee,	// (0x0004c46a) blid2_navig_ring_pane_g3

0x81f6,	// (0x0004c472) blid2_navig_ring_pane_g4

0x81fe,	// (0x0004c47a) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x00053d97) blid2_navig_ring_pane_g

0x1497,	// (0x00045713) bg_popup_window_pane_cp011

0xe725,	// (0x000529a1) popup_blid2_search_window_g1

0xe72d,	// (0x000529a9) popup_blid2_search_window_t1

0xe73b,	// (0x000529b7) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00053da2) popup_blid2_search_window_t

0xaa3d,	// (0x0004ecb9) main_browser_pane_g1

0x215a,	// (0x000463d6) main_browser_pane_ParamLimits

0x16a3,	// (0x0004591f) bg_button_pane_cp011_ParamLimits

0x734b,	// (0x0004b5c7) cell_vitu2_function_pane_g1_ParamLimits

0xc79f,	// (0x00050a1b) bg_popup_sub_pane_cp22_ParamLimits

0x0ca4,	// (0x00044f20) input_focus_pane_cp08_ParamLimits

0x7bff,	// (0x0004be7b) popup_vitu2_query_button_pane_ParamLimits

0x7bff,	// (0x0004be7b) popup_vitu2_query_button_pane

0x0cbb,	// (0x00044f37) popup_vitu2_query_input_button_pane

0xe3db,	// (0x00052657) popup_vitu2_query_window_g1_ParamLimits

0x0cc5,	// (0x00044f41) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00053ca3) popup_vitu2_query_window_g_ParamLimits

0x1497,	// (0x00045713) bg_button_pane_cp026

0x8206,	// (0x0004c482) popup_vitu2_query_input_button_pane_g1

0x1497,	// (0x00045713) bg_button_pane_cp025

0xe749,	// (0x000529c5) popup_vitu2_query_button_pane_t1

0x5987,	// (0x00049c03) main_mp3_pane_t6

0x5995,	// (0x00049c11) popup_slider_window_cp01

0xcc32,	// (0x00050eae) cam4_battery_pane

0xcc8b,	// (0x00050f07) cam4_battery_pane_cp02

0xd6fd,	// (0x00051979) cam4_battery_pane_cp01

0xd6fd,	// (0x00051979) cam4_battery_pane_cp03

0xd616,	// (0x00051892) cam4_battery_pane_g1

0xe757,	// (0x000529d3) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x00053da7) cam4_battery_pane_g

0xd4e0,	// (0x0005175c) popup_blid_sat_info2_window_t11

0x3ced,	// (0x00047f69) aid_size_touch_mv_arrow_left_ParamLimits

0x3d16,	// (0x00047f92) aid_size_touch_mv_arrow_right_ParamLimits

0xb260,	// (0x0004f4dc) navi_pane_g1_ParamLimits

0x3d55,	// (0x00047fd1) navi_pane_g2_ParamLimits

0x3d83,	// (0x00047fff) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00053671) navi_pane_g_ParamLimits

0x3ddb,	// (0x00048057) navi_pane_mv_t1_ParamLimits

0x65ab,	// (0x0004a827) grid_imed_effect_pane_ParamLimits

0x2c41,	// (0x00046ebd) aid_placing_vt_slider_lsc

0xa98c,	// (0x0004ec08) aid_placing_vt_slider_prt

0x16a3,	// (0x0004591f) bg_tb_trans_pane_cp01_ParamLimits

0xd889,	// (0x00051b05) popup_image_details_window_g1_ParamLimits

0xd89c,	// (0x00051b18) popup_image_details_window_g2_ParamLimits

0xd8b1,	// (0x00051b2d) popup_image_details_window_g3_ParamLimits

0xd8b1,	// (0x00051b2d) popup_image_details_window_g3

0xf728,	// (0x000539a4) popup_image_details_window_g_ParamLimits

0xd8c5,	// (0x00051b41) popup_image_details_window_t1_ParamLimits

0xd8d7,	// (0x00051b53) popup_image_details_window_t2_ParamLimits

0xd8f0,	// (0x00051b6c) popup_image_details_window_t3_ParamLimits

0xd904,	// (0x00051b80) popup_image_details_window_t4_ParamLimits

0xd91f,	// (0x00051b9b) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x000539ab) popup_image_details_window_t_ParamLimits

0x7e49,	// (0x0004c0c5) cl_header_name_pane_ParamLimits

0x7e49,	// (0x0004c0c5) cl_header_name_pane

0x820e,	// (0x0004c48a) cl_header_name_pane_t1_ParamLimits

0x820e,	// (0x0004c48a) cl_header_name_pane_t1

0x822f,	// (0x0004c4ab) cl_header_name_pane_t2_ParamLimits

0x822f,	// (0x0004c4ab) cl_header_name_pane_t2

0x8271,	// (0x0004c4ed) cl_header_name_pane_t3_ParamLimits

0x8271,	// (0x0004c4ed) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x00053dac) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x00053dac) cl_header_name_pane_t

0x3dac,	// (0x00048028) navi_pane_mv_g2_ParamLimits

0xe10b,	// (0x00052387) field_vitu2_entry_pane_g1_ParamLimits

0xe117,	// (0x00052393) field_vitu2_entry_pane_g2_ParamLimits

0xe13f,	// (0x000523bb) field_vitu2_entry_pane_g3_ParamLimits

0xe13f,	// (0x000523bb) field_vitu2_entry_pane_g3

0xf926,	// (0x00053ba2) field_vitu2_entry_pane_g_ParamLimits

0x72c7,	// (0x0004b543) cell_vitu2_itu_pane_g1_ParamLimits

0x72d7,	// (0x0004b553) cell_vitu2_itu_pane_g2_ParamLimits

0x72d7,	// (0x0004b553) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x00053bae) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x00053bae) cell_vitu2_itu_pane_g

0x16a3,	// (0x0004591f) bg_vkb2_func_pane_cp05_ParamLimits

0x16a3,	// (0x0004591f) bg_vkb2_func_pane_cp05

0x16a3,	// (0x0004591f) bg_vkb2_func_pane_cp03

0x16a3,	// (0x0004591f) bg_vkb2_func_pane_cp04

0x16a3,	// (0x0004591f) bg_vkb2_func_pane_cp10_ParamLimits

0x16a3,	// (0x0004591f) bg_vkb2_func_pane_cp10

0x0de2,	// (0x0004505e) bg_vkb2_func_pane_cp08

0x7df3,	// (0x0004c06f) bg_vkb2_func_pane_cp06

0x7e01,	// (0x0004c07d) bg_vkb2_func_pane_cp07

0xe64f,	// (0x000528cb) bg_vkb2_func_pane_cp11_ParamLimits

0xe64f,	// (0x000528cb) bg_vkb2_func_pane_cp11

0xe664,	// (0x000528e0) bg_vkb2_func_pane_cp12_ParamLimits

0xe664,	// (0x000528e0) bg_vkb2_func_pane_cp12

0x1497,	// (0x00045713) bg_vkb2_func_pane_cp09

0xe15f,	// (0x000523db) bg_vkb2_func_pane_g1

0xab4e,	// (0x0004edca) bg_vkb2_func_pane_g2

0xe167,	// (0x000523e3) bg_vkb2_func_pane_g3

0xe16f,	// (0x000523eb) bg_vkb2_func_pane_g4

0xe39e,	// (0x0005261a) bg_vkb2_func_pane_g5

0xe187,	// (0x00052403) bg_vkb2_func_pane_g6

0xe18f,	// (0x0005240b) bg_vkb2_func_pane_g7

0xe17f,	// (0x000523fb) bg_vkb2_func_pane_g8

0xab2e,	// (0x0004edaa) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00053db3) bg_vkb2_func_pane_g

0x8130,	// (0x0004c3ac) blid2_tripm_pane_g6_ParamLimits

0x8130,	// (0x0004c3ac) blid2_tripm_pane_g6

0xdfad,	// (0x00052229) mp4_progress_pane_g1

0x81ab,	// (0x0004c427) blid2_tripm_values_pane_ParamLimits

0x81ab,	// (0x0004c427) blid2_tripm_values_pane

0x82a2,	// (0x0004c51e) blid2_tripm_values_pane_t1

0x82b0,	// (0x0004c52c) blid2_tripm_values_pane_t2

0x82be,	// (0x0004c53a) blid2_tripm_values_pane_t3

0x82cc,	// (0x0004c548) blid2_tripm_values_pane_t4

0x82da,	// (0x0004c556) blid2_tripm_values_pane_t5

0x82e8,	// (0x0004c564) blid2_tripm_values_pane_t6

0x82f6,	// (0x0004c572) blid2_tripm_values_pane_t7

0x8304,	// (0x0004c580) blid2_tripm_values_pane_t8

0x8312,	// (0x0004c58e) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x00053dc6) blid2_tripm_values_pane_t

0x2c83,	// (0x00046eff) call_video_pane_t1_ParamLimits

0x2ca1,	// (0x00046f1d) call_video_pane_t2_ParamLimits

0xf27e,	// (0x000534fa) call_video_pane_t_ParamLimits

0x0ad0,	// (0x00044d4c) msg_header_pane_g1_ParamLimits

0xb49b,	// (0x0004f717) msg_header_pane_g2_ParamLimits

0xb49b,	// (0x0004f717) msg_header_pane_g2

0x0001,

0xf498,	// (0x00053714) msg_header_pane_g_ParamLimits

0xf498,	// (0x00053714) msg_header_pane_g

0x215a,	// (0x000463d6) main_clock2_pane_ParamLimits

0x62b4,	// (0x0004a530) grid_clock2_toolbar_pane_ParamLimits

0x62b4,	// (0x0004a530) grid_clock2_toolbar_pane

0x62b4,	// (0x0004a530) listscroll_clock2_pane_ParamLimits

0x62b4,	// (0x0004a530) listscroll_clock2_pane

0x639c,	// (0x0004a618) main_clock2_pane_t3_ParamLimits

0x639c,	// (0x0004a618) main_clock2_pane_t3

0x63bf,	// (0x0004a63b) main_clock2_pane_t4_ParamLimits

0x63bf,	// (0x0004a63b) main_clock2_pane_t4

0xe761,	// (0x000529dd) cell_clock2_toolbar_pane

0xe769,	// (0x000529e5) cell_clock2_toolbar_pane_cp01

0xe769,	// (0x000529e5) cell_clock2_toolbar_pane_cp02

0xe771,	// (0x000529ed) cell_clock2_toolbar_pane_cp03

0xe779,	// (0x000529f5) list_clock2_pane

0xb1b3,	// (0x0004f42f) scroll_pane_cp10

0xe781,	// (0x000529fd) list_single_clock2_pane_ParamLimits

0xe781,	// (0x000529fd) list_single_clock2_pane

0xb300,	// (0x0004f57c) list_highlight_pane_cp08

0xe78e,	// (0x00052a0a) list_single_clock2_pane_t1

0xe79c,	// (0x00052a18) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x00053dd9) list_single_clock2_pane_t

0x1497,	// (0x00045713) bg_button_pane_cp10

0xe7aa,	// (0x00052a26) cell_clock2_toolbar_pane_g1

0x4277,	// (0x000484f3) aid_main_viewer_pane_g1_ParamLimits

0x4277,	// (0x000484f3) aid_main_viewer_pane_g1

0x4285,	// (0x00048501) aid_main_viewer_pane_g2_ParamLimits

0x4285,	// (0x00048501) aid_main_viewer_pane_g2

0x4293,	// (0x0004850f) aid_main_viewer_pane_g3_ParamLimits

0x4293,	// (0x0004850f) aid_main_viewer_pane_g3

0x42a2,	// (0x0004851e) aid_main_viewer_pane_g4_ParamLimits

0x42a2,	// (0x0004851e) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00053725) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00053725) aid_main_viewer_pane_g

0x4bae,	// (0x00048e2a) main_calc_pane_ParamLimits

0x4bc2,	// (0x00048e3e) main_dialer2_pane_ParamLimits

0x1497,	// (0x00045713) main_cam6_pane

0x1497,	// (0x00045713) main_vid6_pane

0x62c0,	// (0x0004a53c) listscroll_gen_pane_cp06_ParamLimits

0x62c0,	// (0x0004a53c) listscroll_gen_pane_cp06

0x63e2,	// (0x0004a65e) main_clock2_pane_t5_ParamLimits

0x63e2,	// (0x0004a65e) main_clock2_pane_t5

0x6442,	// (0x0004a6be) aid_call2_pane_cp10_ParamLimits

0x6454,	// (0x0004a6d0) aid_call_pane_cp10_ParamLimits

0xb235,	// (0x0004f4b1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb235,	// (0x0004f4b1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6466,	// (0x0004a6e2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6466,	// (0x0004a6e2) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb235,	// (0x0004f4b1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x00053a5b) popup_clock_analogue_window_cp10_g_ParamLimits

0x6478,	// (0x0004a6f4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6b03,	// (0x0004ad7f) cell_dialer2_keypad_pane_g2_ParamLimits

0x6b03,	// (0x0004ad7f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x00053b41) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x00053b41) cell_dialer2_keypad_pane_g

0x6b1f,	// (0x0004ad9b) cell_dialer2_keypad_pane_t1

0x7662,	// (0x0004b8de) main_cset_text2_pane_ParamLimits

0x7662,	// (0x0004b8de) main_cset_text2_pane

0xe5b7,	// (0x00052833) area_vitu2_query_pane_g1_ParamLimits

0x0da9,	// (0x00045025) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x00053cf6) area_vitu2_query_pane_g_ParamLimits

0xcdec,	// (0x00051068) area_vitu2_query_pane_t7_ParamLimits

0xcdec,	// (0x00051068) area_vitu2_query_pane_t7

0x7df3,	// (0x0004c06f) bg_button_pane_cp018_ParamLimits

0x7e01,	// (0x0004c07d) bg_button_pane_cp021_ParamLimits

0x0de2,	// (0x0004505e) bg_button_pane_cp022_ParamLimits

0x0de2,	// (0x0004505e) bg_vkb2_func_pane_cp08_ParamLimits

0x7df3,	// (0x0004c06f) bg_vkb2_func_pane_cp06_ParamLimits

0x7e01,	// (0x0004c07d) bg_vkb2_func_pane_cp07_ParamLimits

0x0df3,	// (0x0004506f) input_focus_pane_cp09_ParamLimits

0xd77f,	// (0x000519fb) cam6_autofocus_pane_ParamLimits

0xd77f,	// (0x000519fb) cam6_autofocus_pane

0x8320,	// (0x0004c59c) cam6_image_uncrop_pane_ParamLimits

0x8320,	// (0x0004c59c) cam6_image_uncrop_pane

0x832f,	// (0x0004c5ab) cam6_indi_pane_ParamLimits

0x832f,	// (0x0004c5ab) cam6_indi_pane

0x8345,	// (0x0004c5c1) cam6_mode_pane_ParamLimits

0x8345,	// (0x0004c5c1) cam6_mode_pane

0x8357,	// (0x0004c5d3) cam6_timer_pane_ParamLimits

0x8357,	// (0x0004c5d3) cam6_timer_pane

0x8363,	// (0x0004c5df) cam6_zoom_pane_ParamLimits

0x8363,	// (0x0004c5df) cam6_zoom_pane

0x836f,	// (0x0004c5eb) cam6_mode_pane_g1_ParamLimits

0x836f,	// (0x0004c5eb) cam6_mode_pane_g1

0x837f,	// (0x0004c5fb) cam6_mode_pane_g2_ParamLimits

0x837f,	// (0x0004c5fb) cam6_mode_pane_g2

0x838f,	// (0x0004c60b) cam6_mode_pane_g3_ParamLimits

0x838f,	// (0x0004c60b) cam6_mode_pane_g3

0x839f,	// (0x0004c61b) cam6_mode_pane_g4_ParamLimits

0x839f,	// (0x0004c61b) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x00053dde) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x00053dde) cam6_mode_pane_g

0xe123,	// (0x0005239f) bg_tb_trans_pane_cp08_ParamLimits

0xe123,	// (0x0005239f) bg_tb_trans_pane_cp08

0xe7b2,	// (0x00052a2e) cam6_battery_pane_ParamLimits

0xe7b2,	// (0x00052a2e) cam6_battery_pane

0xe7c8,	// (0x00052a44) cam6_indi_pane_g1_ParamLimits

0xe7c8,	// (0x00052a44) cam6_indi_pane_g1

0xe7da,	// (0x00052a56) cam6_indi_pane_g2_ParamLimits

0xe7da,	// (0x00052a56) cam6_indi_pane_g2

0xe7ec,	// (0x00052a68) cam6_indi_pane_g3_ParamLimits

0xe7ec,	// (0x00052a68) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x00053de7) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x00053de7) cam6_indi_pane_g

0xe7fe,	// (0x00052a7a) cam6_indi_pane_t1_ParamLimits

0xe7fe,	// (0x00052a7a) cam6_indi_pane_t1

0x83af,	// (0x0004c62b) cam6_autofocus_pane_g1

0x83b7,	// (0x0004c633) cam6_autofocus_pane_g2

0x83bf,	// (0x0004c63b) cam6_autofocus_pane_g3

0x83c7,	// (0x0004c643) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x00053dee) cam6_autofocus_pane_g

0xe824,	// (0x00052aa0) cam6_timer_pane_g1

0xe82c,	// (0x00052aa8) cam6_timer_pane_t1

0xe83a,	// (0x00052ab6) cam6_zoom_cont_pane

0xe842,	// (0x00052abe) cam6_zoom_pane_g1

0xe84a,	// (0x00052ac6) cam6_zoom_pane_g2

0x83cf,	// (0x0004c64b) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x00053df7) cam6_zoom_pane_g

0xd616,	// (0x00051892) cam6_battery_pane_g1

0xd616,	// (0x00051892) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00053968) cam6_battery_pane_g

0xe852,	// (0x00052ace) cam6_zoom_cont_pane_g1

0xe85b,	// (0x00052ad7) cam6_zoom_cont_pane_g2

0xe864,	// (0x00052ae0) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x00053dfe) cam6_zoom_cont_pane_g

0x83ec,	// (0x0004c668) cam6_mode_pane_cp_ParamLimits

0x83ec,	// (0x0004c668) cam6_mode_pane_cp

0x8363,	// (0x0004c5df) cam6_zoom_pane_cp_ParamLimits

0x8363,	// (0x0004c5df) cam6_zoom_pane_cp

0x83fe,	// (0x0004c67a) vid6_image_uncrop_cif_pane_ParamLimits

0x83fe,	// (0x0004c67a) vid6_image_uncrop_cif_pane

0x840e,	// (0x0004c68a) vid6_image_uncrop_nhd_pane_ParamLimits

0x840e,	// (0x0004c68a) vid6_image_uncrop_nhd_pane

0x8320,	// (0x0004c59c) vid6_image_uncrop_vga_pane_ParamLimits

0x8320,	// (0x0004c59c) vid6_image_uncrop_vga_pane

0x841d,	// (0x0004c699) vid6_image_uncrop_wvga_pane_ParamLimits

0x841d,	// (0x0004c699) vid6_image_uncrop_wvga_pane

0x842c,	// (0x0004c6a8) vid6_indi_pane_ParamLimits

0x842c,	// (0x0004c6a8) vid6_indi_pane

0xe123,	// (0x0005239f) bg_tb_trans_pane_cp09_ParamLimits

0xe123,	// (0x0005239f) bg_tb_trans_pane_cp09

0xe87c,	// (0x00052af8) cam6_battery_pane_cp_ParamLimits

0xe87c,	// (0x00052af8) cam6_battery_pane_cp

0xe888,	// (0x00052b04) vid6_indi_pane_g1_ParamLimits

0xe888,	// (0x00052b04) vid6_indi_pane_g1

0xe89a,	// (0x00052b16) vid6_indi_pane_g2_ParamLimits

0xe89a,	// (0x00052b16) vid6_indi_pane_g2

0xe8ac,	// (0x00052b28) vid6_indi_pane_g3_ParamLimits

0xe8ac,	// (0x00052b28) vid6_indi_pane_g3

0xe8c1,	// (0x00052b3d) vid6_indi_pane_g4_ParamLimits

0xe8c1,	// (0x00052b3d) vid6_indi_pane_g4

0xe8d6,	// (0x00052b52) vid6_indi_pane_g5_ParamLimits

0xe8d6,	// (0x00052b52) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x00053e05) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x00053e05) vid6_indi_pane_g

0xe8f0,	// (0x00052b6c) vid6_indi_pane_t1_ParamLimits

0xe8f0,	// (0x00052b6c) vid6_indi_pane_t1

0xe906,	// (0x00052b82) vid6_indi_pane_t2_ParamLimits

0xe906,	// (0x00052b82) vid6_indi_pane_t2

0xe92e,	// (0x00052baa) vid6_indi_pane_t3_ParamLimits

0xe92e,	// (0x00052baa) vid6_indi_pane_t3

0xe956,	// (0x00052bd2) vid6_indi_pane_t4_ParamLimits

0xe956,	// (0x00052bd2) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x00053e10) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x00053e10) vid6_indi_pane_t

0xe97a,	// (0x00052bf6) wait_bar_pane_cp08

0x8444,	// (0x0004c6c0) main_cset_text2_pane_t1_ParamLimits

0x8444,	// (0x0004c6c0) main_cset_text2_pane_t1

0x83d7,	// (0x0004c653) listscroll_gen_pane_cp06_t1_ParamLimits

0x83d7,	// (0x0004c653) listscroll_gen_pane_cp06_t1

0x1497,	// (0x00045713) main_cam6_set_pane

0xd969,	// (0x00051be5) bg_tb_trans_pane_cp06_ParamLimits

0xcc3a,	// (0x00050eb6) cam4_indicators_pane_g1_ParamLimits

0xcc4b,	// (0x00050ec7) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x00053b7e) cam4_indicators_pane_g_ParamLimits

0xcc69,	// (0x00050ee5) cam4_indicators_pane_t1_ParamLimits

0x16a3,	// (0x0004591f) bg_tb_trans_pane_cp07_ParamLimits

0xcc93,	// (0x00050f0f) vid4_indicators_pane_g1_ParamLimits

0xcca7,	// (0x00050f23) vid4_indicators_pane_g2_ParamLimits

0xccbb,	// (0x00050f37) vid4_indicators_pane_g3_ParamLimits

0xcccc,	// (0x00050f48) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00053b90) vid4_indicators_pane_g_ParamLimits

0xcce8,	// (0x00050f64) vid4_indicators_pane_t1_ParamLimits

0x7f40,	// (0x0004c1bc) vid4_progress_pane_g1_ParamLimits

0x7f52,	// (0x0004c1ce) vid4_progress_pane_g2_ParamLimits

0xd705,	// (0x00051981) vid4_progress_pane_g3_ParamLimits

0xd711,	// (0x0005198d) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x00053d41) vid4_progress_pane_g_ParamLimits

0xd72f,	// (0x000519ab) vid4_progress_pane_t1_ParamLimits

0xd744,	// (0x000519c0) vid4_progress_pane_t2_ParamLimits

0xd75a,	// (0x000519d6) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x00053d4c) vid4_progress_pane_t_ParamLimits

0xd76f,	// (0x000519eb) wait_bar_pane_cp07_ParamLimits

0x8464,	// (0x0004c6e0) main_cam6_set_pane_g2_ParamLimits

0x8464,	// (0x0004c6e0) main_cam6_set_pane_g2

0x8488,	// (0x0004c704) main_cset6_listscroll_pane_ParamLimits

0x8488,	// (0x0004c704) main_cset6_listscroll_pane

0x84a4,	// (0x0004c720) main_cset6_slider_pane_ParamLimits

0x84a4,	// (0x0004c720) main_cset6_slider_pane

0x84ba,	// (0x0004c736) main_cset6_text2_pane_ParamLimits

0x84ba,	// (0x0004c736) main_cset6_text2_pane

0xe989,	// (0x00052c05) main_cset6_text_pane

0xe991,	// (0x00052c0d) main_cset_list_pane_copy1_ParamLimits

0xe991,	// (0x00052c0d) main_cset_list_pane_copy1

0xe9a1,	// (0x00052c1d) scroll_pane_cp028_copy1

0x84c8,	// (0x0004c744) cset_list_set_pane_copy1

0x84db,	// (0x0004c757) aid_position_infowindow_above_copy1

0x84e3,	// (0x0004c75f) aid_position_infowindow_below_copy1

0xce58,	// (0x000510d4) cset_list_set_pane_g1_copy1

0xce60,	// (0x000510dc) cset_list_set_pane_g3_copy1_ParamLimits

0xce60,	// (0x000510dc) cset_list_set_pane_g3_copy1

0xce6f,	// (0x000510eb) cset_list_set_pane_t1_copy1_ParamLimits

0xce6f,	// (0x000510eb) cset_list_set_pane_t1_copy1

0x16a3,	// (0x0004591f) list_highlight_pane_cp021_copy1_ParamLimits

0x16a3,	// (0x0004591f) list_highlight_pane_cp021_copy1

0xe9aa,	// (0x00052c26) cset6_slider_pane_ParamLimits

0xe9aa,	// (0x00052c26) cset6_slider_pane

0xe9d6,	// (0x00052c52) main_cset6_slider_pane_g1_ParamLimits

0xe9d6,	// (0x00052c52) main_cset6_slider_pane_g1

0x84eb,	// (0x0004c767) main_cset6_slider_pane_g2_ParamLimits

0x84eb,	// (0x0004c767) main_cset6_slider_pane_g2

0xe28e,	// (0x0005250a) main_cset6_slider_pane_g3_ParamLimits

0xe28e,	// (0x0005250a) main_cset6_slider_pane_g3

0x7727,	// (0x0004b9a3) main_cset6_slider_pane_g4_ParamLimits

0x7727,	// (0x0004b9a3) main_cset6_slider_pane_g4

0x776f,	// (0x0004b9eb) main_cset6_slider_pane_g5_ParamLimits

0x776f,	// (0x0004b9eb) main_cset6_slider_pane_g5

0xe28e,	// (0x0005250a) main_cset6_slider_pane_g7_ParamLimits

0xe28e,	// (0x0005250a) main_cset6_slider_pane_g7

0xe29a,	// (0x00052516) main_cset6_slider_pane_g8_ParamLimits

0xe29a,	// (0x00052516) main_cset6_slider_pane_g8

0x770f,	// (0x0004b98b) main_cset6_slider_pane_g9_ParamLimits

0x770f,	// (0x0004b98b) main_cset6_slider_pane_g9

0x771b,	// (0x0004b997) main_cset6_slider_pane_g10_ParamLimits

0x771b,	// (0x0004b997) main_cset6_slider_pane_g10

0x7727,	// (0x0004b9a3) main_cset6_slider_pane_g11_ParamLimits

0x7727,	// (0x0004b9a3) main_cset6_slider_pane_g11

0x7733,	// (0x0004b9af) main_cset6_slider_pane_g12_ParamLimits

0x7733,	// (0x0004b9af) main_cset6_slider_pane_g12

0x773f,	// (0x0004b9bb) main_cset6_slider_pane_g13_ParamLimits

0x773f,	// (0x0004b9bb) main_cset6_slider_pane_g13

0x774b,	// (0x0004b9c7) main_cset6_slider_pane_g14_ParamLimits

0x774b,	// (0x0004b9c7) main_cset6_slider_pane_g14

0x8513,	// (0x0004c78f) main_cset6_slider_pane_g15_ParamLimits

0x8513,	// (0x0004c78f) main_cset6_slider_pane_g15

0x776f,	// (0x0004b9eb) main_cset6_slider_pane_g16_ParamLimits

0x776f,	// (0x0004b9eb) main_cset6_slider_pane_g16

0x777b,	// (0x0004b9f7) main_cset6_slider_pane_g17_ParamLimits

0x777b,	// (0x0004b9f7) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x00053e19) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x00053e19) main_cset6_slider_pane_g

0xe9fe,	// (0x00052c7a) main_cset6_slider_pane_t1_ParamLimits

0xe9fe,	// (0x00052c7a) main_cset6_slider_pane_t1

0x852b,	// (0x0004c7a7) main_cset6_slider_pane_t2_ParamLimits

0x852b,	// (0x0004c7a7) main_cset6_slider_pane_t2

0x8556,	// (0x0004c7d2) main_cset6_slider_pane_t3_ParamLimits

0x8556,	// (0x0004c7d2) main_cset6_slider_pane_t3

0x8581,	// (0x0004c7fd) main_cset6_slider_pane_t4_ParamLimits

0x8581,	// (0x0004c7fd) main_cset6_slider_pane_t4

0x85ac,	// (0x0004c828) main_cset6_slider_pane_t5_ParamLimits

0x85ac,	// (0x0004c828) main_cset6_slider_pane_t5

0xea3f,	// (0x00052cbb) main_cset6_slider_pane_t7_ParamLimits

0xea3f,	// (0x00052cbb) main_cset6_slider_pane_t7

0x85d7,	// (0x0004c853) main_cset6_slider_pane_t8_ParamLimits

0x85d7,	// (0x0004c853) main_cset6_slider_pane_t8

0x85fb,	// (0x0004c877) main_cset6_slider_pane_t9_ParamLimits

0x85fb,	// (0x0004c877) main_cset6_slider_pane_t9

0x861f,	// (0x0004c89b) main_cset6_slider_pane_t10_ParamLimits

0x861f,	// (0x0004c89b) main_cset6_slider_pane_t10

0x8643,	// (0x0004c8bf) main_cset6_slider_pane_t11_ParamLimits

0x8643,	// (0x0004c8bf) main_cset6_slider_pane_t11

0xea75,	// (0x00052cf1) main_cset6_slider_pane_t14_ParamLimits

0xea75,	// (0x00052cf1) main_cset6_slider_pane_t14

0xeaae,	// (0x00052d2a) main_cset6_slider_pane_t15_ParamLimits

0xeaae,	// (0x00052d2a) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x00053e3e) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x00053e3e) main_cset6_slider_pane_t

0xe352,	// (0x000525ce) cset_slider_pane_g1_copy1

0xe35b,	// (0x000525d7) cset_slider_pane_g2_copy1

0xe364,	// (0x000525e0) cset_slider_pane_g3_copy1

0x1497,	// (0x00045713) bg_popup_sub_pane_cp011_copy1

0xeaf3,	// (0x00052d6f) main_cset_text_pane_g1_copy1

0xe3ef,	// (0x0005266b) main_cset_text_pane_t1_copy1

0xe3fd,	// (0x00052679) main_cset_text_pane_t2_copy1

0xe40b,	// (0x00052687) main_cset_text_pane_t3_copy1

0xe419,	// (0x00052695) main_cset_text_pane_t4_copy1

0xe427,	// (0x000526a3) main_cset_text_pane_t5_copy1

0xeafb,	// (0x00052d77) main_cset_text_pane_t6_copy1

0xeb09,	// (0x00052d85) main_cset_text_pane_t7_copy1

0x8444,	// (0x0004c6c0) main_cset_text2_pane_t1_copy1

0x16a3,	// (0x0004591f) main_ncimui_pane

0x4df8,	// (0x00049074) popup_query_ncimui_window_ParamLimits

0x4df8,	// (0x00049074) popup_query_ncimui_window

0xc987,	// (0x00050c03) field_cale_ev2_pane_g4_ParamLimits

0xc987,	// (0x00050c03) field_cale_ev2_pane_g4

0x69db,	// (0x0004ac57) cell_video_dialer_keypad_pane_g2_ParamLimits

0x69db,	// (0x0004ac57) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00053b1c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00053b1c) cell_video_dialer_keypad_pane_g

0x69f3,	// (0x0004ac6f) cell_video_dialer_keypad_pane_t1

0x1497,	// (0x00045713) bg_popup_window_pane_cp012

0xb083,	// (0x0004f2ff) heading_pane_cp06

0xeb35,	// (0x00052db1) ncim_query_content_pane

0x1497,	// (0x00045713) bg_popup_heading_pane_cp01

0xeb3d,	// (0x00052db9) ncim_heading_pane_t1

0xeb4b,	// (0x00052dc7) ncim_indicator_popup_pane

0xeb5d,	// (0x00052dd9) ncim_query_button_pane

0xeb71,	// (0x00052ded) ncim_query_content_pane_t1

0xeb83,	// (0x00052dff) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x00053e82) ncim_query_content_pane_t

0xebbd,	// (0x00052e39) ncim_query_list_pane

0xebcf,	// (0x00052e4b) ncim_query_popup_pane

0xeb4b,	// (0x00052dc7) ncim_indicator_popup_pane_ParamLimits

0x878d,	// (0x0004ca09) ncim_query_content_pane_g1_ParamLimits

0x878d,	// (0x0004ca09) ncim_query_content_pane_g1

0xeb71,	// (0x00052ded) ncim_query_content_pane_t1_ParamLimits

0xeb83,	// (0x00052dff) ncim_query_content_pane_t2_ParamLimits

0x8799,	// (0x0004ca15) ncim_query_content_pane_t3_ParamLimits

0x8799,	// (0x0004ca15) ncim_query_content_pane_t3

0x87c1,	// (0x0004ca3d) ncim_query_content_pane_t4_ParamLimits

0x87c1,	// (0x0004ca3d) ncim_query_content_pane_t4

0x87e9,	// (0x0004ca65) ncim_query_content_pane_t5_ParamLimits

0x87e9,	// (0x0004ca65) ncim_query_content_pane_t5

0xeb95,	// (0x00052e11) ncim_query_content_pane_t6_ParamLimits

0xeb95,	// (0x00052e11) ncim_query_content_pane_t6

0xfc06,	// (0x00053e82) ncim_query_content_pane_t_ParamLimits

0xebbd,	// (0x00052e39) ncim_query_list_pane_ParamLimits

0xebcf,	// (0x00052e4b) ncim_query_popup_pane_ParamLimits

0xebe3,	// (0x00052e5f) wait_bar_pane_cp04

0x1497,	// (0x00045713) input_focus_pane_cp011

0xebeb,	// (0x00052e67) ncim_query_popup_pane_t1

0xebf9,	// (0x00052e75) ncim_list_query_list_pane_ParamLimits

0xebf9,	// (0x00052e75) ncim_list_query_list_pane

0x1497,	// (0x00045713) bg_button_pane_cp027

0xec0c,	// (0x00052e88) ncim_query_button_pane_g1

0x1497,	// (0x00045713) list_highlight_pane_cp012

0xec16,	// (0x00052e92) ncim_list_query_list_pane_g1

0xec1e,	// (0x00052e9a) ncim_list_query_list_pane_t1

0xcc5a,	// (0x00050ed6) cam4_indicators_pane_g3_ParamLimits

0xcc5a,	// (0x00050ed6) cam4_indicators_pane_g3

0xccd8,	// (0x00050f54) vid4_indicators_pane_g5_ParamLimits

0xccd8,	// (0x00050f54) vid4_indicators_pane_g5

0xd720,	// (0x0005199c) vid4_progress_pane_g5_ParamLimits

0xd720,	// (0x0005199c) vid4_progress_pane_g5

0x867b,	// (0x0004c8f7) main_ncimui_pane_g1

0x86e1,	// (0x0004c95d) ncimui_group_query_pane_ParamLimits

0x86e1,	// (0x0004c95d) ncimui_group_query_pane

0x8729,	// (0x0004c9a5) ncimui_list_pane_ParamLimits

0x8729,	// (0x0004c9a5) ncimui_list_pane

0x8750,	// (0x0004c9cc) ncimui_text_pane_ParamLimits

0x8750,	// (0x0004c9cc) ncimui_text_pane

0x8811,	// (0x0004ca8d) ncimui_text_pane_t1_ParamLimits

0x8811,	// (0x0004ca8d) ncimui_text_pane_t1

0xec2c,	// (0x00052ea8) ncimui_list_single_graphic_pane_ParamLimits

0xec2c,	// (0x00052ea8) ncimui_list_single_graphic_pane

0x882f,	// (0x0004caab) ncimui_query_pane_ParamLimits

0x882f,	// (0x0004caab) ncimui_query_pane

0x1497,	// (0x00045713) list_highlight_pane_cp013

0xec3c,	// (0x00052eb8) ncim_list_query_list_pane_t1_copy1

0xec16,	// (0x00052e92) ncim_list_single_graphic_pane_g1

0xec4a,	// (0x00052ec6) ncim_query_button_pane_cp01

0xec56,	// (0x00052ed2) ncim_query_entry_pane_ParamLimits

0xec56,	// (0x00052ed2) ncim_query_entry_pane

0xec69,	// (0x00052ee5) ncimui_query_pane_g1

0xec75,	// (0x00052ef1) ncimui_query_pane_t1_ParamLimits

0xec75,	// (0x00052ef1) ncimui_query_pane_t1

0x16a3,	// (0x0004591f) input_focus_pane_cp012

0xec8e,	// (0x00052f0a) ncim_query_entry_pane_t1

0x215a,	// (0x000463d6) main_im_pane_ParamLimits

0x16a3,	// (0x0004591f) main_mobtv_pane_ParamLimits

0x16a3,	// (0x0004591f) main_mobtv_pane

0x770f,	// (0x0004b98b) main_cset6_slider_pane_g18_ParamLimits

0x770f,	// (0x0004b98b) main_cset6_slider_pane_g18

0x773f,	// (0x0004b9bb) main_cset6_slider_pane_g19_ParamLimits

0x773f,	// (0x0004b9bb) main_cset6_slider_pane_g19

0xe131,	// (0x000523ad) bg_main_mobtv_pane_ParamLimits

0xe131,	// (0x000523ad) bg_main_mobtv_pane

0x8842,	// (0x0004cabe) main_mobtv_info_pane

0x884b,	// (0x0004cac7) main_mobtv_loading_pane_ParamLimits

0x884b,	// (0x0004cac7) main_mobtv_loading_pane

0xeca0,	// (0x00052f1c) main_mobtv_pg_channel_list_pane

0xecaa,	// (0x00052f26) main_mobtv_pg_hdr_pane

0x8858,	// (0x0004cad4) main_mobtv_programe_curr_pane_ParamLimits

0x8858,	// (0x0004cad4) main_mobtv_programe_curr_pane

0x8865,	// (0x0004cae1) main_mobtv_programe_next_pane_ParamLimits

0x8865,	// (0x0004cae1) main_mobtv_programe_next_pane

0xecb3,	// (0x00052f2f) popup_mobtv_noti_window

0xd616,	// (0x00051892) main_tv_pg_hdr_pane_g1

0xecbb,	// (0x00052f37) main_tv_pg_hdr_pane_g2

0xecc3,	// (0x00052f3f) main_tv_pg_hdr_pane_g3

0xeccb,	// (0x00052f47) main_tv_pg_hdr_pane_g4

0xecd3,	// (0x00052f4f) main_tv_pg_hdr_pane_g5

0xecdd,	// (0x00052f59) main_tv_pg_hdr_pane_g6

0xece7,	// (0x00052f63) main_tv_pg_hdr_pane_g7

0xecf1,	// (0x00052f6d) main_tv_pg_hdr_pane_g8

0xecfb,	// (0x00052f77) main_tv_pg_hdr_pane_g9

0xed05,	// (0x00052f81) main_tv_pg_hdr_pane_g10

0xed0f,	// (0x00052f8b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x00053e8f) main_tv_pg_hdr_pane_g

0xed19,	// (0x00052f95) main_tv_pg_hdr_pane_t1

0xed27,	// (0x00052fa3) main_tv_pg_hdr_pane_t2

0xed35,	// (0x00052fb1) main_tv_pg_hdr_pane_t3

0xed45,	// (0x00052fc1) main_tv_pg_hdr_pane_t4

0xed55,	// (0x00052fd1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x00053ea6) main_tv_pg_hdr_pane_t

0xed65,	// (0x00052fe1) single_mobtv_pg_channel_pane_ParamLimits

0xed65,	// (0x00052fe1) single_mobtv_pg_channel_pane

0xed77,	// (0x00052ff3) single_mobtv_pg_channel_table_pane

0xed80,	// (0x00052ffc) single_mobtv_pg_channel_thumb_pane

0xed89,	// (0x00053005) single_tv_pg_channel_pane_g1

0xed92,	// (0x0005300e) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x00053eb1) single_tv_pg_channel_pane_g

0xd969,	// (0x00051be5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd969,	// (0x00051be5) bg_single_mobtv_pg_channel_thumb_pane

0xed9b,	// (0x00053017) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xed9b,	// (0x00053017) single_mobtv_pg_channel_thumb_pane_g1

0xeda9,	// (0x00053025) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xeda9,	// (0x00053025) single_mobtv_pg_channel_thumb_pane_g2

0xedb5,	// (0x00053031) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xedb5,	// (0x00053031) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x00053eb6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x00053eb6) single_mobtv_pg_channel_thumb_pane_g

0xedc1,	// (0x0005303d) single_mobtv_pg_channel_thumb_pane_t1

0xedcf,	// (0x0005304b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x00053ebd) single_mobtv_pg_channel_thumb_pane_t

0xd616,	// (0x00051892) bg_single_mobtv_pg_channel_table_pane_g1

0xd616,	// (0x00051892) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00053968) bg_single_mobtv_pg_channel_table_pane_g

0xeddd,	// (0x00053059) single_mobtv_pg_channel_table_pane_t1

0xedeb,	// (0x00053067) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00053ec2) single_mobtv_pg_channel_table_pane_t

0x887a,	// (0x0004caf6) main_mobtv_info_pane_g1_ParamLimits

0x887a,	// (0x0004caf6) main_mobtv_info_pane_g1

0x8898,	// (0x0004cb14) main_mobtv_info_pane_t1_ParamLimits

0x8898,	// (0x0004cb14) main_mobtv_info_pane_t1

0x8910,	// (0x0004cb8c) main_mobtv_info_pane_t2_ParamLimits

0x8910,	// (0x0004cb8c) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x00053ecc) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x00053ecc) main_mobtv_info_pane_t

0x899f,	// (0x0004cc1b) wait_bar_pane_cp05

0x89b1,	// (0x0004cc2d) main_mobtv_loading_pane_g1_ParamLimits

0x89b1,	// (0x0004cc2d) main_mobtv_loading_pane_g1

0x89c4,	// (0x0004cc40) main_mobtv_loading_pane_g2_ParamLimits

0x89c4,	// (0x0004cc40) main_mobtv_loading_pane_g2

0x89d0,	// (0x0004cc4c) main_mobtv_loading_pane_g3_ParamLimits

0x89d0,	// (0x0004cc4c) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00053ed3) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00053ed3) main_mobtv_loading_pane_g

0xedf9,	// (0x00053075) main_mobtv_loading_pane_t1_ParamLimits

0xedf9,	// (0x00053075) main_mobtv_loading_pane_t1

0xee11,	// (0x0005308d) main_mobtv_loading_pane_t2_ParamLimits

0xee11,	// (0x0005308d) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x00053eda) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x00053eda) main_mobtv_loading_pane_t

0x89e3,	// (0x0004cc5f) wait_bar_pane_cp06_ParamLimits

0x89e3,	// (0x0004cc5f) wait_bar_pane_cp06

0xee35,	// (0x000530b1) main_mobtv_programe_curr_pane_t1

0xee43,	// (0x000530bf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x00053edf) main_mobtv_programe_curr_pane_t

0xee51,	// (0x000530cd) main_mobtv_programe_next_pane_t1

0xee5f,	// (0x000530db) main_mobtv_programe_next_pane_t2

0xee6d,	// (0x000530e9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x00053ee4) main_mobtv_programe_next_pane_t

0x1497,	// (0x00045713) bg_popup_mobtv_noti_window_pane

0xee7b,	// (0x000530f7) popup_mobtv_noti_window_g1

0xee83,	// (0x000530ff) popup_mobtv_noti_window_t1

0xee91,	// (0x0005310d) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x00053eeb) popup_mobtv_noti_window_t

0xd616,	// (0x00051892) bg_popup_mobtv_noti_window_pane_g1

0x1497,	// (0x00045713) sc_clock_pane

0x1497,	// (0x00045713) main_fs_bigclock_pane

0x8195,	// (0x0004c411) blid2_tripm_pane_t4_ParamLimits

0x8195,	// (0x0004c411) blid2_tripm_pane_t4

0x89f2,	// (0x0004cc6e) sc_clock_pane_g1_ParamLimits

0x89f2,	// (0x0004cc6e) sc_clock_pane_g1

0x8a04,	// (0x0004cc80) sc_clock_pane_t1_ParamLimits

0x8a04,	// (0x0004cc80) sc_clock_pane_t1

0x8a26,	// (0x0004cca2) sc_clock_pane_t2_ParamLimits

0x8a26,	// (0x0004cca2) sc_clock_pane_t2

0x8a3e,	// (0x0004ccba) sc_clock_pane_t3_ParamLimits

0x8a3e,	// (0x0004ccba) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x00053ef0) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x00053ef0) sc_clock_pane_t

0x99ea,	// (0x0004dc66) main_fs_bigclock_indicator_pane_ParamLimits

0x99ea,	// (0x0004dc66) main_fs_bigclock_indicator_pane

0xd939,	// (0x00051bb5) main_fs_bigclock_pane_g1_ParamLimits

0xd939,	// (0x00051bb5) main_fs_bigclock_pane_g1

0x99f6,	// (0x0004dc72) main_fs_bigclock_pane_t1_ParamLimits

0x99f6,	// (0x0004dc72) main_fs_bigclock_pane_t1

0x9a08,	// (0x0004dc84) main_fs_bigclock_pane_t2_ParamLimits

0x9a08,	// (0x0004dc84) main_fs_bigclock_pane_t2

0x9a1a,	// (0x0004dc96) main_fs_bigclock_pane_t3_ParamLimits

0x9a1a,	// (0x0004dc96) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x000540f4) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x000540f4) main_fs_bigclock_pane_t

0x9a2c,	// (0x0004dca8) main_fs_bigclock_indicator_pane_g1

0xeb65,	// (0x00052de1) ncim_query_content_pane_g2_ParamLimits

0xeb65,	// (0x00052de1) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x00053e7d) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x00053e7d) ncim_query_content_pane_g

0x8a57,	// (0x0004ccd3) sc_clock_pane_t4_ParamLimits

0x8a57,	// (0x0004ccd3) sc_clock_pane_t4

0x16a3,	// (0x0004591f) main_radioblah_pane

0xe094,	// (0x00052310) cell_call4_button_pane_t1_copy1_ParamLimits

0xe094,	// (0x00052310) cell_call4_button_pane_t1_copy1

0x8693,	// (0x0004c90f) main_ncimui_pane_t1_ParamLimits

0x8693,	// (0x0004c90f) main_ncimui_pane_t1

0x86ad,	// (0x0004c929) main_ncimui_pane_t2_ParamLimits

0x86ad,	// (0x0004c929) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x00053e76) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x00053e76) main_ncimui_pane_t

0xefec,	// (0x00053268) main_radioblah_anim_pane_ParamLimits

0xefec,	// (0x00053268) main_radioblah_anim_pane

0xeffd,	// (0x00053279) main_radioblah_info_pane_ParamLimits

0xeffd,	// (0x00053279) main_radioblah_info_pane

0xf011,	// (0x0005328d) main_radioblah_pane_t1_ParamLimits

0xf011,	// (0x0005328d) main_radioblah_pane_t1

0xf02d,	// (0x000532a9) main_radioblah_pane_t2_ParamLimits

0xf02d,	// (0x000532a9) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x00053f11) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x00053f11) main_radioblah_pane_t

0x8b06,	// (0x0004cd82) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8b06,	// (0x0004cd82) main_radioblah_rocker_ctrl_pane

0xf075,	// (0x000532f1) main_radioblah_info_pane_t1_ParamLimits

0xf075,	// (0x000532f1) main_radioblah_info_pane_t1

0x8b5e,	// (0x0004cdda) main_radioblah_info_pane_t2_ParamLimits

0x8b5e,	// (0x0004cdda) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x00053f1a) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x00053f1a) main_radioblah_info_pane_t

0xd616,	// (0x00051892) main_radioblah_rocker_ctrl_pane_g1

0x8c10,	// (0x0004ce8c) main_radioblah_rocker_ctrl_pane_g2

0x8c18,	// (0x0004ce94) main_radioblah_rocker_ctrl_pane_g3

0x8c20,	// (0x0004ce9c) main_radioblah_rocker_ctrl_pane_g4

0x8c28,	// (0x0004cea4) main_radioblah_rocker_ctrl_pane_g5

0x8c30,	// (0x0004ceac) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x00053f23) main_radioblah_rocker_ctrl_pane_g

0x8444,	// (0x0004c6c0) main_cset_text2_pane_t1_copy1_ParamLimits

0xcc2a,	// (0x00050ea6) cam4_image_uncrop_qvga_pane

0xcc83,	// (0x00050eff) vid4_image_uncrop_qcif_pane

0xd77f,	// (0x000519fb) cam6_image_uncrop_qvga_pane_ParamLimits

0xd77f,	// (0x000519fb) cam6_image_uncrop_qvga_pane

0xe86c,	// (0x00052ae8) vid6_image_uncrop_qcif_pane_ParamLimits

0xe86c,	// (0x00052ae8) vid6_image_uncrop_qcif_pane

0x1497,	// (0x00045713) bg_popup_preview_window_pane_cp03

0xeb17,	// (0x00052d93) list_cset_text2_pane

0xeb1f,	// (0x00052d9b) main_cset6_text2_pane_g1

0xeb27,	// (0x00052da3) main_cset6_text2_pane_t1

0x8c38,	// (0x0004ceb4) list_cset_text2_pane_t1_ParamLimits

0x8c38,	// (0x0004ceb4) list_cset_text2_pane_t1

0x16a3,	// (0x0004591f) main_radioblah_pane_ParamLimits

0x898b,	// (0x0004cc07) main_mobtv_info_pane_t3_ParamLimits

0x898b,	// (0x0004cc07) main_mobtv_info_pane_t3

0x8af4,	// (0x0004cd70) main_radioblah_pane_g1

0x8b2e,	// (0x0004cdaa) main_radioblah_info_pane_g1

0x8bb5,	// (0x0004ce31) main_radioblah_info_pane_t3_ParamLimits

0x8bb5,	// (0x0004ce31) main_radioblah_info_pane_t3

0x3866,	// (0x00047ae2) highlight_cell_cale_month_pane_ParamLimits

0x3866,	// (0x00047ae2) highlight_cell_cale_month_pane

0x1497,	// (0x00045713) main_phob_fisheye_pane

0xda51,	// (0x00051ccd) scroll_pane_cp0031_ParamLimits

0xda51,	// (0x00051ccd) scroll_pane_cp0031

0xe97a,	// (0x00052bf6) wait_bar_pane_cp08_ParamLimits

0x84c8,	// (0x0004c744) cset_list_set_pane_copy1_ParamLimits

0xf0af,	// (0x0005332b) highlight_cell_cale_month_pane_g1

0x8c55,	// (0x0004ced1) highlight_cell_cale_month_pane_t1

0xe60b,	// (0x00052887) list_gen_pane_cp01

0xe279,	// (0x000524f5) scroll_pane_01

0x8c63,	// (0x0004cedf) list_single_double_fisheye_pane

0x0e04,	// (0x00045080) list_double_fisheye_pane_g1_ParamLimits

0x0e04,	// (0x00045080) list_double_fisheye_pane_g1

0x0e10,	// (0x0004508c) list_double_fisheye_pane_g2_ParamLimits

0x0e10,	// (0x0004508c) list_double_fisheye_pane_g2

0x8c6c,	// (0x0004cee8) list_double_fisheye_pane_g3_ParamLimits

0x8c6c,	// (0x0004cee8) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x00053f30) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x00053f30) list_double_fisheye_pane_g

0x0e41,	// (0x000450bd) list_double_fisheye_pane_t1_ParamLimits

0x0e41,	// (0x000450bd) list_double_fisheye_pane_t1

0x0e5c,	// (0x000450d8) list_double_fisheye_pane_t2_ParamLimits

0x0e5c,	// (0x000450d8) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x00053f3b) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x00053f3b) list_double_fisheye_pane_t

0x1497,	// (0x00045713) main_call5_pane

0x8a82,	// (0x0004ccfe) sc_swipe_pane_ParamLimits

0x8a82,	// (0x0004ccfe) sc_swipe_pane

0x8c8b,	// (0x0004cf07) call5_image_pane_ParamLimits

0x8c8b,	// (0x0004cf07) call5_image_pane

0x8ca8,	// (0x0004cf24) call5_swipe_1_pane_ParamLimits

0x8ca8,	// (0x0004cf24) call5_swipe_1_pane

0x8cbb,	// (0x0004cf37) call5_swipe_2_pane_ParamLimits

0x8cbb,	// (0x0004cf37) call5_swipe_2_pane

0x8ce6,	// (0x0004cf62) popup_call5_audio_first_window_ParamLimits

0x8ce6,	// (0x0004cf62) popup_call5_audio_first_window

0xd969,	// (0x00051be5) call5_swipe_1_pane_g1_ParamLimits

0xd969,	// (0x00051be5) call5_swipe_1_pane_g1

0xf0b7,	// (0x00053333) call5_swipe_1_pane_g2_ParamLimits

0xf0b7,	// (0x00053333) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x00053f40) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x00053f40) call5_swipe_1_pane_g

0xf0c3,	// (0x0005333f) call5_swipe_1_pane_t1_ParamLimits

0xf0c3,	// (0x0005333f) call5_swipe_1_pane_t1

0xd969,	// (0x00051be5) call5_swipe_2_pane_g1_ParamLimits

0xd969,	// (0x00051be5) call5_swipe_2_pane_g1

0x8cf7,	// (0x0004cf73) call5_swipe_2_pane_g2_ParamLimits

0x8cf7,	// (0x0004cf73) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x00053f45) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x00053f45) call5_swipe_2_pane_g

0x8d03,	// (0x0004cf7f) call5_swipe_2_pane_t1_ParamLimits

0x8d03,	// (0x0004cf7f) call5_swipe_2_pane_t1

0x8d18,	// (0x0004cf94) sc_swipe_pane_g1_ParamLimits

0x8d18,	// (0x0004cf94) sc_swipe_pane_g1

0x8d25,	// (0x0004cfa1) sc_swipe_pane_g2_ParamLimits

0x8d25,	// (0x0004cfa1) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x00053f4a) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x00053f4a) sc_swipe_pane_g

0x8d31,	// (0x0004cfad) sc_swipe_pane_t1_ParamLimits

0x8d31,	// (0x0004cfad) sc_swipe_pane_t1

0x1497,	// (0x00045713) main_cmail_launcher_pane

0x8d46,	// (0x0004cfc2) aid_size_cell_cmail_l_ParamLimits

0x8d46,	// (0x0004cfc2) aid_size_cell_cmail_l

0x8d60,	// (0x0004cfdc) grid_cmail_l_pane_ParamLimits

0x8d60,	// (0x0004cfdc) grid_cmail_l_pane

0x8d7b,	// (0x0004cff7) cell_cmail_l_pane_ParamLimits

0x8d7b,	// (0x0004cff7) cell_cmail_l_pane

0x8da1,	// (0x0004d01d) cell_cmail_l_pane_g1_ParamLimits

0x8da1,	// (0x0004d01d) cell_cmail_l_pane_g1

0x8dad,	// (0x0004d029) cell_cmail_l_pane_t1_ParamLimits

0x8dad,	// (0x0004d029) cell_cmail_l_pane_t1

0x8dc3,	// (0x0004d03f) cell_cmail_l_pane_t2_ParamLimits

0x8dc3,	// (0x0004d03f) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x00053f4f) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x00053f4f) cell_cmail_l_pane_t

0x16a3,	// (0x0004591f) grid_highlight_pane_cp018_ParamLimits

0x16a3,	// (0x0004591f) grid_highlight_pane_cp018

0x1567,	// (0x000457e3) main2_pane_ParamLimits

0x1567,	// (0x000457e3) main2_pane

0x2381,	// (0x000465fd) popup_sp_fs_action_menu_bg_pane_g1

0x2389,	// (0x00046605) popup_sp_fs_action_menu_bg_pane_g2

0x2391,	// (0x0004660d) popup_sp_fs_action_menu_bg_pane_g3

0x2399,	// (0x00046615) popup_sp_fs_action_menu_bg_pane_g4

0x23a1,	// (0x0004661d) popup_sp_fs_action_menu_bg_pane_g5

0x23a9,	// (0x00046625) popup_sp_fs_action_menu_bg_pane_g6

0x23b1,	// (0x0004662d) popup_sp_fs_action_menu_bg_pane_g7

0x23b9,	// (0x00046635) popup_sp_fs_action_menu_bg_pane_g8

0x23c1,	// (0x0004663d) popup_sp_fs_action_menu_bg_pane_g9

0x23c9,	// (0x00046645) popup_sp_fs_action_menu_bg_pane_g10

0x23c9,	// (0x00046645) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00053414) popup_sp_fs_action_menu_bg_pane_g

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t3_g3_g1

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_t3_g3_g2

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x000534c4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x000534c4) list_medium_line_x2_t3_g3_g

0xa8db,	// (0x0004eb57) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa8db,	// (0x0004eb57) list_medium_line_x2_t3_g3_t1

0x09d3,	// (0x00044c4f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x09d3,	// (0x00044c4f) list_medium_line_x2_t3_g3_t2

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x000534cb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x000534cb) list_medium_line_x2_t3_g3_t

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t3_g2_g1

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x000534d2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x000534d2) list_medium_line_x2_t3_g2_g

0xa905,	// (0x0004eb81) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa905,	// (0x0004eb81) list_medium_line_x2_t3_g2_t1

0xa91b,	// (0x0004eb97) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa91b,	// (0x0004eb97) list_medium_line_x2_t3_g2_t2

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x000534d7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x000534d7) list_medium_line_x2_t3_g2_t

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t4_g4_g1

0xa92d,	// (0x0004eba9) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa92d,	// (0x0004eba9) list_medium_line_x2_t4_g4_g2

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_t4_g4_g3

0xa939,	// (0x0004ebb5) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa939,	// (0x0004ebb5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x000534de) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x000534de) list_medium_line_x2_t4_g4_g

0x09e7,	// (0x00044c63) list_medium_line_x2_t4_g4_t1_ParamLimits

0x09e7,	// (0x00044c63) list_medium_line_x2_t4_g4_t1

0x0a01,	// (0x00044c7d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0a01,	// (0x00044c7d) list_medium_line_x2_t4_g4_t2

0x0a16,	// (0x00044c92) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0a16,	// (0x00044c92) list_medium_line_x2_t4_g4_t3

0xa945,	// (0x0004ebc1) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa945,	// (0x0004ebc1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x000534e7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x000534e7) list_medium_line_x2_t4_g4_t

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t2_g4_g1

0xa92d,	// (0x0004eba9) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa92d,	// (0x0004eba9) list_medium_line_x2_t2_g4_g2

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_t2_g4_g3

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0005354e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0005354e) list_medium_line_x2_t2_g4_g

0xac2f,	// (0x0004eeab) list_medium_line_x2_t2_g4_t1_ParamLimits

0xac2f,	// (0x0004eeab) list_medium_line_x2_t2_g4_t1

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00053557) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00053557) list_medium_line_x2_t2_g4_t

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t2_g3_g1

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_t2_g3_g2

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x000534c4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x000534c4) list_medium_line_x2_t2_g3_g

0xac44,	// (0x0004eec0) list_medium_line_x2_t2_g3_t1_ParamLimits

0xac44,	// (0x0004eec0) list_medium_line_x2_t2_g3_t1

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0005355c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0005355c) list_medium_line_x2_t2_g3_t

0x3a4c,	// (0x00047cc8) main_sp_fs_list_pane_ParamLimits

0x3a4c,	// (0x00047cc8) main_sp_fs_list_pane

0x3a58,	// (0x00047cd4) sp_fs_scroll_pane_ParamLimits

0x3a58,	// (0x00047cd4) sp_fs_scroll_pane

0x0a2b,	// (0x00044ca7) list_medium_line_x2_t3_t1

0x0a3b,	// (0x00044cb7) list_medium_line_x2_t3_t2

0xae28,	// (0x0004f0a4) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x000535a7) list_medium_line_x2_t3_t

0x0a49,	// (0x00044cc5) list_medium_line_x3_t4_t1

0x0a59,	// (0x00044cd5) list_medium_line_x3_t4_t2

0xae36,	// (0x0004f0b2) list_medium_line_x3_t4_t3

0xae28,	// (0x0004f0a4) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x000535ae) list_medium_line_x3_t4_t

0x0a67,	// (0x00044ce3) list_medium_line_x4_t5_t1

0x0a77,	// (0x00044cf3) list_medium_line_x4_t5_t2

0xae36,	// (0x0004f0b2) list_medium_line_x4_t5_t3

0xae44,	// (0x0004f0c0) list_medium_line_x4_t5_t4

0xae28,	// (0x0004f0a4) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x000535b7) list_medium_line_x4_t5_t

0xa8b7,	// (0x0004eb33) list_medium_line_t4_g4_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_t4_g4_g1

0xa939,	// (0x0004ebb5) list_medium_line_t4_g4_g2_ParamLimits

0xa939,	// (0x0004ebb5) list_medium_line_t4_g4_g2

0xae52,	// (0x0004f0ce) list_medium_line_t4_g4_g3_ParamLimits

0xae52,	// (0x0004f0ce) list_medium_line_t4_g4_g3

0xa8cf,	// (0x0004eb4b) list_medium_line_t4_g4_g4_ParamLimits

0xa8cf,	// (0x0004eb4b) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x000535c2) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x000535c2) list_medium_line_t4_g4_g

0xae5e,	// (0x0004f0da) list_medium_line_t4_g4_t1_ParamLimits

0xae5e,	// (0x0004f0da) list_medium_line_t4_g4_t1

0xae73,	// (0x0004f0ef) list_medium_line_t4_g4_t2_ParamLimits

0xae73,	// (0x0004f0ef) list_medium_line_t4_g4_t2

0xae88,	// (0x0004f104) list_medium_line_t4_g4_t3_ParamLimits

0xae88,	// (0x0004f104) list_medium_line_t4_g4_t3

0xa8f0,	// (0x0004eb6c) list_medium_line_t4_g4_t4_ParamLimits

0xa8f0,	// (0x0004eb6c) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x000535cb) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x000535cb) list_medium_line_t4_g4_t

0x3b02,	// (0x00047d7e) chi_dic_find_pane_g1

0x4bd6,	// (0x00048e52) main_tport_pane

0xcd4e,	// (0x00050fca) list_medium_line_plain_t1

0xcd5c,	// (0x00050fd8) list_medium_line_t2_g2_g1_ParamLimits

0xcd5c,	// (0x00050fd8) list_medium_line_t2_g2_g1

0xcd68,	// (0x00050fe4) list_medium_line_t2_g2_g2_ParamLimits

0xcd68,	// (0x00050fe4) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x00053c87) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x00053c87) list_medium_line_t2_g2_g

0x0c5b,	// (0x00044ed7) list_medium_line_t2_g2_t1_ParamLimits

0x0c5b,	// (0x00044ed7) list_medium_line_t2_g2_t1

0x0c75,	// (0x00044ef1) list_medium_line_t2_g2_t2_ParamLimits

0x0c75,	// (0x00044ef1) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x00053c8c) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x00053c8c) list_medium_line_t2_g2_t

0xce10,	// (0x0005108c) aid_sp_fs_list_icon_a_sm

0xce18,	// (0x00051094) aid_sp_fs_list_icon_d

0x7f64,	// (0x0004c1e0) aid_sp_fs_text_primary

0x7f6d,	// (0x0004c1e9) aid_sp_fs_text_secondary

0xce20,	// (0x0005109c) list_medium_line

0xce20,	// (0x0005109c) list_medium_line_g2

0xce20,	// (0x0005109c) list_medium_line_g3

0xce20,	// (0x0005109c) list_medium_line_plain

0xce20,	// (0x0005109c) list_medium_line_plain_t2

0xce20,	// (0x0005109c) list_medium_line_plain_t3

0xce20,	// (0x0005109c) list_medium_line_right_icon

0xce20,	// (0x0005109c) list_medium_line_right_iconx2

0xce20,	// (0x0005109c) list_medium_line_t2

0xce20,	// (0x0005109c) list_medium_line_t2_g2

0xce20,	// (0x0005109c) list_medium_line_t2_g3

0xce20,	// (0x0005109c) list_medium_line_t2_right_icon

0xce20,	// (0x0005109c) list_medium_line_t2_right_iconx2

0xce20,	// (0x0005109c) list_medium_line_t3

0xce20,	// (0x0005109c) list_medium_line_t3_g2

0xce20,	// (0x0005109c) list_medium_line_t3_g3

0xce20,	// (0x0005109c) list_medium_line_t3_right_iconx2

0xce29,	// (0x000510a5) list_medium_line_t4_g4

0xce32,	// (0x000510ae) list_medium_line_x2

0xce32,	// (0x000510ae) list_medium_line_x2_t2_g2

0xce32,	// (0x000510ae) list_medium_line_x2_t2_g3

0xce32,	// (0x000510ae) list_medium_line_x2_t2_g4

0xce32,	// (0x000510ae) list_medium_line_x2_t3

0xce32,	// (0x000510ae) list_medium_line_x2_t3_g2

0xce32,	// (0x000510ae) list_medium_line_x2_t3_g3

0xce32,	// (0x000510ae) list_medium_line_x2_t3_g4

0xce32,	// (0x000510ae) list_medium_line_x2_t4_g2

0xce32,	// (0x000510ae) list_medium_line_x2_t4_g4

0xce3b,	// (0x000510b7) list_medium_line_x3

0xce3b,	// (0x000510b7) list_medium_line_x3_t4

0xce3b,	// (0x000510b7) list_medium_line_x3_t4_g4

0xce29,	// (0x000510a5) list_medium_line_x4_t4

0xce29,	// (0x000510a5) list_medium_line_x4_t4_g7

0xce29,	// (0x000510a5) list_medium_line_x4_t5

0xce44,	// (0x000510c0) list_single_fs_dyc_pane_ParamLimits

0xce44,	// (0x000510c0) list_single_fs_dyc_pane

0xa8b7,	// (0x0004eb33) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x4_t4_g7_g1

0xce84,	// (0x00051100) list_medium_line_x4_t4_g7_g2_ParamLimits

0xce84,	// (0x00051100) list_medium_line_x4_t4_g7_g2

0xce90,	// (0x0005110c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xce90,	// (0x0005110c) list_medium_line_x4_t4_g7_g3

0xce9f,	// (0x0005111b) list_medium_line_x4_t4_g7_g4_ParamLimits

0xce9f,	// (0x0005111b) list_medium_line_x4_t4_g7_g4

0xceab,	// (0x00051127) list_medium_line_x4_t4_g7_g5_ParamLimits

0xceab,	// (0x00051127) list_medium_line_x4_t4_g7_g5

0xceba,	// (0x00051136) list_medium_line_x4_t4_g7_g6_ParamLimits

0xceba,	// (0x00051136) list_medium_line_x4_t4_g7_g6

0xcec9,	// (0x00051145) list_medium_line_x4_t4_g7_g7_ParamLimits

0xcec9,	// (0x00051145) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x00053e57) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x00053e57) list_medium_line_x4_t4_g7_g

0xced5,	// (0x00051151) list_medium_line_x4_t4_g7_t1_ParamLimits

0xced5,	// (0x00051151) list_medium_line_x4_t4_g7_t1

0xceea,	// (0x00051166) list_medium_line_x4_t4_g7_t2_ParamLimits

0xceea,	// (0x00051166) list_medium_line_x4_t4_g7_t2

0xceff,	// (0x0005117b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xceff,	// (0x0005117b) list_medium_line_x4_t4_g7_t3

0xcf14,	// (0x00051190) list_medium_line_x4_t4_g7_t4_ParamLimits

0xcf14,	// (0x00051190) list_medium_line_x4_t4_g7_t4

0xcf26,	// (0x000511a2) list_medium_line_x4_t4_g7_t5_ParamLimits

0xcf26,	// (0x000511a2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x00053e66) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x00053e66) list_medium_line_x4_t4_g7_t

0xcf38,	// (0x000511b4) list_single_dyc_row_pane_ParamLimits

0xcf38,	// (0x000511b4) list_single_dyc_row_pane

0x8c78,	// (0x0004cef4) call5_gesture_pane_ParamLimits

0x8c78,	// (0x0004cef4) call5_gesture_pane

0x8cce,	// (0x0004cf4a) call5_windows_pane_ParamLimits

0x8cce,	// (0x0004cf4a) call5_windows_pane

0x8dd5,	// (0x0004d051) call5_swipe_1_pane_cp_ParamLimits

0x8dd5,	// (0x0004d051) call5_swipe_1_pane_cp

0x8de1,	// (0x0004d05d) call5_swipe_2_pane_cp_ParamLimits

0x8de1,	// (0x0004d05d) call5_swipe_2_pane_cp

0xb300,	// (0x0004f57c) call5_image_pane_cp

0x8ded,	// (0x0004d069) popup_call5_audio_first_window_cp_ParamLimits

0x8ded,	// (0x0004d069) popup_call5_audio_first_window_cp

0x8d18,	// (0x0004cf94) call5_swipe_1_pane_g1_cp_ParamLimits

0x8d18,	// (0x0004cf94) call5_swipe_1_pane_g1_cp

0x8df9,	// (0x0004d075) call5_swipe_1_pane_g2_cp

0x8d31,	// (0x0004cfad) call5_swipe_1_pane_t1_cp_ParamLimits

0x8d31,	// (0x0004cfad) call5_swipe_1_pane_t1_cp

0x8d18,	// (0x0004cf94) call5_swipe_2_pane_g1_cp_ParamLimits

0x8d18,	// (0x0004cf94) call5_swipe_2_pane_g1_cp

0x8e01,	// (0x0004d07d) call5_swipe_2_pane_g2_cp

0x8e09,	// (0x0004d085) call5_swipe_2_pane_t1_cp_ParamLimits

0x8e09,	// (0x0004d085) call5_swipe_2_pane_t1_cp

0x16a3,	// (0x0004591f) main_sp_fs_email_pane

0x8e1e,	// (0x0004d09a) main_sp_fs_listscroll_pane_te

0xcf55,	// (0x000511d1) popup_sp_fs_action_menu_pane_ParamLimits

0xcf55,	// (0x000511d1) popup_sp_fs_action_menu_pane

0xd616,	// (0x00051892) bg_sp_fs_ctrlbar_pane_g1

0x8e27,	// (0x0004d0a3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x8e30,	// (0x0004d0ac) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x8e39,	// (0x0004d0b5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd616,	// (0x00051892) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x00053f54) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd3f9,	// (0x00051675) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd3f9,	// (0x00051675) bg_sp_fs_ctrlbar_ddmenu_pane

0x8e42,	// (0x0004d0be) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x8e42,	// (0x0004d0be) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x8e4e,	// (0x0004d0ca) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x8e4e,	// (0x0004d0ca) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x00053f5d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x00053f5d) main_sp_fs_ctrlbar_ddmenu_pane_g

0x8e5a,	// (0x0004d0d6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x8e5a,	// (0x0004d0d6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xcf95,	// (0x00051211) list_medium_line_t2_right_icon_g1

0x0e7e,	// (0x000450fa) list_medium_line_t2_right_icon_t1

0x0e8e,	// (0x0004510a) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x00053f62) list_medium_line_t2_right_icon_t

0xc79f,	// (0x00050a1b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc79f,	// (0x00050a1b) bg_sp_fs_ctrlbar_pane

0x8ef7,	// (0x0004d173) main_sp_fs_ctrlbar_button_pane_cp01

0x8f01,	// (0x0004d17d) main_sp_fs_ctrlbar_ddmenu_pane

0x8f0b,	// (0x0004d187) main_sp_fs_ctrlbar_pane_g1

0x8f17,	// (0x0004d193) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x00053f67) main_sp_fs_ctrlbar_pane_g

0x8f23,	// (0x0004d19f) main_sp_fs_ctrlbar_pane_t1

0x0ea0,	// (0x0004511c) main_sp_fs_ctrlbar_pane

0x0ec4,	// (0x00045140) main_sp_fs_listscroll_pane_te_cp01

0x0ee4,	// (0x00045160) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0ee4,	// (0x00045160) popup_sp_fs_action_menu_pane_cp01

0x16a3,	// (0x0004591f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x16a3,	// (0x0004591f) bg_sp_fs_highlight_list_pane_cp01

0xcf9d,	// (0x00051219) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcf9d,	// (0x00051219) sp_fs_action_menu_list_gene_pane_g1

0x8f48,	// (0x0004d1c4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x8f48,	// (0x0004d1c4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x00053f71) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x00053f71) sp_fs_action_menu_list_gene_pane_g

0xcfac,	// (0x00051228) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcfac,	// (0x00051228) sp_fs_action_menu_list_gene_pane_t1

0xcfc4,	// (0x00051240) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcfc4,	// (0x00051240) sp_fs_action_menu_list_gene_pane

0x8f55,	// (0x0004d1d1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x8f55,	// (0x0004d1d1) popup_sp_fs_action_menu_bg_pane

0xcfe1,	// (0x0005125d) sp_fs_action_menu_list_pane_ParamLimits

0xcfe1,	// (0x0005125d) sp_fs_action_menu_list_pane

0x8f63,	// (0x0004d1df) sp_fs_scroll_pane_cp01_ParamLimits

0x8f63,	// (0x0004d1df) sp_fs_scroll_pane_cp01

0x0f0e,	// (0x0004518a) list_medium_line_plain_t2_t1

0x0f1e,	// (0x0004519a) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x00053f76) list_medium_line_plain_t2_t

0x0f2e,	// (0x000451aa) list_medium_line_plain_t3_t1

0x0f3e,	// (0x000451ba) list_medium_line_plain_t3_t2

0x0f4c,	// (0x000451c8) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x00053f7b) list_medium_line_plain_t3_t

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t2_g2_g1

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x000534d2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x000534d2) list_medium_line_x2_t2_g2_g

0xae5e,	// (0x0004f0da) list_medium_line_x2_t2_g2_t1_ParamLimits

0xae5e,	// (0x0004f0da) list_medium_line_x2_t2_g2_t1

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x00053f82) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x00053f82) list_medium_line_x2_t2_g2_t

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t4_g2_g1

0xcfff,	// (0x0005127b) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcfff,	// (0x0005127b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0b,	// (0x00053f87) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0b,	// (0x00053f87) list_medium_line_x2_t4_g2_g

0x0f5a,	// (0x000451d6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0f5a,	// (0x000451d6) list_medium_line_x2_t4_g2_t1

0x0f71,	// (0x000451ed) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0f71,	// (0x000451ed) list_medium_line_x2_t4_g2_t2

0x0f86,	// (0x00045202) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0f86,	// (0x00045202) list_medium_line_x2_t4_g2_t3

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd10,	// (0x00053f8c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd10,	// (0x00053f8c) list_medium_line_x2_t4_g2_t

0xd011,	// (0x0005128d) list_medium_line_t3_right_iconx2_g1

0xcf95,	// (0x00051211) list_medium_line_t3_right_iconx2_g2

0x0f98,	// (0x00045214) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd19,	// (0x00053f95) list_medium_line_t3_right_iconx2_g

0x0fa2,	// (0x0004521e) list_medium_line_t3_right_iconx2_t1

0x0fb2,	// (0x0004522e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd20,	// (0x00053f9c) list_medium_line_t3_right_iconx2_t

0xa8b7,	// (0x0004eb33) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x3_t4_g4_g1

0xa8c3,	// (0x0004eb3f) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa8c3,	// (0x0004eb3f) list_medium_line_x3_t4_g4_g2

0xa939,	// (0x0004ebb5) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa939,	// (0x0004ebb5) list_medium_line_x3_t4_g4_g3

0xd019,	// (0x00051295) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd019,	// (0x00051295) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd25,	// (0x00053fa1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd25,	// (0x00053fa1) list_medium_line_x3_t4_g4_g

0x0fc0,	// (0x0004523c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0fc0,	// (0x0004523c) list_medium_line_x3_t4_g4_t1

0x0fd7,	// (0x00045253) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0fd7,	// (0x00045253) list_medium_line_x3_t4_g4_t2

0xae73,	// (0x0004f0ef) list_medium_line_x3_t4_g4_t3_ParamLimits

0xae73,	// (0x0004f0ef) list_medium_line_x3_t4_g4_t3

0xd025,	// (0x000512a1) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd025,	// (0x000512a1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2e,	// (0x00053faa) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2e,	// (0x00053faa) list_medium_line_x3_t4_g4_t

0x0ff2,	// (0x0004526e) list_single_dyc_row_text_pane_t1_ParamLimits

0x0ff2,	// (0x0004526e) list_single_dyc_row_text_pane_t1

0x103b,	// (0x000452b7) list_single_dyc_row_text_pane_t2_ParamLimits

0x103b,	// (0x000452b7) list_single_dyc_row_text_pane_t2

0xd042,	// (0x000512be) list_single_dyc_row_text_pane_t3_ParamLimits

0xd042,	// (0x000512be) list_single_dyc_row_text_pane_t3

0x0002,

0xfd37,	// (0x00053fb3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd37,	// (0x00053fb3) list_single_dyc_row_text_pane_t

0xd054,	// (0x000512d0) list_single_dyc_row_pane_g1_ParamLimits

0xd054,	// (0x000512d0) list_single_dyc_row_pane_g1

0xd060,	// (0x000512dc) list_single_dyc_row_pane_g2_ParamLimits

0xd060,	// (0x000512dc) list_single_dyc_row_pane_g2

0xd06c,	// (0x000512e8) list_single_dyc_row_pane_g3_ParamLimits

0xd06c,	// (0x000512e8) list_single_dyc_row_pane_g3

0xd078,	// (0x000512f4) list_single_dyc_row_pane_g4_ParamLimits

0xd078,	// (0x000512f4) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x00053fba) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x00053fba) list_single_dyc_row_pane_g

0xd084,	// (0x00051300) list_single_dyc_row_text_pane_ParamLimits

0xd084,	// (0x00051300) list_single_dyc_row_text_pane

0x1497,	// (0x00045713) bg_sp_fs_scroll_pane

0x8f89,	// (0x0004d205) thumb_sp_fs_scroll_pane

0xcd5c,	// (0x00050fd8) list_medium_line_g1_ParamLimits

0xcd5c,	// (0x00050fd8) list_medium_line_g1

0xd0a3,	// (0x0005131f) list_medium_line_t1_ParamLimits

0xd0a3,	// (0x0005131f) list_medium_line_t1

0xa8b7,	// (0x0004eb33) list_medium_line_x2_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x2_g1

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_g2_ParamLimits

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x00053fc3) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x00053fc3) list_medium_line_x2_g

0xd0b8,	// (0x00051334) list_medium_line_x2_t1_ParamLimits

0xd0b8,	// (0x00051334) list_medium_line_x2_t1

0xa8b7,	// (0x0004eb33) list_medium_line_x3_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x3_g1

0xa8c3,	// (0x0004eb3f) list_medium_line_x3_g2_ParamLimits

0xa8c3,	// (0x0004eb3f) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x00053fc3) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x00053fc3) list_medium_line_x3_g

0xd0b8,	// (0x00051334) list_medium_line_x3_t1_ParamLimits

0xd0b8,	// (0x00051334) list_medium_line_x3_t1

0x8f92,	// (0x0004d20e) thumb_sp_fs_scroll_pane_g1

0x8f9b,	// (0x0004d217) thumb_sp_fs_scroll_pane_g2

0x8fa4,	// (0x0004d220) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x00053fc8) thumb_sp_fs_scroll_pane_g

0x8f92,	// (0x0004d20e) bg_sp_fs_scroll_pane_g1

0x8f9b,	// (0x0004d217) bg_sp_fs_scroll_pane_g2

0x8fa4,	// (0x0004d220) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x00053fc8) bg_sp_fs_scroll_pane_g

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa8b7,	// (0x0004eb33) list_medium_line_x2_t3_g4_g1

0xa92d,	// (0x0004eba9) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa92d,	// (0x0004eba9) list_medium_line_x2_t3_g4_g2

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa8c3,	// (0x0004eb3f) list_medium_line_x2_t3_g4_g3

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa8cf,	// (0x0004eb4b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0005354e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0005354e) list_medium_line_x2_t3_g4_g

0x1095,	// (0x00045311) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1095,	// (0x00045311) list_medium_line_x2_t3_g4_t1

0x10af,	// (0x0004532b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x10af,	// (0x0004532b) list_medium_line_x2_t3_g4_t2

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa8f0,	// (0x0004eb6c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x00053fcf) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x00053fcf) list_medium_line_x2_t3_g4_t

0xcd5c,	// (0x00050fd8) list_medium_line_g2_g1_ParamLimits

0xcd5c,	// (0x00050fd8) list_medium_line_g2_g1

0xcd68,	// (0x00050fe4) list_medium_line_g2_g2_ParamLimits

0xcd68,	// (0x00050fe4) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x00053c87) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x00053c87) list_medium_line_g2_g

0xd0ce,	// (0x0005134a) list_medium_line_g2_t1_ParamLimits

0xd0ce,	// (0x0005134a) list_medium_line_g2_t1

0xcd5c,	// (0x00050fd8) list_medium_line_t3_g2_g1_ParamLimits

0xcd5c,	// (0x00050fd8) list_medium_line_t3_g2_g1

0xcd68,	// (0x00050fe4) list_medium_line_t3_g2_g2_ParamLimits

0xcd68,	// (0x00050fe4) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x00053c87) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x00053c87) list_medium_line_t3_g2_g

0x10c8,	// (0x00045344) list_medium_line_t3_g2_t1_ParamLimits

0x10c8,	// (0x00045344) list_medium_line_t3_g2_t1

0x10df,	// (0x0004535b) list_medium_line_t3_g2_t2_ParamLimits

0x10df,	// (0x0004535b) list_medium_line_t3_g2_t2

0x10f4,	// (0x00045370) list_medium_line_t3_g2_t3_ParamLimits

0x10f4,	// (0x00045370) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x00053fd6) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x00053fd6) list_medium_line_t3_g2_t

0xcf95,	// (0x00051211) list_medium_line_right_icon_g1

0xd0e3,	// (0x0005135f) list_medium_line_right_icon_t1

0xcd5c,	// (0x00050fd8) list_medium_line_t2_g1_ParamLimits

0xcd5c,	// (0x00050fd8) list_medium_line_t2_g1

0x110d,	// (0x00045389) list_medium_line_t2_t1_ParamLimits

0x110d,	// (0x00045389) list_medium_line_t2_t1

0x1124,	// (0x000453a0) list_medium_line_t2_t2_ParamLimits

0x1124,	// (0x000453a0) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x00053fdd) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x00053fdd) list_medium_line_t2_t

0xcd5c,	// (0x00050fd8) list_medium_line_t3_g1_ParamLimits

0xcd5c,	// (0x00050fd8) list_medium_line_t3_g1

0x1138,	// (0x000453b4) list_medium_line_t3_t1_ParamLimits

0x1138,	// (0x000453b4) list_medium_line_t3_t1

0x114f,	// (0x000453cb) list_medium_line_t3_t2_ParamLimits

0x114f,	// (0x000453cb) list_medium_line_t3_t2

0x1164,	// (0x000453e0) list_medium_line_t3_t3_ParamLimits

0x1164,	// (0x000453e0) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x00053fe2) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x00053fe2) list_medium_line_t3_t

0xcd5c,	// (0x00050fd8) list_medium_line_g3_g1_ParamLimits

0xcd5c,	// (0x00050fd8) list_medium_line_g3_g1

0xd0f1,	// (0x0005136d) list_medium_line_g3_g2_ParamLimits

0xd0f1,	// (0x0005136d) list_medium_line_g3_g2

0xcd68,	// (0x00050fe4) list_medium_line_g3_g3_ParamLimits

0xcd68,	// (0x00050fe4) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x00053fe9) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x00053fe9) list_medium_line_g3_g

0xd0fd,	// (0x00051379) list_medium_line_g3_t1_ParamLimits

0xd0fd,	// (0x00051379) list_medium_line_g3_t1

0xcd5c,	// (0x00050fd8) list_medium_line_t2_g3_g1_ParamLimits

0xcd5c,	// (0x00050fd8) list_medium_line_t2_g3_g1

0xd0f1,	// (0x0005136d) list_medium_line_t2_g3_g2_ParamLimits

0xd0f1,	// (0x0005136d) list_medium_line_t2_g3_g2

0xcd68,	// (0x00050fe4) list_medium_line_t2_g3_g3_ParamLimits

0xcd68,	// (0x00050fe4) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x00053fe9) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x00053fe9) list_medium_line_t2_g3_g

0x1176,	// (0x000453f2) list_medium_line_t2_g3_t1_ParamLimits

0x1176,	// (0x000453f2) list_medium_line_t2_g3_t1

0x1190,	// (0x0004540c) list_medium_line_t2_g3_t2_ParamLimits

0x1190,	// (0x0004540c) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x00053ff0) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x00053ff0) list_medium_line_t2_g3_t

0xcd5c,	// (0x00050fd8) list_medium_line_t3_g3_g1_ParamLimits

0xcd5c,	// (0x00050fd8) list_medium_line_t3_g3_g1

0xd0f1,	// (0x0005136d) list_medium_line_t3_g3_g2_ParamLimits

0xd0f1,	// (0x0005136d) list_medium_line_t3_g3_g2

0xcd68,	// (0x00050fe4) list_medium_line_t3_g3_g3_ParamLimits

0xcd68,	// (0x00050fe4) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x00053fe9) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x00053fe9) list_medium_line_t3_g3_g

0x11ab,	// (0x00045427) list_medium_line_t3_g3_t1_ParamLimits

0x11ab,	// (0x00045427) list_medium_line_t3_g3_t1

0x11bf,	// (0x0004543b) list_medium_line_t3_g3_t2_ParamLimits

0x11bf,	// (0x0004543b) list_medium_line_t3_g3_t2

0x11d1,	// (0x0004544d) list_medium_line_t3_g3_t3_ParamLimits

0x11d1,	// (0x0004544d) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x00053ff5) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x00053ff5) list_medium_line_t3_g3_t

0xd011,	// (0x0005128d) list_medium_line_right_iconx2_g1

0xcf95,	// (0x00051211) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x00053ffc) list_medium_line_right_iconx2_g

0xd112,	// (0x0005138e) list_medium_line_right_iconx2_t1

0xd011,	// (0x0005128d) list_medium_line_t2_right_iconx2_g1

0xcf95,	// (0x00051211) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x00053ffc) list_medium_line_t2_right_iconx2_g

0x11e5,	// (0x00045461) list_medium_line_t2_right_iconx2_t1

0x11f5,	// (0x00045471) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x00054001) list_medium_line_t2_right_iconx2_t

0xd120,	// (0x0005139c) list_medium_line_x4_t4_t1

0x1207,	// (0x00045483) list_medium_line_x4_t4_t2

0x1217,	// (0x00045493) list_medium_line_x4_t4_t3

0x1227,	// (0x000454a3) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x00054006) list_medium_line_x4_t4_t

0x8ff0,	// (0x0004d26c) tport_appsw_pane_ParamLimits

0x8ff0,	// (0x0004d26c) tport_appsw_pane

0x9001,	// (0x0004d27d) tport_contact_pane_ParamLimits

0x9001,	// (0x0004d27d) tport_contact_pane

0x901a,	// (0x0004d296) tport_listscroll_pane_ParamLimits

0x901a,	// (0x0004d296) tport_listscroll_pane

0x9035,	// (0x0004d2b1) cell_tport_appsw_pane_ParamLimits

0x9035,	// (0x0004d2b1) cell_tport_appsw_pane

0xe13f,	// (0x000523bb) tport_appsw_pane_g1_ParamLimits

0xe13f,	// (0x000523bb) tport_appsw_pane_g1

0x9075,	// (0x0004d2f1) tport_contact_pane_g1

0x907e,	// (0x0004d2fa) tport_contact_pane_t1

0x908c,	// (0x0004d308) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x0005400f) tport_contact_pane_t

0x909a,	// (0x0004d316) list_tport_pane

0x90a3,	// (0x0004d31f) scroll_pane_cp_030

0x90b4,	// (0x0004d330) cell_tport_appsw_pane_g1

0x90c4,	// (0x0004d340) cell_tport_appsw_pane_t1

0x1497,	// (0x00045713) grid_highlight_pane_cp019

0x90d2,	// (0x0004d34e) list_tport_double_graphic_pane_ParamLimits

0x90d2,	// (0x0004d34e) list_tport_double_graphic_pane

0x16a3,	// (0x0004591f) list_highlight_pane_cp023_ParamLimits

0x16a3,	// (0x0004591f) list_highlight_pane_cp023

0x90df,	// (0x0004d35b) list_tport_double_graphic_pane_g1_ParamLimits

0x90df,	// (0x0004d35b) list_tport_double_graphic_pane_g1

0x90ec,	// (0x0004d368) list_tport_double_graphic_pane_t1_ParamLimits

0x90ec,	// (0x0004d368) list_tport_double_graphic_pane_t1

0x9101,	// (0x0004d37d) list_tport_double_graphic_pane_t2_ParamLimits

0x9101,	// (0x0004d37d) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x0005401b) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x0005401b) list_tport_double_graphic_pane_t

0x1497,	// (0x00045713) main_cale_note_pane

0x729f,	// (0x0004b51b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x729f,	// (0x0004b51b) cell_vitu2_function_top_wide_pane_cp01

0x899f,	// (0x0004cc1b) wait_bar_pane_cp05_ParamLimits

0x1497,	// (0x00045713) listscroll_cmail_pane

0x911b,	// (0x0004d397) list_cmail_pane

0x913c,	// (0x0004d3b8) list_cmail_body_pane

0x9151,	// (0x0004d3cd) list_single_cmail_header_caption_pane

0x916a,	// (0x0004d3e6) list_single_cmail_header_detail_pane_ParamLimits

0x916a,	// (0x0004d3e6) list_single_cmail_header_detail_pane

0x9193,	// (0x0004d40f) list_single_cmail_header_caption_pane_t1

0x1237,	// (0x000454b3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1237,	// (0x000454b3) list_single_cmail_header_detail_pane_g1

0xd12e,	// (0x000513aa) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd12e,	// (0x000513aa) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x00054020) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x00054020) list_single_cmail_header_detail_pane_g

0xd13a,	// (0x000513b6) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd13a,	// (0x000513b6) list_single_cmail_header_detail_pane_t1

0xd16c,	// (0x000513e8) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd16c,	// (0x000513e8) list_single_cmail_header_editor_pane_bg

0x91b9,	// (0x0004d435) list_cmail_body_pane_g1

0x91c2,	// (0x0004d43e) list_cmail_body_pane_t1

0xe15f,	// (0x000523db) list_single_cmail_header_editor_pane_bg_g1

0xab4e,	// (0x0004edca) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe16f,	// (0x000523eb) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe167,	// (0x000523e3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe39e,	// (0x0005261a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe18f,	// (0x0005240b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe17f,	// (0x000523fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe187,	// (0x00052403) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab2e,	// (0x0004edaa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x91d0,	// (0x0004d44c) calenote_gesture_pane_ParamLimits

0x91d0,	// (0x0004d44c) calenote_gesture_pane

0x91f0,	// (0x0004d46c) calenote_window_pane_ParamLimits

0x91f0,	// (0x0004d46c) calenote_window_pane

0x920c,	// (0x0004d488) popup_note_window_cp01

0x9215,	// (0x0004d491) calenote_swipe_1_pane_ParamLimits

0x9215,	// (0x0004d491) calenote_swipe_1_pane

0x8de1,	// (0x0004d05d) calenote_swipe_2_pane_ParamLimits

0x8de1,	// (0x0004d05d) calenote_swipe_2_pane

0x8d18,	// (0x0004cf94) calenote_swipe_1_pane_g1_ParamLimits

0x8d18,	// (0x0004cf94) calenote_swipe_1_pane_g1

0x8d25,	// (0x0004cfa1) calenote_swipe_1_pane_g2_ParamLimits

0x8d25,	// (0x0004cfa1) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00053f4a) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00053f4a) calenote_swipe_1_pane_g

0x9233,	// (0x0004d4af) calenote_swipe_1_pane_t1_ParamLimits

0x9233,	// (0x0004d4af) calenote_swipe_1_pane_t1

0x8d18,	// (0x0004cf94) calenote_swipe_2_pane_g1_ParamLimits

0x8d18,	// (0x0004cf94) calenote_swipe_2_pane_g1

0x9252,	// (0x0004d4ce) calenote_swipe_2_pane_g2_ParamLimits

0x9252,	// (0x0004d4ce) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x0005402c) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x0005402c) calenote_swipe_2_pane_g

0x925e,	// (0x0004d4da) calenote_swipe_2_pane_t1_ParamLimits

0x925e,	// (0x0004d4da) calenote_swipe_2_pane_t1

0x1497,	// (0x00045713) main_mup_navstr_pane

0x5f62,	// (0x0004a1de) main_mup3_pane_t7_ParamLimits

0x5f62,	// (0x0004a1de) main_mup3_pane_t7

0xca48,	// (0x00050cc4) main_mp4_pane_g6_ParamLimits

0xca48,	// (0x00050cc4) main_mp4_pane_g6

0xcbec,	// (0x00050e68) main_image3_pane_t4_ParamLimits

0xcbec,	// (0x00050e68) main_image3_pane_t4

0x9285,	// (0x0004d501) popup_navstr_preview_pane_ParamLimits

0x9285,	// (0x0004d501) popup_navstr_preview_pane

0x9299,	// (0x0004d515) scroll_navstr_pane_ParamLimits

0x9299,	// (0x0004d515) scroll_navstr_pane

0x1497,	// (0x00045713) bg_popup_preview_window_pane_cp04

0x92ad,	// (0x0004d529) popup_navstr_preview_pane_t1

0x92bb,	// (0x0004d537) scroll_navstr_pane_g1_ParamLimits

0x92bb,	// (0x0004d537) scroll_navstr_pane_g1

0x92cf,	// (0x0004d54b) scroll_navstr_pane_t1_ParamLimits

0x92cf,	// (0x0004d54b) scroll_navstr_pane_t1

0x922a,	// (0x0004d4a6) bg_button_pane_cp014

0x922a,	// (0x0004d4a6) bg_button_pane_cp030

0x0e24,	// (0x000450a0) list_double_fisheye_pane_g4_ParamLimits

0x0e24,	// (0x000450a0) list_double_fisheye_pane_g4

0x0e30,	// (0x000450ac) list_double_fisheye_pane_g5_ParamLimits

0x0e30,	// (0x000450ac) list_double_fisheye_pane_g5

0x912d,	// (0x0004d3a9) sp_fs_scroll_pane_cp03

0x8f0b,	// (0x0004d187) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x8f17,	// (0x0004d193) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x00053f67) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8f23,	// (0x0004d19f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9123,	// (0x0004d39f) sp_fs_scroll_pane_cp02

0x2423,	// (0x0004669f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2423,	// (0x0004669f) popup_sp_fs_calendar_preview_list_single_pane

0x1497,	// (0x00045713) main_cam6_pano_pane

0x16a3,	// (0x0004591f) main_mup3_pane_ParamLimits

0x1497,	// (0x00045713) main_phacti_pane

0x8872,	// (0x0004caee) bg_button_pane_cp11

0x888c,	// (0x0004cb08) main_mobtv_info_pane_g2_ParamLimits

0x888c,	// (0x0004cb08) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x00053ec7) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x00053ec7) main_mobtv_info_pane_g

0x8a69,	// (0x0004cce5) sc_clock_pane_t5_ParamLimits

0x8a69,	// (0x0004cce5) sc_clock_pane_t5

0x8af4,	// (0x0004cd70) main_radioblah_pane_g1_ParamLimits

0xf045,	// (0x000532c1) main_radioblah_pane_t3_ParamLimits

0xf045,	// (0x000532c1) main_radioblah_pane_t3

0xf05d,	// (0x000532d9) main_radioblah_pane_t4_ParamLimits

0xf05d,	// (0x000532d9) main_radioblah_pane_t4

0x8b1c,	// (0x0004cd98) main_radioblah_text_pane_ParamLimits

0x8b1c,	// (0x0004cd98) main_radioblah_text_pane

0x8b2e,	// (0x0004cdaa) main_radioblah_info_pane_g1_ParamLimits

0x8bc9,	// (0x0004ce45) main_radioblah_info_pane_t4_ParamLimits

0x8bc9,	// (0x0004ce45) main_radioblah_info_pane_t4

0x16a3,	// (0x0004591f) main_sp_fs_calendar_pane

0x92e5,	// (0x0004d561) main_phacti_pane_g1

0x92f6,	// (0x0004d572) phacti_note_pane_ParamLimits

0x92f6,	// (0x0004d572) phacti_note_pane

0x930a,	// (0x0004d586) phacti_term_pane_ParamLimits

0x930a,	// (0x0004d586) phacti_term_pane

0x931f,	// (0x0004d59b) phacti_note_pane_t1_ParamLimits

0x931f,	// (0x0004d59b) phacti_note_pane_t1

0xd17e,	// (0x000513fa) phacti_term_pane_g1

0xd186,	// (0x00051402) phacti_term_pane_t1_ParamLimits

0xd186,	// (0x00051402) phacti_term_pane_t1

0x9336,	// (0x0004d5b2) popup_sp_fs_calendar_preview_list_single_pane_g1

0x933e,	// (0x0004d5ba) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x00054036) popup_sp_fs_calendar_preview_list_single_pane_g

0x9346,	// (0x0004d5c2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x9346,	// (0x0004d5c2) popup_sp_fs_calendar_preview_list_single_pane_t1

0x935c,	// (0x0004d5d8) aid_popup_sp_fs_bg_corner_pane

0xd616,	// (0x00051892) popup_sp_fs_calendar_preview_bg_pane_g1

0x1497,	// (0x00045713) popup_sp_fs_calendar_preview_bg_pane

0x9364,	// (0x0004d5e0) popup_sp_fs_calendar_preview_list_pane

0x16a3,	// (0x0004591f) bg_main_sp_fs_cale_pane_ParamLimits

0x16a3,	// (0x0004591f) bg_main_sp_fs_cale_pane

0xd1b0,	// (0x0005142c) listscroll_cale_mrui_pane_ParamLimits

0xd1b0,	// (0x0005142c) listscroll_cale_mrui_pane

0xd1c4,	// (0x00051440) listscroll_sp_fs_schedule_track_pane

0xd1cd,	// (0x00051449) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd1cd,	// (0x00051449) main_sp_fs_ctrlbar_pane_cp01

0x93b9,	// (0x0004d635) main_sp_fs_ribbon_pane

0x93c1,	// (0x0004d63d) popup_sp_fs_cale_preview_window

0x93d3,	// (0x0004d64f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x93d3,	// (0x0004d64f) list_single_sp_fs_schedule_track_pane

0x16a3,	// (0x0004591f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x16a3,	// (0x0004591f) bg_sp_fs_highlight_list_pane_cp03

0x93e8,	// (0x0004d664) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x93e8,	// (0x0004d664) list_single_sp_fs_schedule_track_pane_g1

0x93f4,	// (0x0004d670) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x93f4,	// (0x0004d670) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x0005403b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x0005403b) list_single_sp_fs_schedule_track_pane_g

0x9400,	// (0x0004d67c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9400,	// (0x0004d67c) list_single_sp_fs_schedule_track_pane_t1

0x941a,	// (0x0004d696) sp_fs_schedule_track_pane_ParamLimits

0x941a,	// (0x0004d696) sp_fs_schedule_track_pane

0x942b,	// (0x0004d6a7) sp_fs_schedule_track_pane_g1

0x9433,	// (0x0004d6af) sp_fs_schedule_track_pane_g2

0x943b,	// (0x0004d6b7) sp_fs_schedule_track_pane_g3

0x9443,	// (0x0004d6bf) sp_fs_schedule_track_pane_g4

0x944b,	// (0x0004d6c7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x00054040) sp_fs_schedule_track_pane_g

0xe15f,	// (0x000523db) bg_sp_fs_schedule_viewer_highlight_g1

0xab4e,	// (0x0004edca) bg_sp_fs_schedule_viewer_highlight_g2

0xe167,	// (0x000523e3) bg_sp_fs_schedule_viewer_highlight_g3

0xe16f,	// (0x000523eb) bg_sp_fs_schedule_viewer_highlight_g4

0xe39e,	// (0x0005261a) bg_sp_fs_schedule_viewer_highlight_g5

0xe17f,	// (0x000523fb) bg_sp_fs_schedule_viewer_highlight_g6

0xe187,	// (0x00052403) bg_sp_fs_schedule_viewer_highlight_g7

0xe18f,	// (0x0005240b) bg_sp_fs_schedule_viewer_highlight_g8

0xab2e,	// (0x0004edaa) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x0005404b) bg_sp_fs_schedule_viewer_highlight_g

0x1497,	// (0x00045713) bg_main_sp_fs_ribbon_pane

0x9453,	// (0x0004d6cf) main_sp_fs_ribbon_pane_g1

0x945c,	// (0x0004d6d8) main_sp_fs_ribbon_pane_t1

0x946b,	// (0x0004d6e7) main_sp_fs_ribbon_pane_t2

0x947a,	// (0x0004d6f6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x0005405e) main_sp_fs_ribbon_pane_t

0x9489,	// (0x0004d705) main_sp_fs_ribbon_scheduler_pane

0x9491,	// (0x0004d70d) bg_main_sp_fs_ribbon_pane_g1

0x949a,	// (0x0004d716) bg_main_sp_fs_ribbon_pane_g2

0x94a3,	// (0x0004d71f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x00054065) bg_main_sp_fs_ribbon_pane_g

0x94ab,	// (0x0004d727) main_sp_fs_ribbon_scheduler_pane_g1

0x94b4,	// (0x0004d730) main_sp_fs_ribbon_scheduler_pane_g2

0x94bd,	// (0x0004d739) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x0005406c) main_sp_fs_ribbon_scheduler_pane_g

0x94c6,	// (0x0004d742) list_cale_mrui_pane

0x94cf,	// (0x0004d74b) sp_fs_scroll_pane_cp07_ParamLimits

0x94cf,	// (0x0004d74b) sp_fs_scroll_pane_cp07

0x94e3,	// (0x0004d75f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x94e3,	// (0x0004d75f) bg_sp_fs_schedule_viewer_highlight

0x94f3,	// (0x0004d76f) list_single_sp_fs_schedule_track_pane_cp01

0x94fb,	// (0x0004d777) list_sp_fs_schedule_track_pane

0x9503,	// (0x0004d77f) sp_fs_scroll_pane_cp06_ParamLimits

0x9503,	// (0x0004d77f) sp_fs_scroll_pane_cp06

0xd616,	// (0x00051892) bgmain_sp_fs_calendar_pane_g1

0x1275,	// (0x000454f1) list_single_cale_mrui_pane_ParamLimits

0x1275,	// (0x000454f1) list_single_cale_mrui_pane

0xd1de,	// (0x0005145a) list_single_cale_mrui_row_pane_ParamLimits

0xd1de,	// (0x0005145a) list_single_cale_mrui_row_pane

0xd1eb,	// (0x00051467) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd1eb,	// (0x00051467) list_single_cale_mrui_row_pane_g1

0xd223,	// (0x0005149f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd223,	// (0x0005149f) list_single_cale_mrui_row_pane_t1

0x1297,	// (0x00045513) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1297,	// (0x00045513) list_single_cale_mrui_row_pane_t2

0xd235,	// (0x000514b1) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd235,	// (0x000514b1) list_single_cale_mrui_row_pane_t3

0xd264,	// (0x000514e0) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd264,	// (0x000514e0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x0005407a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x0005407a) list_single_cale_mrui_row_pane_t

0x12ff,	// (0x0004557b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x12ff,	// (0x0004557b) list_single_cmail_header_editor_pane_bg_cp01

0x1325,	// (0x000455a1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1325,	// (0x000455a1) list_single_cmail_header_editor_pane_bg_cp02

0x9522,	// (0x0004d79e) main_radioblah_text_pane_t1_ParamLimits

0x9522,	// (0x0004d79e) main_radioblah_text_pane_t1

0x953d,	// (0x0004d7b9) cam6_indi_pane_cp01

0x9545,	// (0x0004d7c1) cam6_mode_pane_cp01

0x954d,	// (0x0004d7c9) cam6_pano_pane

0x9556,	// (0x0004d7d2) cam6_zoom_pane_cp01

0x955e,	// (0x0004d7da) cam6_pano_image_pane

0x9569,	// (0x0004d7e5) cam6_pano_pane_g1

0xed92,	// (0x0005300e) cam6_pano_pane_g2

0x9572,	// (0x0004d7ee) cam6_pano_pane_g3

0x957b,	// (0x0004d7f7) cam6_pano_pane_g4

0xdca5,	// (0x00051f21) cam6_pano_pane_g5

0x9584,	// (0x0004d800) cam6_pano_pane_g6

0x958e,	// (0x0004d80a) cam6_pano_pane_g7

0x9596,	// (0x0004d812) cam6_pano_pane_g8

0x959f,	// (0x0004d81b) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x00054083) cam6_pano_pane_g

0x1497,	// (0x00045713) main_browser_tag_pane

0x927d,	// (0x0004d4f9) grid_navstr_albumart_pane

0x95aa,	// (0x0004d826) cell_navstr_albumart_pane_ParamLimits

0x95aa,	// (0x0004d826) cell_navstr_albumart_pane

0xb481,	// (0x0004f6fd) cell_navstr_albumart_pane_g1

0xc5b4,	// (0x00050830) cell_navstr_albumart_pane_g2

0xc5c4,	// (0x00050840) cell_navstr_albumart_pane_g3

0xc5bc,	// (0x00050838) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x00054096) cell_navstr_albumart_pane_g

0x95cc,	// (0x0004d848) bt_list_pane_ParamLimits

0x95cc,	// (0x0004d848) bt_list_pane

0x95e1,	// (0x0004d85d) bt_list_pane_t1

0x95f0,	// (0x0004d86c) bt_list_pane_t2

0x0001,

0xfe23,	// (0x0005409f) bt_list_pane_t

0x1497,	// (0x00045713) main_cale_prevew_pane

0x95ff,	// (0x0004d87b) popup_cale_preview_window_ParamLimits

0x95ff,	// (0x0004d87b) popup_cale_preview_window

0x16a3,	// (0x0004591f) bg_popup_preview_window_pane_cp05_ParamLimits

0x16a3,	// (0x0004591f) bg_popup_preview_window_pane_cp05

0x9616,	// (0x0004d892) list_cale_preview_pane_ParamLimits

0x9616,	// (0x0004d892) list_cale_preview_pane

0x9622,	// (0x0004d89e) list_double_cale_preview_pane_ParamLimits

0x9622,	// (0x0004d89e) list_double_cale_preview_pane

0x9634,	// (0x0004d8b0) list_single_cale_preview_pane_ParamLimits

0x9634,	// (0x0004d8b0) list_single_cale_preview_pane

0x9648,	// (0x0004d8c4) list_single_cale_preview_pane_g1

0x9650,	// (0x0004d8cc) list_single_cale_preview_pane_t1_ParamLimits

0x9650,	// (0x0004d8cc) list_single_cale_preview_pane_t1

0x9665,	// (0x0004d8e1) list_double_cale_preview_pane_g1

0x966d,	// (0x0004d8e9) list_double_cale_preview_pane_t1_ParamLimits

0x966d,	// (0x0004d8e9) list_double_cale_preview_pane_t1

0x9682,	// (0x0004d8fe) list_double_cale_preview_pane_t2_ParamLimits

0x9682,	// (0x0004d8fe) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x000540a4) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x000540a4) list_double_cale_preview_pane_t

0x1497,	// (0x00045713) main_ezdial_pane

0x16a3,	// (0x0004591f) main_sp_fs_email_pane_ParamLimits

0x8e74,	// (0x0004d0f0) cmail_ddmenu_btn01_pane_ParamLimits

0x8e74,	// (0x0004d0f0) cmail_ddmenu_btn01_pane

0x8e87,	// (0x0004d103) cmail_ddmenu_btn02_pane_ParamLimits

0x8e87,	// (0x0004d103) cmail_ddmenu_btn02_pane

0x8ee2,	// (0x0004d15e) cmail_ddmenu_btn03_pane_ParamLimits

0x8ee2,	// (0x0004d15e) cmail_ddmenu_btn03_pane

0x0ea0,	// (0x0004511c) main_sp_fs_ctrlbar_pane_ParamLimits

0x0ec4,	// (0x00045140) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x913c,	// (0x0004d3b8) list_cmail_body_pane_ParamLimits

0x91a3,	// (0x0004d41f) bg_button_pane_cp12

0x91ac,	// (0x0004d428) list_single_cmail_header_detail_pane_g3_ParamLimits

0x91ac,	// (0x0004d428) list_single_cmail_header_detail_pane_g3

0x124f,	// (0x000454cb) list_single_cmail_header_detail_pane_t2_ParamLimits

0x124f,	// (0x000454cb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x00054027) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x00054027) list_single_cmail_header_detail_pane_t

0xd19b,	// (0x00051417) phacti_term_pane_t2_ParamLimits

0xd19b,	// (0x00051417) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x00054031) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x00054031) phacti_term_pane_t

0x969a,	// (0x0004d916) aid_size_list_single_double

0x96a6,	// (0x0004d922) popup_ezdial_listscroll_window

0x96c2,	// (0x0004d93e) popup_number_entry_window_cp01

0xb300,	// (0x0004f57c) bg_popup_call_pane_cp09

0x96d0,	// (0x0004d94c) ezdial_list_pane

0x96d8,	// (0x0004d954) scroll_pane_cp23

0xc79f,	// (0x00050a1b) bg_button_pane_cp028_ParamLimits

0xc79f,	// (0x00050a1b) bg_button_pane_cp028

0x96e0,	// (0x0004d95c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x96e0,	// (0x0004d95c) cmail_ddmenu_btn01_pane_g1

0x96ef,	// (0x0004d96b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x96ef,	// (0x0004d96b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x000540a9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x000540a9) cmail_ddmenu_btn01_pane_g

0x96ff,	// (0x0004d97b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x96ff,	// (0x0004d97b) cmail_ddmenu_btn01_pane_t1

0xc79f,	// (0x00050a1b) bg_button_pane_cp029_ParamLimits

0xc79f,	// (0x00050a1b) bg_button_pane_cp029

0x9714,	// (0x0004d990) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9714,	// (0x0004d990) cmail_ddmenu_btn02_pane_g1

0x972f,	// (0x0004d9ab) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x972f,	// (0x0004d9ab) cmail_ddmenu_btn02_pane_t1

0x16a3,	// (0x0004591f) bg_button_pane_cp031_ParamLimits

0x16a3,	// (0x0004591f) bg_button_pane_cp031

0x9714,	// (0x0004d990) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9714,	// (0x0004d990) cmail_ddmenu_btn03_pane_g1

0x972f,	// (0x0004d9ab) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x972f,	// (0x0004d9ab) cmail_ddmenu_btn03_pane_t1

0x6b1f,	// (0x0004ad9b) cell_dialer2_keypad_pane_t1_ParamLimits

0x6b39,	// (0x0004adb5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6b39,	// (0x0004adb5) cell_dialer2_keypad_pane_t1_copy1

0x86d9,	// (0x0004c955) ncimui_group_button_pane

0x16a3,	// (0x0004591f) main_sp_fs_calendar_pane_ParamLimits

0x9151,	// (0x0004d3cd) list_single_cmail_header_caption_pane_ParamLimits

0x7f6d,	// (0x0004c1e9) aid_recal_txt_sm_pane

0x1497,	// (0x00045713) mian_recal_day_pane

0x93c1,	// (0x0004d63d) popup_sp_fs_cale_preview_window_ParamLimits

0x1497,	// (0x00045713) list_recal_day_pane

0x9770,	// (0x0004d9ec) list_single_recal_day_pane_ParamLimits

0x9770,	// (0x0004d9ec) list_single_recal_day_pane

0x9782,	// (0x0004d9fe) list_single_recal_day_pane_g1_ParamLimits

0x9782,	// (0x0004d9fe) list_single_recal_day_pane_g1

0x978e,	// (0x0004da0a) list_single_recal_day_pane_g2_ParamLimits

0x978e,	// (0x0004da0a) list_single_recal_day_pane_g2

0x979e,	// (0x0004da1a) list_single_recal_day_pane_g3_ParamLimits

0x979e,	// (0x0004da1a) list_single_recal_day_pane_g3

0x97aa,	// (0x0004da26) list_single_recal_day_pane_g4_ParamLimits

0x97aa,	// (0x0004da26) list_single_recal_day_pane_g4

0x97c0,	// (0x0004da3c) list_single_recal_day_pane_g5_ParamLimits

0x97c0,	// (0x0004da3c) list_single_recal_day_pane_g5

0x97da,	// (0x0004da56) list_single_recal_day_pane_g6_ParamLimits

0x97da,	// (0x0004da56) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x000540b8) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x000540b8) list_single_recal_day_pane_g

0x97f1,	// (0x0004da6d) list_single_recal_day_pane_t1

0x9803,	// (0x0004da7f) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x000540c3) list_single_recal_day_pane_t

0x9818,	// (0x0004da94) ncimui_query_button_pane_ParamLimits

0x9818,	// (0x0004da94) ncimui_query_button_pane

0x9828,	// (0x0004daa4) ncimui_query_button_pane_t1_ParamLimits

0x9828,	// (0x0004daa4) ncimui_query_button_pane_t1

0x983b,	// (0x0004dab7) ncimui_query_button_pane_t2_ParamLimits

0x983b,	// (0x0004dab7) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x000540c8) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x000540c8) ncimui_query_button_pane_t

0x984e,	// (0x0004daca) query_button_pane_ParamLimits

0x984e,	// (0x0004daca) query_button_pane

0x1497,	// (0x00045713) bg_button_pane_cp0028

0x9861,	// (0x0004dadd) query_button_pane_t1

0x4bd6,	// (0x00048e52) main_tport_pane_ParamLimits

0x8fad,	// (0x0004d229) bg_popup_window_pane_cp01_ParamLimits

0x8fad,	// (0x0004d229) bg_popup_window_pane_cp01

0x8fc7,	// (0x0004d243) heading_pane_cp08_ParamLimits

0x8fc7,	// (0x0004d243) heading_pane_cp08

0x8fdb,	// (0x0004d257) heading_pane_cp07_ParamLimits

0x8fdb,	// (0x0004d257) heading_pane_cp07

0x90b4,	// (0x0004d330) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x00054014) cell_tport_appsw_pane_g

0x0a9d,	// (0x00044d19) input_candi_list_open_g1

0xad41,	// (0x0004efbd) list_cale_time_pane_g6_ParamLimits

0xad41,	// (0x0004efbd) list_cale_time_pane_g6

0x599f,	// (0x00049c1b) aid_size_touch_calib_1_ParamLimits

0x599f,	// (0x00049c1b) aid_size_touch_calib_1

0x59ab,	// (0x00049c27) aid_size_touch_calib_2_ParamLimits

0x59ab,	// (0x00049c27) aid_size_touch_calib_2

0x59c1,	// (0x00049c3d) aid_size_touch_calib_3_ParamLimits

0x59c1,	// (0x00049c3d) aid_size_touch_calib_3

0x59df,	// (0x00049c5b) aid_size_touch_calib_4_ParamLimits

0x59df,	// (0x00049c5b) aid_size_touch_calib_4

0x59f5,	// (0x00049c71) main_touch_calib_button_group_pane_ParamLimits

0x59f5,	// (0x00049c71) main_touch_calib_button_group_pane

0x5a0d,	// (0x00049c89) main_touch_calib_pane_g1_ParamLimits

0x5a19,	// (0x00049c95) main_touch_calib_pane_g2_ParamLimits

0x5a25,	// (0x00049ca1) main_touch_calib_pane_g3_ParamLimits

0x5a31,	// (0x00049cad) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x000539dd) main_touch_calib_pane_g_ParamLimits

0x5a3d,	// (0x00049cb9) main_touch_calib_pane_t1_ParamLimits

0x5a57,	// (0x00049cd3) main_touch_calib_pane_t2_ParamLimits

0x5a71,	// (0x00049ced) main_touch_calib_pane_t3_ParamLimits

0x5a85,	// (0x00049d01) main_touch_calib_pane_t4_ParamLimits

0x5a99,	// (0x00049d15) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x000539e6) main_touch_calib_pane_t_ParamLimits

0xda75,	// (0x00051cf1) list_single_fp_cale_pane_g3_ParamLimits

0xda75,	// (0x00051cf1) list_single_fp_cale_pane_g3

0x16a3,	// (0x0004591f) bg_button_pane_cp012_ParamLimits

0x16a3,	// (0x0004591f) bg_vkb2_func_pane_cp03_ParamLimits

0x7a73,	// (0x0004bcef) cell_vitu2_function_top_pane_g1_ParamLimits

0x16a3,	// (0x0004591f) bg_vkb2_func_pane_cp04_ParamLimits

0x8667,	// (0x0004c8e3) main_ncimui_button_group_pane_ParamLimits

0x8667,	// (0x0004c8e3) main_ncimui_button_group_pane

0x86c7,	// (0x0004c943) main_ncimui_pane_t3_ParamLimits

0x86c7,	// (0x0004c943) main_ncimui_pane_t3

0x92ed,	// (0x0004d569) phacti_button_group_pane

0x969a,	// (0x0004d916) aid_size_list_single_double_ParamLimits

0x96a6,	// (0x0004d922) popup_ezdial_listscroll_window_ParamLimits

0x96c2,	// (0x0004d93e) popup_number_entry_window_cp01_ParamLimits

0x986f,	// (0x0004daeb) phacti_button_pane_ParamLimits

0x986f,	// (0x0004daeb) phacti_button_pane

0x1497,	// (0x00045713) bg_button_pane_cp14

0x9880,	// (0x0004dafc) phacti_button_pane_t1

0x988e,	// (0x0004db0a) main_touch_calib_button_pane_ParamLimits

0x988e,	// (0x0004db0a) main_touch_calib_button_pane

0x215a,	// (0x000463d6) bg_button_pane_cp18_ParamLimits

0x215a,	// (0x000463d6) bg_button_pane_cp18

0x98a3,	// (0x0004db1f) main_touch_calib_button_pane_t1_ParamLimits

0x98a3,	// (0x0004db1f) main_touch_calib_button_pane_t1

0x98b9,	// (0x0004db35) main_touch_calib_button_pane_t2_ParamLimits

0x98b9,	// (0x0004db35) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x000540cd) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x000540cd) main_touch_calib_button_pane_t

0x1497,	// (0x00045713) cell_ncimui_button_pane

0x1497,	// (0x00045713) bg_button_pane_cp032

0x98d7,	// (0x0004db53) cell_ncimui_button_pane_t1

0xcbcc,	// (0x00050e48) image3_infobar_pane_ParamLimits

0xcbcc,	// (0x00050e48) image3_infobar_pane

0x8a95,	// (0x0004cd11) fs_bigclock_status_pane_ParamLimits

0x8a95,	// (0x0004cd11) fs_bigclock_status_pane

0x8aa2,	// (0x0004cd1e) main_fs_bigclock_clock_pane_ParamLimits

0x8aa2,	// (0x0004cd1e) main_fs_bigclock_clock_pane

0x8ab6,	// (0x0004cd32) main_fs_bigclock_indi_pane_ParamLimits

0x8ab6,	// (0x0004cd32) main_fs_bigclock_indi_pane

0x8ace,	// (0x0004cd4a) main_fs_bigclock_swipe_pane_ParamLimits

0x8ace,	// (0x0004cd4a) main_fs_bigclock_swipe_pane

0x1497,	// (0x00045713) main_fs_clock_dumped_data

0xee9f,	// (0x0005311b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xee9f,	// (0x0005311b) list_single_fs_bigclock_indicator_pane_g1

0xeec8,	// (0x00053144) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xeec8,	// (0x00053144) list_single_fs_bigclock_indicator_pane_g2

0xeee2,	// (0x0005315e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xeee2,	// (0x0005315e) list_single_fs_bigclock_indicator_pane_g3

0xeefc,	// (0x00053178) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xeefc,	// (0x00053178) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x00053efb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x00053efb) list_single_fs_bigclock_indicator_pane_g

0xef25,	// (0x000531a1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xef25,	// (0x000531a1) list_single_fs_bigclock_indicator_pane_t1

0xef4d,	// (0x000531c9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xef4d,	// (0x000531c9) list_single_fs_bigclock_indicator_pane_t2

0xef75,	// (0x000531f1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xef75,	// (0x000531f1) list_single_fs_bigclock_indicator_pane_t3

0xef9d,	// (0x00053219) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xef9d,	// (0x00053219) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x00053f06) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x00053f06) list_single_fs_bigclock_indicator_pane_t

0x98e5,	// (0x0004db61) image3_infobar_fav_pane_ParamLimits

0x98e5,	// (0x0004db61) image3_infobar_fav_pane

0x98f5,	// (0x0004db71) image3_infobar_loc_pane_ParamLimits

0x98f5,	// (0x0004db71) image3_infobar_loc_pane

0x9909,	// (0x0004db85) image3_infobar_time_pane_ParamLimits

0x9909,	// (0x0004db85) image3_infobar_time_pane

0xd616,	// (0x00051892) image3_infobar_time_pane_g1

0x9919,	// (0x0004db95) image3_infobar_time_pane_t1

0xd616,	// (0x00051892) image3_infobar_loc_pane_g1

0x9927,	// (0x0004dba3) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x000540d2) image3_infobar_loc_pane_g

0x992f,	// (0x0004dbab) image3_infobar_loc_pane_t1

0xd616,	// (0x00051892) image3_infobar_fav_pane_g1

0x993d,	// (0x0004dbb9) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x000540d7) image3_infobar_fav_pane_g

0x9945,	// (0x0004dbc1) fs_bigclock_status_battery_pane

0x994e,	// (0x0004dbca) fs_bigclock_status_signal_pane

0x9957,	// (0x0004dbd3) fs_bigclock_status_title_pane

0x9960,	// (0x0004dbdc) fs_bigclock_status_signal_pane_g1

0x9969,	// (0x0004dbe5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x000540dc) fs_bigclock_status_signal_pane_g

0x9971,	// (0x0004dbed) fs_bigclock_status_battery_pane_g1

0x997a,	// (0x0004dbf6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x000540e1) fs_bigclock_status_battery_pane_g

0x9982,	// (0x0004dbfe) fs_bigclock_status_title_pane_t1

0xd616,	// (0x00051892) main_fs_bigclock_clock_pane_g1

0x9990,	// (0x0004dc0c) main_fs_bigclock_clock_pane_g2

0x9990,	// (0x0004dc0c) main_fs_bigclock_clock_pane_g3

0x9990,	// (0x0004dc0c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x000540e6) main_fs_bigclock_clock_pane_g

0x9998,	// (0x0004dc14) main_fs_bigclock_clock_pane_t1

0x99a6,	// (0x0004dc22) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x000540ef) main_fs_bigclock_clock_pane_t

0x99b5,	// (0x0004dc31) list_single_fs_bigclock_indicator_pane_ParamLimits

0x99b5,	// (0x0004dc31) list_single_fs_bigclock_indicator_pane

0x99c6,	// (0x0004dc42) list_single_fs_bigclock_pane_ParamLimits

0x99c6,	// (0x0004dc42) list_single_fs_bigclock_pane

0x9a35,	// (0x0004dcb1) main_fs_bigclock_indicator_pane_t1

0x9a44,	// (0x0004dcc0) list_single_fs_bigclock_pane_g1

0x9a4c,	// (0x0004dcc8) list_single_fs_bigclock_pane_t1

0xd616,	// (0x00051892) main_fs_bigclock_swipe_pane_g1

0x9a8f,	// (0x0004dd0b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x00054100) main_fs_bigclock_swipe_pane_g

0x9a97,	// (0x0004dd13) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x9a97,	// (0x0004dd13) main_fs_bigclock_swipe_pane_t1

0x3a64,	// (0x00047ce0) call_type_pane_ParamLimits

0x1497,	// (0x00045713) main_btmg_pane

0xd217,	// (0x00051493) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd217,	// (0x00051493) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x00054073) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x00054073) list_single_cale_mrui_row_pane_g

0x9760,	// (0x0004d9dc) list_recal_vselct_arw_lo_pane

0x9768,	// (0x0004d9e4) list_recal_vselct_arw_up_pane

0x7f64,	// (0x0004c1e0) list_recal_vselct_pane

0x9ab4,	// (0x0004dd30) btmg_button_pane

0x9abe,	// (0x0004dd3a) main_btmg_pane_g1

0x1497,	// (0x00045713) bg_button_pane_cp044

0x9ac8,	// (0x0004dd44) btmg_button_pane_t1

0xc797,	// (0x00050a13) aid_listscroll_gen

0x16a3,	// (0x0004591f) main_cntbar_detail_pane

0x9113,	// (0x0004d38f) list_cmail_folder_pane

0x912d,	// (0x0004d3a9) sp_fs_scroll_pane_cp03_ParamLimits

0x1345,	// (0x000455c1) list_single_fs_dyc_pane_cp01_ParamLimits

0x1345,	// (0x000455c1) list_single_fs_dyc_pane_cp01

0x9ad6,	// (0x0004dd52) aid_size_cmail_indent

0xd293,	// (0x0005150f) list_single_dyc_row_pane_cp01

0x9b0b,	// (0x0004dd87) cntbar_detail_list_pane_ParamLimits

0x9b0b,	// (0x0004dd87) cntbar_detail_list_pane

0x9b57,	// (0x0004ddd3) main_cntbar_detail_cont_pane_ParamLimits

0x9b57,	// (0x0004ddd3) main_cntbar_detail_cont_pane

0x3a58,	// (0x00047cd4) scroll_pane_cp032_ParamLimits

0x3a58,	// (0x00047cd4) scroll_pane_cp032

0x9b6b,	// (0x0004dde7) cntbar_detail_list_event_pane_ParamLimits

0x9b6b,	// (0x0004dde7) cntbar_detail_list_event_pane

0x9b1b,	// (0x0004dd97) cntbar_detail_list_shct_pane

0xab9c,	// (0x0004ee18) aid_list_gen

0x9b7b,	// (0x0004ddf7) aid_scroll

0x9b84,	// (0x0004de00) aid_size_touch_scroll_bar

0x9b8d,	// (0x0004de09) aid_list_double

0x9b96,	// (0x0004de12) aid_list_single

0x9b9f,	// (0x0004de1b) aid_list_single_lg

0xd29c,	// (0x00051518) aid_list_z_g_a_sm

0xd2a4,	// (0x00051520) aid_list_z_g_d

0xd2ac,	// (0x00051528) aid_txt_z_prm

0x135e,	// (0x000455da) aid_txt_z_prm_cp01

0x136c,	// (0x000455e8) aid_txt_z_sec

0x9ba8,	// (0x0004de24) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9ba8,	// (0x0004de24) main_cntbar_detail_cont_pane_g1

0x9bbc,	// (0x0004de38) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9bbc,	// (0x0004de38) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x00054105) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x00054105) main_cntbar_detail_cont_pane_g

0x9bcc,	// (0x0004de48) main_cntbar_detail_cont_pane_t1

0x9bda,	// (0x0004de56) main_cntbar_detail_cont_pane_t2

0x9be8,	// (0x0004de64) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x0005410a) main_cntbar_detail_cont_pane_t

0x9bf6,	// (0x0004de72) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9bf6,	// (0x0004de72) cell_cntbar_detail_list_shct_pane

0x9c0a,	// (0x0004de86) cntbar_detail_list_shct_pane_g1

0x9c13,	// (0x0004de8f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x00054111) cntbar_detail_list_shct_pane_g

0x9c1c,	// (0x0004de98) cntbar_detail_list_event_pane_g1_ParamLimits

0x9c1c,	// (0x0004de98) cntbar_detail_list_event_pane_g1

0x9c28,	// (0x0004dea4) cntbar_detail_list_event_pane_g2_ParamLimits

0x9c28,	// (0x0004dea4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x00054116) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x00054116) cntbar_detail_list_event_pane_g

0x9c94,	// (0x0004df10) cntbar_detail_list_event_pane_t1_ParamLimits

0x9c94,	// (0x0004df10) cntbar_detail_list_event_pane_t1

0x9ca9,	// (0x0004df25) cntbar_detail_list_event_pane_t2_ParamLimits

0x9ca9,	// (0x0004df25) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x00054123) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x00054123) cntbar_detail_list_event_pane_t

0xd616,	// (0x00051892) cell_cntbar_detail_list_shct_pane_g1

0x3dcb,	// (0x00048047) navi_pane_mv_g3

0x16a3,	// (0x0004591f) main_cntbar_detail_pane_ParamLimits

0x1497,	// (0x00045713) main_notif_wgt_pane

0xc9e2,	// (0x00050c5e) aid_tch_main_mp4_pane_g4

0xcbc4,	// (0x00050e40) popup_slider_window_cp02

0x9756,	// (0x0004d9d2) list_recal_day_event_pane

0x9adf,	// (0x0004dd5b) cntbar_detail_btn_pane_ParamLimits

0x9adf,	// (0x0004dd5b) cntbar_detail_btn_pane

0x9af5,	// (0x0004dd71) cntbar_detail_btn_pane_cp01_ParamLimits

0x9af5,	// (0x0004dd71) cntbar_detail_btn_pane_cp01

0x9b1b,	// (0x0004dd97) cntbar_detail_list_shct_pane_ParamLimits

0x9b2b,	// (0x0004dda7) cntbar_detail_pane_g1_ParamLimits

0x9b2b,	// (0x0004dda7) cntbar_detail_pane_g1

0x9b3b,	// (0x0004ddb7) cntbar_detail_pane_t1_ParamLimits

0x9b3b,	// (0x0004ddb7) cntbar_detail_pane_t1

0x9c34,	// (0x0004deb0) cntbar_detail_list_event_pane_g3_ParamLimits

0x9c34,	// (0x0004deb0) cntbar_detail_list_event_pane_g3

0x9c4c,	// (0x0004dec8) cntbar_detail_list_event_pane_g4_ParamLimits

0x9c4c,	// (0x0004dec8) cntbar_detail_list_event_pane_g4

0x9c64,	// (0x0004dee0) cntbar_detail_list_event_pane_g5_ParamLimits

0x9c64,	// (0x0004dee0) cntbar_detail_list_event_pane_g5

0x9c7c,	// (0x0004def8) cntbar_detail_list_event_pane_g6_ParamLimits

0x9c7c,	// (0x0004def8) cntbar_detail_list_event_pane_g6

0x9cbe,	// (0x0004df3a) cntbar_detail_list_event_pane_t3_ParamLimits

0x9cbe,	// (0x0004df3a) cntbar_detail_list_event_pane_t3

0x9cd0,	// (0x0004df4c) popup_notif_wgt_window_ParamLimits

0x9cd0,	// (0x0004df4c) popup_notif_wgt_window

0x9ce9,	// (0x0004df65) popup_submenu_window_cp01_ParamLimits

0x9ce9,	// (0x0004df65) popup_submenu_window_cp01

0xb300,	// (0x0004f57c) bg_popup_window_pane_cp10

0x9cfb,	// (0x0004df77) listscroll_notif_wgt_pane

0x9d0c,	// (0x0004df88) list_notif_wgt_window

0x9d15,	// (0x0004df91) scroll_pane_cp033

0x9d1e,	// (0x0004df9a) list_notif_wgt_row_pane_ParamLimits

0x9d1e,	// (0x0004df9a) list_notif_wgt_row_pane

0x9d2e,	// (0x0004dfaa) aid_size_list_notif_wgt_del

0x9d3b,	// (0x0004dfb7) list_notif_wgt_row_pane_g1

0x9d47,	// (0x0004dfc3) list_notif_wgt_row_pane_g2

0x9d53,	// (0x0004dfcf) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x0005412a) list_notif_wgt_row_pane_g

0x9d60,	// (0x0004dfdc) list_notif_wgt_row_pane_t1

0x9d75,	// (0x0004dff1) list_notif_wgt_row_pane_t2

0x9d87,	// (0x0004e003) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x00054131) list_notif_wgt_row_pane_t

0xe3a6,	// (0x00052622) list_recal_day_event_pane_g1

0x9d99,	// (0x0004e015) list_recal_day_event_pane_t1

0x1497,	// (0x00045713) bg_button_pane_cp045

0x9da8,	// (0x0004e024) cntbar_detail_btn_pane_t1

0xc79f,	// (0x00050a1b) main_callh_pane_ParamLimits

0xc79f,	// (0x00050a1b) main_callh_pane

0x1497,	// (0x00045713) main_coverflow0_pane

0x1497,	// (0x00045713) main_wgtman_pane

0x8adc,	// (0x0004cd58) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8adc,	// (0x0004cd58) main_fs_bigclock_unlock_btn_pane

0x90ac,	// (0x0004d328) bg_button_pane_cp16

0x90bc,	// (0x0004d338) cell_tport_appsw_pane_g3

0x9db6,	// (0x0004e032) cf0_flow_pane_ParamLimits

0x9db6,	// (0x0004e032) cf0_flow_pane

0x9dcb,	// (0x0004e047) listscroll_cf0_pane

0x9dd6,	// (0x0004e052) main_cf0_pane_g1

0x9de0,	// (0x0004e05c) main_cf0_pane_t1_ParamLimits

0x9de0,	// (0x0004e05c) main_cf0_pane_t1

0x9df7,	// (0x0004e073) main_cf0_pane_t2_ParamLimits

0x9df7,	// (0x0004e073) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00054138) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00054138) main_cf0_pane_t

0x9e0e,	// (0x0004e08a) scroll_pane_cp11

0x9e19,	// (0x0004e095) cf0_flow_pane_g1

0x9e21,	// (0x0004e09d) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0005413d) cf0_flow_pane_g

0x9e29,	// (0x0004e0a5) cf0_flow_pane_t1

0x1497,	// (0x00045713) main_call6_pane

0x1497,	// (0x00045713) main_calllock_pane

0x9e37,	// (0x0004e0b3) call6_btn_grp_pane_ParamLimits

0x9e37,	// (0x0004e0b3) call6_btn_grp_pane

0x9e51,	// (0x0004e0cd) call6_pane_g1_ParamLimits

0x9e51,	// (0x0004e0cd) call6_pane_g1

0x9e66,	// (0x0004e0e2) popup_call6_1st_window_ParamLimits

0x9e66,	// (0x0004e0e2) popup_call6_1st_window

0x9e77,	// (0x0004e0f3) popup_call6_2nd_window_ParamLimits

0x9e77,	// (0x0004e0f3) popup_call6_2nd_window

0x9e88,	// (0x0004e104) cell_call6_btn_pane_ParamLimits

0x9e88,	// (0x0004e104) cell_call6_btn_pane

0xb300,	// (0x0004f57c) bg_popup_call2_in_pane_cp03

0x9e9c,	// (0x0004e118) popup_call6_1st_window_g1

0x9ea4,	// (0x0004e120) popup_call6_1st_window_g2

0x9eac,	// (0x0004e128) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00054142) popup_call6_1st_window_g

0x9eb4,	// (0x0004e130) popup_call6_1st_window_t1

0x9ec3,	// (0x0004e13f) popup_call6_1st_window_t2

0x9ed3,	// (0x0004e14f) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00054149) popup_call6_1st_window_t

0xb300,	// (0x0004f57c) bg_popup_call2_in_pane_cp04

0x9e9c,	// (0x0004e118) popup_call6_2nd_window_g1

0x9ea4,	// (0x0004e120) popup_call6_2nd_window_g2

0x9eac,	// (0x0004e128) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00054142) popup_call6_2nd_window_g

0x9eb4,	// (0x0004e130) popup_call6_2nd_window_t1

0x1497,	// (0x00045713) bg_button_pane_cp15

0x9ee3,	// (0x0004e15f) cell_call6_btn_pane_g1

0x9eec,	// (0x0004e168) cell_call6_btn_pane_t1

0x9efb,	// (0x0004e177) listscroll_wgtman_pane_ParamLimits

0x9efb,	// (0x0004e177) listscroll_wgtman_pane

0x9f1e,	// (0x0004e19a) wgtman_btn_pane_ParamLimits

0x9f1e,	// (0x0004e19a) wgtman_btn_pane

0xb1b3,	// (0x0004f42f) aid_scroll_copy1

0x9f61,	// (0x0004e1dd) list_wgtman_pane

0x9f6b,	// (0x0004e1e7) wgtman_btn_pane_g1_ParamLimits

0x9f6b,	// (0x0004e1e7) wgtman_btn_pane_g1

0x9f97,	// (0x0004e213) wgtman_btn_pane_t1_ParamLimits

0x9f97,	// (0x0004e213) wgtman_btn_pane_t1

0x9fd4,	// (0x0004e250) wgtman_btn_pane_t2_ParamLimits

0x9fd4,	// (0x0004e250) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00054150) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00054150) wgtman_btn_pane_t

0x9feb,	// (0x0004e267) listrow_wgtman_pane_ParamLimits

0x9feb,	// (0x0004e267) listrow_wgtman_pane

0x9ffe,	// (0x0004e27a) listrow_wgtman_pane_g1

0xa00b,	// (0x0004e287) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00054155) listrow_wgtman_pane_g

0x137a,	// (0x000455f6) listrow_wgtman_pane_t1

0x1392,	// (0x0004560e) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0005415a) listrow_wgtman_pane_t

0x13b8,	// (0x00045634) wait_bar_pane_cp09

0xa029,	// (0x0004e2a5) main_calllock_btn_pane

0xa033,	// (0x0004e2af) main_calllock_pane_g1

0x1497,	// (0x00045713) bg_button_pane_cp17

0xa03e,	// (0x0004e2ba) main_calllock_btn_pane_g1

0xa047,	// (0x0004e2c3) main_calllock_btn_pane_t1

0x1497,	// (0x00045713) main_dialer3_pane

0x1497,	// (0x00045713) main_fmrd2_pane

0xd616,	// (0x00051892) main_fs_bigclock_unlock_btn_pane_g1

0xa05e,	// (0x0004e2da) main_fs_bigclock_unlock_btn_pane_t1

0xa06c,	// (0x0004e2e8) area_fmrd2_info_pane_ParamLimits

0xa06c,	// (0x0004e2e8) area_fmrd2_info_pane

0xa07d,	// (0x0004e2f9) area_fmrd2_visual_pane_ParamLimits

0xa07d,	// (0x0004e2f9) area_fmrd2_visual_pane

0xa08b,	// (0x0004e307) fmrd2_indi_pane_ParamLimits

0xa08b,	// (0x0004e307) fmrd2_indi_pane

0xa098,	// (0x0004e314) area_fmrd2_visual_pane_g1

0xa0a0,	// (0x0004e31c) area_fmrd2_visual_pane_t1

0xa0b0,	// (0x0004e32c) area_fmrd2_visual_pane_t2

0xa0c0,	// (0x0004e33c) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00054164) area_fmrd2_visual_pane_t

0xa0d0,	// (0x0004e34c) area_fmrd2_info_pane_g1

0xa0d8,	// (0x0004e354) area_fmrd2_info_pane_t1

0xa0e8,	// (0x0004e364) area_fmrd2_info_pane_t2

0xa0f8,	// (0x0004e374) area_fmrd2_info_pane_t3

0xa108,	// (0x0004e384) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0005416b) area_fmrd2_info_pane_t

0xa116,	// (0x0004e392) fmrd2_indi_pane_t1

0xa126,	// (0x0004e3a2) fmrd2_indi_pane_t2

0xa136,	// (0x0004e3b2) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00054174) fmrd2_indi_pane_t

0xef0b,	// (0x00053187) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xef0b,	// (0x00053187) list_single_fs_bigclock_indicator_pane_g5

0xefb2,	// (0x0005322e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xefb2,	// (0x0005322e) list_single_fs_bigclock_indicator_pane_t5

0x936c,	// (0x0004d5e8) aid_cell_bcale_month_pane_ParamLimits

0x936c,	// (0x0004d5e8) aid_cell_bcale_month_pane

0x9384,	// (0x0004d600) bcale_month_pane_ParamLimits

0x9384,	// (0x0004d600) bcale_month_pane

0x939b,	// (0x0004d617) bcale_preview_pane_ParamLimits

0x939b,	// (0x0004d617) bcale_preview_pane

0x9a4c,	// (0x0004dcc8) list_single_fs_bigclock_pane_t1_ParamLimits

0x9a6b,	// (0x0004dce7) list_single_fs_bigclock_pane_t2_ParamLimits

0x9a6b,	// (0x0004dce7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x000540fb) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x000540fb) list_single_fs_bigclock_pane_t

0xa056,	// (0x0004e2d2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0005415f) main_fs_bigclock_unlock_btn_pane_g

0xa146,	// (0x0004e3c2) aid_dia3_key_size_ParamLimits

0xa146,	// (0x0004e3c2) aid_dia3_key_size

0xa155,	// (0x0004e3d1) aid_dia3_listrow_size_ParamLimits

0xa155,	// (0x0004e3d1) aid_dia3_listrow_size

0xa16a,	// (0x0004e3e6) dia3_keypad_fun_pane_ParamLimits

0xa16a,	// (0x0004e3e6) dia3_keypad_fun_pane

0xa186,	// (0x0004e402) dia3_keypad_num_pane_ParamLimits

0xa186,	// (0x0004e402) dia3_keypad_num_pane

0xa1a1,	// (0x0004e41d) dia3_listscroll_pane_ParamLimits

0xa1a1,	// (0x0004e41d) dia3_listscroll_pane

0xa1b4,	// (0x0004e430) dia3_numentry_pane_ParamLimits

0xa1b4,	// (0x0004e430) dia3_numentry_pane

0xa1c8,	// (0x0004e444) dia3_list_pane

0xa1d3,	// (0x0004e44f) scroll_pane_cp12

0x1497,	// (0x00045713) bg_dia3_numentry_pane

0xa1de,	// (0x0004e45a) dia3_numentry_pane_t1

0xa1ed,	// (0x0004e469) cell_dia3_key_num_pane

0xa1f5,	// (0x0004e471) cell_dia3_key0_fun_pane_ParamLimits

0xa1f5,	// (0x0004e471) cell_dia3_key0_fun_pane

0xa209,	// (0x0004e485) cell_dia3_key1_fun_pane_ParamLimits

0xa209,	// (0x0004e485) cell_dia3_key1_fun_pane

0xa221,	// (0x0004e49d) dia3_listrow_pane

0xec0c,	// (0x00052e88) bg_dia3_numentry_pane_g1

0x1497,	// (0x00045713) bg_button_pane_cp21

0xa233,	// (0x0004e4af) cell_dia3_key_num_pane_t1

0xa241,	// (0x0004e4bd) cell_dia3_key_num_pane_t2

0xa250,	// (0x0004e4cc) cell_dia3_key_num_pane_t3

0xa25f,	// (0x0004e4db) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0005417b) cell_dia3_key_num_pane_t

0x1497,	// (0x00045713) bg_button_pane_cp19

0xa26e,	// (0x0004e4ea) cell_dia3_key0_fun_pane_g1

0x1497,	// (0x00045713) bg_button_pane_cp20

0xa276,	// (0x0004e4f2) cell_dia3_key1_fun_pane_g1

0xa27e,	// (0x0004e4fa) area_left_week_number_pane

0xa288,	// (0x0004e504) area_top_day_name_pane

0xa294,	// (0x0004e510) frame_month_view_pane

0xa29e,	// (0x0004e51a) grid_month_view_pane

0xa2a8,	// (0x0004e524) cell_top_day_name_pane_ParamLimits

0xa2a8,	// (0x0004e524) cell_top_day_name_pane

0xa2c2,	// (0x0004e53e) cell_area_left_week_number_pane_ParamLimits

0xa2c2,	// (0x0004e53e) cell_area_left_week_number_pane

0xa2d6,	// (0x0004e552) cell_month_view_pane_ParamLimits

0xa2d6,	// (0x0004e552) cell_month_view_pane

0xa2f3,	// (0x0004e56f) frm_month_g1

0xa2fc,	// (0x0004e578) frm_month_g2

0xa306,	// (0x0004e582) frm_month_g3

0xa310,	// (0x0004e58c) frm_month_g4

0xa31a,	// (0x0004e596) frm_month_g5

0xa324,	// (0x0004e5a0) frm_month_g6

0xa32e,	// (0x0004e5aa) frm_month_g7

0xa338,	// (0x0004e5b4) frm_month_g8

0xa341,	// (0x0004e5bd) frm_month_g9

0xa34a,	// (0x0004e5c6) frm_month_g10

0xa353,	// (0x0004e5cf) frm_month_g11

0xa35c,	// (0x0004e5d8) frm_month_g12

0xa365,	// (0x0004e5e1) frm_month_g13

0xa36e,	// (0x0004e5ea) frm_month_g14

0xa379,	// (0x0004e5f5) frm_month_g15

0xa384,	// (0x0004e600) frm_month_g16

0x000f,

0xff08,	// (0x00054184) frm_month_g

0xa38f,	// (0x0004e60b) cell_top_day_name_pane_t1

0xa39e,	// (0x0004e61a) cell_area_left_week_number_pane_g1

0xa3a6,	// (0x0004e622) cell_area_left_week_number_pane_t1

0xd616,	// (0x00051892) cell_month_view_pane_g1

0xa3b5,	// (0x0004e631) cell_month_view_pane_t1

0x1497,	// (0x00045713) main_fps_pane

0x8eaa,	// (0x0004d126) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x8eaa,	// (0x0004d126) cmail_ddmenu_btn02_pane_cp1

0x8ec6,	// (0x0004d142) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x8ec6,	// (0x0004d142) cmail_ddmenu_btn02_pane_cp2

0x9723,	// (0x0004d99f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9723,	// (0x0004d99f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x000540ae) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x000540ae) cmail_ddmenu_btn02_pane_g

0x9744,	// (0x0004d9c0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9744,	// (0x0004d9c0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x000540b3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x000540b3) cmail_ddmenu_btn02_pane_t

0xa3c4,	// (0x0004e640) fps_text_pane_ParamLimits

0xa3c4,	// (0x0004e640) fps_text_pane

0xa3db,	// (0x0004e657) main_fps_pane_g1_ParamLimits

0xa3db,	// (0x0004e657) main_fps_pane_g1

0xa3f5,	// (0x0004e671) wait_bar_pane_cp010_ParamLimits

0xa3f5,	// (0x0004e671) wait_bar_pane_cp010

0xa406,	// (0x0004e682) fps_text_pane_t1_ParamLimits

0xa406,	// (0x0004e682) fps_text_pane_t1

0xefda,	// (0x00053256) cam4_image_uncrop_pane_g1

0xefe3,	// (0x0005325f) cam4_image_uncrop_pane_g2

0x6fc9,	// (0x0004b245) cam4_image_uncrop_pane_g3

0x6fd2,	// (0x0004b24e) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00053b75) cam4_image_uncrop_pane_g

0xa221,	// (0x0004e49d) dia3_listrow_pane_ParamLimits

0x1497,	// (0x00045713) main_phob2_pane

0x9046,	// (0x0004d2c2) cell_tport_appsw_pane_cp02_ParamLimits

0x9046,	// (0x0004d2c2) cell_tport_appsw_pane_cp02

0x905a,	// (0x0004d2d6) cell_tport_appsw_pane_cp03_ParamLimits

0x905a,	// (0x0004d2d6) cell_tport_appsw_pane_cp03

0x1497,	// (0x00045713) phob2_contact_card_pane

0x1497,	// (0x00045713) phob2_listscroll_pane

0xa41e,	// (0x0004e69a) phob2_list_pane

0xa426,	// (0x0004e6a2) scroll_pane_cp034

0xa42e,	// (0x0004e6aa) phob2_cc_data_pane_ParamLimits

0xa42e,	// (0x0004e6aa) phob2_cc_data_pane

0xa44d,	// (0x0004e6c9) phob2_cc_listscroll_pane_ParamLimits

0xa44d,	// (0x0004e6c9) phob2_cc_listscroll_pane

0xe197,	// (0x00052413) list_double_large_graphic_phob2_pane_ParamLimits

0xe197,	// (0x00052413) list_double_large_graphic_phob2_pane

0xa46b,	// (0x0004e6e7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa46b,	// (0x0004e6e7) list_double_large_graphic_phob2_pane_g1

0x13ca,	// (0x00045646) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x13ca,	// (0x00045646) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000541a5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000541a5) list_double_large_graphic_phob2_pane_g

0x13d6,	// (0x00045652) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x13d6,	// (0x00045652) list_double_large_graphic_phob2_pane_t1

0x13eb,	// (0x00045667) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x13eb,	// (0x00045667) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000541aa) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000541aa) list_double_large_graphic_phob2_pane_t

0x1497,	// (0x00045713) list_highlight_pane_cp024

0xa478,	// (0x0004e6f4) phob2_cc_button_pane

0xa480,	// (0x0004e6fc) phob2_cc_data_pane_g1_ParamLimits

0xa480,	// (0x0004e6fc) phob2_cc_data_pane_g1

0xa495,	// (0x0004e711) phob2_cc_data_pane_g2_ParamLimits

0xa495,	// (0x0004e711) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000541af) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000541af) phob2_cc_data_pane_g

0xa4a7,	// (0x0004e723) phob2_cc_data_pane_t1_ParamLimits

0xa4a7,	// (0x0004e723) phob2_cc_data_pane_t1

0xa4bf,	// (0x0004e73b) phob2_cc_data_pane_t2_ParamLimits

0xa4bf,	// (0x0004e73b) phob2_cc_data_pane_t2

0xa4d7,	// (0x0004e753) phob2_cc_data_pane_t3_ParamLimits

0xa4d7,	// (0x0004e753) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000541b4) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000541b4) phob2_cc_data_pane_t

0xa4f1,	// (0x0004e76d) phob2_cc_list_pane_ParamLimits

0xa4f1,	// (0x0004e76d) phob2_cc_list_pane

0xeae7,	// (0x00052d63) scroll_pane_cp035_ParamLimits

0xeae7,	// (0x00052d63) scroll_pane_cp035

0x16a3,	// (0x0004591f) bg_button_pane_cp033

0xa4fd,	// (0x0004e779) phob2_cc_button_pane_g1

0xa509,	// (0x0004e785) phob2_cc_button_pane_t1

0xa51e,	// (0x0004e79a) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000541bb) phob2_cc_button_pane_t

0xa530,	// (0x0004e7ac) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa530,	// (0x0004e7ac) list_double_large_graphic_phob2_cc_pane

0xa544,	// (0x0004e7c0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa544,	// (0x0004e7c0) list_double_large_graphic_phob2_cc_pane_g1

0x13fd,	// (0x00045679) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x13fd,	// (0x00045679) list_double_large_graphic_phob2_cc_pane_g2

0x1409,	// (0x00045685) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1409,	// (0x00045685) list_double_large_graphic_phob2_cc_pane_g3

0x1415,	// (0x00045691) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1415,	// (0x00045691) list_double_large_graphic_phob2_cc_pane_g4

0x1421,	// (0x0004569d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1421,	// (0x0004569d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000541c0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000541c0) list_double_large_graphic_phob2_cc_pane_g

0x142d,	// (0x000456a9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x142d,	// (0x000456a9) list_double_large_graphic_phob2_cc_pane_t1

0x1456,	// (0x000456d2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1456,	// (0x000456d2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000541cb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000541cb) list_double_large_graphic_phob2_cc_pane_t

0xa550,	// (0x0004e7cc) list_highlight_pane_cp025_ParamLimits

0xa550,	// (0x0004e7cc) list_highlight_pane_cp025

0x16a3,	// (0x0004591f) bg_button_pane_cp033_ParamLimits

0xa4fd,	// (0x0004e779) phob2_cc_button_pane_g1_ParamLimits

0xa509,	// (0x0004e785) phob2_cc_button_pane_t1_ParamLimits

0xa51e,	// (0x0004e79a) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000541bb) phob2_cc_button_pane_t_ParamLimits

0x16b1,	// (0x0004592d) popup_wgtman_window

0xe279,	// (0x000524f5) scroll_pane_cp038

0x9f43,	// (0x0004e1bf) wgtman_btn_pane_cp_01_ParamLimits

0x9f43,	// (0x0004e1bf) wgtman_btn_pane_cp_01

0xa55e,	// (0x0004e7da) wgtman_content_pane

0x9b8d,	// (0x0004de09) wgtman_heading_pane

0x1497,	// (0x00045713) bg_heading_pane_cp02

0xa567,	// (0x0004e7e3) wgtman_heading_pane_g1

0xa56f,	// (0x0004e7eb) wgtman_heading_pane_t1

0xa57d,	// (0x0004e7f9) scroll_pane_cp036

0xa585,	// (0x0004e801) wgtman_list_pane

0xa58d,	// (0x0004e809) wgtman_list_pane_t1_ParamLimits

0xa58d,	// (0x0004e809) wgtman_list_pane_t1

0xcc1e,	// (0x00050e9a) cam4_grid_pane

0x0c90,	// (0x00044f0c) bg_button_pane_cp015_ParamLimits

0x7bd9,	// (0x0004be55) bg_button_pane_cp016_ParamLimits

0x7bec,	// (0x0004be68) bg_button_pane_cp017_ParamLimits

0x0cd8,	// (0x00044f54) popup_vitu2_query_window_g3_ParamLimits

0x0cd8,	// (0x00044f54) popup_vitu2_query_window_g3

0x0d53,	// (0x00044fcf) popup_vitu2_query_window_t6_ParamLimits

0x0d53,	// (0x00044fcf) popup_vitu2_query_window_t6

0x0d7e,	// (0x00044ffa) popup_vitu2_query_window_t7_ParamLimits

0x0d7e,	// (0x00044ffa) popup_vitu2_query_window_t7

0xefda,	// (0x00053256) cam4_grid_pane_g1

0xefe3,	// (0x0005325f) cam4_grid_pane_g2

0xa5ab,	// (0x0004e827) cam4_grid_pane_g3

0xa5b4,	// (0x0004e830) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000541d0) cam4_grid_pane_g

0x2c41,	// (0x00046ebd) aid_placing_vt_slider_lsc_ParamLimits

0x2f3e,	// (0x000471ba) vidtel_button_pane_ParamLimits

0x2f3e,	// (0x000471ba) vidtel_button_pane

0xa5bf,	// (0x0004e83b) bg_button_pane_cp034

0xa5c9,	// (0x0004e845) vidtel_button_pane_g1

0xa5d1,	// (0x0004e84d) vidtel_button_pane_t1

0xe396,	// (0x00052612) aid_size_vtel_slider_touch

0xeae7,	// (0x00052d63) scroll_pane_cp039

0xec4a,	// (0x00052ec6) ncim_query_button_pane_cp01_ParamLimits

0xec69,	// (0x00052ee5) ncimui_query_pane_g1_ParamLimits

0x16a3,	// (0x0004591f) input_focus_pane_cp012_ParamLimits

0xec8e,	// (0x00052f0a) ncim_query_entry_pane_t1_ParamLimits

0xeae7,	// (0x00052d63) scroll_pane_cp039_ParamLimits

0x3d3f,	// (0x00047fbb) navi_pane_bcale_mc_g1

0x3d47,	// (0x00047fc3) navi_pane_bcale_mc_t1

0x8f38,	// (0x0004d1b4) main_sp_fs_email_pane_g1

0x8f40,	// (0x0004d1bc) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x00053f6c) main_sp_fs_email_pane_g

0x9515,	// (0x0004d791) list_single_cale_mrui_row_pane_g3_ParamLimits

0x9515,	// (0x0004d791) list_single_cale_mrui_row_pane_g3

0x97d0,	// (0x0004da4c) list_single_recal_day_pane_g5_event_pane

0x97e9,	// (0x0004da65) list_single_recal_day_pane_g7

0xa5df,	// (0x0004e85b) list_recal_day_event_pane_cp01

0xa5e8,	// (0x0004e864) list_recal_vselct_arw_lo_pane_cp01

0xa5f0,	// (0x0004e86c) list_recal_vselct_arw_up_pane_cp01

0xa5f8,	// (0x0004e874) list_recal_vselct_pane_cp01

0xe3a6,	// (0x00052622) list_recal_day_event_pane_cp01_g1

0xa602,	// (0x0004e87e) list_recal_day_event_pane_cp01_t1

0x97f1,	// (0x0004da6d) list_single_recal_day_pane_t1_ParamLimits

0x9803,	// (0x0004da7f) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x000540c3) list_single_recal_day_pane_t_ParamLimits

0x2116,	// (0x00046392) bg_notes_pane_ParamLimits

0x2124,	// (0x000463a0) list_notes_pane_ParamLimits

0x2132,	// (0x000463ae) scroll_pane_cp06_ParamLimits

0x215a,	// (0x000463d6) main_notes_pane_ParamLimits

0x1497,	// (0x00045713) main_welc_pane

0xa610,	// (0x0004e88c) main_welc_body_pane_ParamLimits

0xa610,	// (0x0004e88c) main_welc_body_pane

0xa62d,	// (0x0004e8a9) main_welc_opti_pane_ParamLimits

0xa62d,	// (0x0004e8a9) main_welc_opti_pane

0xa676,	// (0x0004e8f2) main_welc_pane_t1_ParamLimits

0xa676,	// (0x0004e8f2) main_welc_pane_t1

0xa698,	// (0x0004e914) main_welc_body_row_pane_ParamLimits

0xa698,	// (0x0004e914) main_welc_body_row_pane

0xa6af,	// (0x0004e92b) main_welc_opti_row_pane_ParamLimits

0xa6af,	// (0x0004e92b) main_welc_opti_row_pane

0xa6bf,	// (0x0004e93b) main_welc_opti_row_pane_g1

0xa6c7,	// (0x0004e943) main_welc_opti_row_pane_t1

0xa6d6,	// (0x0004e952) main_welc_body_row_pane_t1

0x9d04,	// (0x0004df80) popup_notif_wgt_heading_pane

0x9d2e,	// (0x0004dfaa) aid_size_list_notif_wgt_del_ParamLimits

0x9d3b,	// (0x0004dfb7) list_notif_wgt_row_pane_g1_ParamLimits

0x9d47,	// (0x0004dfc3) list_notif_wgt_row_pane_g2_ParamLimits

0x9d53,	// (0x0004dfcf) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x0005412a) list_notif_wgt_row_pane_g_ParamLimits

0x9d60,	// (0x0004dfdc) list_notif_wgt_row_pane_t1_ParamLimits

0x9d75,	// (0x0004dff1) list_notif_wgt_row_pane_t2_ParamLimits

0x9d87,	// (0x0004e003) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x00054131) list_notif_wgt_row_pane_t_ParamLimits

0x9ffe,	// (0x0004e27a) listrow_wgtman_pane_g1_ParamLimits

0xa00b,	// (0x0004e287) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00054155) listrow_wgtman_pane_g_ParamLimits

0x137a,	// (0x000455f6) listrow_wgtman_pane_t1_ParamLimits

0x1392,	// (0x0004560e) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0005415a) listrow_wgtman_pane_t_ParamLimits

0x13b8,	// (0x00045634) wait_bar_pane_cp09_ParamLimits

0x1497,	// (0x00045713) bg_popup_heading_pane_cp02

0xa6e5,	// (0x0004e961) popup_notif_wgt_heading_pane_g1

0xa6ed,	// (0x0004e969) popup_notif_wgt_heading_pane_t1

0x1497,	// (0x00045713) main_vids_pane

0x1497,	// (0x00045713) vids_listscroll_pane

0xa6fb,	// (0x0004e977) scroll_pane_cp040

0x1497,	// (0x00045713) vids_list_pane

0xa706,	// (0x0004e982) vids_list_double_pane_ParamLimits

0xa706,	// (0x0004e982) vids_list_double_pane

0xa717,	// (0x0004e993) vids_list_double_pane_g1

0xa720,	// (0x0004e99c) vids_list_double_pane_t1

0xa72f,	// (0x0004e9ab) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000541de) vids_list_double_pane_t

0x16a3,	// (0x0004591f) main_ncimui_pane_ParamLimits

0x867b,	// (0x0004c8f7) main_ncimui_pane_g1_ParamLimits

0x8687,	// (0x0004c903) main_ncimui_pane_g2_ParamLimits

0x8687,	// (0x0004c903) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x00053e71) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x00053e71) main_ncimui_pane_g

0xa64c,	// (0x0004e8c8) main_welc_pane_g1_ParamLimits

0xa64c,	// (0x0004e8c8) main_welc_pane_g1

0xa661,	// (0x0004e8dd) main_welc_pane_g2_ParamLimits

0xa661,	// (0x0004e8dd) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000541d9) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000541d9) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
