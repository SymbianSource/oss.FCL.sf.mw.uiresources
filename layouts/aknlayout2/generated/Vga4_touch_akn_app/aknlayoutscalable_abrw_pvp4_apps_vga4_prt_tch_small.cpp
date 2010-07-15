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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005e505 };

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
0x0a92,	// (0x0005ef97) Screen

0x0a9e,	// (0x0005efa3) application_window

0x0afa,	// (0x0005efff) area_bottom_pane_ParamLimits

0x0afa,	// (0x0005efff) area_bottom_pane

0x0b58,	// (0x0005f05d) area_top_pane_ParamLimits

0x0b58,	// (0x0005f05d) area_top_pane

0x0bbc,	// (0x0005f0c1) call_video_uplink_pane_ParamLimits

0x0bbc,	// (0x0005f0c1) call_video_uplink_pane

0x0bfb,	// (0x0005f100) main_pane_ParamLimits

0x0bfb,	// (0x0005f100) main_pane

0xca0f,	// (0x0006af14) context_pane

0x42b9,	// (0x000627be) navi_pane

0x42e1,	// (0x000627e6) popup_cale_events_window_ParamLimits

0x42e1,	// (0x000627e6) popup_cale_events_window

0xca22,	// (0x0006af27) popup_mup_playback_window

0x42f9,	// (0x000627fe) signal_pane

0xa59d,	// (0x00068aa2) main_browser_pane

0xab7a,	// (0x0006907f) main_burst_pane

0x4109,	// (0x0006260e) main_calc_pane

0xc9f5,	// (0x0006aefa) main_cale_day_pane

0x4116,	// (0x0006261b) main_cale_month_pane

0xc9f5,	// (0x0006aefa) main_cale_week_pane

0xab7a,	// (0x0006907f) main_call_pane

0xa27d,	// (0x00068782) main_call_poc_pane

0xab7a,	// (0x0006907f) main_camera_pane

0xab7a,	// (0x0006907f) main_chi_dic_pane

0xb378,	// (0x0006987d) main_clock_pane

0xa27d,	// (0x00068782) main_fmradio_pane

0xab7a,	// (0x0006907f) main_graph_messa_pane

0xa27d,	// (0x00068782) main_help_pane

0xa59d,	// (0x00068aa2) main_im_pane

0xa4d8,	// (0x000689dd) main_image_pane_ParamLimits

0xa4d8,	// (0x000689dd) main_image_pane

0xa27d,	// (0x00068782) main_location2_pane

0xab7a,	// (0x0006907f) main_location_pane

0xa4d8,	// (0x000689dd) main_messa_pane

0xa27d,	// (0x00068782) main_mp2_pane

0xab7a,	// (0x0006907f) main_mp_pane

0xa27d,	// (0x00068782) main_msg_pane

0xa27d,	// (0x00068782) main_mup_eq_pane

0xa27d,	// (0x00068782) main_mup_pane

0xa59d,	// (0x00068aa2) main_notes_pane

0xa27d,	// (0x00068782) main_pec_pane

0xa27d,	// (0x00068782) main_phob_pane

0xa27d,	// (0x00068782) main_pinb_pane

0xa27d,	// (0x00068782) main_postcard_pane

0xa27d,	// (0x00068782) main_qdial_pane

0xab7a,	// (0x0006907f) main_skin_pane

0xa27d,	// (0x00068782) main_smil2_pane

0xab7a,	// (0x0006907f) main_smil_pane

0xab7a,	// (0x0006907f) main_video_pane

0xab7a,	// (0x0006907f) main_video_tele_pane

0xa4d8,	// (0x000689dd) main_viewer_pane_ParamLimits

0xa4d8,	// (0x000689dd) main_viewer_pane

0xab7a,	// (0x0006907f) main_vorec_pane

0x4169,	// (0x0006266e) popup_blid_sat_info_window_ParamLimits

0x4169,	// (0x0006266e) popup_blid_sat_info_window

0x418f,	// (0x00062694) popup_dyc_status_message_window_ParamLimits

0x418f,	// (0x00062694) popup_dyc_status_message_window

0x419f,	// (0x000626a4) popup_grid_large_graphic_window_ParamLimits

0x419f,	// (0x000626a4) popup_grid_large_graphic_window

0x4234,	// (0x00062739) popup_loc_request_window_ParamLimits

0x4234,	// (0x00062739) popup_loc_request_window

0x428d,	// (0x00062792) popup_wml_address_window_ParamLimits

0x428d,	// (0x00062792) popup_wml_address_window

0x3fe1,	// (0x000624e6) call_muted_g1

0x3ca0,	// (0x000621a5) popup_call_audio_conf_window_ParamLimits

0x3ca0,	// (0x000621a5) popup_call_audio_conf_window

0x3ff1,	// (0x000624f6) popup_call_audio_first_window_ParamLimits

0x3ff1,	// (0x000624f6) popup_call_audio_first_window

0x4031,	// (0x00062536) popup_call_audio_in_window_ParamLimits

0x4031,	// (0x00062536) popup_call_audio_in_window

0x4055,	// (0x0006255a) popup_call_audio_out_window_ParamLimits

0x4055,	// (0x0006255a) popup_call_audio_out_window

0x4077,	// (0x0006257c) popup_call_audio_second_window_ParamLimits

0x4077,	// (0x0006257c) popup_call_audio_second_window

0x40a7,	// (0x000625ac) popup_call_audio_wait_window_ParamLimits

0x40a7,	// (0x000625ac) popup_call_audio_wait_window

0x40c8,	// (0x000625cd) popup_number_entry_window_ParamLimits

0x40c8,	// (0x000625cd) popup_number_entry_window

0x9e35,	// (0x0006833a) bg_popup_call_pane_cp05_ParamLimits

0x9e35,	// (0x0006833a) bg_popup_call_pane_cp05

0x9e55,	// (0x0006835a) popup_number_entry_window_t1

0x9e68,	// (0x0006836d) popup_number_entry_window_t2

0x9e7a,	// (0x0006837f) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0006d5b4) popup_number_entry_window_t

0x9ec1,	// (0x000683c6) text_title_cp2

0x9ed4,	// (0x000683d9) bg_popup_call_pane_cp_ParamLimits

0x9ed4,	// (0x000683d9) bg_popup_call_pane_cp

0x9ee2,	// (0x000683e7) call_thumbnail_pane

0x9eea,	// (0x000683ef) popup_call_audio_in_window_g1_ParamLimits

0x9eea,	// (0x000683ef) popup_call_audio_in_window_g1

0x9ef6,	// (0x000683fb) popup_call_audio_in_window_g2_ParamLimits

0x9ef6,	// (0x000683fb) popup_call_audio_in_window_g2

0x9f02,	// (0x00068407) popup_call_audio_in_window_g3_ParamLimits

0x9f02,	// (0x00068407) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0006d5bd) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0006d5bd) popup_call_audio_in_window_g

0x9f0e,	// (0x00068413) popup_call_audio_in_window_t1_ParamLimits

0x9f0e,	// (0x00068413) popup_call_audio_in_window_t1

0x9f2a,	// (0x0006842f) popup_call_audio_in_window_t2_ParamLimits

0x9f2a,	// (0x0006842f) popup_call_audio_in_window_t2

0x9f46,	// (0x0006844b) popup_call_audio_in_window_t3_ParamLimits

0x9f46,	// (0x0006844b) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0006d5c4) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0006d5c4) popup_call_audio_in_window_t

0x9ed4,	// (0x000683d9) bg_popup_call_pane_cp01_ParamLimits

0x9ed4,	// (0x000683d9) bg_popup_call_pane_cp01

0x9ee2,	// (0x000683e7) call_thumbnail_pane_cp02

0x9f59,	// (0x0006845e) call_type_pane_cp022

0x9f61,	// (0x00068466) popup_call_audio_out_window_g1_ParamLimits

0x9f61,	// (0x00068466) popup_call_audio_out_window_g1

0x9f73,	// (0x00068478) popup_call_audio_out_window_g2_ParamLimits

0x9f73,	// (0x00068478) popup_call_audio_out_window_g2

0x9f7f,	// (0x00068484) popup_call_audio_out_window_g3_ParamLimits

0x9f7f,	// (0x00068484) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0006d5cb) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0006d5cb) popup_call_audio_out_window_g

0x9f91,	// (0x00068496) popup_call_audio_out_window_t1_ParamLimits

0x9f91,	// (0x00068496) popup_call_audio_out_window_t1

0x9fa9,	// (0x000684ae) popup_call_audio_out_window_t2_ParamLimits

0x9fa9,	// (0x000684ae) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0006d5d2) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0006d5d2) popup_call_audio_out_window_t

0x9fbe,	// (0x000684c3) bg_popup_call_pane_ParamLimits

0x9fbe,	// (0x000684c3) bg_popup_call_pane

0x0dde,	// (0x0005f2e3) call_thumbnail_pane_cp_ParamLimits

0x0dde,	// (0x0005f2e3) call_thumbnail_pane_cp

0xa042,	// (0x00068547) call_type_pane_cp01_ParamLimits

0xa042,	// (0x00068547) call_type_pane_cp01

0xa086,	// (0x0006858b) popup_call_audio_first_window_g1_ParamLimits

0xa086,	// (0x0006858b) popup_call_audio_first_window_g1

0xa0d2,	// (0x000685d7) popup_call_audio_first_window_g2_ParamLimits

0xa0d2,	// (0x000685d7) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0006d5d7) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0006d5d7) popup_call_audio_first_window_g

0xa116,	// (0x0006861b) popup_call_audio_first_window_t1_ParamLimits

0xa116,	// (0x0006861b) popup_call_audio_first_window_t1

0xa1c2,	// (0x000686c7) popup_call_audio_first_window_t4_ParamLimits

0xa1c2,	// (0x000686c7) popup_call_audio_first_window_t4

0xa24e,	// (0x00068753) popup_call_audio_first_window_t5_ParamLimits

0xa24e,	// (0x00068753) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0006d5dc) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0006d5dc) popup_call_audio_first_window_t

0xa27d,	// (0x00068782) bg_popup_call_pane_cp02

0xa287,	// (0x0006878c) call_type_pane_cp023

0xa28f,	// (0x00068794) popup_call_audio_wait_window_g1

0xa297,	// (0x0006879c) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0006d5e3) popup_call_audio_wait_window_g

0xa29f,	// (0x000687a4) popup_call_audio_wait_window_t3

0xa2ad,	// (0x000687b2) bg_popup_call_pane_cp03_ParamLimits

0xa2ad,	// (0x000687b2) bg_popup_call_pane_cp03

0xa30d,	// (0x00068812) call_thumbnail_pane_cp011_ParamLimits

0xa30d,	// (0x00068812) call_thumbnail_pane_cp011

0xa319,	// (0x0006881e) call_type_pane_cp034_ParamLimits

0xa319,	// (0x0006881e) call_type_pane_cp034

0xa355,	// (0x0006885a) popup_call_audio_second_window_g1_ParamLimits

0xa355,	// (0x0006885a) popup_call_audio_second_window_g1

0xa391,	// (0x00068896) popup_call_audio_second_window_g2_ParamLimits

0xa391,	// (0x00068896) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0006d5e8) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0006d5e8) popup_call_audio_second_window_g

0xa3cd,	// (0x000688d2) popup_call_audio_second_window_t1_ParamLimits

0xa3cd,	// (0x000688d2) popup_call_audio_second_window_t1

0xa44e,	// (0x00068953) popup_call_audio_second_window_t2_ParamLimits

0xa44e,	// (0x00068953) popup_call_audio_second_window_t2

0xa484,	// (0x00068989) popup_call_audio_second_window_t3_ParamLimits

0xa484,	// (0x00068989) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0006d5ed) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0006d5ed) popup_call_audio_second_window_t

0xa27d,	// (0x00068782) bg_popup_call_pane_cp04

0xa4ba,	// (0x000689bf) list_conf_pane

0xa4c2,	// (0x000689c7) popup_call_audio_conf_window_t1

0xa4d0,	// (0x000689d5) call_thumbnail_pane_g1

0xa4d8,	// (0x000689dd) bg_pinb_pane_ParamLimits

0xa4d8,	// (0x000689dd) bg_pinb_pane

0xa4e6,	// (0x000689eb) find_pinb_pane

0xa4ef,	// (0x000689f4) listscroll_pinb_pane_ParamLimits

0xa4ef,	// (0x000689f4) listscroll_pinb_pane

0xa4fe,	// (0x00068a03) pinb_bg_pane_g1

0x0e02,	// (0x0005f307) pinb_bg_pane_g2

0x0e0e,	// (0x0005f313) pinb_bg_pane_g3

0x0e1a,	// (0x0005f31f) pinb_bg_pane_g4

0x0e26,	// (0x0005f32b) pinb_bg_pane_g5

0x0e32,	// (0x0005f337) pinb_bg_pane_g6

0x0e3d,	// (0x0005f342) pinb_bg_pane_g7

0x0e48,	// (0x0005f34d) pinb_bg_pane_g8

0x0e53,	// (0x0005f358) pinb_bg_pane_g9

0x0e5d,	// (0x0005f362) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0006d5f4) pinb_bg_pane_g

0x0e7a,	// (0x0005f37f) grid_pinb_pane

0x0e85,	// (0x0005f38a) list_pinb_pane

0x0e90,	// (0x0005f395) scroll_pane_cp01_ParamLimits

0x0e90,	// (0x0005f395) scroll_pane_cp01

0xa508,	// (0x00068a0d) find_pinb_pane_g1_ParamLimits

0xa508,	// (0x00068a0d) find_pinb_pane_g1

0xa520,	// (0x00068a25) find_pinb_pane_t1

0xa532,	// (0x00068a37) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0006d60e) find_pinb_pane_t

0xa547,	// (0x00068a4c) input_focus_pane_cp01_ParamLimits

0xa547,	// (0x00068a4c) input_focus_pane_cp01

0x0ea2,	// (0x0005f3a7) cell_pinb_pane_ParamLimits

0x0ea2,	// (0x0005f3a7) cell_pinb_pane

0x0ec7,	// (0x0005f3cc) cell_pinb_pane_g1_ParamLimits

0x0ec7,	// (0x0005f3cc) cell_pinb_pane_g1

0x0edc,	// (0x0005f3e1) cell_pinb_pane_g2_ParamLimits

0x0edc,	// (0x0005f3e1) cell_pinb_pane_g2

0xa553,	// (0x00068a58) cell_pinb_pane_g3_ParamLimits

0xa553,	// (0x00068a58) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0006d613) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0006d613) cell_pinb_pane_g

0xa27d,	// (0x00068782) grid_highlight_pane_cp01

0x0ee8,	// (0x0005f3ed) list_pinb_item_pane_ParamLimits

0x0ee8,	// (0x0005f3ed) list_pinb_item_pane

0xa27d,	// (0x00068782) list_highlight_pane_cp02

0x0f06,	// (0x0005f40b) list_pinb_item_pane_g1_ParamLimits

0x0f06,	// (0x0005f40b) list_pinb_item_pane_g1

0x0f13,	// (0x0005f418) list_pinb_item_pane_g2_ParamLimits

0x0f13,	// (0x0005f418) list_pinb_item_pane_g2

0x0f1f,	// (0x0005f424) list_pinb_item_pane_g3_ParamLimits

0x0f1f,	// (0x0005f424) list_pinb_item_pane_g3

0x0f30,	// (0x0005f435) list_pinb_item_pane_g4_ParamLimits

0x0f30,	// (0x0005f435) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0006d61a) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0006d61a) list_pinb_item_pane_g

0x0f3c,	// (0x0005f441) list_pinb_item_pane_t1_ParamLimits

0x0f3c,	// (0x0005f441) list_pinb_item_pane_t1

0x0f6d,	// (0x0005f472) calc_display_pane

0x0f8b,	// (0x0005f490) calc_paper_pane

0x0fa7,	// (0x0005f4ac) grid_calc_pane

0xa27d,	// (0x00068782) bg_list_pane_cp01

0x0fd3,	// (0x0005f4d8) clock_g1

0x0fdb,	// (0x0005f4e0) clock_g2

0x0001,

0xf11e,	// (0x0006d623) clock_g

0x0fe5,	// (0x0005f4ea) clock_t1_ParamLimits

0x0fe5,	// (0x0005f4ea) clock_t1

0x0ffa,	// (0x0005f4ff) clock_t2_ParamLimits

0x0ffa,	// (0x0005f4ff) clock_t2

0x100c,	// (0x0005f511) clock_t3_ParamLimits

0x100c,	// (0x0005f511) clock_t3

0x101e,	// (0x0005f523) clock_t4_ParamLimits

0x101e,	// (0x0005f523) clock_t4

0x1030,	// (0x0005f535) clock_t5_ParamLimits

0x1030,	// (0x0005f535) clock_t5

0x1045,	// (0x0005f54a) clock_t6_ParamLimits

0x1045,	// (0x0005f54a) clock_t6

0x1057,	// (0x0005f55c) clock_t7_ParamLimits

0x1057,	// (0x0005f55c) clock_t7

0x1069,	// (0x0005f56e) clock_t8_ParamLimits

0x1069,	// (0x0005f56e) clock_t8

0x107f,	// (0x0005f584) clock_t9_ParamLimits

0x107f,	// (0x0005f584) clock_t9

0x0008,

0xf123,	// (0x0006d628) clock_t_ParamLimits

0xf123,	// (0x0006d628) clock_t

0xa55f,	// (0x00068a64) popup_clock_analogue_window_cp02

0xa55f,	// (0x00068a64) popup_clock_digital_window_cp01

0xa567,	// (0x00068a6c) listscroll_help_pane

0xa27d,	// (0x00068782) phob_pre_status_pane

0xa571,	// (0x00068a76) grid_qdial_pane

0xa4d8,	// (0x000689dd) listscroll_mce_pane

0xa4d8,	// (0x000689dd) bg_notes_pane

0xa57b,	// (0x00068a80) list_notes_pane

0x1095,	// (0x0005f59a) scroll_pane_cp06

0xa589,	// (0x00068a8e) bg_calc_paper_pane

0x10a4,	// (0x0005f5a9) list_calc_pane

0xa59d,	// (0x00068aa2) bg_calc_display_pane

0x10be,	// (0x0005f5c3) calc_display_pane_t1

0x10d3,	// (0x0005f5d8) calc_display_pane_t2

0x10e8,	// (0x0005f5ed) calc_display_pane_t3

0x0002,

0xf136,	// (0x0006d63b) calc_display_pane_t

0x10fa,	// (0x0005f5ff) cell_calc_pane_ParamLimits

0x10fa,	// (0x0005f5ff) cell_calc_pane

0xa5a9,	// (0x00068aae) bg_calc_paper_pane_g1

0xa5b5,	// (0x00068aba) bg_calc_paper_pane_g2

0xa5c1,	// (0x00068ac6) bg_calc_paper_pane_g3

0xa5cd,	// (0x00068ad2) bg_calc_paper_pane_g4

0xa5d9,	// (0x00068ade) bg_calc_paper_pane_g5

0x1129,	// (0x0005f62e) bg_calc_paper_pane_g6

0x113a,	// (0x0005f63f) bg_calc_paper_pane_g7

0x114b,	// (0x0005f650) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0006d642) bg_calc_paper_pane_g

0x115c,	// (0x0005f661) calc_bg_paper_pane_g9

0x116d,	// (0x0005f672) list_calc_item_pane_ParamLimits

0x116d,	// (0x0005f672) list_calc_item_pane

0xa5e5,	// (0x00068aea) list_calc_item_pane_g1

0x118e,	// (0x0005f693) list_calc_item_pane_t1_ParamLimits

0x118e,	// (0x0005f693) list_calc_item_pane_t1

0x11a0,	// (0x0005f6a5) list_calc_item_pane_t2_ParamLimits

0x11a0,	// (0x0005f6a5) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0006d653) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0006d653) list_calc_item_pane_t

0xa5f2,	// (0x00068af7) cell_calc_pane_g1

0xa5fc,	// (0x00068b01) grid_highlight_pane_cp02

0xd37c,	// (0x0006b881) bg_calc_display_pane_g1

0x11d0,	// (0x0005f6d5) bg_calc_display_pane_g2

0xd385,	// (0x0006b88a) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0006d65d) bg_calc_display_pane_g

0x11da,	// (0x0005f6df) cell_qdial_pane_ParamLimits

0x11da,	// (0x0005f6df) cell_qdial_pane

0x11f0,	// (0x0005f6f5) cell_qdial_pane_g1_ParamLimits

0x11f0,	// (0x0005f6f5) cell_qdial_pane_g1

0x11fd,	// (0x0005f702) cell_qdial_pane_g2_ParamLimits

0x11fd,	// (0x0005f702) cell_qdial_pane_g2

0xa61e,	// (0x00068b23) cell_qdial_pane_g3_ParamLimits

0xa61e,	// (0x00068b23) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0006d664) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0006d664) cell_qdial_pane_g

0x121b,	// (0x0005f720) cell_qdial_pane_t1_ParamLimits

0x121b,	// (0x0005f720) cell_qdial_pane_t1

0x1233,	// (0x0005f738) cell_qdial_pane_t2_ParamLimits

0x1233,	// (0x0005f738) cell_qdial_pane_t2

0x1246,	// (0x0005f74b) cell_qdial_pane_t3_ParamLimits

0x1246,	// (0x0005f74b) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0006d66d) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0006d66d) cell_qdial_pane_t

0xa27d,	// (0x00068782) grid_highlight_pane_cp04

0xa62a,	// (0x00068b2f) thumbnail_qdial_pane_ParamLimits

0xa62a,	// (0x00068b2f) thumbnail_qdial_pane

0xa686,	// (0x00068b8b) list_help_pane

0xa68f,	// (0x00068b94) scroll_pane_cp02

0x1259,	// (0x0005f75e) help_list_pane_t1_ParamLimits

0x1259,	// (0x0005f75e) help_list_pane_t1

0x1280,	// (0x0005f785) bg_notes_pane_g2

0x1288,	// (0x0005f78d) bg_notes_pane_g3

0x1290,	// (0x0005f795) notes_bg_pane_g1

0x1298,	// (0x0005f79d) notes_bg_pane_g4

0x12a0,	// (0x0005f7a5) notes_bg_pane_g5

0x12a8,	// (0x0005f7ad) notes_bg_pane_g6

0x12b0,	// (0x0005f7b5) notes_bg_pane_g7

0x12b8,	// (0x0005f7bd) notes_bg_pane_g8

0x12c0,	// (0x0005f7c5) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0006d68b) notes_bg_pane_g

0x12c8,	// (0x0005f7cd) list_notes_text_pane_ParamLimits

0x12c8,	// (0x0005f7cd) list_notes_text_pane

0xaacd,	// (0x00068fd2) list_notes_text_pane_g1

0x12f0,	// (0x0005f7f5) list_notes_text_pane_t1

0x12fe,	// (0x0005f803) listscroll_cale_week_pane

0x132a,	// (0x0005f82f) bg_cale_heading_pane

0x1353,	// (0x0005f858) bg_cale_pane_cp01

0x1375,	// (0x0005f87a) cale_week_corner_pane

0x1394,	// (0x0005f899) cale_week_day_heading_pane

0x13c2,	// (0x0005f8c7) cale_week_scroll_pane_g1

0x13e6,	// (0x0005f8eb) cale_week_scroll_pane_g2

0x13fe,	// (0x0005f903) cale_week_scroll_pane_g3

0x1416,	// (0x0005f91b) cale_week_scroll_pane_g4

0x142e,	// (0x0005f933) cale_week_scroll_pane_g5

0x1446,	// (0x0005f94b) cale_week_scroll_pane_g6

0x1466,	// (0x0005f96b) cale_week_scroll_pane_g7

0x1486,	// (0x0005f98b) cale_week_scroll_pane_g8

0x14a6,	// (0x0005f9ab) cale_week_scroll_pane_g9

0x14c3,	// (0x0005f9c8) cale_week_scroll_pane_g10

0x14e0,	// (0x0005f9e5) cale_week_scroll_pane_g11

0x14ff,	// (0x0005fa04) cale_week_scroll_pane_g12

0x1524,	// (0x0005fa29) cale_week_scroll_pane_g13

0x154d,	// (0x0005fa52) cale_week_scroll_pane_g14

0x1576,	// (0x0005fa7b) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0006d69a) cale_week_scroll_pane_g

0x15bf,	// (0x0005fac4) cale_week_time_pane

0x15df,	// (0x0005fae4) grid_cale_week_pane

0xab02,	// (0x00069007) scroll_pane_cp08

0x1610,	// (0x0005fb15) cell_cale_week_pane_ParamLimits

0x1610,	// (0x0005fb15) cell_cale_week_pane

0x16a0,	// (0x0005fba5) cale_week_day_heading_pane_t1

0x16c8,	// (0x0005fbcd) cale_week_day_heading_pane_t2

0x16f5,	// (0x0005fbfa) cale_week_day_heading_pane_t3

0x1722,	// (0x0005fc27) cale_week_day_heading_pane_t4

0x174f,	// (0x0005fc54) cale_week_day_heading_pane_t5

0x177c,	// (0x0005fc81) cale_week_day_heading_pane_t6

0x17a9,	// (0x0005fcae) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0006d6bb) cale_week_day_heading_pane_t

0xab1f,	// (0x00069024) bg_cale_side_pane

0x17d1,	// (0x0005fcd6) cale_week_time_pane_t1

0x17f5,	// (0x0005fcfa) cale_week_time_pane_t2

0x1819,	// (0x0005fd1e) cale_week_time_pane_t3

0x183d,	// (0x0005fd42) cale_week_time_pane_t4

0x1861,	// (0x0005fd66) cale_week_time_pane_t5

0x1887,	// (0x0005fd8c) cale_week_time_pane_t6

0x18af,	// (0x0005fdb4) cale_week_time_pane_t7

0x18db,	// (0x0005fde0) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0006d6ca) cale_week_time_pane_t

0x190b,	// (0x0005fe10) cell_cale_week_pane_g2

0x192f,	// (0x0005fe34) cell_cale_week_pane_g3_ParamLimits

0x192f,	// (0x0005fe34) cell_cale_week_pane_g3

0xab2d,	// (0x00069032) grid_highlight_pane_cp07

0xab35,	// (0x0006903a) listscroll_gms_pane

0xab3f,	// (0x00069044) grid_gms_pane

0xab48,	// (0x0006904d) listscroll_gms_pane_g1

0xab50,	// (0x00069055) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0006d6db) listscroll_gms_pane_g

0x1947,	// (0x0005fe4c) scroll_pane_cp010

0x1952,	// (0x0005fe57) cell_gms_pane_ParamLimits

0x1952,	// (0x0005fe57) cell_gms_pane

0x1965,	// (0x0005fe6a) cell_gms_pane_g1

0xab58,	// (0x0006905d) cell_gms_pane_g2

0xab60,	// (0x00069065) cell_gms_pane_g3

0xab69,	// (0x0006906e) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0006d6e0) cell_gms_pane_g

0xab72,	// (0x00069077) grid_highlight_pane_cp09

0x3f89,	// (0x0006248e) phob_pre_status_pane_g1

0x3f91,	// (0x00062496) phob_pre_status_pane_g2

0x3f99,	// (0x0006249e) phob_pre_status_pane_g3

0x3fa1,	// (0x000624a6) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0006dacb) phob_pre_status_pane_g

0x3fb1,	// (0x000624b6) phob_pre_status_pane_t1

0x3fc1,	// (0x000624c6) phob_pre_status_pane_t2

0x3fd1,	// (0x000624d6) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0006dad6) phob_pre_status_pane_t

0xab7a,	// (0x0006907f) bg_list_pane_cp05

0x1975,	// (0x0005fe7a) grid_vorec_pane

0x197f,	// (0x0005fe84) vorec_t1

0x198d,	// (0x0005fe92) vorec_t2

0x199b,	// (0x0005fea0) vorec_t3

0x19a9,	// (0x0005feae) vorec_t4

0x9dd6,	// (0x000682db) vorec_t5

0x9de4,	// (0x000682e9) vorec_t6

0x0004,

0xf1e4,	// (0x0006d6e9) vorec_t

0x9df2,	// (0x000682f7) wait_bar_pane_cp01

0x19c5,	// (0x0005feca) cell_vorec_pane_ParamLimits

0x19c5,	// (0x0005feca) cell_vorec_pane

0x19da,	// (0x0005fedf) cell_vorec_pane_g1

0xa27d,	// (0x00068782) grid_highlight_pane_cp05

0x19f2,	// (0x0005fef7) cams_zoom_pane

0x19fe,	// (0x0005ff03) image_vga_pane

0x1a0d,	// (0x0005ff12) main_camera_pane_g1

0x1a1b,	// (0x0005ff20) main_camera_pane_g2

0x1a27,	// (0x0005ff2c) main_camera_pane_g3

0x1a35,	// (0x0005ff3a) main_camera_pane_g4

0x1a43,	// (0x0005ff48) main_camera_pane_g5

0x1a51,	// (0x0005ff56) main_camera_pane_g6

0x1a5f,	// (0x0005ff64) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0006d6f4) main_camera_pane_g

0x1a6d,	// (0x0005ff72) main_camera_pane_t1

0x1a7f,	// (0x0005ff84) main_camera_pane_t2

0x0001,

0xf200,	// (0x0006d705) main_camera_pane_t

0x1aa2,	// (0x0005ffa7) cams_zoom_pane_cp_ParamLimits

0x1aa2,	// (0x0005ffa7) cams_zoom_pane_cp

0x1ac6,	// (0x0005ffcb) image_cif_pane_ParamLimits

0x1ac6,	// (0x0005ffcb) image_cif_pane

0x1ae4,	// (0x0005ffe9) image_subqcif_pane

0x1aee,	// (0x0005fff3) main_video_pane_g1_ParamLimits

0x1aee,	// (0x0005fff3) main_video_pane_g1

0x1b0e,	// (0x00060013) main_video_pane_g2_ParamLimits

0x1b0e,	// (0x00060013) main_video_pane_g2

0x1b3e,	// (0x00060043) main_video_pane_g3_ParamLimits

0x1b3e,	// (0x00060043) main_video_pane_g3

0x1b67,	// (0x0006006c) main_video_pane_g4_ParamLimits

0x1b67,	// (0x0006006c) main_video_pane_g4

0x1b90,	// (0x00060095) main_video_pane_g5_ParamLimits

0x1b90,	// (0x00060095) main_video_pane_g5

0xab8e,	// (0x00069093) main_video_pane_g6_ParamLimits

0xab8e,	// (0x00069093) main_video_pane_g6

0x0006,

0xf205,	// (0x0006d70a) main_video_pane_g_ParamLimits

0xf205,	// (0x0006d70a) main_video_pane_g

0x1bb2,	// (0x000600b7) main_video_pane_t1_ParamLimits

0x1bb2,	// (0x000600b7) main_video_pane_t1

0xaba8,	// (0x000690ad) cams_zoom_pane_g1

0xabb1,	// (0x000690b6) cams_zoom_pane_g2

0xabba,	// (0x000690bf) cams_zoom_pane_g3

0xabc3,	// (0x000690c8) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0006d719) cams_zoom_pane_g

0x1bfc,	// (0x00060101) grid_cams_pane

0x1c0a,	// (0x0006010f) linegrid_cams_pane

0x1c16,	// (0x0006011b) cell_cams_pane_ParamLimits

0x1c16,	// (0x0006011b) cell_cams_pane

0xabcc,	// (0x000690d1) cams_burst_image_pane

0xabd4,	// (0x000690d9) cell_cams_pane_g1

0xa27d,	// (0x00068782) grid_highlight_pane_cp03

0xa5f2,	// (0x00068af7) mp_bg_pane_g1

0xa27d,	// (0x00068782) bg_list_pane_cp03

0xc918,	// (0x0006ae1d) bg_mp_pane

0xc920,	// (0x0006ae25) grid_mp_pane

0xc928,	// (0x0006ae2d) media_player_g1

0xc932,	// (0x0006ae37) media_player_t1

0xc940,	// (0x0006ae45) media_player_t2

0xc94e,	// (0x0006ae53) media_player_t3

0xc95c,	// (0x0006ae61) media_player_t4

0xc96a,	// (0x0006ae6f) media_player_t5

0xc978,	// (0x0006ae7d) media_player_t6

0xc986,	// (0x0006ae8b) media_player_t7

0x0006,

0xf5b0,	// (0x0006dab5) media_player_t

0xc994,	// (0x0006ae99) wait_bar_pane_cp02

0xf595,	// (0x0006da9a) main_usb_pane_t

0x3f80,	// (0x00062485) cell_mp_pane

0xa5f2,	// (0x00068af7) cell_mp_pane_g1

0xa27d,	// (0x00068782) grid_highlight_pane_cp06

0xabdc,	// (0x000690e1) grid_skin_colour_pane

0xabe4,	// (0x000690e9) list_highlight_pane_cp03

0x1d42,	// (0x00060247) skin_g1

0xabec,	// (0x000690f1) skin_t1

0xabfb,	// (0x00069100) skin_t2

0x0001,

0xf249,	// (0x0006d74e) skin_t

0x1d4c,	// (0x00060251) cell_skin_colour_pane_ParamLimits

0x1d4c,	// (0x00060251) cell_skin_colour_pane

0xac09,	// (0x0006910e) cell_skin_colour_pane_g1

0x1dcc,	// (0x000602d1) call_video_g1_ParamLimits

0x1dcc,	// (0x000602d1) call_video_g1

0x1ddc,	// (0x000602e1) call_video_g2_ParamLimits

0x1ddc,	// (0x000602e1) call_video_g2

0x0001,

0xf24e,	// (0x0006d753) call_video_g_ParamLimits

0xf24e,	// (0x0006d753) call_video_g

0x1e2c,	// (0x00060331) call_video_uplink_pane_cp1_ParamLimits

0x1e2c,	// (0x00060331) call_video_uplink_pane_cp1

0xac1b,	// (0x00069120) call_video_uplink_pane_cp2

0x1efa,	// (0x000603ff) video_down_crop_pane_ParamLimits

0x1efa,	// (0x000603ff) video_down_crop_pane

0x1fec,	// (0x000604f1) video_down_pane_ParamLimits

0x1fec,	// (0x000604f1) video_down_pane

0xac23,	// (0x00069128) video_down_subqcif_pane_ParamLimits

0xac23,	// (0x00069128) video_down_subqcif_pane

0xac3d,	// (0x00069142) video_down_subqcif_pane_cp_ParamLimits

0xac3d,	// (0x00069142) video_down_subqcif_pane_cp

0xac65,	// (0x0006916a) im_reading_pane_ParamLimits

0xac65,	// (0x0006916a) im_reading_pane

0x2109,	// (0x0006060e) im_writing_pane_ParamLimits

0x2109,	// (0x0006060e) im_writing_pane

0x2127,	// (0x0006062c) im_reading_pane_t1

0xac7f,	// (0x00069184) list_im_pane

0xac90,	// (0x00069195) scroll_pane_cp07

0x2169,	// (0x0006066e) im_writing_pane_t1_ParamLimits

0x2169,	// (0x0006066e) im_writing_pane_t1

0xaca9,	// (0x000691ae) im_writing_pane_t2_ParamLimits

0xaca9,	// (0x000691ae) im_writing_pane_t2

0x0001,

0xf258,	// (0x0006d75d) im_writing_pane_t_ParamLimits

0xf258,	// (0x0006d75d) im_writing_pane_t

0xa27d,	// (0x00068782) input_focus_pane_cp04

0xa27d,	// (0x00068782) input_focus_pane_cp05

0x217b,	// (0x00060680) list_im_single_pane_ParamLimits

0x217b,	// (0x00060680) list_im_single_pane

0x2194,	// (0x00060699) list_single_im_pane_t1

0x3f44,	// (0x00062449) blid_accuracy_pane

0x3f4c,	// (0x00062451) blid_compass_pane

0x3f56,	// (0x0006245b) main_location_t1

0x3f64,	// (0x00062469) main_location_t2

0x3f72,	// (0x00062477) main_location_t3

0x0002,

0xf5bf,	// (0x0006dac4) main_location_t

0xa27d,	// (0x00068782) aid_levels_location

0xa5f2,	// (0x00068af7) blid_accuracy_pane_g1

0xa5f2,	// (0x00068af7) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0006d7bf) blid_accuracy_pane_g

0xacf1,	// (0x000691f6) wml_content_pane

0xad2f,	// (0x00069234) wml_button_pane_ParamLimits

0xad2f,	// (0x00069234) wml_button_pane

0x21a3,	// (0x000606a8) wml_list_single_large_pane_ParamLimits

0x21a3,	// (0x000606a8) wml_list_single_large_pane

0x21c5,	// (0x000606ca) wml_list_single_medium_pane_ParamLimits

0x21c5,	// (0x000606ca) wml_list_single_medium_pane

0x21e8,	// (0x000606ed) wml_list_single_small_pane_ParamLimits

0x21e8,	// (0x000606ed) wml_list_single_small_pane

0xad43,	// (0x00069248) wml_selection_box_pane_ParamLimits

0xad43,	// (0x00069248) wml_selection_box_pane

0xad56,	// (0x0006925b) wml_list_single_pane_t1

0xad65,	// (0x0006926a) wml_list_single_medium_pane_t1

0xad74,	// (0x00069279) wml_list_single_large_pane_t1

0xad83,	// (0x00069288) input_focus_pane_cp02_ParamLimits

0xad83,	// (0x00069288) input_focus_pane_cp02

0xad96,	// (0x0006929b) wml_selection_box_pane_g1

0xad9f,	// (0x000692a4) wml_selection_box_pane_t1_ParamLimits

0xad9f,	// (0x000692a4) wml_selection_box_pane_t1

0xa4d8,	// (0x000689dd) bg_wml_button_pane_ParamLimits

0xa4d8,	// (0x000689dd) bg_wml_button_pane

0xadb7,	// (0x000692bc) wml_button_pane_g1

0xadbf,	// (0x000692c4) wml_button_pane_t1

0xadb7,	// (0x000692bc) wml_button_bg_pane_g1

0xadcf,	// (0x000692d4) wml_button_bg_pane_g2

0xadd7,	// (0x000692dc) wml_button_bg_pane_g3

0xaddf,	// (0x000692e4) wml_button_bg_pane_g4

0xade7,	// (0x000692ec) wml_button_bg_pane_g5

0xadef,	// (0x000692f4) wml_button_bg_pane_g6

0xadf7,	// (0x000692fc) wml_button_bg_pane_g7

0xadff,	// (0x00069304) wml_button_bg_pane_g8

0xae07,	// (0x0006930c) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0006d762) wml_button_bg_pane_g

0x2210,	// (0x00060715) bg_list_pane_cp02

0xae0f,	// (0x00069314) mce_header_pane_ParamLimits

0xae0f,	// (0x00069314) mce_header_pane

0xae25,	// (0x0006932a) mce_icon_pane

0xae25,	// (0x0006932a) mce_image_pane

0xae2e,	// (0x00069333) mce_text_pane_ParamLimits

0xae2e,	// (0x00069333) mce_text_pane

0x221a,	// (0x0006071f) scroll_pane_cp03

0xad27,	// (0x0006922c) scroll_pane_cp04

0xae41,	// (0x00069346) scroll_pane_cp05_ParamLimits

0xae41,	// (0x00069346) scroll_pane_cp05

0x2224,	// (0x00060729) mce_header_field_pane_ParamLimits

0x2224,	// (0x00060729) mce_header_field_pane

0x2246,	// (0x0006074b) mce_header_field_pane_2_ParamLimits

0x2246,	// (0x0006074b) mce_header_field_pane_2

0x225c,	// (0x00060761) mce_header_field_pane_3

0x2264,	// (0x00060769) list_single_mce_message_pane_ParamLimits

0x2264,	// (0x00060769) list_single_mce_message_pane

0x2283,	// (0x00060788) list_single_mce_smart_pane_ParamLimits

0x2283,	// (0x00060788) list_single_mce_smart_pane

0xae4d,	// (0x00069352) input_focus_pane_cp03

0xae56,	// (0x0006935b) list_header_data_pane

0x22ad,	// (0x000607b2) mce_header_field_pane_t1

0x22bd,	// (0x000607c2) list_single_mce_header_pane_ParamLimits

0x22bd,	// (0x000607c2) list_single_mce_header_pane

0xae5e,	// (0x00069363) list_single_mce_header_pane_t1

0xae6d,	// (0x00069372) list_single_mce_message_pane_g1

0xae75,	// (0x0006937a) list_single_mce_message_pane_t1

0x2301,	// (0x00060806) bg_cale_heading_pane_cp01_ParamLimits

0x2301,	// (0x00060806) bg_cale_heading_pane_cp01

0xae83,	// (0x00069388) bg_cale_pane_cp02_ParamLimits

0xae83,	// (0x00069388) bg_cale_pane_cp02

0x2353,	// (0x00060858) cale_month_corner_pane

0x2372,	// (0x00060877) cale_month_day_heading_pane_ParamLimits

0x2372,	// (0x00060877) cale_month_day_heading_pane

0x23d4,	// (0x000608d9) cale_month_pane_g1_ParamLimits

0x23d4,	// (0x000608d9) cale_month_pane_g1

0x241b,	// (0x00060920) cale_month_pane_g2_ParamLimits

0x241b,	// (0x00060920) cale_month_pane_g2

0x2453,	// (0x00060958) cale_month_pane_g3_ParamLimits

0x2453,	// (0x00060958) cale_month_pane_g3

0x24a7,	// (0x000609ac) cale_month_pane_g4_ParamLimits

0x24a7,	// (0x000609ac) cale_month_pane_g4

0x24fb,	// (0x00060a00) cale_month_pane_g5_ParamLimits

0x24fb,	// (0x00060a00) cale_month_pane_g5

0x254f,	// (0x00060a54) cale_month_pane_g6_ParamLimits

0x254f,	// (0x00060a54) cale_month_pane_g6

0x25b3,	// (0x00060ab8) cale_month_pane_g7_ParamLimits

0x25b3,	// (0x00060ab8) cale_month_pane_g7

0x2617,	// (0x00060b1c) cale_month_pane_g8_ParamLimits

0x2617,	// (0x00060b1c) cale_month_pane_g8

0x267b,	// (0x00060b80) cale_month_pane_g9_ParamLimits

0x267b,	// (0x00060b80) cale_month_pane_g9

0x26d5,	// (0x00060bda) cale_month_pane_g10_ParamLimits

0x26d5,	// (0x00060bda) cale_month_pane_g10

0x2727,	// (0x00060c2c) cale_month_pane_g11_ParamLimits

0x2727,	// (0x00060c2c) cale_month_pane_g11

0x2775,	// (0x00060c7a) cale_month_pane_g12_ParamLimits

0x2775,	// (0x00060c7a) cale_month_pane_g12

0x27c5,	// (0x00060cca) cale_month_pane_g13_ParamLimits

0x27c5,	// (0x00060cca) cale_month_pane_g13

0x000c,

0xf270,	// (0x0006d775) cale_month_pane_g_ParamLimits

0xf270,	// (0x0006d775) cale_month_pane_g

0x2815,	// (0x00060d1a) cale_month_week_pane

0x2835,	// (0x00060d3a) grid_cale_month_pane_ParamLimits

0x2835,	// (0x00060d3a) grid_cale_month_pane

0x288e,	// (0x00060d93) cale_month_day_heading_pane_t1

0x2910,	// (0x00060e15) cale_month_day_heading_pane_t2

0x2989,	// (0x00060e8e) cale_month_day_heading_pane_t3

0x2a02,	// (0x00060f07) cale_month_day_heading_pane_t4

0x2a7b,	// (0x00060f80) cale_month_day_heading_pane_t5

0x2afc,	// (0x00061001) cale_month_day_heading_pane_t6

0x2b85,	// (0x0006108a) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0006d790) cale_month_day_heading_pane_t

0xab1f,	// (0x00069024) bg_cale_side_pane_cp01

0x2c0e,	// (0x00061113) cale_month_week_pane_t1

0x2c27,	// (0x0006112c) cale_month_week_pane_t2

0x2c40,	// (0x00061145) cale_month_week_pane_t3

0x2c59,	// (0x0006115e) cale_month_week_pane_t4

0x2c72,	// (0x00061177) cale_month_week_pane_t5

0x2c8f,	// (0x00061194) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0006d79f) cale_month_week_pane_t

0x2cb2,	// (0x000611b7) cell_cale_month_pane_ParamLimits

0x2cb2,	// (0x000611b7) cell_cale_month_pane

0x2e0a,	// (0x0006130f) cell_cale_month_pane_g1

0x2e16,	// (0x0006131b) cell_cale_month_pane_t1_ParamLimits

0x2e16,	// (0x0006131b) cell_cale_month_pane_t1

0xab2d,	// (0x00069032) grid_highlight_pane_cp08

0xa5f2,	// (0x00068af7) main_smil_g1

0x2e42,	// (0x00061347) smil_status_pane

0xaec2,	// (0x000693c7) smil_text_pane

0xc836,	// (0x0006ad3b) bg_popup_call3_rect_pane_g8

0xc83e,	// (0x0006ad43) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0006da58) bg_popup_call3_rect_pane_g

0xca9c,	// (0x0006afa1) smil_status_volume_pane_g1

0xaecc,	// (0x000693d1) smil_status_pane_t1

0x438b,	// (0x00062890) volume_smil_pane

0xaee3,	// (0x000693e8) list_smil_text_pane

0x2e55,	// (0x0006135a) scroll_pane_cp011

0x2e60,	// (0x00061365) smil_text_list_pane_t1_ParamLimits

0x2e60,	// (0x00061365) smil_text_list_pane_t1

0x2eb4,	// (0x000613b9) aid_volume_smil_ParamLimits

0x2eb4,	// (0x000613b9) aid_volume_smil

0xa5f2,	// (0x00068af7) smil_volume_pane_g1

0xa5f2,	// (0x00068af7) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0006d7bf) smil_volume_pane_g

0x12fe,	// (0x0005f803) listscroll_cale_day_pane

0xaeed,	// (0x000693f2) bg_cale_pane

0xaf05,	// (0x0006940a) list_cale_pane

0xaf28,	// (0x0006942d) scroll_pane_cp09

0xaf39,	// (0x0006943e) cale_bg_pane_g1

0xaf41,	// (0x00069446) cale_bg_pane_g2

0xaf49,	// (0x0006944e) cale_bg_pane_g3

0xaf51,	// (0x00069456) cale_bg_pane_g4

0xaf59,	// (0x0006945e) cale_bg_pane_g5

0xaf61,	// (0x00069466) cale_bg_pane_g6

0xaf69,	// (0x0006946e) cale_bg_pane_g7

0xaf71,	// (0x00069476) cale_bg_pane_g8

0xaf79,	// (0x0006947e) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0006d7c4) cale_bg_pane_g

0x2ede,	// (0x000613e3) list_cale_time_pane_ParamLimits

0x2ede,	// (0x000613e3) list_cale_time_pane

0xaf81,	// (0x00069486) list_cale_time_pane_g1_ParamLimits

0xaf81,	// (0x00069486) list_cale_time_pane_g1

0xaf8d,	// (0x00069492) list_cale_time_pane_g2_ParamLimits

0xaf8d,	// (0x00069492) list_cale_time_pane_g2

0x2ef5,	// (0x000613fa) list_cale_time_pane_g3_ParamLimits

0x2ef5,	// (0x000613fa) list_cale_time_pane_g3

0x2f03,	// (0x00061408) list_cale_time_pane_g4_ParamLimits

0x2f03,	// (0x00061408) list_cale_time_pane_g4

0x2f11,	// (0x00061416) list_cale_time_pane_g5_ParamLimits

0x2f11,	// (0x00061416) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0006d7d7) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0006d7d7) list_cale_time_pane_g

0xafa7,	// (0x000694ac) list_cale_time_pane_t1_ParamLimits

0xafa7,	// (0x000694ac) list_cale_time_pane_t1

0xafcf,	// (0x000694d4) list_cale_time_pane_t2_ParamLimits

0xafcf,	// (0x000694d4) list_cale_time_pane_t2

0x32c5,	// (0x000617ca) aid_blid_cardinal_pane

0x3307,	// (0x0006180c) compass_pane_t4

0xaff7,	// (0x000694fc) list_cale_time_pane_t4_ParamLimits

0xaff7,	// (0x000694fc) list_cale_time_pane_t4

0x3315,	// (0x0006181a) compass_pane_t5

0x3325,	// (0x0006182a) compass_pane_t6

0x3333,	// (0x00061838) compass_pane_t7

0xb492,	// (0x00069997) navi_pane_cc_t1

0xb68b,	// (0x00069b90) aid_phob_thumbnail_center_pane

0x3a40,	// (0x00061f45) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0006d7e4) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0006d7e4) list_cale_time_pane_t

0x9ed4,	// (0x000683d9) bg_popup_window_pane_cp02_ParamLimits

0x9ed4,	// (0x000683d9) bg_popup_window_pane_cp02

0xb01f,	// (0x00069524) heading_pane_cp01_ParamLimits

0xb01f,	// (0x00069524) heading_pane_cp01

0xb02b,	// (0x00069530) loc_req_pane_ParamLimits

0xb02b,	// (0x00069530) loc_req_pane

0xb03b,	// (0x00069540) loc_type_pane_ParamLimits

0xb03b,	// (0x00069540) loc_type_pane

0xb04d,	// (0x00069552) loc_type_pane_t1_ParamLimits

0xb04d,	// (0x00069552) loc_type_pane_t1

0xb082,	// (0x00069587) loc_type_pane_t2_ParamLimits

0xb082,	// (0x00069587) loc_type_pane_t2

0xb094,	// (0x00069599) loc_type_pane_t3_ParamLimits

0xb094,	// (0x00069599) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0006d7eb) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0006d7eb) loc_type_pane_t

0xb0a6,	// (0x000695ab) list_loc_req_pane

0xb0b0,	// (0x000695b5) scroll_pane_cp012

0x2f1f,	// (0x00061424) list_single_loc_request_popup_menu_pane_ParamLimits

0x2f1f,	// (0x00061424) list_single_loc_request_popup_menu_pane

0xb0bb,	// (0x000695c0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb0bb,	// (0x000695c0) list_single_loc_request_popup_menu_pane_g1

0xb0c7,	// (0x000695cc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb0c7,	// (0x000695cc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0006d7f2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0006d7f2) list_single_loc_request_popup_menu_pane_g

0xb0d3,	// (0x000695d8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb0d3,	// (0x000695d8) list_single_loc_request_popup_menu_pane_t1

0x2f31,	// (0x00061436) bg_popup_window_pane_cp03_ParamLimits

0x2f31,	// (0x00061436) bg_popup_window_pane_cp03

0x2f3f,	// (0x00061444) heading_loc_req_pane_ParamLimits

0x2f3f,	// (0x00061444) heading_loc_req_pane

0x2f4b,	// (0x00061450) popup_dyc_status_message_window_g1_ParamLimits

0x2f4b,	// (0x00061450) popup_dyc_status_message_window_g1

0x2f57,	// (0x0006145c) popup_dyc_status_message_window_t1_ParamLimits

0x2f57,	// (0x0006145c) popup_dyc_status_message_window_t1

0x2f69,	// (0x0006146e) popup_dyc_status_message_window_t2_ParamLimits

0x2f69,	// (0x0006146e) popup_dyc_status_message_window_t2

0x2f7b,	// (0x00061480) popup_dyc_status_message_window_t3_ParamLimits

0x2f7b,	// (0x00061480) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0006d7f7) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0006d7f7) popup_dyc_status_message_window_t

0xa27d,	// (0x00068782) bg_heading_pane_cp01

0xb0e9,	// (0x000695ee) heading_loc_req_pane_g1

0xb0f1,	// (0x000695f6) heading_loc_req_pane_g2

0xb0f9,	// (0x000695fe) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0006d7fe) heading_loc_req_pane_g

0xb101,	// (0x00069606) heading_loc_req_pane_t1

0xb111,	// (0x00069616) bg_popup_sub_pane_cp01_ParamLimits

0xb111,	// (0x00069616) bg_popup_sub_pane_cp01

0xb11f,	// (0x00069624) popup_cale_events_window_g1_ParamLimits

0xb11f,	// (0x00069624) popup_cale_events_window_g1

0xb13f,	// (0x00069644) popup_cale_events_window_g2_ParamLimits

0xb13f,	// (0x00069644) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0006d832) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0006d832) popup_cale_events_window_g

0xb15f,	// (0x00069664) popup_cale_events_window_t1_ParamLimits

0xb15f,	// (0x00069664) popup_cale_events_window_t1

0xb171,	// (0x00069676) popup_cale_events_window_t2_ParamLimits

0xb171,	// (0x00069676) popup_cale_events_window_t2

0xb1af,	// (0x000696b4) popup_cale_events_window_t3_ParamLimits

0xb1af,	// (0x000696b4) popup_cale_events_window_t3

0xb1e9,	// (0x000696ee) popup_cale_events_window_t4_ParamLimits

0xb1e9,	// (0x000696ee) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0006d837) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0006d837) popup_cale_events_window_t

0x3076,	// (0x0006157b) call_type_pane

0xb62c,	// (0x00069b31) popup_call_status_window_g1

0x3082,	// (0x00061587) popup_call_status_window_g2

0x308e,	// (0x00061593) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0006d840) popup_call_status_window_g

0xb21f,	// (0x00069724) call_type_pane_g1

0xb228,	// (0x0006972d) call_type_pane_g2

0x0001,

0xf342,	// (0x0006d847) call_type_pane_g

0xa27d,	// (0x00068782) bg_popup_sub_pane_cp02

0xb231,	// (0x00069736) listscroll_popup_wml_pane

0xb239,	// (0x0006973e) list_wml_pane

0xb243,	// (0x00069748) scroll_pane_cp013

0xb24e,	// (0x00069753) list_single_graphic_popup_wml_pane_ParamLimits

0xb24e,	// (0x00069753) list_single_graphic_popup_wml_pane

0xa5f2,	// (0x00068af7) list_single_graphic_popup_wml_pane_g1

0xb262,	// (0x00069767) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0006d84c) list_single_graphic_popup_wml_pane_g

0xb26a,	// (0x0006976f) list_single_graphic_popup_wml_pane_t1

0xb280,	// (0x00069785) aid_call_pane

0xa4d0,	// (0x000689d5) popup_clock_analogue_window_g1

0xa4d0,	// (0x000689d5) popup_clock_analogue_window_g2

0x309a,	// (0x0006159f) popup_clock_analogue_window_g3

0x309a,	// (0x0006159f) popup_clock_analogue_window_g4

0xa5f2,	// (0x00068af7) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0006d851) popup_clock_analogue_window_g

0x30a2,	// (0x000615a7) popup_clock_analogue_window_t1

0x30b0,	// (0x000615b5) clock_digital_number_pane_ParamLimits

0x30b0,	// (0x000615b5) clock_digital_number_pane

0x30bc,	// (0x000615c1) clock_digital_number_pane_cp02_ParamLimits

0x30bc,	// (0x000615c1) clock_digital_number_pane_cp02

0x30c8,	// (0x000615cd) clock_digital_number_pane_cp03_ParamLimits

0x30c8,	// (0x000615cd) clock_digital_number_pane_cp03

0x30d4,	// (0x000615d9) clock_digital_number_pane_cp04_ParamLimits

0x30d4,	// (0x000615d9) clock_digital_number_pane_cp04

0x30e0,	// (0x000615e5) clock_digital_separator_pane_ParamLimits

0x30e0,	// (0x000615e5) clock_digital_separator_pane

0x30ec,	// (0x000615f1) popup_clock_digital_window_t1

0xa5f2,	// (0x00068af7) clock_digital_number_pane_g1

0xa5f2,	// (0x00068af7) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0006d7bf) clock_digital_number_pane_g

0xa5f2,	// (0x00068af7) clock_digital_separator_pane_g1

0xa5f2,	// (0x00068af7) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0006d7bf) clock_digital_separator_pane_g

0xa27d,	// (0x00068782) bg_popup_window_pane_cp04

0xb288,	// (0x0006978d) heading_pane_cp03

0xb290,	// (0x00069795) listscroll_popup_gms_pane

0xb298,	// (0x0006979d) grid_large_graphic_popup_pane

0xb2a2,	// (0x000697a7) listscroll_popup_gms_pane_g1

0xb2aa,	// (0x000697af) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0006d85c) listscroll_popup_gms_pane_g

0xad27,	// (0x0006922c) scroll_pane_cp014

0x3109,	// (0x0006160e) cell_large_graphic_popup_pane_ParamLimits

0x3109,	// (0x0006160e) cell_large_graphic_popup_pane

0x3123,	// (0x00061628) cell_large_graphic_popup_pane_g1_ParamLimits

0x3123,	// (0x00061628) cell_large_graphic_popup_pane_g1

0xb2b2,	// (0x000697b7) cell_large_graphic_popup_pane_g2_ParamLimits

0xb2b2,	// (0x000697b7) cell_large_graphic_popup_pane_g2

0xb2be,	// (0x000697c3) cell_large_graphic_popup_pane_g3_ParamLimits

0xb2be,	// (0x000697c3) cell_large_graphic_popup_pane_g3

0xb2cb,	// (0x000697d0) cell_large_graphic_popup_pane_g4_ParamLimits

0xb2cb,	// (0x000697d0) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0006d861) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0006d861) cell_large_graphic_popup_pane_g

0xb2db,	// (0x000697e0) grid_highlight_pane_cp010

0xa5f2,	// (0x00068af7) bg_popup_call_pane_g1

0xb2e5,	// (0x000697ea) list_single_graphic_popup_conf_pane_ParamLimits

0xb2e5,	// (0x000697ea) list_single_graphic_popup_conf_pane

0xb2f7,	// (0x000697fc) list_highlight_pane_cp01

0xb300,	// (0x00069805) list_single_graphic_popup_conf_pane_g1

0xb308,	// (0x0006980d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0006d86a) list_single_graphic_popup_conf_pane_g

0xb310,	// (0x00069815) list_single_graphic_popup_conf_pane_t1

0xb31e,	// (0x00069823) linegrid_cams_pane_g1

0x312f,	// (0x00061634) linegrid_cams_pane_g2

0xab60,	// (0x00069065) linegrid_cams_pane_g3

0xb327,	// (0x0006982c) linegrid_cams_pane_g4

0x3138,	// (0x0006163d) linegrid_cams_pane_g5

0x3141,	// (0x00061646) linegrid_cams_pane_g6

0xab69,	// (0x0006906e) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0006d86f) linegrid_cams_pane_g

0xb330,	// (0x00069835) popup_clock_analogue_window

0xb330,	// (0x00069835) popup_clock_digital_window

0xa27d,	// (0x00068782) popup_phob_thumbnail_window

0xa5f2,	// (0x00068af7) call_video_uplink_pane_g1

0xb339,	// (0x0006983e) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0006d87e) call_video_uplink_pane_g

0xb341,	// (0x00069846) video_uplink_pane

0xb349,	// (0x0006984e) mce_image_pane_g1

0x314c,	// (0x00061651) mce_image_pane_g2

0x3156,	// (0x0006165b) mce_image_pane_g3

0x3160,	// (0x00061665) mce_image_pane_g4

0x3168,	// (0x0006166d) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0006d883) mce_image_pane_g

0xb353,	// (0x00069858) control_top_pane_stacon_cp01_ParamLimits

0xb353,	// (0x00069858) control_top_pane_stacon_cp01

0xb367,	// (0x0006986c) uni_indicator_pane_stacon_cp01_ParamLimits

0xb367,	// (0x0006986c) uni_indicator_pane_stacon_cp01

0xb378,	// (0x0006987d) bg_popup_sub_pane_cp03

0x3170,	// (0x00061675) chi_dic_find_pane

0x3178,	// (0x0006167d) listscroll_chi_dic_pane

0x3181,	// (0x00061686) main_pane_chidic_g1

0x3194,	// (0x00061699) chi_dic_find_pane_t1

0xb382,	// (0x00069887) find_chidic_pane

0xb38b,	// (0x00069890) chi_dic_list_pane_ParamLimits

0xb38b,	// (0x00069890) chi_dic_list_pane

0xb39c,	// (0x000698a1) scroll_pane_cp020

0x31a2,	// (0x000616a7) find_chidic_pane_t1

0xa27d,	// (0x00068782) input_focus_pane_cp06

0xb05f,	// (0x00069564) list_chi_dic_pane_ParamLimits

0xb05f,	// (0x00069564) list_chi_dic_pane

0x31b1,	// (0x000616b6) list_chi_dic_pane_t1_ParamLimits

0x31b1,	// (0x000616b6) list_chi_dic_pane_t1

0xa27d,	// (0x00068782) list_highlight_pane_cp020

0xb3a4,	// (0x000698a9) bg_cale_heading_pane_g1

0x31c4,	// (0x000616c9) bg_cale_heading_pane_g2

0x31cc,	// (0x000616d1) bg_cale_heading_pane_g3

0x31d4,	// (0x000616d9) bg_cale_heading_pane_g4

0x31de,	// (0x000616e3) bg_cale_heading_pane_g5

0x31e8,	// (0x000616ed) bg_cale_heading_pane_g6

0x31f0,	// (0x000616f5) bg_cale_heading_pane_g7

0x31f8,	// (0x000616fd) bg_cale_heading_pane_g8

0x3202,	// (0x00061707) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0006d88e) bg_cale_heading_pane_g

0xb3a4,	// (0x000698a9) bg_cale_side_pane_g1

0x320c,	// (0x00061711) bg_cale_side_pane_g2

0x3216,	// (0x0006171b) bg_cale_side_pane_g3

0x3220,	// (0x00061725) bg_cale_side_pane_g4

0x322a,	// (0x0006172f) bg_cale_side_pane_g5

0x3234,	// (0x00061739) bg_cale_side_pane_g6

0x323e,	// (0x00061743) bg_cale_side_pane_g7

0x3248,	// (0x0006174d) bg_cale_side_pane_g8

0x3250,	// (0x00061755) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0006d8a1) bg_cale_side_pane_g

0x3258,	// (0x0006175d) popup_call_status_window_ParamLimits

0x3258,	// (0x0006175d) popup_call_status_window

0xb3ac,	// (0x000698b1) stacon_top_pane

0xb3b4,	// (0x000698b9) status_pane_ParamLimits

0xb3b4,	// (0x000698b9) status_pane

0xb3c9,	// (0x000698ce) status_small_pane

0xb3d1,	// (0x000698d6) control_pane

0xa27d,	// (0x00068782) stacon_bottom_pane

0xb3d9,	// (0x000698de) list_single_mce_smart_pane_t1_ParamLimits

0xb3d9,	// (0x000698de) list_single_mce_smart_pane_t1

0xb3ec,	// (0x000698f1) list_single_mce_smart_pane_t2_ParamLimits

0xb3ec,	// (0x000698f1) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0006d8b4) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0006d8b4) list_single_mce_smart_pane_t

0x3264,	// (0x00061769) compass_pane

0x326f,	// (0x00061774) main_location2_pane_t1

0x3285,	// (0x0006178a) main_location2_pane_t2

0x329b,	// (0x000617a0) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0006d8b9) main_location2_pane_t

0xb40b,	// (0x00069910) compass_pane_g1_ParamLimits

0xb40b,	// (0x00069910) compass_pane_g1

0x32e9,	// (0x000617ee) compass_pane_t1

0x32f8,	// (0x000617fd) compass_pane_t2

0x0005,

0xf3bd,	// (0x0006d8c2) compass_pane_t

0x3343,	// (0x00061848) text_secondary_cp61

0xb489,	// (0x0006998e) navi_pane_cams_g5

0xb505,	// (0x00069a0a) navi_pane_im_t1

0xb513,	// (0x00069a18) navi_pane_mp_g1_ParamLimits

0xb513,	// (0x00069a18) navi_pane_mp_g1

0xb527,	// (0x00069a2c) navi_pane_mp_g2_ParamLimits

0xb527,	// (0x00069a2c) navi_pane_mp_g2

0xb533,	// (0x00069a38) navi_pane_mp_g3_ParamLimits

0xb533,	// (0x00069a38) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0006d8d6) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0006d8d6) navi_pane_mp_g

0xb53f,	// (0x00069a44) navi_pane_mp_t1

0xb54d,	// (0x00069a52) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0006d8dd) navi_pane_mp_t

0xb5ba,	// (0x00069abf) navi_pane_vt_g1

0xb53f,	// (0x00069a44) navi_pane_vt_t1

0xb5c2,	// (0x00069ac7) navi_slider_pane

0xab7a,	// (0x0006907f) zooming_pane

0xb5d2,	// (0x00069ad7) navi_slider_pane_g1

0x337e,	// (0x00061883) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0006d8e4) navi_slider_pane_g

0xb5f6,	// (0x00069afb) aid_levels_zoom

0xb5fe,	// (0x00069b03) zooming_pane_g1

0xb606,	// (0x00069b0b) zooming_pane_g2

0xb606,	// (0x00069b0b) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0006d8f3) zooming_pane_g

0xb60e,	// (0x00069b13) level_10_zoom

0xb617,	// (0x00069b1c) level_11_zoom

0xb63a,	// (0x00069b3f) level_1_zoom

0xb643,	// (0x00069b48) level_2_zoom

0xb64c,	// (0x00069b51) level_3_zoom

0xb655,	// (0x00069b5a) level_4_zoom

0xb65e,	// (0x00069b63) level_5_zoom

0xb667,	// (0x00069b6c) level_6_zoom

0xb670,	// (0x00069b75) level_7_zoom

0xb679,	// (0x00069b7e) level_8_zoom

0xb682,	// (0x00069b87) level_9_zoom

0xb693,	// (0x00069b98) popup_phob_thumbnail_window_g1

0xb69b,	// (0x00069ba0) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0006d8fa) popup_phob_thumbnail_window_g

0xc99c,	// (0x0006aea1) level_1_location

0xc9a4,	// (0x0006aea9) level_2_location

0xc9ac,	// (0x0006aeb1) level_3_location

0xc9b4,	// (0x0006aeb9) level_4_location

0xab7a,	// (0x0006907f) level_5_location

0x3390,	// (0x00061895) mce_icon_pane_g1

0x3398,	// (0x0006189d) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0006d8ff) mce_icon_pane_g

0x33a0,	// (0x000618a5) main_mup_pane_g1_ParamLimits

0x33a0,	// (0x000618a5) main_mup_pane_g1

0x33b8,	// (0x000618bd) main_mup_pane_g2_ParamLimits

0x33b8,	// (0x000618bd) main_mup_pane_g2

0x33d4,	// (0x000618d9) main_mup_pane_g3_ParamLimits

0x33d4,	// (0x000618d9) main_mup_pane_g3

0x33f0,	// (0x000618f5) main_mup_pane_g4_ParamLimits

0x33f0,	// (0x000618f5) main_mup_pane_g4

0x3404,	// (0x00061909) main_mup_pane_g5_ParamLimits

0x3404,	// (0x00061909) main_mup_pane_g5

0x3425,	// (0x0006192a) main_mup_pane_g6_ParamLimits

0x3425,	// (0x0006192a) main_mup_pane_g6

0x3445,	// (0x0006194a) main_mup_pane_g7_ParamLimits

0x3445,	// (0x0006194a) main_mup_pane_g7

0x3469,	// (0x0006196e) main_mup_pane_g8_ParamLimits

0x3469,	// (0x0006196e) main_mup_pane_g8

0x348d,	// (0x00061992) main_mup_pane_g9_ParamLimits

0x348d,	// (0x00061992) main_mup_pane_g9

0x34b0,	// (0x000619b5) main_mup_pane_g10_ParamLimits

0x34b0,	// (0x000619b5) main_mup_pane_g10

0x34d3,	// (0x000619d8) main_mup_pane_g11_ParamLimits

0x34d3,	// (0x000619d8) main_mup_pane_g11

0x34f3,	// (0x000619f8) main_mup_pane_g12_ParamLimits

0x34f3,	// (0x000619f8) main_mup_pane_g12

0x3501,	// (0x00061a06) main_mup_pane_g13_ParamLimits

0x3501,	// (0x00061a06) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0006d904) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0006d904) main_mup_pane_g

0x3517,	// (0x00061a1c) main_mup_pane_t1_ParamLimits

0x3517,	// (0x00061a1c) main_mup_pane_t1

0x3536,	// (0x00061a3b) main_mup_pane_t2_ParamLimits

0x3536,	// (0x00061a3b) main_mup_pane_t2

0x3550,	// (0x00061a55) main_mup_pane_t3_ParamLimits

0x3550,	// (0x00061a55) main_mup_pane_t3

0x356a,	// (0x00061a6f) main_mup_pane_t4_ParamLimits

0x356a,	// (0x00061a6f) main_mup_pane_t4

0x357c,	// (0x00061a81) main_mup_pane_t5_ParamLimits

0x357c,	// (0x00061a81) main_mup_pane_t5

0x358e,	// (0x00061a93) main_mup_pane_t6_ParamLimits

0x358e,	// (0x00061a93) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0006d91f) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0006d91f) main_mup_pane_t

0x35a4,	// (0x00061aa9) mup_progress_pane_ParamLimits

0x35a4,	// (0x00061aa9) mup_progress_pane

0x35b0,	// (0x00061ab5) mup_visualizer_pane_ParamLimits

0x35b0,	// (0x00061ab5) mup_visualizer_pane

0x35ee,	// (0x00061af3) mup_volume_pane_ParamLimits

0x35ee,	// (0x00061af3) mup_volume_pane

0xb62c,	// (0x00069b31) mup_visualizer_pane_g1_ParamLimits

0xb62c,	// (0x00069b31) mup_visualizer_pane_g1

0xb62c,	// (0x00069b31) mup_visualizer_pane_g2_ParamLimits

0xb62c,	// (0x00069b31) mup_visualizer_pane_g2

0xb40b,	// (0x00069910) mup_visualizer_pane_g3_ParamLimits

0xb40b,	// (0x00069910) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0006d92c) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0006d92c) mup_visualizer_pane_g

0xa5f2,	// (0x00068af7) mup_volume_pane_g1

0xb6ab,	// (0x00069bb0) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0006d933) mup_volume_pane_g

0xa5f2,	// (0x00068af7) mup_progress_pane_g1

0xb6b4,	// (0x00069bb9) mup_progress_pane_g2

0xb6bd,	// (0x00069bc2) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0006d938) mup_progress_pane_g

0xa27d,	// (0x00068782) bg_popup_window_pane_cp05

0xb6c6,	// (0x00069bcb) heading_pane_cp02_ParamLimits

0xb6c6,	// (0x00069bcb) heading_pane_cp02

0xb6e2,	// (0x00069be7) list_popup_blid_pane

0xb6ea,	// (0x00069bef) list_blid_sat_info_pane_ParamLimits

0xb6ea,	// (0x00069bef) list_blid_sat_info_pane

0xb6fd,	// (0x00069c02) list_blid_sat_info_pane_g1

0xb705,	// (0x00069c0a) list_blid_sat_info_pane_t1

0x370d,	// (0x00061c12) mup_equalizer_pane_ParamLimits

0x370d,	// (0x00061c12) mup_equalizer_pane

0x372e,	// (0x00061c33) mup_equalizer_pane_cp1_ParamLimits

0x372e,	// (0x00061c33) mup_equalizer_pane_cp1

0x374f,	// (0x00061c54) mup_equalizer_pane_cp2_ParamLimits

0x374f,	// (0x00061c54) mup_equalizer_pane_cp2

0x3770,	// (0x00061c75) mup_equalizer_pane_cp3_ParamLimits

0x3770,	// (0x00061c75) mup_equalizer_pane_cp3

0x3795,	// (0x00061c9a) mup_equalizer_pane_cp4_ParamLimits

0x3795,	// (0x00061c9a) mup_equalizer_pane_cp4

0x37ba,	// (0x00061cbf) mup_equalizer_pane_cp5

0x37d2,	// (0x00061cd7) mup_equalizer_pane_cp6

0x37ea,	// (0x00061cef) mup_equalizer_pane_cp7

0xc8b6,	// (0x0006adbb) bg_popup_call_poc_act_pane_g9

0xc8be,	// (0x0006adc3) bg_popup_call_poc_act_pane_g10

0xc8c6,	// (0x0006adcb) bg_popup_call_poc_act_pane_g11

0x000a,

0xa4d8,	// (0x000689dd) mup_scale_pane

0xa5f2,	// (0x00068af7) mup_scale_pane_g1

0xb713,	// (0x00069c18) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0006d954) mup_scale_pane_g

0xb737,	// (0x00069c3c) msg_data_pane

0xb73f,	// (0x00069c44) scroll_pane_cp017

0x3814,	// (0x00061d19) bg_list_pane_cp04_ParamLimits

0x3814,	// (0x00061d19) bg_list_pane_cp04

0xb747,	// (0x00069c4c) msg_data_pane_g1

0x383c,	// (0x00061d41) msg_data_pane_g2

0x3846,	// (0x00061d4b) msg_data_pane_g3

0x3850,	// (0x00061d55) msg_data_pane_g4

0x3858,	// (0x00061d5d) msg_data_pane_g5

0x3860,	// (0x00061d65) msg_data_pane_g6

0x3868,	// (0x00061d6d) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0006d963) msg_data_pane_g

0x3870,	// (0x00061d75) msg_text_pane_ParamLimits

0x3870,	// (0x00061d75) msg_text_pane

0x38a1,	// (0x00061da6) qrid_highlight_pane_cp011_ParamLimits

0x38a1,	// (0x00061da6) qrid_highlight_pane_cp011

0xa27d,	// (0x00068782) msg_body_pane

0xa27d,	// (0x00068782) msg_header_pane

0xb758,	// (0x00069c5d) input_focus_pane_cp07

0x38c5,	// (0x00061dca) msg_header_pane_t1_ParamLimits

0x38c5,	// (0x00061dca) msg_header_pane_t1

0x38d7,	// (0x00061ddc) msg_header_pane_t2_ParamLimits

0x38d7,	// (0x00061ddc) msg_header_pane_t2

0x0001,

0xf472,	// (0x0006d977) msg_header_pane_t_ParamLimits

0xf472,	// (0x0006d977) msg_header_pane_t

0xb76d,	// (0x00069c72) msg_body_pane_g1

0x38e9,	// (0x00061dee) msg_body_pane_t1_ParamLimits

0x38e9,	// (0x00061dee) msg_body_pane_t1

0x391a,	// (0x00061e1f) msg_body_pane_t2_ParamLimits

0x391a,	// (0x00061e1f) msg_body_pane_t2

0x392c,	// (0x00061e31) msg_body_pane_t3_ParamLimits

0x392c,	// (0x00061e31) msg_body_pane_t3

0x0002,

0xf477,	// (0x0006d97c) msg_body_pane_t_ParamLimits

0xf477,	// (0x0006d97c) msg_body_pane_t

0x3990,	// (0x00061e95) main_viewer_pane_g1_ParamLimits

0x3990,	// (0x00061e95) main_viewer_pane_g1

0x399c,	// (0x00061ea1) main_viewer_pane_g2_ParamLimits

0x399c,	// (0x00061ea1) main_viewer_pane_g2

0x39a8,	// (0x00061ead) main_viewer_pane_g3_ParamLimits

0x39a8,	// (0x00061ead) main_viewer_pane_g3

0x39b9,	// (0x00061ebe) main_viewer_pane_g4_ParamLimits

0x39b9,	// (0x00061ebe) main_viewer_pane_g4

0x39ca,	// (0x00061ecf) main_viewer_pane_g5_ParamLimits

0x39ca,	// (0x00061ecf) main_viewer_pane_g5

0x39ca,	// (0x00061ecf) main_viewer_pane_g7_ParamLimits

0x39ca,	// (0x00061ecf) main_viewer_pane_g7

0x39dc,	// (0x00061ee1) main_viewer_pane_g8_ParamLimits

0x39dc,	// (0x00061ee1) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0006d98c) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0006d98c) main_viewer_pane_g

0xb775,	// (0x00069c7a) viewer_content_pane_ParamLimits

0xb775,	// (0x00069c7a) viewer_content_pane

0x3a14,	// (0x00061f19) main_postcard_pane_g1_ParamLimits

0x3a14,	// (0x00061f19) main_postcard_pane_g1

0x3a22,	// (0x00061f27) main_postcard_pane_g2_ParamLimits

0x3a22,	// (0x00061f27) main_postcard_pane_g2

0x3a30,	// (0x00061f35) main_postcard_pane_g3_ParamLimits

0x3a30,	// (0x00061f35) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0006d99d) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0006d99d) main_postcard_pane_g

0x3a40,	// (0x00061f45) main_postcard_pane_g4

0xcaaf,	// (0x0006afb4) smil_status_volume_pane_g2

0x3a6c,	// (0x00061f71) postcard_pane_ParamLimits

0x3a6c,	// (0x00061f71) postcard_pane

0xb62c,	// (0x00069b31) postcard_pane_g1_ParamLimits

0xb62c,	// (0x00069b31) postcard_pane_g1

0x3aa6,	// (0x00061fab) postcard_pane_g2_ParamLimits

0x3aa6,	// (0x00061fab) postcard_pane_g2

0x3ab2,	// (0x00061fb7) postcard_pane_g3_ParamLimits

0x3ab2,	// (0x00061fb7) postcard_pane_g3

0xb783,	// (0x00069c88) postcard_pane_g4_ParamLimits

0xb783,	// (0x00069c88) postcard_pane_g4

0x3abe,	// (0x00061fc3) postcard_pane_g5_ParamLimits

0x3abe,	// (0x00061fc3) postcard_pane_g5

0x3aca,	// (0x00061fcf) postcard_pane_g6_ParamLimits

0x3aca,	// (0x00061fcf) postcard_pane_g6

0xb791,	// (0x00069c96) postcard_pane_g7_ParamLimits

0xb791,	// (0x00069c96) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0006d9aa) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0006d9aa) postcard_pane_g

0x3ad8,	// (0x00061fdd) main_mp2_pane_g1_ParamLimits

0x3ad8,	// (0x00061fdd) main_mp2_pane_g1

0x3ae6,	// (0x00061feb) main_mp2_pane_g2_ParamLimits

0x3ae6,	// (0x00061feb) main_mp2_pane_g2

0x3af2,	// (0x00061ff7) main_mp2_pane_g3_ParamLimits

0x3af2,	// (0x00061ff7) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0006d9b9) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0006d9b9) main_mp2_pane_g

0x3afe,	// (0x00062003) main_mp2_pane_t1_ParamLimits

0x3afe,	// (0x00062003) main_mp2_pane_t1

0x3b15,	// (0x0006201a) main_mp2_pane_t2_ParamLimits

0x3b15,	// (0x0006201a) main_mp2_pane_t2

0x3b29,	// (0x0006202e) main_mp2_pane_t3_ParamLimits

0x3b29,	// (0x0006202e) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0006d9c0) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0006d9c0) main_mp2_pane_t

0xb79f,	// (0x00069ca4) pec_content_pane_ParamLimits

0xb79f,	// (0x00069ca4) pec_content_pane

0xad27,	// (0x0006922c) scroll_pane_cp015

0xb7b1,	// (0x00069cb6) pec_attribute_pane_ParamLimits

0xb7b1,	// (0x00069cb6) pec_attribute_pane

0x3b3b,	// (0x00062040) pec_content_pane_g1_ParamLimits

0x3b3b,	// (0x00062040) pec_content_pane_g1

0xb7c1,	// (0x00069cc6) pec_content_pane_t1_ParamLimits

0xb7c1,	// (0x00069cc6) pec_content_pane_t1

0xb7d3,	// (0x00069cd8) pec_content_pane_t2_ParamLimits

0xb7d3,	// (0x00069cd8) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0006d9c7) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0006d9c7) pec_content_pane_t

0x3b47,	// (0x0006204c) list_single_graphic_pane_cp01_ParamLimits

0x3b47,	// (0x0006204c) list_single_graphic_pane_cp01

0xa4d8,	// (0x000689dd) bg_popup_sub_pane_cp04

0xb7e5,	// (0x00069cea) popup_mup_playback_window_g1

0xb7f1,	// (0x00069cf6) popup_mup_playback_window_t1

0xb806,	// (0x00069d0b) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0006d9cc) popup_mup_playback_window_t

0xb83d,	// (0x00069d42) main_image_pane_g1_ParamLimits

0xb83d,	// (0x00069d42) main_image_pane_g1

0xb880,	// (0x00069d85) scroll_pane_cp018_ParamLimits

0xb880,	// (0x00069d85) scroll_pane_cp018

0xb898,	// (0x00069d9d) scroll_pane_cp016_ParamLimits

0xb898,	// (0x00069d9d) scroll_pane_cp016

0x3bd5,	// (0x000620da) smil2_image_pane_ParamLimits

0x3bd5,	// (0x000620da) smil2_image_pane

0x3c0b,	// (0x00062110) smil2_root_pane_ParamLimits

0x3c0b,	// (0x00062110) smil2_root_pane

0x3c37,	// (0x0006213c) smil2_text_pane_ParamLimits

0x3c37,	// (0x0006213c) smil2_text_pane

0xa27d,	// (0x00068782) bg_list_pane_cp06

0xb8d4,	// (0x00069dd9) grid_radio_pane

0xa27d,	// (0x00068782) bg_popup_window_pane_cp06

0xb8de,	// (0x00069de3) main_fmradio_pane_t1

0xb288,	// (0x0006978d) heading_pane_cp04

0xb8ec,	// (0x00069df1) main_fmradio_pane_t2

0xc8ce,	// (0x0006add3) popup_cale_lunar_info_window_g1

0xb8fa,	// (0x00069dff) main_fmradio_pane_t3

0xc8d6,	// (0x0006addb) popup_cale_lunar_info_window_g2

0xb90a,	// (0x00069e0f) main_fmradio_pane_t4

0x0001,

0xb918,	// (0x00069e1d) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0006daa7) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0006d9e1) main_fmradio_pane_t

0xb926,	// (0x00069e2b) wait_bar_pane_cp03

0xb92e,	// (0x00069e33) cell_fmradio_pane_ParamLimits

0xb92e,	// (0x00069e33) cell_fmradio_pane

0xb791,	// (0x00069c96) cell_fmradio_pane_g1_ParamLimits

0xb791,	// (0x00069c96) cell_fmradio_pane_g1

0xa27d,	// (0x00068782) grid_highlight_pane_cp011

0xb943,	// (0x00069e48) poc_content_pane_ParamLimits

0xb943,	// (0x00069e48) poc_content_pane

0xb955,	// (0x00069e5a) scroll_pane_cp019

0x3c77,	// (0x0006217c) popup_call_poc_act_window_ParamLimits

0x3c77,	// (0x0006217c) popup_call_poc_act_window

0x3c84,	// (0x00062189) popup_call_poc_inact_window_ParamLimits

0x3c84,	// (0x00062189) popup_call_poc_inact_window

0xf579,	// (0x0006da7e) bg_popup_call_poc_act_pane_g

0xc846,	// (0x0006ad4b) bg_popup_call_poc_inact_pane_g1

0xc84e,	// (0x0006ad53) bg_popup_call_poc_inact_pane_g2

0xb95d,	// (0x00069e62) popup_call_poc_act_window_g2

0xc856,	// (0x0006ad5b) bg_popup_call_poc_inact_pane_g3

0xc85e,	// (0x0006ad63) bg_popup_call_poc_inact_pane_g4

0xc866,	// (0x0006ad6b) bg_popup_call_poc_inact_pane_g5

0xb965,	// (0x00069e6a) popup_call_poc_act_window_t1_ParamLimits

0xb965,	// (0x00069e6a) popup_call_poc_act_window_t1

0xb98d,	// (0x00069e92) popup_call_poc_act_window_t2_ParamLimits

0xb98d,	// (0x00069e92) popup_call_poc_act_window_t2

0xb9b5,	// (0x00069eba) popup_call_poc_act_window_t3_ParamLimits

0xb9b5,	// (0x00069eba) popup_call_poc_act_window_t3

0xb9dd,	// (0x00069ee2) popup_call_poc_act_window_t4_ParamLimits

0xb9dd,	// (0x00069ee2) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0006d9ec) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0006d9ec) popup_call_poc_act_window_t

0xc86e,	// (0x0006ad73) bg_popup_call_poc_inact_pane_g6

0xc876,	// (0x0006ad7b) bg_popup_call_poc_inact_pane_g7

0xc87e,	// (0x0006ad83) bg_popup_call_poc_inact_pane_g8

0xb9ef,	// (0x00069ef4) popup_call_poc_inact_window_g2

0xc886,	// (0x0006ad8b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0006da6b) bg_popup_call_poc_inact_pane_g

0xb9f7,	// (0x00069efc) popup_call_poc_inact_window_t1_ParamLimits

0xb9f7,	// (0x00069efc) popup_call_poc_inact_window_t1

0xba0c,	// (0x00069f11) popup_call_poc_inact_window_t2_ParamLimits

0xba0c,	// (0x00069f11) popup_call_poc_inact_window_t2

0xba21,	// (0x00069f26) popup_call_poc_inact_window_t3_ParamLimits

0xba21,	// (0x00069f26) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0006d9f5) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0006d9f5) popup_call_poc_inact_window_t

0xca0f,	// (0x0006af14) context_pane_ParamLimits

0x42f9,	// (0x000627fe) signal_pane_ParamLimits

0xab7a,	// (0x0006907f) main_call2_pane

0x4266,	// (0x0006276b) popup_phob_thumbnail2_window_ParamLimits

0x4266,	// (0x0006276b) popup_phob_thumbnail2_window

0x393e,	// (0x00061e43) aid_hotspot_pointer_arrow_pane

0x3946,	// (0x00061e4b) aid_hotspot_pointer_hand_pane

0x3fa9,	// (0x000624ae) phob_pre_status_pane_g5

0x19f2,	// (0x0005fef7) cams_zoom_pane_ParamLimits

0x19fe,	// (0x0005ff03) image_vga_pane_ParamLimits

0x1a0d,	// (0x0005ff12) main_camera_pane_g1_ParamLimits

0x1a1b,	// (0x0005ff20) main_camera_pane_g2_ParamLimits

0x1a27,	// (0x0005ff2c) main_camera_pane_g3_ParamLimits

0x1a35,	// (0x0005ff3a) main_camera_pane_g4_ParamLimits

0x1a43,	// (0x0005ff48) main_camera_pane_g5_ParamLimits

0x1a51,	// (0x0005ff56) main_camera_pane_g6_ParamLimits

0x1a5f,	// (0x0005ff64) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0006d6f4) main_camera_pane_g_ParamLimits

0x1a6d,	// (0x0005ff72) main_camera_pane_t1_ParamLimits

0x1a7f,	// (0x0005ff84) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0006d705) main_camera_pane_t_ParamLimits

0xa4d8,	// (0x000689dd) bg_popup_preview_window_pane_cp01_ParamLimits

0xa4d8,	// (0x000689dd) bg_popup_preview_window_pane_cp01

0xba36,	// (0x00069f3b) popup_phob_thumbnail2_window_g1_ParamLimits

0xba36,	// (0x00069f3b) popup_phob_thumbnail2_window_g1

0xa27d,	// (0x00068782) call2_cli_visual_pane

0x3ca0,	// (0x000621a5) popup_call2_audio_conf_window_ParamLimits

0x3ca0,	// (0x000621a5) popup_call2_audio_conf_window

0x3cb9,	// (0x000621be) popup_call2_audio_first_window_ParamLimits

0x3cb9,	// (0x000621be) popup_call2_audio_first_window

0x3d57,	// (0x0006225c) popup_call2_audio_in_window_ParamLimits

0x3d57,	// (0x0006225c) popup_call2_audio_in_window

0x3d9b,	// (0x000622a0) popup_call2_audio_out_window_ParamLimits

0x3d9b,	// (0x000622a0) popup_call2_audio_out_window

0x3e05,	// (0x0006230a) popup_call2_audio_second_window_ParamLimits

0x3e05,	// (0x0006230a) popup_call2_audio_second_window

0x3e63,	// (0x00062368) popup_call2_audio_wait_window_ParamLimits

0x3e63,	// (0x00062368) popup_call2_audio_wait_window

0xa27d,	// (0x00068782) bg_popup_call2_act_pane_cp03

0xa4ba,	// (0x000689bf) list_conf_pane_cp

0xba42,	// (0x00069f47) popup_call2_audio_conf_window_t1

0xba50,	// (0x00069f55) list_single_graphic_popup_conf2_pane_ParamLimits

0xba50,	// (0x00069f55) list_single_graphic_popup_conf2_pane

0xb2f7,	// (0x000697fc) list_highlight_pane_cp04

0xba63,	// (0x00069f68) list_single_graphic_popup_conf2_pane_g1

0xb308,	// (0x0006980d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0006d9fc) list_single_graphic_popup_conf2_pane_g

0xba6d,	// (0x00069f72) list_single_graphic_popup_conf2_pane_t1

0xba7b,	// (0x00069f80) bg_popup_call2_act_pane_cp01_ParamLimits

0xba7b,	// (0x00069f80) bg_popup_call2_act_pane_cp01

0xbb05,	// (0x0006a00a) call_type_pane_cp05_ParamLimits

0xbb05,	// (0x0006a00a) call_type_pane_cp05

0xbb59,	// (0x0006a05e) popup_call2_audio_second_window_g1_ParamLimits

0xbb59,	// (0x0006a05e) popup_call2_audio_second_window_g1

0xbbad,	// (0x0006a0b2) popup_call2_audio_second_window_g2_ParamLimits

0xbbad,	// (0x0006a0b2) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0006da01) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0006da01) popup_call2_audio_second_window_g

0xbc12,	// (0x0006a117) popup_call2_audio_second_window_t1_ParamLimits

0xbc12,	// (0x0006a117) popup_call2_audio_second_window_t1

0xbccd,	// (0x0006a1d2) popup_call2_audio_second_window_t2_ParamLimits

0xbccd,	// (0x0006a1d2) popup_call2_audio_second_window_t2

0xbd20,	// (0x0006a225) popup_call2_audio_second_window_t3_ParamLimits

0xbd20,	// (0x0006a225) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0006da08) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0006da08) popup_call2_audio_second_window_t

0xa27d,	// (0x00068782) bg_popup_call2_in_pane_cp02

0xa287,	// (0x0006878c) call_type_pane_cp04

0xa28f,	// (0x00068794) popup_call2_audio_wait_window_g1

0xa297,	// (0x0006879c) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0006d5e3) popup_call2_audio_wait_window_g

0xa29f,	// (0x000687a4) popup_call2_audio_wait_window_t3

0xbe13,	// (0x0006a318) bg_popup_call2_act_pane_ParamLimits

0xbe13,	// (0x0006a318) bg_popup_call2_act_pane

0xbed3,	// (0x0006a3d8) call_type_pane_cp03_ParamLimits

0xbed3,	// (0x0006a3d8) call_type_pane_cp03

0xbf37,	// (0x0006a43c) popup_call2_audio_first_window_g1_ParamLimits

0xbf37,	// (0x0006a43c) popup_call2_audio_first_window_g1

0xbfa7,	// (0x0006a4ac) popup_call2_audio_first_window_g2_ParamLimits

0xbfa7,	// (0x0006a4ac) popup_call2_audio_first_window_g2

0xb62c,	// (0x00069b31) popup_call2_audio_first_window_g3_ParamLimits

0xb62c,	// (0x00069b31) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0006da11) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0006da11) popup_call2_audio_first_window_g

0xc085,	// (0x0006a58a) popup_call2_audio_first_window_t1_ParamLimits

0xc085,	// (0x0006a58a) popup_call2_audio_first_window_t1

0xc188,	// (0x0006a68d) popup_call2_audio_first_window_t4_ParamLimits

0xc188,	// (0x0006a68d) popup_call2_audio_first_window_t4

0xc26b,	// (0x0006a770) popup_call2_audio_first_window_t5_ParamLimits

0xc26b,	// (0x0006a770) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0006da1c) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0006da1c) popup_call2_audio_first_window_t

0xa4d0,	// (0x000689d5) bg_popup_call2_act_pane_g1

0xc8e0,	// (0x0006ade5) popup_cale_lunar_info_window_t1

0xc8ee,	// (0x0006adf3) popup_cale_lunar_info_window_t2

0xc8fc,	// (0x0006ae01) popup_cale_lunar_info_window_t3

0xa27d,	// (0x00068782) bg_popup_call2_bubble_pane

0xc36c,	// (0x0006a871) bg_popup_call2_in_pane_cp01_ParamLimits

0xc36c,	// (0x0006a871) bg_popup_call2_in_pane_cp01

0x9f59,	// (0x0006845e) call_type_pane_cp02

0xc3b4,	// (0x0006a8b9) popup_call2_audio_out_window_g1_ParamLimits

0xc3b4,	// (0x0006a8b9) popup_call2_audio_out_window_g1

0xc3e0,	// (0x0006a8e5) popup_call2_audio_out_window_g2_ParamLimits

0xc3e0,	// (0x0006a8e5) popup_call2_audio_out_window_g2

0xc408,	// (0x0006a90d) popup_call2_audio_out_window_g3_ParamLimits

0xc408,	// (0x0006a90d) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0006da25) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0006da25) popup_call2_audio_out_window_g

0xc443,	// (0x0006a948) popup_call2_audio_out_window_t1_ParamLimits

0xc443,	// (0x0006a948) popup_call2_audio_out_window_t1

0xc4a2,	// (0x0006a9a7) popup_call2_audio_out_window_t2_ParamLimits

0xc4a2,	// (0x0006a9a7) popup_call2_audio_out_window_t2

0xc4f6,	// (0x0006a9fb) popup_call2_audio_out_window_t3_ParamLimits

0xc4f6,	// (0x0006a9fb) popup_call2_audio_out_window_t3

0xc50c,	// (0x0006aa11) popup_call2_audio_out_window_t4_ParamLimits

0xc50c,	// (0x0006aa11) popup_call2_audio_out_window_t4

0xc522,	// (0x0006aa27) popup_call2_audio_out_window_t5_ParamLimits

0xc522,	// (0x0006aa27) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0006da2e) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0006da2e) popup_call2_audio_out_window_t

0xc586,	// (0x0006aa8b) bg_popup_call2_in_pane_ParamLimits

0xc586,	// (0x0006aa8b) bg_popup_call2_in_pane

0xc5e2,	// (0x0006aae7) popup_call2_audio_in_window_g1_ParamLimits

0xc5e2,	// (0x0006aae7) popup_call2_audio_in_window_g1

0xc61a,	// (0x0006ab1f) popup_call2_audio_in_window_g2_ParamLimits

0xc61a,	// (0x0006ab1f) popup_call2_audio_in_window_g2

0xc652,	// (0x0006ab57) popup_call2_audio_in_window_g3_ParamLimits

0xc652,	// (0x0006ab57) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0006da3b) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0006da3b) popup_call2_audio_in_window_g

0xc6aa,	// (0x0006abaf) popup_call2_audio_in_window_t1_ParamLimits

0xc6aa,	// (0x0006abaf) popup_call2_audio_in_window_t1

0xc72a,	// (0x0006ac2f) popup_call2_audio_in_window_t2_ParamLimits

0xc72a,	// (0x0006ac2f) popup_call2_audio_in_window_t2

0xc7aa,	// (0x0006acaf) popup_call2_audio_in_window_t3_ParamLimits

0xc7aa,	// (0x0006acaf) popup_call2_audio_in_window_t3

0xc7c4,	// (0x0006acc9) popup_call2_audio_in_window_t4_ParamLimits

0xc7c4,	// (0x0006acc9) popup_call2_audio_in_window_t4

0xc7d6,	// (0x0006acdb) popup_call2_audio_in_window_t5_ParamLimits

0xc7d6,	// (0x0006acdb) popup_call2_audio_in_window_t5

0xc7e8,	// (0x0006aced) popup_call2_audio_in_window_t6_ParamLimits

0xc7e8,	// (0x0006aced) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0006da44) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0006da44) popup_call2_audio_in_window_t

0xa4d0,	// (0x000689d5) bg_popup_call2_in_pane_g1

0xc90a,	// (0x0006ae0f) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0006daac) popup_cale_lunar_info_window_t

0xa4d8,	// (0x000689dd) bg_popup_call2_rect_pane_ParamLimits

0xa4d8,	// (0x000689dd) bg_popup_call2_rect_pane

0xa27d,	// (0x00068782) call2_cli_visual_graphic_pane

0xa27d,	// (0x00068782) call2_cli_visual_text_pane

0x437e,	// (0x00062883) smil_status_volume_pane_g3

0x0002,

0xa5f2,	// (0x00068af7) call2_cli_visual_graphic_pane_g1

0xa5f2,	// (0x00068af7) call2_cli_visual_graphic_pane_g2

0xa5f2,	// (0x00068af7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0006da51) call2_cli_visual_graphic_pane_g

0xc7fa,	// (0x0006acff) bg_popup_call2_rect_pane_g1

0xa67e,	// (0x00068b83) bg_popup_call2_rect_pane_g2

0xc802,	// (0x0006ad07) bg_popup_call2_rect_pane_g3

0xc816,	// (0x0006ad1b) bg_popup_call2_rect_pane_g4

0xc81e,	// (0x0006ad23) bg_popup_call2_rect_pane_g5

0xc826,	// (0x0006ad2b) bg_popup_call2_rect_pane_g6

0xc82e,	// (0x0006ad33) bg_popup_call2_rect_pane_g7

0xc836,	// (0x0006ad3b) bg_popup_call2_rect_pane_g8

0xc83e,	// (0x0006ad43) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0006da58) bg_popup_call2_rect_pane_g

0xc846,	// (0x0006ad4b) bg_popup_call2_bubble_pane_g1

0xc84e,	// (0x0006ad53) bg_popup_call2_bubble_pane_g2

0xc856,	// (0x0006ad5b) bg_popup_call2_bubble_pane_g3

0xc85e,	// (0x0006ad63) bg_popup_call2_bubble_pane_g4

0xc866,	// (0x0006ad6b) bg_popup_call2_bubble_pane_g5

0xc86e,	// (0x0006ad73) bg_popup_call2_bubble_pane_g6

0xc876,	// (0x0006ad7b) bg_popup_call2_bubble_pane_g7

0xc87e,	// (0x0006ad83) bg_popup_call2_bubble_pane_g8

0xc886,	// (0x0006ad8b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0006da6b) bg_popup_call2_bubble_pane_g

0x1310,	// (0x0005f815) aid_cale_week_size_cell_pane

0x1a93,	// (0x0005ff98) aid_cams_cif_uncrop_pane_ParamLimits

0x1a93,	// (0x0005ff98) aid_cams_cif_uncrop_pane

0x1bf0,	// (0x000600f5) aid_cams_size_cell_ParamLimits

0x1bf0,	// (0x000600f5) aid_cams_size_cell

0x1bfc,	// (0x00060101) grid_cams_pane_ParamLimits

0x1c0a,	// (0x0006010f) linegrid_cams_pane_ParamLimits

0x1df2,	// (0x000602f7) call_video_pane_t1

0x1e0f,	// (0x00060314) call_video_pane_t2

0x0001,

0xf253,	// (0x0006d758) call_video_pane_t

0x22db,	// (0x000607e0) aid_cale_month_size_cell_pane_ParamLimits

0x22db,	// (0x000607e0) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0006daf5) smil_status_volume_pane_g

0x438b,	// (0x00062890) volume_smil_pane_ParamLimits

0x0ab2,	// (0x0005efb7) aid_popup2_width_pane

0x120e,	// (0x0005f713) cell_qdial_pane_g4_ParamLimits

0x120e,	// (0x0005f713) cell_qdial_pane_g4

0x32c5,	// (0x000617ca) aid_blid_cardinal_pane_ParamLimits

0x32d5,	// (0x000617da) aid_blid_destination_pane_ParamLimits

0x32d5,	// (0x000617da) aid_blid_destination_pane

0xa4d8,	// (0x000689dd) bg_popup_call_poc_act_pane_ParamLimits

0xa4d8,	// (0x000689dd) bg_popup_call_poc_act_pane

0xa4d8,	// (0x000689dd) bg_popup_call_poc_inact_pane_ParamLimits

0xa4d8,	// (0x000689dd) bg_popup_call_poc_inact_pane

0xc88e,	// (0x0006ad93) bg_popup_call_poc_act_pane_g1

0xc896,	// (0x0006ad9b) bg_popup_call_poc_act_pane_g2

0xc89e,	// (0x0006ada3) bg_popup_call_poc_act_pane_g3

0xc85e,	// (0x0006ad63) bg_popup_call_poc_act_pane_g4

0xc866,	// (0x0006ad6b) bg_popup_call_poc_act_pane_g5

0xc8a6,	// (0x0006adab) bg_popup_call_poc_act_pane_g6

0xc876,	// (0x0006ad7b) bg_popup_call_poc_act_pane_g7

0xc8ae,	// (0x0006adb3) bg_popup_call_poc_act_pane_g8

0xa27d,	// (0x00068782) main_usb_pane

0x4183,	// (0x00062688) popup_cale_lunar_info_window

0x2127,	// (0x0006062c) im_reading_pane_t1_ParamLimits

0xac7f,	// (0x00069184) list_im_pane_ParamLimits

0xac90,	// (0x00069195) scroll_pane_cp07_ParamLimits

0xa27d,	// (0x00068782) grid_highlight_pane_cp012

0xa4d8,	// (0x000689dd) mup_scale_pane_ParamLimits

0xb62c,	// (0x00069b31) main_usb_pane_g1_ParamLimits

0xb62c,	// (0x00069b31) main_usb_pane_g1

0x3ecc,	// (0x000623d1) main_usb_pane_g2_ParamLimits

0x3ecc,	// (0x000623d1) main_usb_pane_g2

0x0001,

0xf590,	// (0x0006da95) main_usb_pane_g_ParamLimits

0xf590,	// (0x0006da95) main_usb_pane_g

0x3ed8,	// (0x000623dd) main_usb_pane_t1_ParamLimits

0x3ed8,	// (0x000623dd) main_usb_pane_t1

0x3eea,	// (0x000623ef) main_usb_pane_t2_ParamLimits

0x3eea,	// (0x000623ef) main_usb_pane_t2

0x3efc,	// (0x00062401) main_usb_pane_t3_ParamLimits

0x3efc,	// (0x00062401) main_usb_pane_t3

0x3f0e,	// (0x00062413) main_usb_pane_t4_ParamLimits

0x3f0e,	// (0x00062413) main_usb_pane_t4

0x3f20,	// (0x00062425) main_usb_pane_t5_ParamLimits

0x3f20,	// (0x00062425) main_usb_pane_t5

0x3f32,	// (0x00062437) main_usb_pane_t6_ParamLimits

0x3f32,	// (0x00062437) main_usb_pane_t6

0x0005,

0xf595,	// (0x0006da9a) main_usb_pane_t_ParamLimits

0x3264,	// (0x00061769) aid_text_placing

0x326f,	// (0x00061774) main_location2_pane_t1_ParamLimits

0x3285,	// (0x0006178a) main_location2_pane_t2_ParamLimits

0x329b,	// (0x000617a0) main_location2_pane_t3_ParamLimits

0x32b1,	// (0x000617b6) main_location2_pane_t4_ParamLimits

0x32b1,	// (0x000617b6) main_location2_pane_t4

0xf3b4,	// (0x0006d8b9) main_location2_pane_t_ParamLimits

0xa514,	// (0x00068a19) find_pinb_pane_g2_ParamLimits

0xa514,	// (0x00068a19) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0006d609) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0006d609) find_pinb_pane_g

0xa520,	// (0x00068a25) find_pinb_pane_t1_ParamLimits

0xa532,	// (0x00068a37) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0006d60e) find_pinb_pane_t_ParamLimits

0xa27d,	// (0x00068782) main_call3_pane

0x288e,	// (0x00060d93) cale_month_day_heading_pane_t1_ParamLimits

0x2910,	// (0x00060e15) cale_month_day_heading_pane_t2_ParamLimits

0x2989,	// (0x00060e8e) cale_month_day_heading_pane_t3_ParamLimits

0x2a02,	// (0x00060f07) cale_month_day_heading_pane_t4_ParamLimits

0x2a7b,	// (0x00060f80) cale_month_day_heading_pane_t5_ParamLimits

0x2afc,	// (0x00061001) cale_month_day_heading_pane_t6_ParamLimits

0x2b85,	// (0x0006108a) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0006d790) cale_month_day_heading_pane_t_ParamLimits

0xaeda,	// (0x000693df) smil_status_volume_pane

0x3a8a,	// (0x00061f8f) postcard_address_pane_ParamLimits

0x3a8a,	// (0x00061f8f) postcard_address_pane

0x3a98,	// (0x00061f9d) postcard_message_pane_ParamLimits

0x3a98,	// (0x00061f9d) postcard_message_pane

0x3ea2,	// (0x000623a7) call2_cli_visual_pane_t1_ParamLimits

0x3ea2,	// (0x000623a7) call2_cli_visual_pane_t1

0x44d1,	// (0x000629d6) postcard_message_pane_t1_ParamLimits

0x44d1,	// (0x000629d6) postcard_message_pane_t1

0xcac2,	// (0x0006afc7) postcard_address_pane_t1_ParamLimits

0xcac2,	// (0x0006afc7) postcard_address_pane_t1

0x44c2,	// (0x000629c7) popup_call3_audio_in_window_ParamLimits

0x44c2,	// (0x000629c7) popup_call3_audio_in_window

0x43a0,	// (0x000628a5) bg_popup_call3_in_pane_ParamLimits

0x43a0,	// (0x000628a5) bg_popup_call3_in_pane

0x4408,	// (0x0006290d) popup_call3_audio_in_window_g1_ParamLimits

0x4408,	// (0x0006290d) popup_call3_audio_in_window_g1

0x4420,	// (0x00062925) popup_call3_audio_in_window_g2_ParamLimits

0x4420,	// (0x00062925) popup_call3_audio_in_window_g2

0x4438,	// (0x0006293d) popup_call3_audio_in_window_g3_ParamLimits

0x4438,	// (0x0006293d) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0006dafc) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0006dafc) popup_call3_audio_in_window_g

0x4460,	// (0x00062965) popup_call3_audio_in_window_t1_ParamLimits

0x4460,	// (0x00062965) popup_call3_audio_in_window_t1

0x4488,	// (0x0006298d) popup_call3_audio_in_window_t2_ParamLimits

0x4488,	// (0x0006298d) popup_call3_audio_in_window_t2

0x44b0,	// (0x000629b5) popup_call3_audio_in_window_t3_ParamLimits

0x44b0,	// (0x000629b5) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0006db05) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0006db05) popup_call3_audio_in_window_t

0xab7a,	// (0x0006907f) bg_popup_call3_rect_pane

0xc7fa,	// (0x0006acff) bg_popup_call3_rect_pane_g1

0xa67e,	// (0x00068b83) bg_popup_call3_rect_pane_g2

0xc802,	// (0x0006ad07) bg_popup_call3_rect_pane_g3

0xc816,	// (0x0006ad1b) bg_popup_call3_rect_pane_g4

0xc81e,	// (0x0006ad23) bg_popup_call3_rect_pane_g5

0xc826,	// (0x0006ad2b) bg_popup_call3_rect_pane_g6

0xc82e,	// (0x0006ad33) bg_popup_call3_rect_pane_g7

0x3609,	// (0x00061b0e) mup_visualizer_osc_pane

0xb6a3,	// (0x00069ba8) mup_visualizer_spec_pane

0x43c0,	// (0x000628c5) call3_video_qcif_pane_ParamLimits

0x43c0,	// (0x000628c5) call3_video_qcif_pane

0x43d2,	// (0x000628d7) call3_video_qcif_uncrop_pane_ParamLimits

0x43d2,	// (0x000628d7) call3_video_qcif_uncrop_pane

0x43e2,	// (0x000628e7) call3_video_subqcif_pane_ParamLimits

0x43e2,	// (0x000628e7) call3_video_subqcif_pane

0x43f6,	// (0x000628fb) call3_video_subqcif_uncrop_pane_ParamLimits

0x43f6,	// (0x000628fb) call3_video_subqcif_uncrop_pane

0x4450,	// (0x00062955) popup_call3_audio_in_window_g4_ParamLimits

0x4450,	// (0x00062955) popup_call3_audio_in_window_g4

0x436d,	// (0x00062872) mup_spec_half_pane

0x4376,	// (0x0006287b) mup_spec_half_pane_cp

0xca82,	// (0x0006af87) mup_osc_middle_pane

0xca8b,	// (0x0006af90) mup_visualizer_osc_pane_g1

0x434d,	// (0x00062852) mup_spec_bar_pane_ParamLimits

0x434d,	// (0x00062852) mup_spec_bar_pane

0xca6f,	// (0x0006af74) mup_spec_bar_pane_g1

0xca79,	// (0x0006af7e) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0006daf0) mup_spec_bar_pane_g

0x1310,	// (0x0005f815) aid_cale_week_size_cell_pane_ParamLimits

0x132a,	// (0x0005f82f) bg_cale_heading_pane_ParamLimits

0x1353,	// (0x0005f858) bg_cale_pane_cp01_ParamLimits

0x1375,	// (0x0005f87a) cale_week_corner_pane_ParamLimits

0x1394,	// (0x0005f899) cale_week_day_heading_pane_ParamLimits

0x13c2,	// (0x0005f8c7) cale_week_scroll_pane_g1_ParamLimits

0x13e6,	// (0x0005f8eb) cale_week_scroll_pane_g2_ParamLimits

0x13fe,	// (0x0005f903) cale_week_scroll_pane_g3_ParamLimits

0x1416,	// (0x0005f91b) cale_week_scroll_pane_g4_ParamLimits

0x142e,	// (0x0005f933) cale_week_scroll_pane_g5_ParamLimits

0x1446,	// (0x0005f94b) cale_week_scroll_pane_g6_ParamLimits

0x1466,	// (0x0005f96b) cale_week_scroll_pane_g7_ParamLimits

0x1486,	// (0x0005f98b) cale_week_scroll_pane_g8_ParamLimits

0x14a6,	// (0x0005f9ab) cale_week_scroll_pane_g9_ParamLimits

0x14c3,	// (0x0005f9c8) cale_week_scroll_pane_g10_ParamLimits

0x14e0,	// (0x0005f9e5) cale_week_scroll_pane_g11_ParamLimits

0x14ff,	// (0x0005fa04) cale_week_scroll_pane_g12_ParamLimits

0x1524,	// (0x0005fa29) cale_week_scroll_pane_g13_ParamLimits

0x154d,	// (0x0005fa52) cale_week_scroll_pane_g14_ParamLimits

0x1576,	// (0x0005fa7b) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0006d69a) cale_week_scroll_pane_g_ParamLimits

0x15bf,	// (0x0005fac4) cale_week_time_pane_ParamLimits

0x15df,	// (0x0005fae4) grid_cale_week_pane_ParamLimits

0xaaf0,	// (0x00068ff5) listscroll_cale_week_pane_t1

0xab02,	// (0x00069007) scroll_pane_cp08_ParamLimits

0x2353,	// (0x00060858) cale_month_corner_pane_ParamLimits

0xaeb0,	// (0x000693b5) cale_month_pane_t1

0x2815,	// (0x00060d1a) cale_month_week_pane_ParamLimits

0xb62c,	// (0x00069b31) popup_call_status_window_g1_ParamLimits

0x3082,	// (0x00061587) popup_call_status_window_g2_ParamLimits

0x308e,	// (0x00061593) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0006d840) popup_call_status_window_g_ParamLimits

0xb278,	// (0x0006977d) aid_call2_pane

0x38b7,	// (0x00061dbc) msg_header_pane_g1

0x3a8a,	// (0x00061f8f) postcard_address2_pane_ParamLimits

0x3a8a,	// (0x00061f8f) postcard_address2_pane

0x3a98,	// (0x00061f9d) postcard_message2_pane_ParamLimits

0x3a98,	// (0x00061f9d) postcard_message2_pane

0x4307,	// (0x0006280c) message2_row_pane_ParamLimits

0x4307,	// (0x0006280c) message2_row_pane

0xca2a,	// (0x0006af2f) address2_row_pane_ParamLimits

0xca2a,	// (0x0006af2f) address2_row_pane

0xca3d,	// (0x0006af42) postcard_message2_row_pane_g1

0xca45,	// (0x0006af4a) postcard_message2_row_pane_t1

0xca3d,	// (0x0006af42) address2_row_pane_g1

0xca45,	// (0x0006af4a) address2_row_pane_t1

0x196d,	// (0x0005fe72) aid_size_cell_vorec

0xa27d,	// (0x00068782) main_rss_pane

0x4321,	// (0x00062826) rss_list_single_pane_ParamLimits

0x4321,	// (0x00062826) rss_list_single_pane

0xca53,	// (0x0006af58) rss_list_single_pane_t1

0xca61,	// (0x0006af66) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0006daeb) rss_list_single_pane_t

0xa27d,	// (0x00068782) main_camera2_pane

0xa27d,	// (0x00068782) main_video2_pane

0x4535,	// (0x00062a3a) cams_zoom_pane_cp2_ParamLimits

0x4535,	// (0x00062a3a) cams_zoom_pane_cp2

0x4541,	// (0x00062a46) image2_vga_pane_ParamLimits

0x4541,	// (0x00062a46) image2_vga_pane

0x4550,	// (0x00062a55) main_camera2_pane_g1_ParamLimits

0x4550,	// (0x00062a55) main_camera2_pane_g1

0x455c,	// (0x00062a61) main_camera2_pane_g2_ParamLimits

0x455c,	// (0x00062a61) main_camera2_pane_g2

0x4568,	// (0x00062a6d) main_camera2_pane_g3_ParamLimits

0x4568,	// (0x00062a6d) main_camera2_pane_g3

0x4574,	// (0x00062a79) main_camera2_pane_g4_ParamLimits

0x4574,	// (0x00062a79) main_camera2_pane_g4

0x4580,	// (0x00062a85) main_camera2_pane_g5_ParamLimits

0x4580,	// (0x00062a85) main_camera2_pane_g5

0x458c,	// (0x00062a91) main_camera2_pane_g6_ParamLimits

0x458c,	// (0x00062a91) main_camera2_pane_g6

0x4598,	// (0x00062a9d) main_camera2_pane_g7_ParamLimits

0x4598,	// (0x00062a9d) main_camera2_pane_g7

0x45a4,	// (0x00062aa9) main_camera2_pane_g8_ParamLimits

0x45a4,	// (0x00062aa9) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0006db0c) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0006db0c) main_camera2_pane_g

0x45bc,	// (0x00062ac1) main_camera2_pane_t1_ParamLimits

0x45bc,	// (0x00062ac1) main_camera2_pane_t1

0x45ce,	// (0x00062ad3) main_camera2_pane_t2_ParamLimits

0x45ce,	// (0x00062ad3) main_camera2_pane_t2

0x45e0,	// (0x00062ae5) main_camera2_pane_t3_ParamLimits

0x45e0,	// (0x00062ae5) main_camera2_pane_t3

0x45f2,	// (0x00062af7) main_camera2_pane_t4_ParamLimits

0x45f2,	// (0x00062af7) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0006db1f) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0006db1f) main_camera2_pane_t

0x464f,	// (0x00062b54) cams_zoom_pane_cp4_ParamLimits

0x464f,	// (0x00062b54) cams_zoom_pane_cp4

0x465f,	// (0x00062b64) image2_cif_pane_ParamLimits

0x465f,	// (0x00062b64) image2_cif_pane

0x4674,	// (0x00062b79) image2_subqcif_pane_ParamLimits

0x4674,	// (0x00062b79) image2_subqcif_pane

0x4683,	// (0x00062b88) main_video2_pane_g1_ParamLimits

0x4683,	// (0x00062b88) main_video2_pane_g1

0x4695,	// (0x00062b9a) main_video2_pane_g2_ParamLimits

0x4695,	// (0x00062b9a) main_video2_pane_g2

0x46a5,	// (0x00062baa) main_video2_pane_g3_ParamLimits

0x46a5,	// (0x00062baa) main_video2_pane_g3

0x46b5,	// (0x00062bba) main_video2_pane_g4_ParamLimits

0x46b5,	// (0x00062bba) main_video2_pane_g4

0x46c5,	// (0x00062bca) main_video2_pane_g5_ParamLimits

0x46c5,	// (0x00062bca) main_video2_pane_g5

0x46d5,	// (0x00062bda) main_video2_pane_g6_ParamLimits

0x46d5,	// (0x00062bda) main_video2_pane_g6

0x0005,

0xf629,	// (0x0006db2e) main_video2_pane_g_ParamLimits

0xf629,	// (0x0006db2e) main_video2_pane_g

0x46e7,	// (0x00062bec) main_video2_pane_t1_ParamLimits

0x46e7,	// (0x00062bec) main_video2_pane_t1

0x4701,	// (0x00062c06) main_video2_pane_t2_ParamLimits

0x4701,	// (0x00062c06) main_video2_pane_t2

0x4727,	// (0x00062c2c) main_video2_pane_t3_ParamLimits

0x4727,	// (0x00062c2c) main_video2_pane_t3

0x0002,

0xf636,	// (0x0006db3b) main_video2_pane_t_ParamLimits

0xf636,	// (0x0006db3b) main_video2_pane_t

0x3fe9,	// (0x000624ee) call_muted_g2

0x0001,

0xf5d8,	// (0x0006dadd) call_muted_g

0xa27d,	// (0x00068782) main_mup2_pane

0xcad9,	// (0x0006afde) main_mup2_pane_g1_ParamLimits

0xcad9,	// (0x0006afde) main_mup2_pane_g1

0x474d,	// (0x00062c52) main_mup2_pane_g2_ParamLimits

0x474d,	// (0x00062c52) main_mup2_pane_g2

0x49df,	// (0x00062ee4) main_mup_pane_g13_cp1

0x49e7,	// (0x00062eec) mup_volume_pane_cp1

0x476f,	// (0x00062c74) main_mup2_pane_g4_ParamLimits

0x476f,	// (0x00062c74) main_mup2_pane_g4

0x4784,	// (0x00062c89) main_mup2_pane_g5_ParamLimits

0x4784,	// (0x00062c89) main_mup2_pane_g5

0x4799,	// (0x00062c9e) main_mup2_pane_g6_ParamLimits

0x4799,	// (0x00062c9e) main_mup2_pane_g6

0x47ae,	// (0x00062cb3) main_mup2_pane_g7_ParamLimits

0x47ae,	// (0x00062cb3) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0006db42) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0006db42) main_mup2_pane_g

0x47ca,	// (0x00062ccf) main_mup2_pane_t1_ParamLimits

0x47ca,	// (0x00062ccf) main_mup2_pane_t1

0x47e1,	// (0x00062ce6) main_mup2_pane_t2_ParamLimits

0x47e1,	// (0x00062ce6) main_mup2_pane_t2

0x47f8,	// (0x00062cfd) main_mup2_pane_t3_ParamLimits

0x47f8,	// (0x00062cfd) main_mup2_pane_t3

0x480f,	// (0x00062d14) main_mup2_pane_t4_ParamLimits

0x480f,	// (0x00062d14) main_mup2_pane_t4

0x4829,	// (0x00062d2e) main_mup2_pane_t5_ParamLimits

0x4829,	// (0x00062d2e) main_mup2_pane_t5

0x4843,	// (0x00062d48) main_mup2_pane_t6_ParamLimits

0x4843,	// (0x00062d48) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0006db51) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0006db51) main_mup2_pane_t

0x487b,	// (0x00062d80) mup2_visualizer_pane_ParamLimits

0x487b,	// (0x00062d80) mup2_visualizer_pane

0x48b1,	// (0x00062db6) mup_progress_pane_cp_ParamLimits

0x48b1,	// (0x00062db6) mup_progress_pane_cp

0x49ca,	// (0x00062ecf) mup_volume_pane_cp_ParamLimits

0x49ca,	// (0x00062ecf) mup_volume_pane_cp

0x48ca,	// (0x00062dcf) mup2_visualizer_pane_g1_ParamLimits

0x48ca,	// (0x00062dcf) mup2_visualizer_pane_g1

0xcae5,	// (0x0006afea) mup2_visualizer_pane_g2_ParamLimits

0xcae5,	// (0x0006afea) mup2_visualizer_pane_g2

0x48df,	// (0x00062de4) mup2_visualizer_pane_g3_ParamLimits

0x48df,	// (0x00062de4) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0006db5e) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0006db5e) mup2_visualizer_pane_g

0xb8cc,	// (0x00069dd1) aid_size_cell_fmradio

0x40ff,	// (0x00062604) aid_height_parent_landcape

0xad0e,	// (0x00069213) wml_content_pane_cp

0xad16,	// (0x0006921b) wml_tabs_pane

0xad1f,	// (0x00069224) popup_wml_miniature_window

0xad27,	// (0x0006922c) scroll_pane_cp021

0xad3b,	// (0x00069240) wml_content_pane_comp8

0xa27d,	// (0x00068782) bg_popup_sub_pane_cp05

0xcb03,	// (0x0006b008) popup_wml_miniature_window_g1

0xcb0b,	// (0x0006b010) wml_miniature_view_pane

0x48ed,	// (0x00062df2) aid_size_wml_view

0x48f5,	// (0x00062dfa) wml_miniature_view_pane_g1

0x48fe,	// (0x00062e03) wml_miniature_view_pane_g2

0x4907,	// (0x00062e0c) wml_miniature_view_pane_g3

0x490f,	// (0x00062e14) wml_miniature_view_pane_g4

0x4917,	// (0x00062e1c) wml_miniature_view_pane_g5

0x491f,	// (0x00062e24) wml_miniature_view_pane_g6

0x4927,	// (0x00062e2c) wml_miniature_view_pane_g7

0x492f,	// (0x00062e34) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0006db65) wml_miniature_view_pane_g

0xcad9,	// (0x0006afde) background_graphic_ParamLimits

0xcad9,	// (0x0006afde) background_graphic

0xcb13,	// (0x0006b018) wml_tabs_2_pane

0xcb1c,	// (0x0006b021) wml_tabs_3_pane_ParamLimits

0xcb1c,	// (0x0006b021) wml_tabs_3_pane

0xcb2e,	// (0x0006b033) wml_tabs_4_pane_ParamLimits

0xcb2e,	// (0x0006b033) wml_tabs_4_pane

0xcb44,	// (0x0006b049) wml_tabs_5_pane_ParamLimits

0xcb44,	// (0x0006b049) wml_tabs_5_pane

0xcb5e,	// (0x0006b063) wml_tabs_pane_g2_ParamLimits

0xcb5e,	// (0x0006b063) wml_tabs_pane_g2

0xcb72,	// (0x0006b077) wml_tabs_pane_g3_ParamLimits

0xcb72,	// (0x0006b077) wml_tabs_pane_g3

0x4937,	// (0x00062e3c) wml_tabs_2_active_pane_ParamLimits

0x4937,	// (0x00062e3c) wml_tabs_2_active_pane

0x4949,	// (0x00062e4e) wml_tabs_2_passive_pane_ParamLimits

0x4949,	// (0x00062e4e) wml_tabs_2_passive_pane

0x495b,	// (0x00062e60) wml_tabs_3_active_pane_cp_ParamLimits

0x495b,	// (0x00062e60) wml_tabs_3_active_pane_cp

0x496e,	// (0x00062e73) wml_tabs_3_passive_pane_ParamLimits

0x496e,	// (0x00062e73) wml_tabs_3_passive_pane

0x497f,	// (0x00062e84) wml_tabs_3_passive_pane_cp_ParamLimits

0x497f,	// (0x00062e84) wml_tabs_3_passive_pane_cp

0x4994,	// (0x00062e99) tabs_4_active_pane

0x499c,	// (0x00062ea1) tabs_4_passive_pane

0x49a4,	// (0x00062ea9) tabs_4_passive_pane_cp

0x49ac,	// (0x00062eb1) tabs_4_passive_pane_cp2

0x3ec4,	// (0x000623c9) aid_height_text

0x35d2,	// (0x00061ad7) mup_volume_cont_pane_ParamLimits

0x35d2,	// (0x00061ad7) mup_volume_cont_pane

0x0e68,	// (0x0005f36d) aid_size_cell_pinb

0x0e72,	// (0x0005f377) aid_size_list_pinb

0x489a,	// (0x00062d9f) mup2_volume_cont_pane_ParamLimits

0x489a,	// (0x00062d9f) mup2_volume_cont_pane

0x49b6,	// (0x00062ebb) mup2_volume_cont_pane_g1_ParamLimits

0x49b6,	// (0x00062ebb) mup2_volume_cont_pane_g1

0x0abe,	// (0x0005efc3) aid_size_cell_touch_ParamLimits

0x0abe,	// (0x0005efc3) aid_size_cell_touch

0x0d87,	// (0x0005f28c) touch_pane_ParamLimits

0x0d87,	// (0x0005f28c) touch_pane

0x0d7d,	// (0x0005f282) main_rss2_pane

0xcb8f,	// (0x0006b094) listscroll_rss2_pane

0xcb98,	// (0x0006b09d) rss2_navigation_pane

0xcba0,	// (0x0006b0a5) list_rss2_pane

0xb39c,	// (0x000698a1) scroll_pane_cp22

0xcba8,	// (0x0006b0ad) rss2_navigation_pane_g1

0xcbb1,	// (0x0006b0b6) rss2_navigation_pane_g2

0xcbb9,	// (0x0006b0be) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0006db76) rss2_navigation_pane_g

0xcbc1,	// (0x0006b0c6) rss2_navigation_pane_t1

0x49ef,	// (0x00062ef4) rss2_list_single_pane_ParamLimits

0x49ef,	// (0x00062ef4) rss2_list_single_pane

0xcbcf,	// (0x0006b0d4) rss2_list_single_pane_t2

0xcbdd,	// (0x0006b0e2) rss2_list_single_pane_t3_ParamLimits

0xcbdd,	// (0x0006b0e2) rss2_list_single_pane_t3

0xcbfa,	// (0x0006b0ff) rss2_list_single_pane_t4

0x2e4d,	// (0x00061352) smil_status_pane_g1

0x4128,	// (0x0006262d) main_image2_pane_ParamLimits

0x4128,	// (0x0006262d) main_image2_pane

0x45b0,	// (0x00062ab5) main_camera2_pane_g9_ParamLimits

0x45b0,	// (0x00062ab5) main_camera2_pane_g9

0x4604,	// (0x00062b09) main_camera2_pane_t5_ParamLimits

0x4604,	// (0x00062b09) main_camera2_pane_t5

0x4616,	// (0x00062b1b) main_camera2_pane_t6_ParamLimits

0x4616,	// (0x00062b1b) main_camera2_pane_t6

0x4a12,	// (0x00062f17) main_image2_pane_g1_ParamLimits

0x4a12,	// (0x00062f17) main_image2_pane_g1

0x3c61,	// (0x00062166) smil2_video_pane_ParamLimits

0x3c61,	// (0x00062166) smil2_video_pane

0x09c2,	// (0x0005eec7) aid_zoom_text_primary_cp

0x0d18,	// (0x0005f21d) popup_preview_fixed_window

0xac77,	// (0x0006917c) im_reading_pane_g1

0x44fa,	// (0x000629ff) cams2_bc_adjust_pane_cp_ParamLimits

0x44fa,	// (0x000629ff) cams2_bc_adjust_pane_cp

0x4641,	// (0x00062b46) cams2_bc_adjust_pane_ParamLimits

0x4641,	// (0x00062b46) cams2_bc_adjust_pane

0xd38e,	// (0x0006b893) cams2_bc_adjust_pane_g1

0x4a1e,	// (0x00062f23) cams2_slider_pane

0x4a27,	// (0x00062f2c) cams2_slider_pane_g1

0x4a30,	// (0x00062f35) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0006db7d) cams2_slider_pane_g

0x0f6d,	// (0x0005f472) calc_display_pane_ParamLimits

0x0f8b,	// (0x0005f490) calc_paper_pane_ParamLimits

0x0fa7,	// (0x0005f4ac) grid_calc_pane_ParamLimits

0x30ec,	// (0x000615f1) popup_clock_digital_window_t1_ParamLimits

0xb869,	// (0x00069d6e) main_image_pane_t1

0x0f53,	// (0x0005f458) aid_size_cell_calc_ParamLimits

0x0f53,	// (0x0005f458) aid_size_cell_calc

0x4159,	// (0x0006265e) popup_blid_sat_info2_window_ParamLimits

0x4159,	// (0x0006265e) popup_blid_sat_info2_window

0xcc10,	// (0x0006b115) aid_size_cell_blid

0xcc18,	// (0x0006b11d) bg_popup_window_pane_cp07

0xcc3b,	// (0x0006b140) grid_popup_blid_pane

0xcc45,	// (0x0006b14a) heading_pane_cp05_ParamLimits

0xcc45,	// (0x0006b14a) heading_pane_cp05

0xcd0f,	// (0x0006b214) cell_popup_blid_pane_ParamLimits

0xcd0f,	// (0x0006b214) cell_popup_blid_pane

0xcd39,	// (0x0006b23e) cell_popup_blid_pane_g1

0xcd41,	// (0x0006b246) cell_popup_blid_pane_t1

0x4860,	// (0x00062d65) mup2_indicator_pane_ParamLimits

0x4860,	// (0x00062d65) mup2_indicator_pane

0xab7a,	// (0x0006907f) mup2_visualizer_osc_pane

0xcaf1,	// (0x0006aff6) mup2_visualizer_spec_pane_ParamLimits

0xcaf1,	// (0x0006aff6) mup2_visualizer_spec_pane

0x4a4a,	// (0x00062f4f) mup2_spec_half_pane

0x4a53,	// (0x00062f58) mup2_spec_half_pane_cp

0x4a5d,	// (0x00062f62) mup2_spec_bar_pane_ParamLimits

0x4a5d,	// (0x00062f62) mup2_spec_bar_pane

0xca6f,	// (0x0006af74) mup2_spec_bar_pane_g1

0xca79,	// (0x0006af7e) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0006daf0) mup2_spec_bar_pane_g

0x4a7c,	// (0x00062f81) mup2_osc_middle_pane

0xca8b,	// (0x0006af90) mup2_visualizer_osc_pane_g1

0x9e55,	// (0x0006835a) popup_number_entry_window_t1_ParamLimits

0x9e68,	// (0x0006836d) popup_number_entry_window_t2_ParamLimits

0x9e7a,	// (0x0006837f) popup_number_entry_window_t3_ParamLimits

0x9e8c,	// (0x00068391) popup_number_entry_window_t5_ParamLimits

0x9e8c,	// (0x00068391) popup_number_entry_window_t5

0xf0af,	// (0x0006d5b4) popup_number_entry_window_t_ParamLimits

0x9ec1,	// (0x000683c6) text_title_cp2_ParamLimits

0x394e,	// (0x00061e53) aid_hotspot_pointer_text2_pane

0x39e8,	// (0x00061eed) main_viewer_pane_g9_ParamLimits

0x39e8,	// (0x00061eed) main_viewer_pane_g9

0xaeb0,	// (0x000693b5) cale_month_pane_t1_ParamLimits

0xaeed,	// (0x000693f2) bg_cale_pane_ParamLimits

0xaf05,	// (0x0006940a) list_cale_pane_ParamLimits

0xaf16,	// (0x0006941b) listscroll_cale_day_pane_t1

0xaf28,	// (0x0006942d) scroll_pane_cp09_ParamLimits

0x3611,	// (0x00061b16) main_mup_eq_pane_t1_ParamLimits

0x3611,	// (0x00061b16) main_mup_eq_pane_t1

0x362d,	// (0x00061b32) main_mup_eq_pane_t2_ParamLimits

0x362d,	// (0x00061b32) main_mup_eq_pane_t2

0x3649,	// (0x00061b4e) main_mup_eq_pane_t3_ParamLimits

0x3649,	// (0x00061b4e) main_mup_eq_pane_t3

0x3663,	// (0x00061b68) main_mup_eq_pane_t4_ParamLimits

0x3663,	// (0x00061b68) main_mup_eq_pane_t4

0x367d,	// (0x00061b82) main_mup_eq_pane_t5_ParamLimits

0x367d,	// (0x00061b82) main_mup_eq_pane_t5

0x3697,	// (0x00061b9c) main_mup_eq_pane_t6_ParamLimits

0x3697,	// (0x00061b9c) main_mup_eq_pane_t6

0x36ad,	// (0x00061bb2) main_mup_eq_pane_t7_ParamLimits

0x36ad,	// (0x00061bb2) main_mup_eq_pane_t7

0x36c3,	// (0x00061bc8) main_mup_eq_pane_t8_ParamLimits

0x36c3,	// (0x00061bc8) main_mup_eq_pane_t8

0x36d9,	// (0x00061bde) main_mup_eq_pane_t9_ParamLimits

0x36d9,	// (0x00061bde) main_mup_eq_pane_t9

0x36f5,	// (0x00061bfa) main_mup_eq_pane_t10_ParamLimits

0x36f5,	// (0x00061bfa) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0006d93f) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0006d93f) main_mup_eq_pane_t

0x37ba,	// (0x00061cbf) mup_equalizer_pane_cp5_ParamLimits

0x37d2,	// (0x00061cd7) mup_equalizer_pane_cp6_ParamLimits

0x37ea,	// (0x00061cef) mup_equalizer_pane_cp7_ParamLimits

0x0d7d,	// (0x0005f282) main_gallery_pane

0xca94,	// (0x0006af99) smil2_volume_pane

0xca9c,	// (0x0006afa1) smil_status_volume_pane_g1_ParamLimits

0xcaaf,	// (0x0006afb4) smil_status_volume_pane_g2_ParamLimits

0x437e,	// (0x00062883) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0006daf5) smil_status_volume_pane_g_ParamLimits

0xcc18,	// (0x0006b11d) bg_popup_window_pane_cp07_ParamLimits

0xcc26,	// (0x0006b12b) blid_firmament_pane

0x4a85,	// (0x00062f8a) aid_size_cell_gallery_ParamLimits

0x4a85,	// (0x00062f8a) aid_size_cell_gallery

0x4a93,	// (0x00062f98) grid_gallery_pane_ParamLimits

0x4a93,	// (0x00062f98) grid_gallery_pane

0x4aa3,	// (0x00062fa8) cell_gallery_pane_ParamLimits

0x4aa3,	// (0x00062fa8) cell_gallery_pane

0xcd4f,	// (0x0006b254) bg_cell_gallery_focus_pane_ParamLimits

0xcd4f,	// (0x0006b254) bg_cell_gallery_focus_pane

0xcd61,	// (0x0006b266) cell_gallery_pane_g1_ParamLimits

0xcd61,	// (0x0006b266) cell_gallery_pane_g1

0x4aee,	// (0x00062ff3) cell_gallery_pane_g2_ParamLimits

0x4aee,	// (0x00062ff3) cell_gallery_pane_g2

0x4afb,	// (0x00063000) cell_gallery_pane_g3_ParamLimits

0x4afb,	// (0x00063000) cell_gallery_pane_g3

0xcd6d,	// (0x0006b272) cell_gallery_pane_g4_ParamLimits

0xcd6d,	// (0x0006b272) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0006dba3) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0006dba3) cell_gallery_pane_g

0xcd79,	// (0x0006b27e) bg_cell_gallery_focus_pane_g1

0xcd81,	// (0x0006b286) bg_cell_gallery_focus_pane_g2

0xcd89,	// (0x0006b28e) bg_cell_gallery_focus_pane_g3

0xcd91,	// (0x0006b296) bg_cell_gallery_focus_pane_g4

0xcd99,	// (0x0006b29e) bg_cell_gallery_focus_pane_g5

0xcda1,	// (0x0006b2a6) bg_cell_gallery_focus_pane_g6

0xcda9,	// (0x0006b2ae) bg_cell_gallery_focus_pane_g7

0xcdb1,	// (0x0006b2b6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0006dbac) bg_cell_gallery_focus_pane_g

0xcdb9,	// (0x0006b2be) aid_firma_cardinal

0xcdcd,	// (0x0006b2d2) blid_firmament_pane_t1

0xcde4,	// (0x0006b2e9) blid_firmament_pane_t2

0xcdfb,	// (0x0006b300) blid_firmament_pane_t3

0xce12,	// (0x0006b317) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0006dbbd) blid_firmament_pane_t

0xce29,	// (0x0006b32e) blid_sat_info_pane

0xce39,	// (0x0006b33e) blid_sat_info_pane_g1

0xce39,	// (0x0006b33e) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0006dbc6) blid_sat_info_pane_g

0xce43,	// (0x0006b348) blid_sat_info_pane_t1

0xce51,	// (0x0006b356) smil2_volume_content_pane

0xce5a,	// (0x0006b35f) smil2_volume_pane_g1

0xa698,	// (0x00068b9d) smil2_volume_content_pane_g1

0xce62,	// (0x0006b367) smil2_volume_content_pane_g2

0xce6b,	// (0x0006b370) smil2_volume_content_pane_g3

0xce74,	// (0x0006b379) smil2_volume_content_pane_g4

0xce7d,	// (0x0006b382) smil2_volume_content_pane_g5

0xce86,	// (0x0006b38b) smil2_volume_content_pane_g6

0xce8f,	// (0x0006b394) smil2_volume_content_pane_g7

0xce98,	// (0x0006b39d) smil2_volume_content_pane_g8

0xcea1,	// (0x0006b3a6) smil2_volume_content_pane_g9

0xceaa,	// (0x0006b3af) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0006dbcb) smil2_volume_content_pane_g

0x16a0,	// (0x0005fba5) cale_week_day_heading_pane_t1_ParamLimits

0x16c8,	// (0x0005fbcd) cale_week_day_heading_pane_t2_ParamLimits

0x16f5,	// (0x0005fbfa) cale_week_day_heading_pane_t3_ParamLimits

0x1722,	// (0x0005fc27) cale_week_day_heading_pane_t4_ParamLimits

0x174f,	// (0x0005fc54) cale_week_day_heading_pane_t5_ParamLimits

0x177c,	// (0x0005fc81) cale_week_day_heading_pane_t6_ParamLimits

0x17a9,	// (0x0005fcae) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0006d6bb) cale_week_day_heading_pane_t_ParamLimits

0xab1f,	// (0x00069024) bg_cale_side_pane_ParamLimits

0x17d1,	// (0x0005fcd6) cale_week_time_pane_t1_ParamLimits

0x17f5,	// (0x0005fcfa) cale_week_time_pane_t2_ParamLimits

0x1819,	// (0x0005fd1e) cale_week_time_pane_t3_ParamLimits

0x183d,	// (0x0005fd42) cale_week_time_pane_t4_ParamLimits

0x1861,	// (0x0005fd66) cale_week_time_pane_t5_ParamLimits

0x1887,	// (0x0005fd8c) cale_week_time_pane_t6_ParamLimits

0x18af,	// (0x0005fdb4) cale_week_time_pane_t7_ParamLimits

0x18db,	// (0x0005fde0) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0006d6ca) cale_week_time_pane_t_ParamLimits

0x190b,	// (0x0005fe10) cell_cale_week_pane_g2_ParamLimits

0xab1f,	// (0x00069024) bg_cale_side_pane_cp01_ParamLimits

0x2c0e,	// (0x00061113) cale_month_week_pane_t1_ParamLimits

0x2c27,	// (0x0006112c) cale_month_week_pane_t2_ParamLimits

0x2c40,	// (0x00061145) cale_month_week_pane_t3_ParamLimits

0x2c59,	// (0x0006115e) cale_month_week_pane_t4_ParamLimits

0x2c72,	// (0x00061177) cale_month_week_pane_t5_ParamLimits

0x2c8f,	// (0x00061194) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0006d79f) cale_month_week_pane_t_ParamLimits

0x2e0a,	// (0x0006130f) cell_cale_month_pane_g1_ParamLimits

0x0d7d,	// (0x0005f282) main_cale_event_viewer_pane

0x9e2b,	// (0x00068330) listscroll_cale_event_viewer_pane

0xceb3,	// (0x0006b3b8) list_cale_ev_pane

0xcebb,	// (0x0006b3c0) scroll_pane_cp023

0x4b08,	// (0x0006300d) field_cale_ev_pane_ParamLimits

0x4b08,	// (0x0006300d) field_cale_ev_pane

0xcec7,	// (0x0006b3cc) field_cale_ev_content_pane_ParamLimits

0xcec7,	// (0x0006b3cc) field_cale_ev_content_pane

0xced3,	// (0x0006b3d8) field_cale_ev_pane_g1_ParamLimits

0xced3,	// (0x0006b3d8) field_cale_ev_pane_g1

0xcedf,	// (0x0006b3e4) field_cale_ev_pane_g2_ParamLimits

0xcedf,	// (0x0006b3e4) field_cale_ev_pane_g2

0xcef7,	// (0x0006b3fc) field_cale_ev_pane_g3_ParamLimits

0xcef7,	// (0x0006b3fc) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0006dbe0) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0006dbe0) field_cale_ev_pane_g

0xcf0f,	// (0x0006b414) field_cale_ev_pane_t1_ParamLimits

0xcf0f,	// (0x0006b414) field_cale_ev_pane_t1

0x4b2c,	// (0x00063031) field_cale_ev_content_pane_t1_ParamLimits

0x4b2c,	// (0x00063031) field_cale_ev_content_pane_t1

0xb74f,	// (0x00069c54) bg_button_pane_cp01

0x12fe,	// (0x0005f803) listscroll_cale_week_pane_ParamLimits

0xaae7,	// (0x00068fec) popup_toolbar_window_cp01

0xaaf0,	// (0x00068ff5) listscroll_cale_week_pane_t1_ParamLimits

0x12fe,	// (0x0005f803) listscroll_cale_day_pane_ParamLimits

0xaae7,	// (0x00068fec) popup_toolbar_window_cp02

0xaf16,	// (0x0006941b) listscroll_cale_day_pane_t1_ParamLimits

0x4116,	// (0x0006261b) main_cale_month_pane_ParamLimits

0x4278,	// (0x0006277d) popup_toolbar_window_cp03_ParamLimits

0x4278,	// (0x0006277d) popup_toolbar_window_cp03

0x3b71,	// (0x00062076) main_image_pane_g2_ParamLimits

0x3b71,	// (0x00062076) main_image_pane_g2

0x3b7d,	// (0x00062082) main_image_pane_g3_ParamLimits

0x3b7d,	// (0x00062082) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0006d9d1) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0006d9d1) main_image_pane_g

0xb869,	// (0x00069d6e) main_image_pane_t1_ParamLimits

0x3b89,	// (0x0006208e) main_image_pane_t2_ParamLimits

0x3b89,	// (0x0006208e) main_image_pane_t2

0x3b9b,	// (0x000620a0) main_image_pane_t3_ParamLimits

0x3b9b,	// (0x000620a0) main_image_pane_t3

0x3bad,	// (0x000620b2) main_image_pane_t4_ParamLimits

0x3bad,	// (0x000620b2) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0006d9d8) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0006d9d8) main_image_pane_t

0x3bbf,	// (0x000620c4) popup_image_details_window_cp01

0x3bc9,	// (0x000620ce) popup_toobar_trans_pane_cp01_ParamLimits

0x3bc9,	// (0x000620ce) popup_toobar_trans_pane_cp01

0x41ba,	// (0x000626bf) popup_image_details_window_ParamLimits

0x41ba,	// (0x000626bf) popup_image_details_window

0x41c8,	// (0x000626cd) popup_image_focus_window

0x44ec,	// (0x000629f1) camera2_autofocus_pane_ParamLimits

0x44ec,	// (0x000629f1) camera2_autofocus_pane

0x9e2b,	// (0x00068330) bg_popup_sub_pane_cp06

0xcf26,	// (0x0006b42b) popup_image_focus_window_g1

0xcf2e,	// (0x0006b433) popup_image_focus_window_g2

0xcf36,	// (0x0006b43b) popup_image_focus_window_g3

0xcf3e,	// (0x0006b443) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0006dbe7) popup_image_focus_window_g

0xcf46,	// (0x0006b44b) popup_image_focus_window_t1

0xcf54,	// (0x0006b459) popup_image_focus_window_t2

0xcf64,	// (0x0006b469) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0006dbf0) popup_image_focus_window_t

0xcf72,	// (0x0006b477) camera2_autofocus_pane_g1

0xb074,	// (0x00069579) bg_tb_trans_pane_cp01

0xcf80,	// (0x0006b485) popup_image_details_window_g1

0xcf93,	// (0x0006b498) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0006dc02) popup_image_details_window_g

0xcfbc,	// (0x0006b4c1) popup_image_details_window_t1

0xcfce,	// (0x0006b4d3) popup_image_details_window_t2

0xcfe7,	// (0x0006b4ec) popup_image_details_window_t3

0xcffb,	// (0x0006b500) popup_image_details_window_t4

0xd016,	// (0x0006b51b) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0006dc09) popup_image_details_window_t

0xa589,	// (0x00068a8e) bg_calc_paper_pane_ParamLimits

0x0d7d,	// (0x0005f282) grid_highlight_pane_cp013

0x10a4,	// (0x0005f5a9) list_calc_pane_ParamLimits

0x10b6,	// (0x0005f5bb) scroll_pane_cp024

0xa59d,	// (0x00068aa2) bg_calc_display_pane_ParamLimits

0x10be,	// (0x0005f5c3) calc_display_pane_t1_ParamLimits

0x10d3,	// (0x0005f5d8) calc_display_pane_t2_ParamLimits

0x10e8,	// (0x0005f5ed) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0006d63b) calc_display_pane_t_ParamLimits

0x11b8,	// (0x0005f6bd) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0006d658) cell_calc_pane_g

0x11c1,	// (0x0005f6c6) cell_calc_pane_t1

0xa5fc,	// (0x00068b01) grid_highlight_pane_cp02_ParamLimits

0xa612,	// (0x00068b17) toolbar_button_pane_cp01_ParamLimits

0xa612,	// (0x00068b17) toolbar_button_pane_cp01

0xb8ae,	// (0x00069db3) temp_image_control_pane_ParamLimits

0xb8ae,	// (0x00069db3) temp_image_control_pane

0x4128,	// (0x0006262d) main_mp3_pane

0xd030,	// (0x0006b535) temp_image_control_pane_g1_ParamLimits

0xd030,	// (0x0006b535) temp_image_control_pane_g1

0xd03e,	// (0x0006b543) temp_image_control_pane_g2_ParamLimits

0xd03e,	// (0x0006b543) temp_image_control_pane_g2

0xd050,	// (0x0006b555) temp_image_control_pane_g3_ParamLimits

0xd050,	// (0x0006b555) temp_image_control_pane_g3

0x4b77,	// (0x0006307c) temp_image_control_pane_g4_ParamLimits

0x4b77,	// (0x0006307c) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0006dc14) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0006dc14) temp_image_control_pane_g

0xd030,	// (0x0006b535) main_mp3_pane_g1

0x4b88,	// (0x0006308d) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0006dc1d) main_mp3_pane_g

0xd093,	// (0x0006b598) main_mp3_pane_t1

0xab82,	// (0x00069087) main_camera_pane_g8_ParamLimits

0xab82,	// (0x00069087) main_camera_pane_g8

0x1ba6,	// (0x000600ab) main_video_pane_g7_ParamLimits

0x1ba6,	// (0x000600ab) main_video_pane_g7

0x462f,	// (0x00062b34) main_camera2_pane_t7_ParamLimits

0x462f,	// (0x00062b34) main_camera2_pane_t7

0xacce,	// (0x000691d3) scroll_pane_cp025_ParamLimits

0xacce,	// (0x000691d3) scroll_pane_cp025

0xace2,	// (0x000691e7) scroll_pane_cp026_ParamLimits

0xace2,	// (0x000691e7) scroll_pane_cp026

0xacf1,	// (0x000691f6) wml_content_pane_ParamLimits

0x0d7d,	// (0x0005f282) main_touch_calib_pane

0x4c2c,	// (0x00063131) main_touch_calib_pane_g1

0x4c38,	// (0x0006313d) main_touch_calib_pane_g2

0x4c44,	// (0x00063149) main_touch_calib_pane_g3

0x4c50,	// (0x00063155) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0006dc3b) main_touch_calib_pane_g

0x4c5c,	// (0x00063161) main_touch_calib_pane_t1

0x4c73,	// (0x00063178) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0006dc44) main_touch_calib_pane_t

0xb46b,	// (0x00069970) mup_progress_pane_cp02

0xb4a0,	// (0x000699a5) navi_pane_g1

0xb55b,	// (0x00069a60) navi_pane_mp_t3

0x4128,	// (0x0006262d) main_mp3_pane_ParamLimits

0x42b9,	// (0x000627be) navi_pane_ParamLimits

0xd030,	// (0x0006b535) main_mp3_pane_g1_ParamLimits

0x4b88,	// (0x0006308d) main_mp3_pane_g2_ParamLimits

0x4b94,	// (0x00063099) main_mp3_pane_g3_ParamLimits

0x4b94,	// (0x00063099) main_mp3_pane_g3

0x4ba0,	// (0x000630a5) main_mp3_pane_g4_ParamLimits

0x4ba0,	// (0x000630a5) main_mp3_pane_g4

0xd060,	// (0x0006b565) main_mp3_pane_g5_ParamLimits

0xd060,	// (0x0006b565) main_mp3_pane_g5

0xd06e,	// (0x0006b573) main_mp3_pane_g6_ParamLimits

0xd06e,	// (0x0006b573) main_mp3_pane_g6

0xd07b,	// (0x0006b580) main_mp3_pane_g7_ParamLimits

0xd07b,	// (0x0006b580) main_mp3_pane_g7

0xd087,	// (0x0006b58c) main_mp3_pane_g8_ParamLimits

0xd087,	// (0x0006b58c) main_mp3_pane_g8

0xf718,	// (0x0006dc1d) main_mp3_pane_g_ParamLimits

0x4bac,	// (0x000630b1) main_mp3_pane_t2

0x4bbc,	// (0x000630c1) main_mp3_pane_t3

0xd0a1,	// (0x0006b5a6) main_mp3_pane_t4

0xd0af,	// (0x0006b5b4) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0006dc2e) main_mp3_pane_t

0xd0bd,	// (0x0006b5c2) mup_progress_pane_cp01

0x09c2,	// (0x0005eec7) aid_zoom_text_secondary2

0xceb3,	// (0x0006b3b8) list_cale_ev2_pane

0xcebb,	// (0x0006b3c0) scroll_pane_cp023_ParamLimits

0x4cce,	// (0x000631d3) field_cale_ev2_pane_ParamLimits

0x4cce,	// (0x000631d3) field_cale_ev2_pane

0x4ce9,	// (0x000631ee) field_cale_ev2_pane_g1_ParamLimits

0x4ce9,	// (0x000631ee) field_cale_ev2_pane_g1

0x4cf5,	// (0x000631fa) field_cale_ev2_pane_g2_ParamLimits

0x4cf5,	// (0x000631fa) field_cale_ev2_pane_g2

0x4d0d,	// (0x00063212) field_cale_ev2_pane_g3_ParamLimits

0x4d0d,	// (0x00063212) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0006dc4f) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0006dc4f) field_cale_ev2_pane_g

0x4d25,	// (0x0006322a) field_cale_ev2_pane_t1_ParamLimits

0x4d25,	// (0x0006322a) field_cale_ev2_pane_t1

0x4d3c,	// (0x00063241) field_cale_ev2_pane_t2_ParamLimits

0x4d3c,	// (0x00063241) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0006dc58) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0006dc58) field_cale_ev2_pane_t

0x3a50,	// (0x00061f55) main_postcard_pane_g5_ParamLimits

0x3a50,	// (0x00061f55) main_postcard_pane_g5

0x3a5e,	// (0x00061f63) main_postcard_pane_g6_ParamLimits

0x3a5e,	// (0x00061f63) main_postcard_pane_g6

0x19e4,	// (0x0005fee9) camera2_autofocus_pane_cp_ParamLimits

0x19e4,	// (0x0005fee9) camera2_autofocus_pane_cp

0x4128,	// (0x0006262d) main_mup3_pane

0x4d94,	// (0x00063299) main_mup3_pane_g1_ParamLimits

0x4d94,	// (0x00063299) main_mup3_pane_g1

0x4db5,	// (0x000632ba) main_mup3_pane_g2_ParamLimits

0x4db5,	// (0x000632ba) main_mup3_pane_g2

0x4e29,	// (0x0006332e) main_mup3_pane_g3_ParamLimits

0x4e29,	// (0x0006332e) main_mup3_pane_g3

0x4e8e,	// (0x00063393) main_mup3_pane_g4_ParamLimits

0x4e8e,	// (0x00063393) main_mup3_pane_g4

0x4ef3,	// (0x000633f8) main_mup3_pane_g5_ParamLimits

0x4ef3,	// (0x000633f8) main_mup3_pane_g5

0x4f58,	// (0x0006345d) main_mup3_pane_g6_ParamLimits

0x4f58,	// (0x0006345d) main_mup3_pane_g6

0xd0c5,	// (0x0006b5ca) main_mup3_pane_g7_ParamLimits

0xd0c5,	// (0x0006b5ca) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0006dc68) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0006dc68) main_mup3_pane_g

0x4fce,	// (0x000634d3) main_mup3_pane_t1_ParamLimits

0x4fce,	// (0x000634d3) main_mup3_pane_t1

0x5039,	// (0x0006353e) main_mup3_pane_t2_ParamLimits

0x5039,	// (0x0006353e) main_mup3_pane_t2

0x50fe,	// (0x00063603) main_mup3_pane_t4_ParamLimits

0x50fe,	// (0x00063603) main_mup3_pane_t4

0x5152,	// (0x00063657) main_mup3_pane_t5_ParamLimits

0x5152,	// (0x00063657) main_mup3_pane_t5

0x5202,	// (0x00063707) main_mup3_pane_t6_ParamLimits

0x5202,	// (0x00063707) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0006dc79) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0006dc79) main_mup3_pane_t

0x52ac,	// (0x000637b1) mup3_progress_pane_ParamLimits

0x52ac,	// (0x000637b1) mup3_progress_pane

0x532a,	// (0x0006382f) popup_mup3_control_window_ParamLimits

0x532a,	// (0x0006382f) popup_mup3_control_window

0xd0d3,	// (0x0006b5d8) popup_mup3_text_window

0x5347,	// (0x0006384c) mup3_progress_pane_t1

0x5366,	// (0x0006386b) mup3_progress_pane_t2

0xd0db,	// (0x0006b5e0) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0006dc86) mup3_progress_pane_t

0xd0f8,	// (0x0006b5fd) mup_progress_pane_cp03

0x9e2b,	// (0x00068330) bg_tb_trans_pane_cp04

0x5385,	// (0x0006388a) mup3_volume_pane

0x538d,	// (0x00063892) popup_mup3_control_window_g1

0xd396,	// (0x0006b89b) mup3_volume_pane_g1

0xd39f,	// (0x0006b8a4) mup3_volume_pane_g2

0xd3a8,	// (0x0006b8ad) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0006dc8d) mup3_volume_pane_g

0x9e2b,	// (0x00068330) bg_tb_trans_pane_cp03

0xd108,	// (0x0006b60d) popup_mup3_text_window_g1

0xd110,	// (0x0006b615) popup_mup3_text_window_t1

0xa5e5,	// (0x00068aea) list_calc_item_pane_g1_ParamLimits

0xcb86,	// (0x0006b08b) mup_volume_pane_cp_g1

0x4c8c,	// (0x00063191) main_touch_calib_pane_t3

0x4ca2,	// (0x000631a7) main_touch_calib_pane_t4

0x4cb8,	// (0x000631bd) main_touch_calib_pane_t5

0x0aaa,	// (0x0005efaf) aid_cell_size_toolbar2

0x0ab2,	// (0x0005efb7) aid_popup3_width_pane

0x09ba,	// (0x0005eebf) aid_zoom_text_msg_primary

0x19b7,	// (0x0005febc) vorec_t7

0xa5a9,	// (0x00068aae) bg_calc_paper_pane_g1_ParamLimits

0xa5b5,	// (0x00068aba) bg_calc_paper_pane_g2_ParamLimits

0xa5c1,	// (0x00068ac6) bg_calc_paper_pane_g3_ParamLimits

0xa5cd,	// (0x00068ad2) bg_calc_paper_pane_g4_ParamLimits

0xa5d9,	// (0x00068ade) bg_calc_paper_pane_g5_ParamLimits

0x1129,	// (0x0005f62e) bg_calc_paper_pane_g6_ParamLimits

0x113a,	// (0x0005f63f) bg_calc_paper_pane_g7_ParamLimits

0x114b,	// (0x0005f650) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0006d642) bg_calc_paper_pane_g_ParamLimits

0x115c,	// (0x0005f661) calc_bg_paper_pane_g9_ParamLimits

0x1ad5,	// (0x0005ffda) image_qvga_pane_ParamLimits

0x1ad5,	// (0x0005ffda) image_qvga_pane

0xa4d8,	// (0x000689dd) bg_popup_sub_pane_cp04_ParamLimits

0xb7e5,	// (0x00069cea) popup_mup_playback_window_g1_ParamLimits

0xb7f1,	// (0x00069cf6) popup_mup_playback_window_t1_ParamLimits

0xb806,	// (0x00069d0b) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0006d9cc) popup_mup_playback_window_t_ParamLimits

0x475e,	// (0x00062c63) main_mup2_pane_g3_ParamLimits

0x475e,	// (0x00062c63) main_mup2_pane_g3

0x1e98,	// (0x0006039d) popup_toolbar_window_cp04

0xbc01,	// (0x0006a106) popup_call2_audio_second_window_g3_ParamLimits

0xbc01,	// (0x0006a106) popup_call2_audio_second_window_g3

0xc00b,	// (0x0006a510) popup_call2_audio_first_window_g4_ParamLimits

0xc00b,	// (0x0006a510) popup_call2_audio_first_window_g4

0xc68a,	// (0x0006ab8f) popup_call2_audio_in_window_g4_ParamLimits

0xc68a,	// (0x0006ab8f) popup_call2_audio_in_window_g4

0x3b64,	// (0x00062069) aid_area_sk_bg_cut_ParamLimits

0x3b64,	// (0x00062069) aid_area_sk_bg_cut

0xb81b,	// (0x00069d20) aid_area_sk_bg_cut_2_ParamLimits

0xb81b,	// (0x00069d20) aid_area_sk_bg_cut_2

0x4ade,	// (0x00062fe3) aid_placing_details_win

0x4ae6,	// (0x00062feb) aid_placing_details_win_2

0xcf72,	// (0x0006b477) camera2_autofocus_pane_g1_ParamLimits

0x0d09,	// (0x0005f20e) popup_fixed_preview_cale_window_ParamLimits

0x0d09,	// (0x0005f20e) popup_fixed_preview_cale_window

0xb5db,	// (0x00069ae0) navi_slider_pane_g3

0xb5e4,	// (0x00069ae9) navi_slider_pane_g4

0xb5ed,	// (0x00069af2) navi_slider_pane_g5

0xb5db,	// (0x00069ae0) navi_slider_pane_g6

0x3387,	// (0x0006188c) navi_slider_pane_g7

0xb71c,	// (0x00069c21) mup_scale_pane_g3

0xb725,	// (0x00069c2a) mup_scale_pane_g4

0xb72e,	// (0x00069c33) mup_scale_pane_g5

0x3802,	// (0x00061d07) mup_scale_pane_g6

0x380b,	// (0x00061d10) mup_scale_pane_g7

0xb5db,	// (0x00069ae0) cams2_slider_pane_g3

0xcc08,	// (0x0006b10d) cams2_slider_pane_g4

0x4a39,	// (0x00062f3e) cams2_slider_pane_g5

0xb5db,	// (0x00069ae0) cams2_slider_pane_g6

0x4a41,	// (0x00062f46) cams2_slider_pane_g7

0xce39,	// (0x0006b33e) camera2_autofocus_pane_cp_g1

0xc9f5,	// (0x0006aefa) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9f5,	// (0x0006aefa) bg_popup_preview_window_pane_cp02

0xd11e,	// (0x0006b623) list_fp_cale_pane_ParamLimits

0xd11e,	// (0x0006b623) list_fp_cale_pane

0xd12a,	// (0x0006b62f) popup_fixed_preview_cale_window_t1_ParamLimits

0xd12a,	// (0x0006b62f) popup_fixed_preview_cale_window_t1

0x5396,	// (0x0006389b) popup_fixed_preview_cale_window_t2_ParamLimits

0x5396,	// (0x0006389b) popup_fixed_preview_cale_window_t2

0x53ab,	// (0x000638b0) popup_fixed_preview_cale_window_t3_ParamLimits

0x53ab,	// (0x000638b0) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0006dc94) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0006dc94) popup_fixed_preview_cale_window_t

0x53c0,	// (0x000638c5) list_single_fp_cale_pane_ParamLimits

0x53c0,	// (0x000638c5) list_single_fp_cale_pane

0xd148,	// (0x0006b64d) list_single_fp_cale_pane_g1_ParamLimits

0xd148,	// (0x0006b64d) list_single_fp_cale_pane_g1

0xd154,	// (0x0006b659) list_single_fp_cale_pane_g2_ParamLimits

0xd154,	// (0x0006b659) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0006dc9b) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0006dc9b) list_single_fp_cale_pane_g

0xd16d,	// (0x0006b672) list_single_fp_cale_pane_t1_ParamLimits

0xd16d,	// (0x0006b672) list_single_fp_cale_pane_t1

0xd17f,	// (0x0006b684) list_single_fp_cale_pane_t2_ParamLimits

0xd17f,	// (0x0006b684) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0006dca2) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0006dca2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0d7d,	// (0x0005f282) main_dialer_pane

0x53d0,	// (0x000638d5) aid_cell_size_keypad

0x53da,	// (0x000638df) dialer_ne_pane

0x53e4,	// (0x000638e9) grid_dialer_command_1_pane

0x53ec,	// (0x000638f1) grid_dialer_command_2_pane

0x53f4,	// (0x000638f9) grid_dialer_keypad_pane

0x5408,	// (0x0006390d) bg_popup_call_pane_cp06_ParamLimits

0x5408,	// (0x0006390d) bg_popup_call_pane_cp06

0x5414,	// (0x00063919) dialer_ne_clear_pane_ParamLimits

0x5414,	// (0x00063919) dialer_ne_clear_pane

0xd1b2,	// (0x0006b6b7) dialer_ne_pane_g1

0xd1ba,	// (0x0006b6bf) dialer_ne_pane_t1_ParamLimits

0xd1ba,	// (0x0006b6bf) dialer_ne_pane_t1

0x5420,	// (0x00063925) dialer_ne_pane_t2_ParamLimits

0x5420,	// (0x00063925) dialer_ne_pane_t2

0x543d,	// (0x00063942) dialer_ne_pane_t3_ParamLimits

0x543d,	// (0x00063942) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0006dca7) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0006dca7) dialer_ne_pane_t

0x5461,	// (0x00063966) dialer_ne_pane_t3_copy1_ParamLimits

0x5461,	// (0x00063966) dialer_ne_pane_t3_copy1

0x5485,	// (0x0006398a) cell_dialer_keypad_pane_ParamLimits

0x5485,	// (0x0006398a) cell_dialer_keypad_pane

0x549c,	// (0x000639a1) cell_dialer_command_1_pane_ParamLimits

0x549c,	// (0x000639a1) cell_dialer_command_1_pane

0x54b2,	// (0x000639b7) cell_dialer_command_2_pane_ParamLimits

0x54b2,	// (0x000639b7) cell_dialer_command_2_pane

0xd1cc,	// (0x0006b6d1) bg_button_pane_cp02_ParamLimits

0xd1cc,	// (0x0006b6d1) bg_button_pane_cp02

0x54c1,	// (0x000639c6) cell_dialer_keypad_pane_g1_ParamLimits

0x54c1,	// (0x000639c6) cell_dialer_keypad_pane_g1

0xd1cc,	// (0x0006b6d1) bg_button_pane_cp03_ParamLimits

0xd1cc,	// (0x0006b6d1) bg_button_pane_cp03

0x54d6,	// (0x000639db) cell_dialer_command_1_pane_g1_ParamLimits

0x54d6,	// (0x000639db) cell_dialer_command_1_pane_g1

0xd1d8,	// (0x0006b6dd) bg_button_pane_cp04

0x54ea,	// (0x000639ef) cell_dialer_command_2_pane_g1

0xab7a,	// (0x0006907f) bg_button_pane_cp06

0xd1e0,	// (0x0006b6e5) dialer_ne_clear_pane_g1

0xb4ac,	// (0x000699b1) navi_pane_g2

0xb4da,	// (0x000699df) navi_pane_g3

0x0002,

0xf3ca,	// (0x0006d8cf) navi_pane_g

0xb569,	// (0x00069a6e) navi_pane_mv_g2

0xb592,	// (0x00069a97) navi_pane_mv_g5

0x3352,	// (0x00061857) navi_pane_mv_t1

0xa59d,	// (0x00068aa2) main_clock2_pane

0xd3b1,	// (0x0006b8b6) main_clock2_list_pane_ParamLimits

0xd3b1,	// (0x0006b8b6) main_clock2_list_pane

0x5545,	// (0x00063a4a) main_clock2_pane_t1_ParamLimits

0x5545,	// (0x00063a4a) main_clock2_pane_t1

0x5573,	// (0x00063a78) main_clock2_pane_t2_ParamLimits

0x5573,	// (0x00063a78) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0006dcb3) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0006dcb3) main_clock2_pane_t

0x55d8,	// (0x00063add) popup_clock_analogue_window_cp03_ParamLimits

0x55d8,	// (0x00063add) popup_clock_analogue_window_cp03

0x55f6,	// (0x00063afb) popup_clock_digital_window_cp02_ParamLimits

0x55f6,	// (0x00063afb) popup_clock_digital_window_cp02

0x566b,	// (0x00063b70) main_clock2_list_single_pane_ParamLimits

0x566b,	// (0x00063b70) main_clock2_list_single_pane

0xab7a,	// (0x0006907f) list_highlight_pane_cp05

0xd218,	// (0x0006b71d) main_clock2_list_single_pane_t1

0x1e98,	// (0x0006039d) popup_toolbar_window_cp04_ParamLimits

0x4b47,	// (0x0006304c) camera2_autofocus_pane_g2_ParamLimits

0x4b47,	// (0x0006304c) camera2_autofocus_pane_g2

0x4b53,	// (0x00063058) camera2_autofocus_pane_g3_ParamLimits

0x4b53,	// (0x00063058) camera2_autofocus_pane_g3

0x4b5f,	// (0x00063064) camera2_autofocus_pane_g4_ParamLimits

0x4b5f,	// (0x00063064) camera2_autofocus_pane_g4

0x4b6b,	// (0x00063070) camera2_autofocus_pane_g5_ParamLimits

0x4b6b,	// (0x00063070) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0006dbf7) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0006dbf7) camera2_autofocus_pane_g

0x4d51,	// (0x00063256) camera2_autofocus_pane_cp_g2

0x4d59,	// (0x0006325e) camera2_autofocus_pane_cp_g3

0x4d61,	// (0x00063266) camera2_autofocus_pane_cp_g4

0x4d69,	// (0x0006326e) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0006dc5d) camera2_autofocus_pane_cp_g

0x5400,	// (0x00063905) popup_dialer_spcha_window

0x9e2b,	// (0x00068330) bg_popup_sub_pane_cp07

0xd226,	// (0x0006b72b) list_spcha_pane

0xd22e,	// (0x0006b733) list_single_spcha_pane_ParamLimits

0xd22e,	// (0x0006b733) list_single_spcha_pane

0x9e2b,	// (0x00068330) list_highlight_pane_cp06

0xd23f,	// (0x0006b744) list_single_spcha_pane_t1

0xc434,	// (0x0006a939) popup_call2_audio_out_window_g4_ParamLimits

0xc434,	// (0x0006a939) popup_call2_audio_out_window_g4

0x0d7d,	// (0x0005f282) main_imed2_pane

0x41d2,	// (0x000626d7) popup_imed_adjust2_window

0x41e5,	// (0x000626ea) popup_imed_trans_window_ParamLimits

0x41e5,	// (0x000626ea) popup_imed_trans_window

0xcc71,	// (0x0006b176) popup_blid_sat_info2_window_t1

0xcc7f,	// (0x0006b184) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0006db8c) popup_blid_sat_info2_window_t

0x5722,	// (0x00063c27) aid_size_cell_colour_35

0x573c,	// (0x00063c41) aid_size_cell_colour_112

0x5753,	// (0x00063c58) aid_size_cell_effect

0xb074,	// (0x00069579) bg_tb_trans_pane_cp02

0xb620,	// (0x00069b25) heading_imed_pane

0x576d,	// (0x00063c72) listscroll_imed_pane

0xd24d,	// (0x0006b752) heading_imed_pane_g1

0xd255,	// (0x0006b75a) heading_imed_pane_t1

0xd263,	// (0x0006b768) grid_imed_colour_35_pane_ParamLimits

0xd263,	// (0x0006b768) grid_imed_colour_35_pane

0x5779,	// (0x00063c7e) grid_imed_effect_pane

0xd27f,	// (0x0006b784) list_imed_aspect_pane

0x5789,	// (0x00063c8e) scroll_pane_cp027_ParamLimits

0x5789,	// (0x00063c8e) scroll_pane_cp027

0x5795,	// (0x00063c9a) cell_imed_effect_pane_ParamLimits

0x5795,	// (0x00063c9a) cell_imed_effect_pane

0xd287,	// (0x0006b78c) cell_imed_colour_pane_ParamLimits

0xd287,	// (0x0006b78c) cell_imed_colour_pane

0xd2d1,	// (0x0006b7d6) cell_imed_colour_pane_g1_ParamLimits

0xd2d1,	// (0x0006b7d6) cell_imed_colour_pane_g1

0xd2e2,	// (0x0006b7e7) hgihlgiht_grid_pane_cp016_ParamLimits

0xd2e2,	// (0x0006b7e7) hgihlgiht_grid_pane_cp016

0x57b1,	// (0x00063cb6) cell_imed_effect_pane_g1

0x57b9,	// (0x00063cbe) grid_highlight_pane_cp017

0xd2f3,	// (0x0006b7f8) list_imed_single_pane_ParamLimits

0xd2f3,	// (0x0006b7f8) list_imed_single_pane

0x9e2b,	// (0x00068330) list_highlight_pane_cp07

0xd307,	// (0x0006b80c) list_imed_aspect_pane_comp1_t1

0xca01,	// (0x0006af06) bg_tb_trans_pane_cp05

0xd329,	// (0x0006b82e) popup_imed_adjust2_window_g1

0xd350,	// (0x0006b855) popup_imed_adjust2_window_t1

0xd368,	// (0x0006b86d) slider_imed_adjust_pane

0xd3bf,	// (0x0006b8c4) slider_imed_adjust_pane_g1

0xd3cf,	// (0x0006b8d4) slider_imed_adjust_pane_g2

0xd3df,	// (0x0006b8e4) slider_imed_adjust_pane_g3

0xd3f0,	// (0x0006b8f5) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0006dcd0) slider_imed_adjust_pane_g

0x57c2,	// (0x00063cc7) aid_size_cell_clipart2

0xd401,	// (0x0006b906) grid_imed_clipart_pane

0xd40b,	// (0x0006b910) scroll_pane_cp031

0x57ce,	// (0x00063cd3) cell_imed_clipart_pane_ParamLimits

0x57ce,	// (0x00063cd3) cell_imed_clipart_pane

0x57ec,	// (0x00063cf1) cell_imed_clipart_pane_g1

0x9e2b,	// (0x00068330) grid_highlight_pane_cp014

0x5527,	// (0x00063a2c) main_clock2_pane_g1_ParamLimits

0x5527,	// (0x00063a2c) main_clock2_pane_g1

0x5612,	// (0x00063b17) aid_call2_pane_cp10

0x5624,	// (0x00063b29) aid_call_pane_cp10

0xb40b,	// (0x00069910) popup_clock_analogue_window_cp10_g1

0xb40b,	// (0x00069910) popup_clock_analogue_window_cp10_g2

0x5636,	// (0x00063b3b) popup_clock_analogue_window_cp10_g3

0x5636,	// (0x00063b3b) popup_clock_analogue_window_cp10_g4

0xb40b,	// (0x00069910) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0006dcbe) popup_clock_analogue_window_cp10_g

0x564c,	// (0x00063b51) popup_clock_analogue_window_cp10_t1

0x567d,	// (0x00063b82) clock_digital_number_pane_cp10_ParamLimits

0x567d,	// (0x00063b82) clock_digital_number_pane_cp10

0x5697,	// (0x00063b9c) clock_digital_number_pane_cp11_ParamLimits

0x5697,	// (0x00063b9c) clock_digital_number_pane_cp11

0x56b1,	// (0x00063bb6) clock_digital_number_pane_cp12_ParamLimits

0x56b1,	// (0x00063bb6) clock_digital_number_pane_cp12

0x56cb,	// (0x00063bd0) clock_digital_number_pane_cp13_ParamLimits

0x56cb,	// (0x00063bd0) clock_digital_number_pane_cp13

0x56e7,	// (0x00063bec) clock_digital_separator_pane_cp10_ParamLimits

0x56e7,	// (0x00063bec) clock_digital_separator_pane_cp10

0x5701,	// (0x00063c06) popup_clock_digital_window_cp02_t1_ParamLimits

0x5701,	// (0x00063c06) popup_clock_digital_window_cp02_t1

0xa4d0,	// (0x000689d5) clock_digital_number_pane_cp10_g1

0xa4d0,	// (0x000689d5) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0006dcd9) clock_digital_number_pane_cp10_g

0xa4d0,	// (0x000689d5) clock_digital_separator_pane_cp10_g1

0xa4d0,	// (0x000689d5) clock_digital_separator_pane_g2_cp10

0xb59a,	// (0x00069a9f) navi_pane_vded_g4

0xb5a3,	// (0x00069aa8) navi_pane_vded_g5

0xb5ac,	// (0x00069ab1) navi_pane_vded_t1

0x0d7d,	// (0x0005f282) main_vded_pane

0x57f5,	// (0x00063cfa) main_vded_pane_g1

0x5801,	// (0x00063d06) main_vded_pane_g2

0x580b,	// (0x00063d10) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0006dcde) main_vded_pane_g

0x5815,	// (0x00063d1a) main_vded_pane_t1

0x5823,	// (0x00063d28) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0006dce5) main_vded_pane_t

0x5831,	// (0x00063d36) vded_slider_pane

0x583b,	// (0x00063d40) vded_video_pane

0xd413,	// (0x0006b918) vded_video_pane_g1

0x5847,	// (0x00063d4c) vded_video_pane_g2

0xce39,	// (0x0006b33e) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0006dcea) vded_video_pane_g

0xd41d,	// (0x0006b922) vded_slider_pane_g1

0xcb86,	// (0x0006b08b) vded_slider_pane_g2

0xd426,	// (0x0006b92b) vded_slider_pane_g3

0xd42f,	// (0x0006b934) vded_slider_pane_g4

0xd438,	// (0x0006b93d) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0006dcf1) vded_slider_pane_g

0x531e,	// (0x00063823) mup3_rocker_pane_ParamLimits

0x531e,	// (0x00063823) mup3_rocker_pane

0x5850,	// (0x00063d55) mup3_control_keys_pane_g1

0x5858,	// (0x00063d5d) mup3_control_keys_pane_g2

0x5860,	// (0x00063d65) mup3_control_keys_pane_g3

0x5868,	// (0x00063d6d) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0006dcfc) mup3_control_keys_pane_g

0x0d31,	// (0x0005f236) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d31,	// (0x0005f236) popup_toolbar2_fixed_window_cp01

0x533a,	// (0x0006383f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x533a,	// (0x0006383f) popup_toolbar2_fixed_window_cp02

0xbd73,	// (0x0006a278) popup_call2_audio_second_window_t4_ParamLimits

0xbd73,	// (0x0006a278) popup_call2_audio_second_window_t4

0xc2a1,	// (0x0006a7a6) popup_call2_audio_first_window_t6_ParamLimits

0xc2a1,	// (0x0006a7a6) popup_call2_audio_first_window_t6

0xc537,	// (0x0006aa3c) popup_call2_audio_out_window_t6_ParamLimits

0xc537,	// (0x0006aa3c) popup_call2_audio_out_window_t6

0x0d7d,	// (0x0005f282) main_vitu_pane

0x5878,	// (0x00063d7d) aid_size_cell_itu_ParamLimits

0x5878,	// (0x00063d7d) aid_size_cell_itu

0xd3b1,	// (0x0006b8b6) bg_popup_window_pane_cp08_ParamLimits

0xd3b1,	// (0x0006b8b6) bg_popup_window_pane_cp08

0x5886,	// (0x00063d8b) field_vitu_entry_pane_ParamLimits

0x5886,	// (0x00063d8b) field_vitu_entry_pane

0x5895,	// (0x00063d9a) grid_vitu_function_pane_ParamLimits

0x5895,	// (0x00063d9a) grid_vitu_function_pane

0x58a5,	// (0x00063daa) grid_vitu_itu_pane_ParamLimits

0x58a5,	// (0x00063daa) grid_vitu_itu_pane

0x58b5,	// (0x00063dba) cell_vitu_itu_pane_ParamLimits

0x58b5,	// (0x00063dba) cell_vitu_itu_pane

0x58cc,	// (0x00063dd1) cell_vitu_function_pane_ParamLimits

0x58cc,	// (0x00063dd1) cell_vitu_function_pane

0xb074,	// (0x00069579) bg_popup_sub_pane_cp08_ParamLimits

0xb074,	// (0x00069579) bg_popup_sub_pane_cp08

0x58e0,	// (0x00063de5) field_vitu_entry_pane_t1_ParamLimits

0x58e0,	// (0x00063de5) field_vitu_entry_pane_t1

0xd459,	// (0x0006b95e) field_vitu_entry_pane_t2_ParamLimits

0xd459,	// (0x0006b95e) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0006dd0a) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0006dd0a) field_vitu_entry_pane_t

0xd476,	// (0x0006b97b) bg_button_pane_cp05_ParamLimits

0xd476,	// (0x0006b97b) bg_button_pane_cp05

0x58fa,	// (0x00063dff) cell_vitu_itu_pane_g1

0x5912,	// (0x00063e17) cell_vitu_itu_pane_t1_ParamLimits

0x5912,	// (0x00063e17) cell_vitu_itu_pane_t1

0x5924,	// (0x00063e29) cell_vitu_itu_pane_t2_ParamLimits

0x5924,	// (0x00063e29) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0006dd0f) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0006dd0f) cell_vitu_itu_pane_t

0xd484,	// (0x0006b989) bg_button_pane_cp07

0x5967,	// (0x00063e6c) cell_vitu_function_pane_g1

0x0fcb,	// (0x0005f4d0) main_calc_pane_g1

0x0ae6,	// (0x0005efeb) aid_visual_content_pane

0x0d7d,	// (0x0005f282) main_vradio_pane

0x5970,	// (0x00063e75) main_vradio_pane_g1_ParamLimits

0x5970,	// (0x00063e75) main_vradio_pane_g1

0xd48e,	// (0x0006b993) main_vradio_pane_g2_ParamLimits

0xd48e,	// (0x0006b993) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0006dd16) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0006dd16) main_vradio_pane_g

0x597e,	// (0x00063e83) main_vradio_pane_t1_ParamLimits

0x597e,	// (0x00063e83) main_vradio_pane_t1

0x5990,	// (0x00063e95) main_vradio_pane_t2_ParamLimits

0x5990,	// (0x00063e95) main_vradio_pane_t2

0xd49b,	// (0x0006b9a0) main_vradio_pane_t3_ParamLimits

0xd49b,	// (0x0006b9a0) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0006dd1b) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0006dd1b) main_vradio_pane_t

0x59a2,	// (0x00063ea7) vradio_rocker_control_pane_ParamLimits

0x59a2,	// (0x00063ea7) vradio_rocker_control_pane

0x59ae,	// (0x00063eb3) vradio_station_info_pane_ParamLimits

0x59ae,	// (0x00063eb3) vradio_station_info_pane

0xd4af,	// (0x0006b9b4) vradio_frequency_info_pane_ParamLimits

0xd4af,	// (0x0006b9b4) vradio_frequency_info_pane

0xce39,	// (0x0006b33e) vradio_station_info_pane_g1

0xd4be,	// (0x0006b9c3) vradio_station_info_pane_t1_ParamLimits

0xd4be,	// (0x0006b9c3) vradio_station_info_pane_t1

0xd4e0,	// (0x0006b9e5) vradio_station_info_pane_t2_ParamLimits

0xd4e0,	// (0x0006b9e5) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0006dd22) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0006dd22) vradio_station_info_pane_t

0xd4f2,	// (0x0006b9f7) vradio_tuning_pane

0xd4fa,	// (0x0006b9ff) vradio_rocker_control_pane_g1

0xd502,	// (0x0006ba07) vradio_rocker_control_pane_g2

0xd50a,	// (0x0006ba0f) vradio_rocker_control_pane_g3

0xd512,	// (0x0006ba17) vradio_rocker_control_pane_g4

0xd51a,	// (0x0006ba1f) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0006dd27) vradio_rocker_control_pane_g

0x59bb,	// (0x00063ec0) vradio_frequency_info_pane_g1

0xd522,	// (0x0006ba27) vradio_frequency_info_pane_t1_ParamLimits

0xd522,	// (0x0006ba27) vradio_frequency_info_pane_t1

0x59c5,	// (0x00063eca) vradio_tuning_pane_g1

0x59d0,	// (0x00063ed5) vradio_tuning_pane_t1

0x0b2f,	// (0x0005f034) area_side_right_pane_ParamLimits

0x0b2f,	// (0x0005f034) area_side_right_pane

0xc9bc,	// (0x0006aec1) status_small_pane_g1

0xc9c4,	// (0x0006aec9) status_small_pane_g2

0xc9cd,	// (0x0006aed2) status_small_pane_g3

0xc9d6,	// (0x0006aedb) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0006dae2) status_small_pane_g

0xc9df,	// (0x0006aee4) status_small_pane_t1

0x0d7d,	// (0x0005f282) main_video3_pane

0xd536,	// (0x0006ba3b) cams_zoom_vslider_pane

0xd53e,	// (0x0006ba43) image3_wide_pane_ParamLimits

0xd53e,	// (0x0006ba43) image3_wide_pane

0xd558,	// (0x0006ba5d) image3_wide_small_pane

0xd564,	// (0x0006ba69) main_video3_pane_g1_ParamLimits

0xd564,	// (0x0006ba69) main_video3_pane_g1

0xd580,	// (0x0006ba85) main_video3_pane_g2_ParamLimits

0xd580,	// (0x0006ba85) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0006dd32) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0006dd32) main_video3_pane_g

0xd59c,	// (0x0006baa1) main_video3_pane_t1_ParamLimits

0xd59c,	// (0x0006baa1) main_video3_pane_t1

0xd5c7,	// (0x0006bacc) main_video3_pane_t2_ParamLimits

0xd5c7,	// (0x0006bacc) main_video3_pane_t2

0xd5f4,	// (0x0006baf9) main_video3_pane_t3_ParamLimits

0xd5f4,	// (0x0006baf9) main_video3_pane_t3

0x0002,

0xf832,	// (0x0006dd37) main_video3_pane_t_ParamLimits

0xf832,	// (0x0006dd37) main_video3_pane_t

0xd621,	// (0x0006bb26) cams_zoom_vslider_pane_g1

0xd62a,	// (0x0006bb2f) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0006dd3e) cams_zoom_vslider_pane_g

0xd632,	// (0x0006bb37) small_slider_vertical_pane

0xce39,	// (0x0006b33e) small_slider_vertical_pane_g1

0xce39,	// (0x0006b33e) small_slider_vertical_pane_g2

0xd63a,	// (0x0006bb3f) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0006dd43) small_slider_vertical_pane_g

0x0d7d,	// (0x0005f282) main_hwr_training_pane

0xd643,	// (0x0006bb48) hwr_training_instruct_pane_ParamLimits

0xd643,	// (0x0006bb48) hwr_training_instruct_pane

0x59df,	// (0x00063ee4) hwr_training_navi_pane_ParamLimits

0x59df,	// (0x00063ee4) hwr_training_navi_pane

0x59f9,	// (0x00063efe) hwr_training_write_pane_ParamLimits

0x59f9,	// (0x00063efe) hwr_training_write_pane

0x9e2b,	// (0x00068330) bg_frame_shadow_pane

0xd67a,	// (0x0006bb7f) hwr_training_write_pane_g1

0xd682,	// (0x0006bb87) hwr_training_write_pane_g2

0xd68a,	// (0x0006bb8f) hwr_training_write_pane_g3

0xd692,	// (0x0006bb97) hwr_training_write_pane_g4

0xd69a,	// (0x0006bb9f) hwr_training_write_pane_g5

0xd6a2,	// (0x0006bba7) hwr_training_write_pane_g6

0xd6aa,	// (0x0006bbaf) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0006dd4a) hwr_training_write_pane_g

0x5a31,	// (0x00063f36) hwr_training_navi_pane_g1_ParamLimits

0x5a31,	// (0x00063f36) hwr_training_navi_pane_g1

0x5a43,	// (0x00063f48) hwr_training_navi_pane_g2_ParamLimits

0x5a43,	// (0x00063f48) hwr_training_navi_pane_g2

0x5a55,	// (0x00063f5a) hwr_training_navi_pane_g3_ParamLimits

0x5a55,	// (0x00063f5a) hwr_training_navi_pane_g3

0x5a65,	// (0x00063f6a) hwr_training_navi_pane_g4_ParamLimits

0x5a65,	// (0x00063f6a) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0006dd59) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0006dd59) hwr_training_navi_pane_g

0x5a7f,	// (0x00063f84) hwr_training_navi_pane_t1

0x5a8d,	// (0x00063f92) list_single_hwr_training_instruct_pane_ParamLimits

0x5a8d,	// (0x00063f92) list_single_hwr_training_instruct_pane

0xd6b2,	// (0x0006bbb7) list_single_hwr_training_instruct_pane_t1

0xcd79,	// (0x0006b27e) bg_frame_shadow_pane_g1

0xd6c1,	// (0x0006bbc6) bg_frame_shadow_pane_g2

0xd6c9,	// (0x0006bbce) bg_frame_shadow_pane_g3

0xd6d1,	// (0x0006bbd6) bg_frame_shadow_pane_g4

0xd6d9,	// (0x0006bbde) bg_frame_shadow_pane_g5

0xd6e1,	// (0x0006bbe6) bg_frame_shadow_pane_g6

0xd6e9,	// (0x0006bbee) bg_frame_shadow_pane_g7

0xa656,	// (0x00068b5b) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0006dd64) bg_frame_shadow_pane_g

0x0d7d,	// (0x0005f282) main_video_tele_dialer_pane

0x5aa6,	// (0x00063fab) aid_size_cell_video_keypad_ParamLimits

0x5aa6,	// (0x00063fab) aid_size_cell_video_keypad

0x5ab6,	// (0x00063fbb) grid_video_dialer_keypad_pane_ParamLimits

0x5ab6,	// (0x00063fbb) grid_video_dialer_keypad_pane

0x5ae8,	// (0x00063fed) video_down_pane_cp_ParamLimits

0x5ae8,	// (0x00063fed) video_down_pane_cp

0x5b12,	// (0x00064017) cell_video_dialer_keypad_pane_ParamLimits

0x5b12,	// (0x00064017) cell_video_dialer_keypad_pane

0xd6f1,	// (0x0006bbf6) bg_button_pane_cp08_ParamLimits

0xd6f1,	// (0x0006bbf6) bg_button_pane_cp08

0x5b29,	// (0x0006402e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5b29,	// (0x0006402e) cell_video_dialer_keypad_pane_g1

0x5312,	// (0x00063817) mup3_rocker2_pane_ParamLimits

0x5312,	// (0x00063817) mup3_rocker2_pane

0xce39,	// (0x0006b33e) mup3_rocker2_pane_g1

0x4136,	// (0x0006263b) main_dialer2_pane

0x0d7d,	// (0x0005f282) main_mp4_pane

0x5b82,	// (0x00064087) main_mp4_pane_g1_ParamLimits

0x5b82,	// (0x00064087) main_mp4_pane_g1

0x5b90,	// (0x00064095) main_mp4_pane_g2_ParamLimits

0x5b90,	// (0x00064095) main_mp4_pane_g2

0x5b9e,	// (0x000640a3) main_mp4_pane_g3_ParamLimits

0x5b9e,	// (0x000640a3) main_mp4_pane_g3

0x5bf1,	// (0x000640f6) main_mp4_pane_g4_ParamLimits

0x5bf1,	// (0x000640f6) main_mp4_pane_g4

0x5c1f,	// (0x00064124) main_mp4_pane_g5_ParamLimits

0x5c1f,	// (0x00064124) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0006dd84) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0006dd84) main_mp4_pane_g

0x5c93,	// (0x00064198) main_mp4_pane_t1_ParamLimits

0x5c93,	// (0x00064198) main_mp4_pane_t1

0x5cef,	// (0x000641f4) main_mp4_pane_t2_ParamLimits

0x5cef,	// (0x000641f4) main_mp4_pane_t2

0xd6fd,	// (0x0006bc02) main_mp4_pane_t3_ParamLimits

0xd6fd,	// (0x0006bc02) main_mp4_pane_t3

0x5d41,	// (0x00064246) main_mp4_pane_t4_ParamLimits

0x5d41,	// (0x00064246) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0006dd95) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0006dd95) main_mp4_pane_t

0x5d81,	// (0x00064286) mp4_progress_pane_ParamLimits

0x5d81,	// (0x00064286) mp4_progress_pane

0x5dcb,	// (0x000642d0) mp4_rocker_pane_ParamLimits

0x5dcb,	// (0x000642d0) mp4_rocker_pane

0xd72b,	// (0x0006bc30) mp4_progress_pane_t1

0xd744,	// (0x0006bc49) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0006dd9e) mp4_progress_pane_t

0xd75d,	// (0x0006bc62) mup_progress_pane_cp04

0xd923,	// (0x0006be28) mp4_rocker_pane_g1

0x5deb,	// (0x000642f0) aid_cell_size_keypad2_ParamLimits

0x5deb,	// (0x000642f0) aid_cell_size_keypad2

0x5dfb,	// (0x00064300) dialer2_ne_pane_ParamLimits

0x5dfb,	// (0x00064300) dialer2_ne_pane

0x5e07,	// (0x0006430c) grid_dialer2_keypad_pane_ParamLimits

0x5e07,	// (0x0006430c) grid_dialer2_keypad_pane

0xd770,	// (0x0006bc75) bg_popup_call_pane_cp07_ParamLimits

0xd770,	// (0x0006bc75) bg_popup_call_pane_cp07

0x5e15,	// (0x0006431a) dialer2_ne_pane_t1_ParamLimits

0x5e15,	// (0x0006431a) dialer2_ne_pane_t1

0x5e3a,	// (0x0006433f) cell_dialer2_keypad_pane_ParamLimits

0x5e3a,	// (0x0006433f) cell_dialer2_keypad_pane

0xd790,	// (0x0006bc95) bg_button_pane_pane_cp04_ParamLimits

0xd790,	// (0x0006bc95) bg_button_pane_pane_cp04

0x5e51,	// (0x00064356) cell_dialer2_keypad_pane_g1_ParamLimits

0x5e51,	// (0x00064356) cell_dialer2_keypad_pane_g1

0x1d6a,	// (0x0006026f) aid_placing_vt_set_content_ParamLimits

0x1d6a,	// (0x0006026f) aid_placing_vt_set_content

0x1d92,	// (0x00060297) aid_placing_vt_set_title_ParamLimits

0x1d92,	// (0x00060297) aid_placing_vt_set_title

0x0d7d,	// (0x0005f282) main_image3_pane

0x5eeb,	// (0x000643f0) area_side_right_pane_cp01_ParamLimits

0x5eeb,	// (0x000643f0) area_side_right_pane_cp01

0x5f1a,	// (0x0006441f) main_image3_pane_g1_ParamLimits

0x5f1a,	// (0x0006441f) main_image3_pane_g1

0x5f28,	// (0x0006442d) main_image3_pane_g2_ParamLimits

0x5f28,	// (0x0006442d) main_image3_pane_g2

0x5f41,	// (0x00064446) main_image3_pane_g3_ParamLimits

0x5f41,	// (0x00064446) main_image3_pane_g3

0x5f5a,	// (0x0006445f) main_image3_pane_g4_ParamLimits

0x5f5a,	// (0x0006445f) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0006ddad) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0006ddad) main_image3_pane_g

0x5f73,	// (0x00064478) main_image3_pane_t1_ParamLimits

0x5f73,	// (0x00064478) main_image3_pane_t1

0x5f98,	// (0x0006449d) main_image3_pane_t2_ParamLimits

0x5f98,	// (0x0006449d) main_image3_pane_t2

0x5fb7,	// (0x000644bc) main_image3_pane_t3_ParamLimits

0x5fb7,	// (0x000644bc) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0006ddb6) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0006ddb6) main_image3_pane_t

0xd3b1,	// (0x0006b8b6) grid_sctrl_middle_pane_cp01_ParamLimits

0xd3b1,	// (0x0006b8b6) grid_sctrl_middle_pane_cp01

0x6018,	// (0x0006451d) cell_sctrl_middle_pane_cp01_ParamLimits

0x6018,	// (0x0006451d) cell_sctrl_middle_pane_cp01

0x6029,	// (0x0006452e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6029,	// (0x0006452e) cell_sctrl_middle_pane_cp01_g1

0x0d7d,	// (0x0005f282) main_call4_pane

0x6036,	// (0x0006453b) aid_size_button_call4_ParamLimits

0x6036,	// (0x0006453b) aid_size_button_call4

0x606c,	// (0x00064571) call4_windows_pane_ParamLimits

0x606c,	// (0x00064571) call4_windows_pane

0x6081,	// (0x00064586) grid_call4_button_pane_ParamLimits

0x6081,	// (0x00064586) grid_call4_button_pane

0x60b1,	// (0x000645b6) call4_windows_conf_pane

0x60cc,	// (0x000645d1) popup_call4_audio_first_window_ParamLimits

0x60cc,	// (0x000645d1) popup_call4_audio_first_window

0x611e,	// (0x00064623) popup_call4_audio_second_window_ParamLimits

0x611e,	// (0x00064623) popup_call4_audio_second_window

0x6137,	// (0x0006463c) popup_call4_audio_wait_window_ParamLimits

0x6137,	// (0x0006463c) popup_call4_audio_wait_window

0x6145,	// (0x0006464a) cell_call4_button_pane_ParamLimits

0x6145,	// (0x0006464a) cell_call4_button_pane

0x6168,	// (0x0006466d) bg_button_pane_cp09_ParamLimits

0x6168,	// (0x0006466d) bg_button_pane_cp09

0x6174,	// (0x00064679) cell_call4_button_pane_g1_ParamLimits

0x6174,	// (0x00064679) cell_call4_button_pane_g1

0x6181,	// (0x00064686) cell_call4_button_pane_t1_ParamLimits

0x6181,	// (0x00064686) cell_call4_button_pane_t1

0xd7a4,	// (0x0006bca9) popup_call4_audio_conf_window_ParamLimits

0xd7a4,	// (0x0006bca9) popup_call4_audio_conf_window

0x5347,	// (0x0006384c) mup3_progress_pane_t1_ParamLimits

0x5366,	// (0x0006386b) mup3_progress_pane_t2_ParamLimits

0xd0db,	// (0x0006b5e0) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0006dc86) mup3_progress_pane_t_ParamLimits

0xd0f8,	// (0x0006b5fd) mup_progress_pane_cp03_ParamLimits

0x5870,	// (0x00063d75) mup3_control_keys_pane_g4_copy1

0x5daf,	// (0x000642b4) mp4_rocker2_pane_ParamLimits

0x5daf,	// (0x000642b4) mp4_rocker2_pane

0xd7be,	// (0x0006bcc3) mp4_rocker2_pane_g1

0xd7c6,	// (0x0006bccb) mp4_rocker2_pane_g2

0x61c5,	// (0x000646ca) mp4_rocker2_pane_g3

0x61cd,	// (0x000646d2) mp4_rocker2_pane_g4

0x61d5,	// (0x000646da) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0006ddbf) mp4_rocker2_pane_g

0x0d7d,	// (0x0005f282) main_camera4_pane

0x0d7d,	// (0x0005f282) main_video4_pane

0x5ac4,	// (0x00063fc9) main_video_tele_dialer_pane_t1_ParamLimits

0x5ac4,	// (0x00063fc9) main_video_tele_dialer_pane_t1

0x5ad6,	// (0x00063fdb) main_video_tele_dialer_pane_t2_ParamLimits

0x5ad6,	// (0x00063fdb) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0006dd75) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0006dd75) main_video_tele_dialer_pane_t

0x61f5,	// (0x000646fa) cam4_autofocus_pane_ParamLimits

0x61f5,	// (0x000646fa) cam4_autofocus_pane

0x620d,	// (0x00064712) cam4_image_uncrop_pane_ParamLimits

0x620d,	// (0x00064712) cam4_image_uncrop_pane

0x6226,	// (0x0006472b) cam4_indicators_pane_ParamLimits

0x6226,	// (0x0006472b) cam4_indicators_pane

0x6242,	// (0x00064747) main_camera4_pane_g1_ParamLimits

0x6242,	// (0x00064747) main_camera4_pane_g1

0x624e,	// (0x00064753) main_camera4_pane_g2_ParamLimits

0x624e,	// (0x00064753) main_camera4_pane_g2

0x624e,	// (0x00064753) main_camera4_pane_g3_ParamLimits

0x624e,	// (0x00064753) main_camera4_pane_g3

0x625a,	// (0x0006475f) main_camera4_pane_g4_ParamLimits

0x625a,	// (0x0006475f) main_camera4_pane_g4

0x6266,	// (0x0006476b) main_camera4_pane_g5_ParamLimits

0x6266,	// (0x0006476b) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0006ddca) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0006ddca) main_camera4_pane_g

0x6280,	// (0x00064785) main_camera4_pane_t1_ParamLimits

0x6280,	// (0x00064785) main_camera4_pane_t1

0x62ca,	// (0x000647cf) bg_tb_trans_pane_cp06

0x62e0,	// (0x000647e5) cam4_indicators_pane_g1

0x62f1,	// (0x000647f6) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0006dde5) cam4_indicators_pane_g

0x6309,	// (0x0006480e) cam4_indicators_pane_t1

0x6333,	// (0x00064838) main_video4_pane_g1_ParamLimits

0x6333,	// (0x00064838) main_video4_pane_g1

0x633f,	// (0x00064844) main_video4_pane_g2_ParamLimits

0x633f,	// (0x00064844) main_video4_pane_g2

0x634b,	// (0x00064850) main_video4_pane_g3_ParamLimits

0x634b,	// (0x00064850) main_video4_pane_g3

0x6357,	// (0x0006485c) main_video4_pane_g4_ParamLimits

0x6357,	// (0x0006485c) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0006ddec) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0006ddec) main_video4_pane_g

0x6379,	// (0x0006487e) vid4_indicators_pane_ParamLimits

0x6379,	// (0x0006487e) vid4_indicators_pane

0x6398,	// (0x0006489d) video4_image_uncrop_cif_pane_ParamLimits

0x6398,	// (0x0006489d) video4_image_uncrop_cif_pane

0x63a7,	// (0x000648ac) video4_image_uncrop_nhd_pane_ParamLimits

0x63a7,	// (0x000648ac) video4_image_uncrop_nhd_pane

0x620d,	// (0x00064712) video4_image_uncrop_vga_pane_ParamLimits

0x620d,	// (0x00064712) video4_image_uncrop_vga_pane

0x4128,	// (0x0006262d) bg_tb_trans_pane_cp07

0x63c0,	// (0x000648c5) vid4_indicators_pane_g1

0x63d6,	// (0x000648db) vid4_indicators_pane_g2

0x63ea,	// (0x000648ef) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0006ddf7) vid4_indicators_pane_g

0x641b,	// (0x00064920) vid4_indicators_pane_t1

0x6432,	// (0x00064937) cam4_autofocus_pane_g1

0x643a,	// (0x0006493f) cam4_autofocus_pane_g2

0x6442,	// (0x00064947) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0006de02) cam4_autofocus_pane_g

0x644a,	// (0x0006494f) cam4_autofocus_pane_g3_copy1

0x5af6,	// (0x00063ffb) video_down_pane_cp_t1

0x5b04,	// (0x00064009) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0006dd7a) video_down_pane_cp_t

0x0d63,	// (0x0005f268) popup_vitu2_window_ParamLimits

0x0d63,	// (0x0005f268) popup_vitu2_window

0x6452,	// (0x00064957) aid_size_cell2_itu2_ParamLimits

0x6452,	// (0x00064957) aid_size_cell2_itu2

0x6474,	// (0x00064979) aid_size_cell_itu2_ParamLimits

0x6474,	// (0x00064979) aid_size_cell_itu2

0x64ba,	// (0x000649bf) bg_popup_window_pane_cp09_ParamLimits

0x64ba,	// (0x000649bf) bg_popup_window_pane_cp09

0x64c8,	// (0x000649cd) field_vitu2_entry_pane_ParamLimits

0x64c8,	// (0x000649cd) field_vitu2_entry_pane

0x64e8,	// (0x000649ed) grid_vitu2_function_pane_ParamLimits

0x64e8,	// (0x000649ed) grid_vitu2_function_pane

0x652c,	// (0x00064a31) grid_vitu2_itu_pane_ParamLimits

0x652c,	// (0x00064a31) grid_vitu2_itu_pane

0x65a4,	// (0x00064aa9) cell_vitu2_itu_pane_ParamLimits

0x65a4,	// (0x00064aa9) cell_vitu2_itu_pane

0x65bf,	// (0x00064ac4) cell_vitu2_function_pane_ParamLimits

0x65bf,	// (0x00064ac4) cell_vitu2_function_pane

0xd7ce,	// (0x0006bcd3) bg_popup_call_pane_cp08_ParamLimits

0xd7ce,	// (0x0006bcd3) bg_popup_call_pane_cp08

0xd7e5,	// (0x0006bcea) field_vitu2_entry_pane_g1

0xd7f1,	// (0x0006bcf6) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0006de09) field_vitu2_entry_pane_g

0x6603,	// (0x00064b08) field_vitu2_entry_pane_t1_ParamLimits

0x6603,	// (0x00064b08) field_vitu2_entry_pane_t1

0xa6ad,	// (0x00068bb2) field_vitu2_entry_pane_t2_ParamLimits

0xa6ad,	// (0x00068bb2) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0006de10) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0006de10) field_vitu2_entry_pane_t

0x6633,	// (0x00064b38) bg_button_pane_cp010_ParamLimits

0x6633,	// (0x00064b38) bg_button_pane_cp010

0x6641,	// (0x00064b46) cell_vitu2_itu_pane_g1

0x6661,	// (0x00064b66) cell_vitu2_itu_pane_t1_ParamLimits

0x6661,	// (0x00064b66) cell_vitu2_itu_pane_t1

0x09ca,	// (0x0005eecf) cell_vitu2_itu_pane_t2_ParamLimits

0x09ca,	// (0x0005eecf) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0006de1a) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0006de1a) cell_vitu2_itu_pane_t

0x4128,	// (0x0006262d) bg_button_pane_cp011

0x66ad,	// (0x00064bb2) cell_vitu2_function_pane_g1

0x0d7d,	// (0x0005f282) main_myfav_hc_pane

0x5ff9,	// (0x000644fe) popup_image3_note_pane_ParamLimits

0x5ff9,	// (0x000644fe) popup_image3_note_pane

0x6007,	// (0x0006450c) popup_image3_tool_bar_pane_ParamLimits

0x6007,	// (0x0006450c) popup_image3_tool_bar_pane

0x0a40,	// (0x0005ef45) cell_vitu2_itu_pane_t3_ParamLimits

0x0a40,	// (0x0005ef45) cell_vitu2_itu_pane_t3

0x9e2b,	// (0x00068330) bg_popup_trans_pane

0xd813,	// (0x0006bd18) grid_image3_tool_bar_pane

0xd81d,	// (0x0006bd22) bg_popup_trans_pane_g1

0xadd7,	// (0x000692dc) bg_popup_trans_pane_g2

0xd825,	// (0x0006bd2a) bg_popup_trans_pane_g3

0xd82d,	// (0x0006bd32) bg_popup_trans_pane_g4

0xd835,	// (0x0006bd3a) bg_popup_trans_pane_g5

0xd83d,	// (0x0006bd42) bg_popup_trans_pane_g6

0xd845,	// (0x0006bd4a) bg_popup_trans_pane_g7

0xd84d,	// (0x0006bd52) bg_popup_trans_pane_g8

0xadb7,	// (0x000692bc) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0006de21) bg_popup_trans_pane_g

0xd855,	// (0x0006bd5a) cell_image3_tool_bar_pane_ParamLimits

0xd855,	// (0x0006bd5a) cell_image3_tool_bar_pane

0xce39,	// (0x0006b33e) cell_image3_tool_bar_pane_g1

0x9e2b,	// (0x00068330) bg_popup_trans_pane_cp1

0xd86b,	// (0x0006bd70) popup_image3_note_pane_t1

0xd879,	// (0x0006bd7e) popup_image3_note_pane_t2

0xd887,	// (0x0006bd8c) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0006de34) popup_image3_note_pane_t

0xd897,	// (0x0006bd9c) popup_image3_note_pane_t3_copy1

0x66c1,	// (0x00064bc6) bg_myfav_hc_instruction_pane_ParamLimits

0x66c1,	// (0x00064bc6) bg_myfav_hc_instruction_pane

0x66d9,	// (0x00064bde) cell_myfav_contact_pane_ParamLimits

0x66d9,	// (0x00064bde) cell_myfav_contact_pane

0x66f3,	// (0x00064bf8) cell_myfav_contact_pane_cp1_ParamLimits

0x66f3,	// (0x00064bf8) cell_myfav_contact_pane_cp1

0x670b,	// (0x00064c10) cell_myfav_contact_pane_cp2_ParamLimits

0x670b,	// (0x00064c10) cell_myfav_contact_pane_cp2

0x6723,	// (0x00064c28) cell_myfav_contact_pane_cp3_ParamLimits

0x6723,	// (0x00064c28) cell_myfav_contact_pane_cp3

0x673a,	// (0x00064c3f) cell_myfav_contact_pane_cp4_ParamLimits

0x673a,	// (0x00064c3f) cell_myfav_contact_pane_cp4

0x6750,	// (0x00064c55) cell_myfav_contact_pane_cp5_ParamLimits

0x6750,	// (0x00064c55) cell_myfav_contact_pane_cp5

0x6764,	// (0x00064c69) cell_myfav_contact_pane_cp6_ParamLimits

0x6764,	// (0x00064c69) cell_myfav_contact_pane_cp6

0x6778,	// (0x00064c7d) cell_myfav_contact_pane_cp7_ParamLimits

0x6778,	// (0x00064c7d) cell_myfav_contact_pane_cp7

0xd8a5,	// (0x0006bdaa) listscroll_gen_pane_cp05

0x6790,	// (0x00064c95) main_myfav_hc_pane_g1_ParamLimits

0x6790,	// (0x00064c95) main_myfav_hc_pane_g1

0x67aa,	// (0x00064caf) main_myfav_hc_pane_g2_ParamLimits

0x67aa,	// (0x00064caf) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0006de3b) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0006de3b) main_myfav_hc_pane_g

0x67dc,	// (0x00064ce1) main_myfav_hc_pane_t1_ParamLimits

0x67dc,	// (0x00064ce1) main_myfav_hc_pane_t1

0xd8ae,	// (0x0006bdb3) main_myfav_hc_pane_t2_ParamLimits

0xd8ae,	// (0x0006bdb3) main_myfav_hc_pane_t2

0xd8c0,	// (0x0006bdc5) main_myfav_hc_pane_t3_ParamLimits

0xd8c0,	// (0x0006bdc5) main_myfav_hc_pane_t3

0x67f3,	// (0x00064cf8) main_myfav_hc_pane_t4_ParamLimits

0x67f3,	// (0x00064cf8) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0006de42) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0006de42) main_myfav_hc_pane_t

0xce39,	// (0x0006b33e) bg_myfav_hc_instruction_pane_g1

0xd8d2,	// (0x0006bdd7) cell_myfav_contact_pane_g1_ParamLimits

0xd8d2,	// (0x0006bdd7) cell_myfav_contact_pane_g1

0xd8d2,	// (0x0006bdd7) cell_myfav_contact_pane_g2_ParamLimits

0xd8d2,	// (0x0006bdd7) cell_myfav_contact_pane_g2

0xd8de,	// (0x0006bde3) cell_myfav_contact_pane_g3_ParamLimits

0xd8de,	// (0x0006bde3) cell_myfav_contact_pane_g3

0xd0c5,	// (0x0006b5ca) cell_myfav_contact_pane_g4_ParamLimits

0xd0c5,	// (0x0006b5ca) cell_myfav_contact_pane_g4

0xd8eb,	// (0x0006bdf0) cell_myfav_contact_pane_g5_ParamLimits

0xd8eb,	// (0x0006bdf0) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0006de4d) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0006de4d) cell_myfav_contact_pane_g

0x67c4,	// (0x00064cc9) main_myfav_hc_pane_g3_ParamLimits

0x67c4,	// (0x00064cc9) main_myfav_hc_pane_g3

0x0c6b,	// (0x0005f170) popup_adpt_find_window

0x681d,	// (0x00064d22) afind_page_pane_ParamLimits

0x681d,	// (0x00064d22) afind_page_pane

0x682a,	// (0x00064d2f) aid_size_cell_afind_ParamLimits

0x682a,	// (0x00064d2f) aid_size_cell_afind

0x6844,	// (0x00064d49) bg_popup_sub_pane_cp09_ParamLimits

0x6844,	// (0x00064d49) bg_popup_sub_pane_cp09

0x6851,	// (0x00064d56) find_pane_cp01_ParamLimits

0x6851,	// (0x00064d56) find_pane_cp01

0xd8f7,	// (0x0006bdfc) grid_afind_control_pane_ParamLimits

0xd8f7,	// (0x0006bdfc) grid_afind_control_pane

0x685e,	// (0x00064d63) grid_afind_pane_ParamLimits

0x685e,	// (0x00064d63) grid_afind_pane

0x687a,	// (0x00064d7f) cell_afind_pane_ParamLimits

0x687a,	// (0x00064d7f) cell_afind_pane

0xce39,	// (0x0006b33e) afind_page_pane_g1

0x68c6,	// (0x00064dcb) afind_page_pane_g2

0x68cf,	// (0x00064dd4) afind_page_pane_g3

0x0002,

0xf953,	// (0x0006de58) afind_page_pane_g

0x68d8,	// (0x00064ddd) afind_page_pane_t1

0xd90b,	// (0x0006be10) cell_afind_grid_control_pane_ParamLimits

0xd90b,	// (0x0006be10) cell_afind_grid_control_pane

0xd790,	// (0x0006bc95) bg_button_pane_cp69_ParamLimits

0xd790,	// (0x0006bc95) bg_button_pane_cp69

0x68f8,	// (0x00064dfd) cell_afind_pane_g1_ParamLimits

0x68f8,	// (0x00064dfd) cell_afind_pane_g1

0x6905,	// (0x00064e0a) cell_afind_pane_t1_ParamLimits

0x6905,	// (0x00064e0a) cell_afind_pane_t1

0xabcc,	// (0x000690d1) bg_button_pane_cp72

0xd91a,	// (0x0006be1f) cell_afind_grid_control_pane_g1

0x3c91,	// (0x00062196) aid_image_placing_area_ParamLimits

0x3c91,	// (0x00062196) aid_image_placing_area

0xd441,	// (0x0006b946) field_vitu_entry_pane_g1_ParamLimits

0xd441,	// (0x0006b946) field_vitu_entry_pane_g1

0xd44d,	// (0x0006b952) field_vitu_entry_pane_g2_ParamLimits

0xd44d,	// (0x0006b952) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0006dd05) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0006dd05) field_vitu_entry_pane_g

0x58fa,	// (0x00063dff) cell_vitu_itu_pane_g1_ParamLimits

0x594a,	// (0x00063e4f) cell_vitu_itu_pane_t3_ParamLimits

0x594a,	// (0x00063e4f) cell_vitu_itu_pane_t3

0xd72b,	// (0x0006bc30) mp4_progress_pane_t1_ParamLimits

0xd744,	// (0x0006bc49) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0006dd9e) mp4_progress_pane_t_ParamLimits

0xd75d,	// (0x0006bc62) mup_progress_pane_cp04_ParamLimits

0x6807,	// (0x00064d0c) main_myfav_hc_pane_t5_ParamLimits

0x6807,	// (0x00064d0c) main_myfav_hc_pane_t5

0x0af2,	// (0x0005eff7) aid_zoom_text_primary

0x0c6b,	// (0x0005f170) popup_adpt_find_window_ParamLimits

0x4128,	// (0x0006262d) main_cam_set_pane

0x6234,	// (0x00064739) cam4_zoom_pane_ParamLimits

0x6234,	// (0x00064739) cam4_zoom_pane

0x6917,	// (0x00064e1c) main_cam_set_pane_g1_ParamLimits

0x6917,	// (0x00064e1c) main_cam_set_pane_g1

0x6925,	// (0x00064e2a) main_cam_set_pane_g2_ParamLimits

0x6925,	// (0x00064e2a) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0006de5f) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0006de5f) main_cam_set_pane_g

0x6931,	// (0x00064e36) main_cam_set_pane_t1_ParamLimits

0x6931,	// (0x00064e36) main_cam_set_pane_t1

0x694d,	// (0x00064e52) main_cset_listscroll_pane_ParamLimits

0x694d,	// (0x00064e52) main_cset_listscroll_pane

0x697c,	// (0x00064e81) main_cset_slider_pane_ParamLimits

0x697c,	// (0x00064e81) main_cset_slider_pane

0xd935,	// (0x0006be3a) main_cset_list_pane_ParamLimits

0xd935,	// (0x0006be3a) main_cset_list_pane

0xd945,	// (0x0006be4a) scroll_pane_cp028

0x699d,	// (0x00064ea2) aid_area_touch_slider

0x69b9,	// (0x00064ebe) cset_slider_pane

0x69e3,	// (0x00064ee8) main_cset_slider_pane_g1

0x69f8,	// (0x00064efd) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0006de64) main_cset_slider_pane_g

0xd97e,	// (0x0006be83) main_cset_slider_pane_t1

0x6ab4,	// (0x00064fb9) main_cset_slider_pane_t2

0x6ace,	// (0x00064fd3) main_cset_slider_pane_t3

0x6ae8,	// (0x00064fed) main_cset_slider_pane_t4

0x6b02,	// (0x00065007) main_cset_slider_pane_t5

0x6b1c,	// (0x00065021) main_cset_slider_pane_t6

0x6b31,	// (0x00065036) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0006de89) main_cset_slider_pane_t

0x6c35,	// (0x0006513a) cset_list_set_pane_ParamLimits

0x6c35,	// (0x0006513a) cset_list_set_pane

0x6c46,	// (0x0006514b) aid_position_infowindow_above

0x6c4e,	// (0x00065153) aid_position_infowindow_below

0x6c56,	// (0x0006515b) cset_list_set_pane_g1_ParamLimits

0x6c56,	// (0x0006515b) cset_list_set_pane_g1

0x6c62,	// (0x00065167) cset_list_set_pane_g3_ParamLimits

0x6c62,	// (0x00065167) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0006dea8) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0006dea8) cset_list_set_pane_g

0x6c71,	// (0x00065176) cset_list_set_pane_t1_ParamLimits

0x6c71,	// (0x00065176) cset_list_set_pane_t1

0xb074,	// (0x00069579) list_highlight_pane_cp021_ParamLimits

0xb074,	// (0x00069579) list_highlight_pane_cp021

0xb71c,	// (0x00069c21) cset_slider_pane_g1

0xb72e,	// (0x00069c33) cset_slider_pane_g2

0xb725,	// (0x00069c2a) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0006dead) cset_slider_pane_g

0x6c86,	// (0x0006518b) aid_area_touch_cam4_zoom

0x6c8f,	// (0x00065194) cam4_zoom_cont_pane

0x6c97,	// (0x0006519c) cam4_zoom_pane_g1

0x6c9f,	// (0x000651a4) cam4_zoom_pane_g2

0x6ca7,	// (0x000651ac) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0006deb4) cam4_zoom_pane_g

0x6cb0,	// (0x000651b5) cam4_zoom_cont_pane_g1

0x6cb9,	// (0x000651be) cam4_zoom_cont_pane_g2

0x6cc2,	// (0x000651c7) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0006debb) cam4_zoom_cont_pane_g

0x6050,	// (0x00064555) call4_image_pane_ParamLimits

0x6050,	// (0x00064555) call4_image_pane

0x60b1,	// (0x000645b6) call4_windows_conf_pane_ParamLimits

0x60fc,	// (0x00064601) popup_call4_audio_in_window_ParamLimits

0x60fc,	// (0x00064601) popup_call4_audio_in_window

0x9e2b,	// (0x00068330) bg_popup_call2_act_pane_cp02

0xd79c,	// (0x0006bca1) call4_list_conf_pane

0xce39,	// (0x0006b33e) call4_image_pane_g1

0xce39,	// (0x0006b33e) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0006dbc6) call4_image_pane_g

0xda1e,	// (0x0006bf23) list_single_graphic_popup_conf4_pane_ParamLimits

0xda1e,	// (0x0006bf23) list_single_graphic_popup_conf4_pane

0x9e2b,	// (0x00068330) list_highlight_pane_cp022

0xda33,	// (0x0006bf38) list_single_graphic_popup_conf4_pane_g1

0xb308,	// (0x0006980d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0006dec2) list_single_graphic_popup_conf4_pane_g

0xda3b,	// (0x0006bf40) list_single_graphic_popup_conf4_pane_t1

0x1eec,	// (0x000603f1) popup_vtel_slider_window_ParamLimits

0x1eec,	// (0x000603f1) popup_vtel_slider_window

0xd77e,	// (0x0006bc83) dialer2_ne_pane_t2_ParamLimits

0xd77e,	// (0x0006bc83) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0006dda3) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0006dda3) dialer2_ne_pane_t

0xb074,	// (0x00069579) bg_popup_sub_pane_cp010_ParamLimits

0xb074,	// (0x00069579) bg_popup_sub_pane_cp010

0x6ccb,	// (0x000651d0) popup_vtel_slider_window_g1_ParamLimits

0x6ccb,	// (0x000651d0) popup_vtel_slider_window_g1

0x6cd7,	// (0x000651dc) popup_vtel_slider_window_g2_ParamLimits

0x6cd7,	// (0x000651dc) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0006dec7) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0006dec7) popup_vtel_slider_window_g

0x6d1f,	// (0x00065224) vtel_slider_pane_ParamLimits

0x6d1f,	// (0x00065224) vtel_slider_pane

0x6d2e,	// (0x00065233) vtel_slider_pane_g1_ParamLimits

0x6d2e,	// (0x00065233) vtel_slider_pane_g1

0x6d3b,	// (0x00065240) vtel_slider_pane_g2_ParamLimits

0x6d3b,	// (0x00065240) vtel_slider_pane_g2

0x6d48,	// (0x0006524d) vtel_slider_pane_g3_ParamLimits

0x6d48,	// (0x0006524d) vtel_slider_pane_g3

0x6d2e,	// (0x00065233) vtel_slider_pane_g4_ParamLimits

0x6d2e,	// (0x00065233) vtel_slider_pane_g4

0x6d55,	// (0x0006525a) vtel_slider_pane_g5_ParamLimits

0x6d55,	// (0x0006525a) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0006ded0) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0006ded0) vtel_slider_pane_g

0x4128,	// (0x0006262d) main_gallery2_pane

0x649a,	// (0x0006499f) aid_size_row_itut2_dropdow_list_ParamLimits

0x649a,	// (0x0006499f) aid_size_row_itut2_dropdow_list

0x650a,	// (0x00064a0f) grid_vitu2_function_top_pane_ParamLimits

0x650a,	// (0x00064a0f) grid_vitu2_function_top_pane

0x6560,	// (0x00064a65) popup_vitu2_dropdown_list_window_ParamLimits

0x6560,	// (0x00064a65) popup_vitu2_dropdown_list_window

0x6580,	// (0x00064a85) popup_vitu2_match_list_window

0x6d70,	// (0x00065275) cell_vitu2_function_top_pane_ParamLimits

0x6d70,	// (0x00065275) cell_vitu2_function_top_pane

0x6d94,	// (0x00065299) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6d94,	// (0x00065299) cell_vitu2_function_top_pane_cp01

0x6db0,	// (0x000652b5) cell_vitu2_function_top_wide_pane_ParamLimits

0x6db0,	// (0x000652b5) cell_vitu2_function_top_wide_pane

0x4128,	// (0x0006262d) bg_button_pane_cp012

0x6dcc,	// (0x000652d1) cell_vitu2_function_top_pane_g1

0x6de0,	// (0x000652e5) bg_button_pane_cp013_ParamLimits

0x6de0,	// (0x000652e5) bg_button_pane_cp013

0x6dfc,	// (0x00065301) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6dfc,	// (0x00065301) cell_vitu2_function_top_wide_pane_g1

0x0d63,	// (0x0005f268) bg_popup_sub_pane_cp20

0x6e14,	// (0x00065319) list_vitu2_match_list_pane

0xd81d,	// (0x0006bd22) bg_popup_sub_pane_cp20_g1

0xd825,	// (0x0006bd2a) bg_popup_sub_pane_cp20_g2

0xadd7,	// (0x000692dc) bg_popup_sub_pane_cp20_g3

0xd82d,	// (0x0006bd32) bg_popup_sub_pane_cp20_g4

0xadb7,	// (0x000692bc) bg_popup_sub_pane_cp20_g5

0xda51,	// (0x0006bf56) bg_popup_sub_pane_cp20_g6

0xd83d,	// (0x0006bd42) bg_popup_sub_pane_cp20_g7

0xd845,	// (0x0006bd4a) bg_popup_sub_pane_cp20_g8

0xd84d,	// (0x0006bd52) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0006dedb) bg_popup_sub_pane_cp20_g

0x6e2c,	// (0x00065331) list_vitu2_match_list_item_pane_ParamLimits

0x6e2c,	// (0x00065331) list_vitu2_match_list_item_pane

0x6e3e,	// (0x00065343) list_vitu2_match_list_item_pane_t1

0x0d7d,	// (0x0005f282) bg_popup_sub_pane_cp21

0x6e94,	// (0x00065399) grid_vitu2_dropdown_list_pane

0x6e9c,	// (0x000653a1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6e9c,	// (0x000653a1) cell_vitu2_dropdown_list_char_pane

0x6ec1,	// (0x000653c6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ec1,	// (0x000653c6) cell_vitu2_dropdown_list_ctrl_pane

0xda59,	// (0x0006bf5e) cell_vitu2_dropdown_list_char_pane_g1

0xda62,	// (0x0006bf67) cell_vitu2_dropdown_list_char_pane_g2

0xda6b,	// (0x0006bf70) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0006def8) cell_vitu2_dropdown_list_char_pane_g

0x6eef,	// (0x000653f4) cell_vitu2_dropdown_list_char_pane_t1

0x6efd,	// (0x00065402) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6efd,	// (0x00065402) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f0d,	// (0x00065412) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f0d,	// (0x00065412) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f1e,	// (0x00065423) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f1e,	// (0x00065423) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f2e,	// (0x00065433) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f2e,	// (0x00065433) cell_vitu2_dropdown_list_ctrl_pane_g4

0x62ca,	// (0x000647cf) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x62ca,	// (0x000647cf) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0006deff) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0006deff) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f47,	// (0x0006544c) aid_size_cell_gallery2_ParamLimits

0x6f47,	// (0x0006544c) aid_size_cell_gallery2

0x6f61,	// (0x00065466) grid_gallery2_pane_ParamLimits

0x6f61,	// (0x00065466) grid_gallery2_pane

0x6f78,	// (0x0006547d) scroll_pane_cp029_ParamLimits

0x6f78,	// (0x0006547d) scroll_pane_cp029

0x6f88,	// (0x0006548d) cell_gallery2_pane_ParamLimits

0x6f88,	// (0x0006548d) cell_gallery2_pane

0xda74,	// (0x0006bf79) cell_gallery2_pane_g2

0x6fdf,	// (0x000654e4) cell_gallery2_pane_g3

0xda7c,	// (0x0006bf81) cell_gallery2_pane_g4

0xda84,	// (0x0006bf89) cell_gallery2_pane_g5

0xab7a,	// (0x0006907f) grid_highlight_pane_cp10

0x6580,	// (0x00064a85) popup_vitu2_match_list_window_ParamLimits

0x6594,	// (0x00064a99) popup_vitu2_query_window_ParamLimits

0x6594,	// (0x00064a99) popup_vitu2_query_window

0x0d7d,	// (0x0005f282) bg_vitu2_candi_button_pane

0xda59,	// (0x0006bf5e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda62,	// (0x0006bf67) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda6b,	// (0x0006bf70) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6fe7,	// (0x000654ec) bg_button_pane_cp015

0x6ff9,	// (0x000654fe) bg_button_pane_cp016

0x700c,	// (0x00065511) bg_button_pane_cp017

0xca01,	// (0x0006af06) bg_popup_sub_pane_cp22

0xda8c,	// (0x0006bf91) popup_vitu2_query_window_g1

0x7051,	// (0x00065556) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0006df0a) popup_vitu2_query_window_g

0x706e,	// (0x00065573) popup_vitu2_query_window_t1_ParamLimits

0x706e,	// (0x00065573) popup_vitu2_query_window_t1

0x70a1,	// (0x000655a6) popup_vitu2_query_window_t2_ParamLimits

0x70a1,	// (0x000655a6) popup_vitu2_query_window_t2

0x70b3,	// (0x000655b8) popup_vitu2_query_window_t3_ParamLimits

0x70b3,	// (0x000655b8) popup_vitu2_query_window_t3

0x70db,	// (0x000655e0) popup_vitu2_query_window_t4_ParamLimits

0x70db,	// (0x000655e0) popup_vitu2_query_window_t4

0x70fe,	// (0x00065603) popup_vitu2_query_window_t5_ParamLimits

0x70fe,	// (0x00065603) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0006df11) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0006df11) popup_vitu2_query_window_t

0xd92d,	// (0x0006be32) main_cset_text_pane

0x699d,	// (0x00064ea2) aid_area_touch_slider_ParamLimits

0x69b9,	// (0x00064ebe) cset_slider_pane_ParamLimits

0x69e3,	// (0x00064ee8) main_cset_slider_pane_g1_ParamLimits

0x69f8,	// (0x00064efd) main_cset_slider_pane_g2_ParamLimits

0xd94e,	// (0x0006be53) main_cset_slider_pane_g3_ParamLimits

0xd94e,	// (0x0006be53) main_cset_slider_pane_g3

0x6a0d,	// (0x00064f12) main_cset_slider_pane_g4_ParamLimits

0x6a0d,	// (0x00064f12) main_cset_slider_pane_g4

0x6a1c,	// (0x00064f21) main_cset_slider_pane_g5_ParamLimits

0x6a1c,	// (0x00064f21) main_cset_slider_pane_g5

0x6a28,	// (0x00064f2d) main_cset_slider_pane_g6_ParamLimits

0x6a28,	// (0x00064f2d) main_cset_slider_pane_g6

0xf95f,	// (0x0006de64) main_cset_slider_pane_g_ParamLimits

0xd97e,	// (0x0006be83) main_cset_slider_pane_t1_ParamLimits

0x6ab4,	// (0x00064fb9) main_cset_slider_pane_t2_ParamLimits

0x6ace,	// (0x00064fd3) main_cset_slider_pane_t3_ParamLimits

0x6ae8,	// (0x00064fed) main_cset_slider_pane_t4_ParamLimits

0x6b02,	// (0x00065007) main_cset_slider_pane_t5_ParamLimits

0x6b1c,	// (0x00065021) main_cset_slider_pane_t6_ParamLimits

0x6b31,	// (0x00065036) main_cset_slider_pane_t7_ParamLimits

0x6b5b,	// (0x00065060) main_cset_slider_pane_t8_ParamLimits

0x6b5b,	// (0x00065060) main_cset_slider_pane_t8

0x6b83,	// (0x00065088) main_cset_slider_pane_t9_ParamLimits

0x6b83,	// (0x00065088) main_cset_slider_pane_t9

0x6bab,	// (0x000650b0) main_cset_slider_pane_t10_ParamLimits

0x6bab,	// (0x000650b0) main_cset_slider_pane_t10

0x6bd3,	// (0x000650d8) main_cset_slider_pane_t11_ParamLimits

0x6bd3,	// (0x000650d8) main_cset_slider_pane_t11

0x6bfb,	// (0x00065100) main_cset_slider_pane_t12_ParamLimits

0x6bfb,	// (0x00065100) main_cset_slider_pane_t12

0x6c18,	// (0x0006511d) main_cset_slider_pane_t13_ParamLimits

0x6c18,	// (0x0006511d) main_cset_slider_pane_t13

0xf984,	// (0x0006de89) main_cset_slider_pane_t_ParamLimits

0x9e2b,	// (0x00068330) bg_popup_sub_pane_cp011

0xda98,	// (0x0006bf9d) main_cset_text_pane_g1

0xdaa0,	// (0x0006bfa5) main_cset_text_pane_t1

0xdaae,	// (0x0006bfb3) main_cset_text_pane_t2

0xdabc,	// (0x0006bfc1) main_cset_text_pane_t3

0xdaca,	// (0x0006bfcf) main_cset_text_pane_t4

0xdad8,	// (0x0006bfdd) main_cset_text_pane_t5

0xdae6,	// (0x0006bfeb) main_cset_text_pane_t6

0xdaf4,	// (0x0006bff9) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0006df20) main_cset_text_pane_t

0x0d7d,	// (0x0005f282) main_cam4_burst_pane

0x0d7d,	// (0x0005f282) main_cam5_pane

0x68e6,	// (0x00064deb) bg_button_pane_cp019

0x68ef,	// (0x00064df4) bg_button_pane_cp020

0xd95a,	// (0x0006be5f) main_cset_slider_pane_g7_ParamLimits

0xd95a,	// (0x0006be5f) main_cset_slider_pane_g7

0xd966,	// (0x0006be6b) main_cset_slider_pane_g8_ParamLimits

0xd966,	// (0x0006be6b) main_cset_slider_pane_g8

0x6a3c,	// (0x00064f41) main_cset_slider_pane_g9_ParamLimits

0x6a3c,	// (0x00064f41) main_cset_slider_pane_g9

0x6a48,	// (0x00064f4d) main_cset_slider_pane_g10_ParamLimits

0x6a48,	// (0x00064f4d) main_cset_slider_pane_g10

0x6a54,	// (0x00064f59) main_cset_slider_pane_g11_ParamLimits

0x6a54,	// (0x00064f59) main_cset_slider_pane_g11

0x6a60,	// (0x00064f65) main_cset_slider_pane_g12_ParamLimits

0x6a60,	// (0x00064f65) main_cset_slider_pane_g12

0x6a6c,	// (0x00064f71) main_cset_slider_pane_g13_ParamLimits

0x6a6c,	// (0x00064f71) main_cset_slider_pane_g13

0x6a78,	// (0x00064f7d) main_cset_slider_pane_g14_ParamLimits

0x6a78,	// (0x00064f7d) main_cset_slider_pane_g14

0x6a84,	// (0x00064f89) main_cset_slider_pane_g15_ParamLimits

0x6a84,	// (0x00064f89) main_cset_slider_pane_g15

0xd9ac,	// (0x0006beb1) main_cset_slider_pane_t14_ParamLimits

0xd9ac,	// (0x0006beb1) main_cset_slider_pane_t14

0xd9e5,	// (0x0006beea) main_cset_slider_pane_t15_ParamLimits

0xd9e5,	// (0x0006beea) main_cset_slider_pane_t15

0x7177,	// (0x0006567c) aid_cam4_burst_size_cell_ParamLimits

0x7177,	// (0x0006567c) aid_cam4_burst_size_cell

0x7193,	// (0x00065698) grid_cam4_burst_pane_ParamLimits

0x7193,	// (0x00065698) grid_cam4_burst_pane

0x71c5,	// (0x000656ca) linegrid_cam4_burst_pane_ParamLimits

0x71c5,	// (0x000656ca) linegrid_cam4_burst_pane

0x71e3,	// (0x000656e8) scroll_pane_cp30_ParamLimits

0x71e3,	// (0x000656e8) scroll_pane_cp30

0x71ef,	// (0x000656f4) cell_cam4_burst_pane_ParamLimits

0x71ef,	// (0x000656f4) cell_cam4_burst_pane

0xdb02,	// (0x0006c007) linegrid_cam4_burst_pane_g1_ParamLimits

0xdb02,	// (0x0006c007) linegrid_cam4_burst_pane_g1

0x722f,	// (0x00065734) linegrid_cam4_burst_pane_g2_ParamLimits

0x722f,	// (0x00065734) linegrid_cam4_burst_pane_g2

0xdb0f,	// (0x0006c014) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb0f,	// (0x0006c014) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0006df2f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0006df2f) linegrid_cam4_burst_pane_g

0x7240,	// (0x00065745) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7240,	// (0x00065745) linegrid_cam4_burst_pane_g3_copy1

0xdb1c,	// (0x0006c021) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb1c,	// (0x0006c021) linegrid_cam4_burst_pane_g4

0x725a,	// (0x0006575f) linegrid_cam4_burst_pane_g5_ParamLimits

0x725a,	// (0x0006575f) linegrid_cam4_burst_pane_g5

0x726b,	// (0x00065770) linegrid_cam4_burst_pane_g6_ParamLimits

0x726b,	// (0x00065770) linegrid_cam4_burst_pane_g6

0xdb29,	// (0x0006c02e) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb29,	// (0x0006c02e) linegrid_cam4_burst_pane_g7

0x7282,	// (0x00065787) cell_cam4_burst_pane_g1

0xdb42,	// (0x0006c047) main_cam5_pane_t1_ParamLimits

0xdb42,	// (0x0006c047) main_cam5_pane_t1

0xdb54,	// (0x0006c059) main_cam5_pane_t2_ParamLimits

0xdb54,	// (0x0006c059) main_cam5_pane_t2

0xdb66,	// (0x0006c06b) main_cam5_pane_t3_ParamLimits

0xdb66,	// (0x0006c06b) main_cam5_pane_t3

0xdb78,	// (0x0006c07d) main_cam5_pane_t4_ParamLimits

0xdb78,	// (0x0006c07d) main_cam5_pane_t4

0xdb90,	// (0x0006c095) main_cam5_pane_t5_ParamLimits

0xdb90,	// (0x0006c095) main_cam5_pane_t5

0xdba4,	// (0x0006c0a9) main_cam5_pane_t6_ParamLimits

0xdba4,	// (0x0006c0a9) main_cam5_pane_t6

0xdbb8,	// (0x0006c0bd) main_cam5_pane_t7_ParamLimits

0xdbb8,	// (0x0006c0bd) main_cam5_pane_t7

0xdbca,	// (0x0006c0cf) main_cam5_pane_t8_ParamLimits

0xdbca,	// (0x0006c0cf) main_cam5_pane_t8

0xdbe8,	// (0x0006c0ed) main_cam5_pane_t9_ParamLimits

0xdbe8,	// (0x0006c0ed) main_cam5_pane_t9

0xdbfa,	// (0x0006c0ff) main_cam5_pane_t10_ParamLimits

0xdbfa,	// (0x0006c0ff) main_cam5_pane_t10

0xdc0c,	// (0x0006c111) main_cam5_pane_t11_ParamLimits

0xdc0c,	// (0x0006c111) main_cam5_pane_t11

0xdc20,	// (0x0006c125) main_cam5_pane_t12_ParamLimits

0xdc20,	// (0x0006c125) main_cam5_pane_t12

0xdc37,	// (0x0006c13c) main_cam5_pane_t13_ParamLimits

0xdc37,	// (0x0006c13c) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0006df3b) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0006df3b) main_cam5_pane_t

0x0d22,	// (0x0005f227) popup_scut_keymap_window_ParamLimits

0x0d22,	// (0x0005f227) popup_scut_keymap_window

0x7295,	// (0x0006579a) aid_size_cell_brow_shortcut

0xab7a,	// (0x0006907f) bg_popup_window_pane_cp010

0x72a1,	// (0x000657a6) grid_scut_pane

0x72ad,	// (0x000657b2) cell_scut_pane_ParamLimits

0x72ad,	// (0x000657b2) cell_scut_pane

0x72c8,	// (0x000657cd) cell_scut_pane_g1

0xdc5a,	// (0x0006c15f) cell_scut_pane_t1

0xdc69,	// (0x0006c16e) cell_scut_pane_t2

0x72d1,	// (0x000657d6) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0006df56) cell_scut_pane_t

0x4f66,	// (0x0006346b) main_mup3_pane_g8_ParamLimits

0x4f66,	// (0x0006346b) main_mup3_pane_g8

0x64aa,	// (0x000649af) area_vitu2_query_pane_ParamLimits

0x64aa,	// (0x000649af) area_vitu2_query_pane

0x701f,	// (0x00065524) input_focus_pane_cp08

0xdc78,	// (0x0006c17d) area_vitu2_query_pane_g1

0x72df,	// (0x000657e4) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0006df5d) area_vitu2_query_pane_g

0x72f0,	// (0x000657f5) area_vitu2_query_pane_t1_ParamLimits

0x72f0,	// (0x000657f5) area_vitu2_query_pane_t1

0x7304,	// (0x00065809) area_vitu2_query_pane_t2_ParamLimits

0x7304,	// (0x00065809) area_vitu2_query_pane_t2

0x7318,	// (0x0006581d) area_vitu2_query_pane_t3_ParamLimits

0x7318,	// (0x0006581d) area_vitu2_query_pane_t3

0xa6ca,	// (0x00068bcf) area_vitu2_query_pane_t4_ParamLimits

0xa6ca,	// (0x00068bcf) area_vitu2_query_pane_t4

0xa6f2,	// (0x00068bf7) area_vitu2_query_pane_t5_ParamLimits

0xa6f2,	// (0x00068bf7) area_vitu2_query_pane_t5

0xa71a,	// (0x00068c1f) area_vitu2_query_pane_t6_ParamLimits

0xa71a,	// (0x00068c1f) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0006df62) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0006df62) area_vitu2_query_pane_t

0x7340,	// (0x00065845) bg_button_pane_cp018

0x734e,	// (0x00065853) bg_button_pane_cp021

0x735a,	// (0x0006585f) bg_button_pane_cp022

0x736b,	// (0x00065870) input_focus_pane_cp09

0xb417,	// (0x0006991c) aid_size_touch_mv_arrow_left

0xb442,	// (0x00069947) aid_size_touch_mv_arrow_right

0x6a9c,	// (0x00064fa1) main_cset_slider_pane_g16_ParamLimits

0x6a9c,	// (0x00064fa1) main_cset_slider_pane_g16

0x6aa8,	// (0x00064fad) main_cset_slider_pane_g17_ParamLimits

0x6aa8,	// (0x00064fad) main_cset_slider_pane_g17

0x7282,	// (0x00065787) cell_cam4_burst_pane_g1_ParamLimits

0x9e2b,	// (0x00068330) compa_mode_pane

0x6ce3,	// (0x000651e8) popup_vtel_slider_window_g3_ParamLimits

0x6ce3,	// (0x000651e8) popup_vtel_slider_window_g3

0x6cf7,	// (0x000651fc) popup_vtel_slider_window_g4_ParamLimits

0x6cf7,	// (0x000651fc) popup_vtel_slider_window_g4

0x6d0b,	// (0x00065210) popup_vtel_slider_window_t1_ParamLimits

0x6d0b,	// (0x00065210) popup_vtel_slider_window_t1

0x0d7d,	// (0x0005f282) main_cl_pane

0x41d2,	// (0x000626d7) popup_imed_adjust2_window_ParamLimits

0xca01,	// (0x0006af06) bg_tb_trans_pane_cp05_ParamLimits

0xd329,	// (0x0006b82e) popup_imed_adjust2_window_g1_ParamLimits

0xd338,	// (0x0006b83d) popup_imed_adjust2_window_g2_ParamLimits

0xd338,	// (0x0006b83d) popup_imed_adjust2_window_g2

0xd344,	// (0x0006b849) popup_imed_adjust2_window_g3_ParamLimits

0xd344,	// (0x0006b849) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0006dcc9) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0006dcc9) popup_imed_adjust2_window_g

0xd350,	// (0x0006b855) popup_imed_adjust2_window_t1_ParamLimits

0xd368,	// (0x0006b86d) slider_imed_adjust_pane_ParamLimits

0xd3bf,	// (0x0006b8c4) slider_imed_adjust_pane_g1_ParamLimits

0xd3cf,	// (0x0006b8d4) slider_imed_adjust_pane_g2_ParamLimits

0xd3df,	// (0x0006b8e4) slider_imed_adjust_pane_g3_ParamLimits

0xd3f0,	// (0x0006b8f5) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0006dcd0) slider_imed_adjust_pane_g_ParamLimits

0x61dd,	// (0x000646e2) aid_touch_area_cam4_ParamLimits

0x61dd,	// (0x000646e2) aid_touch_area_cam4

0x61ed,	// (0x000646f2) battery_pane_cp01

0x6274,	// (0x00064779) main_camera4_pane_g6_ParamLimits

0x6274,	// (0x00064779) main_camera4_pane_g6

0x6292,	// (0x00064797) main_camera4_pane_t2_ParamLimits

0x6292,	// (0x00064797) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0006ddd7) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0006ddd7) main_camera4_pane_t

0x6323,	// (0x00064828) aid_touch_area_vid4_ParamLimits

0x6323,	// (0x00064828) aid_touch_area_vid4

0x6363,	// (0x00064868) main_video4_pane_g5_ParamLimits

0x6363,	// (0x00064868) main_video4_pane_g5

0x6389,	// (0x0006488e) vid4_progress_pane_ParamLimits

0x6389,	// (0x0006488e) vid4_progress_pane

0xd972,	// (0x0006be77) main_cset_slider_pane_g18_ParamLimits

0xd972,	// (0x0006be77) main_cset_slider_pane_g18

0xdb36,	// (0x0006c03b) cell_cam4_burst_pane_g2_ParamLimits

0xdb36,	// (0x0006c03b) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0006df36) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0006df36) cell_cam4_burst_pane_g

0x737c,	// (0x00065881) bg_cl_pane_ParamLimits

0x737c,	// (0x00065881) bg_cl_pane

0x7388,	// (0x0006588d) cl_header_pane_ParamLimits

0x7388,	// (0x0006588d) cl_header_pane

0x7394,	// (0x00065899) cl_listscroll_pane_ParamLimits

0x7394,	// (0x00065899) cl_listscroll_pane

0xdc84,	// (0x0006c189) bg_cl_pane_g1

0xdc8c,	// (0x0006c191) bg_cl_pane_g2

0xdc94,	// (0x0006c199) bg_cl_pane_g3

0xdc9c,	// (0x0006c1a1) bg_cl_pane_g4

0xdca4,	// (0x0006c1a9) bg_cl_pane_g5

0xdcac,	// (0x0006c1b1) bg_cl_pane_g6

0xdcb4,	// (0x0006c1b9) bg_cl_pane_g7

0xdcbc,	// (0x0006c1c1) bg_cl_pane_g8

0xdcc4,	// (0x0006c1c9) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0006df71) bg_cl_pane_g

0x73a0,	// (0x000658a5) aid_height_cl_leading_ParamLimits

0x73a0,	// (0x000658a5) aid_height_cl_leading

0x73ac,	// (0x000658b1) aid_height_cl_text_ParamLimits

0x73ac,	// (0x000658b1) aid_height_cl_text

0xd3b1,	// (0x0006b8b6) bg_cl_header_pane_ParamLimits

0xd3b1,	// (0x0006b8b6) bg_cl_header_pane

0x73c4,	// (0x000658c9) cl_header_pane_g1_ParamLimits

0x73c4,	// (0x000658c9) cl_header_pane_g1

0x73d1,	// (0x000658d6) cl_header_pane_t1_ParamLimits

0x73d1,	// (0x000658d6) cl_header_pane_t1

0xdccc,	// (0x0006c1d1) cl_list_pane

0xd945,	// (0x0006be4a) hc_scroll_pane_cp01

0xadb7,	// (0x000692bc) bg_cl_header_pane_g1

0xd81d,	// (0x0006bd22) bg_cl_header_pane_g2

0xadd7,	// (0x000692dc) bg_cl_header_pane_g3

0xd82d,	// (0x0006bd32) bg_cl_header_pane_g4

0xd825,	// (0x0006bd2a) bg_cl_header_pane_g5

0xda51,	// (0x0006bf56) bg_cl_header_pane_g6

0xd845,	// (0x0006bd4a) bg_cl_header_pane_g7

0xd84d,	// (0x0006bd52) bg_cl_header_pane_g8

0xd83d,	// (0x0006bd42) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0006df84) bg_cl_header_pane_g

0x73e3,	// (0x000658e8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x73e3,	// (0x000658e8) hc_cl_list_double_graphic_heading_pane

0x73f3,	// (0x000658f8) hc_cl_list_single_graphic_pane_ParamLimits

0x73f3,	// (0x000658f8) hc_cl_list_single_graphic_pane

0x7405,	// (0x0006590a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7405,	// (0x0006590a) hc_cl_list_single_graphic_pane_g1

0x7411,	// (0x00065916) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7411,	// (0x00065916) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0006df97) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0006df97) hc_cl_list_single_graphic_pane_g

0x7425,	// (0x0006592a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7425,	// (0x0006592a) hc_cl_list_single_graphic_pane_t1

0x7405,	// (0x0006590a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7405,	// (0x0006590a) hc_cl_list_double_graphic_heading_pane_g1

0x743a,	// (0x0006593f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x743a,	// (0x0006593f) hc_cl_list_double_graphic_heading_pane_g2

0x744e,	// (0x00065953) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x744e,	// (0x00065953) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0006df9c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0006df9c) hc_cl_list_double_graphic_heading_pane_g

0x7462,	// (0x00065967) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7462,	// (0x00065967) hc_cl_list_double_graphic_heading_pane_t1

0x7477,	// (0x0006597c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7477,	// (0x0006597c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0006dfa3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0006dfa3) hc_cl_list_double_graphic_heading_pane_t

0x7494,	// (0x00065999) vid4_progress_pane_g1

0x74a4,	// (0x000659a9) vid4_progress_pane_g2

0x74b4,	// (0x000659b9) vid4_progress_pane_g3

0x62f1,	// (0x000647f6) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0006dfa8) vid4_progress_pane_g

0x74c6,	// (0x000659cb) vid4_progress_pane_t1

0x74dc,	// (0x000659e1) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0006dfb3) vid4_progress_pane_t

0x7506,	// (0x00065a0b) wait_bar_pane_cp07

0xcc26,	// (0x0006b12b) blid_firmament_pane_ParamLimits

0xcc69,	// (0x0006b16e) popup_blid_sat_info2_window_g1

0xcc8d,	// (0x0006b192) popup_blid_sat_info2_window_t3

0xcc9b,	// (0x0006b1a0) popup_blid_sat_info2_window_t4

0xcca9,	// (0x0006b1ae) popup_blid_sat_info2_window_t5

0xccb7,	// (0x0006b1bc) popup_blid_sat_info2_window_t6

0xccc7,	// (0x0006b1cc) popup_blid_sat_info2_window_t7

0xccd5,	// (0x0006b1da) popup_blid_sat_info2_window_t8

0xcce3,	// (0x0006b1e8) popup_blid_sat_info2_window_t9

0xccf1,	// (0x0006b1f6) popup_blid_sat_info2_window_t10

0xcdb9,	// (0x0006b2be) aid_firma_cardinal_ParamLimits

0xcdcd,	// (0x0006b2d2) blid_firmament_pane_t1_ParamLimits

0xcde4,	// (0x0006b2e9) blid_firmament_pane_t2_ParamLimits

0xcdfb,	// (0x0006b300) blid_firmament_pane_t3_ParamLimits

0xce12,	// (0x0006b317) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0006dbbd) blid_firmament_pane_t_ParamLimits

0xce29,	// (0x0006b32e) blid_sat_info_pane_ParamLimits

0x4128,	// (0x0006262d) main_cam_set_pane_ParamLimits

0x5722,	// (0x00063c27) aid_size_cell_colour_35_ParamLimits

0x573c,	// (0x00063c41) aid_size_cell_colour_112_ParamLimits

0x5753,	// (0x00063c58) aid_size_cell_effect_ParamLimits

0xb074,	// (0x00069579) bg_tb_trans_pane_cp02_ParamLimits

0xb620,	// (0x00069b25) heading_imed_pane_ParamLimits

0x576d,	// (0x00063c72) listscroll_imed_pane_ParamLimits

0xc01d,	// (0x0006a522) popup_call2_audio_first_window_g5_ParamLimits

0xc01d,	// (0x0006a522) popup_call2_audio_first_window_g5

0x5eb9,	// (0x000643be) aid_size_touch_image3_arrow_left_ParamLimits

0x5eb9,	// (0x000643be) aid_size_touch_image3_arrow_left

0x5ecf,	// (0x000643d4) aid_size_touch_image3_arrow_right_ParamLimits

0x5ecf,	// (0x000643d4) aid_size_touch_image3_arrow_right

0x74f1,	// (0x000659f6) vid4_progress_pane_t3

0x5a11,	// (0x00063f16) main_hwr_training_symbol_option_pane_ParamLimits

0x5a11,	// (0x00063f16) main_hwr_training_symbol_option_pane

0xd665,	// (0x0006bb6a) popup_hwr_training_preview_window_ParamLimits

0xd665,	// (0x0006bb6a) popup_hwr_training_preview_window

0x5a72,	// (0x00063f77) hwr_training_navi_pane_g5_ParamLimits

0x5a72,	// (0x00063f77) hwr_training_navi_pane_g5

0xd80b,	// (0x0006bd10) popup_char_count_window

0x0d63,	// (0x0005f268) bg_popup_sub_pane_cp20_ParamLimits

0x6e14,	// (0x00065319) list_vitu2_match_list_pane_ParamLimits

0x6e20,	// (0x00065325) vitu2_page_scroll_pane_ParamLimits

0x6e20,	// (0x00065325) vitu2_page_scroll_pane

0xdcde,	// (0x0006c1e3) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdcde,	// (0x0006c1e3) list_single_hwr_training_symbol_option_pane

0xdcf1,	// (0x0006c1f6) list_single_hwr_training_symbol_option_pane_g1

0xdcf9,	// (0x0006c1fe) list_single_hwr_training_symbol_option_pane_t1

0xdd07,	// (0x0006c20c) bg_button_pane_cp023

0xdd10,	// (0x0006c215) bg_button_pane_cp024

0x7551,	// (0x00065a56) vitu2_page_scroll_pane_g1

0x7559,	// (0x00065a5e) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0006dfba) vitu2_page_scroll_pane_g

0x7563,	// (0x00065a68) vitu2_page_scroll_pane_t1

0xd385,	// (0x0006b88a) popup_char_count_window_g1

0xdd43,	// (0x0006c248) popup_char_count_window_g2

0xd37c,	// (0x0006b881) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0006dfbf) popup_char_count_window_g

0xdd4c,	// (0x0006c251) popup_char_count_window_t1

0x0d7d,	// (0x0005f282) main_vded2_pane

0xd315,	// (0x0006b81a) aid_size_cell_imed_line

0xd31f,	// (0x0006b824) grid_imed_line_width_pane

0x63fd,	// (0x00064902) vid4_indicators_pane_g4

0xdd5a,	// (0x0006c25f) cell_imed_line_width_pane_ParamLimits

0xdd5a,	// (0x0006c25f) cell_imed_line_width_pane

0xdd70,	// (0x0006c275) cell_imed_line_width_pane_g1

0xd38e,	// (0x0006b893) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0006dfc6) cell_imed_line_width_pane_g

0x7572,	// (0x00065a77) main_vded2_pane_g1_ParamLimits

0x7572,	// (0x00065a77) main_vded2_pane_g1

0x7581,	// (0x00065a86) main_vded2_pane_g2_ParamLimits

0x7581,	// (0x00065a86) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0006dfcb) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0006dfcb) main_vded2_pane_g

0x758f,	// (0x00065a94) vded2_slider_pane_ParamLimits

0x758f,	// (0x00065a94) vded2_slider_pane

0x759c,	// (0x00065aa1) aid_size_touch_vded2_end

0x75a6,	// (0x00065aab) aid_size_touch_vded2_playhead

0xdd79,	// (0x0006c27e) aid_size_touch_vded2_start

0xdd81,	// (0x0006c286) vded2_slider_bg_pane

0xdd8a,	// (0x0006c28f) vded2_slider_pane_g1

0xdd93,	// (0x0006c298) vded2_slider_pane_g2

0x75ae,	// (0x00065ab3) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0006dfd0) vded2_slider_pane_g

0xd396,	// (0x0006b89b) vded2_slider_bg_pane_g1

0xd39f,	// (0x0006b8a4) vded2_slider_bg_pane_g2

0xd3a8,	// (0x0006b8ad) vded2_slider_bg_pane_g3

0x0002,

0xf788,	// (0x0006dc8d) vded2_slider_bg_pane_g

0x39f4,	// (0x00061ef9) aid_postcard_touch_down_pane_ParamLimits

0x39f4,	// (0x00061ef9) aid_postcard_touch_down_pane

0x3a04,	// (0x00061f09) aid_postcard_touch_up_pane_ParamLimits

0x3a04,	// (0x00061f09) aid_postcard_touch_up_pane

0x0d7d,	// (0x0005f282) main_blid2_pane

0x4151,	// (0x00062656) popup_blid2_search_window

0x9e2b,	// (0x00068330) blid2_gps_pane

0x9e2b,	// (0x00068330) blid2_navig_pane

0x9e2b,	// (0x00068330) blid2_search_pane

0x9e2b,	// (0x00068330) blid2_tripm_pane

0x75b7,	// (0x00065abc) blid2_search_pane_g1_ParamLimits

0x75b7,	// (0x00065abc) blid2_search_pane_g1

0x75c3,	// (0x00065ac8) blid2_search_pane_t1_ParamLimits

0x75c3,	// (0x00065ac8) blid2_search_pane_t1

0x75d5,	// (0x00065ada) aid_size_cell_blid2_gps_ParamLimits

0x75d5,	// (0x00065ada) aid_size_cell_blid2_gps

0x75e5,	// (0x00065aea) blid2_gps_pane_g1_ParamLimits

0x75e5,	// (0x00065aea) blid2_gps_pane_g1

0x75f1,	// (0x00065af6) grid_blid2_satellite_pane_ParamLimits

0x75f1,	// (0x00065af6) grid_blid2_satellite_pane

0x75ff,	// (0x00065b04) blid2_navig_pane_g1_ParamLimits

0x75ff,	// (0x00065b04) blid2_navig_pane_g1

0x760b,	// (0x00065b10) blid2_navig_pane_t1_ParamLimits

0x760b,	// (0x00065b10) blid2_navig_pane_t1

0x761d,	// (0x00065b22) blid2_navig_pane_t2_ParamLimits

0x761d,	// (0x00065b22) blid2_navig_pane_t2

0x0001,

0xfad2,	// (0x0006dfd7) blid2_navig_pane_t_ParamLimits

0xfad2,	// (0x0006dfd7) blid2_navig_pane_t

0x762f,	// (0x00065b34) blid2_navig_ring_pane_ParamLimits

0x762f,	// (0x00065b34) blid2_navig_ring_pane

0x763f,	// (0x00065b44) blid2_speed_pane_ParamLimits

0x763f,	// (0x00065b44) blid2_speed_pane

0x764b,	// (0x00065b50) blid2_tripm_pane_g1_ParamLimits

0x764b,	// (0x00065b50) blid2_tripm_pane_g1

0x765b,	// (0x00065b60) blid2_tripm_pane_g2_ParamLimits

0x765b,	// (0x00065b60) blid2_tripm_pane_g2

0x7667,	// (0x00065b6c) blid2_tripm_pane_g3_ParamLimits

0x7667,	// (0x00065b6c) blid2_tripm_pane_g3

0x7673,	// (0x00065b78) blid2_tripm_pane_g4_ParamLimits

0x7673,	// (0x00065b78) blid2_tripm_pane_g4

0x767f,	// (0x00065b84) blid2_tripm_pane_g5_ParamLimits

0x767f,	// (0x00065b84) blid2_tripm_pane_g5

0x0005,

0xfad7,	// (0x0006dfdc) blid2_tripm_pane_g_ParamLimits

0xfad7,	// (0x0006dfdc) blid2_tripm_pane_g

0x769b,	// (0x00065ba0) blid2_tripm_pane_t1_ParamLimits

0x769b,	// (0x00065ba0) blid2_tripm_pane_t1

0x76ad,	// (0x00065bb2) blid2_tripm_pane_t2_ParamLimits

0x76ad,	// (0x00065bb2) blid2_tripm_pane_t2

0x76bf,	// (0x00065bc4) blid2_tripm_pane_t3_ParamLimits

0x76bf,	// (0x00065bc4) blid2_tripm_pane_t3

0x0003,

0xfae4,	// (0x0006dfe9) blid2_tripm_pane_t_ParamLimits

0xfae4,	// (0x0006dfe9) blid2_tripm_pane_t

0x76f1,	// (0x00065bf6) cell_blid2_satellite_pane_ParamLimits

0x76f1,	// (0x00065bf6) cell_blid2_satellite_pane

0x770f,	// (0x00065c14) cell_blid2_satellite_pane_g1

0xdd9b,	// (0x0006c2a0) cell_blid2_satellite_pane_t1

0xce39,	// (0x0006b33e) blid2_speed_pane_g1

0xdda9,	// (0x0006c2ae) blid2_speed_pane_t1

0xddb7,	// (0x0006c2bc) blid2_speed_pane_t2

0x0001,

0xfaed,	// (0x0006dff2) blid2_speed_pane_t

0xce39,	// (0x0006b33e) blid2_navig_ring_pane_g1

0x7718,	// (0x00065c1d) blid2_navig_ring_pane_g2

0x7720,	// (0x00065c25) blid2_navig_ring_pane_g3

0x7728,	// (0x00065c2d) blid2_navig_ring_pane_g4

0x7730,	// (0x00065c35) blid2_navig_ring_pane_g5

0x0004,

0xfaf2,	// (0x0006dff7) blid2_navig_ring_pane_g

0x9e2b,	// (0x00068330) bg_popup_window_pane_cp011

0xddc5,	// (0x0006c2ca) popup_blid2_search_window_g1

0xddcd,	// (0x0006c2d2) popup_blid2_search_window_t1

0xdddb,	// (0x0006c2e0) popup_blid2_search_window_t2

0x0001,

0xfafd,	// (0x0006e002) popup_blid2_search_window_t

0xacc6,	// (0x000691cb) main_browser_pane_g1

0xa59d,	// (0x00068aa2) main_browser_pane_ParamLimits

0x4128,	// (0x0006262d) bg_button_pane_cp011_ParamLimits

0x66ad,	// (0x00064bb2) cell_vitu2_function_pane_g1_ParamLimits

0xca01,	// (0x0006af06) bg_popup_sub_pane_cp22_ParamLimits

0x701f,	// (0x00065524) input_focus_pane_cp08_ParamLimits

0x7036,	// (0x0006553b) popup_vitu2_query_button_pane_ParamLimits

0x7036,	// (0x0006553b) popup_vitu2_query_button_pane

0x7047,	// (0x0006554c) popup_vitu2_query_input_button_pane

0xda8c,	// (0x0006bf91) popup_vitu2_query_window_g1_ParamLimits

0x7051,	// (0x00065556) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0006df0a) popup_vitu2_query_window_g_ParamLimits

0x9e2b,	// (0x00068330) bg_button_pane_cp026

0x7738,	// (0x00065c3d) popup_vitu2_query_input_button_pane_g1

0x9e2b,	// (0x00068330) bg_button_pane_cp025

0xdde9,	// (0x0006c2ee) popup_vitu2_query_button_pane_t1

0x4bcc,	// (0x000630d1) main_mp3_pane_t6

0x4bdc,	// (0x000630e1) popup_slider_window_cp01

0x62d8,	// (0x000647dd) cam4_battery_pane

0x63b6,	// (0x000648bb) cam4_battery_pane_cp02

0x748c,	// (0x00065991) cam4_battery_pane_cp01

0x748c,	// (0x00065991) cam4_battery_pane_cp03

0xd923,	// (0x0006be28) cam4_battery_pane_g1

0xce39,	// (0x0006b33e) cam4_battery_pane_g2

0x0001,

0xfb02,	// (0x0006e007) cam4_battery_pane_g

0xccff,	// (0x0006b204) popup_blid_sat_info2_window_t11

0xb417,	// (0x0006991c) aid_size_touch_mv_arrow_left_ParamLimits

0xb442,	// (0x00069947) aid_size_touch_mv_arrow_right_ParamLimits

0xb4a0,	// (0x000699a5) navi_pane_g1_ParamLimits

0xb4ac,	// (0x000699b1) navi_pane_g2_ParamLimits

0xb4da,	// (0x000699df) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0006d8cf) navi_pane_g_ParamLimits

0x3352,	// (0x00061857) navi_pane_mv_t1_ParamLimits

0x5779,	// (0x00063c7e) grid_imed_effect_pane_ParamLimits

0x1db4,	// (0x000602b9) aid_placing_vt_slider_lsc

0xac11,	// (0x00069116) aid_placing_vt_slider_prt

0xb074,	// (0x00069579) bg_tb_trans_pane_cp01_ParamLimits

0xcf80,	// (0x0006b485) popup_image_details_window_g1_ParamLimits

0xcf93,	// (0x0006b498) popup_image_details_window_g2_ParamLimits

0xcfa8,	// (0x0006b4ad) popup_image_details_window_g3_ParamLimits

0xcfa8,	// (0x0006b4ad) popup_image_details_window_g3

0xf6fd,	// (0x0006dc02) popup_image_details_window_g_ParamLimits

0xcfbc,	// (0x0006b4c1) popup_image_details_window_t1_ParamLimits

0xcfce,	// (0x0006b4d3) popup_image_details_window_t2_ParamLimits

0xcfe7,	// (0x0006b4ec) popup_image_details_window_t3_ParamLimits

0xcffb,	// (0x0006b500) popup_image_details_window_t4_ParamLimits

0xd016,	// (0x0006b51b) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0006dc09) popup_image_details_window_t_ParamLimits

0x73b8,	// (0x000658bd) cl_header_name_pane_ParamLimits

0x73b8,	// (0x000658bd) cl_header_name_pane

0x7740,	// (0x00065c45) cl_header_name_pane_t1_ParamLimits

0x7740,	// (0x00065c45) cl_header_name_pane_t1

0x7757,	// (0x00065c5c) cl_header_name_pane_t2_ParamLimits

0x7757,	// (0x00065c5c) cl_header_name_pane_t2

0x7781,	// (0x00065c86) cl_header_name_pane_t3_ParamLimits

0x7781,	// (0x00065c86) cl_header_name_pane_t3

0x0002,

0xfb07,	// (0x0006e00c) cl_header_name_pane_t_ParamLimits

0xfb07,	// (0x0006e00c) cl_header_name_pane_t

0xb569,	// (0x00069a6e) navi_pane_mv_g2_ParamLimits

0xd7e5,	// (0x0006bcea) field_vitu2_entry_pane_g1_ParamLimits

0xd7f1,	// (0x0006bcf6) field_vitu2_entry_pane_g2_ParamLimits

0xd7fd,	// (0x0006bd02) field_vitu2_entry_pane_g3_ParamLimits

0xd7fd,	// (0x0006bd02) field_vitu2_entry_pane_g3

0xf904,	// (0x0006de09) field_vitu2_entry_pane_g_ParamLimits

0x6641,	// (0x00064b46) cell_vitu2_itu_pane_g1_ParamLimits

0x6653,	// (0x00064b58) cell_vitu2_itu_pane_g2_ParamLimits

0x6653,	// (0x00064b58) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0006de15) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0006de15) cell_vitu2_itu_pane_g

0x4128,	// (0x0006262d) bg_vkb2_func_pane_cp05_ParamLimits

0x4128,	// (0x0006262d) bg_vkb2_func_pane_cp05

0x4128,	// (0x0006262d) bg_vkb2_func_pane_cp03

0x4128,	// (0x0006262d) bg_vkb2_func_pane_cp04

0x4128,	// (0x0006262d) bg_vkb2_func_pane_cp10_ParamLimits

0x4128,	// (0x0006262d) bg_vkb2_func_pane_cp10

0x735a,	// (0x0006585f) bg_vkb2_func_pane_cp08

0x7340,	// (0x00065845) bg_vkb2_func_pane_cp06

0x734e,	// (0x00065853) bg_vkb2_func_pane_cp07

0xdd19,	// (0x0006c21e) bg_vkb2_func_pane_cp11_ParamLimits

0xdd19,	// (0x0006c21e) bg_vkb2_func_pane_cp11

0xdd2e,	// (0x0006c233) bg_vkb2_func_pane_cp12_ParamLimits

0xdd2e,	// (0x0006c233) bg_vkb2_func_pane_cp12

0x9e2b,	// (0x00068330) bg_vkb2_func_pane_cp09

0xd81d,	// (0x0006bd22) bg_vkb2_func_pane_g1

0xadd7,	// (0x000692dc) bg_vkb2_func_pane_g2

0xd825,	// (0x0006bd2a) bg_vkb2_func_pane_g3

0xd82d,	// (0x0006bd32) bg_vkb2_func_pane_g4

0xda51,	// (0x0006bf56) bg_vkb2_func_pane_g5

0xd845,	// (0x0006bd4a) bg_vkb2_func_pane_g6

0xd84d,	// (0x0006bd52) bg_vkb2_func_pane_g7

0xd83d,	// (0x0006bd42) bg_vkb2_func_pane_g8

0xadb7,	// (0x000692bc) bg_vkb2_func_pane_g9

0x0008,

0xfb0e,	// (0x0006e013) bg_vkb2_func_pane_g

0x768d,	// (0x00065b92) blid2_tripm_pane_g6_ParamLimits

0x768d,	// (0x00065b92) blid2_tripm_pane_g6

0xd723,	// (0x0006bc28) mp4_progress_pane_g1

0x76e5,	// (0x00065bea) blid2_tripm_values_pane_ParamLimits

0x76e5,	// (0x00065bea) blid2_tripm_values_pane

0x77a6,	// (0x00065cab) blid2_tripm_values_pane_t1

0x77b4,	// (0x00065cb9) blid2_tripm_values_pane_t2

0x77c2,	// (0x00065cc7) blid2_tripm_values_pane_t3

0x77d0,	// (0x00065cd5) blid2_tripm_values_pane_t4

0x77de,	// (0x00065ce3) blid2_tripm_values_pane_t5

0x77ec,	// (0x00065cf1) blid2_tripm_values_pane_t6

0x77fa,	// (0x00065cff) blid2_tripm_values_pane_t7

0x7808,	// (0x00065d0d) blid2_tripm_values_pane_t8

0x7816,	// (0x00065d1b) blid2_tripm_values_pane_t9

0x0008,

0xfb21,	// (0x0006e026) blid2_tripm_values_pane_t

0x1df2,	// (0x000602f7) call_video_pane_t1_ParamLimits

0x1e0f,	// (0x00060314) call_video_pane_t2_ParamLimits

0xf253,	// (0x0006d758) call_video_pane_t_ParamLimits

0x38b7,	// (0x00061dbc) msg_header_pane_g1_ParamLimits

0xb761,	// (0x00069c66) msg_header_pane_g2_ParamLimits

0xb761,	// (0x00069c66) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0006d972) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0006d972) msg_header_pane_g

0xa59d,	// (0x00068aa2) main_clock2_pane_ParamLimits

0x54f2,	// (0x000639f7) grid_clock2_toolbar_pane_ParamLimits

0x54f2,	// (0x000639f7) grid_clock2_toolbar_pane

0x54f2,	// (0x000639f7) listscroll_clock2_pane_ParamLimits

0x54f2,	// (0x000639f7) listscroll_clock2_pane

0x55a1,	// (0x00063aa6) main_clock2_pane_t3_ParamLimits

0x55a1,	// (0x00063aa6) main_clock2_pane_t3

0x55b3,	// (0x00063ab8) main_clock2_pane_t4_ParamLimits

0x55b3,	// (0x00063ab8) main_clock2_pane_t4

0xddf7,	// (0x0006c2fc) cell_clock2_toolbar_pane

0xddff,	// (0x0006c304) cell_clock2_toolbar_pane_cp01

0xddff,	// (0x0006c304) cell_clock2_toolbar_pane_cp02

0xde07,	// (0x0006c30c) cell_clock2_toolbar_pane_cp03

0xde0f,	// (0x0006c314) list_clock2_pane

0xb39c,	// (0x000698a1) scroll_pane_cp10

0xde17,	// (0x0006c31c) list_single_clock2_pane_ParamLimits

0xde17,	// (0x0006c31c) list_single_clock2_pane

0xab7a,	// (0x0006907f) list_highlight_pane_cp08

0xde24,	// (0x0006c329) list_single_clock2_pane_t1

0xde32,	// (0x0006c337) list_single_clock2_pane_t2

0x0001,

0xfb34,	// (0x0006e039) list_single_clock2_pane_t

0x9e2b,	// (0x00068330) bg_button_pane_cp10

0xde40,	// (0x0006c345) cell_clock2_toolbar_pane_g1

0x3956,	// (0x00061e5b) aid_main_viewer_pane_g1_ParamLimits

0x3956,	// (0x00061e5b) aid_main_viewer_pane_g1

0x3962,	// (0x00061e67) aid_main_viewer_pane_g2_ParamLimits

0x3962,	// (0x00061e67) aid_main_viewer_pane_g2

0x396e,	// (0x00061e73) aid_main_viewer_pane_g3_ParamLimits

0x396e,	// (0x00061e73) aid_main_viewer_pane_g3

0x397f,	// (0x00061e84) aid_main_viewer_pane_g4_ParamLimits

0x397f,	// (0x00061e84) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0006d983) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0006d983) aid_main_viewer_pane_g

0x4109,	// (0x0006260e) main_calc_pane_ParamLimits

0x4136,	// (0x0006263b) main_dialer2_pane_ParamLimits

0x0d7d,	// (0x0005f282) main_cam6_pane

0x0d7d,	// (0x0005f282) main_vid6_pane

0x54fe,	// (0x00063a03) listscroll_gen_pane_cp06_ParamLimits

0x54fe,	// (0x00063a03) listscroll_gen_pane_cp06

0x55c5,	// (0x00063aca) main_clock2_pane_t5_ParamLimits

0x55c5,	// (0x00063aca) main_clock2_pane_t5

0x5612,	// (0x00063b17) aid_call2_pane_cp10_ParamLimits

0x5624,	// (0x00063b29) aid_call_pane_cp10_ParamLimits

0xb40b,	// (0x00069910) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb40b,	// (0x00069910) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5636,	// (0x00063b3b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5636,	// (0x00063b3b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb40b,	// (0x00069910) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0006dcbe) popup_clock_analogue_window_cp10_g_ParamLimits

0x564c,	// (0x00063b51) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5e66,	// (0x0006436b) cell_dialer2_keypad_pane_g2_ParamLimits

0x5e66,	// (0x0006436b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0006dda8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0006dda8) cell_dialer2_keypad_pane_g

0x5e82,	// (0x00064387) cell_dialer2_keypad_pane_t1

0x698a,	// (0x00064e8f) main_cset_text2_pane_ParamLimits

0x698a,	// (0x00064e8f) main_cset_text2_pane

0xdc78,	// (0x0006c17d) area_vitu2_query_pane_g1_ParamLimits

0x72df,	// (0x000657e4) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0006df5d) area_vitu2_query_pane_g_ParamLimits

0xa742,	// (0x00068c47) area_vitu2_query_pane_t7_ParamLimits

0xa742,	// (0x00068c47) area_vitu2_query_pane_t7

0x7340,	// (0x00065845) bg_button_pane_cp018_ParamLimits

0x734e,	// (0x00065853) bg_button_pane_cp021_ParamLimits

0x735a,	// (0x0006585f) bg_button_pane_cp022_ParamLimits

0x735a,	// (0x0006585f) bg_vkb2_func_pane_cp08_ParamLimits

0x7340,	// (0x00065845) bg_vkb2_func_pane_cp06_ParamLimits

0x734e,	// (0x00065853) bg_vkb2_func_pane_cp07_ParamLimits

0x736b,	// (0x00065870) input_focus_pane_cp09_ParamLimits

0x7824,	// (0x00065d29) cam6_autofocus_pane_ParamLimits

0x7824,	// (0x00065d29) cam6_autofocus_pane

0x7846,	// (0x00065d4b) cam6_image_uncrop_pane_ParamLimits

0x7846,	// (0x00065d4b) cam6_image_uncrop_pane

0x7873,	// (0x00065d78) cam6_indi_pane_ParamLimits

0x7873,	// (0x00065d78) cam6_indi_pane

0x788d,	// (0x00065d92) cam6_mode_pane_ParamLimits

0x788d,	// (0x00065d92) cam6_mode_pane

0x78a1,	// (0x00065da6) cam6_timer_pane_ParamLimits

0x78a1,	// (0x00065da6) cam6_timer_pane

0x78ad,	// (0x00065db2) cam6_zoom_pane_ParamLimits

0x78ad,	// (0x00065db2) cam6_zoom_pane

0x78c9,	// (0x00065dce) cam6_mode_pane_g1_ParamLimits

0x78c9,	// (0x00065dce) cam6_mode_pane_g1

0x78d5,	// (0x00065dda) cam6_mode_pane_g2_ParamLimits

0x78d5,	// (0x00065dda) cam6_mode_pane_g2

0x78e1,	// (0x00065de6) cam6_mode_pane_g3_ParamLimits

0x78e1,	// (0x00065de6) cam6_mode_pane_g3

0x78ed,	// (0x00065df2) cam6_mode_pane_g4_ParamLimits

0x78ed,	// (0x00065df2) cam6_mode_pane_g4

0x0003,

0xfb39,	// (0x0006e03e) cam6_mode_pane_g_ParamLimits

0xfb39,	// (0x0006e03e) cam6_mode_pane_g

0xd770,	// (0x0006bc75) bg_tb_trans_pane_cp08_ParamLimits

0xd770,	// (0x0006bc75) bg_tb_trans_pane_cp08

0xde48,	// (0x0006c34d) cam6_battery_pane_ParamLimits

0xde48,	// (0x0006c34d) cam6_battery_pane

0xde5e,	// (0x0006c363) cam6_indi_pane_g1_ParamLimits

0xde5e,	// (0x0006c363) cam6_indi_pane_g1

0xde70,	// (0x0006c375) cam6_indi_pane_g2_ParamLimits

0xde70,	// (0x0006c375) cam6_indi_pane_g2

0xde82,	// (0x0006c387) cam6_indi_pane_g3_ParamLimits

0xde82,	// (0x0006c387) cam6_indi_pane_g3

0x0002,

0xfb42,	// (0x0006e047) cam6_indi_pane_g_ParamLimits

0xfb42,	// (0x0006e047) cam6_indi_pane_g

0xde94,	// (0x0006c399) cam6_indi_pane_t1_ParamLimits

0xde94,	// (0x0006c399) cam6_indi_pane_t1

0x643a,	// (0x0006493f) cam6_autofocus_pane_g1

0x6432,	// (0x00064937) cam6_autofocus_pane_g2

0x644a,	// (0x0006494f) cam6_autofocus_pane_g3

0x6442,	// (0x00064947) cam6_autofocus_pane_g4

0x0003,

0xfb49,	// (0x0006e04e) cam6_autofocus_pane_g

0xdecf,	// (0x0006c3d4) cam6_timer_pane_g1

0xded7,	// (0x0006c3dc) cam6_timer_pane_t1

0xdee5,	// (0x0006c3ea) cam6_zoom_cont_pane

0xdeed,	// (0x0006c3f2) cam6_zoom_pane_g1

0xdef5,	// (0x0006c3fa) cam6_zoom_pane_g2

0x78f9,	// (0x00065dfe) cam6_zoom_pane_g3

0x0002,

0xfb52,	// (0x0006e057) cam6_zoom_pane_g

0xce39,	// (0x0006b33e) cam6_battery_pane_g1

0xce39,	// (0x0006b33e) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0006dbc6) cam6_battery_pane_g

0xdefd,	// (0x0006c402) cam6_zoom_cont_pane_g1

0xdf06,	// (0x0006c40b) cam6_zoom_cont_pane_g2

0xdf0f,	// (0x0006c414) cam6_zoom_cont_pane_g3

0x0002,

0xfb59,	// (0x0006e05e) cam6_zoom_cont_pane_g

0x7916,	// (0x00065e1b) cam6_mode_pane_cp_ParamLimits

0x7916,	// (0x00065e1b) cam6_mode_pane_cp

0x792a,	// (0x00065e2f) cam6_zoom_pane_cp_ParamLimits

0x792a,	// (0x00065e2f) cam6_zoom_pane_cp

0x7946,	// (0x00065e4b) vid6_image_uncrop_cif_pane_ParamLimits

0x7946,	// (0x00065e4b) vid6_image_uncrop_cif_pane

0x7972,	// (0x00065e77) vid6_image_uncrop_nhd_pane_ParamLimits

0x7972,	// (0x00065e77) vid6_image_uncrop_nhd_pane

0x7991,	// (0x00065e96) vid6_image_uncrop_vga_pane_ParamLimits

0x7991,	// (0x00065e96) vid6_image_uncrop_vga_pane

0x79b0,	// (0x00065eb5) vid6_image_uncrop_wvga_pane_ParamLimits

0x79b0,	// (0x00065eb5) vid6_image_uncrop_wvga_pane

0x79cf,	// (0x00065ed4) vid6_indi_pane_ParamLimits

0x79cf,	// (0x00065ed4) vid6_indi_pane

0xd770,	// (0x0006bc75) bg_tb_trans_pane_cp09_ParamLimits

0xd770,	// (0x0006bc75) bg_tb_trans_pane_cp09

0xdf27,	// (0x0006c42c) cam6_battery_pane_cp_ParamLimits

0xdf27,	// (0x0006c42c) cam6_battery_pane_cp

0xdf33,	// (0x0006c438) vid6_indi_pane_g1_ParamLimits

0xdf33,	// (0x0006c438) vid6_indi_pane_g1

0xdf45,	// (0x0006c44a) vid6_indi_pane_g2_ParamLimits

0xdf45,	// (0x0006c44a) vid6_indi_pane_g2

0xdf57,	// (0x0006c45c) vid6_indi_pane_g3_ParamLimits

0xdf57,	// (0x0006c45c) vid6_indi_pane_g3

0xdf6e,	// (0x0006c473) vid6_indi_pane_g4_ParamLimits

0xdf6e,	// (0x0006c473) vid6_indi_pane_g4

0xdf85,	// (0x0006c48a) vid6_indi_pane_g5_ParamLimits

0xdf85,	// (0x0006c48a) vid6_indi_pane_g5

0x0004,

0xfb60,	// (0x0006e065) vid6_indi_pane_g_ParamLimits

0xfb60,	// (0x0006e065) vid6_indi_pane_g

0xdf9f,	// (0x0006c4a4) vid6_indi_pane_t1_ParamLimits

0xdf9f,	// (0x0006c4a4) vid6_indi_pane_t1

0xdfb5,	// (0x0006c4ba) vid6_indi_pane_t2_ParamLimits

0xdfb5,	// (0x0006c4ba) vid6_indi_pane_t2

0xdfdd,	// (0x0006c4e2) vid6_indi_pane_t3_ParamLimits

0xdfdd,	// (0x0006c4e2) vid6_indi_pane_t3

0xe005,	// (0x0006c50a) vid6_indi_pane_t4_ParamLimits

0xe005,	// (0x0006c50a) vid6_indi_pane_t4

0x0003,

0xfb6b,	// (0x0006e070) vid6_indi_pane_t_ParamLimits

0xfb6b,	// (0x0006e070) vid6_indi_pane_t

0xe029,	// (0x0006c52e) wait_bar_pane_cp08

0x79f4,	// (0x00065ef9) main_cset_text2_pane_t1_ParamLimits

0x79f4,	// (0x00065ef9) main_cset_text2_pane_t1

0x7901,	// (0x00065e06) listscroll_gen_pane_cp06_t1_ParamLimits

0x7901,	// (0x00065e06) listscroll_gen_pane_cp06_t1

0x0d7d,	// (0x0005f282) main_cam6_set_pane

0x62ca,	// (0x000647cf) bg_tb_trans_pane_cp06_ParamLimits

0x62e0,	// (0x000647e5) cam4_indicators_pane_g1_ParamLimits

0x62f1,	// (0x000647f6) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0006dde5) cam4_indicators_pane_g_ParamLimits

0x6309,	// (0x0006480e) cam4_indicators_pane_t1_ParamLimits

0x4128,	// (0x0006262d) bg_tb_trans_pane_cp07_ParamLimits

0x63c0,	// (0x000648c5) vid4_indicators_pane_g1_ParamLimits

0x63d6,	// (0x000648db) vid4_indicators_pane_g2_ParamLimits

0x63ea,	// (0x000648ef) vid4_indicators_pane_g3_ParamLimits

0x63fd,	// (0x00064902) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0006ddf7) vid4_indicators_pane_g_ParamLimits

0x641b,	// (0x00064920) vid4_indicators_pane_t1_ParamLimits

0x7494,	// (0x00065999) vid4_progress_pane_g1_ParamLimits

0x74a4,	// (0x000659a9) vid4_progress_pane_g2_ParamLimits

0x74b4,	// (0x000659b9) vid4_progress_pane_g3_ParamLimits

0x62f1,	// (0x000647f6) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0006dfa8) vid4_progress_pane_g_ParamLimits

0x74c6,	// (0x000659cb) vid4_progress_pane_t1_ParamLimits

0x74dc,	// (0x000659e1) vid4_progress_pane_t2_ParamLimits

0x74f1,	// (0x000659f6) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0006dfb3) vid4_progress_pane_t_ParamLimits

0x7506,	// (0x00065a0b) wait_bar_pane_cp07_ParamLimits

0x7a1b,	// (0x00065f20) main_cam6_set_pane_g2_ParamLimits

0x7a1b,	// (0x00065f20) main_cam6_set_pane_g2

0x7a27,	// (0x00065f2c) main_cset6_listscroll_pane_ParamLimits

0x7a27,	// (0x00065f2c) main_cset6_listscroll_pane

0x7a54,	// (0x00065f59) main_cset6_slider_pane_ParamLimits

0x7a54,	// (0x00065f59) main_cset6_slider_pane

0x7a60,	// (0x00065f65) main_cset6_text2_pane_ParamLimits

0x7a60,	// (0x00065f65) main_cset6_text2_pane

0xe038,	// (0x0006c53d) main_cset6_text_pane

0xe040,	// (0x0006c545) main_cset_list_pane_copy1_ParamLimits

0xe040,	// (0x0006c545) main_cset_list_pane_copy1

0xe050,	// (0x0006c555) scroll_pane_cp028_copy1

0x7a73,	// (0x00065f78) cset_list_set_pane_copy1

0x7a83,	// (0x00065f88) aid_position_infowindow_above_copy1

0x7a8b,	// (0x00065f90) aid_position_infowindow_below_copy1

0x7a93,	// (0x00065f98) cset_list_set_pane_g1_copy1

0x7a9b,	// (0x00065fa0) cset_list_set_pane_g3_copy1_ParamLimits

0x7a9b,	// (0x00065fa0) cset_list_set_pane_g3_copy1

0x7aaa,	// (0x00065faf) cset_list_set_pane_t1_copy1_ParamLimits

0x7aaa,	// (0x00065faf) cset_list_set_pane_t1_copy1

0xb074,	// (0x00069579) list_highlight_pane_cp021_copy1_ParamLimits

0xb074,	// (0x00069579) list_highlight_pane_cp021_copy1

0xe059,	// (0x0006c55e) cset6_slider_pane_ParamLimits

0xe059,	// (0x0006c55e) cset6_slider_pane

0xe085,	// (0x0006c58a) main_cset6_slider_pane_g1_ParamLimits

0xe085,	// (0x0006c58a) main_cset6_slider_pane_g1

0x7abf,	// (0x00065fc4) main_cset6_slider_pane_g2_ParamLimits

0x7abf,	// (0x00065fc4) main_cset6_slider_pane_g2

0xe0ad,	// (0x0006c5b2) main_cset6_slider_pane_g3_ParamLimits

0xe0ad,	// (0x0006c5b2) main_cset6_slider_pane_g3

0x7ae7,	// (0x00065fec) main_cset6_slider_pane_g4_ParamLimits

0x7ae7,	// (0x00065fec) main_cset6_slider_pane_g4

0x7af3,	// (0x00065ff8) main_cset6_slider_pane_g5_ParamLimits

0x7af3,	// (0x00065ff8) main_cset6_slider_pane_g5

0xd95a,	// (0x0006be5f) main_cset6_slider_pane_g7_ParamLimits

0xd95a,	// (0x0006be5f) main_cset6_slider_pane_g7

0xd966,	// (0x0006be6b) main_cset6_slider_pane_g8_ParamLimits

0xd966,	// (0x0006be6b) main_cset6_slider_pane_g8

0x7aff,	// (0x00066004) main_cset6_slider_pane_g9_ParamLimits

0x7aff,	// (0x00066004) main_cset6_slider_pane_g9

0x7b0b,	// (0x00066010) main_cset6_slider_pane_g10_ParamLimits

0x7b0b,	// (0x00066010) main_cset6_slider_pane_g10

0x7b17,	// (0x0006601c) main_cset6_slider_pane_g11_ParamLimits

0x7b17,	// (0x0006601c) main_cset6_slider_pane_g11

0x7b23,	// (0x00066028) main_cset6_slider_pane_g12_ParamLimits

0x7b23,	// (0x00066028) main_cset6_slider_pane_g12

0x7b2f,	// (0x00066034) main_cset6_slider_pane_g13_ParamLimits

0x7b2f,	// (0x00066034) main_cset6_slider_pane_g13

0x7b3b,	// (0x00066040) main_cset6_slider_pane_g14_ParamLimits

0x7b3b,	// (0x00066040) main_cset6_slider_pane_g14

0x7b47,	// (0x0006604c) main_cset6_slider_pane_g15_ParamLimits

0x7b47,	// (0x0006604c) main_cset6_slider_pane_g15

0x7b5f,	// (0x00066064) main_cset6_slider_pane_g16_ParamLimits

0x7b5f,	// (0x00066064) main_cset6_slider_pane_g16

0x7b6b,	// (0x00066070) main_cset6_slider_pane_g17_ParamLimits

0x7b6b,	// (0x00066070) main_cset6_slider_pane_g17

0x0011,

0xfb74,	// (0x0006e079) main_cset6_slider_pane_g_ParamLimits

0xfb74,	// (0x0006e079) main_cset6_slider_pane_g

0xe0b9,	// (0x0006c5be) main_cset6_slider_pane_t1_ParamLimits

0xe0b9,	// (0x0006c5be) main_cset6_slider_pane_t1

0x7b8f,	// (0x00066094) main_cset6_slider_pane_t2_ParamLimits

0x7b8f,	// (0x00066094) main_cset6_slider_pane_t2

0x7bba,	// (0x000660bf) main_cset6_slider_pane_t3_ParamLimits

0x7bba,	// (0x000660bf) main_cset6_slider_pane_t3

0x7be5,	// (0x000660ea) main_cset6_slider_pane_t4_ParamLimits

0x7be5,	// (0x000660ea) main_cset6_slider_pane_t4

0x7c10,	// (0x00066115) main_cset6_slider_pane_t5_ParamLimits

0x7c10,	// (0x00066115) main_cset6_slider_pane_t5

0xe0fa,	// (0x0006c5ff) main_cset6_slider_pane_t7_ParamLimits

0xe0fa,	// (0x0006c5ff) main_cset6_slider_pane_t7

0x7c3b,	// (0x00066140) main_cset6_slider_pane_t8_ParamLimits

0x7c3b,	// (0x00066140) main_cset6_slider_pane_t8

0x7c5f,	// (0x00066164) main_cset6_slider_pane_t9_ParamLimits

0x7c5f,	// (0x00066164) main_cset6_slider_pane_t9

0x7c83,	// (0x00066188) main_cset6_slider_pane_t10_ParamLimits

0x7c83,	// (0x00066188) main_cset6_slider_pane_t10

0x7ca7,	// (0x000661ac) main_cset6_slider_pane_t11_ParamLimits

0x7ca7,	// (0x000661ac) main_cset6_slider_pane_t11

0xe130,	// (0x0006c635) main_cset6_slider_pane_t14_ParamLimits

0xe130,	// (0x0006c635) main_cset6_slider_pane_t14

0xe169,	// (0x0006c66e) main_cset6_slider_pane_t15_ParamLimits

0xe169,	// (0x0006c66e) main_cset6_slider_pane_t15

0x000b,

0xfb99,	// (0x0006e09e) main_cset6_slider_pane_t_ParamLimits

0xfb99,	// (0x0006e09e) main_cset6_slider_pane_t

0xe1a2,	// (0x0006c6a7) cset_slider_pane_g1_copy1

0xe1ab,	// (0x0006c6b0) cset_slider_pane_g2_copy1

0xe1b4,	// (0x0006c6b9) cset_slider_pane_g3_copy1

0x9e2b,	// (0x00068330) bg_popup_sub_pane_cp011_copy1

0xe1bd,	// (0x0006c6c2) main_cset_text_pane_g1_copy1

0xdaa0,	// (0x0006bfa5) main_cset_text_pane_t1_copy1

0xdaae,	// (0x0006bfb3) main_cset_text_pane_t2_copy1

0xdabc,	// (0x0006bfc1) main_cset_text_pane_t3_copy1

0xdaca,	// (0x0006bfcf) main_cset_text_pane_t4_copy1

0xdad8,	// (0x0006bfdd) main_cset_text_pane_t5_copy1

0xe1c5,	// (0x0006c6ca) main_cset_text_pane_t6_copy1

0xe1d3,	// (0x0006c6d8) main_cset_text_pane_t7_copy1

0x7da1,	// (0x000662a6) main_cset_text2_pane_t1_copy1

0x4128,	// (0x0006262d) main_ncimui_pane

0x418f,	// (0x00062694) popup_query_ncimui_window_ParamLimits

0x418f,	// (0x00062694) popup_query_ncimui_window

0xa6a1,	// (0x00068ba6) field_cale_ev2_pane_g4_ParamLimits

0xa6a1,	// (0x00068ba6) field_cale_ev2_pane_g4

0x5b3e,	// (0x00064043) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5b3e,	// (0x00064043) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0006dd7f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0006dd7f) cell_video_dialer_keypad_pane_g

0x5b56,	// (0x0006405b) cell_video_dialer_keypad_pane_t1

0x9e2b,	// (0x00068330) bg_popup_window_pane_cp012

0xb288,	// (0x0006978d) heading_pane_cp06

0xe1ff,	// (0x0006c704) ncim_query_content_pane

0x9e2b,	// (0x00068330) bg_popup_heading_pane_cp01

0xe207,	// (0x0006c70c) ncim_heading_pane_t1

0xe215,	// (0x0006c71a) ncim_indicator_popup_pane

0xe227,	// (0x0006c72c) ncim_query_button_pane

0xe23d,	// (0x0006c742) ncim_query_content_pane_t1

0xe24f,	// (0x0006c754) ncim_query_content_pane_t2

0x0005,

0xfbdd,	// (0x0006e0e2) ncim_query_content_pane_t

0xe289,	// (0x0006c78e) ncim_query_list_pane

0xe29b,	// (0x0006c7a0) ncim_query_popup_pane

0xe215,	// (0x0006c71a) ncim_indicator_popup_pane_ParamLimits

0x7efd,	// (0x00066402) ncim_query_content_pane_g1_ParamLimits

0x7efd,	// (0x00066402) ncim_query_content_pane_g1

0xe23d,	// (0x0006c742) ncim_query_content_pane_t1_ParamLimits

0xe24f,	// (0x0006c754) ncim_query_content_pane_t2_ParamLimits

0x7f09,	// (0x0006640e) ncim_query_content_pane_t3_ParamLimits

0x7f09,	// (0x0006640e) ncim_query_content_pane_t3

0x7f26,	// (0x0006642b) ncim_query_content_pane_t4_ParamLimits

0x7f26,	// (0x0006642b) ncim_query_content_pane_t4

0x7f43,	// (0x00066448) ncim_query_content_pane_t5_ParamLimits

0x7f43,	// (0x00066448) ncim_query_content_pane_t5

0xe261,	// (0x0006c766) ncim_query_content_pane_t6_ParamLimits

0xe261,	// (0x0006c766) ncim_query_content_pane_t6

0xfbdd,	// (0x0006e0e2) ncim_query_content_pane_t_ParamLimits

0xe289,	// (0x0006c78e) ncim_query_list_pane_ParamLimits

0xe29b,	// (0x0006c7a0) ncim_query_popup_pane_ParamLimits

0xe2af,	// (0x0006c7b4) wait_bar_pane_cp04

0x9e2b,	// (0x00068330) input_focus_pane_cp011

0xe2b7,	// (0x0006c7bc) ncim_query_popup_pane_t1

0xe2c5,	// (0x0006c7ca) ncim_list_query_list_pane_ParamLimits

0xe2c5,	// (0x0006c7ca) ncim_list_query_list_pane

0x9e2b,	// (0x00068330) bg_button_pane_cp027

0xe2d8,	// (0x0006c7dd) ncim_query_button_pane_g1

0x9e2b,	// (0x00068330) list_highlight_pane_cp012

0xe2e2,	// (0x0006c7e7) ncim_list_query_list_pane_g1

0xe2ea,	// (0x0006c7ef) ncim_list_query_list_pane_t1

0x62fd,	// (0x00064802) cam4_indicators_pane_g3_ParamLimits

0x62fd,	// (0x00064802) cam4_indicators_pane_g3

0x6409,	// (0x0006490e) vid4_indicators_pane_g5_ParamLimits

0x6409,	// (0x0006490e) vid4_indicators_pane_g5

0x62fd,	// (0x00064802) vid4_progress_pane_g5_ParamLimits

0x62fd,	// (0x00064802) vid4_progress_pane_g5

0x7dd3,	// (0x000662d8) main_ncimui_pane_g1

0x7e3f,	// (0x00066344) ncimui_group_query_pane_ParamLimits

0x7e3f,	// (0x00066344) ncimui_group_query_pane

0x7e99,	// (0x0006639e) ncimui_list_pane_ParamLimits

0x7e99,	// (0x0006639e) ncimui_list_pane

0x7ec0,	// (0x000663c5) ncimui_text_pane_ParamLimits

0x7ec0,	// (0x000663c5) ncimui_text_pane

0x7f60,	// (0x00066465) ncimui_text_pane_t1_ParamLimits

0x7f60,	// (0x00066465) ncimui_text_pane_t1

0xe2f8,	// (0x0006c7fd) ncimui_list_single_graphic_pane_ParamLimits

0xe2f8,	// (0x0006c7fd) ncimui_list_single_graphic_pane

0x7f7f,	// (0x00066484) ncimui_query_pane_ParamLimits

0x7f7f,	// (0x00066484) ncimui_query_pane

0x9e2b,	// (0x00068330) list_highlight_pane_cp013

0xe308,	// (0x0006c80d) ncim_list_query_list_pane_t1_copy1

0xe2e2,	// (0x0006c7e7) ncim_list_single_graphic_pane_g1

0x7f92,	// (0x00066497) ncim_query_button_pane_cp01

0x7f9e,	// (0x000664a3) ncim_query_entry_pane_ParamLimits

0x7f9e,	// (0x000664a3) ncim_query_entry_pane

0x7fb1,	// (0x000664b6) ncimui_query_pane_g1

0x7fbd,	// (0x000664c2) ncimui_query_pane_t1_ParamLimits

0x7fbd,	// (0x000664c2) ncimui_query_pane_t1

0xb074,	// (0x00069579) input_focus_pane_cp012

0xe316,	// (0x0006c81b) ncim_query_entry_pane_t1

0xa59d,	// (0x00068aa2) main_im_pane_ParamLimits

0x4128,	// (0x0006262d) main_mobtv_pane_ParamLimits

0x4128,	// (0x0006262d) main_mobtv_pane

0x7b77,	// (0x0006607c) main_cset6_slider_pane_g18_ParamLimits

0x7b77,	// (0x0006607c) main_cset6_slider_pane_g18

0x7b83,	// (0x00066088) main_cset6_slider_pane_g19_ParamLimits

0x7b83,	// (0x00066088) main_cset6_slider_pane_g19

0xd7fd,	// (0x0006bd02) bg_main_mobtv_pane_ParamLimits

0xd7fd,	// (0x0006bd02) bg_main_mobtv_pane

0x7fd6,	// (0x000664db) main_mobtv_info_pane

0x7fe1,	// (0x000664e6) main_mobtv_loading_pane_ParamLimits

0x7fe1,	// (0x000664e6) main_mobtv_loading_pane

0xe328,	// (0x0006c82d) main_mobtv_pg_channel_list_pane

0xe332,	// (0x0006c837) main_mobtv_pg_hdr_pane

0x7fee,	// (0x000664f3) main_mobtv_programe_curr_pane_ParamLimits

0x7fee,	// (0x000664f3) main_mobtv_programe_curr_pane

0x7ffb,	// (0x00066500) main_mobtv_programe_next_pane_ParamLimits

0x7ffb,	// (0x00066500) main_mobtv_programe_next_pane

0xe33b,	// (0x0006c840) popup_mobtv_noti_window

0xce39,	// (0x0006b33e) main_tv_pg_hdr_pane_g1

0xe345,	// (0x0006c84a) main_tv_pg_hdr_pane_g2

0xe34d,	// (0x0006c852) main_tv_pg_hdr_pane_g3

0xe355,	// (0x0006c85a) main_tv_pg_hdr_pane_g4

0xe35d,	// (0x0006c862) main_tv_pg_hdr_pane_g5

0xe367,	// (0x0006c86c) main_tv_pg_hdr_pane_g6

0xe371,	// (0x0006c876) main_tv_pg_hdr_pane_g7

0xe37b,	// (0x0006c880) main_tv_pg_hdr_pane_g8

0xe385,	// (0x0006c88a) main_tv_pg_hdr_pane_g9

0xe38f,	// (0x0006c894) main_tv_pg_hdr_pane_g10

0xe399,	// (0x0006c89e) main_tv_pg_hdr_pane_g11

0x000a,

0xfbea,	// (0x0006e0ef) main_tv_pg_hdr_pane_g

0xe3a3,	// (0x0006c8a8) main_tv_pg_hdr_pane_t1

0xe3b1,	// (0x0006c8b6) main_tv_pg_hdr_pane_t2

0xe3bf,	// (0x0006c8c4) main_tv_pg_hdr_pane_t3

0xe3cf,	// (0x0006c8d4) main_tv_pg_hdr_pane_t4

0xe3df,	// (0x0006c8e4) main_tv_pg_hdr_pane_t5

0x0004,

0xfc01,	// (0x0006e106) main_tv_pg_hdr_pane_t

0xe3ef,	// (0x0006c8f4) single_mobtv_pg_channel_pane_ParamLimits

0xe3ef,	// (0x0006c8f4) single_mobtv_pg_channel_pane

0xe401,	// (0x0006c906) single_mobtv_pg_channel_table_pane

0xe40a,	// (0x0006c90f) single_mobtv_pg_channel_thumb_pane

0xe413,	// (0x0006c918) single_tv_pg_channel_pane_g1

0xe41c,	// (0x0006c921) single_tv_pg_channel_pane_g2

0x0001,

0xfc0c,	// (0x0006e111) single_tv_pg_channel_pane_g

0xd060,	// (0x0006b565) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd060,	// (0x0006b565) bg_single_mobtv_pg_channel_thumb_pane

0xe425,	// (0x0006c92a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe425,	// (0x0006c92a) single_mobtv_pg_channel_thumb_pane_g1

0xe433,	// (0x0006c938) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe433,	// (0x0006c938) single_mobtv_pg_channel_thumb_pane_g2

0xe43f,	// (0x0006c944) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe43f,	// (0x0006c944) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc11,	// (0x0006e116) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc11,	// (0x0006e116) single_mobtv_pg_channel_thumb_pane_g

0xe44b,	// (0x0006c950) single_mobtv_pg_channel_thumb_pane_t1

0xe459,	// (0x0006c95e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc18,	// (0x0006e11d) single_mobtv_pg_channel_thumb_pane_t

0xce39,	// (0x0006b33e) bg_single_mobtv_pg_channel_table_pane_g1

0xce39,	// (0x0006b33e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0006dbc6) bg_single_mobtv_pg_channel_table_pane_g

0xe467,	// (0x0006c96c) single_mobtv_pg_channel_table_pane_t1

0xe475,	// (0x0006c97a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc1d,	// (0x0006e122) single_mobtv_pg_channel_table_pane_t

0x8010,	// (0x00066515) main_mobtv_info_pane_g1_ParamLimits

0x8010,	// (0x00066515) main_mobtv_info_pane_g1

0x802c,	// (0x00066531) main_mobtv_info_pane_t1_ParamLimits

0x802c,	// (0x00066531) main_mobtv_info_pane_t1

0x80a4,	// (0x000665a9) main_mobtv_info_pane_t2_ParamLimits

0x80a4,	// (0x000665a9) main_mobtv_info_pane_t2

0x0002,

0xfc27,	// (0x0006e12c) main_mobtv_info_pane_t_ParamLimits

0xfc27,	// (0x0006e12c) main_mobtv_info_pane_t

0x8135,	// (0x0006663a) wait_bar_pane_cp05

0x8147,	// (0x0006664c) main_mobtv_loading_pane_g1_ParamLimits

0x8147,	// (0x0006664c) main_mobtv_loading_pane_g1

0x8153,	// (0x00066658) main_mobtv_loading_pane_g2_ParamLimits

0x8153,	// (0x00066658) main_mobtv_loading_pane_g2

0x815f,	// (0x00066664) main_mobtv_loading_pane_g3_ParamLimits

0x815f,	// (0x00066664) main_mobtv_loading_pane_g3

0x0002,

0xfc2e,	// (0x0006e133) main_mobtv_loading_pane_g_ParamLimits

0xfc2e,	// (0x0006e133) main_mobtv_loading_pane_g

0xe483,	// (0x0006c988) main_mobtv_loading_pane_t1_ParamLimits

0xe483,	// (0x0006c988) main_mobtv_loading_pane_t1

0xe49b,	// (0x0006c9a0) main_mobtv_loading_pane_t2_ParamLimits

0xe49b,	// (0x0006c9a0) main_mobtv_loading_pane_t2

0x0001,

0xfc35,	// (0x0006e13a) main_mobtv_loading_pane_t_ParamLimits

0xfc35,	// (0x0006e13a) main_mobtv_loading_pane_t

0x816d,	// (0x00066672) wait_bar_pane_cp06_ParamLimits

0x816d,	// (0x00066672) wait_bar_pane_cp06

0xe4bf,	// (0x0006c9c4) main_mobtv_programe_curr_pane_t1

0xe4cd,	// (0x0006c9d2) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc3a,	// (0x0006e13f) main_mobtv_programe_curr_pane_t

0xe4db,	// (0x0006c9e0) main_mobtv_programe_next_pane_t1

0xe4e9,	// (0x0006c9ee) main_mobtv_programe_next_pane_t2

0xe4f7,	// (0x0006c9fc) main_mobtv_programe_next_pane_t3

0x0002,

0xfc3f,	// (0x0006e144) main_mobtv_programe_next_pane_t

0x9e2b,	// (0x00068330) bg_popup_mobtv_noti_window_pane

0xe505,	// (0x0006ca0a) popup_mobtv_noti_window_g1

0xe50d,	// (0x0006ca12) popup_mobtv_noti_window_t1

0xe51b,	// (0x0006ca20) popup_mobtv_noti_window_t2

0x0001,

0xfc46,	// (0x0006e14b) popup_mobtv_noti_window_t

0xce39,	// (0x0006b33e) bg_popup_mobtv_noti_window_pane_g1

0x0d7d,	// (0x0005f282) sc_clock_pane

0x0d7d,	// (0x0005f282) main_fs_bigclock_pane

0x76d3,	// (0x00065bd8) blid2_tripm_pane_t4_ParamLimits

0x76d3,	// (0x00065bd8) blid2_tripm_pane_t4

0x8179,	// (0x0006667e) sc_clock_pane_g1_ParamLimits

0x8179,	// (0x0006667e) sc_clock_pane_g1

0x8187,	// (0x0006668c) sc_clock_pane_t1_ParamLimits

0x8187,	// (0x0006668c) sc_clock_pane_t1

0x819c,	// (0x000666a1) sc_clock_pane_t2_ParamLimits

0x819c,	// (0x000666a1) sc_clock_pane_t2

0x81ae,	// (0x000666b3) sc_clock_pane_t3_ParamLimits

0x81ae,	// (0x000666b3) sc_clock_pane_t3

0x0004,

0xfc4b,	// (0x0006e150) sc_clock_pane_t_ParamLimits

0xfc4b,	// (0x0006e150) sc_clock_pane_t

0x9295,	// (0x0006779a) main_fs_bigclock_indicator_pane_ParamLimits

0x9295,	// (0x0006779a) main_fs_bigclock_indicator_pane

0x823d,	// (0x00066742) main_fs_bigclock_pane_g1_ParamLimits

0x823d,	// (0x00066742) main_fs_bigclock_pane_g1

0x92a1,	// (0x000677a6) main_fs_bigclock_pane_t1_ParamLimits

0x92a1,	// (0x000677a6) main_fs_bigclock_pane_t1

0x92b3,	// (0x000677b8) main_fs_bigclock_pane_t2_ParamLimits

0x92b3,	// (0x000677b8) main_fs_bigclock_pane_t2

0x92c7,	// (0x000677cc) main_fs_bigclock_pane_t3_ParamLimits

0x92c7,	// (0x000677cc) main_fs_bigclock_pane_t3

0x0002,

0xfe59,	// (0x0006e35e) main_fs_bigclock_pane_t_ParamLimits

0xfe59,	// (0x0006e35e) main_fs_bigclock_pane_t

0xec72,	// (0x0006d177) main_fs_bigclock_indicator_pane_g1

0xe22f,	// (0x0006c734) ncim_query_content_pane_g2_ParamLimits

0xe22f,	// (0x0006c734) ncim_query_content_pane_g2

0x0001,

0xfbd8,	// (0x0006e0dd) ncim_query_content_pane_g_ParamLimits

0xfbd8,	// (0x0006e0dd) ncim_query_content_pane_g

0x81c0,	// (0x000666c5) sc_clock_pane_t4_ParamLimits

0x81c0,	// (0x000666c5) sc_clock_pane_t4

0x4128,	// (0x0006262d) main_radioblah_pane

0x6193,	// (0x00064698) cell_call4_button_pane_t1_copy1_ParamLimits

0x6193,	// (0x00064698) cell_call4_button_pane_t1_copy1

0x7def,	// (0x000662f4) main_ncimui_pane_t1_ParamLimits

0x7def,	// (0x000662f4) main_ncimui_pane_t1

0x7e09,	// (0x0006630e) main_ncimui_pane_t2_ParamLimits

0x7e09,	// (0x0006630e) main_ncimui_pane_t2

0x0002,

0xfbd1,	// (0x0006e0d6) main_ncimui_pane_t_ParamLimits

0xfbd1,	// (0x0006e0d6) main_ncimui_pane_t

0xe529,	// (0x0006ca2e) main_radioblah_anim_pane_ParamLimits

0xe529,	// (0x0006ca2e) main_radioblah_anim_pane

0xe53a,	// (0x0006ca3f) main_radioblah_info_pane_ParamLimits

0xe53a,	// (0x0006ca3f) main_radioblah_info_pane

0xe54e,	// (0x0006ca53) main_radioblah_pane_t1_ParamLimits

0xe54e,	// (0x0006ca53) main_radioblah_pane_t1

0xe56a,	// (0x0006ca6f) main_radioblah_pane_t2_ParamLimits

0xe56a,	// (0x0006ca6f) main_radioblah_pane_t2

0x0003,

0xfc6c,	// (0x0006e171) main_radioblah_pane_t_ParamLimits

0xfc6c,	// (0x0006e171) main_radioblah_pane_t

0x83dc,	// (0x000668e1) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83dc,	// (0x000668e1) main_radioblah_rocker_ctrl_pane

0xe5b2,	// (0x0006cab7) main_radioblah_info_pane_t1_ParamLimits

0xe5b2,	// (0x0006cab7) main_radioblah_info_pane_t1

0x8425,	// (0x0006692a) main_radioblah_info_pane_t2_ParamLimits

0x8425,	// (0x0006692a) main_radioblah_info_pane_t2

0x0003,

0xfc75,	// (0x0006e17a) main_radioblah_info_pane_t_ParamLimits

0xfc75,	// (0x0006e17a) main_radioblah_info_pane_t

0xce39,	// (0x0006b33e) main_radioblah_rocker_ctrl_pane_g1

0x84d5,	// (0x000669da) main_radioblah_rocker_ctrl_pane_g2

0x84dd,	// (0x000669e2) main_radioblah_rocker_ctrl_pane_g3

0x84e5,	// (0x000669ea) main_radioblah_rocker_ctrl_pane_g4

0x84ed,	// (0x000669f2) main_radioblah_rocker_ctrl_pane_g5

0x84f5,	// (0x000669fa) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc7e,	// (0x0006e183) main_radioblah_rocker_ctrl_pane_g

0x7da1,	// (0x000662a6) main_cset_text2_pane_t1_copy1_ParamLimits

0x621c,	// (0x00064721) cam4_image_uncrop_qvga_pane

0x636f,	// (0x00064874) vid4_image_uncrop_qcif_pane

0x7865,	// (0x00065d6a) cam6_image_uncrop_qvga_pane_ParamLimits

0x7865,	// (0x00065d6a) cam6_image_uncrop_qvga_pane

0xdf17,	// (0x0006c41c) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf17,	// (0x0006c41c) vid6_image_uncrop_qcif_pane

0x9e2b,	// (0x00068330) bg_popup_preview_window_pane_cp03

0xe1e1,	// (0x0006c6e6) list_cset_text2_pane

0xe1e9,	// (0x0006c6ee) main_cset6_text2_pane_g1

0xe1f1,	// (0x0006c6f6) main_cset6_text2_pane_t1

0x84fd,	// (0x00066a02) list_cset_text2_pane_t1_ParamLimits

0x84fd,	// (0x00066a02) list_cset_text2_pane_t1

0x4128,	// (0x0006262d) main_radioblah_pane_ParamLimits

0x8121,	// (0x00066626) main_mobtv_info_pane_t3_ParamLimits

0x8121,	// (0x00066626) main_mobtv_info_pane_t3

0x83ca,	// (0x000668cf) main_radioblah_pane_g1

0x83f5,	// (0x000668fa) main_radioblah_info_pane_g1

0x847a,	// (0x0006697f) main_radioblah_info_pane_t3_ParamLimits

0x847a,	// (0x0006697f) main_radioblah_info_pane_t3

0x2dba,	// (0x000612bf) highlight_cell_cale_month_pane_ParamLimits

0x2dba,	// (0x000612bf) highlight_cell_cale_month_pane

0x0d7d,	// (0x0005f282) main_phob_fisheye_pane

0xd13c,	// (0x0006b641) scroll_pane_cp0031_ParamLimits

0xd13c,	// (0x0006b641) scroll_pane_cp0031

0xe029,	// (0x0006c52e) wait_bar_pane_cp08_ParamLimits

0x7a73,	// (0x00065f78) cset_list_set_pane_copy1_ParamLimits

0xe5ec,	// (0x0006caf1) highlight_cell_cale_month_pane_g1

0x8514,	// (0x00066a19) highlight_cell_cale_month_pane_t1

0xdccc,	// (0x0006c1d1) list_gen_pane_cp01

0xd945,	// (0x0006be4a) scroll_pane_01

0x8522,	// (0x00066a27) list_single_double_fisheye_pane

0x852b,	// (0x00066a30) list_double_fisheye_pane_g1_ParamLimits

0x852b,	// (0x00066a30) list_double_fisheye_pane_g1

0x8537,	// (0x00066a3c) list_double_fisheye_pane_g2_ParamLimits

0x8537,	// (0x00066a3c) list_double_fisheye_pane_g2

0x854b,	// (0x00066a50) list_double_fisheye_pane_g3_ParamLimits

0x854b,	// (0x00066a50) list_double_fisheye_pane_g3

0x0004,

0xfc8b,	// (0x0006e190) list_double_fisheye_pane_g_ParamLimits

0xfc8b,	// (0x0006e190) list_double_fisheye_pane_g

0x8574,	// (0x00066a79) list_double_fisheye_pane_t1_ParamLimits

0x8574,	// (0x00066a79) list_double_fisheye_pane_t1

0x858f,	// (0x00066a94) list_double_fisheye_pane_t2_ParamLimits

0x858f,	// (0x00066a94) list_double_fisheye_pane_t2

0x0001,

0xfc96,	// (0x0006e19b) list_double_fisheye_pane_t_ParamLimits

0xfc96,	// (0x0006e19b) list_double_fisheye_pane_t

0x0d7d,	// (0x0005f282) main_call5_pane

0x81e6,	// (0x000666eb) sc_swipe_pane_ParamLimits

0x81e6,	// (0x000666eb) sc_swipe_pane

0x85bd,	// (0x00066ac2) call5_image_pane_ParamLimits

0x85bd,	// (0x00066ac2) call5_image_pane

0x85cf,	// (0x00066ad4) call5_swipe_1_pane_ParamLimits

0x85cf,	// (0x00066ad4) call5_swipe_1_pane

0x85db,	// (0x00066ae0) call5_swipe_2_pane_ParamLimits

0x85db,	// (0x00066ae0) call5_swipe_2_pane

0x85f5,	// (0x00066afa) popup_call5_audio_first_window_ParamLimits

0x85f5,	// (0x00066afa) popup_call5_audio_first_window

0xd060,	// (0x0006b565) call5_swipe_1_pane_g1_ParamLimits

0xd060,	// (0x0006b565) call5_swipe_1_pane_g1

0xe5f4,	// (0x0006caf9) call5_swipe_1_pane_g2_ParamLimits

0xe5f4,	// (0x0006caf9) call5_swipe_1_pane_g2

0x0001,

0xfc9b,	// (0x0006e1a0) call5_swipe_1_pane_g_ParamLimits

0xfc9b,	// (0x0006e1a0) call5_swipe_1_pane_g

0xe600,	// (0x0006cb05) call5_swipe_1_pane_t1_ParamLimits

0xe600,	// (0x0006cb05) call5_swipe_1_pane_t1

0xd060,	// (0x0006b565) call5_swipe_2_pane_g1_ParamLimits

0xd060,	// (0x0006b565) call5_swipe_2_pane_g1

0xe615,	// (0x0006cb1a) call5_swipe_2_pane_g2_ParamLimits

0xe615,	// (0x0006cb1a) call5_swipe_2_pane_g2

0x0001,

0xfca0,	// (0x0006e1a5) call5_swipe_2_pane_g_ParamLimits

0xfca0,	// (0x0006e1a5) call5_swipe_2_pane_g

0xe621,	// (0x0006cb26) call5_swipe_2_pane_t1_ParamLimits

0xe621,	// (0x0006cb26) call5_swipe_2_pane_t1

0xe636,	// (0x0006cb3b) sc_swipe_pane_g1_ParamLimits

0xe636,	// (0x0006cb3b) sc_swipe_pane_g1

0xe643,	// (0x0006cb48) sc_swipe_pane_g2_ParamLimits

0xe643,	// (0x0006cb48) sc_swipe_pane_g2

0x0001,

0xfca5,	// (0x0006e1aa) sc_swipe_pane_g_ParamLimits

0xfca5,	// (0x0006e1aa) sc_swipe_pane_g

0xe64f,	// (0x0006cb54) sc_swipe_pane_t1_ParamLimits

0xe64f,	// (0x0006cb54) sc_swipe_pane_t1

0x0d7d,	// (0x0005f282) main_cmail_launcher_pane

0x8605,	// (0x00066b0a) aid_size_cell_cmail_l_ParamLimits

0x8605,	// (0x00066b0a) aid_size_cell_cmail_l

0x8613,	// (0x00066b18) grid_cmail_l_pane_ParamLimits

0x8613,	// (0x00066b18) grid_cmail_l_pane

0x8623,	// (0x00066b28) cell_cmail_l_pane_ParamLimits

0x8623,	// (0x00066b28) cell_cmail_l_pane

0xe664,	// (0x0006cb69) cell_cmail_l_pane_g1_ParamLimits

0xe664,	// (0x0006cb69) cell_cmail_l_pane_g1

0xe670,	// (0x0006cb75) cell_cmail_l_pane_t1_ParamLimits

0xe670,	// (0x0006cb75) cell_cmail_l_pane_t1

0xe686,	// (0x0006cb8b) cell_cmail_l_pane_t2_ParamLimits

0xe686,	// (0x0006cb8b) cell_cmail_l_pane_t2

0x0001,

0xfcaa,	// (0x0006e1af) cell_cmail_l_pane_t_ParamLimits

0xfcaa,	// (0x0006e1af) cell_cmail_l_pane_t

0xb074,	// (0x00069579) grid_highlight_pane_cp018_ParamLimits

0xb074,	// (0x00069579) grid_highlight_pane_cp018

0x0bd0,	// (0x0005f0d5) main2_pane_ParamLimits

0x0bd0,	// (0x0005f0d5) main2_pane

0xa636,	// (0x00068b3b) popup_sp_fs_action_menu_bg_pane_g1

0xa63e,	// (0x00068b43) popup_sp_fs_action_menu_bg_pane_g2

0xa646,	// (0x00068b4b) popup_sp_fs_action_menu_bg_pane_g3

0xa64e,	// (0x00068b53) popup_sp_fs_action_menu_bg_pane_g4

0xa656,	// (0x00068b5b) popup_sp_fs_action_menu_bg_pane_g5

0xa65e,	// (0x00068b63) popup_sp_fs_action_menu_bg_pane_g6

0xa666,	// (0x00068b6b) popup_sp_fs_action_menu_bg_pane_g7

0xa66e,	// (0x00068b73) popup_sp_fs_action_menu_bg_pane_g8

0xa676,	// (0x00068b7b) popup_sp_fs_action_menu_bg_pane_g9

0xa67e,	// (0x00068b83) popup_sp_fs_action_menu_bg_pane_g10

0xa67e,	// (0x00068b83) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0006d674) popup_sp_fs_action_menu_bg_pane_g

0x1c2b,	// (0x00060130) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x2_t3_g3_g1

0x1c37,	// (0x0006013c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c37,	// (0x0006013c) list_medium_line_x2_t3_g3_g2

0x1c43,	// (0x00060148) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c43,	// (0x00060148) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0006d722) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0006d722) list_medium_line_x2_t3_g3_g

0x1c4f,	// (0x00060154) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c4f,	// (0x00060154) list_medium_line_x2_t3_g3_t1

0x1c64,	// (0x00060169) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c64,	// (0x00060169) list_medium_line_x2_t3_g3_t2

0x1c78,	// (0x0006017d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c78,	// (0x0006017d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0006d729) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0006d729) list_medium_line_x2_t3_g3_t

0x1c2b,	// (0x00060130) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x2_t3_g2_g1

0x1c43,	// (0x00060148) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c43,	// (0x00060148) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0006d730) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0006d730) list_medium_line_x2_t3_g2_g

0x1c8d,	// (0x00060192) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c8d,	// (0x00060192) list_medium_line_x2_t3_g2_t1

0x1ca3,	// (0x000601a8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1ca3,	// (0x000601a8) list_medium_line_x2_t3_g2_t2

0x1cb5,	// (0x000601ba) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1cb5,	// (0x000601ba) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0006d735) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0006d735) list_medium_line_x2_t3_g2_t

0x1c2b,	// (0x00060130) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x2_t4_g4_g1

0x1cd3,	// (0x000601d8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1cd3,	// (0x000601d8) list_medium_line_x2_t4_g4_g2

0x1c37,	// (0x0006013c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c37,	// (0x0006013c) list_medium_line_x2_t4_g4_g3

0x1cdf,	// (0x000601e4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1cdf,	// (0x000601e4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0006d73c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0006d73c) list_medium_line_x2_t4_g4_g

0x1ceb,	// (0x000601f0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1ceb,	// (0x000601f0) list_medium_line_x2_t4_g4_t1

0x1d05,	// (0x0006020a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d05,	// (0x0006020a) list_medium_line_x2_t4_g4_t2

0x1d1b,	// (0x00060220) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d1b,	// (0x00060220) list_medium_line_x2_t4_g4_t3

0x1d30,	// (0x00060235) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d30,	// (0x00060235) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0006d745) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0006d745) list_medium_line_x2_t4_g4_t

0x1c2b,	// (0x00060130) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x2_t2_g4_g1

0x1cd3,	// (0x000601d8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1cd3,	// (0x000601d8) list_medium_line_x2_t2_g4_g2

0x1c37,	// (0x0006013c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c37,	// (0x0006013c) list_medium_line_x2_t2_g4_g3

0x1c43,	// (0x00060148) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c43,	// (0x00060148) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0006d7ac) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0006d7ac) list_medium_line_x2_t2_g4_g

0x2de0,	// (0x000612e5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2de0,	// (0x000612e5) list_medium_line_x2_t2_g4_t1

0x1c78,	// (0x0006017d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c78,	// (0x0006017d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0006d7b5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0006d7b5) list_medium_line_x2_t2_g4_t

0x1c2b,	// (0x00060130) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x2_t2_g3_g1

0x1c37,	// (0x0006013c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c37,	// (0x0006013c) list_medium_line_x2_t2_g3_g2

0x1c43,	// (0x00060148) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c43,	// (0x00060148) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0006d722) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0006d722) list_medium_line_x2_t2_g3_g

0x2df5,	// (0x000612fa) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2df5,	// (0x000612fa) list_medium_line_x2_t2_g3_t1

0x1c78,	// (0x0006017d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c78,	// (0x0006017d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0006d7ba) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0006d7ba) list_medium_line_x2_t2_g3_t

0x2f8d,	// (0x00061492) main_sp_fs_list_pane_ParamLimits

0x2f8d,	// (0x00061492) main_sp_fs_list_pane

0x2f99,	// (0x0006149e) sp_fs_scroll_pane_ParamLimits

0x2f99,	// (0x0006149e) sp_fs_scroll_pane

0x2fa5,	// (0x000614aa) list_medium_line_x2_t3_t1

0x2fb5,	// (0x000614ba) list_medium_line_x2_t3_t2

0x2fc3,	// (0x000614c8) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0006d805) list_medium_line_x2_t3_t

0x2fd1,	// (0x000614d6) list_medium_line_x3_t4_t1

0x2fe1,	// (0x000614e6) list_medium_line_x3_t4_t2

0x2fef,	// (0x000614f4) list_medium_line_x3_t4_t3

0x2fc3,	// (0x000614c8) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0006d80c) list_medium_line_x3_t4_t

0x2ffd,	// (0x00061502) list_medium_line_x4_t5_t1

0x300d,	// (0x00061512) list_medium_line_x4_t5_t2

0x2fef,	// (0x000614f4) list_medium_line_x4_t5_t3

0x301b,	// (0x00061520) list_medium_line_x4_t5_t4

0x2fc3,	// (0x000614c8) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0006d815) list_medium_line_x4_t5_t

0x1c2b,	// (0x00060130) list_medium_line_t4_g4_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_t4_g4_g1

0x1cdf,	// (0x000601e4) list_medium_line_t4_g4_g2_ParamLimits

0x1cdf,	// (0x000601e4) list_medium_line_t4_g4_g2

0x3029,	// (0x0006152e) list_medium_line_t4_g4_g3_ParamLimits

0x3029,	// (0x0006152e) list_medium_line_t4_g4_g3

0x1c43,	// (0x00060148) list_medium_line_t4_g4_g4_ParamLimits

0x1c43,	// (0x00060148) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0006d820) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0006d820) list_medium_line_t4_g4_g

0x3035,	// (0x0006153a) list_medium_line_t4_g4_t1_ParamLimits

0x3035,	// (0x0006153a) list_medium_line_t4_g4_t1

0x304a,	// (0x0006154f) list_medium_line_t4_g4_t2_ParamLimits

0x304a,	// (0x0006154f) list_medium_line_t4_g4_t2

0x3060,	// (0x00061565) list_medium_line_t4_g4_t3_ParamLimits

0x3060,	// (0x00061565) list_medium_line_t4_g4_t3

0x1c78,	// (0x0006017d) list_medium_line_t4_g4_t4_ParamLimits

0x1c78,	// (0x0006017d) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0006d829) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0006d829) list_medium_line_t4_g4_t

0x3189,	// (0x0006168e) chi_dic_find_pane_g1

0x4144,	// (0x00062649) main_tport_pane

0x6d62,	// (0x00065267) list_medium_line_plain_t1

0x6e4c,	// (0x00065351) list_medium_line_t2_g2_g1_ParamLimits

0x6e4c,	// (0x00065351) list_medium_line_t2_g2_g1

0x6e58,	// (0x0006535d) list_medium_line_t2_g2_g2_ParamLimits

0x6e58,	// (0x0006535d) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0006deee) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0006deee) list_medium_line_t2_g2_g

0x6e64,	// (0x00065369) list_medium_line_t2_g2_t1_ParamLimits

0x6e64,	// (0x00065369) list_medium_line_t2_g2_t1

0x6e7e,	// (0x00065383) list_medium_line_t2_g2_t2_ParamLimits

0x6e7e,	// (0x00065383) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0006def3) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0006def3) list_medium_line_t2_g2_t

0xa766,	// (0x00068c6b) aid_sp_fs_list_icon_a_sm

0xa76e,	// (0x00068c73) aid_sp_fs_list_icon_d

0xa776,	// (0x00068c7b) aid_sp_fs_text_primary

0xdcd5,	// (0x0006c1da) aid_sp_fs_text_secondary

0x7519,	// (0x00065a1e) list_medium_line

0x7519,	// (0x00065a1e) list_medium_line_g2

0x7519,	// (0x00065a1e) list_medium_line_g3

0x7519,	// (0x00065a1e) list_medium_line_plain

0x7519,	// (0x00065a1e) list_medium_line_plain_t2

0x7519,	// (0x00065a1e) list_medium_line_plain_t3

0x7519,	// (0x00065a1e) list_medium_line_right_icon

0x7519,	// (0x00065a1e) list_medium_line_right_iconx2

0x7519,	// (0x00065a1e) list_medium_line_t2

0x7519,	// (0x00065a1e) list_medium_line_t2_g2

0x7519,	// (0x00065a1e) list_medium_line_t2_g3

0x7519,	// (0x00065a1e) list_medium_line_t2_right_icon

0x7519,	// (0x00065a1e) list_medium_line_t2_right_iconx2

0x7519,	// (0x00065a1e) list_medium_line_t3

0x7519,	// (0x00065a1e) list_medium_line_t3_g2

0x7519,	// (0x00065a1e) list_medium_line_t3_g3

0x7519,	// (0x00065a1e) list_medium_line_t3_right_iconx2

0x7522,	// (0x00065a27) list_medium_line_t4_g4

0x752b,	// (0x00065a30) list_medium_line_x2

0x752b,	// (0x00065a30) list_medium_line_x2_t2_g2

0x752b,	// (0x00065a30) list_medium_line_x2_t2_g3

0x752b,	// (0x00065a30) list_medium_line_x2_t2_g4

0x752b,	// (0x00065a30) list_medium_line_x2_t3

0x752b,	// (0x00065a30) list_medium_line_x2_t3_g2

0x752b,	// (0x00065a30) list_medium_line_x2_t3_g3

0x752b,	// (0x00065a30) list_medium_line_x2_t3_g4

0x752b,	// (0x00065a30) list_medium_line_x2_t4_g2

0x752b,	// (0x00065a30) list_medium_line_x2_t4_g4

0x7534,	// (0x00065a39) list_medium_line_x3

0x7534,	// (0x00065a39) list_medium_line_x3_t4

0x7534,	// (0x00065a39) list_medium_line_x3_t4_g4

0x7522,	// (0x00065a27) list_medium_line_x4_t4

0x7522,	// (0x00065a27) list_medium_line_x4_t4_g7

0x7522,	// (0x00065a27) list_medium_line_x4_t5

0x753d,	// (0x00065a42) list_single_fs_dyc_pane_ParamLimits

0x753d,	// (0x00065a42) list_single_fs_dyc_pane

0x1c2b,	// (0x00060130) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x4_t4_g7_g1

0x7ccb,	// (0x000661d0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ccb,	// (0x000661d0) list_medium_line_x4_t4_g7_g2

0x7cd7,	// (0x000661dc) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7cd7,	// (0x000661dc) list_medium_line_x4_t4_g7_g3

0x7ce6,	// (0x000661eb) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7ce6,	// (0x000661eb) list_medium_line_x4_t4_g7_g4

0x7cf2,	// (0x000661f7) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7cf2,	// (0x000661f7) list_medium_line_x4_t4_g7_g5

0x7d01,	// (0x00066206) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d01,	// (0x00066206) list_medium_line_x4_t4_g7_g6

0x7d10,	// (0x00066215) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d10,	// (0x00066215) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb2,	// (0x0006e0b7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb2,	// (0x0006e0b7) list_medium_line_x4_t4_g7_g

0x7d1c,	// (0x00066221) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d1c,	// (0x00066221) list_medium_line_x4_t4_g7_t1

0x7d31,	// (0x00066236) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d31,	// (0x00066236) list_medium_line_x4_t4_g7_t2

0x7d46,	// (0x0006624b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d46,	// (0x0006624b) list_medium_line_x4_t4_g7_t3

0x7d5b,	// (0x00066260) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d5b,	// (0x00066260) list_medium_line_x4_t4_g7_t4

0x7d6d,	// (0x00066272) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d6d,	// (0x00066272) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc1,	// (0x0006e0c6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc1,	// (0x0006e0c6) list_medium_line_x4_t4_g7_t

0x7d7f,	// (0x00066284) list_single_dyc_row_pane_ParamLimits

0x7d7f,	// (0x00066284) list_single_dyc_row_pane

0x85b1,	// (0x00066ab6) call5_gesture_pane_ParamLimits

0x85b1,	// (0x00066ab6) call5_gesture_pane

0x85e7,	// (0x00066aec) call5_windows_pane_ParamLimits

0x85e7,	// (0x00066aec) call5_windows_pane

0x8638,	// (0x00066b3d) call5_swipe_1_pane_cp_ParamLimits

0x8638,	// (0x00066b3d) call5_swipe_1_pane_cp

0x8644,	// (0x00066b49) call5_swipe_2_pane_cp_ParamLimits

0x8644,	// (0x00066b49) call5_swipe_2_pane_cp

0xab7a,	// (0x0006907f) call5_image_pane_cp

0x8650,	// (0x00066b55) popup_call5_audio_first_window_cp_ParamLimits

0x8650,	// (0x00066b55) popup_call5_audio_first_window_cp

0xe636,	// (0x0006cb3b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe636,	// (0x0006cb3b) call5_swipe_1_pane_g1_cp

0xe6a3,	// (0x0006cba8) call5_swipe_1_pane_g2_cp

0xe64f,	// (0x0006cb54) call5_swipe_1_pane_t1_cp_ParamLimits

0xe64f,	// (0x0006cb54) call5_swipe_1_pane_t1_cp

0xe636,	// (0x0006cb3b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe636,	// (0x0006cb3b) call5_swipe_2_pane_g1_cp

0xe6ab,	// (0x0006cbb0) call5_swipe_2_pane_g2_cp

0xe6b3,	// (0x0006cbb8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6b3,	// (0x0006cbb8) call5_swipe_2_pane_t1_cp

0xb074,	// (0x00069579) main_sp_fs_email_pane

0xdec6,	// (0x0006c3cb) main_sp_fs_listscroll_pane_te

0x865e,	// (0x00066b63) popup_sp_fs_action_menu_pane_ParamLimits

0x865e,	// (0x00066b63) popup_sp_fs_action_menu_pane

0xce39,	// (0x0006b33e) bg_sp_fs_ctrlbar_pane_g1

0xe6c8,	// (0x0006cbcd) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d1,	// (0x0006cbd6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6da,	// (0x0006cbdf) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce39,	// (0x0006b33e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcaf,	// (0x0006e1b4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc18,	// (0x0006b11d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc18,	// (0x0006b11d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6e3,	// (0x0006cbe8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6e3,	// (0x0006cbe8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ef,	// (0x0006cbf4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ef,	// (0x0006cbf4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcb8,	// (0x0006e1bd) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcb8,	// (0x0006e1bd) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6fb,	// (0x0006cc00) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6fb,	// (0x0006cc00) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x86a4,	// (0x00066ba9) list_medium_line_t2_right_icon_g1

0x86ac,	// (0x00066bb1) list_medium_line_t2_right_icon_t1

0x86bc,	// (0x00066bc1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcbd,	// (0x0006e1c2) list_medium_line_t2_right_icon_t

0xca01,	// (0x0006af06) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca01,	// (0x0006af06) bg_sp_fs_ctrlbar_pane

0x8723,	// (0x00066c28) main_sp_fs_ctrlbar_button_pane_cp01

0x872b,	// (0x00066c30) main_sp_fs_ctrlbar_ddmenu_pane

0xe74f,	// (0x0006cc54) main_sp_fs_ctrlbar_pane_g1

0xe75b,	// (0x0006cc60) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc2,	// (0x0006e1c7) main_sp_fs_ctrlbar_pane_g

0x8769,	// (0x00066c6e) main_sp_fs_ctrlbar_pane_t1

0x87a6,	// (0x00066cab) main_sp_fs_ctrlbar_pane

0x87c0,	// (0x00066cc5) main_sp_fs_listscroll_pane_te_cp01

0x87d1,	// (0x00066cd6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x87d1,	// (0x00066cd6) popup_sp_fs_action_menu_pane_cp01

0xb074,	// (0x00069579) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb074,	// (0x00069579) bg_sp_fs_highlight_list_pane_cp01

0xa77f,	// (0x00068c84) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa77f,	// (0x00068c84) sp_fs_action_menu_list_gene_pane_g1

0xe782,	// (0x0006cc87) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe782,	// (0x0006cc87) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd0,	// (0x0006e1d5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd0,	// (0x0006e1d5) sp_fs_action_menu_list_gene_pane_g

0xa78e,	// (0x00068c93) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa78e,	// (0x00068c93) sp_fs_action_menu_list_gene_pane_t1

0xa7a6,	// (0x00068cab) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa7a6,	// (0x00068cab) sp_fs_action_menu_list_gene_pane

0xe78f,	// (0x0006cc94) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe78f,	// (0x0006cc94) popup_sp_fs_action_menu_bg_pane

0xa7c9,	// (0x00068cce) sp_fs_action_menu_list_pane_ParamLimits

0xa7c9,	// (0x00068cce) sp_fs_action_menu_list_pane

0x87fb,	// (0x00066d00) sp_fs_scroll_pane_cp01_ParamLimits

0x87fb,	// (0x00066d00) sp_fs_scroll_pane_cp01

0x8821,	// (0x00066d26) list_medium_line_plain_t2_t1

0x8831,	// (0x00066d36) list_medium_line_plain_t2_t2

0x0001,

0xfcd5,	// (0x0006e1da) list_medium_line_plain_t2_t

0x883f,	// (0x00066d44) list_medium_line_plain_t3_t1

0x884f,	// (0x00066d54) list_medium_line_plain_t3_t2

0x885d,	// (0x00066d62) list_medium_line_plain_t3_t3

0x0002,

0xfcda,	// (0x0006e1df) list_medium_line_plain_t3_t

0x1c2b,	// (0x00060130) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x2_t2_g2_g1

0x1c43,	// (0x00060148) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c43,	// (0x00060148) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0006d730) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0006d730) list_medium_line_x2_t2_g2_g

0x3035,	// (0x0006153a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3035,	// (0x0006153a) list_medium_line_x2_t2_g2_t1

0x1c78,	// (0x0006017d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c78,	// (0x0006017d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce1,	// (0x0006e1e6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce1,	// (0x0006e1e6) list_medium_line_x2_t2_g2_t

0x1c2b,	// (0x00060130) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x2_t4_g2_g1

0x886b,	// (0x00066d70) list_medium_line_x2_t4_g2_g2_ParamLimits

0x886b,	// (0x00066d70) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce6,	// (0x0006e1eb) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce6,	// (0x0006e1eb) list_medium_line_x2_t4_g2_g

0x887d,	// (0x00066d82) list_medium_line_x2_t4_g2_t1_ParamLimits

0x887d,	// (0x00066d82) list_medium_line_x2_t4_g2_t1

0x8897,	// (0x00066d9c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8897,	// (0x00066d9c) list_medium_line_x2_t4_g2_t2

0x88ad,	// (0x00066db2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x88ad,	// (0x00066db2) list_medium_line_x2_t4_g2_t3

0x1c78,	// (0x0006017d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c78,	// (0x0006017d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfceb,	// (0x0006e1f0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfceb,	// (0x0006e1f0) list_medium_line_x2_t4_g2_t

0x88c2,	// (0x00066dc7) list_medium_line_t3_right_iconx2_g1

0x86a4,	// (0x00066ba9) list_medium_line_t3_right_iconx2_g2

0x88ca,	// (0x00066dcf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf4,	// (0x0006e1f9) list_medium_line_t3_right_iconx2_g

0x88d4,	// (0x00066dd9) list_medium_line_t3_right_iconx2_t1

0x88e4,	// (0x00066de9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfb,	// (0x0006e200) list_medium_line_t3_right_iconx2_t

0x1c2b,	// (0x00060130) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x3_t4_g4_g1

0x1c37,	// (0x0006013c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c37,	// (0x0006013c) list_medium_line_x3_t4_g4_g2

0x1cdf,	// (0x000601e4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1cdf,	// (0x000601e4) list_medium_line_x3_t4_g4_g3

0x88f2,	// (0x00066df7) list_medium_line_x3_t4_g4_g4_ParamLimits

0x88f2,	// (0x00066df7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd00,	// (0x0006e205) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd00,	// (0x0006e205) list_medium_line_x3_t4_g4_g

0x88fe,	// (0x00066e03) list_medium_line_x3_t4_g4_t1_ParamLimits

0x88fe,	// (0x00066e03) list_medium_line_x3_t4_g4_t1

0x8915,	// (0x00066e1a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8915,	// (0x00066e1a) list_medium_line_x3_t4_g4_t2

0x892a,	// (0x00066e2f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x892a,	// (0x00066e2f) list_medium_line_x3_t4_g4_t3

0x893f,	// (0x00066e44) list_medium_line_x3_t4_g4_t4_ParamLimits

0x893f,	// (0x00066e44) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd09,	// (0x0006e20e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd09,	// (0x0006e20e) list_medium_line_x3_t4_g4_t

0x895c,	// (0x00066e61) list_single_dyc_row_text_pane_t1_ParamLimits

0x895c,	// (0x00066e61) list_single_dyc_row_text_pane_t1

0x8999,	// (0x00066e9e) list_single_dyc_row_text_pane_t2_ParamLimits

0x8999,	// (0x00066e9e) list_single_dyc_row_text_pane_t2

0xa7ed,	// (0x00068cf2) list_single_dyc_row_text_pane_t3_ParamLimits

0xa7ed,	// (0x00068cf2) list_single_dyc_row_text_pane_t3

0x0005,

0xfd12,	// (0x0006e217) list_single_dyc_row_text_pane_t_ParamLimits

0xfd12,	// (0x0006e217) list_single_dyc_row_text_pane_t

0xa811,	// (0x00068d16) list_single_dyc_row_pane_g1_ParamLimits

0xa811,	// (0x00068d16) list_single_dyc_row_pane_g1

0xa81d,	// (0x00068d22) list_single_dyc_row_pane_g2_ParamLimits

0xa81d,	// (0x00068d22) list_single_dyc_row_pane_g2

0xa829,	// (0x00068d2e) list_single_dyc_row_pane_g3_ParamLimits

0xa829,	// (0x00068d2e) list_single_dyc_row_pane_g3

0xa835,	// (0x00068d3a) list_single_dyc_row_pane_g4_ParamLimits

0xa835,	// (0x00068d3a) list_single_dyc_row_pane_g4

0x0003,

0xfd1f,	// (0x0006e224) list_single_dyc_row_pane_g_ParamLimits

0xfd1f,	// (0x0006e224) list_single_dyc_row_pane_g

0xa841,	// (0x00068d46) list_single_dyc_row_text_pane_ParamLimits

0xa841,	// (0x00068d46) list_single_dyc_row_text_pane

0x9e2b,	// (0x00068330) bg_sp_fs_scroll_pane

0xe79d,	// (0x0006cca2) thumb_sp_fs_scroll_pane

0x6e4c,	// (0x00065351) list_medium_line_g1_ParamLimits

0x6e4c,	// (0x00065351) list_medium_line_g1

0x8ac2,	// (0x00066fc7) list_medium_line_t1_ParamLimits

0x8ac2,	// (0x00066fc7) list_medium_line_t1

0x1c2b,	// (0x00060130) list_medium_line_x2_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x2_g1

0x1c37,	// (0x0006013c) list_medium_line_x2_g2_ParamLimits

0x1c37,	// (0x0006013c) list_medium_line_x2_g2

0x0001,

0xfd28,	// (0x0006e22d) list_medium_line_x2_g_ParamLimits

0xfd28,	// (0x0006e22d) list_medium_line_x2_g

0xa860,	// (0x00068d65) list_medium_line_x2_t1_ParamLimits

0xa860,	// (0x00068d65) list_medium_line_x2_t1

0x1c2b,	// (0x00060130) list_medium_line_x3_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x3_g1

0x1c37,	// (0x0006013c) list_medium_line_x3_g2_ParamLimits

0x1c37,	// (0x0006013c) list_medium_line_x3_g2

0x0001,

0xfd28,	// (0x0006e22d) list_medium_line_x3_g_ParamLimits

0xfd28,	// (0x0006e22d) list_medium_line_x3_g

0xa860,	// (0x00068d65) list_medium_line_x3_t1_ParamLimits

0xa860,	// (0x00068d65) list_medium_line_x3_t1

0xe7a6,	// (0x0006ccab) thumb_sp_fs_scroll_pane_g1

0xe7af,	// (0x0006ccb4) thumb_sp_fs_scroll_pane_g2

0xe7b8,	// (0x0006ccbd) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2d,	// (0x0006e232) thumb_sp_fs_scroll_pane_g

0xe7a6,	// (0x0006ccab) bg_sp_fs_scroll_pane_g1

0xe7af,	// (0x0006ccb4) bg_sp_fs_scroll_pane_g2

0xe7b8,	// (0x0006ccbd) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2d,	// (0x0006e232) bg_sp_fs_scroll_pane_g

0x1c2b,	// (0x00060130) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c2b,	// (0x00060130) list_medium_line_x2_t3_g4_g1

0x1cd3,	// (0x000601d8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1cd3,	// (0x000601d8) list_medium_line_x2_t3_g4_g2

0x1c37,	// (0x0006013c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c37,	// (0x0006013c) list_medium_line_x2_t3_g4_g3

0x1c43,	// (0x00060148) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c43,	// (0x00060148) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0006d7ac) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0006d7ac) list_medium_line_x2_t3_g4_g

0x8ad7,	// (0x00066fdc) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8ad7,	// (0x00066fdc) list_medium_line_x2_t3_g4_t1

0x8aed,	// (0x00066ff2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8aed,	// (0x00066ff2) list_medium_line_x2_t3_g4_t2

0x1c78,	// (0x0006017d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c78,	// (0x0006017d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd34,	// (0x0006e239) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd34,	// (0x0006e239) list_medium_line_x2_t3_g4_t

0x6e4c,	// (0x00065351) list_medium_line_g2_g1_ParamLimits

0x6e4c,	// (0x00065351) list_medium_line_g2_g1

0x6e58,	// (0x0006535d) list_medium_line_g2_g2_ParamLimits

0x6e58,	// (0x0006535d) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0006deee) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0006deee) list_medium_line_g2_g

0x8b07,	// (0x0006700c) list_medium_line_g2_t1_ParamLimits

0x8b07,	// (0x0006700c) list_medium_line_g2_t1

0x6e4c,	// (0x00065351) list_medium_line_t3_g2_g1_ParamLimits

0x6e4c,	// (0x00065351) list_medium_line_t3_g2_g1

0x6e58,	// (0x0006535d) list_medium_line_t3_g2_g2_ParamLimits

0x6e58,	// (0x0006535d) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0006deee) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0006deee) list_medium_line_t3_g2_g

0x8b1c,	// (0x00067021) list_medium_line_t3_g2_t1_ParamLimits

0x8b1c,	// (0x00067021) list_medium_line_t3_g2_t1

0x8b36,	// (0x0006703b) list_medium_line_t3_g2_t2_ParamLimits

0x8b36,	// (0x0006703b) list_medium_line_t3_g2_t2

0x8b4c,	// (0x00067051) list_medium_line_t3_g2_t3_ParamLimits

0x8b4c,	// (0x00067051) list_medium_line_t3_g2_t3

0x0002,

0xfd3b,	// (0x0006e240) list_medium_line_t3_g2_t_ParamLimits

0xfd3b,	// (0x0006e240) list_medium_line_t3_g2_t

0x86a4,	// (0x00066ba9) list_medium_line_right_icon_g1

0x8b66,	// (0x0006706b) list_medium_line_right_icon_t1

0x6e4c,	// (0x00065351) list_medium_line_t2_g1_ParamLimits

0x6e4c,	// (0x00065351) list_medium_line_t2_g1

0x8b74,	// (0x00067079) list_medium_line_t2_t1_ParamLimits

0x8b74,	// (0x00067079) list_medium_line_t2_t1

0x8b8e,	// (0x00067093) list_medium_line_t2_t2_ParamLimits

0x8b8e,	// (0x00067093) list_medium_line_t2_t2

0x0001,

0xfd42,	// (0x0006e247) list_medium_line_t2_t_ParamLimits

0xfd42,	// (0x0006e247) list_medium_line_t2_t

0x6e4c,	// (0x00065351) list_medium_line_t3_g1_ParamLimits

0x6e4c,	// (0x00065351) list_medium_line_t3_g1

0x8ba3,	// (0x000670a8) list_medium_line_t3_t1_ParamLimits

0x8ba3,	// (0x000670a8) list_medium_line_t3_t1

0x8bbd,	// (0x000670c2) list_medium_line_t3_t2_ParamLimits

0x8bbd,	// (0x000670c2) list_medium_line_t3_t2

0x8bd3,	// (0x000670d8) list_medium_line_t3_t3_ParamLimits

0x8bd3,	// (0x000670d8) list_medium_line_t3_t3

0x0002,

0xfd47,	// (0x0006e24c) list_medium_line_t3_t_ParamLimits

0xfd47,	// (0x0006e24c) list_medium_line_t3_t

0x6e4c,	// (0x00065351) list_medium_line_g3_g1_ParamLimits

0x6e4c,	// (0x00065351) list_medium_line_g3_g1

0x8be8,	// (0x000670ed) list_medium_line_g3_g2_ParamLimits

0x8be8,	// (0x000670ed) list_medium_line_g3_g2

0x6e58,	// (0x0006535d) list_medium_line_g3_g3_ParamLimits

0x6e58,	// (0x0006535d) list_medium_line_g3_g3

0x0002,

0xfd4e,	// (0x0006e253) list_medium_line_g3_g_ParamLimits

0xfd4e,	// (0x0006e253) list_medium_line_g3_g

0x8bf4,	// (0x000670f9) list_medium_line_g3_t1_ParamLimits

0x8bf4,	// (0x000670f9) list_medium_line_g3_t1

0x6e4c,	// (0x00065351) list_medium_line_t2_g3_g1_ParamLimits

0x6e4c,	// (0x00065351) list_medium_line_t2_g3_g1

0x8be8,	// (0x000670ed) list_medium_line_t2_g3_g2_ParamLimits

0x8be8,	// (0x000670ed) list_medium_line_t2_g3_g2

0x6e58,	// (0x0006535d) list_medium_line_t2_g3_g3_ParamLimits

0x6e58,	// (0x0006535d) list_medium_line_t2_g3_g3

0x0002,

0xfd4e,	// (0x0006e253) list_medium_line_t2_g3_g_ParamLimits

0xfd4e,	// (0x0006e253) list_medium_line_t2_g3_g

0x8c09,	// (0x0006710e) list_medium_line_t2_g3_t1_ParamLimits

0x8c09,	// (0x0006710e) list_medium_line_t2_g3_t1

0x8c23,	// (0x00067128) list_medium_line_t2_g3_t2_ParamLimits

0x8c23,	// (0x00067128) list_medium_line_t2_g3_t2

0x0001,

0xfd55,	// (0x0006e25a) list_medium_line_t2_g3_t_ParamLimits

0xfd55,	// (0x0006e25a) list_medium_line_t2_g3_t

0x6e4c,	// (0x00065351) list_medium_line_t3_g3_g1_ParamLimits

0x6e4c,	// (0x00065351) list_medium_line_t3_g3_g1

0x8be8,	// (0x000670ed) list_medium_line_t3_g3_g2_ParamLimits

0x8be8,	// (0x000670ed) list_medium_line_t3_g3_g2

0x6e58,	// (0x0006535d) list_medium_line_t3_g3_g3_ParamLimits

0x6e58,	// (0x0006535d) list_medium_line_t3_g3_g3

0x0002,

0xfd4e,	// (0x0006e253) list_medium_line_t3_g3_g_ParamLimits

0xfd4e,	// (0x0006e253) list_medium_line_t3_g3_g

0x8c39,	// (0x0006713e) list_medium_line_t3_g3_t1_ParamLimits

0x8c39,	// (0x0006713e) list_medium_line_t3_g3_t1

0x8c52,	// (0x00067157) list_medium_line_t3_g3_t2_ParamLimits

0x8c52,	// (0x00067157) list_medium_line_t3_g3_t2

0x8c68,	// (0x0006716d) list_medium_line_t3_g3_t3_ParamLimits

0x8c68,	// (0x0006716d) list_medium_line_t3_g3_t3

0x0002,

0xfd5a,	// (0x0006e25f) list_medium_line_t3_g3_t_ParamLimits

0xfd5a,	// (0x0006e25f) list_medium_line_t3_g3_t

0x88c2,	// (0x00066dc7) list_medium_line_right_iconx2_g1

0x86a4,	// (0x00066ba9) list_medium_line_right_iconx2_g2

0x0001,

0xfd61,	// (0x0006e266) list_medium_line_right_iconx2_g

0x8c82,	// (0x00067187) list_medium_line_right_iconx2_t1

0x88c2,	// (0x00066dc7) list_medium_line_t2_right_iconx2_g1

0x86a4,	// (0x00066ba9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd61,	// (0x0006e266) list_medium_line_t2_right_iconx2_g

0x8c90,	// (0x00067195) list_medium_line_t2_right_iconx2_t1

0x8ca0,	// (0x000671a5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd66,	// (0x0006e26b) list_medium_line_t2_right_iconx2_t

0x8cae,	// (0x000671b3) list_medium_line_x4_t4_t1

0x8cbc,	// (0x000671c1) list_medium_line_x4_t4_t2

0x8ccc,	// (0x000671d1) list_medium_line_x4_t4_t3

0x8cdc,	// (0x000671e1) list_medium_line_x4_t4_t4

0x0003,

0xfd6b,	// (0x0006e270) list_medium_line_x4_t4_t

0x8d16,	// (0x0006721b) tport_appsw_pane_ParamLimits

0x8d16,	// (0x0006721b) tport_appsw_pane

0x8d24,	// (0x00067229) tport_contact_pane_ParamLimits

0x8d24,	// (0x00067229) tport_contact_pane

0x8d34,	// (0x00067239) tport_listscroll_pane_ParamLimits

0x8d34,	// (0x00067239) tport_listscroll_pane

0x8d43,	// (0x00067248) cell_tport_appsw_pane_ParamLimits

0x8d43,	// (0x00067248) cell_tport_appsw_pane

0xd0c5,	// (0x0006b5ca) tport_appsw_pane_g1_ParamLimits

0xd0c5,	// (0x0006b5ca) tport_appsw_pane_g1

0xe7c1,	// (0x0006ccc6) tport_contact_pane_g1

0xe7ca,	// (0x0006cccf) tport_contact_pane_t1

0xe7d8,	// (0x0006ccdd) tport_contact_pane_t2

0x0001,

0xfd74,	// (0x0006e279) tport_contact_pane_t

0xe7e6,	// (0x0006cceb) list_tport_pane

0xe7ef,	// (0x0006ccf4) scroll_pane_cp_030

0x8d78,	// (0x0006727d) cell_tport_appsw_pane_g1

0x8d88,	// (0x0006728d) cell_tport_appsw_pane_t1

0x8d96,	// (0x0006729b) grid_highlight_pane_cp019

0x8d9e,	// (0x000672a3) list_tport_double_graphic_pane_ParamLimits

0x8d9e,	// (0x000672a3) list_tport_double_graphic_pane

0xb074,	// (0x00069579) list_highlight_pane_cp023_ParamLimits

0xb074,	// (0x00069579) list_highlight_pane_cp023

0x8dbb,	// (0x000672c0) list_tport_double_graphic_pane_g1_ParamLimits

0x8dbb,	// (0x000672c0) list_tport_double_graphic_pane_g1

0x8dc8,	// (0x000672cd) list_tport_double_graphic_pane_t1_ParamLimits

0x8dc8,	// (0x000672cd) list_tport_double_graphic_pane_t1

0x8ddd,	// (0x000672e2) list_tport_double_graphic_pane_t2_ParamLimits

0x8ddd,	// (0x000672e2) list_tport_double_graphic_pane_t2

0x0001,

0xfd80,	// (0x0006e285) list_tport_double_graphic_pane_t_ParamLimits

0xfd80,	// (0x0006e285) list_tport_double_graphic_pane_t

0x9e2b,	// (0x00068330) main_cale_note_pane

0x65e8,	// (0x00064aed) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x65e8,	// (0x00064aed) cell_vitu2_function_top_wide_pane_cp01

0x8135,	// (0x0006663a) wait_bar_pane_cp05_ParamLimits

0xb074,	// (0x00069579) listscroll_cmail_pane

0xe7f8,	// (0x0006ccfd) list_cmail_pane

0x8def,	// (0x000672f4) list_cmail_body_pane

0x8e09,	// (0x0006730e) list_single_cmail_header_caption_pane

0xe808,	// (0x0006cd0d) list_single_cmail_header_detail_pane_ParamLimits

0xe808,	// (0x0006cd0d) list_single_cmail_header_detail_pane

0xe83a,	// (0x0006cd3f) list_single_cmail_header_caption_pane_t1

0x8e29,	// (0x0006732e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8e29,	// (0x0006732e) list_single_cmail_header_detail_pane_g1

0xa876,	// (0x00068d7b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa876,	// (0x00068d7b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd85,	// (0x0006e28a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd85,	// (0x0006e28a) list_single_cmail_header_detail_pane_g

0xa882,	// (0x00068d87) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa882,	// (0x00068d87) list_single_cmail_header_detail_pane_t1

0xa8e2,	// (0x00068de7) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa8e2,	// (0x00068de7) list_single_cmail_header_editor_pane_bg

0xe41c,	// (0x0006c921) list_cmail_body_pane_g1

0xe85e,	// (0x0006cd63) list_cmail_body_pane_t1

0xd81d,	// (0x0006bd22) list_single_cmail_header_editor_pane_bg_g1

0xadd7,	// (0x000692dc) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd82d,	// (0x0006bd32) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd825,	// (0x0006bd2a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda51,	// (0x0006bf56) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd84d,	// (0x0006bd52) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd83d,	// (0x0006bd42) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd845,	// (0x0006bd4a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xadb7,	// (0x000692bc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e41,	// (0x00067346) calenote_gesture_pane_ParamLimits

0x8e41,	// (0x00067346) calenote_gesture_pane

0x8e5b,	// (0x00067360) calenote_window_pane_ParamLimits

0x8e5b,	// (0x00067360) calenote_window_pane

0xe86c,	// (0x0006cd71) popup_note_window_cp01

0x8e73,	// (0x00067378) calenote_swipe_1_pane_ParamLimits

0x8e73,	// (0x00067378) calenote_swipe_1_pane

0x8644,	// (0x00066b49) calenote_swipe_2_pane_ParamLimits

0x8644,	// (0x00066b49) calenote_swipe_2_pane

0xe636,	// (0x0006cb3b) calenote_swipe_1_pane_g1_ParamLimits

0xe636,	// (0x0006cb3b) calenote_swipe_1_pane_g1

0xe643,	// (0x0006cb48) calenote_swipe_1_pane_g2_ParamLimits

0xe643,	// (0x0006cb48) calenote_swipe_1_pane_g2

0x0001,

0xfca5,	// (0x0006e1aa) calenote_swipe_1_pane_g_ParamLimits

0xfca5,	// (0x0006e1aa) calenote_swipe_1_pane_g

0xe87e,	// (0x0006cd83) calenote_swipe_1_pane_t1_ParamLimits

0xe87e,	// (0x0006cd83) calenote_swipe_1_pane_t1

0xe636,	// (0x0006cb3b) calenote_swipe_2_pane_g1_ParamLimits

0xe636,	// (0x0006cb3b) calenote_swipe_2_pane_g1

0xe89d,	// (0x0006cda2) calenote_swipe_2_pane_g2_ParamLimits

0xe89d,	// (0x0006cda2) calenote_swipe_2_pane_g2

0x0001,

0xfd91,	// (0x0006e296) calenote_swipe_2_pane_g_ParamLimits

0xfd91,	// (0x0006e296) calenote_swipe_2_pane_g

0xe8a9,	// (0x0006cdae) calenote_swipe_2_pane_t1_ParamLimits

0xe8a9,	// (0x0006cdae) calenote_swipe_2_pane_t1

0x9e2b,	// (0x00068330) main_mup_navstr_pane

0x5214,	// (0x00063719) main_mup3_pane_t7_ParamLimits

0x5214,	// (0x00063719) main_mup3_pane_t7

0x5c4d,	// (0x00064152) main_mp4_pane_g6_ParamLimits

0x5c4d,	// (0x00064152) main_mp4_pane_g6

0x5fe7,	// (0x000644ec) main_image3_pane_t4_ParamLimits

0x5fe7,	// (0x000644ec) main_image3_pane_t4

0x8e86,	// (0x0006738b) popup_navstr_preview_pane_ParamLimits

0x8e86,	// (0x0006738b) popup_navstr_preview_pane

0x8e92,	// (0x00067397) scroll_navstr_pane_ParamLimits

0x8e92,	// (0x00067397) scroll_navstr_pane

0x9e2b,	// (0x00068330) bg_popup_preview_window_pane_cp04

0xe8d0,	// (0x0006cdd5) popup_navstr_preview_pane_t1

0x8e9e,	// (0x000673a3) scroll_navstr_pane_g1_ParamLimits

0x8e9e,	// (0x000673a3) scroll_navstr_pane_g1

0x8eab,	// (0x000673b0) scroll_navstr_pane_t1_ParamLimits

0x8eab,	// (0x000673b0) scroll_navstr_pane_t1

0xe875,	// (0x0006cd7a) bg_button_pane_cp014

0xe875,	// (0x0006cd7a) bg_button_pane_cp030

0x8557,	// (0x00066a5c) list_double_fisheye_pane_g4_ParamLimits

0x8557,	// (0x00066a5c) list_double_fisheye_pane_g4

0x8563,	// (0x00066a68) list_double_fisheye_pane_g5_ParamLimits

0x8563,	// (0x00066a68) list_double_fisheye_pane_g5

0xc80a,	// (0x0006ad0f) sp_fs_scroll_pane_cp03

0xe74f,	// (0x0006cc54) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe75b,	// (0x0006cc60) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc2,	// (0x0006e1c7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8769,	// (0x00066c6e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe800,	// (0x0006cd05) sp_fs_scroll_pane_cp02

0xaad6,	// (0x00068fdb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaad6,	// (0x00068fdb) popup_sp_fs_calendar_preview_list_single_pane

0x9e2b,	// (0x00068330) main_cam6_pano_pane

0x4128,	// (0x0006262d) main_mup3_pane_ParamLimits

0x9e2b,	// (0x00068330) main_phacti_pane

0x8008,	// (0x0006650d) bg_button_pane_cp11

0x8020,	// (0x00066525) main_mobtv_info_pane_g2_ParamLimits

0x8020,	// (0x00066525) main_mobtv_info_pane_g2

0x0001,

0xfc22,	// (0x0006e127) main_mobtv_info_pane_g_ParamLimits

0xfc22,	// (0x0006e127) main_mobtv_info_pane_g

0x81d2,	// (0x000666d7) sc_clock_pane_t5_ParamLimits

0x81d2,	// (0x000666d7) sc_clock_pane_t5

0x83ca,	// (0x000668cf) main_radioblah_pane_g1_ParamLimits

0xe582,	// (0x0006ca87) main_radioblah_pane_t3_ParamLimits

0xe582,	// (0x0006ca87) main_radioblah_pane_t3

0xe59a,	// (0x0006ca9f) main_radioblah_pane_t4_ParamLimits

0xe59a,	// (0x0006ca9f) main_radioblah_pane_t4

0x83e8,	// (0x000668ed) main_radioblah_text_pane_ParamLimits

0x83e8,	// (0x000668ed) main_radioblah_text_pane

0x83f5,	// (0x000668fa) main_radioblah_info_pane_g1_ParamLimits

0x848e,	// (0x00066993) main_radioblah_info_pane_t4_ParamLimits

0x848e,	// (0x00066993) main_radioblah_info_pane_t4

0xb074,	// (0x00069579) main_sp_fs_calendar_pane

0x8ebd,	// (0x000673c2) main_phacti_pane_g1

0x8ec5,	// (0x000673ca) phacti_note_pane_ParamLimits

0x8ec5,	// (0x000673ca) phacti_note_pane

0xe8e7,	// (0x0006cdec) phacti_term_pane_ParamLimits

0xe8e7,	// (0x0006cdec) phacti_term_pane

0xe8fc,	// (0x0006ce01) phacti_note_pane_t1_ParamLimits

0xe8fc,	// (0x0006ce01) phacti_note_pane_t1

0xa8f9,	// (0x00068dfe) phacti_term_pane_g1

0xa901,	// (0x00068e06) phacti_term_pane_t1_ParamLimits

0xa901,	// (0x00068e06) phacti_term_pane_t1

0xe913,	// (0x0006ce18) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe91b,	// (0x0006ce20) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9b,	// (0x0006e2a0) popup_sp_fs_calendar_preview_list_single_pane_g

0xe923,	// (0x0006ce28) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe923,	// (0x0006ce28) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe939,	// (0x0006ce3e) aid_popup_sp_fs_bg_corner_pane

0xce39,	// (0x0006b33e) popup_sp_fs_calendar_preview_bg_pane_g1

0x9e2b,	// (0x00068330) popup_sp_fs_calendar_preview_bg_pane

0xe941,	// (0x0006ce46) popup_sp_fs_calendar_preview_list_pane

0xca01,	// (0x0006af06) bg_main_sp_fs_cale_pane_ParamLimits

0xca01,	// (0x0006af06) bg_main_sp_fs_cale_pane

0xa934,	// (0x00068e39) listscroll_cale_mrui_pane_ParamLimits

0xa934,	// (0x00068e39) listscroll_cale_mrui_pane

0xa949,	// (0x00068e4e) listscroll_sp_fs_schedule_track_pane

0xa952,	// (0x00068e57) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa952,	// (0x00068e57) main_sp_fs_ctrlbar_pane_cp01

0xe949,	// (0x0006ce4e) main_sp_fs_ribbon_pane

0xa965,	// (0x00068e6a) popup_sp_fs_cale_preview_window

0xea20,	// (0x0006cf25) list_single_sp_fs_schedule_track_pane_ParamLimits

0xea20,	// (0x0006cf25) list_single_sp_fs_schedule_track_pane

0xd3b1,	// (0x0006b8b6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd3b1,	// (0x0006b8b6) bg_sp_fs_highlight_list_pane_cp03

0x8f28,	// (0x0006742d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f28,	// (0x0006742d) list_single_sp_fs_schedule_track_pane_g1

0x8f34,	// (0x00067439) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f34,	// (0x00067439) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda0,	// (0x0006e2a5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda0,	// (0x0006e2a5) list_single_sp_fs_schedule_track_pane_g

0x8f40,	// (0x00067445) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f40,	// (0x00067445) list_single_sp_fs_schedule_track_pane_t1

0x8f5e,	// (0x00067463) sp_fs_schedule_track_pane_ParamLimits

0x8f5e,	// (0x00067463) sp_fs_schedule_track_pane

0xe951,	// (0x0006ce56) sp_fs_schedule_track_pane_g1

0xe959,	// (0x0006ce5e) sp_fs_schedule_track_pane_g2

0xe961,	// (0x0006ce66) sp_fs_schedule_track_pane_g3

0xe969,	// (0x0006ce6e) sp_fs_schedule_track_pane_g4

0xe971,	// (0x0006ce76) sp_fs_schedule_track_pane_g5

0x0004,

0xfda5,	// (0x0006e2aa) sp_fs_schedule_track_pane_g

0xd81d,	// (0x0006bd22) bg_sp_fs_schedule_viewer_highlight_g1

0xadd7,	// (0x000692dc) bg_sp_fs_schedule_viewer_highlight_g2

0xd825,	// (0x0006bd2a) bg_sp_fs_schedule_viewer_highlight_g3

0xd82d,	// (0x0006bd32) bg_sp_fs_schedule_viewer_highlight_g4

0xda51,	// (0x0006bf56) bg_sp_fs_schedule_viewer_highlight_g5

0xd83d,	// (0x0006bd42) bg_sp_fs_schedule_viewer_highlight_g6

0xd845,	// (0x0006bd4a) bg_sp_fs_schedule_viewer_highlight_g7

0xd84d,	// (0x0006bd52) bg_sp_fs_schedule_viewer_highlight_g8

0xadb7,	// (0x000692bc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb0,	// (0x0006e2b5) bg_sp_fs_schedule_viewer_highlight_g

0x9e2b,	// (0x00068330) bg_main_sp_fs_ribbon_pane

0x8f70,	// (0x00067475) main_sp_fs_ribbon_pane_g1

0xe979,	// (0x0006ce7e) main_sp_fs_ribbon_pane_t1

0x8f79,	// (0x0006747e) main_sp_fs_ribbon_pane_t2

0xe988,	// (0x0006ce8d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc3,	// (0x0006e2c8) main_sp_fs_ribbon_pane_t

0xe997,	// (0x0006ce9c) main_sp_fs_ribbon_scheduler_pane

0xe99f,	// (0x0006cea4) bg_main_sp_fs_ribbon_pane_g1

0xe9a8,	// (0x0006cead) bg_main_sp_fs_ribbon_pane_g2

0xe9b1,	// (0x0006ceb6) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdca,	// (0x0006e2cf) bg_main_sp_fs_ribbon_pane_g

0xe9b9,	// (0x0006cebe) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c2,	// (0x0006cec7) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cb,	// (0x0006ced0) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd1,	// (0x0006e2d6) main_sp_fs_ribbon_scheduler_pane_g

0xe9d4,	// (0x0006ced9) list_cale_mrui_pane

0x8f88,	// (0x0006748d) sp_fs_scroll_pane_cp07_ParamLimits

0x8f88,	// (0x0006748d) sp_fs_scroll_pane_cp07

0x8fa4,	// (0x000674a9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fa4,	// (0x000674a9) bg_sp_fs_schedule_viewer_highlight

0xe9e1,	// (0x0006cee6) list_single_sp_fs_schedule_track_pane_cp01

0xe9e9,	// (0x0006ceee) list_sp_fs_schedule_track_pane

0xe9f1,	// (0x0006cef6) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f1,	// (0x0006cef6) sp_fs_scroll_pane_cp06

0xce39,	// (0x0006b33e) bgmain_sp_fs_calendar_pane_g1

0x8fb1,	// (0x000674b6) list_single_cale_mrui_pane_ParamLimits

0x8fb1,	// (0x000674b6) list_single_cale_mrui_pane

0xa977,	// (0x00068e7c) list_single_cale_mrui_row_pane_ParamLimits

0xa977,	// (0x00068e7c) list_single_cale_mrui_row_pane

0xa984,	// (0x00068e89) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa984,	// (0x00068e89) list_single_cale_mrui_row_pane_g1

0xa9bc,	// (0x00068ec1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa9bc,	// (0x00068ec1) list_single_cale_mrui_row_pane_t1

0x8fd7,	// (0x000674dc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8fd7,	// (0x000674dc) list_single_cale_mrui_row_pane_t2

0xa9ce,	// (0x00068ed3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa9ce,	// (0x00068ed3) list_single_cale_mrui_row_pane_t3

0xa9fd,	// (0x00068f02) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa9fd,	// (0x00068f02) list_single_cale_mrui_row_pane_t4

0x0003,

0xfddf,	// (0x0006e2e4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfddf,	// (0x0006e2e4) list_single_cale_mrui_row_pane_t

0x903d,	// (0x00067542) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x903d,	// (0x00067542) list_single_cmail_header_editor_pane_bg_cp01

0x905f,	// (0x00067564) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x905f,	// (0x00067564) list_single_cmail_header_editor_pane_bg_cp02

0x907b,	// (0x00067580) main_radioblah_text_pane_t1_ParamLimits

0x907b,	// (0x00067580) main_radioblah_text_pane_t1

0xea10,	// (0x0006cf15) cam6_indi_pane_cp01

0xea18,	// (0x0006cf1d) cam6_mode_pane_cp01

0xea37,	// (0x0006cf3c) cam6_pano_pane

0xea40,	// (0x0006cf45) cam6_zoom_pane_cp01

0xea4a,	// (0x0006cf4f) cam6_pano_image_pane

0xea53,	// (0x0006cf58) cam6_pano_pane_g1

0xe41c,	// (0x0006c921) cam6_pano_pane_g2

0xea5c,	// (0x0006cf61) cam6_pano_pane_g3

0xea65,	// (0x0006cf6a) cam6_pano_pane_g4

0xd413,	// (0x0006b918) cam6_pano_pane_g5

0xea6e,	// (0x0006cf73) cam6_pano_pane_g6

0xea76,	// (0x0006cf7b) cam6_pano_pane_g7

0xea7e,	// (0x0006cf83) cam6_pano_pane_g8

0xea87,	// (0x0006cf8c) cam6_pano_pane_g9

0x0008,

0xfde8,	// (0x0006e2ed) cam6_pano_pane_g

0x9e2b,	// (0x00068330) main_browser_tag_pane

0xe8c8,	// (0x0006cdcd) grid_navstr_albumart_pane

0xea92,	// (0x0006cf97) cell_navstr_albumart_pane_ParamLimits

0xea92,	// (0x0006cf97) cell_navstr_albumart_pane

0xeaae,	// (0x0006cfb3) cell_navstr_albumart_pane_g1

0xc802,	// (0x0006ad07) cell_navstr_albumart_pane_g2

0xc81e,	// (0x0006ad23) cell_navstr_albumart_pane_g3

0xc816,	// (0x0006ad1b) cell_navstr_albumart_pane_g4

0x0003,

0xfdfb,	// (0x0006e300) cell_navstr_albumart_pane_g

0x9095,	// (0x0006759a) bt_list_pane_ParamLimits

0x9095,	// (0x0006759a) bt_list_pane

0x90ae,	// (0x000675b3) bt_list_pane_t1

0x90bd,	// (0x000675c2) bt_list_pane_t2

0x0001,

0xfe04,	// (0x0006e309) bt_list_pane_t

0x9e2b,	// (0x00068330) main_cale_prevew_pane

0x90cc,	// (0x000675d1) popup_cale_preview_window_ParamLimits

0x90cc,	// (0x000675d1) popup_cale_preview_window

0xb074,	// (0x00069579) bg_popup_preview_window_pane_cp05_ParamLimits

0xb074,	// (0x00069579) bg_popup_preview_window_pane_cp05

0xeab6,	// (0x0006cfbb) list_cale_preview_pane_ParamLimits

0xeab6,	// (0x0006cfbb) list_cale_preview_pane

0x90e9,	// (0x000675ee) list_double_cale_preview_pane_ParamLimits

0x90e9,	// (0x000675ee) list_double_cale_preview_pane

0x90fd,	// (0x00067602) list_single_cale_preview_pane_ParamLimits

0x90fd,	// (0x00067602) list_single_cale_preview_pane

0x9115,	// (0x0006761a) list_single_cale_preview_pane_g1

0x911d,	// (0x00067622) list_single_cale_preview_pane_t1_ParamLimits

0x911d,	// (0x00067622) list_single_cale_preview_pane_t1

0x9132,	// (0x00067637) list_double_cale_preview_pane_g1

0x913a,	// (0x0006763f) list_double_cale_preview_pane_t1_ParamLimits

0x913a,	// (0x0006763f) list_double_cale_preview_pane_t1

0x914f,	// (0x00067654) list_double_cale_preview_pane_t2_ParamLimits

0x914f,	// (0x00067654) list_double_cale_preview_pane_t2

0x0001,

0xfe09,	// (0x0006e30e) list_double_cale_preview_pane_t_ParamLimits

0xfe09,	// (0x0006e30e) list_double_cale_preview_pane_t

0x9e2b,	// (0x00068330) main_ezdial_pane

0xb074,	// (0x00069579) main_sp_fs_email_pane_ParamLimits

0x86ca,	// (0x00066bcf) cmail_ddmenu_btn01_pane_ParamLimits

0x86ca,	// (0x00066bcf) cmail_ddmenu_btn01_pane

0x86e7,	// (0x00066bec) cmail_ddmenu_btn02_pane_ParamLimits

0x86e7,	// (0x00066bec) cmail_ddmenu_btn02_pane

0x8705,	// (0x00066c0a) cmail_ddmenu_btn03_pane_ParamLimits

0x8705,	// (0x00066c0a) cmail_ddmenu_btn03_pane

0x87a6,	// (0x00066cab) main_sp_fs_ctrlbar_pane_ParamLimits

0x87c0,	// (0x00066cc5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8def,	// (0x000672f4) list_cmail_body_pane_ParamLimits

0xe848,	// (0x0006cd4d) bg_button_pane_cp12

0xe851,	// (0x0006cd56) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe851,	// (0x0006cd56) list_single_cmail_header_detail_pane_g3

0xa8be,	// (0x00068dc3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa8be,	// (0x00068dc3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8c,	// (0x0006e291) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8c,	// (0x0006e291) list_single_cmail_header_detail_pane_t

0xa916,	// (0x00068e1b) phacti_term_pane_t2_ParamLimits

0xa916,	// (0x00068e1b) phacti_term_pane_t2

0x0001,

0xfd96,	// (0x0006e29b) phacti_term_pane_t_ParamLimits

0xfd96,	// (0x0006e29b) phacti_term_pane_t

0xeac2,	// (0x0006cfc7) aid_size_list_single_double

0x9167,	// (0x0006766c) popup_ezdial_listscroll_window

0x9189,	// (0x0006768e) popup_number_entry_window_cp01

0xab7a,	// (0x0006907f) bg_popup_call_pane_cp09

0xeace,	// (0x0006cfd3) ezdial_list_pane

0xead6,	// (0x0006cfdb) scroll_pane_cp23

0xcc18,	// (0x0006b11d) bg_button_pane_cp028_ParamLimits

0xcc18,	// (0x0006b11d) bg_button_pane_cp028

0x9197,	// (0x0006769c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9197,	// (0x0006769c) cmail_ddmenu_btn01_pane_g1

0x91a9,	// (0x000676ae) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91a9,	// (0x000676ae) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe0e,	// (0x0006e313) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe0e,	// (0x0006e313) cmail_ddmenu_btn01_pane_g

0xeade,	// (0x0006cfe3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeade,	// (0x0006cfe3) cmail_ddmenu_btn01_pane_t1

0xca01,	// (0x0006af06) bg_button_pane_cp029_ParamLimits

0xca01,	// (0x0006af06) bg_button_pane_cp029

0x91a9,	// (0x000676ae) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91a9,	// (0x000676ae) cmail_ddmenu_btn02_pane_g1

0x91c1,	// (0x000676c6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91c1,	// (0x000676c6) cmail_ddmenu_btn02_pane_t1

0xd3b1,	// (0x0006b8b6) bg_button_pane_cp031_ParamLimits

0xd3b1,	// (0x0006b8b6) bg_button_pane_cp031

0x91a9,	// (0x000676ae) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91a9,	// (0x000676ae) cmail_ddmenu_btn03_pane_g1

0x91c1,	// (0x000676c6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91c1,	// (0x000676c6) cmail_ddmenu_btn03_pane_t1

0x5e82,	// (0x00064387) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e9c,	// (0x000643a1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e9c,	// (0x000643a1) cell_dialer2_keypad_pane_t1_copy1

0x7e35,	// (0x0006633a) ncimui_group_button_pane

0xb074,	// (0x00069579) main_sp_fs_calendar_pane_ParamLimits

0x8e09,	// (0x0006730e) list_single_cmail_header_caption_pane_ParamLimits

0xa92b,	// (0x00068e30) aid_recal_txt_sm_pane

0x9e2b,	// (0x00068330) mian_recal_day_pane

0xa965,	// (0x00068e6a) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf3,	// (0x0006cff8) list_recal_day_pane

0xaa48,	// (0x00068f4d) list_single_recal_day_pane_ParamLimits

0xaa48,	// (0x00068f4d) list_single_recal_day_pane

0xeb1a,	// (0x0006d01f) list_single_recal_day_pane_g1_ParamLimits

0xeb1a,	// (0x0006d01f) list_single_recal_day_pane_g1

0xaa5a,	// (0x00068f5f) list_single_recal_day_pane_g2_ParamLimits

0xaa5a,	// (0x00068f5f) list_single_recal_day_pane_g2

0xaa66,	// (0x00068f6b) list_single_recal_day_pane_g3_ParamLimits

0xaa66,	// (0x00068f6b) list_single_recal_day_pane_g3

0x91e5,	// (0x000676ea) list_single_recal_day_pane_g4_ParamLimits

0x91e5,	// (0x000676ea) list_single_recal_day_pane_g4

0xaa72,	// (0x00068f77) list_single_recal_day_pane_g5_ParamLimits

0xaa72,	// (0x00068f77) list_single_recal_day_pane_g5

0xaa7e,	// (0x00068f83) list_single_recal_day_pane_g6_ParamLimits

0xaa7e,	// (0x00068f83) list_single_recal_day_pane_g6

0x0004,

0xfe1d,	// (0x0006e322) list_single_recal_day_pane_g_ParamLimits

0xfe1d,	// (0x0006e322) list_single_recal_day_pane_g

0xaa92,	// (0x00068f97) list_single_recal_day_pane_t1

0xaaa4,	// (0x00068fa9) list_single_recal_day_pane_t2

0x0001,

0xfe28,	// (0x0006e32d) list_single_recal_day_pane_t

0x91fd,	// (0x00067702) ncimui_query_button_pane_ParamLimits

0x91fd,	// (0x00067702) ncimui_query_button_pane

0x920d,	// (0x00067712) ncimui_query_button_pane_t1_ParamLimits

0x920d,	// (0x00067712) ncimui_query_button_pane_t1

0xeb26,	// (0x0006d02b) ncimui_query_button_pane_t2_ParamLimits

0xeb26,	// (0x0006d02b) ncimui_query_button_pane_t2

0x0001,

0xfe2d,	// (0x0006e332) ncimui_query_button_pane_t_ParamLimits

0xfe2d,	// (0x0006e332) ncimui_query_button_pane_t

0x9220,	// (0x00067725) query_button_pane_ParamLimits

0x9220,	// (0x00067725) query_button_pane

0x9e2b,	// (0x00068330) bg_button_pane_cp0028

0xeb39,	// (0x0006d03e) query_button_pane_t1

0x4144,	// (0x00062649) main_tport_pane_ParamLimits

0x8cec,	// (0x000671f1) bg_popup_window_pane_cp01_ParamLimits

0x8cec,	// (0x000671f1) bg_popup_window_pane_cp01

0x8cfa,	// (0x000671ff) heading_pane_cp08_ParamLimits

0x8cfa,	// (0x000671ff) heading_pane_cp08

0x8d08,	// (0x0006720d) heading_pane_cp07_ParamLimits

0x8d08,	// (0x0006720d) heading_pane_cp07

0x8d78,	// (0x0006727d) cell_tport_appsw_pane_g2

0x0002,

0xfd79,	// (0x0006e27e) cell_tport_appsw_pane_g

0x3834,	// (0x00061d39) input_candi_list_open_g1

0xaf9a,	// (0x0006949f) list_cale_time_pane_g6_ParamLimits

0xaf9a,	// (0x0006949f) list_cale_time_pane_g6

0x4be6,	// (0x000630eb) aid_size_touch_calib_1_ParamLimits

0x4be6,	// (0x000630eb) aid_size_touch_calib_1

0x4bf2,	// (0x000630f7) aid_size_touch_calib_2_ParamLimits

0x4bf2,	// (0x000630f7) aid_size_touch_calib_2

0x4c00,	// (0x00063105) aid_size_touch_calib_3_ParamLimits

0x4c00,	// (0x00063105) aid_size_touch_calib_3

0x4c10,	// (0x00063115) aid_size_touch_calib_4_ParamLimits

0x4c10,	// (0x00063115) aid_size_touch_calib_4

0x4c1e,	// (0x00063123) main_touch_calib_button_group_pane_ParamLimits

0x4c1e,	// (0x00063123) main_touch_calib_button_group_pane

0x4c2c,	// (0x00063131) main_touch_calib_pane_g1_ParamLimits

0x4c38,	// (0x0006313d) main_touch_calib_pane_g2_ParamLimits

0x4c44,	// (0x00063149) main_touch_calib_pane_g3_ParamLimits

0x4c50,	// (0x00063155) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0006dc3b) main_touch_calib_pane_g_ParamLimits

0x4c5c,	// (0x00063161) main_touch_calib_pane_t1_ParamLimits

0x4c73,	// (0x00063178) main_touch_calib_pane_t2_ParamLimits

0x4c8c,	// (0x00063191) main_touch_calib_pane_t3_ParamLimits

0x4ca2,	// (0x000631a7) main_touch_calib_pane_t4_ParamLimits

0x4cb8,	// (0x000631bd) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0006dc44) main_touch_calib_pane_t_ParamLimits

0xd160,	// (0x0006b665) list_single_fp_cale_pane_g3_ParamLimits

0xd160,	// (0x0006b665) list_single_fp_cale_pane_g3

0x4128,	// (0x0006262d) bg_button_pane_cp012_ParamLimits

0x4128,	// (0x0006262d) bg_vkb2_func_pane_cp03_ParamLimits

0x6dcc,	// (0x000652d1) cell_vitu2_function_top_pane_g1_ParamLimits

0x4128,	// (0x0006262d) bg_vkb2_func_pane_cp04_ParamLimits

0x7dbb,	// (0x000662c0) main_ncimui_button_group_pane_ParamLimits

0x7dbb,	// (0x000662c0) main_ncimui_button_group_pane

0x7e23,	// (0x00066328) main_ncimui_pane_t3_ParamLimits

0x7e23,	// (0x00066328) main_ncimui_pane_t3

0xe8de,	// (0x0006cde3) phacti_button_group_pane

0xeac2,	// (0x0006cfc7) aid_size_list_single_double_ParamLimits

0x9167,	// (0x0006766c) popup_ezdial_listscroll_window_ParamLimits

0x9189,	// (0x0006768e) popup_number_entry_window_cp01_ParamLimits

0x922d,	// (0x00067732) phacti_button_pane_ParamLimits

0x922d,	// (0x00067732) phacti_button_pane

0x9e2b,	// (0x00068330) bg_button_pane_cp14

0xeb47,	// (0x0006d04c) phacti_button_pane_t1

0x923e,	// (0x00067743) main_touch_calib_button_pane_ParamLimits

0x923e,	// (0x00067743) main_touch_calib_button_pane

0xa59d,	// (0x00068aa2) bg_button_pane_cp18_ParamLimits

0xa59d,	// (0x00068aa2) bg_button_pane_cp18

0xeb55,	// (0x0006d05a) main_touch_calib_button_pane_t1_ParamLimits

0xeb55,	// (0x0006d05a) main_touch_calib_button_pane_t1

0xeb6b,	// (0x0006d070) main_touch_calib_button_pane_t2_ParamLimits

0xeb6b,	// (0x0006d070) main_touch_calib_button_pane_t2

0x0001,

0xfe32,	// (0x0006e337) main_touch_calib_button_pane_t_ParamLimits

0xfe32,	// (0x0006e337) main_touch_calib_button_pane_t

0x9e2b,	// (0x00068330) cell_ncimui_button_pane

0x9e2b,	// (0x00068330) bg_button_pane_cp032

0xeb89,	// (0x0006d08e) cell_ncimui_button_pane_t1

0x5ef8,	// (0x000643fd) image3_infobar_pane_ParamLimits

0x5ef8,	// (0x000643fd) image3_infobar_pane

0x81f4,	// (0x000666f9) fs_bigclock_status_pane_ParamLimits

0x81f4,	// (0x000666f9) fs_bigclock_status_pane

0x8201,	// (0x00066706) main_fs_bigclock_clock_pane_ParamLimits

0x8201,	// (0x00066706) main_fs_bigclock_clock_pane

0x821d,	// (0x00066722) main_fs_bigclock_indi_pane_ParamLimits

0x821d,	// (0x00066722) main_fs_bigclock_indi_pane

0x824b,	// (0x00066750) main_fs_bigclock_swipe_pane_ParamLimits

0x824b,	// (0x00066750) main_fs_bigclock_swipe_pane

0x9e2b,	// (0x00068330) main_fs_clock_dumped_data

0x8285,	// (0x0006678a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8285,	// (0x0006678a) list_single_fs_bigclock_indicator_pane_g1

0x82a4,	// (0x000667a9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x82a4,	// (0x000667a9) list_single_fs_bigclock_indicator_pane_g2

0x82be,	// (0x000667c3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x82be,	// (0x000667c3) list_single_fs_bigclock_indicator_pane_g3

0x82da,	// (0x000667df) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x82da,	// (0x000667df) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc56,	// (0x0006e15b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc56,	// (0x0006e15b) list_single_fs_bigclock_indicator_pane_g

0x8309,	// (0x0006680e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8309,	// (0x0006680e) list_single_fs_bigclock_indicator_pane_t1

0x8331,	// (0x00066836) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8331,	// (0x00066836) list_single_fs_bigclock_indicator_pane_t2

0x8359,	// (0x0006685e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8359,	// (0x0006685e) list_single_fs_bigclock_indicator_pane_t3

0x8381,	// (0x00066886) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8381,	// (0x00066886) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc61,	// (0x0006e166) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc61,	// (0x0006e166) list_single_fs_bigclock_indicator_pane_t

0xeb97,	// (0x0006d09c) image3_infobar_fav_pane_ParamLimits

0xeb97,	// (0x0006d09c) image3_infobar_fav_pane

0xeba7,	// (0x0006d0ac) image3_infobar_loc_pane_ParamLimits

0xeba7,	// (0x0006d0ac) image3_infobar_loc_pane

0xebbd,	// (0x0006d0c2) image3_infobar_time_pane_ParamLimits

0xebbd,	// (0x0006d0c2) image3_infobar_time_pane

0xce39,	// (0x0006b33e) image3_infobar_time_pane_g1

0xebcd,	// (0x0006d0d2) image3_infobar_time_pane_t1

0xce39,	// (0x0006b33e) image3_infobar_loc_pane_g1

0xebdb,	// (0x0006d0e0) image3_infobar_loc_pane_g2

0x0001,

0xfe37,	// (0x0006e33c) image3_infobar_loc_pane_g

0xebe3,	// (0x0006d0e8) image3_infobar_loc_pane_t1

0xce39,	// (0x0006b33e) image3_infobar_fav_pane_g1

0xebf1,	// (0x0006d0f6) image3_infobar_fav_pane_g2

0x0001,

0xfe3c,	// (0x0006e341) image3_infobar_fav_pane_g

0xebf9,	// (0x0006d0fe) fs_bigclock_status_battery_pane

0xec02,	// (0x0006d107) fs_bigclock_status_signal_pane

0xec0b,	// (0x0006d110) fs_bigclock_status_title_pane

0xec14,	// (0x0006d119) fs_bigclock_status_signal_pane_g1

0xec1d,	// (0x0006d122) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe41,	// (0x0006e346) fs_bigclock_status_signal_pane_g

0xec25,	// (0x0006d12a) fs_bigclock_status_battery_pane_g1

0xec2e,	// (0x0006d133) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe46,	// (0x0006e34b) fs_bigclock_status_battery_pane_g

0xec36,	// (0x0006d13b) fs_bigclock_status_title_pane_t1

0x924e,	// (0x00067753) main_fs_bigclock_clock_pane_g1

0x924e,	// (0x00067753) main_fs_bigclock_clock_pane_g2

0x925d,	// (0x00067762) main_fs_bigclock_clock_pane_g3

0x925d,	// (0x00067762) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4b,	// (0x0006e350) main_fs_bigclock_clock_pane_g

0x926d,	// (0x00067772) main_fs_bigclock_clock_pane_t1

0x9282,	// (0x00067787) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe54,	// (0x0006e359) main_fs_bigclock_clock_pane_t

0xec44,	// (0x0006d149) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec44,	// (0x0006d149) list_single_fs_bigclock_indicator_pane

0xec55,	// (0x0006d15a) list_single_fs_bigclock_pane_ParamLimits

0xec55,	// (0x0006d15a) list_single_fs_bigclock_pane

0xec7b,	// (0x0006d180) main_fs_bigclock_indicator_pane_t1

0xec8a,	// (0x0006d18f) list_single_fs_bigclock_pane_g1

0xec92,	// (0x0006d197) list_single_fs_bigclock_pane_t1

0xce39,	// (0x0006b33e) main_fs_bigclock_swipe_pane_g1

0xecd5,	// (0x0006d1da) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe65,	// (0x0006e36a) main_fs_bigclock_swipe_pane_g

0xecdd,	// (0x0006d1e2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecdd,	// (0x0006d1e2) main_fs_bigclock_swipe_pane_t1

0x3076,	// (0x0006157b) call_type_pane_ParamLimits

0x9e2b,	// (0x00068330) main_btmg_pane

0xa9b0,	// (0x00068eb5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa9b0,	// (0x00068eb5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd8,	// (0x0006e2dd) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd8,	// (0x0006e2dd) list_single_cale_mrui_row_pane_g

0xaa36,	// (0x00068f3b) list_recal_vselct_arw_lo_pane

0xeb12,	// (0x0006d017) list_recal_vselct_arw_up_pane

0xaa3e,	// (0x00068f43) list_recal_vselct_pane

0x92d9,	// (0x000677de) btmg_button_pane

0x92e5,	// (0x000677ea) main_btmg_pane_g1

0x9e2b,	// (0x00068330) bg_button_pane_cp044

0xecfa,	// (0x0006d1ff) btmg_button_pane_t1

0xc9ed,	// (0x0006aef2) aid_listscroll_gen

0xb074,	// (0x00069579) main_cntbar_detail_pane

0xe7f8,	// (0x0006ccfd) list_cmail_folder_pane

0xc80a,	// (0x0006ad0f) sp_fs_scroll_pane_cp03_ParamLimits

0x92ed,	// (0x000677f2) list_single_fs_dyc_pane_cp01_ParamLimits

0x92ed,	// (0x000677f2) list_single_fs_dyc_pane_cp01

0xed08,	// (0x0006d20d) aid_size_cmail_indent

0xaab6,	// (0x00068fbb) list_single_dyc_row_pane_cp01

0x932b,	// (0x00067830) cntbar_detail_list_pane_ParamLimits

0x932b,	// (0x00067830) cntbar_detail_list_pane

0x936b,	// (0x00067870) main_cntbar_detail_cont_pane_ParamLimits

0x936b,	// (0x00067870) main_cntbar_detail_cont_pane

0x2f99,	// (0x0006149e) scroll_pane_cp032_ParamLimits

0x2f99,	// (0x0006149e) scroll_pane_cp032

0x9377,	// (0x0006787c) cntbar_detail_list_event_pane_ParamLimits

0x9377,	// (0x0006787c) cntbar_detail_list_event_pane

0x9339,	// (0x0006783e) cntbar_detail_list_shct_pane

0xae25,	// (0x0006932a) aid_list_gen

0xed11,	// (0x0006d216) aid_scroll

0xed1a,	// (0x0006d21f) aid_size_touch_scroll_bar

0x752b,	// (0x00065a30) aid_list_double

0x7519,	// (0x00065a1e) aid_list_single

0x7519,	// (0x00065a1e) aid_list_single_lg

0x9387,	// (0x0006788c) aid_list_z_g_a_sm

0x938f,	// (0x00067894) aid_list_z_g_d

0x9397,	// (0x0006789c) aid_txt_z_prm

0x93a5,	// (0x000678aa) aid_txt_z_prm_cp01

0x93b3,	// (0x000678b8) aid_txt_z_sec

0x93c1,	// (0x000678c6) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93c1,	// (0x000678c6) main_cntbar_detail_cont_pane_g1

0x93ce,	// (0x000678d3) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93ce,	// (0x000678d3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6a,	// (0x0006e36f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6a,	// (0x0006e36f) main_cntbar_detail_cont_pane_g

0xed23,	// (0x0006d228) main_cntbar_detail_cont_pane_t1

0xed31,	// (0x0006d236) main_cntbar_detail_cont_pane_t2

0xed3f,	// (0x0006d244) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe6f,	// (0x0006e374) main_cntbar_detail_cont_pane_t

0x93da,	// (0x000678df) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93da,	// (0x000678df) cell_cntbar_detail_list_shct_pane

0xed4d,	// (0x0006d252) cntbar_detail_list_shct_pane_g1

0xed56,	// (0x0006d25b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe76,	// (0x0006e37b) cntbar_detail_list_shct_pane_g

0x93ee,	// (0x000678f3) cntbar_detail_list_event_pane_g1_ParamLimits

0x93ee,	// (0x000678f3) cntbar_detail_list_event_pane_g1

0x93fa,	// (0x000678ff) cntbar_detail_list_event_pane_g2_ParamLimits

0x93fa,	// (0x000678ff) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7b,	// (0x0006e380) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7b,	// (0x0006e380) cntbar_detail_list_event_pane_g

0x9468,	// (0x0006796d) cntbar_detail_list_event_pane_t1_ParamLimits

0x9468,	// (0x0006796d) cntbar_detail_list_event_pane_t1

0x947d,	// (0x00067982) cntbar_detail_list_event_pane_t2_ParamLimits

0x947d,	// (0x00067982) cntbar_detail_list_event_pane_t2

0x0002,

0xfe88,	// (0x0006e38d) cntbar_detail_list_event_pane_t_ParamLimits

0xfe88,	// (0x0006e38d) cntbar_detail_list_event_pane_t

0xce39,	// (0x0006b33e) cell_cntbar_detail_list_shct_pane_g1

0xb58a,	// (0x00069a8f) navi_pane_mv_g3

0xb074,	// (0x00069579) main_cntbar_detail_pane_ParamLimits

0x9e2b,	// (0x00068330) main_notif_wgt_pane

0x5b7a,	// (0x0006407f) aid_tch_main_mp4_pane_g4

0x5de3,	// (0x000642e8) popup_slider_window_cp02

0xaa2c,	// (0x00068f31) list_recal_day_event_pane

0x930b,	// (0x00067810) cntbar_detail_btn_pane_ParamLimits

0x930b,	// (0x00067810) cntbar_detail_btn_pane

0x931b,	// (0x00067820) cntbar_detail_btn_pane_cp01_ParamLimits

0x931b,	// (0x00067820) cntbar_detail_btn_pane_cp01

0x9339,	// (0x0006783e) cntbar_detail_list_shct_pane_ParamLimits

0x9345,	// (0x0006784a) cntbar_detail_pane_g1_ParamLimits

0x9345,	// (0x0006784a) cntbar_detail_pane_g1

0x9355,	// (0x0006785a) cntbar_detail_pane_t1_ParamLimits

0x9355,	// (0x0006785a) cntbar_detail_pane_t1

0x9406,	// (0x0006790b) cntbar_detail_list_event_pane_g3_ParamLimits

0x9406,	// (0x0006790b) cntbar_detail_list_event_pane_g3

0x941e,	// (0x00067923) cntbar_detail_list_event_pane_g4_ParamLimits

0x941e,	// (0x00067923) cntbar_detail_list_event_pane_g4

0x9436,	// (0x0006793b) cntbar_detail_list_event_pane_g5_ParamLimits

0x9436,	// (0x0006793b) cntbar_detail_list_event_pane_g5

0x944e,	// (0x00067953) cntbar_detail_list_event_pane_g6_ParamLimits

0x944e,	// (0x00067953) cntbar_detail_list_event_pane_g6

0x9492,	// (0x00067997) cntbar_detail_list_event_pane_t3_ParamLimits

0x9492,	// (0x00067997) cntbar_detail_list_event_pane_t3

0x94a4,	// (0x000679a9) popup_notif_wgt_window_ParamLimits

0x94a4,	// (0x000679a9) popup_notif_wgt_window

0x94b4,	// (0x000679b9) popup_submenu_window_cp01_ParamLimits

0x94b4,	// (0x000679b9) popup_submenu_window_cp01

0xab7a,	// (0x0006907f) bg_popup_window_pane_cp10

0xed5f,	// (0x0006d264) listscroll_notif_wgt_pane

0xed71,	// (0x0006d276) list_notif_wgt_window

0xed7a,	// (0x0006d27f) scroll_pane_cp033

0x94c4,	// (0x000679c9) list_notif_wgt_row_pane_ParamLimits

0x94c4,	// (0x000679c9) list_notif_wgt_row_pane

0xed83,	// (0x0006d288) aid_size_list_notif_wgt_del

0xed90,	// (0x0006d295) list_notif_wgt_row_pane_g1

0xed9c,	// (0x0006d2a1) list_notif_wgt_row_pane_g2

0xedab,	// (0x0006d2b0) list_notif_wgt_row_pane_g3

0x0002,

0xfe8f,	// (0x0006e394) list_notif_wgt_row_pane_g

0xedb8,	// (0x0006d2bd) list_notif_wgt_row_pane_t1

0xedce,	// (0x0006d2d3) list_notif_wgt_row_pane_t2

0xede0,	// (0x0006d2e5) list_notif_wgt_row_pane_t3

0x0002,

0xfe96,	// (0x0006e39b) list_notif_wgt_row_pane_t

0xda6b,	// (0x0006bf70) list_recal_day_event_pane_g1

0xedf2,	// (0x0006d2f7) list_recal_day_event_pane_t1

0x9e2b,	// (0x00068330) bg_button_pane_cp045

0x94d8,	// (0x000679dd) cntbar_detail_btn_pane_t1

0xca01,	// (0x0006af06) main_callh_pane_ParamLimits

0xca01,	// (0x0006af06) main_callh_pane

0x9e2b,	// (0x00068330) main_coverflow0_pane

0x9e2b,	// (0x00068330) main_wgtman_pane

0x8263,	// (0x00066768) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8263,	// (0x00066768) main_fs_bigclock_unlock_btn_pane

0x8d70,	// (0x00067275) bg_button_pane_cp16

0x8d80,	// (0x00067285) cell_tport_appsw_pane_g3

0x94e6,	// (0x000679eb) cf0_flow_pane_ParamLimits

0x94e6,	// (0x000679eb) cf0_flow_pane

0xee01,	// (0x0006d306) listscroll_cf0_pane

0xee0c,	// (0x0006d311) main_cf0_pane_g1

0x94f5,	// (0x000679fa) main_cf0_pane_t1_ParamLimits

0x94f5,	// (0x000679fa) main_cf0_pane_t1

0x9509,	// (0x00067a0e) main_cf0_pane_t2_ParamLimits

0x9509,	// (0x00067a0e) main_cf0_pane_t2

0x0001,

0xfea2,	// (0x0006e3a7) main_cf0_pane_t_ParamLimits

0xfea2,	// (0x0006e3a7) main_cf0_pane_t

0xee1e,	// (0x0006d323) scroll_pane_cp11

0x951d,	// (0x00067a22) cf0_flow_pane_g1

0x9525,	// (0x00067a2a) cf0_flow_pane_g2

0x0001,

0xfea7,	// (0x0006e3ac) cf0_flow_pane_g

0x952d,	// (0x00067a32) cf0_flow_pane_t1

0x9e2b,	// (0x00068330) main_call6_pane

0x9e2b,	// (0x00068330) main_calllock_pane

0x953b,	// (0x00067a40) call6_btn_grp_pane_ParamLimits

0x953b,	// (0x00067a40) call6_btn_grp_pane

0x9548,	// (0x00067a4d) call6_pane_g1_ParamLimits

0x9548,	// (0x00067a4d) call6_pane_g1

0x9558,	// (0x00067a5d) popup_call6_1st_window_ParamLimits

0x9558,	// (0x00067a5d) popup_call6_1st_window

0x9568,	// (0x00067a6d) popup_call6_2nd_window_ParamLimits

0x9568,	// (0x00067a6d) popup_call6_2nd_window

0x9578,	// (0x00067a7d) cell_call6_btn_pane_ParamLimits

0x9578,	// (0x00067a7d) cell_call6_btn_pane

0xab7a,	// (0x0006907f) bg_popup_call2_in_pane_cp03

0xee29,	// (0x0006d32e) popup_call6_1st_window_g1

0xee31,	// (0x0006d336) popup_call6_1st_window_g2

0xee39,	// (0x0006d33e) popup_call6_1st_window_g3

0x0002,

0xfeac,	// (0x0006e3b1) popup_call6_1st_window_g

0xee41,	// (0x0006d346) popup_call6_1st_window_t1

0xee50,	// (0x0006d355) popup_call6_1st_window_t2

0xee60,	// (0x0006d365) popup_call6_1st_window_t3

0x0002,

0xfeb3,	// (0x0006e3b8) popup_call6_1st_window_t

0xab7a,	// (0x0006907f) bg_popup_call2_in_pane_cp04

0xee29,	// (0x0006d32e) popup_call6_2nd_window_g1

0xee31,	// (0x0006d336) popup_call6_2nd_window_g2

0xee39,	// (0x0006d33e) popup_call6_2nd_window_g3

0x0002,

0xfeac,	// (0x0006e3b1) popup_call6_2nd_window_g

0xee41,	// (0x0006d346) popup_call6_2nd_window_t1

0x0d7d,	// (0x0005f282) bg_button_pane_cp15

0x9589,	// (0x00067a8e) cell_call6_btn_pane_g1

0x9592,	// (0x00067a97) cell_call6_btn_pane_t1

0x95a1,	// (0x00067aa6) listscroll_wgtman_pane_ParamLimits

0x95a1,	// (0x00067aa6) listscroll_wgtman_pane

0x95bd,	// (0x00067ac2) wgtman_btn_pane_ParamLimits

0x95bd,	// (0x00067ac2) wgtman_btn_pane

0xb39c,	// (0x000698a1) aid_scroll_copy1

0xee70,	// (0x0006d375) list_wgtman_pane

0x95f2,	// (0x00067af7) wgtman_btn_pane_g1_ParamLimits

0x95f2,	// (0x00067af7) wgtman_btn_pane_g1

0x961a,	// (0x00067b1f) wgtman_btn_pane_t1_ParamLimits

0x961a,	// (0x00067b1f) wgtman_btn_pane_t1

0xee7a,	// (0x0006d37f) wgtman_btn_pane_t2_ParamLimits

0xee7a,	// (0x0006d37f) wgtman_btn_pane_t2

0x0001,

0xfeba,	// (0x0006e3bf) wgtman_btn_pane_t_ParamLimits

0xfeba,	// (0x0006e3bf) wgtman_btn_pane_t

0x9651,	// (0x00067b56) listrow_wgtman_pane_ParamLimits

0x9651,	// (0x00067b56) listrow_wgtman_pane

0x9666,	// (0x00067b6b) listrow_wgtman_pane_g1

0x9673,	// (0x00067b78) listrow_wgtman_pane_g2

0x0001,

0xfebf,	// (0x0006e3c4) listrow_wgtman_pane_g

0x9691,	// (0x00067b96) listrow_wgtman_pane_t1

0x96a9,	// (0x00067bae) listrow_wgtman_pane_t2

0x0001,

0xfec4,	// (0x0006e3c9) listrow_wgtman_pane_t

0x96cf,	// (0x00067bd4) wait_bar_pane_cp09

0xee91,	// (0x0006d396) main_calllock_btn_pane

0xee9b,	// (0x0006d3a0) main_calllock_pane_g1

0x9e2b,	// (0x00068330) bg_button_pane_cp17

0xeea7,	// (0x0006d3ac) main_calllock_btn_pane_g1

0xeeb0,	// (0x0006d3b5) main_calllock_btn_pane_t1

0x9e2b,	// (0x00068330) main_dialer3_pane

0x9e2b,	// (0x00068330) main_fmrd2_pane

0xce39,	// (0x0006b33e) main_fs_bigclock_unlock_btn_pane_g1

0x96e9,	// (0x00067bee) main_fs_bigclock_unlock_btn_pane_t1

0x96f7,	// (0x00067bfc) area_fmrd2_info_pane_ParamLimits

0x96f7,	// (0x00067bfc) area_fmrd2_info_pane

0x9703,	// (0x00067c08) area_fmrd2_visual_pane_ParamLimits

0x9703,	// (0x00067c08) area_fmrd2_visual_pane

0x9711,	// (0x00067c16) fmrd2_indi_pane_ParamLimits

0x9711,	// (0x00067c16) fmrd2_indi_pane

0x971e,	// (0x00067c23) area_fmrd2_visual_pane_g1

0x9726,	// (0x00067c2b) area_fmrd2_visual_pane_t1

0x9736,	// (0x00067c3b) area_fmrd2_visual_pane_t2

0x9746,	// (0x00067c4b) area_fmrd2_visual_pane_t3

0x0002,

0xfece,	// (0x0006e3d3) area_fmrd2_visual_pane_t

0x9756,	// (0x00067c5b) area_fmrd2_info_pane_g1

0x975e,	// (0x00067c63) area_fmrd2_info_pane_t1

0x976e,	// (0x00067c73) area_fmrd2_info_pane_t2

0x977e,	// (0x00067c83) area_fmrd2_info_pane_t3

0x978e,	// (0x00067c93) area_fmrd2_info_pane_t4

0x0003,

0xfed5,	// (0x0006e3da) area_fmrd2_info_pane_t

0x979e,	// (0x00067ca3) fmrd2_indi_pane_t1

0x97ae,	// (0x00067cb3) fmrd2_indi_pane_t2

0x97be,	// (0x00067cc3) fmrd2_indi_pane_t3

0x0002,

0xfede,	// (0x0006e3e3) fmrd2_indi_pane_t

0x82eb,	// (0x000667f0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x82eb,	// (0x000667f0) list_single_fs_bigclock_indicator_pane_g5

0x83a0,	// (0x000668a5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x83a0,	// (0x000668a5) list_single_fs_bigclock_indicator_pane_t5

0x8edb,	// (0x000673e0) aid_cell_bcale_month_pane_ParamLimits

0x8edb,	// (0x000673e0) aid_cell_bcale_month_pane

0x8ef9,	// (0x000673fe) bcale_month_pane_ParamLimits

0x8ef9,	// (0x000673fe) bcale_month_pane

0x8f17,	// (0x0006741c) bcale_preview_pane_ParamLimits

0x8f17,	// (0x0006741c) bcale_preview_pane

0xec92,	// (0x0006d197) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb1,	// (0x0006d1b6) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb1,	// (0x0006d1b6) list_single_fs_bigclock_pane_t2

0x0001,

0xfe60,	// (0x0006e365) list_single_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x0006e365) list_single_fs_bigclock_pane_t

0x96e1,	// (0x00067be6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfec9,	// (0x0006e3ce) main_fs_bigclock_unlock_btn_pane_g

0x97ce,	// (0x00067cd3) aid_dia3_key_size_ParamLimits

0x97ce,	// (0x00067cd3) aid_dia3_key_size

0x97da,	// (0x00067cdf) aid_dia3_listrow_size_ParamLimits

0x97da,	// (0x00067cdf) aid_dia3_listrow_size

0x97ea,	// (0x00067cef) dia3_keypad_fun_pane_ParamLimits

0x97ea,	// (0x00067cef) dia3_keypad_fun_pane

0x97fa,	// (0x00067cff) dia3_keypad_num_pane_ParamLimits

0x97fa,	// (0x00067cff) dia3_keypad_num_pane

0x980a,	// (0x00067d0f) dia3_listscroll_pane_ParamLimits

0x980a,	// (0x00067d0f) dia3_listscroll_pane

0x9818,	// (0x00067d1d) dia3_numentry_pane_ParamLimits

0x9818,	// (0x00067d1d) dia3_numentry_pane

0xeebf,	// (0x0006d3c4) dia3_list_pane

0x9826,	// (0x00067d2b) scroll_pane_cp12

0x9e2b,	// (0x00068330) bg_dia3_numentry_pane

0x9831,	// (0x00067d36) dia3_numentry_pane_t1

0x9840,	// (0x00067d45) cell_dia3_key_num_pane

0x9848,	// (0x00067d4d) cell_dia3_key0_fun_pane_ParamLimits

0x9848,	// (0x00067d4d) cell_dia3_key0_fun_pane

0x9855,	// (0x00067d5a) cell_dia3_key1_fun_pane_ParamLimits

0x9855,	// (0x00067d5a) cell_dia3_key1_fun_pane

0x9862,	// (0x00067d67) dia3_listrow_pane

0xe2d8,	// (0x0006c7dd) bg_dia3_numentry_pane_g1

0x9e2b,	// (0x00068330) bg_button_pane_cp21

0x986f,	// (0x00067d74) cell_dia3_key_num_pane_t1

0x987d,	// (0x00067d82) cell_dia3_key_num_pane_t2

0x988c,	// (0x00067d91) cell_dia3_key_num_pane_t3

0x989b,	// (0x00067da0) cell_dia3_key_num_pane_t4

0x0003,

0xfee5,	// (0x0006e3ea) cell_dia3_key_num_pane_t

0x9e2b,	// (0x00068330) bg_button_pane_cp19

0x98aa,	// (0x00067daf) cell_dia3_key0_fun_pane_g1

0x9e2b,	// (0x00068330) bg_button_pane_cp20

0x98b2,	// (0x00067db7) cell_dia3_key1_fun_pane_g1

0x98ba,	// (0x00067dbf) area_left_week_number_pane

0x98cd,	// (0x00067dd2) area_top_day_name_pane

0x98db,	// (0x00067de0) frame_month_view_pane

0xeeca,	// (0x0006d3cf) grid_month_view_pane

0x98f0,	// (0x00067df5) cell_top_day_name_pane_ParamLimits

0x98f0,	// (0x00067df5) cell_top_day_name_pane

0x990c,	// (0x00067e11) cell_area_left_week_number_pane_ParamLimits

0x990c,	// (0x00067e11) cell_area_left_week_number_pane

0x992d,	// (0x00067e32) cell_month_view_pane_ParamLimits

0x992d,	// (0x00067e32) cell_month_view_pane

0xeed8,	// (0x0006d3dd) frm_month_g1

0x9959,	// (0x00067e5e) frm_month_g2

0x996a,	// (0x00067e6f) frm_month_g3

0x997b,	// (0x00067e80) frm_month_g4

0x998c,	// (0x00067e91) frm_month_g5

0x999d,	// (0x00067ea2) frm_month_g6

0x99b0,	// (0x00067eb5) frm_month_g7

0xeee5,	// (0x0006d3ea) frm_month_g8

0x99c3,	// (0x00067ec8) frm_month_g9

0x99d0,	// (0x00067ed5) frm_month_g10

0x99dd,	// (0x00067ee2) frm_month_g11

0x99ea,	// (0x00067eef) frm_month_g12

0x99f7,	// (0x00067efc) frm_month_g13

0x9a06,	// (0x00067f0b) frm_month_g14

0x9a15,	// (0x00067f1a) frm_month_g15

0x9a24,	// (0x00067f29) frm_month_g16

0x000f,

0xfeee,	// (0x0006e3f3) frm_month_g

0xeef2,	// (0x0006d3f7) cell_top_day_name_pane_t1

0x9a33,	// (0x00067f38) cell_area_left_week_number_pane_g1

0x9a42,	// (0x00067f47) cell_area_left_week_number_pane_t1

0xd060,	// (0x0006b565) cell_month_view_pane_g1

0x9a58,	// (0x00067f5d) cell_month_view_pane_t1

0x9e2b,	// (0x00068330) main_fps_pane

0xe715,	// (0x0006cc1a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe715,	// (0x0006cc1a) cmail_ddmenu_btn02_pane_cp1

0xe731,	// (0x0006cc36) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe731,	// (0x0006cc36) cmail_ddmenu_btn02_pane_cp2

0x91b5,	// (0x000676ba) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91b5,	// (0x000676ba) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe13,	// (0x0006e318) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe13,	// (0x0006e318) cmail_ddmenu_btn02_pane_g

0x91d3,	// (0x000676d8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91d3,	// (0x000676d8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe18,	// (0x0006e31d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe18,	// (0x0006e31d) cmail_ddmenu_btn02_pane_t

0x9a6e,	// (0x00067f73) fps_text_pane_ParamLimits

0x9a6e,	// (0x00067f73) fps_text_pane

0x9a7b,	// (0x00067f80) main_fps_pane_g1_ParamLimits

0x9a7b,	// (0x00067f80) main_fps_pane_g1

0x9a87,	// (0x00067f8c) wait_bar_pane_cp010_ParamLimits

0x9a87,	// (0x00067f8c) wait_bar_pane_cp010

0x9a93,	// (0x00067f98) fps_text_pane_t1_ParamLimits

0x9a93,	// (0x00067f98) fps_text_pane_t1

0x62a4,	// (0x000647a9) cam4_image_uncrop_pane_g1

0x62ad,	// (0x000647b2) cam4_image_uncrop_pane_g2

0x62b6,	// (0x000647bb) cam4_image_uncrop_pane_g3

0x62bf,	// (0x000647c4) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0006dddc) cam4_image_uncrop_pane_g

0x9862,	// (0x00067d67) dia3_listrow_pane_ParamLimits

0x9e2b,	// (0x00068330) main_phob2_pane

0x8d52,	// (0x00067257) cell_tport_appsw_pane_cp02_ParamLimits

0x8d52,	// (0x00067257) cell_tport_appsw_pane_cp02

0x8d61,	// (0x00067266) cell_tport_appsw_pane_cp03_ParamLimits

0x8d61,	// (0x00067266) cell_tport_appsw_pane_cp03

0x9e2b,	// (0x00068330) phob2_contact_card_pane

0x9e2b,	// (0x00068330) phob2_listscroll_pane

0xef05,	// (0x0006d40a) phob2_list_pane

0xef0d,	// (0x0006d412) scroll_pane_cp034

0x9aac,	// (0x00067fb1) phob2_cc_data_pane_ParamLimits

0x9aac,	// (0x00067fb1) phob2_cc_data_pane

0x9ac3,	// (0x00067fc8) phob2_cc_listscroll_pane_ParamLimits

0x9ac3,	// (0x00067fc8) phob2_cc_listscroll_pane

0x9adf,	// (0x00067fe4) list_double_large_graphic_phob2_pane_ParamLimits

0x9adf,	// (0x00067fe4) list_double_large_graphic_phob2_pane

0x9af7,	// (0x00067ffc) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9af7,	// (0x00067ffc) list_double_large_graphic_phob2_pane_g1

0x9b0d,	// (0x00068012) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9b0d,	// (0x00068012) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff0f,	// (0x0006e414) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff0f,	// (0x0006e414) list_double_large_graphic_phob2_pane_g

0x9b19,	// (0x0006801e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9b19,	// (0x0006801e) list_double_large_graphic_phob2_pane_t1

0x9b2e,	// (0x00068033) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9b2e,	// (0x00068033) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff14,	// (0x0006e419) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff14,	// (0x0006e419) list_double_large_graphic_phob2_pane_t

0x9e2b,	// (0x00068330) list_highlight_pane_cp024

0x9b40,	// (0x00068045) phob2_cc_button_pane

0x9b48,	// (0x0006804d) phob2_cc_data_pane_g1_ParamLimits

0x9b48,	// (0x0006804d) phob2_cc_data_pane_g1

0x9b5c,	// (0x00068061) phob2_cc_data_pane_g2_ParamLimits

0x9b5c,	// (0x00068061) phob2_cc_data_pane_g2

0x0001,

0xff19,	// (0x0006e41e) phob2_cc_data_pane_g_ParamLimits

0xff19,	// (0x0006e41e) phob2_cc_data_pane_g

0x9b6b,	// (0x00068070) phob2_cc_data_pane_t1_ParamLimits

0x9b6b,	// (0x00068070) phob2_cc_data_pane_t1

0x9b84,	// (0x00068089) phob2_cc_data_pane_t2_ParamLimits

0x9b84,	// (0x00068089) phob2_cc_data_pane_t2

0x9b9d,	// (0x000680a2) phob2_cc_data_pane_t3_ParamLimits

0x9b9d,	// (0x000680a2) phob2_cc_data_pane_t3

0x0002,

0xff1e,	// (0x0006e423) phob2_cc_data_pane_t_ParamLimits

0xff1e,	// (0x0006e423) phob2_cc_data_pane_t

0xef15,	// (0x0006d41a) phob2_cc_list_pane_ParamLimits

0xef15,	// (0x0006d41a) phob2_cc_list_pane

0xdeba,	// (0x0006c3bf) scroll_pane_cp035_ParamLimits

0xdeba,	// (0x0006c3bf) scroll_pane_cp035

0xb074,	// (0x00069579) bg_button_pane_cp033

0xef21,	// (0x0006d426) phob2_cc_button_pane_g1

0xef2d,	// (0x0006d432) phob2_cc_button_pane_t1

0xef42,	// (0x0006d447) phob2_cc_button_pane_t2

0x0001,

0xff25,	// (0x0006e42a) phob2_cc_button_pane_t

0x9bb6,	// (0x000680bb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9bb6,	// (0x000680bb) list_double_large_graphic_phob2_cc_pane

0x9c05,	// (0x0006810a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9c05,	// (0x0006810a) list_double_large_graphic_phob2_cc_pane_g1

0x9c16,	// (0x0006811b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9c16,	// (0x0006811b) list_double_large_graphic_phob2_cc_pane_g2

0x9c22,	// (0x00068127) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9c22,	// (0x00068127) list_double_large_graphic_phob2_cc_pane_g3

0x9c2e,	// (0x00068133) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9c2e,	// (0x00068133) list_double_large_graphic_phob2_cc_pane_g4

0x9c3a,	// (0x0006813f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9c3a,	// (0x0006813f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2a,	// (0x0006e42f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2a,	// (0x0006e42f) list_double_large_graphic_phob2_cc_pane_g

0x9c46,	// (0x0006814b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9c46,	// (0x0006814b) list_double_large_graphic_phob2_cc_pane_t1

0x9c6f,	// (0x00068174) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9c6f,	// (0x00068174) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff35,	// (0x0006e43a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff35,	// (0x0006e43a) list_double_large_graphic_phob2_cc_pane_t

0xef54,	// (0x0006d459) list_highlight_pane_cp025_ParamLimits

0xef54,	// (0x0006d459) list_highlight_pane_cp025

0xb074,	// (0x00069579) bg_button_pane_cp033_ParamLimits

0xef21,	// (0x0006d426) phob2_cc_button_pane_g1_ParamLimits

0xef2d,	// (0x0006d432) phob2_cc_button_pane_t1_ParamLimits

0xef42,	// (0x0006d447) phob2_cc_button_pane_t2_ParamLimits

0xff25,	// (0x0006e42a) phob2_cc_button_pane_t_ParamLimits

0x0d71,	// (0x0005f276) popup_wgtman_window

0xd945,	// (0x0006be4a) scroll_pane_cp038

0x95da,	// (0x00067adf) wgtman_btn_pane_cp_01_ParamLimits

0x95da,	// (0x00067adf) wgtman_btn_pane_cp_01

0xef62,	// (0x0006d467) wgtman_content_pane

0xef6b,	// (0x0006d470) wgtman_heading_pane

0x9e2b,	// (0x00068330) bg_heading_pane_cp02

0xefa2,	// (0x0006d4a7) wgtman_heading_pane_g1

0xefaa,	// (0x0006d4af) wgtman_heading_pane_t1

0xefb8,	// (0x0006d4bd) scroll_pane_cp036

0xefc0,	// (0x0006d4c5) wgtman_list_pane

0xef74,	// (0x0006d479) wgtman_list_pane_t1_ParamLimits

0xef74,	// (0x0006d479) wgtman_list_pane_t1

0x6201,	// (0x00064706) cam4_grid_pane

0x6fe7,	// (0x000654ec) bg_button_pane_cp015_ParamLimits

0x6ff9,	// (0x000654fe) bg_button_pane_cp016_ParamLimits

0x700c,	// (0x00065511) bg_button_pane_cp017_ParamLimits

0x7062,	// (0x00065567) popup_vitu2_query_window_g3_ParamLimits

0x7062,	// (0x00065567) popup_vitu2_query_window_g3

0x7121,	// (0x00065626) popup_vitu2_query_window_t6_ParamLimits

0x7121,	// (0x00065626) popup_vitu2_query_window_t6

0x714c,	// (0x00065651) popup_vitu2_query_window_t7_ParamLimits

0x714c,	// (0x00065651) popup_vitu2_query_window_t7

0xef8e,	// (0x0006d493) cam4_grid_pane_g1

0xef97,	// (0x0006d49c) cam4_grid_pane_g2

0xefc8,	// (0x0006d4cd) cam4_grid_pane_g3

0xefd1,	// (0x0006d4d6) cam4_grid_pane_g4

0x0003,

0xff3a,	// (0x0006e43f) cam4_grid_pane_g

0x1db4,	// (0x000602b9) aid_placing_vt_slider_lsc_ParamLimits

0x20e7,	// (0x000605ec) vidtel_button_pane_ParamLimits

0x20e7,	// (0x000605ec) vidtel_button_pane

0x9e2b,	// (0x00068330) bg_button_pane_cp034

0xefdc,	// (0x0006d4e1) vidtel_button_pane_g1

0xefe4,	// (0x0006d4e9) vidtel_button_pane_t1

0xda49,	// (0x0006bf4e) aid_size_vtel_slider_touch

0xdeba,	// (0x0006c3bf) scroll_pane_cp039

0x7f92,	// (0x00066497) ncim_query_button_pane_cp01_ParamLimits

0x7fb1,	// (0x000664b6) ncimui_query_pane_g1_ParamLimits

0xb074,	// (0x00069579) input_focus_pane_cp012_ParamLimits

0xe316,	// (0x0006c81b) ncim_query_entry_pane_t1_ParamLimits

0xdeba,	// (0x0006c3bf) scroll_pane_cp039_ParamLimits

0xb473,	// (0x00069978) navi_pane_bcale_mc_g1

0xb47b,	// (0x00069980) navi_pane_bcale_mc_t1

0xe767,	// (0x0006cc6c) main_sp_fs_email_pane_g1

0xe773,	// (0x0006cc78) main_sp_fs_email_pane_g2

0x0001,

0xfccb,	// (0x0006e1d0) main_sp_fs_email_pane_g

0xea03,	// (0x0006cf08) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea03,	// (0x0006cf08) list_single_cale_mrui_row_pane_g3

0x91f3,	// (0x000676f8) list_single_recal_day_pane_g5_event_pane

0xaa8a,	// (0x00068f8f) list_single_recal_day_pane_g7

0xeffa,	// (0x0006d4ff) list_recal_day_event_pane_cp01

0xf003,	// (0x0006d508) list_recal_vselct_arw_lo_pane_cp01

0xf00b,	// (0x0006d510) list_recal_vselct_arw_up_pane_cp01

0xf013,	// (0x0006d518) list_recal_vselct_pane_cp01

0xda6b,	// (0x0006bf70) list_recal_day_event_pane_cp01_g1

0xaabf,	// (0x00068fc4) list_recal_day_event_pane_cp01_t1

0xaa92,	// (0x00068f97) list_single_recal_day_pane_t1_ParamLimits

0xaaa4,	// (0x00068fa9) list_single_recal_day_pane_t2_ParamLimits

0xfe28,	// (0x0006e32d) list_single_recal_day_pane_t_ParamLimits

0xa4d8,	// (0x000689dd) bg_notes_pane_ParamLimits

0xa57b,	// (0x00068a80) list_notes_pane_ParamLimits

0x1095,	// (0x0005f59a) scroll_pane_cp06_ParamLimits

0xa59d,	// (0x00068aa2) main_notes_pane_ParamLimits

0xb074,	// (0x00069579) main_welc_pane

0x9ca7,	// (0x000681ac) main_welc_body_pane_ParamLimits

0x9ca7,	// (0x000681ac) main_welc_body_pane

0x9cc2,	// (0x000681c7) main_welc_opti_pane_ParamLimits

0x9cc2,	// (0x000681c7) main_welc_opti_pane

0x9d03,	// (0x00068208) main_welc_pane_t1_ParamLimits

0x9d03,	// (0x00068208) main_welc_pane_t1

0x9d65,	// (0x0006826a) main_welc_body_row_pane_ParamLimits

0x9d65,	// (0x0006826a) main_welc_body_row_pane

0xd3b1,	// (0x0006b8b6) main_welc_opti_row_pane_ParamLimits

0xd3b1,	// (0x0006b8b6) main_welc_opti_row_pane

0xf01d,	// (0x0006d522) main_welc_opti_row_pane_g1

0x9d7f,	// (0x00068284) main_welc_opti_row_pane_t1

0xf025,	// (0x0006d52a) main_welc_body_row_pane_t1

0xed69,	// (0x0006d26e) popup_notif_wgt_heading_pane

0xed83,	// (0x0006d288) aid_size_list_notif_wgt_del_ParamLimits

0xed90,	// (0x0006d295) list_notif_wgt_row_pane_g1_ParamLimits

0xed9c,	// (0x0006d2a1) list_notif_wgt_row_pane_g2_ParamLimits

0xedab,	// (0x0006d2b0) list_notif_wgt_row_pane_g3_ParamLimits

0xfe8f,	// (0x0006e394) list_notif_wgt_row_pane_g_ParamLimits

0xedb8,	// (0x0006d2bd) list_notif_wgt_row_pane_t1_ParamLimits

0xedce,	// (0x0006d2d3) list_notif_wgt_row_pane_t2_ParamLimits

0xede0,	// (0x0006d2e5) list_notif_wgt_row_pane_t3_ParamLimits

0xfe96,	// (0x0006e39b) list_notif_wgt_row_pane_t_ParamLimits

0x9666,	// (0x00067b6b) listrow_wgtman_pane_g1_ParamLimits

0x9673,	// (0x00067b78) listrow_wgtman_pane_g2_ParamLimits

0xfebf,	// (0x0006e3c4) listrow_wgtman_pane_g_ParamLimits

0x9691,	// (0x00067b96) listrow_wgtman_pane_t1_ParamLimits

0x96a9,	// (0x00067bae) listrow_wgtman_pane_t2_ParamLimits

0xfec4,	// (0x0006e3c9) listrow_wgtman_pane_t_ParamLimits

0x96cf,	// (0x00067bd4) wait_bar_pane_cp09_ParamLimits

0x9e2b,	// (0x00068330) bg_popup_heading_pane_cp02

0xf034,	// (0x0006d539) popup_notif_wgt_heading_pane_g1

0xf03c,	// (0x0006d541) popup_notif_wgt_heading_pane_t1

0x9e2b,	// (0x00068330) main_vids_pane

0x9e2b,	// (0x00068330) vids_listscroll_pane

0x9d8e,	// (0x00068293) scroll_pane_cp040

0x9e2b,	// (0x00068330) vids_list_pane

0x9d99,	// (0x0006829e) vids_list_double_pane_ParamLimits

0x9d99,	// (0x0006829e) vids_list_double_pane

0x9dad,	// (0x000682b2) vids_list_double_pane_g1

0x9db6,	// (0x000682bb) vids_list_double_pane_t1

0x9dc6,	// (0x000682cb) vids_list_double_pane_t2

0x0001,

0xff51,	// (0x0006e456) vids_list_double_pane_t

0x4128,	// (0x0006262d) main_ncimui_pane_ParamLimits

0x7dd3,	// (0x000662d8) main_ncimui_pane_g1_ParamLimits

0x7de1,	// (0x000662e6) main_ncimui_pane_g2_ParamLimits

0x7de1,	// (0x000662e6) main_ncimui_pane_g2

0x0001,

0xfbcc,	// (0x0006e0d1) main_ncimui_pane_g_ParamLimits

0xfbcc,	// (0x0006e0d1) main_ncimui_pane_g

0x9cdd,	// (0x000681e2) main_welc_pane_g1_ParamLimits

0x9cdd,	// (0x000681e2) main_welc_pane_g1

0x9ce9,	// (0x000681ee) main_welc_pane_g2_ParamLimits

0x9ce9,	// (0x000681ee) main_welc_pane_g2

0x0002,

0xff43,	// (0x0006e448) main_welc_pane_g_ParamLimits

0xff43,	// (0x0006e448) main_welc_pane_g

0xa4d8,	// (0x000689dd) listscroll_mce_pane_ParamLimits

0xb5ca,	// (0x00069acf) wait_bar_pane_cp10

0xc9f5,	// (0x0006aefa) main_cale_day_pane_ParamLimits

0xc9f5,	// (0x0006aefa) main_cale_week_pane_ParamLimits

0xa4d8,	// (0x000689dd) main_messa_pane_ParamLimits

0x551b,	// (0x00063a20) main_clock2_btn_pane_ParamLimits

0x551b,	// (0x00063a20) main_clock2_btn_pane

0xd1e8,	// (0x0006b6ed) main_clock2_btn_pane_cp01_ParamLimits

0xd1e8,	// (0x0006b6ed) main_clock2_btn_pane_cp01

0xe9d4,	// (0x0006ced9) list_cale_mrui_pane_ParamLimits

0xee16,	// (0x0006d31b) main_cf0_pane_g2

0x0001,

0xfe9d,	// (0x0006e3a2) main_cf0_pane_g

0x98ba,	// (0x00067dbf) area_left_week_number_pane_ParamLimits

0x98cd,	// (0x00067dd2) area_top_day_name_pane_ParamLimits

0x98db,	// (0x00067de0) frame_month_view_pane_ParamLimits

0xeeca,	// (0x0006d3cf) grid_month_view_pane_ParamLimits

0xeed8,	// (0x0006d3dd) frm_month_g1_ParamLimits

0x9959,	// (0x00067e5e) frm_month_g2_ParamLimits

0x996a,	// (0x00067e6f) frm_month_g3_ParamLimits

0x997b,	// (0x00067e80) frm_month_g4_ParamLimits

0x998c,	// (0x00067e91) frm_month_g5_ParamLimits

0x999d,	// (0x00067ea2) frm_month_g6_ParamLimits

0x99b0,	// (0x00067eb5) frm_month_g7_ParamLimits

0xeee5,	// (0x0006d3ea) frm_month_g8_ParamLimits

0x99c3,	// (0x00067ec8) frm_month_g9_ParamLimits

0x99d0,	// (0x00067ed5) frm_month_g10_ParamLimits

0x99dd,	// (0x00067ee2) frm_month_g11_ParamLimits

0x99ea,	// (0x00067eef) frm_month_g12_ParamLimits

0x99f7,	// (0x00067efc) frm_month_g13_ParamLimits

0x9a06,	// (0x00067f0b) frm_month_g14_ParamLimits

0x9a15,	// (0x00067f1a) frm_month_g15_ParamLimits

0x9a24,	// (0x00067f29) frm_month_g16_ParamLimits

0xfeee,	// (0x0006e3f3) frm_month_g_ParamLimits

0xeef2,	// (0x0006d3f7) cell_top_day_name_pane_t1_ParamLimits

0x9a33,	// (0x00067f38) cell_area_left_week_number_pane_g1_ParamLimits

0x9a42,	// (0x00067f47) cell_area_left_week_number_pane_t1_ParamLimits

0xd060,	// (0x0006b565) cell_month_view_pane_g1_ParamLimits

0x9a58,	// (0x00067f5d) cell_month_view_pane_t1_ParamLimits

0xa4d0,	// (0x000689d5) main_clock2_btn_pane_g1

0xf04a,	// (0x0006d54f) main_clock2_btn_pane_t1

0xb074,	// (0x00069579) listscroll_cmail_pane_ParamLimits

0xe767,	// (0x0006cc6c) main_sp_fs_email_pane_g1_ParamLimits

0xe773,	// (0x0006cc78) main_sp_fs_email_pane_g2_ParamLimits

0xfccb,	// (0x0006e1d0) main_sp_fs_email_pane_g_ParamLimits

0xeaf3,	// (0x0006cff8) list_recal_day_pane_ParamLimits

0xeb04,	// (0x0006d009) mian_recal_day_pane_t1

0x8a0f,	// (0x00066f14) list_single_dyc_row_text_pane_t4_ParamLimits

0x8a0f,	// (0x00066f14) list_single_dyc_row_text_pane_t4

0x8a4c,	// (0x00066f51) list_single_dyc_row_text_pane_t5_ParamLimits

0x8a4c,	// (0x00066f51) list_single_dyc_row_text_pane_t5

0xa7ff,	// (0x00068d04) list_single_dyc_row_text_pane_t6_ParamLimits

0xa7ff,	// (0x00068d04) list_single_dyc_row_text_pane_t6

0x2ed6,	// (0x000613db) aid_mgn_list_cale_time_pane

0x4128,	// (0x0006262d) main_gallery2_pane_ParamLimits

0xd1fc,	// (0x0006b701) main_clock2_pane_cp01_t1

0xd20a,	// (0x0006b70f) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0006dcae) main_clock2_pane_cp01_t

0x159f,	// (0x0005faa4) cale_week_scroll_pane_g16_ParamLimits

0x159f,	// (0x0005faa4) cale_week_scroll_pane_g16

0xab7a,	// (0x0006907f) vorec_slider_pane

0xefe4,	// (0x0006d4e9) vidtel_button_pane_t1_ParamLimits

0x924e,	// (0x00067753) main_fs_bigclock_clock_pane_g1_ParamLimits

0x924e,	// (0x00067753) main_fs_bigclock_clock_pane_g2_ParamLimits

0x925d,	// (0x00067762) main_fs_bigclock_clock_pane_g3_ParamLimits

0x925d,	// (0x00067762) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4b,	// (0x0006e350) main_fs_bigclock_clock_pane_g_ParamLimits

0x926d,	// (0x00067772) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9282,	// (0x00067787) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe54,	// (0x0006e359) main_fs_bigclock_clock_pane_t_ParamLimits

0x4d71,	// (0x00063276) main_mup3_lyrics_pane_ParamLimits

0x4d71,	// (0x00063276) main_mup3_lyrics_pane

0x9dfc,	// (0x00068301) main_mup3_lyrics_pane_t1_ParamLimits

0x9dfc,	// (0x00068301) main_mup3_lyrics_pane_t1

0x5b64,	// (0x00064069) aid_main_mp4_pane_t1_area

0x5b6e,	// (0x00064073) aid_main_mp4_pane_t2_area

0x5c7b,	// (0x00064180) main_mp4_pane_g7_ParamLimits

0x5c7b,	// (0x00064180) main_mp4_pane_g7

0x5c87,	// (0x0006418c) main_mp4_pane_g8_ParamLimits

0x5c87,	// (0x0006418c) main_mp4_pane_g8

0x60a5,	// (0x000645aa) aid_call6_pane_g1_size

0x9be4,	// (0x000680e9) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9be4,	// (0x000680e9) list_double_large_graphic_phob2_other_pane

0x9e23,	// (0x00068328) list_double_large_graphic_phob2_other_pane_g1

0x9e2b,	// (0x00068330) list_highlight_pane_cp026

0xb074,	// (0x00069579) main_welc_pane_ParamLimits

0x8735,	// (0x00066c3a) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8735,	// (0x00066c3a) main_sp_fs_ctrlbar_pane_g3

0x874f,	// (0x00066c54) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x874f,	// (0x00066c54) main_sp_fs_ctrlbar_pane_g4

0x8781,	// (0x00066c86) toolbar2_fixed_button_pane_cp01

0x878c,	// (0x00066c91) toolbar2_fixed_button_pane_cp02

0x8799,	// (0x00066c9e) toolbar2_fixed_button_pane_cp03

0x9c98,	// (0x0006819d) list_welc_entry_pane_ParamLimits

0x9c98,	// (0x0006819d) list_welc_entry_pane

0x9cf7,	// (0x000681fc) main_welc_pane_g3_ParamLimits

0x9cf7,	// (0x000681fc) main_welc_pane_g3

0x9d21,	// (0x00068226) main_welc_pane_t2_ParamLimits

0x9d21,	// (0x00068226) main_welc_pane_t2

0x9d35,	// (0x0006823a) main_welc_pane_t3_ParamLimits

0x9d35,	// (0x0006823a) main_welc_pane_t3

0x0002,

0xff4a,	// (0x0006e44f) main_welc_pane_t_ParamLimits

0xff4a,	// (0x0006e44f) main_welc_pane_t

0x9d49,	// (0x0006824e) welc_button_pane_ParamLimits

0x9d49,	// (0x0006824e) welc_button_pane

0x9d57,	// (0x0006825c) welc_service_logo_pane_ParamLimits

0x9d57,	// (0x0006825c) welc_service_logo_pane

0xf058,	// (0x0006d55d) list_single_welc_entry_pane_ParamLimits

0xf058,	// (0x0006d55d) list_single_welc_entry_pane

0xf06b,	// (0x0006d570) list_single_welc_entry_pane_g1

0xf073,	// (0x0006d578) list_single_welc_entry_pane_t1

0xf081,	// (0x0006d586) list_single_welc_entry_pane_t2

0x0001,

0xff56,	// (0x0006e45b) list_single_welc_entry_pane_t

0x9e2b,	// (0x00068330) bg_button_pane_cp035

0xf08f,	// (0x0006d594) welc_button_pane_t1

0xf09d,	// (0x0006d5a2) welc_service_logo_pane_g1

0xf0a6,	// (0x0006d5ab) welc_service_logo_pane_g2

0x0001,

0xff5b,	// (0x0006e460) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
