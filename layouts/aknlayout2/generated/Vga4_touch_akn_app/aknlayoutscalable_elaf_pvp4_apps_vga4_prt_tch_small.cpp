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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000369d1 };

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
0x4e0d,	// (0x0003b7de) Screen

0x4e19,	// (0x0003b7ea) application_window

0x4e75,	// (0x0003b846) area_bottom_pane_ParamLimits

0x4e75,	// (0x0003b846) area_bottom_pane

0x4ed3,	// (0x0003b8a4) area_top_pane_ParamLimits

0x4ed3,	// (0x0003b8a4) area_top_pane

0x4f37,	// (0x0003b908) call_video_uplink_pane_ParamLimits

0x4f37,	// (0x0003b908) call_video_uplink_pane

0x4f76,	// (0x0003b947) main_pane_ParamLimits

0x4f76,	// (0x0003b947) main_pane

0x2987,	// (0x00039358) context_pane

0x7ce8,	// (0x0003e6b9) navi_pane

0x7d11,	// (0x0003e6e2) popup_cale_events_window_ParamLimits

0x7d11,	// (0x0003e6e2) popup_cale_events_window

0x299a,	// (0x0003936b) popup_mup_playback_window

0x7d29,	// (0x0003e6fa) signal_pane

0x0c17,	// (0x000375e8) main_browser_pane

0x0e0b,	// (0x000377dc) main_burst_pane

0x7b58,	// (0x0003e529) main_calc_pane

0x297b,	// (0x0003934c) main_cale_day_pane

0x535e,	// (0x0003bd2f) main_cale_month_pane

0x297b,	// (0x0003934c) main_cale_week_pane

0x0e0b,	// (0x000377dc) main_call_pane

0x0897,	// (0x00037268) main_call_poc_pane

0x0e0b,	// (0x000377dc) main_camera_pane

0x0e0b,	// (0x000377dc) main_chi_dic_pane

0x159c,	// (0x00037f6d) main_clock_pane

0x0897,	// (0x00037268) main_fmradio_pane

0x0e0b,	// (0x000377dc) main_graph_messa_pane

0x0897,	// (0x00037268) main_help_pane

0x0c17,	// (0x000375e8) main_im_pane

0x0af2,	// (0x000374c3) main_image_pane_ParamLimits

0x0af2,	// (0x000374c3) main_image_pane

0x0897,	// (0x00037268) main_location2_pane

0x0e0b,	// (0x000377dc) main_location_pane

0x0af2,	// (0x000374c3) main_messa_pane

0x0897,	// (0x00037268) main_mp2_pane

0x0e0b,	// (0x000377dc) main_mp_pane

0x0897,	// (0x00037268) main_msg_pane

0x0897,	// (0x00037268) main_mup_eq_pane

0x0897,	// (0x00037268) main_mup_pane

0x0c17,	// (0x000375e8) main_notes_pane

0x0897,	// (0x00037268) main_pec_pane

0x0897,	// (0x00037268) main_phob_pane

0x0897,	// (0x00037268) main_pinb_pane

0x0897,	// (0x00037268) main_postcard_pane

0x0897,	// (0x00037268) main_qdial_pane

0x0e0b,	// (0x000377dc) main_skin_pane

0x0897,	// (0x00037268) main_smil2_pane

0x0e0b,	// (0x000377dc) main_smil_pane

0x0e0b,	// (0x000377dc) main_video_pane

0x0e0b,	// (0x000377dc) main_video_tele_pane

0x0af2,	// (0x000374c3) main_viewer_pane_ParamLimits

0x0af2,	// (0x000374c3) main_viewer_pane

0x0e0b,	// (0x000377dc) main_vorec_pane

0x7b98,	// (0x0003e569) popup_blid_sat_info_window_ParamLimits

0x7b98,	// (0x0003e569) popup_blid_sat_info_window

0x7bbe,	// (0x0003e58f) popup_dyc_status_message_window_ParamLimits

0x7bbe,	// (0x0003e58f) popup_dyc_status_message_window

0x7bce,	// (0x0003e59f) popup_grid_large_graphic_window_ParamLimits

0x7bce,	// (0x0003e59f) popup_grid_large_graphic_window

0x7c63,	// (0x0003e634) popup_loc_request_window_ParamLimits

0x7c63,	// (0x0003e634) popup_loc_request_window

0x7cbc,	// (0x0003e68d) popup_wml_address_window_ParamLimits

0x7cbc,	// (0x0003e68d) popup_wml_address_window

0x7a30,	// (0x0003e401) call_muted_g1

0x7720,	// (0x0003e0f1) popup_call_audio_conf_window_ParamLimits

0x7720,	// (0x0003e0f1) popup_call_audio_conf_window

0x7a40,	// (0x0003e411) popup_call_audio_first_window_ParamLimits

0x7a40,	// (0x0003e411) popup_call_audio_first_window

0x7a80,	// (0x0003e451) popup_call_audio_in_window_ParamLimits

0x7a80,	// (0x0003e451) popup_call_audio_in_window

0x7aa4,	// (0x0003e475) popup_call_audio_out_window_ParamLimits

0x7aa4,	// (0x0003e475) popup_call_audio_out_window

0x7ac6,	// (0x0003e497) popup_call_audio_second_window_ParamLimits

0x7ac6,	// (0x0003e497) popup_call_audio_second_window

0x7af6,	// (0x0003e4c7) popup_call_audio_wait_window_ParamLimits

0x7af6,	// (0x0003e4c7) popup_call_audio_wait_window

0x7b17,	// (0x0003e4e8) popup_number_entry_window_ParamLimits

0x7b17,	// (0x0003e4e8) popup_number_entry_window

0xee9a,	// (0x0004586b) bg_popup_call_pane_cp05_ParamLimits

0xee9a,	// (0x0004586b) bg_popup_call_pane_cp05

0xeeba,	// (0x0004588b) popup_number_entry_window_t1

0xeecd,	// (0x0004589e) popup_number_entry_window_t2

0xeedf,	// (0x000458b0) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x000459ee) popup_number_entry_window_t

0xef26,	// (0x000458f7) text_title_cp2

0xef39,	// (0x0004590a) bg_popup_call_pane_cp_ParamLimits

0xef39,	// (0x0004590a) bg_popup_call_pane_cp

0xef47,	// (0x00045918) call_thumbnail_pane

0xef4f,	// (0x00045920) popup_call_audio_in_window_g1_ParamLimits

0xef4f,	// (0x00045920) popup_call_audio_in_window_g1

0xef5b,	// (0x0004592c) popup_call_audio_in_window_g2_ParamLimits

0xef5b,	// (0x0004592c) popup_call_audio_in_window_g2

0xef67,	// (0x00045938) popup_call_audio_in_window_g3_ParamLimits

0xef67,	// (0x00045938) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x000459f7) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x000459f7) popup_call_audio_in_window_g

0xef73,	// (0x00045944) popup_call_audio_in_window_t1_ParamLimits

0xef73,	// (0x00045944) popup_call_audio_in_window_t1

0xef8f,	// (0x00045960) popup_call_audio_in_window_t2_ParamLimits

0xef8f,	// (0x00045960) popup_call_audio_in_window_t2

0xefab,	// (0x0004597c) popup_call_audio_in_window_t3_ParamLimits

0xefab,	// (0x0004597c) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x000459fe) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x000459fe) popup_call_audio_in_window_t

0xef39,	// (0x0004590a) bg_popup_call_pane_cp01_ParamLimits

0xef39,	// (0x0004590a) bg_popup_call_pane_cp01

0xef47,	// (0x00045918) call_thumbnail_pane_cp02

0xefbe,	// (0x0004598f) call_type_pane_cp022

0xefc6,	// (0x00045997) popup_call_audio_out_window_g1_ParamLimits

0xefc6,	// (0x00045997) popup_call_audio_out_window_g1

0xefd8,	// (0x000459a9) popup_call_audio_out_window_g2_ParamLimits

0xefd8,	// (0x000459a9) popup_call_audio_out_window_g2

0xefe4,	// (0x000459b5) popup_call_audio_out_window_g3_ParamLimits

0xefe4,	// (0x000459b5) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00045a05) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00045a05) popup_call_audio_out_window_g

0xeff6,	// (0x000459c7) popup_call_audio_out_window_t1_ParamLimits

0xeff6,	// (0x000459c7) popup_call_audio_out_window_t1

0x05c3,	// (0x00036f94) popup_call_audio_out_window_t2_ParamLimits

0x05c3,	// (0x00036f94) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00045a0c) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00045a0c) popup_call_audio_out_window_t

0x05d8,	// (0x00036fa9) bg_popup_call_pane_ParamLimits

0x05d8,	// (0x00036fa9) bg_popup_call_pane

0x50a1,	// (0x0003ba72) call_thumbnail_pane_cp_ParamLimits

0x50a1,	// (0x0003ba72) call_thumbnail_pane_cp

0x065c,	// (0x0003702d) call_type_pane_cp01_ParamLimits

0x065c,	// (0x0003702d) call_type_pane_cp01

0x06a0,	// (0x00037071) popup_call_audio_first_window_g1_ParamLimits

0x06a0,	// (0x00037071) popup_call_audio_first_window_g1

0x06ec,	// (0x000370bd) popup_call_audio_first_window_g2_ParamLimits

0x06ec,	// (0x000370bd) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00045a11) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00045a11) popup_call_audio_first_window_g

0x0730,	// (0x00037101) popup_call_audio_first_window_t1_ParamLimits

0x0730,	// (0x00037101) popup_call_audio_first_window_t1

0x07dc,	// (0x000371ad) popup_call_audio_first_window_t4_ParamLimits

0x07dc,	// (0x000371ad) popup_call_audio_first_window_t4

0x0868,	// (0x00037239) popup_call_audio_first_window_t5_ParamLimits

0x0868,	// (0x00037239) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00045a16) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00045a16) popup_call_audio_first_window_t

0x0897,	// (0x00037268) bg_popup_call_pane_cp02

0x08a1,	// (0x00037272) call_type_pane_cp023

0x08a9,	// (0x0003727a) popup_call_audio_wait_window_g1

0x08b1,	// (0x00037282) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00045a1d) popup_call_audio_wait_window_g

0x08b9,	// (0x0003728a) popup_call_audio_wait_window_t3

0x08c7,	// (0x00037298) bg_popup_call_pane_cp03_ParamLimits

0x08c7,	// (0x00037298) bg_popup_call_pane_cp03

0x0927,	// (0x000372f8) call_thumbnail_pane_cp011_ParamLimits

0x0927,	// (0x000372f8) call_thumbnail_pane_cp011

0x0933,	// (0x00037304) call_type_pane_cp034_ParamLimits

0x0933,	// (0x00037304) call_type_pane_cp034

0x096f,	// (0x00037340) popup_call_audio_second_window_g1_ParamLimits

0x096f,	// (0x00037340) popup_call_audio_second_window_g1

0x09ab,	// (0x0003737c) popup_call_audio_second_window_g2_ParamLimits

0x09ab,	// (0x0003737c) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00045a22) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00045a22) popup_call_audio_second_window_g

0x09e7,	// (0x000373b8) popup_call_audio_second_window_t1_ParamLimits

0x09e7,	// (0x000373b8) popup_call_audio_second_window_t1

0x0a68,	// (0x00037439) popup_call_audio_second_window_t2_ParamLimits

0x0a68,	// (0x00037439) popup_call_audio_second_window_t2

0x0a9e,	// (0x0003746f) popup_call_audio_second_window_t3_ParamLimits

0x0a9e,	// (0x0003746f) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00045a27) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00045a27) popup_call_audio_second_window_t

0x0897,	// (0x00037268) bg_popup_call_pane_cp04

0x0ad4,	// (0x000374a5) list_conf_pane

0x0adc,	// (0x000374ad) popup_call_audio_conf_window_t1

0x0aea,	// (0x000374bb) call_thumbnail_pane_g1

0x0af2,	// (0x000374c3) bg_pinb_pane_ParamLimits

0x0af2,	// (0x000374c3) bg_pinb_pane

0x0b00,	// (0x000374d1) find_pinb_pane

0x0af2,	// (0x000374c3) listscroll_pinb_pane_ParamLimits

0x0af2,	// (0x000374c3) listscroll_pinb_pane

0x0b0a,	// (0x000374db) pinb_bg_pane_g1

0x0b0a,	// (0x000374db) pinb_bg_pane_g2

0x0b0a,	// (0x000374db) pinb_bg_pane_g3

0x0b0a,	// (0x000374db) pinb_bg_pane_g4

0x0b0a,	// (0x000374db) pinb_bg_pane_g5

0x0b0a,	// (0x000374db) pinb_bg_pane_g6

0x0b0a,	// (0x000374db) pinb_bg_pane_g7

0x0b0a,	// (0x000374db) pinb_bg_pane_g8

0x0b0a,	// (0x000374db) pinb_bg_pane_g9

0x0b0a,	// (0x000374db) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00045a2e) pinb_bg_pane_g

0xee90,	// (0x00045861) grid_pinb_pane

0xee90,	// (0x00045861) list_pinb_pane

0x0b14,	// (0x000374e5) scroll_pane_cp01_ParamLimits

0x0b14,	// (0x000374e5) scroll_pane_cp01

0x0b22,	// (0x000374f3) find_pinb_pane_g1_ParamLimits

0x0b22,	// (0x000374f3) find_pinb_pane_g1

0x0b3a,	// (0x0003750b) find_pinb_pane_t1

0x0b4c,	// (0x0003751d) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00045a48) find_pinb_pane_t

0x0b61,	// (0x00037532) input_focus_pane_cp01_ParamLimits

0x0b61,	// (0x00037532) input_focus_pane_cp01

0x0b6d,	// (0x0003753e) cell_pinb_pane_ParamLimits

0x0b6d,	// (0x0003753e) cell_pinb_pane

0x0b7b,	// (0x0003754c) cell_pinb_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) cell_pinb_pane_g1

0x0b89,	// (0x0003755a) cell_pinb_pane_g2_ParamLimits

0x0b89,	// (0x0003755a) cell_pinb_pane_g2

0x0b89,	// (0x0003755a) cell_pinb_pane_g3_ParamLimits

0x0b89,	// (0x0003755a) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00045a4d) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00045a4d) cell_pinb_pane_g

0x0897,	// (0x00037268) grid_highlight_pane_cp01

0x0b6d,	// (0x0003753e) list_pinb_item_pane_ParamLimits

0x0b6d,	// (0x0003753e) list_pinb_item_pane

0xee90,	// (0x00045861) list_highlight_pane_cp02

0x0b97,	// (0x00037568) list_pinb_item_pane_g1_ParamLimits

0x0b97,	// (0x00037568) list_pinb_item_pane_g1

0x0b89,	// (0x0003755a) list_pinb_item_pane_g2_ParamLimits

0x0b89,	// (0x0003755a) list_pinb_item_pane_g2

0x0b7b,	// (0x0003754c) list_pinb_item_pane_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_pinb_item_pane_g3

0x0b89,	// (0x0003755a) list_pinb_item_pane_g4_ParamLimits

0x0b89,	// (0x0003755a) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00045a54) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00045a54) list_pinb_item_pane_g

0x0ba5,	// (0x00037576) list_pinb_item_pane_t1_ParamLimits

0x0ba5,	// (0x00037576) list_pinb_item_pane_t1

0x50df,	// (0x0003bab0) calc_display_pane

0x50fd,	// (0x0003bace) calc_paper_pane

0x5119,	// (0x0003baea) grid_calc_pane

0xee90,	// (0x00045861) bg_list_pane_cp01

0x0bb9,	// (0x0003758a) clock_g1

0x0bb9,	// (0x0003758a) clock_g2

0x0001,

0xf08c,	// (0x00045a5d) clock_g

0x0bc3,	// (0x00037594) clock_t1_ParamLimits

0x0bc3,	// (0x00037594) clock_t1

0x0bd7,	// (0x000375a8) clock_t2_ParamLimits

0x0bd7,	// (0x000375a8) clock_t2

0x0bd7,	// (0x000375a8) clock_t3_ParamLimits

0x0bd7,	// (0x000375a8) clock_t3

0x0bd7,	// (0x000375a8) clock_t4_ParamLimits

0x0bd7,	// (0x000375a8) clock_t4

0x0bc3,	// (0x00037594) clock_t5_ParamLimits

0x0bc3,	// (0x00037594) clock_t5

0x0bd7,	// (0x000375a8) clock_t6_ParamLimits

0x0bd7,	// (0x000375a8) clock_t6

0x0bd7,	// (0x000375a8) clock_t7_ParamLimits

0x0bd7,	// (0x000375a8) clock_t7

0x0bd7,	// (0x000375a8) clock_t8_ParamLimits

0x0bd7,	// (0x000375a8) clock_t8

0x0bd7,	// (0x000375a8) clock_t9_ParamLimits

0x0bd7,	// (0x000375a8) clock_t9

0x0008,

0xf091,	// (0x00045a62) clock_t_ParamLimits

0xf091,	// (0x00045a62) clock_t

0xee90,	// (0x00045861) popup_clock_analogue_window_cp02

0xee90,	// (0x00045861) popup_clock_digital_window_cp01

0x0897,	// (0x00037268) listscroll_help_pane

0x0897,	// (0x00037268) phob_pre_status_pane

0x0beb,	// (0x000375bc) grid_qdial_pane

0x0af2,	// (0x000374c3) listscroll_mce_pane

0x0af2,	// (0x000374c3) bg_notes_pane

0x0bf5,	// (0x000375c6) list_notes_pane

0x5145,	// (0x0003bb16) scroll_pane_cp06

0x0c03,	// (0x000375d4) bg_calc_paper_pane

0x5154,	// (0x0003bb25) list_calc_pane

0x0c17,	// (0x000375e8) bg_calc_display_pane

0x516e,	// (0x0003bb3f) calc_display_pane_t1

0x5183,	// (0x0003bb54) calc_display_pane_t2

0x5198,	// (0x0003bb69) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00045a75) calc_display_pane_t

0x51aa,	// (0x0003bb7b) cell_calc_pane_ParamLimits

0x51aa,	// (0x0003bb7b) cell_calc_pane

0x0c23,	// (0x000375f4) bg_calc_paper_pane_g1

0x0c3b,	// (0x0003760c) bg_calc_paper_pane_g2

0x0c2f,	// (0x00037600) bg_calc_paper_pane_g3

0x0c53,	// (0x00037624) bg_calc_paper_pane_g4

0x0c47,	// (0x00037618) bg_calc_paper_pane_g5

0x51d9,	// (0x0003bbaa) bg_calc_paper_pane_g6

0x51ea,	// (0x0003bbbb) bg_calc_paper_pane_g7

0x51fb,	// (0x0003bbcc) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00045a7c) bg_calc_paper_pane_g

0x520c,	// (0x0003bbdd) calc_bg_paper_pane_g9

0x521d,	// (0x0003bbee) list_calc_item_pane_ParamLimits

0x521d,	// (0x0003bbee) list_calc_item_pane

0x0c5f,	// (0x00037630) list_calc_item_pane_g1

0x523e,	// (0x0003bc0f) list_calc_item_pane_t1_ParamLimits

0x523e,	// (0x0003bc0f) list_calc_item_pane_t1

0x5250,	// (0x0003bc21) list_calc_item_pane_t2_ParamLimits

0x5250,	// (0x0003bc21) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00045a8d) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00045a8d) list_calc_item_pane_t

0x0b0a,	// (0x000374db) cell_calc_pane_g1

0x0c6c,	// (0x0003763d) grid_highlight_pane_cp02

0xd0d2,	// (0x00043aa3) bg_calc_display_pane_g1

0x5280,	// (0x0003bc51) bg_calc_display_pane_g2

0xd0db,	// (0x00043aac) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00045a97) bg_calc_display_pane_g

0x528a,	// (0x0003bc5b) cell_qdial_pane_ParamLimits

0x528a,	// (0x0003bc5b) cell_qdial_pane

0x52a0,	// (0x0003bc71) cell_qdial_pane_g1_ParamLimits

0x52a0,	// (0x0003bc71) cell_qdial_pane_g1

0x52ad,	// (0x0003bc7e) cell_qdial_pane_g2_ParamLimits

0x52ad,	// (0x0003bc7e) cell_qdial_pane_g2

0x0c97,	// (0x00037668) cell_qdial_pane_g3_ParamLimits

0x0c97,	// (0x00037668) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00045a9e) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00045a9e) cell_qdial_pane_g

0x52cb,	// (0x0003bc9c) cell_qdial_pane_t1_ParamLimits

0x52cb,	// (0x0003bc9c) cell_qdial_pane_t1

0x52e3,	// (0x0003bcb4) cell_qdial_pane_t2_ParamLimits

0x52e3,	// (0x0003bcb4) cell_qdial_pane_t2

0x52f6,	// (0x0003bcc7) cell_qdial_pane_t3_ParamLimits

0x52f6,	// (0x0003bcc7) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00045aa7) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00045aa7) cell_qdial_pane_t

0x0897,	// (0x00037268) grid_highlight_pane_cp04

0x0ca3,	// (0x00037674) thumbnail_qdial_pane_ParamLimits

0x0ca3,	// (0x00037674) thumbnail_qdial_pane

0x0cff,	// (0x000376d0) list_help_pane

0x0d08,	// (0x000376d9) scroll_pane_cp02

0x5309,	// (0x0003bcda) help_list_pane_t1_ParamLimits

0x5309,	// (0x0003bcda) help_list_pane_t1

0x0d19,	// (0x000376ea) bg_notes_pane_g2

0x0d11,	// (0x000376e2) bg_notes_pane_g3

0x0d21,	// (0x000376f2) notes_bg_pane_g1

0x0d31,	// (0x00037702) notes_bg_pane_g4

0x0d29,	// (0x000376fa) notes_bg_pane_g5

0x0d39,	// (0x0003770a) notes_bg_pane_g6

0x0d41,	// (0x00037712) notes_bg_pane_g7

0x0d51,	// (0x00037722) notes_bg_pane_g8

0x0d49,	// (0x0003771a) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00045ac5) notes_bg_pane_g

0x5330,	// (0x0003bd01) list_notes_text_pane_ParamLimits

0x5330,	// (0x0003bd01) list_notes_text_pane

0x0d59,	// (0x0003772a) list_notes_text_pane_g1

0x43c3,	// (0x0003ad94) list_notes_text_pane_t1

0x535e,	// (0x0003bd2f) listscroll_cale_week_pane

0x538a,	// (0x0003bd5b) bg_cale_heading_pane

0x53b3,	// (0x0003bd84) bg_cale_pane_cp01

0x53d5,	// (0x0003bda6) cale_week_corner_pane

0x53f4,	// (0x0003bdc5) cale_week_day_heading_pane

0x5422,	// (0x0003bdf3) cale_week_scroll_pane_g1

0x5446,	// (0x0003be17) cale_week_scroll_pane_g2

0x545e,	// (0x0003be2f) cale_week_scroll_pane_g3

0x5476,	// (0x0003be47) cale_week_scroll_pane_g4

0x548e,	// (0x0003be5f) cale_week_scroll_pane_g5

0x54a6,	// (0x0003be77) cale_week_scroll_pane_g6

0x54c6,	// (0x0003be97) cale_week_scroll_pane_g7

0x54e6,	// (0x0003beb7) cale_week_scroll_pane_g8

0x5506,	// (0x0003bed7) cale_week_scroll_pane_g9

0x5523,	// (0x0003bef4) cale_week_scroll_pane_g10

0x5540,	// (0x0003bf11) cale_week_scroll_pane_g11

0x555f,	// (0x0003bf30) cale_week_scroll_pane_g12

0x5584,	// (0x0003bf55) cale_week_scroll_pane_g13

0x55ad,	// (0x0003bf7e) cale_week_scroll_pane_g14

0x55d6,	// (0x0003bfa7) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00045ad4) cale_week_scroll_pane_g

0x561f,	// (0x0003bff0) cale_week_time_pane

0x563f,	// (0x0003c010) grid_cale_week_pane

0x0d93,	// (0x00037764) scroll_pane_cp08

0x5670,	// (0x0003c041) cell_cale_week_pane_ParamLimits

0x5670,	// (0x0003c041) cell_cale_week_pane

0x5700,	// (0x0003c0d1) cale_week_day_heading_pane_t1

0x5728,	// (0x0003c0f9) cale_week_day_heading_pane_t2

0x5755,	// (0x0003c126) cale_week_day_heading_pane_t3

0x5782,	// (0x0003c153) cale_week_day_heading_pane_t4

0x57af,	// (0x0003c180) cale_week_day_heading_pane_t5

0x57dc,	// (0x0003c1ad) cale_week_day_heading_pane_t6

0x5809,	// (0x0003c1da) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00045af5) cale_week_day_heading_pane_t

0x0db0,	// (0x00037781) bg_cale_side_pane

0x5831,	// (0x0003c202) cale_week_time_pane_t1

0x5855,	// (0x0003c226) cale_week_time_pane_t2

0x5879,	// (0x0003c24a) cale_week_time_pane_t3

0x589d,	// (0x0003c26e) cale_week_time_pane_t4

0x58c1,	// (0x0003c292) cale_week_time_pane_t5

0x58e7,	// (0x0003c2b8) cale_week_time_pane_t6

0x590f,	// (0x0003c2e0) cale_week_time_pane_t7

0x593b,	// (0x0003c30c) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00045b04) cale_week_time_pane_t

0x596b,	// (0x0003c33c) cell_cale_week_pane_g2

0x598f,	// (0x0003c360) cell_cale_week_pane_g3_ParamLimits

0x598f,	// (0x0003c360) cell_cale_week_pane_g3

0x0dbe,	// (0x0003778f) grid_highlight_pane_cp07

0x0dc6,	// (0x00037797) listscroll_gms_pane

0x0dd0,	// (0x000377a1) grid_gms_pane

0x0dd9,	// (0x000377aa) listscroll_gms_pane_g1

0x0de1,	// (0x000377b2) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00045b15) listscroll_gms_pane_g

0x59a7,	// (0x0003c378) scroll_pane_cp010

0x59b2,	// (0x0003c383) cell_gms_pane_ParamLimits

0x59b2,	// (0x0003c383) cell_gms_pane

0x59c5,	// (0x0003c396) cell_gms_pane_g1

0x0de9,	// (0x000377ba) cell_gms_pane_g2

0x0df1,	// (0x000377c2) cell_gms_pane_g3

0x0dfa,	// (0x000377cb) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00045b1a) cell_gms_pane_g

0x0e03,	// (0x000377d4) grid_highlight_pane_cp09

0x79b4,	// (0x0003e385) phob_pre_status_pane_g1

0x79bc,	// (0x0003e38d) phob_pre_status_pane_g2

0x79c4,	// (0x0003e395) phob_pre_status_pane_g3

0x79cc,	// (0x0003e39d) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x00045ec0) phob_pre_status_pane_g

0x79dc,	// (0x0003e3ad) phob_pre_status_pane_t1

0x79ec,	// (0x0003e3bd) phob_pre_status_pane_t2

0x79fc,	// (0x0003e3cd) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x00045ecb) phob_pre_status_pane_t

0x0e0b,	// (0x000377dc) bg_list_pane_cp05

0x59d5,	// (0x0003c3a6) grid_vorec_pane

0x59df,	// (0x0003c3b0) vorec_t1

0x59ed,	// (0x0003c3be) vorec_t2

0x59fb,	// (0x0003c3cc) vorec_t3

0x5a09,	// (0x0003c3da) vorec_t4

0xc37d,	// (0x00042d4e) vorec_t5

0xc38b,	// (0x00042d5c) vorec_t6

0x0004,

0xf152,	// (0x00045b23) vorec_t

0xc399,	// (0x00042d6a) wait_bar_pane_cp01

0x5a25,	// (0x0003c3f6) cell_vorec_pane_ParamLimits

0x5a25,	// (0x0003c3f6) cell_vorec_pane

0x5a3a,	// (0x0003c40b) cell_vorec_pane_g1

0x0897,	// (0x00037268) grid_highlight_pane_cp05

0x0b6d,	// (0x0003753e) cams_zoom_pane

0x0b6d,	// (0x0003753e) image_vga_pane

0x0b89,	// (0x0003755a) main_camera_pane_g1

0x0b89,	// (0x0003755a) main_camera_pane_g2

0x0b89,	// (0x0003755a) main_camera_pane_g3

0x0b89,	// (0x0003755a) main_camera_pane_g4

0x0b89,	// (0x0003755a) main_camera_pane_g5

0x0b89,	// (0x0003755a) main_camera_pane_g6

0x0b89,	// (0x0003755a) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00045b2e) main_camera_pane_g

0x0bd7,	// (0x000375a8) main_camera_pane_t1

0x0bd7,	// (0x000375a8) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00045b3f) main_camera_pane_t

0x5a44,	// (0x0003c415) cams_zoom_pane_cp_ParamLimits

0x5a44,	// (0x0003c415) cams_zoom_pane_cp

0x5a72,	// (0x0003c443) image_cif_pane_ParamLimits

0x5a72,	// (0x0003c443) image_cif_pane

0xee90,	// (0x00045861) image_subqcif_pane

0x5a80,	// (0x0003c451) main_video_pane_g1_ParamLimits

0x5a80,	// (0x0003c451) main_video_pane_g1

0x5aa8,	// (0x0003c479) main_video_pane_g2_ParamLimits

0x5aa8,	// (0x0003c479) main_video_pane_g2

0x5adb,	// (0x0003c4ac) main_video_pane_g3_ParamLimits

0x5adb,	// (0x0003c4ac) main_video_pane_g3

0x5adb,	// (0x0003c4ac) main_video_pane_g4_ParamLimits

0x5adb,	// (0x0003c4ac) main_video_pane_g4

0x5b09,	// (0x0003c4da) main_video_pane_g5_ParamLimits

0x5b09,	// (0x0003c4da) main_video_pane_g5

0x0e13,	// (0x000377e4) main_video_pane_g6_ParamLimits

0x0e13,	// (0x000377e4) main_video_pane_g6

0x0006,

0xf173,	// (0x00045b44) main_video_pane_g_ParamLimits

0xf173,	// (0x00045b44) main_video_pane_g

0x5b25,	// (0x0003c4f6) main_video_pane_t1_ParamLimits

0x5b25,	// (0x0003c4f6) main_video_pane_t1

0x0bb9,	// (0x0003758a) cams_zoom_pane_g1

0x0bb9,	// (0x0003758a) cams_zoom_pane_g2

0x0bb9,	// (0x0003758a) cams_zoom_pane_g3

0x0bb9,	// (0x0003758a) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00045b53) cams_zoom_pane_g

0x0b6d,	// (0x0003753e) grid_cams_pane

0x0b6d,	// (0x0003753e) linegrid_cams_pane

0x5b5f,	// (0x0003c530) cell_cams_pane_ParamLimits

0x5b5f,	// (0x0003c530) cell_cams_pane

0xee90,	// (0x00045861) cams_burst_image_pane

0x0bb9,	// (0x0003758a) cell_cams_pane_g1

0xee90,	// (0x00045861) grid_highlight_pane_cp03

0x0b0a,	// (0x000374db) mp_bg_pane_g1

0xee90,	// (0x00045861) bg_list_pane_cp03

0xee90,	// (0x00045861) bg_mp_pane

0xee90,	// (0x00045861) grid_mp_pane

0x0bb9,	// (0x0003758a) media_player_g1

0x1332,	// (0x00037d03) media_player_t1

0x1332,	// (0x00037d03) media_player_t2

0x1332,	// (0x00037d03) media_player_t3

0x1332,	// (0x00037d03) media_player_t4

0x1332,	// (0x00037d03) media_player_t5

0x1332,	// (0x00037d03) media_player_t6

0x1332,	// (0x00037d03) media_player_t7

0x0006,

0xf4d9,	// (0x00045eaa) media_player_t

0xee90,	// (0x00045861) wait_bar_pane_cp02

0xf4be,	// (0x00045e8f) main_usb_pane_t

0x159c,	// (0x00037f6d) cell_mp_pane

0x0b0a,	// (0x000374db) cell_mp_pane_g1

0x0897,	// (0x00037268) grid_highlight_pane_cp06

0x0e2d,	// (0x000377fe) grid_skin_colour_pane

0x0e35,	// (0x00037806) list_highlight_pane_cp03

0x5b74,	// (0x0003c545) skin_g1

0x0e3d,	// (0x0003780e) skin_t1

0x0e4c,	// (0x0003781d) skin_t2

0x0001,

0xf1b0,	// (0x00045b81) skin_t

0x5b7e,	// (0x0003c54f) cell_skin_colour_pane_ParamLimits

0x5b7e,	// (0x0003c54f) cell_skin_colour_pane

0x0e5a,	// (0x0003782b) cell_skin_colour_pane_g1

0x5bfe,	// (0x0003c5cf) call_video_g1_ParamLimits

0x5bfe,	// (0x0003c5cf) call_video_g1

0x5c0e,	// (0x0003c5df) call_video_g2_ParamLimits

0x5c0e,	// (0x0003c5df) call_video_g2

0x0001,

0xf1b5,	// (0x00045b86) call_video_g_ParamLimits

0xf1b5,	// (0x00045b86) call_video_g

0x5c5e,	// (0x0003c62f) call_video_uplink_pane_cp1_ParamLimits

0x5c5e,	// (0x0003c62f) call_video_uplink_pane_cp1

0x0e6c,	// (0x0003783d) call_video_uplink_pane_cp2

0x5d1a,	// (0x0003c6eb) video_down_crop_pane_ParamLimits

0x5d1a,	// (0x0003c6eb) video_down_crop_pane

0x5e0b,	// (0x0003c7dc) video_down_pane_ParamLimits

0x5e0b,	// (0x0003c7dc) video_down_pane

0x0e74,	// (0x00037845) video_down_subqcif_pane_ParamLimits

0x0e74,	// (0x00037845) video_down_subqcif_pane

0x0e8e,	// (0x0003785f) video_down_subqcif_pane_cp_ParamLimits

0x0e8e,	// (0x0003785f) video_down_subqcif_pane_cp

0x0eb4,	// (0x00037885) im_reading_pane_ParamLimits

0x0eb4,	// (0x00037885) im_reading_pane

0x5f28,	// (0x0003c8f9) im_writing_pane_ParamLimits

0x5f28,	// (0x0003c8f9) im_writing_pane

0x5f46,	// (0x0003c917) im_reading_pane_t1

0x0ece,	// (0x0003789f) list_im_pane

0x0edf,	// (0x000378b0) scroll_pane_cp07

0x5f88,	// (0x0003c959) im_writing_pane_t1_ParamLimits

0x5f88,	// (0x0003c959) im_writing_pane_t1

0x0ef8,	// (0x000378c9) im_writing_pane_t2_ParamLimits

0x0ef8,	// (0x000378c9) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00045b90) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00045b90) im_writing_pane_t

0x0897,	// (0x00037268) input_focus_pane_cp04

0x0897,	// (0x00037268) input_focus_pane_cp05

0x5f9a,	// (0x0003c96b) list_im_single_pane_ParamLimits

0x5f9a,	// (0x0003c96b) list_im_single_pane

0x0f15,	// (0x000378e6) list_single_im_pane_t1

0x0e0b,	// (0x000377dc) blid_accuracy_pane

0x0e0b,	// (0x000377dc) blid_compass_pane

0x2933,	// (0x00039304) main_location_t1

0x2933,	// (0x00039304) main_location_t2

0x2933,	// (0x00039304) main_location_t3

0x0002,

0xf4e8,	// (0x00045eb9) main_location_t

0x0897,	// (0x00037268) aid_levels_location

0x0b0a,	// (0x000374db) blid_accuracy_pane_g1

0x0b0a,	// (0x000374db) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x00045be4) blid_accuracy_pane_g

0x0f4f,	// (0x00037920) wml_content_pane

0x0f8d,	// (0x0003795e) wml_button_pane_ParamLimits

0x0f8d,	// (0x0003795e) wml_button_pane

0x5fb3,	// (0x0003c984) wml_list_single_large_pane_ParamLimits

0x5fb3,	// (0x0003c984) wml_list_single_large_pane

0x5fd5,	// (0x0003c9a6) wml_list_single_medium_pane_ParamLimits

0x5fd5,	// (0x0003c9a6) wml_list_single_medium_pane

0x5ff8,	// (0x0003c9c9) wml_list_single_small_pane_ParamLimits

0x5ff8,	// (0x0003c9c9) wml_list_single_small_pane

0x0fa1,	// (0x00037972) wml_selection_box_pane_ParamLimits

0x0fa1,	// (0x00037972) wml_selection_box_pane

0x0fb4,	// (0x00037985) wml_list_single_pane_t1

0x0fc3,	// (0x00037994) wml_list_single_medium_pane_t1

0x0fd2,	// (0x000379a3) wml_list_single_large_pane_t1

0x0fe1,	// (0x000379b2) input_focus_pane_cp02_ParamLimits

0x0fe1,	// (0x000379b2) input_focus_pane_cp02

0x0ff4,	// (0x000379c5) wml_selection_box_pane_g1

0x0ffd,	// (0x000379ce) wml_selection_box_pane_t1_ParamLimits

0x0ffd,	// (0x000379ce) wml_selection_box_pane_t1

0x0af2,	// (0x000374c3) bg_wml_button_pane_ParamLimits

0x0af2,	// (0x000374c3) bg_wml_button_pane

0x1015,	// (0x000379e6) wml_button_pane_g1

0x101d,	// (0x000379ee) wml_button_pane_t1

0x1015,	// (0x000379e6) wml_button_bg_pane_g1

0x102d,	// (0x000379fe) wml_button_bg_pane_g2

0x1035,	// (0x00037a06) wml_button_bg_pane_g3

0x103d,	// (0x00037a0e) wml_button_bg_pane_g4

0x1045,	// (0x00037a16) wml_button_bg_pane_g5

0x104d,	// (0x00037a1e) wml_button_bg_pane_g6

0x1055,	// (0x00037a26) wml_button_bg_pane_g7

0x105d,	// (0x00037a2e) wml_button_bg_pane_g8

0x1065,	// (0x00037a36) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00045b95) wml_button_bg_pane_g

0x6020,	// (0x0003c9f1) bg_list_pane_cp02

0x106d,	// (0x00037a3e) mce_header_pane_ParamLimits

0x106d,	// (0x00037a3e) mce_header_pane

0x1083,	// (0x00037a54) mce_icon_pane

0x1083,	// (0x00037a54) mce_image_pane

0x108c,	// (0x00037a5d) mce_text_pane_ParamLimits

0x108c,	// (0x00037a5d) mce_text_pane

0x602a,	// (0x0003c9fb) scroll_pane_cp03

0x0f85,	// (0x00037956) scroll_pane_cp04

0x109f,	// (0x00037a70) scroll_pane_cp05_ParamLimits

0x109f,	// (0x00037a70) scroll_pane_cp05

0x6034,	// (0x0003ca05) mce_header_field_pane_ParamLimits

0x6034,	// (0x0003ca05) mce_header_field_pane

0x6056,	// (0x0003ca27) mce_header_field_pane_2_ParamLimits

0x6056,	// (0x0003ca27) mce_header_field_pane_2

0x606c,	// (0x0003ca3d) mce_header_field_pane_3

0x6074,	// (0x0003ca45) list_single_mce_message_pane_ParamLimits

0x6074,	// (0x0003ca45) list_single_mce_message_pane

0x6093,	// (0x0003ca64) list_single_mce_smart_pane_ParamLimits

0x6093,	// (0x0003ca64) list_single_mce_smart_pane

0x10ab,	// (0x00037a7c) input_focus_pane_cp03

0x10b4,	// (0x00037a85) list_header_data_pane

0x60bd,	// (0x0003ca8e) mce_header_field_pane_t1

0x60cd,	// (0x0003ca9e) list_single_mce_header_pane_ParamLimits

0x60cd,	// (0x0003ca9e) list_single_mce_header_pane

0x10bc,	// (0x00037a8d) list_single_mce_header_pane_t1

0x10cb,	// (0x00037a9c) list_single_mce_message_pane_g1

0x10d3,	// (0x00037aa4) list_single_mce_message_pane_t1

0x6111,	// (0x0003cae2) bg_cale_heading_pane_cp01_ParamLimits

0x6111,	// (0x0003cae2) bg_cale_heading_pane_cp01

0x10e1,	// (0x00037ab2) bg_cale_pane_cp02_ParamLimits

0x10e1,	// (0x00037ab2) bg_cale_pane_cp02

0x6163,	// (0x0003cb34) cale_month_corner_pane

0x6182,	// (0x0003cb53) cale_month_day_heading_pane_ParamLimits

0x6182,	// (0x0003cb53) cale_month_day_heading_pane

0x61e4,	// (0x0003cbb5) cale_month_pane_g1_ParamLimits

0x61e4,	// (0x0003cbb5) cale_month_pane_g1

0x622b,	// (0x0003cbfc) cale_month_pane_g2_ParamLimits

0x622b,	// (0x0003cbfc) cale_month_pane_g2

0x6263,	// (0x0003cc34) cale_month_pane_g3_ParamLimits

0x6263,	// (0x0003cc34) cale_month_pane_g3

0x62b7,	// (0x0003cc88) cale_month_pane_g4_ParamLimits

0x62b7,	// (0x0003cc88) cale_month_pane_g4

0x630b,	// (0x0003ccdc) cale_month_pane_g5_ParamLimits

0x630b,	// (0x0003ccdc) cale_month_pane_g5

0x635f,	// (0x0003cd30) cale_month_pane_g6_ParamLimits

0x635f,	// (0x0003cd30) cale_month_pane_g6

0x63c3,	// (0x0003cd94) cale_month_pane_g7_ParamLimits

0x63c3,	// (0x0003cd94) cale_month_pane_g7

0x6427,	// (0x0003cdf8) cale_month_pane_g8_ParamLimits

0x6427,	// (0x0003cdf8) cale_month_pane_g8

0x648b,	// (0x0003ce5c) cale_month_pane_g9_ParamLimits

0x648b,	// (0x0003ce5c) cale_month_pane_g9

0x64e5,	// (0x0003ceb6) cale_month_pane_g10_ParamLimits

0x64e5,	// (0x0003ceb6) cale_month_pane_g10

0x6537,	// (0x0003cf08) cale_month_pane_g11_ParamLimits

0x6537,	// (0x0003cf08) cale_month_pane_g11

0x6585,	// (0x0003cf56) cale_month_pane_g12_ParamLimits

0x6585,	// (0x0003cf56) cale_month_pane_g12

0x65d5,	// (0x0003cfa6) cale_month_pane_g13_ParamLimits

0x65d5,	// (0x0003cfa6) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00045ba8) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00045ba8) cale_month_pane_g

0x6625,	// (0x0003cff6) cale_month_week_pane

0x6645,	// (0x0003d016) grid_cale_month_pane_ParamLimits

0x6645,	// (0x0003d016) grid_cale_month_pane

0x669e,	// (0x0003d06f) cale_month_day_heading_pane_t1

0x6720,	// (0x0003d0f1) cale_month_day_heading_pane_t2

0x6799,	// (0x0003d16a) cale_month_day_heading_pane_t3

0x6812,	// (0x0003d1e3) cale_month_day_heading_pane_t4

0x688b,	// (0x0003d25c) cale_month_day_heading_pane_t5

0x690c,	// (0x0003d2dd) cale_month_day_heading_pane_t6

0x6995,	// (0x0003d366) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00045bc3) cale_month_day_heading_pane_t

0x0db0,	// (0x00037781) bg_cale_side_pane_cp01

0x6a1e,	// (0x0003d3ef) cale_month_week_pane_t1

0x6a37,	// (0x0003d408) cale_month_week_pane_t2

0x6a50,	// (0x0003d421) cale_month_week_pane_t3

0x6a69,	// (0x0003d43a) cale_month_week_pane_t4

0x6a82,	// (0x0003d453) cale_month_week_pane_t5

0x6a9f,	// (0x0003d470) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00045bd2) cale_month_week_pane_t

0x6ac2,	// (0x0003d493) cell_cale_month_pane_ParamLimits

0x6ac2,	// (0x0003d493) cell_cale_month_pane

0x6bf0,	// (0x0003d5c1) cell_cale_month_pane_g1

0x6bfc,	// (0x0003d5cd) cell_cale_month_pane_t1_ParamLimits

0x6bfc,	// (0x0003d5cd) cell_cale_month_pane_t1

0x0dbe,	// (0x0003778f) grid_highlight_pane_cp08

0x0b0a,	// (0x000374db) main_smil_g1

0x6c28,	// (0x0003d5f9) smil_status_pane

0x1120,	// (0x00037af1) smil_text_pane

0x0d51,	// (0x00037722) bg_popup_call3_rect_pane_g8

0x0d49,	// (0x0003771a) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x00045be9) bg_popup_call3_rect_pane_g

0x2a0f,	// (0x000393e0) smil_status_volume_pane_g1

0x112a,	// (0x00037afb) smil_status_pane_t1

0x7d71,	// (0x0003e742) volume_smil_pane

0x1141,	// (0x00037b12) list_smil_text_pane

0x6c3b,	// (0x0003d60c) scroll_pane_cp011

0x6c46,	// (0x0003d617) smil_text_list_pane_t1_ParamLimits

0x6c46,	// (0x0003d617) smil_text_list_pane_t1

0x6c9a,	// (0x0003d66b) aid_volume_smil_ParamLimits

0x6c9a,	// (0x0003d66b) aid_volume_smil

0x0b0a,	// (0x000374db) smil_volume_pane_g1

0x0b0a,	// (0x000374db) smil_volume_pane_g2

0x0001,

0xf213,	// (0x00045be4) smil_volume_pane_g

0x535e,	// (0x0003bd2f) listscroll_cale_day_pane

0x1154,	// (0x00037b25) bg_cale_pane

0x116c,	// (0x00037b3d) list_cale_pane

0x118f,	// (0x00037b60) scroll_pane_cp09

0x0d21,	// (0x000376f2) cale_bg_pane_g1

0x0d19,	// (0x000376ea) cale_bg_pane_g2

0x0d11,	// (0x000376e2) cale_bg_pane_g3

0x0d31,	// (0x00037702) cale_bg_pane_g4

0x0d29,	// (0x000376fa) cale_bg_pane_g5

0x0d39,	// (0x0003770a) cale_bg_pane_g6

0x0d41,	// (0x00037712) cale_bg_pane_g7

0x0d51,	// (0x00037722) cale_bg_pane_g8

0x0d49,	// (0x0003771a) cale_bg_pane_g9

0x0008,

0xf218,	// (0x00045be9) cale_bg_pane_g

0x11a0,	// (0x00037b71) list_cale_time_pane_ParamLimits

0x11a0,	// (0x00037b71) list_cale_time_pane

0x11b7,	// (0x00037b88) list_cale_time_pane_g1_ParamLimits

0x11b7,	// (0x00037b88) list_cale_time_pane_g1

0x11c3,	// (0x00037b94) list_cale_time_pane_g2_ParamLimits

0x11c3,	// (0x00037b94) list_cale_time_pane_g2

0x6cc4,	// (0x0003d695) list_cale_time_pane_g3_ParamLimits

0x6cc4,	// (0x0003d695) list_cale_time_pane_g3

0x6cd2,	// (0x0003d6a3) list_cale_time_pane_g4_ParamLimits

0x6cd2,	// (0x0003d6a3) list_cale_time_pane_g4

0x6ce0,	// (0x0003d6b1) list_cale_time_pane_g5_ParamLimits

0x6ce0,	// (0x0003d6b1) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x00045bfc) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x00045bfc) list_cale_time_pane_g

0x11dd,	// (0x00037bae) list_cale_time_pane_t1_ParamLimits

0x11dd,	// (0x00037bae) list_cale_time_pane_t1

0x1205,	// (0x00037bd6) list_cale_time_pane_t2_ParamLimits

0x1205,	// (0x00037bd6) list_cale_time_pane_t2

0x6fb2,	// (0x0003d983) aid_blid_cardinal_pane

0x6ff4,	// (0x0003d9c5) compass_pane_t4

0x122d,	// (0x00037bfe) list_cale_time_pane_t4_ParamLimits

0x122d,	// (0x00037bfe) list_cale_time_pane_t4

0x7002,	// (0x0003d9d3) compass_pane_t5

0x7012,	// (0x0003d9e3) compass_pane_t6

0x7020,	// (0x0003d9f1) compass_pane_t7

0x164c,	// (0x0003801d) navi_pane_cc_t1

0x1799,	// (0x0003816a) aid_phob_thumbnail_center_pane

0x74e9,	// (0x0003deba) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x00045c09) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x00045c09) list_cale_time_pane_t

0xef39,	// (0x0004590a) bg_popup_window_pane_cp02_ParamLimits

0xef39,	// (0x0004590a) bg_popup_window_pane_cp02

0x1255,	// (0x00037c26) heading_pane_cp01_ParamLimits

0x1255,	// (0x00037c26) heading_pane_cp01

0x1261,	// (0x00037c32) loc_req_pane_ParamLimits

0x1261,	// (0x00037c32) loc_req_pane

0x1273,	// (0x00037c44) loc_type_pane_ParamLimits

0x1273,	// (0x00037c44) loc_type_pane

0x1285,	// (0x00037c56) loc_type_pane_t1_ParamLimits

0x1285,	// (0x00037c56) loc_type_pane_t1

0x1297,	// (0x00037c68) loc_type_pane_t2_ParamLimits

0x1297,	// (0x00037c68) loc_type_pane_t2

0x12a9,	// (0x00037c7a) loc_type_pane_t3_ParamLimits

0x12a9,	// (0x00037c7a) loc_type_pane_t3

0x0002,

0xf23f,	// (0x00045c10) loc_type_pane_t_ParamLimits

0xf23f,	// (0x00045c10) loc_type_pane_t

0x12bb,	// (0x00037c8c) list_loc_req_pane

0x12c5,	// (0x00037c96) scroll_pane_cp012

0x6cee,	// (0x0003d6bf) list_single_loc_request_popup_menu_pane_ParamLimits

0x6cee,	// (0x0003d6bf) list_single_loc_request_popup_menu_pane

0x12d0,	// (0x00037ca1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x12d0,	// (0x00037ca1) list_single_loc_request_popup_menu_pane_g1

0x12dc,	// (0x00037cad) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x12dc,	// (0x00037cad) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x00045c17) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x00045c17) list_single_loc_request_popup_menu_pane_g

0x12e8,	// (0x00037cb9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x12e8,	// (0x00037cb9) list_single_loc_request_popup_menu_pane_t1

0x6d00,	// (0x0003d6d1) bg_popup_window_pane_cp03_ParamLimits

0x6d00,	// (0x0003d6d1) bg_popup_window_pane_cp03

0x6d0e,	// (0x0003d6df) heading_loc_req_pane_ParamLimits

0x6d0e,	// (0x0003d6df) heading_loc_req_pane

0x6d1a,	// (0x0003d6eb) popup_dyc_status_message_window_g1_ParamLimits

0x6d1a,	// (0x0003d6eb) popup_dyc_status_message_window_g1

0x6d26,	// (0x0003d6f7) popup_dyc_status_message_window_t1_ParamLimits

0x6d26,	// (0x0003d6f7) popup_dyc_status_message_window_t1

0x6d38,	// (0x0003d709) popup_dyc_status_message_window_t2_ParamLimits

0x6d38,	// (0x0003d709) popup_dyc_status_message_window_t2

0x6d4a,	// (0x0003d71b) popup_dyc_status_message_window_t3_ParamLimits

0x6d4a,	// (0x0003d71b) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x00045c1c) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x00045c1c) popup_dyc_status_message_window_t

0x0897,	// (0x00037268) bg_heading_pane_cp01

0x130a,	// (0x00037cdb) heading_loc_req_pane_g1

0x1312,	// (0x00037ce3) heading_loc_req_pane_g2

0x131a,	// (0x00037ceb) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x00045c23) heading_loc_req_pane_g

0x1322,	// (0x00037cf3) heading_loc_req_pane_t1

0x1342,	// (0x00037d13) bg_popup_sub_pane_cp01_ParamLimits

0x1342,	// (0x00037d13) bg_popup_sub_pane_cp01

0x1350,	// (0x00037d21) popup_cale_events_window_g1_ParamLimits

0x1350,	// (0x00037d21) popup_cale_events_window_g1

0x1370,	// (0x00037d41) popup_cale_events_window_g2_ParamLimits

0x1370,	// (0x00037d41) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x00045c45) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x00045c45) popup_cale_events_window_g

0x1390,	// (0x00037d61) popup_cale_events_window_t1_ParamLimits

0x1390,	// (0x00037d61) popup_cale_events_window_t1

0x13a2,	// (0x00037d73) popup_cale_events_window_t2_ParamLimits

0x13a2,	// (0x00037d73) popup_cale_events_window_t2

0x13e0,	// (0x00037db1) popup_cale_events_window_t3_ParamLimits

0x13e0,	// (0x00037db1) popup_cale_events_window_t3

0x141a,	// (0x00037deb) popup_cale_events_window_t4_ParamLimits

0x141a,	// (0x00037deb) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x00045c4a) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x00045c4a) popup_cale_events_window_t

0x6d74,	// (0x0003d745) call_type_pane

0x20b6,	// (0x00038a87) popup_call_status_window_g1

0x6d80,	// (0x0003d751) popup_call_status_window_g2

0x6d8c,	// (0x0003d75d) popup_call_status_window_g3

0x0002,

0xf282,	// (0x00045c53) popup_call_status_window_g

0x1450,	// (0x00037e21) call_type_pane_g1

0x1459,	// (0x00037e2a) call_type_pane_g2

0x0001,

0xf289,	// (0x00045c5a) call_type_pane_g

0x0897,	// (0x00037268) bg_popup_sub_pane_cp02

0x1462,	// (0x00037e33) listscroll_popup_wml_pane

0x146a,	// (0x00037e3b) list_wml_pane

0x1474,	// (0x00037e45) scroll_pane_cp013

0x147f,	// (0x00037e50) list_single_graphic_popup_wml_pane_ParamLimits

0x147f,	// (0x00037e50) list_single_graphic_popup_wml_pane

0x0b0a,	// (0x000374db) list_single_graphic_popup_wml_pane_g1

0x1493,	// (0x00037e64) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x00045c5f) list_single_graphic_popup_wml_pane_g

0x149b,	// (0x00037e6c) list_single_graphic_popup_wml_pane_t1

0x14a9,	// (0x00037e7a) aid_call_pane

0x0aea,	// (0x000374bb) popup_clock_analogue_window_g1

0x0aea,	// (0x000374bb) popup_clock_analogue_window_g2

0x6d98,	// (0x0003d769) popup_clock_analogue_window_g3

0x6d98,	// (0x0003d769) popup_clock_analogue_window_g4

0x0b0a,	// (0x000374db) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x00045c64) popup_clock_analogue_window_g

0x6da0,	// (0x0003d771) popup_clock_analogue_window_t1

0x6dae,	// (0x0003d77f) clock_digital_number_pane_ParamLimits

0x6dae,	// (0x0003d77f) clock_digital_number_pane

0x6dba,	// (0x0003d78b) clock_digital_number_pane_cp02_ParamLimits

0x6dba,	// (0x0003d78b) clock_digital_number_pane_cp02

0x6dc6,	// (0x0003d797) clock_digital_number_pane_cp03_ParamLimits

0x6dc6,	// (0x0003d797) clock_digital_number_pane_cp03

0x6dd2,	// (0x0003d7a3) clock_digital_number_pane_cp04_ParamLimits

0x6dd2,	// (0x0003d7a3) clock_digital_number_pane_cp04

0x6dde,	// (0x0003d7af) clock_digital_separator_pane_ParamLimits

0x6dde,	// (0x0003d7af) clock_digital_separator_pane

0x6dea,	// (0x0003d7bb) popup_clock_digital_window_t1

0x0b0a,	// (0x000374db) clock_digital_number_pane_g1

0x0b0a,	// (0x000374db) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x00045be4) clock_digital_number_pane_g

0x0b0a,	// (0x000374db) clock_digital_separator_pane_g1

0x0b0a,	// (0x000374db) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x00045be4) clock_digital_separator_pane_g

0x0897,	// (0x00037268) bg_popup_window_pane_cp04

0x14b9,	// (0x00037e8a) heading_pane_cp03

0x0e0b,	// (0x000377dc) listscroll_popup_gms_pane

0x0897,	// (0x00037268) grid_large_graphic_popup_pane

0x14c1,	// (0x00037e92) listscroll_popup_gms_pane_g1

0x14ca,	// (0x00037e9b) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x00045c6f) listscroll_popup_gms_pane_g

0x14d3,	// (0x00037ea4) scroll_pane_cp014

0x0b6d,	// (0x0003753e) cell_large_graphic_popup_pane_ParamLimits

0x0b6d,	// (0x0003753e) cell_large_graphic_popup_pane

0x0b7b,	// (0x0003754c) cell_large_graphic_popup_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) cell_large_graphic_popup_pane_g1

0x14dc,	// (0x00037ead) cell_large_graphic_popup_pane_g2_ParamLimits

0x14dc,	// (0x00037ead) cell_large_graphic_popup_pane_g2

0x14ea,	// (0x00037ebb) cell_large_graphic_popup_pane_g3_ParamLimits

0x14ea,	// (0x00037ebb) cell_large_graphic_popup_pane_g3

0x14f8,	// (0x00037ec9) cell_large_graphic_popup_pane_g4_ParamLimits

0x14f8,	// (0x00037ec9) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x00045c74) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x00045c74) cell_large_graphic_popup_pane_g

0x0897,	// (0x00037268) grid_highlight_pane_cp010

0x0b0a,	// (0x000374db) bg_popup_call_pane_g1

0x1509,	// (0x00037eda) list_single_graphic_popup_conf_pane_ParamLimits

0x1509,	// (0x00037eda) list_single_graphic_popup_conf_pane

0x151b,	// (0x00037eec) list_highlight_pane_cp01

0x1524,	// (0x00037ef5) list_single_graphic_popup_conf_pane_g1

0x152c,	// (0x00037efd) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x00045c7d) list_single_graphic_popup_conf_pane_g

0x1534,	// (0x00037f05) list_single_graphic_popup_conf_pane_t1

0x1542,	// (0x00037f13) linegrid_cams_pane_g1

0x6e07,	// (0x0003d7d8) linegrid_cams_pane_g2

0x0df1,	// (0x000377c2) linegrid_cams_pane_g3

0x154b,	// (0x00037f1c) linegrid_cams_pane_g4

0x6e10,	// (0x0003d7e1) linegrid_cams_pane_g5

0x6e19,	// (0x0003d7ea) linegrid_cams_pane_g6

0x0dfa,	// (0x000377cb) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x00045c82) linegrid_cams_pane_g

0x1554,	// (0x00037f25) popup_clock_analogue_window

0x1554,	// (0x00037f25) popup_clock_digital_window

0x0897,	// (0x00037268) popup_phob_thumbnail_window

0x0b0a,	// (0x000374db) call_video_uplink_pane_g1

0x155d,	// (0x00037f2e) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x00045c91) call_video_uplink_pane_g

0x1565,	// (0x00037f36) video_uplink_pane

0x156d,	// (0x00037f3e) mce_image_pane_g1

0x6e24,	// (0x0003d7f5) mce_image_pane_g2

0x6e2e,	// (0x0003d7ff) mce_image_pane_g3

0x6e38,	// (0x0003d809) mce_image_pane_g4

0x6e40,	// (0x0003d811) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x00045c96) mce_image_pane_g

0x1577,	// (0x00037f48) control_top_pane_stacon_cp01_ParamLimits

0x1577,	// (0x00037f48) control_top_pane_stacon_cp01

0x158b,	// (0x00037f5c) uni_indicator_pane_stacon_cp01_ParamLimits

0x158b,	// (0x00037f5c) uni_indicator_pane_stacon_cp01

0x159c,	// (0x00037f6d) bg_popup_sub_pane_cp03

0x6e48,	// (0x0003d819) chi_dic_find_pane

0x6e50,	// (0x0003d821) listscroll_chi_dic_pane

0x6e59,	// (0x0003d82a) main_pane_chidic_g1

0x6e6c,	// (0x0003d83d) chi_dic_find_pane_t1

0x15a6,	// (0x00037f77) find_chidic_pane

0x15af,	// (0x00037f80) chi_dic_list_pane_ParamLimits

0x15af,	// (0x00037f80) chi_dic_list_pane

0x15c0,	// (0x00037f91) scroll_pane_cp020

0x6e7a,	// (0x0003d84b) find_chidic_pane_t1

0x0897,	// (0x00037268) input_focus_pane_cp06

0x6e89,	// (0x0003d85a) list_chi_dic_pane_ParamLimits

0x6e89,	// (0x0003d85a) list_chi_dic_pane

0x6e9e,	// (0x0003d86f) list_chi_dic_pane_t1_ParamLimits

0x6e9e,	// (0x0003d86f) list_chi_dic_pane_t1

0x0897,	// (0x00037268) list_highlight_pane_cp020

0x15c8,	// (0x00037f99) bg_cale_heading_pane_g1

0x6eb1,	// (0x0003d882) bg_cale_heading_pane_g2

0x6eb9,	// (0x0003d88a) bg_cale_heading_pane_g3

0x6ec1,	// (0x0003d892) bg_cale_heading_pane_g4

0x6ecb,	// (0x0003d89c) bg_cale_heading_pane_g5

0x6ed5,	// (0x0003d8a6) bg_cale_heading_pane_g6

0x6edd,	// (0x0003d8ae) bg_cale_heading_pane_g7

0x6ee5,	// (0x0003d8b6) bg_cale_heading_pane_g8

0x6eef,	// (0x0003d8c0) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x00045ca1) bg_cale_heading_pane_g

0x15c8,	// (0x00037f99) bg_cale_side_pane_g1

0x6ef9,	// (0x0003d8ca) bg_cale_side_pane_g2

0x6f03,	// (0x0003d8d4) bg_cale_side_pane_g3

0x6f0d,	// (0x0003d8de) bg_cale_side_pane_g4

0x6f17,	// (0x0003d8e8) bg_cale_side_pane_g5

0x6f21,	// (0x0003d8f2) bg_cale_side_pane_g6

0x6f2b,	// (0x0003d8fc) bg_cale_side_pane_g7

0x6f35,	// (0x0003d906) bg_cale_side_pane_g8

0x6f3d,	// (0x0003d90e) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x00045cb4) bg_cale_side_pane_g

0x6f45,	// (0x0003d916) popup_call_status_window_ParamLimits

0x6f45,	// (0x0003d916) popup_call_status_window

0x15d0,	// (0x00037fa1) stacon_top_pane

0x15d8,	// (0x00037fa9) status_pane_ParamLimits

0x15d8,	// (0x00037fa9) status_pane

0x15ed,	// (0x00037fbe) status_small_pane

0x15f5,	// (0x00037fc6) control_pane

0x0897,	// (0x00037268) stacon_bottom_pane

0x15fd,	// (0x00037fce) list_single_mce_smart_pane_t1_ParamLimits

0x15fd,	// (0x00037fce) list_single_mce_smart_pane_t1

0x1610,	// (0x00037fe1) list_single_mce_smart_pane_t2_ParamLimits

0x1610,	// (0x00037fe1) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x00045cc7) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x00045cc7) list_single_mce_smart_pane_t

0x6f51,	// (0x0003d922) compass_pane

0x6f5c,	// (0x0003d92d) main_location2_pane_t1

0x6f72,	// (0x0003d943) main_location2_pane_t2

0x6f88,	// (0x0003d959) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x00045ccc) main_location2_pane_t

0x162f,	// (0x00038000) compass_pane_g1_ParamLimits

0x162f,	// (0x00038000) compass_pane_g1

0x6fd6,	// (0x0003d9a7) compass_pane_t1

0x6fe5,	// (0x0003d9b6) compass_pane_t2

0x0005,

0xf304,	// (0x00045cd5) compass_pane_t

0x7030,	// (0x0003da01) text_secondary_cp61

0x1643,	// (0x00038014) navi_pane_cams_g5

0x1666,	// (0x00038037) navi_pane_im_t1

0x1674,	// (0x00038045) navi_pane_mp_g1_ParamLimits

0x1674,	// (0x00038045) navi_pane_mp_g1

0x1688,	// (0x00038059) navi_pane_mp_g2_ParamLimits

0x1688,	// (0x00038059) navi_pane_mp_g2

0x1694,	// (0x00038065) navi_pane_mp_g3_ParamLimits

0x1694,	// (0x00038065) navi_pane_mp_g3

0x0002,

0xf318,	// (0x00045ce9) navi_pane_mp_g_ParamLimits

0xf318,	// (0x00045ce9) navi_pane_mp_g

0x16a0,	// (0x00038071) navi_pane_mp_t1

0x16ae,	// (0x0003807f) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x00045cf0) navi_pane_mp_t

0x16ea,	// (0x000380bb) navi_pane_vt_g1

0x16a0,	// (0x00038071) navi_pane_vt_t1

0x16f2,	// (0x000380c3) navi_slider_pane

0x0e0b,	// (0x000377dc) zooming_pane

0x16fa,	// (0x000380cb) navi_slider_pane_g1

0x7165,	// (0x0003db36) navi_slider_pane_g2

0x0006,

0xf326,	// (0x00045cf7) navi_slider_pane_g

0x171e,	// (0x000380ef) aid_levels_zoom

0x1726,	// (0x000380f7) zooming_pane_g1

0x172e,	// (0x000380ff) zooming_pane_g2

0x172e,	// (0x000380ff) zooming_pane_g3

0x0002,

0xf335,	// (0x00045d06) zooming_pane_g

0x1736,	// (0x00038107) level_10_zoom

0x173f,	// (0x00038110) level_11_zoom

0x1748,	// (0x00038119) level_1_zoom

0x1751,	// (0x00038122) level_2_zoom

0x175a,	// (0x0003812b) level_3_zoom

0x1763,	// (0x00038134) level_4_zoom

0x176c,	// (0x0003813d) level_5_zoom

0x1775,	// (0x00038146) level_6_zoom

0x177e,	// (0x0003814f) level_7_zoom

0x1787,	// (0x00038158) level_8_zoom

0x1790,	// (0x00038161) level_9_zoom

0x17a1,	// (0x00038172) popup_phob_thumbnail_window_g1

0x17a9,	// (0x0003817a) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x00045d0d) popup_phob_thumbnail_window_g

0x7a0c,	// (0x0003e3dd) level_1_location

0x7a14,	// (0x0003e3e5) level_2_location

0x7a1c,	// (0x0003e3ed) level_3_location

0x7a26,	// (0x0003e3f7) level_4_location

0x0e0b,	// (0x000377dc) level_5_location

0x7177,	// (0x0003db48) mce_icon_pane_g1

0x717f,	// (0x0003db50) mce_icon_pane_g2

0x0001,

0xf341,	// (0x00045d12) mce_icon_pane_g

0x7187,	// (0x0003db58) main_mup_pane_g1_ParamLimits

0x7187,	// (0x0003db58) main_mup_pane_g1

0x0b97,	// (0x00037568) main_mup_pane_g2_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g2

0x0b97,	// (0x00037568) main_mup_pane_g3_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g3

0x0b97,	// (0x00037568) main_mup_pane_g4_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g4

0x0b97,	// (0x00037568) main_mup_pane_g5_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g5

0x0b97,	// (0x00037568) main_mup_pane_g6_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g6

0x0b97,	// (0x00037568) main_mup_pane_g7_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g7

0x0b97,	// (0x00037568) main_mup_pane_g8_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g8

0x0b97,	// (0x00037568) main_mup_pane_g9_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g9

0x0b97,	// (0x00037568) main_mup_pane_g10_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g10

0x0b97,	// (0x00037568) main_mup_pane_g11_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g11

0x0b89,	// (0x0003755a) main_mup_pane_g12_ParamLimits

0x0b89,	// (0x0003755a) main_mup_pane_g12

0x0b97,	// (0x00037568) main_mup_pane_g13_ParamLimits

0x0b97,	// (0x00037568) main_mup_pane_g13

0x000c,

0xf346,	// (0x00045d17) main_mup_pane_g_ParamLimits

0xf346,	// (0x00045d17) main_mup_pane_g

0x0ba5,	// (0x00037576) main_mup_pane_t1_ParamLimits

0x0ba5,	// (0x00037576) main_mup_pane_t1

0x0ba5,	// (0x00037576) main_mup_pane_t2_ParamLimits

0x0ba5,	// (0x00037576) main_mup_pane_t2

0x0ba5,	// (0x00037576) main_mup_pane_t3_ParamLimits

0x0ba5,	// (0x00037576) main_mup_pane_t3

0x0bd7,	// (0x000375a8) main_mup_pane_t4_ParamLimits

0x0bd7,	// (0x000375a8) main_mup_pane_t4

0x0bd7,	// (0x000375a8) main_mup_pane_t5_ParamLimits

0x0bd7,	// (0x000375a8) main_mup_pane_t5

0x0bc3,	// (0x00037594) main_mup_pane_t6_ParamLimits

0x0bc3,	// (0x00037594) main_mup_pane_t6

0x0005,

0xf361,	// (0x00045d32) main_mup_pane_t_ParamLimits

0xf361,	// (0x00045d32) main_mup_pane_t

0x0b14,	// (0x000374e5) mup_progress_pane_ParamLimits

0x0b14,	// (0x000374e5) mup_progress_pane

0x2b95,	// (0x00039566) mup_visualizer_pane_ParamLimits

0x2b95,	// (0x00039566) mup_visualizer_pane

0x2b95,	// (0x00039566) mup_volume_pane_ParamLimits

0x2b95,	// (0x00039566) mup_volume_pane

0x0b89,	// (0x0003755a) mup_visualizer_pane_g1_ParamLimits

0x0b89,	// (0x0003755a) mup_visualizer_pane_g1

0x17e1,	// (0x000381b2) mup_visualizer_pane_g2_ParamLimits

0x17e1,	// (0x000381b2) mup_visualizer_pane_g2

0x0b7b,	// (0x0003754c) mup_visualizer_pane_g3_ParamLimits

0x0b7b,	// (0x0003754c) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x00045d3f) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x00045d3f) mup_visualizer_pane_g

0x0bb9,	// (0x0003758a) mup_volume_pane_g1

0x0bb9,	// (0x0003758a) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00045a5d) mup_volume_pane_g

0x0bb9,	// (0x0003758a) mup_progress_pane_g1

0x0bb9,	// (0x0003758a) mup_progress_pane_g2

0x0bb9,	// (0x0003758a) mup_progress_pane_g3

0x0002,

0xf375,	// (0x00045d46) mup_progress_pane_g

0x0897,	// (0x00037268) bg_popup_window_pane_cp05

0x17ef,	// (0x000381c0) heading_pane_cp02_ParamLimits

0x17ef,	// (0x000381c0) heading_pane_cp02

0x180b,	// (0x000381dc) list_popup_blid_pane

0x1813,	// (0x000381e4) list_blid_sat_info_pane_ParamLimits

0x1813,	// (0x000381e4) list_blid_sat_info_pane

0x1826,	// (0x000381f7) list_blid_sat_info_pane_g1

0x182e,	// (0x000381ff) list_blid_sat_info_pane_t1

0x7296,	// (0x0003dc67) mup_equalizer_pane_ParamLimits

0x7296,	// (0x0003dc67) mup_equalizer_pane

0x72b7,	// (0x0003dc88) mup_equalizer_pane_cp1_ParamLimits

0x72b7,	// (0x0003dc88) mup_equalizer_pane_cp1

0x72d8,	// (0x0003dca9) mup_equalizer_pane_cp2_ParamLimits

0x72d8,	// (0x0003dca9) mup_equalizer_pane_cp2

0x72f9,	// (0x0003dcca) mup_equalizer_pane_cp3_ParamLimits

0x72f9,	// (0x0003dcca) mup_equalizer_pane_cp3

0x731e,	// (0x0003dcef) mup_equalizer_pane_cp4_ParamLimits

0x731e,	// (0x0003dcef) mup_equalizer_pane_cp4

0x7343,	// (0x0003dd14) mup_equalizer_pane_cp5

0x735b,	// (0x0003dd2c) mup_equalizer_pane_cp6

0x7373,	// (0x0003dd44) mup_equalizer_pane_cp7

0x28d1,	// (0x000392a2) bg_popup_call_poc_act_pane_g9

0x28d9,	// (0x000392aa) bg_popup_call_poc_act_pane_g10

0x28e1,	// (0x000392b2) bg_popup_call_poc_act_pane_g11

0x000a,

0x0af2,	// (0x000374c3) mup_scale_pane

0x0b0a,	// (0x000374db) mup_scale_pane_g1

0x183c,	// (0x0003820d) mup_scale_pane_g2

0x0006,

0xf391,	// (0x00045d62) mup_scale_pane_g

0x1860,	// (0x00038231) msg_data_pane

0x1868,	// (0x00038239) scroll_pane_cp017

0x43d1,	// (0x0003ada2) bg_list_pane_cp04_ParamLimits

0x43d1,	// (0x0003ada2) bg_list_pane_cp04

0x1870,	// (0x00038241) msg_data_pane_g1

0x739d,	// (0x0003dd6e) msg_data_pane_g2

0x73a7,	// (0x0003dd78) msg_data_pane_g3

0x73b1,	// (0x0003dd82) msg_data_pane_g4

0x73b9,	// (0x0003dd8a) msg_data_pane_g5

0x73c1,	// (0x0003dd92) msg_data_pane_g6

0x73c9,	// (0x0003dd9a) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00045d71) msg_data_pane_g

0x43f7,	// (0x0003adc8) msg_text_pane_ParamLimits

0x43f7,	// (0x0003adc8) msg_text_pane

0x73d1,	// (0x0003dda2) qrid_highlight_pane_cp011_ParamLimits

0x73d1,	// (0x0003dda2) qrid_highlight_pane_cp011

0x0897,	// (0x00037268) msg_body_pane

0x0af2,	// (0x000374c3) msg_header_pane

0x4430,	// (0x0003ae01) input_focus_pane_cp07

0x4453,	// (0x0003ae24) msg_header_pane_t1_ParamLimits

0x4453,	// (0x0003ae24) msg_header_pane_t1

0x446f,	// (0x0003ae40) msg_header_pane_t2_ParamLimits

0x446f,	// (0x0003ae40) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00045d85) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00045d85) msg_header_pane_t

0x18ad,	// (0x0003827e) msg_body_pane_g1

0x448f,	// (0x0003ae60) msg_body_pane_t1_ParamLimits

0x448f,	// (0x0003ae60) msg_body_pane_t1

0x44c0,	// (0x0003ae91) msg_body_pane_t2_ParamLimits

0x44c0,	// (0x0003ae91) msg_body_pane_t2

0x44d2,	// (0x0003aea3) msg_body_pane_t3_ParamLimits

0x44d2,	// (0x0003aea3) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x00045d8a) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x00045d8a) msg_body_pane_t

0x7439,	// (0x0003de0a) main_viewer_pane_g1_ParamLimits

0x7439,	// (0x0003de0a) main_viewer_pane_g1

0x7445,	// (0x0003de16) main_viewer_pane_g2_ParamLimits

0x7445,	// (0x0003de16) main_viewer_pane_g2

0x7451,	// (0x0003de22) main_viewer_pane_g3_ParamLimits

0x7451,	// (0x0003de22) main_viewer_pane_g3

0x7462,	// (0x0003de33) main_viewer_pane_g4_ParamLimits

0x7462,	// (0x0003de33) main_viewer_pane_g4

0x7473,	// (0x0003de44) main_viewer_pane_g5_ParamLimits

0x7473,	// (0x0003de44) main_viewer_pane_g5

0x7473,	// (0x0003de44) main_viewer_pane_g7_ParamLimits

0x7473,	// (0x0003de44) main_viewer_pane_g7

0x7485,	// (0x0003de56) main_viewer_pane_g8_ParamLimits

0x7485,	// (0x0003de56) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x00045d9a) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x00045d9a) main_viewer_pane_g

0x18b5,	// (0x00038286) viewer_content_pane_ParamLimits

0x18b5,	// (0x00038286) viewer_content_pane

0x74bd,	// (0x0003de8e) main_postcard_pane_g1_ParamLimits

0x74bd,	// (0x0003de8e) main_postcard_pane_g1

0x74cb,	// (0x0003de9c) main_postcard_pane_g2_ParamLimits

0x74cb,	// (0x0003de9c) main_postcard_pane_g2

0x74d9,	// (0x0003deaa) main_postcard_pane_g3_ParamLimits

0x74d9,	// (0x0003deaa) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x00045dab) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x00045dab) main_postcard_pane_g

0x74e9,	// (0x0003deba) main_postcard_pane_g4

0x29fc,	// (0x000393cd) smil_status_volume_pane_g2

0x7515,	// (0x0003dee6) postcard_pane_ParamLimits

0x7515,	// (0x0003dee6) postcard_pane

0x20b6,	// (0x00038a87) postcard_pane_g1_ParamLimits

0x20b6,	// (0x00038a87) postcard_pane_g1

0x754f,	// (0x0003df20) postcard_pane_g2_ParamLimits

0x754f,	// (0x0003df20) postcard_pane_g2

0x755b,	// (0x0003df2c) postcard_pane_g3_ParamLimits

0x755b,	// (0x0003df2c) postcard_pane_g3

0x18d1,	// (0x000382a2) postcard_pane_g4_ParamLimits

0x18d1,	// (0x000382a2) postcard_pane_g4

0x7567,	// (0x0003df38) postcard_pane_g5_ParamLimits

0x7567,	// (0x0003df38) postcard_pane_g5

0x7573,	// (0x0003df44) postcard_pane_g6_ParamLimits

0x7573,	// (0x0003df44) postcard_pane_g6

0x18c3,	// (0x00038294) postcard_pane_g7_ParamLimits

0x18c3,	// (0x00038294) postcard_pane_g7

0x0006,

0xf3e7,	// (0x00045db8) postcard_pane_g_ParamLimits

0xf3e7,	// (0x00045db8) postcard_pane_g

0x7581,	// (0x0003df52) main_mp2_pane_g1_ParamLimits

0x7581,	// (0x0003df52) main_mp2_pane_g1

0x758f,	// (0x0003df60) main_mp2_pane_g2_ParamLimits

0x758f,	// (0x0003df60) main_mp2_pane_g2

0x759b,	// (0x0003df6c) main_mp2_pane_g3_ParamLimits

0x759b,	// (0x0003df6c) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x00045dc7) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x00045dc7) main_mp2_pane_g

0x75a7,	// (0x0003df78) main_mp2_pane_t1_ParamLimits

0x75a7,	// (0x0003df78) main_mp2_pane_t1

0x75be,	// (0x0003df8f) main_mp2_pane_t2_ParamLimits

0x75be,	// (0x0003df8f) main_mp2_pane_t2

0x75d2,	// (0x0003dfa3) main_mp2_pane_t3_ParamLimits

0x75d2,	// (0x0003dfa3) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x00045dce) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x00045dce) main_mp2_pane_t

0x0b14,	// (0x000374e5) pec_content_pane_ParamLimits

0x0b14,	// (0x000374e5) pec_content_pane

0xee90,	// (0x00045861) scroll_pane_cp015

0x17d3,	// (0x000381a4) pec_attribute_pane_ParamLimits

0x17d3,	// (0x000381a4) pec_attribute_pane

0x0b7b,	// (0x0003754c) pec_content_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) pec_content_pane_g1

0x18df,	// (0x000382b0) pec_content_pane_t1_ParamLimits

0x18df,	// (0x000382b0) pec_content_pane_t1

0x18f3,	// (0x000382c4) pec_content_pane_t2_ParamLimits

0x18f3,	// (0x000382c4) pec_content_pane_t2

0x0001,

0xf404,	// (0x00045dd5) pec_content_pane_t_ParamLimits

0xf404,	// (0x00045dd5) pec_content_pane_t

0x0b6d,	// (0x0003753e) list_single_graphic_pane_cp01_ParamLimits

0x0b6d,	// (0x0003753e) list_single_graphic_pane_cp01

0x0af2,	// (0x000374c3) bg_popup_sub_pane_cp04

0x1907,	// (0x000382d8) popup_mup_playback_window_g1

0x1913,	// (0x000382e4) popup_mup_playback_window_t1

0x1928,	// (0x000382f9) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x00045dda) popup_mup_playback_window_t

0x195f,	// (0x00038330) main_image_pane_g1_ParamLimits

0x195f,	// (0x00038330) main_image_pane_g1

0x19a2,	// (0x00038373) scroll_pane_cp018_ParamLimits

0x19a2,	// (0x00038373) scroll_pane_cp018

0x19ba,	// (0x0003838b) scroll_pane_cp016_ParamLimits

0x19ba,	// (0x0003838b) scroll_pane_cp016

0x7655,	// (0x0003e026) smil2_image_pane_ParamLimits

0x7655,	// (0x0003e026) smil2_image_pane

0x768b,	// (0x0003e05c) smil2_root_pane_ParamLimits

0x768b,	// (0x0003e05c) smil2_root_pane

0x76b7,	// (0x0003e088) smil2_text_pane_ParamLimits

0x76b7,	// (0x0003e088) smil2_text_pane

0xee90,	// (0x00045861) bg_list_pane_cp06

0xee90,	// (0x00045861) grid_radio_pane

0x0897,	// (0x00037268) bg_popup_window_pane_cp06

0x1332,	// (0x00037d03) main_fmradio_pane_t1

0x14b9,	// (0x00037e8a) heading_pane_cp04

0x1332,	// (0x00037d03) main_fmradio_pane_t2

0x28e9,	// (0x000392ba) popup_cale_lunar_info_window_g1

0x1332,	// (0x00037d03) main_fmradio_pane_t3

0x28f1,	// (0x000392c2) popup_cale_lunar_info_window_g2

0x1332,	// (0x00037d03) main_fmradio_pane_t4

0x0001,

0x1332,	// (0x00037d03) main_fmradio_pane_t5

0x0004,

0xf4cb,	// (0x00045e9c) popup_cale_lunar_info_window_g

0xf269,	// (0x00045c3a) main_fmradio_pane_t

0xee90,	// (0x00045861) wait_bar_pane_cp03

0x0b6d,	// (0x0003753e) cell_fmradio_pane_ParamLimits

0x0b6d,	// (0x0003753e) cell_fmradio_pane

0x0b7b,	// (0x0003754c) cell_fmradio_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) cell_fmradio_pane_g1

0xee90,	// (0x00045861) grid_highlight_pane_cp011

0x19ee,	// (0x000383bf) poc_content_pane_ParamLimits

0x19ee,	// (0x000383bf) poc_content_pane

0x1a00,	// (0x000383d1) scroll_pane_cp019

0x76f7,	// (0x0003e0c8) popup_call_poc_act_window_ParamLimits

0x76f7,	// (0x0003e0c8) popup_call_poc_act_window

0x7704,	// (0x0003e0d5) popup_call_poc_inact_window_ParamLimits

0x7704,	// (0x0003e0d5) popup_call_poc_inact_window

0xf4a2,	// (0x00045e73) bg_popup_call_poc_act_pane_g

0x2861,	// (0x00039232) bg_popup_call_poc_inact_pane_g1

0x2869,	// (0x0003923a) bg_popup_call_poc_inact_pane_g2

0x1a08,	// (0x000383d9) popup_call_poc_act_window_g2

0x2871,	// (0x00039242) bg_popup_call_poc_inact_pane_g3

0x2879,	// (0x0003924a) bg_popup_call_poc_inact_pane_g4

0x2881,	// (0x00039252) bg_popup_call_poc_inact_pane_g5

0x1a10,	// (0x000383e1) popup_call_poc_act_window_t1_ParamLimits

0x1a10,	// (0x000383e1) popup_call_poc_act_window_t1

0x1a38,	// (0x00038409) popup_call_poc_act_window_t2_ParamLimits

0x1a38,	// (0x00038409) popup_call_poc_act_window_t2

0x1a60,	// (0x00038431) popup_call_poc_act_window_t3_ParamLimits

0x1a60,	// (0x00038431) popup_call_poc_act_window_t3

0x1a88,	// (0x00038459) popup_call_poc_act_window_t4_ParamLimits

0x1a88,	// (0x00038459) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x00045def) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x00045def) popup_call_poc_act_window_t

0x2889,	// (0x0003925a) bg_popup_call_poc_inact_pane_g6

0x2891,	// (0x00039262) bg_popup_call_poc_inact_pane_g7

0x2899,	// (0x0003926a) bg_popup_call_poc_inact_pane_g8

0x1a9a,	// (0x0003846b) popup_call_poc_inact_window_g2

0x28a1,	// (0x00039272) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48f,	// (0x00045e60) bg_popup_call_poc_inact_pane_g

0x1aa2,	// (0x00038473) popup_call_poc_inact_window_t1_ParamLimits

0x1aa2,	// (0x00038473) popup_call_poc_inact_window_t1

0x1ab7,	// (0x00038488) popup_call_poc_inact_window_t2_ParamLimits

0x1ab7,	// (0x00038488) popup_call_poc_inact_window_t2

0x1acc,	// (0x0003849d) popup_call_poc_inact_window_t3_ParamLimits

0x1acc,	// (0x0003849d) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x00045df8) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x00045df8) popup_call_poc_inact_window_t

0x2987,	// (0x00039358) context_pane_ParamLimits

0x7d29,	// (0x0003e6fa) signal_pane_ParamLimits

0x0e0b,	// (0x000377dc) main_call2_pane

0x7c95,	// (0x0003e666) popup_phob_thumbnail2_window_ParamLimits

0x7c95,	// (0x0003e666) popup_phob_thumbnail2_window

0x73e7,	// (0x0003ddb8) aid_hotspot_pointer_arrow_pane

0x73ef,	// (0x0003ddc0) aid_hotspot_pointer_hand_pane

0x79d4,	// (0x0003e3a5) phob_pre_status_pane_g5

0x0b6d,	// (0x0003753e) cams_zoom_pane_ParamLimits

0x0b6d,	// (0x0003753e) image_vga_pane_ParamLimits

0x0b89,	// (0x0003755a) main_camera_pane_g1_ParamLimits

0x0b89,	// (0x0003755a) main_camera_pane_g2_ParamLimits

0x0b89,	// (0x0003755a) main_camera_pane_g3_ParamLimits

0x0b89,	// (0x0003755a) main_camera_pane_g4_ParamLimits

0x0b89,	// (0x0003755a) main_camera_pane_g5_ParamLimits

0x0b89,	// (0x0003755a) main_camera_pane_g6_ParamLimits

0x0b89,	// (0x0003755a) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00045b2e) main_camera_pane_g_ParamLimits

0x0bd7,	// (0x000375a8) main_camera_pane_t1_ParamLimits

0x0bd7,	// (0x000375a8) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00045b3f) main_camera_pane_t_ParamLimits

0x0af2,	// (0x000374c3) bg_popup_preview_window_pane_cp01_ParamLimits

0x0af2,	// (0x000374c3) bg_popup_preview_window_pane_cp01

0x1ae1,	// (0x000384b2) popup_phob_thumbnail2_window_g1_ParamLimits

0x1ae1,	// (0x000384b2) popup_phob_thumbnail2_window_g1

0x0897,	// (0x00037268) call2_cli_visual_pane

0x7720,	// (0x0003e0f1) popup_call2_audio_conf_window_ParamLimits

0x7720,	// (0x0003e0f1) popup_call2_audio_conf_window

0x7739,	// (0x0003e10a) popup_call2_audio_first_window_ParamLimits

0x7739,	// (0x0003e10a) popup_call2_audio_first_window

0x77d7,	// (0x0003e1a8) popup_call2_audio_in_window_ParamLimits

0x77d7,	// (0x0003e1a8) popup_call2_audio_in_window

0x781b,	// (0x0003e1ec) popup_call2_audio_out_window_ParamLimits

0x781b,	// (0x0003e1ec) popup_call2_audio_out_window

0x7885,	// (0x0003e256) popup_call2_audio_second_window_ParamLimits

0x7885,	// (0x0003e256) popup_call2_audio_second_window

0x78e3,	// (0x0003e2b4) popup_call2_audio_wait_window_ParamLimits

0x78e3,	// (0x0003e2b4) popup_call2_audio_wait_window

0x0897,	// (0x00037268) bg_popup_call2_act_pane_cp03

0x0ad4,	// (0x000374a5) list_conf_pane_cp

0x1aed,	// (0x000384be) popup_call2_audio_conf_window_t1

0x1afb,	// (0x000384cc) list_single_graphic_popup_conf2_pane_ParamLimits

0x1afb,	// (0x000384cc) list_single_graphic_popup_conf2_pane

0x151b,	// (0x00037eec) list_highlight_pane_cp04

0x1b0e,	// (0x000384df) list_single_graphic_popup_conf2_pane_g1

0x152c,	// (0x00037efd) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x00045dff) list_single_graphic_popup_conf2_pane_g

0x1b18,	// (0x000384e9) list_single_graphic_popup_conf2_pane_t1

0x1b26,	// (0x000384f7) bg_popup_call2_act_pane_cp01_ParamLimits

0x1b26,	// (0x000384f7) bg_popup_call2_act_pane_cp01

0x1bb0,	// (0x00038581) call_type_pane_cp05_ParamLimits

0x1bb0,	// (0x00038581) call_type_pane_cp05

0x1c04,	// (0x000385d5) popup_call2_audio_second_window_g1_ParamLimits

0x1c04,	// (0x000385d5) popup_call2_audio_second_window_g1

0x1c58,	// (0x00038629) popup_call2_audio_second_window_g2_ParamLimits

0x1c58,	// (0x00038629) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x00045e04) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x00045e04) popup_call2_audio_second_window_g

0x1cbd,	// (0x0003868e) popup_call2_audio_second_window_t1_ParamLimits

0x1cbd,	// (0x0003868e) popup_call2_audio_second_window_t1

0x1d78,	// (0x00038749) popup_call2_audio_second_window_t2_ParamLimits

0x1d78,	// (0x00038749) popup_call2_audio_second_window_t2

0x1dcb,	// (0x0003879c) popup_call2_audio_second_window_t3_ParamLimits

0x1dcb,	// (0x0003879c) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x00045e0b) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x00045e0b) popup_call2_audio_second_window_t

0x0897,	// (0x00037268) bg_popup_call2_in_pane_cp02

0x08a1,	// (0x00037272) call_type_pane_cp04

0x7922,	// (0x0003e2f3) popup_call2_audio_wait_window_g1

0x792a,	// (0x0003e2fb) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x00045e14) popup_call2_audio_wait_window_g

0x08b9,	// (0x0003728a) popup_call2_audio_wait_window_t3

0x1ebe,	// (0x0003888f) bg_popup_call2_act_pane_ParamLimits

0x1ebe,	// (0x0003888f) bg_popup_call2_act_pane

0x1f7e,	// (0x0003894f) call_type_pane_cp03_ParamLimits

0x1f7e,	// (0x0003894f) call_type_pane_cp03

0x1fe2,	// (0x000389b3) popup_call2_audio_first_window_g1_ParamLimits

0x1fe2,	// (0x000389b3) popup_call2_audio_first_window_g1

0x2052,	// (0x00038a23) popup_call2_audio_first_window_g2_ParamLimits

0x2052,	// (0x00038a23) popup_call2_audio_first_window_g2

0x20b6,	// (0x00038a87) popup_call2_audio_first_window_g3_ParamLimits

0x20b6,	// (0x00038a87) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x00045e19) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x00045e19) popup_call2_audio_first_window_g

0x213e,	// (0x00038b0f) popup_call2_audio_first_window_t1_ParamLimits

0x213e,	// (0x00038b0f) popup_call2_audio_first_window_t1

0x2241,	// (0x00038c12) popup_call2_audio_first_window_t4_ParamLimits

0x2241,	// (0x00038c12) popup_call2_audio_first_window_t4

0x2324,	// (0x00038cf5) popup_call2_audio_first_window_t5_ParamLimits

0x2324,	// (0x00038cf5) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x00045e24) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x00045e24) popup_call2_audio_first_window_t

0x0aea,	// (0x000374bb) bg_popup_call2_act_pane_g1

0x28fb,	// (0x000392cc) popup_cale_lunar_info_window_t1

0x2909,	// (0x000392da) popup_cale_lunar_info_window_t2

0x2917,	// (0x000392e8) popup_cale_lunar_info_window_t3

0x0897,	// (0x00037268) bg_popup_call2_bubble_pane

0x2425,	// (0x00038df6) bg_popup_call2_in_pane_cp01_ParamLimits

0x2425,	// (0x00038df6) bg_popup_call2_in_pane_cp01

0xefbe,	// (0x0004598f) call_type_pane_cp02

0x7932,	// (0x0003e303) popup_call2_audio_out_window_g1_ParamLimits

0x7932,	// (0x0003e303) popup_call2_audio_out_window_g1

0x246d,	// (0x00038e3e) popup_call2_audio_out_window_g2_ParamLimits

0x246d,	// (0x00038e3e) popup_call2_audio_out_window_g2

0x795e,	// (0x0003e32f) popup_call2_audio_out_window_g3_ParamLimits

0x795e,	// (0x0003e32f) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x00045e2d) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x00045e2d) popup_call2_audio_out_window_g

0x24a4,	// (0x00038e75) popup_call2_audio_out_window_t1_ParamLimits

0x24a4,	// (0x00038e75) popup_call2_audio_out_window_t1

0x2503,	// (0x00038ed4) popup_call2_audio_out_window_t2_ParamLimits

0x2503,	// (0x00038ed4) popup_call2_audio_out_window_t2

0x2557,	// (0x00038f28) popup_call2_audio_out_window_t3_ParamLimits

0x2557,	// (0x00038f28) popup_call2_audio_out_window_t3

0x256d,	// (0x00038f3e) popup_call2_audio_out_window_t4_ParamLimits

0x256d,	// (0x00038f3e) popup_call2_audio_out_window_t4

0x2583,	// (0x00038f54) popup_call2_audio_out_window_t5_ParamLimits

0x2583,	// (0x00038f54) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x00045e36) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x00045e36) popup_call2_audio_out_window_t

0x25e7,	// (0x00038fb8) bg_popup_call2_in_pane_ParamLimits

0x25e7,	// (0x00038fb8) bg_popup_call2_in_pane

0x2643,	// (0x00039014) popup_call2_audio_in_window_g1_ParamLimits

0x2643,	// (0x00039014) popup_call2_audio_in_window_g1

0x267b,	// (0x0003904c) popup_call2_audio_in_window_g2_ParamLimits

0x267b,	// (0x0003904c) popup_call2_audio_in_window_g2

0x26b3,	// (0x00039084) popup_call2_audio_in_window_g3_ParamLimits

0x26b3,	// (0x00039084) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x00045e43) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x00045e43) popup_call2_audio_in_window_g

0x270b,	// (0x000390dc) popup_call2_audio_in_window_t1_ParamLimits

0x270b,	// (0x000390dc) popup_call2_audio_in_window_t1

0x278b,	// (0x0003915c) popup_call2_audio_in_window_t2_ParamLimits

0x278b,	// (0x0003915c) popup_call2_audio_in_window_t2

0x280b,	// (0x000391dc) popup_call2_audio_in_window_t3_ParamLimits

0x280b,	// (0x000391dc) popup_call2_audio_in_window_t3

0x2825,	// (0x000391f6) popup_call2_audio_in_window_t4_ParamLimits

0x2825,	// (0x000391f6) popup_call2_audio_in_window_t4

0x2837,	// (0x00039208) popup_call2_audio_in_window_t5_ParamLimits

0x2837,	// (0x00039208) popup_call2_audio_in_window_t5

0x284c,	// (0x0003921d) popup_call2_audio_in_window_t6_ParamLimits

0x284c,	// (0x0003921d) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x00045e4c) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x00045e4c) popup_call2_audio_in_window_t

0x0aea,	// (0x000374bb) bg_popup_call2_in_pane_g1

0x2925,	// (0x000392f6) popup_cale_lunar_info_window_t4

0x0003,

0xf4d0,	// (0x00045ea1) popup_cale_lunar_info_window_t

0x0af2,	// (0x000374c3) bg_popup_call2_rect_pane_ParamLimits

0x0af2,	// (0x000374c3) bg_popup_call2_rect_pane

0x0897,	// (0x00037268) call2_cli_visual_graphic_pane

0x0897,	// (0x00037268) call2_cli_visual_text_pane

0x7d64,	// (0x0003e735) smil_status_volume_pane_g3

0x0002,

0x0b0a,	// (0x000374db) call2_cli_visual_graphic_pane_g1

0x0b0a,	// (0x000374db) call2_cli_visual_graphic_pane_g2

0x0b0a,	// (0x000374db) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x00045e59) call2_cli_visual_graphic_pane_g

0x0d21,	// (0x000376f2) bg_popup_call2_rect_pane_g1

0x0d19,	// (0x000376ea) bg_popup_call2_rect_pane_g2

0x0d11,	// (0x000376e2) bg_popup_call2_rect_pane_g3

0x0d31,	// (0x00037702) bg_popup_call2_rect_pane_g4

0x0d29,	// (0x000376fa) bg_popup_call2_rect_pane_g5

0x0d39,	// (0x0003770a) bg_popup_call2_rect_pane_g6

0x0d41,	// (0x00037712) bg_popup_call2_rect_pane_g7

0x0d51,	// (0x00037722) bg_popup_call2_rect_pane_g8

0x0d49,	// (0x0003771a) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x00045be9) bg_popup_call2_rect_pane_g

0x2861,	// (0x00039232) bg_popup_call2_bubble_pane_g1

0x2869,	// (0x0003923a) bg_popup_call2_bubble_pane_g2

0x2871,	// (0x00039242) bg_popup_call2_bubble_pane_g3

0x2879,	// (0x0003924a) bg_popup_call2_bubble_pane_g4

0x2881,	// (0x00039252) bg_popup_call2_bubble_pane_g5

0x2889,	// (0x0003925a) bg_popup_call2_bubble_pane_g6

0x2891,	// (0x00039262) bg_popup_call2_bubble_pane_g7

0x2899,	// (0x0003926a) bg_popup_call2_bubble_pane_g8

0x28a1,	// (0x00039272) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x00045e60) bg_popup_call2_bubble_pane_g

0x5370,	// (0x0003bd41) aid_cale_week_size_cell_pane

0x0af2,	// (0x000374c3) aid_cams_cif_uncrop_pane_ParamLimits

0x0af2,	// (0x000374c3) aid_cams_cif_uncrop_pane

0x0b6d,	// (0x0003753e) aid_cams_size_cell_ParamLimits

0x0b6d,	// (0x0003753e) aid_cams_size_cell

0x0b6d,	// (0x0003753e) grid_cams_pane_ParamLimits

0x0b6d,	// (0x0003753e) linegrid_cams_pane_ParamLimits

0x5c24,	// (0x0003c5f5) call_video_pane_t1

0x5c41,	// (0x0003c612) call_video_pane_t2

0x0001,

0xf1ba,	// (0x00045b8b) call_video_pane_t

0x60eb,	// (0x0003cabc) aid_cale_month_size_cell_pane_ParamLimits

0x60eb,	// (0x0003cabc) aid_cale_month_size_cell_pane

0xf514,	// (0x00045ee5) smil_status_volume_pane_g

0x7d71,	// (0x0003e742) volume_smil_pane_ParamLimits

0x4e2d,	// (0x0003b7fe) aid_popup2_width_pane

0x52be,	// (0x0003bc8f) cell_qdial_pane_g4_ParamLimits

0x52be,	// (0x0003bc8f) cell_qdial_pane_g4

0x6fb2,	// (0x0003d983) aid_blid_cardinal_pane_ParamLimits

0x6fc2,	// (0x0003d993) aid_blid_destination_pane_ParamLimits

0x6fc2,	// (0x0003d993) aid_blid_destination_pane

0x0af2,	// (0x000374c3) bg_popup_call_poc_act_pane_ParamLimits

0x0af2,	// (0x000374c3) bg_popup_call_poc_act_pane

0x0af2,	// (0x000374c3) bg_popup_call_poc_inact_pane_ParamLimits

0x0af2,	// (0x000374c3) bg_popup_call_poc_inact_pane

0x28a9,	// (0x0003927a) bg_popup_call_poc_act_pane_g1

0x28b1,	// (0x00039282) bg_popup_call_poc_act_pane_g2

0x28b9,	// (0x0003928a) bg_popup_call_poc_act_pane_g3

0x2879,	// (0x0003924a) bg_popup_call_poc_act_pane_g4

0x2881,	// (0x00039252) bg_popup_call_poc_act_pane_g5

0x28c1,	// (0x00039292) bg_popup_call_poc_act_pane_g6

0x2891,	// (0x00039262) bg_popup_call_poc_act_pane_g7

0x28c9,	// (0x0003929a) bg_popup_call_poc_act_pane_g8

0x0897,	// (0x00037268) main_usb_pane

0x7bb2,	// (0x0003e583) popup_cale_lunar_info_window

0x5f46,	// (0x0003c917) im_reading_pane_t1_ParamLimits

0x0ece,	// (0x0003789f) list_im_pane_ParamLimits

0x0edf,	// (0x000378b0) scroll_pane_cp07_ParamLimits

0x0897,	// (0x00037268) grid_highlight_pane_cp012

0x0af2,	// (0x000374c3) mup_scale_pane_ParamLimits

0x0b89,	// (0x0003755a) main_usb_pane_g1_ParamLimits

0x0b89,	// (0x0003755a) main_usb_pane_g1

0x0b89,	// (0x0003755a) main_usb_pane_g2_ParamLimits

0x0b89,	// (0x0003755a) main_usb_pane_g2

0x0001,

0xf4b9,	// (0x00045e8a) main_usb_pane_g_ParamLimits

0xf4b9,	// (0x00045e8a) main_usb_pane_g

0x0bd7,	// (0x000375a8) main_usb_pane_t1_ParamLimits

0x0bd7,	// (0x000375a8) main_usb_pane_t1

0x0bd7,	// (0x000375a8) main_usb_pane_t2_ParamLimits

0x0bd7,	// (0x000375a8) main_usb_pane_t2

0x0bd7,	// (0x000375a8) main_usb_pane_t3_ParamLimits

0x0bd7,	// (0x000375a8) main_usb_pane_t3

0x0bd7,	// (0x000375a8) main_usb_pane_t4_ParamLimits

0x0bd7,	// (0x000375a8) main_usb_pane_t4

0x0bd7,	// (0x000375a8) main_usb_pane_t5_ParamLimits

0x0bd7,	// (0x000375a8) main_usb_pane_t5

0x0bd7,	// (0x000375a8) main_usb_pane_t6_ParamLimits

0x0bd7,	// (0x000375a8) main_usb_pane_t6

0x0005,

0xf4be,	// (0x00045e8f) main_usb_pane_t_ParamLimits

0x6f51,	// (0x0003d922) aid_text_placing

0x6f5c,	// (0x0003d92d) main_location2_pane_t1_ParamLimits

0x6f72,	// (0x0003d943) main_location2_pane_t2_ParamLimits

0x6f88,	// (0x0003d959) main_location2_pane_t3_ParamLimits

0x6f9e,	// (0x0003d96f) main_location2_pane_t4_ParamLimits

0x6f9e,	// (0x0003d96f) main_location2_pane_t4

0xf2fb,	// (0x00045ccc) main_location2_pane_t_ParamLimits

0x0b2e,	// (0x000374ff) find_pinb_pane_g2_ParamLimits

0x0b2e,	// (0x000374ff) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00045a43) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00045a43) find_pinb_pane_g

0x0b3a,	// (0x0003750b) find_pinb_pane_t1_ParamLimits

0x0b4c,	// (0x0003751d) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00045a48) find_pinb_pane_t_ParamLimits

0x0897,	// (0x00037268) main_call3_pane

0x669e,	// (0x0003d06f) cale_month_day_heading_pane_t1_ParamLimits

0x6720,	// (0x0003d0f1) cale_month_day_heading_pane_t2_ParamLimits

0x6799,	// (0x0003d16a) cale_month_day_heading_pane_t3_ParamLimits

0x6812,	// (0x0003d1e3) cale_month_day_heading_pane_t4_ParamLimits

0x688b,	// (0x0003d25c) cale_month_day_heading_pane_t5_ParamLimits

0x690c,	// (0x0003d2dd) cale_month_day_heading_pane_t6_ParamLimits

0x6995,	// (0x0003d366) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00045bc3) cale_month_day_heading_pane_t_ParamLimits

0x1138,	// (0x00037b09) smil_status_volume_pane

0x7533,	// (0x0003df04) postcard_address_pane_ParamLimits

0x7533,	// (0x0003df04) postcard_address_pane

0x7541,	// (0x0003df12) postcard_message_pane_ParamLimits

0x7541,	// (0x0003df12) postcard_message_pane

0x798a,	// (0x0003e35b) call2_cli_visual_pane_t1_ParamLimits

0x798a,	// (0x0003e35b) call2_cli_visual_pane_t1

0x2a3a,	// (0x0003940b) postcard_message_pane_t1_ParamLimits

0x2a3a,	// (0x0003940b) postcard_message_pane_t1

0x2a22,	// (0x000393f3) postcard_address_pane_t1_ParamLimits

0x2a22,	// (0x000393f3) postcard_address_pane_t1

0x7ea8,	// (0x0003e879) popup_call3_audio_in_window_ParamLimits

0x7ea8,	// (0x0003e879) popup_call3_audio_in_window

0x7d86,	// (0x0003e757) bg_popup_call3_in_pane_ParamLimits

0x7d86,	// (0x0003e757) bg_popup_call3_in_pane

0x7dee,	// (0x0003e7bf) popup_call3_audio_in_window_g1_ParamLimits

0x7dee,	// (0x0003e7bf) popup_call3_audio_in_window_g1

0x7e06,	// (0x0003e7d7) popup_call3_audio_in_window_g2_ParamLimits

0x7e06,	// (0x0003e7d7) popup_call3_audio_in_window_g2

0x7e1e,	// (0x0003e7ef) popup_call3_audio_in_window_g3_ParamLimits

0x7e1e,	// (0x0003e7ef) popup_call3_audio_in_window_g3

0x0003,

0xf51b,	// (0x00045eec) popup_call3_audio_in_window_g_ParamLimits

0xf51b,	// (0x00045eec) popup_call3_audio_in_window_g

0x7e46,	// (0x0003e817) popup_call3_audio_in_window_t1_ParamLimits

0x7e46,	// (0x0003e817) popup_call3_audio_in_window_t1

0x7e6e,	// (0x0003e83f) popup_call3_audio_in_window_t2_ParamLimits

0x7e6e,	// (0x0003e83f) popup_call3_audio_in_window_t2

0x7e96,	// (0x0003e867) popup_call3_audio_in_window_t3_ParamLimits

0x7e96,	// (0x0003e867) popup_call3_audio_in_window_t3

0x0002,

0xf524,	// (0x00045ef5) popup_call3_audio_in_window_t_ParamLimits

0xf524,	// (0x00045ef5) popup_call3_audio_in_window_t

0x0e0b,	// (0x000377dc) bg_popup_call3_rect_pane

0x0d21,	// (0x000376f2) bg_popup_call3_rect_pane_g1

0x0d19,	// (0x000376ea) bg_popup_call3_rect_pane_g2

0x0d11,	// (0x000376e2) bg_popup_call3_rect_pane_g3

0x0d31,	// (0x00037702) bg_popup_call3_rect_pane_g4

0x0d29,	// (0x000376fa) bg_popup_call3_rect_pane_g5

0x0d39,	// (0x0003770a) bg_popup_call3_rect_pane_g6

0x0d41,	// (0x00037712) bg_popup_call3_rect_pane_g7

0xee90,	// (0x00045861) mup_visualizer_osc_pane

0xee90,	// (0x00045861) mup_visualizer_spec_pane

0x7da6,	// (0x0003e777) call3_video_qcif_pane_ParamLimits

0x7da6,	// (0x0003e777) call3_video_qcif_pane

0x7db8,	// (0x0003e789) call3_video_qcif_uncrop_pane_ParamLimits

0x7db8,	// (0x0003e789) call3_video_qcif_uncrop_pane

0x7dc8,	// (0x0003e799) call3_video_subqcif_pane_ParamLimits

0x7dc8,	// (0x0003e799) call3_video_subqcif_pane

0x7ddc,	// (0x0003e7ad) call3_video_subqcif_uncrop_pane_ParamLimits

0x7ddc,	// (0x0003e7ad) call3_video_subqcif_uncrop_pane

0x7e36,	// (0x0003e807) popup_call3_audio_in_window_g4_ParamLimits

0x7e36,	// (0x0003e807) popup_call3_audio_in_window_g4

0xee90,	// (0x00045861) mup_spec_half_pane

0xee90,	// (0x00045861) mup_spec_half_pane_cp

0xee90,	// (0x00045861) mup_osc_middle_pane

0x0bb9,	// (0x0003758a) mup_visualizer_osc_pane_g1

0x29d5,	// (0x000393a6) mup_spec_bar_pane_ParamLimits

0x29d5,	// (0x000393a6) mup_spec_bar_pane

0x0bb9,	// (0x0003758a) mup_spec_bar_pane_g1

0x0bb9,	// (0x0003758a) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00045a5d) mup_spec_bar_pane_g

0x5370,	// (0x0003bd41) aid_cale_week_size_cell_pane_ParamLimits

0x538a,	// (0x0003bd5b) bg_cale_heading_pane_ParamLimits

0x53b3,	// (0x0003bd84) bg_cale_pane_cp01_ParamLimits

0x53d5,	// (0x0003bda6) cale_week_corner_pane_ParamLimits

0x53f4,	// (0x0003bdc5) cale_week_day_heading_pane_ParamLimits

0x5422,	// (0x0003bdf3) cale_week_scroll_pane_g1_ParamLimits

0x5446,	// (0x0003be17) cale_week_scroll_pane_g2_ParamLimits

0x545e,	// (0x0003be2f) cale_week_scroll_pane_g3_ParamLimits

0x5476,	// (0x0003be47) cale_week_scroll_pane_g4_ParamLimits

0x548e,	// (0x0003be5f) cale_week_scroll_pane_g5_ParamLimits

0x54a6,	// (0x0003be77) cale_week_scroll_pane_g6_ParamLimits

0x54c6,	// (0x0003be97) cale_week_scroll_pane_g7_ParamLimits

0x54e6,	// (0x0003beb7) cale_week_scroll_pane_g8_ParamLimits

0x5506,	// (0x0003bed7) cale_week_scroll_pane_g9_ParamLimits

0x5523,	// (0x0003bef4) cale_week_scroll_pane_g10_ParamLimits

0x5540,	// (0x0003bf11) cale_week_scroll_pane_g11_ParamLimits

0x555f,	// (0x0003bf30) cale_week_scroll_pane_g12_ParamLimits

0x5584,	// (0x0003bf55) cale_week_scroll_pane_g13_ParamLimits

0x55ad,	// (0x0003bf7e) cale_week_scroll_pane_g14_ParamLimits

0x55d6,	// (0x0003bfa7) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00045ad4) cale_week_scroll_pane_g_ParamLimits

0x561f,	// (0x0003bff0) cale_week_time_pane_ParamLimits

0x563f,	// (0x0003c010) grid_cale_week_pane_ParamLimits

0x0d81,	// (0x00037752) listscroll_cale_week_pane_t1

0x0d93,	// (0x00037764) scroll_pane_cp08_ParamLimits

0x6163,	// (0x0003cb34) cale_month_corner_pane_ParamLimits

0x110e,	// (0x00037adf) cale_month_pane_t1

0x6625,	// (0x0003cff6) cale_month_week_pane_ParamLimits

0x20b6,	// (0x00038a87) popup_call_status_window_g1_ParamLimits

0x6d80,	// (0x0003d751) popup_call_status_window_g2_ParamLimits

0x6d8c,	// (0x0003d75d) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x00045c53) popup_call_status_window_g_ParamLimits

0x14b1,	// (0x00037e82) aid_call2_pane

0x4445,	// (0x0003ae16) msg_header_pane_g1

0x7533,	// (0x0003df04) postcard_address2_pane_ParamLimits

0x7533,	// (0x0003df04) postcard_address2_pane

0x7541,	// (0x0003df12) postcard_message2_pane_ParamLimits

0x7541,	// (0x0003df12) postcard_message2_pane

0x7d37,	// (0x0003e708) message2_row_pane_ParamLimits

0x7d37,	// (0x0003e708) message2_row_pane

0x7d51,	// (0x0003e722) address2_row_pane_ParamLimits

0x7d51,	// (0x0003e722) address2_row_pane

0x29a2,	// (0x00039373) postcard_message2_row_pane_g1

0x29aa,	// (0x0003937b) postcard_message2_row_pane_t1

0x29a2,	// (0x00039373) address2_row_pane_g1

0x29aa,	// (0x0003937b) address2_row_pane_t1

0x59cd,	// (0x0003c39e) aid_size_cell_vorec

0x0897,	// (0x00037268) main_rss_pane

0x29b8,	// (0x00039389) rss_list_single_pane_ParamLimits

0x29b8,	// (0x00039389) rss_list_single_pane

0x29c6,	// (0x00039397) rss_list_single_pane_t1

0x29c6,	// (0x00039397) rss_list_single_pane_t2

0x0001,

0xf50f,	// (0x00045ee0) rss_list_single_pane_t

0x0897,	// (0x00037268) main_camera2_pane

0x0897,	// (0x00037268) main_video2_pane

0x0b6d,	// (0x0003753e) cams_zoom_pane_cp2_ParamLimits

0x0b6d,	// (0x0003753e) cams_zoom_pane_cp2

0x0b6d,	// (0x0003753e) image2_vga_pane_ParamLimits

0x0b6d,	// (0x0003753e) image2_vga_pane

0x0b89,	// (0x0003755a) main_camera2_pane_g1_ParamLimits

0x0b89,	// (0x0003755a) main_camera2_pane_g1

0x0b89,	// (0x0003755a) main_camera2_pane_g2_ParamLimits

0x0b89,	// (0x0003755a) main_camera2_pane_g2

0x0b89,	// (0x0003755a) main_camera2_pane_g3_ParamLimits

0x0b89,	// (0x0003755a) main_camera2_pane_g3

0x0b89,	// (0x0003755a) main_camera2_pane_g4_ParamLimits

0x0b89,	// (0x0003755a) main_camera2_pane_g4

0x0b89,	// (0x0003755a) main_camera2_pane_g5_ParamLimits

0x0b89,	// (0x0003755a) main_camera2_pane_g5

0x0b89,	// (0x0003755a) main_camera2_pane_g6_ParamLimits

0x0b89,	// (0x0003755a) main_camera2_pane_g6

0x0b89,	// (0x0003755a) main_camera2_pane_g7_ParamLimits

0x0b89,	// (0x0003755a) main_camera2_pane_g7

0x0b89,	// (0x0003755a) main_camera2_pane_g8_ParamLimits

0x0b89,	// (0x0003755a) main_camera2_pane_g8

0x0008,

0xf52b,	// (0x00045efc) main_camera2_pane_g_ParamLimits

0xf52b,	// (0x00045efc) main_camera2_pane_g

0x0bd7,	// (0x000375a8) main_camera2_pane_t1_ParamLimits

0x0bd7,	// (0x000375a8) main_camera2_pane_t1

0x0bd7,	// (0x000375a8) main_camera2_pane_t2_ParamLimits

0x0bd7,	// (0x000375a8) main_camera2_pane_t2

0x0bd7,	// (0x000375a8) main_camera2_pane_t3_ParamLimits

0x0bd7,	// (0x000375a8) main_camera2_pane_t3

0x0bd7,	// (0x000375a8) main_camera2_pane_t4_ParamLimits

0x0bd7,	// (0x000375a8) main_camera2_pane_t4

0x0006,

0xf53e,	// (0x00045f0f) main_camera2_pane_t_ParamLimits

0xf53e,	// (0x00045f0f) main_camera2_pane_t

0x17d3,	// (0x000381a4) cams_zoom_pane_cp4_ParamLimits

0x17d3,	// (0x000381a4) cams_zoom_pane_cp4

0x0b14,	// (0x000374e5) image2_cif_pane_ParamLimits

0x0b14,	// (0x000374e5) image2_cif_pane

0x0b6d,	// (0x0003753e) image2_subqcif_pane_ParamLimits

0x0b6d,	// (0x0003753e) image2_subqcif_pane

0x17b1,	// (0x00038182) main_video2_pane_g1_ParamLimits

0x17b1,	// (0x00038182) main_video2_pane_g1

0x17b1,	// (0x00038182) main_video2_pane_g2_ParamLimits

0x17b1,	// (0x00038182) main_video2_pane_g2

0x17b1,	// (0x00038182) main_video2_pane_g3_ParamLimits

0x17b1,	// (0x00038182) main_video2_pane_g3

0x17b1,	// (0x00038182) main_video2_pane_g4_ParamLimits

0x17b1,	// (0x00038182) main_video2_pane_g4

0x17b1,	// (0x00038182) main_video2_pane_g5_ParamLimits

0x17b1,	// (0x00038182) main_video2_pane_g5

0x17b1,	// (0x00038182) main_video2_pane_g6_ParamLimits

0x17b1,	// (0x00038182) main_video2_pane_g6

0x0005,

0xf54d,	// (0x00045f1e) main_video2_pane_g_ParamLimits

0xf54d,	// (0x00045f1e) main_video2_pane_g

0x17bf,	// (0x00038190) main_video2_pane_t1_ParamLimits

0x17bf,	// (0x00038190) main_video2_pane_t1

0x17bf,	// (0x00038190) main_video2_pane_t2_ParamLimits

0x17bf,	// (0x00038190) main_video2_pane_t2

0x17bf,	// (0x00038190) main_video2_pane_t3_ParamLimits

0x17bf,	// (0x00038190) main_video2_pane_t3

0x0002,

0xf55a,	// (0x00045f2b) main_video2_pane_t_ParamLimits

0xf55a,	// (0x00045f2b) main_video2_pane_t

0x7a38,	// (0x0003e409) call_muted_g2

0x0001,

0xf501,	// (0x00045ed2) call_muted_g

0x0897,	// (0x00037268) main_mup2_pane

0x0b97,	// (0x00037568) main_mup2_pane_g1_ParamLimits

0x0b97,	// (0x00037568) main_mup2_pane_g1

0x0b97,	// (0x00037568) main_mup2_pane_g2_ParamLimits

0x0b97,	// (0x00037568) main_mup2_pane_g2

0x0bb9,	// (0x0003758a) main_mup_pane_g13_cp1

0xee90,	// (0x00045861) mup_volume_pane_cp1

0x0b97,	// (0x00037568) main_mup2_pane_g4_ParamLimits

0x0b97,	// (0x00037568) main_mup2_pane_g4

0x0b97,	// (0x00037568) main_mup2_pane_g5_ParamLimits

0x0b97,	// (0x00037568) main_mup2_pane_g5

0x0b97,	// (0x00037568) main_mup2_pane_g6_ParamLimits

0x0b97,	// (0x00037568) main_mup2_pane_g6

0x0b97,	// (0x00037568) main_mup2_pane_g7_ParamLimits

0x0b97,	// (0x00037568) main_mup2_pane_g7

0x0006,

0xf561,	// (0x00045f32) main_mup2_pane_g_ParamLimits

0xf561,	// (0x00045f32) main_mup2_pane_g

0x0ba5,	// (0x00037576) main_mup2_pane_t1_ParamLimits

0x0ba5,	// (0x00037576) main_mup2_pane_t1

0x0ba5,	// (0x00037576) main_mup2_pane_t2_ParamLimits

0x0ba5,	// (0x00037576) main_mup2_pane_t2

0x0ba5,	// (0x00037576) main_mup2_pane_t3_ParamLimits

0x0ba5,	// (0x00037576) main_mup2_pane_t3

0x0ba5,	// (0x00037576) main_mup2_pane_t4_ParamLimits

0x0ba5,	// (0x00037576) main_mup2_pane_t4

0x0ba5,	// (0x00037576) main_mup2_pane_t5_ParamLimits

0x0ba5,	// (0x00037576) main_mup2_pane_t5

0x0ba5,	// (0x00037576) main_mup2_pane_t6_ParamLimits

0x0ba5,	// (0x00037576) main_mup2_pane_t6

0x0005,

0xf570,	// (0x00045f41) main_mup2_pane_t_ParamLimits

0xf570,	// (0x00045f41) main_mup2_pane_t

0x2b95,	// (0x00039566) mup2_visualizer_pane_ParamLimits

0x2b95,	// (0x00039566) mup2_visualizer_pane

0x2b95,	// (0x00039566) mup_progress_pane_cp_ParamLimits

0x2b95,	// (0x00039566) mup_progress_pane_cp

0x2a56,	// (0x00039427) mup_volume_pane_cp_ParamLimits

0x2a56,	// (0x00039427) mup_volume_pane_cp

0x0b7b,	// (0x0003754c) mup2_visualizer_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) mup2_visualizer_pane_g1

0x0b89,	// (0x0003755a) mup2_visualizer_pane_g2_ParamLimits

0x0b89,	// (0x0003755a) mup2_visualizer_pane_g2

0x0b89,	// (0x0003755a) mup2_visualizer_pane_g3_ParamLimits

0x0b89,	// (0x0003755a) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00045a4d) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00045a4d) mup2_visualizer_pane_g

0xee90,	// (0x00045861) aid_size_cell_fmradio

0x7b4e,	// (0x0003e51f) aid_height_parent_landcape

0x0f6c,	// (0x0003793d) wml_content_pane_cp

0x0f74,	// (0x00037945) wml_tabs_pane

0x0f7d,	// (0x0003794e) popup_wml_miniature_window

0x0f85,	// (0x00037956) scroll_pane_cp021

0x0f99,	// (0x0003796a) wml_content_pane_comp8

0x0897,	// (0x00037268) bg_popup_sub_pane_cp05

0x2a6c,	// (0x0003943d) popup_wml_miniature_window_g1

0x2a74,	// (0x00039445) wml_miniature_view_pane

0x7ec5,	// (0x0003e896) aid_size_wml_view

0x7ecd,	// (0x0003e89e) wml_miniature_view_pane_g1

0x7ed6,	// (0x0003e8a7) wml_miniature_view_pane_g2

0x7edf,	// (0x0003e8b0) wml_miniature_view_pane_g3

0x7ee7,	// (0x0003e8b8) wml_miniature_view_pane_g4

0x7eef,	// (0x0003e8c0) wml_miniature_view_pane_g5

0x7ef7,	// (0x0003e8c8) wml_miniature_view_pane_g6

0x7eff,	// (0x0003e8d0) wml_miniature_view_pane_g7

0x7f07,	// (0x0003e8d8) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x00045f4e) wml_miniature_view_pane_g

0x2a7c,	// (0x0003944d) background_graphic_ParamLimits

0x2a7c,	// (0x0003944d) background_graphic

0x2a88,	// (0x00039459) wml_tabs_2_pane

0x2a91,	// (0x00039462) wml_tabs_3_pane_ParamLimits

0x2a91,	// (0x00039462) wml_tabs_3_pane

0x2aa3,	// (0x00039474) wml_tabs_4_pane_ParamLimits

0x2aa3,	// (0x00039474) wml_tabs_4_pane

0x2ab9,	// (0x0003948a) wml_tabs_5_pane_ParamLimits

0x2ab9,	// (0x0003948a) wml_tabs_5_pane

0x2ad3,	// (0x000394a4) wml_tabs_pane_g2_ParamLimits

0x2ad3,	// (0x000394a4) wml_tabs_pane_g2

0x2ae8,	// (0x000394b9) wml_tabs_pane_g3_ParamLimits

0x2ae8,	// (0x000394b9) wml_tabs_pane_g3

0x2afd,	// (0x000394ce) wml_tabs_2_active_pane_ParamLimits

0x2afd,	// (0x000394ce) wml_tabs_2_active_pane

0x2afd,	// (0x000394ce) wml_tabs_2_passive_pane_ParamLimits

0x2afd,	// (0x000394ce) wml_tabs_2_passive_pane

0x7f0f,	// (0x0003e8e0) wml_tabs_3_active_pane_cp_ParamLimits

0x7f0f,	// (0x0003e8e0) wml_tabs_3_active_pane_cp

0x7f22,	// (0x0003e8f3) wml_tabs_3_passive_pane_ParamLimits

0x7f22,	// (0x0003e8f3) wml_tabs_3_passive_pane

0x7f33,	// (0x0003e904) wml_tabs_3_passive_pane_cp_ParamLimits

0x7f33,	// (0x0003e904) wml_tabs_3_passive_pane_cp

0x7f48,	// (0x0003e919) tabs_4_active_pane

0x7f50,	// (0x0003e921) tabs_4_passive_pane

0x7f58,	// (0x0003e929) tabs_4_passive_pane_cp

0x7f60,	// (0x0003e931) tabs_4_passive_pane_cp2

0x79ac,	// (0x0003e37d) aid_height_text

0x2b95,	// (0x00039566) mup_volume_cont_pane_ParamLimits

0x2b95,	// (0x00039566) mup_volume_cont_pane

0xee90,	// (0x00045861) aid_size_cell_pinb

0xee90,	// (0x00045861) aid_size_list_pinb

0x2b95,	// (0x00039566) mup2_volume_cont_pane_ParamLimits

0x2b95,	// (0x00039566) mup2_volume_cont_pane

0x7f6a,	// (0x0003e93b) mup2_volume_cont_pane_g1_ParamLimits

0x7f6a,	// (0x0003e93b) mup2_volume_cont_pane_g1

0x4e39,	// (0x0003b80a) aid_size_cell_touch_ParamLimits

0x4e39,	// (0x0003b80a) aid_size_cell_touch

0x504a,	// (0x0003ba1b) touch_pane_ParamLimits

0x504a,	// (0x0003ba1b) touch_pane

0xee90,	// (0x00045861) main_rss2_pane

0x2b14,	// (0x000394e5) listscroll_rss2_pane

0x2b1d,	// (0x000394ee) rss2_navigation_pane

0x2b25,	// (0x000394f6) list_rss2_pane

0x15c0,	// (0x00037f91) scroll_pane_cp22

0x2b2d,	// (0x000394fe) rss2_navigation_pane_g1

0x2b36,	// (0x00039507) rss2_navigation_pane_g2

0x2b3e,	// (0x0003950f) rss2_navigation_pane_g3

0x0002,

0xf58e,	// (0x00045f5f) rss2_navigation_pane_g

0x2b46,	// (0x00039517) rss2_navigation_pane_t1

0x7f80,	// (0x0003e951) rss2_list_single_pane_ParamLimits

0x7f80,	// (0x0003e951) rss2_list_single_pane

0x2b54,	// (0x00039525) rss2_list_single_pane_t2

0x2b62,	// (0x00039533) rss2_list_single_pane_t3_ParamLimits

0x2b62,	// (0x00039533) rss2_list_single_pane_t3

0x2b7f,	// (0x00039550) rss2_list_single_pane_t4

0x6c33,	// (0x0003d604) smil_status_pane_g1

0x0b14,	// (0x000374e5) main_image2_pane_ParamLimits

0x0b14,	// (0x000374e5) main_image2_pane

0x0b89,	// (0x0003755a) main_camera2_pane_g9_ParamLimits

0x0b89,	// (0x0003755a) main_camera2_pane_g9

0x0bd7,	// (0x000375a8) main_camera2_pane_t5_ParamLimits

0x0bd7,	// (0x000375a8) main_camera2_pane_t5

0x349f,	// (0x00039e70) main_camera2_pane_t6_ParamLimits

0x349f,	// (0x00039e70) main_camera2_pane_t6

0x7fa3,	// (0x0003e974) main_image2_pane_g1_ParamLimits

0x7fa3,	// (0x0003e974) main_image2_pane_g1

0x76e1,	// (0x0003e0b2) smil2_video_pane_ParamLimits

0x76e1,	// (0x0003e0b2) smil2_video_pane

0x431f,	// (0x0003acf0) aid_zoom_text_primary_cp

0x4ff3,	// (0x0003b9c4) popup_preview_fixed_window

0x0ec6,	// (0x00037897) im_reading_pane_g1

0x7eb7,	// (0x0003e888) cams2_bc_adjust_pane_cp_ParamLimits

0x7eb7,	// (0x0003e888) cams2_bc_adjust_pane_cp

0x0b6d,	// (0x0003753e) cams2_bc_adjust_pane_ParamLimits

0x0b6d,	// (0x0003753e) cams2_bc_adjust_pane

0x0bb9,	// (0x0003758a) cams2_bc_adjust_pane_g1

0xee90,	// (0x00045861) cams2_slider_pane

0x0bb9,	// (0x0003758a) cams2_slider_pane_g1

0x0bb9,	// (0x0003758a) cams2_slider_pane_g2

0x0006,

0xf595,	// (0x00045f66) cams2_slider_pane_g

0x50df,	// (0x0003bab0) calc_display_pane_ParamLimits

0x50fd,	// (0x0003bace) calc_paper_pane_ParamLimits

0x5119,	// (0x0003baea) grid_calc_pane_ParamLimits

0x6dea,	// (0x0003d7bb) popup_clock_digital_window_t1_ParamLimits

0x198b,	// (0x0003835c) main_image_pane_t1

0x50c5,	// (0x0003ba96) aid_size_cell_calc_ParamLimits

0x50c5,	// (0x0003ba96) aid_size_cell_calc

0x7b88,	// (0x0003e559) popup_blid_sat_info2_window_ParamLimits

0x7b88,	// (0x0003e559) popup_blid_sat_info2_window

0x2b8d,	// (0x0003955e) aid_size_cell_blid

0x2b95,	// (0x00039566) bg_popup_window_pane_cp07

0x2bb8,	// (0x00039589) grid_popup_blid_pane

0x2bc2,	// (0x00039593) heading_pane_cp05_ParamLimits

0x2bc2,	// (0x00039593) heading_pane_cp05

0x2c8c,	// (0x0003965d) cell_popup_blid_pane_ParamLimits

0x2c8c,	// (0x0003965d) cell_popup_blid_pane

0x2cb6,	// (0x00039687) cell_popup_blid_pane_g1

0x2cbe,	// (0x0003968f) cell_popup_blid_pane_t1

0x2b95,	// (0x00039566) mup2_indicator_pane_ParamLimits

0x2b95,	// (0x00039566) mup2_indicator_pane

0xee90,	// (0x00045861) mup2_visualizer_osc_pane

0x2a56,	// (0x00039427) mup2_visualizer_spec_pane_ParamLimits

0x2a56,	// (0x00039427) mup2_visualizer_spec_pane

0xee90,	// (0x00045861) mup2_spec_half_pane

0xee90,	// (0x00045861) mup2_spec_half_pane_cp

0x2ccc,	// (0x0003969d) mup2_spec_bar_pane_ParamLimits

0x2ccc,	// (0x0003969d) mup2_spec_bar_pane

0x0bb9,	// (0x0003758a) mup2_spec_bar_pane_g1

0x2ceb,	// (0x000396bc) mup2_spec_bar_pane_g2

0x0001,

0xf5bb,	// (0x00045f8c) mup2_spec_bar_pane_g

0xee90,	// (0x00045861) mup2_osc_middle_pane

0x0bb9,	// (0x0003758a) mup2_visualizer_osc_pane_g1

0xeeba,	// (0x0004588b) popup_number_entry_window_t1_ParamLimits

0xeecd,	// (0x0004589e) popup_number_entry_window_t2_ParamLimits

0xeedf,	// (0x000458b0) popup_number_entry_window_t3_ParamLimits

0xeef1,	// (0x000458c2) popup_number_entry_window_t5_ParamLimits

0xeef1,	// (0x000458c2) popup_number_entry_window_t5

0xf01d,	// (0x000459ee) popup_number_entry_window_t_ParamLimits

0xef26,	// (0x000458f7) text_title_cp2_ParamLimits

0x73f7,	// (0x0003ddc8) aid_hotspot_pointer_text2_pane

0x7491,	// (0x0003de62) main_viewer_pane_g9_ParamLimits

0x7491,	// (0x0003de62) main_viewer_pane_g9

0x110e,	// (0x00037adf) cale_month_pane_t1_ParamLimits

0x1154,	// (0x00037b25) bg_cale_pane_ParamLimits

0x116c,	// (0x00037b3d) list_cale_pane_ParamLimits

0x117d,	// (0x00037b4e) listscroll_cale_day_pane_t1

0x118f,	// (0x00037b60) scroll_pane_cp09_ParamLimits

0x719a,	// (0x0003db6b) main_mup_eq_pane_t1_ParamLimits

0x719a,	// (0x0003db6b) main_mup_eq_pane_t1

0x71b6,	// (0x0003db87) main_mup_eq_pane_t2_ParamLimits

0x71b6,	// (0x0003db87) main_mup_eq_pane_t2

0x71d2,	// (0x0003dba3) main_mup_eq_pane_t3_ParamLimits

0x71d2,	// (0x0003dba3) main_mup_eq_pane_t3

0x71ec,	// (0x0003dbbd) main_mup_eq_pane_t4_ParamLimits

0x71ec,	// (0x0003dbbd) main_mup_eq_pane_t4

0x7206,	// (0x0003dbd7) main_mup_eq_pane_t5_ParamLimits

0x7206,	// (0x0003dbd7) main_mup_eq_pane_t5

0x7220,	// (0x0003dbf1) main_mup_eq_pane_t6_ParamLimits

0x7220,	// (0x0003dbf1) main_mup_eq_pane_t6

0x7236,	// (0x0003dc07) main_mup_eq_pane_t7_ParamLimits

0x7236,	// (0x0003dc07) main_mup_eq_pane_t7

0x724c,	// (0x0003dc1d) main_mup_eq_pane_t8_ParamLimits

0x724c,	// (0x0003dc1d) main_mup_eq_pane_t8

0x7262,	// (0x0003dc33) main_mup_eq_pane_t9_ParamLimits

0x7262,	// (0x0003dc33) main_mup_eq_pane_t9

0x727e,	// (0x0003dc4f) main_mup_eq_pane_t10_ParamLimits

0x727e,	// (0x0003dc4f) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x00045d4d) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x00045d4d) main_mup_eq_pane_t

0x7343,	// (0x0003dd14) mup_equalizer_pane_cp5_ParamLimits

0x735b,	// (0x0003dd2c) mup_equalizer_pane_cp6_ParamLimits

0x7373,	// (0x0003dd44) mup_equalizer_pane_cp7_ParamLimits

0xee90,	// (0x00045861) main_gallery_pane

0x29f4,	// (0x000393c5) smil2_volume_pane

0x2a0f,	// (0x000393e0) smil_status_volume_pane_g1_ParamLimits

0x29fc,	// (0x000393cd) smil_status_volume_pane_g2_ParamLimits

0x7d64,	// (0x0003e735) smil_status_volume_pane_g3_ParamLimits

0xf514,	// (0x00045ee5) smil_status_volume_pane_g_ParamLimits

0x2b95,	// (0x00039566) bg_popup_window_pane_cp07_ParamLimits

0x2ba3,	// (0x00039574) blid_firmament_pane

0x0b6d,	// (0x0003753e) aid_size_cell_gallery_ParamLimits

0x0b6d,	// (0x0003753e) aid_size_cell_gallery

0x0b6d,	// (0x0003753e) grid_gallery_pane_ParamLimits

0x0b6d,	// (0x0003753e) grid_gallery_pane

0x17d3,	// (0x000381a4) cell_gallery_pane_ParamLimits

0x17d3,	// (0x000381a4) cell_gallery_pane

0x0b14,	// (0x000374e5) bg_cell_gallery_focus_pane_ParamLimits

0x0b14,	// (0x000374e5) bg_cell_gallery_focus_pane

0x0b7b,	// (0x0003754c) cell_gallery_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) cell_gallery_pane_g1

0x0b7b,	// (0x0003754c) cell_gallery_pane_g2_ParamLimits

0x0b7b,	// (0x0003754c) cell_gallery_pane_g2

0x0b7b,	// (0x0003754c) cell_gallery_pane_g3_ParamLimits

0x0b7b,	// (0x0003754c) cell_gallery_pane_g3

0x0b89,	// (0x0003755a) cell_gallery_pane_g4_ParamLimits

0x0b89,	// (0x0003755a) cell_gallery_pane_g4

0x0003,

0xf5c0,	// (0x00045f91) cell_gallery_pane_g_ParamLimits

0xf5c0,	// (0x00045f91) cell_gallery_pane_g

0x2cf5,	// (0x000396c6) bg_cell_gallery_focus_pane_g1

0x2cfd,	// (0x000396ce) bg_cell_gallery_focus_pane_g2

0x2d05,	// (0x000396d6) bg_cell_gallery_focus_pane_g3

0x2d0d,	// (0x000396de) bg_cell_gallery_focus_pane_g4

0x2d15,	// (0x000396e6) bg_cell_gallery_focus_pane_g5

0x2d1d,	// (0x000396ee) bg_cell_gallery_focus_pane_g6

0x2d25,	// (0x000396f6) bg_cell_gallery_focus_pane_g7

0x2d2d,	// (0x000396fe) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5c9,	// (0x00045f9a) bg_cell_gallery_focus_pane_g

0x2d35,	// (0x00039706) aid_firma_cardinal

0x2d49,	// (0x0003971a) blid_firmament_pane_t1

0x2d60,	// (0x00039731) blid_firmament_pane_t2

0x2d77,	// (0x00039748) blid_firmament_pane_t3

0x2d8e,	// (0x0003975f) blid_firmament_pane_t4

0x0003,

0xf5da,	// (0x00045fab) blid_firmament_pane_t

0x2da5,	// (0x00039776) blid_sat_info_pane

0x0bb9,	// (0x0003758a) blid_sat_info_pane_g1

0x0bb9,	// (0x0003758a) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00045a5d) blid_sat_info_pane_g

0x2db5,	// (0x00039786) blid_sat_info_pane_t1

0x2dc3,	// (0x00039794) smil2_volume_content_pane

0x2dcc,	// (0x0003979d) smil2_volume_pane_g1

0x0c8e,	// (0x0003765f) smil2_volume_content_pane_g1

0x2dd4,	// (0x000397a5) smil2_volume_content_pane_g2

0x2ddd,	// (0x000397ae) smil2_volume_content_pane_g3

0x2de6,	// (0x000397b7) smil2_volume_content_pane_g4

0x2def,	// (0x000397c0) smil2_volume_content_pane_g5

0x2df8,	// (0x000397c9) smil2_volume_content_pane_g6

0x2e01,	// (0x000397d2) smil2_volume_content_pane_g7

0x2e0a,	// (0x000397db) smil2_volume_content_pane_g8

0x2e13,	// (0x000397e4) smil2_volume_content_pane_g9

0x2e1c,	// (0x000397ed) smil2_volume_content_pane_g10

0x0009,

0xf5e3,	// (0x00045fb4) smil2_volume_content_pane_g

0x5700,	// (0x0003c0d1) cale_week_day_heading_pane_t1_ParamLimits

0x5728,	// (0x0003c0f9) cale_week_day_heading_pane_t2_ParamLimits

0x5755,	// (0x0003c126) cale_week_day_heading_pane_t3_ParamLimits

0x5782,	// (0x0003c153) cale_week_day_heading_pane_t4_ParamLimits

0x57af,	// (0x0003c180) cale_week_day_heading_pane_t5_ParamLimits

0x57dc,	// (0x0003c1ad) cale_week_day_heading_pane_t6_ParamLimits

0x5809,	// (0x0003c1da) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00045af5) cale_week_day_heading_pane_t_ParamLimits

0x0db0,	// (0x00037781) bg_cale_side_pane_ParamLimits

0x5831,	// (0x0003c202) cale_week_time_pane_t1_ParamLimits

0x5855,	// (0x0003c226) cale_week_time_pane_t2_ParamLimits

0x5879,	// (0x0003c24a) cale_week_time_pane_t3_ParamLimits

0x589d,	// (0x0003c26e) cale_week_time_pane_t4_ParamLimits

0x58c1,	// (0x0003c292) cale_week_time_pane_t5_ParamLimits

0x58e7,	// (0x0003c2b8) cale_week_time_pane_t6_ParamLimits

0x590f,	// (0x0003c2e0) cale_week_time_pane_t7_ParamLimits

0x593b,	// (0x0003c30c) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00045b04) cale_week_time_pane_t_ParamLimits

0x596b,	// (0x0003c33c) cell_cale_week_pane_g2_ParamLimits

0x0db0,	// (0x00037781) bg_cale_side_pane_cp01_ParamLimits

0x6a1e,	// (0x0003d3ef) cale_month_week_pane_t1_ParamLimits

0x6a37,	// (0x0003d408) cale_month_week_pane_t2_ParamLimits

0x6a50,	// (0x0003d421) cale_month_week_pane_t3_ParamLimits

0x6a69,	// (0x0003d43a) cale_month_week_pane_t4_ParamLimits

0x6a82,	// (0x0003d453) cale_month_week_pane_t5_ParamLimits

0x6a9f,	// (0x0003d470) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00045bd2) cale_month_week_pane_t_ParamLimits

0x6bf0,	// (0x0003d5c1) cell_cale_month_pane_g1_ParamLimits

0xee90,	// (0x00045861) main_cale_event_viewer_pane

0xee90,	// (0x00045861) listscroll_cale_event_viewer_pane

0x2e25,	// (0x000397f6) list_cale_ev_pane

0x2e2d,	// (0x000397fe) scroll_pane_cp023

0x7faf,	// (0x0003e980) field_cale_ev_pane_ParamLimits

0x7faf,	// (0x0003e980) field_cale_ev_pane

0x2e39,	// (0x0003980a) field_cale_ev_content_pane_ParamLimits

0x2e39,	// (0x0003980a) field_cale_ev_content_pane

0x2e45,	// (0x00039816) field_cale_ev_pane_g1_ParamLimits

0x2e45,	// (0x00039816) field_cale_ev_pane_g1

0x2e51,	// (0x00039822) field_cale_ev_pane_g2_ParamLimits

0x2e51,	// (0x00039822) field_cale_ev_pane_g2

0x2e69,	// (0x0003983a) field_cale_ev_pane_g3_ParamLimits

0x2e69,	// (0x0003983a) field_cale_ev_pane_g3

0x0002,

0xf5f8,	// (0x00045fc9) field_cale_ev_pane_g_ParamLimits

0xf5f8,	// (0x00045fc9) field_cale_ev_pane_g

0x2e81,	// (0x00039852) field_cale_ev_pane_t1_ParamLimits

0x2e81,	// (0x00039852) field_cale_ev_pane_t1

0x7fd3,	// (0x0003e9a4) field_cale_ev_content_pane_t1_ParamLimits

0x7fd3,	// (0x0003e9a4) field_cale_ev_content_pane_t1

0x1878,	// (0x00038249) bg_button_pane_cp01

0x535e,	// (0x0003bd2f) listscroll_cale_week_pane_ParamLimits

0x114b,	// (0x00037b1c) popup_toolbar_window_cp01

0x0d81,	// (0x00037752) listscroll_cale_week_pane_t1_ParamLimits

0x535e,	// (0x0003bd2f) listscroll_cale_day_pane_ParamLimits

0x114b,	// (0x00037b1c) popup_toolbar_window_cp02

0x117d,	// (0x00037b4e) listscroll_cale_day_pane_t1_ParamLimits

0x535e,	// (0x0003bd2f) main_cale_month_pane_ParamLimits

0x7ca7,	// (0x0003e678) popup_toolbar_window_cp03_ParamLimits

0x7ca7,	// (0x0003e678) popup_toolbar_window_cp03

0x75f1,	// (0x0003dfc2) main_image_pane_g2_ParamLimits

0x75f1,	// (0x0003dfc2) main_image_pane_g2

0x75fd,	// (0x0003dfce) main_image_pane_g3_ParamLimits

0x75fd,	// (0x0003dfce) main_image_pane_g3

0x0002,

0xf40e,	// (0x00045ddf) main_image_pane_g_ParamLimits

0xf40e,	// (0x00045ddf) main_image_pane_g

0x198b,	// (0x0003835c) main_image_pane_t1_ParamLimits

0x7609,	// (0x0003dfda) main_image_pane_t2_ParamLimits

0x7609,	// (0x0003dfda) main_image_pane_t2

0x761b,	// (0x0003dfec) main_image_pane_t3_ParamLimits

0x761b,	// (0x0003dfec) main_image_pane_t3

0x762d,	// (0x0003dffe) main_image_pane_t4_ParamLimits

0x762d,	// (0x0003dffe) main_image_pane_t4

0x0003,

0xf415,	// (0x00045de6) main_image_pane_t_ParamLimits

0xf415,	// (0x00045de6) main_image_pane_t

0x763f,	// (0x0003e010) popup_image_details_window_cp01

0x7649,	// (0x0003e01a) popup_toobar_trans_pane_cp01_ParamLimits

0x7649,	// (0x0003e01a) popup_toobar_trans_pane_cp01

0x7be9,	// (0x0003e5ba) popup_image_details_window_ParamLimits

0x7be9,	// (0x0003e5ba) popup_image_details_window

0x7bf7,	// (0x0003e5c8) popup_image_focus_window

0x0b6d,	// (0x0003753e) camera2_autofocus_pane_ParamLimits

0x0b6d,	// (0x0003753e) camera2_autofocus_pane

0xee90,	// (0x00045861) bg_popup_sub_pane_cp06

0x2e98,	// (0x00039869) popup_image_focus_window_g1

0x2ea0,	// (0x00039871) popup_image_focus_window_g2

0x2ea8,	// (0x00039879) popup_image_focus_window_g3

0x2eb0,	// (0x00039881) popup_image_focus_window_g4

0x0003,

0xf5ff,	// (0x00045fd0) popup_image_focus_window_g

0x2eb8,	// (0x00039889) popup_image_focus_window_t1

0x2ec6,	// (0x00039897) popup_image_focus_window_t2

0x2ed6,	// (0x000398a7) popup_image_focus_window_t3

0x0002,

0xf608,	// (0x00045fd9) popup_image_focus_window_t

0x0b7b,	// (0x0003754c) camera2_autofocus_pane_g1

0x0b14,	// (0x000374e5) bg_tb_trans_pane_cp01

0x2ee4,	// (0x000398b5) popup_image_details_window_g1

0x2ef7,	// (0x000398c8) popup_image_details_window_g2

0x0002,

0xf61a,	// (0x00045feb) popup_image_details_window_g

0x2f20,	// (0x000398f1) popup_image_details_window_t1

0x2f32,	// (0x00039903) popup_image_details_window_t2

0x2f4b,	// (0x0003991c) popup_image_details_window_t3

0x2f5f,	// (0x00039930) popup_image_details_window_t4

0x2f7a,	// (0x0003994b) popup_image_details_window_t5

0x0004,

0xf621,	// (0x00045ff2) popup_image_details_window_t

0x0c03,	// (0x000375d4) bg_calc_paper_pane_ParamLimits

0xee90,	// (0x00045861) grid_highlight_pane_cp013

0x5154,	// (0x0003bb25) list_calc_pane_ParamLimits

0x5166,	// (0x0003bb37) scroll_pane_cp024

0x0c17,	// (0x000375e8) bg_calc_display_pane_ParamLimits

0x516e,	// (0x0003bb3f) calc_display_pane_t1_ParamLimits

0x5183,	// (0x0003bb54) calc_display_pane_t2_ParamLimits

0x5198,	// (0x0003bb69) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00045a75) calc_display_pane_t_ParamLimits

0x5268,	// (0x0003bc39) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00045a92) cell_calc_pane_g

0x5271,	// (0x0003bc42) cell_calc_pane_t1

0x0c6c,	// (0x0003763d) grid_highlight_pane_cp02_ParamLimits

0x0c82,	// (0x00037653) toolbar_button_pane_cp01_ParamLimits

0x0c82,	// (0x00037653) toolbar_button_pane_cp01

0x19d0,	// (0x000383a1) temp_image_control_pane_ParamLimits

0x19d0,	// (0x000383a1) temp_image_control_pane

0x0b14,	// (0x000374e5) main_mp3_pane

0x2f94,	// (0x00039965) temp_image_control_pane_g1_ParamLimits

0x2f94,	// (0x00039965) temp_image_control_pane_g1

0x2fa2,	// (0x00039973) temp_image_control_pane_g2_ParamLimits

0x2fa2,	// (0x00039973) temp_image_control_pane_g2

0x2fb4,	// (0x00039985) temp_image_control_pane_g3_ParamLimits

0x2fb4,	// (0x00039985) temp_image_control_pane_g3

0x7fee,	// (0x0003e9bf) temp_image_control_pane_g4_ParamLimits

0x7fee,	// (0x0003e9bf) temp_image_control_pane_g4

0x0003,

0xf62c,	// (0x00045ffd) temp_image_control_pane_g_ParamLimits

0xf62c,	// (0x00045ffd) temp_image_control_pane_g

0x2f94,	// (0x00039965) main_mp3_pane_g1

0x7fff,	// (0x0003e9d0) main_mp3_pane_g2

0x0007,

0xf635,	// (0x00046006) main_mp3_pane_g

0x2fe9,	// (0x000399ba) main_mp3_pane_t1

0x0b89,	// (0x0003755a) main_camera_pane_g8_ParamLimits

0x0b89,	// (0x0003755a) main_camera_pane_g8

0x5b17,	// (0x0003c4e8) main_video_pane_g7_ParamLimits

0x5b17,	// (0x0003c4e8) main_video_pane_g7

0x0bd7,	// (0x000375a8) main_camera2_pane_t7_ParamLimits

0x0bd7,	// (0x000375a8) main_camera2_pane_t7

0x0f2c,	// (0x000378fd) scroll_pane_cp025_ParamLimits

0x0f2c,	// (0x000378fd) scroll_pane_cp025

0x0f40,	// (0x00037911) scroll_pane_cp026_ParamLimits

0x0f40,	// (0x00037911) scroll_pane_cp026

0x0f4f,	// (0x00037920) wml_content_pane_ParamLimits

0xee90,	// (0x00045861) main_touch_calib_pane

0x80a3,	// (0x0003ea74) main_touch_calib_pane_g1

0x80af,	// (0x0003ea80) main_touch_calib_pane_g2

0x80bb,	// (0x0003ea8c) main_touch_calib_pane_g3

0x80c7,	// (0x0003ea98) main_touch_calib_pane_g4

0x0003,

0xf653,	// (0x00046024) main_touch_calib_pane_g

0x80d3,	// (0x0003eaa4) main_touch_calib_pane_t1

0x80ea,	// (0x0003eabb) main_touch_calib_pane_t2

0x0004,

0xf65c,	// (0x0004602d) main_touch_calib_pane_t

0x163b,	// (0x0003800c) mup_progress_pane_cp02

0x165a,	// (0x0003802b) navi_pane_g1

0x16bc,	// (0x0003808d) navi_pane_mp_t3

0x0b14,	// (0x000374e5) main_mp3_pane_ParamLimits

0x7ce8,	// (0x0003e6b9) navi_pane_ParamLimits

0x2f94,	// (0x00039965) main_mp3_pane_g1_ParamLimits

0x7fff,	// (0x0003e9d0) main_mp3_pane_g2_ParamLimits

0x800b,	// (0x0003e9dc) main_mp3_pane_g3_ParamLimits

0x800b,	// (0x0003e9dc) main_mp3_pane_g3

0x8017,	// (0x0003e9e8) main_mp3_pane_g4_ParamLimits

0x8017,	// (0x0003e9e8) main_mp3_pane_g4

0x0b7b,	// (0x0003754c) main_mp3_pane_g5_ParamLimits

0x0b7b,	// (0x0003754c) main_mp3_pane_g5

0x2fc4,	// (0x00039995) main_mp3_pane_g6_ParamLimits

0x2fc4,	// (0x00039995) main_mp3_pane_g6

0x2fd1,	// (0x000399a2) main_mp3_pane_g7_ParamLimits

0x2fd1,	// (0x000399a2) main_mp3_pane_g7

0x2fdd,	// (0x000399ae) main_mp3_pane_g8_ParamLimits

0x2fdd,	// (0x000399ae) main_mp3_pane_g8

0xf635,	// (0x00046006) main_mp3_pane_g_ParamLimits

0x8023,	// (0x0003e9f4) main_mp3_pane_t2

0x8033,	// (0x0003ea04) main_mp3_pane_t3

0x2ff7,	// (0x000399c8) main_mp3_pane_t4

0x3005,	// (0x000399d6) main_mp3_pane_t5

0x0005,

0xf646,	// (0x00046017) main_mp3_pane_t

0x3013,	// (0x000399e4) mup_progress_pane_cp01

0x4e6d,	// (0x0003b83e) aid_zoom_text_secondary2

0x2e25,	// (0x000397f6) list_cale_ev2_pane

0x2e2d,	// (0x000397fe) scroll_pane_cp023_ParamLimits

0x8145,	// (0x0003eb16) field_cale_ev2_pane_ParamLimits

0x8145,	// (0x0003eb16) field_cale_ev2_pane

0x44e4,	// (0x0003aeb5) field_cale_ev2_pane_g1_ParamLimits

0x44e4,	// (0x0003aeb5) field_cale_ev2_pane_g1

0x44f0,	// (0x0003aec1) field_cale_ev2_pane_g2_ParamLimits

0x44f0,	// (0x0003aec1) field_cale_ev2_pane_g2

0x4508,	// (0x0003aed9) field_cale_ev2_pane_g3_ParamLimits

0x4508,	// (0x0003aed9) field_cale_ev2_pane_g3

0x0003,

0xf667,	// (0x00046038) field_cale_ev2_pane_g_ParamLimits

0xf667,	// (0x00046038) field_cale_ev2_pane_g

0x452c,	// (0x0003aefd) field_cale_ev2_pane_t1_ParamLimits

0x452c,	// (0x0003aefd) field_cale_ev2_pane_t1

0x4543,	// (0x0003af14) field_cale_ev2_pane_t2_ParamLimits

0x4543,	// (0x0003af14) field_cale_ev2_pane_t2

0x0001,

0xf670,	// (0x00046041) field_cale_ev2_pane_t_ParamLimits

0xf670,	// (0x00046041) field_cale_ev2_pane_t

0x74f9,	// (0x0003deca) main_postcard_pane_g5_ParamLimits

0x74f9,	// (0x0003deca) main_postcard_pane_g5

0x7507,	// (0x0003ded8) main_postcard_pane_g6_ParamLimits

0x7507,	// (0x0003ded8) main_postcard_pane_g6

0x0b6d,	// (0x0003753e) camera2_autofocus_pane_cp_ParamLimits

0x0b6d,	// (0x0003753e) camera2_autofocus_pane_cp

0x0b14,	// (0x000374e5) main_mup3_pane

0x81a3,	// (0x0003eb74) main_mup3_pane_g1_ParamLimits

0x81a3,	// (0x0003eb74) main_mup3_pane_g1

0x81f2,	// (0x0003ebc3) main_mup3_pane_g2_ParamLimits

0x81f2,	// (0x0003ebc3) main_mup3_pane_g2

0x824d,	// (0x0003ec1e) main_mup3_pane_g3_ParamLimits

0x824d,	// (0x0003ec1e) main_mup3_pane_g3

0x82b0,	// (0x0003ec81) main_mup3_pane_g4_ParamLimits

0x82b0,	// (0x0003ec81) main_mup3_pane_g4

0x8313,	// (0x0003ece4) main_mup3_pane_g5_ParamLimits

0x8313,	// (0x0003ece4) main_mup3_pane_g5

0x8376,	// (0x0003ed47) main_mup3_pane_g6_ParamLimits

0x8376,	// (0x0003ed47) main_mup3_pane_g6

0x0b89,	// (0x0003755a) main_mup3_pane_g7_ParamLimits

0x0b89,	// (0x0003755a) main_mup3_pane_g7

0x0007,

0xf680,	// (0x00046051) main_mup3_pane_g_ParamLimits

0xf680,	// (0x00046051) main_mup3_pane_g

0x83ee,	// (0x0003edbf) main_mup3_pane_t1_ParamLimits

0x83ee,	// (0x0003edbf) main_mup3_pane_t1

0x84c7,	// (0x0003ee98) main_mup3_pane_t2_ParamLimits

0x84c7,	// (0x0003ee98) main_mup3_pane_t2

0x85a4,	// (0x0003ef75) main_mup3_pane_t4_ParamLimits

0x85a4,	// (0x0003ef75) main_mup3_pane_t4

0x85b6,	// (0x0003ef87) main_mup3_pane_t5_ParamLimits

0x85b6,	// (0x0003ef87) main_mup3_pane_t5

0x8684,	// (0x0003f055) main_mup3_pane_t6_ParamLimits

0x8684,	// (0x0003f055) main_mup3_pane_t6

0x0005,

0xf691,	// (0x00046062) main_mup3_pane_t_ParamLimits

0xf691,	// (0x00046062) main_mup3_pane_t

0x8721,	// (0x0003f0f2) mup3_progress_pane_ParamLimits

0x8721,	// (0x0003f0f2) mup3_progress_pane

0xd0e4,	// (0x00043ab5) popup_mup3_control_window_ParamLimits

0xd0e4,	// (0x00043ab5) popup_mup3_control_window

0x3027,	// (0x000399f8) popup_mup3_text_window

0x8784,	// (0x0003f155) mup3_progress_pane_t1

0x879a,	// (0x0003f16b) mup3_progress_pane_t2

0x302f,	// (0x00039a00) mup3_progress_pane_t3

0x0002,

0xf69e,	// (0x0004606f) mup3_progress_pane_t

0x3046,	// (0x00039a17) mup_progress_pane_cp03

0x3057,	// (0x00039a28) bg_tb_trans_pane_cp04

0x3057,	// (0x00039a28) mup3_volume_pane

0x305f,	// (0x00039a30) popup_mup3_control_window_g1

0x305f,	// (0x00039a30) mup3_volume_pane_g1

0x305f,	// (0x00039a30) mup3_volume_pane_g2

0x305f,	// (0x00039a30) mup3_volume_pane_g3

0x0002,

0xf6a5,	// (0x00046076) mup3_volume_pane_g

0xee90,	// (0x00045861) bg_tb_trans_pane_cp03

0x3067,	// (0x00039a38) popup_mup3_text_window_g1

0x306f,	// (0x00039a40) popup_mup3_text_window_t1

0x0c5f,	// (0x00037630) list_calc_item_pane_g1_ParamLimits

0x2b0b,	// (0x000394dc) mup_volume_pane_cp_g1

0x8103,	// (0x0003ead4) main_touch_calib_pane_t3

0x8119,	// (0x0003eaea) main_touch_calib_pane_t4

0x812f,	// (0x0003eb00) main_touch_calib_pane_t5

0x4e25,	// (0x0003b7f6) aid_cell_size_toolbar2

0x4e2d,	// (0x0003b7fe) aid_popup3_width_pane

0x4317,	// (0x0003ace8) aid_zoom_text_msg_primary

0x5a17,	// (0x0003c3e8) vorec_t7

0x0c23,	// (0x000375f4) bg_calc_paper_pane_g1_ParamLimits

0x0c3b,	// (0x0003760c) bg_calc_paper_pane_g2_ParamLimits

0x0c2f,	// (0x00037600) bg_calc_paper_pane_g3_ParamLimits

0x0c53,	// (0x00037624) bg_calc_paper_pane_g4_ParamLimits

0x0c47,	// (0x00037618) bg_calc_paper_pane_g5_ParamLimits

0x51d9,	// (0x0003bbaa) bg_calc_paper_pane_g6_ParamLimits

0x51ea,	// (0x0003bbbb) bg_calc_paper_pane_g7_ParamLimits

0x51fb,	// (0x0003bbcc) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00045a7c) bg_calc_paper_pane_g_ParamLimits

0x520c,	// (0x0003bbdd) calc_bg_paper_pane_g9_ParamLimits

0x0b6d,	// (0x0003753e) image_qvga_pane_ParamLimits

0x0b6d,	// (0x0003753e) image_qvga_pane

0x0af2,	// (0x000374c3) bg_popup_sub_pane_cp04_ParamLimits

0x1907,	// (0x000382d8) popup_mup_playback_window_g1_ParamLimits

0x1913,	// (0x000382e4) popup_mup_playback_window_t1_ParamLimits

0x1928,	// (0x000382f9) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x00045dda) popup_mup_playback_window_t_ParamLimits

0x0b7b,	// (0x0003754c) main_mup2_pane_g3_ParamLimits

0x0b7b,	// (0x0003754c) main_mup2_pane_g3

0x5cb8,	// (0x0003c689) popup_toolbar_window_cp04

0x1cac,	// (0x0003867d) popup_call2_audio_second_window_g3_ParamLimits

0x1cac,	// (0x0003867d) popup_call2_audio_second_window_g3

0x20c4,	// (0x00038a95) popup_call2_audio_first_window_g4_ParamLimits

0x20c4,	// (0x00038a95) popup_call2_audio_first_window_g4

0x26eb,	// (0x000390bc) popup_call2_audio_in_window_g4_ParamLimits

0x26eb,	// (0x000390bc) popup_call2_audio_in_window_g4

0x75e4,	// (0x0003dfb5) aid_area_sk_bg_cut_ParamLimits

0x75e4,	// (0x0003dfb5) aid_area_sk_bg_cut

0x193d,	// (0x0003830e) aid_area_sk_bg_cut_2_ParamLimits

0x193d,	// (0x0003830e) aid_area_sk_bg_cut_2

0xee90,	// (0x00045861) aid_placing_details_win

0xee90,	// (0x00045861) aid_placing_details_win_2

0x0b7b,	// (0x0003754c) camera2_autofocus_pane_g1_ParamLimits

0x4fe4,	// (0x0003b9b5) popup_fixed_preview_cale_window_ParamLimits

0x4fe4,	// (0x0003b9b5) popup_fixed_preview_cale_window

0x1715,	// (0x000380e6) navi_slider_pane_g3

0x170c,	// (0x000380dd) navi_slider_pane_g4

0x1703,	// (0x000380d4) navi_slider_pane_g5

0x1715,	// (0x000380e6) navi_slider_pane_g6

0x716e,	// (0x0003db3f) navi_slider_pane_g7

0x1845,	// (0x00038216) mup_scale_pane_g3

0x184e,	// (0x0003821f) mup_scale_pane_g4

0x1857,	// (0x00038228) mup_scale_pane_g5

0x738b,	// (0x0003dd5c) mup_scale_pane_g6

0x7394,	// (0x0003dd65) mup_scale_pane_g7

0x0bb9,	// (0x0003758a) cams2_slider_pane_g3

0x0bb9,	// (0x0003758a) cams2_slider_pane_g4

0x0bb9,	// (0x0003758a) cams2_slider_pane_g5

0x0bb9,	// (0x0003758a) cams2_slider_pane_g6

0x0bb9,	// (0x0003758a) cams2_slider_pane_g7

0x0bb9,	// (0x0003758a) camera2_autofocus_pane_cp_g1

0x297b,	// (0x0003934c) bg_popup_preview_window_pane_cp02_ParamLimits

0x297b,	// (0x0003934c) bg_popup_preview_window_pane_cp02

0x307d,	// (0x00039a4e) list_fp_cale_pane_ParamLimits

0x307d,	// (0x00039a4e) list_fp_cale_pane

0x3089,	// (0x00039a5a) popup_fixed_preview_cale_window_t1_ParamLimits

0x3089,	// (0x00039a5a) popup_fixed_preview_cale_window_t1

0x87b0,	// (0x0003f181) popup_fixed_preview_cale_window_t2_ParamLimits

0x87b0,	// (0x0003f181) popup_fixed_preview_cale_window_t2

0x87c5,	// (0x0003f196) popup_fixed_preview_cale_window_t3_ParamLimits

0x87c5,	// (0x0003f196) popup_fixed_preview_cale_window_t3

0x0002,

0xf6ac,	// (0x0004607d) popup_fixed_preview_cale_window_t_ParamLimits

0xf6ac,	// (0x0004607d) popup_fixed_preview_cale_window_t

0x87da,	// (0x0003f1ab) list_single_fp_cale_pane_ParamLimits

0x87da,	// (0x0003f1ab) list_single_fp_cale_pane

0x30a7,	// (0x00039a78) list_single_fp_cale_pane_g1_ParamLimits

0x30a7,	// (0x00039a78) list_single_fp_cale_pane_g1

0x30b3,	// (0x00039a84) list_single_fp_cale_pane_g2_ParamLimits

0x30b3,	// (0x00039a84) list_single_fp_cale_pane_g2

0x0002,

0xf6b3,	// (0x00046084) list_single_fp_cale_pane_g_ParamLimits

0xf6b3,	// (0x00046084) list_single_fp_cale_pane_g

0x30cc,	// (0x00039a9d) list_single_fp_cale_pane_t1_ParamLimits

0x30cc,	// (0x00039a9d) list_single_fp_cale_pane_t1

0x30de,	// (0x00039aaf) list_single_fp_cale_pane_t2_ParamLimits

0x30de,	// (0x00039aaf) list_single_fp_cale_pane_t2

0x0001,

0xf6ba,	// (0x0004608b) list_single_fp_cale_pane_t_ParamLimits

0xf6ba,	// (0x0004608b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xee90,	// (0x00045861) main_dialer_pane

0xee90,	// (0x00045861) aid_cell_size_keypad

0xee90,	// (0x00045861) dialer_ne_pane

0xee90,	// (0x00045861) grid_dialer_command_1_pane

0xee90,	// (0x00045861) grid_dialer_command_2_pane

0xee90,	// (0x00045861) grid_dialer_keypad_pane

0x2b95,	// (0x00039566) bg_popup_call_pane_cp06_ParamLimits

0x2b95,	// (0x00039566) bg_popup_call_pane_cp06

0x2b95,	// (0x00039566) dialer_ne_clear_pane_ParamLimits

0x2b95,	// (0x00039566) dialer_ne_clear_pane

0x0bb9,	// (0x0003758a) dialer_ne_pane_g1

0x0bd7,	// (0x000375a8) dialer_ne_pane_t1_ParamLimits

0x0bd7,	// (0x000375a8) dialer_ne_pane_t1

0x3342,	// (0x00039d13) dialer_ne_pane_t2_ParamLimits

0x3342,	// (0x00039d13) dialer_ne_pane_t2

0x87ea,	// (0x0003f1bb) dialer_ne_pane_t3_ParamLimits

0x87ea,	// (0x0003f1bb) dialer_ne_pane_t3

0x0002,

0xf6bf,	// (0x00046090) dialer_ne_pane_t_ParamLimits

0xf6bf,	// (0x00046090) dialer_ne_pane_t

0x87ea,	// (0x0003f1bb) dialer_ne_pane_t3_copy1_ParamLimits

0x87ea,	// (0x0003f1bb) dialer_ne_pane_t3_copy1

0x3111,	// (0x00039ae2) cell_dialer_keypad_pane_ParamLimits

0x3111,	// (0x00039ae2) cell_dialer_keypad_pane

0x0b14,	// (0x000374e5) cell_dialer_command_1_pane_ParamLimits

0x0b14,	// (0x000374e5) cell_dialer_command_1_pane

0x3128,	// (0x00039af9) cell_dialer_command_2_pane_ParamLimits

0x3128,	// (0x00039af9) cell_dialer_command_2_pane

0x0b14,	// (0x000374e5) bg_button_pane_cp02_ParamLimits

0x0b14,	// (0x000374e5) bg_button_pane_cp02

0x0b7b,	// (0x0003754c) cell_dialer_keypad_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) cell_dialer_keypad_pane_g1

0x0b14,	// (0x000374e5) bg_button_pane_cp03_ParamLimits

0x0b14,	// (0x000374e5) bg_button_pane_cp03

0x0b7b,	// (0x0003754c) cell_dialer_command_1_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) cell_dialer_command_1_pane_g1

0xee90,	// (0x00045861) bg_button_pane_cp04

0x0bb9,	// (0x0003758a) cell_dialer_command_2_pane_g1

0xee90,	// (0x00045861) bg_button_pane_cp06

0x0bb9,	// (0x0003758a) dialer_ne_clear_pane_g1

0x70a9,	// (0x0003da7a) navi_pane_g2

0x70d7,	// (0x0003daa8) navi_pane_g3

0x0002,

0xf311,	// (0x00045ce2) navi_pane_g

0x7102,	// (0x0003dad3) navi_pane_mv_g2

0x7129,	// (0x0003dafa) navi_pane_mv_g5

0x7131,	// (0x0003db02) navi_pane_mv_t1

0x0c17,	// (0x000375e8) main_clock2_pane

0x0b6d,	// (0x0003753e) main_clock2_list_pane_ParamLimits

0x0b6d,	// (0x0003753e) main_clock2_list_pane

0x885f,	// (0x0003f230) main_clock2_pane_t1_ParamLimits

0x885f,	// (0x0003f230) main_clock2_pane_t1

0x888d,	// (0x0003f25e) main_clock2_pane_t2_ParamLimits

0x888d,	// (0x0003f25e) main_clock2_pane_t2

0x0004,

0xf6cb,	// (0x0004609c) main_clock2_pane_t_ParamLimits

0xf6cb,	// (0x0004609c) main_clock2_pane_t

0x88f2,	// (0x0003f2c3) popup_clock_analogue_window_cp03_ParamLimits

0x88f2,	// (0x0003f2c3) popup_clock_analogue_window_cp03

0x8910,	// (0x0003f2e1) popup_clock_digital_window_cp02_ParamLimits

0x8910,	// (0x0003f2e1) popup_clock_digital_window_cp02

0x8985,	// (0x0003f356) main_clock2_list_single_pane_ParamLimits

0x8985,	// (0x0003f356) main_clock2_list_single_pane

0x0e0b,	// (0x000377dc) list_highlight_pane_cp05

0x3169,	// (0x00039b3a) main_clock2_list_single_pane_t1

0x5cb8,	// (0x0003c689) popup_toolbar_window_cp04_ParamLimits

0x0b89,	// (0x0003755a) camera2_autofocus_pane_g2_ParamLimits

0x0b89,	// (0x0003755a) camera2_autofocus_pane_g2

0x0b89,	// (0x0003755a) camera2_autofocus_pane_g3_ParamLimits

0x0b89,	// (0x0003755a) camera2_autofocus_pane_g3

0x0b89,	// (0x0003755a) camera2_autofocus_pane_g4_ParamLimits

0x0b89,	// (0x0003755a) camera2_autofocus_pane_g4

0x0b89,	// (0x0003755a) camera2_autofocus_pane_g5_ParamLimits

0x0b89,	// (0x0003755a) camera2_autofocus_pane_g5

0x0004,

0xf60f,	// (0x00045fe0) camera2_autofocus_pane_g_ParamLimits

0xf60f,	// (0x00045fe0) camera2_autofocus_pane_g

0x8160,	// (0x0003eb31) camera2_autofocus_pane_cp_g2

0x8168,	// (0x0003eb39) camera2_autofocus_pane_cp_g3

0x8170,	// (0x0003eb41) camera2_autofocus_pane_cp_g4

0x8178,	// (0x0003eb49) camera2_autofocus_pane_cp_g5

0x0004,

0xf675,	// (0x00046046) camera2_autofocus_pane_cp_g

0xee90,	// (0x00045861) popup_dialer_spcha_window

0xee90,	// (0x00045861) bg_popup_sub_pane_cp07

0xee90,	// (0x00045861) list_spcha_pane

0x3177,	// (0x00039b48) list_single_spcha_pane_ParamLimits

0x3177,	// (0x00039b48) list_single_spcha_pane

0xee90,	// (0x00045861) list_highlight_pane_cp06

0x1332,	// (0x00037d03) list_single_spcha_pane_t1

0x2495,	// (0x00038e66) popup_call2_audio_out_window_g4_ParamLimits

0x2495,	// (0x00038e66) popup_call2_audio_out_window_g4

0xee90,	// (0x00045861) main_imed2_pane

0x7c01,	// (0x0003e5d2) popup_imed_adjust2_window

0x7c14,	// (0x0003e5e5) popup_imed_trans_window_ParamLimits

0x7c14,	// (0x0003e5e5) popup_imed_trans_window

0x2bee,	// (0x000395bf) popup_blid_sat_info2_window_t1

0x2bfc,	// (0x000395cd) popup_blid_sat_info2_window_t2

0x000a,

0xf5a4,	// (0x00045f75) popup_blid_sat_info2_window_t

0x8a3c,	// (0x0003f40d) aid_size_cell_colour_35

0x8a56,	// (0x0003f427) aid_size_cell_colour_112

0x8a6d,	// (0x0003f43e) aid_size_cell_effect

0x0b14,	// (0x000374e5) bg_tb_trans_pane_cp02

0x12fe,	// (0x00037ccf) heading_imed_pane

0x8a87,	// (0x0003f458) listscroll_imed_pane

0x3189,	// (0x00039b5a) heading_imed_pane_g1

0x3191,	// (0x00039b62) heading_imed_pane_t1

0x319f,	// (0x00039b70) grid_imed_colour_35_pane_ParamLimits

0x319f,	// (0x00039b70) grid_imed_colour_35_pane

0x8a93,	// (0x0003f464) grid_imed_effect_pane

0x31bb,	// (0x00039b8c) list_imed_aspect_pane

0x8aa3,	// (0x0003f474) scroll_pane_cp027_ParamLimits

0x8aa3,	// (0x0003f474) scroll_pane_cp027

0x8aaf,	// (0x0003f480) cell_imed_effect_pane_ParamLimits

0x8aaf,	// (0x0003f480) cell_imed_effect_pane

0x31c3,	// (0x00039b94) cell_imed_colour_pane_ParamLimits

0x31c3,	// (0x00039b94) cell_imed_colour_pane

0x320d,	// (0x00039bde) cell_imed_colour_pane_g1_ParamLimits

0x320d,	// (0x00039bde) cell_imed_colour_pane_g1

0x321e,	// (0x00039bef) hgihlgiht_grid_pane_cp016_ParamLimits

0x321e,	// (0x00039bef) hgihlgiht_grid_pane_cp016

0x8acb,	// (0x0003f49c) cell_imed_effect_pane_g1

0x8ad3,	// (0x0003f4a4) grid_highlight_pane_cp017

0x322f,	// (0x00039c00) list_imed_single_pane_ParamLimits

0x322f,	// (0x00039c00) list_imed_single_pane

0xee90,	// (0x00045861) list_highlight_pane_cp07

0x3243,	// (0x00039c14) list_imed_aspect_pane_comp1_t1

0x17d3,	// (0x000381a4) bg_tb_trans_pane_cp05

0x3265,	// (0x00039c36) popup_imed_adjust2_window_g1

0x328c,	// (0x00039c5d) popup_imed_adjust2_window_t1

0x32a4,	// (0x00039c75) slider_imed_adjust_pane

0x32b8,	// (0x00039c89) slider_imed_adjust_pane_g1

0x32c8,	// (0x00039c99) slider_imed_adjust_pane_g2

0x32d8,	// (0x00039ca9) slider_imed_adjust_pane_g3

0x32e9,	// (0x00039cba) slider_imed_adjust_pane_g4

0x0003,

0xf6e8,	// (0x000460b9) slider_imed_adjust_pane_g

0x8adc,	// (0x0003f4ad) aid_size_cell_clipart2

0x32fa,	// (0x00039ccb) grid_imed_clipart_pane

0x1868,	// (0x00038239) scroll_pane_cp031

0x8ae8,	// (0x0003f4b9) cell_imed_clipart_pane_ParamLimits

0x8ae8,	// (0x0003f4b9) cell_imed_clipart_pane

0x8b06,	// (0x0003f4d7) cell_imed_clipart_pane_g1

0xee90,	// (0x00045861) grid_highlight_pane_cp014

0x8841,	// (0x0003f212) main_clock2_pane_g1_ParamLimits

0x8841,	// (0x0003f212) main_clock2_pane_g1

0x892c,	// (0x0003f2fd) aid_call2_pane_cp10

0x893e,	// (0x0003f30f) aid_call_pane_cp10

0x162f,	// (0x00038000) popup_clock_analogue_window_cp10_g1

0x162f,	// (0x00038000) popup_clock_analogue_window_cp10_g2

0x8950,	// (0x0003f321) popup_clock_analogue_window_cp10_g3

0x8950,	// (0x0003f321) popup_clock_analogue_window_cp10_g4

0x162f,	// (0x00038000) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6d6,	// (0x000460a7) popup_clock_analogue_window_cp10_g

0x8966,	// (0x0003f337) popup_clock_analogue_window_cp10_t1

0x8997,	// (0x0003f368) clock_digital_number_pane_cp10_ParamLimits

0x8997,	// (0x0003f368) clock_digital_number_pane_cp10

0x89b1,	// (0x0003f382) clock_digital_number_pane_cp11_ParamLimits

0x89b1,	// (0x0003f382) clock_digital_number_pane_cp11

0x89cb,	// (0x0003f39c) clock_digital_number_pane_cp12_ParamLimits

0x89cb,	// (0x0003f39c) clock_digital_number_pane_cp12

0x89e5,	// (0x0003f3b6) clock_digital_number_pane_cp13_ParamLimits

0x89e5,	// (0x0003f3b6) clock_digital_number_pane_cp13

0x8a01,	// (0x0003f3d2) clock_digital_separator_pane_cp10_ParamLimits

0x8a01,	// (0x0003f3d2) clock_digital_separator_pane_cp10

0x8a1b,	// (0x0003f3ec) popup_clock_digital_window_cp02_t1_ParamLimits

0x8a1b,	// (0x0003f3ec) popup_clock_digital_window_cp02_t1

0x0aea,	// (0x000374bb) clock_digital_number_pane_cp10_g1

0x0aea,	// (0x000374bb) clock_digital_number_pane_cp10_g2

0x0001,

0xf6f1,	// (0x000460c2) clock_digital_number_pane_cp10_g

0x0aea,	// (0x000374bb) clock_digital_separator_pane_cp10_g1

0x0aea,	// (0x000374bb) clock_digital_separator_pane_g2_cp10

0x16ca,	// (0x0003809b) navi_pane_vded_g4

0x16d3,	// (0x000380a4) navi_pane_vded_g5

0x16dc,	// (0x000380ad) navi_pane_vded_t1

0xee90,	// (0x00045861) main_vded_pane

0x8b0f,	// (0x0003f4e0) main_vded_pane_g1

0x8b1b,	// (0x0003f4ec) main_vded_pane_g2

0x8b25,	// (0x0003f4f6) main_vded_pane_g3

0x0002,

0xf6f6,	// (0x000460c7) main_vded_pane_g

0x8b2f,	// (0x0003f500) main_vded_pane_t1

0x8b3d,	// (0x0003f50e) main_vded_pane_t2

0x0001,

0xf6fd,	// (0x000460ce) main_vded_pane_t

0x8b4b,	// (0x0003f51c) vded_slider_pane

0x8b55,	// (0x0003f526) vded_video_pane

0x3304,	// (0x00039cd5) vded_video_pane_g1

0x8b61,	// (0x0003f532) vded_video_pane_g2

0x0bb9,	// (0x0003758a) vded_video_pane_g3

0x0002,

0xf702,	// (0x000460d3) vded_video_pane_g

0x330e,	// (0x00039cdf) vded_slider_pane_g1

0x2b0b,	// (0x000394dc) vded_slider_pane_g2

0x3317,	// (0x00039ce8) vded_slider_pane_g3

0x3320,	// (0x00039cf1) vded_slider_pane_g4

0x3329,	// (0x00039cfa) vded_slider_pane_g5

0x0004,

0xf709,	// (0x000460da) vded_slider_pane_g

0xd0e4,	// (0x00043ab5) mup3_rocker_pane_ParamLimits

0xd0e4,	// (0x00043ab5) mup3_rocker_pane

0x305f,	// (0x00039a30) mup3_control_keys_pane_g1

0x3332,	// (0x00039d03) mup3_control_keys_pane_g2

0x305f,	// (0x00039a30) mup3_control_keys_pane_g3

0x333a,	// (0x00039d0b) mup3_control_keys_pane_g4

0x0003,

0xf714,	// (0x000460e5) mup3_control_keys_pane_g

0x500c,	// (0x0003b9dd) popup_toolbar2_fixed_window_cp01_ParamLimits

0x500c,	// (0x0003b9dd) popup_toolbar2_fixed_window_cp01

0xd0e4,	// (0x00043ab5) popup_toolbar2_fixed_window_cp02_ParamLimits

0xd0e4,	// (0x00043ab5) popup_toolbar2_fixed_window_cp02

0x1e1e,	// (0x000387ef) popup_call2_audio_second_window_t4_ParamLimits

0x1e1e,	// (0x000387ef) popup_call2_audio_second_window_t4

0x235a,	// (0x00038d2b) popup_call2_audio_first_window_t6_ParamLimits

0x235a,	// (0x00038d2b) popup_call2_audio_first_window_t6

0x2598,	// (0x00038f69) popup_call2_audio_out_window_t6_ParamLimits

0x2598,	// (0x00038f69) popup_call2_audio_out_window_t6

0xee90,	// (0x00045861) main_vitu_pane

0x0b6d,	// (0x0003753e) aid_size_cell_itu_ParamLimits

0x0b6d,	// (0x0003753e) aid_size_cell_itu

0x0b6d,	// (0x0003753e) bg_popup_window_pane_cp08_ParamLimits

0x0b6d,	// (0x0003753e) bg_popup_window_pane_cp08

0x0b6d,	// (0x0003753e) field_vitu_entry_pane_ParamLimits

0x0b6d,	// (0x0003753e) field_vitu_entry_pane

0x0b6d,	// (0x0003753e) grid_vitu_function_pane_ParamLimits

0x0b6d,	// (0x0003753e) grid_vitu_function_pane

0x0b6d,	// (0x0003753e) grid_vitu_itu_pane_ParamLimits

0x0b6d,	// (0x0003753e) grid_vitu_itu_pane

0x0b6d,	// (0x0003753e) cell_vitu_itu_pane_ParamLimits

0x0b6d,	// (0x0003753e) cell_vitu_itu_pane

0x0b6d,	// (0x0003753e) cell_vitu_function_pane_ParamLimits

0x0b6d,	// (0x0003753e) cell_vitu_function_pane

0x0b14,	// (0x000374e5) bg_popup_sub_pane_cp08_ParamLimits

0x0b14,	// (0x000374e5) bg_popup_sub_pane_cp08

0x0bc3,	// (0x00037594) field_vitu_entry_pane_t1_ParamLimits

0x0bc3,	// (0x00037594) field_vitu_entry_pane_t1

0x3342,	// (0x00039d13) field_vitu_entry_pane_t2_ParamLimits

0x3342,	// (0x00039d13) field_vitu_entry_pane_t2

0x0001,

0xf71d,	// (0x000460ee) field_vitu_entry_pane_t_ParamLimits

0xf71d,	// (0x000460ee) field_vitu_entry_pane_t

0x2b95,	// (0x00039566) bg_button_pane_cp05_ParamLimits

0x2b95,	// (0x00039566) bg_button_pane_cp05

0x335f,	// (0x00039d30) cell_vitu_itu_pane_g1

0x17bf,	// (0x00038190) cell_vitu_itu_pane_t1_ParamLimits

0x17bf,	// (0x00038190) cell_vitu_itu_pane_t1

0x17bf,	// (0x00038190) cell_vitu_itu_pane_t2_ParamLimits

0x17bf,	// (0x00038190) cell_vitu_itu_pane_t2

0x0002,

0xf722,	// (0x000460f3) cell_vitu_itu_pane_t_ParamLimits

0xf722,	// (0x000460f3) cell_vitu_itu_pane_t

0xee90,	// (0x00045861) bg_button_pane_cp07

0x0bb9,	// (0x0003758a) cell_vitu_function_pane_g1

0x513d,	// (0x0003bb0e) main_calc_pane_g1

0x4e61,	// (0x0003b832) aid_visual_content_pane

0xee90,	// (0x00045861) main_vradio_pane

0x0b89,	// (0x0003755a) main_vradio_pane_g1_ParamLimits

0x0b89,	// (0x0003755a) main_vradio_pane_g1

0x0b89,	// (0x0003755a) main_vradio_pane_g2_ParamLimits

0x0b89,	// (0x0003755a) main_vradio_pane_g2

0x0001,

0xf4b9,	// (0x00045e8a) main_vradio_pane_g_ParamLimits

0xf4b9,	// (0x00045e8a) main_vradio_pane_g

0x0bd7,	// (0x000375a8) main_vradio_pane_t1_ParamLimits

0x0bd7,	// (0x000375a8) main_vradio_pane_t1

0x0bd7,	// (0x000375a8) main_vradio_pane_t2_ParamLimits

0x0bd7,	// (0x000375a8) main_vradio_pane_t2

0x0bd7,	// (0x000375a8) main_vradio_pane_t3_ParamLimits

0x0bd7,	// (0x000375a8) main_vradio_pane_t3

0x0002,

0xf729,	// (0x000460fa) main_vradio_pane_t_ParamLimits

0xf729,	// (0x000460fa) main_vradio_pane_t

0x0b6d,	// (0x0003753e) vradio_rocker_control_pane_ParamLimits

0x0b6d,	// (0x0003753e) vradio_rocker_control_pane

0x0b6d,	// (0x0003753e) vradio_station_info_pane_ParamLimits

0x0b6d,	// (0x0003753e) vradio_station_info_pane

0x0b14,	// (0x000374e5) vradio_frequency_info_pane_ParamLimits

0x0b14,	// (0x000374e5) vradio_frequency_info_pane

0x0bb9,	// (0x0003758a) vradio_station_info_pane_g1

0x17bf,	// (0x00038190) vradio_station_info_pane_t1_ParamLimits

0x17bf,	// (0x00038190) vradio_station_info_pane_t1

0x0bd7,	// (0x000375a8) vradio_station_info_pane_t2_ParamLimits

0x0bd7,	// (0x000375a8) vradio_station_info_pane_t2

0x0001,

0xf730,	// (0x00046101) vradio_station_info_pane_t_ParamLimits

0xf730,	// (0x00046101) vradio_station_info_pane_t

0xee90,	// (0x00045861) vradio_tuning_pane

0x8b6a,	// (0x0003f53b) vradio_rocker_control_pane_g1

0x337b,	// (0x00039d4c) vradio_rocker_control_pane_g2

0x8b72,	// (0x0003f543) vradio_rocker_control_pane_g3

0x8b7a,	// (0x0003f54b) vradio_rocker_control_pane_g4

0x8b84,	// (0x0003f555) vradio_rocker_control_pane_g5

0x0004,

0xf735,	// (0x00046106) vradio_rocker_control_pane_g

0x0bb9,	// (0x0003758a) vradio_frequency_info_pane_g1

0x0bc3,	// (0x00037594) vradio_frequency_info_pane_t1_ParamLimits

0x0bc3,	// (0x00037594) vradio_frequency_info_pane_t1

0x8b8c,	// (0x0003f55d) vradio_tuning_pane_g1

0x8b99,	// (0x0003f56a) vradio_tuning_pane_t1

0x4eaa,	// (0x0003b87b) area_side_right_pane_ParamLimits

0x4eaa,	// (0x0003b87b) area_side_right_pane

0x2942,	// (0x00039313) status_small_pane_g1

0x294a,	// (0x0003931b) status_small_pane_g2

0x2953,	// (0x00039324) status_small_pane_g3

0x295c,	// (0x0003932d) status_small_pane_g4

0x0003,

0xf506,	// (0x00045ed7) status_small_pane_g

0x2965,	// (0x00039336) status_small_pane_t1

0xee90,	// (0x00045861) main_video3_pane

0xee90,	// (0x00045861) cams_zoom_vslider_pane

0x3383,	// (0x00039d54) image3_wide_pane_ParamLimits

0x3383,	// (0x00039d54) image3_wide_pane

0xee90,	// (0x00045861) image3_wide_small_pane

0x339d,	// (0x00039d6e) main_video3_pane_g1_ParamLimits

0x339d,	// (0x00039d6e) main_video3_pane_g1

0x339d,	// (0x00039d6e) main_video3_pane_g2_ParamLimits

0x339d,	// (0x00039d6e) main_video3_pane_g2

0x0001,

0xf740,	// (0x00046111) main_video3_pane_g_ParamLimits

0xf740,	// (0x00046111) main_video3_pane_g

0x33bb,	// (0x00039d8c) main_video3_pane_t1_ParamLimits

0x33bb,	// (0x00039d8c) main_video3_pane_t1

0x33bb,	// (0x00039d8c) main_video3_pane_t2_ParamLimits

0x33bb,	// (0x00039d8c) main_video3_pane_t2

0x33bb,	// (0x00039d8c) main_video3_pane_t3_ParamLimits

0x33bb,	// (0x00039d8c) main_video3_pane_t3

0x0002,

0xf745,	// (0x00046116) main_video3_pane_t_ParamLimits

0xf745,	// (0x00046116) main_video3_pane_t

0x0bb9,	// (0x0003758a) cams_zoom_vslider_pane_g1

0x0bb9,	// (0x0003758a) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00045a5d) cams_zoom_vslider_pane_g

0xee90,	// (0x00045861) small_slider_vertical_pane

0x0bb9,	// (0x0003758a) small_slider_vertical_pane_g1

0x0bb9,	// (0x0003758a) small_slider_vertical_pane_g2

0x33e2,	// (0x00039db3) small_slider_vertical_pane_g3

0x0002,

0xf74c,	// (0x0004611d) small_slider_vertical_pane_g

0xee90,	// (0x00045861) main_hwr_training_pane

0x33eb,	// (0x00039dbc) hwr_training_instruct_pane_ParamLimits

0x33eb,	// (0x00039dbc) hwr_training_instruct_pane

0x8ba8,	// (0x0003f579) hwr_training_navi_pane_ParamLimits

0x8ba8,	// (0x0003f579) hwr_training_navi_pane

0x8bc2,	// (0x0003f593) hwr_training_write_pane_ParamLimits

0x8bc2,	// (0x0003f593) hwr_training_write_pane

0xee90,	// (0x00045861) bg_frame_shadow_pane

0x3422,	// (0x00039df3) hwr_training_write_pane_g1

0x342a,	// (0x00039dfb) hwr_training_write_pane_g2

0x3432,	// (0x00039e03) hwr_training_write_pane_g3

0x343a,	// (0x00039e0b) hwr_training_write_pane_g4

0x3442,	// (0x00039e13) hwr_training_write_pane_g5

0x344a,	// (0x00039e1b) hwr_training_write_pane_g6

0x3452,	// (0x00039e23) hwr_training_write_pane_g7

0x0006,

0xf753,	// (0x00046124) hwr_training_write_pane_g

0x8bfa,	// (0x0003f5cb) hwr_training_navi_pane_g1_ParamLimits

0x8bfa,	// (0x0003f5cb) hwr_training_navi_pane_g1

0x8c0c,	// (0x0003f5dd) hwr_training_navi_pane_g2_ParamLimits

0x8c0c,	// (0x0003f5dd) hwr_training_navi_pane_g2

0x8c1e,	// (0x0003f5ef) hwr_training_navi_pane_g3_ParamLimits

0x8c1e,	// (0x0003f5ef) hwr_training_navi_pane_g3

0x8c2e,	// (0x0003f5ff) hwr_training_navi_pane_g4_ParamLimits

0x8c2e,	// (0x0003f5ff) hwr_training_navi_pane_g4

0x0004,

0xf762,	// (0x00046133) hwr_training_navi_pane_g_ParamLimits

0xf762,	// (0x00046133) hwr_training_navi_pane_g

0x8c48,	// (0x0003f619) hwr_training_navi_pane_t1

0x8c56,	// (0x0003f627) list_single_hwr_training_instruct_pane_ParamLimits

0x8c56,	// (0x0003f627) list_single_hwr_training_instruct_pane

0x345a,	// (0x00039e2b) list_single_hwr_training_instruct_pane_t1

0x2cf5,	// (0x000396c6) bg_frame_shadow_pane_g1

0x3469,	// (0x00039e3a) bg_frame_shadow_pane_g2

0x3471,	// (0x00039e42) bg_frame_shadow_pane_g3

0x3479,	// (0x00039e4a) bg_frame_shadow_pane_g4

0x3481,	// (0x00039e52) bg_frame_shadow_pane_g5

0x3489,	// (0x00039e5a) bg_frame_shadow_pane_g6

0x34b3,	// (0x00039e84) bg_frame_shadow_pane_g7

0x0ccf,	// (0x000376a0) bg_frame_shadow_pane_g8

0x0007,

0xf76d,	// (0x0004613e) bg_frame_shadow_pane_g

0xee90,	// (0x00045861) main_video_tele_dialer_pane

0x8c6f,	// (0x0003f640) aid_size_cell_video_keypad_ParamLimits

0x8c6f,	// (0x0003f640) aid_size_cell_video_keypad

0x8c7f,	// (0x0003f650) grid_video_dialer_keypad_pane_ParamLimits

0x8c7f,	// (0x0003f650) grid_video_dialer_keypad_pane

0x8cb1,	// (0x0003f682) video_down_pane_cp_ParamLimits

0x8cb1,	// (0x0003f682) video_down_pane_cp

0x8cdb,	// (0x0003f6ac) cell_video_dialer_keypad_pane_ParamLimits

0x8cdb,	// (0x0003f6ac) cell_video_dialer_keypad_pane

0x34bb,	// (0x00039e8c) bg_button_pane_cp08_ParamLimits

0x34bb,	// (0x00039e8c) bg_button_pane_cp08

0x8cf2,	// (0x0003f6c3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8cf2,	// (0x0003f6c3) cell_video_dialer_keypad_pane_g1

0xd0e4,	// (0x00043ab5) mup3_rocker2_pane_ParamLimits

0xd0e4,	// (0x00043ab5) mup3_rocker2_pane

0x0bb9,	// (0x0003758a) mup3_rocker2_pane_g1

0x7b65,	// (0x0003e536) main_dialer2_pane

0xee90,	// (0x00045861) main_mp4_pane

0x8d4b,	// (0x0003f71c) main_mp4_pane_g1_ParamLimits

0x8d4b,	// (0x0003f71c) main_mp4_pane_g1

0x8d6d,	// (0x0003f73e) main_mp4_pane_g2_ParamLimits

0x8d6d,	// (0x0003f73e) main_mp4_pane_g2

0x8d8b,	// (0x0003f75c) main_mp4_pane_g3_ParamLimits

0x8d8b,	// (0x0003f75c) main_mp4_pane_g3

0x8dc6,	// (0x0003f797) main_mp4_pane_g4_ParamLimits

0x8dc6,	// (0x0003f797) main_mp4_pane_g4

0x8dee,	// (0x0003f7bf) main_mp4_pane_g5_ParamLimits

0x8dee,	// (0x0003f7bf) main_mp4_pane_g5

0x0007,

0xf78d,	// (0x0004615e) main_mp4_pane_g_ParamLimits

0xf78d,	// (0x0004615e) main_mp4_pane_g

0x8e56,	// (0x0003f827) main_mp4_pane_t1_ParamLimits

0x8e56,	// (0x0003f827) main_mp4_pane_t1

0x8eb8,	// (0x0003f889) main_mp4_pane_t2_ParamLimits

0x8eb8,	// (0x0003f889) main_mp4_pane_t2

0x8f1c,	// (0x0003f8ed) main_mp4_pane_t3_ParamLimits

0x8f1c,	// (0x0003f8ed) main_mp4_pane_t3

0x8f7a,	// (0x0003f94b) main_mp4_pane_t4_ParamLimits

0x8f7a,	// (0x0003f94b) main_mp4_pane_t4

0x0003,

0xf79e,	// (0x0004616f) main_mp4_pane_t_ParamLimits

0xf79e,	// (0x0004616f) main_mp4_pane_t

0x8fd8,	// (0x0003f9a9) mp4_progress_pane_ParamLimits

0x8fd8,	// (0x0003f9a9) mp4_progress_pane

0xd0f0,	// (0x00043ac1) mp4_rocker_pane_ParamLimits

0xd0f0,	// (0x00043ac1) mp4_rocker_pane

0xd104,	// (0x00043ad5) mp4_progress_pane_t1

0xd122,	// (0x00043af3) mp4_progress_pane_t2

0x0001,

0xf7a7,	// (0x00046178) mp4_progress_pane_t

0xd141,	// (0x00043b12) mup_progress_pane_cp04

0x0bb9,	// (0x0003758a) mp4_rocker_pane_g1

0x0b6d,	// (0x0003753e) aid_cell_size_keypad2_ParamLimits

0x0b6d,	// (0x0003753e) aid_cell_size_keypad2

0x0b6d,	// (0x0003753e) dialer2_ne_pane_ParamLimits

0x0b6d,	// (0x0003753e) dialer2_ne_pane

0x0b6d,	// (0x0003753e) grid_dialer2_keypad_pane_ParamLimits

0x0b6d,	// (0x0003753e) grid_dialer2_keypad_pane

0x3491,	// (0x00039e62) bg_popup_call_pane_cp07_ParamLimits

0x3491,	// (0x00039e62) bg_popup_call_pane_cp07

0x9016,	// (0x0003f9e7) dialer2_ne_pane_t1_ParamLimits

0x9016,	// (0x0003f9e7) dialer2_ne_pane_t1

0x3111,	// (0x00039ae2) cell_dialer2_keypad_pane_ParamLimits

0x3111,	// (0x00039ae2) cell_dialer2_keypad_pane

0x2b95,	// (0x00039566) bg_button_pane_pane_cp04_ParamLimits

0x2b95,	// (0x00039566) bg_button_pane_pane_cp04

0x0b7b,	// (0x0003754c) cell_dialer2_keypad_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) cell_dialer2_keypad_pane_g1

0x5b9c,	// (0x0003c56d) aid_placing_vt_set_content_ParamLimits

0x5b9c,	// (0x0003c56d) aid_placing_vt_set_content

0x5bc4,	// (0x0003c595) aid_placing_vt_set_title_ParamLimits

0x5bc4,	// (0x0003c595) aid_placing_vt_set_title

0xee90,	// (0x00045861) main_image3_pane

0x906d,	// (0x0003fa3e) area_side_right_pane_cp01_ParamLimits

0x906d,	// (0x0003fa3e) area_side_right_pane_cp01

0x0b97,	// (0x00037568) main_image3_pane_g1_ParamLimits

0x0b97,	// (0x00037568) main_image3_pane_g1

0x909c,	// (0x0003fa6d) main_image3_pane_g2_ParamLimits

0x909c,	// (0x0003fa6d) main_image3_pane_g2

0x90b5,	// (0x0003fa86) main_image3_pane_g3_ParamLimits

0x90b5,	// (0x0003fa86) main_image3_pane_g3

0x90ce,	// (0x0003fa9f) main_image3_pane_g4_ParamLimits

0x90ce,	// (0x0003fa9f) main_image3_pane_g4

0x0003,

0xf7b6,	// (0x00046187) main_image3_pane_g_ParamLimits

0xf7b6,	// (0x00046187) main_image3_pane_g

0x90e7,	// (0x0003fab8) main_image3_pane_t1_ParamLimits

0x90e7,	// (0x0003fab8) main_image3_pane_t1

0x910c,	// (0x0003fadd) main_image3_pane_t2_ParamLimits

0x910c,	// (0x0003fadd) main_image3_pane_t2

0x912b,	// (0x0003fafc) main_image3_pane_t3_ParamLimits

0x912b,	// (0x0003fafc) main_image3_pane_t3

0x0003,

0xf7bf,	// (0x00046190) main_image3_pane_t_ParamLimits

0xf7bf,	// (0x00046190) main_image3_pane_t

0x0b6d,	// (0x0003753e) grid_sctrl_middle_pane_cp01_ParamLimits

0x0b6d,	// (0x0003753e) grid_sctrl_middle_pane_cp01

0x918c,	// (0x0003fb5d) cell_sctrl_middle_pane_cp01_ParamLimits

0x918c,	// (0x0003fb5d) cell_sctrl_middle_pane_cp01

0x919d,	// (0x0003fb6e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x919d,	// (0x0003fb6e) cell_sctrl_middle_pane_cp01_g1

0xee90,	// (0x00045861) main_call4_pane

0x91aa,	// (0x0003fb7b) aid_size_button_call4_ParamLimits

0x91aa,	// (0x0003fb7b) aid_size_button_call4

0x91e0,	// (0x0003fbb1) call4_windows_pane_ParamLimits

0x91e0,	// (0x0003fbb1) call4_windows_pane

0x91f5,	// (0x0003fbc6) grid_call4_button_pane_ParamLimits

0x91f5,	// (0x0003fbc6) grid_call4_button_pane

0x9225,	// (0x0003fbf6) call4_windows_conf_pane

0x923e,	// (0x0003fc0f) popup_call4_audio_first_window_ParamLimits

0x923e,	// (0x0003fc0f) popup_call4_audio_first_window

0x928e,	// (0x0003fc5f) popup_call4_audio_second_window_ParamLimits

0x928e,	// (0x0003fc5f) popup_call4_audio_second_window

0x92a7,	// (0x0003fc78) popup_call4_audio_wait_window_ParamLimits

0x92a7,	// (0x0003fc78) popup_call4_audio_wait_window

0x92b5,	// (0x0003fc86) cell_call4_button_pane_ParamLimits

0x92b5,	// (0x0003fc86) cell_call4_button_pane

0x92d8,	// (0x0003fca9) bg_button_pane_cp09_ParamLimits

0x92d8,	// (0x0003fca9) bg_button_pane_cp09

0x92e4,	// (0x0003fcb5) cell_call4_button_pane_g1_ParamLimits

0x92e4,	// (0x0003fcb5) cell_call4_button_pane_g1

0x92f1,	// (0x0003fcc2) cell_call4_button_pane_t1_ParamLimits

0x92f1,	// (0x0003fcc2) cell_call4_button_pane_t1

0xd18a,	// (0x00043b5b) popup_call4_audio_conf_window_ParamLimits

0xd18a,	// (0x00043b5b) popup_call4_audio_conf_window

0x8784,	// (0x0003f155) mup3_progress_pane_t1_ParamLimits

0x879a,	// (0x0003f16b) mup3_progress_pane_t2_ParamLimits

0x302f,	// (0x00039a00) mup3_progress_pane_t3_ParamLimits

0xf69e,	// (0x0004606f) mup3_progress_pane_t_ParamLimits

0x3046,	// (0x00039a17) mup_progress_pane_cp03_ParamLimits

0x305f,	// (0x00039a30) mup3_control_keys_pane_g4_copy1

0xd0f0,	// (0x00043ac1) mp4_rocker2_pane_ParamLimits

0xd0f0,	// (0x00043ac1) mp4_rocker2_pane

0x305f,	// (0x00039a30) mp4_rocker2_pane_g1

0x305f,	// (0x00039a30) mp4_rocker2_pane_g2

0x305f,	// (0x00039a30) mp4_rocker2_pane_g3

0x305f,	// (0x00039a30) mp4_rocker2_pane_g4

0x305f,	// (0x00039a30) mp4_rocker2_pane_g5

0x0004,

0xf7c8,	// (0x00046199) mp4_rocker2_pane_g

0xee90,	// (0x00045861) main_camera4_pane

0xee90,	// (0x00045861) main_video4_pane

0x8c8d,	// (0x0003f65e) main_video_tele_dialer_pane_t1_ParamLimits

0x8c8d,	// (0x0003f65e) main_video_tele_dialer_pane_t1

0x8c9f,	// (0x0003f670) main_video_tele_dialer_pane_t2_ParamLimits

0x8c9f,	// (0x0003f670) main_video_tele_dialer_pane_t2

0x0001,

0xf77e,	// (0x0004614f) main_video_tele_dialer_pane_t_ParamLimits

0xf77e,	// (0x0004614f) main_video_tele_dialer_pane_t

0x934d,	// (0x0003fd1e) cam4_autofocus_pane_ParamLimits

0x934d,	// (0x0003fd1e) cam4_autofocus_pane

0x9365,	// (0x0003fd36) cam4_image_uncrop_pane_ParamLimits

0x9365,	// (0x0003fd36) cam4_image_uncrop_pane

0x937e,	// (0x0003fd4f) cam4_indicators_pane_ParamLimits

0x937e,	// (0x0003fd4f) cam4_indicators_pane

0x939a,	// (0x0003fd6b) main_camera4_pane_g1_ParamLimits

0x939a,	// (0x0003fd6b) main_camera4_pane_g1

0x93a6,	// (0x0003fd77) main_camera4_pane_g2_ParamLimits

0x93a6,	// (0x0003fd77) main_camera4_pane_g2

0x93a6,	// (0x0003fd77) main_camera4_pane_g3_ParamLimits

0x93a6,	// (0x0003fd77) main_camera4_pane_g3

0x93b2,	// (0x0003fd83) main_camera4_pane_g4_ParamLimits

0x93b2,	// (0x0003fd83) main_camera4_pane_g4

0x93be,	// (0x0003fd8f) main_camera4_pane_g5_ParamLimits

0x93be,	// (0x0003fd8f) main_camera4_pane_g5

0x0005,

0xf7d3,	// (0x000461a4) main_camera4_pane_g_ParamLimits

0xf7d3,	// (0x000461a4) main_camera4_pane_g

0x93d8,	// (0x0003fda9) main_camera4_pane_t1_ParamLimits

0x93d8,	// (0x0003fda9) main_camera4_pane_t1

0x0b7b,	// (0x0003754c) bg_tb_trans_pane_cp06

0x942a,	// (0x0003fdfb) cam4_indicators_pane_g1

0x943b,	// (0x0003fe0c) cam4_indicators_pane_g2

0x0002,

0xf7ee,	// (0x000461bf) cam4_indicators_pane_g

0x9453,	// (0x0003fe24) cam4_indicators_pane_t1

0x947d,	// (0x0003fe4e) main_video4_pane_g1_ParamLimits

0x947d,	// (0x0003fe4e) main_video4_pane_g1

0x9489,	// (0x0003fe5a) main_video4_pane_g2_ParamLimits

0x9489,	// (0x0003fe5a) main_video4_pane_g2

0x9495,	// (0x0003fe66) main_video4_pane_g3_ParamLimits

0x9495,	// (0x0003fe66) main_video4_pane_g3

0x94a1,	// (0x0003fe72) main_video4_pane_g4_ParamLimits

0x94a1,	// (0x0003fe72) main_video4_pane_g4

0x0004,

0xf7f5,	// (0x000461c6) main_video4_pane_g_ParamLimits

0xf7f5,	// (0x000461c6) main_video4_pane_g

0x94c3,	// (0x0003fe94) vid4_indicators_pane_ParamLimits

0x94c3,	// (0x0003fe94) vid4_indicators_pane

0x94e2,	// (0x0003feb3) video4_image_uncrop_cif_pane_ParamLimits

0x94e2,	// (0x0003feb3) video4_image_uncrop_cif_pane

0x94f1,	// (0x0003fec2) video4_image_uncrop_nhd_pane_ParamLimits

0x94f1,	// (0x0003fec2) video4_image_uncrop_nhd_pane

0x9365,	// (0x0003fd36) video4_image_uncrop_vga_pane_ParamLimits

0x9365,	// (0x0003fd36) video4_image_uncrop_vga_pane

0x0b14,	// (0x000374e5) bg_tb_trans_pane_cp07

0x950a,	// (0x0003fedb) vid4_indicators_pane_g1

0x9520,	// (0x0003fef1) vid4_indicators_pane_g2

0x9534,	// (0x0003ff05) vid4_indicators_pane_g3

0x0004,

0xf800,	// (0x000461d1) vid4_indicators_pane_g

0x9565,	// (0x0003ff36) vid4_indicators_pane_t1

0x957c,	// (0x0003ff4d) cam4_autofocus_pane_g1

0x9584,	// (0x0003ff55) cam4_autofocus_pane_g2

0x958c,	// (0x0003ff5d) cam4_autofocus_pane_g3

0x0002,

0xf80b,	// (0x000461dc) cam4_autofocus_pane_g

0x9594,	// (0x0003ff65) cam4_autofocus_pane_g3_copy1

0x8cbf,	// (0x0003f690) video_down_pane_cp_t1

0x8ccd,	// (0x0003f69e) video_down_pane_cp_t2

0x0001,

0xf783,	// (0x00046154) video_down_pane_cp_t

0x0b6d,	// (0x0003753e) popup_vitu2_window_ParamLimits

0x0b6d,	// (0x0003753e) popup_vitu2_window

0x959c,	// (0x0003ff6d) aid_size_cell2_itu2_ParamLimits

0x959c,	// (0x0003ff6d) aid_size_cell2_itu2

0x95be,	// (0x0003ff8f) aid_size_cell_itu2_ParamLimits

0x95be,	// (0x0003ff8f) aid_size_cell_itu2

0x3491,	// (0x00039e62) bg_popup_window_pane_cp09_ParamLimits

0x3491,	// (0x00039e62) bg_popup_window_pane_cp09

0x9602,	// (0x0003ffd3) field_vitu2_entry_pane_ParamLimits

0x9602,	// (0x0003ffd3) field_vitu2_entry_pane

0x9622,	// (0x0003fff3) grid_vitu2_function_pane_ParamLimits

0x9622,	// (0x0003fff3) grid_vitu2_function_pane

0x9666,	// (0x00040037) grid_vitu2_itu_pane_ParamLimits

0x9666,	// (0x00040037) grid_vitu2_itu_pane

0x96dc,	// (0x000400ad) cell_vitu2_itu_pane_ParamLimits

0x96dc,	// (0x000400ad) cell_vitu2_itu_pane

0x96f7,	// (0x000400c8) cell_vitu2_function_pane_ParamLimits

0x96f7,	// (0x000400c8) cell_vitu2_function_pane

0xd1a4,	// (0x00043b75) bg_popup_call_pane_cp08_ParamLimits

0xd1a4,	// (0x00043b75) bg_popup_call_pane_cp08

0xd1bb,	// (0x00043b8c) field_vitu2_entry_pane_g1

0xd1c7,	// (0x00043b98) field_vitu2_entry_pane_g2

0x0002,

0xf812,	// (0x000461e3) field_vitu2_entry_pane_g

0xd1d3,	// (0x00043ba4) field_vitu2_entry_pane_t1_ParamLimits

0xd1d3,	// (0x00043ba4) field_vitu2_entry_pane_t1

0xd202,	// (0x00043bd3) field_vitu2_entry_pane_t2_ParamLimits

0xd202,	// (0x00043bd3) field_vitu2_entry_pane_t2

0x0001,

0xf819,	// (0x000461ea) field_vitu2_entry_pane_t_ParamLimits

0xf819,	// (0x000461ea) field_vitu2_entry_pane_t

0x7eb7,	// (0x0003e888) bg_button_pane_cp010_ParamLimits

0x7eb7,	// (0x0003e888) bg_button_pane_cp010

0x973b,	// (0x0004010c) cell_vitu2_itu_pane_g1

0x9761,	// (0x00040132) cell_vitu2_itu_pane_t1_ParamLimits

0x9761,	// (0x00040132) cell_vitu2_itu_pane_t1

0x97ad,	// (0x0004017e) cell_vitu2_itu_pane_t2_ParamLimits

0x97ad,	// (0x0004017e) cell_vitu2_itu_pane_t2

0x0002,

0xf823,	// (0x000461f4) cell_vitu2_itu_pane_t_ParamLimits

0xf823,	// (0x000461f4) cell_vitu2_itu_pane_t

0x0b14,	// (0x000374e5) bg_button_pane_cp011

0x9875,	// (0x00040246) cell_vitu2_function_pane_g1

0xee90,	// (0x00045861) main_myfav_hc_pane

0x916d,	// (0x0003fb3e) popup_image3_note_pane_ParamLimits

0x916d,	// (0x0003fb3e) popup_image3_note_pane

0x917b,	// (0x0003fb4c) popup_image3_tool_bar_pane_ParamLimits

0x917b,	// (0x0003fb4c) popup_image3_tool_bar_pane

0x9823,	// (0x000401f4) cell_vitu2_itu_pane_t3_ParamLimits

0x9823,	// (0x000401f4) cell_vitu2_itu_pane_t3

0xee90,	// (0x00045861) bg_popup_trans_pane

0xd227,	// (0x00043bf8) grid_image3_tool_bar_pane

0xd231,	// (0x00043c02) bg_popup_trans_pane_g1

0x1035,	// (0x00037a06) bg_popup_trans_pane_g2

0xd239,	// (0x00043c0a) bg_popup_trans_pane_g3

0xd241,	// (0x00043c12) bg_popup_trans_pane_g4

0xd249,	// (0x00043c1a) bg_popup_trans_pane_g5

0xd251,	// (0x00043c22) bg_popup_trans_pane_g6

0xd259,	// (0x00043c2a) bg_popup_trans_pane_g7

0xd261,	// (0x00043c32) bg_popup_trans_pane_g8

0x1015,	// (0x000379e6) bg_popup_trans_pane_g9

0x0008,

0xf82a,	// (0x000461fb) bg_popup_trans_pane_g

0xd269,	// (0x00043c3a) cell_image3_tool_bar_pane_ParamLimits

0xd269,	// (0x00043c3a) cell_image3_tool_bar_pane

0x0bb9,	// (0x0003758a) cell_image3_tool_bar_pane_g1

0xee90,	// (0x00045861) bg_popup_trans_pane_cp1

0xd27f,	// (0x00043c50) popup_image3_note_pane_t1

0xd28d,	// (0x00043c5e) popup_image3_note_pane_t2

0xd29b,	// (0x00043c6c) popup_image3_note_pane_t3

0x0002,

0xf83d,	// (0x0004620e) popup_image3_note_pane_t

0xd2ab,	// (0x00043c7c) popup_image3_note_pane_t3_copy1

0x9889,	// (0x0004025a) bg_myfav_hc_instruction_pane_ParamLimits

0x9889,	// (0x0004025a) bg_myfav_hc_instruction_pane

0x98a1,	// (0x00040272) cell_myfav_contact_pane_ParamLimits

0x98a1,	// (0x00040272) cell_myfav_contact_pane

0x98bb,	// (0x0004028c) cell_myfav_contact_pane_cp1_ParamLimits

0x98bb,	// (0x0004028c) cell_myfav_contact_pane_cp1

0x98d3,	// (0x000402a4) cell_myfav_contact_pane_cp2_ParamLimits

0x98d3,	// (0x000402a4) cell_myfav_contact_pane_cp2

0x98eb,	// (0x000402bc) cell_myfav_contact_pane_cp3_ParamLimits

0x98eb,	// (0x000402bc) cell_myfav_contact_pane_cp3

0x9902,	// (0x000402d3) cell_myfav_contact_pane_cp4_ParamLimits

0x9902,	// (0x000402d3) cell_myfav_contact_pane_cp4

0x9918,	// (0x000402e9) cell_myfav_contact_pane_cp5_ParamLimits

0x9918,	// (0x000402e9) cell_myfav_contact_pane_cp5

0x992c,	// (0x000402fd) cell_myfav_contact_pane_cp6_ParamLimits

0x992c,	// (0x000402fd) cell_myfav_contact_pane_cp6

0x9940,	// (0x00040311) cell_myfav_contact_pane_cp7_ParamLimits

0x9940,	// (0x00040311) cell_myfav_contact_pane_cp7

0xd2b9,	// (0x00043c8a) listscroll_gen_pane_cp05

0x9958,	// (0x00040329) main_myfav_hc_pane_g1_ParamLimits

0x9958,	// (0x00040329) main_myfav_hc_pane_g1

0x9972,	// (0x00040343) main_myfav_hc_pane_g2_ParamLimits

0x9972,	// (0x00040343) main_myfav_hc_pane_g2

0x0002,

0xf844,	// (0x00046215) main_myfav_hc_pane_g_ParamLimits

0xf844,	// (0x00046215) main_myfav_hc_pane_g

0x99a4,	// (0x00040375) main_myfav_hc_pane_t1_ParamLimits

0x99a4,	// (0x00040375) main_myfav_hc_pane_t1

0xd2c2,	// (0x00043c93) main_myfav_hc_pane_t2_ParamLimits

0xd2c2,	// (0x00043c93) main_myfav_hc_pane_t2

0xd2d4,	// (0x00043ca5) main_myfav_hc_pane_t3_ParamLimits

0xd2d4,	// (0x00043ca5) main_myfav_hc_pane_t3

0x99bb,	// (0x0004038c) main_myfav_hc_pane_t4_ParamLimits

0x99bb,	// (0x0004038c) main_myfav_hc_pane_t4

0x0004,

0xf84b,	// (0x0004621c) main_myfav_hc_pane_t_ParamLimits

0xf84b,	// (0x0004621c) main_myfav_hc_pane_t

0x0bb9,	// (0x0003758a) bg_myfav_hc_instruction_pane_g1

0xd2e6,	// (0x00043cb7) cell_myfav_contact_pane_g1_ParamLimits

0xd2e6,	// (0x00043cb7) cell_myfav_contact_pane_g1

0xd2e6,	// (0x00043cb7) cell_myfav_contact_pane_g2_ParamLimits

0xd2e6,	// (0x00043cb7) cell_myfav_contact_pane_g2

0xd2f2,	// (0x00043cc3) cell_myfav_contact_pane_g3_ParamLimits

0xd2f2,	// (0x00043cc3) cell_myfav_contact_pane_g3

0x0b89,	// (0x0003755a) cell_myfav_contact_pane_g4_ParamLimits

0x0b89,	// (0x0003755a) cell_myfav_contact_pane_g4

0xd2ff,	// (0x00043cd0) cell_myfav_contact_pane_g5_ParamLimits

0xd2ff,	// (0x00043cd0) cell_myfav_contact_pane_g5

0x0004,

0xf856,	// (0x00046227) cell_myfav_contact_pane_g_ParamLimits

0xf856,	// (0x00046227) cell_myfav_contact_pane_g

0x998c,	// (0x0004035d) main_myfav_hc_pane_g3_ParamLimits

0x998c,	// (0x0004035d) main_myfav_hc_pane_g3

0x4327,	// (0x0003acf8) popup_adpt_find_window

0x99e5,	// (0x000403b6) afind_page_pane_ParamLimits

0x99e5,	// (0x000403b6) afind_page_pane

0x99f2,	// (0x000403c3) aid_size_cell_afind_ParamLimits

0x99f2,	// (0x000403c3) aid_size_cell_afind

0x9a0c,	// (0x000403dd) bg_popup_sub_pane_cp09_ParamLimits

0x9a0c,	// (0x000403dd) bg_popup_sub_pane_cp09

0x9a1d,	// (0x000403ee) find_pane_cp01_ParamLimits

0x9a1d,	// (0x000403ee) find_pane_cp01

0xd30b,	// (0x00043cdc) grid_afind_control_pane_ParamLimits

0xd30b,	// (0x00043cdc) grid_afind_control_pane

0x9a30,	// (0x00040401) grid_afind_pane_ParamLimits

0x9a30,	// (0x00040401) grid_afind_pane

0x9a4c,	// (0x0004041d) cell_afind_pane_ParamLimits

0x9a4c,	// (0x0004041d) cell_afind_pane

0x0bb9,	// (0x0003758a) afind_page_pane_g1

0x9a94,	// (0x00040465) afind_page_pane_g2

0x9a9c,	// (0x0004046d) afind_page_pane_g3

0x0002,

0xf861,	// (0x00046232) afind_page_pane_g

0x9aa4,	// (0x00040475) afind_page_pane_t1

0xd331,	// (0x00043d02) cell_afind_grid_control_pane_ParamLimits

0xd331,	// (0x00043d02) cell_afind_grid_control_pane

0xd340,	// (0x00043d11) bg_button_pane_cp69_ParamLimits

0xd340,	// (0x00043d11) bg_button_pane_cp69

0x9ab2,	// (0x00040483) cell_afind_pane_g1_ParamLimits

0x9ab2,	// (0x00040483) cell_afind_pane_g1

0x9abf,	// (0x00040490) cell_afind_pane_t1_ParamLimits

0x9abf,	// (0x00040490) cell_afind_pane_t1

0xd34c,	// (0x00043d1d) bg_button_pane_cp72

0xd354,	// (0x00043d25) cell_afind_grid_control_pane_g1

0x7711,	// (0x0003e0e2) aid_image_placing_area_ParamLimits

0x7711,	// (0x0003e0e2) aid_image_placing_area

0x0b7b,	// (0x0003754c) field_vitu_entry_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) field_vitu_entry_pane_g1

0x0b7b,	// (0x0003754c) field_vitu_entry_pane_g2_ParamLimits

0x0b7b,	// (0x0003754c) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x00045b6a) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x00045b6a) field_vitu_entry_pane_g

0x335f,	// (0x00039d30) cell_vitu_itu_pane_g1_ParamLimits

0x3342,	// (0x00039d13) cell_vitu_itu_pane_t3_ParamLimits

0x3342,	// (0x00039d13) cell_vitu_itu_pane_t3

0xd104,	// (0x00043ad5) mp4_progress_pane_t1_ParamLimits

0xd122,	// (0x00043af3) mp4_progress_pane_t2_ParamLimits

0xf7a7,	// (0x00046178) mp4_progress_pane_t_ParamLimits

0xd141,	// (0x00043b12) mup_progress_pane_cp04_ParamLimits

0x99cf,	// (0x000403a0) main_myfav_hc_pane_t5_ParamLimits

0x99cf,	// (0x000403a0) main_myfav_hc_pane_t5

0x4e6d,	// (0x0003b83e) aid_zoom_text_primary

0x4327,	// (0x0003acf8) popup_adpt_find_window_ParamLimits

0x0b14,	// (0x000374e5) main_cam_set_pane

0x938c,	// (0x0003fd5d) cam4_zoom_pane_ParamLimits

0x938c,	// (0x0003fd5d) cam4_zoom_pane

0x9ad1,	// (0x000404a2) main_cam_set_pane_g1_ParamLimits

0x9ad1,	// (0x000404a2) main_cam_set_pane_g1

0x9adf,	// (0x000404b0) main_cam_set_pane_g2_ParamLimits

0x9adf,	// (0x000404b0) main_cam_set_pane_g2

0x0001,

0xf868,	// (0x00046239) main_cam_set_pane_g_ParamLimits

0xf868,	// (0x00046239) main_cam_set_pane_g

0x9aeb,	// (0x000404bc) main_cam_set_pane_t1_ParamLimits

0x9aeb,	// (0x000404bc) main_cam_set_pane_t1

0x9b07,	// (0x000404d8) main_cset_listscroll_pane_ParamLimits

0x9b07,	// (0x000404d8) main_cset_listscroll_pane

0x9b3b,	// (0x0004050c) main_cset_slider_pane_ParamLimits

0x9b3b,	// (0x0004050c) main_cset_slider_pane

0xd365,	// (0x00043d36) main_cset_list_pane_ParamLimits

0xd365,	// (0x00043d36) main_cset_list_pane

0xd375,	// (0x00043d46) scroll_pane_cp028

0x9b5c,	// (0x0004052d) aid_area_touch_slider

0x9b78,	// (0x00040549) cset_slider_pane

0x9b9b,	// (0x0004056c) main_cset_slider_pane_g1

0x9bb0,	// (0x00040581) main_cset_slider_pane_g2

0x0011,

0xf86d,	// (0x0004623e) main_cset_slider_pane_g

0xd3ae,	// (0x00043d7f) main_cset_slider_pane_t1

0x9c6c,	// (0x0004063d) main_cset_slider_pane_t2

0x9c86,	// (0x00040657) main_cset_slider_pane_t3

0x9ca0,	// (0x00040671) main_cset_slider_pane_t4

0x9cba,	// (0x0004068b) main_cset_slider_pane_t5

0x9cd4,	// (0x000406a5) main_cset_slider_pane_t6

0x9ce9,	// (0x000406ba) main_cset_slider_pane_t7

0x000e,

0xf892,	// (0x00046263) main_cset_slider_pane_t

0x9ded,	// (0x000407be) cset_list_set_pane_ParamLimits

0x9ded,	// (0x000407be) cset_list_set_pane

0xd448,	// (0x00043e19) aid_position_infowindow_above

0xd450,	// (0x00043e21) aid_position_infowindow_below

0x4558,	// (0x0003af29) cset_list_set_pane_g1_ParamLimits

0x4558,	// (0x0003af29) cset_list_set_pane_g1

0x4564,	// (0x0003af35) cset_list_set_pane_g3_ParamLimits

0x4564,	// (0x0003af35) cset_list_set_pane_g3

0x0001,

0xf8b1,	// (0x00046282) cset_list_set_pane_g_ParamLimits

0xf8b1,	// (0x00046282) cset_list_set_pane_g

0x4573,	// (0x0003af44) cset_list_set_pane_t1_ParamLimits

0x4573,	// (0x0003af44) cset_list_set_pane_t1

0x0b14,	// (0x000374e5) list_highlight_pane_cp021_ParamLimits

0x0b14,	// (0x000374e5) list_highlight_pane_cp021

0x1845,	// (0x00038216) cset_slider_pane_g1

0x1857,	// (0x00038228) cset_slider_pane_g2

0x184e,	// (0x0003821f) cset_slider_pane_g3

0x0002,

0xf8b6,	// (0x00046287) cset_slider_pane_g

0xd458,	// (0x00043e29) aid_area_touch_cam4_zoom

0x9dfe,	// (0x000407cf) cam4_zoom_cont_pane

0x9e06,	// (0x000407d7) cam4_zoom_pane_g1

0x9e0e,	// (0x000407df) cam4_zoom_pane_g2

0x9e16,	// (0x000407e7) cam4_zoom_pane_g3

0x0002,

0xf8bd,	// (0x0004628e) cam4_zoom_pane_g

0xd461,	// (0x00043e32) cam4_zoom_cont_pane_g1

0xd46a,	// (0x00043e3b) cam4_zoom_cont_pane_g2

0xd473,	// (0x00043e44) cam4_zoom_cont_pane_g3

0x0002,

0xf8c4,	// (0x00046295) cam4_zoom_cont_pane_g

0x91c4,	// (0x0003fb95) call4_image_pane_ParamLimits

0x91c4,	// (0x0003fb95) call4_image_pane

0x9225,	// (0x0003fbf6) call4_windows_conf_pane_ParamLimits

0x926c,	// (0x0003fc3d) popup_call4_audio_in_window_ParamLimits

0x926c,	// (0x0003fc3d) popup_call4_audio_in_window

0xee90,	// (0x00045861) bg_popup_call2_act_pane_cp02

0xd182,	// (0x00043b53) call4_list_conf_pane

0x0bb9,	// (0x0003758a) call4_image_pane_g1

0x0bb9,	// (0x0003758a) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00045a5d) call4_image_pane_g

0xd47c,	// (0x00043e4d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd47c,	// (0x00043e4d) list_single_graphic_popup_conf4_pane

0xee90,	// (0x00045861) list_highlight_pane_cp022

0xd491,	// (0x00043e62) list_single_graphic_popup_conf4_pane_g1

0x152c,	// (0x00037efd) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cb,	// (0x0004629c) list_single_graphic_popup_conf4_pane_g

0xd499,	// (0x00043e6a) list_single_graphic_popup_conf4_pane_t1

0x5d0c,	// (0x0003c6dd) popup_vtel_slider_window_ParamLimits

0x5d0c,	// (0x0003c6dd) popup_vtel_slider_window

0xd154,	// (0x00043b25) dialer2_ne_pane_t2_ParamLimits

0xd154,	// (0x00043b25) dialer2_ne_pane_t2

0x0001,

0xf7ac,	// (0x0004617d) dialer2_ne_pane_t_ParamLimits

0xf7ac,	// (0x0004617d) dialer2_ne_pane_t

0x0b14,	// (0x000374e5) bg_popup_sub_pane_cp010_ParamLimits

0x0b14,	// (0x000374e5) bg_popup_sub_pane_cp010

0x9e1e,	// (0x000407ef) popup_vtel_slider_window_g1_ParamLimits

0x9e1e,	// (0x000407ef) popup_vtel_slider_window_g1

0x9e2a,	// (0x000407fb) popup_vtel_slider_window_g2_ParamLimits

0x9e2a,	// (0x000407fb) popup_vtel_slider_window_g2

0x0003,

0xf8d0,	// (0x000462a1) popup_vtel_slider_window_g_ParamLimits

0xf8d0,	// (0x000462a1) popup_vtel_slider_window_g

0x9e72,	// (0x00040843) vtel_slider_pane_ParamLimits

0x9e72,	// (0x00040843) vtel_slider_pane

0x9e81,	// (0x00040852) vtel_slider_pane_g1_ParamLimits

0x9e81,	// (0x00040852) vtel_slider_pane_g1

0x9e8e,	// (0x0004085f) vtel_slider_pane_g2_ParamLimits

0x9e8e,	// (0x0004085f) vtel_slider_pane_g2

0x9e9b,	// (0x0004086c) vtel_slider_pane_g3_ParamLimits

0x9e9b,	// (0x0004086c) vtel_slider_pane_g3

0x9e81,	// (0x00040852) vtel_slider_pane_g4_ParamLimits

0x9e81,	// (0x00040852) vtel_slider_pane_g4

0x9ea8,	// (0x00040879) vtel_slider_pane_g5_ParamLimits

0x9ea8,	// (0x00040879) vtel_slider_pane_g5

0x0004,

0xf8d9,	// (0x000462aa) vtel_slider_pane_g_ParamLimits

0xf8d9,	// (0x000462aa) vtel_slider_pane_g

0x0b14,	// (0x000374e5) main_gallery2_pane

0x95e4,	// (0x0003ffb5) aid_size_row_itut2_dropdow_list_ParamLimits

0x95e4,	// (0x0003ffb5) aid_size_row_itut2_dropdow_list

0x9644,	// (0x00040015) grid_vitu2_function_top_pane_ParamLimits

0x9644,	// (0x00040015) grid_vitu2_function_top_pane

0x969a,	// (0x0004006b) popup_vitu2_dropdown_list_window_ParamLimits

0x969a,	// (0x0004006b) popup_vitu2_dropdown_list_window

0x96b8,	// (0x00040089) popup_vitu2_match_list_window

0x9eb5,	// (0x00040886) cell_vitu2_function_top_pane_ParamLimits

0x9eb5,	// (0x00040886) cell_vitu2_function_top_pane

0x9ecf,	// (0x000408a0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9ecf,	// (0x000408a0) cell_vitu2_function_top_pane_cp01

0x9eeb,	// (0x000408bc) cell_vitu2_function_top_wide_pane_ParamLimits

0x9eeb,	// (0x000408bc) cell_vitu2_function_top_wide_pane

0x0b14,	// (0x000374e5) bg_button_pane_cp012

0x9f09,	// (0x000408da) cell_vitu2_function_top_pane_g1

0x9f1d,	// (0x000408ee) bg_button_pane_cp013_ParamLimits

0x9f1d,	// (0x000408ee) bg_button_pane_cp013

0x9f39,	// (0x0004090a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9f39,	// (0x0004090a) cell_vitu2_function_top_wide_pane_g1

0x0b6d,	// (0x0003753e) bg_popup_sub_pane_cp20

0x9f51,	// (0x00040922) list_vitu2_match_list_pane

0xd231,	// (0x00043c02) bg_popup_sub_pane_cp20_g1

0xd239,	// (0x00043c0a) bg_popup_sub_pane_cp20_g2

0x1035,	// (0x00037a06) bg_popup_sub_pane_cp20_g3

0xd241,	// (0x00043c12) bg_popup_sub_pane_cp20_g4

0x1015,	// (0x000379e6) bg_popup_sub_pane_cp20_g5

0xd4af,	// (0x00043e80) bg_popup_sub_pane_cp20_g6

0xd251,	// (0x00043c22) bg_popup_sub_pane_cp20_g7

0xd259,	// (0x00043c2a) bg_popup_sub_pane_cp20_g8

0xd261,	// (0x00043c32) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e4,	// (0x000462b5) bg_popup_sub_pane_cp20_g

0x9f69,	// (0x0004093a) list_vitu2_match_list_item_pane_ParamLimits

0x9f69,	// (0x0004093a) list_vitu2_match_list_item_pane

0x9f7b,	// (0x0004094c) list_vitu2_match_list_item_pane_t1

0xee90,	// (0x00045861) bg_popup_sub_pane_cp21

0x0e0b,	// (0x000377dc) grid_vitu2_dropdown_list_pane

0x9f89,	// (0x0004095a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9f89,	// (0x0004095a) cell_vitu2_dropdown_list_char_pane

0x9fad,	// (0x0004097e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9fad,	// (0x0004097e) cell_vitu2_dropdown_list_ctrl_pane

0xd4b7,	// (0x00043e88) cell_vitu2_dropdown_list_char_pane_g1

0xd4c0,	// (0x00043e91) cell_vitu2_dropdown_list_char_pane_g2

0xd4c9,	// (0x00043e9a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f7,	// (0x000462c8) cell_vitu2_dropdown_list_char_pane_g

0x9fd7,	// (0x000409a8) cell_vitu2_dropdown_list_char_pane_t1

0x9fe5,	// (0x000409b6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9fe5,	// (0x000409b6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9ff5,	// (0x000409c6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9ff5,	// (0x000409c6) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa006,	// (0x000409d7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa006,	// (0x000409d7) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa016,	// (0x000409e7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa016,	// (0x000409e7) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0b7b,	// (0x0003754c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0b7b,	// (0x0003754c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8fe,	// (0x000462cf) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8fe,	// (0x000462cf) cell_vitu2_dropdown_list_ctrl_pane_g

0xa02f,	// (0x00040a00) aid_size_cell_gallery2_ParamLimits

0xa02f,	// (0x00040a00) aid_size_cell_gallery2

0xa049,	// (0x00040a1a) grid_gallery2_pane_ParamLimits

0xa049,	// (0x00040a1a) grid_gallery2_pane

0xa060,	// (0x00040a31) scroll_pane_cp029_ParamLimits

0xa060,	// (0x00040a31) scroll_pane_cp029

0xa070,	// (0x00040a41) cell_gallery2_pane_ParamLimits

0xa070,	// (0x00040a41) cell_gallery2_pane

0xd4d2,	// (0x00043ea3) cell_gallery2_pane_g2

0xa0c7,	// (0x00040a98) cell_gallery2_pane_g3

0xd4da,	// (0x00043eab) cell_gallery2_pane_g4

0xd4e2,	// (0x00043eb3) cell_gallery2_pane_g5

0x0e0b,	// (0x000377dc) grid_highlight_pane_cp10

0x96b8,	// (0x00040089) popup_vitu2_match_list_window_ParamLimits

0x96cc,	// (0x0004009d) popup_vitu2_query_window_ParamLimits

0x96cc,	// (0x0004009d) popup_vitu2_query_window

0xee90,	// (0x00045861) bg_vitu2_candi_button_pane

0xd4b7,	// (0x00043e88) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4c0,	// (0x00043e91) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4c9,	// (0x00043e9a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa0cf,	// (0x00040aa0) bg_button_pane_cp015

0xa0e4,	// (0x00040ab5) bg_button_pane_cp016

0xa0f0,	// (0x00040ac1) bg_button_pane_cp017

0x17d3,	// (0x000381a4) bg_popup_sub_pane_cp22

0xd4ea,	// (0x00043ebb) popup_vitu2_query_window_g1

0xa131,	// (0x00040b02) popup_vitu2_query_window_g2

0x0002,

0xf909,	// (0x000462da) popup_vitu2_query_window_g

0xa155,	// (0x00040b26) popup_vitu2_query_window_t1_ParamLimits

0xa155,	// (0x00040b26) popup_vitu2_query_window_t1

0xa188,	// (0x00040b59) popup_vitu2_query_window_t2_ParamLimits

0xa188,	// (0x00040b59) popup_vitu2_query_window_t2

0xa19a,	// (0x00040b6b) popup_vitu2_query_window_t3_ParamLimits

0xa19a,	// (0x00040b6b) popup_vitu2_query_window_t3

0xa1c2,	// (0x00040b93) popup_vitu2_query_window_t4_ParamLimits

0xa1c2,	// (0x00040b93) popup_vitu2_query_window_t4

0xa1d6,	// (0x00040ba7) popup_vitu2_query_window_t5_ParamLimits

0xa1d6,	// (0x00040ba7) popup_vitu2_query_window_t5

0x0006,

0xf910,	// (0x000462e1) popup_vitu2_query_window_t_ParamLimits

0xf910,	// (0x000462e1) popup_vitu2_query_window_t

0xd35d,	// (0x00043d2e) main_cset_text_pane

0x9b5c,	// (0x0004052d) aid_area_touch_slider_ParamLimits

0x9b78,	// (0x00040549) cset_slider_pane_ParamLimits

0x9b9b,	// (0x0004056c) main_cset_slider_pane_g1_ParamLimits

0x9bb0,	// (0x00040581) main_cset_slider_pane_g2_ParamLimits

0xd37e,	// (0x00043d4f) main_cset_slider_pane_g3_ParamLimits

0xd37e,	// (0x00043d4f) main_cset_slider_pane_g3

0x9bc5,	// (0x00040596) main_cset_slider_pane_g4_ParamLimits

0x9bc5,	// (0x00040596) main_cset_slider_pane_g4

0x9bd4,	// (0x000405a5) main_cset_slider_pane_g5_ParamLimits

0x9bd4,	// (0x000405a5) main_cset_slider_pane_g5

0x9be0,	// (0x000405b1) main_cset_slider_pane_g6_ParamLimits

0x9be0,	// (0x000405b1) main_cset_slider_pane_g6

0xf86d,	// (0x0004623e) main_cset_slider_pane_g_ParamLimits

0xd3ae,	// (0x00043d7f) main_cset_slider_pane_t1_ParamLimits

0x9c6c,	// (0x0004063d) main_cset_slider_pane_t2_ParamLimits

0x9c86,	// (0x00040657) main_cset_slider_pane_t3_ParamLimits

0x9ca0,	// (0x00040671) main_cset_slider_pane_t4_ParamLimits

0x9cba,	// (0x0004068b) main_cset_slider_pane_t5_ParamLimits

0x9cd4,	// (0x000406a5) main_cset_slider_pane_t6_ParamLimits

0x9ce9,	// (0x000406ba) main_cset_slider_pane_t7_ParamLimits

0x9d13,	// (0x000406e4) main_cset_slider_pane_t8_ParamLimits

0x9d13,	// (0x000406e4) main_cset_slider_pane_t8

0x9d3b,	// (0x0004070c) main_cset_slider_pane_t9_ParamLimits

0x9d3b,	// (0x0004070c) main_cset_slider_pane_t9

0x9d63,	// (0x00040734) main_cset_slider_pane_t10_ParamLimits

0x9d63,	// (0x00040734) main_cset_slider_pane_t10

0x9d8b,	// (0x0004075c) main_cset_slider_pane_t11_ParamLimits

0x9d8b,	// (0x0004075c) main_cset_slider_pane_t11

0x9db3,	// (0x00040784) main_cset_slider_pane_t12_ParamLimits

0x9db3,	// (0x00040784) main_cset_slider_pane_t12

0x9dd0,	// (0x000407a1) main_cset_slider_pane_t13_ParamLimits

0x9dd0,	// (0x000407a1) main_cset_slider_pane_t13

0xf892,	// (0x00046263) main_cset_slider_pane_t_ParamLimits

0xee90,	// (0x00045861) bg_popup_sub_pane_cp011

0xd4f6,	// (0x00043ec7) main_cset_text_pane_g1

0xd4fe,	// (0x00043ecf) main_cset_text_pane_t1

0xd50c,	// (0x00043edd) main_cset_text_pane_t2

0xd51a,	// (0x00043eeb) main_cset_text_pane_t3

0xd528,	// (0x00043ef9) main_cset_text_pane_t4

0xd536,	// (0x00043f07) main_cset_text_pane_t5

0xd544,	// (0x00043f15) main_cset_text_pane_t6

0xd552,	// (0x00043f23) main_cset_text_pane_t7

0x0006,

0xf91f,	// (0x000462f0) main_cset_text_pane_t

0xee90,	// (0x00045861) main_cam4_burst_pane

0xee90,	// (0x00045861) main_cam5_pane

0xd31f,	// (0x00043cf0) bg_button_pane_cp019

0xd328,	// (0x00043cf9) bg_button_pane_cp020

0xd38a,	// (0x00043d5b) main_cset_slider_pane_g7_ParamLimits

0xd38a,	// (0x00043d5b) main_cset_slider_pane_g7

0xd396,	// (0x00043d67) main_cset_slider_pane_g8_ParamLimits

0xd396,	// (0x00043d67) main_cset_slider_pane_g8

0x9bf4,	// (0x000405c5) main_cset_slider_pane_g9_ParamLimits

0x9bf4,	// (0x000405c5) main_cset_slider_pane_g9

0x9c00,	// (0x000405d1) main_cset_slider_pane_g10_ParamLimits

0x9c00,	// (0x000405d1) main_cset_slider_pane_g10

0x9c0c,	// (0x000405dd) main_cset_slider_pane_g11_ParamLimits

0x9c0c,	// (0x000405dd) main_cset_slider_pane_g11

0x9c18,	// (0x000405e9) main_cset_slider_pane_g12_ParamLimits

0x9c18,	// (0x000405e9) main_cset_slider_pane_g12

0x9c24,	// (0x000405f5) main_cset_slider_pane_g13_ParamLimits

0x9c24,	// (0x000405f5) main_cset_slider_pane_g13

0x9c30,	// (0x00040601) main_cset_slider_pane_g14_ParamLimits

0x9c30,	// (0x00040601) main_cset_slider_pane_g14

0x9c3c,	// (0x0004060d) main_cset_slider_pane_g15_ParamLimits

0x9c3c,	// (0x0004060d) main_cset_slider_pane_g15

0xd3d6,	// (0x00043da7) main_cset_slider_pane_t14_ParamLimits

0xd3d6,	// (0x00043da7) main_cset_slider_pane_t14

0xd40f,	// (0x00043de0) main_cset_slider_pane_t15_ParamLimits

0xd40f,	// (0x00043de0) main_cset_slider_pane_t15

0xa240,	// (0x00040c11) aid_cam4_burst_size_cell_ParamLimits

0xa240,	// (0x00040c11) aid_cam4_burst_size_cell

0xa25c,	// (0x00040c2d) grid_cam4_burst_pane_ParamLimits

0xa25c,	// (0x00040c2d) grid_cam4_burst_pane

0xa28e,	// (0x00040c5f) linegrid_cam4_burst_pane_ParamLimits

0xa28e,	// (0x00040c5f) linegrid_cam4_burst_pane

0xa2ac,	// (0x00040c7d) scroll_pane_cp30_ParamLimits

0xa2ac,	// (0x00040c7d) scroll_pane_cp30

0xa2b8,	// (0x00040c89) cell_cam4_burst_pane_ParamLimits

0xa2b8,	// (0x00040c89) cell_cam4_burst_pane

0xd560,	// (0x00043f31) linegrid_cam4_burst_pane_g1_ParamLimits

0xd560,	// (0x00043f31) linegrid_cam4_burst_pane_g1

0xa2f8,	// (0x00040cc9) linegrid_cam4_burst_pane_g2_ParamLimits

0xa2f8,	// (0x00040cc9) linegrid_cam4_burst_pane_g2

0xd56d,	// (0x00043f3e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd56d,	// (0x00043f3e) linegrid_cam4_burst_pane_g3

0x0002,

0xf92e,	// (0x000462ff) linegrid_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x000462ff) linegrid_cam4_burst_pane_g

0xa309,	// (0x00040cda) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa309,	// (0x00040cda) linegrid_cam4_burst_pane_g3_copy1

0xd57a,	// (0x00043f4b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd57a,	// (0x00043f4b) linegrid_cam4_burst_pane_g4

0xa323,	// (0x00040cf4) linegrid_cam4_burst_pane_g5_ParamLimits

0xa323,	// (0x00040cf4) linegrid_cam4_burst_pane_g5

0xa334,	// (0x00040d05) linegrid_cam4_burst_pane_g6_ParamLimits

0xa334,	// (0x00040d05) linegrid_cam4_burst_pane_g6

0xd587,	// (0x00043f58) linegrid_cam4_burst_pane_g7_ParamLimits

0xd587,	// (0x00043f58) linegrid_cam4_burst_pane_g7

0xa34b,	// (0x00040d1c) cell_cam4_burst_pane_g1

0xd5a0,	// (0x00043f71) main_cam5_pane_t1_ParamLimits

0xd5a0,	// (0x00043f71) main_cam5_pane_t1

0xd5b2,	// (0x00043f83) main_cam5_pane_t2_ParamLimits

0xd5b2,	// (0x00043f83) main_cam5_pane_t2

0xd5c4,	// (0x00043f95) main_cam5_pane_t3_ParamLimits

0xd5c4,	// (0x00043f95) main_cam5_pane_t3

0xd5d6,	// (0x00043fa7) main_cam5_pane_t4_ParamLimits

0xd5d6,	// (0x00043fa7) main_cam5_pane_t4

0xd5ee,	// (0x00043fbf) main_cam5_pane_t5_ParamLimits

0xd5ee,	// (0x00043fbf) main_cam5_pane_t5

0xd602,	// (0x00043fd3) main_cam5_pane_t6_ParamLimits

0xd602,	// (0x00043fd3) main_cam5_pane_t6

0xd616,	// (0x00043fe7) main_cam5_pane_t7_ParamLimits

0xd616,	// (0x00043fe7) main_cam5_pane_t7

0xd628,	// (0x00043ff9) main_cam5_pane_t8_ParamLimits

0xd628,	// (0x00043ff9) main_cam5_pane_t8

0xd646,	// (0x00044017) main_cam5_pane_t9_ParamLimits

0xd646,	// (0x00044017) main_cam5_pane_t9

0xd658,	// (0x00044029) main_cam5_pane_t10_ParamLimits

0xd658,	// (0x00044029) main_cam5_pane_t10

0xd66a,	// (0x0004403b) main_cam5_pane_t11_ParamLimits

0xd66a,	// (0x0004403b) main_cam5_pane_t11

0xd67e,	// (0x0004404f) main_cam5_pane_t12_ParamLimits

0xd67e,	// (0x0004404f) main_cam5_pane_t12

0xd695,	// (0x00044066) main_cam5_pane_t13_ParamLimits

0xd695,	// (0x00044066) main_cam5_pane_t13

0x000c,

0xf93a,	// (0x0004630b) main_cam5_pane_t_ParamLimits

0xf93a,	// (0x0004630b) main_cam5_pane_t

0x4ffd,	// (0x0003b9ce) popup_scut_keymap_window_ParamLimits

0x4ffd,	// (0x0003b9ce) popup_scut_keymap_window

0xa35e,	// (0x00040d2f) aid_size_cell_brow_shortcut

0x0e0b,	// (0x000377dc) bg_popup_window_pane_cp010

0xa36a,	// (0x00040d3b) grid_scut_pane

0xa376,	// (0x00040d47) cell_scut_pane_ParamLimits

0xa376,	// (0x00040d47) cell_scut_pane

0xa391,	// (0x00040d62) cell_scut_pane_g1

0xd6b8,	// (0x00044089) cell_scut_pane_t1

0xd6c7,	// (0x00044098) cell_scut_pane_t2

0xa39a,	// (0x00040d6b) cell_scut_pane_t3

0x0002,

0xf955,	// (0x00046326) cell_scut_pane_t

0x8382,	// (0x0003ed53) main_mup3_pane_g8_ParamLimits

0x8382,	// (0x0003ed53) main_mup3_pane_g8

0x95f2,	// (0x0003ffc3) area_vitu2_query_pane_ParamLimits

0x95f2,	// (0x0003ffc3) area_vitu2_query_pane

0xa0fc,	// (0x00040acd) input_focus_pane_cp08

0xd6d6,	// (0x000440a7) area_vitu2_query_pane_g1

0xa3a8,	// (0x00040d79) area_vitu2_query_pane_g2

0x0001,

0xf95c,	// (0x0004632d) area_vitu2_query_pane_g

0xa3b9,	// (0x00040d8a) area_vitu2_query_pane_t1_ParamLimits

0xa3b9,	// (0x00040d8a) area_vitu2_query_pane_t1

0xa3cd,	// (0x00040d9e) area_vitu2_query_pane_t2_ParamLimits

0xa3cd,	// (0x00040d9e) area_vitu2_query_pane_t2

0xa3e1,	// (0x00040db2) area_vitu2_query_pane_t3_ParamLimits

0xa3e1,	// (0x00040db2) area_vitu2_query_pane_t3

0xd6e2,	// (0x000440b3) area_vitu2_query_pane_t4_ParamLimits

0xd6e2,	// (0x000440b3) area_vitu2_query_pane_t4

0xd70a,	// (0x000440db) area_vitu2_query_pane_t5_ParamLimits

0xd70a,	// (0x000440db) area_vitu2_query_pane_t5

0xd732,	// (0x00044103) area_vitu2_query_pane_t6_ParamLimits

0xd732,	// (0x00044103) area_vitu2_query_pane_t6

0x0006,

0xf961,	// (0x00046332) area_vitu2_query_pane_t_ParamLimits

0xf961,	// (0x00046332) area_vitu2_query_pane_t

0xa0e4,	// (0x00040ab5) bg_button_pane_cp018

0xa409,	// (0x00040dda) bg_button_pane_cp021

0xa415,	// (0x00040de6) bg_button_pane_cp022

0xa438,	// (0x00040e09) input_focus_pane_cp09

0x703f,	// (0x0003da10) aid_size_touch_mv_arrow_left

0x706a,	// (0x0003da3b) aid_size_touch_mv_arrow_right

0x9c54,	// (0x00040625) main_cset_slider_pane_g16_ParamLimits

0x9c54,	// (0x00040625) main_cset_slider_pane_g16

0x9c60,	// (0x00040631) main_cset_slider_pane_g17_ParamLimits

0x9c60,	// (0x00040631) main_cset_slider_pane_g17

0xa34b,	// (0x00040d1c) cell_cam4_burst_pane_g1_ParamLimits

0xee90,	// (0x00045861) compa_mode_pane

0x9e36,	// (0x00040807) popup_vtel_slider_window_g3_ParamLimits

0x9e36,	// (0x00040807) popup_vtel_slider_window_g3

0x9e4a,	// (0x0004081b) popup_vtel_slider_window_g4_ParamLimits

0x9e4a,	// (0x0004081b) popup_vtel_slider_window_g4

0x9e5e,	// (0x0004082f) popup_vtel_slider_window_t1_ParamLimits

0x9e5e,	// (0x0004082f) popup_vtel_slider_window_t1

0xee90,	// (0x00045861) main_cl_pane

0x7c01,	// (0x0003e5d2) popup_imed_adjust2_window_ParamLimits

0x17d3,	// (0x000381a4) bg_tb_trans_pane_cp05_ParamLimits

0x3265,	// (0x00039c36) popup_imed_adjust2_window_g1_ParamLimits

0x3274,	// (0x00039c45) popup_imed_adjust2_window_g2_ParamLimits

0x3274,	// (0x00039c45) popup_imed_adjust2_window_g2

0x3280,	// (0x00039c51) popup_imed_adjust2_window_g3_ParamLimits

0x3280,	// (0x00039c51) popup_imed_adjust2_window_g3

0x0002,

0xf6e1,	// (0x000460b2) popup_imed_adjust2_window_g_ParamLimits

0xf6e1,	// (0x000460b2) popup_imed_adjust2_window_g

0x328c,	// (0x00039c5d) popup_imed_adjust2_window_t1_ParamLimits

0x32a4,	// (0x00039c75) slider_imed_adjust_pane_ParamLimits

0x32b8,	// (0x00039c89) slider_imed_adjust_pane_g1_ParamLimits

0x32c8,	// (0x00039c99) slider_imed_adjust_pane_g2_ParamLimits

0x32d8,	// (0x00039ca9) slider_imed_adjust_pane_g3_ParamLimits

0x32e9,	// (0x00039cba) slider_imed_adjust_pane_g4_ParamLimits

0xf6e8,	// (0x000460b9) slider_imed_adjust_pane_g_ParamLimits

0x9335,	// (0x0003fd06) aid_touch_area_cam4_ParamLimits

0x9335,	// (0x0003fd06) aid_touch_area_cam4

0x9345,	// (0x0003fd16) battery_pane_cp01

0x93cc,	// (0x0003fd9d) main_camera4_pane_g6_ParamLimits

0x93cc,	// (0x0003fd9d) main_camera4_pane_g6

0x93ea,	// (0x0003fdbb) main_camera4_pane_t2_ParamLimits

0x93ea,	// (0x0003fdbb) main_camera4_pane_t2

0x0001,

0xf7e0,	// (0x000461b1) main_camera4_pane_t_ParamLimits

0xf7e0,	// (0x000461b1) main_camera4_pane_t

0x946d,	// (0x0003fe3e) aid_touch_area_vid4_ParamLimits

0x946d,	// (0x0003fe3e) aid_touch_area_vid4

0x94ad,	// (0x0003fe7e) main_video4_pane_g5_ParamLimits

0x94ad,	// (0x0003fe7e) main_video4_pane_g5

0x94d3,	// (0x0003fea4) vid4_progress_pane_ParamLimits

0x94d3,	// (0x0003fea4) vid4_progress_pane

0xd3a2,	// (0x00043d73) main_cset_slider_pane_g18_ParamLimits

0xd3a2,	// (0x00043d73) main_cset_slider_pane_g18

0xd594,	// (0x00043f65) cell_cam4_burst_pane_g2_ParamLimits

0xd594,	// (0x00043f65) cell_cam4_burst_pane_g2

0x0001,

0xf935,	// (0x00046306) cell_cam4_burst_pane_g_ParamLimits

0xf935,	// (0x00046306) cell_cam4_burst_pane_g

0xa449,	// (0x00040e1a) bg_cl_pane_ParamLimits

0xa449,	// (0x00040e1a) bg_cl_pane

0xa455,	// (0x00040e26) cl_header_pane_ParamLimits

0xa455,	// (0x00040e26) cl_header_pane

0xa461,	// (0x00040e32) cl_listscroll_pane_ParamLimits

0xa461,	// (0x00040e32) cl_listscroll_pane

0xd77e,	// (0x0004414f) bg_cl_pane_g1

0xd786,	// (0x00044157) bg_cl_pane_g2

0xd78e,	// (0x0004415f) bg_cl_pane_g3

0xd796,	// (0x00044167) bg_cl_pane_g4

0xd79e,	// (0x0004416f) bg_cl_pane_g5

0xd7a6,	// (0x00044177) bg_cl_pane_g6

0xd7ae,	// (0x0004417f) bg_cl_pane_g7

0xd7b6,	// (0x00044187) bg_cl_pane_g8

0xd7be,	// (0x0004418f) bg_cl_pane_g9

0x0008,

0xf970,	// (0x00046341) bg_cl_pane_g

0xa46d,	// (0x00040e3e) aid_height_cl_leading_ParamLimits

0xa46d,	// (0x00040e3e) aid_height_cl_leading

0xa479,	// (0x00040e4a) aid_height_cl_text_ParamLimits

0xa479,	// (0x00040e4a) aid_height_cl_text

0x0b6d,	// (0x0003753e) bg_cl_header_pane_ParamLimits

0x0b6d,	// (0x0003753e) bg_cl_header_pane

0xa491,	// (0x00040e62) cl_header_pane_g1_ParamLimits

0xa491,	// (0x00040e62) cl_header_pane_g1

0xa49e,	// (0x00040e6f) cl_header_pane_t1_ParamLimits

0xa49e,	// (0x00040e6f) cl_header_pane_t1

0xd7c6,	// (0x00044197) cl_list_pane

0xd375,	// (0x00043d46) hc_scroll_pane_cp01

0x1015,	// (0x000379e6) bg_cl_header_pane_g1

0xd231,	// (0x00043c02) bg_cl_header_pane_g2

0x1035,	// (0x00037a06) bg_cl_header_pane_g3

0xd241,	// (0x00043c12) bg_cl_header_pane_g4

0xd239,	// (0x00043c0a) bg_cl_header_pane_g5

0xd4af,	// (0x00043e80) bg_cl_header_pane_g6

0xd259,	// (0x00043c2a) bg_cl_header_pane_g7

0xd261,	// (0x00043c32) bg_cl_header_pane_g8

0xd251,	// (0x00043c22) bg_cl_header_pane_g9

0x0008,

0xf983,	// (0x00046354) bg_cl_header_pane_g

0xa4b0,	// (0x00040e81) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa4b0,	// (0x00040e81) hc_cl_list_double_graphic_heading_pane

0xa4c0,	// (0x00040e91) hc_cl_list_single_graphic_pane_ParamLimits

0xa4c0,	// (0x00040e91) hc_cl_list_single_graphic_pane

0xa4d2,	// (0x00040ea3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa4d2,	// (0x00040ea3) hc_cl_list_single_graphic_pane_g1

0xa4de,	// (0x00040eaf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa4de,	// (0x00040eaf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf996,	// (0x00046367) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf996,	// (0x00046367) hc_cl_list_single_graphic_pane_g

0xa4f2,	// (0x00040ec3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa4f2,	// (0x00040ec3) hc_cl_list_single_graphic_pane_t1

0xa4d2,	// (0x00040ea3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa4d2,	// (0x00040ea3) hc_cl_list_double_graphic_heading_pane_g1

0xa507,	// (0x00040ed8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa507,	// (0x00040ed8) hc_cl_list_double_graphic_heading_pane_g2

0xa51b,	// (0x00040eec) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa51b,	// (0x00040eec) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf99b,	// (0x0004636c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf99b,	// (0x0004636c) hc_cl_list_double_graphic_heading_pane_g

0xa52f,	// (0x00040f00) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa52f,	// (0x00040f00) hc_cl_list_double_graphic_heading_pane_t1

0xa544,	// (0x00040f15) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa544,	// (0x00040f15) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9a2,	// (0x00046373) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9a2,	// (0x00046373) hc_cl_list_double_graphic_heading_pane_t

0xa561,	// (0x00040f32) vid4_progress_pane_g1

0xa571,	// (0x00040f42) vid4_progress_pane_g2

0xa581,	// (0x00040f52) vid4_progress_pane_g3

0xa593,	// (0x00040f64) vid4_progress_pane_g4

0x0004,

0xf9a7,	// (0x00046378) vid4_progress_pane_g

0xa5b1,	// (0x00040f82) vid4_progress_pane_t1

0xa5cb,	// (0x00040f9c) vid4_progress_pane_t2

0x0002,

0xf9b2,	// (0x00046383) vid4_progress_pane_t

0xa5f9,	// (0x00040fca) wait_bar_pane_cp07

0x2ba3,	// (0x00039574) blid_firmament_pane_ParamLimits

0x2be6,	// (0x000395b7) popup_blid_sat_info2_window_g1

0x2c0a,	// (0x000395db) popup_blid_sat_info2_window_t3

0x2c18,	// (0x000395e9) popup_blid_sat_info2_window_t4

0x2c26,	// (0x000395f7) popup_blid_sat_info2_window_t5

0x2c34,	// (0x00039605) popup_blid_sat_info2_window_t6

0x2c44,	// (0x00039615) popup_blid_sat_info2_window_t7

0x2c52,	// (0x00039623) popup_blid_sat_info2_window_t8

0x2c60,	// (0x00039631) popup_blid_sat_info2_window_t9

0x2c6e,	// (0x0003963f) popup_blid_sat_info2_window_t10

0x2d35,	// (0x00039706) aid_firma_cardinal_ParamLimits

0x2d49,	// (0x0003971a) blid_firmament_pane_t1_ParamLimits

0x2d60,	// (0x00039731) blid_firmament_pane_t2_ParamLimits

0x2d77,	// (0x00039748) blid_firmament_pane_t3_ParamLimits

0x2d8e,	// (0x0003975f) blid_firmament_pane_t4_ParamLimits

0xf5da,	// (0x00045fab) blid_firmament_pane_t_ParamLimits

0x2da5,	// (0x00039776) blid_sat_info_pane_ParamLimits

0x0b14,	// (0x000374e5) main_cam_set_pane_ParamLimits

0x8a3c,	// (0x0003f40d) aid_size_cell_colour_35_ParamLimits

0x8a56,	// (0x0003f427) aid_size_cell_colour_112_ParamLimits

0x8a6d,	// (0x0003f43e) aid_size_cell_effect_ParamLimits

0x0b14,	// (0x000374e5) bg_tb_trans_pane_cp02_ParamLimits

0x12fe,	// (0x00037ccf) heading_imed_pane_ParamLimits

0x8a87,	// (0x0003f458) listscroll_imed_pane_ParamLimits

0x20d6,	// (0x00038aa7) popup_call2_audio_first_window_g5_ParamLimits

0x20d6,	// (0x00038aa7) popup_call2_audio_first_window_g5

0x903b,	// (0x0003fa0c) aid_size_touch_image3_arrow_left_ParamLimits

0x903b,	// (0x0003fa0c) aid_size_touch_image3_arrow_left

0x9051,	// (0x0003fa22) aid_size_touch_image3_arrow_right_ParamLimits

0x9051,	// (0x0003fa22) aid_size_touch_image3_arrow_right

0xa5e4,	// (0x00040fb5) vid4_progress_pane_t3

0x8bda,	// (0x0003f5ab) main_hwr_training_symbol_option_pane_ParamLimits

0x8bda,	// (0x0003f5ab) main_hwr_training_symbol_option_pane

0x340d,	// (0x00039dde) popup_hwr_training_preview_window_ParamLimits

0x340d,	// (0x00039dde) popup_hwr_training_preview_window

0x8c3b,	// (0x0003f60c) hwr_training_navi_pane_g5_ParamLimits

0x8c3b,	// (0x0003f60c) hwr_training_navi_pane_g5

0xd21f,	// (0x00043bf0) popup_char_count_window

0x0b6d,	// (0x0003753e) bg_popup_sub_pane_cp20_ParamLimits

0x9f51,	// (0x00040922) list_vitu2_match_list_pane_ParamLimits

0x9f5d,	// (0x0004092e) vitu2_page_scroll_pane_ParamLimits

0x9f5d,	// (0x0004092e) vitu2_page_scroll_pane

0xd7d8,	// (0x000441a9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7d8,	// (0x000441a9) list_single_hwr_training_symbol_option_pane

0xd7eb,	// (0x000441bc) list_single_hwr_training_symbol_option_pane_g1

0xd7f3,	// (0x000441c4) list_single_hwr_training_symbol_option_pane_t1

0xd801,	// (0x000441d2) bg_button_pane_cp023

0xd80a,	// (0x000441db) bg_button_pane_cp024

0xd83d,	// (0x0004420e) vitu2_page_scroll_pane_g1

0xd845,	// (0x00044216) vitu2_page_scroll_pane_g2

0x0001,

0xf9b9,	// (0x0004638a) vitu2_page_scroll_pane_g

0xd84d,	// (0x0004421e) vitu2_page_scroll_pane_t1

0xd0d2,	// (0x00043aa3) popup_char_count_window_g1

0xd85c,	// (0x0004422d) popup_char_count_window_g2

0xd0db,	// (0x00043aac) popup_char_count_window_g3

0x0002,

0xf9be,	// (0x0004638f) popup_char_count_window_g

0xd865,	// (0x00044236) popup_char_count_window_t1

0xee90,	// (0x00045861) main_vded2_pane

0x3251,	// (0x00039c22) aid_size_cell_imed_line

0x325b,	// (0x00039c2c) grid_imed_line_width_pane

0x9547,	// (0x0003ff18) vid4_indicators_pane_g4

0xd873,	// (0x00044244) cell_imed_line_width_pane_ParamLimits

0xd873,	// (0x00044244) cell_imed_line_width_pane

0xd889,	// (0x0004425a) cell_imed_line_width_pane_g1

0xd892,	// (0x00044263) cell_imed_line_width_pane_g2

0x0001,

0xf9c5,	// (0x00046396) cell_imed_line_width_pane_g

0xa60c,	// (0x00040fdd) main_vded2_pane_g1_ParamLimits

0xa60c,	// (0x00040fdd) main_vded2_pane_g1

0xa61b,	// (0x00040fec) main_vded2_pane_g2_ParamLimits

0xa61b,	// (0x00040fec) main_vded2_pane_g2

0x0001,

0xf9ca,	// (0x0004639b) main_vded2_pane_g_ParamLimits

0xf9ca,	// (0x0004639b) main_vded2_pane_g

0xa629,	// (0x00040ffa) vded2_slider_pane_ParamLimits

0xa629,	// (0x00040ffa) vded2_slider_pane

0xa636,	// (0x00041007) aid_size_touch_vded2_end

0xa640,	// (0x00041011) aid_size_touch_vded2_playhead

0xd89a,	// (0x0004426b) aid_size_touch_vded2_start

0xd8a2,	// (0x00044273) vded2_slider_bg_pane

0xd8ab,	// (0x0004427c) vded2_slider_pane_g1

0xd8b4,	// (0x00044285) vded2_slider_pane_g2

0xa648,	// (0x00041019) vded2_slider_pane_g3

0x0002,

0xf9cf,	// (0x000463a0) vded2_slider_pane_g

0xd8bc,	// (0x0004428d) vded2_slider_bg_pane_g1

0xd8c5,	// (0x00044296) vded2_slider_bg_pane_g2

0xd8ce,	// (0x0004429f) vded2_slider_bg_pane_g3

0x0002,

0xf9d6,	// (0x000463a7) vded2_slider_bg_pane_g

0x749d,	// (0x0003de6e) aid_postcard_touch_down_pane_ParamLimits

0x749d,	// (0x0003de6e) aid_postcard_touch_down_pane

0x74ad,	// (0x0003de7e) aid_postcard_touch_up_pane_ParamLimits

0x74ad,	// (0x0003de7e) aid_postcard_touch_up_pane

0xee90,	// (0x00045861) main_blid2_pane

0x7b80,	// (0x0003e551) popup_blid2_search_window

0xee90,	// (0x00045861) blid2_gps_pane

0xee90,	// (0x00045861) blid2_navig_pane

0xee90,	// (0x00045861) blid2_search_pane

0xee90,	// (0x00045861) blid2_tripm_pane

0xa651,	// (0x00041022) blid2_search_pane_g1_ParamLimits

0xa651,	// (0x00041022) blid2_search_pane_g1

0xa65d,	// (0x0004102e) blid2_search_pane_t1_ParamLimits

0xa65d,	// (0x0004102e) blid2_search_pane_t1

0xa66f,	// (0x00041040) aid_size_cell_blid2_gps_ParamLimits

0xa66f,	// (0x00041040) aid_size_cell_blid2_gps

0xa67f,	// (0x00041050) blid2_gps_pane_g1_ParamLimits

0xa67f,	// (0x00041050) blid2_gps_pane_g1

0xa68b,	// (0x0004105c) grid_blid2_satellite_pane_ParamLimits

0xa68b,	// (0x0004105c) grid_blid2_satellite_pane

0xa699,	// (0x0004106a) blid2_navig_pane_g1_ParamLimits

0xa699,	// (0x0004106a) blid2_navig_pane_g1

0xa6a5,	// (0x00041076) blid2_navig_pane_t1_ParamLimits

0xa6a5,	// (0x00041076) blid2_navig_pane_t1

0xa6b7,	// (0x00041088) blid2_navig_pane_t2_ParamLimits

0xa6b7,	// (0x00041088) blid2_navig_pane_t2

0x0001,

0xf9dd,	// (0x000463ae) blid2_navig_pane_t_ParamLimits

0xf9dd,	// (0x000463ae) blid2_navig_pane_t

0xa6c9,	// (0x0004109a) blid2_navig_ring_pane_ParamLimits

0xa6c9,	// (0x0004109a) blid2_navig_ring_pane

0xa6d9,	// (0x000410aa) blid2_speed_pane_ParamLimits

0xa6d9,	// (0x000410aa) blid2_speed_pane

0xa6e5,	// (0x000410b6) blid2_tripm_pane_g1_ParamLimits

0xa6e5,	// (0x000410b6) blid2_tripm_pane_g1

0xa6f5,	// (0x000410c6) blid2_tripm_pane_g2_ParamLimits

0xa6f5,	// (0x000410c6) blid2_tripm_pane_g2

0xa701,	// (0x000410d2) blid2_tripm_pane_g3_ParamLimits

0xa701,	// (0x000410d2) blid2_tripm_pane_g3

0xa70d,	// (0x000410de) blid2_tripm_pane_g4_ParamLimits

0xa70d,	// (0x000410de) blid2_tripm_pane_g4

0xa719,	// (0x000410ea) blid2_tripm_pane_g5_ParamLimits

0xa719,	// (0x000410ea) blid2_tripm_pane_g5

0x0005,

0xf9e2,	// (0x000463b3) blid2_tripm_pane_g_ParamLimits

0xf9e2,	// (0x000463b3) blid2_tripm_pane_g

0xa735,	// (0x00041106) blid2_tripm_pane_t1_ParamLimits

0xa735,	// (0x00041106) blid2_tripm_pane_t1

0xa747,	// (0x00041118) blid2_tripm_pane_t2_ParamLimits

0xa747,	// (0x00041118) blid2_tripm_pane_t2

0xa759,	// (0x0004112a) blid2_tripm_pane_t3_ParamLimits

0xa759,	// (0x0004112a) blid2_tripm_pane_t3

0x0003,

0xf9ef,	// (0x000463c0) blid2_tripm_pane_t_ParamLimits

0xf9ef,	// (0x000463c0) blid2_tripm_pane_t

0xa78b,	// (0x0004115c) cell_blid2_satellite_pane_ParamLimits

0xa78b,	// (0x0004115c) cell_blid2_satellite_pane

0xa7a9,	// (0x0004117a) cell_blid2_satellite_pane_g1

0xd8d7,	// (0x000442a8) cell_blid2_satellite_pane_t1

0x0bb9,	// (0x0003758a) blid2_speed_pane_g1

0xd8e5,	// (0x000442b6) blid2_speed_pane_t1

0xd8f3,	// (0x000442c4) blid2_speed_pane_t2

0x0001,

0xf9f8,	// (0x000463c9) blid2_speed_pane_t

0x0bb9,	// (0x0003758a) blid2_navig_ring_pane_g1

0xa7b2,	// (0x00041183) blid2_navig_ring_pane_g2

0xa7ba,	// (0x0004118b) blid2_navig_ring_pane_g3

0xa7c2,	// (0x00041193) blid2_navig_ring_pane_g4

0xa7ca,	// (0x0004119b) blid2_navig_ring_pane_g5

0x0004,

0xf9fd,	// (0x000463ce) blid2_navig_ring_pane_g

0xee90,	// (0x00045861) bg_popup_window_pane_cp011

0xd901,	// (0x000442d2) popup_blid2_search_window_g1

0xd909,	// (0x000442da) popup_blid2_search_window_t1

0xd917,	// (0x000442e8) popup_blid2_search_window_t2

0x0001,

0xfa08,	// (0x000463d9) popup_blid2_search_window_t

0x0f24,	// (0x000378f5) main_browser_pane_g1

0x0c17,	// (0x000375e8) main_browser_pane_ParamLimits

0x0b14,	// (0x000374e5) bg_button_pane_cp011_ParamLimits

0x9875,	// (0x00040246) cell_vitu2_function_pane_g1_ParamLimits

0x17d3,	// (0x000381a4) bg_popup_sub_pane_cp22_ParamLimits

0xa0fc,	// (0x00040acd) input_focus_pane_cp08_ParamLimits

0xa118,	// (0x00040ae9) popup_vitu2_query_button_pane_ParamLimits

0xa118,	// (0x00040ae9) popup_vitu2_query_button_pane

0xa127,	// (0x00040af8) popup_vitu2_query_input_button_pane

0xd4ea,	// (0x00043ebb) popup_vitu2_query_window_g1_ParamLimits

0xa131,	// (0x00040b02) popup_vitu2_query_window_g2_ParamLimits

0xf909,	// (0x000462da) popup_vitu2_query_window_g_ParamLimits

0xee90,	// (0x00045861) bg_button_pane_cp026

0xa7d2,	// (0x000411a3) popup_vitu2_query_input_button_pane_g1

0xee90,	// (0x00045861) bg_button_pane_cp025

0xd925,	// (0x000442f6) popup_vitu2_query_button_pane_t1

0x8043,	// (0x0003ea14) main_mp3_pane_t6

0x8053,	// (0x0003ea24) popup_slider_window_cp01

0x9422,	// (0x0003fdf3) cam4_battery_pane

0x9500,	// (0x0003fed1) cam4_battery_pane_cp02

0xa559,	// (0x00040f2a) cam4_battery_pane_cp01

0xa559,	// (0x00040f2a) cam4_battery_pane_cp03

0x0bb9,	// (0x0003758a) cam4_battery_pane_g1

0xd933,	// (0x00044304) cam4_battery_pane_g2

0x0001,

0xfa0d,	// (0x000463de) cam4_battery_pane_g

0x2c7c,	// (0x0003964d) popup_blid_sat_info2_window_t11

0x703f,	// (0x0003da10) aid_size_touch_mv_arrow_left_ParamLimits

0x706a,	// (0x0003da3b) aid_size_touch_mv_arrow_right_ParamLimits

0x165a,	// (0x0003802b) navi_pane_g1_ParamLimits

0x70a9,	// (0x0003da7a) navi_pane_g2_ParamLimits

0x70d7,	// (0x0003daa8) navi_pane_g3_ParamLimits

0xf311,	// (0x00045ce2) navi_pane_g_ParamLimits

0x7131,	// (0x0003db02) navi_pane_mv_t1_ParamLimits

0x8a93,	// (0x0003f464) grid_imed_effect_pane_ParamLimits

0x5be6,	// (0x0003c5b7) aid_placing_vt_slider_lsc

0x0e62,	// (0x00037833) aid_placing_vt_slider_prt

0x0b14,	// (0x000374e5) bg_tb_trans_pane_cp01_ParamLimits

0x2ee4,	// (0x000398b5) popup_image_details_window_g1_ParamLimits

0x2ef7,	// (0x000398c8) popup_image_details_window_g2_ParamLimits

0x2f0c,	// (0x000398dd) popup_image_details_window_g3_ParamLimits

0x2f0c,	// (0x000398dd) popup_image_details_window_g3

0xf61a,	// (0x00045feb) popup_image_details_window_g_ParamLimits

0x2f20,	// (0x000398f1) popup_image_details_window_t1_ParamLimits

0x2f32,	// (0x00039903) popup_image_details_window_t2_ParamLimits

0x2f4b,	// (0x0003991c) popup_image_details_window_t3_ParamLimits

0x2f5f,	// (0x00039930) popup_image_details_window_t4_ParamLimits

0x2f7a,	// (0x0003994b) popup_image_details_window_t5_ParamLimits

0xf621,	// (0x00045ff2) popup_image_details_window_t_ParamLimits

0xa485,	// (0x00040e56) cl_header_name_pane_ParamLimits

0xa485,	// (0x00040e56) cl_header_name_pane

0xa7da,	// (0x000411ab) cl_header_name_pane_t1_ParamLimits

0xa7da,	// (0x000411ab) cl_header_name_pane_t1

0xa7f1,	// (0x000411c2) cl_header_name_pane_t2_ParamLimits

0xa7f1,	// (0x000411c2) cl_header_name_pane_t2

0xa81b,	// (0x000411ec) cl_header_name_pane_t3_ParamLimits

0xa81b,	// (0x000411ec) cl_header_name_pane_t3

0x0002,

0xfa12,	// (0x000463e3) cl_header_name_pane_t_ParamLimits

0xfa12,	// (0x000463e3) cl_header_name_pane_t

0x7102,	// (0x0003dad3) navi_pane_mv_g2_ParamLimits

0xd1bb,	// (0x00043b8c) field_vitu2_entry_pane_g1_ParamLimits

0xd1c7,	// (0x00043b98) field_vitu2_entry_pane_g2_ParamLimits

0x17b1,	// (0x00038182) field_vitu2_entry_pane_g3_ParamLimits

0x17b1,	// (0x00038182) field_vitu2_entry_pane_g3

0xf812,	// (0x000461e3) field_vitu2_entry_pane_g_ParamLimits

0x973b,	// (0x0004010c) cell_vitu2_itu_pane_g1_ParamLimits

0x9753,	// (0x00040124) cell_vitu2_itu_pane_g2_ParamLimits

0x9753,	// (0x00040124) cell_vitu2_itu_pane_g2

0x0001,

0xf81e,	// (0x000461ef) cell_vitu2_itu_pane_g_ParamLimits

0xf81e,	// (0x000461ef) cell_vitu2_itu_pane_g

0x0b14,	// (0x000374e5) bg_vkb2_func_pane_cp05_ParamLimits

0x0b14,	// (0x000374e5) bg_vkb2_func_pane_cp05

0x0b14,	// (0x000374e5) bg_vkb2_func_pane_cp03

0x0b14,	// (0x000374e5) bg_vkb2_func_pane_cp04

0x0b14,	// (0x000374e5) bg_vkb2_func_pane_cp10_ParamLimits

0x0b14,	// (0x000374e5) bg_vkb2_func_pane_cp10

0xa426,	// (0x00040df7) bg_vkb2_func_pane_cp08

0xa0e4,	// (0x00040ab5) bg_vkb2_func_pane_cp06

0xa409,	// (0x00040dda) bg_vkb2_func_pane_cp07

0xd813,	// (0x000441e4) bg_vkb2_func_pane_cp11_ParamLimits

0xd813,	// (0x000441e4) bg_vkb2_func_pane_cp11

0xd828,	// (0x000441f9) bg_vkb2_func_pane_cp12_ParamLimits

0xd828,	// (0x000441f9) bg_vkb2_func_pane_cp12

0xee90,	// (0x00045861) bg_vkb2_func_pane_cp09

0xd231,	// (0x00043c02) bg_vkb2_func_pane_g1

0x1035,	// (0x00037a06) bg_vkb2_func_pane_g2

0xd239,	// (0x00043c0a) bg_vkb2_func_pane_g3

0xd241,	// (0x00043c12) bg_vkb2_func_pane_g4

0xd4af,	// (0x00043e80) bg_vkb2_func_pane_g5

0xd259,	// (0x00043c2a) bg_vkb2_func_pane_g6

0xd261,	// (0x00043c32) bg_vkb2_func_pane_g7

0xd251,	// (0x00043c22) bg_vkb2_func_pane_g8

0x1015,	// (0x000379e6) bg_vkb2_func_pane_g9

0x0008,

0xfa19,	// (0x000463ea) bg_vkb2_func_pane_g

0xa727,	// (0x000410f8) blid2_tripm_pane_g6_ParamLimits

0xa727,	// (0x000410f8) blid2_tripm_pane_g6

0xd0fc,	// (0x00043acd) mp4_progress_pane_g1

0xa77f,	// (0x00041150) blid2_tripm_values_pane_ParamLimits

0xa77f,	// (0x00041150) blid2_tripm_values_pane

0xa840,	// (0x00041211) blid2_tripm_values_pane_t1

0xa84e,	// (0x0004121f) blid2_tripm_values_pane_t2

0xd93d,	// (0x0004430e) blid2_tripm_values_pane_t3

0xa85c,	// (0x0004122d) blid2_tripm_values_pane_t4

0xa86a,	// (0x0004123b) blid2_tripm_values_pane_t5

0xa878,	// (0x00041249) blid2_tripm_values_pane_t6

0xd94b,	// (0x0004431c) blid2_tripm_values_pane_t7

0xa886,	// (0x00041257) blid2_tripm_values_pane_t8

0xa894,	// (0x00041265) blid2_tripm_values_pane_t9

0x0008,

0xfa2c,	// (0x000463fd) blid2_tripm_values_pane_t

0x5c24,	// (0x0003c5f5) call_video_pane_t1_ParamLimits

0x5c41,	// (0x0003c612) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x00045b8b) call_video_pane_t_ParamLimits

0x4445,	// (0x0003ae16) msg_header_pane_g1_ParamLimits

0x18a1,	// (0x00038272) msg_header_pane_g2_ParamLimits

0x18a1,	// (0x00038272) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00045d80) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00045d80) msg_header_pane_g

0x0c17,	// (0x000375e8) main_clock2_pane_ParamLimits

0x880c,	// (0x0003f1dd) grid_clock2_toolbar_pane_ParamLimits

0x880c,	// (0x0003f1dd) grid_clock2_toolbar_pane

0x880c,	// (0x0003f1dd) listscroll_clock2_pane_ParamLimits

0x880c,	// (0x0003f1dd) listscroll_clock2_pane

0x88bb,	// (0x0003f28c) main_clock2_pane_t3_ParamLimits

0x88bb,	// (0x0003f28c) main_clock2_pane_t3

0x88cd,	// (0x0003f29e) main_clock2_pane_t4_ParamLimits

0x88cd,	// (0x0003f29e) main_clock2_pane_t4

0xd959,	// (0x0004432a) cell_clock2_toolbar_pane

0xd961,	// (0x00044332) cell_clock2_toolbar_pane_cp01

0xd961,	// (0x00044332) cell_clock2_toolbar_pane_cp02

0xd969,	// (0x0004433a) cell_clock2_toolbar_pane_cp03

0xd971,	// (0x00044342) list_clock2_pane

0x15c0,	// (0x00037f91) scroll_pane_cp10

0xd979,	// (0x0004434a) list_single_clock2_pane_ParamLimits

0xd979,	// (0x0004434a) list_single_clock2_pane

0x0e0b,	// (0x000377dc) list_highlight_pane_cp08

0xd986,	// (0x00044357) list_single_clock2_pane_t1

0xd994,	// (0x00044365) list_single_clock2_pane_t2

0x0001,

0xfa3f,	// (0x00046410) list_single_clock2_pane_t

0xee90,	// (0x00045861) bg_button_pane_cp10

0xd9a2,	// (0x00044373) cell_clock2_toolbar_pane_g1

0x73ff,	// (0x0003ddd0) aid_main_viewer_pane_g1_ParamLimits

0x73ff,	// (0x0003ddd0) aid_main_viewer_pane_g1

0x740b,	// (0x0003dddc) aid_main_viewer_pane_g2_ParamLimits

0x740b,	// (0x0003dddc) aid_main_viewer_pane_g2

0x7417,	// (0x0003dde8) aid_main_viewer_pane_g3_ParamLimits

0x7417,	// (0x0003dde8) aid_main_viewer_pane_g3

0x7428,	// (0x0003ddf9) aid_main_viewer_pane_g4_ParamLimits

0x7428,	// (0x0003ddf9) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00045d91) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00045d91) aid_main_viewer_pane_g

0x7b58,	// (0x0003e529) main_calc_pane_ParamLimits

0x7b65,	// (0x0003e536) main_dialer2_pane_ParamLimits

0xee90,	// (0x00045861) main_cam6_pane

0xee90,	// (0x00045861) main_vid6_pane

0x8818,	// (0x0003f1e9) listscroll_gen_pane_cp06_ParamLimits

0x8818,	// (0x0003f1e9) listscroll_gen_pane_cp06

0x88df,	// (0x0003f2b0) main_clock2_pane_t5_ParamLimits

0x88df,	// (0x0003f2b0) main_clock2_pane_t5

0x892c,	// (0x0003f2fd) aid_call2_pane_cp10_ParamLimits

0x893e,	// (0x0003f30f) aid_call_pane_cp10_ParamLimits

0x162f,	// (0x00038000) popup_clock_analogue_window_cp10_g1_ParamLimits

0x162f,	// (0x00038000) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8950,	// (0x0003f321) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8950,	// (0x0003f321) popup_clock_analogue_window_cp10_g4_ParamLimits

0x162f,	// (0x00038000) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6d6,	// (0x000460a7) popup_clock_analogue_window_cp10_g_ParamLimits

0x8966,	// (0x0003f337) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd166,	// (0x00043b37) cell_dialer2_keypad_pane_g2_ParamLimits

0xd166,	// (0x00043b37) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b1,	// (0x00046182) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b1,	// (0x00046182) cell_dialer2_keypad_pane_g

0x0bc3,	// (0x00037594) cell_dialer2_keypad_pane_t1

0x9b49,	// (0x0004051a) main_cset_text2_pane_ParamLimits

0x9b49,	// (0x0004051a) main_cset_text2_pane

0xd6d6,	// (0x000440a7) area_vitu2_query_pane_g1_ParamLimits

0xa3a8,	// (0x00040d79) area_vitu2_query_pane_g2_ParamLimits

0xf95c,	// (0x0004632d) area_vitu2_query_pane_g_ParamLimits

0xd75a,	// (0x0004412b) area_vitu2_query_pane_t7_ParamLimits

0xd75a,	// (0x0004412b) area_vitu2_query_pane_t7

0xa0e4,	// (0x00040ab5) bg_button_pane_cp018_ParamLimits

0xa409,	// (0x00040dda) bg_button_pane_cp021_ParamLimits

0xa415,	// (0x00040de6) bg_button_pane_cp022_ParamLimits

0xa426,	// (0x00040df7) bg_vkb2_func_pane_cp08_ParamLimits

0xa0e4,	// (0x00040ab5) bg_vkb2_func_pane_cp06_ParamLimits

0xa409,	// (0x00040dda) bg_vkb2_func_pane_cp07_ParamLimits

0xa438,	// (0x00040e09) input_focus_pane_cp09_ParamLimits

0xa8a2,	// (0x00041273) cam6_autofocus_pane_ParamLimits

0xa8a2,	// (0x00041273) cam6_autofocus_pane

0xa8c4,	// (0x00041295) cam6_image_uncrop_pane_ParamLimits

0xa8c4,	// (0x00041295) cam6_image_uncrop_pane

0xa8fa,	// (0x000412cb) cam6_indi_pane_ParamLimits

0xa8fa,	// (0x000412cb) cam6_indi_pane

0xa914,	// (0x000412e5) cam6_mode_pane_ParamLimits

0xa914,	// (0x000412e5) cam6_mode_pane

0xa928,	// (0x000412f9) cam6_timer_pane_ParamLimits

0xa928,	// (0x000412f9) cam6_timer_pane

0xa93c,	// (0x0004130d) cam6_zoom_pane_ParamLimits

0xa93c,	// (0x0004130d) cam6_zoom_pane

0xa958,	// (0x00041329) cam6_mode_pane_g1_ParamLimits

0xa958,	// (0x00041329) cam6_mode_pane_g1

0xa964,	// (0x00041335) cam6_mode_pane_g2_ParamLimits

0xa964,	// (0x00041335) cam6_mode_pane_g2

0xa970,	// (0x00041341) cam6_mode_pane_g3_ParamLimits

0xa970,	// (0x00041341) cam6_mode_pane_g3

0xa97c,	// (0x0004134d) cam6_mode_pane_g4_ParamLimits

0xa97c,	// (0x0004134d) cam6_mode_pane_g4

0x0003,

0xfa44,	// (0x00046415) cam6_mode_pane_g_ParamLimits

0xfa44,	// (0x00046415) cam6_mode_pane_g

0x3491,	// (0x00039e62) bg_tb_trans_pane_cp08_ParamLimits

0x3491,	// (0x00039e62) bg_tb_trans_pane_cp08

0xd9aa,	// (0x0004437b) cam6_battery_pane_ParamLimits

0xd9aa,	// (0x0004437b) cam6_battery_pane

0xd9c0,	// (0x00044391) cam6_indi_pane_g1_ParamLimits

0xd9c0,	// (0x00044391) cam6_indi_pane_g1

0xd9d2,	// (0x000443a3) cam6_indi_pane_g2_ParamLimits

0xd9d2,	// (0x000443a3) cam6_indi_pane_g2

0xd9e4,	// (0x000443b5) cam6_indi_pane_g3_ParamLimits

0xd9e4,	// (0x000443b5) cam6_indi_pane_g3

0x0002,

0xfa4d,	// (0x0004641e) cam6_indi_pane_g_ParamLimits

0xfa4d,	// (0x0004641e) cam6_indi_pane_g

0xd9f6,	// (0x000443c7) cam6_indi_pane_t1_ParamLimits

0xd9f6,	// (0x000443c7) cam6_indi_pane_t1

0x957c,	// (0x0003ff4d) cam6_autofocus_pane_g1

0x9584,	// (0x0003ff55) cam6_autofocus_pane_g2

0x958c,	// (0x0003ff5d) cam6_autofocus_pane_g3

0x9594,	// (0x0003ff65) cam6_autofocus_pane_g4

0x0003,

0xfa54,	// (0x00046425) cam6_autofocus_pane_g

0xda1c,	// (0x000443ed) cam6_timer_pane_g1

0xda24,	// (0x000443f5) cam6_timer_pane_t1

0xda32,	// (0x00044403) cam6_zoom_cont_pane

0xda3a,	// (0x0004440b) cam6_zoom_pane_g1

0xda43,	// (0x00044414) cam6_zoom_pane_g2

0xa988,	// (0x00041359) cam6_zoom_pane_g3

0x0002,

0xfa5d,	// (0x0004642e) cam6_zoom_pane_g

0x0bb9,	// (0x0003758a) cam6_battery_pane_g1

0x0bb9,	// (0x0003758a) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00045a5d) cam6_battery_pane_g

0xda3a,	// (0x0004440b) cam6_zoom_cont_pane_g1

0xda43,	// (0x00044414) cam6_zoom_cont_pane_g2

0xda4c,	// (0x0004441d) cam6_zoom_cont_pane_g3

0x0002,

0xfa64,	// (0x00046435) cam6_zoom_cont_pane_g

0xa9a6,	// (0x00041377) cam6_mode_pane_cp_ParamLimits

0xa9a6,	// (0x00041377) cam6_mode_pane_cp

0xa9ba,	// (0x0004138b) cam6_zoom_pane_cp_ParamLimits

0xa9ba,	// (0x0004138b) cam6_zoom_pane_cp

0xa9d6,	// (0x000413a7) vid6_image_uncrop_cif_pane_ParamLimits

0xa9d6,	// (0x000413a7) vid6_image_uncrop_cif_pane

0xaa02,	// (0x000413d3) vid6_image_uncrop_nhd_pane_ParamLimits

0xaa02,	// (0x000413d3) vid6_image_uncrop_nhd_pane

0xaa21,	// (0x000413f2) vid6_image_uncrop_vga_pane_ParamLimits

0xaa21,	// (0x000413f2) vid6_image_uncrop_vga_pane

0xaa40,	// (0x00041411) vid6_image_uncrop_wvga_pane_ParamLimits

0xaa40,	// (0x00041411) vid6_image_uncrop_wvga_pane

0xaa5f,	// (0x00041430) vid6_indi_pane_ParamLimits

0xaa5f,	// (0x00041430) vid6_indi_pane

0x3491,	// (0x00039e62) bg_tb_trans_pane_cp09_ParamLimits

0x3491,	// (0x00039e62) bg_tb_trans_pane_cp09

0xda64,	// (0x00044435) cam6_battery_pane_cp_ParamLimits

0xda64,	// (0x00044435) cam6_battery_pane_cp

0xda70,	// (0x00044441) vid6_indi_pane_g1_ParamLimits

0xda70,	// (0x00044441) vid6_indi_pane_g1

0xda82,	// (0x00044453) vid6_indi_pane_g2_ParamLimits

0xda82,	// (0x00044453) vid6_indi_pane_g2

0xda94,	// (0x00044465) vid6_indi_pane_g3_ParamLimits

0xda94,	// (0x00044465) vid6_indi_pane_g3

0xdaab,	// (0x0004447c) vid6_indi_pane_g4_ParamLimits

0xdaab,	// (0x0004447c) vid6_indi_pane_g4

0xdac2,	// (0x00044493) vid6_indi_pane_g5_ParamLimits

0xdac2,	// (0x00044493) vid6_indi_pane_g5

0x0004,

0xfa6b,	// (0x0004643c) vid6_indi_pane_g_ParamLimits

0xfa6b,	// (0x0004643c) vid6_indi_pane_g

0xdadc,	// (0x000444ad) vid6_indi_pane_t1_ParamLimits

0xdadc,	// (0x000444ad) vid6_indi_pane_t1

0xdaf2,	// (0x000444c3) vid6_indi_pane_t2_ParamLimits

0xdaf2,	// (0x000444c3) vid6_indi_pane_t2

0xdb1a,	// (0x000444eb) vid6_indi_pane_t3_ParamLimits

0xdb1a,	// (0x000444eb) vid6_indi_pane_t3

0xdb42,	// (0x00044513) vid6_indi_pane_t4_ParamLimits

0xdb42,	// (0x00044513) vid6_indi_pane_t4

0x0003,

0xfa76,	// (0x00046447) vid6_indi_pane_t_ParamLimits

0xfa76,	// (0x00046447) vid6_indi_pane_t

0xdb66,	// (0x00044537) wait_bar_pane_cp08

0xaa84,	// (0x00041455) main_cset_text2_pane_t1_ParamLimits

0xaa84,	// (0x00041455) main_cset_text2_pane_t1

0xa991,	// (0x00041362) listscroll_gen_pane_cp06_t1_ParamLimits

0xa991,	// (0x00041362) listscroll_gen_pane_cp06_t1

0xee90,	// (0x00045861) main_cam6_set_pane

0x0b7b,	// (0x0003754c) bg_tb_trans_pane_cp06_ParamLimits

0x942a,	// (0x0003fdfb) cam4_indicators_pane_g1_ParamLimits

0x943b,	// (0x0003fe0c) cam4_indicators_pane_g2_ParamLimits

0xf7ee,	// (0x000461bf) cam4_indicators_pane_g_ParamLimits

0x9453,	// (0x0003fe24) cam4_indicators_pane_t1_ParamLimits

0x0b14,	// (0x000374e5) bg_tb_trans_pane_cp07_ParamLimits

0x950a,	// (0x0003fedb) vid4_indicators_pane_g1_ParamLimits

0x9520,	// (0x0003fef1) vid4_indicators_pane_g2_ParamLimits

0x9534,	// (0x0003ff05) vid4_indicators_pane_g3_ParamLimits

0x9547,	// (0x0003ff18) vid4_indicators_pane_g4_ParamLimits

0xf800,	// (0x000461d1) vid4_indicators_pane_g_ParamLimits

0x9565,	// (0x0003ff36) vid4_indicators_pane_t1_ParamLimits

0xa561,	// (0x00040f32) vid4_progress_pane_g1_ParamLimits

0xa571,	// (0x00040f42) vid4_progress_pane_g2_ParamLimits

0xa581,	// (0x00040f52) vid4_progress_pane_g3_ParamLimits

0xa593,	// (0x00040f64) vid4_progress_pane_g4_ParamLimits

0xf9a7,	// (0x00046378) vid4_progress_pane_g_ParamLimits

0xa5b1,	// (0x00040f82) vid4_progress_pane_t1_ParamLimits

0xa5cb,	// (0x00040f9c) vid4_progress_pane_t2_ParamLimits

0xa5e4,	// (0x00040fb5) vid4_progress_pane_t3_ParamLimits

0xf9b2,	// (0x00046383) vid4_progress_pane_t_ParamLimits

0xa5f9,	// (0x00040fca) wait_bar_pane_cp07_ParamLimits

0xaaab,	// (0x0004147c) main_cam6_set_pane_g2_ParamLimits

0xaaab,	// (0x0004147c) main_cam6_set_pane_g2

0xaab7,	// (0x00041488) main_cset6_listscroll_pane_ParamLimits

0xaab7,	// (0x00041488) main_cset6_listscroll_pane

0xaae4,	// (0x000414b5) main_cset6_slider_pane_ParamLimits

0xaae4,	// (0x000414b5) main_cset6_slider_pane

0xaaf0,	// (0x000414c1) main_cset6_text2_pane_ParamLimits

0xaaf0,	// (0x000414c1) main_cset6_text2_pane

0xdb75,	// (0x00044546) main_cset6_text_pane

0xdb7d,	// (0x0004454e) main_cset_list_pane_copy1_ParamLimits

0xdb7d,	// (0x0004454e) main_cset_list_pane_copy1

0xdb8d,	// (0x0004455e) scroll_pane_cp028_copy1

0xab03,	// (0x000414d4) cset_list_set_pane_copy1

0xab13,	// (0x000414e4) aid_position_infowindow_above_copy1

0xab1b,	// (0x000414ec) aid_position_infowindow_below_copy1

0x45b5,	// (0x0003af86) cset_list_set_pane_g1_copy1

0x45bd,	// (0x0003af8e) cset_list_set_pane_g3_copy1_ParamLimits

0x45bd,	// (0x0003af8e) cset_list_set_pane_g3_copy1

0x45cc,	// (0x0003af9d) cset_list_set_pane_t1_copy1_ParamLimits

0x45cc,	// (0x0003af9d) cset_list_set_pane_t1_copy1

0x0b14,	// (0x000374e5) list_highlight_pane_cp021_copy1_ParamLimits

0x0b14,	// (0x000374e5) list_highlight_pane_cp021_copy1

0xdb96,	// (0x00044567) cset6_slider_pane_ParamLimits

0xdb96,	// (0x00044567) cset6_slider_pane

0xdbc2,	// (0x00044593) main_cset6_slider_pane_g1_ParamLimits

0xdbc2,	// (0x00044593) main_cset6_slider_pane_g1

0xab23,	// (0x000414f4) main_cset6_slider_pane_g2_ParamLimits

0xab23,	// (0x000414f4) main_cset6_slider_pane_g2

0xdbea,	// (0x000445bb) main_cset6_slider_pane_g3_ParamLimits

0xdbea,	// (0x000445bb) main_cset6_slider_pane_g3

0xab4b,	// (0x0004151c) main_cset6_slider_pane_g4_ParamLimits

0xab4b,	// (0x0004151c) main_cset6_slider_pane_g4

0xab57,	// (0x00041528) main_cset6_slider_pane_g5_ParamLimits

0xab57,	// (0x00041528) main_cset6_slider_pane_g5

0xd38a,	// (0x00043d5b) main_cset6_slider_pane_g7_ParamLimits

0xd38a,	// (0x00043d5b) main_cset6_slider_pane_g7

0xd396,	// (0x00043d67) main_cset6_slider_pane_g8_ParamLimits

0xd396,	// (0x00043d67) main_cset6_slider_pane_g8

0xab63,	// (0x00041534) main_cset6_slider_pane_g9_ParamLimits

0xab63,	// (0x00041534) main_cset6_slider_pane_g9

0xab6f,	// (0x00041540) main_cset6_slider_pane_g10_ParamLimits

0xab6f,	// (0x00041540) main_cset6_slider_pane_g10

0xab7b,	// (0x0004154c) main_cset6_slider_pane_g11_ParamLimits

0xab7b,	// (0x0004154c) main_cset6_slider_pane_g11

0xab87,	// (0x00041558) main_cset6_slider_pane_g12_ParamLimits

0xab87,	// (0x00041558) main_cset6_slider_pane_g12

0xab93,	// (0x00041564) main_cset6_slider_pane_g13_ParamLimits

0xab93,	// (0x00041564) main_cset6_slider_pane_g13

0xab9f,	// (0x00041570) main_cset6_slider_pane_g14_ParamLimits

0xab9f,	// (0x00041570) main_cset6_slider_pane_g14

0xabab,	// (0x0004157c) main_cset6_slider_pane_g15_ParamLimits

0xabab,	// (0x0004157c) main_cset6_slider_pane_g15

0xabc3,	// (0x00041594) main_cset6_slider_pane_g16_ParamLimits

0xabc3,	// (0x00041594) main_cset6_slider_pane_g16

0xabcf,	// (0x000415a0) main_cset6_slider_pane_g17_ParamLimits

0xabcf,	// (0x000415a0) main_cset6_slider_pane_g17

0x0011,

0xfa7f,	// (0x00046450) main_cset6_slider_pane_g_ParamLimits

0xfa7f,	// (0x00046450) main_cset6_slider_pane_g

0xdbf6,	// (0x000445c7) main_cset6_slider_pane_t1_ParamLimits

0xdbf6,	// (0x000445c7) main_cset6_slider_pane_t1

0xabf3,	// (0x000415c4) main_cset6_slider_pane_t2_ParamLimits

0xabf3,	// (0x000415c4) main_cset6_slider_pane_t2

0xac1e,	// (0x000415ef) main_cset6_slider_pane_t3_ParamLimits

0xac1e,	// (0x000415ef) main_cset6_slider_pane_t3

0xac49,	// (0x0004161a) main_cset6_slider_pane_t4_ParamLimits

0xac49,	// (0x0004161a) main_cset6_slider_pane_t4

0xac74,	// (0x00041645) main_cset6_slider_pane_t5_ParamLimits

0xac74,	// (0x00041645) main_cset6_slider_pane_t5

0xdc37,	// (0x00044608) main_cset6_slider_pane_t7_ParamLimits

0xdc37,	// (0x00044608) main_cset6_slider_pane_t7

0xac9f,	// (0x00041670) main_cset6_slider_pane_t8_ParamLimits

0xac9f,	// (0x00041670) main_cset6_slider_pane_t8

0xacc3,	// (0x00041694) main_cset6_slider_pane_t9_ParamLimits

0xacc3,	// (0x00041694) main_cset6_slider_pane_t9

0xace7,	// (0x000416b8) main_cset6_slider_pane_t10_ParamLimits

0xace7,	// (0x000416b8) main_cset6_slider_pane_t10

0xad0b,	// (0x000416dc) main_cset6_slider_pane_t11_ParamLimits

0xad0b,	// (0x000416dc) main_cset6_slider_pane_t11

0xdc6d,	// (0x0004463e) main_cset6_slider_pane_t14_ParamLimits

0xdc6d,	// (0x0004463e) main_cset6_slider_pane_t14

0xdca6,	// (0x00044677) main_cset6_slider_pane_t15_ParamLimits

0xdca6,	// (0x00044677) main_cset6_slider_pane_t15

0x000b,

0xfaa4,	// (0x00046475) main_cset6_slider_pane_t_ParamLimits

0xfaa4,	// (0x00046475) main_cset6_slider_pane_t

0xd461,	// (0x00043e32) cset_slider_pane_g1_copy1

0xd46a,	// (0x00043e3b) cset_slider_pane_g2_copy1

0xd473,	// (0x00043e44) cset_slider_pane_g3_copy1

0xee90,	// (0x00045861) bg_popup_sub_pane_cp011_copy1

0xdce8,	// (0x000446b9) main_cset_text_pane_g1_copy1

0xd4fe,	// (0x00043ecf) main_cset_text_pane_t1_copy1

0xd50c,	// (0x00043edd) main_cset_text_pane_t2_copy1

0xd51a,	// (0x00043eeb) main_cset_text_pane_t3_copy1

0xd528,	// (0x00043ef9) main_cset_text_pane_t4_copy1

0xd536,	// (0x00043f07) main_cset_text_pane_t5_copy1

0xdcf0,	// (0x000446c1) main_cset_text_pane_t6_copy1

0xdcfe,	// (0x000446cf) main_cset_text_pane_t7_copy1

0xad2f,	// (0x00041700) main_cset_text2_pane_t1_copy1

0x0b14,	// (0x000374e5) main_ncimui_pane

0x7bbe,	// (0x0003e58f) popup_query_ncimui_window_ParamLimits

0x7bbe,	// (0x0003e58f) popup_query_ncimui_window

0x4520,	// (0x0003aef1) field_cale_ev2_pane_g4_ParamLimits

0x4520,	// (0x0003aef1) field_cale_ev2_pane_g4

0x8d07,	// (0x0003f6d8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8d07,	// (0x0003f6d8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf788,	// (0x00046159) cell_video_dialer_keypad_pane_g_ParamLimits

0xf788,	// (0x00046159) cell_video_dialer_keypad_pane_g

0x8d1f,	// (0x0003f6f0) cell_video_dialer_keypad_pane_t1

0xee90,	// (0x00045861) bg_popup_window_pane_cp012

0x14b9,	// (0x00037e8a) heading_pane_cp06

0xdd36,	// (0x00044707) ncim_query_content_pane

0xee90,	// (0x00045861) bg_popup_heading_pane_cp01

0xdd3e,	// (0x0004470f) ncim_heading_pane_t1

0xdd4c,	// (0x0004471d) ncim_indicator_popup_pane

0xdd5e,	// (0x0004472f) ncim_query_button_pane

0xdd74,	// (0x00044745) ncim_query_content_pane_t1

0xdd86,	// (0x00044757) ncim_query_content_pane_t2

0x0005,

0xfae8,	// (0x000464b9) ncim_query_content_pane_t

0xddc0,	// (0x00044791) ncim_query_list_pane

0xddd2,	// (0x000447a3) ncim_query_popup_pane

0xdd4c,	// (0x0004471d) ncim_indicator_popup_pane_ParamLimits

0xae8b,	// (0x0004185c) ncim_query_content_pane_g1_ParamLimits

0xae8b,	// (0x0004185c) ncim_query_content_pane_g1

0xdd74,	// (0x00044745) ncim_query_content_pane_t1_ParamLimits

0xdd86,	// (0x00044757) ncim_query_content_pane_t2_ParamLimits

0xae97,	// (0x00041868) ncim_query_content_pane_t3_ParamLimits

0xae97,	// (0x00041868) ncim_query_content_pane_t3

0xaeb4,	// (0x00041885) ncim_query_content_pane_t4_ParamLimits

0xaeb4,	// (0x00041885) ncim_query_content_pane_t4

0xaed1,	// (0x000418a2) ncim_query_content_pane_t5_ParamLimits

0xaed1,	// (0x000418a2) ncim_query_content_pane_t5

0xdd98,	// (0x00044769) ncim_query_content_pane_t6_ParamLimits

0xdd98,	// (0x00044769) ncim_query_content_pane_t6

0xfae8,	// (0x000464b9) ncim_query_content_pane_t_ParamLimits

0xddc0,	// (0x00044791) ncim_query_list_pane_ParamLimits

0xddd2,	// (0x000447a3) ncim_query_popup_pane_ParamLimits

0xdde6,	// (0x000447b7) wait_bar_pane_cp04

0xee90,	// (0x00045861) input_focus_pane_cp011

0xddee,	// (0x000447bf) ncim_query_popup_pane_t1

0xddfc,	// (0x000447cd) ncim_list_query_list_pane_ParamLimits

0xddfc,	// (0x000447cd) ncim_list_query_list_pane

0xee90,	// (0x00045861) bg_button_pane_cp027

0xde0f,	// (0x000447e0) ncim_query_button_pane_g1

0xee90,	// (0x00045861) list_highlight_pane_cp012

0xde19,	// (0x000447ea) ncim_list_query_list_pane_g1

0xde21,	// (0x000447f2) ncim_list_query_list_pane_t1

0x9447,	// (0x0003fe18) cam4_indicators_pane_g3_ParamLimits

0x9447,	// (0x0003fe18) cam4_indicators_pane_g3

0x9553,	// (0x0003ff24) vid4_indicators_pane_g5_ParamLimits

0x9553,	// (0x0003ff24) vid4_indicators_pane_g5

0xa5a2,	// (0x00040f73) vid4_progress_pane_g5_ParamLimits

0xa5a2,	// (0x00040f73) vid4_progress_pane_g5

0xad61,	// (0x00041732) main_ncimui_pane_g1

0xadcd,	// (0x0004179e) ncimui_group_query_pane_ParamLimits

0xadcd,	// (0x0004179e) ncimui_group_query_pane

0xae27,	// (0x000417f8) ncimui_list_pane_ParamLimits

0xae27,	// (0x000417f8) ncimui_list_pane

0xae4e,	// (0x0004181f) ncimui_text_pane_ParamLimits

0xae4e,	// (0x0004181f) ncimui_text_pane

0xaeee,	// (0x000418bf) ncimui_text_pane_t1_ParamLimits

0xaeee,	// (0x000418bf) ncimui_text_pane_t1

0xde2f,	// (0x00044800) ncimui_list_single_graphic_pane_ParamLimits

0xde2f,	// (0x00044800) ncimui_list_single_graphic_pane

0xaf0d,	// (0x000418de) ncimui_query_pane_ParamLimits

0xaf0d,	// (0x000418de) ncimui_query_pane

0xee90,	// (0x00045861) list_highlight_pane_cp013

0xde3f,	// (0x00044810) ncim_list_query_list_pane_t1_copy1

0xde19,	// (0x000447ea) ncim_list_single_graphic_pane_g1

0xaf20,	// (0x000418f1) ncim_query_button_pane_cp01

0xaf2c,	// (0x000418fd) ncim_query_entry_pane_ParamLimits

0xaf2c,	// (0x000418fd) ncim_query_entry_pane

0xaf3f,	// (0x00041910) ncimui_query_pane_g1

0xaf4b,	// (0x0004191c) ncimui_query_pane_t1_ParamLimits

0xaf4b,	// (0x0004191c) ncimui_query_pane_t1

0x0b14,	// (0x000374e5) input_focus_pane_cp012

0xde4d,	// (0x0004481e) ncim_query_entry_pane_t1

0x0c17,	// (0x000375e8) main_im_pane_ParamLimits

0x0b14,	// (0x000374e5) main_mobtv_pane_ParamLimits

0x0b14,	// (0x000374e5) main_mobtv_pane

0xabdb,	// (0x000415ac) main_cset6_slider_pane_g18_ParamLimits

0xabdb,	// (0x000415ac) main_cset6_slider_pane_g18

0xabe7,	// (0x000415b8) main_cset6_slider_pane_g19_ParamLimits

0xabe7,	// (0x000415b8) main_cset6_slider_pane_g19

0x17b1,	// (0x00038182) bg_main_mobtv_pane_ParamLimits

0x17b1,	// (0x00038182) bg_main_mobtv_pane

0xaf64,	// (0x00041935) main_mobtv_info_pane

0xaf6f,	// (0x00041940) main_mobtv_loading_pane_ParamLimits

0xaf6f,	// (0x00041940) main_mobtv_loading_pane

0xde5f,	// (0x00044830) main_mobtv_pg_channel_list_pane

0xde69,	// (0x0004483a) main_mobtv_pg_hdr_pane

0xaf7c,	// (0x0004194d) main_mobtv_programe_curr_pane_ParamLimits

0xaf7c,	// (0x0004194d) main_mobtv_programe_curr_pane

0xaf89,	// (0x0004195a) main_mobtv_programe_next_pane_ParamLimits

0xaf89,	// (0x0004195a) main_mobtv_programe_next_pane

0xde72,	// (0x00044843) popup_mobtv_noti_window

0x0bb9,	// (0x0003758a) main_tv_pg_hdr_pane_g1

0xde7c,	// (0x0004484d) main_tv_pg_hdr_pane_g2

0xde84,	// (0x00044855) main_tv_pg_hdr_pane_g3

0xde8c,	// (0x0004485d) main_tv_pg_hdr_pane_g4

0xde94,	// (0x00044865) main_tv_pg_hdr_pane_g5

0xde9e,	// (0x0004486f) main_tv_pg_hdr_pane_g6

0xdea8,	// (0x00044879) main_tv_pg_hdr_pane_g7

0xdeb2,	// (0x00044883) main_tv_pg_hdr_pane_g8

0xdebc,	// (0x0004488d) main_tv_pg_hdr_pane_g9

0xdec6,	// (0x00044897) main_tv_pg_hdr_pane_g10

0xded0,	// (0x000448a1) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf5,	// (0x000464c6) main_tv_pg_hdr_pane_g

0xdeda,	// (0x000448ab) main_tv_pg_hdr_pane_t1

0xdee8,	// (0x000448b9) main_tv_pg_hdr_pane_t2

0xdef6,	// (0x000448c7) main_tv_pg_hdr_pane_t3

0xdf06,	// (0x000448d7) main_tv_pg_hdr_pane_t4

0xdf16,	// (0x000448e7) main_tv_pg_hdr_pane_t5

0x0004,

0xfb0c,	// (0x000464dd) main_tv_pg_hdr_pane_t

0xdf26,	// (0x000448f7) single_mobtv_pg_channel_pane_ParamLimits

0xdf26,	// (0x000448f7) single_mobtv_pg_channel_pane

0xdf38,	// (0x00044909) single_mobtv_pg_channel_table_pane

0xdf41,	// (0x00044912) single_mobtv_pg_channel_thumb_pane

0xdf4a,	// (0x0004491b) single_tv_pg_channel_pane_g1

0xdf53,	// (0x00044924) single_tv_pg_channel_pane_g2

0x0001,

0xfb17,	// (0x000464e8) single_tv_pg_channel_pane_g

0x0b7b,	// (0x0003754c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0b7b,	// (0x0003754c) bg_single_mobtv_pg_channel_thumb_pane

0xdf5c,	// (0x0004492d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf5c,	// (0x0004492d) single_mobtv_pg_channel_thumb_pane_g1

0xdf6a,	// (0x0004493b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf6a,	// (0x0004493b) single_mobtv_pg_channel_thumb_pane_g2

0xdf76,	// (0x00044947) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf76,	// (0x00044947) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb1c,	// (0x000464ed) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb1c,	// (0x000464ed) single_mobtv_pg_channel_thumb_pane_g

0xdf82,	// (0x00044953) single_mobtv_pg_channel_thumb_pane_t1

0xdf90,	// (0x00044961) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb23,	// (0x000464f4) single_mobtv_pg_channel_thumb_pane_t

0x0bb9,	// (0x0003758a) bg_single_mobtv_pg_channel_table_pane_g1

0x0bb9,	// (0x0003758a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00045a5d) bg_single_mobtv_pg_channel_table_pane_g

0xdf9e,	// (0x0004496f) single_mobtv_pg_channel_table_pane_t1

0xdfac,	// (0x0004497d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb28,	// (0x000464f9) single_mobtv_pg_channel_table_pane_t

0xaf9e,	// (0x0004196f) main_mobtv_info_pane_g1_ParamLimits

0xaf9e,	// (0x0004196f) main_mobtv_info_pane_g1

0xafba,	// (0x0004198b) main_mobtv_info_pane_t1_ParamLimits

0xafba,	// (0x0004198b) main_mobtv_info_pane_t1

0xb032,	// (0x00041a03) main_mobtv_info_pane_t2_ParamLimits

0xb032,	// (0x00041a03) main_mobtv_info_pane_t2

0x0002,

0xfb32,	// (0x00046503) main_mobtv_info_pane_t_ParamLimits

0xfb32,	// (0x00046503) main_mobtv_info_pane_t

0xb0c3,	// (0x00041a94) wait_bar_pane_cp05

0xb0d5,	// (0x00041aa6) main_mobtv_loading_pane_g1_ParamLimits

0xb0d5,	// (0x00041aa6) main_mobtv_loading_pane_g1

0xb0e1,	// (0x00041ab2) main_mobtv_loading_pane_g2_ParamLimits

0xb0e1,	// (0x00041ab2) main_mobtv_loading_pane_g2

0xb0ed,	// (0x00041abe) main_mobtv_loading_pane_g3_ParamLimits

0xb0ed,	// (0x00041abe) main_mobtv_loading_pane_g3

0x0002,

0xfb39,	// (0x0004650a) main_mobtv_loading_pane_g_ParamLimits

0xfb39,	// (0x0004650a) main_mobtv_loading_pane_g

0xdfba,	// (0x0004498b) main_mobtv_loading_pane_t1_ParamLimits

0xdfba,	// (0x0004498b) main_mobtv_loading_pane_t1

0xdfd2,	// (0x000449a3) main_mobtv_loading_pane_t2_ParamLimits

0xdfd2,	// (0x000449a3) main_mobtv_loading_pane_t2

0x0001,

0xfb40,	// (0x00046511) main_mobtv_loading_pane_t_ParamLimits

0xfb40,	// (0x00046511) main_mobtv_loading_pane_t

0xb0fb,	// (0x00041acc) wait_bar_pane_cp06_ParamLimits

0xb0fb,	// (0x00041acc) wait_bar_pane_cp06

0xdff6,	// (0x000449c7) main_mobtv_programe_curr_pane_t1

0xe004,	// (0x000449d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb45,	// (0x00046516) main_mobtv_programe_curr_pane_t

0xe012,	// (0x000449e3) main_mobtv_programe_next_pane_t1

0xe020,	// (0x000449f1) main_mobtv_programe_next_pane_t2

0xe02e,	// (0x000449ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4a,	// (0x0004651b) main_mobtv_programe_next_pane_t

0xee90,	// (0x00045861) bg_popup_mobtv_noti_window_pane

0xe03c,	// (0x00044a0d) popup_mobtv_noti_window_g1

0xe044,	// (0x00044a15) popup_mobtv_noti_window_t1

0xe052,	// (0x00044a23) popup_mobtv_noti_window_t2

0x0001,

0xfb51,	// (0x00046522) popup_mobtv_noti_window_t

0x0bb9,	// (0x0003758a) bg_popup_mobtv_noti_window_pane_g1

0xee90,	// (0x00045861) sc_clock_pane

0xee90,	// (0x00045861) main_fs_bigclock_pane

0xa76d,	// (0x0004113e) blid2_tripm_pane_t4_ParamLimits

0xa76d,	// (0x0004113e) blid2_tripm_pane_t4

0x0b89,	// (0x0003755a) sc_clock_pane_g1_ParamLimits

0x0b89,	// (0x0003755a) sc_clock_pane_g1

0x0bd7,	// (0x000375a8) sc_clock_pane_t1_ParamLimits

0x0bd7,	// (0x000375a8) sc_clock_pane_t1

0x0bd7,	// (0x000375a8) sc_clock_pane_t2_ParamLimits

0x0bd7,	// (0x000375a8) sc_clock_pane_t2

0x0bd7,	// (0x000375a8) sc_clock_pane_t3_ParamLimits

0x0bd7,	// (0x000375a8) sc_clock_pane_t3

0x0004,

0xfb56,	// (0x00046527) sc_clock_pane_t_ParamLimits

0xfb56,	// (0x00046527) sc_clock_pane_t

0xb9b5,	// (0x00042386) main_fs_bigclock_indicator_pane_ParamLimits

0xb9b5,	// (0x00042386) main_fs_bigclock_indicator_pane

0xb150,	// (0x00041b21) main_fs_bigclock_pane_g1_ParamLimits

0xb150,	// (0x00041b21) main_fs_bigclock_pane_g1

0xb9c1,	// (0x00042392) main_fs_bigclock_pane_t1_ParamLimits

0xb9c1,	// (0x00042392) main_fs_bigclock_pane_t1

0xb9d3,	// (0x000423a4) main_fs_bigclock_pane_t2_ParamLimits

0xb9d3,	// (0x000423a4) main_fs_bigclock_pane_t2

0xb9e7,	// (0x000423b8) main_fs_bigclock_pane_t3_ParamLimits

0xb9e7,	// (0x000423b8) main_fs_bigclock_pane_t3

0x0002,

0xfcd9,	// (0x000466aa) main_fs_bigclock_pane_t_ParamLimits

0xfcd9,	// (0x000466aa) main_fs_bigclock_pane_t

0xe6da,	// (0x000450ab) main_fs_bigclock_indicator_pane_g1

0xdd66,	// (0x00044737) ncim_query_content_pane_g2_ParamLimits

0xdd66,	// (0x00044737) ncim_query_content_pane_g2

0x0001,

0xfae3,	// (0x000464b4) ncim_query_content_pane_g_ParamLimits

0xfae3,	// (0x000464b4) ncim_query_content_pane_g

0x0bd7,	// (0x000375a8) sc_clock_pane_t4_ParamLimits

0x0bd7,	// (0x000375a8) sc_clock_pane_t4

0x0b14,	// (0x000374e5) main_radioblah_pane

0x9303,	// (0x0003fcd4) cell_call4_button_pane_t1_copy1_ParamLimits

0x9303,	// (0x0003fcd4) cell_call4_button_pane_t1_copy1

0xad7d,	// (0x0004174e) main_ncimui_pane_t1_ParamLimits

0xad7d,	// (0x0004174e) main_ncimui_pane_t1

0xad97,	// (0x00041768) main_ncimui_pane_t2_ParamLimits

0xad97,	// (0x00041768) main_ncimui_pane_t2

0x0002,

0xfadc,	// (0x000464ad) main_ncimui_pane_t_ParamLimits

0xfadc,	// (0x000464ad) main_ncimui_pane_t

0x17d3,	// (0x000381a4) main_radioblah_anim_pane_ParamLimits

0x17d3,	// (0x000381a4) main_radioblah_anim_pane

0x17d3,	// (0x000381a4) main_radioblah_info_pane_ParamLimits

0x17d3,	// (0x000381a4) main_radioblah_info_pane

0x17bf,	// (0x00038190) main_radioblah_pane_t1_ParamLimits

0x17bf,	// (0x00038190) main_radioblah_pane_t1

0x17bf,	// (0x00038190) main_radioblah_pane_t2_ParamLimits

0x17bf,	// (0x00038190) main_radioblah_pane_t2

0x0003,

0xfb77,	// (0x00046548) main_radioblah_pane_t_ParamLimits

0xfb77,	// (0x00046548) main_radioblah_pane_t

0x0b6d,	// (0x0003753e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x0b6d,	// (0x0003753e) main_radioblah_rocker_ctrl_pane

0x349f,	// (0x00039e70) main_radioblah_info_pane_t1_ParamLimits

0x349f,	// (0x00039e70) main_radioblah_info_pane_t1

0xe090,	// (0x00044a61) main_radioblah_info_pane_t2_ParamLimits

0xe090,	// (0x00044a61) main_radioblah_info_pane_t2

0x0003,

0xfb80,	// (0x00046551) main_radioblah_info_pane_t_ParamLimits

0xfb80,	// (0x00046551) main_radioblah_info_pane_t

0x0bb9,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g1

0x0bb9,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g2

0x0bb9,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g3

0x0bb9,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g4

0x0bb9,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g5

0x0bb9,	// (0x0003758a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb89,	// (0x0004655a) main_radioblah_rocker_ctrl_pane_g

0xad2f,	// (0x00041700) main_cset_text2_pane_t1_copy1_ParamLimits

0x9374,	// (0x0003fd45) cam4_image_uncrop_qvga_pane

0x94b9,	// (0x0003fe8a) vid4_image_uncrop_qcif_pane

0xa8ec,	// (0x000412bd) cam6_image_uncrop_qvga_pane_ParamLimits

0xa8ec,	// (0x000412bd) cam6_image_uncrop_qvga_pane

0xda54,	// (0x00044425) vid6_image_uncrop_qcif_pane_ParamLimits

0xda54,	// (0x00044425) vid6_image_uncrop_qcif_pane

0xee90,	// (0x00045861) bg_popup_preview_window_pane_cp03

0xdd0c,	// (0x000446dd) list_cset_text2_pane

0xdd14,	// (0x000446e5) main_cset6_text2_pane_g1

0xdd1c,	// (0x000446ed) main_cset6_text2_pane_t1

0xb2dd,	// (0x00041cae) list_cset_text2_pane_t1_ParamLimits

0xb2dd,	// (0x00041cae) list_cset_text2_pane_t1

0x0b14,	// (0x000374e5) main_radioblah_pane_ParamLimits

0xb0af,	// (0x00041a80) main_mobtv_info_pane_t3_ParamLimits

0xb0af,	// (0x00041a80) main_mobtv_info_pane_t3

0x17b1,	// (0x00038182) main_radioblah_pane_g1

0xe060,	// (0x00044a31) main_radioblah_info_pane_g1

0x0bd7,	// (0x000375a8) main_radioblah_info_pane_t3_ParamLimits

0x0bd7,	// (0x000375a8) main_radioblah_info_pane_t3

0x6bca,	// (0x0003d59b) highlight_cell_cale_month_pane_ParamLimits

0x6bca,	// (0x0003d59b) highlight_cell_cale_month_pane

0xee90,	// (0x00045861) main_phob_fisheye_pane

0x309b,	// (0x00039a6c) scroll_pane_cp0031_ParamLimits

0x309b,	// (0x00039a6c) scroll_pane_cp0031

0xdb66,	// (0x00044537) wait_bar_pane_cp08_ParamLimits

0xab03,	// (0x000414d4) cset_list_set_pane_copy1_ParamLimits

0xe0df,	// (0x00044ab0) highlight_cell_cale_month_pane_g1

0xb2f4,	// (0x00041cc5) highlight_cell_cale_month_pane_t1

0xd7c6,	// (0x00044197) list_gen_pane_cp01

0xd375,	// (0x00043d46) scroll_pane_01

0xb302,	// (0x00041cd3) list_single_double_fisheye_pane

0xb30b,	// (0x00041cdc) list_double_fisheye_pane_g1_ParamLimits

0xb30b,	// (0x00041cdc) list_double_fisheye_pane_g1

0xb317,	// (0x00041ce8) list_double_fisheye_pane_g2_ParamLimits

0xb317,	// (0x00041ce8) list_double_fisheye_pane_g2

0xb32b,	// (0x00041cfc) list_double_fisheye_pane_g3_ParamLimits

0xb32b,	// (0x00041cfc) list_double_fisheye_pane_g3

0x0004,

0xfb96,	// (0x00046567) list_double_fisheye_pane_g_ParamLimits

0xfb96,	// (0x00046567) list_double_fisheye_pane_g

0xb354,	// (0x00041d25) list_double_fisheye_pane_t1_ParamLimits

0xb354,	// (0x00041d25) list_double_fisheye_pane_t1

0xb36f,	// (0x00041d40) list_double_fisheye_pane_t2_ParamLimits

0xb36f,	// (0x00041d40) list_double_fisheye_pane_t2

0x0001,

0xfba1,	// (0x00046572) list_double_fisheye_pane_t_ParamLimits

0xfba1,	// (0x00046572) list_double_fisheye_pane_t

0xee90,	// (0x00045861) main_call5_pane

0x0b6d,	// (0x0003753e) sc_swipe_pane_ParamLimits

0x0b6d,	// (0x0003753e) sc_swipe_pane

0xb39d,	// (0x00041d6e) call5_image_pane_ParamLimits

0xb39d,	// (0x00041d6e) call5_image_pane

0xb3af,	// (0x00041d80) call5_swipe_1_pane_ParamLimits

0xb3af,	// (0x00041d80) call5_swipe_1_pane

0xb3bb,	// (0x00041d8c) call5_swipe_2_pane_ParamLimits

0xb3bb,	// (0x00041d8c) call5_swipe_2_pane

0xb3d5,	// (0x00041da6) popup_call5_audio_first_window_ParamLimits

0xb3d5,	// (0x00041da6) popup_call5_audio_first_window

0x0b7b,	// (0x0003754c) call5_swipe_1_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) call5_swipe_1_pane_g1

0xe0e7,	// (0x00044ab8) call5_swipe_1_pane_g2_ParamLimits

0xe0e7,	// (0x00044ab8) call5_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x00046577) call5_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x00046577) call5_swipe_1_pane_g

0xe0f3,	// (0x00044ac4) call5_swipe_1_pane_t1_ParamLimits

0xe0f3,	// (0x00044ac4) call5_swipe_1_pane_t1

0x0b7b,	// (0x0003754c) call5_swipe_2_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) call5_swipe_2_pane_g1

0xe108,	// (0x00044ad9) call5_swipe_2_pane_g2_ParamLimits

0xe108,	// (0x00044ad9) call5_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x0004657c) call5_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x0004657c) call5_swipe_2_pane_g

0xe114,	// (0x00044ae5) call5_swipe_2_pane_t1_ParamLimits

0xe114,	// (0x00044ae5) call5_swipe_2_pane_t1

0x0b7b,	// (0x0003754c) sc_swipe_pane_g1_ParamLimits

0x0b7b,	// (0x0003754c) sc_swipe_pane_g1

0x0b89,	// (0x0003755a) sc_swipe_pane_g2_ParamLimits

0x0b89,	// (0x0003755a) sc_swipe_pane_g2

0x0001,

0xfbb0,	// (0x00046581) sc_swipe_pane_g_ParamLimits

0xfbb0,	// (0x00046581) sc_swipe_pane_g

0x0bc3,	// (0x00037594) sc_swipe_pane_t1_ParamLimits

0x0bc3,	// (0x00037594) sc_swipe_pane_t1

0xee90,	// (0x00045861) main_cmail_launcher_pane

0xb3e5,	// (0x00041db6) aid_size_cell_cmail_l_ParamLimits

0xb3e5,	// (0x00041db6) aid_size_cell_cmail_l

0xb3f3,	// (0x00041dc4) grid_cmail_l_pane_ParamLimits

0xb3f3,	// (0x00041dc4) grid_cmail_l_pane

0xb401,	// (0x00041dd2) cell_cmail_l_pane_ParamLimits

0xb401,	// (0x00041dd2) cell_cmail_l_pane

0xb41c,	// (0x00041ded) cell_cmail_l_pane_g1_ParamLimits

0xb41c,	// (0x00041ded) cell_cmail_l_pane_g1

0xb428,	// (0x00041df9) cell_cmail_l_pane_t1_ParamLimits

0xb428,	// (0x00041df9) cell_cmail_l_pane_t1

0xb43e,	// (0x00041e0f) cell_cmail_l_pane_t2_ParamLimits

0xb43e,	// (0x00041e0f) cell_cmail_l_pane_t2

0x0001,

0xfbb5,	// (0x00046586) cell_cmail_l_pane_t_ParamLimits

0xfbb5,	// (0x00046586) cell_cmail_l_pane_t

0x0b14,	// (0x000374e5) grid_highlight_pane_cp018_ParamLimits

0x0b14,	// (0x000374e5) grid_highlight_pane_cp018

0x4f4b,	// (0x0003b91c) main2_pane_ParamLimits

0x4f4b,	// (0x0003b91c) main2_pane

0x0caf,	// (0x00037680) popup_sp_fs_action_menu_bg_pane_g1

0x0cb7,	// (0x00037688) popup_sp_fs_action_menu_bg_pane_g2

0x0cbf,	// (0x00037690) popup_sp_fs_action_menu_bg_pane_g3

0x0cc7,	// (0x00037698) popup_sp_fs_action_menu_bg_pane_g4

0x0ccf,	// (0x000376a0) popup_sp_fs_action_menu_bg_pane_g5

0x0cd7,	// (0x000376a8) popup_sp_fs_action_menu_bg_pane_g6

0x0cdf,	// (0x000376b0) popup_sp_fs_action_menu_bg_pane_g7

0x0ce7,	// (0x000376b8) popup_sp_fs_action_menu_bg_pane_g8

0x0cef,	// (0x000376c0) popup_sp_fs_action_menu_bg_pane_g9

0x0cf7,	// (0x000376c8) popup_sp_fs_action_menu_bg_pane_g10

0x0cf7,	// (0x000376c8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00045aae) popup_sp_fs_action_menu_bg_pane_g

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g3_g1

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g3_g2

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00045b5c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00045b5c) list_medium_line_x2_t3_g3_g

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g3_t1

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g3_t2

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00045b63) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00045b63) list_medium_line_x2_t3_g3_t

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g2_g1

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x00045b6a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x00045b6a) list_medium_line_x2_t3_g2_g

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g2_t1

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g2_t2

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00045b63) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00045b63) list_medium_line_x2_t3_g2_t

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g4_g1

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g4_g2

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g4_g3

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00045b6f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00045b6f) list_medium_line_x2_t4_g4_g

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g4_t1

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g4_t2

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g4_t3

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x00045b78) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x00045b78) list_medium_line_x2_t4_g4_t

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g4_g1

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g4_g2

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g4_g3

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00045b6f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00045b6f) list_medium_line_x2_t2_g4_g

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g4_t1

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x00045bdf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x00045bdf) list_medium_line_x2_t2_g4_t

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g3_g1

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g3_g2

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00045b5c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00045b5c) list_medium_line_x2_t2_g3_g

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g3_t1

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x00045bdf) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x00045bdf) list_medium_line_x2_t2_g3_t

0x6d5c,	// (0x0003d72d) main_sp_fs_list_pane_ParamLimits

0x6d5c,	// (0x0003d72d) main_sp_fs_list_pane

0x6d68,	// (0x0003d739) sp_fs_scroll_pane_ParamLimits

0x6d68,	// (0x0003d739) sp_fs_scroll_pane

0x1332,	// (0x00037d03) list_medium_line_x2_t3_t1

0x1332,	// (0x00037d03) list_medium_line_x2_t3_t2

0x1332,	// (0x00037d03) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x00045c2a) list_medium_line_x2_t3_t

0x1332,	// (0x00037d03) list_medium_line_x3_t4_t1

0x1332,	// (0x00037d03) list_medium_line_x3_t4_t2

0x1332,	// (0x00037d03) list_medium_line_x3_t4_t3

0x1332,	// (0x00037d03) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x00045c31) list_medium_line_x3_t4_t

0x1332,	// (0x00037d03) list_medium_line_x4_t5_t1

0x1332,	// (0x00037d03) list_medium_line_x4_t5_t2

0x1332,	// (0x00037d03) list_medium_line_x4_t5_t3

0x1332,	// (0x00037d03) list_medium_line_x4_t5_t4

0x1332,	// (0x00037d03) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x00045c3a) list_medium_line_x4_t5_t

0x0b7b,	// (0x0003754c) list_medium_line_t4_g4_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t4_g4_g1

0x0b7b,	// (0x0003754c) list_medium_line_t4_g4_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t4_g4_g2

0x0b7b,	// (0x0003754c) list_medium_line_t4_g4_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t4_g4_g3

0x0b7b,	// (0x0003754c) list_medium_line_t4_g4_g4_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00045b6f) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00045b6f) list_medium_line_t4_g4_g

0x0bc3,	// (0x00037594) list_medium_line_t4_g4_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t4_g4_t1

0x0bc3,	// (0x00037594) list_medium_line_t4_g4_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t4_g4_t2

0x0bc3,	// (0x00037594) list_medium_line_t4_g4_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t4_g4_t3

0x0bc3,	// (0x00037594) list_medium_line_t4_g4_t4_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x00045b78) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x00045b78) list_medium_line_t4_g4_t

0x6e61,	// (0x0003d832) chi_dic_find_pane_g1

0x7b73,	// (0x0003e544) main_tport_pane

0x1332,	// (0x00037d03) list_medium_line_plain_t1

0x0b7b,	// (0x0003754c) list_medium_line_t2_g2_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t2_g2_g1

0x0b7b,	// (0x0003754c) list_medium_line_t2_g2_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x00045b6a) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x00045b6a) list_medium_line_t2_g2_g

0x0bc3,	// (0x00037594) list_medium_line_t2_g2_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t2_g2_t1

0x0bc3,	// (0x00037594) list_medium_line_t2_g2_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x00045bdf) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x00045bdf) list_medium_line_t2_g2_t

0x4588,	// (0x0003af59) aid_sp_fs_list_icon_a_sm

0x4590,	// (0x0003af61) aid_sp_fs_list_icon_d

0x4598,	// (0x0003af69) aid_sp_fs_text_primary

0xd7cf,	// (0x000441a0) aid_sp_fs_text_secondary

0xee90,	// (0x00045861) list_medium_line

0xee90,	// (0x00045861) list_medium_line_g2

0xee90,	// (0x00045861) list_medium_line_g3

0xee90,	// (0x00045861) list_medium_line_plain

0xee90,	// (0x00045861) list_medium_line_plain_t2

0xee90,	// (0x00045861) list_medium_line_plain_t3

0xee90,	// (0x00045861) list_medium_line_right_icon

0xee90,	// (0x00045861) list_medium_line_right_iconx2

0xee90,	// (0x00045861) list_medium_line_t2

0xee90,	// (0x00045861) list_medium_line_t2_g2

0xee90,	// (0x00045861) list_medium_line_t2_g3

0xee90,	// (0x00045861) list_medium_line_t2_right_icon

0xee90,	// (0x00045861) list_medium_line_t2_right_iconx2

0xee90,	// (0x00045861) list_medium_line_t3

0xee90,	// (0x00045861) list_medium_line_t3_g2

0xee90,	// (0x00045861) list_medium_line_t3_g3

0xee90,	// (0x00045861) list_medium_line_t3_right_iconx2

0xee90,	// (0x00045861) list_medium_line_t4_g4

0xee90,	// (0x00045861) list_medium_line_x2

0xee90,	// (0x00045861) list_medium_line_x2_t2_g2

0xee90,	// (0x00045861) list_medium_line_x2_t2_g3

0xee90,	// (0x00045861) list_medium_line_x2_t2_g4

0xee90,	// (0x00045861) list_medium_line_x2_t3

0xee90,	// (0x00045861) list_medium_line_x2_t3_g2

0xee90,	// (0x00045861) list_medium_line_x2_t3_g3

0xee90,	// (0x00045861) list_medium_line_x2_t3_g4

0xee90,	// (0x00045861) list_medium_line_x2_t4_g2

0xee90,	// (0x00045861) list_medium_line_x2_t4_g4

0xee90,	// (0x00045861) list_medium_line_x3

0xee90,	// (0x00045861) list_medium_line_x3_t4

0xee90,	// (0x00045861) list_medium_line_x3_t4_g4

0xee90,	// (0x00045861) list_medium_line_x4_t4

0xee90,	// (0x00045861) list_medium_line_x4_t4_g7

0xee90,	// (0x00045861) list_medium_line_x4_t5

0x45a1,	// (0x0003af72) list_single_fs_dyc_pane_ParamLimits

0x45a1,	// (0x0003af72) list_single_fs_dyc_pane

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g1

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g2

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g3

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g4

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g5

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x4_t4_g7_g6

0x0b89,	// (0x0003755a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0b89,	// (0x0003755a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfabd,	// (0x0004648e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfabd,	// (0x0004648e) list_medium_line_x4_t4_g7_g

0x0bc3,	// (0x00037594) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x4_t4_g7_t1

0x0bc3,	// (0x00037594) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x4_t4_g7_t2

0x0bc3,	// (0x00037594) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x4_t4_g7_t3

0x0bd7,	// (0x000375a8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0bd7,	// (0x000375a8) list_medium_line_x4_t4_g7_t4

0x0bd7,	// (0x000375a8) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0bd7,	// (0x000375a8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfacc,	// (0x0004649d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfacc,	// (0x0004649d) list_medium_line_x4_t4_g7_t

0x45e1,	// (0x0003afb2) list_single_dyc_row_pane_ParamLimits

0x45e1,	// (0x0003afb2) list_single_dyc_row_pane

0xb391,	// (0x00041d62) call5_gesture_pane_ParamLimits

0xb391,	// (0x00041d62) call5_gesture_pane

0xb3c7,	// (0x00041d98) call5_windows_pane_ParamLimits

0xb3c7,	// (0x00041d98) call5_windows_pane

0xb45b,	// (0x00041e2c) call5_swipe_1_pane_cp_ParamLimits

0xb45b,	// (0x00041e2c) call5_swipe_1_pane_cp

0xb467,	// (0x00041e38) call5_swipe_2_pane_cp_ParamLimits

0xb467,	// (0x00041e38) call5_swipe_2_pane_cp

0x0e0b,	// (0x000377dc) call5_image_pane_cp

0xb473,	// (0x00041e44) popup_call5_audio_first_window_cp_ParamLimits

0xb473,	// (0x00041e44) popup_call5_audio_first_window_cp

0xe129,	// (0x00044afa) call5_swipe_1_pane_g1_cp_ParamLimits

0xe129,	// (0x00044afa) call5_swipe_1_pane_g1_cp

0xe136,	// (0x00044b07) call5_swipe_1_pane_g2_cp

0xe13e,	// (0x00044b0f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe13e,	// (0x00044b0f) call5_swipe_1_pane_t1_cp

0xe129,	// (0x00044afa) call5_swipe_2_pane_g1_cp_ParamLimits

0xe129,	// (0x00044afa) call5_swipe_2_pane_g1_cp

0xe153,	// (0x00044b24) call5_swipe_2_pane_g2_cp

0xe15b,	// (0x00044b2c) call5_swipe_2_pane_t1_cp_ParamLimits

0xe15b,	// (0x00044b2c) call5_swipe_2_pane_t1_cp

0x0b14,	// (0x000374e5) main_sp_fs_email_pane

0xd458,	// (0x00043e29) main_sp_fs_listscroll_pane_te

0x45fe,	// (0x0003afcf) popup_sp_fs_action_menu_pane_ParamLimits

0x45fe,	// (0x0003afcf) popup_sp_fs_action_menu_pane

0x0bb9,	// (0x0003758a) bg_sp_fs_ctrlbar_pane_g1

0xe170,	// (0x00044b41) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe179,	// (0x00044b4a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe182,	// (0x00044b53) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0bb9,	// (0x0003758a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbba,	// (0x0004658b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2b95,	// (0x00039566) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2b95,	// (0x00039566) bg_sp_fs_ctrlbar_ddmenu_pane

0xe18b,	// (0x00044b5c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe18b,	// (0x00044b5c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe197,	// (0x00044b68) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe197,	// (0x00044b68) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbc3,	// (0x00046594) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbc3,	// (0x00046594) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe1a3,	// (0x00044b74) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe1a3,	// (0x00044b74) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0bb9,	// (0x0003758a) list_medium_line_t2_right_icon_g1

0x1332,	// (0x00037d03) list_medium_line_t2_right_icon_t1

0x1332,	// (0x00037d03) list_medium_line_t2_right_icon_t2

0x0001,

0xfbc8,	// (0x00046599) list_medium_line_t2_right_icon_t

0x17d3,	// (0x000381a4) bg_sp_fs_ctrlbar_pane_ParamLimits

0x17d3,	// (0x000381a4) bg_sp_fs_ctrlbar_pane

0xb4da,	// (0x00041eab) main_sp_fs_ctrlbar_button_pane_cp01

0xb4e2,	// (0x00041eb3) main_sp_fs_ctrlbar_ddmenu_pane

0xe1f7,	// (0x00044bc8) main_sp_fs_ctrlbar_pane_g1

0xe203,	// (0x00044bd4) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbcd,	// (0x0004659e) main_sp_fs_ctrlbar_pane_g

0xb520,	// (0x00041ef1) main_sp_fs_ctrlbar_pane_t1

0xb55d,	// (0x00041f2e) main_sp_fs_ctrlbar_pane

0xb577,	// (0x00041f48) main_sp_fs_listscroll_pane_te_cp01

0x4644,	// (0x0003b015) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4644,	// (0x0003b015) popup_sp_fs_action_menu_pane_cp01

0x0b14,	// (0x000374e5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0b14,	// (0x000374e5) bg_sp_fs_highlight_list_pane_cp01

0x4664,	// (0x0003b035) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4664,	// (0x0003b035) sp_fs_action_menu_list_gene_pane_g1

0xe22a,	// (0x00044bfb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe22a,	// (0x00044bfb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbdb,	// (0x000465ac) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbdb,	// (0x000465ac) sp_fs_action_menu_list_gene_pane_g

0x4673,	// (0x0003b044) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4673,	// (0x0003b044) sp_fs_action_menu_list_gene_pane_t1

0x468b,	// (0x0003b05c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x468b,	// (0x0003b05c) sp_fs_action_menu_list_gene_pane

0xe237,	// (0x00044c08) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe237,	// (0x00044c08) popup_sp_fs_action_menu_bg_pane

0x46ae,	// (0x0003b07f) sp_fs_action_menu_list_pane_ParamLimits

0x46ae,	// (0x0003b07f) sp_fs_action_menu_list_pane

0x46d2,	// (0x0003b0a3) sp_fs_scroll_pane_cp01_ParamLimits

0x46d2,	// (0x0003b0a3) sp_fs_scroll_pane_cp01

0x1332,	// (0x00037d03) list_medium_line_plain_t2_t1

0x1332,	// (0x00037d03) list_medium_line_plain_t2_t2

0x0001,

0xfbc8,	// (0x00046599) list_medium_line_plain_t2_t

0x1332,	// (0x00037d03) list_medium_line_plain_t3_t1

0x1332,	// (0x00037d03) list_medium_line_plain_t3_t2

0x1332,	// (0x00037d03) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x00045c2a) list_medium_line_plain_t3_t

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g2_g1

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x00045b6a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x00045b6a) list_medium_line_x2_t2_g2_g

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g2_t1

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x00045bdf) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x00045bdf) list_medium_line_x2_t2_g2_t

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g2_g1

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x00045b6a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x00045b6a) list_medium_line_x2_t4_g2_g

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g2_t1

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g2_t2

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g2_t3

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x00045b78) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x00045b78) list_medium_line_x2_t4_g2_t

0x0bb9,	// (0x0003758a) list_medium_line_t3_right_iconx2_g1

0x0bb9,	// (0x0003758a) list_medium_line_t3_right_iconx2_g2

0x0bb9,	// (0x0003758a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x00045d46) list_medium_line_t3_right_iconx2_g

0x1332,	// (0x00037d03) list_medium_line_t3_right_iconx2_t1

0x1332,	// (0x00037d03) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbc8,	// (0x00046599) list_medium_line_t3_right_iconx2_t

0x0b7b,	// (0x0003754c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x3_t4_g4_g1

0x0b7b,	// (0x0003754c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x3_t4_g4_g2

0x0b7b,	// (0x0003754c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x3_t4_g4_g3

0x0b7b,	// (0x0003754c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00045b6f) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00045b6f) list_medium_line_x3_t4_g4_g

0x0bc3,	// (0x00037594) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x3_t4_g4_t1

0x0bc3,	// (0x00037594) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x3_t4_g4_t2

0x0bc3,	// (0x00037594) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x3_t4_g4_t3

0x0bc3,	// (0x00037594) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x00045b78) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x00045b78) list_medium_line_x3_t4_g4_t

0x46f8,	// (0x0003b0c9) list_single_dyc_row_text_pane_t1_ParamLimits

0x46f8,	// (0x0003b0c9) list_single_dyc_row_text_pane_t1

0x4735,	// (0x0003b106) list_single_dyc_row_text_pane_t2_ParamLimits

0x4735,	// (0x0003b106) list_single_dyc_row_text_pane_t2

0x47ab,	// (0x0003b17c) list_single_dyc_row_text_pane_t3_ParamLimits

0x47ab,	// (0x0003b17c) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe0,	// (0x000465b1) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe0,	// (0x000465b1) list_single_dyc_row_text_pane_t

0x4882,	// (0x0003b253) list_single_dyc_row_pane_g1_ParamLimits

0x4882,	// (0x0003b253) list_single_dyc_row_pane_g1

0x488e,	// (0x0003b25f) list_single_dyc_row_pane_g2_ParamLimits

0x488e,	// (0x0003b25f) list_single_dyc_row_pane_g2

0x489a,	// (0x0003b26b) list_single_dyc_row_pane_g3_ParamLimits

0x489a,	// (0x0003b26b) list_single_dyc_row_pane_g3

0x48ad,	// (0x0003b27e) list_single_dyc_row_pane_g4_ParamLimits

0x48ad,	// (0x0003b27e) list_single_dyc_row_pane_g4

0x0006,

0xfbed,	// (0x000465be) list_single_dyc_row_pane_g_ParamLimits

0xfbed,	// (0x000465be) list_single_dyc_row_pane_g

0x48ff,	// (0x0003b2d0) list_single_dyc_row_text_pane_ParamLimits

0x48ff,	// (0x0003b2d0) list_single_dyc_row_text_pane

0xee90,	// (0x00045861) bg_sp_fs_scroll_pane

0xe245,	// (0x00044c16) thumb_sp_fs_scroll_pane

0x0b7b,	// (0x0003754c) list_medium_line_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_g1

0x0bc3,	// (0x00037594) list_medium_line_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t1

0x0b7b,	// (0x0003754c) list_medium_line_x2_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_g1

0x0b7b,	// (0x0003754c) list_medium_line_x2_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x00045b6a) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x00045b6a) list_medium_line_x2_g

0x0bc3,	// (0x00037594) list_medium_line_x2_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t1

0x0b7b,	// (0x0003754c) list_medium_line_x3_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x3_g1

0xe24e,	// (0x00044c1f) list_medium_line_x3_g2_ParamLimits

0xe24e,	// (0x00044c1f) list_medium_line_x3_g2

0x0001,

0xfbfc,	// (0x000465cd) list_medium_line_x3_g_ParamLimits

0xfbfc,	// (0x000465cd) list_medium_line_x3_g

0xe25c,	// (0x00044c2d) list_medium_line_x3_t1_ParamLimits

0xe25c,	// (0x00044c2d) list_medium_line_x3_t1

0xe270,	// (0x00044c41) thumb_sp_fs_scroll_pane_g1

0xe279,	// (0x00044c4a) thumb_sp_fs_scroll_pane_g2

0xe282,	// (0x00044c53) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x000465d2) thumb_sp_fs_scroll_pane_g

0xe270,	// (0x00044c41) bg_sp_fs_scroll_pane_g1

0xe279,	// (0x00044c4a) bg_sp_fs_scroll_pane_g2

0xe282,	// (0x00044c53) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x000465d2) bg_sp_fs_scroll_pane_g

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g4_g1

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g4_g2

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g4_g3

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00045b6f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00045b6f) list_medium_line_x2_t3_g4_g

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g4_t1

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g4_t2

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00045b63) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00045b63) list_medium_line_x2_t3_g4_t

0x0b7b,	// (0x0003754c) list_medium_line_g2_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_g2_g1

0x0b7b,	// (0x0003754c) list_medium_line_g2_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x00045b6a) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x00045b6a) list_medium_line_g2_g

0x0bc3,	// (0x00037594) list_medium_line_g2_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_g2_t1

0x0b7b,	// (0x0003754c) list_medium_line_t3_g2_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t3_g2_g1

0x0b7b,	// (0x0003754c) list_medium_line_t3_g2_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x00045b6a) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x00045b6a) list_medium_line_t3_g2_g

0x0bc3,	// (0x00037594) list_medium_line_t3_g2_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t3_g2_t1

0x0bc3,	// (0x00037594) list_medium_line_t3_g2_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t3_g2_t2

0x0bc3,	// (0x00037594) list_medium_line_t3_g2_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00045b63) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00045b63) list_medium_line_t3_g2_t

0x0bb9,	// (0x0003758a) list_medium_line_right_icon_g1

0x1332,	// (0x00037d03) list_medium_line_right_icon_t1

0x0b7b,	// (0x0003754c) list_medium_line_t2_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t2_g1

0x0bc3,	// (0x00037594) list_medium_line_t2_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t2_t1

0x0bc3,	// (0x00037594) list_medium_line_t2_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x00045bdf) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x00045bdf) list_medium_line_t2_t

0x0b7b,	// (0x0003754c) list_medium_line_t3_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t3_g1

0x0bc3,	// (0x00037594) list_medium_line_t3_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t3_t1

0x0bc3,	// (0x00037594) list_medium_line_t3_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t3_t2

0x0bc3,	// (0x00037594) list_medium_line_t3_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00045b63) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00045b63) list_medium_line_t3_t

0x0b7b,	// (0x0003754c) list_medium_line_g3_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_g3_g1

0x0b7b,	// (0x0003754c) list_medium_line_g3_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_g3_g2

0x0b7b,	// (0x0003754c) list_medium_line_g3_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00045b5c) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00045b5c) list_medium_line_g3_g

0x0bc3,	// (0x00037594) list_medium_line_g3_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_g3_t1

0x0b7b,	// (0x0003754c) list_medium_line_t2_g3_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t2_g3_g1

0x0b7b,	// (0x0003754c) list_medium_line_t2_g3_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t2_g3_g2

0x0b7b,	// (0x0003754c) list_medium_line_t2_g3_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00045b5c) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00045b5c) list_medium_line_t2_g3_g

0x0bc3,	// (0x00037594) list_medium_line_t2_g3_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t2_g3_t1

0x0bc3,	// (0x00037594) list_medium_line_t2_g3_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x00045bdf) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x00045bdf) list_medium_line_t2_g3_t

0x0b7b,	// (0x0003754c) list_medium_line_t3_g3_g1_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t3_g3_g1

0x0b7b,	// (0x0003754c) list_medium_line_t3_g3_g2_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t3_g3_g2

0x0b7b,	// (0x0003754c) list_medium_line_t3_g3_g3_ParamLimits

0x0b7b,	// (0x0003754c) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00045b5c) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00045b5c) list_medium_line_t3_g3_g

0x0bc3,	// (0x00037594) list_medium_line_t3_g3_t1_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t3_g3_t1

0x0bc3,	// (0x00037594) list_medium_line_t3_g3_t2_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t3_g3_t2

0x0bc3,	// (0x00037594) list_medium_line_t3_g3_t3_ParamLimits

0x0bc3,	// (0x00037594) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00045b63) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00045b63) list_medium_line_t3_g3_t

0x0bb9,	// (0x0003758a) list_medium_line_right_iconx2_g1

0x0bb9,	// (0x0003758a) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00045a5d) list_medium_line_right_iconx2_g

0x1332,	// (0x00037d03) list_medium_line_right_iconx2_t1

0x0bb9,	// (0x0003758a) list_medium_line_t2_right_iconx2_g1

0x0bb9,	// (0x0003758a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00045a5d) list_medium_line_t2_right_iconx2_g

0x1332,	// (0x00037d03) list_medium_line_t2_right_iconx2_t1

0x1332,	// (0x00037d03) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbc8,	// (0x00046599) list_medium_line_t2_right_iconx2_t

0x1332,	// (0x00037d03) list_medium_line_x4_t4_t1

0x1332,	// (0x00037d03) list_medium_line_x4_t4_t2

0x1332,	// (0x00037d03) list_medium_line_x4_t4_t3

0x1332,	// (0x00037d03) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x00045c31) list_medium_line_x4_t4_t

0xb5bc,	// (0x00041f8d) tport_appsw_pane_ParamLimits

0xb5bc,	// (0x00041f8d) tport_appsw_pane

0xb5ca,	// (0x00041f9b) tport_contact_pane_ParamLimits

0xb5ca,	// (0x00041f9b) tport_contact_pane

0xb5da,	// (0x00041fab) tport_listscroll_pane_ParamLimits

0xb5da,	// (0x00041fab) tport_listscroll_pane

0xb5ea,	// (0x00041fbb) cell_tport_appsw_pane_ParamLimits

0xb5ea,	// (0x00041fbb) cell_tport_appsw_pane

0x0b89,	// (0x0003755a) tport_appsw_pane_g1_ParamLimits

0x0b89,	// (0x0003755a) tport_appsw_pane_g1

0xb617,	// (0x00041fe8) tport_contact_pane_g1

0xb620,	// (0x00041ff1) tport_contact_pane_t1

0xb62e,	// (0x00041fff) tport_contact_pane_t2

0x0001,

0xfc08,	// (0x000465d9) tport_contact_pane_t

0xe28b,	// (0x00044c5c) list_tport_pane

0xe294,	// (0x00044c65) scroll_pane_cp_030

0xb644,	// (0x00042015) cell_tport_appsw_pane_g1

0xb654,	// (0x00042025) cell_tport_appsw_pane_t1

0xb662,	// (0x00042033) grid_highlight_pane_cp019

0xb66a,	// (0x0004203b) list_tport_double_graphic_pane_ParamLimits

0xb66a,	// (0x0004203b) list_tport_double_graphic_pane

0x0b14,	// (0x000374e5) list_highlight_pane_cp023_ParamLimits

0x0b14,	// (0x000374e5) list_highlight_pane_cp023

0xb677,	// (0x00042048) list_tport_double_graphic_pane_g1_ParamLimits

0xb677,	// (0x00042048) list_tport_double_graphic_pane_g1

0xb684,	// (0x00042055) list_tport_double_graphic_pane_t1_ParamLimits

0xb684,	// (0x00042055) list_tport_double_graphic_pane_t1

0xb699,	// (0x0004206a) list_tport_double_graphic_pane_t2_ParamLimits

0xb699,	// (0x0004206a) list_tport_double_graphic_pane_t2

0x0001,

0xfc14,	// (0x000465e5) list_tport_double_graphic_pane_t_ParamLimits

0xfc14,	// (0x000465e5) list_tport_double_graphic_pane_t

0xee90,	// (0x00045861) main_cale_note_pane

0x9720,	// (0x000400f1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9720,	// (0x000400f1) cell_vitu2_function_top_wide_pane_cp01

0xb0c3,	// (0x00041a94) wait_bar_pane_cp05_ParamLimits

0x0b14,	// (0x000374e5) listscroll_cmail_pane

0xe2a5,	// (0x00044c76) list_cmail_pane

0xb6ab,	// (0x0004207c) list_cmail_body_pane

0xb6c5,	// (0x00042096) list_single_cmail_header_caption_pane

0xb6e5,	// (0x000420b6) list_single_cmail_header_detail_pane_ParamLimits

0xb6e5,	// (0x000420b6) list_single_cmail_header_detail_pane

0xe2c8,	// (0x00044c99) list_single_cmail_header_caption_pane_t1

0x4924,	// (0x0003b2f5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x4924,	// (0x0003b2f5) list_single_cmail_header_detail_pane_g1

0x493c,	// (0x0003b30d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x493c,	// (0x0003b30d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc19,	// (0x000465ea) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc19,	// (0x000465ea) list_single_cmail_header_detail_pane_g

0x4948,	// (0x0003b319) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4948,	// (0x0003b319) list_single_cmail_header_detail_pane_t1

0x49a8,	// (0x0003b379) list_single_cmail_header_editor_pane_bg_ParamLimits

0x49a8,	// (0x0003b379) list_single_cmail_header_editor_pane_bg

0xdf53,	// (0x00044924) list_cmail_body_pane_g1

0xe2ec,	// (0x00044cbd) list_cmail_body_pane_t1

0xd231,	// (0x00043c02) list_single_cmail_header_editor_pane_bg_g1

0x1035,	// (0x00037a06) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd241,	// (0x00043c12) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd239,	// (0x00043c0a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4af,	// (0x00043e80) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd261,	// (0x00043c32) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd251,	// (0x00043c22) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd259,	// (0x00043c2a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1015,	// (0x000379e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb71b,	// (0x000420ec) calenote_gesture_pane_ParamLimits

0xb71b,	// (0x000420ec) calenote_gesture_pane

0xb735,	// (0x00042106) calenote_window_pane_ParamLimits

0xb735,	// (0x00042106) calenote_window_pane

0xe2fa,	// (0x00044ccb) popup_note_window_cp01

0xb74d,	// (0x0004211e) calenote_swipe_1_pane_ParamLimits

0xb74d,	// (0x0004211e) calenote_swipe_1_pane

0xb467,	// (0x00041e38) calenote_swipe_2_pane_ParamLimits

0xb467,	// (0x00041e38) calenote_swipe_2_pane

0xe129,	// (0x00044afa) calenote_swipe_1_pane_g1_ParamLimits

0xe129,	// (0x00044afa) calenote_swipe_1_pane_g1

0xe30c,	// (0x00044cdd) calenote_swipe_1_pane_g2_ParamLimits

0xe30c,	// (0x00044cdd) calenote_swipe_1_pane_g2

0x0001,

0xfc25,	// (0x000465f6) calenote_swipe_1_pane_g_ParamLimits

0xfc25,	// (0x000465f6) calenote_swipe_1_pane_g

0xe318,	// (0x00044ce9) calenote_swipe_1_pane_t1_ParamLimits

0xe318,	// (0x00044ce9) calenote_swipe_1_pane_t1

0xe129,	// (0x00044afa) calenote_swipe_2_pane_g1_ParamLimits

0xe129,	// (0x00044afa) calenote_swipe_2_pane_g1

0xe337,	// (0x00044d08) calenote_swipe_2_pane_g2_ParamLimits

0xe337,	// (0x00044d08) calenote_swipe_2_pane_g2

0x0001,

0xfc2a,	// (0x000465fb) calenote_swipe_2_pane_g_ParamLimits

0xfc2a,	// (0x000465fb) calenote_swipe_2_pane_g

0xe343,	// (0x00044d14) calenote_swipe_2_pane_t1_ParamLimits

0xe343,	// (0x00044d14) calenote_swipe_2_pane_t1

0xee90,	// (0x00045861) main_mup_navstr_pane

0x8696,	// (0x0003f067) main_mup3_pane_t7_ParamLimits

0x8696,	// (0x0003f067) main_mup3_pane_t7

0x8e16,	// (0x0003f7e7) main_mp4_pane_g6_ParamLimits

0x8e16,	// (0x0003f7e7) main_mp4_pane_g6

0x915b,	// (0x0003fb2c) main_image3_pane_t4_ParamLimits

0x915b,	// (0x0003fb2c) main_image3_pane_t4

0xb760,	// (0x00042131) popup_navstr_preview_pane_ParamLimits

0xb760,	// (0x00042131) popup_navstr_preview_pane

0xb76c,	// (0x0004213d) scroll_navstr_pane_ParamLimits

0xb76c,	// (0x0004213d) scroll_navstr_pane

0xee90,	// (0x00045861) bg_popup_preview_window_pane_cp04

0xe36a,	// (0x00044d3b) popup_navstr_preview_pane_t1

0xb778,	// (0x00042149) scroll_navstr_pane_g1_ParamLimits

0xb778,	// (0x00042149) scroll_navstr_pane_g1

0xb785,	// (0x00042156) scroll_navstr_pane_t1_ParamLimits

0xb785,	// (0x00042156) scroll_navstr_pane_t1

0xe303,	// (0x00044cd4) bg_button_pane_cp014

0xe303,	// (0x00044cd4) bg_button_pane_cp030

0xb337,	// (0x00041d08) list_double_fisheye_pane_g4_ParamLimits

0xb337,	// (0x00041d08) list_double_fisheye_pane_g4

0xb343,	// (0x00041d14) list_double_fisheye_pane_g5_ParamLimits

0xb343,	// (0x00041d14) list_double_fisheye_pane_g5

0xe2bc,	// (0x00044c8d) sp_fs_scroll_pane_cp03

0xe1f7,	// (0x00044bc8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe203,	// (0x00044bd4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbcd,	// (0x0004659e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb520,	// (0x00041ef1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe2b4,	// (0x00044c85) sp_fs_scroll_pane_cp02

0x0d70,	// (0x00037741) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0d70,	// (0x00037741) popup_sp_fs_calendar_preview_list_single_pane

0xee90,	// (0x00045861) main_cam6_pano_pane

0x0b14,	// (0x000374e5) main_mup3_pane_ParamLimits

0xee90,	// (0x00045861) main_phacti_pane

0xaf96,	// (0x00041967) bg_button_pane_cp11

0xafae,	// (0x0004197f) main_mobtv_info_pane_g2_ParamLimits

0xafae,	// (0x0004197f) main_mobtv_info_pane_g2

0x0001,

0xfb2d,	// (0x000464fe) main_mobtv_info_pane_g_ParamLimits

0xfb2d,	// (0x000464fe) main_mobtv_info_pane_g

0x0bd7,	// (0x000375a8) sc_clock_pane_t5_ParamLimits

0x0bd7,	// (0x000375a8) sc_clock_pane_t5

0x17b1,	// (0x00038182) main_radioblah_pane_g1_ParamLimits

0x17bf,	// (0x00038190) main_radioblah_pane_t3_ParamLimits

0x17bf,	// (0x00038190) main_radioblah_pane_t3

0x17bf,	// (0x00038190) main_radioblah_pane_t4_ParamLimits

0x17bf,	// (0x00038190) main_radioblah_pane_t4

0x0b6d,	// (0x0003753e) main_radioblah_text_pane_ParamLimits

0x0b6d,	// (0x0003753e) main_radioblah_text_pane

0xe060,	// (0x00044a31) main_radioblah_info_pane_g1_ParamLimits

0xe0a4,	// (0x00044a75) main_radioblah_info_pane_t4_ParamLimits

0xe0a4,	// (0x00044a75) main_radioblah_info_pane_t4

0x0b14,	// (0x000374e5) main_sp_fs_calendar_pane

0xb797,	// (0x00042168) main_phacti_pane_g1

0xb79f,	// (0x00042170) phacti_note_pane_ParamLimits

0xb79f,	// (0x00042170) phacti_note_pane

0xe381,	// (0x00044d52) phacti_term_pane_ParamLimits

0xe381,	// (0x00044d52) phacti_term_pane

0xe396,	// (0x00044d67) phacti_note_pane_t1_ParamLimits

0xe396,	// (0x00044d67) phacti_note_pane_t1

0x49bf,	// (0x0003b390) phacti_term_pane_g1

0x49c7,	// (0x0003b398) phacti_term_pane_t1_ParamLimits

0x49c7,	// (0x0003b398) phacti_term_pane_t1

0xe3ad,	// (0x00044d7e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe3b5,	// (0x00044d86) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc34,	// (0x00046605) popup_sp_fs_calendar_preview_list_single_pane_g

0xe3bd,	// (0x00044d8e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe3bd,	// (0x00044d8e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe3d3,	// (0x00044da4) aid_popup_sp_fs_bg_corner_pane

0x0bb9,	// (0x0003758a) popup_sp_fs_calendar_preview_bg_pane_g1

0xee90,	// (0x00045861) popup_sp_fs_calendar_preview_bg_pane

0xe3db,	// (0x00044dac) popup_sp_fs_calendar_preview_list_pane

0xe3e3,	// (0x00044db4) bg_main_sp_fs_cale_pane_ParamLimits

0xe3e3,	// (0x00044db4) bg_main_sp_fs_cale_pane

0xe3fb,	// (0x00044dcc) listscroll_cale_mrui_pane_ParamLimits

0xe3fb,	// (0x00044dcc) listscroll_cale_mrui_pane

0x3057,	// (0x00039a28) listscroll_sp_fs_schedule_track_pane

0x49fa,	// (0x0003b3cb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x49fa,	// (0x0003b3cb) main_sp_fs_ctrlbar_pane_cp01

0x3057,	// (0x00039a28) main_sp_fs_ribbon_pane

0x4a10,	// (0x0003b3e1) popup_sp_fs_cale_preview_window

0xd0e4,	// (0x00043ab5) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd0e4,	// (0x00043ab5) list_single_sp_fs_schedule_track_pane

0xd0e4,	// (0x00043ab5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd0e4,	// (0x00043ab5) bg_sp_fs_highlight_list_pane_cp03

0x8376,	// (0x0003ed47) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8376,	// (0x0003ed47) list_single_sp_fs_schedule_track_pane_g1

0x8376,	// (0x0003ed47) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8376,	// (0x0003ed47) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc39,	// (0x0004660a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc39,	// (0x0004660a) list_single_sp_fs_schedule_track_pane_g

0xb7b5,	// (0x00042186) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb7b5,	// (0x00042186) list_single_sp_fs_schedule_track_pane_t1

0xd0f0,	// (0x00043ac1) sp_fs_schedule_track_pane_ParamLimits

0xd0f0,	// (0x00043ac1) sp_fs_schedule_track_pane

0x305f,	// (0x00039a30) sp_fs_schedule_track_pane_g1

0x305f,	// (0x00039a30) sp_fs_schedule_track_pane_g2

0x305f,	// (0x00039a30) sp_fs_schedule_track_pane_g3

0x305f,	// (0x00039a30) sp_fs_schedule_track_pane_g4

0x305f,	// (0x00039a30) sp_fs_schedule_track_pane_g5

0x0004,

0xf7c8,	// (0x00046199) sp_fs_schedule_track_pane_g

0x305f,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g1

0x305f,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g2

0x305f,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g3

0x305f,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g4

0x305f,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g5

0x305f,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g6

0x305f,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g7

0x305f,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g8

0x305f,	// (0x00039a30) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc3e,	// (0x0004660f) bg_sp_fs_schedule_viewer_highlight_g

0x3057,	// (0x00039a28) bg_main_sp_fs_ribbon_pane

0x305f,	// (0x00039a30) main_sp_fs_ribbon_pane_g1

0xe413,	// (0x00044de4) main_sp_fs_ribbon_pane_t1

0xe413,	// (0x00044de4) main_sp_fs_ribbon_pane_t2

0xe413,	// (0x00044de4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc51,	// (0x00046622) main_sp_fs_ribbon_pane_t

0x3057,	// (0x00039a28) main_sp_fs_ribbon_scheduler_pane

0x305f,	// (0x00039a30) bg_main_sp_fs_ribbon_pane_g1

0x305f,	// (0x00039a30) bg_main_sp_fs_ribbon_pane_g2

0x305f,	// (0x00039a30) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6a5,	// (0x00046076) bg_main_sp_fs_ribbon_pane_g

0x305f,	// (0x00039a30) main_sp_fs_ribbon_scheduler_pane_g1

0x305f,	// (0x00039a30) main_sp_fs_ribbon_scheduler_pane_g2

0x305f,	// (0x00039a30) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6a5,	// (0x00046076) main_sp_fs_ribbon_scheduler_pane_g

0xe421,	// (0x00044df2) list_cale_mrui_pane

0xb7c7,	// (0x00042198) sp_fs_scroll_pane_cp07_ParamLimits

0xb7c7,	// (0x00042198) sp_fs_scroll_pane_cp07

0xd0e4,	// (0x00043ab5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd0e4,	// (0x00043ab5) bg_sp_fs_schedule_viewer_highlight

0x3057,	// (0x00039a28) list_single_sp_fs_schedule_track_pane_cp01

0x3057,	// (0x00039a28) list_sp_fs_schedule_track_pane

0xe42e,	// (0x00044dff) sp_fs_scroll_pane_cp06_ParamLimits

0xe42e,	// (0x00044dff) sp_fs_scroll_pane_cp06

0x0bb9,	// (0x0003758a) bgmain_sp_fs_calendar_pane_g1

0x4a22,	// (0x0003b3f3) list_single_cale_mrui_pane_ParamLimits

0x4a22,	// (0x0003b3f3) list_single_cale_mrui_pane

0x4a46,	// (0x0003b417) list_single_cale_mrui_row_pane_ParamLimits

0x4a46,	// (0x0003b417) list_single_cale_mrui_row_pane

0x4a53,	// (0x0003b424) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4a53,	// (0x0003b424) list_single_cale_mrui_row_pane_g1

0x4a8b,	// (0x0003b45c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4a8b,	// (0x0003b45c) list_single_cale_mrui_row_pane_t1

0x4a9d,	// (0x0003b46e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x4a9d,	// (0x0003b46e) list_single_cale_mrui_row_pane_t2

0x4b03,	// (0x0003b4d4) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4b03,	// (0x0003b4d4) list_single_cale_mrui_row_pane_t3

0x4b32,	// (0x0003b503) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4b32,	// (0x0003b503) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc5f,	// (0x00046630) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc5f,	// (0x00046630) list_single_cale_mrui_row_pane_t

0x4b61,	// (0x0003b532) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4b61,	// (0x0003b532) list_single_cmail_header_editor_pane_bg_cp01

0x4b8b,	// (0x0003b55c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x4b8b,	// (0x0003b55c) list_single_cmail_header_editor_pane_bg_cp02

0xe44f,	// (0x00044e20) main_radioblah_text_pane_t1_ParamLimits

0xe44f,	// (0x00044e20) main_radioblah_text_pane_t1

0xe469,	// (0x00044e3a) cam6_indi_pane_cp01

0xe471,	// (0x00044e42) cam6_mode_pane_cp01

0xe479,	// (0x00044e4a) cam6_pano_pane

0xe482,	// (0x00044e53) cam6_zoom_pane_cp01

0xe48c,	// (0x00044e5d) cam6_pano_image_pane

0xe495,	// (0x00044e66) cam6_pano_pane_g1

0xdf53,	// (0x00044924) cam6_pano_pane_g2

0xe49e,	// (0x00044e6f) cam6_pano_pane_g3

0xe4a7,	// (0x00044e78) cam6_pano_pane_g4

0x3304,	// (0x00039cd5) cam6_pano_pane_g5

0xe4b0,	// (0x00044e81) cam6_pano_pane_g6

0xe4b8,	// (0x00044e89) cam6_pano_pane_g7

0xe4c0,	// (0x00044e91) cam6_pano_pane_g8

0xe4c9,	// (0x00044e9a) cam6_pano_pane_g9

0x0008,

0xfc68,	// (0x00046639) cam6_pano_pane_g

0xee90,	// (0x00045861) main_browser_tag_pane

0xe362,	// (0x00044d33) grid_navstr_albumart_pane

0xe4d4,	// (0x00044ea5) cell_navstr_albumart_pane_ParamLimits

0xe4d4,	// (0x00044ea5) cell_navstr_albumart_pane

0xe4f0,	// (0x00044ec1) cell_navstr_albumart_pane_g1

0xe4f8,	// (0x00044ec9) cell_navstr_albumart_pane_g2

0xe500,	// (0x00044ed1) cell_navstr_albumart_pane_g3

0xe508,	// (0x00044ed9) cell_navstr_albumart_pane_g4

0x0003,

0xfc7b,	// (0x0004664c) cell_navstr_albumart_pane_g

0xb7e3,	// (0x000421b4) bt_list_pane_ParamLimits

0xb7e3,	// (0x000421b4) bt_list_pane

0xb7fc,	// (0x000421cd) bt_list_pane_t1

0xb80b,	// (0x000421dc) bt_list_pane_t2

0x0001,

0xfc84,	// (0x00046655) bt_list_pane_t

0xee90,	// (0x00045861) main_cale_prevew_pane

0xb81a,	// (0x000421eb) popup_cale_preview_window_ParamLimits

0xb81a,	// (0x000421eb) popup_cale_preview_window

0x0b14,	// (0x000374e5) bg_popup_preview_window_pane_cp05_ParamLimits

0x0b14,	// (0x000374e5) bg_popup_preview_window_pane_cp05

0xe510,	// (0x00044ee1) list_cale_preview_pane_ParamLimits

0xe510,	// (0x00044ee1) list_cale_preview_pane

0xb837,	// (0x00042208) list_double_cale_preview_pane_ParamLimits

0xb837,	// (0x00042208) list_double_cale_preview_pane

0xb84b,	// (0x0004221c) list_single_cale_preview_pane_ParamLimits

0xb84b,	// (0x0004221c) list_single_cale_preview_pane

0xb863,	// (0x00042234) list_single_cale_preview_pane_g1

0xb86b,	// (0x0004223c) list_single_cale_preview_pane_t1_ParamLimits

0xb86b,	// (0x0004223c) list_single_cale_preview_pane_t1

0xb880,	// (0x00042251) list_double_cale_preview_pane_g1

0xb888,	// (0x00042259) list_double_cale_preview_pane_t1_ParamLimits

0xb888,	// (0x00042259) list_double_cale_preview_pane_t1

0xb89d,	// (0x0004226e) list_double_cale_preview_pane_t2_ParamLimits

0xb89d,	// (0x0004226e) list_double_cale_preview_pane_t2

0x0001,

0xfc89,	// (0x0004665a) list_double_cale_preview_pane_t_ParamLimits

0xfc89,	// (0x0004665a) list_double_cale_preview_pane_t

0xee90,	// (0x00045861) main_ezdial_pane

0x0b14,	// (0x000374e5) main_sp_fs_email_pane_ParamLimits

0xb481,	// (0x00041e52) cmail_ddmenu_btn01_pane_ParamLimits

0xb481,	// (0x00041e52) cmail_ddmenu_btn01_pane

0xb49e,	// (0x00041e6f) cmail_ddmenu_btn02_pane_ParamLimits

0xb49e,	// (0x00041e6f) cmail_ddmenu_btn02_pane

0xb4bc,	// (0x00041e8d) cmail_ddmenu_btn03_pane_ParamLimits

0xb4bc,	// (0x00041e8d) cmail_ddmenu_btn03_pane

0xb55d,	// (0x00041f2e) main_sp_fs_ctrlbar_pane_ParamLimits

0xb577,	// (0x00041f48) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb6ab,	// (0x0004207c) list_cmail_body_pane_ParamLimits

0xe2d6,	// (0x00044ca7) bg_button_pane_cp12

0xe2df,	// (0x00044cb0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe2df,	// (0x00044cb0) list_single_cmail_header_detail_pane_g3

0x4984,	// (0x0003b355) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4984,	// (0x0003b355) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc20,	// (0x000465f1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc20,	// (0x000465f1) list_single_cmail_header_detail_pane_t

0x49dc,	// (0x0003b3ad) phacti_term_pane_t2_ParamLimits

0x49dc,	// (0x0003b3ad) phacti_term_pane_t2

0x0001,

0xfc2f,	// (0x00046600) phacti_term_pane_t_ParamLimits

0xfc2f,	// (0x00046600) phacti_term_pane_t

0xe51c,	// (0x00044eed) aid_size_list_single_double

0xb8b5,	// (0x00042286) popup_ezdial_listscroll_window

0xe528,	// (0x00044ef9) popup_number_entry_window_cp01

0x0e0b,	// (0x000377dc) bg_popup_call_pane_cp09

0xe535,	// (0x00044f06) ezdial_list_pane

0xe53d,	// (0x00044f0e) scroll_pane_cp23

0x2b95,	// (0x00039566) bg_button_pane_cp028_ParamLimits

0x2b95,	// (0x00039566) bg_button_pane_cp028

0xb8d1,	// (0x000422a2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb8d1,	// (0x000422a2) cmail_ddmenu_btn01_pane_g1

0xb8e3,	// (0x000422b4) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb8e3,	// (0x000422b4) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc8e,	// (0x0004665f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc8e,	// (0x0004665f) cmail_ddmenu_btn01_pane_g

0xe545,	// (0x00044f16) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe545,	// (0x00044f16) cmail_ddmenu_btn01_pane_t1

0x17d3,	// (0x000381a4) bg_button_pane_cp029_ParamLimits

0x17d3,	// (0x000381a4) bg_button_pane_cp029

0xb8ef,	// (0x000422c0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb8ef,	// (0x000422c0) cmail_ddmenu_btn02_pane_g1

0xb907,	// (0x000422d8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb907,	// (0x000422d8) cmail_ddmenu_btn02_pane_t1

0x0b6d,	// (0x0003753e) bg_button_pane_cp031_ParamLimits

0x0b6d,	// (0x0003753e) bg_button_pane_cp031

0xb8ef,	// (0x000422c0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb8ef,	// (0x000422c0) cmail_ddmenu_btn03_pane_g1

0xb907,	// (0x000422d8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb907,	// (0x000422d8) cmail_ddmenu_btn03_pane_t1

0x0bc3,	// (0x00037594) cell_dialer2_keypad_pane_t1_ParamLimits

0x3342,	// (0x00039d13) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x3342,	// (0x00039d13) cell_dialer2_keypad_pane_t1_copy1

0xadc3,	// (0x00041794) ncimui_group_button_pane

0x0b14,	// (0x000374e5) main_sp_fs_calendar_pane_ParamLimits

0xb6c5,	// (0x00042096) list_single_cmail_header_caption_pane_ParamLimits

0x49f1,	// (0x0003b3c2) aid_recal_txt_sm_pane

0xee90,	// (0x00045861) mian_recal_day_pane

0x4a10,	// (0x0003b3e1) popup_sp_fs_cale_preview_window_ParamLimits

0xe55b,	// (0x00044f2c) list_recal_day_pane

0x4bc3,	// (0x0003b594) list_single_recal_day_pane_ParamLimits

0x4bc3,	// (0x0003b594) list_single_recal_day_pane

0xe582,	// (0x00044f53) list_single_recal_day_pane_g1_ParamLimits

0xe582,	// (0x00044f53) list_single_recal_day_pane_g1

0x4bd5,	// (0x0003b5a6) list_single_recal_day_pane_g2_ParamLimits

0x4bd5,	// (0x0003b5a6) list_single_recal_day_pane_g2

0x4be1,	// (0x0003b5b2) list_single_recal_day_pane_g3_ParamLimits

0x4be1,	// (0x0003b5b2) list_single_recal_day_pane_g3

0x4bed,	// (0x0003b5be) list_single_recal_day_pane_g4_ParamLimits

0x4bed,	// (0x0003b5be) list_single_recal_day_pane_g4

0x4bfb,	// (0x0003b5cc) list_single_recal_day_pane_g5_ParamLimits

0x4bfb,	// (0x0003b5cc) list_single_recal_day_pane_g5

0x4c11,	// (0x0003b5e2) list_single_recal_day_pane_g6_ParamLimits

0x4c11,	// (0x0003b5e2) list_single_recal_day_pane_g6

0x0004,

0xfc9d,	// (0x0004666e) list_single_recal_day_pane_g_ParamLimits

0xfc9d,	// (0x0004666e) list_single_recal_day_pane_g

0x4c25,	// (0x0003b5f6) list_single_recal_day_pane_t1

0x4c37,	// (0x0003b608) list_single_recal_day_pane_t2

0x0001,

0xfca8,	// (0x00046679) list_single_recal_day_pane_t

0xb92b,	// (0x000422fc) ncimui_query_button_pane_ParamLimits

0xb92b,	// (0x000422fc) ncimui_query_button_pane

0xb93b,	// (0x0004230c) ncimui_query_button_pane_t1_ParamLimits

0xb93b,	// (0x0004230c) ncimui_query_button_pane_t1

0xe58e,	// (0x00044f5f) ncimui_query_button_pane_t2_ParamLimits

0xe58e,	// (0x00044f5f) ncimui_query_button_pane_t2

0x0001,

0xfcad,	// (0x0004667e) ncimui_query_button_pane_t_ParamLimits

0xfcad,	// (0x0004667e) ncimui_query_button_pane_t

0xb94e,	// (0x0004231f) query_button_pane_ParamLimits

0xb94e,	// (0x0004231f) query_button_pane

0xee90,	// (0x00045861) bg_button_pane_cp0028

0xe5a1,	// (0x00044f72) query_button_pane_t1

0x7b73,	// (0x0003e544) main_tport_pane_ParamLimits

0xb592,	// (0x00041f63) bg_popup_window_pane_cp01_ParamLimits

0xb592,	// (0x00041f63) bg_popup_window_pane_cp01

0xb5a0,	// (0x00041f71) heading_pane_cp08_ParamLimits

0xb5a0,	// (0x00041f71) heading_pane_cp08

0xb5ae,	// (0x00041f7f) heading_pane_cp07_ParamLimits

0xb5ae,	// (0x00041f7f) heading_pane_cp07

0xb644,	// (0x00042015) cell_tport_appsw_pane_g2

0x0002,

0xfc0d,	// (0x000465de) cell_tport_appsw_pane_g

0x43ef,	// (0x0003adc0) input_candi_list_open_g1

0x11d0,	// (0x00037ba1) list_cale_time_pane_g6_ParamLimits

0x11d0,	// (0x00037ba1) list_cale_time_pane_g6

0x805d,	// (0x0003ea2e) aid_size_touch_calib_1_ParamLimits

0x805d,	// (0x0003ea2e) aid_size_touch_calib_1

0x8069,	// (0x0003ea3a) aid_size_touch_calib_2_ParamLimits

0x8069,	// (0x0003ea3a) aid_size_touch_calib_2

0x8077,	// (0x0003ea48) aid_size_touch_calib_3_ParamLimits

0x8077,	// (0x0003ea48) aid_size_touch_calib_3

0x8087,	// (0x0003ea58) aid_size_touch_calib_4_ParamLimits

0x8087,	// (0x0003ea58) aid_size_touch_calib_4

0x8095,	// (0x0003ea66) main_touch_calib_button_group_pane_ParamLimits

0x8095,	// (0x0003ea66) main_touch_calib_button_group_pane

0x80a3,	// (0x0003ea74) main_touch_calib_pane_g1_ParamLimits

0x80af,	// (0x0003ea80) main_touch_calib_pane_g2_ParamLimits

0x80bb,	// (0x0003ea8c) main_touch_calib_pane_g3_ParamLimits

0x80c7,	// (0x0003ea98) main_touch_calib_pane_g4_ParamLimits

0xf653,	// (0x00046024) main_touch_calib_pane_g_ParamLimits

0x80d3,	// (0x0003eaa4) main_touch_calib_pane_t1_ParamLimits

0x80ea,	// (0x0003eabb) main_touch_calib_pane_t2_ParamLimits

0x8103,	// (0x0003ead4) main_touch_calib_pane_t3_ParamLimits

0x8119,	// (0x0003eaea) main_touch_calib_pane_t4_ParamLimits

0x812f,	// (0x0003eb00) main_touch_calib_pane_t5_ParamLimits

0xf65c,	// (0x0004602d) main_touch_calib_pane_t_ParamLimits

0x30bf,	// (0x00039a90) list_single_fp_cale_pane_g3_ParamLimits

0x30bf,	// (0x00039a90) list_single_fp_cale_pane_g3

0x0b14,	// (0x000374e5) bg_button_pane_cp012_ParamLimits

0x0b14,	// (0x000374e5) bg_vkb2_func_pane_cp03_ParamLimits

0x9f09,	// (0x000408da) cell_vitu2_function_top_pane_g1_ParamLimits

0x0b14,	// (0x000374e5) bg_vkb2_func_pane_cp04_ParamLimits

0xad49,	// (0x0004171a) main_ncimui_button_group_pane_ParamLimits

0xad49,	// (0x0004171a) main_ncimui_button_group_pane

0xadb1,	// (0x00041782) main_ncimui_pane_t3_ParamLimits

0xadb1,	// (0x00041782) main_ncimui_pane_t3

0xe378,	// (0x00044d49) phacti_button_group_pane

0xe51c,	// (0x00044eed) aid_size_list_single_double_ParamLimits

0xb8b5,	// (0x00042286) popup_ezdial_listscroll_window_ParamLimits

0xe528,	// (0x00044ef9) popup_number_entry_window_cp01_ParamLimits

0xb95b,	// (0x0004232c) phacti_button_pane_ParamLimits

0xb95b,	// (0x0004232c) phacti_button_pane

0xee90,	// (0x00045861) bg_button_pane_cp14

0xe5af,	// (0x00044f80) phacti_button_pane_t1

0xb96c,	// (0x0004233d) main_touch_calib_button_pane_ParamLimits

0xb96c,	// (0x0004233d) main_touch_calib_button_pane

0x0c17,	// (0x000375e8) bg_button_pane_cp18_ParamLimits

0x0c17,	// (0x000375e8) bg_button_pane_cp18

0xe5bd,	// (0x00044f8e) main_touch_calib_button_pane_t1_ParamLimits

0xe5bd,	// (0x00044f8e) main_touch_calib_button_pane_t1

0xe5d3,	// (0x00044fa4) main_touch_calib_button_pane_t2_ParamLimits

0xe5d3,	// (0x00044fa4) main_touch_calib_button_pane_t2

0x0001,

0xfcb2,	// (0x00046683) main_touch_calib_button_pane_t_ParamLimits

0xfcb2,	// (0x00046683) main_touch_calib_button_pane_t

0xee90,	// (0x00045861) cell_ncimui_button_pane

0xee90,	// (0x00045861) bg_button_pane_cp032

0xe5f1,	// (0x00044fc2) cell_ncimui_button_pane_t1

0x907a,	// (0x0003fa4b) image3_infobar_pane_ParamLimits

0x907a,	// (0x0003fa4b) image3_infobar_pane

0xb107,	// (0x00041ad8) fs_bigclock_status_pane_ParamLimits

0xb107,	// (0x00041ad8) fs_bigclock_status_pane

0xb114,	// (0x00041ae5) main_fs_bigclock_clock_pane_ParamLimits

0xb114,	// (0x00041ae5) main_fs_bigclock_clock_pane

0xb130,	// (0x00041b01) main_fs_bigclock_indi_pane_ParamLimits

0xb130,	// (0x00041b01) main_fs_bigclock_indi_pane

0xb15e,	// (0x00041b2f) main_fs_bigclock_swipe_pane_ParamLimits

0xb15e,	// (0x00041b2f) main_fs_bigclock_swipe_pane

0xee90,	// (0x00045861) main_fs_clock_dumped_data

0xb198,	// (0x00041b69) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb198,	// (0x00041b69) list_single_fs_bigclock_indicator_pane_g1

0xb1b7,	// (0x00041b88) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb1b7,	// (0x00041b88) list_single_fs_bigclock_indicator_pane_g2

0xb1d1,	// (0x00041ba2) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb1d1,	// (0x00041ba2) list_single_fs_bigclock_indicator_pane_g3

0xb1ed,	// (0x00041bbe) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb1ed,	// (0x00041bbe) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb61,	// (0x00046532) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb61,	// (0x00046532) list_single_fs_bigclock_indicator_pane_g

0xb21c,	// (0x00041bed) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb21c,	// (0x00041bed) list_single_fs_bigclock_indicator_pane_t1

0xb244,	// (0x00041c15) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb244,	// (0x00041c15) list_single_fs_bigclock_indicator_pane_t2

0xb26c,	// (0x00041c3d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb26c,	// (0x00041c3d) list_single_fs_bigclock_indicator_pane_t3

0xb294,	// (0x00041c65) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb294,	// (0x00041c65) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb6c,	// (0x0004653d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb6c,	// (0x0004653d) list_single_fs_bigclock_indicator_pane_t

0xe5ff,	// (0x00044fd0) image3_infobar_fav_pane_ParamLimits

0xe5ff,	// (0x00044fd0) image3_infobar_fav_pane

0xe60f,	// (0x00044fe0) image3_infobar_loc_pane_ParamLimits

0xe60f,	// (0x00044fe0) image3_infobar_loc_pane

0xe625,	// (0x00044ff6) image3_infobar_time_pane_ParamLimits

0xe625,	// (0x00044ff6) image3_infobar_time_pane

0x0bb9,	// (0x0003758a) image3_infobar_time_pane_g1

0xe635,	// (0x00045006) image3_infobar_time_pane_t1

0x0bb9,	// (0x0003758a) image3_infobar_loc_pane_g1

0xe643,	// (0x00045014) image3_infobar_loc_pane_g2

0x0001,

0xfcb7,	// (0x00046688) image3_infobar_loc_pane_g

0xe64b,	// (0x0004501c) image3_infobar_loc_pane_t1

0x0bb9,	// (0x0003758a) image3_infobar_fav_pane_g1

0xe659,	// (0x0004502a) image3_infobar_fav_pane_g2

0x0001,

0xfcbc,	// (0x0004668d) image3_infobar_fav_pane_g

0xe661,	// (0x00045032) fs_bigclock_status_battery_pane

0xe66a,	// (0x0004503b) fs_bigclock_status_signal_pane

0xe673,	// (0x00045044) fs_bigclock_status_title_pane

0xe67c,	// (0x0004504d) fs_bigclock_status_signal_pane_g1

0xe685,	// (0x00045056) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcc1,	// (0x00046692) fs_bigclock_status_signal_pane_g

0xe68d,	// (0x0004505e) fs_bigclock_status_battery_pane_g1

0xe696,	// (0x00045067) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcc6,	// (0x00046697) fs_bigclock_status_battery_pane_g

0xe69e,	// (0x0004506f) fs_bigclock_status_title_pane_t1

0xb97c,	// (0x0004234d) main_fs_bigclock_clock_pane_g1

0xb97c,	// (0x0004234d) main_fs_bigclock_clock_pane_g2

0xb97c,	// (0x0004234d) main_fs_bigclock_clock_pane_g3

0xb97c,	// (0x0004234d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfccb,	// (0x0004669c) main_fs_bigclock_clock_pane_g

0xb98c,	// (0x0004235d) main_fs_bigclock_clock_pane_t1

0xb9a2,	// (0x00042373) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcd4,	// (0x000466a5) main_fs_bigclock_clock_pane_t

0xe6ac,	// (0x0004507d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe6ac,	// (0x0004507d) list_single_fs_bigclock_indicator_pane

0xe6bd,	// (0x0004508e) list_single_fs_bigclock_pane_ParamLimits

0xe6bd,	// (0x0004508e) list_single_fs_bigclock_pane

0xe6e3,	// (0x000450b4) main_fs_bigclock_indicator_pane_t1

0xe6f2,	// (0x000450c3) list_single_fs_bigclock_pane_g1

0xe6fa,	// (0x000450cb) list_single_fs_bigclock_pane_t1

0x0bb9,	// (0x0003758a) main_fs_bigclock_swipe_pane_g1

0xe73d,	// (0x0004510e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfce5,	// (0x000466b6) main_fs_bigclock_swipe_pane_g

0xe745,	// (0x00045116) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe745,	// (0x00045116) main_fs_bigclock_swipe_pane_t1

0x6d74,	// (0x0003d745) call_type_pane_ParamLimits

0xee90,	// (0x00045861) main_btmg_pane

0x4a7f,	// (0x0003b450) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4a7f,	// (0x0003b450) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc58,	// (0x00046629) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc58,	// (0x00046629) list_single_cale_mrui_row_pane_g

0x4bb1,	// (0x0003b582) list_recal_vselct_arw_lo_pane

0xe57a,	// (0x00044f4b) list_recal_vselct_arw_up_pane

0x4bb9,	// (0x0003b58a) list_recal_vselct_pane

0xb9f9,	// (0x000423ca) btmg_button_pane

0xba05,	// (0x000423d6) main_btmg_pane_g1

0xee90,	// (0x00045861) bg_button_pane_cp044

0xe762,	// (0x00045133) btmg_button_pane_t1

0x2973,	// (0x00039344) aid_listscroll_gen

0x0b14,	// (0x000374e5) main_cntbar_detail_pane

0xe29d,	// (0x00044c6e) list_cmail_folder_pane

0xe2bc,	// (0x00044c8d) sp_fs_scroll_pane_cp03_ParamLimits

0x4c49,	// (0x0003b61a) list_single_fs_dyc_pane_cp01_ParamLimits

0x4c49,	// (0x0003b61a) list_single_fs_dyc_pane_cp01

0xe770,	// (0x00045141) aid_size_cmail_indent

0x4c67,	// (0x0003b638) list_single_dyc_row_pane_cp01

0xba2d,	// (0x000423fe) cntbar_detail_list_pane_ParamLimits

0xba2d,	// (0x000423fe) cntbar_detail_list_pane

0xba6d,	// (0x0004243e) main_cntbar_detail_cont_pane_ParamLimits

0xba6d,	// (0x0004243e) main_cntbar_detail_cont_pane

0x6d68,	// (0x0003d739) scroll_pane_cp032_ParamLimits

0x6d68,	// (0x0003d739) scroll_pane_cp032

0xba79,	// (0x0004244a) cntbar_detail_list_event_pane_ParamLimits

0xba79,	// (0x0004244a) cntbar_detail_list_event_pane

0xba3b,	// (0x0004240c) cntbar_detail_list_shct_pane

0x1083,	// (0x00037a54) aid_list_gen

0xe779,	// (0x0004514a) aid_scroll

0xe782,	// (0x00045153) aid_size_touch_scroll_bar

0xb302,	// (0x00041cd3) aid_list_double

0x4c70,	// (0x0003b641) aid_list_single

0xe9da,	// (0x000453ab) aid_list_single_lg

0x4c79,	// (0x0003b64a) aid_list_z_g_a_sm

0x4c81,	// (0x0003b652) aid_list_z_g_d

0x4c89,	// (0x0003b65a) aid_txt_z_prm

0x4c97,	// (0x0003b668) aid_txt_z_prm_cp01

0x4ca5,	// (0x0003b676) aid_txt_z_sec

0xba89,	// (0x0004245a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xba89,	// (0x0004245a) main_cntbar_detail_cont_pane_g1

0xba96,	// (0x00042467) main_cntbar_detail_cont_pane_g2_ParamLimits

0xba96,	// (0x00042467) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcea,	// (0x000466bb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcea,	// (0x000466bb) main_cntbar_detail_cont_pane_g

0xe78b,	// (0x0004515c) main_cntbar_detail_cont_pane_t1

0xe799,	// (0x0004516a) main_cntbar_detail_cont_pane_t2

0xe7a7,	// (0x00045178) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcef,	// (0x000466c0) main_cntbar_detail_cont_pane_t

0xbaa2,	// (0x00042473) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbaa2,	// (0x00042473) cell_cntbar_detail_list_shct_pane

0xe7b5,	// (0x00045186) cntbar_detail_list_shct_pane_g1

0xe7be,	// (0x0004518f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcf6,	// (0x000466c7) cntbar_detail_list_shct_pane_g

0xbab6,	// (0x00042487) cntbar_detail_list_event_pane_g1_ParamLimits

0xbab6,	// (0x00042487) cntbar_detail_list_event_pane_g1

0xbac2,	// (0x00042493) cntbar_detail_list_event_pane_g2_ParamLimits

0xbac2,	// (0x00042493) cntbar_detail_list_event_pane_g2

0x0005,

0xfcfb,	// (0x000466cc) cntbar_detail_list_event_pane_g_ParamLimits

0xfcfb,	// (0x000466cc) cntbar_detail_list_event_pane_g

0xbb30,	// (0x00042501) cntbar_detail_list_event_pane_t1_ParamLimits

0xbb30,	// (0x00042501) cntbar_detail_list_event_pane_t1

0xbb45,	// (0x00042516) cntbar_detail_list_event_pane_t2_ParamLimits

0xbb45,	// (0x00042516) cntbar_detail_list_event_pane_t2

0x0002,

0xfd08,	// (0x000466d9) cntbar_detail_list_event_pane_t_ParamLimits

0xfd08,	// (0x000466d9) cntbar_detail_list_event_pane_t

0x0bb9,	// (0x0003758a) cell_cntbar_detail_list_shct_pane_g1

0x7121,	// (0x0003daf2) navi_pane_mv_g3

0x0b14,	// (0x000374e5) main_cntbar_detail_pane_ParamLimits

0xee90,	// (0x00045861) main_notif_wgt_pane

0x8d43,	// (0x0003f714) aid_tch_main_mp4_pane_g4

0x900c,	// (0x0003f9dd) popup_slider_window_cp02

0x4ba7,	// (0x0003b578) list_recal_day_event_pane

0xba0d,	// (0x000423de) cntbar_detail_btn_pane_ParamLimits

0xba0d,	// (0x000423de) cntbar_detail_btn_pane

0xba1d,	// (0x000423ee) cntbar_detail_btn_pane_cp01_ParamLimits

0xba1d,	// (0x000423ee) cntbar_detail_btn_pane_cp01

0xba3b,	// (0x0004240c) cntbar_detail_list_shct_pane_ParamLimits

0xba47,	// (0x00042418) cntbar_detail_pane_g1_ParamLimits

0xba47,	// (0x00042418) cntbar_detail_pane_g1

0xba57,	// (0x00042428) cntbar_detail_pane_t1_ParamLimits

0xba57,	// (0x00042428) cntbar_detail_pane_t1

0xbace,	// (0x0004249f) cntbar_detail_list_event_pane_g3_ParamLimits

0xbace,	// (0x0004249f) cntbar_detail_list_event_pane_g3

0xbae6,	// (0x000424b7) cntbar_detail_list_event_pane_g4_ParamLimits

0xbae6,	// (0x000424b7) cntbar_detail_list_event_pane_g4

0xbafe,	// (0x000424cf) cntbar_detail_list_event_pane_g5_ParamLimits

0xbafe,	// (0x000424cf) cntbar_detail_list_event_pane_g5

0xbb16,	// (0x000424e7) cntbar_detail_list_event_pane_g6_ParamLimits

0xbb16,	// (0x000424e7) cntbar_detail_list_event_pane_g6

0xbb5a,	// (0x0004252b) cntbar_detail_list_event_pane_t3_ParamLimits

0xbb5a,	// (0x0004252b) cntbar_detail_list_event_pane_t3

0xbb6c,	// (0x0004253d) popup_notif_wgt_window_ParamLimits

0xbb6c,	// (0x0004253d) popup_notif_wgt_window

0xbb7c,	// (0x0004254d) popup_submenu_window_cp01_ParamLimits

0xbb7c,	// (0x0004254d) popup_submenu_window_cp01

0x0e0b,	// (0x000377dc) bg_popup_window_pane_cp10

0xe7c7,	// (0x00045198) listscroll_notif_wgt_pane

0xe7d9,	// (0x000451aa) list_notif_wgt_window

0xe7e2,	// (0x000451b3) scroll_pane_cp033

0xbb8c,	// (0x0004255d) list_notif_wgt_row_pane_ParamLimits

0xbb8c,	// (0x0004255d) list_notif_wgt_row_pane

0xe7eb,	// (0x000451bc) aid_size_list_notif_wgt_del

0xe7f8,	// (0x000451c9) list_notif_wgt_row_pane_g1

0xe804,	// (0x000451d5) list_notif_wgt_row_pane_g2

0xe813,	// (0x000451e4) list_notif_wgt_row_pane_g3

0x0002,

0xfd0f,	// (0x000466e0) list_notif_wgt_row_pane_g

0xe820,	// (0x000451f1) list_notif_wgt_row_pane_t1

0xe836,	// (0x00045207) list_notif_wgt_row_pane_t2

0xe848,	// (0x00045219) list_notif_wgt_row_pane_t3

0x0002,

0xfd16,	// (0x000466e7) list_notif_wgt_row_pane_t

0xd4b7,	// (0x00043e88) list_recal_day_event_pane_g1

0xe85a,	// (0x0004522b) list_recal_day_event_pane_t1

0xee90,	// (0x00045861) bg_button_pane_cp045

0xbba0,	// (0x00042571) cntbar_detail_btn_pane_t1

0x17d3,	// (0x000381a4) main_callh_pane_ParamLimits

0x17d3,	// (0x000381a4) main_callh_pane

0xee90,	// (0x00045861) main_coverflow0_pane

0xee90,	// (0x00045861) main_wgtman_pane

0xb176,	// (0x00041b47) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb176,	// (0x00041b47) main_fs_bigclock_unlock_btn_pane

0xb63c,	// (0x0004200d) bg_button_pane_cp16

0xb64c,	// (0x0004201d) cell_tport_appsw_pane_g3

0xbbae,	// (0x0004257f) cf0_flow_pane_ParamLimits

0xbbae,	// (0x0004257f) cf0_flow_pane

0xe869,	// (0x0004523a) listscroll_cf0_pane

0xe874,	// (0x00045245) main_cf0_pane_g1

0xbbbd,	// (0x0004258e) main_cf0_pane_t1_ParamLimits

0xbbbd,	// (0x0004258e) main_cf0_pane_t1

0xbbd1,	// (0x000425a2) main_cf0_pane_t2_ParamLimits

0xbbd1,	// (0x000425a2) main_cf0_pane_t2

0x0001,

0xfd22,	// (0x000466f3) main_cf0_pane_t_ParamLimits

0xfd22,	// (0x000466f3) main_cf0_pane_t

0xe886,	// (0x00045257) scroll_pane_cp11

0xbbe5,	// (0x000425b6) cf0_flow_pane_g1

0xbbed,	// (0x000425be) cf0_flow_pane_g2

0x0001,

0xfd27,	// (0x000466f8) cf0_flow_pane_g

0xbbf5,	// (0x000425c6) cf0_flow_pane_t1

0xee90,	// (0x00045861) main_call6_pane

0xee90,	// (0x00045861) main_calllock_pane

0xbc03,	// (0x000425d4) call6_btn_grp_pane_ParamLimits

0xbc03,	// (0x000425d4) call6_btn_grp_pane

0xbc10,	// (0x000425e1) call6_pane_g1_ParamLimits

0xbc10,	// (0x000425e1) call6_pane_g1

0xbc20,	// (0x000425f1) popup_call6_1st_window_ParamLimits

0xbc20,	// (0x000425f1) popup_call6_1st_window

0xbc30,	// (0x00042601) popup_call6_2nd_window_ParamLimits

0xbc30,	// (0x00042601) popup_call6_2nd_window

0xbc40,	// (0x00042611) cell_call6_btn_pane_ParamLimits

0xbc40,	// (0x00042611) cell_call6_btn_pane

0x0e0b,	// (0x000377dc) bg_popup_call2_in_pane_cp03

0xe891,	// (0x00045262) popup_call6_1st_window_g1

0xe899,	// (0x0004526a) popup_call6_1st_window_g2

0xe8a1,	// (0x00045272) popup_call6_1st_window_g3

0x0002,

0xfd2c,	// (0x000466fd) popup_call6_1st_window_g

0xe8a9,	// (0x0004527a) popup_call6_1st_window_t1

0xe8b8,	// (0x00045289) popup_call6_1st_window_t2

0xe8c8,	// (0x00045299) popup_call6_1st_window_t3

0x0002,

0xfd33,	// (0x00046704) popup_call6_1st_window_t

0x0e0b,	// (0x000377dc) bg_popup_call2_in_pane_cp04

0xe8d8,	// (0x000452a9) popup_call6_2nd_window_g1

0xe8e0,	// (0x000452b1) popup_call6_2nd_window_g2

0xe8e8,	// (0x000452b9) popup_call6_2nd_window_g3

0x0002,

0xfd3a,	// (0x0004670b) popup_call6_2nd_window_g

0xe8f0,	// (0x000452c1) popup_call6_2nd_window_t1

0xee90,	// (0x00045861) bg_button_pane_cp15

0xe8ff,	// (0x000452d0) cell_call6_btn_pane_g1

0xf00e,	// (0x000459df) cell_call6_btn_pane_t1

0xbc51,	// (0x00042622) listscroll_wgtman_pane_ParamLimits

0xbc51,	// (0x00042622) listscroll_wgtman_pane

0xbc6d,	// (0x0004263e) wgtman_btn_pane_ParamLimits

0xbc6d,	// (0x0004263e) wgtman_btn_pane

0x15c0,	// (0x00037f91) aid_scroll_copy1

0xe908,	// (0x000452d9) list_wgtman_pane

0xbca2,	// (0x00042673) wgtman_btn_pane_g1_ParamLimits

0xbca2,	// (0x00042673) wgtman_btn_pane_g1

0xbcca,	// (0x0004269b) wgtman_btn_pane_t1_ParamLimits

0xbcca,	// (0x0004269b) wgtman_btn_pane_t1

0xe912,	// (0x000452e3) wgtman_btn_pane_t2_ParamLimits

0xe912,	// (0x000452e3) wgtman_btn_pane_t2

0x0001,

0xfd41,	// (0x00046712) wgtman_btn_pane_t_ParamLimits

0xfd41,	// (0x00046712) wgtman_btn_pane_t

0xbd01,	// (0x000426d2) listrow_wgtman_pane_ParamLimits

0xbd01,	// (0x000426d2) listrow_wgtman_pane

0xbd18,	// (0x000426e9) listrow_wgtman_pane_g1

0xbd25,	// (0x000426f6) listrow_wgtman_pane_g2

0x0001,

0xfd46,	// (0x00046717) listrow_wgtman_pane_g

0x4cb3,	// (0x0003b684) listrow_wgtman_pane_t1

0x4ccb,	// (0x0003b69c) listrow_wgtman_pane_t2

0x0001,

0xfd4b,	// (0x0004671c) listrow_wgtman_pane_t

0x4cf1,	// (0x0003b6c2) wait_bar_pane_cp09

0xe929,	// (0x000452fa) main_calllock_btn_pane

0xe933,	// (0x00045304) main_calllock_pane_g1

0xee90,	// (0x00045861) bg_button_pane_cp17

0xe8ff,	// (0x000452d0) main_calllock_btn_pane_g1

0xe93f,	// (0x00045310) main_calllock_btn_pane_t1

0xee90,	// (0x00045861) main_dialer3_pane

0xee90,	// (0x00045861) main_fmrd2_pane

0x0bb9,	// (0x0003758a) main_fs_bigclock_unlock_btn_pane_g1

0xbd4b,	// (0x0004271c) main_fs_bigclock_unlock_btn_pane_t1

0xbd59,	// (0x0004272a) area_fmrd2_info_pane_ParamLimits

0xbd59,	// (0x0004272a) area_fmrd2_info_pane

0xbd65,	// (0x00042736) area_fmrd2_visual_pane_ParamLimits

0xbd65,	// (0x00042736) area_fmrd2_visual_pane

0xbd73,	// (0x00042744) fmrd2_indi_pane_ParamLimits

0xbd73,	// (0x00042744) fmrd2_indi_pane

0xbd80,	// (0x00042751) area_fmrd2_visual_pane_g1

0xbd88,	// (0x00042759) area_fmrd2_visual_pane_t1

0xbd98,	// (0x00042769) area_fmrd2_visual_pane_t2

0xbda8,	// (0x00042779) area_fmrd2_visual_pane_t3

0x0002,

0xfd55,	// (0x00046726) area_fmrd2_visual_pane_t

0xbdb8,	// (0x00042789) area_fmrd2_info_pane_g1

0xbdc0,	// (0x00042791) area_fmrd2_info_pane_t1

0xbdd0,	// (0x000427a1) area_fmrd2_info_pane_t2

0xbde0,	// (0x000427b1) area_fmrd2_info_pane_t3

0xbdf0,	// (0x000427c1) area_fmrd2_info_pane_t4

0x0003,

0xfd5c,	// (0x0004672d) area_fmrd2_info_pane_t

0xbe00,	// (0x000427d1) fmrd2_indi_pane_t1

0xbe10,	// (0x000427e1) fmrd2_indi_pane_t2

0xbe20,	// (0x000427f1) fmrd2_indi_pane_t3

0x0002,

0xfd65,	// (0x00046736) fmrd2_indi_pane_t

0xb1fe,	// (0x00041bcf) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb1fe,	// (0x00041bcf) list_single_fs_bigclock_indicator_pane_g5

0xb2b3,	// (0x00041c84) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb2b3,	// (0x00041c84) list_single_fs_bigclock_indicator_pane_t5

0xd0f0,	// (0x00043ac1) aid_cell_bcale_month_pane_ParamLimits

0xd0f0,	// (0x00043ac1) aid_cell_bcale_month_pane

0xd0f0,	// (0x00043ac1) bcale_month_pane_ParamLimits

0xd0f0,	// (0x00043ac1) bcale_month_pane

0xd0e4,	// (0x00043ab5) bcale_preview_pane_ParamLimits

0xd0e4,	// (0x00043ab5) bcale_preview_pane

0xe6fa,	// (0x000450cb) list_single_fs_bigclock_pane_t1_ParamLimits

0xe719,	// (0x000450ea) list_single_fs_bigclock_pane_t2_ParamLimits

0xe719,	// (0x000450ea) list_single_fs_bigclock_pane_t2

0x0001,

0xfce0,	// (0x000466b1) list_single_fs_bigclock_pane_t_ParamLimits

0xfce0,	// (0x000466b1) list_single_fs_bigclock_pane_t

0xbd43,	// (0x00042714) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd50,	// (0x00046721) main_fs_bigclock_unlock_btn_pane_g

0xbe30,	// (0x00042801) aid_dia3_key_size_ParamLimits

0xbe30,	// (0x00042801) aid_dia3_key_size

0xbe3c,	// (0x0004280d) aid_dia3_listrow_size_ParamLimits

0xbe3c,	// (0x0004280d) aid_dia3_listrow_size

0xbe4c,	// (0x0004281d) dia3_keypad_fun_pane_ParamLimits

0xbe4c,	// (0x0004281d) dia3_keypad_fun_pane

0xbe5c,	// (0x0004282d) dia3_keypad_num_pane_ParamLimits

0xbe5c,	// (0x0004282d) dia3_keypad_num_pane

0xbe6c,	// (0x0004283d) dia3_listscroll_pane_ParamLimits

0xbe6c,	// (0x0004283d) dia3_listscroll_pane

0xbe7a,	// (0x0004284b) dia3_numentry_pane_ParamLimits

0xbe7a,	// (0x0004284b) dia3_numentry_pane

0xe94e,	// (0x0004531f) dia3_list_pane

0xbe88,	// (0x00042859) scroll_pane_cp12

0xee90,	// (0x00045861) bg_dia3_numentry_pane

0xbe93,	// (0x00042864) dia3_numentry_pane_t1

0xbea2,	// (0x00042873) cell_dia3_key_num_pane

0xbeaa,	// (0x0004287b) cell_dia3_key0_fun_pane_ParamLimits

0xbeaa,	// (0x0004287b) cell_dia3_key0_fun_pane

0xbeb7,	// (0x00042888) cell_dia3_key1_fun_pane_ParamLimits

0xbeb7,	// (0x00042888) cell_dia3_key1_fun_pane

0xbec4,	// (0x00042895) dia3_listrow_pane

0xde0f,	// (0x000447e0) bg_dia3_numentry_pane_g1

0xee90,	// (0x00045861) bg_button_pane_cp21

0xbed1,	// (0x000428a2) cell_dia3_key_num_pane_t1

0xbedf,	// (0x000428b0) cell_dia3_key_num_pane_t2

0xbeee,	// (0x000428bf) cell_dia3_key_num_pane_t3

0xbefd,	// (0x000428ce) cell_dia3_key_num_pane_t4

0x0003,

0xfd6c,	// (0x0004673d) cell_dia3_key_num_pane_t

0xee90,	// (0x00045861) bg_button_pane_cp19

0xbf0c,	// (0x000428dd) cell_dia3_key0_fun_pane_g1

0xee90,	// (0x00045861) bg_button_pane_cp20

0xbf14,	// (0x000428e5) cell_dia3_key1_fun_pane_g1

0xe958,	// (0x00045329) area_left_week_number_pane

0xe958,	// (0x00045329) area_top_day_name_pane

0xe958,	// (0x00045329) frame_month_view_pane

0xe958,	// (0x00045329) grid_month_view_pane

0xe958,	// (0x00045329) cell_top_day_name_pane_ParamLimits

0xe958,	// (0x00045329) cell_top_day_name_pane

0xe958,	// (0x00045329) cell_area_left_week_number_pane_ParamLimits

0xe958,	// (0x00045329) cell_area_left_week_number_pane

0xe958,	// (0x00045329) cell_month_view_pane_ParamLimits

0xe958,	// (0x00045329) cell_month_view_pane

0xe964,	// (0x00045335) frm_month_g1

0xe964,	// (0x00045335) frm_month_g2

0xe964,	// (0x00045335) frm_month_g3

0xe964,	// (0x00045335) frm_month_g4

0xe964,	// (0x00045335) frm_month_g5

0xe964,	// (0x00045335) frm_month_g6

0xe964,	// (0x00045335) frm_month_g7

0xe964,	// (0x00045335) frm_month_g8

0xe964,	// (0x00045335) frm_month_g9

0xe964,	// (0x00045335) frm_month_g10

0xe964,	// (0x00045335) frm_month_g11

0xe964,	// (0x00045335) frm_month_g12

0xe964,	// (0x00045335) frm_month_g13

0xe964,	// (0x00045335) frm_month_g14

0xe964,	// (0x00045335) frm_month_g15

0xe964,	// (0x00045335) frm_month_g16

0x000f,

0xfd75,	// (0x00046746) frm_month_g

0xe970,	// (0x00045341) cell_top_day_name_pane_t1

0xe964,	// (0x00045335) cell_area_left_week_number_pane_g1

0xe970,	// (0x00045341) cell_area_left_week_number_pane_t1

0xe964,	// (0x00045335) cell_month_view_pane_g1

0xe970,	// (0x00045341) cell_month_view_pane_t1

0xee90,	// (0x00045861) main_fps_pane

0xe1bd,	// (0x00044b8e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe1bd,	// (0x00044b8e) cmail_ddmenu_btn02_pane_cp1

0xe1d9,	// (0x00044baa) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe1d9,	// (0x00044baa) cmail_ddmenu_btn02_pane_cp2

0xb8fb,	// (0x000422cc) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb8fb,	// (0x000422cc) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc93,	// (0x00046664) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc93,	// (0x00046664) cmail_ddmenu_btn02_pane_g

0xb919,	// (0x000422ea) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb919,	// (0x000422ea) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc98,	// (0x00046669) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc98,	// (0x00046669) cmail_ddmenu_btn02_pane_t

0xbf1c,	// (0x000428ed) fps_text_pane_ParamLimits

0xbf1c,	// (0x000428ed) fps_text_pane

0xbf29,	// (0x000428fa) main_fps_pane_g1_ParamLimits

0xbf29,	// (0x000428fa) main_fps_pane_g1

0xbf35,	// (0x00042906) wait_bar_pane_cp010_ParamLimits

0xbf35,	// (0x00042906) wait_bar_pane_cp010

0xbf41,	// (0x00042912) fps_text_pane_t1_ParamLimits

0xbf41,	// (0x00042912) fps_text_pane_t1

0x93fc,	// (0x0003fdcd) cam4_image_uncrop_pane_g1

0x9405,	// (0x0003fdd6) cam4_image_uncrop_pane_g2

0x940e,	// (0x0003fddf) cam4_image_uncrop_pane_g3

0x9417,	// (0x0003fde8) cam4_image_uncrop_pane_g4

0x0003,

0xf7e5,	// (0x000461b6) cam4_image_uncrop_pane_g

0xbec4,	// (0x00042895) dia3_listrow_pane_ParamLimits

0xee90,	// (0x00045861) main_phob2_pane

0xb5f9,	// (0x00041fca) cell_tport_appsw_pane_cp02_ParamLimits

0xb5f9,	// (0x00041fca) cell_tport_appsw_pane_cp02

0xb608,	// (0x00041fd9) cell_tport_appsw_pane_cp03_ParamLimits

0xb608,	// (0x00041fd9) cell_tport_appsw_pane_cp03

0xee90,	// (0x00045861) phob2_contact_card_pane

0xee90,	// (0x00045861) phob2_listscroll_pane

0xe982,	// (0x00045353) phob2_list_pane

0xe98a,	// (0x0004535b) scroll_pane_cp034

0xbf5a,	// (0x0004292b) phob2_cc_data_pane_ParamLimits

0xbf5a,	// (0x0004292b) phob2_cc_data_pane

0xbf71,	// (0x00042942) phob2_cc_listscroll_pane_ParamLimits

0xbf71,	// (0x00042942) phob2_cc_listscroll_pane

0xb837,	// (0x00042208) list_double_large_graphic_phob2_pane_ParamLimits

0xb837,	// (0x00042208) list_double_large_graphic_phob2_pane

0xbf8d,	// (0x0004295e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbf8d,	// (0x0004295e) list_double_large_graphic_phob2_pane_g1

0x4d03,	// (0x0003b6d4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4d03,	// (0x0003b6d4) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd96,	// (0x00046767) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd96,	// (0x00046767) list_double_large_graphic_phob2_pane_g

0x4d29,	// (0x0003b6fa) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x4d29,	// (0x0003b6fa) list_double_large_graphic_phob2_pane_t1

0x4d3e,	// (0x0003b70f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4d3e,	// (0x0003b70f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd9f,	// (0x00046770) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd9f,	// (0x00046770) list_double_large_graphic_phob2_pane_t

0x0b6d,	// (0x0003753e) list_highlight_pane_cp024

0xbf9a,	// (0x0004296b) phob2_cc_button_pane

0xbfa4,	// (0x00042975) phob2_cc_data_pane_g1_ParamLimits

0xbfa4,	// (0x00042975) phob2_cc_data_pane_g1

0xbfb8,	// (0x00042989) phob2_cc_data_pane_g2_ParamLimits

0xbfb8,	// (0x00042989) phob2_cc_data_pane_g2

0x0001,

0xfda4,	// (0x00046775) phob2_cc_data_pane_g_ParamLimits

0xfda4,	// (0x00046775) phob2_cc_data_pane_g

0xbfcc,	// (0x0004299d) phob2_cc_data_pane_t1_ParamLimits

0xbfcc,	// (0x0004299d) phob2_cc_data_pane_t1

0xbfee,	// (0x000429bf) phob2_cc_data_pane_t2_ParamLimits

0xbfee,	// (0x000429bf) phob2_cc_data_pane_t2

0xc010,	// (0x000429e1) phob2_cc_data_pane_t3_ParamLimits

0xc010,	// (0x000429e1) phob2_cc_data_pane_t3

0x0002,

0xfda9,	// (0x0004677a) phob2_cc_data_pane_t_ParamLimits

0xfda9,	// (0x0004677a) phob2_cc_data_pane_t

0xe9e3,	// (0x000453b4) phob2_cc_list_pane_ParamLimits

0xe9e3,	// (0x000453b4) phob2_cc_list_pane

0xdd2a,	// (0x000446fb) scroll_pane_cp035_ParamLimits

0xdd2a,	// (0x000446fb) scroll_pane_cp035

0x0b14,	// (0x000374e5) bg_button_pane_cp033

0xc031,	// (0x00042a02) phob2_cc_button_pane_g1

0xc03d,	// (0x00042a0e) phob2_cc_button_pane_t1

0xc052,	// (0x00042a23) phob2_cc_button_pane_t2

0x0001,

0xfdb0,	// (0x00046781) phob2_cc_button_pane_t

0xc064,	// (0x00042a35) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc064,	// (0x00042a35) list_double_large_graphic_phob2_cc_pane

0xc0b1,	// (0x00042a82) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc0b1,	// (0x00042a82) list_double_large_graphic_phob2_cc_pane_g1

0x4d53,	// (0x0003b724) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4d53,	// (0x0003b724) list_double_large_graphic_phob2_cc_pane_g2

0x4d62,	// (0x0003b733) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4d62,	// (0x0003b733) list_double_large_graphic_phob2_cc_pane_g3

0x4d71,	// (0x0003b742) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4d71,	// (0x0003b742) list_double_large_graphic_phob2_cc_pane_g4

0x4d82,	// (0x0003b753) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4d82,	// (0x0003b753) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdb5,	// (0x00046786) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdb5,	// (0x00046786) list_double_large_graphic_phob2_cc_pane_g

0x4d91,	// (0x0003b762) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4d91,	// (0x0003b762) list_double_large_graphic_phob2_cc_pane_t1

0x4dba,	// (0x0003b78b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x4dba,	// (0x0003b78b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdc0,	// (0x00046791) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdc0,	// (0x00046791) list_double_large_graphic_phob2_cc_pane_t

0xe9ef,	// (0x000453c0) list_highlight_pane_cp025_ParamLimits

0xe9ef,	// (0x000453c0) list_highlight_pane_cp025

0x0b14,	// (0x000374e5) bg_button_pane_cp033_ParamLimits

0xc031,	// (0x00042a02) phob2_cc_button_pane_g1_ParamLimits

0xc03d,	// (0x00042a0e) phob2_cc_button_pane_t1_ParamLimits

0xc052,	// (0x00042a23) phob2_cc_button_pane_t2_ParamLimits

0xfdb0,	// (0x00046781) phob2_cc_button_pane_t_ParamLimits

0x503e,	// (0x0003ba0f) popup_wgtman_window

0xd375,	// (0x00043d46) scroll_pane_cp038

0xbc8a,	// (0x0004265b) wgtman_btn_pane_cp_01_ParamLimits

0xbc8a,	// (0x0004265b) wgtman_btn_pane_cp_01

0xe9fd,	// (0x000453ce) wgtman_content_pane

0xea06,	// (0x000453d7) wgtman_heading_pane

0xee90,	// (0x00045861) bg_heading_pane_cp02

0xea0f,	// (0x000453e0) wgtman_heading_pane_g1

0xea17,	// (0x000453e8) wgtman_heading_pane_t1

0xea25,	// (0x000453f6) scroll_pane_cp036

0xea2d,	// (0x000453fe) wgtman_list_pane

0xe992,	// (0x00045363) wgtman_list_pane_t1_ParamLimits

0xe992,	// (0x00045363) wgtman_list_pane_t1

0x9359,	// (0x0003fd2a) cam4_grid_pane

0xa0cf,	// (0x00040aa0) bg_button_pane_cp015_ParamLimits

0xa0e4,	// (0x00040ab5) bg_button_pane_cp016_ParamLimits

0xa0f0,	// (0x00040ac1) bg_button_pane_cp017_ParamLimits

0xa149,	// (0x00040b1a) popup_vitu2_query_window_g3_ParamLimits

0xa149,	// (0x00040b1a) popup_vitu2_query_window_g3

0xa1ea,	// (0x00040bbb) popup_vitu2_query_window_t6_ParamLimits

0xa1ea,	// (0x00040bbb) popup_vitu2_query_window_t6

0xa215,	// (0x00040be6) popup_vitu2_query_window_t7_ParamLimits

0xa215,	// (0x00040be6) popup_vitu2_query_window_t7

0xe9ac,	// (0x0004537d) cam4_grid_pane_g1

0xe9b5,	// (0x00045386) cam4_grid_pane_g2

0xea35,	// (0x00045406) cam4_grid_pane_g3

0xea3e,	// (0x0004540f) cam4_grid_pane_g4

0x0003,

0xfdc5,	// (0x00046796) cam4_grid_pane_g

0x5be6,	// (0x0003c5b7) aid_placing_vt_slider_lsc_ParamLimits

0x5f06,	// (0x0003c8d7) vidtel_button_pane_ParamLimits

0x5f06,	// (0x0003c8d7) vidtel_button_pane

0xee90,	// (0x00045861) bg_button_pane_cp034

0xea49,	// (0x0004541a) vidtel_button_pane_g1

0xea51,	// (0x00045422) vidtel_button_pane_t1

0xd4a7,	// (0x00043e78) aid_size_vtel_slider_touch

0xdd2a,	// (0x000446fb) scroll_pane_cp039

0xaf20,	// (0x000418f1) ncim_query_button_pane_cp01_ParamLimits

0xaf3f,	// (0x00041910) ncimui_query_pane_g1_ParamLimits

0x0b14,	// (0x000374e5) input_focus_pane_cp012_ParamLimits

0xde4d,	// (0x0004481e) ncim_query_entry_pane_t1_ParamLimits

0xdd2a,	// (0x000446fb) scroll_pane_cp039_ParamLimits

0x7093,	// (0x0003da64) navi_pane_bcale_mc_g1

0x709b,	// (0x0003da6c) navi_pane_bcale_mc_t1

0xe20f,	// (0x00044be0) main_sp_fs_email_pane_g1

0xe21b,	// (0x00044bec) main_sp_fs_email_pane_g2

0x0001,

0xfbd6,	// (0x000465a7) main_sp_fs_email_pane_g

0xe442,	// (0x00044e13) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe442,	// (0x00044e13) list_single_cale_mrui_row_pane_g3

0x4c07,	// (0x0003b5d8) list_single_recal_day_pane_g5_event_pane

0x4c1d,	// (0x0003b5ee) list_single_recal_day_pane_g7

0xea67,	// (0x00045438) list_recal_day_event_pane_cp01

0xea70,	// (0x00045441) list_recal_vselct_arw_lo_pane_cp01

0xea78,	// (0x00045449) list_recal_vselct_arw_up_pane_cp01

0xea80,	// (0x00045451) list_recal_vselct_pane_cp01

0xd4b7,	// (0x00043e88) list_recal_day_event_pane_cp01_g1

0x4de3,	// (0x0003b7b4) list_recal_day_event_pane_cp01_t1

0x4c25,	// (0x0003b5f6) list_single_recal_day_pane_t1_ParamLimits

0x4c37,	// (0x0003b608) list_single_recal_day_pane_t2_ParamLimits

0xfca8,	// (0x00046679) list_single_recal_day_pane_t_ParamLimits

0x0af2,	// (0x000374c3) bg_notes_pane_ParamLimits

0x0bf5,	// (0x000375c6) list_notes_pane_ParamLimits

0x5145,	// (0x0003bb16) scroll_pane_cp06_ParamLimits

0x0c17,	// (0x000375e8) main_notes_pane_ParamLimits

0x0b14,	// (0x000374e5) main_welc_pane

0xc0fc,	// (0x00042acd) main_welc_body_pane_ParamLimits

0xc0fc,	// (0x00042acd) main_welc_body_pane

0xc117,	// (0x00042ae8) main_welc_opti_pane_ParamLimits

0xc117,	// (0x00042ae8) main_welc_opti_pane

0xc16e,	// (0x00042b3f) main_welc_pane_t1_ParamLimits

0xc16e,	// (0x00042b3f) main_welc_pane_t1

0xe9c0,	// (0x00045391) main_welc_body_row_pane_ParamLimits

0xe9c0,	// (0x00045391) main_welc_body_row_pane

0x0b6d,	// (0x0003753e) main_welc_opti_row_pane_ParamLimits

0x0b6d,	// (0x0003753e) main_welc_opti_row_pane

0xea92,	// (0x00045463) main_welc_opti_row_pane_g1

0xc326,	// (0x00042cf7) main_welc_opti_row_pane_t1

0xea9a,	// (0x0004546b) main_welc_body_row_pane_t1

0xe7d1,	// (0x000451a2) popup_notif_wgt_heading_pane

0xe7eb,	// (0x000451bc) aid_size_list_notif_wgt_del_ParamLimits

0xe7f8,	// (0x000451c9) list_notif_wgt_row_pane_g1_ParamLimits

0xe804,	// (0x000451d5) list_notif_wgt_row_pane_g2_ParamLimits

0xe813,	// (0x000451e4) list_notif_wgt_row_pane_g3_ParamLimits

0xfd0f,	// (0x000466e0) list_notif_wgt_row_pane_g_ParamLimits

0xe820,	// (0x000451f1) list_notif_wgt_row_pane_t1_ParamLimits

0xe836,	// (0x00045207) list_notif_wgt_row_pane_t2_ParamLimits

0xe848,	// (0x00045219) list_notif_wgt_row_pane_t3_ParamLimits

0xfd16,	// (0x000466e7) list_notif_wgt_row_pane_t_ParamLimits

0xbd18,	// (0x000426e9) listrow_wgtman_pane_g1_ParamLimits

0xbd25,	// (0x000426f6) listrow_wgtman_pane_g2_ParamLimits

0xfd46,	// (0x00046717) listrow_wgtman_pane_g_ParamLimits

0x4cb3,	// (0x0003b684) listrow_wgtman_pane_t1_ParamLimits

0x4ccb,	// (0x0003b69c) listrow_wgtman_pane_t2_ParamLimits

0xfd4b,	// (0x0004671c) listrow_wgtman_pane_t_ParamLimits

0x4cf1,	// (0x0003b6c2) wait_bar_pane_cp09_ParamLimits

0xee90,	// (0x00045861) bg_popup_heading_pane_cp02

0xeaa9,	// (0x0004547a) popup_notif_wgt_heading_pane_g1

0xeab1,	// (0x00045482) popup_notif_wgt_heading_pane_t1

0xee90,	// (0x00045861) main_vids_pane

0xee90,	// (0x00045861) vids_listscroll_pane

0xc335,	// (0x00042d06) scroll_pane_cp040

0xee90,	// (0x00045861) vids_list_pane

0xc340,	// (0x00042d11) vids_list_double_pane_ParamLimits

0xc340,	// (0x00042d11) vids_list_double_pane

0xc354,	// (0x00042d25) vids_list_double_pane_g1

0xc35d,	// (0x00042d2e) vids_list_double_pane_t1

0xc36d,	// (0x00042d3e) vids_list_double_pane_t2

0x0001,

0xfde4,	// (0x000467b5) vids_list_double_pane_t

0x0b14,	// (0x000374e5) main_ncimui_pane_ParamLimits

0xad61,	// (0x00041732) main_ncimui_pane_g1_ParamLimits

0xad6f,	// (0x00041740) main_ncimui_pane_g2_ParamLimits

0xad6f,	// (0x00041740) main_ncimui_pane_g2

0x0001,

0xfad7,	// (0x000464a8) main_ncimui_pane_g_ParamLimits

0xfad7,	// (0x000464a8) main_ncimui_pane_g

0xc132,	// (0x00042b03) main_welc_pane_g1_ParamLimits

0xc132,	// (0x00042b03) main_welc_pane_g1

0xc13e,	// (0x00042b0f) main_welc_pane_g2_ParamLimits

0xc13e,	// (0x00042b0f) main_welc_pane_g2

0x0003,

0xfdce,	// (0x0004679f) main_welc_pane_g_ParamLimits

0xfdce,	// (0x0004679f) main_welc_pane_g

0x0af2,	// (0x000374c3) listscroll_mce_pane_ParamLimits

0x715d,	// (0x0003db2e) wait_bar_pane_cp10

0x297b,	// (0x0003934c) main_cale_day_pane_ParamLimits

0x297b,	// (0x0003934c) main_cale_week_pane_ParamLimits

0x0af2,	// (0x000374c3) main_messa_pane_ParamLimits

0x8835,	// (0x0003f206) main_clock2_btn_pane_ParamLimits

0x8835,	// (0x0003f206) main_clock2_btn_pane

0x3139,	// (0x00039b0a) main_clock2_btn_pane_cp01_ParamLimits

0x3139,	// (0x00039b0a) main_clock2_btn_pane_cp01

0xe421,	// (0x00044df2) list_cale_mrui_pane_ParamLimits

0xe87e,	// (0x0004524f) main_cf0_pane_g2

0x0001,

0xfd1d,	// (0x000466ee) main_cf0_pane_g

0xe958,	// (0x00045329) area_left_week_number_pane_ParamLimits

0xe958,	// (0x00045329) area_top_day_name_pane_ParamLimits

0xe958,	// (0x00045329) frame_month_view_pane_ParamLimits

0xe958,	// (0x00045329) grid_month_view_pane_ParamLimits

0xe964,	// (0x00045335) frm_month_g1_ParamLimits

0xe964,	// (0x00045335) frm_month_g2_ParamLimits

0xe964,	// (0x00045335) frm_month_g3_ParamLimits

0xe964,	// (0x00045335) frm_month_g4_ParamLimits

0xe964,	// (0x00045335) frm_month_g5_ParamLimits

0xe964,	// (0x00045335) frm_month_g6_ParamLimits

0xe964,	// (0x00045335) frm_month_g7_ParamLimits

0xe964,	// (0x00045335) frm_month_g8_ParamLimits

0xe964,	// (0x00045335) frm_month_g9_ParamLimits

0xe964,	// (0x00045335) frm_month_g10_ParamLimits

0xe964,	// (0x00045335) frm_month_g11_ParamLimits

0xe964,	// (0x00045335) frm_month_g12_ParamLimits

0xe964,	// (0x00045335) frm_month_g13_ParamLimits

0xe964,	// (0x00045335) frm_month_g14_ParamLimits

0xe964,	// (0x00045335) frm_month_g15_ParamLimits

0xe964,	// (0x00045335) frm_month_g16_ParamLimits

0xfd75,	// (0x00046746) frm_month_g_ParamLimits

0xe970,	// (0x00045341) cell_top_day_name_pane_t1_ParamLimits

0xe964,	// (0x00045335) cell_area_left_week_number_pane_g1_ParamLimits

0xe970,	// (0x00045341) cell_area_left_week_number_pane_t1_ParamLimits

0xe964,	// (0x00045335) cell_month_view_pane_g1_ParamLimits

0xe970,	// (0x00045341) cell_month_view_pane_t1_ParamLimits

0x0aea,	// (0x000374bb) main_clock2_btn_pane_g1

0xeabf,	// (0x00045490) main_clock2_btn_pane_t1

0x0b14,	// (0x000374e5) listscroll_cmail_pane_ParamLimits

0xe20f,	// (0x00044be0) main_sp_fs_email_pane_g1_ParamLimits

0xe21b,	// (0x00044bec) main_sp_fs_email_pane_g2_ParamLimits

0xfbd6,	// (0x000465a7) main_sp_fs_email_pane_g_ParamLimits

0xe55b,	// (0x00044f2c) list_recal_day_pane_ParamLimits

0xe56c,	// (0x00044f3d) mian_recal_day_pane_t1

0x47bd,	// (0x0003b18e) list_single_dyc_row_text_pane_t4_ParamLimits

0x47bd,	// (0x0003b18e) list_single_dyc_row_text_pane_t4

0x47fa,	// (0x0003b1cb) list_single_dyc_row_text_pane_t5_ParamLimits

0x47fa,	// (0x0003b1cb) list_single_dyc_row_text_pane_t5

0x4870,	// (0x0003b241) list_single_dyc_row_text_pane_t6_ParamLimits

0x4870,	// (0x0003b241) list_single_dyc_row_text_pane_t6

0x6cbc,	// (0x0003d68d) aid_mgn_list_cale_time_pane

0x0b14,	// (0x000374e5) main_gallery2_pane_ParamLimits

0x314d,	// (0x00039b1e) main_clock2_pane_cp01_t1

0x315b,	// (0x00039b2c) main_clock2_pane_cp01_t3

0x0001,

0xf6c6,	// (0x00046097) main_clock2_pane_cp01_t

0x55ff,	// (0x0003bfd0) cale_week_scroll_pane_g16_ParamLimits

0x55ff,	// (0x0003bfd0) cale_week_scroll_pane_g16

0x0e0b,	// (0x000377dc) vorec_slider_pane

0xea51,	// (0x00045422) vidtel_button_pane_t1_ParamLimits

0xb97c,	// (0x0004234d) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb97c,	// (0x0004234d) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb97c,	// (0x0004234d) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb97c,	// (0x0004234d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfccb,	// (0x0004669c) main_fs_bigclock_clock_pane_g_ParamLimits

0xb98c,	// (0x0004235d) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb9a2,	// (0x00042373) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcd4,	// (0x000466a5) main_fs_bigclock_clock_pane_t_ParamLimits

0x8180,	// (0x0003eb51) main_mup3_lyrics_pane_ParamLimits

0x8180,	// (0x0003eb51) main_mup3_lyrics_pane

0xc3a2,	// (0x00042d73) main_mup3_lyrics_pane_t1_ParamLimits

0xc3a2,	// (0x00042d73) main_mup3_lyrics_pane_t1

0x8d2d,	// (0x0003f6fe) aid_main_mp4_pane_t1_area

0x8d37,	// (0x0003f708) aid_main_mp4_pane_t2_area

0x8e3e,	// (0x0003f80f) main_mp4_pane_g7_ParamLimits

0x8e3e,	// (0x0003f80f) main_mp4_pane_g7

0x8e4a,	// (0x0003f81b) main_mp4_pane_g8_ParamLimits

0x8e4a,	// (0x0003f81b) main_mp4_pane_g8

0x9219,	// (0x0003fbea) aid_call6_pane_g1_size

0xc090,	// (0x00042a61) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc090,	// (0x00042a61) list_double_large_graphic_phob2_other_pane

0xc3c9,	// (0x00042d9a) list_double_large_graphic_phob2_other_pane_g1

0xee90,	// (0x00045861) list_highlight_pane_cp026

0x0b14,	// (0x000374e5) main_welc_pane_ParamLimits

0xb4ec,	// (0x00041ebd) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb4ec,	// (0x00041ebd) main_sp_fs_ctrlbar_pane_g3

0xb506,	// (0x00041ed7) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb506,	// (0x00041ed7) main_sp_fs_ctrlbar_pane_g4

0xb538,	// (0x00041f09) toolbar2_fixed_button_pane_cp01

0xb543,	// (0x00041f14) toolbar2_fixed_button_pane_cp02

0xb550,	// (0x00041f21) toolbar2_fixed_button_pane_cp03

0xc0e0,	// (0x00042ab1) list_welc_entry_pane_ParamLimits

0xc0e0,	// (0x00042ab1) list_welc_entry_pane

0xc14c,	// (0x00042b1d) main_welc_pane_g3_ParamLimits

0xc14c,	// (0x00042b1d) main_welc_pane_g3

0xc18c,	// (0x00042b5d) main_welc_pane_t2_ParamLimits

0xc18c,	// (0x00042b5d) main_welc_pane_t2

0xc1a0,	// (0x00042b71) main_welc_pane_t3_ParamLimits

0xc1a0,	// (0x00042b71) main_welc_pane_t3

0x0005,

0xfdd7,	// (0x000467a8) main_welc_pane_t_ParamLimits

0xfdd7,	// (0x000467a8) main_welc_pane_t

0xc2aa,	// (0x00042c7b) welc_button_pane_ParamLimits

0xc2aa,	// (0x00042c7b) welc_button_pane

0xc318,	// (0x00042ce9) welc_service_logo_pane_ParamLimits

0xc318,	// (0x00042ce9) welc_service_logo_pane

0xc3d1,	// (0x00042da2) list_single_welc_entry_pane_ParamLimits

0xc3d1,	// (0x00042da2) list_single_welc_entry_pane

0xc3e2,	// (0x00042db3) list_single_welc_entry_pane_g1

0xc3ea,	// (0x00042dbb) list_single_welc_entry_pane_t1

0xc3f8,	// (0x00042dc9) list_single_welc_entry_pane_t2

0x0001,

0xfde9,	// (0x000467ba) list_single_welc_entry_pane_t

0xee90,	// (0x00045861) bg_button_pane_cp035

0xeacd,	// (0x0004549e) welc_button_pane_t1

0xc406,	// (0x00042dd7) welc_service_logo_pane_g1

0xc40f,	// (0x00042de0) welc_service_logo_pane_g2

0x0001,

0xfdee,	// (0x000467bf) welc_service_logo_pane_g

0xee90,	// (0x00045861) main_int_radio_pane

0xdcdf,	// (0x000446b0) list_single_fs_dyc_pane_g1

0x4d0f,	// (0x0003b6e0) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x4d0f,	// (0x0003b6e0) list_double_large_graphic_phob2_pane_g3

0x4d1b,	// (0x0003b6ec) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x4d1b,	// (0x0003b6ec) list_double_large_graphic_phob2_pane_g4

0xc418,	// (0x00042de9) main_int_radio1_pane_ParamLimits

0xc418,	// (0x00042de9) main_int_radio1_pane

0xeadb,	// (0x000454ac) find_pane_cp02

0xc42e,	// (0x00042dff) input_focus_pane_cp12_ParamLimits

0xc42e,	// (0x00042dff) input_focus_pane_cp12

0xc43a,	// (0x00042e0b) input_focus_pane_cp13_ParamLimits

0xc43a,	// (0x00042e0b) input_focus_pane_cp13

0xc452,	// (0x00042e23) input_focus_pane_cp14_ParamLimits

0xc452,	// (0x00042e23) input_focus_pane_cp14

0xeae4,	// (0x000454b5) int_radio1_listscroll_pane

0xc46a,	// (0x00042e3b) main_int_radio1_pane_g1_ParamLimits

0xc46a,	// (0x00042e3b) main_int_radio1_pane_g1

0xc476,	// (0x00042e47) main_int_radio1_pane_t1_ParamLimits

0xc476,	// (0x00042e47) main_int_radio1_pane_t1

0xc488,	// (0x00042e59) main_int_radio1_pane_t2_ParamLimits

0xc488,	// (0x00042e59) main_int_radio1_pane_t2

0xc49c,	// (0x00042e6d) main_int_radio1_pane_t3_ParamLimits

0xc49c,	// (0x00042e6d) main_int_radio1_pane_t3

0xc4b0,	// (0x00042e81) main_int_radio1_pane_t4_ParamLimits

0xc4b0,	// (0x00042e81) main_int_radio1_pane_t4

0xeaee,	// (0x000454bf) main_int_radio1_pane_t5_ParamLimits

0xeaee,	// (0x000454bf) main_int_radio1_pane_t5

0xc4c7,	// (0x00042e98) main_int_radio1_pane_t6_ParamLimits

0xc4c7,	// (0x00042e98) main_int_radio1_pane_t6

0xc4d9,	// (0x00042eaa) main_int_radio1_pane_t7_ParamLimits

0xc4d9,	// (0x00042eaa) main_int_radio1_pane_t7

0xc4eb,	// (0x00042ebc) main_int_radio1_pane_t8_ParamLimits

0xc4eb,	// (0x00042ebc) main_int_radio1_pane_t8

0xc4fd,	// (0x00042ece) main_int_radio1_pane_t9_ParamLimits

0xc4fd,	// (0x00042ece) main_int_radio1_pane_t9

0xc50f,	// (0x00042ee0) main_int_radio1_pane_t10_ParamLimits

0xc50f,	// (0x00042ee0) main_int_radio1_pane_t10

0xc540,	// (0x00042f11) main_int_radio1_pane_t11_ParamLimits

0xc540,	// (0x00042f11) main_int_radio1_pane_t11

0xc571,	// (0x00042f42) main_int_radio1_pane_t12_ParamLimits

0xc571,	// (0x00042f42) main_int_radio1_pane_t12

0x000b,

0xfdf3,	// (0x000467c4) main_int_radio1_pane_t_ParamLimits

0xfdf3,	// (0x000467c4) main_int_radio1_pane_t

0xe982,	// (0x00045353) int_radio_list_pane

0xe98a,	// (0x0004535b) scroll_pane_cp037

0xeb00,	// (0x000454d1) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb00,	// (0x000454d1) list_double_large_graphic_int_radio_pane

0xeb14,	// (0x000454e5) list_double_large_graphic_int_radio_pane_g1

0x4df1,	// (0x0003b7c2) list_double_large_graphic_int_radio_pane_t1

0x4dff,	// (0x0003b7d0) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe0c,	// (0x000467dd) list_double_large_graphic_int_radio_pane_t

0xee90,	// (0x00045861) list_highlight_pane_cp027

0xea8a,	// (0x0004545b) main_button_pane_4

0xc158,	// (0x00042b29) main_welc_pane_g4_ParamLimits

0xc158,	// (0x00042b29) main_welc_pane_g4

0xc1b2,	// (0x00042b83) main_welc_pane_t4_ParamLimits

0xc1b2,	// (0x00042b83) main_welc_pane_t4

0xc1c6,	// (0x00042b97) main_welc_pane_t5_ParamLimits

0xc1c6,	// (0x00042b97) main_welc_pane_t5

0xc1fe,	// (0x00042bcf) main_welc_pane_t6_ParamLimits

0xc1fe,	// (0x00042bcf) main_welc_pane_t6

0xc2b8,	// (0x00042c89) welc_button_pane_2_ParamLimits

0xc2b8,	// (0x00042c89) welc_button_pane_2

0xc2d8,	// (0x00042ca9) welc_button_pane_3_ParamLimits

0xc2d8,	// (0x00042ca9) welc_button_pane_3

0xea8a,	// (0x0004545b) welc_button_pane_4

0xc2fa,	// (0x00042ccb) welc_button_pane_5_ParamLimits

0xc2fa,	// (0x00042ccb) welc_button_pane_5

0x4e61,	// (0x0003b832) main_popup_welc_pane

0xeb35,	// (0x00045506) main_welc_sk_g3

0xeb3f,	// (0x00045510) main_welc_sk_g4

0xeb49,	// (0x0004551a) main_welc_sk_t3

0xeb59,	// (0x0004552a) main_welc_sk_t4

0xeb69,	// (0x0004553a) popup_welc_pane_t4

0xeb77,	// (0x00045548) popup_welc_pane_t5

0xeb85,	// (0x00045556) popup_welc_pane_t6

0xee90,	// (0x00045861) main_acti_pane

0xee90,	// (0x00045861) main_sso_pane

0xc588,	// (0x00042f59) sso_body_pane_ParamLimits

0xc588,	// (0x00042f59) sso_body_pane

0xc5a3,	// (0x00042f74) sso_logo_pane_ParamLimits

0xc5a3,	// (0x00042f74) sso_logo_pane

0xc5d2,	// (0x00042fa3) sso_sk_pane_ParamLimits

0xc5d2,	// (0x00042fa3) sso_sk_pane

0xc5df,	// (0x00042fb0) main_sso_logo_pane_g1

0xc5e8,	// (0x00042fb9) sso_sk_pane_t1_ParamLimits

0xc5e8,	// (0x00042fb9) sso_sk_pane_t1

0xc5fc,	// (0x00042fcd) sso_sk_pane_t2_ParamLimits

0xc5fc,	// (0x00042fcd) sso_sk_pane_t2

0x0001,

0xfe11,	// (0x000467e2) sso_sk_pane_t_ParamLimits

0xfe11,	// (0x000467e2) sso_sk_pane_t

0xebc7,	// (0x00045598) aid_sso_gap

0xebd0,	// (0x000455a1) aid_sso_txt1

0xebda,	// (0x000455ab) aid_sso_txt2

0xebe4,	// (0x000455b5) aid_sso_txt3

0x0002,

0xfe16,	// (0x000467e7) aid_sso_txt

0xebee,	// (0x000455bf) aid_sso_widget

0xc659,	// (0x0004302a) sso_btn_pane_ParamLimits

0xc659,	// (0x0004302a) sso_btn_pane

0xc6df,	// (0x000430b0) sso_option_pane_ParamLimits

0xc6df,	// (0x000430b0) sso_option_pane

0xc787,	// (0x00043158) sso_query_pane_ParamLimits

0xc787,	// (0x00043158) sso_query_pane

0xc7d7,	// (0x000431a8) sso_query_pane_cp01_ParamLimits

0xc7d7,	// (0x000431a8) sso_query_pane_cp01

0xc82d,	// (0x000431fe) sso_t_hdr_pane_ParamLimits

0xc82d,	// (0x000431fe) sso_t_hdr_pane

0xc851,	// (0x00043222) sso_t_nml_pane_ParamLimits

0xc851,	// (0x00043222) sso_t_nml_pane

0xebf8,	// (0x000455c9) sso_t_sub_pane

0xc5b0,	// (0x00042f81) sso_popup_window_ParamLimits

0xc5b0,	// (0x00042f81) sso_popup_window

0xc60e,	// (0x00042fdf) sso_apps_pane_ParamLimits

0xc60e,	// (0x00042fdf) sso_apps_pane

0xc631,	// (0x00043002) sso_body_pane_g1

0xc639,	// (0x0004300a) sso_body_pane_t1

0xc649,	// (0x0004301a) sso_body_pane_t2

0x0001,

0xfe1d,	// (0x000467ee) sso_body_pane_t

0xc69f,	// (0x00043070) sso_btn_pane_cp01_ParamLimits

0xc69f,	// (0x00043070) sso_btn_pane_cp01

0xc75b,	// (0x0004312c) sso_prog_pane_ParamLimits

0xc75b,	// (0x0004312c) sso_prog_pane

0xc8b1,	// (0x00043282) sso_t_hdr_pane_t1_ParamLimits

0xc8b1,	// (0x00043282) sso_t_hdr_pane_t1

0xec0d,	// (0x000455de) input_focus_pane_cp10_ParamLimits

0xec0d,	// (0x000455de) input_focus_pane_cp10

0xec21,	// (0x000455f2) sso_query_pane_t1_ParamLimits

0xec21,	// (0x000455f2) sso_query_pane_t1

0xec34,	// (0x00045605) sso_query_pane_t2_ParamLimits

0xec34,	// (0x00045605) sso_query_pane_t2

0xec4e,	// (0x0004561f) sso_query_pane_t3_ParamLimits

0xec4e,	// (0x0004561f) sso_query_pane_t3

0xec78,	// (0x00045649) sso_query_pane_t4_ParamLimits

0xec78,	// (0x00045649) sso_query_pane_t4

0x0003,

0xfe22,	// (0x000467f3) sso_query_pane_t_ParamLimits

0xfe22,	// (0x000467f3) sso_query_pane_t

0xe9da,	// (0x000453ab) bg_button_pane_cp22

0xec9c,	// (0x0004566d) sso_btn_pane_t1

0xc8ca,	// (0x0004329b) sso_t_nml_pane_t1_ParamLimits

0xc8ca,	// (0x0004329b) sso_t_nml_pane_t1

0xecab,	// (0x0004567c) sso_option_row_pane_ParamLimits

0xecab,	// (0x0004567c) sso_option_row_pane

0xecb8,	// (0x00045689) sso_t_sub_pane_t1_ParamLimits

0xecb8,	// (0x00045689) sso_t_sub_pane_t1

0x0b14,	// (0x000374e5) bg_popup_window_pane_cp11_ParamLimits

0x0b14,	// (0x000374e5) bg_popup_window_pane_cp11

0xecd5,	// (0x000456a6) popup_sk_window_cp01_ParamLimits

0xecd5,	// (0x000456a6) popup_sk_window_cp01

0xece2,	// (0x000456b3) sso_popup_body_pane_ParamLimits

0xece2,	// (0x000456b3) sso_popup_body_pane

0xecef,	// (0x000456c0) scroll_pane_cp21_ParamLimits

0xecef,	// (0x000456c0) scroll_pane_cp21

0xecfc,	// (0x000456cd) sso_popup_body_t_pane_ParamLimits

0xecfc,	// (0x000456cd) sso_popup_body_t_pane

0xed09,	// (0x000456da) sso_popup_body_t_hdr_pane_ParamLimits

0xed09,	// (0x000456da) sso_popup_body_t_hdr_pane

0xc8e7,	// (0x000432b8) sso_popup_body_t_nml_pane_ParamLimits

0xc8e7,	// (0x000432b8) sso_popup_body_t_nml_pane

0xc905,	// (0x000432d6) sso_popup_body_t_sub_pane_ParamLimits

0xc905,	// (0x000432d6) sso_popup_body_t_sub_pane

0xed1b,	// (0x000456ec) sso_popup_body_t_hdr_pane_t1

0xc928,	// (0x000432f9) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc928,	// (0x000432f9) sso_popup_body_t_nml_pane_t1

0xed2b,	// (0x000456fc) sso_popup_body_t_sub_pane_t1_ParamLimits

0xed2b,	// (0x000456fc) sso_popup_body_t_sub_pane_t1

0x0bb9,	// (0x0003758a) sso_prog_pane_g1

0xc972,	// (0x00043343) sso_apps_pane_comp1_ParamLimits

0xc972,	// (0x00043343) sso_apps_pane_comp1

0xed50,	// (0x00045721) sso_apps_pane_comp1_g1

0xed58,	// (0x00045729) sso_apps_pane_comp1_t1

0xed74,	// (0x00045745) sso_option_row_pane_g1

0xed8c,	// (0x0004575d) sso_option_row_pane_t1

0xe2a5,	// (0x00044c76) list_cmail_pane_ParamLimits

0xee90,	// (0x00045861) main_call7_pane

0xc0c2,	// (0x00042a93) bg_welc_area_ParamLimits

0xc0c2,	// (0x00042a93) bg_welc_area

0xc238,	// (0x00042c09) sso_t_hdr_pane_a_t1_ParamLimits

0xc238,	// (0x00042c09) sso_t_hdr_pane_a_t1

0xc24c,	// (0x00042c1d) sso_t_nml_pane_a_t1_ParamLimits

0xc24c,	// (0x00042c1d) sso_t_nml_pane_a_t1

0xc276,	// (0x00042c47) sso_t_sub_pane_a_t1_ParamLimits

0xc276,	// (0x00042c47) sso_t_sub_pane_a_t1

0xc30a,	// (0x00042cdb) welc_button_pane_cp01_ParamLimits

0xc30a,	// (0x00042cdb) welc_button_pane_cp01

0xeb1d,	// (0x000454ee) sso_btn_pane_t1_copy1

0xeb2c,	// (0x000454fd) welc_button_pane_2_comp1

0xeb95,	// (0x00045566) sso_t_hdr_pane_p_t1

0xeba5,	// (0x00045576) sso_t_nml_pane_p_t1

0xebb5,	// (0x00045586) sso_t_sub_pane_p_t1

0xee90,	// (0x00045861) main_att_pane

0xee90,	// (0x00045861) main_vod_pane

0xebf8,	// (0x000455c9) sso_t_sub_pane_ParamLimits

0xed66,	// (0x00045737) input_focus_pane_cp10_t1

0xed8c,	// (0x0004575d) sso_option_row_pane_t1_ParamLimits

0xc987,	// (0x00043358) main_att_body_pane_ParamLimits

0xc987,	// (0x00043358) main_att_body_pane

0xc99b,	// (0x0004336c) att_btn_emg_pane_ParamLimits

0xc99b,	// (0x0004336c) att_btn_emg_pane

0xc9b3,	// (0x00043384) att_btn_pane_ParamLimits

0xc9b3,	// (0x00043384) att_btn_pane

0xca1d,	// (0x000433ee) att_btn_pane_cp01_ParamLimits

0xca1d,	// (0x000433ee) att_btn_pane_cp01

0xca4f,	// (0x00043420) att_li_srv_pane_ParamLimits

0xca4f,	// (0x00043420) att_li_srv_pane

0xca61,	// (0x00043432) att_opt_pane_ParamLimits

0xca61,	// (0x00043432) att_opt_pane

0xcaa5,	// (0x00043476) att_query_pane_ParamLimits

0xcaa5,	// (0x00043476) att_query_pane

0xcb15,	// (0x000434e6) att_query_pane_cp01_ParamLimits

0xcb15,	// (0x000434e6) att_query_pane_cp01

0xcb59,	// (0x0004352a) att_t_hdr_pane_ParamLimits

0xcb59,	// (0x0004352a) att_t_hdr_pane

0xcbc1,	// (0x00043592) att_t_nml_pane_ParamLimits

0xcbc1,	// (0x00043592) att_t_nml_pane

0xcc37,	// (0x00043608) att_t_nml_pane_cp01_ParamLimits

0xcc37,	// (0x00043608) att_t_nml_pane_cp01

0xcc5b,	// (0x0004362c) att_t_nmlb_pane_ParamLimits

0xcc5b,	// (0x0004362c) att_t_nmlb_pane

0xccc1,	// (0x00043692) att_term_pane_ParamLimits

0xccc1,	// (0x00043692) att_term_pane

0xcd07,	// (0x000436d8) main_att_body_pane_g1_ParamLimits

0xcd07,	// (0x000436d8) main_att_body_pane_g1

0xeda8,	// (0x00045779) att_t_hdr_pane_t1_ParamLimits

0xeda8,	// (0x00045779) att_t_hdr_pane_t1

0xedbb,	// (0x0004578c) att_t_nml_pane_t1_ParamLimits

0xedbb,	// (0x0004578c) att_t_nml_pane_t1

0xec9c,	// (0x0004566d) att_btn_pane_t1

0xe9da,	// (0x000453ab) bg_button_pane_cp23

0xcd31,	// (0x00043702) att_li_srv_row_pane_ParamLimits

0xcd31,	// (0x00043702) att_li_srv_row_pane

0xede0,	// (0x000457b1) att_t_nmlb_pane_t1_ParamLimits

0xede0,	// (0x000457b1) att_t_nmlb_pane_t1

0xedfc,	// (0x000457cd) att_query_pane_t1

0xee0b,	// (0x000457dc) att_query_pane_t2

0xee1a,	// (0x000457eb) att_query_pane_t3

0x0002,

0xfe30,	// (0x00046801) att_query_pane_t

0xee29,	// (0x000457fa) input_focus_pane_cp11

0xee32,	// (0x00045803) att_term_pane_t1_ParamLimits

0xee32,	// (0x00045803) att_term_pane_t1

0xee90,	// (0x00045861) att_opt_row_pane

0xee4f,	// (0x00045820) att_opt_row_pane_g1

0xee57,	// (0x00045828) att_opt_row_pane_t1_ParamLimits

0xee57,	// (0x00045828) att_opt_row_pane_t1

0xcd41,	// (0x00043712) att_li_srv_row_pane_g1

0xcd49,	// (0x0004371a) att_li_srv_row_pane_t1_ParamLimits

0xcd49,	// (0x0004371a) att_li_srv_row_pane_t1

0xcd49,	// (0x0004371a) att_li_srv_row_pane_t2_ParamLimits

0xcd49,	// (0x0004371a) att_li_srv_row_pane_t2

0x0001,

0xfe37,	// (0x00046808) att_li_srv_row_pane_t_ParamLimits

0xfe37,	// (0x00046808) att_li_srv_row_pane_t

0xee70,	// (0x00045841) att_btn_close_pane_g1

0xee90,	// (0x00045861) bg_button_pane_cp24

0x7b65,	// (0x0003e536) main_vod_body_pane_ParamLimits

0x7b65,	// (0x0003e536) main_vod_body_pane

0xcd5e,	// (0x0004372f) main_vod_body_pane_g1_ParamLimits

0xcd5e,	// (0x0004372f) main_vod_body_pane_g1

0xcd8e,	// (0x0004375f) scroll_pane_cp24_ParamLimits

0xcd8e,	// (0x0004375f) scroll_pane_cp24

0xcdd6,	// (0x000437a7) vod_btn_pane_ParamLimits

0xcdd6,	// (0x000437a7) vod_btn_pane

0xce14,	// (0x000437e5) vod_det_pane_ParamLimits

0xce14,	// (0x000437e5) vod_det_pane

0xce40,	// (0x00043811) vod_logo_g1_ParamLimits

0xce40,	// (0x00043811) vod_logo_g1

0xce7a,	// (0x0004384b) vod_opt_pane_ParamLimits

0xce7a,	// (0x0004384b) vod_opt_pane

0xceaa,	// (0x0004387b) vod_opt_pane_cp01_ParamLimits

0xceaa,	// (0x0004387b) vod_opt_pane_cp01

0xced2,	// (0x000438a3) vod_query_pane_ParamLimits

0xced2,	// (0x000438a3) vod_query_pane

0xcefa,	// (0x000438cb) vod_query_pane_cp01_ParamLimits

0xcefa,	// (0x000438cb) vod_query_pane_cp01

0xcf06,	// (0x000438d7) vod_t_nml_pane_ParamLimits

0xcf06,	// (0x000438d7) vod_t_nml_pane

0xcfb0,	// (0x00043981) vod_t_nml_pane_cp01_ParamLimits

0xcfb0,	// (0x00043981) vod_t_nml_pane_cp01

0xcfe8,	// (0x000439b9) vod_t_sub_pane_ParamLimits

0xcfe8,	// (0x000439b9) vod_t_sub_pane

0xd014,	// (0x000439e5) vod_t_sub_pane_cp01_ParamLimits

0xd014,	// (0x000439e5) vod_t_sub_pane_cp01

0xee29,	// (0x000457fa) vod_query_field_pane

0xee78,	// (0x00045849) vod_query_pane_t1

0xee87,	// (0x00045858) bg_button_pane_cp25

0xec9c,	// (0x0004566d) sso_btn_pane_t1_copy2

0xd03c,	// (0x00043a0d) vod_t_nml_pane_t1_ParamLimits

0xd03c,	// (0x00043a0d) vod_t_nml_pane_t1

0x03b3,	// (0x00036d84) vod_opt_row_pane_ParamLimits

0x03b3,	// (0x00036d84) vod_opt_row_pane

0x03c5,	// (0x00036d96) vod_t_sub_pane_t1_ParamLimits

0x03c5,	// (0x00036d96) vod_t_sub_pane_t1

0x03de,	// (0x00036daf) vod_det_cell_pane_ParamLimits

0x03de,	// (0x00036daf) vod_det_cell_pane

0xee90,	// (0x00045861) input_focus_pane_cp15

0x03ef,	// (0x00036dc0) vod_query_field_pane_t1

0x03fd,	// (0x00036dce) vod_opt_row_pane_g1_ParamLimits

0x03fd,	// (0x00036dce) vod_opt_row_pane_g1

0x0409,	// (0x00036dda) vod_opt_row_pane_t1_ParamLimits

0x0409,	// (0x00036dda) vod_opt_row_pane_t1

0x042b,	// (0x00036dfc) vod_det_cell_field_pane

0x0434,	// (0x00036e05) vod_det_cell_pane_g1

0x043c,	// (0x00036e0d) vod_det_cell_pane_t1

0xee90,	// (0x00045861) input_focus_pane_cp16

0x044b,	// (0x00036e1c) vod_det_cell_field_pane_t1

0xbc03,	// (0x000425d4) call7_btn_grp_pane_ParamLimits

0xbc03,	// (0x000425d4) call7_btn_grp_pane

0x0b6d,	// (0x0003753e) call7_bubble_pane_ParamLimits

0x0b6d,	// (0x0003753e) call7_bubble_pane

0xbc40,	// (0x00042611) cell_call7_btn_pane_ParamLimits

0xbc40,	// (0x00042611) cell_call7_btn_pane

0xd077,	// (0x00043a48) call7_pane_g1_ParamLimits

0xd077,	// (0x00043a48) call7_pane_g1

0xd086,	// (0x00043a57) call7_windows_conf_pane_ParamLimits

0xd086,	// (0x00043a57) call7_windows_conf_pane

0xd0a8,	// (0x00043a79) popup_call7_1st_window_ParamLimits

0xd0a8,	// (0x00043a79) popup_call7_1st_window

0xd0b6,	// (0x00043a87) popup_call7_2nd_window_ParamLimits

0xd0b6,	// (0x00043a87) popup_call7_2nd_window

0xd0c4,	// (0x00043a95) popup_call7_3rd_window_ParamLimits

0xd0c4,	// (0x00043a95) popup_call7_3rd_window

0xee90,	// (0x00045861) bg_button_pane_cp26

0xe8ff,	// (0x000452d0) cell_call7_btn_pane_g1

0xf00e,	// (0x000459df) cell_call7_btn_pane_t1

0xee90,	// (0x00045861) bg_popup_window_pane_cp12

0x0459,	// (0x00036e2a) popup_call7_1st_window_g1

0x0461,	// (0x00036e32) popup_call7_1st_window_g2

0x0469,	// (0x00036e3a) popup_call7_1st_window_g3

0x0002,

0xfe3c,	// (0x0004680d) popup_call7_1st_window_g

0x0471,	// (0x00036e42) popup_call7_1st_window_t1

0x0480,	// (0x00036e51) popup_call7_1st_window_t2

0x0490,	// (0x00036e61) popup_call7_1st_window_t3

0x0002,

0xfe43,	// (0x00046814) popup_call7_1st_window_t

0xee90,	// (0x00045861) bg_popup_window_pane_cp13

0x04a0,	// (0x00036e71) popup_call7_2nd_window_g1

0x04a8,	// (0x00036e79) popup_call7_2nd_window_g2

0x04b0,	// (0x00036e81) popup_call7_2nd_window_g3

0x0002,

0xfe4a,	// (0x0004681b) popup_call7_2nd_window_g

0x04b8,	// (0x00036e89) popup_call7_2nd_window_t1

0xee90,	// (0x00045861) bg_popup_window_pane_cp14

0x04c7,	// (0x00036e98) call7_list_conf_pane

0x04cf,	// (0x00036ea0) call7_list_conf_row_pane_ParamLimits

0x04cf,	// (0x00036ea0) call7_list_conf_row_pane

0x04e2,	// (0x00036eb3) call7_list_conf_row_pane_g1

0x04ea,	// (0x00036ebb) call7_list_conf_row_pane_g2

0x0001,

0xfe51,	// (0x00046822) call7_list_conf_row_pane_g

0x04f2,	// (0x00036ec3) call7_list_conf_row_pane_t1

0xee90,	// (0x00045861) list_highlight_pane_cp22

0xc72d,	// (0x000430fe) sso_option_pane_cp01_ParamLimits

0xc72d,	// (0x000430fe) sso_option_pane_cp01

0x0af2,	// (0x000374c3) msg_header_pane_ParamLimits

0x1878,	// (0x00038249) bg_button_pane_cp01_ParamLimits

0x4430,	// (0x0003ae01) input_focus_pane_cp07_ParamLimits

0xb588,	// (0x00041f59) popup_email_progress_window

0x0bb9,	// (0x0003758a) popup_email_progress_window_g1

0x0500,	// (0x00036ed1) popup_email_progress_window_g2

0x0001,

0xfe56,	// (0x00046827) popup_email_progress_window_g

0x0508,	// (0x00036ed9) popup_email_progress_window_t1

0xee90,	// (0x00045861) cmail_conv_pane

0x48c3,	// (0x0003b294) list_single_dyc_row_pane_g5_ParamLimits

0x48c3,	// (0x0003b294) list_single_dyc_row_pane_g5

0x48cf,	// (0x0003b2a0) list_single_dyc_row_pane_g6_ParamLimits

0x48cf,	// (0x0003b2a0) list_single_dyc_row_pane_g6

0x48e7,	// (0x0003b2b8) list_single_dyc_row_pane_g7_ParamLimits

0x48e7,	// (0x0003b2b8) list_single_dyc_row_pane_g7

0xc0f0,	// (0x00042ac1) main_button_pane_5_ParamLimits

0xc0f0,	// (0x00042ac1) main_button_pane_5

0xc597,	// (0x00042f68) sso_emg_call_btn_pane_ParamLimits

0xc597,	// (0x00042f68) sso_emg_call_btn_pane

0xc8a1,	// (0x00043272) sso_t_sub_pane_cp01_ParamLimits

0xc8a1,	// (0x00043272) sso_t_sub_pane_cp01

0xed74,	// (0x00045745) sso_option_row_pane_g1_ParamLimits

0xed80,	// (0x00045751) sso_option_row_pane_g2_ParamLimits

0xed80,	// (0x00045751) sso_option_row_pane_g2

0x0001,

0xfe2b,	// (0x000467fc) sso_option_row_pane_g_ParamLimits

0xfe2b,	// (0x000467fc) sso_option_row_pane_g

0xca35,	// (0x00043406) att_btn_pane_cp02_ParamLimits

0xca35,	// (0x00043406) att_btn_pane_cp02

0x0516,	// (0x00036ee7) cmail_conv_hdr_pane

0x051f,	// (0x00036ef0) list_cmail_conv_pane

0x0529,	// (0x00036efa) scroll_pane_cp31

0x0531,	// (0x00036f02) cmail_conv_hdr_pane_t1

0x053f,	// (0x00036f10) cmail_conv_hdr_pane_t2

0x0001,

0xfe5b,	// (0x0004682c) cmail_conv_hdr_pane_t

0x054d,	// (0x00036f1e) bubble_cmail_conv_pane_ParamLimits

0x054d,	// (0x00036f1e) bubble_cmail_conv_pane

0xe3d3,	// (0x00044da4) aid_size_colorization_pane

0x0e0b,	// (0x000377dc) bg_bubble_cmail_conv_pane

0x0569,	// (0x00036f3a) body_bubble_cmail_conv_pane

0x130a,	// (0x00037cdb) bubble_cmail_conv_pane_g1

0x1312,	// (0x00037ce3) bubble_cmail_conv_pane_g2

0x131a,	// (0x00037ceb) bubble_cmail_conv_pane_g3

0x0002,

0xf252,	// (0x00045c23) bubble_cmail_conv_pane_g

0x0571,	// (0x00036f42) bubble_cmail_conv_pane_t1

0x057f,	// (0x00036f50) bg_bubble_cmail_conv_pane_g1

0x0588,	// (0x00036f59) bg_bubble_cmail_conv_pane_g2

0x0591,	// (0x00036f62) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe60,	// (0x00046831) bg_bubble_cmail_conv_pane_g

0x059a,	// (0x00036f6b) body_bubble_cmail_conv_pane_t1_ParamLimits

0x059a,	// (0x00036f6b) body_bubble_cmail_conv_pane_t1

0x05b1,	// (0x00036f82) body_bubble_cmail_conv_pane_t2_ParamLimits

0x05b1,	// (0x00036f82) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe67,	// (0x00046838) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe67,	// (0x00046838) body_bubble_cmail_conv_pane_t

0x0b6d,	// (0x0003753e) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
