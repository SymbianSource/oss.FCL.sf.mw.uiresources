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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000263e0 };

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
0x1c67,	// (0x00028047) Screen

0x1c73,	// (0x00028053) application_window

0x1cdd,	// (0x000280bd) area_bottom_pane_ParamLimits

0x1cdd,	// (0x000280bd) area_bottom_pane

0x1d3b,	// (0x0002811b) area_top_pane_ParamLimits

0x1d3b,	// (0x0002811b) area_top_pane

0x1d98,	// (0x00028178) call_video_uplink_pane_ParamLimits

0x1d98,	// (0x00028178) call_video_uplink_pane

0x1dc4,	// (0x000281a4) main_pane_ParamLimits

0x1dc4,	// (0x000281a4) main_pane

0xbe36,	// (0x00032216) context_pane

0x6997,	// (0x0002cd77) navi_pane

0x69c7,	// (0x0002cda7) popup_cale_events_window_ParamLimits

0x69c7,	// (0x0002cda7) popup_cale_events_window

0xbe49,	// (0x00032229) popup_mup_playback_window

0x69df,	// (0x0002cdbf) signal_pane

0x28f7,	// (0x00028cd7) main_browser_pane

0x4ec1,	// (0x0002b2a1) main_burst_pane

0x6699,	// (0x0002ca79) main_calc_pane

0x4ec1,	// (0x0002b2a1) main_cale_day_pane

0x28f7,	// (0x00028cd7) main_cale_month_pane

0x4ec1,	// (0x0002b2a1) main_cale_week_pane

0x4ec1,	// (0x0002b2a1) main_call_pane

0x23c6,	// (0x000287a6) main_call_poc_pane

0x4ec1,	// (0x0002b2a1) main_camera_pane

0x4ec1,	// (0x0002b2a1) main_chi_dic_pane

0x4a1a,	// (0x0002adfa) main_clock_pane

0x23c6,	// (0x000287a6) main_fmradio_pane

0x4ec1,	// (0x0002b2a1) main_graph_messa_pane

0x23c6,	// (0x000287a6) main_help_pane

0x28f7,	// (0x00028cd7) main_im_pane

0x2621,	// (0x00028a01) main_image_pane_ParamLimits

0x2621,	// (0x00028a01) main_image_pane

0x23c6,	// (0x000287a6) main_location2_pane

0x4ec1,	// (0x0002b2a1) main_location_pane

0x23c6,	// (0x000287a6) main_messa_pane

0x23c6,	// (0x000287a6) main_mp2_pane

0x4ec1,	// (0x0002b2a1) main_mp_pane

0x23c6,	// (0x000287a6) main_msg_pane

0x23c6,	// (0x000287a6) main_mup_eq_pane

0x23c6,	// (0x000287a6) main_mup_pane

0x4ec1,	// (0x0002b2a1) main_notes_pane

0x23c6,	// (0x000287a6) main_pec_pane

0x23c6,	// (0x000287a6) main_phob_pane

0x23c6,	// (0x000287a6) main_pinb_pane

0x23c6,	// (0x000287a6) main_postcard_pane

0x23c6,	// (0x000287a6) main_qdial_pane

0x4ec1,	// (0x0002b2a1) main_skin_pane

0x23c6,	// (0x000287a6) main_smil2_pane

0x4ec1,	// (0x0002b2a1) main_smil_pane

0x4ec1,	// (0x0002b2a1) main_video_pane

0x4ec1,	// (0x0002b2a1) main_video_tele_pane

0x2621,	// (0x00028a01) main_viewer_pane_ParamLimits

0x2621,	// (0x00028a01) main_viewer_pane

0x4ec1,	// (0x0002b2a1) main_vorec_pane

0x66ef,	// (0x0002cacf) popup_blid_sat_info_window_ParamLimits

0x66ef,	// (0x0002cacf) popup_blid_sat_info_window

0x6753,	// (0x0002cb33) popup_dyc_status_message_window_ParamLimits

0x6753,	// (0x0002cb33) popup_dyc_status_message_window

0x676d,	// (0x0002cb4d) popup_grid_large_graphic_window_ParamLimits

0x676d,	// (0x0002cb4d) popup_grid_large_graphic_window

0x682f,	// (0x0002cc0f) popup_loc_request_window_ParamLimits

0x682f,	// (0x0002cc0f) popup_loc_request_window

0x696b,	// (0x0002cd4b) popup_wml_address_window_ParamLimits

0x696b,	// (0x0002cd4b) popup_wml_address_window

0x64d7,	// (0x0002c8b7) call_muted_g1

0x5cd7,	// (0x0002c0b7) popup_call_audio_conf_window_ParamLimits

0x5cd7,	// (0x0002c0b7) popup_call_audio_conf_window

0x64e7,	// (0x0002c8c7) popup_call_audio_first_window_ParamLimits

0x64e7,	// (0x0002c8c7) popup_call_audio_first_window

0x655d,	// (0x0002c93d) popup_call_audio_in_window_ParamLimits

0x655d,	// (0x0002c93d) popup_call_audio_in_window

0x6599,	// (0x0002c979) popup_call_audio_out_window_ParamLimits

0x6599,	// (0x0002c979) popup_call_audio_out_window

0x65d3,	// (0x0002c9b3) popup_call_audio_second_window_ParamLimits

0x65d3,	// (0x0002c9b3) popup_call_audio_second_window

0x6629,	// (0x0002ca09) popup_call_audio_wait_window_ParamLimits

0x6629,	// (0x0002ca09) popup_call_audio_wait_window

0x665e,	// (0x0002ca3e) popup_number_entry_window_ParamLimits

0x665e,	// (0x0002ca3e) popup_number_entry_window

0x1f5a,	// (0x0002833a) bg_popup_call_pane_cp05_ParamLimits

0x1f5a,	// (0x0002833a) bg_popup_call_pane_cp05

0x1f7a,	// (0x0002835a) popup_number_entry_window_t1

0x1f8d,	// (0x0002836d) popup_number_entry_window_t2

0x1f9f,	// (0x0002837f) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x000354cc) popup_number_entry_window_t

0x1fe6,	// (0x000283c6) text_title_cp2

0x1ff9,	// (0x000283d9) bg_popup_call_pane_cp_ParamLimits

0x1ff9,	// (0x000283d9) bg_popup_call_pane_cp

0x2007,	// (0x000283e7) call_thumbnail_pane

0x200f,	// (0x000283ef) popup_call_audio_in_window_g1_ParamLimits

0x200f,	// (0x000283ef) popup_call_audio_in_window_g1

0x201b,	// (0x000283fb) popup_call_audio_in_window_g2_ParamLimits

0x201b,	// (0x000283fb) popup_call_audio_in_window_g2

0x2027,	// (0x00028407) popup_call_audio_in_window_g3_ParamLimits

0x2027,	// (0x00028407) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x000354d5) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x000354d5) popup_call_audio_in_window_g

0x2033,	// (0x00028413) popup_call_audio_in_window_t1_ParamLimits

0x2033,	// (0x00028413) popup_call_audio_in_window_t1

0x204f,	// (0x0002842f) popup_call_audio_in_window_t2_ParamLimits

0x204f,	// (0x0002842f) popup_call_audio_in_window_t2

0x206b,	// (0x0002844b) popup_call_audio_in_window_t3_ParamLimits

0x206b,	// (0x0002844b) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x000354dc) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x000354dc) popup_call_audio_in_window_t

0x1ff9,	// (0x000283d9) bg_popup_call_pane_cp01_ParamLimits

0x1ff9,	// (0x000283d9) bg_popup_call_pane_cp01

0x2007,	// (0x000283e7) call_thumbnail_pane_cp02

0x207e,	// (0x0002845e) call_type_pane_cp022

0x2086,	// (0x00028466) popup_call_audio_out_window_g1_ParamLimits

0x2086,	// (0x00028466) popup_call_audio_out_window_g1

0x2098,	// (0x00028478) popup_call_audio_out_window_g2_ParamLimits

0x2098,	// (0x00028478) popup_call_audio_out_window_g2

0x20a4,	// (0x00028484) popup_call_audio_out_window_g3_ParamLimits

0x20a4,	// (0x00028484) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x000354e3) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x000354e3) popup_call_audio_out_window_g

0x20b6,	// (0x00028496) popup_call_audio_out_window_t1_ParamLimits

0x20b6,	// (0x00028496) popup_call_audio_out_window_t1

0x20ce,	// (0x000284ae) popup_call_audio_out_window_t2_ParamLimits

0x20ce,	// (0x000284ae) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x000354ea) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x000354ea) popup_call_audio_out_window_t

0x20e3,	// (0x000284c3) bg_popup_call_pane_ParamLimits

0x20e3,	// (0x000284c3) bg_popup_call_pane

0x2167,	// (0x00028547) call_thumbnail_pane_cp_ParamLimits

0x2167,	// (0x00028547) call_thumbnail_pane_cp

0x218b,	// (0x0002856b) call_type_pane_cp01_ParamLimits

0x218b,	// (0x0002856b) call_type_pane_cp01

0x21cf,	// (0x000285af) popup_call_audio_first_window_g1_ParamLimits

0x21cf,	// (0x000285af) popup_call_audio_first_window_g1

0x221b,	// (0x000285fb) popup_call_audio_first_window_g2_ParamLimits

0x221b,	// (0x000285fb) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x000354ef) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x000354ef) popup_call_audio_first_window_g

0x225f,	// (0x0002863f) popup_call_audio_first_window_t1_ParamLimits

0x225f,	// (0x0002863f) popup_call_audio_first_window_t1

0x230b,	// (0x000286eb) popup_call_audio_first_window_t4_ParamLimits

0x230b,	// (0x000286eb) popup_call_audio_first_window_t4

0x2397,	// (0x00028777) popup_call_audio_first_window_t5_ParamLimits

0x2397,	// (0x00028777) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x000354f4) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x000354f4) popup_call_audio_first_window_t

0x23c6,	// (0x000287a6) bg_popup_call_pane_cp02

0x23d0,	// (0x000287b0) call_type_pane_cp023

0x23d8,	// (0x000287b8) popup_call_audio_wait_window_g1

0x23e0,	// (0x000287c0) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000354fb) popup_call_audio_wait_window_g

0x23e8,	// (0x000287c8) popup_call_audio_wait_window_t3

0x23f6,	// (0x000287d6) bg_popup_call_pane_cp03_ParamLimits

0x23f6,	// (0x000287d6) bg_popup_call_pane_cp03

0x2456,	// (0x00028836) call_thumbnail_pane_cp011_ParamLimits

0x2456,	// (0x00028836) call_thumbnail_pane_cp011

0x2462,	// (0x00028842) call_type_pane_cp034_ParamLimits

0x2462,	// (0x00028842) call_type_pane_cp034

0x249e,	// (0x0002887e) popup_call_audio_second_window_g1_ParamLimits

0x249e,	// (0x0002887e) popup_call_audio_second_window_g1

0x24da,	// (0x000288ba) popup_call_audio_second_window_g2_ParamLimits

0x24da,	// (0x000288ba) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00035500) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00035500) popup_call_audio_second_window_g

0x2516,	// (0x000288f6) popup_call_audio_second_window_t1_ParamLimits

0x2516,	// (0x000288f6) popup_call_audio_second_window_t1

0x2597,	// (0x00028977) popup_call_audio_second_window_t2_ParamLimits

0x2597,	// (0x00028977) popup_call_audio_second_window_t2

0x25cd,	// (0x000289ad) popup_call_audio_second_window_t3_ParamLimits

0x25cd,	// (0x000289ad) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00035505) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00035505) popup_call_audio_second_window_t

0x23c6,	// (0x000287a6) bg_popup_call_pane_cp04

0x2603,	// (0x000289e3) list_conf_pane

0x260b,	// (0x000289eb) popup_call_audio_conf_window_t1

0x2619,	// (0x000289f9) call_thumbnail_pane_g1

0x2621,	// (0x00028a01) bg_pinb_pane_ParamLimits

0x2621,	// (0x00028a01) bg_pinb_pane

0x262f,	// (0x00028a0f) find_pinb_pane

0x2638,	// (0x00028a18) listscroll_pinb_pane_ParamLimits

0x2638,	// (0x00028a18) listscroll_pinb_pane

0x2647,	// (0x00028a27) pinb_bg_pane_g1

0x2651,	// (0x00028a31) pinb_bg_pane_g2

0x265d,	// (0x00028a3d) pinb_bg_pane_g3

0x2669,	// (0x00028a49) pinb_bg_pane_g4

0x2675,	// (0x00028a55) pinb_bg_pane_g5

0x2681,	// (0x00028a61) pinb_bg_pane_g6

0x268c,	// (0x00028a6c) pinb_bg_pane_g7

0x2697,	// (0x00028a77) pinb_bg_pane_g8

0x26a2,	// (0x00028a82) pinb_bg_pane_g9

0x26ac,	// (0x00028a8c) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0003550c) pinb_bg_pane_g

0x26c9,	// (0x00028aa9) grid_pinb_pane

0x26d4,	// (0x00028ab4) list_pinb_pane

0x26df,	// (0x00028abf) scroll_pane_cp01_ParamLimits

0x26df,	// (0x00028abf) scroll_pane_cp01

0x26f1,	// (0x00028ad1) find_pinb_pane_g1_ParamLimits

0x26f1,	// (0x00028ad1) find_pinb_pane_g1

0x2709,	// (0x00028ae9) find_pinb_pane_t1

0x271b,	// (0x00028afb) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00035526) find_pinb_pane_t

0x2730,	// (0x00028b10) input_focus_pane_cp01_ParamLimits

0x2730,	// (0x00028b10) input_focus_pane_cp01

0x273c,	// (0x00028b1c) cell_pinb_pane_ParamLimits

0x273c,	// (0x00028b1c) cell_pinb_pane

0x275e,	// (0x00028b3e) cell_pinb_pane_g1_ParamLimits

0x275e,	// (0x00028b3e) cell_pinb_pane_g1

0x2772,	// (0x00028b52) cell_pinb_pane_g2_ParamLimits

0x2772,	// (0x00028b52) cell_pinb_pane_g2

0x277e,	// (0x00028b5e) cell_pinb_pane_g3_ParamLimits

0x277e,	// (0x00028b5e) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0003552b) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0003552b) cell_pinb_pane_g

0x23c6,	// (0x000287a6) grid_highlight_pane_cp01

0x278a,	// (0x00028b6a) list_pinb_item_pane_ParamLimits

0x278a,	// (0x00028b6a) list_pinb_item_pane

0x23c6,	// (0x000287a6) list_highlight_pane_cp02

0x279d,	// (0x00028b7d) list_pinb_item_pane_g1_ParamLimits

0x279d,	// (0x00028b7d) list_pinb_item_pane_g1

0x27aa,	// (0x00028b8a) list_pinb_item_pane_g2_ParamLimits

0x27aa,	// (0x00028b8a) list_pinb_item_pane_g2

0x27b6,	// (0x00028b96) list_pinb_item_pane_g3_ParamLimits

0x27b6,	// (0x00028b96) list_pinb_item_pane_g3

0x27c7,	// (0x00028ba7) list_pinb_item_pane_g4_ParamLimits

0x27c7,	// (0x00028ba7) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00035532) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00035532) list_pinb_item_pane_g

0x27d3,	// (0x00028bb3) list_pinb_item_pane_t1_ParamLimits

0x27d3,	// (0x00028bb3) list_pinb_item_pane_t1

0x0a9f,	// (0x00026e7f) calc_display_pane

0x0ac5,	// (0x00026ea5) calc_paper_pane

0x0ae8,	// (0x00026ec8) grid_calc_pane

0x23c6,	// (0x000287a6) bg_list_pane_cp01

0x27ea,	// (0x00028bca) clock_g1

0x27f2,	// (0x00028bd2) clock_g2

0x0001,

0xf15b,	// (0x0003553b) clock_g

0x27fa,	// (0x00028bda) clock_t1_ParamLimits

0x27fa,	// (0x00028bda) clock_t1

0x280f,	// (0x00028bef) clock_t2_ParamLimits

0x280f,	// (0x00028bef) clock_t2

0x2821,	// (0x00028c01) clock_t3_ParamLimits

0x2821,	// (0x00028c01) clock_t3

0x2833,	// (0x00028c13) clock_t4_ParamLimits

0x2833,	// (0x00028c13) clock_t4

0x2845,	// (0x00028c25) clock_t5_ParamLimits

0x2845,	// (0x00028c25) clock_t5

0x285a,	// (0x00028c3a) clock_t6_ParamLimits

0x285a,	// (0x00028c3a) clock_t6

0x286c,	// (0x00028c4c) clock_t7_ParamLimits

0x286c,	// (0x00028c4c) clock_t7

0x287e,	// (0x00028c5e) clock_t8_ParamLimits

0x287e,	// (0x00028c5e) clock_t8

0x2892,	// (0x00028c72) clock_t9_ParamLimits

0x2892,	// (0x00028c72) clock_t9

0x0008,

0xf160,	// (0x00035540) clock_t_ParamLimits

0xf160,	// (0x00035540) clock_t

0x28a8,	// (0x00028c88) popup_clock_analogue_window_cp02

0x28a8,	// (0x00028c88) popup_clock_digital_window_cp01

0x28b0,	// (0x00028c90) listscroll_help_pane

0x23c6,	// (0x000287a6) phob_pre_status_pane

0x28ba,	// (0x00028c9a) grid_qdial_pane

0x23c6,	// (0x000287a6) listscroll_mce_pane

0x28c4,	// (0x00028ca4) bg_notes_pane

0x28ce,	// (0x00028cae) list_notes_pane

0x28d8,	// (0x00028cb8) scroll_pane_cp06

0x28e3,	// (0x00028cc3) bg_calc_paper_pane

0xb0de,	// (0x000314be) list_calc_pane

0x28f7,	// (0x00028cd7) bg_calc_display_pane

0x0b16,	// (0x00026ef6) calc_display_pane_t1

0x0b28,	// (0x00026f08) calc_display_pane_t2

0xb0f8,	// (0x000314d8) calc_display_pane_t3

0x0002,

0xf173,	// (0x00035553) calc_display_pane_t

0x0b3a,	// (0x00026f1a) cell_calc_pane_ParamLimits

0x0b3a,	// (0x00026f1a) cell_calc_pane

0x2903,	// (0x00028ce3) bg_calc_paper_pane_g1

0x290f,	// (0x00028cef) bg_calc_paper_pane_g2

0x291b,	// (0x00028cfb) bg_calc_paper_pane_g3

0x2927,	// (0x00028d07) bg_calc_paper_pane_g4

0x2933,	// (0x00028d13) bg_calc_paper_pane_g5

0x293f,	// (0x00028d1f) bg_calc_paper_pane_g6

0x2952,	// (0x00028d32) bg_calc_paper_pane_g7

0x2965,	// (0x00028d45) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0003555a) bg_calc_paper_pane_g

0x2976,	// (0x00028d56) calc_bg_paper_pane_g9

0x2987,	// (0x00028d67) list_calc_item_pane_ParamLimits

0x2987,	// (0x00028d67) list_calc_item_pane

0x299b,	// (0x00028d7b) list_calc_item_pane_g1

0xb10a,	// (0x000314ea) list_calc_item_pane_t1_ParamLimits

0xb10a,	// (0x000314ea) list_calc_item_pane_t1

0x0b75,	// (0x00026f55) list_calc_item_pane_t2_ParamLimits

0x0b75,	// (0x00026f55) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0003556b) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0003556b) list_calc_item_pane_t

0x29a8,	// (0x00028d88) cell_calc_pane_g1

0x29b2,	// (0x00028d92) grid_highlight_pane_cp02

0x29d4,	// (0x00028db4) bg_calc_display_pane_g1

0xb11c,	// (0x000314fc) bg_calc_display_pane_g2

0x29dd,	// (0x00028dbd) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00035575) bg_calc_display_pane_g

0x0ba7,	// (0x00026f87) cell_qdial_pane_ParamLimits

0x0ba7,	// (0x00026f87) cell_qdial_pane

0x29e6,	// (0x00028dc6) cell_qdial_pane_g1_ParamLimits

0x29e6,	// (0x00028dc6) cell_qdial_pane_g1

0x29fc,	// (0x00028ddc) cell_qdial_pane_g2_ParamLimits

0x29fc,	// (0x00028ddc) cell_qdial_pane_g2

0x2a0d,	// (0x00028ded) cell_qdial_pane_g3_ParamLimits

0x2a0d,	// (0x00028ded) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0003557c) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0003557c) cell_qdial_pane_g

0x2a2e,	// (0x00028e0e) cell_qdial_pane_t1_ParamLimits

0x2a2e,	// (0x00028e0e) cell_qdial_pane_t1

0x2a46,	// (0x00028e26) cell_qdial_pane_t2_ParamLimits

0x2a46,	// (0x00028e26) cell_qdial_pane_t2

0x2a59,	// (0x00028e39) cell_qdial_pane_t3_ParamLimits

0x2a59,	// (0x00028e39) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00035585) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00035585) cell_qdial_pane_t

0x23c6,	// (0x000287a6) grid_highlight_pane_cp04

0x2a6c,	// (0x00028e4c) thumbnail_qdial_pane_ParamLimits

0x2a6c,	// (0x00028e4c) thumbnail_qdial_pane

0x2ac8,	// (0x00028ea8) list_help_pane

0x2ad1,	// (0x00028eb1) scroll_pane_cp02

0x2ada,	// (0x00028eba) help_list_pane_t1_ParamLimits

0x2ada,	// (0x00028eba) help_list_pane_t1

0xb126,	// (0x00031506) bg_notes_pane_g2

0xb12e,	// (0x0003150e) bg_notes_pane_g3

0xb136,	// (0x00031516) notes_bg_pane_g1

0xb13e,	// (0x0003151e) notes_bg_pane_g4

0xb146,	// (0x00031526) notes_bg_pane_g5

0xb14e,	// (0x0003152e) notes_bg_pane_g6

0xb156,	// (0x00031536) notes_bg_pane_g7

0xb15e,	// (0x0003153e) notes_bg_pane_g8

0xb166,	// (0x00031546) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x000355a3) notes_bg_pane_g

0x2afe,	// (0x00028ede) list_notes_text_pane_ParamLimits

0x2afe,	// (0x00028ede) list_notes_text_pane

0x2b15,	// (0x00028ef5) list_notes_text_pane_g1

0x2b1e,	// (0x00028efe) list_notes_text_pane_t1

0x28f7,	// (0x00028cd7) listscroll_cale_week_pane

0x2b5a,	// (0x00028f3a) bg_cale_heading_pane

0x2b76,	// (0x00028f56) bg_cale_pane_cp01

0x2b8f,	// (0x00028f6f) cale_week_corner_pane

0x2ba5,	// (0x00028f85) cale_week_day_heading_pane

0x2bc1,	// (0x00028fa1) cale_week_scroll_pane_g1

0x2bda,	// (0x00028fba) cale_week_scroll_pane_g2

0x2beb,	// (0x00028fcb) cale_week_scroll_pane_g3

0x2bfc,	// (0x00028fdc) cale_week_scroll_pane_g4

0x2c0d,	// (0x00028fed) cale_week_scroll_pane_g5

0x2c1e,	// (0x00028ffe) cale_week_scroll_pane_g6

0x2c2f,	// (0x0002900f) cale_week_scroll_pane_g7

0x2c40,	// (0x00029020) cale_week_scroll_pane_g8

0x2c51,	// (0x00029031) cale_week_scroll_pane_g9

0x2c62,	// (0x00029042) cale_week_scroll_pane_g10

0x2c73,	// (0x00029053) cale_week_scroll_pane_g11

0x2c84,	// (0x00029064) cale_week_scroll_pane_g12

0x2c95,	// (0x00029075) cale_week_scroll_pane_g13

0x2cae,	// (0x0002908e) cale_week_scroll_pane_g14

0x2cc7,	// (0x000290a7) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x000355b2) cale_week_scroll_pane_g

0x2ce0,	// (0x000290c0) cale_week_time_pane

0x2cf1,	// (0x000290d1) grid_cale_week_pane

0x2d1e,	// (0x000290fe) scroll_pane_cp08

0x2d36,	// (0x00029116) cell_cale_week_pane_ParamLimits

0x2d36,	// (0x00029116) cell_cale_week_pane

0x2d7e,	// (0x0002915e) cale_week_day_heading_pane_t1

0x2d92,	// (0x00029172) cale_week_day_heading_pane_t2

0x2da6,	// (0x00029186) cale_week_day_heading_pane_t3

0x2dba,	// (0x0002919a) cale_week_day_heading_pane_t4

0x2dce,	// (0x000291ae) cale_week_day_heading_pane_t5

0x2de2,	// (0x000291c2) cale_week_day_heading_pane_t6

0x2df6,	// (0x000291d6) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x000355d1) cale_week_day_heading_pane_t

0x2e0a,	// (0x000291ea) bg_cale_side_pane

0x0bbd,	// (0x00026f9d) cale_week_time_pane_t1

0x0bd5,	// (0x00026fb5) cale_week_time_pane_t2

0x0bed,	// (0x00026fcd) cale_week_time_pane_t3

0x0c05,	// (0x00026fe5) cale_week_time_pane_t4

0x0c1d,	// (0x00026ffd) cale_week_time_pane_t5

0x0c35,	// (0x00027015) cale_week_time_pane_t6

0x0c4d,	// (0x0002702d) cale_week_time_pane_t7

0x0c69,	// (0x00027049) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x000355e0) cale_week_time_pane_t

0x2e18,	// (0x000291f8) cell_cale_week_pane_g2

0x2e29,	// (0x00029209) cell_cale_week_pane_g3_ParamLimits

0x2e29,	// (0x00029209) cell_cale_week_pane_g3

0x2e41,	// (0x00029221) grid_highlight_pane_cp07

0x2e49,	// (0x00029229) listscroll_gms_pane

0x2e53,	// (0x00029233) grid_gms_pane

0x2e5c,	// (0x0002923c) listscroll_gms_pane_g1

0x2e64,	// (0x00029244) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x000355f1) listscroll_gms_pane_g

0x2e6c,	// (0x0002924c) scroll_pane_cp010

0x2e77,	// (0x00029257) cell_gms_pane_ParamLimits

0x2e77,	// (0x00029257) cell_gms_pane

0x2e91,	// (0x00029271) cell_gms_pane_g1

0x2e99,	// (0x00029279) cell_gms_pane_g2

0x2ea1,	// (0x00029281) cell_gms_pane_g3

0x2eaa,	// (0x0002928a) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000355f6) cell_gms_pane_g

0x2eb3,	// (0x00029293) grid_highlight_pane_cp09

0x647f,	// (0x0002c85f) phob_pre_status_pane_g1

0x6487,	// (0x0002c867) phob_pre_status_pane_g2

0x648f,	// (0x0002c86f) phob_pre_status_pane_g3

0x6497,	// (0x0002c877) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x000359e5) phob_pre_status_pane_g

0x64a7,	// (0x0002c887) phob_pre_status_pane_t1

0x64b7,	// (0x0002c897) phob_pre_status_pane_t2

0x64c7,	// (0x0002c8a7) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x000359f0) phob_pre_status_pane_t

0x23c6,	// (0x000287a6) bg_list_pane_cp05

0x0c91,	// (0x00027071) grid_vorec_pane

0xb16e,	// (0x0003154e) vorec_t1

0xb17c,	// (0x0003155c) vorec_t2

0xb18a,	// (0x0003156a) vorec_t3

0xb198,	// (0x00031578) vorec_t4

0xb1a6,	// (0x00031586) vorec_t5

0xb1b4,	// (0x00031594) vorec_t6

0x0006,

0xf21f,	// (0x000355ff) vorec_t

0xb1d0,	// (0x000315b0) wait_bar_pane_cp01

0x2ebb,	// (0x0002929b) cell_vorec_pane_ParamLimits

0x2ebb,	// (0x0002929b) cell_vorec_pane

0x2ed0,	// (0x000292b0) cell_vorec_pane_g1

0x23c6,	// (0x000287a6) grid_highlight_pane_cp05

0x2ef0,	// (0x000292d0) cams_zoom_pane

0x2eff,	// (0x000292df) image_vga_pane

0x2f19,	// (0x000292f9) main_camera_pane_g1

0x2f2b,	// (0x0002930b) main_camera_pane_g2

0x2f3b,	// (0x0002931b) main_camera_pane_g3

0x2f4f,	// (0x0002932f) main_camera_pane_g4

0x2f63,	// (0x00029343) main_camera_pane_g5

0x2f77,	// (0x00029357) main_camera_pane_g6

0x2f8b,	// (0x0002936b) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0003560e) main_camera_pane_g

0x2fab,	// (0x0002938b) main_camera_pane_t1

0x2fc1,	// (0x000293a1) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0003561f) main_camera_pane_t

0x2fff,	// (0x000293df) cams_zoom_pane_cp_ParamLimits

0x2fff,	// (0x000293df) cams_zoom_pane_cp

0x3027,	// (0x00029407) image_cif_pane_ParamLimits

0x3027,	// (0x00029407) image_cif_pane

0x3062,	// (0x00029442) image_subqcif_pane

0x306c,	// (0x0002944c) main_video_pane_g1_ParamLimits

0x306c,	// (0x0002944c) main_video_pane_g1

0x3090,	// (0x00029470) main_video_pane_g2_ParamLimits

0x3090,	// (0x00029470) main_video_pane_g2

0x30c6,	// (0x000294a6) main_video_pane_g3_ParamLimits

0x30c6,	// (0x000294a6) main_video_pane_g3

0x30f4,	// (0x000294d4) main_video_pane_g4_ParamLimits

0x30f4,	// (0x000294d4) main_video_pane_g4

0x3122,	// (0x00029502) main_video_pane_g5_ParamLimits

0x3122,	// (0x00029502) main_video_pane_g5

0x313a,	// (0x0002951a) main_video_pane_g6_ParamLimits

0x313a,	// (0x0002951a) main_video_pane_g6

0x0006,

0xf244,	// (0x00035624) main_video_pane_g_ParamLimits

0xf244,	// (0x00035624) main_video_pane_g

0x3165,	// (0x00029545) main_video_pane_t1_ParamLimits

0x3165,	// (0x00029545) main_video_pane_t1

0x31ae,	// (0x0002958e) cams_zoom_pane_g1

0x31b7,	// (0x00029597) cams_zoom_pane_g2

0x31c0,	// (0x000295a0) cams_zoom_pane_g3

0x31c9,	// (0x000295a9) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00035633) cams_zoom_pane_g

0x31e6,	// (0x000295c6) grid_cams_pane

0x3200,	// (0x000295e0) linegrid_cams_pane

0x3214,	// (0x000295f4) cell_cams_pane_ParamLimits

0x3214,	// (0x000295f4) cell_cams_pane

0x3236,	// (0x00029616) cams_burst_image_pane

0x323e,	// (0x0002961e) cell_cams_pane_g1

0x23c6,	// (0x000287a6) grid_highlight_pane_cp03

0x29a8,	// (0x00028d88) mp_bg_pane_g1

0x23c6,	// (0x000287a6) bg_list_pane_cp03

0xbd08,	// (0x000320e8) bg_mp_pane

0xbd10,	// (0x000320f0) grid_mp_pane

0xbd18,	// (0x000320f8) media_player_g1

0xbd22,	// (0x00032102) media_player_t1

0xbd30,	// (0x00032110) media_player_t2

0xbd3e,	// (0x0003211e) media_player_t3

0xbd4c,	// (0x0003212c) media_player_t4

0xbd5a,	// (0x0003213a) media_player_t5

0xbd68,	// (0x00032148) media_player_t6

0xbd76,	// (0x00032156) media_player_t7

0x0006,

0xf5ef,	// (0x000359cf) media_player_t

0xbd84,	// (0x00032164) wait_bar_pane_cp02

0xf5d4,	// (0x000359b4) main_usb_pane_t

0x6476,	// (0x0002c856) cell_mp_pane

0x29a8,	// (0x00028d88) cell_mp_pane_g1

0x23c6,	// (0x000287a6) grid_highlight_pane_cp06

0x3356,	// (0x00029736) grid_skin_colour_pane

0x335e,	// (0x0002973e) list_highlight_pane_cp03

0x3366,	// (0x00029746) skin_g1

0x3370,	// (0x00029750) skin_t1

0x337f,	// (0x0002975f) skin_t2

0x0001,

0xf288,	// (0x00035668) skin_t

0x338d,	// (0x0002976d) cell_skin_colour_pane_ParamLimits

0x338d,	// (0x0002976d) cell_skin_colour_pane

0x33ad,	// (0x0002978d) cell_skin_colour_pane_g1

0x3412,	// (0x000297f2) call_video_g1_ParamLimits

0x3412,	// (0x000297f2) call_video_g1

0x342e,	// (0x0002980e) call_video_g2_ParamLimits

0x342e,	// (0x0002980e) call_video_g2

0x0001,

0xf28d,	// (0x0003566d) call_video_g_ParamLimits

0xf28d,	// (0x0003566d) call_video_g

0x3476,	// (0x00029856) call_video_uplink_pane_cp1_ParamLimits

0x3476,	// (0x00029856) call_video_uplink_pane_cp1

0x34db,	// (0x000298bb) call_video_uplink_pane_cp2

0x351f,	// (0x000298ff) video_down_crop_pane_ParamLimits

0x351f,	// (0x000298ff) video_down_crop_pane

0x3608,	// (0x000299e8) video_down_pane_ParamLimits

0x3608,	// (0x000299e8) video_down_pane

0x36fa,	// (0x00029ada) video_down_subqcif_pane_ParamLimits

0x36fa,	// (0x00029ada) video_down_subqcif_pane

0x3714,	// (0x00029af4) video_down_subqcif_pane_cp_ParamLimits

0x3714,	// (0x00029af4) video_down_subqcif_pane_cp

0x3751,	// (0x00029b31) im_reading_pane_ParamLimits

0x3751,	// (0x00029b31) im_reading_pane

0x3763,	// (0x00029b43) im_writing_pane_ParamLimits

0x3763,	// (0x00029b43) im_writing_pane

0x3789,	// (0x00029b69) im_reading_pane_t1

0x37c8,	// (0x00029ba8) list_im_pane

0x37d9,	// (0x00029bb9) scroll_pane_cp07

0x37f2,	// (0x00029bd2) im_writing_pane_t1_ParamLimits

0x37f2,	// (0x00029bd2) im_writing_pane_t1

0x3807,	// (0x00029be7) im_writing_pane_t2_ParamLimits

0x3807,	// (0x00029be7) im_writing_pane_t2

0x0001,

0xf297,	// (0x00035677) im_writing_pane_t_ParamLimits

0xf297,	// (0x00035677) im_writing_pane_t

0x23c6,	// (0x000287a6) input_focus_pane_cp04

0x23c6,	// (0x000287a6) input_focus_pane_cp05

0x3824,	// (0x00029c04) list_im_single_pane_ParamLimits

0x3824,	// (0x00029c04) list_im_single_pane

0x383d,	// (0x00029c1d) list_single_im_pane_t1

0x6436,	// (0x0002c816) blid_accuracy_pane

0x643e,	// (0x0002c81e) blid_compass_pane

0x6448,	// (0x0002c828) main_location_t1

0x6458,	// (0x0002c838) main_location_t2

0x6468,	// (0x0002c848) main_location_t3

0x0002,

0xf5fe,	// (0x000359de) main_location_t

0x23c6,	// (0x000287a6) aid_levels_location

0x29a8,	// (0x00028d88) blid_accuracy_pane_g1

0x29a8,	// (0x00028d88) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000356d9) blid_accuracy_pane_g

0x3877,	// (0x00029c57) wml_content_pane

0x38b5,	// (0x00029c95) wml_button_pane_ParamLimits

0x38b5,	// (0x00029c95) wml_button_pane

0x38c9,	// (0x00029ca9) wml_list_single_large_pane_ParamLimits

0x38c9,	// (0x00029ca9) wml_list_single_large_pane

0x38e2,	// (0x00029cc2) wml_list_single_medium_pane_ParamLimits

0x38e2,	// (0x00029cc2) wml_list_single_medium_pane

0x38fc,	// (0x00029cdc) wml_list_single_small_pane_ParamLimits

0x38fc,	// (0x00029cdc) wml_list_single_small_pane

0x391b,	// (0x00029cfb) wml_selection_box_pane_ParamLimits

0x391b,	// (0x00029cfb) wml_selection_box_pane

0x392e,	// (0x00029d0e) wml_list_single_pane_t1

0x393d,	// (0x00029d1d) wml_list_single_medium_pane_t1

0x394c,	// (0x00029d2c) wml_list_single_large_pane_t1

0x395b,	// (0x00029d3b) input_focus_pane_cp02_ParamLimits

0x395b,	// (0x00029d3b) input_focus_pane_cp02

0x396e,	// (0x00029d4e) wml_selection_box_pane_g1

0x3977,	// (0x00029d57) wml_selection_box_pane_t1_ParamLimits

0x3977,	// (0x00029d57) wml_selection_box_pane_t1

0x2621,	// (0x00028a01) bg_wml_button_pane_ParamLimits

0x2621,	// (0x00028a01) bg_wml_button_pane

0x398f,	// (0x00029d6f) wml_button_pane_g1

0x3997,	// (0x00029d77) wml_button_pane_t1

0x398f,	// (0x00029d6f) wml_button_bg_pane_g1

0x39a7,	// (0x00029d87) wml_button_bg_pane_g2

0x39af,	// (0x00029d8f) wml_button_bg_pane_g3

0x39b7,	// (0x00029d97) wml_button_bg_pane_g4

0x39bf,	// (0x00029d9f) wml_button_bg_pane_g5

0x39c7,	// (0x00029da7) wml_button_bg_pane_g6

0x39cf,	// (0x00029daf) wml_button_bg_pane_g7

0x39d7,	// (0x00029db7) wml_button_bg_pane_g8

0x39df,	// (0x00029dbf) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0003567c) wml_button_bg_pane_g

0x39e7,	// (0x00029dc7) bg_list_pane_cp02

0x39f1,	// (0x00029dd1) mce_header_pane_ParamLimits

0x39f1,	// (0x00029dd1) mce_header_pane

0x3a07,	// (0x00029de7) mce_icon_pane

0x3a07,	// (0x00029de7) mce_image_pane

0x3a10,	// (0x00029df0) mce_text_pane_ParamLimits

0x3a10,	// (0x00029df0) mce_text_pane

0x3a23,	// (0x00029e03) scroll_pane_cp03

0x38ad,	// (0x00029c8d) scroll_pane_cp04

0x3a2d,	// (0x00029e0d) scroll_pane_cp05_ParamLimits

0x3a2d,	// (0x00029e0d) scroll_pane_cp05

0x3a39,	// (0x00029e19) mce_header_field_pane_ParamLimits

0x3a39,	// (0x00029e19) mce_header_field_pane

0x3a52,	// (0x00029e32) mce_header_field_pane_2_ParamLimits

0x3a52,	// (0x00029e32) mce_header_field_pane_2

0x3a68,	// (0x00029e48) mce_header_field_pane_3

0x3a70,	// (0x00029e50) list_single_mce_message_pane_ParamLimits

0x3a70,	// (0x00029e50) list_single_mce_message_pane

0x3a8c,	// (0x00029e6c) list_single_mce_smart_pane_ParamLimits

0x3a8c,	// (0x00029e6c) list_single_mce_smart_pane

0x3ab3,	// (0x00029e93) input_focus_pane_cp03

0x3abc,	// (0x00029e9c) list_header_data_pane

0x3ac4,	// (0x00029ea4) mce_header_field_pane_t1

0x3ad4,	// (0x00029eb4) list_single_mce_header_pane_ParamLimits

0x3ad4,	// (0x00029eb4) list_single_mce_header_pane

0x3ae8,	// (0x00029ec8) list_single_mce_header_pane_t1

0x3af7,	// (0x00029ed7) list_single_mce_message_pane_g1

0x3aff,	// (0x00029edf) list_single_mce_message_pane_t1

0x3b2b,	// (0x00029f0b) bg_cale_heading_pane_cp01_ParamLimits

0x3b2b,	// (0x00029f0b) bg_cale_heading_pane_cp01

0x3b5e,	// (0x00029f3e) bg_cale_pane_cp02_ParamLimits

0x3b5e,	// (0x00029f3e) bg_cale_pane_cp02

0x3b81,	// (0x00029f61) cale_month_corner_pane

0x3b97,	// (0x00029f77) cale_month_day_heading_pane_ParamLimits

0x3b97,	// (0x00029f77) cale_month_day_heading_pane

0x3bca,	// (0x00029faa) cale_month_pane_g1_ParamLimits

0x3bca,	// (0x00029faa) cale_month_pane_g1

0x3bf6,	// (0x00029fd6) cale_month_pane_g2_ParamLimits

0x3bf6,	// (0x00029fd6) cale_month_pane_g2

0x3c17,	// (0x00029ff7) cale_month_pane_g3_ParamLimits

0x3c17,	// (0x00029ff7) cale_month_pane_g3

0x3c53,	// (0x0002a033) cale_month_pane_g4_ParamLimits

0x3c53,	// (0x0002a033) cale_month_pane_g4

0x3c8f,	// (0x0002a06f) cale_month_pane_g5_ParamLimits

0x3c8f,	// (0x0002a06f) cale_month_pane_g5

0x3ccb,	// (0x0002a0ab) cale_month_pane_g6_ParamLimits

0x3ccb,	// (0x0002a0ab) cale_month_pane_g6

0x3d07,	// (0x0002a0e7) cale_month_pane_g7_ParamLimits

0x3d07,	// (0x0002a0e7) cale_month_pane_g7

0x3d43,	// (0x0002a123) cale_month_pane_g8_ParamLimits

0x3d43,	// (0x0002a123) cale_month_pane_g8

0x3d7f,	// (0x0002a15f) cale_month_pane_g9_ParamLimits

0x3d7f,	// (0x0002a15f) cale_month_pane_g9

0x3db5,	// (0x0002a195) cale_month_pane_g10_ParamLimits

0x3db5,	// (0x0002a195) cale_month_pane_g10

0x3ddf,	// (0x0002a1bf) cale_month_pane_g11_ParamLimits

0x3ddf,	// (0x0002a1bf) cale_month_pane_g11

0x3e09,	// (0x0002a1e9) cale_month_pane_g12_ParamLimits

0x3e09,	// (0x0002a1e9) cale_month_pane_g12

0x3e37,	// (0x0002a217) cale_month_pane_g13_ParamLimits

0x3e37,	// (0x0002a217) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0003568f) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0003568f) cale_month_pane_g

0x3e77,	// (0x0002a257) cale_month_week_pane

0x3e88,	// (0x0002a268) grid_cale_month_pane_ParamLimits

0x3e88,	// (0x0002a268) grid_cale_month_pane

0x3eb6,	// (0x0002a296) cale_month_day_heading_pane_t1

0x3f14,	// (0x0002a2f4) cale_month_day_heading_pane_t2

0x3f79,	// (0x0002a359) cale_month_day_heading_pane_t3

0x3fde,	// (0x0002a3be) cale_month_day_heading_pane_t4

0x4043,	// (0x0002a423) cale_month_day_heading_pane_t5

0x40a8,	// (0x0002a488) cale_month_day_heading_pane_t6

0x410d,	// (0x0002a4ed) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x000356aa) cale_month_day_heading_pane_t

0x2e0a,	// (0x000291ea) bg_cale_side_pane_cp01

0x4172,	// (0x0002a552) cale_month_week_pane_t1

0x4189,	// (0x0002a569) cale_month_week_pane_t2

0x41a0,	// (0x0002a580) cale_month_week_pane_t3

0x41b7,	// (0x0002a597) cale_month_week_pane_t4

0x41ce,	// (0x0002a5ae) cale_month_week_pane_t5

0x41e5,	// (0x0002a5c5) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x000356b9) cale_month_week_pane_t

0x4204,	// (0x0002a5e4) cell_cale_month_pane_ParamLimits

0x4204,	// (0x0002a5e4) cell_cale_month_pane

0xb1d8,	// (0x000315b8) cell_cale_month_pane_g1

0x0c9b,	// (0x0002707b) cell_cale_month_pane_t1_ParamLimits

0x0c9b,	// (0x0002707b) cell_cale_month_pane_t1

0x2e41,	// (0x00029221) grid_highlight_pane_cp08

0x29a8,	// (0x00028d88) main_smil_g1

0x42dc,	// (0x0002a6bc) smil_status_pane

0x42e7,	// (0x0002a6c7) smil_text_pane

0xbc26,	// (0x00032006) bg_popup_call3_rect_pane_g8

0xbc2e,	// (0x0003200e) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00035972) bg_popup_call3_rect_pane_g

0xbec3,	// (0x000322a3) smil_status_volume_pane_g1

0x42fb,	// (0x0002a6db) smil_status_pane_t1

0xbef6,	// (0x000322d6) volume_smil_pane

0x4312,	// (0x0002a6f2) list_smil_text_pane

0x431c,	// (0x0002a6fc) scroll_pane_cp011

0x4327,	// (0x0002a707) smil_text_list_pane_t1_ParamLimits

0x4327,	// (0x0002a707) smil_text_list_pane_t1

0xb1e4,	// (0x000315c4) aid_volume_smil_ParamLimits

0xb1e4,	// (0x000315c4) aid_volume_smil

0x29a8,	// (0x00028d88) smil_volume_pane_g1

0x29a8,	// (0x00028d88) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000356d9) smil_volume_pane_g

0x28f7,	// (0x00028cd7) listscroll_cale_day_pane

0x437c,	// (0x0002a75c) bg_cale_pane

0x4394,	// (0x0002a774) list_cale_pane

0x43a5,	// (0x0002a785) scroll_pane_cp09

0x43b6,	// (0x0002a796) cale_bg_pane_g1

0x43be,	// (0x0002a79e) cale_bg_pane_g2

0x43c6,	// (0x0002a7a6) cale_bg_pane_g3

0x43ce,	// (0x0002a7ae) cale_bg_pane_g4

0x43d6,	// (0x0002a7b6) cale_bg_pane_g5

0x43de,	// (0x0002a7be) cale_bg_pane_g6

0x43e6,	// (0x0002a7c6) cale_bg_pane_g7

0x43ee,	// (0x0002a7ce) cale_bg_pane_g8

0x43f6,	// (0x0002a7d6) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x000356de) cale_bg_pane_g

0x43fe,	// (0x0002a7de) list_cale_time_pane_ParamLimits

0x43fe,	// (0x0002a7de) list_cale_time_pane

0x4413,	// (0x0002a7f3) list_cale_time_pane_g1_ParamLimits

0x4413,	// (0x0002a7f3) list_cale_time_pane_g1

0x441f,	// (0x0002a7ff) list_cale_time_pane_g2_ParamLimits

0x441f,	// (0x0002a7ff) list_cale_time_pane_g2

0x442c,	// (0x0002a80c) list_cale_time_pane_g3_ParamLimits

0x442c,	// (0x0002a80c) list_cale_time_pane_g3

0x443a,	// (0x0002a81a) list_cale_time_pane_g4_ParamLimits

0x443a,	// (0x0002a81a) list_cale_time_pane_g4

0x4448,	// (0x0002a828) list_cale_time_pane_g5_ParamLimits

0x4448,	// (0x0002a828) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x000356f1) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x000356f1) list_cale_time_pane_g

0x4463,	// (0x0002a843) list_cale_time_pane_t1_ParamLimits

0x4463,	// (0x0002a843) list_cale_time_pane_t1

0x448b,	// (0x0002a86b) list_cale_time_pane_t2_ParamLimits

0x448b,	// (0x0002a86b) list_cale_time_pane_t2

0x4c4d,	// (0x0002b02d) aid_blid_cardinal_pane

0x4c9b,	// (0x0002b07b) compass_pane_t4

0x44b3,	// (0x0002a893) list_cale_time_pane_t4_ParamLimits

0x44b3,	// (0x0002a893) list_cale_time_pane_t4

0x4ca9,	// (0x0002b089) compass_pane_t5

0x4cb9,	// (0x0002b099) compass_pane_t6

0x4cc7,	// (0x0002b0a7) compass_pane_t7

0x4d49,	// (0x0002b129) navi_pane_cc_t1

0x4f68,	// (0x0002b348) aid_phob_thumbnail_center_pane

0x56ac,	// (0x0002ba8c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000356fe) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000356fe) list_cale_time_pane_t

0x1ff9,	// (0x000283d9) bg_popup_window_pane_cp02_ParamLimits

0x1ff9,	// (0x000283d9) bg_popup_window_pane_cp02

0x44db,	// (0x0002a8bb) heading_pane_cp01_ParamLimits

0x44db,	// (0x0002a8bb) heading_pane_cp01

0x44e7,	// (0x0002a8c7) loc_req_pane_ParamLimits

0x44e7,	// (0x0002a8c7) loc_req_pane

0x44f7,	// (0x0002a8d7) loc_type_pane_ParamLimits

0x44f7,	// (0x0002a8d7) loc_type_pane

0x4509,	// (0x0002a8e9) loc_type_pane_t1_ParamLimits

0x4509,	// (0x0002a8e9) loc_type_pane_t1

0x451b,	// (0x0002a8fb) loc_type_pane_t2_ParamLimits

0x451b,	// (0x0002a8fb) loc_type_pane_t2

0x452d,	// (0x0002a90d) loc_type_pane_t3_ParamLimits

0x452d,	// (0x0002a90d) loc_type_pane_t3

0x0002,

0xf325,	// (0x00035705) loc_type_pane_t_ParamLimits

0xf325,	// (0x00035705) loc_type_pane_t

0x453f,	// (0x0002a91f) list_loc_req_pane

0x4549,	// (0x0002a929) scroll_pane_cp012

0x4554,	// (0x0002a934) list_single_loc_request_popup_menu_pane_ParamLimits

0x4554,	// (0x0002a934) list_single_loc_request_popup_menu_pane

0x4561,	// (0x0002a941) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4561,	// (0x0002a941) list_single_loc_request_popup_menu_pane_g1

0x456d,	// (0x0002a94d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x456d,	// (0x0002a94d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0003570c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0003570c) list_single_loc_request_popup_menu_pane_g

0x4579,	// (0x0002a959) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4579,	// (0x0002a959) list_single_loc_request_popup_menu_pane_t1

0x2621,	// (0x00028a01) bg_popup_window_pane_cp03_ParamLimits

0x2621,	// (0x00028a01) bg_popup_window_pane_cp03

0x458f,	// (0x0002a96f) heading_loc_req_pane_ParamLimits

0x458f,	// (0x0002a96f) heading_loc_req_pane

0x459b,	// (0x0002a97b) popup_dyc_status_message_window_g1_ParamLimits

0x459b,	// (0x0002a97b) popup_dyc_status_message_window_g1

0x45af,	// (0x0002a98f) popup_dyc_status_message_window_t1_ParamLimits

0x45af,	// (0x0002a98f) popup_dyc_status_message_window_t1

0x45c4,	// (0x0002a9a4) popup_dyc_status_message_window_t2_ParamLimits

0x45c4,	// (0x0002a9a4) popup_dyc_status_message_window_t2

0x45d9,	// (0x0002a9b9) popup_dyc_status_message_window_t3_ParamLimits

0x45d9,	// (0x0002a9b9) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00035711) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00035711) popup_dyc_status_message_window_t

0x23c6,	// (0x000287a6) bg_heading_pane_cp01

0x45f5,	// (0x0002a9d5) heading_loc_req_pane_g1

0x45fd,	// (0x0002a9dd) heading_loc_req_pane_g2

0x4605,	// (0x0002a9e5) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00035718) heading_loc_req_pane_g

0x460d,	// (0x0002a9ed) heading_loc_req_pane_t1

0x4706,	// (0x0002aae6) bg_popup_sub_pane_cp01_ParamLimits

0x4706,	// (0x0002aae6) bg_popup_sub_pane_cp01

0x4714,	// (0x0002aaf4) popup_cale_events_window_g1_ParamLimits

0x4714,	// (0x0002aaf4) popup_cale_events_window_g1

0x4734,	// (0x0002ab14) popup_cale_events_window_g2_ParamLimits

0x4734,	// (0x0002ab14) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0003574c) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0003574c) popup_cale_events_window_g

0x4754,	// (0x0002ab34) popup_cale_events_window_t1_ParamLimits

0x4754,	// (0x0002ab34) popup_cale_events_window_t1

0x4766,	// (0x0002ab46) popup_cale_events_window_t2_ParamLimits

0x4766,	// (0x0002ab46) popup_cale_events_window_t2

0x47a4,	// (0x0002ab84) popup_cale_events_window_t3_ParamLimits

0x47a4,	// (0x0002ab84) popup_cale_events_window_t3

0x47de,	// (0x0002abbe) popup_cale_events_window_t4_ParamLimits

0x47de,	// (0x0002abbe) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00035751) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00035751) popup_cale_events_window_t

0x4814,	// (0x0002abf4) call_type_pane

0x4824,	// (0x0002ac04) popup_call_status_window_g1

0x4838,	// (0x0002ac18) popup_call_status_window_g2

0x484c,	// (0x0002ac2c) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0003575a) popup_call_status_window_g

0x485c,	// (0x0002ac3c) call_type_pane_g1

0x4865,	// (0x0002ac45) call_type_pane_g2

0x0001,

0xf381,	// (0x00035761) call_type_pane_g

0x23c6,	// (0x000287a6) bg_popup_sub_pane_cp02

0x486e,	// (0x0002ac4e) listscroll_popup_wml_pane

0x4876,	// (0x0002ac56) list_wml_pane

0x4880,	// (0x0002ac60) scroll_pane_cp013

0x488b,	// (0x0002ac6b) list_single_graphic_popup_wml_pane_ParamLimits

0x488b,	// (0x0002ac6b) list_single_graphic_popup_wml_pane

0x29a8,	// (0x00028d88) list_single_graphic_popup_wml_pane_g1

0x489f,	// (0x0002ac7f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00035766) list_single_graphic_popup_wml_pane_g

0x48a7,	// (0x0002ac87) list_single_graphic_popup_wml_pane_t1

0x48bd,	// (0x0002ac9d) aid_call_pane

0x2619,	// (0x000289f9) popup_clock_analogue_window_g1

0x2619,	// (0x000289f9) popup_clock_analogue_window_g2

0xb206,	// (0x000315e6) popup_clock_analogue_window_g3

0xb206,	// (0x000315e6) popup_clock_analogue_window_g4

0x29a8,	// (0x00028d88) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0003576b) popup_clock_analogue_window_g

0xb20e,	// (0x000315ee) popup_clock_analogue_window_t1

0xb21c,	// (0x000315fc) clock_digital_number_pane_ParamLimits

0xb21c,	// (0x000315fc) clock_digital_number_pane

0xb228,	// (0x00031608) clock_digital_number_pane_cp02_ParamLimits

0xb228,	// (0x00031608) clock_digital_number_pane_cp02

0xb234,	// (0x00031614) clock_digital_number_pane_cp03_ParamLimits

0xb234,	// (0x00031614) clock_digital_number_pane_cp03

0xb240,	// (0x00031620) clock_digital_number_pane_cp04_ParamLimits

0xb240,	// (0x00031620) clock_digital_number_pane_cp04

0xb24c,	// (0x0003162c) clock_digital_separator_pane_ParamLimits

0xb24c,	// (0x0003162c) clock_digital_separator_pane

0xb258,	// (0x00031638) popup_clock_digital_window_t1

0x29a8,	// (0x00028d88) clock_digital_number_pane_g1

0x29a8,	// (0x00028d88) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000356d9) clock_digital_number_pane_g

0x29a8,	// (0x00028d88) clock_digital_separator_pane_g1

0x29a8,	// (0x00028d88) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000356d9) clock_digital_separator_pane_g

0x23c6,	// (0x000287a6) bg_popup_window_pane_cp04

0x48c5,	// (0x0002aca5) heading_pane_cp03

0x48cd,	// (0x0002acad) listscroll_popup_gms_pane

0x48d5,	// (0x0002acb5) grid_large_graphic_popup_pane

0x48df,	// (0x0002acbf) listscroll_popup_gms_pane_g1

0x48e7,	// (0x0002acc7) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00035776) listscroll_popup_gms_pane_g

0x38ad,	// (0x00029c8d) scroll_pane_cp014

0x48ef,	// (0x0002accf) cell_large_graphic_popup_pane_ParamLimits

0x48ef,	// (0x0002accf) cell_large_graphic_popup_pane

0x4907,	// (0x0002ace7) cell_large_graphic_popup_pane_g1_ParamLimits

0x4907,	// (0x0002ace7) cell_large_graphic_popup_pane_g1

0x4913,	// (0x0002acf3) cell_large_graphic_popup_pane_g2_ParamLimits

0x4913,	// (0x0002acf3) cell_large_graphic_popup_pane_g2

0x491f,	// (0x0002acff) cell_large_graphic_popup_pane_g3_ParamLimits

0x491f,	// (0x0002acff) cell_large_graphic_popup_pane_g3

0x492c,	// (0x0002ad0c) cell_large_graphic_popup_pane_g4_ParamLimits

0x492c,	// (0x0002ad0c) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0003577b) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0003577b) cell_large_graphic_popup_pane_g

0x493c,	// (0x0002ad1c) grid_highlight_pane_cp010

0x29a8,	// (0x00028d88) bg_popup_call_pane_g1

0x4946,	// (0x0002ad26) list_single_graphic_popup_conf_pane_ParamLimits

0x4946,	// (0x0002ad26) list_single_graphic_popup_conf_pane

0x4958,	// (0x0002ad38) list_highlight_pane_cp01

0x4961,	// (0x0002ad41) list_single_graphic_popup_conf_pane_g1

0x4969,	// (0x0002ad49) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00035784) list_single_graphic_popup_conf_pane_g

0x4971,	// (0x0002ad51) list_single_graphic_popup_conf_pane_t1

0x497f,	// (0x0002ad5f) linegrid_cams_pane_g1

0x4988,	// (0x0002ad68) linegrid_cams_pane_g2

0x2ea1,	// (0x00029281) linegrid_cams_pane_g3

0x4991,	// (0x0002ad71) linegrid_cams_pane_g4

0x499a,	// (0x0002ad7a) linegrid_cams_pane_g5

0x49a3,	// (0x0002ad83) linegrid_cams_pane_g6

0x2eaa,	// (0x0002928a) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00035789) linegrid_cams_pane_g

0x49ae,	// (0x0002ad8e) popup_clock_analogue_window

0x49ae,	// (0x0002ad8e) popup_clock_digital_window

0x23c6,	// (0x000287a6) popup_phob_thumbnail_window

0x29a8,	// (0x00028d88) call_video_uplink_pane_g1

0x49b7,	// (0x0002ad97) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00035798) call_video_uplink_pane_g

0x49bf,	// (0x0002ad9f) video_uplink_pane

0x49c7,	// (0x0002ada7) mce_image_pane_g1

0x49d1,	// (0x0002adb1) mce_image_pane_g2

0x49db,	// (0x0002adbb) mce_image_pane_g3

0x49e5,	// (0x0002adc5) mce_image_pane_g4

0x49ed,	// (0x0002adcd) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0003579d) mce_image_pane_g

0x49f5,	// (0x0002add5) control_top_pane_stacon_cp01_ParamLimits

0x49f5,	// (0x0002add5) control_top_pane_stacon_cp01

0x4a09,	// (0x0002ade9) uni_indicator_pane_stacon_cp01_ParamLimits

0x4a09,	// (0x0002ade9) uni_indicator_pane_stacon_cp01

0x4a1a,	// (0x0002adfa) bg_popup_sub_pane_cp03

0x4a24,	// (0x0002ae04) chi_dic_find_pane

0x4a2c,	// (0x0002ae0c) listscroll_chi_dic_pane

0x4a35,	// (0x0002ae15) main_pane_chidic_g1

0x4a48,	// (0x0002ae28) chi_dic_find_pane_t1

0x4a56,	// (0x0002ae36) find_chidic_pane

0x4a5f,	// (0x0002ae3f) chi_dic_list_pane_ParamLimits

0x4a5f,	// (0x0002ae3f) chi_dic_list_pane

0x4a70,	// (0x0002ae50) scroll_pane_cp020

0x4a78,	// (0x0002ae58) find_chidic_pane_t1

0x23c6,	// (0x000287a6) input_focus_pane_cp06

0x4a87,	// (0x0002ae67) list_chi_dic_pane_ParamLimits

0x4a87,	// (0x0002ae67) list_chi_dic_pane

0x4a99,	// (0x0002ae79) list_chi_dic_pane_t1_ParamLimits

0x4a99,	// (0x0002ae79) list_chi_dic_pane_t1

0x23c6,	// (0x000287a6) list_highlight_pane_cp020

0x4aac,	// (0x0002ae8c) bg_cale_heading_pane_g1

0x4ab4,	// (0x0002ae94) bg_cale_heading_pane_g2

0x4abc,	// (0x0002ae9c) bg_cale_heading_pane_g3

0x4ac4,	// (0x0002aea4) bg_cale_heading_pane_g4

0x4acc,	// (0x0002aeac) bg_cale_heading_pane_g5

0x4ad4,	// (0x0002aeb4) bg_cale_heading_pane_g6

0x4adc,	// (0x0002aebc) bg_cale_heading_pane_g7

0x4ae4,	// (0x0002aec4) bg_cale_heading_pane_g8

0x4aec,	// (0x0002aecc) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x000357a8) bg_cale_heading_pane_g

0x4aac,	// (0x0002ae8c) bg_cale_side_pane_g1

0x4af4,	// (0x0002aed4) bg_cale_side_pane_g2

0x4afe,	// (0x0002aede) bg_cale_side_pane_g3

0x4b08,	// (0x0002aee8) bg_cale_side_pane_g4

0x4b12,	// (0x0002aef2) bg_cale_side_pane_g5

0x4b1c,	// (0x0002aefc) bg_cale_side_pane_g6

0x4b26,	// (0x0002af06) bg_cale_side_pane_g7

0x4b30,	// (0x0002af10) bg_cale_side_pane_g8

0x4b38,	// (0x0002af18) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x000357bb) bg_cale_side_pane_g

0x4b40,	// (0x0002af20) popup_call_status_window_ParamLimits

0x4b40,	// (0x0002af20) popup_call_status_window

0x4b8d,	// (0x0002af6d) stacon_top_pane

0x4b95,	// (0x0002af75) status_pane_ParamLimits

0x4b95,	// (0x0002af75) status_pane

0x4baa,	// (0x0002af8a) status_small_pane

0x4bb2,	// (0x0002af92) control_pane

0x23c6,	// (0x000287a6) stacon_bottom_pane

0x4bba,	// (0x0002af9a) list_single_mce_smart_pane_t1_ParamLimits

0x4bba,	// (0x0002af9a) list_single_mce_smart_pane_t1

0x4bcd,	// (0x0002afad) list_single_mce_smart_pane_t2_ParamLimits

0x4bcd,	// (0x0002afad) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x000357ce) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x000357ce) list_single_mce_smart_pane_t

0x4bec,	// (0x0002afcc) compass_pane

0x4bf7,	// (0x0002afd7) main_location2_pane_t1

0x4c0d,	// (0x0002afed) main_location2_pane_t2

0x4c23,	// (0x0002b003) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x000357d3) main_location2_pane_t

0x4c71,	// (0x0002b051) compass_pane_g1_ParamLimits

0x4c71,	// (0x0002b051) compass_pane_g1

0x4c7d,	// (0x0002b05d) compass_pane_t1

0x4c8c,	// (0x0002b06c) compass_pane_t2

0x0005,

0xf3fc,	// (0x000357dc) compass_pane_t

0x4cd7,	// (0x0002b0b7) text_secondary_cp61

0x4d40,	// (0x0002b120) navi_pane_cams_g5

0x4dbc,	// (0x0002b19c) navi_pane_im_t1

0x4dca,	// (0x0002b1aa) navi_pane_mp_g1_ParamLimits

0x4dca,	// (0x0002b1aa) navi_pane_mp_g1

0x4dde,	// (0x0002b1be) navi_pane_mp_g2_ParamLimits

0x4dde,	// (0x0002b1be) navi_pane_mp_g2

0x4dea,	// (0x0002b1ca) navi_pane_mp_g3_ParamLimits

0x4dea,	// (0x0002b1ca) navi_pane_mp_g3

0x0002,

0xf410,	// (0x000357f0) navi_pane_mp_g_ParamLimits

0xf410,	// (0x000357f0) navi_pane_mp_g

0x4df6,	// (0x0002b1d6) navi_pane_mp_t1

0x4e04,	// (0x0002b1e4) navi_pane_mp_t2

0x0002,

0xf417,	// (0x000357f7) navi_pane_mp_t

0x4eb1,	// (0x0002b291) navi_pane_vt_g1

0x4df6,	// (0x0002b1d6) navi_pane_vt_t1

0x4eb9,	// (0x0002b299) navi_slider_pane

0x4ec1,	// (0x0002b2a1) zooming_pane

0x4ec9,	// (0x0002b2a9) navi_slider_pane_g1

0xb275,	// (0x00031655) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x000357fe) navi_slider_pane_g

0x4eed,	// (0x0002b2cd) aid_levels_zoom

0x4ef5,	// (0x0002b2d5) zooming_pane_g1

0x4efd,	// (0x0002b2dd) zooming_pane_g2

0x4efd,	// (0x0002b2dd) zooming_pane_g3

0x0002,

0xf42d,	// (0x0003580d) zooming_pane_g

0x4f05,	// (0x0002b2e5) level_10_zoom

0x4f0e,	// (0x0002b2ee) level_11_zoom

0x4f17,	// (0x0002b2f7) level_1_zoom

0x4f20,	// (0x0002b300) level_2_zoom

0x4f29,	// (0x0002b309) level_3_zoom

0x4f32,	// (0x0002b312) level_4_zoom

0x4f3b,	// (0x0002b31b) level_5_zoom

0x4f44,	// (0x0002b324) level_6_zoom

0x4f4d,	// (0x0002b32d) level_7_zoom

0x4f56,	// (0x0002b336) level_8_zoom

0x4f5f,	// (0x0002b33f) level_9_zoom

0x4f70,	// (0x0002b350) popup_phob_thumbnail_window_g1

0x4f78,	// (0x0002b358) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00035814) popup_phob_thumbnail_window_g

0xbd8c,	// (0x0003216c) level_1_location

0xbd94,	// (0x00032174) level_2_location

0xbd9c,	// (0x0003217c) level_3_location

0xbda4,	// (0x00032184) level_4_location

0x4ec1,	// (0x0002b2a1) level_5_location

0x4f80,	// (0x0002b360) mce_icon_pane_g1

0x4f88,	// (0x0002b368) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00035819) mce_icon_pane_g

0x4f90,	// (0x0002b370) main_mup_pane_g1_ParamLimits

0x4f90,	// (0x0002b370) main_mup_pane_g1

0x4fa6,	// (0x0002b386) main_mup_pane_g2_ParamLimits

0x4fa6,	// (0x0002b386) main_mup_pane_g2

0x4fbe,	// (0x0002b39e) main_mup_pane_g3_ParamLimits

0x4fbe,	// (0x0002b39e) main_mup_pane_g3

0x4fd6,	// (0x0002b3b6) main_mup_pane_g4_ParamLimits

0x4fd6,	// (0x0002b3b6) main_mup_pane_g4

0x4fe8,	// (0x0002b3c8) main_mup_pane_g5_ParamLimits

0x4fe8,	// (0x0002b3c8) main_mup_pane_g5

0x5004,	// (0x0002b3e4) main_mup_pane_g6_ParamLimits

0x5004,	// (0x0002b3e4) main_mup_pane_g6

0x501e,	// (0x0002b3fe) main_mup_pane_g7_ParamLimits

0x501e,	// (0x0002b3fe) main_mup_pane_g7

0x503c,	// (0x0002b41c) main_mup_pane_g8_ParamLimits

0x503c,	// (0x0002b41c) main_mup_pane_g8

0x505a,	// (0x0002b43a) main_mup_pane_g9_ParamLimits

0x505a,	// (0x0002b43a) main_mup_pane_g9

0x5076,	// (0x0002b456) main_mup_pane_g10_ParamLimits

0x5076,	// (0x0002b456) main_mup_pane_g10

0x5094,	// (0x0002b474) main_mup_pane_g11_ParamLimits

0x5094,	// (0x0002b474) main_mup_pane_g11

0x50ae,	// (0x0002b48e) main_mup_pane_g12_ParamLimits

0x50ae,	// (0x0002b48e) main_mup_pane_g12

0x50c4,	// (0x0002b4a4) main_mup_pane_g13_ParamLimits

0x50c4,	// (0x0002b4a4) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0003581e) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0003581e) main_mup_pane_g

0x50d8,	// (0x0002b4b8) main_mup_pane_t1_ParamLimits

0x50d8,	// (0x0002b4b8) main_mup_pane_t1

0x50f4,	// (0x0002b4d4) main_mup_pane_t2_ParamLimits

0x50f4,	// (0x0002b4d4) main_mup_pane_t2

0x510c,	// (0x0002b4ec) main_mup_pane_t3_ParamLimits

0x510c,	// (0x0002b4ec) main_mup_pane_t3

0x5124,	// (0x0002b504) main_mup_pane_t4_ParamLimits

0x5124,	// (0x0002b504) main_mup_pane_t4

0x5142,	// (0x0002b522) main_mup_pane_t5_ParamLimits

0x5142,	// (0x0002b522) main_mup_pane_t5

0x5157,	// (0x0002b537) main_mup_pane_t6_ParamLimits

0x5157,	// (0x0002b537) main_mup_pane_t6

0x0005,

0xf459,	// (0x00035839) main_mup_pane_t_ParamLimits

0xf459,	// (0x00035839) main_mup_pane_t

0x5169,	// (0x0002b549) mup_progress_pane_ParamLimits

0x5169,	// (0x0002b549) mup_progress_pane

0x5175,	// (0x0002b555) mup_visualizer_pane_ParamLimits

0x5175,	// (0x0002b555) mup_visualizer_pane

0x51a9,	// (0x0002b589) mup_volume_pane_ParamLimits

0x51a9,	// (0x0002b589) mup_volume_pane

0x51c7,	// (0x0002b5a7) mup_visualizer_pane_g1_ParamLimits

0x51c7,	// (0x0002b5a7) mup_visualizer_pane_g1

0x51c7,	// (0x0002b5a7) mup_visualizer_pane_g2_ParamLimits

0x51c7,	// (0x0002b5a7) mup_visualizer_pane_g2

0x4c71,	// (0x0002b051) mup_visualizer_pane_g3_ParamLimits

0x4c71,	// (0x0002b051) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00035846) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00035846) mup_visualizer_pane_g

0x29a8,	// (0x00028d88) mup_volume_pane_g1

0x51dd,	// (0x0002b5bd) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0003584d) mup_volume_pane_g

0x29a8,	// (0x00028d88) mup_progress_pane_g1

0x51e6,	// (0x0002b5c6) mup_progress_pane_g2

0x51ef,	// (0x0002b5cf) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00035852) mup_progress_pane_g

0x23c6,	// (0x000287a6) bg_popup_window_pane_cp05

0x51f8,	// (0x0002b5d8) heading_pane_cp02_ParamLimits

0x51f8,	// (0x0002b5d8) heading_pane_cp02

0x5214,	// (0x0002b5f4) list_popup_blid_pane

0x521c,	// (0x0002b5fc) list_blid_sat_info_pane_ParamLimits

0x521c,	// (0x0002b5fc) list_blid_sat_info_pane

0x522f,	// (0x0002b60f) list_blid_sat_info_pane_g1

0x5237,	// (0x0002b617) list_blid_sat_info_pane_t1

0x5351,	// (0x0002b731) mup_equalizer_pane_ParamLimits

0x5351,	// (0x0002b731) mup_equalizer_pane

0x5372,	// (0x0002b752) mup_equalizer_pane_cp1_ParamLimits

0x5372,	// (0x0002b752) mup_equalizer_pane_cp1

0x5393,	// (0x0002b773) mup_equalizer_pane_cp2_ParamLimits

0x5393,	// (0x0002b773) mup_equalizer_pane_cp2

0x53b8,	// (0x0002b798) mup_equalizer_pane_cp3_ParamLimits

0x53b8,	// (0x0002b798) mup_equalizer_pane_cp3

0x53e1,	// (0x0002b7c1) mup_equalizer_pane_cp4_ParamLimits

0x53e1,	// (0x0002b7c1) mup_equalizer_pane_cp4

0x540a,	// (0x0002b7ea) mup_equalizer_pane_cp5

0x5422,	// (0x0002b802) mup_equalizer_pane_cp6

0x543a,	// (0x0002b81a) mup_equalizer_pane_cp7

0xbca6,	// (0x00032086) bg_popup_call_poc_act_pane_g9

0xbcae,	// (0x0003208e) bg_popup_call_poc_act_pane_g10

0xbcb6,	// (0x00032096) bg_popup_call_poc_act_pane_g11

0x000a,

0x2621,	// (0x00028a01) mup_scale_pane

0x29a8,	// (0x00028d88) mup_scale_pane_g1

0x5452,	// (0x0002b832) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0003586e) mup_scale_pane_g

0x5488,	// (0x0002b868) msg_data_pane

0x5490,	// (0x0002b870) scroll_pane_cp017

0x5498,	// (0x0002b878) bg_list_pane_cp04_ParamLimits

0x5498,	// (0x0002b878) bg_list_pane_cp04

0x54c0,	// (0x0002b8a0) msg_data_pane_g1

0x54c8,	// (0x0002b8a8) msg_data_pane_g2

0x54d2,	// (0x0002b8b2) msg_data_pane_g3

0x54dc,	// (0x0002b8bc) msg_data_pane_g4

0x54e4,	// (0x0002b8c4) msg_data_pane_g5

0x54ec,	// (0x0002b8cc) msg_data_pane_g6

0x54f4,	// (0x0002b8d4) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0003587d) msg_data_pane_g

0x54fc,	// (0x0002b8dc) msg_text_pane_ParamLimits

0x54fc,	// (0x0002b8dc) msg_text_pane

0x552b,	// (0x0002b90b) qrid_highlight_pane_cp011_ParamLimits

0x552b,	// (0x0002b90b) qrid_highlight_pane_cp011

0x23c6,	// (0x000287a6) msg_body_pane

0x23c6,	// (0x000287a6) msg_header_pane

0x554a,	// (0x0002b92a) input_focus_pane_cp07

0x556d,	// (0x0002b94d) msg_header_pane_t1_ParamLimits

0x556d,	// (0x0002b94d) msg_header_pane_t1

0x5581,	// (0x0002b961) msg_header_pane_t2_ParamLimits

0x5581,	// (0x0002b961) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00035891) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00035891) msg_header_pane_t

0x5593,	// (0x0002b973) msg_body_pane_g1

0x559b,	// (0x0002b97b) msg_body_pane_t1_ParamLimits

0x559b,	// (0x0002b97b) msg_body_pane_t1

0x55cc,	// (0x0002b9ac) msg_body_pane_t2_ParamLimits

0x55cc,	// (0x0002b9ac) msg_body_pane_t2

0x55de,	// (0x0002b9be) msg_body_pane_t3_ParamLimits

0x55de,	// (0x0002b9be) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00035896) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00035896) msg_body_pane_t

0x0cd3,	// (0x000270b3) main_viewer_pane_g1_ParamLimits

0x0cd3,	// (0x000270b3) main_viewer_pane_g1

0x0ce1,	// (0x000270c1) main_viewer_pane_g2_ParamLimits

0x0ce1,	// (0x000270c1) main_viewer_pane_g2

0x560e,	// (0x0002b9ee) main_viewer_pane_g3_ParamLimits

0x560e,	// (0x0002b9ee) main_viewer_pane_g3

0x561d,	// (0x0002b9fd) main_viewer_pane_g4_ParamLimits

0x561d,	// (0x0002b9fd) main_viewer_pane_g4

0xb29f,	// (0x0003167f) main_viewer_pane_g5_ParamLimits

0xb29f,	// (0x0003167f) main_viewer_pane_g5

0xb29f,	// (0x0003167f) main_viewer_pane_g7_ParamLimits

0xb29f,	// (0x0003167f) main_viewer_pane_g7

0xb2b1,	// (0x00031691) main_viewer_pane_g8_ParamLimits

0xb2b1,	// (0x00031691) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x000358a6) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x000358a6) main_viewer_pane_g

0x562c,	// (0x0002ba0c) viewer_content_pane_ParamLimits

0x562c,	// (0x0002ba0c) viewer_content_pane

0x5669,	// (0x0002ba49) main_postcard_pane_g1_ParamLimits

0x5669,	// (0x0002ba49) main_postcard_pane_g1

0x567f,	// (0x0002ba5f) main_postcard_pane_g2_ParamLimits

0x567f,	// (0x0002ba5f) main_postcard_pane_g2

0x5695,	// (0x0002ba75) main_postcard_pane_g3_ParamLimits

0x5695,	// (0x0002ba75) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x000358b7) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x000358b7) main_postcard_pane_g

0x56ac,	// (0x0002ba8c) main_postcard_pane_g4

0xbed6,	// (0x000322b6) smil_status_volume_pane_g2

0x56ef,	// (0x0002bacf) postcard_pane_ParamLimits

0x56ef,	// (0x0002bacf) postcard_pane

0x573f,	// (0x0002bb1f) postcard_pane_g1_ParamLimits

0x573f,	// (0x0002bb1f) postcard_pane_g1

0x574d,	// (0x0002bb2d) postcard_pane_g2_ParamLimits

0x574d,	// (0x0002bb2d) postcard_pane_g2

0x5759,	// (0x0002bb39) postcard_pane_g3_ParamLimits

0x5759,	// (0x0002bb39) postcard_pane_g3

0x5765,	// (0x0002bb45) postcard_pane_g4_ParamLimits

0x5765,	// (0x0002bb45) postcard_pane_g4

0x5773,	// (0x0002bb53) postcard_pane_g5_ParamLimits

0x5773,	// (0x0002bb53) postcard_pane_g5

0x5785,	// (0x0002bb65) postcard_pane_g6_ParamLimits

0x5785,	// (0x0002bb65) postcard_pane_g6

0x573f,	// (0x0002bb1f) postcard_pane_g7_ParamLimits

0x573f,	// (0x0002bb1f) postcard_pane_g7

0x0006,

0xf4e4,	// (0x000358c4) postcard_pane_g_ParamLimits

0xf4e4,	// (0x000358c4) postcard_pane_g

0x579d,	// (0x0002bb7d) main_mp2_pane_g1_ParamLimits

0x579d,	// (0x0002bb7d) main_mp2_pane_g1

0x57ab,	// (0x0002bb8b) main_mp2_pane_g2_ParamLimits

0x57ab,	// (0x0002bb8b) main_mp2_pane_g2

0x57b7,	// (0x0002bb97) main_mp2_pane_g3_ParamLimits

0x57b7,	// (0x0002bb97) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x000358d3) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x000358d3) main_mp2_pane_g

0x57c3,	// (0x0002bba3) main_mp2_pane_t1_ParamLimits

0x57c3,	// (0x0002bba3) main_mp2_pane_t1

0x57da,	// (0x0002bbba) main_mp2_pane_t2_ParamLimits

0x57da,	// (0x0002bbba) main_mp2_pane_t2

0x57ee,	// (0x0002bbce) main_mp2_pane_t3_ParamLimits

0x57ee,	// (0x0002bbce) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x000358da) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x000358da) main_mp2_pane_t

0x5800,	// (0x0002bbe0) pec_content_pane_ParamLimits

0x5800,	// (0x0002bbe0) pec_content_pane

0x38ad,	// (0x00029c8d) scroll_pane_cp015

0x5812,	// (0x0002bbf2) pec_attribute_pane_ParamLimits

0x5812,	// (0x0002bbf2) pec_attribute_pane

0x5822,	// (0x0002bc02) pec_content_pane_g1_ParamLimits

0x5822,	// (0x0002bc02) pec_content_pane_g1

0x582e,	// (0x0002bc0e) pec_content_pane_t1_ParamLimits

0x582e,	// (0x0002bc0e) pec_content_pane_t1

0x5840,	// (0x0002bc20) pec_content_pane_t2_ParamLimits

0x5840,	// (0x0002bc20) pec_content_pane_t2

0x0001,

0xf501,	// (0x000358e1) pec_content_pane_t_ParamLimits

0xf501,	// (0x000358e1) pec_content_pane_t

0x5852,	// (0x0002bc32) list_single_graphic_pane_cp01_ParamLimits

0x5852,	// (0x0002bc32) list_single_graphic_pane_cp01

0x2621,	// (0x00028a01) bg_popup_sub_pane_cp04

0x586c,	// (0x0002bc4c) popup_mup_playback_window_g1

0x5878,	// (0x0002bc58) popup_mup_playback_window_t1

0x588d,	// (0x0002bc6d) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x000358e6) popup_mup_playback_window_t

0x58e2,	// (0x0002bcc2) main_image_pane_g1_ParamLimits

0x58e2,	// (0x0002bcc2) main_image_pane_g1

0x59bf,	// (0x0002bd9f) scroll_pane_cp018_ParamLimits

0x59bf,	// (0x0002bd9f) scroll_pane_cp018

0x59d7,	// (0x0002bdb7) scroll_pane_cp016_ParamLimits

0x59d7,	// (0x0002bdb7) scroll_pane_cp016

0x5a0b,	// (0x0002bdeb) smil2_image_pane_ParamLimits

0x5a0b,	// (0x0002bdeb) smil2_image_pane

0x5a41,	// (0x0002be21) smil2_root_pane_ParamLimits

0x5a41,	// (0x0002be21) smil2_root_pane

0x5a79,	// (0x0002be59) smil2_text_pane_ParamLimits

0x5a79,	// (0x0002be59) smil2_text_pane

0x23c6,	// (0x000287a6) bg_list_pane_cp06

0x5b11,	// (0x0002bef1) grid_radio_pane

0x23c6,	// (0x000287a6) bg_popup_window_pane_cp06

0x5b1b,	// (0x0002befb) main_fmradio_pane_t1

0x48c5,	// (0x0002aca5) heading_pane_cp04

0x5b29,	// (0x0002bf09) main_fmradio_pane_t2

0xbcbe,	// (0x0003209e) popup_cale_lunar_info_window_g1

0x5b37,	// (0x0002bf17) main_fmradio_pane_t3

0xbcc6,	// (0x000320a6) popup_cale_lunar_info_window_g2

0x5b47,	// (0x0002bf27) main_fmradio_pane_t4

0x0001,

0x5b55,	// (0x0002bf35) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x000359c1) popup_cale_lunar_info_window_g

0xf51b,	// (0x000358fb) main_fmradio_pane_t

0x5b63,	// (0x0002bf43) wait_bar_pane_cp03

0x5b6b,	// (0x0002bf4b) cell_fmradio_pane_ParamLimits

0x5b6b,	// (0x0002bf4b) cell_fmradio_pane

0x573f,	// (0x0002bb1f) cell_fmradio_pane_g1_ParamLimits

0x573f,	// (0x0002bb1f) cell_fmradio_pane_g1

0x23c6,	// (0x000287a6) grid_highlight_pane_cp011

0x5b80,	// (0x0002bf60) poc_content_pane_ParamLimits

0x5b80,	// (0x0002bf60) poc_content_pane

0x5b92,	// (0x0002bf72) scroll_pane_cp019

0x5b9a,	// (0x0002bf7a) popup_call_poc_act_window_ParamLimits

0x5b9a,	// (0x0002bf7a) popup_call_poc_act_window

0x5bbe,	// (0x0002bf9e) popup_call_poc_inact_window_ParamLimits

0x5bbe,	// (0x0002bf9e) popup_call_poc_inact_window

0xf5b8,	// (0x00035998) bg_popup_call_poc_act_pane_g

0xbc36,	// (0x00032016) bg_popup_call_poc_inact_pane_g1

0xbc3e,	// (0x0003201e) bg_popup_call_poc_inact_pane_g2

0x5bd7,	// (0x0002bfb7) popup_call_poc_act_window_g2

0xbc46,	// (0x00032026) bg_popup_call_poc_inact_pane_g3

0xbc4e,	// (0x0003202e) bg_popup_call_poc_inact_pane_g4

0xbc56,	// (0x00032036) bg_popup_call_poc_inact_pane_g5

0x5bdf,	// (0x0002bfbf) popup_call_poc_act_window_t1_ParamLimits

0x5bdf,	// (0x0002bfbf) popup_call_poc_act_window_t1

0x5c07,	// (0x0002bfe7) popup_call_poc_act_window_t2_ParamLimits

0x5c07,	// (0x0002bfe7) popup_call_poc_act_window_t2

0x5c2f,	// (0x0002c00f) popup_call_poc_act_window_t3_ParamLimits

0x5c2f,	// (0x0002c00f) popup_call_poc_act_window_t3

0x5c57,	// (0x0002c037) popup_call_poc_act_window_t4_ParamLimits

0x5c57,	// (0x0002c037) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00035906) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00035906) popup_call_poc_act_window_t

0xbc5e,	// (0x0003203e) bg_popup_call_poc_inact_pane_g6

0xbc66,	// (0x00032046) bg_popup_call_poc_inact_pane_g7

0xbc6e,	// (0x0003204e) bg_popup_call_poc_inact_pane_g8

0x5c69,	// (0x0002c049) popup_call_poc_inact_window_g2

0xbc76,	// (0x00032056) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00035985) bg_popup_call_poc_inact_pane_g

0x5c71,	// (0x0002c051) popup_call_poc_inact_window_t1_ParamLimits

0x5c71,	// (0x0002c051) popup_call_poc_inact_window_t1

0x5c86,	// (0x0002c066) popup_call_poc_inact_window_t2_ParamLimits

0x5c86,	// (0x0002c066) popup_call_poc_inact_window_t2

0x5c9b,	// (0x0002c07b) popup_call_poc_inact_window_t3_ParamLimits

0x5c9b,	// (0x0002c07b) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0003590f) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0003590f) popup_call_poc_inact_window_t

0xbe36,	// (0x00032216) context_pane_ParamLimits

0x69df,	// (0x0002cdbf) signal_pane_ParamLimits

0x4ec1,	// (0x0002b2a1) main_call2_pane

0xbe24,	// (0x00032204) popup_phob_thumbnail2_window_ParamLimits

0xbe24,	// (0x00032204) popup_phob_thumbnail2_window

0xb287,	// (0x00031667) aid_hotspot_pointer_arrow_pane

0xb28f,	// (0x0003166f) aid_hotspot_pointer_hand_pane

0x649f,	// (0x0002c87f) phob_pre_status_pane_g5

0x2ef0,	// (0x000292d0) cams_zoom_pane_ParamLimits

0x2eff,	// (0x000292df) image_vga_pane_ParamLimits

0x2f19,	// (0x000292f9) main_camera_pane_g1_ParamLimits

0x2f2b,	// (0x0002930b) main_camera_pane_g2_ParamLimits

0x2f3b,	// (0x0002931b) main_camera_pane_g3_ParamLimits

0x2f4f,	// (0x0002932f) main_camera_pane_g4_ParamLimits

0x2f63,	// (0x00029343) main_camera_pane_g5_ParamLimits

0x2f77,	// (0x00029357) main_camera_pane_g6_ParamLimits

0x2f8b,	// (0x0002936b) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0003560e) main_camera_pane_g_ParamLimits

0x2fab,	// (0x0002938b) main_camera_pane_t1_ParamLimits

0x2fc1,	// (0x000293a1) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0003561f) main_camera_pane_t_ParamLimits

0x2621,	// (0x00028a01) bg_popup_preview_window_pane_cp01_ParamLimits

0x2621,	// (0x00028a01) bg_popup_preview_window_pane_cp01

0x5cb0,	// (0x0002c090) popup_phob_thumbnail2_window_g1_ParamLimits

0x5cb0,	// (0x0002c090) popup_phob_thumbnail2_window_g1

0x23c6,	// (0x000287a6) call2_cli_visual_pane

0x5cd7,	// (0x0002c0b7) popup_call2_audio_conf_window_ParamLimits

0x5cd7,	// (0x0002c0b7) popup_call2_audio_conf_window

0x5cff,	// (0x0002c0df) popup_call2_audio_first_window_ParamLimits

0x5cff,	// (0x0002c0df) popup_call2_audio_first_window

0x5d95,	// (0x0002c175) popup_call2_audio_in_window_ParamLimits

0x5d95,	// (0x0002c175) popup_call2_audio_in_window

0x5de1,	// (0x0002c1c1) popup_call2_audio_out_window_ParamLimits

0x5de1,	// (0x0002c1c1) popup_call2_audio_out_window

0x5e53,	// (0x0002c233) popup_call2_audio_second_window_ParamLimits

0x5e53,	// (0x0002c233) popup_call2_audio_second_window

0x5eb9,	// (0x0002c299) popup_call2_audio_wait_window_ParamLimits

0x5eb9,	// (0x0002c299) popup_call2_audio_wait_window

0x23c6,	// (0x000287a6) bg_popup_call2_act_pane_cp03

0x2603,	// (0x000289e3) list_conf_pane_cp

0x5ef3,	// (0x0002c2d3) popup_call2_audio_conf_window_t1

0x5f01,	// (0x0002c2e1) list_single_graphic_popup_conf2_pane_ParamLimits

0x5f01,	// (0x0002c2e1) list_single_graphic_popup_conf2_pane

0x4958,	// (0x0002ad38) list_highlight_pane_cp04

0x5f14,	// (0x0002c2f4) list_single_graphic_popup_conf2_pane_g1

0x4969,	// (0x0002ad49) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00035916) list_single_graphic_popup_conf2_pane_g

0x5f1e,	// (0x0002c2fe) list_single_graphic_popup_conf2_pane_t1

0x5f2c,	// (0x0002c30c) bg_popup_call2_act_pane_cp01_ParamLimits

0x5f2c,	// (0x0002c30c) bg_popup_call2_act_pane_cp01

0x5fb6,	// (0x0002c396) call_type_pane_cp05_ParamLimits

0x5fb6,	// (0x0002c396) call_type_pane_cp05

0x600a,	// (0x0002c3ea) popup_call2_audio_second_window_g1_ParamLimits

0x600a,	// (0x0002c3ea) popup_call2_audio_second_window_g1

0x605e,	// (0x0002c43e) popup_call2_audio_second_window_g2_ParamLimits

0x605e,	// (0x0002c43e) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0003591b) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0003591b) popup_call2_audio_second_window_g

0x60c3,	// (0x0002c4a3) popup_call2_audio_second_window_t1_ParamLimits

0x60c3,	// (0x0002c4a3) popup_call2_audio_second_window_t1

0x617e,	// (0x0002c55e) popup_call2_audio_second_window_t2_ParamLimits

0x617e,	// (0x0002c55e) popup_call2_audio_second_window_t2

0x61d1,	// (0x0002c5b1) popup_call2_audio_second_window_t3_ParamLimits

0x61d1,	// (0x0002c5b1) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00035922) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00035922) popup_call2_audio_second_window_t

0x23c6,	// (0x000287a6) bg_popup_call2_in_pane_cp02

0x23d0,	// (0x000287b0) call_type_pane_cp04

0x23d8,	// (0x000287b8) popup_call2_audio_wait_window_g1

0x23e0,	// (0x000287c0) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000354fb) popup_call2_audio_wait_window_g

0x23e8,	// (0x000287c8) popup_call2_audio_wait_window_t3

0x62c4,	// (0x0002c6a4) bg_popup_call2_act_pane_ParamLimits

0x62c4,	// (0x0002c6a4) bg_popup_call2_act_pane

0xb2c9,	// (0x000316a9) call_type_pane_cp03_ParamLimits

0xb2c9,	// (0x000316a9) call_type_pane_cp03

0xb32d,	// (0x0003170d) popup_call2_audio_first_window_g1_ParamLimits

0xb32d,	// (0x0003170d) popup_call2_audio_first_window_g1

0xb39d,	// (0x0003177d) popup_call2_audio_first_window_g2_ParamLimits

0xb39d,	// (0x0003177d) popup_call2_audio_first_window_g2

0x51c7,	// (0x0002b5a7) popup_call2_audio_first_window_g3_ParamLimits

0x51c7,	// (0x0002b5a7) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0003592b) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0003592b) popup_call2_audio_first_window_g

0xb47b,	// (0x0003185b) popup_call2_audio_first_window_t1_ParamLimits

0xb47b,	// (0x0003185b) popup_call2_audio_first_window_t1

0xb57e,	// (0x0003195e) popup_call2_audio_first_window_t4_ParamLimits

0xb57e,	// (0x0003195e) popup_call2_audio_first_window_t4

0xb661,	// (0x00031a41) popup_call2_audio_first_window_t5_ParamLimits

0xb661,	// (0x00031a41) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00035936) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00035936) popup_call2_audio_first_window_t

0x2619,	// (0x000289f9) bg_popup_call2_act_pane_g1

0xbcd0,	// (0x000320b0) popup_cale_lunar_info_window_t1

0xbcde,	// (0x000320be) popup_cale_lunar_info_window_t2

0xbcec,	// (0x000320cc) popup_cale_lunar_info_window_t3

0x23c6,	// (0x000287a6) bg_popup_call2_bubble_pane

0xb762,	// (0x00031b42) bg_popup_call2_in_pane_cp01_ParamLimits

0xb762,	// (0x00031b42) bg_popup_call2_in_pane_cp01

0x207e,	// (0x0002845e) call_type_pane_cp02

0xb7aa,	// (0x00031b8a) popup_call2_audio_out_window_g1_ParamLimits

0xb7aa,	// (0x00031b8a) popup_call2_audio_out_window_g1

0xb7d6,	// (0x00031bb6) popup_call2_audio_out_window_g2_ParamLimits

0xb7d6,	// (0x00031bb6) popup_call2_audio_out_window_g2

0xb7fe,	// (0x00031bde) popup_call2_audio_out_window_g3_ParamLimits

0xb7fe,	// (0x00031bde) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0003593f) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0003593f) popup_call2_audio_out_window_g

0xb839,	// (0x00031c19) popup_call2_audio_out_window_t1_ParamLimits

0xb839,	// (0x00031c19) popup_call2_audio_out_window_t1

0xb898,	// (0x00031c78) popup_call2_audio_out_window_t2_ParamLimits

0xb898,	// (0x00031c78) popup_call2_audio_out_window_t2

0xb8ec,	// (0x00031ccc) popup_call2_audio_out_window_t3_ParamLimits

0xb8ec,	// (0x00031ccc) popup_call2_audio_out_window_t3

0xb902,	// (0x00031ce2) popup_call2_audio_out_window_t4_ParamLimits

0xb902,	// (0x00031ce2) popup_call2_audio_out_window_t4

0xb918,	// (0x00031cf8) popup_call2_audio_out_window_t5_ParamLimits

0xb918,	// (0x00031cf8) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00035948) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00035948) popup_call2_audio_out_window_t

0xb97c,	// (0x00031d5c) bg_popup_call2_in_pane_ParamLimits

0xb97c,	// (0x00031d5c) bg_popup_call2_in_pane

0xb9d8,	// (0x00031db8) popup_call2_audio_in_window_g1_ParamLimits

0xb9d8,	// (0x00031db8) popup_call2_audio_in_window_g1

0xba10,	// (0x00031df0) popup_call2_audio_in_window_g2_ParamLimits

0xba10,	// (0x00031df0) popup_call2_audio_in_window_g2

0xba48,	// (0x00031e28) popup_call2_audio_in_window_g3_ParamLimits

0xba48,	// (0x00031e28) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00035955) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00035955) popup_call2_audio_in_window_g

0xbaa0,	// (0x00031e80) popup_call2_audio_in_window_t1_ParamLimits

0xbaa0,	// (0x00031e80) popup_call2_audio_in_window_t1

0xbb20,	// (0x00031f00) popup_call2_audio_in_window_t2_ParamLimits

0xbb20,	// (0x00031f00) popup_call2_audio_in_window_t2

0xbba0,	// (0x00031f80) popup_call2_audio_in_window_t3_ParamLimits

0xbba0,	// (0x00031f80) popup_call2_audio_in_window_t3

0xbbba,	// (0x00031f9a) popup_call2_audio_in_window_t4_ParamLimits

0xbbba,	// (0x00031f9a) popup_call2_audio_in_window_t4

0xbbcc,	// (0x00031fac) popup_call2_audio_in_window_t5_ParamLimits

0xbbcc,	// (0x00031fac) popup_call2_audio_in_window_t5

0xbbe1,	// (0x00031fc1) popup_call2_audio_in_window_t6_ParamLimits

0xbbe1,	// (0x00031fc1) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0003595e) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0003595e) popup_call2_audio_in_window_t

0x2619,	// (0x000289f9) bg_popup_call2_in_pane_g1

0xbcfa,	// (0x000320da) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x000359c6) popup_cale_lunar_info_window_t

0x2621,	// (0x00028a01) bg_popup_call2_rect_pane_ParamLimits

0x2621,	// (0x00028a01) bg_popup_call2_rect_pane

0x23c6,	// (0x000287a6) call2_cli_visual_graphic_pane

0x23c6,	// (0x000287a6) call2_cli_visual_text_pane

0xbee9,	// (0x000322c9) smil_status_volume_pane_g3

0x0002,

0x29a8,	// (0x00028d88) call2_cli_visual_graphic_pane_g1

0x29a8,	// (0x00028d88) call2_cli_visual_graphic_pane_g2

0x29a8,	// (0x00028d88) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0003596b) call2_cli_visual_graphic_pane_g

0xbbf6,	// (0x00031fd6) bg_popup_call2_rect_pane_g1

0x2ac0,	// (0x00028ea0) bg_popup_call2_rect_pane_g2

0xbbfe,	// (0x00031fde) bg_popup_call2_rect_pane_g3

0xbc06,	// (0x00031fe6) bg_popup_call2_rect_pane_g4

0xbc0e,	// (0x00031fee) bg_popup_call2_rect_pane_g5

0xbc16,	// (0x00031ff6) bg_popup_call2_rect_pane_g6

0xbc1e,	// (0x00031ffe) bg_popup_call2_rect_pane_g7

0xbc26,	// (0x00032006) bg_popup_call2_rect_pane_g8

0xbc2e,	// (0x0003200e) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00035972) bg_popup_call2_rect_pane_g

0xbc36,	// (0x00032016) bg_popup_call2_bubble_pane_g1

0xbc3e,	// (0x0003201e) bg_popup_call2_bubble_pane_g2

0xbc46,	// (0x00032026) bg_popup_call2_bubble_pane_g3

0xbc4e,	// (0x0003202e) bg_popup_call2_bubble_pane_g4

0xbc56,	// (0x00032036) bg_popup_call2_bubble_pane_g5

0xbc5e,	// (0x0003203e) bg_popup_call2_bubble_pane_g6

0xbc66,	// (0x00032046) bg_popup_call2_bubble_pane_g7

0xbc6e,	// (0x0003204e) bg_popup_call2_bubble_pane_g8

0xbc76,	// (0x00032056) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00035985) bg_popup_call2_bubble_pane_g

0x2b47,	// (0x00028f27) aid_cale_week_size_cell_pane

0x2fdb,	// (0x000293bb) aid_cams_cif_uncrop_pane_ParamLimits

0x2fdb,	// (0x000293bb) aid_cams_cif_uncrop_pane

0x31d2,	// (0x000295b2) aid_cams_size_cell_ParamLimits

0x31d2,	// (0x000295b2) aid_cams_size_cell

0x31e6,	// (0x000295c6) grid_cams_pane_ParamLimits

0x3200,	// (0x000295e0) linegrid_cams_pane_ParamLimits

0x3442,	// (0x00029822) call_video_pane_t1

0x345c,	// (0x0002983c) call_video_pane_t2

0x0001,

0xf292,	// (0x00035672) call_video_pane_t

0x3b0d,	// (0x00029eed) aid_cale_month_size_cell_pane_ParamLimits

0x3b0d,	// (0x00029eed) aid_cale_month_size_cell_pane

0xf62f,	// (0x00035a0f) smil_status_volume_pane_g

0xbef6,	// (0x000322d6) volume_smil_pane_ParamLimits

0x1c91,	// (0x00028071) aid_popup2_width_pane

0x2a19,	// (0x00028df9) cell_qdial_pane_g4_ParamLimits

0x2a19,	// (0x00028df9) cell_qdial_pane_g4

0x4c4d,	// (0x0002b02d) aid_blid_cardinal_pane_ParamLimits

0x4c5d,	// (0x0002b03d) aid_blid_destination_pane_ParamLimits

0x4c5d,	// (0x0002b03d) aid_blid_destination_pane

0x2621,	// (0x00028a01) bg_popup_call_poc_act_pane_ParamLimits

0x2621,	// (0x00028a01) bg_popup_call_poc_act_pane

0x2621,	// (0x00028a01) bg_popup_call_poc_inact_pane_ParamLimits

0x2621,	// (0x00028a01) bg_popup_call_poc_inact_pane

0xbc7e,	// (0x0003205e) bg_popup_call_poc_act_pane_g1

0xbc86,	// (0x00032066) bg_popup_call_poc_act_pane_g2

0xbc8e,	// (0x0003206e) bg_popup_call_poc_act_pane_g3

0xbc4e,	// (0x0003202e) bg_popup_call_poc_act_pane_g4

0xbc56,	// (0x00032036) bg_popup_call_poc_act_pane_g5

0xbc96,	// (0x00032076) bg_popup_call_poc_act_pane_g6

0xbc66,	// (0x00032046) bg_popup_call_poc_act_pane_g7

0xbc9e,	// (0x0003207e) bg_popup_call_poc_act_pane_g8

0x23c6,	// (0x000287a6) main_usb_pane

0xbdfb,	// (0x000321db) popup_cale_lunar_info_window

0x3789,	// (0x00029b69) im_reading_pane_t1_ParamLimits

0x37c8,	// (0x00029ba8) list_im_pane_ParamLimits

0x37d9,	// (0x00029bb9) scroll_pane_cp07_ParamLimits

0x23c6,	// (0x000287a6) grid_highlight_pane_cp012

0x2621,	// (0x00028a01) mup_scale_pane_ParamLimits

0x573f,	// (0x0002bb1f) main_usb_pane_g1_ParamLimits

0x573f,	// (0x0002bb1f) main_usb_pane_g1

0x63ab,	// (0x0002c78b) main_usb_pane_g2_ParamLimits

0x63ab,	// (0x0002c78b) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x000359af) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x000359af) main_usb_pane_g

0x63c1,	// (0x0002c7a1) main_usb_pane_t1_ParamLimits

0x63c1,	// (0x0002c7a1) main_usb_pane_t1

0x63d3,	// (0x0002c7b3) main_usb_pane_t2_ParamLimits

0x63d3,	// (0x0002c7b3) main_usb_pane_t2

0x63e5,	// (0x0002c7c5) main_usb_pane_t3_ParamLimits

0x63e5,	// (0x0002c7c5) main_usb_pane_t3

0x63f7,	// (0x0002c7d7) main_usb_pane_t4_ParamLimits

0x63f7,	// (0x0002c7d7) main_usb_pane_t4

0x640c,	// (0x0002c7ec) main_usb_pane_t5_ParamLimits

0x640c,	// (0x0002c7ec) main_usb_pane_t5

0x6421,	// (0x0002c801) main_usb_pane_t6_ParamLimits

0x6421,	// (0x0002c801) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x000359b4) main_usb_pane_t_ParamLimits

0x4bec,	// (0x0002afcc) aid_text_placing

0x4bf7,	// (0x0002afd7) main_location2_pane_t1_ParamLimits

0x4c0d,	// (0x0002afed) main_location2_pane_t2_ParamLimits

0x4c23,	// (0x0002b003) main_location2_pane_t3_ParamLimits

0x4c39,	// (0x0002b019) main_location2_pane_t4_ParamLimits

0x4c39,	// (0x0002b019) main_location2_pane_t4

0xf3f3,	// (0x000357d3) main_location2_pane_t_ParamLimits

0x26fd,	// (0x00028add) find_pinb_pane_g2_ParamLimits

0x26fd,	// (0x00028add) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00035521) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00035521) find_pinb_pane_g

0x2709,	// (0x00028ae9) find_pinb_pane_t1_ParamLimits

0x271b,	// (0x00028afb) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00035526) find_pinb_pane_t_ParamLimits

0x23c6,	// (0x000287a6) main_call3_pane

0x3eb6,	// (0x0002a296) cale_month_day_heading_pane_t1_ParamLimits

0x3f14,	// (0x0002a2f4) cale_month_day_heading_pane_t2_ParamLimits

0x3f79,	// (0x0002a359) cale_month_day_heading_pane_t3_ParamLimits

0x3fde,	// (0x0002a3be) cale_month_day_heading_pane_t4_ParamLimits

0x4043,	// (0x0002a423) cale_month_day_heading_pane_t5_ParamLimits

0x40a8,	// (0x0002a488) cale_month_day_heading_pane_t6_ParamLimits

0x410d,	// (0x0002a4ed) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x000356aa) cale_month_day_heading_pane_t_ParamLimits

0x4309,	// (0x0002a6e9) smil_status_volume_pane

0x5713,	// (0x0002baf3) postcard_address_pane_ParamLimits

0x5713,	// (0x0002baf3) postcard_address_pane

0x5729,	// (0x0002bb09) postcard_message_pane_ParamLimits

0x5729,	// (0x0002bb09) postcard_message_pane

0x6384,	// (0x0002c764) call2_cli_visual_pane_t1_ParamLimits

0x6384,	// (0x0002c764) call2_cli_visual_pane_t1

0x6bf0,	// (0x0002cfd0) postcard_message_pane_t1_ParamLimits

0x6bf0,	// (0x0002cfd0) postcard_message_pane_t1

0xbf0b,	// (0x000322eb) postcard_address_pane_t1_ParamLimits

0xbf0b,	// (0x000322eb) postcard_address_pane_t1

0x6bdc,	// (0x0002cfbc) popup_call3_audio_in_window_ParamLimits

0x6bdc,	// (0x0002cfbc) popup_call3_audio_in_window

0x6a61,	// (0x0002ce41) bg_popup_call3_in_pane_ParamLimits

0x6a61,	// (0x0002ce41) bg_popup_call3_in_pane

0x6add,	// (0x0002cebd) popup_call3_audio_in_window_g1_ParamLimits

0x6add,	// (0x0002cebd) popup_call3_audio_in_window_g1

0x6afd,	// (0x0002cedd) popup_call3_audio_in_window_g2_ParamLimits

0x6afd,	// (0x0002cedd) popup_call3_audio_in_window_g2

0x6b1d,	// (0x0002cefd) popup_call3_audio_in_window_g3_ParamLimits

0x6b1d,	// (0x0002cefd) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00035a16) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00035a16) popup_call3_audio_in_window_g

0x6b4e,	// (0x0002cf2e) popup_call3_audio_in_window_t1_ParamLimits

0x6b4e,	// (0x0002cf2e) popup_call3_audio_in_window_t1

0x6b8c,	// (0x0002cf6c) popup_call3_audio_in_window_t2_ParamLimits

0x6b8c,	// (0x0002cf6c) popup_call3_audio_in_window_t2

0x6bca,	// (0x0002cfaa) popup_call3_audio_in_window_t3_ParamLimits

0x6bca,	// (0x0002cfaa) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00035a1f) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00035a1f) popup_call3_audio_in_window_t

0x4ec1,	// (0x0002b2a1) bg_popup_call3_rect_pane

0xbbf6,	// (0x00031fd6) bg_popup_call3_rect_pane_g1

0x2ac0,	// (0x00028ea0) bg_popup_call3_rect_pane_g2

0xbbfe,	// (0x00031fde) bg_popup_call3_rect_pane_g3

0xbc06,	// (0x00031fe6) bg_popup_call3_rect_pane_g4

0xbc0e,	// (0x00031fee) bg_popup_call3_rect_pane_g5

0xbc16,	// (0x00031ff6) bg_popup_call3_rect_pane_g6

0xbc1e,	// (0x00031ffe) bg_popup_call3_rect_pane_g7

0x51bf,	// (0x0002b59f) mup_visualizer_osc_pane

0x51d5,	// (0x0002b5b5) mup_visualizer_spec_pane

0x6a91,	// (0x0002ce71) call3_video_qcif_pane_ParamLimits

0x6a91,	// (0x0002ce71) call3_video_qcif_pane

0x6aa4,	// (0x0002ce84) call3_video_qcif_uncrop_pane_ParamLimits

0x6aa4,	// (0x0002ce84) call3_video_qcif_uncrop_pane

0x6ab4,	// (0x0002ce94) call3_video_subqcif_pane_ParamLimits

0x6ab4,	// (0x0002ce94) call3_video_subqcif_pane

0x6aca,	// (0x0002ceaa) call3_video_subqcif_uncrop_pane_ParamLimits

0x6aca,	// (0x0002ceaa) call3_video_subqcif_uncrop_pane

0x6b3d,	// (0x0002cf1d) popup_call3_audio_in_window_g4_ParamLimits

0x6b3d,	// (0x0002cf1d) popup_call3_audio_in_window_g4

0x6a50,	// (0x0002ce30) mup_spec_half_pane

0x6a59,	// (0x0002ce39) mup_spec_half_pane_cp

0xbea9,	// (0x00032289) mup_osc_middle_pane

0xbeb2,	// (0x00032292) mup_visualizer_osc_pane_g1

0x6a30,	// (0x0002ce10) mup_spec_bar_pane_ParamLimits

0x6a30,	// (0x0002ce10) mup_spec_bar_pane

0xbe96,	// (0x00032276) mup_spec_bar_pane_g1

0xbea0,	// (0x00032280) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00035a0a) mup_spec_bar_pane_g

0x2b47,	// (0x00028f27) aid_cale_week_size_cell_pane_ParamLimits

0x2b5a,	// (0x00028f3a) bg_cale_heading_pane_ParamLimits

0x2b76,	// (0x00028f56) bg_cale_pane_cp01_ParamLimits

0x2b8f,	// (0x00028f6f) cale_week_corner_pane_ParamLimits

0x2ba5,	// (0x00028f85) cale_week_day_heading_pane_ParamLimits

0x2bc1,	// (0x00028fa1) cale_week_scroll_pane_g1_ParamLimits

0x2bda,	// (0x00028fba) cale_week_scroll_pane_g2_ParamLimits

0x2beb,	// (0x00028fcb) cale_week_scroll_pane_g3_ParamLimits

0x2bfc,	// (0x00028fdc) cale_week_scroll_pane_g4_ParamLimits

0x2c0d,	// (0x00028fed) cale_week_scroll_pane_g5_ParamLimits

0x2c1e,	// (0x00028ffe) cale_week_scroll_pane_g6_ParamLimits

0x2c2f,	// (0x0002900f) cale_week_scroll_pane_g7_ParamLimits

0x2c40,	// (0x00029020) cale_week_scroll_pane_g8_ParamLimits

0x2c51,	// (0x00029031) cale_week_scroll_pane_g9_ParamLimits

0x2c62,	// (0x00029042) cale_week_scroll_pane_g10_ParamLimits

0x2c73,	// (0x00029053) cale_week_scroll_pane_g11_ParamLimits

0x2c84,	// (0x00029064) cale_week_scroll_pane_g12_ParamLimits

0x2c95,	// (0x00029075) cale_week_scroll_pane_g13_ParamLimits

0x2cae,	// (0x0002908e) cale_week_scroll_pane_g14_ParamLimits

0x2cc7,	// (0x000290a7) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x000355b2) cale_week_scroll_pane_g_ParamLimits

0x2ce0,	// (0x000290c0) cale_week_time_pane_ParamLimits

0x2cf1,	// (0x000290d1) grid_cale_week_pane_ParamLimits

0x2d0c,	// (0x000290ec) listscroll_cale_week_pane_t1

0x2d1e,	// (0x000290fe) scroll_pane_cp08_ParamLimits

0x3b81,	// (0x00029f61) cale_month_corner_pane_ParamLimits

0x3e65,	// (0x0002a245) cale_month_pane_t1

0x3e77,	// (0x0002a257) cale_month_week_pane_ParamLimits

0x4824,	// (0x0002ac04) popup_call_status_window_g1_ParamLimits

0x4838,	// (0x0002ac18) popup_call_status_window_g2_ParamLimits

0x484c,	// (0x0002ac2c) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0003575a) popup_call_status_window_g_ParamLimits

0x48b5,	// (0x0002ac95) aid_call2_pane

0x5553,	// (0x0002b933) msg_header_pane_g1

0x5713,	// (0x0002baf3) postcard_address2_pane_ParamLimits

0x5713,	// (0x0002baf3) postcard_address2_pane

0x5729,	// (0x0002bb09) postcard_message2_pane_ParamLimits

0x5729,	// (0x0002bb09) postcard_message2_pane

0x69ed,	// (0x0002cdcd) message2_row_pane_ParamLimits

0x69ed,	// (0x0002cdcd) message2_row_pane

0xbe51,	// (0x00032231) address2_row_pane_ParamLimits

0xbe51,	// (0x00032231) address2_row_pane

0xbe64,	// (0x00032244) postcard_message2_row_pane_g1

0xbe6c,	// (0x0003224c) postcard_message2_row_pane_t1

0xbe64,	// (0x00032244) address2_row_pane_g1

0xbe6c,	// (0x0003224c) address2_row_pane_t1

0x0c89,	// (0x00027069) aid_size_cell_vorec

0x23c6,	// (0x000287a6) main_rss_pane

0x6a10,	// (0x0002cdf0) rss_list_single_pane_ParamLimits

0x6a10,	// (0x0002cdf0) rss_list_single_pane

0xbe7a,	// (0x0003225a) rss_list_single_pane_t1

0xbe88,	// (0x00032268) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00035a05) rss_list_single_pane_t

0x23c6,	// (0x000287a6) main_camera2_pane

0x23c6,	// (0x000287a6) main_video2_pane

0x0d43,	// (0x00027123) cams_zoom_pane_cp2_ParamLimits

0x0d43,	// (0x00027123) cams_zoom_pane_cp2

0x0d5a,	// (0x0002713a) image2_vga_pane_ParamLimits

0x0d5a,	// (0x0002713a) image2_vga_pane

0x0da2,	// (0x00027182) main_camera2_pane_g1_ParamLimits

0x0da2,	// (0x00027182) main_camera2_pane_g1

0x0dc2,	// (0x000271a2) main_camera2_pane_g2_ParamLimits

0x0dc2,	// (0x000271a2) main_camera2_pane_g2

0x0dd9,	// (0x000271b9) main_camera2_pane_g3_ParamLimits

0x0dd9,	// (0x000271b9) main_camera2_pane_g3

0x0df0,	// (0x000271d0) main_camera2_pane_g4_ParamLimits

0x0df0,	// (0x000271d0) main_camera2_pane_g4

0x0e07,	// (0x000271e7) main_camera2_pane_g5_ParamLimits

0x0e07,	// (0x000271e7) main_camera2_pane_g5

0x0e1e,	// (0x000271fe) main_camera2_pane_g6_ParamLimits

0x0e1e,	// (0x000271fe) main_camera2_pane_g6

0x0e35,	// (0x00027215) main_camera2_pane_g7_ParamLimits

0x0e35,	// (0x00027215) main_camera2_pane_g7

0x0e4c,	// (0x0002722c) main_camera2_pane_g8_ParamLimits

0x0e4c,	// (0x0002722c) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00035a26) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00035a26) main_camera2_pane_g

0x0e7a,	// (0x0002725a) main_camera2_pane_t1_ParamLimits

0x0e7a,	// (0x0002725a) main_camera2_pane_t1

0x0eaf,	// (0x0002728f) main_camera2_pane_t2_ParamLimits

0x0eaf,	// (0x0002728f) main_camera2_pane_t2

0x0ecc,	// (0x000272ac) main_camera2_pane_t3_ParamLimits

0x0ecc,	// (0x000272ac) main_camera2_pane_t3

0x0f2a,	// (0x0002730a) main_camera2_pane_t4_ParamLimits

0x0f2a,	// (0x0002730a) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00035a39) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00035a39) main_camera2_pane_t

0x0fb3,	// (0x00027393) cams_zoom_pane_cp4_ParamLimits

0x0fb3,	// (0x00027393) cams_zoom_pane_cp4

0x0fc9,	// (0x000273a9) image2_cif_pane_ParamLimits

0x0fc9,	// (0x000273a9) image2_cif_pane

0x0ff4,	// (0x000273d4) image2_subqcif_pane_ParamLimits

0x0ff4,	// (0x000273d4) image2_subqcif_pane

0x100f,	// (0x000273ef) main_video2_pane_g1_ParamLimits

0x100f,	// (0x000273ef) main_video2_pane_g1

0x1029,	// (0x00027409) main_video2_pane_g2_ParamLimits

0x1029,	// (0x00027409) main_video2_pane_g2

0x103f,	// (0x0002741f) main_video2_pane_g3_ParamLimits

0x103f,	// (0x0002741f) main_video2_pane_g3

0x1055,	// (0x00027435) main_video2_pane_g4_ParamLimits

0x1055,	// (0x00027435) main_video2_pane_g4

0x106b,	// (0x0002744b) main_video2_pane_g5_ParamLimits

0x106b,	// (0x0002744b) main_video2_pane_g5

0x1081,	// (0x00027461) main_video2_pane_g6_ParamLimits

0x1081,	// (0x00027461) main_video2_pane_g6

0x0005,

0xf668,	// (0x00035a48) main_video2_pane_g_ParamLimits

0xf668,	// (0x00035a48) main_video2_pane_g

0x109b,	// (0x0002747b) main_video2_pane_t1_ParamLimits

0x109b,	// (0x0002747b) main_video2_pane_t1

0x10bf,	// (0x0002749f) main_video2_pane_t2_ParamLimits

0x10bf,	// (0x0002749f) main_video2_pane_t2

0x110f,	// (0x000274ef) main_video2_pane_t3_ParamLimits

0x110f,	// (0x000274ef) main_video2_pane_t3

0x0002,

0xf675,	// (0x00035a55) main_video2_pane_t_ParamLimits

0xf675,	// (0x00035a55) main_video2_pane_t

0x64df,	// (0x0002c8bf) call_muted_g2

0x0001,

0xf617,	// (0x000359f7) call_muted_g

0x23c6,	// (0x000287a6) main_mup2_pane

0x6c0b,	// (0x0002cfeb) main_mup2_pane_g1_ParamLimits

0x6c0b,	// (0x0002cfeb) main_mup2_pane_g1

0x6c17,	// (0x0002cff7) main_mup2_pane_g2_ParamLimits

0x6c17,	// (0x0002cff7) main_mup2_pane_g2

0xc02c,	// (0x0003240c) main_mup_pane_g13_cp1

0xc034,	// (0x00032414) mup_volume_pane_cp1

0x6c35,	// (0x0002d015) main_mup2_pane_g4_ParamLimits

0x6c35,	// (0x0002d015) main_mup2_pane_g4

0x6c47,	// (0x0002d027) main_mup2_pane_g5_ParamLimits

0x6c47,	// (0x0002d027) main_mup2_pane_g5

0x6c59,	// (0x0002d039) main_mup2_pane_g6_ParamLimits

0x6c59,	// (0x0002d039) main_mup2_pane_g6

0x6c6b,	// (0x0002d04b) main_mup2_pane_g7_ParamLimits

0x6c6b,	// (0x0002d04b) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00035a5c) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00035a5c) main_mup2_pane_g

0x6c83,	// (0x0002d063) main_mup2_pane_t1_ParamLimits

0x6c83,	// (0x0002d063) main_mup2_pane_t1

0x6c99,	// (0x0002d079) main_mup2_pane_t2_ParamLimits

0x6c99,	// (0x0002d079) main_mup2_pane_t2

0x6caf,	// (0x0002d08f) main_mup2_pane_t3_ParamLimits

0x6caf,	// (0x0002d08f) main_mup2_pane_t3

0x6cc5,	// (0x0002d0a5) main_mup2_pane_t4_ParamLimits

0x6cc5,	// (0x0002d0a5) main_mup2_pane_t4

0x6cdd,	// (0x0002d0bd) main_mup2_pane_t5_ParamLimits

0x6cdd,	// (0x0002d0bd) main_mup2_pane_t5

0x6cf5,	// (0x0002d0d5) main_mup2_pane_t6_ParamLimits

0x6cf5,	// (0x0002d0d5) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00035a6b) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00035a6b) main_mup2_pane_t

0x6d25,	// (0x0002d105) mup2_visualizer_pane_ParamLimits

0x6d25,	// (0x0002d105) mup2_visualizer_pane

0x6d53,	// (0x0002d133) mup_progress_pane_cp_ParamLimits

0x6d53,	// (0x0002d133) mup_progress_pane_cp

0xc00e,	// (0x000323ee) mup_volume_pane_cp_ParamLimits

0xc00e,	// (0x000323ee) mup_volume_pane_cp

0x6d69,	// (0x0002d149) mup2_visualizer_pane_g1_ParamLimits

0x6d69,	// (0x0002d149) mup2_visualizer_pane_g1

0xbf4d,	// (0x0003232d) mup2_visualizer_pane_g2_ParamLimits

0xbf4d,	// (0x0003232d) mup2_visualizer_pane_g2

0x6d7e,	// (0x0002d15e) mup2_visualizer_pane_g3_ParamLimits

0x6d7e,	// (0x0002d15e) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00035a78) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00035a78) mup2_visualizer_pane_g

0x5b09,	// (0x0002bee9) aid_size_cell_fmradio

0x668f,	// (0x0002ca6f) aid_height_parent_landcape

0x3894,	// (0x00029c74) wml_content_pane_cp

0x389c,	// (0x00029c7c) wml_tabs_pane

0x38a5,	// (0x00029c85) popup_wml_miniature_window

0x38ad,	// (0x00029c8d) scroll_pane_cp021

0x38c1,	// (0x00029ca1) wml_content_pane_comp8

0x23c6,	// (0x000287a6) bg_popup_sub_pane_cp05

0xbf6b,	// (0x0003234b) popup_wml_miniature_window_g1

0xbf73,	// (0x00032353) wml_miniature_view_pane

0x6d8a,	// (0x0002d16a) aid_size_wml_view

0x6d92,	// (0x0002d172) wml_miniature_view_pane_g1

0x6d9b,	// (0x0002d17b) wml_miniature_view_pane_g2

0x6da4,	// (0x0002d184) wml_miniature_view_pane_g3

0x6dac,	// (0x0002d18c) wml_miniature_view_pane_g4

0x6db4,	// (0x0002d194) wml_miniature_view_pane_g5

0x6dbc,	// (0x0002d19c) wml_miniature_view_pane_g6

0x6dc4,	// (0x0002d1a4) wml_miniature_view_pane_g7

0x6dcc,	// (0x0002d1ac) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00035a7f) wml_miniature_view_pane_g

0xbf7b,	// (0x0003235b) background_graphic_ParamLimits

0xbf7b,	// (0x0003235b) background_graphic

0xbf87,	// (0x00032367) wml_tabs_2_pane

0xbf90,	// (0x00032370) wml_tabs_3_pane_ParamLimits

0xbf90,	// (0x00032370) wml_tabs_3_pane

0xbfa2,	// (0x00032382) wml_tabs_4_pane_ParamLimits

0xbfa2,	// (0x00032382) wml_tabs_4_pane

0xbfb8,	// (0x00032398) wml_tabs_5_pane_ParamLimits

0xbfb8,	// (0x00032398) wml_tabs_5_pane

0xbfd2,	// (0x000323b2) wml_tabs_pane_g2_ParamLimits

0xbfd2,	// (0x000323b2) wml_tabs_pane_g2

0xbfe6,	// (0x000323c6) wml_tabs_pane_g3_ParamLimits

0xbfe6,	// (0x000323c6) wml_tabs_pane_g3

0x6dd4,	// (0x0002d1b4) wml_tabs_2_active_pane_ParamLimits

0x6dd4,	// (0x0002d1b4) wml_tabs_2_active_pane

0x6de8,	// (0x0002d1c8) wml_tabs_2_passive_pane_ParamLimits

0x6de8,	// (0x0002d1c8) wml_tabs_2_passive_pane

0x6dfc,	// (0x0002d1dc) wml_tabs_3_active_pane_cp_ParamLimits

0x6dfc,	// (0x0002d1dc) wml_tabs_3_active_pane_cp

0x6e11,	// (0x0002d1f1) wml_tabs_3_passive_pane_ParamLimits

0x6e11,	// (0x0002d1f1) wml_tabs_3_passive_pane

0x6e24,	// (0x0002d204) wml_tabs_3_passive_pane_cp_ParamLimits

0x6e24,	// (0x0002d204) wml_tabs_3_passive_pane_cp

0x6e3b,	// (0x0002d21b) tabs_4_active_pane

0x6e43,	// (0x0002d223) tabs_4_passive_pane

0x6e4d,	// (0x0002d22d) tabs_4_passive_pane_cp

0x6e55,	// (0x0002d235) tabs_4_passive_pane_cp2

0x63a3,	// (0x0002c783) aid_height_text

0x5191,	// (0x0002b571) mup_volume_cont_pane_ParamLimits

0x5191,	// (0x0002b571) mup_volume_cont_pane

0x26b7,	// (0x00028a97) aid_size_cell_pinb

0x26c1,	// (0x00028aa1) aid_size_list_pinb

0x6d3f,	// (0x0002d11f) mup2_volume_cont_pane_ParamLimits

0x6d3f,	// (0x0002d11f) mup2_volume_cont_pane

0xbffa,	// (0x000323da) mup2_volume_cont_pane_g1_ParamLimits

0xbffa,	// (0x000323da) mup2_volume_cont_pane_g1

0x1c9d,	// (0x0002807d) aid_size_cell_touch_ParamLimits

0x1c9d,	// (0x0002807d) aid_size_cell_touch

0x1f08,	// (0x000282e8) touch_pane_ParamLimits

0x1f08,	// (0x000282e8) touch_pane

0x1c7f,	// (0x0002805f) main_rss2_pane

0xc03c,	// (0x0003241c) listscroll_rss2_pane

0xc045,	// (0x00032425) rss2_navigation_pane

0xc04d,	// (0x0003242d) list_rss2_pane

0x4a70,	// (0x0002ae50) scroll_pane_cp22

0xc055,	// (0x00032435) rss2_navigation_pane_g1

0xc05e,	// (0x0003243e) rss2_navigation_pane_g2

0xc066,	// (0x00032446) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00035a90) rss2_navigation_pane_g

0xc06e,	// (0x0003244e) rss2_navigation_pane_t1

0x6e5f,	// (0x0002d23f) rss2_list_single_pane_ParamLimits

0x6e5f,	// (0x0002d23f) rss2_list_single_pane

0xc07c,	// (0x0003245c) rss2_list_single_pane_t2

0xc08a,	// (0x0003246a) rss2_list_single_pane_t3_ParamLimits

0xc08a,	// (0x0003246a) rss2_list_single_pane_t3

0xc0a7,	// (0x00032487) rss2_list_single_pane_t4

0x42f1,	// (0x0002a6d1) smil_status_pane_g1

0x1efa,	// (0x000282da) main_image2_pane_ParamLimits

0x1efa,	// (0x000282da) main_image2_pane

0x0e63,	// (0x00027243) main_camera2_pane_g9_ParamLimits

0x0e63,	// (0x00027243) main_camera2_pane_g9

0x0f7f,	// (0x0002735f) main_camera2_pane_t5_ParamLimits

0x0f7f,	// (0x0002735f) main_camera2_pane_t5

0xbf22,	// (0x00032302) main_camera2_pane_t6_ParamLimits

0xbf22,	// (0x00032302) main_camera2_pane_t6

0x6e79,	// (0x0002d259) main_image2_pane_g1_ParamLimits

0x6e79,	// (0x0002d259) main_image2_pane_g1

0x5ab3,	// (0x0002be93) smil2_video_pane_ParamLimits

0x5ab3,	// (0x0002be93) smil2_video_pane

0x1ccd,	// (0x000280ad) aid_zoom_text_primary_cp

0x1eb6,	// (0x00028296) popup_preview_fixed_window

0x3781,	// (0x00029b61) im_reading_pane_g1

0x0d35,	// (0x00027115) cams2_bc_adjust_pane_cp_ParamLimits

0x0d35,	// (0x00027115) cams2_bc_adjust_pane_cp

0x0fa5,	// (0x00027385) cams2_bc_adjust_pane_ParamLimits

0x0fa5,	// (0x00027385) cams2_bc_adjust_pane

0xc0b5,	// (0x00032495) cams2_bc_adjust_pane_g1

0xc0bd,	// (0x0003249d) cams2_slider_pane

0xc0c6,	// (0x000324a6) cams2_slider_pane_g1

0xc0cf,	// (0x000324af) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00035a97) cams2_slider_pane_g

0x0a9f,	// (0x00026e7f) calc_display_pane_ParamLimits

0x0ac5,	// (0x00026ea5) calc_paper_pane_ParamLimits

0x0ae8,	// (0x00026ec8) grid_calc_pane_ParamLimits

0xb258,	// (0x00031638) popup_clock_digital_window_t1_ParamLimits

0x5930,	// (0x0002bd10) main_image_pane_t1

0x0a81,	// (0x00026e61) aid_size_cell_calc_ParamLimits

0x0a81,	// (0x00026e61) aid_size_cell_calc

0x66d5,	// (0x0002cab5) popup_blid_sat_info2_window_ParamLimits

0x66d5,	// (0x0002cab5) popup_blid_sat_info2_window

0xc0f1,	// (0x000324d1) aid_size_cell_blid

0xc0f9,	// (0x000324d9) bg_popup_window_pane_cp07

0xc11c,	// (0x000324fc) grid_popup_blid_pane

0xc126,	// (0x00032506) heading_pane_cp05_ParamLimits

0xc126,	// (0x00032506) heading_pane_cp05

0xc1f0,	// (0x000325d0) cell_popup_blid_pane_ParamLimits

0xc1f0,	// (0x000325d0) cell_popup_blid_pane

0xc21a,	// (0x000325fa) cell_popup_blid_pane_g1

0xc222,	// (0x00032602) cell_popup_blid_pane_t1

0x6d0f,	// (0x0002d0ef) mup2_indicator_pane_ParamLimits

0x6d0f,	// (0x0002d0ef) mup2_indicator_pane

0x4ec1,	// (0x0002b2a1) mup2_visualizer_osc_pane

0xbf59,	// (0x00032339) mup2_visualizer_spec_pane_ParamLimits

0xbf59,	// (0x00032339) mup2_visualizer_spec_pane

0x6e8f,	// (0x0002d26f) mup2_spec_half_pane

0x6e98,	// (0x0002d278) mup2_spec_half_pane_cp

0x6ea0,	// (0x0002d280) mup2_spec_bar_pane_ParamLimits

0x6ea0,	// (0x0002d280) mup2_spec_bar_pane

0xbe96,	// (0x00032276) mup2_spec_bar_pane_g1

0xbea0,	// (0x00032280) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00035a0a) mup2_spec_bar_pane_g

0x6ec0,	// (0x0002d2a0) mup2_osc_middle_pane

0xbeb2,	// (0x00032292) mup2_visualizer_osc_pane_g1

0x1f7a,	// (0x0002835a) popup_number_entry_window_t1_ParamLimits

0x1f8d,	// (0x0002836d) popup_number_entry_window_t2_ParamLimits

0x1f9f,	// (0x0002837f) popup_number_entry_window_t3_ParamLimits

0x1fb1,	// (0x00028391) popup_number_entry_window_t5_ParamLimits

0x1fb1,	// (0x00028391) popup_number_entry_window_t5

0xf0ec,	// (0x000354cc) popup_number_entry_window_t_ParamLimits

0x1fe6,	// (0x000283c6) text_title_cp2_ParamLimits

0xb297,	// (0x00031677) aid_hotspot_pointer_text2_pane

0xb2bd,	// (0x0003169d) main_viewer_pane_g9_ParamLimits

0xb2bd,	// (0x0003169d) main_viewer_pane_g9

0x3e65,	// (0x0002a245) cale_month_pane_t1_ParamLimits

0x437c,	// (0x0002a75c) bg_cale_pane_ParamLimits

0x4394,	// (0x0002a774) list_cale_pane_ParamLimits

0x2d0c,	// (0x000290ec) listscroll_cale_day_pane_t1

0x43a5,	// (0x0002a785) scroll_pane_cp09_ParamLimits

0x5245,	// (0x0002b625) main_mup_eq_pane_t1_ParamLimits

0x5245,	// (0x0002b625) main_mup_eq_pane_t1

0x5261,	// (0x0002b641) main_mup_eq_pane_t2_ParamLimits

0x5261,	// (0x0002b641) main_mup_eq_pane_t2

0x527d,	// (0x0002b65d) main_mup_eq_pane_t3_ParamLimits

0x527d,	// (0x0002b65d) main_mup_eq_pane_t3

0x529b,	// (0x0002b67b) main_mup_eq_pane_t4_ParamLimits

0x529b,	// (0x0002b67b) main_mup_eq_pane_t4

0x52b9,	// (0x0002b699) main_mup_eq_pane_t5_ParamLimits

0x52b9,	// (0x0002b699) main_mup_eq_pane_t5

0x52d7,	// (0x0002b6b7) main_mup_eq_pane_t6_ParamLimits

0x52d7,	// (0x0002b6b7) main_mup_eq_pane_t6

0x52ed,	// (0x0002b6cd) main_mup_eq_pane_t7_ParamLimits

0x52ed,	// (0x0002b6cd) main_mup_eq_pane_t7

0x5303,	// (0x0002b6e3) main_mup_eq_pane_t8_ParamLimits

0x5303,	// (0x0002b6e3) main_mup_eq_pane_t8

0x5319,	// (0x0002b6f9) main_mup_eq_pane_t9_ParamLimits

0x5319,	// (0x0002b6f9) main_mup_eq_pane_t9

0x5335,	// (0x0002b715) main_mup_eq_pane_t10_ParamLimits

0x5335,	// (0x0002b715) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00035859) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00035859) main_mup_eq_pane_t

0x540a,	// (0x0002b7ea) mup_equalizer_pane_cp5_ParamLimits

0x5422,	// (0x0002b802) mup_equalizer_pane_cp6_ParamLimits

0x543a,	// (0x0002b81a) mup_equalizer_pane_cp7_ParamLimits

0x1c7f,	// (0x0002805f) main_gallery_pane

0xbebb,	// (0x0003229b) smil2_volume_pane

0xbec3,	// (0x000322a3) smil_status_volume_pane_g1_ParamLimits

0xbed6,	// (0x000322b6) smil_status_volume_pane_g2_ParamLimits

0xbee9,	// (0x000322c9) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00035a0f) smil_status_volume_pane_g_ParamLimits

0xc0f9,	// (0x000324d9) bg_popup_window_pane_cp07_ParamLimits

0xc107,	// (0x000324e7) blid_firmament_pane

0x6ec9,	// (0x0002d2a9) aid_size_cell_gallery_ParamLimits

0x6ec9,	// (0x0002d2a9) aid_size_cell_gallery

0x6edf,	// (0x0002d2bf) grid_gallery_pane_ParamLimits

0x6edf,	// (0x0002d2bf) grid_gallery_pane

0x6efa,	// (0x0002d2da) cell_gallery_pane_ParamLimits

0x6efa,	// (0x0002d2da) cell_gallery_pane

0xc230,	// (0x00032610) bg_cell_gallery_focus_pane_ParamLimits

0xc230,	// (0x00032610) bg_cell_gallery_focus_pane

0xc242,	// (0x00032622) cell_gallery_pane_g1_ParamLimits

0xc242,	// (0x00032622) cell_gallery_pane_g1

0x6f4b,	// (0x0002d32b) cell_gallery_pane_g2_ParamLimits

0x6f4b,	// (0x0002d32b) cell_gallery_pane_g2

0x6f58,	// (0x0002d338) cell_gallery_pane_g3_ParamLimits

0x6f58,	// (0x0002d338) cell_gallery_pane_g3

0xc24e,	// (0x0003262e) cell_gallery_pane_g4_ParamLimits

0xc24e,	// (0x0003262e) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00035abd) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00035abd) cell_gallery_pane_g

0xc25a,	// (0x0003263a) bg_cell_gallery_focus_pane_g1

0xc262,	// (0x00032642) bg_cell_gallery_focus_pane_g2

0xc26a,	// (0x0003264a) bg_cell_gallery_focus_pane_g3

0xc272,	// (0x00032652) bg_cell_gallery_focus_pane_g4

0xc27a,	// (0x0003265a) bg_cell_gallery_focus_pane_g5

0xc282,	// (0x00032662) bg_cell_gallery_focus_pane_g6

0xc28a,	// (0x0003266a) bg_cell_gallery_focus_pane_g7

0xc292,	// (0x00032672) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00035ac6) bg_cell_gallery_focus_pane_g

0xc29a,	// (0x0003267a) aid_firma_cardinal

0xc2ae,	// (0x0003268e) blid_firmament_pane_t1

0xc2c5,	// (0x000326a5) blid_firmament_pane_t2

0xc2dc,	// (0x000326bc) blid_firmament_pane_t3

0xc2f3,	// (0x000326d3) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00035ad7) blid_firmament_pane_t

0xc30a,	// (0x000326ea) blid_sat_info_pane

0xc31a,	// (0x000326fa) blid_sat_info_pane_g1

0xc31a,	// (0x000326fa) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00035ae0) blid_sat_info_pane_g

0xc324,	// (0x00032704) blid_sat_info_pane_t1

0xc332,	// (0x00032712) smil2_volume_content_pane

0xc33b,	// (0x0003271b) smil2_volume_pane_g1

0xc343,	// (0x00032723) smil2_volume_content_pane_g1

0xc34c,	// (0x0003272c) smil2_volume_content_pane_g2

0xc355,	// (0x00032735) smil2_volume_content_pane_g3

0xc35e,	// (0x0003273e) smil2_volume_content_pane_g4

0xc367,	// (0x00032747) smil2_volume_content_pane_g5

0xc370,	// (0x00032750) smil2_volume_content_pane_g6

0xc379,	// (0x00032759) smil2_volume_content_pane_g7

0xc382,	// (0x00032762) smil2_volume_content_pane_g8

0xc38b,	// (0x0003276b) smil2_volume_content_pane_g9

0xc394,	// (0x00032774) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00035ae5) smil2_volume_content_pane_g

0x2d7e,	// (0x0002915e) cale_week_day_heading_pane_t1_ParamLimits

0x2d92,	// (0x00029172) cale_week_day_heading_pane_t2_ParamLimits

0x2da6,	// (0x00029186) cale_week_day_heading_pane_t3_ParamLimits

0x2dba,	// (0x0002919a) cale_week_day_heading_pane_t4_ParamLimits

0x2dce,	// (0x000291ae) cale_week_day_heading_pane_t5_ParamLimits

0x2de2,	// (0x000291c2) cale_week_day_heading_pane_t6_ParamLimits

0x2df6,	// (0x000291d6) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x000355d1) cale_week_day_heading_pane_t_ParamLimits

0x2e0a,	// (0x000291ea) bg_cale_side_pane_ParamLimits

0x0bbd,	// (0x00026f9d) cale_week_time_pane_t1_ParamLimits

0x0bd5,	// (0x00026fb5) cale_week_time_pane_t2_ParamLimits

0x0bed,	// (0x00026fcd) cale_week_time_pane_t3_ParamLimits

0x0c05,	// (0x00026fe5) cale_week_time_pane_t4_ParamLimits

0x0c1d,	// (0x00026ffd) cale_week_time_pane_t5_ParamLimits

0x0c35,	// (0x00027015) cale_week_time_pane_t6_ParamLimits

0x0c4d,	// (0x0002702d) cale_week_time_pane_t7_ParamLimits

0x0c69,	// (0x00027049) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x000355e0) cale_week_time_pane_t_ParamLimits

0x2e18,	// (0x000291f8) cell_cale_week_pane_g2_ParamLimits

0x2e0a,	// (0x000291ea) bg_cale_side_pane_cp01_ParamLimits

0x4172,	// (0x0002a552) cale_month_week_pane_t1_ParamLimits

0x4189,	// (0x0002a569) cale_month_week_pane_t2_ParamLimits

0x41a0,	// (0x0002a580) cale_month_week_pane_t3_ParamLimits

0x41b7,	// (0x0002a597) cale_month_week_pane_t4_ParamLimits

0x41ce,	// (0x0002a5ae) cale_month_week_pane_t5_ParamLimits

0x41e5,	// (0x0002a5c5) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x000356b9) cale_month_week_pane_t_ParamLimits

0xb1d8,	// (0x000315b8) cell_cale_month_pane_g1_ParamLimits

0x1c7f,	// (0x0002805f) main_cale_event_viewer_pane

0x1c7f,	// (0x0002805f) listscroll_cale_event_viewer_pane

0xc39d,	// (0x0003277d) list_cale_ev_pane

0xc3a5,	// (0x00032785) scroll_pane_cp023

0x6f65,	// (0x0002d345) field_cale_ev_pane_ParamLimits

0x6f65,	// (0x0002d345) field_cale_ev_pane

0xc3b1,	// (0x00032791) field_cale_ev_content_pane_ParamLimits

0xc3b1,	// (0x00032791) field_cale_ev_content_pane

0xc3bd,	// (0x0003279d) field_cale_ev_pane_g1_ParamLimits

0xc3bd,	// (0x0003279d) field_cale_ev_pane_g1

0xc3c9,	// (0x000327a9) field_cale_ev_pane_g2_ParamLimits

0xc3c9,	// (0x000327a9) field_cale_ev_pane_g2

0xc3e1,	// (0x000327c1) field_cale_ev_pane_g3_ParamLimits

0xc3e1,	// (0x000327c1) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00035afa) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00035afa) field_cale_ev_pane_g

0xc3f9,	// (0x000327d9) field_cale_ev_pane_t1_ParamLimits

0xc3f9,	// (0x000327d9) field_cale_ev_pane_t1

0x6f89,	// (0x0002d369) field_cale_ev_content_pane_t1_ParamLimits

0x6f89,	// (0x0002d369) field_cale_ev_content_pane_t1

0x5541,	// (0x0002b921) bg_button_pane_cp01

0x28f7,	// (0x00028cd7) listscroll_cale_week_pane_ParamLimits

0x2b3d,	// (0x00028f1d) popup_toolbar_window_cp01

0x2d0c,	// (0x000290ec) listscroll_cale_week_pane_t1_ParamLimits

0x28f7,	// (0x00028cd7) listscroll_cale_day_pane_ParamLimits

0x4372,	// (0x0002a752) popup_toolbar_window_cp02

0x2d0c,	// (0x000290ec) listscroll_cale_day_pane_t1_ParamLimits

0x28f7,	// (0x00028cd7) main_cale_month_pane_ParamLimits

0x6955,	// (0x0002cd35) popup_toolbar_window_cp03_ParamLimits

0x6955,	// (0x0002cd35) popup_toolbar_window_cp03

0x590e,	// (0x0002bcee) main_image_pane_g2_ParamLimits

0x590e,	// (0x0002bcee) main_image_pane_g2

0x591f,	// (0x0002bcff) main_image_pane_g3_ParamLimits

0x591f,	// (0x0002bcff) main_image_pane_g3

0x0002,

0xf50b,	// (0x000358eb) main_image_pane_g_ParamLimits

0xf50b,	// (0x000358eb) main_image_pane_g

0x5930,	// (0x0002bd10) main_image_pane_t1_ParamLimits

0x5947,	// (0x0002bd27) main_image_pane_t2_ParamLimits

0x5947,	// (0x0002bd27) main_image_pane_t2

0x5959,	// (0x0002bd39) main_image_pane_t3_ParamLimits

0x5959,	// (0x0002bd39) main_image_pane_t3

0x5981,	// (0x0002bd61) main_image_pane_t4_ParamLimits

0x5981,	// (0x0002bd61) main_image_pane_t4

0x0003,

0xf512,	// (0x000358f2) main_image_pane_t_ParamLimits

0xf512,	// (0x000358f2) main_image_pane_t

0x59a1,	// (0x0002bd81) popup_image_details_window_cp01

0x59ab,	// (0x0002bd8b) popup_toobar_trans_pane_cp01_ParamLimits

0x59ab,	// (0x0002bd8b) popup_toobar_trans_pane_cp01

0x67c8,	// (0x0002cba8) popup_image_details_window_ParamLimits

0x67c8,	// (0x0002cba8) popup_image_details_window

0xbe07,	// (0x000321e7) popup_image_focus_window

0x0cef,	// (0x000270cf) camera2_autofocus_pane_ParamLimits

0x0cef,	// (0x000270cf) camera2_autofocus_pane

0x1c7f,	// (0x0002805f) bg_popup_sub_pane_cp06

0xc410,	// (0x000327f0) popup_image_focus_window_g1

0xc418,	// (0x000327f8) popup_image_focus_window_g2

0xc420,	// (0x00032800) popup_image_focus_window_g3

0xc428,	// (0x00032808) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00035b01) popup_image_focus_window_g

0xc430,	// (0x00032810) popup_image_focus_window_t1

0xc43e,	// (0x0003281e) popup_image_focus_window_t2

0xc44e,	// (0x0003282e) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00035b0a) popup_image_focus_window_t

0xc45c,	// (0x0003283c) camera2_autofocus_pane_g1

0x1efa,	// (0x000282da) bg_tb_trans_pane_cp01

0xc46a,	// (0x0003284a) popup_image_details_window_g1

0xc47d,	// (0x0003285d) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00035b1c) popup_image_details_window_g

0xc4a6,	// (0x00032886) popup_image_details_window_t1

0xc4b8,	// (0x00032898) popup_image_details_window_t2

0xc4d1,	// (0x000328b1) popup_image_details_window_t3

0xc4e5,	// (0x000328c5) popup_image_details_window_t4

0xc500,	// (0x000328e0) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00035b23) popup_image_details_window_t

0x28e3,	// (0x00028cc3) bg_calc_paper_pane_ParamLimits

0xb0d4,	// (0x000314b4) grid_highlight_pane_cp013

0xb0de,	// (0x000314be) list_calc_pane_ParamLimits

0xb0f0,	// (0x000314d0) scroll_pane_cp024

0x28f7,	// (0x00028cd7) bg_calc_display_pane_ParamLimits

0x0b16,	// (0x00026ef6) calc_display_pane_t1_ParamLimits

0x0b28,	// (0x00026f08) calc_display_pane_t2_ParamLimits

0xb0f8,	// (0x000314d8) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00035553) calc_display_pane_t_ParamLimits

0x0b8f,	// (0x00026f6f) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00035570) cell_calc_pane_g

0x0b98,	// (0x00026f78) cell_calc_pane_t1

0x29b2,	// (0x00028d92) grid_highlight_pane_cp02_ParamLimits

0x29c8,	// (0x00028da8) toolbar_button_pane_cp01_ParamLimits

0x29c8,	// (0x00028da8) toolbar_button_pane_cp01

0x59ed,	// (0x0002bdcd) temp_image_control_pane_ParamLimits

0x59ed,	// (0x0002bdcd) temp_image_control_pane

0x1efa,	// (0x000282da) main_mp3_pane

0xc51a,	// (0x000328fa) temp_image_control_pane_g1_ParamLimits

0xc51a,	// (0x000328fa) temp_image_control_pane_g1

0xc528,	// (0x00032908) temp_image_control_pane_g2_ParamLimits

0xc528,	// (0x00032908) temp_image_control_pane_g2

0xc53a,	// (0x0003291a) temp_image_control_pane_g3_ParamLimits

0xc53a,	// (0x0003291a) temp_image_control_pane_g3

0x6fda,	// (0x0002d3ba) temp_image_control_pane_g4_ParamLimits

0x6fda,	// (0x0002d3ba) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00035b2e) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00035b2e) temp_image_control_pane_g

0xc51a,	// (0x000328fa) main_mp3_pane_g1

0x6fed,	// (0x0002d3cd) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00035b37) main_mp3_pane_g

0xc57d,	// (0x0003295d) main_mp3_pane_t1

0x2f9f,	// (0x0002937f) main_camera_pane_g8_ParamLimits

0x2f9f,	// (0x0002937f) main_camera_pane_g8

0x3154,	// (0x00029534) main_video_pane_g7_ParamLimits

0x3154,	// (0x00029534) main_video_pane_g7

0xbf3b,	// (0x0003231b) main_camera2_pane_t7_ParamLimits

0xbf3b,	// (0x0003231b) main_camera2_pane_t7

0x3854,	// (0x00029c34) scroll_pane_cp025_ParamLimits

0x3854,	// (0x00029c34) scroll_pane_cp025

0x3868,	// (0x00029c48) scroll_pane_cp026_ParamLimits

0x3868,	// (0x00029c48) scroll_pane_cp026

0x3877,	// (0x00029c57) wml_content_pane_ParamLimits

0x1c7f,	// (0x0002805f) main_touch_calib_pane

0x70b5,	// (0x0002d495) main_touch_calib_pane_g1

0x70c1,	// (0x0002d4a1) main_touch_calib_pane_g2

0x70cd,	// (0x0002d4ad) main_touch_calib_pane_g3

0x70d9,	// (0x0002d4b9) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00035b55) main_touch_calib_pane_g

0x70e5,	// (0x0002d4c5) main_touch_calib_pane_t1

0x70ff,	// (0x0002d4df) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00035b5e) main_touch_calib_pane_t

0x4d38,	// (0x0002b118) mup_progress_pane_cp02

0x4d57,	// (0x0002b137) navi_pane_g1

0x4e12,	// (0x0002b1f2) navi_pane_mp_t3

0x1efa,	// (0x000282da) main_mp3_pane_ParamLimits

0x6997,	// (0x0002cd77) navi_pane_ParamLimits

0xc51a,	// (0x000328fa) main_mp3_pane_g1_ParamLimits

0x6fed,	// (0x0002d3cd) main_mp3_pane_g2_ParamLimits

0x6ff9,	// (0x0002d3d9) main_mp3_pane_g3_ParamLimits

0x6ff9,	// (0x0002d3d9) main_mp3_pane_g3

0x7007,	// (0x0002d3e7) main_mp3_pane_g4_ParamLimits

0x7007,	// (0x0002d3e7) main_mp3_pane_g4

0xc54a,	// (0x0003292a) main_mp3_pane_g5_ParamLimits

0xc54a,	// (0x0003292a) main_mp3_pane_g5

0xc558,	// (0x00032938) main_mp3_pane_g6_ParamLimits

0xc558,	// (0x00032938) main_mp3_pane_g6

0xc565,	// (0x00032945) main_mp3_pane_g7_ParamLimits

0xc565,	// (0x00032945) main_mp3_pane_g7

0xc571,	// (0x00032951) main_mp3_pane_g8_ParamLimits

0xc571,	// (0x00032951) main_mp3_pane_g8

0xf757,	// (0x00035b37) main_mp3_pane_g_ParamLimits

0x7013,	// (0x0002d3f3) main_mp3_pane_t2

0x7021,	// (0x0002d401) main_mp3_pane_t3

0xc58b,	// (0x0003296b) main_mp3_pane_t4

0xc599,	// (0x00032979) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00035b48) main_mp3_pane_t

0xc5a7,	// (0x00032987) mup_progress_pane_cp01

0x1ccd,	// (0x000280ad) aid_zoom_text_secondary2

0xc39d,	// (0x0003277d) list_cale_ev2_pane

0xc3a5,	// (0x00032785) scroll_pane_cp023_ParamLimits

0x7157,	// (0x0002d537) field_cale_ev2_pane_ParamLimits

0x7157,	// (0x0002d537) field_cale_ev2_pane

0xc5af,	// (0x0003298f) field_cale_ev2_pane_g1_ParamLimits

0xc5af,	// (0x0003298f) field_cale_ev2_pane_g1

0xc5bb,	// (0x0003299b) field_cale_ev2_pane_g2_ParamLimits

0xc5bb,	// (0x0003299b) field_cale_ev2_pane_g2

0xc5d3,	// (0x000329b3) field_cale_ev2_pane_g3_ParamLimits

0xc5d3,	// (0x000329b3) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00035b69) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00035b69) field_cale_ev2_pane_g

0xc5f7,	// (0x000329d7) field_cale_ev2_pane_t1_ParamLimits

0xc5f7,	// (0x000329d7) field_cale_ev2_pane_t1

0xc60e,	// (0x000329ee) field_cale_ev2_pane_t2_ParamLimits

0xc60e,	// (0x000329ee) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00035b72) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00035b72) field_cale_ev2_pane_t

0x56c3,	// (0x0002baa3) main_postcard_pane_g5_ParamLimits

0x56c3,	// (0x0002baa3) main_postcard_pane_g5

0x56d9,	// (0x0002bab9) main_postcard_pane_g6_ParamLimits

0x56d9,	// (0x0002bab9) main_postcard_pane_g6

0x2eda,	// (0x000292ba) camera2_autofocus_pane_cp_ParamLimits

0x2eda,	// (0x000292ba) camera2_autofocus_pane_cp

0x1efa,	// (0x000282da) main_mup3_pane

0x719b,	// (0x0002d57b) main_mup3_pane_g1_ParamLimits

0x719b,	// (0x0002d57b) main_mup3_pane_g1

0x71bd,	// (0x0002d59d) main_mup3_pane_g2_ParamLimits

0x71bd,	// (0x0002d59d) main_mup3_pane_g2

0x7240,	// (0x0002d620) main_mup3_pane_g3_ParamLimits

0x7240,	// (0x0002d620) main_mup3_pane_g3

0x7284,	// (0x0002d664) main_mup3_pane_g4_ParamLimits

0x7284,	// (0x0002d664) main_mup3_pane_g4

0x72c8,	// (0x0002d6a8) main_mup3_pane_g5_ParamLimits

0x72c8,	// (0x0002d6a8) main_mup3_pane_g5

0x730c,	// (0x0002d6ec) main_mup3_pane_g6_ParamLimits

0x730c,	// (0x0002d6ec) main_mup3_pane_g6

0xc623,	// (0x00032a03) main_mup3_pane_g7_ParamLimits

0xc623,	// (0x00032a03) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00035b82) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00035b82) main_mup3_pane_g

0x7388,	// (0x0002d768) main_mup3_pane_t1_ParamLimits

0x7388,	// (0x0002d768) main_mup3_pane_t1

0x7402,	// (0x0002d7e2) main_mup3_pane_t2_ParamLimits

0x7402,	// (0x0002d7e2) main_mup3_pane_t2

0x74dc,	// (0x0002d8bc) main_mup3_pane_t4_ParamLimits

0x74dc,	// (0x0002d8bc) main_mup3_pane_t4

0x753a,	// (0x0002d91a) main_mup3_pane_t5_ParamLimits

0x753a,	// (0x0002d91a) main_mup3_pane_t5

0x75f2,	// (0x0002d9d2) main_mup3_pane_t6_ParamLimits

0x75f2,	// (0x0002d9d2) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x00035b93) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x00035b93) main_mup3_pane_t

0x76a8,	// (0x0002da88) mup3_progress_pane_ParamLimits

0x76a8,	// (0x0002da88) mup3_progress_pane

0x772c,	// (0x0002db0c) popup_mup3_control_window_ParamLimits

0x772c,	// (0x0002db0c) popup_mup3_control_window

0xc631,	// (0x00032a11) popup_mup3_text_window

0x7762,	// (0x0002db42) mup3_progress_pane_t1

0x7779,	// (0x0002db59) mup3_progress_pane_t2

0xc639,	// (0x00032a19) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00035ba0) mup3_progress_pane_t

0xc650,	// (0x00032a30) mup_progress_pane_cp03

0x1c7f,	// (0x0002805f) bg_tb_trans_pane_cp04

0x7790,	// (0x0002db70) mup3_volume_pane

0x7798,	// (0x0002db78) popup_mup3_control_window_g1

0x77a1,	// (0x0002db81) mup3_volume_pane_g1

0x77aa,	// (0x0002db8a) mup3_volume_pane_g2

0x77b3,	// (0x0002db93) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00035ba7) mup3_volume_pane_g

0x1c7f,	// (0x0002805f) bg_tb_trans_pane_cp03

0xc660,	// (0x00032a40) popup_mup3_text_window_g1

0xc668,	// (0x00032a48) popup_mup3_text_window_t1

0x299b,	// (0x00028d7b) list_calc_item_pane_g1_ParamLimits

0xc023,	// (0x00032403) mup_volume_pane_cp_g1

0x7119,	// (0x0002d4f9) main_touch_calib_pane_t3

0x712d,	// (0x0002d50d) main_touch_calib_pane_t4

0x7141,	// (0x0002d521) main_touch_calib_pane_t5

0x1c89,	// (0x00028069) aid_cell_size_toolbar2

0x1c91,	// (0x00028071) aid_popup3_width_pane

0x1ccd,	// (0x000280ad) aid_zoom_text_msg_primary

0xb1c2,	// (0x000315a2) vorec_t7

0x2903,	// (0x00028ce3) bg_calc_paper_pane_g1_ParamLimits

0x290f,	// (0x00028cef) bg_calc_paper_pane_g2_ParamLimits

0x291b,	// (0x00028cfb) bg_calc_paper_pane_g3_ParamLimits

0x2927,	// (0x00028d07) bg_calc_paper_pane_g4_ParamLimits

0x2933,	// (0x00028d13) bg_calc_paper_pane_g5_ParamLimits

0x293f,	// (0x00028d1f) bg_calc_paper_pane_g6_ParamLimits

0x2952,	// (0x00028d32) bg_calc_paper_pane_g7_ParamLimits

0x2965,	// (0x00028d45) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0003555a) bg_calc_paper_pane_g_ParamLimits

0x2976,	// (0x00028d56) calc_bg_paper_pane_g9_ParamLimits

0x3048,	// (0x00029428) image_qvga_pane_ParamLimits

0x3048,	// (0x00029428) image_qvga_pane

0x2621,	// (0x00028a01) bg_popup_sub_pane_cp04_ParamLimits

0x586c,	// (0x0002bc4c) popup_mup_playback_window_g1_ParamLimits

0x5878,	// (0x0002bc58) popup_mup_playback_window_t1_ParamLimits

0x588d,	// (0x0002bc6d) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x000358e6) popup_mup_playback_window_t_ParamLimits

0x6c27,	// (0x0002d007) main_mup2_pane_g3_ParamLimits

0x6c27,	// (0x0002d007) main_mup2_pane_g3

0x34e3,	// (0x000298c3) popup_toolbar_window_cp04

0x60b2,	// (0x0002c492) popup_call2_audio_second_window_g3_ParamLimits

0x60b2,	// (0x0002c492) popup_call2_audio_second_window_g3

0xb401,	// (0x000317e1) popup_call2_audio_first_window_g4_ParamLimits

0xb401,	// (0x000317e1) popup_call2_audio_first_window_g4

0xba80,	// (0x00031e60) popup_call2_audio_in_window_g4_ParamLimits

0xba80,	// (0x00031e60) popup_call2_audio_in_window_g4

0x58a2,	// (0x0002bc82) aid_area_sk_bg_cut_ParamLimits

0x58a2,	// (0x0002bc82) aid_area_sk_bg_cut

0x58c0,	// (0x0002bca0) aid_area_sk_bg_cut_2_ParamLimits

0x58c0,	// (0x0002bca0) aid_area_sk_bg_cut_2

0x6f3b,	// (0x0002d31b) aid_placing_details_win

0x6f43,	// (0x0002d323) aid_placing_details_win_2

0xc45c,	// (0x0003283c) camera2_autofocus_pane_g1_ParamLimits

0x1e9b,	// (0x0002827b) popup_fixed_preview_cale_window_ParamLimits

0x1e9b,	// (0x0002827b) popup_fixed_preview_cale_window

0x4ed2,	// (0x0002b2b2) navi_slider_pane_g3

0x4edb,	// (0x0002b2bb) navi_slider_pane_g4

0x4ee4,	// (0x0002b2c4) navi_slider_pane_g5

0x4ed2,	// (0x0002b2b2) navi_slider_pane_g6

0xb27e,	// (0x0003165e) navi_slider_pane_g7

0x545b,	// (0x0002b83b) mup_scale_pane_g3

0x5464,	// (0x0002b844) mup_scale_pane_g4

0x546d,	// (0x0002b84d) mup_scale_pane_g5

0x5476,	// (0x0002b856) mup_scale_pane_g6

0x547f,	// (0x0002b85f) mup_scale_pane_g7

0x4ed2,	// (0x0002b2b2) cams2_slider_pane_g3

0xc0d8,	// (0x000324b8) cams2_slider_pane_g4

0xc0e0,	// (0x000324c0) cams2_slider_pane_g5

0x4ed2,	// (0x0002b2b2) cams2_slider_pane_g6

0xc0e8,	// (0x000324c8) cams2_slider_pane_g7

0xc31a,	// (0x000326fa) camera2_autofocus_pane_cp_g1

0xc676,	// (0x00032a56) bg_popup_preview_window_pane_cp02_ParamLimits

0xc676,	// (0x00032a56) bg_popup_preview_window_pane_cp02

0xc682,	// (0x00032a62) list_fp_cale_pane_ParamLimits

0xc682,	// (0x00032a62) list_fp_cale_pane

0xc68e,	// (0x00032a6e) popup_fixed_preview_cale_window_t1_ParamLimits

0xc68e,	// (0x00032a6e) popup_fixed_preview_cale_window_t1

0x77bc,	// (0x0002db9c) popup_fixed_preview_cale_window_t2_ParamLimits

0x77bc,	// (0x0002db9c) popup_fixed_preview_cale_window_t2

0x77d1,	// (0x0002dbb1) popup_fixed_preview_cale_window_t3_ParamLimits

0x77d1,	// (0x0002dbb1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00035bae) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00035bae) popup_fixed_preview_cale_window_t

0x77e8,	// (0x0002dbc8) list_single_fp_cale_pane_ParamLimits

0x77e8,	// (0x0002dbc8) list_single_fp_cale_pane

0xc6ac,	// (0x00032a8c) list_single_fp_cale_pane_g1_ParamLimits

0xc6ac,	// (0x00032a8c) list_single_fp_cale_pane_g1

0xc6b8,	// (0x00032a98) list_single_fp_cale_pane_g2_ParamLimits

0xc6b8,	// (0x00032a98) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00035bb5) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00035bb5) list_single_fp_cale_pane_g

0xc6d1,	// (0x00032ab1) list_single_fp_cale_pane_t1_ParamLimits

0xc6d1,	// (0x00032ab1) list_single_fp_cale_pane_t1

0xc6e3,	// (0x00032ac3) list_single_fp_cale_pane_t2_ParamLimits

0xc6e3,	// (0x00032ac3) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00035bbc) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00035bbc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1c7f,	// (0x0002805f) main_dialer_pane

0x7800,	// (0x0002dbe0) aid_cell_size_keypad

0x780a,	// (0x0002dbea) dialer_ne_pane

0x7814,	// (0x0002dbf4) grid_dialer_command_1_pane

0x781c,	// (0x0002dbfc) grid_dialer_command_2_pane

0x7824,	// (0x0002dc04) grid_dialer_keypad_pane

0x7838,	// (0x0002dc18) bg_popup_call_pane_cp06_ParamLimits

0x7838,	// (0x0002dc18) bg_popup_call_pane_cp06

0x7844,	// (0x0002dc24) dialer_ne_clear_pane_ParamLimits

0x7844,	// (0x0002dc24) dialer_ne_clear_pane

0xc716,	// (0x00032af6) dialer_ne_pane_g1

0xc71e,	// (0x00032afe) dialer_ne_pane_t1_ParamLimits

0xc71e,	// (0x00032afe) dialer_ne_pane_t1

0x7850,	// (0x0002dc30) dialer_ne_pane_t2_ParamLimits

0x7850,	// (0x0002dc30) dialer_ne_pane_t2

0x787a,	// (0x0002dc5a) dialer_ne_pane_t3_ParamLimits

0x787a,	// (0x0002dc5a) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00035bc1) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00035bc1) dialer_ne_pane_t

0x78aa,	// (0x0002dc8a) dialer_ne_pane_t3_copy1_ParamLimits

0x78aa,	// (0x0002dc8a) dialer_ne_pane_t3_copy1

0x78d9,	// (0x0002dcb9) cell_dialer_keypad_pane_ParamLimits

0x78d9,	// (0x0002dcb9) cell_dialer_keypad_pane

0x78f0,	// (0x0002dcd0) cell_dialer_command_1_pane_ParamLimits

0x78f0,	// (0x0002dcd0) cell_dialer_command_1_pane

0x7906,	// (0x0002dce6) cell_dialer_command_2_pane_ParamLimits

0x7906,	// (0x0002dce6) cell_dialer_command_2_pane

0xc730,	// (0x00032b10) bg_button_pane_cp02_ParamLimits

0xc730,	// (0x00032b10) bg_button_pane_cp02

0x7915,	// (0x0002dcf5) cell_dialer_keypad_pane_g1_ParamLimits

0x7915,	// (0x0002dcf5) cell_dialer_keypad_pane_g1

0xc730,	// (0x00032b10) bg_button_pane_cp03_ParamLimits

0xc730,	// (0x00032b10) bg_button_pane_cp03

0x792a,	// (0x0002dd0a) cell_dialer_command_1_pane_g1_ParamLimits

0x792a,	// (0x0002dd0a) cell_dialer_command_1_pane_g1

0xc73c,	// (0x00032b1c) bg_button_pane_cp04

0x793e,	// (0x0002dd1e) cell_dialer_command_2_pane_g1

0x4ec1,	// (0x0002b2a1) bg_button_pane_cp06

0xc744,	// (0x00032b24) dialer_ne_clear_pane_g1

0x4d63,	// (0x0002b143) navi_pane_g2

0x4d91,	// (0x0002b171) navi_pane_g3

0x0002,

0xf409,	// (0x000357e9) navi_pane_g

0x4e20,	// (0x0002b200) navi_pane_mv_g2

0x4e47,	// (0x0002b227) navi_pane_mv_g5

0x4e4f,	// (0x0002b22f) navi_pane_mv_t1

0x28f7,	// (0x00028cd7) main_clock2_pane

0x797b,	// (0x0002dd5b) main_clock2_list_pane_ParamLimits

0x797b,	// (0x0002dd5b) main_clock2_list_pane

0x79b3,	// (0x0002dd93) main_clock2_pane_t1_ParamLimits

0x79b3,	// (0x0002dd93) main_clock2_pane_t1

0x79ef,	// (0x0002ddcf) main_clock2_pane_t2_ParamLimits

0x79ef,	// (0x0002ddcf) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00035bc8) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00035bc8) main_clock2_pane_t

0x7a7b,	// (0x0002de5b) popup_clock_analogue_window_cp03_ParamLimits

0x7a7b,	// (0x0002de5b) popup_clock_analogue_window_cp03

0x7aa2,	// (0x0002de82) popup_clock_digital_window_cp02_ParamLimits

0x7aa2,	// (0x0002de82) popup_clock_digital_window_cp02

0x7b1b,	// (0x0002defb) main_clock2_list_single_pane_ParamLimits

0x7b1b,	// (0x0002defb) main_clock2_list_single_pane

0x4ec1,	// (0x0002b2a1) list_highlight_pane_cp05

0xc74c,	// (0x00032b2c) main_clock2_list_single_pane_t1

0x34e3,	// (0x000298c3) popup_toolbar_window_cp04_ParamLimits

0x6faa,	// (0x0002d38a) camera2_autofocus_pane_g2_ParamLimits

0x6faa,	// (0x0002d38a) camera2_autofocus_pane_g2

0x6fb6,	// (0x0002d396) camera2_autofocus_pane_g3_ParamLimits

0x6fb6,	// (0x0002d396) camera2_autofocus_pane_g3

0x6fc2,	// (0x0002d3a2) camera2_autofocus_pane_g4_ParamLimits

0x6fc2,	// (0x0002d3a2) camera2_autofocus_pane_g4

0x6fce,	// (0x0002d3ae) camera2_autofocus_pane_g5_ParamLimits

0x6fce,	// (0x0002d3ae) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00035b11) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00035b11) camera2_autofocus_pane_g

0x717b,	// (0x0002d55b) camera2_autofocus_pane_cp_g2

0x7183,	// (0x0002d563) camera2_autofocus_pane_cp_g3

0x718b,	// (0x0002d56b) camera2_autofocus_pane_cp_g4

0x7193,	// (0x0002d573) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00035b77) camera2_autofocus_pane_cp_g

0x7830,	// (0x0002dc10) popup_dialer_spcha_window

0x1c7f,	// (0x0002805f) bg_popup_sub_pane_cp07

0xc75a,	// (0x00032b3a) list_spcha_pane

0xc762,	// (0x00032b42) list_single_spcha_pane_ParamLimits

0xc762,	// (0x00032b42) list_single_spcha_pane

0x1c7f,	// (0x0002805f) list_highlight_pane_cp06

0xc773,	// (0x00032b53) list_single_spcha_pane_t1

0xb82a,	// (0x00031c0a) popup_call2_audio_out_window_g4_ParamLimits

0xb82a,	// (0x00031c0a) popup_call2_audio_out_window_g4

0x1c7f,	// (0x0002805f) main_imed2_pane

0xbe11,	// (0x000321f1) popup_imed_adjust2_window

0x67e0,	// (0x0002cbc0) popup_imed_trans_window_ParamLimits

0x67e0,	// (0x0002cbc0) popup_imed_trans_window

0xc152,	// (0x00032532) popup_blid_sat_info2_window_t1

0xc160,	// (0x00032540) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00035aa6) popup_blid_sat_info2_window_t

0x7b4f,	// (0x0002df2f) aid_size_cell_colour_35

0x7b6f,	// (0x0002df4f) aid_size_cell_colour_112

0x7b8f,	// (0x0002df6f) aid_size_cell_effect

0xbde5,	// (0x000321c5) bg_tb_trans_pane_cp02

0x44db,	// (0x0002a8bb) heading_imed_pane

0x7baf,	// (0x0002df8f) listscroll_imed_pane

0xc781,	// (0x00032b61) heading_imed_pane_g1

0xc789,	// (0x00032b69) heading_imed_pane_t1

0xc797,	// (0x00032b77) grid_imed_colour_35_pane_ParamLimits

0xc797,	// (0x00032b77) grid_imed_colour_35_pane

0x7bbb,	// (0x0002df9b) grid_imed_effect_pane

0xc7b3,	// (0x00032b93) list_imed_aspect_pane

0x7bd2,	// (0x0002dfb2) scroll_pane_cp027_ParamLimits

0x7bd2,	// (0x0002dfb2) scroll_pane_cp027

0x7be3,	// (0x0002dfc3) cell_imed_effect_pane_ParamLimits

0x7be3,	// (0x0002dfc3) cell_imed_effect_pane

0xc7bb,	// (0x00032b9b) cell_imed_colour_pane_ParamLimits

0xc7bb,	// (0x00032b9b) cell_imed_colour_pane

0xc805,	// (0x00032be5) cell_imed_colour_pane_g1_ParamLimits

0xc805,	// (0x00032be5) cell_imed_colour_pane_g1

0xc816,	// (0x00032bf6) hgihlgiht_grid_pane_cp016_ParamLimits

0xc816,	// (0x00032bf6) hgihlgiht_grid_pane_cp016

0x7c08,	// (0x0002dfe8) cell_imed_effect_pane_g1

0x7c10,	// (0x0002dff0) grid_highlight_pane_cp017

0xc827,	// (0x00032c07) list_imed_single_pane_ParamLimits

0xc827,	// (0x00032c07) list_imed_single_pane

0x1c7f,	// (0x0002805f) list_highlight_pane_cp07

0xc83b,	// (0x00032c1b) list_imed_aspect_pane_comp1_t1

0xbde5,	// (0x000321c5) bg_tb_trans_pane_cp05

0xc85d,	// (0x00032c3d) popup_imed_adjust2_window_g1

0xc884,	// (0x00032c64) popup_imed_adjust2_window_t1

0xc89c,	// (0x00032c7c) slider_imed_adjust_pane

0xc8b0,	// (0x00032c90) slider_imed_adjust_pane_g1

0xc8c0,	// (0x00032ca0) slider_imed_adjust_pane_g2

0xc8d0,	// (0x00032cb0) slider_imed_adjust_pane_g3

0xc8e1,	// (0x00032cc1) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00035be5) slider_imed_adjust_pane_g

0x7c19,	// (0x0002dff9) aid_size_cell_clipart2

0x7c25,	// (0x0002e005) grid_imed_clipart_pane

0xc8f2,	// (0x00032cd2) scroll_pane_cp031

0x7c2f,	// (0x0002e00f) cell_imed_clipart_pane_ParamLimits

0x7c2f,	// (0x0002e00f) cell_imed_clipart_pane

0x7c4c,	// (0x0002e02c) cell_imed_clipart_pane_g1

0x1c7f,	// (0x0002805f) grid_highlight_pane_cp014

0x7990,	// (0x0002dd70) main_clock2_pane_g1_ParamLimits

0x7990,	// (0x0002dd70) main_clock2_pane_g1

0x7ac2,	// (0x0002dea2) aid_call2_pane_cp10

0x7ad4,	// (0x0002deb4) aid_call_pane_cp10

0x4c71,	// (0x0002b051) popup_clock_analogue_window_cp10_g1

0x4c71,	// (0x0002b051) popup_clock_analogue_window_cp10_g2

0x7ae6,	// (0x0002dec6) popup_clock_analogue_window_cp10_g3

0x7ae6,	// (0x0002dec6) popup_clock_analogue_window_cp10_g4

0x4c71,	// (0x0002b051) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00035bd3) popup_clock_analogue_window_cp10_g

0x7afc,	// (0x0002dedc) popup_clock_analogue_window_cp10_t1

0x1157,	// (0x00027537) clock_digital_number_pane_cp10_ParamLimits

0x1157,	// (0x00027537) clock_digital_number_pane_cp10

0x1171,	// (0x00027551) clock_digital_number_pane_cp11_ParamLimits

0x1171,	// (0x00027551) clock_digital_number_pane_cp11

0x118b,	// (0x0002756b) clock_digital_number_pane_cp12_ParamLimits

0x118b,	// (0x0002756b) clock_digital_number_pane_cp12

0x11a5,	// (0x00027585) clock_digital_number_pane_cp13_ParamLimits

0x11a5,	// (0x00027585) clock_digital_number_pane_cp13

0x11bf,	// (0x0002759f) clock_digital_separator_pane_cp10_ParamLimits

0x11bf,	// (0x0002759f) clock_digital_separator_pane_cp10

0x7b2d,	// (0x0002df0d) popup_clock_digital_window_cp02_t1_ParamLimits

0x7b2d,	// (0x0002df0d) popup_clock_digital_window_cp02_t1

0x2619,	// (0x000289f9) clock_digital_number_pane_cp10_g1

0x2619,	// (0x000289f9) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00035bee) clock_digital_number_pane_cp10_g

0x2619,	// (0x000289f9) clock_digital_separator_pane_cp10_g1

0x2619,	// (0x000289f9) clock_digital_separator_pane_g2_cp10

0x4e91,	// (0x0002b271) navi_pane_vded_g4

0x4e9a,	// (0x0002b27a) navi_pane_vded_g5

0x4ea3,	// (0x0002b283) navi_pane_vded_t1

0x1c7f,	// (0x0002805f) main_vded_pane

0x7c55,	// (0x0002e035) main_vded_pane_g1

0x7c61,	// (0x0002e041) main_vded_pane_g2

0x7c6d,	// (0x0002e04d) main_vded_pane_g3

0x0002,

0xf813,	// (0x00035bf3) main_vded_pane_g

0x7c79,	// (0x0002e059) main_vded_pane_t1

0x7c87,	// (0x0002e067) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00035bfa) main_vded_pane_t

0x7c95,	// (0x0002e075) vded_slider_pane

0x7c9f,	// (0x0002e07f) vded_video_pane

0xc8fa,	// (0x00032cda) vded_video_pane_g1

0x7cab,	// (0x0002e08b) vded_video_pane_g2

0xc31a,	// (0x000326fa) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00035bff) vded_video_pane_g

0xc904,	// (0x00032ce4) vded_slider_pane_g1

0xc023,	// (0x00032403) vded_slider_pane_g2

0xc90d,	// (0x00032ced) vded_slider_pane_g3

0xc916,	// (0x00032cf6) vded_slider_pane_g4

0xc91f,	// (0x00032cff) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00035c06) vded_slider_pane_g

0x7716,	// (0x0002daf6) mup3_rocker_pane_ParamLimits

0x7716,	// (0x0002daf6) mup3_rocker_pane

0x7cb4,	// (0x0002e094) mup3_control_keys_pane_g1

0x7cbc,	// (0x0002e09c) mup3_control_keys_pane_g2

0x7cc4,	// (0x0002e0a4) mup3_control_keys_pane_g3

0x7ccc,	// (0x0002e0ac) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00035c11) mup3_control_keys_pane_g

0x1edc,	// (0x000282bc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1edc,	// (0x000282bc) popup_toolbar2_fixed_window_cp01

0x774c,	// (0x0002db2c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x774c,	// (0x0002db2c) popup_toolbar2_fixed_window_cp02

0x6224,	// (0x0002c604) popup_call2_audio_second_window_t4_ParamLimits

0x6224,	// (0x0002c604) popup_call2_audio_second_window_t4

0xb697,	// (0x00031a77) popup_call2_audio_first_window_t6_ParamLimits

0xb697,	// (0x00031a77) popup_call2_audio_first_window_t6

0xb92d,	// (0x00031d0d) popup_call2_audio_out_window_t6_ParamLimits

0xb92d,	// (0x00031d0d) popup_call2_audio_out_window_t6

0x1c7f,	// (0x0002805f) main_vitu_pane

0x7cdc,	// (0x0002e0bc) aid_size_cell_itu_ParamLimits

0x7cdc,	// (0x0002e0bc) aid_size_cell_itu

0x1efa,	// (0x000282da) bg_popup_window_pane_cp08_ParamLimits

0x1efa,	// (0x000282da) bg_popup_window_pane_cp08

0x7cf2,	// (0x0002e0d2) field_vitu_entry_pane_ParamLimits

0x7cf2,	// (0x0002e0d2) field_vitu_entry_pane

0x7d09,	// (0x0002e0e9) grid_vitu_function_pane_ParamLimits

0x7d09,	// (0x0002e0e9) grid_vitu_function_pane

0x7d24,	// (0x0002e104) grid_vitu_itu_pane_ParamLimits

0x7d24,	// (0x0002e104) grid_vitu_itu_pane

0x7d42,	// (0x0002e122) cell_vitu_itu_pane_ParamLimits

0x7d42,	// (0x0002e122) cell_vitu_itu_pane

0x7d68,	// (0x0002e148) cell_vitu_function_pane_ParamLimits

0x7d68,	// (0x0002e148) cell_vitu_function_pane

0x1efa,	// (0x000282da) bg_popup_sub_pane_cp08_ParamLimits

0x1efa,	// (0x000282da) bg_popup_sub_pane_cp08

0x7d83,	// (0x0002e163) field_vitu_entry_pane_t1_ParamLimits

0x7d83,	// (0x0002e163) field_vitu_entry_pane_t1

0xc940,	// (0x00032d20) field_vitu_entry_pane_t2_ParamLimits

0xc940,	// (0x00032d20) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00035c1f) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00035c1f) field_vitu_entry_pane_t

0xc95d,	// (0x00032d3d) bg_button_pane_cp05_ParamLimits

0xc95d,	// (0x00032d3d) bg_button_pane_cp05

0x7da3,	// (0x0002e183) cell_vitu_itu_pane_g1

0x7dbb,	// (0x0002e19b) cell_vitu_itu_pane_t1_ParamLimits

0x7dbb,	// (0x0002e19b) cell_vitu_itu_pane_t1

0x7dcd,	// (0x0002e1ad) cell_vitu_itu_pane_t2_ParamLimits

0x7dcd,	// (0x0002e1ad) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00035c24) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00035c24) cell_vitu_itu_pane_t

0xc96b,	// (0x00032d4b) bg_button_pane_cp07

0x7e02,	// (0x0002e1e2) cell_vitu_function_pane_g1

0xb0cc,	// (0x000314ac) main_calc_pane_g1

0x1cc1,	// (0x000280a1) aid_visual_content_pane

0x1c7f,	// (0x0002805f) main_vradio_pane

0x7e0b,	// (0x0002e1eb) main_vradio_pane_g1_ParamLimits

0x7e0b,	// (0x0002e1eb) main_vradio_pane_g1

0xc975,	// (0x00032d55) main_vradio_pane_g2_ParamLimits

0xc975,	// (0x00032d55) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00035c2b) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00035c2b) main_vradio_pane_g

0x7e22,	// (0x0002e202) main_vradio_pane_t1_ParamLimits

0x7e22,	// (0x0002e202) main_vradio_pane_t1

0x7e37,	// (0x0002e217) main_vradio_pane_t2_ParamLimits

0x7e37,	// (0x0002e217) main_vradio_pane_t2

0xc982,	// (0x00032d62) main_vradio_pane_t3_ParamLimits

0xc982,	// (0x00032d62) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00035c30) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00035c30) main_vradio_pane_t

0x7e4c,	// (0x0002e22c) vradio_rocker_control_pane_ParamLimits

0x7e4c,	// (0x0002e22c) vradio_rocker_control_pane

0x7e5e,	// (0x0002e23e) vradio_station_info_pane_ParamLimits

0x7e5e,	// (0x0002e23e) vradio_station_info_pane

0xc996,	// (0x00032d76) vradio_frequency_info_pane_ParamLimits

0xc996,	// (0x00032d76) vradio_frequency_info_pane

0xc31a,	// (0x000326fa) vradio_station_info_pane_g1

0xc9a5,	// (0x00032d85) vradio_station_info_pane_t1_ParamLimits

0xc9a5,	// (0x00032d85) vradio_station_info_pane_t1

0xc9c7,	// (0x00032da7) vradio_station_info_pane_t2_ParamLimits

0xc9c7,	// (0x00032da7) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00035c37) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00035c37) vradio_station_info_pane_t

0xc9d9,	// (0x00032db9) vradio_tuning_pane

0xc9e1,	// (0x00032dc1) vradio_rocker_control_pane_g1

0xc9e9,	// (0x00032dc9) vradio_rocker_control_pane_g2

0xc9f1,	// (0x00032dd1) vradio_rocker_control_pane_g3

0xc9f9,	// (0x00032dd9) vradio_rocker_control_pane_g4

0xca01,	// (0x00032de1) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00035c3c) vradio_rocker_control_pane_g

0x7e6e,	// (0x0002e24e) vradio_frequency_info_pane_g1

0xca09,	// (0x00032de9) vradio_frequency_info_pane_t1_ParamLimits

0xca09,	// (0x00032de9) vradio_frequency_info_pane_t1

0x7e78,	// (0x0002e258) vradio_tuning_pane_g1

0x7e83,	// (0x0002e263) vradio_tuning_pane_t1

0x1d16,	// (0x000280f6) area_side_right_pane_ParamLimits

0x1d16,	// (0x000280f6) area_side_right_pane

0xbdac,	// (0x0003218c) status_small_pane_g1

0xbdb4,	// (0x00032194) status_small_pane_g2

0xbdbd,	// (0x0003219d) status_small_pane_g3

0xbdc6,	// (0x000321a6) status_small_pane_g4

0x0003,

0xf61c,	// (0x000359fc) status_small_pane_g

0xbdcf,	// (0x000321af) status_small_pane_t1

0x1c7f,	// (0x0002805f) main_video3_pane

0xca1d,	// (0x00032dfd) cams_zoom_vslider_pane

0xca25,	// (0x00032e05) image3_wide_pane_ParamLimits

0xca25,	// (0x00032e05) image3_wide_pane

0xca3f,	// (0x00032e1f) image3_wide_small_pane

0xca4b,	// (0x00032e2b) main_video3_pane_g1_ParamLimits

0xca4b,	// (0x00032e2b) main_video3_pane_g1

0xca67,	// (0x00032e47) main_video3_pane_g2_ParamLimits

0xca67,	// (0x00032e47) main_video3_pane_g2

0x0001,

0xf867,	// (0x00035c47) main_video3_pane_g_ParamLimits

0xf867,	// (0x00035c47) main_video3_pane_g

0xca83,	// (0x00032e63) main_video3_pane_t1_ParamLimits

0xca83,	// (0x00032e63) main_video3_pane_t1

0xcaae,	// (0x00032e8e) main_video3_pane_t2_ParamLimits

0xcaae,	// (0x00032e8e) main_video3_pane_t2

0xcadb,	// (0x00032ebb) main_video3_pane_t3_ParamLimits

0xcadb,	// (0x00032ebb) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00035c4c) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00035c4c) main_video3_pane_t

0xcb08,	// (0x00032ee8) cams_zoom_vslider_pane_g1

0xcb11,	// (0x00032ef1) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00035c53) cams_zoom_vslider_pane_g

0xcb19,	// (0x00032ef9) small_slider_vertical_pane

0xc31a,	// (0x000326fa) small_slider_vertical_pane_g1

0xc31a,	// (0x000326fa) small_slider_vertical_pane_g2

0xcb21,	// (0x00032f01) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00035c58) small_slider_vertical_pane_g

0x1c7f,	// (0x0002805f) main_hwr_training_pane

0xcb2a,	// (0x00032f0a) hwr_training_instruct_pane_ParamLimits

0xcb2a,	// (0x00032f0a) hwr_training_instruct_pane

0x7e92,	// (0x0002e272) hwr_training_navi_pane_ParamLimits

0x7e92,	// (0x0002e272) hwr_training_navi_pane

0x7eb1,	// (0x0002e291) hwr_training_write_pane_ParamLimits

0x7eb1,	// (0x0002e291) hwr_training_write_pane

0x1c7f,	// (0x0002805f) bg_frame_shadow_pane

0xcb61,	// (0x00032f41) hwr_training_write_pane_g1

0xcb69,	// (0x00032f49) hwr_training_write_pane_g2

0xcb71,	// (0x00032f51) hwr_training_write_pane_g3

0xcb79,	// (0x00032f59) hwr_training_write_pane_g4

0xcb81,	// (0x00032f61) hwr_training_write_pane_g5

0xcb89,	// (0x00032f69) hwr_training_write_pane_g6

0xcb91,	// (0x00032f71) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00035c5f) hwr_training_write_pane_g

0xcb99,	// (0x00032f79) hwr_training_navi_pane_g1_ParamLimits

0xcb99,	// (0x00032f79) hwr_training_navi_pane_g1

0xcbab,	// (0x00032f8b) hwr_training_navi_pane_g2_ParamLimits

0xcbab,	// (0x00032f8b) hwr_training_navi_pane_g2

0xcbbd,	// (0x00032f9d) hwr_training_navi_pane_g3_ParamLimits

0xcbbd,	// (0x00032f9d) hwr_training_navi_pane_g3

0xcbcd,	// (0x00032fad) hwr_training_navi_pane_g4_ParamLimits

0xcbcd,	// (0x00032fad) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00035c6e) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00035c6e) hwr_training_navi_pane_g

0xcbda,	// (0x00032fba) hwr_training_navi_pane_t1

0x7eec,	// (0x0002e2cc) list_single_hwr_training_instruct_pane_ParamLimits

0x7eec,	// (0x0002e2cc) list_single_hwr_training_instruct_pane

0xcbe8,	// (0x00032fc8) list_single_hwr_training_instruct_pane_t1

0xc25a,	// (0x0003263a) bg_frame_shadow_pane_g1

0xcbf7,	// (0x00032fd7) bg_frame_shadow_pane_g2

0xcbff,	// (0x00032fdf) bg_frame_shadow_pane_g3

0xcc07,	// (0x00032fe7) bg_frame_shadow_pane_g4

0xcc0f,	// (0x00032fef) bg_frame_shadow_pane_g5

0xcc17,	// (0x00032ff7) bg_frame_shadow_pane_g6

0xcc1f,	// (0x00032fff) bg_frame_shadow_pane_g7

0x2a98,	// (0x00028e78) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00035c79) bg_frame_shadow_pane_g

0x1c7f,	// (0x0002805f) main_video_tele_dialer_pane

0x11e6,	// (0x000275c6) aid_size_cell_video_keypad_ParamLimits

0x11e6,	// (0x000275c6) aid_size_cell_video_keypad

0x1200,	// (0x000275e0) grid_video_dialer_keypad_pane_ParamLimits

0x1200,	// (0x000275e0) grid_video_dialer_keypad_pane

0x124e,	// (0x0002762e) video_down_pane_cp_ParamLimits

0x124e,	// (0x0002762e) video_down_pane_cp

0x1266,	// (0x00027646) cell_video_dialer_keypad_pane_ParamLimits

0x1266,	// (0x00027646) cell_video_dialer_keypad_pane

0xcc27,	// (0x00033007) bg_button_pane_cp08_ParamLimits

0xcc27,	// (0x00033007) bg_button_pane_cp08

0x7f24,	// (0x0002e304) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7f24,	// (0x0002e304) cell_video_dialer_keypad_pane_g1

0x7700,	// (0x0002dae0) mup3_rocker2_pane_ParamLimits

0x7700,	// (0x0002dae0) mup3_rocker2_pane

0xc31a,	// (0x000326fa) mup3_rocker2_pane_g1

0x66ad,	// (0x0002ca8d) main_dialer2_pane

0x1c7f,	// (0x0002805f) main_mp4_pane

0xcc3b,	// (0x0003301b) main_mp4_pane_g1_ParamLimits

0xcc3b,	// (0x0003301b) main_mp4_pane_g1

0xcc3b,	// (0x0003301b) main_mp4_pane_g2_ParamLimits

0xcc3b,	// (0x0003301b) main_mp4_pane_g2

0x128c,	// (0x0002766c) main_mp4_pane_g3_ParamLimits

0x128c,	// (0x0002766c) main_mp4_pane_g3

0xcc49,	// (0x00033029) main_mp4_pane_g4_ParamLimits

0xcc49,	// (0x00033029) main_mp4_pane_g4

0xcc63,	// (0x00033043) main_mp4_pane_g5_ParamLimits

0xcc63,	// (0x00033043) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00035c99) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00035c99) main_mp4_pane_g

0xcc97,	// (0x00033077) main_mp4_pane_t1_ParamLimits

0xcc97,	// (0x00033077) main_mp4_pane_t1

0xccf3,	// (0x000330d3) main_mp4_pane_t2_ParamLimits

0xccf3,	// (0x000330d3) main_mp4_pane_t2

0xcd45,	// (0x00033125) main_mp4_pane_t3_ParamLimits

0xcd45,	// (0x00033125) main_mp4_pane_t3

0xcd65,	// (0x00033145) main_mp4_pane_t4_ParamLimits

0xcd65,	// (0x00033145) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00035ca6) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00035ca6) main_mp4_pane_t

0xcda5,	// (0x00033185) mp4_progress_pane_ParamLimits

0xcda5,	// (0x00033185) mp4_progress_pane

0xcdef,	// (0x000331cf) mp4_rocker_pane_ParamLimits

0xcdef,	// (0x000331cf) mp4_rocker_pane

0xce19,	// (0x000331f9) mp4_progress_pane_t1

0xce32,	// (0x00033212) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00035caf) mp4_progress_pane_t

0xce4b,	// (0x0003322b) mup_progress_pane_cp04

0xce57,	// (0x00033237) mp4_rocker_pane_g1

0x12d6,	// (0x000276b6) aid_cell_size_keypad2_ParamLimits

0x12d6,	// (0x000276b6) aid_cell_size_keypad2

0x12ec,	// (0x000276cc) dialer2_ne_pane_ParamLimits

0x12ec,	// (0x000276cc) dialer2_ne_pane

0x1304,	// (0x000276e4) grid_dialer2_keypad_pane_ParamLimits

0x1304,	// (0x000276e4) grid_dialer2_keypad_pane

0xc0f9,	// (0x000324d9) bg_popup_call_pane_cp07_ParamLimits

0xc0f9,	// (0x000324d9) bg_popup_call_pane_cp07

0x7f5f,	// (0x0002e33f) dialer2_ne_pane_t1_ParamLimits

0x7f5f,	// (0x0002e33f) dialer2_ne_pane_t1

0x1320,	// (0x00027700) cell_dialer2_keypad_pane_ParamLimits

0x1320,	// (0x00027700) cell_dialer2_keypad_pane

0xce73,	// (0x00033253) bg_button_pane_pane_cp04_ParamLimits

0xce73,	// (0x00033253) bg_button_pane_pane_cp04

0x7f9f,	// (0x0002e37f) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f9f,	// (0x0002e37f) cell_dialer2_keypad_pane_g1

0x33b5,	// (0x00029795) aid_placing_vt_set_content_ParamLimits

0x33b5,	// (0x00029795) aid_placing_vt_set_content

0x33d9,	// (0x000297b9) aid_placing_vt_set_title_ParamLimits

0x33d9,	// (0x000297b9) aid_placing_vt_set_title

0x1c7f,	// (0x0002805f) main_image3_pane

0x13a4,	// (0x00027784) area_side_right_pane_cp01_ParamLimits

0x13a4,	// (0x00027784) area_side_right_pane_cp01

0xcc3b,	// (0x0003301b) main_image3_pane_g1_ParamLimits

0xcc3b,	// (0x0003301b) main_image3_pane_g1

0x13bd,	// (0x0002779d) main_image3_pane_g2_ParamLimits

0x13bd,	// (0x0002779d) main_image3_pane_g2

0x13e5,	// (0x000277c5) main_image3_pane_g3_ParamLimits

0x13e5,	// (0x000277c5) main_image3_pane_g3

0x140f,	// (0x000277ef) main_image3_pane_g4_ParamLimits

0x140f,	// (0x000277ef) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00035cbe) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00035cbe) main_image3_pane_g

0x1439,	// (0x00027819) main_image3_pane_t1_ParamLimits

0x1439,	// (0x00027819) main_image3_pane_t1

0x1491,	// (0x00027871) main_image3_pane_t2_ParamLimits

0x1491,	// (0x00027871) main_image3_pane_t2

0x14e3,	// (0x000278c3) main_image3_pane_t3_ParamLimits

0x14e3,	// (0x000278c3) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00035cc7) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00035cc7) main_image3_pane_t

0x1efa,	// (0x000282da) grid_sctrl_middle_pane_cp01_ParamLimits

0x1efa,	// (0x000282da) grid_sctrl_middle_pane_cp01

0x8007,	// (0x0002e3e7) cell_sctrl_middle_pane_cp01_ParamLimits

0x8007,	// (0x0002e3e7) cell_sctrl_middle_pane_cp01

0x8024,	// (0x0002e404) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8024,	// (0x0002e404) cell_sctrl_middle_pane_cp01_g1

0x1c7f,	// (0x0002805f) main_call4_pane

0x8039,	// (0x0002e419) aid_size_button_call4_ParamLimits

0x8039,	// (0x0002e419) aid_size_button_call4

0x806c,	// (0x0002e44c) call4_windows_pane_ParamLimits

0x806c,	// (0x0002e44c) call4_windows_pane

0x808e,	// (0x0002e46e) grid_call4_button_pane_ParamLimits

0x808e,	// (0x0002e46e) grid_call4_button_pane

0xceb3,	// (0x00033293) call4_windows_conf_pane

0xcece,	// (0x000332ae) popup_call4_audio_first_window_ParamLimits

0xcece,	// (0x000332ae) popup_call4_audio_first_window

0xcf1c,	// (0x000332fc) popup_call4_audio_second_window_ParamLimits

0xcf1c,	// (0x000332fc) popup_call4_audio_second_window

0xcf32,	// (0x00033312) popup_call4_audio_wait_window_ParamLimits

0xcf32,	// (0x00033312) popup_call4_audio_wait_window

0x80b9,	// (0x0002e499) cell_call4_button_pane_ParamLimits

0x80b9,	// (0x0002e499) cell_call4_button_pane

0x80e0,	// (0x0002e4c0) bg_button_pane_cp09_ParamLimits

0x80e0,	// (0x0002e4c0) bg_button_pane_cp09

0x80ec,	// (0x0002e4cc) cell_call4_button_pane_g1_ParamLimits

0x80ec,	// (0x0002e4cc) cell_call4_button_pane_g1

0x8112,	// (0x0002e4f2) cell_call4_button_pane_t1_ParamLimits

0x8112,	// (0x0002e4f2) cell_call4_button_pane_t1

0xcf7a,	// (0x0003335a) popup_call4_audio_conf_window_ParamLimits

0xcf7a,	// (0x0003335a) popup_call4_audio_conf_window

0x7762,	// (0x0002db42) mup3_progress_pane_t1_ParamLimits

0x7779,	// (0x0002db59) mup3_progress_pane_t2_ParamLimits

0xc639,	// (0x00032a19) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00035ba0) mup3_progress_pane_t_ParamLimits

0xc650,	// (0x00032a30) mup_progress_pane_cp03_ParamLimits

0x7cd4,	// (0x0002e0b4) mup3_control_keys_pane_g4_copy1

0xcdd3,	// (0x000331b3) mp4_rocker2_pane_ParamLimits

0xcdd3,	// (0x000331b3) mp4_rocker2_pane

0xcf94,	// (0x00033374) mp4_rocker2_pane_g1

0xcf9c,	// (0x0003337c) mp4_rocker2_pane_g2

0xcfa4,	// (0x00033384) mp4_rocker2_pane_g3

0xcfac,	// (0x0003338c) mp4_rocker2_pane_g4

0xcfb4,	// (0x00033394) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00035cd0) mp4_rocker2_pane_g

0x1c7f,	// (0x0002805f) main_camera4_pane

0x1c7f,	// (0x0002805f) main_video4_pane

0x121c,	// (0x000275fc) main_video_tele_dialer_pane_t1_ParamLimits

0x121c,	// (0x000275fc) main_video_tele_dialer_pane_t1

0x1235,	// (0x00027615) main_video_tele_dialer_pane_t2_ParamLimits

0x1235,	// (0x00027615) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00035c8a) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00035c8a) main_video_tele_dialer_pane_t

0x1583,	// (0x00027963) cam4_autofocus_pane_ParamLimits

0x1583,	// (0x00027963) cam4_autofocus_pane

0x1599,	// (0x00027979) cam4_image_uncrop_pane_ParamLimits

0x1599,	// (0x00027979) cam4_image_uncrop_pane

0x15b2,	// (0x00027992) cam4_indicators_pane_ParamLimits

0x15b2,	// (0x00027992) cam4_indicators_pane

0x15e1,	// (0x000279c1) main_camera4_pane_g1_ParamLimits

0x15e1,	// (0x000279c1) main_camera4_pane_g1

0x15ed,	// (0x000279cd) main_camera4_pane_g2_ParamLimits

0x15ed,	// (0x000279cd) main_camera4_pane_g2

0x15ed,	// (0x000279cd) main_camera4_pane_g3_ParamLimits

0x15ed,	// (0x000279cd) main_camera4_pane_g3

0x15f9,	// (0x000279d9) main_camera4_pane_g4_ParamLimits

0x15f9,	// (0x000279d9) main_camera4_pane_g4

0x1605,	// (0x000279e5) main_camera4_pane_g5_ParamLimits

0x1605,	// (0x000279e5) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00035cdb) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00035cdb) main_camera4_pane_g

0x1622,	// (0x00027a02) main_camera4_pane_t1_ParamLimits

0x1622,	// (0x00027a02) main_camera4_pane_t1

0xcfee,	// (0x000333ce) bg_tb_trans_pane_cp06

0xd004,	// (0x000333e4) cam4_indicators_pane_g1

0xd011,	// (0x000333f1) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00035cf6) cam4_indicators_pane_g

0xd031,	// (0x00033411) cam4_indicators_pane_t1

0x1672,	// (0x00027a52) main_video4_pane_g1_ParamLimits

0x1672,	// (0x00027a52) main_video4_pane_g1

0x1684,	// (0x00027a64) main_video4_pane_g2_ParamLimits

0x1684,	// (0x00027a64) main_video4_pane_g2

0x1698,	// (0x00027a78) main_video4_pane_g3_ParamLimits

0x1698,	// (0x00027a78) main_video4_pane_g3

0x16a8,	// (0x00027a88) main_video4_pane_g4_ParamLimits

0x16a8,	// (0x00027a88) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00035cfd) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00035cfd) main_video4_pane_g

0x16c8,	// (0x00027aa8) vid4_indicators_pane_ParamLimits

0x16c8,	// (0x00027aa8) vid4_indicators_pane

0x16f8,	// (0x00027ad8) video4_image_uncrop_cif_pane_ParamLimits

0x16f8,	// (0x00027ad8) video4_image_uncrop_cif_pane

0x1712,	// (0x00027af2) video4_image_uncrop_nhd_pane_ParamLimits

0x1712,	// (0x00027af2) video4_image_uncrop_nhd_pane

0x1599,	// (0x00027979) video4_image_uncrop_vga_pane_ParamLimits

0x1599,	// (0x00027979) video4_image_uncrop_vga_pane

0xd055,	// (0x00033435) bg_tb_trans_pane_cp07

0x1728,	// (0x00027b08) vid4_indicators_pane_g1

0x1735,	// (0x00027b15) vid4_indicators_pane_g2

0x1742,	// (0x00027b22) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00035d08) vid4_indicators_pane_g

0x1767,	// (0x00027b47) vid4_indicators_pane_t1

0x814c,	// (0x0002e52c) cam4_autofocus_pane_g1

0x8154,	// (0x0002e534) cam4_autofocus_pane_g2

0x815c,	// (0x0002e53c) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00035d13) cam4_autofocus_pane_g

0x8164,	// (0x0002e544) cam4_autofocus_pane_g3_copy1

0x7f08,	// (0x0002e2e8) video_down_pane_cp_t1

0x7f16,	// (0x0002e2f6) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00035c8f) video_down_pane_cp_t

0x1efa,	// (0x000282da) popup_vitu2_window_ParamLimits

0x1efa,	// (0x000282da) popup_vitu2_window

0x1779,	// (0x00027b59) aid_size_cell2_itu2_ParamLimits

0x1779,	// (0x00027b59) aid_size_cell2_itu2

0x179f,	// (0x00027b7f) aid_size_cell_itu2_ParamLimits

0x179f,	// (0x00027b7f) aid_size_cell_itu2

0x17fd,	// (0x00027bdd) bg_popup_window_pane_cp09_ParamLimits

0x17fd,	// (0x00027bdd) bg_popup_window_pane_cp09

0x180b,	// (0x00027beb) field_vitu2_entry_pane_ParamLimits

0x180b,	// (0x00027beb) field_vitu2_entry_pane

0x1833,	// (0x00027c13) grid_vitu2_function_pane_ParamLimits

0x1833,	// (0x00027c13) grid_vitu2_function_pane

0x1884,	// (0x00027c64) grid_vitu2_itu_pane_ParamLimits

0x1884,	// (0x00027c64) grid_vitu2_itu_pane

0x190f,	// (0x00027cef) cell_vitu2_itu_pane_ParamLimits

0x190f,	// (0x00027cef) cell_vitu2_itu_pane

0x1935,	// (0x00027d15) cell_vitu2_function_pane_ParamLimits

0x1935,	// (0x00027d15) cell_vitu2_function_pane

0xd06d,	// (0x0003344d) bg_popup_call_pane_cp08_ParamLimits

0xd06d,	// (0x0003344d) bg_popup_call_pane_cp08

0xd086,	// (0x00033466) field_vitu2_entry_pane_g1

0xd092,	// (0x00033472) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00035d1a) field_vitu2_entry_pane_g

0x816c,	// (0x0002e54c) field_vitu2_entry_pane_t1_ParamLimits

0x816c,	// (0x0002e54c) field_vitu2_entry_pane_t1

0xd0ac,	// (0x0003348c) field_vitu2_entry_pane_t2_ParamLimits

0xd0ac,	// (0x0003348c) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00035d21) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00035d21) field_vitu2_entry_pane_t

0x1979,	// (0x00027d59) bg_button_pane_cp010_ParamLimits

0x1979,	// (0x00027d59) bg_button_pane_cp010

0x1987,	// (0x00027d67) cell_vitu2_itu_pane_g1

0x19a5,	// (0x00027d85) cell_vitu2_itu_pane_t1_ParamLimits

0x19a5,	// (0x00027d85) cell_vitu2_itu_pane_t1

0x1a0b,	// (0x00027deb) cell_vitu2_itu_pane_t2_ParamLimits

0x1a0b,	// (0x00027deb) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00035d2b) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00035d2b) cell_vitu2_itu_pane_t

0xd0d1,	// (0x000334b1) bg_button_pane_cp011

0x1ae7,	// (0x00027ec7) cell_vitu2_function_pane_g1

0x1c7f,	// (0x0002805f) main_myfav_hc_pane

0x1533,	// (0x00027913) popup_image3_note_pane_ParamLimits

0x1533,	// (0x00027913) popup_image3_note_pane

0x154f,	// (0x0002792f) popup_image3_tool_bar_pane_ParamLimits

0x154f,	// (0x0002792f) popup_image3_tool_bar_pane

0x1a8f,	// (0x00027e6f) cell_vitu2_itu_pane_t3_ParamLimits

0x1a8f,	// (0x00027e6f) cell_vitu2_itu_pane_t3

0x1c7f,	// (0x0002805f) bg_popup_trans_pane

0xd0df,	// (0x000334bf) grid_image3_tool_bar_pane

0xd0e9,	// (0x000334c9) bg_popup_trans_pane_g1

0x39af,	// (0x00029d8f) bg_popup_trans_pane_g2

0xd0f1,	// (0x000334d1) bg_popup_trans_pane_g3

0xd0f9,	// (0x000334d9) bg_popup_trans_pane_g4

0xd101,	// (0x000334e1) bg_popup_trans_pane_g5

0xd109,	// (0x000334e9) bg_popup_trans_pane_g6

0xd111,	// (0x000334f1) bg_popup_trans_pane_g7

0xd119,	// (0x000334f9) bg_popup_trans_pane_g8

0x398f,	// (0x00029d6f) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00035d32) bg_popup_trans_pane_g

0xd121,	// (0x00033501) cell_image3_tool_bar_pane_ParamLimits

0xd121,	// (0x00033501) cell_image3_tool_bar_pane

0xc31a,	// (0x000326fa) cell_image3_tool_bar_pane_g1

0x1c7f,	// (0x0002805f) bg_popup_trans_pane_cp1

0xd137,	// (0x00033517) popup_image3_note_pane_t1

0xd145,	// (0x00033525) popup_image3_note_pane_t2

0xd153,	// (0x00033533) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00035d45) popup_image3_note_pane_t

0xd163,	// (0x00033543) popup_image3_note_pane_t3_copy1

0x8189,	// (0x0002e569) bg_myfav_hc_instruction_pane_ParamLimits

0x8189,	// (0x0002e569) bg_myfav_hc_instruction_pane

0x81a1,	// (0x0002e581) cell_myfav_contact_pane_ParamLimits

0x81a1,	// (0x0002e581) cell_myfav_contact_pane

0x81bd,	// (0x0002e59d) cell_myfav_contact_pane_cp1_ParamLimits

0x81bd,	// (0x0002e59d) cell_myfav_contact_pane_cp1

0x81d5,	// (0x0002e5b5) cell_myfav_contact_pane_cp2_ParamLimits

0x81d5,	// (0x0002e5b5) cell_myfav_contact_pane_cp2

0x81ed,	// (0x0002e5cd) cell_myfav_contact_pane_cp3_ParamLimits

0x81ed,	// (0x0002e5cd) cell_myfav_contact_pane_cp3

0x8204,	// (0x0002e5e4) cell_myfav_contact_pane_cp4_ParamLimits

0x8204,	// (0x0002e5e4) cell_myfav_contact_pane_cp4

0x821c,	// (0x0002e5fc) cell_myfav_contact_pane_cp5_ParamLimits

0x821c,	// (0x0002e5fc) cell_myfav_contact_pane_cp5

0x8230,	// (0x0002e610) cell_myfav_contact_pane_cp6_ParamLimits

0x8230,	// (0x0002e610) cell_myfav_contact_pane_cp6

0x8246,	// (0x0002e626) cell_myfav_contact_pane_cp7_ParamLimits

0x8246,	// (0x0002e626) cell_myfav_contact_pane_cp7

0xd171,	// (0x00033551) listscroll_gen_pane_cp05

0x825e,	// (0x0002e63e) main_myfav_hc_pane_g1_ParamLimits

0x825e,	// (0x0002e63e) main_myfav_hc_pane_g1

0x8278,	// (0x0002e658) main_myfav_hc_pane_g2_ParamLimits

0x8278,	// (0x0002e658) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x00035d4c) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x00035d4c) main_myfav_hc_pane_g

0x82ac,	// (0x0002e68c) main_myfav_hc_pane_t1_ParamLimits

0x82ac,	// (0x0002e68c) main_myfav_hc_pane_t1

0xd17a,	// (0x0003355a) main_myfav_hc_pane_t2_ParamLimits

0xd17a,	// (0x0003355a) main_myfav_hc_pane_t2

0xd18c,	// (0x0003356c) main_myfav_hc_pane_t3_ParamLimits

0xd18c,	// (0x0003356c) main_myfav_hc_pane_t3

0x82c3,	// (0x0002e6a3) main_myfav_hc_pane_t4_ParamLimits

0x82c3,	// (0x0002e6a3) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00035d53) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00035d53) main_myfav_hc_pane_t

0xc31a,	// (0x000326fa) bg_myfav_hc_instruction_pane_g1

0xd19e,	// (0x0003357e) cell_myfav_contact_pane_g1_ParamLimits

0xd19e,	// (0x0003357e) cell_myfav_contact_pane_g1

0xd19e,	// (0x0003357e) cell_myfav_contact_pane_g2_ParamLimits

0xd19e,	// (0x0003357e) cell_myfav_contact_pane_g2

0xd1aa,	// (0x0003358a) cell_myfav_contact_pane_g3_ParamLimits

0xd1aa,	// (0x0003358a) cell_myfav_contact_pane_g3

0xc623,	// (0x00032a03) cell_myfav_contact_pane_g4_ParamLimits

0xc623,	// (0x00032a03) cell_myfav_contact_pane_g4

0xd1b7,	// (0x00033597) cell_myfav_contact_pane_g5_ParamLimits

0xd1b7,	// (0x00033597) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00035d5e) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00035d5e) cell_myfav_contact_pane_g

0x8292,	// (0x0002e672) main_myfav_hc_pane_g3_ParamLimits

0x8292,	// (0x0002e672) main_myfav_hc_pane_g3

0x1e32,	// (0x00028212) popup_adpt_find_window

0x82ed,	// (0x0002e6cd) afind_page_pane_ParamLimits

0x82ed,	// (0x0002e6cd) afind_page_pane

0x8302,	// (0x0002e6e2) aid_size_cell_afind_ParamLimits

0x8302,	// (0x0002e6e2) aid_size_cell_afind

0x8320,	// (0x0002e700) bg_popup_sub_pane_cp09_ParamLimits

0x8320,	// (0x0002e700) bg_popup_sub_pane_cp09

0x832d,	// (0x0002e70d) find_pane_cp01_ParamLimits

0x832d,	// (0x0002e70d) find_pane_cp01

0xd1c3,	// (0x000335a3) grid_afind_control_pane_ParamLimits

0xd1c3,	// (0x000335a3) grid_afind_control_pane

0x833a,	// (0x0002e71a) grid_afind_pane_ParamLimits

0x833a,	// (0x0002e71a) grid_afind_pane

0x835c,	// (0x0002e73c) cell_afind_pane_ParamLimits

0x835c,	// (0x0002e73c) cell_afind_pane

0xc31a,	// (0x000326fa) afind_page_pane_g1

0x83c3,	// (0x0002e7a3) afind_page_pane_g2

0x83cc,	// (0x0002e7ac) afind_page_pane_g3

0x0002,

0xf989,	// (0x00035d69) afind_page_pane_g

0x83d5,	// (0x0002e7b5) afind_page_pane_t1

0xd1d7,	// (0x000335b7) cell_afind_grid_control_pane_ParamLimits

0xd1d7,	// (0x000335b7) cell_afind_grid_control_pane

0xce73,	// (0x00033253) bg_button_pane_cp69_ParamLimits

0xce73,	// (0x00033253) bg_button_pane_cp69

0x83f5,	// (0x0002e7d5) cell_afind_pane_g1_ParamLimits

0x83f5,	// (0x0002e7d5) cell_afind_pane_g1

0x8402,	// (0x0002e7e2) cell_afind_pane_t1_ParamLimits

0x8402,	// (0x0002e7e2) cell_afind_pane_t1

0x3236,	// (0x00029616) bg_button_pane_cp72

0xd1e6,	// (0x000335c6) cell_afind_grid_control_pane_g1

0x5cbc,	// (0x0002c09c) aid_image_placing_area_ParamLimits

0x5cbc,	// (0x0002c09c) aid_image_placing_area

0xc928,	// (0x00032d08) field_vitu_entry_pane_g1_ParamLimits

0xc928,	// (0x00032d08) field_vitu_entry_pane_g1

0xc934,	// (0x00032d14) field_vitu_entry_pane_g2_ParamLimits

0xc934,	// (0x00032d14) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00035c1a) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00035c1a) field_vitu_entry_pane_g

0x7da3,	// (0x0002e183) cell_vitu_itu_pane_g1_ParamLimits

0x7de5,	// (0x0002e1c5) cell_vitu_itu_pane_t3_ParamLimits

0x7de5,	// (0x0002e1c5) cell_vitu_itu_pane_t3

0xce19,	// (0x000331f9) mp4_progress_pane_t1_ParamLimits

0xce32,	// (0x00033212) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00035caf) mp4_progress_pane_t_ParamLimits

0xce4b,	// (0x0003322b) mup_progress_pane_cp04_ParamLimits

0x82d7,	// (0x0002e6b7) main_myfav_hc_pane_t5_ParamLimits

0x82d7,	// (0x0002e6b7) main_myfav_hc_pane_t5

0x1cd5,	// (0x000280b5) aid_zoom_text_primary

0x1e32,	// (0x00028212) popup_adpt_find_window_ParamLimits

0x1efa,	// (0x000282da) main_cam_set_pane

0x15cb,	// (0x000279ab) cam4_zoom_pane_ParamLimits

0x15cb,	// (0x000279ab) cam4_zoom_pane

0x8414,	// (0x0002e7f4) main_cam_set_pane_g1_ParamLimits

0x8414,	// (0x0002e7f4) main_cam_set_pane_g1

0x8422,	// (0x0002e802) main_cam_set_pane_g2_ParamLimits

0x8422,	// (0x0002e802) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00035d70) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00035d70) main_cam_set_pane_g

0x8445,	// (0x0002e825) main_cam_set_pane_t1_ParamLimits

0x8445,	// (0x0002e825) main_cam_set_pane_t1

0x8460,	// (0x0002e840) main_cset_listscroll_pane_ParamLimits

0x8460,	// (0x0002e840) main_cset_listscroll_pane

0x8484,	// (0x0002e864) main_cset_slider_pane_ParamLimits

0x8484,	// (0x0002e864) main_cset_slider_pane

0xd1f7,	// (0x000335d7) main_cset_list_pane_ParamLimits

0xd1f7,	// (0x000335d7) main_cset_list_pane

0xd207,	// (0x000335e7) scroll_pane_cp028

0x84ae,	// (0x0002e88e) aid_area_touch_slider

0x84ca,	// (0x0002e8aa) cset_slider_pane

0x84f4,	// (0x0002e8d4) main_cset_slider_pane_g1

0x8509,	// (0x0002e8e9) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00035d75) main_cset_slider_pane_g

0xd240,	// (0x00033620) main_cset_slider_pane_t1

0x85cb,	// (0x0002e9ab) main_cset_slider_pane_t2

0x85e5,	// (0x0002e9c5) main_cset_slider_pane_t3

0x85ff,	// (0x0002e9df) main_cset_slider_pane_t4

0x8619,	// (0x0002e9f9) main_cset_slider_pane_t5

0x8637,	// (0x0002ea17) main_cset_slider_pane_t6

0x864e,	// (0x0002ea2e) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00035d9a) main_cset_slider_pane_t

0x875a,	// (0x0002eb3a) cset_list_set_pane_ParamLimits

0x875a,	// (0x0002eb3a) cset_list_set_pane

0x876e,	// (0x0002eb4e) aid_position_infowindow_above

0x8776,	// (0x0002eb56) aid_position_infowindow_below

0xd2e0,	// (0x000336c0) cset_list_set_pane_g1_ParamLimits

0xd2e0,	// (0x000336c0) cset_list_set_pane_g1

0x877e,	// (0x0002eb5e) cset_list_set_pane_g3_ParamLimits

0x877e,	// (0x0002eb5e) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00035db9) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00035db9) cset_list_set_pane_g

0x878d,	// (0x0002eb6d) cset_list_set_pane_t1_ParamLimits

0x878d,	// (0x0002eb6d) cset_list_set_pane_t1

0x1efa,	// (0x000282da) list_highlight_pane_cp021_ParamLimits

0x1efa,	// (0x000282da) list_highlight_pane_cp021

0x545b,	// (0x0002b83b) cset_slider_pane_g1

0x546d,	// (0x0002b84d) cset_slider_pane_g2

0x5464,	// (0x0002b844) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00035dbe) cset_slider_pane_g

0xd2ec,	// (0x000336cc) aid_area_touch_cam4_zoom

0xd2f4,	// (0x000336d4) cam4_zoom_cont_pane

0xd2fc,	// (0x000336dc) cam4_zoom_pane_g1

0xd304,	// (0x000336e4) cam4_zoom_pane_g2

0x1afb,	// (0x00027edb) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00035dc5) cam4_zoom_pane_g

0xd30c,	// (0x000336ec) cam4_zoom_cont_pane_g1

0xd315,	// (0x000336f5) cam4_zoom_cont_pane_g2

0xd31e,	// (0x000336fe) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00035dcc) cam4_zoom_cont_pane_g

0x8057,	// (0x0002e437) call4_image_pane_ParamLimits

0x8057,	// (0x0002e437) call4_image_pane

0xceb3,	// (0x00033293) call4_windows_conf_pane_ParamLimits

0xcefa,	// (0x000332da) popup_call4_audio_in_window_ParamLimits

0xcefa,	// (0x000332da) popup_call4_audio_in_window

0x1c7f,	// (0x0002805f) bg_popup_call2_act_pane_cp02

0xcf72,	// (0x00033352) call4_list_conf_pane

0xc31a,	// (0x000326fa) call4_image_pane_g1

0xc31a,	// (0x000326fa) call4_image_pane_g2

0x0001,

0xf700,	// (0x00035ae0) call4_image_pane_g

0xd327,	// (0x00033707) list_single_graphic_popup_conf4_pane_ParamLimits

0xd327,	// (0x00033707) list_single_graphic_popup_conf4_pane

0x1c7f,	// (0x0002805f) list_highlight_pane_cp022

0xd33c,	// (0x0003371c) list_single_graphic_popup_conf4_pane_g1

0x4969,	// (0x0002ad49) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00035dd3) list_single_graphic_popup_conf4_pane_g

0xd344,	// (0x00033724) list_single_graphic_popup_conf4_pane_t1

0x3505,	// (0x000298e5) popup_vtel_slider_window_ParamLimits

0x3505,	// (0x000298e5) popup_vtel_slider_window

0xce61,	// (0x00033241) dialer2_ne_pane_t2_ParamLimits

0xce61,	// (0x00033241) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00035cb4) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00035cb4) dialer2_ne_pane_t

0xc0f9,	// (0x000324d9) bg_popup_sub_pane_cp010_ParamLimits

0xc0f9,	// (0x000324d9) bg_popup_sub_pane_cp010

0x87a2,	// (0x0002eb82) popup_vtel_slider_window_g1_ParamLimits

0x87a2,	// (0x0002eb82) popup_vtel_slider_window_g1

0x87b5,	// (0x0002eb95) popup_vtel_slider_window_g2_ParamLimits

0x87b5,	// (0x0002eb95) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00035dd8) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00035dd8) popup_vtel_slider_window_g

0x880b,	// (0x0002ebeb) vtel_slider_pane_ParamLimits

0x880b,	// (0x0002ebeb) vtel_slider_pane

0x882d,	// (0x0002ec0d) vtel_slider_pane_g1_ParamLimits

0x882d,	// (0x0002ec0d) vtel_slider_pane_g1

0x8841,	// (0x0002ec21) vtel_slider_pane_g2_ParamLimits

0x8841,	// (0x0002ec21) vtel_slider_pane_g2

0x8859,	// (0x0002ec39) vtel_slider_pane_g3_ParamLimits

0x8859,	// (0x0002ec39) vtel_slider_pane_g3

0x882d,	// (0x0002ec0d) vtel_slider_pane_g4_ParamLimits

0x882d,	// (0x0002ec0d) vtel_slider_pane_g4

0x886f,	// (0x0002ec4f) vtel_slider_pane_g5_ParamLimits

0x886f,	// (0x0002ec4f) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00035de1) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00035de1) vtel_slider_pane_g

0x1c7f,	// (0x0002805f) main_gallery2_pane

0x17cb,	// (0x00027bab) aid_size_row_itut2_dropdow_list_ParamLimits

0x17cb,	// (0x00027bab) aid_size_row_itut2_dropdow_list

0x185b,	// (0x00027c3b) grid_vitu2_function_top_pane_ParamLimits

0x185b,	// (0x00027c3b) grid_vitu2_function_top_pane

0x18ba,	// (0x00027c9a) popup_vitu2_dropdown_list_window_ParamLimits

0x18ba,	// (0x00027c9a) popup_vitu2_dropdown_list_window

0x18e3,	// (0x00027cc3) popup_vitu2_match_list_window

0x1b03,	// (0x00027ee3) cell_vitu2_function_top_pane_ParamLimits

0x1b03,	// (0x00027ee3) cell_vitu2_function_top_pane

0x1b23,	// (0x00027f03) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1b23,	// (0x00027f03) cell_vitu2_function_top_pane_cp01

0x1b41,	// (0x00027f21) cell_vitu2_function_top_wide_pane_ParamLimits

0x1b41,	// (0x00027f21) cell_vitu2_function_top_wide_pane

0xd0d1,	// (0x000334b1) bg_button_pane_cp012

0x1b5f,	// (0x00027f3f) cell_vitu2_function_top_pane_g1

0xd368,	// (0x00033748) bg_button_pane_cp013_ParamLimits

0xd368,	// (0x00033748) bg_button_pane_cp013

0x8885,	// (0x0002ec65) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8885,	// (0x0002ec65) cell_vitu2_function_top_wide_pane_g1

0xd0d1,	// (0x000334b1) bg_popup_sub_pane_cp20

0x1b73,	// (0x00027f53) list_vitu2_match_list_pane

0xd0e9,	// (0x000334c9) bg_popup_sub_pane_cp20_g1

0xd0f1,	// (0x000334d1) bg_popup_sub_pane_cp20_g2

0x39af,	// (0x00029d8f) bg_popup_sub_pane_cp20_g3

0xd0f9,	// (0x000334d9) bg_popup_sub_pane_cp20_g4

0x398f,	// (0x00029d6f) bg_popup_sub_pane_cp20_g5

0xd384,	// (0x00033764) bg_popup_sub_pane_cp20_g6

0xd109,	// (0x000334e9) bg_popup_sub_pane_cp20_g7

0xd111,	// (0x000334f1) bg_popup_sub_pane_cp20_g8

0xd119,	// (0x000334f9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00035dec) bg_popup_sub_pane_cp20_g

0xd38c,	// (0x0003376c) list_vitu2_match_list_item_pane_ParamLimits

0xd38c,	// (0x0003376c) list_vitu2_match_list_item_pane

0xd39e,	// (0x0003377e) list_vitu2_match_list_item_pane_t1

0xb0d4,	// (0x000314b4) bg_popup_sub_pane_cp21

0xd3c4,	// (0x000337a4) grid_vitu2_dropdown_list_pane

0x1b91,	// (0x00027f71) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1b91,	// (0x00027f71) cell_vitu2_dropdown_list_char_pane

0x1bb4,	// (0x00027f94) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1bb4,	// (0x00027f94) cell_vitu2_dropdown_list_ctrl_pane

0xd3cc,	// (0x000337ac) cell_vitu2_dropdown_list_char_pane_g1

0xd3d5,	// (0x000337b5) cell_vitu2_dropdown_list_char_pane_g2

0xd3de,	// (0x000337be) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x00035e09) cell_vitu2_dropdown_list_char_pane_g

0x1be2,	// (0x00027fc2) cell_vitu2_dropdown_list_char_pane_t1

0x88cf,	// (0x0002ecaf) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x88cf,	// (0x0002ecaf) cell_vitu2_dropdown_list_ctrl_pane_g1

0x88df,	// (0x0002ecbf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x88df,	// (0x0002ecbf) cell_vitu2_dropdown_list_ctrl_pane_g2

0x88f0,	// (0x0002ecd0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x88f0,	// (0x0002ecd0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1bf0,	// (0x00027fd0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1bf0,	// (0x00027fd0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcfee,	// (0x000333ce) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcfee,	// (0x000333ce) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00035e10) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00035e10) cell_vitu2_dropdown_list_ctrl_pane_g

0x8900,	// (0x0002ece0) aid_size_cell_gallery2_ParamLimits

0x8900,	// (0x0002ece0) aid_size_cell_gallery2

0x8916,	// (0x0002ecf6) grid_gallery2_pane_ParamLimits

0x8916,	// (0x0002ecf6) grid_gallery2_pane

0x892a,	// (0x0002ed0a) scroll_pane_cp029_ParamLimits

0x892a,	// (0x0002ed0a) scroll_pane_cp029

0x8936,	// (0x0002ed16) cell_gallery2_pane_ParamLimits

0x8936,	// (0x0002ed16) cell_gallery2_pane

0xd3e7,	// (0x000337c7) cell_gallery2_pane_g2

0x8970,	// (0x0002ed50) cell_gallery2_pane_g3

0xd3f1,	// (0x000337d1) cell_gallery2_pane_g4

0xd3f9,	// (0x000337d9) cell_gallery2_pane_g5

0x4ec1,	// (0x0002b2a1) grid_highlight_pane_cp10

0x18e3,	// (0x00027cc3) popup_vitu2_match_list_window_ParamLimits

0x18fa,	// (0x00027cda) popup_vitu2_query_window_ParamLimits

0x18fa,	// (0x00027cda) popup_vitu2_query_window

0xb0d4,	// (0x000314b4) bg_vitu2_candi_button_pane

0xd3cc,	// (0x000337ac) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3d5,	// (0x000337b5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3de,	// (0x000337be) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8978,	// (0x0002ed58) bg_button_pane_cp015

0x898c,	// (0x0002ed6c) bg_button_pane_cp016

0x899f,	// (0x0002ed7f) bg_button_pane_cp017

0xbde5,	// (0x000321c5) bg_popup_sub_pane_cp22

0xd401,	// (0x000337e1) popup_vitu2_query_window_g1

0x89e4,	// (0x0002edc4) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00035e1b) popup_vitu2_query_window_g

0x8a03,	// (0x0002ede3) popup_vitu2_query_window_t1_ParamLimits

0x8a03,	// (0x0002ede3) popup_vitu2_query_window_t1

0x8a38,	// (0x0002ee18) popup_vitu2_query_window_t2_ParamLimits

0x8a38,	// (0x0002ee18) popup_vitu2_query_window_t2

0x8a4a,	// (0x0002ee2a) popup_vitu2_query_window_t3_ParamLimits

0x8a4a,	// (0x0002ee2a) popup_vitu2_query_window_t3

0x8a72,	// (0x0002ee52) popup_vitu2_query_window_t4_ParamLimits

0x8a72,	// (0x0002ee52) popup_vitu2_query_window_t4

0x8a93,	// (0x0002ee73) popup_vitu2_query_window_t5_ParamLimits

0x8a93,	// (0x0002ee73) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00035e22) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00035e22) popup_vitu2_query_window_t

0xd1ef,	// (0x000335cf) main_cset_text_pane

0x84ae,	// (0x0002e88e) aid_area_touch_slider_ParamLimits

0x84ca,	// (0x0002e8aa) cset_slider_pane_ParamLimits

0x84f4,	// (0x0002e8d4) main_cset_slider_pane_g1_ParamLimits

0x8509,	// (0x0002e8e9) main_cset_slider_pane_g2_ParamLimits

0xd210,	// (0x000335f0) main_cset_slider_pane_g3_ParamLimits

0xd210,	// (0x000335f0) main_cset_slider_pane_g3

0x851e,	// (0x0002e8fe) main_cset_slider_pane_g4_ParamLimits

0x851e,	// (0x0002e8fe) main_cset_slider_pane_g4

0x852d,	// (0x0002e90d) main_cset_slider_pane_g5_ParamLimits

0x852d,	// (0x0002e90d) main_cset_slider_pane_g5

0x853b,	// (0x0002e91b) main_cset_slider_pane_g6_ParamLimits

0x853b,	// (0x0002e91b) main_cset_slider_pane_g6

0xf995,	// (0x00035d75) main_cset_slider_pane_g_ParamLimits

0xd240,	// (0x00033620) main_cset_slider_pane_t1_ParamLimits

0x85cb,	// (0x0002e9ab) main_cset_slider_pane_t2_ParamLimits

0x85e5,	// (0x0002e9c5) main_cset_slider_pane_t3_ParamLimits

0x85ff,	// (0x0002e9df) main_cset_slider_pane_t4_ParamLimits

0x8619,	// (0x0002e9f9) main_cset_slider_pane_t5_ParamLimits

0x8637,	// (0x0002ea17) main_cset_slider_pane_t6_ParamLimits

0x864e,	// (0x0002ea2e) main_cset_slider_pane_t7_ParamLimits

0x867c,	// (0x0002ea5c) main_cset_slider_pane_t8_ParamLimits

0x867c,	// (0x0002ea5c) main_cset_slider_pane_t8

0x86a4,	// (0x0002ea84) main_cset_slider_pane_t9_ParamLimits

0x86a4,	// (0x0002ea84) main_cset_slider_pane_t9

0x86cc,	// (0x0002eaac) main_cset_slider_pane_t10_ParamLimits

0x86cc,	// (0x0002eaac) main_cset_slider_pane_t10

0x86f4,	// (0x0002ead4) main_cset_slider_pane_t11_ParamLimits

0x86f4,	// (0x0002ead4) main_cset_slider_pane_t11

0x871e,	// (0x0002eafe) main_cset_slider_pane_t12_ParamLimits

0x871e,	// (0x0002eafe) main_cset_slider_pane_t12

0x873b,	// (0x0002eb1b) main_cset_slider_pane_t13_ParamLimits

0x873b,	// (0x0002eb1b) main_cset_slider_pane_t13

0xf9ba,	// (0x00035d9a) main_cset_slider_pane_t_ParamLimits

0x1c7f,	// (0x0002805f) bg_popup_sub_pane_cp011

0xd40d,	// (0x000337ed) main_cset_text_pane_g1

0xd415,	// (0x000337f5) main_cset_text_pane_t1

0xd423,	// (0x00033803) main_cset_text_pane_t2

0xd431,	// (0x00033811) main_cset_text_pane_t3

0xd43f,	// (0x0003381f) main_cset_text_pane_t4

0xd44d,	// (0x0003382d) main_cset_text_pane_t5

0xd45b,	// (0x0003383b) main_cset_text_pane_t6

0xd469,	// (0x00033849) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00035e31) main_cset_text_pane_t

0x1c7f,	// (0x0002805f) main_cam4_burst_pane

0x1c7f,	// (0x0002805f) main_cam5_pane

0x83e3,	// (0x0002e7c3) bg_button_pane_cp019

0x83ec,	// (0x0002e7cc) bg_button_pane_cp020

0xd21c,	// (0x000335fc) main_cset_slider_pane_g7_ParamLimits

0xd21c,	// (0x000335fc) main_cset_slider_pane_g7

0xd228,	// (0x00033608) main_cset_slider_pane_g8_ParamLimits

0xd228,	// (0x00033608) main_cset_slider_pane_g8

0x854f,	// (0x0002e92f) main_cset_slider_pane_g9_ParamLimits

0x854f,	// (0x0002e92f) main_cset_slider_pane_g9

0x855b,	// (0x0002e93b) main_cset_slider_pane_g10_ParamLimits

0x855b,	// (0x0002e93b) main_cset_slider_pane_g10

0x8567,	// (0x0002e947) main_cset_slider_pane_g11_ParamLimits

0x8567,	// (0x0002e947) main_cset_slider_pane_g11

0x8573,	// (0x0002e953) main_cset_slider_pane_g12_ParamLimits

0x8573,	// (0x0002e953) main_cset_slider_pane_g12

0x857f,	// (0x0002e95f) main_cset_slider_pane_g13_ParamLimits

0x857f,	// (0x0002e95f) main_cset_slider_pane_g13

0x858b,	// (0x0002e96b) main_cset_slider_pane_g14_ParamLimits

0x858b,	// (0x0002e96b) main_cset_slider_pane_g14

0x8597,	// (0x0002e977) main_cset_slider_pane_g15_ParamLimits

0x8597,	// (0x0002e977) main_cset_slider_pane_g15

0xd26e,	// (0x0003364e) main_cset_slider_pane_t14_ParamLimits

0xd26e,	// (0x0003364e) main_cset_slider_pane_t14

0xd2a7,	// (0x00033687) main_cset_slider_pane_t15_ParamLimits

0xd2a7,	// (0x00033687) main_cset_slider_pane_t15

0x8b0a,	// (0x0002eeea) aid_cam4_burst_size_cell_ParamLimits

0x8b0a,	// (0x0002eeea) aid_cam4_burst_size_cell

0x8b2a,	// (0x0002ef0a) grid_cam4_burst_pane_ParamLimits

0x8b2a,	// (0x0002ef0a) grid_cam4_burst_pane

0x8b64,	// (0x0002ef44) linegrid_cam4_burst_pane_ParamLimits

0x8b64,	// (0x0002ef44) linegrid_cam4_burst_pane

0xd477,	// (0x00033857) scroll_pane_cp30_ParamLimits

0xd477,	// (0x00033857) scroll_pane_cp30

0x8b88,	// (0x0002ef68) cell_cam4_burst_pane_ParamLimits

0x8b88,	// (0x0002ef68) cell_cam4_burst_pane

0xd483,	// (0x00033863) linegrid_cam4_burst_pane_g1_ParamLimits

0xd483,	// (0x00033863) linegrid_cam4_burst_pane_g1

0x8bdd,	// (0x0002efbd) linegrid_cam4_burst_pane_g2_ParamLimits

0x8bdd,	// (0x0002efbd) linegrid_cam4_burst_pane_g2

0xd490,	// (0x00033870) linegrid_cam4_burst_pane_g3_ParamLimits

0xd490,	// (0x00033870) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00035e40) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00035e40) linegrid_cam4_burst_pane_g

0x8bee,	// (0x0002efce) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8bee,	// (0x0002efce) linegrid_cam4_burst_pane_g3_copy1

0xd49d,	// (0x0003387d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd49d,	// (0x0003387d) linegrid_cam4_burst_pane_g4

0x8c0c,	// (0x0002efec) linegrid_cam4_burst_pane_g5_ParamLimits

0x8c0c,	// (0x0002efec) linegrid_cam4_burst_pane_g5

0x8c1d,	// (0x0002effd) linegrid_cam4_burst_pane_g6_ParamLimits

0x8c1d,	// (0x0002effd) linegrid_cam4_burst_pane_g6

0xd4aa,	// (0x0003388a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4aa,	// (0x0003388a) linegrid_cam4_burst_pane_g7

0x8c34,	// (0x0002f014) cell_cam4_burst_pane_g1

0xd4c3,	// (0x000338a3) main_cam5_pane_t1_ParamLimits

0xd4c3,	// (0x000338a3) main_cam5_pane_t1

0xd4d5,	// (0x000338b5) main_cam5_pane_t2_ParamLimits

0xd4d5,	// (0x000338b5) main_cam5_pane_t2

0xd4e7,	// (0x000338c7) main_cam5_pane_t3_ParamLimits

0xd4e7,	// (0x000338c7) main_cam5_pane_t3

0xd4f9,	// (0x000338d9) main_cam5_pane_t4_ParamLimits

0xd4f9,	// (0x000338d9) main_cam5_pane_t4

0xd511,	// (0x000338f1) main_cam5_pane_t5_ParamLimits

0xd511,	// (0x000338f1) main_cam5_pane_t5

0xd525,	// (0x00033905) main_cam5_pane_t6_ParamLimits

0xd525,	// (0x00033905) main_cam5_pane_t6

0xd539,	// (0x00033919) main_cam5_pane_t7_ParamLimits

0xd539,	// (0x00033919) main_cam5_pane_t7

0xd54b,	// (0x0003392b) main_cam5_pane_t8_ParamLimits

0xd54b,	// (0x0003392b) main_cam5_pane_t8

0xd569,	// (0x00033949) main_cam5_pane_t9_ParamLimits

0xd569,	// (0x00033949) main_cam5_pane_t9

0xd57b,	// (0x0003395b) main_cam5_pane_t10_ParamLimits

0xd57b,	// (0x0003395b) main_cam5_pane_t10

0xd58d,	// (0x0003396d) main_cam5_pane_t11_ParamLimits

0xd58d,	// (0x0003396d) main_cam5_pane_t11

0xd5a1,	// (0x00033981) main_cam5_pane_t12_ParamLimits

0xd5a1,	// (0x00033981) main_cam5_pane_t12

0xd5b8,	// (0x00033998) main_cam5_pane_t13_ParamLimits

0xd5b8,	// (0x00033998) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x00035e4c) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x00035e4c) main_cam5_pane_t

0x1ec0,	// (0x000282a0) popup_scut_keymap_window_ParamLimits

0x1ec0,	// (0x000282a0) popup_scut_keymap_window

0x8c47,	// (0x0002f027) aid_size_cell_brow_shortcut

0x4ec1,	// (0x0002b2a1) bg_popup_window_pane_cp010

0x8c53,	// (0x0002f033) grid_scut_pane

0x8c5f,	// (0x0002f03f) cell_scut_pane_ParamLimits

0x8c5f,	// (0x0002f03f) cell_scut_pane

0x8c78,	// (0x0002f058) cell_scut_pane_g1

0xd5db,	// (0x000339bb) cell_scut_pane_t1

0xd5ea,	// (0x000339ca) cell_scut_pane_t2

0x8c81,	// (0x0002f061) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00035e67) cell_scut_pane_t

0x731f,	// (0x0002d6ff) main_mup3_pane_g8_ParamLimits

0x731f,	// (0x0002d6ff) main_mup3_pane_g8

0x17e5,	// (0x00027bc5) area_vitu2_query_pane_ParamLimits

0x17e5,	// (0x00027bc5) area_vitu2_query_pane

0x89b2,	// (0x0002ed92) input_focus_pane_cp08

0xd5f9,	// (0x000339d9) area_vitu2_query_pane_g1

0x8c8f,	// (0x0002f06f) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00035e6e) area_vitu2_query_pane_g

0x8ca0,	// (0x0002f080) area_vitu2_query_pane_t1_ParamLimits

0x8ca0,	// (0x0002f080) area_vitu2_query_pane_t1

0x8cb4,	// (0x0002f094) area_vitu2_query_pane_t2_ParamLimits

0x8cb4,	// (0x0002f094) area_vitu2_query_pane_t2

0x8cc8,	// (0x0002f0a8) area_vitu2_query_pane_t3_ParamLimits

0x8cc8,	// (0x0002f0a8) area_vitu2_query_pane_t3

0xd605,	// (0x000339e5) area_vitu2_query_pane_t4_ParamLimits

0xd605,	// (0x000339e5) area_vitu2_query_pane_t4

0xd62d,	// (0x00033a0d) area_vitu2_query_pane_t5_ParamLimits

0xd62d,	// (0x00033a0d) area_vitu2_query_pane_t5

0xd655,	// (0x00033a35) area_vitu2_query_pane_t6_ParamLimits

0xd655,	// (0x00033a35) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00035e73) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00035e73) area_vitu2_query_pane_t

0x8cf0,	// (0x0002f0d0) bg_button_pane_cp018

0x8cfe,	// (0x0002f0de) bg_button_pane_cp021

0x8d0a,	// (0x0002f0ea) bg_button_pane_cp022

0x8d1b,	// (0x0002f0fb) input_focus_pane_cp09

0x4ce6,	// (0x0002b0c6) aid_size_touch_mv_arrow_left

0x4d0f,	// (0x0002b0ef) aid_size_touch_mv_arrow_right

0x85af,	// (0x0002e98f) main_cset_slider_pane_g16_ParamLimits

0x85af,	// (0x0002e98f) main_cset_slider_pane_g16

0x85bd,	// (0x0002e99d) main_cset_slider_pane_g17_ParamLimits

0x85bd,	// (0x0002e99d) main_cset_slider_pane_g17

0x8c34,	// (0x0002f014) cell_cam4_burst_pane_g1_ParamLimits

0x1c7f,	// (0x0002805f) compa_mode_pane

0x87c5,	// (0x0002eba5) popup_vtel_slider_window_g3_ParamLimits

0x87c5,	// (0x0002eba5) popup_vtel_slider_window_g3

0x87dc,	// (0x0002ebbc) popup_vtel_slider_window_g4_ParamLimits

0x87dc,	// (0x0002ebbc) popup_vtel_slider_window_g4

0x87f3,	// (0x0002ebd3) popup_vtel_slider_window_t1_ParamLimits

0x87f3,	// (0x0002ebd3) popup_vtel_slider_window_t1

0x1c7f,	// (0x0002805f) main_cl_pane

0xbe11,	// (0x000321f1) popup_imed_adjust2_window_ParamLimits

0xbde5,	// (0x000321c5) bg_tb_trans_pane_cp05_ParamLimits

0xc85d,	// (0x00032c3d) popup_imed_adjust2_window_g1_ParamLimits

0xc86c,	// (0x00032c4c) popup_imed_adjust2_window_g2_ParamLimits

0xc86c,	// (0x00032c4c) popup_imed_adjust2_window_g2

0xc878,	// (0x00032c58) popup_imed_adjust2_window_g3_ParamLimits

0xc878,	// (0x00032c58) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00035bde) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00035bde) popup_imed_adjust2_window_g

0xc884,	// (0x00032c64) popup_imed_adjust2_window_t1_ParamLimits

0xc89c,	// (0x00032c7c) slider_imed_adjust_pane_ParamLimits

0xc8b0,	// (0x00032c90) slider_imed_adjust_pane_g1_ParamLimits

0xc8c0,	// (0x00032ca0) slider_imed_adjust_pane_g2_ParamLimits

0xc8d0,	// (0x00032cb0) slider_imed_adjust_pane_g3_ParamLimits

0xc8e1,	// (0x00032cc1) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00035be5) slider_imed_adjust_pane_g_ParamLimits

0x156b,	// (0x0002794b) aid_touch_area_cam4_ParamLimits

0x156b,	// (0x0002794b) aid_touch_area_cam4

0xcfbc,	// (0x0003339c) battery_pane_cp01

0x1616,	// (0x000279f6) main_camera4_pane_g6_ParamLimits

0x1616,	// (0x000279f6) main_camera4_pane_g6

0x1639,	// (0x00027a19) main_camera4_pane_t2_ParamLimits

0x1639,	// (0x00027a19) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00035ce8) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00035ce8) main_camera4_pane_t

0x165a,	// (0x00027a3a) aid_touch_area_vid4_ParamLimits

0x165a,	// (0x00027a3a) aid_touch_area_vid4

0x16b8,	// (0x00027a98) main_video4_pane_g5_ParamLimits

0x16b8,	// (0x00027a98) main_video4_pane_g5

0x16df,	// (0x00027abf) vid4_progress_pane_ParamLimits

0x16df,	// (0x00027abf) vid4_progress_pane

0xd234,	// (0x00033614) main_cset_slider_pane_g18_ParamLimits

0xd234,	// (0x00033614) main_cset_slider_pane_g18

0xd4b7,	// (0x00033897) cell_cam4_burst_pane_g2_ParamLimits

0xd4b7,	// (0x00033897) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00035e47) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00035e47) cell_cam4_burst_pane_g

0x28f7,	// (0x00028cd7) bg_cl_pane_ParamLimits

0x28f7,	// (0x00028cd7) bg_cl_pane

0x8d2c,	// (0x0002f10c) cl_header_pane_ParamLimits

0x8d2c,	// (0x0002f10c) cl_header_pane

0x8d40,	// (0x0002f120) cl_listscroll_pane_ParamLimits

0x8d40,	// (0x0002f120) cl_listscroll_pane

0xd6a1,	// (0x00033a81) bg_cl_pane_g1

0xd6a9,	// (0x00033a89) bg_cl_pane_g2

0xd6b1,	// (0x00033a91) bg_cl_pane_g3

0xd6b9,	// (0x00033a99) bg_cl_pane_g4

0xd6c1,	// (0x00033aa1) bg_cl_pane_g5

0xd6c9,	// (0x00033aa9) bg_cl_pane_g6

0xd6d1,	// (0x00033ab1) bg_cl_pane_g7

0xd6d9,	// (0x00033ab9) bg_cl_pane_g8

0xd6e1,	// (0x00033ac1) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x00035e82) bg_cl_pane_g

0x8d50,	// (0x0002f130) aid_height_cl_leading_ParamLimits

0x8d50,	// (0x0002f130) aid_height_cl_leading

0x8d5c,	// (0x0002f13c) aid_height_cl_text_ParamLimits

0x8d5c,	// (0x0002f13c) aid_height_cl_text

0x1efa,	// (0x000282da) bg_cl_header_pane_ParamLimits

0x1efa,	// (0x000282da) bg_cl_header_pane

0x8d7b,	// (0x0002f15b) cl_header_pane_g1_ParamLimits

0x8d7b,	// (0x0002f15b) cl_header_pane_g1

0x8d91,	// (0x0002f171) cl_header_pane_t1_ParamLimits

0x8d91,	// (0x0002f171) cl_header_pane_t1

0xd6e9,	// (0x00033ac9) cl_list_pane

0xd207,	// (0x000335e7) hc_scroll_pane_cp01

0x398f,	// (0x00029d6f) bg_cl_header_pane_g1

0xd0e9,	// (0x000334c9) bg_cl_header_pane_g2

0x39af,	// (0x00029d8f) bg_cl_header_pane_g3

0xd0f9,	// (0x000334d9) bg_cl_header_pane_g4

0xd0f1,	// (0x000334d1) bg_cl_header_pane_g5

0xd384,	// (0x00033764) bg_cl_header_pane_g6

0xd111,	// (0x000334f1) bg_cl_header_pane_g7

0xd119,	// (0x000334f9) bg_cl_header_pane_g8

0xd109,	// (0x000334e9) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x00035e95) bg_cl_header_pane_g

0x8daa,	// (0x0002f18a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8daa,	// (0x0002f18a) hc_cl_list_double_graphic_heading_pane

0x8dbd,	// (0x0002f19d) hc_cl_list_single_graphic_pane_ParamLimits

0x8dbd,	// (0x0002f19d) hc_cl_list_single_graphic_pane

0x8dd5,	// (0x0002f1b5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8dd5,	// (0x0002f1b5) hc_cl_list_single_graphic_pane_g1

0x8de1,	// (0x0002f1c1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8de1,	// (0x0002f1c1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00035ea8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00035ea8) hc_cl_list_single_graphic_pane_g

0x8df5,	// (0x0002f1d5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8df5,	// (0x0002f1d5) hc_cl_list_single_graphic_pane_t1

0x8dd5,	// (0x0002f1b5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8dd5,	// (0x0002f1b5) hc_cl_list_double_graphic_heading_pane_g1

0x8e0a,	// (0x0002f1ea) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8e0a,	// (0x0002f1ea) hc_cl_list_double_graphic_heading_pane_g2

0x8e1e,	// (0x0002f1fe) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8e1e,	// (0x0002f1fe) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00035ead) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00035ead) hc_cl_list_double_graphic_heading_pane_g

0x8e32,	// (0x0002f212) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8e32,	// (0x0002f212) hc_cl_list_double_graphic_heading_pane_t1

0x8e47,	// (0x0002f227) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8e47,	// (0x0002f227) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00035eb4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00035eb4) hc_cl_list_double_graphic_heading_pane_t

0xd6fa,	// (0x00033ada) vid4_progress_pane_g1

0xd706,	// (0x00033ae6) vid4_progress_pane_g2

0xd712,	// (0x00033af2) vid4_progress_pane_g3

0xd721,	// (0x00033b01) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00035eb9) vid4_progress_pane_g

0xd73f,	// (0x00033b1f) vid4_progress_pane_t1

0xd755,	// (0x00033b35) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00035ec4) vid4_progress_pane_t

0xd780,	// (0x00033b60) wait_bar_pane_cp07

0xc107,	// (0x000324e7) blid_firmament_pane_ParamLimits

0xc14a,	// (0x0003252a) popup_blid_sat_info2_window_g1

0xc16e,	// (0x0003254e) popup_blid_sat_info2_window_t3

0xc17c,	// (0x0003255c) popup_blid_sat_info2_window_t4

0xc18a,	// (0x0003256a) popup_blid_sat_info2_window_t5

0xc198,	// (0x00032578) popup_blid_sat_info2_window_t6

0xc1a8,	// (0x00032588) popup_blid_sat_info2_window_t7

0xc1b6,	// (0x00032596) popup_blid_sat_info2_window_t8

0xc1c4,	// (0x000325a4) popup_blid_sat_info2_window_t9

0xc1d2,	// (0x000325b2) popup_blid_sat_info2_window_t10

0xc29a,	// (0x0003267a) aid_firma_cardinal_ParamLimits

0xc2ae,	// (0x0003268e) blid_firmament_pane_t1_ParamLimits

0xc2c5,	// (0x000326a5) blid_firmament_pane_t2_ParamLimits

0xc2dc,	// (0x000326bc) blid_firmament_pane_t3_ParamLimits

0xc2f3,	// (0x000326d3) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00035ad7) blid_firmament_pane_t_ParamLimits

0xc30a,	// (0x000326ea) blid_sat_info_pane_ParamLimits

0x1efa,	// (0x000282da) main_cam_set_pane_ParamLimits

0x7b4f,	// (0x0002df2f) aid_size_cell_colour_35_ParamLimits

0x7b6f,	// (0x0002df4f) aid_size_cell_colour_112_ParamLimits

0x7b8f,	// (0x0002df6f) aid_size_cell_effect_ParamLimits

0xbde5,	// (0x000321c5) bg_tb_trans_pane_cp02_ParamLimits

0x44db,	// (0x0002a8bb) heading_imed_pane_ParamLimits

0x7baf,	// (0x0002df8f) listscroll_imed_pane_ParamLimits

0xb413,	// (0x000317f3) popup_call2_audio_first_window_g5_ParamLimits

0xb413,	// (0x000317f3) popup_call2_audio_first_window_g5

0x1346,	// (0x00027726) aid_size_touch_image3_arrow_left_ParamLimits

0x1346,	// (0x00027726) aid_size_touch_image3_arrow_left

0x1372,	// (0x00027752) aid_size_touch_image3_arrow_right_ParamLimits

0x1372,	// (0x00027752) aid_size_touch_image3_arrow_right

0xd76b,	// (0x00033b4b) vid4_progress_pane_t3

0x7ecc,	// (0x0002e2ac) main_hwr_training_symbol_option_pane_ParamLimits

0x7ecc,	// (0x0002e2ac) main_hwr_training_symbol_option_pane

0xcb4c,	// (0x00032f2c) popup_hwr_training_preview_window_ParamLimits

0xcb4c,	// (0x00032f2c) popup_hwr_training_preview_window

0x11d9,	// (0x000275b9) hwr_training_navi_pane_g5_ParamLimits

0x11d9,	// (0x000275b9) hwr_training_navi_pane_g5

0xd0c9,	// (0x000334a9) popup_char_count_window

0xd0d1,	// (0x000334b1) bg_popup_sub_pane_cp20_ParamLimits

0x1b73,	// (0x00027f53) list_vitu2_match_list_pane_ParamLimits

0x1b82,	// (0x00027f62) vitu2_page_scroll_pane_ParamLimits

0x1b82,	// (0x00027f62) vitu2_page_scroll_pane

0xd7ec,	// (0x00033bcc) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7ec,	// (0x00033bcc) list_single_hwr_training_symbol_option_pane

0xd7ff,	// (0x00033bdf) list_single_hwr_training_symbol_option_pane_g1

0xd807,	// (0x00033be7) list_single_hwr_training_symbol_option_pane_t1

0xd815,	// (0x00033bf5) bg_button_pane_cp023

0xd81e,	// (0x00033bfe) bg_button_pane_cp024

0x8e5c,	// (0x0002f23c) vitu2_page_scroll_pane_g1

0x8e64,	// (0x0002f244) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00035ecb) vitu2_page_scroll_pane_g

0x8e6e,	// (0x0002f24e) vitu2_page_scroll_pane_t1

0xc023,	// (0x00032403) popup_char_count_window_g1

0xd851,	// (0x00033c31) popup_char_count_window_g2

0xd85a,	// (0x00033c3a) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00035ed0) popup_char_count_window_g

0xd863,	// (0x00033c43) popup_char_count_window_t1

0x1c7f,	// (0x0002805f) main_vded2_pane

0xc849,	// (0x00032c29) aid_size_cell_imed_line

0xc853,	// (0x00032c33) grid_imed_line_width_pane

0x174f,	// (0x00027b2f) vid4_indicators_pane_g4

0xd871,	// (0x00033c51) cell_imed_line_width_pane_ParamLimits

0xd871,	// (0x00033c51) cell_imed_line_width_pane

0xd887,	// (0x00033c67) cell_imed_line_width_pane_g1

0xc0b5,	// (0x00032495) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00035ed7) cell_imed_line_width_pane_g

0x8e7d,	// (0x0002f25d) main_vded2_pane_g1_ParamLimits

0x8e7d,	// (0x0002f25d) main_vded2_pane_g1

0x8e98,	// (0x0002f278) main_vded2_pane_g2_ParamLimits

0x8e98,	// (0x0002f278) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00035edc) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00035edc) main_vded2_pane_g

0x8eaa,	// (0x0002f28a) vded2_slider_pane_ParamLimits

0x8eaa,	// (0x0002f28a) vded2_slider_pane

0x8eba,	// (0x0002f29a) aid_size_touch_vded2_end

0x8ec4,	// (0x0002f2a4) aid_size_touch_vded2_playhead

0xd890,	// (0x00033c70) aid_size_touch_vded2_start

0xd898,	// (0x00033c78) vded2_slider_bg_pane

0xd8a1,	// (0x00033c81) vded2_slider_pane_g1

0xd8aa,	// (0x00033c8a) vded2_slider_pane_g2

0x8ece,	// (0x0002f2ae) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00035ee1) vded2_slider_pane_g

0xd8b2,	// (0x00033c92) vded2_slider_bg_pane_g1

0xd8bb,	// (0x00033c9b) vded2_slider_bg_pane_g2

0xd8c4,	// (0x00033ca4) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x00035ee8) vded2_slider_bg_pane_g

0x563a,	// (0x0002ba1a) aid_postcard_touch_down_pane_ParamLimits

0x563a,	// (0x0002ba1a) aid_postcard_touch_down_pane

0x5652,	// (0x0002ba32) aid_postcard_touch_up_pane_ParamLimits

0x5652,	// (0x0002ba32) aid_postcard_touch_up_pane

0x1c7f,	// (0x0002805f) main_blid2_pane

0xbdf3,	// (0x000321d3) popup_blid2_search_window

0x1c7f,	// (0x0002805f) blid2_gps_pane

0x1c7f,	// (0x0002805f) blid2_navig_pane

0x1c7f,	// (0x0002805f) blid2_search_pane

0x1c7f,	// (0x0002805f) blid2_tripm_pane

0x8ed9,	// (0x0002f2b9) blid2_search_pane_g1_ParamLimits

0x8ed9,	// (0x0002f2b9) blid2_search_pane_g1

0x8ef1,	// (0x0002f2d1) blid2_search_pane_t1_ParamLimits

0x8ef1,	// (0x0002f2d1) blid2_search_pane_t1

0x8f03,	// (0x0002f2e3) aid_size_cell_blid2_gps_ParamLimits

0x8f03,	// (0x0002f2e3) aid_size_cell_blid2_gps

0x8f1b,	// (0x0002f2fb) blid2_gps_pane_g1_ParamLimits

0x8f1b,	// (0x0002f2fb) blid2_gps_pane_g1

0x8f2f,	// (0x0002f30f) grid_blid2_satellite_pane_ParamLimits

0x8f2f,	// (0x0002f30f) grid_blid2_satellite_pane

0x8f47,	// (0x0002f327) blid2_navig_pane_g1_ParamLimits

0x8f47,	// (0x0002f327) blid2_navig_pane_g1

0x8f53,	// (0x0002f333) blid2_navig_pane_t1_ParamLimits

0x8f53,	// (0x0002f333) blid2_navig_pane_t1

0x8f6e,	// (0x0002f34e) blid2_navig_pane_t2_ParamLimits

0x8f6e,	// (0x0002f34e) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00035eef) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00035eef) blid2_navig_pane_t

0x8f89,	// (0x0002f369) blid2_navig_ring_pane_ParamLimits

0x8f89,	// (0x0002f369) blid2_navig_ring_pane

0x8fa4,	// (0x0002f384) blid2_speed_pane_ParamLimits

0x8fa4,	// (0x0002f384) blid2_speed_pane

0x8fb0,	// (0x0002f390) blid2_tripm_pane_g1_ParamLimits

0x8fb0,	// (0x0002f390) blid2_tripm_pane_g1

0x8fcb,	// (0x0002f3ab) blid2_tripm_pane_g2_ParamLimits

0x8fcb,	// (0x0002f3ab) blid2_tripm_pane_g2

0x8fdf,	// (0x0002f3bf) blid2_tripm_pane_g3_ParamLimits

0x8fdf,	// (0x0002f3bf) blid2_tripm_pane_g3

0x8ff3,	// (0x0002f3d3) blid2_tripm_pane_g4_ParamLimits

0x8ff3,	// (0x0002f3d3) blid2_tripm_pane_g4

0x9007,	// (0x0002f3e7) blid2_tripm_pane_g5_ParamLimits

0x9007,	// (0x0002f3e7) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00035ef4) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00035ef4) blid2_tripm_pane_g

0x902d,	// (0x0002f40d) blid2_tripm_pane_t1_ParamLimits

0x902d,	// (0x0002f40d) blid2_tripm_pane_t1

0x9048,	// (0x0002f428) blid2_tripm_pane_t2_ParamLimits

0x9048,	// (0x0002f428) blid2_tripm_pane_t2

0x9061,	// (0x0002f441) blid2_tripm_pane_t3_ParamLimits

0x9061,	// (0x0002f441) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00035f01) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00035f01) blid2_tripm_pane_t

0x90a8,	// (0x0002f488) cell_blid2_satellite_pane_ParamLimits

0x90a8,	// (0x0002f488) cell_blid2_satellite_pane

0x90c4,	// (0x0002f4a4) cell_blid2_satellite_pane_g1

0xd8cd,	// (0x00033cad) cell_blid2_satellite_pane_t1

0xc31a,	// (0x000326fa) blid2_speed_pane_g1

0xd8db,	// (0x00033cbb) blid2_speed_pane_t1

0xd8e9,	// (0x00033cc9) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x00035f0a) blid2_speed_pane_t

0xc31a,	// (0x000326fa) blid2_navig_ring_pane_g1

0x90cd,	// (0x0002f4ad) blid2_navig_ring_pane_g2

0x90d5,	// (0x0002f4b5) blid2_navig_ring_pane_g3

0x90dd,	// (0x0002f4bd) blid2_navig_ring_pane_g4

0x90e5,	// (0x0002f4c5) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00035f0f) blid2_navig_ring_pane_g

0x1c7f,	// (0x0002805f) bg_popup_window_pane_cp011

0xd8f7,	// (0x00033cd7) popup_blid2_search_window_g1

0xd8ff,	// (0x00033cdf) popup_blid2_search_window_t1

0xd90d,	// (0x00033ced) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x00035f1a) popup_blid2_search_window_t

0x384c,	// (0x00029c2c) main_browser_pane_g1

0x28f7,	// (0x00028cd7) main_browser_pane_ParamLimits

0xd0d1,	// (0x000334b1) bg_button_pane_cp011_ParamLimits

0x1ae7,	// (0x00027ec7) cell_vitu2_function_pane_g1_ParamLimits

0xbde5,	// (0x000321c5) bg_popup_sub_pane_cp22_ParamLimits

0x89b2,	// (0x0002ed92) input_focus_pane_cp08_ParamLimits

0x89c9,	// (0x0002eda9) popup_vitu2_query_button_pane_ParamLimits

0x89c9,	// (0x0002eda9) popup_vitu2_query_button_pane

0x89da,	// (0x0002edba) popup_vitu2_query_input_button_pane

0xd401,	// (0x000337e1) popup_vitu2_query_window_g1_ParamLimits

0x89e4,	// (0x0002edc4) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00035e1b) popup_vitu2_query_window_g_ParamLimits

0x1c7f,	// (0x0002805f) bg_button_pane_cp026

0x90ed,	// (0x0002f4cd) popup_vitu2_query_input_button_pane_g1

0x1c7f,	// (0x0002805f) bg_button_pane_cp025

0xd91b,	// (0x00033cfb) popup_vitu2_query_button_pane_t1

0x702f,	// (0x0002d40f) main_mp3_pane_t6

0x703d,	// (0x0002d41d) popup_slider_window_cp01

0xcffc,	// (0x000333dc) cam4_battery_pane

0xd063,	// (0x00033443) cam4_battery_pane_cp02

0x1c0c,	// (0x00027fec) cam4_battery_pane_cp01

0xd6f2,	// (0x00033ad2) cam4_battery_pane_cp03

0xce57,	// (0x00033237) cam4_battery_pane_g1

0xc31a,	// (0x000326fa) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00035f1f) cam4_battery_pane_g

0xc1e0,	// (0x000325c0) popup_blid_sat_info2_window_t11

0x4ce6,	// (0x0002b0c6) aid_size_touch_mv_arrow_left_ParamLimits

0x4d0f,	// (0x0002b0ef) aid_size_touch_mv_arrow_right_ParamLimits

0x4d57,	// (0x0002b137) navi_pane_g1_ParamLimits

0x4d63,	// (0x0002b143) navi_pane_g2_ParamLimits

0x4d91,	// (0x0002b171) navi_pane_g3_ParamLimits

0xf409,	// (0x000357e9) navi_pane_g_ParamLimits

0x4e4f,	// (0x0002b22f) navi_pane_mv_t1_ParamLimits

0x7bbb,	// (0x0002df9b) grid_imed_effect_pane_ParamLimits

0x33f8,	// (0x000297d8) aid_placing_vt_slider_lsc

0x3408,	// (0x000297e8) aid_placing_vt_slider_prt

0x1efa,	// (0x000282da) bg_tb_trans_pane_cp01_ParamLimits

0xc46a,	// (0x0003284a) popup_image_details_window_g1_ParamLimits

0xc47d,	// (0x0003285d) popup_image_details_window_g2_ParamLimits

0xc492,	// (0x00032872) popup_image_details_window_g3_ParamLimits

0xc492,	// (0x00032872) popup_image_details_window_g3

0xf73c,	// (0x00035b1c) popup_image_details_window_g_ParamLimits

0xc4a6,	// (0x00032886) popup_image_details_window_t1_ParamLimits

0xc4b8,	// (0x00032898) popup_image_details_window_t2_ParamLimits

0xc4d1,	// (0x000328b1) popup_image_details_window_t3_ParamLimits

0xc4e5,	// (0x000328c5) popup_image_details_window_t4_ParamLimits

0xc500,	// (0x000328e0) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00035b23) popup_image_details_window_t_ParamLimits

0x8d68,	// (0x0002f148) cl_header_name_pane_ParamLimits

0x8d68,	// (0x0002f148) cl_header_name_pane

0x90f5,	// (0x0002f4d5) cl_header_name_pane_t1_ParamLimits

0x90f5,	// (0x0002f4d5) cl_header_name_pane_t1

0x9116,	// (0x0002f4f6) cl_header_name_pane_t2_ParamLimits

0x9116,	// (0x0002f4f6) cl_header_name_pane_t2

0x9158,	// (0x0002f538) cl_header_name_pane_t3_ParamLimits

0x9158,	// (0x0002f538) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x00035f24) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x00035f24) cl_header_name_pane_t

0x4e20,	// (0x0002b200) navi_pane_mv_g2_ParamLimits

0xd086,	// (0x00033466) field_vitu2_entry_pane_g1_ParamLimits

0xd092,	// (0x00033472) field_vitu2_entry_pane_g2_ParamLimits

0xd09e,	// (0x0003347e) field_vitu2_entry_pane_g3_ParamLimits

0xd09e,	// (0x0003347e) field_vitu2_entry_pane_g3

0xf93a,	// (0x00035d1a) field_vitu2_entry_pane_g_ParamLimits

0x1987,	// (0x00027d67) cell_vitu2_itu_pane_g1_ParamLimits

0x1997,	// (0x00027d77) cell_vitu2_itu_pane_g2_ParamLimits

0x1997,	// (0x00027d77) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00035d26) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00035d26) cell_vitu2_itu_pane_g

0xd0d1,	// (0x000334b1) bg_vkb2_func_pane_cp05_ParamLimits

0xd0d1,	// (0x000334b1) bg_vkb2_func_pane_cp05

0xd0d1,	// (0x000334b1) bg_vkb2_func_pane_cp03

0xd0d1,	// (0x000334b1) bg_vkb2_func_pane_cp04

0xd0d1,	// (0x000334b1) bg_vkb2_func_pane_cp10_ParamLimits

0xd0d1,	// (0x000334b1) bg_vkb2_func_pane_cp10

0x8d0a,	// (0x0002f0ea) bg_vkb2_func_pane_cp08

0x8cf0,	// (0x0002f0d0) bg_vkb2_func_pane_cp06

0x8cfe,	// (0x0002f0de) bg_vkb2_func_pane_cp07

0xd827,	// (0x00033c07) bg_vkb2_func_pane_cp11_ParamLimits

0xd827,	// (0x00033c07) bg_vkb2_func_pane_cp11

0xd83c,	// (0x00033c1c) bg_vkb2_func_pane_cp12_ParamLimits

0xd83c,	// (0x00033c1c) bg_vkb2_func_pane_cp12

0x1c7f,	// (0x0002805f) bg_vkb2_func_pane_cp09

0xd0e9,	// (0x000334c9) bg_vkb2_func_pane_g1

0x39af,	// (0x00029d8f) bg_vkb2_func_pane_g2

0xd0f1,	// (0x000334d1) bg_vkb2_func_pane_g3

0xd0f9,	// (0x000334d9) bg_vkb2_func_pane_g4

0xd384,	// (0x00033764) bg_vkb2_func_pane_g5

0xd111,	// (0x000334f1) bg_vkb2_func_pane_g6

0xd119,	// (0x000334f9) bg_vkb2_func_pane_g7

0xd109,	// (0x000334e9) bg_vkb2_func_pane_g8

0x398f,	// (0x00029d6f) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x00035f2b) bg_vkb2_func_pane_g

0x901b,	// (0x0002f3fb) blid2_tripm_pane_g6_ParamLimits

0x901b,	// (0x0002f3fb) blid2_tripm_pane_g6

0xce11,	// (0x000331f1) mp4_progress_pane_g1

0x9094,	// (0x0002f474) blid2_tripm_values_pane_ParamLimits

0x9094,	// (0x0002f474) blid2_tripm_values_pane

0x9189,	// (0x0002f569) blid2_tripm_values_pane_t1

0x9197,	// (0x0002f577) blid2_tripm_values_pane_t2

0x91a5,	// (0x0002f585) blid2_tripm_values_pane_t3

0x91b3,	// (0x0002f593) blid2_tripm_values_pane_t4

0x91c1,	// (0x0002f5a1) blid2_tripm_values_pane_t5

0x91cf,	// (0x0002f5af) blid2_tripm_values_pane_t6

0x91dd,	// (0x0002f5bd) blid2_tripm_values_pane_t7

0x91eb,	// (0x0002f5cb) blid2_tripm_values_pane_t8

0x91f9,	// (0x0002f5d9) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x00035f3e) blid2_tripm_values_pane_t

0x3442,	// (0x00029822) call_video_pane_t1_ParamLimits

0x345c,	// (0x0002983c) call_video_pane_t2_ParamLimits

0xf292,	// (0x00035672) call_video_pane_t_ParamLimits

0x5553,	// (0x0002b933) msg_header_pane_g1_ParamLimits

0x5561,	// (0x0002b941) msg_header_pane_g2_ParamLimits

0x5561,	// (0x0002b941) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0003588c) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0003588c) msg_header_pane_g

0x28f7,	// (0x00028cd7) main_clock2_pane_ParamLimits

0x7946,	// (0x0002dd26) grid_clock2_toolbar_pane_ParamLimits

0x7946,	// (0x0002dd26) grid_clock2_toolbar_pane

0x7946,	// (0x0002dd26) listscroll_clock2_pane_ParamLimits

0x7946,	// (0x0002dd26) listscroll_clock2_pane

0x7a2f,	// (0x0002de0f) main_clock2_pane_t3_ParamLimits

0x7a2f,	// (0x0002de0f) main_clock2_pane_t3

0x7a4a,	// (0x0002de2a) main_clock2_pane_t4_ParamLimits

0x7a4a,	// (0x0002de2a) main_clock2_pane_t4

0xd929,	// (0x00033d09) cell_clock2_toolbar_pane

0xd931,	// (0x00033d11) cell_clock2_toolbar_pane_cp01

0xd931,	// (0x00033d11) cell_clock2_toolbar_pane_cp02

0xd939,	// (0x00033d19) cell_clock2_toolbar_pane_cp03

0xd941,	// (0x00033d21) list_clock2_pane

0x4a70,	// (0x0002ae50) scroll_pane_cp10

0xd949,	// (0x00033d29) list_single_clock2_pane_ParamLimits

0xd949,	// (0x00033d29) list_single_clock2_pane

0x4ec1,	// (0x0002b2a1) list_highlight_pane_cp08

0xd956,	// (0x00033d36) list_single_clock2_pane_t1

0xd964,	// (0x00033d44) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x00035f51) list_single_clock2_pane_t

0x1c7f,	// (0x0002805f) bg_button_pane_cp10

0xd972,	// (0x00033d52) cell_clock2_toolbar_pane_g1

0x0cb7,	// (0x00027097) aid_main_viewer_pane_g1_ParamLimits

0x0cb7,	// (0x00027097) aid_main_viewer_pane_g1

0x0cc5,	// (0x000270a5) aid_main_viewer_pane_g2_ParamLimits

0x0cc5,	// (0x000270a5) aid_main_viewer_pane_g2

0x55f0,	// (0x0002b9d0) aid_main_viewer_pane_g3_ParamLimits

0x55f0,	// (0x0002b9d0) aid_main_viewer_pane_g3

0x55ff,	// (0x0002b9df) aid_main_viewer_pane_g4_ParamLimits

0x55ff,	// (0x0002b9df) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0003589d) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0003589d) aid_main_viewer_pane_g

0x6699,	// (0x0002ca79) main_calc_pane_ParamLimits

0x66ad,	// (0x0002ca8d) main_dialer2_pane_ParamLimits

0x1c7f,	// (0x0002805f) main_cam6_pane

0x1c7f,	// (0x0002805f) main_vid6_pane

0x7952,	// (0x0002dd32) listscroll_gen_pane_cp06_ParamLimits

0x7952,	// (0x0002dd32) listscroll_gen_pane_cp06

0x7a65,	// (0x0002de45) main_clock2_pane_t5_ParamLimits

0x7a65,	// (0x0002de45) main_clock2_pane_t5

0x7ac2,	// (0x0002dea2) aid_call2_pane_cp10_ParamLimits

0x7ad4,	// (0x0002deb4) aid_call_pane_cp10_ParamLimits

0x4c71,	// (0x0002b051) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4c71,	// (0x0002b051) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7ae6,	// (0x0002dec6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7ae6,	// (0x0002dec6) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4c71,	// (0x0002b051) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00035bd3) popup_clock_analogue_window_cp10_g_ParamLimits

0x7afc,	// (0x0002dedc) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7fb4,	// (0x0002e394) cell_dialer2_keypad_pane_g2_ParamLimits

0x7fb4,	// (0x0002e394) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00035cb9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00035cb9) cell_dialer2_keypad_pane_g

0x7fd0,	// (0x0002e3b0) cell_dialer2_keypad_pane_t1

0x84a0,	// (0x0002e880) main_cset_text2_pane_ParamLimits

0x84a0,	// (0x0002e880) main_cset_text2_pane

0xd5f9,	// (0x000339d9) area_vitu2_query_pane_g1_ParamLimits

0x8c8f,	// (0x0002f06f) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00035e6e) area_vitu2_query_pane_g_ParamLimits

0xd67d,	// (0x00033a5d) area_vitu2_query_pane_t7_ParamLimits

0xd67d,	// (0x00033a5d) area_vitu2_query_pane_t7

0x8cf0,	// (0x0002f0d0) bg_button_pane_cp018_ParamLimits

0x8cfe,	// (0x0002f0de) bg_button_pane_cp021_ParamLimits

0x8d0a,	// (0x0002f0ea) bg_button_pane_cp022_ParamLimits

0x8d0a,	// (0x0002f0ea) bg_vkb2_func_pane_cp08_ParamLimits

0x8cf0,	// (0x0002f0d0) bg_vkb2_func_pane_cp06_ParamLimits

0x8cfe,	// (0x0002f0de) bg_vkb2_func_pane_cp07_ParamLimits

0x8d1b,	// (0x0002f0fb) input_focus_pane_cp09_ParamLimits

0xd97a,	// (0x00033d5a) cam6_autofocus_pane_ParamLimits

0xd97a,	// (0x00033d5a) cam6_autofocus_pane

0x1c16,	// (0x00027ff6) cam6_image_uncrop_pane_ParamLimits

0x1c16,	// (0x00027ff6) cam6_image_uncrop_pane

0x1c25,	// (0x00028005) cam6_indi_pane_ParamLimits

0x1c25,	// (0x00028005) cam6_indi_pane

0x1c3b,	// (0x0002801b) cam6_mode_pane_ParamLimits

0x1c3b,	// (0x0002801b) cam6_mode_pane

0x1c4d,	// (0x0002802d) cam6_timer_pane_ParamLimits

0x1c4d,	// (0x0002802d) cam6_timer_pane

0x1c59,	// (0x00028039) cam6_zoom_pane_ParamLimits

0x1c59,	// (0x00028039) cam6_zoom_pane

0x9207,	// (0x0002f5e7) cam6_mode_pane_g1_ParamLimits

0x9207,	// (0x0002f5e7) cam6_mode_pane_g1

0x9217,	// (0x0002f5f7) cam6_mode_pane_g2_ParamLimits

0x9217,	// (0x0002f5f7) cam6_mode_pane_g2

0x9227,	// (0x0002f607) cam6_mode_pane_g3_ParamLimits

0x9227,	// (0x0002f607) cam6_mode_pane_g3

0x9237,	// (0x0002f617) cam6_mode_pane_g4_ParamLimits

0x9237,	// (0x0002f617) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00035f56) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00035f56) cam6_mode_pane_g

0xd988,	// (0x00033d68) bg_tb_trans_pane_cp08_ParamLimits

0xd988,	// (0x00033d68) bg_tb_trans_pane_cp08

0xd996,	// (0x00033d76) cam6_battery_pane_ParamLimits

0xd996,	// (0x00033d76) cam6_battery_pane

0xd9ac,	// (0x00033d8c) cam6_indi_pane_g1_ParamLimits

0xd9ac,	// (0x00033d8c) cam6_indi_pane_g1

0xd9be,	// (0x00033d9e) cam6_indi_pane_g2_ParamLimits

0xd9be,	// (0x00033d9e) cam6_indi_pane_g2

0xd9d0,	// (0x00033db0) cam6_indi_pane_g3_ParamLimits

0xd9d0,	// (0x00033db0) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00035f5f) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00035f5f) cam6_indi_pane_g

0xd9e2,	// (0x00033dc2) cam6_indi_pane_t1_ParamLimits

0xd9e2,	// (0x00033dc2) cam6_indi_pane_t1

0x8154,	// (0x0002e534) cam6_autofocus_pane_g1

0x814c,	// (0x0002e52c) cam6_autofocus_pane_g2

0x8164,	// (0x0002e544) cam6_autofocus_pane_g3

0x815c,	// (0x0002e53c) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x00035f66) cam6_autofocus_pane_g

0xda08,	// (0x00033de8) cam6_timer_pane_g1

0xda10,	// (0x00033df0) cam6_timer_pane_t1

0xda1e,	// (0x00033dfe) cam6_zoom_cont_pane

0xda26,	// (0x00033e06) cam6_zoom_pane_g1

0xda2e,	// (0x00033e0e) cam6_zoom_pane_g2

0x9247,	// (0x0002f627) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00035f6f) cam6_zoom_pane_g

0xc31a,	// (0x000326fa) cam6_battery_pane_g1

0xc31a,	// (0x000326fa) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00035ae0) cam6_battery_pane_g

0xda36,	// (0x00033e16) cam6_zoom_cont_pane_g1

0xda3f,	// (0x00033e1f) cam6_zoom_cont_pane_g2

0xda48,	// (0x00033e28) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x00035f76) cam6_zoom_cont_pane_g

0x9264,	// (0x0002f644) cam6_mode_pane_cp_ParamLimits

0x9264,	// (0x0002f644) cam6_mode_pane_cp

0x9276,	// (0x0002f656) cam6_zoom_pane_cp_ParamLimits

0x9276,	// (0x0002f656) cam6_zoom_pane_cp

0x9284,	// (0x0002f664) vid6_image_uncrop_cif_pane_ParamLimits

0x9284,	// (0x0002f664) vid6_image_uncrop_cif_pane

0x9294,	// (0x0002f674) vid6_image_uncrop_nhd_pane_ParamLimits

0x9294,	// (0x0002f674) vid6_image_uncrop_nhd_pane

0x92a3,	// (0x0002f683) vid6_image_uncrop_vga_pane_ParamLimits

0x92a3,	// (0x0002f683) vid6_image_uncrop_vga_pane

0x92b2,	// (0x0002f692) vid6_image_uncrop_wvga_pane_ParamLimits

0x92b2,	// (0x0002f692) vid6_image_uncrop_wvga_pane

0x92c1,	// (0x0002f6a1) vid6_indi_pane_ParamLimits

0x92c1,	// (0x0002f6a1) vid6_indi_pane

0xd988,	// (0x00033d68) bg_tb_trans_pane_cp09_ParamLimits

0xd988,	// (0x00033d68) bg_tb_trans_pane_cp09

0xda60,	// (0x00033e40) cam6_battery_pane_cp_ParamLimits

0xda60,	// (0x00033e40) cam6_battery_pane_cp

0xda6c,	// (0x00033e4c) vid6_indi_pane_g1_ParamLimits

0xda6c,	// (0x00033e4c) vid6_indi_pane_g1

0xda7e,	// (0x00033e5e) vid6_indi_pane_g2_ParamLimits

0xda7e,	// (0x00033e5e) vid6_indi_pane_g2

0xda90,	// (0x00033e70) vid6_indi_pane_g3_ParamLimits

0xda90,	// (0x00033e70) vid6_indi_pane_g3

0xdaa7,	// (0x00033e87) vid6_indi_pane_g4_ParamLimits

0xdaa7,	// (0x00033e87) vid6_indi_pane_g4

0xdabe,	// (0x00033e9e) vid6_indi_pane_g5_ParamLimits

0xdabe,	// (0x00033e9e) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x00035f7d) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x00035f7d) vid6_indi_pane_g

0xdad8,	// (0x00033eb8) vid6_indi_pane_t1_ParamLimits

0xdad8,	// (0x00033eb8) vid6_indi_pane_t1

0xdaee,	// (0x00033ece) vid6_indi_pane_t2_ParamLimits

0xdaee,	// (0x00033ece) vid6_indi_pane_t2

0xdb16,	// (0x00033ef6) vid6_indi_pane_t3_ParamLimits

0xdb16,	// (0x00033ef6) vid6_indi_pane_t3

0xdb3e,	// (0x00033f1e) vid6_indi_pane_t4_ParamLimits

0xdb3e,	// (0x00033f1e) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x00035f88) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x00035f88) vid6_indi_pane_t

0xdb62,	// (0x00033f42) wait_bar_pane_cp08

0x92d9,	// (0x0002f6b9) main_cset_text2_pane_t1_ParamLimits

0x92d9,	// (0x0002f6b9) main_cset_text2_pane_t1

0x924f,	// (0x0002f62f) listscroll_gen_pane_cp06_t1_ParamLimits

0x924f,	// (0x0002f62f) listscroll_gen_pane_cp06_t1

0x1c7f,	// (0x0002805f) main_cam6_set_pane

0xcfee,	// (0x000333ce) bg_tb_trans_pane_cp06_ParamLimits

0xd004,	// (0x000333e4) cam4_indicators_pane_g1_ParamLimits

0xd011,	// (0x000333f1) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00035cf6) cam4_indicators_pane_g_ParamLimits

0xd031,	// (0x00033411) cam4_indicators_pane_t1_ParamLimits

0xd055,	// (0x00033435) bg_tb_trans_pane_cp07_ParamLimits

0x1728,	// (0x00027b08) vid4_indicators_pane_g1_ParamLimits

0x1735,	// (0x00027b15) vid4_indicators_pane_g2_ParamLimits

0x1742,	// (0x00027b22) vid4_indicators_pane_g3_ParamLimits

0x174f,	// (0x00027b2f) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00035d08) vid4_indicators_pane_g_ParamLimits

0x1767,	// (0x00027b47) vid4_indicators_pane_t1_ParamLimits

0xd6fa,	// (0x00033ada) vid4_progress_pane_g1_ParamLimits

0xd706,	// (0x00033ae6) vid4_progress_pane_g2_ParamLimits

0xd712,	// (0x00033af2) vid4_progress_pane_g3_ParamLimits

0xd721,	// (0x00033b01) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00035eb9) vid4_progress_pane_g_ParamLimits

0xd73f,	// (0x00033b1f) vid4_progress_pane_t1_ParamLimits

0xd755,	// (0x00033b35) vid4_progress_pane_t2_ParamLimits

0xd76b,	// (0x00033b4b) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00035ec4) vid4_progress_pane_t_ParamLimits

0xd780,	// (0x00033b60) wait_bar_pane_cp07_ParamLimits

0x92fa,	// (0x0002f6da) main_cam6_set_pane_g2_ParamLimits

0x92fa,	// (0x0002f6da) main_cam6_set_pane_g2

0x9320,	// (0x0002f700) main_cset6_listscroll_pane_ParamLimits

0x9320,	// (0x0002f700) main_cset6_listscroll_pane

0x933e,	// (0x0002f71e) main_cset6_slider_pane_ParamLimits

0x933e,	// (0x0002f71e) main_cset6_slider_pane

0x9354,	// (0x0002f734) main_cset6_text2_pane_ParamLimits

0x9354,	// (0x0002f734) main_cset6_text2_pane

0xdb71,	// (0x00033f51) main_cset6_text_pane

0xdb79,	// (0x00033f59) main_cset_list_pane_copy1_ParamLimits

0xdb79,	// (0x00033f59) main_cset_list_pane_copy1

0xdb89,	// (0x00033f69) scroll_pane_cp028_copy1

0x9362,	// (0x0002f742) cset_list_set_pane_copy1

0x9376,	// (0x0002f756) aid_position_infowindow_above_copy1

0x937e,	// (0x0002f75e) aid_position_infowindow_below_copy1

0x9386,	// (0x0002f766) cset_list_set_pane_g1_copy1

0xdb92,	// (0x00033f72) cset_list_set_pane_g3_copy1_ParamLimits

0xdb92,	// (0x00033f72) cset_list_set_pane_g3_copy1

0xdba1,	// (0x00033f81) cset_list_set_pane_t1_copy1_ParamLimits

0xdba1,	// (0x00033f81) cset_list_set_pane_t1_copy1

0x1efa,	// (0x000282da) list_highlight_pane_cp021_copy1_ParamLimits

0x1efa,	// (0x000282da) list_highlight_pane_cp021_copy1

0xdbb6,	// (0x00033f96) cset6_slider_pane_ParamLimits

0xdbb6,	// (0x00033f96) cset6_slider_pane

0xdbe2,	// (0x00033fc2) main_cset6_slider_pane_g1_ParamLimits

0xdbe2,	// (0x00033fc2) main_cset6_slider_pane_g1

0x938e,	// (0x0002f76e) main_cset6_slider_pane_g2_ParamLimits

0x938e,	// (0x0002f76e) main_cset6_slider_pane_g2

0xdc0a,	// (0x00033fea) main_cset6_slider_pane_g3_ParamLimits

0xdc0a,	// (0x00033fea) main_cset6_slider_pane_g3

0x93b6,	// (0x0002f796) main_cset6_slider_pane_g4_ParamLimits

0x93b6,	// (0x0002f796) main_cset6_slider_pane_g4

0x93c2,	// (0x0002f7a2) main_cset6_slider_pane_g5_ParamLimits

0x93c2,	// (0x0002f7a2) main_cset6_slider_pane_g5

0xd21c,	// (0x000335fc) main_cset6_slider_pane_g7_ParamLimits

0xd21c,	// (0x000335fc) main_cset6_slider_pane_g7

0xd228,	// (0x00033608) main_cset6_slider_pane_g8_ParamLimits

0xd228,	// (0x00033608) main_cset6_slider_pane_g8

0x854f,	// (0x0002e92f) main_cset6_slider_pane_g9_ParamLimits

0x854f,	// (0x0002e92f) main_cset6_slider_pane_g9

0x855b,	// (0x0002e93b) main_cset6_slider_pane_g10_ParamLimits

0x855b,	// (0x0002e93b) main_cset6_slider_pane_g10

0x8567,	// (0x0002e947) main_cset6_slider_pane_g11_ParamLimits

0x8567,	// (0x0002e947) main_cset6_slider_pane_g11

0x8573,	// (0x0002e953) main_cset6_slider_pane_g12_ParamLimits

0x8573,	// (0x0002e953) main_cset6_slider_pane_g12

0x857f,	// (0x0002e95f) main_cset6_slider_pane_g13_ParamLimits

0x857f,	// (0x0002e95f) main_cset6_slider_pane_g13

0x858b,	// (0x0002e96b) main_cset6_slider_pane_g14_ParamLimits

0x858b,	// (0x0002e96b) main_cset6_slider_pane_g14

0x93d0,	// (0x0002f7b0) main_cset6_slider_pane_g15_ParamLimits

0x93d0,	// (0x0002f7b0) main_cset6_slider_pane_g15

0x85af,	// (0x0002e98f) main_cset6_slider_pane_g16_ParamLimits

0x85af,	// (0x0002e98f) main_cset6_slider_pane_g16

0x85bd,	// (0x0002e99d) main_cset6_slider_pane_g17_ParamLimits

0x85bd,	// (0x0002e99d) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x00035f91) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x00035f91) main_cset6_slider_pane_g

0xdc16,	// (0x00033ff6) main_cset6_slider_pane_t1_ParamLimits

0xdc16,	// (0x00033ff6) main_cset6_slider_pane_t1

0x9400,	// (0x0002f7e0) main_cset6_slider_pane_t2_ParamLimits

0x9400,	// (0x0002f7e0) main_cset6_slider_pane_t2

0x942b,	// (0x0002f80b) main_cset6_slider_pane_t3_ParamLimits

0x942b,	// (0x0002f80b) main_cset6_slider_pane_t3

0x9456,	// (0x0002f836) main_cset6_slider_pane_t4_ParamLimits

0x9456,	// (0x0002f836) main_cset6_slider_pane_t4

0x9483,	// (0x0002f863) main_cset6_slider_pane_t5_ParamLimits

0x9483,	// (0x0002f863) main_cset6_slider_pane_t5

0xdc57,	// (0x00034037) main_cset6_slider_pane_t7_ParamLimits

0xdc57,	// (0x00034037) main_cset6_slider_pane_t7

0x94b0,	// (0x0002f890) main_cset6_slider_pane_t8_ParamLimits

0x94b0,	// (0x0002f890) main_cset6_slider_pane_t8

0x94d4,	// (0x0002f8b4) main_cset6_slider_pane_t9_ParamLimits

0x94d4,	// (0x0002f8b4) main_cset6_slider_pane_t9

0x94f8,	// (0x0002f8d8) main_cset6_slider_pane_t10_ParamLimits

0x94f8,	// (0x0002f8d8) main_cset6_slider_pane_t10

0x951c,	// (0x0002f8fc) main_cset6_slider_pane_t11_ParamLimits

0x951c,	// (0x0002f8fc) main_cset6_slider_pane_t11

0xdc8d,	// (0x0003406d) main_cset6_slider_pane_t14_ParamLimits

0xdc8d,	// (0x0003406d) main_cset6_slider_pane_t14

0xdcc6,	// (0x000340a6) main_cset6_slider_pane_t15_ParamLimits

0xdcc6,	// (0x000340a6) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x00035fb6) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x00035fb6) main_cset6_slider_pane_t

0xdcff,	// (0x000340df) cset_slider_pane_g1_copy1

0xdd08,	// (0x000340e8) cset_slider_pane_g2_copy1

0xdd11,	// (0x000340f1) cset_slider_pane_g3_copy1

0x1c7f,	// (0x0002805f) bg_popup_sub_pane_cp011_copy1

0xd40d,	// (0x000337ed) main_cset_text_pane_g1_copy1

0xd415,	// (0x000337f5) main_cset_text_pane_t1_copy1

0xd423,	// (0x00033803) main_cset_text_pane_t2_copy1

0xd431,	// (0x00033811) main_cset_text_pane_t3_copy1

0xd43f,	// (0x0003381f) main_cset_text_pane_t4_copy1

0xd44d,	// (0x0003382d) main_cset_text_pane_t5_copy1

0xd45b,	// (0x0003383b) main_cset_text_pane_t6_copy1

0xd469,	// (0x00033849) main_cset_text_pane_t7_copy1

0x92d9,	// (0x0002f6b9) main_cset_text2_pane_t1_copy1

0x1c7f,	// (0x0002805f) main_ncimui_pane

0x693b,	// (0x0002cd1b) popup_query_ncimui_window_ParamLimits

0x693b,	// (0x0002cd1b) popup_query_ncimui_window

0xc5eb,	// (0x000329cb) field_cale_ev2_pane_g4_ParamLimits

0xc5eb,	// (0x000329cb) field_cale_ev2_pane_g4

0x7f39,	// (0x0002e319) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7f39,	// (0x0002e319) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x00035c94) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x00035c94) cell_video_dialer_keypad_pane_g

0x7f51,	// (0x0002e331) cell_video_dialer_keypad_pane_t1

0x1c7f,	// (0x0002805f) bg_popup_window_pane_cp012

0x48c5,	// (0x0002aca5) heading_pane_cp06

0xde09,	// (0x000341e9) ncim_query_content_pane

0x1c7f,	// (0x0002805f) bg_popup_heading_pane_cp01

0xde11,	// (0x000341f1) ncim_heading_pane_t1

0xde1f,	// (0x000341ff) ncim_indicator_popup_pane

0xde31,	// (0x00034211) ncim_query_button_pane

0xde47,	// (0x00034227) ncim_query_content_pane_t1

0xde59,	// (0x00034239) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x00035ff5) ncim_query_content_pane_t

0xde93,	// (0x00034273) ncim_query_list_pane

0xdea5,	// (0x00034285) ncim_query_popup_pane

0xde1f,	// (0x000341ff) ncim_indicator_popup_pane_ParamLimits

0x963b,	// (0x0002fa1b) ncim_query_content_pane_g1_ParamLimits

0x963b,	// (0x0002fa1b) ncim_query_content_pane_g1

0xde47,	// (0x00034227) ncim_query_content_pane_t1_ParamLimits

0xde59,	// (0x00034239) ncim_query_content_pane_t2_ParamLimits

0x9647,	// (0x0002fa27) ncim_query_content_pane_t3_ParamLimits

0x9647,	// (0x0002fa27) ncim_query_content_pane_t3

0x966f,	// (0x0002fa4f) ncim_query_content_pane_t4_ParamLimits

0x966f,	// (0x0002fa4f) ncim_query_content_pane_t4

0x9697,	// (0x0002fa77) ncim_query_content_pane_t5_ParamLimits

0x9697,	// (0x0002fa77) ncim_query_content_pane_t5

0xde6b,	// (0x0003424b) ncim_query_content_pane_t6_ParamLimits

0xde6b,	// (0x0003424b) ncim_query_content_pane_t6

0xfc15,	// (0x00035ff5) ncim_query_content_pane_t_ParamLimits

0xde93,	// (0x00034273) ncim_query_list_pane_ParamLimits

0xdea5,	// (0x00034285) ncim_query_popup_pane_ParamLimits

0xdeb9,	// (0x00034299) wait_bar_pane_cp04

0x1c7f,	// (0x0002805f) input_focus_pane_cp011

0xdec1,	// (0x000342a1) ncim_query_popup_pane_t1

0xdecf,	// (0x000342af) ncim_list_query_list_pane_ParamLimits

0xdecf,	// (0x000342af) ncim_list_query_list_pane

0x1c7f,	// (0x0002805f) bg_button_pane_cp027

0xdee2,	// (0x000342c2) ncim_query_button_pane_g1

0x1c7f,	// (0x0002805f) list_highlight_pane_cp012

0xdeec,	// (0x000342cc) ncim_list_query_list_pane_g1

0xdef4,	// (0x000342d4) ncim_list_query_list_pane_t1

0xd021,	// (0x00033401) cam4_indicators_pane_g3_ParamLimits

0xd021,	// (0x00033401) cam4_indicators_pane_g3

0x175b,	// (0x00027b3b) vid4_indicators_pane_g5_ParamLimits

0x175b,	// (0x00027b3b) vid4_indicators_pane_g5

0xd730,	// (0x00033b10) vid4_progress_pane_g5_ParamLimits

0xd730,	// (0x00033b10) vid4_progress_pane_g5

0x9554,	// (0x0002f934) main_ncimui_pane_g1

0x95aa,	// (0x0002f98a) ncimui_group_query_pane_ParamLimits

0x95aa,	// (0x0002f98a) ncimui_group_query_pane

0x95e6,	// (0x0002f9c6) ncimui_list_pane_ParamLimits

0x95e6,	// (0x0002f9c6) ncimui_list_pane

0x9607,	// (0x0002f9e7) ncimui_text_pane_ParamLimits

0x9607,	// (0x0002f9e7) ncimui_text_pane

0x96bf,	// (0x0002fa9f) ncimui_text_pane_t1_ParamLimits

0x96bf,	// (0x0002fa9f) ncimui_text_pane_t1

0xdf02,	// (0x000342e2) ncimui_list_single_graphic_pane_ParamLimits

0xdf02,	// (0x000342e2) ncimui_list_single_graphic_pane

0x96dd,	// (0x0002fabd) ncimui_query_pane_ParamLimits

0x96dd,	// (0x0002fabd) ncimui_query_pane

0x1c7f,	// (0x0002805f) list_highlight_pane_cp013

0xdf12,	// (0x000342f2) ncim_list_query_list_pane_t1_copy1

0xdeec,	// (0x000342cc) ncim_list_single_graphic_pane_g1

0xdf20,	// (0x00034300) ncim_query_button_pane_cp01

0xdf2c,	// (0x0003430c) ncim_query_entry_pane_ParamLimits

0xdf2c,	// (0x0003430c) ncim_query_entry_pane

0xdf3f,	// (0x0003431f) ncimui_query_pane_g1

0xdf4b,	// (0x0003432b) ncimui_query_pane_t1_ParamLimits

0xdf4b,	// (0x0003432b) ncimui_query_pane_t1

0x1efa,	// (0x000282da) input_focus_pane_cp012

0xdf64,	// (0x00034344) ncim_query_entry_pane_t1

0x28f7,	// (0x00028cd7) main_im_pane_ParamLimits

0x1efa,	// (0x000282da) main_mobtv_pane_ParamLimits

0x1efa,	// (0x000282da) main_mobtv_pane

0x93e8,	// (0x0002f7c8) main_cset6_slider_pane_g18_ParamLimits

0x93e8,	// (0x0002f7c8) main_cset6_slider_pane_g18

0x93f4,	// (0x0002f7d4) main_cset6_slider_pane_g19_ParamLimits

0x93f4,	// (0x0002f7d4) main_cset6_slider_pane_g19

0xdf76,	// (0x00034356) bg_main_mobtv_pane_ParamLimits

0xdf76,	// (0x00034356) bg_main_mobtv_pane

0x96f0,	// (0x0002fad0) main_mobtv_info_pane

0x96fb,	// (0x0002fadb) main_mobtv_loading_pane_ParamLimits

0x96fb,	// (0x0002fadb) main_mobtv_loading_pane

0xdf84,	// (0x00034364) main_mobtv_pg_channel_list_pane

0xdf8e,	// (0x0003436e) main_mobtv_pg_hdr_pane

0x9708,	// (0x0002fae8) main_mobtv_programe_curr_pane_ParamLimits

0x9708,	// (0x0002fae8) main_mobtv_programe_curr_pane

0x9715,	// (0x0002faf5) main_mobtv_programe_next_pane_ParamLimits

0x9715,	// (0x0002faf5) main_mobtv_programe_next_pane

0xdf97,	// (0x00034377) popup_mobtv_noti_window

0xc31a,	// (0x000326fa) main_tv_pg_hdr_pane_g1

0xdfa1,	// (0x00034381) main_tv_pg_hdr_pane_g2

0xdfa9,	// (0x00034389) main_tv_pg_hdr_pane_g3

0xdfb1,	// (0x00034391) main_tv_pg_hdr_pane_g4

0xdfb9,	// (0x00034399) main_tv_pg_hdr_pane_g5

0xdfc3,	// (0x000343a3) main_tv_pg_hdr_pane_g6

0xdfcd,	// (0x000343ad) main_tv_pg_hdr_pane_g7

0xdfd7,	// (0x000343b7) main_tv_pg_hdr_pane_g8

0xdfe1,	// (0x000343c1) main_tv_pg_hdr_pane_g9

0xdfeb,	// (0x000343cb) main_tv_pg_hdr_pane_g10

0xdff5,	// (0x000343d5) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00036002) main_tv_pg_hdr_pane_g

0xdfff,	// (0x000343df) main_tv_pg_hdr_pane_t1

0xe00d,	// (0x000343ed) main_tv_pg_hdr_pane_t2

0xe01b,	// (0x000343fb) main_tv_pg_hdr_pane_t3

0xe02b,	// (0x0003440b) main_tv_pg_hdr_pane_t4

0xe03b,	// (0x0003441b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x00036019) main_tv_pg_hdr_pane_t

0xe04b,	// (0x0003442b) single_mobtv_pg_channel_pane_ParamLimits

0xe04b,	// (0x0003442b) single_mobtv_pg_channel_pane

0xe05d,	// (0x0003443d) single_mobtv_pg_channel_table_pane

0xe066,	// (0x00034446) single_mobtv_pg_channel_thumb_pane

0xe06f,	// (0x0003444f) single_tv_pg_channel_pane_g1

0xe078,	// (0x00034458) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x00036024) single_tv_pg_channel_pane_g

0xc54a,	// (0x0003292a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc54a,	// (0x0003292a) bg_single_mobtv_pg_channel_thumb_pane

0xe081,	// (0x00034461) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe081,	// (0x00034461) single_mobtv_pg_channel_thumb_pane_g1

0xe08f,	// (0x0003446f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe08f,	// (0x0003446f) single_mobtv_pg_channel_thumb_pane_g2

0xe09b,	// (0x0003447b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe09b,	// (0x0003447b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x00036029) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x00036029) single_mobtv_pg_channel_thumb_pane_g

0xe0a7,	// (0x00034487) single_mobtv_pg_channel_thumb_pane_t1

0xe0b5,	// (0x00034495) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00036030) single_mobtv_pg_channel_thumb_pane_t

0xc31a,	// (0x000326fa) bg_single_mobtv_pg_channel_table_pane_g1

0xc31a,	// (0x000326fa) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00035ae0) bg_single_mobtv_pg_channel_table_pane_g

0xe0c3,	// (0x000344a3) single_mobtv_pg_channel_table_pane_t1

0xe0d1,	// (0x000344b1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x00036035) single_mobtv_pg_channel_table_pane_t

0x972a,	// (0x0002fb0a) main_mobtv_info_pane_g1_ParamLimits

0x972a,	// (0x0002fb0a) main_mobtv_info_pane_g1

0x9748,	// (0x0002fb28) main_mobtv_info_pane_t1_ParamLimits

0x9748,	// (0x0002fb28) main_mobtv_info_pane_t1

0x97c0,	// (0x0002fba0) main_mobtv_info_pane_t2_ParamLimits

0x97c0,	// (0x0002fba0) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0003603f) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0003603f) main_mobtv_info_pane_t

0x9851,	// (0x0002fc31) wait_bar_pane_cp05

0x9863,	// (0x0002fc43) main_mobtv_loading_pane_g1_ParamLimits

0x9863,	// (0x0002fc43) main_mobtv_loading_pane_g1

0x9874,	// (0x0002fc54) main_mobtv_loading_pane_g2_ParamLimits

0x9874,	// (0x0002fc54) main_mobtv_loading_pane_g2

0x9880,	// (0x0002fc60) main_mobtv_loading_pane_g3_ParamLimits

0x9880,	// (0x0002fc60) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x00036046) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x00036046) main_mobtv_loading_pane_g

0xe0df,	// (0x000344bf) main_mobtv_loading_pane_t1_ParamLimits

0xe0df,	// (0x000344bf) main_mobtv_loading_pane_t1

0xe0f7,	// (0x000344d7) main_mobtv_loading_pane_t2_ParamLimits

0xe0f7,	// (0x000344d7) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0003604d) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0003604d) main_mobtv_loading_pane_t

0x9893,	// (0x0002fc73) wait_bar_pane_cp06_ParamLimits

0x9893,	// (0x0002fc73) wait_bar_pane_cp06

0xe11b,	// (0x000344fb) main_mobtv_programe_curr_pane_t1

0xe129,	// (0x00034509) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x00036052) main_mobtv_programe_curr_pane_t

0xe137,	// (0x00034517) main_mobtv_programe_next_pane_t1

0xe145,	// (0x00034525) main_mobtv_programe_next_pane_t2

0xe153,	// (0x00034533) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x00036057) main_mobtv_programe_next_pane_t

0x1c7f,	// (0x0002805f) bg_popup_mobtv_noti_window_pane

0xe161,	// (0x00034541) popup_mobtv_noti_window_g1

0xe169,	// (0x00034549) popup_mobtv_noti_window_t1

0xe177,	// (0x00034557) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0003605e) popup_mobtv_noti_window_t

0xc31a,	// (0x000326fa) bg_popup_mobtv_noti_window_pane_g1

0x1c7f,	// (0x0002805f) sc_clock_pane

0x1c7f,	// (0x0002805f) main_fs_bigclock_pane

0x907e,	// (0x0002f45e) blid2_tripm_pane_t4_ParamLimits

0x907e,	// (0x0002f45e) blid2_tripm_pane_t4

0x98a2,	// (0x0002fc82) sc_clock_pane_g1_ParamLimits

0x98a2,	// (0x0002fc82) sc_clock_pane_g1

0x98b4,	// (0x0002fc94) sc_clock_pane_t1_ParamLimits

0x98b4,	// (0x0002fc94) sc_clock_pane_t1

0x98d8,	// (0x0002fcb8) sc_clock_pane_t2_ParamLimits

0x98d8,	// (0x0002fcb8) sc_clock_pane_t2

0x98f0,	// (0x0002fcd0) sc_clock_pane_t3_ParamLimits

0x98f0,	// (0x0002fcd0) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x00036063) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x00036063) sc_clock_pane_t

0xa801,	// (0x00030be1) main_fs_bigclock_indicator_pane_ParamLimits

0xa801,	// (0x00030be1) main_fs_bigclock_indicator_pane

0xc51a,	// (0x000328fa) main_fs_bigclock_pane_g1_ParamLimits

0xc51a,	// (0x000328fa) main_fs_bigclock_pane_g1

0xa80d,	// (0x00030bed) main_fs_bigclock_pane_t1_ParamLimits

0xa80d,	// (0x00030bed) main_fs_bigclock_pane_t1

0xa81f,	// (0x00030bff) main_fs_bigclock_pane_t2_ParamLimits

0xa81f,	// (0x00030bff) main_fs_bigclock_pane_t2

0xa833,	// (0x00030c13) main_fs_bigclock_pane_t3_ParamLimits

0xa833,	// (0x00030c13) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0003625d) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0003625d) main_fs_bigclock_pane_t

0xecb6,	// (0x00035096) main_fs_bigclock_indicator_pane_g1

0xde39,	// (0x00034219) ncim_query_content_pane_g2_ParamLimits

0xde39,	// (0x00034219) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00035ff0) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00035ff0) ncim_query_content_pane_g

0x9907,	// (0x0002fce7) sc_clock_pane_t4_ParamLimits

0x9907,	// (0x0002fce7) sc_clock_pane_t4

0x1efa,	// (0x000282da) main_radioblah_pane

0xcf40,	// (0x00033320) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf40,	// (0x00033320) cell_call4_button_pane_t1_copy1

0x955c,	// (0x0002f93c) main_ncimui_pane_t1_ParamLimits

0x955c,	// (0x0002f93c) main_ncimui_pane_t1

0x9576,	// (0x0002f956) main_ncimui_pane_t2_ParamLimits

0x9576,	// (0x0002f956) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x00035fe9) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x00035fe9) main_ncimui_pane_t

0xe185,	// (0x00034565) main_radioblah_anim_pane_ParamLimits

0xe185,	// (0x00034565) main_radioblah_anim_pane

0xe196,	// (0x00034576) main_radioblah_info_pane_ParamLimits

0xe196,	// (0x00034576) main_radioblah_info_pane

0xe1aa,	// (0x0003458a) main_radioblah_pane_t1_ParamLimits

0xe1aa,	// (0x0003458a) main_radioblah_pane_t1

0xe1c6,	// (0x000345a6) main_radioblah_pane_t2_ParamLimits

0xe1c6,	// (0x000345a6) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x00036084) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x00036084) main_radioblah_pane_t

0x9ae0,	// (0x0002fec0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9ae0,	// (0x0002fec0) main_radioblah_rocker_ctrl_pane

0xe20e,	// (0x000345ee) main_radioblah_info_pane_t1_ParamLimits

0xe20e,	// (0x000345ee) main_radioblah_info_pane_t1

0x9b38,	// (0x0002ff18) main_radioblah_info_pane_t2_ParamLimits

0x9b38,	// (0x0002ff18) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0003608d) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0003608d) main_radioblah_info_pane_t

0xc31a,	// (0x000326fa) main_radioblah_rocker_ctrl_pane_g1

0x9be8,	// (0x0002ffc8) main_radioblah_rocker_ctrl_pane_g2

0x9bf0,	// (0x0002ffd0) main_radioblah_rocker_ctrl_pane_g3

0x9bf8,	// (0x0002ffd8) main_radioblah_rocker_ctrl_pane_g4

0x9c00,	// (0x0002ffe0) main_radioblah_rocker_ctrl_pane_g5

0x9c08,	// (0x0002ffe8) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x00036096) main_radioblah_rocker_ctrl_pane_g

0x92d9,	// (0x0002f6b9) main_cset_text2_pane_t1_copy1_ParamLimits

0xcfd0,	// (0x000333b0) cam4_image_uncrop_qvga_pane

0xd04b,	// (0x0003342b) vid4_image_uncrop_qcif_pane

0xd97a,	// (0x00033d5a) cam6_image_uncrop_qvga_pane_ParamLimits

0xd97a,	// (0x00033d5a) cam6_image_uncrop_qvga_pane

0xda50,	// (0x00033e30) vid6_image_uncrop_qcif_pane_ParamLimits

0xda50,	// (0x00033e30) vid6_image_uncrop_qcif_pane

0x1c7f,	// (0x0002805f) bg_popup_preview_window_pane_cp03

0xddeb,	// (0x000341cb) list_cset_text2_pane

0xddf3,	// (0x000341d3) main_cset6_text2_pane_g1

0xddfb,	// (0x000341db) main_cset6_text2_pane_t1

0xe248,	// (0x00034628) list_cset_text2_pane_t1_ParamLimits

0xe248,	// (0x00034628) list_cset_text2_pane_t1

0x1efa,	// (0x000282da) main_radioblah_pane_ParamLimits

0x983d,	// (0x0002fc1d) main_mobtv_info_pane_t3_ParamLimits

0x983d,	// (0x0002fc1d) main_mobtv_info_pane_t3

0x9ace,	// (0x0002feae) main_radioblah_pane_g1

0x9b08,	// (0x0002fee8) main_radioblah_info_pane_g1

0x9b8d,	// (0x0002ff6d) main_radioblah_info_pane_t3_ParamLimits

0x9b8d,	// (0x0002ff6d) main_radioblah_info_pane_t3

0x4294,	// (0x0002a674) highlight_cell_cale_month_pane_ParamLimits

0x4294,	// (0x0002a674) highlight_cell_cale_month_pane

0x1c7f,	// (0x0002805f) main_phob_fisheye_pane

0xc6a0,	// (0x00032a80) scroll_pane_cp0031_ParamLimits

0xc6a0,	// (0x00032a80) scroll_pane_cp0031

0xdb62,	// (0x00033f42) wait_bar_pane_cp08_ParamLimits

0x9362,	// (0x0002f742) cset_list_set_pane_copy1_ParamLimits

0xe262,	// (0x00034642) highlight_cell_cale_month_pane_g1

0x9c10,	// (0x0002fff0) highlight_cell_cale_month_pane_t1

0xd6e9,	// (0x00033ac9) list_gen_pane_cp01

0xd207,	// (0x000335e7) scroll_pane_01

0x9c1e,	// (0x0002fffe) list_single_double_fisheye_pane

0xe26a,	// (0x0003464a) list_double_fisheye_pane_g1_ParamLimits

0xe26a,	// (0x0003464a) list_double_fisheye_pane_g1

0xe276,	// (0x00034656) list_double_fisheye_pane_g2_ParamLimits

0xe276,	// (0x00034656) list_double_fisheye_pane_g2

0x9c27,	// (0x00030007) list_double_fisheye_pane_g3_ParamLimits

0x9c27,	// (0x00030007) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x000360a3) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x000360a3) list_double_fisheye_pane_g

0x9c33,	// (0x00030013) list_double_fisheye_pane_t1_ParamLimits

0x9c33,	// (0x00030013) list_double_fisheye_pane_t1

0x9c4e,	// (0x0003002e) list_double_fisheye_pane_t2_ParamLimits

0x9c4e,	// (0x0003002e) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x000360ae) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x000360ae) list_double_fisheye_pane_t

0x1c7f,	// (0x0002805f) main_call5_pane

0x9932,	// (0x0002fd12) sc_swipe_pane_ParamLimits

0x9932,	// (0x0002fd12) sc_swipe_pane

0x9c83,	// (0x00030063) call5_image_pane_ParamLimits

0x9c83,	// (0x00030063) call5_image_pane

0x9ca0,	// (0x00030080) call5_swipe_1_pane_ParamLimits

0x9ca0,	// (0x00030080) call5_swipe_1_pane

0x9cb3,	// (0x00030093) call5_swipe_2_pane_ParamLimits

0x9cb3,	// (0x00030093) call5_swipe_2_pane

0x9ce0,	// (0x000300c0) popup_call5_audio_first_window_ParamLimits

0x9ce0,	// (0x000300c0) popup_call5_audio_first_window

0xc54a,	// (0x0003292a) call5_swipe_1_pane_g1_ParamLimits

0xc54a,	// (0x0003292a) call5_swipe_1_pane_g1

0xe2a7,	// (0x00034687) call5_swipe_1_pane_g2_ParamLimits

0xe2a7,	// (0x00034687) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x000360b3) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x000360b3) call5_swipe_1_pane_g

0xe2b3,	// (0x00034693) call5_swipe_1_pane_t1_ParamLimits

0xe2b3,	// (0x00034693) call5_swipe_1_pane_t1

0xc54a,	// (0x0003292a) call5_swipe_2_pane_g1_ParamLimits

0xc54a,	// (0x0003292a) call5_swipe_2_pane_g1

0xe2c8,	// (0x000346a8) call5_swipe_2_pane_g2_ParamLimits

0xe2c8,	// (0x000346a8) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x000360b8) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x000360b8) call5_swipe_2_pane_g

0xe2d4,	// (0x000346b4) call5_swipe_2_pane_t1_ParamLimits

0xe2d4,	// (0x000346b4) call5_swipe_2_pane_t1

0xe2e9,	// (0x000346c9) sc_swipe_pane_g1_ParamLimits

0xe2e9,	// (0x000346c9) sc_swipe_pane_g1

0xe2f6,	// (0x000346d6) sc_swipe_pane_g2_ParamLimits

0xe2f6,	// (0x000346d6) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x000360bd) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x000360bd) sc_swipe_pane_g

0xe302,	// (0x000346e2) sc_swipe_pane_t1_ParamLimits

0xe302,	// (0x000346e2) sc_swipe_pane_t1

0x1c7f,	// (0x0002805f) main_cmail_launcher_pane

0x9cf5,	// (0x000300d5) aid_size_cell_cmail_l_ParamLimits

0x9cf5,	// (0x000300d5) aid_size_cell_cmail_l

0x9d0f,	// (0x000300ef) grid_cmail_l_pane_ParamLimits

0x9d0f,	// (0x000300ef) grid_cmail_l_pane

0x9d2b,	// (0x0003010b) cell_cmail_l_pane_ParamLimits

0x9d2b,	// (0x0003010b) cell_cmail_l_pane

0x9d53,	// (0x00030133) cell_cmail_l_pane_g1_ParamLimits

0x9d53,	// (0x00030133) cell_cmail_l_pane_g1

0x9d5f,	// (0x0003013f) cell_cmail_l_pane_t1_ParamLimits

0x9d5f,	// (0x0003013f) cell_cmail_l_pane_t1

0xe317,	// (0x000346f7) cell_cmail_l_pane_t2_ParamLimits

0xe317,	// (0x000346f7) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x000360c2) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x000360c2) cell_cmail_l_pane_t

0x1efa,	// (0x000282da) grid_highlight_pane_cp018_ParamLimits

0x1efa,	// (0x000282da) grid_highlight_pane_cp018

0x1dac,	// (0x0002818c) main2_pane_ParamLimits

0x1dac,	// (0x0002818c) main2_pane

0x2a78,	// (0x00028e58) popup_sp_fs_action_menu_bg_pane_g1

0x2a80,	// (0x00028e60) popup_sp_fs_action_menu_bg_pane_g2

0x2a88,	// (0x00028e68) popup_sp_fs_action_menu_bg_pane_g3

0x2a90,	// (0x00028e70) popup_sp_fs_action_menu_bg_pane_g4

0x2a98,	// (0x00028e78) popup_sp_fs_action_menu_bg_pane_g5

0x2aa0,	// (0x00028e80) popup_sp_fs_action_menu_bg_pane_g6

0x2aa8,	// (0x00028e88) popup_sp_fs_action_menu_bg_pane_g7

0x2ab0,	// (0x00028e90) popup_sp_fs_action_menu_bg_pane_g8

0x2ab8,	// (0x00028e98) popup_sp_fs_action_menu_bg_pane_g9

0x2ac0,	// (0x00028ea0) popup_sp_fs_action_menu_bg_pane_g10

0x2ac0,	// (0x00028ea0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0003558c) popup_sp_fs_action_menu_bg_pane_g

0x3246,	// (0x00029626) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x2_t3_g3_g1

0x3252,	// (0x00029632) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3252,	// (0x00029632) list_medium_line_x2_t3_g3_g2

0x325e,	// (0x0002963e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x325e,	// (0x0002963e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0003563c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0003563c) list_medium_line_x2_t3_g3_g

0x326a,	// (0x0002964a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x326a,	// (0x0002964a) list_medium_line_x2_t3_g3_t1

0x327f,	// (0x0002965f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x327f,	// (0x0002965f) list_medium_line_x2_t3_g3_t2

0x3293,	// (0x00029673) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3293,	// (0x00029673) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00035643) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00035643) list_medium_line_x2_t3_g3_t

0x3246,	// (0x00029626) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x2_t3_g2_g1

0x325e,	// (0x0002963e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x325e,	// (0x0002963e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0003564a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0003564a) list_medium_line_x2_t3_g2_g

0x32a8,	// (0x00029688) list_medium_line_x2_t3_g2_t1_ParamLimits

0x32a8,	// (0x00029688) list_medium_line_x2_t3_g2_t1

0x32be,	// (0x0002969e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x32be,	// (0x0002969e) list_medium_line_x2_t3_g2_t2

0x32d0,	// (0x000296b0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x32d0,	// (0x000296b0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0003564f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0003564f) list_medium_line_x2_t3_g2_t

0x3246,	// (0x00029626) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x2_t4_g4_g1

0x32ee,	// (0x000296ce) list_medium_line_x2_t4_g4_g2_ParamLimits

0x32ee,	// (0x000296ce) list_medium_line_x2_t4_g4_g2

0x3252,	// (0x00029632) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3252,	// (0x00029632) list_medium_line_x2_t4_g4_g3

0x32fa,	// (0x000296da) list_medium_line_x2_t4_g4_g4_ParamLimits

0x32fa,	// (0x000296da) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00035656) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00035656) list_medium_line_x2_t4_g4_g

0x3306,	// (0x000296e6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3306,	// (0x000296e6) list_medium_line_x2_t4_g4_t1

0x331d,	// (0x000296fd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x331d,	// (0x000296fd) list_medium_line_x2_t4_g4_t2

0x3332,	// (0x00029712) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3332,	// (0x00029712) list_medium_line_x2_t4_g4_t3

0x3344,	// (0x00029724) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3344,	// (0x00029724) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0003565f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0003565f) list_medium_line_x2_t4_g4_t

0x3246,	// (0x00029626) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x2_t2_g4_g1

0x32ee,	// (0x000296ce) list_medium_line_x2_t2_g4_g2_ParamLimits

0x32ee,	// (0x000296ce) list_medium_line_x2_t2_g4_g2

0x3252,	// (0x00029632) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3252,	// (0x00029632) list_medium_line_x2_t2_g4_g3

0x325e,	// (0x0002963e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x325e,	// (0x0002963e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x000356c6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x000356c6) list_medium_line_x2_t2_g4_g

0x42b2,	// (0x0002a692) list_medium_line_x2_t2_g4_t1_ParamLimits

0x42b2,	// (0x0002a692) list_medium_line_x2_t2_g4_t1

0x3293,	// (0x00029673) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3293,	// (0x00029673) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x000356cf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x000356cf) list_medium_line_x2_t2_g4_t

0x3246,	// (0x00029626) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x2_t2_g3_g1

0x3252,	// (0x00029632) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3252,	// (0x00029632) list_medium_line_x2_t2_g3_g2

0x325e,	// (0x0002963e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x325e,	// (0x0002963e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0003563c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0003563c) list_medium_line_x2_t2_g3_g

0x42c7,	// (0x0002a6a7) list_medium_line_x2_t2_g3_t1_ParamLimits

0x42c7,	// (0x0002a6a7) list_medium_line_x2_t2_g3_t1

0x3293,	// (0x00029673) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3293,	// (0x00029673) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x000356d4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x000356d4) list_medium_line_x2_t2_g3_t

0x461d,	// (0x0002a9fd) main_sp_fs_list_pane_ParamLimits

0x461d,	// (0x0002a9fd) main_sp_fs_list_pane

0x4629,	// (0x0002aa09) sp_fs_scroll_pane_ParamLimits

0x4629,	// (0x0002aa09) sp_fs_scroll_pane

0x4635,	// (0x0002aa15) list_medium_line_x2_t3_t1

0x4645,	// (0x0002aa25) list_medium_line_x2_t3_t2

0x4653,	// (0x0002aa33) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0003571f) list_medium_line_x2_t3_t

0x4661,	// (0x0002aa41) list_medium_line_x3_t4_t1

0x4671,	// (0x0002aa51) list_medium_line_x3_t4_t2

0x467f,	// (0x0002aa5f) list_medium_line_x3_t4_t3

0x4653,	// (0x0002aa33) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00035726) list_medium_line_x3_t4_t

0x468d,	// (0x0002aa6d) list_medium_line_x4_t5_t1

0x469d,	// (0x0002aa7d) list_medium_line_x4_t5_t2

0x467f,	// (0x0002aa5f) list_medium_line_x4_t5_t3

0x46ab,	// (0x0002aa8b) list_medium_line_x4_t5_t4

0x4653,	// (0x0002aa33) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0003572f) list_medium_line_x4_t5_t

0x3246,	// (0x00029626) list_medium_line_t4_g4_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_t4_g4_g1

0x32fa,	// (0x000296da) list_medium_line_t4_g4_g2_ParamLimits

0x32fa,	// (0x000296da) list_medium_line_t4_g4_g2

0x46b9,	// (0x0002aa99) list_medium_line_t4_g4_g3_ParamLimits

0x46b9,	// (0x0002aa99) list_medium_line_t4_g4_g3

0x325e,	// (0x0002963e) list_medium_line_t4_g4_g4_ParamLimits

0x325e,	// (0x0002963e) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0003573a) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0003573a) list_medium_line_t4_g4_g

0x46c5,	// (0x0002aaa5) list_medium_line_t4_g4_t1_ParamLimits

0x46c5,	// (0x0002aaa5) list_medium_line_t4_g4_t1

0x46da,	// (0x0002aaba) list_medium_line_t4_g4_t2_ParamLimits

0x46da,	// (0x0002aaba) list_medium_line_t4_g4_t2

0x46f0,	// (0x0002aad0) list_medium_line_t4_g4_t3_ParamLimits

0x46f0,	// (0x0002aad0) list_medium_line_t4_g4_t3

0x3293,	// (0x00029673) list_medium_line_t4_g4_t4_ParamLimits

0x3293,	// (0x00029673) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00035743) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00035743) list_medium_line_t4_g4_t

0x4a3d,	// (0x0002ae1d) chi_dic_find_pane_g1

0x66c1,	// (0x0002caa1) main_tport_pane

0xd35a,	// (0x0003373a) list_medium_line_plain_t1

0xd3ac,	// (0x0003378c) list_medium_line_t2_g2_g1_ParamLimits

0xd3ac,	// (0x0003378c) list_medium_line_t2_g2_g1

0xd3b8,	// (0x00033798) list_medium_line_t2_g2_g2_ParamLimits

0xd3b8,	// (0x00033798) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00035dff) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00035dff) list_medium_line_t2_g2_g

0x889d,	// (0x0002ec7d) list_medium_line_t2_g2_t1_ParamLimits

0x889d,	// (0x0002ec7d) list_medium_line_t2_g2_t1

0x88b4,	// (0x0002ec94) list_medium_line_t2_g2_t2_ParamLimits

0x88b4,	// (0x0002ec94) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00035e04) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00035e04) list_medium_line_t2_g2_t

0xd792,	// (0x00033b72) aid_sp_fs_list_icon_a_sm

0xd79a,	// (0x00033b7a) aid_sp_fs_list_icon_d

0xd7a2,	// (0x00033b82) aid_sp_fs_text_primary

0xd7ab,	// (0x00033b8b) aid_sp_fs_text_secondary

0xd7b4,	// (0x00033b94) list_medium_line

0xd7b4,	// (0x00033b94) list_medium_line_g2

0xd7b4,	// (0x00033b94) list_medium_line_g3

0xd7b4,	// (0x00033b94) list_medium_line_plain

0xd7b4,	// (0x00033b94) list_medium_line_plain_t2

0xd7b4,	// (0x00033b94) list_medium_line_plain_t3

0xd7b4,	// (0x00033b94) list_medium_line_right_icon

0xd7b4,	// (0x00033b94) list_medium_line_right_iconx2

0xd7b4,	// (0x00033b94) list_medium_line_t2

0xd7b4,	// (0x00033b94) list_medium_line_t2_g2

0xd7b4,	// (0x00033b94) list_medium_line_t2_g3

0xd7b4,	// (0x00033b94) list_medium_line_t2_right_icon

0xd7b4,	// (0x00033b94) list_medium_line_t2_right_iconx2

0xd7b4,	// (0x00033b94) list_medium_line_t3

0xd7b4,	// (0x00033b94) list_medium_line_t3_g2

0xd7b4,	// (0x00033b94) list_medium_line_t3_g3

0xd7b4,	// (0x00033b94) list_medium_line_t3_right_iconx2

0xd7bd,	// (0x00033b9d) list_medium_line_t4_g4

0xd7c6,	// (0x00033ba6) list_medium_line_x2

0xd7c6,	// (0x00033ba6) list_medium_line_x2_t2_g2

0xd7c6,	// (0x00033ba6) list_medium_line_x2_t2_g3

0xd7c6,	// (0x00033ba6) list_medium_line_x2_t2_g4

0xd7c6,	// (0x00033ba6) list_medium_line_x2_t3

0xd7c6,	// (0x00033ba6) list_medium_line_x2_t3_g2

0xd7c6,	// (0x00033ba6) list_medium_line_x2_t3_g3

0xd7c6,	// (0x00033ba6) list_medium_line_x2_t3_g4

0xd7c6,	// (0x00033ba6) list_medium_line_x2_t4_g2

0xd7c6,	// (0x00033ba6) list_medium_line_x2_t4_g4

0xd7cf,	// (0x00033baf) list_medium_line_x3

0xd7cf,	// (0x00033baf) list_medium_line_x3_t4

0xd7cf,	// (0x00033baf) list_medium_line_x3_t4_g4

0xd7bd,	// (0x00033b9d) list_medium_line_x4_t4

0xd7bd,	// (0x00033b9d) list_medium_line_x4_t4_g7

0xd7bd,	// (0x00033b9d) list_medium_line_x4_t5

0xd7d8,	// (0x00033bb8) list_single_fs_dyc_pane_ParamLimits

0xd7d8,	// (0x00033bb8) list_single_fs_dyc_pane

0x3246,	// (0x00029626) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x4_t4_g7_g1

0xdd1a,	// (0x000340fa) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdd1a,	// (0x000340fa) list_medium_line_x4_t4_g7_g2

0xdd26,	// (0x00034106) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdd26,	// (0x00034106) list_medium_line_x4_t4_g7_g3

0xdd35,	// (0x00034115) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdd35,	// (0x00034115) list_medium_line_x4_t4_g7_g4

0xdd41,	// (0x00034121) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdd41,	// (0x00034121) list_medium_line_x4_t4_g7_g5

0xdd50,	// (0x00034130) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdd50,	// (0x00034130) list_medium_line_x4_t4_g7_g6

0xdd5f,	// (0x0003413f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdd5f,	// (0x0003413f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00035fcf) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00035fcf) list_medium_line_x4_t4_g7_g

0xdd6b,	// (0x0003414b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdd6b,	// (0x0003414b) list_medium_line_x4_t4_g7_t1

0xdd80,	// (0x00034160) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdd80,	// (0x00034160) list_medium_line_x4_t4_g7_t2

0xdd95,	// (0x00034175) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdd95,	// (0x00034175) list_medium_line_x4_t4_g7_t3

0xddaa,	// (0x0003418a) list_medium_line_x4_t4_g7_t4_ParamLimits

0xddaa,	// (0x0003418a) list_medium_line_x4_t4_g7_t4

0xddbc,	// (0x0003419c) list_medium_line_x4_t4_g7_t5_ParamLimits

0xddbc,	// (0x0003419c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00035fde) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00035fde) list_medium_line_x4_t4_g7_t

0xddce,	// (0x000341ae) list_single_dyc_row_pane_ParamLimits

0xddce,	// (0x000341ae) list_single_dyc_row_pane

0x9c70,	// (0x00030050) call5_gesture_pane_ParamLimits

0x9c70,	// (0x00030050) call5_gesture_pane

0x9cc6,	// (0x000300a6) call5_windows_pane_ParamLimits

0x9cc6,	// (0x000300a6) call5_windows_pane

0x9d75,	// (0x00030155) call5_swipe_1_pane_cp_ParamLimits

0x9d75,	// (0x00030155) call5_swipe_1_pane_cp

0x9d81,	// (0x00030161) call5_swipe_2_pane_cp_ParamLimits

0x9d81,	// (0x00030161) call5_swipe_2_pane_cp

0x4ec1,	// (0x0002b2a1) call5_image_pane_cp

0x9d8d,	// (0x0003016d) popup_call5_audio_first_window_cp_ParamLimits

0x9d8d,	// (0x0003016d) popup_call5_audio_first_window_cp

0xe2e9,	// (0x000346c9) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2e9,	// (0x000346c9) call5_swipe_1_pane_g1_cp

0xe329,	// (0x00034709) call5_swipe_1_pane_g2_cp

0xe302,	// (0x000346e2) call5_swipe_1_pane_t1_cp_ParamLimits

0xe302,	// (0x000346e2) call5_swipe_1_pane_t1_cp

0xe2e9,	// (0x000346c9) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2e9,	// (0x000346c9) call5_swipe_2_pane_g1_cp

0xe331,	// (0x00034711) call5_swipe_2_pane_g2_cp

0xe339,	// (0x00034719) call5_swipe_2_pane_t1_cp_ParamLimits

0xe339,	// (0x00034719) call5_swipe_2_pane_t1_cp

0x1efa,	// (0x000282da) main_sp_fs_email_pane

0xe34e,	// (0x0003472e) main_sp_fs_listscroll_pane_te

0xe357,	// (0x00034737) popup_sp_fs_action_menu_pane_ParamLimits

0xe357,	// (0x00034737) popup_sp_fs_action_menu_pane

0xc31a,	// (0x000326fa) bg_sp_fs_ctrlbar_pane_g1

0xe39d,	// (0x0003477d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3a6,	// (0x00034786) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3af,	// (0x0003478f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc31a,	// (0x000326fa) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x000360c7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0f9,	// (0x000324d9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0f9,	// (0x000324d9) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3b8,	// (0x00034798) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3b8,	// (0x00034798) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3c4,	// (0x000347a4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3c4,	// (0x000347a4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x000360d0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x000360d0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3d0,	// (0x000347b0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3d0,	// (0x000347b0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe3ea,	// (0x000347ca) list_medium_line_t2_right_icon_g1

0x9d9b,	// (0x0003017b) list_medium_line_t2_right_icon_t1

0x9dab,	// (0x0003018b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x000360d5) list_medium_line_t2_right_icon_t

0xbde5,	// (0x000321c5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbde5,	// (0x000321c5) bg_sp_fs_ctrlbar_pane

0x9e05,	// (0x000301e5) main_sp_fs_ctrlbar_button_pane_cp01

0x9e0f,	// (0x000301ef) main_sp_fs_ctrlbar_ddmenu_pane

0xe42c,	// (0x0003480c) main_sp_fs_ctrlbar_pane_g1

0xe438,	// (0x00034818) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x000360da) main_sp_fs_ctrlbar_pane_g

0xe444,	// (0x00034824) main_sp_fs_ctrlbar_pane_t1

0x9e19,	// (0x000301f9) main_sp_fs_ctrlbar_pane

0x9e3d,	// (0x0003021d) main_sp_fs_listscroll_pane_te_cp01

0x9e5d,	// (0x0003023d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9e5d,	// (0x0003023d) popup_sp_fs_action_menu_pane_cp01

0x1efa,	// (0x000282da) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1efa,	// (0x000282da) bg_sp_fs_highlight_list_pane_cp01

0xe459,	// (0x00034839) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe459,	// (0x00034839) sp_fs_action_menu_list_gene_pane_g1

0xe468,	// (0x00034848) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe468,	// (0x00034848) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x000360df) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x000360df) sp_fs_action_menu_list_gene_pane_g

0xe475,	// (0x00034855) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe475,	// (0x00034855) sp_fs_action_menu_list_gene_pane_t1

0xe48d,	// (0x0003486d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe48d,	// (0x0003486d) sp_fs_action_menu_list_gene_pane

0xe4b0,	// (0x00034890) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4b0,	// (0x00034890) popup_sp_fs_action_menu_bg_pane

0xe4be,	// (0x0003489e) sp_fs_action_menu_list_pane_ParamLimits

0xe4be,	// (0x0003489e) sp_fs_action_menu_list_pane

0xe4e2,	// (0x000348c2) sp_fs_scroll_pane_cp01_ParamLimits

0xe4e2,	// (0x000348c2) sp_fs_scroll_pane_cp01

0x9e79,	// (0x00030259) list_medium_line_plain_t2_t1

0x9e89,	// (0x00030269) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x000360e4) list_medium_line_plain_t2_t

0x9e99,	// (0x00030279) list_medium_line_plain_t3_t1

0x9ea9,	// (0x00030289) list_medium_line_plain_t3_t2

0x9eb7,	// (0x00030297) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x000360e9) list_medium_line_plain_t3_t

0x3246,	// (0x00029626) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x2_t2_g2_g1

0x325e,	// (0x0002963e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x325e,	// (0x0002963e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0003564a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0003564a) list_medium_line_x2_t2_g2_g

0x46c5,	// (0x0002aaa5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x46c5,	// (0x0002aaa5) list_medium_line_x2_t2_g2_t1

0x3293,	// (0x00029673) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3293,	// (0x00029673) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x000360f0) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x000360f0) list_medium_line_x2_t2_g2_t

0x3246,	// (0x00029626) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x2_t4_g2_g1

0x325e,	// (0x0002963e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x325e,	// (0x0002963e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x0003564a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x0003564a) list_medium_line_x2_t4_g2_g

0x9ec5,	// (0x000302a5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9ec5,	// (0x000302a5) list_medium_line_x2_t4_g2_t1

0x9edf,	// (0x000302bf) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9edf,	// (0x000302bf) list_medium_line_x2_t4_g2_t2

0x9ef5,	// (0x000302d5) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9ef5,	// (0x000302d5) list_medium_line_x2_t4_g2_t3

0x3293,	// (0x00029673) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3293,	// (0x00029673) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x000360f5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x000360f5) list_medium_line_x2_t4_g2_t

0xe508,	// (0x000348e8) list_medium_line_t3_right_iconx2_g1

0xe3ea,	// (0x000347ca) list_medium_line_t3_right_iconx2_g2

0x9f0a,	// (0x000302ea) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x000360fe) list_medium_line_t3_right_iconx2_g

0x9f14,	// (0x000302f4) list_medium_line_t3_right_iconx2_t1

0x9f24,	// (0x00030304) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00036105) list_medium_line_t3_right_iconx2_t

0x3246,	// (0x00029626) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x3_t4_g4_g1

0x3252,	// (0x00029632) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3252,	// (0x00029632) list_medium_line_x3_t4_g4_g2

0x32fa,	// (0x000296da) list_medium_line_x3_t4_g4_g3_ParamLimits

0x32fa,	// (0x000296da) list_medium_line_x3_t4_g4_g3

0xe510,	// (0x000348f0) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe510,	// (0x000348f0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0003610a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0003610a) list_medium_line_x3_t4_g4_g

0x9f32,	// (0x00030312) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9f32,	// (0x00030312) list_medium_line_x3_t4_g4_t1

0x9f49,	// (0x00030329) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9f49,	// (0x00030329) list_medium_line_x3_t4_g4_t2

0xe51c,	// (0x000348fc) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe51c,	// (0x000348fc) list_medium_line_x3_t4_g4_t3

0xe531,	// (0x00034911) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe531,	// (0x00034911) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00036113) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00036113) list_medium_line_x3_t4_g4_t

0x9f64,	// (0x00030344) list_single_dyc_row_text_pane_t1_ParamLimits

0x9f64,	// (0x00030344) list_single_dyc_row_text_pane_t1

0x9fad,	// (0x0003038d) list_single_dyc_row_text_pane_t2_ParamLimits

0x9fad,	// (0x0003038d) list_single_dyc_row_text_pane_t2

0xe54e,	// (0x0003492e) list_single_dyc_row_text_pane_t3_ParamLimits

0xe54e,	// (0x0003492e) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0003611c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0003611c) list_single_dyc_row_text_pane_t

0xe560,	// (0x00034940) list_single_dyc_row_pane_g1_ParamLimits

0xe560,	// (0x00034940) list_single_dyc_row_pane_g1

0xe56c,	// (0x0003494c) list_single_dyc_row_pane_g2_ParamLimits

0xe56c,	// (0x0003494c) list_single_dyc_row_pane_g2

0xe578,	// (0x00034958) list_single_dyc_row_pane_g3_ParamLimits

0xe578,	// (0x00034958) list_single_dyc_row_pane_g3

0xe584,	// (0x00034964) list_single_dyc_row_pane_g4_ParamLimits

0xe584,	// (0x00034964) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00036123) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00036123) list_single_dyc_row_pane_g

0xe590,	// (0x00034970) list_single_dyc_row_text_pane_ParamLimits

0xe590,	// (0x00034970) list_single_dyc_row_text_pane

0x1c7f,	// (0x0002805f) bg_sp_fs_scroll_pane

0xe5af,	// (0x0003498f) thumb_sp_fs_scroll_pane

0xd3ac,	// (0x0003378c) list_medium_line_g1_ParamLimits

0xd3ac,	// (0x0003378c) list_medium_line_g1

0xe5b8,	// (0x00034998) list_medium_line_t1_ParamLimits

0xe5b8,	// (0x00034998) list_medium_line_t1

0x3246,	// (0x00029626) list_medium_line_x2_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x2_g1

0x3252,	// (0x00029632) list_medium_line_x2_g2_ParamLimits

0x3252,	// (0x00029632) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0003612c) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0003612c) list_medium_line_x2_g

0xe5cd,	// (0x000349ad) list_medium_line_x2_t1_ParamLimits

0xe5cd,	// (0x000349ad) list_medium_line_x2_t1

0x3246,	// (0x00029626) list_medium_line_x3_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x3_g1

0x3252,	// (0x00029632) list_medium_line_x3_g2_ParamLimits

0x3252,	// (0x00029632) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0003612c) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0003612c) list_medium_line_x3_g

0xe5cd,	// (0x000349ad) list_medium_line_x3_t1_ParamLimits

0xe5cd,	// (0x000349ad) list_medium_line_x3_t1

0xe5e3,	// (0x000349c3) thumb_sp_fs_scroll_pane_g1

0xe5ec,	// (0x000349cc) thumb_sp_fs_scroll_pane_g2

0xe5f5,	// (0x000349d5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00036131) thumb_sp_fs_scroll_pane_g

0xe5e3,	// (0x000349c3) bg_sp_fs_scroll_pane_g1

0xe5ec,	// (0x000349cc) bg_sp_fs_scroll_pane_g2

0xe5f5,	// (0x000349d5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00036131) bg_sp_fs_scroll_pane_g

0x3246,	// (0x00029626) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3246,	// (0x00029626) list_medium_line_x2_t3_g4_g1

0x32ee,	// (0x000296ce) list_medium_line_x2_t3_g4_g2_ParamLimits

0x32ee,	// (0x000296ce) list_medium_line_x2_t3_g4_g2

0x3252,	// (0x00029632) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3252,	// (0x00029632) list_medium_line_x2_t3_g4_g3

0x325e,	// (0x0002963e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x325e,	// (0x0002963e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x000356c6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x000356c6) list_medium_line_x2_t3_g4_g

0xa007,	// (0x000303e7) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa007,	// (0x000303e7) list_medium_line_x2_t3_g4_t1

0xa01d,	// (0x000303fd) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa01d,	// (0x000303fd) list_medium_line_x2_t3_g4_t2

0x3293,	// (0x00029673) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3293,	// (0x00029673) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00036138) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00036138) list_medium_line_x2_t3_g4_t

0xd3ac,	// (0x0003378c) list_medium_line_g2_g1_ParamLimits

0xd3ac,	// (0x0003378c) list_medium_line_g2_g1

0xd3b8,	// (0x00033798) list_medium_line_g2_g2_ParamLimits

0xd3b8,	// (0x00033798) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00035dff) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00035dff) list_medium_line_g2_g

0xe5fe,	// (0x000349de) list_medium_line_g2_t1_ParamLimits

0xe5fe,	// (0x000349de) list_medium_line_g2_t1

0xd3ac,	// (0x0003378c) list_medium_line_t3_g2_g1_ParamLimits

0xd3ac,	// (0x0003378c) list_medium_line_t3_g2_g1

0xd3b8,	// (0x00033798) list_medium_line_t3_g2_g2_ParamLimits

0xd3b8,	// (0x00033798) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00035dff) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00035dff) list_medium_line_t3_g2_g

0xa036,	// (0x00030416) list_medium_line_t3_g2_t1_ParamLimits

0xa036,	// (0x00030416) list_medium_line_t3_g2_t1

0xa050,	// (0x00030430) list_medium_line_t3_g2_t2_ParamLimits

0xa050,	// (0x00030430) list_medium_line_t3_g2_t2

0xa066,	// (0x00030446) list_medium_line_t3_g2_t3_ParamLimits

0xa066,	// (0x00030446) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0003613f) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0003613f) list_medium_line_t3_g2_t

0xe3ea,	// (0x000347ca) list_medium_line_right_icon_g1

0xe613,	// (0x000349f3) list_medium_line_right_icon_t1

0xd3ac,	// (0x0003378c) list_medium_line_t2_g1_ParamLimits

0xd3ac,	// (0x0003378c) list_medium_line_t2_g1

0xa07d,	// (0x0003045d) list_medium_line_t2_t1_ParamLimits

0xa07d,	// (0x0003045d) list_medium_line_t2_t1

0xa097,	// (0x00030477) list_medium_line_t2_t2_ParamLimits

0xa097,	// (0x00030477) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00036146) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00036146) list_medium_line_t2_t

0xd3ac,	// (0x0003378c) list_medium_line_t3_g1_ParamLimits

0xd3ac,	// (0x0003378c) list_medium_line_t3_g1

0xa0b0,	// (0x00030490) list_medium_line_t3_t1_ParamLimits

0xa0b0,	// (0x00030490) list_medium_line_t3_t1

0xa0ca,	// (0x000304aa) list_medium_line_t3_t2_ParamLimits

0xa0ca,	// (0x000304aa) list_medium_line_t3_t2

0xa0e0,	// (0x000304c0) list_medium_line_t3_t3_ParamLimits

0xa0e0,	// (0x000304c0) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0003614b) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0003614b) list_medium_line_t3_t

0xd3ac,	// (0x0003378c) list_medium_line_g3_g1_ParamLimits

0xd3ac,	// (0x0003378c) list_medium_line_g3_g1

0xe621,	// (0x00034a01) list_medium_line_g3_g2_ParamLimits

0xe621,	// (0x00034a01) list_medium_line_g3_g2

0xd3b8,	// (0x00033798) list_medium_line_g3_g3_ParamLimits

0xd3b8,	// (0x00033798) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00036152) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00036152) list_medium_line_g3_g

0xe62d,	// (0x00034a0d) list_medium_line_g3_t1_ParamLimits

0xe62d,	// (0x00034a0d) list_medium_line_g3_t1

0xd3ac,	// (0x0003378c) list_medium_line_t2_g3_g1_ParamLimits

0xd3ac,	// (0x0003378c) list_medium_line_t2_g3_g1

0xe621,	// (0x00034a01) list_medium_line_t2_g3_g2_ParamLimits

0xe621,	// (0x00034a01) list_medium_line_t2_g3_g2

0xd3b8,	// (0x00033798) list_medium_line_t2_g3_g3_ParamLimits

0xd3b8,	// (0x00033798) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00036152) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00036152) list_medium_line_t2_g3_g

0xa0f5,	// (0x000304d5) list_medium_line_t2_g3_t1_ParamLimits

0xa0f5,	// (0x000304d5) list_medium_line_t2_g3_t1

0xa10c,	// (0x000304ec) list_medium_line_t2_g3_t2_ParamLimits

0xa10c,	// (0x000304ec) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x00036159) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x00036159) list_medium_line_t2_g3_t

0xd3ac,	// (0x0003378c) list_medium_line_t3_g3_g1_ParamLimits

0xd3ac,	// (0x0003378c) list_medium_line_t3_g3_g1

0xe621,	// (0x00034a01) list_medium_line_t3_g3_g2_ParamLimits

0xe621,	// (0x00034a01) list_medium_line_t3_g3_g2

0xd3b8,	// (0x00033798) list_medium_line_t3_g3_g3_ParamLimits

0xd3b8,	// (0x00033798) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00036152) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00036152) list_medium_line_t3_g3_g

0xa125,	// (0x00030505) list_medium_line_t3_g3_t1_ParamLimits

0xa125,	// (0x00030505) list_medium_line_t3_g3_t1

0xa13e,	// (0x0003051e) list_medium_line_t3_g3_t2_ParamLimits

0xa13e,	// (0x0003051e) list_medium_line_t3_g3_t2

0xa154,	// (0x00030534) list_medium_line_t3_g3_t3_ParamLimits

0xa154,	// (0x00030534) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0003615e) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0003615e) list_medium_line_t3_g3_t

0xe508,	// (0x000348e8) list_medium_line_right_iconx2_g1

0xe3ea,	// (0x000347ca) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x00036165) list_medium_line_right_iconx2_g

0xe642,	// (0x00034a22) list_medium_line_right_iconx2_t1

0xe508,	// (0x000348e8) list_medium_line_t2_right_iconx2_g1

0xe3ea,	// (0x000347ca) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x00036165) list_medium_line_t2_right_iconx2_g

0xa16e,	// (0x0003054e) list_medium_line_t2_right_iconx2_t1

0xa17e,	// (0x0003055e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0003616a) list_medium_line_t2_right_iconx2_t

0xe650,	// (0x00034a30) list_medium_line_x4_t4_t1

0xa190,	// (0x00030570) list_medium_line_x4_t4_t2

0xa1a0,	// (0x00030580) list_medium_line_x4_t4_t3

0xa1b0,	// (0x00030590) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0003616f) list_medium_line_x4_t4_t

0xa1fa,	// (0x000305da) tport_appsw_pane_ParamLimits

0xa1fa,	// (0x000305da) tport_appsw_pane

0xa20d,	// (0x000305ed) tport_contact_pane_ParamLimits

0xa20d,	// (0x000305ed) tport_contact_pane

0xa220,	// (0x00030600) tport_listscroll_pane_ParamLimits

0xa220,	// (0x00030600) tport_listscroll_pane

0xa236,	// (0x00030616) cell_tport_appsw_pane_ParamLimits

0xa236,	// (0x00030616) cell_tport_appsw_pane

0xd09e,	// (0x0003347e) tport_appsw_pane_g1_ParamLimits

0xd09e,	// (0x0003347e) tport_appsw_pane_g1

0xe65e,	// (0x00034a3e) tport_contact_pane_g1

0xe667,	// (0x00034a47) tport_contact_pane_t1

0xe675,	// (0x00034a55) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00036178) tport_contact_pane_t

0xe683,	// (0x00034a63) list_tport_pane

0xe68c,	// (0x00034a6c) scroll_pane_cp_030

0xa27c,	// (0x0003065c) cell_tport_appsw_pane_g1

0xe6a5,	// (0x00034a85) cell_tport_appsw_pane_t1

0x1c7f,	// (0x0002805f) grid_highlight_pane_cp019

0xa28c,	// (0x0003066c) list_tport_double_graphic_pane_ParamLimits

0xa28c,	// (0x0003066c) list_tport_double_graphic_pane

0x1efa,	// (0x000282da) list_highlight_pane_cp023_ParamLimits

0x1efa,	// (0x000282da) list_highlight_pane_cp023

0xa29c,	// (0x0003067c) list_tport_double_graphic_pane_g1_ParamLimits

0xa29c,	// (0x0003067c) list_tport_double_graphic_pane_g1

0xa2a9,	// (0x00030689) list_tport_double_graphic_pane_t1_ParamLimits

0xa2a9,	// (0x00030689) list_tport_double_graphic_pane_t1

0xa2be,	// (0x0003069e) list_tport_double_graphic_pane_t2_ParamLimits

0xa2be,	// (0x0003069e) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x00036184) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x00036184) list_tport_double_graphic_pane_t

0x1c7f,	// (0x0002805f) main_cale_note_pane

0x195e,	// (0x00027d3e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x195e,	// (0x00027d3e) cell_vitu2_function_top_wide_pane_cp01

0x9851,	// (0x0002fc31) wait_bar_pane_cp05_ParamLimits

0x1c7f,	// (0x0002805f) listscroll_cmail_pane

0xe6bb,	// (0x00034a9b) list_cmail_pane

0xa2da,	// (0x000306ba) list_cmail_body_pane

0xa2f2,	// (0x000306d2) list_single_cmail_header_caption_pane

0xa30f,	// (0x000306ef) list_single_cmail_header_detail_pane_ParamLimits

0xa30f,	// (0x000306ef) list_single_cmail_header_detail_pane

0xa341,	// (0x00030721) list_single_cmail_header_caption_pane_t1

0xa351,	// (0x00030731) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa351,	// (0x00030731) list_single_cmail_header_detail_pane_g1

0xe6db,	// (0x00034abb) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6db,	// (0x00034abb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00036189) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00036189) list_single_cmail_header_detail_pane_g

0xe6f4,	// (0x00034ad4) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6f4,	// (0x00034ad4) list_single_cmail_header_detail_pane_t1

0xe732,	// (0x00034b12) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe732,	// (0x00034b12) list_single_cmail_header_editor_pane_bg

0xe078,	// (0x00034458) list_cmail_body_pane_g1

0xe744,	// (0x00034b24) list_cmail_body_pane_t1

0xd0e9,	// (0x000334c9) list_single_cmail_header_editor_pane_bg_g1

0x39af,	// (0x00029d8f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd0f9,	// (0x000334d9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd0f1,	// (0x000334d1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd384,	// (0x00033764) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd119,	// (0x000334f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd109,	// (0x000334e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd111,	// (0x000334f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x398f,	// (0x00029d6f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa38f,	// (0x0003076f) calenote_gesture_pane_ParamLimits

0xa38f,	// (0x0003076f) calenote_gesture_pane

0xa3af,	// (0x0003078f) calenote_window_pane_ParamLimits

0xa3af,	// (0x0003078f) calenote_window_pane

0xe752,	// (0x00034b32) popup_note_window_cp01

0xa3cb,	// (0x000307ab) calenote_swipe_1_pane_ParamLimits

0xa3cb,	// (0x000307ab) calenote_swipe_1_pane

0x9d81,	// (0x00030161) calenote_swipe_2_pane_ParamLimits

0x9d81,	// (0x00030161) calenote_swipe_2_pane

0xe2e9,	// (0x000346c9) calenote_swipe_1_pane_g1_ParamLimits

0xe2e9,	// (0x000346c9) calenote_swipe_1_pane_g1

0xe2f6,	// (0x000346d6) calenote_swipe_1_pane_g2_ParamLimits

0xe2f6,	// (0x000346d6) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x000360bd) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x000360bd) calenote_swipe_1_pane_g

0xe764,	// (0x00034b44) calenote_swipe_1_pane_t1_ParamLimits

0xe764,	// (0x00034b44) calenote_swipe_1_pane_t1

0xe2e9,	// (0x000346c9) calenote_swipe_2_pane_g1_ParamLimits

0xe2e9,	// (0x000346c9) calenote_swipe_2_pane_g1

0xe783,	// (0x00034b63) calenote_swipe_2_pane_g2_ParamLimits

0xe783,	// (0x00034b63) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00036195) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00036195) calenote_swipe_2_pane_g

0xe78f,	// (0x00034b6f) calenote_swipe_2_pane_t1_ParamLimits

0xe78f,	// (0x00034b6f) calenote_swipe_2_pane_t1

0x1c7f,	// (0x0002805f) main_mup_navstr_pane

0x7604,	// (0x0002d9e4) main_mup3_pane_t7_ParamLimits

0x7604,	// (0x0002d9e4) main_mup3_pane_t7

0xcc7d,	// (0x0003305d) main_mp4_pane_g6_ParamLimits

0xcc7d,	// (0x0003305d) main_mp4_pane_g6

0xcea1,	// (0x00033281) main_image3_pane_t4_ParamLimits

0xcea1,	// (0x00033281) main_image3_pane_t4

0xa3e0,	// (0x000307c0) popup_navstr_preview_pane_ParamLimits

0xa3e0,	// (0x000307c0) popup_navstr_preview_pane

0xa3f0,	// (0x000307d0) scroll_navstr_pane_ParamLimits

0xa3f0,	// (0x000307d0) scroll_navstr_pane

0x1c7f,	// (0x0002805f) bg_popup_preview_window_pane_cp04

0xe7b6,	// (0x00034b96) popup_navstr_preview_pane_t1

0xa404,	// (0x000307e4) scroll_navstr_pane_g1_ParamLimits

0xa404,	// (0x000307e4) scroll_navstr_pane_g1

0xa418,	// (0x000307f8) scroll_navstr_pane_t1_ParamLimits

0xa418,	// (0x000307f8) scroll_navstr_pane_t1

0xe75b,	// (0x00034b3b) bg_button_pane_cp014

0xe75b,	// (0x00034b3b) bg_button_pane_cp030

0xe28a,	// (0x0003466a) list_double_fisheye_pane_g4_ParamLimits

0xe28a,	// (0x0003466a) list_double_fisheye_pane_g4

0xe296,	// (0x00034676) list_double_fisheye_pane_g5_ParamLimits

0xe296,	// (0x00034676) list_double_fisheye_pane_g5

0xe6c3,	// (0x00034aa3) sp_fs_scroll_pane_cp03

0xe42c,	// (0x0003480c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe438,	// (0x00034818) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x000360da) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe444,	// (0x00034824) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa2d0,	// (0x000306b0) sp_fs_scroll_pane_cp02

0x2b2c,	// (0x00028f0c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2b2c,	// (0x00028f0c) popup_sp_fs_calendar_preview_list_single_pane

0x1c7f,	// (0x0002805f) main_cam6_pano_pane

0x1efa,	// (0x000282da) main_mup3_pane_ParamLimits

0x1c7f,	// (0x0002805f) main_phacti_pane

0x9722,	// (0x0002fb02) bg_button_pane_cp11

0x973c,	// (0x0002fb1c) main_mobtv_info_pane_g2_ParamLimits

0x973c,	// (0x0002fb1c) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0003603a) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0003603a) main_mobtv_info_pane_g

0x9919,	// (0x0002fcf9) sc_clock_pane_t5_ParamLimits

0x9919,	// (0x0002fcf9) sc_clock_pane_t5

0x9ace,	// (0x0002feae) main_radioblah_pane_g1_ParamLimits

0xe1de,	// (0x000345be) main_radioblah_pane_t3_ParamLimits

0xe1de,	// (0x000345be) main_radioblah_pane_t3

0xe1f6,	// (0x000345d6) main_radioblah_pane_t4_ParamLimits

0xe1f6,	// (0x000345d6) main_radioblah_pane_t4

0x9af6,	// (0x0002fed6) main_radioblah_text_pane_ParamLimits

0x9af6,	// (0x0002fed6) main_radioblah_text_pane

0x9b08,	// (0x0002fee8) main_radioblah_info_pane_g1_ParamLimits

0x9ba1,	// (0x0002ff81) main_radioblah_info_pane_t4_ParamLimits

0x9ba1,	// (0x0002ff81) main_radioblah_info_pane_t4

0x1efa,	// (0x000282da) main_sp_fs_calendar_pane

0xa42f,	// (0x0003080f) main_phacti_pane_g1

0xa437,	// (0x00030817) phacti_note_pane_ParamLimits

0xa437,	// (0x00030817) phacti_note_pane

0xe7cd,	// (0x00034bad) phacti_term_pane_ParamLimits

0xe7cd,	// (0x00034bad) phacti_term_pane

0xe7e2,	// (0x00034bc2) phacti_note_pane_t1_ParamLimits

0xe7e2,	// (0x00034bc2) phacti_note_pane_t1

0xe7f9,	// (0x00034bd9) phacti_term_pane_g1

0xe801,	// (0x00034be1) phacti_term_pane_t1_ParamLimits

0xe801,	// (0x00034be1) phacti_term_pane_t1

0xe82b,	// (0x00034c0b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe833,	// (0x00034c13) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0003619f) popup_sp_fs_calendar_preview_list_single_pane_g

0xe83b,	// (0x00034c1b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe83b,	// (0x00034c1b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe851,	// (0x00034c31) aid_popup_sp_fs_bg_corner_pane

0xc31a,	// (0x000326fa) popup_sp_fs_calendar_preview_bg_pane_g1

0x1c7f,	// (0x0002805f) popup_sp_fs_calendar_preview_bg_pane

0xe859,	// (0x00034c39) popup_sp_fs_calendar_preview_list_pane

0x1efa,	// (0x000282da) bg_main_sp_fs_cale_pane_ParamLimits

0x1efa,	// (0x000282da) bg_main_sp_fs_cale_pane

0xe86a,	// (0x00034c4a) listscroll_cale_mrui_pane_ParamLimits

0xe86a,	// (0x00034c4a) listscroll_cale_mrui_pane

0xe87e,	// (0x00034c5e) listscroll_sp_fs_schedule_track_pane

0xe887,	// (0x00034c67) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe887,	// (0x00034c67) main_sp_fs_ctrlbar_pane_cp01

0xe898,	// (0x00034c78) main_sp_fs_ribbon_pane

0xe8a0,	// (0x00034c80) popup_sp_fs_cale_preview_window

0xa48e,	// (0x0003086e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa48e,	// (0x0003086e) list_single_sp_fs_schedule_track_pane

0x1efa,	// (0x000282da) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1efa,	// (0x000282da) bg_sp_fs_highlight_list_pane_cp03

0xa4a1,	// (0x00030881) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa4a1,	// (0x00030881) list_single_sp_fs_schedule_track_pane_g1

0xa4ad,	// (0x0003088d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa4ad,	// (0x0003088d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x000361a4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x000361a4) list_single_sp_fs_schedule_track_pane_g

0xa4b9,	// (0x00030899) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa4b9,	// (0x00030899) list_single_sp_fs_schedule_track_pane_t1

0xa4db,	// (0x000308bb) sp_fs_schedule_track_pane_ParamLimits

0xa4db,	// (0x000308bb) sp_fs_schedule_track_pane

0xe8b2,	// (0x00034c92) sp_fs_schedule_track_pane_g1

0xe8ba,	// (0x00034c9a) sp_fs_schedule_track_pane_g2

0xe8c2,	// (0x00034ca2) sp_fs_schedule_track_pane_g3

0xe8ca,	// (0x00034caa) sp_fs_schedule_track_pane_g4

0xe8d2,	// (0x00034cb2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x000361a9) sp_fs_schedule_track_pane_g

0xd0e9,	// (0x000334c9) bg_sp_fs_schedule_viewer_highlight_g1

0x39af,	// (0x00029d8f) bg_sp_fs_schedule_viewer_highlight_g2

0xd0f1,	// (0x000334d1) bg_sp_fs_schedule_viewer_highlight_g3

0xd0f9,	// (0x000334d9) bg_sp_fs_schedule_viewer_highlight_g4

0xd384,	// (0x00033764) bg_sp_fs_schedule_viewer_highlight_g5

0xd109,	// (0x000334e9) bg_sp_fs_schedule_viewer_highlight_g6

0xd111,	// (0x000334f1) bg_sp_fs_schedule_viewer_highlight_g7

0xd119,	// (0x000334f9) bg_sp_fs_schedule_viewer_highlight_g8

0x398f,	// (0x00029d6f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x000361b4) bg_sp_fs_schedule_viewer_highlight_g

0x1c7f,	// (0x0002805f) bg_main_sp_fs_ribbon_pane

0xa4f0,	// (0x000308d0) main_sp_fs_ribbon_pane_g1

0xe8da,	// (0x00034cba) main_sp_fs_ribbon_pane_t1

0xa4f9,	// (0x000308d9) main_sp_fs_ribbon_pane_t2

0xe8e9,	// (0x00034cc9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x000361c7) main_sp_fs_ribbon_pane_t

0xe8f8,	// (0x00034cd8) main_sp_fs_ribbon_scheduler_pane

0xe900,	// (0x00034ce0) bg_main_sp_fs_ribbon_pane_g1

0xe909,	// (0x00034ce9) bg_main_sp_fs_ribbon_pane_g2

0xe912,	// (0x00034cf2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x000361ce) bg_main_sp_fs_ribbon_pane_g

0xe91a,	// (0x00034cfa) main_sp_fs_ribbon_scheduler_pane_g1

0xe923,	// (0x00034d03) main_sp_fs_ribbon_scheduler_pane_g2

0xe92c,	// (0x00034d0c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x000361d5) main_sp_fs_ribbon_scheduler_pane_g

0xe935,	// (0x00034d15) list_cale_mrui_pane

0xa508,	// (0x000308e8) sp_fs_scroll_pane_cp07_ParamLimits

0xa508,	// (0x000308e8) sp_fs_scroll_pane_cp07

0xa51e,	// (0x000308fe) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa51e,	// (0x000308fe) bg_sp_fs_schedule_viewer_highlight

0xe93e,	// (0x00034d1e) list_single_sp_fs_schedule_track_pane_cp01

0xe946,	// (0x00034d26) list_sp_fs_schedule_track_pane

0xe94e,	// (0x00034d2e) sp_fs_scroll_pane_cp06_ParamLimits

0xe94e,	// (0x00034d2e) sp_fs_scroll_pane_cp06

0xc31a,	// (0x000326fa) bgmain_sp_fs_calendar_pane_g1

0xa530,	// (0x00030910) list_single_cale_mrui_pane_ParamLimits

0xa530,	// (0x00030910) list_single_cale_mrui_pane

0xe960,	// (0x00034d40) list_single_cale_mrui_row_pane_ParamLimits

0xe960,	// (0x00034d40) list_single_cale_mrui_row_pane

0xe96d,	// (0x00034d4d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe96d,	// (0x00034d4d) list_single_cale_mrui_row_pane_g1

0xe9a5,	// (0x00034d85) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9a5,	// (0x00034d85) list_single_cale_mrui_row_pane_t1

0xa557,	// (0x00030937) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa557,	// (0x00030937) list_single_cale_mrui_row_pane_t2

0xe9b7,	// (0x00034d97) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9b7,	// (0x00034d97) list_single_cale_mrui_row_pane_t3

0xe9e6,	// (0x00034dc6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9e6,	// (0x00034dc6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x000361e1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x000361e1) list_single_cale_mrui_row_pane_t

0xa5bd,	// (0x0003099d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa5bd,	// (0x0003099d) list_single_cmail_header_editor_pane_bg_cp01

0xa5e1,	// (0x000309c1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa5e1,	// (0x000309c1) list_single_cmail_header_editor_pane_bg_cp02

0xa5ff,	// (0x000309df) main_radioblah_text_pane_t1_ParamLimits

0xa5ff,	// (0x000309df) main_radioblah_text_pane_t1

0xea15,	// (0x00034df5) cam6_indi_pane_cp01

0xea1d,	// (0x00034dfd) cam6_mode_pane_cp01

0xea25,	// (0x00034e05) cam6_pano_pane

0xea2e,	// (0x00034e0e) cam6_zoom_pane_cp01

0xea38,	// (0x00034e18) cam6_pano_image_pane

0xea41,	// (0x00034e21) cam6_pano_pane_g1

0xe078,	// (0x00034458) cam6_pano_pane_g2

0xea4a,	// (0x00034e2a) cam6_pano_pane_g3

0xea53,	// (0x00034e33) cam6_pano_pane_g4

0xc8fa,	// (0x00032cda) cam6_pano_pane_g5

0xea5c,	// (0x00034e3c) cam6_pano_pane_g6

0xea64,	// (0x00034e44) cam6_pano_pane_g7

0xea6c,	// (0x00034e4c) cam6_pano_pane_g8

0xea75,	// (0x00034e55) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x000361ea) cam6_pano_pane_g

0x1c7f,	// (0x0002805f) main_browser_tag_pane

0xe7ae,	// (0x00034b8e) grid_navstr_albumart_pane

0xea80,	// (0x00034e60) cell_navstr_albumart_pane_ParamLimits

0xea80,	// (0x00034e60) cell_navstr_albumart_pane

0xea9c,	// (0x00034e7c) cell_navstr_albumart_pane_g1

0xbbfe,	// (0x00031fde) cell_navstr_albumart_pane_g2

0xbc0e,	// (0x00031fee) cell_navstr_albumart_pane_g3

0xbc06,	// (0x00031fe6) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x000361fd) cell_navstr_albumart_pane_g

0xa61a,	// (0x000309fa) bt_list_pane_ParamLimits

0xa61a,	// (0x000309fa) bt_list_pane

0xa630,	// (0x00030a10) bt_list_pane_t1

0xa63f,	// (0x00030a1f) bt_list_pane_t2

0x0001,

0xfe26,	// (0x00036206) bt_list_pane_t

0x1c7f,	// (0x0002805f) main_cale_prevew_pane

0xa64e,	// (0x00030a2e) popup_cale_preview_window_ParamLimits

0xa64e,	// (0x00030a2e) popup_cale_preview_window

0x1efa,	// (0x000282da) bg_popup_preview_window_pane_cp05_ParamLimits

0x1efa,	// (0x000282da) bg_popup_preview_window_pane_cp05

0xeaa4,	// (0x00034e84) list_cale_preview_pane_ParamLimits

0xeaa4,	// (0x00034e84) list_cale_preview_pane

0xa669,	// (0x00030a49) list_double_cale_preview_pane_ParamLimits

0xa669,	// (0x00030a49) list_double_cale_preview_pane

0xa67d,	// (0x00030a5d) list_single_cale_preview_pane_ParamLimits

0xa67d,	// (0x00030a5d) list_single_cale_preview_pane

0xa695,	// (0x00030a75) list_single_cale_preview_pane_g1

0xa69d,	// (0x00030a7d) list_single_cale_preview_pane_t1_ParamLimits

0xa69d,	// (0x00030a7d) list_single_cale_preview_pane_t1

0xa6b2,	// (0x00030a92) list_double_cale_preview_pane_g1

0xa6ba,	// (0x00030a9a) list_double_cale_preview_pane_t1_ParamLimits

0xa6ba,	// (0x00030a9a) list_double_cale_preview_pane_t1

0xa6cf,	// (0x00030aaf) list_double_cale_preview_pane_t2_ParamLimits

0xa6cf,	// (0x00030aaf) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0003620b) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0003620b) list_double_cale_preview_pane_t

0x1c7f,	// (0x0002805f) main_ezdial_pane

0x1efa,	// (0x000282da) main_sp_fs_email_pane_ParamLimits

0x9dbd,	// (0x0003019d) cmail_ddmenu_btn01_pane_ParamLimits

0x9dbd,	// (0x0003019d) cmail_ddmenu_btn01_pane

0x9dd0,	// (0x000301b0) cmail_ddmenu_btn02_pane_ParamLimits

0x9dd0,	// (0x000301b0) cmail_ddmenu_btn02_pane

0x9df3,	// (0x000301d3) cmail_ddmenu_btn03_pane_ParamLimits

0x9df3,	// (0x000301d3) cmail_ddmenu_btn03_pane

0x9e19,	// (0x000301f9) main_sp_fs_ctrlbar_pane_ParamLimits

0x9e3d,	// (0x0003021d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa2da,	// (0x000306ba) list_cmail_body_pane_ParamLimits

0xe6d2,	// (0x00034ab2) bg_button_pane_cp12

0xe6e7,	// (0x00034ac7) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6e7,	// (0x00034ac7) list_single_cmail_header_detail_pane_g3

0xa369,	// (0x00030749) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa369,	// (0x00030749) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00036190) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00036190) list_single_cmail_header_detail_pane_t

0xe816,	// (0x00034bf6) phacti_term_pane_t2_ParamLimits

0xe816,	// (0x00034bf6) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0003619a) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0003619a) phacti_term_pane_t

0xeab0,	// (0x00034e90) aid_size_list_single_double

0xa6e7,	// (0x00030ac7) popup_ezdial_listscroll_window

0xa703,	// (0x00030ae3) popup_number_entry_window_cp01

0x4ec1,	// (0x0002b2a1) bg_popup_call_pane_cp09

0xeabc,	// (0x00034e9c) ezdial_list_pane

0xeac4,	// (0x00034ea4) scroll_pane_cp23

0xbde5,	// (0x000321c5) bg_button_pane_cp028_ParamLimits

0xbde5,	// (0x000321c5) bg_button_pane_cp028

0xa711,	// (0x00030af1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa711,	// (0x00030af1) cmail_ddmenu_btn01_pane_g1

0xa71d,	// (0x00030afd) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa71d,	// (0x00030afd) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x00036210) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x00036210) cmail_ddmenu_btn01_pane_g

0xeacc,	// (0x00034eac) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeacc,	// (0x00034eac) cmail_ddmenu_btn01_pane_t1

0xbde5,	// (0x000321c5) bg_button_pane_cp029_ParamLimits

0xbde5,	// (0x000321c5) bg_button_pane_cp029

0xa729,	// (0x00030b09) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa729,	// (0x00030b09) cmail_ddmenu_btn02_pane_g1

0xa741,	// (0x00030b21) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa741,	// (0x00030b21) cmail_ddmenu_btn02_pane_t1

0x1efa,	// (0x000282da) bg_button_pane_cp031_ParamLimits

0x1efa,	// (0x000282da) bg_button_pane_cp031

0xa729,	// (0x00030b09) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa729,	// (0x00030b09) cmail_ddmenu_btn03_pane_g1

0xa741,	// (0x00030b21) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa741,	// (0x00030b21) cmail_ddmenu_btn03_pane_t1

0x7fd0,	// (0x0002e3b0) cell_dialer2_keypad_pane_t1_ParamLimits

0x7fea,	// (0x0002e3ca) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7fea,	// (0x0002e3ca) cell_dialer2_keypad_pane_t1_copy1

0x95a2,	// (0x0002f982) ncimui_group_button_pane

0x1efa,	// (0x000282da) main_sp_fs_calendar_pane_ParamLimits

0xa2f2,	// (0x000306d2) list_single_cmail_header_caption_pane_ParamLimits

0xe861,	// (0x00034c41) aid_recal_txt_sm_pane

0x1c7f,	// (0x0002805f) mian_recal_day_pane

0xe8a0,	// (0x00034c80) popup_sp_fs_cale_preview_window_ParamLimits

0x1c7f,	// (0x0002805f) list_recal_day_pane

0xeb03,	// (0x00034ee3) list_single_recal_day_pane_ParamLimits

0xeb03,	// (0x00034ee3) list_single_recal_day_pane

0xeb15,	// (0x00034ef5) list_single_recal_day_pane_g1_ParamLimits

0xeb15,	// (0x00034ef5) list_single_recal_day_pane_g1

0xeb21,	// (0x00034f01) list_single_recal_day_pane_g2_ParamLimits

0xeb21,	// (0x00034f01) list_single_recal_day_pane_g2

0xeb2d,	// (0x00034f0d) list_single_recal_day_pane_g3_ParamLimits

0xeb2d,	// (0x00034f0d) list_single_recal_day_pane_g3

0xa765,	// (0x00030b45) list_single_recal_day_pane_g4_ParamLimits

0xa765,	// (0x00030b45) list_single_recal_day_pane_g4

0xeb39,	// (0x00034f19) list_single_recal_day_pane_g5_ParamLimits

0xeb39,	// (0x00034f19) list_single_recal_day_pane_g5

0xeb45,	// (0x00034f25) list_single_recal_day_pane_g6_ParamLimits

0xeb45,	// (0x00034f25) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x0003621f) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0003621f) list_single_recal_day_pane_g

0xeb51,	// (0x00034f31) list_single_recal_day_pane_t1

0xeb5f,	// (0x00034f3f) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0003622c) list_single_recal_day_pane_t

0xa773,	// (0x00030b53) ncimui_query_button_pane_ParamLimits

0xa773,	// (0x00030b53) ncimui_query_button_pane

0xa783,	// (0x00030b63) ncimui_query_button_pane_t1_ParamLimits

0xa783,	// (0x00030b63) ncimui_query_button_pane_t1

0xeb6d,	// (0x00034f4d) ncimui_query_button_pane_t2_ParamLimits

0xeb6d,	// (0x00034f4d) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00036231) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00036231) ncimui_query_button_pane_t

0xa796,	// (0x00030b76) query_button_pane_ParamLimits

0xa796,	// (0x00030b76) query_button_pane

0x1c7f,	// (0x0002805f) bg_button_pane_cp0028

0xeb80,	// (0x00034f60) query_button_pane_t1

0x66c1,	// (0x0002caa1) main_tport_pane_ParamLimits

0xa1c0,	// (0x000305a0) bg_popup_window_pane_cp01_ParamLimits

0xa1c0,	// (0x000305a0) bg_popup_window_pane_cp01

0xa1d6,	// (0x000305b6) heading_pane_cp08_ParamLimits

0xa1d6,	// (0x000305b6) heading_pane_cp08

0xa1e7,	// (0x000305c7) heading_pane_cp07_ParamLimits

0xa1e7,	// (0x000305c7) heading_pane_cp07

0xe69d,	// (0x00034a7d) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x0003617d) cell_tport_appsw_pane_g

0x54b8,	// (0x0002b898) input_candi_list_open_g1

0x4456,	// (0x0002a836) list_cale_time_pane_g6_ParamLimits

0x4456,	// (0x0002a836) list_cale_time_pane_g6

0x7047,	// (0x0002d427) aid_size_touch_calib_1_ParamLimits

0x7047,	// (0x0002d427) aid_size_touch_calib_1

0x7053,	// (0x0002d433) aid_size_touch_calib_2_ParamLimits

0x7053,	// (0x0002d433) aid_size_touch_calib_2

0x7069,	// (0x0002d449) aid_size_touch_calib_3_ParamLimits

0x7069,	// (0x0002d449) aid_size_touch_calib_3

0x7087,	// (0x0002d467) aid_size_touch_calib_4_ParamLimits

0x7087,	// (0x0002d467) aid_size_touch_calib_4

0x709d,	// (0x0002d47d) main_touch_calib_button_group_pane_ParamLimits

0x709d,	// (0x0002d47d) main_touch_calib_button_group_pane

0x70b5,	// (0x0002d495) main_touch_calib_pane_g1_ParamLimits

0x70c1,	// (0x0002d4a1) main_touch_calib_pane_g2_ParamLimits

0x70cd,	// (0x0002d4ad) main_touch_calib_pane_g3_ParamLimits

0x70d9,	// (0x0002d4b9) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00035b55) main_touch_calib_pane_g_ParamLimits

0x70e5,	// (0x0002d4c5) main_touch_calib_pane_t1_ParamLimits

0x70ff,	// (0x0002d4df) main_touch_calib_pane_t2_ParamLimits

0x7119,	// (0x0002d4f9) main_touch_calib_pane_t3_ParamLimits

0x712d,	// (0x0002d50d) main_touch_calib_pane_t4_ParamLimits

0x7141,	// (0x0002d521) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00035b5e) main_touch_calib_pane_t_ParamLimits

0xc6c4,	// (0x00032aa4) list_single_fp_cale_pane_g3_ParamLimits

0xc6c4,	// (0x00032aa4) list_single_fp_cale_pane_g3

0xd0d1,	// (0x000334b1) bg_button_pane_cp012_ParamLimits

0xd0d1,	// (0x000334b1) bg_vkb2_func_pane_cp03_ParamLimits

0x1b5f,	// (0x00027f3f) cell_vitu2_function_top_pane_g1_ParamLimits

0xd0d1,	// (0x000334b1) bg_vkb2_func_pane_cp04_ParamLimits

0x9542,	// (0x0002f922) main_ncimui_button_group_pane_ParamLimits

0x9542,	// (0x0002f922) main_ncimui_button_group_pane

0x9590,	// (0x0002f970) main_ncimui_pane_t3_ParamLimits

0x9590,	// (0x0002f970) main_ncimui_pane_t3

0xe7c4,	// (0x00034ba4) phacti_button_group_pane

0xeab0,	// (0x00034e90) aid_size_list_single_double_ParamLimits

0xa6e7,	// (0x00030ac7) popup_ezdial_listscroll_window_ParamLimits

0xa703,	// (0x00030ae3) popup_number_entry_window_cp01_ParamLimits

0xa7a9,	// (0x00030b89) phacti_button_pane_ParamLimits

0xa7a9,	// (0x00030b89) phacti_button_pane

0x1c7f,	// (0x0002805f) bg_button_pane_cp14

0xeb8e,	// (0x00034f6e) phacti_button_pane_t1

0xa7ba,	// (0x00030b9a) main_touch_calib_button_pane_ParamLimits

0xa7ba,	// (0x00030b9a) main_touch_calib_button_pane

0x28f7,	// (0x00028cd7) bg_button_pane_cp18_ParamLimits

0x28f7,	// (0x00028cd7) bg_button_pane_cp18

0xeb9c,	// (0x00034f7c) main_touch_calib_button_pane_t1_ParamLimits

0xeb9c,	// (0x00034f7c) main_touch_calib_button_pane_t1

0xebb2,	// (0x00034f92) main_touch_calib_button_pane_t2_ParamLimits

0xebb2,	// (0x00034f92) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00036236) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00036236) main_touch_calib_button_pane_t

0x1c7f,	// (0x0002805f) cell_ncimui_button_pane

0x1c7f,	// (0x0002805f) bg_button_pane_cp032

0xebd0,	// (0x00034fb0) cell_ncimui_button_pane_t1

0xce7f,	// (0x0003325f) image3_infobar_pane_ParamLimits

0xce7f,	// (0x0003325f) image3_infobar_pane

0x9945,	// (0x0002fd25) fs_bigclock_status_pane_ParamLimits

0x9945,	// (0x0002fd25) fs_bigclock_status_pane

0x9952,	// (0x0002fd32) main_fs_bigclock_clock_pane_ParamLimits

0x9952,	// (0x0002fd32) main_fs_bigclock_clock_pane

0x9965,	// (0x0002fd45) main_fs_bigclock_indi_pane_ParamLimits

0x9965,	// (0x0002fd45) main_fs_bigclock_indi_pane

0x9983,	// (0x0002fd63) main_fs_bigclock_swipe_pane_ParamLimits

0x9983,	// (0x0002fd63) main_fs_bigclock_swipe_pane

0x1c7f,	// (0x0002805f) main_fs_clock_dumped_data

0x99a4,	// (0x0002fd84) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x99a4,	// (0x0002fd84) list_single_fs_bigclock_indicator_pane_g1

0x99c4,	// (0x0002fda4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x99c4,	// (0x0002fda4) list_single_fs_bigclock_indicator_pane_g2

0x99de,	// (0x0002fdbe) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x99de,	// (0x0002fdbe) list_single_fs_bigclock_indicator_pane_g3

0x99fa,	// (0x0002fdda) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x99fa,	// (0x0002fdda) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0003606e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0003606e) list_single_fs_bigclock_indicator_pane_g

0x9a20,	// (0x0002fe00) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9a20,	// (0x0002fe00) list_single_fs_bigclock_indicator_pane_t1

0x9a48,	// (0x0002fe28) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9a48,	// (0x0002fe28) list_single_fs_bigclock_indicator_pane_t2

0x9a70,	// (0x0002fe50) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9a70,	// (0x0002fe50) list_single_fs_bigclock_indicator_pane_t3

0x9a9a,	// (0x0002fe7a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9a9a,	// (0x0002fe7a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x00036079) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x00036079) list_single_fs_bigclock_indicator_pane_t

0xebde,	// (0x00034fbe) image3_infobar_fav_pane_ParamLimits

0xebde,	// (0x00034fbe) image3_infobar_fav_pane

0xebee,	// (0x00034fce) image3_infobar_loc_pane_ParamLimits

0xebee,	// (0x00034fce) image3_infobar_loc_pane

0xec04,	// (0x00034fe4) image3_infobar_time_pane_ParamLimits

0xec04,	// (0x00034fe4) image3_infobar_time_pane

0xc31a,	// (0x000326fa) image3_infobar_time_pane_g1

0xec14,	// (0x00034ff4) image3_infobar_time_pane_t1

0xc31a,	// (0x000326fa) image3_infobar_loc_pane_g1

0xec22,	// (0x00035002) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0003623b) image3_infobar_loc_pane_g

0xec2a,	// (0x0003500a) image3_infobar_loc_pane_t1

0xc31a,	// (0x000326fa) image3_infobar_fav_pane_g1

0xec38,	// (0x00035018) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00036240) image3_infobar_fav_pane_g

0xec40,	// (0x00035020) fs_bigclock_status_battery_pane

0xec49,	// (0x00035029) fs_bigclock_status_signal_pane

0xec52,	// (0x00035032) fs_bigclock_status_title_pane

0xec5b,	// (0x0003503b) fs_bigclock_status_signal_pane_g1

0xec64,	// (0x00035044) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00036245) fs_bigclock_status_signal_pane_g

0xec6c,	// (0x0003504c) fs_bigclock_status_battery_pane_g1

0xec75,	// (0x00035055) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0003624a) fs_bigclock_status_battery_pane_g

0xec7d,	// (0x0003505d) fs_bigclock_status_title_pane_t1

0xc31a,	// (0x000326fa) main_fs_bigclock_clock_pane_g1

0xec8b,	// (0x0003506b) main_fs_bigclock_clock_pane_g2

0xec8b,	// (0x0003506b) main_fs_bigclock_clock_pane_g3

0xec8b,	// (0x0003506b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0003624f) main_fs_bigclock_clock_pane_g

0xec97,	// (0x00035077) main_fs_bigclock_clock_pane_t1

0xa7cf,	// (0x00030baf) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00036258) main_fs_bigclock_clock_pane_t

0xeca5,	// (0x00035085) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeca5,	// (0x00035085) list_single_fs_bigclock_indicator_pane

0xa7de,	// (0x00030bbe) list_single_fs_bigclock_pane_ParamLimits

0xa7de,	// (0x00030bbe) list_single_fs_bigclock_pane

0xecbf,	// (0x0003509f) main_fs_bigclock_indicator_pane_t1

0xecce,	// (0x000350ae) list_single_fs_bigclock_pane_g1

0xecd6,	// (0x000350b6) list_single_fs_bigclock_pane_t1

0xc31a,	// (0x000326fa) main_fs_bigclock_swipe_pane_g1

0xed16,	// (0x000350f6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00036269) main_fs_bigclock_swipe_pane_g

0xed1e,	// (0x000350fe) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed1e,	// (0x000350fe) main_fs_bigclock_swipe_pane_t1

0x4814,	// (0x0002abf4) call_type_pane_ParamLimits

0x1c7f,	// (0x0002805f) main_btmg_pane

0xe999,	// (0x00034d79) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe999,	// (0x00034d79) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x000361dc) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x000361dc) list_single_cale_mrui_row_pane_g

0xeaea,	// (0x00034eca) list_recal_vselct_arw_lo_pane

0xeaf2,	// (0x00034ed2) list_recal_vselct_arw_up_pane

0xeafa,	// (0x00034eda) list_recal_vselct_pane

0xed3b,	// (0x0003511b) btmg_button_pane

0xa845,	// (0x00030c25) main_btmg_pane_g1

0x1c7f,	// (0x0002805f) bg_button_pane_cp044

0xed45,	// (0x00035125) btmg_button_pane_t1

0xbddd,	// (0x000321bd) aid_listscroll_gen

0x1efa,	// (0x000282da) main_cntbar_detail_pane

0xe6b3,	// (0x00034a93) list_cmail_folder_pane

0xe6c3,	// (0x00034aa3) sp_fs_scroll_pane_cp03_ParamLimits

0xa84f,	// (0x00030c2f) list_single_fs_dyc_pane_cp01_ParamLimits

0xa84f,	// (0x00030c2f) list_single_fs_dyc_pane_cp01

0xed53,	// (0x00035133) aid_size_cmail_indent

0xed5c,	// (0x0003513c) list_single_dyc_row_pane_cp01

0xa89c,	// (0x00030c7c) cntbar_detail_list_pane_ParamLimits

0xa89c,	// (0x00030c7c) cntbar_detail_list_pane

0xa8ee,	// (0x00030cce) main_cntbar_detail_cont_pane_ParamLimits

0xa8ee,	// (0x00030cce) main_cntbar_detail_cont_pane

0x4629,	// (0x0002aa09) scroll_pane_cp032_ParamLimits

0x4629,	// (0x0002aa09) scroll_pane_cp032

0xa902,	// (0x00030ce2) cntbar_detail_list_event_pane_ParamLimits

0xa902,	// (0x00030ce2) cntbar_detail_list_event_pane

0xa8ae,	// (0x00030c8e) cntbar_detail_list_shct_pane

0x3a07,	// (0x00029de7) aid_list_gen

0xed65,	// (0x00035145) aid_scroll

0xed6e,	// (0x0003514e) aid_size_touch_scroll_bar

0xed77,	// (0x00035157) aid_list_double

0xed80,	// (0x00035160) aid_list_single

0xa912,	// (0x00030cf2) aid_list_single_lg

0xed89,	// (0x00035169) aid_list_z_g_a_sm

0xed91,	// (0x00035171) aid_list_z_g_d

0xed99,	// (0x00035179) aid_txt_z_prm

0xeda7,	// (0x00035187) aid_txt_z_prm_cp01

0xedb5,	// (0x00035195) aid_txt_z_sec

0xa91b,	// (0x00030cfb) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa91b,	// (0x00030cfb) main_cntbar_detail_cont_pane_g1

0xa92f,	// (0x00030d0f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa92f,	// (0x00030d0f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0003626e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0003626e) main_cntbar_detail_cont_pane_g

0xedc3,	// (0x000351a3) main_cntbar_detail_cont_pane_t1

0xedd1,	// (0x000351b1) main_cntbar_detail_cont_pane_t2

0xeddf,	// (0x000351bf) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x00036273) main_cntbar_detail_cont_pane_t

0xa93f,	// (0x00030d1f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa93f,	// (0x00030d1f) cell_cntbar_detail_list_shct_pane

0xeded,	// (0x000351cd) cntbar_detail_list_shct_pane_g1

0xedf6,	// (0x000351d6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x0003627a) cntbar_detail_list_shct_pane_g

0xa951,	// (0x00030d31) cntbar_detail_list_event_pane_g1_ParamLimits

0xa951,	// (0x00030d31) cntbar_detail_list_event_pane_g1

0xa95d,	// (0x00030d3d) cntbar_detail_list_event_pane_g2_ParamLimits

0xa95d,	// (0x00030d3d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0003627f) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0003627f) cntbar_detail_list_event_pane_g

0xa9cb,	// (0x00030dab) cntbar_detail_list_event_pane_t1_ParamLimits

0xa9cb,	// (0x00030dab) cntbar_detail_list_event_pane_t1

0xa9e0,	// (0x00030dc0) cntbar_detail_list_event_pane_t2_ParamLimits

0xa9e0,	// (0x00030dc0) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x0003628c) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x0003628c) cntbar_detail_list_event_pane_t

0xc31a,	// (0x000326fa) cell_cntbar_detail_list_shct_pane_g1

0x4e3f,	// (0x0002b21f) navi_pane_mv_g3

0x1efa,	// (0x000282da) main_cntbar_detail_pane_ParamLimits

0x1c7f,	// (0x0002805f) main_notif_wgt_pane

0xcc33,	// (0x00033013) aid_tch_main_mp4_pane_g4

0xce07,	// (0x000331e7) popup_slider_window_cp02

0xeae1,	// (0x00034ec1) list_recal_day_event_pane

0xa86c,	// (0x00030c4c) cntbar_detail_btn_pane_ParamLimits

0xa86c,	// (0x00030c4c) cntbar_detail_btn_pane

0xa884,	// (0x00030c64) cntbar_detail_btn_pane_cp01_ParamLimits

0xa884,	// (0x00030c64) cntbar_detail_btn_pane_cp01

0xa8ae,	// (0x00030c8e) cntbar_detail_list_shct_pane_ParamLimits

0xa8be,	// (0x00030c9e) cntbar_detail_pane_g1_ParamLimits

0xa8be,	// (0x00030c9e) cntbar_detail_pane_g1

0xa8d2,	// (0x00030cb2) cntbar_detail_pane_t1_ParamLimits

0xa8d2,	// (0x00030cb2) cntbar_detail_pane_t1

0xa969,	// (0x00030d49) cntbar_detail_list_event_pane_g3_ParamLimits

0xa969,	// (0x00030d49) cntbar_detail_list_event_pane_g3

0xa981,	// (0x00030d61) cntbar_detail_list_event_pane_g4_ParamLimits

0xa981,	// (0x00030d61) cntbar_detail_list_event_pane_g4

0xa999,	// (0x00030d79) cntbar_detail_list_event_pane_g5_ParamLimits

0xa999,	// (0x00030d79) cntbar_detail_list_event_pane_g5

0xa9b1,	// (0x00030d91) cntbar_detail_list_event_pane_g6_ParamLimits

0xa9b1,	// (0x00030d91) cntbar_detail_list_event_pane_g6

0xa9f5,	// (0x00030dd5) cntbar_detail_list_event_pane_t3_ParamLimits

0xa9f5,	// (0x00030dd5) cntbar_detail_list_event_pane_t3

0xaa07,	// (0x00030de7) popup_notif_wgt_window_ParamLimits

0xaa07,	// (0x00030de7) popup_notif_wgt_window

0xaa20,	// (0x00030e00) popup_submenu_window_cp01_ParamLimits

0xaa20,	// (0x00030e00) popup_submenu_window_cp01

0x4ec1,	// (0x0002b2a1) bg_popup_window_pane_cp10

0xedff,	// (0x000351df) listscroll_notif_wgt_pane

0xee09,	// (0x000351e9) list_notif_wgt_window

0xee12,	// (0x000351f2) scroll_pane_cp033

0xee1b,	// (0x000351fb) list_notif_wgt_row_pane_ParamLimits

0xee1b,	// (0x000351fb) list_notif_wgt_row_pane

0xee2f,	// (0x0003520f) aid_size_list_notif_wgt_del

0xee38,	// (0x00035218) list_notif_wgt_row_pane_g1

0xee40,	// (0x00035220) list_notif_wgt_row_pane_g2

0xee48,	// (0x00035228) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x00036293) list_notif_wgt_row_pane_g

0xee51,	// (0x00035231) list_notif_wgt_row_pane_t1

0xee5f,	// (0x0003523f) list_notif_wgt_row_pane_t2

0xee6d,	// (0x0003524d) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0003629a) list_notif_wgt_row_pane_t

0xd3de,	// (0x000337be) list_recal_day_event_pane_g1

0xee7b,	// (0x0003525b) list_recal_day_event_pane_t1

0x1c7f,	// (0x0002805f) bg_button_pane_cp045

0xee8a,	// (0x0003526a) cntbar_detail_btn_pane_t1

0xbde5,	// (0x000321c5) main_callh_pane_ParamLimits

0xbde5,	// (0x000321c5) main_callh_pane

0x1c7f,	// (0x0002805f) main_coverflow0_pane

0x1c7f,	// (0x0002805f) main_wgtman_pane

0x9991,	// (0x0002fd71) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9991,	// (0x0002fd71) main_fs_bigclock_unlock_btn_pane

0xe695,	// (0x00034a75) bg_button_pane_cp16

0xa284,	// (0x00030664) cell_tport_appsw_pane_g3

0xaa32,	// (0x00030e12) cf0_flow_pane_ParamLimits

0xaa32,	// (0x00030e12) cf0_flow_pane

0xee98,	// (0x00035278) listscroll_cf0_pane

0xeea1,	// (0x00035281) main_cf0_pane_g1

0xaa47,	// (0x00030e27) main_cf0_pane_t1_ParamLimits

0xaa47,	// (0x00030e27) main_cf0_pane_t1

0xaa5e,	// (0x00030e3e) main_cf0_pane_t2_ParamLimits

0xaa5e,	// (0x00030e3e) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x000362a1) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x000362a1) main_cf0_pane_t

0xeeab,	// (0x0003528b) scroll_pane_cp11

0xaa75,	// (0x00030e55) cf0_flow_pane_g1

0xaa81,	// (0x00030e61) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x000362a6) cf0_flow_pane_g

0xaa8d,	// (0x00030e6d) cf0_flow_pane_t1

0x1c7f,	// (0x0002805f) main_call6_pane

0x1c7f,	// (0x0002805f) main_calllock_pane

0xaa9f,	// (0x00030e7f) call6_btn_grp_pane_ParamLimits

0xaa9f,	// (0x00030e7f) call6_btn_grp_pane

0xaabb,	// (0x00030e9b) call6_pane_g1_ParamLimits

0xaabb,	// (0x00030e9b) call6_pane_g1

0xaad1,	// (0x00030eb1) popup_call6_1st_window_ParamLimits

0xaad1,	// (0x00030eb1) popup_call6_1st_window

0xaae2,	// (0x00030ec2) popup_call6_2nd_window_ParamLimits

0xaae2,	// (0x00030ec2) popup_call6_2nd_window

0xaaf3,	// (0x00030ed3) cell_call6_btn_pane_ParamLimits

0xaaf3,	// (0x00030ed3) cell_call6_btn_pane

0x4ec1,	// (0x0002b2a1) bg_popup_call2_in_pane_cp03

0xeeb6,	// (0x00035296) popup_call6_1st_window_g1

0xeebe,	// (0x0003529e) popup_call6_1st_window_g2

0xeec6,	// (0x000352a6) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x000362ab) popup_call6_1st_window_g

0xeece,	// (0x000352ae) popup_call6_1st_window_t1

0xeedd,	// (0x000352bd) popup_call6_1st_window_t2

0xeeed,	// (0x000352cd) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x000362b2) popup_call6_1st_window_t

0x4ec1,	// (0x0002b2a1) bg_popup_call2_in_pane_cp04

0xeeb6,	// (0x00035296) popup_call6_2nd_window_g1

0xeebe,	// (0x0003529e) popup_call6_2nd_window_g2

0xeec6,	// (0x000352a6) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x000362ab) popup_call6_2nd_window_g

0xeece,	// (0x000352ae) popup_call6_2nd_window_t1

0x1c7f,	// (0x0002805f) bg_button_pane_cp15

0xeefd,	// (0x000352dd) cell_call6_btn_pane_g1

0xef06,	// (0x000352e6) cell_call6_btn_pane_t1

0xab07,	// (0x00030ee7) listscroll_wgtman_pane_ParamLimits

0xab07,	// (0x00030ee7) listscroll_wgtman_pane

0xab2a,	// (0x00030f0a) wgtman_btn_pane_ParamLimits

0xab2a,	// (0x00030f0a) wgtman_btn_pane

0x4a70,	// (0x0002ae50) aid_scroll_copy1

0xef15,	// (0x000352f5) list_wgtman_pane

0xab6d,	// (0x00030f4d) wgtman_btn_pane_g1_ParamLimits

0xab6d,	// (0x00030f4d) wgtman_btn_pane_g1

0xab99,	// (0x00030f79) wgtman_btn_pane_t1_ParamLimits

0xab99,	// (0x00030f79) wgtman_btn_pane_t1

0xef1f,	// (0x000352ff) wgtman_btn_pane_t2_ParamLimits

0xef1f,	// (0x000352ff) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x000362b9) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x000362b9) wgtman_btn_pane_t

0xef36,	// (0x00035316) listrow_wgtman_pane_ParamLimits

0xef36,	// (0x00035316) listrow_wgtman_pane

0xef4a,	// (0x0003532a) listrow_wgtman_pane_g1

0xabd6,	// (0x00030fb6) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x000362be) listrow_wgtman_pane_g

0xef53,	// (0x00035333) listrow_wgtman_pane_t1

0xef61,	// (0x00035341) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x000362c3) listrow_wgtman_pane_t

0xef6f,	// (0x0003534f) wait_bar_pane_cp09

0xef77,	// (0x00035357) main_calllock_btn_pane

0xef81,	// (0x00035361) main_calllock_pane_g1

0x1c7f,	// (0x0002805f) bg_button_pane_cp17

0xef8d,	// (0x0003536d) main_calllock_btn_pane_g1

0xef96,	// (0x00035376) main_calllock_btn_pane_t1

0x1c7f,	// (0x0002805f) main_dialer3_pane

0x1c7f,	// (0x0002805f) main_fmrd2_pane

0xc31a,	// (0x000326fa) main_fs_bigclock_unlock_btn_pane_g1

0xefad,	// (0x0003538d) main_fs_bigclock_unlock_btn_pane_t1

0xabe0,	// (0x00030fc0) area_fmrd2_info_pane_ParamLimits

0xabe0,	// (0x00030fc0) area_fmrd2_info_pane

0xabf3,	// (0x00030fd3) area_fmrd2_visual_pane_ParamLimits

0xabf3,	// (0x00030fd3) area_fmrd2_visual_pane

0xac01,	// (0x00030fe1) fmrd2_indi_pane_ParamLimits

0xac01,	// (0x00030fe1) fmrd2_indi_pane

0xac0e,	// (0x00030fee) area_fmrd2_visual_pane_g1

0xac16,	// (0x00030ff6) area_fmrd2_visual_pane_t1

0xac26,	// (0x00031006) area_fmrd2_visual_pane_t2

0xac36,	// (0x00031016) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x000362cd) area_fmrd2_visual_pane_t

0xac46,	// (0x00031026) area_fmrd2_info_pane_g1

0xac4e,	// (0x0003102e) area_fmrd2_info_pane_t1

0xac5e,	// (0x0003103e) area_fmrd2_info_pane_t2

0xac6e,	// (0x0003104e) area_fmrd2_info_pane_t3

0xac7e,	// (0x0003105e) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x000362d4) area_fmrd2_info_pane_t

0xac8e,	// (0x0003106e) fmrd2_indi_pane_t1

0xac9e,	// (0x0003107e) fmrd2_indi_pane_t2

0xacae,	// (0x0003108e) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x000362dd) fmrd2_indi_pane_t

0x9a09,	// (0x0002fde9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9a09,	// (0x0002fde9) list_single_fs_bigclock_indicator_pane_g5

0x9aaf,	// (0x0002fe8f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9aaf,	// (0x0002fe8f) list_single_fs_bigclock_indicator_pane_t5

0xa44b,	// (0x0003082b) aid_cell_bcale_month_pane_ParamLimits

0xa44b,	// (0x0003082b) aid_cell_bcale_month_pane

0xa45d,	// (0x0003083d) bcale_month_pane_ParamLimits

0xa45d,	// (0x0003083d) bcale_month_pane

0xa475,	// (0x00030855) bcale_preview_pane_ParamLimits

0xa475,	// (0x00030855) bcale_preview_pane

0xecd6,	// (0x000350b6) list_single_fs_bigclock_pane_t1_ParamLimits

0xecf2,	// (0x000350d2) list_single_fs_bigclock_pane_t2_ParamLimits

0xecf2,	// (0x000350d2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00036264) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00036264) list_single_fs_bigclock_pane_t

0xefa5,	// (0x00035385) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x000362c8) main_fs_bigclock_unlock_btn_pane_g

0xacbe,	// (0x0003109e) aid_dia3_key_size_ParamLimits

0xacbe,	// (0x0003109e) aid_dia3_key_size

0xaccd,	// (0x000310ad) aid_dia3_listrow_size_ParamLimits

0xaccd,	// (0x000310ad) aid_dia3_listrow_size

0xacdb,	// (0x000310bb) dia3_keypad_fun_pane_ParamLimits

0xacdb,	// (0x000310bb) dia3_keypad_fun_pane

0xacf7,	// (0x000310d7) dia3_keypad_num_pane_ParamLimits

0xacf7,	// (0x000310d7) dia3_keypad_num_pane

0xad10,	// (0x000310f0) dia3_listscroll_pane_ParamLimits

0xad10,	// (0x000310f0) dia3_listscroll_pane

0xad25,	// (0x00031105) dia3_numentry_pane_ParamLimits

0xad25,	// (0x00031105) dia3_numentry_pane

0xefbb,	// (0x0003539b) dia3_list_pane

0xefc6,	// (0x000353a6) scroll_pane_cp12

0x1c7f,	// (0x0002805f) bg_dia3_numentry_pane

0xefd1,	// (0x000353b1) dia3_numentry_pane_t1

0xad38,	// (0x00031118) cell_dia3_key_num_pane

0xad40,	// (0x00031120) cell_dia3_key0_fun_pane_ParamLimits

0xad40,	// (0x00031120) cell_dia3_key0_fun_pane

0xad54,	// (0x00031134) cell_dia3_key1_fun_pane_ParamLimits

0xad54,	// (0x00031134) cell_dia3_key1_fun_pane

0xad6c,	// (0x0003114c) dia3_listrow_pane

0xdee2,	// (0x000342c2) bg_dia3_numentry_pane_g1

0x1c7f,	// (0x0002805f) bg_button_pane_cp21

0xefe0,	// (0x000353c0) cell_dia3_key_num_pane_t1

0xefee,	// (0x000353ce) cell_dia3_key_num_pane_t2

0xeffd,	// (0x000353dd) cell_dia3_key_num_pane_t3

0xf00c,	// (0x000353ec) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x000362e4) cell_dia3_key_num_pane_t

0x1c7f,	// (0x0002805f) bg_button_pane_cp19

0xad7e,	// (0x0003115e) cell_dia3_key0_fun_pane_g1

0x1c7f,	// (0x0002805f) bg_button_pane_cp20

0xad86,	// (0x00031166) cell_dia3_key1_fun_pane_g1

0xad8e,	// (0x0003116e) area_left_week_number_pane

0xad97,	// (0x00031177) area_top_day_name_pane

0xada0,	// (0x00031180) frame_month_view_pane

0xadac,	// (0x0003118c) grid_month_view_pane

0xadb6,	// (0x00031196) cell_top_day_name_pane_ParamLimits

0xadb6,	// (0x00031196) cell_top_day_name_pane

0xadd0,	// (0x000311b0) cell_area_left_week_number_pane_ParamLimits

0xadd0,	// (0x000311b0) cell_area_left_week_number_pane

0xade6,	// (0x000311c6) cell_month_view_pane_ParamLimits

0xade6,	// (0x000311c6) cell_month_view_pane

0xf01b,	// (0x000353fb) frm_month_g1

0xae05,	// (0x000311e5) frm_month_g2

0xae0f,	// (0x000311ef) frm_month_g3

0xae19,	// (0x000311f9) frm_month_g4

0xae23,	// (0x00031203) frm_month_g5

0xae2d,	// (0x0003120d) frm_month_g6

0xae39,	// (0x00031219) frm_month_g7

0xf024,	// (0x00035404) frm_month_g8

0xae45,	// (0x00031225) frm_month_g9

0xae4e,	// (0x0003122e) frm_month_g10

0xae57,	// (0x00031237) frm_month_g11

0xae60,	// (0x00031240) frm_month_g12

0xae69,	// (0x00031249) frm_month_g13

0xae72,	// (0x00031252) frm_month_g14

0xae7b,	// (0x0003125b) frm_month_g15

0xae86,	// (0x00031266) frm_month_g16

0x000f,

0xff0d,	// (0x000362ed) frm_month_g

0xae91,	// (0x00031271) cell_top_day_name_pane_t1

0xaea0,	// (0x00031280) cell_area_left_week_number_pane_g1

0xae91,	// (0x00031271) cell_area_left_week_number_pane_t1

0xc31a,	// (0x000326fa) cell_month_view_pane_g1

0xaea8,	// (0x00031288) cell_month_view_pane_t1

0x1c7f,	// (0x0002805f) main_fps_pane

0xe3f2,	// (0x000347d2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3f2,	// (0x000347d2) cmail_ddmenu_btn02_pane_cp1

0xe40e,	// (0x000347ee) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe40e,	// (0x000347ee) cmail_ddmenu_btn02_pane_cp2

0xa735,	// (0x00030b15) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa735,	// (0x00030b15) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x00036215) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x00036215) cmail_ddmenu_btn02_pane_g

0xa753,	// (0x00030b33) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa753,	// (0x00030b33) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0003621a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0003621a) cmail_ddmenu_btn02_pane_t

0xaeb7,	// (0x00031297) fps_text_pane_ParamLimits

0xaeb7,	// (0x00031297) fps_text_pane

0xaece,	// (0x000312ae) main_fps_pane_g1_ParamLimits

0xaece,	// (0x000312ae) main_fps_pane_g1

0xaee6,	// (0x000312c6) wait_bar_pane_cp010_ParamLimits

0xaee6,	// (0x000312c6) wait_bar_pane_cp010

0xaef9,	// (0x000312d9) fps_text_pane_t1_ParamLimits

0xaef9,	// (0x000312d9) fps_text_pane_t1

0xcfda,	// (0x000333ba) cam4_image_uncrop_pane_g1

0xcfe3,	// (0x000333c3) cam4_image_uncrop_pane_g2

0x8138,	// (0x0002e518) cam4_image_uncrop_pane_g3

0x8141,	// (0x0002e521) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00035ced) cam4_image_uncrop_pane_g

0xad6c,	// (0x0003114c) dia3_listrow_pane_ParamLimits

0x1c7f,	// (0x0002805f) main_phob2_pane

0xa24b,	// (0x0003062b) cell_tport_appsw_pane_cp02_ParamLimits

0xa24b,	// (0x0003062b) cell_tport_appsw_pane_cp02

0xa25f,	// (0x0003063f) cell_tport_appsw_pane_cp03_ParamLimits

0xa25f,	// (0x0003063f) cell_tport_appsw_pane_cp03

0x1c7f,	// (0x0002805f) phob2_contact_card_pane

0x1c7f,	// (0x0002805f) phob2_listscroll_pane

0xf02d,	// (0x0003540d) phob2_list_pane

0xf035,	// (0x00035415) scroll_pane_cp034

0xaf11,	// (0x000312f1) phob2_cc_data_pane_ParamLimits

0xaf11,	// (0x000312f1) phob2_cc_data_pane

0xaf32,	// (0x00031312) phob2_cc_listscroll_pane_ParamLimits

0xaf32,	// (0x00031312) phob2_cc_listscroll_pane

0xaf54,	// (0x00031334) list_double_large_graphic_phob2_pane_ParamLimits

0xaf54,	// (0x00031334) list_double_large_graphic_phob2_pane

0xaf69,	// (0x00031349) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaf69,	// (0x00031349) list_double_large_graphic_phob2_pane_g1

0xaf76,	// (0x00031356) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xaf76,	// (0x00031356) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0003630e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0003630e) list_double_large_graphic_phob2_pane_g

0xaf82,	// (0x00031362) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xaf82,	// (0x00031362) list_double_large_graphic_phob2_pane_t1

0xaf97,	// (0x00031377) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xaf97,	// (0x00031377) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00036313) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00036313) list_double_large_graphic_phob2_pane_t

0x1c7f,	// (0x0002805f) list_highlight_pane_cp024

0xf03d,	// (0x0003541d) phob2_cc_button_pane

0xafa9,	// (0x00031389) phob2_cc_data_pane_g1_ParamLimits

0xafa9,	// (0x00031389) phob2_cc_data_pane_g1

0xafbf,	// (0x0003139f) phob2_cc_data_pane_g2_ParamLimits

0xafbf,	// (0x0003139f) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00036318) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00036318) phob2_cc_data_pane_g

0xafd3,	// (0x000313b3) phob2_cc_data_pane_t1_ParamLimits

0xafd3,	// (0x000313b3) phob2_cc_data_pane_t1

0xafed,	// (0x000313cd) phob2_cc_data_pane_t2_ParamLimits

0xafed,	// (0x000313cd) phob2_cc_data_pane_t2

0xb007,	// (0x000313e7) phob2_cc_data_pane_t3_ParamLimits

0xb007,	// (0x000313e7) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0003631d) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0003631d) phob2_cc_data_pane_t

0xf045,	// (0x00035425) phob2_cc_list_pane_ParamLimits

0xf045,	// (0x00035425) phob2_cc_list_pane

0xd477,	// (0x00033857) scroll_pane_cp035_ParamLimits

0xd477,	// (0x00033857) scroll_pane_cp035

0x1efa,	// (0x000282da) bg_button_pane_cp033

0xf051,	// (0x00035431) phob2_cc_button_pane_g1

0xf05d,	// (0x0003543d) phob2_cc_button_pane_t1

0xf072,	// (0x00035452) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00036324) phob2_cc_button_pane_t

0xb021,	// (0x00031401) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb021,	// (0x00031401) list_double_large_graphic_phob2_cc_pane

0xb036,	// (0x00031416) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb036,	// (0x00031416) list_double_large_graphic_phob2_cc_pane_g1

0xb042,	// (0x00031422) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb042,	// (0x00031422) list_double_large_graphic_phob2_cc_pane_g2

0xb04e,	// (0x0003142e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb04e,	// (0x0003142e) list_double_large_graphic_phob2_cc_pane_g3

0xb05a,	// (0x0003143a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb05a,	// (0x0003143a) list_double_large_graphic_phob2_cc_pane_g4

0xb066,	// (0x00031446) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb066,	// (0x00031446) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00036329) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00036329) list_double_large_graphic_phob2_cc_pane_g

0xb072,	// (0x00031452) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb072,	// (0x00031452) list_double_large_graphic_phob2_cc_pane_t1

0xb09b,	// (0x0003147b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb09b,	// (0x0003147b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00036334) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00036334) list_double_large_graphic_phob2_cc_pane_t

0xf084,	// (0x00035464) list_highlight_pane_cp025_ParamLimits

0xf084,	// (0x00035464) list_highlight_pane_cp025

0x1efa,	// (0x000282da) bg_button_pane_cp033_ParamLimits

0xf051,	// (0x00035431) phob2_cc_button_pane_g1_ParamLimits

0xf05d,	// (0x0003543d) phob2_cc_button_pane_t1_ParamLimits

0xf072,	// (0x00035452) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00036324) phob2_cc_button_pane_t_ParamLimits

0x1cc1,	// (0x000280a1) popup_wgtman_window

0xd207,	// (0x000335e7) scroll_pane_cp038

0xab4f,	// (0x00030f2f) wgtman_btn_pane_cp_01_ParamLimits

0xab4f,	// (0x00030f2f) wgtman_btn_pane_cp_01

0xf092,	// (0x00035472) wgtman_content_pane

0xf09b,	// (0x0003547b) wgtman_heading_pane

0x1c7f,	// (0x0002805f) bg_heading_pane_cp02

0xf0a4,	// (0x00035484) wgtman_heading_pane_g1

0xf0ac,	// (0x0003548c) wgtman_heading_pane_t1

0xf0ba,	// (0x0003549a) scroll_pane_cp036

0xf0c2,	// (0x000354a2) wgtman_list_pane

0xe248,	// (0x00034628) wgtman_list_pane_t1_ParamLimits

0xe248,	// (0x00034628) wgtman_list_pane_t1

0xcfc4,	// (0x000333a4) cam4_grid_pane

0x8978,	// (0x0002ed58) bg_button_pane_cp015_ParamLimits

0x898c,	// (0x0002ed6c) bg_button_pane_cp016_ParamLimits

0x899f,	// (0x0002ed7f) bg_button_pane_cp017_ParamLimits

0x89f7,	// (0x0002edd7) popup_vitu2_query_window_g3_ParamLimits

0x89f7,	// (0x0002edd7) popup_vitu2_query_window_g3

0x8ab4,	// (0x0002ee94) popup_vitu2_query_window_t6_ParamLimits

0x8ab4,	// (0x0002ee94) popup_vitu2_query_window_t6

0x8adf,	// (0x0002eebf) popup_vitu2_query_window_t7_ParamLimits

0x8adf,	// (0x0002eebf) popup_vitu2_query_window_t7

0xcfda,	// (0x000333ba) cam4_grid_pane_g1

0xcfe3,	// (0x000333c3) cam4_grid_pane_g2

0xf0ca,	// (0x000354aa) cam4_grid_pane_g3

0xf0d3,	// (0x000354b3) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00036339) cam4_grid_pane_g

0x33f8,	// (0x000297d8) aid_placing_vt_slider_lsc_ParamLimits

0x373a,	// (0x00029b1a) vidtel_button_pane_ParamLimits

0x373a,	// (0x00029b1a) vidtel_button_pane

0x1c7f,	// (0x0002805f) bg_button_pane_cp034

0xb0c4,	// (0x000314a4) vidtel_button_pane_g1

0xf0de,	// (0x000354be) vidtel_button_pane_t1

0xd352,	// (0x00033732) aid_size_vtel_slider_touch

0xd477,	// (0x00033857) scroll_pane_cp039

0xdf20,	// (0x00034300) ncim_query_button_pane_cp01_ParamLimits

0xdf3f,	// (0x0003431f) ncimui_query_pane_g1_ParamLimits

0x1efa,	// (0x000282da) input_focus_pane_cp012_ParamLimits

0xdf64,	// (0x00034344) ncim_query_entry_pane_t1_ParamLimits

0xd477,	// (0x00033857) scroll_pane_cp039_ParamLimits
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
