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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00024ce9 };

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
0x22a6,	// (0x00026f8f) Screen

0x22b2,	// (0x00026f9b) application_window

0x231c,	// (0x00027005) area_bottom_pane_ParamLimits

0x231c,	// (0x00027005) area_bottom_pane

0x237a,	// (0x00027063) area_top_pane_ParamLimits

0x237a,	// (0x00027063) area_top_pane

0x23d7,	// (0x000270c0) call_video_uplink_pane_ParamLimits

0x23d7,	// (0x000270c0) call_video_uplink_pane

0x2408,	// (0x000270f1) main_pane_ParamLimits

0x2408,	// (0x000270f1) main_pane

0xbf3b,	// (0x00030c24) context_pane

0x68da,	// (0x0002b5c3) navi_pane

0x690a,	// (0x0002b5f3) popup_cale_events_window_ParamLimits

0x690a,	// (0x0002b5f3) popup_cale_events_window

0xbf4e,	// (0x00030c37) popup_mup_playback_window

0x6922,	// (0x0002b60b) signal_pane

0x2f3b,	// (0x00027c24) main_browser_pane

0x5457,	// (0x0002a140) main_burst_pane

0x65dc,	// (0x0002b2c5) main_calc_pane

0x5457,	// (0x0002a140) main_cale_day_pane

0x2f3b,	// (0x00027c24) main_cale_month_pane

0x5457,	// (0x0002a140) main_cale_week_pane

0x5457,	// (0x0002a140) main_call_pane

0x2a0a,	// (0x000276f3) main_call_poc_pane

0x5457,	// (0x0002a140) main_camera_pane

0x5457,	// (0x0002a140) main_chi_dic_pane

0x4fb0,	// (0x00029c99) main_clock_pane

0x2a0a,	// (0x000276f3) main_fmradio_pane

0x5457,	// (0x0002a140) main_graph_messa_pane

0x2a0a,	// (0x000276f3) main_help_pane

0x2f3b,	// (0x00027c24) main_im_pane

0x2c65,	// (0x0002794e) main_image_pane_ParamLimits

0x2c65,	// (0x0002794e) main_image_pane

0x2a0a,	// (0x000276f3) main_location2_pane

0x5457,	// (0x0002a140) main_location_pane

0x2a0a,	// (0x000276f3) main_messa_pane

0x2a0a,	// (0x000276f3) main_mp2_pane

0x5457,	// (0x0002a140) main_mp_pane

0x2a0a,	// (0x000276f3) main_msg_pane

0x2a0a,	// (0x000276f3) main_mup_eq_pane

0x2a0a,	// (0x000276f3) main_mup_pane

0x5457,	// (0x0002a140) main_notes_pane

0x2a0a,	// (0x000276f3) main_pec_pane

0x2a0a,	// (0x000276f3) main_phob_pane

0x2a0a,	// (0x000276f3) main_pinb_pane

0x2a0a,	// (0x000276f3) main_postcard_pane

0x2a0a,	// (0x000276f3) main_qdial_pane

0x5457,	// (0x0002a140) main_skin_pane

0x2a0a,	// (0x000276f3) main_smil2_pane

0x5457,	// (0x0002a140) main_smil_pane

0x5457,	// (0x0002a140) main_video_pane

0x5457,	// (0x0002a140) main_video_tele_pane

0x2c65,	// (0x0002794e) main_viewer_pane_ParamLimits

0x2c65,	// (0x0002794e) main_viewer_pane

0x5457,	// (0x0002a140) main_vorec_pane

0x6632,	// (0x0002b31b) popup_blid_sat_info_window_ParamLimits

0x6632,	// (0x0002b31b) popup_blid_sat_info_window

0x6696,	// (0x0002b37f) popup_dyc_status_message_window_ParamLimits

0x6696,	// (0x0002b37f) popup_dyc_status_message_window

0x66b0,	// (0x0002b399) popup_grid_large_graphic_window_ParamLimits

0x66b0,	// (0x0002b399) popup_grid_large_graphic_window

0x6772,	// (0x0002b45b) popup_loc_request_window_ParamLimits

0x6772,	// (0x0002b45b) popup_loc_request_window

0x68ae,	// (0x0002b597) popup_wml_address_window_ParamLimits

0x68ae,	// (0x0002b597) popup_wml_address_window

0x641a,	// (0x0002b103) call_muted_g1

0x60ab,	// (0x0002ad94) popup_call_audio_conf_window_ParamLimits

0x60ab,	// (0x0002ad94) popup_call_audio_conf_window

0x642a,	// (0x0002b113) popup_call_audio_first_window_ParamLimits

0x642a,	// (0x0002b113) popup_call_audio_first_window

0x64a0,	// (0x0002b189) popup_call_audio_in_window_ParamLimits

0x64a0,	// (0x0002b189) popup_call_audio_in_window

0x64dc,	// (0x0002b1c5) popup_call_audio_out_window_ParamLimits

0x64dc,	// (0x0002b1c5) popup_call_audio_out_window

0x6516,	// (0x0002b1ff) popup_call_audio_second_window_ParamLimits

0x6516,	// (0x0002b1ff) popup_call_audio_second_window

0x656c,	// (0x0002b255) popup_call_audio_wait_window_ParamLimits

0x656c,	// (0x0002b255) popup_call_audio_wait_window

0x65a1,	// (0x0002b28a) popup_number_entry_window_ParamLimits

0x65a1,	// (0x0002b28a) popup_number_entry_window

0x259e,	// (0x00027287) bg_popup_call_pane_cp05_ParamLimits

0x259e,	// (0x00027287) bg_popup_call_pane_cp05

0x25be,	// (0x000272a7) popup_number_entry_window_t1

0x25d1,	// (0x000272ba) popup_number_entry_window_t2

0x25e3,	// (0x000272cc) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00033e18) popup_number_entry_window_t

0x262a,	// (0x00027313) text_title_cp2

0x263d,	// (0x00027326) bg_popup_call_pane_cp_ParamLimits

0x263d,	// (0x00027326) bg_popup_call_pane_cp

0x264b,	// (0x00027334) call_thumbnail_pane

0x2653,	// (0x0002733c) popup_call_audio_in_window_g1_ParamLimits

0x2653,	// (0x0002733c) popup_call_audio_in_window_g1

0x265f,	// (0x00027348) popup_call_audio_in_window_g2_ParamLimits

0x265f,	// (0x00027348) popup_call_audio_in_window_g2

0x266b,	// (0x00027354) popup_call_audio_in_window_g3_ParamLimits

0x266b,	// (0x00027354) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00033e21) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00033e21) popup_call_audio_in_window_g

0x2677,	// (0x00027360) popup_call_audio_in_window_t1_ParamLimits

0x2677,	// (0x00027360) popup_call_audio_in_window_t1

0x2693,	// (0x0002737c) popup_call_audio_in_window_t2_ParamLimits

0x2693,	// (0x0002737c) popup_call_audio_in_window_t2

0x26af,	// (0x00027398) popup_call_audio_in_window_t3_ParamLimits

0x26af,	// (0x00027398) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00033e28) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00033e28) popup_call_audio_in_window_t

0x263d,	// (0x00027326) bg_popup_call_pane_cp01_ParamLimits

0x263d,	// (0x00027326) bg_popup_call_pane_cp01

0x264b,	// (0x00027334) call_thumbnail_pane_cp02

0x26c2,	// (0x000273ab) call_type_pane_cp022

0x26ca,	// (0x000273b3) popup_call_audio_out_window_g1_ParamLimits

0x26ca,	// (0x000273b3) popup_call_audio_out_window_g1

0x26dc,	// (0x000273c5) popup_call_audio_out_window_g2_ParamLimits

0x26dc,	// (0x000273c5) popup_call_audio_out_window_g2

0x26e8,	// (0x000273d1) popup_call_audio_out_window_g3_ParamLimits

0x26e8,	// (0x000273d1) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x00033e2f) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x00033e2f) popup_call_audio_out_window_g

0x26fa,	// (0x000273e3) popup_call_audio_out_window_t1_ParamLimits

0x26fa,	// (0x000273e3) popup_call_audio_out_window_t1

0x2712,	// (0x000273fb) popup_call_audio_out_window_t2_ParamLimits

0x2712,	// (0x000273fb) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00033e36) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00033e36) popup_call_audio_out_window_t

0x2727,	// (0x00027410) bg_popup_call_pane_ParamLimits

0x2727,	// (0x00027410) bg_popup_call_pane

0x27ab,	// (0x00027494) call_thumbnail_pane_cp_ParamLimits

0x27ab,	// (0x00027494) call_thumbnail_pane_cp

0x27cf,	// (0x000274b8) call_type_pane_cp01_ParamLimits

0x27cf,	// (0x000274b8) call_type_pane_cp01

0x2813,	// (0x000274fc) popup_call_audio_first_window_g1_ParamLimits

0x2813,	// (0x000274fc) popup_call_audio_first_window_g1

0x285f,	// (0x00027548) popup_call_audio_first_window_g2_ParamLimits

0x285f,	// (0x00027548) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00033e3b) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00033e3b) popup_call_audio_first_window_g

0x28a3,	// (0x0002758c) popup_call_audio_first_window_t1_ParamLimits

0x28a3,	// (0x0002758c) popup_call_audio_first_window_t1

0x294f,	// (0x00027638) popup_call_audio_first_window_t4_ParamLimits

0x294f,	// (0x00027638) popup_call_audio_first_window_t4

0x29db,	// (0x000276c4) popup_call_audio_first_window_t5_ParamLimits

0x29db,	// (0x000276c4) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00033e40) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00033e40) popup_call_audio_first_window_t

0x2a0a,	// (0x000276f3) bg_popup_call_pane_cp02

0x2a14,	// (0x000276fd) call_type_pane_cp023

0x2a1c,	// (0x00027705) popup_call_audio_wait_window_g1

0x2a24,	// (0x0002770d) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00033e47) popup_call_audio_wait_window_g

0x2a2c,	// (0x00027715) popup_call_audio_wait_window_t3

0x2a3a,	// (0x00027723) bg_popup_call_pane_cp03_ParamLimits

0x2a3a,	// (0x00027723) bg_popup_call_pane_cp03

0x2a9a,	// (0x00027783) call_thumbnail_pane_cp011_ParamLimits

0x2a9a,	// (0x00027783) call_thumbnail_pane_cp011

0x2aa6,	// (0x0002778f) call_type_pane_cp034_ParamLimits

0x2aa6,	// (0x0002778f) call_type_pane_cp034

0x2ae2,	// (0x000277cb) popup_call_audio_second_window_g1_ParamLimits

0x2ae2,	// (0x000277cb) popup_call_audio_second_window_g1

0x2b1e,	// (0x00027807) popup_call_audio_second_window_g2_ParamLimits

0x2b1e,	// (0x00027807) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00033e4c) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00033e4c) popup_call_audio_second_window_g

0x2b5a,	// (0x00027843) popup_call_audio_second_window_t1_ParamLimits

0x2b5a,	// (0x00027843) popup_call_audio_second_window_t1

0x2bdb,	// (0x000278c4) popup_call_audio_second_window_t2_ParamLimits

0x2bdb,	// (0x000278c4) popup_call_audio_second_window_t2

0x2c11,	// (0x000278fa) popup_call_audio_second_window_t3_ParamLimits

0x2c11,	// (0x000278fa) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00033e51) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00033e51) popup_call_audio_second_window_t

0x2a0a,	// (0x000276f3) bg_popup_call_pane_cp04

0x2c47,	// (0x00027930) list_conf_pane

0x2c4f,	// (0x00027938) popup_call_audio_conf_window_t1

0x2c5d,	// (0x00027946) call_thumbnail_pane_g1

0x2c65,	// (0x0002794e) bg_pinb_pane_ParamLimits

0x2c65,	// (0x0002794e) bg_pinb_pane

0x2c73,	// (0x0002795c) find_pinb_pane

0x2c7c,	// (0x00027965) listscroll_pinb_pane_ParamLimits

0x2c7c,	// (0x00027965) listscroll_pinb_pane

0x2c8b,	// (0x00027974) pinb_bg_pane_g1

0x2c95,	// (0x0002797e) pinb_bg_pane_g2

0x2ca1,	// (0x0002798a) pinb_bg_pane_g3

0x2cad,	// (0x00027996) pinb_bg_pane_g4

0x2cb9,	// (0x000279a2) pinb_bg_pane_g5

0x2cc5,	// (0x000279ae) pinb_bg_pane_g6

0x2cd0,	// (0x000279b9) pinb_bg_pane_g7

0x2cdb,	// (0x000279c4) pinb_bg_pane_g8

0x2ce6,	// (0x000279cf) pinb_bg_pane_g9

0x2cf0,	// (0x000279d9) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00033e58) pinb_bg_pane_g

0x2d0d,	// (0x000279f6) grid_pinb_pane

0x2d18,	// (0x00027a01) list_pinb_pane

0x2d23,	// (0x00027a0c) scroll_pane_cp01_ParamLimits

0x2d23,	// (0x00027a0c) scroll_pane_cp01

0x2d35,	// (0x00027a1e) find_pinb_pane_g1_ParamLimits

0x2d35,	// (0x00027a1e) find_pinb_pane_g1

0x2d4d,	// (0x00027a36) find_pinb_pane_t1

0x2d5f,	// (0x00027a48) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00033e72) find_pinb_pane_t

0x2d74,	// (0x00027a5d) input_focus_pane_cp01_ParamLimits

0x2d74,	// (0x00027a5d) input_focus_pane_cp01

0x2d80,	// (0x00027a69) cell_pinb_pane_ParamLimits

0x2d80,	// (0x00027a69) cell_pinb_pane

0x2da2,	// (0x00027a8b) cell_pinb_pane_g1_ParamLimits

0x2da2,	// (0x00027a8b) cell_pinb_pane_g1

0x2db6,	// (0x00027a9f) cell_pinb_pane_g2_ParamLimits

0x2db6,	// (0x00027a9f) cell_pinb_pane_g2

0x2dc2,	// (0x00027aab) cell_pinb_pane_g3_ParamLimits

0x2dc2,	// (0x00027aab) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x00033e77) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x00033e77) cell_pinb_pane_g

0x2a0a,	// (0x000276f3) grid_highlight_pane_cp01

0x2dce,	// (0x00027ab7) list_pinb_item_pane_ParamLimits

0x2dce,	// (0x00027ab7) list_pinb_item_pane

0x2a0a,	// (0x000276f3) list_highlight_pane_cp02

0x2de1,	// (0x00027aca) list_pinb_item_pane_g1_ParamLimits

0x2de1,	// (0x00027aca) list_pinb_item_pane_g1

0x2dee,	// (0x00027ad7) list_pinb_item_pane_g2_ParamLimits

0x2dee,	// (0x00027ad7) list_pinb_item_pane_g2

0x2dfa,	// (0x00027ae3) list_pinb_item_pane_g3_ParamLimits

0x2dfa,	// (0x00027ae3) list_pinb_item_pane_g3

0x2e0b,	// (0x00027af4) list_pinb_item_pane_g4_ParamLimits

0x2e0b,	// (0x00027af4) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00033e7e) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00033e7e) list_pinb_item_pane_g

0x2e17,	// (0x00027b00) list_pinb_item_pane_t1_ParamLimits

0x2e17,	// (0x00027b00) list_pinb_item_pane_t1

0x10a6,	// (0x00025d8f) calc_display_pane

0x10cc,	// (0x00025db5) calc_paper_pane

0x10ef,	// (0x00025dd8) grid_calc_pane

0x2a0a,	// (0x000276f3) bg_list_pane_cp01

0x2e2e,	// (0x00027b17) clock_g1

0x2e36,	// (0x00027b1f) clock_g2

0x0001,

0xf19e,	// (0x00033e87) clock_g

0x2e3e,	// (0x00027b27) clock_t1_ParamLimits

0x2e3e,	// (0x00027b27) clock_t1

0x2e53,	// (0x00027b3c) clock_t2_ParamLimits

0x2e53,	// (0x00027b3c) clock_t2

0x2e65,	// (0x00027b4e) clock_t3_ParamLimits

0x2e65,	// (0x00027b4e) clock_t3

0x2e77,	// (0x00027b60) clock_t4_ParamLimits

0x2e77,	// (0x00027b60) clock_t4

0x2e89,	// (0x00027b72) clock_t5_ParamLimits

0x2e89,	// (0x00027b72) clock_t5

0x2e9e,	// (0x00027b87) clock_t6_ParamLimits

0x2e9e,	// (0x00027b87) clock_t6

0x2eb0,	// (0x00027b99) clock_t7_ParamLimits

0x2eb0,	// (0x00027b99) clock_t7

0x2ec2,	// (0x00027bab) clock_t8_ParamLimits

0x2ec2,	// (0x00027bab) clock_t8

0x2ed6,	// (0x00027bbf) clock_t9_ParamLimits

0x2ed6,	// (0x00027bbf) clock_t9

0x0008,

0xf1a3,	// (0x00033e8c) clock_t_ParamLimits

0xf1a3,	// (0x00033e8c) clock_t

0x2eec,	// (0x00027bd5) popup_clock_analogue_window_cp02

0x2eec,	// (0x00027bd5) popup_clock_digital_window_cp01

0x2ef4,	// (0x00027bdd) listscroll_help_pane

0x2a0a,	// (0x000276f3) phob_pre_status_pane

0x2efe,	// (0x00027be7) grid_qdial_pane

0x2a0a,	// (0x000276f3) listscroll_mce_pane

0x2f08,	// (0x00027bf1) bg_notes_pane

0x2f12,	// (0x00027bfb) list_notes_pane

0x2f1c,	// (0x00027c05) scroll_pane_cp06

0x2f27,	// (0x00027c10) bg_calc_paper_pane

0xab84,	// (0x0002f86d) list_calc_pane

0x2f3b,	// (0x00027c24) bg_calc_display_pane

0x111d,	// (0x00025e06) calc_display_pane_t1

0x112f,	// (0x00025e18) calc_display_pane_t2

0xab9e,	// (0x0002f887) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00033e9f) calc_display_pane_t

0x1141,	// (0x00025e2a) cell_calc_pane_ParamLimits

0x1141,	// (0x00025e2a) cell_calc_pane

0x2f47,	// (0x00027c30) bg_calc_paper_pane_g1

0x2f53,	// (0x00027c3c) bg_calc_paper_pane_g2

0x2f5f,	// (0x00027c48) bg_calc_paper_pane_g3

0x2f6b,	// (0x00027c54) bg_calc_paper_pane_g4

0x2f77,	// (0x00027c60) bg_calc_paper_pane_g5

0x2f83,	// (0x00027c6c) bg_calc_paper_pane_g6

0x2f96,	// (0x00027c7f) bg_calc_paper_pane_g7

0x2fa9,	// (0x00027c92) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00033ea6) bg_calc_paper_pane_g

0x2fba,	// (0x00027ca3) calc_bg_paper_pane_g9

0x2fcb,	// (0x00027cb4) list_calc_item_pane_ParamLimits

0x2fcb,	// (0x00027cb4) list_calc_item_pane

0x2fdf,	// (0x00027cc8) list_calc_item_pane_g1

0xabb0,	// (0x0002f899) list_calc_item_pane_t1_ParamLimits

0xabb0,	// (0x0002f899) list_calc_item_pane_t1

0x117c,	// (0x00025e65) list_calc_item_pane_t2_ParamLimits

0x117c,	// (0x00025e65) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00033eb7) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00033eb7) list_calc_item_pane_t

0x2fec,	// (0x00027cd5) cell_calc_pane_g1

0x2ff6,	// (0x00027cdf) grid_highlight_pane_cp02

0x3018,	// (0x00027d01) bg_calc_display_pane_g1

0xabc2,	// (0x0002f8ab) bg_calc_display_pane_g2

0x3021,	// (0x00027d0a) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00033ec1) bg_calc_display_pane_g

0x11ae,	// (0x00025e97) cell_qdial_pane_ParamLimits

0x11ae,	// (0x00025e97) cell_qdial_pane

0x302a,	// (0x00027d13) cell_qdial_pane_g1_ParamLimits

0x302a,	// (0x00027d13) cell_qdial_pane_g1

0x3040,	// (0x00027d29) cell_qdial_pane_g2_ParamLimits

0x3040,	// (0x00027d29) cell_qdial_pane_g2

0x3051,	// (0x00027d3a) cell_qdial_pane_g3_ParamLimits

0x3051,	// (0x00027d3a) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00033ec8) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00033ec8) cell_qdial_pane_g

0x3072,	// (0x00027d5b) cell_qdial_pane_t1_ParamLimits

0x3072,	// (0x00027d5b) cell_qdial_pane_t1

0x308a,	// (0x00027d73) cell_qdial_pane_t2_ParamLimits

0x308a,	// (0x00027d73) cell_qdial_pane_t2

0x309d,	// (0x00027d86) cell_qdial_pane_t3_ParamLimits

0x309d,	// (0x00027d86) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00033ed1) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00033ed1) cell_qdial_pane_t

0x2a0a,	// (0x000276f3) grid_highlight_pane_cp04

0x30b0,	// (0x00027d99) thumbnail_qdial_pane_ParamLimits

0x30b0,	// (0x00027d99) thumbnail_qdial_pane

0x310c,	// (0x00027df5) list_help_pane

0x3115,	// (0x00027dfe) scroll_pane_cp02

0x311e,	// (0x00027e07) help_list_pane_t1_ParamLimits

0x311e,	// (0x00027e07) help_list_pane_t1

0xabcc,	// (0x0002f8b5) bg_notes_pane_g2

0xabd4,	// (0x0002f8bd) bg_notes_pane_g3

0xabdc,	// (0x0002f8c5) notes_bg_pane_g1

0xabe4,	// (0x0002f8cd) notes_bg_pane_g4

0xabec,	// (0x0002f8d5) notes_bg_pane_g5

0xabf4,	// (0x0002f8dd) notes_bg_pane_g6

0xabfc,	// (0x0002f8e5) notes_bg_pane_g7

0xac04,	// (0x0002f8ed) notes_bg_pane_g8

0xac0c,	// (0x0002f8f5) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00033eef) notes_bg_pane_g

0x3142,	// (0x00027e2b) list_notes_text_pane_ParamLimits

0x3142,	// (0x00027e2b) list_notes_text_pane

0x3159,	// (0x00027e42) list_notes_text_pane_g1

0x3162,	// (0x00027e4b) list_notes_text_pane_t1

0x2f3b,	// (0x00027c24) listscroll_cale_week_pane

0x319e,	// (0x00027e87) bg_cale_heading_pane

0x31ba,	// (0x00027ea3) bg_cale_pane_cp01

0x31d3,	// (0x00027ebc) cale_week_corner_pane

0x31e9,	// (0x00027ed2) cale_week_day_heading_pane

0x3205,	// (0x00027eee) cale_week_scroll_pane_g1

0x321e,	// (0x00027f07) cale_week_scroll_pane_g2

0x322f,	// (0x00027f18) cale_week_scroll_pane_g3

0x3240,	// (0x00027f29) cale_week_scroll_pane_g4

0x3251,	// (0x00027f3a) cale_week_scroll_pane_g5

0x3262,	// (0x00027f4b) cale_week_scroll_pane_g6

0x3273,	// (0x00027f5c) cale_week_scroll_pane_g7

0x3284,	// (0x00027f6d) cale_week_scroll_pane_g8

0x3295,	// (0x00027f7e) cale_week_scroll_pane_g9

0x32a6,	// (0x00027f8f) cale_week_scroll_pane_g10

0x32b7,	// (0x00027fa0) cale_week_scroll_pane_g11

0x32c8,	// (0x00027fb1) cale_week_scroll_pane_g12

0x32d9,	// (0x00027fc2) cale_week_scroll_pane_g13

0x32f2,	// (0x00027fdb) cale_week_scroll_pane_g14

0x330b,	// (0x00027ff4) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00033efe) cale_week_scroll_pane_g

0x3324,	// (0x0002800d) cale_week_time_pane

0x3335,	// (0x0002801e) grid_cale_week_pane

0x3362,	// (0x0002804b) scroll_pane_cp08

0x337a,	// (0x00028063) cell_cale_week_pane_ParamLimits

0x337a,	// (0x00028063) cell_cale_week_pane

0x33c2,	// (0x000280ab) cale_week_day_heading_pane_t1

0x33d6,	// (0x000280bf) cale_week_day_heading_pane_t2

0x33ea,	// (0x000280d3) cale_week_day_heading_pane_t3

0x33fe,	// (0x000280e7) cale_week_day_heading_pane_t4

0x3412,	// (0x000280fb) cale_week_day_heading_pane_t5

0x3426,	// (0x0002810f) cale_week_day_heading_pane_t6

0x343a,	// (0x00028123) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00033f1d) cale_week_day_heading_pane_t

0x344e,	// (0x00028137) bg_cale_side_pane

0x11c4,	// (0x00025ead) cale_week_time_pane_t1

0x11dc,	// (0x00025ec5) cale_week_time_pane_t2

0x11f4,	// (0x00025edd) cale_week_time_pane_t3

0x120c,	// (0x00025ef5) cale_week_time_pane_t4

0x1224,	// (0x00025f0d) cale_week_time_pane_t5

0x123c,	// (0x00025f25) cale_week_time_pane_t6

0x1254,	// (0x00025f3d) cale_week_time_pane_t7

0x1270,	// (0x00025f59) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00033f2c) cale_week_time_pane_t

0x345c,	// (0x00028145) cell_cale_week_pane_g2

0x346d,	// (0x00028156) cell_cale_week_pane_g3_ParamLimits

0x346d,	// (0x00028156) cell_cale_week_pane_g3

0x3485,	// (0x0002816e) grid_highlight_pane_cp07

0x348d,	// (0x00028176) listscroll_gms_pane

0x3497,	// (0x00028180) grid_gms_pane

0x34a0,	// (0x00028189) listscroll_gms_pane_g1

0x34a8,	// (0x00028191) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00033f3d) listscroll_gms_pane_g

0x34b0,	// (0x00028199) scroll_pane_cp010

0x34bb,	// (0x000281a4) cell_gms_pane_ParamLimits

0x34bb,	// (0x000281a4) cell_gms_pane

0x34d5,	// (0x000281be) cell_gms_pane_g1

0x34dd,	// (0x000281c6) cell_gms_pane_g2

0x34e5,	// (0x000281ce) cell_gms_pane_g3

0x34ee,	// (0x000281d7) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00033f42) cell_gms_pane_g

0x34f7,	// (0x000281e0) grid_highlight_pane_cp09

0x63c2,	// (0x0002b0ab) phob_pre_status_pane_g1

0x63ca,	// (0x0002b0b3) phob_pre_status_pane_g2

0x63d2,	// (0x0002b0bb) phob_pre_status_pane_g3

0x63da,	// (0x0002b0c3) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x00034331) phob_pre_status_pane_g

0x63ea,	// (0x0002b0d3) phob_pre_status_pane_t1

0x63fa,	// (0x0002b0e3) phob_pre_status_pane_t2

0x640a,	// (0x0002b0f3) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0003433c) phob_pre_status_pane_t

0x2a0a,	// (0x000276f3) bg_list_pane_cp05

0x1298,	// (0x00025f81) grid_vorec_pane

0xac14,	// (0x0002f8fd) vorec_t1

0xac22,	// (0x0002f90b) vorec_t2

0xac30,	// (0x0002f919) vorec_t3

0xac3e,	// (0x0002f927) vorec_t4

0xac4c,	// (0x0002f935) vorec_t5

0xac5a,	// (0x0002f943) vorec_t6

0x0006,

0xf262,	// (0x00033f4b) vorec_t

0xac76,	// (0x0002f95f) wait_bar_pane_cp01

0x34ff,	// (0x000281e8) cell_vorec_pane_ParamLimits

0x34ff,	// (0x000281e8) cell_vorec_pane

0x3514,	// (0x000281fd) cell_vorec_pane_g1

0x2a0a,	// (0x000276f3) grid_highlight_pane_cp05

0x3534,	// (0x0002821d) cams_zoom_pane

0x3543,	// (0x0002822c) image_vga_pane

0x355d,	// (0x00028246) main_camera_pane_g1

0x356f,	// (0x00028258) main_camera_pane_g2

0x357f,	// (0x00028268) main_camera_pane_g3

0x3593,	// (0x0002827c) main_camera_pane_g4

0x35a7,	// (0x00028290) main_camera_pane_g5

0x35bb,	// (0x000282a4) main_camera_pane_g6

0x35cf,	// (0x000282b8) main_camera_pane_g7

0x0007,

0xf271,	// (0x00033f5a) main_camera_pane_g

0x35ef,	// (0x000282d8) main_camera_pane_t1

0x3605,	// (0x000282ee) main_camera_pane_t2

0x0001,

0xf282,	// (0x00033f6b) main_camera_pane_t

0x3643,	// (0x0002832c) cams_zoom_pane_cp_ParamLimits

0x3643,	// (0x0002832c) cams_zoom_pane_cp

0x366b,	// (0x00028354) image_cif_pane_ParamLimits

0x366b,	// (0x00028354) image_cif_pane

0x36a6,	// (0x0002838f) image_subqcif_pane

0x36b0,	// (0x00028399) main_video_pane_g1_ParamLimits

0x36b0,	// (0x00028399) main_video_pane_g1

0x36d4,	// (0x000283bd) main_video_pane_g2_ParamLimits

0x36d4,	// (0x000283bd) main_video_pane_g2

0x370a,	// (0x000283f3) main_video_pane_g3_ParamLimits

0x370a,	// (0x000283f3) main_video_pane_g3

0x3738,	// (0x00028421) main_video_pane_g4_ParamLimits

0x3738,	// (0x00028421) main_video_pane_g4

0x3766,	// (0x0002844f) main_video_pane_g5_ParamLimits

0x3766,	// (0x0002844f) main_video_pane_g5

0x377e,	// (0x00028467) main_video_pane_g6_ParamLimits

0x377e,	// (0x00028467) main_video_pane_g6

0x0006,

0xf287,	// (0x00033f70) main_video_pane_g_ParamLimits

0xf287,	// (0x00033f70) main_video_pane_g

0x37a9,	// (0x00028492) main_video_pane_t1_ParamLimits

0x37a9,	// (0x00028492) main_video_pane_t1

0x37f2,	// (0x000284db) cams_zoom_pane_g1

0x37fb,	// (0x000284e4) cams_zoom_pane_g2

0x3804,	// (0x000284ed) cams_zoom_pane_g3

0x380d,	// (0x000284f6) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00033f7f) cams_zoom_pane_g

0x382a,	// (0x00028513) grid_cams_pane

0x3844,	// (0x0002852d) linegrid_cams_pane

0x3858,	// (0x00028541) cell_cams_pane_ParamLimits

0x3858,	// (0x00028541) cell_cams_pane

0x387a,	// (0x00028563) cams_burst_image_pane

0x3882,	// (0x0002856b) cell_cams_pane_g1

0x2a0a,	// (0x000276f3) grid_highlight_pane_cp03

0x2fec,	// (0x00027cd5) mp_bg_pane_g1

0x2a0a,	// (0x000276f3) bg_list_pane_cp03

0xbe0d,	// (0x00030af6) bg_mp_pane

0xbe15,	// (0x00030afe) grid_mp_pane

0xbe1d,	// (0x00030b06) media_player_g1

0xbe27,	// (0x00030b10) media_player_t1

0xbe35,	// (0x00030b1e) media_player_t2

0xbe43,	// (0x00030b2c) media_player_t3

0xbe51,	// (0x00030b3a) media_player_t4

0xbe5f,	// (0x00030b48) media_player_t5

0xbe6d,	// (0x00030b56) media_player_t6

0xbe7b,	// (0x00030b64) media_player_t7

0x0006,

0xf632,	// (0x0003431b) media_player_t

0xbe89,	// (0x00030b72) wait_bar_pane_cp02

0xf617,	// (0x00034300) main_usb_pane_t

0x63b9,	// (0x0002b0a2) cell_mp_pane

0x2fec,	// (0x00027cd5) cell_mp_pane_g1

0x2a0a,	// (0x000276f3) grid_highlight_pane_cp06

0x399a,	// (0x00028683) grid_skin_colour_pane

0x39a2,	// (0x0002868b) list_highlight_pane_cp03

0x39aa,	// (0x00028693) skin_g1

0x39b4,	// (0x0002869d) skin_t1

0x39c3,	// (0x000286ac) skin_t2

0x0001,

0xf2cb,	// (0x00033fb4) skin_t

0x39d1,	// (0x000286ba) cell_skin_colour_pane_ParamLimits

0x39d1,	// (0x000286ba) cell_skin_colour_pane

0x39f1,	// (0x000286da) cell_skin_colour_pane_g1

0x3a47,	// (0x00028730) call_video_g1_ParamLimits

0x3a47,	// (0x00028730) call_video_g1

0x3a63,	// (0x0002874c) call_video_g2_ParamLimits

0x3a63,	// (0x0002874c) call_video_g2

0x0001,

0xf2d0,	// (0x00033fb9) call_video_g_ParamLimits

0xf2d0,	// (0x00033fb9) call_video_g

0x3a99,	// (0x00028782) call_video_uplink_pane_cp1_ParamLimits

0x3a99,	// (0x00028782) call_video_uplink_pane_cp1

0x3add,	// (0x000287c6) call_video_uplink_pane_cp2

0x3b21,	// (0x0002880a) video_down_crop_pane_ParamLimits

0x3b21,	// (0x0002880a) video_down_crop_pane

0x3be7,	// (0x000288d0) video_down_pane_ParamLimits

0x3be7,	// (0x000288d0) video_down_pane

0x3cb3,	// (0x0002899c) video_down_subqcif_pane_ParamLimits

0x3cb3,	// (0x0002899c) video_down_subqcif_pane

0x3ccd,	// (0x000289b6) video_down_subqcif_pane_cp_ParamLimits

0x3ccd,	// (0x000289b6) video_down_subqcif_pane_cp

0x3cf3,	// (0x000289dc) im_reading_pane_ParamLimits

0x3cf3,	// (0x000289dc) im_reading_pane

0x3d05,	// (0x000289ee) im_writing_pane_ParamLimits

0x3d05,	// (0x000289ee) im_writing_pane

0x3d2b,	// (0x00028a14) im_reading_pane_t1

0x3d6a,	// (0x00028a53) list_im_pane

0x3d7b,	// (0x00028a64) scroll_pane_cp07

0x3d94,	// (0x00028a7d) im_writing_pane_t1_ParamLimits

0x3d94,	// (0x00028a7d) im_writing_pane_t1

0x3da9,	// (0x00028a92) im_writing_pane_t2_ParamLimits

0x3da9,	// (0x00028a92) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00033fc3) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00033fc3) im_writing_pane_t

0x2a0a,	// (0x000276f3) input_focus_pane_cp04

0x2a0a,	// (0x000276f3) input_focus_pane_cp05

0x3dc6,	// (0x00028aaf) list_im_single_pane_ParamLimits

0x3dc6,	// (0x00028aaf) list_im_single_pane

0x3ddf,	// (0x00028ac8) list_single_im_pane_t1

0x6379,	// (0x0002b062) blid_accuracy_pane

0x6381,	// (0x0002b06a) blid_compass_pane

0x638b,	// (0x0002b074) main_location_t1

0x639b,	// (0x0002b084) main_location_t2

0x63ab,	// (0x0002b094) main_location_t3

0x0002,

0xf641,	// (0x0003432a) main_location_t

0x2a0a,	// (0x000276f3) aid_levels_location

0x2fec,	// (0x00027cd5) blid_accuracy_pane_g1

0x2fec,	// (0x00027cd5) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00034025) blid_accuracy_pane_g

0x3e19,	// (0x00028b02) wml_content_pane

0x3e57,	// (0x00028b40) wml_button_pane_ParamLimits

0x3e57,	// (0x00028b40) wml_button_pane

0x3e6b,	// (0x00028b54) wml_list_single_large_pane_ParamLimits

0x3e6b,	// (0x00028b54) wml_list_single_large_pane

0x3e84,	// (0x00028b6d) wml_list_single_medium_pane_ParamLimits

0x3e84,	// (0x00028b6d) wml_list_single_medium_pane

0x3e9e,	// (0x00028b87) wml_list_single_small_pane_ParamLimits

0x3e9e,	// (0x00028b87) wml_list_single_small_pane

0x3ebd,	// (0x00028ba6) wml_selection_box_pane_ParamLimits

0x3ebd,	// (0x00028ba6) wml_selection_box_pane

0x3ed0,	// (0x00028bb9) wml_list_single_pane_t1

0x3edf,	// (0x00028bc8) wml_list_single_medium_pane_t1

0x3eee,	// (0x00028bd7) wml_list_single_large_pane_t1

0x3efd,	// (0x00028be6) input_focus_pane_cp02_ParamLimits

0x3efd,	// (0x00028be6) input_focus_pane_cp02

0x3f10,	// (0x00028bf9) wml_selection_box_pane_g1

0x3f19,	// (0x00028c02) wml_selection_box_pane_t1_ParamLimits

0x3f19,	// (0x00028c02) wml_selection_box_pane_t1

0x2c65,	// (0x0002794e) bg_wml_button_pane_ParamLimits

0x2c65,	// (0x0002794e) bg_wml_button_pane

0x3f31,	// (0x00028c1a) wml_button_pane_g1

0x3f39,	// (0x00028c22) wml_button_pane_t1

0x3f31,	// (0x00028c1a) wml_button_bg_pane_g1

0x3f49,	// (0x00028c32) wml_button_bg_pane_g2

0x3f51,	// (0x00028c3a) wml_button_bg_pane_g3

0x3f59,	// (0x00028c42) wml_button_bg_pane_g4

0x3f61,	// (0x00028c4a) wml_button_bg_pane_g5

0x3f69,	// (0x00028c52) wml_button_bg_pane_g6

0x3f71,	// (0x00028c5a) wml_button_bg_pane_g7

0x3f79,	// (0x00028c62) wml_button_bg_pane_g8

0x3f81,	// (0x00028c6a) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00033fc8) wml_button_bg_pane_g

0x3f89,	// (0x00028c72) bg_list_pane_cp02

0x3f93,	// (0x00028c7c) mce_header_pane_ParamLimits

0x3f93,	// (0x00028c7c) mce_header_pane

0x3fa9,	// (0x00028c92) mce_icon_pane

0x3fa9,	// (0x00028c92) mce_image_pane

0x3fb2,	// (0x00028c9b) mce_text_pane_ParamLimits

0x3fb2,	// (0x00028c9b) mce_text_pane

0x3fc5,	// (0x00028cae) scroll_pane_cp03

0x3e4f,	// (0x00028b38) scroll_pane_cp04

0x3fcf,	// (0x00028cb8) scroll_pane_cp05_ParamLimits

0x3fcf,	// (0x00028cb8) scroll_pane_cp05

0x3fdb,	// (0x00028cc4) mce_header_field_pane_ParamLimits

0x3fdb,	// (0x00028cc4) mce_header_field_pane

0x3ff4,	// (0x00028cdd) mce_header_field_pane_2_ParamLimits

0x3ff4,	// (0x00028cdd) mce_header_field_pane_2

0x400a,	// (0x00028cf3) mce_header_field_pane_3

0x4012,	// (0x00028cfb) list_single_mce_message_pane_ParamLimits

0x4012,	// (0x00028cfb) list_single_mce_message_pane

0x402e,	// (0x00028d17) list_single_mce_smart_pane_ParamLimits

0x402e,	// (0x00028d17) list_single_mce_smart_pane

0x4055,	// (0x00028d3e) input_focus_pane_cp03

0x405e,	// (0x00028d47) list_header_data_pane

0x4066,	// (0x00028d4f) mce_header_field_pane_t1

0x4076,	// (0x00028d5f) list_single_mce_header_pane_ParamLimits

0x4076,	// (0x00028d5f) list_single_mce_header_pane

0x408a,	// (0x00028d73) list_single_mce_header_pane_t1

0x4099,	// (0x00028d82) list_single_mce_message_pane_g1

0x40a1,	// (0x00028d8a) list_single_mce_message_pane_t1

0x40cd,	// (0x00028db6) bg_cale_heading_pane_cp01_ParamLimits

0x40cd,	// (0x00028db6) bg_cale_heading_pane_cp01

0x4100,	// (0x00028de9) bg_cale_pane_cp02_ParamLimits

0x4100,	// (0x00028de9) bg_cale_pane_cp02

0x4123,	// (0x00028e0c) cale_month_corner_pane

0x4139,	// (0x00028e22) cale_month_day_heading_pane_ParamLimits

0x4139,	// (0x00028e22) cale_month_day_heading_pane

0x416c,	// (0x00028e55) cale_month_pane_g1_ParamLimits

0x416c,	// (0x00028e55) cale_month_pane_g1

0x4198,	// (0x00028e81) cale_month_pane_g2_ParamLimits

0x4198,	// (0x00028e81) cale_month_pane_g2

0x41b9,	// (0x00028ea2) cale_month_pane_g3_ParamLimits

0x41b9,	// (0x00028ea2) cale_month_pane_g3

0x41f5,	// (0x00028ede) cale_month_pane_g4_ParamLimits

0x41f5,	// (0x00028ede) cale_month_pane_g4

0x4231,	// (0x00028f1a) cale_month_pane_g5_ParamLimits

0x4231,	// (0x00028f1a) cale_month_pane_g5

0x426d,	// (0x00028f56) cale_month_pane_g6_ParamLimits

0x426d,	// (0x00028f56) cale_month_pane_g6

0x42a9,	// (0x00028f92) cale_month_pane_g7_ParamLimits

0x42a9,	// (0x00028f92) cale_month_pane_g7

0x42e5,	// (0x00028fce) cale_month_pane_g8_ParamLimits

0x42e5,	// (0x00028fce) cale_month_pane_g8

0x4321,	// (0x0002900a) cale_month_pane_g9_ParamLimits

0x4321,	// (0x0002900a) cale_month_pane_g9

0x4357,	// (0x00029040) cale_month_pane_g10_ParamLimits

0x4357,	// (0x00029040) cale_month_pane_g10

0x4381,	// (0x0002906a) cale_month_pane_g11_ParamLimits

0x4381,	// (0x0002906a) cale_month_pane_g11

0x43ab,	// (0x00029094) cale_month_pane_g12_ParamLimits

0x43ab,	// (0x00029094) cale_month_pane_g12

0x43d9,	// (0x000290c2) cale_month_pane_g13_ParamLimits

0x43d9,	// (0x000290c2) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00033fdb) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00033fdb) cale_month_pane_g

0x4419,	// (0x00029102) cale_month_week_pane

0x442a,	// (0x00029113) grid_cale_month_pane_ParamLimits

0x442a,	// (0x00029113) grid_cale_month_pane

0x4458,	// (0x00029141) cale_month_day_heading_pane_t1

0x44b6,	// (0x0002919f) cale_month_day_heading_pane_t2

0x451b,	// (0x00029204) cale_month_day_heading_pane_t3

0x4580,	// (0x00029269) cale_month_day_heading_pane_t4

0x45e5,	// (0x000292ce) cale_month_day_heading_pane_t5

0x464a,	// (0x00029333) cale_month_day_heading_pane_t6

0x46af,	// (0x00029398) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00033ff6) cale_month_day_heading_pane_t

0x344e,	// (0x00028137) bg_cale_side_pane_cp01

0x4714,	// (0x000293fd) cale_month_week_pane_t1

0x472b,	// (0x00029414) cale_month_week_pane_t2

0x4742,	// (0x0002942b) cale_month_week_pane_t3

0x4759,	// (0x00029442) cale_month_week_pane_t4

0x4770,	// (0x00029459) cale_month_week_pane_t5

0x4787,	// (0x00029470) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00034005) cale_month_week_pane_t

0x47a6,	// (0x0002948f) cell_cale_month_pane_ParamLimits

0x47a6,	// (0x0002948f) cell_cale_month_pane

0xac7e,	// (0x0002f967) cell_cale_month_pane_g1

0x12a2,	// (0x00025f8b) cell_cale_month_pane_t1_ParamLimits

0x12a2,	// (0x00025f8b) cell_cale_month_pane_t1

0x3485,	// (0x0002816e) grid_highlight_pane_cp08

0x2fec,	// (0x00027cd5) main_smil_g1

0x487e,	// (0x00029567) smil_status_pane

0x4889,	// (0x00029572) smil_text_pane

0xbd2b,	// (0x00030a14) bg_popup_call3_rect_pane_g8

0xbd33,	// (0x00030a1c) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x000342be) bg_popup_call3_rect_pane_g

0xbfc8,	// (0x00030cb1) smil_status_volume_pane_g1

0x489d,	// (0x00029586) smil_status_pane_t1

0xbffb,	// (0x00030ce4) volume_smil_pane

0x48b4,	// (0x0002959d) list_smil_text_pane

0x48be,	// (0x000295a7) scroll_pane_cp011

0x48c9,	// (0x000295b2) smil_text_list_pane_t1_ParamLimits

0x48c9,	// (0x000295b2) smil_text_list_pane_t1

0xac8a,	// (0x0002f973) aid_volume_smil_ParamLimits

0xac8a,	// (0x0002f973) aid_volume_smil

0x2fec,	// (0x00027cd5) smil_volume_pane_g1

0x2fec,	// (0x00027cd5) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00034025) smil_volume_pane_g

0x2f3b,	// (0x00027c24) listscroll_cale_day_pane

0x491e,	// (0x00029607) bg_cale_pane

0x4936,	// (0x0002961f) list_cale_pane

0x4947,	// (0x00029630) scroll_pane_cp09

0x4958,	// (0x00029641) cale_bg_pane_g1

0x4960,	// (0x00029649) cale_bg_pane_g2

0x4968,	// (0x00029651) cale_bg_pane_g3

0x4970,	// (0x00029659) cale_bg_pane_g4

0x4978,	// (0x00029661) cale_bg_pane_g5

0x4980,	// (0x00029669) cale_bg_pane_g6

0x4988,	// (0x00029671) cale_bg_pane_g7

0x4990,	// (0x00029679) cale_bg_pane_g8

0x4998,	// (0x00029681) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0003402a) cale_bg_pane_g

0x49a0,	// (0x00029689) list_cale_time_pane_ParamLimits

0x49a0,	// (0x00029689) list_cale_time_pane

0x49b5,	// (0x0002969e) list_cale_time_pane_g1_ParamLimits

0x49b5,	// (0x0002969e) list_cale_time_pane_g1

0x49c1,	// (0x000296aa) list_cale_time_pane_g2_ParamLimits

0x49c1,	// (0x000296aa) list_cale_time_pane_g2

0x49ce,	// (0x000296b7) list_cale_time_pane_g3_ParamLimits

0x49ce,	// (0x000296b7) list_cale_time_pane_g3

0x49dc,	// (0x000296c5) list_cale_time_pane_g4_ParamLimits

0x49dc,	// (0x000296c5) list_cale_time_pane_g4

0x49ea,	// (0x000296d3) list_cale_time_pane_g5_ParamLimits

0x49ea,	// (0x000296d3) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0003403d) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0003403d) list_cale_time_pane_g

0x4a05,	// (0x000296ee) list_cale_time_pane_t1_ParamLimits

0x4a05,	// (0x000296ee) list_cale_time_pane_t1

0x4a2d,	// (0x00029716) list_cale_time_pane_t2_ParamLimits

0x4a2d,	// (0x00029716) list_cale_time_pane_t2

0x51e3,	// (0x00029ecc) aid_blid_cardinal_pane

0x5231,	// (0x00029f1a) compass_pane_t4

0x4a55,	// (0x0002973e) list_cale_time_pane_t4_ParamLimits

0x4a55,	// (0x0002973e) list_cale_time_pane_t4

0x523f,	// (0x00029f28) compass_pane_t5

0x524f,	// (0x00029f38) compass_pane_t6

0x525d,	// (0x00029f46) compass_pane_t7

0x52df,	// (0x00029fc8) navi_pane_cc_t1

0x54fe,	// (0x0002a1e7) aid_phob_thumbnail_center_pane

0x5c42,	// (0x0002a92b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0003404a) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0003404a) list_cale_time_pane_t

0x263d,	// (0x00027326) bg_popup_window_pane_cp02_ParamLimits

0x263d,	// (0x00027326) bg_popup_window_pane_cp02

0x4a7d,	// (0x00029766) heading_pane_cp01_ParamLimits

0x4a7d,	// (0x00029766) heading_pane_cp01

0x4a89,	// (0x00029772) loc_req_pane_ParamLimits

0x4a89,	// (0x00029772) loc_req_pane

0x4a99,	// (0x00029782) loc_type_pane_ParamLimits

0x4a99,	// (0x00029782) loc_type_pane

0x4aab,	// (0x00029794) loc_type_pane_t1_ParamLimits

0x4aab,	// (0x00029794) loc_type_pane_t1

0x4abd,	// (0x000297a6) loc_type_pane_t2_ParamLimits

0x4abd,	// (0x000297a6) loc_type_pane_t2

0x4acf,	// (0x000297b8) loc_type_pane_t3_ParamLimits

0x4acf,	// (0x000297b8) loc_type_pane_t3

0x0002,

0xf368,	// (0x00034051) loc_type_pane_t_ParamLimits

0xf368,	// (0x00034051) loc_type_pane_t

0x4ae1,	// (0x000297ca) list_loc_req_pane

0x4aeb,	// (0x000297d4) scroll_pane_cp012

0x4af6,	// (0x000297df) list_single_loc_request_popup_menu_pane_ParamLimits

0x4af6,	// (0x000297df) list_single_loc_request_popup_menu_pane

0x4b03,	// (0x000297ec) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4b03,	// (0x000297ec) list_single_loc_request_popup_menu_pane_g1

0x4b0f,	// (0x000297f8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4b0f,	// (0x000297f8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00034058) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00034058) list_single_loc_request_popup_menu_pane_g

0x4b1b,	// (0x00029804) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4b1b,	// (0x00029804) list_single_loc_request_popup_menu_pane_t1

0x2c65,	// (0x0002794e) bg_popup_window_pane_cp03_ParamLimits

0x2c65,	// (0x0002794e) bg_popup_window_pane_cp03

0xacac,	// (0x0002f995) heading_loc_req_pane_ParamLimits

0xacac,	// (0x0002f995) heading_loc_req_pane

0x4b31,	// (0x0002981a) popup_dyc_status_message_window_g1_ParamLimits

0x4b31,	// (0x0002981a) popup_dyc_status_message_window_g1

0x4b45,	// (0x0002982e) popup_dyc_status_message_window_t1_ParamLimits

0x4b45,	// (0x0002982e) popup_dyc_status_message_window_t1

0x4b5a,	// (0x00029843) popup_dyc_status_message_window_t2_ParamLimits

0x4b5a,	// (0x00029843) popup_dyc_status_message_window_t2

0x4b6f,	// (0x00029858) popup_dyc_status_message_window_t3_ParamLimits

0x4b6f,	// (0x00029858) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0003405d) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0003405d) popup_dyc_status_message_window_t

0x2a0a,	// (0x000276f3) bg_heading_pane_cp01

0x4b8b,	// (0x00029874) heading_loc_req_pane_g1

0x4b93,	// (0x0002987c) heading_loc_req_pane_g2

0x4b9b,	// (0x00029884) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x00034064) heading_loc_req_pane_g

0x4ba3,	// (0x0002988c) heading_loc_req_pane_t1

0x4c9c,	// (0x00029985) bg_popup_sub_pane_cp01_ParamLimits

0x4c9c,	// (0x00029985) bg_popup_sub_pane_cp01

0x4caa,	// (0x00029993) popup_cale_events_window_g1_ParamLimits

0x4caa,	// (0x00029993) popup_cale_events_window_g1

0x4cca,	// (0x000299b3) popup_cale_events_window_g2_ParamLimits

0x4cca,	// (0x000299b3) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x00034098) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x00034098) popup_cale_events_window_g

0x4cea,	// (0x000299d3) popup_cale_events_window_t1_ParamLimits

0x4cea,	// (0x000299d3) popup_cale_events_window_t1

0x4cfc,	// (0x000299e5) popup_cale_events_window_t2_ParamLimits

0x4cfc,	// (0x000299e5) popup_cale_events_window_t2

0x4d3a,	// (0x00029a23) popup_cale_events_window_t3_ParamLimits

0x4d3a,	// (0x00029a23) popup_cale_events_window_t3

0x4d74,	// (0x00029a5d) popup_cale_events_window_t4_ParamLimits

0x4d74,	// (0x00029a5d) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0003409d) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0003409d) popup_cale_events_window_t

0x4daa,	// (0x00029a93) call_type_pane

0x4dba,	// (0x00029aa3) popup_call_status_window_g1

0x4dce,	// (0x00029ab7) popup_call_status_window_g2

0x4de2,	// (0x00029acb) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x000340a6) popup_call_status_window_g

0x4df2,	// (0x00029adb) call_type_pane_g1

0x4dfb,	// (0x00029ae4) call_type_pane_g2

0x0001,

0xf3c4,	// (0x000340ad) call_type_pane_g

0x2a0a,	// (0x000276f3) bg_popup_sub_pane_cp02

0x4e04,	// (0x00029aed) listscroll_popup_wml_pane

0x4e0c,	// (0x00029af5) list_wml_pane

0x4e16,	// (0x00029aff) scroll_pane_cp013

0x4e21,	// (0x00029b0a) list_single_graphic_popup_wml_pane_ParamLimits

0x4e21,	// (0x00029b0a) list_single_graphic_popup_wml_pane

0x2fec,	// (0x00027cd5) list_single_graphic_popup_wml_pane_g1

0x4e35,	// (0x00029b1e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x000340b2) list_single_graphic_popup_wml_pane_g

0x4e3d,	// (0x00029b26) list_single_graphic_popup_wml_pane_t1

0x4e53,	// (0x00029b3c) aid_call_pane

0x2c5d,	// (0x00027946) popup_clock_analogue_window_g1

0x2c5d,	// (0x00027946) popup_clock_analogue_window_g2

0xacb8,	// (0x0002f9a1) popup_clock_analogue_window_g3

0xacb8,	// (0x0002f9a1) popup_clock_analogue_window_g4

0x2fec,	// (0x00027cd5) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x000340b7) popup_clock_analogue_window_g

0xacc0,	// (0x0002f9a9) popup_clock_analogue_window_t1

0xacce,	// (0x0002f9b7) clock_digital_number_pane_ParamLimits

0xacce,	// (0x0002f9b7) clock_digital_number_pane

0xacda,	// (0x0002f9c3) clock_digital_number_pane_cp02_ParamLimits

0xacda,	// (0x0002f9c3) clock_digital_number_pane_cp02

0xace6,	// (0x0002f9cf) clock_digital_number_pane_cp03_ParamLimits

0xace6,	// (0x0002f9cf) clock_digital_number_pane_cp03

0xacf2,	// (0x0002f9db) clock_digital_number_pane_cp04_ParamLimits

0xacf2,	// (0x0002f9db) clock_digital_number_pane_cp04

0xacfe,	// (0x0002f9e7) clock_digital_separator_pane_ParamLimits

0xacfe,	// (0x0002f9e7) clock_digital_separator_pane

0xad0a,	// (0x0002f9f3) popup_clock_digital_window_t1

0x2fec,	// (0x00027cd5) clock_digital_number_pane_g1

0x2fec,	// (0x00027cd5) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00034025) clock_digital_number_pane_g

0x2fec,	// (0x00027cd5) clock_digital_separator_pane_g1

0x2fec,	// (0x00027cd5) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00034025) clock_digital_separator_pane_g

0x2a0a,	// (0x000276f3) bg_popup_window_pane_cp04

0x4e5b,	// (0x00029b44) heading_pane_cp03

0x4e63,	// (0x00029b4c) listscroll_popup_gms_pane

0x4e6b,	// (0x00029b54) grid_large_graphic_popup_pane

0x4e75,	// (0x00029b5e) listscroll_popup_gms_pane_g1

0x4e7d,	// (0x00029b66) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x000340c2) listscroll_popup_gms_pane_g

0x3e4f,	// (0x00028b38) scroll_pane_cp014

0x4e85,	// (0x00029b6e) cell_large_graphic_popup_pane_ParamLimits

0x4e85,	// (0x00029b6e) cell_large_graphic_popup_pane

0x4e9d,	// (0x00029b86) cell_large_graphic_popup_pane_g1_ParamLimits

0x4e9d,	// (0x00029b86) cell_large_graphic_popup_pane_g1

0x4ea9,	// (0x00029b92) cell_large_graphic_popup_pane_g2_ParamLimits

0x4ea9,	// (0x00029b92) cell_large_graphic_popup_pane_g2

0x4eb5,	// (0x00029b9e) cell_large_graphic_popup_pane_g3_ParamLimits

0x4eb5,	// (0x00029b9e) cell_large_graphic_popup_pane_g3

0x4ec2,	// (0x00029bab) cell_large_graphic_popup_pane_g4_ParamLimits

0x4ec2,	// (0x00029bab) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x000340c7) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x000340c7) cell_large_graphic_popup_pane_g

0x4ed2,	// (0x00029bbb) grid_highlight_pane_cp010

0x2fec,	// (0x00027cd5) bg_popup_call_pane_g1

0x4edc,	// (0x00029bc5) list_single_graphic_popup_conf_pane_ParamLimits

0x4edc,	// (0x00029bc5) list_single_graphic_popup_conf_pane

0x4eee,	// (0x00029bd7) list_highlight_pane_cp01

0x4ef7,	// (0x00029be0) list_single_graphic_popup_conf_pane_g1

0x4eff,	// (0x00029be8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x000340d0) list_single_graphic_popup_conf_pane_g

0x4f07,	// (0x00029bf0) list_single_graphic_popup_conf_pane_t1

0x4f15,	// (0x00029bfe) linegrid_cams_pane_g1

0x4f1e,	// (0x00029c07) linegrid_cams_pane_g2

0x34e5,	// (0x000281ce) linegrid_cams_pane_g3

0x4f27,	// (0x00029c10) linegrid_cams_pane_g4

0x4f30,	// (0x00029c19) linegrid_cams_pane_g5

0x4f39,	// (0x00029c22) linegrid_cams_pane_g6

0x34ee,	// (0x000281d7) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x000340d5) linegrid_cams_pane_g

0x4f44,	// (0x00029c2d) popup_clock_analogue_window

0x4f44,	// (0x00029c2d) popup_clock_digital_window

0x2a0a,	// (0x000276f3) popup_phob_thumbnail_window

0x2fec,	// (0x00027cd5) call_video_uplink_pane_g1

0x4f4d,	// (0x00029c36) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x000340e4) call_video_uplink_pane_g

0x4f55,	// (0x00029c3e) video_uplink_pane

0x4f5d,	// (0x00029c46) mce_image_pane_g1

0x4f67,	// (0x00029c50) mce_image_pane_g2

0x4f71,	// (0x00029c5a) mce_image_pane_g3

0x4f7b,	// (0x00029c64) mce_image_pane_g4

0x4f83,	// (0x00029c6c) mce_image_pane_g5

0x0004,

0xf400,	// (0x000340e9) mce_image_pane_g

0x4f8b,	// (0x00029c74) control_top_pane_stacon_cp01_ParamLimits

0x4f8b,	// (0x00029c74) control_top_pane_stacon_cp01

0x4f9f,	// (0x00029c88) uni_indicator_pane_stacon_cp01_ParamLimits

0x4f9f,	// (0x00029c88) uni_indicator_pane_stacon_cp01

0x4fb0,	// (0x00029c99) bg_popup_sub_pane_cp03

0x4fba,	// (0x00029ca3) chi_dic_find_pane

0x4fc2,	// (0x00029cab) listscroll_chi_dic_pane

0x4fcb,	// (0x00029cb4) main_pane_chidic_g1

0x4fde,	// (0x00029cc7) chi_dic_find_pane_t1

0x4fec,	// (0x00029cd5) find_chidic_pane

0x4ff5,	// (0x00029cde) chi_dic_list_pane_ParamLimits

0x4ff5,	// (0x00029cde) chi_dic_list_pane

0x5006,	// (0x00029cef) scroll_pane_cp020

0x500e,	// (0x00029cf7) find_chidic_pane_t1

0x2a0a,	// (0x000276f3) input_focus_pane_cp06

0x501d,	// (0x00029d06) list_chi_dic_pane_ParamLimits

0x501d,	// (0x00029d06) list_chi_dic_pane

0x502f,	// (0x00029d18) list_chi_dic_pane_t1_ParamLimits

0x502f,	// (0x00029d18) list_chi_dic_pane_t1

0x2a0a,	// (0x000276f3) list_highlight_pane_cp020

0x5042,	// (0x00029d2b) bg_cale_heading_pane_g1

0x504a,	// (0x00029d33) bg_cale_heading_pane_g2

0x5052,	// (0x00029d3b) bg_cale_heading_pane_g3

0x505a,	// (0x00029d43) bg_cale_heading_pane_g4

0x5062,	// (0x00029d4b) bg_cale_heading_pane_g5

0x506a,	// (0x00029d53) bg_cale_heading_pane_g6

0x5072,	// (0x00029d5b) bg_cale_heading_pane_g7

0x507a,	// (0x00029d63) bg_cale_heading_pane_g8

0x5082,	// (0x00029d6b) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x000340f4) bg_cale_heading_pane_g

0x5042,	// (0x00029d2b) bg_cale_side_pane_g1

0x508a,	// (0x00029d73) bg_cale_side_pane_g2

0x5094,	// (0x00029d7d) bg_cale_side_pane_g3

0x509e,	// (0x00029d87) bg_cale_side_pane_g4

0x50a8,	// (0x00029d91) bg_cale_side_pane_g5

0x50b2,	// (0x00029d9b) bg_cale_side_pane_g6

0x50bc,	// (0x00029da5) bg_cale_side_pane_g7

0x50c6,	// (0x00029daf) bg_cale_side_pane_g8

0x50ce,	// (0x00029db7) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00034107) bg_cale_side_pane_g

0x50d6,	// (0x00029dbf) popup_call_status_window_ParamLimits

0x50d6,	// (0x00029dbf) popup_call_status_window

0x5123,	// (0x00029e0c) stacon_top_pane

0x512b,	// (0x00029e14) status_pane_ParamLimits

0x512b,	// (0x00029e14) status_pane

0x5140,	// (0x00029e29) status_small_pane

0x5148,	// (0x00029e31) control_pane

0x2a0a,	// (0x000276f3) stacon_bottom_pane

0x5150,	// (0x00029e39) list_single_mce_smart_pane_t1_ParamLimits

0x5150,	// (0x00029e39) list_single_mce_smart_pane_t1

0x5163,	// (0x00029e4c) list_single_mce_smart_pane_t2_ParamLimits

0x5163,	// (0x00029e4c) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0003411a) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0003411a) list_single_mce_smart_pane_t

0x5182,	// (0x00029e6b) compass_pane

0x518d,	// (0x00029e76) main_location2_pane_t1

0x51a3,	// (0x00029e8c) main_location2_pane_t2

0x51b9,	// (0x00029ea2) main_location2_pane_t3

0x0003,

0xf436,	// (0x0003411f) main_location2_pane_t

0x5207,	// (0x00029ef0) compass_pane_g1_ParamLimits

0x5207,	// (0x00029ef0) compass_pane_g1

0x5213,	// (0x00029efc) compass_pane_t1

0x5222,	// (0x00029f0b) compass_pane_t2

0x0005,

0xf43f,	// (0x00034128) compass_pane_t

0x526d,	// (0x00029f56) text_secondary_cp61

0x52d6,	// (0x00029fbf) navi_pane_cams_g5

0x5352,	// (0x0002a03b) navi_pane_im_t1

0x5360,	// (0x0002a049) navi_pane_mp_g1_ParamLimits

0x5360,	// (0x0002a049) navi_pane_mp_g1

0x5374,	// (0x0002a05d) navi_pane_mp_g2_ParamLimits

0x5374,	// (0x0002a05d) navi_pane_mp_g2

0x5380,	// (0x0002a069) navi_pane_mp_g3_ParamLimits

0x5380,	// (0x0002a069) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0003413c) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0003413c) navi_pane_mp_g

0x538c,	// (0x0002a075) navi_pane_mp_t1

0x539a,	// (0x0002a083) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00034143) navi_pane_mp_t

0x5447,	// (0x0002a130) navi_pane_vt_g1

0x538c,	// (0x0002a075) navi_pane_vt_t1

0x544f,	// (0x0002a138) navi_slider_pane

0x5457,	// (0x0002a140) zooming_pane

0x545f,	// (0x0002a148) navi_slider_pane_g1

0xad27,	// (0x0002fa10) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0003414a) navi_slider_pane_g

0x5483,	// (0x0002a16c) aid_levels_zoom

0x548b,	// (0x0002a174) zooming_pane_g1

0x5493,	// (0x0002a17c) zooming_pane_g2

0x5493,	// (0x0002a17c) zooming_pane_g3

0x0002,

0xf470,	// (0x00034159) zooming_pane_g

0x549b,	// (0x0002a184) level_10_zoom

0x54a4,	// (0x0002a18d) level_11_zoom

0x54ad,	// (0x0002a196) level_1_zoom

0x54b6,	// (0x0002a19f) level_2_zoom

0x54bf,	// (0x0002a1a8) level_3_zoom

0x54c8,	// (0x0002a1b1) level_4_zoom

0x54d1,	// (0x0002a1ba) level_5_zoom

0x54da,	// (0x0002a1c3) level_6_zoom

0x54e3,	// (0x0002a1cc) level_7_zoom

0x54ec,	// (0x0002a1d5) level_8_zoom

0x54f5,	// (0x0002a1de) level_9_zoom

0x5506,	// (0x0002a1ef) popup_phob_thumbnail_window_g1

0x550e,	// (0x0002a1f7) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00034160) popup_phob_thumbnail_window_g

0xbe91,	// (0x00030b7a) level_1_location

0xbe99,	// (0x00030b82) level_2_location

0xbea1,	// (0x00030b8a) level_3_location

0xbea9,	// (0x00030b92) level_4_location

0x5457,	// (0x0002a140) level_5_location

0x5516,	// (0x0002a1ff) mce_icon_pane_g1

0x551e,	// (0x0002a207) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00034165) mce_icon_pane_g

0x5526,	// (0x0002a20f) main_mup_pane_g1_ParamLimits

0x5526,	// (0x0002a20f) main_mup_pane_g1

0x553c,	// (0x0002a225) main_mup_pane_g2_ParamLimits

0x553c,	// (0x0002a225) main_mup_pane_g2

0x5554,	// (0x0002a23d) main_mup_pane_g3_ParamLimits

0x5554,	// (0x0002a23d) main_mup_pane_g3

0x556c,	// (0x0002a255) main_mup_pane_g4_ParamLimits

0x556c,	// (0x0002a255) main_mup_pane_g4

0x557e,	// (0x0002a267) main_mup_pane_g5_ParamLimits

0x557e,	// (0x0002a267) main_mup_pane_g5

0x559a,	// (0x0002a283) main_mup_pane_g6_ParamLimits

0x559a,	// (0x0002a283) main_mup_pane_g6

0x55b4,	// (0x0002a29d) main_mup_pane_g7_ParamLimits

0x55b4,	// (0x0002a29d) main_mup_pane_g7

0x55d2,	// (0x0002a2bb) main_mup_pane_g8_ParamLimits

0x55d2,	// (0x0002a2bb) main_mup_pane_g8

0x55f0,	// (0x0002a2d9) main_mup_pane_g9_ParamLimits

0x55f0,	// (0x0002a2d9) main_mup_pane_g9

0x560c,	// (0x0002a2f5) main_mup_pane_g10_ParamLimits

0x560c,	// (0x0002a2f5) main_mup_pane_g10

0x562a,	// (0x0002a313) main_mup_pane_g11_ParamLimits

0x562a,	// (0x0002a313) main_mup_pane_g11

0x5644,	// (0x0002a32d) main_mup_pane_g12_ParamLimits

0x5644,	// (0x0002a32d) main_mup_pane_g12

0x565a,	// (0x0002a343) main_mup_pane_g13_ParamLimits

0x565a,	// (0x0002a343) main_mup_pane_g13

0x000c,

0xf481,	// (0x0003416a) main_mup_pane_g_ParamLimits

0xf481,	// (0x0003416a) main_mup_pane_g

0x566e,	// (0x0002a357) main_mup_pane_t1_ParamLimits

0x566e,	// (0x0002a357) main_mup_pane_t1

0x568a,	// (0x0002a373) main_mup_pane_t2_ParamLimits

0x568a,	// (0x0002a373) main_mup_pane_t2

0x56a2,	// (0x0002a38b) main_mup_pane_t3_ParamLimits

0x56a2,	// (0x0002a38b) main_mup_pane_t3

0x56ba,	// (0x0002a3a3) main_mup_pane_t4_ParamLimits

0x56ba,	// (0x0002a3a3) main_mup_pane_t4

0x56d8,	// (0x0002a3c1) main_mup_pane_t5_ParamLimits

0x56d8,	// (0x0002a3c1) main_mup_pane_t5

0x56ed,	// (0x0002a3d6) main_mup_pane_t6_ParamLimits

0x56ed,	// (0x0002a3d6) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00034185) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00034185) main_mup_pane_t

0x56ff,	// (0x0002a3e8) mup_progress_pane_ParamLimits

0x56ff,	// (0x0002a3e8) mup_progress_pane

0x570b,	// (0x0002a3f4) mup_visualizer_pane_ParamLimits

0x570b,	// (0x0002a3f4) mup_visualizer_pane

0x573f,	// (0x0002a428) mup_volume_pane_ParamLimits

0x573f,	// (0x0002a428) mup_volume_pane

0x575d,	// (0x0002a446) mup_visualizer_pane_g1_ParamLimits

0x575d,	// (0x0002a446) mup_visualizer_pane_g1

0x575d,	// (0x0002a446) mup_visualizer_pane_g2_ParamLimits

0x575d,	// (0x0002a446) mup_visualizer_pane_g2

0x5207,	// (0x00029ef0) mup_visualizer_pane_g3_ParamLimits

0x5207,	// (0x00029ef0) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00034192) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00034192) mup_visualizer_pane_g

0x2fec,	// (0x00027cd5) mup_volume_pane_g1

0x5773,	// (0x0002a45c) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00034199) mup_volume_pane_g

0x2fec,	// (0x00027cd5) mup_progress_pane_g1

0x577c,	// (0x0002a465) mup_progress_pane_g2

0x5785,	// (0x0002a46e) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0003419e) mup_progress_pane_g

0x2a0a,	// (0x000276f3) bg_popup_window_pane_cp05

0x578e,	// (0x0002a477) heading_pane_cp02_ParamLimits

0x578e,	// (0x0002a477) heading_pane_cp02

0x57aa,	// (0x0002a493) list_popup_blid_pane

0x57b2,	// (0x0002a49b) list_blid_sat_info_pane_ParamLimits

0x57b2,	// (0x0002a49b) list_blid_sat_info_pane

0x57c5,	// (0x0002a4ae) list_blid_sat_info_pane_g1

0x57cd,	// (0x0002a4b6) list_blid_sat_info_pane_t1

0x58e7,	// (0x0002a5d0) mup_equalizer_pane_ParamLimits

0x58e7,	// (0x0002a5d0) mup_equalizer_pane

0x5908,	// (0x0002a5f1) mup_equalizer_pane_cp1_ParamLimits

0x5908,	// (0x0002a5f1) mup_equalizer_pane_cp1

0x5929,	// (0x0002a612) mup_equalizer_pane_cp2_ParamLimits

0x5929,	// (0x0002a612) mup_equalizer_pane_cp2

0x594e,	// (0x0002a637) mup_equalizer_pane_cp3_ParamLimits

0x594e,	// (0x0002a637) mup_equalizer_pane_cp3

0x5977,	// (0x0002a660) mup_equalizer_pane_cp4_ParamLimits

0x5977,	// (0x0002a660) mup_equalizer_pane_cp4

0x59a0,	// (0x0002a689) mup_equalizer_pane_cp5

0x59b8,	// (0x0002a6a1) mup_equalizer_pane_cp6

0x59d0,	// (0x0002a6b9) mup_equalizer_pane_cp7

0xbdab,	// (0x00030a94) bg_popup_call_poc_act_pane_g9

0xbdb3,	// (0x00030a9c) bg_popup_call_poc_act_pane_g10

0xbdbb,	// (0x00030aa4) bg_popup_call_poc_act_pane_g11

0x000a,

0x2c65,	// (0x0002794e) mup_scale_pane

0x2fec,	// (0x00027cd5) mup_scale_pane_g1

0x59e8,	// (0x0002a6d1) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x000341ba) mup_scale_pane_g

0x5a1e,	// (0x0002a707) msg_data_pane

0x5a26,	// (0x0002a70f) scroll_pane_cp017

0x5a2e,	// (0x0002a717) bg_list_pane_cp04_ParamLimits

0x5a2e,	// (0x0002a717) bg_list_pane_cp04

0x5a56,	// (0x0002a73f) msg_data_pane_g1

0x5a5e,	// (0x0002a747) msg_data_pane_g2

0x5a68,	// (0x0002a751) msg_data_pane_g3

0x5a72,	// (0x0002a75b) msg_data_pane_g4

0x5a7a,	// (0x0002a763) msg_data_pane_g5

0x5a82,	// (0x0002a76b) msg_data_pane_g6

0x5a8a,	// (0x0002a773) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x000341c9) msg_data_pane_g

0x5a92,	// (0x0002a77b) msg_text_pane_ParamLimits

0x5a92,	// (0x0002a77b) msg_text_pane

0x5ac1,	// (0x0002a7aa) qrid_highlight_pane_cp011_ParamLimits

0x5ac1,	// (0x0002a7aa) qrid_highlight_pane_cp011

0x2a0a,	// (0x000276f3) msg_body_pane

0x2a0a,	// (0x000276f3) msg_header_pane

0x5ae0,	// (0x0002a7c9) input_focus_pane_cp07

0x5b03,	// (0x0002a7ec) msg_header_pane_t1_ParamLimits

0x5b03,	// (0x0002a7ec) msg_header_pane_t1

0x5b17,	// (0x0002a800) msg_header_pane_t2_ParamLimits

0x5b17,	// (0x0002a800) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x000341dd) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x000341dd) msg_header_pane_t

0x5b29,	// (0x0002a812) msg_body_pane_g1

0x5b31,	// (0x0002a81a) msg_body_pane_t1_ParamLimits

0x5b31,	// (0x0002a81a) msg_body_pane_t1

0x5b62,	// (0x0002a84b) msg_body_pane_t2_ParamLimits

0x5b62,	// (0x0002a84b) msg_body_pane_t2

0x5b74,	// (0x0002a85d) msg_body_pane_t3_ParamLimits

0x5b74,	// (0x0002a85d) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x000341e2) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x000341e2) msg_body_pane_t

0x12da,	// (0x00025fc3) main_viewer_pane_g1_ParamLimits

0x12da,	// (0x00025fc3) main_viewer_pane_g1

0x12e8,	// (0x00025fd1) main_viewer_pane_g2_ParamLimits

0x12e8,	// (0x00025fd1) main_viewer_pane_g2

0x5ba4,	// (0x0002a88d) main_viewer_pane_g3_ParamLimits

0x5ba4,	// (0x0002a88d) main_viewer_pane_g3

0x5bb3,	// (0x0002a89c) main_viewer_pane_g4_ParamLimits

0x5bb3,	// (0x0002a89c) main_viewer_pane_g4

0xad51,	// (0x0002fa3a) main_viewer_pane_g5_ParamLimits

0xad51,	// (0x0002fa3a) main_viewer_pane_g5

0xad51,	// (0x0002fa3a) main_viewer_pane_g7_ParamLimits

0xad51,	// (0x0002fa3a) main_viewer_pane_g7

0xad63,	// (0x0002fa4c) main_viewer_pane_g8_ParamLimits

0xad63,	// (0x0002fa4c) main_viewer_pane_g8

0x0007,

0xf509,	// (0x000341f2) main_viewer_pane_g_ParamLimits

0xf509,	// (0x000341f2) main_viewer_pane_g

0x5bc2,	// (0x0002a8ab) viewer_content_pane_ParamLimits

0x5bc2,	// (0x0002a8ab) viewer_content_pane

0x5bff,	// (0x0002a8e8) main_postcard_pane_g1_ParamLimits

0x5bff,	// (0x0002a8e8) main_postcard_pane_g1

0x5c15,	// (0x0002a8fe) main_postcard_pane_g2_ParamLimits

0x5c15,	// (0x0002a8fe) main_postcard_pane_g2

0x5c2b,	// (0x0002a914) main_postcard_pane_g3_ParamLimits

0x5c2b,	// (0x0002a914) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00034203) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00034203) main_postcard_pane_g

0x5c42,	// (0x0002a92b) main_postcard_pane_g4

0xbfdb,	// (0x00030cc4) smil_status_volume_pane_g2

0x5c85,	// (0x0002a96e) postcard_pane_ParamLimits

0x5c85,	// (0x0002a96e) postcard_pane

0x5cd5,	// (0x0002a9be) postcard_pane_g1_ParamLimits

0x5cd5,	// (0x0002a9be) postcard_pane_g1

0x5ce3,	// (0x0002a9cc) postcard_pane_g2_ParamLimits

0x5ce3,	// (0x0002a9cc) postcard_pane_g2

0x5cef,	// (0x0002a9d8) postcard_pane_g3_ParamLimits

0x5cef,	// (0x0002a9d8) postcard_pane_g3

0x5cfb,	// (0x0002a9e4) postcard_pane_g4_ParamLimits

0x5cfb,	// (0x0002a9e4) postcard_pane_g4

0x5d09,	// (0x0002a9f2) postcard_pane_g5_ParamLimits

0x5d09,	// (0x0002a9f2) postcard_pane_g5

0x5d1b,	// (0x0002aa04) postcard_pane_g6_ParamLimits

0x5d1b,	// (0x0002aa04) postcard_pane_g6

0x5cd5,	// (0x0002a9be) postcard_pane_g7_ParamLimits

0x5cd5,	// (0x0002a9be) postcard_pane_g7

0x0006,

0xf527,	// (0x00034210) postcard_pane_g_ParamLimits

0xf527,	// (0x00034210) postcard_pane_g

0x5d33,	// (0x0002aa1c) main_mp2_pane_g1_ParamLimits

0x5d33,	// (0x0002aa1c) main_mp2_pane_g1

0x5d41,	// (0x0002aa2a) main_mp2_pane_g2_ParamLimits

0x5d41,	// (0x0002aa2a) main_mp2_pane_g2

0x5d4d,	// (0x0002aa36) main_mp2_pane_g3_ParamLimits

0x5d4d,	// (0x0002aa36) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0003421f) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0003421f) main_mp2_pane_g

0x5d59,	// (0x0002aa42) main_mp2_pane_t1_ParamLimits

0x5d59,	// (0x0002aa42) main_mp2_pane_t1

0x5d70,	// (0x0002aa59) main_mp2_pane_t2_ParamLimits

0x5d70,	// (0x0002aa59) main_mp2_pane_t2

0x5d84,	// (0x0002aa6d) main_mp2_pane_t3_ParamLimits

0x5d84,	// (0x0002aa6d) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00034226) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00034226) main_mp2_pane_t

0x5d96,	// (0x0002aa7f) pec_content_pane_ParamLimits

0x5d96,	// (0x0002aa7f) pec_content_pane

0x3e4f,	// (0x00028b38) scroll_pane_cp015

0x5da8,	// (0x0002aa91) pec_attribute_pane_ParamLimits

0x5da8,	// (0x0002aa91) pec_attribute_pane

0x5db8,	// (0x0002aaa1) pec_content_pane_g1_ParamLimits

0x5db8,	// (0x0002aaa1) pec_content_pane_g1

0x5dc4,	// (0x0002aaad) pec_content_pane_t1_ParamLimits

0x5dc4,	// (0x0002aaad) pec_content_pane_t1

0x5dd6,	// (0x0002aabf) pec_content_pane_t2_ParamLimits

0x5dd6,	// (0x0002aabf) pec_content_pane_t2

0x0001,

0xf544,	// (0x0003422d) pec_content_pane_t_ParamLimits

0xf544,	// (0x0003422d) pec_content_pane_t

0x5de8,	// (0x0002aad1) list_single_graphic_pane_cp01_ParamLimits

0x5de8,	// (0x0002aad1) list_single_graphic_pane_cp01

0x2c65,	// (0x0002794e) bg_popup_sub_pane_cp04

0x5e02,	// (0x0002aaeb) popup_mup_playback_window_g1

0x5e0e,	// (0x0002aaf7) popup_mup_playback_window_t1

0x5e23,	// (0x0002ab0c) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00034232) popup_mup_playback_window_t

0x5e78,	// (0x0002ab61) main_image_pane_g1_ParamLimits

0x5e78,	// (0x0002ab61) main_image_pane_g1

0xad7b,	// (0x0002fa64) scroll_pane_cp018_ParamLimits

0xad7b,	// (0x0002fa64) scroll_pane_cp018

0xad93,	// (0x0002fa7c) scroll_pane_cp016_ParamLimits

0xad93,	// (0x0002fa7c) scroll_pane_cp016

0x5f55,	// (0x0002ac3e) smil2_image_pane_ParamLimits

0x5f55,	// (0x0002ac3e) smil2_image_pane

0x5f8b,	// (0x0002ac74) smil2_root_pane_ParamLimits

0x5f8b,	// (0x0002ac74) smil2_root_pane

0x5fc3,	// (0x0002acac) smil2_text_pane_ParamLimits

0x5fc3,	// (0x0002acac) smil2_text_pane

0x2a0a,	// (0x000276f3) bg_list_pane_cp06

0xadcf,	// (0x0002fab8) grid_radio_pane

0x2a0a,	// (0x000276f3) bg_popup_window_pane_cp06

0xadd9,	// (0x0002fac2) main_fmradio_pane_t1

0x4e5b,	// (0x00029b44) heading_pane_cp04

0xade7,	// (0x0002fad0) main_fmradio_pane_t2

0xbdc3,	// (0x00030aac) popup_cale_lunar_info_window_g1

0xadf5,	// (0x0002fade) main_fmradio_pane_t3

0xbdcb,	// (0x00030ab4) popup_cale_lunar_info_window_g2

0xae05,	// (0x0002faee) main_fmradio_pane_t4

0x0001,

0xae13,	// (0x0002fafc) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0003430d) popup_cale_lunar_info_window_g

0xf55e,	// (0x00034247) main_fmradio_pane_t

0xae21,	// (0x0002fb0a) wait_bar_pane_cp03

0xae29,	// (0x0002fb12) cell_fmradio_pane_ParamLimits

0xae29,	// (0x0002fb12) cell_fmradio_pane

0x5cd5,	// (0x0002a9be) cell_fmradio_pane_g1_ParamLimits

0x5cd5,	// (0x0002a9be) cell_fmradio_pane_g1

0x2a0a,	// (0x000276f3) grid_highlight_pane_cp011

0xae3e,	// (0x0002fb27) poc_content_pane_ParamLimits

0xae3e,	// (0x0002fb27) poc_content_pane

0xae50,	// (0x0002fb39) scroll_pane_cp019

0x6053,	// (0x0002ad3c) popup_call_poc_act_window_ParamLimits

0x6053,	// (0x0002ad3c) popup_call_poc_act_window

0x6077,	// (0x0002ad60) popup_call_poc_inact_window_ParamLimits

0x6077,	// (0x0002ad60) popup_call_poc_inact_window

0xf5fb,	// (0x000342e4) bg_popup_call_poc_act_pane_g

0xbd3b,	// (0x00030a24) bg_popup_call_poc_inact_pane_g1

0xbd43,	// (0x00030a2c) bg_popup_call_poc_inact_pane_g2

0xae58,	// (0x0002fb41) popup_call_poc_act_window_g2

0xbd4b,	// (0x00030a34) bg_popup_call_poc_inact_pane_g3

0xbd53,	// (0x00030a3c) bg_popup_call_poc_inact_pane_g4

0xbd5b,	// (0x00030a44) bg_popup_call_poc_inact_pane_g5

0xae60,	// (0x0002fb49) popup_call_poc_act_window_t1_ParamLimits

0xae60,	// (0x0002fb49) popup_call_poc_act_window_t1

0xae88,	// (0x0002fb71) popup_call_poc_act_window_t2_ParamLimits

0xae88,	// (0x0002fb71) popup_call_poc_act_window_t2

0xaeb0,	// (0x0002fb99) popup_call_poc_act_window_t3_ParamLimits

0xaeb0,	// (0x0002fb99) popup_call_poc_act_window_t3

0xaed8,	// (0x0002fbc1) popup_call_poc_act_window_t4_ParamLimits

0xaed8,	// (0x0002fbc1) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00034252) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00034252) popup_call_poc_act_window_t

0xbd63,	// (0x00030a4c) bg_popup_call_poc_inact_pane_g6

0xbd6b,	// (0x00030a54) bg_popup_call_poc_inact_pane_g7

0xbd73,	// (0x00030a5c) bg_popup_call_poc_inact_pane_g8

0xaeea,	// (0x0002fbd3) popup_call_poc_inact_window_g2

0xbd7b,	// (0x00030a64) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x000342d1) bg_popup_call_poc_inact_pane_g

0xaef2,	// (0x0002fbdb) popup_call_poc_inact_window_t1_ParamLimits

0xaef2,	// (0x0002fbdb) popup_call_poc_inact_window_t1

0xaf07,	// (0x0002fbf0) popup_call_poc_inact_window_t2_ParamLimits

0xaf07,	// (0x0002fbf0) popup_call_poc_inact_window_t2

0xaf1c,	// (0x0002fc05) popup_call_poc_inact_window_t3_ParamLimits

0xaf1c,	// (0x0002fc05) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0003425b) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0003425b) popup_call_poc_inact_window_t

0xbf3b,	// (0x00030c24) context_pane_ParamLimits

0x6922,	// (0x0002b60b) signal_pane_ParamLimits

0x5457,	// (0x0002a140) main_call2_pane

0xbf29,	// (0x00030c12) popup_phob_thumbnail2_window_ParamLimits

0xbf29,	// (0x00030c12) popup_phob_thumbnail2_window

0xad39,	// (0x0002fa22) aid_hotspot_pointer_arrow_pane

0xad41,	// (0x0002fa2a) aid_hotspot_pointer_hand_pane

0x63e2,	// (0x0002b0cb) phob_pre_status_pane_g5

0x3534,	// (0x0002821d) cams_zoom_pane_ParamLimits

0x3543,	// (0x0002822c) image_vga_pane_ParamLimits

0x355d,	// (0x00028246) main_camera_pane_g1_ParamLimits

0x356f,	// (0x00028258) main_camera_pane_g2_ParamLimits

0x357f,	// (0x00028268) main_camera_pane_g3_ParamLimits

0x3593,	// (0x0002827c) main_camera_pane_g4_ParamLimits

0x35a7,	// (0x00028290) main_camera_pane_g5_ParamLimits

0x35bb,	// (0x000282a4) main_camera_pane_g6_ParamLimits

0x35cf,	// (0x000282b8) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00033f5a) main_camera_pane_g_ParamLimits

0x35ef,	// (0x000282d8) main_camera_pane_t1_ParamLimits

0x3605,	// (0x000282ee) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00033f6b) main_camera_pane_t_ParamLimits

0x2c65,	// (0x0002794e) bg_popup_preview_window_pane_cp01_ParamLimits

0x2c65,	// (0x0002794e) bg_popup_preview_window_pane_cp01

0xaf31,	// (0x0002fc1a) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf31,	// (0x0002fc1a) popup_phob_thumbnail2_window_g1

0x2a0a,	// (0x000276f3) call2_cli_visual_pane

0x60ab,	// (0x0002ad94) popup_call2_audio_conf_window_ParamLimits

0x60ab,	// (0x0002ad94) popup_call2_audio_conf_window

0x60d3,	// (0x0002adbc) popup_call2_audio_first_window_ParamLimits

0x60d3,	// (0x0002adbc) popup_call2_audio_first_window

0x6169,	// (0x0002ae52) popup_call2_audio_in_window_ParamLimits

0x6169,	// (0x0002ae52) popup_call2_audio_in_window

0x61b5,	// (0x0002ae9e) popup_call2_audio_out_window_ParamLimits

0x61b5,	// (0x0002ae9e) popup_call2_audio_out_window

0x6227,	// (0x0002af10) popup_call2_audio_second_window_ParamLimits

0x6227,	// (0x0002af10) popup_call2_audio_second_window

0x628d,	// (0x0002af76) popup_call2_audio_wait_window_ParamLimits

0x628d,	// (0x0002af76) popup_call2_audio_wait_window

0x2a0a,	// (0x000276f3) bg_popup_call2_act_pane_cp03

0x2c47,	// (0x00027930) list_conf_pane_cp

0xaf3d,	// (0x0002fc26) popup_call2_audio_conf_window_t1

0xaf4b,	// (0x0002fc34) list_single_graphic_popup_conf2_pane_ParamLimits

0xaf4b,	// (0x0002fc34) list_single_graphic_popup_conf2_pane

0x4eee,	// (0x00029bd7) list_highlight_pane_cp04

0xaf5e,	// (0x0002fc47) list_single_graphic_popup_conf2_pane_g1

0x4eff,	// (0x00029be8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00034262) list_single_graphic_popup_conf2_pane_g

0xaf68,	// (0x0002fc51) list_single_graphic_popup_conf2_pane_t1

0xaf76,	// (0x0002fc5f) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf76,	// (0x0002fc5f) bg_popup_call2_act_pane_cp01

0xb000,	// (0x0002fce9) call_type_pane_cp05_ParamLimits

0xb000,	// (0x0002fce9) call_type_pane_cp05

0xb054,	// (0x0002fd3d) popup_call2_audio_second_window_g1_ParamLimits

0xb054,	// (0x0002fd3d) popup_call2_audio_second_window_g1

0xb0a8,	// (0x0002fd91) popup_call2_audio_second_window_g2_ParamLimits

0xb0a8,	// (0x0002fd91) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00034267) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00034267) popup_call2_audio_second_window_g

0xb10d,	// (0x0002fdf6) popup_call2_audio_second_window_t1_ParamLimits

0xb10d,	// (0x0002fdf6) popup_call2_audio_second_window_t1

0xb1c8,	// (0x0002feb1) popup_call2_audio_second_window_t2_ParamLimits

0xb1c8,	// (0x0002feb1) popup_call2_audio_second_window_t2

0xb21b,	// (0x0002ff04) popup_call2_audio_second_window_t3_ParamLimits

0xb21b,	// (0x0002ff04) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0003426e) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0003426e) popup_call2_audio_second_window_t

0x2a0a,	// (0x000276f3) bg_popup_call2_in_pane_cp02

0x2a14,	// (0x000276fd) call_type_pane_cp04

0x2a1c,	// (0x00027705) popup_call2_audio_wait_window_g1

0x2a24,	// (0x0002770d) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00033e47) popup_call2_audio_wait_window_g

0x2a2c,	// (0x00027715) popup_call2_audio_wait_window_t3

0xb30e,	// (0x0002fff7) bg_popup_call2_act_pane_ParamLimits

0xb30e,	// (0x0002fff7) bg_popup_call2_act_pane

0xb3ce,	// (0x000300b7) call_type_pane_cp03_ParamLimits

0xb3ce,	// (0x000300b7) call_type_pane_cp03

0xb432,	// (0x0003011b) popup_call2_audio_first_window_g1_ParamLimits

0xb432,	// (0x0003011b) popup_call2_audio_first_window_g1

0xb4a2,	// (0x0003018b) popup_call2_audio_first_window_g2_ParamLimits

0xb4a2,	// (0x0003018b) popup_call2_audio_first_window_g2

0x575d,	// (0x0002a446) popup_call2_audio_first_window_g3_ParamLimits

0x575d,	// (0x0002a446) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00034277) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00034277) popup_call2_audio_first_window_g

0xb580,	// (0x00030269) popup_call2_audio_first_window_t1_ParamLimits

0xb580,	// (0x00030269) popup_call2_audio_first_window_t1

0xb683,	// (0x0003036c) popup_call2_audio_first_window_t4_ParamLimits

0xb683,	// (0x0003036c) popup_call2_audio_first_window_t4

0xb766,	// (0x0003044f) popup_call2_audio_first_window_t5_ParamLimits

0xb766,	// (0x0003044f) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00034282) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00034282) popup_call2_audio_first_window_t

0x2c5d,	// (0x00027946) bg_popup_call2_act_pane_g1

0xbdd5,	// (0x00030abe) popup_cale_lunar_info_window_t1

0xbde3,	// (0x00030acc) popup_cale_lunar_info_window_t2

0xbdf1,	// (0x00030ada) popup_cale_lunar_info_window_t3

0x2a0a,	// (0x000276f3) bg_popup_call2_bubble_pane

0xb867,	// (0x00030550) bg_popup_call2_in_pane_cp01_ParamLimits

0xb867,	// (0x00030550) bg_popup_call2_in_pane_cp01

0x26c2,	// (0x000273ab) call_type_pane_cp02

0xb8af,	// (0x00030598) popup_call2_audio_out_window_g1_ParamLimits

0xb8af,	// (0x00030598) popup_call2_audio_out_window_g1

0xb8db,	// (0x000305c4) popup_call2_audio_out_window_g2_ParamLimits

0xb8db,	// (0x000305c4) popup_call2_audio_out_window_g2

0xb903,	// (0x000305ec) popup_call2_audio_out_window_g3_ParamLimits

0xb903,	// (0x000305ec) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0003428b) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0003428b) popup_call2_audio_out_window_g

0xb93e,	// (0x00030627) popup_call2_audio_out_window_t1_ParamLimits

0xb93e,	// (0x00030627) popup_call2_audio_out_window_t1

0xb99d,	// (0x00030686) popup_call2_audio_out_window_t2_ParamLimits

0xb99d,	// (0x00030686) popup_call2_audio_out_window_t2

0xb9f1,	// (0x000306da) popup_call2_audio_out_window_t3_ParamLimits

0xb9f1,	// (0x000306da) popup_call2_audio_out_window_t3

0xba07,	// (0x000306f0) popup_call2_audio_out_window_t4_ParamLimits

0xba07,	// (0x000306f0) popup_call2_audio_out_window_t4

0xba1d,	// (0x00030706) popup_call2_audio_out_window_t5_ParamLimits

0xba1d,	// (0x00030706) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00034294) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00034294) popup_call2_audio_out_window_t

0xba81,	// (0x0003076a) bg_popup_call2_in_pane_ParamLimits

0xba81,	// (0x0003076a) bg_popup_call2_in_pane

0xbadd,	// (0x000307c6) popup_call2_audio_in_window_g1_ParamLimits

0xbadd,	// (0x000307c6) popup_call2_audio_in_window_g1

0xbb15,	// (0x000307fe) popup_call2_audio_in_window_g2_ParamLimits

0xbb15,	// (0x000307fe) popup_call2_audio_in_window_g2

0xbb4d,	// (0x00030836) popup_call2_audio_in_window_g3_ParamLimits

0xbb4d,	// (0x00030836) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x000342a1) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x000342a1) popup_call2_audio_in_window_g

0xbba5,	// (0x0003088e) popup_call2_audio_in_window_t1_ParamLimits

0xbba5,	// (0x0003088e) popup_call2_audio_in_window_t1

0xbc25,	// (0x0003090e) popup_call2_audio_in_window_t2_ParamLimits

0xbc25,	// (0x0003090e) popup_call2_audio_in_window_t2

0xbca5,	// (0x0003098e) popup_call2_audio_in_window_t3_ParamLimits

0xbca5,	// (0x0003098e) popup_call2_audio_in_window_t3

0xbcbf,	// (0x000309a8) popup_call2_audio_in_window_t4_ParamLimits

0xbcbf,	// (0x000309a8) popup_call2_audio_in_window_t4

0xbcd1,	// (0x000309ba) popup_call2_audio_in_window_t5_ParamLimits

0xbcd1,	// (0x000309ba) popup_call2_audio_in_window_t5

0xbce6,	// (0x000309cf) popup_call2_audio_in_window_t6_ParamLimits

0xbce6,	// (0x000309cf) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x000342aa) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x000342aa) popup_call2_audio_in_window_t

0x2c5d,	// (0x00027946) bg_popup_call2_in_pane_g1

0xbdff,	// (0x00030ae8) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x00034312) popup_cale_lunar_info_window_t

0x2c65,	// (0x0002794e) bg_popup_call2_rect_pane_ParamLimits

0x2c65,	// (0x0002794e) bg_popup_call2_rect_pane

0x2a0a,	// (0x000276f3) call2_cli_visual_graphic_pane

0x2a0a,	// (0x000276f3) call2_cli_visual_text_pane

0xbfee,	// (0x00030cd7) smil_status_volume_pane_g3

0x0002,

0x2fec,	// (0x00027cd5) call2_cli_visual_graphic_pane_g1

0x2fec,	// (0x00027cd5) call2_cli_visual_graphic_pane_g2

0x2fec,	// (0x00027cd5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x000342b7) call2_cli_visual_graphic_pane_g

0xbcfb,	// (0x000309e4) bg_popup_call2_rect_pane_g1

0x3104,	// (0x00027ded) bg_popup_call2_rect_pane_g2

0xbd03,	// (0x000309ec) bg_popup_call2_rect_pane_g3

0xbd0b,	// (0x000309f4) bg_popup_call2_rect_pane_g4

0xbd13,	// (0x000309fc) bg_popup_call2_rect_pane_g5

0xbd1b,	// (0x00030a04) bg_popup_call2_rect_pane_g6

0xbd23,	// (0x00030a0c) bg_popup_call2_rect_pane_g7

0xbd2b,	// (0x00030a14) bg_popup_call2_rect_pane_g8

0xbd33,	// (0x00030a1c) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x000342be) bg_popup_call2_rect_pane_g

0xbd3b,	// (0x00030a24) bg_popup_call2_bubble_pane_g1

0xbd43,	// (0x00030a2c) bg_popup_call2_bubble_pane_g2

0xbd4b,	// (0x00030a34) bg_popup_call2_bubble_pane_g3

0xbd53,	// (0x00030a3c) bg_popup_call2_bubble_pane_g4

0xbd5b,	// (0x00030a44) bg_popup_call2_bubble_pane_g5

0xbd63,	// (0x00030a4c) bg_popup_call2_bubble_pane_g6

0xbd6b,	// (0x00030a54) bg_popup_call2_bubble_pane_g7

0xbd73,	// (0x00030a5c) bg_popup_call2_bubble_pane_g8

0xbd7b,	// (0x00030a64) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x000342d1) bg_popup_call2_bubble_pane_g

0x318b,	// (0x00027e74) aid_cale_week_size_cell_pane

0x361f,	// (0x00028308) aid_cams_cif_uncrop_pane_ParamLimits

0x361f,	// (0x00028308) aid_cams_cif_uncrop_pane

0x3816,	// (0x000284ff) aid_cams_size_cell_ParamLimits

0x3816,	// (0x000284ff) aid_cams_size_cell

0x382a,	// (0x00028513) grid_cams_pane_ParamLimits

0x3844,	// (0x0002852d) linegrid_cams_pane_ParamLimits

0x3a75,	// (0x0002875e) call_video_pane_t1

0x3a87,	// (0x00028770) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00033fbe) call_video_pane_t

0x40af,	// (0x00028d98) aid_cale_month_size_cell_pane_ParamLimits

0x40af,	// (0x00028d98) aid_cale_month_size_cell_pane

0xf672,	// (0x0003435b) smil_status_volume_pane_g

0xbffb,	// (0x00030ce4) volume_smil_pane_ParamLimits

0x22d0,	// (0x00026fb9) aid_popup2_width_pane

0x305d,	// (0x00027d46) cell_qdial_pane_g4_ParamLimits

0x305d,	// (0x00027d46) cell_qdial_pane_g4

0x51e3,	// (0x00029ecc) aid_blid_cardinal_pane_ParamLimits

0x51f3,	// (0x00029edc) aid_blid_destination_pane_ParamLimits

0x51f3,	// (0x00029edc) aid_blid_destination_pane

0x2c65,	// (0x0002794e) bg_popup_call_poc_act_pane_ParamLimits

0x2c65,	// (0x0002794e) bg_popup_call_poc_act_pane

0x2c65,	// (0x0002794e) bg_popup_call_poc_inact_pane_ParamLimits

0x2c65,	// (0x0002794e) bg_popup_call_poc_inact_pane

0xbd83,	// (0x00030a6c) bg_popup_call_poc_act_pane_g1

0xbd8b,	// (0x00030a74) bg_popup_call_poc_act_pane_g2

0xbd93,	// (0x00030a7c) bg_popup_call_poc_act_pane_g3

0xbd53,	// (0x00030a3c) bg_popup_call_poc_act_pane_g4

0xbd5b,	// (0x00030a44) bg_popup_call_poc_act_pane_g5

0xbd9b,	// (0x00030a84) bg_popup_call_poc_act_pane_g6

0xbd6b,	// (0x00030a54) bg_popup_call_poc_act_pane_g7

0xbda3,	// (0x00030a8c) bg_popup_call_poc_act_pane_g8

0x2a0a,	// (0x000276f3) main_usb_pane

0xbf00,	// (0x00030be9) popup_cale_lunar_info_window

0x3d2b,	// (0x00028a14) im_reading_pane_t1_ParamLimits

0x3d6a,	// (0x00028a53) list_im_pane_ParamLimits

0x3d7b,	// (0x00028a64) scroll_pane_cp07_ParamLimits

0x2a0a,	// (0x000276f3) grid_highlight_pane_cp012

0x2c65,	// (0x0002794e) mup_scale_pane_ParamLimits

0x5cd5,	// (0x0002a9be) main_usb_pane_g1_ParamLimits

0x5cd5,	// (0x0002a9be) main_usb_pane_g1

0x62ee,	// (0x0002afd7) main_usb_pane_g2_ParamLimits

0x62ee,	// (0x0002afd7) main_usb_pane_g2

0x0001,

0xf612,	// (0x000342fb) main_usb_pane_g_ParamLimits

0xf612,	// (0x000342fb) main_usb_pane_g

0x6304,	// (0x0002afed) main_usb_pane_t1_ParamLimits

0x6304,	// (0x0002afed) main_usb_pane_t1

0x6316,	// (0x0002afff) main_usb_pane_t2_ParamLimits

0x6316,	// (0x0002afff) main_usb_pane_t2

0x6328,	// (0x0002b011) main_usb_pane_t3_ParamLimits

0x6328,	// (0x0002b011) main_usb_pane_t3

0x633a,	// (0x0002b023) main_usb_pane_t4_ParamLimits

0x633a,	// (0x0002b023) main_usb_pane_t4

0x634f,	// (0x0002b038) main_usb_pane_t5_ParamLimits

0x634f,	// (0x0002b038) main_usb_pane_t5

0x6364,	// (0x0002b04d) main_usb_pane_t6_ParamLimits

0x6364,	// (0x0002b04d) main_usb_pane_t6

0x0005,

0xf617,	// (0x00034300) main_usb_pane_t_ParamLimits

0x5182,	// (0x00029e6b) aid_text_placing

0x518d,	// (0x00029e76) main_location2_pane_t1_ParamLimits

0x51a3,	// (0x00029e8c) main_location2_pane_t2_ParamLimits

0x51b9,	// (0x00029ea2) main_location2_pane_t3_ParamLimits

0x51cf,	// (0x00029eb8) main_location2_pane_t4_ParamLimits

0x51cf,	// (0x00029eb8) main_location2_pane_t4

0xf436,	// (0x0003411f) main_location2_pane_t_ParamLimits

0x2d41,	// (0x00027a2a) find_pinb_pane_g2_ParamLimits

0x2d41,	// (0x00027a2a) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00033e6d) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00033e6d) find_pinb_pane_g

0x2d4d,	// (0x00027a36) find_pinb_pane_t1_ParamLimits

0x2d5f,	// (0x00027a48) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00033e72) find_pinb_pane_t_ParamLimits

0x2a0a,	// (0x000276f3) main_call3_pane

0x4458,	// (0x00029141) cale_month_day_heading_pane_t1_ParamLimits

0x44b6,	// (0x0002919f) cale_month_day_heading_pane_t2_ParamLimits

0x451b,	// (0x00029204) cale_month_day_heading_pane_t3_ParamLimits

0x4580,	// (0x00029269) cale_month_day_heading_pane_t4_ParamLimits

0x45e5,	// (0x000292ce) cale_month_day_heading_pane_t5_ParamLimits

0x464a,	// (0x00029333) cale_month_day_heading_pane_t6_ParamLimits

0x46af,	// (0x00029398) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00033ff6) cale_month_day_heading_pane_t_ParamLimits

0x48ab,	// (0x00029594) smil_status_volume_pane

0x5ca9,	// (0x0002a992) postcard_address_pane_ParamLimits

0x5ca9,	// (0x0002a992) postcard_address_pane

0x5cbf,	// (0x0002a9a8) postcard_message_pane_ParamLimits

0x5cbf,	// (0x0002a9a8) postcard_message_pane

0x62c7,	// (0x0002afb0) call2_cli_visual_pane_t1_ParamLimits

0x62c7,	// (0x0002afb0) call2_cli_visual_pane_t1

0x6b33,	// (0x0002b81c) postcard_message_pane_t1_ParamLimits

0x6b33,	// (0x0002b81c) postcard_message_pane_t1

0xc010,	// (0x00030cf9) postcard_address_pane_t1_ParamLimits

0xc010,	// (0x00030cf9) postcard_address_pane_t1

0x6b1f,	// (0x0002b808) popup_call3_audio_in_window_ParamLimits

0x6b1f,	// (0x0002b808) popup_call3_audio_in_window

0x69a4,	// (0x0002b68d) bg_popup_call3_in_pane_ParamLimits

0x69a4,	// (0x0002b68d) bg_popup_call3_in_pane

0x6a20,	// (0x0002b709) popup_call3_audio_in_window_g1_ParamLimits

0x6a20,	// (0x0002b709) popup_call3_audio_in_window_g1

0x6a40,	// (0x0002b729) popup_call3_audio_in_window_g2_ParamLimits

0x6a40,	// (0x0002b729) popup_call3_audio_in_window_g2

0x6a60,	// (0x0002b749) popup_call3_audio_in_window_g3_ParamLimits

0x6a60,	// (0x0002b749) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x00034362) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x00034362) popup_call3_audio_in_window_g

0x6a91,	// (0x0002b77a) popup_call3_audio_in_window_t1_ParamLimits

0x6a91,	// (0x0002b77a) popup_call3_audio_in_window_t1

0x6acf,	// (0x0002b7b8) popup_call3_audio_in_window_t2_ParamLimits

0x6acf,	// (0x0002b7b8) popup_call3_audio_in_window_t2

0x6b0d,	// (0x0002b7f6) popup_call3_audio_in_window_t3_ParamLimits

0x6b0d,	// (0x0002b7f6) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0003436b) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0003436b) popup_call3_audio_in_window_t

0x5457,	// (0x0002a140) bg_popup_call3_rect_pane

0xbcfb,	// (0x000309e4) bg_popup_call3_rect_pane_g1

0x3104,	// (0x00027ded) bg_popup_call3_rect_pane_g2

0xbd03,	// (0x000309ec) bg_popup_call3_rect_pane_g3

0xbd0b,	// (0x000309f4) bg_popup_call3_rect_pane_g4

0xbd13,	// (0x000309fc) bg_popup_call3_rect_pane_g5

0xbd1b,	// (0x00030a04) bg_popup_call3_rect_pane_g6

0xbd23,	// (0x00030a0c) bg_popup_call3_rect_pane_g7

0x5755,	// (0x0002a43e) mup_visualizer_osc_pane

0x576b,	// (0x0002a454) mup_visualizer_spec_pane

0x69d4,	// (0x0002b6bd) call3_video_qcif_pane_ParamLimits

0x69d4,	// (0x0002b6bd) call3_video_qcif_pane

0x69e7,	// (0x0002b6d0) call3_video_qcif_uncrop_pane_ParamLimits

0x69e7,	// (0x0002b6d0) call3_video_qcif_uncrop_pane

0x69f7,	// (0x0002b6e0) call3_video_subqcif_pane_ParamLimits

0x69f7,	// (0x0002b6e0) call3_video_subqcif_pane

0x6a0d,	// (0x0002b6f6) call3_video_subqcif_uncrop_pane_ParamLimits

0x6a0d,	// (0x0002b6f6) call3_video_subqcif_uncrop_pane

0x6a80,	// (0x0002b769) popup_call3_audio_in_window_g4_ParamLimits

0x6a80,	// (0x0002b769) popup_call3_audio_in_window_g4

0x6993,	// (0x0002b67c) mup_spec_half_pane

0x699c,	// (0x0002b685) mup_spec_half_pane_cp

0xbfae,	// (0x00030c97) mup_osc_middle_pane

0xbfb7,	// (0x00030ca0) mup_visualizer_osc_pane_g1

0x6973,	// (0x0002b65c) mup_spec_bar_pane_ParamLimits

0x6973,	// (0x0002b65c) mup_spec_bar_pane

0xbf9b,	// (0x00030c84) mup_spec_bar_pane_g1

0xbfa5,	// (0x00030c8e) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00034356) mup_spec_bar_pane_g

0x318b,	// (0x00027e74) aid_cale_week_size_cell_pane_ParamLimits

0x319e,	// (0x00027e87) bg_cale_heading_pane_ParamLimits

0x31ba,	// (0x00027ea3) bg_cale_pane_cp01_ParamLimits

0x31d3,	// (0x00027ebc) cale_week_corner_pane_ParamLimits

0x31e9,	// (0x00027ed2) cale_week_day_heading_pane_ParamLimits

0x3205,	// (0x00027eee) cale_week_scroll_pane_g1_ParamLimits

0x321e,	// (0x00027f07) cale_week_scroll_pane_g2_ParamLimits

0x322f,	// (0x00027f18) cale_week_scroll_pane_g3_ParamLimits

0x3240,	// (0x00027f29) cale_week_scroll_pane_g4_ParamLimits

0x3251,	// (0x00027f3a) cale_week_scroll_pane_g5_ParamLimits

0x3262,	// (0x00027f4b) cale_week_scroll_pane_g6_ParamLimits

0x3273,	// (0x00027f5c) cale_week_scroll_pane_g7_ParamLimits

0x3284,	// (0x00027f6d) cale_week_scroll_pane_g8_ParamLimits

0x3295,	// (0x00027f7e) cale_week_scroll_pane_g9_ParamLimits

0x32a6,	// (0x00027f8f) cale_week_scroll_pane_g10_ParamLimits

0x32b7,	// (0x00027fa0) cale_week_scroll_pane_g11_ParamLimits

0x32c8,	// (0x00027fb1) cale_week_scroll_pane_g12_ParamLimits

0x32d9,	// (0x00027fc2) cale_week_scroll_pane_g13_ParamLimits

0x32f2,	// (0x00027fdb) cale_week_scroll_pane_g14_ParamLimits

0x330b,	// (0x00027ff4) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00033efe) cale_week_scroll_pane_g_ParamLimits

0x3324,	// (0x0002800d) cale_week_time_pane_ParamLimits

0x3335,	// (0x0002801e) grid_cale_week_pane_ParamLimits

0x3350,	// (0x00028039) listscroll_cale_week_pane_t1

0x3362,	// (0x0002804b) scroll_pane_cp08_ParamLimits

0x4123,	// (0x00028e0c) cale_month_corner_pane_ParamLimits

0x4407,	// (0x000290f0) cale_month_pane_t1

0x4419,	// (0x00029102) cale_month_week_pane_ParamLimits

0x4dba,	// (0x00029aa3) popup_call_status_window_g1_ParamLimits

0x4dce,	// (0x00029ab7) popup_call_status_window_g2_ParamLimits

0x4de2,	// (0x00029acb) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x000340a6) popup_call_status_window_g_ParamLimits

0x4e4b,	// (0x00029b34) aid_call2_pane

0x5ae9,	// (0x0002a7d2) msg_header_pane_g1

0x5ca9,	// (0x0002a992) postcard_address2_pane_ParamLimits

0x5ca9,	// (0x0002a992) postcard_address2_pane

0x5cbf,	// (0x0002a9a8) postcard_message2_pane_ParamLimits

0x5cbf,	// (0x0002a9a8) postcard_message2_pane

0x6930,	// (0x0002b619) message2_row_pane_ParamLimits

0x6930,	// (0x0002b619) message2_row_pane

0xbf56,	// (0x00030c3f) address2_row_pane_ParamLimits

0xbf56,	// (0x00030c3f) address2_row_pane

0xbf69,	// (0x00030c52) postcard_message2_row_pane_g1

0xbf71,	// (0x00030c5a) postcard_message2_row_pane_t1

0xbf69,	// (0x00030c52) address2_row_pane_g1

0xbf71,	// (0x00030c5a) address2_row_pane_t1

0x1290,	// (0x00025f79) aid_size_cell_vorec

0x2a0a,	// (0x000276f3) main_rss_pane

0x6953,	// (0x0002b63c) rss_list_single_pane_ParamLimits

0x6953,	// (0x0002b63c) rss_list_single_pane

0xbf7f,	// (0x00030c68) rss_list_single_pane_t1

0xbf8d,	// (0x00030c76) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x00034351) rss_list_single_pane_t

0x2a0a,	// (0x000276f3) main_camera2_pane

0x2a0a,	// (0x000276f3) main_video2_pane

0x134a,	// (0x00026033) cams_zoom_pane_cp2_ParamLimits

0x134a,	// (0x00026033) cams_zoom_pane_cp2

0x1361,	// (0x0002604a) image2_vga_pane_ParamLimits

0x1361,	// (0x0002604a) image2_vga_pane

0x13a9,	// (0x00026092) main_camera2_pane_g1_ParamLimits

0x13a9,	// (0x00026092) main_camera2_pane_g1

0x13c9,	// (0x000260b2) main_camera2_pane_g2_ParamLimits

0x13c9,	// (0x000260b2) main_camera2_pane_g2

0x13e0,	// (0x000260c9) main_camera2_pane_g3_ParamLimits

0x13e0,	// (0x000260c9) main_camera2_pane_g3

0x13f7,	// (0x000260e0) main_camera2_pane_g4_ParamLimits

0x13f7,	// (0x000260e0) main_camera2_pane_g4

0x140e,	// (0x000260f7) main_camera2_pane_g5_ParamLimits

0x140e,	// (0x000260f7) main_camera2_pane_g5

0x1425,	// (0x0002610e) main_camera2_pane_g6_ParamLimits

0x1425,	// (0x0002610e) main_camera2_pane_g6

0x143c,	// (0x00026125) main_camera2_pane_g7_ParamLimits

0x143c,	// (0x00026125) main_camera2_pane_g7

0x1453,	// (0x0002613c) main_camera2_pane_g8_ParamLimits

0x1453,	// (0x0002613c) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00034372) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00034372) main_camera2_pane_g

0x1481,	// (0x0002616a) main_camera2_pane_t1_ParamLimits

0x1481,	// (0x0002616a) main_camera2_pane_t1

0x14b6,	// (0x0002619f) main_camera2_pane_t2_ParamLimits

0x14b6,	// (0x0002619f) main_camera2_pane_t2

0x14d3,	// (0x000261bc) main_camera2_pane_t3_ParamLimits

0x14d3,	// (0x000261bc) main_camera2_pane_t3

0x1531,	// (0x0002621a) main_camera2_pane_t4_ParamLimits

0x1531,	// (0x0002621a) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00034385) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00034385) main_camera2_pane_t

0x15ba,	// (0x000262a3) cams_zoom_pane_cp4_ParamLimits

0x15ba,	// (0x000262a3) cams_zoom_pane_cp4

0x15d0,	// (0x000262b9) image2_cif_pane_ParamLimits

0x15d0,	// (0x000262b9) image2_cif_pane

0x15fb,	// (0x000262e4) image2_subqcif_pane_ParamLimits

0x15fb,	// (0x000262e4) image2_subqcif_pane

0x1616,	// (0x000262ff) main_video2_pane_g1_ParamLimits

0x1616,	// (0x000262ff) main_video2_pane_g1

0x1630,	// (0x00026319) main_video2_pane_g2_ParamLimits

0x1630,	// (0x00026319) main_video2_pane_g2

0x1646,	// (0x0002632f) main_video2_pane_g3_ParamLimits

0x1646,	// (0x0002632f) main_video2_pane_g3

0x165c,	// (0x00026345) main_video2_pane_g4_ParamLimits

0x165c,	// (0x00026345) main_video2_pane_g4

0x1672,	// (0x0002635b) main_video2_pane_g5_ParamLimits

0x1672,	// (0x0002635b) main_video2_pane_g5

0x1688,	// (0x00026371) main_video2_pane_g6_ParamLimits

0x1688,	// (0x00026371) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00034394) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00034394) main_video2_pane_g

0x16a2,	// (0x0002638b) main_video2_pane_t1_ParamLimits

0x16a2,	// (0x0002638b) main_video2_pane_t1

0x16c6,	// (0x000263af) main_video2_pane_t2_ParamLimits

0x16c6,	// (0x000263af) main_video2_pane_t2

0x1716,	// (0x000263ff) main_video2_pane_t3_ParamLimits

0x1716,	// (0x000263ff) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x000343a1) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x000343a1) main_video2_pane_t

0x6422,	// (0x0002b10b) call_muted_g2

0x0001,

0xf65a,	// (0x00034343) call_muted_g

0x2a0a,	// (0x000276f3) main_mup2_pane

0x6b4e,	// (0x0002b837) main_mup2_pane_g1_ParamLimits

0x6b4e,	// (0x0002b837) main_mup2_pane_g1

0x6b5a,	// (0x0002b843) main_mup2_pane_g2_ParamLimits

0x6b5a,	// (0x0002b843) main_mup2_pane_g2

0xc131,	// (0x00030e1a) main_mup_pane_g13_cp1

0xc139,	// (0x00030e22) mup_volume_pane_cp1

0x6b78,	// (0x0002b861) main_mup2_pane_g4_ParamLimits

0x6b78,	// (0x0002b861) main_mup2_pane_g4

0x6b8a,	// (0x0002b873) main_mup2_pane_g5_ParamLimits

0x6b8a,	// (0x0002b873) main_mup2_pane_g5

0x6b9c,	// (0x0002b885) main_mup2_pane_g6_ParamLimits

0x6b9c,	// (0x0002b885) main_mup2_pane_g6

0x6bae,	// (0x0002b897) main_mup2_pane_g7_ParamLimits

0x6bae,	// (0x0002b897) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x000343a8) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x000343a8) main_mup2_pane_g

0x6bc6,	// (0x0002b8af) main_mup2_pane_t1_ParamLimits

0x6bc6,	// (0x0002b8af) main_mup2_pane_t1

0x6bdc,	// (0x0002b8c5) main_mup2_pane_t2_ParamLimits

0x6bdc,	// (0x0002b8c5) main_mup2_pane_t2

0x6bf2,	// (0x0002b8db) main_mup2_pane_t3_ParamLimits

0x6bf2,	// (0x0002b8db) main_mup2_pane_t3

0x6c08,	// (0x0002b8f1) main_mup2_pane_t4_ParamLimits

0x6c08,	// (0x0002b8f1) main_mup2_pane_t4

0x6c20,	// (0x0002b909) main_mup2_pane_t5_ParamLimits

0x6c20,	// (0x0002b909) main_mup2_pane_t5

0x6c38,	// (0x0002b921) main_mup2_pane_t6_ParamLimits

0x6c38,	// (0x0002b921) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x000343b7) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x000343b7) main_mup2_pane_t

0x6c68,	// (0x0002b951) mup2_visualizer_pane_ParamLimits

0x6c68,	// (0x0002b951) mup2_visualizer_pane

0x6c96,	// (0x0002b97f) mup_progress_pane_cp_ParamLimits

0x6c96,	// (0x0002b97f) mup_progress_pane_cp

0xc113,	// (0x00030dfc) mup_volume_pane_cp_ParamLimits

0xc113,	// (0x00030dfc) mup_volume_pane_cp

0x6cac,	// (0x0002b995) mup2_visualizer_pane_g1_ParamLimits

0x6cac,	// (0x0002b995) mup2_visualizer_pane_g1

0xc052,	// (0x00030d3b) mup2_visualizer_pane_g2_ParamLimits

0xc052,	// (0x00030d3b) mup2_visualizer_pane_g2

0x6cc1,	// (0x0002b9aa) mup2_visualizer_pane_g3_ParamLimits

0x6cc1,	// (0x0002b9aa) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x000343c4) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x000343c4) mup2_visualizer_pane_g

0xadc7,	// (0x0002fab0) aid_size_cell_fmradio

0x65d2,	// (0x0002b2bb) aid_height_parent_landcape

0x3e36,	// (0x00028b1f) wml_content_pane_cp

0x3e3e,	// (0x00028b27) wml_tabs_pane

0x3e47,	// (0x00028b30) popup_wml_miniature_window

0x3e4f,	// (0x00028b38) scroll_pane_cp021

0x3e63,	// (0x00028b4c) wml_content_pane_comp8

0x2a0a,	// (0x000276f3) bg_popup_sub_pane_cp05

0xc070,	// (0x00030d59) popup_wml_miniature_window_g1

0xc078,	// (0x00030d61) wml_miniature_view_pane

0x6ccd,	// (0x0002b9b6) aid_size_wml_view

0x6cd5,	// (0x0002b9be) wml_miniature_view_pane_g1

0x6cde,	// (0x0002b9c7) wml_miniature_view_pane_g2

0x6ce7,	// (0x0002b9d0) wml_miniature_view_pane_g3

0x6cef,	// (0x0002b9d8) wml_miniature_view_pane_g4

0x6cf7,	// (0x0002b9e0) wml_miniature_view_pane_g5

0x6cff,	// (0x0002b9e8) wml_miniature_view_pane_g6

0x6d07,	// (0x0002b9f0) wml_miniature_view_pane_g7

0x6d0f,	// (0x0002b9f8) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x000343cb) wml_miniature_view_pane_g

0xc080,	// (0x00030d69) background_graphic_ParamLimits

0xc080,	// (0x00030d69) background_graphic

0xc08c,	// (0x00030d75) wml_tabs_2_pane

0xc095,	// (0x00030d7e) wml_tabs_3_pane_ParamLimits

0xc095,	// (0x00030d7e) wml_tabs_3_pane

0xc0a7,	// (0x00030d90) wml_tabs_4_pane_ParamLimits

0xc0a7,	// (0x00030d90) wml_tabs_4_pane

0xc0bd,	// (0x00030da6) wml_tabs_5_pane_ParamLimits

0xc0bd,	// (0x00030da6) wml_tabs_5_pane

0xc0d7,	// (0x00030dc0) wml_tabs_pane_g2_ParamLimits

0xc0d7,	// (0x00030dc0) wml_tabs_pane_g2

0xc0eb,	// (0x00030dd4) wml_tabs_pane_g3_ParamLimits

0xc0eb,	// (0x00030dd4) wml_tabs_pane_g3

0x6d17,	// (0x0002ba00) wml_tabs_2_active_pane_ParamLimits

0x6d17,	// (0x0002ba00) wml_tabs_2_active_pane

0x6d2b,	// (0x0002ba14) wml_tabs_2_passive_pane_ParamLimits

0x6d2b,	// (0x0002ba14) wml_tabs_2_passive_pane

0x6d3f,	// (0x0002ba28) wml_tabs_3_active_pane_cp_ParamLimits

0x6d3f,	// (0x0002ba28) wml_tabs_3_active_pane_cp

0x6d54,	// (0x0002ba3d) wml_tabs_3_passive_pane_ParamLimits

0x6d54,	// (0x0002ba3d) wml_tabs_3_passive_pane

0x6d67,	// (0x0002ba50) wml_tabs_3_passive_pane_cp_ParamLimits

0x6d67,	// (0x0002ba50) wml_tabs_3_passive_pane_cp

0x6d7e,	// (0x0002ba67) tabs_4_active_pane

0x6d86,	// (0x0002ba6f) tabs_4_passive_pane

0x6d90,	// (0x0002ba79) tabs_4_passive_pane_cp

0x6d98,	// (0x0002ba81) tabs_4_passive_pane_cp2

0x62e6,	// (0x0002afcf) aid_height_text

0x5727,	// (0x0002a410) mup_volume_cont_pane_ParamLimits

0x5727,	// (0x0002a410) mup_volume_cont_pane

0x2cfb,	// (0x000279e4) aid_size_cell_pinb

0x2d05,	// (0x000279ee) aid_size_list_pinb

0x6c82,	// (0x0002b96b) mup2_volume_cont_pane_ParamLimits

0x6c82,	// (0x0002b96b) mup2_volume_cont_pane

0xc0ff,	// (0x00030de8) mup2_volume_cont_pane_g1_ParamLimits

0xc0ff,	// (0x00030de8) mup2_volume_cont_pane_g1

0x22dc,	// (0x00026fc5) aid_size_cell_touch_ParamLimits

0x22dc,	// (0x00026fc5) aid_size_cell_touch

0x254c,	// (0x00027235) touch_pane_ParamLimits

0x254c,	// (0x00027235) touch_pane

0x22be,	// (0x00026fa7) main_rss2_pane

0xc141,	// (0x00030e2a) listscroll_rss2_pane

0xc14a,	// (0x00030e33) rss2_navigation_pane

0xc152,	// (0x00030e3b) list_rss2_pane

0x5006,	// (0x00029cef) scroll_pane_cp22

0xc15a,	// (0x00030e43) rss2_navigation_pane_g1

0xc163,	// (0x00030e4c) rss2_navigation_pane_g2

0xc16b,	// (0x00030e54) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x000343dc) rss2_navigation_pane_g

0xc173,	// (0x00030e5c) rss2_navigation_pane_t1

0x6da2,	// (0x0002ba8b) rss2_list_single_pane_ParamLimits

0x6da2,	// (0x0002ba8b) rss2_list_single_pane

0xc181,	// (0x00030e6a) rss2_list_single_pane_t2

0xc18f,	// (0x00030e78) rss2_list_single_pane_t3_ParamLimits

0xc18f,	// (0x00030e78) rss2_list_single_pane_t3

0xc1ac,	// (0x00030e95) rss2_list_single_pane_t4

0x4893,	// (0x0002957c) smil_status_pane_g1

0x253e,	// (0x00027227) main_image2_pane_ParamLimits

0x253e,	// (0x00027227) main_image2_pane

0x146a,	// (0x00026153) main_camera2_pane_g9_ParamLimits

0x146a,	// (0x00026153) main_camera2_pane_g9

0x1586,	// (0x0002626f) main_camera2_pane_t5_ParamLimits

0x1586,	// (0x0002626f) main_camera2_pane_t5

0xc027,	// (0x00030d10) main_camera2_pane_t6_ParamLimits

0xc027,	// (0x00030d10) main_camera2_pane_t6

0x6dbc,	// (0x0002baa5) main_image2_pane_g1_ParamLimits

0x6dbc,	// (0x0002baa5) main_image2_pane_g1

0x5ffd,	// (0x0002ace6) smil2_video_pane_ParamLimits

0x5ffd,	// (0x0002ace6) smil2_video_pane

0x230c,	// (0x00026ff5) aid_zoom_text_primary_cp

0x24fa,	// (0x000271e3) popup_preview_fixed_window

0x3d23,	// (0x00028a0c) im_reading_pane_g1

0x133c,	// (0x00026025) cams2_bc_adjust_pane_cp_ParamLimits

0x133c,	// (0x00026025) cams2_bc_adjust_pane_cp

0x15ac,	// (0x00026295) cams2_bc_adjust_pane_ParamLimits

0x15ac,	// (0x00026295) cams2_bc_adjust_pane

0xc1ba,	// (0x00030ea3) cams2_bc_adjust_pane_g1

0xc1c2,	// (0x00030eab) cams2_slider_pane

0xc1cb,	// (0x00030eb4) cams2_slider_pane_g1

0xc1d4,	// (0x00030ebd) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x000343e3) cams2_slider_pane_g

0x10a6,	// (0x00025d8f) calc_display_pane_ParamLimits

0x10cc,	// (0x00025db5) calc_paper_pane_ParamLimits

0x10ef,	// (0x00025dd8) grid_calc_pane_ParamLimits

0xad0a,	// (0x0002f9f3) popup_clock_digital_window_t1_ParamLimits

0x5ec6,	// (0x0002abaf) main_image_pane_t1

0x1088,	// (0x00025d71) aid_size_cell_calc_ParamLimits

0x1088,	// (0x00025d71) aid_size_cell_calc

0x6618,	// (0x0002b301) popup_blid_sat_info2_window_ParamLimits

0x6618,	// (0x0002b301) popup_blid_sat_info2_window

0xc1f6,	// (0x00030edf) aid_size_cell_blid

0xc1fe,	// (0x00030ee7) bg_popup_window_pane_cp07

0xc221,	// (0x00030f0a) grid_popup_blid_pane

0xc22b,	// (0x00030f14) heading_pane_cp05_ParamLimits

0xc22b,	// (0x00030f14) heading_pane_cp05

0xc2f5,	// (0x00030fde) cell_popup_blid_pane_ParamLimits

0xc2f5,	// (0x00030fde) cell_popup_blid_pane

0xc31f,	// (0x00031008) cell_popup_blid_pane_g1

0xc327,	// (0x00031010) cell_popup_blid_pane_t1

0x6c52,	// (0x0002b93b) mup2_indicator_pane_ParamLimits

0x6c52,	// (0x0002b93b) mup2_indicator_pane

0x5457,	// (0x0002a140) mup2_visualizer_osc_pane

0xc05e,	// (0x00030d47) mup2_visualizer_spec_pane_ParamLimits

0xc05e,	// (0x00030d47) mup2_visualizer_spec_pane

0x6dd2,	// (0x0002babb) mup2_spec_half_pane

0x6ddb,	// (0x0002bac4) mup2_spec_half_pane_cp

0x6de3,	// (0x0002bacc) mup2_spec_bar_pane_ParamLimits

0x6de3,	// (0x0002bacc) mup2_spec_bar_pane

0xbf9b,	// (0x00030c84) mup2_spec_bar_pane_g1

0xbfa5,	// (0x00030c8e) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00034356) mup2_spec_bar_pane_g

0x6e03,	// (0x0002baec) mup2_osc_middle_pane

0xbfb7,	// (0x00030ca0) mup2_visualizer_osc_pane_g1

0x25be,	// (0x000272a7) popup_number_entry_window_t1_ParamLimits

0x25d1,	// (0x000272ba) popup_number_entry_window_t2_ParamLimits

0x25e3,	// (0x000272cc) popup_number_entry_window_t3_ParamLimits

0x25f5,	// (0x000272de) popup_number_entry_window_t5_ParamLimits

0x25f5,	// (0x000272de) popup_number_entry_window_t5

0xf12f,	// (0x00033e18) popup_number_entry_window_t_ParamLimits

0x262a,	// (0x00027313) text_title_cp2_ParamLimits

0xad49,	// (0x0002fa32) aid_hotspot_pointer_text2_pane

0xad6f,	// (0x0002fa58) main_viewer_pane_g9_ParamLimits

0xad6f,	// (0x0002fa58) main_viewer_pane_g9

0x4407,	// (0x000290f0) cale_month_pane_t1_ParamLimits

0x491e,	// (0x00029607) bg_cale_pane_ParamLimits

0x4936,	// (0x0002961f) list_cale_pane_ParamLimits

0x3350,	// (0x00028039) listscroll_cale_day_pane_t1

0x4947,	// (0x00029630) scroll_pane_cp09_ParamLimits

0x57db,	// (0x0002a4c4) main_mup_eq_pane_t1_ParamLimits

0x57db,	// (0x0002a4c4) main_mup_eq_pane_t1

0x57f7,	// (0x0002a4e0) main_mup_eq_pane_t2_ParamLimits

0x57f7,	// (0x0002a4e0) main_mup_eq_pane_t2

0x5813,	// (0x0002a4fc) main_mup_eq_pane_t3_ParamLimits

0x5813,	// (0x0002a4fc) main_mup_eq_pane_t3

0x5831,	// (0x0002a51a) main_mup_eq_pane_t4_ParamLimits

0x5831,	// (0x0002a51a) main_mup_eq_pane_t4

0x584f,	// (0x0002a538) main_mup_eq_pane_t5_ParamLimits

0x584f,	// (0x0002a538) main_mup_eq_pane_t5

0x586d,	// (0x0002a556) main_mup_eq_pane_t6_ParamLimits

0x586d,	// (0x0002a556) main_mup_eq_pane_t6

0x5883,	// (0x0002a56c) main_mup_eq_pane_t7_ParamLimits

0x5883,	// (0x0002a56c) main_mup_eq_pane_t7

0x5899,	// (0x0002a582) main_mup_eq_pane_t8_ParamLimits

0x5899,	// (0x0002a582) main_mup_eq_pane_t8

0x58af,	// (0x0002a598) main_mup_eq_pane_t9_ParamLimits

0x58af,	// (0x0002a598) main_mup_eq_pane_t9

0x58cb,	// (0x0002a5b4) main_mup_eq_pane_t10_ParamLimits

0x58cb,	// (0x0002a5b4) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x000341a5) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x000341a5) main_mup_eq_pane_t

0x59a0,	// (0x0002a689) mup_equalizer_pane_cp5_ParamLimits

0x59b8,	// (0x0002a6a1) mup_equalizer_pane_cp6_ParamLimits

0x59d0,	// (0x0002a6b9) mup_equalizer_pane_cp7_ParamLimits

0x22be,	// (0x00026fa7) main_gallery_pane

0xbfc0,	// (0x00030ca9) smil2_volume_pane

0xbfc8,	// (0x00030cb1) smil_status_volume_pane_g1_ParamLimits

0xbfdb,	// (0x00030cc4) smil_status_volume_pane_g2_ParamLimits

0xbfee,	// (0x00030cd7) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0003435b) smil_status_volume_pane_g_ParamLimits

0xc1fe,	// (0x00030ee7) bg_popup_window_pane_cp07_ParamLimits

0xc20c,	// (0x00030ef5) blid_firmament_pane

0x6e0c,	// (0x0002baf5) aid_size_cell_gallery_ParamLimits

0x6e0c,	// (0x0002baf5) aid_size_cell_gallery

0x6e22,	// (0x0002bb0b) grid_gallery_pane_ParamLimits

0x6e22,	// (0x0002bb0b) grid_gallery_pane

0x6e3d,	// (0x0002bb26) cell_gallery_pane_ParamLimits

0x6e3d,	// (0x0002bb26) cell_gallery_pane

0xc335,	// (0x0003101e) bg_cell_gallery_focus_pane_ParamLimits

0xc335,	// (0x0003101e) bg_cell_gallery_focus_pane

0xc347,	// (0x00031030) cell_gallery_pane_g1_ParamLimits

0xc347,	// (0x00031030) cell_gallery_pane_g1

0x6e8e,	// (0x0002bb77) cell_gallery_pane_g2_ParamLimits

0x6e8e,	// (0x0002bb77) cell_gallery_pane_g2

0x6e9b,	// (0x0002bb84) cell_gallery_pane_g3_ParamLimits

0x6e9b,	// (0x0002bb84) cell_gallery_pane_g3

0xc353,	// (0x0003103c) cell_gallery_pane_g4_ParamLimits

0xc353,	// (0x0003103c) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00034409) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00034409) cell_gallery_pane_g

0xc35f,	// (0x00031048) bg_cell_gallery_focus_pane_g1

0xc367,	// (0x00031050) bg_cell_gallery_focus_pane_g2

0xc36f,	// (0x00031058) bg_cell_gallery_focus_pane_g3

0xc377,	// (0x00031060) bg_cell_gallery_focus_pane_g4

0xc37f,	// (0x00031068) bg_cell_gallery_focus_pane_g5

0xc387,	// (0x00031070) bg_cell_gallery_focus_pane_g6

0xc38f,	// (0x00031078) bg_cell_gallery_focus_pane_g7

0xc397,	// (0x00031080) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x00034412) bg_cell_gallery_focus_pane_g

0xc39f,	// (0x00031088) aid_firma_cardinal

0xc3b3,	// (0x0003109c) blid_firmament_pane_t1

0xc3ca,	// (0x000310b3) blid_firmament_pane_t2

0xc3e1,	// (0x000310ca) blid_firmament_pane_t3

0xc3f8,	// (0x000310e1) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x00034423) blid_firmament_pane_t

0xc40f,	// (0x000310f8) blid_sat_info_pane

0xc41f,	// (0x00031108) blid_sat_info_pane_g1

0xc41f,	// (0x00031108) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0003442c) blid_sat_info_pane_g

0xc429,	// (0x00031112) blid_sat_info_pane_t1

0xc437,	// (0x00031120) smil2_volume_content_pane

0xc440,	// (0x00031129) smil2_volume_pane_g1

0xc448,	// (0x00031131) smil2_volume_content_pane_g1

0xc451,	// (0x0003113a) smil2_volume_content_pane_g2

0xc45a,	// (0x00031143) smil2_volume_content_pane_g3

0xc463,	// (0x0003114c) smil2_volume_content_pane_g4

0xc46c,	// (0x00031155) smil2_volume_content_pane_g5

0xc475,	// (0x0003115e) smil2_volume_content_pane_g6

0xc47e,	// (0x00031167) smil2_volume_content_pane_g7

0xc487,	// (0x00031170) smil2_volume_content_pane_g8

0xc490,	// (0x00031179) smil2_volume_content_pane_g9

0xc499,	// (0x00031182) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x00034431) smil2_volume_content_pane_g

0x33c2,	// (0x000280ab) cale_week_day_heading_pane_t1_ParamLimits

0x33d6,	// (0x000280bf) cale_week_day_heading_pane_t2_ParamLimits

0x33ea,	// (0x000280d3) cale_week_day_heading_pane_t3_ParamLimits

0x33fe,	// (0x000280e7) cale_week_day_heading_pane_t4_ParamLimits

0x3412,	// (0x000280fb) cale_week_day_heading_pane_t5_ParamLimits

0x3426,	// (0x0002810f) cale_week_day_heading_pane_t6_ParamLimits

0x343a,	// (0x00028123) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00033f1d) cale_week_day_heading_pane_t_ParamLimits

0x344e,	// (0x00028137) bg_cale_side_pane_ParamLimits

0x11c4,	// (0x00025ead) cale_week_time_pane_t1_ParamLimits

0x11dc,	// (0x00025ec5) cale_week_time_pane_t2_ParamLimits

0x11f4,	// (0x00025edd) cale_week_time_pane_t3_ParamLimits

0x120c,	// (0x00025ef5) cale_week_time_pane_t4_ParamLimits

0x1224,	// (0x00025f0d) cale_week_time_pane_t5_ParamLimits

0x123c,	// (0x00025f25) cale_week_time_pane_t6_ParamLimits

0x1254,	// (0x00025f3d) cale_week_time_pane_t7_ParamLimits

0x1270,	// (0x00025f59) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00033f2c) cale_week_time_pane_t_ParamLimits

0x345c,	// (0x00028145) cell_cale_week_pane_g2_ParamLimits

0x344e,	// (0x00028137) bg_cale_side_pane_cp01_ParamLimits

0x4714,	// (0x000293fd) cale_month_week_pane_t1_ParamLimits

0x472b,	// (0x00029414) cale_month_week_pane_t2_ParamLimits

0x4742,	// (0x0002942b) cale_month_week_pane_t3_ParamLimits

0x4759,	// (0x00029442) cale_month_week_pane_t4_ParamLimits

0x4770,	// (0x00029459) cale_month_week_pane_t5_ParamLimits

0x4787,	// (0x00029470) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00034005) cale_month_week_pane_t_ParamLimits

0xac7e,	// (0x0002f967) cell_cale_month_pane_g1_ParamLimits

0x22be,	// (0x00026fa7) main_cale_event_viewer_pane

0x22be,	// (0x00026fa7) listscroll_cale_event_viewer_pane

0xc4a2,	// (0x0003118b) list_cale_ev_pane

0xc4aa,	// (0x00031193) scroll_pane_cp023

0x6ea8,	// (0x0002bb91) field_cale_ev_pane_ParamLimits

0x6ea8,	// (0x0002bb91) field_cale_ev_pane

0xc4b6,	// (0x0003119f) field_cale_ev_content_pane_ParamLimits

0xc4b6,	// (0x0003119f) field_cale_ev_content_pane

0xc4c2,	// (0x000311ab) field_cale_ev_pane_g1_ParamLimits

0xc4c2,	// (0x000311ab) field_cale_ev_pane_g1

0xc4ce,	// (0x000311b7) field_cale_ev_pane_g2_ParamLimits

0xc4ce,	// (0x000311b7) field_cale_ev_pane_g2

0xc4e6,	// (0x000311cf) field_cale_ev_pane_g3_ParamLimits

0xc4e6,	// (0x000311cf) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00034446) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00034446) field_cale_ev_pane_g

0xc4fe,	// (0x000311e7) field_cale_ev_pane_t1_ParamLimits

0xc4fe,	// (0x000311e7) field_cale_ev_pane_t1

0x6ecc,	// (0x0002bbb5) field_cale_ev_content_pane_t1_ParamLimits

0x6ecc,	// (0x0002bbb5) field_cale_ev_content_pane_t1

0x5ad7,	// (0x0002a7c0) bg_button_pane_cp01

0x2f3b,	// (0x00027c24) listscroll_cale_week_pane_ParamLimits

0x3181,	// (0x00027e6a) popup_toolbar_window_cp01

0x3350,	// (0x00028039) listscroll_cale_week_pane_t1_ParamLimits

0x2f3b,	// (0x00027c24) listscroll_cale_day_pane_ParamLimits

0x4914,	// (0x000295fd) popup_toolbar_window_cp02

0x3350,	// (0x00028039) listscroll_cale_day_pane_t1_ParamLimits

0x2f3b,	// (0x00027c24) main_cale_month_pane_ParamLimits

0x6898,	// (0x0002b581) popup_toolbar_window_cp03_ParamLimits

0x6898,	// (0x0002b581) popup_toolbar_window_cp03

0x5ea4,	// (0x0002ab8d) main_image_pane_g2_ParamLimits

0x5ea4,	// (0x0002ab8d) main_image_pane_g2

0x5eb5,	// (0x0002ab9e) main_image_pane_g3_ParamLimits

0x5eb5,	// (0x0002ab9e) main_image_pane_g3

0x0002,

0xf54e,	// (0x00034237) main_image_pane_g_ParamLimits

0xf54e,	// (0x00034237) main_image_pane_g

0x5ec6,	// (0x0002abaf) main_image_pane_t1_ParamLimits

0x5edd,	// (0x0002abc6) main_image_pane_t2_ParamLimits

0x5edd,	// (0x0002abc6) main_image_pane_t2

0x5eef,	// (0x0002abd8) main_image_pane_t3_ParamLimits

0x5eef,	// (0x0002abd8) main_image_pane_t3

0x5f17,	// (0x0002ac00) main_image_pane_t4_ParamLimits

0x5f17,	// (0x0002ac00) main_image_pane_t4

0x0003,

0xf555,	// (0x0003423e) main_image_pane_t_ParamLimits

0xf555,	// (0x0003423e) main_image_pane_t

0x5f37,	// (0x0002ac20) popup_image_details_window_cp01

0x5f41,	// (0x0002ac2a) popup_toobar_trans_pane_cp01_ParamLimits

0x5f41,	// (0x0002ac2a) popup_toobar_trans_pane_cp01

0x670b,	// (0x0002b3f4) popup_image_details_window_ParamLimits

0x670b,	// (0x0002b3f4) popup_image_details_window

0xbf0c,	// (0x00030bf5) popup_image_focus_window

0x12f6,	// (0x00025fdf) camera2_autofocus_pane_ParamLimits

0x12f6,	// (0x00025fdf) camera2_autofocus_pane

0x22be,	// (0x00026fa7) bg_popup_sub_pane_cp06

0xc515,	// (0x000311fe) popup_image_focus_window_g1

0xc51d,	// (0x00031206) popup_image_focus_window_g2

0xc525,	// (0x0003120e) popup_image_focus_window_g3

0xc52d,	// (0x00031216) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0003444d) popup_image_focus_window_g

0xc535,	// (0x0003121e) popup_image_focus_window_t1

0xc543,	// (0x0003122c) popup_image_focus_window_t2

0xc553,	// (0x0003123c) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00034456) popup_image_focus_window_t

0xc561,	// (0x0003124a) camera2_autofocus_pane_g1

0x253e,	// (0x00027227) bg_tb_trans_pane_cp01

0xc56f,	// (0x00031258) popup_image_details_window_g1

0xc582,	// (0x0003126b) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x00034468) popup_image_details_window_g

0xc5ab,	// (0x00031294) popup_image_details_window_t1

0xc5bd,	// (0x000312a6) popup_image_details_window_t2

0xc5d6,	// (0x000312bf) popup_image_details_window_t3

0xc5ea,	// (0x000312d3) popup_image_details_window_t4

0xc605,	// (0x000312ee) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0003446f) popup_image_details_window_t

0x2f27,	// (0x00027c10) bg_calc_paper_pane_ParamLimits

0xab7a,	// (0x0002f863) grid_highlight_pane_cp013

0xab84,	// (0x0002f86d) list_calc_pane_ParamLimits

0xab96,	// (0x0002f87f) scroll_pane_cp024

0x2f3b,	// (0x00027c24) bg_calc_display_pane_ParamLimits

0x111d,	// (0x00025e06) calc_display_pane_t1_ParamLimits

0x112f,	// (0x00025e18) calc_display_pane_t2_ParamLimits

0xab9e,	// (0x0002f887) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00033e9f) calc_display_pane_t_ParamLimits

0x1196,	// (0x00025e7f) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00033ebc) cell_calc_pane_g

0x119f,	// (0x00025e88) cell_calc_pane_t1

0x2ff6,	// (0x00027cdf) grid_highlight_pane_cp02_ParamLimits

0x300c,	// (0x00027cf5) toolbar_button_pane_cp01_ParamLimits

0x300c,	// (0x00027cf5) toolbar_button_pane_cp01

0xada9,	// (0x0002fa92) temp_image_control_pane_ParamLimits

0xada9,	// (0x0002fa92) temp_image_control_pane

0x253e,	// (0x00027227) main_mp3_pane

0xc61f,	// (0x00031308) temp_image_control_pane_g1_ParamLimits

0xc61f,	// (0x00031308) temp_image_control_pane_g1

0xc62d,	// (0x00031316) temp_image_control_pane_g2_ParamLimits

0xc62d,	// (0x00031316) temp_image_control_pane_g2

0xc63f,	// (0x00031328) temp_image_control_pane_g3_ParamLimits

0xc63f,	// (0x00031328) temp_image_control_pane_g3

0x6f1d,	// (0x0002bc06) temp_image_control_pane_g4_ParamLimits

0x6f1d,	// (0x0002bc06) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0003447a) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0003447a) temp_image_control_pane_g

0xc61f,	// (0x00031308) main_mp3_pane_g1

0x6f30,	// (0x0002bc19) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00034483) main_mp3_pane_g

0xc682,	// (0x0003136b) main_mp3_pane_t1

0x35e3,	// (0x000282cc) main_camera_pane_g8_ParamLimits

0x35e3,	// (0x000282cc) main_camera_pane_g8

0x3798,	// (0x00028481) main_video_pane_g7_ParamLimits

0x3798,	// (0x00028481) main_video_pane_g7

0xc040,	// (0x00030d29) main_camera2_pane_t7_ParamLimits

0xc040,	// (0x00030d29) main_camera2_pane_t7

0x3df6,	// (0x00028adf) scroll_pane_cp025_ParamLimits

0x3df6,	// (0x00028adf) scroll_pane_cp025

0x3e0a,	// (0x00028af3) scroll_pane_cp026_ParamLimits

0x3e0a,	// (0x00028af3) scroll_pane_cp026

0x3e19,	// (0x00028b02) wml_content_pane_ParamLimits

0x22be,	// (0x00026fa7) main_touch_calib_pane

0x6ff7,	// (0x0002bce0) main_touch_calib_pane_g1

0x7003,	// (0x0002bcec) main_touch_calib_pane_g2

0x700f,	// (0x0002bcf8) main_touch_calib_pane_g3

0x701b,	// (0x0002bd04) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x000344a1) main_touch_calib_pane_g

0x7027,	// (0x0002bd10) main_touch_calib_pane_t1

0x7041,	// (0x0002bd2a) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x000344aa) main_touch_calib_pane_t

0x52ce,	// (0x00029fb7) mup_progress_pane_cp02

0x52ed,	// (0x00029fd6) navi_pane_g1

0x53a8,	// (0x0002a091) navi_pane_mp_t3

0x253e,	// (0x00027227) main_mp3_pane_ParamLimits

0x68da,	// (0x0002b5c3) navi_pane_ParamLimits

0xc61f,	// (0x00031308) main_mp3_pane_g1_ParamLimits

0x6f30,	// (0x0002bc19) main_mp3_pane_g2_ParamLimits

0x6f3c,	// (0x0002bc25) main_mp3_pane_g3_ParamLimits

0x6f3c,	// (0x0002bc25) main_mp3_pane_g3

0x6f4a,	// (0x0002bc33) main_mp3_pane_g4_ParamLimits

0x6f4a,	// (0x0002bc33) main_mp3_pane_g4

0xc64f,	// (0x00031338) main_mp3_pane_g5_ParamLimits

0xc64f,	// (0x00031338) main_mp3_pane_g5

0xc65d,	// (0x00031346) main_mp3_pane_g6_ParamLimits

0xc65d,	// (0x00031346) main_mp3_pane_g6

0xc66a,	// (0x00031353) main_mp3_pane_g7_ParamLimits

0xc66a,	// (0x00031353) main_mp3_pane_g7

0xc676,	// (0x0003135f) main_mp3_pane_g8_ParamLimits

0xc676,	// (0x0003135f) main_mp3_pane_g8

0xf79a,	// (0x00034483) main_mp3_pane_g_ParamLimits

0x6f56,	// (0x0002bc3f) main_mp3_pane_t2

0x6f64,	// (0x0002bc4d) main_mp3_pane_t3

0xc690,	// (0x00031379) main_mp3_pane_t4

0xc69e,	// (0x00031387) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00034494) main_mp3_pane_t

0xc6ac,	// (0x00031395) mup_progress_pane_cp01

0x230c,	// (0x00026ff5) aid_zoom_text_secondary2

0xc4a2,	// (0x0003118b) list_cale_ev2_pane

0xc4aa,	// (0x00031193) scroll_pane_cp023_ParamLimits

0x7099,	// (0x0002bd82) field_cale_ev2_pane_ParamLimits

0x7099,	// (0x0002bd82) field_cale_ev2_pane

0xc6b4,	// (0x0003139d) field_cale_ev2_pane_g1_ParamLimits

0xc6b4,	// (0x0003139d) field_cale_ev2_pane_g1

0xc6c0,	// (0x000313a9) field_cale_ev2_pane_g2_ParamLimits

0xc6c0,	// (0x000313a9) field_cale_ev2_pane_g2

0xc6d8,	// (0x000313c1) field_cale_ev2_pane_g3_ParamLimits

0xc6d8,	// (0x000313c1) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x000344b5) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x000344b5) field_cale_ev2_pane_g

0xc6fc,	// (0x000313e5) field_cale_ev2_pane_t1_ParamLimits

0xc6fc,	// (0x000313e5) field_cale_ev2_pane_t1

0xc713,	// (0x000313fc) field_cale_ev2_pane_t2_ParamLimits

0xc713,	// (0x000313fc) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x000344be) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x000344be) field_cale_ev2_pane_t

0x5c59,	// (0x0002a942) main_postcard_pane_g5_ParamLimits

0x5c59,	// (0x0002a942) main_postcard_pane_g5

0x5c6f,	// (0x0002a958) main_postcard_pane_g6_ParamLimits

0x5c6f,	// (0x0002a958) main_postcard_pane_g6

0x351e,	// (0x00028207) camera2_autofocus_pane_cp_ParamLimits

0x351e,	// (0x00028207) camera2_autofocus_pane_cp

0x253e,	// (0x00027227) main_mup3_pane

0x70dd,	// (0x0002bdc6) main_mup3_pane_g1_ParamLimits

0x70dd,	// (0x0002bdc6) main_mup3_pane_g1

0x70ff,	// (0x0002bde8) main_mup3_pane_g2_ParamLimits

0x70ff,	// (0x0002bde8) main_mup3_pane_g2

0x7182,	// (0x0002be6b) main_mup3_pane_g3_ParamLimits

0x7182,	// (0x0002be6b) main_mup3_pane_g3

0x71c6,	// (0x0002beaf) main_mup3_pane_g4_ParamLimits

0x71c6,	// (0x0002beaf) main_mup3_pane_g4

0x720a,	// (0x0002bef3) main_mup3_pane_g5_ParamLimits

0x720a,	// (0x0002bef3) main_mup3_pane_g5

0x724e,	// (0x0002bf37) main_mup3_pane_g6_ParamLimits

0x724e,	// (0x0002bf37) main_mup3_pane_g6

0xc728,	// (0x00031411) main_mup3_pane_g7_ParamLimits

0xc728,	// (0x00031411) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x000344ce) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x000344ce) main_mup3_pane_g

0x72ca,	// (0x0002bfb3) main_mup3_pane_t1_ParamLimits

0x72ca,	// (0x0002bfb3) main_mup3_pane_t1

0x7344,	// (0x0002c02d) main_mup3_pane_t2_ParamLimits

0x7344,	// (0x0002c02d) main_mup3_pane_t2

0x741e,	// (0x0002c107) main_mup3_pane_t4_ParamLimits

0x741e,	// (0x0002c107) main_mup3_pane_t4

0x747c,	// (0x0002c165) main_mup3_pane_t5_ParamLimits

0x747c,	// (0x0002c165) main_mup3_pane_t5

0x7534,	// (0x0002c21d) main_mup3_pane_t6_ParamLimits

0x7534,	// (0x0002c21d) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x000344df) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x000344df) main_mup3_pane_t

0x75ea,	// (0x0002c2d3) mup3_progress_pane_ParamLimits

0x75ea,	// (0x0002c2d3) mup3_progress_pane

0x766e,	// (0x0002c357) popup_mup3_control_window_ParamLimits

0x766e,	// (0x0002c357) popup_mup3_control_window

0xc736,	// (0x0003141f) popup_mup3_text_window

0x76a4,	// (0x0002c38d) mup3_progress_pane_t1

0x76bb,	// (0x0002c3a4) mup3_progress_pane_t2

0xc73e,	// (0x00031427) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x000344ec) mup3_progress_pane_t

0xc755,	// (0x0003143e) mup_progress_pane_cp03

0x22be,	// (0x00026fa7) bg_tb_trans_pane_cp04

0x76d2,	// (0x0002c3bb) mup3_volume_pane

0x76da,	// (0x0002c3c3) popup_mup3_control_window_g1

0x76e3,	// (0x0002c3cc) mup3_volume_pane_g1

0x76ec,	// (0x0002c3d5) mup3_volume_pane_g2

0x76f5,	// (0x0002c3de) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x000344f3) mup3_volume_pane_g

0x22be,	// (0x00026fa7) bg_tb_trans_pane_cp03

0xc765,	// (0x0003144e) popup_mup3_text_window_g1

0xc76d,	// (0x00031456) popup_mup3_text_window_t1

0x2fdf,	// (0x00027cc8) list_calc_item_pane_g1_ParamLimits

0xc128,	// (0x00030e11) mup_volume_pane_cp_g1

0x705b,	// (0x0002bd44) main_touch_calib_pane_t3

0x706f,	// (0x0002bd58) main_touch_calib_pane_t4

0x7083,	// (0x0002bd6c) main_touch_calib_pane_t5

0x22c8,	// (0x00026fb1) aid_cell_size_toolbar2

0x22d0,	// (0x00026fb9) aid_popup3_width_pane

0x230c,	// (0x00026ff5) aid_zoom_text_msg_primary

0xac68,	// (0x0002f951) vorec_t7

0x2f47,	// (0x00027c30) bg_calc_paper_pane_g1_ParamLimits

0x2f53,	// (0x00027c3c) bg_calc_paper_pane_g2_ParamLimits

0x2f5f,	// (0x00027c48) bg_calc_paper_pane_g3_ParamLimits

0x2f6b,	// (0x00027c54) bg_calc_paper_pane_g4_ParamLimits

0x2f77,	// (0x00027c60) bg_calc_paper_pane_g5_ParamLimits

0x2f83,	// (0x00027c6c) bg_calc_paper_pane_g6_ParamLimits

0x2f96,	// (0x00027c7f) bg_calc_paper_pane_g7_ParamLimits

0x2fa9,	// (0x00027c92) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00033ea6) bg_calc_paper_pane_g_ParamLimits

0x2fba,	// (0x00027ca3) calc_bg_paper_pane_g9_ParamLimits

0x368c,	// (0x00028375) image_qvga_pane_ParamLimits

0x368c,	// (0x00028375) image_qvga_pane

0x2c65,	// (0x0002794e) bg_popup_sub_pane_cp04_ParamLimits

0x5e02,	// (0x0002aaeb) popup_mup_playback_window_g1_ParamLimits

0x5e0e,	// (0x0002aaf7) popup_mup_playback_window_t1_ParamLimits

0x5e23,	// (0x0002ab0c) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00034232) popup_mup_playback_window_t_ParamLimits

0x6b6a,	// (0x0002b853) main_mup2_pane_g3_ParamLimits

0x6b6a,	// (0x0002b853) main_mup2_pane_g3

0x3ae5,	// (0x000287ce) popup_toolbar_window_cp04

0xb0fc,	// (0x0002fde5) popup_call2_audio_second_window_g3_ParamLimits

0xb0fc,	// (0x0002fde5) popup_call2_audio_second_window_g3

0xb506,	// (0x000301ef) popup_call2_audio_first_window_g4_ParamLimits

0xb506,	// (0x000301ef) popup_call2_audio_first_window_g4

0xbb85,	// (0x0003086e) popup_call2_audio_in_window_g4_ParamLimits

0xbb85,	// (0x0003086e) popup_call2_audio_in_window_g4

0x5e38,	// (0x0002ab21) aid_area_sk_bg_cut_ParamLimits

0x5e38,	// (0x0002ab21) aid_area_sk_bg_cut

0x5e56,	// (0x0002ab3f) aid_area_sk_bg_cut_2_ParamLimits

0x5e56,	// (0x0002ab3f) aid_area_sk_bg_cut_2

0x6e7e,	// (0x0002bb67) aid_placing_details_win

0x6e86,	// (0x0002bb6f) aid_placing_details_win_2

0xc561,	// (0x0003124a) camera2_autofocus_pane_g1_ParamLimits

0x24df,	// (0x000271c8) popup_fixed_preview_cale_window_ParamLimits

0x24df,	// (0x000271c8) popup_fixed_preview_cale_window

0x5468,	// (0x0002a151) navi_slider_pane_g3

0x5471,	// (0x0002a15a) navi_slider_pane_g4

0x547a,	// (0x0002a163) navi_slider_pane_g5

0x5468,	// (0x0002a151) navi_slider_pane_g6

0xad30,	// (0x0002fa19) navi_slider_pane_g7

0x59f1,	// (0x0002a6da) mup_scale_pane_g3

0x59fa,	// (0x0002a6e3) mup_scale_pane_g4

0x5a03,	// (0x0002a6ec) mup_scale_pane_g5

0x5a0c,	// (0x0002a6f5) mup_scale_pane_g6

0x5a15,	// (0x0002a6fe) mup_scale_pane_g7

0x5468,	// (0x0002a151) cams2_slider_pane_g3

0xc1dd,	// (0x00030ec6) cams2_slider_pane_g4

0xc1e5,	// (0x00030ece) cams2_slider_pane_g5

0x5468,	// (0x0002a151) cams2_slider_pane_g6

0xc1ed,	// (0x00030ed6) cams2_slider_pane_g7

0xc41f,	// (0x00031108) camera2_autofocus_pane_cp_g1

0xc77b,	// (0x00031464) bg_popup_preview_window_pane_cp02_ParamLimits

0xc77b,	// (0x00031464) bg_popup_preview_window_pane_cp02

0xc787,	// (0x00031470) list_fp_cale_pane_ParamLimits

0xc787,	// (0x00031470) list_fp_cale_pane

0xc793,	// (0x0003147c) popup_fixed_preview_cale_window_t1_ParamLimits

0xc793,	// (0x0003147c) popup_fixed_preview_cale_window_t1

0x76fe,	// (0x0002c3e7) popup_fixed_preview_cale_window_t2_ParamLimits

0x76fe,	// (0x0002c3e7) popup_fixed_preview_cale_window_t2

0x7713,	// (0x0002c3fc) popup_fixed_preview_cale_window_t3_ParamLimits

0x7713,	// (0x0002c3fc) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x000344fa) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x000344fa) popup_fixed_preview_cale_window_t

0x772a,	// (0x0002c413) list_single_fp_cale_pane_ParamLimits

0x772a,	// (0x0002c413) list_single_fp_cale_pane

0xc7b1,	// (0x0003149a) list_single_fp_cale_pane_g1_ParamLimits

0xc7b1,	// (0x0003149a) list_single_fp_cale_pane_g1

0xc7bd,	// (0x000314a6) list_single_fp_cale_pane_g2_ParamLimits

0xc7bd,	// (0x000314a6) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00034501) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00034501) list_single_fp_cale_pane_g

0xc7d6,	// (0x000314bf) list_single_fp_cale_pane_t1_ParamLimits

0xc7d6,	// (0x000314bf) list_single_fp_cale_pane_t1

0xc7e8,	// (0x000314d1) list_single_fp_cale_pane_t2_ParamLimits

0xc7e8,	// (0x000314d1) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00034508) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00034508) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x22be,	// (0x00026fa7) main_dialer_pane

0x7742,	// (0x0002c42b) aid_cell_size_keypad

0x774c,	// (0x0002c435) dialer_ne_pane

0x7756,	// (0x0002c43f) grid_dialer_command_1_pane

0x775e,	// (0x0002c447) grid_dialer_command_2_pane

0x7766,	// (0x0002c44f) grid_dialer_keypad_pane

0x777a,	// (0x0002c463) bg_popup_call_pane_cp06_ParamLimits

0x777a,	// (0x0002c463) bg_popup_call_pane_cp06

0x7786,	// (0x0002c46f) dialer_ne_clear_pane_ParamLimits

0x7786,	// (0x0002c46f) dialer_ne_clear_pane

0xc81b,	// (0x00031504) dialer_ne_pane_g1

0xc823,	// (0x0003150c) dialer_ne_pane_t1_ParamLimits

0xc823,	// (0x0003150c) dialer_ne_pane_t1

0x7792,	// (0x0002c47b) dialer_ne_pane_t2_ParamLimits

0x7792,	// (0x0002c47b) dialer_ne_pane_t2

0x77bc,	// (0x0002c4a5) dialer_ne_pane_t3_ParamLimits

0x77bc,	// (0x0002c4a5) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0003450d) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0003450d) dialer_ne_pane_t

0x77ec,	// (0x0002c4d5) dialer_ne_pane_t3_copy1_ParamLimits

0x77ec,	// (0x0002c4d5) dialer_ne_pane_t3_copy1

0x781b,	// (0x0002c504) cell_dialer_keypad_pane_ParamLimits

0x781b,	// (0x0002c504) cell_dialer_keypad_pane

0x7832,	// (0x0002c51b) cell_dialer_command_1_pane_ParamLimits

0x7832,	// (0x0002c51b) cell_dialer_command_1_pane

0x7848,	// (0x0002c531) cell_dialer_command_2_pane_ParamLimits

0x7848,	// (0x0002c531) cell_dialer_command_2_pane

0xc835,	// (0x0003151e) bg_button_pane_cp02_ParamLimits

0xc835,	// (0x0003151e) bg_button_pane_cp02

0x7857,	// (0x0002c540) cell_dialer_keypad_pane_g1_ParamLimits

0x7857,	// (0x0002c540) cell_dialer_keypad_pane_g1

0xc835,	// (0x0003151e) bg_button_pane_cp03_ParamLimits

0xc835,	// (0x0003151e) bg_button_pane_cp03

0x786c,	// (0x0002c555) cell_dialer_command_1_pane_g1_ParamLimits

0x786c,	// (0x0002c555) cell_dialer_command_1_pane_g1

0xc841,	// (0x0003152a) bg_button_pane_cp04

0x7880,	// (0x0002c569) cell_dialer_command_2_pane_g1

0x5457,	// (0x0002a140) bg_button_pane_cp06

0xc849,	// (0x00031532) dialer_ne_clear_pane_g1

0x52f9,	// (0x00029fe2) navi_pane_g2

0x5327,	// (0x0002a010) navi_pane_g3

0x0002,

0xf44c,	// (0x00034135) navi_pane_g

0x53b6,	// (0x0002a09f) navi_pane_mv_g2

0x53dd,	// (0x0002a0c6) navi_pane_mv_g5

0x53e5,	// (0x0002a0ce) navi_pane_mv_t1

0x2f3b,	// (0x00027c24) main_clock2_pane

0x78b8,	// (0x0002c5a1) main_clock2_list_pane_ParamLimits

0x78b8,	// (0x0002c5a1) main_clock2_list_pane

0x78f0,	// (0x0002c5d9) main_clock2_pane_t1_ParamLimits

0x78f0,	// (0x0002c5d9) main_clock2_pane_t1

0x792c,	// (0x0002c615) main_clock2_pane_t2_ParamLimits

0x792c,	// (0x0002c615) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00034514) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00034514) main_clock2_pane_t

0x79b8,	// (0x0002c6a1) popup_clock_analogue_window_cp03_ParamLimits

0x79b8,	// (0x0002c6a1) popup_clock_analogue_window_cp03

0x79df,	// (0x0002c6c8) popup_clock_digital_window_cp02_ParamLimits

0x79df,	// (0x0002c6c8) popup_clock_digital_window_cp02

0x7a58,	// (0x0002c741) main_clock2_list_single_pane_ParamLimits

0x7a58,	// (0x0002c741) main_clock2_list_single_pane

0x5457,	// (0x0002a140) list_highlight_pane_cp05

0xc851,	// (0x0003153a) main_clock2_list_single_pane_t1

0x3ae5,	// (0x000287ce) popup_toolbar_window_cp04_ParamLimits

0x6eed,	// (0x0002bbd6) camera2_autofocus_pane_g2_ParamLimits

0x6eed,	// (0x0002bbd6) camera2_autofocus_pane_g2

0x6ef9,	// (0x0002bbe2) camera2_autofocus_pane_g3_ParamLimits

0x6ef9,	// (0x0002bbe2) camera2_autofocus_pane_g3

0x6f05,	// (0x0002bbee) camera2_autofocus_pane_g4_ParamLimits

0x6f05,	// (0x0002bbee) camera2_autofocus_pane_g4

0x6f11,	// (0x0002bbfa) camera2_autofocus_pane_g5_ParamLimits

0x6f11,	// (0x0002bbfa) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0003445d) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0003445d) camera2_autofocus_pane_g

0x70bd,	// (0x0002bda6) camera2_autofocus_pane_cp_g2

0x70c5,	// (0x0002bdae) camera2_autofocus_pane_cp_g3

0x70cd,	// (0x0002bdb6) camera2_autofocus_pane_cp_g4

0x70d5,	// (0x0002bdbe) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x000344c3) camera2_autofocus_pane_cp_g

0x7772,	// (0x0002c45b) popup_dialer_spcha_window

0x22be,	// (0x00026fa7) bg_popup_sub_pane_cp07

0xc85f,	// (0x00031548) list_spcha_pane

0xc867,	// (0x00031550) list_single_spcha_pane_ParamLimits

0xc867,	// (0x00031550) list_single_spcha_pane

0x22be,	// (0x00026fa7) list_highlight_pane_cp06

0xc878,	// (0x00031561) list_single_spcha_pane_t1

0xb92f,	// (0x00030618) popup_call2_audio_out_window_g4_ParamLimits

0xb92f,	// (0x00030618) popup_call2_audio_out_window_g4

0x22be,	// (0x00026fa7) main_imed2_pane

0xbf16,	// (0x00030bff) popup_imed_adjust2_window

0x6723,	// (0x0002b40c) popup_imed_trans_window_ParamLimits

0x6723,	// (0x0002b40c) popup_imed_trans_window

0xc257,	// (0x00030f40) popup_blid_sat_info2_window_t1

0xc265,	// (0x00030f4e) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x000343f2) popup_blid_sat_info2_window_t

0x7a8c,	// (0x0002c775) aid_size_cell_colour_35

0x7aac,	// (0x0002c795) aid_size_cell_colour_112

0x7acc,	// (0x0002c7b5) aid_size_cell_effect

0xbeea,	// (0x00030bd3) bg_tb_trans_pane_cp02

0x4a7d,	// (0x00029766) heading_imed_pane

0x7aec,	// (0x0002c7d5) listscroll_imed_pane

0xc886,	// (0x0003156f) heading_imed_pane_g1

0xc88e,	// (0x00031577) heading_imed_pane_t1

0xc89c,	// (0x00031585) grid_imed_colour_35_pane_ParamLimits

0xc89c,	// (0x00031585) grid_imed_colour_35_pane

0x7af8,	// (0x0002c7e1) grid_imed_effect_pane

0xc8b8,	// (0x000315a1) list_imed_aspect_pane

0x7b0f,	// (0x0002c7f8) scroll_pane_cp027_ParamLimits

0x7b0f,	// (0x0002c7f8) scroll_pane_cp027

0x7b20,	// (0x0002c809) cell_imed_effect_pane_ParamLimits

0x7b20,	// (0x0002c809) cell_imed_effect_pane

0xc8c0,	// (0x000315a9) cell_imed_colour_pane_ParamLimits

0xc8c0,	// (0x000315a9) cell_imed_colour_pane

0xc90a,	// (0x000315f3) cell_imed_colour_pane_g1_ParamLimits

0xc90a,	// (0x000315f3) cell_imed_colour_pane_g1

0xc91b,	// (0x00031604) hgihlgiht_grid_pane_cp016_ParamLimits

0xc91b,	// (0x00031604) hgihlgiht_grid_pane_cp016

0x7b45,	// (0x0002c82e) cell_imed_effect_pane_g1

0x7b4d,	// (0x0002c836) grid_highlight_pane_cp017

0xc92c,	// (0x00031615) list_imed_single_pane_ParamLimits

0xc92c,	// (0x00031615) list_imed_single_pane

0x22be,	// (0x00026fa7) list_highlight_pane_cp07

0xc940,	// (0x00031629) list_imed_aspect_pane_comp1_t1

0xbeea,	// (0x00030bd3) bg_tb_trans_pane_cp05

0xc962,	// (0x0003164b) popup_imed_adjust2_window_g1

0xc989,	// (0x00031672) popup_imed_adjust2_window_t1

0xc9a1,	// (0x0003168a) slider_imed_adjust_pane

0xc9b5,	// (0x0003169e) slider_imed_adjust_pane_g1

0xc9c5,	// (0x000316ae) slider_imed_adjust_pane_g2

0xc9d5,	// (0x000316be) slider_imed_adjust_pane_g3

0xc9e6,	// (0x000316cf) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x00034531) slider_imed_adjust_pane_g

0x7b56,	// (0x0002c83f) aid_size_cell_clipart2

0x7b62,	// (0x0002c84b) grid_imed_clipart_pane

0xc9f7,	// (0x000316e0) scroll_pane_cp031

0x7b6c,	// (0x0002c855) cell_imed_clipart_pane_ParamLimits

0x7b6c,	// (0x0002c855) cell_imed_clipart_pane

0x7b89,	// (0x0002c872) cell_imed_clipart_pane_g1

0x22be,	// (0x00026fa7) grid_highlight_pane_cp014

0x78cd,	// (0x0002c5b6) main_clock2_pane_g1_ParamLimits

0x78cd,	// (0x0002c5b6) main_clock2_pane_g1

0x79ff,	// (0x0002c6e8) aid_call2_pane_cp10

0x7a11,	// (0x0002c6fa) aid_call_pane_cp10

0x5207,	// (0x00029ef0) popup_clock_analogue_window_cp10_g1

0x5207,	// (0x00029ef0) popup_clock_analogue_window_cp10_g2

0x7a23,	// (0x0002c70c) popup_clock_analogue_window_cp10_g3

0x7a23,	// (0x0002c70c) popup_clock_analogue_window_cp10_g4

0x5207,	// (0x00029ef0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0003451f) popup_clock_analogue_window_cp10_g

0x7a39,	// (0x0002c722) popup_clock_analogue_window_cp10_t1

0x175e,	// (0x00026447) clock_digital_number_pane_cp10_ParamLimits

0x175e,	// (0x00026447) clock_digital_number_pane_cp10

0x1778,	// (0x00026461) clock_digital_number_pane_cp11_ParamLimits

0x1778,	// (0x00026461) clock_digital_number_pane_cp11

0x1792,	// (0x0002647b) clock_digital_number_pane_cp12_ParamLimits

0x1792,	// (0x0002647b) clock_digital_number_pane_cp12

0x17ac,	// (0x00026495) clock_digital_number_pane_cp13_ParamLimits

0x17ac,	// (0x00026495) clock_digital_number_pane_cp13

0x17c6,	// (0x000264af) clock_digital_separator_pane_cp10_ParamLimits

0x17c6,	// (0x000264af) clock_digital_separator_pane_cp10

0x7a6a,	// (0x0002c753) popup_clock_digital_window_cp02_t1_ParamLimits

0x7a6a,	// (0x0002c753) popup_clock_digital_window_cp02_t1

0x2c5d,	// (0x00027946) clock_digital_number_pane_cp10_g1

0x2c5d,	// (0x00027946) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0003453a) clock_digital_number_pane_cp10_g

0x2c5d,	// (0x00027946) clock_digital_separator_pane_cp10_g1

0x2c5d,	// (0x00027946) clock_digital_separator_pane_g2_cp10

0x5427,	// (0x0002a110) navi_pane_vded_g4

0x5430,	// (0x0002a119) navi_pane_vded_g5

0x5439,	// (0x0002a122) navi_pane_vded_t1

0x22be,	// (0x00026fa7) main_vded_pane

0x7b92,	// (0x0002c87b) main_vded_pane_g1

0x7b9e,	// (0x0002c887) main_vded_pane_g2

0x7baa,	// (0x0002c893) main_vded_pane_g3

0x0002,

0xf856,	// (0x0003453f) main_vded_pane_g

0x7bb6,	// (0x0002c89f) main_vded_pane_t1

0x7bc4,	// (0x0002c8ad) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00034546) main_vded_pane_t

0x7bd2,	// (0x0002c8bb) vded_slider_pane

0x7bdc,	// (0x0002c8c5) vded_video_pane

0xc9ff,	// (0x000316e8) vded_video_pane_g1

0x7be8,	// (0x0002c8d1) vded_video_pane_g2

0xc41f,	// (0x00031108) vded_video_pane_g3

0x0002,

0xf862,	// (0x0003454b) vded_video_pane_g

0xca09,	// (0x000316f2) vded_slider_pane_g1

0xc128,	// (0x00030e11) vded_slider_pane_g2

0xca12,	// (0x000316fb) vded_slider_pane_g3

0xca1b,	// (0x00031704) vded_slider_pane_g4

0xca24,	// (0x0003170d) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00034552) vded_slider_pane_g

0x7658,	// (0x0002c341) mup3_rocker_pane_ParamLimits

0x7658,	// (0x0002c341) mup3_rocker_pane

0x7bf1,	// (0x0002c8da) mup3_control_keys_pane_g1

0x7bf9,	// (0x0002c8e2) mup3_control_keys_pane_g2

0x7c01,	// (0x0002c8ea) mup3_control_keys_pane_g3

0x7c09,	// (0x0002c8f2) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0003455d) mup3_control_keys_pane_g

0x2520,	// (0x00027209) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2520,	// (0x00027209) popup_toolbar2_fixed_window_cp01

0x768e,	// (0x0002c377) popup_toolbar2_fixed_window_cp02_ParamLimits

0x768e,	// (0x0002c377) popup_toolbar2_fixed_window_cp02

0xb26e,	// (0x0002ff57) popup_call2_audio_second_window_t4_ParamLimits

0xb26e,	// (0x0002ff57) popup_call2_audio_second_window_t4

0xb79c,	// (0x00030485) popup_call2_audio_first_window_t6_ParamLimits

0xb79c,	// (0x00030485) popup_call2_audio_first_window_t6

0xba32,	// (0x0003071b) popup_call2_audio_out_window_t6_ParamLimits

0xba32,	// (0x0003071b) popup_call2_audio_out_window_t6

0x22be,	// (0x00026fa7) main_vitu_pane

0x7c19,	// (0x0002c902) aid_size_cell_itu_ParamLimits

0x7c19,	// (0x0002c902) aid_size_cell_itu

0x253e,	// (0x00027227) bg_popup_window_pane_cp08_ParamLimits

0x253e,	// (0x00027227) bg_popup_window_pane_cp08

0x7c2f,	// (0x0002c918) field_vitu_entry_pane_ParamLimits

0x7c2f,	// (0x0002c918) field_vitu_entry_pane

0x7c46,	// (0x0002c92f) grid_vitu_function_pane_ParamLimits

0x7c46,	// (0x0002c92f) grid_vitu_function_pane

0x7c61,	// (0x0002c94a) grid_vitu_itu_pane_ParamLimits

0x7c61,	// (0x0002c94a) grid_vitu_itu_pane

0x7c7f,	// (0x0002c968) cell_vitu_itu_pane_ParamLimits

0x7c7f,	// (0x0002c968) cell_vitu_itu_pane

0x7ca5,	// (0x0002c98e) cell_vitu_function_pane_ParamLimits

0x7ca5,	// (0x0002c98e) cell_vitu_function_pane

0x253e,	// (0x00027227) bg_popup_sub_pane_cp08_ParamLimits

0x253e,	// (0x00027227) bg_popup_sub_pane_cp08

0x7cc0,	// (0x0002c9a9) field_vitu_entry_pane_t1_ParamLimits

0x7cc0,	// (0x0002c9a9) field_vitu_entry_pane_t1

0xca45,	// (0x0003172e) field_vitu_entry_pane_t2_ParamLimits

0xca45,	// (0x0003172e) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0003456b) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0003456b) field_vitu_entry_pane_t

0xca62,	// (0x0003174b) bg_button_pane_cp05_ParamLimits

0xca62,	// (0x0003174b) bg_button_pane_cp05

0x7ce0,	// (0x0002c9c9) cell_vitu_itu_pane_g1

0x7cf8,	// (0x0002c9e1) cell_vitu_itu_pane_t1_ParamLimits

0x7cf8,	// (0x0002c9e1) cell_vitu_itu_pane_t1

0x7d0a,	// (0x0002c9f3) cell_vitu_itu_pane_t2_ParamLimits

0x7d0a,	// (0x0002c9f3) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x00034570) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x00034570) cell_vitu_itu_pane_t

0xca70,	// (0x00031759) bg_button_pane_cp07

0x7d3f,	// (0x0002ca28) cell_vitu_function_pane_g1

0xab72,	// (0x0002f85b) main_calc_pane_g1

0x2300,	// (0x00026fe9) aid_visual_content_pane

0x22be,	// (0x00026fa7) main_vradio_pane

0x7d48,	// (0x0002ca31) main_vradio_pane_g1_ParamLimits

0x7d48,	// (0x0002ca31) main_vradio_pane_g1

0xca7a,	// (0x00031763) main_vradio_pane_g2_ParamLimits

0xca7a,	// (0x00031763) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00034577) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00034577) main_vradio_pane_g

0x7d5f,	// (0x0002ca48) main_vradio_pane_t1_ParamLimits

0x7d5f,	// (0x0002ca48) main_vradio_pane_t1

0x7d74,	// (0x0002ca5d) main_vradio_pane_t2_ParamLimits

0x7d74,	// (0x0002ca5d) main_vradio_pane_t2

0xca87,	// (0x00031770) main_vradio_pane_t3_ParamLimits

0xca87,	// (0x00031770) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0003457c) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0003457c) main_vradio_pane_t

0x7d89,	// (0x0002ca72) vradio_rocker_control_pane_ParamLimits

0x7d89,	// (0x0002ca72) vradio_rocker_control_pane

0x7d9b,	// (0x0002ca84) vradio_station_info_pane_ParamLimits

0x7d9b,	// (0x0002ca84) vradio_station_info_pane

0xca9b,	// (0x00031784) vradio_frequency_info_pane_ParamLimits

0xca9b,	// (0x00031784) vradio_frequency_info_pane

0xc41f,	// (0x00031108) vradio_station_info_pane_g1

0xcaaa,	// (0x00031793) vradio_station_info_pane_t1_ParamLimits

0xcaaa,	// (0x00031793) vradio_station_info_pane_t1

0xcacc,	// (0x000317b5) vradio_station_info_pane_t2_ParamLimits

0xcacc,	// (0x000317b5) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00034583) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00034583) vradio_station_info_pane_t

0xcade,	// (0x000317c7) vradio_tuning_pane

0xcae6,	// (0x000317cf) vradio_rocker_control_pane_g1

0xcaee,	// (0x000317d7) vradio_rocker_control_pane_g2

0xcaf6,	// (0x000317df) vradio_rocker_control_pane_g3

0xcafe,	// (0x000317e7) vradio_rocker_control_pane_g4

0xcb06,	// (0x000317ef) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x00034588) vradio_rocker_control_pane_g

0x7dab,	// (0x0002ca94) vradio_frequency_info_pane_g1

0xcb0e,	// (0x000317f7) vradio_frequency_info_pane_t1_ParamLimits

0xcb0e,	// (0x000317f7) vradio_frequency_info_pane_t1

0x7db5,	// (0x0002ca9e) vradio_tuning_pane_g1

0x7dc0,	// (0x0002caa9) vradio_tuning_pane_t1

0x2355,	// (0x0002703e) area_side_right_pane_ParamLimits

0x2355,	// (0x0002703e) area_side_right_pane

0xbeb1,	// (0x00030b9a) status_small_pane_g1

0xbeb9,	// (0x00030ba2) status_small_pane_g2

0xbec2,	// (0x00030bab) status_small_pane_g3

0xbecb,	// (0x00030bb4) status_small_pane_g4

0x0003,

0xf65f,	// (0x00034348) status_small_pane_g

0xbed4,	// (0x00030bbd) status_small_pane_t1

0x22be,	// (0x00026fa7) main_video3_pane

0xcb22,	// (0x0003180b) cams_zoom_vslider_pane

0xcb2a,	// (0x00031813) image3_wide_pane_ParamLimits

0xcb2a,	// (0x00031813) image3_wide_pane

0xcb44,	// (0x0003182d) image3_wide_small_pane

0xcb50,	// (0x00031839) main_video3_pane_g1_ParamLimits

0xcb50,	// (0x00031839) main_video3_pane_g1

0xcb6c,	// (0x00031855) main_video3_pane_g2_ParamLimits

0xcb6c,	// (0x00031855) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00034593) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00034593) main_video3_pane_g

0xcb88,	// (0x00031871) main_video3_pane_t1_ParamLimits

0xcb88,	// (0x00031871) main_video3_pane_t1

0xcbb3,	// (0x0003189c) main_video3_pane_t2_ParamLimits

0xcbb3,	// (0x0003189c) main_video3_pane_t2

0xcbe0,	// (0x000318c9) main_video3_pane_t3_ParamLimits

0xcbe0,	// (0x000318c9) main_video3_pane_t3

0x0002,

0xf8af,	// (0x00034598) main_video3_pane_t_ParamLimits

0xf8af,	// (0x00034598) main_video3_pane_t

0xcc0d,	// (0x000318f6) cams_zoom_vslider_pane_g1

0xcc16,	// (0x000318ff) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0003459f) cams_zoom_vslider_pane_g

0xcc1e,	// (0x00031907) small_slider_vertical_pane

0xc41f,	// (0x00031108) small_slider_vertical_pane_g1

0xc41f,	// (0x00031108) small_slider_vertical_pane_g2

0xcc26,	// (0x0003190f) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x000345a4) small_slider_vertical_pane_g

0x22be,	// (0x00026fa7) main_hwr_training_pane

0xcc2f,	// (0x00031918) hwr_training_instruct_pane_ParamLimits

0xcc2f,	// (0x00031918) hwr_training_instruct_pane

0x7dcf,	// (0x0002cab8) hwr_training_navi_pane_ParamLimits

0x7dcf,	// (0x0002cab8) hwr_training_navi_pane

0x7dee,	// (0x0002cad7) hwr_training_write_pane_ParamLimits

0x7dee,	// (0x0002cad7) hwr_training_write_pane

0x22be,	// (0x00026fa7) bg_frame_shadow_pane

0xcc66,	// (0x0003194f) hwr_training_write_pane_g1

0xcc6e,	// (0x00031957) hwr_training_write_pane_g2

0xcc76,	// (0x0003195f) hwr_training_write_pane_g3

0xcc7e,	// (0x00031967) hwr_training_write_pane_g4

0xcc86,	// (0x0003196f) hwr_training_write_pane_g5

0xcc8e,	// (0x00031977) hwr_training_write_pane_g6

0xcc96,	// (0x0003197f) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x000345ab) hwr_training_write_pane_g

0xcc9e,	// (0x00031987) hwr_training_navi_pane_g1_ParamLimits

0xcc9e,	// (0x00031987) hwr_training_navi_pane_g1

0xccb0,	// (0x00031999) hwr_training_navi_pane_g2_ParamLimits

0xccb0,	// (0x00031999) hwr_training_navi_pane_g2

0xccc2,	// (0x000319ab) hwr_training_navi_pane_g3_ParamLimits

0xccc2,	// (0x000319ab) hwr_training_navi_pane_g3

0xccd2,	// (0x000319bb) hwr_training_navi_pane_g4_ParamLimits

0xccd2,	// (0x000319bb) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x000345ba) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x000345ba) hwr_training_navi_pane_g

0xccdf,	// (0x000319c8) hwr_training_navi_pane_t1

0x7e29,	// (0x0002cb12) list_single_hwr_training_instruct_pane_ParamLimits

0x7e29,	// (0x0002cb12) list_single_hwr_training_instruct_pane

0xcced,	// (0x000319d6) list_single_hwr_training_instruct_pane_t1

0xc35f,	// (0x00031048) bg_frame_shadow_pane_g1

0xccfc,	// (0x000319e5) bg_frame_shadow_pane_g2

0xcd04,	// (0x000319ed) bg_frame_shadow_pane_g3

0xcd0c,	// (0x000319f5) bg_frame_shadow_pane_g4

0xcd14,	// (0x000319fd) bg_frame_shadow_pane_g5

0xcd1c,	// (0x00031a05) bg_frame_shadow_pane_g6

0xcd24,	// (0x00031a0d) bg_frame_shadow_pane_g7

0x30dc,	// (0x00027dc5) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x000345c5) bg_frame_shadow_pane_g

0x22be,	// (0x00026fa7) main_video_tele_dialer_pane

0x17ed,	// (0x000264d6) aid_size_cell_video_keypad_ParamLimits

0x17ed,	// (0x000264d6) aid_size_cell_video_keypad

0x1807,	// (0x000264f0) grid_video_dialer_keypad_pane_ParamLimits

0x1807,	// (0x000264f0) grid_video_dialer_keypad_pane

0x1855,	// (0x0002653e) video_down_pane_cp_ParamLimits

0x1855,	// (0x0002653e) video_down_pane_cp

0x186d,	// (0x00026556) cell_video_dialer_keypad_pane_ParamLimits

0x186d,	// (0x00026556) cell_video_dialer_keypad_pane

0xcd2c,	// (0x00031a15) bg_button_pane_cp08_ParamLimits

0xcd2c,	// (0x00031a15) bg_button_pane_cp08

0x7e61,	// (0x0002cb4a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e61,	// (0x0002cb4a) cell_video_dialer_keypad_pane_g1

0x7642,	// (0x0002c32b) mup3_rocker2_pane_ParamLimits

0x7642,	// (0x0002c32b) mup3_rocker2_pane

0xc41f,	// (0x00031108) mup3_rocker2_pane_g1

0x65f0,	// (0x0002b2d9) main_dialer2_pane

0x22be,	// (0x00026fa7) main_mp4_pane

0xcd40,	// (0x00031a29) main_mp4_pane_g1_ParamLimits

0xcd40,	// (0x00031a29) main_mp4_pane_g1

0xcd40,	// (0x00031a29) main_mp4_pane_g2_ParamLimits

0xcd40,	// (0x00031a29) main_mp4_pane_g2

0x1893,	// (0x0002657c) main_mp4_pane_g3_ParamLimits

0x1893,	// (0x0002657c) main_mp4_pane_g3

0xcd4e,	// (0x00031a37) main_mp4_pane_g4_ParamLimits

0xcd4e,	// (0x00031a37) main_mp4_pane_g4

0xcd68,	// (0x00031a51) main_mp4_pane_g5_ParamLimits

0xcd68,	// (0x00031a51) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x000345e5) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x000345e5) main_mp4_pane_g

0xcd9c,	// (0x00031a85) main_mp4_pane_t1_ParamLimits

0xcd9c,	// (0x00031a85) main_mp4_pane_t1

0xcdf8,	// (0x00031ae1) main_mp4_pane_t2_ParamLimits

0xcdf8,	// (0x00031ae1) main_mp4_pane_t2

0xce4a,	// (0x00031b33) main_mp4_pane_t3_ParamLimits

0xce4a,	// (0x00031b33) main_mp4_pane_t3

0xce6a,	// (0x00031b53) main_mp4_pane_t4_ParamLimits

0xce6a,	// (0x00031b53) main_mp4_pane_t4

0x0003,

0xf909,	// (0x000345f2) main_mp4_pane_t_ParamLimits

0xf909,	// (0x000345f2) main_mp4_pane_t

0xceaa,	// (0x00031b93) mp4_progress_pane_ParamLimits

0xceaa,	// (0x00031b93) mp4_progress_pane

0xcef4,	// (0x00031bdd) mp4_rocker_pane_ParamLimits

0xcef4,	// (0x00031bdd) mp4_rocker_pane

0xcf1e,	// (0x00031c07) mp4_progress_pane_t1

0xcf37,	// (0x00031c20) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x000345fb) mp4_progress_pane_t

0xcf50,	// (0x00031c39) mup_progress_pane_cp04

0xcf5c,	// (0x00031c45) mp4_rocker_pane_g1

0x18dd,	// (0x000265c6) aid_cell_size_keypad2_ParamLimits

0x18dd,	// (0x000265c6) aid_cell_size_keypad2

0x18f3,	// (0x000265dc) dialer2_ne_pane_ParamLimits

0x18f3,	// (0x000265dc) dialer2_ne_pane

0x190b,	// (0x000265f4) grid_dialer2_keypad_pane_ParamLimits

0x190b,	// (0x000265f4) grid_dialer2_keypad_pane

0xc1fe,	// (0x00030ee7) bg_popup_call_pane_cp07_ParamLimits

0xc1fe,	// (0x00030ee7) bg_popup_call_pane_cp07

0x7e9c,	// (0x0002cb85) dialer2_ne_pane_t1_ParamLimits

0x7e9c,	// (0x0002cb85) dialer2_ne_pane_t1

0x1927,	// (0x00026610) cell_dialer2_keypad_pane_ParamLimits

0x1927,	// (0x00026610) cell_dialer2_keypad_pane

0xcf78,	// (0x00031c61) bg_button_pane_pane_cp04_ParamLimits

0xcf78,	// (0x00031c61) bg_button_pane_pane_cp04

0x7edc,	// (0x0002cbc5) cell_dialer2_keypad_pane_g1_ParamLimits

0x7edc,	// (0x0002cbc5) cell_dialer2_keypad_pane_g1

0x39f9,	// (0x000286e2) aid_placing_vt_set_content_ParamLimits

0x39f9,	// (0x000286e2) aid_placing_vt_set_content

0x3a19,	// (0x00028702) aid_placing_vt_set_title_ParamLimits

0x3a19,	// (0x00028702) aid_placing_vt_set_title

0x22be,	// (0x00026fa7) main_image3_pane

0x19ab,	// (0x00026694) area_side_right_pane_cp01_ParamLimits

0x19ab,	// (0x00026694) area_side_right_pane_cp01

0xcd40,	// (0x00031a29) main_image3_pane_g1_ParamLimits

0xcd40,	// (0x00031a29) main_image3_pane_g1

0x19c4,	// (0x000266ad) main_image3_pane_g2_ParamLimits

0x19c4,	// (0x000266ad) main_image3_pane_g2

0x19ec,	// (0x000266d5) main_image3_pane_g3_ParamLimits

0x19ec,	// (0x000266d5) main_image3_pane_g3

0x1a16,	// (0x000266ff) main_image3_pane_g4_ParamLimits

0x1a16,	// (0x000266ff) main_image3_pane_g4

0x0003,

0xf921,	// (0x0003460a) main_image3_pane_g_ParamLimits

0xf921,	// (0x0003460a) main_image3_pane_g

0x1a40,	// (0x00026729) main_image3_pane_t1_ParamLimits

0x1a40,	// (0x00026729) main_image3_pane_t1

0x1a98,	// (0x00026781) main_image3_pane_t2_ParamLimits

0x1a98,	// (0x00026781) main_image3_pane_t2

0x1aea,	// (0x000267d3) main_image3_pane_t3_ParamLimits

0x1aea,	// (0x000267d3) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00034613) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00034613) main_image3_pane_t

0x253e,	// (0x00027227) grid_sctrl_middle_pane_cp01_ParamLimits

0x253e,	// (0x00027227) grid_sctrl_middle_pane_cp01

0x7f44,	// (0x0002cc2d) cell_sctrl_middle_pane_cp01_ParamLimits

0x7f44,	// (0x0002cc2d) cell_sctrl_middle_pane_cp01

0x7f61,	// (0x0002cc4a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7f61,	// (0x0002cc4a) cell_sctrl_middle_pane_cp01_g1

0x22be,	// (0x00026fa7) main_call4_pane

0x7f76,	// (0x0002cc5f) aid_size_button_call4_ParamLimits

0x7f76,	// (0x0002cc5f) aid_size_button_call4

0x7fa9,	// (0x0002cc92) call4_windows_pane_ParamLimits

0x7fa9,	// (0x0002cc92) call4_windows_pane

0x7fcb,	// (0x0002ccb4) grid_call4_button_pane_ParamLimits

0x7fcb,	// (0x0002ccb4) grid_call4_button_pane

0xcfb8,	// (0x00031ca1) call4_windows_conf_pane

0xcfd3,	// (0x00031cbc) popup_call4_audio_first_window_ParamLimits

0xcfd3,	// (0x00031cbc) popup_call4_audio_first_window

0xd021,	// (0x00031d0a) popup_call4_audio_second_window_ParamLimits

0xd021,	// (0x00031d0a) popup_call4_audio_second_window

0xd037,	// (0x00031d20) popup_call4_audio_wait_window_ParamLimits

0xd037,	// (0x00031d20) popup_call4_audio_wait_window

0x7ff6,	// (0x0002ccdf) cell_call4_button_pane_ParamLimits

0x7ff6,	// (0x0002ccdf) cell_call4_button_pane

0x801d,	// (0x0002cd06) bg_button_pane_cp09_ParamLimits

0x801d,	// (0x0002cd06) bg_button_pane_cp09

0x8029,	// (0x0002cd12) cell_call4_button_pane_g1_ParamLimits

0x8029,	// (0x0002cd12) cell_call4_button_pane_g1

0x804f,	// (0x0002cd38) cell_call4_button_pane_t1_ParamLimits

0x804f,	// (0x0002cd38) cell_call4_button_pane_t1

0xd07f,	// (0x00031d68) popup_call4_audio_conf_window_ParamLimits

0xd07f,	// (0x00031d68) popup_call4_audio_conf_window

0x76a4,	// (0x0002c38d) mup3_progress_pane_t1_ParamLimits

0x76bb,	// (0x0002c3a4) mup3_progress_pane_t2_ParamLimits

0xc73e,	// (0x00031427) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x000344ec) mup3_progress_pane_t_ParamLimits

0xc755,	// (0x0003143e) mup_progress_pane_cp03_ParamLimits

0x7c11,	// (0x0002c8fa) mup3_control_keys_pane_g4_copy1

0xced8,	// (0x00031bc1) mp4_rocker2_pane_ParamLimits

0xced8,	// (0x00031bc1) mp4_rocker2_pane

0xd099,	// (0x00031d82) mp4_rocker2_pane_g1

0xd0a1,	// (0x00031d8a) mp4_rocker2_pane_g2

0xd0a9,	// (0x00031d92) mp4_rocker2_pane_g3

0xd0b1,	// (0x00031d9a) mp4_rocker2_pane_g4

0xd0b9,	// (0x00031da2) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0003461c) mp4_rocker2_pane_g

0x22be,	// (0x00026fa7) main_camera4_pane

0x22be,	// (0x00026fa7) main_video4_pane

0x1823,	// (0x0002650c) main_video_tele_dialer_pane_t1_ParamLimits

0x1823,	// (0x0002650c) main_video_tele_dialer_pane_t1

0x183c,	// (0x00026525) main_video_tele_dialer_pane_t2_ParamLimits

0x183c,	// (0x00026525) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x000345d6) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x000345d6) main_video_tele_dialer_pane_t

0x1b8a,	// (0x00026873) cam4_autofocus_pane_ParamLimits

0x1b8a,	// (0x00026873) cam4_autofocus_pane

0x1ba0,	// (0x00026889) cam4_image_uncrop_pane_ParamLimits

0x1ba0,	// (0x00026889) cam4_image_uncrop_pane

0x1bb9,	// (0x000268a2) cam4_indicators_pane_ParamLimits

0x1bb9,	// (0x000268a2) cam4_indicators_pane

0x1be8,	// (0x000268d1) main_camera4_pane_g1_ParamLimits

0x1be8,	// (0x000268d1) main_camera4_pane_g1

0x1bf4,	// (0x000268dd) main_camera4_pane_g2_ParamLimits

0x1bf4,	// (0x000268dd) main_camera4_pane_g2

0x1c00,	// (0x000268e9) main_camera4_pane_g3_ParamLimits

0x1c00,	// (0x000268e9) main_camera4_pane_g3

0x1c0c,	// (0x000268f5) main_camera4_pane_g4_ParamLimits

0x1c0c,	// (0x000268f5) main_camera4_pane_g4

0x1c18,	// (0x00026901) main_camera4_pane_g5_ParamLimits

0x1c18,	// (0x00026901) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00034627) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00034627) main_camera4_pane_g

0x1c35,	// (0x0002691e) main_camera4_pane_t1_ParamLimits

0x1c35,	// (0x0002691e) main_camera4_pane_t1

0x1c6d,	// (0x00026956) bg_tb_trans_pane_cp06

0x1c7b,	// (0x00026964) cam4_indicators_pane_g1

0x1c88,	// (0x00026971) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00034639) cam4_indicators_pane_g

0x1ca0,	// (0x00026989) cam4_indicators_pane_t1

0x1cca,	// (0x000269b3) main_video4_pane_g1_ParamLimits

0x1cca,	// (0x000269b3) main_video4_pane_g1

0x1cdc,	// (0x000269c5) main_video4_pane_g2_ParamLimits

0x1cdc,	// (0x000269c5) main_video4_pane_g2

0x1cf0,	// (0x000269d9) main_video4_pane_g3_ParamLimits

0x1cf0,	// (0x000269d9) main_video4_pane_g3

0x1d00,	// (0x000269e9) main_video4_pane_g4_ParamLimits

0x1d00,	// (0x000269e9) main_video4_pane_g4

0x0004,

0xf957,	// (0x00034640) main_video4_pane_g_ParamLimits

0xf957,	// (0x00034640) main_video4_pane_g

0x1d20,	// (0x00026a09) vid4_indicators_pane_ParamLimits

0x1d20,	// (0x00026a09) vid4_indicators_pane

0x1d50,	// (0x00026a39) video4_image_uncrop_cif_pane_ParamLimits

0x1d50,	// (0x00026a39) video4_image_uncrop_cif_pane

0x1d6a,	// (0x00026a53) video4_image_uncrop_nhd_pane_ParamLimits

0x1d6a,	// (0x00026a53) video4_image_uncrop_nhd_pane

0x1ba0,	// (0x00026889) video4_image_uncrop_vga_pane_ParamLimits

0x1ba0,	// (0x00026889) video4_image_uncrop_vga_pane

0xd0e5,	// (0x00031dce) bg_tb_trans_pane_cp07

0x1c7b,	// (0x00026964) vid4_indicators_pane_g1

0x1d80,	// (0x00026a69) vid4_indicators_pane_g2

0x1d8d,	// (0x00026a76) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0003464b) vid4_indicators_pane_g

0x1da6,	// (0x00026a8f) vid4_indicators_pane_t1

0x8075,	// (0x0002cd5e) cam4_autofocus_pane_g1

0x807d,	// (0x0002cd66) cam4_autofocus_pane_g2

0x8085,	// (0x0002cd6e) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00034656) cam4_autofocus_pane_g

0x808d,	// (0x0002cd76) cam4_autofocus_pane_g3_copy1

0x7e45,	// (0x0002cb2e) video_down_pane_cp_t1

0x7e53,	// (0x0002cb3c) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x000345db) video_down_pane_cp_t

0x253e,	// (0x00027227) popup_vitu2_window_ParamLimits

0x253e,	// (0x00027227) popup_vitu2_window

0x1db8,	// (0x00026aa1) aid_size_cell2_itu2_ParamLimits

0x1db8,	// (0x00026aa1) aid_size_cell2_itu2

0x1dde,	// (0x00026ac7) aid_size_cell_itu2_ParamLimits

0x1dde,	// (0x00026ac7) aid_size_cell_itu2

0x1e3c,	// (0x00026b25) bg_popup_window_pane_cp09_ParamLimits

0x1e3c,	// (0x00026b25) bg_popup_window_pane_cp09

0x1e4a,	// (0x00026b33) field_vitu2_entry_pane_ParamLimits

0x1e4a,	// (0x00026b33) field_vitu2_entry_pane

0x1e72,	// (0x00026b5b) grid_vitu2_function_pane_ParamLimits

0x1e72,	// (0x00026b5b) grid_vitu2_function_pane

0x1ec3,	// (0x00026bac) grid_vitu2_itu_pane_ParamLimits

0x1ec3,	// (0x00026bac) grid_vitu2_itu_pane

0x1f4e,	// (0x00026c37) cell_vitu2_itu_pane_ParamLimits

0x1f4e,	// (0x00026c37) cell_vitu2_itu_pane

0x1f74,	// (0x00026c5d) cell_vitu2_function_pane_ParamLimits

0x1f74,	// (0x00026c5d) cell_vitu2_function_pane

0xd0fd,	// (0x00031de6) bg_popup_call_pane_cp08_ParamLimits

0xd0fd,	// (0x00031de6) bg_popup_call_pane_cp08

0xd116,	// (0x00031dff) field_vitu2_entry_pane_g1

0xd122,	// (0x00031e0b) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0003465d) field_vitu2_entry_pane_g

0x8095,	// (0x0002cd7e) field_vitu2_entry_pane_t1_ParamLimits

0x8095,	// (0x0002cd7e) field_vitu2_entry_pane_t1

0xd13c,	// (0x00031e25) field_vitu2_entry_pane_t2_ParamLimits

0xd13c,	// (0x00031e25) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00034664) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00034664) field_vitu2_entry_pane_t

0x1fb8,	// (0x00026ca1) bg_button_pane_cp010_ParamLimits

0x1fb8,	// (0x00026ca1) bg_button_pane_cp010

0x1fc6,	// (0x00026caf) cell_vitu2_itu_pane_g1

0x1fe4,	// (0x00026ccd) cell_vitu2_itu_pane_t1_ParamLimits

0x1fe4,	// (0x00026ccd) cell_vitu2_itu_pane_t1

0x204a,	// (0x00026d33) cell_vitu2_itu_pane_t2_ParamLimits

0x204a,	// (0x00026d33) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0003466e) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0003466e) cell_vitu2_itu_pane_t

0xd161,	// (0x00031e4a) bg_button_pane_cp011

0x2126,	// (0x00026e0f) cell_vitu2_function_pane_g1

0x22be,	// (0x00026fa7) main_myfav_hc_pane

0x1b3a,	// (0x00026823) popup_image3_note_pane_ParamLimits

0x1b3a,	// (0x00026823) popup_image3_note_pane

0x1b56,	// (0x0002683f) popup_image3_tool_bar_pane_ParamLimits

0x1b56,	// (0x0002683f) popup_image3_tool_bar_pane

0x20ce,	// (0x00026db7) cell_vitu2_itu_pane_t3_ParamLimits

0x20ce,	// (0x00026db7) cell_vitu2_itu_pane_t3

0x22be,	// (0x00026fa7) bg_popup_trans_pane

0xd16f,	// (0x00031e58) grid_image3_tool_bar_pane

0xd179,	// (0x00031e62) bg_popup_trans_pane_g1

0x3f51,	// (0x00028c3a) bg_popup_trans_pane_g2

0xd181,	// (0x00031e6a) bg_popup_trans_pane_g3

0xd189,	// (0x00031e72) bg_popup_trans_pane_g4

0xd191,	// (0x00031e7a) bg_popup_trans_pane_g5

0xd199,	// (0x00031e82) bg_popup_trans_pane_g6

0xd1a1,	// (0x00031e8a) bg_popup_trans_pane_g7

0xd1a9,	// (0x00031e92) bg_popup_trans_pane_g8

0x3f31,	// (0x00028c1a) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00034675) bg_popup_trans_pane_g

0xd1b1,	// (0x00031e9a) cell_image3_tool_bar_pane_ParamLimits

0xd1b1,	// (0x00031e9a) cell_image3_tool_bar_pane

0xc41f,	// (0x00031108) cell_image3_tool_bar_pane_g1

0x22be,	// (0x00026fa7) bg_popup_trans_pane_cp1

0xd1c7,	// (0x00031eb0) popup_image3_note_pane_t1

0xd1d5,	// (0x00031ebe) popup_image3_note_pane_t2

0xd1e3,	// (0x00031ecc) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00034688) popup_image3_note_pane_t

0xd1f3,	// (0x00031edc) popup_image3_note_pane_t3_copy1

0x80b2,	// (0x0002cd9b) bg_myfav_hc_instruction_pane_ParamLimits

0x80b2,	// (0x0002cd9b) bg_myfav_hc_instruction_pane

0x80ca,	// (0x0002cdb3) cell_myfav_contact_pane_ParamLimits

0x80ca,	// (0x0002cdb3) cell_myfav_contact_pane

0x80e6,	// (0x0002cdcf) cell_myfav_contact_pane_cp1_ParamLimits

0x80e6,	// (0x0002cdcf) cell_myfav_contact_pane_cp1

0x80fe,	// (0x0002cde7) cell_myfav_contact_pane_cp2_ParamLimits

0x80fe,	// (0x0002cde7) cell_myfav_contact_pane_cp2

0x8116,	// (0x0002cdff) cell_myfav_contact_pane_cp3_ParamLimits

0x8116,	// (0x0002cdff) cell_myfav_contact_pane_cp3

0x812d,	// (0x0002ce16) cell_myfav_contact_pane_cp4_ParamLimits

0x812d,	// (0x0002ce16) cell_myfav_contact_pane_cp4

0x8145,	// (0x0002ce2e) cell_myfav_contact_pane_cp5_ParamLimits

0x8145,	// (0x0002ce2e) cell_myfav_contact_pane_cp5

0x8159,	// (0x0002ce42) cell_myfav_contact_pane_cp6_ParamLimits

0x8159,	// (0x0002ce42) cell_myfav_contact_pane_cp6

0x816f,	// (0x0002ce58) cell_myfav_contact_pane_cp7_ParamLimits

0x816f,	// (0x0002ce58) cell_myfav_contact_pane_cp7

0xd201,	// (0x00031eea) listscroll_gen_pane_cp05

0x8187,	// (0x0002ce70) main_myfav_hc_pane_g1_ParamLimits

0x8187,	// (0x0002ce70) main_myfav_hc_pane_g1

0x81a1,	// (0x0002ce8a) main_myfav_hc_pane_g2_ParamLimits

0x81a1,	// (0x0002ce8a) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0003468f) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0003468f) main_myfav_hc_pane_g

0x81d5,	// (0x0002cebe) main_myfav_hc_pane_t1_ParamLimits

0x81d5,	// (0x0002cebe) main_myfav_hc_pane_t1

0xd20a,	// (0x00031ef3) main_myfav_hc_pane_t2_ParamLimits

0xd20a,	// (0x00031ef3) main_myfav_hc_pane_t2

0xd21c,	// (0x00031f05) main_myfav_hc_pane_t3_ParamLimits

0xd21c,	// (0x00031f05) main_myfav_hc_pane_t3

0x81ec,	// (0x0002ced5) main_myfav_hc_pane_t4_ParamLimits

0x81ec,	// (0x0002ced5) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00034696) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00034696) main_myfav_hc_pane_t

0xc41f,	// (0x00031108) bg_myfav_hc_instruction_pane_g1

0xd22e,	// (0x00031f17) cell_myfav_contact_pane_g1_ParamLimits

0xd22e,	// (0x00031f17) cell_myfav_contact_pane_g1

0xd22e,	// (0x00031f17) cell_myfav_contact_pane_g2_ParamLimits

0xd22e,	// (0x00031f17) cell_myfav_contact_pane_g2

0xd23a,	// (0x00031f23) cell_myfav_contact_pane_g3_ParamLimits

0xd23a,	// (0x00031f23) cell_myfav_contact_pane_g3

0xc728,	// (0x00031411) cell_myfav_contact_pane_g4_ParamLimits

0xc728,	// (0x00031411) cell_myfav_contact_pane_g4

0xd247,	// (0x00031f30) cell_myfav_contact_pane_g5_ParamLimits

0xd247,	// (0x00031f30) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x000346a1) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x000346a1) cell_myfav_contact_pane_g

0x81bb,	// (0x0002cea4) main_myfav_hc_pane_g3_ParamLimits

0x81bb,	// (0x0002cea4) main_myfav_hc_pane_g3

0x2476,	// (0x0002715f) popup_adpt_find_window

0x8216,	// (0x0002ceff) afind_page_pane_ParamLimits

0x8216,	// (0x0002ceff) afind_page_pane

0x822b,	// (0x0002cf14) aid_size_cell_afind_ParamLimits

0x822b,	// (0x0002cf14) aid_size_cell_afind

0x8249,	// (0x0002cf32) bg_popup_sub_pane_cp09_ParamLimits

0x8249,	// (0x0002cf32) bg_popup_sub_pane_cp09

0x8256,	// (0x0002cf3f) find_pane_cp01_ParamLimits

0x8256,	// (0x0002cf3f) find_pane_cp01

0xd253,	// (0x00031f3c) grid_afind_control_pane_ParamLimits

0xd253,	// (0x00031f3c) grid_afind_control_pane

0x8263,	// (0x0002cf4c) grid_afind_pane_ParamLimits

0x8263,	// (0x0002cf4c) grid_afind_pane

0x8285,	// (0x0002cf6e) cell_afind_pane_ParamLimits

0x8285,	// (0x0002cf6e) cell_afind_pane

0xc41f,	// (0x00031108) afind_page_pane_g1

0x82ec,	// (0x0002cfd5) afind_page_pane_g2

0x82f5,	// (0x0002cfde) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x000346ac) afind_page_pane_g

0x82fe,	// (0x0002cfe7) afind_page_pane_t1

0xd267,	// (0x00031f50) cell_afind_grid_control_pane_ParamLimits

0xd267,	// (0x00031f50) cell_afind_grid_control_pane

0xcf78,	// (0x00031c61) bg_button_pane_cp69_ParamLimits

0xcf78,	// (0x00031c61) bg_button_pane_cp69

0x831e,	// (0x0002d007) cell_afind_pane_g1_ParamLimits

0x831e,	// (0x0002d007) cell_afind_pane_g1

0x832b,	// (0x0002d014) cell_afind_pane_t1_ParamLimits

0x832b,	// (0x0002d014) cell_afind_pane_t1

0x387a,	// (0x00028563) bg_button_pane_cp72

0xd276,	// (0x00031f5f) cell_afind_grid_control_pane_g1

0x6090,	// (0x0002ad79) aid_image_placing_area_ParamLimits

0x6090,	// (0x0002ad79) aid_image_placing_area

0xca2d,	// (0x00031716) field_vitu_entry_pane_g1_ParamLimits

0xca2d,	// (0x00031716) field_vitu_entry_pane_g1

0xca39,	// (0x00031722) field_vitu_entry_pane_g2_ParamLimits

0xca39,	// (0x00031722) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00034566) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00034566) field_vitu_entry_pane_g

0x7ce0,	// (0x0002c9c9) cell_vitu_itu_pane_g1_ParamLimits

0x7d22,	// (0x0002ca0b) cell_vitu_itu_pane_t3_ParamLimits

0x7d22,	// (0x0002ca0b) cell_vitu_itu_pane_t3

0xcf1e,	// (0x00031c07) mp4_progress_pane_t1_ParamLimits

0xcf37,	// (0x00031c20) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x000345fb) mp4_progress_pane_t_ParamLimits

0xcf50,	// (0x00031c39) mup_progress_pane_cp04_ParamLimits

0x8200,	// (0x0002cee9) main_myfav_hc_pane_t5_ParamLimits

0x8200,	// (0x0002cee9) main_myfav_hc_pane_t5

0x2314,	// (0x00026ffd) aid_zoom_text_primary

0x2476,	// (0x0002715f) popup_adpt_find_window_ParamLimits

0x253e,	// (0x00027227) main_cam_set_pane

0x1bd2,	// (0x000268bb) cam4_zoom_pane_ParamLimits

0x1bd2,	// (0x000268bb) cam4_zoom_pane

0x833d,	// (0x0002d026) main_cam_set_pane_g1_ParamLimits

0x833d,	// (0x0002d026) main_cam_set_pane_g1

0x834b,	// (0x0002d034) main_cam_set_pane_g2_ParamLimits

0x834b,	// (0x0002d034) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x000346b3) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x000346b3) main_cam_set_pane_g

0x836e,	// (0x0002d057) main_cam_set_pane_t1_ParamLimits

0x836e,	// (0x0002d057) main_cam_set_pane_t1

0x8389,	// (0x0002d072) main_cset_listscroll_pane_ParamLimits

0x8389,	// (0x0002d072) main_cset_listscroll_pane

0x83ad,	// (0x0002d096) main_cset_slider_pane_ParamLimits

0x83ad,	// (0x0002d096) main_cset_slider_pane

0xd287,	// (0x00031f70) main_cset_list_pane_ParamLimits

0xd287,	// (0x00031f70) main_cset_list_pane

0xd297,	// (0x00031f80) scroll_pane_cp028

0x83d7,	// (0x0002d0c0) aid_area_touch_slider

0x83f3,	// (0x0002d0dc) cset_slider_pane

0x841d,	// (0x0002d106) main_cset_slider_pane_g1

0x8432,	// (0x0002d11b) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x000346b8) main_cset_slider_pane_g

0xd2d0,	// (0x00031fb9) main_cset_slider_pane_t1

0x84f4,	// (0x0002d1dd) main_cset_slider_pane_t2

0x850e,	// (0x0002d1f7) main_cset_slider_pane_t3

0x8528,	// (0x0002d211) main_cset_slider_pane_t4

0x8542,	// (0x0002d22b) main_cset_slider_pane_t5

0x8560,	// (0x0002d249) main_cset_slider_pane_t6

0x8577,	// (0x0002d260) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x000346dd) main_cset_slider_pane_t

0x8683,	// (0x0002d36c) cset_list_set_pane_ParamLimits

0x8683,	// (0x0002d36c) cset_list_set_pane

0x8697,	// (0x0002d380) aid_position_infowindow_above

0x869f,	// (0x0002d388) aid_position_infowindow_below

0xd370,	// (0x00032059) cset_list_set_pane_g1_ParamLimits

0xd370,	// (0x00032059) cset_list_set_pane_g1

0x86a7,	// (0x0002d390) cset_list_set_pane_g3_ParamLimits

0x86a7,	// (0x0002d390) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x000346fc) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x000346fc) cset_list_set_pane_g

0x86b6,	// (0x0002d39f) cset_list_set_pane_t1_ParamLimits

0x86b6,	// (0x0002d39f) cset_list_set_pane_t1

0x253e,	// (0x00027227) list_highlight_pane_cp021_ParamLimits

0x253e,	// (0x00027227) list_highlight_pane_cp021

0x59f1,	// (0x0002a6da) cset_slider_pane_g1

0x5a03,	// (0x0002a6ec) cset_slider_pane_g2

0x59fa,	// (0x0002a6e3) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x00034701) cset_slider_pane_g

0xd37c,	// (0x00032065) aid_area_touch_cam4_zoom

0xd384,	// (0x0003206d) cam4_zoom_cont_pane

0xd38c,	// (0x00032075) cam4_zoom_pane_g1

0xd394,	// (0x0003207d) cam4_zoom_pane_g2

0x213a,	// (0x00026e23) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00034708) cam4_zoom_pane_g

0xd39c,	// (0x00032085) cam4_zoom_cont_pane_g1

0xd3a5,	// (0x0003208e) cam4_zoom_cont_pane_g2

0xd3ae,	// (0x00032097) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0003470f) cam4_zoom_cont_pane_g

0x7f94,	// (0x0002cc7d) call4_image_pane_ParamLimits

0x7f94,	// (0x0002cc7d) call4_image_pane

0xcfb8,	// (0x00031ca1) call4_windows_conf_pane_ParamLimits

0xcfff,	// (0x00031ce8) popup_call4_audio_in_window_ParamLimits

0xcfff,	// (0x00031ce8) popup_call4_audio_in_window

0x22be,	// (0x00026fa7) bg_popup_call2_act_pane_cp02

0xd077,	// (0x00031d60) call4_list_conf_pane

0xc41f,	// (0x00031108) call4_image_pane_g1

0xc41f,	// (0x00031108) call4_image_pane_g2

0x0001,

0xf743,	// (0x0003442c) call4_image_pane_g

0xd3b7,	// (0x000320a0) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3b7,	// (0x000320a0) list_single_graphic_popup_conf4_pane

0x22be,	// (0x00026fa7) list_highlight_pane_cp022

0xd3cc,	// (0x000320b5) list_single_graphic_popup_conf4_pane_g1

0x4eff,	// (0x00029be8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00034716) list_single_graphic_popup_conf4_pane_g

0xd3d4,	// (0x000320bd) list_single_graphic_popup_conf4_pane_t1

0x3b07,	// (0x000287f0) popup_vtel_slider_window_ParamLimits

0x3b07,	// (0x000287f0) popup_vtel_slider_window

0xcf66,	// (0x00031c4f) dialer2_ne_pane_t2_ParamLimits

0xcf66,	// (0x00031c4f) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x00034600) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x00034600) dialer2_ne_pane_t

0xc1fe,	// (0x00030ee7) bg_popup_sub_pane_cp010_ParamLimits

0xc1fe,	// (0x00030ee7) bg_popup_sub_pane_cp010

0x86cb,	// (0x0002d3b4) popup_vtel_slider_window_g1_ParamLimits

0x86cb,	// (0x0002d3b4) popup_vtel_slider_window_g1

0x86de,	// (0x0002d3c7) popup_vtel_slider_window_g2_ParamLimits

0x86de,	// (0x0002d3c7) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0003471b) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0003471b) popup_vtel_slider_window_g

0x8734,	// (0x0002d41d) vtel_slider_pane_ParamLimits

0x8734,	// (0x0002d41d) vtel_slider_pane

0x8756,	// (0x0002d43f) vtel_slider_pane_g1_ParamLimits

0x8756,	// (0x0002d43f) vtel_slider_pane_g1

0x876a,	// (0x0002d453) vtel_slider_pane_g2_ParamLimits

0x876a,	// (0x0002d453) vtel_slider_pane_g2

0x8782,	// (0x0002d46b) vtel_slider_pane_g3_ParamLimits

0x8782,	// (0x0002d46b) vtel_slider_pane_g3

0x8756,	// (0x0002d43f) vtel_slider_pane_g4_ParamLimits

0x8756,	// (0x0002d43f) vtel_slider_pane_g4

0x8798,	// (0x0002d481) vtel_slider_pane_g5_ParamLimits

0x8798,	// (0x0002d481) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00034724) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00034724) vtel_slider_pane_g

0x22be,	// (0x00026fa7) main_gallery2_pane

0x1e0a,	// (0x00026af3) aid_size_row_itut2_dropdow_list_ParamLimits

0x1e0a,	// (0x00026af3) aid_size_row_itut2_dropdow_list

0x1e9a,	// (0x00026b83) grid_vitu2_function_top_pane_ParamLimits

0x1e9a,	// (0x00026b83) grid_vitu2_function_top_pane

0x1ef9,	// (0x00026be2) popup_vitu2_dropdown_list_window_ParamLimits

0x1ef9,	// (0x00026be2) popup_vitu2_dropdown_list_window

0x1f22,	// (0x00026c0b) popup_vitu2_match_list_window

0x2142,	// (0x00026e2b) cell_vitu2_function_top_pane_ParamLimits

0x2142,	// (0x00026e2b) cell_vitu2_function_top_pane

0x2162,	// (0x00026e4b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x2162,	// (0x00026e4b) cell_vitu2_function_top_pane_cp01

0x2180,	// (0x00026e69) cell_vitu2_function_top_wide_pane_ParamLimits

0x2180,	// (0x00026e69) cell_vitu2_function_top_wide_pane

0xd161,	// (0x00031e4a) bg_button_pane_cp012

0x219e,	// (0x00026e87) cell_vitu2_function_top_pane_g1

0xd3f0,	// (0x000320d9) bg_button_pane_cp013_ParamLimits

0xd3f0,	// (0x000320d9) bg_button_pane_cp013

0x87ae,	// (0x0002d497) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x87ae,	// (0x0002d497) cell_vitu2_function_top_wide_pane_g1

0xd161,	// (0x00031e4a) bg_popup_sub_pane_cp20

0x21b2,	// (0x00026e9b) list_vitu2_match_list_pane

0xd179,	// (0x00031e62) bg_popup_sub_pane_cp20_g1

0xd181,	// (0x00031e6a) bg_popup_sub_pane_cp20_g2

0x3f51,	// (0x00028c3a) bg_popup_sub_pane_cp20_g3

0xd189,	// (0x00031e72) bg_popup_sub_pane_cp20_g4

0x3f31,	// (0x00028c1a) bg_popup_sub_pane_cp20_g5

0xd40c,	// (0x000320f5) bg_popup_sub_pane_cp20_g6

0xd199,	// (0x00031e82) bg_popup_sub_pane_cp20_g7

0xd1a1,	// (0x00031e8a) bg_popup_sub_pane_cp20_g8

0xd1a9,	// (0x00031e92) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0003472f) bg_popup_sub_pane_cp20_g

0xd414,	// (0x000320fd) list_vitu2_match_list_item_pane_ParamLimits

0xd414,	// (0x000320fd) list_vitu2_match_list_item_pane

0xd426,	// (0x0003210f) list_vitu2_match_list_item_pane_t1

0xab7a,	// (0x0002f863) bg_popup_sub_pane_cp21

0xd44c,	// (0x00032135) grid_vitu2_dropdown_list_pane

0x21d0,	// (0x00026eb9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x21d0,	// (0x00026eb9) cell_vitu2_dropdown_list_char_pane

0x21f3,	// (0x00026edc) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x21f3,	// (0x00026edc) cell_vitu2_dropdown_list_ctrl_pane

0xd454,	// (0x0003213d) cell_vitu2_dropdown_list_char_pane_g1

0xd45d,	// (0x00032146) cell_vitu2_dropdown_list_char_pane_g2

0xd466,	// (0x0003214f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0003474c) cell_vitu2_dropdown_list_char_pane_g

0x2221,	// (0x00026f0a) cell_vitu2_dropdown_list_char_pane_t1

0x87f2,	// (0x0002d4db) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x87f2,	// (0x0002d4db) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8802,	// (0x0002d4eb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8802,	// (0x0002d4eb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8813,	// (0x0002d4fc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8813,	// (0x0002d4fc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x222f,	// (0x00026f18) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x222f,	// (0x00026f18) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd46f,	// (0x00032158) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd46f,	// (0x00032158) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00034753) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00034753) cell_vitu2_dropdown_list_ctrl_pane_g

0x8823,	// (0x0002d50c) aid_size_cell_gallery2_ParamLimits

0x8823,	// (0x0002d50c) aid_size_cell_gallery2

0x8839,	// (0x0002d522) grid_gallery2_pane_ParamLimits

0x8839,	// (0x0002d522) grid_gallery2_pane

0x884d,	// (0x0002d536) scroll_pane_cp029_ParamLimits

0x884d,	// (0x0002d536) scroll_pane_cp029

0x8859,	// (0x0002d542) cell_gallery2_pane_ParamLimits

0x8859,	// (0x0002d542) cell_gallery2_pane

0xd47d,	// (0x00032166) cell_gallery2_pane_g2

0x8893,	// (0x0002d57c) cell_gallery2_pane_g3

0xd487,	// (0x00032170) cell_gallery2_pane_g4

0xd48f,	// (0x00032178) cell_gallery2_pane_g5

0x5457,	// (0x0002a140) grid_highlight_pane_cp10

0x1f22,	// (0x00026c0b) popup_vitu2_match_list_window_ParamLimits

0x1f39,	// (0x00026c22) popup_vitu2_query_window_ParamLimits

0x1f39,	// (0x00026c22) popup_vitu2_query_window

0xab7a,	// (0x0002f863) bg_vitu2_candi_button_pane

0xd454,	// (0x0003213d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd45d,	// (0x00032146) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd466,	// (0x0003214f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x889b,	// (0x0002d584) bg_button_pane_cp015

0x88a5,	// (0x0002d58e) bg_button_pane_cp016

0x88af,	// (0x0002d598) bg_button_pane_cp017

0x253e,	// (0x00027227) bg_popup_sub_pane_cp22

0xd497,	// (0x00032180) popup_vitu2_query_window_g1

0x88d7,	// (0x0002d5c0) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0003475e) popup_vitu2_query_window_g

0x88e5,	// (0x0002d5ce) popup_vitu2_query_window_t1_ParamLimits

0x88e5,	// (0x0002d5ce) popup_vitu2_query_window_t1

0x890d,	// (0x0002d5f6) popup_vitu2_query_window_t2_ParamLimits

0x890d,	// (0x0002d5f6) popup_vitu2_query_window_t2

0x891f,	// (0x0002d608) popup_vitu2_query_window_t3_ParamLimits

0x891f,	// (0x0002d608) popup_vitu2_query_window_t3

0x8947,	// (0x0002d630) popup_vitu2_query_window_t4_ParamLimits

0x8947,	// (0x0002d630) popup_vitu2_query_window_t4

0x895b,	// (0x0002d644) popup_vitu2_query_window_t5_ParamLimits

0x895b,	// (0x0002d644) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00034763) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00034763) popup_vitu2_query_window_t

0xd27f,	// (0x00031f68) main_cset_text_pane

0x83d7,	// (0x0002d0c0) aid_area_touch_slider_ParamLimits

0x83f3,	// (0x0002d0dc) cset_slider_pane_ParamLimits

0x841d,	// (0x0002d106) main_cset_slider_pane_g1_ParamLimits

0x8432,	// (0x0002d11b) main_cset_slider_pane_g2_ParamLimits

0xd2a0,	// (0x00031f89) main_cset_slider_pane_g3_ParamLimits

0xd2a0,	// (0x00031f89) main_cset_slider_pane_g3

0x8447,	// (0x0002d130) main_cset_slider_pane_g4_ParamLimits

0x8447,	// (0x0002d130) main_cset_slider_pane_g4

0x8456,	// (0x0002d13f) main_cset_slider_pane_g5_ParamLimits

0x8456,	// (0x0002d13f) main_cset_slider_pane_g5

0x8464,	// (0x0002d14d) main_cset_slider_pane_g6_ParamLimits

0x8464,	// (0x0002d14d) main_cset_slider_pane_g6

0xf9cf,	// (0x000346b8) main_cset_slider_pane_g_ParamLimits

0xd2d0,	// (0x00031fb9) main_cset_slider_pane_t1_ParamLimits

0x84f4,	// (0x0002d1dd) main_cset_slider_pane_t2_ParamLimits

0x850e,	// (0x0002d1f7) main_cset_slider_pane_t3_ParamLimits

0x8528,	// (0x0002d211) main_cset_slider_pane_t4_ParamLimits

0x8542,	// (0x0002d22b) main_cset_slider_pane_t5_ParamLimits

0x8560,	// (0x0002d249) main_cset_slider_pane_t6_ParamLimits

0x8577,	// (0x0002d260) main_cset_slider_pane_t7_ParamLimits

0x85a5,	// (0x0002d28e) main_cset_slider_pane_t8_ParamLimits

0x85a5,	// (0x0002d28e) main_cset_slider_pane_t8

0x85cd,	// (0x0002d2b6) main_cset_slider_pane_t9_ParamLimits

0x85cd,	// (0x0002d2b6) main_cset_slider_pane_t9

0x85f5,	// (0x0002d2de) main_cset_slider_pane_t10_ParamLimits

0x85f5,	// (0x0002d2de) main_cset_slider_pane_t10

0x861d,	// (0x0002d306) main_cset_slider_pane_t11_ParamLimits

0x861d,	// (0x0002d306) main_cset_slider_pane_t11

0x8647,	// (0x0002d330) main_cset_slider_pane_t12_ParamLimits

0x8647,	// (0x0002d330) main_cset_slider_pane_t12

0x8664,	// (0x0002d34d) main_cset_slider_pane_t13_ParamLimits

0x8664,	// (0x0002d34d) main_cset_slider_pane_t13

0xf9f4,	// (0x000346dd) main_cset_slider_pane_t_ParamLimits

0x22be,	// (0x00026fa7) bg_popup_sub_pane_cp011

0xd4a3,	// (0x0003218c) main_cset_text_pane_g1

0xd4ab,	// (0x00032194) main_cset_text_pane_t1

0xd4b9,	// (0x000321a2) main_cset_text_pane_t2

0xd4c7,	// (0x000321b0) main_cset_text_pane_t3

0xd4d5,	// (0x000321be) main_cset_text_pane_t4

0xd4e3,	// (0x000321cc) main_cset_text_pane_t5

0xd4f1,	// (0x000321da) main_cset_text_pane_t6

0xd4ff,	// (0x000321e8) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0003476e) main_cset_text_pane_t

0x22be,	// (0x00026fa7) main_cam4_burst_pane

0x22be,	// (0x00026fa7) main_cam5_pane

0x830c,	// (0x0002cff5) bg_button_pane_cp019

0x8315,	// (0x0002cffe) bg_button_pane_cp020

0xd2ac,	// (0x00031f95) main_cset_slider_pane_g7_ParamLimits

0xd2ac,	// (0x00031f95) main_cset_slider_pane_g7

0xd2b8,	// (0x00031fa1) main_cset_slider_pane_g8_ParamLimits

0xd2b8,	// (0x00031fa1) main_cset_slider_pane_g8

0x8478,	// (0x0002d161) main_cset_slider_pane_g9_ParamLimits

0x8478,	// (0x0002d161) main_cset_slider_pane_g9

0x8484,	// (0x0002d16d) main_cset_slider_pane_g10_ParamLimits

0x8484,	// (0x0002d16d) main_cset_slider_pane_g10

0x8490,	// (0x0002d179) main_cset_slider_pane_g11_ParamLimits

0x8490,	// (0x0002d179) main_cset_slider_pane_g11

0x849c,	// (0x0002d185) main_cset_slider_pane_g12_ParamLimits

0x849c,	// (0x0002d185) main_cset_slider_pane_g12

0x84a8,	// (0x0002d191) main_cset_slider_pane_g13_ParamLimits

0x84a8,	// (0x0002d191) main_cset_slider_pane_g13

0x84b4,	// (0x0002d19d) main_cset_slider_pane_g14_ParamLimits

0x84b4,	// (0x0002d19d) main_cset_slider_pane_g14

0x84c0,	// (0x0002d1a9) main_cset_slider_pane_g15_ParamLimits

0x84c0,	// (0x0002d1a9) main_cset_slider_pane_g15

0xd2fe,	// (0x00031fe7) main_cset_slider_pane_t14_ParamLimits

0xd2fe,	// (0x00031fe7) main_cset_slider_pane_t14

0xd337,	// (0x00032020) main_cset_slider_pane_t15_ParamLimits

0xd337,	// (0x00032020) main_cset_slider_pane_t15

0x896f,	// (0x0002d658) aid_cam4_burst_size_cell_ParamLimits

0x896f,	// (0x0002d658) aid_cam4_burst_size_cell

0x898f,	// (0x0002d678) grid_cam4_burst_pane_ParamLimits

0x898f,	// (0x0002d678) grid_cam4_burst_pane

0x89c9,	// (0x0002d6b2) linegrid_cam4_burst_pane_ParamLimits

0x89c9,	// (0x0002d6b2) linegrid_cam4_burst_pane

0x89ed,	// (0x0002d6d6) scroll_pane_cp30_ParamLimits

0x89ed,	// (0x0002d6d6) scroll_pane_cp30

0x89f9,	// (0x0002d6e2) cell_cam4_burst_pane_ParamLimits

0x89f9,	// (0x0002d6e2) cell_cam4_burst_pane

0xd50d,	// (0x000321f6) linegrid_cam4_burst_pane_g1_ParamLimits

0xd50d,	// (0x000321f6) linegrid_cam4_burst_pane_g1

0x8a4e,	// (0x0002d737) linegrid_cam4_burst_pane_g2_ParamLimits

0x8a4e,	// (0x0002d737) linegrid_cam4_burst_pane_g2

0xd51a,	// (0x00032203) linegrid_cam4_burst_pane_g3_ParamLimits

0xd51a,	// (0x00032203) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0003477d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0003477d) linegrid_cam4_burst_pane_g

0x8a5f,	// (0x0002d748) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8a5f,	// (0x0002d748) linegrid_cam4_burst_pane_g3_copy1

0xd527,	// (0x00032210) linegrid_cam4_burst_pane_g4_ParamLimits

0xd527,	// (0x00032210) linegrid_cam4_burst_pane_g4

0x8a7d,	// (0x0002d766) linegrid_cam4_burst_pane_g5_ParamLimits

0x8a7d,	// (0x0002d766) linegrid_cam4_burst_pane_g5

0x8a8e,	// (0x0002d777) linegrid_cam4_burst_pane_g6_ParamLimits

0x8a8e,	// (0x0002d777) linegrid_cam4_burst_pane_g6

0xd534,	// (0x0003221d) linegrid_cam4_burst_pane_g7_ParamLimits

0xd534,	// (0x0003221d) linegrid_cam4_burst_pane_g7

0x8aa5,	// (0x0002d78e) cell_cam4_burst_pane_g1

0xd54d,	// (0x00032236) main_cam5_pane_t1_ParamLimits

0xd54d,	// (0x00032236) main_cam5_pane_t1

0xd55f,	// (0x00032248) main_cam5_pane_t2_ParamLimits

0xd55f,	// (0x00032248) main_cam5_pane_t2

0xd571,	// (0x0003225a) main_cam5_pane_t3_ParamLimits

0xd571,	// (0x0003225a) main_cam5_pane_t3

0xd583,	// (0x0003226c) main_cam5_pane_t4_ParamLimits

0xd583,	// (0x0003226c) main_cam5_pane_t4

0xd59b,	// (0x00032284) main_cam5_pane_t5_ParamLimits

0xd59b,	// (0x00032284) main_cam5_pane_t5

0xd5af,	// (0x00032298) main_cam5_pane_t6_ParamLimits

0xd5af,	// (0x00032298) main_cam5_pane_t6

0xd5c3,	// (0x000322ac) main_cam5_pane_t7_ParamLimits

0xd5c3,	// (0x000322ac) main_cam5_pane_t7

0xd5d5,	// (0x000322be) main_cam5_pane_t8_ParamLimits

0xd5d5,	// (0x000322be) main_cam5_pane_t8

0xd5f3,	// (0x000322dc) main_cam5_pane_t9_ParamLimits

0xd5f3,	// (0x000322dc) main_cam5_pane_t9

0xd605,	// (0x000322ee) main_cam5_pane_t10_ParamLimits

0xd605,	// (0x000322ee) main_cam5_pane_t10

0xd617,	// (0x00032300) main_cam5_pane_t11_ParamLimits

0xd617,	// (0x00032300) main_cam5_pane_t11

0xd62b,	// (0x00032314) main_cam5_pane_t12_ParamLimits

0xd62b,	// (0x00032314) main_cam5_pane_t12

0xd642,	// (0x0003232b) main_cam5_pane_t13_ParamLimits

0xd642,	// (0x0003232b) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00034789) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00034789) main_cam5_pane_t

0x2504,	// (0x000271ed) popup_scut_keymap_window_ParamLimits

0x2504,	// (0x000271ed) popup_scut_keymap_window

0x8ab8,	// (0x0002d7a1) aid_size_cell_brow_shortcut

0x5457,	// (0x0002a140) bg_popup_window_pane_cp010

0x8ac4,	// (0x0002d7ad) grid_scut_pane

0x8ad0,	// (0x0002d7b9) cell_scut_pane_ParamLimits

0x8ad0,	// (0x0002d7b9) cell_scut_pane

0x8ae9,	// (0x0002d7d2) cell_scut_pane_g1

0xd665,	// (0x0003234e) cell_scut_pane_t1

0xd674,	// (0x0003235d) cell_scut_pane_t2

0x8af2,	// (0x0002d7db) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x000347a4) cell_scut_pane_t

0x7261,	// (0x0002bf4a) main_mup3_pane_g8_ParamLimits

0x7261,	// (0x0002bf4a) main_mup3_pane_g8

0x1e24,	// (0x00026b0d) area_vitu2_query_pane_ParamLimits

0x1e24,	// (0x00026b0d) area_vitu2_query_pane

0x88b9,	// (0x0002d5a2) input_focus_pane_cp08

0xd683,	// (0x0003236c) area_vitu2_query_pane_g1

0x8b00,	// (0x0002d7e9) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x000347ab) area_vitu2_query_pane_g

0x8b11,	// (0x0002d7fa) area_vitu2_query_pane_t1_ParamLimits

0x8b11,	// (0x0002d7fa) area_vitu2_query_pane_t1

0x8b25,	// (0x0002d80e) area_vitu2_query_pane_t2_ParamLimits

0x8b25,	// (0x0002d80e) area_vitu2_query_pane_t2

0x8b39,	// (0x0002d822) area_vitu2_query_pane_t3_ParamLimits

0x8b39,	// (0x0002d822) area_vitu2_query_pane_t3

0xd68f,	// (0x00032378) area_vitu2_query_pane_t4_ParamLimits

0xd68f,	// (0x00032378) area_vitu2_query_pane_t4

0xd6b7,	// (0x000323a0) area_vitu2_query_pane_t5_ParamLimits

0xd6b7,	// (0x000323a0) area_vitu2_query_pane_t5

0xd6df,	// (0x000323c8) area_vitu2_query_pane_t6_ParamLimits

0xd6df,	// (0x000323c8) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x000347b0) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x000347b0) area_vitu2_query_pane_t

0x8b61,	// (0x0002d84a) bg_button_pane_cp018

0x8b6f,	// (0x0002d858) bg_button_pane_cp021

0x8b7b,	// (0x0002d864) bg_button_pane_cp022

0x8b8c,	// (0x0002d875) input_focus_pane_cp09

0x527c,	// (0x00029f65) aid_size_touch_mv_arrow_left

0x52a5,	// (0x00029f8e) aid_size_touch_mv_arrow_right

0x84d8,	// (0x0002d1c1) main_cset_slider_pane_g16_ParamLimits

0x84d8,	// (0x0002d1c1) main_cset_slider_pane_g16

0x84e6,	// (0x0002d1cf) main_cset_slider_pane_g17_ParamLimits

0x84e6,	// (0x0002d1cf) main_cset_slider_pane_g17

0x8aa5,	// (0x0002d78e) cell_cam4_burst_pane_g1_ParamLimits

0x22be,	// (0x00026fa7) compa_mode_pane

0x86ee,	// (0x0002d3d7) popup_vtel_slider_window_g3_ParamLimits

0x86ee,	// (0x0002d3d7) popup_vtel_slider_window_g3

0x8705,	// (0x0002d3ee) popup_vtel_slider_window_g4_ParamLimits

0x8705,	// (0x0002d3ee) popup_vtel_slider_window_g4

0x871c,	// (0x0002d405) popup_vtel_slider_window_t1_ParamLimits

0x871c,	// (0x0002d405) popup_vtel_slider_window_t1

0x22be,	// (0x00026fa7) main_cl_pane

0xbf16,	// (0x00030bff) popup_imed_adjust2_window_ParamLimits

0xbeea,	// (0x00030bd3) bg_tb_trans_pane_cp05_ParamLimits

0xc962,	// (0x0003164b) popup_imed_adjust2_window_g1_ParamLimits

0xc971,	// (0x0003165a) popup_imed_adjust2_window_g2_ParamLimits

0xc971,	// (0x0003165a) popup_imed_adjust2_window_g2

0xc97d,	// (0x00031666) popup_imed_adjust2_window_g3_ParamLimits

0xc97d,	// (0x00031666) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0003452a) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0003452a) popup_imed_adjust2_window_g

0xc989,	// (0x00031672) popup_imed_adjust2_window_t1_ParamLimits

0xc9a1,	// (0x0003168a) slider_imed_adjust_pane_ParamLimits

0xc9b5,	// (0x0003169e) slider_imed_adjust_pane_g1_ParamLimits

0xc9c5,	// (0x000316ae) slider_imed_adjust_pane_g2_ParamLimits

0xc9d5,	// (0x000316be) slider_imed_adjust_pane_g3_ParamLimits

0xc9e6,	// (0x000316cf) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x00034531) slider_imed_adjust_pane_g_ParamLimits

0x1b72,	// (0x0002685b) aid_touch_area_cam4_ParamLimits

0x1b72,	// (0x0002685b) aid_touch_area_cam4

0xd0c1,	// (0x00031daa) battery_pane_cp01

0x1c29,	// (0x00026912) main_camera4_pane_g6_ParamLimits

0x1c29,	// (0x00026912) main_camera4_pane_g6

0x1c4c,	// (0x00026935) main_camera4_pane_t2_ParamLimits

0x1c4c,	// (0x00026935) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00034634) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00034634) main_camera4_pane_t

0x1cb2,	// (0x0002699b) aid_touch_area_vid4_ParamLimits

0x1cb2,	// (0x0002699b) aid_touch_area_vid4

0x1d10,	// (0x000269f9) main_video4_pane_g5_ParamLimits

0x1d10,	// (0x000269f9) main_video4_pane_g5

0x1d37,	// (0x00026a20) vid4_progress_pane_ParamLimits

0x1d37,	// (0x00026a20) vid4_progress_pane

0xd2c4,	// (0x00031fad) main_cset_slider_pane_g18_ParamLimits

0xd2c4,	// (0x00031fad) main_cset_slider_pane_g18

0xd541,	// (0x0003222a) cell_cam4_burst_pane_g2_ParamLimits

0xd541,	// (0x0003222a) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00034784) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00034784) cell_cam4_burst_pane_g

0x2f3b,	// (0x00027c24) bg_cl_pane_ParamLimits

0x2f3b,	// (0x00027c24) bg_cl_pane

0x8b9d,	// (0x0002d886) cl_header_pane_ParamLimits

0x8b9d,	// (0x0002d886) cl_header_pane

0x8bb1,	// (0x0002d89a) cl_listscroll_pane_ParamLimits

0x8bb1,	// (0x0002d89a) cl_listscroll_pane

0xd72b,	// (0x00032414) bg_cl_pane_g1

0xd733,	// (0x0003241c) bg_cl_pane_g2

0xd73b,	// (0x00032424) bg_cl_pane_g3

0xd743,	// (0x0003242c) bg_cl_pane_g4

0xd74b,	// (0x00032434) bg_cl_pane_g5

0xd753,	// (0x0003243c) bg_cl_pane_g6

0xd75b,	// (0x00032444) bg_cl_pane_g7

0xd763,	// (0x0003244c) bg_cl_pane_g8

0xd76b,	// (0x00032454) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x000347bf) bg_cl_pane_g

0x8bc1,	// (0x0002d8aa) aid_height_cl_leading_ParamLimits

0x8bc1,	// (0x0002d8aa) aid_height_cl_leading

0x8bcd,	// (0x0002d8b6) aid_height_cl_text_ParamLimits

0x8bcd,	// (0x0002d8b6) aid_height_cl_text

0x253e,	// (0x00027227) bg_cl_header_pane_ParamLimits

0x253e,	// (0x00027227) bg_cl_header_pane

0x8bec,	// (0x0002d8d5) cl_header_pane_g1_ParamLimits

0x8bec,	// (0x0002d8d5) cl_header_pane_g1

0x8c02,	// (0x0002d8eb) cl_header_pane_t1_ParamLimits

0x8c02,	// (0x0002d8eb) cl_header_pane_t1

0xd773,	// (0x0003245c) cl_list_pane

0xd297,	// (0x00031f80) hc_scroll_pane_cp01

0x3f31,	// (0x00028c1a) bg_cl_header_pane_g1

0xd179,	// (0x00031e62) bg_cl_header_pane_g2

0x3f51,	// (0x00028c3a) bg_cl_header_pane_g3

0xd189,	// (0x00031e72) bg_cl_header_pane_g4

0xd181,	// (0x00031e6a) bg_cl_header_pane_g5

0xd40c,	// (0x000320f5) bg_cl_header_pane_g6

0xd1a1,	// (0x00031e8a) bg_cl_header_pane_g7

0xd1a9,	// (0x00031e92) bg_cl_header_pane_g8

0xd199,	// (0x00031e82) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x000347d2) bg_cl_header_pane_g

0x8c1b,	// (0x0002d904) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8c1b,	// (0x0002d904) hc_cl_list_double_graphic_heading_pane

0x8c2e,	// (0x0002d917) hc_cl_list_single_graphic_pane_ParamLimits

0x8c2e,	// (0x0002d917) hc_cl_list_single_graphic_pane

0x8c46,	// (0x0002d92f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8c46,	// (0x0002d92f) hc_cl_list_single_graphic_pane_g1

0x8c52,	// (0x0002d93b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8c52,	// (0x0002d93b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x000347e5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x000347e5) hc_cl_list_single_graphic_pane_g

0x8c66,	// (0x0002d94f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8c66,	// (0x0002d94f) hc_cl_list_single_graphic_pane_t1

0x8c46,	// (0x0002d92f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8c46,	// (0x0002d92f) hc_cl_list_double_graphic_heading_pane_g1

0x8c7b,	// (0x0002d964) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8c7b,	// (0x0002d964) hc_cl_list_double_graphic_heading_pane_g2

0x8c8f,	// (0x0002d978) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8c8f,	// (0x0002d978) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x000347ea) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x000347ea) hc_cl_list_double_graphic_heading_pane_g

0x8ca3,	// (0x0002d98c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8ca3,	// (0x0002d98c) hc_cl_list_double_graphic_heading_pane_t1

0x8cb8,	// (0x0002d9a1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8cb8,	// (0x0002d9a1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x000347f1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x000347f1) hc_cl_list_double_graphic_heading_pane_t

0xd784,	// (0x0003246d) vid4_progress_pane_g1

0xd790,	// (0x00032479) vid4_progress_pane_g2

0xd79c,	// (0x00032485) vid4_progress_pane_g3

0xd7ab,	// (0x00032494) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x000347f6) vid4_progress_pane_g

0xd7c9,	// (0x000324b2) vid4_progress_pane_t1

0xd7df,	// (0x000324c8) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x00034801) vid4_progress_pane_t

0xd80a,	// (0x000324f3) wait_bar_pane_cp07

0xc20c,	// (0x00030ef5) blid_firmament_pane_ParamLimits

0xc24f,	// (0x00030f38) popup_blid_sat_info2_window_g1

0xc273,	// (0x00030f5c) popup_blid_sat_info2_window_t3

0xc281,	// (0x00030f6a) popup_blid_sat_info2_window_t4

0xc28f,	// (0x00030f78) popup_blid_sat_info2_window_t5

0xc29d,	// (0x00030f86) popup_blid_sat_info2_window_t6

0xc2ad,	// (0x00030f96) popup_blid_sat_info2_window_t7

0xc2bb,	// (0x00030fa4) popup_blid_sat_info2_window_t8

0xc2c9,	// (0x00030fb2) popup_blid_sat_info2_window_t9

0xc2d7,	// (0x00030fc0) popup_blid_sat_info2_window_t10

0xc39f,	// (0x00031088) aid_firma_cardinal_ParamLimits

0xc3b3,	// (0x0003109c) blid_firmament_pane_t1_ParamLimits

0xc3ca,	// (0x000310b3) blid_firmament_pane_t2_ParamLimits

0xc3e1,	// (0x000310ca) blid_firmament_pane_t3_ParamLimits

0xc3f8,	// (0x000310e1) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x00034423) blid_firmament_pane_t_ParamLimits

0xc40f,	// (0x000310f8) blid_sat_info_pane_ParamLimits

0x253e,	// (0x00027227) main_cam_set_pane_ParamLimits

0x7a8c,	// (0x0002c775) aid_size_cell_colour_35_ParamLimits

0x7aac,	// (0x0002c795) aid_size_cell_colour_112_ParamLimits

0x7acc,	// (0x0002c7b5) aid_size_cell_effect_ParamLimits

0xbeea,	// (0x00030bd3) bg_tb_trans_pane_cp02_ParamLimits

0x4a7d,	// (0x00029766) heading_imed_pane_ParamLimits

0x7aec,	// (0x0002c7d5) listscroll_imed_pane_ParamLimits

0xb518,	// (0x00030201) popup_call2_audio_first_window_g5_ParamLimits

0xb518,	// (0x00030201) popup_call2_audio_first_window_g5

0x194d,	// (0x00026636) aid_size_touch_image3_arrow_left_ParamLimits

0x194d,	// (0x00026636) aid_size_touch_image3_arrow_left

0x1979,	// (0x00026662) aid_size_touch_image3_arrow_right_ParamLimits

0x1979,	// (0x00026662) aid_size_touch_image3_arrow_right

0xd7f5,	// (0x000324de) vid4_progress_pane_t3

0x7e09,	// (0x0002caf2) main_hwr_training_symbol_option_pane_ParamLimits

0x7e09,	// (0x0002caf2) main_hwr_training_symbol_option_pane

0xcc51,	// (0x0003193a) popup_hwr_training_preview_window_ParamLimits

0xcc51,	// (0x0003193a) popup_hwr_training_preview_window

0x17e0,	// (0x000264c9) hwr_training_navi_pane_g5_ParamLimits

0x17e0,	// (0x000264c9) hwr_training_navi_pane_g5

0xd159,	// (0x00031e42) popup_char_count_window

0xd161,	// (0x00031e4a) bg_popup_sub_pane_cp20_ParamLimits

0x21b2,	// (0x00026e9b) list_vitu2_match_list_pane_ParamLimits

0x21c1,	// (0x00026eaa) vitu2_page_scroll_pane_ParamLimits

0x21c1,	// (0x00026eaa) vitu2_page_scroll_pane

0xd876,	// (0x0003255f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd876,	// (0x0003255f) list_single_hwr_training_symbol_option_pane

0xd889,	// (0x00032572) list_single_hwr_training_symbol_option_pane_g1

0xd891,	// (0x0003257a) list_single_hwr_training_symbol_option_pane_t1

0xd89f,	// (0x00032588) bg_button_pane_cp023

0xd8a8,	// (0x00032591) bg_button_pane_cp024

0x8ccd,	// (0x0002d9b6) vitu2_page_scroll_pane_g1

0x8cd5,	// (0x0002d9be) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00034808) vitu2_page_scroll_pane_g

0x8cdf,	// (0x0002d9c8) vitu2_page_scroll_pane_t1

0xc128,	// (0x00030e11) popup_char_count_window_g1

0xd8db,	// (0x000325c4) popup_char_count_window_g2

0xd8e4,	// (0x000325cd) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0003480d) popup_char_count_window_g

0xd8ed,	// (0x000325d6) popup_char_count_window_t1

0x22be,	// (0x00026fa7) main_vded2_pane

0xc94e,	// (0x00031637) aid_size_cell_imed_line

0xc958,	// (0x00031641) grid_imed_line_width_pane

0x1d9a,	// (0x00026a83) vid4_indicators_pane_g4

0xd8fb,	// (0x000325e4) cell_imed_line_width_pane_ParamLimits

0xd8fb,	// (0x000325e4) cell_imed_line_width_pane

0xd911,	// (0x000325fa) cell_imed_line_width_pane_g1

0xc1ba,	// (0x00030ea3) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00034814) cell_imed_line_width_pane_g

0x8cee,	// (0x0002d9d7) main_vded2_pane_g1_ParamLimits

0x8cee,	// (0x0002d9d7) main_vded2_pane_g1

0x8d09,	// (0x0002d9f2) main_vded2_pane_g2_ParamLimits

0x8d09,	// (0x0002d9f2) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00034819) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00034819) main_vded2_pane_g

0x8d1b,	// (0x0002da04) vded2_slider_pane_ParamLimits

0x8d1b,	// (0x0002da04) vded2_slider_pane

0x8d2b,	// (0x0002da14) aid_size_touch_vded2_end

0x8d35,	// (0x0002da1e) aid_size_touch_vded2_playhead

0xd91a,	// (0x00032603) aid_size_touch_vded2_start

0xd922,	// (0x0003260b) vded2_slider_bg_pane

0xd92b,	// (0x00032614) vded2_slider_pane_g1

0xd934,	// (0x0003261d) vded2_slider_pane_g2

0x8d3f,	// (0x0002da28) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0003481e) vded2_slider_pane_g

0xd93c,	// (0x00032625) vded2_slider_bg_pane_g1

0xd945,	// (0x0003262e) vded2_slider_bg_pane_g2

0xd94e,	// (0x00032637) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x00034825) vded2_slider_bg_pane_g

0x5bd0,	// (0x0002a8b9) aid_postcard_touch_down_pane_ParamLimits

0x5bd0,	// (0x0002a8b9) aid_postcard_touch_down_pane

0x5be8,	// (0x0002a8d1) aid_postcard_touch_up_pane_ParamLimits

0x5be8,	// (0x0002a8d1) aid_postcard_touch_up_pane

0x22be,	// (0x00026fa7) main_blid2_pane

0xbef8,	// (0x00030be1) popup_blid2_search_window

0x22be,	// (0x00026fa7) blid2_gps_pane

0x22be,	// (0x00026fa7) blid2_navig_pane

0x22be,	// (0x00026fa7) blid2_search_pane

0x22be,	// (0x00026fa7) blid2_tripm_pane

0x8d4a,	// (0x0002da33) blid2_search_pane_g1_ParamLimits

0x8d4a,	// (0x0002da33) blid2_search_pane_g1

0x8d62,	// (0x0002da4b) blid2_search_pane_t1_ParamLimits

0x8d62,	// (0x0002da4b) blid2_search_pane_t1

0x8d74,	// (0x0002da5d) aid_size_cell_blid2_gps_ParamLimits

0x8d74,	// (0x0002da5d) aid_size_cell_blid2_gps

0x8d8c,	// (0x0002da75) blid2_gps_pane_g1_ParamLimits

0x8d8c,	// (0x0002da75) blid2_gps_pane_g1

0x8da0,	// (0x0002da89) grid_blid2_satellite_pane_ParamLimits

0x8da0,	// (0x0002da89) grid_blid2_satellite_pane

0x8db8,	// (0x0002daa1) blid2_navig_pane_g1_ParamLimits

0x8db8,	// (0x0002daa1) blid2_navig_pane_g1

0x8dc4,	// (0x0002daad) blid2_navig_pane_t1_ParamLimits

0x8dc4,	// (0x0002daad) blid2_navig_pane_t1

0x8ddf,	// (0x0002dac8) blid2_navig_pane_t2_ParamLimits

0x8ddf,	// (0x0002dac8) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0003482c) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0003482c) blid2_navig_pane_t

0x8dfa,	// (0x0002dae3) blid2_navig_ring_pane_ParamLimits

0x8dfa,	// (0x0002dae3) blid2_navig_ring_pane

0x8e15,	// (0x0002dafe) blid2_speed_pane_ParamLimits

0x8e15,	// (0x0002dafe) blid2_speed_pane

0x8e21,	// (0x0002db0a) blid2_tripm_pane_g1_ParamLimits

0x8e21,	// (0x0002db0a) blid2_tripm_pane_g1

0x8e3c,	// (0x0002db25) blid2_tripm_pane_g2_ParamLimits

0x8e3c,	// (0x0002db25) blid2_tripm_pane_g2

0x8e50,	// (0x0002db39) blid2_tripm_pane_g3_ParamLimits

0x8e50,	// (0x0002db39) blid2_tripm_pane_g3

0x8e64,	// (0x0002db4d) blid2_tripm_pane_g4_ParamLimits

0x8e64,	// (0x0002db4d) blid2_tripm_pane_g4

0x8e78,	// (0x0002db61) blid2_tripm_pane_g5_ParamLimits

0x8e78,	// (0x0002db61) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x00034831) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x00034831) blid2_tripm_pane_g

0x8e9e,	// (0x0002db87) blid2_tripm_pane_t1_ParamLimits

0x8e9e,	// (0x0002db87) blid2_tripm_pane_t1

0x8eb9,	// (0x0002dba2) blid2_tripm_pane_t2_ParamLimits

0x8eb9,	// (0x0002dba2) blid2_tripm_pane_t2

0x8ed2,	// (0x0002dbbb) blid2_tripm_pane_t3_ParamLimits

0x8ed2,	// (0x0002dbbb) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0003483e) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0003483e) blid2_tripm_pane_t

0x8f19,	// (0x0002dc02) cell_blid2_satellite_pane_ParamLimits

0x8f19,	// (0x0002dc02) cell_blid2_satellite_pane

0x8f35,	// (0x0002dc1e) cell_blid2_satellite_pane_g1

0xd957,	// (0x00032640) cell_blid2_satellite_pane_t1

0xc41f,	// (0x00031108) blid2_speed_pane_g1

0xd965,	// (0x0003264e) blid2_speed_pane_t1

0xd973,	// (0x0003265c) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x00034847) blid2_speed_pane_t

0xc41f,	// (0x00031108) blid2_navig_ring_pane_g1

0x8f3e,	// (0x0002dc27) blid2_navig_ring_pane_g2

0x8f46,	// (0x0002dc2f) blid2_navig_ring_pane_g3

0x8f4e,	// (0x0002dc37) blid2_navig_ring_pane_g4

0x8f56,	// (0x0002dc3f) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0003484c) blid2_navig_ring_pane_g

0x22be,	// (0x00026fa7) bg_popup_window_pane_cp011

0xd981,	// (0x0003266a) popup_blid2_search_window_g1

0xd989,	// (0x00032672) popup_blid2_search_window_t1

0xd997,	// (0x00032680) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x00034857) popup_blid2_search_window_t

0x3dee,	// (0x00028ad7) main_browser_pane_g1

0x2f3b,	// (0x00027c24) main_browser_pane_ParamLimits

0xd161,	// (0x00031e4a) bg_button_pane_cp011_ParamLimits

0x2126,	// (0x00026e0f) cell_vitu2_function_pane_g1_ParamLimits

0x253e,	// (0x00027227) bg_popup_sub_pane_cp22_ParamLimits

0x88b9,	// (0x0002d5a2) input_focus_pane_cp08_ParamLimits

0x88c6,	// (0x0002d5af) popup_vitu2_query_button_pane_ParamLimits

0x88c6,	// (0x0002d5af) popup_vitu2_query_button_pane

0x889b,	// (0x0002d584) popup_vitu2_query_input_button_pane

0xd497,	// (0x00032180) popup_vitu2_query_window_g1_ParamLimits

0x88d7,	// (0x0002d5c0) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0003475e) popup_vitu2_query_window_g_ParamLimits

0x22be,	// (0x00026fa7) bg_button_pane_cp026

0x8f5e,	// (0x0002dc47) popup_vitu2_query_input_button_pane_g1

0x22be,	// (0x00026fa7) bg_button_pane_cp025

0xd9a5,	// (0x0003268e) popup_vitu2_query_button_pane_t1

0x6f72,	// (0x0002bc5b) main_mp3_pane_t6

0x6f80,	// (0x0002bc69) popup_slider_window_cp01

0xd0d3,	// (0x00031dbc) cam4_battery_pane

0xd0f3,	// (0x00031ddc) cam4_battery_pane_cp02

0x224b,	// (0x00026f34) cam4_battery_pane_cp01

0xd77c,	// (0x00032465) cam4_battery_pane_cp03

0xcf5c,	// (0x00031c45) cam4_battery_pane_g1

0xc41f,	// (0x00031108) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0003485c) cam4_battery_pane_g

0xc2e5,	// (0x00030fce) popup_blid_sat_info2_window_t11

0x527c,	// (0x00029f65) aid_size_touch_mv_arrow_left_ParamLimits

0x52a5,	// (0x00029f8e) aid_size_touch_mv_arrow_right_ParamLimits

0x52ed,	// (0x00029fd6) navi_pane_g1_ParamLimits

0x52f9,	// (0x00029fe2) navi_pane_g2_ParamLimits

0x5327,	// (0x0002a010) navi_pane_g3_ParamLimits

0xf44c,	// (0x00034135) navi_pane_g_ParamLimits

0x53e5,	// (0x0002a0ce) navi_pane_mv_t1_ParamLimits

0x7af8,	// (0x0002c7e1) grid_imed_effect_pane_ParamLimits

0x3a35,	// (0x0002871e) aid_placing_vt_slider_lsc

0x3a3d,	// (0x00028726) aid_placing_vt_slider_prt

0x253e,	// (0x00027227) bg_tb_trans_pane_cp01_ParamLimits

0xc56f,	// (0x00031258) popup_image_details_window_g1_ParamLimits

0xc582,	// (0x0003126b) popup_image_details_window_g2_ParamLimits

0xc597,	// (0x00031280) popup_image_details_window_g3_ParamLimits

0xc597,	// (0x00031280) popup_image_details_window_g3

0xf77f,	// (0x00034468) popup_image_details_window_g_ParamLimits

0xc5ab,	// (0x00031294) popup_image_details_window_t1_ParamLimits

0xc5bd,	// (0x000312a6) popup_image_details_window_t2_ParamLimits

0xc5d6,	// (0x000312bf) popup_image_details_window_t3_ParamLimits

0xc5ea,	// (0x000312d3) popup_image_details_window_t4_ParamLimits

0xc605,	// (0x000312ee) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0003446f) popup_image_details_window_t_ParamLimits

0x8bd9,	// (0x0002d8c2) cl_header_name_pane_ParamLimits

0x8bd9,	// (0x0002d8c2) cl_header_name_pane

0x8f66,	// (0x0002dc4f) cl_header_name_pane_t1_ParamLimits

0x8f66,	// (0x0002dc4f) cl_header_name_pane_t1

0x8f87,	// (0x0002dc70) cl_header_name_pane_t2_ParamLimits

0x8f87,	// (0x0002dc70) cl_header_name_pane_t2

0x8fc9,	// (0x0002dcb2) cl_header_name_pane_t3_ParamLimits

0x8fc9,	// (0x0002dcb2) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x00034861) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x00034861) cl_header_name_pane_t

0x53b6,	// (0x0002a09f) navi_pane_mv_g2_ParamLimits

0xd116,	// (0x00031dff) field_vitu2_entry_pane_g1_ParamLimits

0xd122,	// (0x00031e0b) field_vitu2_entry_pane_g2_ParamLimits

0xd12e,	// (0x00031e17) field_vitu2_entry_pane_g3_ParamLimits

0xd12e,	// (0x00031e17) field_vitu2_entry_pane_g3

0xf974,	// (0x0003465d) field_vitu2_entry_pane_g_ParamLimits

0x1fc6,	// (0x00026caf) cell_vitu2_itu_pane_g1_ParamLimits

0x1fd6,	// (0x00026cbf) cell_vitu2_itu_pane_g2_ParamLimits

0x1fd6,	// (0x00026cbf) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00034669) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00034669) cell_vitu2_itu_pane_g

0xd161,	// (0x00031e4a) bg_vkb2_func_pane_cp05_ParamLimits

0xd161,	// (0x00031e4a) bg_vkb2_func_pane_cp05

0xd161,	// (0x00031e4a) bg_vkb2_func_pane_cp03

0xd161,	// (0x00031e4a) bg_vkb2_func_pane_cp04

0xd161,	// (0x00031e4a) bg_vkb2_func_pane_cp10_ParamLimits

0xd161,	// (0x00031e4a) bg_vkb2_func_pane_cp10

0x8b7b,	// (0x0002d864) bg_vkb2_func_pane_cp08

0x8b61,	// (0x0002d84a) bg_vkb2_func_pane_cp06

0x8b6f,	// (0x0002d858) bg_vkb2_func_pane_cp07

0xd8b1,	// (0x0003259a) bg_vkb2_func_pane_cp11_ParamLimits

0xd8b1,	// (0x0003259a) bg_vkb2_func_pane_cp11

0xd8c6,	// (0x000325af) bg_vkb2_func_pane_cp12_ParamLimits

0xd8c6,	// (0x000325af) bg_vkb2_func_pane_cp12

0x22be,	// (0x00026fa7) bg_vkb2_func_pane_cp09

0xd179,	// (0x00031e62) bg_vkb2_func_pane_g1

0x3f51,	// (0x00028c3a) bg_vkb2_func_pane_g2

0xd181,	// (0x00031e6a) bg_vkb2_func_pane_g3

0xd189,	// (0x00031e72) bg_vkb2_func_pane_g4

0xd40c,	// (0x000320f5) bg_vkb2_func_pane_g5

0xd1a1,	// (0x00031e8a) bg_vkb2_func_pane_g6

0xd1a9,	// (0x00031e92) bg_vkb2_func_pane_g7

0xd199,	// (0x00031e82) bg_vkb2_func_pane_g8

0x3f31,	// (0x00028c1a) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x00034868) bg_vkb2_func_pane_g

0x8e8c,	// (0x0002db75) blid2_tripm_pane_g6_ParamLimits

0x8e8c,	// (0x0002db75) blid2_tripm_pane_g6

0xcf16,	// (0x00031bff) mp4_progress_pane_g1

0x8f05,	// (0x0002dbee) blid2_tripm_values_pane_ParamLimits

0x8f05,	// (0x0002dbee) blid2_tripm_values_pane

0x8ffa,	// (0x0002dce3) blid2_tripm_values_pane_t1

0x9008,	// (0x0002dcf1) blid2_tripm_values_pane_t2

0x9016,	// (0x0002dcff) blid2_tripm_values_pane_t3

0x9024,	// (0x0002dd0d) blid2_tripm_values_pane_t4

0x9032,	// (0x0002dd1b) blid2_tripm_values_pane_t5

0x9040,	// (0x0002dd29) blid2_tripm_values_pane_t6

0x904e,	// (0x0002dd37) blid2_tripm_values_pane_t7

0x905c,	// (0x0002dd45) blid2_tripm_values_pane_t8

0x906a,	// (0x0002dd53) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0003487b) blid2_tripm_values_pane_t

0x3a75,	// (0x0002875e) call_video_pane_t1_ParamLimits

0x3a87,	// (0x00028770) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00033fbe) call_video_pane_t_ParamLimits

0x5ae9,	// (0x0002a7d2) msg_header_pane_g1_ParamLimits

0x5af7,	// (0x0002a7e0) msg_header_pane_g2_ParamLimits

0x5af7,	// (0x0002a7e0) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x000341d8) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x000341d8) msg_header_pane_g

0x2f3b,	// (0x00027c24) main_clock2_pane_ParamLimits

0x7888,	// (0x0002c571) grid_clock2_toolbar_pane_ParamLimits

0x7888,	// (0x0002c571) grid_clock2_toolbar_pane

0x7888,	// (0x0002c571) listscroll_clock2_pane_ParamLimits

0x7888,	// (0x0002c571) listscroll_clock2_pane

0x796c,	// (0x0002c655) main_clock2_pane_t3_ParamLimits

0x796c,	// (0x0002c655) main_clock2_pane_t3

0x7987,	// (0x0002c670) main_clock2_pane_t4_ParamLimits

0x7987,	// (0x0002c670) main_clock2_pane_t4

0xd9b3,	// (0x0003269c) cell_clock2_toolbar_pane

0xd9bb,	// (0x000326a4) cell_clock2_toolbar_pane_cp01

0xd9bb,	// (0x000326a4) cell_clock2_toolbar_pane_cp02

0xd9c3,	// (0x000326ac) cell_clock2_toolbar_pane_cp03

0xd9cb,	// (0x000326b4) list_clock2_pane

0x5006,	// (0x00029cef) scroll_pane_cp10

0xd9d3,	// (0x000326bc) list_single_clock2_pane_ParamLimits

0xd9d3,	// (0x000326bc) list_single_clock2_pane

0x5457,	// (0x0002a140) list_highlight_pane_cp08

0xd9e0,	// (0x000326c9) list_single_clock2_pane_t1

0xd9ee,	// (0x000326d7) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0003488e) list_single_clock2_pane_t

0x22be,	// (0x00026fa7) bg_button_pane_cp10

0xd9fc,	// (0x000326e5) cell_clock2_toolbar_pane_g1

0x12be,	// (0x00025fa7) aid_main_viewer_pane_g1_ParamLimits

0x12be,	// (0x00025fa7) aid_main_viewer_pane_g1

0x12cc,	// (0x00025fb5) aid_main_viewer_pane_g2_ParamLimits

0x12cc,	// (0x00025fb5) aid_main_viewer_pane_g2

0x5b86,	// (0x0002a86f) aid_main_viewer_pane_g3_ParamLimits

0x5b86,	// (0x0002a86f) aid_main_viewer_pane_g3

0x5b95,	// (0x0002a87e) aid_main_viewer_pane_g4_ParamLimits

0x5b95,	// (0x0002a87e) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x000341e9) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x000341e9) aid_main_viewer_pane_g

0x65dc,	// (0x0002b2c5) main_calc_pane_ParamLimits

0x65f0,	// (0x0002b2d9) main_dialer2_pane_ParamLimits

0x22be,	// (0x00026fa7) main_cam6_pane

0x22be,	// (0x00026fa7) main_vid6_pane

0x7894,	// (0x0002c57d) listscroll_gen_pane_cp06_ParamLimits

0x7894,	// (0x0002c57d) listscroll_gen_pane_cp06

0x79a2,	// (0x0002c68b) main_clock2_pane_t5_ParamLimits

0x79a2,	// (0x0002c68b) main_clock2_pane_t5

0x79ff,	// (0x0002c6e8) aid_call2_pane_cp10_ParamLimits

0x7a11,	// (0x0002c6fa) aid_call_pane_cp10_ParamLimits

0x5207,	// (0x00029ef0) popup_clock_analogue_window_cp10_g1_ParamLimits

0x5207,	// (0x00029ef0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7a23,	// (0x0002c70c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7a23,	// (0x0002c70c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x5207,	// (0x00029ef0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0003451f) popup_clock_analogue_window_cp10_g_ParamLimits

0x7a39,	// (0x0002c722) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7ef1,	// (0x0002cbda) cell_dialer2_keypad_pane_g2_ParamLimits

0x7ef1,	// (0x0002cbda) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00034605) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00034605) cell_dialer2_keypad_pane_g

0x7f0d,	// (0x0002cbf6) cell_dialer2_keypad_pane_t1

0x83c9,	// (0x0002d0b2) main_cset_text2_pane_ParamLimits

0x83c9,	// (0x0002d0b2) main_cset_text2_pane

0xd683,	// (0x0003236c) area_vitu2_query_pane_g1_ParamLimits

0x8b00,	// (0x0002d7e9) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x000347ab) area_vitu2_query_pane_g_ParamLimits

0xd707,	// (0x000323f0) area_vitu2_query_pane_t7_ParamLimits

0xd707,	// (0x000323f0) area_vitu2_query_pane_t7

0x8b61,	// (0x0002d84a) bg_button_pane_cp018_ParamLimits

0x8b6f,	// (0x0002d858) bg_button_pane_cp021_ParamLimits

0x8b7b,	// (0x0002d864) bg_button_pane_cp022_ParamLimits

0x8b7b,	// (0x0002d864) bg_vkb2_func_pane_cp08_ParamLimits

0x8b61,	// (0x0002d84a) bg_vkb2_func_pane_cp06_ParamLimits

0x8b6f,	// (0x0002d858) bg_vkb2_func_pane_cp07_ParamLimits

0x8b8c,	// (0x0002d875) input_focus_pane_cp09_ParamLimits

0xda04,	// (0x000326ed) cam6_autofocus_pane_ParamLimits

0xda04,	// (0x000326ed) cam6_autofocus_pane

0x2255,	// (0x00026f3e) cam6_image_uncrop_pane_ParamLimits

0x2255,	// (0x00026f3e) cam6_image_uncrop_pane

0x2264,	// (0x00026f4d) cam6_indi_pane_ParamLimits

0x2264,	// (0x00026f4d) cam6_indi_pane

0x227a,	// (0x00026f63) cam6_mode_pane_ParamLimits

0x227a,	// (0x00026f63) cam6_mode_pane

0x228c,	// (0x00026f75) cam6_timer_pane_ParamLimits

0x228c,	// (0x00026f75) cam6_timer_pane

0x2298,	// (0x00026f81) cam6_zoom_pane_ParamLimits

0x2298,	// (0x00026f81) cam6_zoom_pane

0x9078,	// (0x0002dd61) cam6_mode_pane_g1_ParamLimits

0x9078,	// (0x0002dd61) cam6_mode_pane_g1

0x9088,	// (0x0002dd71) cam6_mode_pane_g2_ParamLimits

0x9088,	// (0x0002dd71) cam6_mode_pane_g2

0x9098,	// (0x0002dd81) cam6_mode_pane_g3_ParamLimits

0x9098,	// (0x0002dd81) cam6_mode_pane_g3

0x90a8,	// (0x0002dd91) cam6_mode_pane_g4_ParamLimits

0x90a8,	// (0x0002dd91) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x00034893) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x00034893) cam6_mode_pane_g

0xda12,	// (0x000326fb) bg_tb_trans_pane_cp08_ParamLimits

0xda12,	// (0x000326fb) bg_tb_trans_pane_cp08

0xda20,	// (0x00032709) cam6_battery_pane_ParamLimits

0xda20,	// (0x00032709) cam6_battery_pane

0xda36,	// (0x0003271f) cam6_indi_pane_g1_ParamLimits

0xda36,	// (0x0003271f) cam6_indi_pane_g1

0xda48,	// (0x00032731) cam6_indi_pane_g2_ParamLimits

0xda48,	// (0x00032731) cam6_indi_pane_g2

0xda5a,	// (0x00032743) cam6_indi_pane_g3_ParamLimits

0xda5a,	// (0x00032743) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0003489c) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0003489c) cam6_indi_pane_g

0xda6c,	// (0x00032755) cam6_indi_pane_t1_ParamLimits

0xda6c,	// (0x00032755) cam6_indi_pane_t1

0x807d,	// (0x0002cd66) cam6_autofocus_pane_g1

0x8075,	// (0x0002cd5e) cam6_autofocus_pane_g2

0x808d,	// (0x0002cd76) cam6_autofocus_pane_g3

0x8085,	// (0x0002cd6e) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x000348a3) cam6_autofocus_pane_g

0xda92,	// (0x0003277b) cam6_timer_pane_g1

0xda9a,	// (0x00032783) cam6_timer_pane_t1

0xdaa8,	// (0x00032791) cam6_zoom_cont_pane

0xdab0,	// (0x00032799) cam6_zoom_pane_g1

0xdab8,	// (0x000327a1) cam6_zoom_pane_g2

0x90b8,	// (0x0002dda1) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x000348ac) cam6_zoom_pane_g

0xc41f,	// (0x00031108) cam6_battery_pane_g1

0xc41f,	// (0x00031108) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0003442c) cam6_battery_pane_g

0xdac0,	// (0x000327a9) cam6_zoom_cont_pane_g1

0xdac9,	// (0x000327b2) cam6_zoom_cont_pane_g2

0xdad2,	// (0x000327bb) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x000348b3) cam6_zoom_cont_pane_g

0x90d5,	// (0x0002ddbe) cam6_mode_pane_cp_ParamLimits

0x90d5,	// (0x0002ddbe) cam6_mode_pane_cp

0x90e7,	// (0x0002ddd0) cam6_zoom_pane_cp_ParamLimits

0x90e7,	// (0x0002ddd0) cam6_zoom_pane_cp

0x90f5,	// (0x0002ddde) vid6_image_uncrop_cif_pane_ParamLimits

0x90f5,	// (0x0002ddde) vid6_image_uncrop_cif_pane

0x9105,	// (0x0002ddee) vid6_image_uncrop_nhd_pane_ParamLimits

0x9105,	// (0x0002ddee) vid6_image_uncrop_nhd_pane

0x9114,	// (0x0002ddfd) vid6_image_uncrop_vga_pane_ParamLimits

0x9114,	// (0x0002ddfd) vid6_image_uncrop_vga_pane

0x9123,	// (0x0002de0c) vid6_image_uncrop_wvga_pane_ParamLimits

0x9123,	// (0x0002de0c) vid6_image_uncrop_wvga_pane

0x9132,	// (0x0002de1b) vid6_indi_pane_ParamLimits

0x9132,	// (0x0002de1b) vid6_indi_pane

0xda12,	// (0x000326fb) bg_tb_trans_pane_cp09_ParamLimits

0xda12,	// (0x000326fb) bg_tb_trans_pane_cp09

0xdaea,	// (0x000327d3) cam6_battery_pane_cp_ParamLimits

0xdaea,	// (0x000327d3) cam6_battery_pane_cp

0xdaf6,	// (0x000327df) vid6_indi_pane_g1_ParamLimits

0xdaf6,	// (0x000327df) vid6_indi_pane_g1

0xdb08,	// (0x000327f1) vid6_indi_pane_g2_ParamLimits

0xdb08,	// (0x000327f1) vid6_indi_pane_g2

0xdb1a,	// (0x00032803) vid6_indi_pane_g3_ParamLimits

0xdb1a,	// (0x00032803) vid6_indi_pane_g3

0xdb31,	// (0x0003281a) vid6_indi_pane_g4_ParamLimits

0xdb31,	// (0x0003281a) vid6_indi_pane_g4

0xdb48,	// (0x00032831) vid6_indi_pane_g5_ParamLimits

0xdb48,	// (0x00032831) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x000348ba) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x000348ba) vid6_indi_pane_g

0xdb62,	// (0x0003284b) vid6_indi_pane_t1_ParamLimits

0xdb62,	// (0x0003284b) vid6_indi_pane_t1

0xdb78,	// (0x00032861) vid6_indi_pane_t2_ParamLimits

0xdb78,	// (0x00032861) vid6_indi_pane_t2

0xdba0,	// (0x00032889) vid6_indi_pane_t3_ParamLimits

0xdba0,	// (0x00032889) vid6_indi_pane_t3

0xdbc8,	// (0x000328b1) vid6_indi_pane_t4_ParamLimits

0xdbc8,	// (0x000328b1) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x000348c5) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x000348c5) vid6_indi_pane_t

0xdbec,	// (0x000328d5) wait_bar_pane_cp08

0x914a,	// (0x0002de33) main_cset_text2_pane_t1_ParamLimits

0x914a,	// (0x0002de33) main_cset_text2_pane_t1

0x90c0,	// (0x0002dda9) listscroll_gen_pane_cp06_t1_ParamLimits

0x90c0,	// (0x0002dda9) listscroll_gen_pane_cp06_t1

0x22be,	// (0x00026fa7) main_cam6_set_pane

0x1c6d,	// (0x00026956) bg_tb_trans_pane_cp06_ParamLimits

0x1c7b,	// (0x00026964) cam4_indicators_pane_g1_ParamLimits

0x1c88,	// (0x00026971) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00034639) cam4_indicators_pane_g_ParamLimits

0x1ca0,	// (0x00026989) cam4_indicators_pane_t1_ParamLimits

0xd0e5,	// (0x00031dce) bg_tb_trans_pane_cp07_ParamLimits

0x1c7b,	// (0x00026964) vid4_indicators_pane_g1_ParamLimits

0x1d80,	// (0x00026a69) vid4_indicators_pane_g2_ParamLimits

0x1d8d,	// (0x00026a76) vid4_indicators_pane_g3_ParamLimits

0x1d9a,	// (0x00026a83) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0003464b) vid4_indicators_pane_g_ParamLimits

0x1da6,	// (0x00026a8f) vid4_indicators_pane_t1_ParamLimits

0xd784,	// (0x0003246d) vid4_progress_pane_g1_ParamLimits

0xd790,	// (0x00032479) vid4_progress_pane_g2_ParamLimits

0xd79c,	// (0x00032485) vid4_progress_pane_g3_ParamLimits

0xd7ab,	// (0x00032494) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x000347f6) vid4_progress_pane_g_ParamLimits

0xd7c9,	// (0x000324b2) vid4_progress_pane_t1_ParamLimits

0xd7df,	// (0x000324c8) vid4_progress_pane_t2_ParamLimits

0xd7f5,	// (0x000324de) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x00034801) vid4_progress_pane_t_ParamLimits

0xd80a,	// (0x000324f3) wait_bar_pane_cp07_ParamLimits

0x916b,	// (0x0002de54) main_cam6_set_pane_g2_ParamLimits

0x916b,	// (0x0002de54) main_cam6_set_pane_g2

0x9191,	// (0x0002de7a) main_cset6_listscroll_pane_ParamLimits

0x9191,	// (0x0002de7a) main_cset6_listscroll_pane

0x91af,	// (0x0002de98) main_cset6_slider_pane_ParamLimits

0x91af,	// (0x0002de98) main_cset6_slider_pane

0x91c5,	// (0x0002deae) main_cset6_text2_pane_ParamLimits

0x91c5,	// (0x0002deae) main_cset6_text2_pane

0xdbfb,	// (0x000328e4) main_cset6_text_pane

0xdc03,	// (0x000328ec) main_cset_list_pane_copy1_ParamLimits

0xdc03,	// (0x000328ec) main_cset_list_pane_copy1

0xdc13,	// (0x000328fc) scroll_pane_cp028_copy1

0x91d3,	// (0x0002debc) cset_list_set_pane_copy1

0x91e7,	// (0x0002ded0) aid_position_infowindow_above_copy1

0x91ef,	// (0x0002ded8) aid_position_infowindow_below_copy1

0x91f7,	// (0x0002dee0) cset_list_set_pane_g1_copy1

0xdc1c,	// (0x00032905) cset_list_set_pane_g3_copy1_ParamLimits

0xdc1c,	// (0x00032905) cset_list_set_pane_g3_copy1

0xdc2b,	// (0x00032914) cset_list_set_pane_t1_copy1_ParamLimits

0xdc2b,	// (0x00032914) cset_list_set_pane_t1_copy1

0x253e,	// (0x00027227) list_highlight_pane_cp021_copy1_ParamLimits

0x253e,	// (0x00027227) list_highlight_pane_cp021_copy1

0xdc40,	// (0x00032929) cset6_slider_pane_ParamLimits

0xdc40,	// (0x00032929) cset6_slider_pane

0xdc6c,	// (0x00032955) main_cset6_slider_pane_g1_ParamLimits

0xdc6c,	// (0x00032955) main_cset6_slider_pane_g1

0x91ff,	// (0x0002dee8) main_cset6_slider_pane_g2_ParamLimits

0x91ff,	// (0x0002dee8) main_cset6_slider_pane_g2

0xdc94,	// (0x0003297d) main_cset6_slider_pane_g3_ParamLimits

0xdc94,	// (0x0003297d) main_cset6_slider_pane_g3

0x9227,	// (0x0002df10) main_cset6_slider_pane_g4_ParamLimits

0x9227,	// (0x0002df10) main_cset6_slider_pane_g4

0x9233,	// (0x0002df1c) main_cset6_slider_pane_g5_ParamLimits

0x9233,	// (0x0002df1c) main_cset6_slider_pane_g5

0xd2ac,	// (0x00031f95) main_cset6_slider_pane_g7_ParamLimits

0xd2ac,	// (0x00031f95) main_cset6_slider_pane_g7

0xd2b8,	// (0x00031fa1) main_cset6_slider_pane_g8_ParamLimits

0xd2b8,	// (0x00031fa1) main_cset6_slider_pane_g8

0x8478,	// (0x0002d161) main_cset6_slider_pane_g9_ParamLimits

0x8478,	// (0x0002d161) main_cset6_slider_pane_g9

0x8484,	// (0x0002d16d) main_cset6_slider_pane_g10_ParamLimits

0x8484,	// (0x0002d16d) main_cset6_slider_pane_g10

0x8490,	// (0x0002d179) main_cset6_slider_pane_g11_ParamLimits

0x8490,	// (0x0002d179) main_cset6_slider_pane_g11

0x849c,	// (0x0002d185) main_cset6_slider_pane_g12_ParamLimits

0x849c,	// (0x0002d185) main_cset6_slider_pane_g12

0x84a8,	// (0x0002d191) main_cset6_slider_pane_g13_ParamLimits

0x84a8,	// (0x0002d191) main_cset6_slider_pane_g13

0x84b4,	// (0x0002d19d) main_cset6_slider_pane_g14_ParamLimits

0x84b4,	// (0x0002d19d) main_cset6_slider_pane_g14

0x9241,	// (0x0002df2a) main_cset6_slider_pane_g15_ParamLimits

0x9241,	// (0x0002df2a) main_cset6_slider_pane_g15

0x84d8,	// (0x0002d1c1) main_cset6_slider_pane_g16_ParamLimits

0x84d8,	// (0x0002d1c1) main_cset6_slider_pane_g16

0x84e6,	// (0x0002d1cf) main_cset6_slider_pane_g17_ParamLimits

0x84e6,	// (0x0002d1cf) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x000348ce) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x000348ce) main_cset6_slider_pane_g

0xdca0,	// (0x00032989) main_cset6_slider_pane_t1_ParamLimits

0xdca0,	// (0x00032989) main_cset6_slider_pane_t1

0x9271,	// (0x0002df5a) main_cset6_slider_pane_t2_ParamLimits

0x9271,	// (0x0002df5a) main_cset6_slider_pane_t2

0x929c,	// (0x0002df85) main_cset6_slider_pane_t3_ParamLimits

0x929c,	// (0x0002df85) main_cset6_slider_pane_t3

0x92c7,	// (0x0002dfb0) main_cset6_slider_pane_t4_ParamLimits

0x92c7,	// (0x0002dfb0) main_cset6_slider_pane_t4

0x92f4,	// (0x0002dfdd) main_cset6_slider_pane_t5_ParamLimits

0x92f4,	// (0x0002dfdd) main_cset6_slider_pane_t5

0xdce1,	// (0x000329ca) main_cset6_slider_pane_t7_ParamLimits

0xdce1,	// (0x000329ca) main_cset6_slider_pane_t7

0x9321,	// (0x0002e00a) main_cset6_slider_pane_t8_ParamLimits

0x9321,	// (0x0002e00a) main_cset6_slider_pane_t8

0x9345,	// (0x0002e02e) main_cset6_slider_pane_t9_ParamLimits

0x9345,	// (0x0002e02e) main_cset6_slider_pane_t9

0x9369,	// (0x0002e052) main_cset6_slider_pane_t10_ParamLimits

0x9369,	// (0x0002e052) main_cset6_slider_pane_t10

0x938d,	// (0x0002e076) main_cset6_slider_pane_t11_ParamLimits

0x938d,	// (0x0002e076) main_cset6_slider_pane_t11

0xdd17,	// (0x00032a00) main_cset6_slider_pane_t14_ParamLimits

0xdd17,	// (0x00032a00) main_cset6_slider_pane_t14

0xdd50,	// (0x00032a39) main_cset6_slider_pane_t15_ParamLimits

0xdd50,	// (0x00032a39) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x000348f3) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x000348f3) main_cset6_slider_pane_t

0xdd89,	// (0x00032a72) cset_slider_pane_g1_copy1

0xdd92,	// (0x00032a7b) cset_slider_pane_g2_copy1

0xdd9b,	// (0x00032a84) cset_slider_pane_g3_copy1

0x22be,	// (0x00026fa7) bg_popup_sub_pane_cp011_copy1

0xd4a3,	// (0x0003218c) main_cset_text_pane_g1_copy1

0xd4ab,	// (0x00032194) main_cset_text_pane_t1_copy1

0xd4b9,	// (0x000321a2) main_cset_text_pane_t2_copy1

0xd4c7,	// (0x000321b0) main_cset_text_pane_t3_copy1

0xd4d5,	// (0x000321be) main_cset_text_pane_t4_copy1

0xd4e3,	// (0x000321cc) main_cset_text_pane_t5_copy1

0xd4f1,	// (0x000321da) main_cset_text_pane_t6_copy1

0xd4ff,	// (0x000321e8) main_cset_text_pane_t7_copy1

0x914a,	// (0x0002de33) main_cset_text2_pane_t1_copy1

0x22be,	// (0x00026fa7) main_ncimui_pane

0x687e,	// (0x0002b567) popup_query_ncimui_window_ParamLimits

0x687e,	// (0x0002b567) popup_query_ncimui_window

0xc6f0,	// (0x000313d9) field_cale_ev2_pane_g4_ParamLimits

0xc6f0,	// (0x000313d9) field_cale_ev2_pane_g4

0x7e76,	// (0x0002cb5f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e76,	// (0x0002cb5f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x000345e0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x000345e0) cell_video_dialer_keypad_pane_g

0x7e8e,	// (0x0002cb77) cell_video_dialer_keypad_pane_t1

0x22be,	// (0x00026fa7) bg_popup_window_pane_cp012

0x4e5b,	// (0x00029b44) heading_pane_cp06

0xde93,	// (0x00032b7c) ncim_query_content_pane

0x22be,	// (0x00026fa7) bg_popup_heading_pane_cp01

0xde9b,	// (0x00032b84) ncim_heading_pane_t1

0xdea9,	// (0x00032b92) ncim_indicator_popup_pane

0xdebb,	// (0x00032ba4) ncim_query_button_pane

0xded1,	// (0x00032bba) ncim_query_content_pane_t1

0xdee3,	// (0x00032bcc) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x00034932) ncim_query_content_pane_t

0xdf1d,	// (0x00032c06) ncim_query_list_pane

0xdf2f,	// (0x00032c18) ncim_query_popup_pane

0xdea9,	// (0x00032b92) ncim_indicator_popup_pane_ParamLimits

0x9479,	// (0x0002e162) ncim_query_content_pane_g1_ParamLimits

0x9479,	// (0x0002e162) ncim_query_content_pane_g1

0xded1,	// (0x00032bba) ncim_query_content_pane_t1_ParamLimits

0xdee3,	// (0x00032bcc) ncim_query_content_pane_t2_ParamLimits

0x9485,	// (0x0002e16e) ncim_query_content_pane_t3_ParamLimits

0x9485,	// (0x0002e16e) ncim_query_content_pane_t3

0x94ad,	// (0x0002e196) ncim_query_content_pane_t4_ParamLimits

0x94ad,	// (0x0002e196) ncim_query_content_pane_t4

0x94d5,	// (0x0002e1be) ncim_query_content_pane_t5_ParamLimits

0x94d5,	// (0x0002e1be) ncim_query_content_pane_t5

0xdef5,	// (0x00032bde) ncim_query_content_pane_t6_ParamLimits

0xdef5,	// (0x00032bde) ncim_query_content_pane_t6

0xfc49,	// (0x00034932) ncim_query_content_pane_t_ParamLimits

0xdf1d,	// (0x00032c06) ncim_query_list_pane_ParamLimits

0xdf2f,	// (0x00032c18) ncim_query_popup_pane_ParamLimits

0xdf43,	// (0x00032c2c) wait_bar_pane_cp04

0x22be,	// (0x00026fa7) input_focus_pane_cp011

0xdf4b,	// (0x00032c34) ncim_query_popup_pane_t1

0xdf59,	// (0x00032c42) ncim_list_query_list_pane_ParamLimits

0xdf59,	// (0x00032c42) ncim_list_query_list_pane

0x22be,	// (0x00026fa7) bg_button_pane_cp027

0xdf6c,	// (0x00032c55) ncim_query_button_pane_g1

0x22be,	// (0x00026fa7) list_highlight_pane_cp012

0xdf76,	// (0x00032c5f) ncim_list_query_list_pane_g1

0xdf7e,	// (0x00032c67) ncim_list_query_list_pane_t1

0x1c94,	// (0x0002697d) cam4_indicators_pane_g3_ParamLimits

0x1c94,	// (0x0002697d) cam4_indicators_pane_g3

0x1c94,	// (0x0002697d) vid4_indicators_pane_g5_ParamLimits

0x1c94,	// (0x0002697d) vid4_indicators_pane_g5

0xd7ba,	// (0x000324a3) vid4_progress_pane_g5_ParamLimits

0xd7ba,	// (0x000324a3) vid4_progress_pane_g5

0x93c1,	// (0x0002e0aa) main_ncimui_pane_g1

0x9407,	// (0x0002e0f0) ncimui_group_query_pane_ParamLimits

0x9407,	// (0x0002e0f0) ncimui_group_query_pane

0x943b,	// (0x0002e124) ncimui_list_pane_ParamLimits

0x943b,	// (0x0002e124) ncimui_list_pane

0x9455,	// (0x0002e13e) ncimui_text_pane_ParamLimits

0x9455,	// (0x0002e13e) ncimui_text_pane

0x94fd,	// (0x0002e1e6) ncimui_text_pane_t1_ParamLimits

0x94fd,	// (0x0002e1e6) ncimui_text_pane_t1

0xdf8c,	// (0x00032c75) ncimui_list_single_graphic_pane_ParamLimits

0xdf8c,	// (0x00032c75) ncimui_list_single_graphic_pane

0x951a,	// (0x0002e203) ncimui_query_pane_ParamLimits

0x951a,	// (0x0002e203) ncimui_query_pane

0x22be,	// (0x00026fa7) list_highlight_pane_cp013

0xdf9c,	// (0x00032c85) ncim_list_query_list_pane_t1_copy1

0xdf76,	// (0x00032c5f) ncim_list_single_graphic_pane_g1

0xdfaa,	// (0x00032c93) ncim_query_button_pane_cp01

0xdfb2,	// (0x00032c9b) ncim_query_entry_pane_ParamLimits

0xdfb2,	// (0x00032c9b) ncim_query_entry_pane

0xdfc2,	// (0x00032cab) ncimui_query_pane_g1

0xdfca,	// (0x00032cb3) ncimui_query_pane_t1_ParamLimits

0xdfca,	// (0x00032cb3) ncimui_query_pane_t1

0x22be,	// (0x00026fa7) input_focus_pane_cp012

0xdf4b,	// (0x00032c34) ncim_query_entry_pane_t1

0x2f3b,	// (0x00027c24) main_im_pane_ParamLimits

0x253e,	// (0x00027227) main_mobtv_pane_ParamLimits

0x253e,	// (0x00027227) main_mobtv_pane

0x9259,	// (0x0002df42) main_cset6_slider_pane_g18_ParamLimits

0x9259,	// (0x0002df42) main_cset6_slider_pane_g18

0x9265,	// (0x0002df4e) main_cset6_slider_pane_g19_ParamLimits

0x9265,	// (0x0002df4e) main_cset6_slider_pane_g19

0xdfe0,	// (0x00032cc9) bg_main_mobtv_pane_ParamLimits

0xdfe0,	// (0x00032cc9) bg_main_mobtv_pane

0x952a,	// (0x0002e213) main_mobtv_info_pane

0x9535,	// (0x0002e21e) main_mobtv_loading_pane_ParamLimits

0x9535,	// (0x0002e21e) main_mobtv_loading_pane

0xdfee,	// (0x00032cd7) main_mobtv_pg_channel_list_pane

0xdff8,	// (0x00032ce1) main_mobtv_pg_hdr_pane

0x9542,	// (0x0002e22b) main_mobtv_programe_curr_pane_ParamLimits

0x9542,	// (0x0002e22b) main_mobtv_programe_curr_pane

0x954f,	// (0x0002e238) main_mobtv_programe_next_pane_ParamLimits

0x954f,	// (0x0002e238) main_mobtv_programe_next_pane

0xe001,	// (0x00032cea) popup_mobtv_noti_window

0xc41f,	// (0x00031108) main_tv_pg_hdr_pane_g1

0xe00b,	// (0x00032cf4) main_tv_pg_hdr_pane_g2

0xe013,	// (0x00032cfc) main_tv_pg_hdr_pane_g3

0xe01b,	// (0x00032d04) main_tv_pg_hdr_pane_g4

0xe023,	// (0x00032d0c) main_tv_pg_hdr_pane_g5

0xe02d,	// (0x00032d16) main_tv_pg_hdr_pane_g6

0xe037,	// (0x00032d20) main_tv_pg_hdr_pane_g7

0xe041,	// (0x00032d2a) main_tv_pg_hdr_pane_g8

0xe04b,	// (0x00032d34) main_tv_pg_hdr_pane_g9

0xe055,	// (0x00032d3e) main_tv_pg_hdr_pane_g10

0xe05f,	// (0x00032d48) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0003493f) main_tv_pg_hdr_pane_g

0xe069,	// (0x00032d52) main_tv_pg_hdr_pane_t1

0xe077,	// (0x00032d60) main_tv_pg_hdr_pane_t2

0xe085,	// (0x00032d6e) main_tv_pg_hdr_pane_t3

0xe095,	// (0x00032d7e) main_tv_pg_hdr_pane_t4

0xe0a5,	// (0x00032d8e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x00034956) main_tv_pg_hdr_pane_t

0xe0b5,	// (0x00032d9e) single_mobtv_pg_channel_pane_ParamLimits

0xe0b5,	// (0x00032d9e) single_mobtv_pg_channel_pane

0xe0c7,	// (0x00032db0) single_mobtv_pg_channel_table_pane

0xe0d0,	// (0x00032db9) single_mobtv_pg_channel_thumb_pane

0xe0d9,	// (0x00032dc2) single_tv_pg_channel_pane_g1

0xe0e2,	// (0x00032dcb) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x00034961) single_tv_pg_channel_pane_g

0xc64f,	// (0x00031338) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc64f,	// (0x00031338) bg_single_mobtv_pg_channel_thumb_pane

0xe0eb,	// (0x00032dd4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0eb,	// (0x00032dd4) single_mobtv_pg_channel_thumb_pane_g1

0xe0f9,	// (0x00032de2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0f9,	// (0x00032de2) single_mobtv_pg_channel_thumb_pane_g2

0xe105,	// (0x00032dee) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe105,	// (0x00032dee) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x00034966) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x00034966) single_mobtv_pg_channel_thumb_pane_g

0xe111,	// (0x00032dfa) single_mobtv_pg_channel_thumb_pane_t1

0xe11f,	// (0x00032e08) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0003496d) single_mobtv_pg_channel_thumb_pane_t

0xc41f,	// (0x00031108) bg_single_mobtv_pg_channel_table_pane_g1

0xc41f,	// (0x00031108) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0003442c) bg_single_mobtv_pg_channel_table_pane_g

0xe12d,	// (0x00032e16) single_mobtv_pg_channel_table_pane_t1

0xe13b,	// (0x00032e24) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x00034972) single_mobtv_pg_channel_table_pane_t

0x9564,	// (0x0002e24d) main_mobtv_info_pane_g1_ParamLimits

0x9564,	// (0x0002e24d) main_mobtv_info_pane_g1

0x9582,	// (0x0002e26b) main_mobtv_info_pane_t1_ParamLimits

0x9582,	// (0x0002e26b) main_mobtv_info_pane_t1

0x95fa,	// (0x0002e2e3) main_mobtv_info_pane_t2_ParamLimits

0x95fa,	// (0x0002e2e3) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0003497c) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0003497c) main_mobtv_info_pane_t

0x968b,	// (0x0002e374) wait_bar_pane_cp05

0x969d,	// (0x0002e386) main_mobtv_loading_pane_g1_ParamLimits

0x969d,	// (0x0002e386) main_mobtv_loading_pane_g1

0x96ae,	// (0x0002e397) main_mobtv_loading_pane_g2_ParamLimits

0x96ae,	// (0x0002e397) main_mobtv_loading_pane_g2

0x96ba,	// (0x0002e3a3) main_mobtv_loading_pane_g3_ParamLimits

0x96ba,	// (0x0002e3a3) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x00034983) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x00034983) main_mobtv_loading_pane_g

0xe149,	// (0x00032e32) main_mobtv_loading_pane_t1_ParamLimits

0xe149,	// (0x00032e32) main_mobtv_loading_pane_t1

0xe161,	// (0x00032e4a) main_mobtv_loading_pane_t2_ParamLimits

0xe161,	// (0x00032e4a) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0003498a) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0003498a) main_mobtv_loading_pane_t

0x96cd,	// (0x0002e3b6) wait_bar_pane_cp06_ParamLimits

0x96cd,	// (0x0002e3b6) wait_bar_pane_cp06

0xe185,	// (0x00032e6e) main_mobtv_programe_curr_pane_t1

0xe193,	// (0x00032e7c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0003498f) main_mobtv_programe_curr_pane_t

0xe1a1,	// (0x00032e8a) main_mobtv_programe_next_pane_t1

0xe1af,	// (0x00032e98) main_mobtv_programe_next_pane_t2

0xe1bd,	// (0x00032ea6) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x00034994) main_mobtv_programe_next_pane_t

0x22be,	// (0x00026fa7) bg_popup_mobtv_noti_window_pane

0xe1cb,	// (0x00032eb4) popup_mobtv_noti_window_g1

0xe1d3,	// (0x00032ebc) popup_mobtv_noti_window_t1

0xe1e1,	// (0x00032eca) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0003499b) popup_mobtv_noti_window_t

0xc41f,	// (0x00031108) bg_popup_mobtv_noti_window_pane_g1

0x22be,	// (0x00026fa7) sc_clock_pane

0x22be,	// (0x00026fa7) main_fs_bigclock_pane

0x8eef,	// (0x0002dbd8) blid2_tripm_pane_t4_ParamLimits

0x8eef,	// (0x0002dbd8) blid2_tripm_pane_t4

0x96dc,	// (0x0002e3c5) sc_clock_pane_g1_ParamLimits

0x96dc,	// (0x0002e3c5) sc_clock_pane_g1

0x96ee,	// (0x0002e3d7) sc_clock_pane_t1_ParamLimits

0x96ee,	// (0x0002e3d7) sc_clock_pane_t1

0x9712,	// (0x0002e3fb) sc_clock_pane_t2_ParamLimits

0x9712,	// (0x0002e3fb) sc_clock_pane_t2

0x972a,	// (0x0002e413) sc_clock_pane_t3_ParamLimits

0x972a,	// (0x0002e413) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x000349a0) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x000349a0) sc_clock_pane_t

0xa4db,	// (0x0002f1c4) main_fs_bigclock_indicator_pane_ParamLimits

0xa4db,	// (0x0002f1c4) main_fs_bigclock_indicator_pane

0xc61f,	// (0x00031308) main_fs_bigclock_pane_g1_ParamLimits

0xc61f,	// (0x00031308) main_fs_bigclock_pane_g1

0xa4e7,	// (0x0002f1d0) main_fs_bigclock_pane_t1_ParamLimits

0xa4e7,	// (0x0002f1d0) main_fs_bigclock_pane_t1

0xa4f9,	// (0x0002f1e2) main_fs_bigclock_pane_t2_ParamLimits

0xa4f9,	// (0x0002f1e2) main_fs_bigclock_pane_t2

0xa50d,	// (0x0002f1f6) main_fs_bigclock_pane_t3_ParamLimits

0xa50d,	// (0x0002f1f6) main_fs_bigclock_pane_t3

0x0002,

0xfeb1,	// (0x00034b9a) main_fs_bigclock_pane_t_ParamLimits

0xfeb1,	// (0x00034b9a) main_fs_bigclock_pane_t

0xee2f,	// (0x00033b18) main_fs_bigclock_indicator_pane_g1

0xdec3,	// (0x00032bac) ncim_query_content_pane_g2_ParamLimits

0xdec3,	// (0x00032bac) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0003492d) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0003492d) ncim_query_content_pane_g

0x973f,	// (0x0002e428) sc_clock_pane_t4_ParamLimits

0x973f,	// (0x0002e428) sc_clock_pane_t4

0x253e,	// (0x00027227) main_radioblah_pane

0xd045,	// (0x00031d2e) cell_call4_button_pane_t1_copy1_ParamLimits

0xd045,	// (0x00031d2e) cell_call4_button_pane_t1_copy1

0x93c9,	// (0x0002e0b2) main_ncimui_pane_t1_ParamLimits

0x93c9,	// (0x0002e0b2) main_ncimui_pane_t1

0x93db,	// (0x0002e0c4) main_ncimui_pane_t2_ParamLimits

0x93db,	// (0x0002e0c4) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x00034926) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x00034926) main_ncimui_pane_t

0xe319,	// (0x00033002) main_radioblah_anim_pane_ParamLimits

0xe319,	// (0x00033002) main_radioblah_anim_pane

0xe32a,	// (0x00033013) main_radioblah_info_pane_ParamLimits

0xe32a,	// (0x00033013) main_radioblah_info_pane

0xe33e,	// (0x00033027) main_radioblah_pane_t1_ParamLimits

0xe33e,	// (0x00033027) main_radioblah_pane_t1

0xe35a,	// (0x00033043) main_radioblah_pane_t2_ParamLimits

0xe35a,	// (0x00033043) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x000349c1) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x000349c1) main_radioblah_pane_t

0x97ed,	// (0x0002e4d6) main_radioblah_rocker_ctrl_pane_ParamLimits

0x97ed,	// (0x0002e4d6) main_radioblah_rocker_ctrl_pane

0xe3a2,	// (0x0003308b) main_radioblah_info_pane_t1_ParamLimits

0xe3a2,	// (0x0003308b) main_radioblah_info_pane_t1

0x9845,	// (0x0002e52e) main_radioblah_info_pane_t2_ParamLimits

0x9845,	// (0x0002e52e) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x000349ca) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x000349ca) main_radioblah_info_pane_t

0xc41f,	// (0x00031108) main_radioblah_rocker_ctrl_pane_g1

0x98f5,	// (0x0002e5de) main_radioblah_rocker_ctrl_pane_g2

0x98fd,	// (0x0002e5e6) main_radioblah_rocker_ctrl_pane_g3

0x9905,	// (0x0002e5ee) main_radioblah_rocker_ctrl_pane_g4

0x990d,	// (0x0002e5f6) main_radioblah_rocker_ctrl_pane_g5

0x9915,	// (0x0002e5fe) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x000349d3) main_radioblah_rocker_ctrl_pane_g

0x914a,	// (0x0002de33) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0c9,	// (0x00031db2) cam4_image_uncrop_qvga_pane

0xd0db,	// (0x00031dc4) vid4_image_uncrop_qcif_pane

0xda04,	// (0x000326ed) cam6_image_uncrop_qvga_pane_ParamLimits

0xda04,	// (0x000326ed) cam6_image_uncrop_qvga_pane

0xdada,	// (0x000327c3) vid6_image_uncrop_qcif_pane_ParamLimits

0xdada,	// (0x000327c3) vid6_image_uncrop_qcif_pane

0x22be,	// (0x00026fa7) bg_popup_preview_window_pane_cp03

0xde75,	// (0x00032b5e) list_cset_text2_pane

0xde7d,	// (0x00032b66) main_cset6_text2_pane_g1

0xde85,	// (0x00032b6e) main_cset6_text2_pane_t1

0x991d,	// (0x0002e606) list_cset_text2_pane_t1_ParamLimits

0x991d,	// (0x0002e606) list_cset_text2_pane_t1

0x253e,	// (0x00027227) main_radioblah_pane_ParamLimits

0x9677,	// (0x0002e360) main_mobtv_info_pane_t3_ParamLimits

0x9677,	// (0x0002e360) main_mobtv_info_pane_t3

0x97db,	// (0x0002e4c4) main_radioblah_pane_g1

0x9815,	// (0x0002e4fe) main_radioblah_info_pane_g1

0x989a,	// (0x0002e583) main_radioblah_info_pane_t3_ParamLimits

0x989a,	// (0x0002e583) main_radioblah_info_pane_t3

0x4836,	// (0x0002951f) highlight_cell_cale_month_pane_ParamLimits

0x4836,	// (0x0002951f) highlight_cell_cale_month_pane

0x22be,	// (0x00026fa7) main_phob_fisheye_pane

0xc7a5,	// (0x0003148e) scroll_pane_cp0031_ParamLimits

0xc7a5,	// (0x0003148e) scroll_pane_cp0031

0xdbec,	// (0x000328d5) wait_bar_pane_cp08_ParamLimits

0x91d3,	// (0x0002debc) cset_list_set_pane_copy1_ParamLimits

0xe3dc,	// (0x000330c5) highlight_cell_cale_month_pane_g1

0x9937,	// (0x0002e620) highlight_cell_cale_month_pane_t1

0xd773,	// (0x0003245c) list_gen_pane_cp01

0xd297,	// (0x00031f80) scroll_pane_01

0x9945,	// (0x0002e62e) list_single_double_fisheye_pane

0xe3e4,	// (0x000330cd) list_double_fisheye_pane_g1_ParamLimits

0xe3e4,	// (0x000330cd) list_double_fisheye_pane_g1

0xe3f0,	// (0x000330d9) list_double_fisheye_pane_g2_ParamLimits

0xe3f0,	// (0x000330d9) list_double_fisheye_pane_g2

0x994e,	// (0x0002e637) list_double_fisheye_pane_g3_ParamLimits

0x994e,	// (0x0002e637) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x000349e0) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x000349e0) list_double_fisheye_pane_g

0x995a,	// (0x0002e643) list_double_fisheye_pane_t1_ParamLimits

0x995a,	// (0x0002e643) list_double_fisheye_pane_t1

0x9975,	// (0x0002e65e) list_double_fisheye_pane_t2_ParamLimits

0x9975,	// (0x0002e65e) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x000349eb) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x000349eb) list_double_fisheye_pane_t

0x22be,	// (0x00026fa7) main_call5_pane

0x976a,	// (0x0002e453) sc_swipe_pane_ParamLimits

0x976a,	// (0x0002e453) sc_swipe_pane

0x99aa,	// (0x0002e693) call5_image_pane_ParamLimits

0x99aa,	// (0x0002e693) call5_image_pane

0x99c7,	// (0x0002e6b0) call5_swipe_1_pane_ParamLimits

0x99c7,	// (0x0002e6b0) call5_swipe_1_pane

0x99da,	// (0x0002e6c3) call5_swipe_2_pane_ParamLimits

0x99da,	// (0x0002e6c3) call5_swipe_2_pane

0x9a07,	// (0x0002e6f0) popup_call5_audio_first_window_ParamLimits

0x9a07,	// (0x0002e6f0) popup_call5_audio_first_window

0xc64f,	// (0x00031338) call5_swipe_1_pane_g1_ParamLimits

0xc64f,	// (0x00031338) call5_swipe_1_pane_g1

0xe421,	// (0x0003310a) call5_swipe_1_pane_g2_ParamLimits

0xe421,	// (0x0003310a) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x000349f0) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x000349f0) call5_swipe_1_pane_g

0xe42d,	// (0x00033116) call5_swipe_1_pane_t1_ParamLimits

0xe42d,	// (0x00033116) call5_swipe_1_pane_t1

0xc64f,	// (0x00031338) call5_swipe_2_pane_g1_ParamLimits

0xc64f,	// (0x00031338) call5_swipe_2_pane_g1

0xe442,	// (0x0003312b) call5_swipe_2_pane_g2_ParamLimits

0xe442,	// (0x0003312b) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x000349f5) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x000349f5) call5_swipe_2_pane_g

0xe44e,	// (0x00033137) call5_swipe_2_pane_t1_ParamLimits

0xe44e,	// (0x00033137) call5_swipe_2_pane_t1

0xe463,	// (0x0003314c) sc_swipe_pane_g1_ParamLimits

0xe463,	// (0x0003314c) sc_swipe_pane_g1

0xe470,	// (0x00033159) sc_swipe_pane_g2_ParamLimits

0xe470,	// (0x00033159) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x000349fa) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x000349fa) sc_swipe_pane_g

0xe47c,	// (0x00033165) sc_swipe_pane_t1_ParamLimits

0xe47c,	// (0x00033165) sc_swipe_pane_t1

0x22be,	// (0x00026fa7) main_cmail_launcher_pane

0x9a1c,	// (0x0002e705) aid_size_cell_cmail_l_ParamLimits

0x9a1c,	// (0x0002e705) aid_size_cell_cmail_l

0x9a36,	// (0x0002e71f) grid_cmail_l_pane_ParamLimits

0x9a36,	// (0x0002e71f) grid_cmail_l_pane

0x9a52,	// (0x0002e73b) cell_cmail_l_pane_ParamLimits

0x9a52,	// (0x0002e73b) cell_cmail_l_pane

0x9a7a,	// (0x0002e763) cell_cmail_l_pane_g1_ParamLimits

0x9a7a,	// (0x0002e763) cell_cmail_l_pane_g1

0x9a86,	// (0x0002e76f) cell_cmail_l_pane_t1_ParamLimits

0x9a86,	// (0x0002e76f) cell_cmail_l_pane_t1

0xe491,	// (0x0003317a) cell_cmail_l_pane_t2_ParamLimits

0xe491,	// (0x0003317a) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x000349ff) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x000349ff) cell_cmail_l_pane_t

0x253e,	// (0x00027227) grid_highlight_pane_cp018_ParamLimits

0x253e,	// (0x00027227) grid_highlight_pane_cp018

0x23eb,	// (0x000270d4) main2_pane_ParamLimits

0x23eb,	// (0x000270d4) main2_pane

0x30bc,	// (0x00027da5) popup_sp_fs_action_menu_bg_pane_g1

0x30c4,	// (0x00027dad) popup_sp_fs_action_menu_bg_pane_g2

0x30cc,	// (0x00027db5) popup_sp_fs_action_menu_bg_pane_g3

0x30d4,	// (0x00027dbd) popup_sp_fs_action_menu_bg_pane_g4

0x30dc,	// (0x00027dc5) popup_sp_fs_action_menu_bg_pane_g5

0x30e4,	// (0x00027dcd) popup_sp_fs_action_menu_bg_pane_g6

0x30ec,	// (0x00027dd5) popup_sp_fs_action_menu_bg_pane_g7

0x30f4,	// (0x00027ddd) popup_sp_fs_action_menu_bg_pane_g8

0x30fc,	// (0x00027de5) popup_sp_fs_action_menu_bg_pane_g9

0x3104,	// (0x00027ded) popup_sp_fs_action_menu_bg_pane_g10

0x3104,	// (0x00027ded) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00033ed8) popup_sp_fs_action_menu_bg_pane_g

0x388a,	// (0x00028573) list_medium_line_x2_t3_g3_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x2_t3_g3_g1

0x3896,	// (0x0002857f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3896,	// (0x0002857f) list_medium_line_x2_t3_g3_g2

0x38a2,	// (0x0002858b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x38a2,	// (0x0002858b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00033f88) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00033f88) list_medium_line_x2_t3_g3_g

0x38ae,	// (0x00028597) list_medium_line_x2_t3_g3_t1_ParamLimits

0x38ae,	// (0x00028597) list_medium_line_x2_t3_g3_t1

0x38c3,	// (0x000285ac) list_medium_line_x2_t3_g3_t2_ParamLimits

0x38c3,	// (0x000285ac) list_medium_line_x2_t3_g3_t2

0x38d7,	// (0x000285c0) list_medium_line_x2_t3_g3_t3_ParamLimits

0x38d7,	// (0x000285c0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00033f8f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00033f8f) list_medium_line_x2_t3_g3_t

0x388a,	// (0x00028573) list_medium_line_x2_t3_g2_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x2_t3_g2_g1

0x38a2,	// (0x0002858b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x38a2,	// (0x0002858b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00033f96) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00033f96) list_medium_line_x2_t3_g2_g

0x38ec,	// (0x000285d5) list_medium_line_x2_t3_g2_t1_ParamLimits

0x38ec,	// (0x000285d5) list_medium_line_x2_t3_g2_t1

0x3902,	// (0x000285eb) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3902,	// (0x000285eb) list_medium_line_x2_t3_g2_t2

0x3914,	// (0x000285fd) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3914,	// (0x000285fd) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00033f9b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00033f9b) list_medium_line_x2_t3_g2_t

0x388a,	// (0x00028573) list_medium_line_x2_t4_g4_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x2_t4_g4_g1

0x3932,	// (0x0002861b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3932,	// (0x0002861b) list_medium_line_x2_t4_g4_g2

0x3896,	// (0x0002857f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3896,	// (0x0002857f) list_medium_line_x2_t4_g4_g3

0x393e,	// (0x00028627) list_medium_line_x2_t4_g4_g4_ParamLimits

0x393e,	// (0x00028627) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00033fa2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00033fa2) list_medium_line_x2_t4_g4_g

0x394a,	// (0x00028633) list_medium_line_x2_t4_g4_t1_ParamLimits

0x394a,	// (0x00028633) list_medium_line_x2_t4_g4_t1

0x3961,	// (0x0002864a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3961,	// (0x0002864a) list_medium_line_x2_t4_g4_t2

0x3976,	// (0x0002865f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3976,	// (0x0002865f) list_medium_line_x2_t4_g4_t3

0x3988,	// (0x00028671) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3988,	// (0x00028671) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00033fab) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00033fab) list_medium_line_x2_t4_g4_t

0x388a,	// (0x00028573) list_medium_line_x2_t2_g4_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x2_t2_g4_g1

0x3932,	// (0x0002861b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3932,	// (0x0002861b) list_medium_line_x2_t2_g4_g2

0x3896,	// (0x0002857f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3896,	// (0x0002857f) list_medium_line_x2_t2_g4_g3

0x38a2,	// (0x0002858b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x38a2,	// (0x0002858b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00034012) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00034012) list_medium_line_x2_t2_g4_g

0x4854,	// (0x0002953d) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4854,	// (0x0002953d) list_medium_line_x2_t2_g4_t1

0x38d7,	// (0x000285c0) list_medium_line_x2_t2_g4_t2_ParamLimits

0x38d7,	// (0x000285c0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0003401b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0003401b) list_medium_line_x2_t2_g4_t

0x388a,	// (0x00028573) list_medium_line_x2_t2_g3_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x2_t2_g3_g1

0x3896,	// (0x0002857f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3896,	// (0x0002857f) list_medium_line_x2_t2_g3_g2

0x38a2,	// (0x0002858b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x38a2,	// (0x0002858b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00033f88) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00033f88) list_medium_line_x2_t2_g3_g

0x4869,	// (0x00029552) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4869,	// (0x00029552) list_medium_line_x2_t2_g3_t1

0x38d7,	// (0x000285c0) list_medium_line_x2_t2_g3_t2_ParamLimits

0x38d7,	// (0x000285c0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00034020) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00034020) list_medium_line_x2_t2_g3_t

0x4bb3,	// (0x0002989c) main_sp_fs_list_pane_ParamLimits

0x4bb3,	// (0x0002989c) main_sp_fs_list_pane

0x4bbf,	// (0x000298a8) sp_fs_scroll_pane_ParamLimits

0x4bbf,	// (0x000298a8) sp_fs_scroll_pane

0x4bcb,	// (0x000298b4) list_medium_line_x2_t3_t1

0x4bdb,	// (0x000298c4) list_medium_line_x2_t3_t2

0x4be9,	// (0x000298d2) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0003406b) list_medium_line_x2_t3_t

0x4bf7,	// (0x000298e0) list_medium_line_x3_t4_t1

0x4c07,	// (0x000298f0) list_medium_line_x3_t4_t2

0x4c15,	// (0x000298fe) list_medium_line_x3_t4_t3

0x4be9,	// (0x000298d2) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00034072) list_medium_line_x3_t4_t

0x4c23,	// (0x0002990c) list_medium_line_x4_t5_t1

0x4c33,	// (0x0002991c) list_medium_line_x4_t5_t2

0x4c15,	// (0x000298fe) list_medium_line_x4_t5_t3

0x4c41,	// (0x0002992a) list_medium_line_x4_t5_t4

0x4be9,	// (0x000298d2) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0003407b) list_medium_line_x4_t5_t

0x388a,	// (0x00028573) list_medium_line_t4_g4_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_t4_g4_g1

0x393e,	// (0x00028627) list_medium_line_t4_g4_g2_ParamLimits

0x393e,	// (0x00028627) list_medium_line_t4_g4_g2

0x4c4f,	// (0x00029938) list_medium_line_t4_g4_g3_ParamLimits

0x4c4f,	// (0x00029938) list_medium_line_t4_g4_g3

0x38a2,	// (0x0002858b) list_medium_line_t4_g4_g4_ParamLimits

0x38a2,	// (0x0002858b) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x00034086) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x00034086) list_medium_line_t4_g4_g

0x4c5b,	// (0x00029944) list_medium_line_t4_g4_t1_ParamLimits

0x4c5b,	// (0x00029944) list_medium_line_t4_g4_t1

0x4c70,	// (0x00029959) list_medium_line_t4_g4_t2_ParamLimits

0x4c70,	// (0x00029959) list_medium_line_t4_g4_t2

0x4c86,	// (0x0002996f) list_medium_line_t4_g4_t3_ParamLimits

0x4c86,	// (0x0002996f) list_medium_line_t4_g4_t3

0x38d7,	// (0x000285c0) list_medium_line_t4_g4_t4_ParamLimits

0x38d7,	// (0x000285c0) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0003408f) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0003408f) list_medium_line_t4_g4_t

0x4fd3,	// (0x00029cbc) chi_dic_find_pane_g1

0x6604,	// (0x0002b2ed) main_tport_pane

0xd3e2,	// (0x000320cb) list_medium_line_plain_t1

0xd434,	// (0x0003211d) list_medium_line_t2_g2_g1_ParamLimits

0xd434,	// (0x0003211d) list_medium_line_t2_g2_g1

0xd440,	// (0x00032129) list_medium_line_t2_g2_g2_ParamLimits

0xd440,	// (0x00032129) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00034742) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00034742) list_medium_line_t2_g2_g

0x87c6,	// (0x0002d4af) list_medium_line_t2_g2_t1_ParamLimits

0x87c6,	// (0x0002d4af) list_medium_line_t2_g2_t1

0x87dd,	// (0x0002d4c6) list_medium_line_t2_g2_t2_ParamLimits

0x87dd,	// (0x0002d4c6) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x00034747) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x00034747) list_medium_line_t2_g2_t

0xd81c,	// (0x00032505) aid_sp_fs_list_icon_a_sm

0xd824,	// (0x0003250d) aid_sp_fs_list_icon_d

0xd82c,	// (0x00032515) aid_sp_fs_text_primary

0xd835,	// (0x0003251e) aid_sp_fs_text_secondary

0xd83e,	// (0x00032527) list_medium_line

0xd83e,	// (0x00032527) list_medium_line_g2

0xd83e,	// (0x00032527) list_medium_line_g3

0xd83e,	// (0x00032527) list_medium_line_plain

0xd83e,	// (0x00032527) list_medium_line_plain_t2

0xd83e,	// (0x00032527) list_medium_line_plain_t3

0xd83e,	// (0x00032527) list_medium_line_right_icon

0xd83e,	// (0x00032527) list_medium_line_right_iconx2

0xd83e,	// (0x00032527) list_medium_line_t2

0xd83e,	// (0x00032527) list_medium_line_t2_g2

0xd83e,	// (0x00032527) list_medium_line_t2_g3

0xd83e,	// (0x00032527) list_medium_line_t2_right_icon

0xd83e,	// (0x00032527) list_medium_line_t2_right_iconx2

0xd83e,	// (0x00032527) list_medium_line_t3

0xd83e,	// (0x00032527) list_medium_line_t3_g2

0xd83e,	// (0x00032527) list_medium_line_t3_g3

0xd83e,	// (0x00032527) list_medium_line_t3_right_iconx2

0xd847,	// (0x00032530) list_medium_line_t4_g4

0xd850,	// (0x00032539) list_medium_line_x2

0xd850,	// (0x00032539) list_medium_line_x2_t2_g2

0xd850,	// (0x00032539) list_medium_line_x2_t2_g3

0xd850,	// (0x00032539) list_medium_line_x2_t2_g4

0xd850,	// (0x00032539) list_medium_line_x2_t3

0xd850,	// (0x00032539) list_medium_line_x2_t3_g2

0xd850,	// (0x00032539) list_medium_line_x2_t3_g3

0xd850,	// (0x00032539) list_medium_line_x2_t3_g4

0xd850,	// (0x00032539) list_medium_line_x2_t4_g2

0xd850,	// (0x00032539) list_medium_line_x2_t4_g4

0xd859,	// (0x00032542) list_medium_line_x3

0xd859,	// (0x00032542) list_medium_line_x3_t4

0xd859,	// (0x00032542) list_medium_line_x3_t4_g4

0xd847,	// (0x00032530) list_medium_line_x4_t4

0xd847,	// (0x00032530) list_medium_line_x4_t4_g7

0xd847,	// (0x00032530) list_medium_line_x4_t5

0xd862,	// (0x0003254b) list_single_fs_dyc_pane_ParamLimits

0xd862,	// (0x0003254b) list_single_fs_dyc_pane

0x388a,	// (0x00028573) list_medium_line_x4_t4_g7_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x4_t4_g7_g1

0xdda4,	// (0x00032a8d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdda4,	// (0x00032a8d) list_medium_line_x4_t4_g7_g2

0xddb0,	// (0x00032a99) list_medium_line_x4_t4_g7_g3_ParamLimits

0xddb0,	// (0x00032a99) list_medium_line_x4_t4_g7_g3

0xddbf,	// (0x00032aa8) list_medium_line_x4_t4_g7_g4_ParamLimits

0xddbf,	// (0x00032aa8) list_medium_line_x4_t4_g7_g4

0xddcb,	// (0x00032ab4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xddcb,	// (0x00032ab4) list_medium_line_x4_t4_g7_g5

0xddda,	// (0x00032ac3) list_medium_line_x4_t4_g7_g6_ParamLimits

0xddda,	// (0x00032ac3) list_medium_line_x4_t4_g7_g6

0xdde9,	// (0x00032ad2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdde9,	// (0x00032ad2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0003490c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0003490c) list_medium_line_x4_t4_g7_g

0xddf5,	// (0x00032ade) list_medium_line_x4_t4_g7_t1_ParamLimits

0xddf5,	// (0x00032ade) list_medium_line_x4_t4_g7_t1

0xde0a,	// (0x00032af3) list_medium_line_x4_t4_g7_t2_ParamLimits

0xde0a,	// (0x00032af3) list_medium_line_x4_t4_g7_t2

0xde1f,	// (0x00032b08) list_medium_line_x4_t4_g7_t3_ParamLimits

0xde1f,	// (0x00032b08) list_medium_line_x4_t4_g7_t3

0xde34,	// (0x00032b1d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde34,	// (0x00032b1d) list_medium_line_x4_t4_g7_t4

0xde46,	// (0x00032b2f) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde46,	// (0x00032b2f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0003491b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0003491b) list_medium_line_x4_t4_g7_t

0xde58,	// (0x00032b41) list_single_dyc_row_pane_ParamLimits

0xde58,	// (0x00032b41) list_single_dyc_row_pane

0x9997,	// (0x0002e680) call5_gesture_pane_ParamLimits

0x9997,	// (0x0002e680) call5_gesture_pane

0x99ed,	// (0x0002e6d6) call5_windows_pane_ParamLimits

0x99ed,	// (0x0002e6d6) call5_windows_pane

0x9a9c,	// (0x0002e785) call5_swipe_1_pane_cp_ParamLimits

0x9a9c,	// (0x0002e785) call5_swipe_1_pane_cp

0x9aa8,	// (0x0002e791) call5_swipe_2_pane_cp_ParamLimits

0x9aa8,	// (0x0002e791) call5_swipe_2_pane_cp

0x5457,	// (0x0002a140) call5_image_pane_cp

0x9ab4,	// (0x0002e79d) popup_call5_audio_first_window_cp_ParamLimits

0x9ab4,	// (0x0002e79d) popup_call5_audio_first_window_cp

0xe463,	// (0x0003314c) call5_swipe_1_pane_g1_cp_ParamLimits

0xe463,	// (0x0003314c) call5_swipe_1_pane_g1_cp

0xe4a3,	// (0x0003318c) call5_swipe_1_pane_g2_cp

0xe47c,	// (0x00033165) call5_swipe_1_pane_t1_cp_ParamLimits

0xe47c,	// (0x00033165) call5_swipe_1_pane_t1_cp

0xe463,	// (0x0003314c) call5_swipe_2_pane_g1_cp_ParamLimits

0xe463,	// (0x0003314c) call5_swipe_2_pane_g1_cp

0xe4ab,	// (0x00033194) call5_swipe_2_pane_g2_cp

0xe4b3,	// (0x0003319c) call5_swipe_2_pane_t1_cp_ParamLimits

0xe4b3,	// (0x0003319c) call5_swipe_2_pane_t1_cp

0x253e,	// (0x00027227) main_sp_fs_email_pane

0xe4c8,	// (0x000331b1) main_sp_fs_listscroll_pane_te

0xe4d1,	// (0x000331ba) popup_sp_fs_action_menu_pane_ParamLimits

0xe4d1,	// (0x000331ba) popup_sp_fs_action_menu_pane

0xc41f,	// (0x00031108) bg_sp_fs_ctrlbar_pane_g1

0xe517,	// (0x00033200) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe520,	// (0x00033209) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe529,	// (0x00033212) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc41f,	// (0x00031108) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x00034a04) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1fe,	// (0x00030ee7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1fe,	// (0x00030ee7) bg_sp_fs_ctrlbar_ddmenu_pane

0xe532,	// (0x0003321b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe532,	// (0x0003321b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe53e,	// (0x00033227) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe53e,	// (0x00033227) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x00034a0d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x00034a0d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe54a,	// (0x00033233) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe54a,	// (0x00033233) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe564,	// (0x0003324d) list_medium_line_t2_right_icon_g1

0x9ac2,	// (0x0002e7ab) list_medium_line_t2_right_icon_t1

0x9ad2,	// (0x0002e7bb) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x00034a12) list_medium_line_t2_right_icon_t

0xbeea,	// (0x00030bd3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbeea,	// (0x00030bd3) bg_sp_fs_ctrlbar_pane

0x9b28,	// (0x0002e811) main_sp_fs_ctrlbar_button_pane_cp01

0x9b30,	// (0x0002e819) main_sp_fs_ctrlbar_ddmenu_pane

0xe5a6,	// (0x0003328f) main_sp_fs_ctrlbar_pane_g1

0xe5b2,	// (0x0003329b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x00034a17) main_sp_fs_ctrlbar_pane_g

0xe5be,	// (0x000332a7) main_sp_fs_ctrlbar_pane_t1

0x9b3a,	// (0x0002e823) main_sp_fs_ctrlbar_pane

0x9b5e,	// (0x0002e847) main_sp_fs_listscroll_pane_te_cp01

0x9b7e,	// (0x0002e867) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9b7e,	// (0x0002e867) popup_sp_fs_action_menu_pane_cp01

0x253e,	// (0x00027227) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x253e,	// (0x00027227) bg_sp_fs_highlight_list_pane_cp01

0xe5d3,	// (0x000332bc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe5d3,	// (0x000332bc) sp_fs_action_menu_list_gene_pane_g1

0xe5e2,	// (0x000332cb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe5e2,	// (0x000332cb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x00034a1c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x00034a1c) sp_fs_action_menu_list_gene_pane_g

0xe5ef,	// (0x000332d8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe5ef,	// (0x000332d8) sp_fs_action_menu_list_gene_pane_t1

0xe607,	// (0x000332f0) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe607,	// (0x000332f0) sp_fs_action_menu_list_gene_pane

0xe62a,	// (0x00033313) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe62a,	// (0x00033313) popup_sp_fs_action_menu_bg_pane

0xe638,	// (0x00033321) sp_fs_action_menu_list_pane_ParamLimits

0xe638,	// (0x00033321) sp_fs_action_menu_list_pane

0xe65c,	// (0x00033345) sp_fs_scroll_pane_cp01_ParamLimits

0xe65c,	// (0x00033345) sp_fs_scroll_pane_cp01

0x9b9a,	// (0x0002e883) list_medium_line_plain_t2_t1

0x9baa,	// (0x0002e893) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x00034a21) list_medium_line_plain_t2_t

0x9bb8,	// (0x0002e8a1) list_medium_line_plain_t3_t1

0x9bc8,	// (0x0002e8b1) list_medium_line_plain_t3_t2

0x9bd6,	// (0x0002e8bf) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x00034a26) list_medium_line_plain_t3_t

0x388a,	// (0x00028573) list_medium_line_x2_t2_g2_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x2_t2_g2_g1

0x38a2,	// (0x0002858b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x38a2,	// (0x0002858b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00033f96) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00033f96) list_medium_line_x2_t2_g2_g

0x4c5b,	// (0x00029944) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4c5b,	// (0x00029944) list_medium_line_x2_t2_g2_t1

0x38d7,	// (0x000285c0) list_medium_line_x2_t2_g2_t2_ParamLimits

0x38d7,	// (0x000285c0) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x00034a2d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x00034a2d) list_medium_line_x2_t2_g2_t

0x388a,	// (0x00028573) list_medium_line_x2_t4_g2_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x2_t4_g2_g1

0x38a2,	// (0x0002858b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x38a2,	// (0x0002858b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf2ad,	// (0x00033f96) list_medium_line_x2_t4_g2_g_ParamLimits

0xf2ad,	// (0x00033f96) list_medium_line_x2_t4_g2_g

0x9be4,	// (0x0002e8cd) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9be4,	// (0x0002e8cd) list_medium_line_x2_t4_g2_t1

0x9bfe,	// (0x0002e8e7) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9bfe,	// (0x0002e8e7) list_medium_line_x2_t4_g2_t2

0x9c14,	// (0x0002e8fd) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9c14,	// (0x0002e8fd) list_medium_line_x2_t4_g2_t3

0x38d7,	// (0x000285c0) list_medium_line_x2_t4_g2_t4_ParamLimits

0x38d7,	// (0x000285c0) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd49,	// (0x00034a32) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd49,	// (0x00034a32) list_medium_line_x2_t4_g2_t

0xe682,	// (0x0003336b) list_medium_line_t3_right_iconx2_g1

0xe564,	// (0x0003324d) list_medium_line_t3_right_iconx2_g2

0x9c29,	// (0x0002e912) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd52,	// (0x00034a3b) list_medium_line_t3_right_iconx2_g

0x9c33,	// (0x0002e91c) list_medium_line_t3_right_iconx2_t1

0x9c43,	// (0x0002e92c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd59,	// (0x00034a42) list_medium_line_t3_right_iconx2_t

0x388a,	// (0x00028573) list_medium_line_x3_t4_g4_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x3_t4_g4_g1

0x3896,	// (0x0002857f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3896,	// (0x0002857f) list_medium_line_x3_t4_g4_g2

0x393e,	// (0x00028627) list_medium_line_x3_t4_g4_g3_ParamLimits

0x393e,	// (0x00028627) list_medium_line_x3_t4_g4_g3

0xe68a,	// (0x00033373) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe68a,	// (0x00033373) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5e,	// (0x00034a47) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5e,	// (0x00034a47) list_medium_line_x3_t4_g4_g

0x9c51,	// (0x0002e93a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9c51,	// (0x0002e93a) list_medium_line_x3_t4_g4_t1

0x9c68,	// (0x0002e951) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9c68,	// (0x0002e951) list_medium_line_x3_t4_g4_t2

0xe696,	// (0x0003337f) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe696,	// (0x0003337f) list_medium_line_x3_t4_g4_t3

0xe6ab,	// (0x00033394) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe6ab,	// (0x00033394) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd67,	// (0x00034a50) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd67,	// (0x00034a50) list_medium_line_x3_t4_g4_t

0x9c7d,	// (0x0002e966) list_single_dyc_row_text_pane_t1_ParamLimits

0x9c7d,	// (0x0002e966) list_single_dyc_row_text_pane_t1

0x9cc2,	// (0x0002e9ab) list_single_dyc_row_text_pane_t2_ParamLimits

0x9cc2,	// (0x0002e9ab) list_single_dyc_row_text_pane_t2

0xe6c8,	// (0x000333b1) list_single_dyc_row_text_pane_t3_ParamLimits

0xe6c8,	// (0x000333b1) list_single_dyc_row_text_pane_t3

0x0002,

0xfd70,	// (0x00034a59) list_single_dyc_row_text_pane_t_ParamLimits

0xfd70,	// (0x00034a59) list_single_dyc_row_text_pane_t

0xe6da,	// (0x000333c3) list_single_dyc_row_pane_g1_ParamLimits

0xe6da,	// (0x000333c3) list_single_dyc_row_pane_g1

0xe6e6,	// (0x000333cf) list_single_dyc_row_pane_g2_ParamLimits

0xe6e6,	// (0x000333cf) list_single_dyc_row_pane_g2

0xe6f2,	// (0x000333db) list_single_dyc_row_pane_g3_ParamLimits

0xe6f2,	// (0x000333db) list_single_dyc_row_pane_g3

0xe6fe,	// (0x000333e7) list_single_dyc_row_pane_g4_ParamLimits

0xe6fe,	// (0x000333e7) list_single_dyc_row_pane_g4

0x0003,

0xfd77,	// (0x00034a60) list_single_dyc_row_pane_g_ParamLimits

0xfd77,	// (0x00034a60) list_single_dyc_row_pane_g

0xe70a,	// (0x000333f3) list_single_dyc_row_text_pane_ParamLimits

0xe70a,	// (0x000333f3) list_single_dyc_row_text_pane

0x22be,	// (0x00026fa7) bg_sp_fs_scroll_pane

0xe729,	// (0x00033412) thumb_sp_fs_scroll_pane

0xd434,	// (0x0003211d) list_medium_line_g1_ParamLimits

0xd434,	// (0x0003211d) list_medium_line_g1

0xe732,	// (0x0003341b) list_medium_line_t1_ParamLimits

0xe732,	// (0x0003341b) list_medium_line_t1

0x388a,	// (0x00028573) list_medium_line_x2_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x2_g1

0x3896,	// (0x0002857f) list_medium_line_x2_g2_ParamLimits

0x3896,	// (0x0002857f) list_medium_line_x2_g2

0x0001,

0xfd80,	// (0x00034a69) list_medium_line_x2_g_ParamLimits

0xfd80,	// (0x00034a69) list_medium_line_x2_g

0xe747,	// (0x00033430) list_medium_line_x2_t1_ParamLimits

0xe747,	// (0x00033430) list_medium_line_x2_t1

0x388a,	// (0x00028573) list_medium_line_x3_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x3_g1

0x3896,	// (0x0002857f) list_medium_line_x3_g2_ParamLimits

0x3896,	// (0x0002857f) list_medium_line_x3_g2

0x0001,

0xfd80,	// (0x00034a69) list_medium_line_x3_g_ParamLimits

0xfd80,	// (0x00034a69) list_medium_line_x3_g

0xe747,	// (0x00033430) list_medium_line_x3_t1_ParamLimits

0xe747,	// (0x00033430) list_medium_line_x3_t1

0xe75d,	// (0x00033446) thumb_sp_fs_scroll_pane_g1

0xe766,	// (0x0003344f) thumb_sp_fs_scroll_pane_g2

0xe76f,	// (0x00033458) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x00034a6e) thumb_sp_fs_scroll_pane_g

0xe75d,	// (0x00033446) bg_sp_fs_scroll_pane_g1

0xe766,	// (0x0003344f) bg_sp_fs_scroll_pane_g2

0xe76f,	// (0x00033458) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x00034a6e) bg_sp_fs_scroll_pane_g

0x388a,	// (0x00028573) list_medium_line_x2_t3_g4_g1_ParamLimits

0x388a,	// (0x00028573) list_medium_line_x2_t3_g4_g1

0x3932,	// (0x0002861b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3932,	// (0x0002861b) list_medium_line_x2_t3_g4_g2

0x3896,	// (0x0002857f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3896,	// (0x0002857f) list_medium_line_x2_t3_g4_g3

0x38a2,	// (0x0002858b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x38a2,	// (0x0002858b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00034012) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00034012) list_medium_line_x2_t3_g4_g

0x9d1c,	// (0x0002ea05) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9d1c,	// (0x0002ea05) list_medium_line_x2_t3_g4_t1

0x9d32,	// (0x0002ea1b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9d32,	// (0x0002ea1b) list_medium_line_x2_t3_g4_t2

0x38d7,	// (0x000285c0) list_medium_line_x2_t3_g4_t3_ParamLimits

0x38d7,	// (0x000285c0) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8c,	// (0x00034a75) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8c,	// (0x00034a75) list_medium_line_x2_t3_g4_t

0xd434,	// (0x0003211d) list_medium_line_g2_g1_ParamLimits

0xd434,	// (0x0003211d) list_medium_line_g2_g1

0xd440,	// (0x00032129) list_medium_line_g2_g2_ParamLimits

0xd440,	// (0x00032129) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00034742) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00034742) list_medium_line_g2_g

0xe778,	// (0x00033461) list_medium_line_g2_t1_ParamLimits

0xe778,	// (0x00033461) list_medium_line_g2_t1

0xd434,	// (0x0003211d) list_medium_line_t3_g2_g1_ParamLimits

0xd434,	// (0x0003211d) list_medium_line_t3_g2_g1

0xd440,	// (0x00032129) list_medium_line_t3_g2_g2_ParamLimits

0xd440,	// (0x00032129) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00034742) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00034742) list_medium_line_t3_g2_g

0x9d4b,	// (0x0002ea34) list_medium_line_t3_g2_t1_ParamLimits

0x9d4b,	// (0x0002ea34) list_medium_line_t3_g2_t1

0x9d65,	// (0x0002ea4e) list_medium_line_t3_g2_t2_ParamLimits

0x9d65,	// (0x0002ea4e) list_medium_line_t3_g2_t2

0x9d7b,	// (0x0002ea64) list_medium_line_t3_g2_t3_ParamLimits

0x9d7b,	// (0x0002ea64) list_medium_line_t3_g2_t3

0x0002,

0xfd93,	// (0x00034a7c) list_medium_line_t3_g2_t_ParamLimits

0xfd93,	// (0x00034a7c) list_medium_line_t3_g2_t

0xe564,	// (0x0003324d) list_medium_line_right_icon_g1

0xe78d,	// (0x00033476) list_medium_line_right_icon_t1

0xd434,	// (0x0003211d) list_medium_line_t2_g1_ParamLimits

0xd434,	// (0x0003211d) list_medium_line_t2_g1

0x9d92,	// (0x0002ea7b) list_medium_line_t2_t1_ParamLimits

0x9d92,	// (0x0002ea7b) list_medium_line_t2_t1

0x9dac,	// (0x0002ea95) list_medium_line_t2_t2_ParamLimits

0x9dac,	// (0x0002ea95) list_medium_line_t2_t2

0x0001,

0xfd9a,	// (0x00034a83) list_medium_line_t2_t_ParamLimits

0xfd9a,	// (0x00034a83) list_medium_line_t2_t

0xd434,	// (0x0003211d) list_medium_line_t3_g1_ParamLimits

0xd434,	// (0x0003211d) list_medium_line_t3_g1

0x9dc1,	// (0x0002eaaa) list_medium_line_t3_t1_ParamLimits

0x9dc1,	// (0x0002eaaa) list_medium_line_t3_t1

0x9ddb,	// (0x0002eac4) list_medium_line_t3_t2_ParamLimits

0x9ddb,	// (0x0002eac4) list_medium_line_t3_t2

0x9df1,	// (0x0002eada) list_medium_line_t3_t3_ParamLimits

0x9df1,	// (0x0002eada) list_medium_line_t3_t3

0x0002,

0xfd9f,	// (0x00034a88) list_medium_line_t3_t_ParamLimits

0xfd9f,	// (0x00034a88) list_medium_line_t3_t

0xd434,	// (0x0003211d) list_medium_line_g3_g1_ParamLimits

0xd434,	// (0x0003211d) list_medium_line_g3_g1

0xe79b,	// (0x00033484) list_medium_line_g3_g2_ParamLimits

0xe79b,	// (0x00033484) list_medium_line_g3_g2

0xd440,	// (0x00032129) list_medium_line_g3_g3_ParamLimits

0xd440,	// (0x00032129) list_medium_line_g3_g3

0x0002,

0xfda6,	// (0x00034a8f) list_medium_line_g3_g_ParamLimits

0xfda6,	// (0x00034a8f) list_medium_line_g3_g

0xe7a7,	// (0x00033490) list_medium_line_g3_t1_ParamLimits

0xe7a7,	// (0x00033490) list_medium_line_g3_t1

0xd434,	// (0x0003211d) list_medium_line_t2_g3_g1_ParamLimits

0xd434,	// (0x0003211d) list_medium_line_t2_g3_g1

0xe79b,	// (0x00033484) list_medium_line_t2_g3_g2_ParamLimits

0xe79b,	// (0x00033484) list_medium_line_t2_g3_g2

0xd440,	// (0x00032129) list_medium_line_t2_g3_g3_ParamLimits

0xd440,	// (0x00032129) list_medium_line_t2_g3_g3

0x0002,

0xfda6,	// (0x00034a8f) list_medium_line_t2_g3_g_ParamLimits

0xfda6,	// (0x00034a8f) list_medium_line_t2_g3_g

0x9e06,	// (0x0002eaef) list_medium_line_t2_g3_t1_ParamLimits

0x9e06,	// (0x0002eaef) list_medium_line_t2_g3_t1

0x9e1d,	// (0x0002eb06) list_medium_line_t2_g3_t2_ParamLimits

0x9e1d,	// (0x0002eb06) list_medium_line_t2_g3_t2

0x0001,

0xfdad,	// (0x00034a96) list_medium_line_t2_g3_t_ParamLimits

0xfdad,	// (0x00034a96) list_medium_line_t2_g3_t

0xd434,	// (0x0003211d) list_medium_line_t3_g3_g1_ParamLimits

0xd434,	// (0x0003211d) list_medium_line_t3_g3_g1

0xe79b,	// (0x00033484) list_medium_line_t3_g3_g2_ParamLimits

0xe79b,	// (0x00033484) list_medium_line_t3_g3_g2

0xd440,	// (0x00032129) list_medium_line_t3_g3_g3_ParamLimits

0xd440,	// (0x00032129) list_medium_line_t3_g3_g3

0x0002,

0xfda6,	// (0x00034a8f) list_medium_line_t3_g3_g_ParamLimits

0xfda6,	// (0x00034a8f) list_medium_line_t3_g3_g

0x9e32,	// (0x0002eb1b) list_medium_line_t3_g3_t1_ParamLimits

0x9e32,	// (0x0002eb1b) list_medium_line_t3_g3_t1

0x9e4b,	// (0x0002eb34) list_medium_line_t3_g3_t2_ParamLimits

0x9e4b,	// (0x0002eb34) list_medium_line_t3_g3_t2

0x9e61,	// (0x0002eb4a) list_medium_line_t3_g3_t3_ParamLimits

0x9e61,	// (0x0002eb4a) list_medium_line_t3_g3_t3

0x0002,

0xfdb2,	// (0x00034a9b) list_medium_line_t3_g3_t_ParamLimits

0xfdb2,	// (0x00034a9b) list_medium_line_t3_g3_t

0xe682,	// (0x0003336b) list_medium_line_right_iconx2_g1

0xe564,	// (0x0003324d) list_medium_line_right_iconx2_g2

0x0001,

0xfdb9,	// (0x00034aa2) list_medium_line_right_iconx2_g

0xe7bc,	// (0x000334a5) list_medium_line_right_iconx2_t1

0xe682,	// (0x0003336b) list_medium_line_t2_right_iconx2_g1

0xe564,	// (0x0003324d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb9,	// (0x00034aa2) list_medium_line_t2_right_iconx2_g

0x9e7b,	// (0x0002eb64) list_medium_line_t2_right_iconx2_t1

0x9e8b,	// (0x0002eb74) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbe,	// (0x00034aa7) list_medium_line_t2_right_iconx2_t

0xe7ca,	// (0x000334b3) list_medium_line_x4_t4_t1

0x9e99,	// (0x0002eb82) list_medium_line_x4_t4_t2

0x9ea9,	// (0x0002eb92) list_medium_line_x4_t4_t3

0x9eb9,	// (0x0002eba2) list_medium_line_x4_t4_t4

0x0003,

0xfdc3,	// (0x00034aac) list_medium_line_x4_t4_t

0x9f03,	// (0x0002ebec) tport_appsw_pane_ParamLimits

0x9f03,	// (0x0002ebec) tport_appsw_pane

0x9f16,	// (0x0002ebff) tport_contact_pane_ParamLimits

0x9f16,	// (0x0002ebff) tport_contact_pane

0x9f29,	// (0x0002ec12) tport_listscroll_pane_ParamLimits

0x9f29,	// (0x0002ec12) tport_listscroll_pane

0x9f3f,	// (0x0002ec28) cell_tport_appsw_pane_ParamLimits

0x9f3f,	// (0x0002ec28) cell_tport_appsw_pane

0xd12e,	// (0x00031e17) tport_appsw_pane_g1_ParamLimits

0xd12e,	// (0x00031e17) tport_appsw_pane_g1

0xe7d8,	// (0x000334c1) tport_contact_pane_g1

0xe7e1,	// (0x000334ca) tport_contact_pane_t1

0xe7ef,	// (0x000334d8) tport_contact_pane_t2

0x0001,

0xfdcc,	// (0x00034ab5) tport_contact_pane_t

0xe7fd,	// (0x000334e6) list_tport_pane

0xe806,	// (0x000334ef) scroll_pane_cp_030

0x9f5c,	// (0x0002ec45) cell_tport_appsw_pane_g1

0xe80f,	// (0x000334f8) cell_tport_appsw_pane_t1

0x22be,	// (0x00026fa7) grid_highlight_pane_cp019

0x9f74,	// (0x0002ec5d) list_tport_double_graphic_pane_ParamLimits

0x9f74,	// (0x0002ec5d) list_tport_double_graphic_pane

0x253e,	// (0x00027227) list_highlight_pane_cp023_ParamLimits

0x253e,	// (0x00027227) list_highlight_pane_cp023

0x9f84,	// (0x0002ec6d) list_tport_double_graphic_pane_g1_ParamLimits

0x9f84,	// (0x0002ec6d) list_tport_double_graphic_pane_g1

0x9f91,	// (0x0002ec7a) list_tport_double_graphic_pane_t1_ParamLimits

0x9f91,	// (0x0002ec7a) list_tport_double_graphic_pane_t1

0x9fa6,	// (0x0002ec8f) list_tport_double_graphic_pane_t2_ParamLimits

0x9fa6,	// (0x0002ec8f) list_tport_double_graphic_pane_t2

0x0001,

0xfdd8,	// (0x00034ac1) list_tport_double_graphic_pane_t_ParamLimits

0xfdd8,	// (0x00034ac1) list_tport_double_graphic_pane_t

0x22be,	// (0x00026fa7) main_cale_note_pane

0x1f9d,	// (0x00026c86) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1f9d,	// (0x00026c86) cell_vitu2_function_top_wide_pane_cp01

0x968b,	// (0x0002e374) wait_bar_pane_cp05_ParamLimits

0x22be,	// (0x00026fa7) listscroll_cmail_pane

0xe825,	// (0x0003350e) list_cmail_pane

0x9fc2,	// (0x0002ecab) list_cmail_body_pane

0x9fda,	// (0x0002ecc3) list_single_cmail_header_caption_pane

0x9ffa,	// (0x0002ece3) list_single_cmail_header_detail_pane_ParamLimits

0x9ffa,	// (0x0002ece3) list_single_cmail_header_detail_pane

0xa02c,	// (0x0002ed15) list_single_cmail_header_caption_pane_t1

0xa03c,	// (0x0002ed25) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa03c,	// (0x0002ed25) list_single_cmail_header_detail_pane_g1

0xe845,	// (0x0003352e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe845,	// (0x0003352e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddd,	// (0x00034ac6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddd,	// (0x00034ac6) list_single_cmail_header_detail_pane_g

0xe85e,	// (0x00033547) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe85e,	// (0x00033547) list_single_cmail_header_detail_pane_t1

0xe89c,	// (0x00033585) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe89c,	// (0x00033585) list_single_cmail_header_editor_pane_bg

0xe0e2,	// (0x00032dcb) list_cmail_body_pane_g1

0xe8ae,	// (0x00033597) list_cmail_body_pane_t1

0xd179,	// (0x00031e62) list_single_cmail_header_editor_pane_bg_g1

0x3f51,	// (0x00028c3a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd189,	// (0x00031e72) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd181,	// (0x00031e6a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd40c,	// (0x000320f5) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1a9,	// (0x00031e92) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd199,	// (0x00031e82) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1a1,	// (0x00031e8a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3f31,	// (0x00028c1a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa07a,	// (0x0002ed63) calenote_gesture_pane_ParamLimits

0xa07a,	// (0x0002ed63) calenote_gesture_pane

0xa09a,	// (0x0002ed83) calenote_window_pane_ParamLimits

0xa09a,	// (0x0002ed83) calenote_window_pane

0xe8bc,	// (0x000335a5) popup_note_window_cp01

0xa0b6,	// (0x0002ed9f) calenote_swipe_1_pane_ParamLimits

0xa0b6,	// (0x0002ed9f) calenote_swipe_1_pane

0x9aa8,	// (0x0002e791) calenote_swipe_2_pane_ParamLimits

0x9aa8,	// (0x0002e791) calenote_swipe_2_pane

0xe463,	// (0x0003314c) calenote_swipe_1_pane_g1_ParamLimits

0xe463,	// (0x0003314c) calenote_swipe_1_pane_g1

0xe470,	// (0x00033159) calenote_swipe_1_pane_g2_ParamLimits

0xe470,	// (0x00033159) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x000349fa) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x000349fa) calenote_swipe_1_pane_g

0xe8ce,	// (0x000335b7) calenote_swipe_1_pane_t1_ParamLimits

0xe8ce,	// (0x000335b7) calenote_swipe_1_pane_t1

0xe463,	// (0x0003314c) calenote_swipe_2_pane_g1_ParamLimits

0xe463,	// (0x0003314c) calenote_swipe_2_pane_g1

0xe8ed,	// (0x000335d6) calenote_swipe_2_pane_g2_ParamLimits

0xe8ed,	// (0x000335d6) calenote_swipe_2_pane_g2

0x0001,

0xfde9,	// (0x00034ad2) calenote_swipe_2_pane_g_ParamLimits

0xfde9,	// (0x00034ad2) calenote_swipe_2_pane_g

0xe8f9,	// (0x000335e2) calenote_swipe_2_pane_t1_ParamLimits

0xe8f9,	// (0x000335e2) calenote_swipe_2_pane_t1

0x22be,	// (0x00026fa7) main_mup_navstr_pane

0x7546,	// (0x0002c22f) main_mup3_pane_t7_ParamLimits

0x7546,	// (0x0002c22f) main_mup3_pane_t7

0xcd82,	// (0x00031a6b) main_mp4_pane_g6_ParamLimits

0xcd82,	// (0x00031a6b) main_mp4_pane_g6

0xcfa6,	// (0x00031c8f) main_image3_pane_t4_ParamLimits

0xcfa6,	// (0x00031c8f) main_image3_pane_t4

0xa0cb,	// (0x0002edb4) popup_navstr_preview_pane_ParamLimits

0xa0cb,	// (0x0002edb4) popup_navstr_preview_pane

0xa0db,	// (0x0002edc4) scroll_navstr_pane_ParamLimits

0xa0db,	// (0x0002edc4) scroll_navstr_pane

0x22be,	// (0x00026fa7) bg_popup_preview_window_pane_cp04

0xe920,	// (0x00033609) popup_navstr_preview_pane_t1

0xa0ef,	// (0x0002edd8) scroll_navstr_pane_g1_ParamLimits

0xa0ef,	// (0x0002edd8) scroll_navstr_pane_g1

0xa103,	// (0x0002edec) scroll_navstr_pane_t1_ParamLimits

0xa103,	// (0x0002edec) scroll_navstr_pane_t1

0xe8c5,	// (0x000335ae) bg_button_pane_cp014

0xe8c5,	// (0x000335ae) bg_button_pane_cp030

0xe404,	// (0x000330ed) list_double_fisheye_pane_g4_ParamLimits

0xe404,	// (0x000330ed) list_double_fisheye_pane_g4

0xe410,	// (0x000330f9) list_double_fisheye_pane_g5_ParamLimits

0xe410,	// (0x000330f9) list_double_fisheye_pane_g5

0xe82d,	// (0x00033516) sp_fs_scroll_pane_cp03

0xe5a6,	// (0x0003328f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe5b2,	// (0x0003329b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x00034a17) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe5be,	// (0x000332a7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9fb8,	// (0x0002eca1) sp_fs_scroll_pane_cp02

0x3170,	// (0x00027e59) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3170,	// (0x00027e59) popup_sp_fs_calendar_preview_list_single_pane

0x22be,	// (0x00026fa7) main_cam6_pano_pane

0x253e,	// (0x00027227) main_mup3_pane_ParamLimits

0x22be,	// (0x00026fa7) main_phacti_pane

0x955c,	// (0x0002e245) bg_button_pane_cp11

0x9576,	// (0x0002e25f) main_mobtv_info_pane_g2_ParamLimits

0x9576,	// (0x0002e25f) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x00034977) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x00034977) main_mobtv_info_pane_g

0x9751,	// (0x0002e43a) sc_clock_pane_t5_ParamLimits

0x9751,	// (0x0002e43a) sc_clock_pane_t5

0x97db,	// (0x0002e4c4) main_radioblah_pane_g1_ParamLimits

0xe372,	// (0x0003305b) main_radioblah_pane_t3_ParamLimits

0xe372,	// (0x0003305b) main_radioblah_pane_t3

0xe38a,	// (0x00033073) main_radioblah_pane_t4_ParamLimits

0xe38a,	// (0x00033073) main_radioblah_pane_t4

0x9803,	// (0x0002e4ec) main_radioblah_text_pane_ParamLimits

0x9803,	// (0x0002e4ec) main_radioblah_text_pane

0x9815,	// (0x0002e4fe) main_radioblah_info_pane_g1_ParamLimits

0x98ae,	// (0x0002e597) main_radioblah_info_pane_t4_ParamLimits

0x98ae,	// (0x0002e597) main_radioblah_info_pane_t4

0x253e,	// (0x00027227) main_sp_fs_calendar_pane

0xa11a,	// (0x0002ee03) main_phacti_pane_g1

0xa122,	// (0x0002ee0b) phacti_note_pane_ParamLimits

0xa122,	// (0x0002ee0b) phacti_note_pane

0xe937,	// (0x00033620) phacti_term_pane_ParamLimits

0xe937,	// (0x00033620) phacti_term_pane

0xe94c,	// (0x00033635) phacti_note_pane_t1_ParamLimits

0xe94c,	// (0x00033635) phacti_note_pane_t1

0xe963,	// (0x0003364c) phacti_term_pane_g1

0xe96b,	// (0x00033654) phacti_term_pane_t1_ParamLimits

0xe96b,	// (0x00033654) phacti_term_pane_t1

0xe995,	// (0x0003367e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe99d,	// (0x00033686) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf3,	// (0x00034adc) popup_sp_fs_calendar_preview_list_single_pane_g

0xe9a5,	// (0x0003368e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe9a5,	// (0x0003368e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9bb,	// (0x000336a4) aid_popup_sp_fs_bg_corner_pane

0xc41f,	// (0x00031108) popup_sp_fs_calendar_preview_bg_pane_g1

0x22be,	// (0x00026fa7) popup_sp_fs_calendar_preview_bg_pane

0xe9c3,	// (0x000336ac) popup_sp_fs_calendar_preview_list_pane

0x253e,	// (0x00027227) bg_main_sp_fs_cale_pane_ParamLimits

0x253e,	// (0x00027227) bg_main_sp_fs_cale_pane

0xe9d4,	// (0x000336bd) listscroll_cale_mrui_pane_ParamLimits

0xe9d4,	// (0x000336bd) listscroll_cale_mrui_pane

0xe9e8,	// (0x000336d1) listscroll_sp_fs_schedule_track_pane

0xe9f1,	// (0x000336da) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe9f1,	// (0x000336da) main_sp_fs_ctrlbar_pane_cp01

0xea02,	// (0x000336eb) main_sp_fs_ribbon_pane

0xea0a,	// (0x000336f3) popup_sp_fs_cale_preview_window

0xa179,	// (0x0002ee62) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa179,	// (0x0002ee62) list_single_sp_fs_schedule_track_pane

0x253e,	// (0x00027227) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x253e,	// (0x00027227) bg_sp_fs_highlight_list_pane_cp03

0xa18d,	// (0x0002ee76) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa18d,	// (0x0002ee76) list_single_sp_fs_schedule_track_pane_g1

0xa199,	// (0x0002ee82) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa199,	// (0x0002ee82) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf8,	// (0x00034ae1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf8,	// (0x00034ae1) list_single_sp_fs_schedule_track_pane_g

0xa1a5,	// (0x0002ee8e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa1a5,	// (0x0002ee8e) list_single_sp_fs_schedule_track_pane_t1

0xa1c7,	// (0x0002eeb0) sp_fs_schedule_track_pane_ParamLimits

0xa1c7,	// (0x0002eeb0) sp_fs_schedule_track_pane

0xea1c,	// (0x00033705) sp_fs_schedule_track_pane_g1

0xea24,	// (0x0003370d) sp_fs_schedule_track_pane_g2

0xea2c,	// (0x00033715) sp_fs_schedule_track_pane_g3

0xea34,	// (0x0003371d) sp_fs_schedule_track_pane_g4

0xea3c,	// (0x00033725) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfd,	// (0x00034ae6) sp_fs_schedule_track_pane_g

0xd179,	// (0x00031e62) bg_sp_fs_schedule_viewer_highlight_g1

0x3f51,	// (0x00028c3a) bg_sp_fs_schedule_viewer_highlight_g2

0xd181,	// (0x00031e6a) bg_sp_fs_schedule_viewer_highlight_g3

0xd189,	// (0x00031e72) bg_sp_fs_schedule_viewer_highlight_g4

0xd40c,	// (0x000320f5) bg_sp_fs_schedule_viewer_highlight_g5

0xd199,	// (0x00031e82) bg_sp_fs_schedule_viewer_highlight_g6

0xd1a1,	// (0x00031e8a) bg_sp_fs_schedule_viewer_highlight_g7

0xd1a9,	// (0x00031e92) bg_sp_fs_schedule_viewer_highlight_g8

0x3f31,	// (0x00028c1a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe08,	// (0x00034af1) bg_sp_fs_schedule_viewer_highlight_g

0x22be,	// (0x00026fa7) bg_main_sp_fs_ribbon_pane

0xa1dc,	// (0x0002eec5) main_sp_fs_ribbon_pane_g1

0xea44,	// (0x0003372d) main_sp_fs_ribbon_pane_t1

0xa1e5,	// (0x0002eece) main_sp_fs_ribbon_pane_t2

0xea53,	// (0x0003373c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe1b,	// (0x00034b04) main_sp_fs_ribbon_pane_t

0xea62,	// (0x0003374b) main_sp_fs_ribbon_scheduler_pane

0xea6a,	// (0x00033753) bg_main_sp_fs_ribbon_pane_g1

0xea73,	// (0x0003375c) bg_main_sp_fs_ribbon_pane_g2

0xea7c,	// (0x00033765) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe22,	// (0x00034b0b) bg_main_sp_fs_ribbon_pane_g

0xea84,	// (0x0003376d) main_sp_fs_ribbon_scheduler_pane_g1

0xea8d,	// (0x00033776) main_sp_fs_ribbon_scheduler_pane_g2

0xea96,	// (0x0003377f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe29,	// (0x00034b12) main_sp_fs_ribbon_scheduler_pane_g

0xea9f,	// (0x00033788) list_cale_mrui_pane

0xa1f4,	// (0x0002eedd) sp_fs_scroll_pane_cp07_ParamLimits

0xa1f4,	// (0x0002eedd) sp_fs_scroll_pane_cp07

0xa20a,	// (0x0002eef3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa20a,	// (0x0002eef3) bg_sp_fs_schedule_viewer_highlight

0xeaa8,	// (0x00033791) list_single_sp_fs_schedule_track_pane_cp01

0xeab0,	// (0x00033799) list_sp_fs_schedule_track_pane

0xeab8,	// (0x000337a1) sp_fs_scroll_pane_cp06_ParamLimits

0xeab8,	// (0x000337a1) sp_fs_scroll_pane_cp06

0xc41f,	// (0x00031108) bgmain_sp_fs_calendar_pane_g1

0xa21c,	// (0x0002ef05) list_single_cale_mrui_pane_ParamLimits

0xa21c,	// (0x0002ef05) list_single_cale_mrui_pane

0xeaca,	// (0x000337b3) list_single_cale_mrui_row_pane_ParamLimits

0xeaca,	// (0x000337b3) list_single_cale_mrui_row_pane

0xead7,	// (0x000337c0) list_single_cale_mrui_row_pane_g1_ParamLimits

0xead7,	// (0x000337c0) list_single_cale_mrui_row_pane_g1

0xeb0f,	// (0x000337f8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xeb0f,	// (0x000337f8) list_single_cale_mrui_row_pane_t1

0xa243,	// (0x0002ef2c) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa243,	// (0x0002ef2c) list_single_cale_mrui_row_pane_t2

0xeb21,	// (0x0003380a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xeb21,	// (0x0003380a) list_single_cale_mrui_row_pane_t3

0xeb50,	// (0x00033839) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeb50,	// (0x00033839) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe35,	// (0x00034b1e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe35,	// (0x00034b1e) list_single_cale_mrui_row_pane_t

0xa2a9,	// (0x0002ef92) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa2a9,	// (0x0002ef92) list_single_cmail_header_editor_pane_bg_cp01

0xa2cd,	// (0x0002efb6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa2cd,	// (0x0002efb6) list_single_cmail_header_editor_pane_bg_cp02

0xa2e9,	// (0x0002efd2) main_radioblah_text_pane_t1_ParamLimits

0xa2e9,	// (0x0002efd2) main_radioblah_text_pane_t1

0xeb7f,	// (0x00033868) cam6_indi_pane_cp01

0xeb87,	// (0x00033870) cam6_mode_pane_cp01

0xeb8f,	// (0x00033878) cam6_pano_pane

0xeb98,	// (0x00033881) cam6_zoom_pane_cp01

0xeba2,	// (0x0003388b) cam6_pano_image_pane

0xebab,	// (0x00033894) cam6_pano_pane_g1

0xe0e2,	// (0x00032dcb) cam6_pano_pane_g2

0xebb4,	// (0x0003389d) cam6_pano_pane_g3

0xebbd,	// (0x000338a6) cam6_pano_pane_g4

0xc9ff,	// (0x000316e8) cam6_pano_pane_g5

0xebc6,	// (0x000338af) cam6_pano_pane_g6

0xebce,	// (0x000338b7) cam6_pano_pane_g7

0xebd6,	// (0x000338bf) cam6_pano_pane_g8

0xebdf,	// (0x000338c8) cam6_pano_pane_g9

0x0008,

0xfe3e,	// (0x00034b27) cam6_pano_pane_g

0x22be,	// (0x00026fa7) main_browser_tag_pane

0xe918,	// (0x00033601) grid_navstr_albumart_pane

0xebea,	// (0x000338d3) cell_navstr_albumart_pane_ParamLimits

0xebea,	// (0x000338d3) cell_navstr_albumart_pane

0xec06,	// (0x000338ef) cell_navstr_albumart_pane_g1

0xbd03,	// (0x000309ec) cell_navstr_albumart_pane_g2

0xbd13,	// (0x000309fc) cell_navstr_albumart_pane_g3

0xbd0b,	// (0x000309f4) cell_navstr_albumart_pane_g4

0x0003,

0xfe51,	// (0x00034b3a) cell_navstr_albumart_pane_g

0xa304,	// (0x0002efed) bt_list_pane_ParamLimits

0xa304,	// (0x0002efed) bt_list_pane

0xa31a,	// (0x0002f003) bt_list_pane_t1

0xa329,	// (0x0002f012) bt_list_pane_t2

0x0001,

0xfe5a,	// (0x00034b43) bt_list_pane_t

0x22be,	// (0x00026fa7) main_cale_prevew_pane

0xa338,	// (0x0002f021) popup_cale_preview_window_ParamLimits

0xa338,	// (0x0002f021) popup_cale_preview_window

0x253e,	// (0x00027227) bg_popup_preview_window_pane_cp05_ParamLimits

0x253e,	// (0x00027227) bg_popup_preview_window_pane_cp05

0xec0e,	// (0x000338f7) list_cale_preview_pane_ParamLimits

0xec0e,	// (0x000338f7) list_cale_preview_pane

0xa353,	// (0x0002f03c) list_double_cale_preview_pane_ParamLimits

0xa353,	// (0x0002f03c) list_double_cale_preview_pane

0xa367,	// (0x0002f050) list_single_cale_preview_pane_ParamLimits

0xa367,	// (0x0002f050) list_single_cale_preview_pane

0xa37f,	// (0x0002f068) list_single_cale_preview_pane_g1

0xa387,	// (0x0002f070) list_single_cale_preview_pane_t1_ParamLimits

0xa387,	// (0x0002f070) list_single_cale_preview_pane_t1

0xa39c,	// (0x0002f085) list_double_cale_preview_pane_g1

0xa3a4,	// (0x0002f08d) list_double_cale_preview_pane_t1_ParamLimits

0xa3a4,	// (0x0002f08d) list_double_cale_preview_pane_t1

0xa3b9,	// (0x0002f0a2) list_double_cale_preview_pane_t2_ParamLimits

0xa3b9,	// (0x0002f0a2) list_double_cale_preview_pane_t2

0x0001,

0xfe5f,	// (0x00034b48) list_double_cale_preview_pane_t_ParamLimits

0xfe5f,	// (0x00034b48) list_double_cale_preview_pane_t

0x22be,	// (0x00026fa7) main_ezdial_pane

0x253e,	// (0x00027227) main_sp_fs_email_pane_ParamLimits

0x9ae0,	// (0x0002e7c9) cmail_ddmenu_btn01_pane_ParamLimits

0x9ae0,	// (0x0002e7c9) cmail_ddmenu_btn01_pane

0x9af3,	// (0x0002e7dc) cmail_ddmenu_btn02_pane_ParamLimits

0x9af3,	// (0x0002e7dc) cmail_ddmenu_btn02_pane

0x9b16,	// (0x0002e7ff) cmail_ddmenu_btn03_pane_ParamLimits

0x9b16,	// (0x0002e7ff) cmail_ddmenu_btn03_pane

0x9b3a,	// (0x0002e823) main_sp_fs_ctrlbar_pane_ParamLimits

0x9b5e,	// (0x0002e847) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9fc2,	// (0x0002ecab) list_cmail_body_pane_ParamLimits

0xe83c,	// (0x00033525) bg_button_pane_cp12

0xe851,	// (0x0003353a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe851,	// (0x0003353a) list_single_cmail_header_detail_pane_g3

0xa054,	// (0x0002ed3d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa054,	// (0x0002ed3d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde4,	// (0x00034acd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde4,	// (0x00034acd) list_single_cmail_header_detail_pane_t

0xe980,	// (0x00033669) phacti_term_pane_t2_ParamLimits

0xe980,	// (0x00033669) phacti_term_pane_t2

0x0001,

0xfdee,	// (0x00034ad7) phacti_term_pane_t_ParamLimits

0xfdee,	// (0x00034ad7) phacti_term_pane_t

0xec1a,	// (0x00033903) aid_size_list_single_double

0xa3d1,	// (0x0002f0ba) popup_ezdial_listscroll_window

0xa3ed,	// (0x0002f0d6) popup_number_entry_window_cp01

0x5457,	// (0x0002a140) bg_popup_call_pane_cp09

0xec26,	// (0x0003390f) ezdial_list_pane

0xec2e,	// (0x00033917) scroll_pane_cp23

0xbeea,	// (0x00030bd3) bg_button_pane_cp028_ParamLimits

0xbeea,	// (0x00030bd3) bg_button_pane_cp028

0xa3fb,	// (0x0002f0e4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa3fb,	// (0x0002f0e4) cmail_ddmenu_btn01_pane_g1

0xa407,	// (0x0002f0f0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa407,	// (0x0002f0f0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe64,	// (0x00034b4d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe64,	// (0x00034b4d) cmail_ddmenu_btn01_pane_g

0xec36,	// (0x0003391f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xec36,	// (0x0003391f) cmail_ddmenu_btn01_pane_t1

0xbeea,	// (0x00030bd3) bg_button_pane_cp029_ParamLimits

0xbeea,	// (0x00030bd3) bg_button_pane_cp029

0xa413,	// (0x0002f0fc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa413,	// (0x0002f0fc) cmail_ddmenu_btn02_pane_g1

0xa42b,	// (0x0002f114) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa42b,	// (0x0002f114) cmail_ddmenu_btn02_pane_t1

0x253e,	// (0x00027227) bg_button_pane_cp031_ParamLimits

0x253e,	// (0x00027227) bg_button_pane_cp031

0xa413,	// (0x0002f0fc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa413,	// (0x0002f0fc) cmail_ddmenu_btn03_pane_g1

0xa42b,	// (0x0002f114) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa42b,	// (0x0002f114) cmail_ddmenu_btn03_pane_t1

0x7f0d,	// (0x0002cbf6) cell_dialer2_keypad_pane_t1_ParamLimits

0x7f27,	// (0x0002cc10) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7f27,	// (0x0002cc10) cell_dialer2_keypad_pane_t1_copy1

0x93ff,	// (0x0002e0e8) ncimui_group_button_pane

0x253e,	// (0x00027227) main_sp_fs_calendar_pane_ParamLimits

0x9fda,	// (0x0002ecc3) list_single_cmail_header_caption_pane_ParamLimits

0xe9cb,	// (0x000336b4) aid_recal_txt_sm_pane

0x22be,	// (0x00026fa7) mian_recal_day_pane

0xea0a,	// (0x000336f3) popup_sp_fs_cale_preview_window_ParamLimits

0x22be,	// (0x00026fa7) list_recal_day_pane

0xec6d,	// (0x00033956) list_single_recal_day_pane_ParamLimits

0xec6d,	// (0x00033956) list_single_recal_day_pane

0xec7f,	// (0x00033968) list_single_recal_day_pane_g1_ParamLimits

0xec7f,	// (0x00033968) list_single_recal_day_pane_g1

0xec8b,	// (0x00033974) list_single_recal_day_pane_g2_ParamLimits

0xec8b,	// (0x00033974) list_single_recal_day_pane_g2

0xec97,	// (0x00033980) list_single_recal_day_pane_g3_ParamLimits

0xec97,	// (0x00033980) list_single_recal_day_pane_g3

0xa44f,	// (0x0002f138) list_single_recal_day_pane_g4_ParamLimits

0xa44f,	// (0x0002f138) list_single_recal_day_pane_g4

0xeca3,	// (0x0003398c) list_single_recal_day_pane_g5_ParamLimits

0xeca3,	// (0x0003398c) list_single_recal_day_pane_g5

0xecaf,	// (0x00033998) list_single_recal_day_pane_g6_ParamLimits

0xecaf,	// (0x00033998) list_single_recal_day_pane_g6

0x0005,

0xfe73,	// (0x00034b5c) list_single_recal_day_pane_g_ParamLimits

0xfe73,	// (0x00034b5c) list_single_recal_day_pane_g

0xecbb,	// (0x000339a4) list_single_recal_day_pane_t1

0xecc9,	// (0x000339b2) list_single_recal_day_pane_t2

0x0001,

0xfe80,	// (0x00034b69) list_single_recal_day_pane_t

0xa45d,	// (0x0002f146) ncimui_query_button_pane_ParamLimits

0xa45d,	// (0x0002f146) ncimui_query_button_pane

0xa46d,	// (0x0002f156) ncimui_query_button_pane_t1_ParamLimits

0xa46d,	// (0x0002f156) ncimui_query_button_pane_t1

0xecd7,	// (0x000339c0) ncimui_query_button_pane_t2_ParamLimits

0xecd7,	// (0x000339c0) ncimui_query_button_pane_t2

0x0001,

0xfe85,	// (0x00034b6e) ncimui_query_button_pane_t_ParamLimits

0xfe85,	// (0x00034b6e) ncimui_query_button_pane_t

0xa480,	// (0x0002f169) query_button_pane_ParamLimits

0xa480,	// (0x0002f169) query_button_pane

0x22be,	// (0x00026fa7) bg_button_pane_cp0028

0xecea,	// (0x000339d3) query_button_pane_t1

0x6604,	// (0x0002b2ed) main_tport_pane_ParamLimits

0x9ec9,	// (0x0002ebb2) bg_popup_window_pane_cp01_ParamLimits

0x9ec9,	// (0x0002ebb2) bg_popup_window_pane_cp01

0x9edf,	// (0x0002ebc8) heading_pane_cp08_ParamLimits

0x9edf,	// (0x0002ebc8) heading_pane_cp08

0x9ef0,	// (0x0002ebd9) heading_pane_cp07_ParamLimits

0x9ef0,	// (0x0002ebd9) heading_pane_cp07

0x9f64,	// (0x0002ec4d) cell_tport_appsw_pane_g2

0x0002,

0xfdd1,	// (0x00034aba) cell_tport_appsw_pane_g

0x5a4e,	// (0x0002a737) input_candi_list_open_g1

0x49f8,	// (0x000296e1) list_cale_time_pane_g6_ParamLimits

0x49f8,	// (0x000296e1) list_cale_time_pane_g6

0x6f8a,	// (0x0002bc73) aid_size_touch_calib_1_ParamLimits

0x6f8a,	// (0x0002bc73) aid_size_touch_calib_1

0x6f96,	// (0x0002bc7f) aid_size_touch_calib_2_ParamLimits

0x6f96,	// (0x0002bc7f) aid_size_touch_calib_2

0x6fac,	// (0x0002bc95) aid_size_touch_calib_3_ParamLimits

0x6fac,	// (0x0002bc95) aid_size_touch_calib_3

0x6fca,	// (0x0002bcb3) aid_size_touch_calib_4_ParamLimits

0x6fca,	// (0x0002bcb3) aid_size_touch_calib_4

0x6fe0,	// (0x0002bcc9) main_touch_calib_button_group_pane_ParamLimits

0x6fe0,	// (0x0002bcc9) main_touch_calib_button_group_pane

0x6ff7,	// (0x0002bce0) main_touch_calib_pane_g1_ParamLimits

0x7003,	// (0x0002bcec) main_touch_calib_pane_g2_ParamLimits

0x700f,	// (0x0002bcf8) main_touch_calib_pane_g3_ParamLimits

0x701b,	// (0x0002bd04) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x000344a1) main_touch_calib_pane_g_ParamLimits

0x7027,	// (0x0002bd10) main_touch_calib_pane_t1_ParamLimits

0x7041,	// (0x0002bd2a) main_touch_calib_pane_t2_ParamLimits

0x705b,	// (0x0002bd44) main_touch_calib_pane_t3_ParamLimits

0x706f,	// (0x0002bd58) main_touch_calib_pane_t4_ParamLimits

0x7083,	// (0x0002bd6c) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x000344aa) main_touch_calib_pane_t_ParamLimits

0xc7c9,	// (0x000314b2) list_single_fp_cale_pane_g3_ParamLimits

0xc7c9,	// (0x000314b2) list_single_fp_cale_pane_g3

0xd161,	// (0x00031e4a) bg_button_pane_cp012_ParamLimits

0xd161,	// (0x00031e4a) bg_vkb2_func_pane_cp03_ParamLimits

0x219e,	// (0x00026e87) cell_vitu2_function_top_pane_g1_ParamLimits

0xd161,	// (0x00031e4a) bg_vkb2_func_pane_cp04_ParamLimits

0x93b3,	// (0x0002e09c) main_ncimui_button_group_pane_ParamLimits

0x93b3,	// (0x0002e09c) main_ncimui_button_group_pane

0x93ed,	// (0x0002e0d6) main_ncimui_pane_t3_ParamLimits

0x93ed,	// (0x0002e0d6) main_ncimui_pane_t3

0xe92e,	// (0x00033617) phacti_button_group_pane

0xec1a,	// (0x00033903) aid_size_list_single_double_ParamLimits

0xa3d1,	// (0x0002f0ba) popup_ezdial_listscroll_window_ParamLimits

0xa3ed,	// (0x0002f0d6) popup_number_entry_window_cp01_ParamLimits

0xa493,	// (0x0002f17c) phacti_button_pane_ParamLimits

0xa493,	// (0x0002f17c) phacti_button_pane

0x22be,	// (0x00026fa7) bg_button_pane_cp14

0xecf8,	// (0x000339e1) phacti_button_pane_t1

0xa4a4,	// (0x0002f18d) main_touch_calib_button_pane_ParamLimits

0xa4a4,	// (0x0002f18d) main_touch_calib_button_pane

0x2f3b,	// (0x00027c24) bg_button_pane_cp18_ParamLimits

0x2f3b,	// (0x00027c24) bg_button_pane_cp18

0xed06,	// (0x000339ef) main_touch_calib_button_pane_t1_ParamLimits

0xed06,	// (0x000339ef) main_touch_calib_button_pane_t1

0xed1c,	// (0x00033a05) main_touch_calib_button_pane_t2_ParamLimits

0xed1c,	// (0x00033a05) main_touch_calib_button_pane_t2

0x0001,

0xfe8a,	// (0x00034b73) main_touch_calib_button_pane_t_ParamLimits

0xfe8a,	// (0x00034b73) main_touch_calib_button_pane_t

0x22be,	// (0x00026fa7) cell_ncimui_button_pane

0x22be,	// (0x00026fa7) bg_button_pane_cp032

0xed3a,	// (0x00033a23) cell_ncimui_button_pane_t1

0xcf84,	// (0x00031c6d) image3_infobar_pane_ParamLimits

0xcf84,	// (0x00031c6d) image3_infobar_pane

0x977d,	// (0x0002e466) fs_bigclock_status_pane_ParamLimits

0x977d,	// (0x0002e466) fs_bigclock_status_pane

0x978a,	// (0x0002e473) main_fs_bigclock_clock_pane_ParamLimits

0x978a,	// (0x0002e473) main_fs_bigclock_clock_pane

0x979d,	// (0x0002e486) main_fs_bigclock_indi_pane_ParamLimits

0x979d,	// (0x0002e486) main_fs_bigclock_indi_pane

0x97b8,	// (0x0002e4a1) main_fs_bigclock_swipe_pane_ParamLimits

0x97b8,	// (0x0002e4a1) main_fs_bigclock_swipe_pane

0x22be,	// (0x00026fa7) main_fs_clock_dumped_data

0xe1ef,	// (0x00032ed8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1ef,	// (0x00032ed8) list_single_fs_bigclock_indicator_pane_g1

0xe20f,	// (0x00032ef8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe20f,	// (0x00032ef8) list_single_fs_bigclock_indicator_pane_g2

0xe229,	// (0x00032f12) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe229,	// (0x00032f12) list_single_fs_bigclock_indicator_pane_g3

0xe245,	// (0x00032f2e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe245,	// (0x00032f2e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x000349ab) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x000349ab) list_single_fs_bigclock_indicator_pane_g

0xe26b,	// (0x00032f54) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe26b,	// (0x00032f54) list_single_fs_bigclock_indicator_pane_t1

0xe293,	// (0x00032f7c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe293,	// (0x00032f7c) list_single_fs_bigclock_indicator_pane_t2

0xe2bb,	// (0x00032fa4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe2bb,	// (0x00032fa4) list_single_fs_bigclock_indicator_pane_t3

0xe2e5,	// (0x00032fce) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2e5,	// (0x00032fce) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x000349b6) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x000349b6) list_single_fs_bigclock_indicator_pane_t

0xed48,	// (0x00033a31) image3_infobar_fav_pane_ParamLimits

0xed48,	// (0x00033a31) image3_infobar_fav_pane

0xed58,	// (0x00033a41) image3_infobar_loc_pane_ParamLimits

0xed58,	// (0x00033a41) image3_infobar_loc_pane

0xed6e,	// (0x00033a57) image3_infobar_time_pane_ParamLimits

0xed6e,	// (0x00033a57) image3_infobar_time_pane

0xc41f,	// (0x00031108) image3_infobar_time_pane_g1

0xed7e,	// (0x00033a67) image3_infobar_time_pane_t1

0xc41f,	// (0x00031108) image3_infobar_loc_pane_g1

0xed8c,	// (0x00033a75) image3_infobar_loc_pane_g2

0x0001,

0xfe8f,	// (0x00034b78) image3_infobar_loc_pane_g

0xed94,	// (0x00033a7d) image3_infobar_loc_pane_t1

0xc41f,	// (0x00031108) image3_infobar_fav_pane_g1

0xeda2,	// (0x00033a8b) image3_infobar_fav_pane_g2

0x0001,

0xfe94,	// (0x00034b7d) image3_infobar_fav_pane_g

0xedaa,	// (0x00033a93) fs_bigclock_status_battery_pane

0xedb3,	// (0x00033a9c) fs_bigclock_status_signal_pane

0xedbc,	// (0x00033aa5) fs_bigclock_status_title_pane

0xedc5,	// (0x00033aae) fs_bigclock_status_signal_pane_g1

0xedce,	// (0x00033ab7) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe99,	// (0x00034b82) fs_bigclock_status_signal_pane_g

0xedd6,	// (0x00033abf) fs_bigclock_status_battery_pane_g1

0xeddf,	// (0x00033ac8) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9e,	// (0x00034b87) fs_bigclock_status_battery_pane_g

0xede7,	// (0x00033ad0) fs_bigclock_status_title_pane_t1

0xc41f,	// (0x00031108) main_fs_bigclock_clock_pane_g1

0xedf5,	// (0x00033ade) main_fs_bigclock_clock_pane_g2

0xedf5,	// (0x00033ade) main_fs_bigclock_clock_pane_g3

0xedf5,	// (0x00033ade) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea3,	// (0x00034b8c) main_fs_bigclock_clock_pane_g

0xee01,	// (0x00033aea) main_fs_bigclock_clock_pane_t1

0xee0f,	// (0x00033af8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeac,	// (0x00034b95) main_fs_bigclock_clock_pane_t

0xee1e,	// (0x00033b07) list_single_fs_bigclock_indicator_pane_ParamLimits

0xee1e,	// (0x00033b07) list_single_fs_bigclock_indicator_pane

0xa4b9,	// (0x0002f1a2) list_single_fs_bigclock_pane_ParamLimits

0xa4b9,	// (0x0002f1a2) list_single_fs_bigclock_pane

0xee38,	// (0x00033b21) main_fs_bigclock_indicator_pane_t1

0xee47,	// (0x00033b30) list_single_fs_bigclock_pane_g1

0xee4f,	// (0x00033b38) list_single_fs_bigclock_pane_t1

0xc41f,	// (0x00031108) main_fs_bigclock_swipe_pane_g1

0xee8d,	// (0x00033b76) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebd,	// (0x00034ba6) main_fs_bigclock_swipe_pane_g

0xee95,	// (0x00033b7e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xee95,	// (0x00033b7e) main_fs_bigclock_swipe_pane_t1

0x4daa,	// (0x00029a93) call_type_pane_ParamLimits

0x22be,	// (0x00026fa7) main_btmg_pane

0xeb03,	// (0x000337ec) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeb03,	// (0x000337ec) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe30,	// (0x00034b19) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe30,	// (0x00034b19) list_single_cale_mrui_row_pane_g

0xec54,	// (0x0003393d) list_recal_vselct_arw_lo_pane

0xec5c,	// (0x00033945) list_recal_vselct_arw_up_pane

0xec64,	// (0x0003394d) list_recal_vselct_pane

0xeeb2,	// (0x00033b9b) btmg_button_pane

0xa51f,	// (0x0002f208) main_btmg_pane_g1

0x22be,	// (0x00026fa7) bg_button_pane_cp044

0xeebc,	// (0x00033ba5) btmg_button_pane_t1

0xbee2,	// (0x00030bcb) aid_listscroll_gen

0x253e,	// (0x00027227) main_cntbar_detail_pane

0xe81d,	// (0x00033506) list_cmail_folder_pane

0xe82d,	// (0x00033516) sp_fs_scroll_pane_cp03_ParamLimits

0xa529,	// (0x0002f212) list_single_fs_dyc_pane_cp01_ParamLimits

0xa529,	// (0x0002f212) list_single_fs_dyc_pane_cp01

0xeeca,	// (0x00033bb3) aid_size_cmail_indent

0xeed3,	// (0x00033bbc) list_single_dyc_row_pane_cp01

0xa579,	// (0x0002f262) cntbar_detail_list_pane_ParamLimits

0xa579,	// (0x0002f262) cntbar_detail_list_pane

0xa5cb,	// (0x0002f2b4) main_cntbar_detail_cont_pane_ParamLimits

0xa5cb,	// (0x0002f2b4) main_cntbar_detail_cont_pane

0x4bbf,	// (0x000298a8) scroll_pane_cp032_ParamLimits

0x4bbf,	// (0x000298a8) scroll_pane_cp032

0xa5df,	// (0x0002f2c8) cntbar_detail_list_event_pane_ParamLimits

0xa5df,	// (0x0002f2c8) cntbar_detail_list_event_pane

0xa58b,	// (0x0002f274) cntbar_detail_list_shct_pane

0x3fa9,	// (0x00028c92) aid_list_gen

0xeedc,	// (0x00033bc5) aid_scroll

0xeee5,	// (0x00033bce) aid_size_touch_scroll_bar

0xeeee,	// (0x00033bd7) aid_list_double

0xeef7,	// (0x00033be0) aid_list_single

0x0091,	// (0x00024d7a) aid_list_single_lg

0xef00,	// (0x00033be9) aid_list_z_g_a_sm

0xef08,	// (0x00033bf1) aid_list_z_g_d

0xef10,	// (0x00033bf9) aid_txt_z_prm

0xef1e,	// (0x00033c07) aid_txt_z_prm_cp01

0xef2c,	// (0x00033c15) aid_txt_z_sec

0xa5ef,	// (0x0002f2d8) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa5ef,	// (0x0002f2d8) main_cntbar_detail_cont_pane_g1

0xa603,	// (0x0002f2ec) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa603,	// (0x0002f2ec) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec2,	// (0x00034bab) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec2,	// (0x00034bab) main_cntbar_detail_cont_pane_g

0xef3a,	// (0x00033c23) main_cntbar_detail_cont_pane_t1

0xef48,	// (0x00033c31) main_cntbar_detail_cont_pane_t2

0xef56,	// (0x00033c3f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec7,	// (0x00034bb0) main_cntbar_detail_cont_pane_t

0xa613,	// (0x0002f2fc) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa613,	// (0x0002f2fc) cell_cntbar_detail_list_shct_pane

0xef64,	// (0x00033c4d) cntbar_detail_list_shct_pane_g1

0xef6d,	// (0x00033c56) cntbar_detail_list_shct_pane_g2

0x0001,

0xfece,	// (0x00034bb7) cntbar_detail_list_shct_pane_g

0xa625,	// (0x0002f30e) cntbar_detail_list_event_pane_g1_ParamLimits

0xa625,	// (0x0002f30e) cntbar_detail_list_event_pane_g1

0xa631,	// (0x0002f31a) cntbar_detail_list_event_pane_g2_ParamLimits

0xa631,	// (0x0002f31a) cntbar_detail_list_event_pane_g2

0x0005,

0xfed3,	// (0x00034bbc) cntbar_detail_list_event_pane_g_ParamLimits

0xfed3,	// (0x00034bbc) cntbar_detail_list_event_pane_g

0xa69f,	// (0x0002f388) cntbar_detail_list_event_pane_t1_ParamLimits

0xa69f,	// (0x0002f388) cntbar_detail_list_event_pane_t1

0xa6b4,	// (0x0002f39d) cntbar_detail_list_event_pane_t2_ParamLimits

0xa6b4,	// (0x0002f39d) cntbar_detail_list_event_pane_t2

0x0002,

0xfee0,	// (0x00034bc9) cntbar_detail_list_event_pane_t_ParamLimits

0xfee0,	// (0x00034bc9) cntbar_detail_list_event_pane_t

0xc41f,	// (0x00031108) cell_cntbar_detail_list_shct_pane_g1

0x53d5,	// (0x0002a0be) navi_pane_mv_g3

0x253e,	// (0x00027227) main_cntbar_detail_pane_ParamLimits

0x22be,	// (0x00026fa7) main_notif_wgt_pane

0xcd38,	// (0x00031a21) aid_tch_main_mp4_pane_g4

0xcf0c,	// (0x00031bf5) popup_slider_window_cp02

0xec4b,	// (0x00033934) list_recal_day_event_pane

0xa549,	// (0x0002f232) cntbar_detail_btn_pane_ParamLimits

0xa549,	// (0x0002f232) cntbar_detail_btn_pane

0xa561,	// (0x0002f24a) cntbar_detail_btn_pane_cp01_ParamLimits

0xa561,	// (0x0002f24a) cntbar_detail_btn_pane_cp01

0xa58b,	// (0x0002f274) cntbar_detail_list_shct_pane_ParamLimits

0xa59b,	// (0x0002f284) cntbar_detail_pane_g1_ParamLimits

0xa59b,	// (0x0002f284) cntbar_detail_pane_g1

0xa5af,	// (0x0002f298) cntbar_detail_pane_t1_ParamLimits

0xa5af,	// (0x0002f298) cntbar_detail_pane_t1

0xa63d,	// (0x0002f326) cntbar_detail_list_event_pane_g3_ParamLimits

0xa63d,	// (0x0002f326) cntbar_detail_list_event_pane_g3

0xa655,	// (0x0002f33e) cntbar_detail_list_event_pane_g4_ParamLimits

0xa655,	// (0x0002f33e) cntbar_detail_list_event_pane_g4

0xa66d,	// (0x0002f356) cntbar_detail_list_event_pane_g5_ParamLimits

0xa66d,	// (0x0002f356) cntbar_detail_list_event_pane_g5

0xa685,	// (0x0002f36e) cntbar_detail_list_event_pane_g6_ParamLimits

0xa685,	// (0x0002f36e) cntbar_detail_list_event_pane_g6

0xa6c9,	// (0x0002f3b2) cntbar_detail_list_event_pane_t3_ParamLimits

0xa6c9,	// (0x0002f3b2) cntbar_detail_list_event_pane_t3

0xa6db,	// (0x0002f3c4) popup_notif_wgt_window_ParamLimits

0xa6db,	// (0x0002f3c4) popup_notif_wgt_window

0xa6f4,	// (0x0002f3dd) popup_submenu_window_cp01_ParamLimits

0xa6f4,	// (0x0002f3dd) popup_submenu_window_cp01

0x5457,	// (0x0002a140) bg_popup_window_pane_cp10

0xef76,	// (0x00033c5f) listscroll_notif_wgt_pane

0xef80,	// (0x00033c69) list_notif_wgt_window

0xef89,	// (0x00033c72) scroll_pane_cp033

0xef92,	// (0x00033c7b) list_notif_wgt_row_pane_ParamLimits

0xef92,	// (0x00033c7b) list_notif_wgt_row_pane

0xefa6,	// (0x00033c8f) aid_size_list_notif_wgt_del

0xefaf,	// (0x00033c98) list_notif_wgt_row_pane_g1

0xefb7,	// (0x00033ca0) list_notif_wgt_row_pane_g2

0xefbf,	// (0x00033ca8) list_notif_wgt_row_pane_g3

0x0002,

0xfee7,	// (0x00034bd0) list_notif_wgt_row_pane_g

0xefc8,	// (0x00033cb1) list_notif_wgt_row_pane_t1

0xefd6,	// (0x00033cbf) list_notif_wgt_row_pane_t2

0xefe4,	// (0x00033ccd) list_notif_wgt_row_pane_t3

0x0002,

0xfeee,	// (0x00034bd7) list_notif_wgt_row_pane_t

0xd466,	// (0x0003214f) list_recal_day_event_pane_g1

0xeff2,	// (0x00033cdb) list_recal_day_event_pane_t1

0x22be,	// (0x00026fa7) bg_button_pane_cp045

0xf001,	// (0x00033cea) cntbar_detail_btn_pane_t1

0xbeea,	// (0x00030bd3) main_callh_pane_ParamLimits

0xbeea,	// (0x00030bd3) main_callh_pane

0x22be,	// (0x00026fa7) main_coverflow0_pane

0x22be,	// (0x00026fa7) main_wgtman_pane

0x97c6,	// (0x0002e4af) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x97c6,	// (0x0002e4af) main_fs_bigclock_unlock_btn_pane

0x9f54,	// (0x0002ec3d) bg_button_pane_cp16

0x9f6c,	// (0x0002ec55) cell_tport_appsw_pane_g3

0xa706,	// (0x0002f3ef) cf0_flow_pane_ParamLimits

0xa706,	// (0x0002f3ef) cf0_flow_pane

0xf00f,	// (0x00033cf8) listscroll_cf0_pane

0xf018,	// (0x00033d01) main_cf0_pane_g1

0xa71b,	// (0x0002f404) main_cf0_pane_t1_ParamLimits

0xa71b,	// (0x0002f404) main_cf0_pane_t1

0xa733,	// (0x0002f41c) main_cf0_pane_t2_ParamLimits

0xa733,	// (0x0002f41c) main_cf0_pane_t2

0x0001,

0xfef5,	// (0x00034bde) main_cf0_pane_t_ParamLimits

0xfef5,	// (0x00034bde) main_cf0_pane_t

0xf022,	// (0x00033d0b) scroll_pane_cp11

0xa74b,	// (0x0002f434) cf0_flow_pane_g1

0xa757,	// (0x0002f440) cf0_flow_pane_g2

0x0001,

0xfefa,	// (0x00034be3) cf0_flow_pane_g

0xa763,	// (0x0002f44c) cf0_flow_pane_t1

0x22be,	// (0x00026fa7) main_call6_pane

0x22be,	// (0x00026fa7) main_calllock_pane

0xa775,	// (0x0002f45e) call6_btn_grp_pane_ParamLimits

0xa775,	// (0x0002f45e) call6_btn_grp_pane

0xa791,	// (0x0002f47a) call6_pane_g1_ParamLimits

0xa791,	// (0x0002f47a) call6_pane_g1

0xa7a7,	// (0x0002f490) popup_call6_1st_window_ParamLimits

0xa7a7,	// (0x0002f490) popup_call6_1st_window

0xa7b8,	// (0x0002f4a1) popup_call6_2nd_window_ParamLimits

0xa7b8,	// (0x0002f4a1) popup_call6_2nd_window

0xa7c9,	// (0x0002f4b2) cell_call6_btn_pane_ParamLimits

0xa7c9,	// (0x0002f4b2) cell_call6_btn_pane

0x5457,	// (0x0002a140) bg_popup_call2_in_pane_cp03

0xf02d,	// (0x00033d16) popup_call6_1st_window_g1

0xf035,	// (0x00033d1e) popup_call6_1st_window_g2

0xf03d,	// (0x00033d26) popup_call6_1st_window_g3

0x0002,

0xfeff,	// (0x00034be8) popup_call6_1st_window_g

0xf045,	// (0x00033d2e) popup_call6_1st_window_t1

0xf054,	// (0x00033d3d) popup_call6_1st_window_t2

0xf064,	// (0x00033d4d) popup_call6_1st_window_t3

0x0002,

0xff06,	// (0x00034bef) popup_call6_1st_window_t

0x5457,	// (0x0002a140) bg_popup_call2_in_pane_cp04

0xf02d,	// (0x00033d16) popup_call6_2nd_window_g1

0xf035,	// (0x00033d1e) popup_call6_2nd_window_g2

0xf03d,	// (0x00033d26) popup_call6_2nd_window_g3

0x0002,

0xfeff,	// (0x00034be8) popup_call6_2nd_window_g

0xf045,	// (0x00033d2e) popup_call6_2nd_window_t1

0x22be,	// (0x00026fa7) bg_button_pane_cp15

0xf074,	// (0x00033d5d) cell_call6_btn_pane_g1

0xf07d,	// (0x00033d66) cell_call6_btn_pane_t1

0xa7dd,	// (0x0002f4c6) listscroll_wgtman_pane_ParamLimits

0xa7dd,	// (0x0002f4c6) listscroll_wgtman_pane

0xa7f5,	// (0x0002f4de) wgtman_btn_pane_ParamLimits

0xa7f5,	// (0x0002f4de) wgtman_btn_pane

0x5006,	// (0x00029cef) aid_scroll_copy1

0xf08c,	// (0x00033d75) list_wgtman_pane

0xa80e,	// (0x0002f4f7) wgtman_btn_pane_g1_ParamLimits

0xa80e,	// (0x0002f4f7) wgtman_btn_pane_g1

0xa822,	// (0x0002f50b) wgtman_btn_pane_t1_ParamLimits

0xa822,	// (0x0002f50b) wgtman_btn_pane_t1

0xf096,	// (0x00033d7f) wgtman_btn_pane_t2_ParamLimits

0xf096,	// (0x00033d7f) wgtman_btn_pane_t2

0x0001,

0xff0d,	// (0x00034bf6) wgtman_btn_pane_t_ParamLimits

0xff0d,	// (0x00034bf6) wgtman_btn_pane_t

0xf0aa,	// (0x00033d93) listrow_wgtman_pane_ParamLimits

0xf0aa,	// (0x00033d93) listrow_wgtman_pane

0xf0be,	// (0x00033da7) listrow_wgtman_pane_g1

0xa83d,	// (0x0002f526) listrow_wgtman_pane_g2

0x0001,

0xff12,	// (0x00034bfb) listrow_wgtman_pane_g

0xf0c7,	// (0x00033db0) listrow_wgtman_pane_t1

0xf0d5,	// (0x00033dbe) listrow_wgtman_pane_t2

0x0001,

0xff17,	// (0x00034c00) listrow_wgtman_pane_t

0xf0e3,	// (0x00033dcc) wait_bar_pane_cp09

0xf0eb,	// (0x00033dd4) main_calllock_btn_pane

0xf0f5,	// (0x00033dde) main_calllock_pane_g1

0x22be,	// (0x00026fa7) bg_button_pane_cp17

0xf101,	// (0x00033dea) main_calllock_btn_pane_g1

0xf10a,	// (0x00033df3) main_calllock_btn_pane_t1

0x22be,	// (0x00026fa7) main_dialer3_pane

0x22be,	// (0x00026fa7) main_fmrd2_pane

0xc41f,	// (0x00031108) main_fs_bigclock_unlock_btn_pane_g1

0xf121,	// (0x00033e0a) main_fs_bigclock_unlock_btn_pane_t1

0xa847,	// (0x0002f530) area_fmrd2_info_pane_ParamLimits

0xa847,	// (0x0002f530) area_fmrd2_info_pane

0xa85b,	// (0x0002f544) area_fmrd2_visual_pane_ParamLimits

0xa85b,	// (0x0002f544) area_fmrd2_visual_pane

0xa869,	// (0x0002f552) fmrd2_indi_pane_ParamLimits

0xa869,	// (0x0002f552) fmrd2_indi_pane

0xa876,	// (0x0002f55f) area_fmrd2_visual_pane_g1

0xa87e,	// (0x0002f567) area_fmrd2_visual_pane_t1

0xa88e,	// (0x0002f577) area_fmrd2_visual_pane_t2

0xa89e,	// (0x0002f587) area_fmrd2_visual_pane_t3

0x0002,

0xff21,	// (0x00034c0a) area_fmrd2_visual_pane_t

0xa8ae,	// (0x0002f597) area_fmrd2_info_pane_g1

0xa8b6,	// (0x0002f59f) area_fmrd2_info_pane_t1

0xa8c6,	// (0x0002f5af) area_fmrd2_info_pane_t2

0xa8d6,	// (0x0002f5bf) area_fmrd2_info_pane_t3

0xa8e6,	// (0x0002f5cf) area_fmrd2_info_pane_t4

0x0003,

0xff28,	// (0x00034c11) area_fmrd2_info_pane_t

0xa8f6,	// (0x0002f5df) fmrd2_indi_pane_t1

0xa906,	// (0x0002f5ef) fmrd2_indi_pane_t2

0xa916,	// (0x0002f5ff) fmrd2_indi_pane_t3

0x0002,

0xff31,	// (0x00034c1a) fmrd2_indi_pane_t

0xe254,	// (0x00032f3d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe254,	// (0x00032f3d) list_single_fs_bigclock_indicator_pane_g5

0xe2fa,	// (0x00032fe3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2fa,	// (0x00032fe3) list_single_fs_bigclock_indicator_pane_t5

0xa136,	// (0x0002ee1f) aid_cell_bcale_month_pane_ParamLimits

0xa136,	// (0x0002ee1f) aid_cell_bcale_month_pane

0xa148,	// (0x0002ee31) bcale_month_pane_ParamLimits

0xa148,	// (0x0002ee31) bcale_month_pane

0xa160,	// (0x0002ee49) bcale_preview_pane_ParamLimits

0xa160,	// (0x0002ee49) bcale_preview_pane

0xee4f,	// (0x00033b38) list_single_fs_bigclock_pane_t1_ParamLimits

0xee69,	// (0x00033b52) list_single_fs_bigclock_pane_t2_ParamLimits

0xee69,	// (0x00033b52) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb8,	// (0x00034ba1) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb8,	// (0x00034ba1) list_single_fs_bigclock_pane_t

0xf119,	// (0x00033e02) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1c,	// (0x00034c05) main_fs_bigclock_unlock_btn_pane_g

0xa926,	// (0x0002f60f) aid_dia3_key_size_ParamLimits

0xa926,	// (0x0002f60f) aid_dia3_key_size

0xa935,	// (0x0002f61e) aid_dia3_listrow_size_ParamLimits

0xa935,	// (0x0002f61e) aid_dia3_listrow_size

0xa943,	// (0x0002f62c) dia3_keypad_fun_pane_ParamLimits

0xa943,	// (0x0002f62c) dia3_keypad_fun_pane

0xa95f,	// (0x0002f648) dia3_keypad_num_pane_ParamLimits

0xa95f,	// (0x0002f648) dia3_keypad_num_pane

0xa978,	// (0x0002f661) dia3_listscroll_pane_ParamLimits

0xa978,	// (0x0002f661) dia3_listscroll_pane

0xa98b,	// (0x0002f674) dia3_numentry_pane_ParamLimits

0xa98b,	// (0x0002f674) dia3_numentry_pane

0x004a,	// (0x00024d33) dia3_list_pane

0x0055,	// (0x00024d3e) scroll_pane_cp12

0x22be,	// (0x00026fa7) bg_dia3_numentry_pane

0x0060,	// (0x00024d49) dia3_numentry_pane_t1

0xa99c,	// (0x0002f685) cell_dia3_key_num_pane

0xa9a4,	// (0x0002f68d) cell_dia3_key0_fun_pane_ParamLimits

0xa9a4,	// (0x0002f68d) cell_dia3_key0_fun_pane

0xa9b8,	// (0x0002f6a1) cell_dia3_key1_fun_pane_ParamLimits

0xa9b8,	// (0x0002f6a1) cell_dia3_key1_fun_pane

0xa9d0,	// (0x0002f6b9) dia3_listrow_pane

0xdf6c,	// (0x00032c55) bg_dia3_numentry_pane_g1

0x22be,	// (0x00026fa7) bg_button_pane_cp21

0x009a,	// (0x00024d83) cell_dia3_key_num_pane_t1

0x00a8,	// (0x00024d91) cell_dia3_key_num_pane_t2

0x00b7,	// (0x00024da0) cell_dia3_key_num_pane_t3

0x00c6,	// (0x00024daf) cell_dia3_key_num_pane_t4

0x0003,

0xff38,	// (0x00034c21) cell_dia3_key_num_pane_t

0x22be,	// (0x00026fa7) bg_button_pane_cp19

0xa9d9,	// (0x0002f6c2) cell_dia3_key0_fun_pane_g1

0x22be,	// (0x00026fa7) bg_button_pane_cp20

0xa9e1,	// (0x0002f6ca) cell_dia3_key1_fun_pane_g1

0xa9e9,	// (0x0002f6d2) area_left_week_number_pane

0xa9f2,	// (0x0002f6db) area_top_day_name_pane

0xa9fb,	// (0x0002f6e4) frame_month_view_pane

0xaa07,	// (0x0002f6f0) grid_month_view_pane

0xaa11,	// (0x0002f6fa) cell_top_day_name_pane_ParamLimits

0xaa11,	// (0x0002f6fa) cell_top_day_name_pane

0xaa2d,	// (0x0002f716) cell_area_left_week_number_pane_ParamLimits

0xaa2d,	// (0x0002f716) cell_area_left_week_number_pane

0xaa43,	// (0x0002f72c) cell_month_view_pane_ParamLimits

0xaa43,	// (0x0002f72c) cell_month_view_pane

0x015a,	// (0x00024e43) frm_month_g1

0xaa64,	// (0x0002f74d) frm_month_g2

0xaa6e,	// (0x0002f757) frm_month_g3

0xaa78,	// (0x0002f761) frm_month_g4

0xaa82,	// (0x0002f76b) frm_month_g5

0xaa8c,	// (0x0002f775) frm_month_g6

0xaa98,	// (0x0002f781) frm_month_g7

0x019f,	// (0x00024e88) frm_month_g8

0xaaa4,	// (0x0002f78d) frm_month_g9

0xaaad,	// (0x0002f796) frm_month_g10

0xaab6,	// (0x0002f79f) frm_month_g11

0xaabf,	// (0x0002f7a8) frm_month_g12

0xaac8,	// (0x0002f7b1) frm_month_g13

0xaad1,	// (0x0002f7ba) frm_month_g14

0xaadc,	// (0x0002f7c5) frm_month_g15

0xaae7,	// (0x0002f7d0) frm_month_g16

0x000f,

0xff41,	// (0x00034c2a) frm_month_g

0xaaf2,	// (0x0002f7db) cell_top_day_name_pane_t1

0xab01,	// (0x0002f7ea) cell_area_left_week_number_pane_g1

0xaaf2,	// (0x0002f7db) cell_area_left_week_number_pane_t1

0xc41f,	// (0x00031108) cell_month_view_pane_g1

0xab09,	// (0x0002f7f2) cell_month_view_pane_t1

0x22be,	// (0x00026fa7) main_fps_pane

0xe56c,	// (0x00033255) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe56c,	// (0x00033255) cmail_ddmenu_btn02_pane_cp1

0xe588,	// (0x00033271) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe588,	// (0x00033271) cmail_ddmenu_btn02_pane_cp2

0xa41f,	// (0x0002f108) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa41f,	// (0x0002f108) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe69,	// (0x00034b52) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe69,	// (0x00034b52) cmail_ddmenu_btn02_pane_g

0xa43d,	// (0x0002f126) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa43d,	// (0x0002f126) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6e,	// (0x00034b57) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6e,	// (0x00034b57) cmail_ddmenu_btn02_pane_t

0xab18,	// (0x0002f801) fps_text_pane_ParamLimits

0xab18,	// (0x0002f801) fps_text_pane

0xab2f,	// (0x0002f818) main_fps_pane_g1_ParamLimits

0xab2f,	// (0x0002f818) main_fps_pane_g1

0xab47,	// (0x0002f830) wait_bar_pane_cp010_ParamLimits

0xab47,	// (0x0002f830) wait_bar_pane_cp010

0xab5a,	// (0x0002f843) fps_text_pane_t1_ParamLimits

0xab5a,	// (0x0002f843) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
