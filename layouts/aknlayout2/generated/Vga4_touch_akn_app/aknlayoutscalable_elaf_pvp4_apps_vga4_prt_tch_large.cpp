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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000661c8 };

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
0x686d,	// (0x0006ca35) Screen

0x6879,	// (0x0006ca41) application_window

0x68d7,	// (0x0006ca9f) area_bottom_pane_ParamLimits

0x68d7,	// (0x0006ca9f) area_bottom_pane

0x6931,	// (0x0006caf9) area_top_pane_ParamLimits

0x6931,	// (0x0006caf9) area_top_pane

0x6995,	// (0x0006cb5d) call_video_uplink_pane_ParamLimits

0x6995,	// (0x0006cb5d) call_video_uplink_pane

0x69d2,	// (0x0006cb9a) main_pane_ParamLimits

0x69d2,	// (0x0006cb9a) main_pane

0x1767,	// (0x0006792f) context_pane

0x9b1a,	// (0x0006fce2) navi_pane

0x9b3e,	// (0x0006fd06) popup_cale_events_window_ParamLimits

0x9b3e,	// (0x0006fd06) popup_cale_events_window

0x177a,	// (0x00067942) popup_mup_playback_window

0x9b56,	// (0x0006fd1e) signal_pane

0xe8e8,	// (0x00074ab0) main_browser_pane

0x02a9,	// (0x00066471) main_burst_pane

0x99be,	// (0x0006fb86) main_calc_pane

0x02a9,	// (0x00066471) main_cale_day_pane

0xe8e8,	// (0x00074ab0) main_cale_month_pane

0x02a9,	// (0x00066471) main_cale_week_pane

0x02a9,	// (0x00066471) main_call_pane

0xe5c2,	// (0x0007478a) main_call_poc_pane

0x02a9,	// (0x00066471) main_camera_pane

0x02a9,	// (0x00066471) main_chi_dic_pane

0x014b,	// (0x00066313) main_clock_pane

0xe5c2,	// (0x0007478a) main_fmradio_pane

0x02a9,	// (0x00066471) main_graph_messa_pane

0xe5c2,	// (0x0007478a) main_help_pane

0xe8e8,	// (0x00074ab0) main_im_pane

0xe81d,	// (0x000749e5) main_image_pane_ParamLimits

0xe81d,	// (0x000749e5) main_image_pane

0xe5c2,	// (0x0007478a) main_location2_pane

0x02a9,	// (0x00066471) main_location_pane

0xe5c2,	// (0x0007478a) main_messa_pane

0xe5c2,	// (0x0007478a) main_mp2_pane

0x02a9,	// (0x00066471) main_mp_pane

0xe5c2,	// (0x0007478a) main_msg_pane

0xe5c2,	// (0x0007478a) main_mup_eq_pane

0xe5c2,	// (0x0007478a) main_mup_pane

0x02a9,	// (0x00066471) main_notes_pane

0xe5c2,	// (0x0007478a) main_pec_pane

0xe5c2,	// (0x0007478a) main_phob_pane

0xe5c2,	// (0x0007478a) main_pinb_pane

0xe5c2,	// (0x0007478a) main_postcard_pane

0xe5c2,	// (0x0007478a) main_qdial_pane

0x02a9,	// (0x00066471) main_skin_pane

0xe5c2,	// (0x0007478a) main_smil2_pane

0x02a9,	// (0x00066471) main_smil_pane

0x02a9,	// (0x00066471) main_video_pane

0x02a9,	// (0x00066471) main_video_tele_pane

0xe81d,	// (0x000749e5) main_viewer_pane_ParamLimits

0xe81d,	// (0x000749e5) main_viewer_pane

0x02a9,	// (0x00066471) main_vorec_pane

0x9a04,	// (0x0006fbcc) popup_blid_sat_info_window_ParamLimits

0x9a04,	// (0x0006fbcc) popup_blid_sat_info_window

0x9a1e,	// (0x0006fbe6) popup_dyc_status_message_window_ParamLimits

0x9a1e,	// (0x0006fbe6) popup_dyc_status_message_window

0x9a2e,	// (0x0006fbf6) popup_grid_large_graphic_window_ParamLimits

0x9a2e,	// (0x0006fbf6) popup_grid_large_graphic_window

0x9aa6,	// (0x0006fc6e) popup_loc_request_window_ParamLimits

0x9aa6,	// (0x0006fc6e) popup_loc_request_window

0x9aee,	// (0x0006fcb6) popup_wml_address_window_ParamLimits

0x9aee,	// (0x0006fcb6) popup_wml_address_window

0x9896,	// (0x0006fa5e) call_muted_g1

0x9552,	// (0x0006f71a) popup_call_audio_conf_window_ParamLimits

0x9552,	// (0x0006f71a) popup_call_audio_conf_window

0x98a6,	// (0x0006fa6e) popup_call_audio_first_window_ParamLimits

0x98a6,	// (0x0006fa6e) popup_call_audio_first_window

0x98e6,	// (0x0006faae) popup_call_audio_in_window_ParamLimits

0x98e6,	// (0x0006faae) popup_call_audio_in_window

0x990a,	// (0x0006fad2) popup_call_audio_out_window_ParamLimits

0x990a,	// (0x0006fad2) popup_call_audio_out_window

0x992c,	// (0x0006faf4) popup_call_audio_second_window_ParamLimits

0x992c,	// (0x0006faf4) popup_call_audio_second_window

0x995c,	// (0x0006fb24) popup_call_audio_wait_window_ParamLimits

0x995c,	// (0x0006fb24) popup_call_audio_wait_window

0x997d,	// (0x0006fb45) popup_number_entry_window_ParamLimits

0x997d,	// (0x0006fb45) popup_number_entry_window

0x6ba6,	// (0x0006cd6e) bg_popup_call_pane_cp05_ParamLimits

0x6ba6,	// (0x0006cd6e) bg_popup_call_pane_cp05

0x6bc6,	// (0x0006cd8e) popup_number_entry_window_t1

0x6bd9,	// (0x0006cda1) popup_number_entry_window_t2

0x6beb,	// (0x0006cdb3) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x000752b4) popup_number_entry_window_t

0x6c35,	// (0x0006cdfd) text_title_cp2

0x6c48,	// (0x0006ce10) bg_popup_call_pane_cp_ParamLimits

0x6c48,	// (0x0006ce10) bg_popup_call_pane_cp

0x6c56,	// (0x0006ce1e) call_thumbnail_pane

0x6c5e,	// (0x0006ce26) popup_call_audio_in_window_g1_ParamLimits

0x6c5e,	// (0x0006ce26) popup_call_audio_in_window_g1

0x6c6a,	// (0x0006ce32) popup_call_audio_in_window_g2_ParamLimits

0x6c6a,	// (0x0006ce32) popup_call_audio_in_window_g2

0x6c76,	// (0x0006ce3e) popup_call_audio_in_window_g3_ParamLimits

0x6c76,	// (0x0006ce3e) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x000752bd) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x000752bd) popup_call_audio_in_window_g

0x6c82,	// (0x0006ce4a) popup_call_audio_in_window_t1_ParamLimits

0x6c82,	// (0x0006ce4a) popup_call_audio_in_window_t1

0x6c9e,	// (0x0006ce66) popup_call_audio_in_window_t2_ParamLimits

0x6c9e,	// (0x0006ce66) popup_call_audio_in_window_t2

0xe26b,	// (0x00074433) popup_call_audio_in_window_t3_ParamLimits

0xe26b,	// (0x00074433) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x000752c4) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x000752c4) popup_call_audio_in_window_t

0x6c48,	// (0x0006ce10) bg_popup_call_pane_cp01_ParamLimits

0x6c48,	// (0x0006ce10) bg_popup_call_pane_cp01

0x6c56,	// (0x0006ce1e) call_thumbnail_pane_cp02

0xe27e,	// (0x00074446) call_type_pane_cp022

0xe286,	// (0x0007444e) popup_call_audio_out_window_g1_ParamLimits

0xe286,	// (0x0007444e) popup_call_audio_out_window_g1

0xe298,	// (0x00074460) popup_call_audio_out_window_g2_ParamLimits

0xe298,	// (0x00074460) popup_call_audio_out_window_g2

0xe2a4,	// (0x0007446c) popup_call_audio_out_window_g3_ParamLimits

0xe2a4,	// (0x0007446c) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x000752cb) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x000752cb) popup_call_audio_out_window_g

0xe2b6,	// (0x0007447e) popup_call_audio_out_window_t1_ParamLimits

0xe2b6,	// (0x0007447e) popup_call_audio_out_window_t1

0xe2ce,	// (0x00074496) popup_call_audio_out_window_t2_ParamLimits

0xe2ce,	// (0x00074496) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x000752d2) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x000752d2) popup_call_audio_out_window_t

0xe2e3,	// (0x000744ab) bg_popup_call_pane_ParamLimits

0xe2e3,	// (0x000744ab) bg_popup_call_pane

0x6cba,	// (0x0006ce82) call_thumbnail_pane_cp_ParamLimits

0x6cba,	// (0x0006ce82) call_thumbnail_pane_cp

0xe367,	// (0x0007452f) call_type_pane_cp01_ParamLimits

0xe367,	// (0x0007452f) call_type_pane_cp01

0xe3cb,	// (0x00074593) popup_call_audio_first_window_g1_ParamLimits

0xe3cb,	// (0x00074593) popup_call_audio_first_window_g1

0xe417,	// (0x000745df) popup_call_audio_first_window_g2_ParamLimits

0xe417,	// (0x000745df) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x000752d7) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x000752d7) popup_call_audio_first_window_g

0xe45b,	// (0x00074623) popup_call_audio_first_window_t1_ParamLimits

0xe45b,	// (0x00074623) popup_call_audio_first_window_t1

0xe507,	// (0x000746cf) popup_call_audio_first_window_t4_ParamLimits

0xe507,	// (0x000746cf) popup_call_audio_first_window_t4

0xe593,	// (0x0007475b) popup_call_audio_first_window_t5_ParamLimits

0xe593,	// (0x0007475b) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x000752dc) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x000752dc) popup_call_audio_first_window_t

0xe5c2,	// (0x0007478a) bg_popup_call_pane_cp02

0xe5cc,	// (0x00074794) call_type_pane_cp023

0xe5d4,	// (0x0007479c) popup_call_audio_wait_window_g1

0xe5dc,	// (0x000747a4) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000752e3) popup_call_audio_wait_window_g

0xe5e4,	// (0x000747ac) popup_call_audio_wait_window_t3

0xe5f2,	// (0x000747ba) bg_popup_call_pane_cp03_ParamLimits

0xe5f2,	// (0x000747ba) bg_popup_call_pane_cp03

0xe652,	// (0x0007481a) call_thumbnail_pane_cp011_ParamLimits

0xe652,	// (0x0007481a) call_thumbnail_pane_cp011

0xe65e,	// (0x00074826) call_type_pane_cp034_ParamLimits

0xe65e,	// (0x00074826) call_type_pane_cp034

0xe69a,	// (0x00074862) popup_call_audio_second_window_g1_ParamLimits

0xe69a,	// (0x00074862) popup_call_audio_second_window_g1

0xe6d6,	// (0x0007489e) popup_call_audio_second_window_g2_ParamLimits

0xe6d6,	// (0x0007489e) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x000752e8) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x000752e8) popup_call_audio_second_window_g

0xe712,	// (0x000748da) popup_call_audio_second_window_t1_ParamLimits

0xe712,	// (0x000748da) popup_call_audio_second_window_t1

0xe793,	// (0x0007495b) popup_call_audio_second_window_t2_ParamLimits

0xe793,	// (0x0007495b) popup_call_audio_second_window_t2

0xe7c9,	// (0x00074991) popup_call_audio_second_window_t3_ParamLimits

0xe7c9,	// (0x00074991) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x000752ed) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x000752ed) popup_call_audio_second_window_t

0xe5c2,	// (0x0007478a) bg_popup_call_pane_cp04

0xe7ff,	// (0x000749c7) list_conf_pane

0xe807,	// (0x000749cf) popup_call_audio_conf_window_t1

0xe815,	// (0x000749dd) call_thumbnail_pane_g1

0xe81d,	// (0x000749e5) bg_pinb_pane_ParamLimits

0xe81d,	// (0x000749e5) bg_pinb_pane

0xe82b,	// (0x000749f3) find_pinb_pane

0xe834,	// (0x000749fc) listscroll_pinb_pane_ParamLimits

0xe834,	// (0x000749fc) listscroll_pinb_pane

0xe843,	// (0x00074a0b) pinb_bg_pane_g1

0x6cde,	// (0x0006cea6) pinb_bg_pane_g2

0x6cea,	// (0x0006ceb2) pinb_bg_pane_g3

0x6cf6,	// (0x0006cebe) pinb_bg_pane_g4

0x6d02,	// (0x0006ceca) pinb_bg_pane_g5

0x6d0e,	// (0x0006ced6) pinb_bg_pane_g6

0x6d19,	// (0x0006cee1) pinb_bg_pane_g7

0x6d24,	// (0x0006ceec) pinb_bg_pane_g8

0x6d2f,	// (0x0006cef7) pinb_bg_pane_g9

0x6d39,	// (0x0006cf01) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000752f4) pinb_bg_pane_g

0x6d56,	// (0x0006cf1e) grid_pinb_pane

0x6d61,	// (0x0006cf29) list_pinb_pane

0x6d6c,	// (0x0006cf34) scroll_pane_cp01_ParamLimits

0x6d6c,	// (0x0006cf34) scroll_pane_cp01

0xe84d,	// (0x00074a15) find_pinb_pane_g1_ParamLimits

0xe84d,	// (0x00074a15) find_pinb_pane_g1

0xe865,	// (0x00074a2d) find_pinb_pane_t1

0xe877,	// (0x00074a3f) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0007530e) find_pinb_pane_t

0xe88c,	// (0x00074a54) input_focus_pane_cp01_ParamLimits

0xe88c,	// (0x00074a54) input_focus_pane_cp01

0x6d7e,	// (0x0006cf46) cell_pinb_pane_ParamLimits

0x6d7e,	// (0x0006cf46) cell_pinb_pane

0x6d9e,	// (0x0006cf66) cell_pinb_pane_g1_ParamLimits

0x6d9e,	// (0x0006cf66) cell_pinb_pane_g1

0x6db3,	// (0x0006cf7b) cell_pinb_pane_g2_ParamLimits

0x6db3,	// (0x0006cf7b) cell_pinb_pane_g2

0xe898,	// (0x00074a60) cell_pinb_pane_g3_ParamLimits

0xe898,	// (0x00074a60) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00075313) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00075313) cell_pinb_pane_g

0xe5c2,	// (0x0007478a) grid_highlight_pane_cp01

0x6dbf,	// (0x0006cf87) list_pinb_item_pane_ParamLimits

0x6dbf,	// (0x0006cf87) list_pinb_item_pane

0xe5c2,	// (0x0007478a) list_highlight_pane_cp02

0x6dda,	// (0x0006cfa2) list_pinb_item_pane_g1_ParamLimits

0x6dda,	// (0x0006cfa2) list_pinb_item_pane_g1

0x6de7,	// (0x0006cfaf) list_pinb_item_pane_g2_ParamLimits

0x6de7,	// (0x0006cfaf) list_pinb_item_pane_g2

0x6df3,	// (0x0006cfbb) list_pinb_item_pane_g3_ParamLimits

0x6df3,	// (0x0006cfbb) list_pinb_item_pane_g3

0x6e04,	// (0x0006cfcc) list_pinb_item_pane_g4_ParamLimits

0x6e04,	// (0x0006cfcc) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0007531a) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0007531a) list_pinb_item_pane_g

0x6e10,	// (0x0006cfd8) list_pinb_item_pane_t1_ParamLimits

0x6e10,	// (0x0006cfd8) list_pinb_item_pane_t1

0x6e41,	// (0x0006d009) calc_display_pane

0x6e5f,	// (0x0006d027) calc_paper_pane

0x6e7b,	// (0x0006d043) grid_calc_pane

0xe5c2,	// (0x0007478a) bg_list_pane_cp01

0x6ea7,	// (0x0006d06f) clock_g1

0x6eaf,	// (0x0006d077) clock_g2

0x0001,

0xf15b,	// (0x00075323) clock_g

0x6eb9,	// (0x0006d081) clock_t1_ParamLimits

0x6eb9,	// (0x0006d081) clock_t1

0x6ece,	// (0x0006d096) clock_t2_ParamLimits

0x6ece,	// (0x0006d096) clock_t2

0x6ee0,	// (0x0006d0a8) clock_t3_ParamLimits

0x6ee0,	// (0x0006d0a8) clock_t3

0x6ef2,	// (0x0006d0ba) clock_t4_ParamLimits

0x6ef2,	// (0x0006d0ba) clock_t4

0x6f04,	// (0x0006d0cc) clock_t5_ParamLimits

0x6f04,	// (0x0006d0cc) clock_t5

0x6f19,	// (0x0006d0e1) clock_t6_ParamLimits

0x6f19,	// (0x0006d0e1) clock_t6

0x6f2b,	// (0x0006d0f3) clock_t7_ParamLimits

0x6f2b,	// (0x0006d0f3) clock_t7

0x6f3d,	// (0x0006d105) clock_t8_ParamLimits

0x6f3d,	// (0x0006d105) clock_t8

0x6f53,	// (0x0006d11b) clock_t9_ParamLimits

0x6f53,	// (0x0006d11b) clock_t9

0x0008,

0xf160,	// (0x00075328) clock_t_ParamLimits

0xf160,	// (0x00075328) clock_t

0xe8a4,	// (0x00074a6c) popup_clock_analogue_window_cp02

0xe8a4,	// (0x00074a6c) popup_clock_digital_window_cp01

0xe8ac,	// (0x00074a74) listscroll_help_pane

0xe5c2,	// (0x0007478a) phob_pre_status_pane

0xe8b6,	// (0x00074a7e) grid_qdial_pane

0xe5c2,	// (0x0007478a) listscroll_mce_pane

0xe8c0,	// (0x00074a88) bg_notes_pane

0xe8ca,	// (0x00074a92) list_notes_pane

0x6f69,	// (0x0006d131) scroll_pane_cp06

0xe8d4,	// (0x00074a9c) bg_calc_paper_pane

0x6f74,	// (0x0006d13c) list_calc_pane

0xe8e8,	// (0x00074ab0) bg_calc_display_pane

0x6f8e,	// (0x0006d156) calc_display_pane_t1

0x6fa3,	// (0x0006d16b) calc_display_pane_t2

0x6fb8,	// (0x0006d180) calc_display_pane_t3

0x0002,

0xf173,	// (0x0007533b) calc_display_pane_t

0x6fca,	// (0x0006d192) cell_calc_pane_ParamLimits

0x6fca,	// (0x0006d192) cell_calc_pane

0xe8f4,	// (0x00074abc) bg_calc_paper_pane_g1

0xe900,	// (0x00074ac8) bg_calc_paper_pane_g2

0xe90c,	// (0x00074ad4) bg_calc_paper_pane_g3

0xe918,	// (0x00074ae0) bg_calc_paper_pane_g4

0xe924,	// (0x00074aec) bg_calc_paper_pane_g5

0x6ff9,	// (0x0006d1c1) bg_calc_paper_pane_g6

0x700a,	// (0x0006d1d2) bg_calc_paper_pane_g7

0x701b,	// (0x0006d1e3) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00075342) bg_calc_paper_pane_g

0x702c,	// (0x0006d1f4) calc_bg_paper_pane_g9

0x703d,	// (0x0006d205) list_calc_item_pane_ParamLimits

0x703d,	// (0x0006d205) list_calc_item_pane

0xe930,	// (0x00074af8) list_calc_item_pane_g1

0x7061,	// (0x0006d229) list_calc_item_pane_t1_ParamLimits

0x7061,	// (0x0006d229) list_calc_item_pane_t1

0x7073,	// (0x0006d23b) list_calc_item_pane_t2_ParamLimits

0x7073,	// (0x0006d23b) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00075353) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00075353) list_calc_item_pane_t

0xe93d,	// (0x00074b05) cell_calc_pane_g1

0xe947,	// (0x00074b0f) grid_highlight_pane_cp02

0xe969,	// (0x00074b31) bg_calc_display_pane_g1

0x70a3,	// (0x0006d26b) bg_calc_display_pane_g2

0xe972,	// (0x00074b3a) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0007535d) bg_calc_display_pane_g

0x70ad,	// (0x0006d275) cell_qdial_pane_ParamLimits

0x70ad,	// (0x0006d275) cell_qdial_pane

0x70c3,	// (0x0006d28b) cell_qdial_pane_g1_ParamLimits

0x70c3,	// (0x0006d28b) cell_qdial_pane_g1

0x70d0,	// (0x0006d298) cell_qdial_pane_g2_ParamLimits

0x70d0,	// (0x0006d298) cell_qdial_pane_g2

0xe97b,	// (0x00074b43) cell_qdial_pane_g3_ParamLimits

0xe97b,	// (0x00074b43) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00075364) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00075364) cell_qdial_pane_g

0x70ee,	// (0x0006d2b6) cell_qdial_pane_t1_ParamLimits

0x70ee,	// (0x0006d2b6) cell_qdial_pane_t1

0x7106,	// (0x0006d2ce) cell_qdial_pane_t2_ParamLimits

0x7106,	// (0x0006d2ce) cell_qdial_pane_t2

0x7119,	// (0x0006d2e1) cell_qdial_pane_t3_ParamLimits

0x7119,	// (0x0006d2e1) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0007536d) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0007536d) cell_qdial_pane_t

0xe5c2,	// (0x0007478a) grid_highlight_pane_cp04

0xe987,	// (0x00074b4f) thumbnail_qdial_pane_ParamLimits

0xe987,	// (0x00074b4f) thumbnail_qdial_pane

0xe9e3,	// (0x00074bab) list_help_pane

0xe9ec,	// (0x00074bb4) scroll_pane_cp02

0x712c,	// (0x0006d2f4) help_list_pane_t1_ParamLimits

0x712c,	// (0x0006d2f4) help_list_pane_t1

0x7156,	// (0x0006d31e) bg_notes_pane_g2

0x715e,	// (0x0006d326) bg_notes_pane_g3

0x7166,	// (0x0006d32e) notes_bg_pane_g1

0x716e,	// (0x0006d336) notes_bg_pane_g4

0x7176,	// (0x0006d33e) notes_bg_pane_g5

0x717e,	// (0x0006d346) notes_bg_pane_g6

0x7186,	// (0x0006d34e) notes_bg_pane_g7

0x718e,	// (0x0006d356) notes_bg_pane_g8

0x7196,	// (0x0006d35e) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0007538b) notes_bg_pane_g

0x719e,	// (0x0006d366) list_notes_text_pane_ParamLimits

0x719e,	// (0x0006d366) list_notes_text_pane

0xe9f5,	// (0x00074bbd) list_notes_text_pane_g1

0x571d,	// (0x0006b8e5) list_notes_text_pane_t1

0xe8e8,	// (0x00074ab0) listscroll_cale_week_pane

0x71d8,	// (0x0006d3a0) bg_cale_heading_pane

0xea0f,	// (0x00074bd7) bg_cale_pane_cp01

0x71ec,	// (0x0006d3b4) cale_week_corner_pane

0x7202,	// (0x0006d3ca) cale_week_day_heading_pane

0x7216,	// (0x0006d3de) cale_week_scroll_pane_g1

0x7227,	// (0x0006d3ef) cale_week_scroll_pane_g2

0x7238,	// (0x0006d400) cale_week_scroll_pane_g3

0x7249,	// (0x0006d411) cale_week_scroll_pane_g4

0x725a,	// (0x0006d422) cale_week_scroll_pane_g5

0x726b,	// (0x0006d433) cale_week_scroll_pane_g6

0x727e,	// (0x0006d446) cale_week_scroll_pane_g7

0x7291,	// (0x0006d459) cale_week_scroll_pane_g8

0x72a4,	// (0x0006d46c) cale_week_scroll_pane_g9

0x72b5,	// (0x0006d47d) cale_week_scroll_pane_g10

0x72c6,	// (0x0006d48e) cale_week_scroll_pane_g11

0x72d7,	// (0x0006d49f) cale_week_scroll_pane_g12

0x72e8,	// (0x0006d4b0) cale_week_scroll_pane_g13

0x72f9,	// (0x0006d4c1) cale_week_scroll_pane_g14

0x730a,	// (0x0006d4d2) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0007539a) cale_week_scroll_pane_g

0x731b,	// (0x0006d4e3) cale_week_time_pane

0x732e,	// (0x0006d4f6) grid_cale_week_pane

0x7343,	// (0x0006d50b) scroll_pane_cp08

0x735d,	// (0x0006d525) cell_cale_week_pane_ParamLimits

0x735d,	// (0x0006d525) cell_cale_week_pane

0x739b,	// (0x0006d563) cale_week_day_heading_pane_t1

0x73c8,	// (0x0006d590) cale_week_day_heading_pane_t2

0x73f5,	// (0x0006d5bd) cale_week_day_heading_pane_t3

0x7422,	// (0x0006d5ea) cale_week_day_heading_pane_t4

0x744f,	// (0x0006d617) cale_week_day_heading_pane_t5

0x747c,	// (0x0006d644) cale_week_day_heading_pane_t6

0x74a9,	// (0x0006d671) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x000753b9) cale_week_day_heading_pane_t

0xea3a,	// (0x00074c02) bg_cale_side_pane

0x74d6,	// (0x0006d69e) cale_week_time_pane_t1

0x7502,	// (0x0006d6ca) cale_week_time_pane_t2

0x752e,	// (0x0006d6f6) cale_week_time_pane_t3

0x755a,	// (0x0006d722) cale_week_time_pane_t4

0x7586,	// (0x0006d74e) cale_week_time_pane_t5

0x75b2,	// (0x0006d77a) cale_week_time_pane_t6

0x75de,	// (0x0006d7a6) cale_week_time_pane_t7

0x760a,	// (0x0006d7d2) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x000753c8) cale_week_time_pane_t

0x7636,	// (0x0006d7fe) cell_cale_week_pane_g2

0x764f,	// (0x0006d817) cell_cale_week_pane_g3_ParamLimits

0x764f,	// (0x0006d817) cell_cale_week_pane_g3

0xea48,	// (0x00074c10) grid_highlight_pane_cp07

0xea50,	// (0x00074c18) listscroll_gms_pane

0xea5a,	// (0x00074c22) grid_gms_pane

0xea63,	// (0x00074c2b) listscroll_gms_pane_g1

0xea6b,	// (0x00074c33) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x000753d9) listscroll_gms_pane_g

0x7667,	// (0x0006d82f) scroll_pane_cp010

0x7672,	// (0x0006d83a) cell_gms_pane_ParamLimits

0x7672,	// (0x0006d83a) cell_gms_pane

0x7685,	// (0x0006d84d) cell_gms_pane_g1

0xea73,	// (0x00074c3b) cell_gms_pane_g2

0xea7b,	// (0x00074c43) cell_gms_pane_g3

0xea84,	// (0x00074c4c) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000753de) cell_gms_pane_g

0xea8d,	// (0x00074c55) grid_highlight_pane_cp09

0x983e,	// (0x0006fa06) phob_pre_status_pane_g1

0x9846,	// (0x0006fa0e) phob_pre_status_pane_g2

0x984e,	// (0x0006fa16) phob_pre_status_pane_g3

0x9856,	// (0x0006fa1e) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x000757cd) phob_pre_status_pane_g

0x9866,	// (0x0006fa2e) phob_pre_status_pane_t1

0x9876,	// (0x0006fa3e) phob_pre_status_pane_t2

0x9886,	// (0x0006fa4e) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x000757d8) phob_pre_status_pane_t

0xe5c2,	// (0x0007478a) bg_list_pane_cp05

0x7695,	// (0x0006d85d) grid_vorec_pane

0x769f,	// (0x0006d867) vorec_t1

0x76ad,	// (0x0006d875) vorec_t2

0x76bb,	// (0x0006d883) vorec_t3

0x76c9,	// (0x0006d891) vorec_t4

0x76d7,	// (0x0006d89f) vorec_t5

0x76e5,	// (0x0006d8ad) vorec_t6

0x0006,

0xf21f,	// (0x000753e7) vorec_t

0x7701,	// (0x0006d8c9) wait_bar_pane_cp01

0x7709,	// (0x0006d8d1) cell_vorec_pane_ParamLimits

0x7709,	// (0x0006d8d1) cell_vorec_pane

0xea95,	// (0x00074c5d) cell_vorec_pane_g1

0xe5c2,	// (0x0007478a) grid_highlight_pane_cp05

0x772e,	// (0x0006d8f6) cams_zoom_pane

0x773a,	// (0x0006d902) image_vga_pane

0x7749,	// (0x0006d911) main_camera_pane_g1

0x7757,	// (0x0006d91f) main_camera_pane_g2

0x7763,	// (0x0006d92b) main_camera_pane_g3

0x7771,	// (0x0006d939) main_camera_pane_g4

0x777f,	// (0x0006d947) main_camera_pane_g5

0x778d,	// (0x0006d955) main_camera_pane_g6

0x779b,	// (0x0006d963) main_camera_pane_g7

0x0007,

0xf22e,	// (0x000753f6) main_camera_pane_g

0x77a9,	// (0x0006d971) main_camera_pane_t1

0x77bb,	// (0x0006d983) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00075407) main_camera_pane_t

0x77de,	// (0x0006d9a6) cams_zoom_pane_cp_ParamLimits

0x77de,	// (0x0006d9a6) cams_zoom_pane_cp

0x7802,	// (0x0006d9ca) image_cif_pane_ParamLimits

0x7802,	// (0x0006d9ca) image_cif_pane

0x7820,	// (0x0006d9e8) image_subqcif_pane

0x782a,	// (0x0006d9f2) main_video_pane_g1_ParamLimits

0x782a,	// (0x0006d9f2) main_video_pane_g1

0x784a,	// (0x0006da12) main_video_pane_g2_ParamLimits

0x784a,	// (0x0006da12) main_video_pane_g2

0x787a,	// (0x0006da42) main_video_pane_g3_ParamLimits

0x787a,	// (0x0006da42) main_video_pane_g3

0x78a3,	// (0x0006da6b) main_video_pane_g4_ParamLimits

0x78a3,	// (0x0006da6b) main_video_pane_g4

0x78cc,	// (0x0006da94) main_video_pane_g5_ParamLimits

0x78cc,	// (0x0006da94) main_video_pane_g5

0xeaab,	// (0x00074c73) main_video_pane_g6_ParamLimits

0xeaab,	// (0x00074c73) main_video_pane_g6

0x0006,

0xf244,	// (0x0007540c) main_video_pane_g_ParamLimits

0xf244,	// (0x0007540c) main_video_pane_g

0x78ee,	// (0x0006dab6) main_video_pane_t1_ParamLimits

0x78ee,	// (0x0006dab6) main_video_pane_t1

0xeac5,	// (0x00074c8d) cams_zoom_pane_g1

0xeace,	// (0x00074c96) cams_zoom_pane_g2

0xead7,	// (0x00074c9f) cams_zoom_pane_g3

0xeae0,	// (0x00074ca8) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0007541b) cams_zoom_pane_g

0x7938,	// (0x0006db00) grid_cams_pane

0x7946,	// (0x0006db0e) linegrid_cams_pane

0x7954,	// (0x0006db1c) cell_cams_pane_ParamLimits

0x7954,	// (0x0006db1c) cell_cams_pane

0xeae9,	// (0x00074cb1) cams_burst_image_pane

0xeaf1,	// (0x00074cb9) cell_cams_pane_g1

0xe5c2,	// (0x0007478a) grid_highlight_pane_cp03

0xe93d,	// (0x00074b05) mp_bg_pane_g1

0xe5c2,	// (0x0007478a) bg_list_pane_cp03

0x1639,	// (0x00067801) bg_mp_pane

0x1641,	// (0x00067809) grid_mp_pane

0x1649,	// (0x00067811) media_player_g1

0x1653,	// (0x0006781b) media_player_t1

0x1661,	// (0x00067829) media_player_t2

0x166f,	// (0x00067837) media_player_t3

0x167d,	// (0x00067845) media_player_t4

0x168b,	// (0x00067853) media_player_t5

0x1699,	// (0x00067861) media_player_t6

0x16a7,	// (0x0006786f) media_player_t7

0x0006,

0xf5ef,	// (0x000757b7) media_player_t

0x16b5,	// (0x0006787d) wait_bar_pane_cp02

0xf5d4,	// (0x0007579c) main_usb_pane_t

0x9835,	// (0x0006f9fd) cell_mp_pane

0xe93d,	// (0x00074b05) cell_mp_pane_g1

0xe5c2,	// (0x0007478a) grid_highlight_pane_cp06

0xeaf9,	// (0x00074cc1) grid_skin_colour_pane

0xeb01,	// (0x00074cc9) list_highlight_pane_cp03

0x7969,	// (0x0006db31) skin_g1

0xeb09,	// (0x00074cd1) skin_t1

0xeb18,	// (0x00074ce0) skin_t2

0x0001,

0xf288,	// (0x00075450) skin_t

0x7973,	// (0x0006db3b) cell_skin_colour_pane_ParamLimits

0x7973,	// (0x0006db3b) cell_skin_colour_pane

0xeb26,	// (0x00074cee) cell_skin_colour_pane_g1

0x79f3,	// (0x0006dbbb) call_video_g1_ParamLimits

0x79f3,	// (0x0006dbbb) call_video_g1

0x7a03,	// (0x0006dbcb) call_video_g2_ParamLimits

0x7a03,	// (0x0006dbcb) call_video_g2

0x0001,

0xf28d,	// (0x00075455) call_video_g_ParamLimits

0xf28d,	// (0x00075455) call_video_g

0x7a53,	// (0x0006dc1b) call_video_uplink_pane_cp1_ParamLimits

0x7a53,	// (0x0006dc1b) call_video_uplink_pane_cp1

0xeb38,	// (0x00074d00) call_video_uplink_pane_cp2

0x7b21,	// (0x0006dce9) video_down_crop_pane_ParamLimits

0x7b21,	// (0x0006dce9) video_down_crop_pane

0x7c13,	// (0x0006dddb) video_down_pane_ParamLimits

0x7c13,	// (0x0006dddb) video_down_pane

0xeb40,	// (0x00074d08) video_down_subqcif_pane_ParamLimits

0xeb40,	// (0x00074d08) video_down_subqcif_pane

0xeb5a,	// (0x00074d22) video_down_subqcif_pane_cp_ParamLimits

0xeb5a,	// (0x00074d22) video_down_subqcif_pane_cp

0xeb80,	// (0x00074d48) im_reading_pane_ParamLimits

0xeb80,	// (0x00074d48) im_reading_pane

0x7d30,	// (0x0006def8) im_writing_pane_ParamLimits

0x7d30,	// (0x0006def8) im_writing_pane

0x7d4e,	// (0x0006df16) im_reading_pane_t1

0xeb9a,	// (0x00074d62) list_im_pane

0xebab,	// (0x00074d73) scroll_pane_cp07

0x7d96,	// (0x0006df5e) im_writing_pane_t1_ParamLimits

0x7d96,	// (0x0006df5e) im_writing_pane_t1

0xebc4,	// (0x00074d8c) im_writing_pane_t2_ParamLimits

0xebc4,	// (0x00074d8c) im_writing_pane_t2

0x0001,

0xf297,	// (0x0007545f) im_writing_pane_t_ParamLimits

0xf297,	// (0x0007545f) im_writing_pane_t

0xe5c2,	// (0x0007478a) input_focus_pane_cp04

0xe5c2,	// (0x0007478a) input_focus_pane_cp05

0x7da8,	// (0x0006df70) list_im_single_pane_ParamLimits

0x7da8,	// (0x0006df70) list_im_single_pane

0x7dc4,	// (0x0006df8c) list_single_im_pane_t1

0x97f9,	// (0x0006f9c1) blid_accuracy_pane

0x9801,	// (0x0006f9c9) blid_compass_pane

0x980b,	// (0x0006f9d3) main_location_t1

0x9819,	// (0x0006f9e1) main_location_t2

0x9827,	// (0x0006f9ef) main_location_t3

0x0002,

0xf5fe,	// (0x000757c6) main_location_t

0xe5c2,	// (0x0007478a) aid_levels_location

0xe93d,	// (0x00074b05) blid_accuracy_pane_g1

0xe93d,	// (0x00074b05) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000754c1) blid_accuracy_pane_g

0xec0c,	// (0x00074dd4) wml_content_pane

0xec4a,	// (0x00074e12) wml_button_pane_ParamLimits

0xec4a,	// (0x00074e12) wml_button_pane

0x7dd3,	// (0x0006df9b) wml_list_single_large_pane_ParamLimits

0x7dd3,	// (0x0006df9b) wml_list_single_large_pane

0x7df5,	// (0x0006dfbd) wml_list_single_medium_pane_ParamLimits

0x7df5,	// (0x0006dfbd) wml_list_single_medium_pane

0x7e1b,	// (0x0006dfe3) wml_list_single_small_pane_ParamLimits

0x7e1b,	// (0x0006dfe3) wml_list_single_small_pane

0xec5e,	// (0x00074e26) wml_selection_box_pane_ParamLimits

0xec5e,	// (0x00074e26) wml_selection_box_pane

0xec71,	// (0x00074e39) wml_list_single_pane_t1

0xec80,	// (0x00074e48) wml_list_single_medium_pane_t1

0xec8f,	// (0x00074e57) wml_list_single_large_pane_t1

0xec9e,	// (0x00074e66) input_focus_pane_cp02_ParamLimits

0xec9e,	// (0x00074e66) input_focus_pane_cp02

0xecb1,	// (0x00074e79) wml_selection_box_pane_g1

0xecba,	// (0x00074e82) wml_selection_box_pane_t1_ParamLimits

0xecba,	// (0x00074e82) wml_selection_box_pane_t1

0xe81d,	// (0x000749e5) bg_wml_button_pane_ParamLimits

0xe81d,	// (0x000749e5) bg_wml_button_pane

0xecd2,	// (0x00074e9a) wml_button_pane_g1

0xecda,	// (0x00074ea2) wml_button_pane_t1

0xecd2,	// (0x00074e9a) wml_button_bg_pane_g1

0xecea,	// (0x00074eb2) wml_button_bg_pane_g2

0xecf2,	// (0x00074eba) wml_button_bg_pane_g3

0xecfa,	// (0x00074ec2) wml_button_bg_pane_g4

0xed02,	// (0x00074eca) wml_button_bg_pane_g5

0xed0a,	// (0x00074ed2) wml_button_bg_pane_g6

0xed12,	// (0x00074eda) wml_button_bg_pane_g7

0xed1a,	// (0x00074ee2) wml_button_bg_pane_g8

0xed22,	// (0x00074eea) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00075464) wml_button_bg_pane_g

0x7e46,	// (0x0006e00e) bg_list_pane_cp02

0xed2a,	// (0x00074ef2) mce_header_pane_ParamLimits

0xed2a,	// (0x00074ef2) mce_header_pane

0xed40,	// (0x00074f08) mce_icon_pane

0xed40,	// (0x00074f08) mce_image_pane

0xed49,	// (0x00074f11) mce_text_pane_ParamLimits

0xed49,	// (0x00074f11) mce_text_pane

0x7e50,	// (0x0006e018) scroll_pane_cp03

0xec42,	// (0x00074e0a) scroll_pane_cp04

0xed5c,	// (0x00074f24) scroll_pane_cp05_ParamLimits

0xed5c,	// (0x00074f24) scroll_pane_cp05

0x7e5a,	// (0x0006e022) mce_header_field_pane_ParamLimits

0x7e5a,	// (0x0006e022) mce_header_field_pane

0x7e7c,	// (0x0006e044) mce_header_field_pane_2_ParamLimits

0x7e7c,	// (0x0006e044) mce_header_field_pane_2

0x7e92,	// (0x0006e05a) mce_header_field_pane_3

0x7e9a,	// (0x0006e062) list_single_mce_message_pane_ParamLimits

0x7e9a,	// (0x0006e062) list_single_mce_message_pane

0x7eb9,	// (0x0006e081) list_single_mce_smart_pane_ParamLimits

0x7eb9,	// (0x0006e081) list_single_mce_smart_pane

0xed68,	// (0x00074f30) input_focus_pane_cp03

0xed71,	// (0x00074f39) list_header_data_pane

0x7ee3,	// (0x0006e0ab) mce_header_field_pane_t1

0x7ef3,	// (0x0006e0bb) list_single_mce_header_pane_ParamLimits

0x7ef3,	// (0x0006e0bb) list_single_mce_header_pane

0xed79,	// (0x00074f41) list_single_mce_header_pane_t1

0xed88,	// (0x00074f50) list_single_mce_message_pane_g1

0xed90,	// (0x00074f58) list_single_mce_message_pane_t1

0x7f2f,	// (0x0006e0f7) bg_cale_heading_pane_cp01_ParamLimits

0x7f2f,	// (0x0006e0f7) bg_cale_heading_pane_cp01

0xed9e,	// (0x00074f66) bg_cale_pane_cp02_ParamLimits

0xed9e,	// (0x00074f66) bg_cale_pane_cp02

0x7f52,	// (0x0006e11a) cale_month_corner_pane

0x7f68,	// (0x0006e130) cale_month_day_heading_pane_ParamLimits

0x7f68,	// (0x0006e130) cale_month_day_heading_pane

0x7f9b,	// (0x0006e163) cale_month_pane_g1_ParamLimits

0x7f9b,	// (0x0006e163) cale_month_pane_g1

0x7fb7,	// (0x0006e17f) cale_month_pane_g2_ParamLimits

0x7fb7,	// (0x0006e17f) cale_month_pane_g2

0x7fd2,	// (0x0006e19a) cale_month_pane_g3_ParamLimits

0x7fd2,	// (0x0006e19a) cale_month_pane_g3

0x7ffe,	// (0x0006e1c6) cale_month_pane_g4_ParamLimits

0x7ffe,	// (0x0006e1c6) cale_month_pane_g4

0x802a,	// (0x0006e1f2) cale_month_pane_g5_ParamLimits

0x802a,	// (0x0006e1f2) cale_month_pane_g5

0x8056,	// (0x0006e21e) cale_month_pane_g6_ParamLimits

0x8056,	// (0x0006e21e) cale_month_pane_g6

0x8092,	// (0x0006e25a) cale_month_pane_g7_ParamLimits

0x8092,	// (0x0006e25a) cale_month_pane_g7

0x80ce,	// (0x0006e296) cale_month_pane_g8_ParamLimits

0x80ce,	// (0x0006e296) cale_month_pane_g8

0x810a,	// (0x0006e2d2) cale_month_pane_g9_ParamLimits

0x810a,	// (0x0006e2d2) cale_month_pane_g9

0x8144,	// (0x0006e30c) cale_month_pane_g10_ParamLimits

0x8144,	// (0x0006e30c) cale_month_pane_g10

0x817e,	// (0x0006e346) cale_month_pane_g11_ParamLimits

0x817e,	// (0x0006e346) cale_month_pane_g11

0x81b8,	// (0x0006e380) cale_month_pane_g12_ParamLimits

0x81b8,	// (0x0006e380) cale_month_pane_g12

0x81f2,	// (0x0006e3ba) cale_month_pane_g13_ParamLimits

0x81f2,	// (0x0006e3ba) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00075477) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00075477) cale_month_pane_g

0x822c,	// (0x0006e3f4) cale_month_week_pane

0x823f,	// (0x0006e407) grid_cale_month_pane_ParamLimits

0x823f,	// (0x0006e407) grid_cale_month_pane

0x826d,	// (0x0006e435) cale_month_day_heading_pane_t1

0x82cb,	// (0x0006e493) cale_month_day_heading_pane_t2

0x8330,	// (0x0006e4f8) cale_month_day_heading_pane_t3

0x8395,	// (0x0006e55d) cale_month_day_heading_pane_t4

0x83fa,	// (0x0006e5c2) cale_month_day_heading_pane_t5

0x8467,	// (0x0006e62f) cale_month_day_heading_pane_t6

0x84dc,	// (0x0006e6a4) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00075492) cale_month_day_heading_pane_t

0xea3a,	// (0x00074c02) bg_cale_side_pane_cp01

0x8551,	// (0x0006e719) cale_month_week_pane_t1

0x857c,	// (0x0006e744) cale_month_week_pane_t2

0x85a7,	// (0x0006e76f) cale_month_week_pane_t3

0x85d2,	// (0x0006e79a) cale_month_week_pane_t4

0x85fd,	// (0x0006e7c5) cale_month_week_pane_t5

0x8628,	// (0x0006e7f0) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x000754a1) cale_month_week_pane_t

0x8653,	// (0x0006e81b) cell_cale_month_pane_ParamLimits

0x8653,	// (0x0006e81b) cell_cale_month_pane

0x8721,	// (0x0006e8e9) cell_cale_month_pane_g1

0x872d,	// (0x0006e8f5) cell_cale_month_pane_t1_ParamLimits

0x872d,	// (0x0006e8f5) cell_cale_month_pane_t1

0xea48,	// (0x00074c10) grid_highlight_pane_cp08

0xe93d,	// (0x00074b05) main_smil_g1

0x8749,	// (0x0006e911) smil_status_pane

0xedd3,	// (0x00074f9b) smil_text_pane

0x1557,	// (0x0006771f) bg_popup_call3_rect_pane_g8

0x155f,	// (0x00067727) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0007575a) bg_popup_call3_rect_pane_g

0x1807,	// (0x000679cf) smil_status_volume_pane_g1

0xeddd,	// (0x00074fa5) smil_status_pane_t1

0x9be8,	// (0x0006fdb0) volume_smil_pane

0xedf4,	// (0x00074fbc) list_smil_text_pane

0x875c,	// (0x0006e924) scroll_pane_cp011

0x8767,	// (0x0006e92f) smil_text_list_pane_t1_ParamLimits

0x8767,	// (0x0006e92f) smil_text_list_pane_t1

0x87cb,	// (0x0006e993) aid_volume_smil_ParamLimits

0x87cb,	// (0x0006e993) aid_volume_smil

0xe93d,	// (0x00074b05) smil_volume_pane_g1

0xe93d,	// (0x00074b05) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000754c1) smil_volume_pane_g

0xe8e8,	// (0x00074ab0) listscroll_cale_day_pane

0xedfe,	// (0x00074fc6) bg_cale_pane

0xee16,	// (0x00074fde) list_cale_pane

0xee27,	// (0x00074fef) scroll_pane_cp09

0xee38,	// (0x00075000) cale_bg_pane_g1

0xee40,	// (0x00075008) cale_bg_pane_g2

0xee48,	// (0x00075010) cale_bg_pane_g3

0xee50,	// (0x00075018) cale_bg_pane_g4

0xee58,	// (0x00075020) cale_bg_pane_g5

0xee60,	// (0x00075028) cale_bg_pane_g6

0xee68,	// (0x00075030) cale_bg_pane_g7

0xee70,	// (0x00075038) cale_bg_pane_g8

0xee78,	// (0x00075040) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x000754c6) cale_bg_pane_g

0x87ed,	// (0x0006e9b5) list_cale_time_pane_ParamLimits

0x87ed,	// (0x0006e9b5) list_cale_time_pane

0x8805,	// (0x0006e9cd) list_cale_time_pane_g1_ParamLimits

0x8805,	// (0x0006e9cd) list_cale_time_pane_g1

0xee80,	// (0x00075048) list_cale_time_pane_g2_ParamLimits

0xee80,	// (0x00075048) list_cale_time_pane_g2

0x8811,	// (0x0006e9d9) list_cale_time_pane_g3_ParamLimits

0x8811,	// (0x0006e9d9) list_cale_time_pane_g3

0x881f,	// (0x0006e9e7) list_cale_time_pane_g4_ParamLimits

0x881f,	// (0x0006e9e7) list_cale_time_pane_g4

0x882d,	// (0x0006e9f5) list_cale_time_pane_g5_ParamLimits

0x882d,	// (0x0006e9f5) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x000754d9) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x000754d9) list_cale_time_pane_g

0x883b,	// (0x0006ea03) list_cale_time_pane_t1_ParamLimits

0x883b,	// (0x0006ea03) list_cale_time_pane_t1

0x8863,	// (0x0006ea2b) list_cale_time_pane_t2_ParamLimits

0x8863,	// (0x0006ea2b) list_cale_time_pane_t2

0x8b78,	// (0x0006ed40) aid_blid_cardinal_pane

0x8bba,	// (0x0006ed82) compass_pane_t4

0x888b,	// (0x0006ea53) list_cale_time_pane_t4_ParamLimits

0x888b,	// (0x0006ea53) list_cale_time_pane_t4

0x8bc8,	// (0x0006ed90) compass_pane_t5

0x8bd8,	// (0x0006eda0) compass_pane_t6

0x8be6,	// (0x0006edae) compass_pane_t7

0x01fb,	// (0x000663c3) navi_pane_cc_t1

0x0362,	// (0x0006652a) aid_phob_thumbnail_center_pane

0x92ef,	// (0x0006f4b7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000754e6) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000754e6) list_cale_time_pane_t

0x6c48,	// (0x0006ce10) bg_popup_window_pane_cp02_ParamLimits

0x6c48,	// (0x0006ce10) bg_popup_window_pane_cp02

0xee9a,	// (0x00075062) heading_pane_cp01_ParamLimits

0xee9a,	// (0x00075062) heading_pane_cp01

0xeea6,	// (0x0007506e) loc_req_pane_ParamLimits

0xeea6,	// (0x0007506e) loc_req_pane

0xeeb6,	// (0x0007507e) loc_type_pane_ParamLimits

0xeeb6,	// (0x0007507e) loc_type_pane

0xeec8,	// (0x00075090) loc_type_pane_t1_ParamLimits

0xeec8,	// (0x00075090) loc_type_pane_t1

0xeeda,	// (0x000750a2) loc_type_pane_t2_ParamLimits

0xeeda,	// (0x000750a2) loc_type_pane_t2

0xeeec,	// (0x000750b4) loc_type_pane_t3_ParamLimits

0xeeec,	// (0x000750b4) loc_type_pane_t3

0x0002,

0xf325,	// (0x000754ed) loc_type_pane_t_ParamLimits

0xf325,	// (0x000754ed) loc_type_pane_t

0xeefe,	// (0x000750c6) list_loc_req_pane

0xef08,	// (0x000750d0) scroll_pane_cp012

0x88b3,	// (0x0006ea7b) list_single_loc_request_popup_menu_pane_ParamLimits

0x88b3,	// (0x0006ea7b) list_single_loc_request_popup_menu_pane

0xef13,	// (0x000750db) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xef13,	// (0x000750db) list_single_loc_request_popup_menu_pane_g1

0xef1f,	// (0x000750e7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xef1f,	// (0x000750e7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x000754f4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x000754f4) list_single_loc_request_popup_menu_pane_g

0xef2b,	// (0x000750f3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xef2b,	// (0x000750f3) list_single_loc_request_popup_menu_pane_t1

0x88c5,	// (0x0006ea8d) bg_popup_window_pane_cp03_ParamLimits

0x88c5,	// (0x0006ea8d) bg_popup_window_pane_cp03

0x88d3,	// (0x0006ea9b) heading_loc_req_pane_ParamLimits

0x88d3,	// (0x0006ea9b) heading_loc_req_pane

0x88df,	// (0x0006eaa7) popup_dyc_status_message_window_g1_ParamLimits

0x88df,	// (0x0006eaa7) popup_dyc_status_message_window_g1

0x88eb,	// (0x0006eab3) popup_dyc_status_message_window_t1_ParamLimits

0x88eb,	// (0x0006eab3) popup_dyc_status_message_window_t1

0x88fd,	// (0x0006eac5) popup_dyc_status_message_window_t2_ParamLimits

0x88fd,	// (0x0006eac5) popup_dyc_status_message_window_t2

0x890f,	// (0x0006ead7) popup_dyc_status_message_window_t3_ParamLimits

0x890f,	// (0x0006ead7) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x000754f9) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x000754f9) popup_dyc_status_message_window_t

0xe5c2,	// (0x0007478a) bg_heading_pane_cp01

0xef41,	// (0x00075109) heading_loc_req_pane_g1

0xef55,	// (0x0007511d) heading_loc_req_pane_g2

0xef5d,	// (0x00075125) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00075500) heading_loc_req_pane_g

0xef65,	// (0x0007512d) heading_loc_req_pane_t1

0xef75,	// (0x0007513d) bg_popup_sub_pane_cp01_ParamLimits

0xef75,	// (0x0007513d) bg_popup_sub_pane_cp01

0xef83,	// (0x0007514b) popup_cale_events_window_g1_ParamLimits

0xef83,	// (0x0007514b) popup_cale_events_window_g1

0xefa3,	// (0x0007516b) popup_cale_events_window_g2_ParamLimits

0xefa3,	// (0x0007516b) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00075534) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00075534) popup_cale_events_window_g

0xefc3,	// (0x0007518b) popup_cale_events_window_t1_ParamLimits

0xefc3,	// (0x0007518b) popup_cale_events_window_t1

0xefd5,	// (0x0007519d) popup_cale_events_window_t2_ParamLimits

0xefd5,	// (0x0007519d) popup_cale_events_window_t2

0xf013,	// (0x000751db) popup_cale_events_window_t3_ParamLimits

0xf013,	// (0x000751db) popup_cale_events_window_t3

0xf04d,	// (0x00075215) popup_cale_events_window_t4_ParamLimits

0xf04d,	// (0x00075215) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00075539) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00075539) popup_cale_events_window_t

0x8939,	// (0x0006eb01) call_type_pane

0x037a,	// (0x00066542) popup_call_status_window_g1

0x8945,	// (0x0006eb0d) popup_call_status_window_g2

0x8951,	// (0x0006eb19) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00075542) popup_call_status_window_g

0xf083,	// (0x0007524b) call_type_pane_g1

0xf08c,	// (0x00075254) call_type_pane_g2

0x0001,

0xf381,	// (0x00075549) call_type_pane_g

0xe5c2,	// (0x0007478a) bg_popup_sub_pane_cp02

0xf095,	// (0x0007525d) listscroll_popup_wml_pane

0xf09d,	// (0x00075265) list_wml_pane

0xf0a7,	// (0x0007526f) scroll_pane_cp013

0xf0b2,	// (0x0007527a) list_single_graphic_popup_wml_pane_ParamLimits

0xf0b2,	// (0x0007527a) list_single_graphic_popup_wml_pane

0xe93d,	// (0x00074b05) list_single_graphic_popup_wml_pane_g1

0xf0c6,	// (0x0007528e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0007554e) list_single_graphic_popup_wml_pane_g

0xf0ce,	// (0x00075296) list_single_graphic_popup_wml_pane_t1

0xf0e4,	// (0x000752ac) aid_call_pane

0xe815,	// (0x000749dd) popup_clock_analogue_window_g1

0xe815,	// (0x000749dd) popup_clock_analogue_window_g2

0x895d,	// (0x0006eb25) popup_clock_analogue_window_g3

0x895d,	// (0x0006eb25) popup_clock_analogue_window_g4

0xe93d,	// (0x00074b05) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00075553) popup_clock_analogue_window_g

0x8965,	// (0x0006eb2d) popup_clock_analogue_window_t1

0x8973,	// (0x0006eb3b) clock_digital_number_pane_ParamLimits

0x8973,	// (0x0006eb3b) clock_digital_number_pane

0x897f,	// (0x0006eb47) clock_digital_number_pane_cp02_ParamLimits

0x897f,	// (0x0006eb47) clock_digital_number_pane_cp02

0x898b,	// (0x0006eb53) clock_digital_number_pane_cp03_ParamLimits

0x898b,	// (0x0006eb53) clock_digital_number_pane_cp03

0x8997,	// (0x0006eb5f) clock_digital_number_pane_cp04_ParamLimits

0x8997,	// (0x0006eb5f) clock_digital_number_pane_cp04

0x89a3,	// (0x0006eb6b) clock_digital_separator_pane_ParamLimits

0x89a3,	// (0x0006eb6b) clock_digital_separator_pane

0x89af,	// (0x0006eb77) popup_clock_digital_window_t1

0xe93d,	// (0x00074b05) clock_digital_number_pane_g1

0xe93d,	// (0x00074b05) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000754c1) clock_digital_number_pane_g

0xe93d,	// (0x00074b05) clock_digital_separator_pane_g1

0xe93d,	// (0x00074b05) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000754c1) clock_digital_separator_pane_g

0xe5c2,	// (0x0007478a) bg_popup_window_pane_cp04

0x005b,	// (0x00066223) heading_pane_cp03

0x0063,	// (0x0006622b) listscroll_popup_gms_pane

0x006b,	// (0x00066233) grid_large_graphic_popup_pane

0x0075,	// (0x0006623d) listscroll_popup_gms_pane_g1

0x007d,	// (0x00066245) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0007555e) listscroll_popup_gms_pane_g

0xec42,	// (0x00074e0a) scroll_pane_cp014

0x89cc,	// (0x0006eb94) cell_large_graphic_popup_pane_ParamLimits

0x89cc,	// (0x0006eb94) cell_large_graphic_popup_pane

0x89e6,	// (0x0006ebae) cell_large_graphic_popup_pane_g1_ParamLimits

0x89e6,	// (0x0006ebae) cell_large_graphic_popup_pane_g1

0x0085,	// (0x0006624d) cell_large_graphic_popup_pane_g2_ParamLimits

0x0085,	// (0x0006624d) cell_large_graphic_popup_pane_g2

0x0091,	// (0x00066259) cell_large_graphic_popup_pane_g3_ParamLimits

0x0091,	// (0x00066259) cell_large_graphic_popup_pane_g3

0x009e,	// (0x00066266) cell_large_graphic_popup_pane_g4_ParamLimits

0x009e,	// (0x00066266) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00075563) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00075563) cell_large_graphic_popup_pane_g

0x00ae,	// (0x00066276) grid_highlight_pane_cp010

0xe93d,	// (0x00074b05) bg_popup_call_pane_g1

0x00b8,	// (0x00066280) list_single_graphic_popup_conf_pane_ParamLimits

0x00b8,	// (0x00066280) list_single_graphic_popup_conf_pane

0x00ca,	// (0x00066292) list_highlight_pane_cp01

0x00d3,	// (0x0006629b) list_single_graphic_popup_conf_pane_g1

0x00db,	// (0x000662a3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0007556c) list_single_graphic_popup_conf_pane_g

0x00e3,	// (0x000662ab) list_single_graphic_popup_conf_pane_t1

0x00f1,	// (0x000662b9) linegrid_cams_pane_g1

0x89f2,	// (0x0006ebba) linegrid_cams_pane_g2

0xea7b,	// (0x00074c43) linegrid_cams_pane_g3

0x00fa,	// (0x000662c2) linegrid_cams_pane_g4

0x89fb,	// (0x0006ebc3) linegrid_cams_pane_g5

0x8a04,	// (0x0006ebcc) linegrid_cams_pane_g6

0xea84,	// (0x00074c4c) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00075571) linegrid_cams_pane_g

0x0103,	// (0x000662cb) popup_clock_analogue_window

0x0103,	// (0x000662cb) popup_clock_digital_window

0xe5c2,	// (0x0007478a) popup_phob_thumbnail_window

0xe93d,	// (0x00074b05) call_video_uplink_pane_g1

0x010c,	// (0x000662d4) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00075580) call_video_uplink_pane_g

0x0114,	// (0x000662dc) video_uplink_pane

0x011c,	// (0x000662e4) mce_image_pane_g1

0x8a0f,	// (0x0006ebd7) mce_image_pane_g2

0x8a19,	// (0x0006ebe1) mce_image_pane_g3

0x8a23,	// (0x0006ebeb) mce_image_pane_g4

0x8a2b,	// (0x0006ebf3) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00075585) mce_image_pane_g

0x0126,	// (0x000662ee) control_top_pane_stacon_cp01_ParamLimits

0x0126,	// (0x000662ee) control_top_pane_stacon_cp01

0x013a,	// (0x00066302) uni_indicator_pane_stacon_cp01_ParamLimits

0x013a,	// (0x00066302) uni_indicator_pane_stacon_cp01

0x014b,	// (0x00066313) bg_popup_sub_pane_cp03

0x8a33,	// (0x0006ebfb) chi_dic_find_pane

0x8a3b,	// (0x0006ec03) listscroll_chi_dic_pane

0x8a44,	// (0x0006ec0c) main_pane_chidic_g1

0x8a57,	// (0x0006ec1f) chi_dic_find_pane_t1

0x0155,	// (0x0006631d) find_chidic_pane

0x015e,	// (0x00066326) chi_dic_list_pane_ParamLimits

0x015e,	// (0x00066326) chi_dic_list_pane

0x016f,	// (0x00066337) scroll_pane_cp020

0x8a65,	// (0x0006ec2d) find_chidic_pane_t1

0xe5c2,	// (0x0007478a) input_focus_pane_cp06

0x8a74,	// (0x0006ec3c) list_chi_dic_pane_ParamLimits

0x8a74,	// (0x0006ec3c) list_chi_dic_pane

0x8a8c,	// (0x0006ec54) list_chi_dic_pane_t1_ParamLimits

0x8a8c,	// (0x0006ec54) list_chi_dic_pane_t1

0xe5c2,	// (0x0007478a) list_highlight_pane_cp020

0x0177,	// (0x0006633f) bg_cale_heading_pane_g1

0x8a9f,	// (0x0006ec67) bg_cale_heading_pane_g2

0x8aa7,	// (0x0006ec6f) bg_cale_heading_pane_g3

0x8aaf,	// (0x0006ec77) bg_cale_heading_pane_g4

0x8ab9,	// (0x0006ec81) bg_cale_heading_pane_g5

0x8ac3,	// (0x0006ec8b) bg_cale_heading_pane_g6

0x8acb,	// (0x0006ec93) bg_cale_heading_pane_g7

0x8ad3,	// (0x0006ec9b) bg_cale_heading_pane_g8

0x8add,	// (0x0006eca5) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00075590) bg_cale_heading_pane_g

0x0177,	// (0x0006633f) bg_cale_side_pane_g1

0x8ae7,	// (0x0006ecaf) bg_cale_side_pane_g2

0x8aef,	// (0x0006ecb7) bg_cale_side_pane_g3

0x8af7,	// (0x0006ecbf) bg_cale_side_pane_g4

0x8aff,	// (0x0006ecc7) bg_cale_side_pane_g5

0x8b07,	// (0x0006eccf) bg_cale_side_pane_g6

0x8b0f,	// (0x0006ecd7) bg_cale_side_pane_g7

0x8b17,	// (0x0006ecdf) bg_cale_side_pane_g8

0x8b1f,	// (0x0006ece7) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x000755a3) bg_cale_side_pane_g

0x8b27,	// (0x0006ecef) popup_call_status_window_ParamLimits

0x8b27,	// (0x0006ecef) popup_call_status_window

0x017f,	// (0x00066347) stacon_top_pane

0x0187,	// (0x0006634f) status_pane_ParamLimits

0x0187,	// (0x0006634f) status_pane

0x019c,	// (0x00066364) status_small_pane

0x01a4,	// (0x0006636c) control_pane

0xe5c2,	// (0x0007478a) stacon_bottom_pane

0x01ac,	// (0x00066374) list_single_mce_smart_pane_t1_ParamLimits

0x01ac,	// (0x00066374) list_single_mce_smart_pane_t1

0x01bf,	// (0x00066387) list_single_mce_smart_pane_t2_ParamLimits

0x01bf,	// (0x00066387) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x000755b6) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x000755b6) list_single_mce_smart_pane_t

0x8b33,	// (0x0006ecfb) compass_pane

0x8b3e,	// (0x0006ed06) main_location2_pane_t1

0x8b52,	// (0x0006ed1a) main_location2_pane_t2

0x8b52,	// (0x0006ed1a) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x000755bb) main_location2_pane_t

0x01de,	// (0x000663a6) compass_pane_g1_ParamLimits

0x01de,	// (0x000663a6) compass_pane_g1

0x8b9c,	// (0x0006ed64) compass_pane_t1

0x8bab,	// (0x0006ed73) compass_pane_t2

0x0005,

0xf3fc,	// (0x000755c4) compass_pane_t

0x8bf6,	// (0x0006edbe) text_secondary_cp61

0x01f2,	// (0x000663ba) navi_pane_cams_g5

0x0215,	// (0x000663dd) navi_pane_im_t1

0x0223,	// (0x000663eb) navi_pane_mp_g1_ParamLimits

0x0223,	// (0x000663eb) navi_pane_mp_g1

0x0237,	// (0x000663ff) navi_pane_mp_g2_ParamLimits

0x0237,	// (0x000663ff) navi_pane_mp_g2

0x0243,	// (0x0006640b) navi_pane_mp_g3_ParamLimits

0x0243,	// (0x0006640b) navi_pane_mp_g3

0x0002,

0xf410,	// (0x000755d8) navi_pane_mp_g_ParamLimits

0xf410,	// (0x000755d8) navi_pane_mp_g

0x024f,	// (0x00066417) navi_pane_mp_t1

0x025d,	// (0x00066425) navi_pane_mp_t2

0x0002,

0xf417,	// (0x000755df) navi_pane_mp_t

0x0299,	// (0x00066461) navi_pane_vt_g1

0x024f,	// (0x00066417) navi_pane_vt_t1

0x02a1,	// (0x00066469) navi_slider_pane

0x02a9,	// (0x00066471) zooming_pane

0x02b1,	// (0x00066479) navi_slider_pane_g1

0x8d0d,	// (0x0006eed5) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x000755e6) navi_slider_pane_g

0x02e7,	// (0x000664af) aid_levels_zoom

0x02ef,	// (0x000664b7) zooming_pane_g1

0x02f7,	// (0x000664bf) zooming_pane_g2

0x02f7,	// (0x000664bf) zooming_pane_g3

0x0002,

0xf42d,	// (0x000755f5) zooming_pane_g

0x02ff,	// (0x000664c7) level_10_zoom

0x0308,	// (0x000664d0) level_11_zoom

0x0311,	// (0x000664d9) level_1_zoom

0x031a,	// (0x000664e2) level_2_zoom

0x0323,	// (0x000664eb) level_3_zoom

0x032c,	// (0x000664f4) level_4_zoom

0x0335,	// (0x000664fd) level_5_zoom

0x033e,	// (0x00066506) level_6_zoom

0x0347,	// (0x0006650f) level_7_zoom

0x0350,	// (0x00066518) level_8_zoom

0x0359,	// (0x00066521) level_9_zoom

0x036a,	// (0x00066532) popup_phob_thumbnail_window_g1

0x0372,	// (0x0006653a) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x000755fc) popup_phob_thumbnail_window_g

0x16bd,	// (0x00067885) level_1_location

0x16c5,	// (0x0006788d) level_2_location

0x16cd,	// (0x00067895) level_3_location

0x16d5,	// (0x0006789d) level_4_location

0x02a9,	// (0x00066471) level_5_location

0x8d1f,	// (0x0006eee7) mce_icon_pane_g1

0x8d27,	// (0x0006eeef) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00075601) mce_icon_pane_g

0x8d2f,	// (0x0006eef7) main_mup_pane_g1_ParamLimits

0x8d2f,	// (0x0006eef7) main_mup_pane_g1

0x8d47,	// (0x0006ef0f) main_mup_pane_g2_ParamLimits

0x8d47,	// (0x0006ef0f) main_mup_pane_g2

0x8d63,	// (0x0006ef2b) main_mup_pane_g3_ParamLimits

0x8d63,	// (0x0006ef2b) main_mup_pane_g3

0x8d7f,	// (0x0006ef47) main_mup_pane_g4_ParamLimits

0x8d7f,	// (0x0006ef47) main_mup_pane_g4

0x8d93,	// (0x0006ef5b) main_mup_pane_g5_ParamLimits

0x8d93,	// (0x0006ef5b) main_mup_pane_g5

0x8db4,	// (0x0006ef7c) main_mup_pane_g6_ParamLimits

0x8db4,	// (0x0006ef7c) main_mup_pane_g6

0x8dd4,	// (0x0006ef9c) main_mup_pane_g7_ParamLimits

0x8dd4,	// (0x0006ef9c) main_mup_pane_g7

0x8df8,	// (0x0006efc0) main_mup_pane_g8_ParamLimits

0x8df8,	// (0x0006efc0) main_mup_pane_g8

0x8e1c,	// (0x0006efe4) main_mup_pane_g9_ParamLimits

0x8e1c,	// (0x0006efe4) main_mup_pane_g9

0x8e3f,	// (0x0006f007) main_mup_pane_g10_ParamLimits

0x8e3f,	// (0x0006f007) main_mup_pane_g10

0x8e62,	// (0x0006f02a) main_mup_pane_g11_ParamLimits

0x8e62,	// (0x0006f02a) main_mup_pane_g11

0x8e82,	// (0x0006f04a) main_mup_pane_g12_ParamLimits

0x8e82,	// (0x0006f04a) main_mup_pane_g12

0x8e90,	// (0x0006f058) main_mup_pane_g13_ParamLimits

0x8e90,	// (0x0006f058) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00075606) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00075606) main_mup_pane_g

0x8ea6,	// (0x0006f06e) main_mup_pane_t1_ParamLimits

0x8ea6,	// (0x0006f06e) main_mup_pane_t1

0x8ec5,	// (0x0006f08d) main_mup_pane_t2_ParamLimits

0x8ec5,	// (0x0006f08d) main_mup_pane_t2

0x8edf,	// (0x0006f0a7) main_mup_pane_t3_ParamLimits

0x8edf,	// (0x0006f0a7) main_mup_pane_t3

0x8ef9,	// (0x0006f0c1) main_mup_pane_t4_ParamLimits

0x8ef9,	// (0x0006f0c1) main_mup_pane_t4

0x8f0b,	// (0x0006f0d3) main_mup_pane_t5_ParamLimits

0x8f0b,	// (0x0006f0d3) main_mup_pane_t5

0x8f1d,	// (0x0006f0e5) main_mup_pane_t6_ParamLimits

0x8f1d,	// (0x0006f0e5) main_mup_pane_t6

0x0005,

0xf459,	// (0x00075621) main_mup_pane_t_ParamLimits

0xf459,	// (0x00075621) main_mup_pane_t

0x8f33,	// (0x0006f0fb) mup_progress_pane_ParamLimits

0x8f33,	// (0x0006f0fb) mup_progress_pane

0x8f3f,	// (0x0006f107) mup_visualizer_pane_ParamLimits

0x8f3f,	// (0x0006f107) mup_visualizer_pane

0x8f7d,	// (0x0006f145) mup_volume_pane_ParamLimits

0x8f7d,	// (0x0006f145) mup_volume_pane

0x037a,	// (0x00066542) mup_visualizer_pane_g1_ParamLimits

0x037a,	// (0x00066542) mup_visualizer_pane_g1

0x037a,	// (0x00066542) mup_visualizer_pane_g2_ParamLimits

0x037a,	// (0x00066542) mup_visualizer_pane_g2

0x01de,	// (0x000663a6) mup_visualizer_pane_g3_ParamLimits

0x01de,	// (0x000663a6) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0007562e) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0007562e) mup_visualizer_pane_g

0xe93d,	// (0x00074b05) mup_volume_pane_g1

0x0390,	// (0x00066558) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00075635) mup_volume_pane_g

0xe93d,	// (0x00074b05) mup_progress_pane_g1

0x0399,	// (0x00066561) mup_progress_pane_g2

0x03a2,	// (0x0006656a) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0007563a) mup_progress_pane_g

0xe5c2,	// (0x0007478a) bg_popup_window_pane_cp05

0x03ab,	// (0x00066573) heading_pane_cp02_ParamLimits

0x03ab,	// (0x00066573) heading_pane_cp02

0x03c7,	// (0x0006658f) list_popup_blid_pane

0x03cf,	// (0x00066597) list_blid_sat_info_pane_ParamLimits

0x03cf,	// (0x00066597) list_blid_sat_info_pane

0x03e2,	// (0x000665aa) list_blid_sat_info_pane_g1

0x03ea,	// (0x000665b2) list_blid_sat_info_pane_t1

0x909c,	// (0x0006f264) mup_equalizer_pane_ParamLimits

0x909c,	// (0x0006f264) mup_equalizer_pane

0x90bd,	// (0x0006f285) mup_equalizer_pane_cp1_ParamLimits

0x90bd,	// (0x0006f285) mup_equalizer_pane_cp1

0x90de,	// (0x0006f2a6) mup_equalizer_pane_cp2_ParamLimits

0x90de,	// (0x0006f2a6) mup_equalizer_pane_cp2

0x90ff,	// (0x0006f2c7) mup_equalizer_pane_cp3_ParamLimits

0x90ff,	// (0x0006f2c7) mup_equalizer_pane_cp3

0x9124,	// (0x0006f2ec) mup_equalizer_pane_cp4_ParamLimits

0x9124,	// (0x0006f2ec) mup_equalizer_pane_cp4

0x9149,	// (0x0006f311) mup_equalizer_pane_cp5

0x9161,	// (0x0006f329) mup_equalizer_pane_cp6

0x9179,	// (0x0006f341) mup_equalizer_pane_cp7

0x15d7,	// (0x0006779f) bg_popup_call_poc_act_pane_g9

0x15df,	// (0x000677a7) bg_popup_call_poc_act_pane_g10

0x15e7,	// (0x000677af) bg_popup_call_poc_act_pane_g11

0x000a,

0xe81d,	// (0x000749e5) mup_scale_pane

0xe93d,	// (0x00074b05) mup_scale_pane_g1

0x03f8,	// (0x000665c0) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00075656) mup_scale_pane_g

0x041c,	// (0x000665e4) msg_data_pane

0x0424,	// (0x000665ec) scroll_pane_cp017

0x593b,	// (0x0006bb03) bg_list_pane_cp04_ParamLimits

0x593b,	// (0x0006bb03) bg_list_pane_cp04

0x042c,	// (0x000665f4) msg_data_pane_g1

0x91a3,	// (0x0006f36b) msg_data_pane_g2

0x91ad,	// (0x0006f375) msg_data_pane_g3

0x91b7,	// (0x0006f37f) msg_data_pane_g4

0x91bf,	// (0x0006f387) msg_data_pane_g5

0x91c7,	// (0x0006f38f) msg_data_pane_g6

0x91cf,	// (0x0006f397) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00075665) msg_data_pane_g

0x5963,	// (0x0006bb2b) msg_text_pane_ParamLimits

0x5963,	// (0x0006bb2b) msg_text_pane

0x91d7,	// (0x0006f39f) qrid_highlight_pane_cp011_ParamLimits

0x91d7,	// (0x0006f39f) qrid_highlight_pane_cp011

0xe5c2,	// (0x0007478a) msg_body_pane

0xe5c2,	// (0x0007478a) msg_header_pane

0x043d,	// (0x00066605) input_focus_pane_cp07

0x599d,	// (0x0006bb65) msg_header_pane_t1_ParamLimits

0x599d,	// (0x0006bb65) msg_header_pane_t1

0x59b1,	// (0x0006bb79) msg_header_pane_t2_ParamLimits

0x59b1,	// (0x0006bb79) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00075679) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00075679) msg_header_pane_t

0x0452,	// (0x0006661a) msg_body_pane_g1

0x59c3,	// (0x0006bb8b) msg_body_pane_t1_ParamLimits

0x59c3,	// (0x0006bb8b) msg_body_pane_t1

0x59f4,	// (0x0006bbbc) msg_body_pane_t2_ParamLimits

0x59f4,	// (0x0006bbbc) msg_body_pane_t2

0x5a06,	// (0x0006bbce) msg_body_pane_t3_ParamLimits

0x5a06,	// (0x0006bbce) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0007567e) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0007567e) msg_body_pane_t

0x923f,	// (0x0006f407) main_viewer_pane_g1_ParamLimits

0x923f,	// (0x0006f407) main_viewer_pane_g1

0x924b,	// (0x0006f413) main_viewer_pane_g2_ParamLimits

0x924b,	// (0x0006f413) main_viewer_pane_g2

0x9257,	// (0x0006f41f) main_viewer_pane_g3_ParamLimits

0x9257,	// (0x0006f41f) main_viewer_pane_g3

0x9268,	// (0x0006f430) main_viewer_pane_g4_ParamLimits

0x9268,	// (0x0006f430) main_viewer_pane_g4

0x9279,	// (0x0006f441) main_viewer_pane_g5_ParamLimits

0x9279,	// (0x0006f441) main_viewer_pane_g5

0x9279,	// (0x0006f441) main_viewer_pane_g7_ParamLimits

0x9279,	// (0x0006f441) main_viewer_pane_g7

0x928b,	// (0x0006f453) main_viewer_pane_g8_ParamLimits

0x928b,	// (0x0006f453) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0007568e) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0007568e) main_viewer_pane_g

0x049c,	// (0x00066664) viewer_content_pane_ParamLimits

0x049c,	// (0x00066664) viewer_content_pane

0x92c3,	// (0x0006f48b) main_postcard_pane_g1_ParamLimits

0x92c3,	// (0x0006f48b) main_postcard_pane_g1

0x92d1,	// (0x0006f499) main_postcard_pane_g2_ParamLimits

0x92d1,	// (0x0006f499) main_postcard_pane_g2

0x92df,	// (0x0006f4a7) main_postcard_pane_g3_ParamLimits

0x92df,	// (0x0006f4a7) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0007569f) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0007569f) main_postcard_pane_g

0x92ef,	// (0x0006f4b7) main_postcard_pane_g4

0x17f4,	// (0x000679bc) smil_status_volume_pane_g2

0x931b,	// (0x0006f4e3) postcard_pane_ParamLimits

0x931b,	// (0x0006f4e3) postcard_pane

0x037a,	// (0x00066542) postcard_pane_g1_ParamLimits

0x037a,	// (0x00066542) postcard_pane_g1

0x9355,	// (0x0006f51d) postcard_pane_g2_ParamLimits

0x9355,	// (0x0006f51d) postcard_pane_g2

0x9361,	// (0x0006f529) postcard_pane_g3_ParamLimits

0x9361,	// (0x0006f529) postcard_pane_g3

0x04b8,	// (0x00066680) postcard_pane_g4_ParamLimits

0x04b8,	// (0x00066680) postcard_pane_g4

0x936d,	// (0x0006f535) postcard_pane_g5_ParamLimits

0x936d,	// (0x0006f535) postcard_pane_g5

0x9379,	// (0x0006f541) postcard_pane_g6_ParamLimits

0x9379,	// (0x0006f541) postcard_pane_g6

0x04aa,	// (0x00066672) postcard_pane_g7_ParamLimits

0x04aa,	// (0x00066672) postcard_pane_g7

0x0006,

0xf4e4,	// (0x000756ac) postcard_pane_g_ParamLimits

0xf4e4,	// (0x000756ac) postcard_pane_g

0x9387,	// (0x0006f54f) main_mp2_pane_g1_ParamLimits

0x9387,	// (0x0006f54f) main_mp2_pane_g1

0x9395,	// (0x0006f55d) main_mp2_pane_g2_ParamLimits

0x9395,	// (0x0006f55d) main_mp2_pane_g2

0x93a1,	// (0x0006f569) main_mp2_pane_g3_ParamLimits

0x93a1,	// (0x0006f569) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x000756bb) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x000756bb) main_mp2_pane_g

0x93ad,	// (0x0006f575) main_mp2_pane_t1_ParamLimits

0x93ad,	// (0x0006f575) main_mp2_pane_t1

0x93c4,	// (0x0006f58c) main_mp2_pane_t2_ParamLimits

0x93c4,	// (0x0006f58c) main_mp2_pane_t2

0x93d8,	// (0x0006f5a0) main_mp2_pane_t3_ParamLimits

0x93d8,	// (0x0006f5a0) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x000756c2) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x000756c2) main_mp2_pane_t

0x04c6,	// (0x0006668e) pec_content_pane_ParamLimits

0x04c6,	// (0x0006668e) pec_content_pane

0xec42,	// (0x00074e0a) scroll_pane_cp015

0x04d8,	// (0x000666a0) pec_attribute_pane_ParamLimits

0x04d8,	// (0x000666a0) pec_attribute_pane

0x93ea,	// (0x0006f5b2) pec_content_pane_g1_ParamLimits

0x93ea,	// (0x0006f5b2) pec_content_pane_g1

0x04e8,	// (0x000666b0) pec_content_pane_t1_ParamLimits

0x04e8,	// (0x000666b0) pec_content_pane_t1

0x04fa,	// (0x000666c2) pec_content_pane_t2_ParamLimits

0x04fa,	// (0x000666c2) pec_content_pane_t2

0x0001,

0xf501,	// (0x000756c9) pec_content_pane_t_ParamLimits

0xf501,	// (0x000756c9) pec_content_pane_t

0x93f6,	// (0x0006f5be) list_single_graphic_pane_cp01_ParamLimits

0x93f6,	// (0x0006f5be) list_single_graphic_pane_cp01

0xe81d,	// (0x000749e5) bg_popup_sub_pane_cp04

0x050c,	// (0x000666d4) popup_mup_playback_window_g1

0x0518,	// (0x000666e0) popup_mup_playback_window_t1

0x052d,	// (0x000666f5) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x000756ce) popup_mup_playback_window_t

0x0564,	// (0x0006672c) main_image_pane_g1_ParamLimits

0x0564,	// (0x0006672c) main_image_pane_g1

0x05a7,	// (0x0006676f) scroll_pane_cp018_ParamLimits

0x05a7,	// (0x0006676f) scroll_pane_cp018

0x05bf,	// (0x00066787) scroll_pane_cp016_ParamLimits

0x05bf,	// (0x00066787) scroll_pane_cp016

0x9487,	// (0x0006f64f) smil2_image_pane_ParamLimits

0x9487,	// (0x0006f64f) smil2_image_pane

0x94bd,	// (0x0006f685) smil2_root_pane_ParamLimits

0x94bd,	// (0x0006f685) smil2_root_pane

0x94e9,	// (0x0006f6b1) smil2_text_pane_ParamLimits

0x94e9,	// (0x0006f6b1) smil2_text_pane

0xe5c2,	// (0x0007478a) bg_list_pane_cp06

0x05fb,	// (0x000667c3) grid_radio_pane

0xe5c2,	// (0x0007478a) bg_popup_window_pane_cp06

0x0605,	// (0x000667cd) main_fmradio_pane_t1

0x005b,	// (0x00066223) heading_pane_cp04

0x0613,	// (0x000667db) main_fmradio_pane_t2

0x15ef,	// (0x000677b7) popup_cale_lunar_info_window_g1

0x0621,	// (0x000667e9) main_fmradio_pane_t3

0x15f7,	// (0x000677bf) popup_cale_lunar_info_window_g2

0x0631,	// (0x000667f9) main_fmradio_pane_t4

0x0001,

0x063f,	// (0x00066807) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x000757a9) popup_cale_lunar_info_window_g

0xf51b,	// (0x000756e3) main_fmradio_pane_t

0x064d,	// (0x00066815) wait_bar_pane_cp03

0x0655,	// (0x0006681d) cell_fmradio_pane_ParamLimits

0x0655,	// (0x0006681d) cell_fmradio_pane

0x04aa,	// (0x00066672) cell_fmradio_pane_g1_ParamLimits

0x04aa,	// (0x00066672) cell_fmradio_pane_g1

0xe5c2,	// (0x0007478a) grid_highlight_pane_cp011

0x066a,	// (0x00066832) poc_content_pane_ParamLimits

0x066a,	// (0x00066832) poc_content_pane

0x067c,	// (0x00066844) scroll_pane_cp019

0x9529,	// (0x0006f6f1) popup_call_poc_act_window_ParamLimits

0x9529,	// (0x0006f6f1) popup_call_poc_act_window

0x9536,	// (0x0006f6fe) popup_call_poc_inact_window_ParamLimits

0x9536,	// (0x0006f6fe) popup_call_poc_inact_window

0xf5b8,	// (0x00075780) bg_popup_call_poc_act_pane_g

0x1567,	// (0x0006772f) bg_popup_call_poc_inact_pane_g1

0x156f,	// (0x00067737) bg_popup_call_poc_inact_pane_g2

0x0684,	// (0x0006684c) popup_call_poc_act_window_g2

0x1577,	// (0x0006773f) bg_popup_call_poc_inact_pane_g3

0x157f,	// (0x00067747) bg_popup_call_poc_inact_pane_g4

0x1587,	// (0x0006774f) bg_popup_call_poc_inact_pane_g5

0x068c,	// (0x00066854) popup_call_poc_act_window_t1_ParamLimits

0x068c,	// (0x00066854) popup_call_poc_act_window_t1

0x06b4,	// (0x0006687c) popup_call_poc_act_window_t2_ParamLimits

0x06b4,	// (0x0006687c) popup_call_poc_act_window_t2

0x06dc,	// (0x000668a4) popup_call_poc_act_window_t3_ParamLimits

0x06dc,	// (0x000668a4) popup_call_poc_act_window_t3

0x0704,	// (0x000668cc) popup_call_poc_act_window_t4_ParamLimits

0x0704,	// (0x000668cc) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x000756ee) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x000756ee) popup_call_poc_act_window_t

0x158f,	// (0x00067757) bg_popup_call_poc_inact_pane_g6

0x1597,	// (0x0006775f) bg_popup_call_poc_inact_pane_g7

0x159f,	// (0x00067767) bg_popup_call_poc_inact_pane_g8

0x0716,	// (0x000668de) popup_call_poc_inact_window_g2

0x15a7,	// (0x0006776f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0007576d) bg_popup_call_poc_inact_pane_g

0x071e,	// (0x000668e6) popup_call_poc_inact_window_t1_ParamLimits

0x071e,	// (0x000668e6) popup_call_poc_inact_window_t1

0x0733,	// (0x000668fb) popup_call_poc_inact_window_t2_ParamLimits

0x0733,	// (0x000668fb) popup_call_poc_inact_window_t2

0x0748,	// (0x00066910) popup_call_poc_inact_window_t3_ParamLimits

0x0748,	// (0x00066910) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x000756f7) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x000756f7) popup_call_poc_inact_window_t

0x1767,	// (0x0006792f) context_pane_ParamLimits

0x9b56,	// (0x0006fd1e) signal_pane_ParamLimits

0x02a9,	// (0x00066471) main_call2_pane

0x1755,	// (0x0006791d) popup_phob_thumbnail2_window_ParamLimits

0x1755,	// (0x0006791d) popup_phob_thumbnail2_window

0x91ed,	// (0x0006f3b5) aid_hotspot_pointer_arrow_pane

0x91f5,	// (0x0006f3bd) aid_hotspot_pointer_hand_pane

0x985e,	// (0x0006fa26) phob_pre_status_pane_g5

0x772e,	// (0x0006d8f6) cams_zoom_pane_ParamLimits

0x773a,	// (0x0006d902) image_vga_pane_ParamLimits

0x7749,	// (0x0006d911) main_camera_pane_g1_ParamLimits

0x7757,	// (0x0006d91f) main_camera_pane_g2_ParamLimits

0x7763,	// (0x0006d92b) main_camera_pane_g3_ParamLimits

0x7771,	// (0x0006d939) main_camera_pane_g4_ParamLimits

0x777f,	// (0x0006d947) main_camera_pane_g5_ParamLimits

0x778d,	// (0x0006d955) main_camera_pane_g6_ParamLimits

0x779b,	// (0x0006d963) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x000753f6) main_camera_pane_g_ParamLimits

0x77a9,	// (0x0006d971) main_camera_pane_t1_ParamLimits

0x77bb,	// (0x0006d983) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00075407) main_camera_pane_t_ParamLimits

0xe81d,	// (0x000749e5) bg_popup_preview_window_pane_cp01_ParamLimits

0xe81d,	// (0x000749e5) bg_popup_preview_window_pane_cp01

0x075d,	// (0x00066925) popup_phob_thumbnail2_window_g1_ParamLimits

0x075d,	// (0x00066925) popup_phob_thumbnail2_window_g1

0xe5c2,	// (0x0007478a) call2_cli_visual_pane

0x9552,	// (0x0006f71a) popup_call2_audio_conf_window_ParamLimits

0x9552,	// (0x0006f71a) popup_call2_audio_conf_window

0x956b,	// (0x0006f733) popup_call2_audio_first_window_ParamLimits

0x956b,	// (0x0006f733) popup_call2_audio_first_window

0x9609,	// (0x0006f7d1) popup_call2_audio_in_window_ParamLimits

0x9609,	// (0x0006f7d1) popup_call2_audio_in_window

0x964d,	// (0x0006f815) popup_call2_audio_out_window_ParamLimits

0x964d,	// (0x0006f815) popup_call2_audio_out_window

0x96b7,	// (0x0006f87f) popup_call2_audio_second_window_ParamLimits

0x96b7,	// (0x0006f87f) popup_call2_audio_second_window

0x9715,	// (0x0006f8dd) popup_call2_audio_wait_window_ParamLimits

0x9715,	// (0x0006f8dd) popup_call2_audio_wait_window

0xe5c2,	// (0x0007478a) bg_popup_call2_act_pane_cp03

0xe7ff,	// (0x000749c7) list_conf_pane_cp

0x0769,	// (0x00066931) popup_call2_audio_conf_window_t1

0x0777,	// (0x0006693f) list_single_graphic_popup_conf2_pane_ParamLimits

0x0777,	// (0x0006693f) list_single_graphic_popup_conf2_pane

0x00ca,	// (0x00066292) list_highlight_pane_cp04

0x078a,	// (0x00066952) list_single_graphic_popup_conf2_pane_g1

0x00db,	// (0x000662a3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x000756fe) list_single_graphic_popup_conf2_pane_g

0x0794,	// (0x0006695c) list_single_graphic_popup_conf2_pane_t1

0x07a2,	// (0x0006696a) bg_popup_call2_act_pane_cp01_ParamLimits

0x07a2,	// (0x0006696a) bg_popup_call2_act_pane_cp01

0x082c,	// (0x000669f4) call_type_pane_cp05_ParamLimits

0x082c,	// (0x000669f4) call_type_pane_cp05

0x0880,	// (0x00066a48) popup_call2_audio_second_window_g1_ParamLimits

0x0880,	// (0x00066a48) popup_call2_audio_second_window_g1

0x08d4,	// (0x00066a9c) popup_call2_audio_second_window_g2_ParamLimits

0x08d4,	// (0x00066a9c) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00075703) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00075703) popup_call2_audio_second_window_g

0x0939,	// (0x00066b01) popup_call2_audio_second_window_t1_ParamLimits

0x0939,	// (0x00066b01) popup_call2_audio_second_window_t1

0x09f4,	// (0x00066bbc) popup_call2_audio_second_window_t2_ParamLimits

0x09f4,	// (0x00066bbc) popup_call2_audio_second_window_t2

0x0a47,	// (0x00066c0f) popup_call2_audio_second_window_t3_ParamLimits

0x0a47,	// (0x00066c0f) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0007570a) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0007570a) popup_call2_audio_second_window_t

0xe5c2,	// (0x0007478a) bg_popup_call2_in_pane_cp02

0xe5cc,	// (0x00074794) call_type_pane_cp04

0xe5d4,	// (0x0007479c) popup_call2_audio_wait_window_g1

0xe5dc,	// (0x000747a4) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000752e3) popup_call2_audio_wait_window_g

0xe5e4,	// (0x000747ac) popup_call2_audio_wait_window_t3

0x0b3a,	// (0x00066d02) bg_popup_call2_act_pane_ParamLimits

0x0b3a,	// (0x00066d02) bg_popup_call2_act_pane

0x0bfa,	// (0x00066dc2) call_type_pane_cp03_ParamLimits

0x0bfa,	// (0x00066dc2) call_type_pane_cp03

0x0c5e,	// (0x00066e26) popup_call2_audio_first_window_g1_ParamLimits

0x0c5e,	// (0x00066e26) popup_call2_audio_first_window_g1

0x0cce,	// (0x00066e96) popup_call2_audio_first_window_g2_ParamLimits

0x0cce,	// (0x00066e96) popup_call2_audio_first_window_g2

0x037a,	// (0x00066542) popup_call2_audio_first_window_g3_ParamLimits

0x037a,	// (0x00066542) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00075713) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00075713) popup_call2_audio_first_window_g

0x0dac,	// (0x00066f74) popup_call2_audio_first_window_t1_ParamLimits

0x0dac,	// (0x00066f74) popup_call2_audio_first_window_t1

0x0eaf,	// (0x00067077) popup_call2_audio_first_window_t4_ParamLimits

0x0eaf,	// (0x00067077) popup_call2_audio_first_window_t4

0x0f92,	// (0x0006715a) popup_call2_audio_first_window_t5_ParamLimits

0x0f92,	// (0x0006715a) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0007571e) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0007571e) popup_call2_audio_first_window_t

0xe815,	// (0x000749dd) bg_popup_call2_act_pane_g1

0x1601,	// (0x000677c9) popup_cale_lunar_info_window_t1

0x160f,	// (0x000677d7) popup_cale_lunar_info_window_t2

0x161d,	// (0x000677e5) popup_cale_lunar_info_window_t3

0xe5c2,	// (0x0007478a) bg_popup_call2_bubble_pane

0x1093,	// (0x0006725b) bg_popup_call2_in_pane_cp01_ParamLimits

0x1093,	// (0x0006725b) bg_popup_call2_in_pane_cp01

0xe27e,	// (0x00074446) call_type_pane_cp02

0x10db,	// (0x000672a3) popup_call2_audio_out_window_g1_ParamLimits

0x10db,	// (0x000672a3) popup_call2_audio_out_window_g1

0x1107,	// (0x000672cf) popup_call2_audio_out_window_g2_ParamLimits

0x1107,	// (0x000672cf) popup_call2_audio_out_window_g2

0x112f,	// (0x000672f7) popup_call2_audio_out_window_g3_ParamLimits

0x112f,	// (0x000672f7) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00075727) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00075727) popup_call2_audio_out_window_g

0x116a,	// (0x00067332) popup_call2_audio_out_window_t1_ParamLimits

0x116a,	// (0x00067332) popup_call2_audio_out_window_t1

0x11c9,	// (0x00067391) popup_call2_audio_out_window_t2_ParamLimits

0x11c9,	// (0x00067391) popup_call2_audio_out_window_t2

0x121d,	// (0x000673e5) popup_call2_audio_out_window_t3_ParamLimits

0x121d,	// (0x000673e5) popup_call2_audio_out_window_t3

0x1233,	// (0x000673fb) popup_call2_audio_out_window_t4_ParamLimits

0x1233,	// (0x000673fb) popup_call2_audio_out_window_t4

0x1249,	// (0x00067411) popup_call2_audio_out_window_t5_ParamLimits

0x1249,	// (0x00067411) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00075730) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00075730) popup_call2_audio_out_window_t

0x12ad,	// (0x00067475) bg_popup_call2_in_pane_ParamLimits

0x12ad,	// (0x00067475) bg_popup_call2_in_pane

0x1309,	// (0x000674d1) popup_call2_audio_in_window_g1_ParamLimits

0x1309,	// (0x000674d1) popup_call2_audio_in_window_g1

0x1341,	// (0x00067509) popup_call2_audio_in_window_g2_ParamLimits

0x1341,	// (0x00067509) popup_call2_audio_in_window_g2

0x1379,	// (0x00067541) popup_call2_audio_in_window_g3_ParamLimits

0x1379,	// (0x00067541) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0007573d) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0007573d) popup_call2_audio_in_window_g

0x13d1,	// (0x00067599) popup_call2_audio_in_window_t1_ParamLimits

0x13d1,	// (0x00067599) popup_call2_audio_in_window_t1

0x1451,	// (0x00067619) popup_call2_audio_in_window_t2_ParamLimits

0x1451,	// (0x00067619) popup_call2_audio_in_window_t2

0x14d1,	// (0x00067699) popup_call2_audio_in_window_t3_ParamLimits

0x14d1,	// (0x00067699) popup_call2_audio_in_window_t3

0x14eb,	// (0x000676b3) popup_call2_audio_in_window_t4_ParamLimits

0x14eb,	// (0x000676b3) popup_call2_audio_in_window_t4

0x14fd,	// (0x000676c5) popup_call2_audio_in_window_t5_ParamLimits

0x14fd,	// (0x000676c5) popup_call2_audio_in_window_t5

0x1512,	// (0x000676da) popup_call2_audio_in_window_t6_ParamLimits

0x1512,	// (0x000676da) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00075746) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00075746) popup_call2_audio_in_window_t

0xe815,	// (0x000749dd) bg_popup_call2_in_pane_g1

0x162b,	// (0x000677f3) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x000757ae) popup_cale_lunar_info_window_t

0xe81d,	// (0x000749e5) bg_popup_call2_rect_pane_ParamLimits

0xe81d,	// (0x000749e5) bg_popup_call2_rect_pane

0xe5c2,	// (0x0007478a) call2_cli_visual_graphic_pane

0xe5c2,	// (0x0007478a) call2_cli_visual_text_pane

0x9bdb,	// (0x0006fda3) smil_status_volume_pane_g3

0x0002,

0xe93d,	// (0x00074b05) call2_cli_visual_graphic_pane_g1

0xe93d,	// (0x00074b05) call2_cli_visual_graphic_pane_g2

0xe93d,	// (0x00074b05) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00075753) call2_cli_visual_graphic_pane_g

0x1527,	// (0x000676ef) bg_popup_call2_rect_pane_g1

0xe9db,	// (0x00074ba3) bg_popup_call2_rect_pane_g2

0x152f,	// (0x000676f7) bg_popup_call2_rect_pane_g3

0x1537,	// (0x000676ff) bg_popup_call2_rect_pane_g4

0x153f,	// (0x00067707) bg_popup_call2_rect_pane_g5

0x1547,	// (0x0006770f) bg_popup_call2_rect_pane_g6

0x154f,	// (0x00067717) bg_popup_call2_rect_pane_g7

0x1557,	// (0x0006771f) bg_popup_call2_rect_pane_g8

0x155f,	// (0x00067727) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0007575a) bg_popup_call2_rect_pane_g

0x1567,	// (0x0006772f) bg_popup_call2_bubble_pane_g1

0x156f,	// (0x00067737) bg_popup_call2_bubble_pane_g2

0x1577,	// (0x0006773f) bg_popup_call2_bubble_pane_g3

0x157f,	// (0x00067747) bg_popup_call2_bubble_pane_g4

0x1587,	// (0x0006774f) bg_popup_call2_bubble_pane_g5

0x158f,	// (0x00067757) bg_popup_call2_bubble_pane_g6

0x1597,	// (0x0006775f) bg_popup_call2_bubble_pane_g7

0x159f,	// (0x00067767) bg_popup_call2_bubble_pane_g8

0x15a7,	// (0x0006776f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0007576d) bg_popup_call2_bubble_pane_g

0x71c5,	// (0x0006d38d) aid_cale_week_size_cell_pane

0x77cf,	// (0x0006d997) aid_cams_cif_uncrop_pane_ParamLimits

0x77cf,	// (0x0006d997) aid_cams_cif_uncrop_pane

0x792c,	// (0x0006daf4) aid_cams_size_cell_ParamLimits

0x792c,	// (0x0006daf4) aid_cams_size_cell

0x7938,	// (0x0006db00) grid_cams_pane_ParamLimits

0x7946,	// (0x0006db0e) linegrid_cams_pane_ParamLimits

0x7a19,	// (0x0006dbe1) call_video_pane_t1

0x7a36,	// (0x0006dbfe) call_video_pane_t2

0x0001,

0xf292,	// (0x0007545a) call_video_pane_t

0x7f11,	// (0x0006e0d9) aid_cale_month_size_cell_pane_ParamLimits

0x7f11,	// (0x0006e0d9) aid_cale_month_size_cell_pane

0xf62f,	// (0x000757f7) smil_status_volume_pane_g

0x9be8,	// (0x0006fdb0) volume_smil_pane_ParamLimits

0x6897,	// (0x0006ca5f) aid_popup2_width_pane

0x70e1,	// (0x0006d2a9) cell_qdial_pane_g4_ParamLimits

0x70e1,	// (0x0006d2a9) cell_qdial_pane_g4

0x8b78,	// (0x0006ed40) aid_blid_cardinal_pane_ParamLimits

0x8b88,	// (0x0006ed50) aid_blid_destination_pane_ParamLimits

0x8b88,	// (0x0006ed50) aid_blid_destination_pane

0xe81d,	// (0x000749e5) bg_popup_call_poc_act_pane_ParamLimits

0xe81d,	// (0x000749e5) bg_popup_call_poc_act_pane

0xe81d,	// (0x000749e5) bg_popup_call_poc_inact_pane_ParamLimits

0xe81d,	// (0x000749e5) bg_popup_call_poc_inact_pane

0x15af,	// (0x00067777) bg_popup_call_poc_act_pane_g1

0x15b7,	// (0x0006777f) bg_popup_call_poc_act_pane_g2

0x15bf,	// (0x00067787) bg_popup_call_poc_act_pane_g3

0x157f,	// (0x00067747) bg_popup_call_poc_act_pane_g4

0x1587,	// (0x0006774f) bg_popup_call_poc_act_pane_g5

0x15c7,	// (0x0006778f) bg_popup_call_poc_act_pane_g6

0x1597,	// (0x0006775f) bg_popup_call_poc_act_pane_g7

0x15cf,	// (0x00067797) bg_popup_call_poc_act_pane_g8

0xe5c2,	// (0x0007478a) main_usb_pane

0x172c,	// (0x000678f4) popup_cale_lunar_info_window

0x7d4e,	// (0x0006df16) im_reading_pane_t1_ParamLimits

0xeb9a,	// (0x00074d62) list_im_pane_ParamLimits

0xebab,	// (0x00074d73) scroll_pane_cp07_ParamLimits

0xe5c2,	// (0x0007478a) grid_highlight_pane_cp012

0xe81d,	// (0x000749e5) mup_scale_pane_ParamLimits

0x037a,	// (0x00066542) main_usb_pane_g1_ParamLimits

0x037a,	// (0x00066542) main_usb_pane_g1

0x9781,	// (0x0006f949) main_usb_pane_g2_ParamLimits

0x9781,	// (0x0006f949) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00075797) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00075797) main_usb_pane_g

0x978d,	// (0x0006f955) main_usb_pane_t1_ParamLimits

0x978d,	// (0x0006f955) main_usb_pane_t1

0x979f,	// (0x0006f967) main_usb_pane_t2_ParamLimits

0x979f,	// (0x0006f967) main_usb_pane_t2

0x97b1,	// (0x0006f979) main_usb_pane_t3_ParamLimits

0x97b1,	// (0x0006f979) main_usb_pane_t3

0x97c3,	// (0x0006f98b) main_usb_pane_t4_ParamLimits

0x97c3,	// (0x0006f98b) main_usb_pane_t4

0x97d5,	// (0x0006f99d) main_usb_pane_t5_ParamLimits

0x97d5,	// (0x0006f99d) main_usb_pane_t5

0x97e7,	// (0x0006f9af) main_usb_pane_t6_ParamLimits

0x97e7,	// (0x0006f9af) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0007579c) main_usb_pane_t_ParamLimits

0x8b33,	// (0x0006ecfb) aid_text_placing

0x8b3e,	// (0x0006ed06) main_location2_pane_t1_ParamLimits

0x8b52,	// (0x0006ed1a) main_location2_pane_t2_ParamLimits

0x8b52,	// (0x0006ed1a) main_location2_pane_t3_ParamLimits

0x8b66,	// (0x0006ed2e) main_location2_pane_t4_ParamLimits

0x8b66,	// (0x0006ed2e) main_location2_pane_t4

0xf3f3,	// (0x000755bb) main_location2_pane_t_ParamLimits

0xe859,	// (0x00074a21) find_pinb_pane_g2_ParamLimits

0xe859,	// (0x00074a21) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00075309) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00075309) find_pinb_pane_g

0xe865,	// (0x00074a2d) find_pinb_pane_t1_ParamLimits

0xe877,	// (0x00074a3f) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0007530e) find_pinb_pane_t_ParamLimits

0xe5c2,	// (0x0007478a) main_call3_pane

0x826d,	// (0x0006e435) cale_month_day_heading_pane_t1_ParamLimits

0x82cb,	// (0x0006e493) cale_month_day_heading_pane_t2_ParamLimits

0x8330,	// (0x0006e4f8) cale_month_day_heading_pane_t3_ParamLimits

0x8395,	// (0x0006e55d) cale_month_day_heading_pane_t4_ParamLimits

0x83fa,	// (0x0006e5c2) cale_month_day_heading_pane_t5_ParamLimits

0x8467,	// (0x0006e62f) cale_month_day_heading_pane_t6_ParamLimits

0x84dc,	// (0x0006e6a4) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00075492) cale_month_day_heading_pane_t_ParamLimits

0xedeb,	// (0x00074fb3) smil_status_volume_pane

0x9339,	// (0x0006f501) postcard_address_pane_ParamLimits

0x9339,	// (0x0006f501) postcard_address_pane

0x9347,	// (0x0006f50f) postcard_message_pane_ParamLimits

0x9347,	// (0x0006f50f) postcard_message_pane

0x9754,	// (0x0006f91c) call2_cli_visual_pane_t1_ParamLimits

0x9754,	// (0x0006f91c) call2_cli_visual_pane_t1

0x9d2e,	// (0x0006fef6) postcard_message_pane_t1_ParamLimits

0x9d2e,	// (0x0006fef6) postcard_message_pane_t1

0x183c,	// (0x00067a04) postcard_address_pane_t1_ParamLimits

0x183c,	// (0x00067a04) postcard_address_pane_t1

0x9d1f,	// (0x0006fee7) popup_call3_audio_in_window_ParamLimits

0x9d1f,	// (0x0006fee7) popup_call3_audio_in_window

0x9bfd,	// (0x0006fdc5) bg_popup_call3_in_pane_ParamLimits

0x9bfd,	// (0x0006fdc5) bg_popup_call3_in_pane

0x9c65,	// (0x0006fe2d) popup_call3_audio_in_window_g1_ParamLimits

0x9c65,	// (0x0006fe2d) popup_call3_audio_in_window_g1

0x9c7d,	// (0x0006fe45) popup_call3_audio_in_window_g2_ParamLimits

0x9c7d,	// (0x0006fe45) popup_call3_audio_in_window_g2

0x9c95,	// (0x0006fe5d) popup_call3_audio_in_window_g3_ParamLimits

0x9c95,	// (0x0006fe5d) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x000757fe) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x000757fe) popup_call3_audio_in_window_g

0x9cbd,	// (0x0006fe85) popup_call3_audio_in_window_t1_ParamLimits

0x9cbd,	// (0x0006fe85) popup_call3_audio_in_window_t1

0x9ce5,	// (0x0006fead) popup_call3_audio_in_window_t2_ParamLimits

0x9ce5,	// (0x0006fead) popup_call3_audio_in_window_t2

0x9d0d,	// (0x0006fed5) popup_call3_audio_in_window_t3_ParamLimits

0x9d0d,	// (0x0006fed5) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00075807) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00075807) popup_call3_audio_in_window_t

0x02a9,	// (0x00066471) bg_popup_call3_rect_pane

0x1527,	// (0x000676ef) bg_popup_call3_rect_pane_g1

0xe9db,	// (0x00074ba3) bg_popup_call3_rect_pane_g2

0x152f,	// (0x000676f7) bg_popup_call3_rect_pane_g3

0x1537,	// (0x000676ff) bg_popup_call3_rect_pane_g4

0x153f,	// (0x00067707) bg_popup_call3_rect_pane_g5

0x1547,	// (0x0006770f) bg_popup_call3_rect_pane_g6

0x154f,	// (0x00067717) bg_popup_call3_rect_pane_g7

0x8f98,	// (0x0006f160) mup_visualizer_osc_pane

0x0388,	// (0x00066550) mup_visualizer_spec_pane

0x9c1d,	// (0x0006fde5) call3_video_qcif_pane_ParamLimits

0x9c1d,	// (0x0006fde5) call3_video_qcif_pane

0x9c2f,	// (0x0006fdf7) call3_video_qcif_uncrop_pane_ParamLimits

0x9c2f,	// (0x0006fdf7) call3_video_qcif_uncrop_pane

0x9c3f,	// (0x0006fe07) call3_video_subqcif_pane_ParamLimits

0x9c3f,	// (0x0006fe07) call3_video_subqcif_pane

0x9c53,	// (0x0006fe1b) call3_video_subqcif_uncrop_pane_ParamLimits

0x9c53,	// (0x0006fe1b) call3_video_subqcif_uncrop_pane

0x9cad,	// (0x0006fe75) popup_call3_audio_in_window_g4_ParamLimits

0x9cad,	// (0x0006fe75) popup_call3_audio_in_window_g4

0x9bca,	// (0x0006fd92) mup_spec_half_pane

0x9bd3,	// (0x0006fd9b) mup_spec_half_pane_cp

0x17da,	// (0x000679a2) mup_osc_middle_pane

0x17e3,	// (0x000679ab) mup_visualizer_osc_pane_g1

0x9baa,	// (0x0006fd72) mup_spec_bar_pane_ParamLimits

0x9baa,	// (0x0006fd72) mup_spec_bar_pane

0x17c7,	// (0x0006798f) mup_spec_bar_pane_g1

0x17d1,	// (0x00067999) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000757f2) mup_spec_bar_pane_g

0x71c5,	// (0x0006d38d) aid_cale_week_size_cell_pane_ParamLimits

0x71d8,	// (0x0006d3a0) bg_cale_heading_pane_ParamLimits

0xea0f,	// (0x00074bd7) bg_cale_pane_cp01_ParamLimits

0x71ec,	// (0x0006d3b4) cale_week_corner_pane_ParamLimits

0x7202,	// (0x0006d3ca) cale_week_day_heading_pane_ParamLimits

0x7216,	// (0x0006d3de) cale_week_scroll_pane_g1_ParamLimits

0x7227,	// (0x0006d3ef) cale_week_scroll_pane_g2_ParamLimits

0x7238,	// (0x0006d400) cale_week_scroll_pane_g3_ParamLimits

0x7249,	// (0x0006d411) cale_week_scroll_pane_g4_ParamLimits

0x725a,	// (0x0006d422) cale_week_scroll_pane_g5_ParamLimits

0x726b,	// (0x0006d433) cale_week_scroll_pane_g6_ParamLimits

0x727e,	// (0x0006d446) cale_week_scroll_pane_g7_ParamLimits

0x7291,	// (0x0006d459) cale_week_scroll_pane_g8_ParamLimits

0x72a4,	// (0x0006d46c) cale_week_scroll_pane_g9_ParamLimits

0x72b5,	// (0x0006d47d) cale_week_scroll_pane_g10_ParamLimits

0x72c6,	// (0x0006d48e) cale_week_scroll_pane_g11_ParamLimits

0x72d7,	// (0x0006d49f) cale_week_scroll_pane_g12_ParamLimits

0x72e8,	// (0x0006d4b0) cale_week_scroll_pane_g13_ParamLimits

0x72f9,	// (0x0006d4c1) cale_week_scroll_pane_g14_ParamLimits

0x730a,	// (0x0006d4d2) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0007539a) cale_week_scroll_pane_g_ParamLimits

0x731b,	// (0x0006d4e3) cale_week_time_pane_ParamLimits

0x732e,	// (0x0006d4f6) grid_cale_week_pane_ParamLimits

0xea28,	// (0x00074bf0) listscroll_cale_week_pane_t1

0x7343,	// (0x0006d50b) scroll_pane_cp08_ParamLimits

0x7f52,	// (0x0006e11a) cale_month_corner_pane_ParamLimits

0xedc1,	// (0x00074f89) cale_month_pane_t1

0x822c,	// (0x0006e3f4) cale_month_week_pane_ParamLimits

0x037a,	// (0x00066542) popup_call_status_window_g1_ParamLimits

0x8945,	// (0x0006eb0d) popup_call_status_window_g2_ParamLimits

0x8951,	// (0x0006eb19) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00075542) popup_call_status_window_g_ParamLimits

0xf0dc,	// (0x000752a4) aid_call2_pane

0x598f,	// (0x0006bb57) msg_header_pane_g1

0x9339,	// (0x0006f501) postcard_address2_pane_ParamLimits

0x9339,	// (0x0006f501) postcard_address2_pane

0x9347,	// (0x0006f50f) postcard_message2_pane_ParamLimits

0x9347,	// (0x0006f50f) postcard_message2_pane

0x9b64,	// (0x0006fd2c) message2_row_pane_ParamLimits

0x9b64,	// (0x0006fd2c) message2_row_pane

0x1782,	// (0x0006794a) address2_row_pane_ParamLimits

0x1782,	// (0x0006794a) address2_row_pane

0x1795,	// (0x0006795d) postcard_message2_row_pane_g1

0x179d,	// (0x00067965) postcard_message2_row_pane_t1

0x1795,	// (0x0006795d) address2_row_pane_g1

0x179d,	// (0x00067965) address2_row_pane_t1

0x768d,	// (0x0006d855) aid_size_cell_vorec

0xe5c2,	// (0x0007478a) main_rss_pane

0x9b7e,	// (0x0006fd46) rss_list_single_pane_ParamLimits

0x9b7e,	// (0x0006fd46) rss_list_single_pane

0x17ab,	// (0x00067973) rss_list_single_pane_t1

0x17b9,	// (0x00067981) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x000757ed) rss_list_single_pane_t

0xe5c2,	// (0x0007478a) main_camera2_pane

0xe5c2,	// (0x0007478a) main_video2_pane

0x9d92,	// (0x0006ff5a) cams_zoom_pane_cp2_ParamLimits

0x9d92,	// (0x0006ff5a) cams_zoom_pane_cp2

0x9d9e,	// (0x0006ff66) image2_vga_pane_ParamLimits

0x9d9e,	// (0x0006ff66) image2_vga_pane

0x9dad,	// (0x0006ff75) main_camera2_pane_g1_ParamLimits

0x9dad,	// (0x0006ff75) main_camera2_pane_g1

0x9db9,	// (0x0006ff81) main_camera2_pane_g2_ParamLimits

0x9db9,	// (0x0006ff81) main_camera2_pane_g2

0x9dc5,	// (0x0006ff8d) main_camera2_pane_g3_ParamLimits

0x9dc5,	// (0x0006ff8d) main_camera2_pane_g3

0x9dd1,	// (0x0006ff99) main_camera2_pane_g4_ParamLimits

0x9dd1,	// (0x0006ff99) main_camera2_pane_g4

0x9ddd,	// (0x0006ffa5) main_camera2_pane_g5_ParamLimits

0x9ddd,	// (0x0006ffa5) main_camera2_pane_g5

0x9de9,	// (0x0006ffb1) main_camera2_pane_g6_ParamLimits

0x9de9,	// (0x0006ffb1) main_camera2_pane_g6

0x9df5,	// (0x0006ffbd) main_camera2_pane_g7_ParamLimits

0x9df5,	// (0x0006ffbd) main_camera2_pane_g7

0x9e01,	// (0x0006ffc9) main_camera2_pane_g8_ParamLimits

0x9e01,	// (0x0006ffc9) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0007580e) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0007580e) main_camera2_pane_g

0x9e19,	// (0x0006ffe1) main_camera2_pane_t1_ParamLimits

0x9e19,	// (0x0006ffe1) main_camera2_pane_t1

0x9e2b,	// (0x0006fff3) main_camera2_pane_t2_ParamLimits

0x9e2b,	// (0x0006fff3) main_camera2_pane_t2

0x9e3d,	// (0x00070005) main_camera2_pane_t3_ParamLimits

0x9e3d,	// (0x00070005) main_camera2_pane_t3

0x9e4f,	// (0x00070017) main_camera2_pane_t4_ParamLimits

0x9e4f,	// (0x00070017) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00075821) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00075821) main_camera2_pane_t

0x9eac,	// (0x00070074) cams_zoom_pane_cp4_ParamLimits

0x9eac,	// (0x00070074) cams_zoom_pane_cp4

0x9ebc,	// (0x00070084) image2_cif_pane_ParamLimits

0x9ebc,	// (0x00070084) image2_cif_pane

0x9ed1,	// (0x00070099) image2_subqcif_pane_ParamLimits

0x9ed1,	// (0x00070099) image2_subqcif_pane

0x9ee0,	// (0x000700a8) main_video2_pane_g1_ParamLimits

0x9ee0,	// (0x000700a8) main_video2_pane_g1

0x9ef2,	// (0x000700ba) main_video2_pane_g2_ParamLimits

0x9ef2,	// (0x000700ba) main_video2_pane_g2

0x9f02,	// (0x000700ca) main_video2_pane_g3_ParamLimits

0x9f02,	// (0x000700ca) main_video2_pane_g3

0x9f12,	// (0x000700da) main_video2_pane_g4_ParamLimits

0x9f12,	// (0x000700da) main_video2_pane_g4

0x9f22,	// (0x000700ea) main_video2_pane_g5_ParamLimits

0x9f22,	// (0x000700ea) main_video2_pane_g5

0x9f32,	// (0x000700fa) main_video2_pane_g6_ParamLimits

0x9f32,	// (0x000700fa) main_video2_pane_g6

0x0005,

0xf668,	// (0x00075830) main_video2_pane_g_ParamLimits

0xf668,	// (0x00075830) main_video2_pane_g

0x9f44,	// (0x0007010c) main_video2_pane_t1_ParamLimits

0x9f44,	// (0x0007010c) main_video2_pane_t1

0x9f5e,	// (0x00070126) main_video2_pane_t2_ParamLimits

0x9f5e,	// (0x00070126) main_video2_pane_t2

0x9f84,	// (0x0007014c) main_video2_pane_t3_ParamLimits

0x9f84,	// (0x0007014c) main_video2_pane_t3

0x0002,

0xf675,	// (0x0007583d) main_video2_pane_t_ParamLimits

0xf675,	// (0x0007583d) main_video2_pane_t

0x989e,	// (0x0006fa66) call_muted_g2

0x0001,

0xf617,	// (0x000757df) call_muted_g

0xe5c2,	// (0x0007478a) main_mup2_pane

0x18ac,	// (0x00067a74) main_mup2_pane_g1_ParamLimits

0x18ac,	// (0x00067a74) main_mup2_pane_g1

0x9faa,	// (0x00070172) main_mup2_pane_g2_ParamLimits

0x9faa,	// (0x00070172) main_mup2_pane_g2

0xa23c,	// (0x00070404) main_mup_pane_g13_cp1

0xa244,	// (0x0007040c) mup_volume_pane_cp1

0x9fcc,	// (0x00070194) main_mup2_pane_g4_ParamLimits

0x9fcc,	// (0x00070194) main_mup2_pane_g4

0x9fe1,	// (0x000701a9) main_mup2_pane_g5_ParamLimits

0x9fe1,	// (0x000701a9) main_mup2_pane_g5

0x9ff6,	// (0x000701be) main_mup2_pane_g6_ParamLimits

0x9ff6,	// (0x000701be) main_mup2_pane_g6

0xa00b,	// (0x000701d3) main_mup2_pane_g7_ParamLimits

0xa00b,	// (0x000701d3) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00075844) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00075844) main_mup2_pane_g

0xa027,	// (0x000701ef) main_mup2_pane_t1_ParamLimits

0xa027,	// (0x000701ef) main_mup2_pane_t1

0xa03e,	// (0x00070206) main_mup2_pane_t2_ParamLimits

0xa03e,	// (0x00070206) main_mup2_pane_t2

0xa055,	// (0x0007021d) main_mup2_pane_t3_ParamLimits

0xa055,	// (0x0007021d) main_mup2_pane_t3

0xa06c,	// (0x00070234) main_mup2_pane_t4_ParamLimits

0xa06c,	// (0x00070234) main_mup2_pane_t4

0xa086,	// (0x0007024e) main_mup2_pane_t5_ParamLimits

0xa086,	// (0x0007024e) main_mup2_pane_t5

0xa0a0,	// (0x00070268) main_mup2_pane_t6_ParamLimits

0xa0a0,	// (0x00070268) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00075853) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00075853) main_mup2_pane_t

0xa0d8,	// (0x000702a0) mup2_visualizer_pane_ParamLimits

0xa0d8,	// (0x000702a0) mup2_visualizer_pane

0xa10e,	// (0x000702d6) mup_progress_pane_cp_ParamLimits

0xa10e,	// (0x000702d6) mup_progress_pane_cp

0xa227,	// (0x000703ef) mup_volume_pane_cp_ParamLimits

0xa227,	// (0x000703ef) mup_volume_pane_cp

0xa127,	// (0x000702ef) mup2_visualizer_pane_g1_ParamLimits

0xa127,	// (0x000702ef) mup2_visualizer_pane_g1

0x187e,	// (0x00067a46) mup2_visualizer_pane_g2_ParamLimits

0x187e,	// (0x00067a46) mup2_visualizer_pane_g2

0xa13c,	// (0x00070304) mup2_visualizer_pane_g3_ParamLimits

0xa13c,	// (0x00070304) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00075860) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00075860) mup2_visualizer_pane_g

0x05f3,	// (0x000667bb) aid_size_cell_fmradio

0x99b4,	// (0x0006fb7c) aid_height_parent_landcape

0xec29,	// (0x00074df1) wml_content_pane_cp

0xec31,	// (0x00074df9) wml_tabs_pane

0xec3a,	// (0x00074e02) popup_wml_miniature_window

0xec42,	// (0x00074e0a) scroll_pane_cp021

0xec56,	// (0x00074e1e) wml_content_pane_comp8

0xe5c2,	// (0x0007478a) bg_popup_sub_pane_cp05

0x189c,	// (0x00067a64) popup_wml_miniature_window_g1

0x18a4,	// (0x00067a6c) wml_miniature_view_pane

0xa14a,	// (0x00070312) aid_size_wml_view

0xa152,	// (0x0007031a) wml_miniature_view_pane_g1

0xa15b,	// (0x00070323) wml_miniature_view_pane_g2

0xa164,	// (0x0007032c) wml_miniature_view_pane_g3

0xa16c,	// (0x00070334) wml_miniature_view_pane_g4

0xa174,	// (0x0007033c) wml_miniature_view_pane_g5

0xa17c,	// (0x00070344) wml_miniature_view_pane_g6

0xa184,	// (0x0007034c) wml_miniature_view_pane_g7

0xa18c,	// (0x00070354) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00075867) wml_miniature_view_pane_g

0x18ac,	// (0x00067a74) background_graphic_ParamLimits

0x18ac,	// (0x00067a74) background_graphic

0x18b8,	// (0x00067a80) wml_tabs_2_pane

0x18c1,	// (0x00067a89) wml_tabs_3_pane_ParamLimits

0x18c1,	// (0x00067a89) wml_tabs_3_pane

0x18d3,	// (0x00067a9b) wml_tabs_4_pane_ParamLimits

0x18d3,	// (0x00067a9b) wml_tabs_4_pane

0x18e9,	// (0x00067ab1) wml_tabs_5_pane_ParamLimits

0x18e9,	// (0x00067ab1) wml_tabs_5_pane

0x1903,	// (0x00067acb) wml_tabs_pane_g2_ParamLimits

0x1903,	// (0x00067acb) wml_tabs_pane_g2

0x1917,	// (0x00067adf) wml_tabs_pane_g3_ParamLimits

0x1917,	// (0x00067adf) wml_tabs_pane_g3

0xa194,	// (0x0007035c) wml_tabs_2_active_pane_ParamLimits

0xa194,	// (0x0007035c) wml_tabs_2_active_pane

0xa1a6,	// (0x0007036e) wml_tabs_2_passive_pane_ParamLimits

0xa1a6,	// (0x0007036e) wml_tabs_2_passive_pane

0xa1b8,	// (0x00070380) wml_tabs_3_active_pane_cp_ParamLimits

0xa1b8,	// (0x00070380) wml_tabs_3_active_pane_cp

0xa1cb,	// (0x00070393) wml_tabs_3_passive_pane_ParamLimits

0xa1cb,	// (0x00070393) wml_tabs_3_passive_pane

0xa1dc,	// (0x000703a4) wml_tabs_3_passive_pane_cp_ParamLimits

0xa1dc,	// (0x000703a4) wml_tabs_3_passive_pane_cp

0xa1f1,	// (0x000703b9) tabs_4_active_pane

0xa1f9,	// (0x000703c1) tabs_4_passive_pane

0xa201,	// (0x000703c9) tabs_4_passive_pane_cp

0xa209,	// (0x000703d1) tabs_4_passive_pane_cp2

0x9779,	// (0x0006f941) aid_height_text

0x8f61,	// (0x0006f129) mup_volume_cont_pane_ParamLimits

0x8f61,	// (0x0006f129) mup_volume_cont_pane

0x6d44,	// (0x0006cf0c) aid_size_cell_pinb

0x6d4e,	// (0x0006cf16) aid_size_list_pinb

0xa0f7,	// (0x000702bf) mup2_volume_cont_pane_ParamLimits

0xa0f7,	// (0x000702bf) mup2_volume_cont_pane

0xa213,	// (0x000703db) mup2_volume_cont_pane_g1_ParamLimits

0xa213,	// (0x000703db) mup2_volume_cont_pane_g1

0x68a3,	// (0x0006ca6b) aid_size_cell_touch_ParamLimits

0x68a3,	// (0x0006ca6b) aid_size_cell_touch

0x6b4f,	// (0x0006cd17) touch_pane_ParamLimits

0x6b4f,	// (0x0006cd17) touch_pane

0x6885,	// (0x0006ca4d) main_rss2_pane

0x196d,	// (0x00067b35) listscroll_rss2_pane

0x1976,	// (0x00067b3e) rss2_navigation_pane

0x197e,	// (0x00067b46) list_rss2_pane

0x016f,	// (0x00066337) scroll_pane_cp22

0x1986,	// (0x00067b4e) rss2_navigation_pane_g1

0x198f,	// (0x00067b57) rss2_navigation_pane_g2

0x1997,	// (0x00067b5f) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00075878) rss2_navigation_pane_g

0x199f,	// (0x00067b67) rss2_navigation_pane_t1

0xa24c,	// (0x00070414) rss2_list_single_pane_ParamLimits

0xa24c,	// (0x00070414) rss2_list_single_pane

0x19ad,	// (0x00067b75) rss2_list_single_pane_t2

0x19bb,	// (0x00067b83) rss2_list_single_pane_t3_ParamLimits

0x19bb,	// (0x00067b83) rss2_list_single_pane_t3

0x19d8,	// (0x00067ba0) rss2_list_single_pane_t4

0x8754,	// (0x0006e91c) smil_status_pane_g1

0x99cb,	// (0x0006fb93) main_image2_pane_ParamLimits

0x99cb,	// (0x0006fb93) main_image2_pane

0x9e0d,	// (0x0006ffd5) main_camera2_pane_g9_ParamLimits

0x9e0d,	// (0x0006ffd5) main_camera2_pane_g9

0x9e61,	// (0x00070029) main_camera2_pane_t5_ParamLimits

0x9e61,	// (0x00070029) main_camera2_pane_t5

0x9e73,	// (0x0007003b) main_camera2_pane_t6_ParamLimits

0x9e73,	// (0x0007003b) main_camera2_pane_t6

0xa272,	// (0x0007043a) main_image2_pane_g1_ParamLimits

0xa272,	// (0x0007043a) main_image2_pane_g1

0x9513,	// (0x0006f6db) smil2_video_pane_ParamLimits

0x9513,	// (0x0006f6db) smil2_video_pane

0x5715,	// (0x0006b8dd) aid_zoom_text_primary_cp

0x6af4,	// (0x0006ccbc) popup_preview_fixed_window

0xeb92,	// (0x00074d5a) im_reading_pane_g1

0x9d57,	// (0x0006ff1f) cams2_bc_adjust_pane_cp_ParamLimits

0x9d57,	// (0x0006ff1f) cams2_bc_adjust_pane_cp

0x9e9e,	// (0x00070066) cams2_bc_adjust_pane_ParamLimits

0x9e9e,	// (0x00070066) cams2_bc_adjust_pane

0xa27e,	// (0x00070446) cams2_bc_adjust_pane_g1

0xa286,	// (0x0007044e) cams2_slider_pane

0xa28f,	// (0x00070457) cams2_slider_pane_g1

0xa298,	// (0x00070460) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0007587f) cams2_slider_pane_g

0x6e41,	// (0x0006d009) calc_display_pane_ParamLimits

0x6e5f,	// (0x0006d027) calc_paper_pane_ParamLimits

0x6e7b,	// (0x0006d043) grid_calc_pane_ParamLimits

0x89af,	// (0x0006eb77) popup_clock_digital_window_t1_ParamLimits

0x0590,	// (0x00066758) main_image_pane_t1

0x6e27,	// (0x0006cfef) aid_size_cell_calc_ParamLimits

0x6e27,	// (0x0006cfef) aid_size_cell_calc

0x99f4,	// (0x0006fbbc) popup_blid_sat_info2_window_ParamLimits

0x99f4,	// (0x0006fbbc) popup_blid_sat_info2_window

0x1a22,	// (0x00067bea) aid_size_cell_blid

0x1a2a,	// (0x00067bf2) bg_popup_window_pane_cp07

0x1a4d,	// (0x00067c15) grid_popup_blid_pane

0x1a57,	// (0x00067c1f) heading_pane_cp05_ParamLimits

0x1a57,	// (0x00067c1f) heading_pane_cp05

0x1b21,	// (0x00067ce9) cell_popup_blid_pane_ParamLimits

0x1b21,	// (0x00067ce9) cell_popup_blid_pane

0x1b4b,	// (0x00067d13) cell_popup_blid_pane_g1

0x1b53,	// (0x00067d1b) cell_popup_blid_pane_t1

0xa0bd,	// (0x00070285) mup2_indicator_pane_ParamLimits

0xa0bd,	// (0x00070285) mup2_indicator_pane

0x02a9,	// (0x00066471) mup2_visualizer_osc_pane

0x188a,	// (0x00067a52) mup2_visualizer_spec_pane_ParamLimits

0x188a,	// (0x00067a52) mup2_visualizer_spec_pane

0xa2b2,	// (0x0007047a) mup2_spec_half_pane

0xa2bb,	// (0x00070483) mup2_spec_half_pane_cp

0xa2c5,	// (0x0007048d) mup2_spec_bar_pane_ParamLimits

0xa2c5,	// (0x0007048d) mup2_spec_bar_pane

0x17c7,	// (0x0006798f) mup2_spec_bar_pane_g1

0x17d1,	// (0x00067999) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000757f2) mup2_spec_bar_pane_g

0xa2e4,	// (0x000704ac) mup2_osc_middle_pane

0x17e3,	// (0x000679ab) mup2_visualizer_osc_pane_g1

0x6bc6,	// (0x0006cd8e) popup_number_entry_window_t1_ParamLimits

0x6bd9,	// (0x0006cda1) popup_number_entry_window_t2_ParamLimits

0x6beb,	// (0x0006cdb3) popup_number_entry_window_t3_ParamLimits

0x6bfd,	// (0x0006cdc5) popup_number_entry_window_t5_ParamLimits

0x6bfd,	// (0x0006cdc5) popup_number_entry_window_t5

0xf0ec,	// (0x000752b4) popup_number_entry_window_t_ParamLimits

0x6c35,	// (0x0006cdfd) text_title_cp2_ParamLimits

0x91fd,	// (0x0006f3c5) aid_hotspot_pointer_text2_pane

0x9297,	// (0x0006f45f) main_viewer_pane_g9_ParamLimits

0x9297,	// (0x0006f45f) main_viewer_pane_g9

0xedc1,	// (0x00074f89) cale_month_pane_t1_ParamLimits

0xedfe,	// (0x00074fc6) bg_cale_pane_ParamLimits

0xee16,	// (0x00074fde) list_cale_pane_ParamLimits

0xea28,	// (0x00074bf0) listscroll_cale_day_pane_t1

0xee27,	// (0x00074fef) scroll_pane_cp09_ParamLimits

0x8fa0,	// (0x0006f168) main_mup_eq_pane_t1_ParamLimits

0x8fa0,	// (0x0006f168) main_mup_eq_pane_t1

0x8fbc,	// (0x0006f184) main_mup_eq_pane_t2_ParamLimits

0x8fbc,	// (0x0006f184) main_mup_eq_pane_t2

0x8fd8,	// (0x0006f1a0) main_mup_eq_pane_t3_ParamLimits

0x8fd8,	// (0x0006f1a0) main_mup_eq_pane_t3

0x8ff2,	// (0x0006f1ba) main_mup_eq_pane_t4_ParamLimits

0x8ff2,	// (0x0006f1ba) main_mup_eq_pane_t4

0x900c,	// (0x0006f1d4) main_mup_eq_pane_t5_ParamLimits

0x900c,	// (0x0006f1d4) main_mup_eq_pane_t5

0x9026,	// (0x0006f1ee) main_mup_eq_pane_t6_ParamLimits

0x9026,	// (0x0006f1ee) main_mup_eq_pane_t6

0x903c,	// (0x0006f204) main_mup_eq_pane_t7_ParamLimits

0x903c,	// (0x0006f204) main_mup_eq_pane_t7

0x9052,	// (0x0006f21a) main_mup_eq_pane_t8_ParamLimits

0x9052,	// (0x0006f21a) main_mup_eq_pane_t8

0x9068,	// (0x0006f230) main_mup_eq_pane_t9_ParamLimits

0x9068,	// (0x0006f230) main_mup_eq_pane_t9

0x9084,	// (0x0006f24c) main_mup_eq_pane_t10_ParamLimits

0x9084,	// (0x0006f24c) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00075641) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00075641) main_mup_eq_pane_t

0x9149,	// (0x0006f311) mup_equalizer_pane_cp5_ParamLimits

0x9161,	// (0x0006f329) mup_equalizer_pane_cp6_ParamLimits

0x9179,	// (0x0006f341) mup_equalizer_pane_cp7_ParamLimits

0x6885,	// (0x0006ca4d) main_gallery_pane

0x17ec,	// (0x000679b4) smil2_volume_pane

0x1807,	// (0x000679cf) smil_status_volume_pane_g1_ParamLimits

0x17f4,	// (0x000679bc) smil_status_volume_pane_g2_ParamLimits

0x9bdb,	// (0x0006fda3) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x000757f7) smil_status_volume_pane_g_ParamLimits

0x1a2a,	// (0x00067bf2) bg_popup_window_pane_cp07_ParamLimits

0x1a38,	// (0x00067c00) blid_firmament_pane

0xa2ed,	// (0x000704b5) aid_size_cell_gallery_ParamLimits

0xa2ed,	// (0x000704b5) aid_size_cell_gallery

0xa2fb,	// (0x000704c3) grid_gallery_pane_ParamLimits

0xa2fb,	// (0x000704c3) grid_gallery_pane

0xa30b,	// (0x000704d3) cell_gallery_pane_ParamLimits

0xa30b,	// (0x000704d3) cell_gallery_pane

0x1b61,	// (0x00067d29) bg_cell_gallery_focus_pane_ParamLimits

0x1b61,	// (0x00067d29) bg_cell_gallery_focus_pane

0x1b73,	// (0x00067d3b) cell_gallery_pane_g1_ParamLimits

0x1b73,	// (0x00067d3b) cell_gallery_pane_g1

0xa359,	// (0x00070521) cell_gallery_pane_g2_ParamLimits

0xa359,	// (0x00070521) cell_gallery_pane_g2

0xa366,	// (0x0007052e) cell_gallery_pane_g3_ParamLimits

0xa366,	// (0x0007052e) cell_gallery_pane_g3

0x1b7f,	// (0x00067d47) cell_gallery_pane_g4_ParamLimits

0x1b7f,	// (0x00067d47) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x000758a5) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x000758a5) cell_gallery_pane_g

0x1b8b,	// (0x00067d53) bg_cell_gallery_focus_pane_g1

0x1b93,	// (0x00067d5b) bg_cell_gallery_focus_pane_g2

0x1b9b,	// (0x00067d63) bg_cell_gallery_focus_pane_g3

0x1ba3,	// (0x00067d6b) bg_cell_gallery_focus_pane_g4

0x1bab,	// (0x00067d73) bg_cell_gallery_focus_pane_g5

0x1bb3,	// (0x00067d7b) bg_cell_gallery_focus_pane_g6

0x1bbb,	// (0x00067d83) bg_cell_gallery_focus_pane_g7

0x1bc3,	// (0x00067d8b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x000758ae) bg_cell_gallery_focus_pane_g

0x1bcb,	// (0x00067d93) aid_firma_cardinal

0x1bdf,	// (0x00067da7) blid_firmament_pane_t1

0x1bf6,	// (0x00067dbe) blid_firmament_pane_t2

0x1c0d,	// (0x00067dd5) blid_firmament_pane_t3

0x1c24,	// (0x00067dec) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x000758bf) blid_firmament_pane_t

0x1c3b,	// (0x00067e03) blid_sat_info_pane

0x1c4b,	// (0x00067e13) blid_sat_info_pane_g1

0x1c4b,	// (0x00067e13) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x000758c8) blid_sat_info_pane_g

0x1c55,	// (0x00067e1d) blid_sat_info_pane_t1

0x1c63,	// (0x00067e2b) smil2_volume_content_pane

0x1c6c,	// (0x00067e34) smil2_volume_pane_g1

0x1c74,	// (0x00067e3c) smil2_volume_content_pane_g1

0x1c7d,	// (0x00067e45) smil2_volume_content_pane_g2

0x1c86,	// (0x00067e4e) smil2_volume_content_pane_g3

0x1c8f,	// (0x00067e57) smil2_volume_content_pane_g4

0x1c98,	// (0x00067e60) smil2_volume_content_pane_g5

0x1ca1,	// (0x00067e69) smil2_volume_content_pane_g6

0x1caa,	// (0x00067e72) smil2_volume_content_pane_g7

0x1cb3,	// (0x00067e7b) smil2_volume_content_pane_g8

0x1cbc,	// (0x00067e84) smil2_volume_content_pane_g9

0x1cc5,	// (0x00067e8d) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x000758cd) smil2_volume_content_pane_g

0x739b,	// (0x0006d563) cale_week_day_heading_pane_t1_ParamLimits

0x73c8,	// (0x0006d590) cale_week_day_heading_pane_t2_ParamLimits

0x73f5,	// (0x0006d5bd) cale_week_day_heading_pane_t3_ParamLimits

0x7422,	// (0x0006d5ea) cale_week_day_heading_pane_t4_ParamLimits

0x744f,	// (0x0006d617) cale_week_day_heading_pane_t5_ParamLimits

0x747c,	// (0x0006d644) cale_week_day_heading_pane_t6_ParamLimits

0x74a9,	// (0x0006d671) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x000753b9) cale_week_day_heading_pane_t_ParamLimits

0xea3a,	// (0x00074c02) bg_cale_side_pane_ParamLimits

0x74d6,	// (0x0006d69e) cale_week_time_pane_t1_ParamLimits

0x7502,	// (0x0006d6ca) cale_week_time_pane_t2_ParamLimits

0x752e,	// (0x0006d6f6) cale_week_time_pane_t3_ParamLimits

0x755a,	// (0x0006d722) cale_week_time_pane_t4_ParamLimits

0x7586,	// (0x0006d74e) cale_week_time_pane_t5_ParamLimits

0x75b2,	// (0x0006d77a) cale_week_time_pane_t6_ParamLimits

0x75de,	// (0x0006d7a6) cale_week_time_pane_t7_ParamLimits

0x760a,	// (0x0006d7d2) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x000753c8) cale_week_time_pane_t_ParamLimits

0x7636,	// (0x0006d7fe) cell_cale_week_pane_g2_ParamLimits

0xea3a,	// (0x00074c02) bg_cale_side_pane_cp01_ParamLimits

0x8551,	// (0x0006e719) cale_month_week_pane_t1_ParamLimits

0x857c,	// (0x0006e744) cale_month_week_pane_t2_ParamLimits

0x85a7,	// (0x0006e76f) cale_month_week_pane_t3_ParamLimits

0x85d2,	// (0x0006e79a) cale_month_week_pane_t4_ParamLimits

0x85fd,	// (0x0006e7c5) cale_month_week_pane_t5_ParamLimits

0x8628,	// (0x0006e7f0) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x000754a1) cale_month_week_pane_t_ParamLimits

0x8721,	// (0x0006e8e9) cell_cale_month_pane_g1_ParamLimits

0x6885,	// (0x0006ca4d) main_cale_event_viewer_pane

0x6885,	// (0x0006ca4d) listscroll_cale_event_viewer_pane

0x1cce,	// (0x00067e96) list_cale_ev_pane

0x1cd6,	// (0x00067e9e) scroll_pane_cp023

0xa373,	// (0x0007053b) field_cale_ev_pane_ParamLimits

0xa373,	// (0x0007053b) field_cale_ev_pane

0x1ce2,	// (0x00067eaa) field_cale_ev_content_pane_ParamLimits

0x1ce2,	// (0x00067eaa) field_cale_ev_content_pane

0x1cee,	// (0x00067eb6) field_cale_ev_pane_g1_ParamLimits

0x1cee,	// (0x00067eb6) field_cale_ev_pane_g1

0x1cfa,	// (0x00067ec2) field_cale_ev_pane_g2_ParamLimits

0x1cfa,	// (0x00067ec2) field_cale_ev_pane_g2

0x1d12,	// (0x00067eda) field_cale_ev_pane_g3_ParamLimits

0x1d12,	// (0x00067eda) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x000758e2) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x000758e2) field_cale_ev_pane_g

0x1d2a,	// (0x00067ef2) field_cale_ev_pane_t1_ParamLimits

0x1d2a,	// (0x00067ef2) field_cale_ev_pane_t1

0xa397,	// (0x0007055f) field_cale_ev_content_pane_t1_ParamLimits

0xa397,	// (0x0007055f) field_cale_ev_content_pane_t1

0x0434,	// (0x000665fc) bg_button_pane_cp01

0xe8e8,	// (0x00074ab0) listscroll_cale_week_pane_ParamLimits

0x71bb,	// (0x0006d383) popup_toolbar_window_cp01

0xea28,	// (0x00074bf0) listscroll_cale_week_pane_t1_ParamLimits

0xe8e8,	// (0x00074ab0) listscroll_cale_day_pane_ParamLimits

0x71bb,	// (0x0006d383) popup_toolbar_window_cp02

0xea28,	// (0x00074bf0) listscroll_cale_day_pane_t1_ParamLimits

0xe8e8,	// (0x00074ab0) main_cale_month_pane_ParamLimits

0x9ad8,	// (0x0006fca0) popup_toolbar_window_cp03_ParamLimits

0x9ad8,	// (0x0006fca0) popup_toolbar_window_cp03

0x9423,	// (0x0006f5eb) main_image_pane_g2_ParamLimits

0x9423,	// (0x0006f5eb) main_image_pane_g2

0x942f,	// (0x0006f5f7) main_image_pane_g3_ParamLimits

0x942f,	// (0x0006f5f7) main_image_pane_g3

0x0002,

0xf50b,	// (0x000756d3) main_image_pane_g_ParamLimits

0xf50b,	// (0x000756d3) main_image_pane_g

0x0590,	// (0x00066758) main_image_pane_t1_ParamLimits

0x943b,	// (0x0006f603) main_image_pane_t2_ParamLimits

0x943b,	// (0x0006f603) main_image_pane_t2

0x944d,	// (0x0006f615) main_image_pane_t3_ParamLimits

0x944d,	// (0x0006f615) main_image_pane_t3

0x945f,	// (0x0006f627) main_image_pane_t4_ParamLimits

0x945f,	// (0x0006f627) main_image_pane_t4

0x0003,

0xf512,	// (0x000756da) main_image_pane_t_ParamLimits

0xf512,	// (0x000756da) main_image_pane_t

0x9471,	// (0x0006f639) popup_image_details_window_cp01

0x947b,	// (0x0006f643) popup_toobar_trans_pane_cp01_ParamLimits

0x947b,	// (0x0006f643) popup_toobar_trans_pane_cp01

0x9a49,	// (0x0006fc11) popup_image_details_window_ParamLimits

0x9a49,	// (0x0006fc11) popup_image_details_window

0x1738,	// (0x00067900) popup_image_focus_window

0x9d49,	// (0x0006ff11) camera2_autofocus_pane_ParamLimits

0x9d49,	// (0x0006ff11) camera2_autofocus_pane

0x6885,	// (0x0006ca4d) bg_popup_sub_pane_cp06

0x1d41,	// (0x00067f09) popup_image_focus_window_g1

0x1d49,	// (0x00067f11) popup_image_focus_window_g2

0x1d51,	// (0x00067f19) popup_image_focus_window_g3

0x1d59,	// (0x00067f21) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x000758e9) popup_image_focus_window_g

0x1d61,	// (0x00067f29) popup_image_focus_window_t1

0x1d6f,	// (0x00067f37) popup_image_focus_window_t2

0x1d7f,	// (0x00067f47) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x000758f2) popup_image_focus_window_t

0x1d8d,	// (0x00067f55) camera2_autofocus_pane_g1

0x99cb,	// (0x0006fb93) bg_tb_trans_pane_cp01

0x1d9b,	// (0x00067f63) popup_image_details_window_g1

0x1dae,	// (0x00067f76) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00075904) popup_image_details_window_g

0x1dd7,	// (0x00067f9f) popup_image_details_window_t1

0x1de9,	// (0x00067fb1) popup_image_details_window_t2

0x1e02,	// (0x00067fca) popup_image_details_window_t3

0x1e16,	// (0x00067fde) popup_image_details_window_t4

0x1e31,	// (0x00067ff9) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0007590b) popup_image_details_window_t

0xe8d4,	// (0x00074a9c) bg_calc_paper_pane_ParamLimits

0x6885,	// (0x0006ca4d) grid_highlight_pane_cp013

0x6f74,	// (0x0006d13c) list_calc_pane_ParamLimits

0x6f86,	// (0x0006d14e) scroll_pane_cp024

0xe8e8,	// (0x00074ab0) bg_calc_display_pane_ParamLimits

0x6f8e,	// (0x0006d156) calc_display_pane_t1_ParamLimits

0x6fa3,	// (0x0006d16b) calc_display_pane_t2_ParamLimits

0x6fb8,	// (0x0006d180) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0007533b) calc_display_pane_t_ParamLimits

0x708b,	// (0x0006d253) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00075358) cell_calc_pane_g

0x7094,	// (0x0006d25c) cell_calc_pane_t1

0xe947,	// (0x00074b0f) grid_highlight_pane_cp02_ParamLimits

0xe95d,	// (0x00074b25) toolbar_button_pane_cp01_ParamLimits

0xe95d,	// (0x00074b25) toolbar_button_pane_cp01

0x05d5,	// (0x0006679d) temp_image_control_pane_ParamLimits

0x05d5,	// (0x0006679d) temp_image_control_pane

0x99cb,	// (0x0006fb93) main_mp3_pane

0x1e4b,	// (0x00068013) temp_image_control_pane_g1_ParamLimits

0x1e4b,	// (0x00068013) temp_image_control_pane_g1

0x1e59,	// (0x00068021) temp_image_control_pane_g2_ParamLimits

0x1e59,	// (0x00068021) temp_image_control_pane_g2

0x1e6b,	// (0x00068033) temp_image_control_pane_g3_ParamLimits

0x1e6b,	// (0x00068033) temp_image_control_pane_g3

0xa3e5,	// (0x000705ad) temp_image_control_pane_g4_ParamLimits

0xa3e5,	// (0x000705ad) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00075916) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00075916) temp_image_control_pane_g

0x1e4b,	// (0x00068013) main_mp3_pane_g1

0xa3f6,	// (0x000705be) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0007591f) main_mp3_pane_g

0x1eae,	// (0x00068076) main_mp3_pane_t1

0xea9f,	// (0x00074c67) main_camera_pane_g8_ParamLimits

0xea9f,	// (0x00074c67) main_camera_pane_g8

0x78e2,	// (0x0006daaa) main_video_pane_g7_ParamLimits

0x78e2,	// (0x0006daaa) main_video_pane_g7

0x9e8c,	// (0x00070054) main_camera2_pane_t7_ParamLimits

0x9e8c,	// (0x00070054) main_camera2_pane_t7

0xebe9,	// (0x00074db1) scroll_pane_cp025_ParamLimits

0xebe9,	// (0x00074db1) scroll_pane_cp025

0xebfd,	// (0x00074dc5) scroll_pane_cp026_ParamLimits

0xebfd,	// (0x00074dc5) scroll_pane_cp026

0xec0c,	// (0x00074dd4) wml_content_pane_ParamLimits

0x6885,	// (0x0006ca4d) main_touch_calib_pane

0xa49a,	// (0x00070662) main_touch_calib_pane_g1

0xa4a6,	// (0x0007066e) main_touch_calib_pane_g2

0xa4b2,	// (0x0007067a) main_touch_calib_pane_g3

0xa4be,	// (0x00070686) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0007593d) main_touch_calib_pane_g

0xa4ca,	// (0x00070692) main_touch_calib_pane_t1

0xa4e1,	// (0x000706a9) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00075946) main_touch_calib_pane_t

0x01ea,	// (0x000663b2) mup_progress_pane_cp02

0x0209,	// (0x000663d1) navi_pane_g1

0x026b,	// (0x00066433) navi_pane_mp_t3

0x99cb,	// (0x0006fb93) main_mp3_pane_ParamLimits

0x9b1a,	// (0x0006fce2) navi_pane_ParamLimits

0x1e4b,	// (0x00068013) main_mp3_pane_g1_ParamLimits

0xa3f6,	// (0x000705be) main_mp3_pane_g2_ParamLimits

0xa402,	// (0x000705ca) main_mp3_pane_g3_ParamLimits

0xa402,	// (0x000705ca) main_mp3_pane_g3

0xa40e,	// (0x000705d6) main_mp3_pane_g4_ParamLimits

0xa40e,	// (0x000705d6) main_mp3_pane_g4

0x1e7b,	// (0x00068043) main_mp3_pane_g5_ParamLimits

0x1e7b,	// (0x00068043) main_mp3_pane_g5

0x1e89,	// (0x00068051) main_mp3_pane_g6_ParamLimits

0x1e89,	// (0x00068051) main_mp3_pane_g6

0x1e96,	// (0x0006805e) main_mp3_pane_g7_ParamLimits

0x1e96,	// (0x0006805e) main_mp3_pane_g7

0x1ea2,	// (0x0006806a) main_mp3_pane_g8_ParamLimits

0x1ea2,	// (0x0006806a) main_mp3_pane_g8

0xf757,	// (0x0007591f) main_mp3_pane_g_ParamLimits

0xa41a,	// (0x000705e2) main_mp3_pane_t2

0xa42a,	// (0x000705f2) main_mp3_pane_t3

0x1ebc,	// (0x00068084) main_mp3_pane_t4

0x1eca,	// (0x00068092) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00075930) main_mp3_pane_t

0x1ed8,	// (0x000680a0) mup_progress_pane_cp01

0x5715,	// (0x0006b8dd) aid_zoom_text_secondary2

0x1cce,	// (0x00067e96) list_cale_ev2_pane

0x1cd6,	// (0x00067e9e) scroll_pane_cp023_ParamLimits

0xa538,	// (0x00070700) field_cale_ev2_pane_ParamLimits

0xa538,	// (0x00070700) field_cale_ev2_pane

0xa556,	// (0x0007071e) field_cale_ev2_pane_g1_ParamLimits

0xa556,	// (0x0007071e) field_cale_ev2_pane_g1

0xa562,	// (0x0007072a) field_cale_ev2_pane_g2_ParamLimits

0xa562,	// (0x0007072a) field_cale_ev2_pane_g2

0xa57a,	// (0x00070742) field_cale_ev2_pane_g3_ParamLimits

0xa57a,	// (0x00070742) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00075951) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00075951) field_cale_ev2_pane_g

0x5a18,	// (0x0006bbe0) field_cale_ev2_pane_t1_ParamLimits

0x5a18,	// (0x0006bbe0) field_cale_ev2_pane_t1

0x5a2f,	// (0x0006bbf7) field_cale_ev2_pane_t2_ParamLimits

0x5a2f,	// (0x0006bbf7) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0007595a) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0007595a) field_cale_ev2_pane_t

0x92ff,	// (0x0006f4c7) main_postcard_pane_g5_ParamLimits

0x92ff,	// (0x0006f4c7) main_postcard_pane_g5

0x930d,	// (0x0006f4d5) main_postcard_pane_g6_ParamLimits

0x930d,	// (0x0006f4d5) main_postcard_pane_g6

0x7720,	// (0x0006d8e8) camera2_autofocus_pane_cp_ParamLimits

0x7720,	// (0x0006d8e8) camera2_autofocus_pane_cp

0x99cb,	// (0x0006fb93) main_mup3_pane

0xa5be,	// (0x00070786) main_mup3_pane_g1_ParamLimits

0xa5be,	// (0x00070786) main_mup3_pane_g1

0xa5df,	// (0x000707a7) main_mup3_pane_g2_ParamLimits

0xa5df,	// (0x000707a7) main_mup3_pane_g2

0xa65b,	// (0x00070823) main_mup3_pane_g3_ParamLimits

0xa65b,	// (0x00070823) main_mup3_pane_g3

0xa69c,	// (0x00070864) main_mup3_pane_g4_ParamLimits

0xa69c,	// (0x00070864) main_mup3_pane_g4

0xa6dd,	// (0x000708a5) main_mup3_pane_g5_ParamLimits

0xa6dd,	// (0x000708a5) main_mup3_pane_g5

0xa71e,	// (0x000708e6) main_mup3_pane_g6_ParamLimits

0xa71e,	// (0x000708e6) main_mup3_pane_g6

0x1ee0,	// (0x000680a8) main_mup3_pane_g7_ParamLimits

0x1ee0,	// (0x000680a8) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0007596a) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0007596a) main_mup3_pane_g

0xa790,	// (0x00070958) main_mup3_pane_t1_ParamLimits

0xa790,	// (0x00070958) main_mup3_pane_t1

0xa803,	// (0x000709cb) main_mup3_pane_t2_ParamLimits

0xa803,	// (0x000709cb) main_mup3_pane_t2

0xa8d0,	// (0x00070a98) main_mup3_pane_t4_ParamLimits

0xa8d0,	// (0x00070a98) main_mup3_pane_t4

0xa924,	// (0x00070aec) main_mup3_pane_t5_ParamLimits

0xa924,	// (0x00070aec) main_mup3_pane_t5

0xa9d0,	// (0x00070b98) main_mup3_pane_t6_ParamLimits

0xa9d0,	// (0x00070b98) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0007597b) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0007597b) main_mup3_pane_t

0xaa78,	// (0x00070c40) mup3_progress_pane_ParamLimits

0xaa78,	// (0x00070c40) mup3_progress_pane

0xaae3,	// (0x00070cab) popup_mup3_control_window_ParamLimits

0xaae3,	// (0x00070cab) popup_mup3_control_window

0x1eee,	// (0x000680b6) popup_mup3_text_window

0xab00,	// (0x00070cc8) mup3_progress_pane_t1

0xab17,	// (0x00070cdf) mup3_progress_pane_t2

0x1ef6,	// (0x000680be) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00075988) mup3_progress_pane_t

0x1f0d,	// (0x000680d5) mup_progress_pane_cp03

0x6885,	// (0x0006ca4d) bg_tb_trans_pane_cp04

0xab2e,	// (0x00070cf6) mup3_volume_pane

0xab36,	// (0x00070cfe) popup_mup3_control_window_g1

0x3a41,	// (0x00069c09) mup3_volume_pane_g1

0x3a4a,	// (0x00069c12) mup3_volume_pane_g2

0x3a53,	// (0x00069c1b) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0007598f) mup3_volume_pane_g

0x6885,	// (0x0006ca4d) bg_tb_trans_pane_cp03

0x1f1d,	// (0x000680e5) popup_mup3_text_window_g1

0x1f25,	// (0x000680ed) popup_mup3_text_window_t1

0xe930,	// (0x00074af8) list_calc_item_pane_g1_ParamLimits

0x1954,	// (0x00067b1c) mup_volume_pane_cp_g1

0xa4f8,	// (0x000706c0) main_touch_calib_pane_t3

0xa50c,	// (0x000706d4) main_touch_calib_pane_t4

0xa522,	// (0x000706ea) main_touch_calib_pane_t5

0x688f,	// (0x0006ca57) aid_cell_size_toolbar2

0x6897,	// (0x0006ca5f) aid_popup3_width_pane

0x5705,	// (0x0006b8cd) aid_zoom_text_msg_primary

0x76f3,	// (0x0006d8bb) vorec_t7

0xe8f4,	// (0x00074abc) bg_calc_paper_pane_g1_ParamLimits

0xe900,	// (0x00074ac8) bg_calc_paper_pane_g2_ParamLimits

0xe90c,	// (0x00074ad4) bg_calc_paper_pane_g3_ParamLimits

0xe918,	// (0x00074ae0) bg_calc_paper_pane_g4_ParamLimits

0xe924,	// (0x00074aec) bg_calc_paper_pane_g5_ParamLimits

0x6ff9,	// (0x0006d1c1) bg_calc_paper_pane_g6_ParamLimits

0x700a,	// (0x0006d1d2) bg_calc_paper_pane_g7_ParamLimits

0x701b,	// (0x0006d1e3) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00075342) bg_calc_paper_pane_g_ParamLimits

0x702c,	// (0x0006d1f4) calc_bg_paper_pane_g9_ParamLimits

0x7811,	// (0x0006d9d9) image_qvga_pane_ParamLimits

0x7811,	// (0x0006d9d9) image_qvga_pane

0xe81d,	// (0x000749e5) bg_popup_sub_pane_cp04_ParamLimits

0x050c,	// (0x000666d4) popup_mup_playback_window_g1_ParamLimits

0x0518,	// (0x000666e0) popup_mup_playback_window_t1_ParamLimits

0x052d,	// (0x000666f5) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x000756ce) popup_mup_playback_window_t_ParamLimits

0x9fbb,	// (0x00070183) main_mup2_pane_g3_ParamLimits

0x9fbb,	// (0x00070183) main_mup2_pane_g3

0x7abf,	// (0x0006dc87) popup_toolbar_window_cp04

0x0928,	// (0x00066af0) popup_call2_audio_second_window_g3_ParamLimits

0x0928,	// (0x00066af0) popup_call2_audio_second_window_g3

0x0d32,	// (0x00066efa) popup_call2_audio_first_window_g4_ParamLimits

0x0d32,	// (0x00066efa) popup_call2_audio_first_window_g4

0x13b1,	// (0x00067579) popup_call2_audio_in_window_g4_ParamLimits

0x13b1,	// (0x00067579) popup_call2_audio_in_window_g4

0x9416,	// (0x0006f5de) aid_area_sk_bg_cut_ParamLimits

0x9416,	// (0x0006f5de) aid_area_sk_bg_cut

0x0542,	// (0x0006670a) aid_area_sk_bg_cut_2_ParamLimits

0x0542,	// (0x0006670a) aid_area_sk_bg_cut_2

0xa349,	// (0x00070511) aid_placing_details_win

0xa351,	// (0x00070519) aid_placing_details_win_2

0x1d8d,	// (0x00067f55) camera2_autofocus_pane_g1_ParamLimits

0x6ae5,	// (0x0006ccad) popup_fixed_preview_cale_window_ParamLimits

0x6ae5,	// (0x0006ccad) popup_fixed_preview_cale_window

0x02d5,	// (0x0006649d) navi_slider_pane_g3

0x02cc,	// (0x00066494) navi_slider_pane_g4

0x02c3,	// (0x0006648b) navi_slider_pane_g5

0x02d5,	// (0x0006649d) navi_slider_pane_g6

0x8d16,	// (0x0006eede) navi_slider_pane_g7

0x0401,	// (0x000665c9) mup_scale_pane_g3

0x040a,	// (0x000665d2) mup_scale_pane_g4

0x0413,	// (0x000665db) mup_scale_pane_g5

0x9191,	// (0x0006f359) mup_scale_pane_g6

0x919a,	// (0x0006f362) mup_scale_pane_g7

0x02d5,	// (0x0006649d) cams2_slider_pane_g3

0x1a09,	// (0x00067bd1) cams2_slider_pane_g4

0xa2a1,	// (0x00070469) cams2_slider_pane_g5

0x02d5,	// (0x0006649d) cams2_slider_pane_g6

0xa2a9,	// (0x00070471) cams2_slider_pane_g7

0x1c4b,	// (0x00067e13) camera2_autofocus_pane_cp_g1

0x1f33,	// (0x000680fb) bg_popup_preview_window_pane_cp02_ParamLimits

0x1f33,	// (0x000680fb) bg_popup_preview_window_pane_cp02

0x1f3f,	// (0x00068107) list_fp_cale_pane_ParamLimits

0x1f3f,	// (0x00068107) list_fp_cale_pane

0x1f4b,	// (0x00068113) popup_fixed_preview_cale_window_t1_ParamLimits

0x1f4b,	// (0x00068113) popup_fixed_preview_cale_window_t1

0xab3f,	// (0x00070d07) popup_fixed_preview_cale_window_t2_ParamLimits

0xab3f,	// (0x00070d07) popup_fixed_preview_cale_window_t2

0xab54,	// (0x00070d1c) popup_fixed_preview_cale_window_t3_ParamLimits

0xab54,	// (0x00070d1c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00075996) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00075996) popup_fixed_preview_cale_window_t

0xab69,	// (0x00070d31) list_single_fp_cale_pane_ParamLimits

0xab69,	// (0x00070d31) list_single_fp_cale_pane

0x1f81,	// (0x00068149) list_single_fp_cale_pane_g1_ParamLimits

0x1f81,	// (0x00068149) list_single_fp_cale_pane_g1

0x1f8d,	// (0x00068155) list_single_fp_cale_pane_g2_ParamLimits

0x1f8d,	// (0x00068155) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0007599d) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0007599d) list_single_fp_cale_pane_g

0x1fa6,	// (0x0006816e) list_single_fp_cale_pane_t1_ParamLimits

0x1fa6,	// (0x0006816e) list_single_fp_cale_pane_t1

0x1fb8,	// (0x00068180) list_single_fp_cale_pane_t2_ParamLimits

0x1fb8,	// (0x00068180) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x000759a4) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x000759a4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6885,	// (0x0006ca4d) main_dialer_pane

0xab79,	// (0x00070d41) aid_cell_size_keypad

0xab83,	// (0x00070d4b) dialer_ne_pane

0xab8d,	// (0x00070d55) grid_dialer_command_1_pane

0xab95,	// (0x00070d5d) grid_dialer_command_2_pane

0xab9d,	// (0x00070d65) grid_dialer_keypad_pane

0xabb1,	// (0x00070d79) bg_popup_call_pane_cp06_ParamLimits

0xabb1,	// (0x00070d79) bg_popup_call_pane_cp06

0xabbd,	// (0x00070d85) dialer_ne_clear_pane_ParamLimits

0xabbd,	// (0x00070d85) dialer_ne_clear_pane

0x1feb,	// (0x000681b3) dialer_ne_pane_g1

0x1ff3,	// (0x000681bb) dialer_ne_pane_t1_ParamLimits

0x1ff3,	// (0x000681bb) dialer_ne_pane_t1

0xabc9,	// (0x00070d91) dialer_ne_pane_t2_ParamLimits

0xabc9,	// (0x00070d91) dialer_ne_pane_t2

0xabe6,	// (0x00070dae) dialer_ne_pane_t3_ParamLimits

0xabe6,	// (0x00070dae) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x000759a9) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x000759a9) dialer_ne_pane_t

0xac0a,	// (0x00070dd2) dialer_ne_pane_t3_copy1_ParamLimits

0xac0a,	// (0x00070dd2) dialer_ne_pane_t3_copy1

0xac2e,	// (0x00070df6) cell_dialer_keypad_pane_ParamLimits

0xac2e,	// (0x00070df6) cell_dialer_keypad_pane

0xac45,	// (0x00070e0d) cell_dialer_command_1_pane_ParamLimits

0xac45,	// (0x00070e0d) cell_dialer_command_1_pane

0xac5b,	// (0x00070e23) cell_dialer_command_2_pane_ParamLimits

0xac5b,	// (0x00070e23) cell_dialer_command_2_pane

0x2005,	// (0x000681cd) bg_button_pane_cp02_ParamLimits

0x2005,	// (0x000681cd) bg_button_pane_cp02

0xac6a,	// (0x00070e32) cell_dialer_keypad_pane_g1_ParamLimits

0xac6a,	// (0x00070e32) cell_dialer_keypad_pane_g1

0x2005,	// (0x000681cd) bg_button_pane_cp03_ParamLimits

0x2005,	// (0x000681cd) bg_button_pane_cp03

0xac7e,	// (0x00070e46) cell_dialer_command_1_pane_g1_ParamLimits

0xac7e,	// (0x00070e46) cell_dialer_command_1_pane_g1

0x2011,	// (0x000681d9) bg_button_pane_cp04

0xac92,	// (0x00070e5a) cell_dialer_command_2_pane_g1

0x02a9,	// (0x00066471) bg_button_pane_cp06

0x2019,	// (0x000681e1) dialer_ne_clear_pane_g1

0x8c59,	// (0x0006ee21) navi_pane_g2

0x8c87,	// (0x0006ee4f) navi_pane_g3

0x0002,

0xf409,	// (0x000755d1) navi_pane_g

0x8cb2,	// (0x0006ee7a) navi_pane_mv_g2

0x8cd9,	// (0x0006eea1) navi_pane_mv_g5

0x8ce1,	// (0x0006eea9) navi_pane_mv_t1

0xe8e8,	// (0x00074ab0) main_clock2_pane

0xacc8,	// (0x00070e90) main_clock2_list_pane_ParamLimits

0xacc8,	// (0x00070e90) main_clock2_list_pane

0xacf2,	// (0x00070eba) main_clock2_pane_t1_ParamLimits

0xacf2,	// (0x00070eba) main_clock2_pane_t1

0xad20,	// (0x00070ee8) main_clock2_pane_t2_ParamLimits

0xad20,	// (0x00070ee8) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x000759b0) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x000759b0) main_clock2_pane_t

0xad89,	// (0x00070f51) popup_clock_analogue_window_cp03_ParamLimits

0xad89,	// (0x00070f51) popup_clock_analogue_window_cp03

0xada9,	// (0x00070f71) popup_clock_digital_window_cp02_ParamLimits

0xada9,	// (0x00070f71) popup_clock_digital_window_cp02

0xae1a,	// (0x00070fe2) main_clock2_list_single_pane_ParamLimits

0xae1a,	// (0x00070fe2) main_clock2_list_single_pane

0x02a9,	// (0x00066471) list_highlight_pane_cp05

0x2021,	// (0x000681e9) main_clock2_list_single_pane_t1

0x7abf,	// (0x0006dc87) popup_toolbar_window_cp04_ParamLimits

0xa3b5,	// (0x0007057d) camera2_autofocus_pane_g2_ParamLimits

0xa3b5,	// (0x0007057d) camera2_autofocus_pane_g2

0xa3c1,	// (0x00070589) camera2_autofocus_pane_g3_ParamLimits

0xa3c1,	// (0x00070589) camera2_autofocus_pane_g3

0xa3cd,	// (0x00070595) camera2_autofocus_pane_g4_ParamLimits

0xa3cd,	// (0x00070595) camera2_autofocus_pane_g4

0xa3d9,	// (0x000705a1) camera2_autofocus_pane_g5_ParamLimits

0xa3d9,	// (0x000705a1) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x000758f9) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x000758f9) camera2_autofocus_pane_g

0xa59e,	// (0x00070766) camera2_autofocus_pane_cp_g2

0xa5a6,	// (0x0007076e) camera2_autofocus_pane_cp_g3

0xa5ae,	// (0x00070776) camera2_autofocus_pane_cp_g4

0xa5b6,	// (0x0007077e) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0007595f) camera2_autofocus_pane_cp_g

0xaba9,	// (0x00070d71) popup_dialer_spcha_window

0x6885,	// (0x0006ca4d) bg_popup_sub_pane_cp07

0x202f,	// (0x000681f7) list_spcha_pane

0x2037,	// (0x000681ff) list_single_spcha_pane_ParamLimits

0x2037,	// (0x000681ff) list_single_spcha_pane

0x6885,	// (0x0006ca4d) list_highlight_pane_cp06

0x2048,	// (0x00068210) list_single_spcha_pane_t1

0x115b,	// (0x00067323) popup_call2_audio_out_window_g4_ParamLimits

0x115b,	// (0x00067323) popup_call2_audio_out_window_g4

0x6885,	// (0x0006ca4d) main_imed2_pane

0x1742,	// (0x0006790a) popup_imed_adjust2_window

0x9a57,	// (0x0006fc1f) popup_imed_trans_window_ParamLimits

0x9a57,	// (0x0006fc1f) popup_imed_trans_window

0x1a83,	// (0x00067c4b) popup_blid_sat_info2_window_t1

0x1a91,	// (0x00067c59) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0007588e) popup_blid_sat_info2_window_t

0xaec4,	// (0x0007108c) aid_size_cell_colour_35

0xaede,	// (0x000710a6) aid_size_cell_colour_112

0xaef5,	// (0x000710bd) aid_size_cell_effect

0x99cb,	// (0x0006fb93) bg_tb_trans_pane_cp02

0xef49,	// (0x00075111) heading_imed_pane

0xaf0f,	// (0x000710d7) listscroll_imed_pane

0x2056,	// (0x0006821e) heading_imed_pane_g1

0x205e,	// (0x00068226) heading_imed_pane_t1

0x206c,	// (0x00068234) grid_imed_colour_35_pane_ParamLimits

0x206c,	// (0x00068234) grid_imed_colour_35_pane

0xaf1b,	// (0x000710e3) grid_imed_effect_pane

0x2088,	// (0x00068250) list_imed_aspect_pane

0xaf2b,	// (0x000710f3) scroll_pane_cp027_ParamLimits

0xaf2b,	// (0x000710f3) scroll_pane_cp027

0xaf37,	// (0x000710ff) cell_imed_effect_pane_ParamLimits

0xaf37,	// (0x000710ff) cell_imed_effect_pane

0x2090,	// (0x00068258) cell_imed_colour_pane_ParamLimits

0x2090,	// (0x00068258) cell_imed_colour_pane

0x20da,	// (0x000682a2) cell_imed_colour_pane_g1_ParamLimits

0x20da,	// (0x000682a2) cell_imed_colour_pane_g1

0x20eb,	// (0x000682b3) hgihlgiht_grid_pane_cp016_ParamLimits

0x20eb,	// (0x000682b3) hgihlgiht_grid_pane_cp016

0xaf53,	// (0x0007111b) cell_imed_effect_pane_g1

0xaf5b,	// (0x00071123) grid_highlight_pane_cp017

0x20fc,	// (0x000682c4) list_imed_single_pane_ParamLimits

0x20fc,	// (0x000682c4) list_imed_single_pane

0x6885,	// (0x0006ca4d) list_highlight_pane_cp07

0x2110,	// (0x000682d8) list_imed_aspect_pane_comp1_t1

0x1716,	// (0x000678de) bg_tb_trans_pane_cp05

0x2132,	// (0x000682fa) popup_imed_adjust2_window_g1

0x2159,	// (0x00068321) popup_imed_adjust2_window_t1

0x2171,	// (0x00068339) slider_imed_adjust_pane

0x2185,	// (0x0006834d) slider_imed_adjust_pane_g1

0x2195,	// (0x0006835d) slider_imed_adjust_pane_g2

0x21a5,	// (0x0006836d) slider_imed_adjust_pane_g3

0x21b6,	// (0x0006837e) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x000759cd) slider_imed_adjust_pane_g

0xaf64,	// (0x0007112c) aid_size_cell_clipart2

0xaf70,	// (0x00071138) grid_imed_clipart_pane

0x21c7,	// (0x0006838f) scroll_pane_cp031

0xaf7a,	// (0x00071142) cell_imed_clipart_pane_ParamLimits

0xaf7a,	// (0x00071142) cell_imed_clipart_pane

0xaf98,	// (0x00071160) cell_imed_clipart_pane_g1

0x6885,	// (0x0006ca4d) grid_highlight_pane_cp014

0xacd4,	// (0x00070e9c) main_clock2_pane_g1_ParamLimits

0xacd4,	// (0x00070e9c) main_clock2_pane_g1

0xadc5,	// (0x00070f8d) aid_call2_pane_cp10

0xadd7,	// (0x00070f9f) aid_call_pane_cp10

0x01de,	// (0x000663a6) popup_clock_analogue_window_cp10_g1

0x01de,	// (0x000663a6) popup_clock_analogue_window_cp10_g2

0xade9,	// (0x00070fb1) popup_clock_analogue_window_cp10_g3

0xade9,	// (0x00070fb1) popup_clock_analogue_window_cp10_g4

0x01de,	// (0x000663a6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x000759bb) popup_clock_analogue_window_cp10_g

0xadfb,	// (0x00070fc3) popup_clock_analogue_window_cp10_t1

0xae2c,	// (0x00070ff4) clock_digital_number_pane_cp10_ParamLimits

0xae2c,	// (0x00070ff4) clock_digital_number_pane_cp10

0xae44,	// (0x0007100c) clock_digital_number_pane_cp11_ParamLimits

0xae44,	// (0x0007100c) clock_digital_number_pane_cp11

0xae5c,	// (0x00071024) clock_digital_number_pane_cp12_ParamLimits

0xae5c,	// (0x00071024) clock_digital_number_pane_cp12

0xae74,	// (0x0007103c) clock_digital_number_pane_cp13_ParamLimits

0xae74,	// (0x0007103c) clock_digital_number_pane_cp13

0xae8c,	// (0x00071054) clock_digital_separator_pane_cp10_ParamLimits

0xae8c,	// (0x00071054) clock_digital_separator_pane_cp10

0xaea4,	// (0x0007106c) popup_clock_digital_window_cp02_t1_ParamLimits

0xaea4,	// (0x0007106c) popup_clock_digital_window_cp02_t1

0xe815,	// (0x000749dd) clock_digital_number_pane_cp10_g1

0xe815,	// (0x000749dd) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x000759d6) clock_digital_number_pane_cp10_g

0xe815,	// (0x000749dd) clock_digital_separator_pane_cp10_g1

0xe815,	// (0x000749dd) clock_digital_separator_pane_g2_cp10

0x0279,	// (0x00066441) navi_pane_vded_g4

0x0282,	// (0x0006644a) navi_pane_vded_g5

0x028b,	// (0x00066453) navi_pane_vded_t1

0x6885,	// (0x0006ca4d) main_vded_pane

0xafa1,	// (0x00071169) main_vded_pane_g1

0xafad,	// (0x00071175) main_vded_pane_g2

0xafb7,	// (0x0007117f) main_vded_pane_g3

0x0002,

0xf813,	// (0x000759db) main_vded_pane_g

0xafc1,	// (0x00071189) main_vded_pane_t1

0xafcf,	// (0x00071197) main_vded_pane_t2

0x0001,

0xf81a,	// (0x000759e2) main_vded_pane_t

0xafdd,	// (0x000711a5) vded_slider_pane

0xafe7,	// (0x000711af) vded_video_pane

0x21cf,	// (0x00068397) vded_video_pane_g1

0xaff3,	// (0x000711bb) vded_video_pane_g2

0x1c4b,	// (0x00067e13) vded_video_pane_g3

0x0002,

0xf81f,	// (0x000759e7) vded_video_pane_g

0x21d9,	// (0x000683a1) vded_slider_pane_g1

0x1954,	// (0x00067b1c) vded_slider_pane_g2

0x21e2,	// (0x000683aa) vded_slider_pane_g3

0x21eb,	// (0x000683b3) vded_slider_pane_g4

0x21f4,	// (0x000683bc) vded_slider_pane_g5

0x0004,

0xf826,	// (0x000759ee) vded_slider_pane_g

0xaad7,	// (0x00070c9f) mup3_rocker_pane_ParamLimits

0xaad7,	// (0x00070c9f) mup3_rocker_pane

0xaffc,	// (0x000711c4) mup3_control_keys_pane_g1

0xb004,	// (0x000711cc) mup3_control_keys_pane_g2

0xb00c,	// (0x000711d4) mup3_control_keys_pane_g3

0xb014,	// (0x000711dc) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x000759f9) mup3_control_keys_pane_g

0x6b0d,	// (0x0006ccd5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6b0d,	// (0x0006ccd5) popup_toolbar2_fixed_window_cp01

0xaaf3,	// (0x00070cbb) popup_toolbar2_fixed_window_cp02_ParamLimits

0xaaf3,	// (0x00070cbb) popup_toolbar2_fixed_window_cp02

0x0a9a,	// (0x00066c62) popup_call2_audio_second_window_t4_ParamLimits

0x0a9a,	// (0x00066c62) popup_call2_audio_second_window_t4

0x0fc8,	// (0x00067190) popup_call2_audio_first_window_t6_ParamLimits

0x0fc8,	// (0x00067190) popup_call2_audio_first_window_t6

0x125e,	// (0x00067426) popup_call2_audio_out_window_t6_ParamLimits

0x125e,	// (0x00067426) popup_call2_audio_out_window_t6

0x6885,	// (0x0006ca4d) main_vitu_pane

0xb024,	// (0x000711ec) aid_size_cell_itu_ParamLimits

0xb024,	// (0x000711ec) aid_size_cell_itu

0x6b35,	// (0x0006ccfd) bg_popup_window_pane_cp08_ParamLimits

0x6b35,	// (0x0006ccfd) bg_popup_window_pane_cp08

0xb032,	// (0x000711fa) field_vitu_entry_pane_ParamLimits

0xb032,	// (0x000711fa) field_vitu_entry_pane

0xb041,	// (0x00071209) grid_vitu_function_pane_ParamLimits

0xb041,	// (0x00071209) grid_vitu_function_pane

0xb051,	// (0x00071219) grid_vitu_itu_pane_ParamLimits

0xb051,	// (0x00071219) grid_vitu_itu_pane

0xb061,	// (0x00071229) cell_vitu_itu_pane_ParamLimits

0xb061,	// (0x00071229) cell_vitu_itu_pane

0xb078,	// (0x00071240) cell_vitu_function_pane_ParamLimits

0xb078,	// (0x00071240) cell_vitu_function_pane

0x99cb,	// (0x0006fb93) bg_popup_sub_pane_cp08_ParamLimits

0x99cb,	// (0x0006fb93) bg_popup_sub_pane_cp08

0xb08c,	// (0x00071254) field_vitu_entry_pane_t1_ParamLimits

0xb08c,	// (0x00071254) field_vitu_entry_pane_t1

0x2215,	// (0x000683dd) field_vitu_entry_pane_t2_ParamLimits

0x2215,	// (0x000683dd) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00075a07) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00075a07) field_vitu_entry_pane_t

0x2232,	// (0x000683fa) bg_button_pane_cp05_ParamLimits

0x2232,	// (0x000683fa) bg_button_pane_cp05

0xb0a6,	// (0x0007126e) cell_vitu_itu_pane_g1

0xb0be,	// (0x00071286) cell_vitu_itu_pane_t1_ParamLimits

0xb0be,	// (0x00071286) cell_vitu_itu_pane_t1

0xb0d0,	// (0x00071298) cell_vitu_itu_pane_t2_ParamLimits

0xb0d0,	// (0x00071298) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00075a0c) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00075a0c) cell_vitu_itu_pane_t

0x2240,	// (0x00068408) bg_button_pane_cp07

0xb105,	// (0x000712cd) cell_vitu_function_pane_g1

0x6e9f,	// (0x0006d067) main_calc_pane_g1

0x68cb,	// (0x0006ca93) aid_visual_content_pane

0x6885,	// (0x0006ca4d) main_vradio_pane

0xb10e,	// (0x000712d6) main_vradio_pane_g1_ParamLimits

0xb10e,	// (0x000712d6) main_vradio_pane_g1

0x224a,	// (0x00068412) main_vradio_pane_g2_ParamLimits

0x224a,	// (0x00068412) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00075a13) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00075a13) main_vradio_pane_g

0xb11c,	// (0x000712e4) main_vradio_pane_t1_ParamLimits

0xb11c,	// (0x000712e4) main_vradio_pane_t1

0xb12e,	// (0x000712f6) main_vradio_pane_t2_ParamLimits

0xb12e,	// (0x000712f6) main_vradio_pane_t2

0x2257,	// (0x0006841f) main_vradio_pane_t3_ParamLimits

0x2257,	// (0x0006841f) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00075a18) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00075a18) main_vradio_pane_t

0xb140,	// (0x00071308) vradio_rocker_control_pane_ParamLimits

0xb140,	// (0x00071308) vradio_rocker_control_pane

0xb14c,	// (0x00071314) vradio_station_info_pane_ParamLimits

0xb14c,	// (0x00071314) vradio_station_info_pane

0x226b,	// (0x00068433) vradio_frequency_info_pane_ParamLimits

0x226b,	// (0x00068433) vradio_frequency_info_pane

0x1c4b,	// (0x00067e13) vradio_station_info_pane_g1

0x227a,	// (0x00068442) vradio_station_info_pane_t1_ParamLimits

0x227a,	// (0x00068442) vradio_station_info_pane_t1

0x229c,	// (0x00068464) vradio_station_info_pane_t2_ParamLimits

0x229c,	// (0x00068464) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00075a1f) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00075a1f) vradio_station_info_pane_t

0x22ae,	// (0x00068476) vradio_tuning_pane

0x22b6,	// (0x0006847e) vradio_rocker_control_pane_g1

0x22be,	// (0x00068486) vradio_rocker_control_pane_g2

0x22c6,	// (0x0006848e) vradio_rocker_control_pane_g3

0x22ce,	// (0x00068496) vradio_rocker_control_pane_g4

0x22d6,	// (0x0006849e) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00075a24) vradio_rocker_control_pane_g

0xb159,	// (0x00071321) vradio_frequency_info_pane_g1

0x22de,	// (0x000684a6) vradio_frequency_info_pane_t1_ParamLimits

0x22de,	// (0x000684a6) vradio_frequency_info_pane_t1

0xb163,	// (0x0007132b) vradio_tuning_pane_g1

0xb16e,	// (0x00071336) vradio_tuning_pane_t1

0x690c,	// (0x0006cad4) area_side_right_pane_ParamLimits

0x690c,	// (0x0006cad4) area_side_right_pane

0x16dd,	// (0x000678a5) status_small_pane_g1

0x16e5,	// (0x000678ad) status_small_pane_g2

0x16ee,	// (0x000678b6) status_small_pane_g3

0x16f7,	// (0x000678bf) status_small_pane_g4

0x0003,

0xf61c,	// (0x000757e4) status_small_pane_g

0x1700,	// (0x000678c8) status_small_pane_t1

0x6885,	// (0x0006ca4d) main_video3_pane

0x22f2,	// (0x000684ba) cams_zoom_vslider_pane

0x22fa,	// (0x000684c2) image3_wide_pane_ParamLimits

0x22fa,	// (0x000684c2) image3_wide_pane

0x2314,	// (0x000684dc) image3_wide_small_pane

0x2320,	// (0x000684e8) main_video3_pane_g1_ParamLimits

0x2320,	// (0x000684e8) main_video3_pane_g1

0x233c,	// (0x00068504) main_video3_pane_g2_ParamLimits

0x233c,	// (0x00068504) main_video3_pane_g2

0x0001,

0xf867,	// (0x00075a2f) main_video3_pane_g_ParamLimits

0xf867,	// (0x00075a2f) main_video3_pane_g

0x2358,	// (0x00068520) main_video3_pane_t1_ParamLimits

0x2358,	// (0x00068520) main_video3_pane_t1

0x2383,	// (0x0006854b) main_video3_pane_t2_ParamLimits

0x2383,	// (0x0006854b) main_video3_pane_t2

0x23b0,	// (0x00068578) main_video3_pane_t3_ParamLimits

0x23b0,	// (0x00068578) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00075a34) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00075a34) main_video3_pane_t

0x23dd,	// (0x000685a5) cams_zoom_vslider_pane_g1

0x23e6,	// (0x000685ae) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00075a3b) cams_zoom_vslider_pane_g

0x23ee,	// (0x000685b6) small_slider_vertical_pane

0x1c4b,	// (0x00067e13) small_slider_vertical_pane_g1

0x1c4b,	// (0x00067e13) small_slider_vertical_pane_g2

0x23f6,	// (0x000685be) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00075a40) small_slider_vertical_pane_g

0x6885,	// (0x0006ca4d) main_hwr_training_pane

0x23ff,	// (0x000685c7) hwr_training_instruct_pane_ParamLimits

0x23ff,	// (0x000685c7) hwr_training_instruct_pane

0xb17d,	// (0x00071345) hwr_training_navi_pane_ParamLimits

0xb17d,	// (0x00071345) hwr_training_navi_pane

0xb197,	// (0x0007135f) hwr_training_write_pane_ParamLimits

0xb197,	// (0x0007135f) hwr_training_write_pane

0x6885,	// (0x0006ca4d) bg_frame_shadow_pane

0x2436,	// (0x000685fe) hwr_training_write_pane_g1

0x243e,	// (0x00068606) hwr_training_write_pane_g2

0x2446,	// (0x0006860e) hwr_training_write_pane_g3

0x244e,	// (0x00068616) hwr_training_write_pane_g4

0x2456,	// (0x0006861e) hwr_training_write_pane_g5

0x245e,	// (0x00068626) hwr_training_write_pane_g6

0x2466,	// (0x0006862e) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00075a47) hwr_training_write_pane_g

0xb1cf,	// (0x00071397) hwr_training_navi_pane_g1_ParamLimits

0xb1cf,	// (0x00071397) hwr_training_navi_pane_g1

0xb1e1,	// (0x000713a9) hwr_training_navi_pane_g2_ParamLimits

0xb1e1,	// (0x000713a9) hwr_training_navi_pane_g2

0xb1f3,	// (0x000713bb) hwr_training_navi_pane_g3_ParamLimits

0xb1f3,	// (0x000713bb) hwr_training_navi_pane_g3

0xb203,	// (0x000713cb) hwr_training_navi_pane_g4_ParamLimits

0xb203,	// (0x000713cb) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00075a56) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00075a56) hwr_training_navi_pane_g

0xb21d,	// (0x000713e5) hwr_training_navi_pane_t1

0xb22b,	// (0x000713f3) list_single_hwr_training_instruct_pane_ParamLimits

0xb22b,	// (0x000713f3) list_single_hwr_training_instruct_pane

0x246e,	// (0x00068636) list_single_hwr_training_instruct_pane_t1

0x1b8b,	// (0x00067d53) bg_frame_shadow_pane_g1

0x247d,	// (0x00068645) bg_frame_shadow_pane_g2

0x2485,	// (0x0006864d) bg_frame_shadow_pane_g3

0x248d,	// (0x00068655) bg_frame_shadow_pane_g4

0x2495,	// (0x0006865d) bg_frame_shadow_pane_g5

0x249d,	// (0x00068665) bg_frame_shadow_pane_g6

0x24a5,	// (0x0006866d) bg_frame_shadow_pane_g7

0xe9b3,	// (0x00074b7b) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00075a61) bg_frame_shadow_pane_g

0x6885,	// (0x0006ca4d) main_video_tele_dialer_pane

0xb24a,	// (0x00071412) aid_size_cell_video_keypad_ParamLimits

0xb24a,	// (0x00071412) aid_size_cell_video_keypad

0xb25a,	// (0x00071422) grid_video_dialer_keypad_pane_ParamLimits

0xb25a,	// (0x00071422) grid_video_dialer_keypad_pane

0xb28e,	// (0x00071456) video_down_pane_cp_ParamLimits

0xb28e,	// (0x00071456) video_down_pane_cp

0xb2b8,	// (0x00071480) cell_video_dialer_keypad_pane_ParamLimits

0xb2b8,	// (0x00071480) cell_video_dialer_keypad_pane

0x24ad,	// (0x00068675) bg_button_pane_cp08_ParamLimits

0x24ad,	// (0x00068675) bg_button_pane_cp08

0xb2cf,	// (0x00071497) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb2cf,	// (0x00071497) cell_video_dialer_keypad_pane_g1

0xaacb,	// (0x00070c93) mup3_rocker2_pane_ParamLimits

0xaacb,	// (0x00070c93) mup3_rocker2_pane

0x1c4b,	// (0x00067e13) mup3_rocker2_pane_g1

0x99d9,	// (0x0006fba1) main_dialer2_pane

0x6885,	// (0x0006ca4d) main_mp4_pane

0xb312,	// (0x000714da) main_mp4_pane_g1_ParamLimits

0xb312,	// (0x000714da) main_mp4_pane_g1

0xb320,	// (0x000714e8) main_mp4_pane_g2_ParamLimits

0xb320,	// (0x000714e8) main_mp4_pane_g2

0xb32e,	// (0x000714f6) main_mp4_pane_g3_ParamLimits

0xb32e,	// (0x000714f6) main_mp4_pane_g3

0xb381,	// (0x00071549) main_mp4_pane_g4_ParamLimits

0xb381,	// (0x00071549) main_mp4_pane_g4

0xb39b,	// (0x00071563) main_mp4_pane_g5_ParamLimits

0xb39b,	// (0x00071563) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00075a81) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00075a81) main_mp4_pane_g

0xb3cf,	// (0x00071597) main_mp4_pane_t1_ParamLimits

0xb3cf,	// (0x00071597) main_mp4_pane_t1

0xb42b,	// (0x000715f3) main_mp4_pane_t2_ParamLimits

0xb42b,	// (0x000715f3) main_mp4_pane_t2

0x3665,	// (0x0006982d) main_mp4_pane_t3_ParamLimits

0x3665,	// (0x0006982d) main_mp4_pane_t3

0xb47d,	// (0x00071645) main_mp4_pane_t4_ParamLimits

0xb47d,	// (0x00071645) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00075a8e) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00075a8e) main_mp4_pane_t

0xb4bd,	// (0x00071685) mp4_progress_pane_ParamLimits

0xb4bd,	// (0x00071685) mp4_progress_pane

0xb507,	// (0x000716cf) mp4_rocker_pane_ParamLimits

0xb507,	// (0x000716cf) mp4_rocker_pane

0x368d,	// (0x00069855) mp4_progress_pane_t1

0x36a6,	// (0x0006986e) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00075a97) mp4_progress_pane_t

0x36bf,	// (0x00069887) mup_progress_pane_cp04

0x1c4b,	// (0x00067e13) mp4_rocker_pane_g1

0xb529,	// (0x000716f1) aid_cell_size_keypad2_ParamLimits

0xb529,	// (0x000716f1) aid_cell_size_keypad2

0xb539,	// (0x00071701) dialer2_ne_pane_ParamLimits

0xb539,	// (0x00071701) dialer2_ne_pane

0xb545,	// (0x0007170d) grid_dialer2_keypad_pane_ParamLimits

0xb545,	// (0x0007170d) grid_dialer2_keypad_pane

0x3a5c,	// (0x00069c24) bg_popup_call_pane_cp07_ParamLimits

0x3a5c,	// (0x00069c24) bg_popup_call_pane_cp07

0xb553,	// (0x0007171b) dialer2_ne_pane_t1_ParamLimits

0xb553,	// (0x0007171b) dialer2_ne_pane_t1

0xb578,	// (0x00071740) cell_dialer2_keypad_pane_ParamLimits

0xb578,	// (0x00071740) cell_dialer2_keypad_pane

0x36e7,	// (0x000698af) bg_button_pane_pane_cp04_ParamLimits

0x36e7,	// (0x000698af) bg_button_pane_pane_cp04

0xb58f,	// (0x00071757) cell_dialer2_keypad_pane_g1_ParamLimits

0xb58f,	// (0x00071757) cell_dialer2_keypad_pane_g1

0x7991,	// (0x0006db59) aid_placing_vt_set_content_ParamLimits

0x7991,	// (0x0006db59) aid_placing_vt_set_content

0x79b9,	// (0x0006db81) aid_placing_vt_set_title_ParamLimits

0x79b9,	// (0x0006db81) aid_placing_vt_set_title

0x6885,	// (0x0006ca4d) main_image3_pane

0xb629,	// (0x000717f1) area_side_right_pane_cp01_ParamLimits

0xb629,	// (0x000717f1) area_side_right_pane_cp01

0xe3ab,	// (0x00074573) main_image3_pane_g1_ParamLimits

0xe3ab,	// (0x00074573) main_image3_pane_g1

0xb658,	// (0x00071820) main_image3_pane_g2_ParamLimits

0xb658,	// (0x00071820) main_image3_pane_g2

0xb671,	// (0x00071839) main_image3_pane_g3_ParamLimits

0xb671,	// (0x00071839) main_image3_pane_g3

0xb68a,	// (0x00071852) main_image3_pane_g4_ParamLimits

0xb68a,	// (0x00071852) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00075aa6) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00075aa6) main_image3_pane_g

0xb6a3,	// (0x0007186b) main_image3_pane_t1_ParamLimits

0xb6a3,	// (0x0007186b) main_image3_pane_t1

0xb6c8,	// (0x00071890) main_image3_pane_t2_ParamLimits

0xb6c8,	// (0x00071890) main_image3_pane_t2

0xb6e7,	// (0x000718af) main_image3_pane_t3_ParamLimits

0xb6e7,	// (0x000718af) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00075aaf) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00075aaf) main_image3_pane_t

0x6b35,	// (0x0006ccfd) grid_sctrl_middle_pane_cp01_ParamLimits

0x6b35,	// (0x0006ccfd) grid_sctrl_middle_pane_cp01

0xb748,	// (0x00071910) cell_sctrl_middle_pane_cp01_ParamLimits

0xb748,	// (0x00071910) cell_sctrl_middle_pane_cp01

0xb759,	// (0x00071921) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb759,	// (0x00071921) cell_sctrl_middle_pane_cp01_g1

0x6885,	// (0x0006ca4d) main_call4_pane

0xb766,	// (0x0007192e) aid_size_button_call4_ParamLimits

0xb766,	// (0x0007192e) aid_size_button_call4

0xb798,	// (0x00071960) call4_windows_pane_ParamLimits

0xb798,	// (0x00071960) call4_windows_pane

0xb7b4,	// (0x0007197c) grid_call4_button_pane_ParamLimits

0xb7b4,	// (0x0007197c) grid_call4_button_pane

0x36f3,	// (0x000698bb) call4_windows_conf_pane

0x370e,	// (0x000698d6) popup_call4_audio_first_window_ParamLimits

0x370e,	// (0x000698d6) popup_call4_audio_first_window

0x375c,	// (0x00069924) popup_call4_audio_second_window_ParamLimits

0x375c,	// (0x00069924) popup_call4_audio_second_window

0x3772,	// (0x0006993a) popup_call4_audio_wait_window_ParamLimits

0x3772,	// (0x0006993a) popup_call4_audio_wait_window

0xb7d8,	// (0x000719a0) cell_call4_button_pane_ParamLimits

0xb7d8,	// (0x000719a0) cell_call4_button_pane

0xb7fb,	// (0x000719c3) bg_button_pane_cp09_ParamLimits

0xb7fb,	// (0x000719c3) bg_button_pane_cp09

0xb807,	// (0x000719cf) cell_call4_button_pane_g1_ParamLimits

0xb807,	// (0x000719cf) cell_call4_button_pane_g1

0xb814,	// (0x000719dc) cell_call4_button_pane_t1_ParamLimits

0xb814,	// (0x000719dc) cell_call4_button_pane_t1

0x37ba,	// (0x00069982) popup_call4_audio_conf_window_ParamLimits

0x37ba,	// (0x00069982) popup_call4_audio_conf_window

0xab00,	// (0x00070cc8) mup3_progress_pane_t1_ParamLimits

0xab17,	// (0x00070cdf) mup3_progress_pane_t2_ParamLimits

0x1ef6,	// (0x000680be) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00075988) mup3_progress_pane_t_ParamLimits

0x1f0d,	// (0x000680d5) mup_progress_pane_cp03_ParamLimits

0xb01c,	// (0x000711e4) mup3_control_keys_pane_g4_copy1

0xb4eb,	// (0x000716b3) mp4_rocker2_pane_ParamLimits

0xb4eb,	// (0x000716b3) mp4_rocker2_pane

0x37dc,	// (0x000699a4) mp4_rocker2_pane_g1

0x37d4,	// (0x0006999c) mp4_rocker2_pane_g2

0xb826,	// (0x000719ee) mp4_rocker2_pane_g3

0xb82e,	// (0x000719f6) mp4_rocker2_pane_g4

0xb836,	// (0x000719fe) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00075ab8) mp4_rocker2_pane_g

0x6885,	// (0x0006ca4d) main_camera4_pane

0x6885,	// (0x0006ca4d) main_video4_pane

0xb26a,	// (0x00071432) main_video_tele_dialer_pane_t1_ParamLimits

0xb26a,	// (0x00071432) main_video_tele_dialer_pane_t1

0xb27c,	// (0x00071444) main_video_tele_dialer_pane_t2_ParamLimits

0xb27c,	// (0x00071444) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00075a72) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00075a72) main_video_tele_dialer_pane_t

0xb856,	// (0x00071a1e) cam4_autofocus_pane_ParamLimits

0xb856,	// (0x00071a1e) cam4_autofocus_pane

0xb86e,	// (0x00071a36) cam4_image_uncrop_pane_ParamLimits

0xb86e,	// (0x00071a36) cam4_image_uncrop_pane

0xb887,	// (0x00071a4f) cam4_indicators_pane_ParamLimits

0xb887,	// (0x00071a4f) cam4_indicators_pane

0xb8a3,	// (0x00071a6b) main_camera4_pane_g1_ParamLimits

0xb8a3,	// (0x00071a6b) main_camera4_pane_g1

0xb8af,	// (0x00071a77) main_camera4_pane_g2_ParamLimits

0xb8af,	// (0x00071a77) main_camera4_pane_g2

0xb8af,	// (0x00071a77) main_camera4_pane_g3_ParamLimits

0xb8af,	// (0x00071a77) main_camera4_pane_g3

0xb8bb,	// (0x00071a83) main_camera4_pane_g4_ParamLimits

0xb8bb,	// (0x00071a83) main_camera4_pane_g4

0xb8c7,	// (0x00071a8f) main_camera4_pane_g5_ParamLimits

0xb8c7,	// (0x00071a8f) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00075ac3) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00075ac3) main_camera4_pane_g

0xb8e1,	// (0x00071aa9) main_camera4_pane_t1_ParamLimits

0xb8e1,	// (0x00071aa9) main_camera4_pane_t1

0x1e7b,	// (0x00068043) bg_tb_trans_pane_cp06

0xb933,	// (0x00071afb) cam4_indicators_pane_g1

0xb940,	// (0x00071b08) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00075ade) cam4_indicators_pane_g

0xb960,	// (0x00071b28) cam4_indicators_pane_t1

0xb98a,	// (0x00071b52) main_video4_pane_g1_ParamLimits

0xb98a,	// (0x00071b52) main_video4_pane_g1

0xb996,	// (0x00071b5e) main_video4_pane_g2_ParamLimits

0xb996,	// (0x00071b5e) main_video4_pane_g2

0xb9a2,	// (0x00071b6a) main_video4_pane_g3_ParamLimits

0xb9a2,	// (0x00071b6a) main_video4_pane_g3

0xb9ae,	// (0x00071b76) main_video4_pane_g4_ParamLimits

0xb9ae,	// (0x00071b76) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00075ae5) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00075ae5) main_video4_pane_g

0xb9d0,	// (0x00071b98) vid4_indicators_pane_ParamLimits

0xb9d0,	// (0x00071b98) vid4_indicators_pane

0xb9ee,	// (0x00071bb6) video4_image_uncrop_cif_pane_ParamLimits

0xb9ee,	// (0x00071bb6) video4_image_uncrop_cif_pane

0xb9fd,	// (0x00071bc5) video4_image_uncrop_nhd_pane_ParamLimits

0xb9fd,	// (0x00071bc5) video4_image_uncrop_nhd_pane

0xb86e,	// (0x00071a36) video4_image_uncrop_vga_pane_ParamLimits

0xb86e,	// (0x00071a36) video4_image_uncrop_vga_pane

0x99cb,	// (0x0006fb93) bg_tb_trans_pane_cp07

0xb933,	// (0x00071afb) vid4_indicators_pane_g1

0xba16,	// (0x00071bde) vid4_indicators_pane_g2

0xba23,	// (0x00071beb) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00075af0) vid4_indicators_pane_g

0xba50,	// (0x00071c18) vid4_indicators_pane_t1

0xba6a,	// (0x00071c32) cam4_autofocus_pane_g1

0xba72,	// (0x00071c3a) cam4_autofocus_pane_g2

0xba7a,	// (0x00071c42) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00075afb) cam4_autofocus_pane_g

0xba82,	// (0x00071c4a) cam4_autofocus_pane_g3_copy1

0xb29c,	// (0x00071464) video_down_pane_cp_t1

0xb2aa,	// (0x00071472) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00075a77) video_down_pane_cp_t

0x6b35,	// (0x0006ccfd) popup_vitu2_window_ParamLimits

0x6b35,	// (0x0006ccfd) popup_vitu2_window

0xba8a,	// (0x00071c52) aid_size_cell2_itu2_ParamLimits

0xba8a,	// (0x00071c52) aid_size_cell2_itu2

0xbaac,	// (0x00071c74) aid_size_cell_itu2_ParamLimits

0xbaac,	// (0x00071c74) aid_size_cell_itu2

0x3a5c,	// (0x00069c24) bg_popup_window_pane_cp09_ParamLimits

0x3a5c,	// (0x00069c24) bg_popup_window_pane_cp09

0xbaf0,	// (0x00071cb8) field_vitu2_entry_pane_ParamLimits

0xbaf0,	// (0x00071cb8) field_vitu2_entry_pane

0xbb10,	// (0x00071cd8) grid_vitu2_function_pane_ParamLimits

0xbb10,	// (0x00071cd8) grid_vitu2_function_pane

0xbb54,	// (0x00071d1c) grid_vitu2_itu_pane_ParamLimits

0xbb54,	// (0x00071d1c) grid_vitu2_itu_pane

0xbbc8,	// (0x00071d90) cell_vitu2_itu_pane_ParamLimits

0xbbc8,	// (0x00071d90) cell_vitu2_itu_pane

0xbbdf,	// (0x00071da7) cell_vitu2_function_pane_ParamLimits

0xbbdf,	// (0x00071da7) cell_vitu2_function_pane

0x37e4,	// (0x000699ac) bg_popup_call_pane_cp08_ParamLimits

0x37e4,	// (0x000699ac) bg_popup_call_pane_cp08

0x37fd,	// (0x000699c5) field_vitu2_entry_pane_g1

0x3809,	// (0x000699d1) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00075b02) field_vitu2_entry_pane_g

0x5a44,	// (0x0006bc0c) field_vitu2_entry_pane_t1_ParamLimits

0x5a44,	// (0x0006bc0c) field_vitu2_entry_pane_t1

0x5a5f,	// (0x0006bc27) field_vitu2_entry_pane_t2_ParamLimits

0x5a5f,	// (0x0006bc27) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00075b09) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00075b09) field_vitu2_entry_pane_t

0xbc23,	// (0x00071deb) bg_button_pane_cp010_ParamLimits

0xbc23,	// (0x00071deb) bg_button_pane_cp010

0xbc31,	// (0x00071df9) cell_vitu2_itu_pane_g1

0xbc4f,	// (0x00071e17) cell_vitu2_itu_pane_t1_ParamLimits

0xbc4f,	// (0x00071e17) cell_vitu2_itu_pane_t1

0x5a7c,	// (0x0006bc44) cell_vitu2_itu_pane_t2_ParamLimits

0x5a7c,	// (0x0006bc44) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00075b13) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00075b13) cell_vitu2_itu_pane_t

0x99cb,	// (0x0006fb93) bg_button_pane_cp011

0xbca1,	// (0x00071e69) cell_vitu2_function_pane_g1

0x6885,	// (0x0006ca4d) main_myfav_hc_pane

0xb729,	// (0x000718f1) popup_image3_note_pane_ParamLimits

0xb729,	// (0x000718f1) popup_image3_note_pane

0xb737,	// (0x000718ff) popup_image3_tool_bar_pane_ParamLimits

0xb737,	// (0x000718ff) popup_image3_tool_bar_pane

0x5aea,	// (0x0006bcb2) cell_vitu2_itu_pane_t3_ParamLimits

0x5aea,	// (0x0006bcb2) cell_vitu2_itu_pane_t3

0x6885,	// (0x0006ca4d) bg_popup_trans_pane

0x382b,	// (0x000699f3) grid_image3_tool_bar_pane

0x3835,	// (0x000699fd) bg_popup_trans_pane_g1

0xecf2,	// (0x00074eba) bg_popup_trans_pane_g2

0x383d,	// (0x00069a05) bg_popup_trans_pane_g3

0x3845,	// (0x00069a0d) bg_popup_trans_pane_g4

0x384d,	// (0x00069a15) bg_popup_trans_pane_g5

0x3855,	// (0x00069a1d) bg_popup_trans_pane_g6

0x385d,	// (0x00069a25) bg_popup_trans_pane_g7

0x3865,	// (0x00069a2d) bg_popup_trans_pane_g8

0xecd2,	// (0x00074e9a) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00075b1a) bg_popup_trans_pane_g

0x386d,	// (0x00069a35) cell_image3_tool_bar_pane_ParamLimits

0x386d,	// (0x00069a35) cell_image3_tool_bar_pane

0x1c4b,	// (0x00067e13) cell_image3_tool_bar_pane_g1

0x6885,	// (0x0006ca4d) bg_popup_trans_pane_cp1

0x3883,	// (0x00069a4b) popup_image3_note_pane_t1

0x3891,	// (0x00069a59) popup_image3_note_pane_t2

0x389f,	// (0x00069a67) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00075b2d) popup_image3_note_pane_t

0x38af,	// (0x00069a77) popup_image3_note_pane_t3_copy1

0xbcb5,	// (0x00071e7d) bg_myfav_hc_instruction_pane_ParamLimits

0xbcb5,	// (0x00071e7d) bg_myfav_hc_instruction_pane

0xbccd,	// (0x00071e95) cell_myfav_contact_pane_ParamLimits

0xbccd,	// (0x00071e95) cell_myfav_contact_pane

0xbce7,	// (0x00071eaf) cell_myfav_contact_pane_cp1_ParamLimits

0xbce7,	// (0x00071eaf) cell_myfav_contact_pane_cp1

0xbcff,	// (0x00071ec7) cell_myfav_contact_pane_cp2_ParamLimits

0xbcff,	// (0x00071ec7) cell_myfav_contact_pane_cp2

0xbd17,	// (0x00071edf) cell_myfav_contact_pane_cp3_ParamLimits

0xbd17,	// (0x00071edf) cell_myfav_contact_pane_cp3

0xbd2e,	// (0x00071ef6) cell_myfav_contact_pane_cp4_ParamLimits

0xbd2e,	// (0x00071ef6) cell_myfav_contact_pane_cp4

0xbd44,	// (0x00071f0c) cell_myfav_contact_pane_cp5_ParamLimits

0xbd44,	// (0x00071f0c) cell_myfav_contact_pane_cp5

0xbd58,	// (0x00071f20) cell_myfav_contact_pane_cp6_ParamLimits

0xbd58,	// (0x00071f20) cell_myfav_contact_pane_cp6

0xbd6c,	// (0x00071f34) cell_myfav_contact_pane_cp7_ParamLimits

0xbd6c,	// (0x00071f34) cell_myfav_contact_pane_cp7

0x38bd,	// (0x00069a85) listscroll_gen_pane_cp05

0xbd84,	// (0x00071f4c) main_myfav_hc_pane_g1_ParamLimits

0xbd84,	// (0x00071f4c) main_myfav_hc_pane_g1

0xbd9e,	// (0x00071f66) main_myfav_hc_pane_g2_ParamLimits

0xbd9e,	// (0x00071f66) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x00075b34) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x00075b34) main_myfav_hc_pane_g

0xbdd0,	// (0x00071f98) main_myfav_hc_pane_t1_ParamLimits

0xbdd0,	// (0x00071f98) main_myfav_hc_pane_t1

0x38c6,	// (0x00069a8e) main_myfav_hc_pane_t2_ParamLimits

0x38c6,	// (0x00069a8e) main_myfav_hc_pane_t2

0x38d8,	// (0x00069aa0) main_myfav_hc_pane_t3_ParamLimits

0x38d8,	// (0x00069aa0) main_myfav_hc_pane_t3

0xbde7,	// (0x00071faf) main_myfav_hc_pane_t4_ParamLimits

0xbde7,	// (0x00071faf) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00075b3b) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00075b3b) main_myfav_hc_pane_t

0x1c4b,	// (0x00067e13) bg_myfav_hc_instruction_pane_g1

0x38ea,	// (0x00069ab2) cell_myfav_contact_pane_g1_ParamLimits

0x38ea,	// (0x00069ab2) cell_myfav_contact_pane_g1

0x38ea,	// (0x00069ab2) cell_myfav_contact_pane_g2_ParamLimits

0x38ea,	// (0x00069ab2) cell_myfav_contact_pane_g2

0x38f6,	// (0x00069abe) cell_myfav_contact_pane_g3_ParamLimits

0x38f6,	// (0x00069abe) cell_myfav_contact_pane_g3

0x1ee0,	// (0x000680a8) cell_myfav_contact_pane_g4_ParamLimits

0x1ee0,	// (0x000680a8) cell_myfav_contact_pane_g4

0x3903,	// (0x00069acb) cell_myfav_contact_pane_g5_ParamLimits

0x3903,	// (0x00069acb) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00075b46) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00075b46) cell_myfav_contact_pane_g

0xbdb8,	// (0x00071f80) main_myfav_hc_pane_g3_ParamLimits

0xbdb8,	// (0x00071f80) main_myfav_hc_pane_g3

0x6a46,	// (0x0006cc0e) popup_adpt_find_window

0xbe11,	// (0x00071fd9) afind_page_pane_ParamLimits

0xbe11,	// (0x00071fd9) afind_page_pane

0xbe1e,	// (0x00071fe6) aid_size_cell_afind_ParamLimits

0xbe1e,	// (0x00071fe6) aid_size_cell_afind

0xbe38,	// (0x00072000) bg_popup_sub_pane_cp09_ParamLimits

0xbe38,	// (0x00072000) bg_popup_sub_pane_cp09

0xbe45,	// (0x0007200d) find_pane_cp01_ParamLimits

0xbe45,	// (0x0007200d) find_pane_cp01

0x390f,	// (0x00069ad7) grid_afind_control_pane_ParamLimits

0x390f,	// (0x00069ad7) grid_afind_control_pane

0xbe52,	// (0x0007201a) grid_afind_pane_ParamLimits

0xbe52,	// (0x0007201a) grid_afind_pane

0xbe6e,	// (0x00072036) cell_afind_pane_ParamLimits

0xbe6e,	// (0x00072036) cell_afind_pane

0x1c4b,	// (0x00067e13) afind_page_pane_g1

0xbeba,	// (0x00072082) afind_page_pane_g2

0xbec3,	// (0x0007208b) afind_page_pane_g3

0x0002,

0xf989,	// (0x00075b51) afind_page_pane_g

0xbecc,	// (0x00072094) afind_page_pane_t1

0x3923,	// (0x00069aeb) cell_afind_grid_control_pane_ParamLimits

0x3923,	// (0x00069aeb) cell_afind_grid_control_pane

0x36e7,	// (0x000698af) bg_button_pane_cp69_ParamLimits

0x36e7,	// (0x000698af) bg_button_pane_cp69

0xbeec,	// (0x000720b4) cell_afind_pane_g1_ParamLimits

0xbeec,	// (0x000720b4) cell_afind_pane_g1

0xbef9,	// (0x000720c1) cell_afind_pane_t1_ParamLimits

0xbef9,	// (0x000720c1) cell_afind_pane_t1

0xeae9,	// (0x00074cb1) bg_button_pane_cp72

0x3932,	// (0x00069afa) cell_afind_grid_control_pane_g1

0x9543,	// (0x0006f70b) aid_image_placing_area_ParamLimits

0x9543,	// (0x0006f70b) aid_image_placing_area

0x21fd,	// (0x000683c5) field_vitu_entry_pane_g1_ParamLimits

0x21fd,	// (0x000683c5) field_vitu_entry_pane_g1

0x2209,	// (0x000683d1) field_vitu_entry_pane_g2_ParamLimits

0x2209,	// (0x000683d1) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00075a02) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00075a02) field_vitu_entry_pane_g

0xb0a6,	// (0x0007126e) cell_vitu_itu_pane_g1_ParamLimits

0xb0e8,	// (0x000712b0) cell_vitu_itu_pane_t3_ParamLimits

0xb0e8,	// (0x000712b0) cell_vitu_itu_pane_t3

0x368d,	// (0x00069855) mp4_progress_pane_t1_ParamLimits

0x36a6,	// (0x0006986e) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00075a97) mp4_progress_pane_t_ParamLimits

0x36bf,	// (0x00069887) mup_progress_pane_cp04_ParamLimits

0xbdfb,	// (0x00071fc3) main_myfav_hc_pane_t5_ParamLimits

0xbdfb,	// (0x00071fc3) main_myfav_hc_pane_t5

0x570d,	// (0x0006b8d5) aid_zoom_text_primary

0x6a46,	// (0x0006cc0e) popup_adpt_find_window_ParamLimits

0x99cb,	// (0x0006fb93) main_cam_set_pane

0xb895,	// (0x00071a5d) cam4_zoom_pane_ParamLimits

0xb895,	// (0x00071a5d) cam4_zoom_pane

0xbf0b,	// (0x000720d3) main_cam_set_pane_g1_ParamLimits

0xbf0b,	// (0x000720d3) main_cam_set_pane_g1

0xbf19,	// (0x000720e1) main_cam_set_pane_g2_ParamLimits

0xbf19,	// (0x000720e1) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00075b58) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00075b58) main_cam_set_pane_g

0xbf25,	// (0x000720ed) main_cam_set_pane_t1_ParamLimits

0xbf25,	// (0x000720ed) main_cam_set_pane_t1

0xbf41,	// (0x00072109) main_cset_listscroll_pane_ParamLimits

0xbf41,	// (0x00072109) main_cset_listscroll_pane

0xbf70,	// (0x00072138) main_cset_slider_pane_ParamLimits

0xbf70,	// (0x00072138) main_cset_slider_pane

0x3943,	// (0x00069b0b) main_cset_list_pane_ParamLimits

0x3943,	// (0x00069b0b) main_cset_list_pane

0x3953,	// (0x00069b1b) scroll_pane_cp028

0xbf91,	// (0x00072159) aid_area_touch_slider

0xbfad,	// (0x00072175) cset_slider_pane

0xbfd7,	// (0x0007219f) main_cset_slider_pane_g1

0xbfec,	// (0x000721b4) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00075b5d) main_cset_slider_pane_g

0x398c,	// (0x00069b54) main_cset_slider_pane_t1

0xc0a8,	// (0x00072270) main_cset_slider_pane_t2

0xc0c2,	// (0x0007228a) main_cset_slider_pane_t3

0xc0dc,	// (0x000722a4) main_cset_slider_pane_t4

0xc0f6,	// (0x000722be) main_cset_slider_pane_t5

0xc112,	// (0x000722da) main_cset_slider_pane_t6

0xc127,	// (0x000722ef) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00075b82) main_cset_slider_pane_t

0xc22b,	// (0x000723f3) cset_list_set_pane_ParamLimits

0xc22b,	// (0x000723f3) cset_list_set_pane

0xc23c,	// (0x00072404) aid_position_infowindow_above

0xc244,	// (0x0007240c) aid_position_infowindow_below

0xc24c,	// (0x00072414) cset_list_set_pane_g1_ParamLimits

0xc24c,	// (0x00072414) cset_list_set_pane_g1

0x5b37,	// (0x0006bcff) cset_list_set_pane_g3_ParamLimits

0x5b37,	// (0x0006bcff) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00075ba1) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00075ba1) cset_list_set_pane_g

0x5b46,	// (0x0006bd0e) cset_list_set_pane_t1_ParamLimits

0x5b46,	// (0x0006bd0e) cset_list_set_pane_t1

0x99cb,	// (0x0006fb93) list_highlight_pane_cp021_ParamLimits

0x99cb,	// (0x0006fb93) list_highlight_pane_cp021

0x0401,	// (0x000665c9) cset_slider_pane_g1

0x0413,	// (0x000665db) cset_slider_pane_g2

0x040a,	// (0x000665d2) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00075ba6) cset_slider_pane_g

0xc258,	// (0x00072420) aid_area_touch_cam4_zoom

0xc260,	// (0x00072428) cam4_zoom_cont_pane

0xc268,	// (0x00072430) cam4_zoom_pane_g1

0xc270,	// (0x00072438) cam4_zoom_pane_g2

0xc278,	// (0x00072440) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00075bad) cam4_zoom_pane_g

0x41d2,	// (0x0006a39a) cam4_zoom_cont_pane_g1

0x41db,	// (0x0006a3a3) cam4_zoom_cont_pane_g2

0x41e4,	// (0x0006a3ac) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00075bb4) cam4_zoom_cont_pane_g

0xb780,	// (0x00071948) call4_image_pane_ParamLimits

0xb780,	// (0x00071948) call4_image_pane

0x36f3,	// (0x000698bb) call4_windows_conf_pane_ParamLimits

0x373a,	// (0x00069902) popup_call4_audio_in_window_ParamLimits

0x373a,	// (0x00069902) popup_call4_audio_in_window

0x6885,	// (0x0006ca4d) bg_popup_call2_act_pane_cp02

0x37b2,	// (0x0006997a) call4_list_conf_pane

0x1c4b,	// (0x00067e13) call4_image_pane_g1

0x1c4b,	// (0x00067e13) call4_image_pane_g2

0x0001,

0xf700,	// (0x000758c8) call4_image_pane_g

0x3a2c,	// (0x00069bf4) list_single_graphic_popup_conf4_pane_ParamLimits

0x3a2c,	// (0x00069bf4) list_single_graphic_popup_conf4_pane

0x6885,	// (0x0006ca4d) list_highlight_pane_cp022

0x3a6a,	// (0x00069c32) list_single_graphic_popup_conf4_pane_g1

0x00db,	// (0x000662a3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00075bbb) list_single_graphic_popup_conf4_pane_g

0x3a72,	// (0x00069c3a) list_single_graphic_popup_conf4_pane_t1

0x7b13,	// (0x0006dcdb) popup_vtel_slider_window_ParamLimits

0x7b13,	// (0x0006dcdb) popup_vtel_slider_window

0x36d5,	// (0x0006989d) dialer2_ne_pane_t2_ParamLimits

0x36d5,	// (0x0006989d) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00075a9c) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00075a9c) dialer2_ne_pane_t

0x99cb,	// (0x0006fb93) bg_popup_sub_pane_cp010_ParamLimits

0x99cb,	// (0x0006fb93) bg_popup_sub_pane_cp010

0xc280,	// (0x00072448) popup_vtel_slider_window_g1_ParamLimits

0xc280,	// (0x00072448) popup_vtel_slider_window_g1

0xc28c,	// (0x00072454) popup_vtel_slider_window_g2_ParamLimits

0xc28c,	// (0x00072454) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00075bc0) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00075bc0) popup_vtel_slider_window_g

0xc2d4,	// (0x0007249c) vtel_slider_pane_ParamLimits

0xc2d4,	// (0x0007249c) vtel_slider_pane

0xc2e3,	// (0x000724ab) vtel_slider_pane_g1_ParamLimits

0xc2e3,	// (0x000724ab) vtel_slider_pane_g1

0xc2f0,	// (0x000724b8) vtel_slider_pane_g2_ParamLimits

0xc2f0,	// (0x000724b8) vtel_slider_pane_g2

0xc2fd,	// (0x000724c5) vtel_slider_pane_g3_ParamLimits

0xc2fd,	// (0x000724c5) vtel_slider_pane_g3

0xc2e3,	// (0x000724ab) vtel_slider_pane_g4_ParamLimits

0xc2e3,	// (0x000724ab) vtel_slider_pane_g4

0xc30a,	// (0x000724d2) vtel_slider_pane_g5_ParamLimits

0xc30a,	// (0x000724d2) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00075bc9) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00075bc9) vtel_slider_pane_g

0x6885,	// (0x0006ca4d) main_gallery2_pane

0xbad2,	// (0x00071c9a) aid_size_row_itut2_dropdow_list_ParamLimits

0xbad2,	// (0x00071c9a) aid_size_row_itut2_dropdow_list

0xbb32,	// (0x00071cfa) grid_vitu2_function_top_pane_ParamLimits

0xbb32,	// (0x00071cfa) grid_vitu2_function_top_pane

0xbb84,	// (0x00071d4c) popup_vitu2_dropdown_list_window_ParamLimits

0xbb84,	// (0x00071d4c) popup_vitu2_dropdown_list_window

0xbba4,	// (0x00071d6c) popup_vitu2_match_list_window

0xc317,	// (0x000724df) cell_vitu2_function_top_pane_ParamLimits

0xc317,	// (0x000724df) cell_vitu2_function_top_pane

0xc337,	// (0x000724ff) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc337,	// (0x000724ff) cell_vitu2_function_top_pane_cp01

0xc355,	// (0x0007251d) cell_vitu2_function_top_wide_pane_ParamLimits

0xc355,	// (0x0007251d) cell_vitu2_function_top_wide_pane

0x99cb,	// (0x0006fb93) bg_button_pane_cp012

0xc373,	// (0x0007253b) cell_vitu2_function_top_pane_g1

0xc382,	// (0x0007254a) bg_button_pane_cp013_ParamLimits

0xc382,	// (0x0007254a) bg_button_pane_cp013

0xc39e,	// (0x00072566) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc39e,	// (0x00072566) cell_vitu2_function_top_wide_pane_g1

0x6b35,	// (0x0006ccfd) bg_popup_sub_pane_cp20

0xc3b6,	// (0x0007257e) list_vitu2_match_list_pane

0x3835,	// (0x000699fd) bg_popup_sub_pane_cp20_g1

0x383d,	// (0x00069a05) bg_popup_sub_pane_cp20_g2

0xecf2,	// (0x00074eba) bg_popup_sub_pane_cp20_g3

0x3845,	// (0x00069a0d) bg_popup_sub_pane_cp20_g4

0xecd2,	// (0x00074e9a) bg_popup_sub_pane_cp20_g5

0x3a88,	// (0x00069c50) bg_popup_sub_pane_cp20_g6

0x3855,	// (0x00069a1d) bg_popup_sub_pane_cp20_g7

0x385d,	// (0x00069a25) bg_popup_sub_pane_cp20_g8

0x3865,	// (0x00069a2d) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00075bd4) bg_popup_sub_pane_cp20_g

0xc3ce,	// (0x00072596) list_vitu2_match_list_item_pane_ParamLimits

0xc3ce,	// (0x00072596) list_vitu2_match_list_item_pane

0xc3e0,	// (0x000725a8) list_vitu2_match_list_item_pane_t1

0x6885,	// (0x0006ca4d) bg_popup_sub_pane_cp21

0xf095,	// (0x0007525d) grid_vitu2_dropdown_list_pane

0xc3ee,	// (0x000725b6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc3ee,	// (0x000725b6) cell_vitu2_dropdown_list_char_pane

0xc413,	// (0x000725db) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc413,	// (0x000725db) cell_vitu2_dropdown_list_ctrl_pane

0x3aa2,	// (0x00069c6a) cell_vitu2_dropdown_list_char_pane_g1

0x3a99,	// (0x00069c61) cell_vitu2_dropdown_list_char_pane_g2

0x3a90,	// (0x00069c58) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x00075bf1) cell_vitu2_dropdown_list_char_pane_g

0xc441,	// (0x00072609) cell_vitu2_dropdown_list_char_pane_t1

0xc44f,	// (0x00072617) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc44f,	// (0x00072617) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc45f,	// (0x00072627) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc45f,	// (0x00072627) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc470,	// (0x00072638) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc470,	// (0x00072638) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc480,	// (0x00072648) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc480,	// (0x00072648) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1e7b,	// (0x00068043) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1e7b,	// (0x00068043) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00075bf8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00075bf8) cell_vitu2_dropdown_list_ctrl_pane_g

0xc499,	// (0x00072661) aid_size_cell_gallery2_ParamLimits

0xc499,	// (0x00072661) aid_size_cell_gallery2

0xc4a7,	// (0x0007266f) grid_gallery2_pane_ParamLimits

0xc4a7,	// (0x0007266f) grid_gallery2_pane

0xc4b6,	// (0x0007267e) scroll_pane_cp029_ParamLimits

0xc4b6,	// (0x0007267e) scroll_pane_cp029

0xc4c2,	// (0x0007268a) cell_gallery2_pane_ParamLimits

0xc4c2,	// (0x0007268a) cell_gallery2_pane

0x3aab,	// (0x00069c73) cell_gallery2_pane_g2

0xc4ec,	// (0x000726b4) cell_gallery2_pane_g3

0x3ab5,	// (0x00069c7d) cell_gallery2_pane_g4

0x3abd,	// (0x00069c85) cell_gallery2_pane_g5

0x02a9,	// (0x00066471) grid_highlight_pane_cp10

0xbba4,	// (0x00071d6c) popup_vitu2_match_list_window_ParamLimits

0xbbb8,	// (0x00071d80) popup_vitu2_query_window_ParamLimits

0xbbb8,	// (0x00071d80) popup_vitu2_query_window

0x6885,	// (0x0006ca4d) bg_vitu2_candi_button_pane

0x3aa2,	// (0x00069c6a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3a99,	// (0x00069c61) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3a90,	// (0x00069c58) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5bad,	// (0x0006bd75) bg_button_pane_cp015

0xc4f4,	// (0x000726bc) bg_button_pane_cp016

0xc507,	// (0x000726cf) bg_button_pane_cp017

0x1716,	// (0x000678de) bg_popup_sub_pane_cp22

0x3ac5,	// (0x00069c8d) popup_vitu2_query_window_g1

0x5be0,	// (0x0006bda8) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00075c03) popup_vitu2_query_window_g

0x5bfd,	// (0x0006bdc5) popup_vitu2_query_window_t1_ParamLimits

0x5bfd,	// (0x0006bdc5) popup_vitu2_query_window_t1

0x5c30,	// (0x0006bdf8) popup_vitu2_query_window_t2_ParamLimits

0x5c30,	// (0x0006bdf8) popup_vitu2_query_window_t2

0x5c42,	// (0x0006be0a) popup_vitu2_query_window_t3_ParamLimits

0x5c42,	// (0x0006be0a) popup_vitu2_query_window_t3

0xc52b,	// (0x000726f3) popup_vitu2_query_window_t4_ParamLimits

0xc52b,	// (0x000726f3) popup_vitu2_query_window_t4

0xc54e,	// (0x00072716) popup_vitu2_query_window_t5_ParamLimits

0xc54e,	// (0x00072716) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00075c0a) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00075c0a) popup_vitu2_query_window_t

0x393b,	// (0x00069b03) main_cset_text_pane

0xbf91,	// (0x00072159) aid_area_touch_slider_ParamLimits

0xbfad,	// (0x00072175) cset_slider_pane_ParamLimits

0xbfd7,	// (0x0007219f) main_cset_slider_pane_g1_ParamLimits

0xbfec,	// (0x000721b4) main_cset_slider_pane_g2_ParamLimits

0x395c,	// (0x00069b24) main_cset_slider_pane_g3_ParamLimits

0x395c,	// (0x00069b24) main_cset_slider_pane_g3

0xc001,	// (0x000721c9) main_cset_slider_pane_g4_ParamLimits

0xc001,	// (0x000721c9) main_cset_slider_pane_g4

0xc010,	// (0x000721d8) main_cset_slider_pane_g5_ParamLimits

0xc010,	// (0x000721d8) main_cset_slider_pane_g5

0xc01c,	// (0x000721e4) main_cset_slider_pane_g6_ParamLimits

0xc01c,	// (0x000721e4) main_cset_slider_pane_g6

0xf995,	// (0x00075b5d) main_cset_slider_pane_g_ParamLimits

0x398c,	// (0x00069b54) main_cset_slider_pane_t1_ParamLimits

0xc0a8,	// (0x00072270) main_cset_slider_pane_t2_ParamLimits

0xc0c2,	// (0x0007228a) main_cset_slider_pane_t3_ParamLimits

0xc0dc,	// (0x000722a4) main_cset_slider_pane_t4_ParamLimits

0xc0f6,	// (0x000722be) main_cset_slider_pane_t5_ParamLimits

0xc112,	// (0x000722da) main_cset_slider_pane_t6_ParamLimits

0xc127,	// (0x000722ef) main_cset_slider_pane_t7_ParamLimits

0xc151,	// (0x00072319) main_cset_slider_pane_t8_ParamLimits

0xc151,	// (0x00072319) main_cset_slider_pane_t8

0xc179,	// (0x00072341) main_cset_slider_pane_t9_ParamLimits

0xc179,	// (0x00072341) main_cset_slider_pane_t9

0xc1a1,	// (0x00072369) main_cset_slider_pane_t10_ParamLimits

0xc1a1,	// (0x00072369) main_cset_slider_pane_t10

0xc1c9,	// (0x00072391) main_cset_slider_pane_t11_ParamLimits

0xc1c9,	// (0x00072391) main_cset_slider_pane_t11

0xc1f1,	// (0x000723b9) main_cset_slider_pane_t12_ParamLimits

0xc1f1,	// (0x000723b9) main_cset_slider_pane_t12

0xc20e,	// (0x000723d6) main_cset_slider_pane_t13_ParamLimits

0xc20e,	// (0x000723d6) main_cset_slider_pane_t13

0xf9ba,	// (0x00075b82) main_cset_slider_pane_t_ParamLimits

0x6885,	// (0x0006ca4d) bg_popup_sub_pane_cp011

0x3ad1,	// (0x00069c99) main_cset_text_pane_g1

0x3ad9,	// (0x00069ca1) main_cset_text_pane_t1

0x3ae7,	// (0x00069caf) main_cset_text_pane_t2

0x3af5,	// (0x00069cbd) main_cset_text_pane_t3

0x3b03,	// (0x00069ccb) main_cset_text_pane_t4

0x3b11,	// (0x00069cd9) main_cset_text_pane_t5

0x3b1f,	// (0x00069ce7) main_cset_text_pane_t6

0x3b2d,	// (0x00069cf5) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00075c19) main_cset_text_pane_t

0x6885,	// (0x0006ca4d) main_cam4_burst_pane

0x6885,	// (0x0006ca4d) main_cam5_pane

0xbeda,	// (0x000720a2) bg_button_pane_cp019

0xbee3,	// (0x000720ab) bg_button_pane_cp020

0x3968,	// (0x00069b30) main_cset_slider_pane_g7_ParamLimits

0x3968,	// (0x00069b30) main_cset_slider_pane_g7

0x3974,	// (0x00069b3c) main_cset_slider_pane_g8_ParamLimits

0x3974,	// (0x00069b3c) main_cset_slider_pane_g8

0xc030,	// (0x000721f8) main_cset_slider_pane_g9_ParamLimits

0xc030,	// (0x000721f8) main_cset_slider_pane_g9

0xc03c,	// (0x00072204) main_cset_slider_pane_g10_ParamLimits

0xc03c,	// (0x00072204) main_cset_slider_pane_g10

0xc048,	// (0x00072210) main_cset_slider_pane_g11_ParamLimits

0xc048,	// (0x00072210) main_cset_slider_pane_g11

0xc054,	// (0x0007221c) main_cset_slider_pane_g12_ParamLimits

0xc054,	// (0x0007221c) main_cset_slider_pane_g12

0xc060,	// (0x00072228) main_cset_slider_pane_g13_ParamLimits

0xc060,	// (0x00072228) main_cset_slider_pane_g13

0xc06c,	// (0x00072234) main_cset_slider_pane_g14_ParamLimits

0xc06c,	// (0x00072234) main_cset_slider_pane_g14

0xc078,	// (0x00072240) main_cset_slider_pane_g15_ParamLimits

0xc078,	// (0x00072240) main_cset_slider_pane_g15

0x39ba,	// (0x00069b82) main_cset_slider_pane_t14_ParamLimits

0x39ba,	// (0x00069b82) main_cset_slider_pane_t14

0x39f3,	// (0x00069bbb) main_cset_slider_pane_t15_ParamLimits

0x39f3,	// (0x00069bbb) main_cset_slider_pane_t15

0xc571,	// (0x00072739) aid_cam4_burst_size_cell_ParamLimits

0xc571,	// (0x00072739) aid_cam4_burst_size_cell

0xc58d,	// (0x00072755) grid_cam4_burst_pane_ParamLimits

0xc58d,	// (0x00072755) grid_cam4_burst_pane

0xc5bf,	// (0x00072787) linegrid_cam4_burst_pane_ParamLimits

0xc5bf,	// (0x00072787) linegrid_cam4_burst_pane

0xc5df,	// (0x000727a7) scroll_pane_cp30_ParamLimits

0xc5df,	// (0x000727a7) scroll_pane_cp30

0xc5eb,	// (0x000727b3) cell_cam4_burst_pane_ParamLimits

0xc5eb,	// (0x000727b3) cell_cam4_burst_pane

0x3b3b,	// (0x00069d03) linegrid_cam4_burst_pane_g1_ParamLimits

0x3b3b,	// (0x00069d03) linegrid_cam4_burst_pane_g1

0xc62b,	// (0x000727f3) linegrid_cam4_burst_pane_g2_ParamLimits

0xc62b,	// (0x000727f3) linegrid_cam4_burst_pane_g2

0x3b48,	// (0x00069d10) linegrid_cam4_burst_pane_g3_ParamLimits

0x3b48,	// (0x00069d10) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00075c28) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00075c28) linegrid_cam4_burst_pane_g

0xc63c,	// (0x00072804) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc63c,	// (0x00072804) linegrid_cam4_burst_pane_g3_copy1

0x3b55,	// (0x00069d1d) linegrid_cam4_burst_pane_g4_ParamLimits

0x3b55,	// (0x00069d1d) linegrid_cam4_burst_pane_g4

0xc656,	// (0x0007281e) linegrid_cam4_burst_pane_g5_ParamLimits

0xc656,	// (0x0007281e) linegrid_cam4_burst_pane_g5

0xc667,	// (0x0007282f) linegrid_cam4_burst_pane_g6_ParamLimits

0xc667,	// (0x0007282f) linegrid_cam4_burst_pane_g6

0x3b62,	// (0x00069d2a) linegrid_cam4_burst_pane_g7_ParamLimits

0x3b62,	// (0x00069d2a) linegrid_cam4_burst_pane_g7

0xc67e,	// (0x00072846) cell_cam4_burst_pane_g1

0x3b7b,	// (0x00069d43) main_cam5_pane_t1_ParamLimits

0x3b7b,	// (0x00069d43) main_cam5_pane_t1

0x3b8d,	// (0x00069d55) main_cam5_pane_t2_ParamLimits

0x3b8d,	// (0x00069d55) main_cam5_pane_t2

0x3b9f,	// (0x00069d67) main_cam5_pane_t3_ParamLimits

0x3b9f,	// (0x00069d67) main_cam5_pane_t3

0x3bb1,	// (0x00069d79) main_cam5_pane_t4_ParamLimits

0x3bb1,	// (0x00069d79) main_cam5_pane_t4

0x3bc9,	// (0x00069d91) main_cam5_pane_t5_ParamLimits

0x3bc9,	// (0x00069d91) main_cam5_pane_t5

0x3bdd,	// (0x00069da5) main_cam5_pane_t6_ParamLimits

0x3bdd,	// (0x00069da5) main_cam5_pane_t6

0x3bf1,	// (0x00069db9) main_cam5_pane_t7_ParamLimits

0x3bf1,	// (0x00069db9) main_cam5_pane_t7

0x3c03,	// (0x00069dcb) main_cam5_pane_t8_ParamLimits

0x3c03,	// (0x00069dcb) main_cam5_pane_t8

0x3c21,	// (0x00069de9) main_cam5_pane_t9_ParamLimits

0x3c21,	// (0x00069de9) main_cam5_pane_t9

0x3c33,	// (0x00069dfb) main_cam5_pane_t10_ParamLimits

0x3c33,	// (0x00069dfb) main_cam5_pane_t10

0x3c45,	// (0x00069e0d) main_cam5_pane_t11_ParamLimits

0x3c45,	// (0x00069e0d) main_cam5_pane_t11

0x3c59,	// (0x00069e21) main_cam5_pane_t12_ParamLimits

0x3c59,	// (0x00069e21) main_cam5_pane_t12

0x3c70,	// (0x00069e38) main_cam5_pane_t13_ParamLimits

0x3c70,	// (0x00069e38) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x00075c34) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x00075c34) main_cam5_pane_t

0x6afe,	// (0x0006ccc6) popup_scut_keymap_window_ParamLimits

0x6afe,	// (0x0006ccc6) popup_scut_keymap_window

0xc691,	// (0x00072859) aid_size_cell_brow_shortcut

0x02a9,	// (0x00066471) bg_popup_window_pane_cp010

0xc69d,	// (0x00072865) grid_scut_pane

0xc6a9,	// (0x00072871) cell_scut_pane_ParamLimits

0xc6a9,	// (0x00072871) cell_scut_pane

0xc6c4,	// (0x0007288c) cell_scut_pane_g1

0x3c93,	// (0x00069e5b) cell_scut_pane_t1

0x3ca2,	// (0x00069e6a) cell_scut_pane_t2

0xc6cd,	// (0x00072895) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00075c4f) cell_scut_pane_t

0xa72c,	// (0x000708f4) main_mup3_pane_g8_ParamLimits

0xa72c,	// (0x000708f4) main_mup3_pane_g8

0xbae0,	// (0x00071ca8) area_vitu2_query_pane_ParamLimits

0xbae0,	// (0x00071ca8) area_vitu2_query_pane

0x5bbf,	// (0x0006bd87) input_focus_pane_cp08

0x3cb1,	// (0x00069e79) area_vitu2_query_pane_g1

0x5cc0,	// (0x0006be88) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00075c56) area_vitu2_query_pane_g

0xc6db,	// (0x000728a3) area_vitu2_query_pane_t1_ParamLimits

0xc6db,	// (0x000728a3) area_vitu2_query_pane_t1

0xc6ef,	// (0x000728b7) area_vitu2_query_pane_t2_ParamLimits

0xc6ef,	// (0x000728b7) area_vitu2_query_pane_t2

0x5cd1,	// (0x0006be99) area_vitu2_query_pane_t3_ParamLimits

0x5cd1,	// (0x0006be99) area_vitu2_query_pane_t3

0x5cf9,	// (0x0006bec1) area_vitu2_query_pane_t4_ParamLimits

0x5cf9,	// (0x0006bec1) area_vitu2_query_pane_t4

0x5d21,	// (0x0006bee9) area_vitu2_query_pane_t5_ParamLimits

0x5d21,	// (0x0006bee9) area_vitu2_query_pane_t5

0x5d49,	// (0x0006bf11) area_vitu2_query_pane_t6_ParamLimits

0x5d49,	// (0x0006bf11) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00075c5b) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00075c5b) area_vitu2_query_pane_t

0xc703,	// (0x000728cb) bg_button_pane_cp018

0xc711,	// (0x000728d9) bg_button_pane_cp021

0x5d95,	// (0x0006bf5d) bg_button_pane_cp022

0x5da6,	// (0x0006bf6e) input_focus_pane_cp09

0x8c05,	// (0x0006edcd) aid_size_touch_mv_arrow_left

0x8c30,	// (0x0006edf8) aid_size_touch_mv_arrow_right

0xc090,	// (0x00072258) main_cset_slider_pane_g16_ParamLimits

0xc090,	// (0x00072258) main_cset_slider_pane_g16

0xc09c,	// (0x00072264) main_cset_slider_pane_g17_ParamLimits

0xc09c,	// (0x00072264) main_cset_slider_pane_g17

0xc67e,	// (0x00072846) cell_cam4_burst_pane_g1_ParamLimits

0x6885,	// (0x0006ca4d) compa_mode_pane

0xc298,	// (0x00072460) popup_vtel_slider_window_g3_ParamLimits

0xc298,	// (0x00072460) popup_vtel_slider_window_g3

0xc2ac,	// (0x00072474) popup_vtel_slider_window_g4_ParamLimits

0xc2ac,	// (0x00072474) popup_vtel_slider_window_g4

0xc2c0,	// (0x00072488) popup_vtel_slider_window_t1_ParamLimits

0xc2c0,	// (0x00072488) popup_vtel_slider_window_t1

0x6885,	// (0x0006ca4d) main_cl_pane

0x1742,	// (0x0006790a) popup_imed_adjust2_window_ParamLimits

0x1716,	// (0x000678de) bg_tb_trans_pane_cp05_ParamLimits

0x2132,	// (0x000682fa) popup_imed_adjust2_window_g1_ParamLimits

0x2141,	// (0x00068309) popup_imed_adjust2_window_g2_ParamLimits

0x2141,	// (0x00068309) popup_imed_adjust2_window_g2

0x214d,	// (0x00068315) popup_imed_adjust2_window_g3_ParamLimits

0x214d,	// (0x00068315) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x000759c6) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x000759c6) popup_imed_adjust2_window_g

0x2159,	// (0x00068321) popup_imed_adjust2_window_t1_ParamLimits

0x2171,	// (0x00068339) slider_imed_adjust_pane_ParamLimits

0x2185,	// (0x0006834d) slider_imed_adjust_pane_g1_ParamLimits

0x2195,	// (0x0006835d) slider_imed_adjust_pane_g2_ParamLimits

0x21a5,	// (0x0006836d) slider_imed_adjust_pane_g3_ParamLimits

0x21b6,	// (0x0006837e) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x000759cd) slider_imed_adjust_pane_g_ParamLimits

0xb83e,	// (0x00071a06) aid_touch_area_cam4_ParamLimits

0xb83e,	// (0x00071a06) aid_touch_area_cam4

0xb84e,	// (0x00071a16) battery_pane_cp01

0xb8d5,	// (0x00071a9d) main_camera4_pane_g6_ParamLimits

0xb8d5,	// (0x00071a9d) main_camera4_pane_g6

0xb8f3,	// (0x00071abb) main_camera4_pane_t2_ParamLimits

0xb8f3,	// (0x00071abb) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00075ad0) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00075ad0) main_camera4_pane_t

0xb97a,	// (0x00071b42) aid_touch_area_vid4_ParamLimits

0xb97a,	// (0x00071b42) aid_touch_area_vid4

0xb9ba,	// (0x00071b82) main_video4_pane_g5_ParamLimits

0xb9ba,	// (0x00071b82) main_video4_pane_g5

0xb9de,	// (0x00071ba6) vid4_progress_pane_ParamLimits

0xb9de,	// (0x00071ba6) vid4_progress_pane

0x3980,	// (0x00069b48) main_cset_slider_pane_g18_ParamLimits

0x3980,	// (0x00069b48) main_cset_slider_pane_g18

0x3b6f,	// (0x00069d37) cell_cam4_burst_pane_g2_ParamLimits

0x3b6f,	// (0x00069d37) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00075c2f) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00075c2f) cell_cam4_burst_pane_g

0xc71d,	// (0x000728e5) bg_cl_pane_ParamLimits

0xc71d,	// (0x000728e5) bg_cl_pane

0xc729,	// (0x000728f1) cl_header_pane_ParamLimits

0xc729,	// (0x000728f1) cl_header_pane

0xc735,	// (0x000728fd) cl_listscroll_pane_ParamLimits

0xc735,	// (0x000728fd) cl_listscroll_pane

0x3cbd,	// (0x00069e85) bg_cl_pane_g1

0x3cc5,	// (0x00069e8d) bg_cl_pane_g2

0x3ccd,	// (0x00069e95) bg_cl_pane_g3

0x3cd5,	// (0x00069e9d) bg_cl_pane_g4

0x3cdd,	// (0x00069ea5) bg_cl_pane_g5

0x3ce5,	// (0x00069ead) bg_cl_pane_g6

0x3ced,	// (0x00069eb5) bg_cl_pane_g7

0x3cf5,	// (0x00069ebd) bg_cl_pane_g8

0x3cfd,	// (0x00069ec5) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x00075c6a) bg_cl_pane_g

0xc741,	// (0x00072909) aid_height_cl_leading_ParamLimits

0xc741,	// (0x00072909) aid_height_cl_leading

0xc74d,	// (0x00072915) aid_height_cl_text_ParamLimits

0xc74d,	// (0x00072915) aid_height_cl_text

0x6b35,	// (0x0006ccfd) bg_cl_header_pane_ParamLimits

0x6b35,	// (0x0006ccfd) bg_cl_header_pane

0xc765,	// (0x0007292d) cl_header_pane_g1_ParamLimits

0xc765,	// (0x0007292d) cl_header_pane_g1

0xc772,	// (0x0007293a) cl_header_pane_t1_ParamLimits

0xc772,	// (0x0007293a) cl_header_pane_t1

0x3d05,	// (0x00069ecd) cl_list_pane

0x3953,	// (0x00069b1b) hc_scroll_pane_cp01

0xecd2,	// (0x00074e9a) bg_cl_header_pane_g1

0x3835,	// (0x000699fd) bg_cl_header_pane_g2

0xecf2,	// (0x00074eba) bg_cl_header_pane_g3

0x3845,	// (0x00069a0d) bg_cl_header_pane_g4

0x383d,	// (0x00069a05) bg_cl_header_pane_g5

0x3a88,	// (0x00069c50) bg_cl_header_pane_g6

0x385d,	// (0x00069a25) bg_cl_header_pane_g7

0x3865,	// (0x00069a2d) bg_cl_header_pane_g8

0x3855,	// (0x00069a1d) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x00075c7d) bg_cl_header_pane_g

0xc784,	// (0x0007294c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc784,	// (0x0007294c) hc_cl_list_double_graphic_heading_pane

0xc3ce,	// (0x00072596) hc_cl_list_single_graphic_pane_ParamLimits

0xc3ce,	// (0x00072596) hc_cl_list_single_graphic_pane

0xc794,	// (0x0007295c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc794,	// (0x0007295c) hc_cl_list_single_graphic_pane_g1

0xc7a0,	// (0x00072968) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc7a0,	// (0x00072968) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00075c90) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00075c90) hc_cl_list_single_graphic_pane_g

0xc7b4,	// (0x0007297c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc7b4,	// (0x0007297c) hc_cl_list_single_graphic_pane_t1

0xc794,	// (0x0007295c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc794,	// (0x0007295c) hc_cl_list_double_graphic_heading_pane_g1

0xc7c9,	// (0x00072991) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc7c9,	// (0x00072991) hc_cl_list_double_graphic_heading_pane_g2

0xc7dd,	// (0x000729a5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc7dd,	// (0x000729a5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00075c95) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00075c95) hc_cl_list_double_graphic_heading_pane_g

0xc7f1,	// (0x000729b9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc7f1,	// (0x000729b9) hc_cl_list_double_graphic_heading_pane_t1

0xc806,	// (0x000729ce) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc806,	// (0x000729ce) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00075c9c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00075c9c) hc_cl_list_double_graphic_heading_pane_t

0xc82d,	// (0x000729f5) vid4_progress_pane_g1

0xc839,	// (0x00072a01) vid4_progress_pane_g2

0xc845,	// (0x00072a0d) vid4_progress_pane_g3

0xc854,	// (0x00072a1c) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00075ca1) vid4_progress_pane_g

0xc872,	// (0x00072a3a) vid4_progress_pane_t1

0xc888,	// (0x00072a50) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00075cac) vid4_progress_pane_t

0xc8b3,	// (0x00072a7b) wait_bar_pane_cp07

0x1a38,	// (0x00067c00) blid_firmament_pane_ParamLimits

0x1a7b,	// (0x00067c43) popup_blid_sat_info2_window_g1

0x1a9f,	// (0x00067c67) popup_blid_sat_info2_window_t3

0x1aad,	// (0x00067c75) popup_blid_sat_info2_window_t4

0x1abb,	// (0x00067c83) popup_blid_sat_info2_window_t5

0x1ac9,	// (0x00067c91) popup_blid_sat_info2_window_t6

0x1ad9,	// (0x00067ca1) popup_blid_sat_info2_window_t7

0x1ae7,	// (0x00067caf) popup_blid_sat_info2_window_t8

0x1af5,	// (0x00067cbd) popup_blid_sat_info2_window_t9

0x1b03,	// (0x00067ccb) popup_blid_sat_info2_window_t10

0x1bcb,	// (0x00067d93) aid_firma_cardinal_ParamLimits

0x1bdf,	// (0x00067da7) blid_firmament_pane_t1_ParamLimits

0x1bf6,	// (0x00067dbe) blid_firmament_pane_t2_ParamLimits

0x1c0d,	// (0x00067dd5) blid_firmament_pane_t3_ParamLimits

0x1c24,	// (0x00067dec) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x000758bf) blid_firmament_pane_t_ParamLimits

0x1c3b,	// (0x00067e03) blid_sat_info_pane_ParamLimits

0x99cb,	// (0x0006fb93) main_cam_set_pane_ParamLimits

0xaec4,	// (0x0007108c) aid_size_cell_colour_35_ParamLimits

0xaede,	// (0x000710a6) aid_size_cell_colour_112_ParamLimits

0xaef5,	// (0x000710bd) aid_size_cell_effect_ParamLimits

0x99cb,	// (0x0006fb93) bg_tb_trans_pane_cp02_ParamLimits

0xef49,	// (0x00075111) heading_imed_pane_ParamLimits

0xaf0f,	// (0x000710d7) listscroll_imed_pane_ParamLimits

0x0d44,	// (0x00066f0c) popup_call2_audio_first_window_g5_ParamLimits

0x0d44,	// (0x00066f0c) popup_call2_audio_first_window_g5

0xb5f7,	// (0x000717bf) aid_size_touch_image3_arrow_left_ParamLimits

0xb5f7,	// (0x000717bf) aid_size_touch_image3_arrow_left

0xb60d,	// (0x000717d5) aid_size_touch_image3_arrow_right_ParamLimits

0xb60d,	// (0x000717d5) aid_size_touch_image3_arrow_right

0xc89e,	// (0x00072a66) vid4_progress_pane_t3

0xb1af,	// (0x00071377) main_hwr_training_symbol_option_pane_ParamLimits

0xb1af,	// (0x00071377) main_hwr_training_symbol_option_pane

0x2421,	// (0x000685e9) popup_hwr_training_preview_window_ParamLimits

0x2421,	// (0x000685e9) popup_hwr_training_preview_window

0xb210,	// (0x000713d8) hwr_training_navi_pane_g5_ParamLimits

0xb210,	// (0x000713d8) hwr_training_navi_pane_g5

0x3823,	// (0x000699eb) popup_char_count_window

0x6b35,	// (0x0006ccfd) bg_popup_sub_pane_cp20_ParamLimits

0xc3b6,	// (0x0007257e) list_vitu2_match_list_pane_ParamLimits

0xc3c2,	// (0x0007258a) vitu2_page_scroll_pane_ParamLimits

0xc3c2,	// (0x0007258a) vitu2_page_scroll_pane

0x3d0e,	// (0x00069ed6) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3d0e,	// (0x00069ed6) list_single_hwr_training_symbol_option_pane

0x3d21,	// (0x00069ee9) list_single_hwr_training_symbol_option_pane_g1

0x3d29,	// (0x00069ef1) list_single_hwr_training_symbol_option_pane_t1

0x3d37,	// (0x00069eff) bg_button_pane_cp023

0x3d40,	// (0x00069f08) bg_button_pane_cp024

0xc8cd,	// (0x00072a95) vitu2_page_scroll_pane_g1

0xc8d5,	// (0x00072a9d) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00075cb3) vitu2_page_scroll_pane_g

0xc8df,	// (0x00072aa7) vitu2_page_scroll_pane_t1

0x1954,	// (0x00067b1c) popup_char_count_window_g1

0x3d73,	// (0x00069f3b) popup_char_count_window_g2

0x3d7c,	// (0x00069f44) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00075cb8) popup_char_count_window_g

0x3d85,	// (0x00069f4d) popup_char_count_window_t1

0x6885,	// (0x0006ca4d) main_vded2_pane

0x211e,	// (0x000682e6) aid_size_cell_imed_line

0x2128,	// (0x000682f0) grid_imed_line_width_pane

0xba34,	// (0x00071bfc) vid4_indicators_pane_g4

0x3d93,	// (0x00069f5b) cell_imed_line_width_pane_ParamLimits

0x3d93,	// (0x00069f5b) cell_imed_line_width_pane

0x3da9,	// (0x00069f71) cell_imed_line_width_pane_g1

0x19e6,	// (0x00067bae) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00075cbf) cell_imed_line_width_pane_g

0xc8ee,	// (0x00072ab6) main_vded2_pane_g1_ParamLimits

0xc8ee,	// (0x00072ab6) main_vded2_pane_g1

0xc8fd,	// (0x00072ac5) main_vded2_pane_g2_ParamLimits

0xc8fd,	// (0x00072ac5) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00075cc4) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00075cc4) main_vded2_pane_g

0xc90b,	// (0x00072ad3) vded2_slider_pane_ParamLimits

0xc90b,	// (0x00072ad3) vded2_slider_pane

0xc918,	// (0x00072ae0) aid_size_touch_vded2_end

0xc922,	// (0x00072aea) aid_size_touch_vded2_playhead

0x3db2,	// (0x00069f7a) aid_size_touch_vded2_start

0x3dba,	// (0x00069f82) vded2_slider_bg_pane

0x3dc3,	// (0x00069f8b) vded2_slider_pane_g1

0x3dcc,	// (0x00069f94) vded2_slider_pane_g2

0xc92a,	// (0x00072af2) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00075cc9) vded2_slider_pane_g

0x3a41,	// (0x00069c09) vded2_slider_bg_pane_g1

0x3a4a,	// (0x00069c12) vded2_slider_bg_pane_g2

0x3a53,	// (0x00069c1b) vded2_slider_bg_pane_g3

0x0002,

0xf7c7,	// (0x0007598f) vded2_slider_bg_pane_g

0x92a3,	// (0x0006f46b) aid_postcard_touch_down_pane_ParamLimits

0x92a3,	// (0x0006f46b) aid_postcard_touch_down_pane

0x92b3,	// (0x0006f47b) aid_postcard_touch_up_pane_ParamLimits

0x92b3,	// (0x0006f47b) aid_postcard_touch_up_pane

0x6885,	// (0x0006ca4d) main_blid2_pane

0x1724,	// (0x000678ec) popup_blid2_search_window

0x6885,	// (0x0006ca4d) blid2_gps_pane

0x6885,	// (0x0006ca4d) blid2_navig_pane

0x6885,	// (0x0006ca4d) blid2_search_pane

0x6885,	// (0x0006ca4d) blid2_tripm_pane

0xc933,	// (0x00072afb) blid2_search_pane_g1_ParamLimits

0xc933,	// (0x00072afb) blid2_search_pane_g1

0xc943,	// (0x00072b0b) blid2_search_pane_t1_ParamLimits

0xc943,	// (0x00072b0b) blid2_search_pane_t1

0xc955,	// (0x00072b1d) aid_size_cell_blid2_gps_ParamLimits

0xc955,	// (0x00072b1d) aid_size_cell_blid2_gps

0xc965,	// (0x00072b2d) blid2_gps_pane_g1_ParamLimits

0xc965,	// (0x00072b2d) blid2_gps_pane_g1

0xc971,	// (0x00072b39) grid_blid2_satellite_pane_ParamLimits

0xc971,	// (0x00072b39) grid_blid2_satellite_pane

0xc97f,	// (0x00072b47) blid2_navig_pane_g1_ParamLimits

0xc97f,	// (0x00072b47) blid2_navig_pane_g1

0xc98b,	// (0x00072b53) blid2_navig_pane_t1_ParamLimits

0xc98b,	// (0x00072b53) blid2_navig_pane_t1

0xc99d,	// (0x00072b65) blid2_navig_pane_t2_ParamLimits

0xc99d,	// (0x00072b65) blid2_navig_pane_t2

0x0001,

0xfb08,	// (0x00075cd0) blid2_navig_pane_t_ParamLimits

0xfb08,	// (0x00075cd0) blid2_navig_pane_t

0xc9af,	// (0x00072b77) blid2_navig_ring_pane_ParamLimits

0xc9af,	// (0x00072b77) blid2_navig_ring_pane

0xc9bf,	// (0x00072b87) blid2_speed_pane_ParamLimits

0xc9bf,	// (0x00072b87) blid2_speed_pane

0xc9cb,	// (0x00072b93) blid2_tripm_pane_g1_ParamLimits

0xc9cb,	// (0x00072b93) blid2_tripm_pane_g1

0xc9db,	// (0x00072ba3) blid2_tripm_pane_g2_ParamLimits

0xc9db,	// (0x00072ba3) blid2_tripm_pane_g2

0xc9e7,	// (0x00072baf) blid2_tripm_pane_g3_ParamLimits

0xc9e7,	// (0x00072baf) blid2_tripm_pane_g3

0xc9f3,	// (0x00072bbb) blid2_tripm_pane_g4_ParamLimits

0xc9f3,	// (0x00072bbb) blid2_tripm_pane_g4

0xc9ff,	// (0x00072bc7) blid2_tripm_pane_g5_ParamLimits

0xc9ff,	// (0x00072bc7) blid2_tripm_pane_g5

0x0005,

0xfb0d,	// (0x00075cd5) blid2_tripm_pane_g_ParamLimits

0xfb0d,	// (0x00075cd5) blid2_tripm_pane_g

0xca1b,	// (0x00072be3) blid2_tripm_pane_t1_ParamLimits

0xca1b,	// (0x00072be3) blid2_tripm_pane_t1

0xca2f,	// (0x00072bf7) blid2_tripm_pane_t2_ParamLimits

0xca2f,	// (0x00072bf7) blid2_tripm_pane_t2

0xca41,	// (0x00072c09) blid2_tripm_pane_t3_ParamLimits

0xca41,	// (0x00072c09) blid2_tripm_pane_t3

0x0003,

0xfb1a,	// (0x00075ce2) blid2_tripm_pane_t_ParamLimits

0xfb1a,	// (0x00075ce2) blid2_tripm_pane_t

0xca73,	// (0x00072c3b) cell_blid2_satellite_pane_ParamLimits

0xca73,	// (0x00072c3b) cell_blid2_satellite_pane

0xca91,	// (0x00072c59) cell_blid2_satellite_pane_g1

0x3dd4,	// (0x00069f9c) cell_blid2_satellite_pane_t1

0x1c4b,	// (0x00067e13) blid2_speed_pane_g1

0x3de2,	// (0x00069faa) blid2_speed_pane_t1

0x3df0,	// (0x00069fb8) blid2_speed_pane_t2

0x0001,

0xfb23,	// (0x00075ceb) blid2_speed_pane_t

0x1c4b,	// (0x00067e13) blid2_navig_ring_pane_g1

0xca9a,	// (0x00072c62) blid2_navig_ring_pane_g2

0xcaa2,	// (0x00072c6a) blid2_navig_ring_pane_g3

0xcaaa,	// (0x00072c72) blid2_navig_ring_pane_g4

0xcab2,	// (0x00072c7a) blid2_navig_ring_pane_g5

0x0004,

0xfb28,	// (0x00075cf0) blid2_navig_ring_pane_g

0x6885,	// (0x0006ca4d) bg_popup_window_pane_cp011

0x3dfe,	// (0x00069fc6) popup_blid2_search_window_g1

0x3e06,	// (0x00069fce) popup_blid2_search_window_t1

0x3e14,	// (0x00069fdc) popup_blid2_search_window_t2

0x0001,

0xfb33,	// (0x00075cfb) popup_blid2_search_window_t

0xebe1,	// (0x00074da9) main_browser_pane_g1

0xe8e8,	// (0x00074ab0) main_browser_pane_ParamLimits

0x99cb,	// (0x0006fb93) bg_button_pane_cp011_ParamLimits

0xbca1,	// (0x00071e69) cell_vitu2_function_pane_g1_ParamLimits

0x1716,	// (0x000678de) bg_popup_sub_pane_cp22_ParamLimits

0x5bbf,	// (0x0006bd87) input_focus_pane_cp08_ParamLimits

0xc51a,	// (0x000726e2) popup_vitu2_query_button_pane_ParamLimits

0xc51a,	// (0x000726e2) popup_vitu2_query_button_pane

0x5bd6,	// (0x0006bd9e) popup_vitu2_query_input_button_pane

0x3ac5,	// (0x00069c8d) popup_vitu2_query_window_g1_ParamLimits

0x5be0,	// (0x0006bda8) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00075c03) popup_vitu2_query_window_g_ParamLimits

0x6885,	// (0x0006ca4d) bg_button_pane_cp026

0xcaba,	// (0x00072c82) popup_vitu2_query_input_button_pane_g1

0x6885,	// (0x0006ca4d) bg_button_pane_cp025

0x3e22,	// (0x00069fea) popup_vitu2_query_button_pane_t1

0xa43a,	// (0x00070602) main_mp3_pane_t6

0xa44a,	// (0x00070612) popup_slider_window_cp01

0xb92b,	// (0x00071af3) cam4_battery_pane

0xba0c,	// (0x00071bd4) cam4_battery_pane_cp02

0xc81b,	// (0x000729e3) cam4_battery_pane_cp01

0xc825,	// (0x000729ed) cam4_battery_pane_cp03

0x1c4b,	// (0x00067e13) cam4_battery_pane_g1

0x36cb,	// (0x00069893) cam4_battery_pane_g2

0x0001,

0xfb38,	// (0x00075d00) cam4_battery_pane_g

0x1b11,	// (0x00067cd9) popup_blid_sat_info2_window_t11

0x8c05,	// (0x0006edcd) aid_size_touch_mv_arrow_left_ParamLimits

0x8c30,	// (0x0006edf8) aid_size_touch_mv_arrow_right_ParamLimits

0x0209,	// (0x000663d1) navi_pane_g1_ParamLimits

0x8c59,	// (0x0006ee21) navi_pane_g2_ParamLimits

0x8c87,	// (0x0006ee4f) navi_pane_g3_ParamLimits

0xf409,	// (0x000755d1) navi_pane_g_ParamLimits

0x8ce1,	// (0x0006eea9) navi_pane_mv_t1_ParamLimits

0xaf1b,	// (0x000710e3) grid_imed_effect_pane_ParamLimits

0x79db,	// (0x0006dba3) aid_placing_vt_slider_lsc

0xeb2e,	// (0x00074cf6) aid_placing_vt_slider_prt

0x99cb,	// (0x0006fb93) bg_tb_trans_pane_cp01_ParamLimits

0x1d9b,	// (0x00067f63) popup_image_details_window_g1_ParamLimits

0x1dae,	// (0x00067f76) popup_image_details_window_g2_ParamLimits

0x1dc3,	// (0x00067f8b) popup_image_details_window_g3_ParamLimits

0x1dc3,	// (0x00067f8b) popup_image_details_window_g3

0xf73c,	// (0x00075904) popup_image_details_window_g_ParamLimits

0x1dd7,	// (0x00067f9f) popup_image_details_window_t1_ParamLimits

0x1de9,	// (0x00067fb1) popup_image_details_window_t2_ParamLimits

0x1e02,	// (0x00067fca) popup_image_details_window_t3_ParamLimits

0x1e16,	// (0x00067fde) popup_image_details_window_t4_ParamLimits

0x1e31,	// (0x00067ff9) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0007590b) popup_image_details_window_t_ParamLimits

0xc759,	// (0x00072921) cl_header_name_pane_ParamLimits

0xc759,	// (0x00072921) cl_header_name_pane

0xcac2,	// (0x00072c8a) cl_header_name_pane_t1_ParamLimits

0xcac2,	// (0x00072c8a) cl_header_name_pane_t1

0xcad9,	// (0x00072ca1) cl_header_name_pane_t2_ParamLimits

0xcad9,	// (0x00072ca1) cl_header_name_pane_t2

0xcb03,	// (0x00072ccb) cl_header_name_pane_t3_ParamLimits

0xcb03,	// (0x00072ccb) cl_header_name_pane_t3

0x0002,

0xfb3d,	// (0x00075d05) cl_header_name_pane_t_ParamLimits

0xfb3d,	// (0x00075d05) cl_header_name_pane_t

0x8cb2,	// (0x0006ee7a) navi_pane_mv_g2_ParamLimits

0x37fd,	// (0x000699c5) field_vitu2_entry_pane_g1_ParamLimits

0x3809,	// (0x000699d1) field_vitu2_entry_pane_g2_ParamLimits

0x3815,	// (0x000699dd) field_vitu2_entry_pane_g3_ParamLimits

0x3815,	// (0x000699dd) field_vitu2_entry_pane_g3

0xf93a,	// (0x00075b02) field_vitu2_entry_pane_g_ParamLimits

0xbc31,	// (0x00071df9) cell_vitu2_itu_pane_g1_ParamLimits

0xbc41,	// (0x00071e09) cell_vitu2_itu_pane_g2_ParamLimits

0xbc41,	// (0x00071e09) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00075b0e) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00075b0e) cell_vitu2_itu_pane_g

0x99cb,	// (0x0006fb93) bg_vkb2_func_pane_cp05_ParamLimits

0x99cb,	// (0x0006fb93) bg_vkb2_func_pane_cp05

0x99cb,	// (0x0006fb93) bg_vkb2_func_pane_cp03

0x99cb,	// (0x0006fb93) bg_vkb2_func_pane_cp04

0x99cb,	// (0x0006fb93) bg_vkb2_func_pane_cp10_ParamLimits

0x99cb,	// (0x0006fb93) bg_vkb2_func_pane_cp10

0x5d95,	// (0x0006bf5d) bg_vkb2_func_pane_cp08

0xc703,	// (0x000728cb) bg_vkb2_func_pane_cp06

0xc711,	// (0x000728d9) bg_vkb2_func_pane_cp07

0x3d49,	// (0x00069f11) bg_vkb2_func_pane_cp11_ParamLimits

0x3d49,	// (0x00069f11) bg_vkb2_func_pane_cp11

0x3d5e,	// (0x00069f26) bg_vkb2_func_pane_cp12_ParamLimits

0x3d5e,	// (0x00069f26) bg_vkb2_func_pane_cp12

0x6885,	// (0x0006ca4d) bg_vkb2_func_pane_cp09

0x3835,	// (0x000699fd) bg_vkb2_func_pane_g1

0xecf2,	// (0x00074eba) bg_vkb2_func_pane_g2

0x383d,	// (0x00069a05) bg_vkb2_func_pane_g3

0x3845,	// (0x00069a0d) bg_vkb2_func_pane_g4

0x3a88,	// (0x00069c50) bg_vkb2_func_pane_g5

0x385d,	// (0x00069a25) bg_vkb2_func_pane_g6

0x3865,	// (0x00069a2d) bg_vkb2_func_pane_g7

0x3855,	// (0x00069a1d) bg_vkb2_func_pane_g8

0xecd2,	// (0x00074e9a) bg_vkb2_func_pane_g9

0x0008,

0xfb44,	// (0x00075d0c) bg_vkb2_func_pane_g

0xca0d,	// (0x00072bd5) blid2_tripm_pane_g6_ParamLimits

0xca0d,	// (0x00072bd5) blid2_tripm_pane_g6

0x3685,	// (0x0006984d) mp4_progress_pane_g1

0xca67,	// (0x00072c2f) blid2_tripm_values_pane_ParamLimits

0xca67,	// (0x00072c2f) blid2_tripm_values_pane

0xcb28,	// (0x00072cf0) blid2_tripm_values_pane_t1

0xcb36,	// (0x00072cfe) blid2_tripm_values_pane_t2

0xcb44,	// (0x00072d0c) blid2_tripm_values_pane_t3

0xcb52,	// (0x00072d1a) blid2_tripm_values_pane_t4

0xcb60,	// (0x00072d28) blid2_tripm_values_pane_t5

0xcb6e,	// (0x00072d36) blid2_tripm_values_pane_t6

0xcb7c,	// (0x00072d44) blid2_tripm_values_pane_t7

0xcb8a,	// (0x00072d52) blid2_tripm_values_pane_t8

0xcb98,	// (0x00072d60) blid2_tripm_values_pane_t9

0x0008,

0xfb57,	// (0x00075d1f) blid2_tripm_values_pane_t

0x7a19,	// (0x0006dbe1) call_video_pane_t1_ParamLimits

0x7a36,	// (0x0006dbfe) call_video_pane_t2_ParamLimits

0xf292,	// (0x0007545a) call_video_pane_t_ParamLimits

0x598f,	// (0x0006bb57) msg_header_pane_g1_ParamLimits

0x0446,	// (0x0006660e) msg_header_pane_g2_ParamLimits

0x0446,	// (0x0006660e) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00075674) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00075674) msg_header_pane_g

0xe8e8,	// (0x00074ab0) main_clock2_pane_ParamLimits

0xac9a,	// (0x00070e62) grid_clock2_toolbar_pane_ParamLimits

0xac9a,	// (0x00070e62) grid_clock2_toolbar_pane

0xac9a,	// (0x00070e62) listscroll_clock2_pane_ParamLimits

0xac9a,	// (0x00070e62) listscroll_clock2_pane

0xad52,	// (0x00070f1a) main_clock2_pane_t3_ParamLimits

0xad52,	// (0x00070f1a) main_clock2_pane_t3

0xad64,	// (0x00070f2c) main_clock2_pane_t4_ParamLimits

0xad64,	// (0x00070f2c) main_clock2_pane_t4

0x3e30,	// (0x00069ff8) cell_clock2_toolbar_pane

0x3e38,	// (0x0006a000) cell_clock2_toolbar_pane_cp01

0x3e38,	// (0x0006a000) cell_clock2_toolbar_pane_cp02

0x3e40,	// (0x0006a008) cell_clock2_toolbar_pane_cp03

0x3e48,	// (0x0006a010) list_clock2_pane

0x016f,	// (0x00066337) scroll_pane_cp10

0x3e50,	// (0x0006a018) list_single_clock2_pane_ParamLimits

0x3e50,	// (0x0006a018) list_single_clock2_pane

0x02a9,	// (0x00066471) list_highlight_pane_cp08

0x3e5d,	// (0x0006a025) list_single_clock2_pane_t1

0x3e77,	// (0x0006a03f) list_single_clock2_pane_t2

0x0001,

0xfb6a,	// (0x00075d32) list_single_clock2_pane_t

0x6885,	// (0x0006ca4d) bg_button_pane_cp10

0x3e85,	// (0x0006a04d) cell_clock2_toolbar_pane_g1

0x9205,	// (0x0006f3cd) aid_main_viewer_pane_g1_ParamLimits

0x9205,	// (0x0006f3cd) aid_main_viewer_pane_g1

0x9211,	// (0x0006f3d9) aid_main_viewer_pane_g2_ParamLimits

0x9211,	// (0x0006f3d9) aid_main_viewer_pane_g2

0x921d,	// (0x0006f3e5) aid_main_viewer_pane_g3_ParamLimits

0x921d,	// (0x0006f3e5) aid_main_viewer_pane_g3

0x922e,	// (0x0006f3f6) aid_main_viewer_pane_g4_ParamLimits

0x922e,	// (0x0006f3f6) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00075685) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00075685) aid_main_viewer_pane_g

0x99be,	// (0x0006fb86) main_calc_pane_ParamLimits

0x99d9,	// (0x0006fba1) main_dialer2_pane_ParamLimits

0x6885,	// (0x0006ca4d) main_cam6_pane

0x6885,	// (0x0006ca4d) main_vid6_pane

0xaca6,	// (0x00070e6e) listscroll_gen_pane_cp06_ParamLimits

0xaca6,	// (0x00070e6e) listscroll_gen_pane_cp06

0xad76,	// (0x00070f3e) main_clock2_pane_t5_ParamLimits

0xad76,	// (0x00070f3e) main_clock2_pane_t5

0xadc5,	// (0x00070f8d) aid_call2_pane_cp10_ParamLimits

0xadd7,	// (0x00070f9f) aid_call_pane_cp10_ParamLimits

0x01de,	// (0x000663a6) popup_clock_analogue_window_cp10_g1_ParamLimits

0x01de,	// (0x000663a6) popup_clock_analogue_window_cp10_g2_ParamLimits

0xade9,	// (0x00070fb1) popup_clock_analogue_window_cp10_g3_ParamLimits

0xade9,	// (0x00070fb1) popup_clock_analogue_window_cp10_g4_ParamLimits

0x01de,	// (0x000663a6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x000759bb) popup_clock_analogue_window_cp10_g_ParamLimits

0xadfb,	// (0x00070fc3) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb5a4,	// (0x0007176c) cell_dialer2_keypad_pane_g2_ParamLimits

0xb5a4,	// (0x0007176c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00075aa1) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00075aa1) cell_dialer2_keypad_pane_g

0xb5c0,	// (0x00071788) cell_dialer2_keypad_pane_t1

0xbf7e,	// (0x00072146) main_cset_text2_pane_ParamLimits

0xbf7e,	// (0x00072146) main_cset_text2_pane

0x3cb1,	// (0x00069e79) area_vitu2_query_pane_g1_ParamLimits

0x5cc0,	// (0x0006be88) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00075c56) area_vitu2_query_pane_g_ParamLimits

0x5d71,	// (0x0006bf39) area_vitu2_query_pane_t7_ParamLimits

0x5d71,	// (0x0006bf39) area_vitu2_query_pane_t7

0xc703,	// (0x000728cb) bg_button_pane_cp018_ParamLimits

0xc711,	// (0x000728d9) bg_button_pane_cp021_ParamLimits

0x5d95,	// (0x0006bf5d) bg_button_pane_cp022_ParamLimits

0x5d95,	// (0x0006bf5d) bg_vkb2_func_pane_cp08_ParamLimits

0xc703,	// (0x000728cb) bg_vkb2_func_pane_cp06_ParamLimits

0xc711,	// (0x000728d9) bg_vkb2_func_pane_cp07_ParamLimits

0x5da6,	// (0x0006bf6e) input_focus_pane_cp09_ParamLimits

0xcba6,	// (0x00072d6e) cam6_autofocus_pane_ParamLimits

0xcba6,	// (0x00072d6e) cam6_autofocus_pane

0xcbc8,	// (0x00072d90) cam6_image_uncrop_pane_ParamLimits

0xcbc8,	// (0x00072d90) cam6_image_uncrop_pane

0xcbf5,	// (0x00072dbd) cam6_indi_pane_ParamLimits

0xcbf5,	// (0x00072dbd) cam6_indi_pane

0xcc0f,	// (0x00072dd7) cam6_mode_pane_ParamLimits

0xcc0f,	// (0x00072dd7) cam6_mode_pane

0xcc23,	// (0x00072deb) cam6_timer_pane_ParamLimits

0xcc23,	// (0x00072deb) cam6_timer_pane

0xcc2f,	// (0x00072df7) cam6_zoom_pane_ParamLimits

0xcc2f,	// (0x00072df7) cam6_zoom_pane

0xb98a,	// (0x00071b52) cam6_mode_pane_g1_ParamLimits

0xb98a,	// (0x00071b52) cam6_mode_pane_g1

0xb9a2,	// (0x00071b6a) cam6_mode_pane_g2_ParamLimits

0xb9a2,	// (0x00071b6a) cam6_mode_pane_g2

0xb9ae,	// (0x00071b76) cam6_mode_pane_g3_ParamLimits

0xb9ae,	// (0x00071b76) cam6_mode_pane_g3

0xb9ba,	// (0x00071b82) cam6_mode_pane_g4_ParamLimits

0xb9ba,	// (0x00071b82) cam6_mode_pane_g4

0x0003,

0xfb6f,	// (0x00075d37) cam6_mode_pane_g_ParamLimits

0xfb6f,	// (0x00075d37) cam6_mode_pane_g

0x3a5c,	// (0x00069c24) bg_tb_trans_pane_cp08_ParamLimits

0x3a5c,	// (0x00069c24) bg_tb_trans_pane_cp08

0x3e8d,	// (0x0006a055) cam6_battery_pane_ParamLimits

0x3e8d,	// (0x0006a055) cam6_battery_pane

0x3ea3,	// (0x0006a06b) cam6_indi_pane_g1_ParamLimits

0x3ea3,	// (0x0006a06b) cam6_indi_pane_g1

0x3eb5,	// (0x0006a07d) cam6_indi_pane_g2_ParamLimits

0x3eb5,	// (0x0006a07d) cam6_indi_pane_g2

0x3ec7,	// (0x0006a08f) cam6_indi_pane_g3_ParamLimits

0x3ec7,	// (0x0006a08f) cam6_indi_pane_g3

0x0002,

0xfb78,	// (0x00075d40) cam6_indi_pane_g_ParamLimits

0xfb78,	// (0x00075d40) cam6_indi_pane_g

0x3ed9,	// (0x0006a0a1) cam6_indi_pane_t1_ParamLimits

0x3ed9,	// (0x0006a0a1) cam6_indi_pane_t1

0xba6a,	// (0x00071c32) cam6_autofocus_pane_g1

0xba72,	// (0x00071c3a) cam6_autofocus_pane_g2

0xba7a,	// (0x00071c42) cam6_autofocus_pane_g3

0xba82,	// (0x00071c4a) cam6_autofocus_pane_g4

0x0003,

0xfb7f,	// (0x00075d47) cam6_autofocus_pane_g

0x3eff,	// (0x0006a0c7) cam6_timer_pane_g1

0x3f07,	// (0x0006a0cf) cam6_timer_pane_t1

0x3f15,	// (0x0006a0dd) cam6_zoom_cont_pane

0x3f1d,	// (0x0006a0e5) cam6_zoom_pane_g1

0x3f25,	// (0x0006a0ed) cam6_zoom_pane_g2

0xcc4d,	// (0x00072e15) cam6_zoom_pane_g3

0x0002,

0xfb88,	// (0x00075d50) cam6_zoom_pane_g

0x1c4b,	// (0x00067e13) cam6_battery_pane_g1

0x1c4b,	// (0x00067e13) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x000758c8) cam6_battery_pane_g

0x3f2d,	// (0x0006a0f5) cam6_zoom_cont_pane_g1

0x3f36,	// (0x0006a0fe) cam6_zoom_cont_pane_g2

0x3f3f,	// (0x0006a107) cam6_zoom_cont_pane_g3

0x0002,

0xfb8f,	// (0x00075d57) cam6_zoom_cont_pane_g

0xcc6a,	// (0x00072e32) cam6_mode_pane_cp_ParamLimits

0xcc6a,	// (0x00072e32) cam6_mode_pane_cp

0xcc2f,	// (0x00072df7) cam6_zoom_pane_cp_ParamLimits

0xcc2f,	// (0x00072df7) cam6_zoom_pane_cp

0xcc7e,	// (0x00072e46) vid6_image_uncrop_cif_pane_ParamLimits

0xcc7e,	// (0x00072e46) vid6_image_uncrop_cif_pane

0xccaa,	// (0x00072e72) vid6_image_uncrop_nhd_pane_ParamLimits

0xccaa,	// (0x00072e72) vid6_image_uncrop_nhd_pane

0xcbc8,	// (0x00072d90) vid6_image_uncrop_vga_pane_ParamLimits

0xcbc8,	// (0x00072d90) vid6_image_uncrop_vga_pane

0xccc9,	// (0x00072e91) vid6_image_uncrop_wvga_pane_ParamLimits

0xccc9,	// (0x00072e91) vid6_image_uncrop_wvga_pane

0xcce8,	// (0x00072eb0) vid6_indi_pane_ParamLimits

0xcce8,	// (0x00072eb0) vid6_indi_pane

0x3a5c,	// (0x00069c24) bg_tb_trans_pane_cp09_ParamLimits

0x3a5c,	// (0x00069c24) bg_tb_trans_pane_cp09

0x3f57,	// (0x0006a11f) cam6_battery_pane_cp_ParamLimits

0x3f57,	// (0x0006a11f) cam6_battery_pane_cp

0x3f63,	// (0x0006a12b) vid6_indi_pane_g1_ParamLimits

0x3f63,	// (0x0006a12b) vid6_indi_pane_g1

0x3f75,	// (0x0006a13d) vid6_indi_pane_g2_ParamLimits

0x3f75,	// (0x0006a13d) vid6_indi_pane_g2

0x3f87,	// (0x0006a14f) vid6_indi_pane_g3_ParamLimits

0x3f87,	// (0x0006a14f) vid6_indi_pane_g3

0x3f9e,	// (0x0006a166) vid6_indi_pane_g4_ParamLimits

0x3f9e,	// (0x0006a166) vid6_indi_pane_g4

0x3fb5,	// (0x0006a17d) vid6_indi_pane_g5_ParamLimits

0x3fb5,	// (0x0006a17d) vid6_indi_pane_g5

0x0004,

0xfb96,	// (0x00075d5e) vid6_indi_pane_g_ParamLimits

0xfb96,	// (0x00075d5e) vid6_indi_pane_g

0x3fcf,	// (0x0006a197) vid6_indi_pane_t1_ParamLimits

0x3fcf,	// (0x0006a197) vid6_indi_pane_t1

0x3fe5,	// (0x0006a1ad) vid6_indi_pane_t2_ParamLimits

0x3fe5,	// (0x0006a1ad) vid6_indi_pane_t2

0x400d,	// (0x0006a1d5) vid6_indi_pane_t3_ParamLimits

0x400d,	// (0x0006a1d5) vid6_indi_pane_t3

0x4035,	// (0x0006a1fd) vid6_indi_pane_t4_ParamLimits

0x4035,	// (0x0006a1fd) vid6_indi_pane_t4

0x0003,

0xfba1,	// (0x00075d69) vid6_indi_pane_t_ParamLimits

0xfba1,	// (0x00075d69) vid6_indi_pane_t

0x4059,	// (0x0006a221) wait_bar_pane_cp08

0xcd0d,	// (0x00072ed5) main_cset_text2_pane_t1_ParamLimits

0xcd0d,	// (0x00072ed5) main_cset_text2_pane_t1

0xcc55,	// (0x00072e1d) listscroll_gen_pane_cp06_t1_ParamLimits

0xcc55,	// (0x00072e1d) listscroll_gen_pane_cp06_t1

0x6885,	// (0x0006ca4d) main_cam6_set_pane

0x1e7b,	// (0x00068043) bg_tb_trans_pane_cp06_ParamLimits

0xb933,	// (0x00071afb) cam4_indicators_pane_g1_ParamLimits

0xb940,	// (0x00071b08) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00075ade) cam4_indicators_pane_g_ParamLimits

0xb960,	// (0x00071b28) cam4_indicators_pane_t1_ParamLimits

0x99cb,	// (0x0006fb93) bg_tb_trans_pane_cp07_ParamLimits

0xb933,	// (0x00071afb) vid4_indicators_pane_g1_ParamLimits

0xba16,	// (0x00071bde) vid4_indicators_pane_g2_ParamLimits

0xba23,	// (0x00071beb) vid4_indicators_pane_g3_ParamLimits

0xba34,	// (0x00071bfc) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00075af0) vid4_indicators_pane_g_ParamLimits

0xba50,	// (0x00071c18) vid4_indicators_pane_t1_ParamLimits

0xc82d,	// (0x000729f5) vid4_progress_pane_g1_ParamLimits

0xc839,	// (0x00072a01) vid4_progress_pane_g2_ParamLimits

0xc845,	// (0x00072a0d) vid4_progress_pane_g3_ParamLimits

0xc854,	// (0x00072a1c) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00075ca1) vid4_progress_pane_g_ParamLimits

0xc872,	// (0x00072a3a) vid4_progress_pane_t1_ParamLimits

0xc888,	// (0x00072a50) vid4_progress_pane_t2_ParamLimits

0xc89e,	// (0x00072a66) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00075cac) vid4_progress_pane_t_ParamLimits

0xc8b3,	// (0x00072a7b) wait_bar_pane_cp07_ParamLimits

0xcd34,	// (0x00072efc) main_cam6_set_pane_g2_ParamLimits

0xcd34,	// (0x00072efc) main_cam6_set_pane_g2

0xcd40,	// (0x00072f08) main_cset6_listscroll_pane_ParamLimits

0xcd40,	// (0x00072f08) main_cset6_listscroll_pane

0xcd6d,	// (0x00072f35) main_cset6_slider_pane_ParamLimits

0xcd6d,	// (0x00072f35) main_cset6_slider_pane

0xcd79,	// (0x00072f41) main_cset6_text2_pane_ParamLimits

0xcd79,	// (0x00072f41) main_cset6_text2_pane

0x4068,	// (0x0006a230) main_cset6_text_pane

0x4070,	// (0x0006a238) main_cset_list_pane_copy1_ParamLimits

0x4070,	// (0x0006a238) main_cset_list_pane_copy1

0x4080,	// (0x0006a248) scroll_pane_cp028_copy1

0xcd8c,	// (0x00072f54) cset_list_set_pane_copy1

0xcd9c,	// (0x00072f64) aid_position_infowindow_above_copy1

0xcda4,	// (0x00072f6c) aid_position_infowindow_below_copy1

0xcdac,	// (0x00072f74) cset_list_set_pane_g1_copy1

0x5df7,	// (0x0006bfbf) cset_list_set_pane_g3_copy1_ParamLimits

0x5df7,	// (0x0006bfbf) cset_list_set_pane_g3_copy1

0x5e06,	// (0x0006bfce) cset_list_set_pane_t1_copy1_ParamLimits

0x5e06,	// (0x0006bfce) cset_list_set_pane_t1_copy1

0x99cb,	// (0x0006fb93) list_highlight_pane_cp021_copy1_ParamLimits

0x99cb,	// (0x0006fb93) list_highlight_pane_cp021_copy1

0x4089,	// (0x0006a251) cset6_slider_pane_ParamLimits

0x4089,	// (0x0006a251) cset6_slider_pane

0x40b5,	// (0x0006a27d) main_cset6_slider_pane_g1_ParamLimits

0x40b5,	// (0x0006a27d) main_cset6_slider_pane_g1

0xcdb4,	// (0x00072f7c) main_cset6_slider_pane_g2_ParamLimits

0xcdb4,	// (0x00072f7c) main_cset6_slider_pane_g2

0x40dd,	// (0x0006a2a5) main_cset6_slider_pane_g3_ParamLimits

0x40dd,	// (0x0006a2a5) main_cset6_slider_pane_g3

0xcddc,	// (0x00072fa4) main_cset6_slider_pane_g4_ParamLimits

0xcddc,	// (0x00072fa4) main_cset6_slider_pane_g4

0xcde8,	// (0x00072fb0) main_cset6_slider_pane_g5_ParamLimits

0xcde8,	// (0x00072fb0) main_cset6_slider_pane_g5

0x3968,	// (0x00069b30) main_cset6_slider_pane_g7_ParamLimits

0x3968,	// (0x00069b30) main_cset6_slider_pane_g7

0x3974,	// (0x00069b3c) main_cset6_slider_pane_g8_ParamLimits

0x3974,	// (0x00069b3c) main_cset6_slider_pane_g8

0xcdf4,	// (0x00072fbc) main_cset6_slider_pane_g9_ParamLimits

0xcdf4,	// (0x00072fbc) main_cset6_slider_pane_g9

0xce00,	// (0x00072fc8) main_cset6_slider_pane_g10_ParamLimits

0xce00,	// (0x00072fc8) main_cset6_slider_pane_g10

0xce0c,	// (0x00072fd4) main_cset6_slider_pane_g11_ParamLimits

0xce0c,	// (0x00072fd4) main_cset6_slider_pane_g11

0xce18,	// (0x00072fe0) main_cset6_slider_pane_g12_ParamLimits

0xce18,	// (0x00072fe0) main_cset6_slider_pane_g12

0xce24,	// (0x00072fec) main_cset6_slider_pane_g13_ParamLimits

0xce24,	// (0x00072fec) main_cset6_slider_pane_g13

0xce30,	// (0x00072ff8) main_cset6_slider_pane_g14_ParamLimits

0xce30,	// (0x00072ff8) main_cset6_slider_pane_g14

0xce3c,	// (0x00073004) main_cset6_slider_pane_g15_ParamLimits

0xce3c,	// (0x00073004) main_cset6_slider_pane_g15

0xce54,	// (0x0007301c) main_cset6_slider_pane_g16_ParamLimits

0xce54,	// (0x0007301c) main_cset6_slider_pane_g16

0xce60,	// (0x00073028) main_cset6_slider_pane_g17_ParamLimits

0xce60,	// (0x00073028) main_cset6_slider_pane_g17

0x0011,

0xfbaa,	// (0x00075d72) main_cset6_slider_pane_g_ParamLimits

0xfbaa,	// (0x00075d72) main_cset6_slider_pane_g

0x40e9,	// (0x0006a2b1) main_cset6_slider_pane_t1_ParamLimits

0x40e9,	// (0x0006a2b1) main_cset6_slider_pane_t1

0xce84,	// (0x0007304c) main_cset6_slider_pane_t2_ParamLimits

0xce84,	// (0x0007304c) main_cset6_slider_pane_t2

0xceaf,	// (0x00073077) main_cset6_slider_pane_t3_ParamLimits

0xceaf,	// (0x00073077) main_cset6_slider_pane_t3

0xceda,	// (0x000730a2) main_cset6_slider_pane_t4_ParamLimits

0xceda,	// (0x000730a2) main_cset6_slider_pane_t4

0xcf05,	// (0x000730cd) main_cset6_slider_pane_t5_ParamLimits

0xcf05,	// (0x000730cd) main_cset6_slider_pane_t5

0x412a,	// (0x0006a2f2) main_cset6_slider_pane_t7_ParamLimits

0x412a,	// (0x0006a2f2) main_cset6_slider_pane_t7

0xcf30,	// (0x000730f8) main_cset6_slider_pane_t8_ParamLimits

0xcf30,	// (0x000730f8) main_cset6_slider_pane_t8

0xcf54,	// (0x0007311c) main_cset6_slider_pane_t9_ParamLimits

0xcf54,	// (0x0007311c) main_cset6_slider_pane_t9

0xcf78,	// (0x00073140) main_cset6_slider_pane_t10_ParamLimits

0xcf78,	// (0x00073140) main_cset6_slider_pane_t10

0xcf9c,	// (0x00073164) main_cset6_slider_pane_t11_ParamLimits

0xcf9c,	// (0x00073164) main_cset6_slider_pane_t11

0x4160,	// (0x0006a328) main_cset6_slider_pane_t14_ParamLimits

0x4160,	// (0x0006a328) main_cset6_slider_pane_t14

0x4199,	// (0x0006a361) main_cset6_slider_pane_t15_ParamLimits

0x4199,	// (0x0006a361) main_cset6_slider_pane_t15

0x000b,

0xfbcf,	// (0x00075d97) main_cset6_slider_pane_t_ParamLimits

0xfbcf,	// (0x00075d97) main_cset6_slider_pane_t

0x41d2,	// (0x0006a39a) cset_slider_pane_g1_copy1

0x41db,	// (0x0006a3a3) cset_slider_pane_g2_copy1

0x41e4,	// (0x0006a3ac) cset_slider_pane_g3_copy1

0x6885,	// (0x0006ca4d) bg_popup_sub_pane_cp011_copy1

0x3ad1,	// (0x00069c99) main_cset_text_pane_g1_copy1

0x3ad9,	// (0x00069ca1) main_cset_text_pane_t1_copy1

0x3ae7,	// (0x00069caf) main_cset_text_pane_t2_copy1

0x3af5,	// (0x00069cbd) main_cset_text_pane_t3_copy1

0x3b03,	// (0x00069ccb) main_cset_text_pane_t4_copy1

0x3b11,	// (0x00069cd9) main_cset_text_pane_t5_copy1

0x3b1f,	// (0x00069ce7) main_cset_text_pane_t6_copy1

0x3b2d,	// (0x00069cf5) main_cset_text_pane_t7_copy1

0xcfc0,	// (0x00073188) main_cset_text2_pane_t1_copy1

0x6885,	// (0x0006ca4d) main_ncimui_pane

0x9a1e,	// (0x0006fbe6) popup_query_ncimui_window_ParamLimits

0x9a1e,	// (0x0006fbe6) popup_query_ncimui_window

0xa592,	// (0x0007075a) field_cale_ev2_pane_g4_ParamLimits

0xa592,	// (0x0007075a) field_cale_ev2_pane_g4

0xb2e4,	// (0x000714ac) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb2e4,	// (0x000714ac) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x00075a7c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x00075a7c) cell_video_dialer_keypad_pane_g

0xb2fc,	// (0x000714c4) cell_video_dialer_keypad_pane_t1

0x6885,	// (0x0006ca4d) bg_popup_window_pane_cp012

0x005b,	// (0x00066223) heading_pane_cp06

0x420b,	// (0x0006a3d3) ncim_query_content_pane

0x6885,	// (0x0006ca4d) bg_popup_heading_pane_cp01

0x4213,	// (0x0006a3db) ncim_heading_pane_t1

0x4221,	// (0x0006a3e9) ncim_indicator_popup_pane

0x4233,	// (0x0006a3fb) ncim_query_button_pane

0x4249,	// (0x0006a411) ncim_query_content_pane_t1

0x425b,	// (0x0006a423) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00075dd6) ncim_query_content_pane_t

0x42a9,	// (0x0006a471) ncim_query_list_pane

0x42bb,	// (0x0006a483) ncim_query_popup_pane

0x4221,	// (0x0006a3e9) ncim_indicator_popup_pane_ParamLimits

0xd0eb,	// (0x000732b3) ncim_query_content_pane_g1_ParamLimits

0xd0eb,	// (0x000732b3) ncim_query_content_pane_g1

0x4249,	// (0x0006a411) ncim_query_content_pane_t1_ParamLimits

0x425b,	// (0x0006a423) ncim_query_content_pane_t2_ParamLimits

0xd0f7,	// (0x000732bf) ncim_query_content_pane_t3_ParamLimits

0xd0f7,	// (0x000732bf) ncim_query_content_pane_t3

0xd114,	// (0x000732dc) ncim_query_content_pane_t4_ParamLimits

0xd114,	// (0x000732dc) ncim_query_content_pane_t4

0xd131,	// (0x000732f9) ncim_query_content_pane_t5_ParamLimits

0xd131,	// (0x000732f9) ncim_query_content_pane_t5

0x4281,	// (0x0006a449) ncim_query_content_pane_t6_ParamLimits

0x4281,	// (0x0006a449) ncim_query_content_pane_t6

0xfc0e,	// (0x00075dd6) ncim_query_content_pane_t_ParamLimits

0x42a9,	// (0x0006a471) ncim_query_list_pane_ParamLimits

0x42bb,	// (0x0006a483) ncim_query_popup_pane_ParamLimits

0x42cf,	// (0x0006a497) wait_bar_pane_cp04

0x6885,	// (0x0006ca4d) input_focus_pane_cp011

0x42d7,	// (0x0006a49f) ncim_query_popup_pane_t1

0x42e5,	// (0x0006a4ad) ncim_list_query_list_pane_ParamLimits

0x42e5,	// (0x0006a4ad) ncim_list_query_list_pane

0x6885,	// (0x0006ca4d) bg_button_pane_cp027

0x42f8,	// (0x0006a4c0) ncim_query_button_pane_g1

0x6885,	// (0x0006ca4d) list_highlight_pane_cp012

0x4302,	// (0x0006a4ca) ncim_list_query_list_pane_g1

0x430a,	// (0x0006a4d2) ncim_list_query_list_pane_t1

0xb950,	// (0x00071b18) cam4_indicators_pane_g3_ParamLimits

0xb950,	// (0x00071b18) cam4_indicators_pane_g3

0xba40,	// (0x00071c08) vid4_indicators_pane_g5_ParamLimits

0xba40,	// (0x00071c08) vid4_indicators_pane_g5

0xc863,	// (0x00072a2b) vid4_progress_pane_g5_ParamLimits

0xc863,	// (0x00072a2b) vid4_progress_pane_g5

0xcff2,	// (0x000731ba) main_ncimui_pane_g1

0xd04c,	// (0x00073214) ncimui_group_query_pane_ParamLimits

0xd04c,	// (0x00073214) ncimui_group_query_pane

0xd096,	// (0x0007325e) ncimui_list_pane_ParamLimits

0xd096,	// (0x0007325e) ncimui_list_pane

0xd0b7,	// (0x0007327f) ncimui_text_pane_ParamLimits

0xd0b7,	// (0x0007327f) ncimui_text_pane

0xd14e,	// (0x00073316) ncimui_text_pane_t1_ParamLimits

0xd14e,	// (0x00073316) ncimui_text_pane_t1

0x4318,	// (0x0006a4e0) ncimui_list_single_graphic_pane_ParamLimits

0x4318,	// (0x0006a4e0) ncimui_list_single_graphic_pane

0xd16d,	// (0x00073335) ncimui_query_pane_ParamLimits

0xd16d,	// (0x00073335) ncimui_query_pane

0x6885,	// (0x0006ca4d) list_highlight_pane_cp013

0x4328,	// (0x0006a4f0) ncim_list_query_list_pane_t1_copy1

0x4302,	// (0x0006a4ca) ncim_list_single_graphic_pane_g1

0x4336,	// (0x0006a4fe) ncim_query_button_pane_cp01

0x4342,	// (0x0006a50a) ncim_query_entry_pane_ParamLimits

0x4342,	// (0x0006a50a) ncim_query_entry_pane

0x4355,	// (0x0006a51d) ncimui_query_pane_g1

0x4361,	// (0x0006a529) ncimui_query_pane_t1_ParamLimits

0x4361,	// (0x0006a529) ncimui_query_pane_t1

0x99cb,	// (0x0006fb93) input_focus_pane_cp012

0x437a,	// (0x0006a542) ncim_query_entry_pane_t1

0xe8e8,	// (0x00074ab0) main_im_pane_ParamLimits

0x99cb,	// (0x0006fb93) main_mobtv_pane_ParamLimits

0x99cb,	// (0x0006fb93) main_mobtv_pane

0xce6c,	// (0x00073034) main_cset6_slider_pane_g18_ParamLimits

0xce6c,	// (0x00073034) main_cset6_slider_pane_g18

0xce78,	// (0x00073040) main_cset6_slider_pane_g19_ParamLimits

0xce78,	// (0x00073040) main_cset6_slider_pane_g19

0x3815,	// (0x000699dd) bg_main_mobtv_pane_ParamLimits

0x3815,	// (0x000699dd) bg_main_mobtv_pane

0xd180,	// (0x00073348) main_mobtv_info_pane

0xd18b,	// (0x00073353) main_mobtv_loading_pane_ParamLimits

0xd18b,	// (0x00073353) main_mobtv_loading_pane

0x438c,	// (0x0006a554) main_mobtv_pg_channel_list_pane

0x4396,	// (0x0006a55e) main_mobtv_pg_hdr_pane

0xd198,	// (0x00073360) main_mobtv_programe_curr_pane_ParamLimits

0xd198,	// (0x00073360) main_mobtv_programe_curr_pane

0xd1a5,	// (0x0007336d) main_mobtv_programe_next_pane_ParamLimits

0xd1a5,	// (0x0007336d) main_mobtv_programe_next_pane

0x439f,	// (0x0006a567) popup_mobtv_noti_window

0x1c4b,	// (0x00067e13) main_tv_pg_hdr_pane_g1

0x43a9,	// (0x0006a571) main_tv_pg_hdr_pane_g2

0x43b1,	// (0x0006a579) main_tv_pg_hdr_pane_g3

0x43b9,	// (0x0006a581) main_tv_pg_hdr_pane_g4

0x43c1,	// (0x0006a589) main_tv_pg_hdr_pane_g5

0x43cb,	// (0x0006a593) main_tv_pg_hdr_pane_g6

0x43d5,	// (0x0006a59d) main_tv_pg_hdr_pane_g7

0x43df,	// (0x0006a5a7) main_tv_pg_hdr_pane_g8

0x43e9,	// (0x0006a5b1) main_tv_pg_hdr_pane_g9

0x43f3,	// (0x0006a5bb) main_tv_pg_hdr_pane_g10

0x43fd,	// (0x0006a5c5) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00075de3) main_tv_pg_hdr_pane_g

0x4407,	// (0x0006a5cf) main_tv_pg_hdr_pane_t1

0x4415,	// (0x0006a5dd) main_tv_pg_hdr_pane_t2

0x4423,	// (0x0006a5eb) main_tv_pg_hdr_pane_t3

0x4433,	// (0x0006a5fb) main_tv_pg_hdr_pane_t4

0x4443,	// (0x0006a60b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00075dfa) main_tv_pg_hdr_pane_t

0x4453,	// (0x0006a61b) single_mobtv_pg_channel_pane_ParamLimits

0x4453,	// (0x0006a61b) single_mobtv_pg_channel_pane

0x4465,	// (0x0006a62d) single_mobtv_pg_channel_table_pane

0x446e,	// (0x0006a636) single_mobtv_pg_channel_thumb_pane

0x4477,	// (0x0006a63f) single_tv_pg_channel_pane_g1

0x4480,	// (0x0006a648) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00075e05) single_tv_pg_channel_pane_g

0x1e7b,	// (0x00068043) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1e7b,	// (0x00068043) bg_single_mobtv_pg_channel_thumb_pane

0x4489,	// (0x0006a651) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4489,	// (0x0006a651) single_mobtv_pg_channel_thumb_pane_g1

0x4497,	// (0x0006a65f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4497,	// (0x0006a65f) single_mobtv_pg_channel_thumb_pane_g2

0x44a3,	// (0x0006a66b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x44a3,	// (0x0006a66b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x00075e0a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x00075e0a) single_mobtv_pg_channel_thumb_pane_g

0x44af,	// (0x0006a677) single_mobtv_pg_channel_thumb_pane_t1

0x44bd,	// (0x0006a685) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00075e11) single_mobtv_pg_channel_thumb_pane_t

0x1c4b,	// (0x00067e13) bg_single_mobtv_pg_channel_table_pane_g1

0x1c4b,	// (0x00067e13) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x000758c8) bg_single_mobtv_pg_channel_table_pane_g

0x44cb,	// (0x0006a693) single_mobtv_pg_channel_table_pane_t1

0x44d9,	// (0x0006a6a1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00075e16) single_mobtv_pg_channel_table_pane_t

0xd1ba,	// (0x00073382) main_mobtv_info_pane_g1_ParamLimits

0xd1ba,	// (0x00073382) main_mobtv_info_pane_g1

0xd1d6,	// (0x0007339e) main_mobtv_info_pane_t1_ParamLimits

0xd1d6,	// (0x0007339e) main_mobtv_info_pane_t1

0xd24e,	// (0x00073416) main_mobtv_info_pane_t2_ParamLimits

0xd24e,	// (0x00073416) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00075e20) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00075e20) main_mobtv_info_pane_t

0xd2e1,	// (0x000734a9) wait_bar_pane_cp05

0xd2f3,	// (0x000734bb) main_mobtv_loading_pane_g1_ParamLimits

0xd2f3,	// (0x000734bb) main_mobtv_loading_pane_g1

0xd2ff,	// (0x000734c7) main_mobtv_loading_pane_g2_ParamLimits

0xd2ff,	// (0x000734c7) main_mobtv_loading_pane_g2

0xd30b,	// (0x000734d3) main_mobtv_loading_pane_g3_ParamLimits

0xd30b,	// (0x000734d3) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x00075e27) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x00075e27) main_mobtv_loading_pane_g

0x44e7,	// (0x0006a6af) main_mobtv_loading_pane_t1_ParamLimits

0x44e7,	// (0x0006a6af) main_mobtv_loading_pane_t1

0x44ff,	// (0x0006a6c7) main_mobtv_loading_pane_t2_ParamLimits

0x44ff,	// (0x0006a6c7) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00075e2e) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00075e2e) main_mobtv_loading_pane_t

0xd319,	// (0x000734e1) wait_bar_pane_cp06_ParamLimits

0xd319,	// (0x000734e1) wait_bar_pane_cp06

0x4523,	// (0x0006a6eb) main_mobtv_programe_curr_pane_t1

0x4531,	// (0x0006a6f9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00075e33) main_mobtv_programe_curr_pane_t

0x453f,	// (0x0006a707) main_mobtv_programe_next_pane_t1

0x454d,	// (0x0006a715) main_mobtv_programe_next_pane_t2

0x455b,	// (0x0006a723) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00075e38) main_mobtv_programe_next_pane_t

0x6885,	// (0x0006ca4d) bg_popup_mobtv_noti_window_pane

0x4569,	// (0x0006a731) popup_mobtv_noti_window_g1

0x4571,	// (0x0006a739) popup_mobtv_noti_window_t1

0x457f,	// (0x0006a747) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00075e3f) popup_mobtv_noti_window_t

0x1c4b,	// (0x00067e13) bg_popup_mobtv_noti_window_pane_g1

0x6885,	// (0x0006ca4d) sc_clock_pane

0x6885,	// (0x0006ca4d) main_fs_bigclock_pane

0xca55,	// (0x00072c1d) blid2_tripm_pane_t4_ParamLimits

0xca55,	// (0x00072c1d) blid2_tripm_pane_t4

0xd325,	// (0x000734ed) sc_clock_pane_g1_ParamLimits

0xd325,	// (0x000734ed) sc_clock_pane_g1

0xd333,	// (0x000734fb) sc_clock_pane_t1_ParamLimits

0xd333,	// (0x000734fb) sc_clock_pane_t1

0xd348,	// (0x00073510) sc_clock_pane_t2_ParamLimits

0xd348,	// (0x00073510) sc_clock_pane_t2

0xd35a,	// (0x00073522) sc_clock_pane_t3_ParamLimits

0xd35a,	// (0x00073522) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00075e44) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00075e44) sc_clock_pane_t

0xdb63,	// (0x00073d2b) main_fs_bigclock_indicator_pane_ParamLimits

0xdb63,	// (0x00073d2b) main_fs_bigclock_indicator_pane

0xd3e1,	// (0x000735a9) main_fs_bigclock_pane_g1_ParamLimits

0xd3e1,	// (0x000735a9) main_fs_bigclock_pane_g1

0xdb6f,	// (0x00073d37) main_fs_bigclock_pane_t1_ParamLimits

0xdb6f,	// (0x00073d37) main_fs_bigclock_pane_t1

0xdb81,	// (0x00073d49) main_fs_bigclock_pane_t2_ParamLimits

0xdb81,	// (0x00073d49) main_fs_bigclock_pane_t2

0xdb95,	// (0x00073d5d) main_fs_bigclock_pane_t3_ParamLimits

0xdb95,	// (0x00073d5d) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x00076043) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x00076043) main_fs_bigclock_pane_t

0x2e1c,	// (0x00068fe4) main_fs_bigclock_indicator_pane_g1

0x423b,	// (0x0006a403) ncim_query_content_pane_g2_ParamLimits

0x423b,	// (0x0006a403) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00075dd1) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00075dd1) ncim_query_content_pane_g

0xd36c,	// (0x00073534) sc_clock_pane_t4_ParamLimits

0xd36c,	// (0x00073534) sc_clock_pane_t4

0x99cb,	// (0x0006fb93) main_radioblah_pane

0x3780,	// (0x00069948) cell_call4_button_pane_t1_copy1_ParamLimits

0x3780,	// (0x00069948) cell_call4_button_pane_t1_copy1

0xcffc,	// (0x000731c4) main_ncimui_pane_t1_ParamLimits

0xcffc,	// (0x000731c4) main_ncimui_pane_t1

0xd016,	// (0x000731de) main_ncimui_pane_t2_ParamLimits

0xd016,	// (0x000731de) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00075dca) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00075dca) main_ncimui_pane_t

0x46b7,	// (0x0006a87f) main_radioblah_anim_pane_ParamLimits

0x46b7,	// (0x0006a87f) main_radioblah_anim_pane

0x46c8,	// (0x0006a890) main_radioblah_info_pane_ParamLimits

0x46c8,	// (0x0006a890) main_radioblah_info_pane

0x46dc,	// (0x0006a8a4) main_radioblah_pane_t1_ParamLimits

0x46dc,	// (0x0006a8a4) main_radioblah_pane_t1

0x46f8,	// (0x0006a8c0) main_radioblah_pane_t2_ParamLimits

0x46f8,	// (0x0006a8c0) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00075e65) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00075e65) main_radioblah_pane_t

0xd435,	// (0x000735fd) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd435,	// (0x000735fd) main_radioblah_rocker_ctrl_pane

0x4740,	// (0x0006a908) main_radioblah_info_pane_t1_ParamLimits

0x4740,	// (0x0006a908) main_radioblah_info_pane_t1

0xd47e,	// (0x00073646) main_radioblah_info_pane_t2_ParamLimits

0xd47e,	// (0x00073646) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00075e6e) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00075e6e) main_radioblah_info_pane_t

0x1c4b,	// (0x00067e13) main_radioblah_rocker_ctrl_pane_g1

0xd52e,	// (0x000736f6) main_radioblah_rocker_ctrl_pane_g2

0xd536,	// (0x000736fe) main_radioblah_rocker_ctrl_pane_g3

0xd53e,	// (0x00073706) main_radioblah_rocker_ctrl_pane_g4

0xd546,	// (0x0007370e) main_radioblah_rocker_ctrl_pane_g5

0xd54e,	// (0x00073716) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00075e77) main_radioblah_rocker_ctrl_pane_g

0xcfc0,	// (0x00073188) main_cset_text2_pane_t1_copy1_ParamLimits

0xb87d,	// (0x00071a45) cam4_image_uncrop_qvga_pane

0xb9c6,	// (0x00071b8e) vid4_image_uncrop_qcif_pane

0xcbe7,	// (0x00072daf) cam6_image_uncrop_qvga_pane_ParamLimits

0xcbe7,	// (0x00072daf) cam6_image_uncrop_qvga_pane

0x3f47,	// (0x0006a10f) vid6_image_uncrop_qcif_pane_ParamLimits

0x3f47,	// (0x0006a10f) vid6_image_uncrop_qcif_pane

0x6885,	// (0x0006ca4d) bg_popup_preview_window_pane_cp03

0x41ed,	// (0x0006a3b5) list_cset_text2_pane

0x41f5,	// (0x0006a3bd) main_cset6_text2_pane_g1

0x41fd,	// (0x0006a3c5) main_cset6_text2_pane_t1

0xd556,	// (0x0007371e) list_cset_text2_pane_t1_ParamLimits

0xd556,	// (0x0007371e) list_cset_text2_pane_t1

0x99cb,	// (0x0006fb93) main_radioblah_pane_ParamLimits

0xd2cd,	// (0x00073495) main_mobtv_info_pane_t3_ParamLimits

0xd2cd,	// (0x00073495) main_mobtv_info_pane_t3

0xd423,	// (0x000735eb) main_radioblah_pane_g1

0xd44e,	// (0x00073616) main_radioblah_info_pane_g1

0xd4d3,	// (0x0007369b) main_radioblah_info_pane_t3_ParamLimits

0xd4d3,	// (0x0007369b) main_radioblah_info_pane_t3

0x8703,	// (0x0006e8cb) highlight_cell_cale_month_pane_ParamLimits

0x8703,	// (0x0006e8cb) highlight_cell_cale_month_pane

0x6885,	// (0x0006ca4d) main_phob_fisheye_pane

0x1f5d,	// (0x00068125) scroll_pane_cp0031_ParamLimits

0x1f5d,	// (0x00068125) scroll_pane_cp0031

0x4059,	// (0x0006a221) wait_bar_pane_cp08_ParamLimits

0xcd8c,	// (0x00072f54) cset_list_set_pane_copy1_ParamLimits

0x4794,	// (0x0006a95c) highlight_cell_cale_month_pane_g1

0xd56f,	// (0x00073737) highlight_cell_cale_month_pane_t1

0x3d05,	// (0x00069ecd) list_gen_pane_cp01

0x3953,	// (0x00069b1b) scroll_pane_01

0xd57d,	// (0x00073745) list_single_double_fisheye_pane

0x5eec,	// (0x0006c0b4) list_double_fisheye_pane_g1_ParamLimits

0x5eec,	// (0x0006c0b4) list_double_fisheye_pane_g1

0x5ef8,	// (0x0006c0c0) list_double_fisheye_pane_g2_ParamLimits

0x5ef8,	// (0x0006c0c0) list_double_fisheye_pane_g2

0xd586,	// (0x0007374e) list_double_fisheye_pane_g3_ParamLimits

0xd586,	// (0x0007374e) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00075e84) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00075e84) list_double_fisheye_pane_g

0x5f29,	// (0x0006c0f1) list_double_fisheye_pane_t1_ParamLimits

0x5f29,	// (0x0006c0f1) list_double_fisheye_pane_t1

0x5f44,	// (0x0006c10c) list_double_fisheye_pane_t2_ParamLimits

0x5f44,	// (0x0006c10c) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00075e8f) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00075e8f) list_double_fisheye_pane_t

0x6885,	// (0x0006ca4d) main_call5_pane

0xd392,	// (0x0007355a) sc_swipe_pane_ParamLimits

0xd392,	// (0x0007355a) sc_swipe_pane

0xd59e,	// (0x00073766) call5_image_pane_ParamLimits

0xd59e,	// (0x00073766) call5_image_pane

0xd5b0,	// (0x00073778) call5_swipe_1_pane_ParamLimits

0xd5b0,	// (0x00073778) call5_swipe_1_pane

0xd5bc,	// (0x00073784) call5_swipe_2_pane_ParamLimits

0xd5bc,	// (0x00073784) call5_swipe_2_pane

0xd5d8,	// (0x000737a0) popup_call5_audio_first_window_ParamLimits

0xd5d8,	// (0x000737a0) popup_call5_audio_first_window

0x1e7b,	// (0x00068043) call5_swipe_1_pane_g1_ParamLimits

0x1e7b,	// (0x00068043) call5_swipe_1_pane_g1

0x479c,	// (0x0006a964) call5_swipe_1_pane_g2_ParamLimits

0x479c,	// (0x0006a964) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00075e94) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00075e94) call5_swipe_1_pane_g

0x47a8,	// (0x0006a970) call5_swipe_1_pane_t1_ParamLimits

0x47a8,	// (0x0006a970) call5_swipe_1_pane_t1

0x1e7b,	// (0x00068043) call5_swipe_2_pane_g1_ParamLimits

0x1e7b,	// (0x00068043) call5_swipe_2_pane_g1

0x47bd,	// (0x0006a985) call5_swipe_2_pane_g2_ParamLimits

0x47bd,	// (0x0006a985) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00075e99) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00075e99) call5_swipe_2_pane_g

0x47c9,	// (0x0006a991) call5_swipe_2_pane_t1_ParamLimits

0x47c9,	// (0x0006a991) call5_swipe_2_pane_t1

0x47de,	// (0x0006a9a6) sc_swipe_pane_g1_ParamLimits

0x47de,	// (0x0006a9a6) sc_swipe_pane_g1

0x47eb,	// (0x0006a9b3) sc_swipe_pane_g2_ParamLimits

0x47eb,	// (0x0006a9b3) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00075e9e) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00075e9e) sc_swipe_pane_g

0x47f7,	// (0x0006a9bf) sc_swipe_pane_t1_ParamLimits

0x47f7,	// (0x0006a9bf) sc_swipe_pane_t1

0x6885,	// (0x0006ca4d) main_cmail_launcher_pane

0xd5e8,	// (0x000737b0) aid_size_cell_cmail_l_ParamLimits

0xd5e8,	// (0x000737b0) aid_size_cell_cmail_l

0xd5f8,	// (0x000737c0) grid_cmail_l_pane_ParamLimits

0xd5f8,	// (0x000737c0) grid_cmail_l_pane

0xd608,	// (0x000737d0) cell_cmail_l_pane_ParamLimits

0xd608,	// (0x000737d0) cell_cmail_l_pane

0xd61e,	// (0x000737e6) cell_cmail_l_pane_g1_ParamLimits

0xd61e,	// (0x000737e6) cell_cmail_l_pane_g1

0xd62a,	// (0x000737f2) cell_cmail_l_pane_t1_ParamLimits

0xd62a,	// (0x000737f2) cell_cmail_l_pane_t1

0x480c,	// (0x0006a9d4) cell_cmail_l_pane_t2_ParamLimits

0x480c,	// (0x0006a9d4) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00075ea3) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00075ea3) cell_cmail_l_pane_t

0x99cb,	// (0x0006fb93) grid_highlight_pane_cp018_ParamLimits

0x99cb,	// (0x0006fb93) grid_highlight_pane_cp018

0x69a9,	// (0x0006cb71) main2_pane_ParamLimits

0x69a9,	// (0x0006cb71) main2_pane

0xe993,	// (0x00074b5b) popup_sp_fs_action_menu_bg_pane_g1

0xe99b,	// (0x00074b63) popup_sp_fs_action_menu_bg_pane_g2

0xe9a3,	// (0x00074b6b) popup_sp_fs_action_menu_bg_pane_g3

0xe9ab,	// (0x00074b73) popup_sp_fs_action_menu_bg_pane_g4

0xe9b3,	// (0x00074b7b) popup_sp_fs_action_menu_bg_pane_g5

0xe9bb,	// (0x00074b83) popup_sp_fs_action_menu_bg_pane_g6

0xe9c3,	// (0x00074b8b) popup_sp_fs_action_menu_bg_pane_g7

0xe9cb,	// (0x00074b93) popup_sp_fs_action_menu_bg_pane_g8

0xe9d3,	// (0x00074b9b) popup_sp_fs_action_menu_bg_pane_g9

0xe9db,	// (0x00074ba3) popup_sp_fs_action_menu_bg_pane_g10

0xe9db,	// (0x00074ba3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00075374) popup_sp_fs_action_menu_bg_pane_g

0x572b,	// (0x0006b8f3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x2_t3_g3_g1

0x5737,	// (0x0006b8ff) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5737,	// (0x0006b8ff) list_medium_line_x2_t3_g3_g2

0x5743,	// (0x0006b90b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5743,	// (0x0006b90b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00075424) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00075424) list_medium_line_x2_t3_g3_g

0x574f,	// (0x0006b917) list_medium_line_x2_t3_g3_t1_ParamLimits

0x574f,	// (0x0006b917) list_medium_line_x2_t3_g3_t1

0x5764,	// (0x0006b92c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5764,	// (0x0006b92c) list_medium_line_x2_t3_g3_t2

0x5776,	// (0x0006b93e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5776,	// (0x0006b93e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0007542b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0007542b) list_medium_line_x2_t3_g3_t

0x572b,	// (0x0006b8f3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x2_t3_g2_g1

0x5743,	// (0x0006b90b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5743,	// (0x0006b90b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00075432) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00075432) list_medium_line_x2_t3_g2_g

0x578b,	// (0x0006b953) list_medium_line_x2_t3_g2_t1_ParamLimits

0x578b,	// (0x0006b953) list_medium_line_x2_t3_g2_t1

0x57a1,	// (0x0006b969) list_medium_line_x2_t3_g2_t2_ParamLimits

0x57a1,	// (0x0006b969) list_medium_line_x2_t3_g2_t2

0x57b3,	// (0x0006b97b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x57b3,	// (0x0006b97b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00075437) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00075437) list_medium_line_x2_t3_g2_t

0x572b,	// (0x0006b8f3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x2_t4_g4_g1

0x57d1,	// (0x0006b999) list_medium_line_x2_t4_g4_g2_ParamLimits

0x57d1,	// (0x0006b999) list_medium_line_x2_t4_g4_g2

0x5737,	// (0x0006b8ff) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5737,	// (0x0006b8ff) list_medium_line_x2_t4_g4_g3

0x57dd,	// (0x0006b9a5) list_medium_line_x2_t4_g4_g4_ParamLimits

0x57dd,	// (0x0006b9a5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0007543e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0007543e) list_medium_line_x2_t4_g4_g

0x57e9,	// (0x0006b9b1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x57e9,	// (0x0006b9b1) list_medium_line_x2_t4_g4_t1

0x5803,	// (0x0006b9cb) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5803,	// (0x0006b9cb) list_medium_line_x2_t4_g4_t2

0x5819,	// (0x0006b9e1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5819,	// (0x0006b9e1) list_medium_line_x2_t4_g4_t3

0x582e,	// (0x0006b9f6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x582e,	// (0x0006b9f6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00075447) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00075447) list_medium_line_x2_t4_g4_t

0x572b,	// (0x0006b8f3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x2_t2_g4_g1

0x57d1,	// (0x0006b999) list_medium_line_x2_t2_g4_g2_ParamLimits

0x57d1,	// (0x0006b999) list_medium_line_x2_t2_g4_g2

0x5737,	// (0x0006b8ff) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5737,	// (0x0006b8ff) list_medium_line_x2_t2_g4_g3

0x5743,	// (0x0006b90b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5743,	// (0x0006b90b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x000754ae) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x000754ae) list_medium_line_x2_t2_g4_g

0x5840,	// (0x0006ba08) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5840,	// (0x0006ba08) list_medium_line_x2_t2_g4_t1

0x5776,	// (0x0006b93e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5776,	// (0x0006b93e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x000754b7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x000754b7) list_medium_line_x2_t2_g4_t

0x572b,	// (0x0006b8f3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x2_t2_g3_g1

0x5737,	// (0x0006b8ff) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5737,	// (0x0006b8ff) list_medium_line_x2_t2_g3_g2

0x5743,	// (0x0006b90b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5743,	// (0x0006b90b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00075424) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00075424) list_medium_line_x2_t2_g3_g

0x5855,	// (0x0006ba1d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5855,	// (0x0006ba1d) list_medium_line_x2_t2_g3_t1

0x5776,	// (0x0006b93e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5776,	// (0x0006b93e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x000754bc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x000754bc) list_medium_line_x2_t2_g3_t

0x8921,	// (0x0006eae9) main_sp_fs_list_pane_ParamLimits

0x8921,	// (0x0006eae9) main_sp_fs_list_pane

0x892d,	// (0x0006eaf5) sp_fs_scroll_pane_ParamLimits

0x892d,	// (0x0006eaf5) sp_fs_scroll_pane

0x586a,	// (0x0006ba32) list_medium_line_x2_t3_t1

0x587a,	// (0x0006ba42) list_medium_line_x2_t3_t2

0x5888,	// (0x0006ba50) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00075507) list_medium_line_x2_t3_t

0x5896,	// (0x0006ba5e) list_medium_line_x3_t4_t1

0x58a6,	// (0x0006ba6e) list_medium_line_x3_t4_t2

0x58b4,	// (0x0006ba7c) list_medium_line_x3_t4_t3

0x5888,	// (0x0006ba50) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0007550e) list_medium_line_x3_t4_t

0x58c2,	// (0x0006ba8a) list_medium_line_x4_t5_t1

0x58d2,	// (0x0006ba9a) list_medium_line_x4_t5_t2

0x58b4,	// (0x0006ba7c) list_medium_line_x4_t5_t3

0x58e0,	// (0x0006baa8) list_medium_line_x4_t5_t4

0x5888,	// (0x0006ba50) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00075517) list_medium_line_x4_t5_t

0x572b,	// (0x0006b8f3) list_medium_line_t4_g4_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_t4_g4_g1

0x57dd,	// (0x0006b9a5) list_medium_line_t4_g4_g2_ParamLimits

0x57dd,	// (0x0006b9a5) list_medium_line_t4_g4_g2

0x58ee,	// (0x0006bab6) list_medium_line_t4_g4_g3_ParamLimits

0x58ee,	// (0x0006bab6) list_medium_line_t4_g4_g3

0x5743,	// (0x0006b90b) list_medium_line_t4_g4_g4_ParamLimits

0x5743,	// (0x0006b90b) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00075522) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00075522) list_medium_line_t4_g4_g

0x58fa,	// (0x0006bac2) list_medium_line_t4_g4_t1_ParamLimits

0x58fa,	// (0x0006bac2) list_medium_line_t4_g4_t1

0x590f,	// (0x0006bad7) list_medium_line_t4_g4_t2_ParamLimits

0x590f,	// (0x0006bad7) list_medium_line_t4_g4_t2

0x5925,	// (0x0006baed) list_medium_line_t4_g4_t3_ParamLimits

0x5925,	// (0x0006baed) list_medium_line_t4_g4_t3

0x5776,	// (0x0006b93e) list_medium_line_t4_g4_t4_ParamLimits

0x5776,	// (0x0006b93e) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0007552b) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0007552b) list_medium_line_t4_g4_t

0x8a4c,	// (0x0006ec14) chi_dic_find_pane_g1

0x99e7,	// (0x0006fbaf) main_tport_pane

0x5b5b,	// (0x0006bd23) list_medium_line_plain_t1

0x5b69,	// (0x0006bd31) list_medium_line_t2_g2_g1_ParamLimits

0x5b69,	// (0x0006bd31) list_medium_line_t2_g2_g1

0x5b75,	// (0x0006bd3d) list_medium_line_t2_g2_g2_ParamLimits

0x5b75,	// (0x0006bd3d) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00075be7) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00075be7) list_medium_line_t2_g2_g

0x5b81,	// (0x0006bd49) list_medium_line_t2_g2_t1_ParamLimits

0x5b81,	// (0x0006bd49) list_medium_line_t2_g2_t1

0x5b98,	// (0x0006bd60) list_medium_line_t2_g2_t2_ParamLimits

0x5b98,	// (0x0006bd60) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00075bec) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00075bec) list_medium_line_t2_g2_t

0x5db7,	// (0x0006bf7f) aid_sp_fs_list_icon_a_sm

0xc8c5,	// (0x00072a8d) aid_sp_fs_list_icon_d

0x2ec0,	// (0x00069088) aid_sp_fs_text_primary

0xe3b9,	// (0x00074581) aid_sp_fs_text_secondary

0x5dbf,	// (0x0006bf87) list_medium_line

0x5dbf,	// (0x0006bf87) list_medium_line_g2

0x5dbf,	// (0x0006bf87) list_medium_line_g3

0x5dbf,	// (0x0006bf87) list_medium_line_plain

0x5dbf,	// (0x0006bf87) list_medium_line_plain_t2

0x5dbf,	// (0x0006bf87) list_medium_line_plain_t3

0x5dbf,	// (0x0006bf87) list_medium_line_right_icon

0x5dbf,	// (0x0006bf87) list_medium_line_right_iconx2

0x5dbf,	// (0x0006bf87) list_medium_line_t2

0x5dbf,	// (0x0006bf87) list_medium_line_t2_g2

0x5dbf,	// (0x0006bf87) list_medium_line_t2_g3

0x5dbf,	// (0x0006bf87) list_medium_line_t2_right_icon

0x5dbf,	// (0x0006bf87) list_medium_line_t2_right_iconx2

0x5dbf,	// (0x0006bf87) list_medium_line_t3

0x5dbf,	// (0x0006bf87) list_medium_line_t3_g2

0x5dbf,	// (0x0006bf87) list_medium_line_t3_g3

0x5dbf,	// (0x0006bf87) list_medium_line_t3_right_iconx2

0x5dc8,	// (0x0006bf90) list_medium_line_t4_g4

0x5dd1,	// (0x0006bf99) list_medium_line_x2

0x5dd1,	// (0x0006bf99) list_medium_line_x2_t2_g2

0x5dd1,	// (0x0006bf99) list_medium_line_x2_t2_g3

0x5dd1,	// (0x0006bf99) list_medium_line_x2_t2_g4

0x5dd1,	// (0x0006bf99) list_medium_line_x2_t3

0x5dd1,	// (0x0006bf99) list_medium_line_x2_t3_g2

0x5dd1,	// (0x0006bf99) list_medium_line_x2_t3_g3

0x5dd1,	// (0x0006bf99) list_medium_line_x2_t3_g4

0x5dd1,	// (0x0006bf99) list_medium_line_x2_t4_g2

0x5dd1,	// (0x0006bf99) list_medium_line_x2_t4_g4

0x5dda,	// (0x0006bfa2) list_medium_line_x3

0x5dda,	// (0x0006bfa2) list_medium_line_x3_t4

0x5dda,	// (0x0006bfa2) list_medium_line_x3_t4_g4

0x5dc8,	// (0x0006bf90) list_medium_line_x4_t4

0x5dc8,	// (0x0006bf90) list_medium_line_x4_t4_g7

0x5dc8,	// (0x0006bf90) list_medium_line_x4_t5

0x5de3,	// (0x0006bfab) list_single_fs_dyc_pane_ParamLimits

0x5de3,	// (0x0006bfab) list_single_fs_dyc_pane

0x572b,	// (0x0006b8f3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x4_t4_g7_g1

0x5e1b,	// (0x0006bfe3) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5e1b,	// (0x0006bfe3) list_medium_line_x4_t4_g7_g2

0x5e27,	// (0x0006bfef) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5e27,	// (0x0006bfef) list_medium_line_x4_t4_g7_g3

0x5e36,	// (0x0006bffe) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5e36,	// (0x0006bffe) list_medium_line_x4_t4_g7_g4

0x5e42,	// (0x0006c00a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5e42,	// (0x0006c00a) list_medium_line_x4_t4_g7_g5

0x5e51,	// (0x0006c019) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5e51,	// (0x0006c019) list_medium_line_x4_t4_g7_g6

0x5e60,	// (0x0006c028) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5e60,	// (0x0006c028) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe8,	// (0x00075db0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe8,	// (0x00075db0) list_medium_line_x4_t4_g7_g

0x5e6c,	// (0x0006c034) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5e6c,	// (0x0006c034) list_medium_line_x4_t4_g7_t1

0x5e81,	// (0x0006c049) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5e81,	// (0x0006c049) list_medium_line_x4_t4_g7_t2

0x5e96,	// (0x0006c05e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5e96,	// (0x0006c05e) list_medium_line_x4_t4_g7_t3

0x5eab,	// (0x0006c073) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5eab,	// (0x0006c073) list_medium_line_x4_t4_g7_t4

0x5ebd,	// (0x0006c085) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5ebd,	// (0x0006c085) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf7,	// (0x00075dbf) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf7,	// (0x00075dbf) list_medium_line_x4_t4_g7_t

0x5ecf,	// (0x0006c097) list_single_dyc_row_pane_ParamLimits

0x5ecf,	// (0x0006c097) list_single_dyc_row_pane

0xd592,	// (0x0007375a) call5_gesture_pane_ParamLimits

0xd592,	// (0x0007375a) call5_gesture_pane

0xd5c8,	// (0x00073790) call5_windows_pane_ParamLimits

0xd5c8,	// (0x00073790) call5_windows_pane

0xd640,	// (0x00073808) call5_swipe_1_pane_cp_ParamLimits

0xd640,	// (0x00073808) call5_swipe_1_pane_cp

0xd64c,	// (0x00073814) call5_swipe_2_pane_cp_ParamLimits

0xd64c,	// (0x00073814) call5_swipe_2_pane_cp

0x02a9,	// (0x00066471) call5_image_pane_cp

0xd658,	// (0x00073820) popup_call5_audio_first_window_cp_ParamLimits

0xd658,	// (0x00073820) popup_call5_audio_first_window_cp

0x47de,	// (0x0006a9a6) call5_swipe_1_pane_g1_cp_ParamLimits

0x47de,	// (0x0006a9a6) call5_swipe_1_pane_g1_cp

0x481e,	// (0x0006a9e6) call5_swipe_1_pane_g2_cp

0x47f7,	// (0x0006a9bf) call5_swipe_1_pane_t1_cp_ParamLimits

0x47f7,	// (0x0006a9bf) call5_swipe_1_pane_t1_cp

0x47de,	// (0x0006a9a6) call5_swipe_2_pane_g1_cp_ParamLimits

0x47de,	// (0x0006a9a6) call5_swipe_2_pane_g1_cp

0x4826,	// (0x0006a9ee) call5_swipe_2_pane_g2_cp

0x482e,	// (0x0006a9f6) call5_swipe_2_pane_t1_cp_ParamLimits

0x482e,	// (0x0006a9f6) call5_swipe_2_pane_t1_cp

0x99cb,	// (0x0006fb93) main_sp_fs_email_pane

0x4843,	// (0x0006aa0b) main_sp_fs_listscroll_pane_te

0x5f66,	// (0x0006c12e) popup_sp_fs_action_menu_pane_ParamLimits

0x5f66,	// (0x0006c12e) popup_sp_fs_action_menu_pane

0x1c4b,	// (0x00067e13) bg_sp_fs_ctrlbar_pane_g1

0x484c,	// (0x0006aa14) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4855,	// (0x0006aa1d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x485e,	// (0x0006aa26) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1c4b,	// (0x00067e13) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00075ea8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1a2a,	// (0x00067bf2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1a2a,	// (0x00067bf2) bg_sp_fs_ctrlbar_ddmenu_pane

0x4867,	// (0x0006aa2f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4867,	// (0x0006aa2f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4873,	// (0x0006aa3b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4873,	// (0x0006aa3b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00075eb1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00075eb1) main_sp_fs_ctrlbar_ddmenu_pane_g

0x487f,	// (0x0006aa47) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x487f,	// (0x0006aa47) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5fac,	// (0x0006c174) list_medium_line_t2_right_icon_g1

0x5fb4,	// (0x0006c17c) list_medium_line_t2_right_icon_t1

0x5fc4,	// (0x0006c18c) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00075eb6) list_medium_line_t2_right_icon_t

0x1716,	// (0x000678de) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1716,	// (0x000678de) bg_sp_fs_ctrlbar_pane

0xd6bd,	// (0x00073885) main_sp_fs_ctrlbar_button_pane_cp01

0xd6c5,	// (0x0007388d) main_sp_fs_ctrlbar_ddmenu_pane

0x48d3,	// (0x0006aa9b) main_sp_fs_ctrlbar_pane_g1

0x48df,	// (0x0006aaa7) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00075ebb) main_sp_fs_ctrlbar_pane_g

0x48eb,	// (0x0006aab3) main_sp_fs_ctrlbar_pane_t1

0x5fd2,	// (0x0006c19a) main_sp_fs_ctrlbar_pane

0x5fee,	// (0x0006c1b6) main_sp_fs_listscroll_pane_te_cp01

0x5fff,	// (0x0006c1c7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5fff,	// (0x0006c1c7) popup_sp_fs_action_menu_pane_cp01

0x99cb,	// (0x0006fb93) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x99cb,	// (0x0006fb93) bg_sp_fs_highlight_list_pane_cp01

0x6019,	// (0x0006c1e1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6019,	// (0x0006c1e1) sp_fs_action_menu_list_gene_pane_g1

0x4900,	// (0x0006aac8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4900,	// (0x0006aac8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x00075ec0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x00075ec0) sp_fs_action_menu_list_gene_pane_g

0x6028,	// (0x0006c1f0) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6028,	// (0x0006c1f0) sp_fs_action_menu_list_gene_pane_t1

0x6040,	// (0x0006c208) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6040,	// (0x0006c208) sp_fs_action_menu_list_gene_pane

0x2607,	// (0x000687cf) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2607,	// (0x000687cf) popup_sp_fs_action_menu_bg_pane

0x6063,	// (0x0006c22b) sp_fs_action_menu_list_pane_ParamLimits

0x6063,	// (0x0006c22b) sp_fs_action_menu_list_pane

0x2639,	// (0x00068801) sp_fs_scroll_pane_cp01_ParamLimits

0x2639,	// (0x00068801) sp_fs_scroll_pane_cp01

0x6087,	// (0x0006c24f) list_medium_line_plain_t2_t1

0x6097,	// (0x0006c25f) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x00075ec5) list_medium_line_plain_t2_t

0x60a5,	// (0x0006c26d) list_medium_line_plain_t3_t1

0x60b5,	// (0x0006c27d) list_medium_line_plain_t3_t2

0x60c3,	// (0x0006c28b) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x00075eca) list_medium_line_plain_t3_t

0x572b,	// (0x0006b8f3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x2_t2_g2_g1

0x5743,	// (0x0006b90b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5743,	// (0x0006b90b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00075432) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00075432) list_medium_line_x2_t2_g2_g

0x58fa,	// (0x0006bac2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x58fa,	// (0x0006bac2) list_medium_line_x2_t2_g2_t1

0x5776,	// (0x0006b93e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5776,	// (0x0006b93e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x00075ed1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x00075ed1) list_medium_line_x2_t2_g2_t

0x572b,	// (0x0006b8f3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x2_t4_g2_g1

0x60d1,	// (0x0006c299) list_medium_line_x2_t4_g2_g2_ParamLimits

0x60d1,	// (0x0006c299) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x00075ed6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x00075ed6) list_medium_line_x2_t4_g2_g

0x60e3,	// (0x0006c2ab) list_medium_line_x2_t4_g2_t1_ParamLimits

0x60e3,	// (0x0006c2ab) list_medium_line_x2_t4_g2_t1

0x60fd,	// (0x0006c2c5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x60fd,	// (0x0006c2c5) list_medium_line_x2_t4_g2_t2

0x6113,	// (0x0006c2db) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6113,	// (0x0006c2db) list_medium_line_x2_t4_g2_t3

0x5776,	// (0x0006b93e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5776,	// (0x0006b93e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x00075edb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x00075edb) list_medium_line_x2_t4_g2_t

0x6128,	// (0x0006c2f0) list_medium_line_t3_right_iconx2_g1

0x5fac,	// (0x0006c174) list_medium_line_t3_right_iconx2_g2

0x6130,	// (0x0006c2f8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x00075ee4) list_medium_line_t3_right_iconx2_g

0x6138,	// (0x0006c300) list_medium_line_t3_right_iconx2_t1

0x6148,	// (0x0006c310) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x00075eeb) list_medium_line_t3_right_iconx2_t

0x572b,	// (0x0006b8f3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x3_t4_g4_g1

0x5737,	// (0x0006b8ff) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5737,	// (0x0006b8ff) list_medium_line_x3_t4_g4_g2

0x57dd,	// (0x0006b9a5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x57dd,	// (0x0006b9a5) list_medium_line_x3_t4_g4_g3

0x6156,	// (0x0006c31e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6156,	// (0x0006c31e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x00075ef0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x00075ef0) list_medium_line_x3_t4_g4_g

0x6162,	// (0x0006c32a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6162,	// (0x0006c32a) list_medium_line_x3_t4_g4_t1

0x6179,	// (0x0006c341) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6179,	// (0x0006c341) list_medium_line_x3_t4_g4_t2

0x618e,	// (0x0006c356) list_medium_line_x3_t4_g4_t3_ParamLimits

0x618e,	// (0x0006c356) list_medium_line_x3_t4_g4_t3

0x61a3,	// (0x0006c36b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x61a3,	// (0x0006c36b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x00075ef9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x00075ef9) list_medium_line_x3_t4_g4_t

0x61c0,	// (0x0006c388) list_single_dyc_row_text_pane_t1_ParamLimits

0x61c0,	// (0x0006c388) list_single_dyc_row_text_pane_t1

0x6203,	// (0x0006c3cb) list_single_dyc_row_text_pane_t2_ParamLimits

0x6203,	// (0x0006c3cb) list_single_dyc_row_text_pane_t2

0x625d,	// (0x0006c425) list_single_dyc_row_text_pane_t3_ParamLimits

0x625d,	// (0x0006c425) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x00075f02) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x00075f02) list_single_dyc_row_text_pane_t

0x626f,	// (0x0006c437) list_single_dyc_row_pane_g1_ParamLimits

0x626f,	// (0x0006c437) list_single_dyc_row_pane_g1

0x627b,	// (0x0006c443) list_single_dyc_row_pane_g2_ParamLimits

0x627b,	// (0x0006c443) list_single_dyc_row_pane_g2

0x6287,	// (0x0006c44f) list_single_dyc_row_pane_g3_ParamLimits

0x6287,	// (0x0006c44f) list_single_dyc_row_pane_g3

0x6293,	// (0x0006c45b) list_single_dyc_row_pane_g4_ParamLimits

0x6293,	// (0x0006c45b) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x00075f09) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x00075f09) list_single_dyc_row_pane_g

0x629f,	// (0x0006c467) list_single_dyc_row_text_pane_ParamLimits

0x629f,	// (0x0006c467) list_single_dyc_row_text_pane

0x6885,	// (0x0006ca4d) bg_sp_fs_scroll_pane

0x2718,	// (0x000688e0) thumb_sp_fs_scroll_pane

0x5b69,	// (0x0006bd31) list_medium_line_g1_ParamLimits

0x5b69,	// (0x0006bd31) list_medium_line_g1

0x62be,	// (0x0006c486) list_medium_line_t1_ParamLimits

0x62be,	// (0x0006c486) list_medium_line_t1

0x572b,	// (0x0006b8f3) list_medium_line_x2_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x2_g1

0x5737,	// (0x0006b8ff) list_medium_line_x2_g2_ParamLimits

0x5737,	// (0x0006b8ff) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x00075f12) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x00075f12) list_medium_line_x2_g

0x62d3,	// (0x0006c49b) list_medium_line_x2_t1_ParamLimits

0x62d3,	// (0x0006c49b) list_medium_line_x2_t1

0x572b,	// (0x0006b8f3) list_medium_line_x3_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x3_g1

0x5737,	// (0x0006b8ff) list_medium_line_x3_g2_ParamLimits

0x5737,	// (0x0006b8ff) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x00075f12) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x00075f12) list_medium_line_x3_g

0x62d3,	// (0x0006c49b) list_medium_line_x3_t1_ParamLimits

0x62d3,	// (0x0006c49b) list_medium_line_x3_t1

0x274c,	// (0x00068914) thumb_sp_fs_scroll_pane_g1

0x2755,	// (0x0006891d) thumb_sp_fs_scroll_pane_g2

0x275e,	// (0x00068926) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x00075f17) thumb_sp_fs_scroll_pane_g

0x274c,	// (0x00068914) bg_sp_fs_scroll_pane_g1

0x2755,	// (0x0006891d) bg_sp_fs_scroll_pane_g2

0x275e,	// (0x00068926) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x00075f17) bg_sp_fs_scroll_pane_g

0x572b,	// (0x0006b8f3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x572b,	// (0x0006b8f3) list_medium_line_x2_t3_g4_g1

0x57d1,	// (0x0006b999) list_medium_line_x2_t3_g4_g2_ParamLimits

0x57d1,	// (0x0006b999) list_medium_line_x2_t3_g4_g2

0x5737,	// (0x0006b8ff) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5737,	// (0x0006b8ff) list_medium_line_x2_t3_g4_g3

0x5743,	// (0x0006b90b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5743,	// (0x0006b90b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x000754ae) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x000754ae) list_medium_line_x2_t3_g4_g

0x62e9,	// (0x0006c4b1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x62e9,	// (0x0006c4b1) list_medium_line_x2_t3_g4_t1

0x62ff,	// (0x0006c4c7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x62ff,	// (0x0006c4c7) list_medium_line_x2_t3_g4_t2

0x5776,	// (0x0006b93e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5776,	// (0x0006b93e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x00075f1e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x00075f1e) list_medium_line_x2_t3_g4_t

0x5b69,	// (0x0006bd31) list_medium_line_g2_g1_ParamLimits

0x5b69,	// (0x0006bd31) list_medium_line_g2_g1

0x5b75,	// (0x0006bd3d) list_medium_line_g2_g2_ParamLimits

0x5b75,	// (0x0006bd3d) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00075be7) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00075be7) list_medium_line_g2_g

0x6318,	// (0x0006c4e0) list_medium_line_g2_t1_ParamLimits

0x6318,	// (0x0006c4e0) list_medium_line_g2_t1

0x5b69,	// (0x0006bd31) list_medium_line_t3_g2_g1_ParamLimits

0x5b69,	// (0x0006bd31) list_medium_line_t3_g2_g1

0x5b75,	// (0x0006bd3d) list_medium_line_t3_g2_g2_ParamLimits

0x5b75,	// (0x0006bd3d) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00075be7) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00075be7) list_medium_line_t3_g2_g

0x632d,	// (0x0006c4f5) list_medium_line_t3_g2_t1_ParamLimits

0x632d,	// (0x0006c4f5) list_medium_line_t3_g2_t1

0x6347,	// (0x0006c50f) list_medium_line_t3_g2_t2_ParamLimits

0x6347,	// (0x0006c50f) list_medium_line_t3_g2_t2

0x635d,	// (0x0006c525) list_medium_line_t3_g2_t3_ParamLimits

0x635d,	// (0x0006c525) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x00075f25) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x00075f25) list_medium_line_t3_g2_t

0x5fac,	// (0x0006c174) list_medium_line_right_icon_g1

0x6374,	// (0x0006c53c) list_medium_line_right_icon_t1

0x5b69,	// (0x0006bd31) list_medium_line_t2_g1_ParamLimits

0x5b69,	// (0x0006bd31) list_medium_line_t2_g1

0x6382,	// (0x0006c54a) list_medium_line_t2_t1_ParamLimits

0x6382,	// (0x0006c54a) list_medium_line_t2_t1

0x639c,	// (0x0006c564) list_medium_line_t2_t2_ParamLimits

0x639c,	// (0x0006c564) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x00075f2c) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x00075f2c) list_medium_line_t2_t

0x5b69,	// (0x0006bd31) list_medium_line_t3_g1_ParamLimits

0x5b69,	// (0x0006bd31) list_medium_line_t3_g1

0x63b1,	// (0x0006c579) list_medium_line_t3_t1_ParamLimits

0x63b1,	// (0x0006c579) list_medium_line_t3_t1

0x63c8,	// (0x0006c590) list_medium_line_t3_t2_ParamLimits

0x63c8,	// (0x0006c590) list_medium_line_t3_t2

0x63dd,	// (0x0006c5a5) list_medium_line_t3_t3_ParamLimits

0x63dd,	// (0x0006c5a5) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x00075f31) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x00075f31) list_medium_line_t3_t

0x5b69,	// (0x0006bd31) list_medium_line_g3_g1_ParamLimits

0x5b69,	// (0x0006bd31) list_medium_line_g3_g1

0x63ef,	// (0x0006c5b7) list_medium_line_g3_g2_ParamLimits

0x63ef,	// (0x0006c5b7) list_medium_line_g3_g2

0x5b75,	// (0x0006bd3d) list_medium_line_g3_g3_ParamLimits

0x5b75,	// (0x0006bd3d) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x00075f38) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x00075f38) list_medium_line_g3_g

0x63fb,	// (0x0006c5c3) list_medium_line_g3_t1_ParamLimits

0x63fb,	// (0x0006c5c3) list_medium_line_g3_t1

0x5b69,	// (0x0006bd31) list_medium_line_t2_g3_g1_ParamLimits

0x5b69,	// (0x0006bd31) list_medium_line_t2_g3_g1

0x63ef,	// (0x0006c5b7) list_medium_line_t2_g3_g2_ParamLimits

0x63ef,	// (0x0006c5b7) list_medium_line_t2_g3_g2

0x5b75,	// (0x0006bd3d) list_medium_line_t2_g3_g3_ParamLimits

0x5b75,	// (0x0006bd3d) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x00075f38) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x00075f38) list_medium_line_t2_g3_g

0x6410,	// (0x0006c5d8) list_medium_line_t2_g3_t1_ParamLimits

0x6410,	// (0x0006c5d8) list_medium_line_t2_g3_t1

0x6427,	// (0x0006c5ef) list_medium_line_t2_g3_t2_ParamLimits

0x6427,	// (0x0006c5ef) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x00075f3f) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x00075f3f) list_medium_line_t2_g3_t

0x5b69,	// (0x0006bd31) list_medium_line_t3_g3_g1_ParamLimits

0x5b69,	// (0x0006bd31) list_medium_line_t3_g3_g1

0x63ef,	// (0x0006c5b7) list_medium_line_t3_g3_g2_ParamLimits

0x63ef,	// (0x0006c5b7) list_medium_line_t3_g3_g2

0x5b75,	// (0x0006bd3d) list_medium_line_t3_g3_g3_ParamLimits

0x5b75,	// (0x0006bd3d) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x00075f38) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x00075f38) list_medium_line_t3_g3_g

0x643c,	// (0x0006c604) list_medium_line_t3_g3_t1_ParamLimits

0x643c,	// (0x0006c604) list_medium_line_t3_g3_t1

0x6450,	// (0x0006c618) list_medium_line_t3_g3_t2_ParamLimits

0x6450,	// (0x0006c618) list_medium_line_t3_g3_t2

0x6462,	// (0x0006c62a) list_medium_line_t3_g3_t3_ParamLimits

0x6462,	// (0x0006c62a) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x00075f44) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x00075f44) list_medium_line_t3_g3_t

0x6128,	// (0x0006c2f0) list_medium_line_right_iconx2_g1

0x5fac,	// (0x0006c174) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x00075f4b) list_medium_line_right_iconx2_g

0x6476,	// (0x0006c63e) list_medium_line_right_iconx2_t1

0x6128,	// (0x0006c2f0) list_medium_line_t2_right_iconx2_g1

0x5fac,	// (0x0006c174) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x00075f4b) list_medium_line_t2_right_iconx2_g

0x6484,	// (0x0006c64c) list_medium_line_t2_right_iconx2_t1

0x6494,	// (0x0006c65c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x00075f50) list_medium_line_t2_right_iconx2_t

0x64a2,	// (0x0006c66a) list_medium_line_x4_t4_t1

0x64b0,	// (0x0006c678) list_medium_line_x4_t4_t2

0x64c0,	// (0x0006c688) list_medium_line_x4_t4_t3

0x64d0,	// (0x0006c698) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x00075f55) list_medium_line_x4_t4_t

0xd6f8,	// (0x000738c0) tport_appsw_pane_ParamLimits

0xd6f8,	// (0x000738c0) tport_appsw_pane

0xd706,	// (0x000738ce) tport_contact_pane_ParamLimits

0xd706,	// (0x000738ce) tport_contact_pane

0xd714,	// (0x000738dc) tport_listscroll_pane_ParamLimits

0xd714,	// (0x000738dc) tport_listscroll_pane

0xd722,	// (0x000738ea) cell_tport_appsw_pane_ParamLimits

0xd722,	// (0x000738ea) cell_tport_appsw_pane

0x1ee0,	// (0x000680a8) tport_appsw_pane_g1_ParamLimits

0x1ee0,	// (0x000680a8) tport_appsw_pane_g1

0x27c7,	// (0x0006898f) tport_contact_pane_g1

0x27d0,	// (0x00068998) tport_contact_pane_t1

0x27de,	// (0x000689a6) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x00075f5e) tport_contact_pane_t

0x27ec,	// (0x000689b4) list_tport_pane

0x27f5,	// (0x000689bd) scroll_pane_cp_030

0xd74d,	// (0x00073915) cell_tport_appsw_pane_g1

0x280e,	// (0x000689d6) cell_tport_appsw_pane_t1

0x6885,	// (0x0006ca4d) grid_highlight_pane_cp019

0xd75d,	// (0x00073925) list_tport_double_graphic_pane_ParamLimits

0xd75d,	// (0x00073925) list_tport_double_graphic_pane

0x99cb,	// (0x0006fb93) list_highlight_pane_cp023_ParamLimits

0x99cb,	// (0x0006fb93) list_highlight_pane_cp023

0xd76e,	// (0x00073936) list_tport_double_graphic_pane_g1_ParamLimits

0xd76e,	// (0x00073936) list_tport_double_graphic_pane_g1

0xd77b,	// (0x00073943) list_tport_double_graphic_pane_t1_ParamLimits

0xd77b,	// (0x00073943) list_tport_double_graphic_pane_t1

0xd790,	// (0x00073958) list_tport_double_graphic_pane_t2_ParamLimits

0xd790,	// (0x00073958) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x00075f6a) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x00075f6a) list_tport_double_graphic_pane_t

0x6885,	// (0x0006ca4d) main_cale_note_pane

0xbc08,	// (0x00071dd0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbc08,	// (0x00071dd0) cell_vitu2_function_top_wide_pane_cp01

0xd2e1,	// (0x000734a9) wait_bar_pane_cp05_ParamLimits

0x6885,	// (0x0006ca4d) listscroll_cmail_pane

0x2824,	// (0x000689ec) list_cmail_pane

0xd7ac,	// (0x00073974) list_cmail_body_pane

0xd7c1,	// (0x00073989) list_single_cmail_header_caption_pane

0xd7db,	// (0x000739a3) list_single_cmail_header_detail_pane_ParamLimits

0xd7db,	// (0x000739a3) list_single_cmail_header_detail_pane

0xd80a,	// (0x000739d2) list_single_cmail_header_caption_pane_t1

0x64e0,	// (0x0006c6a8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x64e0,	// (0x0006c6a8) list_single_cmail_header_detail_pane_g1

0xd81a,	// (0x000739e2) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd81a,	// (0x000739e2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x00075f6f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x00075f6f) list_single_cmail_header_detail_pane_g

0x64f8,	// (0x0006c6c0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x64f8,	// (0x0006c6c0) list_single_cmail_header_detail_pane_t1

0x655c,	// (0x0006c724) list_single_cmail_header_editor_pane_bg_ParamLimits

0x655c,	// (0x0006c724) list_single_cmail_header_editor_pane_bg

0x4480,	// (0x0006a648) list_cmail_body_pane_g1

0x28ad,	// (0x00068a75) list_cmail_body_pane_t1

0x3835,	// (0x000699fd) list_single_cmail_header_editor_pane_bg_g1

0xecf2,	// (0x00074eba) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3845,	// (0x00069a0d) list_single_cmail_header_editor_pane_bg_g1_copy2

0x383d,	// (0x00069a05) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3a88,	// (0x00069c50) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3865,	// (0x00069a2d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3855,	// (0x00069a1d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x385d,	// (0x00069a25) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xecd2,	// (0x00074e9a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd826,	// (0x000739ee) calenote_gesture_pane_ParamLimits

0xd826,	// (0x000739ee) calenote_gesture_pane

0xd840,	// (0x00073a08) calenote_window_pane_ParamLimits

0xd840,	// (0x00073a08) calenote_window_pane

0x28bb,	// (0x00068a83) popup_note_window_cp01

0xd858,	// (0x00073a20) calenote_swipe_1_pane_ParamLimits

0xd858,	// (0x00073a20) calenote_swipe_1_pane

0xd64c,	// (0x00073814) calenote_swipe_2_pane_ParamLimits

0xd64c,	// (0x00073814) calenote_swipe_2_pane

0x47de,	// (0x0006a9a6) calenote_swipe_1_pane_g1_ParamLimits

0x47de,	// (0x0006a9a6) calenote_swipe_1_pane_g1

0x47eb,	// (0x0006a9b3) calenote_swipe_1_pane_g2_ParamLimits

0x47eb,	// (0x0006a9b3) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00075e9e) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00075e9e) calenote_swipe_1_pane_g

0x28cd,	// (0x00068a95) calenote_swipe_1_pane_t1_ParamLimits

0x28cd,	// (0x00068a95) calenote_swipe_1_pane_t1

0x47de,	// (0x0006a9a6) calenote_swipe_2_pane_g1_ParamLimits

0x47de,	// (0x0006a9a6) calenote_swipe_2_pane_g1

0x28ec,	// (0x00068ab4) calenote_swipe_2_pane_g2_ParamLimits

0x28ec,	// (0x00068ab4) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x00075f7b) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x00075f7b) calenote_swipe_2_pane_g

0x28f8,	// (0x00068ac0) calenote_swipe_2_pane_t1_ParamLimits

0x28f8,	// (0x00068ac0) calenote_swipe_2_pane_t1

0x6885,	// (0x0006ca4d) main_mup_navstr_pane

0xa9e2,	// (0x00070baa) main_mup3_pane_t7_ParamLimits

0xa9e2,	// (0x00070baa) main_mup3_pane_t7

0xb3b5,	// (0x0007157d) main_mp4_pane_g6_ParamLimits

0xb3b5,	// (0x0007157d) main_mp4_pane_g6

0xb717,	// (0x000718df) main_image3_pane_t4_ParamLimits

0xb717,	// (0x000718df) main_image3_pane_t4

0xd86b,	// (0x00073a33) popup_navstr_preview_pane_ParamLimits

0xd86b,	// (0x00073a33) popup_navstr_preview_pane

0xd877,	// (0x00073a3f) scroll_navstr_pane_ParamLimits

0xd877,	// (0x00073a3f) scroll_navstr_pane

0x6885,	// (0x0006ca4d) bg_popup_preview_window_pane_cp04

0x291f,	// (0x00068ae7) popup_navstr_preview_pane_t1

0xd883,	// (0x00073a4b) scroll_navstr_pane_g1_ParamLimits

0xd883,	// (0x00073a4b) scroll_navstr_pane_g1

0xd890,	// (0x00073a58) scroll_navstr_pane_t1_ParamLimits

0xd890,	// (0x00073a58) scroll_navstr_pane_t1

0x28c4,	// (0x00068a8c) bg_button_pane_cp014

0x28c4,	// (0x00068a8c) bg_button_pane_cp030

0x5f0c,	// (0x0006c0d4) list_double_fisheye_pane_g4_ParamLimits

0x5f0c,	// (0x0006c0d4) list_double_fisheye_pane_g4

0x5f18,	// (0x0006c0e0) list_double_fisheye_pane_g5_ParamLimits

0x5f18,	// (0x0006c0e0) list_double_fisheye_pane_g5

0x282c,	// (0x000689f4) sp_fs_scroll_pane_cp03

0x48d3,	// (0x0006aa9b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x48df,	// (0x0006aaa7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00075ebb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x48eb,	// (0x0006aab3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd7a2,	// (0x0007396a) sp_fs_scroll_pane_cp02

0xe9fe,	// (0x00074bc6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe9fe,	// (0x00074bc6) popup_sp_fs_calendar_preview_list_single_pane

0x6885,	// (0x0006ca4d) main_cam6_pano_pane

0x99cb,	// (0x0006fb93) main_mup3_pane_ParamLimits

0x6885,	// (0x0006ca4d) main_phacti_pane

0xd1b2,	// (0x0007337a) bg_button_pane_cp11

0xd1ca,	// (0x00073392) main_mobtv_info_pane_g2_ParamLimits

0xd1ca,	// (0x00073392) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00075e1b) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00075e1b) main_mobtv_info_pane_g

0xd37e,	// (0x00073546) sc_clock_pane_t5_ParamLimits

0xd37e,	// (0x00073546) sc_clock_pane_t5

0xd423,	// (0x000735eb) main_radioblah_pane_g1_ParamLimits

0x4710,	// (0x0006a8d8) main_radioblah_pane_t3_ParamLimits

0x4710,	// (0x0006a8d8) main_radioblah_pane_t3

0x4728,	// (0x0006a8f0) main_radioblah_pane_t4_ParamLimits

0x4728,	// (0x0006a8f0) main_radioblah_pane_t4

0xd441,	// (0x00073609) main_radioblah_text_pane_ParamLimits

0xd441,	// (0x00073609) main_radioblah_text_pane

0xd44e,	// (0x00073616) main_radioblah_info_pane_g1_ParamLimits

0xd4e7,	// (0x000736af) main_radioblah_info_pane_t4_ParamLimits

0xd4e7,	// (0x000736af) main_radioblah_info_pane_t4

0x99cb,	// (0x0006fb93) main_sp_fs_calendar_pane

0xd8a2,	// (0x00073a6a) main_phacti_pane_g1

0xd8aa,	// (0x00073a72) phacti_note_pane_ParamLimits

0xd8aa,	// (0x00073a72) phacti_note_pane

0x2936,	// (0x00068afe) phacti_term_pane_ParamLimits

0x2936,	// (0x00068afe) phacti_term_pane

0x294b,	// (0x00068b13) phacti_note_pane_t1_ParamLimits

0x294b,	// (0x00068b13) phacti_note_pane_t1

0x656e,	// (0x0006c736) phacti_term_pane_g1

0x6576,	// (0x0006c73e) phacti_term_pane_t1_ParamLimits

0x6576,	// (0x0006c73e) phacti_term_pane_t1

0x2994,	// (0x00068b5c) popup_sp_fs_calendar_preview_list_single_pane_g1

0x299c,	// (0x00068b64) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x00075f85) popup_sp_fs_calendar_preview_list_single_pane_g

0x29a4,	// (0x00068b6c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x29a4,	// (0x00068b6c) popup_sp_fs_calendar_preview_list_single_pane_t1

0x29ba,	// (0x00068b82) aid_popup_sp_fs_bg_corner_pane

0x1c4b,	// (0x00067e13) popup_sp_fs_calendar_preview_bg_pane_g1

0x6885,	// (0x0006ca4d) popup_sp_fs_calendar_preview_bg_pane

0x29c2,	// (0x00068b8a) popup_sp_fs_calendar_preview_list_pane

0x99cb,	// (0x0006fb93) bg_main_sp_fs_cale_pane_ParamLimits

0x99cb,	// (0x0006fb93) bg_main_sp_fs_cale_pane

0x65a0,	// (0x0006c768) listscroll_cale_mrui_pane_ParamLimits

0x65a0,	// (0x0006c768) listscroll_cale_mrui_pane

0x65b4,	// (0x0006c77c) listscroll_sp_fs_schedule_track_pane

0x65bd,	// (0x0006c785) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x65bd,	// (0x0006c785) main_sp_fs_ctrlbar_pane_cp01

0x29f8,	// (0x00068bc0) main_sp_fs_ribbon_pane

0x2a00,	// (0x00068bc8) popup_sp_fs_cale_preview_window

0xd8e9,	// (0x00073ab1) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd8e9,	// (0x00073ab1) list_single_sp_fs_schedule_track_pane

0x6b35,	// (0x0006ccfd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x6b35,	// (0x0006ccfd) bg_sp_fs_highlight_list_pane_cp03

0xd8fb,	// (0x00073ac3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd8fb,	// (0x00073ac3) list_single_sp_fs_schedule_track_pane_g1

0xd907,	// (0x00073acf) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd907,	// (0x00073acf) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x00075f8a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x00075f8a) list_single_sp_fs_schedule_track_pane_g

0xd913,	// (0x00073adb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd913,	// (0x00073adb) list_single_sp_fs_schedule_track_pane_t1

0xd931,	// (0x00073af9) sp_fs_schedule_track_pane_ParamLimits

0xd931,	// (0x00073af9) sp_fs_schedule_track_pane

0x2a12,	// (0x00068bda) sp_fs_schedule_track_pane_g1

0x2a1a,	// (0x00068be2) sp_fs_schedule_track_pane_g2

0x2a22,	// (0x00068bea) sp_fs_schedule_track_pane_g3

0x2a2a,	// (0x00068bf2) sp_fs_schedule_track_pane_g4

0x2a32,	// (0x00068bfa) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x00075f8f) sp_fs_schedule_track_pane_g

0x3835,	// (0x000699fd) bg_sp_fs_schedule_viewer_highlight_g1

0xecf2,	// (0x00074eba) bg_sp_fs_schedule_viewer_highlight_g2

0x383d,	// (0x00069a05) bg_sp_fs_schedule_viewer_highlight_g3

0x3845,	// (0x00069a0d) bg_sp_fs_schedule_viewer_highlight_g4

0x3a88,	// (0x00069c50) bg_sp_fs_schedule_viewer_highlight_g5

0x3855,	// (0x00069a1d) bg_sp_fs_schedule_viewer_highlight_g6

0x385d,	// (0x00069a25) bg_sp_fs_schedule_viewer_highlight_g7

0x3865,	// (0x00069a2d) bg_sp_fs_schedule_viewer_highlight_g8

0xecd2,	// (0x00074e9a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x00075f9a) bg_sp_fs_schedule_viewer_highlight_g

0x6885,	// (0x0006ca4d) bg_main_sp_fs_ribbon_pane

0xd943,	// (0x00073b0b) main_sp_fs_ribbon_pane_g1

0x2a3a,	// (0x00068c02) main_sp_fs_ribbon_pane_t1

0xd94c,	// (0x00073b14) main_sp_fs_ribbon_pane_t2

0x2a49,	// (0x00068c11) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x00075fad) main_sp_fs_ribbon_pane_t

0x2a58,	// (0x00068c20) main_sp_fs_ribbon_scheduler_pane

0x2a60,	// (0x00068c28) bg_main_sp_fs_ribbon_pane_g1

0x2a69,	// (0x00068c31) bg_main_sp_fs_ribbon_pane_g2

0x2a72,	// (0x00068c3a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x00075fb4) bg_main_sp_fs_ribbon_pane_g

0x2a7a,	// (0x00068c42) main_sp_fs_ribbon_scheduler_pane_g1

0x2a83,	// (0x00068c4b) main_sp_fs_ribbon_scheduler_pane_g2

0x2a8c,	// (0x00068c54) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x00075fbb) main_sp_fs_ribbon_scheduler_pane_g

0x2a95,	// (0x00068c5d) list_cale_mrui_pane

0xd95b,	// (0x00073b23) sp_fs_scroll_pane_cp07_ParamLimits

0xd95b,	// (0x00073b23) sp_fs_scroll_pane_cp07

0xd971,	// (0x00073b39) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd971,	// (0x00073b39) bg_sp_fs_schedule_viewer_highlight

0x2a9e,	// (0x00068c66) list_single_sp_fs_schedule_track_pane_cp01

0x2aa6,	// (0x00068c6e) list_sp_fs_schedule_track_pane

0x2aae,	// (0x00068c76) sp_fs_scroll_pane_cp06_ParamLimits

0x2aae,	// (0x00068c76) sp_fs_scroll_pane_cp06

0x1c4b,	// (0x00067e13) bgmain_sp_fs_calendar_pane_g1

0x65ce,	// (0x0006c796) list_single_cale_mrui_pane_ParamLimits

0x65ce,	// (0x0006c796) list_single_cale_mrui_pane

0x65f2,	// (0x0006c7ba) list_single_cale_mrui_row_pane_ParamLimits

0x65f2,	// (0x0006c7ba) list_single_cale_mrui_row_pane

0x65ff,	// (0x0006c7c7) list_single_cale_mrui_row_pane_g1_ParamLimits

0x65ff,	// (0x0006c7c7) list_single_cale_mrui_row_pane_g1

0x6637,	// (0x0006c7ff) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6637,	// (0x0006c7ff) list_single_cale_mrui_row_pane_t1

0x6649,	// (0x0006c811) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6649,	// (0x0006c811) list_single_cale_mrui_row_pane_t2

0x66af,	// (0x0006c877) list_single_cale_mrui_row_pane_t3_ParamLimits

0x66af,	// (0x0006c877) list_single_cale_mrui_row_pane_t3

0x66de,	// (0x0006c8a6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x66de,	// (0x0006c8a6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdff,	// (0x00075fc7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdff,	// (0x00075fc7) list_single_cale_mrui_row_pane_t

0x670d,	// (0x0006c8d5) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x670d,	// (0x0006c8d5) list_single_cmail_header_editor_pane_bg_cp01

0x672f,	// (0x0006c8f7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x672f,	// (0x0006c8f7) list_single_cmail_header_editor_pane_bg_cp02

0xd97e,	// (0x00073b46) main_radioblah_text_pane_t1_ParamLimits

0xd97e,	// (0x00073b46) main_radioblah_text_pane_t1

0x2b75,	// (0x00068d3d) cam6_indi_pane_cp01

0x2b7d,	// (0x00068d45) cam6_mode_pane_cp01

0x2b85,	// (0x00068d4d) cam6_pano_pane

0x2b8e,	// (0x00068d56) cam6_zoom_pane_cp01

0x2b98,	// (0x00068d60) cam6_pano_image_pane

0x2ba1,	// (0x00068d69) cam6_pano_pane_g1

0x4480,	// (0x0006a648) cam6_pano_pane_g2

0x2baa,	// (0x00068d72) cam6_pano_pane_g3

0x2bb3,	// (0x00068d7b) cam6_pano_pane_g4

0x21cf,	// (0x00068397) cam6_pano_pane_g5

0x2bbc,	// (0x00068d84) cam6_pano_pane_g6

0x2bc4,	// (0x00068d8c) cam6_pano_pane_g7

0x2bcc,	// (0x00068d94) cam6_pano_pane_g8

0x2bd5,	// (0x00068d9d) cam6_pano_pane_g9

0x0008,

0xfe08,	// (0x00075fd0) cam6_pano_pane_g

0x6885,	// (0x0006ca4d) main_browser_tag_pane

0x2917,	// (0x00068adf) grid_navstr_albumart_pane

0x2be0,	// (0x00068da8) cell_navstr_albumart_pane_ParamLimits

0x2be0,	// (0x00068da8) cell_navstr_albumart_pane

0x2bfc,	// (0x00068dc4) cell_navstr_albumart_pane_g1

0x152f,	// (0x000676f7) cell_navstr_albumart_pane_g2

0x153f,	// (0x00067707) cell_navstr_albumart_pane_g3

0x1537,	// (0x000676ff) cell_navstr_albumart_pane_g4

0x0003,

0xfe1b,	// (0x00075fe3) cell_navstr_albumart_pane_g

0xd999,	// (0x00073b61) bt_list_pane_ParamLimits

0xd999,	// (0x00073b61) bt_list_pane

0xd9b2,	// (0x00073b7a) bt_list_pane_t1

0xd9c1,	// (0x00073b89) bt_list_pane_t2

0x0001,

0xfe24,	// (0x00075fec) bt_list_pane_t

0x6885,	// (0x0006ca4d) main_cale_prevew_pane

0xd9d0,	// (0x00073b98) popup_cale_preview_window_ParamLimits

0xd9d0,	// (0x00073b98) popup_cale_preview_window

0x99cb,	// (0x0006fb93) bg_popup_preview_window_pane_cp05_ParamLimits

0x99cb,	// (0x0006fb93) bg_popup_preview_window_pane_cp05

0x2c04,	// (0x00068dcc) list_cale_preview_pane_ParamLimits

0x2c04,	// (0x00068dcc) list_cale_preview_pane

0xd9eb,	// (0x00073bb3) list_double_cale_preview_pane_ParamLimits

0xd9eb,	// (0x00073bb3) list_double_cale_preview_pane

0xd9ff,	// (0x00073bc7) list_single_cale_preview_pane_ParamLimits

0xd9ff,	// (0x00073bc7) list_single_cale_preview_pane

0xda17,	// (0x00073bdf) list_single_cale_preview_pane_g1

0xda1f,	// (0x00073be7) list_single_cale_preview_pane_t1_ParamLimits

0xda1f,	// (0x00073be7) list_single_cale_preview_pane_t1

0xda34,	// (0x00073bfc) list_double_cale_preview_pane_g1

0xda3c,	// (0x00073c04) list_double_cale_preview_pane_t1_ParamLimits

0xda3c,	// (0x00073c04) list_double_cale_preview_pane_t1

0xda51,	// (0x00073c19) list_double_cale_preview_pane_t2_ParamLimits

0xda51,	// (0x00073c19) list_double_cale_preview_pane_t2

0x0001,

0xfe29,	// (0x00075ff1) list_double_cale_preview_pane_t_ParamLimits

0xfe29,	// (0x00075ff1) list_double_cale_preview_pane_t

0x6885,	// (0x0006ca4d) main_ezdial_pane

0x99cb,	// (0x0006fb93) main_sp_fs_email_pane_ParamLimits

0xd666,	// (0x0007382e) cmail_ddmenu_btn01_pane_ParamLimits

0xd666,	// (0x0007382e) cmail_ddmenu_btn01_pane

0xd683,	// (0x0007384b) cmail_ddmenu_btn02_pane_ParamLimits

0xd683,	// (0x0007384b) cmail_ddmenu_btn02_pane

0xd6a1,	// (0x00073869) cmail_ddmenu_btn03_pane_ParamLimits

0xd6a1,	// (0x00073869) cmail_ddmenu_btn03_pane

0x5fd2,	// (0x0006c19a) main_sp_fs_ctrlbar_pane_ParamLimits

0x5fee,	// (0x0006c1b6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd7ac,	// (0x00073974) list_cmail_body_pane_ParamLimits

0x283b,	// (0x00068a03) bg_button_pane_cp12

0x2850,	// (0x00068a18) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2850,	// (0x00068a18) list_single_cmail_header_detail_pane_g3

0x6536,	// (0x0006c6fe) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6536,	// (0x0006c6fe) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x00075f76) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x00075f76) list_single_cmail_header_detail_pane_t

0x658b,	// (0x0006c753) phacti_term_pane_t2_ParamLimits

0x658b,	// (0x0006c753) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x00075f80) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x00075f80) phacti_term_pane_t

0x2c10,	// (0x00068dd8) aid_size_list_single_double

0xda69,	// (0x00073c31) popup_ezdial_listscroll_window

0xda89,	// (0x00073c51) popup_number_entry_window_cp01

0x02a9,	// (0x00066471) bg_popup_call_pane_cp09

0x2c1c,	// (0x00068de4) ezdial_list_pane

0x2c24,	// (0x00068dec) scroll_pane_cp23

0x1a2a,	// (0x00067bf2) bg_button_pane_cp028_ParamLimits

0x1a2a,	// (0x00067bf2) bg_button_pane_cp028

0xda97,	// (0x00073c5f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xda97,	// (0x00073c5f) cmail_ddmenu_btn01_pane_g1

0xdaa7,	// (0x00073c6f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdaa7,	// (0x00073c6f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2e,	// (0x00075ff6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2e,	// (0x00075ff6) cmail_ddmenu_btn01_pane_g

0x2c2c,	// (0x00068df4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2c2c,	// (0x00068df4) cmail_ddmenu_btn01_pane_t1

0x1716,	// (0x000678de) bg_button_pane_cp029_ParamLimits

0x1716,	// (0x000678de) bg_button_pane_cp029

0xdaa7,	// (0x00073c6f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdaa7,	// (0x00073c6f) cmail_ddmenu_btn02_pane_g1

0xdabf,	// (0x00073c87) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdabf,	// (0x00073c87) cmail_ddmenu_btn02_pane_t1

0x6b35,	// (0x0006ccfd) bg_button_pane_cp031_ParamLimits

0x6b35,	// (0x0006ccfd) bg_button_pane_cp031

0xdaa7,	// (0x00073c6f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdaa7,	// (0x00073c6f) cmail_ddmenu_btn03_pane_g1

0xdabf,	// (0x00073c87) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdabf,	// (0x00073c87) cmail_ddmenu_btn03_pane_t1

0xb5c0,	// (0x00071788) cell_dialer2_keypad_pane_t1_ParamLimits

0xb5da,	// (0x000717a2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb5da,	// (0x000717a2) cell_dialer2_keypad_pane_t1_copy1

0xd042,	// (0x0007320a) ncimui_group_button_pane

0x99cb,	// (0x0006fb93) main_sp_fs_calendar_pane_ParamLimits

0xd7c1,	// (0x00073989) list_single_cmail_header_caption_pane_ParamLimits

0xe3c2,	// (0x0007458a) aid_recal_txt_sm_pane

0x6885,	// (0x0006ca4d) mian_recal_day_pane

0x2a00,	// (0x00068bc8) popup_sp_fs_cale_preview_window_ParamLimits

0x6885,	// (0x0006ca4d) list_recal_day_pane

0x2c5a,	// (0x00068e22) list_single_recal_day_pane_ParamLimits

0x2c5a,	// (0x00068e22) list_single_recal_day_pane

0x2c6c,	// (0x00068e34) list_single_recal_day_pane_g1_ParamLimits

0x2c6c,	// (0x00068e34) list_single_recal_day_pane_g1

0x2c78,	// (0x00068e40) list_single_recal_day_pane_g2_ParamLimits

0x2c78,	// (0x00068e40) list_single_recal_day_pane_g2

0x2c84,	// (0x00068e4c) list_single_recal_day_pane_g3_ParamLimits

0x2c84,	// (0x00068e4c) list_single_recal_day_pane_g3

0xdae3,	// (0x00073cab) list_single_recal_day_pane_g4_ParamLimits

0xdae3,	// (0x00073cab) list_single_recal_day_pane_g4

0x2c90,	// (0x00068e58) list_single_recal_day_pane_g5_ParamLimits

0x2c90,	// (0x00068e58) list_single_recal_day_pane_g5

0x2c9c,	// (0x00068e64) list_single_recal_day_pane_g6_ParamLimits

0x2c9c,	// (0x00068e64) list_single_recal_day_pane_g6

0x0005,

0xfe3d,	// (0x00076005) list_single_recal_day_pane_g_ParamLimits

0xfe3d,	// (0x00076005) list_single_recal_day_pane_g

0x2ca8,	// (0x00068e70) list_single_recal_day_pane_t1

0x2cb6,	// (0x00068e7e) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x00076012) list_single_recal_day_pane_t

0xdaf1,	// (0x00073cb9) ncimui_query_button_pane_ParamLimits

0xdaf1,	// (0x00073cb9) ncimui_query_button_pane

0xdb01,	// (0x00073cc9) ncimui_query_button_pane_t1_ParamLimits

0xdb01,	// (0x00073cc9) ncimui_query_button_pane_t1

0x2cc4,	// (0x00068e8c) ncimui_query_button_pane_t2_ParamLimits

0x2cc4,	// (0x00068e8c) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x00076017) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x00076017) ncimui_query_button_pane_t

0xdb14,	// (0x00073cdc) query_button_pane_ParamLimits

0xdb14,	// (0x00073cdc) query_button_pane

0x6885,	// (0x0006ca4d) bg_button_pane_cp0028

0x2cd7,	// (0x00068e9f) query_button_pane_t1

0x99e7,	// (0x0006fbaf) main_tport_pane_ParamLimits

0xd6cf,	// (0x00073897) bg_popup_window_pane_cp01_ParamLimits

0xd6cf,	// (0x00073897) bg_popup_window_pane_cp01

0xd6dc,	// (0x000738a4) heading_pane_cp08_ParamLimits

0xd6dc,	// (0x000738a4) heading_pane_cp08

0xd6ea,	// (0x000738b2) heading_pane_cp07_ParamLimits

0xd6ea,	// (0x000738b2) heading_pane_cp07

0x2806,	// (0x000689ce) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x00075f63) cell_tport_appsw_pane_g

0x595b,	// (0x0006bb23) input_candi_list_open_g1

0xee8d,	// (0x00075055) list_cale_time_pane_g6_ParamLimits

0xee8d,	// (0x00075055) list_cale_time_pane_g6

0xa454,	// (0x0007061c) aid_size_touch_calib_1_ParamLimits

0xa454,	// (0x0007061c) aid_size_touch_calib_1

0xa460,	// (0x00070628) aid_size_touch_calib_2_ParamLimits

0xa460,	// (0x00070628) aid_size_touch_calib_2

0xa46e,	// (0x00070636) aid_size_touch_calib_3_ParamLimits

0xa46e,	// (0x00070636) aid_size_touch_calib_3

0xa47e,	// (0x00070646) aid_size_touch_calib_4_ParamLimits

0xa47e,	// (0x00070646) aid_size_touch_calib_4

0xa48c,	// (0x00070654) main_touch_calib_button_group_pane_ParamLimits

0xa48c,	// (0x00070654) main_touch_calib_button_group_pane

0xa49a,	// (0x00070662) main_touch_calib_pane_g1_ParamLimits

0xa4a6,	// (0x0007066e) main_touch_calib_pane_g2_ParamLimits

0xa4b2,	// (0x0007067a) main_touch_calib_pane_g3_ParamLimits

0xa4be,	// (0x00070686) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0007593d) main_touch_calib_pane_g_ParamLimits

0xa4ca,	// (0x00070692) main_touch_calib_pane_t1_ParamLimits

0xa4e1,	// (0x000706a9) main_touch_calib_pane_t2_ParamLimits

0xa4f8,	// (0x000706c0) main_touch_calib_pane_t3_ParamLimits

0xa50c,	// (0x000706d4) main_touch_calib_pane_t4_ParamLimits

0xa522,	// (0x000706ea) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00075946) main_touch_calib_pane_t_ParamLimits

0x1f99,	// (0x00068161) list_single_fp_cale_pane_g3_ParamLimits

0x1f99,	// (0x00068161) list_single_fp_cale_pane_g3

0x99cb,	// (0x0006fb93) bg_button_pane_cp012_ParamLimits

0x99cb,	// (0x0006fb93) bg_vkb2_func_pane_cp03_ParamLimits

0xc373,	// (0x0007253b) cell_vitu2_function_top_pane_g1_ParamLimits

0x99cb,	// (0x0006fb93) bg_vkb2_func_pane_cp04_ParamLimits

0xcfde,	// (0x000731a6) main_ncimui_button_group_pane_ParamLimits

0xcfde,	// (0x000731a6) main_ncimui_button_group_pane

0xd030,	// (0x000731f8) main_ncimui_pane_t3_ParamLimits

0xd030,	// (0x000731f8) main_ncimui_pane_t3

0x292d,	// (0x00068af5) phacti_button_group_pane

0x2c10,	// (0x00068dd8) aid_size_list_single_double_ParamLimits

0xda69,	// (0x00073c31) popup_ezdial_listscroll_window_ParamLimits

0xda89,	// (0x00073c51) popup_number_entry_window_cp01_ParamLimits

0xdb21,	// (0x00073ce9) phacti_button_pane_ParamLimits

0xdb21,	// (0x00073ce9) phacti_button_pane

0x6885,	// (0x0006ca4d) bg_button_pane_cp14

0x2ce5,	// (0x00068ead) phacti_button_pane_t1

0xdb32,	// (0x00073cfa) main_touch_calib_button_pane_ParamLimits

0xdb32,	// (0x00073cfa) main_touch_calib_button_pane

0xe8e8,	// (0x00074ab0) bg_button_pane_cp18_ParamLimits

0xe8e8,	// (0x00074ab0) bg_button_pane_cp18

0x2cf3,	// (0x00068ebb) main_touch_calib_button_pane_t1_ParamLimits

0x2cf3,	// (0x00068ebb) main_touch_calib_button_pane_t1

0x2d09,	// (0x00068ed1) main_touch_calib_button_pane_t2_ParamLimits

0x2d09,	// (0x00068ed1) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x0007601c) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x0007601c) main_touch_calib_button_pane_t

0x6885,	// (0x0006ca4d) cell_ncimui_button_pane

0x6885,	// (0x0006ca4d) bg_button_pane_cp032

0x2d27,	// (0x00068eef) cell_ncimui_button_pane_t1

0xb636,	// (0x000717fe) image3_infobar_pane_ParamLimits

0xb636,	// (0x000717fe) image3_infobar_pane

0xd3a0,	// (0x00073568) fs_bigclock_status_pane_ParamLimits

0xd3a0,	// (0x00073568) fs_bigclock_status_pane

0xd3ad,	// (0x00073575) main_fs_bigclock_clock_pane_ParamLimits

0xd3ad,	// (0x00073575) main_fs_bigclock_clock_pane

0xd3bd,	// (0x00073585) main_fs_bigclock_indi_pane_ParamLimits

0xd3bd,	// (0x00073585) main_fs_bigclock_indi_pane

0xd3ef,	// (0x000735b7) main_fs_bigclock_swipe_pane_ParamLimits

0xd3ef,	// (0x000735b7) main_fs_bigclock_swipe_pane

0x6885,	// (0x0006ca4d) main_fs_clock_dumped_data

0x458d,	// (0x0006a755) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x458d,	// (0x0006a755) list_single_fs_bigclock_indicator_pane_g1

0x45ad,	// (0x0006a775) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x45ad,	// (0x0006a775) list_single_fs_bigclock_indicator_pane_g2

0x45c7,	// (0x0006a78f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x45c7,	// (0x0006a78f) list_single_fs_bigclock_indicator_pane_g3

0x45e3,	// (0x0006a7ab) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x45e3,	// (0x0006a7ab) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00075e4f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00075e4f) list_single_fs_bigclock_indicator_pane_g

0x4609,	// (0x0006a7d1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4609,	// (0x0006a7d1) list_single_fs_bigclock_indicator_pane_t1

0x4631,	// (0x0006a7f9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4631,	// (0x0006a7f9) list_single_fs_bigclock_indicator_pane_t2

0x4659,	// (0x0006a821) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4659,	// (0x0006a821) list_single_fs_bigclock_indicator_pane_t3

0x4683,	// (0x0006a84b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4683,	// (0x0006a84b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x00075e5a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x00075e5a) list_single_fs_bigclock_indicator_pane_t

0x2d35,	// (0x00068efd) image3_infobar_fav_pane_ParamLimits

0x2d35,	// (0x00068efd) image3_infobar_fav_pane

0x2d45,	// (0x00068f0d) image3_infobar_loc_pane_ParamLimits

0x2d45,	// (0x00068f0d) image3_infobar_loc_pane

0x2d5b,	// (0x00068f23) image3_infobar_time_pane_ParamLimits

0x2d5b,	// (0x00068f23) image3_infobar_time_pane

0x1c4b,	// (0x00067e13) image3_infobar_time_pane_g1

0x2d6b,	// (0x00068f33) image3_infobar_time_pane_t1

0x1c4b,	// (0x00067e13) image3_infobar_loc_pane_g1

0x2d79,	// (0x00068f41) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x00076021) image3_infobar_loc_pane_g

0x2d81,	// (0x00068f49) image3_infobar_loc_pane_t1

0x1c4b,	// (0x00067e13) image3_infobar_fav_pane_g1

0x2d8f,	// (0x00068f57) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x00076026) image3_infobar_fav_pane_g

0x2d97,	// (0x00068f5f) fs_bigclock_status_battery_pane

0x2da0,	// (0x00068f68) fs_bigclock_status_signal_pane

0x2da9,	// (0x00068f71) fs_bigclock_status_title_pane

0x2db2,	// (0x00068f7a) fs_bigclock_status_signal_pane_g1

0x2dbb,	// (0x00068f83) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x0007602b) fs_bigclock_status_signal_pane_g

0x2dc3,	// (0x00068f8b) fs_bigclock_status_battery_pane_g1

0x2dcc,	// (0x00068f94) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x00076030) fs_bigclock_status_battery_pane_g

0x2dd4,	// (0x00068f9c) fs_bigclock_status_title_pane_t1

0x1c4b,	// (0x00067e13) main_fs_bigclock_clock_pane_g1

0x2de2,	// (0x00068faa) main_fs_bigclock_clock_pane_g2

0x2de2,	// (0x00068faa) main_fs_bigclock_clock_pane_g3

0x2de2,	// (0x00068faa) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x00076035) main_fs_bigclock_clock_pane_g

0x2dee,	// (0x00068fb6) main_fs_bigclock_clock_pane_t1

0x2dfc,	// (0x00068fc4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x0007603e) main_fs_bigclock_clock_pane_t

0x2e0b,	// (0x00068fd3) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2e0b,	// (0x00068fd3) list_single_fs_bigclock_indicator_pane

0xdb44,	// (0x00073d0c) list_single_fs_bigclock_pane_ParamLimits

0xdb44,	// (0x00073d0c) list_single_fs_bigclock_pane

0x2e25,	// (0x00068fed) main_fs_bigclock_indicator_pane_t1

0x2e34,	// (0x00068ffc) list_single_fs_bigclock_pane_g1

0x2e3c,	// (0x00069004) list_single_fs_bigclock_pane_t1

0x1c4b,	// (0x00067e13) main_fs_bigclock_swipe_pane_g1

0x2e7a,	// (0x00069042) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x0007604f) main_fs_bigclock_swipe_pane_g

0x2e82,	// (0x0006904a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2e82,	// (0x0006904a) main_fs_bigclock_swipe_pane_t1

0x8939,	// (0x0006eb01) call_type_pane_ParamLimits

0x6885,	// (0x0006ca4d) main_btmg_pane

0x662b,	// (0x0006c7f3) list_single_cale_mrui_row_pane_g2_ParamLimits

0x662b,	// (0x0006c7f3) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfa,	// (0x00075fc2) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x00075fc2) list_single_cale_mrui_row_pane_g

0x2c4a,	// (0x00068e12) list_recal_vselct_arw_lo_pane

0x2c52,	// (0x00068e1a) list_recal_vselct_arw_up_pane

0xe3b9,	// (0x00074581) list_recal_vselct_pane

0x2e9f,	// (0x00069067) btmg_button_pane

0xdba7,	// (0x00073d6f) main_btmg_pane_g1

0x6885,	// (0x0006ca4d) bg_button_pane_cp044

0x2ea9,	// (0x00069071) btmg_button_pane_t1

0x170e,	// (0x000678d6) aid_listscroll_gen

0x99cb,	// (0x0006fb93) main_cntbar_detail_pane

0x281c,	// (0x000689e4) list_cmail_folder_pane

0x282c,	// (0x000689f4) sp_fs_scroll_pane_cp03_ParamLimits

0xdbaf,	// (0x00073d77) list_single_fs_dyc_pane_cp01_ParamLimits

0xdbaf,	// (0x00073d77) list_single_fs_dyc_pane_cp01

0x2eb7,	// (0x0006907f) aid_size_cmail_indent

0x674b,	// (0x0006c913) list_single_dyc_row_pane_cp01

0xdbe6,	// (0x00073dae) cntbar_detail_list_pane_ParamLimits

0xdbe6,	// (0x00073dae) cntbar_detail_list_pane

0xdc26,	// (0x00073dee) main_cntbar_detail_cont_pane_ParamLimits

0xdc26,	// (0x00073dee) main_cntbar_detail_cont_pane

0x892d,	// (0x0006eaf5) scroll_pane_cp032_ParamLimits

0x892d,	// (0x0006eaf5) scroll_pane_cp032

0xdc32,	// (0x00073dfa) cntbar_detail_list_event_pane_ParamLimits

0xdc32,	// (0x00073dfa) cntbar_detail_list_event_pane

0xdbf4,	// (0x00073dbc) cntbar_detail_list_shct_pane

0xed40,	// (0x00074f08) aid_list_gen

0x2ec9,	// (0x00069091) aid_scroll

0x2ed2,	// (0x0006909a) aid_size_touch_scroll_bar

0x2edb,	// (0x000690a3) aid_list_double

0x2ee4,	// (0x000690ac) aid_list_single

0xdc42,	// (0x00073e0a) aid_list_single_lg

0x6754,	// (0x0006c91c) aid_list_z_g_a_sm

0xdc4b,	// (0x00073e13) aid_list_z_g_d

0x675c,	// (0x0006c924) aid_txt_z_prm

0x676a,	// (0x0006c932) aid_txt_z_prm_cp01

0x6778,	// (0x0006c940) aid_txt_z_sec

0xdc53,	// (0x00073e1b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdc53,	// (0x00073e1b) main_cntbar_detail_cont_pane_g1

0xdc60,	// (0x00073e28) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdc60,	// (0x00073e28) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x00076054) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x00076054) main_cntbar_detail_cont_pane_g

0x2f0b,	// (0x000690d3) main_cntbar_detail_cont_pane_t1

0x2f19,	// (0x000690e1) main_cntbar_detail_cont_pane_t2

0x2f27,	// (0x000690ef) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x00076059) main_cntbar_detail_cont_pane_t

0xdc6c,	// (0x00073e34) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdc6c,	// (0x00073e34) cell_cntbar_detail_list_shct_pane

0x2f35,	// (0x000690fd) cntbar_detail_list_shct_pane_g1

0x2f3e,	// (0x00069106) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x00076060) cntbar_detail_list_shct_pane_g

0xdc80,	// (0x00073e48) cntbar_detail_list_event_pane_g1_ParamLimits

0xdc80,	// (0x00073e48) cntbar_detail_list_event_pane_g1

0xdc8c,	// (0x00073e54) cntbar_detail_list_event_pane_g2_ParamLimits

0xdc8c,	// (0x00073e54) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x00076065) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x00076065) cntbar_detail_list_event_pane_g

0xdcfa,	// (0x00073ec2) cntbar_detail_list_event_pane_t1_ParamLimits

0xdcfa,	// (0x00073ec2) cntbar_detail_list_event_pane_t1

0xdd0f,	// (0x00073ed7) cntbar_detail_list_event_pane_t2_ParamLimits

0xdd0f,	// (0x00073ed7) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x00076072) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x00076072) cntbar_detail_list_event_pane_t

0x1c4b,	// (0x00067e13) cell_cntbar_detail_list_shct_pane_g1

0x8cd1,	// (0x0006ee99) navi_pane_mv_g3

0x99cb,	// (0x0006fb93) main_cntbar_detail_pane_ParamLimits

0x6885,	// (0x0006ca4d) main_notif_wgt_pane

0xb30a,	// (0x000714d2) aid_tch_main_mp4_pane_g4

0xb51f,	// (0x000716e7) popup_slider_window_cp02

0x2c41,	// (0x00068e09) list_recal_day_event_pane

0xdbc6,	// (0x00073d8e) cntbar_detail_btn_pane_ParamLimits

0xdbc6,	// (0x00073d8e) cntbar_detail_btn_pane

0xdbd6,	// (0x00073d9e) cntbar_detail_btn_pane_cp01_ParamLimits

0xdbd6,	// (0x00073d9e) cntbar_detail_btn_pane_cp01

0xdbf4,	// (0x00073dbc) cntbar_detail_list_shct_pane_ParamLimits

0xdc00,	// (0x00073dc8) cntbar_detail_pane_g1_ParamLimits

0xdc00,	// (0x00073dc8) cntbar_detail_pane_g1

0xdc10,	// (0x00073dd8) cntbar_detail_pane_t1_ParamLimits

0xdc10,	// (0x00073dd8) cntbar_detail_pane_t1

0xdc98,	// (0x00073e60) cntbar_detail_list_event_pane_g3_ParamLimits

0xdc98,	// (0x00073e60) cntbar_detail_list_event_pane_g3

0xdcb0,	// (0x00073e78) cntbar_detail_list_event_pane_g4_ParamLimits

0xdcb0,	// (0x00073e78) cntbar_detail_list_event_pane_g4

0xdcc8,	// (0x00073e90) cntbar_detail_list_event_pane_g5_ParamLimits

0xdcc8,	// (0x00073e90) cntbar_detail_list_event_pane_g5

0xdce0,	// (0x00073ea8) cntbar_detail_list_event_pane_g6_ParamLimits

0xdce0,	// (0x00073ea8) cntbar_detail_list_event_pane_g6

0xdd24,	// (0x00073eec) cntbar_detail_list_event_pane_t3_ParamLimits

0xdd24,	// (0x00073eec) cntbar_detail_list_event_pane_t3

0xdd36,	// (0x00073efe) popup_notif_wgt_window_ParamLimits

0xdd36,	// (0x00073efe) popup_notif_wgt_window

0xdd46,	// (0x00073f0e) popup_submenu_window_cp01_ParamLimits

0xdd46,	// (0x00073f0e) popup_submenu_window_cp01

0x02a9,	// (0x00066471) bg_popup_window_pane_cp10

0x2f47,	// (0x0006910f) listscroll_notif_wgt_pane

0x2f51,	// (0x00069119) list_notif_wgt_window

0x2f5a,	// (0x00069122) scroll_pane_cp033

0x2f63,	// (0x0006912b) list_notif_wgt_row_pane_ParamLimits

0x2f63,	// (0x0006912b) list_notif_wgt_row_pane

0x2f77,	// (0x0006913f) aid_size_list_notif_wgt_del

0x2f80,	// (0x00069148) list_notif_wgt_row_pane_g1

0x2f88,	// (0x00069150) list_notif_wgt_row_pane_g2

0x2f90,	// (0x00069158) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x00076079) list_notif_wgt_row_pane_g

0x2f99,	// (0x00069161) list_notif_wgt_row_pane_t1

0x2fa7,	// (0x0006916f) list_notif_wgt_row_pane_t2

0x2fb5,	// (0x0006917d) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x00076080) list_notif_wgt_row_pane_t

0x3aa2,	// (0x00069c6a) list_recal_day_event_pane_g1

0x2fc3,	// (0x0006918b) list_recal_day_event_pane_t1

0x6885,	// (0x0006ca4d) bg_button_pane_cp045

0x2fd2,	// (0x0006919a) cntbar_detail_btn_pane_t1

0x1716,	// (0x000678de) main_callh_pane_ParamLimits

0x1716,	// (0x000678de) main_callh_pane

0x6885,	// (0x0006ca4d) main_coverflow0_pane

0x6885,	// (0x0006ca4d) main_wgtman_pane

0xd407,	// (0x000735cf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd407,	// (0x000735cf) main_fs_bigclock_unlock_btn_pane

0x27fe,	// (0x000689c6) bg_button_pane_cp16

0xd755,	// (0x0007391d) cell_tport_appsw_pane_g3

0xdd54,	// (0x00073f1c) cf0_flow_pane_ParamLimits

0xdd54,	// (0x00073f1c) cf0_flow_pane

0x2fe0,	// (0x000691a8) listscroll_cf0_pane

0x2fe9,	// (0x000691b1) main_cf0_pane_g1

0xdd63,	// (0x00073f2b) main_cf0_pane_t1_ParamLimits

0xdd63,	// (0x00073f2b) main_cf0_pane_t1

0xdd77,	// (0x00073f3f) main_cf0_pane_t2_ParamLimits

0xdd77,	// (0x00073f3f) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x00076087) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x00076087) main_cf0_pane_t

0x2ff3,	// (0x000691bb) scroll_pane_cp11

0xdd8b,	// (0x00073f53) cf0_flow_pane_g1

0xdd93,	// (0x00073f5b) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x0007608c) cf0_flow_pane_g

0xdd9b,	// (0x00073f63) cf0_flow_pane_t1

0x6885,	// (0x0006ca4d) main_call6_pane

0x6885,	// (0x0006ca4d) main_calllock_pane

0xdda9,	// (0x00073f71) call6_btn_grp_pane_ParamLimits

0xdda9,	// (0x00073f71) call6_btn_grp_pane

0xddb8,	// (0x00073f80) call6_pane_g1_ParamLimits

0xddb8,	// (0x00073f80) call6_pane_g1

0xddc8,	// (0x00073f90) popup_call6_1st_window_ParamLimits

0xddc8,	// (0x00073f90) popup_call6_1st_window

0xddd6,	// (0x00073f9e) popup_call6_2nd_window_ParamLimits

0xddd6,	// (0x00073f9e) popup_call6_2nd_window

0xdde4,	// (0x00073fac) cell_call6_btn_pane_ParamLimits

0xdde4,	// (0x00073fac) cell_call6_btn_pane

0x02a9,	// (0x00066471) bg_popup_call2_in_pane_cp03

0x2ffe,	// (0x000691c6) popup_call6_1st_window_g1

0x3006,	// (0x000691ce) popup_call6_1st_window_g2

0x300e,	// (0x000691d6) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x00076091) popup_call6_1st_window_g

0x3016,	// (0x000691de) popup_call6_1st_window_t1

0x3025,	// (0x000691ed) popup_call6_1st_window_t2

0x3035,	// (0x000691fd) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x00076098) popup_call6_1st_window_t

0x02a9,	// (0x00066471) bg_popup_call2_in_pane_cp04

0x2ffe,	// (0x000691c6) popup_call6_2nd_window_g1

0x3006,	// (0x000691ce) popup_call6_2nd_window_g2

0x300e,	// (0x000691d6) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x00076091) popup_call6_2nd_window_g

0x3016,	// (0x000691de) popup_call6_2nd_window_t1

0x6885,	// (0x0006ca4d) bg_button_pane_cp15

0x3045,	// (0x0006920d) cell_call6_btn_pane_g1

0x304e,	// (0x00069216) cell_call6_btn_pane_t1

0xddf3,	// (0x00073fbb) listscroll_wgtman_pane_ParamLimits

0xddf3,	// (0x00073fbb) listscroll_wgtman_pane

0xde11,	// (0x00073fd9) wgtman_btn_pane_ParamLimits

0xde11,	// (0x00073fd9) wgtman_btn_pane

0x016f,	// (0x00066337) aid_scroll_copy1

0x305d,	// (0x00069225) list_wgtman_pane

0xde46,	// (0x0007400e) wgtman_btn_pane_g1_ParamLimits

0xde46,	// (0x0007400e) wgtman_btn_pane_g1

0xde6e,	// (0x00074036) wgtman_btn_pane_t1_ParamLimits

0xde6e,	// (0x00074036) wgtman_btn_pane_t1

0x3067,	// (0x0006922f) wgtman_btn_pane_t2_ParamLimits

0x3067,	// (0x0006922f) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x0007609f) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x0007609f) wgtman_btn_pane_t

0x307e,	// (0x00069246) listrow_wgtman_pane_ParamLimits

0x307e,	// (0x00069246) listrow_wgtman_pane

0x3092,	// (0x0006925a) listrow_wgtman_pane_g1

0xdea5,	// (0x0007406d) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x000760a4) listrow_wgtman_pane_g

0x6786,	// (0x0006c94e) listrow_wgtman_pane_t1

0x6794,	// (0x0006c95c) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x000760a9) listrow_wgtman_pane_t

0x67a2,	// (0x0006c96a) wait_bar_pane_cp09

0x30bf,	// (0x00069287) main_calllock_btn_pane

0x30c9,	// (0x00069291) main_calllock_pane_g1

0x6885,	// (0x0006ca4d) bg_button_pane_cp17

0x30d5,	// (0x0006929d) main_calllock_btn_pane_g1

0x30de,	// (0x000692a6) main_calllock_btn_pane_t1

0x6885,	// (0x0006ca4d) main_dialer3_pane

0x6885,	// (0x0006ca4d) main_fmrd2_pane

0x1c4b,	// (0x00067e13) main_fs_bigclock_unlock_btn_pane_g1

0x30f5,	// (0x000692bd) main_fs_bigclock_unlock_btn_pane_t1

0xdeaf,	// (0x00074077) area_fmrd2_info_pane_ParamLimits

0xdeaf,	// (0x00074077) area_fmrd2_info_pane

0xdebd,	// (0x00074085) area_fmrd2_visual_pane_ParamLimits

0xdebd,	// (0x00074085) area_fmrd2_visual_pane

0xdecb,	// (0x00074093) fmrd2_indi_pane_ParamLimits

0xdecb,	// (0x00074093) fmrd2_indi_pane

0xded8,	// (0x000740a0) area_fmrd2_visual_pane_g1

0xdee0,	// (0x000740a8) area_fmrd2_visual_pane_t1

0xdef0,	// (0x000740b8) area_fmrd2_visual_pane_t2

0xdf00,	// (0x000740c8) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x000760b3) area_fmrd2_visual_pane_t

0xdf10,	// (0x000740d8) area_fmrd2_info_pane_g1

0xdf18,	// (0x000740e0) area_fmrd2_info_pane_t1

0xdf28,	// (0x000740f0) area_fmrd2_info_pane_t2

0xdf38,	// (0x00074100) area_fmrd2_info_pane_t3

0xdf48,	// (0x00074110) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x000760ba) area_fmrd2_info_pane_t

0xdf58,	// (0x00074120) fmrd2_indi_pane_t1

0xdf68,	// (0x00074130) fmrd2_indi_pane_t2

0xdf78,	// (0x00074140) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x000760c3) fmrd2_indi_pane_t

0x45f2,	// (0x0006a7ba) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x45f2,	// (0x0006a7ba) list_single_fs_bigclock_indicator_pane_g5

0x4698,	// (0x0006a860) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4698,	// (0x0006a860) list_single_fs_bigclock_indicator_pane_t5

0xd8c0,	// (0x00073a88) aid_cell_bcale_month_pane_ParamLimits

0xd8c0,	// (0x00073a88) aid_cell_bcale_month_pane

0xd8cc,	// (0x00073a94) bcale_month_pane_ParamLimits

0xd8cc,	// (0x00073a94) bcale_month_pane

0xd8da,	// (0x00073aa2) bcale_preview_pane_ParamLimits

0xd8da,	// (0x00073aa2) bcale_preview_pane

0x2e3c,	// (0x00069004) list_single_fs_bigclock_pane_t1_ParamLimits

0x2e56,	// (0x0006901e) list_single_fs_bigclock_pane_t2_ParamLimits

0x2e56,	// (0x0006901e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x0007604a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0007604a) list_single_fs_bigclock_pane_t

0x30ed,	// (0x000692b5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x000760ae) main_fs_bigclock_unlock_btn_pane_g

0xdf88,	// (0x00074150) aid_dia3_key_size_ParamLimits

0xdf88,	// (0x00074150) aid_dia3_key_size

0xdf94,	// (0x0007415c) aid_dia3_listrow_size_ParamLimits

0xdf94,	// (0x0007415c) aid_dia3_listrow_size

0xdfa2,	// (0x0007416a) dia3_keypad_fun_pane_ParamLimits

0xdfa2,	// (0x0007416a) dia3_keypad_fun_pane

0xdfb2,	// (0x0007417a) dia3_keypad_num_pane_ParamLimits

0xdfb2,	// (0x0007417a) dia3_keypad_num_pane

0xdfc2,	// (0x0007418a) dia3_listscroll_pane_ParamLimits

0xdfc2,	// (0x0007418a) dia3_listscroll_pane

0xdfd2,	// (0x0007419a) dia3_numentry_pane_ParamLimits

0xdfd2,	// (0x0007419a) dia3_numentry_pane

0x3103,	// (0x000692cb) dia3_list_pane

0x310e,	// (0x000692d6) scroll_pane_cp12

0x6885,	// (0x0006ca4d) bg_dia3_numentry_pane

0x3119,	// (0x000692e1) dia3_numentry_pane_t1

0xdfe2,	// (0x000741aa) cell_dia3_key_num_pane

0xdfea,	// (0x000741b2) cell_dia3_key0_fun_pane_ParamLimits

0xdfea,	// (0x000741b2) cell_dia3_key0_fun_pane

0xdff7,	// (0x000741bf) cell_dia3_key1_fun_pane_ParamLimits

0xdff7,	// (0x000741bf) cell_dia3_key1_fun_pane

0xe004,	// (0x000741cc) dia3_listrow_pane

0x42f8,	// (0x0006a4c0) bg_dia3_numentry_pane_g1

0x6885,	// (0x0006ca4d) bg_button_pane_cp21

0x3128,	// (0x000692f0) cell_dia3_key_num_pane_t1

0x3136,	// (0x000692fe) cell_dia3_key_num_pane_t2

0x3145,	// (0x0006930d) cell_dia3_key_num_pane_t3

0x3154,	// (0x0006931c) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x000760ca) cell_dia3_key_num_pane_t

0x6885,	// (0x0006ca4d) bg_button_pane_cp19

0xe011,	// (0x000741d9) cell_dia3_key0_fun_pane_g1

0x6885,	// (0x0006ca4d) bg_button_pane_cp20

0xe019,	// (0x000741e1) cell_dia3_key1_fun_pane_g1

0xe021,	// (0x000741e9) area_left_week_number_pane

0xe02a,	// (0x000741f2) area_top_day_name_pane

0xe033,	// (0x000741fb) frame_month_view_pane

0xe03d,	// (0x00074205) grid_month_view_pane

0xe047,	// (0x0007420f) cell_top_day_name_pane_ParamLimits

0xe047,	// (0x0007420f) cell_top_day_name_pane

0xe063,	// (0x0007422b) cell_area_left_week_number_pane_ParamLimits

0xe063,	// (0x0007422b) cell_area_left_week_number_pane

0xe077,	// (0x0007423f) cell_month_view_pane_ParamLimits

0xe077,	// (0x0007423f) cell_month_view_pane

0x3163,	// (0x0006932b) frm_month_g1

0xe096,	// (0x0007425e) frm_month_g2

0xe0a0,	// (0x00074268) frm_month_g3

0xe0aa,	// (0x00074272) frm_month_g4

0xe0b4,	// (0x0007427c) frm_month_g5

0xe0be,	// (0x00074286) frm_month_g6

0xe0c8,	// (0x00074290) frm_month_g7

0x316c,	// (0x00069334) frm_month_g8

0xe0d2,	// (0x0007429a) frm_month_g9

0xe0db,	// (0x000742a3) frm_month_g10

0xe0e4,	// (0x000742ac) frm_month_g11

0xe0ed,	// (0x000742b5) frm_month_g12

0xe0f6,	// (0x000742be) frm_month_g13

0xe101,	// (0x000742c9) frm_month_g14

0xe10c,	// (0x000742d4) frm_month_g15

0xe117,	// (0x000742df) frm_month_g16

0x000f,

0xff0b,	// (0x000760d3) frm_month_g

0xe122,	// (0x000742ea) cell_top_day_name_pane_t1

0xe131,	// (0x000742f9) cell_area_left_week_number_pane_g1

0xe122,	// (0x000742ea) cell_area_left_week_number_pane_t1

0x1c4b,	// (0x00067e13) cell_month_view_pane_g1

0xe139,	// (0x00074301) cell_month_view_pane_t1

0x6885,	// (0x0006ca4d) main_fps_pane

0x4899,	// (0x0006aa61) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4899,	// (0x0006aa61) cmail_ddmenu_btn02_pane_cp1

0x48b5,	// (0x0006aa7d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x48b5,	// (0x0006aa7d) cmail_ddmenu_btn02_pane_cp2

0xdab3,	// (0x00073c7b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdab3,	// (0x00073c7b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe33,	// (0x00075ffb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe33,	// (0x00075ffb) cmail_ddmenu_btn02_pane_g

0xdad1,	// (0x00073c99) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdad1,	// (0x00073c99) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe38,	// (0x00076000) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe38,	// (0x00076000) cmail_ddmenu_btn02_pane_t

0xe148,	// (0x00074310) fps_text_pane_ParamLimits

0xe148,	// (0x00074310) fps_text_pane

0xe155,	// (0x0007431d) main_fps_pane_g1_ParamLimits

0xe155,	// (0x0007431d) main_fps_pane_g1

0xe161,	// (0x00074329) wait_bar_pane_cp010_ParamLimits

0xe161,	// (0x00074329) wait_bar_pane_cp010

0xe16d,	// (0x00074335) fps_text_pane_t1_ParamLimits

0xe16d,	// (0x00074335) fps_text_pane_t1

0xb905,	// (0x00071acd) cam4_image_uncrop_pane_g1

0xb90e,	// (0x00071ad6) cam4_image_uncrop_pane_g2

0xb917,	// (0x00071adf) cam4_image_uncrop_pane_g3

0xb920,	// (0x00071ae8) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00075ad5) cam4_image_uncrop_pane_g

0xe004,	// (0x000741cc) dia3_listrow_pane_ParamLimits

0x6885,	// (0x0006ca4d) main_phob2_pane

0xd72f,	// (0x000738f7) cell_tport_appsw_pane_cp02_ParamLimits

0xd72f,	// (0x000738f7) cell_tport_appsw_pane_cp02

0xd73e,	// (0x00073906) cell_tport_appsw_pane_cp03_ParamLimits

0xd73e,	// (0x00073906) cell_tport_appsw_pane_cp03

0x6885,	// (0x0006ca4d) phob2_contact_card_pane

0x6885,	// (0x0006ca4d) phob2_listscroll_pane

0x3175,	// (0x0006933d) phob2_list_pane

0x317d,	// (0x00069345) scroll_pane_cp034

0xe186,	// (0x0007434e) phob2_cc_data_pane_ParamLimits

0xe186,	// (0x0007434e) phob2_cc_data_pane

0xe1a2,	// (0x0007436a) phob2_cc_listscroll_pane_ParamLimits

0xe1a2,	// (0x0007436a) phob2_cc_listscroll_pane

0xe1be,	// (0x00074386) list_double_large_graphic_phob2_pane_ParamLimits

0xe1be,	// (0x00074386) list_double_large_graphic_phob2_pane

0xe1d8,	// (0x000743a0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe1d8,	// (0x000743a0) list_double_large_graphic_phob2_pane_g1

0x67aa,	// (0x0006c972) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x67aa,	// (0x0006c972) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x000760f4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x000760f4) list_double_large_graphic_phob2_pane_g

0x67b6,	// (0x0006c97e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x67b6,	// (0x0006c97e) list_double_large_graphic_phob2_pane_t1

0x67cb,	// (0x0006c993) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x67cb,	// (0x0006c993) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x000760f9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x000760f9) list_double_large_graphic_phob2_pane_t

0x6885,	// (0x0006ca4d) list_highlight_pane_cp024

0x3185,	// (0x0006934d) phob2_cc_button_pane

0xe1e5,	// (0x000743ad) phob2_cc_data_pane_g1_ParamLimits

0xe1e5,	// (0x000743ad) phob2_cc_data_pane_g1

0xe1f1,	// (0x000743b9) phob2_cc_data_pane_g2_ParamLimits

0xe1f1,	// (0x000743b9) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x000760fe) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x000760fe) phob2_cc_data_pane_g

0xe1fd,	// (0x000743c5) phob2_cc_data_pane_t1_ParamLimits

0xe1fd,	// (0x000743c5) phob2_cc_data_pane_t1

0xe20f,	// (0x000743d7) phob2_cc_data_pane_t2_ParamLimits

0xe20f,	// (0x000743d7) phob2_cc_data_pane_t2

0xe221,	// (0x000743e9) phob2_cc_data_pane_t3_ParamLimits

0xe221,	// (0x000743e9) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x00076103) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x00076103) phob2_cc_data_pane_t

0x318d,	// (0x00069355) phob2_cc_list_pane_ParamLimits

0x318d,	// (0x00069355) phob2_cc_list_pane

0x3e6b,	// (0x0006a033) scroll_pane_cp035_ParamLimits

0x3e6b,	// (0x0006a033) scroll_pane_cp035

0x99cb,	// (0x0006fb93) bg_button_pane_cp033

0x3199,	// (0x00069361) phob2_cc_button_pane_g1

0x31a5,	// (0x0006936d) phob2_cc_button_pane_t1

0x31ba,	// (0x00069382) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x0007610a) phob2_cc_button_pane_t

0xe233,	// (0x000743fb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe233,	// (0x000743fb) list_double_large_graphic_phob2_cc_pane

0xe252,	// (0x0007441a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe252,	// (0x0007441a) list_double_large_graphic_phob2_cc_pane_g1

0x67dd,	// (0x0006c9a5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x67dd,	// (0x0006c9a5) list_double_large_graphic_phob2_cc_pane_g2

0x67ec,	// (0x0006c9b4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x67ec,	// (0x0006c9b4) list_double_large_graphic_phob2_cc_pane_g3

0x67fb,	// (0x0006c9c3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x67fb,	// (0x0006c9c3) list_double_large_graphic_phob2_cc_pane_g4

0x680c,	// (0x0006c9d4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x680c,	// (0x0006c9d4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x0007610f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x0007610f) list_double_large_graphic_phob2_cc_pane_g

0x681b,	// (0x0006c9e3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x681b,	// (0x0006c9e3) list_double_large_graphic_phob2_cc_pane_t1

0x6844,	// (0x0006ca0c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6844,	// (0x0006ca0c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x0007611a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x0007611a) list_double_large_graphic_phob2_cc_pane_t

0x31cc,	// (0x00069394) list_highlight_pane_cp025_ParamLimits

0x31cc,	// (0x00069394) list_highlight_pane_cp025

0x99cb,	// (0x0006fb93) bg_button_pane_cp033_ParamLimits

0x3199,	// (0x00069361) phob2_cc_button_pane_g1_ParamLimits

0x31a5,	// (0x0006936d) phob2_cc_button_pane_t1_ParamLimits

0x31ba,	// (0x00069382) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x0007610a) phob2_cc_button_pane_t_ParamLimits

0x6b43,	// (0x0006cd0b) popup_wgtman_window

0x3953,	// (0x00069b1b) scroll_pane_cp038

0xde2e,	// (0x00073ff6) wgtman_btn_pane_cp_01_ParamLimits

0xde2e,	// (0x00073ff6) wgtman_btn_pane_cp_01

0x31da,	// (0x000693a2) wgtman_content_pane

0x31e3,	// (0x000693ab) wgtman_heading_pane

0x6885,	// (0x0006ca4d) bg_heading_pane_cp02

0x31ec,	// (0x000693b4) wgtman_heading_pane_g1

0x31f4,	// (0x000693bc) wgtman_heading_pane_t1

0x3202,	// (0x000693ca) scroll_pane_cp036

0x320a,	// (0x000693d2) wgtman_list_pane

0x477a,	// (0x0006a942) wgtman_list_pane_t1_ParamLimits

0x477a,	// (0x0006a942) wgtman_list_pane_t1

0xb862,	// (0x00071a2a) cam4_grid_pane

0x5bad,	// (0x0006bd75) bg_button_pane_cp015_ParamLimits

0xc4f4,	// (0x000726bc) bg_button_pane_cp016_ParamLimits

0xc507,	// (0x000726cf) bg_button_pane_cp017_ParamLimits

0x5bf1,	// (0x0006bdb9) popup_vitu2_query_window_g3_ParamLimits

0x5bf1,	// (0x0006bdb9) popup_vitu2_query_window_g3

0x5c6a,	// (0x0006be32) popup_vitu2_query_window_t6_ParamLimits

0x5c6a,	// (0x0006be32) popup_vitu2_query_window_t6

0x5c95,	// (0x0006be5d) popup_vitu2_query_window_t7_ParamLimits

0x5c95,	// (0x0006be5d) popup_vitu2_query_window_t7

0x426d,	// (0x0006a435) cam4_grid_pane_g1

0x4276,	// (0x0006a43e) cam4_grid_pane_g2

0x3212,	// (0x000693da) cam4_grid_pane_g3

0x321b,	// (0x000693e3) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x0007611f) cam4_grid_pane_g

0x79db,	// (0x0006dba3) aid_placing_vt_slider_lsc_ParamLimits

0x7d0e,	// (0x0006ded6) vidtel_button_pane_ParamLimits

0x7d0e,	// (0x0006ded6) vidtel_button_pane

0x6885,	// (0x0006ca4d) bg_button_pane_cp034

0xe263,	// (0x0007442b) vidtel_button_pane_g1

0x3226,	// (0x000693ee) vidtel_button_pane_t1

0x3a80,	// (0x00069c48) aid_size_vtel_slider_touch

0x3e6b,	// (0x0006a033) scroll_pane_cp039

0x4336,	// (0x0006a4fe) ncim_query_button_pane_cp01_ParamLimits

0x4355,	// (0x0006a51d) ncimui_query_pane_g1_ParamLimits

0x99cb,	// (0x0006fb93) input_focus_pane_cp012_ParamLimits

0x437a,	// (0x0006a542) ncim_query_entry_pane_t1_ParamLimits

0x3e6b,	// (0x0006a033) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
