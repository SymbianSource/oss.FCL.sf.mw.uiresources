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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002628b };

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
0x1c61,	// (0x00027eec) Screen

0x1c6d,	// (0x00027ef8) application_window

0x1cd7,	// (0x00027f62) area_bottom_pane_ParamLimits

0x1cd7,	// (0x00027f62) area_bottom_pane

0x1d35,	// (0x00027fc0) area_top_pane_ParamLimits

0x1d35,	// (0x00027fc0) area_top_pane

0x1d92,	// (0x0002801d) call_video_uplink_pane_ParamLimits

0x1d92,	// (0x0002801d) call_video_uplink_pane

0x1dbe,	// (0x00028049) main_pane_ParamLimits

0x1dbe,	// (0x00028049) main_pane

0xbcff,	// (0x00031f8a) context_pane

0x699d,	// (0x0002cc28) navi_pane

0x69cd,	// (0x0002cc58) popup_cale_events_window_ParamLimits

0x69cd,	// (0x0002cc58) popup_cale_events_window

0xbd12,	// (0x00031f9d) popup_mup_playback_window

0x69e5,	// (0x0002cc70) signal_pane

0x28fd,	// (0x00028b88) main_browser_pane

0x4ec7,	// (0x0002b152) main_burst_pane

0x669f,	// (0x0002c92a) main_calc_pane

0x4ec7,	// (0x0002b152) main_cale_day_pane

0x28fd,	// (0x00028b88) main_cale_month_pane

0x4ec7,	// (0x0002b152) main_cale_week_pane

0x4ec7,	// (0x0002b152) main_call_pane

0x23cc,	// (0x00028657) main_call_poc_pane

0x4ec7,	// (0x0002b152) main_camera_pane

0x4ec7,	// (0x0002b152) main_chi_dic_pane

0x4a20,	// (0x0002acab) main_clock_pane

0x23cc,	// (0x00028657) main_fmradio_pane

0x4ec7,	// (0x0002b152) main_graph_messa_pane

0x23cc,	// (0x00028657) main_help_pane

0x28fd,	// (0x00028b88) main_im_pane

0x2627,	// (0x000288b2) main_image_pane_ParamLimits

0x2627,	// (0x000288b2) main_image_pane

0x23cc,	// (0x00028657) main_location2_pane

0x4ec7,	// (0x0002b152) main_location_pane

0x23cc,	// (0x00028657) main_messa_pane

0x23cc,	// (0x00028657) main_mp2_pane

0x4ec7,	// (0x0002b152) main_mp_pane

0x23cc,	// (0x00028657) main_msg_pane

0x23cc,	// (0x00028657) main_mup_eq_pane

0x23cc,	// (0x00028657) main_mup_pane

0x4ec7,	// (0x0002b152) main_notes_pane

0x23cc,	// (0x00028657) main_pec_pane

0x23cc,	// (0x00028657) main_phob_pane

0x23cc,	// (0x00028657) main_pinb_pane

0x23cc,	// (0x00028657) main_postcard_pane

0x23cc,	// (0x00028657) main_qdial_pane

0x4ec7,	// (0x0002b152) main_skin_pane

0x23cc,	// (0x00028657) main_smil2_pane

0x4ec7,	// (0x0002b152) main_smil_pane

0x4ec7,	// (0x0002b152) main_video_pane

0x4ec7,	// (0x0002b152) main_video_tele_pane

0x2627,	// (0x000288b2) main_viewer_pane_ParamLimits

0x2627,	// (0x000288b2) main_viewer_pane

0x4ec7,	// (0x0002b152) main_vorec_pane

0x66f5,	// (0x0002c980) popup_blid_sat_info_window_ParamLimits

0x66f5,	// (0x0002c980) popup_blid_sat_info_window

0x6759,	// (0x0002c9e4) popup_dyc_status_message_window_ParamLimits

0x6759,	// (0x0002c9e4) popup_dyc_status_message_window

0x6773,	// (0x0002c9fe) popup_grid_large_graphic_window_ParamLimits

0x6773,	// (0x0002c9fe) popup_grid_large_graphic_window

0x6835,	// (0x0002cac0) popup_loc_request_window_ParamLimits

0x6835,	// (0x0002cac0) popup_loc_request_window

0x6971,	// (0x0002cbfc) popup_wml_address_window_ParamLimits

0x6971,	// (0x0002cbfc) popup_wml_address_window

0x64dd,	// (0x0002c768) call_muted_g1

0x5cdd,	// (0x0002bf68) popup_call_audio_conf_window_ParamLimits

0x5cdd,	// (0x0002bf68) popup_call_audio_conf_window

0x64ed,	// (0x0002c778) popup_call_audio_first_window_ParamLimits

0x64ed,	// (0x0002c778) popup_call_audio_first_window

0x6563,	// (0x0002c7ee) popup_call_audio_in_window_ParamLimits

0x6563,	// (0x0002c7ee) popup_call_audio_in_window

0x659f,	// (0x0002c82a) popup_call_audio_out_window_ParamLimits

0x659f,	// (0x0002c82a) popup_call_audio_out_window

0x65d9,	// (0x0002c864) popup_call_audio_second_window_ParamLimits

0x65d9,	// (0x0002c864) popup_call_audio_second_window

0x662f,	// (0x0002c8ba) popup_call_audio_wait_window_ParamLimits

0x662f,	// (0x0002c8ba) popup_call_audio_wait_window

0x6664,	// (0x0002c8ef) popup_number_entry_window_ParamLimits

0x6664,	// (0x0002c8ef) popup_number_entry_window

0x1f60,	// (0x000281eb) bg_popup_call_pane_cp05_ParamLimits

0x1f60,	// (0x000281eb) bg_popup_call_pane_cp05

0x1f80,	// (0x0002820b) popup_number_entry_window_t1

0x1f93,	// (0x0002821e) popup_number_entry_window_t2

0x1fa5,	// (0x00028230) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00035377) popup_number_entry_window_t

0x1fec,	// (0x00028277) text_title_cp2

0x1fff,	// (0x0002828a) bg_popup_call_pane_cp_ParamLimits

0x1fff,	// (0x0002828a) bg_popup_call_pane_cp

0x200d,	// (0x00028298) call_thumbnail_pane

0x2015,	// (0x000282a0) popup_call_audio_in_window_g1_ParamLimits

0x2015,	// (0x000282a0) popup_call_audio_in_window_g1

0x2021,	// (0x000282ac) popup_call_audio_in_window_g2_ParamLimits

0x2021,	// (0x000282ac) popup_call_audio_in_window_g2

0x202d,	// (0x000282b8) popup_call_audio_in_window_g3_ParamLimits

0x202d,	// (0x000282b8) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00035380) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00035380) popup_call_audio_in_window_g

0x2039,	// (0x000282c4) popup_call_audio_in_window_t1_ParamLimits

0x2039,	// (0x000282c4) popup_call_audio_in_window_t1

0x2055,	// (0x000282e0) popup_call_audio_in_window_t2_ParamLimits

0x2055,	// (0x000282e0) popup_call_audio_in_window_t2

0x2071,	// (0x000282fc) popup_call_audio_in_window_t3_ParamLimits

0x2071,	// (0x000282fc) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00035387) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00035387) popup_call_audio_in_window_t

0x1fff,	// (0x0002828a) bg_popup_call_pane_cp01_ParamLimits

0x1fff,	// (0x0002828a) bg_popup_call_pane_cp01

0x200d,	// (0x00028298) call_thumbnail_pane_cp02

0x2084,	// (0x0002830f) call_type_pane_cp022

0x208c,	// (0x00028317) popup_call_audio_out_window_g1_ParamLimits

0x208c,	// (0x00028317) popup_call_audio_out_window_g1

0x209e,	// (0x00028329) popup_call_audio_out_window_g2_ParamLimits

0x209e,	// (0x00028329) popup_call_audio_out_window_g2

0x20aa,	// (0x00028335) popup_call_audio_out_window_g3_ParamLimits

0x20aa,	// (0x00028335) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0003538e) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0003538e) popup_call_audio_out_window_g

0x20bc,	// (0x00028347) popup_call_audio_out_window_t1_ParamLimits

0x20bc,	// (0x00028347) popup_call_audio_out_window_t1

0x20d4,	// (0x0002835f) popup_call_audio_out_window_t2_ParamLimits

0x20d4,	// (0x0002835f) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00035395) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00035395) popup_call_audio_out_window_t

0x20e9,	// (0x00028374) bg_popup_call_pane_ParamLimits

0x20e9,	// (0x00028374) bg_popup_call_pane

0x216d,	// (0x000283f8) call_thumbnail_pane_cp_ParamLimits

0x216d,	// (0x000283f8) call_thumbnail_pane_cp

0x2191,	// (0x0002841c) call_type_pane_cp01_ParamLimits

0x2191,	// (0x0002841c) call_type_pane_cp01

0x21d5,	// (0x00028460) popup_call_audio_first_window_g1_ParamLimits

0x21d5,	// (0x00028460) popup_call_audio_first_window_g1

0x2221,	// (0x000284ac) popup_call_audio_first_window_g2_ParamLimits

0x2221,	// (0x000284ac) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0003539a) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0003539a) popup_call_audio_first_window_g

0x2265,	// (0x000284f0) popup_call_audio_first_window_t1_ParamLimits

0x2265,	// (0x000284f0) popup_call_audio_first_window_t1

0x2311,	// (0x0002859c) popup_call_audio_first_window_t4_ParamLimits

0x2311,	// (0x0002859c) popup_call_audio_first_window_t4

0x239d,	// (0x00028628) popup_call_audio_first_window_t5_ParamLimits

0x239d,	// (0x00028628) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0003539f) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0003539f) popup_call_audio_first_window_t

0x23cc,	// (0x00028657) bg_popup_call_pane_cp02

0x23d6,	// (0x00028661) call_type_pane_cp023

0x23de,	// (0x00028669) popup_call_audio_wait_window_g1

0x23e6,	// (0x00028671) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000353a6) popup_call_audio_wait_window_g

0x23ee,	// (0x00028679) popup_call_audio_wait_window_t3

0x23fc,	// (0x00028687) bg_popup_call_pane_cp03_ParamLimits

0x23fc,	// (0x00028687) bg_popup_call_pane_cp03

0x245c,	// (0x000286e7) call_thumbnail_pane_cp011_ParamLimits

0x245c,	// (0x000286e7) call_thumbnail_pane_cp011

0x2468,	// (0x000286f3) call_type_pane_cp034_ParamLimits

0x2468,	// (0x000286f3) call_type_pane_cp034

0x24a4,	// (0x0002872f) popup_call_audio_second_window_g1_ParamLimits

0x24a4,	// (0x0002872f) popup_call_audio_second_window_g1

0x24e0,	// (0x0002876b) popup_call_audio_second_window_g2_ParamLimits

0x24e0,	// (0x0002876b) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x000353ab) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x000353ab) popup_call_audio_second_window_g

0x251c,	// (0x000287a7) popup_call_audio_second_window_t1_ParamLimits

0x251c,	// (0x000287a7) popup_call_audio_second_window_t1

0x259d,	// (0x00028828) popup_call_audio_second_window_t2_ParamLimits

0x259d,	// (0x00028828) popup_call_audio_second_window_t2

0x25d3,	// (0x0002885e) popup_call_audio_second_window_t3_ParamLimits

0x25d3,	// (0x0002885e) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x000353b0) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x000353b0) popup_call_audio_second_window_t

0x23cc,	// (0x00028657) bg_popup_call_pane_cp04

0x2609,	// (0x00028894) list_conf_pane

0x2611,	// (0x0002889c) popup_call_audio_conf_window_t1

0x261f,	// (0x000288aa) call_thumbnail_pane_g1

0x2627,	// (0x000288b2) bg_pinb_pane_ParamLimits

0x2627,	// (0x000288b2) bg_pinb_pane

0x2635,	// (0x000288c0) find_pinb_pane

0x263e,	// (0x000288c9) listscroll_pinb_pane_ParamLimits

0x263e,	// (0x000288c9) listscroll_pinb_pane

0x264d,	// (0x000288d8) pinb_bg_pane_g1

0x2657,	// (0x000288e2) pinb_bg_pane_g2

0x2663,	// (0x000288ee) pinb_bg_pane_g3

0x266f,	// (0x000288fa) pinb_bg_pane_g4

0x267b,	// (0x00028906) pinb_bg_pane_g5

0x2687,	// (0x00028912) pinb_bg_pane_g6

0x2692,	// (0x0002891d) pinb_bg_pane_g7

0x269d,	// (0x00028928) pinb_bg_pane_g8

0x26a8,	// (0x00028933) pinb_bg_pane_g9

0x26b2,	// (0x0002893d) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000353b7) pinb_bg_pane_g

0x26cf,	// (0x0002895a) grid_pinb_pane

0x26da,	// (0x00028965) list_pinb_pane

0x26e5,	// (0x00028970) scroll_pane_cp01_ParamLimits

0x26e5,	// (0x00028970) scroll_pane_cp01

0x26f7,	// (0x00028982) find_pinb_pane_g1_ParamLimits

0x26f7,	// (0x00028982) find_pinb_pane_g1

0x270f,	// (0x0002899a) find_pinb_pane_t1

0x2721,	// (0x000289ac) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000353d1) find_pinb_pane_t

0x2736,	// (0x000289c1) input_focus_pane_cp01_ParamLimits

0x2736,	// (0x000289c1) input_focus_pane_cp01

0x2742,	// (0x000289cd) cell_pinb_pane_ParamLimits

0x2742,	// (0x000289cd) cell_pinb_pane

0x2764,	// (0x000289ef) cell_pinb_pane_g1_ParamLimits

0x2764,	// (0x000289ef) cell_pinb_pane_g1

0x2778,	// (0x00028a03) cell_pinb_pane_g2_ParamLimits

0x2778,	// (0x00028a03) cell_pinb_pane_g2

0x2784,	// (0x00028a0f) cell_pinb_pane_g3_ParamLimits

0x2784,	// (0x00028a0f) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000353d6) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000353d6) cell_pinb_pane_g

0x23cc,	// (0x00028657) grid_highlight_pane_cp01

0x2790,	// (0x00028a1b) list_pinb_item_pane_ParamLimits

0x2790,	// (0x00028a1b) list_pinb_item_pane

0x23cc,	// (0x00028657) list_highlight_pane_cp02

0x27a3,	// (0x00028a2e) list_pinb_item_pane_g1_ParamLimits

0x27a3,	// (0x00028a2e) list_pinb_item_pane_g1

0x27b0,	// (0x00028a3b) list_pinb_item_pane_g2_ParamLimits

0x27b0,	// (0x00028a3b) list_pinb_item_pane_g2

0x27bc,	// (0x00028a47) list_pinb_item_pane_g3_ParamLimits

0x27bc,	// (0x00028a47) list_pinb_item_pane_g3

0x27cd,	// (0x00028a58) list_pinb_item_pane_g4_ParamLimits

0x27cd,	// (0x00028a58) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000353dd) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000353dd) list_pinb_item_pane_g

0x27d9,	// (0x00028a64) list_pinb_item_pane_t1_ParamLimits

0x27d9,	// (0x00028a64) list_pinb_item_pane_t1

0x0a99,	// (0x00026d24) calc_display_pane

0x0abf,	// (0x00026d4a) calc_paper_pane

0x0ae2,	// (0x00026d6d) grid_calc_pane

0x23cc,	// (0x00028657) bg_list_pane_cp01

0x27f0,	// (0x00028a7b) clock_g1

0x27f8,	// (0x00028a83) clock_g2

0x0001,

0xf15b,	// (0x000353e6) clock_g

0x2800,	// (0x00028a8b) clock_t1_ParamLimits

0x2800,	// (0x00028a8b) clock_t1

0x2815,	// (0x00028aa0) clock_t2_ParamLimits

0x2815,	// (0x00028aa0) clock_t2

0x2827,	// (0x00028ab2) clock_t3_ParamLimits

0x2827,	// (0x00028ab2) clock_t3

0x2839,	// (0x00028ac4) clock_t4_ParamLimits

0x2839,	// (0x00028ac4) clock_t4

0x284b,	// (0x00028ad6) clock_t5_ParamLimits

0x284b,	// (0x00028ad6) clock_t5

0x2860,	// (0x00028aeb) clock_t6_ParamLimits

0x2860,	// (0x00028aeb) clock_t6

0x2872,	// (0x00028afd) clock_t7_ParamLimits

0x2872,	// (0x00028afd) clock_t7

0x2884,	// (0x00028b0f) clock_t8_ParamLimits

0x2884,	// (0x00028b0f) clock_t8

0x2898,	// (0x00028b23) clock_t9_ParamLimits

0x2898,	// (0x00028b23) clock_t9

0x0008,

0xf160,	// (0x000353eb) clock_t_ParamLimits

0xf160,	// (0x000353eb) clock_t

0x28ae,	// (0x00028b39) popup_clock_analogue_window_cp02

0x28ae,	// (0x00028b39) popup_clock_digital_window_cp01

0x28b6,	// (0x00028b41) listscroll_help_pane

0x23cc,	// (0x00028657) phob_pre_status_pane

0x28c0,	// (0x00028b4b) grid_qdial_pane

0x23cc,	// (0x00028657) listscroll_mce_pane

0x28ca,	// (0x00028b55) bg_notes_pane

0x28d4,	// (0x00028b5f) list_notes_pane

0x28de,	// (0x00028b69) scroll_pane_cp06

0x28e9,	// (0x00028b74) bg_calc_paper_pane

0xafa7,	// (0x00031232) list_calc_pane

0x28fd,	// (0x00028b88) bg_calc_display_pane

0x0b10,	// (0x00026d9b) calc_display_pane_t1

0x0b22,	// (0x00026dad) calc_display_pane_t2

0xafc1,	// (0x0003124c) calc_display_pane_t3

0x0002,

0xf173,	// (0x000353fe) calc_display_pane_t

0x0b34,	// (0x00026dbf) cell_calc_pane_ParamLimits

0x0b34,	// (0x00026dbf) cell_calc_pane

0x2909,	// (0x00028b94) bg_calc_paper_pane_g1

0x2915,	// (0x00028ba0) bg_calc_paper_pane_g2

0x2921,	// (0x00028bac) bg_calc_paper_pane_g3

0x292d,	// (0x00028bb8) bg_calc_paper_pane_g4

0x2939,	// (0x00028bc4) bg_calc_paper_pane_g5

0x2945,	// (0x00028bd0) bg_calc_paper_pane_g6

0x2958,	// (0x00028be3) bg_calc_paper_pane_g7

0x296b,	// (0x00028bf6) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00035405) bg_calc_paper_pane_g

0x297c,	// (0x00028c07) calc_bg_paper_pane_g9

0x298d,	// (0x00028c18) list_calc_item_pane_ParamLimits

0x298d,	// (0x00028c18) list_calc_item_pane

0x29a1,	// (0x00028c2c) list_calc_item_pane_g1

0xafd3,	// (0x0003125e) list_calc_item_pane_t1_ParamLimits

0xafd3,	// (0x0003125e) list_calc_item_pane_t1

0x0b6f,	// (0x00026dfa) list_calc_item_pane_t2_ParamLimits

0x0b6f,	// (0x00026dfa) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00035416) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00035416) list_calc_item_pane_t

0x29ae,	// (0x00028c39) cell_calc_pane_g1

0x29b8,	// (0x00028c43) grid_highlight_pane_cp02

0x29da,	// (0x00028c65) bg_calc_display_pane_g1

0xafe5,	// (0x00031270) bg_calc_display_pane_g2

0x29e3,	// (0x00028c6e) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00035420) bg_calc_display_pane_g

0x0ba1,	// (0x00026e2c) cell_qdial_pane_ParamLimits

0x0ba1,	// (0x00026e2c) cell_qdial_pane

0x29ec,	// (0x00028c77) cell_qdial_pane_g1_ParamLimits

0x29ec,	// (0x00028c77) cell_qdial_pane_g1

0x2a02,	// (0x00028c8d) cell_qdial_pane_g2_ParamLimits

0x2a02,	// (0x00028c8d) cell_qdial_pane_g2

0x2a13,	// (0x00028c9e) cell_qdial_pane_g3_ParamLimits

0x2a13,	// (0x00028c9e) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00035427) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00035427) cell_qdial_pane_g

0x2a34,	// (0x00028cbf) cell_qdial_pane_t1_ParamLimits

0x2a34,	// (0x00028cbf) cell_qdial_pane_t1

0x2a4c,	// (0x00028cd7) cell_qdial_pane_t2_ParamLimits

0x2a4c,	// (0x00028cd7) cell_qdial_pane_t2

0x2a5f,	// (0x00028cea) cell_qdial_pane_t3_ParamLimits

0x2a5f,	// (0x00028cea) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00035430) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00035430) cell_qdial_pane_t

0x23cc,	// (0x00028657) grid_highlight_pane_cp04

0x2a72,	// (0x00028cfd) thumbnail_qdial_pane_ParamLimits

0x2a72,	// (0x00028cfd) thumbnail_qdial_pane

0x2ace,	// (0x00028d59) list_help_pane

0x2ad7,	// (0x00028d62) scroll_pane_cp02

0x2ae0,	// (0x00028d6b) help_list_pane_t1_ParamLimits

0x2ae0,	// (0x00028d6b) help_list_pane_t1

0xafef,	// (0x0003127a) bg_notes_pane_g2

0xaff7,	// (0x00031282) bg_notes_pane_g3

0xafff,	// (0x0003128a) notes_bg_pane_g1

0xb007,	// (0x00031292) notes_bg_pane_g4

0xb00f,	// (0x0003129a) notes_bg_pane_g5

0xb017,	// (0x000312a2) notes_bg_pane_g6

0xb01f,	// (0x000312aa) notes_bg_pane_g7

0xb027,	// (0x000312b2) notes_bg_pane_g8

0xb02f,	// (0x000312ba) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0003544e) notes_bg_pane_g

0x2b04,	// (0x00028d8f) list_notes_text_pane_ParamLimits

0x2b04,	// (0x00028d8f) list_notes_text_pane

0x2b1b,	// (0x00028da6) list_notes_text_pane_g1

0x2b24,	// (0x00028daf) list_notes_text_pane_t1

0x28fd,	// (0x00028b88) listscroll_cale_week_pane

0x2b60,	// (0x00028deb) bg_cale_heading_pane

0x2b7c,	// (0x00028e07) bg_cale_pane_cp01

0x2b95,	// (0x00028e20) cale_week_corner_pane

0x2bab,	// (0x00028e36) cale_week_day_heading_pane

0x2bc7,	// (0x00028e52) cale_week_scroll_pane_g1

0x2be0,	// (0x00028e6b) cale_week_scroll_pane_g2

0x2bf1,	// (0x00028e7c) cale_week_scroll_pane_g3

0x2c02,	// (0x00028e8d) cale_week_scroll_pane_g4

0x2c13,	// (0x00028e9e) cale_week_scroll_pane_g5

0x2c24,	// (0x00028eaf) cale_week_scroll_pane_g6

0x2c35,	// (0x00028ec0) cale_week_scroll_pane_g7

0x2c46,	// (0x00028ed1) cale_week_scroll_pane_g8

0x2c57,	// (0x00028ee2) cale_week_scroll_pane_g9

0x2c68,	// (0x00028ef3) cale_week_scroll_pane_g10

0x2c79,	// (0x00028f04) cale_week_scroll_pane_g11

0x2c8a,	// (0x00028f15) cale_week_scroll_pane_g12

0x2c9b,	// (0x00028f26) cale_week_scroll_pane_g13

0x2cb4,	// (0x00028f3f) cale_week_scroll_pane_g14

0x2ccd,	// (0x00028f58) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0003545d) cale_week_scroll_pane_g

0x2ce6,	// (0x00028f71) cale_week_time_pane

0x2cf7,	// (0x00028f82) grid_cale_week_pane

0x2d24,	// (0x00028faf) scroll_pane_cp08

0x2d3c,	// (0x00028fc7) cell_cale_week_pane_ParamLimits

0x2d3c,	// (0x00028fc7) cell_cale_week_pane

0x2d84,	// (0x0002900f) cale_week_day_heading_pane_t1

0x2d98,	// (0x00029023) cale_week_day_heading_pane_t2

0x2dac,	// (0x00029037) cale_week_day_heading_pane_t3

0x2dc0,	// (0x0002904b) cale_week_day_heading_pane_t4

0x2dd4,	// (0x0002905f) cale_week_day_heading_pane_t5

0x2de8,	// (0x00029073) cale_week_day_heading_pane_t6

0x2dfc,	// (0x00029087) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0003547c) cale_week_day_heading_pane_t

0x2e10,	// (0x0002909b) bg_cale_side_pane

0x0bb7,	// (0x00026e42) cale_week_time_pane_t1

0x0bcf,	// (0x00026e5a) cale_week_time_pane_t2

0x0be7,	// (0x00026e72) cale_week_time_pane_t3

0x0bff,	// (0x00026e8a) cale_week_time_pane_t4

0x0c17,	// (0x00026ea2) cale_week_time_pane_t5

0x0c2f,	// (0x00026eba) cale_week_time_pane_t6

0x0c47,	// (0x00026ed2) cale_week_time_pane_t7

0x0c63,	// (0x00026eee) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0003548b) cale_week_time_pane_t

0x2e1e,	// (0x000290a9) cell_cale_week_pane_g2

0x2e2f,	// (0x000290ba) cell_cale_week_pane_g3_ParamLimits

0x2e2f,	// (0x000290ba) cell_cale_week_pane_g3

0x2e47,	// (0x000290d2) grid_highlight_pane_cp07

0x2e4f,	// (0x000290da) listscroll_gms_pane

0x2e59,	// (0x000290e4) grid_gms_pane

0x2e62,	// (0x000290ed) listscroll_gms_pane_g1

0x2e6a,	// (0x000290f5) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0003549c) listscroll_gms_pane_g

0x2e72,	// (0x000290fd) scroll_pane_cp010

0x2e7d,	// (0x00029108) cell_gms_pane_ParamLimits

0x2e7d,	// (0x00029108) cell_gms_pane

0x2e97,	// (0x00029122) cell_gms_pane_g1

0x2e9f,	// (0x0002912a) cell_gms_pane_g2

0x2ea7,	// (0x00029132) cell_gms_pane_g3

0x2eb0,	// (0x0002913b) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000354a1) cell_gms_pane_g

0x2eb9,	// (0x00029144) grid_highlight_pane_cp09

0x6485,	// (0x0002c710) phob_pre_status_pane_g1

0x648d,	// (0x0002c718) phob_pre_status_pane_g2

0x6495,	// (0x0002c720) phob_pre_status_pane_g3

0x649d,	// (0x0002c728) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00035890) phob_pre_status_pane_g

0x64ad,	// (0x0002c738) phob_pre_status_pane_t1

0x64bd,	// (0x0002c748) phob_pre_status_pane_t2

0x64cd,	// (0x0002c758) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0003589b) phob_pre_status_pane_t

0x23cc,	// (0x00028657) bg_list_pane_cp05

0x0c8b,	// (0x00026f16) grid_vorec_pane

0xb037,	// (0x000312c2) vorec_t1

0xb045,	// (0x000312d0) vorec_t2

0xb053,	// (0x000312de) vorec_t3

0xb061,	// (0x000312ec) vorec_t4

0xb06f,	// (0x000312fa) vorec_t5

0xb07d,	// (0x00031308) vorec_t6

0x0006,

0xf21f,	// (0x000354aa) vorec_t

0xb099,	// (0x00031324) wait_bar_pane_cp01

0x2ec1,	// (0x0002914c) cell_vorec_pane_ParamLimits

0x2ec1,	// (0x0002914c) cell_vorec_pane

0x2ed6,	// (0x00029161) cell_vorec_pane_g1

0x23cc,	// (0x00028657) grid_highlight_pane_cp05

0x2ef6,	// (0x00029181) cams_zoom_pane

0x2f05,	// (0x00029190) image_vga_pane

0x2f1f,	// (0x000291aa) main_camera_pane_g1

0x2f31,	// (0x000291bc) main_camera_pane_g2

0x2f41,	// (0x000291cc) main_camera_pane_g3

0x2f55,	// (0x000291e0) main_camera_pane_g4

0x2f69,	// (0x000291f4) main_camera_pane_g5

0x2f7d,	// (0x00029208) main_camera_pane_g6

0x2f91,	// (0x0002921c) main_camera_pane_g7

0x0007,

0xf22e,	// (0x000354b9) main_camera_pane_g

0x2fb1,	// (0x0002923c) main_camera_pane_t1

0x2fc7,	// (0x00029252) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000354ca) main_camera_pane_t

0x3005,	// (0x00029290) cams_zoom_pane_cp_ParamLimits

0x3005,	// (0x00029290) cams_zoom_pane_cp

0x302d,	// (0x000292b8) image_cif_pane_ParamLimits

0x302d,	// (0x000292b8) image_cif_pane

0x3068,	// (0x000292f3) image_subqcif_pane

0x3072,	// (0x000292fd) main_video_pane_g1_ParamLimits

0x3072,	// (0x000292fd) main_video_pane_g1

0x3096,	// (0x00029321) main_video_pane_g2_ParamLimits

0x3096,	// (0x00029321) main_video_pane_g2

0x30cc,	// (0x00029357) main_video_pane_g3_ParamLimits

0x30cc,	// (0x00029357) main_video_pane_g3

0x30fa,	// (0x00029385) main_video_pane_g4_ParamLimits

0x30fa,	// (0x00029385) main_video_pane_g4

0x3128,	// (0x000293b3) main_video_pane_g5_ParamLimits

0x3128,	// (0x000293b3) main_video_pane_g5

0x3140,	// (0x000293cb) main_video_pane_g6_ParamLimits

0x3140,	// (0x000293cb) main_video_pane_g6

0x0006,

0xf244,	// (0x000354cf) main_video_pane_g_ParamLimits

0xf244,	// (0x000354cf) main_video_pane_g

0x316b,	// (0x000293f6) main_video_pane_t1_ParamLimits

0x316b,	// (0x000293f6) main_video_pane_t1

0x31b4,	// (0x0002943f) cams_zoom_pane_g1

0x31bd,	// (0x00029448) cams_zoom_pane_g2

0x31c6,	// (0x00029451) cams_zoom_pane_g3

0x31cf,	// (0x0002945a) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000354de) cams_zoom_pane_g

0x31ec,	// (0x00029477) grid_cams_pane

0x3206,	// (0x00029491) linegrid_cams_pane

0x321a,	// (0x000294a5) cell_cams_pane_ParamLimits

0x321a,	// (0x000294a5) cell_cams_pane

0x323c,	// (0x000294c7) cams_burst_image_pane

0x3244,	// (0x000294cf) cell_cams_pane_g1

0x23cc,	// (0x00028657) grid_highlight_pane_cp03

0x29ae,	// (0x00028c39) mp_bg_pane_g1

0x23cc,	// (0x00028657) bg_list_pane_cp03

0xbbd1,	// (0x00031e5c) bg_mp_pane

0xbbd9,	// (0x00031e64) grid_mp_pane

0xbbe1,	// (0x00031e6c) media_player_g1

0xbbeb,	// (0x00031e76) media_player_t1

0xbbf9,	// (0x00031e84) media_player_t2

0xbc07,	// (0x00031e92) media_player_t3

0xbc15,	// (0x00031ea0) media_player_t4

0xbc23,	// (0x00031eae) media_player_t5

0xbc31,	// (0x00031ebc) media_player_t6

0xbc3f,	// (0x00031eca) media_player_t7

0x0006,

0xf5ef,	// (0x0003587a) media_player_t

0xbc4d,	// (0x00031ed8) wait_bar_pane_cp02

0xf5d4,	// (0x0003585f) main_usb_pane_t

0x647c,	// (0x0002c707) cell_mp_pane

0x29ae,	// (0x00028c39) cell_mp_pane_g1

0x23cc,	// (0x00028657) grid_highlight_pane_cp06

0x335c,	// (0x000295e7) grid_skin_colour_pane

0x3364,	// (0x000295ef) list_highlight_pane_cp03

0x336c,	// (0x000295f7) skin_g1

0x3376,	// (0x00029601) skin_t1

0x3385,	// (0x00029610) skin_t2

0x0001,

0xf288,	// (0x00035513) skin_t

0x3393,	// (0x0002961e) cell_skin_colour_pane_ParamLimits

0x3393,	// (0x0002961e) cell_skin_colour_pane

0x33b3,	// (0x0002963e) cell_skin_colour_pane_g1

0x3418,	// (0x000296a3) call_video_g1_ParamLimits

0x3418,	// (0x000296a3) call_video_g1

0x3434,	// (0x000296bf) call_video_g2_ParamLimits

0x3434,	// (0x000296bf) call_video_g2

0x0001,

0xf28d,	// (0x00035518) call_video_g_ParamLimits

0xf28d,	// (0x00035518) call_video_g

0x347c,	// (0x00029707) call_video_uplink_pane_cp1_ParamLimits

0x347c,	// (0x00029707) call_video_uplink_pane_cp1

0x34e1,	// (0x0002976c) call_video_uplink_pane_cp2

0x3525,	// (0x000297b0) video_down_crop_pane_ParamLimits

0x3525,	// (0x000297b0) video_down_crop_pane

0x360e,	// (0x00029899) video_down_pane_ParamLimits

0x360e,	// (0x00029899) video_down_pane

0x3700,	// (0x0002998b) video_down_subqcif_pane_ParamLimits

0x3700,	// (0x0002998b) video_down_subqcif_pane

0x371a,	// (0x000299a5) video_down_subqcif_pane_cp_ParamLimits

0x371a,	// (0x000299a5) video_down_subqcif_pane_cp

0x3757,	// (0x000299e2) im_reading_pane_ParamLimits

0x3757,	// (0x000299e2) im_reading_pane

0x3769,	// (0x000299f4) im_writing_pane_ParamLimits

0x3769,	// (0x000299f4) im_writing_pane

0x378f,	// (0x00029a1a) im_reading_pane_t1

0x37ce,	// (0x00029a59) list_im_pane

0x37df,	// (0x00029a6a) scroll_pane_cp07

0x37f8,	// (0x00029a83) im_writing_pane_t1_ParamLimits

0x37f8,	// (0x00029a83) im_writing_pane_t1

0x380d,	// (0x00029a98) im_writing_pane_t2_ParamLimits

0x380d,	// (0x00029a98) im_writing_pane_t2

0x0001,

0xf297,	// (0x00035522) im_writing_pane_t_ParamLimits

0xf297,	// (0x00035522) im_writing_pane_t

0x23cc,	// (0x00028657) input_focus_pane_cp04

0x23cc,	// (0x00028657) input_focus_pane_cp05

0x382a,	// (0x00029ab5) list_im_single_pane_ParamLimits

0x382a,	// (0x00029ab5) list_im_single_pane

0x3843,	// (0x00029ace) list_single_im_pane_t1

0x643c,	// (0x0002c6c7) blid_accuracy_pane

0x6444,	// (0x0002c6cf) blid_compass_pane

0x644e,	// (0x0002c6d9) main_location_t1

0x645e,	// (0x0002c6e9) main_location_t2

0x646e,	// (0x0002c6f9) main_location_t3

0x0002,

0xf5fe,	// (0x00035889) main_location_t

0x23cc,	// (0x00028657) aid_levels_location

0x29ae,	// (0x00028c39) blid_accuracy_pane_g1

0x29ae,	// (0x00028c39) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00035584) blid_accuracy_pane_g

0x387d,	// (0x00029b08) wml_content_pane

0x38bb,	// (0x00029b46) wml_button_pane_ParamLimits

0x38bb,	// (0x00029b46) wml_button_pane

0x38cf,	// (0x00029b5a) wml_list_single_large_pane_ParamLimits

0x38cf,	// (0x00029b5a) wml_list_single_large_pane

0x38e8,	// (0x00029b73) wml_list_single_medium_pane_ParamLimits

0x38e8,	// (0x00029b73) wml_list_single_medium_pane

0x3902,	// (0x00029b8d) wml_list_single_small_pane_ParamLimits

0x3902,	// (0x00029b8d) wml_list_single_small_pane

0x3921,	// (0x00029bac) wml_selection_box_pane_ParamLimits

0x3921,	// (0x00029bac) wml_selection_box_pane

0x3934,	// (0x00029bbf) wml_list_single_pane_t1

0x3943,	// (0x00029bce) wml_list_single_medium_pane_t1

0x3952,	// (0x00029bdd) wml_list_single_large_pane_t1

0x3961,	// (0x00029bec) input_focus_pane_cp02_ParamLimits

0x3961,	// (0x00029bec) input_focus_pane_cp02

0x3974,	// (0x00029bff) wml_selection_box_pane_g1

0x397d,	// (0x00029c08) wml_selection_box_pane_t1_ParamLimits

0x397d,	// (0x00029c08) wml_selection_box_pane_t1

0x2627,	// (0x000288b2) bg_wml_button_pane_ParamLimits

0x2627,	// (0x000288b2) bg_wml_button_pane

0x3995,	// (0x00029c20) wml_button_pane_g1

0x399d,	// (0x00029c28) wml_button_pane_t1

0x3995,	// (0x00029c20) wml_button_bg_pane_g1

0x39ad,	// (0x00029c38) wml_button_bg_pane_g2

0x39b5,	// (0x00029c40) wml_button_bg_pane_g3

0x39bd,	// (0x00029c48) wml_button_bg_pane_g4

0x39c5,	// (0x00029c50) wml_button_bg_pane_g5

0x39cd,	// (0x00029c58) wml_button_bg_pane_g6

0x39d5,	// (0x00029c60) wml_button_bg_pane_g7

0x39dd,	// (0x00029c68) wml_button_bg_pane_g8

0x39e5,	// (0x00029c70) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00035527) wml_button_bg_pane_g

0x39ed,	// (0x00029c78) bg_list_pane_cp02

0x39f7,	// (0x00029c82) mce_header_pane_ParamLimits

0x39f7,	// (0x00029c82) mce_header_pane

0x3a0d,	// (0x00029c98) mce_icon_pane

0x3a0d,	// (0x00029c98) mce_image_pane

0x3a16,	// (0x00029ca1) mce_text_pane_ParamLimits

0x3a16,	// (0x00029ca1) mce_text_pane

0x3a29,	// (0x00029cb4) scroll_pane_cp03

0x38b3,	// (0x00029b3e) scroll_pane_cp04

0x3a33,	// (0x00029cbe) scroll_pane_cp05_ParamLimits

0x3a33,	// (0x00029cbe) scroll_pane_cp05

0x3a3f,	// (0x00029cca) mce_header_field_pane_ParamLimits

0x3a3f,	// (0x00029cca) mce_header_field_pane

0x3a58,	// (0x00029ce3) mce_header_field_pane_2_ParamLimits

0x3a58,	// (0x00029ce3) mce_header_field_pane_2

0x3a6e,	// (0x00029cf9) mce_header_field_pane_3

0x3a76,	// (0x00029d01) list_single_mce_message_pane_ParamLimits

0x3a76,	// (0x00029d01) list_single_mce_message_pane

0x3a92,	// (0x00029d1d) list_single_mce_smart_pane_ParamLimits

0x3a92,	// (0x00029d1d) list_single_mce_smart_pane

0x3ab9,	// (0x00029d44) input_focus_pane_cp03

0x3ac2,	// (0x00029d4d) list_header_data_pane

0x3aca,	// (0x00029d55) mce_header_field_pane_t1

0x3ada,	// (0x00029d65) list_single_mce_header_pane_ParamLimits

0x3ada,	// (0x00029d65) list_single_mce_header_pane

0x3aee,	// (0x00029d79) list_single_mce_header_pane_t1

0x3afd,	// (0x00029d88) list_single_mce_message_pane_g1

0x3b05,	// (0x00029d90) list_single_mce_message_pane_t1

0x3b31,	// (0x00029dbc) bg_cale_heading_pane_cp01_ParamLimits

0x3b31,	// (0x00029dbc) bg_cale_heading_pane_cp01

0x3b64,	// (0x00029def) bg_cale_pane_cp02_ParamLimits

0x3b64,	// (0x00029def) bg_cale_pane_cp02

0x3b87,	// (0x00029e12) cale_month_corner_pane

0x3b9d,	// (0x00029e28) cale_month_day_heading_pane_ParamLimits

0x3b9d,	// (0x00029e28) cale_month_day_heading_pane

0x3bd0,	// (0x00029e5b) cale_month_pane_g1_ParamLimits

0x3bd0,	// (0x00029e5b) cale_month_pane_g1

0x3bfc,	// (0x00029e87) cale_month_pane_g2_ParamLimits

0x3bfc,	// (0x00029e87) cale_month_pane_g2

0x3c1d,	// (0x00029ea8) cale_month_pane_g3_ParamLimits

0x3c1d,	// (0x00029ea8) cale_month_pane_g3

0x3c59,	// (0x00029ee4) cale_month_pane_g4_ParamLimits

0x3c59,	// (0x00029ee4) cale_month_pane_g4

0x3c95,	// (0x00029f20) cale_month_pane_g5_ParamLimits

0x3c95,	// (0x00029f20) cale_month_pane_g5

0x3cd1,	// (0x00029f5c) cale_month_pane_g6_ParamLimits

0x3cd1,	// (0x00029f5c) cale_month_pane_g6

0x3d0d,	// (0x00029f98) cale_month_pane_g7_ParamLimits

0x3d0d,	// (0x00029f98) cale_month_pane_g7

0x3d49,	// (0x00029fd4) cale_month_pane_g8_ParamLimits

0x3d49,	// (0x00029fd4) cale_month_pane_g8

0x3d85,	// (0x0002a010) cale_month_pane_g9_ParamLimits

0x3d85,	// (0x0002a010) cale_month_pane_g9

0x3dbb,	// (0x0002a046) cale_month_pane_g10_ParamLimits

0x3dbb,	// (0x0002a046) cale_month_pane_g10

0x3de5,	// (0x0002a070) cale_month_pane_g11_ParamLimits

0x3de5,	// (0x0002a070) cale_month_pane_g11

0x3e0f,	// (0x0002a09a) cale_month_pane_g12_ParamLimits

0x3e0f,	// (0x0002a09a) cale_month_pane_g12

0x3e3d,	// (0x0002a0c8) cale_month_pane_g13_ParamLimits

0x3e3d,	// (0x0002a0c8) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0003553a) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0003553a) cale_month_pane_g

0x3e7d,	// (0x0002a108) cale_month_week_pane

0x3e8e,	// (0x0002a119) grid_cale_month_pane_ParamLimits

0x3e8e,	// (0x0002a119) grid_cale_month_pane

0x3ebc,	// (0x0002a147) cale_month_day_heading_pane_t1

0x3f1a,	// (0x0002a1a5) cale_month_day_heading_pane_t2

0x3f7f,	// (0x0002a20a) cale_month_day_heading_pane_t3

0x3fe4,	// (0x0002a26f) cale_month_day_heading_pane_t4

0x4049,	// (0x0002a2d4) cale_month_day_heading_pane_t5

0x40ae,	// (0x0002a339) cale_month_day_heading_pane_t6

0x4113,	// (0x0002a39e) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00035555) cale_month_day_heading_pane_t

0x2e10,	// (0x0002909b) bg_cale_side_pane_cp01

0x4178,	// (0x0002a403) cale_month_week_pane_t1

0x418f,	// (0x0002a41a) cale_month_week_pane_t2

0x41a6,	// (0x0002a431) cale_month_week_pane_t3

0x41bd,	// (0x0002a448) cale_month_week_pane_t4

0x41d4,	// (0x0002a45f) cale_month_week_pane_t5

0x41eb,	// (0x0002a476) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00035564) cale_month_week_pane_t

0x420a,	// (0x0002a495) cell_cale_month_pane_ParamLimits

0x420a,	// (0x0002a495) cell_cale_month_pane

0xb0a1,	// (0x0003132c) cell_cale_month_pane_g1

0x0c95,	// (0x00026f20) cell_cale_month_pane_t1_ParamLimits

0x0c95,	// (0x00026f20) cell_cale_month_pane_t1

0x2e47,	// (0x000290d2) grid_highlight_pane_cp08

0x29ae,	// (0x00028c39) main_smil_g1

0x42e2,	// (0x0002a56d) smil_status_pane

0x42ed,	// (0x0002a578) smil_text_pane

0xbaef,	// (0x00031d7a) bg_popup_call3_rect_pane_g8

0xbaf7,	// (0x00031d82) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0003581d) bg_popup_call3_rect_pane_g

0xbd8c,	// (0x00032017) smil_status_volume_pane_g1

0x4301,	// (0x0002a58c) smil_status_pane_t1

0xbdbf,	// (0x0003204a) volume_smil_pane

0x4318,	// (0x0002a5a3) list_smil_text_pane

0x4322,	// (0x0002a5ad) scroll_pane_cp011

0x432d,	// (0x0002a5b8) smil_text_list_pane_t1_ParamLimits

0x432d,	// (0x0002a5b8) smil_text_list_pane_t1

0xb0ad,	// (0x00031338) aid_volume_smil_ParamLimits

0xb0ad,	// (0x00031338) aid_volume_smil

0x29ae,	// (0x00028c39) smil_volume_pane_g1

0x29ae,	// (0x00028c39) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00035584) smil_volume_pane_g

0x28fd,	// (0x00028b88) listscroll_cale_day_pane

0x4382,	// (0x0002a60d) bg_cale_pane

0x439a,	// (0x0002a625) list_cale_pane

0x43ab,	// (0x0002a636) scroll_pane_cp09

0x43bc,	// (0x0002a647) cale_bg_pane_g1

0x43c4,	// (0x0002a64f) cale_bg_pane_g2

0x43cc,	// (0x0002a657) cale_bg_pane_g3

0x43d4,	// (0x0002a65f) cale_bg_pane_g4

0x43dc,	// (0x0002a667) cale_bg_pane_g5

0x43e4,	// (0x0002a66f) cale_bg_pane_g6

0x43ec,	// (0x0002a677) cale_bg_pane_g7

0x43f4,	// (0x0002a67f) cale_bg_pane_g8

0x43fc,	// (0x0002a687) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00035589) cale_bg_pane_g

0x4404,	// (0x0002a68f) list_cale_time_pane_ParamLimits

0x4404,	// (0x0002a68f) list_cale_time_pane

0x4419,	// (0x0002a6a4) list_cale_time_pane_g1_ParamLimits

0x4419,	// (0x0002a6a4) list_cale_time_pane_g1

0x4425,	// (0x0002a6b0) list_cale_time_pane_g2_ParamLimits

0x4425,	// (0x0002a6b0) list_cale_time_pane_g2

0x4432,	// (0x0002a6bd) list_cale_time_pane_g3_ParamLimits

0x4432,	// (0x0002a6bd) list_cale_time_pane_g3

0x4440,	// (0x0002a6cb) list_cale_time_pane_g4_ParamLimits

0x4440,	// (0x0002a6cb) list_cale_time_pane_g4

0x444e,	// (0x0002a6d9) list_cale_time_pane_g5_ParamLimits

0x444e,	// (0x0002a6d9) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0003559c) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0003559c) list_cale_time_pane_g

0x4469,	// (0x0002a6f4) list_cale_time_pane_t1_ParamLimits

0x4469,	// (0x0002a6f4) list_cale_time_pane_t1

0x4491,	// (0x0002a71c) list_cale_time_pane_t2_ParamLimits

0x4491,	// (0x0002a71c) list_cale_time_pane_t2

0x4c53,	// (0x0002aede) aid_blid_cardinal_pane

0x4ca1,	// (0x0002af2c) compass_pane_t4

0x44b9,	// (0x0002a744) list_cale_time_pane_t4_ParamLimits

0x44b9,	// (0x0002a744) list_cale_time_pane_t4

0x4caf,	// (0x0002af3a) compass_pane_t5

0x4cbf,	// (0x0002af4a) compass_pane_t6

0x4ccd,	// (0x0002af58) compass_pane_t7

0x4d4f,	// (0x0002afda) navi_pane_cc_t1

0x4f6e,	// (0x0002b1f9) aid_phob_thumbnail_center_pane

0x56b2,	// (0x0002b93d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000355a9) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000355a9) list_cale_time_pane_t

0x1fff,	// (0x0002828a) bg_popup_window_pane_cp02_ParamLimits

0x1fff,	// (0x0002828a) bg_popup_window_pane_cp02

0x44e1,	// (0x0002a76c) heading_pane_cp01_ParamLimits

0x44e1,	// (0x0002a76c) heading_pane_cp01

0x44ed,	// (0x0002a778) loc_req_pane_ParamLimits

0x44ed,	// (0x0002a778) loc_req_pane

0x44fd,	// (0x0002a788) loc_type_pane_ParamLimits

0x44fd,	// (0x0002a788) loc_type_pane

0x450f,	// (0x0002a79a) loc_type_pane_t1_ParamLimits

0x450f,	// (0x0002a79a) loc_type_pane_t1

0x4521,	// (0x0002a7ac) loc_type_pane_t2_ParamLimits

0x4521,	// (0x0002a7ac) loc_type_pane_t2

0x4533,	// (0x0002a7be) loc_type_pane_t3_ParamLimits

0x4533,	// (0x0002a7be) loc_type_pane_t3

0x0002,

0xf325,	// (0x000355b0) loc_type_pane_t_ParamLimits

0xf325,	// (0x000355b0) loc_type_pane_t

0x4545,	// (0x0002a7d0) list_loc_req_pane

0x454f,	// (0x0002a7da) scroll_pane_cp012

0x455a,	// (0x0002a7e5) list_single_loc_request_popup_menu_pane_ParamLimits

0x455a,	// (0x0002a7e5) list_single_loc_request_popup_menu_pane

0x4567,	// (0x0002a7f2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4567,	// (0x0002a7f2) list_single_loc_request_popup_menu_pane_g1

0x4573,	// (0x0002a7fe) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4573,	// (0x0002a7fe) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x000355b7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x000355b7) list_single_loc_request_popup_menu_pane_g

0x457f,	// (0x0002a80a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x457f,	// (0x0002a80a) list_single_loc_request_popup_menu_pane_t1

0x2627,	// (0x000288b2) bg_popup_window_pane_cp03_ParamLimits

0x2627,	// (0x000288b2) bg_popup_window_pane_cp03

0x4595,	// (0x0002a820) heading_loc_req_pane_ParamLimits

0x4595,	// (0x0002a820) heading_loc_req_pane

0x45a1,	// (0x0002a82c) popup_dyc_status_message_window_g1_ParamLimits

0x45a1,	// (0x0002a82c) popup_dyc_status_message_window_g1

0x45b5,	// (0x0002a840) popup_dyc_status_message_window_t1_ParamLimits

0x45b5,	// (0x0002a840) popup_dyc_status_message_window_t1

0x45ca,	// (0x0002a855) popup_dyc_status_message_window_t2_ParamLimits

0x45ca,	// (0x0002a855) popup_dyc_status_message_window_t2

0x45df,	// (0x0002a86a) popup_dyc_status_message_window_t3_ParamLimits

0x45df,	// (0x0002a86a) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x000355bc) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x000355bc) popup_dyc_status_message_window_t

0x23cc,	// (0x00028657) bg_heading_pane_cp01

0x45fb,	// (0x0002a886) heading_loc_req_pane_g1

0x4603,	// (0x0002a88e) heading_loc_req_pane_g2

0x460b,	// (0x0002a896) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x000355c3) heading_loc_req_pane_g

0x4613,	// (0x0002a89e) heading_loc_req_pane_t1

0x470c,	// (0x0002a997) bg_popup_sub_pane_cp01_ParamLimits

0x470c,	// (0x0002a997) bg_popup_sub_pane_cp01

0x471a,	// (0x0002a9a5) popup_cale_events_window_g1_ParamLimits

0x471a,	// (0x0002a9a5) popup_cale_events_window_g1

0x473a,	// (0x0002a9c5) popup_cale_events_window_g2_ParamLimits

0x473a,	// (0x0002a9c5) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x000355f7) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x000355f7) popup_cale_events_window_g

0x475a,	// (0x0002a9e5) popup_cale_events_window_t1_ParamLimits

0x475a,	// (0x0002a9e5) popup_cale_events_window_t1

0x476c,	// (0x0002a9f7) popup_cale_events_window_t2_ParamLimits

0x476c,	// (0x0002a9f7) popup_cale_events_window_t2

0x47aa,	// (0x0002aa35) popup_cale_events_window_t3_ParamLimits

0x47aa,	// (0x0002aa35) popup_cale_events_window_t3

0x47e4,	// (0x0002aa6f) popup_cale_events_window_t4_ParamLimits

0x47e4,	// (0x0002aa6f) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x000355fc) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x000355fc) popup_cale_events_window_t

0x481a,	// (0x0002aaa5) call_type_pane

0x482a,	// (0x0002aab5) popup_call_status_window_g1

0x483e,	// (0x0002aac9) popup_call_status_window_g2

0x4852,	// (0x0002aadd) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00035605) popup_call_status_window_g

0x4862,	// (0x0002aaed) call_type_pane_g1

0x486b,	// (0x0002aaf6) call_type_pane_g2

0x0001,

0xf381,	// (0x0003560c) call_type_pane_g

0x23cc,	// (0x00028657) bg_popup_sub_pane_cp02

0x4874,	// (0x0002aaff) listscroll_popup_wml_pane

0x487c,	// (0x0002ab07) list_wml_pane

0x4886,	// (0x0002ab11) scroll_pane_cp013

0x4891,	// (0x0002ab1c) list_single_graphic_popup_wml_pane_ParamLimits

0x4891,	// (0x0002ab1c) list_single_graphic_popup_wml_pane

0x29ae,	// (0x00028c39) list_single_graphic_popup_wml_pane_g1

0x48a5,	// (0x0002ab30) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00035611) list_single_graphic_popup_wml_pane_g

0x48ad,	// (0x0002ab38) list_single_graphic_popup_wml_pane_t1

0x48c3,	// (0x0002ab4e) aid_call_pane

0x261f,	// (0x000288aa) popup_clock_analogue_window_g1

0x261f,	// (0x000288aa) popup_clock_analogue_window_g2

0xb0cf,	// (0x0003135a) popup_clock_analogue_window_g3

0xb0cf,	// (0x0003135a) popup_clock_analogue_window_g4

0x29ae,	// (0x00028c39) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00035616) popup_clock_analogue_window_g

0xb0d7,	// (0x00031362) popup_clock_analogue_window_t1

0xb0e5,	// (0x00031370) clock_digital_number_pane_ParamLimits

0xb0e5,	// (0x00031370) clock_digital_number_pane

0xb0f1,	// (0x0003137c) clock_digital_number_pane_cp02_ParamLimits

0xb0f1,	// (0x0003137c) clock_digital_number_pane_cp02

0xb0fd,	// (0x00031388) clock_digital_number_pane_cp03_ParamLimits

0xb0fd,	// (0x00031388) clock_digital_number_pane_cp03

0xb109,	// (0x00031394) clock_digital_number_pane_cp04_ParamLimits

0xb109,	// (0x00031394) clock_digital_number_pane_cp04

0xb115,	// (0x000313a0) clock_digital_separator_pane_ParamLimits

0xb115,	// (0x000313a0) clock_digital_separator_pane

0xb121,	// (0x000313ac) popup_clock_digital_window_t1

0x29ae,	// (0x00028c39) clock_digital_number_pane_g1

0x29ae,	// (0x00028c39) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00035584) clock_digital_number_pane_g

0x29ae,	// (0x00028c39) clock_digital_separator_pane_g1

0x29ae,	// (0x00028c39) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00035584) clock_digital_separator_pane_g

0x23cc,	// (0x00028657) bg_popup_window_pane_cp04

0x48cb,	// (0x0002ab56) heading_pane_cp03

0x48d3,	// (0x0002ab5e) listscroll_popup_gms_pane

0x48db,	// (0x0002ab66) grid_large_graphic_popup_pane

0x48e5,	// (0x0002ab70) listscroll_popup_gms_pane_g1

0x48ed,	// (0x0002ab78) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00035621) listscroll_popup_gms_pane_g

0x38b3,	// (0x00029b3e) scroll_pane_cp014

0x48f5,	// (0x0002ab80) cell_large_graphic_popup_pane_ParamLimits

0x48f5,	// (0x0002ab80) cell_large_graphic_popup_pane

0x490d,	// (0x0002ab98) cell_large_graphic_popup_pane_g1_ParamLimits

0x490d,	// (0x0002ab98) cell_large_graphic_popup_pane_g1

0x4919,	// (0x0002aba4) cell_large_graphic_popup_pane_g2_ParamLimits

0x4919,	// (0x0002aba4) cell_large_graphic_popup_pane_g2

0x4925,	// (0x0002abb0) cell_large_graphic_popup_pane_g3_ParamLimits

0x4925,	// (0x0002abb0) cell_large_graphic_popup_pane_g3

0x4932,	// (0x0002abbd) cell_large_graphic_popup_pane_g4_ParamLimits

0x4932,	// (0x0002abbd) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00035626) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00035626) cell_large_graphic_popup_pane_g

0x4942,	// (0x0002abcd) grid_highlight_pane_cp010

0x29ae,	// (0x00028c39) bg_popup_call_pane_g1

0x494c,	// (0x0002abd7) list_single_graphic_popup_conf_pane_ParamLimits

0x494c,	// (0x0002abd7) list_single_graphic_popup_conf_pane

0x495e,	// (0x0002abe9) list_highlight_pane_cp01

0x4967,	// (0x0002abf2) list_single_graphic_popup_conf_pane_g1

0x496f,	// (0x0002abfa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0003562f) list_single_graphic_popup_conf_pane_g

0x4977,	// (0x0002ac02) list_single_graphic_popup_conf_pane_t1

0x4985,	// (0x0002ac10) linegrid_cams_pane_g1

0x498e,	// (0x0002ac19) linegrid_cams_pane_g2

0x2ea7,	// (0x00029132) linegrid_cams_pane_g3

0x4997,	// (0x0002ac22) linegrid_cams_pane_g4

0x49a0,	// (0x0002ac2b) linegrid_cams_pane_g5

0x49a9,	// (0x0002ac34) linegrid_cams_pane_g6

0x2eb0,	// (0x0002913b) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00035634) linegrid_cams_pane_g

0x49b4,	// (0x0002ac3f) popup_clock_analogue_window

0x49b4,	// (0x0002ac3f) popup_clock_digital_window

0x23cc,	// (0x00028657) popup_phob_thumbnail_window

0x29ae,	// (0x00028c39) call_video_uplink_pane_g1

0x49bd,	// (0x0002ac48) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00035643) call_video_uplink_pane_g

0x49c5,	// (0x0002ac50) video_uplink_pane

0x49cd,	// (0x0002ac58) mce_image_pane_g1

0x49d7,	// (0x0002ac62) mce_image_pane_g2

0x49e1,	// (0x0002ac6c) mce_image_pane_g3

0x49eb,	// (0x0002ac76) mce_image_pane_g4

0x49f3,	// (0x0002ac7e) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00035648) mce_image_pane_g

0x49fb,	// (0x0002ac86) control_top_pane_stacon_cp01_ParamLimits

0x49fb,	// (0x0002ac86) control_top_pane_stacon_cp01

0x4a0f,	// (0x0002ac9a) uni_indicator_pane_stacon_cp01_ParamLimits

0x4a0f,	// (0x0002ac9a) uni_indicator_pane_stacon_cp01

0x4a20,	// (0x0002acab) bg_popup_sub_pane_cp03

0x4a2a,	// (0x0002acb5) chi_dic_find_pane

0x4a32,	// (0x0002acbd) listscroll_chi_dic_pane

0x4a3b,	// (0x0002acc6) main_pane_chidic_g1

0x4a4e,	// (0x0002acd9) chi_dic_find_pane_t1

0x4a5c,	// (0x0002ace7) find_chidic_pane

0x4a65,	// (0x0002acf0) chi_dic_list_pane_ParamLimits

0x4a65,	// (0x0002acf0) chi_dic_list_pane

0x4a76,	// (0x0002ad01) scroll_pane_cp020

0x4a7e,	// (0x0002ad09) find_chidic_pane_t1

0x23cc,	// (0x00028657) input_focus_pane_cp06

0x4a8d,	// (0x0002ad18) list_chi_dic_pane_ParamLimits

0x4a8d,	// (0x0002ad18) list_chi_dic_pane

0x4a9f,	// (0x0002ad2a) list_chi_dic_pane_t1_ParamLimits

0x4a9f,	// (0x0002ad2a) list_chi_dic_pane_t1

0x23cc,	// (0x00028657) list_highlight_pane_cp020

0x4ab2,	// (0x0002ad3d) bg_cale_heading_pane_g1

0x4aba,	// (0x0002ad45) bg_cale_heading_pane_g2

0x4ac2,	// (0x0002ad4d) bg_cale_heading_pane_g3

0x4aca,	// (0x0002ad55) bg_cale_heading_pane_g4

0x4ad2,	// (0x0002ad5d) bg_cale_heading_pane_g5

0x4ada,	// (0x0002ad65) bg_cale_heading_pane_g6

0x4ae2,	// (0x0002ad6d) bg_cale_heading_pane_g7

0x4aea,	// (0x0002ad75) bg_cale_heading_pane_g8

0x4af2,	// (0x0002ad7d) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00035653) bg_cale_heading_pane_g

0x4ab2,	// (0x0002ad3d) bg_cale_side_pane_g1

0x4afa,	// (0x0002ad85) bg_cale_side_pane_g2

0x4b04,	// (0x0002ad8f) bg_cale_side_pane_g3

0x4b0e,	// (0x0002ad99) bg_cale_side_pane_g4

0x4b18,	// (0x0002ada3) bg_cale_side_pane_g5

0x4b22,	// (0x0002adad) bg_cale_side_pane_g6

0x4b2c,	// (0x0002adb7) bg_cale_side_pane_g7

0x4b36,	// (0x0002adc1) bg_cale_side_pane_g8

0x4b3e,	// (0x0002adc9) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00035666) bg_cale_side_pane_g

0x4b46,	// (0x0002add1) popup_call_status_window_ParamLimits

0x4b46,	// (0x0002add1) popup_call_status_window

0x4b93,	// (0x0002ae1e) stacon_top_pane

0x4b9b,	// (0x0002ae26) status_pane_ParamLimits

0x4b9b,	// (0x0002ae26) status_pane

0x4bb0,	// (0x0002ae3b) status_small_pane

0x4bb8,	// (0x0002ae43) control_pane

0x23cc,	// (0x00028657) stacon_bottom_pane

0x4bc0,	// (0x0002ae4b) list_single_mce_smart_pane_t1_ParamLimits

0x4bc0,	// (0x0002ae4b) list_single_mce_smart_pane_t1

0x4bd3,	// (0x0002ae5e) list_single_mce_smart_pane_t2_ParamLimits

0x4bd3,	// (0x0002ae5e) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00035679) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00035679) list_single_mce_smart_pane_t

0x4bf2,	// (0x0002ae7d) compass_pane

0x4bfd,	// (0x0002ae88) main_location2_pane_t1

0x4c13,	// (0x0002ae9e) main_location2_pane_t2

0x4c29,	// (0x0002aeb4) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0003567e) main_location2_pane_t

0x4c77,	// (0x0002af02) compass_pane_g1_ParamLimits

0x4c77,	// (0x0002af02) compass_pane_g1

0x4c83,	// (0x0002af0e) compass_pane_t1

0x4c92,	// (0x0002af1d) compass_pane_t2

0x0005,

0xf3fc,	// (0x00035687) compass_pane_t

0x4cdd,	// (0x0002af68) text_secondary_cp61

0x4d46,	// (0x0002afd1) navi_pane_cams_g5

0x4dc2,	// (0x0002b04d) navi_pane_im_t1

0x4dd0,	// (0x0002b05b) navi_pane_mp_g1_ParamLimits

0x4dd0,	// (0x0002b05b) navi_pane_mp_g1

0x4de4,	// (0x0002b06f) navi_pane_mp_g2_ParamLimits

0x4de4,	// (0x0002b06f) navi_pane_mp_g2

0x4df0,	// (0x0002b07b) navi_pane_mp_g3_ParamLimits

0x4df0,	// (0x0002b07b) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0003569b) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0003569b) navi_pane_mp_g

0x4dfc,	// (0x0002b087) navi_pane_mp_t1

0x4e0a,	// (0x0002b095) navi_pane_mp_t2

0x0002,

0xf417,	// (0x000356a2) navi_pane_mp_t

0x4eb7,	// (0x0002b142) navi_pane_vt_g1

0x4dfc,	// (0x0002b087) navi_pane_vt_t1

0x4ebf,	// (0x0002b14a) navi_slider_pane

0x4ec7,	// (0x0002b152) zooming_pane

0x4ecf,	// (0x0002b15a) navi_slider_pane_g1

0xb13e,	// (0x000313c9) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x000356a9) navi_slider_pane_g

0x4ef3,	// (0x0002b17e) aid_levels_zoom

0x4efb,	// (0x0002b186) zooming_pane_g1

0x4f03,	// (0x0002b18e) zooming_pane_g2

0x4f03,	// (0x0002b18e) zooming_pane_g3

0x0002,

0xf42d,	// (0x000356b8) zooming_pane_g

0x4f0b,	// (0x0002b196) level_10_zoom

0x4f14,	// (0x0002b19f) level_11_zoom

0x4f1d,	// (0x0002b1a8) level_1_zoom

0x4f26,	// (0x0002b1b1) level_2_zoom

0x4f2f,	// (0x0002b1ba) level_3_zoom

0x4f38,	// (0x0002b1c3) level_4_zoom

0x4f41,	// (0x0002b1cc) level_5_zoom

0x4f4a,	// (0x0002b1d5) level_6_zoom

0x4f53,	// (0x0002b1de) level_7_zoom

0x4f5c,	// (0x0002b1e7) level_8_zoom

0x4f65,	// (0x0002b1f0) level_9_zoom

0x4f76,	// (0x0002b201) popup_phob_thumbnail_window_g1

0x4f7e,	// (0x0002b209) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x000356bf) popup_phob_thumbnail_window_g

0xbc55,	// (0x00031ee0) level_1_location

0xbc5d,	// (0x00031ee8) level_2_location

0xbc65,	// (0x00031ef0) level_3_location

0xbc6d,	// (0x00031ef8) level_4_location

0x4ec7,	// (0x0002b152) level_5_location

0x4f86,	// (0x0002b211) mce_icon_pane_g1

0x4f8e,	// (0x0002b219) mce_icon_pane_g2

0x0001,

0xf439,	// (0x000356c4) mce_icon_pane_g

0x4f96,	// (0x0002b221) main_mup_pane_g1_ParamLimits

0x4f96,	// (0x0002b221) main_mup_pane_g1

0x4fac,	// (0x0002b237) main_mup_pane_g2_ParamLimits

0x4fac,	// (0x0002b237) main_mup_pane_g2

0x4fc4,	// (0x0002b24f) main_mup_pane_g3_ParamLimits

0x4fc4,	// (0x0002b24f) main_mup_pane_g3

0x4fdc,	// (0x0002b267) main_mup_pane_g4_ParamLimits

0x4fdc,	// (0x0002b267) main_mup_pane_g4

0x4fee,	// (0x0002b279) main_mup_pane_g5_ParamLimits

0x4fee,	// (0x0002b279) main_mup_pane_g5

0x500a,	// (0x0002b295) main_mup_pane_g6_ParamLimits

0x500a,	// (0x0002b295) main_mup_pane_g6

0x5024,	// (0x0002b2af) main_mup_pane_g7_ParamLimits

0x5024,	// (0x0002b2af) main_mup_pane_g7

0x5042,	// (0x0002b2cd) main_mup_pane_g8_ParamLimits

0x5042,	// (0x0002b2cd) main_mup_pane_g8

0x5060,	// (0x0002b2eb) main_mup_pane_g9_ParamLimits

0x5060,	// (0x0002b2eb) main_mup_pane_g9

0x507c,	// (0x0002b307) main_mup_pane_g10_ParamLimits

0x507c,	// (0x0002b307) main_mup_pane_g10

0x509a,	// (0x0002b325) main_mup_pane_g11_ParamLimits

0x509a,	// (0x0002b325) main_mup_pane_g11

0x50b4,	// (0x0002b33f) main_mup_pane_g12_ParamLimits

0x50b4,	// (0x0002b33f) main_mup_pane_g12

0x50ca,	// (0x0002b355) main_mup_pane_g13_ParamLimits

0x50ca,	// (0x0002b355) main_mup_pane_g13

0x000c,

0xf43e,	// (0x000356c9) main_mup_pane_g_ParamLimits

0xf43e,	// (0x000356c9) main_mup_pane_g

0x50de,	// (0x0002b369) main_mup_pane_t1_ParamLimits

0x50de,	// (0x0002b369) main_mup_pane_t1

0x50fa,	// (0x0002b385) main_mup_pane_t2_ParamLimits

0x50fa,	// (0x0002b385) main_mup_pane_t2

0x5112,	// (0x0002b39d) main_mup_pane_t3_ParamLimits

0x5112,	// (0x0002b39d) main_mup_pane_t3

0x512a,	// (0x0002b3b5) main_mup_pane_t4_ParamLimits

0x512a,	// (0x0002b3b5) main_mup_pane_t4

0x5148,	// (0x0002b3d3) main_mup_pane_t5_ParamLimits

0x5148,	// (0x0002b3d3) main_mup_pane_t5

0x515d,	// (0x0002b3e8) main_mup_pane_t6_ParamLimits

0x515d,	// (0x0002b3e8) main_mup_pane_t6

0x0005,

0xf459,	// (0x000356e4) main_mup_pane_t_ParamLimits

0xf459,	// (0x000356e4) main_mup_pane_t

0x516f,	// (0x0002b3fa) mup_progress_pane_ParamLimits

0x516f,	// (0x0002b3fa) mup_progress_pane

0x517b,	// (0x0002b406) mup_visualizer_pane_ParamLimits

0x517b,	// (0x0002b406) mup_visualizer_pane

0x51af,	// (0x0002b43a) mup_volume_pane_ParamLimits

0x51af,	// (0x0002b43a) mup_volume_pane

0x51cd,	// (0x0002b458) mup_visualizer_pane_g1_ParamLimits

0x51cd,	// (0x0002b458) mup_visualizer_pane_g1

0x51cd,	// (0x0002b458) mup_visualizer_pane_g2_ParamLimits

0x51cd,	// (0x0002b458) mup_visualizer_pane_g2

0x4c77,	// (0x0002af02) mup_visualizer_pane_g3_ParamLimits

0x4c77,	// (0x0002af02) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x000356f1) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x000356f1) mup_visualizer_pane_g

0x29ae,	// (0x00028c39) mup_volume_pane_g1

0x51e3,	// (0x0002b46e) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x000356f8) mup_volume_pane_g

0x29ae,	// (0x00028c39) mup_progress_pane_g1

0x51ec,	// (0x0002b477) mup_progress_pane_g2

0x51f5,	// (0x0002b480) mup_progress_pane_g3

0x0002,

0xf472,	// (0x000356fd) mup_progress_pane_g

0x23cc,	// (0x00028657) bg_popup_window_pane_cp05

0x51fe,	// (0x0002b489) heading_pane_cp02_ParamLimits

0x51fe,	// (0x0002b489) heading_pane_cp02

0x521a,	// (0x0002b4a5) list_popup_blid_pane

0x5222,	// (0x0002b4ad) list_blid_sat_info_pane_ParamLimits

0x5222,	// (0x0002b4ad) list_blid_sat_info_pane

0x5235,	// (0x0002b4c0) list_blid_sat_info_pane_g1

0x523d,	// (0x0002b4c8) list_blid_sat_info_pane_t1

0x5357,	// (0x0002b5e2) mup_equalizer_pane_ParamLimits

0x5357,	// (0x0002b5e2) mup_equalizer_pane

0x5378,	// (0x0002b603) mup_equalizer_pane_cp1_ParamLimits

0x5378,	// (0x0002b603) mup_equalizer_pane_cp1

0x5399,	// (0x0002b624) mup_equalizer_pane_cp2_ParamLimits

0x5399,	// (0x0002b624) mup_equalizer_pane_cp2

0x53be,	// (0x0002b649) mup_equalizer_pane_cp3_ParamLimits

0x53be,	// (0x0002b649) mup_equalizer_pane_cp3

0x53e7,	// (0x0002b672) mup_equalizer_pane_cp4_ParamLimits

0x53e7,	// (0x0002b672) mup_equalizer_pane_cp4

0x5410,	// (0x0002b69b) mup_equalizer_pane_cp5

0x5428,	// (0x0002b6b3) mup_equalizer_pane_cp6

0x5440,	// (0x0002b6cb) mup_equalizer_pane_cp7

0xbb6f,	// (0x00031dfa) bg_popup_call_poc_act_pane_g9

0xbb77,	// (0x00031e02) bg_popup_call_poc_act_pane_g10

0xbb7f,	// (0x00031e0a) bg_popup_call_poc_act_pane_g11

0x000a,

0x2627,	// (0x000288b2) mup_scale_pane

0x29ae,	// (0x00028c39) mup_scale_pane_g1

0x5458,	// (0x0002b6e3) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00035719) mup_scale_pane_g

0x548e,	// (0x0002b719) msg_data_pane

0x5496,	// (0x0002b721) scroll_pane_cp017

0x549e,	// (0x0002b729) bg_list_pane_cp04_ParamLimits

0x549e,	// (0x0002b729) bg_list_pane_cp04

0x54c6,	// (0x0002b751) msg_data_pane_g1

0x54ce,	// (0x0002b759) msg_data_pane_g2

0x54d8,	// (0x0002b763) msg_data_pane_g3

0x54e2,	// (0x0002b76d) msg_data_pane_g4

0x54ea,	// (0x0002b775) msg_data_pane_g5

0x54f2,	// (0x0002b77d) msg_data_pane_g6

0x54fa,	// (0x0002b785) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00035728) msg_data_pane_g

0x5502,	// (0x0002b78d) msg_text_pane_ParamLimits

0x5502,	// (0x0002b78d) msg_text_pane

0x5531,	// (0x0002b7bc) qrid_highlight_pane_cp011_ParamLimits

0x5531,	// (0x0002b7bc) qrid_highlight_pane_cp011

0x23cc,	// (0x00028657) msg_body_pane

0x23cc,	// (0x00028657) msg_header_pane

0x5550,	// (0x0002b7db) input_focus_pane_cp07

0x5573,	// (0x0002b7fe) msg_header_pane_t1_ParamLimits

0x5573,	// (0x0002b7fe) msg_header_pane_t1

0x5587,	// (0x0002b812) msg_header_pane_t2_ParamLimits

0x5587,	// (0x0002b812) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0003573c) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0003573c) msg_header_pane_t

0x5599,	// (0x0002b824) msg_body_pane_g1

0x55a1,	// (0x0002b82c) msg_body_pane_t1_ParamLimits

0x55a1,	// (0x0002b82c) msg_body_pane_t1

0x55d2,	// (0x0002b85d) msg_body_pane_t2_ParamLimits

0x55d2,	// (0x0002b85d) msg_body_pane_t2

0x55e4,	// (0x0002b86f) msg_body_pane_t3_ParamLimits

0x55e4,	// (0x0002b86f) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00035741) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00035741) msg_body_pane_t

0x0ccd,	// (0x00026f58) main_viewer_pane_g1_ParamLimits

0x0ccd,	// (0x00026f58) main_viewer_pane_g1

0x0cdb,	// (0x00026f66) main_viewer_pane_g2_ParamLimits

0x0cdb,	// (0x00026f66) main_viewer_pane_g2

0x5614,	// (0x0002b89f) main_viewer_pane_g3_ParamLimits

0x5614,	// (0x0002b89f) main_viewer_pane_g3

0x5623,	// (0x0002b8ae) main_viewer_pane_g4_ParamLimits

0x5623,	// (0x0002b8ae) main_viewer_pane_g4

0xb168,	// (0x000313f3) main_viewer_pane_g5_ParamLimits

0xb168,	// (0x000313f3) main_viewer_pane_g5

0xb168,	// (0x000313f3) main_viewer_pane_g7_ParamLimits

0xb168,	// (0x000313f3) main_viewer_pane_g7

0xb17a,	// (0x00031405) main_viewer_pane_g8_ParamLimits

0xb17a,	// (0x00031405) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00035751) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00035751) main_viewer_pane_g

0x5632,	// (0x0002b8bd) viewer_content_pane_ParamLimits

0x5632,	// (0x0002b8bd) viewer_content_pane

0x566f,	// (0x0002b8fa) main_postcard_pane_g1_ParamLimits

0x566f,	// (0x0002b8fa) main_postcard_pane_g1

0x5685,	// (0x0002b910) main_postcard_pane_g2_ParamLimits

0x5685,	// (0x0002b910) main_postcard_pane_g2

0x569b,	// (0x0002b926) main_postcard_pane_g3_ParamLimits

0x569b,	// (0x0002b926) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00035762) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00035762) main_postcard_pane_g

0x56b2,	// (0x0002b93d) main_postcard_pane_g4

0xbd9f,	// (0x0003202a) smil_status_volume_pane_g2

0x56f5,	// (0x0002b980) postcard_pane_ParamLimits

0x56f5,	// (0x0002b980) postcard_pane

0x5745,	// (0x0002b9d0) postcard_pane_g1_ParamLimits

0x5745,	// (0x0002b9d0) postcard_pane_g1

0x5753,	// (0x0002b9de) postcard_pane_g2_ParamLimits

0x5753,	// (0x0002b9de) postcard_pane_g2

0x575f,	// (0x0002b9ea) postcard_pane_g3_ParamLimits

0x575f,	// (0x0002b9ea) postcard_pane_g3

0x576b,	// (0x0002b9f6) postcard_pane_g4_ParamLimits

0x576b,	// (0x0002b9f6) postcard_pane_g4

0x5779,	// (0x0002ba04) postcard_pane_g5_ParamLimits

0x5779,	// (0x0002ba04) postcard_pane_g5

0x578b,	// (0x0002ba16) postcard_pane_g6_ParamLimits

0x578b,	// (0x0002ba16) postcard_pane_g6

0x5745,	// (0x0002b9d0) postcard_pane_g7_ParamLimits

0x5745,	// (0x0002b9d0) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0003576f) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0003576f) postcard_pane_g

0x57a3,	// (0x0002ba2e) main_mp2_pane_g1_ParamLimits

0x57a3,	// (0x0002ba2e) main_mp2_pane_g1

0x57b1,	// (0x0002ba3c) main_mp2_pane_g2_ParamLimits

0x57b1,	// (0x0002ba3c) main_mp2_pane_g2

0x57bd,	// (0x0002ba48) main_mp2_pane_g3_ParamLimits

0x57bd,	// (0x0002ba48) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0003577e) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0003577e) main_mp2_pane_g

0x57c9,	// (0x0002ba54) main_mp2_pane_t1_ParamLimits

0x57c9,	// (0x0002ba54) main_mp2_pane_t1

0x57e0,	// (0x0002ba6b) main_mp2_pane_t2_ParamLimits

0x57e0,	// (0x0002ba6b) main_mp2_pane_t2

0x57f4,	// (0x0002ba7f) main_mp2_pane_t3_ParamLimits

0x57f4,	// (0x0002ba7f) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00035785) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00035785) main_mp2_pane_t

0x5806,	// (0x0002ba91) pec_content_pane_ParamLimits

0x5806,	// (0x0002ba91) pec_content_pane

0x38b3,	// (0x00029b3e) scroll_pane_cp015

0x5818,	// (0x0002baa3) pec_attribute_pane_ParamLimits

0x5818,	// (0x0002baa3) pec_attribute_pane

0x5828,	// (0x0002bab3) pec_content_pane_g1_ParamLimits

0x5828,	// (0x0002bab3) pec_content_pane_g1

0x5834,	// (0x0002babf) pec_content_pane_t1_ParamLimits

0x5834,	// (0x0002babf) pec_content_pane_t1

0x5846,	// (0x0002bad1) pec_content_pane_t2_ParamLimits

0x5846,	// (0x0002bad1) pec_content_pane_t2

0x0001,

0xf501,	// (0x0003578c) pec_content_pane_t_ParamLimits

0xf501,	// (0x0003578c) pec_content_pane_t

0x5858,	// (0x0002bae3) list_single_graphic_pane_cp01_ParamLimits

0x5858,	// (0x0002bae3) list_single_graphic_pane_cp01

0x2627,	// (0x000288b2) bg_popup_sub_pane_cp04

0x5872,	// (0x0002bafd) popup_mup_playback_window_g1

0x587e,	// (0x0002bb09) popup_mup_playback_window_t1

0x5893,	// (0x0002bb1e) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00035791) popup_mup_playback_window_t

0x58e8,	// (0x0002bb73) main_image_pane_g1_ParamLimits

0x58e8,	// (0x0002bb73) main_image_pane_g1

0x59c5,	// (0x0002bc50) scroll_pane_cp018_ParamLimits

0x59c5,	// (0x0002bc50) scroll_pane_cp018

0x59dd,	// (0x0002bc68) scroll_pane_cp016_ParamLimits

0x59dd,	// (0x0002bc68) scroll_pane_cp016

0x5a11,	// (0x0002bc9c) smil2_image_pane_ParamLimits

0x5a11,	// (0x0002bc9c) smil2_image_pane

0x5a47,	// (0x0002bcd2) smil2_root_pane_ParamLimits

0x5a47,	// (0x0002bcd2) smil2_root_pane

0x5a7f,	// (0x0002bd0a) smil2_text_pane_ParamLimits

0x5a7f,	// (0x0002bd0a) smil2_text_pane

0x23cc,	// (0x00028657) bg_list_pane_cp06

0x5b17,	// (0x0002bda2) grid_radio_pane

0x23cc,	// (0x00028657) bg_popup_window_pane_cp06

0x5b21,	// (0x0002bdac) main_fmradio_pane_t1

0x48cb,	// (0x0002ab56) heading_pane_cp04

0x5b2f,	// (0x0002bdba) main_fmradio_pane_t2

0xbb87,	// (0x00031e12) popup_cale_lunar_info_window_g1

0x5b3d,	// (0x0002bdc8) main_fmradio_pane_t3

0xbb8f,	// (0x00031e1a) popup_cale_lunar_info_window_g2

0x5b4d,	// (0x0002bdd8) main_fmradio_pane_t4

0x0001,

0x5b5b,	// (0x0002bde6) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0003586c) popup_cale_lunar_info_window_g

0xf51b,	// (0x000357a6) main_fmradio_pane_t

0x5b69,	// (0x0002bdf4) wait_bar_pane_cp03

0x5b71,	// (0x0002bdfc) cell_fmradio_pane_ParamLimits

0x5b71,	// (0x0002bdfc) cell_fmradio_pane

0x5745,	// (0x0002b9d0) cell_fmradio_pane_g1_ParamLimits

0x5745,	// (0x0002b9d0) cell_fmradio_pane_g1

0x23cc,	// (0x00028657) grid_highlight_pane_cp011

0x5b86,	// (0x0002be11) poc_content_pane_ParamLimits

0x5b86,	// (0x0002be11) poc_content_pane

0x5b98,	// (0x0002be23) scroll_pane_cp019

0x5ba0,	// (0x0002be2b) popup_call_poc_act_window_ParamLimits

0x5ba0,	// (0x0002be2b) popup_call_poc_act_window

0x5bc4,	// (0x0002be4f) popup_call_poc_inact_window_ParamLimits

0x5bc4,	// (0x0002be4f) popup_call_poc_inact_window

0xf5b8,	// (0x00035843) bg_popup_call_poc_act_pane_g

0xbaff,	// (0x00031d8a) bg_popup_call_poc_inact_pane_g1

0xbb07,	// (0x00031d92) bg_popup_call_poc_inact_pane_g2

0x5bdd,	// (0x0002be68) popup_call_poc_act_window_g2

0xbb0f,	// (0x00031d9a) bg_popup_call_poc_inact_pane_g3

0xbb17,	// (0x00031da2) bg_popup_call_poc_inact_pane_g4

0xbb1f,	// (0x00031daa) bg_popup_call_poc_inact_pane_g5

0x5be5,	// (0x0002be70) popup_call_poc_act_window_t1_ParamLimits

0x5be5,	// (0x0002be70) popup_call_poc_act_window_t1

0x5c0d,	// (0x0002be98) popup_call_poc_act_window_t2_ParamLimits

0x5c0d,	// (0x0002be98) popup_call_poc_act_window_t2

0x5c35,	// (0x0002bec0) popup_call_poc_act_window_t3_ParamLimits

0x5c35,	// (0x0002bec0) popup_call_poc_act_window_t3

0x5c5d,	// (0x0002bee8) popup_call_poc_act_window_t4_ParamLimits

0x5c5d,	// (0x0002bee8) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x000357b1) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x000357b1) popup_call_poc_act_window_t

0xbb27,	// (0x00031db2) bg_popup_call_poc_inact_pane_g6

0xbb2f,	// (0x00031dba) bg_popup_call_poc_inact_pane_g7

0xbb37,	// (0x00031dc2) bg_popup_call_poc_inact_pane_g8

0x5c6f,	// (0x0002befa) popup_call_poc_inact_window_g2

0xbb3f,	// (0x00031dca) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00035830) bg_popup_call_poc_inact_pane_g

0x5c77,	// (0x0002bf02) popup_call_poc_inact_window_t1_ParamLimits

0x5c77,	// (0x0002bf02) popup_call_poc_inact_window_t1

0x5c8c,	// (0x0002bf17) popup_call_poc_inact_window_t2_ParamLimits

0x5c8c,	// (0x0002bf17) popup_call_poc_inact_window_t2

0x5ca1,	// (0x0002bf2c) popup_call_poc_inact_window_t3_ParamLimits

0x5ca1,	// (0x0002bf2c) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x000357ba) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x000357ba) popup_call_poc_inact_window_t

0xbcff,	// (0x00031f8a) context_pane_ParamLimits

0x69e5,	// (0x0002cc70) signal_pane_ParamLimits

0x4ec7,	// (0x0002b152) main_call2_pane

0xbced,	// (0x00031f78) popup_phob_thumbnail2_window_ParamLimits

0xbced,	// (0x00031f78) popup_phob_thumbnail2_window

0xb150,	// (0x000313db) aid_hotspot_pointer_arrow_pane

0xb158,	// (0x000313e3) aid_hotspot_pointer_hand_pane

0x64a5,	// (0x0002c730) phob_pre_status_pane_g5

0x2ef6,	// (0x00029181) cams_zoom_pane_ParamLimits

0x2f05,	// (0x00029190) image_vga_pane_ParamLimits

0x2f1f,	// (0x000291aa) main_camera_pane_g1_ParamLimits

0x2f31,	// (0x000291bc) main_camera_pane_g2_ParamLimits

0x2f41,	// (0x000291cc) main_camera_pane_g3_ParamLimits

0x2f55,	// (0x000291e0) main_camera_pane_g4_ParamLimits

0x2f69,	// (0x000291f4) main_camera_pane_g5_ParamLimits

0x2f7d,	// (0x00029208) main_camera_pane_g6_ParamLimits

0x2f91,	// (0x0002921c) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x000354b9) main_camera_pane_g_ParamLimits

0x2fb1,	// (0x0002923c) main_camera_pane_t1_ParamLimits

0x2fc7,	// (0x00029252) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000354ca) main_camera_pane_t_ParamLimits

0x2627,	// (0x000288b2) bg_popup_preview_window_pane_cp01_ParamLimits

0x2627,	// (0x000288b2) bg_popup_preview_window_pane_cp01

0x5cb6,	// (0x0002bf41) popup_phob_thumbnail2_window_g1_ParamLimits

0x5cb6,	// (0x0002bf41) popup_phob_thumbnail2_window_g1

0x23cc,	// (0x00028657) call2_cli_visual_pane

0x5cdd,	// (0x0002bf68) popup_call2_audio_conf_window_ParamLimits

0x5cdd,	// (0x0002bf68) popup_call2_audio_conf_window

0x5d05,	// (0x0002bf90) popup_call2_audio_first_window_ParamLimits

0x5d05,	// (0x0002bf90) popup_call2_audio_first_window

0x5d9b,	// (0x0002c026) popup_call2_audio_in_window_ParamLimits

0x5d9b,	// (0x0002c026) popup_call2_audio_in_window

0x5de7,	// (0x0002c072) popup_call2_audio_out_window_ParamLimits

0x5de7,	// (0x0002c072) popup_call2_audio_out_window

0x5e59,	// (0x0002c0e4) popup_call2_audio_second_window_ParamLimits

0x5e59,	// (0x0002c0e4) popup_call2_audio_second_window

0x5ebf,	// (0x0002c14a) popup_call2_audio_wait_window_ParamLimits

0x5ebf,	// (0x0002c14a) popup_call2_audio_wait_window

0x23cc,	// (0x00028657) bg_popup_call2_act_pane_cp03

0x2609,	// (0x00028894) list_conf_pane_cp

0x5ef9,	// (0x0002c184) popup_call2_audio_conf_window_t1

0x5f07,	// (0x0002c192) list_single_graphic_popup_conf2_pane_ParamLimits

0x5f07,	// (0x0002c192) list_single_graphic_popup_conf2_pane

0x495e,	// (0x0002abe9) list_highlight_pane_cp04

0x5f1a,	// (0x0002c1a5) list_single_graphic_popup_conf2_pane_g1

0x496f,	// (0x0002abfa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x000357c1) list_single_graphic_popup_conf2_pane_g

0x5f24,	// (0x0002c1af) list_single_graphic_popup_conf2_pane_t1

0x5f32,	// (0x0002c1bd) bg_popup_call2_act_pane_cp01_ParamLimits

0x5f32,	// (0x0002c1bd) bg_popup_call2_act_pane_cp01

0x5fbc,	// (0x0002c247) call_type_pane_cp05_ParamLimits

0x5fbc,	// (0x0002c247) call_type_pane_cp05

0x6010,	// (0x0002c29b) popup_call2_audio_second_window_g1_ParamLimits

0x6010,	// (0x0002c29b) popup_call2_audio_second_window_g1

0x6064,	// (0x0002c2ef) popup_call2_audio_second_window_g2_ParamLimits

0x6064,	// (0x0002c2ef) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x000357c6) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x000357c6) popup_call2_audio_second_window_g

0x60c9,	// (0x0002c354) popup_call2_audio_second_window_t1_ParamLimits

0x60c9,	// (0x0002c354) popup_call2_audio_second_window_t1

0x6184,	// (0x0002c40f) popup_call2_audio_second_window_t2_ParamLimits

0x6184,	// (0x0002c40f) popup_call2_audio_second_window_t2

0x61d7,	// (0x0002c462) popup_call2_audio_second_window_t3_ParamLimits

0x61d7,	// (0x0002c462) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x000357cd) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x000357cd) popup_call2_audio_second_window_t

0x23cc,	// (0x00028657) bg_popup_call2_in_pane_cp02

0x23d6,	// (0x00028661) call_type_pane_cp04

0x23de,	// (0x00028669) popup_call2_audio_wait_window_g1

0x23e6,	// (0x00028671) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000353a6) popup_call2_audio_wait_window_g

0x23ee,	// (0x00028679) popup_call2_audio_wait_window_t3

0x62ca,	// (0x0002c555) bg_popup_call2_act_pane_ParamLimits

0x62ca,	// (0x0002c555) bg_popup_call2_act_pane

0xb192,	// (0x0003141d) call_type_pane_cp03_ParamLimits

0xb192,	// (0x0003141d) call_type_pane_cp03

0xb1f6,	// (0x00031481) popup_call2_audio_first_window_g1_ParamLimits

0xb1f6,	// (0x00031481) popup_call2_audio_first_window_g1

0xb266,	// (0x000314f1) popup_call2_audio_first_window_g2_ParamLimits

0xb266,	// (0x000314f1) popup_call2_audio_first_window_g2

0x51cd,	// (0x0002b458) popup_call2_audio_first_window_g3_ParamLimits

0x51cd,	// (0x0002b458) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x000357d6) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x000357d6) popup_call2_audio_first_window_g

0xb344,	// (0x000315cf) popup_call2_audio_first_window_t1_ParamLimits

0xb344,	// (0x000315cf) popup_call2_audio_first_window_t1

0xb447,	// (0x000316d2) popup_call2_audio_first_window_t4_ParamLimits

0xb447,	// (0x000316d2) popup_call2_audio_first_window_t4

0xb52a,	// (0x000317b5) popup_call2_audio_first_window_t5_ParamLimits

0xb52a,	// (0x000317b5) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x000357e1) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x000357e1) popup_call2_audio_first_window_t

0x261f,	// (0x000288aa) bg_popup_call2_act_pane_g1

0xbb99,	// (0x00031e24) popup_cale_lunar_info_window_t1

0xbba7,	// (0x00031e32) popup_cale_lunar_info_window_t2

0xbbb5,	// (0x00031e40) popup_cale_lunar_info_window_t3

0x23cc,	// (0x00028657) bg_popup_call2_bubble_pane

0xb62b,	// (0x000318b6) bg_popup_call2_in_pane_cp01_ParamLimits

0xb62b,	// (0x000318b6) bg_popup_call2_in_pane_cp01

0x2084,	// (0x0002830f) call_type_pane_cp02

0xb673,	// (0x000318fe) popup_call2_audio_out_window_g1_ParamLimits

0xb673,	// (0x000318fe) popup_call2_audio_out_window_g1

0xb69f,	// (0x0003192a) popup_call2_audio_out_window_g2_ParamLimits

0xb69f,	// (0x0003192a) popup_call2_audio_out_window_g2

0xb6c7,	// (0x00031952) popup_call2_audio_out_window_g3_ParamLimits

0xb6c7,	// (0x00031952) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x000357ea) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x000357ea) popup_call2_audio_out_window_g

0xb702,	// (0x0003198d) popup_call2_audio_out_window_t1_ParamLimits

0xb702,	// (0x0003198d) popup_call2_audio_out_window_t1

0xb761,	// (0x000319ec) popup_call2_audio_out_window_t2_ParamLimits

0xb761,	// (0x000319ec) popup_call2_audio_out_window_t2

0xb7b5,	// (0x00031a40) popup_call2_audio_out_window_t3_ParamLimits

0xb7b5,	// (0x00031a40) popup_call2_audio_out_window_t3

0xb7cb,	// (0x00031a56) popup_call2_audio_out_window_t4_ParamLimits

0xb7cb,	// (0x00031a56) popup_call2_audio_out_window_t4

0xb7e1,	// (0x00031a6c) popup_call2_audio_out_window_t5_ParamLimits

0xb7e1,	// (0x00031a6c) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x000357f3) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x000357f3) popup_call2_audio_out_window_t

0xb845,	// (0x00031ad0) bg_popup_call2_in_pane_ParamLimits

0xb845,	// (0x00031ad0) bg_popup_call2_in_pane

0xb8a1,	// (0x00031b2c) popup_call2_audio_in_window_g1_ParamLimits

0xb8a1,	// (0x00031b2c) popup_call2_audio_in_window_g1

0xb8d9,	// (0x00031b64) popup_call2_audio_in_window_g2_ParamLimits

0xb8d9,	// (0x00031b64) popup_call2_audio_in_window_g2

0xb911,	// (0x00031b9c) popup_call2_audio_in_window_g3_ParamLimits

0xb911,	// (0x00031b9c) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00035800) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00035800) popup_call2_audio_in_window_g

0xb969,	// (0x00031bf4) popup_call2_audio_in_window_t1_ParamLimits

0xb969,	// (0x00031bf4) popup_call2_audio_in_window_t1

0xb9e9,	// (0x00031c74) popup_call2_audio_in_window_t2_ParamLimits

0xb9e9,	// (0x00031c74) popup_call2_audio_in_window_t2

0xba69,	// (0x00031cf4) popup_call2_audio_in_window_t3_ParamLimits

0xba69,	// (0x00031cf4) popup_call2_audio_in_window_t3

0xba83,	// (0x00031d0e) popup_call2_audio_in_window_t4_ParamLimits

0xba83,	// (0x00031d0e) popup_call2_audio_in_window_t4

0xba95,	// (0x00031d20) popup_call2_audio_in_window_t5_ParamLimits

0xba95,	// (0x00031d20) popup_call2_audio_in_window_t5

0xbaaa,	// (0x00031d35) popup_call2_audio_in_window_t6_ParamLimits

0xbaaa,	// (0x00031d35) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00035809) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00035809) popup_call2_audio_in_window_t

0x261f,	// (0x000288aa) bg_popup_call2_in_pane_g1

0xbbc3,	// (0x00031e4e) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00035871) popup_cale_lunar_info_window_t

0x2627,	// (0x000288b2) bg_popup_call2_rect_pane_ParamLimits

0x2627,	// (0x000288b2) bg_popup_call2_rect_pane

0x23cc,	// (0x00028657) call2_cli_visual_graphic_pane

0x23cc,	// (0x00028657) call2_cli_visual_text_pane

0xbdb2,	// (0x0003203d) smil_status_volume_pane_g3

0x0002,

0x29ae,	// (0x00028c39) call2_cli_visual_graphic_pane_g1

0x29ae,	// (0x00028c39) call2_cli_visual_graphic_pane_g2

0x29ae,	// (0x00028c39) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00035816) call2_cli_visual_graphic_pane_g

0xbabf,	// (0x00031d4a) bg_popup_call2_rect_pane_g1

0x2ac6,	// (0x00028d51) bg_popup_call2_rect_pane_g2

0xbac7,	// (0x00031d52) bg_popup_call2_rect_pane_g3

0xbacf,	// (0x00031d5a) bg_popup_call2_rect_pane_g4

0xbad7,	// (0x00031d62) bg_popup_call2_rect_pane_g5

0xbadf,	// (0x00031d6a) bg_popup_call2_rect_pane_g6

0xbae7,	// (0x00031d72) bg_popup_call2_rect_pane_g7

0xbaef,	// (0x00031d7a) bg_popup_call2_rect_pane_g8

0xbaf7,	// (0x00031d82) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0003581d) bg_popup_call2_rect_pane_g

0xbaff,	// (0x00031d8a) bg_popup_call2_bubble_pane_g1

0xbb07,	// (0x00031d92) bg_popup_call2_bubble_pane_g2

0xbb0f,	// (0x00031d9a) bg_popup_call2_bubble_pane_g3

0xbb17,	// (0x00031da2) bg_popup_call2_bubble_pane_g4

0xbb1f,	// (0x00031daa) bg_popup_call2_bubble_pane_g5

0xbb27,	// (0x00031db2) bg_popup_call2_bubble_pane_g6

0xbb2f,	// (0x00031dba) bg_popup_call2_bubble_pane_g7

0xbb37,	// (0x00031dc2) bg_popup_call2_bubble_pane_g8

0xbb3f,	// (0x00031dca) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00035830) bg_popup_call2_bubble_pane_g

0x2b4d,	// (0x00028dd8) aid_cale_week_size_cell_pane

0x2fe1,	// (0x0002926c) aid_cams_cif_uncrop_pane_ParamLimits

0x2fe1,	// (0x0002926c) aid_cams_cif_uncrop_pane

0x31d8,	// (0x00029463) aid_cams_size_cell_ParamLimits

0x31d8,	// (0x00029463) aid_cams_size_cell

0x31ec,	// (0x00029477) grid_cams_pane_ParamLimits

0x3206,	// (0x00029491) linegrid_cams_pane_ParamLimits

0x3448,	// (0x000296d3) call_video_pane_t1

0x3462,	// (0x000296ed) call_video_pane_t2

0x0001,

0xf292,	// (0x0003551d) call_video_pane_t

0x3b13,	// (0x00029d9e) aid_cale_month_size_cell_pane_ParamLimits

0x3b13,	// (0x00029d9e) aid_cale_month_size_cell_pane

0xf62f,	// (0x000358ba) smil_status_volume_pane_g

0xbdbf,	// (0x0003204a) volume_smil_pane_ParamLimits

0x1c8b,	// (0x00027f16) aid_popup2_width_pane

0x2a1f,	// (0x00028caa) cell_qdial_pane_g4_ParamLimits

0x2a1f,	// (0x00028caa) cell_qdial_pane_g4

0x4c53,	// (0x0002aede) aid_blid_cardinal_pane_ParamLimits

0x4c63,	// (0x0002aeee) aid_blid_destination_pane_ParamLimits

0x4c63,	// (0x0002aeee) aid_blid_destination_pane

0x2627,	// (0x000288b2) bg_popup_call_poc_act_pane_ParamLimits

0x2627,	// (0x000288b2) bg_popup_call_poc_act_pane

0x2627,	// (0x000288b2) bg_popup_call_poc_inact_pane_ParamLimits

0x2627,	// (0x000288b2) bg_popup_call_poc_inact_pane

0xbb47,	// (0x00031dd2) bg_popup_call_poc_act_pane_g1

0xbb4f,	// (0x00031dda) bg_popup_call_poc_act_pane_g2

0xbb57,	// (0x00031de2) bg_popup_call_poc_act_pane_g3

0xbb17,	// (0x00031da2) bg_popup_call_poc_act_pane_g4

0xbb1f,	// (0x00031daa) bg_popup_call_poc_act_pane_g5

0xbb5f,	// (0x00031dea) bg_popup_call_poc_act_pane_g6

0xbb2f,	// (0x00031dba) bg_popup_call_poc_act_pane_g7

0xbb67,	// (0x00031df2) bg_popup_call_poc_act_pane_g8

0x23cc,	// (0x00028657) main_usb_pane

0xbcc4,	// (0x00031f4f) popup_cale_lunar_info_window

0x378f,	// (0x00029a1a) im_reading_pane_t1_ParamLimits

0x37ce,	// (0x00029a59) list_im_pane_ParamLimits

0x37df,	// (0x00029a6a) scroll_pane_cp07_ParamLimits

0x23cc,	// (0x00028657) grid_highlight_pane_cp012

0x2627,	// (0x000288b2) mup_scale_pane_ParamLimits

0x5745,	// (0x0002b9d0) main_usb_pane_g1_ParamLimits

0x5745,	// (0x0002b9d0) main_usb_pane_g1

0x63b1,	// (0x0002c63c) main_usb_pane_g2_ParamLimits

0x63b1,	// (0x0002c63c) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0003585a) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0003585a) main_usb_pane_g

0x63c7,	// (0x0002c652) main_usb_pane_t1_ParamLimits

0x63c7,	// (0x0002c652) main_usb_pane_t1

0x63d9,	// (0x0002c664) main_usb_pane_t2_ParamLimits

0x63d9,	// (0x0002c664) main_usb_pane_t2

0x63eb,	// (0x0002c676) main_usb_pane_t3_ParamLimits

0x63eb,	// (0x0002c676) main_usb_pane_t3

0x63fd,	// (0x0002c688) main_usb_pane_t4_ParamLimits

0x63fd,	// (0x0002c688) main_usb_pane_t4

0x6412,	// (0x0002c69d) main_usb_pane_t5_ParamLimits

0x6412,	// (0x0002c69d) main_usb_pane_t5

0x6427,	// (0x0002c6b2) main_usb_pane_t6_ParamLimits

0x6427,	// (0x0002c6b2) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0003585f) main_usb_pane_t_ParamLimits

0x4bf2,	// (0x0002ae7d) aid_text_placing

0x4bfd,	// (0x0002ae88) main_location2_pane_t1_ParamLimits

0x4c13,	// (0x0002ae9e) main_location2_pane_t2_ParamLimits

0x4c29,	// (0x0002aeb4) main_location2_pane_t3_ParamLimits

0x4c3f,	// (0x0002aeca) main_location2_pane_t4_ParamLimits

0x4c3f,	// (0x0002aeca) main_location2_pane_t4

0xf3f3,	// (0x0003567e) main_location2_pane_t_ParamLimits

0x2703,	// (0x0002898e) find_pinb_pane_g2_ParamLimits

0x2703,	// (0x0002898e) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000353cc) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000353cc) find_pinb_pane_g

0x270f,	// (0x0002899a) find_pinb_pane_t1_ParamLimits

0x2721,	// (0x000289ac) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000353d1) find_pinb_pane_t_ParamLimits

0x23cc,	// (0x00028657) main_call3_pane

0x3ebc,	// (0x0002a147) cale_month_day_heading_pane_t1_ParamLimits

0x3f1a,	// (0x0002a1a5) cale_month_day_heading_pane_t2_ParamLimits

0x3f7f,	// (0x0002a20a) cale_month_day_heading_pane_t3_ParamLimits

0x3fe4,	// (0x0002a26f) cale_month_day_heading_pane_t4_ParamLimits

0x4049,	// (0x0002a2d4) cale_month_day_heading_pane_t5_ParamLimits

0x40ae,	// (0x0002a339) cale_month_day_heading_pane_t6_ParamLimits

0x4113,	// (0x0002a39e) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00035555) cale_month_day_heading_pane_t_ParamLimits

0x430f,	// (0x0002a59a) smil_status_volume_pane

0x5719,	// (0x0002b9a4) postcard_address_pane_ParamLimits

0x5719,	// (0x0002b9a4) postcard_address_pane

0x572f,	// (0x0002b9ba) postcard_message_pane_ParamLimits

0x572f,	// (0x0002b9ba) postcard_message_pane

0x638a,	// (0x0002c615) call2_cli_visual_pane_t1_ParamLimits

0x638a,	// (0x0002c615) call2_cli_visual_pane_t1

0x6bf6,	// (0x0002ce81) postcard_message_pane_t1_ParamLimits

0x6bf6,	// (0x0002ce81) postcard_message_pane_t1

0xbdd4,	// (0x0003205f) postcard_address_pane_t1_ParamLimits

0xbdd4,	// (0x0003205f) postcard_address_pane_t1

0x6be2,	// (0x0002ce6d) popup_call3_audio_in_window_ParamLimits

0x6be2,	// (0x0002ce6d) popup_call3_audio_in_window

0x6a67,	// (0x0002ccf2) bg_popup_call3_in_pane_ParamLimits

0x6a67,	// (0x0002ccf2) bg_popup_call3_in_pane

0x6ae3,	// (0x0002cd6e) popup_call3_audio_in_window_g1_ParamLimits

0x6ae3,	// (0x0002cd6e) popup_call3_audio_in_window_g1

0x6b03,	// (0x0002cd8e) popup_call3_audio_in_window_g2_ParamLimits

0x6b03,	// (0x0002cd8e) popup_call3_audio_in_window_g2

0x6b23,	// (0x0002cdae) popup_call3_audio_in_window_g3_ParamLimits

0x6b23,	// (0x0002cdae) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x000358c1) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x000358c1) popup_call3_audio_in_window_g

0x6b54,	// (0x0002cddf) popup_call3_audio_in_window_t1_ParamLimits

0x6b54,	// (0x0002cddf) popup_call3_audio_in_window_t1

0x6b92,	// (0x0002ce1d) popup_call3_audio_in_window_t2_ParamLimits

0x6b92,	// (0x0002ce1d) popup_call3_audio_in_window_t2

0x6bd0,	// (0x0002ce5b) popup_call3_audio_in_window_t3_ParamLimits

0x6bd0,	// (0x0002ce5b) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x000358ca) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x000358ca) popup_call3_audio_in_window_t

0x4ec7,	// (0x0002b152) bg_popup_call3_rect_pane

0xbabf,	// (0x00031d4a) bg_popup_call3_rect_pane_g1

0x2ac6,	// (0x00028d51) bg_popup_call3_rect_pane_g2

0xbac7,	// (0x00031d52) bg_popup_call3_rect_pane_g3

0xbacf,	// (0x00031d5a) bg_popup_call3_rect_pane_g4

0xbad7,	// (0x00031d62) bg_popup_call3_rect_pane_g5

0xbadf,	// (0x00031d6a) bg_popup_call3_rect_pane_g6

0xbae7,	// (0x00031d72) bg_popup_call3_rect_pane_g7

0x51c5,	// (0x0002b450) mup_visualizer_osc_pane

0x51db,	// (0x0002b466) mup_visualizer_spec_pane

0x6a97,	// (0x0002cd22) call3_video_qcif_pane_ParamLimits

0x6a97,	// (0x0002cd22) call3_video_qcif_pane

0x6aaa,	// (0x0002cd35) call3_video_qcif_uncrop_pane_ParamLimits

0x6aaa,	// (0x0002cd35) call3_video_qcif_uncrop_pane

0x6aba,	// (0x0002cd45) call3_video_subqcif_pane_ParamLimits

0x6aba,	// (0x0002cd45) call3_video_subqcif_pane

0x6ad0,	// (0x0002cd5b) call3_video_subqcif_uncrop_pane_ParamLimits

0x6ad0,	// (0x0002cd5b) call3_video_subqcif_uncrop_pane

0x6b43,	// (0x0002cdce) popup_call3_audio_in_window_g4_ParamLimits

0x6b43,	// (0x0002cdce) popup_call3_audio_in_window_g4

0x6a56,	// (0x0002cce1) mup_spec_half_pane

0x6a5f,	// (0x0002ccea) mup_spec_half_pane_cp

0xbd72,	// (0x00031ffd) mup_osc_middle_pane

0xbd7b,	// (0x00032006) mup_visualizer_osc_pane_g1

0x6a36,	// (0x0002ccc1) mup_spec_bar_pane_ParamLimits

0x6a36,	// (0x0002ccc1) mup_spec_bar_pane

0xbd5f,	// (0x00031fea) mup_spec_bar_pane_g1

0xbd69,	// (0x00031ff4) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000358b5) mup_spec_bar_pane_g

0x2b4d,	// (0x00028dd8) aid_cale_week_size_cell_pane_ParamLimits

0x2b60,	// (0x00028deb) bg_cale_heading_pane_ParamLimits

0x2b7c,	// (0x00028e07) bg_cale_pane_cp01_ParamLimits

0x2b95,	// (0x00028e20) cale_week_corner_pane_ParamLimits

0x2bab,	// (0x00028e36) cale_week_day_heading_pane_ParamLimits

0x2bc7,	// (0x00028e52) cale_week_scroll_pane_g1_ParamLimits

0x2be0,	// (0x00028e6b) cale_week_scroll_pane_g2_ParamLimits

0x2bf1,	// (0x00028e7c) cale_week_scroll_pane_g3_ParamLimits

0x2c02,	// (0x00028e8d) cale_week_scroll_pane_g4_ParamLimits

0x2c13,	// (0x00028e9e) cale_week_scroll_pane_g5_ParamLimits

0x2c24,	// (0x00028eaf) cale_week_scroll_pane_g6_ParamLimits

0x2c35,	// (0x00028ec0) cale_week_scroll_pane_g7_ParamLimits

0x2c46,	// (0x00028ed1) cale_week_scroll_pane_g8_ParamLimits

0x2c57,	// (0x00028ee2) cale_week_scroll_pane_g9_ParamLimits

0x2c68,	// (0x00028ef3) cale_week_scroll_pane_g10_ParamLimits

0x2c79,	// (0x00028f04) cale_week_scroll_pane_g11_ParamLimits

0x2c8a,	// (0x00028f15) cale_week_scroll_pane_g12_ParamLimits

0x2c9b,	// (0x00028f26) cale_week_scroll_pane_g13_ParamLimits

0x2cb4,	// (0x00028f3f) cale_week_scroll_pane_g14_ParamLimits

0x2ccd,	// (0x00028f58) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0003545d) cale_week_scroll_pane_g_ParamLimits

0x2ce6,	// (0x00028f71) cale_week_time_pane_ParamLimits

0x2cf7,	// (0x00028f82) grid_cale_week_pane_ParamLimits

0x2d12,	// (0x00028f9d) listscroll_cale_week_pane_t1

0x2d24,	// (0x00028faf) scroll_pane_cp08_ParamLimits

0x3b87,	// (0x00029e12) cale_month_corner_pane_ParamLimits

0x3e6b,	// (0x0002a0f6) cale_month_pane_t1

0x3e7d,	// (0x0002a108) cale_month_week_pane_ParamLimits

0x482a,	// (0x0002aab5) popup_call_status_window_g1_ParamLimits

0x483e,	// (0x0002aac9) popup_call_status_window_g2_ParamLimits

0x4852,	// (0x0002aadd) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00035605) popup_call_status_window_g_ParamLimits

0x48bb,	// (0x0002ab46) aid_call2_pane

0x5559,	// (0x0002b7e4) msg_header_pane_g1

0x5719,	// (0x0002b9a4) postcard_address2_pane_ParamLimits

0x5719,	// (0x0002b9a4) postcard_address2_pane

0x572f,	// (0x0002b9ba) postcard_message2_pane_ParamLimits

0x572f,	// (0x0002b9ba) postcard_message2_pane

0x69f3,	// (0x0002cc7e) message2_row_pane_ParamLimits

0x69f3,	// (0x0002cc7e) message2_row_pane

0xbd1a,	// (0x00031fa5) address2_row_pane_ParamLimits

0xbd1a,	// (0x00031fa5) address2_row_pane

0xbd2d,	// (0x00031fb8) postcard_message2_row_pane_g1

0xbd35,	// (0x00031fc0) postcard_message2_row_pane_t1

0xbd2d,	// (0x00031fb8) address2_row_pane_g1

0xbd35,	// (0x00031fc0) address2_row_pane_t1

0x0c83,	// (0x00026f0e) aid_size_cell_vorec

0x23cc,	// (0x00028657) main_rss_pane

0x6a16,	// (0x0002cca1) rss_list_single_pane_ParamLimits

0x6a16,	// (0x0002cca1) rss_list_single_pane

0xbd43,	// (0x00031fce) rss_list_single_pane_t1

0xbd51,	// (0x00031fdc) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x000358b0) rss_list_single_pane_t

0x23cc,	// (0x00028657) main_camera2_pane

0x23cc,	// (0x00028657) main_video2_pane

0x0d3d,	// (0x00026fc8) cams_zoom_pane_cp2_ParamLimits

0x0d3d,	// (0x00026fc8) cams_zoom_pane_cp2

0x0d54,	// (0x00026fdf) image2_vga_pane_ParamLimits

0x0d54,	// (0x00026fdf) image2_vga_pane

0x0d9c,	// (0x00027027) main_camera2_pane_g1_ParamLimits

0x0d9c,	// (0x00027027) main_camera2_pane_g1

0x0dbc,	// (0x00027047) main_camera2_pane_g2_ParamLimits

0x0dbc,	// (0x00027047) main_camera2_pane_g2

0x0dd3,	// (0x0002705e) main_camera2_pane_g3_ParamLimits

0x0dd3,	// (0x0002705e) main_camera2_pane_g3

0x0dea,	// (0x00027075) main_camera2_pane_g4_ParamLimits

0x0dea,	// (0x00027075) main_camera2_pane_g4

0x0e01,	// (0x0002708c) main_camera2_pane_g5_ParamLimits

0x0e01,	// (0x0002708c) main_camera2_pane_g5

0x0e18,	// (0x000270a3) main_camera2_pane_g6_ParamLimits

0x0e18,	// (0x000270a3) main_camera2_pane_g6

0x0e2f,	// (0x000270ba) main_camera2_pane_g7_ParamLimits

0x0e2f,	// (0x000270ba) main_camera2_pane_g7

0x0e46,	// (0x000270d1) main_camera2_pane_g8_ParamLimits

0x0e46,	// (0x000270d1) main_camera2_pane_g8

0x0008,

0xf646,	// (0x000358d1) main_camera2_pane_g_ParamLimits

0xf646,	// (0x000358d1) main_camera2_pane_g

0x0e74,	// (0x000270ff) main_camera2_pane_t1_ParamLimits

0x0e74,	// (0x000270ff) main_camera2_pane_t1

0x0ea9,	// (0x00027134) main_camera2_pane_t2_ParamLimits

0x0ea9,	// (0x00027134) main_camera2_pane_t2

0x0ec6,	// (0x00027151) main_camera2_pane_t3_ParamLimits

0x0ec6,	// (0x00027151) main_camera2_pane_t3

0x0f24,	// (0x000271af) main_camera2_pane_t4_ParamLimits

0x0f24,	// (0x000271af) main_camera2_pane_t4

0x0006,

0xf659,	// (0x000358e4) main_camera2_pane_t_ParamLimits

0xf659,	// (0x000358e4) main_camera2_pane_t

0x0fad,	// (0x00027238) cams_zoom_pane_cp4_ParamLimits

0x0fad,	// (0x00027238) cams_zoom_pane_cp4

0x0fc3,	// (0x0002724e) image2_cif_pane_ParamLimits

0x0fc3,	// (0x0002724e) image2_cif_pane

0x0fee,	// (0x00027279) image2_subqcif_pane_ParamLimits

0x0fee,	// (0x00027279) image2_subqcif_pane

0x1009,	// (0x00027294) main_video2_pane_g1_ParamLimits

0x1009,	// (0x00027294) main_video2_pane_g1

0x1023,	// (0x000272ae) main_video2_pane_g2_ParamLimits

0x1023,	// (0x000272ae) main_video2_pane_g2

0x1039,	// (0x000272c4) main_video2_pane_g3_ParamLimits

0x1039,	// (0x000272c4) main_video2_pane_g3

0x104f,	// (0x000272da) main_video2_pane_g4_ParamLimits

0x104f,	// (0x000272da) main_video2_pane_g4

0x1065,	// (0x000272f0) main_video2_pane_g5_ParamLimits

0x1065,	// (0x000272f0) main_video2_pane_g5

0x107b,	// (0x00027306) main_video2_pane_g6_ParamLimits

0x107b,	// (0x00027306) main_video2_pane_g6

0x0005,

0xf668,	// (0x000358f3) main_video2_pane_g_ParamLimits

0xf668,	// (0x000358f3) main_video2_pane_g

0x1095,	// (0x00027320) main_video2_pane_t1_ParamLimits

0x1095,	// (0x00027320) main_video2_pane_t1

0x10b9,	// (0x00027344) main_video2_pane_t2_ParamLimits

0x10b9,	// (0x00027344) main_video2_pane_t2

0x1109,	// (0x00027394) main_video2_pane_t3_ParamLimits

0x1109,	// (0x00027394) main_video2_pane_t3

0x0002,

0xf675,	// (0x00035900) main_video2_pane_t_ParamLimits

0xf675,	// (0x00035900) main_video2_pane_t

0x64e5,	// (0x0002c770) call_muted_g2

0x0001,

0xf617,	// (0x000358a2) call_muted_g

0x23cc,	// (0x00028657) main_mup2_pane

0x6c11,	// (0x0002ce9c) main_mup2_pane_g1_ParamLimits

0x6c11,	// (0x0002ce9c) main_mup2_pane_g1

0x6c1d,	// (0x0002cea8) main_mup2_pane_g2_ParamLimits

0x6c1d,	// (0x0002cea8) main_mup2_pane_g2

0xbef5,	// (0x00032180) main_mup_pane_g13_cp1

0xbefd,	// (0x00032188) mup_volume_pane_cp1

0x6c3b,	// (0x0002cec6) main_mup2_pane_g4_ParamLimits

0x6c3b,	// (0x0002cec6) main_mup2_pane_g4

0x6c4d,	// (0x0002ced8) main_mup2_pane_g5_ParamLimits

0x6c4d,	// (0x0002ced8) main_mup2_pane_g5

0x6c5f,	// (0x0002ceea) main_mup2_pane_g6_ParamLimits

0x6c5f,	// (0x0002ceea) main_mup2_pane_g6

0x6c71,	// (0x0002cefc) main_mup2_pane_g7_ParamLimits

0x6c71,	// (0x0002cefc) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00035907) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00035907) main_mup2_pane_g

0x6c89,	// (0x0002cf14) main_mup2_pane_t1_ParamLimits

0x6c89,	// (0x0002cf14) main_mup2_pane_t1

0x6c9f,	// (0x0002cf2a) main_mup2_pane_t2_ParamLimits

0x6c9f,	// (0x0002cf2a) main_mup2_pane_t2

0x6cb5,	// (0x0002cf40) main_mup2_pane_t3_ParamLimits

0x6cb5,	// (0x0002cf40) main_mup2_pane_t3

0x6ccb,	// (0x0002cf56) main_mup2_pane_t4_ParamLimits

0x6ccb,	// (0x0002cf56) main_mup2_pane_t4

0x6ce3,	// (0x0002cf6e) main_mup2_pane_t5_ParamLimits

0x6ce3,	// (0x0002cf6e) main_mup2_pane_t5

0x6cfb,	// (0x0002cf86) main_mup2_pane_t6_ParamLimits

0x6cfb,	// (0x0002cf86) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00035916) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00035916) main_mup2_pane_t

0x6d2b,	// (0x0002cfb6) mup2_visualizer_pane_ParamLimits

0x6d2b,	// (0x0002cfb6) mup2_visualizer_pane

0x6d59,	// (0x0002cfe4) mup_progress_pane_cp_ParamLimits

0x6d59,	// (0x0002cfe4) mup_progress_pane_cp

0xbed7,	// (0x00032162) mup_volume_pane_cp_ParamLimits

0xbed7,	// (0x00032162) mup_volume_pane_cp

0x6d6f,	// (0x0002cffa) mup2_visualizer_pane_g1_ParamLimits

0x6d6f,	// (0x0002cffa) mup2_visualizer_pane_g1

0xbe16,	// (0x000320a1) mup2_visualizer_pane_g2_ParamLimits

0xbe16,	// (0x000320a1) mup2_visualizer_pane_g2

0x6d84,	// (0x0002d00f) mup2_visualizer_pane_g3_ParamLimits

0x6d84,	// (0x0002d00f) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00035923) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00035923) mup2_visualizer_pane_g

0x5b0f,	// (0x0002bd9a) aid_size_cell_fmradio

0x6695,	// (0x0002c920) aid_height_parent_landcape

0x389a,	// (0x00029b25) wml_content_pane_cp

0x38a2,	// (0x00029b2d) wml_tabs_pane

0x38ab,	// (0x00029b36) popup_wml_miniature_window

0x38b3,	// (0x00029b3e) scroll_pane_cp021

0x38c7,	// (0x00029b52) wml_content_pane_comp8

0x23cc,	// (0x00028657) bg_popup_sub_pane_cp05

0xbe34,	// (0x000320bf) popup_wml_miniature_window_g1

0xbe3c,	// (0x000320c7) wml_miniature_view_pane

0x6d90,	// (0x0002d01b) aid_size_wml_view

0x6d98,	// (0x0002d023) wml_miniature_view_pane_g1

0x6da1,	// (0x0002d02c) wml_miniature_view_pane_g2

0x6daa,	// (0x0002d035) wml_miniature_view_pane_g3

0x6db2,	// (0x0002d03d) wml_miniature_view_pane_g4

0x6dba,	// (0x0002d045) wml_miniature_view_pane_g5

0x6dc2,	// (0x0002d04d) wml_miniature_view_pane_g6

0x6dca,	// (0x0002d055) wml_miniature_view_pane_g7

0x6dd2,	// (0x0002d05d) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0003592a) wml_miniature_view_pane_g

0xbe44,	// (0x000320cf) background_graphic_ParamLimits

0xbe44,	// (0x000320cf) background_graphic

0xbe50,	// (0x000320db) wml_tabs_2_pane

0xbe59,	// (0x000320e4) wml_tabs_3_pane_ParamLimits

0xbe59,	// (0x000320e4) wml_tabs_3_pane

0xbe6b,	// (0x000320f6) wml_tabs_4_pane_ParamLimits

0xbe6b,	// (0x000320f6) wml_tabs_4_pane

0xbe81,	// (0x0003210c) wml_tabs_5_pane_ParamLimits

0xbe81,	// (0x0003210c) wml_tabs_5_pane

0xbe9b,	// (0x00032126) wml_tabs_pane_g2_ParamLimits

0xbe9b,	// (0x00032126) wml_tabs_pane_g2

0xbeaf,	// (0x0003213a) wml_tabs_pane_g3_ParamLimits

0xbeaf,	// (0x0003213a) wml_tabs_pane_g3

0x6dda,	// (0x0002d065) wml_tabs_2_active_pane_ParamLimits

0x6dda,	// (0x0002d065) wml_tabs_2_active_pane

0x6dee,	// (0x0002d079) wml_tabs_2_passive_pane_ParamLimits

0x6dee,	// (0x0002d079) wml_tabs_2_passive_pane

0x6e02,	// (0x0002d08d) wml_tabs_3_active_pane_cp_ParamLimits

0x6e02,	// (0x0002d08d) wml_tabs_3_active_pane_cp

0x6e17,	// (0x0002d0a2) wml_tabs_3_passive_pane_ParamLimits

0x6e17,	// (0x0002d0a2) wml_tabs_3_passive_pane

0x6e2a,	// (0x0002d0b5) wml_tabs_3_passive_pane_cp_ParamLimits

0x6e2a,	// (0x0002d0b5) wml_tabs_3_passive_pane_cp

0x6e41,	// (0x0002d0cc) tabs_4_active_pane

0x6e49,	// (0x0002d0d4) tabs_4_passive_pane

0x6e53,	// (0x0002d0de) tabs_4_passive_pane_cp

0x6e5b,	// (0x0002d0e6) tabs_4_passive_pane_cp2

0x63a9,	// (0x0002c634) aid_height_text

0x5197,	// (0x0002b422) mup_volume_cont_pane_ParamLimits

0x5197,	// (0x0002b422) mup_volume_cont_pane

0x26bd,	// (0x00028948) aid_size_cell_pinb

0x26c7,	// (0x00028952) aid_size_list_pinb

0x6d45,	// (0x0002cfd0) mup2_volume_cont_pane_ParamLimits

0x6d45,	// (0x0002cfd0) mup2_volume_cont_pane

0xbec3,	// (0x0003214e) mup2_volume_cont_pane_g1_ParamLimits

0xbec3,	// (0x0003214e) mup2_volume_cont_pane_g1

0x1c97,	// (0x00027f22) aid_size_cell_touch_ParamLimits

0x1c97,	// (0x00027f22) aid_size_cell_touch

0x1f0e,	// (0x00028199) touch_pane_ParamLimits

0x1f0e,	// (0x00028199) touch_pane

0x1c79,	// (0x00027f04) main_rss2_pane

0xbf05,	// (0x00032190) listscroll_rss2_pane

0xbf0e,	// (0x00032199) rss2_navigation_pane

0xbf16,	// (0x000321a1) list_rss2_pane

0x4a76,	// (0x0002ad01) scroll_pane_cp22

0xbf1e,	// (0x000321a9) rss2_navigation_pane_g1

0xbf27,	// (0x000321b2) rss2_navigation_pane_g2

0xbf2f,	// (0x000321ba) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0003593b) rss2_navigation_pane_g

0xbf37,	// (0x000321c2) rss2_navigation_pane_t1

0x6e65,	// (0x0002d0f0) rss2_list_single_pane_ParamLimits

0x6e65,	// (0x0002d0f0) rss2_list_single_pane

0xbf45,	// (0x000321d0) rss2_list_single_pane_t2

0xbf53,	// (0x000321de) rss2_list_single_pane_t3_ParamLimits

0xbf53,	// (0x000321de) rss2_list_single_pane_t3

0xbf70,	// (0x000321fb) rss2_list_single_pane_t4

0x42f7,	// (0x0002a582) smil_status_pane_g1

0x1ef4,	// (0x0002817f) main_image2_pane_ParamLimits

0x1ef4,	// (0x0002817f) main_image2_pane

0x0e5d,	// (0x000270e8) main_camera2_pane_g9_ParamLimits

0x0e5d,	// (0x000270e8) main_camera2_pane_g9

0x0f79,	// (0x00027204) main_camera2_pane_t5_ParamLimits

0x0f79,	// (0x00027204) main_camera2_pane_t5

0xbdeb,	// (0x00032076) main_camera2_pane_t6_ParamLimits

0xbdeb,	// (0x00032076) main_camera2_pane_t6

0x6e7f,	// (0x0002d10a) main_image2_pane_g1_ParamLimits

0x6e7f,	// (0x0002d10a) main_image2_pane_g1

0x5ab9,	// (0x0002bd44) smil2_video_pane_ParamLimits

0x5ab9,	// (0x0002bd44) smil2_video_pane

0x1cc7,	// (0x00027f52) aid_zoom_text_primary_cp

0x1eb0,	// (0x0002813b) popup_preview_fixed_window

0x3787,	// (0x00029a12) im_reading_pane_g1

0x0d2f,	// (0x00026fba) cams2_bc_adjust_pane_cp_ParamLimits

0x0d2f,	// (0x00026fba) cams2_bc_adjust_pane_cp

0x0f9f,	// (0x0002722a) cams2_bc_adjust_pane_ParamLimits

0x0f9f,	// (0x0002722a) cams2_bc_adjust_pane

0xbf7e,	// (0x00032209) cams2_bc_adjust_pane_g1

0xbf86,	// (0x00032211) cams2_slider_pane

0xbf8f,	// (0x0003221a) cams2_slider_pane_g1

0xbf98,	// (0x00032223) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00035942) cams2_slider_pane_g

0x0a99,	// (0x00026d24) calc_display_pane_ParamLimits

0x0abf,	// (0x00026d4a) calc_paper_pane_ParamLimits

0x0ae2,	// (0x00026d6d) grid_calc_pane_ParamLimits

0xb121,	// (0x000313ac) popup_clock_digital_window_t1_ParamLimits

0x5936,	// (0x0002bbc1) main_image_pane_t1

0x0a7b,	// (0x00026d06) aid_size_cell_calc_ParamLimits

0x0a7b,	// (0x00026d06) aid_size_cell_calc

0x66db,	// (0x0002c966) popup_blid_sat_info2_window_ParamLimits

0x66db,	// (0x0002c966) popup_blid_sat_info2_window

0xbfba,	// (0x00032245) aid_size_cell_blid

0xbfc2,	// (0x0003224d) bg_popup_window_pane_cp07

0xbfe5,	// (0x00032270) grid_popup_blid_pane

0xbfef,	// (0x0003227a) heading_pane_cp05_ParamLimits

0xbfef,	// (0x0003227a) heading_pane_cp05

0xc0b9,	// (0x00032344) cell_popup_blid_pane_ParamLimits

0xc0b9,	// (0x00032344) cell_popup_blid_pane

0xc0e3,	// (0x0003236e) cell_popup_blid_pane_g1

0xc0eb,	// (0x00032376) cell_popup_blid_pane_t1

0x6d15,	// (0x0002cfa0) mup2_indicator_pane_ParamLimits

0x6d15,	// (0x0002cfa0) mup2_indicator_pane

0x4ec7,	// (0x0002b152) mup2_visualizer_osc_pane

0xbe22,	// (0x000320ad) mup2_visualizer_spec_pane_ParamLimits

0xbe22,	// (0x000320ad) mup2_visualizer_spec_pane

0x6e95,	// (0x0002d120) mup2_spec_half_pane

0x6e9e,	// (0x0002d129) mup2_spec_half_pane_cp

0x6ea6,	// (0x0002d131) mup2_spec_bar_pane_ParamLimits

0x6ea6,	// (0x0002d131) mup2_spec_bar_pane

0xbd5f,	// (0x00031fea) mup2_spec_bar_pane_g1

0xbd69,	// (0x00031ff4) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000358b5) mup2_spec_bar_pane_g

0x6ec6,	// (0x0002d151) mup2_osc_middle_pane

0xbd7b,	// (0x00032006) mup2_visualizer_osc_pane_g1

0x1f80,	// (0x0002820b) popup_number_entry_window_t1_ParamLimits

0x1f93,	// (0x0002821e) popup_number_entry_window_t2_ParamLimits

0x1fa5,	// (0x00028230) popup_number_entry_window_t3_ParamLimits

0x1fb7,	// (0x00028242) popup_number_entry_window_t5_ParamLimits

0x1fb7,	// (0x00028242) popup_number_entry_window_t5

0xf0ec,	// (0x00035377) popup_number_entry_window_t_ParamLimits

0x1fec,	// (0x00028277) text_title_cp2_ParamLimits

0xb160,	// (0x000313eb) aid_hotspot_pointer_text2_pane

0xb186,	// (0x00031411) main_viewer_pane_g9_ParamLimits

0xb186,	// (0x00031411) main_viewer_pane_g9

0x3e6b,	// (0x0002a0f6) cale_month_pane_t1_ParamLimits

0x4382,	// (0x0002a60d) bg_cale_pane_ParamLimits

0x439a,	// (0x0002a625) list_cale_pane_ParamLimits

0x2d12,	// (0x00028f9d) listscroll_cale_day_pane_t1

0x43ab,	// (0x0002a636) scroll_pane_cp09_ParamLimits

0x524b,	// (0x0002b4d6) main_mup_eq_pane_t1_ParamLimits

0x524b,	// (0x0002b4d6) main_mup_eq_pane_t1

0x5267,	// (0x0002b4f2) main_mup_eq_pane_t2_ParamLimits

0x5267,	// (0x0002b4f2) main_mup_eq_pane_t2

0x5283,	// (0x0002b50e) main_mup_eq_pane_t3_ParamLimits

0x5283,	// (0x0002b50e) main_mup_eq_pane_t3

0x52a1,	// (0x0002b52c) main_mup_eq_pane_t4_ParamLimits

0x52a1,	// (0x0002b52c) main_mup_eq_pane_t4

0x52bf,	// (0x0002b54a) main_mup_eq_pane_t5_ParamLimits

0x52bf,	// (0x0002b54a) main_mup_eq_pane_t5

0x52dd,	// (0x0002b568) main_mup_eq_pane_t6_ParamLimits

0x52dd,	// (0x0002b568) main_mup_eq_pane_t6

0x52f3,	// (0x0002b57e) main_mup_eq_pane_t7_ParamLimits

0x52f3,	// (0x0002b57e) main_mup_eq_pane_t7

0x5309,	// (0x0002b594) main_mup_eq_pane_t8_ParamLimits

0x5309,	// (0x0002b594) main_mup_eq_pane_t8

0x531f,	// (0x0002b5aa) main_mup_eq_pane_t9_ParamLimits

0x531f,	// (0x0002b5aa) main_mup_eq_pane_t9

0x533b,	// (0x0002b5c6) main_mup_eq_pane_t10_ParamLimits

0x533b,	// (0x0002b5c6) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00035704) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00035704) main_mup_eq_pane_t

0x5410,	// (0x0002b69b) mup_equalizer_pane_cp5_ParamLimits

0x5428,	// (0x0002b6b3) mup_equalizer_pane_cp6_ParamLimits

0x5440,	// (0x0002b6cb) mup_equalizer_pane_cp7_ParamLimits

0x1c79,	// (0x00027f04) main_gallery_pane

0xbd84,	// (0x0003200f) smil2_volume_pane

0xbd8c,	// (0x00032017) smil_status_volume_pane_g1_ParamLimits

0xbd9f,	// (0x0003202a) smil_status_volume_pane_g2_ParamLimits

0xbdb2,	// (0x0003203d) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x000358ba) smil_status_volume_pane_g_ParamLimits

0xbfc2,	// (0x0003224d) bg_popup_window_pane_cp07_ParamLimits

0xbfd0,	// (0x0003225b) blid_firmament_pane

0x6ecf,	// (0x0002d15a) aid_size_cell_gallery_ParamLimits

0x6ecf,	// (0x0002d15a) aid_size_cell_gallery

0x6ee5,	// (0x0002d170) grid_gallery_pane_ParamLimits

0x6ee5,	// (0x0002d170) grid_gallery_pane

0x6f00,	// (0x0002d18b) cell_gallery_pane_ParamLimits

0x6f00,	// (0x0002d18b) cell_gallery_pane

0xc0f9,	// (0x00032384) bg_cell_gallery_focus_pane_ParamLimits

0xc0f9,	// (0x00032384) bg_cell_gallery_focus_pane

0xc10b,	// (0x00032396) cell_gallery_pane_g1_ParamLimits

0xc10b,	// (0x00032396) cell_gallery_pane_g1

0x6f51,	// (0x0002d1dc) cell_gallery_pane_g2_ParamLimits

0x6f51,	// (0x0002d1dc) cell_gallery_pane_g2

0x6f5e,	// (0x0002d1e9) cell_gallery_pane_g3_ParamLimits

0x6f5e,	// (0x0002d1e9) cell_gallery_pane_g3

0xc117,	// (0x000323a2) cell_gallery_pane_g4_ParamLimits

0xc117,	// (0x000323a2) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00035968) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00035968) cell_gallery_pane_g

0xc123,	// (0x000323ae) bg_cell_gallery_focus_pane_g1

0xc12b,	// (0x000323b6) bg_cell_gallery_focus_pane_g2

0xc133,	// (0x000323be) bg_cell_gallery_focus_pane_g3

0xc13b,	// (0x000323c6) bg_cell_gallery_focus_pane_g4

0xc143,	// (0x000323ce) bg_cell_gallery_focus_pane_g5

0xc14b,	// (0x000323d6) bg_cell_gallery_focus_pane_g6

0xc153,	// (0x000323de) bg_cell_gallery_focus_pane_g7

0xc15b,	// (0x000323e6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00035971) bg_cell_gallery_focus_pane_g

0xc163,	// (0x000323ee) aid_firma_cardinal

0xc177,	// (0x00032402) blid_firmament_pane_t1

0xc18e,	// (0x00032419) blid_firmament_pane_t2

0xc1a5,	// (0x00032430) blid_firmament_pane_t3

0xc1bc,	// (0x00032447) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00035982) blid_firmament_pane_t

0xc1d3,	// (0x0003245e) blid_sat_info_pane

0xc1e3,	// (0x0003246e) blid_sat_info_pane_g1

0xc1e3,	// (0x0003246e) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0003598b) blid_sat_info_pane_g

0xc1ed,	// (0x00032478) blid_sat_info_pane_t1

0xc1fb,	// (0x00032486) smil2_volume_content_pane

0xc204,	// (0x0003248f) smil2_volume_pane_g1

0xc20c,	// (0x00032497) smil2_volume_content_pane_g1

0xc215,	// (0x000324a0) smil2_volume_content_pane_g2

0xc21e,	// (0x000324a9) smil2_volume_content_pane_g3

0xc227,	// (0x000324b2) smil2_volume_content_pane_g4

0xc230,	// (0x000324bb) smil2_volume_content_pane_g5

0xc239,	// (0x000324c4) smil2_volume_content_pane_g6

0xc242,	// (0x000324cd) smil2_volume_content_pane_g7

0xc24b,	// (0x000324d6) smil2_volume_content_pane_g8

0xc254,	// (0x000324df) smil2_volume_content_pane_g9

0xc25d,	// (0x000324e8) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00035990) smil2_volume_content_pane_g

0x2d84,	// (0x0002900f) cale_week_day_heading_pane_t1_ParamLimits

0x2d98,	// (0x00029023) cale_week_day_heading_pane_t2_ParamLimits

0x2dac,	// (0x00029037) cale_week_day_heading_pane_t3_ParamLimits

0x2dc0,	// (0x0002904b) cale_week_day_heading_pane_t4_ParamLimits

0x2dd4,	// (0x0002905f) cale_week_day_heading_pane_t5_ParamLimits

0x2de8,	// (0x00029073) cale_week_day_heading_pane_t6_ParamLimits

0x2dfc,	// (0x00029087) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0003547c) cale_week_day_heading_pane_t_ParamLimits

0x2e10,	// (0x0002909b) bg_cale_side_pane_ParamLimits

0x0bb7,	// (0x00026e42) cale_week_time_pane_t1_ParamLimits

0x0bcf,	// (0x00026e5a) cale_week_time_pane_t2_ParamLimits

0x0be7,	// (0x00026e72) cale_week_time_pane_t3_ParamLimits

0x0bff,	// (0x00026e8a) cale_week_time_pane_t4_ParamLimits

0x0c17,	// (0x00026ea2) cale_week_time_pane_t5_ParamLimits

0x0c2f,	// (0x00026eba) cale_week_time_pane_t6_ParamLimits

0x0c47,	// (0x00026ed2) cale_week_time_pane_t7_ParamLimits

0x0c63,	// (0x00026eee) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0003548b) cale_week_time_pane_t_ParamLimits

0x2e1e,	// (0x000290a9) cell_cale_week_pane_g2_ParamLimits

0x2e10,	// (0x0002909b) bg_cale_side_pane_cp01_ParamLimits

0x4178,	// (0x0002a403) cale_month_week_pane_t1_ParamLimits

0x418f,	// (0x0002a41a) cale_month_week_pane_t2_ParamLimits

0x41a6,	// (0x0002a431) cale_month_week_pane_t3_ParamLimits

0x41bd,	// (0x0002a448) cale_month_week_pane_t4_ParamLimits

0x41d4,	// (0x0002a45f) cale_month_week_pane_t5_ParamLimits

0x41eb,	// (0x0002a476) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00035564) cale_month_week_pane_t_ParamLimits

0xb0a1,	// (0x0003132c) cell_cale_month_pane_g1_ParamLimits

0x1c79,	// (0x00027f04) main_cale_event_viewer_pane

0x1c79,	// (0x00027f04) listscroll_cale_event_viewer_pane

0xc266,	// (0x000324f1) list_cale_ev_pane

0xc26e,	// (0x000324f9) scroll_pane_cp023

0x6f6b,	// (0x0002d1f6) field_cale_ev_pane_ParamLimits

0x6f6b,	// (0x0002d1f6) field_cale_ev_pane

0xc27a,	// (0x00032505) field_cale_ev_content_pane_ParamLimits

0xc27a,	// (0x00032505) field_cale_ev_content_pane

0xc286,	// (0x00032511) field_cale_ev_pane_g1_ParamLimits

0xc286,	// (0x00032511) field_cale_ev_pane_g1

0xc292,	// (0x0003251d) field_cale_ev_pane_g2_ParamLimits

0xc292,	// (0x0003251d) field_cale_ev_pane_g2

0xc2aa,	// (0x00032535) field_cale_ev_pane_g3_ParamLimits

0xc2aa,	// (0x00032535) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x000359a5) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x000359a5) field_cale_ev_pane_g

0xc2c2,	// (0x0003254d) field_cale_ev_pane_t1_ParamLimits

0xc2c2,	// (0x0003254d) field_cale_ev_pane_t1

0x6f8f,	// (0x0002d21a) field_cale_ev_content_pane_t1_ParamLimits

0x6f8f,	// (0x0002d21a) field_cale_ev_content_pane_t1

0x5547,	// (0x0002b7d2) bg_button_pane_cp01

0x28fd,	// (0x00028b88) listscroll_cale_week_pane_ParamLimits

0x2b43,	// (0x00028dce) popup_toolbar_window_cp01

0x2d12,	// (0x00028f9d) listscroll_cale_week_pane_t1_ParamLimits

0x28fd,	// (0x00028b88) listscroll_cale_day_pane_ParamLimits

0x4378,	// (0x0002a603) popup_toolbar_window_cp02

0x2d12,	// (0x00028f9d) listscroll_cale_day_pane_t1_ParamLimits

0x28fd,	// (0x00028b88) main_cale_month_pane_ParamLimits

0x695b,	// (0x0002cbe6) popup_toolbar_window_cp03_ParamLimits

0x695b,	// (0x0002cbe6) popup_toolbar_window_cp03

0x5914,	// (0x0002bb9f) main_image_pane_g2_ParamLimits

0x5914,	// (0x0002bb9f) main_image_pane_g2

0x5925,	// (0x0002bbb0) main_image_pane_g3_ParamLimits

0x5925,	// (0x0002bbb0) main_image_pane_g3

0x0002,

0xf50b,	// (0x00035796) main_image_pane_g_ParamLimits

0xf50b,	// (0x00035796) main_image_pane_g

0x5936,	// (0x0002bbc1) main_image_pane_t1_ParamLimits

0x594d,	// (0x0002bbd8) main_image_pane_t2_ParamLimits

0x594d,	// (0x0002bbd8) main_image_pane_t2

0x595f,	// (0x0002bbea) main_image_pane_t3_ParamLimits

0x595f,	// (0x0002bbea) main_image_pane_t3

0x5987,	// (0x0002bc12) main_image_pane_t4_ParamLimits

0x5987,	// (0x0002bc12) main_image_pane_t4

0x0003,

0xf512,	// (0x0003579d) main_image_pane_t_ParamLimits

0xf512,	// (0x0003579d) main_image_pane_t

0x59a7,	// (0x0002bc32) popup_image_details_window_cp01

0x59b1,	// (0x0002bc3c) popup_toobar_trans_pane_cp01_ParamLimits

0x59b1,	// (0x0002bc3c) popup_toobar_trans_pane_cp01

0x67ce,	// (0x0002ca59) popup_image_details_window_ParamLimits

0x67ce,	// (0x0002ca59) popup_image_details_window

0xbcd0,	// (0x00031f5b) popup_image_focus_window

0x0ce9,	// (0x00026f74) camera2_autofocus_pane_ParamLimits

0x0ce9,	// (0x00026f74) camera2_autofocus_pane

0x1c79,	// (0x00027f04) bg_popup_sub_pane_cp06

0xc2d9,	// (0x00032564) popup_image_focus_window_g1

0xc2e1,	// (0x0003256c) popup_image_focus_window_g2

0xc2e9,	// (0x00032574) popup_image_focus_window_g3

0xc2f1,	// (0x0003257c) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x000359ac) popup_image_focus_window_g

0xc2f9,	// (0x00032584) popup_image_focus_window_t1

0xc307,	// (0x00032592) popup_image_focus_window_t2

0xc317,	// (0x000325a2) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x000359b5) popup_image_focus_window_t

0xc325,	// (0x000325b0) camera2_autofocus_pane_g1

0x1ef4,	// (0x0002817f) bg_tb_trans_pane_cp01

0xc333,	// (0x000325be) popup_image_details_window_g1

0xc346,	// (0x000325d1) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x000359c7) popup_image_details_window_g

0xc36f,	// (0x000325fa) popup_image_details_window_t1

0xc381,	// (0x0003260c) popup_image_details_window_t2

0xc39a,	// (0x00032625) popup_image_details_window_t3

0xc3ae,	// (0x00032639) popup_image_details_window_t4

0xc3c9,	// (0x00032654) popup_image_details_window_t5

0x0004,

0xf743,	// (0x000359ce) popup_image_details_window_t

0x28e9,	// (0x00028b74) bg_calc_paper_pane_ParamLimits

0xaf9d,	// (0x00031228) grid_highlight_pane_cp013

0xafa7,	// (0x00031232) list_calc_pane_ParamLimits

0xafb9,	// (0x00031244) scroll_pane_cp024

0x28fd,	// (0x00028b88) bg_calc_display_pane_ParamLimits

0x0b10,	// (0x00026d9b) calc_display_pane_t1_ParamLimits

0x0b22,	// (0x00026dad) calc_display_pane_t2_ParamLimits

0xafc1,	// (0x0003124c) calc_display_pane_t3_ParamLimits

0xf173,	// (0x000353fe) calc_display_pane_t_ParamLimits

0x0b89,	// (0x00026e14) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0003541b) cell_calc_pane_g

0x0b92,	// (0x00026e1d) cell_calc_pane_t1

0x29b8,	// (0x00028c43) grid_highlight_pane_cp02_ParamLimits

0x29ce,	// (0x00028c59) toolbar_button_pane_cp01_ParamLimits

0x29ce,	// (0x00028c59) toolbar_button_pane_cp01

0x59f3,	// (0x0002bc7e) temp_image_control_pane_ParamLimits

0x59f3,	// (0x0002bc7e) temp_image_control_pane

0x1ef4,	// (0x0002817f) main_mp3_pane

0xc3e3,	// (0x0003266e) temp_image_control_pane_g1_ParamLimits

0xc3e3,	// (0x0003266e) temp_image_control_pane_g1

0xc3f1,	// (0x0003267c) temp_image_control_pane_g2_ParamLimits

0xc3f1,	// (0x0003267c) temp_image_control_pane_g2

0xc403,	// (0x0003268e) temp_image_control_pane_g3_ParamLimits

0xc403,	// (0x0003268e) temp_image_control_pane_g3

0x6fe0,	// (0x0002d26b) temp_image_control_pane_g4_ParamLimits

0x6fe0,	// (0x0002d26b) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x000359d9) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x000359d9) temp_image_control_pane_g

0xc3e3,	// (0x0003266e) main_mp3_pane_g1

0x6ff3,	// (0x0002d27e) main_mp3_pane_g2

0x0007,

0xf757,	// (0x000359e2) main_mp3_pane_g

0xc446,	// (0x000326d1) main_mp3_pane_t1

0x2fa5,	// (0x00029230) main_camera_pane_g8_ParamLimits

0x2fa5,	// (0x00029230) main_camera_pane_g8

0x315a,	// (0x000293e5) main_video_pane_g7_ParamLimits

0x315a,	// (0x000293e5) main_video_pane_g7

0xbe04,	// (0x0003208f) main_camera2_pane_t7_ParamLimits

0xbe04,	// (0x0003208f) main_camera2_pane_t7

0x385a,	// (0x00029ae5) scroll_pane_cp025_ParamLimits

0x385a,	// (0x00029ae5) scroll_pane_cp025

0x386e,	// (0x00029af9) scroll_pane_cp026_ParamLimits

0x386e,	// (0x00029af9) scroll_pane_cp026

0x387d,	// (0x00029b08) wml_content_pane_ParamLimits

0x1c79,	// (0x00027f04) main_touch_calib_pane

0x70bb,	// (0x0002d346) main_touch_calib_pane_g1

0x70c7,	// (0x0002d352) main_touch_calib_pane_g2

0x70d3,	// (0x0002d35e) main_touch_calib_pane_g3

0x70df,	// (0x0002d36a) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00035a00) main_touch_calib_pane_g

0x70eb,	// (0x0002d376) main_touch_calib_pane_t1

0x7105,	// (0x0002d390) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00035a09) main_touch_calib_pane_t

0x4d3e,	// (0x0002afc9) mup_progress_pane_cp02

0x4d5d,	// (0x0002afe8) navi_pane_g1

0x4e18,	// (0x0002b0a3) navi_pane_mp_t3

0x1ef4,	// (0x0002817f) main_mp3_pane_ParamLimits

0x699d,	// (0x0002cc28) navi_pane_ParamLimits

0xc3e3,	// (0x0003266e) main_mp3_pane_g1_ParamLimits

0x6ff3,	// (0x0002d27e) main_mp3_pane_g2_ParamLimits

0x6fff,	// (0x0002d28a) main_mp3_pane_g3_ParamLimits

0x6fff,	// (0x0002d28a) main_mp3_pane_g3

0x700d,	// (0x0002d298) main_mp3_pane_g4_ParamLimits

0x700d,	// (0x0002d298) main_mp3_pane_g4

0xc413,	// (0x0003269e) main_mp3_pane_g5_ParamLimits

0xc413,	// (0x0003269e) main_mp3_pane_g5

0xc421,	// (0x000326ac) main_mp3_pane_g6_ParamLimits

0xc421,	// (0x000326ac) main_mp3_pane_g6

0xc42e,	// (0x000326b9) main_mp3_pane_g7_ParamLimits

0xc42e,	// (0x000326b9) main_mp3_pane_g7

0xc43a,	// (0x000326c5) main_mp3_pane_g8_ParamLimits

0xc43a,	// (0x000326c5) main_mp3_pane_g8

0xf757,	// (0x000359e2) main_mp3_pane_g_ParamLimits

0x7019,	// (0x0002d2a4) main_mp3_pane_t2

0x7027,	// (0x0002d2b2) main_mp3_pane_t3

0xc454,	// (0x000326df) main_mp3_pane_t4

0xc462,	// (0x000326ed) main_mp3_pane_t5

0x0005,

0xf768,	// (0x000359f3) main_mp3_pane_t

0xc470,	// (0x000326fb) mup_progress_pane_cp01

0x1cc7,	// (0x00027f52) aid_zoom_text_secondary2

0xc266,	// (0x000324f1) list_cale_ev2_pane

0xc26e,	// (0x000324f9) scroll_pane_cp023_ParamLimits

0x715d,	// (0x0002d3e8) field_cale_ev2_pane_ParamLimits

0x715d,	// (0x0002d3e8) field_cale_ev2_pane

0xc478,	// (0x00032703) field_cale_ev2_pane_g1_ParamLimits

0xc478,	// (0x00032703) field_cale_ev2_pane_g1

0xc484,	// (0x0003270f) field_cale_ev2_pane_g2_ParamLimits

0xc484,	// (0x0003270f) field_cale_ev2_pane_g2

0xc49c,	// (0x00032727) field_cale_ev2_pane_g3_ParamLimits

0xc49c,	// (0x00032727) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00035a14) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00035a14) field_cale_ev2_pane_g

0xc4c0,	// (0x0003274b) field_cale_ev2_pane_t1_ParamLimits

0xc4c0,	// (0x0003274b) field_cale_ev2_pane_t1

0xc4d7,	// (0x00032762) field_cale_ev2_pane_t2_ParamLimits

0xc4d7,	// (0x00032762) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00035a1d) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00035a1d) field_cale_ev2_pane_t

0x56c9,	// (0x0002b954) main_postcard_pane_g5_ParamLimits

0x56c9,	// (0x0002b954) main_postcard_pane_g5

0x56df,	// (0x0002b96a) main_postcard_pane_g6_ParamLimits

0x56df,	// (0x0002b96a) main_postcard_pane_g6

0x2ee0,	// (0x0002916b) camera2_autofocus_pane_cp_ParamLimits

0x2ee0,	// (0x0002916b) camera2_autofocus_pane_cp

0x1ef4,	// (0x0002817f) main_mup3_pane

0x71a1,	// (0x0002d42c) main_mup3_pane_g1_ParamLimits

0x71a1,	// (0x0002d42c) main_mup3_pane_g1

0x71c3,	// (0x0002d44e) main_mup3_pane_g2_ParamLimits

0x71c3,	// (0x0002d44e) main_mup3_pane_g2

0x7246,	// (0x0002d4d1) main_mup3_pane_g3_ParamLimits

0x7246,	// (0x0002d4d1) main_mup3_pane_g3

0x728a,	// (0x0002d515) main_mup3_pane_g4_ParamLimits

0x728a,	// (0x0002d515) main_mup3_pane_g4

0x72ce,	// (0x0002d559) main_mup3_pane_g5_ParamLimits

0x72ce,	// (0x0002d559) main_mup3_pane_g5

0x7312,	// (0x0002d59d) main_mup3_pane_g6_ParamLimits

0x7312,	// (0x0002d59d) main_mup3_pane_g6

0xc4ec,	// (0x00032777) main_mup3_pane_g7_ParamLimits

0xc4ec,	// (0x00032777) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00035a2d) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00035a2d) main_mup3_pane_g

0x738e,	// (0x0002d619) main_mup3_pane_t1_ParamLimits

0x738e,	// (0x0002d619) main_mup3_pane_t1

0x7408,	// (0x0002d693) main_mup3_pane_t2_ParamLimits

0x7408,	// (0x0002d693) main_mup3_pane_t2

0x74e2,	// (0x0002d76d) main_mup3_pane_t4_ParamLimits

0x74e2,	// (0x0002d76d) main_mup3_pane_t4

0x7540,	// (0x0002d7cb) main_mup3_pane_t5_ParamLimits

0x7540,	// (0x0002d7cb) main_mup3_pane_t5

0x75f8,	// (0x0002d883) main_mup3_pane_t6_ParamLimits

0x75f8,	// (0x0002d883) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x00035a3e) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x00035a3e) main_mup3_pane_t

0x76ae,	// (0x0002d939) mup3_progress_pane_ParamLimits

0x76ae,	// (0x0002d939) mup3_progress_pane

0x7732,	// (0x0002d9bd) popup_mup3_control_window_ParamLimits

0x7732,	// (0x0002d9bd) popup_mup3_control_window

0xc4fa,	// (0x00032785) popup_mup3_text_window

0x7768,	// (0x0002d9f3) mup3_progress_pane_t1

0x777f,	// (0x0002da0a) mup3_progress_pane_t2

0xc502,	// (0x0003278d) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00035a4b) mup3_progress_pane_t

0xc519,	// (0x000327a4) mup_progress_pane_cp03

0x1c79,	// (0x00027f04) bg_tb_trans_pane_cp04

0x7796,	// (0x0002da21) mup3_volume_pane

0x779e,	// (0x0002da29) popup_mup3_control_window_g1

0x77a7,	// (0x0002da32) mup3_volume_pane_g1

0x77b0,	// (0x0002da3b) mup3_volume_pane_g2

0x77b9,	// (0x0002da44) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00035a52) mup3_volume_pane_g

0x1c79,	// (0x00027f04) bg_tb_trans_pane_cp03

0xc529,	// (0x000327b4) popup_mup3_text_window_g1

0xc531,	// (0x000327bc) popup_mup3_text_window_t1

0x29a1,	// (0x00028c2c) list_calc_item_pane_g1_ParamLimits

0xbeec,	// (0x00032177) mup_volume_pane_cp_g1

0x711f,	// (0x0002d3aa) main_touch_calib_pane_t3

0x7133,	// (0x0002d3be) main_touch_calib_pane_t4

0x7147,	// (0x0002d3d2) main_touch_calib_pane_t5

0x1c83,	// (0x00027f0e) aid_cell_size_toolbar2

0x1c8b,	// (0x00027f16) aid_popup3_width_pane

0x1cc7,	// (0x00027f52) aid_zoom_text_msg_primary

0xb08b,	// (0x00031316) vorec_t7

0x2909,	// (0x00028b94) bg_calc_paper_pane_g1_ParamLimits

0x2915,	// (0x00028ba0) bg_calc_paper_pane_g2_ParamLimits

0x2921,	// (0x00028bac) bg_calc_paper_pane_g3_ParamLimits

0x292d,	// (0x00028bb8) bg_calc_paper_pane_g4_ParamLimits

0x2939,	// (0x00028bc4) bg_calc_paper_pane_g5_ParamLimits

0x2945,	// (0x00028bd0) bg_calc_paper_pane_g6_ParamLimits

0x2958,	// (0x00028be3) bg_calc_paper_pane_g7_ParamLimits

0x296b,	// (0x00028bf6) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00035405) bg_calc_paper_pane_g_ParamLimits

0x297c,	// (0x00028c07) calc_bg_paper_pane_g9_ParamLimits

0x304e,	// (0x000292d9) image_qvga_pane_ParamLimits

0x304e,	// (0x000292d9) image_qvga_pane

0x2627,	// (0x000288b2) bg_popup_sub_pane_cp04_ParamLimits

0x5872,	// (0x0002bafd) popup_mup_playback_window_g1_ParamLimits

0x587e,	// (0x0002bb09) popup_mup_playback_window_t1_ParamLimits

0x5893,	// (0x0002bb1e) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00035791) popup_mup_playback_window_t_ParamLimits

0x6c2d,	// (0x0002ceb8) main_mup2_pane_g3_ParamLimits

0x6c2d,	// (0x0002ceb8) main_mup2_pane_g3

0x34e9,	// (0x00029774) popup_toolbar_window_cp04

0x60b8,	// (0x0002c343) popup_call2_audio_second_window_g3_ParamLimits

0x60b8,	// (0x0002c343) popup_call2_audio_second_window_g3

0xb2ca,	// (0x00031555) popup_call2_audio_first_window_g4_ParamLimits

0xb2ca,	// (0x00031555) popup_call2_audio_first_window_g4

0xb949,	// (0x00031bd4) popup_call2_audio_in_window_g4_ParamLimits

0xb949,	// (0x00031bd4) popup_call2_audio_in_window_g4

0x58a8,	// (0x0002bb33) aid_area_sk_bg_cut_ParamLimits

0x58a8,	// (0x0002bb33) aid_area_sk_bg_cut

0x58c6,	// (0x0002bb51) aid_area_sk_bg_cut_2_ParamLimits

0x58c6,	// (0x0002bb51) aid_area_sk_bg_cut_2

0x6f41,	// (0x0002d1cc) aid_placing_details_win

0x6f49,	// (0x0002d1d4) aid_placing_details_win_2

0xc325,	// (0x000325b0) camera2_autofocus_pane_g1_ParamLimits

0x1e95,	// (0x00028120) popup_fixed_preview_cale_window_ParamLimits

0x1e95,	// (0x00028120) popup_fixed_preview_cale_window

0x4ed8,	// (0x0002b163) navi_slider_pane_g3

0x4ee1,	// (0x0002b16c) navi_slider_pane_g4

0x4eea,	// (0x0002b175) navi_slider_pane_g5

0x4ed8,	// (0x0002b163) navi_slider_pane_g6

0xb147,	// (0x000313d2) navi_slider_pane_g7

0x5461,	// (0x0002b6ec) mup_scale_pane_g3

0x546a,	// (0x0002b6f5) mup_scale_pane_g4

0x5473,	// (0x0002b6fe) mup_scale_pane_g5

0x547c,	// (0x0002b707) mup_scale_pane_g6

0x5485,	// (0x0002b710) mup_scale_pane_g7

0x4ed8,	// (0x0002b163) cams2_slider_pane_g3

0xbfa1,	// (0x0003222c) cams2_slider_pane_g4

0xbfa9,	// (0x00032234) cams2_slider_pane_g5

0x4ed8,	// (0x0002b163) cams2_slider_pane_g6

0xbfb1,	// (0x0003223c) cams2_slider_pane_g7

0xc1e3,	// (0x0003246e) camera2_autofocus_pane_cp_g1

0xc53f,	// (0x000327ca) bg_popup_preview_window_pane_cp02_ParamLimits

0xc53f,	// (0x000327ca) bg_popup_preview_window_pane_cp02

0xc54b,	// (0x000327d6) list_fp_cale_pane_ParamLimits

0xc54b,	// (0x000327d6) list_fp_cale_pane

0xc557,	// (0x000327e2) popup_fixed_preview_cale_window_t1_ParamLimits

0xc557,	// (0x000327e2) popup_fixed_preview_cale_window_t1

0x77c2,	// (0x0002da4d) popup_fixed_preview_cale_window_t2_ParamLimits

0x77c2,	// (0x0002da4d) popup_fixed_preview_cale_window_t2

0x77d7,	// (0x0002da62) popup_fixed_preview_cale_window_t3_ParamLimits

0x77d7,	// (0x0002da62) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00035a59) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00035a59) popup_fixed_preview_cale_window_t

0x77ee,	// (0x0002da79) list_single_fp_cale_pane_ParamLimits

0x77ee,	// (0x0002da79) list_single_fp_cale_pane

0xc575,	// (0x00032800) list_single_fp_cale_pane_g1_ParamLimits

0xc575,	// (0x00032800) list_single_fp_cale_pane_g1

0xc581,	// (0x0003280c) list_single_fp_cale_pane_g2_ParamLimits

0xc581,	// (0x0003280c) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00035a60) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00035a60) list_single_fp_cale_pane_g

0xc59a,	// (0x00032825) list_single_fp_cale_pane_t1_ParamLimits

0xc59a,	// (0x00032825) list_single_fp_cale_pane_t1

0xc5ac,	// (0x00032837) list_single_fp_cale_pane_t2_ParamLimits

0xc5ac,	// (0x00032837) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00035a67) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00035a67) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1c79,	// (0x00027f04) main_dialer_pane

0x7806,	// (0x0002da91) aid_cell_size_keypad

0x7810,	// (0x0002da9b) dialer_ne_pane

0x781a,	// (0x0002daa5) grid_dialer_command_1_pane

0x7822,	// (0x0002daad) grid_dialer_command_2_pane

0x782a,	// (0x0002dab5) grid_dialer_keypad_pane

0x783e,	// (0x0002dac9) bg_popup_call_pane_cp06_ParamLimits

0x783e,	// (0x0002dac9) bg_popup_call_pane_cp06

0x784a,	// (0x0002dad5) dialer_ne_clear_pane_ParamLimits

0x784a,	// (0x0002dad5) dialer_ne_clear_pane

0xc5df,	// (0x0003286a) dialer_ne_pane_g1

0xc5e7,	// (0x00032872) dialer_ne_pane_t1_ParamLimits

0xc5e7,	// (0x00032872) dialer_ne_pane_t1

0x7856,	// (0x0002dae1) dialer_ne_pane_t2_ParamLimits

0x7856,	// (0x0002dae1) dialer_ne_pane_t2

0x7880,	// (0x0002db0b) dialer_ne_pane_t3_ParamLimits

0x7880,	// (0x0002db0b) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00035a6c) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00035a6c) dialer_ne_pane_t

0x78b0,	// (0x0002db3b) dialer_ne_pane_t3_copy1_ParamLimits

0x78b0,	// (0x0002db3b) dialer_ne_pane_t3_copy1

0x78df,	// (0x0002db6a) cell_dialer_keypad_pane_ParamLimits

0x78df,	// (0x0002db6a) cell_dialer_keypad_pane

0x78f6,	// (0x0002db81) cell_dialer_command_1_pane_ParamLimits

0x78f6,	// (0x0002db81) cell_dialer_command_1_pane

0x790c,	// (0x0002db97) cell_dialer_command_2_pane_ParamLimits

0x790c,	// (0x0002db97) cell_dialer_command_2_pane

0xc5f9,	// (0x00032884) bg_button_pane_cp02_ParamLimits

0xc5f9,	// (0x00032884) bg_button_pane_cp02

0x791b,	// (0x0002dba6) cell_dialer_keypad_pane_g1_ParamLimits

0x791b,	// (0x0002dba6) cell_dialer_keypad_pane_g1

0xc5f9,	// (0x00032884) bg_button_pane_cp03_ParamLimits

0xc5f9,	// (0x00032884) bg_button_pane_cp03

0x7930,	// (0x0002dbbb) cell_dialer_command_1_pane_g1_ParamLimits

0x7930,	// (0x0002dbbb) cell_dialer_command_1_pane_g1

0xc605,	// (0x00032890) bg_button_pane_cp04

0x7944,	// (0x0002dbcf) cell_dialer_command_2_pane_g1

0x4ec7,	// (0x0002b152) bg_button_pane_cp06

0xc60d,	// (0x00032898) dialer_ne_clear_pane_g1

0x4d69,	// (0x0002aff4) navi_pane_g2

0x4d97,	// (0x0002b022) navi_pane_g3

0x0002,

0xf409,	// (0x00035694) navi_pane_g

0x4e26,	// (0x0002b0b1) navi_pane_mv_g2

0x4e4d,	// (0x0002b0d8) navi_pane_mv_g5

0x4e55,	// (0x0002b0e0) navi_pane_mv_t1

0x28fd,	// (0x00028b88) main_clock2_pane

0x7981,	// (0x0002dc0c) main_clock2_list_pane_ParamLimits

0x7981,	// (0x0002dc0c) main_clock2_list_pane

0x79b9,	// (0x0002dc44) main_clock2_pane_t1_ParamLimits

0x79b9,	// (0x0002dc44) main_clock2_pane_t1

0x79f5,	// (0x0002dc80) main_clock2_pane_t2_ParamLimits

0x79f5,	// (0x0002dc80) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00035a73) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00035a73) main_clock2_pane_t

0x7a81,	// (0x0002dd0c) popup_clock_analogue_window_cp03_ParamLimits

0x7a81,	// (0x0002dd0c) popup_clock_analogue_window_cp03

0x7aa8,	// (0x0002dd33) popup_clock_digital_window_cp02_ParamLimits

0x7aa8,	// (0x0002dd33) popup_clock_digital_window_cp02

0x7b21,	// (0x0002ddac) main_clock2_list_single_pane_ParamLimits

0x7b21,	// (0x0002ddac) main_clock2_list_single_pane

0x4ec7,	// (0x0002b152) list_highlight_pane_cp05

0xc615,	// (0x000328a0) main_clock2_list_single_pane_t1

0x34e9,	// (0x00029774) popup_toolbar_window_cp04_ParamLimits

0x6fb0,	// (0x0002d23b) camera2_autofocus_pane_g2_ParamLimits

0x6fb0,	// (0x0002d23b) camera2_autofocus_pane_g2

0x6fbc,	// (0x0002d247) camera2_autofocus_pane_g3_ParamLimits

0x6fbc,	// (0x0002d247) camera2_autofocus_pane_g3

0x6fc8,	// (0x0002d253) camera2_autofocus_pane_g4_ParamLimits

0x6fc8,	// (0x0002d253) camera2_autofocus_pane_g4

0x6fd4,	// (0x0002d25f) camera2_autofocus_pane_g5_ParamLimits

0x6fd4,	// (0x0002d25f) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x000359bc) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x000359bc) camera2_autofocus_pane_g

0x7181,	// (0x0002d40c) camera2_autofocus_pane_cp_g2

0x7189,	// (0x0002d414) camera2_autofocus_pane_cp_g3

0x7191,	// (0x0002d41c) camera2_autofocus_pane_cp_g4

0x7199,	// (0x0002d424) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00035a22) camera2_autofocus_pane_cp_g

0x7836,	// (0x0002dac1) popup_dialer_spcha_window

0x1c79,	// (0x00027f04) bg_popup_sub_pane_cp07

0xc623,	// (0x000328ae) list_spcha_pane

0xc62b,	// (0x000328b6) list_single_spcha_pane_ParamLimits

0xc62b,	// (0x000328b6) list_single_spcha_pane

0x1c79,	// (0x00027f04) list_highlight_pane_cp06

0xc63c,	// (0x000328c7) list_single_spcha_pane_t1

0xb6f3,	// (0x0003197e) popup_call2_audio_out_window_g4_ParamLimits

0xb6f3,	// (0x0003197e) popup_call2_audio_out_window_g4

0x1c79,	// (0x00027f04) main_imed2_pane

0xbcda,	// (0x00031f65) popup_imed_adjust2_window

0x67e6,	// (0x0002ca71) popup_imed_trans_window_ParamLimits

0x67e6,	// (0x0002ca71) popup_imed_trans_window

0xc01b,	// (0x000322a6) popup_blid_sat_info2_window_t1

0xc029,	// (0x000322b4) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00035951) popup_blid_sat_info2_window_t

0x7b55,	// (0x0002dde0) aid_size_cell_colour_35

0x7b75,	// (0x0002de00) aid_size_cell_colour_112

0x7b95,	// (0x0002de20) aid_size_cell_effect

0xbcae,	// (0x00031f39) bg_tb_trans_pane_cp02

0x44e1,	// (0x0002a76c) heading_imed_pane

0x7bb5,	// (0x0002de40) listscroll_imed_pane

0xc64a,	// (0x000328d5) heading_imed_pane_g1

0xc652,	// (0x000328dd) heading_imed_pane_t1

0xc660,	// (0x000328eb) grid_imed_colour_35_pane_ParamLimits

0xc660,	// (0x000328eb) grid_imed_colour_35_pane

0x7bc1,	// (0x0002de4c) grid_imed_effect_pane

0xc67c,	// (0x00032907) list_imed_aspect_pane

0x7bd8,	// (0x0002de63) scroll_pane_cp027_ParamLimits

0x7bd8,	// (0x0002de63) scroll_pane_cp027

0x7be9,	// (0x0002de74) cell_imed_effect_pane_ParamLimits

0x7be9,	// (0x0002de74) cell_imed_effect_pane

0xc684,	// (0x0003290f) cell_imed_colour_pane_ParamLimits

0xc684,	// (0x0003290f) cell_imed_colour_pane

0xc6ce,	// (0x00032959) cell_imed_colour_pane_g1_ParamLimits

0xc6ce,	// (0x00032959) cell_imed_colour_pane_g1

0xc6df,	// (0x0003296a) hgihlgiht_grid_pane_cp016_ParamLimits

0xc6df,	// (0x0003296a) hgihlgiht_grid_pane_cp016

0x7c0e,	// (0x0002de99) cell_imed_effect_pane_g1

0x7c16,	// (0x0002dea1) grid_highlight_pane_cp017

0xc6f0,	// (0x0003297b) list_imed_single_pane_ParamLimits

0xc6f0,	// (0x0003297b) list_imed_single_pane

0x1c79,	// (0x00027f04) list_highlight_pane_cp07

0xc704,	// (0x0003298f) list_imed_aspect_pane_comp1_t1

0xbcae,	// (0x00031f39) bg_tb_trans_pane_cp05

0xc726,	// (0x000329b1) popup_imed_adjust2_window_g1

0xc74d,	// (0x000329d8) popup_imed_adjust2_window_t1

0xc765,	// (0x000329f0) slider_imed_adjust_pane

0xc779,	// (0x00032a04) slider_imed_adjust_pane_g1

0xc789,	// (0x00032a14) slider_imed_adjust_pane_g2

0xc799,	// (0x00032a24) slider_imed_adjust_pane_g3

0xc7aa,	// (0x00032a35) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00035a90) slider_imed_adjust_pane_g

0x7c1f,	// (0x0002deaa) aid_size_cell_clipart2

0x7c2b,	// (0x0002deb6) grid_imed_clipart_pane

0xc7bb,	// (0x00032a46) scroll_pane_cp031

0x7c35,	// (0x0002dec0) cell_imed_clipart_pane_ParamLimits

0x7c35,	// (0x0002dec0) cell_imed_clipart_pane

0x7c52,	// (0x0002dedd) cell_imed_clipart_pane_g1

0x1c79,	// (0x00027f04) grid_highlight_pane_cp014

0x7996,	// (0x0002dc21) main_clock2_pane_g1_ParamLimits

0x7996,	// (0x0002dc21) main_clock2_pane_g1

0x7ac8,	// (0x0002dd53) aid_call2_pane_cp10

0x7ada,	// (0x0002dd65) aid_call_pane_cp10

0x4c77,	// (0x0002af02) popup_clock_analogue_window_cp10_g1

0x4c77,	// (0x0002af02) popup_clock_analogue_window_cp10_g2

0x7aec,	// (0x0002dd77) popup_clock_analogue_window_cp10_g3

0x7aec,	// (0x0002dd77) popup_clock_analogue_window_cp10_g4

0x4c77,	// (0x0002af02) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00035a7e) popup_clock_analogue_window_cp10_g

0x7b02,	// (0x0002dd8d) popup_clock_analogue_window_cp10_t1

0x1151,	// (0x000273dc) clock_digital_number_pane_cp10_ParamLimits

0x1151,	// (0x000273dc) clock_digital_number_pane_cp10

0x116b,	// (0x000273f6) clock_digital_number_pane_cp11_ParamLimits

0x116b,	// (0x000273f6) clock_digital_number_pane_cp11

0x1185,	// (0x00027410) clock_digital_number_pane_cp12_ParamLimits

0x1185,	// (0x00027410) clock_digital_number_pane_cp12

0x119f,	// (0x0002742a) clock_digital_number_pane_cp13_ParamLimits

0x119f,	// (0x0002742a) clock_digital_number_pane_cp13

0x11b9,	// (0x00027444) clock_digital_separator_pane_cp10_ParamLimits

0x11b9,	// (0x00027444) clock_digital_separator_pane_cp10

0x7b33,	// (0x0002ddbe) popup_clock_digital_window_cp02_t1_ParamLimits

0x7b33,	// (0x0002ddbe) popup_clock_digital_window_cp02_t1

0x261f,	// (0x000288aa) clock_digital_number_pane_cp10_g1

0x261f,	// (0x000288aa) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00035a99) clock_digital_number_pane_cp10_g

0x261f,	// (0x000288aa) clock_digital_separator_pane_cp10_g1

0x261f,	// (0x000288aa) clock_digital_separator_pane_g2_cp10

0x4e97,	// (0x0002b122) navi_pane_vded_g4

0x4ea0,	// (0x0002b12b) navi_pane_vded_g5

0x4ea9,	// (0x0002b134) navi_pane_vded_t1

0x1c79,	// (0x00027f04) main_vded_pane

0x7c5b,	// (0x0002dee6) main_vded_pane_g1

0x7c67,	// (0x0002def2) main_vded_pane_g2

0x7c73,	// (0x0002defe) main_vded_pane_g3

0x0002,

0xf813,	// (0x00035a9e) main_vded_pane_g

0x7c7f,	// (0x0002df0a) main_vded_pane_t1

0x7c8d,	// (0x0002df18) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00035aa5) main_vded_pane_t

0x7c9b,	// (0x0002df26) vded_slider_pane

0x7ca5,	// (0x0002df30) vded_video_pane

0xc7c3,	// (0x00032a4e) vded_video_pane_g1

0x7cb1,	// (0x0002df3c) vded_video_pane_g2

0xc1e3,	// (0x0003246e) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00035aaa) vded_video_pane_g

0xc7cd,	// (0x00032a58) vded_slider_pane_g1

0xbeec,	// (0x00032177) vded_slider_pane_g2

0xc7d6,	// (0x00032a61) vded_slider_pane_g3

0xc7df,	// (0x00032a6a) vded_slider_pane_g4

0xc7e8,	// (0x00032a73) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00035ab1) vded_slider_pane_g

0x771c,	// (0x0002d9a7) mup3_rocker_pane_ParamLimits

0x771c,	// (0x0002d9a7) mup3_rocker_pane

0x7cba,	// (0x0002df45) mup3_control_keys_pane_g1

0x7cc2,	// (0x0002df4d) mup3_control_keys_pane_g2

0x7cca,	// (0x0002df55) mup3_control_keys_pane_g3

0x7cd2,	// (0x0002df5d) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00035abc) mup3_control_keys_pane_g

0x1ed6,	// (0x00028161) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1ed6,	// (0x00028161) popup_toolbar2_fixed_window_cp01

0x7752,	// (0x0002d9dd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7752,	// (0x0002d9dd) popup_toolbar2_fixed_window_cp02

0x622a,	// (0x0002c4b5) popup_call2_audio_second_window_t4_ParamLimits

0x622a,	// (0x0002c4b5) popup_call2_audio_second_window_t4

0xb560,	// (0x000317eb) popup_call2_audio_first_window_t6_ParamLimits

0xb560,	// (0x000317eb) popup_call2_audio_first_window_t6

0xb7f6,	// (0x00031a81) popup_call2_audio_out_window_t6_ParamLimits

0xb7f6,	// (0x00031a81) popup_call2_audio_out_window_t6

0x1c79,	// (0x00027f04) main_vitu_pane

0x7ce2,	// (0x0002df6d) aid_size_cell_itu_ParamLimits

0x7ce2,	// (0x0002df6d) aid_size_cell_itu

0x1ef4,	// (0x0002817f) bg_popup_window_pane_cp08_ParamLimits

0x1ef4,	// (0x0002817f) bg_popup_window_pane_cp08

0x7cf8,	// (0x0002df83) field_vitu_entry_pane_ParamLimits

0x7cf8,	// (0x0002df83) field_vitu_entry_pane

0x7d0f,	// (0x0002df9a) grid_vitu_function_pane_ParamLimits

0x7d0f,	// (0x0002df9a) grid_vitu_function_pane

0x7d2a,	// (0x0002dfb5) grid_vitu_itu_pane_ParamLimits

0x7d2a,	// (0x0002dfb5) grid_vitu_itu_pane

0x7d48,	// (0x0002dfd3) cell_vitu_itu_pane_ParamLimits

0x7d48,	// (0x0002dfd3) cell_vitu_itu_pane

0x7d6e,	// (0x0002dff9) cell_vitu_function_pane_ParamLimits

0x7d6e,	// (0x0002dff9) cell_vitu_function_pane

0x1ef4,	// (0x0002817f) bg_popup_sub_pane_cp08_ParamLimits

0x1ef4,	// (0x0002817f) bg_popup_sub_pane_cp08

0x7d89,	// (0x0002e014) field_vitu_entry_pane_t1_ParamLimits

0x7d89,	// (0x0002e014) field_vitu_entry_pane_t1

0xc809,	// (0x00032a94) field_vitu_entry_pane_t2_ParamLimits

0xc809,	// (0x00032a94) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00035aca) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00035aca) field_vitu_entry_pane_t

0xc826,	// (0x00032ab1) bg_button_pane_cp05_ParamLimits

0xc826,	// (0x00032ab1) bg_button_pane_cp05

0x7da9,	// (0x0002e034) cell_vitu_itu_pane_g1

0x7dc1,	// (0x0002e04c) cell_vitu_itu_pane_t1_ParamLimits

0x7dc1,	// (0x0002e04c) cell_vitu_itu_pane_t1

0x7dd3,	// (0x0002e05e) cell_vitu_itu_pane_t2_ParamLimits

0x7dd3,	// (0x0002e05e) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00035acf) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00035acf) cell_vitu_itu_pane_t

0xc834,	// (0x00032abf) bg_button_pane_cp07

0x7e08,	// (0x0002e093) cell_vitu_function_pane_g1

0xaf95,	// (0x00031220) main_calc_pane_g1

0x1cbb,	// (0x00027f46) aid_visual_content_pane

0x1c79,	// (0x00027f04) main_vradio_pane

0x7e11,	// (0x0002e09c) main_vradio_pane_g1_ParamLimits

0x7e11,	// (0x0002e09c) main_vradio_pane_g1

0xc83e,	// (0x00032ac9) main_vradio_pane_g2_ParamLimits

0xc83e,	// (0x00032ac9) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00035ad6) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00035ad6) main_vradio_pane_g

0x7e28,	// (0x0002e0b3) main_vradio_pane_t1_ParamLimits

0x7e28,	// (0x0002e0b3) main_vradio_pane_t1

0x7e3d,	// (0x0002e0c8) main_vradio_pane_t2_ParamLimits

0x7e3d,	// (0x0002e0c8) main_vradio_pane_t2

0xc84b,	// (0x00032ad6) main_vradio_pane_t3_ParamLimits

0xc84b,	// (0x00032ad6) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00035adb) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00035adb) main_vradio_pane_t

0x7e52,	// (0x0002e0dd) vradio_rocker_control_pane_ParamLimits

0x7e52,	// (0x0002e0dd) vradio_rocker_control_pane

0x7e64,	// (0x0002e0ef) vradio_station_info_pane_ParamLimits

0x7e64,	// (0x0002e0ef) vradio_station_info_pane

0xc85f,	// (0x00032aea) vradio_frequency_info_pane_ParamLimits

0xc85f,	// (0x00032aea) vradio_frequency_info_pane

0xc1e3,	// (0x0003246e) vradio_station_info_pane_g1

0xc86e,	// (0x00032af9) vradio_station_info_pane_t1_ParamLimits

0xc86e,	// (0x00032af9) vradio_station_info_pane_t1

0xc890,	// (0x00032b1b) vradio_station_info_pane_t2_ParamLimits

0xc890,	// (0x00032b1b) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00035ae2) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00035ae2) vradio_station_info_pane_t

0xc8a2,	// (0x00032b2d) vradio_tuning_pane

0xc8aa,	// (0x00032b35) vradio_rocker_control_pane_g1

0xc8b2,	// (0x00032b3d) vradio_rocker_control_pane_g2

0xc8ba,	// (0x00032b45) vradio_rocker_control_pane_g3

0xc8c2,	// (0x00032b4d) vradio_rocker_control_pane_g4

0xc8ca,	// (0x00032b55) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00035ae7) vradio_rocker_control_pane_g

0x7e74,	// (0x0002e0ff) vradio_frequency_info_pane_g1

0xc8d2,	// (0x00032b5d) vradio_frequency_info_pane_t1_ParamLimits

0xc8d2,	// (0x00032b5d) vradio_frequency_info_pane_t1

0x7e7e,	// (0x0002e109) vradio_tuning_pane_g1

0x7e89,	// (0x0002e114) vradio_tuning_pane_t1

0x1d10,	// (0x00027f9b) area_side_right_pane_ParamLimits

0x1d10,	// (0x00027f9b) area_side_right_pane

0xbc75,	// (0x00031f00) status_small_pane_g1

0xbc7d,	// (0x00031f08) status_small_pane_g2

0xbc86,	// (0x00031f11) status_small_pane_g3

0xbc8f,	// (0x00031f1a) status_small_pane_g4

0x0003,

0xf61c,	// (0x000358a7) status_small_pane_g

0xbc98,	// (0x00031f23) status_small_pane_t1

0x1c79,	// (0x00027f04) main_video3_pane

0xc8e6,	// (0x00032b71) cams_zoom_vslider_pane

0xc8ee,	// (0x00032b79) image3_wide_pane_ParamLimits

0xc8ee,	// (0x00032b79) image3_wide_pane

0xc908,	// (0x00032b93) image3_wide_small_pane

0xc914,	// (0x00032b9f) main_video3_pane_g1_ParamLimits

0xc914,	// (0x00032b9f) main_video3_pane_g1

0xc930,	// (0x00032bbb) main_video3_pane_g2_ParamLimits

0xc930,	// (0x00032bbb) main_video3_pane_g2

0x0001,

0xf867,	// (0x00035af2) main_video3_pane_g_ParamLimits

0xf867,	// (0x00035af2) main_video3_pane_g

0xc94c,	// (0x00032bd7) main_video3_pane_t1_ParamLimits

0xc94c,	// (0x00032bd7) main_video3_pane_t1

0xc977,	// (0x00032c02) main_video3_pane_t2_ParamLimits

0xc977,	// (0x00032c02) main_video3_pane_t2

0xc9a4,	// (0x00032c2f) main_video3_pane_t3_ParamLimits

0xc9a4,	// (0x00032c2f) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00035af7) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00035af7) main_video3_pane_t

0xc9d1,	// (0x00032c5c) cams_zoom_vslider_pane_g1

0xc9da,	// (0x00032c65) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00035afe) cams_zoom_vslider_pane_g

0xc9e2,	// (0x00032c6d) small_slider_vertical_pane

0xc1e3,	// (0x0003246e) small_slider_vertical_pane_g1

0xc1e3,	// (0x0003246e) small_slider_vertical_pane_g2

0xc9ea,	// (0x00032c75) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00035b03) small_slider_vertical_pane_g

0x1c79,	// (0x00027f04) main_hwr_training_pane

0xc9f3,	// (0x00032c7e) hwr_training_instruct_pane_ParamLimits

0xc9f3,	// (0x00032c7e) hwr_training_instruct_pane

0x7e98,	// (0x0002e123) hwr_training_navi_pane_ParamLimits

0x7e98,	// (0x0002e123) hwr_training_navi_pane

0x7eb7,	// (0x0002e142) hwr_training_write_pane_ParamLimits

0x7eb7,	// (0x0002e142) hwr_training_write_pane

0x1c79,	// (0x00027f04) bg_frame_shadow_pane

0xca2a,	// (0x00032cb5) hwr_training_write_pane_g1

0xca32,	// (0x00032cbd) hwr_training_write_pane_g2

0xca3a,	// (0x00032cc5) hwr_training_write_pane_g3

0xca42,	// (0x00032ccd) hwr_training_write_pane_g4

0xca4a,	// (0x00032cd5) hwr_training_write_pane_g5

0xca52,	// (0x00032cdd) hwr_training_write_pane_g6

0xca5a,	// (0x00032ce5) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00035b0a) hwr_training_write_pane_g

0xca62,	// (0x00032ced) hwr_training_navi_pane_g1_ParamLimits

0xca62,	// (0x00032ced) hwr_training_navi_pane_g1

0xca74,	// (0x00032cff) hwr_training_navi_pane_g2_ParamLimits

0xca74,	// (0x00032cff) hwr_training_navi_pane_g2

0xca86,	// (0x00032d11) hwr_training_navi_pane_g3_ParamLimits

0xca86,	// (0x00032d11) hwr_training_navi_pane_g3

0xca96,	// (0x00032d21) hwr_training_navi_pane_g4_ParamLimits

0xca96,	// (0x00032d21) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00035b19) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00035b19) hwr_training_navi_pane_g

0xcaa3,	// (0x00032d2e) hwr_training_navi_pane_t1

0x7ef2,	// (0x0002e17d) list_single_hwr_training_instruct_pane_ParamLimits

0x7ef2,	// (0x0002e17d) list_single_hwr_training_instruct_pane

0xcab1,	// (0x00032d3c) list_single_hwr_training_instruct_pane_t1

0xc123,	// (0x000323ae) bg_frame_shadow_pane_g1

0xcac0,	// (0x00032d4b) bg_frame_shadow_pane_g2

0xcac8,	// (0x00032d53) bg_frame_shadow_pane_g3

0xcad0,	// (0x00032d5b) bg_frame_shadow_pane_g4

0xcad8,	// (0x00032d63) bg_frame_shadow_pane_g5

0xcae0,	// (0x00032d6b) bg_frame_shadow_pane_g6

0xcae8,	// (0x00032d73) bg_frame_shadow_pane_g7

0x2a9e,	// (0x00028d29) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00035b24) bg_frame_shadow_pane_g

0x1c79,	// (0x00027f04) main_video_tele_dialer_pane

0x11e0,	// (0x0002746b) aid_size_cell_video_keypad_ParamLimits

0x11e0,	// (0x0002746b) aid_size_cell_video_keypad

0x11fa,	// (0x00027485) grid_video_dialer_keypad_pane_ParamLimits

0x11fa,	// (0x00027485) grid_video_dialer_keypad_pane

0x1248,	// (0x000274d3) video_down_pane_cp_ParamLimits

0x1248,	// (0x000274d3) video_down_pane_cp

0x1260,	// (0x000274eb) cell_video_dialer_keypad_pane_ParamLimits

0x1260,	// (0x000274eb) cell_video_dialer_keypad_pane

0xcaf0,	// (0x00032d7b) bg_button_pane_cp08_ParamLimits

0xcaf0,	// (0x00032d7b) bg_button_pane_cp08

0x7f2a,	// (0x0002e1b5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7f2a,	// (0x0002e1b5) cell_video_dialer_keypad_pane_g1

0x7706,	// (0x0002d991) mup3_rocker2_pane_ParamLimits

0x7706,	// (0x0002d991) mup3_rocker2_pane

0xc1e3,	// (0x0003246e) mup3_rocker2_pane_g1

0x66b3,	// (0x0002c93e) main_dialer2_pane

0x1c79,	// (0x00027f04) main_mp4_pane

0xcb04,	// (0x00032d8f) main_mp4_pane_g1_ParamLimits

0xcb04,	// (0x00032d8f) main_mp4_pane_g1

0xcb04,	// (0x00032d8f) main_mp4_pane_g2_ParamLimits

0xcb04,	// (0x00032d8f) main_mp4_pane_g2

0x1286,	// (0x00027511) main_mp4_pane_g3_ParamLimits

0x1286,	// (0x00027511) main_mp4_pane_g3

0xcb12,	// (0x00032d9d) main_mp4_pane_g4_ParamLimits

0xcb12,	// (0x00032d9d) main_mp4_pane_g4

0xcb2c,	// (0x00032db7) main_mp4_pane_g5_ParamLimits

0xcb2c,	// (0x00032db7) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00035b44) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00035b44) main_mp4_pane_g

0xcb60,	// (0x00032deb) main_mp4_pane_t1_ParamLimits

0xcb60,	// (0x00032deb) main_mp4_pane_t1

0xcbbc,	// (0x00032e47) main_mp4_pane_t2_ParamLimits

0xcbbc,	// (0x00032e47) main_mp4_pane_t2

0xcc0e,	// (0x00032e99) main_mp4_pane_t3_ParamLimits

0xcc0e,	// (0x00032e99) main_mp4_pane_t3

0xcc2e,	// (0x00032eb9) main_mp4_pane_t4_ParamLimits

0xcc2e,	// (0x00032eb9) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00035b51) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00035b51) main_mp4_pane_t

0xcc6e,	// (0x00032ef9) mp4_progress_pane_ParamLimits

0xcc6e,	// (0x00032ef9) mp4_progress_pane

0xccb8,	// (0x00032f43) mp4_rocker_pane_ParamLimits

0xccb8,	// (0x00032f43) mp4_rocker_pane

0xcce2,	// (0x00032f6d) mp4_progress_pane_t1

0xccfb,	// (0x00032f86) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00035b5a) mp4_progress_pane_t

0xcd14,	// (0x00032f9f) mup_progress_pane_cp04

0xcd20,	// (0x00032fab) mp4_rocker_pane_g1

0x12d0,	// (0x0002755b) aid_cell_size_keypad2_ParamLimits

0x12d0,	// (0x0002755b) aid_cell_size_keypad2

0x12e6,	// (0x00027571) dialer2_ne_pane_ParamLimits

0x12e6,	// (0x00027571) dialer2_ne_pane

0x12fe,	// (0x00027589) grid_dialer2_keypad_pane_ParamLimits

0x12fe,	// (0x00027589) grid_dialer2_keypad_pane

0xbfc2,	// (0x0003224d) bg_popup_call_pane_cp07_ParamLimits

0xbfc2,	// (0x0003224d) bg_popup_call_pane_cp07

0x7f65,	// (0x0002e1f0) dialer2_ne_pane_t1_ParamLimits

0x7f65,	// (0x0002e1f0) dialer2_ne_pane_t1

0x131a,	// (0x000275a5) cell_dialer2_keypad_pane_ParamLimits

0x131a,	// (0x000275a5) cell_dialer2_keypad_pane

0xcd3c,	// (0x00032fc7) bg_button_pane_pane_cp04_ParamLimits

0xcd3c,	// (0x00032fc7) bg_button_pane_pane_cp04

0x7fa5,	// (0x0002e230) cell_dialer2_keypad_pane_g1_ParamLimits

0x7fa5,	// (0x0002e230) cell_dialer2_keypad_pane_g1

0x33bb,	// (0x00029646) aid_placing_vt_set_content_ParamLimits

0x33bb,	// (0x00029646) aid_placing_vt_set_content

0x33df,	// (0x0002966a) aid_placing_vt_set_title_ParamLimits

0x33df,	// (0x0002966a) aid_placing_vt_set_title

0x1c79,	// (0x00027f04) main_image3_pane

0x139e,	// (0x00027629) area_side_right_pane_cp01_ParamLimits

0x139e,	// (0x00027629) area_side_right_pane_cp01

0xcb04,	// (0x00032d8f) main_image3_pane_g1_ParamLimits

0xcb04,	// (0x00032d8f) main_image3_pane_g1

0x13b7,	// (0x00027642) main_image3_pane_g2_ParamLimits

0x13b7,	// (0x00027642) main_image3_pane_g2

0x13df,	// (0x0002766a) main_image3_pane_g3_ParamLimits

0x13df,	// (0x0002766a) main_image3_pane_g3

0x1409,	// (0x00027694) main_image3_pane_g4_ParamLimits

0x1409,	// (0x00027694) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00035b69) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00035b69) main_image3_pane_g

0x1433,	// (0x000276be) main_image3_pane_t1_ParamLimits

0x1433,	// (0x000276be) main_image3_pane_t1

0x148b,	// (0x00027716) main_image3_pane_t2_ParamLimits

0x148b,	// (0x00027716) main_image3_pane_t2

0x14dd,	// (0x00027768) main_image3_pane_t3_ParamLimits

0x14dd,	// (0x00027768) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00035b72) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00035b72) main_image3_pane_t

0x1ef4,	// (0x0002817f) grid_sctrl_middle_pane_cp01_ParamLimits

0x1ef4,	// (0x0002817f) grid_sctrl_middle_pane_cp01

0x800d,	// (0x0002e298) cell_sctrl_middle_pane_cp01_ParamLimits

0x800d,	// (0x0002e298) cell_sctrl_middle_pane_cp01

0x802a,	// (0x0002e2b5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x802a,	// (0x0002e2b5) cell_sctrl_middle_pane_cp01_g1

0x1c79,	// (0x00027f04) main_call4_pane

0x803f,	// (0x0002e2ca) aid_size_button_call4_ParamLimits

0x803f,	// (0x0002e2ca) aid_size_button_call4

0x8072,	// (0x0002e2fd) call4_windows_pane_ParamLimits

0x8072,	// (0x0002e2fd) call4_windows_pane

0x8094,	// (0x0002e31f) grid_call4_button_pane_ParamLimits

0x8094,	// (0x0002e31f) grid_call4_button_pane

0xcd7c,	// (0x00033007) call4_windows_conf_pane

0xcd97,	// (0x00033022) popup_call4_audio_first_window_ParamLimits

0xcd97,	// (0x00033022) popup_call4_audio_first_window

0xcde5,	// (0x00033070) popup_call4_audio_second_window_ParamLimits

0xcde5,	// (0x00033070) popup_call4_audio_second_window

0xcdfb,	// (0x00033086) popup_call4_audio_wait_window_ParamLimits

0xcdfb,	// (0x00033086) popup_call4_audio_wait_window

0x80bf,	// (0x0002e34a) cell_call4_button_pane_ParamLimits

0x80bf,	// (0x0002e34a) cell_call4_button_pane

0x80e6,	// (0x0002e371) bg_button_pane_cp09_ParamLimits

0x80e6,	// (0x0002e371) bg_button_pane_cp09

0x80f2,	// (0x0002e37d) cell_call4_button_pane_g1_ParamLimits

0x80f2,	// (0x0002e37d) cell_call4_button_pane_g1

0x8118,	// (0x0002e3a3) cell_call4_button_pane_t1_ParamLimits

0x8118,	// (0x0002e3a3) cell_call4_button_pane_t1

0xce43,	// (0x000330ce) popup_call4_audio_conf_window_ParamLimits

0xce43,	// (0x000330ce) popup_call4_audio_conf_window

0x7768,	// (0x0002d9f3) mup3_progress_pane_t1_ParamLimits

0x777f,	// (0x0002da0a) mup3_progress_pane_t2_ParamLimits

0xc502,	// (0x0003278d) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00035a4b) mup3_progress_pane_t_ParamLimits

0xc519,	// (0x000327a4) mup_progress_pane_cp03_ParamLimits

0x7cda,	// (0x0002df65) mup3_control_keys_pane_g4_copy1

0xcc9c,	// (0x00032f27) mp4_rocker2_pane_ParamLimits

0xcc9c,	// (0x00032f27) mp4_rocker2_pane

0xce5d,	// (0x000330e8) mp4_rocker2_pane_g1

0xce65,	// (0x000330f0) mp4_rocker2_pane_g2

0xce6d,	// (0x000330f8) mp4_rocker2_pane_g3

0xce75,	// (0x00033100) mp4_rocker2_pane_g4

0xce7d,	// (0x00033108) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00035b7b) mp4_rocker2_pane_g

0x1c79,	// (0x00027f04) main_camera4_pane

0x1c79,	// (0x00027f04) main_video4_pane

0x1216,	// (0x000274a1) main_video_tele_dialer_pane_t1_ParamLimits

0x1216,	// (0x000274a1) main_video_tele_dialer_pane_t1

0x122f,	// (0x000274ba) main_video_tele_dialer_pane_t2_ParamLimits

0x122f,	// (0x000274ba) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00035b35) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00035b35) main_video_tele_dialer_pane_t

0x157d,	// (0x00027808) cam4_autofocus_pane_ParamLimits

0x157d,	// (0x00027808) cam4_autofocus_pane

0x1593,	// (0x0002781e) cam4_image_uncrop_pane_ParamLimits

0x1593,	// (0x0002781e) cam4_image_uncrop_pane

0x15ac,	// (0x00027837) cam4_indicators_pane_ParamLimits

0x15ac,	// (0x00027837) cam4_indicators_pane

0x15db,	// (0x00027866) main_camera4_pane_g1_ParamLimits

0x15db,	// (0x00027866) main_camera4_pane_g1

0x15e7,	// (0x00027872) main_camera4_pane_g2_ParamLimits

0x15e7,	// (0x00027872) main_camera4_pane_g2

0x15e7,	// (0x00027872) main_camera4_pane_g3_ParamLimits

0x15e7,	// (0x00027872) main_camera4_pane_g3

0x15f3,	// (0x0002787e) main_camera4_pane_g4_ParamLimits

0x15f3,	// (0x0002787e) main_camera4_pane_g4

0x15ff,	// (0x0002788a) main_camera4_pane_g5_ParamLimits

0x15ff,	// (0x0002788a) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00035b86) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00035b86) main_camera4_pane_g

0x161c,	// (0x000278a7) main_camera4_pane_t1_ParamLimits

0x161c,	// (0x000278a7) main_camera4_pane_t1

0xceb7,	// (0x00033142) bg_tb_trans_pane_cp06

0xcecd,	// (0x00033158) cam4_indicators_pane_g1

0xceda,	// (0x00033165) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00035ba1) cam4_indicators_pane_g

0xcefa,	// (0x00033185) cam4_indicators_pane_t1

0x166c,	// (0x000278f7) main_video4_pane_g1_ParamLimits

0x166c,	// (0x000278f7) main_video4_pane_g1

0x167e,	// (0x00027909) main_video4_pane_g2_ParamLimits

0x167e,	// (0x00027909) main_video4_pane_g2

0x1692,	// (0x0002791d) main_video4_pane_g3_ParamLimits

0x1692,	// (0x0002791d) main_video4_pane_g3

0x16a2,	// (0x0002792d) main_video4_pane_g4_ParamLimits

0x16a2,	// (0x0002792d) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00035ba8) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00035ba8) main_video4_pane_g

0x16c2,	// (0x0002794d) vid4_indicators_pane_ParamLimits

0x16c2,	// (0x0002794d) vid4_indicators_pane

0x16f2,	// (0x0002797d) video4_image_uncrop_cif_pane_ParamLimits

0x16f2,	// (0x0002797d) video4_image_uncrop_cif_pane

0x170c,	// (0x00027997) video4_image_uncrop_nhd_pane_ParamLimits

0x170c,	// (0x00027997) video4_image_uncrop_nhd_pane

0x1593,	// (0x0002781e) video4_image_uncrop_vga_pane_ParamLimits

0x1593,	// (0x0002781e) video4_image_uncrop_vga_pane

0xcf1e,	// (0x000331a9) bg_tb_trans_pane_cp07

0x1722,	// (0x000279ad) vid4_indicators_pane_g1

0x172f,	// (0x000279ba) vid4_indicators_pane_g2

0x173c,	// (0x000279c7) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00035bb3) vid4_indicators_pane_g

0x1761,	// (0x000279ec) vid4_indicators_pane_t1

0x8152,	// (0x0002e3dd) cam4_autofocus_pane_g1

0x815a,	// (0x0002e3e5) cam4_autofocus_pane_g2

0x8162,	// (0x0002e3ed) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00035bbe) cam4_autofocus_pane_g

0x816a,	// (0x0002e3f5) cam4_autofocus_pane_g3_copy1

0x7f0e,	// (0x0002e199) video_down_pane_cp_t1

0x7f1c,	// (0x0002e1a7) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00035b3a) video_down_pane_cp_t

0x1ef4,	// (0x0002817f) popup_vitu2_window_ParamLimits

0x1ef4,	// (0x0002817f) popup_vitu2_window

0x1773,	// (0x000279fe) aid_size_cell2_itu2_ParamLimits

0x1773,	// (0x000279fe) aid_size_cell2_itu2

0x1799,	// (0x00027a24) aid_size_cell_itu2_ParamLimits

0x1799,	// (0x00027a24) aid_size_cell_itu2

0x17f7,	// (0x00027a82) bg_popup_window_pane_cp09_ParamLimits

0x17f7,	// (0x00027a82) bg_popup_window_pane_cp09

0x1805,	// (0x00027a90) field_vitu2_entry_pane_ParamLimits

0x1805,	// (0x00027a90) field_vitu2_entry_pane

0x182d,	// (0x00027ab8) grid_vitu2_function_pane_ParamLimits

0x182d,	// (0x00027ab8) grid_vitu2_function_pane

0x187e,	// (0x00027b09) grid_vitu2_itu_pane_ParamLimits

0x187e,	// (0x00027b09) grid_vitu2_itu_pane

0x1909,	// (0x00027b94) cell_vitu2_itu_pane_ParamLimits

0x1909,	// (0x00027b94) cell_vitu2_itu_pane

0x192f,	// (0x00027bba) cell_vitu2_function_pane_ParamLimits

0x192f,	// (0x00027bba) cell_vitu2_function_pane

0xcf36,	// (0x000331c1) bg_popup_call_pane_cp08_ParamLimits

0xcf36,	// (0x000331c1) bg_popup_call_pane_cp08

0xcf4f,	// (0x000331da) field_vitu2_entry_pane_g1

0xcf5b,	// (0x000331e6) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00035bc5) field_vitu2_entry_pane_g

0x8172,	// (0x0002e3fd) field_vitu2_entry_pane_t1_ParamLimits

0x8172,	// (0x0002e3fd) field_vitu2_entry_pane_t1

0xcf75,	// (0x00033200) field_vitu2_entry_pane_t2_ParamLimits

0xcf75,	// (0x00033200) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00035bcc) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00035bcc) field_vitu2_entry_pane_t

0x1973,	// (0x00027bfe) bg_button_pane_cp010_ParamLimits

0x1973,	// (0x00027bfe) bg_button_pane_cp010

0x1981,	// (0x00027c0c) cell_vitu2_itu_pane_g1

0x199f,	// (0x00027c2a) cell_vitu2_itu_pane_t1_ParamLimits

0x199f,	// (0x00027c2a) cell_vitu2_itu_pane_t1

0x1a05,	// (0x00027c90) cell_vitu2_itu_pane_t2_ParamLimits

0x1a05,	// (0x00027c90) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00035bd6) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00035bd6) cell_vitu2_itu_pane_t

0xcf9a,	// (0x00033225) bg_button_pane_cp011

0x1ae1,	// (0x00027d6c) cell_vitu2_function_pane_g1

0x1c79,	// (0x00027f04) main_myfav_hc_pane

0x152d,	// (0x000277b8) popup_image3_note_pane_ParamLimits

0x152d,	// (0x000277b8) popup_image3_note_pane

0x1549,	// (0x000277d4) popup_image3_tool_bar_pane_ParamLimits

0x1549,	// (0x000277d4) popup_image3_tool_bar_pane

0x1a89,	// (0x00027d14) cell_vitu2_itu_pane_t3_ParamLimits

0x1a89,	// (0x00027d14) cell_vitu2_itu_pane_t3

0x1c79,	// (0x00027f04) bg_popup_trans_pane

0xcfa8,	// (0x00033233) grid_image3_tool_bar_pane

0xcfb2,	// (0x0003323d) bg_popup_trans_pane_g1

0x39b5,	// (0x00029c40) bg_popup_trans_pane_g2

0xcfba,	// (0x00033245) bg_popup_trans_pane_g3

0xcfc2,	// (0x0003324d) bg_popup_trans_pane_g4

0xcfca,	// (0x00033255) bg_popup_trans_pane_g5

0xcfd2,	// (0x0003325d) bg_popup_trans_pane_g6

0xcfda,	// (0x00033265) bg_popup_trans_pane_g7

0xcfe2,	// (0x0003326d) bg_popup_trans_pane_g8

0x3995,	// (0x00029c20) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00035bdd) bg_popup_trans_pane_g

0xcfea,	// (0x00033275) cell_image3_tool_bar_pane_ParamLimits

0xcfea,	// (0x00033275) cell_image3_tool_bar_pane

0xc1e3,	// (0x0003246e) cell_image3_tool_bar_pane_g1

0x1c79,	// (0x00027f04) bg_popup_trans_pane_cp1

0xd000,	// (0x0003328b) popup_image3_note_pane_t1

0xd00e,	// (0x00033299) popup_image3_note_pane_t2

0xd01c,	// (0x000332a7) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00035bf0) popup_image3_note_pane_t

0xd02c,	// (0x000332b7) popup_image3_note_pane_t3_copy1

0x818f,	// (0x0002e41a) bg_myfav_hc_instruction_pane_ParamLimits

0x818f,	// (0x0002e41a) bg_myfav_hc_instruction_pane

0x81a7,	// (0x0002e432) cell_myfav_contact_pane_ParamLimits

0x81a7,	// (0x0002e432) cell_myfav_contact_pane

0x81c3,	// (0x0002e44e) cell_myfav_contact_pane_cp1_ParamLimits

0x81c3,	// (0x0002e44e) cell_myfav_contact_pane_cp1

0x81db,	// (0x0002e466) cell_myfav_contact_pane_cp2_ParamLimits

0x81db,	// (0x0002e466) cell_myfav_contact_pane_cp2

0x81f3,	// (0x0002e47e) cell_myfav_contact_pane_cp3_ParamLimits

0x81f3,	// (0x0002e47e) cell_myfav_contact_pane_cp3

0x820a,	// (0x0002e495) cell_myfav_contact_pane_cp4_ParamLimits

0x820a,	// (0x0002e495) cell_myfav_contact_pane_cp4

0x8222,	// (0x0002e4ad) cell_myfav_contact_pane_cp5_ParamLimits

0x8222,	// (0x0002e4ad) cell_myfav_contact_pane_cp5

0x8236,	// (0x0002e4c1) cell_myfav_contact_pane_cp6_ParamLimits

0x8236,	// (0x0002e4c1) cell_myfav_contact_pane_cp6

0x824c,	// (0x0002e4d7) cell_myfav_contact_pane_cp7_ParamLimits

0x824c,	// (0x0002e4d7) cell_myfav_contact_pane_cp7

0xd03a,	// (0x000332c5) listscroll_gen_pane_cp05

0x8264,	// (0x0002e4ef) main_myfav_hc_pane_g1_ParamLimits

0x8264,	// (0x0002e4ef) main_myfav_hc_pane_g1

0x827e,	// (0x0002e509) main_myfav_hc_pane_g2_ParamLimits

0x827e,	// (0x0002e509) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x00035bf7) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x00035bf7) main_myfav_hc_pane_g

0x82b2,	// (0x0002e53d) main_myfav_hc_pane_t1_ParamLimits

0x82b2,	// (0x0002e53d) main_myfav_hc_pane_t1

0xd043,	// (0x000332ce) main_myfav_hc_pane_t2_ParamLimits

0xd043,	// (0x000332ce) main_myfav_hc_pane_t2

0xd055,	// (0x000332e0) main_myfav_hc_pane_t3_ParamLimits

0xd055,	// (0x000332e0) main_myfav_hc_pane_t3

0x82c9,	// (0x0002e554) main_myfav_hc_pane_t4_ParamLimits

0x82c9,	// (0x0002e554) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00035bfe) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00035bfe) main_myfav_hc_pane_t

0xc1e3,	// (0x0003246e) bg_myfav_hc_instruction_pane_g1

0xd067,	// (0x000332f2) cell_myfav_contact_pane_g1_ParamLimits

0xd067,	// (0x000332f2) cell_myfav_contact_pane_g1

0xd067,	// (0x000332f2) cell_myfav_contact_pane_g2_ParamLimits

0xd067,	// (0x000332f2) cell_myfav_contact_pane_g2

0xd073,	// (0x000332fe) cell_myfav_contact_pane_g3_ParamLimits

0xd073,	// (0x000332fe) cell_myfav_contact_pane_g3

0xc4ec,	// (0x00032777) cell_myfav_contact_pane_g4_ParamLimits

0xc4ec,	// (0x00032777) cell_myfav_contact_pane_g4

0xd080,	// (0x0003330b) cell_myfav_contact_pane_g5_ParamLimits

0xd080,	// (0x0003330b) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00035c09) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00035c09) cell_myfav_contact_pane_g

0x8298,	// (0x0002e523) main_myfav_hc_pane_g3_ParamLimits

0x8298,	// (0x0002e523) main_myfav_hc_pane_g3

0x1e2c,	// (0x000280b7) popup_adpt_find_window

0x82f3,	// (0x0002e57e) afind_page_pane_ParamLimits

0x82f3,	// (0x0002e57e) afind_page_pane

0x8308,	// (0x0002e593) aid_size_cell_afind_ParamLimits

0x8308,	// (0x0002e593) aid_size_cell_afind

0x8326,	// (0x0002e5b1) bg_popup_sub_pane_cp09_ParamLimits

0x8326,	// (0x0002e5b1) bg_popup_sub_pane_cp09

0x8333,	// (0x0002e5be) find_pane_cp01_ParamLimits

0x8333,	// (0x0002e5be) find_pane_cp01

0xd08c,	// (0x00033317) grid_afind_control_pane_ParamLimits

0xd08c,	// (0x00033317) grid_afind_control_pane

0x8340,	// (0x0002e5cb) grid_afind_pane_ParamLimits

0x8340,	// (0x0002e5cb) grid_afind_pane

0x8362,	// (0x0002e5ed) cell_afind_pane_ParamLimits

0x8362,	// (0x0002e5ed) cell_afind_pane

0xc1e3,	// (0x0003246e) afind_page_pane_g1

0x83c9,	// (0x0002e654) afind_page_pane_g2

0x83d2,	// (0x0002e65d) afind_page_pane_g3

0x0002,

0xf989,	// (0x00035c14) afind_page_pane_g

0x83db,	// (0x0002e666) afind_page_pane_t1

0xd0a0,	// (0x0003332b) cell_afind_grid_control_pane_ParamLimits

0xd0a0,	// (0x0003332b) cell_afind_grid_control_pane

0xcd3c,	// (0x00032fc7) bg_button_pane_cp69_ParamLimits

0xcd3c,	// (0x00032fc7) bg_button_pane_cp69

0x83fb,	// (0x0002e686) cell_afind_pane_g1_ParamLimits

0x83fb,	// (0x0002e686) cell_afind_pane_g1

0x8408,	// (0x0002e693) cell_afind_pane_t1_ParamLimits

0x8408,	// (0x0002e693) cell_afind_pane_t1

0x323c,	// (0x000294c7) bg_button_pane_cp72

0xd0af,	// (0x0003333a) cell_afind_grid_control_pane_g1

0x5cc2,	// (0x0002bf4d) aid_image_placing_area_ParamLimits

0x5cc2,	// (0x0002bf4d) aid_image_placing_area

0xc7f1,	// (0x00032a7c) field_vitu_entry_pane_g1_ParamLimits

0xc7f1,	// (0x00032a7c) field_vitu_entry_pane_g1

0xc7fd,	// (0x00032a88) field_vitu_entry_pane_g2_ParamLimits

0xc7fd,	// (0x00032a88) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00035ac5) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00035ac5) field_vitu_entry_pane_g

0x7da9,	// (0x0002e034) cell_vitu_itu_pane_g1_ParamLimits

0x7deb,	// (0x0002e076) cell_vitu_itu_pane_t3_ParamLimits

0x7deb,	// (0x0002e076) cell_vitu_itu_pane_t3

0xcce2,	// (0x00032f6d) mp4_progress_pane_t1_ParamLimits

0xccfb,	// (0x00032f86) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00035b5a) mp4_progress_pane_t_ParamLimits

0xcd14,	// (0x00032f9f) mup_progress_pane_cp04_ParamLimits

0x82dd,	// (0x0002e568) main_myfav_hc_pane_t5_ParamLimits

0x82dd,	// (0x0002e568) main_myfav_hc_pane_t5

0x1ccf,	// (0x00027f5a) aid_zoom_text_primary

0x1e2c,	// (0x000280b7) popup_adpt_find_window_ParamLimits

0x1ef4,	// (0x0002817f) main_cam_set_pane

0x15c5,	// (0x00027850) cam4_zoom_pane_ParamLimits

0x15c5,	// (0x00027850) cam4_zoom_pane

0x841a,	// (0x0002e6a5) main_cam_set_pane_g1_ParamLimits

0x841a,	// (0x0002e6a5) main_cam_set_pane_g1

0x8428,	// (0x0002e6b3) main_cam_set_pane_g2_ParamLimits

0x8428,	// (0x0002e6b3) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00035c1b) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00035c1b) main_cam_set_pane_g

0x844b,	// (0x0002e6d6) main_cam_set_pane_t1_ParamLimits

0x844b,	// (0x0002e6d6) main_cam_set_pane_t1

0x8466,	// (0x0002e6f1) main_cset_listscroll_pane_ParamLimits

0x8466,	// (0x0002e6f1) main_cset_listscroll_pane

0x848a,	// (0x0002e715) main_cset_slider_pane_ParamLimits

0x848a,	// (0x0002e715) main_cset_slider_pane

0xd0c0,	// (0x0003334b) main_cset_list_pane_ParamLimits

0xd0c0,	// (0x0003334b) main_cset_list_pane

0xd0d0,	// (0x0003335b) scroll_pane_cp028

0x84b4,	// (0x0002e73f) aid_area_touch_slider

0x84d0,	// (0x0002e75b) cset_slider_pane

0x84fa,	// (0x0002e785) main_cset_slider_pane_g1

0x850f,	// (0x0002e79a) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00035c20) main_cset_slider_pane_g

0xd109,	// (0x00033394) main_cset_slider_pane_t1

0x85d1,	// (0x0002e85c) main_cset_slider_pane_t2

0x85eb,	// (0x0002e876) main_cset_slider_pane_t3

0x8605,	// (0x0002e890) main_cset_slider_pane_t4

0x861f,	// (0x0002e8aa) main_cset_slider_pane_t5

0x863d,	// (0x0002e8c8) main_cset_slider_pane_t6

0x8654,	// (0x0002e8df) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00035c45) main_cset_slider_pane_t

0x8760,	// (0x0002e9eb) cset_list_set_pane_ParamLimits

0x8760,	// (0x0002e9eb) cset_list_set_pane

0x8774,	// (0x0002e9ff) aid_position_infowindow_above

0x877c,	// (0x0002ea07) aid_position_infowindow_below

0xd1a9,	// (0x00033434) cset_list_set_pane_g1_ParamLimits

0xd1a9,	// (0x00033434) cset_list_set_pane_g1

0x8784,	// (0x0002ea0f) cset_list_set_pane_g3_ParamLimits

0x8784,	// (0x0002ea0f) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00035c64) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00035c64) cset_list_set_pane_g

0x8793,	// (0x0002ea1e) cset_list_set_pane_t1_ParamLimits

0x8793,	// (0x0002ea1e) cset_list_set_pane_t1

0x1ef4,	// (0x0002817f) list_highlight_pane_cp021_ParamLimits

0x1ef4,	// (0x0002817f) list_highlight_pane_cp021

0x5461,	// (0x0002b6ec) cset_slider_pane_g1

0x5473,	// (0x0002b6fe) cset_slider_pane_g2

0x546a,	// (0x0002b6f5) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00035c69) cset_slider_pane_g

0xd1b5,	// (0x00033440) aid_area_touch_cam4_zoom

0xd1bd,	// (0x00033448) cam4_zoom_cont_pane

0xd1c5,	// (0x00033450) cam4_zoom_pane_g1

0xd1cd,	// (0x00033458) cam4_zoom_pane_g2

0x1af5,	// (0x00027d80) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00035c70) cam4_zoom_pane_g

0xd1d5,	// (0x00033460) cam4_zoom_cont_pane_g1

0xd1de,	// (0x00033469) cam4_zoom_cont_pane_g2

0xd1e7,	// (0x00033472) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00035c77) cam4_zoom_cont_pane_g

0x805d,	// (0x0002e2e8) call4_image_pane_ParamLimits

0x805d,	// (0x0002e2e8) call4_image_pane

0xcd7c,	// (0x00033007) call4_windows_conf_pane_ParamLimits

0xcdc3,	// (0x0003304e) popup_call4_audio_in_window_ParamLimits

0xcdc3,	// (0x0003304e) popup_call4_audio_in_window

0x1c79,	// (0x00027f04) bg_popup_call2_act_pane_cp02

0xce3b,	// (0x000330c6) call4_list_conf_pane

0xc1e3,	// (0x0003246e) call4_image_pane_g1

0xc1e3,	// (0x0003246e) call4_image_pane_g2

0x0001,

0xf700,	// (0x0003598b) call4_image_pane_g

0xd1f0,	// (0x0003347b) list_single_graphic_popup_conf4_pane_ParamLimits

0xd1f0,	// (0x0003347b) list_single_graphic_popup_conf4_pane

0x1c79,	// (0x00027f04) list_highlight_pane_cp022

0xd205,	// (0x00033490) list_single_graphic_popup_conf4_pane_g1

0x496f,	// (0x0002abfa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00035c7e) list_single_graphic_popup_conf4_pane_g

0xd20d,	// (0x00033498) list_single_graphic_popup_conf4_pane_t1

0x350b,	// (0x00029796) popup_vtel_slider_window_ParamLimits

0x350b,	// (0x00029796) popup_vtel_slider_window

0xcd2a,	// (0x00032fb5) dialer2_ne_pane_t2_ParamLimits

0xcd2a,	// (0x00032fb5) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00035b5f) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00035b5f) dialer2_ne_pane_t

0xbfc2,	// (0x0003224d) bg_popup_sub_pane_cp010_ParamLimits

0xbfc2,	// (0x0003224d) bg_popup_sub_pane_cp010

0x87a8,	// (0x0002ea33) popup_vtel_slider_window_g1_ParamLimits

0x87a8,	// (0x0002ea33) popup_vtel_slider_window_g1

0x87bb,	// (0x0002ea46) popup_vtel_slider_window_g2_ParamLimits

0x87bb,	// (0x0002ea46) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00035c83) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00035c83) popup_vtel_slider_window_g

0x8811,	// (0x0002ea9c) vtel_slider_pane_ParamLimits

0x8811,	// (0x0002ea9c) vtel_slider_pane

0x8833,	// (0x0002eabe) vtel_slider_pane_g1_ParamLimits

0x8833,	// (0x0002eabe) vtel_slider_pane_g1

0x8847,	// (0x0002ead2) vtel_slider_pane_g2_ParamLimits

0x8847,	// (0x0002ead2) vtel_slider_pane_g2

0x885f,	// (0x0002eaea) vtel_slider_pane_g3_ParamLimits

0x885f,	// (0x0002eaea) vtel_slider_pane_g3

0x8833,	// (0x0002eabe) vtel_slider_pane_g4_ParamLimits

0x8833,	// (0x0002eabe) vtel_slider_pane_g4

0x8875,	// (0x0002eb00) vtel_slider_pane_g5_ParamLimits

0x8875,	// (0x0002eb00) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00035c8c) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00035c8c) vtel_slider_pane_g

0x1c79,	// (0x00027f04) main_gallery2_pane

0x17c5,	// (0x00027a50) aid_size_row_itut2_dropdow_list_ParamLimits

0x17c5,	// (0x00027a50) aid_size_row_itut2_dropdow_list

0x1855,	// (0x00027ae0) grid_vitu2_function_top_pane_ParamLimits

0x1855,	// (0x00027ae0) grid_vitu2_function_top_pane

0x18b4,	// (0x00027b3f) popup_vitu2_dropdown_list_window_ParamLimits

0x18b4,	// (0x00027b3f) popup_vitu2_dropdown_list_window

0x18dd,	// (0x00027b68) popup_vitu2_match_list_window

0x1afd,	// (0x00027d88) cell_vitu2_function_top_pane_ParamLimits

0x1afd,	// (0x00027d88) cell_vitu2_function_top_pane

0x1b1d,	// (0x00027da8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1b1d,	// (0x00027da8) cell_vitu2_function_top_pane_cp01

0x1b3b,	// (0x00027dc6) cell_vitu2_function_top_wide_pane_ParamLimits

0x1b3b,	// (0x00027dc6) cell_vitu2_function_top_wide_pane

0xcf9a,	// (0x00033225) bg_button_pane_cp012

0x1b59,	// (0x00027de4) cell_vitu2_function_top_pane_g1

0xd231,	// (0x000334bc) bg_button_pane_cp013_ParamLimits

0xd231,	// (0x000334bc) bg_button_pane_cp013

0x888b,	// (0x0002eb16) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x888b,	// (0x0002eb16) cell_vitu2_function_top_wide_pane_g1

0xcf9a,	// (0x00033225) bg_popup_sub_pane_cp20

0x1b6d,	// (0x00027df8) list_vitu2_match_list_pane

0xcfb2,	// (0x0003323d) bg_popup_sub_pane_cp20_g1

0xcfba,	// (0x00033245) bg_popup_sub_pane_cp20_g2

0x39b5,	// (0x00029c40) bg_popup_sub_pane_cp20_g3

0xcfc2,	// (0x0003324d) bg_popup_sub_pane_cp20_g4

0x3995,	// (0x00029c20) bg_popup_sub_pane_cp20_g5

0xd24d,	// (0x000334d8) bg_popup_sub_pane_cp20_g6

0xcfd2,	// (0x0003325d) bg_popup_sub_pane_cp20_g7

0xcfda,	// (0x00033265) bg_popup_sub_pane_cp20_g8

0xcfe2,	// (0x0003326d) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00035c97) bg_popup_sub_pane_cp20_g

0xd255,	// (0x000334e0) list_vitu2_match_list_item_pane_ParamLimits

0xd255,	// (0x000334e0) list_vitu2_match_list_item_pane

0xd267,	// (0x000334f2) list_vitu2_match_list_item_pane_t1

0xaf9d,	// (0x00031228) bg_popup_sub_pane_cp21

0xd28d,	// (0x00033518) grid_vitu2_dropdown_list_pane

0x1b8b,	// (0x00027e16) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1b8b,	// (0x00027e16) cell_vitu2_dropdown_list_char_pane

0x1bae,	// (0x00027e39) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1bae,	// (0x00027e39) cell_vitu2_dropdown_list_ctrl_pane

0xd295,	// (0x00033520) cell_vitu2_dropdown_list_char_pane_g1

0xd29e,	// (0x00033529) cell_vitu2_dropdown_list_char_pane_g2

0xd2a7,	// (0x00033532) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x00035cb4) cell_vitu2_dropdown_list_char_pane_g

0x1bdc,	// (0x00027e67) cell_vitu2_dropdown_list_char_pane_t1

0x88d5,	// (0x0002eb60) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x88d5,	// (0x0002eb60) cell_vitu2_dropdown_list_ctrl_pane_g1

0x88e5,	// (0x0002eb70) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x88e5,	// (0x0002eb70) cell_vitu2_dropdown_list_ctrl_pane_g2

0x88f6,	// (0x0002eb81) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x88f6,	// (0x0002eb81) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1bea,	// (0x00027e75) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1bea,	// (0x00027e75) cell_vitu2_dropdown_list_ctrl_pane_g4

0xceb7,	// (0x00033142) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xceb7,	// (0x00033142) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00035cbb) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00035cbb) cell_vitu2_dropdown_list_ctrl_pane_g

0x8906,	// (0x0002eb91) aid_size_cell_gallery2_ParamLimits

0x8906,	// (0x0002eb91) aid_size_cell_gallery2

0x891c,	// (0x0002eba7) grid_gallery2_pane_ParamLimits

0x891c,	// (0x0002eba7) grid_gallery2_pane

0x8930,	// (0x0002ebbb) scroll_pane_cp029_ParamLimits

0x8930,	// (0x0002ebbb) scroll_pane_cp029

0x893c,	// (0x0002ebc7) cell_gallery2_pane_ParamLimits

0x893c,	// (0x0002ebc7) cell_gallery2_pane

0xd2b0,	// (0x0003353b) cell_gallery2_pane_g2

0x8976,	// (0x0002ec01) cell_gallery2_pane_g3

0xd2ba,	// (0x00033545) cell_gallery2_pane_g4

0xd2c2,	// (0x0003354d) cell_gallery2_pane_g5

0x4ec7,	// (0x0002b152) grid_highlight_pane_cp10

0x18dd,	// (0x00027b68) popup_vitu2_match_list_window_ParamLimits

0x18f4,	// (0x00027b7f) popup_vitu2_query_window_ParamLimits

0x18f4,	// (0x00027b7f) popup_vitu2_query_window

0xaf9d,	// (0x00031228) bg_vitu2_candi_button_pane

0xd295,	// (0x00033520) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd29e,	// (0x00033529) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd2a7,	// (0x00033532) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x897e,	// (0x0002ec09) bg_button_pane_cp015

0x8992,	// (0x0002ec1d) bg_button_pane_cp016

0x89a5,	// (0x0002ec30) bg_button_pane_cp017

0xbcae,	// (0x00031f39) bg_popup_sub_pane_cp22

0xd2ca,	// (0x00033555) popup_vitu2_query_window_g1

0x89ea,	// (0x0002ec75) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00035cc6) popup_vitu2_query_window_g

0x8a09,	// (0x0002ec94) popup_vitu2_query_window_t1_ParamLimits

0x8a09,	// (0x0002ec94) popup_vitu2_query_window_t1

0x8a3e,	// (0x0002ecc9) popup_vitu2_query_window_t2_ParamLimits

0x8a3e,	// (0x0002ecc9) popup_vitu2_query_window_t2

0x8a50,	// (0x0002ecdb) popup_vitu2_query_window_t3_ParamLimits

0x8a50,	// (0x0002ecdb) popup_vitu2_query_window_t3

0x8a78,	// (0x0002ed03) popup_vitu2_query_window_t4_ParamLimits

0x8a78,	// (0x0002ed03) popup_vitu2_query_window_t4

0x8a99,	// (0x0002ed24) popup_vitu2_query_window_t5_ParamLimits

0x8a99,	// (0x0002ed24) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00035ccd) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00035ccd) popup_vitu2_query_window_t

0xd0b8,	// (0x00033343) main_cset_text_pane

0x84b4,	// (0x0002e73f) aid_area_touch_slider_ParamLimits

0x84d0,	// (0x0002e75b) cset_slider_pane_ParamLimits

0x84fa,	// (0x0002e785) main_cset_slider_pane_g1_ParamLimits

0x850f,	// (0x0002e79a) main_cset_slider_pane_g2_ParamLimits

0xd0d9,	// (0x00033364) main_cset_slider_pane_g3_ParamLimits

0xd0d9,	// (0x00033364) main_cset_slider_pane_g3

0x8524,	// (0x0002e7af) main_cset_slider_pane_g4_ParamLimits

0x8524,	// (0x0002e7af) main_cset_slider_pane_g4

0x8533,	// (0x0002e7be) main_cset_slider_pane_g5_ParamLimits

0x8533,	// (0x0002e7be) main_cset_slider_pane_g5

0x8541,	// (0x0002e7cc) main_cset_slider_pane_g6_ParamLimits

0x8541,	// (0x0002e7cc) main_cset_slider_pane_g6

0xf995,	// (0x00035c20) main_cset_slider_pane_g_ParamLimits

0xd109,	// (0x00033394) main_cset_slider_pane_t1_ParamLimits

0x85d1,	// (0x0002e85c) main_cset_slider_pane_t2_ParamLimits

0x85eb,	// (0x0002e876) main_cset_slider_pane_t3_ParamLimits

0x8605,	// (0x0002e890) main_cset_slider_pane_t4_ParamLimits

0x861f,	// (0x0002e8aa) main_cset_slider_pane_t5_ParamLimits

0x863d,	// (0x0002e8c8) main_cset_slider_pane_t6_ParamLimits

0x8654,	// (0x0002e8df) main_cset_slider_pane_t7_ParamLimits

0x8682,	// (0x0002e90d) main_cset_slider_pane_t8_ParamLimits

0x8682,	// (0x0002e90d) main_cset_slider_pane_t8

0x86aa,	// (0x0002e935) main_cset_slider_pane_t9_ParamLimits

0x86aa,	// (0x0002e935) main_cset_slider_pane_t9

0x86d2,	// (0x0002e95d) main_cset_slider_pane_t10_ParamLimits

0x86d2,	// (0x0002e95d) main_cset_slider_pane_t10

0x86fa,	// (0x0002e985) main_cset_slider_pane_t11_ParamLimits

0x86fa,	// (0x0002e985) main_cset_slider_pane_t11

0x8724,	// (0x0002e9af) main_cset_slider_pane_t12_ParamLimits

0x8724,	// (0x0002e9af) main_cset_slider_pane_t12

0x8741,	// (0x0002e9cc) main_cset_slider_pane_t13_ParamLimits

0x8741,	// (0x0002e9cc) main_cset_slider_pane_t13

0xf9ba,	// (0x00035c45) main_cset_slider_pane_t_ParamLimits

0x1c79,	// (0x00027f04) bg_popup_sub_pane_cp011

0xd2d6,	// (0x00033561) main_cset_text_pane_g1

0xd2de,	// (0x00033569) main_cset_text_pane_t1

0xd2ec,	// (0x00033577) main_cset_text_pane_t2

0xd2fa,	// (0x00033585) main_cset_text_pane_t3

0xd308,	// (0x00033593) main_cset_text_pane_t4

0xd316,	// (0x000335a1) main_cset_text_pane_t5

0xd324,	// (0x000335af) main_cset_text_pane_t6

0xd332,	// (0x000335bd) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00035cdc) main_cset_text_pane_t

0x1c79,	// (0x00027f04) main_cam4_burst_pane

0x1c79,	// (0x00027f04) main_cam5_pane

0x83e9,	// (0x0002e674) bg_button_pane_cp019

0x83f2,	// (0x0002e67d) bg_button_pane_cp020

0xd0e5,	// (0x00033370) main_cset_slider_pane_g7_ParamLimits

0xd0e5,	// (0x00033370) main_cset_slider_pane_g7

0xd0f1,	// (0x0003337c) main_cset_slider_pane_g8_ParamLimits

0xd0f1,	// (0x0003337c) main_cset_slider_pane_g8

0x8555,	// (0x0002e7e0) main_cset_slider_pane_g9_ParamLimits

0x8555,	// (0x0002e7e0) main_cset_slider_pane_g9

0x8561,	// (0x0002e7ec) main_cset_slider_pane_g10_ParamLimits

0x8561,	// (0x0002e7ec) main_cset_slider_pane_g10

0x856d,	// (0x0002e7f8) main_cset_slider_pane_g11_ParamLimits

0x856d,	// (0x0002e7f8) main_cset_slider_pane_g11

0x8579,	// (0x0002e804) main_cset_slider_pane_g12_ParamLimits

0x8579,	// (0x0002e804) main_cset_slider_pane_g12

0x8585,	// (0x0002e810) main_cset_slider_pane_g13_ParamLimits

0x8585,	// (0x0002e810) main_cset_slider_pane_g13

0x8591,	// (0x0002e81c) main_cset_slider_pane_g14_ParamLimits

0x8591,	// (0x0002e81c) main_cset_slider_pane_g14

0x859d,	// (0x0002e828) main_cset_slider_pane_g15_ParamLimits

0x859d,	// (0x0002e828) main_cset_slider_pane_g15

0xd137,	// (0x000333c2) main_cset_slider_pane_t14_ParamLimits

0xd137,	// (0x000333c2) main_cset_slider_pane_t14

0xd170,	// (0x000333fb) main_cset_slider_pane_t15_ParamLimits

0xd170,	// (0x000333fb) main_cset_slider_pane_t15

0x8b10,	// (0x0002ed9b) aid_cam4_burst_size_cell_ParamLimits

0x8b10,	// (0x0002ed9b) aid_cam4_burst_size_cell

0x8b30,	// (0x0002edbb) grid_cam4_burst_pane_ParamLimits

0x8b30,	// (0x0002edbb) grid_cam4_burst_pane

0x8b6a,	// (0x0002edf5) linegrid_cam4_burst_pane_ParamLimits

0x8b6a,	// (0x0002edf5) linegrid_cam4_burst_pane

0xd340,	// (0x000335cb) scroll_pane_cp30_ParamLimits

0xd340,	// (0x000335cb) scroll_pane_cp30

0x8b8e,	// (0x0002ee19) cell_cam4_burst_pane_ParamLimits

0x8b8e,	// (0x0002ee19) cell_cam4_burst_pane

0xd34c,	// (0x000335d7) linegrid_cam4_burst_pane_g1_ParamLimits

0xd34c,	// (0x000335d7) linegrid_cam4_burst_pane_g1

0x8be3,	// (0x0002ee6e) linegrid_cam4_burst_pane_g2_ParamLimits

0x8be3,	// (0x0002ee6e) linegrid_cam4_burst_pane_g2

0xd359,	// (0x000335e4) linegrid_cam4_burst_pane_g3_ParamLimits

0xd359,	// (0x000335e4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00035ceb) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00035ceb) linegrid_cam4_burst_pane_g

0x8bf4,	// (0x0002ee7f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8bf4,	// (0x0002ee7f) linegrid_cam4_burst_pane_g3_copy1

0xd366,	// (0x000335f1) linegrid_cam4_burst_pane_g4_ParamLimits

0xd366,	// (0x000335f1) linegrid_cam4_burst_pane_g4

0x8c12,	// (0x0002ee9d) linegrid_cam4_burst_pane_g5_ParamLimits

0x8c12,	// (0x0002ee9d) linegrid_cam4_burst_pane_g5

0x8c23,	// (0x0002eeae) linegrid_cam4_burst_pane_g6_ParamLimits

0x8c23,	// (0x0002eeae) linegrid_cam4_burst_pane_g6

0xd373,	// (0x000335fe) linegrid_cam4_burst_pane_g7_ParamLimits

0xd373,	// (0x000335fe) linegrid_cam4_burst_pane_g7

0x8c3a,	// (0x0002eec5) cell_cam4_burst_pane_g1

0xd38c,	// (0x00033617) main_cam5_pane_t1_ParamLimits

0xd38c,	// (0x00033617) main_cam5_pane_t1

0xd39e,	// (0x00033629) main_cam5_pane_t2_ParamLimits

0xd39e,	// (0x00033629) main_cam5_pane_t2

0xd3b0,	// (0x0003363b) main_cam5_pane_t3_ParamLimits

0xd3b0,	// (0x0003363b) main_cam5_pane_t3

0xd3c2,	// (0x0003364d) main_cam5_pane_t4_ParamLimits

0xd3c2,	// (0x0003364d) main_cam5_pane_t4

0xd3da,	// (0x00033665) main_cam5_pane_t5_ParamLimits

0xd3da,	// (0x00033665) main_cam5_pane_t5

0xd3ee,	// (0x00033679) main_cam5_pane_t6_ParamLimits

0xd3ee,	// (0x00033679) main_cam5_pane_t6

0xd402,	// (0x0003368d) main_cam5_pane_t7_ParamLimits

0xd402,	// (0x0003368d) main_cam5_pane_t7

0xd414,	// (0x0003369f) main_cam5_pane_t8_ParamLimits

0xd414,	// (0x0003369f) main_cam5_pane_t8

0xd432,	// (0x000336bd) main_cam5_pane_t9_ParamLimits

0xd432,	// (0x000336bd) main_cam5_pane_t9

0xd444,	// (0x000336cf) main_cam5_pane_t10_ParamLimits

0xd444,	// (0x000336cf) main_cam5_pane_t10

0xd456,	// (0x000336e1) main_cam5_pane_t11_ParamLimits

0xd456,	// (0x000336e1) main_cam5_pane_t11

0xd46a,	// (0x000336f5) main_cam5_pane_t12_ParamLimits

0xd46a,	// (0x000336f5) main_cam5_pane_t12

0xd481,	// (0x0003370c) main_cam5_pane_t13_ParamLimits

0xd481,	// (0x0003370c) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x00035cf7) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x00035cf7) main_cam5_pane_t

0x1eba,	// (0x00028145) popup_scut_keymap_window_ParamLimits

0x1eba,	// (0x00028145) popup_scut_keymap_window

0x8c4d,	// (0x0002eed8) aid_size_cell_brow_shortcut

0x4ec7,	// (0x0002b152) bg_popup_window_pane_cp010

0x8c59,	// (0x0002eee4) grid_scut_pane

0x8c65,	// (0x0002eef0) cell_scut_pane_ParamLimits

0x8c65,	// (0x0002eef0) cell_scut_pane

0x8c7e,	// (0x0002ef09) cell_scut_pane_g1

0xd4a4,	// (0x0003372f) cell_scut_pane_t1

0xd4b3,	// (0x0003373e) cell_scut_pane_t2

0x8c87,	// (0x0002ef12) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00035d12) cell_scut_pane_t

0x7325,	// (0x0002d5b0) main_mup3_pane_g8_ParamLimits

0x7325,	// (0x0002d5b0) main_mup3_pane_g8

0x17df,	// (0x00027a6a) area_vitu2_query_pane_ParamLimits

0x17df,	// (0x00027a6a) area_vitu2_query_pane

0x89b8,	// (0x0002ec43) input_focus_pane_cp08

0xd4c2,	// (0x0003374d) area_vitu2_query_pane_g1

0x8c95,	// (0x0002ef20) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00035d19) area_vitu2_query_pane_g

0x8ca6,	// (0x0002ef31) area_vitu2_query_pane_t1_ParamLimits

0x8ca6,	// (0x0002ef31) area_vitu2_query_pane_t1

0x8cba,	// (0x0002ef45) area_vitu2_query_pane_t2_ParamLimits

0x8cba,	// (0x0002ef45) area_vitu2_query_pane_t2

0x8cce,	// (0x0002ef59) area_vitu2_query_pane_t3_ParamLimits

0x8cce,	// (0x0002ef59) area_vitu2_query_pane_t3

0xd4ce,	// (0x00033759) area_vitu2_query_pane_t4_ParamLimits

0xd4ce,	// (0x00033759) area_vitu2_query_pane_t4

0xd4f6,	// (0x00033781) area_vitu2_query_pane_t5_ParamLimits

0xd4f6,	// (0x00033781) area_vitu2_query_pane_t5

0xd51e,	// (0x000337a9) area_vitu2_query_pane_t6_ParamLimits

0xd51e,	// (0x000337a9) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00035d1e) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00035d1e) area_vitu2_query_pane_t

0x8cf6,	// (0x0002ef81) bg_button_pane_cp018

0x8d04,	// (0x0002ef8f) bg_button_pane_cp021

0x8d10,	// (0x0002ef9b) bg_button_pane_cp022

0x8d21,	// (0x0002efac) input_focus_pane_cp09

0x4cec,	// (0x0002af77) aid_size_touch_mv_arrow_left

0x4d15,	// (0x0002afa0) aid_size_touch_mv_arrow_right

0x85b5,	// (0x0002e840) main_cset_slider_pane_g16_ParamLimits

0x85b5,	// (0x0002e840) main_cset_slider_pane_g16

0x85c3,	// (0x0002e84e) main_cset_slider_pane_g17_ParamLimits

0x85c3,	// (0x0002e84e) main_cset_slider_pane_g17

0x8c3a,	// (0x0002eec5) cell_cam4_burst_pane_g1_ParamLimits

0x1c79,	// (0x00027f04) compa_mode_pane

0x87cb,	// (0x0002ea56) popup_vtel_slider_window_g3_ParamLimits

0x87cb,	// (0x0002ea56) popup_vtel_slider_window_g3

0x87e2,	// (0x0002ea6d) popup_vtel_slider_window_g4_ParamLimits

0x87e2,	// (0x0002ea6d) popup_vtel_slider_window_g4

0x87f9,	// (0x0002ea84) popup_vtel_slider_window_t1_ParamLimits

0x87f9,	// (0x0002ea84) popup_vtel_slider_window_t1

0x1c79,	// (0x00027f04) main_cl_pane

0xbcda,	// (0x00031f65) popup_imed_adjust2_window_ParamLimits

0xbcae,	// (0x00031f39) bg_tb_trans_pane_cp05_ParamLimits

0xc726,	// (0x000329b1) popup_imed_adjust2_window_g1_ParamLimits

0xc735,	// (0x000329c0) popup_imed_adjust2_window_g2_ParamLimits

0xc735,	// (0x000329c0) popup_imed_adjust2_window_g2

0xc741,	// (0x000329cc) popup_imed_adjust2_window_g3_ParamLimits

0xc741,	// (0x000329cc) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00035a89) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00035a89) popup_imed_adjust2_window_g

0xc74d,	// (0x000329d8) popup_imed_adjust2_window_t1_ParamLimits

0xc765,	// (0x000329f0) slider_imed_adjust_pane_ParamLimits

0xc779,	// (0x00032a04) slider_imed_adjust_pane_g1_ParamLimits

0xc789,	// (0x00032a14) slider_imed_adjust_pane_g2_ParamLimits

0xc799,	// (0x00032a24) slider_imed_adjust_pane_g3_ParamLimits

0xc7aa,	// (0x00032a35) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00035a90) slider_imed_adjust_pane_g_ParamLimits

0x1565,	// (0x000277f0) aid_touch_area_cam4_ParamLimits

0x1565,	// (0x000277f0) aid_touch_area_cam4

0xce85,	// (0x00033110) battery_pane_cp01

0x1610,	// (0x0002789b) main_camera4_pane_g6_ParamLimits

0x1610,	// (0x0002789b) main_camera4_pane_g6

0x1633,	// (0x000278be) main_camera4_pane_t2_ParamLimits

0x1633,	// (0x000278be) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00035b93) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00035b93) main_camera4_pane_t

0x1654,	// (0x000278df) aid_touch_area_vid4_ParamLimits

0x1654,	// (0x000278df) aid_touch_area_vid4

0x16b2,	// (0x0002793d) main_video4_pane_g5_ParamLimits

0x16b2,	// (0x0002793d) main_video4_pane_g5

0x16d9,	// (0x00027964) vid4_progress_pane_ParamLimits

0x16d9,	// (0x00027964) vid4_progress_pane

0xd0fd,	// (0x00033388) main_cset_slider_pane_g18_ParamLimits

0xd0fd,	// (0x00033388) main_cset_slider_pane_g18

0xd380,	// (0x0003360b) cell_cam4_burst_pane_g2_ParamLimits

0xd380,	// (0x0003360b) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00035cf2) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00035cf2) cell_cam4_burst_pane_g

0x28fd,	// (0x00028b88) bg_cl_pane_ParamLimits

0x28fd,	// (0x00028b88) bg_cl_pane

0x8d32,	// (0x0002efbd) cl_header_pane_ParamLimits

0x8d32,	// (0x0002efbd) cl_header_pane

0x8d46,	// (0x0002efd1) cl_listscroll_pane_ParamLimits

0x8d46,	// (0x0002efd1) cl_listscroll_pane

0xd56a,	// (0x000337f5) bg_cl_pane_g1

0xd572,	// (0x000337fd) bg_cl_pane_g2

0xd57a,	// (0x00033805) bg_cl_pane_g3

0xd582,	// (0x0003380d) bg_cl_pane_g4

0xd58a,	// (0x00033815) bg_cl_pane_g5

0xd592,	// (0x0003381d) bg_cl_pane_g6

0xd59a,	// (0x00033825) bg_cl_pane_g7

0xd5a2,	// (0x0003382d) bg_cl_pane_g8

0xd5aa,	// (0x00033835) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x00035d2d) bg_cl_pane_g

0x8d56,	// (0x0002efe1) aid_height_cl_leading_ParamLimits

0x8d56,	// (0x0002efe1) aid_height_cl_leading

0x8d62,	// (0x0002efed) aid_height_cl_text_ParamLimits

0x8d62,	// (0x0002efed) aid_height_cl_text

0x1ef4,	// (0x0002817f) bg_cl_header_pane_ParamLimits

0x1ef4,	// (0x0002817f) bg_cl_header_pane

0x8d81,	// (0x0002f00c) cl_header_pane_g1_ParamLimits

0x8d81,	// (0x0002f00c) cl_header_pane_g1

0x8d97,	// (0x0002f022) cl_header_pane_t1_ParamLimits

0x8d97,	// (0x0002f022) cl_header_pane_t1

0xd5b2,	// (0x0003383d) cl_list_pane

0xd0d0,	// (0x0003335b) hc_scroll_pane_cp01

0x3995,	// (0x00029c20) bg_cl_header_pane_g1

0xcfb2,	// (0x0003323d) bg_cl_header_pane_g2

0x39b5,	// (0x00029c40) bg_cl_header_pane_g3

0xcfc2,	// (0x0003324d) bg_cl_header_pane_g4

0xcfba,	// (0x00033245) bg_cl_header_pane_g5

0xd24d,	// (0x000334d8) bg_cl_header_pane_g6

0xcfda,	// (0x00033265) bg_cl_header_pane_g7

0xcfe2,	// (0x0003326d) bg_cl_header_pane_g8

0xcfd2,	// (0x0003325d) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x00035d40) bg_cl_header_pane_g

0x8db0,	// (0x0002f03b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8db0,	// (0x0002f03b) hc_cl_list_double_graphic_heading_pane

0x8dc3,	// (0x0002f04e) hc_cl_list_single_graphic_pane_ParamLimits

0x8dc3,	// (0x0002f04e) hc_cl_list_single_graphic_pane

0x8ddb,	// (0x0002f066) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8ddb,	// (0x0002f066) hc_cl_list_single_graphic_pane_g1

0x8de7,	// (0x0002f072) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8de7,	// (0x0002f072) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00035d53) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00035d53) hc_cl_list_single_graphic_pane_g

0x8dfb,	// (0x0002f086) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8dfb,	// (0x0002f086) hc_cl_list_single_graphic_pane_t1

0x8ddb,	// (0x0002f066) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8ddb,	// (0x0002f066) hc_cl_list_double_graphic_heading_pane_g1

0x8e10,	// (0x0002f09b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8e10,	// (0x0002f09b) hc_cl_list_double_graphic_heading_pane_g2

0x8e24,	// (0x0002f0af) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8e24,	// (0x0002f0af) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00035d58) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00035d58) hc_cl_list_double_graphic_heading_pane_g

0x8e38,	// (0x0002f0c3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8e38,	// (0x0002f0c3) hc_cl_list_double_graphic_heading_pane_t1

0x8e4d,	// (0x0002f0d8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8e4d,	// (0x0002f0d8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00035d5f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00035d5f) hc_cl_list_double_graphic_heading_pane_t

0xd5c3,	// (0x0003384e) vid4_progress_pane_g1

0xd5cf,	// (0x0003385a) vid4_progress_pane_g2

0xd5db,	// (0x00033866) vid4_progress_pane_g3

0xd5ea,	// (0x00033875) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00035d64) vid4_progress_pane_g

0xd608,	// (0x00033893) vid4_progress_pane_t1

0xd61e,	// (0x000338a9) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00035d6f) vid4_progress_pane_t

0xd649,	// (0x000338d4) wait_bar_pane_cp07

0xbfd0,	// (0x0003225b) blid_firmament_pane_ParamLimits

0xc013,	// (0x0003229e) popup_blid_sat_info2_window_g1

0xc037,	// (0x000322c2) popup_blid_sat_info2_window_t3

0xc045,	// (0x000322d0) popup_blid_sat_info2_window_t4

0xc053,	// (0x000322de) popup_blid_sat_info2_window_t5

0xc061,	// (0x000322ec) popup_blid_sat_info2_window_t6

0xc071,	// (0x000322fc) popup_blid_sat_info2_window_t7

0xc07f,	// (0x0003230a) popup_blid_sat_info2_window_t8

0xc08d,	// (0x00032318) popup_blid_sat_info2_window_t9

0xc09b,	// (0x00032326) popup_blid_sat_info2_window_t10

0xc163,	// (0x000323ee) aid_firma_cardinal_ParamLimits

0xc177,	// (0x00032402) blid_firmament_pane_t1_ParamLimits

0xc18e,	// (0x00032419) blid_firmament_pane_t2_ParamLimits

0xc1a5,	// (0x00032430) blid_firmament_pane_t3_ParamLimits

0xc1bc,	// (0x00032447) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00035982) blid_firmament_pane_t_ParamLimits

0xc1d3,	// (0x0003245e) blid_sat_info_pane_ParamLimits

0x1ef4,	// (0x0002817f) main_cam_set_pane_ParamLimits

0x7b55,	// (0x0002dde0) aid_size_cell_colour_35_ParamLimits

0x7b75,	// (0x0002de00) aid_size_cell_colour_112_ParamLimits

0x7b95,	// (0x0002de20) aid_size_cell_effect_ParamLimits

0xbcae,	// (0x00031f39) bg_tb_trans_pane_cp02_ParamLimits

0x44e1,	// (0x0002a76c) heading_imed_pane_ParamLimits

0x7bb5,	// (0x0002de40) listscroll_imed_pane_ParamLimits

0xb2dc,	// (0x00031567) popup_call2_audio_first_window_g5_ParamLimits

0xb2dc,	// (0x00031567) popup_call2_audio_first_window_g5

0x1340,	// (0x000275cb) aid_size_touch_image3_arrow_left_ParamLimits

0x1340,	// (0x000275cb) aid_size_touch_image3_arrow_left

0x136c,	// (0x000275f7) aid_size_touch_image3_arrow_right_ParamLimits

0x136c,	// (0x000275f7) aid_size_touch_image3_arrow_right

0xd634,	// (0x000338bf) vid4_progress_pane_t3

0x7ed2,	// (0x0002e15d) main_hwr_training_symbol_option_pane_ParamLimits

0x7ed2,	// (0x0002e15d) main_hwr_training_symbol_option_pane

0xca15,	// (0x00032ca0) popup_hwr_training_preview_window_ParamLimits

0xca15,	// (0x00032ca0) popup_hwr_training_preview_window

0x11d3,	// (0x0002745e) hwr_training_navi_pane_g5_ParamLimits

0x11d3,	// (0x0002745e) hwr_training_navi_pane_g5

0xcf92,	// (0x0003321d) popup_char_count_window

0xcf9a,	// (0x00033225) bg_popup_sub_pane_cp20_ParamLimits

0x1b6d,	// (0x00027df8) list_vitu2_match_list_pane_ParamLimits

0x1b7c,	// (0x00027e07) vitu2_page_scroll_pane_ParamLimits

0x1b7c,	// (0x00027e07) vitu2_page_scroll_pane

0xd6b5,	// (0x00033940) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd6b5,	// (0x00033940) list_single_hwr_training_symbol_option_pane

0xd6c8,	// (0x00033953) list_single_hwr_training_symbol_option_pane_g1

0xd6d0,	// (0x0003395b) list_single_hwr_training_symbol_option_pane_t1

0xd6de,	// (0x00033969) bg_button_pane_cp023

0xd6e7,	// (0x00033972) bg_button_pane_cp024

0x8e62,	// (0x0002f0ed) vitu2_page_scroll_pane_g1

0x8e6a,	// (0x0002f0f5) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00035d76) vitu2_page_scroll_pane_g

0x8e74,	// (0x0002f0ff) vitu2_page_scroll_pane_t1

0xbeec,	// (0x00032177) popup_char_count_window_g1

0xd71a,	// (0x000339a5) popup_char_count_window_g2

0xd723,	// (0x000339ae) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00035d7b) popup_char_count_window_g

0xd72c,	// (0x000339b7) popup_char_count_window_t1

0x1c79,	// (0x00027f04) main_vded2_pane

0xc712,	// (0x0003299d) aid_size_cell_imed_line

0xc71c,	// (0x000329a7) grid_imed_line_width_pane

0x1749,	// (0x000279d4) vid4_indicators_pane_g4

0xd73a,	// (0x000339c5) cell_imed_line_width_pane_ParamLimits

0xd73a,	// (0x000339c5) cell_imed_line_width_pane

0xd750,	// (0x000339db) cell_imed_line_width_pane_g1

0xbf7e,	// (0x00032209) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00035d82) cell_imed_line_width_pane_g

0x8e83,	// (0x0002f10e) main_vded2_pane_g1_ParamLimits

0x8e83,	// (0x0002f10e) main_vded2_pane_g1

0x8e9e,	// (0x0002f129) main_vded2_pane_g2_ParamLimits

0x8e9e,	// (0x0002f129) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00035d87) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00035d87) main_vded2_pane_g

0x8eb0,	// (0x0002f13b) vded2_slider_pane_ParamLimits

0x8eb0,	// (0x0002f13b) vded2_slider_pane

0x8ec0,	// (0x0002f14b) aid_size_touch_vded2_end

0x8eca,	// (0x0002f155) aid_size_touch_vded2_playhead

0xd759,	// (0x000339e4) aid_size_touch_vded2_start

0xd761,	// (0x000339ec) vded2_slider_bg_pane

0xd76a,	// (0x000339f5) vded2_slider_pane_g1

0xd773,	// (0x000339fe) vded2_slider_pane_g2

0x8ed4,	// (0x0002f15f) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00035d8c) vded2_slider_pane_g

0xd77b,	// (0x00033a06) vded2_slider_bg_pane_g1

0xd784,	// (0x00033a0f) vded2_slider_bg_pane_g2

0xd78d,	// (0x00033a18) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x00035d93) vded2_slider_bg_pane_g

0x5640,	// (0x0002b8cb) aid_postcard_touch_down_pane_ParamLimits

0x5640,	// (0x0002b8cb) aid_postcard_touch_down_pane

0x5658,	// (0x0002b8e3) aid_postcard_touch_up_pane_ParamLimits

0x5658,	// (0x0002b8e3) aid_postcard_touch_up_pane

0x1c79,	// (0x00027f04) main_blid2_pane

0xbcbc,	// (0x00031f47) popup_blid2_search_window

0x1c79,	// (0x00027f04) blid2_gps_pane

0x1c79,	// (0x00027f04) blid2_navig_pane

0x1c79,	// (0x00027f04) blid2_search_pane

0x1c79,	// (0x00027f04) blid2_tripm_pane

0x8edf,	// (0x0002f16a) blid2_search_pane_g1_ParamLimits

0x8edf,	// (0x0002f16a) blid2_search_pane_g1

0x8ef7,	// (0x0002f182) blid2_search_pane_t1_ParamLimits

0x8ef7,	// (0x0002f182) blid2_search_pane_t1

0x8f09,	// (0x0002f194) aid_size_cell_blid2_gps_ParamLimits

0x8f09,	// (0x0002f194) aid_size_cell_blid2_gps

0x8f21,	// (0x0002f1ac) blid2_gps_pane_g1_ParamLimits

0x8f21,	// (0x0002f1ac) blid2_gps_pane_g1

0x8f35,	// (0x0002f1c0) grid_blid2_satellite_pane_ParamLimits

0x8f35,	// (0x0002f1c0) grid_blid2_satellite_pane

0x8f4d,	// (0x0002f1d8) blid2_navig_pane_g1_ParamLimits

0x8f4d,	// (0x0002f1d8) blid2_navig_pane_g1

0x8f59,	// (0x0002f1e4) blid2_navig_pane_t1_ParamLimits

0x8f59,	// (0x0002f1e4) blid2_navig_pane_t1

0x8f74,	// (0x0002f1ff) blid2_navig_pane_t2_ParamLimits

0x8f74,	// (0x0002f1ff) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00035d9a) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00035d9a) blid2_navig_pane_t

0x8f8f,	// (0x0002f21a) blid2_navig_ring_pane_ParamLimits

0x8f8f,	// (0x0002f21a) blid2_navig_ring_pane

0x8faa,	// (0x0002f235) blid2_speed_pane_ParamLimits

0x8faa,	// (0x0002f235) blid2_speed_pane

0x8fb6,	// (0x0002f241) blid2_tripm_pane_g1_ParamLimits

0x8fb6,	// (0x0002f241) blid2_tripm_pane_g1

0x8fd1,	// (0x0002f25c) blid2_tripm_pane_g2_ParamLimits

0x8fd1,	// (0x0002f25c) blid2_tripm_pane_g2

0x8fe5,	// (0x0002f270) blid2_tripm_pane_g3_ParamLimits

0x8fe5,	// (0x0002f270) blid2_tripm_pane_g3

0x8ff9,	// (0x0002f284) blid2_tripm_pane_g4_ParamLimits

0x8ff9,	// (0x0002f284) blid2_tripm_pane_g4

0x900d,	// (0x0002f298) blid2_tripm_pane_g5_ParamLimits

0x900d,	// (0x0002f298) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00035d9f) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00035d9f) blid2_tripm_pane_g

0x9033,	// (0x0002f2be) blid2_tripm_pane_t1_ParamLimits

0x9033,	// (0x0002f2be) blid2_tripm_pane_t1

0x904e,	// (0x0002f2d9) blid2_tripm_pane_t2_ParamLimits

0x904e,	// (0x0002f2d9) blid2_tripm_pane_t2

0x9067,	// (0x0002f2f2) blid2_tripm_pane_t3_ParamLimits

0x9067,	// (0x0002f2f2) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00035dac) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00035dac) blid2_tripm_pane_t

0x90ae,	// (0x0002f339) cell_blid2_satellite_pane_ParamLimits

0x90ae,	// (0x0002f339) cell_blid2_satellite_pane

0x90ca,	// (0x0002f355) cell_blid2_satellite_pane_g1

0xd796,	// (0x00033a21) cell_blid2_satellite_pane_t1

0xc1e3,	// (0x0003246e) blid2_speed_pane_g1

0xd7a4,	// (0x00033a2f) blid2_speed_pane_t1

0xd7b2,	// (0x00033a3d) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x00035db5) blid2_speed_pane_t

0xc1e3,	// (0x0003246e) blid2_navig_ring_pane_g1

0x90d3,	// (0x0002f35e) blid2_navig_ring_pane_g2

0x90db,	// (0x0002f366) blid2_navig_ring_pane_g3

0x90e3,	// (0x0002f36e) blid2_navig_ring_pane_g4

0x90eb,	// (0x0002f376) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00035dba) blid2_navig_ring_pane_g

0x1c79,	// (0x00027f04) bg_popup_window_pane_cp011

0xd7c0,	// (0x00033a4b) popup_blid2_search_window_g1

0xd7c8,	// (0x00033a53) popup_blid2_search_window_t1

0xd7d6,	// (0x00033a61) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x00035dc5) popup_blid2_search_window_t

0x3852,	// (0x00029add) main_browser_pane_g1

0x28fd,	// (0x00028b88) main_browser_pane_ParamLimits

0xcf9a,	// (0x00033225) bg_button_pane_cp011_ParamLimits

0x1ae1,	// (0x00027d6c) cell_vitu2_function_pane_g1_ParamLimits

0xbcae,	// (0x00031f39) bg_popup_sub_pane_cp22_ParamLimits

0x89b8,	// (0x0002ec43) input_focus_pane_cp08_ParamLimits

0x89cf,	// (0x0002ec5a) popup_vitu2_query_button_pane_ParamLimits

0x89cf,	// (0x0002ec5a) popup_vitu2_query_button_pane

0x89e0,	// (0x0002ec6b) popup_vitu2_query_input_button_pane

0xd2ca,	// (0x00033555) popup_vitu2_query_window_g1_ParamLimits

0x89ea,	// (0x0002ec75) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00035cc6) popup_vitu2_query_window_g_ParamLimits

0x1c79,	// (0x00027f04) bg_button_pane_cp026

0x90f3,	// (0x0002f37e) popup_vitu2_query_input_button_pane_g1

0x1c79,	// (0x00027f04) bg_button_pane_cp025

0xd7e4,	// (0x00033a6f) popup_vitu2_query_button_pane_t1

0x7035,	// (0x0002d2c0) main_mp3_pane_t6

0x7043,	// (0x0002d2ce) popup_slider_window_cp01

0xcec5,	// (0x00033150) cam4_battery_pane

0xcf2c,	// (0x000331b7) cam4_battery_pane_cp02

0x1c06,	// (0x00027e91) cam4_battery_pane_cp01

0xd5bb,	// (0x00033846) cam4_battery_pane_cp03

0xcd20,	// (0x00032fab) cam4_battery_pane_g1

0xc1e3,	// (0x0003246e) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00035dca) cam4_battery_pane_g

0xc0a9,	// (0x00032334) popup_blid_sat_info2_window_t11

0x4cec,	// (0x0002af77) aid_size_touch_mv_arrow_left_ParamLimits

0x4d15,	// (0x0002afa0) aid_size_touch_mv_arrow_right_ParamLimits

0x4d5d,	// (0x0002afe8) navi_pane_g1_ParamLimits

0x4d69,	// (0x0002aff4) navi_pane_g2_ParamLimits

0x4d97,	// (0x0002b022) navi_pane_g3_ParamLimits

0xf409,	// (0x00035694) navi_pane_g_ParamLimits

0x4e55,	// (0x0002b0e0) navi_pane_mv_t1_ParamLimits

0x7bc1,	// (0x0002de4c) grid_imed_effect_pane_ParamLimits

0x33fe,	// (0x00029689) aid_placing_vt_slider_lsc

0x340e,	// (0x00029699) aid_placing_vt_slider_prt

0x1ef4,	// (0x0002817f) bg_tb_trans_pane_cp01_ParamLimits

0xc333,	// (0x000325be) popup_image_details_window_g1_ParamLimits

0xc346,	// (0x000325d1) popup_image_details_window_g2_ParamLimits

0xc35b,	// (0x000325e6) popup_image_details_window_g3_ParamLimits

0xc35b,	// (0x000325e6) popup_image_details_window_g3

0xf73c,	// (0x000359c7) popup_image_details_window_g_ParamLimits

0xc36f,	// (0x000325fa) popup_image_details_window_t1_ParamLimits

0xc381,	// (0x0003260c) popup_image_details_window_t2_ParamLimits

0xc39a,	// (0x00032625) popup_image_details_window_t3_ParamLimits

0xc3ae,	// (0x00032639) popup_image_details_window_t4_ParamLimits

0xc3c9,	// (0x00032654) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x000359ce) popup_image_details_window_t_ParamLimits

0x8d6e,	// (0x0002eff9) cl_header_name_pane_ParamLimits

0x8d6e,	// (0x0002eff9) cl_header_name_pane

0x90fb,	// (0x0002f386) cl_header_name_pane_t1_ParamLimits

0x90fb,	// (0x0002f386) cl_header_name_pane_t1

0x911c,	// (0x0002f3a7) cl_header_name_pane_t2_ParamLimits

0x911c,	// (0x0002f3a7) cl_header_name_pane_t2

0x915e,	// (0x0002f3e9) cl_header_name_pane_t3_ParamLimits

0x915e,	// (0x0002f3e9) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x00035dcf) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x00035dcf) cl_header_name_pane_t

0x4e26,	// (0x0002b0b1) navi_pane_mv_g2_ParamLimits

0xcf4f,	// (0x000331da) field_vitu2_entry_pane_g1_ParamLimits

0xcf5b,	// (0x000331e6) field_vitu2_entry_pane_g2_ParamLimits

0xcf67,	// (0x000331f2) field_vitu2_entry_pane_g3_ParamLimits

0xcf67,	// (0x000331f2) field_vitu2_entry_pane_g3

0xf93a,	// (0x00035bc5) field_vitu2_entry_pane_g_ParamLimits

0x1981,	// (0x00027c0c) cell_vitu2_itu_pane_g1_ParamLimits

0x1991,	// (0x00027c1c) cell_vitu2_itu_pane_g2_ParamLimits

0x1991,	// (0x00027c1c) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00035bd1) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00035bd1) cell_vitu2_itu_pane_g

0xcf9a,	// (0x00033225) bg_vkb2_func_pane_cp05_ParamLimits

0xcf9a,	// (0x00033225) bg_vkb2_func_pane_cp05

0xcf9a,	// (0x00033225) bg_vkb2_func_pane_cp03

0xcf9a,	// (0x00033225) bg_vkb2_func_pane_cp04

0xcf9a,	// (0x00033225) bg_vkb2_func_pane_cp10_ParamLimits

0xcf9a,	// (0x00033225) bg_vkb2_func_pane_cp10

0x8d10,	// (0x0002ef9b) bg_vkb2_func_pane_cp08

0x8cf6,	// (0x0002ef81) bg_vkb2_func_pane_cp06

0x8d04,	// (0x0002ef8f) bg_vkb2_func_pane_cp07

0xd6f0,	// (0x0003397b) bg_vkb2_func_pane_cp11_ParamLimits

0xd6f0,	// (0x0003397b) bg_vkb2_func_pane_cp11

0xd705,	// (0x00033990) bg_vkb2_func_pane_cp12_ParamLimits

0xd705,	// (0x00033990) bg_vkb2_func_pane_cp12

0x1c79,	// (0x00027f04) bg_vkb2_func_pane_cp09

0xcfb2,	// (0x0003323d) bg_vkb2_func_pane_g1

0x39b5,	// (0x00029c40) bg_vkb2_func_pane_g2

0xcfba,	// (0x00033245) bg_vkb2_func_pane_g3

0xcfc2,	// (0x0003324d) bg_vkb2_func_pane_g4

0xd24d,	// (0x000334d8) bg_vkb2_func_pane_g5

0xcfda,	// (0x00033265) bg_vkb2_func_pane_g6

0xcfe2,	// (0x0003326d) bg_vkb2_func_pane_g7

0xcfd2,	// (0x0003325d) bg_vkb2_func_pane_g8

0x3995,	// (0x00029c20) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x00035dd6) bg_vkb2_func_pane_g

0x9021,	// (0x0002f2ac) blid2_tripm_pane_g6_ParamLimits

0x9021,	// (0x0002f2ac) blid2_tripm_pane_g6

0xccda,	// (0x00032f65) mp4_progress_pane_g1

0x909a,	// (0x0002f325) blid2_tripm_values_pane_ParamLimits

0x909a,	// (0x0002f325) blid2_tripm_values_pane

0x918f,	// (0x0002f41a) blid2_tripm_values_pane_t1

0x919d,	// (0x0002f428) blid2_tripm_values_pane_t2

0x91ab,	// (0x0002f436) blid2_tripm_values_pane_t3

0x91b9,	// (0x0002f444) blid2_tripm_values_pane_t4

0x91c7,	// (0x0002f452) blid2_tripm_values_pane_t5

0x91d5,	// (0x0002f460) blid2_tripm_values_pane_t6

0x91e3,	// (0x0002f46e) blid2_tripm_values_pane_t7

0x91f1,	// (0x0002f47c) blid2_tripm_values_pane_t8

0x91ff,	// (0x0002f48a) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x00035de9) blid2_tripm_values_pane_t

0x3448,	// (0x000296d3) call_video_pane_t1_ParamLimits

0x3462,	// (0x000296ed) call_video_pane_t2_ParamLimits

0xf292,	// (0x0003551d) call_video_pane_t_ParamLimits

0x5559,	// (0x0002b7e4) msg_header_pane_g1_ParamLimits

0x5567,	// (0x0002b7f2) msg_header_pane_g2_ParamLimits

0x5567,	// (0x0002b7f2) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00035737) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00035737) msg_header_pane_g

0x28fd,	// (0x00028b88) main_clock2_pane_ParamLimits

0x794c,	// (0x0002dbd7) grid_clock2_toolbar_pane_ParamLimits

0x794c,	// (0x0002dbd7) grid_clock2_toolbar_pane

0x794c,	// (0x0002dbd7) listscroll_clock2_pane_ParamLimits

0x794c,	// (0x0002dbd7) listscroll_clock2_pane

0x7a35,	// (0x0002dcc0) main_clock2_pane_t3_ParamLimits

0x7a35,	// (0x0002dcc0) main_clock2_pane_t3

0x7a50,	// (0x0002dcdb) main_clock2_pane_t4_ParamLimits

0x7a50,	// (0x0002dcdb) main_clock2_pane_t4

0xd7f2,	// (0x00033a7d) cell_clock2_toolbar_pane

0xd7fa,	// (0x00033a85) cell_clock2_toolbar_pane_cp01

0xd7fa,	// (0x00033a85) cell_clock2_toolbar_pane_cp02

0xd802,	// (0x00033a8d) cell_clock2_toolbar_pane_cp03

0xd80a,	// (0x00033a95) list_clock2_pane

0x4a76,	// (0x0002ad01) scroll_pane_cp10

0xd812,	// (0x00033a9d) list_single_clock2_pane_ParamLimits

0xd812,	// (0x00033a9d) list_single_clock2_pane

0x4ec7,	// (0x0002b152) list_highlight_pane_cp08

0xd81f,	// (0x00033aaa) list_single_clock2_pane_t1

0xd82d,	// (0x00033ab8) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x00035dfc) list_single_clock2_pane_t

0x1c79,	// (0x00027f04) bg_button_pane_cp10

0xd83b,	// (0x00033ac6) cell_clock2_toolbar_pane_g1

0x0cb1,	// (0x00026f3c) aid_main_viewer_pane_g1_ParamLimits

0x0cb1,	// (0x00026f3c) aid_main_viewer_pane_g1

0x0cbf,	// (0x00026f4a) aid_main_viewer_pane_g2_ParamLimits

0x0cbf,	// (0x00026f4a) aid_main_viewer_pane_g2

0x55f6,	// (0x0002b881) aid_main_viewer_pane_g3_ParamLimits

0x55f6,	// (0x0002b881) aid_main_viewer_pane_g3

0x5605,	// (0x0002b890) aid_main_viewer_pane_g4_ParamLimits

0x5605,	// (0x0002b890) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00035748) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00035748) aid_main_viewer_pane_g

0x669f,	// (0x0002c92a) main_calc_pane_ParamLimits

0x66b3,	// (0x0002c93e) main_dialer2_pane_ParamLimits

0x1c79,	// (0x00027f04) main_cam6_pane

0x1c79,	// (0x00027f04) main_vid6_pane

0x7958,	// (0x0002dbe3) listscroll_gen_pane_cp06_ParamLimits

0x7958,	// (0x0002dbe3) listscroll_gen_pane_cp06

0x7a6b,	// (0x0002dcf6) main_clock2_pane_t5_ParamLimits

0x7a6b,	// (0x0002dcf6) main_clock2_pane_t5

0x7ac8,	// (0x0002dd53) aid_call2_pane_cp10_ParamLimits

0x7ada,	// (0x0002dd65) aid_call_pane_cp10_ParamLimits

0x4c77,	// (0x0002af02) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4c77,	// (0x0002af02) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7aec,	// (0x0002dd77) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7aec,	// (0x0002dd77) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4c77,	// (0x0002af02) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00035a7e) popup_clock_analogue_window_cp10_g_ParamLimits

0x7b02,	// (0x0002dd8d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7fba,	// (0x0002e245) cell_dialer2_keypad_pane_g2_ParamLimits

0x7fba,	// (0x0002e245) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00035b64) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00035b64) cell_dialer2_keypad_pane_g

0x7fd6,	// (0x0002e261) cell_dialer2_keypad_pane_t1

0x84a6,	// (0x0002e731) main_cset_text2_pane_ParamLimits

0x84a6,	// (0x0002e731) main_cset_text2_pane

0xd4c2,	// (0x0003374d) area_vitu2_query_pane_g1_ParamLimits

0x8c95,	// (0x0002ef20) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00035d19) area_vitu2_query_pane_g_ParamLimits

0xd546,	// (0x000337d1) area_vitu2_query_pane_t7_ParamLimits

0xd546,	// (0x000337d1) area_vitu2_query_pane_t7

0x8cf6,	// (0x0002ef81) bg_button_pane_cp018_ParamLimits

0x8d04,	// (0x0002ef8f) bg_button_pane_cp021_ParamLimits

0x8d10,	// (0x0002ef9b) bg_button_pane_cp022_ParamLimits

0x8d10,	// (0x0002ef9b) bg_vkb2_func_pane_cp08_ParamLimits

0x8cf6,	// (0x0002ef81) bg_vkb2_func_pane_cp06_ParamLimits

0x8d04,	// (0x0002ef8f) bg_vkb2_func_pane_cp07_ParamLimits

0x8d21,	// (0x0002efac) input_focus_pane_cp09_ParamLimits

0xd843,	// (0x00033ace) cam6_autofocus_pane_ParamLimits

0xd843,	// (0x00033ace) cam6_autofocus_pane

0x1c10,	// (0x00027e9b) cam6_image_uncrop_pane_ParamLimits

0x1c10,	// (0x00027e9b) cam6_image_uncrop_pane

0x1c1f,	// (0x00027eaa) cam6_indi_pane_ParamLimits

0x1c1f,	// (0x00027eaa) cam6_indi_pane

0x1c35,	// (0x00027ec0) cam6_mode_pane_ParamLimits

0x1c35,	// (0x00027ec0) cam6_mode_pane

0x1c47,	// (0x00027ed2) cam6_timer_pane_ParamLimits

0x1c47,	// (0x00027ed2) cam6_timer_pane

0x1c53,	// (0x00027ede) cam6_zoom_pane_ParamLimits

0x1c53,	// (0x00027ede) cam6_zoom_pane

0x920d,	// (0x0002f498) cam6_mode_pane_g1_ParamLimits

0x920d,	// (0x0002f498) cam6_mode_pane_g1

0x921d,	// (0x0002f4a8) cam6_mode_pane_g2_ParamLimits

0x921d,	// (0x0002f4a8) cam6_mode_pane_g2

0x922d,	// (0x0002f4b8) cam6_mode_pane_g3_ParamLimits

0x922d,	// (0x0002f4b8) cam6_mode_pane_g3

0x923d,	// (0x0002f4c8) cam6_mode_pane_g4_ParamLimits

0x923d,	// (0x0002f4c8) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00035e01) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00035e01) cam6_mode_pane_g

0xd851,	// (0x00033adc) bg_tb_trans_pane_cp08_ParamLimits

0xd851,	// (0x00033adc) bg_tb_trans_pane_cp08

0xd85f,	// (0x00033aea) cam6_battery_pane_ParamLimits

0xd85f,	// (0x00033aea) cam6_battery_pane

0xd875,	// (0x00033b00) cam6_indi_pane_g1_ParamLimits

0xd875,	// (0x00033b00) cam6_indi_pane_g1

0xd887,	// (0x00033b12) cam6_indi_pane_g2_ParamLimits

0xd887,	// (0x00033b12) cam6_indi_pane_g2

0xd899,	// (0x00033b24) cam6_indi_pane_g3_ParamLimits

0xd899,	// (0x00033b24) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00035e0a) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00035e0a) cam6_indi_pane_g

0xd8ab,	// (0x00033b36) cam6_indi_pane_t1_ParamLimits

0xd8ab,	// (0x00033b36) cam6_indi_pane_t1

0x815a,	// (0x0002e3e5) cam6_autofocus_pane_g1

0x8152,	// (0x0002e3dd) cam6_autofocus_pane_g2

0x816a,	// (0x0002e3f5) cam6_autofocus_pane_g3

0x8162,	// (0x0002e3ed) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x00035e11) cam6_autofocus_pane_g

0xd8d1,	// (0x00033b5c) cam6_timer_pane_g1

0xd8d9,	// (0x00033b64) cam6_timer_pane_t1

0xd8e7,	// (0x00033b72) cam6_zoom_cont_pane

0xd8ef,	// (0x00033b7a) cam6_zoom_pane_g1

0xd8f7,	// (0x00033b82) cam6_zoom_pane_g2

0x924d,	// (0x0002f4d8) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00035e1a) cam6_zoom_pane_g

0xc1e3,	// (0x0003246e) cam6_battery_pane_g1

0xc1e3,	// (0x0003246e) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0003598b) cam6_battery_pane_g

0xd8ff,	// (0x00033b8a) cam6_zoom_cont_pane_g1

0xd908,	// (0x00033b93) cam6_zoom_cont_pane_g2

0xd911,	// (0x00033b9c) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x00035e21) cam6_zoom_cont_pane_g

0x926a,	// (0x0002f4f5) cam6_mode_pane_cp_ParamLimits

0x926a,	// (0x0002f4f5) cam6_mode_pane_cp

0x927c,	// (0x0002f507) cam6_zoom_pane_cp_ParamLimits

0x927c,	// (0x0002f507) cam6_zoom_pane_cp

0x928a,	// (0x0002f515) vid6_image_uncrop_cif_pane_ParamLimits

0x928a,	// (0x0002f515) vid6_image_uncrop_cif_pane

0x929a,	// (0x0002f525) vid6_image_uncrop_nhd_pane_ParamLimits

0x929a,	// (0x0002f525) vid6_image_uncrop_nhd_pane

0x92a9,	// (0x0002f534) vid6_image_uncrop_vga_pane_ParamLimits

0x92a9,	// (0x0002f534) vid6_image_uncrop_vga_pane

0x92b8,	// (0x0002f543) vid6_image_uncrop_wvga_pane_ParamLimits

0x92b8,	// (0x0002f543) vid6_image_uncrop_wvga_pane

0x92c7,	// (0x0002f552) vid6_indi_pane_ParamLimits

0x92c7,	// (0x0002f552) vid6_indi_pane

0xd851,	// (0x00033adc) bg_tb_trans_pane_cp09_ParamLimits

0xd851,	// (0x00033adc) bg_tb_trans_pane_cp09

0xd929,	// (0x00033bb4) cam6_battery_pane_cp_ParamLimits

0xd929,	// (0x00033bb4) cam6_battery_pane_cp

0xd935,	// (0x00033bc0) vid6_indi_pane_g1_ParamLimits

0xd935,	// (0x00033bc0) vid6_indi_pane_g1

0xd947,	// (0x00033bd2) vid6_indi_pane_g2_ParamLimits

0xd947,	// (0x00033bd2) vid6_indi_pane_g2

0xd959,	// (0x00033be4) vid6_indi_pane_g3_ParamLimits

0xd959,	// (0x00033be4) vid6_indi_pane_g3

0xd970,	// (0x00033bfb) vid6_indi_pane_g4_ParamLimits

0xd970,	// (0x00033bfb) vid6_indi_pane_g4

0xd987,	// (0x00033c12) vid6_indi_pane_g5_ParamLimits

0xd987,	// (0x00033c12) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x00035e28) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x00035e28) vid6_indi_pane_g

0xd9a1,	// (0x00033c2c) vid6_indi_pane_t1_ParamLimits

0xd9a1,	// (0x00033c2c) vid6_indi_pane_t1

0xd9b7,	// (0x00033c42) vid6_indi_pane_t2_ParamLimits

0xd9b7,	// (0x00033c42) vid6_indi_pane_t2

0xd9df,	// (0x00033c6a) vid6_indi_pane_t3_ParamLimits

0xd9df,	// (0x00033c6a) vid6_indi_pane_t3

0xda07,	// (0x00033c92) vid6_indi_pane_t4_ParamLimits

0xda07,	// (0x00033c92) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x00035e33) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x00035e33) vid6_indi_pane_t

0xda2b,	// (0x00033cb6) wait_bar_pane_cp08

0x92df,	// (0x0002f56a) main_cset_text2_pane_t1_ParamLimits

0x92df,	// (0x0002f56a) main_cset_text2_pane_t1

0x9255,	// (0x0002f4e0) listscroll_gen_pane_cp06_t1_ParamLimits

0x9255,	// (0x0002f4e0) listscroll_gen_pane_cp06_t1

0x1c79,	// (0x00027f04) main_cam6_set_pane

0xceb7,	// (0x00033142) bg_tb_trans_pane_cp06_ParamLimits

0xcecd,	// (0x00033158) cam4_indicators_pane_g1_ParamLimits

0xceda,	// (0x00033165) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00035ba1) cam4_indicators_pane_g_ParamLimits

0xcefa,	// (0x00033185) cam4_indicators_pane_t1_ParamLimits

0xcf1e,	// (0x000331a9) bg_tb_trans_pane_cp07_ParamLimits

0x1722,	// (0x000279ad) vid4_indicators_pane_g1_ParamLimits

0x172f,	// (0x000279ba) vid4_indicators_pane_g2_ParamLimits

0x173c,	// (0x000279c7) vid4_indicators_pane_g3_ParamLimits

0x1749,	// (0x000279d4) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00035bb3) vid4_indicators_pane_g_ParamLimits

0x1761,	// (0x000279ec) vid4_indicators_pane_t1_ParamLimits

0xd5c3,	// (0x0003384e) vid4_progress_pane_g1_ParamLimits

0xd5cf,	// (0x0003385a) vid4_progress_pane_g2_ParamLimits

0xd5db,	// (0x00033866) vid4_progress_pane_g3_ParamLimits

0xd5ea,	// (0x00033875) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00035d64) vid4_progress_pane_g_ParamLimits

0xd608,	// (0x00033893) vid4_progress_pane_t1_ParamLimits

0xd61e,	// (0x000338a9) vid4_progress_pane_t2_ParamLimits

0xd634,	// (0x000338bf) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00035d6f) vid4_progress_pane_t_ParamLimits

0xd649,	// (0x000338d4) wait_bar_pane_cp07_ParamLimits

0x9300,	// (0x0002f58b) main_cam6_set_pane_g2_ParamLimits

0x9300,	// (0x0002f58b) main_cam6_set_pane_g2

0x9326,	// (0x0002f5b1) main_cset6_listscroll_pane_ParamLimits

0x9326,	// (0x0002f5b1) main_cset6_listscroll_pane

0x9344,	// (0x0002f5cf) main_cset6_slider_pane_ParamLimits

0x9344,	// (0x0002f5cf) main_cset6_slider_pane

0x935a,	// (0x0002f5e5) main_cset6_text2_pane_ParamLimits

0x935a,	// (0x0002f5e5) main_cset6_text2_pane

0xda3a,	// (0x00033cc5) main_cset6_text_pane

0xda42,	// (0x00033ccd) main_cset_list_pane_copy1_ParamLimits

0xda42,	// (0x00033ccd) main_cset_list_pane_copy1

0xda52,	// (0x00033cdd) scroll_pane_cp028_copy1

0x9368,	// (0x0002f5f3) cset_list_set_pane_copy1

0x937c,	// (0x0002f607) aid_position_infowindow_above_copy1

0x9384,	// (0x0002f60f) aid_position_infowindow_below_copy1

0x938c,	// (0x0002f617) cset_list_set_pane_g1_copy1

0xda5b,	// (0x00033ce6) cset_list_set_pane_g3_copy1_ParamLimits

0xda5b,	// (0x00033ce6) cset_list_set_pane_g3_copy1

0xda6a,	// (0x00033cf5) cset_list_set_pane_t1_copy1_ParamLimits

0xda6a,	// (0x00033cf5) cset_list_set_pane_t1_copy1

0x1ef4,	// (0x0002817f) list_highlight_pane_cp021_copy1_ParamLimits

0x1ef4,	// (0x0002817f) list_highlight_pane_cp021_copy1

0xda7f,	// (0x00033d0a) cset6_slider_pane_ParamLimits

0xda7f,	// (0x00033d0a) cset6_slider_pane

0xdaab,	// (0x00033d36) main_cset6_slider_pane_g1_ParamLimits

0xdaab,	// (0x00033d36) main_cset6_slider_pane_g1

0x9394,	// (0x0002f61f) main_cset6_slider_pane_g2_ParamLimits

0x9394,	// (0x0002f61f) main_cset6_slider_pane_g2

0xdad3,	// (0x00033d5e) main_cset6_slider_pane_g3_ParamLimits

0xdad3,	// (0x00033d5e) main_cset6_slider_pane_g3

0x93bc,	// (0x0002f647) main_cset6_slider_pane_g4_ParamLimits

0x93bc,	// (0x0002f647) main_cset6_slider_pane_g4

0x93c8,	// (0x0002f653) main_cset6_slider_pane_g5_ParamLimits

0x93c8,	// (0x0002f653) main_cset6_slider_pane_g5

0xd0e5,	// (0x00033370) main_cset6_slider_pane_g7_ParamLimits

0xd0e5,	// (0x00033370) main_cset6_slider_pane_g7

0xd0f1,	// (0x0003337c) main_cset6_slider_pane_g8_ParamLimits

0xd0f1,	// (0x0003337c) main_cset6_slider_pane_g8

0x8555,	// (0x0002e7e0) main_cset6_slider_pane_g9_ParamLimits

0x8555,	// (0x0002e7e0) main_cset6_slider_pane_g9

0x8561,	// (0x0002e7ec) main_cset6_slider_pane_g10_ParamLimits

0x8561,	// (0x0002e7ec) main_cset6_slider_pane_g10

0x856d,	// (0x0002e7f8) main_cset6_slider_pane_g11_ParamLimits

0x856d,	// (0x0002e7f8) main_cset6_slider_pane_g11

0x8579,	// (0x0002e804) main_cset6_slider_pane_g12_ParamLimits

0x8579,	// (0x0002e804) main_cset6_slider_pane_g12

0x8585,	// (0x0002e810) main_cset6_slider_pane_g13_ParamLimits

0x8585,	// (0x0002e810) main_cset6_slider_pane_g13

0x8591,	// (0x0002e81c) main_cset6_slider_pane_g14_ParamLimits

0x8591,	// (0x0002e81c) main_cset6_slider_pane_g14

0x93d6,	// (0x0002f661) main_cset6_slider_pane_g15_ParamLimits

0x93d6,	// (0x0002f661) main_cset6_slider_pane_g15

0x85b5,	// (0x0002e840) main_cset6_slider_pane_g16_ParamLimits

0x85b5,	// (0x0002e840) main_cset6_slider_pane_g16

0x85c3,	// (0x0002e84e) main_cset6_slider_pane_g17_ParamLimits

0x85c3,	// (0x0002e84e) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x00035e3c) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x00035e3c) main_cset6_slider_pane_g

0xdadf,	// (0x00033d6a) main_cset6_slider_pane_t1_ParamLimits

0xdadf,	// (0x00033d6a) main_cset6_slider_pane_t1

0x9406,	// (0x0002f691) main_cset6_slider_pane_t2_ParamLimits

0x9406,	// (0x0002f691) main_cset6_slider_pane_t2

0x9431,	// (0x0002f6bc) main_cset6_slider_pane_t3_ParamLimits

0x9431,	// (0x0002f6bc) main_cset6_slider_pane_t3

0x945c,	// (0x0002f6e7) main_cset6_slider_pane_t4_ParamLimits

0x945c,	// (0x0002f6e7) main_cset6_slider_pane_t4

0x9489,	// (0x0002f714) main_cset6_slider_pane_t5_ParamLimits

0x9489,	// (0x0002f714) main_cset6_slider_pane_t5

0xdb20,	// (0x00033dab) main_cset6_slider_pane_t7_ParamLimits

0xdb20,	// (0x00033dab) main_cset6_slider_pane_t7

0x94b6,	// (0x0002f741) main_cset6_slider_pane_t8_ParamLimits

0x94b6,	// (0x0002f741) main_cset6_slider_pane_t8

0x94da,	// (0x0002f765) main_cset6_slider_pane_t9_ParamLimits

0x94da,	// (0x0002f765) main_cset6_slider_pane_t9

0x94fe,	// (0x0002f789) main_cset6_slider_pane_t10_ParamLimits

0x94fe,	// (0x0002f789) main_cset6_slider_pane_t10

0x9522,	// (0x0002f7ad) main_cset6_slider_pane_t11_ParamLimits

0x9522,	// (0x0002f7ad) main_cset6_slider_pane_t11

0xdb56,	// (0x00033de1) main_cset6_slider_pane_t14_ParamLimits

0xdb56,	// (0x00033de1) main_cset6_slider_pane_t14

0xdb8f,	// (0x00033e1a) main_cset6_slider_pane_t15_ParamLimits

0xdb8f,	// (0x00033e1a) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x00035e61) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x00035e61) main_cset6_slider_pane_t

0xdbc8,	// (0x00033e53) cset_slider_pane_g1_copy1

0xdbd1,	// (0x00033e5c) cset_slider_pane_g2_copy1

0xdbda,	// (0x00033e65) cset_slider_pane_g3_copy1

0x1c79,	// (0x00027f04) bg_popup_sub_pane_cp011_copy1

0xd2d6,	// (0x00033561) main_cset_text_pane_g1_copy1

0xd2de,	// (0x00033569) main_cset_text_pane_t1_copy1

0xd2ec,	// (0x00033577) main_cset_text_pane_t2_copy1

0xd2fa,	// (0x00033585) main_cset_text_pane_t3_copy1

0xd308,	// (0x00033593) main_cset_text_pane_t4_copy1

0xd316,	// (0x000335a1) main_cset_text_pane_t5_copy1

0xd324,	// (0x000335af) main_cset_text_pane_t6_copy1

0xd332,	// (0x000335bd) main_cset_text_pane_t7_copy1

0x92df,	// (0x0002f56a) main_cset_text2_pane_t1_copy1

0x1c79,	// (0x00027f04) main_ncimui_pane

0x6941,	// (0x0002cbcc) popup_query_ncimui_window_ParamLimits

0x6941,	// (0x0002cbcc) popup_query_ncimui_window

0xc4b4,	// (0x0003273f) field_cale_ev2_pane_g4_ParamLimits

0xc4b4,	// (0x0003273f) field_cale_ev2_pane_g4

0x7f3f,	// (0x0002e1ca) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7f3f,	// (0x0002e1ca) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x00035b3f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x00035b3f) cell_video_dialer_keypad_pane_g

0x7f57,	// (0x0002e1e2) cell_video_dialer_keypad_pane_t1

0x1c79,	// (0x00027f04) bg_popup_window_pane_cp012

0x48cb,	// (0x0002ab56) heading_pane_cp06

0xdcd2,	// (0x00033f5d) ncim_query_content_pane

0x1c79,	// (0x00027f04) bg_popup_heading_pane_cp01

0xdcda,	// (0x00033f65) ncim_heading_pane_t1

0xdce8,	// (0x00033f73) ncim_indicator_popup_pane

0xdcfa,	// (0x00033f85) ncim_query_button_pane

0xdd10,	// (0x00033f9b) ncim_query_content_pane_t1

0xdd22,	// (0x00033fad) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x00035ea0) ncim_query_content_pane_t

0xdd5c,	// (0x00033fe7) ncim_query_list_pane

0xdd6e,	// (0x00033ff9) ncim_query_popup_pane

0xdce8,	// (0x00033f73) ncim_indicator_popup_pane_ParamLimits

0x9641,	// (0x0002f8cc) ncim_query_content_pane_g1_ParamLimits

0x9641,	// (0x0002f8cc) ncim_query_content_pane_g1

0xdd10,	// (0x00033f9b) ncim_query_content_pane_t1_ParamLimits

0xdd22,	// (0x00033fad) ncim_query_content_pane_t2_ParamLimits

0x964d,	// (0x0002f8d8) ncim_query_content_pane_t3_ParamLimits

0x964d,	// (0x0002f8d8) ncim_query_content_pane_t3

0x9675,	// (0x0002f900) ncim_query_content_pane_t4_ParamLimits

0x9675,	// (0x0002f900) ncim_query_content_pane_t4

0x969d,	// (0x0002f928) ncim_query_content_pane_t5_ParamLimits

0x969d,	// (0x0002f928) ncim_query_content_pane_t5

0xdd34,	// (0x00033fbf) ncim_query_content_pane_t6_ParamLimits

0xdd34,	// (0x00033fbf) ncim_query_content_pane_t6

0xfc15,	// (0x00035ea0) ncim_query_content_pane_t_ParamLimits

0xdd5c,	// (0x00033fe7) ncim_query_list_pane_ParamLimits

0xdd6e,	// (0x00033ff9) ncim_query_popup_pane_ParamLimits

0xdd82,	// (0x0003400d) wait_bar_pane_cp04

0x1c79,	// (0x00027f04) input_focus_pane_cp011

0xdd8a,	// (0x00034015) ncim_query_popup_pane_t1

0xdd98,	// (0x00034023) ncim_list_query_list_pane_ParamLimits

0xdd98,	// (0x00034023) ncim_list_query_list_pane

0x1c79,	// (0x00027f04) bg_button_pane_cp027

0xddab,	// (0x00034036) ncim_query_button_pane_g1

0x1c79,	// (0x00027f04) list_highlight_pane_cp012

0xddb5,	// (0x00034040) ncim_list_query_list_pane_g1

0xddbd,	// (0x00034048) ncim_list_query_list_pane_t1

0xceea,	// (0x00033175) cam4_indicators_pane_g3_ParamLimits

0xceea,	// (0x00033175) cam4_indicators_pane_g3

0x1755,	// (0x000279e0) vid4_indicators_pane_g5_ParamLimits

0x1755,	// (0x000279e0) vid4_indicators_pane_g5

0xd5f9,	// (0x00033884) vid4_progress_pane_g5_ParamLimits

0xd5f9,	// (0x00033884) vid4_progress_pane_g5

0x955a,	// (0x0002f7e5) main_ncimui_pane_g1

0x95b0,	// (0x0002f83b) ncimui_group_query_pane_ParamLimits

0x95b0,	// (0x0002f83b) ncimui_group_query_pane

0x95ec,	// (0x0002f877) ncimui_list_pane_ParamLimits

0x95ec,	// (0x0002f877) ncimui_list_pane

0x960d,	// (0x0002f898) ncimui_text_pane_ParamLimits

0x960d,	// (0x0002f898) ncimui_text_pane

0x96c5,	// (0x0002f950) ncimui_text_pane_t1_ParamLimits

0x96c5,	// (0x0002f950) ncimui_text_pane_t1

0xddcb,	// (0x00034056) ncimui_list_single_graphic_pane_ParamLimits

0xddcb,	// (0x00034056) ncimui_list_single_graphic_pane

0x96e3,	// (0x0002f96e) ncimui_query_pane_ParamLimits

0x96e3,	// (0x0002f96e) ncimui_query_pane

0x1c79,	// (0x00027f04) list_highlight_pane_cp013

0xdddb,	// (0x00034066) ncim_list_query_list_pane_t1_copy1

0xddb5,	// (0x00034040) ncim_list_single_graphic_pane_g1

0xdde9,	// (0x00034074) ncim_query_button_pane_cp01

0xddf5,	// (0x00034080) ncim_query_entry_pane_ParamLimits

0xddf5,	// (0x00034080) ncim_query_entry_pane

0xde08,	// (0x00034093) ncimui_query_pane_g1

0xde14,	// (0x0003409f) ncimui_query_pane_t1_ParamLimits

0xde14,	// (0x0003409f) ncimui_query_pane_t1

0x1ef4,	// (0x0002817f) input_focus_pane_cp012

0xde2d,	// (0x000340b8) ncim_query_entry_pane_t1

0x28fd,	// (0x00028b88) main_im_pane_ParamLimits

0x1ef4,	// (0x0002817f) main_mobtv_pane_ParamLimits

0x1ef4,	// (0x0002817f) main_mobtv_pane

0x93ee,	// (0x0002f679) main_cset6_slider_pane_g18_ParamLimits

0x93ee,	// (0x0002f679) main_cset6_slider_pane_g18

0x93fa,	// (0x0002f685) main_cset6_slider_pane_g19_ParamLimits

0x93fa,	// (0x0002f685) main_cset6_slider_pane_g19

0xde3f,	// (0x000340ca) bg_main_mobtv_pane_ParamLimits

0xde3f,	// (0x000340ca) bg_main_mobtv_pane

0x96f6,	// (0x0002f981) main_mobtv_info_pane

0x9701,	// (0x0002f98c) main_mobtv_loading_pane_ParamLimits

0x9701,	// (0x0002f98c) main_mobtv_loading_pane

0xde4d,	// (0x000340d8) main_mobtv_pg_channel_list_pane

0xde57,	// (0x000340e2) main_mobtv_pg_hdr_pane

0x970e,	// (0x0002f999) main_mobtv_programe_curr_pane_ParamLimits

0x970e,	// (0x0002f999) main_mobtv_programe_curr_pane

0x971b,	// (0x0002f9a6) main_mobtv_programe_next_pane_ParamLimits

0x971b,	// (0x0002f9a6) main_mobtv_programe_next_pane

0xde60,	// (0x000340eb) popup_mobtv_noti_window

0xc1e3,	// (0x0003246e) main_tv_pg_hdr_pane_g1

0xde6a,	// (0x000340f5) main_tv_pg_hdr_pane_g2

0xde72,	// (0x000340fd) main_tv_pg_hdr_pane_g3

0xde7a,	// (0x00034105) main_tv_pg_hdr_pane_g4

0xde82,	// (0x0003410d) main_tv_pg_hdr_pane_g5

0xde8c,	// (0x00034117) main_tv_pg_hdr_pane_g6

0xde96,	// (0x00034121) main_tv_pg_hdr_pane_g7

0xdea0,	// (0x0003412b) main_tv_pg_hdr_pane_g8

0xdeaa,	// (0x00034135) main_tv_pg_hdr_pane_g9

0xdeb4,	// (0x0003413f) main_tv_pg_hdr_pane_g10

0xdebe,	// (0x00034149) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00035ead) main_tv_pg_hdr_pane_g

0xdec8,	// (0x00034153) main_tv_pg_hdr_pane_t1

0xded6,	// (0x00034161) main_tv_pg_hdr_pane_t2

0xdee4,	// (0x0003416f) main_tv_pg_hdr_pane_t3

0xdef4,	// (0x0003417f) main_tv_pg_hdr_pane_t4

0xdf04,	// (0x0003418f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x00035ec4) main_tv_pg_hdr_pane_t

0xdf14,	// (0x0003419f) single_mobtv_pg_channel_pane_ParamLimits

0xdf14,	// (0x0003419f) single_mobtv_pg_channel_pane

0xdf26,	// (0x000341b1) single_mobtv_pg_channel_table_pane

0xdf2f,	// (0x000341ba) single_mobtv_pg_channel_thumb_pane

0xdf38,	// (0x000341c3) single_tv_pg_channel_pane_g1

0xdf41,	// (0x000341cc) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x00035ecf) single_tv_pg_channel_pane_g

0xc413,	// (0x0003269e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc413,	// (0x0003269e) bg_single_mobtv_pg_channel_thumb_pane

0xdf4a,	// (0x000341d5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf4a,	// (0x000341d5) single_mobtv_pg_channel_thumb_pane_g1

0xdf58,	// (0x000341e3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf58,	// (0x000341e3) single_mobtv_pg_channel_thumb_pane_g2

0xdf64,	// (0x000341ef) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf64,	// (0x000341ef) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x00035ed4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x00035ed4) single_mobtv_pg_channel_thumb_pane_g

0xdf70,	// (0x000341fb) single_mobtv_pg_channel_thumb_pane_t1

0xdf7e,	// (0x00034209) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00035edb) single_mobtv_pg_channel_thumb_pane_t

0xc1e3,	// (0x0003246e) bg_single_mobtv_pg_channel_table_pane_g1

0xc1e3,	// (0x0003246e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0003598b) bg_single_mobtv_pg_channel_table_pane_g

0xdf8c,	// (0x00034217) single_mobtv_pg_channel_table_pane_t1

0xdf9a,	// (0x00034225) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x00035ee0) single_mobtv_pg_channel_table_pane_t

0x9730,	// (0x0002f9bb) main_mobtv_info_pane_g1_ParamLimits

0x9730,	// (0x0002f9bb) main_mobtv_info_pane_g1

0x974e,	// (0x0002f9d9) main_mobtv_info_pane_t1_ParamLimits

0x974e,	// (0x0002f9d9) main_mobtv_info_pane_t1

0x97c6,	// (0x0002fa51) main_mobtv_info_pane_t2_ParamLimits

0x97c6,	// (0x0002fa51) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x00035eea) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x00035eea) main_mobtv_info_pane_t

0x9857,	// (0x0002fae2) wait_bar_pane_cp05

0x9869,	// (0x0002faf4) main_mobtv_loading_pane_g1_ParamLimits

0x9869,	// (0x0002faf4) main_mobtv_loading_pane_g1

0x987a,	// (0x0002fb05) main_mobtv_loading_pane_g2_ParamLimits

0x987a,	// (0x0002fb05) main_mobtv_loading_pane_g2

0x9886,	// (0x0002fb11) main_mobtv_loading_pane_g3_ParamLimits

0x9886,	// (0x0002fb11) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x00035ef1) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x00035ef1) main_mobtv_loading_pane_g

0xdfa8,	// (0x00034233) main_mobtv_loading_pane_t1_ParamLimits

0xdfa8,	// (0x00034233) main_mobtv_loading_pane_t1

0xdfc0,	// (0x0003424b) main_mobtv_loading_pane_t2_ParamLimits

0xdfc0,	// (0x0003424b) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x00035ef8) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x00035ef8) main_mobtv_loading_pane_t

0x9899,	// (0x0002fb24) wait_bar_pane_cp06_ParamLimits

0x9899,	// (0x0002fb24) wait_bar_pane_cp06

0xdfe4,	// (0x0003426f) main_mobtv_programe_curr_pane_t1

0xdff2,	// (0x0003427d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x00035efd) main_mobtv_programe_curr_pane_t

0xe000,	// (0x0003428b) main_mobtv_programe_next_pane_t1

0xe00e,	// (0x00034299) main_mobtv_programe_next_pane_t2

0xe01c,	// (0x000342a7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x00035f02) main_mobtv_programe_next_pane_t

0x1c79,	// (0x00027f04) bg_popup_mobtv_noti_window_pane

0xe02a,	// (0x000342b5) popup_mobtv_noti_window_g1

0xe032,	// (0x000342bd) popup_mobtv_noti_window_t1

0xe040,	// (0x000342cb) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x00035f09) popup_mobtv_noti_window_t

0xc1e3,	// (0x0003246e) bg_popup_mobtv_noti_window_pane_g1

0x1c79,	// (0x00027f04) sc_clock_pane

0x1c79,	// (0x00027f04) main_fs_bigclock_pane

0x9084,	// (0x0002f30f) blid2_tripm_pane_t4_ParamLimits

0x9084,	// (0x0002f30f) blid2_tripm_pane_t4

0x98a8,	// (0x0002fb33) sc_clock_pane_g1_ParamLimits

0x98a8,	// (0x0002fb33) sc_clock_pane_g1

0x98ba,	// (0x0002fb45) sc_clock_pane_t1_ParamLimits

0x98ba,	// (0x0002fb45) sc_clock_pane_t1

0x98de,	// (0x0002fb69) sc_clock_pane_t2_ParamLimits

0x98de,	// (0x0002fb69) sc_clock_pane_t2

0x98f6,	// (0x0002fb81) sc_clock_pane_t3_ParamLimits

0x98f6,	// (0x0002fb81) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x00035f0e) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x00035f0e) sc_clock_pane_t

0xa6ca,	// (0x00030955) main_fs_bigclock_indicator_pane_ParamLimits

0xa6ca,	// (0x00030955) main_fs_bigclock_indicator_pane

0xc3e3,	// (0x0003266e) main_fs_bigclock_pane_g1_ParamLimits

0xc3e3,	// (0x0003266e) main_fs_bigclock_pane_g1

0xa6d6,	// (0x00030961) main_fs_bigclock_pane_t1_ParamLimits

0xa6d6,	// (0x00030961) main_fs_bigclock_pane_t1

0xa6e8,	// (0x00030973) main_fs_bigclock_pane_t2_ParamLimits

0xa6e8,	// (0x00030973) main_fs_bigclock_pane_t2

0xa6fc,	// (0x00030987) main_fs_bigclock_pane_t3_ParamLimits

0xa6fc,	// (0x00030987) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x00036108) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00036108) main_fs_bigclock_pane_t

0xecb8,	// (0x00034f43) main_fs_bigclock_indicator_pane_g1

0xdd02,	// (0x00033f8d) ncim_query_content_pane_g2_ParamLimits

0xdd02,	// (0x00033f8d) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00035e9b) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00035e9b) ncim_query_content_pane_g

0x990b,	// (0x0002fb96) sc_clock_pane_t4_ParamLimits

0x990b,	// (0x0002fb96) sc_clock_pane_t4

0x1ef4,	// (0x0002817f) main_radioblah_pane

0xce09,	// (0x00033094) cell_call4_button_pane_t1_copy1_ParamLimits

0xce09,	// (0x00033094) cell_call4_button_pane_t1_copy1

0x9562,	// (0x0002f7ed) main_ncimui_pane_t1_ParamLimits

0x9562,	// (0x0002f7ed) main_ncimui_pane_t1

0x957c,	// (0x0002f807) main_ncimui_pane_t2_ParamLimits

0x957c,	// (0x0002f807) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x00035e94) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x00035e94) main_ncimui_pane_t

0xe178,	// (0x00034403) main_radioblah_anim_pane_ParamLimits

0xe178,	// (0x00034403) main_radioblah_anim_pane

0xe189,	// (0x00034414) main_radioblah_info_pane_ParamLimits

0xe189,	// (0x00034414) main_radioblah_info_pane

0xe19d,	// (0x00034428) main_radioblah_pane_t1_ParamLimits

0xe19d,	// (0x00034428) main_radioblah_pane_t1

0xe1b9,	// (0x00034444) main_radioblah_pane_t2_ParamLimits

0xe1b9,	// (0x00034444) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x00035f2f) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x00035f2f) main_radioblah_pane_t

0x99b9,	// (0x0002fc44) main_radioblah_rocker_ctrl_pane_ParamLimits

0x99b9,	// (0x0002fc44) main_radioblah_rocker_ctrl_pane

0xe201,	// (0x0003448c) main_radioblah_info_pane_t1_ParamLimits

0xe201,	// (0x0003448c) main_radioblah_info_pane_t1

0x9a11,	// (0x0002fc9c) main_radioblah_info_pane_t2_ParamLimits

0x9a11,	// (0x0002fc9c) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x00035f38) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x00035f38) main_radioblah_info_pane_t

0xc1e3,	// (0x0003246e) main_radioblah_rocker_ctrl_pane_g1

0x9ac1,	// (0x0002fd4c) main_radioblah_rocker_ctrl_pane_g2

0x9ac9,	// (0x0002fd54) main_radioblah_rocker_ctrl_pane_g3

0x9ad1,	// (0x0002fd5c) main_radioblah_rocker_ctrl_pane_g4

0x9ad9,	// (0x0002fd64) main_radioblah_rocker_ctrl_pane_g5

0x9ae1,	// (0x0002fd6c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x00035f41) main_radioblah_rocker_ctrl_pane_g

0x92df,	// (0x0002f56a) main_cset_text2_pane_t1_copy1_ParamLimits

0xce99,	// (0x00033124) cam4_image_uncrop_qvga_pane

0xcf14,	// (0x0003319f) vid4_image_uncrop_qcif_pane

0xd843,	// (0x00033ace) cam6_image_uncrop_qvga_pane_ParamLimits

0xd843,	// (0x00033ace) cam6_image_uncrop_qvga_pane

0xd919,	// (0x00033ba4) vid6_image_uncrop_qcif_pane_ParamLimits

0xd919,	// (0x00033ba4) vid6_image_uncrop_qcif_pane

0x1c79,	// (0x00027f04) bg_popup_preview_window_pane_cp03

0xdcb4,	// (0x00033f3f) list_cset_text2_pane

0xdcbc,	// (0x00033f47) main_cset6_text2_pane_g1

0xdcc4,	// (0x00033f4f) main_cset6_text2_pane_t1

0xe23b,	// (0x000344c6) list_cset_text2_pane_t1_ParamLimits

0xe23b,	// (0x000344c6) list_cset_text2_pane_t1

0x1ef4,	// (0x0002817f) main_radioblah_pane_ParamLimits

0x9843,	// (0x0002face) main_mobtv_info_pane_t3_ParamLimits

0x9843,	// (0x0002face) main_mobtv_info_pane_t3

0x99a7,	// (0x0002fc32) main_radioblah_pane_g1

0x99e1,	// (0x0002fc6c) main_radioblah_info_pane_g1

0x9a66,	// (0x0002fcf1) main_radioblah_info_pane_t3_ParamLimits

0x9a66,	// (0x0002fcf1) main_radioblah_info_pane_t3

0x429a,	// (0x0002a525) highlight_cell_cale_month_pane_ParamLimits

0x429a,	// (0x0002a525) highlight_cell_cale_month_pane

0x1c79,	// (0x00027f04) main_phob_fisheye_pane

0xc569,	// (0x000327f4) scroll_pane_cp0031_ParamLimits

0xc569,	// (0x000327f4) scroll_pane_cp0031

0xda2b,	// (0x00033cb6) wait_bar_pane_cp08_ParamLimits

0x9368,	// (0x0002f5f3) cset_list_set_pane_copy1_ParamLimits

0xe255,	// (0x000344e0) highlight_cell_cale_month_pane_g1

0x9ae9,	// (0x0002fd74) highlight_cell_cale_month_pane_t1

0xd5b2,	// (0x0003383d) list_gen_pane_cp01

0xd0d0,	// (0x0003335b) scroll_pane_01

0x9af7,	// (0x0002fd82) list_single_double_fisheye_pane

0xe25d,	// (0x000344e8) list_double_fisheye_pane_g1_ParamLimits

0xe25d,	// (0x000344e8) list_double_fisheye_pane_g1

0xe269,	// (0x000344f4) list_double_fisheye_pane_g2_ParamLimits

0xe269,	// (0x000344f4) list_double_fisheye_pane_g2

0x9b00,	// (0x0002fd8b) list_double_fisheye_pane_g3_ParamLimits

0x9b00,	// (0x0002fd8b) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00035f4e) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00035f4e) list_double_fisheye_pane_g

0x9b0c,	// (0x0002fd97) list_double_fisheye_pane_t1_ParamLimits

0x9b0c,	// (0x0002fd97) list_double_fisheye_pane_t1

0x9b27,	// (0x0002fdb2) list_double_fisheye_pane_t2_ParamLimits

0x9b27,	// (0x0002fdb2) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00035f59) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00035f59) list_double_fisheye_pane_t

0x1c79,	// (0x00027f04) main_call5_pane

0x9936,	// (0x0002fbc1) sc_swipe_pane_ParamLimits

0x9936,	// (0x0002fbc1) sc_swipe_pane

0x9b5c,	// (0x0002fde7) call5_image_pane_ParamLimits

0x9b5c,	// (0x0002fde7) call5_image_pane

0x9b79,	// (0x0002fe04) call5_swipe_1_pane_ParamLimits

0x9b79,	// (0x0002fe04) call5_swipe_1_pane

0x9b8c,	// (0x0002fe17) call5_swipe_2_pane_ParamLimits

0x9b8c,	// (0x0002fe17) call5_swipe_2_pane

0x9bb9,	// (0x0002fe44) popup_call5_audio_first_window_ParamLimits

0x9bb9,	// (0x0002fe44) popup_call5_audio_first_window

0xc413,	// (0x0003269e) call5_swipe_1_pane_g1_ParamLimits

0xc413,	// (0x0003269e) call5_swipe_1_pane_g1

0xe29a,	// (0x00034525) call5_swipe_1_pane_g2_ParamLimits

0xe29a,	// (0x00034525) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00035f5e) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00035f5e) call5_swipe_1_pane_g

0xe2a6,	// (0x00034531) call5_swipe_1_pane_t1_ParamLimits

0xe2a6,	// (0x00034531) call5_swipe_1_pane_t1

0xc413,	// (0x0003269e) call5_swipe_2_pane_g1_ParamLimits

0xc413,	// (0x0003269e) call5_swipe_2_pane_g1

0xe2bb,	// (0x00034546) call5_swipe_2_pane_g2_ParamLimits

0xe2bb,	// (0x00034546) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x00035f63) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x00035f63) call5_swipe_2_pane_g

0xe2c7,	// (0x00034552) call5_swipe_2_pane_t1_ParamLimits

0xe2c7,	// (0x00034552) call5_swipe_2_pane_t1

0xe2dc,	// (0x00034567) sc_swipe_pane_g1_ParamLimits

0xe2dc,	// (0x00034567) sc_swipe_pane_g1

0xe2e9,	// (0x00034574) sc_swipe_pane_g2_ParamLimits

0xe2e9,	// (0x00034574) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00035f68) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00035f68) sc_swipe_pane_g

0xe2f5,	// (0x00034580) sc_swipe_pane_t1_ParamLimits

0xe2f5,	// (0x00034580) sc_swipe_pane_t1

0x1c79,	// (0x00027f04) main_cmail_launcher_pane

0x9bce,	// (0x0002fe59) aid_size_cell_cmail_l_ParamLimits

0x9bce,	// (0x0002fe59) aid_size_cell_cmail_l

0x9be8,	// (0x0002fe73) grid_cmail_l_pane_ParamLimits

0x9be8,	// (0x0002fe73) grid_cmail_l_pane

0x9c04,	// (0x0002fe8f) cell_cmail_l_pane_ParamLimits

0x9c04,	// (0x0002fe8f) cell_cmail_l_pane

0x9c2c,	// (0x0002feb7) cell_cmail_l_pane_g1_ParamLimits

0x9c2c,	// (0x0002feb7) cell_cmail_l_pane_g1

0x9c38,	// (0x0002fec3) cell_cmail_l_pane_t1_ParamLimits

0x9c38,	// (0x0002fec3) cell_cmail_l_pane_t1

0xe30a,	// (0x00034595) cell_cmail_l_pane_t2_ParamLimits

0xe30a,	// (0x00034595) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00035f6d) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00035f6d) cell_cmail_l_pane_t

0x1ef4,	// (0x0002817f) grid_highlight_pane_cp018_ParamLimits

0x1ef4,	// (0x0002817f) grid_highlight_pane_cp018

0x1da6,	// (0x00028031) main2_pane_ParamLimits

0x1da6,	// (0x00028031) main2_pane

0x2a7e,	// (0x00028d09) popup_sp_fs_action_menu_bg_pane_g1

0x2a86,	// (0x00028d11) popup_sp_fs_action_menu_bg_pane_g2

0x2a8e,	// (0x00028d19) popup_sp_fs_action_menu_bg_pane_g3

0x2a96,	// (0x00028d21) popup_sp_fs_action_menu_bg_pane_g4

0x2a9e,	// (0x00028d29) popup_sp_fs_action_menu_bg_pane_g5

0x2aa6,	// (0x00028d31) popup_sp_fs_action_menu_bg_pane_g6

0x2aae,	// (0x00028d39) popup_sp_fs_action_menu_bg_pane_g7

0x2ab6,	// (0x00028d41) popup_sp_fs_action_menu_bg_pane_g8

0x2abe,	// (0x00028d49) popup_sp_fs_action_menu_bg_pane_g9

0x2ac6,	// (0x00028d51) popup_sp_fs_action_menu_bg_pane_g10

0x2ac6,	// (0x00028d51) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00035437) popup_sp_fs_action_menu_bg_pane_g

0x324c,	// (0x000294d7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x2_t3_g3_g1

0x3258,	// (0x000294e3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3258,	// (0x000294e3) list_medium_line_x2_t3_g3_g2

0x3264,	// (0x000294ef) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3264,	// (0x000294ef) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x000354e7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x000354e7) list_medium_line_x2_t3_g3_g

0x3270,	// (0x000294fb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3270,	// (0x000294fb) list_medium_line_x2_t3_g3_t1

0x3285,	// (0x00029510) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3285,	// (0x00029510) list_medium_line_x2_t3_g3_t2

0x3299,	// (0x00029524) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3299,	// (0x00029524) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x000354ee) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x000354ee) list_medium_line_x2_t3_g3_t

0x324c,	// (0x000294d7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x2_t3_g2_g1

0x3264,	// (0x000294ef) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3264,	// (0x000294ef) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x000354f5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x000354f5) list_medium_line_x2_t3_g2_g

0x32ae,	// (0x00029539) list_medium_line_x2_t3_g2_t1_ParamLimits

0x32ae,	// (0x00029539) list_medium_line_x2_t3_g2_t1

0x32c4,	// (0x0002954f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x32c4,	// (0x0002954f) list_medium_line_x2_t3_g2_t2

0x32d6,	// (0x00029561) list_medium_line_x2_t3_g2_t3_ParamLimits

0x32d6,	// (0x00029561) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x000354fa) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x000354fa) list_medium_line_x2_t3_g2_t

0x324c,	// (0x000294d7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x2_t4_g4_g1

0x32f4,	// (0x0002957f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x32f4,	// (0x0002957f) list_medium_line_x2_t4_g4_g2

0x3258,	// (0x000294e3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3258,	// (0x000294e3) list_medium_line_x2_t4_g4_g3

0x3300,	// (0x0002958b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3300,	// (0x0002958b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00035501) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00035501) list_medium_line_x2_t4_g4_g

0x330c,	// (0x00029597) list_medium_line_x2_t4_g4_t1_ParamLimits

0x330c,	// (0x00029597) list_medium_line_x2_t4_g4_t1

0x3323,	// (0x000295ae) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3323,	// (0x000295ae) list_medium_line_x2_t4_g4_t2

0x3338,	// (0x000295c3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3338,	// (0x000295c3) list_medium_line_x2_t4_g4_t3

0x334a,	// (0x000295d5) list_medium_line_x2_t4_g4_t4_ParamLimits

0x334a,	// (0x000295d5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0003550a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0003550a) list_medium_line_x2_t4_g4_t

0x324c,	// (0x000294d7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x2_t2_g4_g1

0x32f4,	// (0x0002957f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x32f4,	// (0x0002957f) list_medium_line_x2_t2_g4_g2

0x3258,	// (0x000294e3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3258,	// (0x000294e3) list_medium_line_x2_t2_g4_g3

0x3264,	// (0x000294ef) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3264,	// (0x000294ef) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00035571) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00035571) list_medium_line_x2_t2_g4_g

0x42b8,	// (0x0002a543) list_medium_line_x2_t2_g4_t1_ParamLimits

0x42b8,	// (0x0002a543) list_medium_line_x2_t2_g4_t1

0x3299,	// (0x00029524) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3299,	// (0x00029524) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0003557a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0003557a) list_medium_line_x2_t2_g4_t

0x324c,	// (0x000294d7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x2_t2_g3_g1

0x3258,	// (0x000294e3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3258,	// (0x000294e3) list_medium_line_x2_t2_g3_g2

0x3264,	// (0x000294ef) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3264,	// (0x000294ef) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x000354e7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x000354e7) list_medium_line_x2_t2_g3_g

0x42cd,	// (0x0002a558) list_medium_line_x2_t2_g3_t1_ParamLimits

0x42cd,	// (0x0002a558) list_medium_line_x2_t2_g3_t1

0x3299,	// (0x00029524) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3299,	// (0x00029524) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0003557f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0003557f) list_medium_line_x2_t2_g3_t

0x4623,	// (0x0002a8ae) main_sp_fs_list_pane_ParamLimits

0x4623,	// (0x0002a8ae) main_sp_fs_list_pane

0x462f,	// (0x0002a8ba) sp_fs_scroll_pane_ParamLimits

0x462f,	// (0x0002a8ba) sp_fs_scroll_pane

0x463b,	// (0x0002a8c6) list_medium_line_x2_t3_t1

0x464b,	// (0x0002a8d6) list_medium_line_x2_t3_t2

0x4659,	// (0x0002a8e4) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000355ca) list_medium_line_x2_t3_t

0x4667,	// (0x0002a8f2) list_medium_line_x3_t4_t1

0x4677,	// (0x0002a902) list_medium_line_x3_t4_t2

0x4685,	// (0x0002a910) list_medium_line_x3_t4_t3

0x4659,	// (0x0002a8e4) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000355d1) list_medium_line_x3_t4_t

0x4693,	// (0x0002a91e) list_medium_line_x4_t5_t1

0x46a3,	// (0x0002a92e) list_medium_line_x4_t5_t2

0x4685,	// (0x0002a910) list_medium_line_x4_t5_t3

0x46b1,	// (0x0002a93c) list_medium_line_x4_t5_t4

0x4659,	// (0x0002a8e4) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000355da) list_medium_line_x4_t5_t

0x324c,	// (0x000294d7) list_medium_line_t4_g4_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_t4_g4_g1

0x3300,	// (0x0002958b) list_medium_line_t4_g4_g2_ParamLimits

0x3300,	// (0x0002958b) list_medium_line_t4_g4_g2

0x46bf,	// (0x0002a94a) list_medium_line_t4_g4_g3_ParamLimits

0x46bf,	// (0x0002a94a) list_medium_line_t4_g4_g3

0x3264,	// (0x000294ef) list_medium_line_t4_g4_g4_ParamLimits

0x3264,	// (0x000294ef) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x000355e5) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x000355e5) list_medium_line_t4_g4_g

0x46cb,	// (0x0002a956) list_medium_line_t4_g4_t1_ParamLimits

0x46cb,	// (0x0002a956) list_medium_line_t4_g4_t1

0x46e0,	// (0x0002a96b) list_medium_line_t4_g4_t2_ParamLimits

0x46e0,	// (0x0002a96b) list_medium_line_t4_g4_t2

0x46f6,	// (0x0002a981) list_medium_line_t4_g4_t3_ParamLimits

0x46f6,	// (0x0002a981) list_medium_line_t4_g4_t3

0x3299,	// (0x00029524) list_medium_line_t4_g4_t4_ParamLimits

0x3299,	// (0x00029524) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x000355ee) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x000355ee) list_medium_line_t4_g4_t

0x4a43,	// (0x0002acce) chi_dic_find_pane_g1

0x66c7,	// (0x0002c952) main_tport_pane

0xd223,	// (0x000334ae) list_medium_line_plain_t1

0xd275,	// (0x00033500) list_medium_line_t2_g2_g1_ParamLimits

0xd275,	// (0x00033500) list_medium_line_t2_g2_g1

0xd281,	// (0x0003350c) list_medium_line_t2_g2_g2_ParamLimits

0xd281,	// (0x0003350c) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00035caa) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00035caa) list_medium_line_t2_g2_g

0x88a3,	// (0x0002eb2e) list_medium_line_t2_g2_t1_ParamLimits

0x88a3,	// (0x0002eb2e) list_medium_line_t2_g2_t1

0x88ba,	// (0x0002eb45) list_medium_line_t2_g2_t2_ParamLimits

0x88ba,	// (0x0002eb45) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00035caf) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00035caf) list_medium_line_t2_g2_t

0xd65b,	// (0x000338e6) aid_sp_fs_list_icon_a_sm

0xd663,	// (0x000338ee) aid_sp_fs_list_icon_d

0xd66b,	// (0x000338f6) aid_sp_fs_text_primary

0xd674,	// (0x000338ff) aid_sp_fs_text_secondary

0xd67d,	// (0x00033908) list_medium_line

0xd67d,	// (0x00033908) list_medium_line_g2

0xd67d,	// (0x00033908) list_medium_line_g3

0xd67d,	// (0x00033908) list_medium_line_plain

0xd67d,	// (0x00033908) list_medium_line_plain_t2

0xd67d,	// (0x00033908) list_medium_line_plain_t3

0xd67d,	// (0x00033908) list_medium_line_right_icon

0xd67d,	// (0x00033908) list_medium_line_right_iconx2

0xd67d,	// (0x00033908) list_medium_line_t2

0xd67d,	// (0x00033908) list_medium_line_t2_g2

0xd67d,	// (0x00033908) list_medium_line_t2_g3

0xd67d,	// (0x00033908) list_medium_line_t2_right_icon

0xd67d,	// (0x00033908) list_medium_line_t2_right_iconx2

0xd67d,	// (0x00033908) list_medium_line_t3

0xd67d,	// (0x00033908) list_medium_line_t3_g2

0xd67d,	// (0x00033908) list_medium_line_t3_g3

0xd67d,	// (0x00033908) list_medium_line_t3_right_iconx2

0xd686,	// (0x00033911) list_medium_line_t4_g4

0xd68f,	// (0x0003391a) list_medium_line_x2

0xd68f,	// (0x0003391a) list_medium_line_x2_t2_g2

0xd68f,	// (0x0003391a) list_medium_line_x2_t2_g3

0xd68f,	// (0x0003391a) list_medium_line_x2_t2_g4

0xd68f,	// (0x0003391a) list_medium_line_x2_t3

0xd68f,	// (0x0003391a) list_medium_line_x2_t3_g2

0xd68f,	// (0x0003391a) list_medium_line_x2_t3_g3

0xd68f,	// (0x0003391a) list_medium_line_x2_t3_g4

0xd68f,	// (0x0003391a) list_medium_line_x2_t4_g2

0xd68f,	// (0x0003391a) list_medium_line_x2_t4_g4

0xd698,	// (0x00033923) list_medium_line_x3

0xd698,	// (0x00033923) list_medium_line_x3_t4

0xd698,	// (0x00033923) list_medium_line_x3_t4_g4

0xd686,	// (0x00033911) list_medium_line_x4_t4

0xd686,	// (0x00033911) list_medium_line_x4_t4_g7

0xd686,	// (0x00033911) list_medium_line_x4_t5

0xd6a1,	// (0x0003392c) list_single_fs_dyc_pane_ParamLimits

0xd6a1,	// (0x0003392c) list_single_fs_dyc_pane

0x324c,	// (0x000294d7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x4_t4_g7_g1

0xdbe3,	// (0x00033e6e) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdbe3,	// (0x00033e6e) list_medium_line_x4_t4_g7_g2

0xdbef,	// (0x00033e7a) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdbef,	// (0x00033e7a) list_medium_line_x4_t4_g7_g3

0xdbfe,	// (0x00033e89) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdbfe,	// (0x00033e89) list_medium_line_x4_t4_g7_g4

0xdc0a,	// (0x00033e95) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdc0a,	// (0x00033e95) list_medium_line_x4_t4_g7_g5

0xdc19,	// (0x00033ea4) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc19,	// (0x00033ea4) list_medium_line_x4_t4_g7_g6

0xdc28,	// (0x00033eb3) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdc28,	// (0x00033eb3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00035e7a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00035e7a) list_medium_line_x4_t4_g7_g

0xdc34,	// (0x00033ebf) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc34,	// (0x00033ebf) list_medium_line_x4_t4_g7_t1

0xdc49,	// (0x00033ed4) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc49,	// (0x00033ed4) list_medium_line_x4_t4_g7_t2

0xdc5e,	// (0x00033ee9) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc5e,	// (0x00033ee9) list_medium_line_x4_t4_g7_t3

0xdc73,	// (0x00033efe) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc73,	// (0x00033efe) list_medium_line_x4_t4_g7_t4

0xdc85,	// (0x00033f10) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc85,	// (0x00033f10) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00035e89) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00035e89) list_medium_line_x4_t4_g7_t

0xdc97,	// (0x00033f22) list_single_dyc_row_pane_ParamLimits

0xdc97,	// (0x00033f22) list_single_dyc_row_pane

0x9b49,	// (0x0002fdd4) call5_gesture_pane_ParamLimits

0x9b49,	// (0x0002fdd4) call5_gesture_pane

0x9b9f,	// (0x0002fe2a) call5_windows_pane_ParamLimits

0x9b9f,	// (0x0002fe2a) call5_windows_pane

0x9c4e,	// (0x0002fed9) call5_swipe_1_pane_cp_ParamLimits

0x9c4e,	// (0x0002fed9) call5_swipe_1_pane_cp

0x9c5a,	// (0x0002fee5) call5_swipe_2_pane_cp_ParamLimits

0x9c5a,	// (0x0002fee5) call5_swipe_2_pane_cp

0x4ec7,	// (0x0002b152) call5_image_pane_cp

0x9c66,	// (0x0002fef1) popup_call5_audio_first_window_cp_ParamLimits

0x9c66,	// (0x0002fef1) popup_call5_audio_first_window_cp

0xe2dc,	// (0x00034567) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2dc,	// (0x00034567) call5_swipe_1_pane_g1_cp

0xe31c,	// (0x000345a7) call5_swipe_1_pane_g2_cp

0xe2f5,	// (0x00034580) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2f5,	// (0x00034580) call5_swipe_1_pane_t1_cp

0xe2dc,	// (0x00034567) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2dc,	// (0x00034567) call5_swipe_2_pane_g1_cp

0xe324,	// (0x000345af) call5_swipe_2_pane_g2_cp

0xe32c,	// (0x000345b7) call5_swipe_2_pane_t1_cp_ParamLimits

0xe32c,	// (0x000345b7) call5_swipe_2_pane_t1_cp

0x1ef4,	// (0x0002817f) main_sp_fs_email_pane

0xe341,	// (0x000345cc) main_sp_fs_listscroll_pane_te

0xe34a,	// (0x000345d5) popup_sp_fs_action_menu_pane_ParamLimits

0xe34a,	// (0x000345d5) popup_sp_fs_action_menu_pane

0xc1e3,	// (0x0003246e) bg_sp_fs_ctrlbar_pane_g1

0xe390,	// (0x0003461b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe399,	// (0x00034624) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3a2,	// (0x0003462d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc1e3,	// (0x0003246e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x00035f72) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbfc2,	// (0x0003224d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbfc2,	// (0x0003224d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3ab,	// (0x00034636) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3ab,	// (0x00034636) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3b7,	// (0x00034642) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3b7,	// (0x00034642) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00035f7b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00035f7b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3c3,	// (0x0003464e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3c3,	// (0x0003464e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe3dd,	// (0x00034668) list_medium_line_t2_right_icon_g1

0x9c74,	// (0x0002feff) list_medium_line_t2_right_icon_t1

0x9c84,	// (0x0002ff0f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x00035f80) list_medium_line_t2_right_icon_t

0xbcae,	// (0x00031f39) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbcae,	// (0x00031f39) bg_sp_fs_ctrlbar_pane

0x9cde,	// (0x0002ff69) main_sp_fs_ctrlbar_button_pane_cp01

0x9ce8,	// (0x0002ff73) main_sp_fs_ctrlbar_ddmenu_pane

0xe41f,	// (0x000346aa) main_sp_fs_ctrlbar_pane_g1

0xe42b,	// (0x000346b6) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x00035f85) main_sp_fs_ctrlbar_pane_g

0xe437,	// (0x000346c2) main_sp_fs_ctrlbar_pane_t1

0x9cf2,	// (0x0002ff7d) main_sp_fs_ctrlbar_pane

0x9d16,	// (0x0002ffa1) main_sp_fs_listscroll_pane_te_cp01

0x9d36,	// (0x0002ffc1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9d36,	// (0x0002ffc1) popup_sp_fs_action_menu_pane_cp01

0x1ef4,	// (0x0002817f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1ef4,	// (0x0002817f) bg_sp_fs_highlight_list_pane_cp01

0xe44c,	// (0x000346d7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe44c,	// (0x000346d7) sp_fs_action_menu_list_gene_pane_g1

0xe45b,	// (0x000346e6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe45b,	// (0x000346e6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00035f8a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00035f8a) sp_fs_action_menu_list_gene_pane_g

0xe468,	// (0x000346f3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe468,	// (0x000346f3) sp_fs_action_menu_list_gene_pane_t1

0xe480,	// (0x0003470b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe480,	// (0x0003470b) sp_fs_action_menu_list_gene_pane

0xe4a3,	// (0x0003472e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4a3,	// (0x0003472e) popup_sp_fs_action_menu_bg_pane

0xe4b1,	// (0x0003473c) sp_fs_action_menu_list_pane_ParamLimits

0xe4b1,	// (0x0003473c) sp_fs_action_menu_list_pane

0xe4d5,	// (0x00034760) sp_fs_scroll_pane_cp01_ParamLimits

0xe4d5,	// (0x00034760) sp_fs_scroll_pane_cp01

0x9d52,	// (0x0002ffdd) list_medium_line_plain_t2_t1

0x9d62,	// (0x0002ffed) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00035f8f) list_medium_line_plain_t2_t

0x9d72,	// (0x0002fffd) list_medium_line_plain_t3_t1

0x9d82,	// (0x0003000d) list_medium_line_plain_t3_t2

0x9d90,	// (0x0003001b) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00035f94) list_medium_line_plain_t3_t

0x324c,	// (0x000294d7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x2_t2_g2_g1

0x3264,	// (0x000294ef) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3264,	// (0x000294ef) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x000354f5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x000354f5) list_medium_line_x2_t2_g2_g

0x46cb,	// (0x0002a956) list_medium_line_x2_t2_g2_t1_ParamLimits

0x46cb,	// (0x0002a956) list_medium_line_x2_t2_g2_t1

0x3299,	// (0x00029524) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3299,	// (0x00029524) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00035f9b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00035f9b) list_medium_line_x2_t2_g2_t

0x324c,	// (0x000294d7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x2_t4_g2_g1

0x3264,	// (0x000294ef) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3264,	// (0x000294ef) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x000354f5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x000354f5) list_medium_line_x2_t4_g2_g

0x9d9e,	// (0x00030029) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9d9e,	// (0x00030029) list_medium_line_x2_t4_g2_t1

0x9db8,	// (0x00030043) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9db8,	// (0x00030043) list_medium_line_x2_t4_g2_t2

0x9dce,	// (0x00030059) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9dce,	// (0x00030059) list_medium_line_x2_t4_g2_t3

0x3299,	// (0x00029524) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3299,	// (0x00029524) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00035fa0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00035fa0) list_medium_line_x2_t4_g2_t

0xe4fb,	// (0x00034786) list_medium_line_t3_right_iconx2_g1

0xe3dd,	// (0x00034668) list_medium_line_t3_right_iconx2_g2

0x9de3,	// (0x0003006e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00035fa9) list_medium_line_t3_right_iconx2_g

0x9ded,	// (0x00030078) list_medium_line_t3_right_iconx2_t1

0x9dfd,	// (0x00030088) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00035fb0) list_medium_line_t3_right_iconx2_t

0x324c,	// (0x000294d7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x3_t4_g4_g1

0x3258,	// (0x000294e3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3258,	// (0x000294e3) list_medium_line_x3_t4_g4_g2

0x3300,	// (0x0002958b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3300,	// (0x0002958b) list_medium_line_x3_t4_g4_g3

0xe503,	// (0x0003478e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe503,	// (0x0003478e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x00035fb5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x00035fb5) list_medium_line_x3_t4_g4_g

0x9e0b,	// (0x00030096) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9e0b,	// (0x00030096) list_medium_line_x3_t4_g4_t1

0x9e22,	// (0x000300ad) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9e22,	// (0x000300ad) list_medium_line_x3_t4_g4_t2

0xe50f,	// (0x0003479a) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe50f,	// (0x0003479a) list_medium_line_x3_t4_g4_t3

0xe524,	// (0x000347af) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe524,	// (0x000347af) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00035fbe) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00035fbe) list_medium_line_x3_t4_g4_t

0x9e3d,	// (0x000300c8) list_single_dyc_row_text_pane_t1_ParamLimits

0x9e3d,	// (0x000300c8) list_single_dyc_row_text_pane_t1

0x9e86,	// (0x00030111) list_single_dyc_row_text_pane_t2_ParamLimits

0x9e86,	// (0x00030111) list_single_dyc_row_text_pane_t2

0xe541,	// (0x000347cc) list_single_dyc_row_text_pane_t3_ParamLimits

0xe541,	// (0x000347cc) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00035fc7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00035fc7) list_single_dyc_row_text_pane_t

0xe553,	// (0x000347de) list_single_dyc_row_pane_g1_ParamLimits

0xe553,	// (0x000347de) list_single_dyc_row_pane_g1

0xe55f,	// (0x000347ea) list_single_dyc_row_pane_g2_ParamLimits

0xe55f,	// (0x000347ea) list_single_dyc_row_pane_g2

0xe56b,	// (0x000347f6) list_single_dyc_row_pane_g3_ParamLimits

0xe56b,	// (0x000347f6) list_single_dyc_row_pane_g3

0xe577,	// (0x00034802) list_single_dyc_row_pane_g4_ParamLimits

0xe577,	// (0x00034802) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00035fce) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00035fce) list_single_dyc_row_pane_g

0xe583,	// (0x0003480e) list_single_dyc_row_text_pane_ParamLimits

0xe583,	// (0x0003480e) list_single_dyc_row_text_pane

0x1c79,	// (0x00027f04) bg_sp_fs_scroll_pane

0xe5a2,	// (0x0003482d) thumb_sp_fs_scroll_pane

0xd275,	// (0x00033500) list_medium_line_g1_ParamLimits

0xd275,	// (0x00033500) list_medium_line_g1

0xe5ab,	// (0x00034836) list_medium_line_t1_ParamLimits

0xe5ab,	// (0x00034836) list_medium_line_t1

0x324c,	// (0x000294d7) list_medium_line_x2_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x2_g1

0x3258,	// (0x000294e3) list_medium_line_x2_g2_ParamLimits

0x3258,	// (0x000294e3) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x00035fd7) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x00035fd7) list_medium_line_x2_g

0xe5c0,	// (0x0003484b) list_medium_line_x2_t1_ParamLimits

0xe5c0,	// (0x0003484b) list_medium_line_x2_t1

0x324c,	// (0x000294d7) list_medium_line_x3_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x3_g1

0x3258,	// (0x000294e3) list_medium_line_x3_g2_ParamLimits

0x3258,	// (0x000294e3) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x00035fd7) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x00035fd7) list_medium_line_x3_g

0xe5c0,	// (0x0003484b) list_medium_line_x3_t1_ParamLimits

0xe5c0,	// (0x0003484b) list_medium_line_x3_t1

0xe5d6,	// (0x00034861) thumb_sp_fs_scroll_pane_g1

0xe5df,	// (0x0003486a) thumb_sp_fs_scroll_pane_g2

0xe5e8,	// (0x00034873) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00035fdc) thumb_sp_fs_scroll_pane_g

0xe5d6,	// (0x00034861) bg_sp_fs_scroll_pane_g1

0xe5df,	// (0x0003486a) bg_sp_fs_scroll_pane_g2

0xe5e8,	// (0x00034873) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00035fdc) bg_sp_fs_scroll_pane_g

0x324c,	// (0x000294d7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x324c,	// (0x000294d7) list_medium_line_x2_t3_g4_g1

0x32f4,	// (0x0002957f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x32f4,	// (0x0002957f) list_medium_line_x2_t3_g4_g2

0x3258,	// (0x000294e3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3258,	// (0x000294e3) list_medium_line_x2_t3_g4_g3

0x3264,	// (0x000294ef) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3264,	// (0x000294ef) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00035571) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00035571) list_medium_line_x2_t3_g4_g

0x9ee0,	// (0x0003016b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9ee0,	// (0x0003016b) list_medium_line_x2_t3_g4_t1

0x9ef6,	// (0x00030181) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9ef6,	// (0x00030181) list_medium_line_x2_t3_g4_t2

0x3299,	// (0x00029524) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3299,	// (0x00029524) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00035fe3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00035fe3) list_medium_line_x2_t3_g4_t

0xd275,	// (0x00033500) list_medium_line_g2_g1_ParamLimits

0xd275,	// (0x00033500) list_medium_line_g2_g1

0xd281,	// (0x0003350c) list_medium_line_g2_g2_ParamLimits

0xd281,	// (0x0003350c) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00035caa) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00035caa) list_medium_line_g2_g

0xe5f1,	// (0x0003487c) list_medium_line_g2_t1_ParamLimits

0xe5f1,	// (0x0003487c) list_medium_line_g2_t1

0xd275,	// (0x00033500) list_medium_line_t3_g2_g1_ParamLimits

0xd275,	// (0x00033500) list_medium_line_t3_g2_g1

0xd281,	// (0x0003350c) list_medium_line_t3_g2_g2_ParamLimits

0xd281,	// (0x0003350c) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00035caa) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00035caa) list_medium_line_t3_g2_g

0x9f0f,	// (0x0003019a) list_medium_line_t3_g2_t1_ParamLimits

0x9f0f,	// (0x0003019a) list_medium_line_t3_g2_t1

0x9f29,	// (0x000301b4) list_medium_line_t3_g2_t2_ParamLimits

0x9f29,	// (0x000301b4) list_medium_line_t3_g2_t2

0x9f3f,	// (0x000301ca) list_medium_line_t3_g2_t3_ParamLimits

0x9f3f,	// (0x000301ca) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x00035fea) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x00035fea) list_medium_line_t3_g2_t

0xe3dd,	// (0x00034668) list_medium_line_right_icon_g1

0xe606,	// (0x00034891) list_medium_line_right_icon_t1

0xd275,	// (0x00033500) list_medium_line_t2_g1_ParamLimits

0xd275,	// (0x00033500) list_medium_line_t2_g1

0x9f56,	// (0x000301e1) list_medium_line_t2_t1_ParamLimits

0x9f56,	// (0x000301e1) list_medium_line_t2_t1

0x9f70,	// (0x000301fb) list_medium_line_t2_t2_ParamLimits

0x9f70,	// (0x000301fb) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00035ff1) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00035ff1) list_medium_line_t2_t

0xd275,	// (0x00033500) list_medium_line_t3_g1_ParamLimits

0xd275,	// (0x00033500) list_medium_line_t3_g1

0x9f89,	// (0x00030214) list_medium_line_t3_t1_ParamLimits

0x9f89,	// (0x00030214) list_medium_line_t3_t1

0x9fa3,	// (0x0003022e) list_medium_line_t3_t2_ParamLimits

0x9fa3,	// (0x0003022e) list_medium_line_t3_t2

0x9fb9,	// (0x00030244) list_medium_line_t3_t3_ParamLimits

0x9fb9,	// (0x00030244) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x00035ff6) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x00035ff6) list_medium_line_t3_t

0xd275,	// (0x00033500) list_medium_line_g3_g1_ParamLimits

0xd275,	// (0x00033500) list_medium_line_g3_g1

0xe614,	// (0x0003489f) list_medium_line_g3_g2_ParamLimits

0xe614,	// (0x0003489f) list_medium_line_g3_g2

0xd281,	// (0x0003350c) list_medium_line_g3_g3_ParamLimits

0xd281,	// (0x0003350c) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00035ffd) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00035ffd) list_medium_line_g3_g

0xe620,	// (0x000348ab) list_medium_line_g3_t1_ParamLimits

0xe620,	// (0x000348ab) list_medium_line_g3_t1

0xd275,	// (0x00033500) list_medium_line_t2_g3_g1_ParamLimits

0xd275,	// (0x00033500) list_medium_line_t2_g3_g1

0xe614,	// (0x0003489f) list_medium_line_t2_g3_g2_ParamLimits

0xe614,	// (0x0003489f) list_medium_line_t2_g3_g2

0xd281,	// (0x0003350c) list_medium_line_t2_g3_g3_ParamLimits

0xd281,	// (0x0003350c) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00035ffd) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00035ffd) list_medium_line_t2_g3_g

0x9fce,	// (0x00030259) list_medium_line_t2_g3_t1_ParamLimits

0x9fce,	// (0x00030259) list_medium_line_t2_g3_t1

0x9fe5,	// (0x00030270) list_medium_line_t2_g3_t2_ParamLimits

0x9fe5,	// (0x00030270) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x00036004) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x00036004) list_medium_line_t2_g3_t

0xd275,	// (0x00033500) list_medium_line_t3_g3_g1_ParamLimits

0xd275,	// (0x00033500) list_medium_line_t3_g3_g1

0xe614,	// (0x0003489f) list_medium_line_t3_g3_g2_ParamLimits

0xe614,	// (0x0003489f) list_medium_line_t3_g3_g2

0xd281,	// (0x0003350c) list_medium_line_t3_g3_g3_ParamLimits

0xd281,	// (0x0003350c) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00035ffd) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00035ffd) list_medium_line_t3_g3_g

0x9ffe,	// (0x00030289) list_medium_line_t3_g3_t1_ParamLimits

0x9ffe,	// (0x00030289) list_medium_line_t3_g3_t1

0xa017,	// (0x000302a2) list_medium_line_t3_g3_t2_ParamLimits

0xa017,	// (0x000302a2) list_medium_line_t3_g3_t2

0xa02d,	// (0x000302b8) list_medium_line_t3_g3_t3_ParamLimits

0xa02d,	// (0x000302b8) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x00036009) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x00036009) list_medium_line_t3_g3_t

0xe4fb,	// (0x00034786) list_medium_line_right_iconx2_g1

0xe3dd,	// (0x00034668) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x00036010) list_medium_line_right_iconx2_g

0xe635,	// (0x000348c0) list_medium_line_right_iconx2_t1

0xe4fb,	// (0x00034786) list_medium_line_t2_right_iconx2_g1

0xe3dd,	// (0x00034668) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x00036010) list_medium_line_t2_right_iconx2_g

0xa047,	// (0x000302d2) list_medium_line_t2_right_iconx2_t1

0xa057,	// (0x000302e2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x00036015) list_medium_line_t2_right_iconx2_t

0xe643,	// (0x000348ce) list_medium_line_x4_t4_t1

0xa069,	// (0x000302f4) list_medium_line_x4_t4_t2

0xa079,	// (0x00030304) list_medium_line_x4_t4_t3

0xa089,	// (0x00030314) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0003601a) list_medium_line_x4_t4_t

0xa0d3,	// (0x0003035e) tport_appsw_pane_ParamLimits

0xa0d3,	// (0x0003035e) tport_appsw_pane

0xa0e6,	// (0x00030371) tport_contact_pane_ParamLimits

0xa0e6,	// (0x00030371) tport_contact_pane

0xa0f9,	// (0x00030384) tport_listscroll_pane_ParamLimits

0xa0f9,	// (0x00030384) tport_listscroll_pane

0xa10f,	// (0x0003039a) cell_tport_appsw_pane_ParamLimits

0xa10f,	// (0x0003039a) cell_tport_appsw_pane

0xcf67,	// (0x000331f2) tport_appsw_pane_g1_ParamLimits

0xcf67,	// (0x000331f2) tport_appsw_pane_g1

0xe651,	// (0x000348dc) tport_contact_pane_g1

0xe65a,	// (0x000348e5) tport_contact_pane_t1

0xe668,	// (0x000348f3) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00036023) tport_contact_pane_t

0xe676,	// (0x00034901) list_tport_pane

0xe67f,	// (0x0003490a) scroll_pane_cp_030

0xa155,	// (0x000303e0) cell_tport_appsw_pane_g1

0xe698,	// (0x00034923) cell_tport_appsw_pane_t1

0x1c79,	// (0x00027f04) grid_highlight_pane_cp019

0xa165,	// (0x000303f0) list_tport_double_graphic_pane_ParamLimits

0xa165,	// (0x000303f0) list_tport_double_graphic_pane

0x1ef4,	// (0x0002817f) list_highlight_pane_cp023_ParamLimits

0x1ef4,	// (0x0002817f) list_highlight_pane_cp023

0xa175,	// (0x00030400) list_tport_double_graphic_pane_g1_ParamLimits

0xa175,	// (0x00030400) list_tport_double_graphic_pane_g1

0xa182,	// (0x0003040d) list_tport_double_graphic_pane_t1_ParamLimits

0xa182,	// (0x0003040d) list_tport_double_graphic_pane_t1

0xa197,	// (0x00030422) list_tport_double_graphic_pane_t2_ParamLimits

0xa197,	// (0x00030422) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0003602f) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0003602f) list_tport_double_graphic_pane_t

0x1c79,	// (0x00027f04) main_cale_note_pane

0x1958,	// (0x00027be3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1958,	// (0x00027be3) cell_vitu2_function_top_wide_pane_cp01

0x9857,	// (0x0002fae2) wait_bar_pane_cp05_ParamLimits

0x1c79,	// (0x00027f04) listscroll_cmail_pane

0xe6ae,	// (0x00034939) list_cmail_pane

0xa1b3,	// (0x0003043e) list_cmail_body_pane

0xa1cb,	// (0x00030456) list_single_cmail_header_caption_pane

0xa1e8,	// (0x00030473) list_single_cmail_header_detail_pane_ParamLimits

0xa1e8,	// (0x00030473) list_single_cmail_header_detail_pane

0xa21a,	// (0x000304a5) list_single_cmail_header_caption_pane_t1

0xa22a,	// (0x000304b5) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa22a,	// (0x000304b5) list_single_cmail_header_detail_pane_g1

0xe6ce,	// (0x00034959) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6ce,	// (0x00034959) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00036034) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00036034) list_single_cmail_header_detail_pane_g

0xe6e7,	// (0x00034972) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6e7,	// (0x00034972) list_single_cmail_header_detail_pane_t1

0xe725,	// (0x000349b0) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe725,	// (0x000349b0) list_single_cmail_header_editor_pane_bg

0xdf41,	// (0x000341cc) list_cmail_body_pane_g1

0xe737,	// (0x000349c2) list_cmail_body_pane_t1

0xcfb2,	// (0x0003323d) list_single_cmail_header_editor_pane_bg_g1

0x39b5,	// (0x00029c40) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcfc2,	// (0x0003324d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcfba,	// (0x00033245) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd24d,	// (0x000334d8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfe2,	// (0x0003326d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcfd2,	// (0x0003325d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcfda,	// (0x00033265) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3995,	// (0x00029c20) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa268,	// (0x000304f3) calenote_gesture_pane_ParamLimits

0xa268,	// (0x000304f3) calenote_gesture_pane

0xa288,	// (0x00030513) calenote_window_pane_ParamLimits

0xa288,	// (0x00030513) calenote_window_pane

0xe745,	// (0x000349d0) popup_note_window_cp01

0xa2a4,	// (0x0003052f) calenote_swipe_1_pane_ParamLimits

0xa2a4,	// (0x0003052f) calenote_swipe_1_pane

0x9c5a,	// (0x0002fee5) calenote_swipe_2_pane_ParamLimits

0x9c5a,	// (0x0002fee5) calenote_swipe_2_pane

0xe2dc,	// (0x00034567) calenote_swipe_1_pane_g1_ParamLimits

0xe2dc,	// (0x00034567) calenote_swipe_1_pane_g1

0xe2e9,	// (0x00034574) calenote_swipe_1_pane_g2_ParamLimits

0xe2e9,	// (0x00034574) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00035f68) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00035f68) calenote_swipe_1_pane_g

0xe757,	// (0x000349e2) calenote_swipe_1_pane_t1_ParamLimits

0xe757,	// (0x000349e2) calenote_swipe_1_pane_t1

0xe2dc,	// (0x00034567) calenote_swipe_2_pane_g1_ParamLimits

0xe2dc,	// (0x00034567) calenote_swipe_2_pane_g1

0xe776,	// (0x00034a01) calenote_swipe_2_pane_g2_ParamLimits

0xe776,	// (0x00034a01) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00036040) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00036040) calenote_swipe_2_pane_g

0xe782,	// (0x00034a0d) calenote_swipe_2_pane_t1_ParamLimits

0xe782,	// (0x00034a0d) calenote_swipe_2_pane_t1

0x1c79,	// (0x00027f04) main_mup_navstr_pane

0x760a,	// (0x0002d895) main_mup3_pane_t7_ParamLimits

0x760a,	// (0x0002d895) main_mup3_pane_t7

0xcb46,	// (0x00032dd1) main_mp4_pane_g6_ParamLimits

0xcb46,	// (0x00032dd1) main_mp4_pane_g6

0xcd6a,	// (0x00032ff5) main_image3_pane_t4_ParamLimits

0xcd6a,	// (0x00032ff5) main_image3_pane_t4

0xa2b9,	// (0x00030544) popup_navstr_preview_pane_ParamLimits

0xa2b9,	// (0x00030544) popup_navstr_preview_pane

0xa2c9,	// (0x00030554) scroll_navstr_pane_ParamLimits

0xa2c9,	// (0x00030554) scroll_navstr_pane

0x1c79,	// (0x00027f04) bg_popup_preview_window_pane_cp04

0xe7a9,	// (0x00034a34) popup_navstr_preview_pane_t1

0xa2dd,	// (0x00030568) scroll_navstr_pane_g1_ParamLimits

0xa2dd,	// (0x00030568) scroll_navstr_pane_g1

0xa2f1,	// (0x0003057c) scroll_navstr_pane_t1_ParamLimits

0xa2f1,	// (0x0003057c) scroll_navstr_pane_t1

0xe74e,	// (0x000349d9) bg_button_pane_cp014

0xe74e,	// (0x000349d9) bg_button_pane_cp030

0xe27d,	// (0x00034508) list_double_fisheye_pane_g4_ParamLimits

0xe27d,	// (0x00034508) list_double_fisheye_pane_g4

0xe289,	// (0x00034514) list_double_fisheye_pane_g5_ParamLimits

0xe289,	// (0x00034514) list_double_fisheye_pane_g5

0xe6b6,	// (0x00034941) sp_fs_scroll_pane_cp03

0xe41f,	// (0x000346aa) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe42b,	// (0x000346b6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x00035f85) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe437,	// (0x000346c2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa1a9,	// (0x00030434) sp_fs_scroll_pane_cp02

0x2b32,	// (0x00028dbd) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2b32,	// (0x00028dbd) popup_sp_fs_calendar_preview_list_single_pane

0x1c79,	// (0x00027f04) main_cam6_pano_pane

0x1ef4,	// (0x0002817f) main_mup3_pane_ParamLimits

0x1c79,	// (0x00027f04) main_phacti_pane

0x9728,	// (0x0002f9b3) bg_button_pane_cp11

0x9742,	// (0x0002f9cd) main_mobtv_info_pane_g2_ParamLimits

0x9742,	// (0x0002f9cd) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x00035ee5) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x00035ee5) main_mobtv_info_pane_g

0x991d,	// (0x0002fba8) sc_clock_pane_t5_ParamLimits

0x991d,	// (0x0002fba8) sc_clock_pane_t5

0x99a7,	// (0x0002fc32) main_radioblah_pane_g1_ParamLimits

0xe1d1,	// (0x0003445c) main_radioblah_pane_t3_ParamLimits

0xe1d1,	// (0x0003445c) main_radioblah_pane_t3

0xe1e9,	// (0x00034474) main_radioblah_pane_t4_ParamLimits

0xe1e9,	// (0x00034474) main_radioblah_pane_t4

0x99cf,	// (0x0002fc5a) main_radioblah_text_pane_ParamLimits

0x99cf,	// (0x0002fc5a) main_radioblah_text_pane

0x99e1,	// (0x0002fc6c) main_radioblah_info_pane_g1_ParamLimits

0x9a7a,	// (0x0002fd05) main_radioblah_info_pane_t4_ParamLimits

0x9a7a,	// (0x0002fd05) main_radioblah_info_pane_t4

0x1ef4,	// (0x0002817f) main_sp_fs_calendar_pane

0xa308,	// (0x00030593) main_phacti_pane_g1

0xa310,	// (0x0003059b) phacti_note_pane_ParamLimits

0xa310,	// (0x0003059b) phacti_note_pane

0xe7c0,	// (0x00034a4b) phacti_term_pane_ParamLimits

0xe7c0,	// (0x00034a4b) phacti_term_pane

0xe7d5,	// (0x00034a60) phacti_note_pane_t1_ParamLimits

0xe7d5,	// (0x00034a60) phacti_note_pane_t1

0xe7ec,	// (0x00034a77) phacti_term_pane_g1

0xe7f4,	// (0x00034a7f) phacti_term_pane_t1_ParamLimits

0xe7f4,	// (0x00034a7f) phacti_term_pane_t1

0xe81e,	// (0x00034aa9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe826,	// (0x00034ab1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0003604a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe82e,	// (0x00034ab9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe82e,	// (0x00034ab9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe844,	// (0x00034acf) aid_popup_sp_fs_bg_corner_pane

0xc1e3,	// (0x0003246e) popup_sp_fs_calendar_preview_bg_pane_g1

0x1c79,	// (0x00027f04) popup_sp_fs_calendar_preview_bg_pane

0xe84c,	// (0x00034ad7) popup_sp_fs_calendar_preview_list_pane

0x1ef4,	// (0x0002817f) bg_main_sp_fs_cale_pane_ParamLimits

0x1ef4,	// (0x0002817f) bg_main_sp_fs_cale_pane

0xe85d,	// (0x00034ae8) listscroll_cale_mrui_pane_ParamLimits

0xe85d,	// (0x00034ae8) listscroll_cale_mrui_pane

0xe871,	// (0x00034afc) listscroll_sp_fs_schedule_track_pane

0xe87a,	// (0x00034b05) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe87a,	// (0x00034b05) main_sp_fs_ctrlbar_pane_cp01

0xe88b,	// (0x00034b16) main_sp_fs_ribbon_pane

0xe893,	// (0x00034b1e) popup_sp_fs_cale_preview_window

0xa367,	// (0x000305f2) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa367,	// (0x000305f2) list_single_sp_fs_schedule_track_pane

0x1ef4,	// (0x0002817f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1ef4,	// (0x0002817f) bg_sp_fs_highlight_list_pane_cp03

0xa37a,	// (0x00030605) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa37a,	// (0x00030605) list_single_sp_fs_schedule_track_pane_g1

0xa386,	// (0x00030611) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa386,	// (0x00030611) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0003604f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0003604f) list_single_sp_fs_schedule_track_pane_g

0xa392,	// (0x0003061d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa392,	// (0x0003061d) list_single_sp_fs_schedule_track_pane_t1

0xa3b4,	// (0x0003063f) sp_fs_schedule_track_pane_ParamLimits

0xa3b4,	// (0x0003063f) sp_fs_schedule_track_pane

0xe8a5,	// (0x00034b30) sp_fs_schedule_track_pane_g1

0xe8ad,	// (0x00034b38) sp_fs_schedule_track_pane_g2

0xe8b5,	// (0x00034b40) sp_fs_schedule_track_pane_g3

0xe8bd,	// (0x00034b48) sp_fs_schedule_track_pane_g4

0xe8c5,	// (0x00034b50) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00036054) sp_fs_schedule_track_pane_g

0xcfb2,	// (0x0003323d) bg_sp_fs_schedule_viewer_highlight_g1

0x39b5,	// (0x00029c40) bg_sp_fs_schedule_viewer_highlight_g2

0xcfba,	// (0x00033245) bg_sp_fs_schedule_viewer_highlight_g3

0xcfc2,	// (0x0003324d) bg_sp_fs_schedule_viewer_highlight_g4

0xd24d,	// (0x000334d8) bg_sp_fs_schedule_viewer_highlight_g5

0xcfd2,	// (0x0003325d) bg_sp_fs_schedule_viewer_highlight_g6

0xcfda,	// (0x00033265) bg_sp_fs_schedule_viewer_highlight_g7

0xcfe2,	// (0x0003326d) bg_sp_fs_schedule_viewer_highlight_g8

0x3995,	// (0x00029c20) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0003605f) bg_sp_fs_schedule_viewer_highlight_g

0x1c79,	// (0x00027f04) bg_main_sp_fs_ribbon_pane

0xa3c9,	// (0x00030654) main_sp_fs_ribbon_pane_g1

0xe8cd,	// (0x00034b58) main_sp_fs_ribbon_pane_t1

0xa3d2,	// (0x0003065d) main_sp_fs_ribbon_pane_t2

0xe8dc,	// (0x00034b67) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00036072) main_sp_fs_ribbon_pane_t

0xe8eb,	// (0x00034b76) main_sp_fs_ribbon_scheduler_pane

0xe8f3,	// (0x00034b7e) bg_main_sp_fs_ribbon_pane_g1

0xe8fc,	// (0x00034b87) bg_main_sp_fs_ribbon_pane_g2

0xe905,	// (0x00034b90) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00036079) bg_main_sp_fs_ribbon_pane_g

0xe90d,	// (0x00034b98) main_sp_fs_ribbon_scheduler_pane_g1

0xe916,	// (0x00034ba1) main_sp_fs_ribbon_scheduler_pane_g2

0xe91f,	// (0x00034baa) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00036080) main_sp_fs_ribbon_scheduler_pane_g

0xe928,	// (0x00034bb3) list_cale_mrui_pane

0xa3e1,	// (0x0003066c) sp_fs_scroll_pane_cp07_ParamLimits

0xa3e1,	// (0x0003066c) sp_fs_scroll_pane_cp07

0xa3f7,	// (0x00030682) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa3f7,	// (0x00030682) bg_sp_fs_schedule_viewer_highlight

0xe931,	// (0x00034bbc) list_single_sp_fs_schedule_track_pane_cp01

0xe939,	// (0x00034bc4) list_sp_fs_schedule_track_pane

0xe941,	// (0x00034bcc) sp_fs_scroll_pane_cp06_ParamLimits

0xe941,	// (0x00034bcc) sp_fs_scroll_pane_cp06

0xc1e3,	// (0x0003246e) bgmain_sp_fs_calendar_pane_g1

0xa409,	// (0x00030694) list_single_cale_mrui_pane_ParamLimits

0xa409,	// (0x00030694) list_single_cale_mrui_pane

0xe953,	// (0x00034bde) list_single_cale_mrui_row_pane_ParamLimits

0xe953,	// (0x00034bde) list_single_cale_mrui_row_pane

0xe960,	// (0x00034beb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe960,	// (0x00034beb) list_single_cale_mrui_row_pane_g1

0xe998,	// (0x00034c23) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe998,	// (0x00034c23) list_single_cale_mrui_row_pane_t1

0xa430,	// (0x000306bb) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa430,	// (0x000306bb) list_single_cale_mrui_row_pane_t2

0xe9aa,	// (0x00034c35) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9aa,	// (0x00034c35) list_single_cale_mrui_row_pane_t3

0xe9d9,	// (0x00034c64) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9d9,	// (0x00034c64) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0003608c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0003608c) list_single_cale_mrui_row_pane_t

0xa496,	// (0x00030721) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa496,	// (0x00030721) list_single_cmail_header_editor_pane_bg_cp01

0xa4ba,	// (0x00030745) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa4ba,	// (0x00030745) list_single_cmail_header_editor_pane_bg_cp02

0xa4d8,	// (0x00030763) main_radioblah_text_pane_t1_ParamLimits

0xa4d8,	// (0x00030763) main_radioblah_text_pane_t1

0xea08,	// (0x00034c93) cam6_indi_pane_cp01

0xea10,	// (0x00034c9b) cam6_mode_pane_cp01

0xea18,	// (0x00034ca3) cam6_pano_pane

0xea21,	// (0x00034cac) cam6_zoom_pane_cp01

0xea2b,	// (0x00034cb6) cam6_pano_image_pane

0xea34,	// (0x00034cbf) cam6_pano_pane_g1

0xdf41,	// (0x000341cc) cam6_pano_pane_g2

0xea3d,	// (0x00034cc8) cam6_pano_pane_g3

0xea46,	// (0x00034cd1) cam6_pano_pane_g4

0xc7c3,	// (0x00032a4e) cam6_pano_pane_g5

0xea4f,	// (0x00034cda) cam6_pano_pane_g6

0xea57,	// (0x00034ce2) cam6_pano_pane_g7

0xea5f,	// (0x00034cea) cam6_pano_pane_g8

0xea68,	// (0x00034cf3) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x00036095) cam6_pano_pane_g

0x1c79,	// (0x00027f04) main_browser_tag_pane

0xe7a1,	// (0x00034a2c) grid_navstr_albumart_pane

0xea73,	// (0x00034cfe) cell_navstr_albumart_pane_ParamLimits

0xea73,	// (0x00034cfe) cell_navstr_albumart_pane

0xea8f,	// (0x00034d1a) cell_navstr_albumart_pane_g1

0xbac7,	// (0x00031d52) cell_navstr_albumart_pane_g2

0xbad7,	// (0x00031d62) cell_navstr_albumart_pane_g3

0xbacf,	// (0x00031d5a) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x000360a8) cell_navstr_albumart_pane_g

0xa4f3,	// (0x0003077e) bt_list_pane_ParamLimits

0xa4f3,	// (0x0003077e) bt_list_pane

0xa509,	// (0x00030794) bt_list_pane_t1

0xa518,	// (0x000307a3) bt_list_pane_t2

0x0001,

0xfe26,	// (0x000360b1) bt_list_pane_t

0x1c79,	// (0x00027f04) main_cale_prevew_pane

0xa527,	// (0x000307b2) popup_cale_preview_window_ParamLimits

0xa527,	// (0x000307b2) popup_cale_preview_window

0x1ef4,	// (0x0002817f) bg_popup_preview_window_pane_cp05_ParamLimits

0x1ef4,	// (0x0002817f) bg_popup_preview_window_pane_cp05

0xea97,	// (0x00034d22) list_cale_preview_pane_ParamLimits

0xea97,	// (0x00034d22) list_cale_preview_pane

0xa542,	// (0x000307cd) list_double_cale_preview_pane_ParamLimits

0xa542,	// (0x000307cd) list_double_cale_preview_pane

0xa556,	// (0x000307e1) list_single_cale_preview_pane_ParamLimits

0xa556,	// (0x000307e1) list_single_cale_preview_pane

0xa56e,	// (0x000307f9) list_single_cale_preview_pane_g1

0xa576,	// (0x00030801) list_single_cale_preview_pane_t1_ParamLimits

0xa576,	// (0x00030801) list_single_cale_preview_pane_t1

0xa58b,	// (0x00030816) list_double_cale_preview_pane_g1

0xa593,	// (0x0003081e) list_double_cale_preview_pane_t1_ParamLimits

0xa593,	// (0x0003081e) list_double_cale_preview_pane_t1

0xa5a8,	// (0x00030833) list_double_cale_preview_pane_t2_ParamLimits

0xa5a8,	// (0x00030833) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x000360b6) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x000360b6) list_double_cale_preview_pane_t

0x1c79,	// (0x00027f04) main_ezdial_pane

0x1ef4,	// (0x0002817f) main_sp_fs_email_pane_ParamLimits

0x9c96,	// (0x0002ff21) cmail_ddmenu_btn01_pane_ParamLimits

0x9c96,	// (0x0002ff21) cmail_ddmenu_btn01_pane

0x9ca9,	// (0x0002ff34) cmail_ddmenu_btn02_pane_ParamLimits

0x9ca9,	// (0x0002ff34) cmail_ddmenu_btn02_pane

0x9ccc,	// (0x0002ff57) cmail_ddmenu_btn03_pane_ParamLimits

0x9ccc,	// (0x0002ff57) cmail_ddmenu_btn03_pane

0x9cf2,	// (0x0002ff7d) main_sp_fs_ctrlbar_pane_ParamLimits

0x9d16,	// (0x0002ffa1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa1b3,	// (0x0003043e) list_cmail_body_pane_ParamLimits

0xe6c5,	// (0x00034950) bg_button_pane_cp12

0xe6da,	// (0x00034965) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6da,	// (0x00034965) list_single_cmail_header_detail_pane_g3

0xa242,	// (0x000304cd) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa242,	// (0x000304cd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0003603b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0003603b) list_single_cmail_header_detail_pane_t

0xe809,	// (0x00034a94) phacti_term_pane_t2_ParamLimits

0xe809,	// (0x00034a94) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00036045) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00036045) phacti_term_pane_t

0xeaa3,	// (0x00034d2e) aid_size_list_single_double

0xa5c0,	// (0x0003084b) popup_ezdial_listscroll_window

0xa5dc,	// (0x00030867) popup_number_entry_window_cp01

0x4ec7,	// (0x0002b152) bg_popup_call_pane_cp09

0xeaaf,	// (0x00034d3a) ezdial_list_pane

0xeab7,	// (0x00034d42) scroll_pane_cp23

0xbcae,	// (0x00031f39) bg_button_pane_cp028_ParamLimits

0xbcae,	// (0x00031f39) bg_button_pane_cp028

0xa5ea,	// (0x00030875) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa5ea,	// (0x00030875) cmail_ddmenu_btn01_pane_g1

0xa5f6,	// (0x00030881) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa5f6,	// (0x00030881) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x000360bb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x000360bb) cmail_ddmenu_btn01_pane_g

0xeabf,	// (0x00034d4a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeabf,	// (0x00034d4a) cmail_ddmenu_btn01_pane_t1

0xbcae,	// (0x00031f39) bg_button_pane_cp029_ParamLimits

0xbcae,	// (0x00031f39) bg_button_pane_cp029

0xa602,	// (0x0003088d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa602,	// (0x0003088d) cmail_ddmenu_btn02_pane_g1

0xa61a,	// (0x000308a5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa61a,	// (0x000308a5) cmail_ddmenu_btn02_pane_t1

0x1ef4,	// (0x0002817f) bg_button_pane_cp031_ParamLimits

0x1ef4,	// (0x0002817f) bg_button_pane_cp031

0xa602,	// (0x0003088d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa602,	// (0x0003088d) cmail_ddmenu_btn03_pane_g1

0xa61a,	// (0x000308a5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa61a,	// (0x000308a5) cmail_ddmenu_btn03_pane_t1

0x7fd6,	// (0x0002e261) cell_dialer2_keypad_pane_t1_ParamLimits

0x7ff0,	// (0x0002e27b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7ff0,	// (0x0002e27b) cell_dialer2_keypad_pane_t1_copy1

0x95a8,	// (0x0002f833) ncimui_group_button_pane

0x1ef4,	// (0x0002817f) main_sp_fs_calendar_pane_ParamLimits

0xa1cb,	// (0x00030456) list_single_cmail_header_caption_pane_ParamLimits

0xe854,	// (0x00034adf) aid_recal_txt_sm_pane

0x1c79,	// (0x00027f04) mian_recal_day_pane

0xe893,	// (0x00034b1e) popup_sp_fs_cale_preview_window_ParamLimits

0x1c79,	// (0x00027f04) list_recal_day_pane

0xeaf6,	// (0x00034d81) list_single_recal_day_pane_ParamLimits

0xeaf6,	// (0x00034d81) list_single_recal_day_pane

0xeb08,	// (0x00034d93) list_single_recal_day_pane_g1_ParamLimits

0xeb08,	// (0x00034d93) list_single_recal_day_pane_g1

0xeb14,	// (0x00034d9f) list_single_recal_day_pane_g2_ParamLimits

0xeb14,	// (0x00034d9f) list_single_recal_day_pane_g2

0xeb20,	// (0x00034dab) list_single_recal_day_pane_g3_ParamLimits

0xeb20,	// (0x00034dab) list_single_recal_day_pane_g3

0xa63e,	// (0x000308c9) list_single_recal_day_pane_g4_ParamLimits

0xa63e,	// (0x000308c9) list_single_recal_day_pane_g4

0xeb2c,	// (0x00034db7) list_single_recal_day_pane_g5_ParamLimits

0xeb2c,	// (0x00034db7) list_single_recal_day_pane_g5

0xeb38,	// (0x00034dc3) list_single_recal_day_pane_g6_ParamLimits

0xeb38,	// (0x00034dc3) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x000360ca) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x000360ca) list_single_recal_day_pane_g

0xeb44,	// (0x00034dcf) list_single_recal_day_pane_t1

0xeb52,	// (0x00034ddd) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x000360d7) list_single_recal_day_pane_t

0xa64c,	// (0x000308d7) ncimui_query_button_pane_ParamLimits

0xa64c,	// (0x000308d7) ncimui_query_button_pane

0xa65c,	// (0x000308e7) ncimui_query_button_pane_t1_ParamLimits

0xa65c,	// (0x000308e7) ncimui_query_button_pane_t1

0xeb60,	// (0x00034deb) ncimui_query_button_pane_t2_ParamLimits

0xeb60,	// (0x00034deb) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x000360dc) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x000360dc) ncimui_query_button_pane_t

0xa66f,	// (0x000308fa) query_button_pane_ParamLimits

0xa66f,	// (0x000308fa) query_button_pane

0x1c79,	// (0x00027f04) bg_button_pane_cp0028

0xeb73,	// (0x00034dfe) query_button_pane_t1

0x66c7,	// (0x0002c952) main_tport_pane_ParamLimits

0xa099,	// (0x00030324) bg_popup_window_pane_cp01_ParamLimits

0xa099,	// (0x00030324) bg_popup_window_pane_cp01

0xa0af,	// (0x0003033a) heading_pane_cp08_ParamLimits

0xa0af,	// (0x0003033a) heading_pane_cp08

0xa0c0,	// (0x0003034b) heading_pane_cp07_ParamLimits

0xa0c0,	// (0x0003034b) heading_pane_cp07

0xe690,	// (0x0003491b) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x00036028) cell_tport_appsw_pane_g

0x54be,	// (0x0002b749) input_candi_list_open_g1

0x445c,	// (0x0002a6e7) list_cale_time_pane_g6_ParamLimits

0x445c,	// (0x0002a6e7) list_cale_time_pane_g6

0x704d,	// (0x0002d2d8) aid_size_touch_calib_1_ParamLimits

0x704d,	// (0x0002d2d8) aid_size_touch_calib_1

0x7059,	// (0x0002d2e4) aid_size_touch_calib_2_ParamLimits

0x7059,	// (0x0002d2e4) aid_size_touch_calib_2

0x706f,	// (0x0002d2fa) aid_size_touch_calib_3_ParamLimits

0x706f,	// (0x0002d2fa) aid_size_touch_calib_3

0x708d,	// (0x0002d318) aid_size_touch_calib_4_ParamLimits

0x708d,	// (0x0002d318) aid_size_touch_calib_4

0x70a3,	// (0x0002d32e) main_touch_calib_button_group_pane_ParamLimits

0x70a3,	// (0x0002d32e) main_touch_calib_button_group_pane

0x70bb,	// (0x0002d346) main_touch_calib_pane_g1_ParamLimits

0x70c7,	// (0x0002d352) main_touch_calib_pane_g2_ParamLimits

0x70d3,	// (0x0002d35e) main_touch_calib_pane_g3_ParamLimits

0x70df,	// (0x0002d36a) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00035a00) main_touch_calib_pane_g_ParamLimits

0x70eb,	// (0x0002d376) main_touch_calib_pane_t1_ParamLimits

0x7105,	// (0x0002d390) main_touch_calib_pane_t2_ParamLimits

0x711f,	// (0x0002d3aa) main_touch_calib_pane_t3_ParamLimits

0x7133,	// (0x0002d3be) main_touch_calib_pane_t4_ParamLimits

0x7147,	// (0x0002d3d2) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00035a09) main_touch_calib_pane_t_ParamLimits

0xc58d,	// (0x00032818) list_single_fp_cale_pane_g3_ParamLimits

0xc58d,	// (0x00032818) list_single_fp_cale_pane_g3

0xcf9a,	// (0x00033225) bg_button_pane_cp012_ParamLimits

0xcf9a,	// (0x00033225) bg_vkb2_func_pane_cp03_ParamLimits

0x1b59,	// (0x00027de4) cell_vitu2_function_top_pane_g1_ParamLimits

0xcf9a,	// (0x00033225) bg_vkb2_func_pane_cp04_ParamLimits

0x9548,	// (0x0002f7d3) main_ncimui_button_group_pane_ParamLimits

0x9548,	// (0x0002f7d3) main_ncimui_button_group_pane

0x9596,	// (0x0002f821) main_ncimui_pane_t3_ParamLimits

0x9596,	// (0x0002f821) main_ncimui_pane_t3

0xe7b7,	// (0x00034a42) phacti_button_group_pane

0xeaa3,	// (0x00034d2e) aid_size_list_single_double_ParamLimits

0xa5c0,	// (0x0003084b) popup_ezdial_listscroll_window_ParamLimits

0xa5dc,	// (0x00030867) popup_number_entry_window_cp01_ParamLimits

0xa682,	// (0x0003090d) phacti_button_pane_ParamLimits

0xa682,	// (0x0003090d) phacti_button_pane

0x1c79,	// (0x00027f04) bg_button_pane_cp14

0xeb81,	// (0x00034e0c) phacti_button_pane_t1

0xa693,	// (0x0003091e) main_touch_calib_button_pane_ParamLimits

0xa693,	// (0x0003091e) main_touch_calib_button_pane

0x28fd,	// (0x00028b88) bg_button_pane_cp18_ParamLimits

0x28fd,	// (0x00028b88) bg_button_pane_cp18

0xeb8f,	// (0x00034e1a) main_touch_calib_button_pane_t1_ParamLimits

0xeb8f,	// (0x00034e1a) main_touch_calib_button_pane_t1

0xeba5,	// (0x00034e30) main_touch_calib_button_pane_t2_ParamLimits

0xeba5,	// (0x00034e30) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x000360e1) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x000360e1) main_touch_calib_button_pane_t

0x1c79,	// (0x00027f04) cell_ncimui_button_pane

0x1c79,	// (0x00027f04) bg_button_pane_cp032

0xebc3,	// (0x00034e4e) cell_ncimui_button_pane_t1

0xcd48,	// (0x00032fd3) image3_infobar_pane_ParamLimits

0xcd48,	// (0x00032fd3) image3_infobar_pane

0x9949,	// (0x0002fbd4) fs_bigclock_status_pane_ParamLimits

0x9949,	// (0x0002fbd4) fs_bigclock_status_pane

0x9956,	// (0x0002fbe1) main_fs_bigclock_clock_pane_ParamLimits

0x9956,	// (0x0002fbe1) main_fs_bigclock_clock_pane

0x9969,	// (0x0002fbf4) main_fs_bigclock_indi_pane_ParamLimits

0x9969,	// (0x0002fbf4) main_fs_bigclock_indi_pane

0x9984,	// (0x0002fc0f) main_fs_bigclock_swipe_pane_ParamLimits

0x9984,	// (0x0002fc0f) main_fs_bigclock_swipe_pane

0x1c79,	// (0x00027f04) main_fs_clock_dumped_data

0xe04e,	// (0x000342d9) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe04e,	// (0x000342d9) list_single_fs_bigclock_indicator_pane_g1

0xe06e,	// (0x000342f9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe06e,	// (0x000342f9) list_single_fs_bigclock_indicator_pane_g2

0xe088,	// (0x00034313) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe088,	// (0x00034313) list_single_fs_bigclock_indicator_pane_g3

0xe0a4,	// (0x0003432f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0a4,	// (0x0003432f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x00035f19) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x00035f19) list_single_fs_bigclock_indicator_pane_g

0xe0ca,	// (0x00034355) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0ca,	// (0x00034355) list_single_fs_bigclock_indicator_pane_t1

0xe0f2,	// (0x0003437d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0f2,	// (0x0003437d) list_single_fs_bigclock_indicator_pane_t2

0xe11a,	// (0x000343a5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe11a,	// (0x000343a5) list_single_fs_bigclock_indicator_pane_t3

0xe144,	// (0x000343cf) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe144,	// (0x000343cf) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x00035f24) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x00035f24) list_single_fs_bigclock_indicator_pane_t

0xebd1,	// (0x00034e5c) image3_infobar_fav_pane_ParamLimits

0xebd1,	// (0x00034e5c) image3_infobar_fav_pane

0xebe1,	// (0x00034e6c) image3_infobar_loc_pane_ParamLimits

0xebe1,	// (0x00034e6c) image3_infobar_loc_pane

0xebf7,	// (0x00034e82) image3_infobar_time_pane_ParamLimits

0xebf7,	// (0x00034e82) image3_infobar_time_pane

0xc1e3,	// (0x0003246e) image3_infobar_time_pane_g1

0xec07,	// (0x00034e92) image3_infobar_time_pane_t1

0xc1e3,	// (0x0003246e) image3_infobar_loc_pane_g1

0xec15,	// (0x00034ea0) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x000360e6) image3_infobar_loc_pane_g

0xec1d,	// (0x00034ea8) image3_infobar_loc_pane_t1

0xc1e3,	// (0x0003246e) image3_infobar_fav_pane_g1

0xec2b,	// (0x00034eb6) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x000360eb) image3_infobar_fav_pane_g

0xec33,	// (0x00034ebe) fs_bigclock_status_battery_pane

0xec3c,	// (0x00034ec7) fs_bigclock_status_signal_pane

0xec45,	// (0x00034ed0) fs_bigclock_status_title_pane

0xec4e,	// (0x00034ed9) fs_bigclock_status_signal_pane_g1

0xec57,	// (0x00034ee2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x000360f0) fs_bigclock_status_signal_pane_g

0xec5f,	// (0x00034eea) fs_bigclock_status_battery_pane_g1

0xec68,	// (0x00034ef3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x000360f5) fs_bigclock_status_battery_pane_g

0xec70,	// (0x00034efb) fs_bigclock_status_title_pane_t1

0xc1e3,	// (0x0003246e) main_fs_bigclock_clock_pane_g1

0xec7e,	// (0x00034f09) main_fs_bigclock_clock_pane_g2

0xec7e,	// (0x00034f09) main_fs_bigclock_clock_pane_g3

0xec7e,	// (0x00034f09) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x000360fa) main_fs_bigclock_clock_pane_g

0xec8a,	// (0x00034f15) main_fs_bigclock_clock_pane_t1

0xec98,	// (0x00034f23) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00036103) main_fs_bigclock_clock_pane_t

0xeca7,	// (0x00034f32) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeca7,	// (0x00034f32) list_single_fs_bigclock_indicator_pane

0xa6a8,	// (0x00030933) list_single_fs_bigclock_pane_ParamLimits

0xa6a8,	// (0x00030933) list_single_fs_bigclock_pane

0xecc1,	// (0x00034f4c) main_fs_bigclock_indicator_pane_t1

0xecd0,	// (0x00034f5b) list_single_fs_bigclock_pane_g1

0xecd8,	// (0x00034f63) list_single_fs_bigclock_pane_t1

0xc1e3,	// (0x0003246e) main_fs_bigclock_swipe_pane_g1

0xed16,	// (0x00034fa1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00036114) main_fs_bigclock_swipe_pane_g

0xed1e,	// (0x00034fa9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed1e,	// (0x00034fa9) main_fs_bigclock_swipe_pane_t1

0x481a,	// (0x0002aaa5) call_type_pane_ParamLimits

0x1c79,	// (0x00027f04) main_btmg_pane

0xe98c,	// (0x00034c17) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe98c,	// (0x00034c17) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x00036087) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00036087) list_single_cale_mrui_row_pane_g

0xeadd,	// (0x00034d68) list_recal_vselct_arw_lo_pane

0xeae5,	// (0x00034d70) list_recal_vselct_arw_up_pane

0xeaed,	// (0x00034d78) list_recal_vselct_pane

0xed3b,	// (0x00034fc6) btmg_button_pane

0xa70e,	// (0x00030999) main_btmg_pane_g1

0x1c79,	// (0x00027f04) bg_button_pane_cp044

0xed45,	// (0x00034fd0) btmg_button_pane_t1

0xbca6,	// (0x00031f31) aid_listscroll_gen

0x1ef4,	// (0x0002817f) main_cntbar_detail_pane

0xe6a6,	// (0x00034931) list_cmail_folder_pane

0xe6b6,	// (0x00034941) sp_fs_scroll_pane_cp03_ParamLimits

0xa718,	// (0x000309a3) list_single_fs_dyc_pane_cp01_ParamLimits

0xa718,	// (0x000309a3) list_single_fs_dyc_pane_cp01

0xed53,	// (0x00034fde) aid_size_cmail_indent

0xed5c,	// (0x00034fe7) list_single_dyc_row_pane_cp01

0xa765,	// (0x000309f0) cntbar_detail_list_pane_ParamLimits

0xa765,	// (0x000309f0) cntbar_detail_list_pane

0xa7b7,	// (0x00030a42) main_cntbar_detail_cont_pane_ParamLimits

0xa7b7,	// (0x00030a42) main_cntbar_detail_cont_pane

0x462f,	// (0x0002a8ba) scroll_pane_cp032_ParamLimits

0x462f,	// (0x0002a8ba) scroll_pane_cp032

0xa7cb,	// (0x00030a56) cntbar_detail_list_event_pane_ParamLimits

0xa7cb,	// (0x00030a56) cntbar_detail_list_event_pane

0xa777,	// (0x00030a02) cntbar_detail_list_shct_pane

0x3a0d,	// (0x00029c98) aid_list_gen

0xed65,	// (0x00034ff0) aid_scroll

0xed6e,	// (0x00034ff9) aid_size_touch_scroll_bar

0xed77,	// (0x00035002) aid_list_double

0xed80,	// (0x0003500b) aid_list_single

0xa7db,	// (0x00030a66) aid_list_single_lg

0xed89,	// (0x00035014) aid_list_z_g_a_sm

0xed91,	// (0x0003501c) aid_list_z_g_d

0xed99,	// (0x00035024) aid_txt_z_prm

0xeda7,	// (0x00035032) aid_txt_z_prm_cp01

0xedb5,	// (0x00035040) aid_txt_z_sec

0xa7e4,	// (0x00030a6f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa7e4,	// (0x00030a6f) main_cntbar_detail_cont_pane_g1

0xa7f8,	// (0x00030a83) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa7f8,	// (0x00030a83) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x00036119) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x00036119) main_cntbar_detail_cont_pane_g

0xedc3,	// (0x0003504e) main_cntbar_detail_cont_pane_t1

0xedd1,	// (0x0003505c) main_cntbar_detail_cont_pane_t2

0xeddf,	// (0x0003506a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x0003611e) main_cntbar_detail_cont_pane_t

0xa808,	// (0x00030a93) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa808,	// (0x00030a93) cell_cntbar_detail_list_shct_pane

0xeded,	// (0x00035078) cntbar_detail_list_shct_pane_g1

0xedf6,	// (0x00035081) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x00036125) cntbar_detail_list_shct_pane_g

0xa81a,	// (0x00030aa5) cntbar_detail_list_event_pane_g1_ParamLimits

0xa81a,	// (0x00030aa5) cntbar_detail_list_event_pane_g1

0xa826,	// (0x00030ab1) cntbar_detail_list_event_pane_g2_ParamLimits

0xa826,	// (0x00030ab1) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0003612a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0003612a) cntbar_detail_list_event_pane_g

0xa894,	// (0x00030b1f) cntbar_detail_list_event_pane_t1_ParamLimits

0xa894,	// (0x00030b1f) cntbar_detail_list_event_pane_t1

0xa8a9,	// (0x00030b34) cntbar_detail_list_event_pane_t2_ParamLimits

0xa8a9,	// (0x00030b34) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00036137) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00036137) cntbar_detail_list_event_pane_t

0xc1e3,	// (0x0003246e) cell_cntbar_detail_list_shct_pane_g1

0x4e45,	// (0x0002b0d0) navi_pane_mv_g3

0x1ef4,	// (0x0002817f) main_cntbar_detail_pane_ParamLimits

0x1c79,	// (0x00027f04) main_notif_wgt_pane

0xcafc,	// (0x00032d87) aid_tch_main_mp4_pane_g4

0xccd0,	// (0x00032f5b) popup_slider_window_cp02

0xead4,	// (0x00034d5f) list_recal_day_event_pane

0xa735,	// (0x000309c0) cntbar_detail_btn_pane_ParamLimits

0xa735,	// (0x000309c0) cntbar_detail_btn_pane

0xa74d,	// (0x000309d8) cntbar_detail_btn_pane_cp01_ParamLimits

0xa74d,	// (0x000309d8) cntbar_detail_btn_pane_cp01

0xa777,	// (0x00030a02) cntbar_detail_list_shct_pane_ParamLimits

0xa787,	// (0x00030a12) cntbar_detail_pane_g1_ParamLimits

0xa787,	// (0x00030a12) cntbar_detail_pane_g1

0xa79b,	// (0x00030a26) cntbar_detail_pane_t1_ParamLimits

0xa79b,	// (0x00030a26) cntbar_detail_pane_t1

0xa832,	// (0x00030abd) cntbar_detail_list_event_pane_g3_ParamLimits

0xa832,	// (0x00030abd) cntbar_detail_list_event_pane_g3

0xa84a,	// (0x00030ad5) cntbar_detail_list_event_pane_g4_ParamLimits

0xa84a,	// (0x00030ad5) cntbar_detail_list_event_pane_g4

0xa862,	// (0x00030aed) cntbar_detail_list_event_pane_g5_ParamLimits

0xa862,	// (0x00030aed) cntbar_detail_list_event_pane_g5

0xa87a,	// (0x00030b05) cntbar_detail_list_event_pane_g6_ParamLimits

0xa87a,	// (0x00030b05) cntbar_detail_list_event_pane_g6

0xa8be,	// (0x00030b49) cntbar_detail_list_event_pane_t3_ParamLimits

0xa8be,	// (0x00030b49) cntbar_detail_list_event_pane_t3

0xa8d0,	// (0x00030b5b) popup_notif_wgt_window_ParamLimits

0xa8d0,	// (0x00030b5b) popup_notif_wgt_window

0xa8e9,	// (0x00030b74) popup_submenu_window_cp01_ParamLimits

0xa8e9,	// (0x00030b74) popup_submenu_window_cp01

0x4ec7,	// (0x0002b152) bg_popup_window_pane_cp10

0xedff,	// (0x0003508a) listscroll_notif_wgt_pane

0xee09,	// (0x00035094) list_notif_wgt_window

0xee12,	// (0x0003509d) scroll_pane_cp033

0xee1b,	// (0x000350a6) list_notif_wgt_row_pane_ParamLimits

0xee1b,	// (0x000350a6) list_notif_wgt_row_pane

0xee2f,	// (0x000350ba) aid_size_list_notif_wgt_del

0xee38,	// (0x000350c3) list_notif_wgt_row_pane_g1

0xee40,	// (0x000350cb) list_notif_wgt_row_pane_g2

0xee48,	// (0x000350d3) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0003613e) list_notif_wgt_row_pane_g

0xee51,	// (0x000350dc) list_notif_wgt_row_pane_t1

0xee5f,	// (0x000350ea) list_notif_wgt_row_pane_t2

0xee6d,	// (0x000350f8) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00036145) list_notif_wgt_row_pane_t

0xd2a7,	// (0x00033532) list_recal_day_event_pane_g1

0xee7b,	// (0x00035106) list_recal_day_event_pane_t1

0x1c79,	// (0x00027f04) bg_button_pane_cp045

0xee8a,	// (0x00035115) cntbar_detail_btn_pane_t1

0xbcae,	// (0x00031f39) main_callh_pane_ParamLimits

0xbcae,	// (0x00031f39) main_callh_pane

0x1c79,	// (0x00027f04) main_coverflow0_pane

0x1c79,	// (0x00027f04) main_wgtman_pane

0x9992,	// (0x0002fc1d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9992,	// (0x0002fc1d) main_fs_bigclock_unlock_btn_pane

0xe688,	// (0x00034913) bg_button_pane_cp16

0xa15d,	// (0x000303e8) cell_tport_appsw_pane_g3

0xa8fb,	// (0x00030b86) cf0_flow_pane_ParamLimits

0xa8fb,	// (0x00030b86) cf0_flow_pane

0xee98,	// (0x00035123) listscroll_cf0_pane

0xeea1,	// (0x0003512c) main_cf0_pane_g1

0xa910,	// (0x00030b9b) main_cf0_pane_t1_ParamLimits

0xa910,	// (0x00030b9b) main_cf0_pane_t1

0xa927,	// (0x00030bb2) main_cf0_pane_t2_ParamLimits

0xa927,	// (0x00030bb2) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0003614c) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0003614c) main_cf0_pane_t

0xeeab,	// (0x00035136) scroll_pane_cp11

0xa93e,	// (0x00030bc9) cf0_flow_pane_g1

0xa94a,	// (0x00030bd5) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00036151) cf0_flow_pane_g

0xa956,	// (0x00030be1) cf0_flow_pane_t1

0x1c79,	// (0x00027f04) main_call6_pane

0x1c79,	// (0x00027f04) main_calllock_pane

0xa968,	// (0x00030bf3) call6_btn_grp_pane_ParamLimits

0xa968,	// (0x00030bf3) call6_btn_grp_pane

0xa984,	// (0x00030c0f) call6_pane_g1_ParamLimits

0xa984,	// (0x00030c0f) call6_pane_g1

0xa99a,	// (0x00030c25) popup_call6_1st_window_ParamLimits

0xa99a,	// (0x00030c25) popup_call6_1st_window

0xa9ab,	// (0x00030c36) popup_call6_2nd_window_ParamLimits

0xa9ab,	// (0x00030c36) popup_call6_2nd_window

0xa9bc,	// (0x00030c47) cell_call6_btn_pane_ParamLimits

0xa9bc,	// (0x00030c47) cell_call6_btn_pane

0x4ec7,	// (0x0002b152) bg_popup_call2_in_pane_cp03

0xeeb6,	// (0x00035141) popup_call6_1st_window_g1

0xeebe,	// (0x00035149) popup_call6_1st_window_g2

0xeec6,	// (0x00035151) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00036156) popup_call6_1st_window_g

0xeece,	// (0x00035159) popup_call6_1st_window_t1

0xeedd,	// (0x00035168) popup_call6_1st_window_t2

0xeeed,	// (0x00035178) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0003615d) popup_call6_1st_window_t

0x4ec7,	// (0x0002b152) bg_popup_call2_in_pane_cp04

0xeeb6,	// (0x00035141) popup_call6_2nd_window_g1

0xeebe,	// (0x00035149) popup_call6_2nd_window_g2

0xeec6,	// (0x00035151) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00036156) popup_call6_2nd_window_g

0xeece,	// (0x00035159) popup_call6_2nd_window_t1

0x1c79,	// (0x00027f04) bg_button_pane_cp15

0xeefd,	// (0x00035188) cell_call6_btn_pane_g1

0xef06,	// (0x00035191) cell_call6_btn_pane_t1

0xa9d0,	// (0x00030c5b) listscroll_wgtman_pane_ParamLimits

0xa9d0,	// (0x00030c5b) listscroll_wgtman_pane

0xa9f3,	// (0x00030c7e) wgtman_btn_pane_ParamLimits

0xa9f3,	// (0x00030c7e) wgtman_btn_pane

0x4a76,	// (0x0002ad01) aid_scroll_copy1

0xef15,	// (0x000351a0) list_wgtman_pane

0xaa36,	// (0x00030cc1) wgtman_btn_pane_g1_ParamLimits

0xaa36,	// (0x00030cc1) wgtman_btn_pane_g1

0xaa62,	// (0x00030ced) wgtman_btn_pane_t1_ParamLimits

0xaa62,	// (0x00030ced) wgtman_btn_pane_t1

0xef1f,	// (0x000351aa) wgtman_btn_pane_t2_ParamLimits

0xef1f,	// (0x000351aa) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00036164) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00036164) wgtman_btn_pane_t

0xef36,	// (0x000351c1) listrow_wgtman_pane_ParamLimits

0xef36,	// (0x000351c1) listrow_wgtman_pane

0xef4a,	// (0x000351d5) listrow_wgtman_pane_g1

0xaa9f,	// (0x00030d2a) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00036169) listrow_wgtman_pane_g

0xef53,	// (0x000351de) listrow_wgtman_pane_t1

0xef61,	// (0x000351ec) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0003616e) listrow_wgtman_pane_t

0xef6f,	// (0x000351fa) wait_bar_pane_cp09

0xef77,	// (0x00035202) main_calllock_btn_pane

0xef81,	// (0x0003520c) main_calllock_pane_g1

0x1c79,	// (0x00027f04) bg_button_pane_cp17

0xef8d,	// (0x00035218) main_calllock_btn_pane_g1

0xef96,	// (0x00035221) main_calllock_btn_pane_t1

0x1c79,	// (0x00027f04) main_dialer3_pane

0x1c79,	// (0x00027f04) main_fmrd2_pane

0xc1e3,	// (0x0003246e) main_fs_bigclock_unlock_btn_pane_g1

0xefad,	// (0x00035238) main_fs_bigclock_unlock_btn_pane_t1

0xaaa9,	// (0x00030d34) area_fmrd2_info_pane_ParamLimits

0xaaa9,	// (0x00030d34) area_fmrd2_info_pane

0xaabc,	// (0x00030d47) area_fmrd2_visual_pane_ParamLimits

0xaabc,	// (0x00030d47) area_fmrd2_visual_pane

0xaaca,	// (0x00030d55) fmrd2_indi_pane_ParamLimits

0xaaca,	// (0x00030d55) fmrd2_indi_pane

0xaad7,	// (0x00030d62) area_fmrd2_visual_pane_g1

0xaadf,	// (0x00030d6a) area_fmrd2_visual_pane_t1

0xaaef,	// (0x00030d7a) area_fmrd2_visual_pane_t2

0xaaff,	// (0x00030d8a) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00036178) area_fmrd2_visual_pane_t

0xab0f,	// (0x00030d9a) area_fmrd2_info_pane_g1

0xab17,	// (0x00030da2) area_fmrd2_info_pane_t1

0xab27,	// (0x00030db2) area_fmrd2_info_pane_t2

0xab37,	// (0x00030dc2) area_fmrd2_info_pane_t3

0xab47,	// (0x00030dd2) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0003617f) area_fmrd2_info_pane_t

0xab57,	// (0x00030de2) fmrd2_indi_pane_t1

0xab67,	// (0x00030df2) fmrd2_indi_pane_t2

0xab77,	// (0x00030e02) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00036188) fmrd2_indi_pane_t

0xe0b3,	// (0x0003433e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0b3,	// (0x0003433e) list_single_fs_bigclock_indicator_pane_g5

0xe159,	// (0x000343e4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe159,	// (0x000343e4) list_single_fs_bigclock_indicator_pane_t5

0xa324,	// (0x000305af) aid_cell_bcale_month_pane_ParamLimits

0xa324,	// (0x000305af) aid_cell_bcale_month_pane

0xa336,	// (0x000305c1) bcale_month_pane_ParamLimits

0xa336,	// (0x000305c1) bcale_month_pane

0xa34e,	// (0x000305d9) bcale_preview_pane_ParamLimits

0xa34e,	// (0x000305d9) bcale_preview_pane

0xecd8,	// (0x00034f63) list_single_fs_bigclock_pane_t1_ParamLimits

0xecf2,	// (0x00034f7d) list_single_fs_bigclock_pane_t2_ParamLimits

0xecf2,	// (0x00034f7d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x0003610f) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0003610f) list_single_fs_bigclock_pane_t

0xefa5,	// (0x00035230) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00036173) main_fs_bigclock_unlock_btn_pane_g

0xab87,	// (0x00030e12) aid_dia3_key_size_ParamLimits

0xab87,	// (0x00030e12) aid_dia3_key_size

0xab96,	// (0x00030e21) aid_dia3_listrow_size_ParamLimits

0xab96,	// (0x00030e21) aid_dia3_listrow_size

0xaba4,	// (0x00030e2f) dia3_keypad_fun_pane_ParamLimits

0xaba4,	// (0x00030e2f) dia3_keypad_fun_pane

0xabc0,	// (0x00030e4b) dia3_keypad_num_pane_ParamLimits

0xabc0,	// (0x00030e4b) dia3_keypad_num_pane

0xabd9,	// (0x00030e64) dia3_listscroll_pane_ParamLimits

0xabd9,	// (0x00030e64) dia3_listscroll_pane

0xabee,	// (0x00030e79) dia3_numentry_pane_ParamLimits

0xabee,	// (0x00030e79) dia3_numentry_pane

0xefbb,	// (0x00035246) dia3_list_pane

0xefc6,	// (0x00035251) scroll_pane_cp12

0x1c79,	// (0x00027f04) bg_dia3_numentry_pane

0xefd1,	// (0x0003525c) dia3_numentry_pane_t1

0xac01,	// (0x00030e8c) cell_dia3_key_num_pane

0xac09,	// (0x00030e94) cell_dia3_key0_fun_pane_ParamLimits

0xac09,	// (0x00030e94) cell_dia3_key0_fun_pane

0xac1d,	// (0x00030ea8) cell_dia3_key1_fun_pane_ParamLimits

0xac1d,	// (0x00030ea8) cell_dia3_key1_fun_pane

0xac35,	// (0x00030ec0) dia3_listrow_pane

0xddab,	// (0x00034036) bg_dia3_numentry_pane_g1

0x1c79,	// (0x00027f04) bg_button_pane_cp21

0xefe0,	// (0x0003526b) cell_dia3_key_num_pane_t1

0xefee,	// (0x00035279) cell_dia3_key_num_pane_t2

0xeffd,	// (0x00035288) cell_dia3_key_num_pane_t3

0xf00c,	// (0x00035297) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0003618f) cell_dia3_key_num_pane_t

0x1c79,	// (0x00027f04) bg_button_pane_cp19

0xac47,	// (0x00030ed2) cell_dia3_key0_fun_pane_g1

0x1c79,	// (0x00027f04) bg_button_pane_cp20

0xac4f,	// (0x00030eda) cell_dia3_key1_fun_pane_g1

0xac57,	// (0x00030ee2) area_left_week_number_pane

0xac60,	// (0x00030eeb) area_top_day_name_pane

0xac69,	// (0x00030ef4) frame_month_view_pane

0xac75,	// (0x00030f00) grid_month_view_pane

0xac7f,	// (0x00030f0a) cell_top_day_name_pane_ParamLimits

0xac7f,	// (0x00030f0a) cell_top_day_name_pane

0xac99,	// (0x00030f24) cell_area_left_week_number_pane_ParamLimits

0xac99,	// (0x00030f24) cell_area_left_week_number_pane

0xacaf,	// (0x00030f3a) cell_month_view_pane_ParamLimits

0xacaf,	// (0x00030f3a) cell_month_view_pane

0xf01b,	// (0x000352a6) frm_month_g1

0xacce,	// (0x00030f59) frm_month_g2

0xacd8,	// (0x00030f63) frm_month_g3

0xace2,	// (0x00030f6d) frm_month_g4

0xacec,	// (0x00030f77) frm_month_g5

0xacf6,	// (0x00030f81) frm_month_g6

0xad02,	// (0x00030f8d) frm_month_g7

0xf024,	// (0x000352af) frm_month_g8

0xad0e,	// (0x00030f99) frm_month_g9

0xad17,	// (0x00030fa2) frm_month_g10

0xad20,	// (0x00030fab) frm_month_g11

0xad29,	// (0x00030fb4) frm_month_g12

0xad32,	// (0x00030fbd) frm_month_g13

0xad3b,	// (0x00030fc6) frm_month_g14

0xad44,	// (0x00030fcf) frm_month_g15

0xad4f,	// (0x00030fda) frm_month_g16

0x000f,

0xff0d,	// (0x00036198) frm_month_g

0xad5a,	// (0x00030fe5) cell_top_day_name_pane_t1

0xad69,	// (0x00030ff4) cell_area_left_week_number_pane_g1

0xad5a,	// (0x00030fe5) cell_area_left_week_number_pane_t1

0xc1e3,	// (0x0003246e) cell_month_view_pane_g1

0xad71,	// (0x00030ffc) cell_month_view_pane_t1

0x1c79,	// (0x00027f04) main_fps_pane

0xe3e5,	// (0x00034670) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3e5,	// (0x00034670) cmail_ddmenu_btn02_pane_cp1

0xe401,	// (0x0003468c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe401,	// (0x0003468c) cmail_ddmenu_btn02_pane_cp2

0xa60e,	// (0x00030899) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa60e,	// (0x00030899) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x000360c0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x000360c0) cmail_ddmenu_btn02_pane_g

0xa62c,	// (0x000308b7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa62c,	// (0x000308b7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x000360c5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x000360c5) cmail_ddmenu_btn02_pane_t

0xad80,	// (0x0003100b) fps_text_pane_ParamLimits

0xad80,	// (0x0003100b) fps_text_pane

0xad97,	// (0x00031022) main_fps_pane_g1_ParamLimits

0xad97,	// (0x00031022) main_fps_pane_g1

0xadaf,	// (0x0003103a) wait_bar_pane_cp010_ParamLimits

0xadaf,	// (0x0003103a) wait_bar_pane_cp010

0xadc2,	// (0x0003104d) fps_text_pane_t1_ParamLimits

0xadc2,	// (0x0003104d) fps_text_pane_t1

0xcea3,	// (0x0003312e) cam4_image_uncrop_pane_g1

0xceac,	// (0x00033137) cam4_image_uncrop_pane_g2

0x813e,	// (0x0002e3c9) cam4_image_uncrop_pane_g3

0x8147,	// (0x0002e3d2) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00035b98) cam4_image_uncrop_pane_g

0xac35,	// (0x00030ec0) dia3_listrow_pane_ParamLimits

0x1c79,	// (0x00027f04) main_phob2_pane

0xa124,	// (0x000303af) cell_tport_appsw_pane_cp02_ParamLimits

0xa124,	// (0x000303af) cell_tport_appsw_pane_cp02

0xa138,	// (0x000303c3) cell_tport_appsw_pane_cp03_ParamLimits

0xa138,	// (0x000303c3) cell_tport_appsw_pane_cp03

0x1c79,	// (0x00027f04) phob2_contact_card_pane

0x1c79,	// (0x00027f04) phob2_listscroll_pane

0xf02d,	// (0x000352b8) phob2_list_pane

0xf035,	// (0x000352c0) scroll_pane_cp034

0xadda,	// (0x00031065) phob2_cc_data_pane_ParamLimits

0xadda,	// (0x00031065) phob2_cc_data_pane

0xadfb,	// (0x00031086) phob2_cc_listscroll_pane_ParamLimits

0xadfb,	// (0x00031086) phob2_cc_listscroll_pane

0xae1d,	// (0x000310a8) list_double_large_graphic_phob2_pane_ParamLimits

0xae1d,	// (0x000310a8) list_double_large_graphic_phob2_pane

0xae32,	// (0x000310bd) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xae32,	// (0x000310bd) list_double_large_graphic_phob2_pane_g1

0xae3f,	// (0x000310ca) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xae3f,	// (0x000310ca) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x000361b9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x000361b9) list_double_large_graphic_phob2_pane_g

0xae4b,	// (0x000310d6) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xae4b,	// (0x000310d6) list_double_large_graphic_phob2_pane_t1

0xae60,	// (0x000310eb) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xae60,	// (0x000310eb) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x000361be) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x000361be) list_double_large_graphic_phob2_pane_t

0x1c79,	// (0x00027f04) list_highlight_pane_cp024

0xf03d,	// (0x000352c8) phob2_cc_button_pane

0xae72,	// (0x000310fd) phob2_cc_data_pane_g1_ParamLimits

0xae72,	// (0x000310fd) phob2_cc_data_pane_g1

0xae88,	// (0x00031113) phob2_cc_data_pane_g2_ParamLimits

0xae88,	// (0x00031113) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x000361c3) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x000361c3) phob2_cc_data_pane_g

0xae9c,	// (0x00031127) phob2_cc_data_pane_t1_ParamLimits

0xae9c,	// (0x00031127) phob2_cc_data_pane_t1

0xaeb6,	// (0x00031141) phob2_cc_data_pane_t2_ParamLimits

0xaeb6,	// (0x00031141) phob2_cc_data_pane_t2

0xaed0,	// (0x0003115b) phob2_cc_data_pane_t3_ParamLimits

0xaed0,	// (0x0003115b) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x000361c8) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x000361c8) phob2_cc_data_pane_t

0xf045,	// (0x000352d0) phob2_cc_list_pane_ParamLimits

0xf045,	// (0x000352d0) phob2_cc_list_pane

0xd340,	// (0x000335cb) scroll_pane_cp035_ParamLimits

0xd340,	// (0x000335cb) scroll_pane_cp035

0x1ef4,	// (0x0002817f) bg_button_pane_cp033

0xf051,	// (0x000352dc) phob2_cc_button_pane_g1

0xf05d,	// (0x000352e8) phob2_cc_button_pane_t1

0xf072,	// (0x000352fd) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x000361cf) phob2_cc_button_pane_t

0xaeea,	// (0x00031175) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaeea,	// (0x00031175) list_double_large_graphic_phob2_cc_pane

0xaeff,	// (0x0003118a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaeff,	// (0x0003118a) list_double_large_graphic_phob2_cc_pane_g1

0xaf0b,	// (0x00031196) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaf0b,	// (0x00031196) list_double_large_graphic_phob2_cc_pane_g2

0xaf17,	// (0x000311a2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaf17,	// (0x000311a2) list_double_large_graphic_phob2_cc_pane_g3

0xaf23,	// (0x000311ae) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaf23,	// (0x000311ae) list_double_large_graphic_phob2_cc_pane_g4

0xaf2f,	// (0x000311ba) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaf2f,	// (0x000311ba) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x000361d4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x000361d4) list_double_large_graphic_phob2_cc_pane_g

0xaf3b,	// (0x000311c6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaf3b,	// (0x000311c6) list_double_large_graphic_phob2_cc_pane_t1

0xaf64,	// (0x000311ef) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaf64,	// (0x000311ef) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x000361df) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x000361df) list_double_large_graphic_phob2_cc_pane_t

0xf084,	// (0x0003530f) list_highlight_pane_cp025_ParamLimits

0xf084,	// (0x0003530f) list_highlight_pane_cp025

0x1ef4,	// (0x0002817f) bg_button_pane_cp033_ParamLimits

0xf051,	// (0x000352dc) phob2_cc_button_pane_g1_ParamLimits

0xf05d,	// (0x000352e8) phob2_cc_button_pane_t1_ParamLimits

0xf072,	// (0x000352fd) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x000361cf) phob2_cc_button_pane_t_ParamLimits

0x1f02,	// (0x0002818d) popup_wgtman_window

0xd0d0,	// (0x0003335b) scroll_pane_cp038

0xaa18,	// (0x00030ca3) wgtman_btn_pane_cp_01_ParamLimits

0xaa18,	// (0x00030ca3) wgtman_btn_pane_cp_01

0xf092,	// (0x0003531d) wgtman_content_pane

0xf09b,	// (0x00035326) wgtman_heading_pane

0x1c79,	// (0x00027f04) bg_heading_pane_cp02

0xf0a4,	// (0x0003532f) wgtman_heading_pane_g1

0xf0ac,	// (0x00035337) wgtman_heading_pane_t1

0xf0ba,	// (0x00035345) scroll_pane_cp036

0xf0c2,	// (0x0003534d) wgtman_list_pane

0xe23b,	// (0x000344c6) wgtman_list_pane_t1_ParamLimits

0xe23b,	// (0x000344c6) wgtman_list_pane_t1

0xce8d,	// (0x00033118) cam4_grid_pane

0x897e,	// (0x0002ec09) bg_button_pane_cp015_ParamLimits

0x8992,	// (0x0002ec1d) bg_button_pane_cp016_ParamLimits

0x89a5,	// (0x0002ec30) bg_button_pane_cp017_ParamLimits

0x89fd,	// (0x0002ec88) popup_vitu2_query_window_g3_ParamLimits

0x89fd,	// (0x0002ec88) popup_vitu2_query_window_g3

0x8aba,	// (0x0002ed45) popup_vitu2_query_window_t6_ParamLimits

0x8aba,	// (0x0002ed45) popup_vitu2_query_window_t6

0x8ae5,	// (0x0002ed70) popup_vitu2_query_window_t7_ParamLimits

0x8ae5,	// (0x0002ed70) popup_vitu2_query_window_t7

0xcea3,	// (0x0003312e) cam4_grid_pane_g1

0xceac,	// (0x00033137) cam4_grid_pane_g2

0xf0ca,	// (0x00035355) cam4_grid_pane_g3

0xf0d3,	// (0x0003535e) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x000361e4) cam4_grid_pane_g

0x33fe,	// (0x00029689) aid_placing_vt_slider_lsc_ParamLimits

0x3740,	// (0x000299cb) vidtel_button_pane_ParamLimits

0x3740,	// (0x000299cb) vidtel_button_pane

0x1c79,	// (0x00027f04) bg_button_pane_cp034

0xaf8d,	// (0x00031218) vidtel_button_pane_g1

0xf0de,	// (0x00035369) vidtel_button_pane_t1

0xd21b,	// (0x000334a6) aid_size_vtel_slider_touch

0xd340,	// (0x000335cb) scroll_pane_cp039

0xdde9,	// (0x00034074) ncim_query_button_pane_cp01_ParamLimits

0xde08,	// (0x00034093) ncimui_query_pane_g1_ParamLimits

0x1ef4,	// (0x0002817f) input_focus_pane_cp012_ParamLimits

0xde2d,	// (0x000340b8) ncim_query_entry_pane_t1_ParamLimits

0xd340,	// (0x000335cb) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
