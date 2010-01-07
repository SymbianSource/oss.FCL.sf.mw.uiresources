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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00030a0b };

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
0x6112,	// (0x00036b1d) Screen

0x611e,	// (0x00036b29) application_window

0x6184,	// (0x00036b8f) area_bottom_pane_ParamLimits

0x6184,	// (0x00036b8f) area_bottom_pane

0x61de,	// (0x00036be9) area_top_pane_ParamLimits

0x61de,	// (0x00036be9) area_top_pane

0x6242,	// (0x00036c4d) call_video_uplink_pane_ParamLimits

0x6242,	// (0x00036c4d) call_video_uplink_pane

0x6280,	// (0x00036c8b) main_pane_ParamLimits

0x6280,	// (0x00036c8b) main_pane

0x0dc8,	// (0x000317d3) context_pane

0x9211,	// (0x00039c1c) navi_pane

0x9235,	// (0x00039c40) popup_cale_events_window_ParamLimits

0x9235,	// (0x00039c40) popup_cale_events_window

0x0ddb,	// (0x000317e6) popup_mup_playback_window

0x924d,	// (0x00039c58) signal_pane

0xdf84,	// (0x0003e98f) main_browser_pane

0xe9e0,	// (0x0003f3eb) main_burst_pane

0x90c3,	// (0x00039ace) main_calc_pane

0xe9e0,	// (0x0003f3eb) main_cale_day_pane

0xdf84,	// (0x0003e98f) main_cale_month_pane

0xe9e0,	// (0x0003f3eb) main_cale_week_pane

0xe9e0,	// (0x0003f3eb) main_call_pane

0xdc5e,	// (0x0003e669) main_call_poc_pane

0xe9e0,	// (0x0003f3eb) main_camera_pane

0xe9e0,	// (0x0003f3eb) main_chi_dic_pane

0xe882,	// (0x0003f28d) main_clock_pane

0xdc5e,	// (0x0003e669) main_fmradio_pane

0xe9e0,	// (0x0003f3eb) main_graph_messa_pane

0xdc5e,	// (0x0003e669) main_help_pane

0xdf84,	// (0x0003e98f) main_im_pane

0xdeb9,	// (0x0003e8c4) main_image_pane_ParamLimits

0xdeb9,	// (0x0003e8c4) main_image_pane

0xdc5e,	// (0x0003e669) main_location2_pane

0xe9e0,	// (0x0003f3eb) main_location_pane

0xdc5e,	// (0x0003e669) main_messa_pane

0xdc5e,	// (0x0003e669) main_mp2_pane

0xe9e0,	// (0x0003f3eb) main_mp_pane

0xdc5e,	// (0x0003e669) main_msg_pane

0xdc5e,	// (0x0003e669) main_mup_eq_pane

0xdc5e,	// (0x0003e669) main_mup_pane

0xe9e0,	// (0x0003f3eb) main_notes_pane

0xdc5e,	// (0x0003e669) main_pec_pane

0xdc5e,	// (0x0003e669) main_phob_pane

0xdc5e,	// (0x0003e669) main_pinb_pane

0xdc5e,	// (0x0003e669) main_postcard_pane

0xdc5e,	// (0x0003e669) main_qdial_pane

0xe9e0,	// (0x0003f3eb) main_skin_pane

0xdc5e,	// (0x0003e669) main_smil2_pane

0xe9e0,	// (0x0003f3eb) main_smil_pane

0xe9e0,	// (0x0003f3eb) main_video_pane

0xe9e0,	// (0x0003f3eb) main_video_tele_pane

0xdeb9,	// (0x0003e8c4) main_viewer_pane_ParamLimits

0xdeb9,	// (0x0003e8c4) main_viewer_pane

0xe9e0,	// (0x0003f3eb) main_vorec_pane

0x90fb,	// (0x00039b06) popup_blid_sat_info_window_ParamLimits

0x90fb,	// (0x00039b06) popup_blid_sat_info_window

0x9115,	// (0x00039b20) popup_dyc_status_message_window_ParamLimits

0x9115,	// (0x00039b20) popup_dyc_status_message_window

0x9125,	// (0x00039b30) popup_grid_large_graphic_window_ParamLimits

0x9125,	// (0x00039b30) popup_grid_large_graphic_window

0x919d,	// (0x00039ba8) popup_loc_request_window_ParamLimits

0x919d,	// (0x00039ba8) popup_loc_request_window

0x91e5,	// (0x00039bf0) popup_wml_address_window_ParamLimits

0x91e5,	// (0x00039bf0) popup_wml_address_window

0x8f9b,	// (0x000399a6) call_muted_g1

0x8c57,	// (0x00039662) popup_call_audio_conf_window_ParamLimits

0x8c57,	// (0x00039662) popup_call_audio_conf_window

0x8fab,	// (0x000399b6) popup_call_audio_first_window_ParamLimits

0x8fab,	// (0x000399b6) popup_call_audio_first_window

0x8feb,	// (0x000399f6) popup_call_audio_in_window_ParamLimits

0x8feb,	// (0x000399f6) popup_call_audio_in_window

0x900f,	// (0x00039a1a) popup_call_audio_out_window_ParamLimits

0x900f,	// (0x00039a1a) popup_call_audio_out_window

0x9031,	// (0x00039a3c) popup_call_audio_second_window_ParamLimits

0x9031,	// (0x00039a3c) popup_call_audio_second_window

0x9061,	// (0x00039a6c) popup_call_audio_wait_window_ParamLimits

0x9061,	// (0x00039a6c) popup_call_audio_wait_window

0x9082,	// (0x00039a8d) popup_number_entry_window_ParamLimits

0x9082,	// (0x00039a8d) popup_number_entry_window

0xd84b,	// (0x0003e256) bg_popup_call_pane_cp05_ParamLimits

0xd84b,	// (0x0003e256) bg_popup_call_pane_cp05

0xd86b,	// (0x0003e276) popup_number_entry_window_t1

0xd87e,	// (0x0003e289) popup_number_entry_window_t2

0xd890,	// (0x0003e29b) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0003fb06) popup_number_entry_window_t

0xd8a2,	// (0x0003e2ad) text_title_cp2

0xd8b5,	// (0x0003e2c0) bg_popup_call_pane_cp_ParamLimits

0xd8b5,	// (0x0003e2c0) bg_popup_call_pane_cp

0xd8c3,	// (0x0003e2ce) call_thumbnail_pane

0xd8cb,	// (0x0003e2d6) popup_call_audio_in_window_g1_ParamLimits

0xd8cb,	// (0x0003e2d6) popup_call_audio_in_window_g1

0xd8d7,	// (0x0003e2e2) popup_call_audio_in_window_g2_ParamLimits

0xd8d7,	// (0x0003e2e2) popup_call_audio_in_window_g2

0xd8e3,	// (0x0003e2ee) popup_call_audio_in_window_g3_ParamLimits

0xd8e3,	// (0x0003e2ee) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0003fb0f) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0003fb0f) popup_call_audio_in_window_g

0xd8ef,	// (0x0003e2fa) popup_call_audio_in_window_t1_ParamLimits

0xd8ef,	// (0x0003e2fa) popup_call_audio_in_window_t1

0xd90b,	// (0x0003e316) popup_call_audio_in_window_t2_ParamLimits

0xd90b,	// (0x0003e316) popup_call_audio_in_window_t2

0xd927,	// (0x0003e332) popup_call_audio_in_window_t3_ParamLimits

0xd927,	// (0x0003e332) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0003fb16) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0003fb16) popup_call_audio_in_window_t

0xd8b5,	// (0x0003e2c0) bg_popup_call_pane_cp01_ParamLimits

0xd8b5,	// (0x0003e2c0) bg_popup_call_pane_cp01

0xd8c3,	// (0x0003e2ce) call_thumbnail_pane_cp02

0xd93a,	// (0x0003e345) call_type_pane_cp022

0xd942,	// (0x0003e34d) popup_call_audio_out_window_g1_ParamLimits

0xd942,	// (0x0003e34d) popup_call_audio_out_window_g1

0xd954,	// (0x0003e35f) popup_call_audio_out_window_g2_ParamLimits

0xd954,	// (0x0003e35f) popup_call_audio_out_window_g2

0xd960,	// (0x0003e36b) popup_call_audio_out_window_g3_ParamLimits

0xd960,	// (0x0003e36b) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0003fb1d) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0003fb1d) popup_call_audio_out_window_g

0xd972,	// (0x0003e37d) popup_call_audio_out_window_t1_ParamLimits

0xd972,	// (0x0003e37d) popup_call_audio_out_window_t1

0xd98a,	// (0x0003e395) popup_call_audio_out_window_t2_ParamLimits

0xd98a,	// (0x0003e395) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0003fb24) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0003fb24) popup_call_audio_out_window_t

0xd99f,	// (0x0003e3aa) bg_popup_call_pane_ParamLimits

0xd99f,	// (0x0003e3aa) bg_popup_call_pane

0x6482,	// (0x00036e8d) call_thumbnail_pane_cp_ParamLimits

0x6482,	// (0x00036e8d) call_thumbnail_pane_cp

0xda23,	// (0x0003e42e) call_type_pane_cp01_ParamLimits

0xda23,	// (0x0003e42e) call_type_pane_cp01

0xda67,	// (0x0003e472) popup_call_audio_first_window_g1_ParamLimits

0xda67,	// (0x0003e472) popup_call_audio_first_window_g1

0xdab3,	// (0x0003e4be) popup_call_audio_first_window_g2_ParamLimits

0xdab3,	// (0x0003e4be) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0003fb29) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0003fb29) popup_call_audio_first_window_g

0xdaf7,	// (0x0003e502) popup_call_audio_first_window_t1_ParamLimits

0xdaf7,	// (0x0003e502) popup_call_audio_first_window_t1

0xdba3,	// (0x0003e5ae) popup_call_audio_first_window_t4_ParamLimits

0xdba3,	// (0x0003e5ae) popup_call_audio_first_window_t4

0xdc2f,	// (0x0003e63a) popup_call_audio_first_window_t5_ParamLimits

0xdc2f,	// (0x0003e63a) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0003fb2e) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0003fb2e) popup_call_audio_first_window_t

0xdc5e,	// (0x0003e669) bg_popup_call_pane_cp02

0xdc68,	// (0x0003e673) call_type_pane_cp023

0xdc70,	// (0x0003e67b) popup_call_audio_wait_window_g1

0xdc78,	// (0x0003e683) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0003fb35) popup_call_audio_wait_window_g

0xdc80,	// (0x0003e68b) popup_call_audio_wait_window_t3

0xdc8e,	// (0x0003e699) bg_popup_call_pane_cp03_ParamLimits

0xdc8e,	// (0x0003e699) bg_popup_call_pane_cp03

0xdcee,	// (0x0003e6f9) call_thumbnail_pane_cp011_ParamLimits

0xdcee,	// (0x0003e6f9) call_thumbnail_pane_cp011

0xdcfa,	// (0x0003e705) call_type_pane_cp034_ParamLimits

0xdcfa,	// (0x0003e705) call_type_pane_cp034

0xdd36,	// (0x0003e741) popup_call_audio_second_window_g1_ParamLimits

0xdd36,	// (0x0003e741) popup_call_audio_second_window_g1

0xdd72,	// (0x0003e77d) popup_call_audio_second_window_g2_ParamLimits

0xdd72,	// (0x0003e77d) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0003fb3a) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0003fb3a) popup_call_audio_second_window_g

0xddae,	// (0x0003e7b9) popup_call_audio_second_window_t1_ParamLimits

0xddae,	// (0x0003e7b9) popup_call_audio_second_window_t1

0xde2f,	// (0x0003e83a) popup_call_audio_second_window_t2_ParamLimits

0xde2f,	// (0x0003e83a) popup_call_audio_second_window_t2

0xde65,	// (0x0003e870) popup_call_audio_second_window_t3_ParamLimits

0xde65,	// (0x0003e870) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0003fb3f) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0003fb3f) popup_call_audio_second_window_t

0xdc5e,	// (0x0003e669) bg_popup_call_pane_cp04

0xde9b,	// (0x0003e8a6) list_conf_pane

0xdea3,	// (0x0003e8ae) popup_call_audio_conf_window_t1

0xdeb1,	// (0x0003e8bc) call_thumbnail_pane_g1

0xdeb9,	// (0x0003e8c4) bg_pinb_pane_ParamLimits

0xdeb9,	// (0x0003e8c4) bg_pinb_pane

0xdec7,	// (0x0003e8d2) find_pinb_pane

0xded0,	// (0x0003e8db) listscroll_pinb_pane_ParamLimits

0xded0,	// (0x0003e8db) listscroll_pinb_pane

0xdedf,	// (0x0003e8ea) pinb_bg_pane_g1

0x64a6,	// (0x00036eb1) pinb_bg_pane_g2

0x64b2,	// (0x00036ebd) pinb_bg_pane_g3

0x64be,	// (0x00036ec9) pinb_bg_pane_g4

0x64ca,	// (0x00036ed5) pinb_bg_pane_g5

0x64d6,	// (0x00036ee1) pinb_bg_pane_g6

0x64e1,	// (0x00036eec) pinb_bg_pane_g7

0x64ec,	// (0x00036ef7) pinb_bg_pane_g8

0x64f7,	// (0x00036f02) pinb_bg_pane_g9

0x6501,	// (0x00036f0c) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0003fb46) pinb_bg_pane_g

0x651e,	// (0x00036f29) grid_pinb_pane

0x6529,	// (0x00036f34) list_pinb_pane

0x6534,	// (0x00036f3f) scroll_pane_cp01_ParamLimits

0x6534,	// (0x00036f3f) scroll_pane_cp01

0xdee9,	// (0x0003e8f4) find_pinb_pane_g1_ParamLimits

0xdee9,	// (0x0003e8f4) find_pinb_pane_g1

0xdf01,	// (0x0003e90c) find_pinb_pane_t1

0xdf13,	// (0x0003e91e) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0003fb60) find_pinb_pane_t

0xdf28,	// (0x0003e933) input_focus_pane_cp01_ParamLimits

0xdf28,	// (0x0003e933) input_focus_pane_cp01

0x6546,	// (0x00036f51) cell_pinb_pane_ParamLimits

0x6546,	// (0x00036f51) cell_pinb_pane

0x6566,	// (0x00036f71) cell_pinb_pane_g1_ParamLimits

0x6566,	// (0x00036f71) cell_pinb_pane_g1

0x657b,	// (0x00036f86) cell_pinb_pane_g2_ParamLimits

0x657b,	// (0x00036f86) cell_pinb_pane_g2

0xdf34,	// (0x0003e93f) cell_pinb_pane_g3_ParamLimits

0xdf34,	// (0x0003e93f) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0003fb65) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0003fb65) cell_pinb_pane_g

0xdc5e,	// (0x0003e669) grid_highlight_pane_cp01

0x6587,	// (0x00036f92) list_pinb_item_pane_ParamLimits

0x6587,	// (0x00036f92) list_pinb_item_pane

0xdc5e,	// (0x0003e669) list_highlight_pane_cp02

0x65a2,	// (0x00036fad) list_pinb_item_pane_g1_ParamLimits

0x65a2,	// (0x00036fad) list_pinb_item_pane_g1

0x65af,	// (0x00036fba) list_pinb_item_pane_g2_ParamLimits

0x65af,	// (0x00036fba) list_pinb_item_pane_g2

0x65bb,	// (0x00036fc6) list_pinb_item_pane_g3_ParamLimits

0x65bb,	// (0x00036fc6) list_pinb_item_pane_g3

0x65cc,	// (0x00036fd7) list_pinb_item_pane_g4_ParamLimits

0x65cc,	// (0x00036fd7) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0003fb6c) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0003fb6c) list_pinb_item_pane_g

0x65d8,	// (0x00036fe3) list_pinb_item_pane_t1_ParamLimits

0x65d8,	// (0x00036fe3) list_pinb_item_pane_t1

0x6609,	// (0x00037014) calc_display_pane

0x6627,	// (0x00037032) calc_paper_pane

0x6643,	// (0x0003704e) grid_calc_pane

0xdc5e,	// (0x0003e669) bg_list_pane_cp01

0x666f,	// (0x0003707a) clock_g1

0x6677,	// (0x00037082) clock_g2

0x0001,

0xf16a,	// (0x0003fb75) clock_g

0x6681,	// (0x0003708c) clock_t1_ParamLimits

0x6681,	// (0x0003708c) clock_t1

0x6696,	// (0x000370a1) clock_t2_ParamLimits

0x6696,	// (0x000370a1) clock_t2

0x66a8,	// (0x000370b3) clock_t3_ParamLimits

0x66a8,	// (0x000370b3) clock_t3

0x66ba,	// (0x000370c5) clock_t4_ParamLimits

0x66ba,	// (0x000370c5) clock_t4

0x66cc,	// (0x000370d7) clock_t5_ParamLimits

0x66cc,	// (0x000370d7) clock_t5

0x66e1,	// (0x000370ec) clock_t6_ParamLimits

0x66e1,	// (0x000370ec) clock_t6

0x66f3,	// (0x000370fe) clock_t7_ParamLimits

0x66f3,	// (0x000370fe) clock_t7

0x6705,	// (0x00037110) clock_t8_ParamLimits

0x6705,	// (0x00037110) clock_t8

0x671b,	// (0x00037126) clock_t9_ParamLimits

0x671b,	// (0x00037126) clock_t9

0x0008,

0xf16f,	// (0x0003fb7a) clock_t_ParamLimits

0xf16f,	// (0x0003fb7a) clock_t

0xdf40,	// (0x0003e94b) popup_clock_analogue_window_cp02

0xdf40,	// (0x0003e94b) popup_clock_digital_window_cp01

0xdf48,	// (0x0003e953) listscroll_help_pane

0xdc5e,	// (0x0003e669) phob_pre_status_pane

0xdf52,	// (0x0003e95d) grid_qdial_pane

0xdc5e,	// (0x0003e669) listscroll_mce_pane

0xdf5c,	// (0x0003e967) bg_notes_pane

0xdf66,	// (0x0003e971) list_notes_pane

0x6731,	// (0x0003713c) scroll_pane_cp06

0xdf70,	// (0x0003e97b) bg_calc_paper_pane

0x673c,	// (0x00037147) list_calc_pane

0xdf84,	// (0x0003e98f) bg_calc_display_pane

0x6756,	// (0x00037161) calc_display_pane_t1

0x676b,	// (0x00037176) calc_display_pane_t2

0x6780,	// (0x0003718b) calc_display_pane_t3

0x0002,

0xf182,	// (0x0003fb8d) calc_display_pane_t

0x6792,	// (0x0003719d) cell_calc_pane_ParamLimits

0x6792,	// (0x0003719d) cell_calc_pane

0xdf90,	// (0x0003e99b) bg_calc_paper_pane_g1

0xdf9c,	// (0x0003e9a7) bg_calc_paper_pane_g2

0xdfa8,	// (0x0003e9b3) bg_calc_paper_pane_g3

0xdfb4,	// (0x0003e9bf) bg_calc_paper_pane_g4

0xdfc0,	// (0x0003e9cb) bg_calc_paper_pane_g5

0x67c1,	// (0x000371cc) bg_calc_paper_pane_g6

0x67d2,	// (0x000371dd) bg_calc_paper_pane_g7

0x67e3,	// (0x000371ee) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0003fb94) bg_calc_paper_pane_g

0x67f4,	// (0x000371ff) calc_bg_paper_pane_g9

0x6805,	// (0x00037210) list_calc_item_pane_ParamLimits

0x6805,	// (0x00037210) list_calc_item_pane

0xdfcc,	// (0x0003e9d7) list_calc_item_pane_g1

0x6829,	// (0x00037234) list_calc_item_pane_t1_ParamLimits

0x6829,	// (0x00037234) list_calc_item_pane_t1

0x683b,	// (0x00037246) list_calc_item_pane_t2_ParamLimits

0x683b,	// (0x00037246) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0003fba5) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0003fba5) list_calc_item_pane_t

0xdfd9,	// (0x0003e9e4) cell_calc_pane_g1

0xdfe3,	// (0x0003e9ee) grid_highlight_pane_cp02

0xe005,	// (0x0003ea10) bg_calc_display_pane_g1

0x686b,	// (0x00037276) bg_calc_display_pane_g2

0xe00e,	// (0x0003ea19) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0003fbaf) bg_calc_display_pane_g

0x6875,	// (0x00037280) cell_qdial_pane_ParamLimits

0x6875,	// (0x00037280) cell_qdial_pane

0x688b,	// (0x00037296) cell_qdial_pane_g1_ParamLimits

0x688b,	// (0x00037296) cell_qdial_pane_g1

0x6898,	// (0x000372a3) cell_qdial_pane_g2_ParamLimits

0x6898,	// (0x000372a3) cell_qdial_pane_g2

0xe017,	// (0x0003ea22) cell_qdial_pane_g3_ParamLimits

0xe017,	// (0x0003ea22) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0003fbb6) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0003fbb6) cell_qdial_pane_g

0x68b6,	// (0x000372c1) cell_qdial_pane_t1_ParamLimits

0x68b6,	// (0x000372c1) cell_qdial_pane_t1

0x68ce,	// (0x000372d9) cell_qdial_pane_t2_ParamLimits

0x68ce,	// (0x000372d9) cell_qdial_pane_t2

0x68e1,	// (0x000372ec) cell_qdial_pane_t3_ParamLimits

0x68e1,	// (0x000372ec) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0003fbbf) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0003fbbf) cell_qdial_pane_t

0xdc5e,	// (0x0003e669) grid_highlight_pane_cp04

0xe023,	// (0x0003ea2e) thumbnail_qdial_pane_ParamLimits

0xe023,	// (0x0003ea2e) thumbnail_qdial_pane

0xe07f,	// (0x0003ea8a) list_help_pane

0xe088,	// (0x0003ea93) scroll_pane_cp02

0x68f4,	// (0x000372ff) help_list_pane_t1_ParamLimits

0x68f4,	// (0x000372ff) help_list_pane_t1

0x691e,	// (0x00037329) bg_notes_pane_g2

0x6926,	// (0x00037331) bg_notes_pane_g3

0x692e,	// (0x00037339) notes_bg_pane_g1

0x6936,	// (0x00037341) notes_bg_pane_g4

0x693e,	// (0x00037349) notes_bg_pane_g5

0x6946,	// (0x00037351) notes_bg_pane_g6

0x694e,	// (0x00037359) notes_bg_pane_g7

0x6956,	// (0x00037361) notes_bg_pane_g8

0x695e,	// (0x00037369) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0003fbdd) notes_bg_pane_g

0x6966,	// (0x00037371) list_notes_text_pane_ParamLimits

0x6966,	// (0x00037371) list_notes_text_pane

0xe091,	// (0x0003ea9c) list_notes_text_pane_g1

0x4fc2,	// (0x000359cd) list_notes_text_pane_t1

0xdf84,	// (0x0003e98f) listscroll_cale_week_pane

0x69a0,	// (0x000373ab) bg_cale_heading_pane

0xe0ab,	// (0x0003eab6) bg_cale_pane_cp01

0x69b4,	// (0x000373bf) cale_week_corner_pane

0x69ca,	// (0x000373d5) cale_week_day_heading_pane

0x69de,	// (0x000373e9) cale_week_scroll_pane_g1

0x69ef,	// (0x000373fa) cale_week_scroll_pane_g2

0x6a00,	// (0x0003740b) cale_week_scroll_pane_g3

0x6a11,	// (0x0003741c) cale_week_scroll_pane_g4

0x6a22,	// (0x0003742d) cale_week_scroll_pane_g5

0x6a33,	// (0x0003743e) cale_week_scroll_pane_g6

0x6a46,	// (0x00037451) cale_week_scroll_pane_g7

0x6a59,	// (0x00037464) cale_week_scroll_pane_g8

0x6a6c,	// (0x00037477) cale_week_scroll_pane_g9

0x6a7d,	// (0x00037488) cale_week_scroll_pane_g10

0x6a8e,	// (0x00037499) cale_week_scroll_pane_g11

0x6a9f,	// (0x000374aa) cale_week_scroll_pane_g12

0x6ab0,	// (0x000374bb) cale_week_scroll_pane_g13

0x6ac1,	// (0x000374cc) cale_week_scroll_pane_g14

0x6ad2,	// (0x000374dd) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0003fbec) cale_week_scroll_pane_g

0x6ae3,	// (0x000374ee) cale_week_time_pane

0x6af6,	// (0x00037501) grid_cale_week_pane

0x6b0b,	// (0x00037516) scroll_pane_cp08

0x6b25,	// (0x00037530) cell_cale_week_pane_ParamLimits

0x6b25,	// (0x00037530) cell_cale_week_pane

0x6b63,	// (0x0003756e) cale_week_day_heading_pane_t1

0x6b90,	// (0x0003759b) cale_week_day_heading_pane_t2

0x6bbd,	// (0x000375c8) cale_week_day_heading_pane_t3

0x6bea,	// (0x000375f5) cale_week_day_heading_pane_t4

0x6c17,	// (0x00037622) cale_week_day_heading_pane_t5

0x6c44,	// (0x0003764f) cale_week_day_heading_pane_t6

0x6c71,	// (0x0003767c) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0003fc0b) cale_week_day_heading_pane_t

0xe0d6,	// (0x0003eae1) bg_cale_side_pane

0x6c9e,	// (0x000376a9) cale_week_time_pane_t1

0x6cca,	// (0x000376d5) cale_week_time_pane_t2

0x6cf6,	// (0x00037701) cale_week_time_pane_t3

0x6d22,	// (0x0003772d) cale_week_time_pane_t4

0x6d4e,	// (0x00037759) cale_week_time_pane_t5

0x6d7a,	// (0x00037785) cale_week_time_pane_t6

0x6da6,	// (0x000377b1) cale_week_time_pane_t7

0x6dd2,	// (0x000377dd) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0003fc1a) cale_week_time_pane_t

0x6dfe,	// (0x00037809) cell_cale_week_pane_g2

0x6e17,	// (0x00037822) cell_cale_week_pane_g3_ParamLimits

0x6e17,	// (0x00037822) cell_cale_week_pane_g3

0xe0e4,	// (0x0003eaef) grid_highlight_pane_cp07

0xe0ec,	// (0x0003eaf7) listscroll_gms_pane

0xe0f6,	// (0x0003eb01) grid_gms_pane

0xe0ff,	// (0x0003eb0a) listscroll_gms_pane_g1

0xe107,	// (0x0003eb12) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0003fc2b) listscroll_gms_pane_g

0x6e2f,	// (0x0003783a) scroll_pane_cp010

0x6e3a,	// (0x00037845) cell_gms_pane_ParamLimits

0x6e3a,	// (0x00037845) cell_gms_pane

0x6e4d,	// (0x00037858) cell_gms_pane_g1

0xe10f,	// (0x0003eb1a) cell_gms_pane_g2

0xe117,	// (0x0003eb22) cell_gms_pane_g3

0xe120,	// (0x0003eb2b) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0003fc30) cell_gms_pane_g

0xe129,	// (0x0003eb34) grid_highlight_pane_cp09

0x8f43,	// (0x0003994e) phob_pre_status_pane_g1

0x8f4b,	// (0x00039956) phob_pre_status_pane_g2

0x8f53,	// (0x0003995e) phob_pre_status_pane_g3

0x8f5b,	// (0x00039966) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0004001f) phob_pre_status_pane_g

0x8f6b,	// (0x00039976) phob_pre_status_pane_t1

0x8f7b,	// (0x00039986) phob_pre_status_pane_t2

0x8f8b,	// (0x00039996) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0004002a) phob_pre_status_pane_t

0xdc5e,	// (0x0003e669) bg_list_pane_cp05

0x6e5d,	// (0x00037868) grid_vorec_pane

0x6e67,	// (0x00037872) vorec_t1

0x6e75,	// (0x00037880) vorec_t2

0x6e83,	// (0x0003788e) vorec_t3

0x6e91,	// (0x0003789c) vorec_t4

0x6e9f,	// (0x000378aa) vorec_t5

0x6ead,	// (0x000378b8) vorec_t6

0x0006,

0xf22e,	// (0x0003fc39) vorec_t

0x6ec9,	// (0x000378d4) wait_bar_pane_cp01

0x6ed1,	// (0x000378dc) cell_vorec_pane_ParamLimits

0x6ed1,	// (0x000378dc) cell_vorec_pane

0xe131,	// (0x0003eb3c) cell_vorec_pane_g1

0xdc5e,	// (0x0003e669) grid_highlight_pane_cp05

0x6ef6,	// (0x00037901) cams_zoom_pane

0x6f02,	// (0x0003790d) image_vga_pane

0x6f11,	// (0x0003791c) main_camera_pane_g1

0x6f1f,	// (0x0003792a) main_camera_pane_g2

0x6f2b,	// (0x00037936) main_camera_pane_g3

0x6f39,	// (0x00037944) main_camera_pane_g4

0x6f47,	// (0x00037952) main_camera_pane_g5

0x6f55,	// (0x00037960) main_camera_pane_g6

0x6f63,	// (0x0003796e) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0003fc48) main_camera_pane_g

0x6f71,	// (0x0003797c) main_camera_pane_t1

0x6f83,	// (0x0003798e) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0003fc59) main_camera_pane_t

0x6fa6,	// (0x000379b1) cams_zoom_pane_cp_ParamLimits

0x6fa6,	// (0x000379b1) cams_zoom_pane_cp

0x6fca,	// (0x000379d5) image_cif_pane_ParamLimits

0x6fca,	// (0x000379d5) image_cif_pane

0x6fe8,	// (0x000379f3) image_subqcif_pane

0x6ff2,	// (0x000379fd) main_video_pane_g1_ParamLimits

0x6ff2,	// (0x000379fd) main_video_pane_g1

0x7012,	// (0x00037a1d) main_video_pane_g2_ParamLimits

0x7012,	// (0x00037a1d) main_video_pane_g2

0x7042,	// (0x00037a4d) main_video_pane_g3_ParamLimits

0x7042,	// (0x00037a4d) main_video_pane_g3

0x706b,	// (0x00037a76) main_video_pane_g4_ParamLimits

0x706b,	// (0x00037a76) main_video_pane_g4

0x7094,	// (0x00037a9f) main_video_pane_g5_ParamLimits

0x7094,	// (0x00037a9f) main_video_pane_g5

0xe147,	// (0x0003eb52) main_video_pane_g6_ParamLimits

0xe147,	// (0x0003eb52) main_video_pane_g6

0x0006,

0xf253,	// (0x0003fc5e) main_video_pane_g_ParamLimits

0xf253,	// (0x0003fc5e) main_video_pane_g

0x70b6,	// (0x00037ac1) main_video_pane_t1_ParamLimits

0x70b6,	// (0x00037ac1) main_video_pane_t1

0xe161,	// (0x0003eb6c) cams_zoom_pane_g1

0xe16a,	// (0x0003eb75) cams_zoom_pane_g2

0xe173,	// (0x0003eb7e) cams_zoom_pane_g3

0xe17c,	// (0x0003eb87) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0003fc6d) cams_zoom_pane_g

0x7100,	// (0x00037b0b) grid_cams_pane

0x710e,	// (0x00037b19) linegrid_cams_pane

0x711c,	// (0x00037b27) cell_cams_pane_ParamLimits

0x711c,	// (0x00037b27) cell_cams_pane

0xe185,	// (0x0003eb90) cams_burst_image_pane

0xe18d,	// (0x0003eb98) cell_cams_pane_g1

0xdc5e,	// (0x0003e669) grid_highlight_pane_cp03

0xdfd9,	// (0x0003e9e4) mp_bg_pane_g1

0xdc5e,	// (0x0003e669) bg_list_pane_cp03

0x0c9a,	// (0x000316a5) bg_mp_pane

0x0ca2,	// (0x000316ad) grid_mp_pane

0x0caa,	// (0x000316b5) media_player_g1

0x0cb4,	// (0x000316bf) media_player_t1

0x0cc2,	// (0x000316cd) media_player_t2

0x0cd0,	// (0x000316db) media_player_t3

0x0cde,	// (0x000316e9) media_player_t4

0x0cec,	// (0x000316f7) media_player_t5

0x0cfa,	// (0x00031705) media_player_t6

0x0d08,	// (0x00031713) media_player_t7

0x0006,

0xf5fe,	// (0x00040009) media_player_t

0x0d16,	// (0x00031721) wait_bar_pane_cp02

0xf5e3,	// (0x0003ffee) main_usb_pane_t

0x8f3a,	// (0x00039945) cell_mp_pane

0xdfd9,	// (0x0003e9e4) cell_mp_pane_g1

0xdc5e,	// (0x0003e669) grid_highlight_pane_cp06

0xe195,	// (0x0003eba0) grid_skin_colour_pane

0xe19d,	// (0x0003eba8) list_highlight_pane_cp03

0x7131,	// (0x00037b3c) skin_g1

0xe1a5,	// (0x0003ebb0) skin_t1

0xe1b4,	// (0x0003ebbf) skin_t2

0x0001,

0xf297,	// (0x0003fca2) skin_t

0x713b,	// (0x00037b46) cell_skin_colour_pane_ParamLimits

0x713b,	// (0x00037b46) cell_skin_colour_pane

0xe1c2,	// (0x0003ebcd) cell_skin_colour_pane_g1

0x718a,	// (0x00037b95) call_video_g1_ParamLimits

0x718a,	// (0x00037b95) call_video_g1

0x719a,	// (0x00037ba5) call_video_g2_ParamLimits

0x719a,	// (0x00037ba5) call_video_g2

0x0001,

0xf29c,	// (0x0003fca7) call_video_g_ParamLimits

0xf29c,	// (0x0003fca7) call_video_g

0x71d2,	// (0x00037bdd) call_video_uplink_pane_cp1_ParamLimits

0x71d2,	// (0x00037bdd) call_video_uplink_pane_cp1

0xe1dc,	// (0x0003ebe7) call_video_uplink_pane_cp2

0x7280,	// (0x00037c8b) video_down_crop_pane_ParamLimits

0x7280,	// (0x00037c8b) video_down_crop_pane

0x7358,	// (0x00037d63) video_down_pane_ParamLimits

0x7358,	// (0x00037d63) video_down_pane

0xe1e4,	// (0x0003ebef) video_down_subqcif_pane_ParamLimits

0xe1e4,	// (0x0003ebef) video_down_subqcif_pane

0xe1fe,	// (0x0003ec09) video_down_subqcif_pane_cp_ParamLimits

0xe1fe,	// (0x0003ec09) video_down_subqcif_pane_cp

0xe224,	// (0x0003ec2f) im_reading_pane_ParamLimits

0xe224,	// (0x0003ec2f) im_reading_pane

0x7435,	// (0x00037e40) im_writing_pane_ParamLimits

0x7435,	// (0x00037e40) im_writing_pane

0x7453,	// (0x00037e5e) im_reading_pane_t1

0xe23e,	// (0x0003ec49) list_im_pane

0xe24f,	// (0x0003ec5a) scroll_pane_cp07

0x749b,	// (0x00037ea6) im_writing_pane_t1_ParamLimits

0x749b,	// (0x00037ea6) im_writing_pane_t1

0xe268,	// (0x0003ec73) im_writing_pane_t2_ParamLimits

0xe268,	// (0x0003ec73) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0003fcb1) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0003fcb1) im_writing_pane_t

0xdc5e,	// (0x0003e669) input_focus_pane_cp04

0xdc5e,	// (0x0003e669) input_focus_pane_cp05

0x74ad,	// (0x00037eb8) list_im_single_pane_ParamLimits

0x74ad,	// (0x00037eb8) list_im_single_pane

0x74c9,	// (0x00037ed4) list_single_im_pane_t1

0x8efe,	// (0x00039909) blid_accuracy_pane

0x8f06,	// (0x00039911) blid_compass_pane

0x8f10,	// (0x0003991b) main_location_t1

0x8f1e,	// (0x00039929) main_location_t2

0x8f2c,	// (0x00039937) main_location_t3

0x0002,

0xf60d,	// (0x00040018) main_location_t

0xdc5e,	// (0x0003e669) aid_levels_location

0xdfd9,	// (0x0003e9e4) blid_accuracy_pane_g1

0xdfd9,	// (0x0003e9e4) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0003fd13) blid_accuracy_pane_g

0xe2b0,	// (0x0003ecbb) wml_content_pane

0xe2ee,	// (0x0003ecf9) wml_button_pane_ParamLimits

0xe2ee,	// (0x0003ecf9) wml_button_pane

0x74d8,	// (0x00037ee3) wml_list_single_large_pane_ParamLimits

0x74d8,	// (0x00037ee3) wml_list_single_large_pane

0x74fa,	// (0x00037f05) wml_list_single_medium_pane_ParamLimits

0x74fa,	// (0x00037f05) wml_list_single_medium_pane

0x7520,	// (0x00037f2b) wml_list_single_small_pane_ParamLimits

0x7520,	// (0x00037f2b) wml_list_single_small_pane

0xe302,	// (0x0003ed0d) wml_selection_box_pane_ParamLimits

0xe302,	// (0x0003ed0d) wml_selection_box_pane

0xe315,	// (0x0003ed20) wml_list_single_pane_t1

0xe324,	// (0x0003ed2f) wml_list_single_medium_pane_t1

0xe333,	// (0x0003ed3e) wml_list_single_large_pane_t1

0xe342,	// (0x0003ed4d) input_focus_pane_cp02_ParamLimits

0xe342,	// (0x0003ed4d) input_focus_pane_cp02

0xe355,	// (0x0003ed60) wml_selection_box_pane_g1

0xe35e,	// (0x0003ed69) wml_selection_box_pane_t1_ParamLimits

0xe35e,	// (0x0003ed69) wml_selection_box_pane_t1

0xdeb9,	// (0x0003e8c4) bg_wml_button_pane_ParamLimits

0xdeb9,	// (0x0003e8c4) bg_wml_button_pane

0xe376,	// (0x0003ed81) wml_button_pane_g1

0xe37e,	// (0x0003ed89) wml_button_pane_t1

0xe376,	// (0x0003ed81) wml_button_bg_pane_g1

0xe38e,	// (0x0003ed99) wml_button_bg_pane_g2

0xe396,	// (0x0003eda1) wml_button_bg_pane_g3

0xe39e,	// (0x0003eda9) wml_button_bg_pane_g4

0xe3a6,	// (0x0003edb1) wml_button_bg_pane_g5

0xe3ae,	// (0x0003edb9) wml_button_bg_pane_g6

0xe3b6,	// (0x0003edc1) wml_button_bg_pane_g7

0xe3be,	// (0x0003edc9) wml_button_bg_pane_g8

0xe3c6,	// (0x0003edd1) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0003fcb6) wml_button_bg_pane_g

0x754b,	// (0x00037f56) bg_list_pane_cp02

0xe3ce,	// (0x0003edd9) mce_header_pane_ParamLimits

0xe3ce,	// (0x0003edd9) mce_header_pane

0xe3e4,	// (0x0003edef) mce_icon_pane

0xe3e4,	// (0x0003edef) mce_image_pane

0xe3ed,	// (0x0003edf8) mce_text_pane_ParamLimits

0xe3ed,	// (0x0003edf8) mce_text_pane

0x7555,	// (0x00037f60) scroll_pane_cp03

0xe2e6,	// (0x0003ecf1) scroll_pane_cp04

0xe400,	// (0x0003ee0b) scroll_pane_cp05_ParamLimits

0xe400,	// (0x0003ee0b) scroll_pane_cp05

0x755f,	// (0x00037f6a) mce_header_field_pane_ParamLimits

0x755f,	// (0x00037f6a) mce_header_field_pane

0x7581,	// (0x00037f8c) mce_header_field_pane_2_ParamLimits

0x7581,	// (0x00037f8c) mce_header_field_pane_2

0x7597,	// (0x00037fa2) mce_header_field_pane_3

0x759f,	// (0x00037faa) list_single_mce_message_pane_ParamLimits

0x759f,	// (0x00037faa) list_single_mce_message_pane

0x75be,	// (0x00037fc9) list_single_mce_smart_pane_ParamLimits

0x75be,	// (0x00037fc9) list_single_mce_smart_pane

0xe40c,	// (0x0003ee17) input_focus_pane_cp03

0xe415,	// (0x0003ee20) list_header_data_pane

0x75e8,	// (0x00037ff3) mce_header_field_pane_t1

0x75f8,	// (0x00038003) list_single_mce_header_pane_ParamLimits

0x75f8,	// (0x00038003) list_single_mce_header_pane

0xe41d,	// (0x0003ee28) list_single_mce_header_pane_t1

0xe42c,	// (0x0003ee37) list_single_mce_message_pane_g1

0xe434,	// (0x0003ee3f) list_single_mce_message_pane_t1

0x7634,	// (0x0003803f) bg_cale_heading_pane_cp01_ParamLimits

0x7634,	// (0x0003803f) bg_cale_heading_pane_cp01

0xe442,	// (0x0003ee4d) bg_cale_pane_cp02_ParamLimits

0xe442,	// (0x0003ee4d) bg_cale_pane_cp02

0x7657,	// (0x00038062) cale_month_corner_pane

0x766d,	// (0x00038078) cale_month_day_heading_pane_ParamLimits

0x766d,	// (0x00038078) cale_month_day_heading_pane

0x76a0,	// (0x000380ab) cale_month_pane_g1_ParamLimits

0x76a0,	// (0x000380ab) cale_month_pane_g1

0x76bc,	// (0x000380c7) cale_month_pane_g2_ParamLimits

0x76bc,	// (0x000380c7) cale_month_pane_g2

0x76d7,	// (0x000380e2) cale_month_pane_g3_ParamLimits

0x76d7,	// (0x000380e2) cale_month_pane_g3

0x7703,	// (0x0003810e) cale_month_pane_g4_ParamLimits

0x7703,	// (0x0003810e) cale_month_pane_g4

0x772f,	// (0x0003813a) cale_month_pane_g5_ParamLimits

0x772f,	// (0x0003813a) cale_month_pane_g5

0x775b,	// (0x00038166) cale_month_pane_g6_ParamLimits

0x775b,	// (0x00038166) cale_month_pane_g6

0x7797,	// (0x000381a2) cale_month_pane_g7_ParamLimits

0x7797,	// (0x000381a2) cale_month_pane_g7

0x77d3,	// (0x000381de) cale_month_pane_g8_ParamLimits

0x77d3,	// (0x000381de) cale_month_pane_g8

0x780f,	// (0x0003821a) cale_month_pane_g9_ParamLimits

0x780f,	// (0x0003821a) cale_month_pane_g9

0x7849,	// (0x00038254) cale_month_pane_g10_ParamLimits

0x7849,	// (0x00038254) cale_month_pane_g10

0x7883,	// (0x0003828e) cale_month_pane_g11_ParamLimits

0x7883,	// (0x0003828e) cale_month_pane_g11

0x78bd,	// (0x000382c8) cale_month_pane_g12_ParamLimits

0x78bd,	// (0x000382c8) cale_month_pane_g12

0x78f7,	// (0x00038302) cale_month_pane_g13_ParamLimits

0x78f7,	// (0x00038302) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0003fcc9) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0003fcc9) cale_month_pane_g

0x7931,	// (0x0003833c) cale_month_week_pane

0x7944,	// (0x0003834f) grid_cale_month_pane_ParamLimits

0x7944,	// (0x0003834f) grid_cale_month_pane

0x7972,	// (0x0003837d) cale_month_day_heading_pane_t1

0x79d0,	// (0x000383db) cale_month_day_heading_pane_t2

0x7a35,	// (0x00038440) cale_month_day_heading_pane_t3

0x7a9a,	// (0x000384a5) cale_month_day_heading_pane_t4

0x7aff,	// (0x0003850a) cale_month_day_heading_pane_t5

0x7b6c,	// (0x00038577) cale_month_day_heading_pane_t6

0x7be1,	// (0x000385ec) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0003fce4) cale_month_day_heading_pane_t

0xe0d6,	// (0x0003eae1) bg_cale_side_pane_cp01

0x7c56,	// (0x00038661) cale_month_week_pane_t1

0x7c81,	// (0x0003868c) cale_month_week_pane_t2

0x7cac,	// (0x000386b7) cale_month_week_pane_t3

0x7cd7,	// (0x000386e2) cale_month_week_pane_t4

0x7d02,	// (0x0003870d) cale_month_week_pane_t5

0x7d2d,	// (0x00038738) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0003fcf3) cale_month_week_pane_t

0x7d58,	// (0x00038763) cell_cale_month_pane_ParamLimits

0x7d58,	// (0x00038763) cell_cale_month_pane

0x7e26,	// (0x00038831) cell_cale_month_pane_g1

0x7e32,	// (0x0003883d) cell_cale_month_pane_t1_ParamLimits

0x7e32,	// (0x0003883d) cell_cale_month_pane_t1

0xe0e4,	// (0x0003eaef) grid_highlight_pane_cp08

0xdfd9,	// (0x0003e9e4) main_smil_g1

0x7e4e,	// (0x00038859) smil_status_pane

0xe477,	// (0x0003ee82) smil_text_pane

0x0bb8,	// (0x000315c3) bg_popup_call3_rect_pane_g8

0x0bc0,	// (0x000315cb) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0003ffac) bg_popup_call3_rect_pane_g

0x0e68,	// (0x00031873) smil_status_volume_pane_g1

0xe481,	// (0x0003ee8c) smil_status_pane_t1

0x92df,	// (0x00039cea) volume_smil_pane

0xe498,	// (0x0003eea3) list_smil_text_pane

0x7e61,	// (0x0003886c) scroll_pane_cp011

0x7e6c,	// (0x00038877) smil_text_list_pane_t1_ParamLimits

0x7e6c,	// (0x00038877) smil_text_list_pane_t1

0x7ed0,	// (0x000388db) aid_volume_smil_ParamLimits

0x7ed0,	// (0x000388db) aid_volume_smil

0xdfd9,	// (0x0003e9e4) smil_volume_pane_g1

0xdfd9,	// (0x0003e9e4) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0003fd13) smil_volume_pane_g

0xdf84,	// (0x0003e98f) listscroll_cale_day_pane

0xe4a2,	// (0x0003eead) bg_cale_pane

0xe4ba,	// (0x0003eec5) list_cale_pane

0xe4cb,	// (0x0003eed6) scroll_pane_cp09

0xe4dc,	// (0x0003eee7) cale_bg_pane_g1

0xe4e4,	// (0x0003eeef) cale_bg_pane_g2

0xe4ec,	// (0x0003eef7) cale_bg_pane_g3

0xe4f4,	// (0x0003eeff) cale_bg_pane_g4

0xe4fc,	// (0x0003ef07) cale_bg_pane_g5

0xe504,	// (0x0003ef0f) cale_bg_pane_g6

0xe50c,	// (0x0003ef17) cale_bg_pane_g7

0xe514,	// (0x0003ef1f) cale_bg_pane_g8

0xe51c,	// (0x0003ef27) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0003fd18) cale_bg_pane_g

0x7ef2,	// (0x000388fd) list_cale_time_pane_ParamLimits

0x7ef2,	// (0x000388fd) list_cale_time_pane

0x7f0a,	// (0x00038915) list_cale_time_pane_g1_ParamLimits

0x7f0a,	// (0x00038915) list_cale_time_pane_g1

0xe524,	// (0x0003ef2f) list_cale_time_pane_g2_ParamLimits

0xe524,	// (0x0003ef2f) list_cale_time_pane_g2

0x7f16,	// (0x00038921) list_cale_time_pane_g3_ParamLimits

0x7f16,	// (0x00038921) list_cale_time_pane_g3

0x7f24,	// (0x0003892f) list_cale_time_pane_g4_ParamLimits

0x7f24,	// (0x0003892f) list_cale_time_pane_g4

0x7f32,	// (0x0003893d) list_cale_time_pane_g5_ParamLimits

0x7f32,	// (0x0003893d) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0003fd2b) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0003fd2b) list_cale_time_pane_g

0x7f40,	// (0x0003894b) list_cale_time_pane_t1_ParamLimits

0x7f40,	// (0x0003894b) list_cale_time_pane_t1

0x7f68,	// (0x00038973) list_cale_time_pane_t2_ParamLimits

0x7f68,	// (0x00038973) list_cale_time_pane_t2

0x827d,	// (0x00038c88) aid_blid_cardinal_pane

0x82bf,	// (0x00038cca) compass_pane_t4

0x7f90,	// (0x0003899b) list_cale_time_pane_t4_ParamLimits

0x7f90,	// (0x0003899b) list_cale_time_pane_t4

0x82cd,	// (0x00038cd8) compass_pane_t5

0x82dd,	// (0x00038ce8) compass_pane_t6

0x82eb,	// (0x00038cf6) compass_pane_t7

0xe932,	// (0x0003f33d) navi_pane_cc_t1

0xea87,	// (0x0003f492) aid_phob_thumbnail_center_pane

0x89f4,	// (0x000393ff) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0003fd38) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0003fd38) list_cale_time_pane_t

0xd8b5,	// (0x0003e2c0) bg_popup_window_pane_cp02_ParamLimits

0xd8b5,	// (0x0003e2c0) bg_popup_window_pane_cp02

0xe53e,	// (0x0003ef49) heading_pane_cp01_ParamLimits

0xe53e,	// (0x0003ef49) heading_pane_cp01

0xe54a,	// (0x0003ef55) loc_req_pane_ParamLimits

0xe54a,	// (0x0003ef55) loc_req_pane

0xe55a,	// (0x0003ef65) loc_type_pane_ParamLimits

0xe55a,	// (0x0003ef65) loc_type_pane

0xe56c,	// (0x0003ef77) loc_type_pane_t1_ParamLimits

0xe56c,	// (0x0003ef77) loc_type_pane_t1

0xe57e,	// (0x0003ef89) loc_type_pane_t2_ParamLimits

0xe57e,	// (0x0003ef89) loc_type_pane_t2

0xe590,	// (0x0003ef9b) loc_type_pane_t3_ParamLimits

0xe590,	// (0x0003ef9b) loc_type_pane_t3

0x0002,

0xf334,	// (0x0003fd3f) loc_type_pane_t_ParamLimits

0xf334,	// (0x0003fd3f) loc_type_pane_t

0xe5a2,	// (0x0003efad) list_loc_req_pane

0xe5ac,	// (0x0003efb7) scroll_pane_cp012

0x7fb8,	// (0x000389c3) list_single_loc_request_popup_menu_pane_ParamLimits

0x7fb8,	// (0x000389c3) list_single_loc_request_popup_menu_pane

0xe5b7,	// (0x0003efc2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe5b7,	// (0x0003efc2) list_single_loc_request_popup_menu_pane_g1

0xe5c3,	// (0x0003efce) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe5c3,	// (0x0003efce) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0003fd46) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0003fd46) list_single_loc_request_popup_menu_pane_g

0xe5cf,	// (0x0003efda) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe5cf,	// (0x0003efda) list_single_loc_request_popup_menu_pane_t1

0x7fca,	// (0x000389d5) bg_popup_window_pane_cp03_ParamLimits

0x7fca,	// (0x000389d5) bg_popup_window_pane_cp03

0x7fd8,	// (0x000389e3) heading_loc_req_pane_ParamLimits

0x7fd8,	// (0x000389e3) heading_loc_req_pane

0x7fe4,	// (0x000389ef) popup_dyc_status_message_window_g1_ParamLimits

0x7fe4,	// (0x000389ef) popup_dyc_status_message_window_g1

0x7ff0,	// (0x000389fb) popup_dyc_status_message_window_t1_ParamLimits

0x7ff0,	// (0x000389fb) popup_dyc_status_message_window_t1

0x8002,	// (0x00038a0d) popup_dyc_status_message_window_t2_ParamLimits

0x8002,	// (0x00038a0d) popup_dyc_status_message_window_t2

0x8014,	// (0x00038a1f) popup_dyc_status_message_window_t3_ParamLimits

0x8014,	// (0x00038a1f) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0003fd4b) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0003fd4b) popup_dyc_status_message_window_t

0xdc5e,	// (0x0003e669) bg_heading_pane_cp01

0xe5e5,	// (0x0003eff0) heading_loc_req_pane_g1

0xe5ed,	// (0x0003eff8) heading_loc_req_pane_g2

0xe5f5,	// (0x0003f000) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0003fd52) heading_loc_req_pane_g

0xe5fd,	// (0x0003f008) heading_loc_req_pane_t1

0xe60d,	// (0x0003f018) bg_popup_sub_pane_cp01_ParamLimits

0xe60d,	// (0x0003f018) bg_popup_sub_pane_cp01

0xe61b,	// (0x0003f026) popup_cale_events_window_g1_ParamLimits

0xe61b,	// (0x0003f026) popup_cale_events_window_g1

0xe63b,	// (0x0003f046) popup_cale_events_window_g2_ParamLimits

0xe63b,	// (0x0003f046) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0003fd86) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0003fd86) popup_cale_events_window_g

0xe65b,	// (0x0003f066) popup_cale_events_window_t1_ParamLimits

0xe65b,	// (0x0003f066) popup_cale_events_window_t1

0xe66d,	// (0x0003f078) popup_cale_events_window_t2_ParamLimits

0xe66d,	// (0x0003f078) popup_cale_events_window_t2

0xe6ab,	// (0x0003f0b6) popup_cale_events_window_t3_ParamLimits

0xe6ab,	// (0x0003f0b6) popup_cale_events_window_t3

0xe6e5,	// (0x0003f0f0) popup_cale_events_window_t4_ParamLimits

0xe6e5,	// (0x0003f0f0) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0003fd8b) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0003fd8b) popup_cale_events_window_t

0x803e,	// (0x00038a49) call_type_pane

0xe71b,	// (0x0003f126) popup_call_status_window_g1

0x804a,	// (0x00038a55) popup_call_status_window_g2

0x8056,	// (0x00038a61) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0003fd94) popup_call_status_window_g

0xe729,	// (0x0003f134) call_type_pane_g1

0xe732,	// (0x0003f13d) call_type_pane_g2

0x0001,

0xf390,	// (0x0003fd9b) call_type_pane_g

0xdc5e,	// (0x0003e669) bg_popup_sub_pane_cp02

0xe73b,	// (0x0003f146) listscroll_popup_wml_pane

0xe743,	// (0x0003f14e) list_wml_pane

0xe74d,	// (0x0003f158) scroll_pane_cp013

0xe758,	// (0x0003f163) list_single_graphic_popup_wml_pane_ParamLimits

0xe758,	// (0x0003f163) list_single_graphic_popup_wml_pane

0xdfd9,	// (0x0003e9e4) list_single_graphic_popup_wml_pane_g1

0xe76c,	// (0x0003f177) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0003fda0) list_single_graphic_popup_wml_pane_g

0xe774,	// (0x0003f17f) list_single_graphic_popup_wml_pane_t1

0xe78a,	// (0x0003f195) aid_call_pane

0xdeb1,	// (0x0003e8bc) popup_clock_analogue_window_g1

0xdeb1,	// (0x0003e8bc) popup_clock_analogue_window_g2

0x8062,	// (0x00038a6d) popup_clock_analogue_window_g3

0x8062,	// (0x00038a6d) popup_clock_analogue_window_g4

0xdfd9,	// (0x0003e9e4) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0003fda5) popup_clock_analogue_window_g

0x806a,	// (0x00038a75) popup_clock_analogue_window_t1

0x8078,	// (0x00038a83) clock_digital_number_pane_ParamLimits

0x8078,	// (0x00038a83) clock_digital_number_pane

0x8084,	// (0x00038a8f) clock_digital_number_pane_cp02_ParamLimits

0x8084,	// (0x00038a8f) clock_digital_number_pane_cp02

0x8090,	// (0x00038a9b) clock_digital_number_pane_cp03_ParamLimits

0x8090,	// (0x00038a9b) clock_digital_number_pane_cp03

0x809c,	// (0x00038aa7) clock_digital_number_pane_cp04_ParamLimits

0x809c,	// (0x00038aa7) clock_digital_number_pane_cp04

0x80a8,	// (0x00038ab3) clock_digital_separator_pane_ParamLimits

0x80a8,	// (0x00038ab3) clock_digital_separator_pane

0x80b4,	// (0x00038abf) popup_clock_digital_window_t1

0xdfd9,	// (0x0003e9e4) clock_digital_number_pane_g1

0xdfd9,	// (0x0003e9e4) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0003fd13) clock_digital_number_pane_g

0xdfd9,	// (0x0003e9e4) clock_digital_separator_pane_g1

0xdfd9,	// (0x0003e9e4) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0003fd13) clock_digital_separator_pane_g

0xdc5e,	// (0x0003e669) bg_popup_window_pane_cp04

0xe792,	// (0x0003f19d) heading_pane_cp03

0xe79a,	// (0x0003f1a5) listscroll_popup_gms_pane

0xe7a2,	// (0x0003f1ad) grid_large_graphic_popup_pane

0xe7ac,	// (0x0003f1b7) listscroll_popup_gms_pane_g1

0xe7b4,	// (0x0003f1bf) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0003fdb0) listscroll_popup_gms_pane_g

0xe2e6,	// (0x0003ecf1) scroll_pane_cp014

0x80d1,	// (0x00038adc) cell_large_graphic_popup_pane_ParamLimits

0x80d1,	// (0x00038adc) cell_large_graphic_popup_pane

0x80eb,	// (0x00038af6) cell_large_graphic_popup_pane_g1_ParamLimits

0x80eb,	// (0x00038af6) cell_large_graphic_popup_pane_g1

0xe7bc,	// (0x0003f1c7) cell_large_graphic_popup_pane_g2_ParamLimits

0xe7bc,	// (0x0003f1c7) cell_large_graphic_popup_pane_g2

0xe7c8,	// (0x0003f1d3) cell_large_graphic_popup_pane_g3_ParamLimits

0xe7c8,	// (0x0003f1d3) cell_large_graphic_popup_pane_g3

0xe7d5,	// (0x0003f1e0) cell_large_graphic_popup_pane_g4_ParamLimits

0xe7d5,	// (0x0003f1e0) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0003fdb5) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0003fdb5) cell_large_graphic_popup_pane_g

0xe7e5,	// (0x0003f1f0) grid_highlight_pane_cp010

0xdfd9,	// (0x0003e9e4) bg_popup_call_pane_g1

0xe7ef,	// (0x0003f1fa) list_single_graphic_popup_conf_pane_ParamLimits

0xe7ef,	// (0x0003f1fa) list_single_graphic_popup_conf_pane

0xe801,	// (0x0003f20c) list_highlight_pane_cp01

0xe80a,	// (0x0003f215) list_single_graphic_popup_conf_pane_g1

0xe812,	// (0x0003f21d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0003fdbe) list_single_graphic_popup_conf_pane_g

0xe81a,	// (0x0003f225) list_single_graphic_popup_conf_pane_t1

0xe828,	// (0x0003f233) linegrid_cams_pane_g1

0x80f7,	// (0x00038b02) linegrid_cams_pane_g2

0xe117,	// (0x0003eb22) linegrid_cams_pane_g3

0xe831,	// (0x0003f23c) linegrid_cams_pane_g4

0x8100,	// (0x00038b0b) linegrid_cams_pane_g5

0x8109,	// (0x00038b14) linegrid_cams_pane_g6

0xe120,	// (0x0003eb2b) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0003fdc3) linegrid_cams_pane_g

0xe83a,	// (0x0003f245) popup_clock_analogue_window

0xe83a,	// (0x0003f245) popup_clock_digital_window

0xdc5e,	// (0x0003e669) popup_phob_thumbnail_window

0xdfd9,	// (0x0003e9e4) call_video_uplink_pane_g1

0xe843,	// (0x0003f24e) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0003fdd2) call_video_uplink_pane_g

0xe84b,	// (0x0003f256) video_uplink_pane

0xe853,	// (0x0003f25e) mce_image_pane_g1

0x8114,	// (0x00038b1f) mce_image_pane_g2

0x811e,	// (0x00038b29) mce_image_pane_g3

0x8128,	// (0x00038b33) mce_image_pane_g4

0x8130,	// (0x00038b3b) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0003fdd7) mce_image_pane_g

0xe85d,	// (0x0003f268) control_top_pane_stacon_cp01_ParamLimits

0xe85d,	// (0x0003f268) control_top_pane_stacon_cp01

0xe871,	// (0x0003f27c) uni_indicator_pane_stacon_cp01_ParamLimits

0xe871,	// (0x0003f27c) uni_indicator_pane_stacon_cp01

0xe882,	// (0x0003f28d) bg_popup_sub_pane_cp03

0x8138,	// (0x00038b43) chi_dic_find_pane

0x8140,	// (0x00038b4b) listscroll_chi_dic_pane

0x8149,	// (0x00038b54) main_pane_chidic_g1

0x815c,	// (0x00038b67) chi_dic_find_pane_t1

0xe88c,	// (0x0003f297) find_chidic_pane

0xe895,	// (0x0003f2a0) chi_dic_list_pane_ParamLimits

0xe895,	// (0x0003f2a0) chi_dic_list_pane

0xe8a6,	// (0x0003f2b1) scroll_pane_cp020

0x816a,	// (0x00038b75) find_chidic_pane_t1

0xdc5e,	// (0x0003e669) input_focus_pane_cp06

0x8179,	// (0x00038b84) list_chi_dic_pane_ParamLimits

0x8179,	// (0x00038b84) list_chi_dic_pane

0x8191,	// (0x00038b9c) list_chi_dic_pane_t1_ParamLimits

0x8191,	// (0x00038b9c) list_chi_dic_pane_t1

0xdc5e,	// (0x0003e669) list_highlight_pane_cp020

0xe8ae,	// (0x0003f2b9) bg_cale_heading_pane_g1

0x81a4,	// (0x00038baf) bg_cale_heading_pane_g2

0x81ac,	// (0x00038bb7) bg_cale_heading_pane_g3

0x81b4,	// (0x00038bbf) bg_cale_heading_pane_g4

0x81be,	// (0x00038bc9) bg_cale_heading_pane_g5

0x81c8,	// (0x00038bd3) bg_cale_heading_pane_g6

0x81d0,	// (0x00038bdb) bg_cale_heading_pane_g7

0x81d8,	// (0x00038be3) bg_cale_heading_pane_g8

0x81e2,	// (0x00038bed) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0003fde2) bg_cale_heading_pane_g

0xe8ae,	// (0x0003f2b9) bg_cale_side_pane_g1

0x81ec,	// (0x00038bf7) bg_cale_side_pane_g2

0x81f4,	// (0x00038bff) bg_cale_side_pane_g3

0x81fc,	// (0x00038c07) bg_cale_side_pane_g4

0x8204,	// (0x00038c0f) bg_cale_side_pane_g5

0x820c,	// (0x00038c17) bg_cale_side_pane_g6

0x8214,	// (0x00038c1f) bg_cale_side_pane_g7

0x821c,	// (0x00038c27) bg_cale_side_pane_g8

0x8224,	// (0x00038c2f) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0003fdf5) bg_cale_side_pane_g

0x822c,	// (0x00038c37) popup_call_status_window_ParamLimits

0x822c,	// (0x00038c37) popup_call_status_window

0xe8b6,	// (0x0003f2c1) stacon_top_pane

0xe8be,	// (0x0003f2c9) status_pane_ParamLimits

0xe8be,	// (0x0003f2c9) status_pane

0xe8d3,	// (0x0003f2de) status_small_pane

0xe8db,	// (0x0003f2e6) control_pane

0xdc5e,	// (0x0003e669) stacon_bottom_pane

0xe8e3,	// (0x0003f2ee) list_single_mce_smart_pane_t1_ParamLimits

0xe8e3,	// (0x0003f2ee) list_single_mce_smart_pane_t1

0xe8f6,	// (0x0003f301) list_single_mce_smart_pane_t2_ParamLimits

0xe8f6,	// (0x0003f301) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0003fe08) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0003fe08) list_single_mce_smart_pane_t

0x8238,	// (0x00038c43) compass_pane

0x8243,	// (0x00038c4e) main_location2_pane_t1

0x8257,	// (0x00038c62) main_location2_pane_t2

0x8257,	// (0x00038c62) main_location2_pane_t3

0x0003,

0xf402,	// (0x0003fe0d) main_location2_pane_t

0xe915,	// (0x0003f320) compass_pane_g1_ParamLimits

0xe915,	// (0x0003f320) compass_pane_g1

0x82a1,	// (0x00038cac) compass_pane_t1

0x82b0,	// (0x00038cbb) compass_pane_t2

0x0005,

0xf40b,	// (0x0003fe16) compass_pane_t

0x82fb,	// (0x00038d06) text_secondary_cp61

0xe929,	// (0x0003f334) navi_pane_cams_g5

0xe94c,	// (0x0003f357) navi_pane_im_t1

0xe95a,	// (0x0003f365) navi_pane_mp_g1_ParamLimits

0xe95a,	// (0x0003f365) navi_pane_mp_g1

0xe96e,	// (0x0003f379) navi_pane_mp_g2_ParamLimits

0xe96e,	// (0x0003f379) navi_pane_mp_g2

0xe97a,	// (0x0003f385) navi_pane_mp_g3_ParamLimits

0xe97a,	// (0x0003f385) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0003fe2a) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0003fe2a) navi_pane_mp_g

0xe986,	// (0x0003f391) navi_pane_mp_t1

0xe994,	// (0x0003f39f) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0003fe31) navi_pane_mp_t

0xe9d0,	// (0x0003f3db) navi_pane_vt_g1

0xe986,	// (0x0003f391) navi_pane_vt_t1

0xe9d8,	// (0x0003f3e3) navi_slider_pane

0xe9e0,	// (0x0003f3eb) zooming_pane

0xe9e8,	// (0x0003f3f3) navi_slider_pane_g1

0x8412,	// (0x00038e1d) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0003fe38) navi_slider_pane_g

0xea0c,	// (0x0003f417) aid_levels_zoom

0xea14,	// (0x0003f41f) zooming_pane_g1

0xea1c,	// (0x0003f427) zooming_pane_g2

0xea1c,	// (0x0003f427) zooming_pane_g3

0x0002,

0xf43c,	// (0x0003fe47) zooming_pane_g

0xea24,	// (0x0003f42f) level_10_zoom

0xea2d,	// (0x0003f438) level_11_zoom

0xea36,	// (0x0003f441) level_1_zoom

0xea3f,	// (0x0003f44a) level_2_zoom

0xea48,	// (0x0003f453) level_3_zoom

0xea51,	// (0x0003f45c) level_4_zoom

0xea5a,	// (0x0003f465) level_5_zoom

0xea63,	// (0x0003f46e) level_6_zoom

0xea6c,	// (0x0003f477) level_7_zoom

0xea75,	// (0x0003f480) level_8_zoom

0xea7e,	// (0x0003f489) level_9_zoom

0xea8f,	// (0x0003f49a) popup_phob_thumbnail_window_g1

0xea97,	// (0x0003f4a2) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0003fe4e) popup_phob_thumbnail_window_g

0x0d1e,	// (0x00031729) level_1_location

0x0d26,	// (0x00031731) level_2_location

0x0d2e,	// (0x00031739) level_3_location

0x0d36,	// (0x00031741) level_4_location

0xe9e0,	// (0x0003f3eb) level_5_location

0x8424,	// (0x00038e2f) mce_icon_pane_g1

0x842c,	// (0x00038e37) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0003fe53) mce_icon_pane_g

0x8434,	// (0x00038e3f) main_mup_pane_g1_ParamLimits

0x8434,	// (0x00038e3f) main_mup_pane_g1

0x844c,	// (0x00038e57) main_mup_pane_g2_ParamLimits

0x844c,	// (0x00038e57) main_mup_pane_g2

0x8468,	// (0x00038e73) main_mup_pane_g3_ParamLimits

0x8468,	// (0x00038e73) main_mup_pane_g3

0x8484,	// (0x00038e8f) main_mup_pane_g4_ParamLimits

0x8484,	// (0x00038e8f) main_mup_pane_g4

0x8498,	// (0x00038ea3) main_mup_pane_g5_ParamLimits

0x8498,	// (0x00038ea3) main_mup_pane_g5

0x84b9,	// (0x00038ec4) main_mup_pane_g6_ParamLimits

0x84b9,	// (0x00038ec4) main_mup_pane_g6

0x84d9,	// (0x00038ee4) main_mup_pane_g7_ParamLimits

0x84d9,	// (0x00038ee4) main_mup_pane_g7

0x84fd,	// (0x00038f08) main_mup_pane_g8_ParamLimits

0x84fd,	// (0x00038f08) main_mup_pane_g8

0x8521,	// (0x00038f2c) main_mup_pane_g9_ParamLimits

0x8521,	// (0x00038f2c) main_mup_pane_g9

0x8544,	// (0x00038f4f) main_mup_pane_g10_ParamLimits

0x8544,	// (0x00038f4f) main_mup_pane_g10

0x8567,	// (0x00038f72) main_mup_pane_g11_ParamLimits

0x8567,	// (0x00038f72) main_mup_pane_g11

0x8587,	// (0x00038f92) main_mup_pane_g12_ParamLimits

0x8587,	// (0x00038f92) main_mup_pane_g12

0x8595,	// (0x00038fa0) main_mup_pane_g13_ParamLimits

0x8595,	// (0x00038fa0) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0003fe58) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0003fe58) main_mup_pane_g

0x85ab,	// (0x00038fb6) main_mup_pane_t1_ParamLimits

0x85ab,	// (0x00038fb6) main_mup_pane_t1

0x85ca,	// (0x00038fd5) main_mup_pane_t2_ParamLimits

0x85ca,	// (0x00038fd5) main_mup_pane_t2

0x85e4,	// (0x00038fef) main_mup_pane_t3_ParamLimits

0x85e4,	// (0x00038fef) main_mup_pane_t3

0x85fe,	// (0x00039009) main_mup_pane_t4_ParamLimits

0x85fe,	// (0x00039009) main_mup_pane_t4

0x8610,	// (0x0003901b) main_mup_pane_t5_ParamLimits

0x8610,	// (0x0003901b) main_mup_pane_t5

0x8622,	// (0x0003902d) main_mup_pane_t6_ParamLimits

0x8622,	// (0x0003902d) main_mup_pane_t6

0x0005,

0xf468,	// (0x0003fe73) main_mup_pane_t_ParamLimits

0xf468,	// (0x0003fe73) main_mup_pane_t

0x8638,	// (0x00039043) mup_progress_pane_ParamLimits

0x8638,	// (0x00039043) mup_progress_pane

0x8644,	// (0x0003904f) mup_visualizer_pane_ParamLimits

0x8644,	// (0x0003904f) mup_visualizer_pane

0x8682,	// (0x0003908d) mup_volume_pane_ParamLimits

0x8682,	// (0x0003908d) mup_volume_pane

0xe71b,	// (0x0003f126) mup_visualizer_pane_g1_ParamLimits

0xe71b,	// (0x0003f126) mup_visualizer_pane_g1

0xe71b,	// (0x0003f126) mup_visualizer_pane_g2_ParamLimits

0xe71b,	// (0x0003f126) mup_visualizer_pane_g2

0xe915,	// (0x0003f320) mup_visualizer_pane_g3_ParamLimits

0xe915,	// (0x0003f320) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0003fe80) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0003fe80) mup_visualizer_pane_g

0xdfd9,	// (0x0003e9e4) mup_volume_pane_g1

0xeaa7,	// (0x0003f4b2) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0003fe87) mup_volume_pane_g

0xdfd9,	// (0x0003e9e4) mup_progress_pane_g1

0xeab0,	// (0x0003f4bb) mup_progress_pane_g2

0xeab9,	// (0x0003f4c4) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0003fe8c) mup_progress_pane_g

0xdc5e,	// (0x0003e669) bg_popup_window_pane_cp05

0xeac2,	// (0x0003f4cd) heading_pane_cp02_ParamLimits

0xeac2,	// (0x0003f4cd) heading_pane_cp02

0xeade,	// (0x0003f4e9) list_popup_blid_pane

0xeae6,	// (0x0003f4f1) list_blid_sat_info_pane_ParamLimits

0xeae6,	// (0x0003f4f1) list_blid_sat_info_pane

0xeaf9,	// (0x0003f504) list_blid_sat_info_pane_g1

0xeb01,	// (0x0003f50c) list_blid_sat_info_pane_t1

0x87a1,	// (0x000391ac) mup_equalizer_pane_ParamLimits

0x87a1,	// (0x000391ac) mup_equalizer_pane

0x87c2,	// (0x000391cd) mup_equalizer_pane_cp1_ParamLimits

0x87c2,	// (0x000391cd) mup_equalizer_pane_cp1

0x87e3,	// (0x000391ee) mup_equalizer_pane_cp2_ParamLimits

0x87e3,	// (0x000391ee) mup_equalizer_pane_cp2

0x8804,	// (0x0003920f) mup_equalizer_pane_cp3_ParamLimits

0x8804,	// (0x0003920f) mup_equalizer_pane_cp3

0x8829,	// (0x00039234) mup_equalizer_pane_cp4_ParamLimits

0x8829,	// (0x00039234) mup_equalizer_pane_cp4

0x884e,	// (0x00039259) mup_equalizer_pane_cp5

0x8866,	// (0x00039271) mup_equalizer_pane_cp6

0x887e,	// (0x00039289) mup_equalizer_pane_cp7

0x0c38,	// (0x00031643) bg_popup_call_poc_act_pane_g9

0x0c40,	// (0x0003164b) bg_popup_call_poc_act_pane_g10

0x0c48,	// (0x00031653) bg_popup_call_poc_act_pane_g11

0x000a,

0xdeb9,	// (0x0003e8c4) mup_scale_pane

0xdfd9,	// (0x0003e9e4) mup_scale_pane_g1

0xeb0f,	// (0x0003f51a) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0003fea8) mup_scale_pane_g

0xeb33,	// (0x0003f53e) msg_data_pane

0xeb3b,	// (0x0003f546) scroll_pane_cp017

0x51e2,	// (0x00035bed) bg_list_pane_cp04_ParamLimits

0x51e2,	// (0x00035bed) bg_list_pane_cp04

0xeb43,	// (0x0003f54e) msg_data_pane_g1

0x88a8,	// (0x000392b3) msg_data_pane_g2

0x88b2,	// (0x000392bd) msg_data_pane_g3

0x88bc,	// (0x000392c7) msg_data_pane_g4

0x88c4,	// (0x000392cf) msg_data_pane_g5

0x88cc,	// (0x000392d7) msg_data_pane_g6

0x88d4,	// (0x000392df) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0003feb7) msg_data_pane_g

0x5208,	// (0x00035c13) msg_text_pane_ParamLimits

0x5208,	// (0x00035c13) msg_text_pane

0x88dc,	// (0x000392e7) qrid_highlight_pane_cp011_ParamLimits

0x88dc,	// (0x000392e7) qrid_highlight_pane_cp011

0xdc5e,	// (0x0003e669) msg_body_pane

0xdc5e,	// (0x0003e669) msg_header_pane

0xeb54,	// (0x0003f55f) input_focus_pane_cp07

0x5247,	// (0x00035c52) msg_header_pane_t1_ParamLimits

0x5247,	// (0x00035c52) msg_header_pane_t1

0x525b,	// (0x00035c66) msg_header_pane_t2_ParamLimits

0x525b,	// (0x00035c66) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0003fecb) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0003fecb) msg_header_pane_t

0xeb69,	// (0x0003f574) msg_body_pane_g1

0x526d,	// (0x00035c78) msg_body_pane_t1_ParamLimits

0x526d,	// (0x00035c78) msg_body_pane_t1

0x529e,	// (0x00035ca9) msg_body_pane_t2_ParamLimits

0x529e,	// (0x00035ca9) msg_body_pane_t2

0x52b0,	// (0x00035cbb) msg_body_pane_t3_ParamLimits

0x52b0,	// (0x00035cbb) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0003fed0) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0003fed0) msg_body_pane_t

0x8944,	// (0x0003934f) main_viewer_pane_g1_ParamLimits

0x8944,	// (0x0003934f) main_viewer_pane_g1

0x8950,	// (0x0003935b) main_viewer_pane_g2_ParamLimits

0x8950,	// (0x0003935b) main_viewer_pane_g2

0x895c,	// (0x00039367) main_viewer_pane_g3_ParamLimits

0x895c,	// (0x00039367) main_viewer_pane_g3

0x896d,	// (0x00039378) main_viewer_pane_g4_ParamLimits

0x896d,	// (0x00039378) main_viewer_pane_g4

0x897e,	// (0x00039389) main_viewer_pane_g5_ParamLimits

0x897e,	// (0x00039389) main_viewer_pane_g5

0x897e,	// (0x00039389) main_viewer_pane_g7_ParamLimits

0x897e,	// (0x00039389) main_viewer_pane_g7

0x8990,	// (0x0003939b) main_viewer_pane_g8_ParamLimits

0x8990,	// (0x0003939b) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0003fee0) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0003fee0) main_viewer_pane_g

0xeb71,	// (0x0003f57c) viewer_content_pane_ParamLimits

0xeb71,	// (0x0003f57c) viewer_content_pane

0x89c8,	// (0x000393d3) main_postcard_pane_g1_ParamLimits

0x89c8,	// (0x000393d3) main_postcard_pane_g1

0x89d6,	// (0x000393e1) main_postcard_pane_g2_ParamLimits

0x89d6,	// (0x000393e1) main_postcard_pane_g2

0x89e4,	// (0x000393ef) main_postcard_pane_g3_ParamLimits

0x89e4,	// (0x000393ef) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0003fef1) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0003fef1) main_postcard_pane_g

0x89f4,	// (0x000393ff) main_postcard_pane_g4

0x0e55,	// (0x00031860) smil_status_volume_pane_g2

0x8a20,	// (0x0003942b) postcard_pane_ParamLimits

0x8a20,	// (0x0003942b) postcard_pane

0xe71b,	// (0x0003f126) postcard_pane_g1_ParamLimits

0xe71b,	// (0x0003f126) postcard_pane_g1

0x8a5a,	// (0x00039465) postcard_pane_g2_ParamLimits

0x8a5a,	// (0x00039465) postcard_pane_g2

0x8a66,	// (0x00039471) postcard_pane_g3_ParamLimits

0x8a66,	// (0x00039471) postcard_pane_g3

0xeb7f,	// (0x0003f58a) postcard_pane_g4_ParamLimits

0xeb7f,	// (0x0003f58a) postcard_pane_g4

0x8a72,	// (0x0003947d) postcard_pane_g5_ParamLimits

0x8a72,	// (0x0003947d) postcard_pane_g5

0x8a7e,	// (0x00039489) postcard_pane_g6_ParamLimits

0x8a7e,	// (0x00039489) postcard_pane_g6

0xeb8d,	// (0x0003f598) postcard_pane_g7_ParamLimits

0xeb8d,	// (0x0003f598) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0003fefe) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0003fefe) postcard_pane_g

0x8a8c,	// (0x00039497) main_mp2_pane_g1_ParamLimits

0x8a8c,	// (0x00039497) main_mp2_pane_g1

0x8a9a,	// (0x000394a5) main_mp2_pane_g2_ParamLimits

0x8a9a,	// (0x000394a5) main_mp2_pane_g2

0x8aa6,	// (0x000394b1) main_mp2_pane_g3_ParamLimits

0x8aa6,	// (0x000394b1) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0003ff0d) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0003ff0d) main_mp2_pane_g

0x8ab2,	// (0x000394bd) main_mp2_pane_t1_ParamLimits

0x8ab2,	// (0x000394bd) main_mp2_pane_t1

0x8ac9,	// (0x000394d4) main_mp2_pane_t2_ParamLimits

0x8ac9,	// (0x000394d4) main_mp2_pane_t2

0x8add,	// (0x000394e8) main_mp2_pane_t3_ParamLimits

0x8add,	// (0x000394e8) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0003ff14) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0003ff14) main_mp2_pane_t

0xeb9b,	// (0x0003f5a6) pec_content_pane_ParamLimits

0xeb9b,	// (0x0003f5a6) pec_content_pane

0xe2e6,	// (0x0003ecf1) scroll_pane_cp015

0xebad,	// (0x0003f5b8) pec_attribute_pane_ParamLimits

0xebad,	// (0x0003f5b8) pec_attribute_pane

0x8aef,	// (0x000394fa) pec_content_pane_g1_ParamLimits

0x8aef,	// (0x000394fa) pec_content_pane_g1

0xebbd,	// (0x0003f5c8) pec_content_pane_t1_ParamLimits

0xebbd,	// (0x0003f5c8) pec_content_pane_t1

0xebcf,	// (0x0003f5da) pec_content_pane_t2_ParamLimits

0xebcf,	// (0x0003f5da) pec_content_pane_t2

0x0001,

0xf510,	// (0x0003ff1b) pec_content_pane_t_ParamLimits

0xf510,	// (0x0003ff1b) pec_content_pane_t

0x8afb,	// (0x00039506) list_single_graphic_pane_cp01_ParamLimits

0x8afb,	// (0x00039506) list_single_graphic_pane_cp01

0xdeb9,	// (0x0003e8c4) bg_popup_sub_pane_cp04

0xebe1,	// (0x0003f5ec) popup_mup_playback_window_g1

0xebed,	// (0x0003f5f8) popup_mup_playback_window_t1

0xec02,	// (0x0003f60d) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0003ff20) popup_mup_playback_window_t

0xec39,	// (0x0003f644) main_image_pane_g1_ParamLimits

0xec39,	// (0x0003f644) main_image_pane_g1

0xec7c,	// (0x0003f687) scroll_pane_cp018_ParamLimits

0xec7c,	// (0x0003f687) scroll_pane_cp018

0xec94,	// (0x0003f69f) scroll_pane_cp016_ParamLimits

0xec94,	// (0x0003f69f) scroll_pane_cp016

0x8b8c,	// (0x00039597) smil2_image_pane_ParamLimits

0x8b8c,	// (0x00039597) smil2_image_pane

0x8bc2,	// (0x000395cd) smil2_root_pane_ParamLimits

0x8bc2,	// (0x000395cd) smil2_root_pane

0x8bee,	// (0x000395f9) smil2_text_pane_ParamLimits

0x8bee,	// (0x000395f9) smil2_text_pane

0xdc5e,	// (0x0003e669) bg_list_pane_cp06

0xecd0,	// (0x0003f6db) grid_radio_pane

0xdc5e,	// (0x0003e669) bg_popup_window_pane_cp06

0xecda,	// (0x0003f6e5) main_fmradio_pane_t1

0xe792,	// (0x0003f19d) heading_pane_cp04

0xece8,	// (0x0003f6f3) main_fmradio_pane_t2

0x0c50,	// (0x0003165b) popup_cale_lunar_info_window_g1

0xecf6,	// (0x0003f701) main_fmradio_pane_t3

0x0c58,	// (0x00031663) popup_cale_lunar_info_window_g2

0xed06,	// (0x0003f711) main_fmradio_pane_t4

0x0001,

0xed14,	// (0x0003f71f) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0003fffb) popup_cale_lunar_info_window_g

0xf52a,	// (0x0003ff35) main_fmradio_pane_t

0xed22,	// (0x0003f72d) wait_bar_pane_cp03

0xed2a,	// (0x0003f735) cell_fmradio_pane_ParamLimits

0xed2a,	// (0x0003f735) cell_fmradio_pane

0xeb8d,	// (0x0003f598) cell_fmradio_pane_g1_ParamLimits

0xeb8d,	// (0x0003f598) cell_fmradio_pane_g1

0xdc5e,	// (0x0003e669) grid_highlight_pane_cp011

0xed3f,	// (0x0003f74a) poc_content_pane_ParamLimits

0xed3f,	// (0x0003f74a) poc_content_pane

0xed51,	// (0x0003f75c) scroll_pane_cp019

0x8c2e,	// (0x00039639) popup_call_poc_act_window_ParamLimits

0x8c2e,	// (0x00039639) popup_call_poc_act_window

0x8c3b,	// (0x00039646) popup_call_poc_inact_window_ParamLimits

0x8c3b,	// (0x00039646) popup_call_poc_inact_window

0xf5c7,	// (0x0003ffd2) bg_popup_call_poc_act_pane_g

0x0bc8,	// (0x000315d3) bg_popup_call_poc_inact_pane_g1

0x0bd0,	// (0x000315db) bg_popup_call_poc_inact_pane_g2

0xed59,	// (0x0003f764) popup_call_poc_act_window_g2

0x0bd8,	// (0x000315e3) bg_popup_call_poc_inact_pane_g3

0x0be0,	// (0x000315eb) bg_popup_call_poc_inact_pane_g4

0x0be8,	// (0x000315f3) bg_popup_call_poc_inact_pane_g5

0xed61,	// (0x0003f76c) popup_call_poc_act_window_t1_ParamLimits

0xed61,	// (0x0003f76c) popup_call_poc_act_window_t1

0xed89,	// (0x0003f794) popup_call_poc_act_window_t2_ParamLimits

0xed89,	// (0x0003f794) popup_call_poc_act_window_t2

0xedb1,	// (0x0003f7bc) popup_call_poc_act_window_t3_ParamLimits

0xedb1,	// (0x0003f7bc) popup_call_poc_act_window_t3

0xedd9,	// (0x0003f7e4) popup_call_poc_act_window_t4_ParamLimits

0xedd9,	// (0x0003f7e4) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0003ff40) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0003ff40) popup_call_poc_act_window_t

0x0bf0,	// (0x000315fb) bg_popup_call_poc_inact_pane_g6

0x0bf8,	// (0x00031603) bg_popup_call_poc_inact_pane_g7

0x0c00,	// (0x0003160b) bg_popup_call_poc_inact_pane_g8

0xedeb,	// (0x0003f7f6) popup_call_poc_inact_window_g2

0x0c08,	// (0x00031613) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0003ffbf) bg_popup_call_poc_inact_pane_g

0xedf3,	// (0x0003f7fe) popup_call_poc_inact_window_t1_ParamLimits

0xedf3,	// (0x0003f7fe) popup_call_poc_inact_window_t1

0xee08,	// (0x0003f813) popup_call_poc_inact_window_t2_ParamLimits

0xee08,	// (0x0003f813) popup_call_poc_inact_window_t2

0xee1d,	// (0x0003f828) popup_call_poc_inact_window_t3_ParamLimits

0xee1d,	// (0x0003f828) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0003ff49) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0003ff49) popup_call_poc_inact_window_t

0x0dc8,	// (0x000317d3) context_pane_ParamLimits

0x924d,	// (0x00039c58) signal_pane_ParamLimits

0xe9e0,	// (0x0003f3eb) main_call2_pane

0x0db6,	// (0x000317c1) popup_phob_thumbnail2_window_ParamLimits

0x0db6,	// (0x000317c1) popup_phob_thumbnail2_window

0x88f2,	// (0x000392fd) aid_hotspot_pointer_arrow_pane

0x88fa,	// (0x00039305) aid_hotspot_pointer_hand_pane

0x8f63,	// (0x0003996e) phob_pre_status_pane_g5

0x6ef6,	// (0x00037901) cams_zoom_pane_ParamLimits

0x6f02,	// (0x0003790d) image_vga_pane_ParamLimits

0x6f11,	// (0x0003791c) main_camera_pane_g1_ParamLimits

0x6f1f,	// (0x0003792a) main_camera_pane_g2_ParamLimits

0x6f2b,	// (0x00037936) main_camera_pane_g3_ParamLimits

0x6f39,	// (0x00037944) main_camera_pane_g4_ParamLimits

0x6f47,	// (0x00037952) main_camera_pane_g5_ParamLimits

0x6f55,	// (0x00037960) main_camera_pane_g6_ParamLimits

0x6f63,	// (0x0003796e) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0003fc48) main_camera_pane_g_ParamLimits

0x6f71,	// (0x0003797c) main_camera_pane_t1_ParamLimits

0x6f83,	// (0x0003798e) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0003fc59) main_camera_pane_t_ParamLimits

0xdeb9,	// (0x0003e8c4) bg_popup_preview_window_pane_cp01_ParamLimits

0xdeb9,	// (0x0003e8c4) bg_popup_preview_window_pane_cp01

0xee32,	// (0x0003f83d) popup_phob_thumbnail2_window_g1_ParamLimits

0xee32,	// (0x0003f83d) popup_phob_thumbnail2_window_g1

0xdc5e,	// (0x0003e669) call2_cli_visual_pane

0x8c57,	// (0x00039662) popup_call2_audio_conf_window_ParamLimits

0x8c57,	// (0x00039662) popup_call2_audio_conf_window

0x8c70,	// (0x0003967b) popup_call2_audio_first_window_ParamLimits

0x8c70,	// (0x0003967b) popup_call2_audio_first_window

0x8d0e,	// (0x00039719) popup_call2_audio_in_window_ParamLimits

0x8d0e,	// (0x00039719) popup_call2_audio_in_window

0x8d52,	// (0x0003975d) popup_call2_audio_out_window_ParamLimits

0x8d52,	// (0x0003975d) popup_call2_audio_out_window

0x8dbc,	// (0x000397c7) popup_call2_audio_second_window_ParamLimits

0x8dbc,	// (0x000397c7) popup_call2_audio_second_window

0x8e1a,	// (0x00039825) popup_call2_audio_wait_window_ParamLimits

0x8e1a,	// (0x00039825) popup_call2_audio_wait_window

0xdc5e,	// (0x0003e669) bg_popup_call2_act_pane_cp03

0xde9b,	// (0x0003e8a6) list_conf_pane_cp

0xee3e,	// (0x0003f849) popup_call2_audio_conf_window_t1

0xee4c,	// (0x0003f857) list_single_graphic_popup_conf2_pane_ParamLimits

0xee4c,	// (0x0003f857) list_single_graphic_popup_conf2_pane

0xe801,	// (0x0003f20c) list_highlight_pane_cp04

0xee5f,	// (0x0003f86a) list_single_graphic_popup_conf2_pane_g1

0xe812,	// (0x0003f21d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0003ff50) list_single_graphic_popup_conf2_pane_g

0xee69,	// (0x0003f874) list_single_graphic_popup_conf2_pane_t1

0xee77,	// (0x0003f882) bg_popup_call2_act_pane_cp01_ParamLimits

0xee77,	// (0x0003f882) bg_popup_call2_act_pane_cp01

0xef01,	// (0x0003f90c) call_type_pane_cp05_ParamLimits

0xef01,	// (0x0003f90c) call_type_pane_cp05

0xef55,	// (0x0003f960) popup_call2_audio_second_window_g1_ParamLimits

0xef55,	// (0x0003f960) popup_call2_audio_second_window_g1

0xefa9,	// (0x0003f9b4) popup_call2_audio_second_window_g2_ParamLimits

0xefa9,	// (0x0003f9b4) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0003ff55) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0003ff55) popup_call2_audio_second_window_g

0xf00e,	// (0x0003fa19) popup_call2_audio_second_window_t1_ParamLimits

0xf00e,	// (0x0003fa19) popup_call2_audio_second_window_t1

0x0055,	// (0x00030a60) popup_call2_audio_second_window_t2_ParamLimits

0x0055,	// (0x00030a60) popup_call2_audio_second_window_t2

0x00a8,	// (0x00030ab3) popup_call2_audio_second_window_t3_ParamLimits

0x00a8,	// (0x00030ab3) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0003ff5c) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0003ff5c) popup_call2_audio_second_window_t

0xdc5e,	// (0x0003e669) bg_popup_call2_in_pane_cp02

0xdc68,	// (0x0003e673) call_type_pane_cp04

0xdc70,	// (0x0003e67b) popup_call2_audio_wait_window_g1

0xdc78,	// (0x0003e683) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0003fb35) popup_call2_audio_wait_window_g

0xdc80,	// (0x0003e68b) popup_call2_audio_wait_window_t3

0x019b,	// (0x00030ba6) bg_popup_call2_act_pane_ParamLimits

0x019b,	// (0x00030ba6) bg_popup_call2_act_pane

0x025b,	// (0x00030c66) call_type_pane_cp03_ParamLimits

0x025b,	// (0x00030c66) call_type_pane_cp03

0x02bf,	// (0x00030cca) popup_call2_audio_first_window_g1_ParamLimits

0x02bf,	// (0x00030cca) popup_call2_audio_first_window_g1

0x032f,	// (0x00030d3a) popup_call2_audio_first_window_g2_ParamLimits

0x032f,	// (0x00030d3a) popup_call2_audio_first_window_g2

0xe71b,	// (0x0003f126) popup_call2_audio_first_window_g3_ParamLimits

0xe71b,	// (0x0003f126) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0003ff65) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0003ff65) popup_call2_audio_first_window_g

0x040d,	// (0x00030e18) popup_call2_audio_first_window_t1_ParamLimits

0x040d,	// (0x00030e18) popup_call2_audio_first_window_t1

0x0510,	// (0x00030f1b) popup_call2_audio_first_window_t4_ParamLimits

0x0510,	// (0x00030f1b) popup_call2_audio_first_window_t4

0x05f3,	// (0x00030ffe) popup_call2_audio_first_window_t5_ParamLimits

0x05f3,	// (0x00030ffe) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0003ff70) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0003ff70) popup_call2_audio_first_window_t

0xdeb1,	// (0x0003e8bc) bg_popup_call2_act_pane_g1

0x0c62,	// (0x0003166d) popup_cale_lunar_info_window_t1

0x0c70,	// (0x0003167b) popup_cale_lunar_info_window_t2

0x0c7e,	// (0x00031689) popup_cale_lunar_info_window_t3

0xdc5e,	// (0x0003e669) bg_popup_call2_bubble_pane

0x06f4,	// (0x000310ff) bg_popup_call2_in_pane_cp01_ParamLimits

0x06f4,	// (0x000310ff) bg_popup_call2_in_pane_cp01

0xd93a,	// (0x0003e345) call_type_pane_cp02

0x073c,	// (0x00031147) popup_call2_audio_out_window_g1_ParamLimits

0x073c,	// (0x00031147) popup_call2_audio_out_window_g1

0x0768,	// (0x00031173) popup_call2_audio_out_window_g2_ParamLimits

0x0768,	// (0x00031173) popup_call2_audio_out_window_g2

0x0790,	// (0x0003119b) popup_call2_audio_out_window_g3_ParamLimits

0x0790,	// (0x0003119b) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0003ff79) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0003ff79) popup_call2_audio_out_window_g

0x07cb,	// (0x000311d6) popup_call2_audio_out_window_t1_ParamLimits

0x07cb,	// (0x000311d6) popup_call2_audio_out_window_t1

0x082a,	// (0x00031235) popup_call2_audio_out_window_t2_ParamLimits

0x082a,	// (0x00031235) popup_call2_audio_out_window_t2

0x087e,	// (0x00031289) popup_call2_audio_out_window_t3_ParamLimits

0x087e,	// (0x00031289) popup_call2_audio_out_window_t3

0x0894,	// (0x0003129f) popup_call2_audio_out_window_t4_ParamLimits

0x0894,	// (0x0003129f) popup_call2_audio_out_window_t4

0x08aa,	// (0x000312b5) popup_call2_audio_out_window_t5_ParamLimits

0x08aa,	// (0x000312b5) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0003ff82) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0003ff82) popup_call2_audio_out_window_t

0x090e,	// (0x00031319) bg_popup_call2_in_pane_ParamLimits

0x090e,	// (0x00031319) bg_popup_call2_in_pane

0x096a,	// (0x00031375) popup_call2_audio_in_window_g1_ParamLimits

0x096a,	// (0x00031375) popup_call2_audio_in_window_g1

0x09a2,	// (0x000313ad) popup_call2_audio_in_window_g2_ParamLimits

0x09a2,	// (0x000313ad) popup_call2_audio_in_window_g2

0x09da,	// (0x000313e5) popup_call2_audio_in_window_g3_ParamLimits

0x09da,	// (0x000313e5) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0003ff8f) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0003ff8f) popup_call2_audio_in_window_g

0x0a32,	// (0x0003143d) popup_call2_audio_in_window_t1_ParamLimits

0x0a32,	// (0x0003143d) popup_call2_audio_in_window_t1

0x0ab2,	// (0x000314bd) popup_call2_audio_in_window_t2_ParamLimits

0x0ab2,	// (0x000314bd) popup_call2_audio_in_window_t2

0x0b32,	// (0x0003153d) popup_call2_audio_in_window_t3_ParamLimits

0x0b32,	// (0x0003153d) popup_call2_audio_in_window_t3

0x0b4c,	// (0x00031557) popup_call2_audio_in_window_t4_ParamLimits

0x0b4c,	// (0x00031557) popup_call2_audio_in_window_t4

0x0b5e,	// (0x00031569) popup_call2_audio_in_window_t5_ParamLimits

0x0b5e,	// (0x00031569) popup_call2_audio_in_window_t5

0x0b73,	// (0x0003157e) popup_call2_audio_in_window_t6_ParamLimits

0x0b73,	// (0x0003157e) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0003ff98) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0003ff98) popup_call2_audio_in_window_t

0xdeb1,	// (0x0003e8bc) bg_popup_call2_in_pane_g1

0x0c8c,	// (0x00031697) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x00040000) popup_cale_lunar_info_window_t

0xdeb9,	// (0x0003e8c4) bg_popup_call2_rect_pane_ParamLimits

0xdeb9,	// (0x0003e8c4) bg_popup_call2_rect_pane

0xdc5e,	// (0x0003e669) call2_cli_visual_graphic_pane

0xdc5e,	// (0x0003e669) call2_cli_visual_text_pane

0x92d2,	// (0x00039cdd) smil_status_volume_pane_g3

0x0002,

0xdfd9,	// (0x0003e9e4) call2_cli_visual_graphic_pane_g1

0xdfd9,	// (0x0003e9e4) call2_cli_visual_graphic_pane_g2

0xdfd9,	// (0x0003e9e4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0003ffa5) call2_cli_visual_graphic_pane_g

0x0b88,	// (0x00031593) bg_popup_call2_rect_pane_g1

0xe077,	// (0x0003ea82) bg_popup_call2_rect_pane_g2

0x0b90,	// (0x0003159b) bg_popup_call2_rect_pane_g3

0x0b98,	// (0x000315a3) bg_popup_call2_rect_pane_g4

0x0ba0,	// (0x000315ab) bg_popup_call2_rect_pane_g5

0x0ba8,	// (0x000315b3) bg_popup_call2_rect_pane_g6

0x0bb0,	// (0x000315bb) bg_popup_call2_rect_pane_g7

0x0bb8,	// (0x000315c3) bg_popup_call2_rect_pane_g8

0x0bc0,	// (0x000315cb) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0003ffac) bg_popup_call2_rect_pane_g

0x0bc8,	// (0x000315d3) bg_popup_call2_bubble_pane_g1

0x0bd0,	// (0x000315db) bg_popup_call2_bubble_pane_g2

0x0bd8,	// (0x000315e3) bg_popup_call2_bubble_pane_g3

0x0be0,	// (0x000315eb) bg_popup_call2_bubble_pane_g4

0x0be8,	// (0x000315f3) bg_popup_call2_bubble_pane_g5

0x0bf0,	// (0x000315fb) bg_popup_call2_bubble_pane_g6

0x0bf8,	// (0x00031603) bg_popup_call2_bubble_pane_g7

0x0c00,	// (0x0003160b) bg_popup_call2_bubble_pane_g8

0x0c08,	// (0x00031613) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0003ffbf) bg_popup_call2_bubble_pane_g

0x698d,	// (0x00037398) aid_cale_week_size_cell_pane

0x6f97,	// (0x000379a2) aid_cams_cif_uncrop_pane_ParamLimits

0x6f97,	// (0x000379a2) aid_cams_cif_uncrop_pane

0x70f4,	// (0x00037aff) aid_cams_size_cell_ParamLimits

0x70f4,	// (0x00037aff) aid_cams_size_cell

0x7100,	// (0x00037b0b) grid_cams_pane_ParamLimits

0x710e,	// (0x00037b19) linegrid_cams_pane_ParamLimits

0x71a6,	// (0x00037bb1) call_video_pane_t1

0x71bc,	// (0x00037bc7) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0003fcac) call_video_pane_t

0x7616,	// (0x00038021) aid_cale_month_size_cell_pane_ParamLimits

0x7616,	// (0x00038021) aid_cale_month_size_cell_pane

0xf63e,	// (0x00040049) smil_status_volume_pane_g

0x92df,	// (0x00039cea) volume_smil_pane_ParamLimits

0x613c,	// (0x00036b47) aid_popup2_width_pane

0x68a9,	// (0x000372b4) cell_qdial_pane_g4_ParamLimits

0x68a9,	// (0x000372b4) cell_qdial_pane_g4

0x827d,	// (0x00038c88) aid_blid_cardinal_pane_ParamLimits

0x828d,	// (0x00038c98) aid_blid_destination_pane_ParamLimits

0x828d,	// (0x00038c98) aid_blid_destination_pane

0xdeb9,	// (0x0003e8c4) bg_popup_call_poc_act_pane_ParamLimits

0xdeb9,	// (0x0003e8c4) bg_popup_call_poc_act_pane

0xdeb9,	// (0x0003e8c4) bg_popup_call_poc_inact_pane_ParamLimits

0xdeb9,	// (0x0003e8c4) bg_popup_call_poc_inact_pane

0x0c10,	// (0x0003161b) bg_popup_call_poc_act_pane_g1

0x0c18,	// (0x00031623) bg_popup_call_poc_act_pane_g2

0x0c20,	// (0x0003162b) bg_popup_call_poc_act_pane_g3

0x0be0,	// (0x000315eb) bg_popup_call_poc_act_pane_g4

0x0be8,	// (0x000315f3) bg_popup_call_poc_act_pane_g5

0x0c28,	// (0x00031633) bg_popup_call_poc_act_pane_g6

0x0bf8,	// (0x00031603) bg_popup_call_poc_act_pane_g7

0x0c30,	// (0x0003163b) bg_popup_call_poc_act_pane_g8

0xdc5e,	// (0x0003e669) main_usb_pane

0x0d8d,	// (0x00031798) popup_cale_lunar_info_window

0x7453,	// (0x00037e5e) im_reading_pane_t1_ParamLimits

0xe23e,	// (0x0003ec49) list_im_pane_ParamLimits

0xe24f,	// (0x0003ec5a) scroll_pane_cp07_ParamLimits

0xdc5e,	// (0x0003e669) grid_highlight_pane_cp012

0xdeb9,	// (0x0003e8c4) mup_scale_pane_ParamLimits

0xe71b,	// (0x0003f126) main_usb_pane_g1_ParamLimits

0xe71b,	// (0x0003f126) main_usb_pane_g1

0x8e86,	// (0x00039891) main_usb_pane_g2_ParamLimits

0x8e86,	// (0x00039891) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0003ffe9) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0003ffe9) main_usb_pane_g

0x8e92,	// (0x0003989d) main_usb_pane_t1_ParamLimits

0x8e92,	// (0x0003989d) main_usb_pane_t1

0x8ea4,	// (0x000398af) main_usb_pane_t2_ParamLimits

0x8ea4,	// (0x000398af) main_usb_pane_t2

0x8eb6,	// (0x000398c1) main_usb_pane_t3_ParamLimits

0x8eb6,	// (0x000398c1) main_usb_pane_t3

0x8ec8,	// (0x000398d3) main_usb_pane_t4_ParamLimits

0x8ec8,	// (0x000398d3) main_usb_pane_t4

0x8eda,	// (0x000398e5) main_usb_pane_t5_ParamLimits

0x8eda,	// (0x000398e5) main_usb_pane_t5

0x8eec,	// (0x000398f7) main_usb_pane_t6_ParamLimits

0x8eec,	// (0x000398f7) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0003ffee) main_usb_pane_t_ParamLimits

0x8238,	// (0x00038c43) aid_text_placing

0x8243,	// (0x00038c4e) main_location2_pane_t1_ParamLimits

0x8257,	// (0x00038c62) main_location2_pane_t2_ParamLimits

0x8257,	// (0x00038c62) main_location2_pane_t3_ParamLimits

0x826b,	// (0x00038c76) main_location2_pane_t4_ParamLimits

0x826b,	// (0x00038c76) main_location2_pane_t4

0xf402,	// (0x0003fe0d) main_location2_pane_t_ParamLimits

0xdef5,	// (0x0003e900) find_pinb_pane_g2_ParamLimits

0xdef5,	// (0x0003e900) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0003fb5b) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0003fb5b) find_pinb_pane_g

0xdf01,	// (0x0003e90c) find_pinb_pane_t1_ParamLimits

0xdf13,	// (0x0003e91e) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0003fb60) find_pinb_pane_t_ParamLimits

0xdc5e,	// (0x0003e669) main_call3_pane

0x7972,	// (0x0003837d) cale_month_day_heading_pane_t1_ParamLimits

0x79d0,	// (0x000383db) cale_month_day_heading_pane_t2_ParamLimits

0x7a35,	// (0x00038440) cale_month_day_heading_pane_t3_ParamLimits

0x7a9a,	// (0x000384a5) cale_month_day_heading_pane_t4_ParamLimits

0x7aff,	// (0x0003850a) cale_month_day_heading_pane_t5_ParamLimits

0x7b6c,	// (0x00038577) cale_month_day_heading_pane_t6_ParamLimits

0x7be1,	// (0x000385ec) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0003fce4) cale_month_day_heading_pane_t_ParamLimits

0xe48f,	// (0x0003ee9a) smil_status_volume_pane

0x8a3e,	// (0x00039449) postcard_address_pane_ParamLimits

0x8a3e,	// (0x00039449) postcard_address_pane

0x8a4c,	// (0x00039457) postcard_message_pane_ParamLimits

0x8a4c,	// (0x00039457) postcard_message_pane

0x8e59,	// (0x00039864) call2_cli_visual_pane_t1_ParamLimits

0x8e59,	// (0x00039864) call2_cli_visual_pane_t1

0x9425,	// (0x00039e30) postcard_message_pane_t1_ParamLimits

0x9425,	// (0x00039e30) postcard_message_pane_t1

0x0e9d,	// (0x000318a8) postcard_address_pane_t1_ParamLimits

0x0e9d,	// (0x000318a8) postcard_address_pane_t1

0x9416,	// (0x00039e21) popup_call3_audio_in_window_ParamLimits

0x9416,	// (0x00039e21) popup_call3_audio_in_window

0x92f4,	// (0x00039cff) bg_popup_call3_in_pane_ParamLimits

0x92f4,	// (0x00039cff) bg_popup_call3_in_pane

0x935c,	// (0x00039d67) popup_call3_audio_in_window_g1_ParamLimits

0x935c,	// (0x00039d67) popup_call3_audio_in_window_g1

0x9374,	// (0x00039d7f) popup_call3_audio_in_window_g2_ParamLimits

0x9374,	// (0x00039d7f) popup_call3_audio_in_window_g2

0x938c,	// (0x00039d97) popup_call3_audio_in_window_g3_ParamLimits

0x938c,	// (0x00039d97) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00040050) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00040050) popup_call3_audio_in_window_g

0x93b4,	// (0x00039dbf) popup_call3_audio_in_window_t1_ParamLimits

0x93b4,	// (0x00039dbf) popup_call3_audio_in_window_t1

0x93dc,	// (0x00039de7) popup_call3_audio_in_window_t2_ParamLimits

0x93dc,	// (0x00039de7) popup_call3_audio_in_window_t2

0x9404,	// (0x00039e0f) popup_call3_audio_in_window_t3_ParamLimits

0x9404,	// (0x00039e0f) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x00040059) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x00040059) popup_call3_audio_in_window_t

0xe9e0,	// (0x0003f3eb) bg_popup_call3_rect_pane

0x0b88,	// (0x00031593) bg_popup_call3_rect_pane_g1

0xe077,	// (0x0003ea82) bg_popup_call3_rect_pane_g2

0x0b90,	// (0x0003159b) bg_popup_call3_rect_pane_g3

0x0b98,	// (0x000315a3) bg_popup_call3_rect_pane_g4

0x0ba0,	// (0x000315ab) bg_popup_call3_rect_pane_g5

0x0ba8,	// (0x000315b3) bg_popup_call3_rect_pane_g6

0x0bb0,	// (0x000315bb) bg_popup_call3_rect_pane_g7

0x869d,	// (0x000390a8) mup_visualizer_osc_pane

0xea9f,	// (0x0003f4aa) mup_visualizer_spec_pane

0x9314,	// (0x00039d1f) call3_video_qcif_pane_ParamLimits

0x9314,	// (0x00039d1f) call3_video_qcif_pane

0x9326,	// (0x00039d31) call3_video_qcif_uncrop_pane_ParamLimits

0x9326,	// (0x00039d31) call3_video_qcif_uncrop_pane

0x9336,	// (0x00039d41) call3_video_subqcif_pane_ParamLimits

0x9336,	// (0x00039d41) call3_video_subqcif_pane

0x934a,	// (0x00039d55) call3_video_subqcif_uncrop_pane_ParamLimits

0x934a,	// (0x00039d55) call3_video_subqcif_uncrop_pane

0x93a4,	// (0x00039daf) popup_call3_audio_in_window_g4_ParamLimits

0x93a4,	// (0x00039daf) popup_call3_audio_in_window_g4

0x92c1,	// (0x00039ccc) mup_spec_half_pane

0x92ca,	// (0x00039cd5) mup_spec_half_pane_cp

0x0e3b,	// (0x00031846) mup_osc_middle_pane

0x0e44,	// (0x0003184f) mup_visualizer_osc_pane_g1

0x92a1,	// (0x00039cac) mup_spec_bar_pane_ParamLimits

0x92a1,	// (0x00039cac) mup_spec_bar_pane

0x0e28,	// (0x00031833) mup_spec_bar_pane_g1

0x0e32,	// (0x0003183d) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00040044) mup_spec_bar_pane_g

0x698d,	// (0x00037398) aid_cale_week_size_cell_pane_ParamLimits

0x69a0,	// (0x000373ab) bg_cale_heading_pane_ParamLimits

0xe0ab,	// (0x0003eab6) bg_cale_pane_cp01_ParamLimits

0x69b4,	// (0x000373bf) cale_week_corner_pane_ParamLimits

0x69ca,	// (0x000373d5) cale_week_day_heading_pane_ParamLimits

0x69de,	// (0x000373e9) cale_week_scroll_pane_g1_ParamLimits

0x69ef,	// (0x000373fa) cale_week_scroll_pane_g2_ParamLimits

0x6a00,	// (0x0003740b) cale_week_scroll_pane_g3_ParamLimits

0x6a11,	// (0x0003741c) cale_week_scroll_pane_g4_ParamLimits

0x6a22,	// (0x0003742d) cale_week_scroll_pane_g5_ParamLimits

0x6a33,	// (0x0003743e) cale_week_scroll_pane_g6_ParamLimits

0x6a46,	// (0x00037451) cale_week_scroll_pane_g7_ParamLimits

0x6a59,	// (0x00037464) cale_week_scroll_pane_g8_ParamLimits

0x6a6c,	// (0x00037477) cale_week_scroll_pane_g9_ParamLimits

0x6a7d,	// (0x00037488) cale_week_scroll_pane_g10_ParamLimits

0x6a8e,	// (0x00037499) cale_week_scroll_pane_g11_ParamLimits

0x6a9f,	// (0x000374aa) cale_week_scroll_pane_g12_ParamLimits

0x6ab0,	// (0x000374bb) cale_week_scroll_pane_g13_ParamLimits

0x6ac1,	// (0x000374cc) cale_week_scroll_pane_g14_ParamLimits

0x6ad2,	// (0x000374dd) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0003fbec) cale_week_scroll_pane_g_ParamLimits

0x6ae3,	// (0x000374ee) cale_week_time_pane_ParamLimits

0x6af6,	// (0x00037501) grid_cale_week_pane_ParamLimits

0xe0c4,	// (0x0003eacf) listscroll_cale_week_pane_t1

0x6b0b,	// (0x00037516) scroll_pane_cp08_ParamLimits

0x7657,	// (0x00038062) cale_month_corner_pane_ParamLimits

0xe465,	// (0x0003ee70) cale_month_pane_t1

0x7931,	// (0x0003833c) cale_month_week_pane_ParamLimits

0xe71b,	// (0x0003f126) popup_call_status_window_g1_ParamLimits

0x804a,	// (0x00038a55) popup_call_status_window_g2_ParamLimits

0x8056,	// (0x00038a61) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0003fd94) popup_call_status_window_g_ParamLimits

0xe782,	// (0x0003f18d) aid_call2_pane

0x5239,	// (0x00035c44) msg_header_pane_g1

0x8a3e,	// (0x00039449) postcard_address2_pane_ParamLimits

0x8a3e,	// (0x00039449) postcard_address2_pane

0x8a4c,	// (0x00039457) postcard_message2_pane_ParamLimits

0x8a4c,	// (0x00039457) postcard_message2_pane

0x925b,	// (0x00039c66) message2_row_pane_ParamLimits

0x925b,	// (0x00039c66) message2_row_pane

0x0de3,	// (0x000317ee) address2_row_pane_ParamLimits

0x0de3,	// (0x000317ee) address2_row_pane

0x0df6,	// (0x00031801) postcard_message2_row_pane_g1

0x0dfe,	// (0x00031809) postcard_message2_row_pane_t1

0x0df6,	// (0x00031801) address2_row_pane_g1

0x0dfe,	// (0x00031809) address2_row_pane_t1

0x6e55,	// (0x00037860) aid_size_cell_vorec

0xdc5e,	// (0x0003e669) main_rss_pane

0x9275,	// (0x00039c80) rss_list_single_pane_ParamLimits

0x9275,	// (0x00039c80) rss_list_single_pane

0x0e0c,	// (0x00031817) rss_list_single_pane_t1

0x0e1a,	// (0x00031825) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0004003f) rss_list_single_pane_t

0xdc5e,	// (0x0003e669) main_camera2_pane

0xdc5e,	// (0x0003e669) main_video2_pane

0x9489,	// (0x00039e94) cams_zoom_pane_cp2_ParamLimits

0x9489,	// (0x00039e94) cams_zoom_pane_cp2

0x9495,	// (0x00039ea0) image2_vga_pane_ParamLimits

0x9495,	// (0x00039ea0) image2_vga_pane

0x94a4,	// (0x00039eaf) main_camera2_pane_g1_ParamLimits

0x94a4,	// (0x00039eaf) main_camera2_pane_g1

0x94b0,	// (0x00039ebb) main_camera2_pane_g2_ParamLimits

0x94b0,	// (0x00039ebb) main_camera2_pane_g2

0x94bc,	// (0x00039ec7) main_camera2_pane_g3_ParamLimits

0x94bc,	// (0x00039ec7) main_camera2_pane_g3

0x94c8,	// (0x00039ed3) main_camera2_pane_g4_ParamLimits

0x94c8,	// (0x00039ed3) main_camera2_pane_g4

0x94d4,	// (0x00039edf) main_camera2_pane_g5_ParamLimits

0x94d4,	// (0x00039edf) main_camera2_pane_g5

0x94e0,	// (0x00039eeb) main_camera2_pane_g6_ParamLimits

0x94e0,	// (0x00039eeb) main_camera2_pane_g6

0x94ec,	// (0x00039ef7) main_camera2_pane_g7_ParamLimits

0x94ec,	// (0x00039ef7) main_camera2_pane_g7

0x94f8,	// (0x00039f03) main_camera2_pane_g8_ParamLimits

0x94f8,	// (0x00039f03) main_camera2_pane_g8

0x0008,

0xf655,	// (0x00040060) main_camera2_pane_g_ParamLimits

0xf655,	// (0x00040060) main_camera2_pane_g

0x9510,	// (0x00039f1b) main_camera2_pane_t1_ParamLimits

0x9510,	// (0x00039f1b) main_camera2_pane_t1

0x9522,	// (0x00039f2d) main_camera2_pane_t2_ParamLimits

0x9522,	// (0x00039f2d) main_camera2_pane_t2

0x9534,	// (0x00039f3f) main_camera2_pane_t3_ParamLimits

0x9534,	// (0x00039f3f) main_camera2_pane_t3

0x9546,	// (0x00039f51) main_camera2_pane_t4_ParamLimits

0x9546,	// (0x00039f51) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00040073) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00040073) main_camera2_pane_t

0x95a3,	// (0x00039fae) cams_zoom_pane_cp4_ParamLimits

0x95a3,	// (0x00039fae) cams_zoom_pane_cp4

0x95b3,	// (0x00039fbe) image2_cif_pane_ParamLimits

0x95b3,	// (0x00039fbe) image2_cif_pane

0x95c8,	// (0x00039fd3) image2_subqcif_pane_ParamLimits

0x95c8,	// (0x00039fd3) image2_subqcif_pane

0x95d7,	// (0x00039fe2) main_video2_pane_g1_ParamLimits

0x95d7,	// (0x00039fe2) main_video2_pane_g1

0x95e9,	// (0x00039ff4) main_video2_pane_g2_ParamLimits

0x95e9,	// (0x00039ff4) main_video2_pane_g2

0x95f9,	// (0x0003a004) main_video2_pane_g3_ParamLimits

0x95f9,	// (0x0003a004) main_video2_pane_g3

0x9609,	// (0x0003a014) main_video2_pane_g4_ParamLimits

0x9609,	// (0x0003a014) main_video2_pane_g4

0x9619,	// (0x0003a024) main_video2_pane_g5_ParamLimits

0x9619,	// (0x0003a024) main_video2_pane_g5

0x9629,	// (0x0003a034) main_video2_pane_g6_ParamLimits

0x9629,	// (0x0003a034) main_video2_pane_g6

0x0005,

0xf677,	// (0x00040082) main_video2_pane_g_ParamLimits

0xf677,	// (0x00040082) main_video2_pane_g

0x963b,	// (0x0003a046) main_video2_pane_t1_ParamLimits

0x963b,	// (0x0003a046) main_video2_pane_t1

0x9655,	// (0x0003a060) main_video2_pane_t2_ParamLimits

0x9655,	// (0x0003a060) main_video2_pane_t2

0x967b,	// (0x0003a086) main_video2_pane_t3_ParamLimits

0x967b,	// (0x0003a086) main_video2_pane_t3

0x0002,

0xf684,	// (0x0004008f) main_video2_pane_t_ParamLimits

0xf684,	// (0x0004008f) main_video2_pane_t

0x8fa3,	// (0x000399ae) call_muted_g2

0x0001,

0xf626,	// (0x00040031) call_muted_g

0xdc5e,	// (0x0003e669) main_mup2_pane

0x0f0d,	// (0x00031918) main_mup2_pane_g1_ParamLimits

0x0f0d,	// (0x00031918) main_mup2_pane_g1

0x96a1,	// (0x0003a0ac) main_mup2_pane_g2_ParamLimits

0x96a1,	// (0x0003a0ac) main_mup2_pane_g2

0x9933,	// (0x0003a33e) main_mup_pane_g13_cp1

0x993b,	// (0x0003a346) mup_volume_pane_cp1

0x96c3,	// (0x0003a0ce) main_mup2_pane_g4_ParamLimits

0x96c3,	// (0x0003a0ce) main_mup2_pane_g4

0x96d8,	// (0x0003a0e3) main_mup2_pane_g5_ParamLimits

0x96d8,	// (0x0003a0e3) main_mup2_pane_g5

0x96ed,	// (0x0003a0f8) main_mup2_pane_g6_ParamLimits

0x96ed,	// (0x0003a0f8) main_mup2_pane_g6

0x9702,	// (0x0003a10d) main_mup2_pane_g7_ParamLimits

0x9702,	// (0x0003a10d) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x00040096) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x00040096) main_mup2_pane_g

0x971e,	// (0x0003a129) main_mup2_pane_t1_ParamLimits

0x971e,	// (0x0003a129) main_mup2_pane_t1

0x9735,	// (0x0003a140) main_mup2_pane_t2_ParamLimits

0x9735,	// (0x0003a140) main_mup2_pane_t2

0x974c,	// (0x0003a157) main_mup2_pane_t3_ParamLimits

0x974c,	// (0x0003a157) main_mup2_pane_t3

0x9763,	// (0x0003a16e) main_mup2_pane_t4_ParamLimits

0x9763,	// (0x0003a16e) main_mup2_pane_t4

0x977d,	// (0x0003a188) main_mup2_pane_t5_ParamLimits

0x977d,	// (0x0003a188) main_mup2_pane_t5

0x9797,	// (0x0003a1a2) main_mup2_pane_t6_ParamLimits

0x9797,	// (0x0003a1a2) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x000400a5) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x000400a5) main_mup2_pane_t

0x97cf,	// (0x0003a1da) mup2_visualizer_pane_ParamLimits

0x97cf,	// (0x0003a1da) mup2_visualizer_pane

0x9805,	// (0x0003a210) mup_progress_pane_cp_ParamLimits

0x9805,	// (0x0003a210) mup_progress_pane_cp

0x991e,	// (0x0003a329) mup_volume_pane_cp_ParamLimits

0x991e,	// (0x0003a329) mup_volume_pane_cp

0x981e,	// (0x0003a229) mup2_visualizer_pane_g1_ParamLimits

0x981e,	// (0x0003a229) mup2_visualizer_pane_g1

0x0edf,	// (0x000318ea) mup2_visualizer_pane_g2_ParamLimits

0x0edf,	// (0x000318ea) mup2_visualizer_pane_g2

0x9833,	// (0x0003a23e) mup2_visualizer_pane_g3_ParamLimits

0x9833,	// (0x0003a23e) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x000400b2) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x000400b2) mup2_visualizer_pane_g

0xecc8,	// (0x0003f6d3) aid_size_cell_fmradio

0x90b9,	// (0x00039ac4) aid_height_parent_landcape

0xe2cd,	// (0x0003ecd8) wml_content_pane_cp

0xe2d5,	// (0x0003ece0) wml_tabs_pane

0xe2de,	// (0x0003ece9) popup_wml_miniature_window

0xe2e6,	// (0x0003ecf1) scroll_pane_cp021

0xe2fa,	// (0x0003ed05) wml_content_pane_comp8

0xdc5e,	// (0x0003e669) bg_popup_sub_pane_cp05

0x0efd,	// (0x00031908) popup_wml_miniature_window_g1

0x0f05,	// (0x00031910) wml_miniature_view_pane

0x9841,	// (0x0003a24c) aid_size_wml_view

0x9849,	// (0x0003a254) wml_miniature_view_pane_g1

0x9852,	// (0x0003a25d) wml_miniature_view_pane_g2

0x985b,	// (0x0003a266) wml_miniature_view_pane_g3

0x9863,	// (0x0003a26e) wml_miniature_view_pane_g4

0x986b,	// (0x0003a276) wml_miniature_view_pane_g5

0x9873,	// (0x0003a27e) wml_miniature_view_pane_g6

0x987b,	// (0x0003a286) wml_miniature_view_pane_g7

0x9883,	// (0x0003a28e) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x000400b9) wml_miniature_view_pane_g

0x0f0d,	// (0x00031918) background_graphic_ParamLimits

0x0f0d,	// (0x00031918) background_graphic

0x0f19,	// (0x00031924) wml_tabs_2_pane

0x0f22,	// (0x0003192d) wml_tabs_3_pane_ParamLimits

0x0f22,	// (0x0003192d) wml_tabs_3_pane

0x0f34,	// (0x0003193f) wml_tabs_4_pane_ParamLimits

0x0f34,	// (0x0003193f) wml_tabs_4_pane

0x0f4a,	// (0x00031955) wml_tabs_5_pane_ParamLimits

0x0f4a,	// (0x00031955) wml_tabs_5_pane

0x0f64,	// (0x0003196f) wml_tabs_pane_g2_ParamLimits

0x0f64,	// (0x0003196f) wml_tabs_pane_g2

0x0f78,	// (0x00031983) wml_tabs_pane_g3_ParamLimits

0x0f78,	// (0x00031983) wml_tabs_pane_g3

0x988b,	// (0x0003a296) wml_tabs_2_active_pane_ParamLimits

0x988b,	// (0x0003a296) wml_tabs_2_active_pane

0x989d,	// (0x0003a2a8) wml_tabs_2_passive_pane_ParamLimits

0x989d,	// (0x0003a2a8) wml_tabs_2_passive_pane

0x98af,	// (0x0003a2ba) wml_tabs_3_active_pane_cp_ParamLimits

0x98af,	// (0x0003a2ba) wml_tabs_3_active_pane_cp

0x98c2,	// (0x0003a2cd) wml_tabs_3_passive_pane_ParamLimits

0x98c2,	// (0x0003a2cd) wml_tabs_3_passive_pane

0x98d3,	// (0x0003a2de) wml_tabs_3_passive_pane_cp_ParamLimits

0x98d3,	// (0x0003a2de) wml_tabs_3_passive_pane_cp

0x98e8,	// (0x0003a2f3) tabs_4_active_pane

0x98f0,	// (0x0003a2fb) tabs_4_passive_pane

0x98f8,	// (0x0003a303) tabs_4_passive_pane_cp

0x9900,	// (0x0003a30b) tabs_4_passive_pane_cp2

0x8e7e,	// (0x00039889) aid_height_text

0x8666,	// (0x00039071) mup_volume_cont_pane_ParamLimits

0x8666,	// (0x00039071) mup_volume_cont_pane

0x650c,	// (0x00036f17) aid_size_cell_pinb

0x6516,	// (0x00036f21) aid_size_list_pinb

0x97ee,	// (0x0003a1f9) mup2_volume_cont_pane_ParamLimits

0x97ee,	// (0x0003a1f9) mup2_volume_cont_pane

0x990a,	// (0x0003a315) mup2_volume_cont_pane_g1_ParamLimits

0x990a,	// (0x0003a315) mup2_volume_cont_pane_g1

0x6148,	// (0x00036b53) aid_size_cell_touch_ParamLimits

0x6148,	// (0x00036b53) aid_size_cell_touch

0x63f3,	// (0x00036dfe) touch_pane_ParamLimits

0x63f3,	// (0x00036dfe) touch_pane

0x612a,	// (0x00036b35) main_rss2_pane

0x0fce,	// (0x000319d9) listscroll_rss2_pane

0x0fd7,	// (0x000319e2) rss2_navigation_pane

0x0fdf,	// (0x000319ea) list_rss2_pane

0xe8a6,	// (0x0003f2b1) scroll_pane_cp22

0x0fe7,	// (0x000319f2) rss2_navigation_pane_g1

0x0ff0,	// (0x000319fb) rss2_navigation_pane_g2

0x0ff8,	// (0x00031a03) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x000400ca) rss2_navigation_pane_g

0x1000,	// (0x00031a0b) rss2_navigation_pane_t1

0x9943,	// (0x0003a34e) rss2_list_single_pane_ParamLimits

0x9943,	// (0x0003a34e) rss2_list_single_pane

0x100e,	// (0x00031a19) rss2_list_single_pane_t2

0x101c,	// (0x00031a27) rss2_list_single_pane_t3_ParamLimits

0x101c,	// (0x00031a27) rss2_list_single_pane_t3

0x1039,	// (0x00031a44) rss2_list_single_pane_t4

0x7e59,	// (0x00038864) smil_status_pane_g1

0xf0c9,	// (0x0003fad4) main_image2_pane_ParamLimits

0xf0c9,	// (0x0003fad4) main_image2_pane

0x9504,	// (0x00039f0f) main_camera2_pane_g9_ParamLimits

0x9504,	// (0x00039f0f) main_camera2_pane_g9

0x9558,	// (0x00039f63) main_camera2_pane_t5_ParamLimits

0x9558,	// (0x00039f63) main_camera2_pane_t5

0x956a,	// (0x00039f75) main_camera2_pane_t6_ParamLimits

0x956a,	// (0x00039f75) main_camera2_pane_t6

0x9969,	// (0x0003a374) main_image2_pane_g1_ParamLimits

0x9969,	// (0x0003a374) main_image2_pane_g1

0x8c18,	// (0x00039623) smil2_video_pane_ParamLimits

0x8c18,	// (0x00039623) smil2_video_pane

0x4fba,	// (0x000359c5) aid_zoom_text_primary_cp

0xd841,	// (0x0003e24c) popup_preview_fixed_window

0xe236,	// (0x0003ec41) im_reading_pane_g1

0x944e,	// (0x00039e59) cams2_bc_adjust_pane_cp_ParamLimits

0x944e,	// (0x00039e59) cams2_bc_adjust_pane_cp

0x9595,	// (0x00039fa0) cams2_bc_adjust_pane_ParamLimits

0x9595,	// (0x00039fa0) cams2_bc_adjust_pane

0x9975,	// (0x0003a380) cams2_bc_adjust_pane_g1

0x997d,	// (0x0003a388) cams2_slider_pane

0x9986,	// (0x0003a391) cams2_slider_pane_g1

0x998f,	// (0x0003a39a) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x000400d1) cams2_slider_pane_g

0x6609,	// (0x00037014) calc_display_pane_ParamLimits

0x6627,	// (0x00037032) calc_paper_pane_ParamLimits

0x6643,	// (0x0003704e) grid_calc_pane_ParamLimits

0x80b4,	// (0x00038abf) popup_clock_digital_window_t1_ParamLimits

0xec65,	// (0x0003f670) main_image_pane_t1

0x65ef,	// (0x00036ffa) aid_size_cell_calc_ParamLimits

0x65ef,	// (0x00036ffa) aid_size_cell_calc

0x90eb,	// (0x00039af6) popup_blid_sat_info2_window_ParamLimits

0x90eb,	// (0x00039af6) popup_blid_sat_info2_window

0x1083,	// (0x00031a8e) aid_size_cell_blid

0x108b,	// (0x00031a96) bg_popup_window_pane_cp07

0x10ae,	// (0x00031ab9) grid_popup_blid_pane

0x10b8,	// (0x00031ac3) heading_pane_cp05_ParamLimits

0x10b8,	// (0x00031ac3) heading_pane_cp05

0x1182,	// (0x00031b8d) cell_popup_blid_pane_ParamLimits

0x1182,	// (0x00031b8d) cell_popup_blid_pane

0x11ac,	// (0x00031bb7) cell_popup_blid_pane_g1

0x11b4,	// (0x00031bbf) cell_popup_blid_pane_t1

0x97b4,	// (0x0003a1bf) mup2_indicator_pane_ParamLimits

0x97b4,	// (0x0003a1bf) mup2_indicator_pane

0xe9e0,	// (0x0003f3eb) mup2_visualizer_osc_pane

0x0eeb,	// (0x000318f6) mup2_visualizer_spec_pane_ParamLimits

0x0eeb,	// (0x000318f6) mup2_visualizer_spec_pane

0x99a9,	// (0x0003a3b4) mup2_spec_half_pane

0x99b2,	// (0x0003a3bd) mup2_spec_half_pane_cp

0x99bc,	// (0x0003a3c7) mup2_spec_bar_pane_ParamLimits

0x99bc,	// (0x0003a3c7) mup2_spec_bar_pane

0x0e28,	// (0x00031833) mup2_spec_bar_pane_g1

0x0e32,	// (0x0003183d) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00040044) mup2_spec_bar_pane_g

0x99db,	// (0x0003a3e6) mup2_osc_middle_pane

0x0e44,	// (0x0003184f) mup2_visualizer_osc_pane_g1

0xd86b,	// (0x0003e276) popup_number_entry_window_t1_ParamLimits

0xd87e,	// (0x0003e289) popup_number_entry_window_t2_ParamLimits

0xd890,	// (0x0003e29b) popup_number_entry_window_t3_ParamLimits

0x644a,	// (0x00036e55) popup_number_entry_window_t5_ParamLimits

0x644a,	// (0x00036e55) popup_number_entry_window_t5

0xf0fb,	// (0x0003fb06) popup_number_entry_window_t_ParamLimits

0xd8a2,	// (0x0003e2ad) text_title_cp2_ParamLimits

0x8902,	// (0x0003930d) aid_hotspot_pointer_text2_pane

0x899c,	// (0x000393a7) main_viewer_pane_g9_ParamLimits

0x899c,	// (0x000393a7) main_viewer_pane_g9

0xe465,	// (0x0003ee70) cale_month_pane_t1_ParamLimits

0xe4a2,	// (0x0003eead) bg_cale_pane_ParamLimits

0xe4ba,	// (0x0003eec5) list_cale_pane_ParamLimits

0xe0c4,	// (0x0003eacf) listscroll_cale_day_pane_t1

0xe4cb,	// (0x0003eed6) scroll_pane_cp09_ParamLimits

0x86a5,	// (0x000390b0) main_mup_eq_pane_t1_ParamLimits

0x86a5,	// (0x000390b0) main_mup_eq_pane_t1

0x86c1,	// (0x000390cc) main_mup_eq_pane_t2_ParamLimits

0x86c1,	// (0x000390cc) main_mup_eq_pane_t2

0x86dd,	// (0x000390e8) main_mup_eq_pane_t3_ParamLimits

0x86dd,	// (0x000390e8) main_mup_eq_pane_t3

0x86f7,	// (0x00039102) main_mup_eq_pane_t4_ParamLimits

0x86f7,	// (0x00039102) main_mup_eq_pane_t4

0x8711,	// (0x0003911c) main_mup_eq_pane_t5_ParamLimits

0x8711,	// (0x0003911c) main_mup_eq_pane_t5

0x872b,	// (0x00039136) main_mup_eq_pane_t6_ParamLimits

0x872b,	// (0x00039136) main_mup_eq_pane_t6

0x8741,	// (0x0003914c) main_mup_eq_pane_t7_ParamLimits

0x8741,	// (0x0003914c) main_mup_eq_pane_t7

0x8757,	// (0x00039162) main_mup_eq_pane_t8_ParamLimits

0x8757,	// (0x00039162) main_mup_eq_pane_t8

0x876d,	// (0x00039178) main_mup_eq_pane_t9_ParamLimits

0x876d,	// (0x00039178) main_mup_eq_pane_t9

0x8789,	// (0x00039194) main_mup_eq_pane_t10_ParamLimits

0x8789,	// (0x00039194) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0003fe93) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0003fe93) main_mup_eq_pane_t

0x884e,	// (0x00039259) mup_equalizer_pane_cp5_ParamLimits

0x8866,	// (0x00039271) mup_equalizer_pane_cp6_ParamLimits

0x887e,	// (0x00039289) mup_equalizer_pane_cp7_ParamLimits

0x612a,	// (0x00036b35) main_gallery_pane

0x0e4d,	// (0x00031858) smil2_volume_pane

0x0e68,	// (0x00031873) smil_status_volume_pane_g1_ParamLimits

0x0e55,	// (0x00031860) smil_status_volume_pane_g2_ParamLimits

0x92d2,	// (0x00039cdd) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00040049) smil_status_volume_pane_g_ParamLimits

0x108b,	// (0x00031a96) bg_popup_window_pane_cp07_ParamLimits

0x1099,	// (0x00031aa4) blid_firmament_pane

0x99e4,	// (0x0003a3ef) aid_size_cell_gallery_ParamLimits

0x99e4,	// (0x0003a3ef) aid_size_cell_gallery

0x99f2,	// (0x0003a3fd) grid_gallery_pane_ParamLimits

0x99f2,	// (0x0003a3fd) grid_gallery_pane

0x9a02,	// (0x0003a40d) cell_gallery_pane_ParamLimits

0x9a02,	// (0x0003a40d) cell_gallery_pane

0x11c2,	// (0x00031bcd) bg_cell_gallery_focus_pane_ParamLimits

0x11c2,	// (0x00031bcd) bg_cell_gallery_focus_pane

0x11d4,	// (0x00031bdf) cell_gallery_pane_g1_ParamLimits

0x11d4,	// (0x00031bdf) cell_gallery_pane_g1

0x9a50,	// (0x0003a45b) cell_gallery_pane_g2_ParamLimits

0x9a50,	// (0x0003a45b) cell_gallery_pane_g2

0x9a5d,	// (0x0003a468) cell_gallery_pane_g3_ParamLimits

0x9a5d,	// (0x0003a468) cell_gallery_pane_g3

0x11e0,	// (0x00031beb) cell_gallery_pane_g4_ParamLimits

0x11e0,	// (0x00031beb) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x000400f7) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x000400f7) cell_gallery_pane_g

0x11ec,	// (0x00031bf7) bg_cell_gallery_focus_pane_g1

0x11f4,	// (0x00031bff) bg_cell_gallery_focus_pane_g2

0x11fc,	// (0x00031c07) bg_cell_gallery_focus_pane_g3

0x1204,	// (0x00031c0f) bg_cell_gallery_focus_pane_g4

0x120c,	// (0x00031c17) bg_cell_gallery_focus_pane_g5

0x1214,	// (0x00031c1f) bg_cell_gallery_focus_pane_g6

0x121c,	// (0x00031c27) bg_cell_gallery_focus_pane_g7

0x1224,	// (0x00031c2f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x00040100) bg_cell_gallery_focus_pane_g

0x122c,	// (0x00031c37) aid_firma_cardinal

0x1240,	// (0x00031c4b) blid_firmament_pane_t1

0x1257,	// (0x00031c62) blid_firmament_pane_t2

0x126e,	// (0x00031c79) blid_firmament_pane_t3

0x1285,	// (0x00031c90) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x00040111) blid_firmament_pane_t

0x129c,	// (0x00031ca7) blid_sat_info_pane

0x12ac,	// (0x00031cb7) blid_sat_info_pane_g1

0x12ac,	// (0x00031cb7) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0004011a) blid_sat_info_pane_g

0x12b6,	// (0x00031cc1) blid_sat_info_pane_t1

0x12c4,	// (0x00031ccf) smil2_volume_content_pane

0x12cd,	// (0x00031cd8) smil2_volume_pane_g1

0x12d5,	// (0x00031ce0) smil2_volume_content_pane_g1

0x12de,	// (0x00031ce9) smil2_volume_content_pane_g2

0x12e7,	// (0x00031cf2) smil2_volume_content_pane_g3

0x12f0,	// (0x00031cfb) smil2_volume_content_pane_g4

0x12f9,	// (0x00031d04) smil2_volume_content_pane_g5

0x1302,	// (0x00031d0d) smil2_volume_content_pane_g6

0x130b,	// (0x00031d16) smil2_volume_content_pane_g7

0x1314,	// (0x00031d1f) smil2_volume_content_pane_g8

0x131d,	// (0x00031d28) smil2_volume_content_pane_g9

0x1326,	// (0x00031d31) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0004011f) smil2_volume_content_pane_g

0x6b63,	// (0x0003756e) cale_week_day_heading_pane_t1_ParamLimits

0x6b90,	// (0x0003759b) cale_week_day_heading_pane_t2_ParamLimits

0x6bbd,	// (0x000375c8) cale_week_day_heading_pane_t3_ParamLimits

0x6bea,	// (0x000375f5) cale_week_day_heading_pane_t4_ParamLimits

0x6c17,	// (0x00037622) cale_week_day_heading_pane_t5_ParamLimits

0x6c44,	// (0x0003764f) cale_week_day_heading_pane_t6_ParamLimits

0x6c71,	// (0x0003767c) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0003fc0b) cale_week_day_heading_pane_t_ParamLimits

0xe0d6,	// (0x0003eae1) bg_cale_side_pane_ParamLimits

0x6c9e,	// (0x000376a9) cale_week_time_pane_t1_ParamLimits

0x6cca,	// (0x000376d5) cale_week_time_pane_t2_ParamLimits

0x6cf6,	// (0x00037701) cale_week_time_pane_t3_ParamLimits

0x6d22,	// (0x0003772d) cale_week_time_pane_t4_ParamLimits

0x6d4e,	// (0x00037759) cale_week_time_pane_t5_ParamLimits

0x6d7a,	// (0x00037785) cale_week_time_pane_t6_ParamLimits

0x6da6,	// (0x000377b1) cale_week_time_pane_t7_ParamLimits

0x6dd2,	// (0x000377dd) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0003fc1a) cale_week_time_pane_t_ParamLimits

0x6dfe,	// (0x00037809) cell_cale_week_pane_g2_ParamLimits

0xe0d6,	// (0x0003eae1) bg_cale_side_pane_cp01_ParamLimits

0x7c56,	// (0x00038661) cale_month_week_pane_t1_ParamLimits

0x7c81,	// (0x0003868c) cale_month_week_pane_t2_ParamLimits

0x7cac,	// (0x000386b7) cale_month_week_pane_t3_ParamLimits

0x7cd7,	// (0x000386e2) cale_month_week_pane_t4_ParamLimits

0x7d02,	// (0x0003870d) cale_month_week_pane_t5_ParamLimits

0x7d2d,	// (0x00038738) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0003fcf3) cale_month_week_pane_t_ParamLimits

0x7e26,	// (0x00038831) cell_cale_month_pane_g1_ParamLimits

0x612a,	// (0x00036b35) main_cale_event_viewer_pane

0x612a,	// (0x00036b35) listscroll_cale_event_viewer_pane

0x132f,	// (0x00031d3a) list_cale_ev_pane

0x1337,	// (0x00031d42) scroll_pane_cp023

0x9a6a,	// (0x0003a475) field_cale_ev_pane_ParamLimits

0x9a6a,	// (0x0003a475) field_cale_ev_pane

0x1343,	// (0x00031d4e) field_cale_ev_content_pane_ParamLimits

0x1343,	// (0x00031d4e) field_cale_ev_content_pane

0x134f,	// (0x00031d5a) field_cale_ev_pane_g1_ParamLimits

0x134f,	// (0x00031d5a) field_cale_ev_pane_g1

0x135b,	// (0x00031d66) field_cale_ev_pane_g2_ParamLimits

0x135b,	// (0x00031d66) field_cale_ev_pane_g2

0x1373,	// (0x00031d7e) field_cale_ev_pane_g3_ParamLimits

0x1373,	// (0x00031d7e) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00040134) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00040134) field_cale_ev_pane_g

0x138b,	// (0x00031d96) field_cale_ev_pane_t1_ParamLimits

0x138b,	// (0x00031d96) field_cale_ev_pane_t1

0x9a8e,	// (0x0003a499) field_cale_ev_content_pane_t1_ParamLimits

0x9a8e,	// (0x0003a499) field_cale_ev_content_pane_t1

0xeb4b,	// (0x0003f556) bg_button_pane_cp01

0xdf84,	// (0x0003e98f) listscroll_cale_week_pane_ParamLimits

0x6983,	// (0x0003738e) popup_toolbar_window_cp01

0xe0c4,	// (0x0003eacf) listscroll_cale_week_pane_t1_ParamLimits

0xdf84,	// (0x0003e98f) listscroll_cale_day_pane_ParamLimits

0x6983,	// (0x0003738e) popup_toolbar_window_cp02

0xe0c4,	// (0x0003eacf) listscroll_cale_day_pane_t1_ParamLimits

0xdf84,	// (0x0003e98f) main_cale_month_pane_ParamLimits

0x91cf,	// (0x00039bda) popup_toolbar_window_cp03_ParamLimits

0x91cf,	// (0x00039bda) popup_toolbar_window_cp03

0x8b28,	// (0x00039533) main_image_pane_g2_ParamLimits

0x8b28,	// (0x00039533) main_image_pane_g2

0x8b34,	// (0x0003953f) main_image_pane_g3_ParamLimits

0x8b34,	// (0x0003953f) main_image_pane_g3

0x0002,

0xf51a,	// (0x0003ff25) main_image_pane_g_ParamLimits

0xf51a,	// (0x0003ff25) main_image_pane_g

0xec65,	// (0x0003f670) main_image_pane_t1_ParamLimits

0x8b40,	// (0x0003954b) main_image_pane_t2_ParamLimits

0x8b40,	// (0x0003954b) main_image_pane_t2

0x8b52,	// (0x0003955d) main_image_pane_t3_ParamLimits

0x8b52,	// (0x0003955d) main_image_pane_t3

0x8b64,	// (0x0003956f) main_image_pane_t4_ParamLimits

0x8b64,	// (0x0003956f) main_image_pane_t4

0x0003,

0xf521,	// (0x0003ff2c) main_image_pane_t_ParamLimits

0xf521,	// (0x0003ff2c) main_image_pane_t

0x8b76,	// (0x00039581) popup_image_details_window_cp01

0x8b80,	// (0x0003958b) popup_toobar_trans_pane_cp01_ParamLimits

0x8b80,	// (0x0003958b) popup_toobar_trans_pane_cp01

0x9140,	// (0x00039b4b) popup_image_details_window_ParamLimits

0x9140,	// (0x00039b4b) popup_image_details_window

0x0d99,	// (0x000317a4) popup_image_focus_window

0x9440,	// (0x00039e4b) camera2_autofocus_pane_ParamLimits

0x9440,	// (0x00039e4b) camera2_autofocus_pane

0x612a,	// (0x00036b35) bg_popup_sub_pane_cp06

0x13a2,	// (0x00031dad) popup_image_focus_window_g1

0x13aa,	// (0x00031db5) popup_image_focus_window_g2

0x13b2,	// (0x00031dbd) popup_image_focus_window_g3

0x13ba,	// (0x00031dc5) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0004013b) popup_image_focus_window_g

0x13c2,	// (0x00031dcd) popup_image_focus_window_t1

0x13d0,	// (0x00031ddb) popup_image_focus_window_t2

0x13e0,	// (0x00031deb) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00040144) popup_image_focus_window_t

0x13ee,	// (0x00031df9) camera2_autofocus_pane_g1

0xf0c9,	// (0x0003fad4) bg_tb_trans_pane_cp01

0x13fc,	// (0x00031e07) popup_image_details_window_g1

0x140f,	// (0x00031e1a) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x00040156) popup_image_details_window_g

0x1438,	// (0x00031e43) popup_image_details_window_t1

0x144a,	// (0x00031e55) popup_image_details_window_t2

0x1463,	// (0x00031e6e) popup_image_details_window_t3

0x1477,	// (0x00031e82) popup_image_details_window_t4

0x1492,	// (0x00031e9d) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0004015d) popup_image_details_window_t

0xdf70,	// (0x0003e97b) bg_calc_paper_pane_ParamLimits

0x612a,	// (0x00036b35) grid_highlight_pane_cp013

0x673c,	// (0x00037147) list_calc_pane_ParamLimits

0x674e,	// (0x00037159) scroll_pane_cp024

0xdf84,	// (0x0003e98f) bg_calc_display_pane_ParamLimits

0x6756,	// (0x00037161) calc_display_pane_t1_ParamLimits

0x676b,	// (0x00037176) calc_display_pane_t2_ParamLimits

0x6780,	// (0x0003718b) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0003fb8d) calc_display_pane_t_ParamLimits

0x6853,	// (0x0003725e) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0003fbaa) cell_calc_pane_g

0x685c,	// (0x00037267) cell_calc_pane_t1

0xdfe3,	// (0x0003e9ee) grid_highlight_pane_cp02_ParamLimits

0xdff9,	// (0x0003ea04) toolbar_button_pane_cp01_ParamLimits

0xdff9,	// (0x0003ea04) toolbar_button_pane_cp01

0xecaa,	// (0x0003f6b5) temp_image_control_pane_ParamLimits

0xecaa,	// (0x0003f6b5) temp_image_control_pane

0xf0c9,	// (0x0003fad4) main_mp3_pane

0x14ac,	// (0x00031eb7) temp_image_control_pane_g1_ParamLimits

0x14ac,	// (0x00031eb7) temp_image_control_pane_g1

0x14ba,	// (0x00031ec5) temp_image_control_pane_g2_ParamLimits

0x14ba,	// (0x00031ec5) temp_image_control_pane_g2

0x14cc,	// (0x00031ed7) temp_image_control_pane_g3_ParamLimits

0x14cc,	// (0x00031ed7) temp_image_control_pane_g3

0x9adc,	// (0x0003a4e7) temp_image_control_pane_g4_ParamLimits

0x9adc,	// (0x0003a4e7) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x00040168) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x00040168) temp_image_control_pane_g

0x14ac,	// (0x00031eb7) main_mp3_pane_g1

0x9aed,	// (0x0003a4f8) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00040171) main_mp3_pane_g

0x150f,	// (0x00031f1a) main_mp3_pane_t1

0xe13b,	// (0x0003eb46) main_camera_pane_g8_ParamLimits

0xe13b,	// (0x0003eb46) main_camera_pane_g8

0x70aa,	// (0x00037ab5) main_video_pane_g7_ParamLimits

0x70aa,	// (0x00037ab5) main_video_pane_g7

0x9583,	// (0x00039f8e) main_camera2_pane_t7_ParamLimits

0x9583,	// (0x00039f8e) main_camera2_pane_t7

0xe28d,	// (0x0003ec98) scroll_pane_cp025_ParamLimits

0xe28d,	// (0x0003ec98) scroll_pane_cp025

0xe2a1,	// (0x0003ecac) scroll_pane_cp026_ParamLimits

0xe2a1,	// (0x0003ecac) scroll_pane_cp026

0xe2b0,	// (0x0003ecbb) wml_content_pane_ParamLimits

0x612a,	// (0x00036b35) main_touch_calib_pane

0x9b91,	// (0x0003a59c) main_touch_calib_pane_g1

0x9b9d,	// (0x0003a5a8) main_touch_calib_pane_g2

0x9ba9,	// (0x0003a5b4) main_touch_calib_pane_g3

0x9bb5,	// (0x0003a5c0) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0004018f) main_touch_calib_pane_g

0x9bc1,	// (0x0003a5cc) main_touch_calib_pane_t1

0x9bd8,	// (0x0003a5e3) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x00040198) main_touch_calib_pane_t

0xe921,	// (0x0003f32c) mup_progress_pane_cp02

0xe940,	// (0x0003f34b) navi_pane_g1

0xe9a2,	// (0x0003f3ad) navi_pane_mp_t3

0xf0c9,	// (0x0003fad4) main_mp3_pane_ParamLimits

0x9211,	// (0x00039c1c) navi_pane_ParamLimits

0x14ac,	// (0x00031eb7) main_mp3_pane_g1_ParamLimits

0x9aed,	// (0x0003a4f8) main_mp3_pane_g2_ParamLimits

0x9af9,	// (0x0003a504) main_mp3_pane_g3_ParamLimits

0x9af9,	// (0x0003a504) main_mp3_pane_g3

0x9b05,	// (0x0003a510) main_mp3_pane_g4_ParamLimits

0x9b05,	// (0x0003a510) main_mp3_pane_g4

0x14dc,	// (0x00031ee7) main_mp3_pane_g5_ParamLimits

0x14dc,	// (0x00031ee7) main_mp3_pane_g5

0x14ea,	// (0x00031ef5) main_mp3_pane_g6_ParamLimits

0x14ea,	// (0x00031ef5) main_mp3_pane_g6

0x14f7,	// (0x00031f02) main_mp3_pane_g7_ParamLimits

0x14f7,	// (0x00031f02) main_mp3_pane_g7

0x1503,	// (0x00031f0e) main_mp3_pane_g8_ParamLimits

0x1503,	// (0x00031f0e) main_mp3_pane_g8

0xf766,	// (0x00040171) main_mp3_pane_g_ParamLimits

0x9b11,	// (0x0003a51c) main_mp3_pane_t2

0x9b21,	// (0x0003a52c) main_mp3_pane_t3

0x151d,	// (0x00031f28) main_mp3_pane_t4

0x152b,	// (0x00031f36) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00040182) main_mp3_pane_t

0x1539,	// (0x00031f44) mup_progress_pane_cp01

0x4fba,	// (0x000359c5) aid_zoom_text_secondary2

0x132f,	// (0x00031d3a) list_cale_ev2_pane

0x1337,	// (0x00031d42) scroll_pane_cp023_ParamLimits

0x9c2f,	// (0x0003a63a) field_cale_ev2_pane_ParamLimits

0x9c2f,	// (0x0003a63a) field_cale_ev2_pane

0x52c2,	// (0x00035ccd) field_cale_ev2_pane_g1_ParamLimits

0x52c2,	// (0x00035ccd) field_cale_ev2_pane_g1

0x52ce,	// (0x00035cd9) field_cale_ev2_pane_g2_ParamLimits

0x52ce,	// (0x00035cd9) field_cale_ev2_pane_g2

0x52e6,	// (0x00035cf1) field_cale_ev2_pane_g3_ParamLimits

0x52e6,	// (0x00035cf1) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x000401a3) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x000401a3) field_cale_ev2_pane_g

0x530a,	// (0x00035d15) field_cale_ev2_pane_t1_ParamLimits

0x530a,	// (0x00035d15) field_cale_ev2_pane_t1

0x5321,	// (0x00035d2c) field_cale_ev2_pane_t2_ParamLimits

0x5321,	// (0x00035d2c) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x000401ac) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x000401ac) field_cale_ev2_pane_t

0x8a04,	// (0x0003940f) main_postcard_pane_g5_ParamLimits

0x8a04,	// (0x0003940f) main_postcard_pane_g5

0x8a12,	// (0x0003941d) main_postcard_pane_g6_ParamLimits

0x8a12,	// (0x0003941d) main_postcard_pane_g6

0x6ee8,	// (0x000378f3) camera2_autofocus_pane_cp_ParamLimits

0x6ee8,	// (0x000378f3) camera2_autofocus_pane_cp

0xf0c9,	// (0x0003fad4) main_mup3_pane

0x9c6d,	// (0x0003a678) main_mup3_pane_g1_ParamLimits

0x9c6d,	// (0x0003a678) main_mup3_pane_g1

0x9c8e,	// (0x0003a699) main_mup3_pane_g2_ParamLimits

0x9c8e,	// (0x0003a699) main_mup3_pane_g2

0x9d0a,	// (0x0003a715) main_mup3_pane_g3_ParamLimits

0x9d0a,	// (0x0003a715) main_mup3_pane_g3

0x9d4b,	// (0x0003a756) main_mup3_pane_g4_ParamLimits

0x9d4b,	// (0x0003a756) main_mup3_pane_g4

0x9d8c,	// (0x0003a797) main_mup3_pane_g5_ParamLimits

0x9d8c,	// (0x0003a797) main_mup3_pane_g5

0x9dcd,	// (0x0003a7d8) main_mup3_pane_g6_ParamLimits

0x9dcd,	// (0x0003a7d8) main_mup3_pane_g6

0x15b5,	// (0x00031fc0) main_mup3_pane_g7_ParamLimits

0x15b5,	// (0x00031fc0) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x000401bc) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x000401bc) main_mup3_pane_g

0x9e3f,	// (0x0003a84a) main_mup3_pane_t1_ParamLimits

0x9e3f,	// (0x0003a84a) main_mup3_pane_t1

0x9eb2,	// (0x0003a8bd) main_mup3_pane_t2_ParamLimits

0x9eb2,	// (0x0003a8bd) main_mup3_pane_t2

0x9f7f,	// (0x0003a98a) main_mup3_pane_t4_ParamLimits

0x9f7f,	// (0x0003a98a) main_mup3_pane_t4

0x9fd3,	// (0x0003a9de) main_mup3_pane_t5_ParamLimits

0x9fd3,	// (0x0003a9de) main_mup3_pane_t5

0xa07f,	// (0x0003aa8a) main_mup3_pane_t6_ParamLimits

0xa07f,	// (0x0003aa8a) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x000401cd) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x000401cd) main_mup3_pane_t

0xa127,	// (0x0003ab32) mup3_progress_pane_ParamLimits

0xa127,	// (0x0003ab32) mup3_progress_pane

0xa192,	// (0x0003ab9d) popup_mup3_control_window_ParamLimits

0xa192,	// (0x0003ab9d) popup_mup3_control_window

0x15c3,	// (0x00031fce) popup_mup3_text_window

0xa1af,	// (0x0003abba) mup3_progress_pane_t1

0xa1c6,	// (0x0003abd1) mup3_progress_pane_t2

0x15cb,	// (0x00031fd6) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x000401da) mup3_progress_pane_t

0x15e2,	// (0x00031fed) mup_progress_pane_cp03

0x612a,	// (0x00036b35) bg_tb_trans_pane_cp04

0xa1dd,	// (0x0003abe8) mup3_volume_pane

0xa1e5,	// (0x0003abf0) popup_mup3_control_window_g1

0x281c,	// (0x00033227) mup3_volume_pane_g1

0x2825,	// (0x00033230) mup3_volume_pane_g2

0x282e,	// (0x00033239) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x000401e1) mup3_volume_pane_g

0x612a,	// (0x00036b35) bg_tb_trans_pane_cp03

0x15f2,	// (0x00031ffd) popup_mup3_text_window_g1

0x15fa,	// (0x00032005) popup_mup3_text_window_t1

0xdfcc,	// (0x0003e9d7) list_calc_item_pane_g1_ParamLimits

0x0fb5,	// (0x000319c0) mup_volume_pane_cp_g1

0x9bef,	// (0x0003a5fa) main_touch_calib_pane_t3

0x9c03,	// (0x0003a60e) main_touch_calib_pane_t4

0x9c19,	// (0x0003a624) main_touch_calib_pane_t5

0x6134,	// (0x00036b3f) aid_cell_size_toolbar2

0x613c,	// (0x00036b47) aid_popup3_width_pane

0x4fb2,	// (0x000359bd) aid_zoom_text_msg_primary

0x6ebb,	// (0x000378c6) vorec_t7

0xdf90,	// (0x0003e99b) bg_calc_paper_pane_g1_ParamLimits

0xdf9c,	// (0x0003e9a7) bg_calc_paper_pane_g2_ParamLimits

0xdfa8,	// (0x0003e9b3) bg_calc_paper_pane_g3_ParamLimits

0xdfb4,	// (0x0003e9bf) bg_calc_paper_pane_g4_ParamLimits

0xdfc0,	// (0x0003e9cb) bg_calc_paper_pane_g5_ParamLimits

0x67c1,	// (0x000371cc) bg_calc_paper_pane_g6_ParamLimits

0x67d2,	// (0x000371dd) bg_calc_paper_pane_g7_ParamLimits

0x67e3,	// (0x000371ee) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0003fb94) bg_calc_paper_pane_g_ParamLimits

0x67f4,	// (0x000371ff) calc_bg_paper_pane_g9_ParamLimits

0x6fd9,	// (0x000379e4) image_qvga_pane_ParamLimits

0x6fd9,	// (0x000379e4) image_qvga_pane

0xdeb9,	// (0x0003e8c4) bg_popup_sub_pane_cp04_ParamLimits

0xebe1,	// (0x0003f5ec) popup_mup_playback_window_g1_ParamLimits

0xebed,	// (0x0003f5f8) popup_mup_playback_window_t1_ParamLimits

0xec02,	// (0x0003f60d) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0003ff20) popup_mup_playback_window_t_ParamLimits

0x96b2,	// (0x0003a0bd) main_mup2_pane_g3_ParamLimits

0x96b2,	// (0x0003a0bd) main_mup2_pane_g3

0x721e,	// (0x00037c29) popup_toolbar_window_cp04

0xeffd,	// (0x0003fa08) popup_call2_audio_second_window_g3_ParamLimits

0xeffd,	// (0x0003fa08) popup_call2_audio_second_window_g3

0x0393,	// (0x00030d9e) popup_call2_audio_first_window_g4_ParamLimits

0x0393,	// (0x00030d9e) popup_call2_audio_first_window_g4

0x0a12,	// (0x0003141d) popup_call2_audio_in_window_g4_ParamLimits

0x0a12,	// (0x0003141d) popup_call2_audio_in_window_g4

0x8b1b,	// (0x00039526) aid_area_sk_bg_cut_ParamLimits

0x8b1b,	// (0x00039526) aid_area_sk_bg_cut

0xec17,	// (0x0003f622) aid_area_sk_bg_cut_2_ParamLimits

0xec17,	// (0x0003f622) aid_area_sk_bg_cut_2

0x9a40,	// (0x0003a44b) aid_placing_details_win

0x9a48,	// (0x0003a453) aid_placing_details_win_2

0x13ee,	// (0x00031df9) camera2_autofocus_pane_g1_ParamLimits

0x6393,	// (0x00036d9e) popup_fixed_preview_cale_window_ParamLimits

0x6393,	// (0x00036d9e) popup_fixed_preview_cale_window

0xe9f1,	// (0x0003f3fc) navi_slider_pane_g3

0xe9fa,	// (0x0003f405) navi_slider_pane_g4

0xea03,	// (0x0003f40e) navi_slider_pane_g5

0xe9f1,	// (0x0003f3fc) navi_slider_pane_g6

0x841b,	// (0x00038e26) navi_slider_pane_g7

0xeb18,	// (0x0003f523) mup_scale_pane_g3

0xeb21,	// (0x0003f52c) mup_scale_pane_g4

0xeb2a,	// (0x0003f535) mup_scale_pane_g5

0x8896,	// (0x000392a1) mup_scale_pane_g6

0x889f,	// (0x000392aa) mup_scale_pane_g7

0xe9f1,	// (0x0003f3fc) cams2_slider_pane_g3

0x106a,	// (0x00031a75) cams2_slider_pane_g4

0x9998,	// (0x0003a3a3) cams2_slider_pane_g5

0xe9f1,	// (0x0003f3fc) cams2_slider_pane_g6

0x99a0,	// (0x0003a3ab) cams2_slider_pane_g7

0x12ac,	// (0x00031cb7) camera2_autofocus_pane_cp_g1

0x1608,	// (0x00032013) bg_popup_preview_window_pane_cp02_ParamLimits

0x1608,	// (0x00032013) bg_popup_preview_window_pane_cp02

0x1614,	// (0x0003201f) list_fp_cale_pane_ParamLimits

0x1614,	// (0x0003201f) list_fp_cale_pane

0x1620,	// (0x0003202b) popup_fixed_preview_cale_window_t1_ParamLimits

0x1620,	// (0x0003202b) popup_fixed_preview_cale_window_t1

0xa1ee,	// (0x0003abf9) popup_fixed_preview_cale_window_t2_ParamLimits

0xa1ee,	// (0x0003abf9) popup_fixed_preview_cale_window_t2

0xa203,	// (0x0003ac0e) popup_fixed_preview_cale_window_t3_ParamLimits

0xa203,	// (0x0003ac0e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x000401e8) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x000401e8) popup_fixed_preview_cale_window_t

0xa218,	// (0x0003ac23) list_single_fp_cale_pane_ParamLimits

0xa218,	// (0x0003ac23) list_single_fp_cale_pane

0x163e,	// (0x00032049) list_single_fp_cale_pane_g1_ParamLimits

0x163e,	// (0x00032049) list_single_fp_cale_pane_g1

0x164a,	// (0x00032055) list_single_fp_cale_pane_g2_ParamLimits

0x164a,	// (0x00032055) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x000401ef) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x000401ef) list_single_fp_cale_pane_g

0x1663,	// (0x0003206e) list_single_fp_cale_pane_t1_ParamLimits

0x1663,	// (0x0003206e) list_single_fp_cale_pane_t1

0x1675,	// (0x00032080) list_single_fp_cale_pane_t2_ParamLimits

0x1675,	// (0x00032080) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x000401f6) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x000401f6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x612a,	// (0x00036b35) main_dialer_pane

0xa228,	// (0x0003ac33) aid_cell_size_keypad

0xa232,	// (0x0003ac3d) dialer_ne_pane

0xa23c,	// (0x0003ac47) grid_dialer_command_1_pane

0xa244,	// (0x0003ac4f) grid_dialer_command_2_pane

0xa24c,	// (0x0003ac57) grid_dialer_keypad_pane

0xa260,	// (0x0003ac6b) bg_popup_call_pane_cp06_ParamLimits

0xa260,	// (0x0003ac6b) bg_popup_call_pane_cp06

0xa26c,	// (0x0003ac77) dialer_ne_clear_pane_ParamLimits

0xa26c,	// (0x0003ac77) dialer_ne_clear_pane

0x16a8,	// (0x000320b3) dialer_ne_pane_g1

0x16b0,	// (0x000320bb) dialer_ne_pane_t1_ParamLimits

0x16b0,	// (0x000320bb) dialer_ne_pane_t1

0xa278,	// (0x0003ac83) dialer_ne_pane_t2_ParamLimits

0xa278,	// (0x0003ac83) dialer_ne_pane_t2

0xa295,	// (0x0003aca0) dialer_ne_pane_t3_ParamLimits

0xa295,	// (0x0003aca0) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x000401fb) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x000401fb) dialer_ne_pane_t

0xa2b9,	// (0x0003acc4) dialer_ne_pane_t3_copy1_ParamLimits

0xa2b9,	// (0x0003acc4) dialer_ne_pane_t3_copy1

0xa2dd,	// (0x0003ace8) cell_dialer_keypad_pane_ParamLimits

0xa2dd,	// (0x0003ace8) cell_dialer_keypad_pane

0xa2f4,	// (0x0003acff) cell_dialer_command_1_pane_ParamLimits

0xa2f4,	// (0x0003acff) cell_dialer_command_1_pane

0xa30a,	// (0x0003ad15) cell_dialer_command_2_pane_ParamLimits

0xa30a,	// (0x0003ad15) cell_dialer_command_2_pane

0x16c2,	// (0x000320cd) bg_button_pane_cp02_ParamLimits

0x16c2,	// (0x000320cd) bg_button_pane_cp02

0xa319,	// (0x0003ad24) cell_dialer_keypad_pane_g1_ParamLimits

0xa319,	// (0x0003ad24) cell_dialer_keypad_pane_g1

0x16c2,	// (0x000320cd) bg_button_pane_cp03_ParamLimits

0x16c2,	// (0x000320cd) bg_button_pane_cp03

0xa32d,	// (0x0003ad38) cell_dialer_command_1_pane_g1_ParamLimits

0xa32d,	// (0x0003ad38) cell_dialer_command_1_pane_g1

0x16ce,	// (0x000320d9) bg_button_pane_cp04

0xa341,	// (0x0003ad4c) cell_dialer_command_2_pane_g1

0xe9e0,	// (0x0003f3eb) bg_button_pane_cp06

0x16d6,	// (0x000320e1) dialer_ne_clear_pane_g1

0x835e,	// (0x00038d69) navi_pane_g2

0x838c,	// (0x00038d97) navi_pane_g3

0x0002,

0xf418,	// (0x0003fe23) navi_pane_g

0x83b7,	// (0x00038dc2) navi_pane_mv_g2

0x83de,	// (0x00038de9) navi_pane_mv_g5

0x83e6,	// (0x00038df1) navi_pane_mv_t1

0xdf84,	// (0x0003e98f) main_clock2_pane

0xa373,	// (0x0003ad7e) main_clock2_list_pane_ParamLimits

0xa373,	// (0x0003ad7e) main_clock2_list_pane

0xa39d,	// (0x0003ada8) main_clock2_pane_t1_ParamLimits

0xa39d,	// (0x0003ada8) main_clock2_pane_t1

0xa3cb,	// (0x0003add6) main_clock2_pane_t2_ParamLimits

0xa3cb,	// (0x0003add6) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x00040202) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x00040202) main_clock2_pane_t

0xa434,	// (0x0003ae3f) popup_clock_analogue_window_cp03_ParamLimits

0xa434,	// (0x0003ae3f) popup_clock_analogue_window_cp03

0xa454,	// (0x0003ae5f) popup_clock_digital_window_cp02_ParamLimits

0xa454,	// (0x0003ae5f) popup_clock_digital_window_cp02

0xa4c5,	// (0x0003aed0) main_clock2_list_single_pane_ParamLimits

0xa4c5,	// (0x0003aed0) main_clock2_list_single_pane

0xe9e0,	// (0x0003f3eb) list_highlight_pane_cp05

0x16de,	// (0x000320e9) main_clock2_list_single_pane_t1

0x721e,	// (0x00037c29) popup_toolbar_window_cp04_ParamLimits

0x9aac,	// (0x0003a4b7) camera2_autofocus_pane_g2_ParamLimits

0x9aac,	// (0x0003a4b7) camera2_autofocus_pane_g2

0x9ab8,	// (0x0003a4c3) camera2_autofocus_pane_g3_ParamLimits

0x9ab8,	// (0x0003a4c3) camera2_autofocus_pane_g3

0x9ac4,	// (0x0003a4cf) camera2_autofocus_pane_g4_ParamLimits

0x9ac4,	// (0x0003a4cf) camera2_autofocus_pane_g4

0x9ad0,	// (0x0003a4db) camera2_autofocus_pane_g5_ParamLimits

0x9ad0,	// (0x0003a4db) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0004014b) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0004014b) camera2_autofocus_pane_g

0x9c4d,	// (0x0003a658) camera2_autofocus_pane_cp_g2

0x9c55,	// (0x0003a660) camera2_autofocus_pane_cp_g3

0x9c5d,	// (0x0003a668) camera2_autofocus_pane_cp_g4

0x9c65,	// (0x0003a670) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x000401b1) camera2_autofocus_pane_cp_g

0xa258,	// (0x0003ac63) popup_dialer_spcha_window

0x612a,	// (0x00036b35) bg_popup_sub_pane_cp07

0x16ec,	// (0x000320f7) list_spcha_pane

0x16f4,	// (0x000320ff) list_single_spcha_pane_ParamLimits

0x16f4,	// (0x000320ff) list_single_spcha_pane

0x612a,	// (0x00036b35) list_highlight_pane_cp06

0x1705,	// (0x00032110) list_single_spcha_pane_t1

0x07bc,	// (0x000311c7) popup_call2_audio_out_window_g4_ParamLimits

0x07bc,	// (0x000311c7) popup_call2_audio_out_window_g4

0x612a,	// (0x00036b35) main_imed2_pane

0x0da3,	// (0x000317ae) popup_imed_adjust2_window

0x914e,	// (0x00039b59) popup_imed_trans_window_ParamLimits

0x914e,	// (0x00039b59) popup_imed_trans_window

0x10e4,	// (0x00031aef) popup_blid_sat_info2_window_t1

0x10f2,	// (0x00031afd) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x000400e0) popup_blid_sat_info2_window_t

0xa56f,	// (0x0003af7a) aid_size_cell_colour_35

0xa589,	// (0x0003af94) aid_size_cell_colour_112

0xa5a0,	// (0x0003afab) aid_size_cell_effect

0xf0c9,	// (0x0003fad4) bg_tb_trans_pane_cp02

0xf0d7,	// (0x0003fae2) heading_imed_pane

0xa5ba,	// (0x0003afc5) listscroll_imed_pane

0x1713,	// (0x0003211e) heading_imed_pane_g1

0x171b,	// (0x00032126) heading_imed_pane_t1

0x1729,	// (0x00032134) grid_imed_colour_35_pane_ParamLimits

0x1729,	// (0x00032134) grid_imed_colour_35_pane

0xa5c6,	// (0x0003afd1) grid_imed_effect_pane

0x1745,	// (0x00032150) list_imed_aspect_pane

0xa5d6,	// (0x0003afe1) scroll_pane_cp027_ParamLimits

0xa5d6,	// (0x0003afe1) scroll_pane_cp027

0xa5e2,	// (0x0003afed) cell_imed_effect_pane_ParamLimits

0xa5e2,	// (0x0003afed) cell_imed_effect_pane

0x174d,	// (0x00032158) cell_imed_colour_pane_ParamLimits

0x174d,	// (0x00032158) cell_imed_colour_pane

0x1797,	// (0x000321a2) cell_imed_colour_pane_g1_ParamLimits

0x1797,	// (0x000321a2) cell_imed_colour_pane_g1

0x17a8,	// (0x000321b3) hgihlgiht_grid_pane_cp016_ParamLimits

0x17a8,	// (0x000321b3) hgihlgiht_grid_pane_cp016

0xa5fe,	// (0x0003b009) cell_imed_effect_pane_g1

0xa606,	// (0x0003b011) grid_highlight_pane_cp017

0x17b9,	// (0x000321c4) list_imed_single_pane_ParamLimits

0x17b9,	// (0x000321c4) list_imed_single_pane

0x612a,	// (0x00036b35) list_highlight_pane_cp07

0x17cd,	// (0x000321d8) list_imed_aspect_pane_comp1_t1

0x0d77,	// (0x00031782) bg_tb_trans_pane_cp05

0x17ef,	// (0x000321fa) popup_imed_adjust2_window_g1

0x1816,	// (0x00032221) popup_imed_adjust2_window_t1

0x182e,	// (0x00032239) slider_imed_adjust_pane

0x1842,	// (0x0003224d) slider_imed_adjust_pane_g1

0x1852,	// (0x0003225d) slider_imed_adjust_pane_g2

0x1862,	// (0x0003226d) slider_imed_adjust_pane_g3

0x1873,	// (0x0003227e) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0004021f) slider_imed_adjust_pane_g

0xa60f,	// (0x0003b01a) aid_size_cell_clipart2

0xa61b,	// (0x0003b026) grid_imed_clipart_pane

0x1884,	// (0x0003228f) scroll_pane_cp031

0xa625,	// (0x0003b030) cell_imed_clipart_pane_ParamLimits

0xa625,	// (0x0003b030) cell_imed_clipart_pane

0xa643,	// (0x0003b04e) cell_imed_clipart_pane_g1

0x612a,	// (0x00036b35) grid_highlight_pane_cp014

0xa37f,	// (0x0003ad8a) main_clock2_pane_g1_ParamLimits

0xa37f,	// (0x0003ad8a) main_clock2_pane_g1

0xa470,	// (0x0003ae7b) aid_call2_pane_cp10

0xa482,	// (0x0003ae8d) aid_call_pane_cp10

0xe915,	// (0x0003f320) popup_clock_analogue_window_cp10_g1

0xe915,	// (0x0003f320) popup_clock_analogue_window_cp10_g2

0xa494,	// (0x0003ae9f) popup_clock_analogue_window_cp10_g3

0xa494,	// (0x0003ae9f) popup_clock_analogue_window_cp10_g4

0xe915,	// (0x0003f320) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0004020d) popup_clock_analogue_window_cp10_g

0xa4a6,	// (0x0003aeb1) popup_clock_analogue_window_cp10_t1

0xa4d7,	// (0x0003aee2) clock_digital_number_pane_cp10_ParamLimits

0xa4d7,	// (0x0003aee2) clock_digital_number_pane_cp10

0xa4ef,	// (0x0003aefa) clock_digital_number_pane_cp11_ParamLimits

0xa4ef,	// (0x0003aefa) clock_digital_number_pane_cp11

0xa507,	// (0x0003af12) clock_digital_number_pane_cp12_ParamLimits

0xa507,	// (0x0003af12) clock_digital_number_pane_cp12

0xa51f,	// (0x0003af2a) clock_digital_number_pane_cp13_ParamLimits

0xa51f,	// (0x0003af2a) clock_digital_number_pane_cp13

0xa537,	// (0x0003af42) clock_digital_separator_pane_cp10_ParamLimits

0xa537,	// (0x0003af42) clock_digital_separator_pane_cp10

0xa54f,	// (0x0003af5a) popup_clock_digital_window_cp02_t1_ParamLimits

0xa54f,	// (0x0003af5a) popup_clock_digital_window_cp02_t1

0xdeb1,	// (0x0003e8bc) clock_digital_number_pane_cp10_g1

0xdeb1,	// (0x0003e8bc) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00040228) clock_digital_number_pane_cp10_g

0xdeb1,	// (0x0003e8bc) clock_digital_separator_pane_cp10_g1

0xdeb1,	// (0x0003e8bc) clock_digital_separator_pane_g2_cp10

0xe9b0,	// (0x0003f3bb) navi_pane_vded_g4

0xe9b9,	// (0x0003f3c4) navi_pane_vded_g5

0xe9c2,	// (0x0003f3cd) navi_pane_vded_t1

0x612a,	// (0x00036b35) main_vded_pane

0xa64c,	// (0x0003b057) main_vded_pane_g1

0xa658,	// (0x0003b063) main_vded_pane_g2

0xa662,	// (0x0003b06d) main_vded_pane_g3

0x0002,

0xf822,	// (0x0004022d) main_vded_pane_g

0xa66c,	// (0x0003b077) main_vded_pane_t1

0xa67a,	// (0x0003b085) main_vded_pane_t2

0x0001,

0xf829,	// (0x00040234) main_vded_pane_t

0xa688,	// (0x0003b093) vded_slider_pane

0xa692,	// (0x0003b09d) vded_video_pane

0x188c,	// (0x00032297) vded_video_pane_g1

0xa69e,	// (0x0003b0a9) vded_video_pane_g2

0x12ac,	// (0x00031cb7) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00040239) vded_video_pane_g

0x1896,	// (0x000322a1) vded_slider_pane_g1

0x0fb5,	// (0x000319c0) vded_slider_pane_g2

0x189f,	// (0x000322aa) vded_slider_pane_g3

0x18a8,	// (0x000322b3) vded_slider_pane_g4

0x18b1,	// (0x000322bc) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00040240) vded_slider_pane_g

0xa186,	// (0x0003ab91) mup3_rocker_pane_ParamLimits

0xa186,	// (0x0003ab91) mup3_rocker_pane

0xa6a7,	// (0x0003b0b2) mup3_control_keys_pane_g1

0xa6af,	// (0x0003b0ba) mup3_control_keys_pane_g2

0xa6b7,	// (0x0003b0c2) mup3_control_keys_pane_g3

0xa6bf,	// (0x0003b0ca) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0004024b) mup3_control_keys_pane_g

0x63b1,	// (0x00036dbc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x63b1,	// (0x00036dbc) popup_toolbar2_fixed_window_cp01

0xa1a2,	// (0x0003abad) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa1a2,	// (0x0003abad) popup_toolbar2_fixed_window_cp02

0x00fb,	// (0x00030b06) popup_call2_audio_second_window_t4_ParamLimits

0x00fb,	// (0x00030b06) popup_call2_audio_second_window_t4

0x0629,	// (0x00031034) popup_call2_audio_first_window_t6_ParamLimits

0x0629,	// (0x00031034) popup_call2_audio_first_window_t6

0x08bf,	// (0x000312ca) popup_call2_audio_out_window_t6_ParamLimits

0x08bf,	// (0x000312ca) popup_call2_audio_out_window_t6

0x612a,	// (0x00036b35) main_vitu_pane

0xa6cf,	// (0x0003b0da) aid_size_cell_itu_ParamLimits

0xa6cf,	// (0x0003b0da) aid_size_cell_itu

0x63d9,	// (0x00036de4) bg_popup_window_pane_cp08_ParamLimits

0x63d9,	// (0x00036de4) bg_popup_window_pane_cp08

0xa6dd,	// (0x0003b0e8) field_vitu_entry_pane_ParamLimits

0xa6dd,	// (0x0003b0e8) field_vitu_entry_pane

0xa6ec,	// (0x0003b0f7) grid_vitu_function_pane_ParamLimits

0xa6ec,	// (0x0003b0f7) grid_vitu_function_pane

0xa6fc,	// (0x0003b107) grid_vitu_itu_pane_ParamLimits

0xa6fc,	// (0x0003b107) grid_vitu_itu_pane

0xa70c,	// (0x0003b117) cell_vitu_itu_pane_ParamLimits

0xa70c,	// (0x0003b117) cell_vitu_itu_pane

0xa723,	// (0x0003b12e) cell_vitu_function_pane_ParamLimits

0xa723,	// (0x0003b12e) cell_vitu_function_pane

0xf0c9,	// (0x0003fad4) bg_popup_sub_pane_cp08_ParamLimits

0xf0c9,	// (0x0003fad4) bg_popup_sub_pane_cp08

0xa737,	// (0x0003b142) field_vitu_entry_pane_t1_ParamLimits

0xa737,	// (0x0003b142) field_vitu_entry_pane_t1

0x18d2,	// (0x000322dd) field_vitu_entry_pane_t2_ParamLimits

0x18d2,	// (0x000322dd) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00040259) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00040259) field_vitu_entry_pane_t

0x18ef,	// (0x000322fa) bg_button_pane_cp05_ParamLimits

0x18ef,	// (0x000322fa) bg_button_pane_cp05

0xa751,	// (0x0003b15c) cell_vitu_itu_pane_g1

0xa769,	// (0x0003b174) cell_vitu_itu_pane_t1_ParamLimits

0xa769,	// (0x0003b174) cell_vitu_itu_pane_t1

0xa77b,	// (0x0003b186) cell_vitu_itu_pane_t2_ParamLimits

0xa77b,	// (0x0003b186) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0004025e) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0004025e) cell_vitu_itu_pane_t

0x18fd,	// (0x00032308) bg_button_pane_cp07

0xa7b0,	// (0x0003b1bb) cell_vitu_function_pane_g1

0x6667,	// (0x00037072) main_calc_pane_g1

0x6170,	// (0x00036b7b) aid_visual_content_pane

0x612a,	// (0x00036b35) main_vradio_pane

0xa7b9,	// (0x0003b1c4) main_vradio_pane_g1_ParamLimits

0xa7b9,	// (0x0003b1c4) main_vradio_pane_g1

0x1907,	// (0x00032312) main_vradio_pane_g2_ParamLimits

0x1907,	// (0x00032312) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00040265) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00040265) main_vradio_pane_g

0xa7c7,	// (0x0003b1d2) main_vradio_pane_t1_ParamLimits

0xa7c7,	// (0x0003b1d2) main_vradio_pane_t1

0xa7d9,	// (0x0003b1e4) main_vradio_pane_t2_ParamLimits

0xa7d9,	// (0x0003b1e4) main_vradio_pane_t2

0x1914,	// (0x0003231f) main_vradio_pane_t3_ParamLimits

0x1914,	// (0x0003231f) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0004026a) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0004026a) main_vradio_pane_t

0xa7eb,	// (0x0003b1f6) vradio_rocker_control_pane_ParamLimits

0xa7eb,	// (0x0003b1f6) vradio_rocker_control_pane

0xa7f7,	// (0x0003b202) vradio_station_info_pane_ParamLimits

0xa7f7,	// (0x0003b202) vradio_station_info_pane

0x1928,	// (0x00032333) vradio_frequency_info_pane_ParamLimits

0x1928,	// (0x00032333) vradio_frequency_info_pane

0x12ac,	// (0x00031cb7) vradio_station_info_pane_g1

0x1937,	// (0x00032342) vradio_station_info_pane_t1_ParamLimits

0x1937,	// (0x00032342) vradio_station_info_pane_t1

0x1959,	// (0x00032364) vradio_station_info_pane_t2_ParamLimits

0x1959,	// (0x00032364) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00040271) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00040271) vradio_station_info_pane_t

0x196b,	// (0x00032376) vradio_tuning_pane

0x1973,	// (0x0003237e) vradio_rocker_control_pane_g1

0x197b,	// (0x00032386) vradio_rocker_control_pane_g2

0x1983,	// (0x0003238e) vradio_rocker_control_pane_g3

0x198b,	// (0x00032396) vradio_rocker_control_pane_g4

0x1993,	// (0x0003239e) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x00040276) vradio_rocker_control_pane_g

0xa804,	// (0x0003b20f) vradio_frequency_info_pane_g1

0x199b,	// (0x000323a6) vradio_frequency_info_pane_t1_ParamLimits

0x199b,	// (0x000323a6) vradio_frequency_info_pane_t1

0xa80e,	// (0x0003b219) vradio_tuning_pane_g1

0xa819,	// (0x0003b224) vradio_tuning_pane_t1

0x61b9,	// (0x00036bc4) area_side_right_pane_ParamLimits

0x61b9,	// (0x00036bc4) area_side_right_pane

0x0d3e,	// (0x00031749) status_small_pane_g1

0x0d46,	// (0x00031751) status_small_pane_g2

0x0d4f,	// (0x0003175a) status_small_pane_g3

0x0d58,	// (0x00031763) status_small_pane_g4

0x0003,

0xf62b,	// (0x00040036) status_small_pane_g

0x0d61,	// (0x0003176c) status_small_pane_t1

0x612a,	// (0x00036b35) main_video3_pane

0x19af,	// (0x000323ba) cams_zoom_vslider_pane

0x19b7,	// (0x000323c2) image3_wide_pane_ParamLimits

0x19b7,	// (0x000323c2) image3_wide_pane

0x19d1,	// (0x000323dc) image3_wide_small_pane

0x19dd,	// (0x000323e8) main_video3_pane_g1_ParamLimits

0x19dd,	// (0x000323e8) main_video3_pane_g1

0x19f9,	// (0x00032404) main_video3_pane_g2_ParamLimits

0x19f9,	// (0x00032404) main_video3_pane_g2

0x0001,

0xf876,	// (0x00040281) main_video3_pane_g_ParamLimits

0xf876,	// (0x00040281) main_video3_pane_g

0x1a15,	// (0x00032420) main_video3_pane_t1_ParamLimits

0x1a15,	// (0x00032420) main_video3_pane_t1

0x1a40,	// (0x0003244b) main_video3_pane_t2_ParamLimits

0x1a40,	// (0x0003244b) main_video3_pane_t2

0x1a6d,	// (0x00032478) main_video3_pane_t3_ParamLimits

0x1a6d,	// (0x00032478) main_video3_pane_t3

0x0002,

0xf87b,	// (0x00040286) main_video3_pane_t_ParamLimits

0xf87b,	// (0x00040286) main_video3_pane_t

0x1a9a,	// (0x000324a5) cams_zoom_vslider_pane_g1

0x1aa3,	// (0x000324ae) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0004028d) cams_zoom_vslider_pane_g

0x1aab,	// (0x000324b6) small_slider_vertical_pane

0x12ac,	// (0x00031cb7) small_slider_vertical_pane_g1

0x12ac,	// (0x00031cb7) small_slider_vertical_pane_g2

0x1ab3,	// (0x000324be) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00040292) small_slider_vertical_pane_g

0x612a,	// (0x00036b35) main_hwr_training_pane

0x1abc,	// (0x000324c7) hwr_training_instruct_pane_ParamLimits

0x1abc,	// (0x000324c7) hwr_training_instruct_pane

0xa828,	// (0x0003b233) hwr_training_navi_pane_ParamLimits

0xa828,	// (0x0003b233) hwr_training_navi_pane

0xa842,	// (0x0003b24d) hwr_training_write_pane_ParamLimits

0xa842,	// (0x0003b24d) hwr_training_write_pane

0x612a,	// (0x00036b35) bg_frame_shadow_pane

0x1af3,	// (0x000324fe) hwr_training_write_pane_g1

0x1afb,	// (0x00032506) hwr_training_write_pane_g2

0x1b03,	// (0x0003250e) hwr_training_write_pane_g3

0x1b0b,	// (0x00032516) hwr_training_write_pane_g4

0x1b13,	// (0x0003251e) hwr_training_write_pane_g5

0x1b1b,	// (0x00032526) hwr_training_write_pane_g6

0x1b23,	// (0x0003252e) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x00040299) hwr_training_write_pane_g

0xa87a,	// (0x0003b285) hwr_training_navi_pane_g1_ParamLimits

0xa87a,	// (0x0003b285) hwr_training_navi_pane_g1

0xa88c,	// (0x0003b297) hwr_training_navi_pane_g2_ParamLimits

0xa88c,	// (0x0003b297) hwr_training_navi_pane_g2

0xa89e,	// (0x0003b2a9) hwr_training_navi_pane_g3_ParamLimits

0xa89e,	// (0x0003b2a9) hwr_training_navi_pane_g3

0xa8ae,	// (0x0003b2b9) hwr_training_navi_pane_g4_ParamLimits

0xa8ae,	// (0x0003b2b9) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x000402a8) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x000402a8) hwr_training_navi_pane_g

0xa8c8,	// (0x0003b2d3) hwr_training_navi_pane_t1

0xa8d6,	// (0x0003b2e1) list_single_hwr_training_instruct_pane_ParamLimits

0xa8d6,	// (0x0003b2e1) list_single_hwr_training_instruct_pane

0x1b7a,	// (0x00032585) list_single_hwr_training_instruct_pane_t1

0x11ec,	// (0x00031bf7) bg_frame_shadow_pane_g1

0x1b89,	// (0x00032594) bg_frame_shadow_pane_g2

0x1b91,	// (0x0003259c) bg_frame_shadow_pane_g3

0x1b99,	// (0x000325a4) bg_frame_shadow_pane_g4

0x1ba1,	// (0x000325ac) bg_frame_shadow_pane_g5

0x1ba9,	// (0x000325b4) bg_frame_shadow_pane_g6

0x1bb1,	// (0x000325bc) bg_frame_shadow_pane_g7

0xe04f,	// (0x0003ea5a) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x000402b3) bg_frame_shadow_pane_g

0x612a,	// (0x00036b35) main_video_tele_dialer_pane

0xa8f5,	// (0x0003b300) aid_size_cell_video_keypad_ParamLimits

0xa8f5,	// (0x0003b300) aid_size_cell_video_keypad

0xa905,	// (0x0003b310) grid_video_dialer_keypad_pane_ParamLimits

0xa905,	// (0x0003b310) grid_video_dialer_keypad_pane

0xa939,	// (0x0003b344) video_down_pane_cp_ParamLimits

0xa939,	// (0x0003b344) video_down_pane_cp

0xa963,	// (0x0003b36e) cell_video_dialer_keypad_pane_ParamLimits

0xa963,	// (0x0003b36e) cell_video_dialer_keypad_pane

0x1bb9,	// (0x000325c4) bg_button_pane_cp08_ParamLimits

0x1bb9,	// (0x000325c4) bg_button_pane_cp08

0xa97a,	// (0x0003b385) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa97a,	// (0x0003b385) cell_video_dialer_keypad_pane_g1

0xa17a,	// (0x0003ab85) mup3_rocker2_pane_ParamLimits

0xa17a,	// (0x0003ab85) mup3_rocker2_pane

0x12ac,	// (0x00031cb7) mup3_rocker2_pane_g1

0x90d0,	// (0x00039adb) main_dialer2_pane

0x612a,	// (0x00036b35) main_mp4_pane

0xa9bd,	// (0x0003b3c8) main_mp4_pane_g1_ParamLimits

0xa9bd,	// (0x0003b3c8) main_mp4_pane_g1

0xa9cb,	// (0x0003b3d6) main_mp4_pane_g2_ParamLimits

0xa9cb,	// (0x0003b3d6) main_mp4_pane_g2

0xa9d9,	// (0x0003b3e4) main_mp4_pane_g3_ParamLimits

0xa9d9,	// (0x0003b3e4) main_mp4_pane_g3

0xaa2c,	// (0x0003b437) main_mp4_pane_g4_ParamLimits

0xaa2c,	// (0x0003b437) main_mp4_pane_g4

0xaa46,	// (0x0003b451) main_mp4_pane_g5_ParamLimits

0xaa46,	// (0x0003b451) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x000402d3) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x000402d3) main_mp4_pane_g

0xaa7a,	// (0x0003b485) main_mp4_pane_t1_ParamLimits

0xaa7a,	// (0x0003b485) main_mp4_pane_t1

0xaad6,	// (0x0003b4e1) main_mp4_pane_t2_ParamLimits

0xaad6,	// (0x0003b4e1) main_mp4_pane_t2

0x1cd7,	// (0x000326e2) main_mp4_pane_t3_ParamLimits

0x1cd7,	// (0x000326e2) main_mp4_pane_t3

0xab28,	// (0x0003b533) main_mp4_pane_t4_ParamLimits

0xab28,	// (0x0003b533) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x000402e0) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x000402e0) main_mp4_pane_t

0xab68,	// (0x0003b573) mp4_progress_pane_ParamLimits

0xab68,	// (0x0003b573) mp4_progress_pane

0xabb2,	// (0x0003b5bd) mp4_rocker_pane_ParamLimits

0xabb2,	// (0x0003b5bd) mp4_rocker_pane

0x1dab,	// (0x000327b6) mp4_progress_pane_t1

0x1dc4,	// (0x000327cf) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x000402e9) mp4_progress_pane_t

0x1ddd,	// (0x000327e8) mup_progress_pane_cp04

0x12ac,	// (0x00031cb7) mp4_rocker_pane_g1

0xabd4,	// (0x0003b5df) aid_cell_size_keypad2_ParamLimits

0xabd4,	// (0x0003b5df) aid_cell_size_keypad2

0xabe4,	// (0x0003b5ef) dialer2_ne_pane_ParamLimits

0xabe4,	// (0x0003b5ef) dialer2_ne_pane

0xabf0,	// (0x0003b5fb) grid_dialer2_keypad_pane_ParamLimits

0xabf0,	// (0x0003b5fb) grid_dialer2_keypad_pane

0x28f2,	// (0x000332fd) bg_popup_call_pane_cp07_ParamLimits

0x28f2,	// (0x000332fd) bg_popup_call_pane_cp07

0xabfe,	// (0x0003b609) dialer2_ne_pane_t1_ParamLimits

0xabfe,	// (0x0003b609) dialer2_ne_pane_t1

0xac23,	// (0x0003b62e) cell_dialer2_keypad_pane_ParamLimits

0xac23,	// (0x0003b62e) cell_dialer2_keypad_pane

0x1e05,	// (0x00032810) bg_button_pane_pane_cp04_ParamLimits

0x1e05,	// (0x00032810) bg_button_pane_pane_cp04

0xac3a,	// (0x0003b645) cell_dialer2_keypad_pane_g1_ParamLimits

0xac3a,	// (0x0003b645) cell_dialer2_keypad_pane_g1

0x7159,	// (0x00037b64) aid_placing_vt_set_content_ParamLimits

0x7159,	// (0x00037b64) aid_placing_vt_set_content

0x7173,	// (0x00037b7e) aid_placing_vt_set_title_ParamLimits

0x7173,	// (0x00037b7e) aid_placing_vt_set_title

0x612a,	// (0x00036b35) main_image3_pane

0xacd4,	// (0x0003b6df) area_side_right_pane_cp01_ParamLimits

0xacd4,	// (0x0003b6df) area_side_right_pane_cp01

0x2ec0,	// (0x000338cb) main_image3_pane_g1_ParamLimits

0x2ec0,	// (0x000338cb) main_image3_pane_g1

0xad03,	// (0x0003b70e) main_image3_pane_g2_ParamLimits

0xad03,	// (0x0003b70e) main_image3_pane_g2

0xad1c,	// (0x0003b727) main_image3_pane_g3_ParamLimits

0xad1c,	// (0x0003b727) main_image3_pane_g3

0xad35,	// (0x0003b740) main_image3_pane_g4_ParamLimits

0xad35,	// (0x0003b740) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x000402f8) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x000402f8) main_image3_pane_g

0xad4e,	// (0x0003b759) main_image3_pane_t1_ParamLimits

0xad4e,	// (0x0003b759) main_image3_pane_t1

0xad73,	// (0x0003b77e) main_image3_pane_t2_ParamLimits

0xad73,	// (0x0003b77e) main_image3_pane_t2

0xad92,	// (0x0003b79d) main_image3_pane_t3_ParamLimits

0xad92,	// (0x0003b79d) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x00040301) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x00040301) main_image3_pane_t

0x63d9,	// (0x00036de4) grid_sctrl_middle_pane_cp01_ParamLimits

0x63d9,	// (0x00036de4) grid_sctrl_middle_pane_cp01

0xadf3,	// (0x0003b7fe) cell_sctrl_middle_pane_cp01_ParamLimits

0xadf3,	// (0x0003b7fe) cell_sctrl_middle_pane_cp01

0xae04,	// (0x0003b80f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xae04,	// (0x0003b80f) cell_sctrl_middle_pane_cp01_g1

0x612a,	// (0x00036b35) main_call4_pane

0xae11,	// (0x0003b81c) aid_size_button_call4_ParamLimits

0xae11,	// (0x0003b81c) aid_size_button_call4

0xae43,	// (0x0003b84e) call4_windows_pane_ParamLimits

0xae43,	// (0x0003b84e) call4_windows_pane

0xae5f,	// (0x0003b86a) grid_call4_button_pane_ParamLimits

0xae5f,	// (0x0003b86a) grid_call4_button_pane

0x1e45,	// (0x00032850) call4_windows_conf_pane

0x1e60,	// (0x0003286b) popup_call4_audio_first_window_ParamLimits

0x1e60,	// (0x0003286b) popup_call4_audio_first_window

0x1eae,	// (0x000328b9) popup_call4_audio_second_window_ParamLimits

0x1eae,	// (0x000328b9) popup_call4_audio_second_window

0x1ec4,	// (0x000328cf) popup_call4_audio_wait_window_ParamLimits

0x1ec4,	// (0x000328cf) popup_call4_audio_wait_window

0xae83,	// (0x0003b88e) cell_call4_button_pane_ParamLimits

0xae83,	// (0x0003b88e) cell_call4_button_pane

0xaea6,	// (0x0003b8b1) bg_button_pane_cp09_ParamLimits

0xaea6,	// (0x0003b8b1) bg_button_pane_cp09

0xaeb2,	// (0x0003b8bd) cell_call4_button_pane_g1_ParamLimits

0xaeb2,	// (0x0003b8bd) cell_call4_button_pane_g1

0xaebf,	// (0x0003b8ca) cell_call4_button_pane_t1_ParamLimits

0xaebf,	// (0x0003b8ca) cell_call4_button_pane_t1

0x1f0c,	// (0x00032917) popup_call4_audio_conf_window_ParamLimits

0x1f0c,	// (0x00032917) popup_call4_audio_conf_window

0xa1af,	// (0x0003abba) mup3_progress_pane_t1_ParamLimits

0xa1c6,	// (0x0003abd1) mup3_progress_pane_t2_ParamLimits

0x15cb,	// (0x00031fd6) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x000401da) mup3_progress_pane_t_ParamLimits

0x15e2,	// (0x00031fed) mup_progress_pane_cp03_ParamLimits

0xa6c7,	// (0x0003b0d2) mup3_control_keys_pane_g4_copy1

0xab96,	// (0x0003b5a1) mp4_rocker2_pane_ParamLimits

0xab96,	// (0x0003b5a1) mp4_rocker2_pane

0x1f2e,	// (0x00032939) mp4_rocker2_pane_g1

0x1f26,	// (0x00032931) mp4_rocker2_pane_g2

0xaed1,	// (0x0003b8dc) mp4_rocker2_pane_g3

0xaed9,	// (0x0003b8e4) mp4_rocker2_pane_g4

0xaee1,	// (0x0003b8ec) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0004030a) mp4_rocker2_pane_g

0x612a,	// (0x00036b35) main_camera4_pane

0x612a,	// (0x00036b35) main_video4_pane

0xa915,	// (0x0003b320) main_video_tele_dialer_pane_t1_ParamLimits

0xa915,	// (0x0003b320) main_video_tele_dialer_pane_t1

0xa927,	// (0x0003b332) main_video_tele_dialer_pane_t2_ParamLimits

0xa927,	// (0x0003b332) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x000402c4) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x000402c4) main_video_tele_dialer_pane_t

0xaf01,	// (0x0003b90c) cam4_autofocus_pane_ParamLimits

0xaf01,	// (0x0003b90c) cam4_autofocus_pane

0xaf0d,	// (0x0003b918) cam4_image_uncrop_pane_ParamLimits

0xaf0d,	// (0x0003b918) cam4_image_uncrop_pane

0xaf26,	// (0x0003b931) cam4_indicators_pane_ParamLimits

0xaf26,	// (0x0003b931) cam4_indicators_pane

0xaf42,	// (0x0003b94d) main_camera4_pane_g1_ParamLimits

0xaf42,	// (0x0003b94d) main_camera4_pane_g1

0xaf4e,	// (0x0003b959) main_camera4_pane_g2_ParamLimits

0xaf4e,	// (0x0003b959) main_camera4_pane_g2

0xaf4e,	// (0x0003b959) main_camera4_pane_g3_ParamLimits

0xaf4e,	// (0x0003b959) main_camera4_pane_g3

0xaf5a,	// (0x0003b965) main_camera4_pane_g4_ParamLimits

0xaf5a,	// (0x0003b965) main_camera4_pane_g4

0xaf66,	// (0x0003b971) main_camera4_pane_g5_ParamLimits

0xaf66,	// (0x0003b971) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00040315) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00040315) main_camera4_pane_g

0xaf80,	// (0x0003b98b) main_camera4_pane_t1_ParamLimits

0xaf80,	// (0x0003b98b) main_camera4_pane_t1

0x14dc,	// (0x00031ee7) bg_tb_trans_pane_cp06

0xafd2,	// (0x0003b9dd) cam4_indicators_pane_g1

0xafdf,	// (0x0003b9ea) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00040330) cam4_indicators_pane_g

0xafff,	// (0x0003ba0a) cam4_indicators_pane_t1

0xb029,	// (0x0003ba34) main_video4_pane_g1_ParamLimits

0xb029,	// (0x0003ba34) main_video4_pane_g1

0xb035,	// (0x0003ba40) main_video4_pane_g2_ParamLimits

0xb035,	// (0x0003ba40) main_video4_pane_g2

0xb041,	// (0x0003ba4c) main_video4_pane_g3_ParamLimits

0xb041,	// (0x0003ba4c) main_video4_pane_g3

0xb04d,	// (0x0003ba58) main_video4_pane_g4_ParamLimits

0xb04d,	// (0x0003ba58) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00040337) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00040337) main_video4_pane_g

0xb06f,	// (0x0003ba7a) vid4_indicators_pane_ParamLimits

0xb06f,	// (0x0003ba7a) vid4_indicators_pane

0xb08d,	// (0x0003ba98) video4_image_uncrop_cif_pane_ParamLimits

0xb08d,	// (0x0003ba98) video4_image_uncrop_cif_pane

0xb09c,	// (0x0003baa7) video4_image_uncrop_nhd_pane_ParamLimits

0xb09c,	// (0x0003baa7) video4_image_uncrop_nhd_pane

0xaf0d,	// (0x0003b918) video4_image_uncrop_vga_pane_ParamLimits

0xaf0d,	// (0x0003b918) video4_image_uncrop_vga_pane

0xf0c9,	// (0x0003fad4) bg_tb_trans_pane_cp07

0xafd2,	// (0x0003b9dd) vid4_indicators_pane_g1

0xb0b5,	// (0x0003bac0) vid4_indicators_pane_g2

0xb0c2,	// (0x0003bacd) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00040342) vid4_indicators_pane_g

0xb0ef,	// (0x0003bafa) vid4_indicators_pane_t1

0xb109,	// (0x0003bb14) cam4_autofocus_pane_g1

0xb111,	// (0x0003bb1c) cam4_autofocus_pane_g2

0xb119,	// (0x0003bb24) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0004034d) cam4_autofocus_pane_g

0xb121,	// (0x0003bb2c) cam4_autofocus_pane_g3_copy1

0xa947,	// (0x0003b352) video_down_pane_cp_t1

0xa955,	// (0x0003b360) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x000402c9) video_down_pane_cp_t

0x63d9,	// (0x00036de4) popup_vitu2_window_ParamLimits

0x63d9,	// (0x00036de4) popup_vitu2_window

0xb129,	// (0x0003bb34) aid_size_cell2_itu2_ParamLimits

0xb129,	// (0x0003bb34) aid_size_cell2_itu2

0xb14b,	// (0x0003bb56) aid_size_cell_itu2_ParamLimits

0xb14b,	// (0x0003bb56) aid_size_cell_itu2

0x28f2,	// (0x000332fd) bg_popup_window_pane_cp09_ParamLimits

0x28f2,	// (0x000332fd) bg_popup_window_pane_cp09

0xb18f,	// (0x0003bb9a) field_vitu2_entry_pane_ParamLimits

0xb18f,	// (0x0003bb9a) field_vitu2_entry_pane

0xb1af,	// (0x0003bbba) grid_vitu2_function_pane_ParamLimits

0xb1af,	// (0x0003bbba) grid_vitu2_function_pane

0xb1f3,	// (0x0003bbfe) grid_vitu2_itu_pane_ParamLimits

0xb1f3,	// (0x0003bbfe) grid_vitu2_itu_pane

0xb267,	// (0x0003bc72) cell_vitu2_itu_pane_ParamLimits

0xb267,	// (0x0003bc72) cell_vitu2_itu_pane

0xb27e,	// (0x0003bc89) cell_vitu2_function_pane_ParamLimits

0xb27e,	// (0x0003bc89) cell_vitu2_function_pane

0x1fdf,	// (0x000329ea) bg_popup_call_pane_cp08_ParamLimits

0x1fdf,	// (0x000329ea) bg_popup_call_pane_cp08

0x1ff8,	// (0x00032a03) field_vitu2_entry_pane_g1

0x2004,	// (0x00032a0f) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00040354) field_vitu2_entry_pane_g

0x5336,	// (0x00035d41) field_vitu2_entry_pane_t1_ParamLimits

0x5336,	// (0x00035d41) field_vitu2_entry_pane_t1

0x5353,	// (0x00035d5e) field_vitu2_entry_pane_t2_ParamLimits

0x5353,	// (0x00035d5e) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0004035b) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0004035b) field_vitu2_entry_pane_t

0xb2c2,	// (0x0003bccd) bg_button_pane_cp010_ParamLimits

0xb2c2,	// (0x0003bccd) bg_button_pane_cp010

0xb2d0,	// (0x0003bcdb) cell_vitu2_itu_pane_g1

0xb2ee,	// (0x0003bcf9) cell_vitu2_itu_pane_t1_ParamLimits

0xb2ee,	// (0x0003bcf9) cell_vitu2_itu_pane_t1

0x5370,	// (0x00035d7b) cell_vitu2_itu_pane_t2_ParamLimits

0x5370,	// (0x00035d7b) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x00040365) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x00040365) cell_vitu2_itu_pane_t

0xf0c9,	// (0x0003fad4) bg_button_pane_cp011

0xb340,	// (0x0003bd4b) cell_vitu2_function_pane_g1

0x612a,	// (0x00036b35) main_myfav_hc_pane

0xadd4,	// (0x0003b7df) popup_image3_note_pane_ParamLimits

0xadd4,	// (0x0003b7df) popup_image3_note_pane

0xade2,	// (0x0003b7ed) popup_image3_tool_bar_pane_ParamLimits

0xade2,	// (0x0003b7ed) popup_image3_tool_bar_pane

0x53de,	// (0x00035de9) cell_vitu2_itu_pane_t3_ParamLimits

0x53de,	// (0x00035de9) cell_vitu2_itu_pane_t3

0x612a,	// (0x00036b35) bg_popup_trans_pane

0x2051,	// (0x00032a5c) grid_image3_tool_bar_pane

0x205b,	// (0x00032a66) bg_popup_trans_pane_g1

0xe396,	// (0x0003eda1) bg_popup_trans_pane_g2

0x2063,	// (0x00032a6e) bg_popup_trans_pane_g3

0x206b,	// (0x00032a76) bg_popup_trans_pane_g4

0x2073,	// (0x00032a7e) bg_popup_trans_pane_g5

0x207b,	// (0x00032a86) bg_popup_trans_pane_g6

0x2083,	// (0x00032a8e) bg_popup_trans_pane_g7

0x208b,	// (0x00032a96) bg_popup_trans_pane_g8

0xe376,	// (0x0003ed81) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0004036c) bg_popup_trans_pane_g

0x2093,	// (0x00032a9e) cell_image3_tool_bar_pane_ParamLimits

0x2093,	// (0x00032a9e) cell_image3_tool_bar_pane

0x12ac,	// (0x00031cb7) cell_image3_tool_bar_pane_g1

0x612a,	// (0x00036b35) bg_popup_trans_pane_cp1

0x20a9,	// (0x00032ab4) popup_image3_note_pane_t1

0x20b7,	// (0x00032ac2) popup_image3_note_pane_t2

0x20c5,	// (0x00032ad0) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0004037f) popup_image3_note_pane_t

0x20d5,	// (0x00032ae0) popup_image3_note_pane_t3_copy1

0xb354,	// (0x0003bd5f) bg_myfav_hc_instruction_pane_ParamLimits

0xb354,	// (0x0003bd5f) bg_myfav_hc_instruction_pane

0xb36c,	// (0x0003bd77) cell_myfav_contact_pane_ParamLimits

0xb36c,	// (0x0003bd77) cell_myfav_contact_pane

0xb386,	// (0x0003bd91) cell_myfav_contact_pane_cp1_ParamLimits

0xb386,	// (0x0003bd91) cell_myfav_contact_pane_cp1

0xb39e,	// (0x0003bda9) cell_myfav_contact_pane_cp2_ParamLimits

0xb39e,	// (0x0003bda9) cell_myfav_contact_pane_cp2

0xb3b6,	// (0x0003bdc1) cell_myfav_contact_pane_cp3_ParamLimits

0xb3b6,	// (0x0003bdc1) cell_myfav_contact_pane_cp3

0xb3cd,	// (0x0003bdd8) cell_myfav_contact_pane_cp4_ParamLimits

0xb3cd,	// (0x0003bdd8) cell_myfav_contact_pane_cp4

0xb3e3,	// (0x0003bdee) cell_myfav_contact_pane_cp5_ParamLimits

0xb3e3,	// (0x0003bdee) cell_myfav_contact_pane_cp5

0xb3f7,	// (0x0003be02) cell_myfav_contact_pane_cp6_ParamLimits

0xb3f7,	// (0x0003be02) cell_myfav_contact_pane_cp6

0xb40b,	// (0x0003be16) cell_myfav_contact_pane_cp7_ParamLimits

0xb40b,	// (0x0003be16) cell_myfav_contact_pane_cp7

0x20e3,	// (0x00032aee) listscroll_gen_pane_cp05

0xb423,	// (0x0003be2e) main_myfav_hc_pane_g1_ParamLimits

0xb423,	// (0x0003be2e) main_myfav_hc_pane_g1

0xb43d,	// (0x0003be48) main_myfav_hc_pane_g2_ParamLimits

0xb43d,	// (0x0003be48) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x00040386) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x00040386) main_myfav_hc_pane_g

0xb46f,	// (0x0003be7a) main_myfav_hc_pane_t1_ParamLimits

0xb46f,	// (0x0003be7a) main_myfav_hc_pane_t1

0x20ec,	// (0x00032af7) main_myfav_hc_pane_t2_ParamLimits

0x20ec,	// (0x00032af7) main_myfav_hc_pane_t2

0x20fe,	// (0x00032b09) main_myfav_hc_pane_t3_ParamLimits

0x20fe,	// (0x00032b09) main_myfav_hc_pane_t3

0xb486,	// (0x0003be91) main_myfav_hc_pane_t4_ParamLimits

0xb486,	// (0x0003be91) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0004038d) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0004038d) main_myfav_hc_pane_t

0x12ac,	// (0x00031cb7) bg_myfav_hc_instruction_pane_g1

0x2110,	// (0x00032b1b) cell_myfav_contact_pane_g1_ParamLimits

0x2110,	// (0x00032b1b) cell_myfav_contact_pane_g1

0x2110,	// (0x00032b1b) cell_myfav_contact_pane_g2_ParamLimits

0x2110,	// (0x00032b1b) cell_myfav_contact_pane_g2

0x211c,	// (0x00032b27) cell_myfav_contact_pane_g3_ParamLimits

0x211c,	// (0x00032b27) cell_myfav_contact_pane_g3

0x15b5,	// (0x00031fc0) cell_myfav_contact_pane_g4_ParamLimits

0x15b5,	// (0x00031fc0) cell_myfav_contact_pane_g4

0x2129,	// (0x00032b34) cell_myfav_contact_pane_g5_ParamLimits

0x2129,	// (0x00032b34) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x00040398) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x00040398) cell_myfav_contact_pane_g

0xb457,	// (0x0003be62) main_myfav_hc_pane_g3_ParamLimits

0xb457,	// (0x0003be62) main_myfav_hc_pane_g3

0x62f4,	// (0x00036cff) popup_adpt_find_window

0xb4b0,	// (0x0003bebb) afind_page_pane_ParamLimits

0xb4b0,	// (0x0003bebb) afind_page_pane

0xb4bd,	// (0x0003bec8) aid_size_cell_afind_ParamLimits

0xb4bd,	// (0x0003bec8) aid_size_cell_afind

0xb4d7,	// (0x0003bee2) bg_popup_sub_pane_cp09_ParamLimits

0xb4d7,	// (0x0003bee2) bg_popup_sub_pane_cp09

0xb4e4,	// (0x0003beef) find_pane_cp01_ParamLimits

0xb4e4,	// (0x0003beef) find_pane_cp01

0x2135,	// (0x00032b40) grid_afind_control_pane_ParamLimits

0x2135,	// (0x00032b40) grid_afind_control_pane

0xb4f1,	// (0x0003befc) grid_afind_pane_ParamLimits

0xb4f1,	// (0x0003befc) grid_afind_pane

0xb50d,	// (0x0003bf18) cell_afind_pane_ParamLimits

0xb50d,	// (0x0003bf18) cell_afind_pane

0x12ac,	// (0x00031cb7) afind_page_pane_g1

0xb559,	// (0x0003bf64) afind_page_pane_g2

0xb562,	// (0x0003bf6d) afind_page_pane_g3

0x0002,

0xf998,	// (0x000403a3) afind_page_pane_g

0xb56b,	// (0x0003bf76) afind_page_pane_t1

0x2149,	// (0x00032b54) cell_afind_grid_control_pane_ParamLimits

0x2149,	// (0x00032b54) cell_afind_grid_control_pane

0x1e05,	// (0x00032810) bg_button_pane_cp69_ParamLimits

0x1e05,	// (0x00032810) bg_button_pane_cp69

0xb58b,	// (0x0003bf96) cell_afind_pane_g1_ParamLimits

0xb58b,	// (0x0003bf96) cell_afind_pane_g1

0xb598,	// (0x0003bfa3) cell_afind_pane_t1_ParamLimits

0xb598,	// (0x0003bfa3) cell_afind_pane_t1

0xe185,	// (0x0003eb90) bg_button_pane_cp72

0x2158,	// (0x00032b63) cell_afind_grid_control_pane_g1

0x8c48,	// (0x00039653) aid_image_placing_area_ParamLimits

0x8c48,	// (0x00039653) aid_image_placing_area

0x18ba,	// (0x000322c5) field_vitu_entry_pane_g1_ParamLimits

0x18ba,	// (0x000322c5) field_vitu_entry_pane_g1

0x18c6,	// (0x000322d1) field_vitu_entry_pane_g2_ParamLimits

0x18c6,	// (0x000322d1) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00040254) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00040254) field_vitu_entry_pane_g

0xa751,	// (0x0003b15c) cell_vitu_itu_pane_g1_ParamLimits

0xa793,	// (0x0003b19e) cell_vitu_itu_pane_t3_ParamLimits

0xa793,	// (0x0003b19e) cell_vitu_itu_pane_t3

0x1dab,	// (0x000327b6) mp4_progress_pane_t1_ParamLimits

0x1dc4,	// (0x000327cf) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x000402e9) mp4_progress_pane_t_ParamLimits

0x1ddd,	// (0x000327e8) mup_progress_pane_cp04_ParamLimits

0xb49a,	// (0x0003bea5) main_myfav_hc_pane_t5_ParamLimits

0xb49a,	// (0x0003bea5) main_myfav_hc_pane_t5

0x617c,	// (0x00036b87) aid_zoom_text_primary

0x62f4,	// (0x00036cff) popup_adpt_find_window_ParamLimits

0xf0c9,	// (0x0003fad4) main_cam_set_pane

0xaf34,	// (0x0003b93f) cam4_zoom_pane_ParamLimits

0xaf34,	// (0x0003b93f) cam4_zoom_pane

0xb5aa,	// (0x0003bfb5) main_cam_set_pane_g1_ParamLimits

0xb5aa,	// (0x0003bfb5) main_cam_set_pane_g1

0xb5b8,	// (0x0003bfc3) main_cam_set_pane_g2_ParamLimits

0xb5b8,	// (0x0003bfc3) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x000403aa) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x000403aa) main_cam_set_pane_g

0xb5c4,	// (0x0003bfcf) main_cam_set_pane_t1_ParamLimits

0xb5c4,	// (0x0003bfcf) main_cam_set_pane_t1

0xb5e0,	// (0x0003bfeb) main_cset_listscroll_pane_ParamLimits

0xb5e0,	// (0x0003bfeb) main_cset_listscroll_pane

0xb60f,	// (0x0003c01a) main_cset_slider_pane_ParamLimits

0xb60f,	// (0x0003c01a) main_cset_slider_pane

0x2169,	// (0x00032b74) main_cset_list_pane_ParamLimits

0x2169,	// (0x00032b74) main_cset_list_pane

0x2179,	// (0x00032b84) scroll_pane_cp028

0xb630,	// (0x0003c03b) aid_area_touch_slider

0xb64c,	// (0x0003c057) cset_slider_pane

0xb676,	// (0x0003c081) main_cset_slider_pane_g1

0xb68b,	// (0x0003c096) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x000403af) main_cset_slider_pane_g

0x21b2,	// (0x00032bbd) main_cset_slider_pane_t1

0xb747,	// (0x0003c152) main_cset_slider_pane_t2

0xb761,	// (0x0003c16c) main_cset_slider_pane_t3

0xb77b,	// (0x0003c186) main_cset_slider_pane_t4

0xb795,	// (0x0003c1a0) main_cset_slider_pane_t5

0xb7b1,	// (0x0003c1bc) main_cset_slider_pane_t6

0xb7c6,	// (0x0003c1d1) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x000403d4) main_cset_slider_pane_t

0xb8ca,	// (0x0003c2d5) cset_list_set_pane_ParamLimits

0xb8ca,	// (0x0003c2d5) cset_list_set_pane

0xb8db,	// (0x0003c2e6) aid_position_infowindow_above

0xb8e3,	// (0x0003c2ee) aid_position_infowindow_below

0x542b,	// (0x00035e36) cset_list_set_pane_g1_ParamLimits

0x542b,	// (0x00035e36) cset_list_set_pane_g1

0x5437,	// (0x00035e42) cset_list_set_pane_g3_ParamLimits

0x5437,	// (0x00035e42) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x000403f3) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x000403f3) cset_list_set_pane_g

0x5446,	// (0x00035e51) cset_list_set_pane_t1_ParamLimits

0x5446,	// (0x00035e51) cset_list_set_pane_t1

0xf0c9,	// (0x0003fad4) list_highlight_pane_cp021_ParamLimits

0xf0c9,	// (0x0003fad4) list_highlight_pane_cp021

0xeb18,	// (0x0003f523) cset_slider_pane_g1

0xeb2a,	// (0x0003f535) cset_slider_pane_g2

0xeb21,	// (0x0003f52c) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x000403f8) cset_slider_pane_g

0xb8eb,	// (0x0003c2f6) aid_area_touch_cam4_zoom

0xb8f3,	// (0x0003c2fe) cam4_zoom_cont_pane

0xb8fb,	// (0x0003c306) cam4_zoom_pane_g1

0xb903,	// (0x0003c30e) cam4_zoom_pane_g2

0xb90b,	// (0x0003c316) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x000403ff) cam4_zoom_pane_g

0x2c69,	// (0x00033674) cam4_zoom_cont_pane_g1

0x2c72,	// (0x0003367d) cam4_zoom_cont_pane_g2

0x2c7b,	// (0x00033686) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00040406) cam4_zoom_cont_pane_g

0xae2b,	// (0x0003b836) call4_image_pane_ParamLimits

0xae2b,	// (0x0003b836) call4_image_pane

0x1e45,	// (0x00032850) call4_windows_conf_pane_ParamLimits

0x1e8c,	// (0x00032897) popup_call4_audio_in_window_ParamLimits

0x1e8c,	// (0x00032897) popup_call4_audio_in_window

0x612a,	// (0x00036b35) bg_popup_call2_act_pane_cp02

0x1f04,	// (0x0003290f) call4_list_conf_pane

0x12ac,	// (0x00031cb7) call4_image_pane_g1

0x12ac,	// (0x00031cb7) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0004011a) call4_image_pane_g

0x2299,	// (0x00032ca4) list_single_graphic_popup_conf4_pane_ParamLimits

0x2299,	// (0x00032ca4) list_single_graphic_popup_conf4_pane

0x612a,	// (0x00036b35) list_highlight_pane_cp022

0x22ae,	// (0x00032cb9) list_single_graphic_popup_conf4_pane_g1

0xe812,	// (0x0003f21d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0004040d) list_single_graphic_popup_conf4_pane_g

0x22b6,	// (0x00032cc1) list_single_graphic_popup_conf4_pane_t1

0x7272,	// (0x00037c7d) popup_vtel_slider_window_ParamLimits

0x7272,	// (0x00037c7d) popup_vtel_slider_window

0x1df3,	// (0x000327fe) dialer2_ne_pane_t2_ParamLimits

0x1df3,	// (0x000327fe) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x000402ee) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x000402ee) dialer2_ne_pane_t

0xf0c9,	// (0x0003fad4) bg_popup_sub_pane_cp010_ParamLimits

0xf0c9,	// (0x0003fad4) bg_popup_sub_pane_cp010

0xb913,	// (0x0003c31e) popup_vtel_slider_window_g1_ParamLimits

0xb913,	// (0x0003c31e) popup_vtel_slider_window_g1

0xb91f,	// (0x0003c32a) popup_vtel_slider_window_g2_ParamLimits

0xb91f,	// (0x0003c32a) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00040412) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00040412) popup_vtel_slider_window_g

0xb967,	// (0x0003c372) vtel_slider_pane_ParamLimits

0xb967,	// (0x0003c372) vtel_slider_pane

0xb976,	// (0x0003c381) vtel_slider_pane_g1_ParamLimits

0xb976,	// (0x0003c381) vtel_slider_pane_g1

0xb983,	// (0x0003c38e) vtel_slider_pane_g2_ParamLimits

0xb983,	// (0x0003c38e) vtel_slider_pane_g2

0xb990,	// (0x0003c39b) vtel_slider_pane_g3_ParamLimits

0xb990,	// (0x0003c39b) vtel_slider_pane_g3

0xb976,	// (0x0003c381) vtel_slider_pane_g4_ParamLimits

0xb976,	// (0x0003c381) vtel_slider_pane_g4

0xb99d,	// (0x0003c3a8) vtel_slider_pane_g5_ParamLimits

0xb99d,	// (0x0003c3a8) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0004041b) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0004041b) vtel_slider_pane_g

0x612a,	// (0x00036b35) main_gallery2_pane

0xb171,	// (0x0003bb7c) aid_size_row_itut2_dropdow_list_ParamLimits

0xb171,	// (0x0003bb7c) aid_size_row_itut2_dropdow_list

0xb1d1,	// (0x0003bbdc) grid_vitu2_function_top_pane_ParamLimits

0xb1d1,	// (0x0003bbdc) grid_vitu2_function_top_pane

0xb223,	// (0x0003bc2e) popup_vitu2_dropdown_list_window_ParamLimits

0xb223,	// (0x0003bc2e) popup_vitu2_dropdown_list_window

0xb243,	// (0x0003bc4e) popup_vitu2_match_list_window

0xb9aa,	// (0x0003c3b5) cell_vitu2_function_top_pane_ParamLimits

0xb9aa,	// (0x0003c3b5) cell_vitu2_function_top_pane

0xb9ca,	// (0x0003c3d5) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb9ca,	// (0x0003c3d5) cell_vitu2_function_top_pane_cp01

0xb9e8,	// (0x0003c3f3) cell_vitu2_function_top_wide_pane_ParamLimits

0xb9e8,	// (0x0003c3f3) cell_vitu2_function_top_wide_pane

0xf0c9,	// (0x0003fad4) bg_button_pane_cp012

0xba06,	// (0x0003c411) cell_vitu2_function_top_pane_g1

0xba15,	// (0x0003c420) bg_button_pane_cp013_ParamLimits

0xba15,	// (0x0003c420) bg_button_pane_cp013

0xba31,	// (0x0003c43c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xba31,	// (0x0003c43c) cell_vitu2_function_top_wide_pane_g1

0x63d9,	// (0x00036de4) bg_popup_sub_pane_cp20

0xba49,	// (0x0003c454) list_vitu2_match_list_pane

0x205b,	// (0x00032a66) bg_popup_sub_pane_cp20_g1

0x2063,	// (0x00032a6e) bg_popup_sub_pane_cp20_g2

0xe396,	// (0x0003eda1) bg_popup_sub_pane_cp20_g3

0x206b,	// (0x00032a76) bg_popup_sub_pane_cp20_g4

0xe376,	// (0x0003ed81) bg_popup_sub_pane_cp20_g5

0x22ee,	// (0x00032cf9) bg_popup_sub_pane_cp20_g6

0x207b,	// (0x00032a86) bg_popup_sub_pane_cp20_g7

0x2083,	// (0x00032a8e) bg_popup_sub_pane_cp20_g8

0x208b,	// (0x00032a96) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00040426) bg_popup_sub_pane_cp20_g

0xba61,	// (0x0003c46c) list_vitu2_match_list_item_pane_ParamLimits

0xba61,	// (0x0003c46c) list_vitu2_match_list_item_pane

0xba73,	// (0x0003c47e) list_vitu2_match_list_item_pane_t1

0x612a,	// (0x00036b35) bg_popup_sub_pane_cp21

0xe73b,	// (0x0003f146) grid_vitu2_dropdown_list_pane

0xba81,	// (0x0003c48c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xba81,	// (0x0003c48c) cell_vitu2_dropdown_list_char_pane

0xbaa6,	// (0x0003c4b1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbaa6,	// (0x0003c4b1) cell_vitu2_dropdown_list_ctrl_pane

0x2348,	// (0x00032d53) cell_vitu2_dropdown_list_char_pane_g1

0x233f,	// (0x00032d4a) cell_vitu2_dropdown_list_char_pane_g2

0x2336,	// (0x00032d41) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00040443) cell_vitu2_dropdown_list_char_pane_g

0xbad4,	// (0x0003c4df) cell_vitu2_dropdown_list_char_pane_t1

0xbae2,	// (0x0003c4ed) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbae2,	// (0x0003c4ed) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbaf2,	// (0x0003c4fd) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbaf2,	// (0x0003c4fd) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbb03,	// (0x0003c50e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbb03,	// (0x0003c50e) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbb13,	// (0x0003c51e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbb13,	// (0x0003c51e) cell_vitu2_dropdown_list_ctrl_pane_g4

0x14dc,	// (0x00031ee7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x14dc,	// (0x00031ee7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0004044a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0004044a) cell_vitu2_dropdown_list_ctrl_pane_g

0xbb2c,	// (0x0003c537) aid_size_cell_gallery2_ParamLimits

0xbb2c,	// (0x0003c537) aid_size_cell_gallery2

0xbb3a,	// (0x0003c545) grid_gallery2_pane_ParamLimits

0xbb3a,	// (0x0003c545) grid_gallery2_pane

0xbb49,	// (0x0003c554) scroll_pane_cp029_ParamLimits

0xbb49,	// (0x0003c554) scroll_pane_cp029

0xbb55,	// (0x0003c560) cell_gallery2_pane_ParamLimits

0xbb55,	// (0x0003c560) cell_gallery2_pane

0x2351,	// (0x00032d5c) cell_gallery2_pane_g2

0xbb7f,	// (0x0003c58a) cell_gallery2_pane_g3

0x235b,	// (0x00032d66) cell_gallery2_pane_g4

0x2363,	// (0x00032d6e) cell_gallery2_pane_g5

0xe9e0,	// (0x0003f3eb) grid_highlight_pane_cp10

0xb243,	// (0x0003bc4e) popup_vitu2_match_list_window_ParamLimits

0xb257,	// (0x0003bc62) popup_vitu2_query_window_ParamLimits

0xb257,	// (0x0003bc62) popup_vitu2_query_window

0x612a,	// (0x00036b35) bg_vitu2_candi_button_pane

0x2348,	// (0x00032d53) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x233f,	// (0x00032d4a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2336,	// (0x00032d41) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x54ad,	// (0x00035eb8) bg_button_pane_cp015

0xbb87,	// (0x0003c592) bg_button_pane_cp016

0xbb91,	// (0x0003c59c) bg_button_pane_cp017

0xf0c9,	// (0x0003fad4) bg_popup_sub_pane_cp22

0x236b,	// (0x00032d76) popup_vitu2_query_window_g1

0x54c4,	// (0x00035ecf) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00040455) popup_vitu2_query_window_g

0x54d2,	// (0x00035edd) popup_vitu2_query_window_t1_ParamLimits

0x54d2,	// (0x00035edd) popup_vitu2_query_window_t1

0x54fa,	// (0x00035f05) popup_vitu2_query_window_t2_ParamLimits

0x54fa,	// (0x00035f05) popup_vitu2_query_window_t2

0x550c,	// (0x00035f17) popup_vitu2_query_window_t3_ParamLimits

0x550c,	// (0x00035f17) popup_vitu2_query_window_t3

0xbbac,	// (0x0003c5b7) popup_vitu2_query_window_t4_ParamLimits

0xbbac,	// (0x0003c5b7) popup_vitu2_query_window_t4

0xbbc2,	// (0x0003c5cd) popup_vitu2_query_window_t5_ParamLimits

0xbbc2,	// (0x0003c5cd) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0004045a) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0004045a) popup_vitu2_query_window_t

0x2161,	// (0x00032b6c) main_cset_text_pane

0xb630,	// (0x0003c03b) aid_area_touch_slider_ParamLimits

0xb64c,	// (0x0003c057) cset_slider_pane_ParamLimits

0xb676,	// (0x0003c081) main_cset_slider_pane_g1_ParamLimits

0xb68b,	// (0x0003c096) main_cset_slider_pane_g2_ParamLimits

0x2182,	// (0x00032b8d) main_cset_slider_pane_g3_ParamLimits

0x2182,	// (0x00032b8d) main_cset_slider_pane_g3

0xb6a0,	// (0x0003c0ab) main_cset_slider_pane_g4_ParamLimits

0xb6a0,	// (0x0003c0ab) main_cset_slider_pane_g4

0xb6af,	// (0x0003c0ba) main_cset_slider_pane_g5_ParamLimits

0xb6af,	// (0x0003c0ba) main_cset_slider_pane_g5

0xb6bb,	// (0x0003c0c6) main_cset_slider_pane_g6_ParamLimits

0xb6bb,	// (0x0003c0c6) main_cset_slider_pane_g6

0xf9a4,	// (0x000403af) main_cset_slider_pane_g_ParamLimits

0x21b2,	// (0x00032bbd) main_cset_slider_pane_t1_ParamLimits

0xb747,	// (0x0003c152) main_cset_slider_pane_t2_ParamLimits

0xb761,	// (0x0003c16c) main_cset_slider_pane_t3_ParamLimits

0xb77b,	// (0x0003c186) main_cset_slider_pane_t4_ParamLimits

0xb795,	// (0x0003c1a0) main_cset_slider_pane_t5_ParamLimits

0xb7b1,	// (0x0003c1bc) main_cset_slider_pane_t6_ParamLimits

0xb7c6,	// (0x0003c1d1) main_cset_slider_pane_t7_ParamLimits

0xb7f0,	// (0x0003c1fb) main_cset_slider_pane_t8_ParamLimits

0xb7f0,	// (0x0003c1fb) main_cset_slider_pane_t8

0xb818,	// (0x0003c223) main_cset_slider_pane_t9_ParamLimits

0xb818,	// (0x0003c223) main_cset_slider_pane_t9

0xb840,	// (0x0003c24b) main_cset_slider_pane_t10_ParamLimits

0xb840,	// (0x0003c24b) main_cset_slider_pane_t10

0xb868,	// (0x0003c273) main_cset_slider_pane_t11_ParamLimits

0xb868,	// (0x0003c273) main_cset_slider_pane_t11

0xb890,	// (0x0003c29b) main_cset_slider_pane_t12_ParamLimits

0xb890,	// (0x0003c29b) main_cset_slider_pane_t12

0xb8ad,	// (0x0003c2b8) main_cset_slider_pane_t13_ParamLimits

0xb8ad,	// (0x0003c2b8) main_cset_slider_pane_t13

0xf9c9,	// (0x000403d4) main_cset_slider_pane_t_ParamLimits

0x612a,	// (0x00036b35) bg_popup_sub_pane_cp011

0x2377,	// (0x00032d82) main_cset_text_pane_g1

0x237f,	// (0x00032d8a) main_cset_text_pane_t1

0x238d,	// (0x00032d98) main_cset_text_pane_t2

0x239b,	// (0x00032da6) main_cset_text_pane_t3

0x23a9,	// (0x00032db4) main_cset_text_pane_t4

0x23b7,	// (0x00032dc2) main_cset_text_pane_t5

0x23c5,	// (0x00032dd0) main_cset_text_pane_t6

0x23d3,	// (0x00032dde) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x00040465) main_cset_text_pane_t

0x612a,	// (0x00036b35) main_cam4_burst_pane

0x612a,	// (0x00036b35) main_cam5_pane

0xb579,	// (0x0003bf84) bg_button_pane_cp019

0xb582,	// (0x0003bf8d) bg_button_pane_cp020

0x218e,	// (0x00032b99) main_cset_slider_pane_g7_ParamLimits

0x218e,	// (0x00032b99) main_cset_slider_pane_g7

0x219a,	// (0x00032ba5) main_cset_slider_pane_g8_ParamLimits

0x219a,	// (0x00032ba5) main_cset_slider_pane_g8

0xb6cf,	// (0x0003c0da) main_cset_slider_pane_g9_ParamLimits

0xb6cf,	// (0x0003c0da) main_cset_slider_pane_g9

0xb6db,	// (0x0003c0e6) main_cset_slider_pane_g10_ParamLimits

0xb6db,	// (0x0003c0e6) main_cset_slider_pane_g10

0xb6e7,	// (0x0003c0f2) main_cset_slider_pane_g11_ParamLimits

0xb6e7,	// (0x0003c0f2) main_cset_slider_pane_g11

0xb6f3,	// (0x0003c0fe) main_cset_slider_pane_g12_ParamLimits

0xb6f3,	// (0x0003c0fe) main_cset_slider_pane_g12

0xb6ff,	// (0x0003c10a) main_cset_slider_pane_g13_ParamLimits

0xb6ff,	// (0x0003c10a) main_cset_slider_pane_g13

0xb70b,	// (0x0003c116) main_cset_slider_pane_g14_ParamLimits

0xb70b,	// (0x0003c116) main_cset_slider_pane_g14

0xb717,	// (0x0003c122) main_cset_slider_pane_g15_ParamLimits

0xb717,	// (0x0003c122) main_cset_slider_pane_g15

0x21e0,	// (0x00032beb) main_cset_slider_pane_t14_ParamLimits

0x21e0,	// (0x00032beb) main_cset_slider_pane_t14

0x2219,	// (0x00032c24) main_cset_slider_pane_t15_ParamLimits

0x2219,	// (0x00032c24) main_cset_slider_pane_t15

0xbbd8,	// (0x0003c5e3) aid_cam4_burst_size_cell_ParamLimits

0xbbd8,	// (0x0003c5e3) aid_cam4_burst_size_cell

0xbbf4,	// (0x0003c5ff) grid_cam4_burst_pane_ParamLimits

0xbbf4,	// (0x0003c5ff) grid_cam4_burst_pane

0xbc26,	// (0x0003c631) linegrid_cam4_burst_pane_ParamLimits

0xbc26,	// (0x0003c631) linegrid_cam4_burst_pane

0xbc46,	// (0x0003c651) scroll_pane_cp30_ParamLimits

0xbc46,	// (0x0003c651) scroll_pane_cp30

0xbc52,	// (0x0003c65d) cell_cam4_burst_pane_ParamLimits

0xbc52,	// (0x0003c65d) cell_cam4_burst_pane

0x23ed,	// (0x00032df8) linegrid_cam4_burst_pane_g1_ParamLimits

0x23ed,	// (0x00032df8) linegrid_cam4_burst_pane_g1

0xbc92,	// (0x0003c69d) linegrid_cam4_burst_pane_g2_ParamLimits

0xbc92,	// (0x0003c69d) linegrid_cam4_burst_pane_g2

0x23fa,	// (0x00032e05) linegrid_cam4_burst_pane_g3_ParamLimits

0x23fa,	// (0x00032e05) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00040474) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00040474) linegrid_cam4_burst_pane_g

0xbca3,	// (0x0003c6ae) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbca3,	// (0x0003c6ae) linegrid_cam4_burst_pane_g3_copy1

0x2407,	// (0x00032e12) linegrid_cam4_burst_pane_g4_ParamLimits

0x2407,	// (0x00032e12) linegrid_cam4_burst_pane_g4

0xbcbd,	// (0x0003c6c8) linegrid_cam4_burst_pane_g5_ParamLimits

0xbcbd,	// (0x0003c6c8) linegrid_cam4_burst_pane_g5

0xbcce,	// (0x0003c6d9) linegrid_cam4_burst_pane_g6_ParamLimits

0xbcce,	// (0x0003c6d9) linegrid_cam4_burst_pane_g6

0x2414,	// (0x00032e1f) linegrid_cam4_burst_pane_g7_ParamLimits

0x2414,	// (0x00032e1f) linegrid_cam4_burst_pane_g7

0xbce5,	// (0x0003c6f0) cell_cam4_burst_pane_g1

0x242d,	// (0x00032e38) main_cam5_pane_t1_ParamLimits

0x242d,	// (0x00032e38) main_cam5_pane_t1

0x243f,	// (0x00032e4a) main_cam5_pane_t2_ParamLimits

0x243f,	// (0x00032e4a) main_cam5_pane_t2

0x2451,	// (0x00032e5c) main_cam5_pane_t3_ParamLimits

0x2451,	// (0x00032e5c) main_cam5_pane_t3

0x2463,	// (0x00032e6e) main_cam5_pane_t4_ParamLimits

0x2463,	// (0x00032e6e) main_cam5_pane_t4

0x247b,	// (0x00032e86) main_cam5_pane_t5_ParamLimits

0x247b,	// (0x00032e86) main_cam5_pane_t5

0x248f,	// (0x00032e9a) main_cam5_pane_t6_ParamLimits

0x248f,	// (0x00032e9a) main_cam5_pane_t6

0x24a3,	// (0x00032eae) main_cam5_pane_t7_ParamLimits

0x24a3,	// (0x00032eae) main_cam5_pane_t7

0x24b5,	// (0x00032ec0) main_cam5_pane_t8_ParamLimits

0x24b5,	// (0x00032ec0) main_cam5_pane_t8

0x24d3,	// (0x00032ede) main_cam5_pane_t9_ParamLimits

0x24d3,	// (0x00032ede) main_cam5_pane_t9

0x24e5,	// (0x00032ef0) main_cam5_pane_t10_ParamLimits

0x24e5,	// (0x00032ef0) main_cam5_pane_t10

0x24f7,	// (0x00032f02) main_cam5_pane_t11_ParamLimits

0x24f7,	// (0x00032f02) main_cam5_pane_t11

0x250b,	// (0x00032f16) main_cam5_pane_t12_ParamLimits

0x250b,	// (0x00032f16) main_cam5_pane_t12

0x2522,	// (0x00032f2d) main_cam5_pane_t13_ParamLimits

0x2522,	// (0x00032f2d) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00040480) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00040480) main_cam5_pane_t

0x63a2,	// (0x00036dad) popup_scut_keymap_window_ParamLimits

0x63a2,	// (0x00036dad) popup_scut_keymap_window

0xbcf8,	// (0x0003c703) aid_size_cell_brow_shortcut

0xe9e0,	// (0x0003f3eb) bg_popup_window_pane_cp010

0xbd04,	// (0x0003c70f) grid_scut_pane

0xbd10,	// (0x0003c71b) cell_scut_pane_ParamLimits

0xbd10,	// (0x0003c71b) cell_scut_pane

0xbd2b,	// (0x0003c736) cell_scut_pane_g1

0x2545,	// (0x00032f50) cell_scut_pane_t1

0x2554,	// (0x00032f5f) cell_scut_pane_t2

0xbd34,	// (0x0003c73f) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0004049b) cell_scut_pane_t

0x9ddb,	// (0x0003a7e6) main_mup3_pane_g8_ParamLimits

0x9ddb,	// (0x0003a7e6) main_mup3_pane_g8

0xb17f,	// (0x0003bb8a) area_vitu2_query_pane_ParamLimits

0xb17f,	// (0x0003bb8a) area_vitu2_query_pane

0x54b7,	// (0x00035ec2) input_focus_pane_cp08

0x2563,	// (0x00032f6e) area_vitu2_query_pane_g1

0x5534,	// (0x00035f3f) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x000404a2) area_vitu2_query_pane_g

0xbd42,	// (0x0003c74d) area_vitu2_query_pane_t1_ParamLimits

0xbd42,	// (0x0003c74d) area_vitu2_query_pane_t1

0xbd56,	// (0x0003c761) area_vitu2_query_pane_t2_ParamLimits

0xbd56,	// (0x0003c761) area_vitu2_query_pane_t2

0x5545,	// (0x00035f50) area_vitu2_query_pane_t3_ParamLimits

0x5545,	// (0x00035f50) area_vitu2_query_pane_t3

0x556d,	// (0x00035f78) area_vitu2_query_pane_t4_ParamLimits

0x556d,	// (0x00035f78) area_vitu2_query_pane_t4

0x5595,	// (0x00035fa0) area_vitu2_query_pane_t5_ParamLimits

0x5595,	// (0x00035fa0) area_vitu2_query_pane_t5

0x55bd,	// (0x00035fc8) area_vitu2_query_pane_t6_ParamLimits

0x55bd,	// (0x00035fc8) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x000404a7) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x000404a7) area_vitu2_query_pane_t

0xbd6a,	// (0x0003c775) bg_button_pane_cp018

0xbd78,	// (0x0003c783) bg_button_pane_cp021

0x5609,	// (0x00036014) bg_button_pane_cp022

0x561a,	// (0x00036025) input_focus_pane_cp09

0x830a,	// (0x00038d15) aid_size_touch_mv_arrow_left

0x8335,	// (0x00038d40) aid_size_touch_mv_arrow_right

0xb72f,	// (0x0003c13a) main_cset_slider_pane_g16_ParamLimits

0xb72f,	// (0x0003c13a) main_cset_slider_pane_g16

0xb73b,	// (0x0003c146) main_cset_slider_pane_g17_ParamLimits

0xb73b,	// (0x0003c146) main_cset_slider_pane_g17

0xbce5,	// (0x0003c6f0) cell_cam4_burst_pane_g1_ParamLimits

0x612a,	// (0x00036b35) compa_mode_pane

0xb92b,	// (0x0003c336) popup_vtel_slider_window_g3_ParamLimits

0xb92b,	// (0x0003c336) popup_vtel_slider_window_g3

0xb93f,	// (0x0003c34a) popup_vtel_slider_window_g4_ParamLimits

0xb93f,	// (0x0003c34a) popup_vtel_slider_window_g4

0xb953,	// (0x0003c35e) popup_vtel_slider_window_t1_ParamLimits

0xb953,	// (0x0003c35e) popup_vtel_slider_window_t1

0x612a,	// (0x00036b35) main_cl_pane

0x0da3,	// (0x000317ae) popup_imed_adjust2_window_ParamLimits

0x0d77,	// (0x00031782) bg_tb_trans_pane_cp05_ParamLimits

0x17ef,	// (0x000321fa) popup_imed_adjust2_window_g1_ParamLimits

0x17fe,	// (0x00032209) popup_imed_adjust2_window_g2_ParamLimits

0x17fe,	// (0x00032209) popup_imed_adjust2_window_g2

0x180a,	// (0x00032215) popup_imed_adjust2_window_g3_ParamLimits

0x180a,	// (0x00032215) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x00040218) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x00040218) popup_imed_adjust2_window_g

0x1816,	// (0x00032221) popup_imed_adjust2_window_t1_ParamLimits

0x182e,	// (0x00032239) slider_imed_adjust_pane_ParamLimits

0x1842,	// (0x0003224d) slider_imed_adjust_pane_g1_ParamLimits

0x1852,	// (0x0003225d) slider_imed_adjust_pane_g2_ParamLimits

0x1862,	// (0x0003226d) slider_imed_adjust_pane_g3_ParamLimits

0x1873,	// (0x0003227e) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0004021f) slider_imed_adjust_pane_g_ParamLimits

0xaee9,	// (0x0003b8f4) aid_touch_area_cam4_ParamLimits

0xaee9,	// (0x0003b8f4) aid_touch_area_cam4

0xaef9,	// (0x0003b904) battery_pane_cp01

0xaf74,	// (0x0003b97f) main_camera4_pane_g6_ParamLimits

0xaf74,	// (0x0003b97f) main_camera4_pane_g6

0xaf92,	// (0x0003b99d) main_camera4_pane_t2_ParamLimits

0xaf92,	// (0x0003b99d) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00040322) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00040322) main_camera4_pane_t

0xb019,	// (0x0003ba24) aid_touch_area_vid4_ParamLimits

0xb019,	// (0x0003ba24) aid_touch_area_vid4

0xb059,	// (0x0003ba64) main_video4_pane_g5_ParamLimits

0xb059,	// (0x0003ba64) main_video4_pane_g5

0xb07d,	// (0x0003ba88) vid4_progress_pane_ParamLimits

0xb07d,	// (0x0003ba88) vid4_progress_pane

0x21a6,	// (0x00032bb1) main_cset_slider_pane_g18_ParamLimits

0x21a6,	// (0x00032bb1) main_cset_slider_pane_g18

0x2421,	// (0x00032e2c) cell_cam4_burst_pane_g2_ParamLimits

0x2421,	// (0x00032e2c) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0004047b) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0004047b) cell_cam4_burst_pane_g

0xbd84,	// (0x0003c78f) bg_cl_pane_ParamLimits

0xbd84,	// (0x0003c78f) bg_cl_pane

0xbd90,	// (0x0003c79b) cl_header_pane_ParamLimits

0xbd90,	// (0x0003c79b) cl_header_pane

0xbd9c,	// (0x0003c7a7) cl_listscroll_pane_ParamLimits

0xbd9c,	// (0x0003c7a7) cl_listscroll_pane

0x260b,	// (0x00033016) bg_cl_pane_g1

0x2613,	// (0x0003301e) bg_cl_pane_g2

0x261b,	// (0x00033026) bg_cl_pane_g3

0x2623,	// (0x0003302e) bg_cl_pane_g4

0x262b,	// (0x00033036) bg_cl_pane_g5

0x2633,	// (0x0003303e) bg_cl_pane_g6

0x263b,	// (0x00033046) bg_cl_pane_g7

0x2643,	// (0x0003304e) bg_cl_pane_g8

0x264b,	// (0x00033056) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x000404b6) bg_cl_pane_g

0xbda8,	// (0x0003c7b3) aid_height_cl_leading_ParamLimits

0xbda8,	// (0x0003c7b3) aid_height_cl_leading

0xbdb4,	// (0x0003c7bf) aid_height_cl_text_ParamLimits

0xbdb4,	// (0x0003c7bf) aid_height_cl_text

0x63d9,	// (0x00036de4) bg_cl_header_pane_ParamLimits

0x63d9,	// (0x00036de4) bg_cl_header_pane

0xbdcc,	// (0x0003c7d7) cl_header_pane_g1_ParamLimits

0xbdcc,	// (0x0003c7d7) cl_header_pane_g1

0xbdd9,	// (0x0003c7e4) cl_header_pane_t1_ParamLimits

0xbdd9,	// (0x0003c7e4) cl_header_pane_t1

0x2653,	// (0x0003305e) cl_list_pane

0x2179,	// (0x00032b84) hc_scroll_pane_cp01

0xe376,	// (0x0003ed81) bg_cl_header_pane_g1

0x205b,	// (0x00032a66) bg_cl_header_pane_g2

0xe396,	// (0x0003eda1) bg_cl_header_pane_g3

0x206b,	// (0x00032a76) bg_cl_header_pane_g4

0x2063,	// (0x00032a6e) bg_cl_header_pane_g5

0x22ee,	// (0x00032cf9) bg_cl_header_pane_g6

0x2083,	// (0x00032a8e) bg_cl_header_pane_g7

0x208b,	// (0x00032a96) bg_cl_header_pane_g8

0x207b,	// (0x00032a86) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x000404c9) bg_cl_header_pane_g

0xbdeb,	// (0x0003c7f6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbdeb,	// (0x0003c7f6) hc_cl_list_double_graphic_heading_pane

0xba61,	// (0x0003c46c) hc_cl_list_single_graphic_pane_ParamLimits

0xba61,	// (0x0003c46c) hc_cl_list_single_graphic_pane

0xbdfb,	// (0x0003c806) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbdfb,	// (0x0003c806) hc_cl_list_single_graphic_pane_g1

0xbe07,	// (0x0003c812) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbe07,	// (0x0003c812) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x000404dc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x000404dc) hc_cl_list_single_graphic_pane_g

0xbe1b,	// (0x0003c826) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbe1b,	// (0x0003c826) hc_cl_list_single_graphic_pane_t1

0xbdfb,	// (0x0003c806) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbdfb,	// (0x0003c806) hc_cl_list_double_graphic_heading_pane_g1

0xbe30,	// (0x0003c83b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbe30,	// (0x0003c83b) hc_cl_list_double_graphic_heading_pane_g2

0xbe44,	// (0x0003c84f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbe44,	// (0x0003c84f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x000404e1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x000404e1) hc_cl_list_double_graphic_heading_pane_g

0xbe58,	// (0x0003c863) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbe58,	// (0x0003c863) hc_cl_list_double_graphic_heading_pane_t1

0xbe6d,	// (0x0003c878) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbe6d,	// (0x0003c878) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x000404e8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x000404e8) hc_cl_list_double_graphic_heading_pane_t

0xbe94,	// (0x0003c89f) vid4_progress_pane_g1

0xbea0,	// (0x0003c8ab) vid4_progress_pane_g2

0xbeac,	// (0x0003c8b7) vid4_progress_pane_g3

0xbebb,	// (0x0003c8c6) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x000404ed) vid4_progress_pane_g

0xbed9,	// (0x0003c8e4) vid4_progress_pane_t1

0xbeef,	// (0x0003c8fa) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x000404f8) vid4_progress_pane_t

0xbf1a,	// (0x0003c925) wait_bar_pane_cp07

0x1099,	// (0x00031aa4) blid_firmament_pane_ParamLimits

0x10dc,	// (0x00031ae7) popup_blid_sat_info2_window_g1

0x1100,	// (0x00031b0b) popup_blid_sat_info2_window_t3

0x110e,	// (0x00031b19) popup_blid_sat_info2_window_t4

0x111c,	// (0x00031b27) popup_blid_sat_info2_window_t5

0x112a,	// (0x00031b35) popup_blid_sat_info2_window_t6

0x113a,	// (0x00031b45) popup_blid_sat_info2_window_t7

0x1148,	// (0x00031b53) popup_blid_sat_info2_window_t8

0x1156,	// (0x00031b61) popup_blid_sat_info2_window_t9

0x1164,	// (0x00031b6f) popup_blid_sat_info2_window_t10

0x122c,	// (0x00031c37) aid_firma_cardinal_ParamLimits

0x1240,	// (0x00031c4b) blid_firmament_pane_t1_ParamLimits

0x1257,	// (0x00031c62) blid_firmament_pane_t2_ParamLimits

0x126e,	// (0x00031c79) blid_firmament_pane_t3_ParamLimits

0x1285,	// (0x00031c90) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x00040111) blid_firmament_pane_t_ParamLimits

0x129c,	// (0x00031ca7) blid_sat_info_pane_ParamLimits

0xf0c9,	// (0x0003fad4) main_cam_set_pane_ParamLimits

0xa56f,	// (0x0003af7a) aid_size_cell_colour_35_ParamLimits

0xa589,	// (0x0003af94) aid_size_cell_colour_112_ParamLimits

0xa5a0,	// (0x0003afab) aid_size_cell_effect_ParamLimits

0xf0c9,	// (0x0003fad4) bg_tb_trans_pane_cp02_ParamLimits

0xf0d7,	// (0x0003fae2) heading_imed_pane_ParamLimits

0xa5ba,	// (0x0003afc5) listscroll_imed_pane_ParamLimits

0x03a5,	// (0x00030db0) popup_call2_audio_first_window_g5_ParamLimits

0x03a5,	// (0x00030db0) popup_call2_audio_first_window_g5

0xaca2,	// (0x0003b6ad) aid_size_touch_image3_arrow_left_ParamLimits

0xaca2,	// (0x0003b6ad) aid_size_touch_image3_arrow_left

0xacb8,	// (0x0003b6c3) aid_size_touch_image3_arrow_right_ParamLimits

0xacb8,	// (0x0003b6c3) aid_size_touch_image3_arrow_right

0xbf05,	// (0x0003c910) vid4_progress_pane_t3

0xa85a,	// (0x0003b265) main_hwr_training_symbol_option_pane_ParamLimits

0xa85a,	// (0x0003b265) main_hwr_training_symbol_option_pane

0x1ade,	// (0x000324e9) popup_hwr_training_preview_window_ParamLimits

0x1ade,	// (0x000324e9) popup_hwr_training_preview_window

0xa8bb,	// (0x0003b2c6) hwr_training_navi_pane_g5_ParamLimits

0xa8bb,	// (0x0003b2c6) hwr_training_navi_pane_g5

0x203b,	// (0x00032a46) popup_char_count_window

0x63d9,	// (0x00036de4) bg_popup_sub_pane_cp20_ParamLimits

0xba49,	// (0x0003c454) list_vitu2_match_list_pane_ParamLimits

0xba55,	// (0x0003c460) vitu2_page_scroll_pane_ParamLimits

0xba55,	// (0x0003c460) vitu2_page_scroll_pane

0x2756,	// (0x00033161) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2756,	// (0x00033161) list_single_hwr_training_symbol_option_pane

0x2769,	// (0x00033174) list_single_hwr_training_symbol_option_pane_g1

0x2771,	// (0x0003317c) list_single_hwr_training_symbol_option_pane_t1

0x277f,	// (0x0003318a) bg_button_pane_cp023

0x2788,	// (0x00033193) bg_button_pane_cp024

0xbf2c,	// (0x0003c937) vitu2_page_scroll_pane_g1

0xbf34,	// (0x0003c93f) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x000404ff) vitu2_page_scroll_pane_g

0xbf3e,	// (0x0003c949) vitu2_page_scroll_pane_t1

0x0fb5,	// (0x000319c0) popup_char_count_window_g1

0x27bb,	// (0x000331c6) popup_char_count_window_g2

0x27c4,	// (0x000331cf) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00040504) popup_char_count_window_g

0x27cd,	// (0x000331d8) popup_char_count_window_t1

0x612a,	// (0x00036b35) main_vded2_pane

0x17db,	// (0x000321e6) aid_size_cell_imed_line

0x17e5,	// (0x000321f0) grid_imed_line_width_pane

0xb0d3,	// (0x0003bade) vid4_indicators_pane_g4

0x27db,	// (0x000331e6) cell_imed_line_width_pane_ParamLimits

0x27db,	// (0x000331e6) cell_imed_line_width_pane

0x27f1,	// (0x000331fc) cell_imed_line_width_pane_g1

0x1047,	// (0x00031a52) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0004050b) cell_imed_line_width_pane_g

0xbf4d,	// (0x0003c958) main_vded2_pane_g1_ParamLimits

0xbf4d,	// (0x0003c958) main_vded2_pane_g1

0xbf5c,	// (0x0003c967) main_vded2_pane_g2_ParamLimits

0xbf5c,	// (0x0003c967) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00040510) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00040510) main_vded2_pane_g

0xbf6a,	// (0x0003c975) vded2_slider_pane_ParamLimits

0xbf6a,	// (0x0003c975) vded2_slider_pane

0xbf77,	// (0x0003c982) aid_size_touch_vded2_end

0xbf81,	// (0x0003c98c) aid_size_touch_vded2_playhead

0x27fa,	// (0x00033205) aid_size_touch_vded2_start

0x2802,	// (0x0003320d) vded2_slider_bg_pane

0x280b,	// (0x00033216) vded2_slider_pane_g1

0x2814,	// (0x0003321f) vded2_slider_pane_g2

0xbf89,	// (0x0003c994) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00040515) vded2_slider_pane_g

0x281c,	// (0x00033227) vded2_slider_bg_pane_g1

0x2825,	// (0x00033230) vded2_slider_bg_pane_g2

0x282e,	// (0x00033239) vded2_slider_bg_pane_g3

0x0002,

0xf7d6,	// (0x000401e1) vded2_slider_bg_pane_g

0x89a8,	// (0x000393b3) aid_postcard_touch_down_pane_ParamLimits

0x89a8,	// (0x000393b3) aid_postcard_touch_down_pane

0x89b8,	// (0x000393c3) aid_postcard_touch_up_pane_ParamLimits

0x89b8,	// (0x000393c3) aid_postcard_touch_up_pane

0x612a,	// (0x00036b35) main_blid2_pane

0x0d85,	// (0x00031790) popup_blid2_search_window

0x612a,	// (0x00036b35) blid2_gps_pane

0x612a,	// (0x00036b35) blid2_navig_pane

0x612a,	// (0x00036b35) blid2_search_pane

0x612a,	// (0x00036b35) blid2_tripm_pane

0xbf92,	// (0x0003c99d) blid2_search_pane_g1_ParamLimits

0xbf92,	// (0x0003c99d) blid2_search_pane_g1

0xbfa2,	// (0x0003c9ad) blid2_search_pane_t1_ParamLimits

0xbfa2,	// (0x0003c9ad) blid2_search_pane_t1

0xbfb4,	// (0x0003c9bf) aid_size_cell_blid2_gps_ParamLimits

0xbfb4,	// (0x0003c9bf) aid_size_cell_blid2_gps

0xbfc4,	// (0x0003c9cf) blid2_gps_pane_g1_ParamLimits

0xbfc4,	// (0x0003c9cf) blid2_gps_pane_g1

0xbfd0,	// (0x0003c9db) grid_blid2_satellite_pane_ParamLimits

0xbfd0,	// (0x0003c9db) grid_blid2_satellite_pane

0xbfde,	// (0x0003c9e9) blid2_navig_pane_g1_ParamLimits

0xbfde,	// (0x0003c9e9) blid2_navig_pane_g1

0xbfea,	// (0x0003c9f5) blid2_navig_pane_t1_ParamLimits

0xbfea,	// (0x0003c9f5) blid2_navig_pane_t1

0xbffc,	// (0x0003ca07) blid2_navig_pane_t2_ParamLimits

0xbffc,	// (0x0003ca07) blid2_navig_pane_t2

0x0001,

0xfb11,	// (0x0004051c) blid2_navig_pane_t_ParamLimits

0xfb11,	// (0x0004051c) blid2_navig_pane_t

0xc00e,	// (0x0003ca19) blid2_navig_ring_pane_ParamLimits

0xc00e,	// (0x0003ca19) blid2_navig_ring_pane

0xc01e,	// (0x0003ca29) blid2_speed_pane_ParamLimits

0xc01e,	// (0x0003ca29) blid2_speed_pane

0xc02a,	// (0x0003ca35) blid2_tripm_pane_g1_ParamLimits

0xc02a,	// (0x0003ca35) blid2_tripm_pane_g1

0xc03a,	// (0x0003ca45) blid2_tripm_pane_g2_ParamLimits

0xc03a,	// (0x0003ca45) blid2_tripm_pane_g2

0xc046,	// (0x0003ca51) blid2_tripm_pane_g3_ParamLimits

0xc046,	// (0x0003ca51) blid2_tripm_pane_g3

0xc052,	// (0x0003ca5d) blid2_tripm_pane_g4_ParamLimits

0xc052,	// (0x0003ca5d) blid2_tripm_pane_g4

0xc05e,	// (0x0003ca69) blid2_tripm_pane_g5_ParamLimits

0xc05e,	// (0x0003ca69) blid2_tripm_pane_g5

0x0005,

0xfb16,	// (0x00040521) blid2_tripm_pane_g_ParamLimits

0xfb16,	// (0x00040521) blid2_tripm_pane_g

0xc07a,	// (0x0003ca85) blid2_tripm_pane_t1_ParamLimits

0xc07a,	// (0x0003ca85) blid2_tripm_pane_t1

0xc08e,	// (0x0003ca99) blid2_tripm_pane_t2_ParamLimits

0xc08e,	// (0x0003ca99) blid2_tripm_pane_t2

0xc0a0,	// (0x0003caab) blid2_tripm_pane_t3_ParamLimits

0xc0a0,	// (0x0003caab) blid2_tripm_pane_t3

0x0003,

0xfb23,	// (0x0004052e) blid2_tripm_pane_t_ParamLimits

0xfb23,	// (0x0004052e) blid2_tripm_pane_t

0xc0d2,	// (0x0003cadd) cell_blid2_satellite_pane_ParamLimits

0xc0d2,	// (0x0003cadd) cell_blid2_satellite_pane

0xc0f0,	// (0x0003cafb) cell_blid2_satellite_pane_g1

0x2837,	// (0x00033242) cell_blid2_satellite_pane_t1

0x12ac,	// (0x00031cb7) blid2_speed_pane_g1

0x2845,	// (0x00033250) blid2_speed_pane_t1

0x2853,	// (0x0003325e) blid2_speed_pane_t2

0x0001,

0xfb2c,	// (0x00040537) blid2_speed_pane_t

0x12ac,	// (0x00031cb7) blid2_navig_ring_pane_g1

0xc0f9,	// (0x0003cb04) blid2_navig_ring_pane_g2

0xc101,	// (0x0003cb0c) blid2_navig_ring_pane_g3

0xc109,	// (0x0003cb14) blid2_navig_ring_pane_g4

0xc111,	// (0x0003cb1c) blid2_navig_ring_pane_g5

0x0004,

0xfb31,	// (0x0004053c) blid2_navig_ring_pane_g

0x612a,	// (0x00036b35) bg_popup_window_pane_cp011

0x2861,	// (0x0003326c) popup_blid2_search_window_g1

0x2869,	// (0x00033274) popup_blid2_search_window_t1

0x2877,	// (0x00033282) popup_blid2_search_window_t2

0x0001,

0xfb3c,	// (0x00040547) popup_blid2_search_window_t

0xe285,	// (0x0003ec90) main_browser_pane_g1

0xdf84,	// (0x0003e98f) main_browser_pane_ParamLimits

0xf0c9,	// (0x0003fad4) bg_button_pane_cp011_ParamLimits

0xb340,	// (0x0003bd4b) cell_vitu2_function_pane_g1_ParamLimits

0xf0c9,	// (0x0003fad4) bg_popup_sub_pane_cp22_ParamLimits

0x54b7,	// (0x00035ec2) input_focus_pane_cp08_ParamLimits

0xbb9b,	// (0x0003c5a6) popup_vitu2_query_button_pane_ParamLimits

0xbb9b,	// (0x0003c5a6) popup_vitu2_query_button_pane

0x54ad,	// (0x00035eb8) popup_vitu2_query_input_button_pane

0x236b,	// (0x00032d76) popup_vitu2_query_window_g1_ParamLimits

0x54c4,	// (0x00035ecf) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00040455) popup_vitu2_query_window_g_ParamLimits

0x612a,	// (0x00036b35) bg_button_pane_cp026

0xc119,	// (0x0003cb24) popup_vitu2_query_input_button_pane_g1

0x612a,	// (0x00036b35) bg_button_pane_cp025

0x2885,	// (0x00033290) popup_vitu2_query_button_pane_t1

0x9b31,	// (0x0003a53c) main_mp3_pane_t6

0x9b41,	// (0x0003a54c) popup_slider_window_cp01

0xafca,	// (0x0003b9d5) cam4_battery_pane

0xb0ab,	// (0x0003bab6) cam4_battery_pane_cp02

0xbe82,	// (0x0003c88d) cam4_battery_pane_cp01

0xbe8c,	// (0x0003c897) cam4_battery_pane_cp03

0x12ac,	// (0x00031cb7) cam4_battery_pane_g1

0x1de9,	// (0x000327f4) cam4_battery_pane_g2

0x0001,

0xfb41,	// (0x0004054c) cam4_battery_pane_g

0x1172,	// (0x00031b7d) popup_blid_sat_info2_window_t11

0x830a,	// (0x00038d15) aid_size_touch_mv_arrow_left_ParamLimits

0x8335,	// (0x00038d40) aid_size_touch_mv_arrow_right_ParamLimits

0xe940,	// (0x0003f34b) navi_pane_g1_ParamLimits

0x835e,	// (0x00038d69) navi_pane_g2_ParamLimits

0x838c,	// (0x00038d97) navi_pane_g3_ParamLimits

0xf418,	// (0x0003fe23) navi_pane_g_ParamLimits

0x83e6,	// (0x00038df1) navi_pane_mv_t1_ParamLimits

0xa5c6,	// (0x0003afd1) grid_imed_effect_pane_ParamLimits

0xe1ca,	// (0x0003ebd5) aid_placing_vt_slider_lsc

0xe1d2,	// (0x0003ebdd) aid_placing_vt_slider_prt

0xf0c9,	// (0x0003fad4) bg_tb_trans_pane_cp01_ParamLimits

0x13fc,	// (0x00031e07) popup_image_details_window_g1_ParamLimits

0x140f,	// (0x00031e1a) popup_image_details_window_g2_ParamLimits

0x1424,	// (0x00031e2f) popup_image_details_window_g3_ParamLimits

0x1424,	// (0x00031e2f) popup_image_details_window_g3

0xf74b,	// (0x00040156) popup_image_details_window_g_ParamLimits

0x1438,	// (0x00031e43) popup_image_details_window_t1_ParamLimits

0x144a,	// (0x00031e55) popup_image_details_window_t2_ParamLimits

0x1463,	// (0x00031e6e) popup_image_details_window_t3_ParamLimits

0x1477,	// (0x00031e82) popup_image_details_window_t4_ParamLimits

0x1492,	// (0x00031e9d) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0004015d) popup_image_details_window_t_ParamLimits

0xbdc0,	// (0x0003c7cb) cl_header_name_pane_ParamLimits

0xbdc0,	// (0x0003c7cb) cl_header_name_pane

0xc121,	// (0x0003cb2c) cl_header_name_pane_t1_ParamLimits

0xc121,	// (0x0003cb2c) cl_header_name_pane_t1

0xc138,	// (0x0003cb43) cl_header_name_pane_t2_ParamLimits

0xc138,	// (0x0003cb43) cl_header_name_pane_t2

0xc162,	// (0x0003cb6d) cl_header_name_pane_t3_ParamLimits

0xc162,	// (0x0003cb6d) cl_header_name_pane_t3

0x0002,

0xfb46,	// (0x00040551) cl_header_name_pane_t_ParamLimits

0xfb46,	// (0x00040551) cl_header_name_pane_t

0x83b7,	// (0x00038dc2) navi_pane_mv_g2_ParamLimits

0x1ff8,	// (0x00032a03) field_vitu2_entry_pane_g1_ParamLimits

0x2004,	// (0x00032a0f) field_vitu2_entry_pane_g2_ParamLimits

0x2010,	// (0x00032a1b) field_vitu2_entry_pane_g3_ParamLimits

0x2010,	// (0x00032a1b) field_vitu2_entry_pane_g3

0xf949,	// (0x00040354) field_vitu2_entry_pane_g_ParamLimits

0xb2d0,	// (0x0003bcdb) cell_vitu2_itu_pane_g1_ParamLimits

0xb2e0,	// (0x0003bceb) cell_vitu2_itu_pane_g2_ParamLimits

0xb2e0,	// (0x0003bceb) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00040360) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00040360) cell_vitu2_itu_pane_g

0xf0c9,	// (0x0003fad4) bg_vkb2_func_pane_cp05_ParamLimits

0xf0c9,	// (0x0003fad4) bg_vkb2_func_pane_cp05

0xf0c9,	// (0x0003fad4) bg_vkb2_func_pane_cp03

0xf0c9,	// (0x0003fad4) bg_vkb2_func_pane_cp04

0xf0c9,	// (0x0003fad4) bg_vkb2_func_pane_cp10_ParamLimits

0xf0c9,	// (0x0003fad4) bg_vkb2_func_pane_cp10

0x5609,	// (0x00036014) bg_vkb2_func_pane_cp08

0xbd6a,	// (0x0003c775) bg_vkb2_func_pane_cp06

0xbd78,	// (0x0003c783) bg_vkb2_func_pane_cp07

0x2791,	// (0x0003319c) bg_vkb2_func_pane_cp11_ParamLimits

0x2791,	// (0x0003319c) bg_vkb2_func_pane_cp11

0x27a6,	// (0x000331b1) bg_vkb2_func_pane_cp12_ParamLimits

0x27a6,	// (0x000331b1) bg_vkb2_func_pane_cp12

0x612a,	// (0x00036b35) bg_vkb2_func_pane_cp09

0x205b,	// (0x00032a66) bg_vkb2_func_pane_g1

0xe396,	// (0x0003eda1) bg_vkb2_func_pane_g2

0x2063,	// (0x00032a6e) bg_vkb2_func_pane_g3

0x206b,	// (0x00032a76) bg_vkb2_func_pane_g4

0x22ee,	// (0x00032cf9) bg_vkb2_func_pane_g5

0x2083,	// (0x00032a8e) bg_vkb2_func_pane_g6

0x208b,	// (0x00032a96) bg_vkb2_func_pane_g7

0x207b,	// (0x00032a86) bg_vkb2_func_pane_g8

0xe376,	// (0x0003ed81) bg_vkb2_func_pane_g9

0x0008,

0xfb4d,	// (0x00040558) bg_vkb2_func_pane_g

0xc06c,	// (0x0003ca77) blid2_tripm_pane_g6_ParamLimits

0xc06c,	// (0x0003ca77) blid2_tripm_pane_g6

0x1da3,	// (0x000327ae) mp4_progress_pane_g1

0xc0c6,	// (0x0003cad1) blid2_tripm_values_pane_ParamLimits

0xc0c6,	// (0x0003cad1) blid2_tripm_values_pane

0xc187,	// (0x0003cb92) blid2_tripm_values_pane_t1

0xc195,	// (0x0003cba0) blid2_tripm_values_pane_t2

0xc1a3,	// (0x0003cbae) blid2_tripm_values_pane_t3

0xc1b1,	// (0x0003cbbc) blid2_tripm_values_pane_t4

0xc1bf,	// (0x0003cbca) blid2_tripm_values_pane_t5

0xc1cd,	// (0x0003cbd8) blid2_tripm_values_pane_t6

0xc1db,	// (0x0003cbe6) blid2_tripm_values_pane_t7

0xc1e9,	// (0x0003cbf4) blid2_tripm_values_pane_t8

0xc1f7,	// (0x0003cc02) blid2_tripm_values_pane_t9

0x0008,

0xfb60,	// (0x0004056b) blid2_tripm_values_pane_t

0x71a6,	// (0x00037bb1) call_video_pane_t1_ParamLimits

0x71bc,	// (0x00037bc7) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0003fcac) call_video_pane_t_ParamLimits

0x5239,	// (0x00035c44) msg_header_pane_g1_ParamLimits

0xeb5d,	// (0x0003f568) msg_header_pane_g2_ParamLimits

0xeb5d,	// (0x0003f568) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0003fec6) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0003fec6) msg_header_pane_g

0xdf84,	// (0x0003e98f) main_clock2_pane_ParamLimits

0xa349,	// (0x0003ad54) grid_clock2_toolbar_pane_ParamLimits

0xa349,	// (0x0003ad54) grid_clock2_toolbar_pane

0xa349,	// (0x0003ad54) listscroll_clock2_pane_ParamLimits

0xa349,	// (0x0003ad54) listscroll_clock2_pane

0xa3fd,	// (0x0003ae08) main_clock2_pane_t3_ParamLimits

0xa3fd,	// (0x0003ae08) main_clock2_pane_t3

0xa40f,	// (0x0003ae1a) main_clock2_pane_t4_ParamLimits

0xa40f,	// (0x0003ae1a) main_clock2_pane_t4

0x2893,	// (0x0003329e) cell_clock2_toolbar_pane

0x289b,	// (0x000332a6) cell_clock2_toolbar_pane_cp01

0x289b,	// (0x000332a6) cell_clock2_toolbar_pane_cp02

0x28a3,	// (0x000332ae) cell_clock2_toolbar_pane_cp03

0x28ab,	// (0x000332b6) list_clock2_pane

0xe8a6,	// (0x0003f2b1) scroll_pane_cp10

0x28b3,	// (0x000332be) list_single_clock2_pane_ParamLimits

0x28b3,	// (0x000332be) list_single_clock2_pane

0xe9e0,	// (0x0003f3eb) list_highlight_pane_cp08

0x28c0,	// (0x000332cb) list_single_clock2_pane_t1

0x28ce,	// (0x000332d9) list_single_clock2_pane_t2

0x0001,

0xfb73,	// (0x0004057e) list_single_clock2_pane_t

0x612a,	// (0x00036b35) bg_button_pane_cp10

0x28dc,	// (0x000332e7) cell_clock2_toolbar_pane_g1

0x890a,	// (0x00039315) aid_main_viewer_pane_g1_ParamLimits

0x890a,	// (0x00039315) aid_main_viewer_pane_g1

0x8916,	// (0x00039321) aid_main_viewer_pane_g2_ParamLimits

0x8916,	// (0x00039321) aid_main_viewer_pane_g2

0x8922,	// (0x0003932d) aid_main_viewer_pane_g3_ParamLimits

0x8922,	// (0x0003932d) aid_main_viewer_pane_g3

0x8933,	// (0x0003933e) aid_main_viewer_pane_g4_ParamLimits

0x8933,	// (0x0003933e) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0003fed7) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0003fed7) aid_main_viewer_pane_g

0x90c3,	// (0x00039ace) main_calc_pane_ParamLimits

0x90d0,	// (0x00039adb) main_dialer2_pane_ParamLimits

0x612a,	// (0x00036b35) main_cam6_pane

0x612a,	// (0x00036b35) main_vid6_pane

0xa355,	// (0x0003ad60) listscroll_gen_pane_cp06_ParamLimits

0xa355,	// (0x0003ad60) listscroll_gen_pane_cp06

0xa421,	// (0x0003ae2c) main_clock2_pane_t5_ParamLimits

0xa421,	// (0x0003ae2c) main_clock2_pane_t5

0xa470,	// (0x0003ae7b) aid_call2_pane_cp10_ParamLimits

0xa482,	// (0x0003ae8d) aid_call_pane_cp10_ParamLimits

0xe915,	// (0x0003f320) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe915,	// (0x0003f320) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa494,	// (0x0003ae9f) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa494,	// (0x0003ae9f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe915,	// (0x0003f320) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0004020d) popup_clock_analogue_window_cp10_g_ParamLimits

0xa4a6,	// (0x0003aeb1) popup_clock_analogue_window_cp10_t1_ParamLimits

0xac4f,	// (0x0003b65a) cell_dialer2_keypad_pane_g2_ParamLimits

0xac4f,	// (0x0003b65a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x000402f3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x000402f3) cell_dialer2_keypad_pane_g

0xac6b,	// (0x0003b676) cell_dialer2_keypad_pane_t1

0xb61d,	// (0x0003c028) main_cset_text2_pane_ParamLimits

0xb61d,	// (0x0003c028) main_cset_text2_pane

0x2563,	// (0x00032f6e) area_vitu2_query_pane_g1_ParamLimits

0x5534,	// (0x00035f3f) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x000404a2) area_vitu2_query_pane_g_ParamLimits

0x55e5,	// (0x00035ff0) area_vitu2_query_pane_t7_ParamLimits

0x55e5,	// (0x00035ff0) area_vitu2_query_pane_t7

0xbd6a,	// (0x0003c775) bg_button_pane_cp018_ParamLimits

0xbd78,	// (0x0003c783) bg_button_pane_cp021_ParamLimits

0x5609,	// (0x00036014) bg_button_pane_cp022_ParamLimits

0x5609,	// (0x00036014) bg_vkb2_func_pane_cp08_ParamLimits

0xbd6a,	// (0x0003c775) bg_vkb2_func_pane_cp06_ParamLimits

0xbd78,	// (0x0003c783) bg_vkb2_func_pane_cp07_ParamLimits

0x561a,	// (0x00036025) input_focus_pane_cp09_ParamLimits

0xc205,	// (0x0003cc10) cam6_autofocus_pane_ParamLimits

0xc205,	// (0x0003cc10) cam6_autofocus_pane

0xc227,	// (0x0003cc32) cam6_image_uncrop_pane_ParamLimits

0xc227,	// (0x0003cc32) cam6_image_uncrop_pane

0xc254,	// (0x0003cc5f) cam6_indi_pane_ParamLimits

0xc254,	// (0x0003cc5f) cam6_indi_pane

0xc26e,	// (0x0003cc79) cam6_mode_pane_ParamLimits

0xc26e,	// (0x0003cc79) cam6_mode_pane

0xc282,	// (0x0003cc8d) cam6_timer_pane_ParamLimits

0xc282,	// (0x0003cc8d) cam6_timer_pane

0xc28e,	// (0x0003cc99) cam6_zoom_pane_ParamLimits

0xc28e,	// (0x0003cc99) cam6_zoom_pane

0xb029,	// (0x0003ba34) cam6_mode_pane_g1_ParamLimits

0xb029,	// (0x0003ba34) cam6_mode_pane_g1

0xb041,	// (0x0003ba4c) cam6_mode_pane_g2_ParamLimits

0xb041,	// (0x0003ba4c) cam6_mode_pane_g2

0xb04d,	// (0x0003ba58) cam6_mode_pane_g3_ParamLimits

0xb04d,	// (0x0003ba58) cam6_mode_pane_g3

0xb059,	// (0x0003ba64) cam6_mode_pane_g4_ParamLimits

0xb059,	// (0x0003ba64) cam6_mode_pane_g4

0x0003,

0xfb78,	// (0x00040583) cam6_mode_pane_g_ParamLimits

0xfb78,	// (0x00040583) cam6_mode_pane_g

0x28f2,	// (0x000332fd) bg_tb_trans_pane_cp08_ParamLimits

0x28f2,	// (0x000332fd) bg_tb_trans_pane_cp08

0x2900,	// (0x0003330b) cam6_battery_pane_ParamLimits

0x2900,	// (0x0003330b) cam6_battery_pane

0x2916,	// (0x00033321) cam6_indi_pane_g1_ParamLimits

0x2916,	// (0x00033321) cam6_indi_pane_g1

0x2928,	// (0x00033333) cam6_indi_pane_g2_ParamLimits

0x2928,	// (0x00033333) cam6_indi_pane_g2

0x293a,	// (0x00033345) cam6_indi_pane_g3_ParamLimits

0x293a,	// (0x00033345) cam6_indi_pane_g3

0x0002,

0xfb81,	// (0x0004058c) cam6_indi_pane_g_ParamLimits

0xfb81,	// (0x0004058c) cam6_indi_pane_g

0x294c,	// (0x00033357) cam6_indi_pane_t1_ParamLimits

0x294c,	// (0x00033357) cam6_indi_pane_t1

0xb109,	// (0x0003bb14) cam6_autofocus_pane_g1

0xb111,	// (0x0003bb1c) cam6_autofocus_pane_g2

0xb119,	// (0x0003bb24) cam6_autofocus_pane_g3

0xb121,	// (0x0003bb2c) cam6_autofocus_pane_g4

0x0003,

0xfb88,	// (0x00040593) cam6_autofocus_pane_g

0x2972,	// (0x0003337d) cam6_timer_pane_g1

0x297a,	// (0x00033385) cam6_timer_pane_t1

0x2988,	// (0x00033393) cam6_zoom_cont_pane

0x2990,	// (0x0003339b) cam6_zoom_pane_g1

0x2998,	// (0x000333a3) cam6_zoom_pane_g2

0xc2ac,	// (0x0003ccb7) cam6_zoom_pane_g3

0x0002,

0xfb91,	// (0x0004059c) cam6_zoom_pane_g

0x12ac,	// (0x00031cb7) cam6_battery_pane_g1

0x12ac,	// (0x00031cb7) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0004011a) cam6_battery_pane_g

0x29a0,	// (0x000333ab) cam6_zoom_cont_pane_g1

0x29a9,	// (0x000333b4) cam6_zoom_cont_pane_g2

0x29b2,	// (0x000333bd) cam6_zoom_cont_pane_g3

0x0002,

0xfb98,	// (0x000405a3) cam6_zoom_cont_pane_g

0xc2c9,	// (0x0003ccd4) cam6_mode_pane_cp_ParamLimits

0xc2c9,	// (0x0003ccd4) cam6_mode_pane_cp

0xc28e,	// (0x0003cc99) cam6_zoom_pane_cp_ParamLimits

0xc28e,	// (0x0003cc99) cam6_zoom_pane_cp

0xc2dd,	// (0x0003cce8) vid6_image_uncrop_cif_pane_ParamLimits

0xc2dd,	// (0x0003cce8) vid6_image_uncrop_cif_pane

0xc309,	// (0x0003cd14) vid6_image_uncrop_nhd_pane_ParamLimits

0xc309,	// (0x0003cd14) vid6_image_uncrop_nhd_pane

0xc227,	// (0x0003cc32) vid6_image_uncrop_vga_pane_ParamLimits

0xc227,	// (0x0003cc32) vid6_image_uncrop_vga_pane

0xc328,	// (0x0003cd33) vid6_image_uncrop_wvga_pane_ParamLimits

0xc328,	// (0x0003cd33) vid6_image_uncrop_wvga_pane

0xc347,	// (0x0003cd52) vid6_indi_pane_ParamLimits

0xc347,	// (0x0003cd52) vid6_indi_pane

0x28f2,	// (0x000332fd) bg_tb_trans_pane_cp09_ParamLimits

0x28f2,	// (0x000332fd) bg_tb_trans_pane_cp09

0x29ca,	// (0x000333d5) cam6_battery_pane_cp_ParamLimits

0x29ca,	// (0x000333d5) cam6_battery_pane_cp

0x29d6,	// (0x000333e1) vid6_indi_pane_g1_ParamLimits

0x29d6,	// (0x000333e1) vid6_indi_pane_g1

0x29e8,	// (0x000333f3) vid6_indi_pane_g2_ParamLimits

0x29e8,	// (0x000333f3) vid6_indi_pane_g2

0x29fa,	// (0x00033405) vid6_indi_pane_g3_ParamLimits

0x29fa,	// (0x00033405) vid6_indi_pane_g3

0x2a11,	// (0x0003341c) vid6_indi_pane_g4_ParamLimits

0x2a11,	// (0x0003341c) vid6_indi_pane_g4

0x2a28,	// (0x00033433) vid6_indi_pane_g5_ParamLimits

0x2a28,	// (0x00033433) vid6_indi_pane_g5

0x0004,

0xfb9f,	// (0x000405aa) vid6_indi_pane_g_ParamLimits

0xfb9f,	// (0x000405aa) vid6_indi_pane_g

0x2a42,	// (0x0003344d) vid6_indi_pane_t1_ParamLimits

0x2a42,	// (0x0003344d) vid6_indi_pane_t1

0x2a58,	// (0x00033463) vid6_indi_pane_t2_ParamLimits

0x2a58,	// (0x00033463) vid6_indi_pane_t2

0x2a80,	// (0x0003348b) vid6_indi_pane_t3_ParamLimits

0x2a80,	// (0x0003348b) vid6_indi_pane_t3

0x2aa8,	// (0x000334b3) vid6_indi_pane_t4_ParamLimits

0x2aa8,	// (0x000334b3) vid6_indi_pane_t4

0x0003,

0xfbaa,	// (0x000405b5) vid6_indi_pane_t_ParamLimits

0xfbaa,	// (0x000405b5) vid6_indi_pane_t

0x2acc,	// (0x000334d7) wait_bar_pane_cp08

0xc36c,	// (0x0003cd77) main_cset_text2_pane_t1_ParamLimits

0xc36c,	// (0x0003cd77) main_cset_text2_pane_t1

0xc2b4,	// (0x0003ccbf) listscroll_gen_pane_cp06_t1_ParamLimits

0xc2b4,	// (0x0003ccbf) listscroll_gen_pane_cp06_t1

0x612a,	// (0x00036b35) main_cam6_set_pane

0x14dc,	// (0x00031ee7) bg_tb_trans_pane_cp06_ParamLimits

0xafd2,	// (0x0003b9dd) cam4_indicators_pane_g1_ParamLimits

0xafdf,	// (0x0003b9ea) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00040330) cam4_indicators_pane_g_ParamLimits

0xafff,	// (0x0003ba0a) cam4_indicators_pane_t1_ParamLimits

0xf0c9,	// (0x0003fad4) bg_tb_trans_pane_cp07_ParamLimits

0xafd2,	// (0x0003b9dd) vid4_indicators_pane_g1_ParamLimits

0xb0b5,	// (0x0003bac0) vid4_indicators_pane_g2_ParamLimits

0xb0c2,	// (0x0003bacd) vid4_indicators_pane_g3_ParamLimits

0xb0d3,	// (0x0003bade) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00040342) vid4_indicators_pane_g_ParamLimits

0xb0ef,	// (0x0003bafa) vid4_indicators_pane_t1_ParamLimits

0xbe94,	// (0x0003c89f) vid4_progress_pane_g1_ParamLimits

0xbea0,	// (0x0003c8ab) vid4_progress_pane_g2_ParamLimits

0xbeac,	// (0x0003c8b7) vid4_progress_pane_g3_ParamLimits

0xbebb,	// (0x0003c8c6) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x000404ed) vid4_progress_pane_g_ParamLimits

0xbed9,	// (0x0003c8e4) vid4_progress_pane_t1_ParamLimits

0xbeef,	// (0x0003c8fa) vid4_progress_pane_t2_ParamLimits

0xbf05,	// (0x0003c910) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x000404f8) vid4_progress_pane_t_ParamLimits

0xbf1a,	// (0x0003c925) wait_bar_pane_cp07_ParamLimits

0xc393,	// (0x0003cd9e) main_cam6_set_pane_g2_ParamLimits

0xc393,	// (0x0003cd9e) main_cam6_set_pane_g2

0xc39f,	// (0x0003cdaa) main_cset6_listscroll_pane_ParamLimits

0xc39f,	// (0x0003cdaa) main_cset6_listscroll_pane

0xc3cc,	// (0x0003cdd7) main_cset6_slider_pane_ParamLimits

0xc3cc,	// (0x0003cdd7) main_cset6_slider_pane

0xc3d8,	// (0x0003cde3) main_cset6_text2_pane_ParamLimits

0xc3d8,	// (0x0003cde3) main_cset6_text2_pane

0x2adb,	// (0x000334e6) main_cset6_text_pane

0x2ae3,	// (0x000334ee) main_cset_list_pane_copy1_ParamLimits

0x2ae3,	// (0x000334ee) main_cset_list_pane_copy1

0x2af3,	// (0x000334fe) scroll_pane_cp028_copy1

0xc3eb,	// (0x0003cdf6) cset_list_set_pane_copy1

0xc3fb,	// (0x0003ce06) aid_position_infowindow_above_copy1

0xc403,	// (0x0003ce0e) aid_position_infowindow_below_copy1

0x5673,	// (0x0003607e) cset_list_set_pane_g1_copy1

0x567b,	// (0x00036086) cset_list_set_pane_g3_copy1_ParamLimits

0x567b,	// (0x00036086) cset_list_set_pane_g3_copy1

0x568a,	// (0x00036095) cset_list_set_pane_t1_copy1_ParamLimits

0x568a,	// (0x00036095) cset_list_set_pane_t1_copy1

0xf0c9,	// (0x0003fad4) list_highlight_pane_cp021_copy1_ParamLimits

0xf0c9,	// (0x0003fad4) list_highlight_pane_cp021_copy1

0x2b20,	// (0x0003352b) cset6_slider_pane_ParamLimits

0x2b20,	// (0x0003352b) cset6_slider_pane

0x2b4c,	// (0x00033557) main_cset6_slider_pane_g1_ParamLimits

0x2b4c,	// (0x00033557) main_cset6_slider_pane_g1

0xc40b,	// (0x0003ce16) main_cset6_slider_pane_g2_ParamLimits

0xc40b,	// (0x0003ce16) main_cset6_slider_pane_g2

0x2b74,	// (0x0003357f) main_cset6_slider_pane_g3_ParamLimits

0x2b74,	// (0x0003357f) main_cset6_slider_pane_g3

0xc433,	// (0x0003ce3e) main_cset6_slider_pane_g4_ParamLimits

0xc433,	// (0x0003ce3e) main_cset6_slider_pane_g4

0xc43f,	// (0x0003ce4a) main_cset6_slider_pane_g5_ParamLimits

0xc43f,	// (0x0003ce4a) main_cset6_slider_pane_g5

0x218e,	// (0x00032b99) main_cset6_slider_pane_g7_ParamLimits

0x218e,	// (0x00032b99) main_cset6_slider_pane_g7

0x219a,	// (0x00032ba5) main_cset6_slider_pane_g8_ParamLimits

0x219a,	// (0x00032ba5) main_cset6_slider_pane_g8

0xc44b,	// (0x0003ce56) main_cset6_slider_pane_g9_ParamLimits

0xc44b,	// (0x0003ce56) main_cset6_slider_pane_g9

0xc457,	// (0x0003ce62) main_cset6_slider_pane_g10_ParamLimits

0xc457,	// (0x0003ce62) main_cset6_slider_pane_g10

0xc463,	// (0x0003ce6e) main_cset6_slider_pane_g11_ParamLimits

0xc463,	// (0x0003ce6e) main_cset6_slider_pane_g11

0xc46f,	// (0x0003ce7a) main_cset6_slider_pane_g12_ParamLimits

0xc46f,	// (0x0003ce7a) main_cset6_slider_pane_g12

0xc47b,	// (0x0003ce86) main_cset6_slider_pane_g13_ParamLimits

0xc47b,	// (0x0003ce86) main_cset6_slider_pane_g13

0xc487,	// (0x0003ce92) main_cset6_slider_pane_g14_ParamLimits

0xc487,	// (0x0003ce92) main_cset6_slider_pane_g14

0xc493,	// (0x0003ce9e) main_cset6_slider_pane_g15_ParamLimits

0xc493,	// (0x0003ce9e) main_cset6_slider_pane_g15

0xc4ab,	// (0x0003ceb6) main_cset6_slider_pane_g16_ParamLimits

0xc4ab,	// (0x0003ceb6) main_cset6_slider_pane_g16

0xc4b7,	// (0x0003cec2) main_cset6_slider_pane_g17_ParamLimits

0xc4b7,	// (0x0003cec2) main_cset6_slider_pane_g17

0x0011,

0xfbb3,	// (0x000405be) main_cset6_slider_pane_g_ParamLimits

0xfbb3,	// (0x000405be) main_cset6_slider_pane_g

0x2b80,	// (0x0003358b) main_cset6_slider_pane_t1_ParamLimits

0x2b80,	// (0x0003358b) main_cset6_slider_pane_t1

0xc4db,	// (0x0003cee6) main_cset6_slider_pane_t2_ParamLimits

0xc4db,	// (0x0003cee6) main_cset6_slider_pane_t2

0xc506,	// (0x0003cf11) main_cset6_slider_pane_t3_ParamLimits

0xc506,	// (0x0003cf11) main_cset6_slider_pane_t3

0xc531,	// (0x0003cf3c) main_cset6_slider_pane_t4_ParamLimits

0xc531,	// (0x0003cf3c) main_cset6_slider_pane_t4

0xc55c,	// (0x0003cf67) main_cset6_slider_pane_t5_ParamLimits

0xc55c,	// (0x0003cf67) main_cset6_slider_pane_t5

0x2bc1,	// (0x000335cc) main_cset6_slider_pane_t7_ParamLimits

0x2bc1,	// (0x000335cc) main_cset6_slider_pane_t7

0xc587,	// (0x0003cf92) main_cset6_slider_pane_t8_ParamLimits

0xc587,	// (0x0003cf92) main_cset6_slider_pane_t8

0xc5ab,	// (0x0003cfb6) main_cset6_slider_pane_t9_ParamLimits

0xc5ab,	// (0x0003cfb6) main_cset6_slider_pane_t9

0xc5cf,	// (0x0003cfda) main_cset6_slider_pane_t10_ParamLimits

0xc5cf,	// (0x0003cfda) main_cset6_slider_pane_t10

0xc5f3,	// (0x0003cffe) main_cset6_slider_pane_t11_ParamLimits

0xc5f3,	// (0x0003cffe) main_cset6_slider_pane_t11

0x2bf7,	// (0x00033602) main_cset6_slider_pane_t14_ParamLimits

0x2bf7,	// (0x00033602) main_cset6_slider_pane_t14

0x2c30,	// (0x0003363b) main_cset6_slider_pane_t15_ParamLimits

0x2c30,	// (0x0003363b) main_cset6_slider_pane_t15

0x000b,

0xfbd8,	// (0x000405e3) main_cset6_slider_pane_t_ParamLimits

0xfbd8,	// (0x000405e3) main_cset6_slider_pane_t

0x2c69,	// (0x00033674) cset_slider_pane_g1_copy1

0x2c72,	// (0x0003367d) cset_slider_pane_g2_copy1

0x2c7b,	// (0x00033686) cset_slider_pane_g3_copy1

0x612a,	// (0x00036b35) bg_popup_sub_pane_cp011_copy1

0x2377,	// (0x00032d82) main_cset_text_pane_g1_copy1

0x237f,	// (0x00032d8a) main_cset_text_pane_t1_copy1

0x238d,	// (0x00032d98) main_cset_text_pane_t2_copy1

0x239b,	// (0x00032da6) main_cset_text_pane_t3_copy1

0x23a9,	// (0x00032db4) main_cset_text_pane_t4_copy1

0x23b7,	// (0x00032dc2) main_cset_text_pane_t5_copy1

0x23c5,	// (0x00032dd0) main_cset_text_pane_t6_copy1

0x23d3,	// (0x00032dde) main_cset_text_pane_t7_copy1

0xc617,	// (0x0003d022) main_cset_text2_pane_t1_copy1

0x612a,	// (0x00036b35) main_ncimui_pane

0x9115,	// (0x00039b20) popup_query_ncimui_window_ParamLimits

0x9115,	// (0x00039b20) popup_query_ncimui_window

0x52fe,	// (0x00035d09) field_cale_ev2_pane_g4_ParamLimits

0x52fe,	// (0x00035d09) field_cale_ev2_pane_g4

0xa98f,	// (0x0003b39a) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa98f,	// (0x0003b39a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x000402ce) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x000402ce) cell_video_dialer_keypad_pane_g

0xa9a7,	// (0x0003b3b2) cell_video_dialer_keypad_pane_t1

0x612a,	// (0x00036b35) bg_popup_window_pane_cp012

0xe792,	// (0x0003f19d) heading_pane_cp06

0x2d73,	// (0x0003377e) ncim_query_content_pane

0x612a,	// (0x00036b35) bg_popup_heading_pane_cp01

0x2d7b,	// (0x00033786) ncim_heading_pane_t1

0x2d89,	// (0x00033794) ncim_indicator_popup_pane

0x2d9b,	// (0x000337a6) ncim_query_button_pane

0x2db1,	// (0x000337bc) ncim_query_content_pane_t1

0x2dc3,	// (0x000337ce) ncim_query_content_pane_t2

0x0005,

0xfc17,	// (0x00040622) ncim_query_content_pane_t

0x2dfd,	// (0x00033808) ncim_query_list_pane

0x2e0f,	// (0x0003381a) ncim_query_popup_pane

0x2d89,	// (0x00033794) ncim_indicator_popup_pane_ParamLimits

0xc70c,	// (0x0003d117) ncim_query_content_pane_g1_ParamLimits

0xc70c,	// (0x0003d117) ncim_query_content_pane_g1

0x2db1,	// (0x000337bc) ncim_query_content_pane_t1_ParamLimits

0x2dc3,	// (0x000337ce) ncim_query_content_pane_t2_ParamLimits

0xc718,	// (0x0003d123) ncim_query_content_pane_t3_ParamLimits

0xc718,	// (0x0003d123) ncim_query_content_pane_t3

0xc735,	// (0x0003d140) ncim_query_content_pane_t4_ParamLimits

0xc735,	// (0x0003d140) ncim_query_content_pane_t4

0xc752,	// (0x0003d15d) ncim_query_content_pane_t5_ParamLimits

0xc752,	// (0x0003d15d) ncim_query_content_pane_t5

0x2dd5,	// (0x000337e0) ncim_query_content_pane_t6_ParamLimits

0x2dd5,	// (0x000337e0) ncim_query_content_pane_t6

0xfc17,	// (0x00040622) ncim_query_content_pane_t_ParamLimits

0x2dfd,	// (0x00033808) ncim_query_list_pane_ParamLimits

0x2e0f,	// (0x0003381a) ncim_query_popup_pane_ParamLimits

0x2e23,	// (0x0003382e) wait_bar_pane_cp04

0x612a,	// (0x00036b35) input_focus_pane_cp011

0x2e2b,	// (0x00033836) ncim_query_popup_pane_t1

0x2e39,	// (0x00033844) ncim_list_query_list_pane_ParamLimits

0x2e39,	// (0x00033844) ncim_list_query_list_pane

0x612a,	// (0x00036b35) bg_button_pane_cp027

0x2e4c,	// (0x00033857) ncim_query_button_pane_g1

0x612a,	// (0x00036b35) list_highlight_pane_cp012

0x2e56,	// (0x00033861) ncim_list_query_list_pane_g1

0x2e5e,	// (0x00033869) ncim_list_query_list_pane_t1

0xafef,	// (0x0003b9fa) cam4_indicators_pane_g3_ParamLimits

0xafef,	// (0x0003b9fa) cam4_indicators_pane_g3

0xb0df,	// (0x0003baea) vid4_indicators_pane_g5_ParamLimits

0xb0df,	// (0x0003baea) vid4_indicators_pane_g5

0xbeca,	// (0x0003c8d5) vid4_progress_pane_g5_ParamLimits

0xbeca,	// (0x0003c8d5) vid4_progress_pane_g5

0xc646,	// (0x0003d051) main_ncimui_pane_g1

0xc690,	// (0x0003d09b) ncimui_group_query_pane_ParamLimits

0xc690,	// (0x0003d09b) ncimui_group_query_pane

0xc6ce,	// (0x0003d0d9) ncimui_list_pane_ParamLimits

0xc6ce,	// (0x0003d0d9) ncimui_list_pane

0xc6e8,	// (0x0003d0f3) ncimui_text_pane_ParamLimits

0xc6e8,	// (0x0003d0f3) ncimui_text_pane

0xc76f,	// (0x0003d17a) ncimui_text_pane_t1_ParamLimits

0xc76f,	// (0x0003d17a) ncimui_text_pane_t1

0x2e6c,	// (0x00033877) ncimui_list_single_graphic_pane_ParamLimits

0x2e6c,	// (0x00033877) ncimui_list_single_graphic_pane

0xc78e,	// (0x0003d199) ncimui_query_pane_ParamLimits

0xc78e,	// (0x0003d199) ncimui_query_pane

0x612a,	// (0x00036b35) list_highlight_pane_cp013

0x2e7c,	// (0x00033887) ncim_list_query_list_pane_t1_copy1

0x2e56,	// (0x00033861) ncim_list_single_graphic_pane_g1

0x2e8a,	// (0x00033895) ncim_query_button_pane_cp01

0x2e92,	// (0x0003389d) ncim_query_entry_pane_ParamLimits

0x2e92,	// (0x0003389d) ncim_query_entry_pane

0x2ea2,	// (0x000338ad) ncimui_query_pane_g1

0x2eaa,	// (0x000338b5) ncimui_query_pane_t1_ParamLimits

0x2eaa,	// (0x000338b5) ncimui_query_pane_t1

0x612a,	// (0x00036b35) input_focus_pane_cp012

0x2e2b,	// (0x00033836) ncim_query_entry_pane_t1

0xdf84,	// (0x0003e98f) main_im_pane_ParamLimits

0xf0c9,	// (0x0003fad4) main_mobtv_pane_ParamLimits

0xf0c9,	// (0x0003fad4) main_mobtv_pane

0xc4c3,	// (0x0003cece) main_cset6_slider_pane_g18_ParamLimits

0xc4c3,	// (0x0003cece) main_cset6_slider_pane_g18

0xc4cf,	// (0x0003ceda) main_cset6_slider_pane_g19_ParamLimits

0xc4cf,	// (0x0003ceda) main_cset6_slider_pane_g19

0x2010,	// (0x00032a1b) bg_main_mobtv_pane_ParamLimits

0x2010,	// (0x00032a1b) bg_main_mobtv_pane

0xc79e,	// (0x0003d1a9) main_mobtv_info_pane

0xc7a9,	// (0x0003d1b4) main_mobtv_loading_pane_ParamLimits

0xc7a9,	// (0x0003d1b4) main_mobtv_loading_pane

0x2ece,	// (0x000338d9) main_mobtv_pg_channel_list_pane

0x2ed8,	// (0x000338e3) main_mobtv_pg_hdr_pane

0xc7b6,	// (0x0003d1c1) main_mobtv_programe_curr_pane_ParamLimits

0xc7b6,	// (0x0003d1c1) main_mobtv_programe_curr_pane

0xc7c3,	// (0x0003d1ce) main_mobtv_programe_next_pane_ParamLimits

0xc7c3,	// (0x0003d1ce) main_mobtv_programe_next_pane

0x2ee1,	// (0x000338ec) popup_mobtv_noti_window

0x12ac,	// (0x00031cb7) main_tv_pg_hdr_pane_g1

0x2eeb,	// (0x000338f6) main_tv_pg_hdr_pane_g2

0x2ef3,	// (0x000338fe) main_tv_pg_hdr_pane_g3

0x2efb,	// (0x00033906) main_tv_pg_hdr_pane_g4

0x2f03,	// (0x0003390e) main_tv_pg_hdr_pane_g5

0x2f0d,	// (0x00033918) main_tv_pg_hdr_pane_g6

0x2f17,	// (0x00033922) main_tv_pg_hdr_pane_g7

0x2f21,	// (0x0003392c) main_tv_pg_hdr_pane_g8

0x2f2b,	// (0x00033936) main_tv_pg_hdr_pane_g9

0x2f35,	// (0x00033940) main_tv_pg_hdr_pane_g10

0x2f3f,	// (0x0003394a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc24,	// (0x0004062f) main_tv_pg_hdr_pane_g

0x2f49,	// (0x00033954) main_tv_pg_hdr_pane_t1

0x2f57,	// (0x00033962) main_tv_pg_hdr_pane_t2

0x2f65,	// (0x00033970) main_tv_pg_hdr_pane_t3

0x2f75,	// (0x00033980) main_tv_pg_hdr_pane_t4

0x2f85,	// (0x00033990) main_tv_pg_hdr_pane_t5

0x0004,

0xfc3b,	// (0x00040646) main_tv_pg_hdr_pane_t

0x2f95,	// (0x000339a0) single_mobtv_pg_channel_pane_ParamLimits

0x2f95,	// (0x000339a0) single_mobtv_pg_channel_pane

0x2fa7,	// (0x000339b2) single_mobtv_pg_channel_table_pane

0x2fb0,	// (0x000339bb) single_mobtv_pg_channel_thumb_pane

0x2fb9,	// (0x000339c4) single_tv_pg_channel_pane_g1

0x2fc2,	// (0x000339cd) single_tv_pg_channel_pane_g2

0x0001,

0xfc46,	// (0x00040651) single_tv_pg_channel_pane_g

0x14dc,	// (0x00031ee7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x14dc,	// (0x00031ee7) bg_single_mobtv_pg_channel_thumb_pane

0x2fcb,	// (0x000339d6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2fcb,	// (0x000339d6) single_mobtv_pg_channel_thumb_pane_g1

0x2fd9,	// (0x000339e4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2fd9,	// (0x000339e4) single_mobtv_pg_channel_thumb_pane_g2

0x2fe5,	// (0x000339f0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2fe5,	// (0x000339f0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc4b,	// (0x00040656) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc4b,	// (0x00040656) single_mobtv_pg_channel_thumb_pane_g

0x2ff1,	// (0x000339fc) single_mobtv_pg_channel_thumb_pane_t1

0x2fff,	// (0x00033a0a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc52,	// (0x0004065d) single_mobtv_pg_channel_thumb_pane_t

0x12ac,	// (0x00031cb7) bg_single_mobtv_pg_channel_table_pane_g1

0x12ac,	// (0x00031cb7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0004011a) bg_single_mobtv_pg_channel_table_pane_g

0x300d,	// (0x00033a18) single_mobtv_pg_channel_table_pane_t1

0x301b,	// (0x00033a26) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc57,	// (0x00040662) single_mobtv_pg_channel_table_pane_t

0xc7d8,	// (0x0003d1e3) main_mobtv_info_pane_g1_ParamLimits

0xc7d8,	// (0x0003d1e3) main_mobtv_info_pane_g1

0xc7f4,	// (0x0003d1ff) main_mobtv_info_pane_t1_ParamLimits

0xc7f4,	// (0x0003d1ff) main_mobtv_info_pane_t1

0xc86c,	// (0x0003d277) main_mobtv_info_pane_t2_ParamLimits

0xc86c,	// (0x0003d277) main_mobtv_info_pane_t2

0x0002,

0xfc61,	// (0x0004066c) main_mobtv_info_pane_t_ParamLimits

0xfc61,	// (0x0004066c) main_mobtv_info_pane_t

0xc8ff,	// (0x0003d30a) wait_bar_pane_cp05

0xc911,	// (0x0003d31c) main_mobtv_loading_pane_g1_ParamLimits

0xc911,	// (0x0003d31c) main_mobtv_loading_pane_g1

0xc91d,	// (0x0003d328) main_mobtv_loading_pane_g2_ParamLimits

0xc91d,	// (0x0003d328) main_mobtv_loading_pane_g2

0xc929,	// (0x0003d334) main_mobtv_loading_pane_g3_ParamLimits

0xc929,	// (0x0003d334) main_mobtv_loading_pane_g3

0x0002,

0xfc68,	// (0x00040673) main_mobtv_loading_pane_g_ParamLimits

0xfc68,	// (0x00040673) main_mobtv_loading_pane_g

0x3029,	// (0x00033a34) main_mobtv_loading_pane_t1_ParamLimits

0x3029,	// (0x00033a34) main_mobtv_loading_pane_t1

0x3041,	// (0x00033a4c) main_mobtv_loading_pane_t2_ParamLimits

0x3041,	// (0x00033a4c) main_mobtv_loading_pane_t2

0x0001,

0xfc6f,	// (0x0004067a) main_mobtv_loading_pane_t_ParamLimits

0xfc6f,	// (0x0004067a) main_mobtv_loading_pane_t

0xc937,	// (0x0003d342) wait_bar_pane_cp06_ParamLimits

0xc937,	// (0x0003d342) wait_bar_pane_cp06

0x3065,	// (0x00033a70) main_mobtv_programe_curr_pane_t1

0x3073,	// (0x00033a7e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc74,	// (0x0004067f) main_mobtv_programe_curr_pane_t

0x3081,	// (0x00033a8c) main_mobtv_programe_next_pane_t1

0x308f,	// (0x00033a9a) main_mobtv_programe_next_pane_t2

0x309d,	// (0x00033aa8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc79,	// (0x00040684) main_mobtv_programe_next_pane_t

0x612a,	// (0x00036b35) bg_popup_mobtv_noti_window_pane

0x30ab,	// (0x00033ab6) popup_mobtv_noti_window_g1

0x30b3,	// (0x00033abe) popup_mobtv_noti_window_t1

0x30c1,	// (0x00033acc) popup_mobtv_noti_window_t2

0x0001,

0xfc80,	// (0x0004068b) popup_mobtv_noti_window_t

0x12ac,	// (0x00031cb7) bg_popup_mobtv_noti_window_pane_g1

0x612a,	// (0x00036b35) sc_clock_pane

0x612a,	// (0x00036b35) main_fs_bigclock_pane

0xc0b4,	// (0x0003cabf) blid2_tripm_pane_t4_ParamLimits

0xc0b4,	// (0x0003cabf) blid2_tripm_pane_t4

0xc943,	// (0x0003d34e) sc_clock_pane_g1_ParamLimits

0xc943,	// (0x0003d34e) sc_clock_pane_g1

0xc951,	// (0x0003d35c) sc_clock_pane_t1_ParamLimits

0xc951,	// (0x0003d35c) sc_clock_pane_t1

0xc966,	// (0x0003d371) sc_clock_pane_t2_ParamLimits

0xc966,	// (0x0003d371) sc_clock_pane_t2

0xc978,	// (0x0003d383) sc_clock_pane_t3_ParamLimits

0xc978,	// (0x0003d383) sc_clock_pane_t3

0x0004,

0xfc85,	// (0x00040690) sc_clock_pane_t_ParamLimits

0xfc85,	// (0x00040690) sc_clock_pane_t

0xd160,	// (0x0003db6b) main_fs_bigclock_indicator_pane_ParamLimits

0xd160,	// (0x0003db6b) main_fs_bigclock_indicator_pane

0xc9ff,	// (0x0003d40a) main_fs_bigclock_pane_g1_ParamLimits

0xc9ff,	// (0x0003d40a) main_fs_bigclock_pane_g1

0xd16c,	// (0x0003db77) main_fs_bigclock_pane_t1_ParamLimits

0xd16c,	// (0x0003db77) main_fs_bigclock_pane_t1

0xd17e,	// (0x0003db89) main_fs_bigclock_pane_t2_ParamLimits

0xd17e,	// (0x0003db89) main_fs_bigclock_pane_t2

0xd192,	// (0x0003db9d) main_fs_bigclock_pane_t3_ParamLimits

0xd192,	// (0x0003db9d) main_fs_bigclock_pane_t3

0x0002,

0xfe84,	// (0x0004088f) main_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0004088f) main_fs_bigclock_pane_t

0x3d39,	// (0x00034744) main_fs_bigclock_indicator_pane_g1

0x2da3,	// (0x000337ae) ncim_query_content_pane_g2_ParamLimits

0x2da3,	// (0x000337ae) ncim_query_content_pane_g2

0x0001,

0xfc12,	// (0x0004061d) ncim_query_content_pane_g_ParamLimits

0xfc12,	// (0x0004061d) ncim_query_content_pane_g

0xc98a,	// (0x0003d395) sc_clock_pane_t4_ParamLimits

0xc98a,	// (0x0003d395) sc_clock_pane_t4

0xf0c9,	// (0x0003fad4) main_radioblah_pane

0x1ed2,	// (0x000328dd) cell_call4_button_pane_t1_copy1_ParamLimits

0x1ed2,	// (0x000328dd) cell_call4_button_pane_t1_copy1

0xc650,	// (0x0003d05b) main_ncimui_pane_t1_ParamLimits

0xc650,	// (0x0003d05b) main_ncimui_pane_t1

0xc662,	// (0x0003d06d) main_ncimui_pane_t2_ParamLimits

0xc662,	// (0x0003d06d) main_ncimui_pane_t2

0x0002,

0xfc0b,	// (0x00040616) main_ncimui_pane_t_ParamLimits

0xfc0b,	// (0x00040616) main_ncimui_pane_t

0x31f9,	// (0x00033c04) main_radioblah_anim_pane_ParamLimits

0x31f9,	// (0x00033c04) main_radioblah_anim_pane

0x320a,	// (0x00033c15) main_radioblah_info_pane_ParamLimits

0x320a,	// (0x00033c15) main_radioblah_info_pane

0x321e,	// (0x00033c29) main_radioblah_pane_t1_ParamLimits

0x321e,	// (0x00033c29) main_radioblah_pane_t1

0x323a,	// (0x00033c45) main_radioblah_pane_t2_ParamLimits

0x323a,	// (0x00033c45) main_radioblah_pane_t2

0x0003,

0xfca6,	// (0x000406b1) main_radioblah_pane_t_ParamLimits

0xfca6,	// (0x000406b1) main_radioblah_pane_t

0xca53,	// (0x0003d45e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xca53,	// (0x0003d45e) main_radioblah_rocker_ctrl_pane

0x3282,	// (0x00033c8d) main_radioblah_info_pane_t1_ParamLimits

0x3282,	// (0x00033c8d) main_radioblah_info_pane_t1

0xca9c,	// (0x0003d4a7) main_radioblah_info_pane_t2_ParamLimits

0xca9c,	// (0x0003d4a7) main_radioblah_info_pane_t2

0x0003,

0xfcaf,	// (0x000406ba) main_radioblah_info_pane_t_ParamLimits

0xfcaf,	// (0x000406ba) main_radioblah_info_pane_t

0x12ac,	// (0x00031cb7) main_radioblah_rocker_ctrl_pane_g1

0xcb4c,	// (0x0003d557) main_radioblah_rocker_ctrl_pane_g2

0xcb54,	// (0x0003d55f) main_radioblah_rocker_ctrl_pane_g3

0xcb5c,	// (0x0003d567) main_radioblah_rocker_ctrl_pane_g4

0xcb64,	// (0x0003d56f) main_radioblah_rocker_ctrl_pane_g5

0xcb6c,	// (0x0003d577) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb8,	// (0x000406c3) main_radioblah_rocker_ctrl_pane_g

0xc617,	// (0x0003d022) main_cset_text2_pane_t1_copy1_ParamLimits

0xaf1c,	// (0x0003b927) cam4_image_uncrop_qvga_pane

0xb065,	// (0x0003ba70) vid4_image_uncrop_qcif_pane

0xc246,	// (0x0003cc51) cam6_image_uncrop_qvga_pane_ParamLimits

0xc246,	// (0x0003cc51) cam6_image_uncrop_qvga_pane

0x29ba,	// (0x000333c5) vid6_image_uncrop_qcif_pane_ParamLimits

0x29ba,	// (0x000333c5) vid6_image_uncrop_qcif_pane

0x612a,	// (0x00036b35) bg_popup_preview_window_pane_cp03

0x2d55,	// (0x00033760) list_cset_text2_pane

0x2d5d,	// (0x00033768) main_cset6_text2_pane_g1

0x2d65,	// (0x00033770) main_cset6_text2_pane_t1

0xcb74,	// (0x0003d57f) list_cset_text2_pane_t1_ParamLimits

0xcb74,	// (0x0003d57f) list_cset_text2_pane_t1

0xf0c9,	// (0x0003fad4) main_radioblah_pane_ParamLimits

0xc8eb,	// (0x0003d2f6) main_mobtv_info_pane_t3_ParamLimits

0xc8eb,	// (0x0003d2f6) main_mobtv_info_pane_t3

0xca41,	// (0x0003d44c) main_radioblah_pane_g1

0xca6c,	// (0x0003d477) main_radioblah_info_pane_g1

0xcaf1,	// (0x0003d4fc) main_radioblah_info_pane_t3_ParamLimits

0xcaf1,	// (0x0003d4fc) main_radioblah_info_pane_t3

0x7e08,	// (0x00038813) highlight_cell_cale_month_pane_ParamLimits

0x7e08,	// (0x00038813) highlight_cell_cale_month_pane

0x612a,	// (0x00036b35) main_phob_fisheye_pane

0x1632,	// (0x0003203d) scroll_pane_cp0031_ParamLimits

0x1632,	// (0x0003203d) scroll_pane_cp0031

0x2acc,	// (0x000334d7) wait_bar_pane_cp08_ParamLimits

0xc3eb,	// (0x0003cdf6) cset_list_set_pane_copy1_ParamLimits

0x32d6,	// (0x00033ce1) highlight_cell_cale_month_pane_g1

0xcb8d,	// (0x0003d598) highlight_cell_cale_month_pane_t1

0x2653,	// (0x0003305e) list_gen_pane_cp01

0x2179,	// (0x00032b84) scroll_pane_01

0x564d,	// (0x00036058) list_single_double_fisheye_pane

0x5770,	// (0x0003617b) list_double_fisheye_pane_g1_ParamLimits

0x5770,	// (0x0003617b) list_double_fisheye_pane_g1

0x577c,	// (0x00036187) list_double_fisheye_pane_g2_ParamLimits

0x577c,	// (0x00036187) list_double_fisheye_pane_g2

0x5790,	// (0x0003619b) list_double_fisheye_pane_g3_ParamLimits

0x5790,	// (0x0003619b) list_double_fisheye_pane_g3

0x0004,

0xfcc5,	// (0x000406d0) list_double_fisheye_pane_g_ParamLimits

0xfcc5,	// (0x000406d0) list_double_fisheye_pane_g

0x57b9,	// (0x000361c4) list_double_fisheye_pane_t1_ParamLimits

0x57b9,	// (0x000361c4) list_double_fisheye_pane_t1

0x57d4,	// (0x000361df) list_double_fisheye_pane_t2_ParamLimits

0x57d4,	// (0x000361df) list_double_fisheye_pane_t2

0x0001,

0xfcd0,	// (0x000406db) list_double_fisheye_pane_t_ParamLimits

0xfcd0,	// (0x000406db) list_double_fisheye_pane_t

0x612a,	// (0x00036b35) main_call5_pane

0xc9b0,	// (0x0003d3bb) sc_swipe_pane_ParamLimits

0xc9b0,	// (0x0003d3bb) sc_swipe_pane

0xcba7,	// (0x0003d5b2) call5_image_pane_ParamLimits

0xcba7,	// (0x0003d5b2) call5_image_pane

0xcbb9,	// (0x0003d5c4) call5_swipe_1_pane_ParamLimits

0xcbb9,	// (0x0003d5c4) call5_swipe_1_pane

0xcbc5,	// (0x0003d5d0) call5_swipe_2_pane_ParamLimits

0xcbc5,	// (0x0003d5d0) call5_swipe_2_pane

0xcbe1,	// (0x0003d5ec) popup_call5_audio_first_window_ParamLimits

0xcbe1,	// (0x0003d5ec) popup_call5_audio_first_window

0x14dc,	// (0x00031ee7) call5_swipe_1_pane_g1_ParamLimits

0x14dc,	// (0x00031ee7) call5_swipe_1_pane_g1

0x331b,	// (0x00033d26) call5_swipe_1_pane_g2_ParamLimits

0x331b,	// (0x00033d26) call5_swipe_1_pane_g2

0x0001,

0xfcd5,	// (0x000406e0) call5_swipe_1_pane_g_ParamLimits

0xfcd5,	// (0x000406e0) call5_swipe_1_pane_g

0x3327,	// (0x00033d32) call5_swipe_1_pane_t1_ParamLimits

0x3327,	// (0x00033d32) call5_swipe_1_pane_t1

0x14dc,	// (0x00031ee7) call5_swipe_2_pane_g1_ParamLimits

0x14dc,	// (0x00031ee7) call5_swipe_2_pane_g1

0x333c,	// (0x00033d47) call5_swipe_2_pane_g2_ParamLimits

0x333c,	// (0x00033d47) call5_swipe_2_pane_g2

0x0001,

0xfcda,	// (0x000406e5) call5_swipe_2_pane_g_ParamLimits

0xfcda,	// (0x000406e5) call5_swipe_2_pane_g

0x3348,	// (0x00033d53) call5_swipe_2_pane_t1_ParamLimits

0x3348,	// (0x00033d53) call5_swipe_2_pane_t1

0x335d,	// (0x00033d68) sc_swipe_pane_g1_ParamLimits

0x335d,	// (0x00033d68) sc_swipe_pane_g1

0x336a,	// (0x00033d75) sc_swipe_pane_g2_ParamLimits

0x336a,	// (0x00033d75) sc_swipe_pane_g2

0x0001,

0xfcdf,	// (0x000406ea) sc_swipe_pane_g_ParamLimits

0xfcdf,	// (0x000406ea) sc_swipe_pane_g

0x3376,	// (0x00033d81) sc_swipe_pane_t1_ParamLimits

0x3376,	// (0x00033d81) sc_swipe_pane_t1

0x612a,	// (0x00036b35) main_cmail_launcher_pane

0xcbf1,	// (0x0003d5fc) aid_size_cell_cmail_l_ParamLimits

0xcbf1,	// (0x0003d5fc) aid_size_cell_cmail_l

0xcc01,	// (0x0003d60c) grid_cmail_l_pane_ParamLimits

0xcc01,	// (0x0003d60c) grid_cmail_l_pane

0xcc11,	// (0x0003d61c) cell_cmail_l_pane_ParamLimits

0xcc11,	// (0x0003d61c) cell_cmail_l_pane

0xcc27,	// (0x0003d632) cell_cmail_l_pane_g1_ParamLimits

0xcc27,	// (0x0003d632) cell_cmail_l_pane_g1

0xcc33,	// (0x0003d63e) cell_cmail_l_pane_t1_ParamLimits

0xcc33,	// (0x0003d63e) cell_cmail_l_pane_t1

0x338b,	// (0x00033d96) cell_cmail_l_pane_t2_ParamLimits

0x338b,	// (0x00033d96) cell_cmail_l_pane_t2

0x0001,

0xfce4,	// (0x000406ef) cell_cmail_l_pane_t_ParamLimits

0xfce4,	// (0x000406ef) cell_cmail_l_pane_t

0xf0c9,	// (0x0003fad4) grid_highlight_pane_cp018_ParamLimits

0xf0c9,	// (0x0003fad4) grid_highlight_pane_cp018

0x6256,	// (0x00036c61) main2_pane_ParamLimits

0x6256,	// (0x00036c61) main2_pane

0xe02f,	// (0x0003ea3a) popup_sp_fs_action_menu_bg_pane_g1

0xe037,	// (0x0003ea42) popup_sp_fs_action_menu_bg_pane_g2

0xe03f,	// (0x0003ea4a) popup_sp_fs_action_menu_bg_pane_g3

0xe047,	// (0x0003ea52) popup_sp_fs_action_menu_bg_pane_g4

0xe04f,	// (0x0003ea5a) popup_sp_fs_action_menu_bg_pane_g5

0xe057,	// (0x0003ea62) popup_sp_fs_action_menu_bg_pane_g6

0xe05f,	// (0x0003ea6a) popup_sp_fs_action_menu_bg_pane_g7

0xe067,	// (0x0003ea72) popup_sp_fs_action_menu_bg_pane_g8

0xe06f,	// (0x0003ea7a) popup_sp_fs_action_menu_bg_pane_g9

0xe077,	// (0x0003ea82) popup_sp_fs_action_menu_bg_pane_g10

0xe077,	// (0x0003ea82) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0003fbc6) popup_sp_fs_action_menu_bg_pane_g

0x4fd0,	// (0x000359db) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x2_t3_g3_g1

0x4fdc,	// (0x000359e7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4fdc,	// (0x000359e7) list_medium_line_x2_t3_g3_g2

0x4fe8,	// (0x000359f3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4fe8,	// (0x000359f3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0003fc76) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0003fc76) list_medium_line_x2_t3_g3_g

0x4ff4,	// (0x000359ff) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4ff4,	// (0x000359ff) list_medium_line_x2_t3_g3_t1

0x5009,	// (0x00035a14) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5009,	// (0x00035a14) list_medium_line_x2_t3_g3_t2

0x501d,	// (0x00035a28) list_medium_line_x2_t3_g3_t3_ParamLimits

0x501d,	// (0x00035a28) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0003fc7d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0003fc7d) list_medium_line_x2_t3_g3_t

0x4fd0,	// (0x000359db) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x2_t3_g2_g1

0x4fe8,	// (0x000359f3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4fe8,	// (0x000359f3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0003fc84) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0003fc84) list_medium_line_x2_t3_g2_g

0x5032,	// (0x00035a3d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5032,	// (0x00035a3d) list_medium_line_x2_t3_g2_t1

0x5048,	// (0x00035a53) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5048,	// (0x00035a53) list_medium_line_x2_t3_g2_t2

0x505a,	// (0x00035a65) list_medium_line_x2_t3_g2_t3_ParamLimits

0x505a,	// (0x00035a65) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0003fc89) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0003fc89) list_medium_line_x2_t3_g2_t

0x4fd0,	// (0x000359db) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x2_t4_g4_g1

0x5078,	// (0x00035a83) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5078,	// (0x00035a83) list_medium_line_x2_t4_g4_g2

0x4fdc,	// (0x000359e7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4fdc,	// (0x000359e7) list_medium_line_x2_t4_g4_g3

0x5084,	// (0x00035a8f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5084,	// (0x00035a8f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0003fc90) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0003fc90) list_medium_line_x2_t4_g4_g

0x5090,	// (0x00035a9b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5090,	// (0x00035a9b) list_medium_line_x2_t4_g4_t1

0x50aa,	// (0x00035ab5) list_medium_line_x2_t4_g4_t2_ParamLimits

0x50aa,	// (0x00035ab5) list_medium_line_x2_t4_g4_t2

0x50c0,	// (0x00035acb) list_medium_line_x2_t4_g4_t3_ParamLimits

0x50c0,	// (0x00035acb) list_medium_line_x2_t4_g4_t3

0x50d5,	// (0x00035ae0) list_medium_line_x2_t4_g4_t4_ParamLimits

0x50d5,	// (0x00035ae0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0003fc99) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0003fc99) list_medium_line_x2_t4_g4_t

0x4fd0,	// (0x000359db) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x2_t2_g4_g1

0x5078,	// (0x00035a83) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5078,	// (0x00035a83) list_medium_line_x2_t2_g4_g2

0x4fdc,	// (0x000359e7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4fdc,	// (0x000359e7) list_medium_line_x2_t2_g4_g3

0x4fe8,	// (0x000359f3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4fe8,	// (0x000359f3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0003fd00) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0003fd00) list_medium_line_x2_t2_g4_g

0x50e7,	// (0x00035af2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x50e7,	// (0x00035af2) list_medium_line_x2_t2_g4_t1

0x501d,	// (0x00035a28) list_medium_line_x2_t2_g4_t2_ParamLimits

0x501d,	// (0x00035a28) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0003fd09) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0003fd09) list_medium_line_x2_t2_g4_t

0x4fd0,	// (0x000359db) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x2_t2_g3_g1

0x4fdc,	// (0x000359e7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4fdc,	// (0x000359e7) list_medium_line_x2_t2_g3_g2

0x4fe8,	// (0x000359f3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4fe8,	// (0x000359f3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0003fc76) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0003fc76) list_medium_line_x2_t2_g3_g

0x50fc,	// (0x00035b07) list_medium_line_x2_t2_g3_t1_ParamLimits

0x50fc,	// (0x00035b07) list_medium_line_x2_t2_g3_t1

0x501d,	// (0x00035a28) list_medium_line_x2_t2_g3_t2_ParamLimits

0x501d,	// (0x00035a28) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0003fd0e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0003fd0e) list_medium_line_x2_t2_g3_t

0x8026,	// (0x00038a31) main_sp_fs_list_pane_ParamLimits

0x8026,	// (0x00038a31) main_sp_fs_list_pane

0x8032,	// (0x00038a3d) sp_fs_scroll_pane_ParamLimits

0x8032,	// (0x00038a3d) sp_fs_scroll_pane

0x5111,	// (0x00035b1c) list_medium_line_x2_t3_t1

0x5121,	// (0x00035b2c) list_medium_line_x2_t3_t2

0x512f,	// (0x00035b3a) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0003fd59) list_medium_line_x2_t3_t

0x513d,	// (0x00035b48) list_medium_line_x3_t4_t1

0x514d,	// (0x00035b58) list_medium_line_x3_t4_t2

0x515b,	// (0x00035b66) list_medium_line_x3_t4_t3

0x512f,	// (0x00035b3a) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0003fd60) list_medium_line_x3_t4_t

0x5169,	// (0x00035b74) list_medium_line_x4_t5_t1

0x5179,	// (0x00035b84) list_medium_line_x4_t5_t2

0x515b,	// (0x00035b66) list_medium_line_x4_t5_t3

0x5187,	// (0x00035b92) list_medium_line_x4_t5_t4

0x512f,	// (0x00035b3a) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0003fd69) list_medium_line_x4_t5_t

0x4fd0,	// (0x000359db) list_medium_line_t4_g4_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_t4_g4_g1

0x5084,	// (0x00035a8f) list_medium_line_t4_g4_g2_ParamLimits

0x5084,	// (0x00035a8f) list_medium_line_t4_g4_g2

0x5195,	// (0x00035ba0) list_medium_line_t4_g4_g3_ParamLimits

0x5195,	// (0x00035ba0) list_medium_line_t4_g4_g3

0x4fe8,	// (0x000359f3) list_medium_line_t4_g4_g4_ParamLimits

0x4fe8,	// (0x000359f3) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0003fd74) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0003fd74) list_medium_line_t4_g4_g

0x51a1,	// (0x00035bac) list_medium_line_t4_g4_t1_ParamLimits

0x51a1,	// (0x00035bac) list_medium_line_t4_g4_t1

0x51b6,	// (0x00035bc1) list_medium_line_t4_g4_t2_ParamLimits

0x51b6,	// (0x00035bc1) list_medium_line_t4_g4_t2

0x51cc,	// (0x00035bd7) list_medium_line_t4_g4_t3_ParamLimits

0x51cc,	// (0x00035bd7) list_medium_line_t4_g4_t3

0x501d,	// (0x00035a28) list_medium_line_t4_g4_t4_ParamLimits

0x501d,	// (0x00035a28) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0003fd7d) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0003fd7d) list_medium_line_t4_g4_t

0x8151,	// (0x00038b5c) chi_dic_find_pane_g1

0x90de,	// (0x00039ae9) main_tport_pane

0x545b,	// (0x00035e66) list_medium_line_plain_t1

0x5469,	// (0x00035e74) list_medium_line_t2_g2_g1_ParamLimits

0x5469,	// (0x00035e74) list_medium_line_t2_g2_g1

0x5475,	// (0x00035e80) list_medium_line_t2_g2_g2_ParamLimits

0x5475,	// (0x00035e80) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00040439) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00040439) list_medium_line_t2_g2_g

0x5481,	// (0x00035e8c) list_medium_line_t2_g2_t1_ParamLimits

0x5481,	// (0x00035e8c) list_medium_line_t2_g2_t1

0x5498,	// (0x00035ea3) list_medium_line_t2_g2_t2_ParamLimits

0x5498,	// (0x00035ea3) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0004043e) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0004043e) list_medium_line_t2_g2_t

0x562b,	// (0x00036036) aid_sp_fs_list_icon_a_sm

0x5633,	// (0x0003603e) aid_sp_fs_list_icon_d

0x3b6e,	// (0x00034579) aid_sp_fs_text_primary

0x38d5,	// (0x000342e0) aid_sp_fs_text_secondary

0x563b,	// (0x00036046) list_medium_line

0x563b,	// (0x00036046) list_medium_line_g2

0x563b,	// (0x00036046) list_medium_line_g3

0x563b,	// (0x00036046) list_medium_line_plain

0x563b,	// (0x00036046) list_medium_line_plain_t2

0x563b,	// (0x00036046) list_medium_line_plain_t3

0x563b,	// (0x00036046) list_medium_line_right_icon

0x563b,	// (0x00036046) list_medium_line_right_iconx2

0x563b,	// (0x00036046) list_medium_line_t2

0x563b,	// (0x00036046) list_medium_line_t2_g2

0x563b,	// (0x00036046) list_medium_line_t2_g3

0x563b,	// (0x00036046) list_medium_line_t2_right_icon

0x563b,	// (0x00036046) list_medium_line_t2_right_iconx2

0x563b,	// (0x00036046) list_medium_line_t3

0x563b,	// (0x00036046) list_medium_line_t3_g2

0x563b,	// (0x00036046) list_medium_line_t3_g3

0x563b,	// (0x00036046) list_medium_line_t3_right_iconx2

0x5644,	// (0x0003604f) list_medium_line_t4_g4

0x564d,	// (0x00036058) list_medium_line_x2

0x564d,	// (0x00036058) list_medium_line_x2_t2_g2

0x564d,	// (0x00036058) list_medium_line_x2_t2_g3

0x564d,	// (0x00036058) list_medium_line_x2_t2_g4

0x564d,	// (0x00036058) list_medium_line_x2_t3

0x564d,	// (0x00036058) list_medium_line_x2_t3_g2

0x564d,	// (0x00036058) list_medium_line_x2_t3_g3

0x564d,	// (0x00036058) list_medium_line_x2_t3_g4

0x564d,	// (0x00036058) list_medium_line_x2_t4_g2

0x564d,	// (0x00036058) list_medium_line_x2_t4_g4

0x5656,	// (0x00036061) list_medium_line_x3

0x5656,	// (0x00036061) list_medium_line_x3_t4

0x5656,	// (0x00036061) list_medium_line_x3_t4_g4

0x5644,	// (0x0003604f) list_medium_line_x4_t4

0x5644,	// (0x0003604f) list_medium_line_x4_t4_g7

0x5644,	// (0x0003604f) list_medium_line_x4_t5

0x565f,	// (0x0003606a) list_single_fs_dyc_pane_ParamLimits

0x565f,	// (0x0003606a) list_single_fs_dyc_pane

0x4fd0,	// (0x000359db) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x4_t4_g7_g1

0x569f,	// (0x000360aa) list_medium_line_x4_t4_g7_g2_ParamLimits

0x569f,	// (0x000360aa) list_medium_line_x4_t4_g7_g2

0x56ab,	// (0x000360b6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x56ab,	// (0x000360b6) list_medium_line_x4_t4_g7_g3

0x56ba,	// (0x000360c5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x56ba,	// (0x000360c5) list_medium_line_x4_t4_g7_g4

0x56c6,	// (0x000360d1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x56c6,	// (0x000360d1) list_medium_line_x4_t4_g7_g5

0x56d5,	// (0x000360e0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x56d5,	// (0x000360e0) list_medium_line_x4_t4_g7_g6

0x56e4,	// (0x000360ef) list_medium_line_x4_t4_g7_g7_ParamLimits

0x56e4,	// (0x000360ef) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf1,	// (0x000405fc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf1,	// (0x000405fc) list_medium_line_x4_t4_g7_g

0x56f0,	// (0x000360fb) list_medium_line_x4_t4_g7_t1_ParamLimits

0x56f0,	// (0x000360fb) list_medium_line_x4_t4_g7_t1

0x5705,	// (0x00036110) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5705,	// (0x00036110) list_medium_line_x4_t4_g7_t2

0x571a,	// (0x00036125) list_medium_line_x4_t4_g7_t3_ParamLimits

0x571a,	// (0x00036125) list_medium_line_x4_t4_g7_t3

0x572f,	// (0x0003613a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x572f,	// (0x0003613a) list_medium_line_x4_t4_g7_t4

0x5741,	// (0x0003614c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5741,	// (0x0003614c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc00,	// (0x0004060b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc00,	// (0x0004060b) list_medium_line_x4_t4_g7_t

0x5753,	// (0x0003615e) list_single_dyc_row_pane_ParamLimits

0x5753,	// (0x0003615e) list_single_dyc_row_pane

0xcb9b,	// (0x0003d5a6) call5_gesture_pane_ParamLimits

0xcb9b,	// (0x0003d5a6) call5_gesture_pane

0xcbd1,	// (0x0003d5dc) call5_windows_pane_ParamLimits

0xcbd1,	// (0x0003d5dc) call5_windows_pane

0xcc49,	// (0x0003d654) call5_swipe_1_pane_cp_ParamLimits

0xcc49,	// (0x0003d654) call5_swipe_1_pane_cp

0xcc55,	// (0x0003d660) call5_swipe_2_pane_cp_ParamLimits

0xcc55,	// (0x0003d660) call5_swipe_2_pane_cp

0xe9e0,	// (0x0003f3eb) call5_image_pane_cp

0xcc61,	// (0x0003d66c) popup_call5_audio_first_window_cp_ParamLimits

0xcc61,	// (0x0003d66c) popup_call5_audio_first_window_cp

0x335d,	// (0x00033d68) call5_swipe_1_pane_g1_cp_ParamLimits

0x335d,	// (0x00033d68) call5_swipe_1_pane_g1_cp

0x339d,	// (0x00033da8) call5_swipe_1_pane_g2_cp

0x3376,	// (0x00033d81) call5_swipe_1_pane_t1_cp_ParamLimits

0x3376,	// (0x00033d81) call5_swipe_1_pane_t1_cp

0x335d,	// (0x00033d68) call5_swipe_2_pane_g1_cp_ParamLimits

0x335d,	// (0x00033d68) call5_swipe_2_pane_g1_cp

0x33a5,	// (0x00033db0) call5_swipe_2_pane_g2_cp

0x33ad,	// (0x00033db8) call5_swipe_2_pane_t1_cp_ParamLimits

0x33ad,	// (0x00033db8) call5_swipe_2_pane_t1_cp

0xf0c9,	// (0x0003fad4) main_sp_fs_email_pane

0x33c2,	// (0x00033dcd) main_sp_fs_listscroll_pane_te

0x57f6,	// (0x00036201) popup_sp_fs_action_menu_pane_ParamLimits

0x57f6,	// (0x00036201) popup_sp_fs_action_menu_pane

0x12ac,	// (0x00031cb7) bg_sp_fs_ctrlbar_pane_g1

0x3411,	// (0x00033e1c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x341a,	// (0x00033e25) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3423,	// (0x00033e2e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x12ac,	// (0x00031cb7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce9,	// (0x000406f4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x108b,	// (0x00031a96) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x108b,	// (0x00031a96) bg_sp_fs_ctrlbar_ddmenu_pane

0x342c,	// (0x00033e37) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x342c,	// (0x00033e37) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3438,	// (0x00033e43) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3438,	// (0x00033e43) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf2,	// (0x000406fd) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf2,	// (0x000406fd) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3444,	// (0x00033e4f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3444,	// (0x00033e4f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x583c,	// (0x00036247) list_medium_line_t2_right_icon_g1

0x5844,	// (0x0003624f) list_medium_line_t2_right_icon_t1

0x5854,	// (0x0003625f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf7,	// (0x00040702) list_medium_line_t2_right_icon_t

0x0d77,	// (0x00031782) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0d77,	// (0x00031782) bg_sp_fs_ctrlbar_pane

0xccc6,	// (0x0003d6d1) main_sp_fs_ctrlbar_button_pane_cp01

0xccce,	// (0x0003d6d9) main_sp_fs_ctrlbar_ddmenu_pane

0x34a0,	// (0x00033eab) main_sp_fs_ctrlbar_pane_g1

0x34ac,	// (0x00033eb7) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfc,	// (0x00040707) main_sp_fs_ctrlbar_pane_g

0x34b8,	// (0x00033ec3) main_sp_fs_ctrlbar_pane_t1

0x5862,	// (0x0003626d) main_sp_fs_ctrlbar_pane

0x587e,	// (0x00036289) main_sp_fs_listscroll_pane_te_cp01

0x588f,	// (0x0003629a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x588f,	// (0x0003629a) popup_sp_fs_action_menu_pane_cp01

0xf0c9,	// (0x0003fad4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0c9,	// (0x0003fad4) bg_sp_fs_highlight_list_pane_cp01

0x58a9,	// (0x000362b4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x58a9,	// (0x000362b4) sp_fs_action_menu_list_gene_pane_g1

0x34dc,	// (0x00033ee7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x34dc,	// (0x00033ee7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd01,	// (0x0004070c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd01,	// (0x0004070c) sp_fs_action_menu_list_gene_pane_g

0x58b8,	// (0x000362c3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x58b8,	// (0x000362c3) sp_fs_action_menu_list_gene_pane_t1

0x58d0,	// (0x000362db) sp_fs_action_menu_list_gene_pane_ParamLimits

0x58d0,	// (0x000362db) sp_fs_action_menu_list_gene_pane

0x3524,	// (0x00033f2f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3524,	// (0x00033f2f) popup_sp_fs_action_menu_bg_pane

0x58f3,	// (0x000362fe) sp_fs_action_menu_list_pane_ParamLimits

0x58f3,	// (0x000362fe) sp_fs_action_menu_list_pane

0x3556,	// (0x00033f61) sp_fs_scroll_pane_cp01_ParamLimits

0x3556,	// (0x00033f61) sp_fs_scroll_pane_cp01

0x5917,	// (0x00036322) list_medium_line_plain_t2_t1

0x5927,	// (0x00036332) list_medium_line_plain_t2_t2

0x0001,

0xfd06,	// (0x00040711) list_medium_line_plain_t2_t

0x5935,	// (0x00036340) list_medium_line_plain_t3_t1

0x5945,	// (0x00036350) list_medium_line_plain_t3_t2

0x5953,	// (0x0003635e) list_medium_line_plain_t3_t3

0x0002,

0xfd0b,	// (0x00040716) list_medium_line_plain_t3_t

0x4fd0,	// (0x000359db) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x2_t2_g2_g1

0x4fe8,	// (0x000359f3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4fe8,	// (0x000359f3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0003fc84) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0003fc84) list_medium_line_x2_t2_g2_g

0x51a1,	// (0x00035bac) list_medium_line_x2_t2_g2_t1_ParamLimits

0x51a1,	// (0x00035bac) list_medium_line_x2_t2_g2_t1

0x501d,	// (0x00035a28) list_medium_line_x2_t2_g2_t2_ParamLimits

0x501d,	// (0x00035a28) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd12,	// (0x0004071d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd12,	// (0x0004071d) list_medium_line_x2_t2_g2_t

0x4fd0,	// (0x000359db) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x2_t4_g2_g1

0x5961,	// (0x0003636c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5961,	// (0x0003636c) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd17,	// (0x00040722) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd17,	// (0x00040722) list_medium_line_x2_t4_g2_g

0x5973,	// (0x0003637e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5973,	// (0x0003637e) list_medium_line_x2_t4_g2_t1

0x598d,	// (0x00036398) list_medium_line_x2_t4_g2_t2_ParamLimits

0x598d,	// (0x00036398) list_medium_line_x2_t4_g2_t2

0x59a3,	// (0x000363ae) list_medium_line_x2_t4_g2_t3_ParamLimits

0x59a3,	// (0x000363ae) list_medium_line_x2_t4_g2_t3

0x501d,	// (0x00035a28) list_medium_line_x2_t4_g2_t4_ParamLimits

0x501d,	// (0x00035a28) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1c,	// (0x00040727) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1c,	// (0x00040727) list_medium_line_x2_t4_g2_t

0x59b8,	// (0x000363c3) list_medium_line_t3_right_iconx2_g1

0x583c,	// (0x00036247) list_medium_line_t3_right_iconx2_g2

0x59c0,	// (0x000363cb) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd25,	// (0x00040730) list_medium_line_t3_right_iconx2_g

0x59ca,	// (0x000363d5) list_medium_line_t3_right_iconx2_t1

0x59da,	// (0x000363e5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2c,	// (0x00040737) list_medium_line_t3_right_iconx2_t

0x4fd0,	// (0x000359db) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x3_t4_g4_g1

0x4fdc,	// (0x000359e7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4fdc,	// (0x000359e7) list_medium_line_x3_t4_g4_g2

0x5084,	// (0x00035a8f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5084,	// (0x00035a8f) list_medium_line_x3_t4_g4_g3

0x59e8,	// (0x000363f3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x59e8,	// (0x000363f3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd31,	// (0x0004073c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd31,	// (0x0004073c) list_medium_line_x3_t4_g4_g

0x59f4,	// (0x000363ff) list_medium_line_x3_t4_g4_t1_ParamLimits

0x59f4,	// (0x000363ff) list_medium_line_x3_t4_g4_t1

0x5a0b,	// (0x00036416) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5a0b,	// (0x00036416) list_medium_line_x3_t4_g4_t2

0x5a20,	// (0x0003642b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5a20,	// (0x0003642b) list_medium_line_x3_t4_g4_t3

0x5a35,	// (0x00036440) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5a35,	// (0x00036440) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3a,	// (0x00040745) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3a,	// (0x00040745) list_medium_line_x3_t4_g4_t

0x5a52,	// (0x0003645d) list_single_dyc_row_text_pane_t1_ParamLimits

0x5a52,	// (0x0003645d) list_single_dyc_row_text_pane_t1

0x5a8f,	// (0x0003649a) list_single_dyc_row_text_pane_t2_ParamLimits

0x5a8f,	// (0x0003649a) list_single_dyc_row_text_pane_t2

0x5ae9,	// (0x000364f4) list_single_dyc_row_text_pane_t3_ParamLimits

0x5ae9,	// (0x000364f4) list_single_dyc_row_text_pane_t3

0x0002,

0xfd43,	// (0x0004074e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd43,	// (0x0004074e) list_single_dyc_row_text_pane_t

0x5afb,	// (0x00036506) list_single_dyc_row_pane_g1_ParamLimits

0x5afb,	// (0x00036506) list_single_dyc_row_pane_g1

0x5b07,	// (0x00036512) list_single_dyc_row_pane_g2_ParamLimits

0x5b07,	// (0x00036512) list_single_dyc_row_pane_g2

0x5b13,	// (0x0003651e) list_single_dyc_row_pane_g3_ParamLimits

0x5b13,	// (0x0003651e) list_single_dyc_row_pane_g3

0x5b1f,	// (0x0003652a) list_single_dyc_row_pane_g4_ParamLimits

0x5b1f,	// (0x0003652a) list_single_dyc_row_pane_g4

0x0003,

0xfd4a,	// (0x00040755) list_single_dyc_row_pane_g_ParamLimits

0xfd4a,	// (0x00040755) list_single_dyc_row_pane_g

0x5b2b,	// (0x00036536) list_single_dyc_row_text_pane_ParamLimits

0x5b2b,	// (0x00036536) list_single_dyc_row_text_pane

0x612a,	// (0x00036b35) bg_sp_fs_scroll_pane

0x3623,	// (0x0003402e) thumb_sp_fs_scroll_pane

0x5469,	// (0x00035e74) list_medium_line_g1_ParamLimits

0x5469,	// (0x00035e74) list_medium_line_g1

0x5b4a,	// (0x00036555) list_medium_line_t1_ParamLimits

0x5b4a,	// (0x00036555) list_medium_line_t1

0x4fd0,	// (0x000359db) list_medium_line_x2_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x2_g1

0x4fdc,	// (0x000359e7) list_medium_line_x2_g2_ParamLimits

0x4fdc,	// (0x000359e7) list_medium_line_x2_g2

0x0001,

0xfd53,	// (0x0004075e) list_medium_line_x2_g_ParamLimits

0xfd53,	// (0x0004075e) list_medium_line_x2_g

0x5b5f,	// (0x0003656a) list_medium_line_x2_t1_ParamLimits

0x5b5f,	// (0x0003656a) list_medium_line_x2_t1

0x4fd0,	// (0x000359db) list_medium_line_x3_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x3_g1

0x4fdc,	// (0x000359e7) list_medium_line_x3_g2_ParamLimits

0x4fdc,	// (0x000359e7) list_medium_line_x3_g2

0x0001,

0xfd53,	// (0x0004075e) list_medium_line_x3_g_ParamLimits

0xfd53,	// (0x0004075e) list_medium_line_x3_g

0x5b5f,	// (0x0003656a) list_medium_line_x3_t1_ParamLimits

0x5b5f,	// (0x0003656a) list_medium_line_x3_t1

0x3657,	// (0x00034062) thumb_sp_fs_scroll_pane_g1

0x3660,	// (0x0003406b) thumb_sp_fs_scroll_pane_g2

0x3669,	// (0x00034074) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd58,	// (0x00040763) thumb_sp_fs_scroll_pane_g

0x3657,	// (0x00034062) bg_sp_fs_scroll_pane_g1

0x3660,	// (0x0003406b) bg_sp_fs_scroll_pane_g2

0x3669,	// (0x00034074) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd58,	// (0x00040763) bg_sp_fs_scroll_pane_g

0x4fd0,	// (0x000359db) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4fd0,	// (0x000359db) list_medium_line_x2_t3_g4_g1

0x5078,	// (0x00035a83) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5078,	// (0x00035a83) list_medium_line_x2_t3_g4_g2

0x4fdc,	// (0x000359e7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4fdc,	// (0x000359e7) list_medium_line_x2_t3_g4_g3

0x4fe8,	// (0x000359f3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4fe8,	// (0x000359f3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0003fd00) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0003fd00) list_medium_line_x2_t3_g4_g

0x5b75,	// (0x00036580) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5b75,	// (0x00036580) list_medium_line_x2_t3_g4_t1

0x5b8b,	// (0x00036596) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5b8b,	// (0x00036596) list_medium_line_x2_t3_g4_t2

0x501d,	// (0x00035a28) list_medium_line_x2_t3_g4_t3_ParamLimits

0x501d,	// (0x00035a28) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5f,	// (0x0004076a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5f,	// (0x0004076a) list_medium_line_x2_t3_g4_t

0x5469,	// (0x00035e74) list_medium_line_g2_g1_ParamLimits

0x5469,	// (0x00035e74) list_medium_line_g2_g1

0x5475,	// (0x00035e80) list_medium_line_g2_g2_ParamLimits

0x5475,	// (0x00035e80) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00040439) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00040439) list_medium_line_g2_g

0x5ba4,	// (0x000365af) list_medium_line_g2_t1_ParamLimits

0x5ba4,	// (0x000365af) list_medium_line_g2_t1

0x5469,	// (0x00035e74) list_medium_line_t3_g2_g1_ParamLimits

0x5469,	// (0x00035e74) list_medium_line_t3_g2_g1

0x5475,	// (0x00035e80) list_medium_line_t3_g2_g2_ParamLimits

0x5475,	// (0x00035e80) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00040439) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00040439) list_medium_line_t3_g2_g

0x5bb9,	// (0x000365c4) list_medium_line_t3_g2_t1_ParamLimits

0x5bb9,	// (0x000365c4) list_medium_line_t3_g2_t1

0x5bd0,	// (0x000365db) list_medium_line_t3_g2_t2_ParamLimits

0x5bd0,	// (0x000365db) list_medium_line_t3_g2_t2

0x5be5,	// (0x000365f0) list_medium_line_t3_g2_t3_ParamLimits

0x5be5,	// (0x000365f0) list_medium_line_t3_g2_t3

0x0002,

0xfd66,	// (0x00040771) list_medium_line_t3_g2_t_ParamLimits

0xfd66,	// (0x00040771) list_medium_line_t3_g2_t

0x583c,	// (0x00036247) list_medium_line_right_icon_g1

0x5bfe,	// (0x00036609) list_medium_line_right_icon_t1

0x5469,	// (0x00035e74) list_medium_line_t2_g1_ParamLimits

0x5469,	// (0x00035e74) list_medium_line_t2_g1

0x5c0c,	// (0x00036617) list_medium_line_t2_t1_ParamLimits

0x5c0c,	// (0x00036617) list_medium_line_t2_t1

0x5c26,	// (0x00036631) list_medium_line_t2_t2_ParamLimits

0x5c26,	// (0x00036631) list_medium_line_t2_t2

0x0001,

0xfd6d,	// (0x00040778) list_medium_line_t2_t_ParamLimits

0xfd6d,	// (0x00040778) list_medium_line_t2_t

0x5469,	// (0x00035e74) list_medium_line_t3_g1_ParamLimits

0x5469,	// (0x00035e74) list_medium_line_t3_g1

0x5c3b,	// (0x00036646) list_medium_line_t3_t1_ParamLimits

0x5c3b,	// (0x00036646) list_medium_line_t3_t1

0x5c55,	// (0x00036660) list_medium_line_t3_t2_ParamLimits

0x5c55,	// (0x00036660) list_medium_line_t3_t2

0x5c6b,	// (0x00036676) list_medium_line_t3_t3_ParamLimits

0x5c6b,	// (0x00036676) list_medium_line_t3_t3

0x0002,

0xfd72,	// (0x0004077d) list_medium_line_t3_t_ParamLimits

0xfd72,	// (0x0004077d) list_medium_line_t3_t

0x5469,	// (0x00035e74) list_medium_line_g3_g1_ParamLimits

0x5469,	// (0x00035e74) list_medium_line_g3_g1

0x5c80,	// (0x0003668b) list_medium_line_g3_g2_ParamLimits

0x5c80,	// (0x0003668b) list_medium_line_g3_g2

0x5475,	// (0x00035e80) list_medium_line_g3_g3_ParamLimits

0x5475,	// (0x00035e80) list_medium_line_g3_g3

0x0002,

0xfd79,	// (0x00040784) list_medium_line_g3_g_ParamLimits

0xfd79,	// (0x00040784) list_medium_line_g3_g

0x5c8c,	// (0x00036697) list_medium_line_g3_t1_ParamLimits

0x5c8c,	// (0x00036697) list_medium_line_g3_t1

0x5469,	// (0x00035e74) list_medium_line_t2_g3_g1_ParamLimits

0x5469,	// (0x00035e74) list_medium_line_t2_g3_g1

0x5c80,	// (0x0003668b) list_medium_line_t2_g3_g2_ParamLimits

0x5c80,	// (0x0003668b) list_medium_line_t2_g3_g2

0x5475,	// (0x00035e80) list_medium_line_t2_g3_g3_ParamLimits

0x5475,	// (0x00035e80) list_medium_line_t2_g3_g3

0x0002,

0xfd79,	// (0x00040784) list_medium_line_t2_g3_g_ParamLimits

0xfd79,	// (0x00040784) list_medium_line_t2_g3_g

0x5ca1,	// (0x000366ac) list_medium_line_t2_g3_t1_ParamLimits

0x5ca1,	// (0x000366ac) list_medium_line_t2_g3_t1

0x5cb8,	// (0x000366c3) list_medium_line_t2_g3_t2_ParamLimits

0x5cb8,	// (0x000366c3) list_medium_line_t2_g3_t2

0x0001,

0xfd80,	// (0x0004078b) list_medium_line_t2_g3_t_ParamLimits

0xfd80,	// (0x0004078b) list_medium_line_t2_g3_t

0x5469,	// (0x00035e74) list_medium_line_t3_g3_g1_ParamLimits

0x5469,	// (0x00035e74) list_medium_line_t3_g3_g1

0x5c80,	// (0x0003668b) list_medium_line_t3_g3_g2_ParamLimits

0x5c80,	// (0x0003668b) list_medium_line_t3_g3_g2

0x5475,	// (0x00035e80) list_medium_line_t3_g3_g3_ParamLimits

0x5475,	// (0x00035e80) list_medium_line_t3_g3_g3

0x0002,

0xfd79,	// (0x00040784) list_medium_line_t3_g3_g_ParamLimits

0xfd79,	// (0x00040784) list_medium_line_t3_g3_g

0x5ccd,	// (0x000366d8) list_medium_line_t3_g3_t1_ParamLimits

0x5ccd,	// (0x000366d8) list_medium_line_t3_g3_t1

0x5ce1,	// (0x000366ec) list_medium_line_t3_g3_t2_ParamLimits

0x5ce1,	// (0x000366ec) list_medium_line_t3_g3_t2

0x5cf3,	// (0x000366fe) list_medium_line_t3_g3_t3_ParamLimits

0x5cf3,	// (0x000366fe) list_medium_line_t3_g3_t3

0x0002,

0xfd85,	// (0x00040790) list_medium_line_t3_g3_t_ParamLimits

0xfd85,	// (0x00040790) list_medium_line_t3_g3_t

0x59b8,	// (0x000363c3) list_medium_line_right_iconx2_g1

0x583c,	// (0x00036247) list_medium_line_right_iconx2_g2

0x0001,

0xfd8c,	// (0x00040797) list_medium_line_right_iconx2_g

0x5d07,	// (0x00036712) list_medium_line_right_iconx2_t1

0x59b8,	// (0x000363c3) list_medium_line_t2_right_iconx2_g1

0x583c,	// (0x00036247) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8c,	// (0x00040797) list_medium_line_t2_right_iconx2_g

0x5d15,	// (0x00036720) list_medium_line_t2_right_iconx2_t1

0x5d25,	// (0x00036730) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd91,	// (0x0004079c) list_medium_line_t2_right_iconx2_t

0x5d33,	// (0x0003673e) list_medium_line_x4_t4_t1

0x5d41,	// (0x0003674c) list_medium_line_x4_t4_t2

0x5d51,	// (0x0003675c) list_medium_line_x4_t4_t3

0x5d61,	// (0x0003676c) list_medium_line_x4_t4_t4

0x0003,

0xfd96,	// (0x000407a1) list_medium_line_x4_t4_t

0xcd01,	// (0x0003d70c) tport_appsw_pane_ParamLimits

0xcd01,	// (0x0003d70c) tport_appsw_pane

0xcd0f,	// (0x0003d71a) tport_contact_pane_ParamLimits

0xcd0f,	// (0x0003d71a) tport_contact_pane

0xcd1d,	// (0x0003d728) tport_listscroll_pane_ParamLimits

0xcd1d,	// (0x0003d728) tport_listscroll_pane

0xcd2b,	// (0x0003d736) cell_tport_appsw_pane_ParamLimits

0xcd2b,	// (0x0003d736) cell_tport_appsw_pane

0x15b5,	// (0x00031fc0) tport_appsw_pane_g1_ParamLimits

0x15b5,	// (0x00031fc0) tport_appsw_pane_g1

0x36d2,	// (0x000340dd) tport_contact_pane_g1

0x36db,	// (0x000340e6) tport_contact_pane_t1

0x36e9,	// (0x000340f4) tport_contact_pane_t2

0x0001,

0xfd9f,	// (0x000407aa) tport_contact_pane_t

0x36f7,	// (0x00034102) list_tport_pane

0x3700,	// (0x0003410b) scroll_pane_cp_030

0xcd56,	// (0x0003d761) cell_tport_appsw_pane_g1

0x3719,	// (0x00034124) cell_tport_appsw_pane_t1

0x612a,	// (0x00036b35) grid_highlight_pane_cp019

0xcd66,	// (0x0003d771) list_tport_double_graphic_pane_ParamLimits

0xcd66,	// (0x0003d771) list_tport_double_graphic_pane

0xf0c9,	// (0x0003fad4) list_highlight_pane_cp023_ParamLimits

0xf0c9,	// (0x0003fad4) list_highlight_pane_cp023

0xcd77,	// (0x0003d782) list_tport_double_graphic_pane_g1_ParamLimits

0xcd77,	// (0x0003d782) list_tport_double_graphic_pane_g1

0xcd84,	// (0x0003d78f) list_tport_double_graphic_pane_t1_ParamLimits

0xcd84,	// (0x0003d78f) list_tport_double_graphic_pane_t1

0xcd99,	// (0x0003d7a4) list_tport_double_graphic_pane_t2_ParamLimits

0xcd99,	// (0x0003d7a4) list_tport_double_graphic_pane_t2

0x0001,

0xfdab,	// (0x000407b6) list_tport_double_graphic_pane_t_ParamLimits

0xfdab,	// (0x000407b6) list_tport_double_graphic_pane_t

0x612a,	// (0x00036b35) main_cale_note_pane

0xb2a7,	// (0x0003bcb2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb2a7,	// (0x0003bcb2) cell_vitu2_function_top_wide_pane_cp01

0xc8ff,	// (0x0003d30a) wait_bar_pane_cp05_ParamLimits

0x612a,	// (0x00036b35) listscroll_cmail_pane

0x372f,	// (0x0003413a) list_cmail_pane

0xcdb5,	// (0x0003d7c0) list_cmail_body_pane

0xcdca,	// (0x0003d7d5) list_single_cmail_header_caption_pane

0xcde4,	// (0x0003d7ef) list_single_cmail_header_detail_pane_ParamLimits

0xcde4,	// (0x0003d7ef) list_single_cmail_header_detail_pane

0xce13,	// (0x0003d81e) list_single_cmail_header_caption_pane_t1

0x5d71,	// (0x0003677c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5d71,	// (0x0003677c) list_single_cmail_header_detail_pane_g1

0x5d89,	// (0x00036794) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5d89,	// (0x00036794) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb0,	// (0x000407bb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb0,	// (0x000407bb) list_single_cmail_header_detail_pane_g

0x5d95,	// (0x000367a0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5d95,	// (0x000367a0) list_single_cmail_header_detail_pane_t1

0x5df9,	// (0x00036804) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5df9,	// (0x00036804) list_single_cmail_header_editor_pane_bg

0x2fc2,	// (0x000339cd) list_cmail_body_pane_g1

0x37b8,	// (0x000341c3) list_cmail_body_pane_t1

0x205b,	// (0x00032a66) list_single_cmail_header_editor_pane_bg_g1

0xe396,	// (0x0003eda1) list_single_cmail_header_editor_pane_bg_g1_copy1

0x206b,	// (0x00032a76) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2063,	// (0x00032a6e) list_single_cmail_header_editor_pane_bg_g1_copy3

0x22ee,	// (0x00032cf9) list_single_cmail_header_editor_pane_bg_g1_copy4

0x208b,	// (0x00032a96) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x207b,	// (0x00032a86) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2083,	// (0x00032a8e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe376,	// (0x0003ed81) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xce23,	// (0x0003d82e) calenote_gesture_pane_ParamLimits

0xce23,	// (0x0003d82e) calenote_gesture_pane

0xce3d,	// (0x0003d848) calenote_window_pane_ParamLimits

0xce3d,	// (0x0003d848) calenote_window_pane

0x37c6,	// (0x000341d1) popup_note_window_cp01

0xce55,	// (0x0003d860) calenote_swipe_1_pane_ParamLimits

0xce55,	// (0x0003d860) calenote_swipe_1_pane

0xcc55,	// (0x0003d660) calenote_swipe_2_pane_ParamLimits

0xcc55,	// (0x0003d660) calenote_swipe_2_pane

0x335d,	// (0x00033d68) calenote_swipe_1_pane_g1_ParamLimits

0x335d,	// (0x00033d68) calenote_swipe_1_pane_g1

0x336a,	// (0x00033d75) calenote_swipe_1_pane_g2_ParamLimits

0x336a,	// (0x00033d75) calenote_swipe_1_pane_g2

0x0001,

0xfcdf,	// (0x000406ea) calenote_swipe_1_pane_g_ParamLimits

0xfcdf,	// (0x000406ea) calenote_swipe_1_pane_g

0x37d8,	// (0x000341e3) calenote_swipe_1_pane_t1_ParamLimits

0x37d8,	// (0x000341e3) calenote_swipe_1_pane_t1

0x335d,	// (0x00033d68) calenote_swipe_2_pane_g1_ParamLimits

0x335d,	// (0x00033d68) calenote_swipe_2_pane_g1

0x37f7,	// (0x00034202) calenote_swipe_2_pane_g2_ParamLimits

0x37f7,	// (0x00034202) calenote_swipe_2_pane_g2

0x0001,

0xfdbc,	// (0x000407c7) calenote_swipe_2_pane_g_ParamLimits

0xfdbc,	// (0x000407c7) calenote_swipe_2_pane_g

0x3803,	// (0x0003420e) calenote_swipe_2_pane_t1_ParamLimits

0x3803,	// (0x0003420e) calenote_swipe_2_pane_t1

0x612a,	// (0x00036b35) main_mup_navstr_pane

0xa091,	// (0x0003aa9c) main_mup3_pane_t7_ParamLimits

0xa091,	// (0x0003aa9c) main_mup3_pane_t7

0xaa60,	// (0x0003b46b) main_mp4_pane_g6_ParamLimits

0xaa60,	// (0x0003b46b) main_mp4_pane_g6

0xadc2,	// (0x0003b7cd) main_image3_pane_t4_ParamLimits

0xadc2,	// (0x0003b7cd) main_image3_pane_t4

0xce68,	// (0x0003d873) popup_navstr_preview_pane_ParamLimits

0xce68,	// (0x0003d873) popup_navstr_preview_pane

0xce74,	// (0x0003d87f) scroll_navstr_pane_ParamLimits

0xce74,	// (0x0003d87f) scroll_navstr_pane

0x612a,	// (0x00036b35) bg_popup_preview_window_pane_cp04

0x382a,	// (0x00034235) popup_navstr_preview_pane_t1

0xce80,	// (0x0003d88b) scroll_navstr_pane_g1_ParamLimits

0xce80,	// (0x0003d88b) scroll_navstr_pane_g1

0xce8d,	// (0x0003d898) scroll_navstr_pane_t1_ParamLimits

0xce8d,	// (0x0003d898) scroll_navstr_pane_t1

0x37cf,	// (0x000341da) bg_button_pane_cp014

0x37cf,	// (0x000341da) bg_button_pane_cp030

0x579c,	// (0x000361a7) list_double_fisheye_pane_g4_ParamLimits

0x579c,	// (0x000361a7) list_double_fisheye_pane_g4

0x57a8,	// (0x000361b3) list_double_fisheye_pane_g5_ParamLimits

0x57a8,	// (0x000361b3) list_double_fisheye_pane_g5

0x3737,	// (0x00034142) sp_fs_scroll_pane_cp03

0x34a0,	// (0x00033eab) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x34ac,	// (0x00033eb7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfc,	// (0x00040707) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x34b8,	// (0x00033ec3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcdab,	// (0x0003d7b6) sp_fs_scroll_pane_cp02

0xe09a,	// (0x0003eaa5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe09a,	// (0x0003eaa5) popup_sp_fs_calendar_preview_list_single_pane

0x612a,	// (0x00036b35) main_cam6_pano_pane

0xf0c9,	// (0x0003fad4) main_mup3_pane_ParamLimits

0x612a,	// (0x00036b35) main_phacti_pane

0xc7d0,	// (0x0003d1db) bg_button_pane_cp11

0xc7e8,	// (0x0003d1f3) main_mobtv_info_pane_g2_ParamLimits

0xc7e8,	// (0x0003d1f3) main_mobtv_info_pane_g2

0x0001,

0xfc5c,	// (0x00040667) main_mobtv_info_pane_g_ParamLimits

0xfc5c,	// (0x00040667) main_mobtv_info_pane_g

0xc99c,	// (0x0003d3a7) sc_clock_pane_t5_ParamLimits

0xc99c,	// (0x0003d3a7) sc_clock_pane_t5

0xca41,	// (0x0003d44c) main_radioblah_pane_g1_ParamLimits

0x3252,	// (0x00033c5d) main_radioblah_pane_t3_ParamLimits

0x3252,	// (0x00033c5d) main_radioblah_pane_t3

0x326a,	// (0x00033c75) main_radioblah_pane_t4_ParamLimits

0x326a,	// (0x00033c75) main_radioblah_pane_t4

0xca5f,	// (0x0003d46a) main_radioblah_text_pane_ParamLimits

0xca5f,	// (0x0003d46a) main_radioblah_text_pane

0xca6c,	// (0x0003d477) main_radioblah_info_pane_g1_ParamLimits

0xcb05,	// (0x0003d510) main_radioblah_info_pane_t4_ParamLimits

0xcb05,	// (0x0003d510) main_radioblah_info_pane_t4

0xf0c9,	// (0x0003fad4) main_sp_fs_calendar_pane

0xce9f,	// (0x0003d8aa) main_phacti_pane_g1

0xcea7,	// (0x0003d8b2) phacti_note_pane_ParamLimits

0xcea7,	// (0x0003d8b2) phacti_note_pane

0x3841,	// (0x0003424c) phacti_term_pane_ParamLimits

0x3841,	// (0x0003424c) phacti_term_pane

0x3856,	// (0x00034261) phacti_note_pane_t1_ParamLimits

0x3856,	// (0x00034261) phacti_note_pane_t1

0x5e0b,	// (0x00036816) phacti_term_pane_g1

0x5e13,	// (0x0003681e) phacti_term_pane_t1_ParamLimits

0x5e13,	// (0x0003681e) phacti_term_pane_t1

0x389f,	// (0x000342aa) popup_sp_fs_calendar_preview_list_single_pane_g1

0x38a7,	// (0x000342b2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc6,	// (0x000407d1) popup_sp_fs_calendar_preview_list_single_pane_g

0x38af,	// (0x000342ba) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x38af,	// (0x000342ba) popup_sp_fs_calendar_preview_list_single_pane_t1

0x38c5,	// (0x000342d0) aid_popup_sp_fs_bg_corner_pane

0x12ac,	// (0x00031cb7) popup_sp_fs_calendar_preview_bg_pane_g1

0x612a,	// (0x00036b35) popup_sp_fs_calendar_preview_bg_pane

0x38cd,	// (0x000342d8) popup_sp_fs_calendar_preview_list_pane

0xf0c9,	// (0x0003fad4) bg_main_sp_fs_cale_pane_ParamLimits

0xf0c9,	// (0x0003fad4) bg_main_sp_fs_cale_pane

0x5e3d,	// (0x00036848) listscroll_cale_mrui_pane_ParamLimits

0x5e3d,	// (0x00036848) listscroll_cale_mrui_pane

0x5e51,	// (0x0003685c) listscroll_sp_fs_schedule_track_pane

0x5e5a,	// (0x00036865) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5e5a,	// (0x00036865) main_sp_fs_ctrlbar_pane_cp01

0x390c,	// (0x00034317) main_sp_fs_ribbon_pane

0x3914,	// (0x0003431f) popup_sp_fs_cale_preview_window

0xcee6,	// (0x0003d8f1) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcee6,	// (0x0003d8f1) list_single_sp_fs_schedule_track_pane

0x63d9,	// (0x00036de4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x63d9,	// (0x00036de4) bg_sp_fs_highlight_list_pane_cp03

0xcef8,	// (0x0003d903) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcef8,	// (0x0003d903) list_single_sp_fs_schedule_track_pane_g1

0xcf04,	// (0x0003d90f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcf04,	// (0x0003d90f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcb,	// (0x000407d6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcb,	// (0x000407d6) list_single_sp_fs_schedule_track_pane_g

0xcf10,	// (0x0003d91b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcf10,	// (0x0003d91b) list_single_sp_fs_schedule_track_pane_t1

0xcf2e,	// (0x0003d939) sp_fs_schedule_track_pane_ParamLimits

0xcf2e,	// (0x0003d939) sp_fs_schedule_track_pane

0x3926,	// (0x00034331) sp_fs_schedule_track_pane_g1

0x392e,	// (0x00034339) sp_fs_schedule_track_pane_g2

0x3936,	// (0x00034341) sp_fs_schedule_track_pane_g3

0x393e,	// (0x00034349) sp_fs_schedule_track_pane_g4

0x3946,	// (0x00034351) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd0,	// (0x000407db) sp_fs_schedule_track_pane_g

0x205b,	// (0x00032a66) bg_sp_fs_schedule_viewer_highlight_g1

0xe396,	// (0x0003eda1) bg_sp_fs_schedule_viewer_highlight_g2

0x2063,	// (0x00032a6e) bg_sp_fs_schedule_viewer_highlight_g3

0x206b,	// (0x00032a76) bg_sp_fs_schedule_viewer_highlight_g4

0x22ee,	// (0x00032cf9) bg_sp_fs_schedule_viewer_highlight_g5

0x207b,	// (0x00032a86) bg_sp_fs_schedule_viewer_highlight_g6

0x2083,	// (0x00032a8e) bg_sp_fs_schedule_viewer_highlight_g7

0x208b,	// (0x00032a96) bg_sp_fs_schedule_viewer_highlight_g8

0xe376,	// (0x0003ed81) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddb,	// (0x000407e6) bg_sp_fs_schedule_viewer_highlight_g

0x612a,	// (0x00036b35) bg_main_sp_fs_ribbon_pane

0xcf40,	// (0x0003d94b) main_sp_fs_ribbon_pane_g1

0x394e,	// (0x00034359) main_sp_fs_ribbon_pane_t1

0xcf49,	// (0x0003d954) main_sp_fs_ribbon_pane_t2

0x395d,	// (0x00034368) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdee,	// (0x000407f9) main_sp_fs_ribbon_pane_t

0x396c,	// (0x00034377) main_sp_fs_ribbon_scheduler_pane

0x3974,	// (0x0003437f) bg_main_sp_fs_ribbon_pane_g1

0x397d,	// (0x00034388) bg_main_sp_fs_ribbon_pane_g2

0x3986,	// (0x00034391) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf5,	// (0x00040800) bg_main_sp_fs_ribbon_pane_g

0x398e,	// (0x00034399) main_sp_fs_ribbon_scheduler_pane_g1

0x3997,	// (0x000343a2) main_sp_fs_ribbon_scheduler_pane_g2

0x39a0,	// (0x000343ab) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfc,	// (0x00040807) main_sp_fs_ribbon_scheduler_pane_g

0x39a9,	// (0x000343b4) list_cale_mrui_pane

0xcf58,	// (0x0003d963) sp_fs_scroll_pane_cp07_ParamLimits

0xcf58,	// (0x0003d963) sp_fs_scroll_pane_cp07

0xcf6e,	// (0x0003d979) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcf6e,	// (0x0003d979) bg_sp_fs_schedule_viewer_highlight

0x39b2,	// (0x000343bd) list_single_sp_fs_schedule_track_pane_cp01

0x39ba,	// (0x000343c5) list_sp_fs_schedule_track_pane

0x39c2,	// (0x000343cd) sp_fs_scroll_pane_cp06_ParamLimits

0x39c2,	// (0x000343cd) sp_fs_scroll_pane_cp06

0x12ac,	// (0x00031cb7) bgmain_sp_fs_calendar_pane_g1

0x5e6b,	// (0x00036876) list_single_cale_mrui_pane_ParamLimits

0x5e6b,	// (0x00036876) list_single_cale_mrui_pane

0x5e8d,	// (0x00036898) list_single_cale_mrui_row_pane_ParamLimits

0x5e8d,	// (0x00036898) list_single_cale_mrui_row_pane

0x5e9a,	// (0x000368a5) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5e9a,	// (0x000368a5) list_single_cale_mrui_row_pane_g1

0x5ed2,	// (0x000368dd) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5ed2,	// (0x000368dd) list_single_cale_mrui_row_pane_t1

0x5ee4,	// (0x000368ef) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5ee4,	// (0x000368ef) list_single_cale_mrui_row_pane_t2

0x5f4a,	// (0x00036955) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5f4a,	// (0x00036955) list_single_cale_mrui_row_pane_t3

0x5f79,	// (0x00036984) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5f79,	// (0x00036984) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x00040813) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x00040813) list_single_cale_mrui_row_pane_t

0x5fa8,	// (0x000369b3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5fa8,	// (0x000369b3) list_single_cmail_header_editor_pane_bg_cp01

0x5fcc,	// (0x000369d7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5fcc,	// (0x000369d7) list_single_cmail_header_editor_pane_bg_cp02

0xcf7b,	// (0x0003d986) main_radioblah_text_pane_t1_ParamLimits

0xcf7b,	// (0x0003d986) main_radioblah_text_pane_t1

0x3a89,	// (0x00034494) cam6_indi_pane_cp01

0x3a91,	// (0x0003449c) cam6_mode_pane_cp01

0x3a99,	// (0x000344a4) cam6_pano_pane

0x3aa2,	// (0x000344ad) cam6_zoom_pane_cp01

0x3aac,	// (0x000344b7) cam6_pano_image_pane

0x3ab5,	// (0x000344c0) cam6_pano_pane_g1

0x2fc2,	// (0x000339cd) cam6_pano_pane_g2

0x3abe,	// (0x000344c9) cam6_pano_pane_g3

0x3ac7,	// (0x000344d2) cam6_pano_pane_g4

0x188c,	// (0x00032297) cam6_pano_pane_g5

0x3ad0,	// (0x000344db) cam6_pano_pane_g6

0x3ad8,	// (0x000344e3) cam6_pano_pane_g7

0x3ae0,	// (0x000344eb) cam6_pano_pane_g8

0x3ae9,	// (0x000344f4) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x0004081c) cam6_pano_pane_g

0x612a,	// (0x00036b35) main_browser_tag_pane

0x3822,	// (0x0003422d) grid_navstr_albumart_pane

0x3af4,	// (0x000344ff) cell_navstr_albumart_pane_ParamLimits

0x3af4,	// (0x000344ff) cell_navstr_albumart_pane

0x3b10,	// (0x0003451b) cell_navstr_albumart_pane_g1

0x0b90,	// (0x0003159b) cell_navstr_albumart_pane_g2

0x0ba0,	// (0x000315ab) cell_navstr_albumart_pane_g3

0x0b98,	// (0x000315a3) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x0004082f) cell_navstr_albumart_pane_g

0xcf96,	// (0x0003d9a1) bt_list_pane_ParamLimits

0xcf96,	// (0x0003d9a1) bt_list_pane

0xcfaf,	// (0x0003d9ba) bt_list_pane_t1

0xcfbe,	// (0x0003d9c9) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x00040838) bt_list_pane_t

0x612a,	// (0x00036b35) main_cale_prevew_pane

0xcfcd,	// (0x0003d9d8) popup_cale_preview_window_ParamLimits

0xcfcd,	// (0x0003d9d8) popup_cale_preview_window

0xf0c9,	// (0x0003fad4) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0c9,	// (0x0003fad4) bg_popup_preview_window_pane_cp05

0x3b18,	// (0x00034523) list_cale_preview_pane_ParamLimits

0x3b18,	// (0x00034523) list_cale_preview_pane

0xcfe8,	// (0x0003d9f3) list_double_cale_preview_pane_ParamLimits

0xcfe8,	// (0x0003d9f3) list_double_cale_preview_pane

0xcffc,	// (0x0003da07) list_single_cale_preview_pane_ParamLimits

0xcffc,	// (0x0003da07) list_single_cale_preview_pane

0xd014,	// (0x0003da1f) list_single_cale_preview_pane_g1

0xd01c,	// (0x0003da27) list_single_cale_preview_pane_t1_ParamLimits

0xd01c,	// (0x0003da27) list_single_cale_preview_pane_t1

0xd031,	// (0x0003da3c) list_double_cale_preview_pane_g1

0xd039,	// (0x0003da44) list_double_cale_preview_pane_t1_ParamLimits

0xd039,	// (0x0003da44) list_double_cale_preview_pane_t1

0xd04e,	// (0x0003da59) list_double_cale_preview_pane_t2_ParamLimits

0xd04e,	// (0x0003da59) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x0004083d) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x0004083d) list_double_cale_preview_pane_t

0x612a,	// (0x00036b35) main_ezdial_pane

0xf0c9,	// (0x0003fad4) main_sp_fs_email_pane_ParamLimits

0xcc6f,	// (0x0003d67a) cmail_ddmenu_btn01_pane_ParamLimits

0xcc6f,	// (0x0003d67a) cmail_ddmenu_btn01_pane

0xcc8c,	// (0x0003d697) cmail_ddmenu_btn02_pane_ParamLimits

0xcc8c,	// (0x0003d697) cmail_ddmenu_btn02_pane

0xccaa,	// (0x0003d6b5) cmail_ddmenu_btn03_pane_ParamLimits

0xccaa,	// (0x0003d6b5) cmail_ddmenu_btn03_pane

0x5862,	// (0x0003626d) main_sp_fs_ctrlbar_pane_ParamLimits

0x587e,	// (0x00036289) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcdb5,	// (0x0003d7c0) list_cmail_body_pane_ParamLimits

0x3746,	// (0x00034151) bg_button_pane_cp12

0x375b,	// (0x00034166) list_single_cmail_header_detail_pane_g3_ParamLimits

0x375b,	// (0x00034166) list_single_cmail_header_detail_pane_g3

0x5dd3,	// (0x000367de) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5dd3,	// (0x000367de) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb7,	// (0x000407c2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb7,	// (0x000407c2) list_single_cmail_header_detail_pane_t

0x5e28,	// (0x00036833) phacti_term_pane_t2_ParamLimits

0x5e28,	// (0x00036833) phacti_term_pane_t2

0x0001,

0xfdc1,	// (0x000407cc) phacti_term_pane_t_ParamLimits

0xfdc1,	// (0x000407cc) phacti_term_pane_t

0x3b24,	// (0x0003452f) aid_size_list_single_double

0xd066,	// (0x0003da71) popup_ezdial_listscroll_window

0xd086,	// (0x0003da91) popup_number_entry_window_cp01

0xe9e0,	// (0x0003f3eb) bg_popup_call_pane_cp09

0x3b30,	// (0x0003453b) ezdial_list_pane

0x3b38,	// (0x00034543) scroll_pane_cp23

0x108b,	// (0x00031a96) bg_button_pane_cp028_ParamLimits

0x108b,	// (0x00031a96) bg_button_pane_cp028

0xd094,	// (0x0003da9f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd094,	// (0x0003da9f) cmail_ddmenu_btn01_pane_g1

0xd0a4,	// (0x0003daaf) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd0a4,	// (0x0003daaf) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x00040842) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x00040842) cmail_ddmenu_btn01_pane_g

0x3b40,	// (0x0003454b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3b40,	// (0x0003454b) cmail_ddmenu_btn01_pane_t1

0x0d77,	// (0x00031782) bg_button_pane_cp029_ParamLimits

0x0d77,	// (0x00031782) bg_button_pane_cp029

0xd0a4,	// (0x0003daaf) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd0a4,	// (0x0003daaf) cmail_ddmenu_btn02_pane_g1

0xd0bc,	// (0x0003dac7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd0bc,	// (0x0003dac7) cmail_ddmenu_btn02_pane_t1

0x63d9,	// (0x00036de4) bg_button_pane_cp031_ParamLimits

0x63d9,	// (0x00036de4) bg_button_pane_cp031

0xd0a4,	// (0x0003daaf) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd0a4,	// (0x0003daaf) cmail_ddmenu_btn03_pane_g1

0xd0bc,	// (0x0003dac7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd0bc,	// (0x0003dac7) cmail_ddmenu_btn03_pane_t1

0xac6b,	// (0x0003b676) cell_dialer2_keypad_pane_t1_ParamLimits

0xac85,	// (0x0003b690) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xac85,	// (0x0003b690) cell_dialer2_keypad_pane_t1_copy1

0xc686,	// (0x0003d091) ncimui_group_button_pane

0xf0c9,	// (0x0003fad4) main_sp_fs_calendar_pane_ParamLimits

0xcdca,	// (0x0003d7d5) list_single_cmail_header_caption_pane_ParamLimits

0x38d5,	// (0x000342e0) aid_recal_txt_sm_pane

0x612a,	// (0x00036b35) mian_recal_day_pane

0x3914,	// (0x0003431f) popup_sp_fs_cale_preview_window_ParamLimits

0x612a,	// (0x00036b35) list_recal_day_pane

0x3b77,	// (0x00034582) list_single_recal_day_pane_ParamLimits

0x3b77,	// (0x00034582) list_single_recal_day_pane

0x3b89,	// (0x00034594) list_single_recal_day_pane_g1_ParamLimits

0x3b89,	// (0x00034594) list_single_recal_day_pane_g1

0x3b95,	// (0x000345a0) list_single_recal_day_pane_g2_ParamLimits

0x3b95,	// (0x000345a0) list_single_recal_day_pane_g2

0x3ba1,	// (0x000345ac) list_single_recal_day_pane_g3_ParamLimits

0x3ba1,	// (0x000345ac) list_single_recal_day_pane_g3

0xd0e0,	// (0x0003daeb) list_single_recal_day_pane_g4_ParamLimits

0xd0e0,	// (0x0003daeb) list_single_recal_day_pane_g4

0x3bad,	// (0x000345b8) list_single_recal_day_pane_g5_ParamLimits

0x3bad,	// (0x000345b8) list_single_recal_day_pane_g5

0x3bb9,	// (0x000345c4) list_single_recal_day_pane_g6_ParamLimits

0x3bb9,	// (0x000345c4) list_single_recal_day_pane_g6

0x0005,

0xfe46,	// (0x00040851) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x00040851) list_single_recal_day_pane_g

0x3bc5,	// (0x000345d0) list_single_recal_day_pane_t1

0x3bd3,	// (0x000345de) list_single_recal_day_pane_t2

0x0001,

0xfe53,	// (0x0004085e) list_single_recal_day_pane_t

0xd0ee,	// (0x0003daf9) ncimui_query_button_pane_ParamLimits

0xd0ee,	// (0x0003daf9) ncimui_query_button_pane

0xd0fe,	// (0x0003db09) ncimui_query_button_pane_t1_ParamLimits

0xd0fe,	// (0x0003db09) ncimui_query_button_pane_t1

0x3be1,	// (0x000345ec) ncimui_query_button_pane_t2_ParamLimits

0x3be1,	// (0x000345ec) ncimui_query_button_pane_t2

0x0001,

0xfe58,	// (0x00040863) ncimui_query_button_pane_t_ParamLimits

0xfe58,	// (0x00040863) ncimui_query_button_pane_t

0xd111,	// (0x0003db1c) query_button_pane_ParamLimits

0xd111,	// (0x0003db1c) query_button_pane

0x612a,	// (0x00036b35) bg_button_pane_cp0028

0x3bf4,	// (0x000345ff) query_button_pane_t1

0x90de,	// (0x00039ae9) main_tport_pane_ParamLimits

0xccd8,	// (0x0003d6e3) bg_popup_window_pane_cp01_ParamLimits

0xccd8,	// (0x0003d6e3) bg_popup_window_pane_cp01

0xcce5,	// (0x0003d6f0) heading_pane_cp08_ParamLimits

0xcce5,	// (0x0003d6f0) heading_pane_cp08

0xccf3,	// (0x0003d6fe) heading_pane_cp07_ParamLimits

0xccf3,	// (0x0003d6fe) heading_pane_cp07

0x3711,	// (0x0003411c) cell_tport_appsw_pane_g2

0x0002,

0xfda4,	// (0x000407af) cell_tport_appsw_pane_g

0x5200,	// (0x00035c0b) input_candi_list_open_g1

0xe531,	// (0x0003ef3c) list_cale_time_pane_g6_ParamLimits

0xe531,	// (0x0003ef3c) list_cale_time_pane_g6

0x9b4b,	// (0x0003a556) aid_size_touch_calib_1_ParamLimits

0x9b4b,	// (0x0003a556) aid_size_touch_calib_1

0x9b57,	// (0x0003a562) aid_size_touch_calib_2_ParamLimits

0x9b57,	// (0x0003a562) aid_size_touch_calib_2

0x9b65,	// (0x0003a570) aid_size_touch_calib_3_ParamLimits

0x9b65,	// (0x0003a570) aid_size_touch_calib_3

0x9b75,	// (0x0003a580) aid_size_touch_calib_4_ParamLimits

0x9b75,	// (0x0003a580) aid_size_touch_calib_4

0x9b83,	// (0x0003a58e) main_touch_calib_button_group_pane_ParamLimits

0x9b83,	// (0x0003a58e) main_touch_calib_button_group_pane

0x9b91,	// (0x0003a59c) main_touch_calib_pane_g1_ParamLimits

0x9b9d,	// (0x0003a5a8) main_touch_calib_pane_g2_ParamLimits

0x9ba9,	// (0x0003a5b4) main_touch_calib_pane_g3_ParamLimits

0x9bb5,	// (0x0003a5c0) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0004018f) main_touch_calib_pane_g_ParamLimits

0x9bc1,	// (0x0003a5cc) main_touch_calib_pane_t1_ParamLimits

0x9bd8,	// (0x0003a5e3) main_touch_calib_pane_t2_ParamLimits

0x9bef,	// (0x0003a5fa) main_touch_calib_pane_t3_ParamLimits

0x9c03,	// (0x0003a60e) main_touch_calib_pane_t4_ParamLimits

0x9c19,	// (0x0003a624) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x00040198) main_touch_calib_pane_t_ParamLimits

0x1656,	// (0x00032061) list_single_fp_cale_pane_g3_ParamLimits

0x1656,	// (0x00032061) list_single_fp_cale_pane_g3

0xf0c9,	// (0x0003fad4) bg_button_pane_cp012_ParamLimits

0xf0c9,	// (0x0003fad4) bg_vkb2_func_pane_cp03_ParamLimits

0xba06,	// (0x0003c411) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0c9,	// (0x0003fad4) bg_vkb2_func_pane_cp04_ParamLimits

0xc635,	// (0x0003d040) main_ncimui_button_group_pane_ParamLimits

0xc635,	// (0x0003d040) main_ncimui_button_group_pane

0xc674,	// (0x0003d07f) main_ncimui_pane_t3_ParamLimits

0xc674,	// (0x0003d07f) main_ncimui_pane_t3

0x3838,	// (0x00034243) phacti_button_group_pane

0x3b24,	// (0x0003452f) aid_size_list_single_double_ParamLimits

0xd066,	// (0x0003da71) popup_ezdial_listscroll_window_ParamLimits

0xd086,	// (0x0003da91) popup_number_entry_window_cp01_ParamLimits

0xd11e,	// (0x0003db29) phacti_button_pane_ParamLimits

0xd11e,	// (0x0003db29) phacti_button_pane

0x612a,	// (0x00036b35) bg_button_pane_cp14

0x3c02,	// (0x0003460d) phacti_button_pane_t1

0xd12f,	// (0x0003db3a) main_touch_calib_button_pane_ParamLimits

0xd12f,	// (0x0003db3a) main_touch_calib_button_pane

0xdf84,	// (0x0003e98f) bg_button_pane_cp18_ParamLimits

0xdf84,	// (0x0003e98f) bg_button_pane_cp18

0x3c10,	// (0x0003461b) main_touch_calib_button_pane_t1_ParamLimits

0x3c10,	// (0x0003461b) main_touch_calib_button_pane_t1

0x3c26,	// (0x00034631) main_touch_calib_button_pane_t2_ParamLimits

0x3c26,	// (0x00034631) main_touch_calib_button_pane_t2

0x0001,

0xfe5d,	// (0x00040868) main_touch_calib_button_pane_t_ParamLimits

0xfe5d,	// (0x00040868) main_touch_calib_button_pane_t

0x612a,	// (0x00036b35) cell_ncimui_button_pane

0x612a,	// (0x00036b35) bg_button_pane_cp032

0x3c44,	// (0x0003464f) cell_ncimui_button_pane_t1

0xace1,	// (0x0003b6ec) image3_infobar_pane_ParamLimits

0xace1,	// (0x0003b6ec) image3_infobar_pane

0xc9be,	// (0x0003d3c9) fs_bigclock_status_pane_ParamLimits

0xc9be,	// (0x0003d3c9) fs_bigclock_status_pane

0xc9cb,	// (0x0003d3d6) main_fs_bigclock_clock_pane_ParamLimits

0xc9cb,	// (0x0003d3d6) main_fs_bigclock_clock_pane

0xc9db,	// (0x0003d3e6) main_fs_bigclock_indi_pane_ParamLimits

0xc9db,	// (0x0003d3e6) main_fs_bigclock_indi_pane

0xca0d,	// (0x0003d418) main_fs_bigclock_swipe_pane_ParamLimits

0xca0d,	// (0x0003d418) main_fs_bigclock_swipe_pane

0x612a,	// (0x00036b35) main_fs_clock_dumped_data

0x30cf,	// (0x00033ada) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x30cf,	// (0x00033ada) list_single_fs_bigclock_indicator_pane_g1

0x30ef,	// (0x00033afa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x30ef,	// (0x00033afa) list_single_fs_bigclock_indicator_pane_g2

0x3109,	// (0x00033b14) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3109,	// (0x00033b14) list_single_fs_bigclock_indicator_pane_g3

0x3125,	// (0x00033b30) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3125,	// (0x00033b30) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc90,	// (0x0004069b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc90,	// (0x0004069b) list_single_fs_bigclock_indicator_pane_g

0x314b,	// (0x00033b56) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x314b,	// (0x00033b56) list_single_fs_bigclock_indicator_pane_t1

0x3173,	// (0x00033b7e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3173,	// (0x00033b7e) list_single_fs_bigclock_indicator_pane_t2

0x319b,	// (0x00033ba6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x319b,	// (0x00033ba6) list_single_fs_bigclock_indicator_pane_t3

0x31c5,	// (0x00033bd0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x31c5,	// (0x00033bd0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc9b,	// (0x000406a6) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc9b,	// (0x000406a6) list_single_fs_bigclock_indicator_pane_t

0x3c52,	// (0x0003465d) image3_infobar_fav_pane_ParamLimits

0x3c52,	// (0x0003465d) image3_infobar_fav_pane

0x3c62,	// (0x0003466d) image3_infobar_loc_pane_ParamLimits

0x3c62,	// (0x0003466d) image3_infobar_loc_pane

0x3c78,	// (0x00034683) image3_infobar_time_pane_ParamLimits

0x3c78,	// (0x00034683) image3_infobar_time_pane

0x12ac,	// (0x00031cb7) image3_infobar_time_pane_g1

0x3c88,	// (0x00034693) image3_infobar_time_pane_t1

0x12ac,	// (0x00031cb7) image3_infobar_loc_pane_g1

0x3c96,	// (0x000346a1) image3_infobar_loc_pane_g2

0x0001,

0xfe62,	// (0x0004086d) image3_infobar_loc_pane_g

0x3c9e,	// (0x000346a9) image3_infobar_loc_pane_t1

0x12ac,	// (0x00031cb7) image3_infobar_fav_pane_g1

0x3cac,	// (0x000346b7) image3_infobar_fav_pane_g2

0x0001,

0xfe67,	// (0x00040872) image3_infobar_fav_pane_g

0x3cb4,	// (0x000346bf) fs_bigclock_status_battery_pane

0x3cbd,	// (0x000346c8) fs_bigclock_status_signal_pane

0x3cc6,	// (0x000346d1) fs_bigclock_status_title_pane

0x3ccf,	// (0x000346da) fs_bigclock_status_signal_pane_g1

0x3cd8,	// (0x000346e3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6c,	// (0x00040877) fs_bigclock_status_signal_pane_g

0x3ce0,	// (0x000346eb) fs_bigclock_status_battery_pane_g1

0x3ce9,	// (0x000346f4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe71,	// (0x0004087c) fs_bigclock_status_battery_pane_g

0x3cf1,	// (0x000346fc) fs_bigclock_status_title_pane_t1

0x12ac,	// (0x00031cb7) main_fs_bigclock_clock_pane_g1

0x3cff,	// (0x0003470a) main_fs_bigclock_clock_pane_g2

0x3cff,	// (0x0003470a) main_fs_bigclock_clock_pane_g3

0x3cff,	// (0x0003470a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe76,	// (0x00040881) main_fs_bigclock_clock_pane_g

0x3d0b,	// (0x00034716) main_fs_bigclock_clock_pane_t1

0x3d19,	// (0x00034724) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7f,	// (0x0004088a) main_fs_bigclock_clock_pane_t

0x3d28,	// (0x00034733) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3d28,	// (0x00034733) list_single_fs_bigclock_indicator_pane

0xd141,	// (0x0003db4c) list_single_fs_bigclock_pane_ParamLimits

0xd141,	// (0x0003db4c) list_single_fs_bigclock_pane

0x3d42,	// (0x0003474d) main_fs_bigclock_indicator_pane_t1

0x3d51,	// (0x0003475c) list_single_fs_bigclock_pane_g1

0x3d59,	// (0x00034764) list_single_fs_bigclock_pane_t1

0x12ac,	// (0x00031cb7) main_fs_bigclock_swipe_pane_g1

0x3d97,	// (0x000347a2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe90,	// (0x0004089b) main_fs_bigclock_swipe_pane_g

0x3d9f,	// (0x000347aa) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3d9f,	// (0x000347aa) main_fs_bigclock_swipe_pane_t1

0x803e,	// (0x00038a49) call_type_pane_ParamLimits

0x612a,	// (0x00036b35) main_btmg_pane

0x5ec6,	// (0x000368d1) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5ec6,	// (0x000368d1) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe03,	// (0x0004080e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe03,	// (0x0004080e) list_single_cale_mrui_row_pane_g

0x3b5e,	// (0x00034569) list_recal_vselct_arw_lo_pane

0x3b66,	// (0x00034571) list_recal_vselct_arw_up_pane

0x3b6e,	// (0x00034579) list_recal_vselct_pane

0x3dbc,	// (0x000347c7) btmg_button_pane

0xd1a4,	// (0x0003dbaf) main_btmg_pane_g1

0x612a,	// (0x00036b35) bg_button_pane_cp044

0x3dc6,	// (0x000347d1) btmg_button_pane_t1

0x0d6f,	// (0x0003177a) aid_listscroll_gen

0xf0c9,	// (0x0003fad4) main_cntbar_detail_pane

0x3727,	// (0x00034132) list_cmail_folder_pane

0x3737,	// (0x00034142) sp_fs_scroll_pane_cp03_ParamLimits

0xf0e3,	// (0x0003faee) list_single_fs_dyc_pane_cp01_ParamLimits

0xf0e3,	// (0x0003faee) list_single_fs_dyc_pane_cp01

0x3dd4,	// (0x000347df) aid_size_cmail_indent

0x5fe8,	// (0x000369f3) list_single_dyc_row_pane_cp01

0xd1cc,	// (0x0003dbd7) cntbar_detail_list_pane_ParamLimits

0xd1cc,	// (0x0003dbd7) cntbar_detail_list_pane

0xd20c,	// (0x0003dc17) main_cntbar_detail_cont_pane_ParamLimits

0xd20c,	// (0x0003dc17) main_cntbar_detail_cont_pane

0x8032,	// (0x00038a3d) scroll_pane_cp032_ParamLimits

0x8032,	// (0x00038a3d) scroll_pane_cp032

0xd218,	// (0x0003dc23) cntbar_detail_list_event_pane_ParamLimits

0xd218,	// (0x0003dc23) cntbar_detail_list_event_pane

0xd1da,	// (0x0003dbe5) cntbar_detail_list_shct_pane

0xe3e4,	// (0x0003edef) aid_list_gen

0x3de6,	// (0x000347f1) aid_scroll

0x3def,	// (0x000347fa) aid_size_touch_scroll_bar

0xd228,	// (0x0003dc33) aid_list_double

0x3e01,	// (0x0003480c) aid_list_single

0x277f,	// (0x0003318a) aid_list_single_lg

0x5ff1,	// (0x000369fc) aid_list_z_g_a_sm

0x5ff9,	// (0x00036a04) aid_list_z_g_d

0x6001,	// (0x00036a0c) aid_txt_z_prm

0x600f,	// (0x00036a1a) aid_txt_z_prm_cp01

0x601d,	// (0x00036a28) aid_txt_z_sec

0xd231,	// (0x0003dc3c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd231,	// (0x0003dc3c) main_cntbar_detail_cont_pane_g1

0xd23e,	// (0x0003dc49) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd23e,	// (0x0003dc49) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe95,	// (0x000408a0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe95,	// (0x000408a0) main_cntbar_detail_cont_pane_g

0x3e44,	// (0x0003484f) main_cntbar_detail_cont_pane_t1

0x3e52,	// (0x0003485d) main_cntbar_detail_cont_pane_t2

0x3e60,	// (0x0003486b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9a,	// (0x000408a5) main_cntbar_detail_cont_pane_t

0xd24a,	// (0x0003dc55) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd24a,	// (0x0003dc55) cell_cntbar_detail_list_shct_pane

0x3e6e,	// (0x00034879) cntbar_detail_list_shct_pane_g1

0x3e77,	// (0x00034882) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea1,	// (0x000408ac) cntbar_detail_list_shct_pane_g

0xd25e,	// (0x0003dc69) cntbar_detail_list_event_pane_g1_ParamLimits

0xd25e,	// (0x0003dc69) cntbar_detail_list_event_pane_g1

0xd26a,	// (0x0003dc75) cntbar_detail_list_event_pane_g2_ParamLimits

0xd26a,	// (0x0003dc75) cntbar_detail_list_event_pane_g2

0x0005,

0xfea6,	// (0x000408b1) cntbar_detail_list_event_pane_g_ParamLimits

0xfea6,	// (0x000408b1) cntbar_detail_list_event_pane_g

0xd2d8,	// (0x0003dce3) cntbar_detail_list_event_pane_t1_ParamLimits

0xd2d8,	// (0x0003dce3) cntbar_detail_list_event_pane_t1

0xd2ed,	// (0x0003dcf8) cntbar_detail_list_event_pane_t2_ParamLimits

0xd2ed,	// (0x0003dcf8) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb3,	// (0x000408be) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb3,	// (0x000408be) cntbar_detail_list_event_pane_t

0x12ac,	// (0x00031cb7) cell_cntbar_detail_list_shct_pane_g1

0x83d6,	// (0x00038de1) navi_pane_mv_g3

0xf0c9,	// (0x0003fad4) main_cntbar_detail_pane_ParamLimits

0x612a,	// (0x00036b35) main_notif_wgt_pane

0xa9b5,	// (0x0003b3c0) aid_tch_main_mp4_pane_g4

0xabca,	// (0x0003b5d5) popup_slider_window_cp02

0x3b55,	// (0x00034560) list_recal_day_event_pane

0xd1ac,	// (0x0003dbb7) cntbar_detail_btn_pane_ParamLimits

0xd1ac,	// (0x0003dbb7) cntbar_detail_btn_pane

0xd1bc,	// (0x0003dbc7) cntbar_detail_btn_pane_cp01_ParamLimits

0xd1bc,	// (0x0003dbc7) cntbar_detail_btn_pane_cp01

0xd1da,	// (0x0003dbe5) cntbar_detail_list_shct_pane_ParamLimits

0xd1e6,	// (0x0003dbf1) cntbar_detail_pane_g1_ParamLimits

0xd1e6,	// (0x0003dbf1) cntbar_detail_pane_g1

0xd1f6,	// (0x0003dc01) cntbar_detail_pane_t1_ParamLimits

0xd1f6,	// (0x0003dc01) cntbar_detail_pane_t1

0xd276,	// (0x0003dc81) cntbar_detail_list_event_pane_g3_ParamLimits

0xd276,	// (0x0003dc81) cntbar_detail_list_event_pane_g3

0xd28e,	// (0x0003dc99) cntbar_detail_list_event_pane_g4_ParamLimits

0xd28e,	// (0x0003dc99) cntbar_detail_list_event_pane_g4

0xd2a6,	// (0x0003dcb1) cntbar_detail_list_event_pane_g5_ParamLimits

0xd2a6,	// (0x0003dcb1) cntbar_detail_list_event_pane_g5

0xd2be,	// (0x0003dcc9) cntbar_detail_list_event_pane_g6_ParamLimits

0xd2be,	// (0x0003dcc9) cntbar_detail_list_event_pane_g6

0xd302,	// (0x0003dd0d) cntbar_detail_list_event_pane_t3_ParamLimits

0xd302,	// (0x0003dd0d) cntbar_detail_list_event_pane_t3

0xd314,	// (0x0003dd1f) popup_notif_wgt_window_ParamLimits

0xd314,	// (0x0003dd1f) popup_notif_wgt_window

0xd324,	// (0x0003dd2f) popup_submenu_window_cp01_ParamLimits

0xd324,	// (0x0003dd2f) popup_submenu_window_cp01

0xe9e0,	// (0x0003f3eb) bg_popup_window_pane_cp10

0x3e80,	// (0x0003488b) listscroll_notif_wgt_pane

0x3e8a,	// (0x00034895) list_notif_wgt_window

0x3e93,	// (0x0003489e) scroll_pane_cp033

0x3e9c,	// (0x000348a7) list_notif_wgt_row_pane_ParamLimits

0x3e9c,	// (0x000348a7) list_notif_wgt_row_pane

0x3eb0,	// (0x000348bb) aid_size_list_notif_wgt_del

0x3eb9,	// (0x000348c4) list_notif_wgt_row_pane_g1

0x3ec1,	// (0x000348cc) list_notif_wgt_row_pane_g2

0x3ec9,	// (0x000348d4) list_notif_wgt_row_pane_g3

0x0002,

0xfeba,	// (0x000408c5) list_notif_wgt_row_pane_g

0x3ed2,	// (0x000348dd) list_notif_wgt_row_pane_t1

0x3ee0,	// (0x000348eb) list_notif_wgt_row_pane_t2

0x3eee,	// (0x000348f9) list_notif_wgt_row_pane_t3

0x0002,

0xfec1,	// (0x000408cc) list_notif_wgt_row_pane_t

0x2348,	// (0x00032d53) list_recal_day_event_pane_g1

0x3efc,	// (0x00034907) list_recal_day_event_pane_t1

0x612a,	// (0x00036b35) bg_button_pane_cp045

0x3f0b,	// (0x00034916) cntbar_detail_btn_pane_t1

0x0d77,	// (0x00031782) main_callh_pane_ParamLimits

0x0d77,	// (0x00031782) main_callh_pane

0x612a,	// (0x00036b35) main_coverflow0_pane

0x612a,	// (0x00036b35) main_wgtman_pane

0xca25,	// (0x0003d430) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xca25,	// (0x0003d430) main_fs_bigclock_unlock_btn_pane

0x3709,	// (0x00034114) bg_button_pane_cp16

0xcd5e,	// (0x0003d769) cell_tport_appsw_pane_g3

0xd332,	// (0x0003dd3d) cf0_flow_pane_ParamLimits

0xd332,	// (0x0003dd3d) cf0_flow_pane

0x3f19,	// (0x00034924) listscroll_cf0_pane

0x3f22,	// (0x0003492d) main_cf0_pane_g1

0xd341,	// (0x0003dd4c) main_cf0_pane_t1_ParamLimits

0xd341,	// (0x0003dd4c) main_cf0_pane_t1

0xd355,	// (0x0003dd60) main_cf0_pane_t2_ParamLimits

0xd355,	// (0x0003dd60) main_cf0_pane_t2

0x0001,

0xfec8,	// (0x000408d3) main_cf0_pane_t_ParamLimits

0xfec8,	// (0x000408d3) main_cf0_pane_t

0x3f2c,	// (0x00034937) scroll_pane_cp11

0xd369,	// (0x0003dd74) cf0_flow_pane_g1

0xd371,	// (0x0003dd7c) cf0_flow_pane_g2

0x0001,

0xfecd,	// (0x000408d8) cf0_flow_pane_g

0xd379,	// (0x0003dd84) cf0_flow_pane_t1

0x612a,	// (0x00036b35) main_call6_pane

0x612a,	// (0x00036b35) main_calllock_pane

0xd387,	// (0x0003dd92) call6_btn_grp_pane_ParamLimits

0xd387,	// (0x0003dd92) call6_btn_grp_pane

0xd396,	// (0x0003dda1) call6_pane_g1_ParamLimits

0xd396,	// (0x0003dda1) call6_pane_g1

0xd3a6,	// (0x0003ddb1) popup_call6_1st_window_ParamLimits

0xd3a6,	// (0x0003ddb1) popup_call6_1st_window

0xd3b4,	// (0x0003ddbf) popup_call6_2nd_window_ParamLimits

0xd3b4,	// (0x0003ddbf) popup_call6_2nd_window

0xd3c2,	// (0x0003ddcd) cell_call6_btn_pane_ParamLimits

0xd3c2,	// (0x0003ddcd) cell_call6_btn_pane

0xe9e0,	// (0x0003f3eb) bg_popup_call2_in_pane_cp03

0x3f37,	// (0x00034942) popup_call6_1st_window_g1

0x3f3f,	// (0x0003494a) popup_call6_1st_window_g2

0x3f47,	// (0x00034952) popup_call6_1st_window_g3

0x0002,

0xfed2,	// (0x000408dd) popup_call6_1st_window_g

0x3f4f,	// (0x0003495a) popup_call6_1st_window_t1

0x3f5e,	// (0x00034969) popup_call6_1st_window_t2

0x3f6e,	// (0x00034979) popup_call6_1st_window_t3

0x0002,

0xfed9,	// (0x000408e4) popup_call6_1st_window_t

0xe9e0,	// (0x0003f3eb) bg_popup_call2_in_pane_cp04

0x3f37,	// (0x00034942) popup_call6_2nd_window_g1

0x3f3f,	// (0x0003494a) popup_call6_2nd_window_g2

0x3f47,	// (0x00034952) popup_call6_2nd_window_g3

0x0002,

0xfed2,	// (0x000408dd) popup_call6_2nd_window_g

0x3f4f,	// (0x0003495a) popup_call6_2nd_window_t1

0x612a,	// (0x00036b35) bg_button_pane_cp15

0x3f7e,	// (0x00034989) cell_call6_btn_pane_g1

0x3f87,	// (0x00034992) cell_call6_btn_pane_t1

0xd3d1,	// (0x0003dddc) listscroll_wgtman_pane_ParamLimits

0xd3d1,	// (0x0003dddc) listscroll_wgtman_pane

0xd3ef,	// (0x0003ddfa) wgtman_btn_pane_ParamLimits

0xd3ef,	// (0x0003ddfa) wgtman_btn_pane

0xe8a6,	// (0x0003f2b1) aid_scroll_copy1

0x3f96,	// (0x000349a1) list_wgtman_pane

0xd424,	// (0x0003de2f) wgtman_btn_pane_g1_ParamLimits

0xd424,	// (0x0003de2f) wgtman_btn_pane_g1

0xd44c,	// (0x0003de57) wgtman_btn_pane_t1_ParamLimits

0xd44c,	// (0x0003de57) wgtman_btn_pane_t1

0x3fa0,	// (0x000349ab) wgtman_btn_pane_t2_ParamLimits

0x3fa0,	// (0x000349ab) wgtman_btn_pane_t2

0x0001,

0xfee0,	// (0x000408eb) wgtman_btn_pane_t_ParamLimits

0xfee0,	// (0x000408eb) wgtman_btn_pane_t

0x3fb7,	// (0x000349c2) listrow_wgtman_pane_ParamLimits

0x3fb7,	// (0x000349c2) listrow_wgtman_pane

0x3fcb,	// (0x000349d6) listrow_wgtman_pane_g1

0xd483,	// (0x0003de8e) listrow_wgtman_pane_g2

0x0001,

0xfee5,	// (0x000408f0) listrow_wgtman_pane_g

0x602b,	// (0x00036a36) listrow_wgtman_pane_t1

0x6039,	// (0x00036a44) listrow_wgtman_pane_t2

0x0001,

0xfeea,	// (0x000408f5) listrow_wgtman_pane_t

0x6047,	// (0x00036a52) wait_bar_pane_cp09

0x3ff8,	// (0x00034a03) main_calllock_btn_pane

0x4002,	// (0x00034a0d) main_calllock_pane_g1

0x612a,	// (0x00036b35) bg_button_pane_cp17

0x400e,	// (0x00034a19) main_calllock_btn_pane_g1

0x4017,	// (0x00034a22) main_calllock_btn_pane_t1

0x612a,	// (0x00036b35) main_dialer3_pane

0x612a,	// (0x00036b35) main_fmrd2_pane

0x12ac,	// (0x00031cb7) main_fs_bigclock_unlock_btn_pane_g1

0x402e,	// (0x00034a39) main_fs_bigclock_unlock_btn_pane_t1

0xd48d,	// (0x0003de98) area_fmrd2_info_pane_ParamLimits

0xd48d,	// (0x0003de98) area_fmrd2_info_pane

0xd49b,	// (0x0003dea6) area_fmrd2_visual_pane_ParamLimits

0xd49b,	// (0x0003dea6) area_fmrd2_visual_pane

0xd4a9,	// (0x0003deb4) fmrd2_indi_pane_ParamLimits

0xd4a9,	// (0x0003deb4) fmrd2_indi_pane

0xd4b6,	// (0x0003dec1) area_fmrd2_visual_pane_g1

0xd4be,	// (0x0003dec9) area_fmrd2_visual_pane_t1

0xd4ce,	// (0x0003ded9) area_fmrd2_visual_pane_t2

0xd4de,	// (0x0003dee9) area_fmrd2_visual_pane_t3

0x0002,

0xfef4,	// (0x000408ff) area_fmrd2_visual_pane_t

0xd4ee,	// (0x0003def9) area_fmrd2_info_pane_g1

0xd4f6,	// (0x0003df01) area_fmrd2_info_pane_t1

0xd506,	// (0x0003df11) area_fmrd2_info_pane_t2

0xd516,	// (0x0003df21) area_fmrd2_info_pane_t3

0xd526,	// (0x0003df31) area_fmrd2_info_pane_t4

0x0003,

0xfefb,	// (0x00040906) area_fmrd2_info_pane_t

0xd536,	// (0x0003df41) fmrd2_indi_pane_t1

0xd546,	// (0x0003df51) fmrd2_indi_pane_t2

0xd556,	// (0x0003df61) fmrd2_indi_pane_t3

0x0002,

0xff04,	// (0x0004090f) fmrd2_indi_pane_t

0x3134,	// (0x00033b3f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3134,	// (0x00033b3f) list_single_fs_bigclock_indicator_pane_g5

0x31da,	// (0x00033be5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x31da,	// (0x00033be5) list_single_fs_bigclock_indicator_pane_t5

0xcebd,	// (0x0003d8c8) aid_cell_bcale_month_pane_ParamLimits

0xcebd,	// (0x0003d8c8) aid_cell_bcale_month_pane

0xcec9,	// (0x0003d8d4) bcale_month_pane_ParamLimits

0xcec9,	// (0x0003d8d4) bcale_month_pane

0xced7,	// (0x0003d8e2) bcale_preview_pane_ParamLimits

0xced7,	// (0x0003d8e2) bcale_preview_pane

0x3d59,	// (0x00034764) list_single_fs_bigclock_pane_t1_ParamLimits

0x3d73,	// (0x0003477e) list_single_fs_bigclock_pane_t2_ParamLimits

0x3d73,	// (0x0003477e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8b,	// (0x00040896) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x00040896) list_single_fs_bigclock_pane_t

0x4026,	// (0x00034a31) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeef,	// (0x000408fa) main_fs_bigclock_unlock_btn_pane_g

0xd566,	// (0x0003df71) aid_dia3_key_size_ParamLimits

0xd566,	// (0x0003df71) aid_dia3_key_size

0xd572,	// (0x0003df7d) aid_dia3_listrow_size_ParamLimits

0xd572,	// (0x0003df7d) aid_dia3_listrow_size

0xd580,	// (0x0003df8b) dia3_keypad_fun_pane_ParamLimits

0xd580,	// (0x0003df8b) dia3_keypad_fun_pane

0xd590,	// (0x0003df9b) dia3_keypad_num_pane_ParamLimits

0xd590,	// (0x0003df9b) dia3_keypad_num_pane

0xd5a0,	// (0x0003dfab) dia3_listscroll_pane_ParamLimits

0xd5a0,	// (0x0003dfab) dia3_listscroll_pane

0xd5b0,	// (0x0003dfbb) dia3_numentry_pane_ParamLimits

0xd5b0,	// (0x0003dfbb) dia3_numentry_pane

0x403c,	// (0x00034a47) dia3_list_pane

0x4047,	// (0x00034a52) scroll_pane_cp12

0x612a,	// (0x00036b35) bg_dia3_numentry_pane

0x4052,	// (0x00034a5d) dia3_numentry_pane_t1

0xd5c0,	// (0x0003dfcb) cell_dia3_key_num_pane

0xd5c8,	// (0x0003dfd3) cell_dia3_key0_fun_pane_ParamLimits

0xd5c8,	// (0x0003dfd3) cell_dia3_key0_fun_pane

0xd5d5,	// (0x0003dfe0) cell_dia3_key1_fun_pane_ParamLimits

0xd5d5,	// (0x0003dfe0) cell_dia3_key1_fun_pane

0xd5e2,	// (0x0003dfed) dia3_listrow_pane

0x2e4c,	// (0x00033857) bg_dia3_numentry_pane_g1

0x612a,	// (0x00036b35) bg_button_pane_cp21

0x4061,	// (0x00034a6c) cell_dia3_key_num_pane_t1

0x406f,	// (0x00034a7a) cell_dia3_key_num_pane_t2

0x407e,	// (0x00034a89) cell_dia3_key_num_pane_t3

0x408d,	// (0x00034a98) cell_dia3_key_num_pane_t4

0x0003,

0xff0b,	// (0x00040916) cell_dia3_key_num_pane_t

0x612a,	// (0x00036b35) bg_button_pane_cp19

0xd5ef,	// (0x0003dffa) cell_dia3_key0_fun_pane_g1

0x612a,	// (0x00036b35) bg_button_pane_cp20

0xd5f7,	// (0x0003e002) cell_dia3_key1_fun_pane_g1

0xd5ff,	// (0x0003e00a) area_left_week_number_pane

0xd608,	// (0x0003e013) area_top_day_name_pane

0xd611,	// (0x0003e01c) frame_month_view_pane

0xd61b,	// (0x0003e026) grid_month_view_pane

0xd625,	// (0x0003e030) cell_top_day_name_pane_ParamLimits

0xd625,	// (0x0003e030) cell_top_day_name_pane

0xd641,	// (0x0003e04c) cell_area_left_week_number_pane_ParamLimits

0xd641,	// (0x0003e04c) cell_area_left_week_number_pane

0xd655,	// (0x0003e060) cell_month_view_pane_ParamLimits

0xd655,	// (0x0003e060) cell_month_view_pane

0x409c,	// (0x00034aa7) frm_month_g1

0xd674,	// (0x0003e07f) frm_month_g2

0xd67e,	// (0x0003e089) frm_month_g3

0xd688,	// (0x0003e093) frm_month_g4

0xd692,	// (0x0003e09d) frm_month_g5

0xd69c,	// (0x0003e0a7) frm_month_g6

0xd6a6,	// (0x0003e0b1) frm_month_g7

0x40a5,	// (0x00034ab0) frm_month_g8

0xd6b0,	// (0x0003e0bb) frm_month_g9

0xd6b9,	// (0x0003e0c4) frm_month_g10

0xd6c2,	// (0x0003e0cd) frm_month_g11

0xd6cb,	// (0x0003e0d6) frm_month_g12

0xd6d4,	// (0x0003e0df) frm_month_g13

0xd6df,	// (0x0003e0ea) frm_month_g14

0xd6ea,	// (0x0003e0f5) frm_month_g15

0xd6f5,	// (0x0003e100) frm_month_g16

0x000f,

0xff14,	// (0x0004091f) frm_month_g

0xd700,	// (0x0003e10b) cell_top_day_name_pane_t1

0xd70f,	// (0x0003e11a) cell_area_left_week_number_pane_g1

0xd700,	// (0x0003e10b) cell_area_left_week_number_pane_t1

0x12ac,	// (0x00031cb7) cell_month_view_pane_g1

0xd717,	// (0x0003e122) cell_month_view_pane_t1

0x612a,	// (0x00036b35) main_fps_pane

0x3466,	// (0x00033e71) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3466,	// (0x00033e71) cmail_ddmenu_btn02_pane_cp1

0x3482,	// (0x00033e8d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3482,	// (0x00033e8d) cmail_ddmenu_btn02_pane_cp2

0xd0b0,	// (0x0003dabb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd0b0,	// (0x0003dabb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x00040847) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x00040847) cmail_ddmenu_btn02_pane_g

0xd0ce,	// (0x0003dad9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd0ce,	// (0x0003dad9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x0004084c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x0004084c) cmail_ddmenu_btn02_pane_t

0xd726,	// (0x0003e131) fps_text_pane_ParamLimits

0xd726,	// (0x0003e131) fps_text_pane

0xd733,	// (0x0003e13e) main_fps_pane_g1_ParamLimits

0xd733,	// (0x0003e13e) main_fps_pane_g1

0xd73f,	// (0x0003e14a) wait_bar_pane_cp010_ParamLimits

0xd73f,	// (0x0003e14a) wait_bar_pane_cp010

0xd74b,	// (0x0003e156) fps_text_pane_t1_ParamLimits

0xd74b,	// (0x0003e156) fps_text_pane_t1

0xafa4,	// (0x0003b9af) cam4_image_uncrop_pane_g1

0xafad,	// (0x0003b9b8) cam4_image_uncrop_pane_g2

0xafb6,	// (0x0003b9c1) cam4_image_uncrop_pane_g3

0xafbf,	// (0x0003b9ca) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00040327) cam4_image_uncrop_pane_g

0xd5e2,	// (0x0003dfed) dia3_listrow_pane_ParamLimits

0x612a,	// (0x00036b35) main_phob2_pane

0xcd38,	// (0x0003d743) cell_tport_appsw_pane_cp02_ParamLimits

0xcd38,	// (0x0003d743) cell_tport_appsw_pane_cp02

0xcd47,	// (0x0003d752) cell_tport_appsw_pane_cp03_ParamLimits

0xcd47,	// (0x0003d752) cell_tport_appsw_pane_cp03

0x612a,	// (0x00036b35) phob2_contact_card_pane

0x612a,	// (0x00036b35) phob2_listscroll_pane

0x40ae,	// (0x00034ab9) phob2_list_pane

0x40b6,	// (0x00034ac1) scroll_pane_cp034

0xd764,	// (0x0003e16f) phob2_cc_data_pane_ParamLimits

0xd764,	// (0x0003e16f) phob2_cc_data_pane

0xd780,	// (0x0003e18b) phob2_cc_listscroll_pane_ParamLimits

0xd780,	// (0x0003e18b) phob2_cc_listscroll_pane

0xd79c,	// (0x0003e1a7) list_double_large_graphic_phob2_pane_ParamLimits

0xd79c,	// (0x0003e1a7) list_double_large_graphic_phob2_pane

0xd7b6,	// (0x0003e1c1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd7b6,	// (0x0003e1c1) list_double_large_graphic_phob2_pane_g1

0x604f,	// (0x00036a5a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x604f,	// (0x00036a5a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff35,	// (0x00040940) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff35,	// (0x00040940) list_double_large_graphic_phob2_pane_g

0x605b,	// (0x00036a66) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x605b,	// (0x00036a66) list_double_large_graphic_phob2_pane_t1

0x6070,	// (0x00036a7b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6070,	// (0x00036a7b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3a,	// (0x00040945) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3a,	// (0x00040945) list_double_large_graphic_phob2_pane_t

0x612a,	// (0x00036b35) list_highlight_pane_cp024

0x40be,	// (0x00034ac9) phob2_cc_button_pane

0xd7c3,	// (0x0003e1ce) phob2_cc_data_pane_g1_ParamLimits

0xd7c3,	// (0x0003e1ce) phob2_cc_data_pane_g1

0xd7cf,	// (0x0003e1da) phob2_cc_data_pane_g2_ParamLimits

0xd7cf,	// (0x0003e1da) phob2_cc_data_pane_g2

0x0001,

0xff3f,	// (0x0004094a) phob2_cc_data_pane_g_ParamLimits

0xff3f,	// (0x0004094a) phob2_cc_data_pane_g

0xd7db,	// (0x0003e1e6) phob2_cc_data_pane_t1_ParamLimits

0xd7db,	// (0x0003e1e6) phob2_cc_data_pane_t1

0xd7ed,	// (0x0003e1f8) phob2_cc_data_pane_t2_ParamLimits

0xd7ed,	// (0x0003e1f8) phob2_cc_data_pane_t2

0xd7ff,	// (0x0003e20a) phob2_cc_data_pane_t3_ParamLimits

0xd7ff,	// (0x0003e20a) phob2_cc_data_pane_t3

0x0002,

0xff44,	// (0x0004094f) phob2_cc_data_pane_t_ParamLimits

0xff44,	// (0x0004094f) phob2_cc_data_pane_t

0x40c6,	// (0x00034ad1) phob2_cc_list_pane_ParamLimits

0x40c6,	// (0x00034ad1) phob2_cc_list_pane

0x23e1,	// (0x00032dec) scroll_pane_cp035_ParamLimits

0x23e1,	// (0x00032dec) scroll_pane_cp035

0xf0c9,	// (0x0003fad4) bg_button_pane_cp033

0x40d2,	// (0x00034add) phob2_cc_button_pane_g1

0x40de,	// (0x00034ae9) phob2_cc_button_pane_t1

0x40f3,	// (0x00034afe) phob2_cc_button_pane_t2

0x0001,

0xff4b,	// (0x00040956) phob2_cc_button_pane_t

0xd811,	// (0x0003e21c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd811,	// (0x0003e21c) list_double_large_graphic_phob2_cc_pane

0xd830,	// (0x0003e23b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd830,	// (0x0003e23b) list_double_large_graphic_phob2_cc_pane_g1

0x6082,	// (0x00036a8d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x6082,	// (0x00036a8d) list_double_large_graphic_phob2_cc_pane_g2

0x6091,	// (0x00036a9c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6091,	// (0x00036a9c) list_double_large_graphic_phob2_cc_pane_g3

0x60a0,	// (0x00036aab) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x60a0,	// (0x00036aab) list_double_large_graphic_phob2_cc_pane_g4

0x60b1,	// (0x00036abc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x60b1,	// (0x00036abc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff50,	// (0x0004095b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff50,	// (0x0004095b) list_double_large_graphic_phob2_cc_pane_g

0x60c0,	// (0x00036acb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x60c0,	// (0x00036acb) list_double_large_graphic_phob2_cc_pane_t1

0x60e9,	// (0x00036af4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x60e9,	// (0x00036af4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5b,	// (0x00040966) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5b,	// (0x00040966) list_double_large_graphic_phob2_cc_pane_t

0x4105,	// (0x00034b10) list_highlight_pane_cp025_ParamLimits

0x4105,	// (0x00034b10) list_highlight_pane_cp025

0xf0c9,	// (0x0003fad4) bg_button_pane_cp033_ParamLimits

0x40d2,	// (0x00034add) phob2_cc_button_pane_g1_ParamLimits

0x40de,	// (0x00034ae9) phob2_cc_button_pane_t1_ParamLimits

0x40f3,	// (0x00034afe) phob2_cc_button_pane_t2_ParamLimits

0xff4b,	// (0x00040956) phob2_cc_button_pane_t_ParamLimits

0x63e7,	// (0x00036df2) popup_wgtman_window

0x2179,	// (0x00032b84) scroll_pane_cp038

0xd40c,	// (0x0003de17) wgtman_btn_pane_cp_01_ParamLimits

0xd40c,	// (0x0003de17) wgtman_btn_pane_cp_01

0x4113,	// (0x00034b1e) wgtman_content_pane

0x411c,	// (0x00034b27) wgtman_heading_pane

0x612a,	// (0x00036b35) bg_heading_pane_cp02

0x4125,	// (0x00034b30) wgtman_heading_pane_g1

0x412d,	// (0x00034b38) wgtman_heading_pane_t1

0x413b,	// (0x00034b46) scroll_pane_cp036

0x4143,	// (0x00034b4e) wgtman_list_pane

0x32bc,	// (0x00033cc7) wgtman_list_pane_t1_ParamLimits

0x32bc,	// (0x00033cc7) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
